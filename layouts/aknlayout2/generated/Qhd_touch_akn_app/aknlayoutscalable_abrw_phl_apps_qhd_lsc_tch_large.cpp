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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a4f4e };

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
0x0213,	// (0x000a5161) Screen

0x021f,	// (0x000a516d) application_window

0x0287,	// (0x000a51d5) area_bottom_pane_ParamLimits

0x0287,	// (0x000a51d5) area_bottom_pane

0x02e4,	// (0x000a5232) area_top_pane_ParamLimits

0x02e4,	// (0x000a5232) area_top_pane

0x955f,	// (0x000ae4ad) call_video_uplink_pane_ParamLimits

0x955f,	// (0x000ae4ad) call_video_uplink_pane

0x0372,	// (0x000a52c0) main_pane_ParamLimits

0x0372,	// (0x000a52c0) main_pane

0xbaf0,	// (0x000b0a3e) context_pane

0x3a08,	// (0x000a8956) navi_pane

0x3a3a,	// (0x000a8988) popup_cale_events_window_ParamLimits

0x3a3a,	// (0x000a8988) popup_cale_events_window

0xbb03,	// (0x000b0a51) popup_mup_playback_window

0x3a52,	// (0x000a89a0) signal_pane

0xed90,	// (0x000b3cde) main_browser_pane

0xa6d0,	// (0x000af61e) main_burst_pane

0x3756,	// (0x000a86a4) main_calc_pane

0xbad6,	// (0x000b0a24) main_cale_day_pane

0x376a,	// (0x000a86b8) main_cale_month_pane

0xbad6,	// (0x000b0a24) main_cale_week_pane

0xa6d0,	// (0x000af61e) main_call_pane

0xea70,	// (0x000b39be) main_call_poc_pane

0xa6d0,	// (0x000af61e) main_camera_pane

0xa6d0,	// (0x000af61e) main_chi_dic_pane

0xa44d,	// (0x000af39b) main_clock_pane

0xea70,	// (0x000b39be) main_fmradio_pane

0xa6d0,	// (0x000af61e) main_graph_messa_pane

0xea70,	// (0x000b39be) main_help_pane

0xed90,	// (0x000b3cde) main_im_pane

0xeccb,	// (0x000b3c19) main_image_pane_ParamLimits

0xeccb,	// (0x000b3c19) main_image_pane

0xea70,	// (0x000b39be) main_location2_pane

0xa6d0,	// (0x000af61e) main_location_pane

0xeccb,	// (0x000b3c19) main_messa_pane

0xea70,	// (0x000b39be) main_mp2_pane

0xa6d0,	// (0x000af61e) main_mp_pane

0xea70,	// (0x000b39be) main_msg_pane

0xea70,	// (0x000b39be) main_mup_eq_pane

0xea70,	// (0x000b39be) main_mup_pane

0xed90,	// (0x000b3cde) main_notes_pane

0xea70,	// (0x000b39be) main_pec_pane

0xea70,	// (0x000b39be) main_phob_pane

0xea70,	// (0x000b39be) main_pinb_pane

0xea70,	// (0x000b39be) main_postcard_pane

0xea70,	// (0x000b39be) main_qdial_pane

0xa6d0,	// (0x000af61e) main_skin_pane

0xea70,	// (0x000b39be) main_smil2_pane

0xa6d0,	// (0x000af61e) main_smil_pane

0xa6d0,	// (0x000af61e) main_video_pane

0xa6d0,	// (0x000af61e) main_video_tele_pane

0xeccb,	// (0x000b3c19) main_viewer_pane_ParamLimits

0xeccb,	// (0x000b3c19) main_viewer_pane

0xa6d0,	// (0x000af61e) main_vorec_pane

0x37bc,	// (0x000a870a) popup_blid_sat_info_window_ParamLimits

0x37bc,	// (0x000a870a) popup_blid_sat_info_window

0x3814,	// (0x000a8762) popup_dyc_status_message_window_ParamLimits

0x3814,	// (0x000a8762) popup_dyc_status_message_window

0x382e,	// (0x000a877c) popup_grid_large_graphic_window_ParamLimits

0x382e,	// (0x000a877c) popup_grid_large_graphic_window

0x38ea,	// (0x000a8838) popup_loc_request_window_ParamLimits

0x38ea,	// (0x000a8838) popup_loc_request_window

0x39e0,	// (0x000a892e) popup_wml_address_window_ParamLimits

0x39e0,	// (0x000a892e) popup_wml_address_window

0x3590,	// (0x000a84de) call_muted_g1

0x3245,	// (0x000a8193) popup_call_audio_conf_window_ParamLimits

0x3245,	// (0x000a8193) popup_call_audio_conf_window

0x35a4,	// (0x000a84f2) popup_call_audio_first_window_ParamLimits

0x35a4,	// (0x000a84f2) popup_call_audio_first_window

0x361a,	// (0x000a8568) popup_call_audio_in_window_ParamLimits

0x361a,	// (0x000a8568) popup_call_audio_in_window

0x3656,	// (0x000a85a4) popup_call_audio_out_window_ParamLimits

0x3656,	// (0x000a85a4) popup_call_audio_out_window

0x3690,	// (0x000a85de) popup_call_audio_second_window_ParamLimits

0x3690,	// (0x000a85de) popup_call_audio_second_window

0x36e6,	// (0x000a8634) popup_call_audio_wait_window_ParamLimits

0x36e6,	// (0x000a8634) popup_call_audio_wait_window

0x371b,	// (0x000a8669) popup_number_entry_window_ParamLimits

0x371b,	// (0x000a8669) popup_number_entry_window

0xe65d,	// (0x000b35ab) bg_popup_call_pane_cp05_ParamLimits

0xe65d,	// (0x000b35ab) bg_popup_call_pane_cp05

0xe67d,	// (0x000b35cb) popup_number_entry_window_t1

0xe690,	// (0x000b35de) popup_number_entry_window_t2

0xe6a2,	// (0x000b35f0) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000b4014) popup_number_entry_window_t

0xe6b4,	// (0x000b3602) text_title_cp2

0xe6c7,	// (0x000b3615) bg_popup_call_pane_cp_ParamLimits

0xe6c7,	// (0x000b3615) bg_popup_call_pane_cp

0xe6d5,	// (0x000b3623) call_thumbnail_pane

0xe6dd,	// (0x000b362b) popup_call_audio_in_window_g1_ParamLimits

0xe6dd,	// (0x000b362b) popup_call_audio_in_window_g1

0xe6e9,	// (0x000b3637) popup_call_audio_in_window_g2_ParamLimits

0xe6e9,	// (0x000b3637) popup_call_audio_in_window_g2

0xe6f5,	// (0x000b3643) popup_call_audio_in_window_g3_ParamLimits

0xe6f5,	// (0x000b3643) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000b401d) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000b401d) popup_call_audio_in_window_g

0xe701,	// (0x000b364f) popup_call_audio_in_window_t1_ParamLimits

0xe701,	// (0x000b364f) popup_call_audio_in_window_t1

0xe71d,	// (0x000b366b) popup_call_audio_in_window_t2_ParamLimits

0xe71d,	// (0x000b366b) popup_call_audio_in_window_t2

0xe739,	// (0x000b3687) popup_call_audio_in_window_t3_ParamLimits

0xe739,	// (0x000b3687) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000b4024) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000b4024) popup_call_audio_in_window_t

0xe6c7,	// (0x000b3615) bg_popup_call_pane_cp01_ParamLimits

0xe6c7,	// (0x000b3615) bg_popup_call_pane_cp01

0xe6d5,	// (0x000b3623) call_thumbnail_pane_cp02

0xe74c,	// (0x000b369a) call_type_pane_cp022

0xe754,	// (0x000b36a2) popup_call_audio_out_window_g1_ParamLimits

0xe754,	// (0x000b36a2) popup_call_audio_out_window_g1

0xe766,	// (0x000b36b4) popup_call_audio_out_window_g2_ParamLimits

0xe766,	// (0x000b36b4) popup_call_audio_out_window_g2

0xe772,	// (0x000b36c0) popup_call_audio_out_window_g3_ParamLimits

0xe772,	// (0x000b36c0) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000b402b) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000b402b) popup_call_audio_out_window_g

0xe784,	// (0x000b36d2) popup_call_audio_out_window_t1_ParamLimits

0xe784,	// (0x000b36d2) popup_call_audio_out_window_t1

0xe79c,	// (0x000b36ea) popup_call_audio_out_window_t2_ParamLimits

0xe79c,	// (0x000b36ea) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000b4032) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000b4032) popup_call_audio_out_window_t

0xe7b1,	// (0x000b36ff) bg_popup_call_pane_ParamLimits

0xe7b1,	// (0x000b36ff) bg_popup_call_pane

0x052e,	// (0x000a547c) call_thumbnail_pane_cp_ParamLimits

0x052e,	// (0x000a547c) call_thumbnail_pane_cp

0xe835,	// (0x000b3783) call_type_pane_cp01_ParamLimits

0xe835,	// (0x000b3783) call_type_pane_cp01

0xe879,	// (0x000b37c7) popup_call_audio_first_window_g1_ParamLimits

0xe879,	// (0x000b37c7) popup_call_audio_first_window_g1

0xe8c5,	// (0x000b3813) popup_call_audio_first_window_g2_ParamLimits

0xe8c5,	// (0x000b3813) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000b4037) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000b4037) popup_call_audio_first_window_g

0xe909,	// (0x000b3857) popup_call_audio_first_window_t1_ParamLimits

0xe909,	// (0x000b3857) popup_call_audio_first_window_t1

0xe9b5,	// (0x000b3903) popup_call_audio_first_window_t4_ParamLimits

0xe9b5,	// (0x000b3903) popup_call_audio_first_window_t4

0xea41,	// (0x000b398f) popup_call_audio_first_window_t5_ParamLimits

0xea41,	// (0x000b398f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000b403c) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000b403c) popup_call_audio_first_window_t

0xea70,	// (0x000b39be) bg_popup_call_pane_cp02

0xea7a,	// (0x000b39c8) call_type_pane_cp023

0xea82,	// (0x000b39d0) popup_call_audio_wait_window_g1

0xea8a,	// (0x000b39d8) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b4043) popup_call_audio_wait_window_g

0xea92,	// (0x000b39e0) popup_call_audio_wait_window_t3

0xeaa0,	// (0x000b39ee) bg_popup_call_pane_cp03_ParamLimits

0xeaa0,	// (0x000b39ee) bg_popup_call_pane_cp03

0xeb00,	// (0x000b3a4e) call_thumbnail_pane_cp011_ParamLimits

0xeb00,	// (0x000b3a4e) call_thumbnail_pane_cp011

0xeb0c,	// (0x000b3a5a) call_type_pane_cp034_ParamLimits

0xeb0c,	// (0x000b3a5a) call_type_pane_cp034

0xeb48,	// (0x000b3a96) popup_call_audio_second_window_g1_ParamLimits

0xeb48,	// (0x000b3a96) popup_call_audio_second_window_g1

0xeb84,	// (0x000b3ad2) popup_call_audio_second_window_g2_ParamLimits

0xeb84,	// (0x000b3ad2) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000b4048) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000b4048) popup_call_audio_second_window_g

0xebc0,	// (0x000b3b0e) popup_call_audio_second_window_t1_ParamLimits

0xebc0,	// (0x000b3b0e) popup_call_audio_second_window_t1

0xec41,	// (0x000b3b8f) popup_call_audio_second_window_t2_ParamLimits

0xec41,	// (0x000b3b8f) popup_call_audio_second_window_t2

0xec77,	// (0x000b3bc5) popup_call_audio_second_window_t3_ParamLimits

0xec77,	// (0x000b3bc5) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000b404d) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000b404d) popup_call_audio_second_window_t

0xea70,	// (0x000b39be) bg_popup_call_pane_cp04

0xecad,	// (0x000b3bfb) list_conf_pane

0xecb5,	// (0x000b3c03) popup_call_audio_conf_window_t1

0xecc3,	// (0x000b3c11) call_thumbnail_pane_g1

0xeccb,	// (0x000b3c19) bg_pinb_pane_ParamLimits

0xeccb,	// (0x000b3c19) bg_pinb_pane

0xecd9,	// (0x000b3c27) find_pinb_pane

0xece2,	// (0x000b3c30) listscroll_pinb_pane_ParamLimits

0xece2,	// (0x000b3c30) listscroll_pinb_pane

0xecf1,	// (0x000b3c3f) pinb_bg_pane_g1

0x0552,	// (0x000a54a0) pinb_bg_pane_g2

0x055e,	// (0x000a54ac) pinb_bg_pane_g3

0x056a,	// (0x000a54b8) pinb_bg_pane_g4

0x0576,	// (0x000a54c4) pinb_bg_pane_g5

0x0582,	// (0x000a54d0) pinb_bg_pane_g6

0x058d,	// (0x000a54db) pinb_bg_pane_g7

0x0598,	// (0x000a54e6) pinb_bg_pane_g8

0x05a3,	// (0x000a54f1) pinb_bg_pane_g9

0x05ad,	// (0x000a54fb) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000b4054) pinb_bg_pane_g

0x05ca,	// (0x000a5518) grid_pinb_pane

0x05d3,	// (0x000a5521) list_pinb_pane

0x05dc,	// (0x000a552a) scroll_pane_cp01_ParamLimits

0x05dc,	// (0x000a552a) scroll_pane_cp01

0xecfb,	// (0x000b3c49) find_pinb_pane_g1_ParamLimits

0xecfb,	// (0x000b3c49) find_pinb_pane_g1

0xed13,	// (0x000b3c61) find_pinb_pane_t1

0xed25,	// (0x000b3c73) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000b406e) find_pinb_pane_t

0xed3a,	// (0x000b3c88) input_focus_pane_cp01_ParamLimits

0xed3a,	// (0x000b3c88) input_focus_pane_cp01

0x05ee,	// (0x000a553c) cell_pinb_pane_ParamLimits

0x05ee,	// (0x000a553c) cell_pinb_pane

0x0617,	// (0x000a5565) cell_pinb_pane_g1_ParamLimits

0x0617,	// (0x000a5565) cell_pinb_pane_g1

0x0627,	// (0x000a5575) cell_pinb_pane_g2_ParamLimits

0x0627,	// (0x000a5575) cell_pinb_pane_g2

0xed46,	// (0x000b3c94) cell_pinb_pane_g3_ParamLimits

0xed46,	// (0x000b3c94) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000b4073) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000b4073) cell_pinb_pane_g

0xea70,	// (0x000b39be) grid_highlight_pane_cp01

0x0633,	// (0x000a5581) list_pinb_item_pane_ParamLimits

0x0633,	// (0x000a5581) list_pinb_item_pane

0xea70,	// (0x000b39be) list_highlight_pane_cp02

0x0645,	// (0x000a5593) list_pinb_item_pane_g1_ParamLimits

0x0645,	// (0x000a5593) list_pinb_item_pane_g1

0x0652,	// (0x000a55a0) list_pinb_item_pane_g2_ParamLimits

0x0652,	// (0x000a55a0) list_pinb_item_pane_g2

0x065e,	// (0x000a55ac) list_pinb_item_pane_g3_ParamLimits

0x065e,	// (0x000a55ac) list_pinb_item_pane_g3

0x066f,	// (0x000a55bd) list_pinb_item_pane_g4_ParamLimits

0x066f,	// (0x000a55bd) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000b407a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000b407a) list_pinb_item_pane_g

0x067b,	// (0x000a55c9) list_pinb_item_pane_t1_ParamLimits

0x067b,	// (0x000a55c9) list_pinb_item_pane_t1

0x06b0,	// (0x000a55fe) calc_display_pane

0x06d8,	// (0x000a5626) calc_paper_pane

0x06fb,	// (0x000a5649) grid_calc_pane

0xea70,	// (0x000b39be) bg_list_pane_cp01

0x0729,	// (0x000a5677) clock_g1

0x0731,	// (0x000a567f) clock_g2

0x0001,

0xf135,	// (0x000b4083) clock_g

0x0739,	// (0x000a5687) clock_t1_ParamLimits

0x0739,	// (0x000a5687) clock_t1

0x074e,	// (0x000a569c) clock_t2_ParamLimits

0x074e,	// (0x000a569c) clock_t2

0x0760,	// (0x000a56ae) clock_t3_ParamLimits

0x0760,	// (0x000a56ae) clock_t3

0x0772,	// (0x000a56c0) clock_t4_ParamLimits

0x0772,	// (0x000a56c0) clock_t4

0x0784,	// (0x000a56d2) clock_t5_ParamLimits

0x0784,	// (0x000a56d2) clock_t5

0x0799,	// (0x000a56e7) clock_t6_ParamLimits

0x0799,	// (0x000a56e7) clock_t6

0x07ab,	// (0x000a56f9) clock_t7_ParamLimits

0x07ab,	// (0x000a56f9) clock_t7

0x07bd,	// (0x000a570b) clock_t8_ParamLimits

0x07bd,	// (0x000a570b) clock_t8

0x07d1,	// (0x000a571f) clock_t9_ParamLimits

0x07d1,	// (0x000a571f) clock_t9

0x0008,

0xf13a,	// (0x000b4088) clock_t_ParamLimits

0xf13a,	// (0x000b4088) clock_t

0xed52,	// (0x000b3ca0) popup_clock_analogue_window_cp02

0xed52,	// (0x000b3ca0) popup_clock_digital_window_cp01

0xed5a,	// (0x000b3ca8) listscroll_help_pane

0xea70,	// (0x000b39be) phob_pre_status_pane

0xed64,	// (0x000b3cb2) grid_qdial_pane

0xeccb,	// (0x000b3c19) listscroll_mce_pane

0xeccb,	// (0x000b3c19) bg_notes_pane

0xed6e,	// (0x000b3cbc) list_notes_pane

0x07e5,	// (0x000a5733) scroll_pane_cp06

0xed7c,	// (0x000b3cca) bg_calc_paper_pane

0x959d,	// (0x000ae4eb) list_calc_pane

0xed90,	// (0x000b3cde) bg_calc_display_pane

0x07f9,	// (0x000a5747) calc_display_pane_t1

0x080b,	// (0x000a5759) calc_display_pane_t2

0x95b7,	// (0x000ae505) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000b409b) calc_display_pane_t

0x081d,	// (0x000a576b) cell_calc_pane_ParamLimits

0x081d,	// (0x000a576b) cell_calc_pane

0xed9c,	// (0x000b3cea) bg_calc_paper_pane_g1

0xeda8,	// (0x000b3cf6) bg_calc_paper_pane_g2

0xedb4,	// (0x000b3d02) bg_calc_paper_pane_g3

0xedc0,	// (0x000b3d0e) bg_calc_paper_pane_g4

0xedcc,	// (0x000b3d1a) bg_calc_paper_pane_g5

0x0852,	// (0x000a57a0) bg_calc_paper_pane_g6

0x0861,	// (0x000a57af) bg_calc_paper_pane_g7

0x0870,	// (0x000a57be) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000b40a2) bg_calc_paper_pane_g

0x0883,	// (0x000a57d1) calc_bg_paper_pane_g9

0x0896,	// (0x000a57e4) list_calc_item_pane_ParamLimits

0x0896,	// (0x000a57e4) list_calc_item_pane

0xedd8,	// (0x000b3d26) list_calc_item_pane_g1

0x95c9,	// (0x000ae517) list_calc_item_pane_t1_ParamLimits

0x95c9,	// (0x000ae517) list_calc_item_pane_t1

0x08ab,	// (0x000a57f9) list_calc_item_pane_t2_ParamLimits

0x08ab,	// (0x000a57f9) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000b40b3) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000b40b3) list_calc_item_pane_t

0xede5,	// (0x000b3d33) cell_calc_pane_g1

0xedef,	// (0x000b3d3d) grid_highlight_pane_cp02

0x08dd,	// (0x000a582b) bg_calc_display_pane_g1

0x08e6,	// (0x000a5834) bg_calc_display_pane_g2

0x08f0,	// (0x000a583e) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000b40bd) bg_calc_display_pane_g

0x08f9,	// (0x000a5847) cell_qdial_pane_ParamLimits

0x08f9,	// (0x000a5847) cell_qdial_pane

0x090d,	// (0x000a585b) cell_qdial_pane_g1_ParamLimits

0x090d,	// (0x000a585b) cell_qdial_pane_g1

0x0923,	// (0x000a5871) cell_qdial_pane_g2_ParamLimits

0x0923,	// (0x000a5871) cell_qdial_pane_g2

0xee11,	// (0x000b3d5f) cell_qdial_pane_g3_ParamLimits

0xee11,	// (0x000b3d5f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000b40c4) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000b40c4) cell_qdial_pane_g

0x094a,	// (0x000a5898) cell_qdial_pane_t1_ParamLimits

0x094a,	// (0x000a5898) cell_qdial_pane_t1

0x0962,	// (0x000a58b0) cell_qdial_pane_t2_ParamLimits

0x0962,	// (0x000a58b0) cell_qdial_pane_t2

0x0975,	// (0x000a58c3) cell_qdial_pane_t3_ParamLimits

0x0975,	// (0x000a58c3) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000b40cd) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000b40cd) cell_qdial_pane_t

0xea70,	// (0x000b39be) grid_highlight_pane_cp04

0xee1d,	// (0x000b3d6b) thumbnail_qdial_pane_ParamLimits

0xee1d,	// (0x000b3d6b) thumbnail_qdial_pane

0xee79,	// (0x000b3dc7) list_help_pane

0xee82,	// (0x000b3dd0) scroll_pane_cp02

0x0988,	// (0x000a58d6) help_list_pane_t1_ParamLimits

0x0988,	// (0x000a58d6) help_list_pane_t1

0x95db,	// (0x000ae529) bg_notes_pane_g2

0x95e3,	// (0x000ae531) bg_notes_pane_g3

0x95eb,	// (0x000ae539) notes_bg_pane_g1

0x95f3,	// (0x000ae541) notes_bg_pane_g4

0x95fb,	// (0x000ae549) notes_bg_pane_g5

0x9603,	// (0x000ae551) notes_bg_pane_g6

0x960b,	// (0x000ae559) notes_bg_pane_g7

0x9613,	// (0x000ae561) notes_bg_pane_g8

0x961b,	// (0x000ae569) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000b40eb) notes_bg_pane_g

0x09a5,	// (0x000a58f3) list_notes_text_pane_ParamLimits

0x09a5,	// (0x000a58f3) list_notes_text_pane

0xee8b,	// (0x000b3dd9) list_notes_text_pane_g1

0x09ba,	// (0x000a5908) list_notes_text_pane_t1

0x09c8,	// (0x000a5916) listscroll_cale_week_pane

0x09f4,	// (0x000a5942) bg_cale_heading_pane

0xeeae,	// (0x000b3dfc) bg_cale_pane_cp01

0x0a0c,	// (0x000a595a) cale_week_corner_pane

0x0a2b,	// (0x000a5979) cale_week_day_heading_pane

0x0a48,	// (0x000a5996) cale_week_scroll_pane_g1

0x0a5b,	// (0x000a59a9) cale_week_scroll_pane_g2

0x0a73,	// (0x000a59c1) cale_week_scroll_pane_g3

0x0a8b,	// (0x000a59d9) cale_week_scroll_pane_g4

0x0aa3,	// (0x000a59f1) cale_week_scroll_pane_g5

0x0ac3,	// (0x000a5a11) cale_week_scroll_pane_g6

0x0ae3,	// (0x000a5a31) cale_week_scroll_pane_g7

0x0b03,	// (0x000a5a51) cale_week_scroll_pane_g8

0x0b27,	// (0x000a5a75) cale_week_scroll_pane_g9

0x0b3f,	// (0x000a5a8d) cale_week_scroll_pane_g10

0x0b57,	// (0x000a5aa5) cale_week_scroll_pane_g11

0x0b6f,	// (0x000a5abd) cale_week_scroll_pane_g12

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g13

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g14

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000b40fa) cale_week_scroll_pane_g

0x0bc3,	// (0x000a5b11) cale_week_time_pane

0x0be7,	// (0x000a5b35) grid_cale_week_pane

0xeede,	// (0x000b3e2c) scroll_pane_cp08

0x0c0d,	// (0x000a5b5b) cell_cale_week_pane_ParamLimits

0x0c0d,	// (0x000a5b5b) cell_cale_week_pane

0x0c9b,	// (0x000a5be9) cale_week_day_heading_pane_t1

0x0ce0,	// (0x000a5c2e) cale_week_day_heading_pane_t2

0x0d2a,	// (0x000a5c78) cale_week_day_heading_pane_t3

0x0d74,	// (0x000a5cc2) cale_week_day_heading_pane_t4

0x0dbe,	// (0x000a5d0c) cale_week_day_heading_pane_t5

0x0e10,	// (0x000a5d5e) cale_week_day_heading_pane_t6

0x0e62,	// (0x000a5db0) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000b411b) cale_week_day_heading_pane_t

0xeefb,	// (0x000b3e49) bg_cale_side_pane

0x0ea7,	// (0x000a5df5) cale_week_time_pane_t1

0x0ec1,	// (0x000a5e0f) cale_week_time_pane_t2

0x0edb,	// (0x000a5e29) cale_week_time_pane_t3

0x0ef5,	// (0x000a5e43) cale_week_time_pane_t4

0x0f0f,	// (0x000a5e5d) cale_week_time_pane_t5

0x0f29,	// (0x000a5e77) cale_week_time_pane_t6

0x0f43,	// (0x000a5e91) cale_week_time_pane_t7

0x0f5d,	// (0x000a5eab) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000b412a) cale_week_time_pane_t

0x0f7d,	// (0x000a5ecb) cell_cale_week_pane_g2

0x0f9c,	// (0x000a5eea) cell_cale_week_pane_g3_ParamLimits

0x0f9c,	// (0x000a5eea) cell_cale_week_pane_g3

0xef09,	// (0x000b3e57) grid_highlight_pane_cp07

0xef11,	// (0x000b3e5f) listscroll_gms_pane

0xef1b,	// (0x000b3e69) grid_gms_pane

0xef24,	// (0x000b3e72) listscroll_gms_pane_g1

0xef2c,	// (0x000b3e7a) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000b413b) listscroll_gms_pane_g

0x0fb4,	// (0x000a5f02) scroll_pane_cp010

0x0fbf,	// (0x000a5f0d) cell_gms_pane_ParamLimits

0x0fbf,	// (0x000a5f0d) cell_gms_pane

0x0fd2,	// (0x000a5f20) cell_gms_pane_g1

0xef34,	// (0x000b3e82) cell_gms_pane_g2

0xef3c,	// (0x000b3e8a) cell_gms_pane_g3

0xef45,	// (0x000b3e93) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000b4140) cell_gms_pane_g

0xef4e,	// (0x000b3e9c) grid_highlight_pane_cp09

0x353a,	// (0x000a8488) phob_pre_status_pane_g1

0x3542,	// (0x000a8490) phob_pre_status_pane_g2

0x354a,	// (0x000a8498) phob_pre_status_pane_g3

0x3552,	// (0x000a84a0) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b452f) phob_pre_status_pane_g

0x3562,	// (0x000a84b0) phob_pre_status_pane_t1

0x3570,	// (0x000a84be) phob_pre_status_pane_t2

0x3580,	// (0x000a84ce) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b453a) phob_pre_status_pane_t

0xea70,	// (0x000b39be) bg_list_pane_cp05

0x0fe2,	// (0x000a5f30) grid_vorec_pane

0x0fea,	// (0x000a5f38) vorec_t1

0x0ff8,	// (0x000a5f46) vorec_t2

0x1006,	// (0x000a5f54) vorec_t3

0x1014,	// (0x000a5f62) vorec_t4

0x9623,	// (0x000ae571) vorec_t5

0x1022,	// (0x000a5f70) vorec_t6

0x0006,

0xf1fb,	// (0x000b4149) vorec_t

0x103e,	// (0x000a5f8c) wait_bar_pane_cp01

0x1046,	// (0x000a5f94) cell_vorec_pane_ParamLimits

0x1046,	// (0x000a5f94) cell_vorec_pane

0x9631,	// (0x000ae57f) cell_vorec_pane_g1

0xea70,	// (0x000b39be) grid_highlight_pane_cp05

0x106e,	// (0x000a5fbc) cams_zoom_pane

0x107d,	// (0x000a5fcb) image_vga_pane

0x1097,	// (0x000a5fe5) main_camera_pane_g1

0x10a9,	// (0x000a5ff7) main_camera_pane_g2

0x10b9,	// (0x000a6007) main_camera_pane_g3

0x10c9,	// (0x000a6017) main_camera_pane_g4

0x10d9,	// (0x000a6027) main_camera_pane_g5

0x10e9,	// (0x000a6037) main_camera_pane_g6

0x10fb,	// (0x000a6049) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b4158) main_camera_pane_g

0x110b,	// (0x000a6059) main_camera_pane_t1

0x1121,	// (0x000a606f) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b4169) main_camera_pane_t

0x115b,	// (0x000a60a9) cams_zoom_pane_cp_ParamLimits

0x115b,	// (0x000a60a9) cams_zoom_pane_cp

0x1183,	// (0x000a60d1) image_cif_pane_ParamLimits

0x1183,	// (0x000a60d1) image_cif_pane

0x11b9,	// (0x000a6107) image_subqcif_pane

0x11c1,	// (0x000a610f) main_video_pane_g1_ParamLimits

0x11c1,	// (0x000a610f) main_video_pane_g1

0x11e5,	// (0x000a6133) main_video_pane_g2_ParamLimits

0x11e5,	// (0x000a6133) main_video_pane_g2

0x1219,	// (0x000a6167) main_video_pane_g3_ParamLimits

0x1219,	// (0x000a6167) main_video_pane_g3

0x1247,	// (0x000a6195) main_video_pane_g4_ParamLimits

0x1247,	// (0x000a6195) main_video_pane_g4

0x1275,	// (0x000a61c3) main_video_pane_g5_ParamLimits

0x1275,	// (0x000a61c3) main_video_pane_g5

0xef62,	// (0x000b3eb0) main_video_pane_g6_ParamLimits

0xef62,	// (0x000b3eb0) main_video_pane_g6

0x0006,

0xf220,	// (0x000b416e) main_video_pane_g_ParamLimits

0xf220,	// (0x000b416e) main_video_pane_g

0x129e,	// (0x000a61ec) main_video_pane_t1_ParamLimits

0x129e,	// (0x000a61ec) main_video_pane_t1

0x963b,	// (0x000ae589) cams_zoom_pane_g1

0x9644,	// (0x000ae592) cams_zoom_pane_g2

0x964d,	// (0x000ae59b) cams_zoom_pane_g3

0x9656,	// (0x000ae5a4) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b417d) cams_zoom_pane_g

0x12fb,	// (0x000a6249) grid_cams_pane

0x1315,	// (0x000a6263) linegrid_cams_pane

0x1329,	// (0x000a6277) cell_cams_pane_ParamLimits

0x1329,	// (0x000a6277) cell_cams_pane

0x965f,	// (0x000ae5ad) cams_burst_image_pane

0x9667,	// (0x000ae5b5) cell_cams_pane_g1

0xea70,	// (0x000b39be) grid_highlight_pane_cp03

0xede5,	// (0x000b3d33) mp_bg_pane_g1

0xea70,	// (0x000b39be) bg_list_pane_cp03

0xb9fb,	// (0x000b0949) bg_mp_pane

0xba03,	// (0x000b0951) grid_mp_pane

0xba0b,	// (0x000b0959) media_player_g1

0xba13,	// (0x000b0961) media_player_t1

0xba21,	// (0x000b096f) media_player_t2

0xba2f,	// (0x000b097d) media_player_t3

0xba3d,	// (0x000b098b) media_player_t4

0xba4b,	// (0x000b0999) media_player_t5

0xba59,	// (0x000b09a7) media_player_t6

0xba67,	// (0x000b09b5) media_player_t7

0x0006,

0xf5cb,	// (0x000b4519) media_player_t

0xba75,	// (0x000b09c3) wait_bar_pane_cp02

0xf5b0,	// (0x000b44fe) main_usb_pane_t

0x3531,	// (0x000a847f) cell_mp_pane

0xede5,	// (0x000b3d33) cell_mp_pane_g1

0xea70,	// (0x000b39be) grid_highlight_pane_cp06

0x966f,	// (0x000ae5bd) grid_skin_colour_pane

0x9677,	// (0x000ae5c5) list_highlight_pane_cp03

0x145f,	// (0x000a63ad) skin_g1

0x967f,	// (0x000ae5cd) skin_t1

0x968e,	// (0x000ae5dc) skin_t2

0x0001,

0xf264,	// (0x000b41b2) skin_t

0x1467,	// (0x000a63b5) cell_skin_colour_pane_ParamLimits

0x1467,	// (0x000a63b5) cell_skin_colour_pane

0x969c,	// (0x000ae5ea) cell_skin_colour_pane_g1

0x14e0,	// (0x000a642e) call_video_g1_ParamLimits

0x14e0,	// (0x000a642e) call_video_g1

0x14fc,	// (0x000a644a) call_video_g2_ParamLimits

0x14fc,	// (0x000a644a) call_video_g2

0x0001,

0xf269,	// (0x000b41b7) call_video_g_ParamLimits

0xf269,	// (0x000b41b7) call_video_g

0x154e,	// (0x000a649c) call_video_uplink_pane_cp1_ParamLimits

0x154e,	// (0x000a649c) call_video_uplink_pane_cp1

0x96ae,	// (0x000ae5fc) call_video_uplink_pane_cp2

0x15ed,	// (0x000a653b) video_down_crop_pane_ParamLimits

0x15ed,	// (0x000a653b) video_down_crop_pane

0x16e4,	// (0x000a6632) video_down_pane_ParamLimits

0x16e4,	// (0x000a6632) video_down_pane

0x96b6,	// (0x000ae604) video_down_subqcif_pane_ParamLimits

0x96b6,	// (0x000ae604) video_down_subqcif_pane

0x96ce,	// (0x000ae61c) video_down_subqcif_pane_cp_ParamLimits

0x96ce,	// (0x000ae61c) video_down_subqcif_pane_cp

0x96f4,	// (0x000ae642) im_reading_pane_ParamLimits

0x96f4,	// (0x000ae642) im_reading_pane

0x17f2,	// (0x000a6740) im_writing_pane_ParamLimits

0x17f2,	// (0x000a6740) im_writing_pane

0x1808,	// (0x000a6756) im_reading_pane_t1

0x970e,	// (0x000ae65c) list_im_pane

0x971f,	// (0x000ae66d) scroll_pane_cp07

0x1841,	// (0x000a678f) im_writing_pane_t1_ParamLimits

0x1841,	// (0x000a678f) im_writing_pane_t1

0x9738,	// (0x000ae686) im_writing_pane_t2_ParamLimits

0x9738,	// (0x000ae686) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b41c1) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b41c1) im_writing_pane_t

0xea70,	// (0x000b39be) input_focus_pane_cp04

0xea70,	// (0x000b39be) input_focus_pane_cp05

0x1856,	// (0x000a67a4) list_im_single_pane_ParamLimits

0x1856,	// (0x000a67a4) list_im_single_pane

0x186a,	// (0x000a67b8) list_single_im_pane_t1

0x34f1,	// (0x000a843f) blid_accuracy_pane

0x34f9,	// (0x000a8447) blid_compass_pane

0x3503,	// (0x000a8451) main_location_t1

0x3513,	// (0x000a8461) main_location_t2

0x3523,	// (0x000a8471) main_location_t3

0x0002,

0xf5da,	// (0x000b4528) main_location_t

0xea70,	// (0x000b39be) aid_levels_location

0xede5,	// (0x000b3d33) blid_accuracy_pane_g1

0xede5,	// (0x000b3d33) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b4223) blid_accuracy_pane_g

0x9780,	// (0x000ae6ce) wml_content_pane

0x97be,	// (0x000ae70c) wml_button_pane_ParamLimits

0x97be,	// (0x000ae70c) wml_button_pane

0x1879,	// (0x000a67c7) wml_list_single_large_pane_ParamLimits

0x1879,	// (0x000a67c7) wml_list_single_large_pane

0x188e,	// (0x000a67dc) wml_list_single_medium_pane_ParamLimits

0x188e,	// (0x000a67dc) wml_list_single_medium_pane

0x18a4,	// (0x000a67f2) wml_list_single_small_pane_ParamLimits

0x18a4,	// (0x000a67f2) wml_list_single_small_pane

0x97d2,	// (0x000ae720) wml_selection_box_pane_ParamLimits

0x97d2,	// (0x000ae720) wml_selection_box_pane

0x97e5,	// (0x000ae733) wml_list_single_pane_t1

0x97f4,	// (0x000ae742) wml_list_single_medium_pane_t1

0x9803,	// (0x000ae751) wml_list_single_large_pane_t1

0x9812,	// (0x000ae760) input_focus_pane_cp02_ParamLimits

0x9812,	// (0x000ae760) input_focus_pane_cp02

0x9825,	// (0x000ae773) wml_selection_box_pane_g1

0x982e,	// (0x000ae77c) wml_selection_box_pane_t1_ParamLimits

0x982e,	// (0x000ae77c) wml_selection_box_pane_t1

0xeccb,	// (0x000b3c19) bg_wml_button_pane_ParamLimits

0xeccb,	// (0x000b3c19) bg_wml_button_pane

0x9846,	// (0x000ae794) wml_button_pane_g1

0x984e,	// (0x000ae79c) wml_button_pane_t1

0x9846,	// (0x000ae794) wml_button_bg_pane_g1

0x985e,	// (0x000ae7ac) wml_button_bg_pane_g2

0x9866,	// (0x000ae7b4) wml_button_bg_pane_g3

0x986e,	// (0x000ae7bc) wml_button_bg_pane_g4

0x9876,	// (0x000ae7c4) wml_button_bg_pane_g5

0x987e,	// (0x000ae7cc) wml_button_bg_pane_g6

0x9886,	// (0x000ae7d4) wml_button_bg_pane_g7

0x988e,	// (0x000ae7dc) wml_button_bg_pane_g8

0x9896,	// (0x000ae7e4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b41c6) wml_button_bg_pane_g

0x18bc,	// (0x000a680a) bg_list_pane_cp02

0x989e,	// (0x000ae7ec) mce_header_pane_ParamLimits

0x989e,	// (0x000ae7ec) mce_header_pane

0x98b4,	// (0x000ae802) mce_icon_pane

0x98b4,	// (0x000ae802) mce_image_pane

0x98bd,	// (0x000ae80b) mce_text_pane_ParamLimits

0x98bd,	// (0x000ae80b) mce_text_pane

0x18c4,	// (0x000a6812) scroll_pane_cp03

0x97b6,	// (0x000ae704) scroll_pane_cp04

0x98d0,	// (0x000ae81e) scroll_pane_cp05_ParamLimits

0x98d0,	// (0x000ae81e) scroll_pane_cp05

0x18ce,	// (0x000a681c) mce_header_field_pane_ParamLimits

0x18ce,	// (0x000a681c) mce_header_field_pane

0x18e5,	// (0x000a6833) mce_header_field_pane_2_ParamLimits

0x18e5,	// (0x000a6833) mce_header_field_pane_2

0x18fb,	// (0x000a6849) mce_header_field_pane_3

0x1903,	// (0x000a6851) list_single_mce_message_pane_ParamLimits

0x1903,	// (0x000a6851) list_single_mce_message_pane

0x1918,	// (0x000a6866) list_single_mce_smart_pane_ParamLimits

0x1918,	// (0x000a6866) list_single_mce_smart_pane

0x98dc,	// (0x000ae82a) input_focus_pane_cp03

0x98e5,	// (0x000ae833) list_header_data_pane

0x1938,	// (0x000a6886) mce_header_field_pane_t1

0x1948,	// (0x000a6896) list_single_mce_header_pane_ParamLimits

0x1948,	// (0x000a6896) list_single_mce_header_pane

0x98ed,	// (0x000ae83b) list_single_mce_header_pane_t1

0x98fc,	// (0x000ae84a) list_single_mce_message_pane_g1

0x9904,	// (0x000ae852) list_single_mce_message_pane_t1

0x1982,	// (0x000a68d0) bg_cale_heading_pane_cp01_ParamLimits

0x1982,	// (0x000a68d0) bg_cale_heading_pane_cp01

0x9912,	// (0x000ae860) bg_cale_pane_cp02_ParamLimits

0x9912,	// (0x000ae860) bg_cale_pane_cp02

0x19b1,	// (0x000a68ff) cale_month_corner_pane

0x19d0,	// (0x000a691e) cale_month_day_heading_pane_ParamLimits

0x19d0,	// (0x000a691e) cale_month_day_heading_pane

0x1a17,	// (0x000a6965) cale_month_pane_g1_ParamLimits

0x1a17,	// (0x000a6965) cale_month_pane_g1

0x1a3b,	// (0x000a6989) cale_month_pane_g2_ParamLimits

0x1a3b,	// (0x000a6989) cale_month_pane_g2

0x1a6b,	// (0x000a69b9) cale_month_pane_g3_ParamLimits

0x1a6b,	// (0x000a69b9) cale_month_pane_g3

0x1aa7,	// (0x000a69f5) cale_month_pane_g4_ParamLimits

0x1aa7,	// (0x000a69f5) cale_month_pane_g4

0x1ae3,	// (0x000a6a31) cale_month_pane_g5_ParamLimits

0x1ae3,	// (0x000a6a31) cale_month_pane_g5

0x1b2b,	// (0x000a6a79) cale_month_pane_g6_ParamLimits

0x1b2b,	// (0x000a6a79) cale_month_pane_g6

0x1b77,	// (0x000a6ac5) cale_month_pane_g7_ParamLimits

0x1b77,	// (0x000a6ac5) cale_month_pane_g7

0x1bcb,	// (0x000a6b19) cale_month_pane_g8_ParamLimits

0x1bcb,	// (0x000a6b19) cale_month_pane_g8

0x1c1f,	// (0x000a6b6d) cale_month_pane_g9_ParamLimits

0x1c1f,	// (0x000a6b6d) cale_month_pane_g9

0x1c71,	// (0x000a6bbf) cale_month_pane_g10_ParamLimits

0x1c71,	// (0x000a6bbf) cale_month_pane_g10

0x1cc3,	// (0x000a6c11) cale_month_pane_g11_ParamLimits

0x1cc3,	// (0x000a6c11) cale_month_pane_g11

0x1d15,	// (0x000a6c63) cale_month_pane_g12_ParamLimits

0x1d15,	// (0x000a6c63) cale_month_pane_g12

0x1d67,	// (0x000a6cb5) cale_month_pane_g13_ParamLimits

0x1d67,	// (0x000a6cb5) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b41d9) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b41d9) cale_month_pane_g

0x1db9,	// (0x000a6d07) cale_month_week_pane

0x1ddd,	// (0x000a6d2b) grid_cale_month_pane_ParamLimits

0x1ddd,	// (0x000a6d2b) grid_cale_month_pane

0x1e1b,	// (0x000a6d69) cale_month_day_heading_pane_t1

0x1ea1,	// (0x000a6def) cale_month_day_heading_pane_t2

0x1f32,	// (0x000a6e80) cale_month_day_heading_pane_t3

0x1fc3,	// (0x000a6f11) cale_month_day_heading_pane_t4

0x2058,	// (0x000a6fa6) cale_month_day_heading_pane_t5

0x20f9,	// (0x000a7047) cale_month_day_heading_pane_t6

0x219a,	// (0x000a70e8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b41f4) cale_month_day_heading_pane_t

0xeefb,	// (0x000b3e49) bg_cale_side_pane_cp01

0x2243,	// (0x000a7191) cale_month_week_pane_t1

0x225c,	// (0x000a71aa) cale_month_week_pane_t2

0x2275,	// (0x000a71c3) cale_month_week_pane_t3

0x228e,	// (0x000a71dc) cale_month_week_pane_t4

0x22a7,	// (0x000a71f5) cale_month_week_pane_t5

0x22c0,	// (0x000a720e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b4203) cale_month_week_pane_t

0x22d9,	// (0x000a7227) cell_cale_month_pane_ParamLimits

0x22d9,	// (0x000a7227) cell_cale_month_pane

0x9951,	// (0x000ae89f) cell_cale_month_pane_g1

0x242d,	// (0x000a737b) cell_cale_month_pane_t1_ParamLimits

0x242d,	// (0x000a737b) cell_cale_month_pane_t1

0xef09,	// (0x000b3e57) grid_highlight_pane_cp08

0xede5,	// (0x000b3d33) main_smil_g1

0x244d,	// (0x000a739b) smil_status_pane

0x995d,	// (0x000ae8ab) smil_text_pane

0xb91b,	// (0x000b0869) bg_popup_call3_rect_pane_g8

0xb923,	// (0x000b0871) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b44bc) bg_popup_call3_rect_pane_g

0xbb6a,	// (0x000b0ab8) smil_status_volume_pane_g1

0x9967,	// (0x000ae8b5) smil_status_pane_t1

0x9dd4,	// (0x000aed22) volume_smil_pane

0x997e,	// (0x000ae8cc) list_smil_text_pane

0x2460,	// (0x000a73ae) scroll_pane_cp011

0x246b,	// (0x000a73b9) smil_text_list_pane_t1_ParamLimits

0x246b,	// (0x000a73b9) smil_text_list_pane_t1

0x9988,	// (0x000ae8d6) aid_volume_smil_ParamLimits

0x9988,	// (0x000ae8d6) aid_volume_smil

0xede5,	// (0x000b3d33) smil_volume_pane_g1

0xede5,	// (0x000b3d33) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b4223) smil_volume_pane_g

0x09c8,	// (0x000a5916) listscroll_cale_day_pane

0x99aa,	// (0x000ae8f8) bg_cale_pane

0x99c2,	// (0x000ae910) list_cale_pane

0x99e5,	// (0x000ae933) scroll_pane_cp09

0x99f6,	// (0x000ae944) cale_bg_pane_g1

0x99fe,	// (0x000ae94c) cale_bg_pane_g2

0x9a06,	// (0x000ae954) cale_bg_pane_g3

0x9a0e,	// (0x000ae95c) cale_bg_pane_g4

0x9a16,	// (0x000ae964) cale_bg_pane_g5

0x9a1e,	// (0x000ae96c) cale_bg_pane_g6

0x9a26,	// (0x000ae974) cale_bg_pane_g7

0x9a2e,	// (0x000ae97c) cale_bg_pane_g8

0x9a36,	// (0x000ae984) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b4228) cale_bg_pane_g

0x24af,	// (0x000a73fd) list_cale_time_pane_ParamLimits

0x24af,	// (0x000a73fd) list_cale_time_pane

0x9a3e,	// (0x000ae98c) list_cale_time_pane_g1_ParamLimits

0x9a3e,	// (0x000ae98c) list_cale_time_pane_g1

0x9a4a,	// (0x000ae998) list_cale_time_pane_g2_ParamLimits

0x9a4a,	// (0x000ae998) list_cale_time_pane_g2

0x24c4,	// (0x000a7412) list_cale_time_pane_g3_ParamLimits

0x24c4,	// (0x000a7412) list_cale_time_pane_g3

0x24d2,	// (0x000a7420) list_cale_time_pane_g4_ParamLimits

0x24d2,	// (0x000a7420) list_cale_time_pane_g4

0x24e0,	// (0x000a742e) list_cale_time_pane_g5_ParamLimits

0x24e0,	// (0x000a742e) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b423b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b423b) list_cale_time_pane_g

0x9a64,	// (0x000ae9b2) list_cale_time_pane_t1_ParamLimits

0x9a64,	// (0x000ae9b2) list_cale_time_pane_t1

0x9a8c,	// (0x000ae9da) list_cale_time_pane_t2_ParamLimits

0x9a8c,	// (0x000ae9da) list_cale_time_pane_t2

0x2841,	// (0x000a778f) aid_blid_cardinal_pane

0x287f,	// (0x000a77cd) compass_pane_t4

0x9ab4,	// (0x000aea02) list_cale_time_pane_t4_ParamLimits

0x9ab4,	// (0x000aea02) list_cale_time_pane_t4

0x288d,	// (0x000a77db) compass_pane_t5

0x289b,	// (0x000a77e9) compass_pane_t6

0x28a9,	// (0x000a77f7) compass_pane_t7

0xa592,	// (0x000af4e0) navi_pane_cc_t1

0xa777,	// (0x000af6c5) aid_phob_thumbnail_center_pane

0x2f09,	// (0x000a7e57) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b4248) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b4248) list_cale_time_pane_t

0xe6c7,	// (0x000b3615) bg_popup_window_pane_cp02_ParamLimits

0xe6c7,	// (0x000b3615) bg_popup_window_pane_cp02

0x9adc,	// (0x000aea2a) heading_pane_cp01_ParamLimits

0x9adc,	// (0x000aea2a) heading_pane_cp01

0x9ae8,	// (0x000aea36) loc_req_pane_ParamLimits

0x9ae8,	// (0x000aea36) loc_req_pane

0x9af8,	// (0x000aea46) loc_type_pane_ParamLimits

0x9af8,	// (0x000aea46) loc_type_pane

0x9b0a,	// (0x000aea58) loc_type_pane_t1_ParamLimits

0x9b0a,	// (0x000aea58) loc_type_pane_t1

0x9b1c,	// (0x000aea6a) loc_type_pane_t2_ParamLimits

0x9b1c,	// (0x000aea6a) loc_type_pane_t2

0x9b2e,	// (0x000aea7c) loc_type_pane_t3_ParamLimits

0x9b2e,	// (0x000aea7c) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b424f) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b424f) loc_type_pane_t

0x9b40,	// (0x000aea8e) list_loc_req_pane

0x9b4a,	// (0x000aea98) scroll_pane_cp012

0x24ee,	// (0x000a743c) list_single_loc_request_popup_menu_pane_ParamLimits

0x24ee,	// (0x000a743c) list_single_loc_request_popup_menu_pane

0x9b55,	// (0x000aeaa3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x9b55,	// (0x000aeaa3) list_single_loc_request_popup_menu_pane_g1

0x9b61,	// (0x000aeaaf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x9b61,	// (0x000aeaaf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b4256) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b4256) list_single_loc_request_popup_menu_pane_g

0x9b6d,	// (0x000aeabb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x9b6d,	// (0x000aeabb) list_single_loc_request_popup_menu_pane_t1

0xeccb,	// (0x000b3c19) bg_popup_window_pane_cp03_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_window_pane_cp03

0xb086,	// (0x000affd4) heading_loc_req_pane_ParamLimits

0xb086,	// (0x000affd4) heading_loc_req_pane

0x24fb,	// (0x000a7449) popup_dyc_status_message_window_g1_ParamLimits

0x24fb,	// (0x000a7449) popup_dyc_status_message_window_g1

0x250f,	// (0x000a745d) popup_dyc_status_message_window_t1_ParamLimits

0x250f,	// (0x000a745d) popup_dyc_status_message_window_t1

0x2524,	// (0x000a7472) popup_dyc_status_message_window_t2_ParamLimits

0x2524,	// (0x000a7472) popup_dyc_status_message_window_t2

0x2539,	// (0x000a7487) popup_dyc_status_message_window_t3_ParamLimits

0x2539,	// (0x000a7487) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b425b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b425b) popup_dyc_status_message_window_t

0xea70,	// (0x000b39be) bg_heading_pane_cp01

0x9b83,	// (0x000aead1) heading_loc_req_pane_g1

0x9b8b,	// (0x000aead9) heading_loc_req_pane_g2

0x9b93,	// (0x000aeae1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b4262) heading_loc_req_pane_g

0x9b9b,	// (0x000aeae9) heading_loc_req_pane_t1

0x9baa,	// (0x000aeaf8) bg_popup_sub_pane_cp01_ParamLimits

0x9baa,	// (0x000aeaf8) bg_popup_sub_pane_cp01

0x9bb8,	// (0x000aeb06) popup_cale_events_window_g1_ParamLimits

0x9bb8,	// (0x000aeb06) popup_cale_events_window_g1

0x9bd8,	// (0x000aeb26) popup_cale_events_window_g2_ParamLimits

0x9bd8,	// (0x000aeb26) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b4296) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b4296) popup_cale_events_window_g

0x9bf8,	// (0x000aeb46) popup_cale_events_window_t1_ParamLimits

0x9bf8,	// (0x000aeb46) popup_cale_events_window_t1

0x9c0a,	// (0x000aeb58) popup_cale_events_window_t2_ParamLimits

0x9c0a,	// (0x000aeb58) popup_cale_events_window_t2

0x9c48,	// (0x000aeb96) popup_cale_events_window_t3_ParamLimits

0x9c48,	// (0x000aeb96) popup_cale_events_window_t3

0x9c82,	// (0x000aebd0) popup_cale_events_window_t4_ParamLimits

0x9c82,	// (0x000aebd0) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b429b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b429b) popup_cale_events_window_t

0x263c,	// (0x000a758a) call_type_pane

0x264c,	// (0x000a759a) popup_call_status_window_g1

0x2660,	// (0x000a75ae) popup_call_status_window_g2

0x2674,	// (0x000a75c2) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b42a4) popup_call_status_window_g

0xa2f3,	// (0x000af241) call_type_pane_g1

0xa2fc,	// (0x000af24a) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b42ab) call_type_pane_g

0xea70,	// (0x000b39be) bg_popup_sub_pane_cp02

0xa305,	// (0x000af253) listscroll_popup_wml_pane

0xa30d,	// (0x000af25b) list_wml_pane

0xa317,	// (0x000af265) scroll_pane_cp013

0xa322,	// (0x000af270) list_single_graphic_popup_wml_pane_ParamLimits

0xa322,	// (0x000af270) list_single_graphic_popup_wml_pane

0xede5,	// (0x000b3d33) list_single_graphic_popup_wml_pane_g1

0xa336,	// (0x000af284) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b42b0) list_single_graphic_popup_wml_pane_g

0xa33e,	// (0x000af28c) list_single_graphic_popup_wml_pane_t1

0xa354,	// (0x000af2a2) aid_call_pane

0xecc3,	// (0x000b3c11) popup_clock_analogue_window_g1

0xecc3,	// (0x000b3c11) popup_clock_analogue_window_g2

0x9cb8,	// (0x000aec06) popup_clock_analogue_window_g3

0x9cb8,	// (0x000aec06) popup_clock_analogue_window_g4

0xede5,	// (0x000b3d33) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b42b5) popup_clock_analogue_window_g

0x9cc0,	// (0x000aec0e) popup_clock_analogue_window_t1

0x9cce,	// (0x000aec1c) clock_digital_number_pane_ParamLimits

0x9cce,	// (0x000aec1c) clock_digital_number_pane

0x9cda,	// (0x000aec28) clock_digital_number_pane_cp02_ParamLimits

0x9cda,	// (0x000aec28) clock_digital_number_pane_cp02

0x9ce6,	// (0x000aec34) clock_digital_number_pane_cp03_ParamLimits

0x9ce6,	// (0x000aec34) clock_digital_number_pane_cp03

0x9cf2,	// (0x000aec40) clock_digital_number_pane_cp04_ParamLimits

0x9cf2,	// (0x000aec40) clock_digital_number_pane_cp04

0x9d02,	// (0x000aec50) clock_digital_separator_pane_ParamLimits

0x9d02,	// (0x000aec50) clock_digital_separator_pane

0x9d0e,	// (0x000aec5c) popup_clock_digital_window_t1

0xede5,	// (0x000b3d33) clock_digital_number_pane_g1

0xede5,	// (0x000b3d33) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b4223) clock_digital_number_pane_g

0xede5,	// (0x000b3d33) clock_digital_separator_pane_g1

0xede5,	// (0x000b3d33) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b4223) clock_digital_separator_pane_g

0xea70,	// (0x000b39be) bg_popup_window_pane_cp04

0xa35c,	// (0x000af2aa) heading_pane_cp03

0xa364,	// (0x000af2b2) listscroll_popup_gms_pane

0xa36c,	// (0x000af2ba) grid_large_graphic_popup_pane

0xa376,	// (0x000af2c4) listscroll_popup_gms_pane_g1

0xa37e,	// (0x000af2cc) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b42c0) listscroll_popup_gms_pane_g

0x97b6,	// (0x000ae704) scroll_pane_cp014

0x2683,	// (0x000a75d1) cell_large_graphic_popup_pane_ParamLimits

0x2683,	// (0x000a75d1) cell_large_graphic_popup_pane

0x269b,	// (0x000a75e9) cell_large_graphic_popup_pane_g1_ParamLimits

0x269b,	// (0x000a75e9) cell_large_graphic_popup_pane_g1

0xa386,	// (0x000af2d4) cell_large_graphic_popup_pane_g2_ParamLimits

0xa386,	// (0x000af2d4) cell_large_graphic_popup_pane_g2

0xa392,	// (0x000af2e0) cell_large_graphic_popup_pane_g3_ParamLimits

0xa392,	// (0x000af2e0) cell_large_graphic_popup_pane_g3

0xa39f,	// (0x000af2ed) cell_large_graphic_popup_pane_g4_ParamLimits

0xa39f,	// (0x000af2ed) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b42c5) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b42c5) cell_large_graphic_popup_pane_g

0xa3af,	// (0x000af2fd) grid_highlight_pane_cp010

0xede5,	// (0x000b3d33) bg_popup_call_pane_g1

0xa3b9,	// (0x000af307) list_single_graphic_popup_conf_pane_ParamLimits

0xa3b9,	// (0x000af307) list_single_graphic_popup_conf_pane

0xa3cc,	// (0x000af31a) list_highlight_pane_cp01

0xa3d5,	// (0x000af323) list_single_graphic_popup_conf_pane_g1

0xa3dd,	// (0x000af32b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b42ce) list_single_graphic_popup_conf_pane_g

0xa3e5,	// (0x000af333) list_single_graphic_popup_conf_pane_t1

0xa3f3,	// (0x000af341) linegrid_cams_pane_g1

0x26a7,	// (0x000a75f5) linegrid_cams_pane_g2

0xef3c,	// (0x000b3e8a) linegrid_cams_pane_g3

0xa3fc,	// (0x000af34a) linegrid_cams_pane_g4

0x26b0,	// (0x000a75fe) linegrid_cams_pane_g5

0x26b9,	// (0x000a7607) linegrid_cams_pane_g6

0xef45,	// (0x000b3e93) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b42d3) linegrid_cams_pane_g

0xa405,	// (0x000af353) popup_clock_analogue_window

0xa405,	// (0x000af353) popup_clock_digital_window

0xea70,	// (0x000b39be) popup_phob_thumbnail_window

0xede5,	// (0x000b3d33) call_video_uplink_pane_g1

0xa40e,	// (0x000af35c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b42e2) call_video_uplink_pane_g

0xa416,	// (0x000af364) video_uplink_pane

0xa41e,	// (0x000af36c) mce_image_pane_g1

0x26c4,	// (0x000a7612) mce_image_pane_g2

0x26ce,	// (0x000a761c) mce_image_pane_g3

0x26d6,	// (0x000a7624) mce_image_pane_g4

0x26de,	// (0x000a762c) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b42e7) mce_image_pane_g

0xa428,	// (0x000af376) control_top_pane_stacon_cp01_ParamLimits

0xa428,	// (0x000af376) control_top_pane_stacon_cp01

0xa43c,	// (0x000af38a) uni_indicator_pane_stacon_cp01_ParamLimits

0xa43c,	// (0x000af38a) uni_indicator_pane_stacon_cp01

0xa44d,	// (0x000af39b) bg_popup_sub_pane_cp03

0xa457,	// (0x000af3a5) chi_dic_find_pane

0x26e6,	// (0x000a7634) listscroll_chi_dic_pane

0xa45f,	// (0x000af3ad) main_pane_chidic_g1

0xa467,	// (0x000af3b5) chi_dic_find_pane_t1

0xa475,	// (0x000af3c3) find_chidic_pane

0xa47e,	// (0x000af3cc) chi_dic_list_pane_ParamLimits

0xa47e,	// (0x000af3cc) chi_dic_list_pane

0xa48f,	// (0x000af3dd) scroll_pane_cp020

0xa497,	// (0x000af3e5) find_chidic_pane_t1

0xea70,	// (0x000b39be) input_focus_pane_cp06

0x26fa,	// (0x000a7648) list_chi_dic_pane_ParamLimits

0x26fa,	// (0x000a7648) list_chi_dic_pane

0x270c,	// (0x000a765a) list_chi_dic_pane_t1_ParamLimits

0x270c,	// (0x000a765a) list_chi_dic_pane_t1

0xea70,	// (0x000b39be) list_highlight_pane_cp020

0xa4a6,	// (0x000af3f4) bg_cale_heading_pane_g1

0x271f,	// (0x000a766d) bg_cale_heading_pane_g2

0x2727,	// (0x000a7675) bg_cale_heading_pane_g3

0x272f,	// (0x000a767d) bg_cale_heading_pane_g4

0x2739,	// (0x000a7687) bg_cale_heading_pane_g5

0x2743,	// (0x000a7691) bg_cale_heading_pane_g6

0x274b,	// (0x000a7699) bg_cale_heading_pane_g7

0x2753,	// (0x000a76a1) bg_cale_heading_pane_g8

0x275d,	// (0x000a76ab) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b42f2) bg_cale_heading_pane_g

0xa4a6,	// (0x000af3f4) bg_cale_side_pane_g1

0x2767,	// (0x000a76b5) bg_cale_side_pane_g2

0x276f,	// (0x000a76bd) bg_cale_side_pane_g3

0x2777,	// (0x000a76c5) bg_cale_side_pane_g4

0x277f,	// (0x000a76cd) bg_cale_side_pane_g5

0x2787,	// (0x000a76d5) bg_cale_side_pane_g6

0x278f,	// (0x000a76dd) bg_cale_side_pane_g7

0x2797,	// (0x000a76e5) bg_cale_side_pane_g8

0x279f,	// (0x000a76ed) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b4305) bg_cale_side_pane_g

0x27a7,	// (0x000a76f5) popup_call_status_window_ParamLimits

0x27a7,	// (0x000a76f5) popup_call_status_window

0xa4ae,	// (0x000af3fc) stacon_top_pane

0xa4b6,	// (0x000af404) status_pane_ParamLimits

0xa4b6,	// (0x000af404) status_pane

0xa4cb,	// (0x000af419) status_small_pane

0xa4d3,	// (0x000af421) control_pane

0xea70,	// (0x000b39be) stacon_bottom_pane

0xa4db,	// (0x000af429) list_single_mce_smart_pane_t1_ParamLimits

0xa4db,	// (0x000af429) list_single_mce_smart_pane_t1

0xa4ee,	// (0x000af43c) list_single_mce_smart_pane_t2_ParamLimits

0xa4ee,	// (0x000af43c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b4318) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b4318) list_single_mce_smart_pane_t

0x27f0,	// (0x000a773e) compass_pane

0x27f9,	// (0x000a7747) main_location2_pane_t1

0x280b,	// (0x000a7759) main_location2_pane_t2

0x281d,	// (0x000a776b) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b431d) main_location2_pane_t

0xa50d,	// (0x000af45b) compass_pane_g1_ParamLimits

0xa50d,	// (0x000af45b) compass_pane_g1

0x2861,	// (0x000a77af) compass_pane_t1

0x2870,	// (0x000a77be) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b4326) compass_pane_t

0x28b7,	// (0x000a7805) text_secondary_cp61

0xa589,	// (0x000af4d7) navi_pane_cams_g5

0xa605,	// (0x000af553) navi_pane_im_t1

0xa613,	// (0x000af561) navi_pane_mp_g1_ParamLimits

0xa613,	// (0x000af561) navi_pane_mp_g1

0xa627,	// (0x000af575) navi_pane_mp_g2_ParamLimits

0xa627,	// (0x000af575) navi_pane_mp_g2

0xa633,	// (0x000af581) navi_pane_mp_g3_ParamLimits

0xa633,	// (0x000af581) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b433a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b433a) navi_pane_mp_g

0xa63f,	// (0x000af58d) navi_pane_mp_t1

0xa64d,	// (0x000af59b) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b4341) navi_pane_mp_t

0xa6b8,	// (0x000af606) navi_pane_vt_g1

0xa63f,	// (0x000af58d) navi_pane_vt_t1

0xa6c0,	// (0x000af60e) navi_slider_pane

0xa6d0,	// (0x000af61e) zooming_pane

0xa6d8,	// (0x000af626) navi_slider_pane_g1

0x9d2b,	// (0x000aec79) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b4348) navi_slider_pane_g

0xa6fc,	// (0x000af64a) aid_levels_zoom

0xa704,	// (0x000af652) zooming_pane_g1

0xa70c,	// (0x000af65a) zooming_pane_g2

0xa70c,	// (0x000af65a) zooming_pane_g3

0x0002,

0xf409,	// (0x000b4357) zooming_pane_g

0xa714,	// (0x000af662) level_10_zoom

0xa71d,	// (0x000af66b) level_11_zoom

0xa726,	// (0x000af674) level_1_zoom

0xa72f,	// (0x000af67d) level_2_zoom

0xa738,	// (0x000af686) level_3_zoom

0xa741,	// (0x000af68f) level_4_zoom

0xa74a,	// (0x000af698) level_5_zoom

0xa753,	// (0x000af6a1) level_6_zoom

0xa75c,	// (0x000af6aa) level_7_zoom

0xa765,	// (0x000af6b3) level_8_zoom

0xa76e,	// (0x000af6bc) level_9_zoom

0xa77f,	// (0x000af6cd) popup_phob_thumbnail_window_g1

0xa787,	// (0x000af6d5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b435e) popup_phob_thumbnail_window_g

0xba7d,	// (0x000b09cb) level_1_location

0xba85,	// (0x000b09d3) level_2_location

0xba8d,	// (0x000b09db) level_3_location

0xba95,	// (0x000b09e3) level_4_location

0xa6d0,	// (0x000af61e) level_5_location

0x2908,	// (0x000a7856) mce_icon_pane_g1

0x2912,	// (0x000a7860) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b4363) mce_icon_pane_g

0x291a,	// (0x000a7868) main_mup_pane_g1_ParamLimits

0x291a,	// (0x000a7868) main_mup_pane_g1

0x2930,	// (0x000a787e) main_mup_pane_g2_ParamLimits

0x2930,	// (0x000a787e) main_mup_pane_g2

0x2948,	// (0x000a7896) main_mup_pane_g3_ParamLimits

0x2948,	// (0x000a7896) main_mup_pane_g3

0x2960,	// (0x000a78ae) main_mup_pane_g4_ParamLimits

0x2960,	// (0x000a78ae) main_mup_pane_g4

0x2978,	// (0x000a78c6) main_mup_pane_g5_ParamLimits

0x2978,	// (0x000a78c6) main_mup_pane_g5

0x2994,	// (0x000a78e2) main_mup_pane_g6_ParamLimits

0x2994,	// (0x000a78e2) main_mup_pane_g6

0x29ac,	// (0x000a78fa) main_mup_pane_g7_ParamLimits

0x29ac,	// (0x000a78fa) main_mup_pane_g7

0x29c4,	// (0x000a7912) main_mup_pane_g8_ParamLimits

0x29c4,	// (0x000a7912) main_mup_pane_g8

0x29de,	// (0x000a792c) main_mup_pane_g9_ParamLimits

0x29de,	// (0x000a792c) main_mup_pane_g9

0x29f8,	// (0x000a7946) main_mup_pane_g10_ParamLimits

0x29f8,	// (0x000a7946) main_mup_pane_g10

0x2a12,	// (0x000a7960) main_mup_pane_g11_ParamLimits

0x2a12,	// (0x000a7960) main_mup_pane_g11

0x2a26,	// (0x000a7974) main_mup_pane_g12_ParamLimits

0x2a26,	// (0x000a7974) main_mup_pane_g12

0x2a3c,	// (0x000a798a) main_mup_pane_g13_ParamLimits

0x2a3c,	// (0x000a798a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b4368) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b4368) main_mup_pane_g

0x2a50,	// (0x000a799e) main_mup_pane_t1_ParamLimits

0x2a50,	// (0x000a799e) main_mup_pane_t1

0x2a6a,	// (0x000a79b8) main_mup_pane_t2_ParamLimits

0x2a6a,	// (0x000a79b8) main_mup_pane_t2

0x2a82,	// (0x000a79d0) main_mup_pane_t3_ParamLimits

0x2a82,	// (0x000a79d0) main_mup_pane_t3

0x2a9a,	// (0x000a79e8) main_mup_pane_t4_ParamLimits

0x2a9a,	// (0x000a79e8) main_mup_pane_t4

0x2ab8,	// (0x000a7a06) main_mup_pane_t5_ParamLimits

0x2ab8,	// (0x000a7a06) main_mup_pane_t5

0x2acd,	// (0x000a7a1b) main_mup_pane_t6_ParamLimits

0x2acd,	// (0x000a7a1b) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b4383) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b4383) main_mup_pane_t

0x2adf,	// (0x000a7a2d) mup_progress_pane_ParamLimits

0x2adf,	// (0x000a7a2d) mup_progress_pane

0x2aeb,	// (0x000a7a39) mup_visualizer_pane_ParamLimits

0x2aeb,	// (0x000a7a39) mup_visualizer_pane

0x2b1b,	// (0x000a7a69) mup_volume_pane_ParamLimits

0x2b1b,	// (0x000a7a69) mup_volume_pane

0xa78f,	// (0x000af6dd) mup_visualizer_pane_g1_ParamLimits

0xa78f,	// (0x000af6dd) mup_visualizer_pane_g1

0xa78f,	// (0x000af6dd) mup_visualizer_pane_g2_ParamLimits

0xa78f,	// (0x000af6dd) mup_visualizer_pane_g2

0xa50d,	// (0x000af45b) mup_visualizer_pane_g3_ParamLimits

0xa50d,	// (0x000af45b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b4390) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b4390) mup_visualizer_pane_g

0xede5,	// (0x000b3d33) mup_volume_pane_g1

0xa7a5,	// (0x000af6f3) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b4397) mup_volume_pane_g

0xede5,	// (0x000b3d33) mup_progress_pane_g1

0xa7ae,	// (0x000af6fc) mup_progress_pane_g2

0xa7b7,	// (0x000af705) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b439c) mup_progress_pane_g

0xea70,	// (0x000b39be) bg_popup_window_pane_cp05

0xa7c0,	// (0x000af70e) heading_pane_cp02_ParamLimits

0xa7c0,	// (0x000af70e) heading_pane_cp02

0xa7da,	// (0x000af728) list_popup_blid_pane

0xa7e2,	// (0x000af730) list_blid_sat_info_pane_ParamLimits

0xa7e2,	// (0x000af730) list_blid_sat_info_pane

0xa7f5,	// (0x000af743) list_blid_sat_info_pane_g1

0xa7fd,	// (0x000af74b) list_blid_sat_info_pane_t1

0x2c31,	// (0x000a7b7f) mup_equalizer_pane_ParamLimits

0x2c31,	// (0x000a7b7f) mup_equalizer_pane

0x2c4a,	// (0x000a7b98) mup_equalizer_pane_cp1_ParamLimits

0x2c4a,	// (0x000a7b98) mup_equalizer_pane_cp1

0x2c67,	// (0x000a7bb5) mup_equalizer_pane_cp2_ParamLimits

0x2c67,	// (0x000a7bb5) mup_equalizer_pane_cp2

0x2c84,	// (0x000a7bd2) mup_equalizer_pane_cp3_ParamLimits

0x2c84,	// (0x000a7bd2) mup_equalizer_pane_cp3

0x2ca5,	// (0x000a7bf3) mup_equalizer_pane_cp4_ParamLimits

0x2ca5,	// (0x000a7bf3) mup_equalizer_pane_cp4

0x2cc6,	// (0x000a7c14) mup_equalizer_pane_cp5

0x2cda,	// (0x000a7c28) mup_equalizer_pane_cp6

0x2cee,	// (0x000a7c3c) mup_equalizer_pane_cp7

0xb99b,	// (0x000b08e9) bg_popup_call_poc_act_pane_g9

0xb9a3,	// (0x000b08f1) bg_popup_call_poc_act_pane_g10

0xb9ab,	// (0x000b08f9) bg_popup_call_poc_act_pane_g11

0x000a,

0xeccb,	// (0x000b3c19) mup_scale_pane

0xede5,	// (0x000b3d33) mup_scale_pane_g1

0xa80b,	// (0x000af759) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b43b8) mup_scale_pane_g

0xa82f,	// (0x000af77d) msg_data_pane

0xa837,	// (0x000af785) scroll_pane_cp017

0x2d14,	// (0x000a7c62) bg_list_pane_cp04_ParamLimits

0x2d14,	// (0x000a7c62) bg_list_pane_cp04

0xa83f,	// (0x000af78d) msg_data_pane_g1

0x2d34,	// (0x000a7c82) msg_data_pane_g2

0x2d3e,	// (0x000a7c8c) msg_data_pane_g3

0x2d46,	// (0x000a7c94) msg_data_pane_g4

0x2d4e,	// (0x000a7c9c) msg_data_pane_g5

0x2d56,	// (0x000a7ca4) msg_data_pane_g6

0x2d5e,	// (0x000a7cac) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b43c7) msg_data_pane_g

0x2d66,	// (0x000a7cb4) msg_text_pane_ParamLimits

0x2d66,	// (0x000a7cb4) msg_text_pane

0x2d88,	// (0x000a7cd6) qrid_highlight_pane_cp011_ParamLimits

0x2d88,	// (0x000a7cd6) qrid_highlight_pane_cp011

0xea70,	// (0x000b39be) msg_body_pane

0xea70,	// (0x000b39be) msg_header_pane

0xa850,	// (0x000af79e) input_focus_pane_cp07

0x2dac,	// (0x000a7cfa) msg_header_pane_t1_ParamLimits

0x2dac,	// (0x000a7cfa) msg_header_pane_t1

0x2dbe,	// (0x000a7d0c) msg_header_pane_t2_ParamLimits

0x2dbe,	// (0x000a7d0c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b43db) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b43db) msg_header_pane_t

0xa865,	// (0x000af7b3) msg_body_pane_g1

0x2dd0,	// (0x000a7d1e) msg_body_pane_t1_ParamLimits

0x2dd0,	// (0x000a7d1e) msg_body_pane_t1

0x2e01,	// (0x000a7d4f) msg_body_pane_t2_ParamLimits

0x2e01,	// (0x000a7d4f) msg_body_pane_t2

0x2e13,	// (0x000a7d61) msg_body_pane_t3_ParamLimits

0x2e13,	// (0x000a7d61) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b43e0) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b43e0) msg_body_pane_t

0x2e5f,	// (0x000a7dad) main_viewer_pane_g1_ParamLimits

0x2e5f,	// (0x000a7dad) main_viewer_pane_g1

0x2e6d,	// (0x000a7dbb) main_viewer_pane_g2_ParamLimits

0x2e6d,	// (0x000a7dbb) main_viewer_pane_g2

0x2e7b,	// (0x000a7dc9) main_viewer_pane_g3_ParamLimits

0x2e7b,	// (0x000a7dc9) main_viewer_pane_g3

0x2e8a,	// (0x000a7dd8) main_viewer_pane_g4_ParamLimits

0x2e8a,	// (0x000a7dd8) main_viewer_pane_g4

0x9d55,	// (0x000aeca3) main_viewer_pane_g5_ParamLimits

0x9d55,	// (0x000aeca3) main_viewer_pane_g5

0x9d55,	// (0x000aeca3) main_viewer_pane_g7_ParamLimits

0x9d55,	// (0x000aeca3) main_viewer_pane_g7

0x9b55,	// (0x000aeaa3) main_viewer_pane_g8_ParamLimits

0x9b55,	// (0x000aeaa3) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b43f0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b43f0) main_viewer_pane_g

0xa86d,	// (0x000af7bb) viewer_content_pane_ParamLimits

0xa86d,	// (0x000af7bb) viewer_content_pane

0x2ec6,	// (0x000a7e14) main_postcard_pane_g1_ParamLimits

0x2ec6,	// (0x000a7e14) main_postcard_pane_g1

0x2edc,	// (0x000a7e2a) main_postcard_pane_g2_ParamLimits

0x2edc,	// (0x000a7e2a) main_postcard_pane_g2

0x2ef2,	// (0x000a7e40) main_postcard_pane_g3_ParamLimits

0x2ef2,	// (0x000a7e40) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b4401) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b4401) main_postcard_pane_g

0x2f09,	// (0x000a7e57) main_postcard_pane_g4

0xbb7d,	// (0x000b0acb) smil_status_volume_pane_g2

0x2f4c,	// (0x000a7e9a) postcard_pane_ParamLimits

0x2f4c,	// (0x000a7e9a) postcard_pane

0xa87b,	// (0x000af7c9) postcard_pane_g1_ParamLimits

0xa87b,	// (0x000af7c9) postcard_pane_g1

0x2f8e,	// (0x000a7edc) postcard_pane_g2_ParamLimits

0x2f8e,	// (0x000a7edc) postcard_pane_g2

0x2f9a,	// (0x000a7ee8) postcard_pane_g3_ParamLimits

0x2f9a,	// (0x000a7ee8) postcard_pane_g3

0xa889,	// (0x000af7d7) postcard_pane_g4_ParamLimits

0xa889,	// (0x000af7d7) postcard_pane_g4

0x2fa6,	// (0x000a7ef4) postcard_pane_g5_ParamLimits

0x2fa6,	// (0x000a7ef4) postcard_pane_g5

0x2fbb,	// (0x000a7f09) postcard_pane_g6_ParamLimits

0x2fbb,	// (0x000a7f09) postcard_pane_g6

0xa87b,	// (0x000af7c9) postcard_pane_g7_ParamLimits

0xa87b,	// (0x000af7c9) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b440e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b440e) postcard_pane_g

0x2fcf,	// (0x000a7f1d) main_mp2_pane_g1_ParamLimits

0x2fcf,	// (0x000a7f1d) main_mp2_pane_g1

0x2fdb,	// (0x000a7f29) main_mp2_pane_g2_ParamLimits

0x2fdb,	// (0x000a7f29) main_mp2_pane_g2

0x2fe7,	// (0x000a7f35) main_mp2_pane_g3_ParamLimits

0x2fe7,	// (0x000a7f35) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b441d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b441d) main_mp2_pane_g

0x2ff3,	// (0x000a7f41) main_mp2_pane_t1_ParamLimits

0x2ff3,	// (0x000a7f41) main_mp2_pane_t1

0x3008,	// (0x000a7f56) main_mp2_pane_t2_ParamLimits

0x3008,	// (0x000a7f56) main_mp2_pane_t2

0x301a,	// (0x000a7f68) main_mp2_pane_t3_ParamLimits

0x301a,	// (0x000a7f68) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b4424) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b4424) main_mp2_pane_t

0xa897,	// (0x000af7e5) pec_content_pane_ParamLimits

0xa897,	// (0x000af7e5) pec_content_pane

0x97b6,	// (0x000ae704) scroll_pane_cp015

0xa8a9,	// (0x000af7f7) pec_attribute_pane_ParamLimits

0xa8a9,	// (0x000af7f7) pec_attribute_pane

0x302c,	// (0x000a7f7a) pec_content_pane_g1_ParamLimits

0x302c,	// (0x000a7f7a) pec_content_pane_g1

0xa8b9,	// (0x000af807) pec_content_pane_t1_ParamLimits

0xa8b9,	// (0x000af807) pec_content_pane_t1

0xa8cb,	// (0x000af819) pec_content_pane_t2_ParamLimits

0xa8cb,	// (0x000af819) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b442b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b442b) pec_content_pane_t

0x3038,	// (0x000a7f86) list_single_graphic_pane_cp01_ParamLimits

0x3038,	// (0x000a7f86) list_single_graphic_pane_cp01

0xeccb,	// (0x000b3c19) bg_popup_sub_pane_cp04

0xa8dd,	// (0x000af82b) popup_mup_playback_window_g1

0xa8e9,	// (0x000af837) popup_mup_playback_window_t1

0xa8fe,	// (0x000af84c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b4430) popup_mup_playback_window_t

0xa935,	// (0x000af883) main_image_pane_g1_ParamLimits

0xa935,	// (0x000af883) main_image_pane_g1

0xa978,	// (0x000af8c6) scroll_pane_cp018_ParamLimits

0xa978,	// (0x000af8c6) scroll_pane_cp018

0xa990,	// (0x000af8de) scroll_pane_cp016_ParamLimits

0xa990,	// (0x000af8de) scroll_pane_cp016

0x3105,	// (0x000a8053) smil2_image_pane_ParamLimits

0x3105,	// (0x000a8053) smil2_image_pane

0x3135,	// (0x000a8083) smil2_root_pane_ParamLimits

0x3135,	// (0x000a8083) smil2_root_pane

0x316d,	// (0x000a80bb) smil2_text_pane_ParamLimits

0x316d,	// (0x000a80bb) smil2_text_pane

0xea70,	// (0x000b39be) bg_list_pane_cp06

0xa9cc,	// (0x000af91a) grid_radio_pane

0xea70,	// (0x000b39be) bg_popup_window_pane_cp06

0xa9d4,	// (0x000af922) main_fmradio_pane_t1

0xa35c,	// (0x000af2aa) heading_pane_cp04

0xa9e2,	// (0x000af930) main_fmradio_pane_t2

0xb9b3,	// (0x000b0901) popup_cale_lunar_info_window_g1

0xa9f0,	// (0x000af93e) main_fmradio_pane_t3

0xb9bb,	// (0x000b0909) popup_cale_lunar_info_window_g2

0xa9fe,	// (0x000af94c) main_fmradio_pane_t4

0x0001,

0xaa0c,	// (0x000af95a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b450b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b4445) main_fmradio_pane_t

0xaa1a,	// (0x000af968) wait_bar_pane_cp03

0xaa22,	// (0x000af970) cell_fmradio_pane_ParamLimits

0xaa22,	// (0x000af970) cell_fmradio_pane

0xa87b,	// (0x000af7c9) cell_fmradio_pane_g1_ParamLimits

0xa87b,	// (0x000af7c9) cell_fmradio_pane_g1

0xea70,	// (0x000b39be) grid_highlight_pane_cp011

0xaa35,	// (0x000af983) poc_content_pane_ParamLimits

0xaa35,	// (0x000af983) poc_content_pane

0xaa47,	// (0x000af995) scroll_pane_cp019

0x31ed,	// (0x000a813b) popup_call_poc_act_window_ParamLimits

0x31ed,	// (0x000a813b) popup_call_poc_act_window

0x3211,	// (0x000a815f) popup_call_poc_inact_window_ParamLimits

0x3211,	// (0x000a815f) popup_call_poc_inact_window

0xf594,	// (0x000b44e2) bg_popup_call_poc_act_pane_g

0xb92b,	// (0x000b0879) bg_popup_call_poc_inact_pane_g1

0xb933,	// (0x000b0881) bg_popup_call_poc_inact_pane_g2

0xaa4f,	// (0x000af99d) popup_call_poc_act_window_g2

0xb93b,	// (0x000b0889) bg_popup_call_poc_inact_pane_g3

0xb943,	// (0x000b0891) bg_popup_call_poc_inact_pane_g4

0xb94b,	// (0x000b0899) bg_popup_call_poc_inact_pane_g5

0xaa57,	// (0x000af9a5) popup_call_poc_act_window_t1_ParamLimits

0xaa57,	// (0x000af9a5) popup_call_poc_act_window_t1

0xaa7f,	// (0x000af9cd) popup_call_poc_act_window_t2_ParamLimits

0xaa7f,	// (0x000af9cd) popup_call_poc_act_window_t2

0xaaa7,	// (0x000af9f5) popup_call_poc_act_window_t3_ParamLimits

0xaaa7,	// (0x000af9f5) popup_call_poc_act_window_t3

0xaacf,	// (0x000afa1d) popup_call_poc_act_window_t4_ParamLimits

0xaacf,	// (0x000afa1d) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b4450) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b4450) popup_call_poc_act_window_t

0xb953,	// (0x000b08a1) bg_popup_call_poc_inact_pane_g6

0xb95b,	// (0x000b08a9) bg_popup_call_poc_inact_pane_g7

0xb963,	// (0x000b08b1) bg_popup_call_poc_inact_pane_g8

0xaae1,	// (0x000afa2f) popup_call_poc_inact_window_g2

0xb96b,	// (0x000b08b9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b44cf) bg_popup_call_poc_inact_pane_g

0xaae9,	// (0x000afa37) popup_call_poc_inact_window_t1_ParamLimits

0xaae9,	// (0x000afa37) popup_call_poc_inact_window_t1

0xaafe,	// (0x000afa4c) popup_call_poc_inact_window_t2_ParamLimits

0xaafe,	// (0x000afa4c) popup_call_poc_inact_window_t2

0xab13,	// (0x000afa61) popup_call_poc_inact_window_t3_ParamLimits

0xab13,	// (0x000afa61) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b4459) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b4459) popup_call_poc_inact_window_t

0xbaf0,	// (0x000b0a3e) context_pane_ParamLimits

0x3a52,	// (0x000a89a0) signal_pane_ParamLimits

0xa6d0,	// (0x000af61e) main_call2_pane

0x9da0,	// (0x000aecee) popup_phob_thumbnail2_window_ParamLimits

0x9da0,	// (0x000aecee) popup_phob_thumbnail2_window

0x9d3d,	// (0x000aec8b) aid_hotspot_pointer_arrow_pane

0x9d45,	// (0x000aec93) aid_hotspot_pointer_hand_pane

0x355a,	// (0x000a84a8) phob_pre_status_pane_g5

0x106e,	// (0x000a5fbc) cams_zoom_pane_ParamLimits

0x107d,	// (0x000a5fcb) image_vga_pane_ParamLimits

0x1097,	// (0x000a5fe5) main_camera_pane_g1_ParamLimits

0x10a9,	// (0x000a5ff7) main_camera_pane_g2_ParamLimits

0x10b9,	// (0x000a6007) main_camera_pane_g3_ParamLimits

0x10c9,	// (0x000a6017) main_camera_pane_g4_ParamLimits

0x10d9,	// (0x000a6027) main_camera_pane_g5_ParamLimits

0x10e9,	// (0x000a6037) main_camera_pane_g6_ParamLimits

0x10fb,	// (0x000a6049) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b4158) main_camera_pane_g_ParamLimits

0x110b,	// (0x000a6059) main_camera_pane_t1_ParamLimits

0x1121,	// (0x000a606f) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b4169) main_camera_pane_t_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_preview_window_pane_cp01_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_preview_window_pane_cp01

0xab28,	// (0x000afa76) popup_phob_thumbnail2_window_g1_ParamLimits

0xab28,	// (0x000afa76) popup_phob_thumbnail2_window_g1

0xea70,	// (0x000b39be) call2_cli_visual_pane

0x3245,	// (0x000a8193) popup_call2_audio_conf_window_ParamLimits

0x3245,	// (0x000a8193) popup_call2_audio_conf_window

0x3265,	// (0x000a81b3) popup_call2_audio_first_window_ParamLimits

0x3265,	// (0x000a81b3) popup_call2_audio_first_window

0x32fb,	// (0x000a8249) popup_call2_audio_in_window_ParamLimits

0x32fb,	// (0x000a8249) popup_call2_audio_in_window

0x3343,	// (0x000a8291) popup_call2_audio_out_window_ParamLimits

0x3343,	// (0x000a8291) popup_call2_audio_out_window

0x33ad,	// (0x000a82fb) popup_call2_audio_second_window_ParamLimits

0x33ad,	// (0x000a82fb) popup_call2_audio_second_window

0x3413,	// (0x000a8361) popup_call2_audio_wait_window_ParamLimits

0x3413,	// (0x000a8361) popup_call2_audio_wait_window

0xea70,	// (0x000b39be) bg_popup_call2_act_pane_cp03

0xecad,	// (0x000b3bfb) list_conf_pane_cp

0xab34,	// (0x000afa82) popup_call2_audio_conf_window_t1

0xa3b9,	// (0x000af307) list_single_graphic_popup_conf2_pane_ParamLimits

0xa3b9,	// (0x000af307) list_single_graphic_popup_conf2_pane

0xa3cc,	// (0x000af31a) list_highlight_pane_cp04

0xab42,	// (0x000afa90) list_single_graphic_popup_conf2_pane_g1

0xa3dd,	// (0x000af32b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b4460) list_single_graphic_popup_conf2_pane_g

0xab4c,	// (0x000afa9a) list_single_graphic_popup_conf2_pane_t1

0xab5a,	// (0x000afaa8) bg_popup_call2_act_pane_cp01_ParamLimits

0xab5a,	// (0x000afaa8) bg_popup_call2_act_pane_cp01

0xabe4,	// (0x000afb32) call_type_pane_cp05_ParamLimits

0xabe4,	// (0x000afb32) call_type_pane_cp05

0xac38,	// (0x000afb86) popup_call2_audio_second_window_g1_ParamLimits

0xac38,	// (0x000afb86) popup_call2_audio_second_window_g1

0xac8c,	// (0x000afbda) popup_call2_audio_second_window_g2_ParamLimits

0xac8c,	// (0x000afbda) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b4465) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b4465) popup_call2_audio_second_window_g

0xacf1,	// (0x000afc3f) popup_call2_audio_second_window_t1_ParamLimits

0xacf1,	// (0x000afc3f) popup_call2_audio_second_window_t1

0xadac,	// (0x000afcfa) popup_call2_audio_second_window_t2_ParamLimits

0xadac,	// (0x000afcfa) popup_call2_audio_second_window_t2

0xadff,	// (0x000afd4d) popup_call2_audio_second_window_t3_ParamLimits

0xadff,	// (0x000afd4d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b446c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b446c) popup_call2_audio_second_window_t

0xea70,	// (0x000b39be) bg_popup_call2_in_pane_cp02

0xea7a,	// (0x000b39c8) call_type_pane_cp04

0xea82,	// (0x000b39d0) popup_call2_audio_wait_window_g1

0xea8a,	// (0x000b39d8) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000b4043) popup_call2_audio_wait_window_g

0xea92,	// (0x000b39e0) popup_call2_audio_wait_window_t3

0xaef2,	// (0x000afe40) bg_popup_call2_act_pane_ParamLimits

0xaef2,	// (0x000afe40) bg_popup_call2_act_pane

0xafb2,	// (0x000aff00) call_type_pane_cp03_ParamLimits

0xafb2,	// (0x000aff00) call_type_pane_cp03

0xb016,	// (0x000aff64) popup_call2_audio_first_window_g1_ParamLimits

0xb016,	// (0x000aff64) popup_call2_audio_first_window_g1

0xb092,	// (0x000affe0) popup_call2_audio_first_window_g2_ParamLimits

0xb092,	// (0x000affe0) popup_call2_audio_first_window_g2

0xa78f,	// (0x000af6dd) popup_call2_audio_first_window_g3_ParamLimits

0xa78f,	// (0x000af6dd) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b4475) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b4475) popup_call2_audio_first_window_g

0xb170,	// (0x000b00be) popup_call2_audio_first_window_t1_ParamLimits

0xb170,	// (0x000b00be) popup_call2_audio_first_window_t1

0xb273,	// (0x000b01c1) popup_call2_audio_first_window_t4_ParamLimits

0xb273,	// (0x000b01c1) popup_call2_audio_first_window_t4

0xb356,	// (0x000b02a4) popup_call2_audio_first_window_t5_ParamLimits

0xb356,	// (0x000b02a4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b4480) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b4480) popup_call2_audio_first_window_t

0xecc3,	// (0x000b3c11) bg_popup_call2_act_pane_g1

0xb9c3,	// (0x000b0911) popup_cale_lunar_info_window_t1

0xb9d1,	// (0x000b091f) popup_cale_lunar_info_window_t2

0xb9df,	// (0x000b092d) popup_cale_lunar_info_window_t3

0xea70,	// (0x000b39be) bg_popup_call2_bubble_pane

0xb457,	// (0x000b03a5) bg_popup_call2_in_pane_cp01_ParamLimits

0xb457,	// (0x000b03a5) bg_popup_call2_in_pane_cp01

0xe74c,	// (0x000b369a) call_type_pane_cp02

0xb49f,	// (0x000b03ed) popup_call2_audio_out_window_g1_ParamLimits

0xb49f,	// (0x000b03ed) popup_call2_audio_out_window_g1

0xb4cb,	// (0x000b0419) popup_call2_audio_out_window_g2_ParamLimits

0xb4cb,	// (0x000b0419) popup_call2_audio_out_window_g2

0xb4f3,	// (0x000b0441) popup_call2_audio_out_window_g3_ParamLimits

0xb4f3,	// (0x000b0441) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b4489) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b4489) popup_call2_audio_out_window_g

0xb52e,	// (0x000b047c) popup_call2_audio_out_window_t1_ParamLimits

0xb52e,	// (0x000b047c) popup_call2_audio_out_window_t1

0xb58d,	// (0x000b04db) popup_call2_audio_out_window_t2_ParamLimits

0xb58d,	// (0x000b04db) popup_call2_audio_out_window_t2

0xb5e1,	// (0x000b052f) popup_call2_audio_out_window_t3_ParamLimits

0xb5e1,	// (0x000b052f) popup_call2_audio_out_window_t3

0xb5f7,	// (0x000b0545) popup_call2_audio_out_window_t4_ParamLimits

0xb5f7,	// (0x000b0545) popup_call2_audio_out_window_t4

0xb60d,	// (0x000b055b) popup_call2_audio_out_window_t5_ParamLimits

0xb60d,	// (0x000b055b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b4492) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b4492) popup_call2_audio_out_window_t

0xb671,	// (0x000b05bf) bg_popup_call2_in_pane_ParamLimits

0xb671,	// (0x000b05bf) bg_popup_call2_in_pane

0xb6cd,	// (0x000b061b) popup_call2_audio_in_window_g1_ParamLimits

0xb6cd,	// (0x000b061b) popup_call2_audio_in_window_g1

0xb705,	// (0x000b0653) popup_call2_audio_in_window_g2_ParamLimits

0xb705,	// (0x000b0653) popup_call2_audio_in_window_g2

0xb73d,	// (0x000b068b) popup_call2_audio_in_window_g3_ParamLimits

0xb73d,	// (0x000b068b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b449f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b449f) popup_call2_audio_in_window_g

0xb795,	// (0x000b06e3) popup_call2_audio_in_window_t1_ParamLimits

0xb795,	// (0x000b06e3) popup_call2_audio_in_window_t1

0xb815,	// (0x000b0763) popup_call2_audio_in_window_t2_ParamLimits

0xb815,	// (0x000b0763) popup_call2_audio_in_window_t2

0xb895,	// (0x000b07e3) popup_call2_audio_in_window_t3_ParamLimits

0xb895,	// (0x000b07e3) popup_call2_audio_in_window_t3

0xb8af,	// (0x000b07fd) popup_call2_audio_in_window_t4_ParamLimits

0xb8af,	// (0x000b07fd) popup_call2_audio_in_window_t4

0xb8c1,	// (0x000b080f) popup_call2_audio_in_window_t5_ParamLimits

0xb8c1,	// (0x000b080f) popup_call2_audio_in_window_t5

0xb8d6,	// (0x000b0824) popup_call2_audio_in_window_t6_ParamLimits

0xb8d6,	// (0x000b0824) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b44a8) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b44a8) popup_call2_audio_in_window_t

0xecc3,	// (0x000b3c11) bg_popup_call2_in_pane_g1

0xb9ed,	// (0x000b093b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b4510) popup_cale_lunar_info_window_t

0xeccb,	// (0x000b3c19) bg_popup_call2_rect_pane_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_call2_rect_pane

0xea70,	// (0x000b39be) call2_cli_visual_graphic_pane

0xea70,	// (0x000b39be) call2_cli_visual_text_pane

0x9dc7,	// (0x000aed15) smil_status_volume_pane_g3

0x0002,

0xede5,	// (0x000b3d33) call2_cli_visual_graphic_pane_g1

0xede5,	// (0x000b3d33) call2_cli_visual_graphic_pane_g2

0xede5,	// (0x000b3d33) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b44b5) call2_cli_visual_graphic_pane_g

0xb8eb,	// (0x000b0839) bg_popup_call2_rect_pane_g1

0xee71,	// (0x000b3dbf) bg_popup_call2_rect_pane_g2

0xb8f3,	// (0x000b0841) bg_popup_call2_rect_pane_g3

0xb8fb,	// (0x000b0849) bg_popup_call2_rect_pane_g4

0xb903,	// (0x000b0851) bg_popup_call2_rect_pane_g5

0xb90b,	// (0x000b0859) bg_popup_call2_rect_pane_g6

0xb913,	// (0x000b0861) bg_popup_call2_rect_pane_g7

0xb91b,	// (0x000b0869) bg_popup_call2_rect_pane_g8

0xb923,	// (0x000b0871) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b44bc) bg_popup_call2_rect_pane_g

0xb92b,	// (0x000b0879) bg_popup_call2_bubble_pane_g1

0xb933,	// (0x000b0881) bg_popup_call2_bubble_pane_g2

0xb93b,	// (0x000b0889) bg_popup_call2_bubble_pane_g3

0xb943,	// (0x000b0891) bg_popup_call2_bubble_pane_g4

0xb94b,	// (0x000b0899) bg_popup_call2_bubble_pane_g5

0xb953,	// (0x000b08a1) bg_popup_call2_bubble_pane_g6

0xb95b,	// (0x000b08a9) bg_popup_call2_bubble_pane_g7

0xb963,	// (0x000b08b1) bg_popup_call2_bubble_pane_g8

0xb96b,	// (0x000b08b9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b44cf) bg_popup_call2_bubble_pane_g

0x09da,	// (0x000a5928) aid_cale_week_size_cell_pane

0x1137,	// (0x000a6085) aid_cams_cif_uncrop_pane_ParamLimits

0x1137,	// (0x000a6085) aid_cams_cif_uncrop_pane

0x12e7,	// (0x000a6235) aid_cams_size_cell_ParamLimits

0x12e7,	// (0x000a6235) aid_cams_size_cell

0x12fb,	// (0x000a6249) grid_cams_pane_ParamLimits

0x1315,	// (0x000a6263) linegrid_cams_pane_ParamLimits

0x1512,	// (0x000a6460) call_video_pane_t1

0x1530,	// (0x000a647e) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b41bc) call_video_pane_t

0x195c,	// (0x000a68aa) aid_cale_month_size_cell_pane_ParamLimits

0x195c,	// (0x000a68aa) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b4559) smil_status_volume_pane_g

0x9dd4,	// (0x000aed22) volume_smil_pane_ParamLimits

0x0233,	// (0x000a5181) aid_popup2_width_pane

0x0934,	// (0x000a5882) cell_qdial_pane_g4_ParamLimits

0x0934,	// (0x000a5882) cell_qdial_pane_g4

0x2841,	// (0x000a778f) aid_blid_cardinal_pane_ParamLimits

0x284d,	// (0x000a779b) aid_blid_destination_pane_ParamLimits

0x284d,	// (0x000a779b) aid_blid_destination_pane

0xeccb,	// (0x000b3c19) bg_popup_call_poc_act_pane_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_call_poc_act_pane

0xeccb,	// (0x000b3c19) bg_popup_call_poc_inact_pane_ParamLimits

0xeccb,	// (0x000b3c19) bg_popup_call_poc_inact_pane

0xb973,	// (0x000b08c1) bg_popup_call_poc_act_pane_g1

0xb97b,	// (0x000b08c9) bg_popup_call_poc_act_pane_g2

0xb983,	// (0x000b08d1) bg_popup_call_poc_act_pane_g3

0xb943,	// (0x000b0891) bg_popup_call_poc_act_pane_g4

0xb94b,	// (0x000b0899) bg_popup_call_poc_act_pane_g5

0xb98b,	// (0x000b08d9) bg_popup_call_poc_act_pane_g6

0xb95b,	// (0x000b08a9) bg_popup_call_poc_act_pane_g7

0xb993,	// (0x000b08e1) bg_popup_call_poc_act_pane_g8

0xea70,	// (0x000b39be) main_usb_pane

0x9d7b,	// (0x000aecc9) popup_cale_lunar_info_window

0x1808,	// (0x000a6756) im_reading_pane_t1_ParamLimits

0x970e,	// (0x000ae65c) list_im_pane_ParamLimits

0x971f,	// (0x000ae66d) scroll_pane_cp07_ParamLimits

0xea70,	// (0x000b39be) grid_highlight_pane_cp012

0xeccb,	// (0x000b3c19) mup_scale_pane_ParamLimits

0xa87b,	// (0x000af7c9) main_usb_pane_g1_ParamLimits

0xa87b,	// (0x000af7c9) main_usb_pane_g1

0x346f,	// (0x000a83bd) main_usb_pane_g2_ParamLimits

0x346f,	// (0x000a83bd) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b44f9) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b44f9) main_usb_pane_g

0x3485,	// (0x000a83d3) main_usb_pane_t1_ParamLimits

0x3485,	// (0x000a83d3) main_usb_pane_t1

0x3497,	// (0x000a83e5) main_usb_pane_t2_ParamLimits

0x3497,	// (0x000a83e5) main_usb_pane_t2

0x34a9,	// (0x000a83f7) main_usb_pane_t3_ParamLimits

0x34a9,	// (0x000a83f7) main_usb_pane_t3

0x34bb,	// (0x000a8409) main_usb_pane_t4_ParamLimits

0x34bb,	// (0x000a8409) main_usb_pane_t4

0x34cd,	// (0x000a841b) main_usb_pane_t5_ParamLimits

0x34cd,	// (0x000a841b) main_usb_pane_t5

0x34df,	// (0x000a842d) main_usb_pane_t6_ParamLimits

0x34df,	// (0x000a842d) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b44fe) main_usb_pane_t_ParamLimits

0x27f0,	// (0x000a773e) aid_text_placing

0x27f9,	// (0x000a7747) main_location2_pane_t1_ParamLimits

0x280b,	// (0x000a7759) main_location2_pane_t2_ParamLimits

0x281d,	// (0x000a776b) main_location2_pane_t3_ParamLimits

0x282f,	// (0x000a777d) main_location2_pane_t4_ParamLimits

0x282f,	// (0x000a777d) main_location2_pane_t4

0xf3cf,	// (0x000b431d) main_location2_pane_t_ParamLimits

0xed07,	// (0x000b3c55) find_pinb_pane_g2_ParamLimits

0xed07,	// (0x000b3c55) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000b4069) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000b4069) find_pinb_pane_g

0xed13,	// (0x000b3c61) find_pinb_pane_t1_ParamLimits

0xed25,	// (0x000b3c73) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000b406e) find_pinb_pane_t_ParamLimits

0xea70,	// (0x000b39be) main_call3_pane

0x1e1b,	// (0x000a6d69) cale_month_day_heading_pane_t1_ParamLimits

0x1ea1,	// (0x000a6def) cale_month_day_heading_pane_t2_ParamLimits

0x1f32,	// (0x000a6e80) cale_month_day_heading_pane_t3_ParamLimits

0x1fc3,	// (0x000a6f11) cale_month_day_heading_pane_t4_ParamLimits

0x2058,	// (0x000a6fa6) cale_month_day_heading_pane_t5_ParamLimits

0x20f9,	// (0x000a7047) cale_month_day_heading_pane_t6_ParamLimits

0x219a,	// (0x000a70e8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b41f4) cale_month_day_heading_pane_t_ParamLimits

0x9975,	// (0x000ae8c3) smil_status_volume_pane

0x2f6a,	// (0x000a7eb8) postcard_address_pane_ParamLimits

0x2f6a,	// (0x000a7eb8) postcard_address_pane

0x2f7c,	// (0x000a7eca) postcard_message_pane_ParamLimits

0x2f7c,	// (0x000a7eca) postcard_message_pane

0x344d,	// (0x000a839b) call2_cli_visual_pane_t1_ParamLimits

0x344d,	// (0x000a839b) call2_cli_visual_pane_t1

0x3c7f,	// (0x000a8bcd) postcard_message_pane_t1_ParamLimits

0x3c7f,	// (0x000a8bcd) postcard_message_pane_t1

0x3c68,	// (0x000a8bb6) postcard_address_pane_t1_ParamLimits

0x3c68,	// (0x000a8bb6) postcard_address_pane_t1

0x3c54,	// (0x000a8ba2) popup_call3_audio_in_window_ParamLimits

0x3c54,	// (0x000a8ba2) popup_call3_audio_in_window

0x3adf,	// (0x000a8a2d) bg_popup_call3_in_pane_ParamLimits

0x3adf,	// (0x000a8a2d) bg_popup_call3_in_pane

0x3b55,	// (0x000a8aa3) popup_call3_audio_in_window_g1_ParamLimits

0x3b55,	// (0x000a8aa3) popup_call3_audio_in_window_g1

0x3b75,	// (0x000a8ac3) popup_call3_audio_in_window_g2_ParamLimits

0x3b75,	// (0x000a8ac3) popup_call3_audio_in_window_g2

0x3b95,	// (0x000a8ae3) popup_call3_audio_in_window_g3_ParamLimits

0x3b95,	// (0x000a8ae3) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b4560) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b4560) popup_call3_audio_in_window_g

0x3bc6,	// (0x000a8b14) popup_call3_audio_in_window_t1_ParamLimits

0x3bc6,	// (0x000a8b14) popup_call3_audio_in_window_t1

0x3c04,	// (0x000a8b52) popup_call3_audio_in_window_t2_ParamLimits

0x3c04,	// (0x000a8b52) popup_call3_audio_in_window_t2

0x3c42,	// (0x000a8b90) popup_call3_audio_in_window_t3_ParamLimits

0x3c42,	// (0x000a8b90) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b4569) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b4569) popup_call3_audio_in_window_t

0xa6d0,	// (0x000af61e) bg_popup_call3_rect_pane

0xb8eb,	// (0x000b0839) bg_popup_call3_rect_pane_g1

0xee71,	// (0x000b3dbf) bg_popup_call3_rect_pane_g2

0xb8f3,	// (0x000b0841) bg_popup_call3_rect_pane_g3

0xb8fb,	// (0x000b0849) bg_popup_call3_rect_pane_g4

0xb903,	// (0x000b0851) bg_popup_call3_rect_pane_g5

0xb90b,	// (0x000b0859) bg_popup_call3_rect_pane_g6

0xb913,	// (0x000b0861) bg_popup_call3_rect_pane_g7

0x2b31,	// (0x000a7a7f) mup_visualizer_osc_pane

0xa79d,	// (0x000af6eb) mup_visualizer_spec_pane

0x3b0f,	// (0x000a8a5d) call3_video_qcif_pane_ParamLimits

0x3b0f,	// (0x000a8a5d) call3_video_qcif_pane

0x3b22,	// (0x000a8a70) call3_video_qcif_uncrop_pane_ParamLimits

0x3b22,	// (0x000a8a70) call3_video_qcif_uncrop_pane

0x3b30,	// (0x000a8a7e) call3_video_subqcif_pane_ParamLimits

0x3b30,	// (0x000a8a7e) call3_video_subqcif_pane

0x3b44,	// (0x000a8a92) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b44,	// (0x000a8a92) call3_video_subqcif_uncrop_pane

0x3bb5,	// (0x000a8b03) popup_call3_audio_in_window_g4_ParamLimits

0x3bb5,	// (0x000a8b03) popup_call3_audio_in_window_g4

0x3ace,	// (0x000a8a1c) mup_spec_half_pane

0x3ad7,	// (0x000a8a25) mup_spec_half_pane_cp

0xbb50,	// (0x000b0a9e) mup_osc_middle_pane

0xbb59,	// (0x000b0aa7) mup_visualizer_osc_pane_g1

0x3aae,	// (0x000a89fc) mup_spec_bar_pane_ParamLimits

0x3aae,	// (0x000a89fc) mup_spec_bar_pane

0xbb3d,	// (0x000b0a8b) mup_spec_bar_pane_g1

0xbb47,	// (0x000b0a95) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b4554) mup_spec_bar_pane_g

0x09da,	// (0x000a5928) aid_cale_week_size_cell_pane_ParamLimits

0x09f4,	// (0x000a5942) bg_cale_heading_pane_ParamLimits

0xeeae,	// (0x000b3dfc) bg_cale_pane_cp01_ParamLimits

0x0a0c,	// (0x000a595a) cale_week_corner_pane_ParamLimits

0x0a2b,	// (0x000a5979) cale_week_day_heading_pane_ParamLimits

0x0a48,	// (0x000a5996) cale_week_scroll_pane_g1_ParamLimits

0x0a5b,	// (0x000a59a9) cale_week_scroll_pane_g2_ParamLimits

0x0a73,	// (0x000a59c1) cale_week_scroll_pane_g3_ParamLimits

0x0a8b,	// (0x000a59d9) cale_week_scroll_pane_g4_ParamLimits

0x0aa3,	// (0x000a59f1) cale_week_scroll_pane_g5_ParamLimits

0x0ac3,	// (0x000a5a11) cale_week_scroll_pane_g6_ParamLimits

0x0ae3,	// (0x000a5a31) cale_week_scroll_pane_g7_ParamLimits

0x0b03,	// (0x000a5a51) cale_week_scroll_pane_g8_ParamLimits

0x0b27,	// (0x000a5a75) cale_week_scroll_pane_g9_ParamLimits

0x0b3f,	// (0x000a5a8d) cale_week_scroll_pane_g10_ParamLimits

0x0b57,	// (0x000a5aa5) cale_week_scroll_pane_g11_ParamLimits

0x0b6f,	// (0x000a5abd) cale_week_scroll_pane_g12_ParamLimits

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g13_ParamLimits

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g14_ParamLimits

0x0b87,	// (0x000a5ad5) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000b40fa) cale_week_scroll_pane_g_ParamLimits

0x0bc3,	// (0x000a5b11) cale_week_time_pane_ParamLimits

0x0be7,	// (0x000a5b35) grid_cale_week_pane_ParamLimits

0xeecc,	// (0x000b3e1a) listscroll_cale_week_pane_t1

0xeede,	// (0x000b3e2c) scroll_pane_cp08_ParamLimits

0x19b1,	// (0x000a68ff) cale_month_corner_pane_ParamLimits

0x993f,	// (0x000ae88d) cale_month_pane_t1

0x1db9,	// (0x000a6d07) cale_month_week_pane_ParamLimits

0x264c,	// (0x000a759a) popup_call_status_window_g1_ParamLimits

0x2660,	// (0x000a75ae) popup_call_status_window_g2_ParamLimits

0x2674,	// (0x000a75c2) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b42a4) popup_call_status_window_g_ParamLimits

0xa34c,	// (0x000af29a) aid_call2_pane

0x2d9e,	// (0x000a7cec) msg_header_pane_g1

0x2f6a,	// (0x000a7eb8) postcard_address2_pane_ParamLimits

0x2f6a,	// (0x000a7eb8) postcard_address2_pane

0x2f7c,	// (0x000a7eca) postcard_message2_pane_ParamLimits

0x2f7c,	// (0x000a7eca) postcard_message2_pane

0x3a60,	// (0x000a89ae) message2_row_pane_ParamLimits

0x3a60,	// (0x000a89ae) message2_row_pane

0x3a7c,	// (0x000a89ca) address2_row_pane_ParamLimits

0x3a7c,	// (0x000a89ca) address2_row_pane

0xbb0b,	// (0x000b0a59) postcard_message2_row_pane_g1

0xbb13,	// (0x000b0a61) postcard_message2_row_pane_t1

0xbb0b,	// (0x000b0a59) address2_row_pane_g1

0xbb13,	// (0x000b0a61) address2_row_pane_t1

0x0fda,	// (0x000a5f28) aid_size_cell_vorec

0xea70,	// (0x000b39be) main_rss_pane

0x3a8f,	// (0x000a89dd) rss_list_single_pane_ParamLimits

0x3a8f,	// (0x000a89dd) rss_list_single_pane

0xbb21,	// (0x000b0a6f) rss_list_single_pane_t1

0xbb2f,	// (0x000b0a7d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b454f) rss_list_single_pane_t

0xea70,	// (0x000b39be) main_camera2_pane

0xea70,	// (0x000b39be) main_video2_pane

0x3cf8,	// (0x000a8c46) cams_zoom_pane_cp2_ParamLimits

0x3cf8,	// (0x000a8c46) cams_zoom_pane_cp2

0x3d18,	// (0x000a8c66) image2_vga_pane_ParamLimits

0x3d18,	// (0x000a8c66) image2_vga_pane

0x3d69,	// (0x000a8cb7) main_camera2_pane_g1_ParamLimits

0x3d69,	// (0x000a8cb7) main_camera2_pane_g1

0x3d89,	// (0x000a8cd7) main_camera2_pane_g2_ParamLimits

0x3d89,	// (0x000a8cd7) main_camera2_pane_g2

0x3da9,	// (0x000a8cf7) main_camera2_pane_g3_ParamLimits

0x3da9,	// (0x000a8cf7) main_camera2_pane_g3

0x3dc9,	// (0x000a8d17) main_camera2_pane_g4_ParamLimits

0x3dc9,	// (0x000a8d17) main_camera2_pane_g4

0x3de9,	// (0x000a8d37) main_camera2_pane_g5_ParamLimits

0x3de9,	// (0x000a8d37) main_camera2_pane_g5

0x3e09,	// (0x000a8d57) main_camera2_pane_g6_ParamLimits

0x3e09,	// (0x000a8d57) main_camera2_pane_g6

0x3e29,	// (0x000a8d77) main_camera2_pane_g7_ParamLimits

0x3e29,	// (0x000a8d77) main_camera2_pane_g7

0x3e49,	// (0x000a8d97) main_camera2_pane_g8_ParamLimits

0x3e49,	// (0x000a8d97) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b4570) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b4570) main_camera2_pane_g

0x3e89,	// (0x000a8dd7) main_camera2_pane_t1_ParamLimits

0x3e89,	// (0x000a8dd7) main_camera2_pane_t1

0x3ebe,	// (0x000a8e0c) main_camera2_pane_t2_ParamLimits

0x3ebe,	// (0x000a8e0c) main_camera2_pane_t2

0x3ee4,	// (0x000a8e32) main_camera2_pane_t3_ParamLimits

0x3ee4,	// (0x000a8e32) main_camera2_pane_t3

0x3f42,	// (0x000a8e90) main_camera2_pane_t4_ParamLimits

0x3f42,	// (0x000a8e90) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b4583) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b4583) main_camera2_pane_t

0x3fd4,	// (0x000a8f22) cams_zoom_pane_cp4_ParamLimits

0x3fd4,	// (0x000a8f22) cams_zoom_pane_cp4

0x3fea,	// (0x000a8f38) image2_cif_pane_ParamLimits

0x3fea,	// (0x000a8f38) image2_cif_pane

0x4015,	// (0x000a8f63) image2_subqcif_pane_ParamLimits

0x4015,	// (0x000a8f63) image2_subqcif_pane

0x402f,	// (0x000a8f7d) main_video2_pane_g1_ParamLimits

0x402f,	// (0x000a8f7d) main_video2_pane_g1

0x4049,	// (0x000a8f97) main_video2_pane_g2_ParamLimits

0x4049,	// (0x000a8f97) main_video2_pane_g2

0x405f,	// (0x000a8fad) main_video2_pane_g3_ParamLimits

0x405f,	// (0x000a8fad) main_video2_pane_g3

0x4075,	// (0x000a8fc3) main_video2_pane_g4_ParamLimits

0x4075,	// (0x000a8fc3) main_video2_pane_g4

0x408b,	// (0x000a8fd9) main_video2_pane_g5_ParamLimits

0x408b,	// (0x000a8fd9) main_video2_pane_g5

0x40a1,	// (0x000a8fef) main_video2_pane_g6_ParamLimits

0x40a1,	// (0x000a8fef) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b4592) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b4592) main_video2_pane_g

0x40bb,	// (0x000a9009) main_video2_pane_t1_ParamLimits

0x40bb,	// (0x000a9009) main_video2_pane_t1

0x40df,	// (0x000a902d) main_video2_pane_t2_ParamLimits

0x40df,	// (0x000a902d) main_video2_pane_t2

0x412d,	// (0x000a907b) main_video2_pane_t3_ParamLimits

0x412d,	// (0x000a907b) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b459f) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b459f) main_video2_pane_t

0x359a,	// (0x000a84e8) call_muted_g2

0x0001,

0xf5f3,	// (0x000b4541) call_muted_g

0xea70,	// (0x000b39be) main_mup2_pane

0x4171,	// (0x000a90bf) main_mup2_pane_g1_ParamLimits

0x4171,	// (0x000a90bf) main_mup2_pane_g1

0x417d,	// (0x000a90cb) main_mup2_pane_g2_ParamLimits

0x417d,	// (0x000a90cb) main_mup2_pane_g2

0x9e42,	// (0x000aed90) main_mup_pane_g13_cp1

0x9e4a,	// (0x000aed98) mup_volume_pane_cp1

0x4199,	// (0x000a90e7) main_mup2_pane_g4_ParamLimits

0x4199,	// (0x000a90e7) main_mup2_pane_g4

0x41ab,	// (0x000a90f9) main_mup2_pane_g5_ParamLimits

0x41ab,	// (0x000a90f9) main_mup2_pane_g5

0x41bd,	// (0x000a910b) main_mup2_pane_g6_ParamLimits

0x41bd,	// (0x000a910b) main_mup2_pane_g6

0x41cf,	// (0x000a911d) main_mup2_pane_g7_ParamLimits

0x41cf,	// (0x000a911d) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b45a6) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b45a6) main_mup2_pane_g

0x41e7,	// (0x000a9135) main_mup2_pane_t1_ParamLimits

0x41e7,	// (0x000a9135) main_mup2_pane_t1

0x41fd,	// (0x000a914b) main_mup2_pane_t2_ParamLimits

0x41fd,	// (0x000a914b) main_mup2_pane_t2

0x4213,	// (0x000a9161) main_mup2_pane_t3_ParamLimits

0x4213,	// (0x000a9161) main_mup2_pane_t3

0x4229,	// (0x000a9177) main_mup2_pane_t4_ParamLimits

0x4229,	// (0x000a9177) main_mup2_pane_t4

0x4241,	// (0x000a918f) main_mup2_pane_t5_ParamLimits

0x4241,	// (0x000a918f) main_mup2_pane_t5

0x4259,	// (0x000a91a7) main_mup2_pane_t6_ParamLimits

0x4259,	// (0x000a91a7) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b45b5) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b45b5) main_mup2_pane_t

0x4289,	// (0x000a91d7) mup2_visualizer_pane_ParamLimits

0x4289,	// (0x000a91d7) mup2_visualizer_pane

0x42b7,	// (0x000a9205) mup_progress_pane_cp_ParamLimits

0x42b7,	// (0x000a9205) mup_progress_pane_cp

0x9e2d,	// (0x000aed7b) mup_volume_pane_cp_ParamLimits

0x9e2d,	// (0x000aed7b) mup_volume_pane_cp

0x42cb,	// (0x000a9219) mup2_visualizer_pane_g1_ParamLimits

0x42cb,	// (0x000a9219) mup2_visualizer_pane_g1

0xbb90,	// (0x000b0ade) mup2_visualizer_pane_g2_ParamLimits

0xbb90,	// (0x000b0ade) mup2_visualizer_pane_g2

0x42e2,	// (0x000a9230) mup2_visualizer_pane_g3_ParamLimits

0x42e2,	// (0x000a9230) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b45c2) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b45c2) mup2_visualizer_pane_g

0xa9c4,	// (0x000af912) aid_size_cell_fmradio

0x374c,	// (0x000a869a) aid_height_parent_landcape

0x979d,	// (0x000ae6eb) wml_content_pane_cp

0x97a5,	// (0x000ae6f3) wml_tabs_pane

0x97ae,	// (0x000ae6fc) popup_wml_miniature_window

0x97b6,	// (0x000ae704) scroll_pane_cp021

0x97ca,	// (0x000ae718) wml_content_pane_comp8

0xea70,	// (0x000b39be) bg_popup_sub_pane_cp05

0xbbae,	// (0x000b0afc) popup_wml_miniature_window_g1

0xbbb6,	// (0x000b0b04) wml_miniature_view_pane

0x42ee,	// (0x000a923c) aid_size_wml_view

0x42f6,	// (0x000a9244) wml_miniature_view_pane_g1

0x42ff,	// (0x000a924d) wml_miniature_view_pane_g2

0x4308,	// (0x000a9256) wml_miniature_view_pane_g3

0x4310,	// (0x000a925e) wml_miniature_view_pane_g4

0x4318,	// (0x000a9266) wml_miniature_view_pane_g5

0x4320,	// (0x000a926e) wml_miniature_view_pane_g6

0x4328,	// (0x000a9276) wml_miniature_view_pane_g7

0x4330,	// (0x000a927e) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b45c9) wml_miniature_view_pane_g

0xbbbe,	// (0x000b0b0c) background_graphic_ParamLimits

0xbbbe,	// (0x000b0b0c) background_graphic

0xbbca,	// (0x000b0b18) wml_tabs_2_pane

0xbbd3,	// (0x000b0b21) wml_tabs_3_pane_ParamLimits

0xbbd3,	// (0x000b0b21) wml_tabs_3_pane

0xbbe5,	// (0x000b0b33) wml_tabs_4_pane_ParamLimits

0xbbe5,	// (0x000b0b33) wml_tabs_4_pane

0xbbfb,	// (0x000b0b49) wml_tabs_5_pane_ParamLimits

0xbbfb,	// (0x000b0b49) wml_tabs_5_pane

0xbc15,	// (0x000b0b63) wml_tabs_pane_g2_ParamLimits

0xbc15,	// (0x000b0b63) wml_tabs_pane_g2

0xbc29,	// (0x000b0b77) wml_tabs_pane_g3_ParamLimits

0xbc29,	// (0x000b0b77) wml_tabs_pane_g3

0x4338,	// (0x000a9286) wml_tabs_2_active_pane_ParamLimits

0x4338,	// (0x000a9286) wml_tabs_2_active_pane

0x434c,	// (0x000a929a) wml_tabs_2_passive_pane_ParamLimits

0x434c,	// (0x000a929a) wml_tabs_2_passive_pane

0x4360,	// (0x000a92ae) wml_tabs_3_active_pane_cp_ParamLimits

0x4360,	// (0x000a92ae) wml_tabs_3_active_pane_cp

0x4375,	// (0x000a92c3) wml_tabs_3_passive_pane_ParamLimits

0x4375,	// (0x000a92c3) wml_tabs_3_passive_pane

0x4388,	// (0x000a92d6) wml_tabs_3_passive_pane_cp_ParamLimits

0x4388,	// (0x000a92d6) wml_tabs_3_passive_pane_cp

0x439f,	// (0x000a92ed) tabs_4_active_pane

0x43a7,	// (0x000a92f5) tabs_4_passive_pane

0x43b1,	// (0x000a92ff) tabs_4_passive_pane_cp

0x43b9,	// (0x000a9307) tabs_4_passive_pane_cp2

0x3467,	// (0x000a83b5) aid_height_text

0x2b07,	// (0x000a7a55) mup_volume_cont_pane_ParamLimits

0x2b07,	// (0x000a7a55) mup_volume_cont_pane

0x05b8,	// (0x000a5506) aid_size_cell_pinb

0x05c2,	// (0x000a5510) aid_size_list_pinb

0x42a3,	// (0x000a91f1) mup2_volume_cont_pane_ParamLimits

0x42a3,	// (0x000a91f1) mup2_volume_cont_pane

0x9e19,	// (0x000aed67) mup2_volume_cont_pane_g1_ParamLimits

0x9e19,	// (0x000aed67) mup2_volume_cont_pane_g1

0x023f,	// (0x000a518d) aid_size_cell_touch_ParamLimits

0x023f,	// (0x000a518d) aid_size_cell_touch

0x04a8,	// (0x000a53f6) touch_pane_ParamLimits

0x04a8,	// (0x000a53f6) touch_pane

0x958b,	// (0x000ae4d9) main_rss2_pane

0xbc46,	// (0x000b0b94) listscroll_rss2_pane

0xbc4f,	// (0x000b0b9d) rss2_navigation_pane

0xbc57,	// (0x000b0ba5) list_rss2_pane

0xa48f,	// (0x000af3dd) scroll_pane_cp22

0xbc5f,	// (0x000b0bad) rss2_navigation_pane_g1

0xbc68,	// (0x000b0bb6) rss2_navigation_pane_g2

0xbc70,	// (0x000b0bbe) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b45da) rss2_navigation_pane_g

0xbc78,	// (0x000b0bc6) rss2_navigation_pane_t1

0x43c3,	// (0x000a9311) rss2_list_single_pane_ParamLimits

0x43c3,	// (0x000a9311) rss2_list_single_pane

0xbc86,	// (0x000b0bd4) rss2_list_single_pane_t2

0xbc94,	// (0x000b0be2) rss2_list_single_pane_t3_ParamLimits

0xbc94,	// (0x000b0be2) rss2_list_single_pane_t3

0xbcb1,	// (0x000b0bff) rss2_list_single_pane_t4

0x2456,	// (0x000a73a4) smil_status_pane_g1

0x957d,	// (0x000ae4cb) main_image2_pane_ParamLimits

0x957d,	// (0x000ae4cb) main_image2_pane

0x3e69,	// (0x000a8db7) main_camera2_pane_g9_ParamLimits

0x3e69,	// (0x000a8db7) main_camera2_pane_g9

0x3f97,	// (0x000a8ee5) main_camera2_pane_t5_ParamLimits

0x3f97,	// (0x000a8ee5) main_camera2_pane_t5

0x9de9,	// (0x000aed37) main_camera2_pane_t6_ParamLimits

0x9de9,	// (0x000aed37) main_camera2_pane_t6

0x43d8,	// (0x000a9326) main_image2_pane_g1_ParamLimits

0x43d8,	// (0x000a9326) main_image2_pane_g1

0x31a3,	// (0x000a80f1) smil2_video_pane_ParamLimits

0x31a3,	// (0x000a80f1) smil2_video_pane

0x027f,	// (0x000a51cd) aid_zoom_text_primary_cp

0x9573,	// (0x000ae4c1) popup_preview_fixed_window

0x9706,	// (0x000ae654) im_reading_pane_g1

0x3ce0,	// (0x000a8c2e) cams2_bc_adjust_pane_cp_ParamLimits

0x3ce0,	// (0x000a8c2e) cams2_bc_adjust_pane_cp

0x3fc6,	// (0x000a8f14) cams2_bc_adjust_pane_ParamLimits

0x3fc6,	// (0x000a8f14) cams2_bc_adjust_pane

0xcb68,	// (0x000b1ab6) cams2_bc_adjust_pane_g1

0x9e52,	// (0x000aeda0) cams2_slider_pane

0x9e5b,	// (0x000aeda9) cams2_slider_pane_g1

0x9e64,	// (0x000aedb2) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b45e1) cams2_slider_pane_g

0x06b0,	// (0x000a55fe) calc_display_pane_ParamLimits

0x06d8,	// (0x000a5626) calc_paper_pane_ParamLimits

0x06fb,	// (0x000a5649) grid_calc_pane_ParamLimits

0x9d0e,	// (0x000aec5c) popup_clock_digital_window_t1_ParamLimits

0xa961,	// (0x000af8af) main_image_pane_t1

0x0692,	// (0x000a55e0) aid_size_cell_calc_ParamLimits

0x0692,	// (0x000a55e0) aid_size_cell_calc

0x37a4,	// (0x000a86f2) popup_blid_sat_info2_window_ParamLimits

0x37a4,	// (0x000a86f2) popup_blid_sat_info2_window

0xbcc7,	// (0x000b0c15) aid_size_cell_blid

0xbccf,	// (0x000b0c1d) bg_popup_window_pane_cp07

0xbcf2,	// (0x000b0c40) grid_popup_blid_pane

0xbcfc,	// (0x000b0c4a) heading_pane_cp05_ParamLimits

0xbcfc,	// (0x000b0c4a) heading_pane_cp05

0xbdc6,	// (0x000b0d14) cell_popup_blid_pane_ParamLimits

0xbdc6,	// (0x000b0d14) cell_popup_blid_pane

0xbdea,	// (0x000b0d38) cell_popup_blid_pane_g1

0xbdfe,	// (0x000b0d4c) cell_popup_blid_pane_t1

0x4273,	// (0x000a91c1) mup2_indicator_pane_ParamLimits

0x4273,	// (0x000a91c1) mup2_indicator_pane

0xa6d0,	// (0x000af61e) mup2_visualizer_osc_pane

0xbb9c,	// (0x000b0aea) mup2_visualizer_spec_pane_ParamLimits

0xbb9c,	// (0x000b0aea) mup2_visualizer_spec_pane

0x43ee,	// (0x000a933c) mup2_spec_half_pane

0x43f7,	// (0x000a9345) mup2_spec_half_pane_cp

0x43ff,	// (0x000a934d) mup2_spec_bar_pane_ParamLimits

0x43ff,	// (0x000a934d) mup2_spec_bar_pane

0xbb3d,	// (0x000b0a8b) mup2_spec_bar_pane_g1

0xbb47,	// (0x000b0a95) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b4554) mup2_spec_bar_pane_g

0x441f,	// (0x000a936d) mup2_osc_middle_pane

0xbb59,	// (0x000b0aa7) mup2_visualizer_osc_pane_g1

0xe67d,	// (0x000b35cb) popup_number_entry_window_t1_ParamLimits

0xe690,	// (0x000b35de) popup_number_entry_window_t2_ParamLimits

0xe6a2,	// (0x000b35f0) popup_number_entry_window_t3_ParamLimits

0x04fa,	// (0x000a5448) popup_number_entry_window_t5_ParamLimits

0x04fa,	// (0x000a5448) popup_number_entry_window_t5

0xf0c6,	// (0x000b4014) popup_number_entry_window_t_ParamLimits

0xe6b4,	// (0x000b3602) text_title_cp2_ParamLimits

0x9d4d,	// (0x000aec9b) aid_hotspot_pointer_text2_pane

0x9d67,	// (0x000aecb5) main_viewer_pane_g9_ParamLimits

0x9d67,	// (0x000aecb5) main_viewer_pane_g9

0x993f,	// (0x000ae88d) cale_month_pane_t1_ParamLimits

0x99aa,	// (0x000ae8f8) bg_cale_pane_ParamLimits

0x99c2,	// (0x000ae910) list_cale_pane_ParamLimits

0x99d3,	// (0x000ae921) listscroll_cale_day_pane_t1

0x99e5,	// (0x000ae933) scroll_pane_cp09_ParamLimits

0x2b39,	// (0x000a7a87) main_mup_eq_pane_t1_ParamLimits

0x2b39,	// (0x000a7a87) main_mup_eq_pane_t1

0x2b53,	// (0x000a7aa1) main_mup_eq_pane_t2_ParamLimits

0x2b53,	// (0x000a7aa1) main_mup_eq_pane_t2

0x2b6d,	// (0x000a7abb) main_mup_eq_pane_t3_ParamLimits

0x2b6d,	// (0x000a7abb) main_mup_eq_pane_t3

0x2b89,	// (0x000a7ad7) main_mup_eq_pane_t4_ParamLimits

0x2b89,	// (0x000a7ad7) main_mup_eq_pane_t4

0x2ba5,	// (0x000a7af3) main_mup_eq_pane_t5_ParamLimits

0x2ba5,	// (0x000a7af3) main_mup_eq_pane_t5

0x2bc1,	// (0x000a7b0f) main_mup_eq_pane_t6_ParamLimits

0x2bc1,	// (0x000a7b0f) main_mup_eq_pane_t6

0x2bd5,	// (0x000a7b23) main_mup_eq_pane_t7_ParamLimits

0x2bd5,	// (0x000a7b23) main_mup_eq_pane_t7

0x2be9,	// (0x000a7b37) main_mup_eq_pane_t8_ParamLimits

0x2be9,	// (0x000a7b37) main_mup_eq_pane_t8

0x2bfd,	// (0x000a7b4b) main_mup_eq_pane_t9_ParamLimits

0x2bfd,	// (0x000a7b4b) main_mup_eq_pane_t9

0x2c17,	// (0x000a7b65) main_mup_eq_pane_t10_ParamLimits

0x2c17,	// (0x000a7b65) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b43a3) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b43a3) main_mup_eq_pane_t

0x2cc6,	// (0x000a7c14) mup_equalizer_pane_cp5_ParamLimits

0x2cda,	// (0x000a7c28) mup_equalizer_pane_cp6_ParamLimits

0x2cee,	// (0x000a7c3c) mup_equalizer_pane_cp7_ParamLimits

0x958b,	// (0x000ae4d9) main_gallery_pane

0xbb62,	// (0x000b0ab0) smil2_volume_pane

0xbb6a,	// (0x000b0ab8) smil_status_volume_pane_g1_ParamLimits

0xbb7d,	// (0x000b0acb) smil_status_volume_pane_g2_ParamLimits

0x9dc7,	// (0x000aed15) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b4559) smil_status_volume_pane_g_ParamLimits

0xbccf,	// (0x000b0c1d) bg_popup_window_pane_cp07_ParamLimits

0xbcdd,	// (0x000b0c2b) blid_firmament_pane

0x4428,	// (0x000a9376) aid_size_cell_gallery_ParamLimits

0x4428,	// (0x000a9376) aid_size_cell_gallery

0x443e,	// (0x000a938c) grid_gallery_pane_ParamLimits

0x443e,	// (0x000a938c) grid_gallery_pane

0x4457,	// (0x000a93a5) cell_gallery_pane_ParamLimits

0x4457,	// (0x000a93a5) cell_gallery_pane

0xbe0c,	// (0x000b0d5a) bg_cell_gallery_focus_pane_ParamLimits

0xbe0c,	// (0x000b0d5a) bg_cell_gallery_focus_pane

0xbe1e,	// (0x000b0d6c) cell_gallery_pane_g1_ParamLimits

0xbe1e,	// (0x000b0d6c) cell_gallery_pane_g1

0x44a0,	// (0x000a93ee) cell_gallery_pane_g2_ParamLimits

0x44a0,	// (0x000a93ee) cell_gallery_pane_g2

0x44ad,	// (0x000a93fb) cell_gallery_pane_g3_ParamLimits

0x44ad,	// (0x000a93fb) cell_gallery_pane_g3

0xbe2a,	// (0x000b0d78) cell_gallery_pane_g4_ParamLimits

0xbe2a,	// (0x000b0d78) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b4607) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b4607) cell_gallery_pane_g

0xbe36,	// (0x000b0d84) bg_cell_gallery_focus_pane_g1

0xbe3e,	// (0x000b0d8c) bg_cell_gallery_focus_pane_g2

0xbe46,	// (0x000b0d94) bg_cell_gallery_focus_pane_g3

0xbe4e,	// (0x000b0d9c) bg_cell_gallery_focus_pane_g4

0xbe56,	// (0x000b0da4) bg_cell_gallery_focus_pane_g5

0xbe5e,	// (0x000b0dac) bg_cell_gallery_focus_pane_g6

0xbe66,	// (0x000b0db4) bg_cell_gallery_focus_pane_g7

0xbe6e,	// (0x000b0dbc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b4610) bg_cell_gallery_focus_pane_g

0xbe76,	// (0x000b0dc4) aid_firma_cardinal

0xbe8a,	// (0x000b0dd8) blid_firmament_pane_t1

0xbea1,	// (0x000b0def) blid_firmament_pane_t2

0xbeb8,	// (0x000b0e06) blid_firmament_pane_t3

0xbecf,	// (0x000b0e1d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b4621) blid_firmament_pane_t

0xbee6,	// (0x000b0e34) blid_sat_info_pane

0xbef6,	// (0x000b0e44) blid_sat_info_pane_g1

0xbef6,	// (0x000b0e44) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b462a) blid_sat_info_pane_g

0xbf00,	// (0x000b0e4e) blid_sat_info_pane_t1

0xbf0e,	// (0x000b0e5c) smil2_volume_content_pane

0xbf17,	// (0x000b0e65) smil2_volume_pane_g1

0xbf1f,	// (0x000b0e6d) smil2_volume_content_pane_g1

0xbf28,	// (0x000b0e76) smil2_volume_content_pane_g2

0xbf31,	// (0x000b0e7f) smil2_volume_content_pane_g3

0xbf3a,	// (0x000b0e88) smil2_volume_content_pane_g4

0xbf43,	// (0x000b0e91) smil2_volume_content_pane_g5

0xbf4c,	// (0x000b0e9a) smil2_volume_content_pane_g6

0xbf55,	// (0x000b0ea3) smil2_volume_content_pane_g7

0xbf5e,	// (0x000b0eac) smil2_volume_content_pane_g8

0xbf67,	// (0x000b0eb5) smil2_volume_content_pane_g9

0xbf70,	// (0x000b0ebe) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b462f) smil2_volume_content_pane_g

0x0c9b,	// (0x000a5be9) cale_week_day_heading_pane_t1_ParamLimits

0x0ce0,	// (0x000a5c2e) cale_week_day_heading_pane_t2_ParamLimits

0x0d2a,	// (0x000a5c78) cale_week_day_heading_pane_t3_ParamLimits

0x0d74,	// (0x000a5cc2) cale_week_day_heading_pane_t4_ParamLimits

0x0dbe,	// (0x000a5d0c) cale_week_day_heading_pane_t5_ParamLimits

0x0e10,	// (0x000a5d5e) cale_week_day_heading_pane_t6_ParamLimits

0x0e62,	// (0x000a5db0) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000b411b) cale_week_day_heading_pane_t_ParamLimits

0xeefb,	// (0x000b3e49) bg_cale_side_pane_ParamLimits

0x0ea7,	// (0x000a5df5) cale_week_time_pane_t1_ParamLimits

0x0ec1,	// (0x000a5e0f) cale_week_time_pane_t2_ParamLimits

0x0edb,	// (0x000a5e29) cale_week_time_pane_t3_ParamLimits

0x0ef5,	// (0x000a5e43) cale_week_time_pane_t4_ParamLimits

0x0f0f,	// (0x000a5e5d) cale_week_time_pane_t5_ParamLimits

0x0f29,	// (0x000a5e77) cale_week_time_pane_t6_ParamLimits

0x0f43,	// (0x000a5e91) cale_week_time_pane_t7_ParamLimits

0x0f5d,	// (0x000a5eab) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000b412a) cale_week_time_pane_t_ParamLimits

0x0f7d,	// (0x000a5ecb) cell_cale_week_pane_g2_ParamLimits

0xeefb,	// (0x000b3e49) bg_cale_side_pane_cp01_ParamLimits

0x2243,	// (0x000a7191) cale_month_week_pane_t1_ParamLimits

0x225c,	// (0x000a71aa) cale_month_week_pane_t2_ParamLimits

0x2275,	// (0x000a71c3) cale_month_week_pane_t3_ParamLimits

0x228e,	// (0x000a71dc) cale_month_week_pane_t4_ParamLimits

0x22a7,	// (0x000a71f5) cale_month_week_pane_t5_ParamLimits

0x22c0,	// (0x000a720e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b4203) cale_month_week_pane_t_ParamLimits

0x9951,	// (0x000ae89f) cell_cale_month_pane_g1_ParamLimits

0x958b,	// (0x000ae4d9) main_cale_event_viewer_pane

0xe653,	// (0x000b35a1) listscroll_cale_event_viewer_pane

0xbf79,	// (0x000b0ec7) list_cale_ev_pane

0xbf81,	// (0x000b0ecf) scroll_pane_cp023

0xbf8d,	// (0x000b0edb) field_cale_ev_pane_ParamLimits

0xbf8d,	// (0x000b0edb) field_cale_ev_pane

0xbfab,	// (0x000b0ef9) field_cale_ev_content_pane_ParamLimits

0xbfab,	// (0x000b0ef9) field_cale_ev_content_pane

0xbfb7,	// (0x000b0f05) field_cale_ev_pane_g1_ParamLimits

0xbfb7,	// (0x000b0f05) field_cale_ev_pane_g1

0xbfc3,	// (0x000b0f11) field_cale_ev_pane_g2_ParamLimits

0xbfc3,	// (0x000b0f11) field_cale_ev_pane_g2

0xbfdb,	// (0x000b0f29) field_cale_ev_pane_g3_ParamLimits

0xbfdb,	// (0x000b0f29) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b4644) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b4644) field_cale_ev_pane_g

0xbff3,	// (0x000b0f41) field_cale_ev_pane_t1_ParamLimits

0xbff3,	// (0x000b0f41) field_cale_ev_pane_t1

0xc00a,	// (0x000b0f58) field_cale_ev_content_pane_t1_ParamLimits

0xc00a,	// (0x000b0f58) field_cale_ev_content_pane_t1

0xa847,	// (0x000af795) bg_button_pane_cp01

0x09c8,	// (0x000a5916) listscroll_cale_week_pane_ParamLimits

0xeea5,	// (0x000b3df3) popup_toolbar_window_cp01

0xeecc,	// (0x000b3e1a) listscroll_cale_week_pane_t1_ParamLimits

0x09c8,	// (0x000a5916) listscroll_cale_day_pane_ParamLimits

0xeea5,	// (0x000b3df3) popup_toolbar_window_cp02

0x99d3,	// (0x000ae921) listscroll_cale_day_pane_t1_ParamLimits

0x376a,	// (0x000a86b8) main_cale_month_pane_ParamLimits

0x9db2,	// (0x000aed00) popup_toolbar_window_cp03_ParamLimits

0x9db2,	// (0x000aed00) popup_toolbar_window_cp03

0x306b,	// (0x000a7fb9) main_image_pane_g2_ParamLimits

0x306b,	// (0x000a7fb9) main_image_pane_g2

0x307c,	// (0x000a7fca) main_image_pane_g3_ParamLimits

0x307c,	// (0x000a7fca) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b4435) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b4435) main_image_pane_g

0xa961,	// (0x000af8af) main_image_pane_t1_ParamLimits

0x308d,	// (0x000a7fdb) main_image_pane_t2_ParamLimits

0x308d,	// (0x000a7fdb) main_image_pane_t2

0x309f,	// (0x000a7fed) main_image_pane_t3_ParamLimits

0x309f,	// (0x000a7fed) main_image_pane_t3

0x30c7,	// (0x000a8015) main_image_pane_t4_ParamLimits

0x30c7,	// (0x000a8015) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b443c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b443c) main_image_pane_t

0x30e7,	// (0x000a8035) popup_image_details_window_cp01

0x30f1,	// (0x000a803f) popup_toobar_trans_pane_cp01_ParamLimits

0x30f1,	// (0x000a803f) popup_toobar_trans_pane_cp01

0x3883,	// (0x000a87d1) popup_image_details_window_ParamLimits

0x3883,	// (0x000a87d1) popup_image_details_window

0x9d85,	// (0x000aecd3) popup_image_focus_window

0x3c9a,	// (0x000a8be8) camera2_autofocus_pane_ParamLimits

0x3c9a,	// (0x000a8be8) camera2_autofocus_pane

0xe653,	// (0x000b35a1) bg_popup_sub_pane_cp06

0xc028,	// (0x000b0f76) popup_image_focus_window_g1

0xc030,	// (0x000b0f7e) popup_image_focus_window_g2

0xc038,	// (0x000b0f86) popup_image_focus_window_g3

0xc040,	// (0x000b0f8e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b464b) popup_image_focus_window_g

0xc048,	// (0x000b0f96) popup_image_focus_window_t1

0xc056,	// (0x000b0fa4) popup_image_focus_window_t2

0xc066,	// (0x000b0fb4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b4654) popup_image_focus_window_t

0xc074,	// (0x000b0fc2) camera2_autofocus_pane_g1

0xef7c,	// (0x000b3eca) bg_tb_trans_pane_cp01

0xc082,	// (0x000b0fd0) popup_image_details_window_g1

0xc095,	// (0x000b0fe3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b4666) popup_image_details_window_g

0xc0be,	// (0x000b100c) popup_image_details_window_t1

0xc0d0,	// (0x000b101e) popup_image_details_window_t2

0xc0e9,	// (0x000b1037) popup_image_details_window_t3

0xc0fd,	// (0x000b104b) popup_image_details_window_t4

0xc118,	// (0x000b1066) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b466d) popup_image_details_window_t

0xed7c,	// (0x000b3cca) bg_calc_paper_pane_ParamLimits

0x958b,	// (0x000ae4d9) grid_highlight_pane_cp013

0x959d,	// (0x000ae4eb) list_calc_pane_ParamLimits

0x95af,	// (0x000ae4fd) scroll_pane_cp024

0xed90,	// (0x000b3cde) bg_calc_display_pane_ParamLimits

0x07f9,	// (0x000a5747) calc_display_pane_t1_ParamLimits

0x080b,	// (0x000a5759) calc_display_pane_t2_ParamLimits

0x95b7,	// (0x000ae505) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000b409b) calc_display_pane_t_ParamLimits

0x08c5,	// (0x000a5813) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000b40b8) cell_calc_pane_g

0x08ce,	// (0x000a581c) cell_calc_pane_t1

0xedef,	// (0x000b3d3d) grid_highlight_pane_cp02_ParamLimits

0xee05,	// (0x000b3d53) toolbar_button_pane_cp01_ParamLimits

0xee05,	// (0x000b3d53) toolbar_button_pane_cp01

0xa9a6,	// (0x000af8f4) temp_image_control_pane_ParamLimits

0xa9a6,	// (0x000af8f4) temp_image_control_pane

0x957d,	// (0x000ae4cb) main_mp3_pane

0xc132,	// (0x000b1080) temp_image_control_pane_g1_ParamLimits

0xc132,	// (0x000b1080) temp_image_control_pane_g1

0xc140,	// (0x000b108e) temp_image_control_pane_g2_ParamLimits

0xc140,	// (0x000b108e) temp_image_control_pane_g2

0xc152,	// (0x000b10a0) temp_image_control_pane_g3_ParamLimits

0xc152,	// (0x000b10a0) temp_image_control_pane_g3

0x44ea,	// (0x000a9438) temp_image_control_pane_g4_ParamLimits

0x44ea,	// (0x000a9438) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b4678) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b4678) temp_image_control_pane_g

0xc132,	// (0x000b1080) main_mp3_pane_g1

0x44fd,	// (0x000a944b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b4681) main_mp3_pane_g

0xc195,	// (0x000b10e3) main_mp3_pane_t1

0xef56,	// (0x000b3ea4) main_camera_pane_g8_ParamLimits

0xef56,	// (0x000b3ea4) main_camera_pane_g8

0x128d,	// (0x000a61db) main_video_pane_g7_ParamLimits

0x128d,	// (0x000a61db) main_video_pane_g7

0x9e07,	// (0x000aed55) main_camera2_pane_t7_ParamLimits

0x9e07,	// (0x000aed55) main_camera2_pane_t7

0x975d,	// (0x000ae6ab) scroll_pane_cp025_ParamLimits

0x975d,	// (0x000ae6ab) scroll_pane_cp025

0x9771,	// (0x000ae6bf) scroll_pane_cp026_ParamLimits

0x9771,	// (0x000ae6bf) scroll_pane_cp026

0x9780,	// (0x000ae6ce) wml_content_pane_ParamLimits

0x958b,	// (0x000ae4d9) main_touch_calib_pane

0x45d1,	// (0x000a951f) main_touch_calib_pane_g1

0x45e3,	// (0x000a9531) main_touch_calib_pane_g2

0x45f5,	// (0x000a9543) main_touch_calib_pane_g3

0x4607,	// (0x000a9555) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b469f) main_touch_calib_pane_g

0x4619,	// (0x000a9567) main_touch_calib_pane_t1

0x4633,	// (0x000a9581) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b46a8) main_touch_calib_pane_t

0xa56b,	// (0x000af4b9) mup_progress_pane_cp02

0xa5a0,	// (0x000af4ee) navi_pane_g1

0xa65b,	// (0x000af5a9) navi_pane_mp_t3

0x957d,	// (0x000ae4cb) main_mp3_pane_ParamLimits

0x3a08,	// (0x000a8956) navi_pane_ParamLimits

0xc132,	// (0x000b1080) main_mp3_pane_g1_ParamLimits

0x44fd,	// (0x000a944b) main_mp3_pane_g2_ParamLimits

0x450b,	// (0x000a9459) main_mp3_pane_g3_ParamLimits

0x450b,	// (0x000a9459) main_mp3_pane_g3

0x4519,	// (0x000a9467) main_mp3_pane_g4_ParamLimits

0x4519,	// (0x000a9467) main_mp3_pane_g4

0xc162,	// (0x000b10b0) main_mp3_pane_g5_ParamLimits

0xc162,	// (0x000b10b0) main_mp3_pane_g5

0xc170,	// (0x000b10be) main_mp3_pane_g6_ParamLimits

0xc170,	// (0x000b10be) main_mp3_pane_g6

0xc17d,	// (0x000b10cb) main_mp3_pane_g7_ParamLimits

0xc17d,	// (0x000b10cb) main_mp3_pane_g7

0xc189,	// (0x000b10d7) main_mp3_pane_g8_ParamLimits

0xc189,	// (0x000b10d7) main_mp3_pane_g8

0xf733,	// (0x000b4681) main_mp3_pane_g_ParamLimits

0x4525,	// (0x000a9473) main_mp3_pane_t2

0x4533,	// (0x000a9481) main_mp3_pane_t3

0xc1a3,	// (0x000b10f1) main_mp3_pane_t4

0xc1b1,	// (0x000b10ff) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b4692) main_mp3_pane_t

0xc1bf,	// (0x000b110d) mup_progress_pane_cp01

0x027f,	// (0x000a51cd) aid_zoom_text_secondary2

0xbf79,	// (0x000b0ec7) list_cale_ev2_pane

0xbf81,	// (0x000b0ecf) scroll_pane_cp023_ParamLimits

0x4689,	// (0x000a95d7) field_cale_ev2_pane_ParamLimits

0x4689,	// (0x000a95d7) field_cale_ev2_pane

0x46a9,	// (0x000a95f7) field_cale_ev2_pane_g1_ParamLimits

0x46a9,	// (0x000a95f7) field_cale_ev2_pane_g1

0x46b5,	// (0x000a9603) field_cale_ev2_pane_g2_ParamLimits

0x46b5,	// (0x000a9603) field_cale_ev2_pane_g2

0x46cd,	// (0x000a961b) field_cale_ev2_pane_g3_ParamLimits

0x46cd,	// (0x000a961b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b46b3) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b46b3) field_cale_ev2_pane_g

0xc1d3,	// (0x000b1121) field_cale_ev2_pane_t1_ParamLimits

0xc1d3,	// (0x000b1121) field_cale_ev2_pane_t1

0xc1ea,	// (0x000b1138) field_cale_ev2_pane_t2_ParamLimits

0xc1ea,	// (0x000b1138) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b46bc) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b46bc) field_cale_ev2_pane_t

0x2f20,	// (0x000a7e6e) main_postcard_pane_g5_ParamLimits

0x2f20,	// (0x000a7e6e) main_postcard_pane_g5

0x2f36,	// (0x000a7e84) main_postcard_pane_g6_ParamLimits

0x2f36,	// (0x000a7e84) main_postcard_pane_g6

0x1059,	// (0x000a5fa7) camera2_autofocus_pane_cp_ParamLimits

0x1059,	// (0x000a5fa7) camera2_autofocus_pane_cp

0x957d,	// (0x000ae4cb) main_mup3_pane

0x46e5,	// (0x000a9633) main_mup3_pane_g1_ParamLimits

0x46e5,	// (0x000a9633) main_mup3_pane_g1

0x4707,	// (0x000a9655) main_mup3_pane_g2_ParamLimits

0x4707,	// (0x000a9655) main_mup3_pane_g2

0x4785,	// (0x000a96d3) main_mup3_pane_g3_ParamLimits

0x4785,	// (0x000a96d3) main_mup3_pane_g3

0x47cb,	// (0x000a9719) main_mup3_pane_g4_ParamLimits

0x47cb,	// (0x000a9719) main_mup3_pane_g4

0x4811,	// (0x000a975f) main_mup3_pane_g5_ParamLimits

0x4811,	// (0x000a975f) main_mup3_pane_g5

0x4857,	// (0x000a97a5) main_mup3_pane_g6_ParamLimits

0x4857,	// (0x000a97a5) main_mup3_pane_g6

0xc21f,	// (0x000b116d) main_mup3_pane_g7_ParamLimits

0xc21f,	// (0x000b116d) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b46cc) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b46cc) main_mup3_pane_g

0x48d5,	// (0x000a9823) main_mup3_pane_t1_ParamLimits

0x48d5,	// (0x000a9823) main_mup3_pane_t1

0x4949,	// (0x000a9897) main_mup3_pane_t2_ParamLimits

0x4949,	// (0x000a9897) main_mup3_pane_t2

0x4a1d,	// (0x000a996b) main_mup3_pane_t4_ParamLimits

0x4a1d,	// (0x000a996b) main_mup3_pane_t4

0x4a73,	// (0x000a99c1) main_mup3_pane_t5_ParamLimits

0x4a73,	// (0x000a99c1) main_mup3_pane_t5

0x4b2f,	// (0x000a9a7d) main_mup3_pane_t6_ParamLimits

0x4b2f,	// (0x000a9a7d) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b46dd) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b46dd) main_mup3_pane_t

0x4be7,	// (0x000a9b35) mup3_progress_pane_ParamLimits

0x4be7,	// (0x000a9b35) mup3_progress_pane

0x4c7d,	// (0x000a9bcb) popup_mup3_control_window_ParamLimits

0x4c7d,	// (0x000a9bcb) popup_mup3_control_window

0xc22d,	// (0x000b117b) popup_mup3_text_window

0x4caf,	// (0x000a9bfd) mup3_progress_pane_t1

0x4cce,	// (0x000a9c1c) mup3_progress_pane_t2

0xc235,	// (0x000b1183) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b46ea) mup3_progress_pane_t

0xc252,	// (0x000b11a0) mup_progress_pane_cp03

0xe653,	// (0x000b35a1) bg_tb_trans_pane_cp04

0x4ced,	// (0x000a9c3b) mup3_volume_pane

0x4cf5,	// (0x000a9c43) popup_mup3_control_window_g1

0x4cfe,	// (0x000a9c4c) mup3_volume_pane_g1

0x4d07,	// (0x000a9c55) mup3_volume_pane_g2

0x4d10,	// (0x000a9c5e) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b46f1) mup3_volume_pane_g

0xe653,	// (0x000b35a1) bg_tb_trans_pane_cp03

0xc262,	// (0x000b11b0) popup_mup3_text_window_g1

0xc26a,	// (0x000b11b8) popup_mup3_text_window_t1

0xedd8,	// (0x000b3d26) list_calc_item_pane_g1_ParamLimits

0xbc3d,	// (0x000b0b8b) mup_volume_pane_cp_g1

0x464d,	// (0x000a959b) main_touch_calib_pane_t3

0x4661,	// (0x000a95af) main_touch_calib_pane_t4

0x4675,	// (0x000a95c3) main_touch_calib_pane_t5

0x022b,	// (0x000a5179) aid_cell_size_toolbar2

0x0233,	// (0x000a5181) aid_popup3_width_pane

0x026f,	// (0x000a51bd) aid_zoom_text_msg_primary

0x1030,	// (0x000a5f7e) vorec_t7

0xed9c,	// (0x000b3cea) bg_calc_paper_pane_g1_ParamLimits

0xeda8,	// (0x000b3cf6) bg_calc_paper_pane_g2_ParamLimits

0xedb4,	// (0x000b3d02) bg_calc_paper_pane_g3_ParamLimits

0xedc0,	// (0x000b3d0e) bg_calc_paper_pane_g4_ParamLimits

0xedcc,	// (0x000b3d1a) bg_calc_paper_pane_g5_ParamLimits

0x0852,	// (0x000a57a0) bg_calc_paper_pane_g6_ParamLimits

0x0861,	// (0x000a57af) bg_calc_paper_pane_g7_ParamLimits

0x0870,	// (0x000a57be) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000b40a2) bg_calc_paper_pane_g_ParamLimits

0x0883,	// (0x000a57d1) calc_bg_paper_pane_g9_ParamLimits

0x11a4,	// (0x000a60f2) image_qvga_pane_ParamLimits

0x11a4,	// (0x000a60f2) image_qvga_pane

0xeccb,	// (0x000b3c19) bg_popup_sub_pane_cp04_ParamLimits

0xa8dd,	// (0x000af82b) popup_mup_playback_window_g1_ParamLimits

0xa8e9,	// (0x000af837) popup_mup_playback_window_t1_ParamLimits

0xa8fe,	// (0x000af84c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b4430) popup_mup_playback_window_t_ParamLimits

0x418d,	// (0x000a90db) main_mup2_pane_g3_ParamLimits

0x418d,	// (0x000a90db) main_mup2_pane_g3

0x15b3,	// (0x000a6501) popup_toolbar_window_cp04

0xace0,	// (0x000afc2e) popup_call2_audio_second_window_g3_ParamLimits

0xace0,	// (0x000afc2e) popup_call2_audio_second_window_g3

0xb0f6,	// (0x000b0044) popup_call2_audio_first_window_g4_ParamLimits

0xb0f6,	// (0x000b0044) popup_call2_audio_first_window_g4

0xb775,	// (0x000b06c3) popup_call2_audio_in_window_g4_ParamLimits

0xb775,	// (0x000b06c3) popup_call2_audio_in_window_g4

0x304d,	// (0x000a7f9b) aid_area_sk_bg_cut_ParamLimits

0x304d,	// (0x000a7f9b) aid_area_sk_bg_cut

0xa913,	// (0x000af861) aid_area_sk_bg_cut_2_ParamLimits

0xa913,	// (0x000af861) aid_area_sk_bg_cut_2

0x4490,	// (0x000a93de) aid_placing_details_win

0x4498,	// (0x000a93e6) aid_placing_details_win_2

0xc074,	// (0x000b0fc2) camera2_autofocus_pane_g1_ParamLimits

0x0441,	// (0x000a538f) popup_fixed_preview_cale_window_ParamLimits

0x0441,	// (0x000a538f) popup_fixed_preview_cale_window

0xa6e1,	// (0x000af62f) navi_slider_pane_g3

0xa6ea,	// (0x000af638) navi_slider_pane_g4

0xa6f3,	// (0x000af641) navi_slider_pane_g5

0xa6e1,	// (0x000af62f) navi_slider_pane_g6

0x9d34,	// (0x000aec82) navi_slider_pane_g7

0xa814,	// (0x000af762) mup_scale_pane_g3

0xa81d,	// (0x000af76b) mup_scale_pane_g4

0xa826,	// (0x000af774) mup_scale_pane_g5

0x2d02,	// (0x000a7c50) mup_scale_pane_g6

0x2d0b,	// (0x000a7c59) mup_scale_pane_g7

0xa6e1,	// (0x000af62f) cams2_slider_pane_g3

0xbcbf,	// (0x000b0c0d) cams2_slider_pane_g4

0x9e6d,	// (0x000aedbb) cams2_slider_pane_g5

0xa6e1,	// (0x000af62f) cams2_slider_pane_g6

0x9e75,	// (0x000aedc3) cams2_slider_pane_g7

0xbef6,	// (0x000b0e44) camera2_autofocus_pane_cp_g1

0xbad6,	// (0x000b0a24) bg_popup_preview_window_pane_cp02_ParamLimits

0xbad6,	// (0x000b0a24) bg_popup_preview_window_pane_cp02

0xc278,	// (0x000b11c6) list_fp_cale_pane_ParamLimits

0xc278,	// (0x000b11c6) list_fp_cale_pane

0xc284,	// (0x000b11d2) popup_fixed_preview_cale_window_t1_ParamLimits

0xc284,	// (0x000b11d2) popup_fixed_preview_cale_window_t1

0x4d19,	// (0x000a9c67) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d19,	// (0x000a9c67) popup_fixed_preview_cale_window_t2

0x4d2e,	// (0x000a9c7c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d2e,	// (0x000a9c7c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b46f8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b46f8) popup_fixed_preview_cale_window_t

0x4d43,	// (0x000a9c91) list_single_fp_cale_pane_ParamLimits

0x4d43,	// (0x000a9c91) list_single_fp_cale_pane

0xc2a2,	// (0x000b11f0) list_single_fp_cale_pane_g1_ParamLimits

0xc2a2,	// (0x000b11f0) list_single_fp_cale_pane_g1

0xc2ae,	// (0x000b11fc) list_single_fp_cale_pane_g2_ParamLimits

0xc2ae,	// (0x000b11fc) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b46ff) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b46ff) list_single_fp_cale_pane_g

0xc2c7,	// (0x000b1215) list_single_fp_cale_pane_t1_ParamLimits

0xc2c7,	// (0x000b1215) list_single_fp_cale_pane_t1

0xc2d9,	// (0x000b1227) list_single_fp_cale_pane_t2_ParamLimits

0xc2d9,	// (0x000b1227) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b4706) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b4706) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x958b,	// (0x000ae4d9) main_dialer_pane

0x4d58,	// (0x000a9ca6) aid_cell_size_keypad

0x4d62,	// (0x000a9cb0) dialer_ne_pane

0x4d6a,	// (0x000a9cb8) grid_dialer_command_1_pane

0x4d72,	// (0x000a9cc0) grid_dialer_command_2_pane

0x4d7a,	// (0x000a9cc8) grid_dialer_keypad_pane

0x4d8c,	// (0x000a9cda) bg_popup_call_pane_cp06_ParamLimits

0x4d8c,	// (0x000a9cda) bg_popup_call_pane_cp06

0x4d98,	// (0x000a9ce6) dialer_ne_clear_pane_ParamLimits

0x4d98,	// (0x000a9ce6) dialer_ne_clear_pane

0xc30c,	// (0x000b125a) dialer_ne_pane_g1

0xc314,	// (0x000b1262) dialer_ne_pane_t1_ParamLimits

0xc314,	// (0x000b1262) dialer_ne_pane_t1

0x4da4,	// (0x000a9cf2) dialer_ne_pane_t2_ParamLimits

0x4da4,	// (0x000a9cf2) dialer_ne_pane_t2

0x4dce,	// (0x000a9d1c) dialer_ne_pane_t3_ParamLimits

0x4dce,	// (0x000a9d1c) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b470b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b470b) dialer_ne_pane_t

0x4dfe,	// (0x000a9d4c) dialer_ne_pane_t3_copy1_ParamLimits

0x4dfe,	// (0x000a9d4c) dialer_ne_pane_t3_copy1

0x4e2d,	// (0x000a9d7b) cell_dialer_keypad_pane_ParamLimits

0x4e2d,	// (0x000a9d7b) cell_dialer_keypad_pane

0x4e44,	// (0x000a9d92) cell_dialer_command_1_pane_ParamLimits

0x4e44,	// (0x000a9d92) cell_dialer_command_1_pane

0x4e5a,	// (0x000a9da8) cell_dialer_command_2_pane_ParamLimits

0x4e5a,	// (0x000a9da8) cell_dialer_command_2_pane

0xc326,	// (0x000b1274) bg_button_pane_cp02_ParamLimits

0xc326,	// (0x000b1274) bg_button_pane_cp02

0x4e69,	// (0x000a9db7) cell_dialer_keypad_pane_g1_ParamLimits

0x4e69,	// (0x000a9db7) cell_dialer_keypad_pane_g1

0xc326,	// (0x000b1274) bg_button_pane_cp03_ParamLimits

0xc326,	// (0x000b1274) bg_button_pane_cp03

0x4e7d,	// (0x000a9dcb) cell_dialer_command_1_pane_g1_ParamLimits

0x4e7d,	// (0x000a9dcb) cell_dialer_command_1_pane_g1

0xc332,	// (0x000b1280) bg_button_pane_cp04

0x4e91,	// (0x000a9ddf) cell_dialer_command_2_pane_g1

0xa6d0,	// (0x000af61e) bg_button_pane_cp06

0xc33a,	// (0x000b1288) dialer_ne_clear_pane_g1

0xa5ac,	// (0x000af4fa) navi_pane_g2

0xa5da,	// (0x000af528) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b4333) navi_pane_g

0xa669,	// (0x000af5b7) navi_pane_mv_g2

0xa690,	// (0x000af5de) navi_pane_mv_g5

0x28c6,	// (0x000a7814) navi_pane_mv_t1

0xed90,	// (0x000b3cde) main_clock2_pane

0x4edc,	// (0x000a9e2a) main_clock2_list_pane_ParamLimits

0x4edc,	// (0x000a9e2a) main_clock2_list_pane

0x4f12,	// (0x000a9e60) main_clock2_pane_t1_ParamLimits

0x4f12,	// (0x000a9e60) main_clock2_pane_t1

0x4f4e,	// (0x000a9e9c) main_clock2_pane_t2_ParamLimits

0x4f4e,	// (0x000a9e9c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b4717) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b4717) main_clock2_pane_t

0x4fec,	// (0x000a9f3a) popup_clock_analogue_window_cp03_ParamLimits

0x4fec,	// (0x000a9f3a) popup_clock_analogue_window_cp03

0x5011,	// (0x000a9f5f) popup_clock_digital_window_cp02_ParamLimits

0x5011,	// (0x000a9f5f) popup_clock_digital_window_cp02

0x5082,	// (0x000a9fd0) main_clock2_list_single_pane_ParamLimits

0x5082,	// (0x000a9fd0) main_clock2_list_single_pane

0xa6d0,	// (0x000af61e) list_highlight_pane_cp05

0xc378,	// (0x000b12c6) main_clock2_list_single_pane_t1

0x15b3,	// (0x000a6501) popup_toolbar_window_cp04_ParamLimits

0x44ba,	// (0x000a9408) camera2_autofocus_pane_g2_ParamLimits

0x44ba,	// (0x000a9408) camera2_autofocus_pane_g2

0x44c6,	// (0x000a9414) camera2_autofocus_pane_g3_ParamLimits

0x44c6,	// (0x000a9414) camera2_autofocus_pane_g3

0x44d2,	// (0x000a9420) camera2_autofocus_pane_g4_ParamLimits

0x44d2,	// (0x000a9420) camera2_autofocus_pane_g4

0x44de,	// (0x000a942c) camera2_autofocus_pane_g5_ParamLimits

0x44de,	// (0x000a942c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b465b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b465b) camera2_autofocus_pane_g

0xc1ff,	// (0x000b114d) camera2_autofocus_pane_cp_g2

0xc207,	// (0x000b1155) camera2_autofocus_pane_cp_g3

0xc20f,	// (0x000b115d) camera2_autofocus_pane_cp_g4

0xc217,	// (0x000b1165) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b46c1) camera2_autofocus_pane_cp_g

0x4d84,	// (0x000a9cd2) popup_dialer_spcha_window

0xe653,	// (0x000b35a1) bg_popup_sub_pane_cp07

0xc386,	// (0x000b12d4) list_spcha_pane

0xc38e,	// (0x000b12dc) list_single_spcha_pane_ParamLimits

0xc38e,	// (0x000b12dc) list_single_spcha_pane

0xe653,	// (0x000b35a1) list_highlight_pane_cp06

0xc39f,	// (0x000b12ed) list_single_spcha_pane_t1

0xb51f,	// (0x000b046d) popup_call2_audio_out_window_g4_ParamLimits

0xb51f,	// (0x000b046d) popup_call2_audio_out_window_g4

0x958b,	// (0x000ae4d9) main_imed2_pane

0x9d8d,	// (0x000aecdb) popup_imed_adjust2_window

0x389b,	// (0x000a87e9) popup_imed_trans_window_ParamLimits

0x389b,	// (0x000a87e9) popup_imed_trans_window

0xbd28,	// (0x000b0c76) popup_blid_sat_info2_window_t1

0xbd36,	// (0x000b0c84) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b45f0) popup_blid_sat_info2_window_t

0x512c,	// (0x000aa07a) aid_size_cell_colour_35

0x514c,	// (0x000aa09a) aid_size_cell_colour_112

0x516c,	// (0x000aa0ba) aid_size_cell_effect

0xbae2,	// (0x000b0a30) bg_tb_trans_pane_cp02

0x9adc,	// (0x000aea2a) heading_imed_pane

0x518c,	// (0x000aa0da) listscroll_imed_pane

0xc3ad,	// (0x000b12fb) heading_imed_pane_g1

0xc3b5,	// (0x000b1303) heading_imed_pane_t1

0xc3c3,	// (0x000b1311) grid_imed_colour_35_pane_ParamLimits

0xc3c3,	// (0x000b1311) grid_imed_colour_35_pane

0x5198,	// (0x000aa0e6) grid_imed_effect_pane

0xc3da,	// (0x000b1328) list_imed_aspect_pane

0x51ae,	// (0x000aa0fc) scroll_pane_cp027_ParamLimits

0x51ae,	// (0x000aa0fc) scroll_pane_cp027

0x51bf,	// (0x000aa10d) cell_imed_effect_pane_ParamLimits

0x51bf,	// (0x000aa10d) cell_imed_effect_pane

0xc3e2,	// (0x000b1330) cell_imed_colour_pane_ParamLimits

0xc3e2,	// (0x000b1330) cell_imed_colour_pane

0xc424,	// (0x000b1372) cell_imed_colour_pane_g1_ParamLimits

0xc424,	// (0x000b1372) cell_imed_colour_pane_g1

0xc435,	// (0x000b1383) hgihlgiht_grid_pane_cp016_ParamLimits

0xc435,	// (0x000b1383) hgihlgiht_grid_pane_cp016

0x51e6,	// (0x000aa134) cell_imed_effect_pane_g1

0x51ee,	// (0x000aa13c) grid_highlight_pane_cp017

0xc446,	// (0x000b1394) list_imed_single_pane_ParamLimits

0xc446,	// (0x000b1394) list_imed_single_pane

0xe653,	// (0x000b35a1) list_highlight_pane_cp07

0xc45b,	// (0x000b13a9) list_imed_aspect_pane_comp1_t1

0xbae2,	// (0x000b0a30) bg_tb_trans_pane_cp05

0xc47d,	// (0x000b13cb) popup_imed_adjust2_window_g1

0xc4a4,	// (0x000b13f2) popup_imed_adjust2_window_t1

0xc4bc,	// (0x000b140a) slider_imed_adjust_pane

0xc4d0,	// (0x000b141e) slider_imed_adjust_pane_g1

0xc4e0,	// (0x000b142e) slider_imed_adjust_pane_g2

0xc4f0,	// (0x000b143e) slider_imed_adjust_pane_g3

0xc501,	// (0x000b144f) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b4734) slider_imed_adjust_pane_g

0x51f7,	// (0x000aa145) aid_size_cell_clipart2

0x5203,	// (0x000aa151) grid_imed_clipart_pane

0xc512,	// (0x000b1460) scroll_pane_cp031

0x520d,	// (0x000aa15b) cell_imed_clipart_pane_ParamLimits

0x520d,	// (0x000aa15b) cell_imed_clipart_pane

0x522f,	// (0x000aa17d) cell_imed_clipart_pane_g1

0xe653,	// (0x000b35a1) grid_highlight_pane_cp014

0x4ef1,	// (0x000a9e3f) main_clock2_pane_g1_ParamLimits

0x4ef1,	// (0x000a9e3f) main_clock2_pane_g1

0x502d,	// (0x000a9f7b) aid_call2_pane_cp10

0x503f,	// (0x000a9f8d) aid_call_pane_cp10

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g1

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g2

0x5051,	// (0x000a9f9f) popup_clock_analogue_window_cp10_g3

0x5051,	// (0x000a9f9f) popup_clock_analogue_window_cp10_g4

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b4722) popup_clock_analogue_window_cp10_g

0x5063,	// (0x000a9fb1) popup_clock_analogue_window_cp10_t1

0x5094,	// (0x000a9fe2) clock_digital_number_pane_cp10_ParamLimits

0x5094,	// (0x000a9fe2) clock_digital_number_pane_cp10

0x50ac,	// (0x000a9ffa) clock_digital_number_pane_cp11_ParamLimits

0x50ac,	// (0x000a9ffa) clock_digital_number_pane_cp11

0x50c4,	// (0x000aa012) clock_digital_number_pane_cp12_ParamLimits

0x50c4,	// (0x000aa012) clock_digital_number_pane_cp12

0x50dc,	// (0x000aa02a) clock_digital_number_pane_cp13_ParamLimits

0x50dc,	// (0x000aa02a) clock_digital_number_pane_cp13

0x50f4,	// (0x000aa042) clock_digital_separator_pane_cp10_ParamLimits

0x50f4,	// (0x000aa042) clock_digital_separator_pane_cp10

0x510c,	// (0x000aa05a) popup_clock_digital_window_cp02_t1_ParamLimits

0x510c,	// (0x000aa05a) popup_clock_digital_window_cp02_t1

0xecc3,	// (0x000b3c11) clock_digital_number_pane_cp10_g1

0xecc3,	// (0x000b3c11) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b473d) clock_digital_number_pane_cp10_g

0xecc3,	// (0x000b3c11) clock_digital_separator_pane_cp10_g1

0xecc3,	// (0x000b3c11) clock_digital_separator_pane_g2_cp10

0xa698,	// (0x000af5e6) navi_pane_vded_g4

0xa6a1,	// (0x000af5ef) navi_pane_vded_g5

0xa6aa,	// (0x000af5f8) navi_pane_vded_t1

0x958b,	// (0x000ae4d9) main_vded_pane

0x5238,	// (0x000aa186) main_vded_pane_g1

0x5242,	// (0x000aa190) main_vded_pane_g2

0x524c,	// (0x000aa19a) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b4742) main_vded_pane_g

0x5256,	// (0x000aa1a4) main_vded_pane_t1

0x5264,	// (0x000aa1b2) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b4749) main_vded_pane_t

0x5272,	// (0x000aa1c0) vded_slider_pane

0x527a,	// (0x000aa1c8) vded_video_pane

0xc51a,	// (0x000b1468) vded_video_pane_g1

0x5282,	// (0x000aa1d0) vded_video_pane_g2

0xbef6,	// (0x000b0e44) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b474e) vded_video_pane_g

0xc524,	// (0x000b1472) vded_slider_pane_g1

0xbc3d,	// (0x000b0b8b) vded_slider_pane_g2

0xc52d,	// (0x000b147b) vded_slider_pane_g3

0xc536,	// (0x000b1484) vded_slider_pane_g4

0xc53f,	// (0x000b148d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b4755) vded_slider_pane_g

0x4c65,	// (0x000a9bb3) mup3_rocker_pane_ParamLimits

0x4c65,	// (0x000a9bb3) mup3_rocker_pane

0x528b,	// (0x000aa1d9) mup3_control_keys_pane_g1

0x5293,	// (0x000aa1e1) mup3_control_keys_pane_g2

0x529b,	// (0x000aa1e9) mup3_control_keys_pane_g3

0x52a3,	// (0x000aa1f1) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b4760) mup3_control_keys_pane_g

0x0478,	// (0x000a53c6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0478,	// (0x000a53c6) popup_toolbar2_fixed_window_cp01

0x4c99,	// (0x000a9be7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c99,	// (0x000a9be7) popup_toolbar2_fixed_window_cp02

0xae52,	// (0x000afda0) popup_call2_audio_second_window_t4_ParamLimits

0xae52,	// (0x000afda0) popup_call2_audio_second_window_t4

0xb38c,	// (0x000b02da) popup_call2_audio_first_window_t6_ParamLimits

0xb38c,	// (0x000b02da) popup_call2_audio_first_window_t6

0xb622,	// (0x000b0570) popup_call2_audio_out_window_t6_ParamLimits

0xb622,	// (0x000b0570) popup_call2_audio_out_window_t6

0x958b,	// (0x000ae4d9) main_vitu_pane

0x52b3,	// (0x000aa201) aid_size_cell_itu_ParamLimits

0x52b3,	// (0x000aa201) aid_size_cell_itu

0xef7c,	// (0x000b3eca) bg_popup_window_pane_cp08_ParamLimits

0xef7c,	// (0x000b3eca) bg_popup_window_pane_cp08

0x52c9,	// (0x000aa217) field_vitu_entry_pane_ParamLimits

0x52c9,	// (0x000aa217) field_vitu_entry_pane

0x52e0,	// (0x000aa22e) grid_vitu_function_pane_ParamLimits

0x52e0,	// (0x000aa22e) grid_vitu_function_pane

0x52fb,	// (0x000aa249) grid_vitu_itu_pane_ParamLimits

0x52fb,	// (0x000aa249) grid_vitu_itu_pane

0x5319,	// (0x000aa267) cell_vitu_itu_pane_ParamLimits

0x5319,	// (0x000aa267) cell_vitu_itu_pane

0x533b,	// (0x000aa289) cell_vitu_function_pane_ParamLimits

0x533b,	// (0x000aa289) cell_vitu_function_pane

0xef7c,	// (0x000b3eca) bg_popup_sub_pane_cp08_ParamLimits

0xef7c,	// (0x000b3eca) bg_popup_sub_pane_cp08

0x5354,	// (0x000aa2a2) field_vitu_entry_pane_t1_ParamLimits

0x5354,	// (0x000aa2a2) field_vitu_entry_pane_t1

0xc560,	// (0x000b14ae) field_vitu_entry_pane_t2_ParamLimits

0xc560,	// (0x000b14ae) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b476e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b476e) field_vitu_entry_pane_t

0xc57d,	// (0x000b14cb) bg_button_pane_cp05_ParamLimits

0xc57d,	// (0x000b14cb) bg_button_pane_cp05

0x5372,	// (0x000aa2c0) cell_vitu_itu_pane_g1

0x538a,	// (0x000aa2d8) cell_vitu_itu_pane_t1_ParamLimits

0x538a,	// (0x000aa2d8) cell_vitu_itu_pane_t1

0x539c,	// (0x000aa2ea) cell_vitu_itu_pane_t2_ParamLimits

0x539c,	// (0x000aa2ea) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b4773) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b4773) cell_vitu_itu_pane_t

0xc58b,	// (0x000b14d9) bg_button_pane_cp07

0x53d1,	// (0x000aa31f) cell_vitu_function_pane_g1

0x9595,	// (0x000ae4e3) main_calc_pane_g1

0x0263,	// (0x000a51b1) aid_visual_content_pane

0x958b,	// (0x000ae4d9) main_vradio_pane

0x53da,	// (0x000aa328) main_vradio_pane_g1_ParamLimits

0x53da,	// (0x000aa328) main_vradio_pane_g1

0xc595,	// (0x000b14e3) main_vradio_pane_g2_ParamLimits

0xc595,	// (0x000b14e3) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b477a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b477a) main_vradio_pane_g

0x53f3,	// (0x000aa341) main_vradio_pane_t1_ParamLimits

0x53f3,	// (0x000aa341) main_vradio_pane_t1

0x5408,	// (0x000aa356) main_vradio_pane_t2_ParamLimits

0x5408,	// (0x000aa356) main_vradio_pane_t2

0xc5a2,	// (0x000b14f0) main_vradio_pane_t3_ParamLimits

0xc5a2,	// (0x000b14f0) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b477f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b477f) main_vradio_pane_t

0x541d,	// (0x000aa36b) vradio_rocker_control_pane_ParamLimits

0x541d,	// (0x000aa36b) vradio_rocker_control_pane

0x542f,	// (0x000aa37d) vradio_station_info_pane_ParamLimits

0x542f,	// (0x000aa37d) vradio_station_info_pane

0xc5b6,	// (0x000b1504) vradio_frequency_info_pane_ParamLimits

0xc5b6,	// (0x000b1504) vradio_frequency_info_pane

0xbef6,	// (0x000b0e44) vradio_station_info_pane_g1

0xc5c5,	// (0x000b1513) vradio_station_info_pane_t1_ParamLimits

0xc5c5,	// (0x000b1513) vradio_station_info_pane_t1

0xc5e7,	// (0x000b1535) vradio_station_info_pane_t2_ParamLimits

0xc5e7,	// (0x000b1535) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b4786) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b4786) vradio_station_info_pane_t

0xc5f9,	// (0x000b1547) vradio_tuning_pane

0xc601,	// (0x000b154f) vradio_rocker_control_pane_g1

0xc609,	// (0x000b1557) vradio_rocker_control_pane_g2

0xc611,	// (0x000b155f) vradio_rocker_control_pane_g3

0xc619,	// (0x000b1567) vradio_rocker_control_pane_g4

0xc621,	// (0x000b156f) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b478b) vradio_rocker_control_pane_g

0x5441,	// (0x000aa38f) vradio_frequency_info_pane_g1

0xc629,	// (0x000b1577) vradio_frequency_info_pane_t1_ParamLimits

0xc629,	// (0x000b1577) vradio_frequency_info_pane_t1

0x544b,	// (0x000aa399) vradio_tuning_pane_g1

0x5456,	// (0x000aa3a4) vradio_tuning_pane_t1

0x02c0,	// (0x000a520e) area_side_right_pane_ParamLimits

0x02c0,	// (0x000a520e) area_side_right_pane

0xba9d,	// (0x000b09eb) status_small_pane_g1

0xbaa5,	// (0x000b09f3) status_small_pane_g2

0xbaae,	// (0x000b09fc) status_small_pane_g3

0xbab7,	// (0x000b0a05) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b4546) status_small_pane_g

0xbac0,	// (0x000b0a0e) status_small_pane_t1

0x958b,	// (0x000ae4d9) main_video3_pane

0xc63d,	// (0x000b158b) cams_zoom_vslider_pane

0xc645,	// (0x000b1593) image3_wide_pane_ParamLimits

0xc645,	// (0x000b1593) image3_wide_pane

0xc65f,	// (0x000b15ad) image3_wide_small_pane

0xc66b,	// (0x000b15b9) main_video3_pane_g1_ParamLimits

0xc66b,	// (0x000b15b9) main_video3_pane_g1

0xc687,	// (0x000b15d5) main_video3_pane_g2_ParamLimits

0xc687,	// (0x000b15d5) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b4796) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b4796) main_video3_pane_g

0xc6a3,	// (0x000b15f1) main_video3_pane_t1_ParamLimits

0xc6a3,	// (0x000b15f1) main_video3_pane_t1

0xc6ce,	// (0x000b161c) main_video3_pane_t2_ParamLimits

0xc6ce,	// (0x000b161c) main_video3_pane_t2

0xc6f9,	// (0x000b1647) main_video3_pane_t3_ParamLimits

0xc6f9,	// (0x000b1647) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b479b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b479b) main_video3_pane_t

0xc726,	// (0x000b1674) cams_zoom_vslider_pane_g1

0xc72f,	// (0x000b167d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b47a2) cams_zoom_vslider_pane_g

0xc737,	// (0x000b1685) small_slider_vertical_pane

0xbef6,	// (0x000b0e44) small_slider_vertical_pane_g1

0xbef6,	// (0x000b0e44) small_slider_vertical_pane_g2

0xc73f,	// (0x000b168d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b47a7) small_slider_vertical_pane_g

0x958b,	// (0x000ae4d9) main_hwr_training_pane

0xc748,	// (0x000b1696) hwr_training_instruct_pane_ParamLimits

0xc748,	// (0x000b1696) hwr_training_instruct_pane

0x5465,	// (0x000aa3b3) hwr_training_navi_pane_ParamLimits

0x5465,	// (0x000aa3b3) hwr_training_navi_pane

0x5484,	// (0x000aa3d2) hwr_training_write_pane_ParamLimits

0x5484,	// (0x000aa3d2) hwr_training_write_pane

0xe653,	// (0x000b35a1) bg_frame_shadow_pane

0xc77f,	// (0x000b16cd) hwr_training_write_pane_g1

0xc787,	// (0x000b16d5) hwr_training_write_pane_g2

0xc78f,	// (0x000b16dd) hwr_training_write_pane_g3

0xc797,	// (0x000b16e5) hwr_training_write_pane_g4

0xc79f,	// (0x000b16ed) hwr_training_write_pane_g5

0xc7a7,	// (0x000b16f5) hwr_training_write_pane_g6

0xc7af,	// (0x000b16fd) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b47ae) hwr_training_write_pane_g

0x9e7e,	// (0x000aedcc) hwr_training_navi_pane_g1_ParamLimits

0x9e7e,	// (0x000aedcc) hwr_training_navi_pane_g1

0x9e90,	// (0x000aedde) hwr_training_navi_pane_g2_ParamLimits

0x9e90,	// (0x000aedde) hwr_training_navi_pane_g2

0x9ea2,	// (0x000aedf0) hwr_training_navi_pane_g3_ParamLimits

0x9ea2,	// (0x000aedf0) hwr_training_navi_pane_g3

0x9eb2,	// (0x000aee00) hwr_training_navi_pane_g4_ParamLimits

0x9eb2,	// (0x000aee00) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b47bd) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b47bd) hwr_training_navi_pane_g

0x9ebf,	// (0x000aee0d) hwr_training_navi_pane_t1

0x54cc,	// (0x000aa41a) list_single_hwr_training_instruct_pane_ParamLimits

0x54cc,	// (0x000aa41a) list_single_hwr_training_instruct_pane

0xc7b7,	// (0x000b1705) list_single_hwr_training_instruct_pane_t1

0xbe36,	// (0x000b0d84) bg_frame_shadow_pane_g1

0xc7c6,	// (0x000b1714) bg_frame_shadow_pane_g2

0xc7ce,	// (0x000b171c) bg_frame_shadow_pane_g3

0xc7d6,	// (0x000b1724) bg_frame_shadow_pane_g4

0xc7de,	// (0x000b172c) bg_frame_shadow_pane_g5

0xc7e6,	// (0x000b1734) bg_frame_shadow_pane_g6

0xc7ee,	// (0x000b173c) bg_frame_shadow_pane_g7

0xee49,	// (0x000b3d97) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b47c8) bg_frame_shadow_pane_g

0x958b,	// (0x000ae4d9) main_video_tele_dialer_pane

0x54e1,	// (0x000aa42f) aid_size_cell_video_keypad_ParamLimits

0x54e1,	// (0x000aa42f) aid_size_cell_video_keypad

0x54fb,	// (0x000aa449) grid_video_dialer_keypad_pane_ParamLimits

0x54fb,	// (0x000aa449) grid_video_dialer_keypad_pane

0x5547,	// (0x000aa495) video_down_pane_cp_ParamLimits

0x5547,	// (0x000aa495) video_down_pane_cp

0x5579,	// (0x000aa4c7) cell_video_dialer_keypad_pane_ParamLimits

0x5579,	// (0x000aa4c7) cell_video_dialer_keypad_pane

0xc7f6,	// (0x000b1744) bg_button_pane_cp08_ParamLimits

0xc7f6,	// (0x000b1744) bg_button_pane_cp08

0x559b,	// (0x000aa4e9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x559b,	// (0x000aa4e9) cell_video_dialer_keypad_pane_g1

0x4c4f,	// (0x000a9b9d) mup3_rocker2_pane_ParamLimits

0x4c4f,	// (0x000a9b9d) mup3_rocker2_pane

0xbef6,	// (0x000b0e44) mup3_rocker2_pane_g1

0x377c,	// (0x000a86ca) main_dialer2_pane

0x958b,	// (0x000ae4d9) main_mp4_pane

0x9ed5,	// (0x000aee23) main_mp4_pane_g1_ParamLimits

0x9ed5,	// (0x000aee23) main_mp4_pane_g1

0x9ed5,	// (0x000aee23) main_mp4_pane_g2_ParamLimits

0x9ed5,	// (0x000aee23) main_mp4_pane_g2

0x55d2,	// (0x000aa520) main_mp4_pane_g3_ParamLimits

0x55d2,	// (0x000aa520) main_mp4_pane_g3

0x9ee3,	// (0x000aee31) main_mp4_pane_g4_ParamLimits

0x9ee3,	// (0x000aee31) main_mp4_pane_g4

0x9f0b,	// (0x000aee59) main_mp4_pane_g5_ParamLimits

0x9f0b,	// (0x000aee59) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b47e8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b47e8) main_mp4_pane_g

0x9f5b,	// (0x000aeea9) main_mp4_pane_t1_ParamLimits

0x9f5b,	// (0x000aeea9) main_mp4_pane_t1

0x9fb7,	// (0x000aef05) main_mp4_pane_t2_ParamLimits

0x9fb7,	// (0x000aef05) main_mp4_pane_t2

0xc802,	// (0x000b1750) main_mp4_pane_t3_ParamLimits

0xc802,	// (0x000b1750) main_mp4_pane_t3

0xa009,	// (0x000aef57) main_mp4_pane_t4_ParamLimits

0xa009,	// (0x000aef57) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b47f5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b47f5) main_mp4_pane_t

0xa04d,	// (0x000aef9b) mp4_progress_pane_ParamLimits

0xa04d,	// (0x000aef9b) mp4_progress_pane

0xa097,	// (0x000aefe5) mp4_rocker_pane_ParamLimits

0xa097,	// (0x000aefe5) mp4_rocker_pane

0xc82a,	// (0x000b1778) mp4_progress_pane_t1

0xc843,	// (0x000b1791) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b47fe) mp4_progress_pane_t

0xc85c,	// (0x000b17aa) mup_progress_pane_cp04

0xcb70,	// (0x000b1abe) mp4_rocker_pane_g1

0x560e,	// (0x000aa55c) aid_cell_size_keypad2_ParamLimits

0x560e,	// (0x000aa55c) aid_cell_size_keypad2

0x5624,	// (0x000aa572) dialer2_ne_pane_ParamLimits

0x5624,	// (0x000aa572) dialer2_ne_pane

0x563e,	// (0x000aa58c) grid_dialer2_keypad_pane_ParamLimits

0x563e,	// (0x000aa58c) grid_dialer2_keypad_pane

0xbccf,	// (0x000b0c1d) bg_popup_call_pane_cp07_ParamLimits

0xbccf,	// (0x000b0c1d) bg_popup_call_pane_cp07

0x565a,	// (0x000aa5a8) dialer2_ne_pane_t1_ParamLimits

0x565a,	// (0x000aa5a8) dialer2_ne_pane_t1

0x5695,	// (0x000aa5e3) cell_dialer2_keypad_pane_ParamLimits

0x5695,	// (0x000aa5e3) cell_dialer2_keypad_pane

0xc87a,	// (0x000b17c8) bg_button_pane_pane_cp04_ParamLimits

0xc87a,	// (0x000b17c8) bg_button_pane_pane_cp04

0x56b7,	// (0x000aa605) cell_dialer2_keypad_pane_g1_ParamLimits

0x56b7,	// (0x000aa605) cell_dialer2_keypad_pane_g1

0x1487,	// (0x000a63d5) aid_placing_vt_set_content_ParamLimits

0x1487,	// (0x000a63d5) aid_placing_vt_set_content

0x14af,	// (0x000a63fd) aid_placing_vt_set_title_ParamLimits

0x14af,	// (0x000a63fd) aid_placing_vt_set_title

0x958b,	// (0x000ae4d9) main_image3_pane

0x577d,	// (0x000aa6cb) area_side_right_pane_cp01_ParamLimits

0x577d,	// (0x000aa6cb) area_side_right_pane_cp01

0x9ed5,	// (0x000aee23) main_image3_pane_g1_ParamLimits

0x9ed5,	// (0x000aee23) main_image3_pane_g1

0x5794,	// (0x000aa6e2) main_image3_pane_g2_ParamLimits

0x5794,	// (0x000aa6e2) main_image3_pane_g2

0x57bc,	// (0x000aa70a) main_image3_pane_g3_ParamLimits

0x57bc,	// (0x000aa70a) main_image3_pane_g3

0x57e6,	// (0x000aa734) main_image3_pane_g4_ParamLimits

0x57e6,	// (0x000aa734) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b480d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b480d) main_image3_pane_g

0x5810,	// (0x000aa75e) main_image3_pane_t1_ParamLimits

0x5810,	// (0x000aa75e) main_image3_pane_t1

0x5868,	// (0x000aa7b6) main_image3_pane_t2_ParamLimits

0x5868,	// (0x000aa7b6) main_image3_pane_t2

0x58ba,	// (0x000aa808) main_image3_pane_t3_ParamLimits

0x58ba,	// (0x000aa808) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b4816) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b4816) main_image3_pane_t

0xef7c,	// (0x000b3eca) grid_sctrl_middle_pane_cp01_ParamLimits

0xef7c,	// (0x000b3eca) grid_sctrl_middle_pane_cp01

0x5942,	// (0x000aa890) cell_sctrl_middle_pane_cp01_ParamLimits

0x5942,	// (0x000aa890) cell_sctrl_middle_pane_cp01

0x595f,	// (0x000aa8ad) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x595f,	// (0x000aa8ad) cell_sctrl_middle_pane_cp01_g1

0x958b,	// (0x000ae4d9) main_call4_pane

0x5975,	// (0x000aa8c3) aid_size_button_call4_ParamLimits

0x5975,	// (0x000aa8c3) aid_size_button_call4

0x59a6,	// (0x000aa8f4) call4_windows_pane_ParamLimits

0x59a6,	// (0x000aa8f4) call4_windows_pane

0x59c6,	// (0x000aa914) grid_call4_button_pane_ParamLimits

0x59c6,	// (0x000aa914) grid_call4_button_pane

0xc886,	// (0x000b17d4) call4_windows_conf_pane

0xc89d,	// (0x000b17eb) popup_call4_audio_first_window_ParamLimits

0xc89d,	// (0x000b17eb) popup_call4_audio_first_window

0xc8e9,	// (0x000b1837) popup_call4_audio_second_window_ParamLimits

0xc8e9,	// (0x000b1837) popup_call4_audio_second_window

0xc8fd,	// (0x000b184b) popup_call4_audio_wait_window_ParamLimits

0xc8fd,	// (0x000b184b) popup_call4_audio_wait_window

0x59f3,	// (0x000aa941) cell_call4_button_pane_ParamLimits

0x59f3,	// (0x000aa941) cell_call4_button_pane

0x5a1c,	// (0x000aa96a) bg_button_pane_cp09_ParamLimits

0x5a1c,	// (0x000aa96a) bg_button_pane_cp09

0x5a28,	// (0x000aa976) cell_call4_button_pane_g1_ParamLimits

0x5a28,	// (0x000aa976) cell_call4_button_pane_g1

0x5a4e,	// (0x000aa99c) cell_call4_button_pane_t1_ParamLimits

0x5a4e,	// (0x000aa99c) cell_call4_button_pane_t1

0xc945,	// (0x000b1893) popup_call4_audio_conf_window_ParamLimits

0xc945,	// (0x000b1893) popup_call4_audio_conf_window

0x4caf,	// (0x000a9bfd) mup3_progress_pane_t1_ParamLimits

0x4cce,	// (0x000a9c1c) mup3_progress_pane_t2_ParamLimits

0xc235,	// (0x000b1183) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b46ea) mup3_progress_pane_t_ParamLimits

0xc252,	// (0x000b11a0) mup_progress_pane_cp03_ParamLimits

0x52ab,	// (0x000aa1f9) mup3_control_keys_pane_g4_copy1

0xa07b,	// (0x000aefc9) mp4_rocker2_pane_ParamLimits

0xa07b,	// (0x000aefc9) mp4_rocker2_pane

0xc959,	// (0x000b18a7) mp4_rocker2_pane_g1

0xc961,	// (0x000b18af) mp4_rocker2_pane_g2

0xa0e9,	// (0x000af037) mp4_rocker2_pane_g3

0xa0f1,	// (0x000af03f) mp4_rocker2_pane_g4

0xa0f9,	// (0x000af047) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b481f) mp4_rocker2_pane_g

0x958b,	// (0x000ae4d9) main_camera4_pane

0x958b,	// (0x000ae4d9) main_video4_pane

0x5515,	// (0x000aa463) main_video_tele_dialer_pane_t1_ParamLimits

0x5515,	// (0x000aa463) main_video_tele_dialer_pane_t1

0x552e,	// (0x000aa47c) main_video_tele_dialer_pane_t2_ParamLimits

0x552e,	// (0x000aa47c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b47d9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b47d9) main_video_tele_dialer_pane_t

0x5a8c,	// (0x000aa9da) cam4_autofocus_pane_ParamLimits

0x5a8c,	// (0x000aa9da) cam4_autofocus_pane

0x5aa2,	// (0x000aa9f0) cam4_image_uncrop_pane_ParamLimits

0x5aa2,	// (0x000aa9f0) cam4_image_uncrop_pane

0x5abc,	// (0x000aaa0a) cam4_indicators_pane_ParamLimits

0x5abc,	// (0x000aaa0a) cam4_indicators_pane

0x5ae7,	// (0x000aaa35) main_camera4_pane_g1_ParamLimits

0x5ae7,	// (0x000aaa35) main_camera4_pane_g1

0x5af9,	// (0x000aaa47) main_camera4_pane_g2_ParamLimits

0x5af9,	// (0x000aaa47) main_camera4_pane_g2

0x5b0c,	// (0x000aaa5a) main_camera4_pane_g3_ParamLimits

0x5b0c,	// (0x000aaa5a) main_camera4_pane_g3

0x5b1f,	// (0x000aaa6d) main_camera4_pane_g4_ParamLimits

0x5b1f,	// (0x000aaa6d) main_camera4_pane_g4

0x5b32,	// (0x000aaa80) main_camera4_pane_g5_ParamLimits

0x5b32,	// (0x000aaa80) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b482a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b482a) main_camera4_pane_g

0x5b56,	// (0x000aaaa4) main_camera4_pane_t1_ParamLimits

0x5b56,	// (0x000aaaa4) main_camera4_pane_t1

0xa11d,	// (0x000af06b) bg_tb_trans_pane_cp06

0xa133,	// (0x000af081) cam4_indicators_pane_g1

0xa144,	// (0x000af092) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b4845) cam4_indicators_pane_g

0xa162,	// (0x000af0b0) cam4_indicators_pane_t1

0x5bba,	// (0x000aab08) main_video4_pane_g1_ParamLimits

0x5bba,	// (0x000aab08) main_video4_pane_g1

0x5bc9,	// (0x000aab17) main_video4_pane_g2_ParamLimits

0x5bc9,	// (0x000aab17) main_video4_pane_g2

0x5bd8,	// (0x000aab26) main_video4_pane_g3_ParamLimits

0x5bd8,	// (0x000aab26) main_video4_pane_g3

0x5be7,	// (0x000aab35) main_video4_pane_g4_ParamLimits

0x5be7,	// (0x000aab35) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b484c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b484c) main_video4_pane_g

0x5c05,	// (0x000aab53) vid4_indicators_pane_ParamLimits

0x5c05,	// (0x000aab53) vid4_indicators_pane

0x5c33,	// (0x000aab81) video4_image_uncrop_cif_pane_ParamLimits

0x5c33,	// (0x000aab81) video4_image_uncrop_cif_pane

0x5c4d,	// (0x000aab9b) video4_image_uncrop_nhd_pane_ParamLimits

0x5c4d,	// (0x000aab9b) video4_image_uncrop_nhd_pane

0x5aa2,	// (0x000aa9f0) video4_image_uncrop_vga_pane_ParamLimits

0x5aa2,	// (0x000aa9f0) video4_image_uncrop_vga_pane

0x957d,	// (0x000ae4cb) bg_tb_trans_pane_cp07

0xa18e,	// (0x000af0dc) vid4_indicators_pane_g1

0xa1a2,	// (0x000af0f0) vid4_indicators_pane_g2

0xa1b6,	// (0x000af104) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b4857) vid4_indicators_pane_g

0xa1e5,	// (0x000af133) vid4_indicators_pane_t1

0x5c61,	// (0x000aabaf) cam4_autofocus_pane_g1

0x5c69,	// (0x000aabb7) cam4_autofocus_pane_g2

0x5c71,	// (0x000aabbf) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b4862) cam4_autofocus_pane_g

0x5c79,	// (0x000aabc7) cam4_autofocus_pane_g3_copy1

0x555d,	// (0x000aa4ab) video_down_pane_cp_t1

0x556b,	// (0x000aa4b9) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b47de) video_down_pane_cp_t

0x957d,	// (0x000ae4cb) popup_vitu2_window_ParamLimits

0x957d,	// (0x000ae4cb) popup_vitu2_window

0x5c81,	// (0x000aabcf) aid_size_cell2_itu2_ParamLimits

0x5c81,	// (0x000aabcf) aid_size_cell2_itu2

0x5ca7,	// (0x000aabf5) aid_size_cell_itu2_ParamLimits

0x5ca7,	// (0x000aabf5) aid_size_cell_itu2

0x5d03,	// (0x000aac51) bg_popup_window_pane_cp09_ParamLimits

0x5d03,	// (0x000aac51) bg_popup_window_pane_cp09

0x5d11,	// (0x000aac5f) field_vitu2_entry_pane_ParamLimits

0x5d11,	// (0x000aac5f) field_vitu2_entry_pane

0x5d37,	// (0x000aac85) grid_vitu2_function_pane_ParamLimits

0x5d37,	// (0x000aac85) grid_vitu2_function_pane

0x5d88,	// (0x000aacd6) grid_vitu2_itu_pane_ParamLimits

0x5d88,	// (0x000aacd6) grid_vitu2_itu_pane

0x5e1b,	// (0x000aad69) cell_vitu2_itu_pane_ParamLimits

0x5e1b,	// (0x000aad69) cell_vitu2_itu_pane

0x5e3f,	// (0x000aad8d) cell_vitu2_function_pane_ParamLimits

0x5e3f,	// (0x000aad8d) cell_vitu2_function_pane

0xc97b,	// (0x000b18c9) bg_popup_call_pane_cp08_ParamLimits

0xc97b,	// (0x000b18c9) bg_popup_call_pane_cp08

0xc992,	// (0x000b18e0) field_vitu2_entry_pane_g1

0xc99e,	// (0x000b18ec) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b4869) field_vitu2_entry_pane_g

0x5e7e,	// (0x000aadcc) field_vitu2_entry_pane_t1_ParamLimits

0x5e7e,	// (0x000aadcc) field_vitu2_entry_pane_t1

0xc9b8,	// (0x000b1906) field_vitu2_entry_pane_t2_ParamLimits

0xc9b8,	// (0x000b1906) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b4870) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b4870) field_vitu2_entry_pane_t

0x5ea9,	// (0x000aadf7) bg_button_pane_cp010_ParamLimits

0x5ea9,	// (0x000aadf7) bg_button_pane_cp010

0x5eb7,	// (0x000aae05) cell_vitu2_itu_pane_g1

0x5ee2,	// (0x000aae30) cell_vitu2_itu_pane_t1_ParamLimits

0x5ee2,	// (0x000aae30) cell_vitu2_itu_pane_t1

0x0137,	// (0x000a5085) cell_vitu2_itu_pane_t2_ParamLimits

0x0137,	// (0x000a5085) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b487a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b487a) cell_vitu2_itu_pane_t

0x957d,	// (0x000ae4cb) bg_button_pane_cp011

0x5f40,	// (0x000aae8e) cell_vitu2_function_pane_g1

0x958b,	// (0x000ae4d9) main_myfav_hc_pane

0x590a,	// (0x000aa858) popup_image3_note_pane_ParamLimits

0x590a,	// (0x000aa858) popup_image3_note_pane

0x5926,	// (0x000aa874) popup_image3_tool_bar_pane_ParamLimits

0x5926,	// (0x000aa874) popup_image3_tool_bar_pane

0x01bb,	// (0x000a5109) cell_vitu2_itu_pane_t3_ParamLimits

0x01bb,	// (0x000a5109) cell_vitu2_itu_pane_t3

0xe653,	// (0x000b35a1) bg_popup_trans_pane

0xc9dd,	// (0x000b192b) grid_image3_tool_bar_pane

0xc9e7,	// (0x000b1935) bg_popup_trans_pane_g1

0x9866,	// (0x000ae7b4) bg_popup_trans_pane_g2

0xc9ef,	// (0x000b193d) bg_popup_trans_pane_g3

0xc9f7,	// (0x000b1945) bg_popup_trans_pane_g4

0xc9ff,	// (0x000b194d) bg_popup_trans_pane_g5

0xca07,	// (0x000b1955) bg_popup_trans_pane_g6

0xca0f,	// (0x000b195d) bg_popup_trans_pane_g7

0xca17,	// (0x000b1965) bg_popup_trans_pane_g8

0x9846,	// (0x000ae794) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b4881) bg_popup_trans_pane_g

0xca1f,	// (0x000b196d) cell_image3_tool_bar_pane_ParamLimits

0xca1f,	// (0x000b196d) cell_image3_tool_bar_pane

0xbef6,	// (0x000b0e44) cell_image3_tool_bar_pane_g1

0xe653,	// (0x000b35a1) bg_popup_trans_pane_cp1

0xca33,	// (0x000b1981) popup_image3_note_pane_t1

0xca41,	// (0x000b198f) popup_image3_note_pane_t2

0xca4f,	// (0x000b199d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b4894) popup_image3_note_pane_t

0xca5d,	// (0x000b19ab) popup_image3_note_pane_t3_copy1

0x5f54,	// (0x000aaea2) bg_myfav_hc_instruction_pane_ParamLimits

0x5f54,	// (0x000aaea2) bg_myfav_hc_instruction_pane

0x5f68,	// (0x000aaeb6) cell_myfav_contact_pane_ParamLimits

0x5f68,	// (0x000aaeb6) cell_myfav_contact_pane

0x5f86,	// (0x000aaed4) cell_myfav_contact_pane_cp1_ParamLimits

0x5f86,	// (0x000aaed4) cell_myfav_contact_pane_cp1

0x5f9e,	// (0x000aaeec) cell_myfav_contact_pane_cp2_ParamLimits

0x5f9e,	// (0x000aaeec) cell_myfav_contact_pane_cp2

0x5fb6,	// (0x000aaf04) cell_myfav_contact_pane_cp3_ParamLimits

0x5fb6,	// (0x000aaf04) cell_myfav_contact_pane_cp3

0x5fcd,	// (0x000aaf1b) cell_myfav_contact_pane_cp4_ParamLimits

0x5fcd,	// (0x000aaf1b) cell_myfav_contact_pane_cp4

0x5fe5,	// (0x000aaf33) cell_myfav_contact_pane_cp5_ParamLimits

0x5fe5,	// (0x000aaf33) cell_myfav_contact_pane_cp5

0x5ff9,	// (0x000aaf47) cell_myfav_contact_pane_cp6_ParamLimits

0x5ff9,	// (0x000aaf47) cell_myfav_contact_pane_cp6

0x600f,	// (0x000aaf5d) cell_myfav_contact_pane_cp7_ParamLimits

0x600f,	// (0x000aaf5d) cell_myfav_contact_pane_cp7

0xca6b,	// (0x000b19b9) listscroll_gen_pane_cp05

0x6029,	// (0x000aaf77) main_myfav_hc_pane_g1_ParamLimits

0x6029,	// (0x000aaf77) main_myfav_hc_pane_g1

0x6043,	// (0x000aaf91) main_myfav_hc_pane_g2_ParamLimits

0x6043,	// (0x000aaf91) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b489b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b489b) main_myfav_hc_pane_g

0x6075,	// (0x000aafc3) main_myfav_hc_pane_t1_ParamLimits

0x6075,	// (0x000aafc3) main_myfav_hc_pane_t1

0xca74,	// (0x000b19c2) main_myfav_hc_pane_t2_ParamLimits

0xca74,	// (0x000b19c2) main_myfav_hc_pane_t2

0xca86,	// (0x000b19d4) main_myfav_hc_pane_t3_ParamLimits

0xca86,	// (0x000b19d4) main_myfav_hc_pane_t3

0x608c,	// (0x000aafda) main_myfav_hc_pane_t4_ParamLimits

0x608c,	// (0x000aafda) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b48a2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b48a2) main_myfav_hc_pane_t

0xbef6,	// (0x000b0e44) bg_myfav_hc_instruction_pane_g1

0xca98,	// (0x000b19e6) cell_myfav_contact_pane_g1_ParamLimits

0xca98,	// (0x000b19e6) cell_myfav_contact_pane_g1

0xca98,	// (0x000b19e6) cell_myfav_contact_pane_g2_ParamLimits

0xca98,	// (0x000b19e6) cell_myfav_contact_pane_g2

0xcaa4,	// (0x000b19f2) cell_myfav_contact_pane_g3_ParamLimits

0xcaa4,	// (0x000b19f2) cell_myfav_contact_pane_g3

0xc21f,	// (0x000b116d) cell_myfav_contact_pane_g4_ParamLimits

0xc21f,	// (0x000b116d) cell_myfav_contact_pane_g4

0xcab1,	// (0x000b19ff) cell_myfav_contact_pane_g5_ParamLimits

0xcab1,	// (0x000b19ff) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b48ad) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b48ad) cell_myfav_contact_pane_g

0x605d,	// (0x000aafab) main_myfav_hc_pane_g3_ParamLimits

0x605d,	// (0x000aafab) main_myfav_hc_pane_g3

0x03da,	// (0x000a5328) popup_adpt_find_window

0x60b4,	// (0x000ab002) afind_page_pane_ParamLimits

0x60b4,	// (0x000ab002) afind_page_pane

0x60c9,	// (0x000ab017) aid_size_cell_afind_ParamLimits

0x60c9,	// (0x000ab017) aid_size_cell_afind

0x60e7,	// (0x000ab035) bg_popup_sub_pane_cp09_ParamLimits

0x60e7,	// (0x000ab035) bg_popup_sub_pane_cp09

0x60f4,	// (0x000ab042) find_pane_cp01_ParamLimits

0x60f4,	// (0x000ab042) find_pane_cp01

0xcabd,	// (0x000b1a0b) grid_afind_control_pane_ParamLimits

0xcabd,	// (0x000b1a0b) grid_afind_control_pane

0x6101,	// (0x000ab04f) grid_afind_pane_ParamLimits

0x6101,	// (0x000ab04f) grid_afind_pane

0x6123,	// (0x000ab071) cell_afind_pane_ParamLimits

0x6123,	// (0x000ab071) cell_afind_pane

0xbef6,	// (0x000b0e44) afind_page_pane_g1

0x6184,	// (0x000ab0d2) afind_page_pane_g2

0x618d,	// (0x000ab0db) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b48b8) afind_page_pane_g

0x6196,	// (0x000ab0e4) afind_page_pane_t1

0xcad1,	// (0x000b1a1f) cell_afind_grid_control_pane_ParamLimits

0xcad1,	// (0x000b1a1f) cell_afind_grid_control_pane

0xc87a,	// (0x000b17c8) bg_button_pane_cp69_ParamLimits

0xc87a,	// (0x000b17c8) bg_button_pane_cp69

0x61b6,	// (0x000ab104) cell_afind_pane_g1_ParamLimits

0x61b6,	// (0x000ab104) cell_afind_pane_g1

0x61c3,	// (0x000ab111) cell_afind_pane_t1_ParamLimits

0x61c3,	// (0x000ab111) cell_afind_pane_t1

0x965f,	// (0x000ae5ad) bg_button_pane_cp72

0xcae0,	// (0x000b1a2e) cell_afind_grid_control_pane_g1

0x322a,	// (0x000a8178) aid_image_placing_area_ParamLimits

0x322a,	// (0x000a8178) aid_image_placing_area

0xc548,	// (0x000b1496) field_vitu_entry_pane_g1_ParamLimits

0xc548,	// (0x000b1496) field_vitu_entry_pane_g1

0xc554,	// (0x000b14a2) field_vitu_entry_pane_g2_ParamLimits

0xc554,	// (0x000b14a2) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b4769) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b4769) field_vitu_entry_pane_g

0x5372,	// (0x000aa2c0) cell_vitu_itu_pane_g1_ParamLimits

0x53b4,	// (0x000aa302) cell_vitu_itu_pane_t3_ParamLimits

0x53b4,	// (0x000aa302) cell_vitu_itu_pane_t3

0xc82a,	// (0x000b1778) mp4_progress_pane_t1_ParamLimits

0xc843,	// (0x000b1791) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b47fe) mp4_progress_pane_t_ParamLimits

0xc85c,	// (0x000b17aa) mup_progress_pane_cp04_ParamLimits

0x60a0,	// (0x000aafee) main_myfav_hc_pane_t5_ParamLimits

0x60a0,	// (0x000aafee) main_myfav_hc_pane_t5

0x0277,	// (0x000a51c5) aid_zoom_text_primary

0x03da,	// (0x000a5328) popup_adpt_find_window_ParamLimits

0x957d,	// (0x000ae4cb) main_cam_set_pane

0x5ad3,	// (0x000aaa21) cam4_zoom_pane_ParamLimits

0x5ad3,	// (0x000aaa21) cam4_zoom_pane

0x61d5,	// (0x000ab123) main_cam_set_pane_g1_ParamLimits

0x61d5,	// (0x000ab123) main_cam_set_pane_g1

0x61e3,	// (0x000ab131) main_cam_set_pane_g2_ParamLimits

0x61e3,	// (0x000ab131) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b48bf) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b48bf) main_cam_set_pane_g

0x6204,	// (0x000ab152) main_cam_set_pane_t1_ParamLimits

0x6204,	// (0x000ab152) main_cam_set_pane_t1

0x621f,	// (0x000ab16d) main_cset_listscroll_pane_ParamLimits

0x621f,	// (0x000ab16d) main_cset_listscroll_pane

0x623f,	// (0x000ab18d) main_cset_slider_pane_ParamLimits

0x623f,	// (0x000ab18d) main_cset_slider_pane

0xcaf1,	// (0x000b1a3f) main_cset_list_pane_ParamLimits

0xcaf1,	// (0x000b1a3f) main_cset_list_pane

0xcb01,	// (0x000b1a4f) scroll_pane_cp028

0x6265,	// (0x000ab1b3) aid_area_touch_slider

0x6281,	// (0x000ab1cf) cset_slider_pane

0x62ab,	// (0x000ab1f9) main_cset_slider_pane_g1

0x62c0,	// (0x000ab20e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b48c4) main_cset_slider_pane_g

0xcb3a,	// (0x000b1a88) main_cset_slider_pane_t1

0x637c,	// (0x000ab2ca) main_cset_slider_pane_t2

0x6396,	// (0x000ab2e4) main_cset_slider_pane_t3

0x63b0,	// (0x000ab2fe) main_cset_slider_pane_t4

0x63ca,	// (0x000ab318) main_cset_slider_pane_t5

0x63e4,	// (0x000ab332) main_cset_slider_pane_t6

0x63f9,	// (0x000ab347) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b48e9) main_cset_slider_pane_t

0x64fd,	// (0x000ab44b) cset_list_set_pane_ParamLimits

0x64fd,	// (0x000ab44b) cset_list_set_pane

0x650f,	// (0x000ab45d) aid_position_infowindow_above

0x6517,	// (0x000ab465) aid_position_infowindow_below

0xef8a,	// (0x000b3ed8) cset_list_set_pane_g1_ParamLimits

0xef8a,	// (0x000b3ed8) cset_list_set_pane_g1

0xcbec,	// (0x000b1b3a) cset_list_set_pane_g3_ParamLimits

0xcbec,	// (0x000b1b3a) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b4908) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b4908) cset_list_set_pane_g

0xcbfb,	// (0x000b1b49) cset_list_set_pane_t1_ParamLimits

0xcbfb,	// (0x000b1b49) cset_list_set_pane_t1

0xef7c,	// (0x000b3eca) list_highlight_pane_cp021_ParamLimits

0xef7c,	// (0x000b3eca) list_highlight_pane_cp021

0xa814,	// (0x000af762) cset_slider_pane_g1

0xa826,	// (0x000af774) cset_slider_pane_g2

0xa81d,	// (0x000af76b) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b490d) cset_slider_pane_g

0xa1fc,	// (0x000af14a) aid_area_touch_cam4_zoom

0xa204,	// (0x000af152) cam4_zoom_cont_pane

0xa20c,	// (0x000af15a) cam4_zoom_pane_g1

0xa214,	// (0x000af162) cam4_zoom_pane_g2

0x651f,	// (0x000ab46d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b4914) cam4_zoom_pane_g

0xa21c,	// (0x000af16a) cam4_zoom_cont_pane_g1

0xa225,	// (0x000af173) cam4_zoom_cont_pane_g2

0xa22e,	// (0x000af17c) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b491b) cam4_zoom_cont_pane_g

0x5993,	// (0x000aa8e1) call4_image_pane_ParamLimits

0x5993,	// (0x000aa8e1) call4_image_pane

0xc886,	// (0x000b17d4) call4_windows_conf_pane_ParamLimits

0xc8c7,	// (0x000b1815) popup_call4_audio_in_window_ParamLimits

0xc8c7,	// (0x000b1815) popup_call4_audio_in_window

0xe653,	// (0x000b35a1) bg_popup_call2_act_pane_cp02

0xc93d,	// (0x000b188b) call4_list_conf_pane

0xbef6,	// (0x000b0e44) call4_image_pane_g1

0xbef6,	// (0x000b0e44) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b462a) call4_image_pane_g

0xcc10,	// (0x000b1b5e) list_single_graphic_popup_conf4_pane_ParamLimits

0xcc10,	// (0x000b1b5e) list_single_graphic_popup_conf4_pane

0xe653,	// (0x000b35a1) list_highlight_pane_cp022

0xcc23,	// (0x000b1b71) list_single_graphic_popup_conf4_pane_g1

0xa3dd,	// (0x000af32b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b4922) list_single_graphic_popup_conf4_pane_g

0xcc2b,	// (0x000b1b79) list_single_graphic_popup_conf4_pane_t1

0x15d3,	// (0x000a6521) popup_vtel_slider_window_ParamLimits

0x15d3,	// (0x000a6521) popup_vtel_slider_window

0xc868,	// (0x000b17b6) dialer2_ne_pane_t2_ParamLimits

0xc868,	// (0x000b17b6) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b4803) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b4803) dialer2_ne_pane_t

0xbccf,	// (0x000b0c1d) bg_popup_sub_pane_cp010_ParamLimits

0xbccf,	// (0x000b0c1d) bg_popup_sub_pane_cp010

0x6527,	// (0x000ab475) popup_vtel_slider_window_g1_ParamLimits

0x6527,	// (0x000ab475) popup_vtel_slider_window_g1

0x653a,	// (0x000ab488) popup_vtel_slider_window_g2_ParamLimits

0x653a,	// (0x000ab488) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b4927) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b4927) popup_vtel_slider_window_g

0x6590,	// (0x000ab4de) vtel_slider_pane_ParamLimits

0x6590,	// (0x000ab4de) vtel_slider_pane

0x65b2,	// (0x000ab500) vtel_slider_pane_g1_ParamLimits

0x65b2,	// (0x000ab500) vtel_slider_pane_g1

0x65c6,	// (0x000ab514) vtel_slider_pane_g2_ParamLimits

0x65c6,	// (0x000ab514) vtel_slider_pane_g2

0x65de,	// (0x000ab52c) vtel_slider_pane_g3_ParamLimits

0x65de,	// (0x000ab52c) vtel_slider_pane_g3

0x65b2,	// (0x000ab500) vtel_slider_pane_g4_ParamLimits

0x65b2,	// (0x000ab500) vtel_slider_pane_g4

0x65f4,	// (0x000ab542) vtel_slider_pane_g5_ParamLimits

0x65f4,	// (0x000ab542) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b4930) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b4930) vtel_slider_pane_g

0x957d,	// (0x000ae4cb) main_gallery2_pane

0x5cd3,	// (0x000aac21) aid_size_row_itut2_dropdow_list_ParamLimits

0x5cd3,	// (0x000aac21) aid_size_row_itut2_dropdow_list

0x5d5f,	// (0x000aacad) grid_vitu2_function_top_pane_ParamLimits

0x5d5f,	// (0x000aacad) grid_vitu2_function_top_pane

0x5dc4,	// (0x000aad12) popup_vitu2_dropdown_list_window_ParamLimits

0x5dc4,	// (0x000aad12) popup_vitu2_dropdown_list_window

0x5ded,	// (0x000aad3b) popup_vitu2_match_list_window

0x6618,	// (0x000ab566) cell_vitu2_function_top_pane_ParamLimits

0x6618,	// (0x000ab566) cell_vitu2_function_top_pane

0x6636,	// (0x000ab584) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6636,	// (0x000ab584) cell_vitu2_function_top_pane_cp01

0x6654,	// (0x000ab5a2) cell_vitu2_function_top_wide_pane_ParamLimits

0x6654,	// (0x000ab5a2) cell_vitu2_function_top_wide_pane

0x957d,	// (0x000ae4cb) bg_button_pane_cp012

0x6672,	// (0x000ab5c0) cell_vitu2_function_top_pane_g1

0xa237,	// (0x000af185) bg_button_pane_cp013_ParamLimits

0xa237,	// (0x000af185) bg_button_pane_cp013

0x6686,	// (0x000ab5d4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6686,	// (0x000ab5d4) cell_vitu2_function_top_wide_pane_g1

0x957d,	// (0x000ae4cb) bg_popup_sub_pane_cp20

0x669e,	// (0x000ab5ec) list_vitu2_match_list_pane

0xc9e7,	// (0x000b1935) bg_popup_sub_pane_cp20_g1

0xc9ef,	// (0x000b193d) bg_popup_sub_pane_cp20_g2

0x9866,	// (0x000ae7b4) bg_popup_sub_pane_cp20_g3

0xc9f7,	// (0x000b1945) bg_popup_sub_pane_cp20_g4

0x9846,	// (0x000ae794) bg_popup_sub_pane_cp20_g5

0xcc41,	// (0x000b1b8f) bg_popup_sub_pane_cp20_g6

0xca07,	// (0x000b1955) bg_popup_sub_pane_cp20_g7

0xca0f,	// (0x000b195d) bg_popup_sub_pane_cp20_g8

0xca17,	// (0x000b1965) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b493b) bg_popup_sub_pane_cp20_g

0xa253,	// (0x000af1a1) list_vitu2_match_list_item_pane_ParamLimits

0xa253,	// (0x000af1a1) list_vitu2_match_list_item_pane

0xa265,	// (0x000af1b3) list_vitu2_match_list_item_pane_t1

0x958b,	// (0x000ae4d9) bg_popup_sub_pane_cp21

0xa273,	// (0x000af1c1) grid_vitu2_dropdown_list_pane

0x6706,	// (0x000ab654) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6706,	// (0x000ab654) cell_vitu2_dropdown_list_char_pane

0x6727,	// (0x000ab675) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6727,	// (0x000ab675) cell_vitu2_dropdown_list_ctrl_pane

0xcc49,	// (0x000b1b97) cell_vitu2_dropdown_list_char_pane_g1

0xcc52,	// (0x000b1ba0) cell_vitu2_dropdown_list_char_pane_g2

0xcc5b,	// (0x000b1ba9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b4958) cell_vitu2_dropdown_list_char_pane_g

0x6753,	// (0x000ab6a1) cell_vitu2_dropdown_list_char_pane_t1

0x6761,	// (0x000ab6af) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6761,	// (0x000ab6af) cell_vitu2_dropdown_list_ctrl_pane_g1

0x676e,	// (0x000ab6bc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x676e,	// (0x000ab6bc) cell_vitu2_dropdown_list_ctrl_pane_g2

0x677b,	// (0x000ab6c9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x677b,	// (0x000ab6c9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6788,	// (0x000ab6d6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6788,	// (0x000ab6d6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa11d,	// (0x000af06b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa11d,	// (0x000af06b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b495f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b495f) cell_vitu2_dropdown_list_ctrl_pane_g

0x67a4,	// (0x000ab6f2) aid_size_cell_gallery2_ParamLimits

0x67a4,	// (0x000ab6f2) aid_size_cell_gallery2

0x67c2,	// (0x000ab710) grid_gallery2_pane_ParamLimits

0x67c2,	// (0x000ab710) grid_gallery2_pane

0x67dc,	// (0x000ab72a) scroll_pane_cp029_ParamLimits

0x67dc,	// (0x000ab72a) scroll_pane_cp029

0x67e8,	// (0x000ab736) cell_gallery2_pane_ParamLimits

0x67e8,	// (0x000ab736) cell_gallery2_pane

0xcc64,	// (0x000b1bb2) cell_gallery2_pane_g2

0x6843,	// (0x000ab791) cell_gallery2_pane_g3

0xcc6c,	// (0x000b1bba) cell_gallery2_pane_g4

0xcc74,	// (0x000b1bc2) cell_gallery2_pane_g5

0xa6d0,	// (0x000af61e) grid_highlight_pane_cp10

0x5ded,	// (0x000aad3b) popup_vitu2_match_list_window_ParamLimits

0x5e04,	// (0x000aad52) popup_vitu2_query_window_ParamLimits

0x5e04,	// (0x000aad52) popup_vitu2_query_window

0x958b,	// (0x000ae4d9) bg_vitu2_candi_button_pane

0xcc49,	// (0x000b1b97) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcc52,	// (0x000b1ba0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcc5b,	// (0x000b1ba9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x684b,	// (0x000ab799) bg_button_pane_cp015

0x685d,	// (0x000ab7ab) bg_button_pane_cp016

0x6870,	// (0x000ab7be) bg_button_pane_cp017

0xbae2,	// (0x000b0a30) bg_popup_sub_pane_cp22

0xcc7c,	// (0x000b1bca) popup_vitu2_query_window_g1

0x68b5,	// (0x000ab803) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b496a) popup_vitu2_query_window_g

0x68d4,	// (0x000ab822) popup_vitu2_query_window_t1_ParamLimits

0x68d4,	// (0x000ab822) popup_vitu2_query_window_t1

0x6909,	// (0x000ab857) popup_vitu2_query_window_t2_ParamLimits

0x6909,	// (0x000ab857) popup_vitu2_query_window_t2

0x691b,	// (0x000ab869) popup_vitu2_query_window_t3_ParamLimits

0x691b,	// (0x000ab869) popup_vitu2_query_window_t3

0x6943,	// (0x000ab891) popup_vitu2_query_window_t4_ParamLimits

0x6943,	// (0x000ab891) popup_vitu2_query_window_t4

0x6964,	// (0x000ab8b2) popup_vitu2_query_window_t5_ParamLimits

0x6964,	// (0x000ab8b2) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b4971) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b4971) popup_vitu2_query_window_t

0xcae9,	// (0x000b1a37) main_cset_text_pane

0x6265,	// (0x000ab1b3) aid_area_touch_slider_ParamLimits

0x6281,	// (0x000ab1cf) cset_slider_pane_ParamLimits

0x62ab,	// (0x000ab1f9) main_cset_slider_pane_g1_ParamLimits

0x62c0,	// (0x000ab20e) main_cset_slider_pane_g2_ParamLimits

0xcb0a,	// (0x000b1a58) main_cset_slider_pane_g3_ParamLimits

0xcb0a,	// (0x000b1a58) main_cset_slider_pane_g3

0x62d5,	// (0x000ab223) main_cset_slider_pane_g4_ParamLimits

0x62d5,	// (0x000ab223) main_cset_slider_pane_g4

0x62e4,	// (0x000ab232) main_cset_slider_pane_g5_ParamLimits

0x62e4,	// (0x000ab232) main_cset_slider_pane_g5

0x62f0,	// (0x000ab23e) main_cset_slider_pane_g6_ParamLimits

0x62f0,	// (0x000ab23e) main_cset_slider_pane_g6

0xf976,	// (0x000b48c4) main_cset_slider_pane_g_ParamLimits

0xcb3a,	// (0x000b1a88) main_cset_slider_pane_t1_ParamLimits

0x637c,	// (0x000ab2ca) main_cset_slider_pane_t2_ParamLimits

0x6396,	// (0x000ab2e4) main_cset_slider_pane_t3_ParamLimits

0x63b0,	// (0x000ab2fe) main_cset_slider_pane_t4_ParamLimits

0x63ca,	// (0x000ab318) main_cset_slider_pane_t5_ParamLimits

0x63e4,	// (0x000ab332) main_cset_slider_pane_t6_ParamLimits

0x63f9,	// (0x000ab347) main_cset_slider_pane_t7_ParamLimits

0x6423,	// (0x000ab371) main_cset_slider_pane_t8_ParamLimits

0x6423,	// (0x000ab371) main_cset_slider_pane_t8

0x644b,	// (0x000ab399) main_cset_slider_pane_t9_ParamLimits

0x644b,	// (0x000ab399) main_cset_slider_pane_t9

0x6473,	// (0x000ab3c1) main_cset_slider_pane_t10_ParamLimits

0x6473,	// (0x000ab3c1) main_cset_slider_pane_t10

0x649b,	// (0x000ab3e9) main_cset_slider_pane_t11_ParamLimits

0x649b,	// (0x000ab3e9) main_cset_slider_pane_t11

0x64c3,	// (0x000ab411) main_cset_slider_pane_t12_ParamLimits

0x64c3,	// (0x000ab411) main_cset_slider_pane_t12

0x64e0,	// (0x000ab42e) main_cset_slider_pane_t13_ParamLimits

0x64e0,	// (0x000ab42e) main_cset_slider_pane_t13

0xf99b,	// (0x000b48e9) main_cset_slider_pane_t_ParamLimits

0xe653,	// (0x000b35a1) bg_popup_sub_pane_cp011

0xcc88,	// (0x000b1bd6) main_cset_text_pane_g1

0xcc90,	// (0x000b1bde) main_cset_text_pane_t1

0xcc9e,	// (0x000b1bec) main_cset_text_pane_t2

0xccac,	// (0x000b1bfa) main_cset_text_pane_t3

0xccba,	// (0x000b1c08) main_cset_text_pane_t4

0xccc8,	// (0x000b1c16) main_cset_text_pane_t5

0xccd6,	// (0x000b1c24) main_cset_text_pane_t6

0xcce4,	// (0x000b1c32) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b4980) main_cset_text_pane_t

0x958b,	// (0x000ae4d9) main_cam4_burst_pane

0x958b,	// (0x000ae4d9) main_cam5_pane

0x61a4,	// (0x000ab0f2) bg_button_pane_cp019

0x61ad,	// (0x000ab0fb) bg_button_pane_cp020

0xcb16,	// (0x000b1a64) main_cset_slider_pane_g7_ParamLimits

0xcb16,	// (0x000b1a64) main_cset_slider_pane_g7

0xcb22,	// (0x000b1a70) main_cset_slider_pane_g8_ParamLimits

0xcb22,	// (0x000b1a70) main_cset_slider_pane_g8

0x6304,	// (0x000ab252) main_cset_slider_pane_g9_ParamLimits

0x6304,	// (0x000ab252) main_cset_slider_pane_g9

0x6310,	// (0x000ab25e) main_cset_slider_pane_g10_ParamLimits

0x6310,	// (0x000ab25e) main_cset_slider_pane_g10

0x631c,	// (0x000ab26a) main_cset_slider_pane_g11_ParamLimits

0x631c,	// (0x000ab26a) main_cset_slider_pane_g11

0x6328,	// (0x000ab276) main_cset_slider_pane_g12_ParamLimits

0x6328,	// (0x000ab276) main_cset_slider_pane_g12

0x6334,	// (0x000ab282) main_cset_slider_pane_g13_ParamLimits

0x6334,	// (0x000ab282) main_cset_slider_pane_g13

0x6340,	// (0x000ab28e) main_cset_slider_pane_g14_ParamLimits

0x6340,	// (0x000ab28e) main_cset_slider_pane_g14

0x634c,	// (0x000ab29a) main_cset_slider_pane_g15_ParamLimits

0x634c,	// (0x000ab29a) main_cset_slider_pane_g15

0xcb7a,	// (0x000b1ac8) main_cset_slider_pane_t14_ParamLimits

0xcb7a,	// (0x000b1ac8) main_cset_slider_pane_t14

0xcbb3,	// (0x000b1b01) main_cset_slider_pane_t15_ParamLimits

0xcbb3,	// (0x000b1b01) main_cset_slider_pane_t15

0x69db,	// (0x000ab929) aid_cam4_burst_size_cell_ParamLimits

0x69db,	// (0x000ab929) aid_cam4_burst_size_cell

0x69fb,	// (0x000ab949) grid_cam4_burst_pane_ParamLimits

0x69fb,	// (0x000ab949) grid_cam4_burst_pane

0x6a33,	// (0x000ab981) linegrid_cam4_burst_pane_ParamLimits

0x6a33,	// (0x000ab981) linegrid_cam4_burst_pane

0xccf2,	// (0x000b1c40) scroll_pane_cp30_ParamLimits

0xccf2,	// (0x000b1c40) scroll_pane_cp30

0x6a57,	// (0x000ab9a5) cell_cam4_burst_pane_ParamLimits

0x6a57,	// (0x000ab9a5) cell_cam4_burst_pane

0xccfe,	// (0x000b1c4c) linegrid_cam4_burst_pane_g1_ParamLimits

0xccfe,	// (0x000b1c4c) linegrid_cam4_burst_pane_g1

0x6aa4,	// (0x000ab9f2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6aa4,	// (0x000ab9f2) linegrid_cam4_burst_pane_g2

0xcd0b,	// (0x000b1c59) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd0b,	// (0x000b1c59) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b498f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b498f) linegrid_cam4_burst_pane_g

0x6ab5,	// (0x000aba03) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ab5,	// (0x000aba03) linegrid_cam4_burst_pane_g3_copy1

0xcd18,	// (0x000b1c66) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd18,	// (0x000b1c66) linegrid_cam4_burst_pane_g4

0x6acf,	// (0x000aba1d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6acf,	// (0x000aba1d) linegrid_cam4_burst_pane_g5

0x6ae0,	// (0x000aba2e) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ae0,	// (0x000aba2e) linegrid_cam4_burst_pane_g6

0xcd25,	// (0x000b1c73) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd25,	// (0x000b1c73) linegrid_cam4_burst_pane_g7

0x6af7,	// (0x000aba45) cell_cam4_burst_pane_g1

0xcd3e,	// (0x000b1c8c) main_cam5_pane_t1_ParamLimits

0xcd3e,	// (0x000b1c8c) main_cam5_pane_t1

0xcd50,	// (0x000b1c9e) main_cam5_pane_t2_ParamLimits

0xcd50,	// (0x000b1c9e) main_cam5_pane_t2

0xcd62,	// (0x000b1cb0) main_cam5_pane_t3_ParamLimits

0xcd62,	// (0x000b1cb0) main_cam5_pane_t3

0xcd74,	// (0x000b1cc2) main_cam5_pane_t4_ParamLimits

0xcd74,	// (0x000b1cc2) main_cam5_pane_t4

0xcd8c,	// (0x000b1cda) main_cam5_pane_t5_ParamLimits

0xcd8c,	// (0x000b1cda) main_cam5_pane_t5

0xcda0,	// (0x000b1cee) main_cam5_pane_t6_ParamLimits

0xcda0,	// (0x000b1cee) main_cam5_pane_t6

0xcdb4,	// (0x000b1d02) main_cam5_pane_t7_ParamLimits

0xcdb4,	// (0x000b1d02) main_cam5_pane_t7

0xcdc6,	// (0x000b1d14) main_cam5_pane_t8_ParamLimits

0xcdc6,	// (0x000b1d14) main_cam5_pane_t8

0xcde2,	// (0x000b1d30) main_cam5_pane_t9_ParamLimits

0xcde2,	// (0x000b1d30) main_cam5_pane_t9

0xcdf4,	// (0x000b1d42) main_cam5_pane_t10_ParamLimits

0xcdf4,	// (0x000b1d42) main_cam5_pane_t10

0xce06,	// (0x000b1d54) main_cam5_pane_t11_ParamLimits

0xce06,	// (0x000b1d54) main_cam5_pane_t11

0xce18,	// (0x000b1d66) main_cam5_pane_t12_ParamLimits

0xce18,	// (0x000b1d66) main_cam5_pane_t12

0xce2d,	// (0x000b1d7b) main_cam5_pane_t13_ParamLimits

0xce2d,	// (0x000b1d7b) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b499b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b499b) main_cam5_pane_t

0x045c,	// (0x000a53aa) popup_scut_keymap_window_ParamLimits

0x045c,	// (0x000a53aa) popup_scut_keymap_window

0x6b0a,	// (0x000aba58) aid_size_cell_brow_shortcut

0xa6d0,	// (0x000af61e) bg_popup_window_pane_cp010

0x6b16,	// (0x000aba64) grid_scut_pane

0x6b22,	// (0x000aba70) cell_scut_pane_ParamLimits

0x6b22,	// (0x000aba70) cell_scut_pane

0x6b39,	// (0x000aba87) cell_scut_pane_g1

0xce4a,	// (0x000b1d98) cell_scut_pane_t1

0xce59,	// (0x000b1da7) cell_scut_pane_t2

0x6b42,	// (0x000aba90) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b49b6) cell_scut_pane_t

0x4868,	// (0x000a97b6) main_mup3_pane_g8_ParamLimits

0x4868,	// (0x000a97b6) main_mup3_pane_g8

0x5ceb,	// (0x000aac39) area_vitu2_query_pane_ParamLimits

0x5ceb,	// (0x000aac39) area_vitu2_query_pane

0x6883,	// (0x000ab7d1) input_focus_pane_cp08

0xce68,	// (0x000b1db6) area_vitu2_query_pane_g1

0x6b50,	// (0x000aba9e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b49bd) area_vitu2_query_pane_g

0x6b61,	// (0x000abaaf) area_vitu2_query_pane_t1_ParamLimits

0x6b61,	// (0x000abaaf) area_vitu2_query_pane_t1

0x6b75,	// (0x000abac3) area_vitu2_query_pane_t2_ParamLimits

0x6b75,	// (0x000abac3) area_vitu2_query_pane_t2

0x6b89,	// (0x000abad7) area_vitu2_query_pane_t3_ParamLimits

0x6b89,	// (0x000abad7) area_vitu2_query_pane_t3

0xce74,	// (0x000b1dc2) area_vitu2_query_pane_t4_ParamLimits

0xce74,	// (0x000b1dc2) area_vitu2_query_pane_t4

0xce9c,	// (0x000b1dea) area_vitu2_query_pane_t5_ParamLimits

0xce9c,	// (0x000b1dea) area_vitu2_query_pane_t5

0xcec4,	// (0x000b1e12) area_vitu2_query_pane_t6_ParamLimits

0xcec4,	// (0x000b1e12) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b49c2) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b49c2) area_vitu2_query_pane_t

0x6bb1,	// (0x000abaff) bg_button_pane_cp018

0x6bbf,	// (0x000abb0d) bg_button_pane_cp021

0x6bcb,	// (0x000abb19) bg_button_pane_cp022

0x6bda,	// (0x000abb28) input_focus_pane_cp09

0xa519,	// (0x000af467) aid_size_touch_mv_arrow_left

0xa542,	// (0x000af490) aid_size_touch_mv_arrow_right

0x6364,	// (0x000ab2b2) main_cset_slider_pane_g16_ParamLimits

0x6364,	// (0x000ab2b2) main_cset_slider_pane_g16

0x6370,	// (0x000ab2be) main_cset_slider_pane_g17_ParamLimits

0x6370,	// (0x000ab2be) main_cset_slider_pane_g17

0x6af7,	// (0x000aba45) cell_cam4_burst_pane_g1_ParamLimits

0xe653,	// (0x000b35a1) compa_mode_pane

0x654a,	// (0x000ab498) popup_vtel_slider_window_g3_ParamLimits

0x654a,	// (0x000ab498) popup_vtel_slider_window_g3

0x6561,	// (0x000ab4af) popup_vtel_slider_window_g4_ParamLimits

0x6561,	// (0x000ab4af) popup_vtel_slider_window_g4

0x6578,	// (0x000ab4c6) popup_vtel_slider_window_t1_ParamLimits

0x6578,	// (0x000ab4c6) popup_vtel_slider_window_t1

0x958b,	// (0x000ae4d9) main_cl_pane

0x9d8d,	// (0x000aecdb) popup_imed_adjust2_window_ParamLimits

0xbae2,	// (0x000b0a30) bg_tb_trans_pane_cp05_ParamLimits

0xc47d,	// (0x000b13cb) popup_imed_adjust2_window_g1_ParamLimits

0xc48c,	// (0x000b13da) popup_imed_adjust2_window_g2_ParamLimits

0xc48c,	// (0x000b13da) popup_imed_adjust2_window_g2

0xc498,	// (0x000b13e6) popup_imed_adjust2_window_g3_ParamLimits

0xc498,	// (0x000b13e6) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b472d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b472d) popup_imed_adjust2_window_g

0xc4a4,	// (0x000b13f2) popup_imed_adjust2_window_t1_ParamLimits

0xc4bc,	// (0x000b140a) slider_imed_adjust_pane_ParamLimits

0xc4d0,	// (0x000b141e) slider_imed_adjust_pane_g1_ParamLimits

0xc4e0,	// (0x000b142e) slider_imed_adjust_pane_g2_ParamLimits

0xc4f0,	// (0x000b143e) slider_imed_adjust_pane_g3_ParamLimits

0xc501,	// (0x000b144f) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b4734) slider_imed_adjust_pane_g_ParamLimits

0x5a74,	// (0x000aa9c2) aid_touch_area_cam4_ParamLimits

0x5a74,	// (0x000aa9c2) aid_touch_area_cam4

0xa101,	// (0x000af04f) battery_pane_cp01

0x5b43,	// (0x000aaa91) main_camera4_pane_g6_ParamLimits

0x5b43,	// (0x000aaa91) main_camera4_pane_g6

0x5b6d,	// (0x000aaabb) main_camera4_pane_t2_ParamLimits

0x5b6d,	// (0x000aaabb) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b4837) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b4837) main_camera4_pane_t

0x5ba2,	// (0x000aaaf0) aid_touch_area_vid4_ParamLimits

0x5ba2,	// (0x000aaaf0) aid_touch_area_vid4

0x5bf6,	// (0x000aab44) main_video4_pane_g5_ParamLimits

0x5bf6,	// (0x000aab44) main_video4_pane_g5

0x5c1b,	// (0x000aab69) vid4_progress_pane_ParamLimits

0x5c1b,	// (0x000aab69) vid4_progress_pane

0xcb2e,	// (0x000b1a7c) main_cset_slider_pane_g18_ParamLimits

0xcb2e,	// (0x000b1a7c) main_cset_slider_pane_g18

0xcd32,	// (0x000b1c80) cell_cam4_burst_pane_g2_ParamLimits

0xcd32,	// (0x000b1c80) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b4996) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b4996) cell_cam4_burst_pane_g

0xed90,	// (0x000b3cde) bg_cl_pane_ParamLimits

0xed90,	// (0x000b3cde) bg_cl_pane

0x6be9,	// (0x000abb37) cl_header_pane_ParamLimits

0x6be9,	// (0x000abb37) cl_header_pane

0x6bfd,	// (0x000abb4b) cl_listscroll_pane_ParamLimits

0x6bfd,	// (0x000abb4b) cl_listscroll_pane

0xcf10,	// (0x000b1e5e) bg_cl_pane_g1

0xcf18,	// (0x000b1e66) bg_cl_pane_g2

0xcf20,	// (0x000b1e6e) bg_cl_pane_g3

0xcf28,	// (0x000b1e76) bg_cl_pane_g4

0xcf30,	// (0x000b1e7e) bg_cl_pane_g5

0xcf38,	// (0x000b1e86) bg_cl_pane_g6

0xcf40,	// (0x000b1e8e) bg_cl_pane_g7

0xcf48,	// (0x000b1e96) bg_cl_pane_g8

0xcf50,	// (0x000b1e9e) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b49d1) bg_cl_pane_g

0x6c0d,	// (0x000abb5b) aid_height_cl_leading_ParamLimits

0x6c0d,	// (0x000abb5b) aid_height_cl_leading

0x6c19,	// (0x000abb67) aid_height_cl_text_ParamLimits

0x6c19,	// (0x000abb67) aid_height_cl_text

0xef7c,	// (0x000b3eca) bg_cl_header_pane_ParamLimits

0xef7c,	// (0x000b3eca) bg_cl_header_pane

0x6c38,	// (0x000abb86) cl_header_pane_g1_ParamLimits

0x6c38,	// (0x000abb86) cl_header_pane_g1

0x6c4e,	// (0x000abb9c) cl_header_pane_t1_ParamLimits

0x6c4e,	// (0x000abb9c) cl_header_pane_t1

0xcf58,	// (0x000b1ea6) cl_list_pane

0xcb01,	// (0x000b1a4f) hc_scroll_pane_cp01

0x9846,	// (0x000ae794) bg_cl_header_pane_g1

0xc9e7,	// (0x000b1935) bg_cl_header_pane_g2

0x9866,	// (0x000ae7b4) bg_cl_header_pane_g3

0xc9f7,	// (0x000b1945) bg_cl_header_pane_g4

0xc9ef,	// (0x000b193d) bg_cl_header_pane_g5

0xcc41,	// (0x000b1b8f) bg_cl_header_pane_g6

0xca0f,	// (0x000b195d) bg_cl_header_pane_g7

0xca17,	// (0x000b1965) bg_cl_header_pane_g8

0xca07,	// (0x000b1955) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b49e4) bg_cl_header_pane_g

0x6c67,	// (0x000abbb5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c67,	// (0x000abbb5) hc_cl_list_double_graphic_heading_pane

0x6c78,	// (0x000abbc6) hc_cl_list_single_graphic_pane_ParamLimits

0x6c78,	// (0x000abbc6) hc_cl_list_single_graphic_pane

0x6c8e,	// (0x000abbdc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c8e,	// (0x000abbdc) hc_cl_list_single_graphic_pane_g1

0x6c9a,	// (0x000abbe8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c9a,	// (0x000abbe8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b49f7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b49f7) hc_cl_list_single_graphic_pane_g

0x6cae,	// (0x000abbfc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cae,	// (0x000abbfc) hc_cl_list_single_graphic_pane_t1

0x6c8e,	// (0x000abbdc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c8e,	// (0x000abbdc) hc_cl_list_double_graphic_heading_pane_g1

0x6cc3,	// (0x000abc11) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6cc3,	// (0x000abc11) hc_cl_list_double_graphic_heading_pane_g2

0x6cd7,	// (0x000abc25) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cd7,	// (0x000abc25) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b49fc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b49fc) hc_cl_list_double_graphic_heading_pane_g

0x6ceb,	// (0x000abc39) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ceb,	// (0x000abc39) hc_cl_list_double_graphic_heading_pane_t1

0x6d00,	// (0x000abc4e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d00,	// (0x000abc4e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b4a03) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b4a03) hc_cl_list_double_graphic_heading_pane_t

0xa283,	// (0x000af1d1) vid4_progress_pane_g1

0xa293,	// (0x000af1e1) vid4_progress_pane_g2

0x6d15,	// (0x000abc63) vid4_progress_pane_g3

0xa2a3,	// (0x000af1f1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b4a08) vid4_progress_pane_g

0x6d27,	// (0x000abc75) vid4_progress_pane_t1

0xa2bb,	// (0x000af209) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b4a13) vid4_progress_pane_t

0x6d3f,	// (0x000abc8d) wait_bar_pane_cp07

0xbcdd,	// (0x000b0c2b) blid_firmament_pane_ParamLimits

0xbd20,	// (0x000b0c6e) popup_blid_sat_info2_window_g1

0xbd44,	// (0x000b0c92) popup_blid_sat_info2_window_t3

0xbd52,	// (0x000b0ca0) popup_blid_sat_info2_window_t4

0xbd60,	// (0x000b0cae) popup_blid_sat_info2_window_t5

0xbd6e,	// (0x000b0cbc) popup_blid_sat_info2_window_t6

0xbd7e,	// (0x000b0ccc) popup_blid_sat_info2_window_t7

0xbd8c,	// (0x000b0cda) popup_blid_sat_info2_window_t8

0xbd9a,	// (0x000b0ce8) popup_blid_sat_info2_window_t9

0xbda8,	// (0x000b0cf6) popup_blid_sat_info2_window_t10

0xbe76,	// (0x000b0dc4) aid_firma_cardinal_ParamLimits

0xbe8a,	// (0x000b0dd8) blid_firmament_pane_t1_ParamLimits

0xbea1,	// (0x000b0def) blid_firmament_pane_t2_ParamLimits

0xbeb8,	// (0x000b0e06) blid_firmament_pane_t3_ParamLimits

0xbecf,	// (0x000b0e1d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b4621) blid_firmament_pane_t_ParamLimits

0xbee6,	// (0x000b0e34) blid_sat_info_pane_ParamLimits

0x957d,	// (0x000ae4cb) main_cam_set_pane_ParamLimits

0x512c,	// (0x000aa07a) aid_size_cell_colour_35_ParamLimits

0x514c,	// (0x000aa09a) aid_size_cell_colour_112_ParamLimits

0x516c,	// (0x000aa0ba) aid_size_cell_effect_ParamLimits

0xbae2,	// (0x000b0a30) bg_tb_trans_pane_cp02_ParamLimits

0x9adc,	// (0x000aea2a) heading_imed_pane_ParamLimits

0x518c,	// (0x000aa0da) listscroll_imed_pane_ParamLimits

0xb108,	// (0x000b0056) popup_call2_audio_first_window_g5_ParamLimits

0xb108,	// (0x000b0056) popup_call2_audio_first_window_g5

0x571f,	// (0x000aa66d) aid_size_touch_image3_arrow_left_ParamLimits

0x571f,	// (0x000aa66d) aid_size_touch_image3_arrow_left

0x574b,	// (0x000aa699) aid_size_touch_image3_arrow_right_ParamLimits

0x574b,	// (0x000aa699) aid_size_touch_image3_arrow_right

0xa2d0,	// (0x000af21e) vid4_progress_pane_t3

0x549f,	// (0x000aa3ed) main_hwr_training_symbol_option_pane_ParamLimits

0x549f,	// (0x000aa3ed) main_hwr_training_symbol_option_pane

0xc76a,	// (0x000b16b8) popup_hwr_training_preview_window_ParamLimits

0xc76a,	// (0x000b16b8) popup_hwr_training_preview_window

0x54bf,	// (0x000aa40d) hwr_training_navi_pane_g5_ParamLimits

0x54bf,	// (0x000aa40d) hwr_training_navi_pane_g5

0xc9d5,	// (0x000b1923) popup_char_count_window

0x957d,	// (0x000ae4cb) bg_popup_sub_pane_cp20_ParamLimits

0x669e,	// (0x000ab5ec) list_vitu2_match_list_pane_ParamLimits

0x66ad,	// (0x000ab5fb) vitu2_page_scroll_pane_ParamLimits

0x66ad,	// (0x000ab5fb) vitu2_page_scroll_pane

0xcf7b,	// (0x000b1ec9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcf7b,	// (0x000b1ec9) list_single_hwr_training_symbol_option_pane

0xcf8e,	// (0x000b1edc) list_single_hwr_training_symbol_option_pane_g1

0xcf96,	// (0x000b1ee4) list_single_hwr_training_symbol_option_pane_t1

0xcfa4,	// (0x000b1ef2) bg_button_pane_cp023

0xcfad,	// (0x000b1efb) bg_button_pane_cp024

0x6d81,	// (0x000abccf) vitu2_page_scroll_pane_g1

0x6d89,	// (0x000abcd7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b4a1a) vitu2_page_scroll_pane_g

0x6d91,	// (0x000abcdf) vitu2_page_scroll_pane_t1

0xcfe0,	// (0x000b1f2e) popup_char_count_window_g1

0xcfe9,	// (0x000b1f37) popup_char_count_window_g2

0xcff2,	// (0x000b1f40) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b4a1f) popup_char_count_window_g

0xcffb,	// (0x000b1f49) popup_char_count_window_t1

0x958b,	// (0x000ae4d9) main_vded2_pane

0xc469,	// (0x000b13b7) aid_size_cell_imed_line

0xc473,	// (0x000b13c1) grid_imed_line_width_pane

0xa1c7,	// (0x000af115) vid4_indicators_pane_g4

0xd009,	// (0x000b1f57) cell_imed_line_width_pane_ParamLimits

0xd009,	// (0x000b1f57) cell_imed_line_width_pane

0xd01d,	// (0x000b1f6b) cell_imed_line_width_pane_g1

0xcb68,	// (0x000b1ab6) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b4a26) cell_imed_line_width_pane_g

0x6da0,	// (0x000abcee) main_vded2_pane_g1_ParamLimits

0x6da0,	// (0x000abcee) main_vded2_pane_g1

0x6db6,	// (0x000abd04) main_vded2_pane_g2_ParamLimits

0x6db6,	// (0x000abd04) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b4a2b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b4a2b) main_vded2_pane_g

0x6dc8,	// (0x000abd16) vded2_slider_pane_ParamLimits

0x6dc8,	// (0x000abd16) vded2_slider_pane

0x6dd8,	// (0x000abd26) aid_size_touch_vded2_end

0x6de2,	// (0x000abd30) aid_size_touch_vded2_playhead

0xd026,	// (0x000b1f74) aid_size_touch_vded2_start

0xd02e,	// (0x000b1f7c) vded2_slider_bg_pane

0xd037,	// (0x000b1f85) vded2_slider_pane_g1

0xd040,	// (0x000b1f8e) vded2_slider_pane_g2

0x6dec,	// (0x000abd3a) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b4a30) vded2_slider_pane_g

0xd048,	// (0x000b1f96) vded2_slider_bg_pane_g1

0xd051,	// (0x000b1f9f) vded2_slider_bg_pane_g2

0xd05a,	// (0x000b1fa8) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b4a37) vded2_slider_bg_pane_g

0x2e99,	// (0x000a7de7) aid_postcard_touch_down_pane_ParamLimits

0x2e99,	// (0x000a7de7) aid_postcard_touch_down_pane

0x2eaf,	// (0x000a7dfd) aid_postcard_touch_up_pane_ParamLimits

0x2eaf,	// (0x000a7dfd) aid_postcard_touch_up_pane

0x958b,	// (0x000ae4d9) main_blid2_pane

0x9d73,	// (0x000aecc1) popup_blid2_search_window

0xe653,	// (0x000b35a1) blid2_gps_pane

0xe653,	// (0x000b35a1) blid2_navig_pane

0xe653,	// (0x000b35a1) blid2_search_pane

0xe653,	// (0x000b35a1) blid2_tripm_pane

0x6df7,	// (0x000abd45) blid2_search_pane_g1_ParamLimits

0x6df7,	// (0x000abd45) blid2_search_pane_g1

0x6e11,	// (0x000abd5f) blid2_search_pane_t1_ParamLimits

0x6e11,	// (0x000abd5f) blid2_search_pane_t1

0x6e23,	// (0x000abd71) aid_size_cell_blid2_gps_ParamLimits

0x6e23,	// (0x000abd71) aid_size_cell_blid2_gps

0x6e3b,	// (0x000abd89) blid2_gps_pane_g1_ParamLimits

0x6e3b,	// (0x000abd89) blid2_gps_pane_g1

0x6e4f,	// (0x000abd9d) grid_blid2_satellite_pane_ParamLimits

0x6e4f,	// (0x000abd9d) grid_blid2_satellite_pane

0x6e69,	// (0x000abdb7) blid2_navig_pane_g1_ParamLimits

0x6e69,	// (0x000abdb7) blid2_navig_pane_g1

0x6e75,	// (0x000abdc3) blid2_navig_pane_t1_ParamLimits

0x6e75,	// (0x000abdc3) blid2_navig_pane_t1

0x6e90,	// (0x000abdde) blid2_navig_pane_t2_ParamLimits

0x6e90,	// (0x000abdde) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b4a3e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b4a3e) blid2_navig_pane_t

0x6eab,	// (0x000abdf9) blid2_navig_ring_pane_ParamLimits

0x6eab,	// (0x000abdf9) blid2_navig_ring_pane

0x6ec4,	// (0x000abe12) blid2_speed_pane_ParamLimits

0x6ec4,	// (0x000abe12) blid2_speed_pane

0x6ed0,	// (0x000abe1e) blid2_tripm_pane_g1_ParamLimits

0x6ed0,	// (0x000abe1e) blid2_tripm_pane_g1

0x6ee9,	// (0x000abe37) blid2_tripm_pane_g2_ParamLimits

0x6ee9,	// (0x000abe37) blid2_tripm_pane_g2

0x6efd,	// (0x000abe4b) blid2_tripm_pane_g3_ParamLimits

0x6efd,	// (0x000abe4b) blid2_tripm_pane_g3

0x6f11,	// (0x000abe5f) blid2_tripm_pane_g4_ParamLimits

0x6f11,	// (0x000abe5f) blid2_tripm_pane_g4

0x6f25,	// (0x000abe73) blid2_tripm_pane_g5_ParamLimits

0x6f25,	// (0x000abe73) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b4a43) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b4a43) blid2_tripm_pane_g

0x6f4b,	// (0x000abe99) blid2_tripm_pane_t1_ParamLimits

0x6f4b,	// (0x000abe99) blid2_tripm_pane_t1

0x6f66,	// (0x000abeb4) blid2_tripm_pane_t2_ParamLimits

0x6f66,	// (0x000abeb4) blid2_tripm_pane_t2

0x6f7f,	// (0x000abecd) blid2_tripm_pane_t3_ParamLimits

0x6f7f,	// (0x000abecd) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b4a50) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b4a50) blid2_tripm_pane_t

0x6fc6,	// (0x000abf14) cell_blid2_satellite_pane_ParamLimits

0x6fc6,	// (0x000abf14) cell_blid2_satellite_pane

0x6fe4,	// (0x000abf32) cell_blid2_satellite_pane_g1

0xd063,	// (0x000b1fb1) cell_blid2_satellite_pane_t1

0xbef6,	// (0x000b0e44) blid2_speed_pane_g1

0xd071,	// (0x000b1fbf) blid2_speed_pane_t1

0xd07f,	// (0x000b1fcd) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b4a59) blid2_speed_pane_t

0xbef6,	// (0x000b0e44) blid2_navig_ring_pane_g1

0x6fed,	// (0x000abf3b) blid2_navig_ring_pane_g2

0x6ff5,	// (0x000abf43) blid2_navig_ring_pane_g3

0x6ffd,	// (0x000abf4b) blid2_navig_ring_pane_g4

0x7005,	// (0x000abf53) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b4a5e) blid2_navig_ring_pane_g

0xe653,	// (0x000b35a1) bg_popup_window_pane_cp011

0xd08d,	// (0x000b1fdb) popup_blid2_search_window_g1

0xd095,	// (0x000b1fe3) popup_blid2_search_window_t1

0xd0a3,	// (0x000b1ff1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b4a69) popup_blid2_search_window_t

0x9755,	// (0x000ae6a3) main_browser_pane_g1

0xed90,	// (0x000b3cde) main_browser_pane_ParamLimits

0x957d,	// (0x000ae4cb) bg_button_pane_cp011_ParamLimits

0x5f40,	// (0x000aae8e) cell_vitu2_function_pane_g1_ParamLimits

0xbae2,	// (0x000b0a30) bg_popup_sub_pane_cp22_ParamLimits

0x6883,	// (0x000ab7d1) input_focus_pane_cp08_ParamLimits

0x689a,	// (0x000ab7e8) popup_vitu2_query_button_pane_ParamLimits

0x689a,	// (0x000ab7e8) popup_vitu2_query_button_pane

0x68ab,	// (0x000ab7f9) popup_vitu2_query_input_button_pane

0xcc7c,	// (0x000b1bca) popup_vitu2_query_window_g1_ParamLimits

0x68b5,	// (0x000ab803) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b496a) popup_vitu2_query_window_g_ParamLimits

0xe653,	// (0x000b35a1) bg_button_pane_cp026

0x700d,	// (0x000abf5b) popup_vitu2_query_input_button_pane_g1

0xe653,	// (0x000b35a1) bg_button_pane_cp025

0xd0b1,	// (0x000b1fff) popup_vitu2_query_button_pane_t1

0x4541,	// (0x000a948f) main_mp3_pane_t6

0x454f,	// (0x000a949d) popup_slider_window_cp01

0xa12b,	// (0x000af079) cam4_battery_pane

0xa184,	// (0x000af0d2) cam4_battery_pane_cp02

0xa27b,	// (0x000af1c9) cam4_battery_pane_cp01

0xa27b,	// (0x000af1c9) cam4_battery_pane_cp03

0xcb70,	// (0x000b1abe) cam4_battery_pane_g1

0xbef6,	// (0x000b0e44) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b4a6e) cam4_battery_pane_g

0xbdb6,	// (0x000b0d04) popup_blid_sat_info2_window_t11

0xa519,	// (0x000af467) aid_size_touch_mv_arrow_left_ParamLimits

0xa542,	// (0x000af490) aid_size_touch_mv_arrow_right_ParamLimits

0xa5a0,	// (0x000af4ee) navi_pane_g1_ParamLimits

0xa5ac,	// (0x000af4fa) navi_pane_g2_ParamLimits

0xa5da,	// (0x000af528) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b4333) navi_pane_g_ParamLimits

0x28c6,	// (0x000a7814) navi_pane_mv_t1_ParamLimits

0x5198,	// (0x000aa0e6) grid_imed_effect_pane_ParamLimits

0x14d0,	// (0x000a641e) aid_placing_vt_slider_lsc

0x96a4,	// (0x000ae5f2) aid_placing_vt_slider_prt

0xef7c,	// (0x000b3eca) bg_tb_trans_pane_cp01_ParamLimits

0xc082,	// (0x000b0fd0) popup_image_details_window_g1_ParamLimits

0xc095,	// (0x000b0fe3) popup_image_details_window_g2_ParamLimits

0xc0aa,	// (0x000b0ff8) popup_image_details_window_g3_ParamLimits

0xc0aa,	// (0x000b0ff8) popup_image_details_window_g3

0xf718,	// (0x000b4666) popup_image_details_window_g_ParamLimits

0xc0be,	// (0x000b100c) popup_image_details_window_t1_ParamLimits

0xc0d0,	// (0x000b101e) popup_image_details_window_t2_ParamLimits

0xc0e9,	// (0x000b1037) popup_image_details_window_t3_ParamLimits

0xc0fd,	// (0x000b104b) popup_image_details_window_t4_ParamLimits

0xc118,	// (0x000b1066) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b466d) popup_image_details_window_t_ParamLimits

0x6c25,	// (0x000abb73) cl_header_name_pane_ParamLimits

0x6c25,	// (0x000abb73) cl_header_name_pane

0x7015,	// (0x000abf63) cl_header_name_pane_t1_ParamLimits

0x7015,	// (0x000abf63) cl_header_name_pane_t1

0x7036,	// (0x000abf84) cl_header_name_pane_t2_ParamLimits

0x7036,	// (0x000abf84) cl_header_name_pane_t2

0x7078,	// (0x000abfc6) cl_header_name_pane_t3_ParamLimits

0x7078,	// (0x000abfc6) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b4a73) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b4a73) cl_header_name_pane_t

0xa669,	// (0x000af5b7) navi_pane_mv_g2_ParamLimits

0xc992,	// (0x000b18e0) field_vitu2_entry_pane_g1_ParamLimits

0xc99e,	// (0x000b18ec) field_vitu2_entry_pane_g2_ParamLimits

0xc9aa,	// (0x000b18f8) field_vitu2_entry_pane_g3_ParamLimits

0xc9aa,	// (0x000b18f8) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b4869) field_vitu2_entry_pane_g_ParamLimits

0x5eb7,	// (0x000aae05) cell_vitu2_itu_pane_g1_ParamLimits

0x5ec7,	// (0x000aae15) cell_vitu2_itu_pane_g2_ParamLimits

0x5ec7,	// (0x000aae15) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b4875) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b4875) cell_vitu2_itu_pane_g

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp05_ParamLimits

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp05

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp03

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp04

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp10_ParamLimits

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp10

0x6bcb,	// (0x000abb19) bg_vkb2_func_pane_cp08

0x6bb1,	// (0x000abaff) bg_vkb2_func_pane_cp06

0x6bbf,	// (0x000abb0d) bg_vkb2_func_pane_cp07

0xcfb6,	// (0x000b1f04) bg_vkb2_func_pane_cp11_ParamLimits

0xcfb6,	// (0x000b1f04) bg_vkb2_func_pane_cp11

0xcfcb,	// (0x000b1f19) bg_vkb2_func_pane_cp12_ParamLimits

0xcfcb,	// (0x000b1f19) bg_vkb2_func_pane_cp12

0xe653,	// (0x000b35a1) bg_vkb2_func_pane_cp09

0xc9e7,	// (0x000b1935) bg_vkb2_func_pane_g1

0x9866,	// (0x000ae7b4) bg_vkb2_func_pane_g2

0xc9ef,	// (0x000b193d) bg_vkb2_func_pane_g3

0xc9f7,	// (0x000b1945) bg_vkb2_func_pane_g4

0xcc41,	// (0x000b1b8f) bg_vkb2_func_pane_g5

0xca0f,	// (0x000b195d) bg_vkb2_func_pane_g6

0xca17,	// (0x000b1965) bg_vkb2_func_pane_g7

0xca07,	// (0x000b1955) bg_vkb2_func_pane_g8

0x9846,	// (0x000ae794) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b4a7a) bg_vkb2_func_pane_g

0x6f39,	// (0x000abe87) blid2_tripm_pane_g6_ParamLimits

0x6f39,	// (0x000abe87) blid2_tripm_pane_g6

0xc822,	// (0x000b1770) mp4_progress_pane_g1

0x6fb2,	// (0x000abf00) blid2_tripm_values_pane_ParamLimits

0x6fb2,	// (0x000abf00) blid2_tripm_values_pane

0x70a9,	// (0x000abff7) blid2_tripm_values_pane_t1

0x70b7,	// (0x000ac005) blid2_tripm_values_pane_t2

0x70c5,	// (0x000ac013) blid2_tripm_values_pane_t3

0x70d3,	// (0x000ac021) blid2_tripm_values_pane_t4

0x70e1,	// (0x000ac02f) blid2_tripm_values_pane_t5

0x70ef,	// (0x000ac03d) blid2_tripm_values_pane_t6

0x70fd,	// (0x000ac04b) blid2_tripm_values_pane_t7

0x710b,	// (0x000ac059) blid2_tripm_values_pane_t8

0x7119,	// (0x000ac067) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b4a8d) blid2_tripm_values_pane_t

0x1512,	// (0x000a6460) call_video_pane_t1_ParamLimits

0x1530,	// (0x000a647e) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b41bc) call_video_pane_t_ParamLimits

0x2d9e,	// (0x000a7cec) msg_header_pane_g1_ParamLimits

0xa859,	// (0x000af7a7) msg_header_pane_g2_ParamLimits

0xa859,	// (0x000af7a7) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b43d6) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b43d6) msg_header_pane_g

0xed90,	// (0x000b3cde) main_clock2_pane_ParamLimits

0x4e99,	// (0x000a9de7) grid_clock2_toolbar_pane_ParamLimits

0x4e99,	// (0x000a9de7) grid_clock2_toolbar_pane

0x4e99,	// (0x000a9de7) listscroll_clock2_pane_ParamLimits

0x4e99,	// (0x000a9de7) listscroll_clock2_pane

0x4f8c,	// (0x000a9eda) main_clock2_pane_t3_ParamLimits

0x4f8c,	// (0x000a9eda) main_clock2_pane_t3

0x4fb0,	// (0x000a9efe) main_clock2_pane_t4_ParamLimits

0x4fb0,	// (0x000a9efe) main_clock2_pane_t4

0xd0bf,	// (0x000b200d) cell_clock2_toolbar_pane

0xd0c7,	// (0x000b2015) cell_clock2_toolbar_pane_cp01

0xd0c7,	// (0x000b2015) cell_clock2_toolbar_pane_cp02

0xd0cf,	// (0x000b201d) cell_clock2_toolbar_pane_cp03

0xd0d7,	// (0x000b2025) list_clock2_pane

0xa48f,	// (0x000af3dd) scroll_pane_cp10

0xd0df,	// (0x000b202d) list_single_clock2_pane_ParamLimits

0xd0df,	// (0x000b202d) list_single_clock2_pane

0xa6d0,	// (0x000af61e) list_highlight_pane_cp08

0xd0ec,	// (0x000b203a) list_single_clock2_pane_t1

0xd0fa,	// (0x000b2048) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b4aa0) list_single_clock2_pane_t

0xe653,	// (0x000b35a1) bg_button_pane_cp10

0xd108,	// (0x000b2056) cell_clock2_toolbar_pane_g1

0x2e25,	// (0x000a7d73) aid_main_viewer_pane_g1_ParamLimits

0x2e25,	// (0x000a7d73) aid_main_viewer_pane_g1

0x2e33,	// (0x000a7d81) aid_main_viewer_pane_g2_ParamLimits

0x2e33,	// (0x000a7d81) aid_main_viewer_pane_g2

0x2e41,	// (0x000a7d8f) aid_main_viewer_pane_g3_ParamLimits

0x2e41,	// (0x000a7d8f) aid_main_viewer_pane_g3

0x2e50,	// (0x000a7d9e) aid_main_viewer_pane_g4_ParamLimits

0x2e50,	// (0x000a7d9e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b43e7) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b43e7) aid_main_viewer_pane_g

0x3756,	// (0x000a86a4) main_calc_pane_ParamLimits

0x377c,	// (0x000a86ca) main_dialer2_pane_ParamLimits

0x958b,	// (0x000ae4d9) main_cam6_pane

0x958b,	// (0x000ae4d9) main_vid6_pane

0x4ea5,	// (0x000a9df3) listscroll_gen_pane_cp06_ParamLimits

0x4ea5,	// (0x000a9df3) listscroll_gen_pane_cp06

0x4fd3,	// (0x000a9f21) main_clock2_pane_t5_ParamLimits

0x4fd3,	// (0x000a9f21) main_clock2_pane_t5

0x502d,	// (0x000a9f7b) aid_call2_pane_cp10_ParamLimits

0x503f,	// (0x000a9f8d) aid_call_pane_cp10_ParamLimits

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5051,	// (0x000a9f9f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5051,	// (0x000a9f9f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa50d,	// (0x000af45b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b4722) popup_clock_analogue_window_cp10_g_ParamLimits

0x5063,	// (0x000a9fb1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x56cc,	// (0x000aa61a) cell_dialer2_keypad_pane_g2_ParamLimits

0x56cc,	// (0x000aa61a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b4808) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b4808) cell_dialer2_keypad_pane_g

0x56e8,	// (0x000aa636) cell_dialer2_keypad_pane_t1

0x6257,	// (0x000ab1a5) main_cset_text2_pane_ParamLimits

0x6257,	// (0x000ab1a5) main_cset_text2_pane

0xce68,	// (0x000b1db6) area_vitu2_query_pane_g1_ParamLimits

0x6b50,	// (0x000aba9e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b49bd) area_vitu2_query_pane_g_ParamLimits

0xceec,	// (0x000b1e3a) area_vitu2_query_pane_t7_ParamLimits

0xceec,	// (0x000b1e3a) area_vitu2_query_pane_t7

0x6bb1,	// (0x000abaff) bg_button_pane_cp018_ParamLimits

0x6bbf,	// (0x000abb0d) bg_button_pane_cp021_ParamLimits

0x6bcb,	// (0x000abb19) bg_button_pane_cp022_ParamLimits

0x6bcb,	// (0x000abb19) bg_vkb2_func_pane_cp08_ParamLimits

0x6bb1,	// (0x000abaff) bg_vkb2_func_pane_cp06_ParamLimits

0x6bbf,	// (0x000abb0d) bg_vkb2_func_pane_cp07_ParamLimits

0x6bda,	// (0x000abb28) input_focus_pane_cp09_ParamLimits

0xa2e5,	// (0x000af233) cam6_autofocus_pane_ParamLimits

0xa2e5,	// (0x000af233) cam6_autofocus_pane

0x7127,	// (0x000ac075) cam6_image_uncrop_pane_ParamLimits

0x7127,	// (0x000ac075) cam6_image_uncrop_pane

0x7136,	// (0x000ac084) cam6_indi_pane_ParamLimits

0x7136,	// (0x000ac084) cam6_indi_pane

0x714c,	// (0x000ac09a) cam6_mode_pane_ParamLimits

0x714c,	// (0x000ac09a) cam6_mode_pane

0x715e,	// (0x000ac0ac) cam6_timer_pane_ParamLimits

0x715e,	// (0x000ac0ac) cam6_timer_pane

0x716a,	// (0x000ac0b8) cam6_zoom_pane_ParamLimits

0x716a,	// (0x000ac0b8) cam6_zoom_pane

0x7176,	// (0x000ac0c4) cam6_mode_pane_g1_ParamLimits

0x7176,	// (0x000ac0c4) cam6_mode_pane_g1

0x7186,	// (0x000ac0d4) cam6_mode_pane_g2_ParamLimits

0x7186,	// (0x000ac0d4) cam6_mode_pane_g2

0x7196,	// (0x000ac0e4) cam6_mode_pane_g3_ParamLimits

0x7196,	// (0x000ac0e4) cam6_mode_pane_g3

0x71a6,	// (0x000ac0f4) cam6_mode_pane_g4_ParamLimits

0x71a6,	// (0x000ac0f4) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b4aa5) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b4aa5) cam6_mode_pane_g

0xd110,	// (0x000b205e) bg_tb_trans_pane_cp08_ParamLimits

0xd110,	// (0x000b205e) bg_tb_trans_pane_cp08

0xd11e,	// (0x000b206c) cam6_battery_pane_ParamLimits

0xd11e,	// (0x000b206c) cam6_battery_pane

0xd134,	// (0x000b2082) cam6_indi_pane_g1_ParamLimits

0xd134,	// (0x000b2082) cam6_indi_pane_g1

0xd146,	// (0x000b2094) cam6_indi_pane_g2_ParamLimits

0xd146,	// (0x000b2094) cam6_indi_pane_g2

0xd158,	// (0x000b20a6) cam6_indi_pane_g3_ParamLimits

0xd158,	// (0x000b20a6) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b4aae) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b4aae) cam6_indi_pane_g

0xd16a,	// (0x000b20b8) cam6_indi_pane_t1_ParamLimits

0xd16a,	// (0x000b20b8) cam6_indi_pane_t1

0x71b6,	// (0x000ac104) cam6_autofocus_pane_g1

0x71be,	// (0x000ac10c) cam6_autofocus_pane_g2

0x71c6,	// (0x000ac114) cam6_autofocus_pane_g3

0x71ce,	// (0x000ac11c) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b4ab5) cam6_autofocus_pane_g

0xd190,	// (0x000b20de) cam6_timer_pane_g1

0xd198,	// (0x000b20e6) cam6_timer_pane_t1

0xd1a6,	// (0x000b20f4) cam6_zoom_cont_pane

0xd1ae,	// (0x000b20fc) cam6_zoom_pane_g1

0xd1b6,	// (0x000b2104) cam6_zoom_pane_g2

0x71d6,	// (0x000ac124) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b4abe) cam6_zoom_pane_g

0xbef6,	// (0x000b0e44) cam6_battery_pane_g1

0xbef6,	// (0x000b0e44) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b462a) cam6_battery_pane_g

0xd1be,	// (0x000b210c) cam6_zoom_cont_pane_g1

0xd1c7,	// (0x000b2115) cam6_zoom_cont_pane_g2

0xd1d0,	// (0x000b211e) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b4ac5) cam6_zoom_cont_pane_g

0x71f3,	// (0x000ac141) cam6_mode_pane_cp_ParamLimits

0x71f3,	// (0x000ac141) cam6_mode_pane_cp

0x7205,	// (0x000ac153) cam6_zoom_pane_cp_ParamLimits

0x7205,	// (0x000ac153) cam6_zoom_pane_cp

0x7211,	// (0x000ac15f) vid6_image_uncrop_cif_pane_ParamLimits

0x7211,	// (0x000ac15f) vid6_image_uncrop_cif_pane

0x7221,	// (0x000ac16f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7221,	// (0x000ac16f) vid6_image_uncrop_nhd_pane

0x7230,	// (0x000ac17e) vid6_image_uncrop_vga_pane_ParamLimits

0x7230,	// (0x000ac17e) vid6_image_uncrop_vga_pane

0x723f,	// (0x000ac18d) vid6_image_uncrop_wvga_pane_ParamLimits

0x723f,	// (0x000ac18d) vid6_image_uncrop_wvga_pane

0x724e,	// (0x000ac19c) vid6_indi_pane_ParamLimits

0x724e,	// (0x000ac19c) vid6_indi_pane

0xd110,	// (0x000b205e) bg_tb_trans_pane_cp09_ParamLimits

0xd110,	// (0x000b205e) bg_tb_trans_pane_cp09

0xd1e8,	// (0x000b2136) cam6_battery_pane_cp_ParamLimits

0xd1e8,	// (0x000b2136) cam6_battery_pane_cp

0xd1f4,	// (0x000b2142) vid6_indi_pane_g1_ParamLimits

0xd1f4,	// (0x000b2142) vid6_indi_pane_g1

0xd206,	// (0x000b2154) vid6_indi_pane_g2_ParamLimits

0xd206,	// (0x000b2154) vid6_indi_pane_g2

0xd218,	// (0x000b2166) vid6_indi_pane_g3_ParamLimits

0xd218,	// (0x000b2166) vid6_indi_pane_g3

0xd22d,	// (0x000b217b) vid6_indi_pane_g4_ParamLimits

0xd22d,	// (0x000b217b) vid6_indi_pane_g4

0xd242,	// (0x000b2190) vid6_indi_pane_g5_ParamLimits

0xd242,	// (0x000b2190) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b4acc) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b4acc) vid6_indi_pane_g

0xd25c,	// (0x000b21aa) vid6_indi_pane_t1_ParamLimits

0xd25c,	// (0x000b21aa) vid6_indi_pane_t1

0xd272,	// (0x000b21c0) vid6_indi_pane_t2_ParamLimits

0xd272,	// (0x000b21c0) vid6_indi_pane_t2

0xd29a,	// (0x000b21e8) vid6_indi_pane_t3_ParamLimits

0xd29a,	// (0x000b21e8) vid6_indi_pane_t3

0xd2c2,	// (0x000b2210) vid6_indi_pane_t4_ParamLimits

0xd2c2,	// (0x000b2210) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b4ad7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b4ad7) vid6_indi_pane_t

0xd2e6,	// (0x000b2234) wait_bar_pane_cp08

0x7266,	// (0x000ac1b4) main_cset_text2_pane_t1_ParamLimits

0x7266,	// (0x000ac1b4) main_cset_text2_pane_t1

0x71de,	// (0x000ac12c) listscroll_gen_pane_cp06_t1_ParamLimits

0x71de,	// (0x000ac12c) listscroll_gen_pane_cp06_t1

0x958b,	// (0x000ae4d9) main_cam6_set_pane

0xa11d,	// (0x000af06b) bg_tb_trans_pane_cp06_ParamLimits

0xa133,	// (0x000af081) cam4_indicators_pane_g1_ParamLimits

0xa144,	// (0x000af092) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b4845) cam4_indicators_pane_g_ParamLimits

0xa162,	// (0x000af0b0) cam4_indicators_pane_t1_ParamLimits

0x957d,	// (0x000ae4cb) bg_tb_trans_pane_cp07_ParamLimits

0xa18e,	// (0x000af0dc) vid4_indicators_pane_g1_ParamLimits

0xa1a2,	// (0x000af0f0) vid4_indicators_pane_g2_ParamLimits

0xa1b6,	// (0x000af104) vid4_indicators_pane_g3_ParamLimits

0xa1c7,	// (0x000af115) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b4857) vid4_indicators_pane_g_ParamLimits

0xa1e5,	// (0x000af133) vid4_indicators_pane_t1_ParamLimits

0xa283,	// (0x000af1d1) vid4_progress_pane_g1_ParamLimits

0xa293,	// (0x000af1e1) vid4_progress_pane_g2_ParamLimits

0x6d15,	// (0x000abc63) vid4_progress_pane_g3_ParamLimits

0xa2a3,	// (0x000af1f1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b4a08) vid4_progress_pane_g_ParamLimits

0x6d27,	// (0x000abc75) vid4_progress_pane_t1_ParamLimits

0xa2bb,	// (0x000af209) vid4_progress_pane_t2_ParamLimits

0xa2d0,	// (0x000af21e) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b4a13) vid4_progress_pane_t_ParamLimits

0x6d3f,	// (0x000abc8d) wait_bar_pane_cp07_ParamLimits

0x7283,	// (0x000ac1d1) main_cam6_set_pane_g2_ParamLimits

0x7283,	// (0x000ac1d1) main_cam6_set_pane_g2

0x72a7,	// (0x000ac1f5) main_cset6_listscroll_pane_ParamLimits

0x72a7,	// (0x000ac1f5) main_cset6_listscroll_pane

0x72c7,	// (0x000ac215) main_cset6_slider_pane_ParamLimits

0x72c7,	// (0x000ac215) main_cset6_slider_pane

0x72dd,	// (0x000ac22b) main_cset6_text2_pane_ParamLimits

0x72dd,	// (0x000ac22b) main_cset6_text2_pane

0xd2f5,	// (0x000b2243) main_cset6_text_pane

0xd2fd,	// (0x000b224b) main_cset_list_pane_copy1_ParamLimits

0xd2fd,	// (0x000b224b) main_cset_list_pane_copy1

0xd30d,	// (0x000b225b) scroll_pane_cp028_copy1

0x72eb,	// (0x000ac239) cset_list_set_pane_copy1

0x72fc,	// (0x000ac24a) aid_position_infowindow_above_copy1

0x7304,	// (0x000ac252) aid_position_infowindow_below_copy1

0x730c,	// (0x000ac25a) cset_list_set_pane_g1_copy1

0x7314,	// (0x000ac262) cset_list_set_pane_g3_copy1_ParamLimits

0x7314,	// (0x000ac262) cset_list_set_pane_g3_copy1

0x7323,	// (0x000ac271) cset_list_set_pane_t1_copy1_ParamLimits

0x7323,	// (0x000ac271) cset_list_set_pane_t1_copy1

0xef7c,	// (0x000b3eca) list_highlight_pane_cp021_copy1_ParamLimits

0xef7c,	// (0x000b3eca) list_highlight_pane_cp021_copy1

0xd316,	// (0x000b2264) cset6_slider_pane_ParamLimits

0xd316,	// (0x000b2264) cset6_slider_pane

0xd342,	// (0x000b2290) main_cset6_slider_pane_g1_ParamLimits

0xd342,	// (0x000b2290) main_cset6_slider_pane_g1

0x7338,	// (0x000ac286) main_cset6_slider_pane_g2_ParamLimits

0x7338,	// (0x000ac286) main_cset6_slider_pane_g2

0xd36a,	// (0x000b22b8) main_cset6_slider_pane_g3_ParamLimits

0xd36a,	// (0x000b22b8) main_cset6_slider_pane_g3

0x7360,	// (0x000ac2ae) main_cset6_slider_pane_g4_ParamLimits

0x7360,	// (0x000ac2ae) main_cset6_slider_pane_g4

0x736c,	// (0x000ac2ba) main_cset6_slider_pane_g5_ParamLimits

0x736c,	// (0x000ac2ba) main_cset6_slider_pane_g5

0xcb16,	// (0x000b1a64) main_cset6_slider_pane_g7_ParamLimits

0xcb16,	// (0x000b1a64) main_cset6_slider_pane_g7

0xcb22,	// (0x000b1a70) main_cset6_slider_pane_g8_ParamLimits

0xcb22,	// (0x000b1a70) main_cset6_slider_pane_g8

0x6304,	// (0x000ab252) main_cset6_slider_pane_g9_ParamLimits

0x6304,	// (0x000ab252) main_cset6_slider_pane_g9

0x6310,	// (0x000ab25e) main_cset6_slider_pane_g10_ParamLimits

0x6310,	// (0x000ab25e) main_cset6_slider_pane_g10

0x631c,	// (0x000ab26a) main_cset6_slider_pane_g11_ParamLimits

0x631c,	// (0x000ab26a) main_cset6_slider_pane_g11

0x6328,	// (0x000ab276) main_cset6_slider_pane_g12_ParamLimits

0x6328,	// (0x000ab276) main_cset6_slider_pane_g12

0x6334,	// (0x000ab282) main_cset6_slider_pane_g13_ParamLimits

0x6334,	// (0x000ab282) main_cset6_slider_pane_g13

0x6340,	// (0x000ab28e) main_cset6_slider_pane_g14_ParamLimits

0x6340,	// (0x000ab28e) main_cset6_slider_pane_g14

0x7378,	// (0x000ac2c6) main_cset6_slider_pane_g15_ParamLimits

0x7378,	// (0x000ac2c6) main_cset6_slider_pane_g15

0x6364,	// (0x000ab2b2) main_cset6_slider_pane_g16_ParamLimits

0x6364,	// (0x000ab2b2) main_cset6_slider_pane_g16

0x6370,	// (0x000ab2be) main_cset6_slider_pane_g17_ParamLimits

0x6370,	// (0x000ab2be) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b4ae0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b4ae0) main_cset6_slider_pane_g

0xd376,	// (0x000b22c4) main_cset6_slider_pane_t1_ParamLimits

0xd376,	// (0x000b22c4) main_cset6_slider_pane_t1

0x73a8,	// (0x000ac2f6) main_cset6_slider_pane_t2_ParamLimits

0x73a8,	// (0x000ac2f6) main_cset6_slider_pane_t2

0x73d3,	// (0x000ac321) main_cset6_slider_pane_t3_ParamLimits

0x73d3,	// (0x000ac321) main_cset6_slider_pane_t3

0x73fe,	// (0x000ac34c) main_cset6_slider_pane_t4_ParamLimits

0x73fe,	// (0x000ac34c) main_cset6_slider_pane_t4

0x7429,	// (0x000ac377) main_cset6_slider_pane_t5_ParamLimits

0x7429,	// (0x000ac377) main_cset6_slider_pane_t5

0xd3b7,	// (0x000b2305) main_cset6_slider_pane_t7_ParamLimits

0xd3b7,	// (0x000b2305) main_cset6_slider_pane_t7

0x7454,	// (0x000ac3a2) main_cset6_slider_pane_t8_ParamLimits

0x7454,	// (0x000ac3a2) main_cset6_slider_pane_t8

0x7478,	// (0x000ac3c6) main_cset6_slider_pane_t9_ParamLimits

0x7478,	// (0x000ac3c6) main_cset6_slider_pane_t9

0x749c,	// (0x000ac3ea) main_cset6_slider_pane_t10_ParamLimits

0x749c,	// (0x000ac3ea) main_cset6_slider_pane_t10

0x74c0,	// (0x000ac40e) main_cset6_slider_pane_t11_ParamLimits

0x74c0,	// (0x000ac40e) main_cset6_slider_pane_t11

0xd3ed,	// (0x000b233b) main_cset6_slider_pane_t14_ParamLimits

0xd3ed,	// (0x000b233b) main_cset6_slider_pane_t14

0xd426,	// (0x000b2374) main_cset6_slider_pane_t15_ParamLimits

0xd426,	// (0x000b2374) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b4b05) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b4b05) main_cset6_slider_pane_t

0xd45f,	// (0x000b23ad) cset_slider_pane_g1_copy1

0xd468,	// (0x000b23b6) cset_slider_pane_g2_copy1

0xd471,	// (0x000b23bf) cset_slider_pane_g3_copy1

0xe653,	// (0x000b35a1) bg_popup_sub_pane_cp011_copy1

0xd47a,	// (0x000b23c8) main_cset_text_pane_g1_copy1

0xcc90,	// (0x000b1bde) main_cset_text_pane_t1_copy1

0xcc9e,	// (0x000b1bec) main_cset_text_pane_t2_copy1

0xccac,	// (0x000b1bfa) main_cset_text_pane_t3_copy1

0xccba,	// (0x000b1c08) main_cset_text_pane_t4_copy1

0xccc8,	// (0x000b1c16) main_cset_text_pane_t5_copy1

0xd482,	// (0x000b23d0) main_cset_text_pane_t6_copy1

0xcce4,	// (0x000b1c32) main_cset_text_pane_t7_copy1

0x7266,	// (0x000ac1b4) main_cset_text2_pane_t1_copy1

0x957d,	// (0x000ae4cb) main_ncimui_pane

0x39c6,	// (0x000a8914) popup_query_ncimui_window_ParamLimits

0x39c6,	// (0x000a8914) popup_query_ncimui_window

0xc1c7,	// (0x000b1115) field_cale_ev2_pane_g4_ParamLimits

0xc1c7,	// (0x000b1115) field_cale_ev2_pane_g4

0x55ac,	// (0x000aa4fa) cell_video_dialer_keypad_pane_g2_ParamLimits

0x55ac,	// (0x000aa4fa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b47e3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b47e3) cell_video_dialer_keypad_pane_g

0x55c4,	// (0x000aa512) cell_video_dialer_keypad_pane_t1

0xe653,	// (0x000b35a1) bg_popup_window_pane_cp012

0xa35c,	// (0x000af2aa) heading_pane_cp06

0xd4ae,	// (0x000b23fc) ncim_query_content_pane

0xe653,	// (0x000b35a1) bg_popup_heading_pane_cp01

0xd4b6,	// (0x000b2404) ncim_heading_pane_t1

0xd4c4,	// (0x000b2412) ncim_indicator_popup_pane

0xd4d6,	// (0x000b2424) ncim_query_button_pane

0xd4ea,	// (0x000b2438) ncim_query_content_pane_t1

0xd4fc,	// (0x000b244a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b4b49) ncim_query_content_pane_t

0xd536,	// (0x000b2484) ncim_query_list_pane

0xd548,	// (0x000b2496) ncim_query_popup_pane

0xd4c4,	// (0x000b2412) ncim_indicator_popup_pane_ParamLimits

0x76db,	// (0x000ac629) ncim_query_content_pane_g1_ParamLimits

0x76db,	// (0x000ac629) ncim_query_content_pane_g1

0xd4ea,	// (0x000b2438) ncim_query_content_pane_t1_ParamLimits

0xd4fc,	// (0x000b244a) ncim_query_content_pane_t2_ParamLimits

0x76e7,	// (0x000ac635) ncim_query_content_pane_t3_ParamLimits

0x76e7,	// (0x000ac635) ncim_query_content_pane_t3

0x770f,	// (0x000ac65d) ncim_query_content_pane_t4_ParamLimits

0x770f,	// (0x000ac65d) ncim_query_content_pane_t4

0x7737,	// (0x000ac685) ncim_query_content_pane_t5_ParamLimits

0x7737,	// (0x000ac685) ncim_query_content_pane_t5

0xd50e,	// (0x000b245c) ncim_query_content_pane_t6_ParamLimits

0xd50e,	// (0x000b245c) ncim_query_content_pane_t6

0xfbfb,	// (0x000b4b49) ncim_query_content_pane_t_ParamLimits

0xd536,	// (0x000b2484) ncim_query_list_pane_ParamLimits

0xd548,	// (0x000b2496) ncim_query_popup_pane_ParamLimits

0xd55c,	// (0x000b24aa) wait_bar_pane_cp04

0xe653,	// (0x000b35a1) input_focus_pane_cp011

0xd564,	// (0x000b24b2) ncim_query_popup_pane_t1

0xd572,	// (0x000b24c0) ncim_list_query_list_pane_ParamLimits

0xd572,	// (0x000b24c0) ncim_list_query_list_pane

0xe653,	// (0x000b35a1) bg_button_pane_cp027

0xd57f,	// (0x000b24cd) ncim_query_button_pane_g1

0xe653,	// (0x000b35a1) list_highlight_pane_cp012

0xd589,	// (0x000b24d7) ncim_list_query_list_pane_g1

0xd591,	// (0x000b24df) ncim_list_query_list_pane_t1

0xa153,	// (0x000af0a1) cam4_indicators_pane_g3_ParamLimits

0xa153,	// (0x000af0a1) cam4_indicators_pane_g3

0xa1d3,	// (0x000af121) vid4_indicators_pane_g5_ParamLimits

0xa1d3,	// (0x000af121) vid4_indicators_pane_g5

0xa2af,	// (0x000af1fd) vid4_progress_pane_g5_ParamLimits

0xa2af,	// (0x000af1fd) vid4_progress_pane_g5

0x75c9,	// (0x000ac517) main_ncimui_pane_g1

0x762f,	// (0x000ac57d) ncimui_group_query_pane_ParamLimits

0x762f,	// (0x000ac57d) ncimui_group_query_pane

0x7677,	// (0x000ac5c5) ncimui_list_pane_ParamLimits

0x7677,	// (0x000ac5c5) ncimui_list_pane

0x769e,	// (0x000ac5ec) ncimui_text_pane_ParamLimits

0x769e,	// (0x000ac5ec) ncimui_text_pane

0x775f,	// (0x000ac6ad) ncimui_text_pane_t1_ParamLimits

0x775f,	// (0x000ac6ad) ncimui_text_pane_t1

0xd59f,	// (0x000b24ed) ncimui_list_single_graphic_pane_ParamLimits

0xd59f,	// (0x000b24ed) ncimui_list_single_graphic_pane

0x777d,	// (0x000ac6cb) ncimui_query_pane_ParamLimits

0x777d,	// (0x000ac6cb) ncimui_query_pane

0xe653,	// (0x000b35a1) list_highlight_pane_cp013

0xd5af,	// (0x000b24fd) ncim_list_query_list_pane_t1_copy1

0xd589,	// (0x000b24d7) ncim_list_single_graphic_pane_g1

0xd5bd,	// (0x000b250b) ncim_query_button_pane_cp01

0xd5c9,	// (0x000b2517) ncim_query_entry_pane_ParamLimits

0xd5c9,	// (0x000b2517) ncim_query_entry_pane

0xd5dc,	// (0x000b252a) ncimui_query_pane_g1

0xd5e8,	// (0x000b2536) ncimui_query_pane_t1_ParamLimits

0xd5e8,	// (0x000b2536) ncimui_query_pane_t1

0xef7c,	// (0x000b3eca) input_focus_pane_cp012

0xd601,	// (0x000b254f) ncim_query_entry_pane_t1

0xed90,	// (0x000b3cde) main_im_pane_ParamLimits

0x957d,	// (0x000ae4cb) main_mobtv_pane_ParamLimits

0x957d,	// (0x000ae4cb) main_mobtv_pane

0x7390,	// (0x000ac2de) main_cset6_slider_pane_g18_ParamLimits

0x7390,	// (0x000ac2de) main_cset6_slider_pane_g18

0x739c,	// (0x000ac2ea) main_cset6_slider_pane_g19_ParamLimits

0x739c,	// (0x000ac2ea) main_cset6_slider_pane_g19

0x7790,	// (0x000ac6de) bg_main_mobtv_pane_ParamLimits

0x7790,	// (0x000ac6de) bg_main_mobtv_pane

0x779e,	// (0x000ac6ec) main_mobtv_info_pane

0x77a7,	// (0x000ac6f5) main_mobtv_loading_pane_ParamLimits

0x77a7,	// (0x000ac6f5) main_mobtv_loading_pane

0xd613,	// (0x000b2561) main_mobtv_pg_channel_list_pane

0xd61d,	// (0x000b256b) main_mobtv_pg_hdr_pane

0x77b4,	// (0x000ac702) main_mobtv_programe_curr_pane_ParamLimits

0x77b4,	// (0x000ac702) main_mobtv_programe_curr_pane

0x77c1,	// (0x000ac70f) main_mobtv_programe_next_pane_ParamLimits

0x77c1,	// (0x000ac70f) main_mobtv_programe_next_pane

0xd626,	// (0x000b2574) popup_mobtv_noti_window

0xbef6,	// (0x000b0e44) main_tv_pg_hdr_pane_g1

0xd62e,	// (0x000b257c) main_tv_pg_hdr_pane_g2

0xd636,	// (0x000b2584) main_tv_pg_hdr_pane_g3

0xd63e,	// (0x000b258c) main_tv_pg_hdr_pane_g4

0xd646,	// (0x000b2594) main_tv_pg_hdr_pane_g5

0xd650,	// (0x000b259e) main_tv_pg_hdr_pane_g6

0xd65a,	// (0x000b25a8) main_tv_pg_hdr_pane_g7

0xd664,	// (0x000b25b2) main_tv_pg_hdr_pane_g8

0xd66e,	// (0x000b25bc) main_tv_pg_hdr_pane_g9

0xd678,	// (0x000b25c6) main_tv_pg_hdr_pane_g10

0xd682,	// (0x000b25d0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b4b56) main_tv_pg_hdr_pane_g

0xd68c,	// (0x000b25da) main_tv_pg_hdr_pane_t1

0xd69a,	// (0x000b25e8) main_tv_pg_hdr_pane_t2

0xd6a8,	// (0x000b25f6) main_tv_pg_hdr_pane_t3

0xd6b8,	// (0x000b2606) main_tv_pg_hdr_pane_t4

0xd6c8,	// (0x000b2616) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b4b6d) main_tv_pg_hdr_pane_t

0xd6d8,	// (0x000b2626) single_mobtv_pg_channel_pane_ParamLimits

0xd6d8,	// (0x000b2626) single_mobtv_pg_channel_pane

0xd6ea,	// (0x000b2638) single_mobtv_pg_channel_table_pane

0xd6f3,	// (0x000b2641) single_mobtv_pg_channel_thumb_pane

0xd6fc,	// (0x000b264a) single_tv_pg_channel_pane_g1

0xd705,	// (0x000b2653) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b4b78) single_tv_pg_channel_pane_g

0xc162,	// (0x000b10b0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc162,	// (0x000b10b0) bg_single_mobtv_pg_channel_thumb_pane

0xd70e,	// (0x000b265c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd70e,	// (0x000b265c) single_mobtv_pg_channel_thumb_pane_g1

0xd71c,	// (0x000b266a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd71c,	// (0x000b266a) single_mobtv_pg_channel_thumb_pane_g2

0xd728,	// (0x000b2676) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd728,	// (0x000b2676) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b4b7d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b4b7d) single_mobtv_pg_channel_thumb_pane_g

0xd734,	// (0x000b2682) single_mobtv_pg_channel_thumb_pane_t1

0xd742,	// (0x000b2690) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b4b84) single_mobtv_pg_channel_thumb_pane_t

0xbef6,	// (0x000b0e44) bg_single_mobtv_pg_channel_table_pane_g1

0xbef6,	// (0x000b0e44) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b462a) bg_single_mobtv_pg_channel_table_pane_g

0xd750,	// (0x000b269e) single_mobtv_pg_channel_table_pane_t1

0xd75e,	// (0x000b26ac) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b4b89) single_mobtv_pg_channel_table_pane_t

0x77d6,	// (0x000ac724) main_mobtv_info_pane_g1_ParamLimits

0x77d6,	// (0x000ac724) main_mobtv_info_pane_g1

0x77f4,	// (0x000ac742) main_mobtv_info_pane_t1_ParamLimits

0x77f4,	// (0x000ac742) main_mobtv_info_pane_t1

0x786c,	// (0x000ac7ba) main_mobtv_info_pane_t2_ParamLimits

0x786c,	// (0x000ac7ba) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b4b93) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b4b93) main_mobtv_info_pane_t

0x78fb,	// (0x000ac849) wait_bar_pane_cp05

0x790d,	// (0x000ac85b) main_mobtv_loading_pane_g1_ParamLimits

0x790d,	// (0x000ac85b) main_mobtv_loading_pane_g1

0x7920,	// (0x000ac86e) main_mobtv_loading_pane_g2_ParamLimits

0x7920,	// (0x000ac86e) main_mobtv_loading_pane_g2

0x792c,	// (0x000ac87a) main_mobtv_loading_pane_g3_ParamLimits

0x792c,	// (0x000ac87a) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b4b9a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b4b9a) main_mobtv_loading_pane_g

0xd76c,	// (0x000b26ba) main_mobtv_loading_pane_t1_ParamLimits

0xd76c,	// (0x000b26ba) main_mobtv_loading_pane_t1

0xd784,	// (0x000b26d2) main_mobtv_loading_pane_t2_ParamLimits

0xd784,	// (0x000b26d2) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b4ba1) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b4ba1) main_mobtv_loading_pane_t

0x793f,	// (0x000ac88d) wait_bar_pane_cp06_ParamLimits

0x793f,	// (0x000ac88d) wait_bar_pane_cp06

0xd7a8,	// (0x000b26f6) main_mobtv_programe_curr_pane_t1

0xd7b6,	// (0x000b2704) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b4ba6) main_mobtv_programe_curr_pane_t

0xd7c4,	// (0x000b2712) main_mobtv_programe_next_pane_t1

0xd7d2,	// (0x000b2720) main_mobtv_programe_next_pane_t2

0xd7e0,	// (0x000b272e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b4bab) main_mobtv_programe_next_pane_t

0xe653,	// (0x000b35a1) bg_popup_mobtv_noti_window_pane

0xd7ee,	// (0x000b273c) popup_mobtv_noti_window_g1

0xd7f6,	// (0x000b2744) popup_mobtv_noti_window_t1

0xd804,	// (0x000b2752) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b4bb2) popup_mobtv_noti_window_t

0xbef6,	// (0x000b0e44) bg_popup_mobtv_noti_window_pane_g1

0x958b,	// (0x000ae4d9) sc_clock_pane

0x958b,	// (0x000ae4d9) main_fs_bigclock_pane

0x6f9c,	// (0x000abeea) blid2_tripm_pane_t4_ParamLimits

0x6f9c,	// (0x000abeea) blid2_tripm_pane_t4

0x794e,	// (0x000ac89c) sc_clock_pane_g1_ParamLimits

0x794e,	// (0x000ac89c) sc_clock_pane_g1

0x7960,	// (0x000ac8ae) sc_clock_pane_t1_ParamLimits

0x7960,	// (0x000ac8ae) sc_clock_pane_t1

0x7982,	// (0x000ac8d0) sc_clock_pane_t2_ParamLimits

0x7982,	// (0x000ac8d0) sc_clock_pane_t2

0x799a,	// (0x000ac8e8) sc_clock_pane_t3_ParamLimits

0x799a,	// (0x000ac8e8) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b4bb7) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b4bb7) sc_clock_pane_t

0x8a26,	// (0x000ad974) main_fs_bigclock_indicator_pane_ParamLimits

0x8a26,	// (0x000ad974) main_fs_bigclock_indicator_pane

0x7a3a,	// (0x000ac988) main_fs_bigclock_pane_g1_ParamLimits

0x7a3a,	// (0x000ac988) main_fs_bigclock_pane_g1

0x8a32,	// (0x000ad980) main_fs_bigclock_pane_t1_ParamLimits

0x8a32,	// (0x000ad980) main_fs_bigclock_pane_t1

0x8a44,	// (0x000ad992) main_fs_bigclock_pane_t2_ParamLimits

0x8a44,	// (0x000ad992) main_fs_bigclock_pane_t2

0x8a58,	// (0x000ad9a6) main_fs_bigclock_pane_t3_ParamLimits

0x8a58,	// (0x000ad9a6) main_fs_bigclock_pane_t3

0x0002,

0xfe5f,	// (0x000b4dad) main_fs_bigclock_pane_t_ParamLimits

0xfe5f,	// (0x000b4dad) main_fs_bigclock_pane_t

0xe2f3,	// (0x000b3241) main_fs_bigclock_indicator_pane_g1

0xd4de,	// (0x000b242c) ncim_query_content_pane_g2_ParamLimits

0xd4de,	// (0x000b242c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b4b44) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b4b44) ncim_query_content_pane_g

0x79b3,	// (0x000ac901) sc_clock_pane_t4_ParamLimits

0x79b3,	// (0x000ac901) sc_clock_pane_t4

0x957d,	// (0x000ae4cb) main_radioblah_pane

0xc90b,	// (0x000b1859) cell_call4_button_pane_t1_copy1_ParamLimits

0xc90b,	// (0x000b1859) cell_call4_button_pane_t1_copy1

0x75e1,	// (0x000ac52f) main_ncimui_pane_t1_ParamLimits

0x75e1,	// (0x000ac52f) main_ncimui_pane_t1

0x75fb,	// (0x000ac549) main_ncimui_pane_t2_ParamLimits

0x75fb,	// (0x000ac549) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b4b3d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b4b3d) main_ncimui_pane_t

0xd948,	// (0x000b2896) main_radioblah_anim_pane_ParamLimits

0xd948,	// (0x000b2896) main_radioblah_anim_pane

0xd959,	// (0x000b28a7) main_radioblah_info_pane_ParamLimits

0xd959,	// (0x000b28a7) main_radioblah_info_pane

0xd96d,	// (0x000b28bb) main_radioblah_pane_t1_ParamLimits

0xd96d,	// (0x000b28bb) main_radioblah_pane_t1

0xd989,	// (0x000b28d7) main_radioblah_pane_t2_ParamLimits

0xd989,	// (0x000b28d7) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b4bd8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b4bd8) main_radioblah_pane_t

0x7a92,	// (0x000ac9e0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a92,	// (0x000ac9e0) main_radioblah_rocker_ctrl_pane

0xd9d1,	// (0x000b291f) main_radioblah_info_pane_t1_ParamLimits

0xd9d1,	// (0x000b291f) main_radioblah_info_pane_t1

0x7aea,	// (0x000aca38) main_radioblah_info_pane_t2_ParamLimits

0x7aea,	// (0x000aca38) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b4be1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b4be1) main_radioblah_info_pane_t

0xbef6,	// (0x000b0e44) main_radioblah_rocker_ctrl_pane_g1

0x7b9a,	// (0x000acae8) main_radioblah_rocker_ctrl_pane_g2

0x7ba2,	// (0x000acaf0) main_radioblah_rocker_ctrl_pane_g3

0x7baa,	// (0x000acaf8) main_radioblah_rocker_ctrl_pane_g4

0x7bb2,	// (0x000acb00) main_radioblah_rocker_ctrl_pane_g5

0x7bba,	// (0x000acb08) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b4bea) main_radioblah_rocker_ctrl_pane_g

0x7266,	// (0x000ac1b4) main_cset_text2_pane_t1_copy1_ParamLimits

0xa115,	// (0x000af063) cam4_image_uncrop_qvga_pane

0xa17c,	// (0x000af0ca) vid4_image_uncrop_qcif_pane

0xa2e5,	// (0x000af233) cam6_image_uncrop_qvga_pane_ParamLimits

0xa2e5,	// (0x000af233) cam6_image_uncrop_qvga_pane

0xd1d8,	// (0x000b2126) vid6_image_uncrop_qcif_pane_ParamLimits

0xd1d8,	// (0x000b2126) vid6_image_uncrop_qcif_pane

0xe653,	// (0x000b35a1) bg_popup_preview_window_pane_cp03

0xd490,	// (0x000b23de) list_cset_text2_pane

0xd498,	// (0x000b23e6) main_cset6_text2_pane_g1

0xd4a0,	// (0x000b23ee) main_cset6_text2_pane_t1

0x7bc2,	// (0x000acb10) list_cset_text2_pane_t1_ParamLimits

0x7bc2,	// (0x000acb10) list_cset_text2_pane_t1

0x957d,	// (0x000ae4cb) main_radioblah_pane_ParamLimits

0x78e7,	// (0x000ac835) main_mobtv_info_pane_t3_ParamLimits

0x78e7,	// (0x000ac835) main_mobtv_info_pane_t3

0x7a80,	// (0x000ac9ce) main_radioblah_pane_g1

0x7aba,	// (0x000aca08) main_radioblah_info_pane_g1

0x7b3f,	// (0x000aca8d) main_radioblah_info_pane_t3_ParamLimits

0x7b3f,	// (0x000aca8d) main_radioblah_info_pane_t3

0x23dd,	// (0x000a732b) highlight_cell_cale_month_pane_ParamLimits

0x23dd,	// (0x000a732b) highlight_cell_cale_month_pane

0x958b,	// (0x000ae4d9) main_phob_fisheye_pane

0xc296,	// (0x000b11e4) scroll_pane_cp0031_ParamLimits

0xc296,	// (0x000b11e4) scroll_pane_cp0031

0xd2e6,	// (0x000b2234) wait_bar_pane_cp08_ParamLimits

0x72eb,	// (0x000ac239) cset_list_set_pane_copy1_ParamLimits

0xda0b,	// (0x000b2959) highlight_cell_cale_month_pane_g1

0x7bdb,	// (0x000acb29) highlight_cell_cale_month_pane_t1

0xcf58,	// (0x000b1ea6) list_gen_pane_cp01

0xcb01,	// (0x000b1a4f) scroll_pane_01

0xef9e,	// (0x000b3eec) list_single_double_fisheye_pane

0x7be9,	// (0x000acb37) list_double_fisheye_pane_g1_ParamLimits

0x7be9,	// (0x000acb37) list_double_fisheye_pane_g1

0x7bf5,	// (0x000acb43) list_double_fisheye_pane_g2_ParamLimits

0x7bf5,	// (0x000acb43) list_double_fisheye_pane_g2

0x7c09,	// (0x000acb57) list_double_fisheye_pane_g3_ParamLimits

0x7c09,	// (0x000acb57) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b4bf7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b4bf7) list_double_fisheye_pane_g

0x7c32,	// (0x000acb80) list_double_fisheye_pane_t1_ParamLimits

0x7c32,	// (0x000acb80) list_double_fisheye_pane_t1

0x7c4d,	// (0x000acb9b) list_double_fisheye_pane_t2_ParamLimits

0x7c4d,	// (0x000acb9b) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b4c02) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b4c02) list_double_fisheye_pane_t

0x958b,	// (0x000ae4d9) main_call5_pane

0x79de,	// (0x000ac92c) sc_swipe_pane_ParamLimits

0x79de,	// (0x000ac92c) sc_swipe_pane

0x7c82,	// (0x000acbd0) call5_image_pane_ParamLimits

0x7c82,	// (0x000acbd0) call5_image_pane

0x7c9f,	// (0x000acbed) call5_swipe_1_pane_ParamLimits

0x7c9f,	// (0x000acbed) call5_swipe_1_pane

0x7cb2,	// (0x000acc00) call5_swipe_2_pane_ParamLimits

0x7cb2,	// (0x000acc00) call5_swipe_2_pane

0x7cdd,	// (0x000acc2b) popup_call5_audio_first_window_ParamLimits

0x7cdd,	// (0x000acc2b) popup_call5_audio_first_window

0xc162,	// (0x000b10b0) call5_swipe_1_pane_g1_ParamLimits

0xc162,	// (0x000b10b0) call5_swipe_1_pane_g1

0xda13,	// (0x000b2961) call5_swipe_1_pane_g2_ParamLimits

0xda13,	// (0x000b2961) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b4c07) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b4c07) call5_swipe_1_pane_g

0xda1f,	// (0x000b296d) call5_swipe_1_pane_t1_ParamLimits

0xda1f,	// (0x000b296d) call5_swipe_1_pane_t1

0xc162,	// (0x000b10b0) call5_swipe_2_pane_g1_ParamLimits

0xc162,	// (0x000b10b0) call5_swipe_2_pane_g1

0xda34,	// (0x000b2982) call5_swipe_2_pane_g2_ParamLimits

0xda34,	// (0x000b2982) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b4c0c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b4c0c) call5_swipe_2_pane_g

0xda40,	// (0x000b298e) call5_swipe_2_pane_t1_ParamLimits

0xda40,	// (0x000b298e) call5_swipe_2_pane_t1

0xda55,	// (0x000b29a3) sc_swipe_pane_g1_ParamLimits

0xda55,	// (0x000b29a3) sc_swipe_pane_g1

0xda62,	// (0x000b29b0) sc_swipe_pane_g2_ParamLimits

0xda62,	// (0x000b29b0) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b4c11) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b4c11) sc_swipe_pane_g

0xda6e,	// (0x000b29bc) sc_swipe_pane_t1_ParamLimits

0xda6e,	// (0x000b29bc) sc_swipe_pane_t1

0x958b,	// (0x000ae4d9) main_cmail_launcher_pane

0x7cee,	// (0x000acc3c) aid_size_cell_cmail_l_ParamLimits

0x7cee,	// (0x000acc3c) aid_size_cell_cmail_l

0x7d08,	// (0x000acc56) grid_cmail_l_pane_ParamLimits

0x7d08,	// (0x000acc56) grid_cmail_l_pane

0x7d23,	// (0x000acc71) cell_cmail_l_pane_ParamLimits

0x7d23,	// (0x000acc71) cell_cmail_l_pane

0x7d49,	// (0x000acc97) cell_cmail_l_pane_g1_ParamLimits

0x7d49,	// (0x000acc97) cell_cmail_l_pane_g1

0x7d55,	// (0x000acca3) cell_cmail_l_pane_t1_ParamLimits

0x7d55,	// (0x000acca3) cell_cmail_l_pane_t1

0xda83,	// (0x000b29d1) cell_cmail_l_pane_t2_ParamLimits

0xda83,	// (0x000b29d1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b4c16) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b4c16) cell_cmail_l_pane_t

0xef7c,	// (0x000b3eca) grid_highlight_pane_cp018_ParamLimits

0xef7c,	// (0x000b3eca) grid_highlight_pane_cp018

0x0341,	// (0x000a528f) main2_pane_ParamLimits

0x0341,	// (0x000a528f) main2_pane

0xee29,	// (0x000b3d77) popup_sp_fs_action_menu_bg_pane_g1

0xee31,	// (0x000b3d7f) popup_sp_fs_action_menu_bg_pane_g2

0xee39,	// (0x000b3d87) popup_sp_fs_action_menu_bg_pane_g3

0xee41,	// (0x000b3d8f) popup_sp_fs_action_menu_bg_pane_g4

0xee49,	// (0x000b3d97) popup_sp_fs_action_menu_bg_pane_g5

0xee51,	// (0x000b3d9f) popup_sp_fs_action_menu_bg_pane_g6

0xee59,	// (0x000b3da7) popup_sp_fs_action_menu_bg_pane_g7

0xee61,	// (0x000b3daf) popup_sp_fs_action_menu_bg_pane_g8

0xee69,	// (0x000b3db7) popup_sp_fs_action_menu_bg_pane_g9

0xee71,	// (0x000b3dbf) popup_sp_fs_action_menu_bg_pane_g10

0xee71,	// (0x000b3dbf) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000b40d4) popup_sp_fs_action_menu_bg_pane_g

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g3_g1

0x1355,	// (0x000a62a3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_t3_g3_g2

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b4186) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b4186) list_medium_line_x2_t3_g3_g

0x136d,	// (0x000a62bb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x136d,	// (0x000a62bb) list_medium_line_x2_t3_g3_t1

0x1382,	// (0x000a62d0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1382,	// (0x000a62d0) list_medium_line_x2_t3_g3_t2

0x1396,	// (0x000a62e4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b418d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b418d) list_medium_line_x2_t3_g3_t

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g2_g1

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b4194) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b4194) list_medium_line_x2_t3_g2_g

0x13ab,	// (0x000a62f9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13ab,	// (0x000a62f9) list_medium_line_x2_t3_g2_t1

0x13c1,	// (0x000a630f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13c1,	// (0x000a630f) list_medium_line_x2_t3_g2_t2

0x13d3,	// (0x000a6321) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13d3,	// (0x000a6321) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b4199) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b4199) list_medium_line_x2_t3_g2_t

0x1349,	// (0x000a6297) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t4_g4_g1

0x13f0,	// (0x000a633e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x13f0,	// (0x000a633e) list_medium_line_x2_t4_g4_g2

0x1355,	// (0x000a62a3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_t4_g4_g3

0x13fc,	// (0x000a634a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13fc,	// (0x000a634a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b41a0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b41a0) list_medium_line_x2_t4_g4_g

0x1408,	// (0x000a6356) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1408,	// (0x000a6356) list_medium_line_x2_t4_g4_t1

0x1422,	// (0x000a6370) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1422,	// (0x000a6370) list_medium_line_x2_t4_g4_t2

0x1438,	// (0x000a6386) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1438,	// (0x000a6386) list_medium_line_x2_t4_g4_t3

0x144d,	// (0x000a639b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x144d,	// (0x000a639b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b41a9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b41a9) list_medium_line_x2_t4_g4_t

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g4_g1

0x13f0,	// (0x000a633e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x13f0,	// (0x000a633e) list_medium_line_x2_t2_g4_g2

0x1355,	// (0x000a62a3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_t2_g4_g3

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b4210) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b4210) list_medium_line_x2_t2_g4_g

0x2403,	// (0x000a7351) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2403,	// (0x000a7351) list_medium_line_x2_t2_g4_t1

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b4219) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b4219) list_medium_line_x2_t2_g4_t

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g3_g1

0x1355,	// (0x000a62a3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_t2_g3_g2

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b4186) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b4186) list_medium_line_x2_t2_g3_g

0x2418,	// (0x000a7366) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2418,	// (0x000a7366) list_medium_line_x2_t2_g3_t1

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b421e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b421e) list_medium_line_x2_t2_g3_t

0x2555,	// (0x000a74a3) main_sp_fs_list_pane_ParamLimits

0x2555,	// (0x000a74a3) main_sp_fs_list_pane

0xbdf2,	// (0x000b0d40) sp_fs_scroll_pane_ParamLimits

0xbdf2,	// (0x000b0d40) sp_fs_scroll_pane

0x2561,	// (0x000a74af) list_medium_line_x2_t3_t1

0x2571,	// (0x000a74bf) list_medium_line_x2_t3_t2

0x257f,	// (0x000a74cd) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b4269) list_medium_line_x2_t3_t

0x258d,	// (0x000a74db) list_medium_line_x3_t4_t1

0x259d,	// (0x000a74eb) list_medium_line_x3_t4_t2

0x25ab,	// (0x000a74f9) list_medium_line_x3_t4_t3

0x257f,	// (0x000a74cd) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b4270) list_medium_line_x3_t4_t

0x25b9,	// (0x000a7507) list_medium_line_x4_t5_t1

0x25c9,	// (0x000a7517) list_medium_line_x4_t5_t2

0x25ab,	// (0x000a74f9) list_medium_line_x4_t5_t3

0x25d7,	// (0x000a7525) list_medium_line_x4_t5_t4

0x257f,	// (0x000a74cd) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b4279) list_medium_line_x4_t5_t

0x1349,	// (0x000a6297) list_medium_line_t4_g4_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_t4_g4_g1

0x25e5,	// (0x000a7533) list_medium_line_t4_g4_g2_ParamLimits

0x25e5,	// (0x000a7533) list_medium_line_t4_g4_g2

0x25f1,	// (0x000a753f) list_medium_line_t4_g4_g3_ParamLimits

0x25f1,	// (0x000a753f) list_medium_line_t4_g4_g3

0x1361,	// (0x000a62af) list_medium_line_t4_g4_g4_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b4284) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b4284) list_medium_line_t4_g4_g

0x25fd,	// (0x000a754b) list_medium_line_t4_g4_t1_ParamLimits

0x25fd,	// (0x000a754b) list_medium_line_t4_g4_t1

0x2612,	// (0x000a7560) list_medium_line_t4_g4_t2_ParamLimits

0x2612,	// (0x000a7560) list_medium_line_t4_g4_t2

0x2627,	// (0x000a7575) list_medium_line_t4_g4_t3_ParamLimits

0x2627,	// (0x000a7575) list_medium_line_t4_g4_t3

0x1396,	// (0x000a62e4) list_medium_line_t4_g4_t4_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b428d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b428d) list_medium_line_t4_g4_t

0x26ef,	// (0x000a763d) chi_dic_find_pane_g1

0x3790,	// (0x000a86de) main_tport_pane

0x660a,	// (0x000ab558) list_medium_line_plain_t1

0x66bc,	// (0x000ab60a) list_medium_line_t2_g2_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t2_g2_g1

0x66c8,	// (0x000ab616) list_medium_line_t2_g2_g2_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b494e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b494e) list_medium_line_t2_g2_g

0x66d4,	// (0x000ab622) list_medium_line_t2_g2_t1_ParamLimits

0x66d4,	// (0x000ab622) list_medium_line_t2_g2_t1

0x66eb,	// (0x000ab639) list_medium_line_t2_g2_t2_ParamLimits

0x66eb,	// (0x000ab639) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b4953) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b4953) list_medium_line_t2_g2_t

0xcf61,	// (0x000b1eaf) aid_sp_fs_list_icon_a_sm

0xef96,	// (0x000b3ee4) aid_sp_fs_list_icon_d

0xcf69,	// (0x000b1eb7) aid_sp_fs_text_primary

0xcf72,	// (0x000b1ec0) aid_sp_fs_text_secondary

0x6d52,	// (0x000abca0) list_medium_line

0x6d52,	// (0x000abca0) list_medium_line_g2

0x6d52,	// (0x000abca0) list_medium_line_g3

0x6d52,	// (0x000abca0) list_medium_line_plain

0x6d52,	// (0x000abca0) list_medium_line_plain_t2

0x6d52,	// (0x000abca0) list_medium_line_plain_t3

0x6d52,	// (0x000abca0) list_medium_line_right_icon

0x6d52,	// (0x000abca0) list_medium_line_right_iconx2

0x6d52,	// (0x000abca0) list_medium_line_t2

0x6d52,	// (0x000abca0) list_medium_line_t2_g2

0x6d52,	// (0x000abca0) list_medium_line_t2_g3

0x6d52,	// (0x000abca0) list_medium_line_t2_right_icon

0x6d52,	// (0x000abca0) list_medium_line_t2_right_iconx2

0x6d52,	// (0x000abca0) list_medium_line_t3

0x6d52,	// (0x000abca0) list_medium_line_t3_g2

0x6d52,	// (0x000abca0) list_medium_line_t3_g3

0x6d52,	// (0x000abca0) list_medium_line_t3_right_iconx2

0x6d5b,	// (0x000abca9) list_medium_line_t4_g4

0x6d52,	// (0x000abca0) list_medium_line_x2

0x6d52,	// (0x000abca0) list_medium_line_x2_t2_g2

0x6d52,	// (0x000abca0) list_medium_line_x2_t2_g3

0x6d52,	// (0x000abca0) list_medium_line_x2_t2_g4

0x6d52,	// (0x000abca0) list_medium_line_x2_t3

0x6d52,	// (0x000abca0) list_medium_line_x2_t3_g2

0x6d52,	// (0x000abca0) list_medium_line_x2_t3_g3

0x6d52,	// (0x000abca0) list_medium_line_x2_t3_g4

0x6d52,	// (0x000abca0) list_medium_line_x2_t4_g2

0x6d52,	// (0x000abca0) list_medium_line_x2_t4_g4

0x6d64,	// (0x000abcb2) list_medium_line_x3

0x6d64,	// (0x000abcb2) list_medium_line_x3_t4

0x6d64,	// (0x000abcb2) list_medium_line_x3_t4_g4

0x6d5b,	// (0x000abca9) list_medium_line_x4_t4

0x6d5b,	// (0x000abca9) list_medium_line_x4_t4_g7

0x6d5b,	// (0x000abca9) list_medium_line_x4_t5

0x6d6d,	// (0x000abcbb) list_single_fs_dyc_pane_ParamLimits

0x6d6d,	// (0x000abcbb) list_single_fs_dyc_pane

0x1349,	// (0x000a6297) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x4_t4_g7_g1

0x74e4,	// (0x000ac432) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74e4,	// (0x000ac432) list_medium_line_x4_t4_g7_g2

0x74f0,	// (0x000ac43e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74f0,	// (0x000ac43e) list_medium_line_x4_t4_g7_g3

0x74ff,	// (0x000ac44d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74ff,	// (0x000ac44d) list_medium_line_x4_t4_g7_g4

0x750b,	// (0x000ac459) list_medium_line_x4_t4_g7_g5_ParamLimits

0x750b,	// (0x000ac459) list_medium_line_x4_t4_g7_g5

0x751a,	// (0x000ac468) list_medium_line_x4_t4_g7_g6_ParamLimits

0x751a,	// (0x000ac468) list_medium_line_x4_t4_g7_g6

0x7529,	// (0x000ac477) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7529,	// (0x000ac477) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b4b1e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b4b1e) list_medium_line_x4_t4_g7_g

0x7535,	// (0x000ac483) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7535,	// (0x000ac483) list_medium_line_x4_t4_g7_t1

0x754a,	// (0x000ac498) list_medium_line_x4_t4_g7_t2_ParamLimits

0x754a,	// (0x000ac498) list_medium_line_x4_t4_g7_t2

0x755f,	// (0x000ac4ad) list_medium_line_x4_t4_g7_t3_ParamLimits

0x755f,	// (0x000ac4ad) list_medium_line_x4_t4_g7_t3

0x7574,	// (0x000ac4c2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7574,	// (0x000ac4c2) list_medium_line_x4_t4_g7_t4

0x7586,	// (0x000ac4d4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7586,	// (0x000ac4d4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b4b2d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b4b2d) list_medium_line_x4_t4_g7_t

0x7598,	// (0x000ac4e6) list_single_dyc_row_pane_ParamLimits

0x7598,	// (0x000ac4e6) list_single_dyc_row_pane

0x7c6f,	// (0x000acbbd) call5_gesture_pane_ParamLimits

0x7c6f,	// (0x000acbbd) call5_gesture_pane

0x7cc5,	// (0x000acc13) call5_windows_pane_ParamLimits

0x7cc5,	// (0x000acc13) call5_windows_pane

0x7d6b,	// (0x000accb9) call5_swipe_1_pane_cp_ParamLimits

0x7d6b,	// (0x000accb9) call5_swipe_1_pane_cp

0x7d77,	// (0x000accc5) call5_swipe_2_pane_cp_ParamLimits

0x7d77,	// (0x000accc5) call5_swipe_2_pane_cp

0xa6d0,	// (0x000af61e) call5_image_pane_cp

0x7d83,	// (0x000accd1) popup_call5_audio_first_window_cp_ParamLimits

0x7d83,	// (0x000accd1) popup_call5_audio_first_window_cp

0xda55,	// (0x000b29a3) call5_swipe_1_pane_g1_cp_ParamLimits

0xda55,	// (0x000b29a3) call5_swipe_1_pane_g1_cp

0xda95,	// (0x000b29e3) call5_swipe_1_pane_g2_cp

0xda6e,	// (0x000b29bc) call5_swipe_1_pane_t1_cp_ParamLimits

0xda6e,	// (0x000b29bc) call5_swipe_1_pane_t1_cp

0xda55,	// (0x000b29a3) call5_swipe_2_pane_g1_cp_ParamLimits

0xda55,	// (0x000b29a3) call5_swipe_2_pane_g1_cp

0xda9d,	// (0x000b29eb) call5_swipe_2_pane_g2_cp

0xdaa5,	// (0x000b29f3) call5_swipe_2_pane_t1_cp_ParamLimits

0xdaa5,	// (0x000b29f3) call5_swipe_2_pane_t1_cp

0xef7c,	// (0x000b3eca) main_sp_fs_email_pane

0xdaba,	// (0x000b2a08) main_sp_fs_listscroll_pane_te

0x7d91,	// (0x000accdf) popup_sp_fs_action_menu_pane_ParamLimits

0x7d91,	// (0x000accdf) popup_sp_fs_action_menu_pane

0xbef6,	// (0x000b0e44) bg_sp_fs_ctrlbar_pane_g1

0xc52d,	// (0x000b147b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc53f,	// (0x000b148d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc536,	// (0x000b1484) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbef6,	// (0x000b0e44) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b4c1b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbccf,	// (0x000b0c1d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbccf,	// (0x000b0c1d) bg_sp_fs_ctrlbar_ddmenu_pane

0xdac3,	// (0x000b2a11) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdac3,	// (0x000b2a11) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdacf,	// (0x000b2a1d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdacf,	// (0x000b2a1d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b4c24) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b4c24) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdadb,	// (0x000b2a29) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdadb,	// (0x000b2a29) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7dd5,	// (0x000acd23) list_medium_line_t2_right_icon_g1

0x7ddd,	// (0x000acd2b) list_medium_line_t2_right_icon_t1

0x7ded,	// (0x000acd3b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b4c29) list_medium_line_t2_right_icon_t

0xbae2,	// (0x000b0a30) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbae2,	// (0x000b0a30) bg_sp_fs_ctrlbar_pane

0x7e47,	// (0x000acd95) main_sp_fs_ctrlbar_button_pane_cp01

0x7e51,	// (0x000acd9f) main_sp_fs_ctrlbar_ddmenu_pane

0xdb2d,	// (0x000b2a7b) main_sp_fs_ctrlbar_pane_g1

0xdb39,	// (0x000b2a87) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b4c2e) main_sp_fs_ctrlbar_pane_g

0xdb45,	// (0x000b2a93) main_sp_fs_ctrlbar_pane_t1

0x7e5b,	// (0x000acda9) main_sp_fs_ctrlbar_pane

0x7e7f,	// (0x000acdcd) main_sp_fs_listscroll_pane_te_cp01

0x7e9f,	// (0x000acded) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e9f,	// (0x000acded) popup_sp_fs_action_menu_pane_cp01

0xef7c,	// (0x000b3eca) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xef7c,	// (0x000b3eca) bg_sp_fs_highlight_list_pane_cp01

0xdb75,	// (0x000b2ac3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdb75,	// (0x000b2ac3) sp_fs_action_menu_list_gene_pane_g1

0xdb84,	// (0x000b2ad2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb84,	// (0x000b2ad2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b4c38) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b4c38) sp_fs_action_menu_list_gene_pane_g

0xdb91,	// (0x000b2adf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdb91,	// (0x000b2adf) sp_fs_action_menu_list_gene_pane_t1

0xdba9,	// (0x000b2af7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdba9,	// (0x000b2af7) sp_fs_action_menu_list_gene_pane

0xdbca,	// (0x000b2b18) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdbca,	// (0x000b2b18) popup_sp_fs_action_menu_bg_pane

0xdbd8,	// (0x000b2b26) sp_fs_action_menu_list_pane_ParamLimits

0xdbd8,	// (0x000b2b26) sp_fs_action_menu_list_pane

0x7ecf,	// (0x000ace1d) sp_fs_scroll_pane_cp01_ParamLimits

0x7ecf,	// (0x000ace1d) sp_fs_scroll_pane_cp01

0x7ef5,	// (0x000ace43) list_medium_line_plain_t2_t1

0x7f05,	// (0x000ace53) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b4c3d) list_medium_line_plain_t2_t

0x7f15,	// (0x000ace63) list_medium_line_plain_t3_t1

0x7f25,	// (0x000ace73) list_medium_line_plain_t3_t2

0x7f33,	// (0x000ace81) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b4c42) list_medium_line_plain_t3_t

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t2_g2_g1

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b4194) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b4194) list_medium_line_x2_t2_g2_g

0x25fd,	// (0x000a754b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25fd,	// (0x000a754b) list_medium_line_x2_t2_g2_t1

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b4c49) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b4c49) list_medium_line_x2_t2_g2_t

0x1349,	// (0x000a6297) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t4_g2_g1

0x7f41,	// (0x000ace8f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f41,	// (0x000ace8f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b4c4e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b4c4e) list_medium_line_x2_t4_g2_g

0x7f53,	// (0x000acea1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f53,	// (0x000acea1) list_medium_line_x2_t4_g2_t1

0x7f6d,	// (0x000acebb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f6d,	// (0x000acebb) list_medium_line_x2_t4_g2_t2

0x7f82,	// (0x000aced0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f82,	// (0x000aced0) list_medium_line_x2_t4_g2_t3

0x1396,	// (0x000a62e4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b4c53) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b4c53) list_medium_line_x2_t4_g2_t

0x7f97,	// (0x000acee5) list_medium_line_t3_right_iconx2_g1

0x7dd5,	// (0x000acd23) list_medium_line_t3_right_iconx2_g2

0x7f9f,	// (0x000aceed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b4c5c) list_medium_line_t3_right_iconx2_g

0x7fa9,	// (0x000acef7) list_medium_line_t3_right_iconx2_t1

0x7fb9,	// (0x000acf07) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b4c63) list_medium_line_t3_right_iconx2_t

0x1349,	// (0x000a6297) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x3_t4_g4_g1

0x1355,	// (0x000a62a3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x3_t4_g4_g2

0x25e5,	// (0x000a7533) list_medium_line_x3_t4_g4_g3_ParamLimits

0x25e5,	// (0x000a7533) list_medium_line_x3_t4_g4_g3

0x7fc7,	// (0x000acf15) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fc7,	// (0x000acf15) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b4c68) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b4c68) list_medium_line_x3_t4_g4_g

0x7fd3,	// (0x000acf21) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fd3,	// (0x000acf21) list_medium_line_x3_t4_g4_t1

0x7fea,	// (0x000acf38) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fea,	// (0x000acf38) list_medium_line_x3_t4_g4_t2

0x2612,	// (0x000a7560) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2612,	// (0x000a7560) list_medium_line_x3_t4_g4_t3

0x8005,	// (0x000acf53) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8005,	// (0x000acf53) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b4c71) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b4c71) list_medium_line_x3_t4_g4_t

0x8022,	// (0x000acf70) list_single_dyc_row_text_pane_t1_ParamLimits

0x8022,	// (0x000acf70) list_single_dyc_row_text_pane_t1

0x806b,	// (0x000acfb9) list_single_dyc_row_text_pane_t2_ParamLimits

0x806b,	// (0x000acfb9) list_single_dyc_row_text_pane_t2

0xdbfa,	// (0x000b2b48) list_single_dyc_row_text_pane_t3_ParamLimits

0xdbfa,	// (0x000b2b48) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b4c7a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b4c7a) list_single_dyc_row_text_pane_t

0xdc1e,	// (0x000b2b6c) list_single_dyc_row_pane_g1_ParamLimits

0xdc1e,	// (0x000b2b6c) list_single_dyc_row_pane_g1

0xdc2a,	// (0x000b2b78) list_single_dyc_row_pane_g2_ParamLimits

0xdc2a,	// (0x000b2b78) list_single_dyc_row_pane_g2

0xdc36,	// (0x000b2b84) list_single_dyc_row_pane_g3_ParamLimits

0xdc36,	// (0x000b2b84) list_single_dyc_row_pane_g3

0xdc42,	// (0x000b2b90) list_single_dyc_row_pane_g4_ParamLimits

0xdc42,	// (0x000b2b90) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b4c87) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b4c87) list_single_dyc_row_pane_g

0xdc4e,	// (0x000b2b9c) list_single_dyc_row_text_pane_ParamLimits

0xdc4e,	// (0x000b2b9c) list_single_dyc_row_text_pane

0xe653,	// (0x000b35a1) bg_sp_fs_scroll_pane

0xdc6d,	// (0x000b2bbb) thumb_sp_fs_scroll_pane

0x66bc,	// (0x000ab60a) list_medium_line_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_g1

0x81a0,	// (0x000ad0ee) list_medium_line_t1_ParamLimits

0x81a0,	// (0x000ad0ee) list_medium_line_t1

0x1349,	// (0x000a6297) list_medium_line_x2_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_g1

0x1355,	// (0x000a62a3) list_medium_line_x2_g2_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b4c90) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b4c90) list_medium_line_x2_g

0xdc76,	// (0x000b2bc4) list_medium_line_x2_t1_ParamLimits

0xdc76,	// (0x000b2bc4) list_medium_line_x2_t1

0x1349,	// (0x000a6297) list_medium_line_x3_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x3_g1

0x1355,	// (0x000a62a3) list_medium_line_x3_g2_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b4c90) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b4c90) list_medium_line_x3_g

0xdc76,	// (0x000b2bc4) list_medium_line_x3_t1_ParamLimits

0xdc76,	// (0x000b2bc4) list_medium_line_x3_t1

0xdc8c,	// (0x000b2bda) thumb_sp_fs_scroll_pane_g1

0xdc95,	// (0x000b2be3) thumb_sp_fs_scroll_pane_g2

0xdc9e,	// (0x000b2bec) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4c95) thumb_sp_fs_scroll_pane_g

0xdc8c,	// (0x000b2bda) bg_sp_fs_scroll_pane_g1

0xdc95,	// (0x000b2be3) bg_sp_fs_scroll_pane_g2

0xdc9e,	// (0x000b2bec) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4c95) bg_sp_fs_scroll_pane_g

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1349,	// (0x000a6297) list_medium_line_x2_t3_g4_g1

0x13f0,	// (0x000a633e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x13f0,	// (0x000a633e) list_medium_line_x2_t3_g4_g2

0x1355,	// (0x000a62a3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1355,	// (0x000a62a3) list_medium_line_x2_t3_g4_g3

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1361,	// (0x000a62af) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b4210) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b4210) list_medium_line_x2_t3_g4_g

0x81b5,	// (0x000ad103) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81b5,	// (0x000ad103) list_medium_line_x2_t3_g4_t1

0x81cf,	// (0x000ad11d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81cf,	// (0x000ad11d) list_medium_line_x2_t3_g4_t2

0x1396,	// (0x000a62e4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1396,	// (0x000a62e4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b4c9c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b4c9c) list_medium_line_x2_t3_g4_t

0x66bc,	// (0x000ab60a) list_medium_line_g2_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_g2_g1

0x66c8,	// (0x000ab616) list_medium_line_g2_g2_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b494e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b494e) list_medium_line_g2_g

0x81e9,	// (0x000ad137) list_medium_line_g2_t1_ParamLimits

0x81e9,	// (0x000ad137) list_medium_line_g2_t1

0x66bc,	// (0x000ab60a) list_medium_line_t3_g2_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t3_g2_g1

0x66c8,	// (0x000ab616) list_medium_line_t3_g2_g2_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b494e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b494e) list_medium_line_t3_g2_g

0x81fe,	// (0x000ad14c) list_medium_line_t3_g2_t1_ParamLimits

0x81fe,	// (0x000ad14c) list_medium_line_t3_g2_t1

0x8215,	// (0x000ad163) list_medium_line_t3_g2_t2_ParamLimits

0x8215,	// (0x000ad163) list_medium_line_t3_g2_t2

0x822a,	// (0x000ad178) list_medium_line_t3_g2_t3_ParamLimits

0x822a,	// (0x000ad178) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b4ca3) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b4ca3) list_medium_line_t3_g2_t

0x7dd5,	// (0x000acd23) list_medium_line_right_icon_g1

0x8243,	// (0x000ad191) list_medium_line_right_icon_t1

0x66bc,	// (0x000ab60a) list_medium_line_t2_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t2_g1

0x8251,	// (0x000ad19f) list_medium_line_t2_t1_ParamLimits

0x8251,	// (0x000ad19f) list_medium_line_t2_t1

0x826b,	// (0x000ad1b9) list_medium_line_t2_t2_ParamLimits

0x826b,	// (0x000ad1b9) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b4caa) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b4caa) list_medium_line_t2_t

0x66bc,	// (0x000ab60a) list_medium_line_t3_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t3_g1

0x8284,	// (0x000ad1d2) list_medium_line_t3_t1_ParamLimits

0x8284,	// (0x000ad1d2) list_medium_line_t3_t1

0x829b,	// (0x000ad1e9) list_medium_line_t3_t2_ParamLimits

0x829b,	// (0x000ad1e9) list_medium_line_t3_t2

0x82b0,	// (0x000ad1fe) list_medium_line_t3_t3_ParamLimits

0x82b0,	// (0x000ad1fe) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b4caf) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b4caf) list_medium_line_t3_t

0x66bc,	// (0x000ab60a) list_medium_line_g3_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_g3_g1

0x82c2,	// (0x000ad210) list_medium_line_g3_g2_ParamLimits

0x82c2,	// (0x000ad210) list_medium_line_g3_g2

0x66c8,	// (0x000ab616) list_medium_line_g3_g3_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b4cb6) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b4cb6) list_medium_line_g3_g

0x82ce,	// (0x000ad21c) list_medium_line_g3_t1_ParamLimits

0x82ce,	// (0x000ad21c) list_medium_line_g3_t1

0x66bc,	// (0x000ab60a) list_medium_line_t2_g3_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t2_g3_g1

0x82c2,	// (0x000ad210) list_medium_line_t2_g3_g2_ParamLimits

0x82c2,	// (0x000ad210) list_medium_line_t2_g3_g2

0x66c8,	// (0x000ab616) list_medium_line_t2_g3_g3_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b4cb6) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b4cb6) list_medium_line_t2_g3_g

0x82e3,	// (0x000ad231) list_medium_line_t2_g3_t1_ParamLimits

0x82e3,	// (0x000ad231) list_medium_line_t2_g3_t1

0x82fa,	// (0x000ad248) list_medium_line_t2_g3_t2_ParamLimits

0x82fa,	// (0x000ad248) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b4cbd) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b4cbd) list_medium_line_t2_g3_t

0x66bc,	// (0x000ab60a) list_medium_line_t3_g3_g1_ParamLimits

0x66bc,	// (0x000ab60a) list_medium_line_t3_g3_g1

0x82c2,	// (0x000ad210) list_medium_line_t3_g3_g2_ParamLimits

0x82c2,	// (0x000ad210) list_medium_line_t3_g3_g2

0x66c8,	// (0x000ab616) list_medium_line_t3_g3_g3_ParamLimits

0x66c8,	// (0x000ab616) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b4cb6) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b4cb6) list_medium_line_t3_g3_g

0x8315,	// (0x000ad263) list_medium_line_t3_g3_t1_ParamLimits

0x8315,	// (0x000ad263) list_medium_line_t3_g3_t1

0x8329,	// (0x000ad277) list_medium_line_t3_g3_t2_ParamLimits

0x8329,	// (0x000ad277) list_medium_line_t3_g3_t2

0x833b,	// (0x000ad289) list_medium_line_t3_g3_t3_ParamLimits

0x833b,	// (0x000ad289) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b4cc2) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b4cc2) list_medium_line_t3_g3_t

0x7f97,	// (0x000acee5) list_medium_line_right_iconx2_g1

0x7dd5,	// (0x000acd23) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4cc9) list_medium_line_right_iconx2_g

0x834f,	// (0x000ad29d) list_medium_line_right_iconx2_t1

0x7f97,	// (0x000acee5) list_medium_line_t2_right_iconx2_g1

0x7dd5,	// (0x000acd23) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4cc9) list_medium_line_t2_right_iconx2_g

0x835d,	// (0x000ad2ab) list_medium_line_t2_right_iconx2_t1

0x836d,	// (0x000ad2bb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b4cce) list_medium_line_t2_right_iconx2_t

0x837f,	// (0x000ad2cd) list_medium_line_x4_t4_t1

0x838d,	// (0x000ad2db) list_medium_line_x4_t4_t2

0x839d,	// (0x000ad2eb) list_medium_line_x4_t4_t3

0x83ad,	// (0x000ad2fb) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b4cd3) list_medium_line_x4_t4_t

0x8400,	// (0x000ad34e) tport_appsw_pane_ParamLimits

0x8400,	// (0x000ad34e) tport_appsw_pane

0x8418,	// (0x000ad366) tport_contact_pane_ParamLimits

0x8418,	// (0x000ad366) tport_contact_pane

0x8430,	// (0x000ad37e) tport_listscroll_pane_ParamLimits

0x8430,	// (0x000ad37e) tport_listscroll_pane

0x844a,	// (0x000ad398) cell_tport_appsw_pane_ParamLimits

0x844a,	// (0x000ad398) cell_tport_appsw_pane

0xc9aa,	// (0x000b18f8) tport_appsw_pane_g1_ParamLimits

0xc9aa,	// (0x000b18f8) tport_appsw_pane_g1

0xdca7,	// (0x000b2bf5) tport_contact_pane_g1

0xd564,	// (0x000b24b2) tport_contact_pane_t1

0xdcb0,	// (0x000b2bfe) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b4cdc) tport_contact_pane_t

0xdcbe,	// (0x000b2c0c) list_tport_pane

0xdcc7,	// (0x000b2c15) scroll_pane_cp_030

0x8492,	// (0x000ad3e0) cell_tport_appsw_pane_g1

0x84a2,	// (0x000ad3f0) cell_tport_appsw_pane_t1

0x84b0,	// (0x000ad3fe) grid_highlight_pane_cp019

0x84b8,	// (0x000ad406) list_tport_double_graphic_pane_ParamLimits

0x84b8,	// (0x000ad406) list_tport_double_graphic_pane

0xef7c,	// (0x000b3eca) list_highlight_pane_cp023_ParamLimits

0xef7c,	// (0x000b3eca) list_highlight_pane_cp023

0x84c5,	// (0x000ad413) list_tport_double_graphic_pane_g1_ParamLimits

0x84c5,	// (0x000ad413) list_tport_double_graphic_pane_g1

0x84d2,	// (0x000ad420) list_tport_double_graphic_pane_t1_ParamLimits

0x84d2,	// (0x000ad420) list_tport_double_graphic_pane_t1

0x84e7,	// (0x000ad435) list_tport_double_graphic_pane_t2_ParamLimits

0x84e7,	// (0x000ad435) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b4ce8) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b4ce8) list_tport_double_graphic_pane_t

0xe653,	// (0x000b35a1) main_cale_note_pane

0x5e64,	// (0x000aadb2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e64,	// (0x000aadb2) cell_vitu2_function_top_wide_pane_cp01

0x78fb,	// (0x000ac849) wait_bar_pane_cp05_ParamLimits

0xef7c,	// (0x000b3eca) listscroll_cmail_pane

0xdcd0,	// (0x000b2c1e) list_cmail_pane

0xca1f,	// (0x000b196d) list_cmail_body_pane

0x84f9,	// (0x000ad447) list_single_cmail_header_caption_pane

0x8510,	// (0x000ad45e) list_single_cmail_header_detail_pane_ParamLimits

0x8510,	// (0x000ad45e) list_single_cmail_header_detail_pane

0xdce0,	// (0x000b2c2e) list_single_cmail_header_caption_pane_t1

0x853a,	// (0x000ad488) list_single_cmail_header_detail_pane_g1_ParamLimits

0x853a,	// (0x000ad488) list_single_cmail_header_detail_pane_g1

0xefa7,	// (0x000b3ef5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xefa7,	// (0x000b3ef5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b4ced) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b4ced) list_single_cmail_header_detail_pane_g

0x8552,	// (0x000ad4a0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8552,	// (0x000ad4a0) list_single_cmail_header_detail_pane_t1

0x8590,	// (0x000ad4de) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8590,	// (0x000ad4de) list_single_cmail_header_editor_pane_bg

0xd705,	// (0x000b2653) list_cmail_body_pane_g1

0xdd28,	// (0x000b2c76) list_cmail_body_pane_t1

0xc9e7,	// (0x000b1935) list_single_cmail_header_editor_pane_bg_g1

0x9866,	// (0x000ae7b4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc9f7,	// (0x000b1945) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc9ef,	// (0x000b193d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcc41,	// (0x000b1b8f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca17,	// (0x000b1965) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xca07,	// (0x000b1955) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca0f,	// (0x000b195d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9846,	// (0x000ae794) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85a9,	// (0x000ad4f7) calenote_gesture_pane_ParamLimits

0x85a9,	// (0x000ad4f7) calenote_gesture_pane

0x85c9,	// (0x000ad517) calenote_window_pane_ParamLimits

0x85c9,	// (0x000ad517) calenote_window_pane

0xdd36,	// (0x000b2c84) popup_note_window_cp01

0x85e5,	// (0x000ad533) calenote_swipe_1_pane_ParamLimits

0x85e5,	// (0x000ad533) calenote_swipe_1_pane

0x7d77,	// (0x000accc5) calenote_swipe_2_pane_ParamLimits

0x7d77,	// (0x000accc5) calenote_swipe_2_pane

0xda55,	// (0x000b29a3) calenote_swipe_1_pane_g1_ParamLimits

0xda55,	// (0x000b29a3) calenote_swipe_1_pane_g1

0xda62,	// (0x000b29b0) calenote_swipe_1_pane_g2_ParamLimits

0xda62,	// (0x000b29b0) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b4c11) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b4c11) calenote_swipe_1_pane_g

0xdd48,	// (0x000b2c96) calenote_swipe_1_pane_t1_ParamLimits

0xdd48,	// (0x000b2c96) calenote_swipe_1_pane_t1

0xda55,	// (0x000b29a3) calenote_swipe_2_pane_g1_ParamLimits

0xda55,	// (0x000b29a3) calenote_swipe_2_pane_g1

0xdd67,	// (0x000b2cb5) calenote_swipe_2_pane_g2_ParamLimits

0xdd67,	// (0x000b2cb5) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b4cf9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b4cf9) calenote_swipe_2_pane_g

0xdd73,	// (0x000b2cc1) calenote_swipe_2_pane_t1_ParamLimits

0xdd73,	// (0x000b2cc1) calenote_swipe_2_pane_t1

0xe653,	// (0x000b35a1) main_mup_navstr_pane

0x4b41,	// (0x000a9a8f) main_mup3_pane_t7_ParamLimits

0x4b41,	// (0x000a9a8f) main_mup3_pane_t7

0x9f33,	// (0x000aee81) main_mp4_pane_g6_ParamLimits

0x9f33,	// (0x000aee81) main_mp4_pane_g6

0xa0d7,	// (0x000af025) main_image3_pane_t4_ParamLimits

0xa0d7,	// (0x000af025) main_image3_pane_t4

0x85fa,	// (0x000ad548) popup_navstr_preview_pane_ParamLimits

0x85fa,	// (0x000ad548) popup_navstr_preview_pane

0x860e,	// (0x000ad55c) scroll_navstr_pane_ParamLimits

0x860e,	// (0x000ad55c) scroll_navstr_pane

0xe653,	// (0x000b35a1) bg_popup_preview_window_pane_cp04

0xdd9a,	// (0x000b2ce8) popup_navstr_preview_pane_t1

0x8622,	// (0x000ad570) scroll_navstr_pane_g1_ParamLimits

0x8622,	// (0x000ad570) scroll_navstr_pane_g1

0x8636,	// (0x000ad584) scroll_navstr_pane_t1_ParamLimits

0x8636,	// (0x000ad584) scroll_navstr_pane_t1

0xdd3f,	// (0x000b2c8d) bg_button_pane_cp014

0xdd3f,	// (0x000b2c8d) bg_button_pane_cp030

0x7c15,	// (0x000acb63) list_double_fisheye_pane_g4_ParamLimits

0x7c15,	// (0x000acb63) list_double_fisheye_pane_g4

0x7c21,	// (0x000acb6f) list_double_fisheye_pane_g5_ParamLimits

0x7c21,	// (0x000acb6f) list_double_fisheye_pane_g5

0xbdf2,	// (0x000b0d40) sp_fs_scroll_pane_cp03

0xdb2d,	// (0x000b2a7b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdb39,	// (0x000b2a87) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b4c2e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb45,	// (0x000b2a93) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdcd8,	// (0x000b2c26) sp_fs_scroll_pane_cp02

0xee94,	// (0x000b3de2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xee94,	// (0x000b3de2) popup_sp_fs_calendar_preview_list_single_pane

0xe653,	// (0x000b35a1) main_cam6_pano_pane

0x957d,	// (0x000ae4cb) main_mup3_pane_ParamLimits

0xe653,	// (0x000b35a1) main_phacti_pane

0x77ce,	// (0x000ac71c) bg_button_pane_cp11

0x77e8,	// (0x000ac736) main_mobtv_info_pane_g2_ParamLimits

0x77e8,	// (0x000ac736) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b4b8e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b4b8e) main_mobtv_info_pane_g

0x79c5,	// (0x000ac913) sc_clock_pane_t5_ParamLimits

0x79c5,	// (0x000ac913) sc_clock_pane_t5

0x7a80,	// (0x000ac9ce) main_radioblah_pane_g1_ParamLimits

0xd9a1,	// (0x000b28ef) main_radioblah_pane_t3_ParamLimits

0xd9a1,	// (0x000b28ef) main_radioblah_pane_t3

0xd9b9,	// (0x000b2907) main_radioblah_pane_t4_ParamLimits

0xd9b9,	// (0x000b2907) main_radioblah_pane_t4

0x7aa8,	// (0x000ac9f6) main_radioblah_text_pane_ParamLimits

0x7aa8,	// (0x000ac9f6) main_radioblah_text_pane

0x7aba,	// (0x000aca08) main_radioblah_info_pane_g1_ParamLimits

0x7b53,	// (0x000acaa1) main_radioblah_info_pane_t4_ParamLimits

0x7b53,	// (0x000acaa1) main_radioblah_info_pane_t4

0xef7c,	// (0x000b3eca) main_sp_fs_calendar_pane

0x864d,	// (0x000ad59b) main_phacti_pane_g1

0x8655,	// (0x000ad5a3) phacti_note_pane_ParamLimits

0x8655,	// (0x000ad5a3) phacti_note_pane

0xddb1,	// (0x000b2cff) phacti_term_pane_ParamLimits

0xddb1,	// (0x000b2cff) phacti_term_pane

0xddc6,	// (0x000b2d14) phacti_note_pane_t1_ParamLimits

0xddc6,	// (0x000b2d14) phacti_note_pane_t1

0xdddd,	// (0x000b2d2b) phacti_term_pane_g1

0xdde5,	// (0x000b2d33) phacti_term_pane_t1_ParamLimits

0xdde5,	// (0x000b2d33) phacti_term_pane_t1

0xde0f,	// (0x000b2d5d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9667,	// (0x000ae5b5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b4d03) popup_sp_fs_calendar_preview_list_single_pane_g

0xde17,	// (0x000b2d65) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde17,	// (0x000b2d65) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde2c,	// (0x000b2d7a) aid_popup_sp_fs_bg_corner_pane

0xbef6,	// (0x000b0e44) popup_sp_fs_calendar_preview_bg_pane_g1

0xe653,	// (0x000b35a1) popup_sp_fs_calendar_preview_bg_pane

0xde34,	// (0x000b2d82) popup_sp_fs_calendar_preview_list_pane

0xbae2,	// (0x000b0a30) bg_main_sp_fs_cale_pane_ParamLimits

0xbae2,	// (0x000b0a30) bg_main_sp_fs_cale_pane

0xde3c,	// (0x000b2d8a) listscroll_cale_mrui_pane_ParamLimits

0xde3c,	// (0x000b2d8a) listscroll_cale_mrui_pane

0xca6b,	// (0x000b19b9) listscroll_sp_fs_schedule_track_pane

0xde51,	// (0x000b2d9f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde51,	// (0x000b2d9f) main_sp_fs_ctrlbar_pane_cp01

0xde64,	// (0x000b2db2) main_sp_fs_ribbon_pane

0xde6c,	// (0x000b2dba) popup_sp_fs_cale_preview_window

0x86ca,	// (0x000ad618) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86ca,	// (0x000ad618) list_single_sp_fs_schedule_track_pane

0xef7c,	// (0x000b3eca) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xef7c,	// (0x000b3eca) bg_sp_fs_highlight_list_pane_cp03

0x86de,	// (0x000ad62c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86de,	// (0x000ad62c) list_single_sp_fs_schedule_track_pane_g1

0x86ea,	// (0x000ad638) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x86ea,	// (0x000ad638) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b4d08) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b4d08) list_single_sp_fs_schedule_track_pane_g

0x86f6,	// (0x000ad644) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86f6,	// (0x000ad644) list_single_sp_fs_schedule_track_pane_t1

0x8710,	// (0x000ad65e) sp_fs_schedule_track_pane_ParamLimits

0x8710,	// (0x000ad65e) sp_fs_schedule_track_pane

0xde7e,	// (0x000b2dcc) sp_fs_schedule_track_pane_g1

0xde86,	// (0x000b2dd4) sp_fs_schedule_track_pane_g2

0xde8e,	// (0x000b2ddc) sp_fs_schedule_track_pane_g3

0xde96,	// (0x000b2de4) sp_fs_schedule_track_pane_g4

0xde9e,	// (0x000b2dec) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b4d0d) sp_fs_schedule_track_pane_g

0xc9e7,	// (0x000b1935) bg_sp_fs_schedule_viewer_highlight_g1

0x9866,	// (0x000ae7b4) bg_sp_fs_schedule_viewer_highlight_g2

0xc9ef,	// (0x000b193d) bg_sp_fs_schedule_viewer_highlight_g3

0xc9f7,	// (0x000b1945) bg_sp_fs_schedule_viewer_highlight_g4

0xcc41,	// (0x000b1b8f) bg_sp_fs_schedule_viewer_highlight_g5

0xca07,	// (0x000b1955) bg_sp_fs_schedule_viewer_highlight_g6

0xca0f,	// (0x000b195d) bg_sp_fs_schedule_viewer_highlight_g7

0xca17,	// (0x000b1965) bg_sp_fs_schedule_viewer_highlight_g8

0x9846,	// (0x000ae794) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b4d18) bg_sp_fs_schedule_viewer_highlight_g

0xe653,	// (0x000b35a1) bg_main_sp_fs_ribbon_pane

0x8721,	// (0x000ad66f) main_sp_fs_ribbon_pane_g1

0xdea6,	// (0x000b2df4) main_sp_fs_ribbon_pane_t1

0x872a,	// (0x000ad678) main_sp_fs_ribbon_pane_t2

0xdeb5,	// (0x000b2e03) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b4d2b) main_sp_fs_ribbon_pane_t

0xdec4,	// (0x000b2e12) main_sp_fs_ribbon_scheduler_pane

0xdecc,	// (0x000b2e1a) bg_main_sp_fs_ribbon_pane_g1

0xded5,	// (0x000b2e23) bg_main_sp_fs_ribbon_pane_g2

0xdede,	// (0x000b2e2c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b4d32) bg_main_sp_fs_ribbon_pane_g

0xdee6,	// (0x000b2e34) main_sp_fs_ribbon_scheduler_pane_g1

0xdeef,	// (0x000b2e3d) main_sp_fs_ribbon_scheduler_pane_g2

0xdef8,	// (0x000b2e46) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b4d39) main_sp_fs_ribbon_scheduler_pane_g

0xdf01,	// (0x000b2e4f) list_cale_mrui_pane

0x8739,	// (0x000ad687) sp_fs_scroll_pane_cp07_ParamLimits

0x8739,	// (0x000ad687) sp_fs_scroll_pane_cp07

0x8755,	// (0x000ad6a3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8755,	// (0x000ad6a3) bg_sp_fs_schedule_viewer_highlight

0xdf0e,	// (0x000b2e5c) list_single_sp_fs_schedule_track_pane_cp01

0xdf16,	// (0x000b2e64) list_sp_fs_schedule_track_pane

0xdf1e,	// (0x000b2e6c) sp_fs_scroll_pane_cp06_ParamLimits

0xdf1e,	// (0x000b2e6c) sp_fs_scroll_pane_cp06

0xbef6,	// (0x000b0e44) bgmain_sp_fs_calendar_pane_g1

0x8765,	// (0x000ad6b3) list_single_cale_mrui_pane_ParamLimits

0x8765,	// (0x000ad6b3) list_single_cale_mrui_pane

0xdf30,	// (0x000b2e7e) list_single_cale_mrui_row_pane_ParamLimits

0xdf30,	// (0x000b2e7e) list_single_cale_mrui_row_pane

0xdf3d,	// (0x000b2e8b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf3d,	// (0x000b2e8b) list_single_cale_mrui_row_pane_g1

0xdf82,	// (0x000b2ed0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdf82,	// (0x000b2ed0) list_single_cale_mrui_row_pane_t1

0x8786,	// (0x000ad6d4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8786,	// (0x000ad6d4) list_single_cale_mrui_row_pane_t2

0xdf94,	// (0x000b2ee2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdf94,	// (0x000b2ee2) list_single_cale_mrui_row_pane_t3

0xdfc3,	// (0x000b2f11) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdfc3,	// (0x000b2f11) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b4d47) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b4d47) list_single_cale_mrui_row_pane_t

0x87ee,	// (0x000ad73c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87ee,	// (0x000ad73c) list_single_cmail_header_editor_pane_bg_cp01

0x8814,	// (0x000ad762) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8814,	// (0x000ad762) list_single_cmail_header_editor_pane_bg_cp02

0x8834,	// (0x000ad782) main_radioblah_text_pane_t1_ParamLimits

0x8834,	// (0x000ad782) main_radioblah_text_pane_t1

0xdff2,	// (0x000b2f40) cam6_indi_pane_cp01

0xdffa,	// (0x000b2f48) cam6_mode_pane_cp01

0xe002,	// (0x000b2f50) cam6_pano_pane

0xe00b,	// (0x000b2f59) cam6_zoom_pane_cp01

0xe013,	// (0x000b2f61) cam6_pano_image_pane

0xe01e,	// (0x000b2f6c) cam6_pano_pane_g1

0xd705,	// (0x000b2653) cam6_pano_pane_g2

0xe027,	// (0x000b2f75) cam6_pano_pane_g3

0xe030,	// (0x000b2f7e) cam6_pano_pane_g4

0xc51a,	// (0x000b1468) cam6_pano_pane_g5

0xe039,	// (0x000b2f87) cam6_pano_pane_g6

0xe043,	// (0x000b2f91) cam6_pano_pane_g7

0xe04b,	// (0x000b2f99) cam6_pano_pane_g8

0xe054,	// (0x000b2fa2) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b4d50) cam6_pano_pane_g

0xe653,	// (0x000b35a1) main_browser_tag_pane

0xdd92,	// (0x000b2ce0) grid_navstr_albumart_pane

0xe05f,	// (0x000b2fad) cell_navstr_albumart_pane_ParamLimits

0xe05f,	// (0x000b2fad) cell_navstr_albumart_pane

0xe07f,	// (0x000b2fcd) cell_navstr_albumart_pane_g1

0xb8f3,	// (0x000b0841) cell_navstr_albumart_pane_g2

0xb903,	// (0x000b0851) cell_navstr_albumart_pane_g3

0xb8fb,	// (0x000b0849) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b4d63) cell_navstr_albumart_pane_g

0x884e,	// (0x000ad79c) bt_list_pane_ParamLimits

0x884e,	// (0x000ad79c) bt_list_pane

0x8862,	// (0x000ad7b0) bt_list_pane_t1

0x8871,	// (0x000ad7bf) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b4d6c) bt_list_pane_t

0xe653,	// (0x000b35a1) main_cale_prevew_pane

0x8880,	// (0x000ad7ce) popup_cale_preview_window_ParamLimits

0x8880,	// (0x000ad7ce) popup_cale_preview_window

0xef7c,	// (0x000b3eca) bg_popup_preview_window_pane_cp05_ParamLimits

0xef7c,	// (0x000b3eca) bg_popup_preview_window_pane_cp05

0xe087,	// (0x000b2fd5) list_cale_preview_pane_ParamLimits

0xe087,	// (0x000b2fd5) list_cale_preview_pane

0x889b,	// (0x000ad7e9) list_double_cale_preview_pane_ParamLimits

0x889b,	// (0x000ad7e9) list_double_cale_preview_pane

0x88ad,	// (0x000ad7fb) list_single_cale_preview_pane_ParamLimits

0x88ad,	// (0x000ad7fb) list_single_cale_preview_pane

0x88c3,	// (0x000ad811) list_single_cale_preview_pane_g1

0x88cb,	// (0x000ad819) list_single_cale_preview_pane_t1_ParamLimits

0x88cb,	// (0x000ad819) list_single_cale_preview_pane_t1

0x88e0,	// (0x000ad82e) list_double_cale_preview_pane_g1

0x88e8,	// (0x000ad836) list_double_cale_preview_pane_t1_ParamLimits

0x88e8,	// (0x000ad836) list_double_cale_preview_pane_t1

0x88fd,	// (0x000ad84b) list_double_cale_preview_pane_t2_ParamLimits

0x88fd,	// (0x000ad84b) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b4d71) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b4d71) list_double_cale_preview_pane_t

0xe653,	// (0x000b35a1) main_ezdial_pane

0xef7c,	// (0x000b3eca) main_sp_fs_email_pane_ParamLimits

0x7dff,	// (0x000acd4d) cmail_ddmenu_btn01_pane_ParamLimits

0x7dff,	// (0x000acd4d) cmail_ddmenu_btn01_pane

0x7e12,	// (0x000acd60) cmail_ddmenu_btn02_pane_ParamLimits

0x7e12,	// (0x000acd60) cmail_ddmenu_btn02_pane

0x7e35,	// (0x000acd83) cmail_ddmenu_btn03_pane_ParamLimits

0x7e35,	// (0x000acd83) cmail_ddmenu_btn03_pane

0x7e5b,	// (0x000acda9) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e7f,	// (0x000acdcd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xca1f,	// (0x000b196d) list_cmail_body_pane_ParamLimits

0xdcee,	// (0x000b2c3c) bg_button_pane_cp12

0xdcf7,	// (0x000b2c45) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdcf7,	// (0x000b2c45) list_single_cmail_header_detail_pane_g3

0xdd04,	// (0x000b2c52) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd04,	// (0x000b2c52) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b4cf4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b4cf4) list_single_cmail_header_detail_pane_t

0xddfa,	// (0x000b2d48) phacti_term_pane_t2_ParamLimits

0xddfa,	// (0x000b2d48) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b4cfe) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b4cfe) phacti_term_pane_t

0xe093,	// (0x000b2fe1) aid_size_list_single_double

0x8915,	// (0x000ad863) popup_ezdial_listscroll_window

0x8931,	// (0x000ad87f) popup_number_entry_window_cp01

0xa6d0,	// (0x000af61e) bg_popup_call_pane_cp09

0xe09f,	// (0x000b2fed) ezdial_list_pane

0xe0a7,	// (0x000b2ff5) scroll_pane_cp23

0xbae2,	// (0x000b0a30) bg_button_pane_cp028_ParamLimits

0xbae2,	// (0x000b0a30) bg_button_pane_cp028

0x893f,	// (0x000ad88d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x893f,	// (0x000ad88d) cmail_ddmenu_btn01_pane_g1

0x894b,	// (0x000ad899) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x894b,	// (0x000ad899) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b4d76) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b4d76) cmail_ddmenu_btn01_pane_g

0xe0af,	// (0x000b2ffd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe0af,	// (0x000b2ffd) cmail_ddmenu_btn01_pane_t1

0xbae2,	// (0x000b0a30) bg_button_pane_cp029_ParamLimits

0xbae2,	// (0x000b0a30) bg_button_pane_cp029

0x895f,	// (0x000ad8ad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x895f,	// (0x000ad8ad) cmail_ddmenu_btn02_pane_g1

0x8977,	// (0x000ad8c5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8977,	// (0x000ad8c5) cmail_ddmenu_btn02_pane_t1

0xef7c,	// (0x000b3eca) bg_button_pane_cp031_ParamLimits

0xef7c,	// (0x000b3eca) bg_button_pane_cp031

0x895f,	// (0x000ad8ad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x895f,	// (0x000ad8ad) cmail_ddmenu_btn03_pane_g1

0x8977,	// (0x000ad8c5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8977,	// (0x000ad8c5) cmail_ddmenu_btn03_pane_t1

0x56e8,	// (0x000aa636) cell_dialer2_keypad_pane_t1_ParamLimits

0x5702,	// (0x000aa650) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5702,	// (0x000aa650) cell_dialer2_keypad_pane_t1_copy1

0x7627,	// (0x000ac575) ncimui_group_button_pane

0xef7c,	// (0x000b3eca) main_sp_fs_calendar_pane_ParamLimits

0x84f9,	// (0x000ad447) list_single_cmail_header_caption_pane_ParamLimits

0xefb3,	// (0x000b3f01) aid_recal_txt_sm_pane

0xe653,	// (0x000b35a1) mian_recal_day_pane

0xde6c,	// (0x000b2dba) popup_sp_fs_cale_preview_window_ParamLimits

0xe0c5,	// (0x000b3013) list_recal_day_pane

0xe108,	// (0x000b3056) list_single_recal_day_pane_ParamLimits

0xe108,	// (0x000b3056) list_single_recal_day_pane

0xe11a,	// (0x000b3068) list_single_recal_day_pane_g1_ParamLimits

0xe11a,	// (0x000b3068) list_single_recal_day_pane_g1

0xe126,	// (0x000b3074) list_single_recal_day_pane_g2_ParamLimits

0xe126,	// (0x000b3074) list_single_recal_day_pane_g2

0xe136,	// (0x000b3084) list_single_recal_day_pane_g3_ParamLimits

0xe136,	// (0x000b3084) list_single_recal_day_pane_g3

0x899b,	// (0x000ad8e9) list_single_recal_day_pane_g4_ParamLimits

0x899b,	// (0x000ad8e9) list_single_recal_day_pane_g4

0xe142,	// (0x000b3090) list_single_recal_day_pane_g5_ParamLimits

0xe142,	// (0x000b3090) list_single_recal_day_pane_g5

0xe152,	// (0x000b30a0) list_single_recal_day_pane_g6_ParamLimits

0xe152,	// (0x000b30a0) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b4d85) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b4d85) list_single_recal_day_pane_g

0xe166,	// (0x000b30b4) list_single_recal_day_pane_t1

0xe178,	// (0x000b30c6) list_single_recal_day_pane_t2

0x0001,

0x0012,	// (0x000a4f60) list_single_recal_day_pane_t

0x89bb,	// (0x000ad909) ncimui_query_button_pane_ParamLimits

0x89bb,	// (0x000ad909) ncimui_query_button_pane

0x89cb,	// (0x000ad919) ncimui_query_button_pane_t1_ParamLimits

0x89cb,	// (0x000ad919) ncimui_query_button_pane_t1

0xe18a,	// (0x000b30d8) ncimui_query_button_pane_t2_ParamLimits

0xe18a,	// (0x000b30d8) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x000b4d90) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x000b4d90) ncimui_query_button_pane_t

0x89de,	// (0x000ad92c) query_button_pane_ParamLimits

0x89de,	// (0x000ad92c) query_button_pane

0xe653,	// (0x000b35a1) bg_button_pane_cp0028

0xe19d,	// (0x000b30eb) query_button_pane_t1

0x3790,	// (0x000a86de) main_tport_pane_ParamLimits

0x83bd,	// (0x000ad30b) bg_popup_window_pane_cp01_ParamLimits

0x83bd,	// (0x000ad30b) bg_popup_window_pane_cp01

0x83d8,	// (0x000ad326) heading_pane_cp08_ParamLimits

0x83d8,	// (0x000ad326) heading_pane_cp08

0x83eb,	// (0x000ad339) heading_pane_cp07_ParamLimits

0x83eb,	// (0x000ad339) heading_pane_cp07

0x8492,	// (0x000ad3e0) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b4ce1) cell_tport_appsw_pane_g

0x2d2c,	// (0x000a7c7a) input_candi_list_open_g1

0x9a57,	// (0x000ae9a5) list_cale_time_pane_g6_ParamLimits

0x9a57,	// (0x000ae9a5) list_cale_time_pane_g6

0x4559,	// (0x000a94a7) aid_size_touch_calib_1_ParamLimits

0x4559,	// (0x000a94a7) aid_size_touch_calib_1

0x456b,	// (0x000a94b9) aid_size_touch_calib_2_ParamLimits

0x456b,	// (0x000a94b9) aid_size_touch_calib_2

0x4583,	// (0x000a94d1) aid_size_touch_calib_3_ParamLimits

0x4583,	// (0x000a94d1) aid_size_touch_calib_3

0x45a1,	// (0x000a94ef) aid_size_touch_calib_4_ParamLimits

0x45a1,	// (0x000a94ef) aid_size_touch_calib_4

0x45b9,	// (0x000a9507) main_touch_calib_button_group_pane_ParamLimits

0x45b9,	// (0x000a9507) main_touch_calib_button_group_pane

0x45d1,	// (0x000a951f) main_touch_calib_pane_g1_ParamLimits

0x45e3,	// (0x000a9531) main_touch_calib_pane_g2_ParamLimits

0x45f5,	// (0x000a9543) main_touch_calib_pane_g3_ParamLimits

0x4607,	// (0x000a9555) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b469f) main_touch_calib_pane_g_ParamLimits

0x4619,	// (0x000a9567) main_touch_calib_pane_t1_ParamLimits

0x4633,	// (0x000a9581) main_touch_calib_pane_t2_ParamLimits

0x464d,	// (0x000a959b) main_touch_calib_pane_t3_ParamLimits

0x4661,	// (0x000a95af) main_touch_calib_pane_t4_ParamLimits

0x4675,	// (0x000a95c3) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b46a8) main_touch_calib_pane_t_ParamLimits

0xc2ba,	// (0x000b1208) list_single_fp_cale_pane_g3_ParamLimits

0xc2ba,	// (0x000b1208) list_single_fp_cale_pane_g3

0x957d,	// (0x000ae4cb) bg_button_pane_cp012_ParamLimits

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp03_ParamLimits

0x6672,	// (0x000ab5c0) cell_vitu2_function_top_pane_g1_ParamLimits

0x957d,	// (0x000ae4cb) bg_vkb2_func_pane_cp04_ParamLimits

0x75b5,	// (0x000ac503) main_ncimui_button_group_pane_ParamLimits

0x75b5,	// (0x000ac503) main_ncimui_button_group_pane

0x7615,	// (0x000ac563) main_ncimui_pane_t3_ParamLimits

0x7615,	// (0x000ac563) main_ncimui_pane_t3

0xdda8,	// (0x000b2cf6) phacti_button_group_pane

0xe093,	// (0x000b2fe1) aid_size_list_single_double_ParamLimits

0x8915,	// (0x000ad863) popup_ezdial_listscroll_window_ParamLimits

0x8931,	// (0x000ad87f) popup_number_entry_window_cp01_ParamLimits

0x89f1,	// (0x000ad93f) phacti_button_pane_ParamLimits

0x89f1,	// (0x000ad93f) phacti_button_pane

0xe653,	// (0x000b35a1) bg_button_pane_cp14

0xe1ab,	// (0x000b30f9) phacti_button_pane_t1

0x8a02,	// (0x000ad950) main_touch_calib_button_pane_ParamLimits

0x8a02,	// (0x000ad950) main_touch_calib_button_pane

0xed90,	// (0x000b3cde) bg_button_pane_cp18_ParamLimits

0xed90,	// (0x000b3cde) bg_button_pane_cp18

0xe1b9,	// (0x000b3107) main_touch_calib_button_pane_t1_ParamLimits

0xe1b9,	// (0x000b3107) main_touch_calib_button_pane_t1

0xe1cf,	// (0x000b311d) main_touch_calib_button_pane_t2_ParamLimits

0xe1cf,	// (0x000b311d) main_touch_calib_button_pane_t2

0x0001,

0x001c,	// (0x000a4f6a) main_touch_calib_button_pane_t_ParamLimits

0x001c,	// (0x000a4f6a) main_touch_calib_button_pane_t

0xe653,	// (0x000b35a1) cell_ncimui_button_pane

0xe653,	// (0x000b35a1) bg_button_pane_cp032

0xe1ed,	// (0x000b313b) cell_ncimui_button_pane_t1

0xa0b7,	// (0x000af005) image3_infobar_pane_ParamLimits

0xa0b7,	// (0x000af005) image3_infobar_pane

0x79f1,	// (0x000ac93f) fs_bigclock_status_pane_ParamLimits

0x79f1,	// (0x000ac93f) fs_bigclock_status_pane

0x79fe,	// (0x000ac94c) main_fs_bigclock_clock_pane_ParamLimits

0x79fe,	// (0x000ac94c) main_fs_bigclock_clock_pane

0x7a1e,	// (0x000ac96c) main_fs_bigclock_indi_pane_ParamLimits

0x7a1e,	// (0x000ac96c) main_fs_bigclock_indi_pane

0x7a48,	// (0x000ac996) main_fs_bigclock_swipe_pane_ParamLimits

0x7a48,	// (0x000ac996) main_fs_bigclock_swipe_pane

0xe653,	// (0x000b35a1) main_fs_clock_dumped_data

0xd812,	// (0x000b2760) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd812,	// (0x000b2760) list_single_fs_bigclock_indicator_pane_g1

0xd82d,	// (0x000b277b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd82d,	// (0x000b277b) list_single_fs_bigclock_indicator_pane_g2

0xd847,	// (0x000b2795) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd847,	// (0x000b2795) list_single_fs_bigclock_indicator_pane_g3

0xd861,	// (0x000b27af) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd861,	// (0x000b27af) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b4bc2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b4bc2) list_single_fs_bigclock_indicator_pane_g

0xd88c,	// (0x000b27da) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd88c,	// (0x000b27da) list_single_fs_bigclock_indicator_pane_t1

0xd8b4,	// (0x000b2802) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd8b4,	// (0x000b2802) list_single_fs_bigclock_indicator_pane_t2

0xd8dc,	// (0x000b282a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd8dc,	// (0x000b282a) list_single_fs_bigclock_indicator_pane_t3

0xd904,	// (0x000b2852) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd904,	// (0x000b2852) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b4bcd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b4bcd) list_single_fs_bigclock_indicator_pane_t

0xe1fb,	// (0x000b3149) image3_infobar_fav_pane_ParamLimits

0xe1fb,	// (0x000b3149) image3_infobar_fav_pane

0xe20b,	// (0x000b3159) image3_infobar_loc_pane_ParamLimits

0xe20b,	// (0x000b3159) image3_infobar_loc_pane

0xe21f,	// (0x000b316d) image3_infobar_time_pane_ParamLimits

0xe21f,	// (0x000b316d) image3_infobar_time_pane

0xbef6,	// (0x000b0e44) image3_infobar_time_pane_g1

0xe22f,	// (0x000b317d) image3_infobar_time_pane_t1

0xbef6,	// (0x000b0e44) image3_infobar_loc_pane_g1

0xe23d,	// (0x000b318b) image3_infobar_loc_pane_g2

0x0001,

0xfe47,	// (0x000b4d95) image3_infobar_loc_pane_g

0xe245,	// (0x000b3193) image3_infobar_loc_pane_t1

0xbef6,	// (0x000b0e44) image3_infobar_fav_pane_g1

0xe253,	// (0x000b31a1) image3_infobar_fav_pane_g2

0x0001,

0xfe4c,	// (0x000b4d9a) image3_infobar_fav_pane_g

0xe25b,	// (0x000b31a9) fs_bigclock_status_battery_pane

0xe264,	// (0x000b31b2) fs_bigclock_status_signal_pane

0xe26d,	// (0x000b31bb) fs_bigclock_status_title_pane

0xe276,	// (0x000b31c4) fs_bigclock_status_signal_pane_g1

0xe27f,	// (0x000b31cd) fs_bigclock_status_signal_pane_g2

0x0001,

0x002b,	// (0x000a4f79) fs_bigclock_status_signal_pane_g

0xe287,	// (0x000b31d5) fs_bigclock_status_battery_pane_g1

0xe290,	// (0x000b31de) fs_bigclock_status_battery_pane_g2

0x0001,

0x0030,	// (0x000a4f7e) fs_bigclock_status_battery_pane_g

0xe298,	// (0x000b31e6) fs_bigclock_status_title_pane_t1

0xbef6,	// (0x000b0e44) main_fs_bigclock_clock_pane_g1

0xe2a6,	// (0x000b31f4) main_fs_bigclock_clock_pane_g2

0xe2af,	// (0x000b31fd) main_fs_bigclock_clock_pane_g3

0xe2af,	// (0x000b31fd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe51,	// (0x000b4d9f) main_fs_bigclock_clock_pane_g

0xe2b7,	// (0x000b3205) main_fs_bigclock_clock_pane_t1

0x8a17,	// (0x000ad965) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5a,	// (0x000b4da8) main_fs_bigclock_clock_pane_t

0xe2c5,	// (0x000b3213) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe2c5,	// (0x000b3213) list_single_fs_bigclock_indicator_pane

0xe2d6,	// (0x000b3224) list_single_fs_bigclock_pane_ParamLimits

0xe2d6,	// (0x000b3224) list_single_fs_bigclock_pane

0xe2fc,	// (0x000b324a) main_fs_bigclock_indicator_pane_t1

0xe30b,	// (0x000b3259) list_single_fs_bigclock_pane_g1

0xe313,	// (0x000b3261) list_single_fs_bigclock_pane_t1

0xbef6,	// (0x000b0e44) main_fs_bigclock_swipe_pane_g1

0xe356,	// (0x000b32a4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe66,	// (0x000b4db4) main_fs_bigclock_swipe_pane_g

0xe35e,	// (0x000b32ac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe35e,	// (0x000b32ac) main_fs_bigclock_swipe_pane_t1

0x263c,	// (0x000a758a) call_type_pane_ParamLimits

0xe653,	// (0x000b35a1) main_btmg_pane

0xdf69,	// (0x000b2eb7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdf69,	// (0x000b2eb7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b4d40) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b4d40) list_single_cale_mrui_row_pane_g

0xe0ee,	// (0x000b303c) list_recal_vselct_arw_lo_pane

0xe0f6,	// (0x000b3044) list_recal_vselct_arw_up_pane

0xe0fe,	// (0x000b304c) list_recal_vselct_pane

0x8a6a,	// (0x000ad9b8) btmg_button_pane

0x8a74,	// (0x000ad9c2) main_btmg_pane_g1

0xe653,	// (0x000b35a1) bg_button_pane_cp044

0xe37b,	// (0x000b32c9) btmg_button_pane_t1

0xbace,	// (0x000b0a1c) aid_listscroll_gen

0xef7c,	// (0x000b3eca) main_cntbar_detail_pane

0xdcd0,	// (0x000b2c1e) list_cmail_folder_pane

0xbdf2,	// (0x000b0d40) sp_fs_scroll_pane_cp03_ParamLimits

0x8a7e,	// (0x000ad9cc) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a7e,	// (0x000ad9cc) list_single_fs_dyc_pane_cp01

0xe389,	// (0x000b32d7) aid_size_cmail_indent

0xe392,	// (0x000b32e0) list_single_dyc_row_pane_cp01

0x8ac6,	// (0x000ada14) cntbar_detail_list_pane_ParamLimits

0x8ac6,	// (0x000ada14) cntbar_detail_list_pane

0x8b12,	// (0x000ada60) main_cntbar_detail_cont_pane_ParamLimits

0x8b12,	// (0x000ada60) main_cntbar_detail_cont_pane

0xbdf2,	// (0x000b0d40) scroll_pane_cp032_ParamLimits

0xbdf2,	// (0x000b0d40) scroll_pane_cp032

0x8b26,	// (0x000ada74) cntbar_detail_list_event_pane_ParamLimits

0x8b26,	// (0x000ada74) cntbar_detail_list_event_pane

0x8ad6,	// (0x000ada24) cntbar_detail_list_shct_pane

0x98b4,	// (0x000ae802) aid_list_gen

0xe39b,	// (0x000b32e9) aid_scroll

0xe3a4,	// (0x000b32f2) aid_size_touch_scroll_bar

0x6d52,	// (0x000abca0) aid_list_double

0x8b36,	// (0x000ada84) aid_list_single

0x6d52,	// (0x000abca0) aid_list_single_lg

0x8b3f,	// (0x000ada8d) aid_list_z_g_a_sm

0x8b47,	// (0x000ada95) aid_list_z_g_d

0x8b4f,	// (0x000ada9d) aid_txt_z_prm

0x8b5d,	// (0x000adaab) aid_txt_z_prm_cp01

0x8b6b,	// (0x000adab9) aid_txt_z_sec

0x8b79,	// (0x000adac7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b79,	// (0x000adac7) main_cntbar_detail_cont_pane_g1

0x8b8d,	// (0x000adadb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b8d,	// (0x000adadb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6b,	// (0x000b4db9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6b,	// (0x000b4db9) main_cntbar_detail_cont_pane_g

0xe3ad,	// (0x000b32fb) main_cntbar_detail_cont_pane_t1

0xe3bb,	// (0x000b3309) main_cntbar_detail_cont_pane_t2

0xe3c9,	// (0x000b3317) main_cntbar_detail_cont_pane_t3

0x0002,

0x0059,	// (0x000a4fa7) main_cntbar_detail_cont_pane_t

0x8b9d,	// (0x000adaeb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b9d,	// (0x000adaeb) cell_cntbar_detail_list_shct_pane

0xe3d7,	// (0x000b3325) cntbar_detail_list_shct_pane_g1

0xe3e0,	// (0x000b332e) cntbar_detail_list_shct_pane_g2

0x0001,

0x0060,	// (0x000a4fae) cntbar_detail_list_shct_pane_g

0x8bb1,	// (0x000adaff) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bb1,	// (0x000adaff) cntbar_detail_list_event_pane_g1

0x8bbd,	// (0x000adb0b) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bbd,	// (0x000adb0b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe70,	// (0x000b4dbe) cntbar_detail_list_event_pane_g_ParamLimits

0xfe70,	// (0x000b4dbe) cntbar_detail_list_event_pane_g

0x8c29,	// (0x000adb77) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c29,	// (0x000adb77) cntbar_detail_list_event_pane_t1

0x8c3e,	// (0x000adb8c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c3e,	// (0x000adb8c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7d,	// (0x000b4dcb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7d,	// (0x000b4dcb) cntbar_detail_list_event_pane_t

0xbef6,	// (0x000b0e44) cell_cntbar_detail_list_shct_pane_g1

0xa688,	// (0x000af5d6) navi_pane_mv_g3

0xef7c,	// (0x000b3eca) main_cntbar_detail_pane_ParamLimits

0xe653,	// (0x000b35a1) main_notif_wgt_pane

0x9ecd,	// (0x000aee1b) aid_tch_main_mp4_pane_g4

0xa0af,	// (0x000aeffd) popup_slider_window_cp02

0xe0e4,	// (0x000b3032) list_recal_day_event_pane

0x8a94,	// (0x000ad9e2) cntbar_detail_btn_pane_ParamLimits

0x8a94,	// (0x000ad9e2) cntbar_detail_btn_pane

0x8aad,	// (0x000ad9fb) cntbar_detail_btn_pane_cp01_ParamLimits

0x8aad,	// (0x000ad9fb) cntbar_detail_btn_pane_cp01

0x8ad6,	// (0x000ada24) cntbar_detail_list_shct_pane_ParamLimits

0x8ae6,	// (0x000ada34) cntbar_detail_pane_g1_ParamLimits

0x8ae6,	// (0x000ada34) cntbar_detail_pane_g1

0x8af6,	// (0x000ada44) cntbar_detail_pane_t1_ParamLimits

0x8af6,	// (0x000ada44) cntbar_detail_pane_t1

0x8bc9,	// (0x000adb17) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bc9,	// (0x000adb17) cntbar_detail_list_event_pane_g3

0x8be1,	// (0x000adb2f) cntbar_detail_list_event_pane_g4_ParamLimits

0x8be1,	// (0x000adb2f) cntbar_detail_list_event_pane_g4

0x8bf9,	// (0x000adb47) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bf9,	// (0x000adb47) cntbar_detail_list_event_pane_g5

0x8c11,	// (0x000adb5f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c11,	// (0x000adb5f) cntbar_detail_list_event_pane_g6

0x8c53,	// (0x000adba1) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c53,	// (0x000adba1) cntbar_detail_list_event_pane_t3

0x8c65,	// (0x000adbb3) popup_notif_wgt_window_ParamLimits

0x8c65,	// (0x000adbb3) popup_notif_wgt_window

0x8c7e,	// (0x000adbcc) popup_submenu_window_cp01_ParamLimits

0x8c7e,	// (0x000adbcc) popup_submenu_window_cp01

0xa6d0,	// (0x000af61e) bg_popup_window_pane_cp10

0xe3e9,	// (0x000b3337) listscroll_notif_wgt_pane

0xe3fb,	// (0x000b3349) list_notif_wgt_window

0xe404,	// (0x000b3352) scroll_pane_cp033

0x8c94,	// (0x000adbe2) list_notif_wgt_row_pane_ParamLimits

0x8c94,	// (0x000adbe2) list_notif_wgt_row_pane

0xe40d,	// (0x000b335b) aid_size_list_notif_wgt_del

0xe41a,	// (0x000b3368) list_notif_wgt_row_pane_g1

0xe426,	// (0x000b3374) list_notif_wgt_row_pane_g2

0xe43a,	// (0x000b3388) list_notif_wgt_row_pane_g3

0x0002,

0x0079,	// (0x000a4fc7) list_notif_wgt_row_pane_g

0xe447,	// (0x000b3395) list_notif_wgt_row_pane_t1

0xe45d,	// (0x000b33ab) list_notif_wgt_row_pane_t2

0xe46f,	// (0x000b33bd) list_notif_wgt_row_pane_t3

0x0002,

0x0080,	// (0x000a4fce) list_notif_wgt_row_pane_t

0xcc5b,	// (0x000b1ba9) list_recal_day_event_pane_g1

0xe481,	// (0x000b33cf) list_recal_day_event_pane_t1

0xe653,	// (0x000b35a1) bg_button_pane_cp045

0x8ca4,	// (0x000adbf2) cntbar_detail_btn_pane_t1

0xbae2,	// (0x000b0a30) main_callh_pane_ParamLimits

0xbae2,	// (0x000b0a30) main_callh_pane

0xe653,	// (0x000b35a1) main_coverflow0_pane

0xe653,	// (0x000b35a1) main_wgtman_pane

0x7a60,	// (0x000ac9ae) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a60,	// (0x000ac9ae) main_fs_bigclock_unlock_btn_pane

0x848a,	// (0x000ad3d8) bg_button_pane_cp16

0x849a,	// (0x000ad3e8) cell_tport_appsw_pane_g3

0x8cb2,	// (0x000adc00) cf0_flow_pane_ParamLimits

0x8cb2,	// (0x000adc00) cf0_flow_pane

0xe490,	// (0x000b33de) listscroll_cf0_pane

0xe49b,	// (0x000b33e9) main_cf0_pane_g1

0x8cc7,	// (0x000adc15) main_cf0_pane_t1_ParamLimits

0x8cc7,	// (0x000adc15) main_cf0_pane_t1

0x8cde,	// (0x000adc2c) main_cf0_pane_t2_ParamLimits

0x8cde,	// (0x000adc2c) main_cf0_pane_t2

0x0001,

0xfe84,	// (0x000b4dd2) main_cf0_pane_t_ParamLimits

0xfe84,	// (0x000b4dd2) main_cf0_pane_t

0xe4ad,	// (0x000b33fb) scroll_pane_cp11

0x8cf5,	// (0x000adc43) cf0_flow_pane_g1

0x8cfd,	// (0x000adc4b) cf0_flow_pane_g2

0x0001,

0xfe89,	// (0x000b4dd7) cf0_flow_pane_g

0x8d05,	// (0x000adc53) cf0_flow_pane_t1

0xe653,	// (0x000b35a1) main_call6_pane

0xe653,	// (0x000b35a1) main_calllock_pane

0x8d13,	// (0x000adc61) call6_btn_grp_pane_ParamLimits

0x8d13,	// (0x000adc61) call6_btn_grp_pane

0x8d2d,	// (0x000adc7b) call6_pane_g1_ParamLimits

0x8d2d,	// (0x000adc7b) call6_pane_g1

0x8d42,	// (0x000adc90) popup_call6_1st_window_ParamLimits

0x8d42,	// (0x000adc90) popup_call6_1st_window

0x8d53,	// (0x000adca1) popup_call6_2nd_window_ParamLimits

0x8d53,	// (0x000adca1) popup_call6_2nd_window

0x8d64,	// (0x000adcb2) cell_call6_btn_pane_ParamLimits

0x8d64,	// (0x000adcb2) cell_call6_btn_pane

0xa6d0,	// (0x000af61e) bg_popup_call2_in_pane_cp03

0xe4b8,	// (0x000b3406) popup_call6_1st_window_g1

0xe4c0,	// (0x000b340e) popup_call6_1st_window_g2

0xe4c8,	// (0x000b3416) popup_call6_1st_window_g3

0x0002,

0x0096,	// (0x000a4fe4) popup_call6_1st_window_g

0xe4d0,	// (0x000b341e) popup_call6_1st_window_t1

0xe4df,	// (0x000b342d) popup_call6_1st_window_t2

0xe4ef,	// (0x000b343d) popup_call6_1st_window_t3

0x0002,

0x009d,	// (0x000a4feb) popup_call6_1st_window_t

0xa6d0,	// (0x000af61e) bg_popup_call2_in_pane_cp04

0xe4b8,	// (0x000b3406) popup_call6_2nd_window_g1

0xe4c0,	// (0x000b340e) popup_call6_2nd_window_g2

0xe4c8,	// (0x000b3416) popup_call6_2nd_window_g3

0x0002,

0x0096,	// (0x000a4fe4) popup_call6_2nd_window_g

0xe4d0,	// (0x000b341e) popup_call6_2nd_window_t1

0xe653,	// (0x000b35a1) bg_button_pane_cp15

0xe4ff,	// (0x000b344d) cell_call6_btn_pane_g1

0xe508,	// (0x000b3456) cell_call6_btn_pane_t1

0x8d78,	// (0x000adcc6) listscroll_wgtman_pane_ParamLimits

0x8d78,	// (0x000adcc6) listscroll_wgtman_pane

0x8d99,	// (0x000adce7) wgtman_btn_pane_ParamLimits

0x8d99,	// (0x000adce7) wgtman_btn_pane

0xa48f,	// (0x000af3dd) aid_scroll_copy1

0xe517,	// (0x000b3465) list_wgtman_pane

0x8ddc,	// (0x000add2a) wgtman_btn_pane_g1_ParamLimits

0x8ddc,	// (0x000add2a) wgtman_btn_pane_g1

0x8e08,	// (0x000add56) wgtman_btn_pane_t1_ParamLimits

0x8e08,	// (0x000add56) wgtman_btn_pane_t1

0xe521,	// (0x000b346f) wgtman_btn_pane_t2_ParamLimits

0xe521,	// (0x000b346f) wgtman_btn_pane_t2

0x0001,

0xfe8e,	// (0x000b4ddc) wgtman_btn_pane_t_ParamLimits

0xfe8e,	// (0x000b4ddc) wgtman_btn_pane_t

0x8e45,	// (0x000add93) listrow_wgtman_pane_ParamLimits

0x8e45,	// (0x000add93) listrow_wgtman_pane

0x8e57,	// (0x000adda5) listrow_wgtman_pane_g1

0x8e64,	// (0x000addb2) listrow_wgtman_pane_g2

0x0001,

0xfe93,	// (0x000b4de1) listrow_wgtman_pane_g

0x8e82,	// (0x000addd0) listrow_wgtman_pane_t1

0x8e9a,	// (0x000adde8) listrow_wgtman_pane_t2

0x0001,

0xfe98,	// (0x000b4de6) listrow_wgtman_pane_t

0x8ec0,	// (0x000ade0e) wait_bar_pane_cp09

0xe538,	// (0x000b3486) main_calllock_btn_pane

0xe542,	// (0x000b3490) main_calllock_pane_g1

0xe653,	// (0x000b35a1) bg_button_pane_cp17

0xe54e,	// (0x000b349c) main_calllock_btn_pane_g1

0xe557,	// (0x000b34a5) main_calllock_btn_pane_t1

0xe653,	// (0x000b35a1) main_dialer3_pane

0xe653,	// (0x000b35a1) main_fmrd2_pane

0xbef6,	// (0x000b0e44) main_fs_bigclock_unlock_btn_pane_g1

0xe56e,	// (0x000b34bc) main_fs_bigclock_unlock_btn_pane_t1

0x8ed2,	// (0x000ade20) area_fmrd2_info_pane_ParamLimits

0x8ed2,	// (0x000ade20) area_fmrd2_info_pane

0x8ee3,	// (0x000ade31) area_fmrd2_visual_pane_ParamLimits

0x8ee3,	// (0x000ade31) area_fmrd2_visual_pane

0x8ef1,	// (0x000ade3f) fmrd2_indi_pane_ParamLimits

0x8ef1,	// (0x000ade3f) fmrd2_indi_pane

0x8efe,	// (0x000ade4c) area_fmrd2_visual_pane_g1

0x8f06,	// (0x000ade54) area_fmrd2_visual_pane_t1

0x8f16,	// (0x000ade64) area_fmrd2_visual_pane_t2

0x8f26,	// (0x000ade74) area_fmrd2_visual_pane_t3

0x0002,

0xfea2,	// (0x000b4df0) area_fmrd2_visual_pane_t

0x8f36,	// (0x000ade84) area_fmrd2_info_pane_g1

0x8f3e,	// (0x000ade8c) area_fmrd2_info_pane_t1

0x8f4e,	// (0x000ade9c) area_fmrd2_info_pane_t2

0x8f5e,	// (0x000adeac) area_fmrd2_info_pane_t3

0x8f6e,	// (0x000adebc) area_fmrd2_info_pane_t4

0x0003,

0xfea9,	// (0x000b4df7) area_fmrd2_info_pane_t

0x8f7c,	// (0x000adeca) fmrd2_indi_pane_t1

0x8f8c,	// (0x000adeda) fmrd2_indi_pane_t2

0x8f9c,	// (0x000adeea) fmrd2_indi_pane_t3

0x0002,

0xfeb2,	// (0x000b4e00) fmrd2_indi_pane_t

0xd870,	// (0x000b27be) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd870,	// (0x000b27be) list_single_fs_bigclock_indicator_pane_g5

0xd920,	// (0x000b286e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd920,	// (0x000b286e) list_single_fs_bigclock_indicator_pane_t5

0x8669,	// (0x000ad5b7) aid_cell_bcale_month_pane_ParamLimits

0x8669,	// (0x000ad5b7) aid_cell_bcale_month_pane

0x8687,	// (0x000ad5d5) bcale_month_pane_ParamLimits

0x8687,	// (0x000ad5d5) bcale_month_pane

0x86ab,	// (0x000ad5f9) bcale_preview_pane_ParamLimits

0x86ab,	// (0x000ad5f9) bcale_preview_pane

0xe313,	// (0x000b3261) list_single_fs_bigclock_pane_t1_ParamLimits

0xe332,	// (0x000b3280) list_single_fs_bigclock_pane_t2_ParamLimits

0xe332,	// (0x000b3280) list_single_fs_bigclock_pane_t2

0x0001,

0x004a,	// (0x000a4f98) list_single_fs_bigclock_pane_t_ParamLimits

0x004a,	// (0x000a4f98) list_single_fs_bigclock_pane_t

0xe566,	// (0x000b34b4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9d,	// (0x000b4deb) main_fs_bigclock_unlock_btn_pane_g

0x8fac,	// (0x000adefa) aid_dia3_key_size_ParamLimits

0x8fac,	// (0x000adefa) aid_dia3_key_size

0x8fbb,	// (0x000adf09) aid_dia3_listrow_size_ParamLimits

0x8fbb,	// (0x000adf09) aid_dia3_listrow_size

0x8fd0,	// (0x000adf1e) dia3_keypad_fun_pane_ParamLimits

0x8fd0,	// (0x000adf1e) dia3_keypad_fun_pane

0x8fec,	// (0x000adf3a) dia3_keypad_num_pane_ParamLimits

0x8fec,	// (0x000adf3a) dia3_keypad_num_pane

0x9007,	// (0x000adf55) dia3_listscroll_pane_ParamLimits

0x9007,	// (0x000adf55) dia3_listscroll_pane

0x901a,	// (0x000adf68) dia3_numentry_pane_ParamLimits

0x901a,	// (0x000adf68) dia3_numentry_pane

0xe57c,	// (0x000b34ca) dia3_list_pane

0xe587,	// (0x000b34d5) scroll_pane_cp12

0xe653,	// (0x000b35a1) bg_dia3_numentry_pane

0x902e,	// (0x000adf7c) dia3_numentry_pane_t1

0x903d,	// (0x000adf8b) cell_dia3_key_num_pane

0x9045,	// (0x000adf93) cell_dia3_key0_fun_pane_ParamLimits

0x9045,	// (0x000adf93) cell_dia3_key0_fun_pane

0x9059,	// (0x000adfa7) cell_dia3_key1_fun_pane_ParamLimits

0x9059,	// (0x000adfa7) cell_dia3_key1_fun_pane

0x9071,	// (0x000adfbf) dia3_listrow_pane

0xd57f,	// (0x000b24cd) bg_dia3_numentry_pane_g1

0xe653,	// (0x000b35a1) bg_button_pane_cp21

0xe592,	// (0x000b34e0) cell_dia3_key_num_pane_t1

0xe5a0,	// (0x000b34ee) cell_dia3_key_num_pane_t2

0xe5af,	// (0x000b34fd) cell_dia3_key_num_pane_t3

0xe5be,	// (0x000b350c) cell_dia3_key_num_pane_t4

0x0003,

0xfeb9,	// (0x000b4e07) cell_dia3_key_num_pane_t

0xe653,	// (0x000b35a1) bg_button_pane_cp19

0x9083,	// (0x000adfd1) cell_dia3_key0_fun_pane_g1

0xe653,	// (0x000b35a1) bg_button_pane_cp20

0x908b,	// (0x000adfd9) cell_dia3_key1_fun_pane_g1

0x9093,	// (0x000adfe1) area_left_week_number_pane

0x909f,	// (0x000adfed) area_top_day_name_pane

0x90b2,	// (0x000ae000) frame_month_view_pane

0xe5cd,	// (0x000b351b) grid_month_view_pane

0x90c5,	// (0x000ae013) cell_top_day_name_pane_ParamLimits

0x90c5,	// (0x000ae013) cell_top_day_name_pane

0x90f2,	// (0x000ae040) cell_area_left_week_number_pane_ParamLimits

0x90f2,	// (0x000ae040) cell_area_left_week_number_pane

0x9106,	// (0x000ae054) cell_month_view_pane_ParamLimits

0x9106,	// (0x000ae054) cell_month_view_pane

0xe5db,	// (0x000b3529) frm_month_g1

0x9133,	// (0x000ae081) frm_month_g2

0x9146,	// (0x000ae094) frm_month_g3

0x9159,	// (0x000ae0a7) frm_month_g4

0x916c,	// (0x000ae0ba) frm_month_g5

0x917f,	// (0x000ae0cd) frm_month_g6

0x9192,	// (0x000ae0e0) frm_month_g7

0xe5e8,	// (0x000b3536) frm_month_g8

0x91a5,	// (0x000ae0f3) frm_month_g9

0x91b5,	// (0x000ae103) frm_month_g10

0x91c5,	// (0x000ae113) frm_month_g11

0x91d5,	// (0x000ae123) frm_month_g12

0x91e7,	// (0x000ae135) frm_month_g13

0x91f9,	// (0x000ae147) frm_month_g14

0x920d,	// (0x000ae15b) frm_month_g15

0x9221,	// (0x000ae16f) frm_month_g16

0x000f,

0xfec2,	// (0x000b4e10) frm_month_g

0xe5f5,	// (0x000b3543) cell_top_day_name_pane_t1

0x9235,	// (0x000ae183) cell_area_left_week_number_pane_g1

0x9241,	// (0x000ae18f) cell_area_left_week_number_pane_t1

0xc162,	// (0x000b10b0) cell_month_view_pane_g1

0x9254,	// (0x000ae1a2) cell_month_view_pane_t1

0xe653,	// (0x000b35a1) main_fps_pane

0xdaf5,	// (0x000b2a43) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdaf5,	// (0x000b2a43) cmail_ddmenu_btn02_pane_cp1

0xdb11,	// (0x000b2a5f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdb11,	// (0x000b2a5f) cmail_ddmenu_btn02_pane_cp2

0x896b,	// (0x000ad8b9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x896b,	// (0x000ad8b9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b4d7b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b4d7b) cmail_ddmenu_btn02_pane_g

0x8989,	// (0x000ad8d7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8989,	// (0x000ad8d7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b4d80) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b4d80) cmail_ddmenu_btn02_pane_t

0x9267,	// (0x000ae1b5) fps_text_pane_ParamLimits

0x9267,	// (0x000ae1b5) fps_text_pane

0x927e,	// (0x000ae1cc) main_fps_pane_g1_ParamLimits

0x927e,	// (0x000ae1cc) main_fps_pane_g1

0x9298,	// (0x000ae1e6) wait_bar_pane_cp010_ParamLimits

0x9298,	// (0x000ae1e6) wait_bar_pane_cp010

0x92a9,	// (0x000ae1f7) fps_text_pane_t1_ParamLimits

0x92a9,	// (0x000ae1f7) fps_text_pane_t1

0xc969,	// (0x000b18b7) cam4_image_uncrop_pane_g1

0xc972,	// (0x000b18c0) cam4_image_uncrop_pane_g2

0x5b8e,	// (0x000aaadc) cam4_image_uncrop_pane_g3

0x5b97,	// (0x000aaae5) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b483c) cam4_image_uncrop_pane_g

0x9071,	// (0x000adfbf) dia3_listrow_pane_ParamLimits

0xe653,	// (0x000b35a1) main_phob2_pane

0x845b,	// (0x000ad3a9) cell_tport_appsw_pane_cp02_ParamLimits

0x845b,	// (0x000ad3a9) cell_tport_appsw_pane_cp02

0x846f,	// (0x000ad3bd) cell_tport_appsw_pane_cp03_ParamLimits

0x846f,	// (0x000ad3bd) cell_tport_appsw_pane_cp03

0xe653,	// (0x000b35a1) phob2_contact_card_pane

0xe653,	// (0x000b35a1) phob2_listscroll_pane

0xe608,	// (0x000b3556) phob2_list_pane

0xe610,	// (0x000b355e) scroll_pane_cp034

0x92c1,	// (0x000ae20f) phob2_cc_data_pane_ParamLimits

0x92c1,	// (0x000ae20f) phob2_cc_data_pane

0x92e0,	// (0x000ae22e) phob2_cc_listscroll_pane_ParamLimits

0x92e0,	// (0x000ae22e) phob2_cc_listscroll_pane

0x92fe,	// (0x000ae24c) list_double_large_graphic_phob2_pane_ParamLimits

0x92fe,	// (0x000ae24c) list_double_large_graphic_phob2_pane

0x9310,	// (0x000ae25e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9310,	// (0x000ae25e) list_double_large_graphic_phob2_pane_g1

0x9326,	// (0x000ae274) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9326,	// (0x000ae274) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee3,	// (0x000b4e31) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee3,	// (0x000b4e31) list_double_large_graphic_phob2_pane_g

0x9332,	// (0x000ae280) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9332,	// (0x000ae280) list_double_large_graphic_phob2_pane_t1

0x9347,	// (0x000ae295) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9347,	// (0x000ae295) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee8,	// (0x000b4e36) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee8,	// (0x000b4e36) list_double_large_graphic_phob2_pane_t

0xe653,	// (0x000b35a1) list_highlight_pane_cp024

0x9359,	// (0x000ae2a7) phob2_cc_button_pane

0x9361,	// (0x000ae2af) phob2_cc_data_pane_g1_ParamLimits

0x9361,	// (0x000ae2af) phob2_cc_data_pane_g1

0x9376,	// (0x000ae2c4) phob2_cc_data_pane_g2_ParamLimits

0x9376,	// (0x000ae2c4) phob2_cc_data_pane_g2

0x0001,

0xfeed,	// (0x000b4e3b) phob2_cc_data_pane_g_ParamLimits

0xfeed,	// (0x000b4e3b) phob2_cc_data_pane_g

0x9386,	// (0x000ae2d4) phob2_cc_data_pane_t1_ParamLimits

0x9386,	// (0x000ae2d4) phob2_cc_data_pane_t1

0x939e,	// (0x000ae2ec) phob2_cc_data_pane_t2_ParamLimits

0x939e,	// (0x000ae2ec) phob2_cc_data_pane_t2

0x93b6,	// (0x000ae304) phob2_cc_data_pane_t3_ParamLimits

0x93b6,	// (0x000ae304) phob2_cc_data_pane_t3

0x0002,

0xfef2,	// (0x000b4e40) phob2_cc_data_pane_t_ParamLimits

0xfef2,	// (0x000b4e40) phob2_cc_data_pane_t

0xe618,	// (0x000b3566) phob2_cc_list_pane_ParamLimits

0xe618,	// (0x000b3566) phob2_cc_list_pane

0xccf2,	// (0x000b1c40) scroll_pane_cp035_ParamLimits

0xccf2,	// (0x000b1c40) scroll_pane_cp035

0xef7c,	// (0x000b3eca) bg_button_pane_cp033

0xe624,	// (0x000b3572) phob2_cc_button_pane_g1

0xe630,	// (0x000b357e) phob2_cc_button_pane_t1

0xefbc,	// (0x000b3f0a) phob2_cc_button_pane_t2

0x0001,

0xfef9,	// (0x000b4e47) phob2_cc_button_pane_t

0x93ce,	// (0x000ae31c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93ce,	// (0x000ae31c) list_double_large_graphic_phob2_cc_pane

0x93e0,	// (0x000ae32e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93e0,	// (0x000ae32e) list_double_large_graphic_phob2_cc_pane_g1

0x93ec,	// (0x000ae33a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93ec,	// (0x000ae33a) list_double_large_graphic_phob2_cc_pane_g2

0x93f8,	// (0x000ae346) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93f8,	// (0x000ae346) list_double_large_graphic_phob2_cc_pane_g3

0x9404,	// (0x000ae352) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9404,	// (0x000ae352) list_double_large_graphic_phob2_cc_pane_g4

0x9410,	// (0x000ae35e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9410,	// (0x000ae35e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfefe,	// (0x000b4e4c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfefe,	// (0x000b4e4c) list_double_large_graphic_phob2_cc_pane_g

0x941c,	// (0x000ae36a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x941c,	// (0x000ae36a) list_double_large_graphic_phob2_cc_pane_t1

0x9445,	// (0x000ae393) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9445,	// (0x000ae393) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff09,	// (0x000b4e57) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff09,	// (0x000b4e57) list_double_large_graphic_phob2_cc_pane_t

0xefce,	// (0x000b3f1c) list_highlight_pane_cp025_ParamLimits

0xefce,	// (0x000b3f1c) list_highlight_pane_cp025

0xef7c,	// (0x000b3eca) bg_button_pane_cp033_ParamLimits

0xe624,	// (0x000b3572) phob2_cc_button_pane_g1_ParamLimits

0xe630,	// (0x000b357e) phob2_cc_button_pane_t1_ParamLimits

0xefbc,	// (0x000b3f0a) phob2_cc_button_pane_t2_ParamLimits

0xfef9,	// (0x000b4e47) phob2_cc_button_pane_t_ParamLimits

0x049c,	// (0x000a53ea) popup_wgtman_window

0xcb01,	// (0x000b1a4f) scroll_pane_cp038

0x8dbe,	// (0x000add0c) wgtman_btn_pane_cp_01_ParamLimits

0x8dbe,	// (0x000add0c) wgtman_btn_pane_cp_01

0xefdc,	// (0x000b3f2a) wgtman_content_pane

0xefe5,	// (0x000b3f33) wgtman_heading_pane

0xe653,	// (0x000b35a1) bg_heading_pane_cp02

0xefee,	// (0x000b3f3c) wgtman_heading_pane_g1

0xeff6,	// (0x000b3f44) wgtman_heading_pane_t1

0xf004,	// (0x000b3f52) scroll_pane_cp036

0xf00c,	// (0x000b3f5a) wgtman_list_pane

0xf014,	// (0x000b3f62) wgtman_list_pane_t1_ParamLimits

0xf014,	// (0x000b3f62) wgtman_list_pane_t1

0xa109,	// (0x000af057) cam4_grid_pane

0x684b,	// (0x000ab799) bg_button_pane_cp015_ParamLimits

0x685d,	// (0x000ab7ab) bg_button_pane_cp016_ParamLimits

0x6870,	// (0x000ab7be) bg_button_pane_cp017_ParamLimits

0x68c8,	// (0x000ab816) popup_vitu2_query_window_g3_ParamLimits

0x68c8,	// (0x000ab816) popup_vitu2_query_window_g3

0x6985,	// (0x000ab8d3) popup_vitu2_query_window_t6_ParamLimits

0x6985,	// (0x000ab8d3) popup_vitu2_query_window_t6

0x69b0,	// (0x000ab8fe) popup_vitu2_query_window_t7_ParamLimits

0x69b0,	// (0x000ab8fe) popup_vitu2_query_window_t7

0xc969,	// (0x000b18b7) cam4_grid_pane_g1

0xc972,	// (0x000b18c0) cam4_grid_pane_g2

0xf02e,	// (0x000b3f7c) cam4_grid_pane_g3

0xf037,	// (0x000b3f85) cam4_grid_pane_g4

0x0003,

0xff0e,	// (0x000b4e5c) cam4_grid_pane_g

0x14d0,	// (0x000a641e) aid_placing_vt_slider_lsc_ParamLimits

0x17db,	// (0x000a6729) vidtel_button_pane_ParamLimits

0x17db,	// (0x000a6729) vidtel_button_pane

0xf042,	// (0x000b3f90) bg_button_pane_cp034

0x946e,	// (0x000ae3bc) vidtel_button_pane_g1

0xf04c,	// (0x000b3f9a) vidtel_button_pane_t1

0xcc39,	// (0x000b1b87) aid_size_vtel_slider_touch

0xccf2,	// (0x000b1c40) scroll_pane_cp039

0xd5bd,	// (0x000b250b) ncim_query_button_pane_cp01_ParamLimits

0xd5dc,	// (0x000b252a) ncimui_query_pane_g1_ParamLimits

0xef7c,	// (0x000b3eca) input_focus_pane_cp012_ParamLimits

0xd601,	// (0x000b254f) ncim_query_entry_pane_t1_ParamLimits

0xccf2,	// (0x000b1c40) scroll_pane_cp039_ParamLimits

0xa573,	// (0x000af4c1) navi_pane_bcale_mc_g1

0xa57b,	// (0x000af4c9) navi_pane_bcale_mc_t1

0xdb5a,	// (0x000b2aa8) main_sp_fs_email_pane_g1

0xdb66,	// (0x000b2ab4) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b4c33) main_sp_fs_email_pane_g

0xdf75,	// (0x000b2ec3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdf75,	// (0x000b2ec3) list_single_cale_mrui_row_pane_g3

0x89b1,	// (0x000ad8ff) list_single_recal_day_pane_g5_event_pane

0xe15e,	// (0x000b30ac) list_single_recal_day_pane_g7

0xf05a,	// (0x000b3fa8) list_recal_day_event_pane_cp01

0xf063,	// (0x000b3fb1) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x000b3fb9) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x000b3fc1) list_recal_vselct_pane_cp01

0xcc5b,	// (0x000b1ba9) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x000b3fcb) list_recal_day_event_pane_cp01_t1

0xe166,	// (0x000b30b4) list_single_recal_day_pane_t1_ParamLimits

0xe178,	// (0x000b30c6) list_single_recal_day_pane_t2_ParamLimits

0x0012,	// (0x000a4f60) list_single_recal_day_pane_t_ParamLimits

0xeccb,	// (0x000b3c19) bg_notes_pane_ParamLimits

0xed6e,	// (0x000b3cbc) list_notes_pane_ParamLimits

0x07e5,	// (0x000a5733) scroll_pane_cp06_ParamLimits

0xed90,	// (0x000b3cde) main_notes_pane_ParamLimits

0xe653,	// (0x000b35a1) main_welc_pane

0x9476,	// (0x000ae3c4) main_welc_body_pane_ParamLimits

0x9476,	// (0x000ae3c4) main_welc_body_pane

0x9494,	// (0x000ae3e2) main_welc_opti_pane_ParamLimits

0x9494,	// (0x000ae3e2) main_welc_opti_pane

0x94d9,	// (0x000ae427) main_welc_pane_t1_ParamLimits

0x94d9,	// (0x000ae427) main_welc_pane_t1

0x94f7,	// (0x000ae445) main_welc_body_row_pane_ParamLimits

0x94f7,	// (0x000ae445) main_welc_body_row_pane

0xe645,	// (0x000b3593) main_welc_opti_row_pane_ParamLimits

0xe645,	// (0x000b3593) main_welc_opti_row_pane

0xf08b,	// (0x000b3fd9) main_welc_opti_row_pane_g1

0x950b,	// (0x000ae459) main_welc_opti_row_pane_t1

0xf093,	// (0x000b3fe1) main_welc_body_row_pane_t1

0xe3f3,	// (0x000b3341) popup_notif_wgt_heading_pane

0xe40d,	// (0x000b335b) aid_size_list_notif_wgt_del_ParamLimits

0xe41a,	// (0x000b3368) list_notif_wgt_row_pane_g1_ParamLimits

0xe426,	// (0x000b3374) list_notif_wgt_row_pane_g2_ParamLimits

0xe43a,	// (0x000b3388) list_notif_wgt_row_pane_g3_ParamLimits

0x0079,	// (0x000a4fc7) list_notif_wgt_row_pane_g_ParamLimits

0xe447,	// (0x000b3395) list_notif_wgt_row_pane_t1_ParamLimits

0xe45d,	// (0x000b33ab) list_notif_wgt_row_pane_t2_ParamLimits

0xe46f,	// (0x000b33bd) list_notif_wgt_row_pane_t3_ParamLimits

0x0080,	// (0x000a4fce) list_notif_wgt_row_pane_t_ParamLimits

0x8e57,	// (0x000adda5) listrow_wgtman_pane_g1_ParamLimits

0x8e64,	// (0x000addb2) listrow_wgtman_pane_g2_ParamLimits

0xfe93,	// (0x000b4de1) listrow_wgtman_pane_g_ParamLimits

0x8e82,	// (0x000addd0) listrow_wgtman_pane_t1_ParamLimits

0x8e9a,	// (0x000adde8) listrow_wgtman_pane_t2_ParamLimits

0xfe98,	// (0x000b4de6) listrow_wgtman_pane_t_ParamLimits

0x8ec0,	// (0x000ade0e) wait_bar_pane_cp09_ParamLimits

0xe653,	// (0x000b35a1) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000b3ff0) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000b3ff8) popup_notif_wgt_heading_pane_t1

0xe653,	// (0x000b35a1) main_vids_pane

0xe653,	// (0x000b35a1) vids_listscroll_pane

0x951a,	// (0x000ae468) scroll_pane_cp040

0xe653,	// (0x000b35a1) vids_list_pane

0x9525,	// (0x000ae473) vids_list_double_pane_ParamLimits

0x9525,	// (0x000ae473) vids_list_double_pane

0x9536,	// (0x000ae484) vids_list_double_pane_g1

0x953f,	// (0x000ae48d) vids_list_double_pane_t1

0x954f,	// (0x000ae49d) vids_list_double_pane_t2

0x0001,

0xff1c,	// (0x000b4e6a) vids_list_double_pane_t

0x957d,	// (0x000ae4cb) main_ncimui_pane_ParamLimits

0x75c9,	// (0x000ac517) main_ncimui_pane_g1_ParamLimits

0x75d5,	// (0x000ac523) main_ncimui_pane_g2_ParamLimits

0x75d5,	// (0x000ac523) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b4b38) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b4b38) main_ncimui_pane_g

0x94af,	// (0x000ae3fd) main_welc_pane_g1_ParamLimits

0x94af,	// (0x000ae3fd) main_welc_pane_g1

0x94c4,	// (0x000ae412) main_welc_pane_g2_ParamLimits

0x94c4,	// (0x000ae412) main_welc_pane_g2

0x0001,

0xff17,	// (0x000b4e65) main_welc_pane_g_ParamLimits

0xff17,	// (0x000b4e65) main_welc_pane_g

0xeccb,	// (0x000b3c19) listscroll_mce_pane_ParamLimits

0xa6c8,	// (0x000af616) wait_bar_pane_cp10

0xbad6,	// (0x000b0a24) main_cale_day_pane_ParamLimits

0xbad6,	// (0x000b0a24) main_cale_week_pane_ParamLimits

0xeccb,	// (0x000b3c19) main_messa_pane_ParamLimits

0x4eca,	// (0x000a9e18) main_clock2_btn_pane_ParamLimits

0x4eca,	// (0x000a9e18) main_clock2_btn_pane

0xc342,	// (0x000b1290) main_clock2_btn_pane_cp01_ParamLimits

0xc342,	// (0x000b1290) main_clock2_btn_pane_cp01

0xdf01,	// (0x000b2e4f) list_cale_mrui_pane_ParamLimits

0xe4a5,	// (0x000b33f3) main_cf0_pane_g2

0x0001,

0x0087,	// (0x000a4fd5) main_cf0_pane_g

0x9093,	// (0x000adfe1) area_left_week_number_pane_ParamLimits

0x909f,	// (0x000adfed) area_top_day_name_pane_ParamLimits

0x90b2,	// (0x000ae000) frame_month_view_pane_ParamLimits

0xe5cd,	// (0x000b351b) grid_month_view_pane_ParamLimits

0xe5db,	// (0x000b3529) frm_month_g1_ParamLimits

0x9133,	// (0x000ae081) frm_month_g2_ParamLimits

0x9146,	// (0x000ae094) frm_month_g3_ParamLimits

0x9159,	// (0x000ae0a7) frm_month_g4_ParamLimits

0x916c,	// (0x000ae0ba) frm_month_g5_ParamLimits

0x917f,	// (0x000ae0cd) frm_month_g6_ParamLimits

0x9192,	// (0x000ae0e0) frm_month_g7_ParamLimits

0xe5e8,	// (0x000b3536) frm_month_g8_ParamLimits

0x91a5,	// (0x000ae0f3) frm_month_g9_ParamLimits

0x91b5,	// (0x000ae103) frm_month_g10_ParamLimits

0x91c5,	// (0x000ae113) frm_month_g11_ParamLimits

0x91d5,	// (0x000ae123) frm_month_g12_ParamLimits

0x91e7,	// (0x000ae135) frm_month_g13_ParamLimits

0x91f9,	// (0x000ae147) frm_month_g14_ParamLimits

0x920d,	// (0x000ae15b) frm_month_g15_ParamLimits

0x9221,	// (0x000ae16f) frm_month_g16_ParamLimits

0xfec2,	// (0x000b4e10) frm_month_g_ParamLimits

0xe5f5,	// (0x000b3543) cell_top_day_name_pane_t1_ParamLimits

0x9235,	// (0x000ae183) cell_area_left_week_number_pane_g1_ParamLimits

0x9241,	// (0x000ae18f) cell_area_left_week_number_pane_t1_ParamLimits

0xc162,	// (0x000b10b0) cell_month_view_pane_g1_ParamLimits

0x9254,	// (0x000ae1a2) cell_month_view_pane_t1_ParamLimits

0xecc3,	// (0x000b3c11) main_clock2_btn_pane_g1

0xf0b8,	// (0x000b4006) main_clock2_btn_pane_t1

0xef7c,	// (0x000b3eca) listscroll_cmail_pane_ParamLimits

0xdb5a,	// (0x000b2aa8) main_sp_fs_email_pane_g1_ParamLimits

0xdb66,	// (0x000b2ab4) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b4c33) main_sp_fs_email_pane_g_ParamLimits

0xe0c5,	// (0x000b3013) list_recal_day_pane_ParamLimits

0xe0d6,	// (0x000b3024) mian_recal_day_pane_t1

0x80e1,	// (0x000ad02f) list_single_dyc_row_text_pane_t4_ParamLimits

0x80e1,	// (0x000ad02f) list_single_dyc_row_text_pane_t4

0x812a,	// (0x000ad078) list_single_dyc_row_text_pane_t5_ParamLimits

0x812a,	// (0x000ad078) list_single_dyc_row_text_pane_t5

0xdc0c,	// (0x000b2b5a) list_single_dyc_row_text_pane_t6_ParamLimits

0xdc0c,	// (0x000b2b5a) list_single_dyc_row_text_pane_t6

0x24a7,	// (0x000a73f5) aid_mgn_list_cale_time_pane

0x957d,	// (0x000ae4cb) main_gallery2_pane_ParamLimits

0xc358,	// (0x000b12a6) main_clock2_pane_cp01_t1

0xc368,	// (0x000b12b6) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b4712) main_clock2_pane_cp01_t

0x0b9f,	// (0x000a5aed) cale_week_scroll_pane_g16_ParamLimits

0x0b9f,	// (0x000a5aed) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
