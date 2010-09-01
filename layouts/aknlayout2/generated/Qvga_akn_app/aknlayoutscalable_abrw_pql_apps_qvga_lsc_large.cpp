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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007da67 };

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
0x3332,	// (0x00080d99) Screen

0x333c,	// (0x00080da3) application_window

0x337c,	// (0x00080de3) area_bottom_pane_ParamLimits

0x337c,	// (0x00080de3) area_bottom_pane

0x33af,	// (0x00080e16) area_top_pane_ParamLimits

0x33af,	// (0x00080e16) area_top_pane

0xac6f,	// (0x000886d6) call_video_uplink_pane_ParamLimits

0xac6f,	// (0x000886d6) call_video_uplink_pane

0x342f,	// (0x00080e96) main_pane_ParamLimits

0x342f,	// (0x00080e96) main_pane

0xc336,	// (0x00089d9d) context_pane

0x604d,	// (0x00083ab4) navi_pane

0x6076,	// (0x00083add) popup_cale_events_window_ParamLimits

0x6076,	// (0x00083add) popup_cale_events_window

0xc349,	// (0x00089db0) popup_mup_playback_window

0x608e,	// (0x00083af5) signal_pane

0xb413,	// (0x00088e7a) main_browser_pane

0xb678,	// (0x000890df) main_burst_pane

0xea89,	// (0x0008c4f0) main_calc_pane

0xc320,	// (0x00089d87) main_cale_day_pane

0x5df3,	// (0x0008385a) main_cale_month_pane

0xc320,	// (0x00089d87) main_cale_week_pane

0xb678,	// (0x000890df) main_call_pane

0xb0a6,	// (0x00088b0d) main_call_poc_pane

0xb678,	// (0x000890df) main_camera_pane

0xb678,	// (0x000890df) main_chi_dic_pane

0x11a1,	// (0x0007ec08) main_clock_pane

0xb0a6,	// (0x00088b0d) main_fmradio_pane

0xb678,	// (0x000890df) main_graph_messa_pane

0xb0a6,	// (0x00088b0d) main_help_pane

0xb413,	// (0x00088e7a) main_im_pane

0xb301,	// (0x00088d68) main_image_pane_ParamLimits

0xb301,	// (0x00088d68) main_image_pane

0xb0a6,	// (0x00088b0d) main_location2_pane

0xb678,	// (0x000890df) main_location_pane

0xb301,	// (0x00088d68) main_messa_pane

0xb0a6,	// (0x00088b0d) main_mp2_pane

0xb678,	// (0x000890df) main_mp_pane

0xb0a6,	// (0x00088b0d) main_msg_pane

0xb0a6,	// (0x00088b0d) main_mup_eq_pane

0xb0a6,	// (0x00088b0d) main_mup_pane

0xb413,	// (0x00088e7a) main_notes_pane

0xb0a6,	// (0x00088b0d) main_pec_pane

0xb0a6,	// (0x00088b0d) main_phob_pane

0xb0a6,	// (0x00088b0d) main_pinb_pane

0xb0a6,	// (0x00088b0d) main_postcard_pane

0xb0a6,	// (0x00088b0d) main_qdial_pane

0xb678,	// (0x000890df) main_skin_pane

0xb0a6,	// (0x00088b0d) main_smil2_pane

0xb678,	// (0x000890df) main_smil_pane

0xb678,	// (0x000890df) main_video_pane

0xb678,	// (0x000890df) main_video_tele_pane

0xb301,	// (0x00088d68) main_viewer_pane_ParamLimits

0xb301,	// (0x00088d68) main_viewer_pane

0xb678,	// (0x000890df) main_vorec_pane

0x5e41,	// (0x000838a8) popup_blid_sat_info_window_ParamLimits

0x5e41,	// (0x000838a8) popup_blid_sat_info_window

0x5e97,	// (0x000838fe) popup_dyc_status_message_window_ParamLimits

0x5e97,	// (0x000838fe) popup_dyc_status_message_window

0x5ead,	// (0x00083914) popup_grid_large_graphic_window_ParamLimits

0x5ead,	// (0x00083914) popup_grid_large_graphic_window

0x5f43,	// (0x000839aa) popup_loc_request_window_ParamLimits

0x5f43,	// (0x000839aa) popup_loc_request_window

0x6027,	// (0x00083a8e) popup_wml_address_window_ParamLimits

0x6027,	// (0x00083a8e) popup_wml_address_window

0x5c69,	// (0x000836d0) call_muted_g1

0x5c79,	// (0x000836e0) popup_call_audio_conf_window_ParamLimits

0x5c79,	// (0x000836e0) popup_call_audio_conf_window

0x5c97,	// (0x000836fe) popup_call_audio_first_window_ParamLimits

0x5c97,	// (0x000836fe) popup_call_audio_first_window

0x5cf5,	// (0x0008375c) popup_call_audio_in_window_ParamLimits

0x5cf5,	// (0x0008375c) popup_call_audio_in_window

0x5d21,	// (0x00083788) popup_call_audio_out_window_ParamLimits

0x5d21,	// (0x00083788) popup_call_audio_out_window

0x5d4f,	// (0x000837b6) popup_call_audio_second_window_ParamLimits

0x5d4f,	// (0x000837b6) popup_call_audio_second_window

0x5d95,	// (0x000837fc) popup_call_audio_wait_window_ParamLimits

0x5d95,	// (0x000837fc) popup_call_audio_wait_window

0x5dc8,	// (0x0008382f) popup_number_entry_window_ParamLimits

0x5dc8,	// (0x0008382f) popup_number_entry_window

0xac95,	// (0x000886fc) bg_popup_call_pane_cp05_ParamLimits

0xac95,	// (0x000886fc) bg_popup_call_pane_cp05

0xacb5,	// (0x0008871c) popup_number_entry_window_t1

0xacc8,	// (0x0008872f) popup_number_entry_window_t2

0xacda,	// (0x00088741) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0008caec) popup_number_entry_window_t

0xacec,	// (0x00088753) text_title_cp2

0xacff,	// (0x00088766) bg_popup_call_pane_cp_ParamLimits

0xacff,	// (0x00088766) bg_popup_call_pane_cp

0xad0d,	// (0x00088774) call_thumbnail_pane

0xad15,	// (0x0008877c) popup_call_audio_in_window_g1_ParamLimits

0xad15,	// (0x0008877c) popup_call_audio_in_window_g1

0xad21,	// (0x00088788) popup_call_audio_in_window_g2_ParamLimits

0xad21,	// (0x00088788) popup_call_audio_in_window_g2

0xad2d,	// (0x00088794) popup_call_audio_in_window_g3_ParamLimits

0xad2d,	// (0x00088794) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0008caf5) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0008caf5) popup_call_audio_in_window_g

0xad39,	// (0x000887a0) popup_call_audio_in_window_t1_ParamLimits

0xad39,	// (0x000887a0) popup_call_audio_in_window_t1

0xad54,	// (0x000887bb) popup_call_audio_in_window_t2_ParamLimits

0xad54,	// (0x000887bb) popup_call_audio_in_window_t2

0xad6f,	// (0x000887d6) popup_call_audio_in_window_t3_ParamLimits

0xad6f,	// (0x000887d6) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0008cafc) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0008cafc) popup_call_audio_in_window_t

0xacff,	// (0x00088766) bg_popup_call_pane_cp01_ParamLimits

0xacff,	// (0x00088766) bg_popup_call_pane_cp01

0xad0d,	// (0x00088774) call_thumbnail_pane_cp02

0xad82,	// (0x000887e9) call_type_pane_cp022

0xad8a,	// (0x000887f1) popup_call_audio_out_window_g1_ParamLimits

0xad8a,	// (0x000887f1) popup_call_audio_out_window_g1

0xad9c,	// (0x00088803) popup_call_audio_out_window_g2_ParamLimits

0xad9c,	// (0x00088803) popup_call_audio_out_window_g2

0xada8,	// (0x0008880f) popup_call_audio_out_window_g3_ParamLimits

0xada8,	// (0x0008880f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0008cb03) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0008cb03) popup_call_audio_out_window_g

0xadba,	// (0x00088821) popup_call_audio_out_window_t1_ParamLimits

0xadba,	// (0x00088821) popup_call_audio_out_window_t1

0xadd2,	// (0x00088839) popup_call_audio_out_window_t2_ParamLimits

0xadd2,	// (0x00088839) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0008cb0a) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0008cb0a) popup_call_audio_out_window_t

0xade7,	// (0x0008884e) bg_popup_call_pane_ParamLimits

0xade7,	// (0x0008884e) bg_popup_call_pane

0x35b8,	// (0x0008101f) call_thumbnail_pane_cp_ParamLimits

0x35b8,	// (0x0008101f) call_thumbnail_pane_cp

0xae6b,	// (0x000888d2) call_type_pane_cp01_ParamLimits

0xae6b,	// (0x000888d2) call_type_pane_cp01

0xaeaf,	// (0x00088916) popup_call_audio_first_window_g1_ParamLimits

0xaeaf,	// (0x00088916) popup_call_audio_first_window_g1

0xaefb,	// (0x00088962) popup_call_audio_first_window_g2_ParamLimits

0xaefb,	// (0x00088962) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0008cb0f) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0008cb0f) popup_call_audio_first_window_g

0xaf3f,	// (0x000889a6) popup_call_audio_first_window_t1_ParamLimits

0xaf3f,	// (0x000889a6) popup_call_audio_first_window_t1

0xafeb,	// (0x00088a52) popup_call_audio_first_window_t4_ParamLimits

0xafeb,	// (0x00088a52) popup_call_audio_first_window_t4

0xb077,	// (0x00088ade) popup_call_audio_first_window_t5_ParamLimits

0xb077,	// (0x00088ade) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0008cb14) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0008cb14) popup_call_audio_first_window_t

0xb0a6,	// (0x00088b0d) bg_popup_call_pane_cp02

0xb0b0,	// (0x00088b17) call_type_pane_cp023

0xb0b8,	// (0x00088b1f) popup_call_audio_wait_window_g1

0xb0c0,	// (0x00088b27) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0008cb1b) popup_call_audio_wait_window_g

0xb0c8,	// (0x00088b2f) popup_call_audio_wait_window_t3

0xb0d6,	// (0x00088b3d) bg_popup_call_pane_cp03_ParamLimits

0xb0d6,	// (0x00088b3d) bg_popup_call_pane_cp03

0xb136,	// (0x00088b9d) call_thumbnail_pane_cp011_ParamLimits

0xb136,	// (0x00088b9d) call_thumbnail_pane_cp011

0xb142,	// (0x00088ba9) call_type_pane_cp034_ParamLimits

0xb142,	// (0x00088ba9) call_type_pane_cp034

0xb17e,	// (0x00088be5) popup_call_audio_second_window_g1_ParamLimits

0xb17e,	// (0x00088be5) popup_call_audio_second_window_g1

0xb1ba,	// (0x00088c21) popup_call_audio_second_window_g2_ParamLimits

0xb1ba,	// (0x00088c21) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0008cb20) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0008cb20) popup_call_audio_second_window_g

0xb1f6,	// (0x00088c5d) popup_call_audio_second_window_t1_ParamLimits

0xb1f6,	// (0x00088c5d) popup_call_audio_second_window_t1

0xb277,	// (0x00088cde) popup_call_audio_second_window_t2_ParamLimits

0xb277,	// (0x00088cde) popup_call_audio_second_window_t2

0xb2ad,	// (0x00088d14) popup_call_audio_second_window_t3_ParamLimits

0xb2ad,	// (0x00088d14) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0008cb25) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0008cb25) popup_call_audio_second_window_t

0xb0a6,	// (0x00088b0d) bg_popup_call_pane_cp04

0xb2e3,	// (0x00088d4a) list_conf_pane

0xb2eb,	// (0x00088d52) popup_call_audio_conf_window_t1

0xb2f9,	// (0x00088d60) call_thumbnail_pane_g1

0xb301,	// (0x00088d68) bg_pinb_pane_ParamLimits

0xb301,	// (0x00088d68) bg_pinb_pane

0xb30f,	// (0x00088d76) find_pinb_pane

0xb301,	// (0x00088d68) listscroll_pinb_pane_ParamLimits

0xb301,	// (0x00088d68) listscroll_pinb_pane

0xb319,	// (0x00088d80) pinb_bg_pane_g1

0xb319,	// (0x00088d80) pinb_bg_pane_g2

0xb319,	// (0x00088d80) pinb_bg_pane_g3

0xb319,	// (0x00088d80) pinb_bg_pane_g4

0xb319,	// (0x00088d80) pinb_bg_pane_g5

0xb319,	// (0x00088d80) pinb_bg_pane_g6

0xb319,	// (0x00088d80) pinb_bg_pane_g7

0xb319,	// (0x00088d80) pinb_bg_pane_g8

0xb319,	// (0x00088d80) pinb_bg_pane_g9

0xb319,	// (0x00088d80) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0008cb2c) pinb_bg_pane_g

0x35e7,	// (0x0008104e) grid_pinb_pane

0x3346,	// (0x00080dad) list_pinb_pane

0xb323,	// (0x00088d8a) scroll_pane_cp01_ParamLimits

0xb323,	// (0x00088d8a) scroll_pane_cp01

0xb330,	// (0x00088d97) find_pinb_pane_g1_ParamLimits

0xb330,	// (0x00088d97) find_pinb_pane_g1

0xb348,	// (0x00088daf) find_pinb_pane_t1

0xb35a,	// (0x00088dc1) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0008cb46) find_pinb_pane_t

0xb36f,	// (0x00088dd6) input_focus_pane_cp01_ParamLimits

0xb36f,	// (0x00088dd6) input_focus_pane_cp01

0x35f1,	// (0x00081058) cell_pinb_pane_ParamLimits

0x35f1,	// (0x00081058) cell_pinb_pane

0xb37b,	// (0x00088de2) cell_pinb_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) cell_pinb_pane_g1

0xb389,	// (0x00088df0) cell_pinb_pane_g2_ParamLimits

0xb389,	// (0x00088df0) cell_pinb_pane_g2

0xb389,	// (0x00088df0) cell_pinb_pane_g3_ParamLimits

0xb389,	// (0x00088df0) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0008cb4b) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0008cb4b) cell_pinb_pane_g

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp01

0x3346,	// (0x00080dad) list_pinb_item_pane_ParamLimits

0x3346,	// (0x00080dad) list_pinb_item_pane

0x3346,	// (0x00080dad) list_highlight_pane_cp02

0xb397,	// (0x00088dfe) list_pinb_item_pane_g1_ParamLimits

0xb397,	// (0x00088dfe) list_pinb_item_pane_g1

0xb389,	// (0x00088df0) list_pinb_item_pane_g2_ParamLimits

0xb389,	// (0x00088df0) list_pinb_item_pane_g2

0xb37b,	// (0x00088de2) list_pinb_item_pane_g3_ParamLimits

0xb37b,	// (0x00088de2) list_pinb_item_pane_g3

0xb389,	// (0x00088df0) list_pinb_item_pane_g4_ParamLimits

0xb389,	// (0x00088df0) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0008cb52) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0008cb52) list_pinb_item_pane_g

0xb3a5,	// (0x00088e0c) list_pinb_item_pane_t1_ParamLimits

0xb3a5,	// (0x00088e0c) list_pinb_item_pane_t1

0x3617,	// (0x0008107e) calc_display_pane

0x3633,	// (0x0008109a) calc_paper_pane

0x3654,	// (0x000810bb) grid_calc_pane

0xb0a6,	// (0x00088b0d) bg_list_pane_cp01

0x3670,	// (0x000810d7) clock_g1

0x3678,	// (0x000810df) clock_g2

0x0001,

0xf0f4,	// (0x0008cb5b) clock_g

0x3680,	// (0x000810e7) clock_t1_ParamLimits

0x3680,	// (0x000810e7) clock_t1

0x3695,	// (0x000810fc) clock_t2_ParamLimits

0x3695,	// (0x000810fc) clock_t2

0x36a7,	// (0x0008110e) clock_t3_ParamLimits

0x36a7,	// (0x0008110e) clock_t3

0x36b9,	// (0x00081120) clock_t4_ParamLimits

0x36b9,	// (0x00081120) clock_t4

0x36cb,	// (0x00081132) clock_t5_ParamLimits

0x36cb,	// (0x00081132) clock_t5

0x36e0,	// (0x00081147) clock_t6_ParamLimits

0x36e0,	// (0x00081147) clock_t6

0x36f2,	// (0x00081159) clock_t7_ParamLimits

0x36f2,	// (0x00081159) clock_t7

0x3704,	// (0x0008116b) clock_t8_ParamLimits

0x3704,	// (0x0008116b) clock_t8

0x3716,	// (0x0008117d) clock_t9_ParamLimits

0x3716,	// (0x0008117d) clock_t9

0x0008,

0xf0f9,	// (0x0008cb60) clock_t_ParamLimits

0xf0f9,	// (0x0008cb60) clock_t

0xb3c1,	// (0x00088e28) popup_clock_analogue_window_cp02

0xb3c1,	// (0x00088e28) popup_clock_digital_window_cp01

0xb0a6,	// (0x00088b0d) listscroll_help_pane

0xb0a6,	// (0x00088b0d) phob_pre_status_pane

0xb3c9,	// (0x00088e30) grid_qdial_pane

0xb301,	// (0x00088d68) listscroll_mce_pane

0xb301,	// (0x00088d68) bg_notes_pane

0xb3d3,	// (0x00088e3a) list_notes_pane

0x3728,	// (0x0008118f) scroll_pane_cp06

0xb3e1,	// (0x00088e48) bg_calc_paper_pane

0xb3f9,	// (0x00088e60) list_calc_pane

0xb413,	// (0x00088e7a) bg_calc_display_pane

0xb41f,	// (0x00088e86) calc_display_pane_t1

0xb434,	// (0x00088e9b) calc_display_pane_t2

0xb449,	// (0x00088eb0) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0008cb73) calc_display_pane_t

0x373a,	// (0x000811a1) cell_calc_pane_ParamLimits

0x373a,	// (0x000811a1) cell_calc_pane

0xb45b,	// (0x00088ec2) bg_calc_paper_pane_g1

0xb467,	// (0x00088ece) bg_calc_paper_pane_g2

0xb473,	// (0x00088eda) bg_calc_paper_pane_g3

0xb47f,	// (0x00088ee6) bg_calc_paper_pane_g4

0xb48b,	// (0x00088ef2) bg_calc_paper_pane_g5

0x376d,	// (0x000811d4) bg_calc_paper_pane_g6

0x377c,	// (0x000811e3) bg_calc_paper_pane_g7

0x378b,	// (0x000811f2) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0008cb7a) bg_calc_paper_pane_g

0x379a,	// (0x00081201) calc_bg_paper_pane_g9

0x37a9,	// (0x00081210) list_calc_item_pane_ParamLimits

0x37a9,	// (0x00081210) list_calc_item_pane

0xb497,	// (0x00088efe) list_calc_item_pane_g1

0xb4a4,	// (0x00088f0b) list_calc_item_pane_t1_ParamLimits

0xb4a4,	// (0x00088f0b) list_calc_item_pane_t1

0x37bd,	// (0x00081224) list_calc_item_pane_t2_ParamLimits

0x37bd,	// (0x00081224) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0008cb8b) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0008cb8b) list_calc_item_pane_t

0xb319,	// (0x00088d80) cell_calc_pane_g1

0xb4b6,	// (0x00088f1d) grid_highlight_pane_cp02

0xb4d8,	// (0x00088f3f) bg_calc_display_pane_g1

0xb4e1,	// (0x00088f48) bg_calc_display_pane_g2

0xb4eb,	// (0x00088f52) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0008cb95) bg_calc_display_pane_g

0x37eb,	// (0x00081252) cell_qdial_pane_ParamLimits

0x37eb,	// (0x00081252) cell_qdial_pane

0x37fd,	// (0x00081264) cell_qdial_pane_g1_ParamLimits

0x37fd,	// (0x00081264) cell_qdial_pane_g1

0x3813,	// (0x0008127a) cell_qdial_pane_g2_ParamLimits

0x3813,	// (0x0008127a) cell_qdial_pane_g2

0xb4f4,	// (0x00088f5b) cell_qdial_pane_g3_ParamLimits

0xb4f4,	// (0x00088f5b) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0008cb9c) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0008cb9c) cell_qdial_pane_g

0x383a,	// (0x000812a1) cell_qdial_pane_t1_ParamLimits

0x383a,	// (0x000812a1) cell_qdial_pane_t1

0x3852,	// (0x000812b9) cell_qdial_pane_t2_ParamLimits

0x3852,	// (0x000812b9) cell_qdial_pane_t2

0x3865,	// (0x000812cc) cell_qdial_pane_t3_ParamLimits

0x3865,	// (0x000812cc) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0008cba5) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0008cba5) cell_qdial_pane_t

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp04

0xb500,	// (0x00088f67) thumbnail_qdial_pane_ParamLimits

0xb500,	// (0x00088f67) thumbnail_qdial_pane

0xb55c,	// (0x00088fc3) list_help_pane

0xb566,	// (0x00088fcd) scroll_pane_cp02

0x3878,	// (0x000812df) help_list_pane_t1_ParamLimits

0x3878,	// (0x000812df) help_list_pane_t1

0xb56f,	// (0x00088fd6) bg_notes_pane_g2

0xb577,	// (0x00088fde) bg_notes_pane_g3

0xb57f,	// (0x00088fe6) notes_bg_pane_g1

0xb587,	// (0x00088fee) notes_bg_pane_g4

0xb58f,	// (0x00088ff6) notes_bg_pane_g5

0xb597,	// (0x00088ffe) notes_bg_pane_g6

0xb59f,	// (0x00089006) notes_bg_pane_g7

0xb5a7,	// (0x0008900e) notes_bg_pane_g8

0xb5af,	// (0x00089016) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0008cbc3) notes_bg_pane_g

0x3895,	// (0x000812fc) list_notes_text_pane_ParamLimits

0x3895,	// (0x000812fc) list_notes_text_pane

0xb5b7,	// (0x0008901e) list_notes_text_pane_g1

0x38b8,	// (0x0008131f) list_notes_text_pane_t1

0x38c6,	// (0x0008132d) listscroll_cale_week_pane

0x38f0,	// (0x00081357) bg_cale_heading_pane

0xb5da,	// (0x00089041) bg_cale_pane_cp01

0x3908,	// (0x0008136f) cale_week_corner_pane

0x3927,	// (0x0008138e) cale_week_day_heading_pane

0x3944,	// (0x000813ab) cale_week_scroll_pane_g1

0x3957,	// (0x000813be) cale_week_scroll_pane_g2

0x396f,	// (0x000813d6) cale_week_scroll_pane_g3

0x3987,	// (0x000813ee) cale_week_scroll_pane_g4

0x399f,	// (0x00081406) cale_week_scroll_pane_g5

0x39b7,	// (0x0008141e) cale_week_scroll_pane_g6

0x39cf,	// (0x00081436) cale_week_scroll_pane_g7

0x39e7,	// (0x0008144e) cale_week_scroll_pane_g8

0x3a03,	// (0x0008146a) cale_week_scroll_pane_g9

0x3a1b,	// (0x00081482) cale_week_scroll_pane_g10

0x3a33,	// (0x0008149a) cale_week_scroll_pane_g11

0x3a4b,	// (0x000814b2) cale_week_scroll_pane_g12

0x3a63,	// (0x000814ca) cale_week_scroll_pane_g13

0x3a7b,	// (0x000814e2) cale_week_scroll_pane_g14

0x3a93,	// (0x000814fa) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0008cbd2) cale_week_scroll_pane_g

0x3ac7,	// (0x0008152e) cale_week_time_pane

0x3ae3,	// (0x0008154a) grid_cale_week_pane

0xb609,	// (0x00089070) scroll_pane_cp08

0x3b01,	// (0x00081568) cell_cale_week_pane_ParamLimits

0x3b01,	// (0x00081568) cell_cale_week_pane

0x3b77,	// (0x000815de) cale_week_day_heading_pane_t1

0x3ba1,	// (0x00081608) cale_week_day_heading_pane_t2

0x3bd0,	// (0x00081637) cale_week_day_heading_pane_t3

0x3bff,	// (0x00081666) cale_week_day_heading_pane_t4

0x3c2e,	// (0x00081695) cale_week_day_heading_pane_t5

0x3c5d,	// (0x000816c4) cale_week_day_heading_pane_t6

0x3c8c,	// (0x000816f3) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0008cbf3) cale_week_day_heading_pane_t

0xb626,	// (0x0008908d) bg_cale_side_pane

0x3cb6,	// (0x0008171d) cale_week_time_pane_t1

0x3cf0,	// (0x00081757) cale_week_time_pane_t2

0x3d2a,	// (0x00081791) cale_week_time_pane_t3

0x3d64,	// (0x000817cb) cale_week_time_pane_t4

0x3d9e,	// (0x00081805) cale_week_time_pane_t5

0x3dd8,	// (0x0008183f) cale_week_time_pane_t6

0x3e12,	// (0x00081879) cale_week_time_pane_t7

0x3e4c,	// (0x000818b3) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0008cc02) cale_week_time_pane_t

0x3e86,	// (0x000818ed) cell_cale_week_pane_g2

0x3ea5,	// (0x0008190c) cell_cale_week_pane_g3_ParamLimits

0x3ea5,	// (0x0008190c) cell_cale_week_pane_g3

0xb634,	// (0x0008909b) grid_highlight_pane_cp07

0xb63c,	// (0x000890a3) listscroll_gms_pane

0xb646,	// (0x000890ad) grid_gms_pane

0xb64f,	// (0x000890b6) listscroll_gms_pane_g1

0xb657,	// (0x000890be) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0008cc13) listscroll_gms_pane_g

0x3ebd,	// (0x00081924) scroll_pane_cp010

0x3ec8,	// (0x0008192f) cell_gms_pane_ParamLimits

0x3ec8,	// (0x0008192f) cell_gms_pane

0x3ed8,	// (0x0008193f) cell_gms_pane_g1

0xb65f,	// (0x000890c6) cell_gms_pane_g2

0xb5b7,	// (0x0008901e) cell_gms_pane_g3

0xb667,	// (0x000890ce) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0008cc18) cell_gms_pane_g

0xb670,	// (0x000890d7) grid_highlight_pane_cp09

0x5c17,	// (0x0008367e) phob_pre_status_pane_g1

0x5c1f,	// (0x00083686) phob_pre_status_pane_g2

0x5c27,	// (0x0008368e) phob_pre_status_pane_g3

0x5c2f,	// (0x00083696) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x0008d006) phob_pre_status_pane_g

0x5c3f,	// (0x000836a6) phob_pre_status_pane_t1

0x5c4d,	// (0x000836b4) phob_pre_status_pane_t2

0x5c5b,	// (0x000836c2) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0008d011) phob_pre_status_pane_t

0xb678,	// (0x000890df) bg_list_pane_cp05

0x3ee8,	// (0x0008194f) grid_vorec_pane

0xb680,	// (0x000890e7) vorec_t1

0xb68e,	// (0x000890f5) vorec_t2

0xb69c,	// (0x00089103) vorec_t3

0x3ef0,	// (0x00081957) vorec_t4

0xab6d,	// (0x000885d4) vorec_t5

0xab7b,	// (0x000885e2) vorec_t6

0x0004,

0xf1ba,	// (0x0008cc21) vorec_t

0xab89,	// (0x000885f0) wait_bar_pane_cp01

0x3efe,	// (0x00081965) cell_vorec_pane_ParamLimits

0x3efe,	// (0x00081965) cell_vorec_pane

0xb6b8,	// (0x0008911f) cell_vorec_pane_g1

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp05

0x1497,	// (0x0007eefe) cams_zoom_pane

0x3f11,	// (0x00081978) image_vga_pane

0xb37b,	// (0x00088de2) main_camera_pane_g1

0xb37b,	// (0x00088de2) main_camera_pane_g2

0xb37b,	// (0x00088de2) main_camera_pane_g3

0xb37b,	// (0x00088de2) main_camera_pane_g4

0xb37b,	// (0x00088de2) main_camera_pane_g5

0xb37b,	// (0x00088de2) main_camera_pane_g6

0xb37b,	// (0x00088de2) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0008cc2c) main_camera_pane_g

0x1483,	// (0x0007eeea) main_camera_pane_t1

0x1483,	// (0x0007eeea) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0008cc3d) main_camera_pane_t

0x3f40,	// (0x000819a7) cams_zoom_pane_cp_ParamLimits

0x3f40,	// (0x000819a7) cams_zoom_pane_cp

0x3f68,	// (0x000819cf) image_cif_pane_ParamLimits

0x3f68,	// (0x000819cf) image_cif_pane

0x3f99,	// (0x00081a00) image_subqcif_pane

0x3fa1,	// (0x00081a08) main_video_pane_g1_ParamLimits

0x3fa1,	// (0x00081a08) main_video_pane_g1

0x3fc5,	// (0x00081a2c) main_video_pane_g2_ParamLimits

0x3fc5,	// (0x00081a2c) main_video_pane_g2

0x3ff9,	// (0x00081a60) main_video_pane_g3_ParamLimits

0x3ff9,	// (0x00081a60) main_video_pane_g3

0x4027,	// (0x00081a8e) main_video_pane_g4_ParamLimits

0x4027,	// (0x00081a8e) main_video_pane_g4

0x4055,	// (0x00081abc) main_video_pane_g5_ParamLimits

0x4055,	// (0x00081abc) main_video_pane_g5

0xb6c2,	// (0x00089129) main_video_pane_g6_ParamLimits

0xb6c2,	// (0x00089129) main_video_pane_g6

0x0006,

0xf1db,	// (0x0008cc42) main_video_pane_g_ParamLimits

0xf1db,	// (0x0008cc42) main_video_pane_g

0x407c,	// (0x00081ae3) main_video_pane_t1_ParamLimits

0x407c,	// (0x00081ae3) main_video_pane_t1

0xb6dc,	// (0x00089143) cams_zoom_pane_g1

0xb6dc,	// (0x00089143) cams_zoom_pane_g2

0xb6dc,	// (0x00089143) cams_zoom_pane_g3

0xb6dc,	// (0x00089143) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0008cc51) cams_zoom_pane_g

0x40d9,	// (0x00081b40) grid_cams_pane

0x40ee,	// (0x00081b55) linegrid_cams_pane

0x40ff,	// (0x00081b66) cell_cams_pane_ParamLimits

0x40ff,	// (0x00081b66) cell_cams_pane

0xb6e6,	// (0x0008914d) cams_burst_image_pane

0xb6ee,	// (0x00089155) cell_cams_pane_g1

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp03

0xb319,	// (0x00088d80) mp_bg_pane_g1

0xb0a6,	// (0x00088b0d) bg_list_pane_cp03

0xc245,	// (0x00089cac) bg_mp_pane

0xc24d,	// (0x00089cb4) grid_mp_pane

0xc255,	// (0x00089cbc) media_player_g1

0xc25d,	// (0x00089cc4) media_player_t1

0xc26b,	// (0x00089cd2) media_player_t2

0xc279,	// (0x00089ce0) media_player_t3

0xc287,	// (0x00089cee) media_player_t4

0xc295,	// (0x00089cfc) media_player_t5

0xc2a3,	// (0x00089d0a) media_player_t6

0xc2b1,	// (0x00089d18) media_player_t7

0x0006,

0xf589,	// (0x0008cff0) media_player_t

0xc2bf,	// (0x00089d26) wait_bar_pane_cp02

0xf56e,	// (0x0008cfd5) main_usb_pane_t

0x5c0e,	// (0x00083675) cell_mp_pane

0xb319,	// (0x00088d80) cell_mp_pane_g1

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp06

0xb734,	// (0x0008919b) grid_skin_colour_pane

0xb73c,	// (0x000891a3) list_highlight_pane_cp03

0x411d,	// (0x00081b84) skin_g1

0xb744,	// (0x000891ab) skin_t1

0xb753,	// (0x000891ba) skin_t2

0x0001,

0xf218,	// (0x0008cc7f) skin_t

0x4125,	// (0x00081b8c) cell_skin_colour_pane_ParamLimits

0x4125,	// (0x00081b8c) cell_skin_colour_pane

0xb761,	// (0x000891c8) cell_skin_colour_pane_g1

0x418e,	// (0x00081bf5) call_video_g1_ParamLimits

0x418e,	// (0x00081bf5) call_video_g1

0x41a4,	// (0x00081c0b) call_video_g2_ParamLimits

0x41a4,	// (0x00081c0b) call_video_g2

0x0001,

0xf21d,	// (0x0008cc84) call_video_g_ParamLimits

0xf21d,	// (0x0008cc84) call_video_g

0x41ec,	// (0x00081c53) call_video_uplink_pane_cp1_ParamLimits

0x41ec,	// (0x00081c53) call_video_uplink_pane_cp1

0xb773,	// (0x000891da) call_video_uplink_pane_cp2

0x4281,	// (0x00081ce8) video_down_crop_pane_ParamLimits

0x4281,	// (0x00081ce8) video_down_crop_pane

0x4344,	// (0x00081dab) video_down_pane_ParamLimits

0x4344,	// (0x00081dab) video_down_pane

0xb77b,	// (0x000891e2) video_down_subqcif_pane_ParamLimits

0xb77b,	// (0x000891e2) video_down_subqcif_pane

0xb793,	// (0x000891fa) video_down_subqcif_pane_cp_ParamLimits

0xb793,	// (0x000891fa) video_down_subqcif_pane_cp

0xb7b7,	// (0x0008921e) im_reading_pane_ParamLimits

0xb7b7,	// (0x0008921e) im_reading_pane

0x4401,	// (0x00081e68) im_writing_pane_ParamLimits

0x4401,	// (0x00081e68) im_writing_pane

0x4417,	// (0x00081e7e) im_reading_pane_t1

0xb7d1,	// (0x00089238) list_im_pane

0xb7e2,	// (0x00089249) scroll_pane_cp07

0x444d,	// (0x00081eb4) im_writing_pane_t1_ParamLimits

0x444d,	// (0x00081eb4) im_writing_pane_t1

0xb7fb,	// (0x00089262) im_writing_pane_t2_ParamLimits

0xb7fb,	// (0x00089262) im_writing_pane_t2

0x0001,

0xf227,	// (0x0008cc8e) im_writing_pane_t_ParamLimits

0xf227,	// (0x0008cc8e) im_writing_pane_t

0xb0a6,	// (0x00088b0d) input_focus_pane_cp04

0xb0a6,	// (0x00088b0d) input_focus_pane_cp05

0x4462,	// (0x00081ec9) list_im_single_pane_ParamLimits

0x4462,	// (0x00081ec9) list_im_single_pane

0xb818,	// (0x0008927f) list_single_im_pane_t1

0x5bd4,	// (0x0008363b) blid_accuracy_pane

0x5bdc,	// (0x00083643) blid_compass_pane

0x5be4,	// (0x0008364b) main_location_t1

0x5bf2,	// (0x00083659) main_location_t2

0x5c00,	// (0x00083667) main_location_t3

0x0002,

0xf598,	// (0x0008cfff) main_location_t

0xb0a6,	// (0x00088b0d) aid_levels_location

0xb319,	// (0x00088d80) blid_accuracy_pane_g1

0xb319,	// (0x00088d80) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0008cce2) blid_accuracy_pane_g

0xb852,	// (0x000892b9) wml_content_pane

0xb890,	// (0x000892f7) wml_button_pane_ParamLimits

0xb890,	// (0x000892f7) wml_button_pane

0x4478,	// (0x00081edf) wml_list_single_large_pane_ParamLimits

0x4478,	// (0x00081edf) wml_list_single_large_pane

0x448c,	// (0x00081ef3) wml_list_single_medium_pane_ParamLimits

0x448c,	// (0x00081ef3) wml_list_single_medium_pane

0x44a1,	// (0x00081f08) wml_list_single_small_pane_ParamLimits

0x44a1,	// (0x00081f08) wml_list_single_small_pane

0xb8a4,	// (0x0008930b) wml_selection_box_pane_ParamLimits

0xb8a4,	// (0x0008930b) wml_selection_box_pane

0xb8b7,	// (0x0008931e) wml_list_single_pane_t1

0xb8c6,	// (0x0008932d) wml_list_single_medium_pane_t1

0xb8d5,	// (0x0008933c) wml_list_single_large_pane_t1

0xb8e4,	// (0x0008934b) input_focus_pane_cp02_ParamLimits

0xb8e4,	// (0x0008934b) input_focus_pane_cp02

0xb8f7,	// (0x0008935e) wml_selection_box_pane_g1

0xb900,	// (0x00089367) wml_selection_box_pane_t1_ParamLimits

0xb900,	// (0x00089367) wml_selection_box_pane_t1

0xb301,	// (0x00088d68) bg_wml_button_pane_ParamLimits

0xb301,	// (0x00088d68) bg_wml_button_pane

0xb918,	// (0x0008937f) wml_button_pane_g1

0xb920,	// (0x00089387) wml_button_pane_t1

0xb918,	// (0x0008937f) wml_button_bg_pane_g1

0xb930,	// (0x00089397) wml_button_bg_pane_g2

0xb938,	// (0x0008939f) wml_button_bg_pane_g3

0xb940,	// (0x000893a7) wml_button_bg_pane_g4

0xb948,	// (0x000893af) wml_button_bg_pane_g5

0xb950,	// (0x000893b7) wml_button_bg_pane_g6

0xb958,	// (0x000893bf) wml_button_bg_pane_g7

0xb960,	// (0x000893c7) wml_button_bg_pane_g8

0xb968,	// (0x000893cf) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0008cc93) wml_button_bg_pane_g

0x44b8,	// (0x00081f1f) bg_list_pane_cp02

0xb970,	// (0x000893d7) mce_header_pane_ParamLimits

0xb970,	// (0x000893d7) mce_header_pane

0xb984,	// (0x000893eb) mce_icon_pane

0xb984,	// (0x000893eb) mce_image_pane

0xb98d,	// (0x000893f4) mce_text_pane_ParamLimits

0xb98d,	// (0x000893f4) mce_text_pane

0x44c1,	// (0x00081f28) scroll_pane_cp03

0x44c1,	// (0x00081f28) scroll_pane_cp04

0xb9a1,	// (0x00089408) scroll_pane_cp05_ParamLimits

0xb9a1,	// (0x00089408) scroll_pane_cp05

0x44cb,	// (0x00081f32) mce_header_field_pane_ParamLimits

0x44cb,	// (0x00081f32) mce_header_field_pane

0x44e2,	// (0x00081f49) mce_header_field_pane_2_ParamLimits

0x44e2,	// (0x00081f49) mce_header_field_pane_2

0x44f8,	// (0x00081f5f) mce_header_field_pane_3

0x4500,	// (0x00081f67) list_single_mce_message_pane_ParamLimits

0x4500,	// (0x00081f67) list_single_mce_message_pane

0x4515,	// (0x00081f7c) list_single_mce_smart_pane_ParamLimits

0x4515,	// (0x00081f7c) list_single_mce_smart_pane

0xb9ad,	// (0x00089414) input_focus_pane_cp03

0xb9b6,	// (0x0008941d) list_header_data_pane

0x4535,	// (0x00081f9c) mce_header_field_pane_t1

0x4543,	// (0x00081faa) list_single_mce_header_pane_ParamLimits

0x4543,	// (0x00081faa) list_single_mce_header_pane

0xb9be,	// (0x00089425) list_single_mce_header_pane_t1

0xb9cd,	// (0x00089434) list_single_mce_message_pane_g1

0xb9d6,	// (0x0008943d) list_single_mce_message_pane_t1

0x457d,	// (0x00081fe4) bg_cale_heading_pane_cp01_ParamLimits

0x457d,	// (0x00081fe4) bg_cale_heading_pane_cp01

0xb9e5,	// (0x0008944c) bg_cale_pane_cp02_ParamLimits

0xb9e5,	// (0x0008944c) bg_cale_pane_cp02

0x45ac,	// (0x00082013) cale_month_corner_pane

0x45cb,	// (0x00082032) cale_month_day_heading_pane_ParamLimits

0x45cb,	// (0x00082032) cale_month_day_heading_pane

0x4602,	// (0x00082069) cale_month_pane_g1_ParamLimits

0x4602,	// (0x00082069) cale_month_pane_g1

0x4626,	// (0x0008208d) cale_month_pane_g2_ParamLimits

0x4626,	// (0x0008208d) cale_month_pane_g2

0x464e,	// (0x000820b5) cale_month_pane_g3_ParamLimits

0x464e,	// (0x000820b5) cale_month_pane_g3

0x468a,	// (0x000820f1) cale_month_pane_g4_ParamLimits

0x468a,	// (0x000820f1) cale_month_pane_g4

0x46c6,	// (0x0008212d) cale_month_pane_g5_ParamLimits

0x46c6,	// (0x0008212d) cale_month_pane_g5

0x4702,	// (0x00082169) cale_month_pane_g6_ParamLimits

0x4702,	// (0x00082169) cale_month_pane_g6

0x473e,	// (0x000821a5) cale_month_pane_g7_ParamLimits

0x473e,	// (0x000821a5) cale_month_pane_g7

0x477a,	// (0x000821e1) cale_month_pane_g8_ParamLimits

0x477a,	// (0x000821e1) cale_month_pane_g8

0x47be,	// (0x00082225) cale_month_pane_g9_ParamLimits

0x47be,	// (0x00082225) cale_month_pane_g9

0x4800,	// (0x00082267) cale_month_pane_g10_ParamLimits

0x4800,	// (0x00082267) cale_month_pane_g10

0x4842,	// (0x000822a9) cale_month_pane_g11_ParamLimits

0x4842,	// (0x000822a9) cale_month_pane_g11

0x4884,	// (0x000822eb) cale_month_pane_g12_ParamLimits

0x4884,	// (0x000822eb) cale_month_pane_g12

0x48c6,	// (0x0008232d) cale_month_pane_g13_ParamLimits

0x48c6,	// (0x0008232d) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0008cca6) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0008cca6) cale_month_pane_g

0x4908,	// (0x0008236f) cale_month_week_pane

0x4924,	// (0x0008238b) grid_cale_month_pane_ParamLimits

0x4924,	// (0x0008238b) grid_cale_month_pane

0x4952,	// (0x000823b9) cale_month_day_heading_pane_t1

0x49d8,	// (0x0008243f) cale_month_day_heading_pane_t2

0x4a69,	// (0x000824d0) cale_month_day_heading_pane_t3

0x4afa,	// (0x00082561) cale_month_day_heading_pane_t4

0x4b8b,	// (0x000825f2) cale_month_day_heading_pane_t5

0x4c1c,	// (0x00082683) cale_month_day_heading_pane_t6

0x4cad,	// (0x00082714) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0008ccc1) cale_month_day_heading_pane_t

0xb626,	// (0x0008908d) bg_cale_side_pane_cp01

0x4d42,	// (0x000827a9) cale_month_week_pane_t1

0x4d5b,	// (0x000827c2) cale_month_week_pane_t2

0x4d74,	// (0x000827db) cale_month_week_pane_t3

0x4d8d,	// (0x000827f4) cale_month_week_pane_t4

0x4da6,	// (0x0008280d) cale_month_week_pane_t5

0x4dbf,	// (0x00082826) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0008ccd0) cale_month_week_pane_t

0x4dd8,	// (0x0008283f) cell_cale_month_pane_ParamLimits

0x4dd8,	// (0x0008283f) cell_cale_month_pane

0xba24,	// (0x0008948b) cell_cale_month_pane_g1

0x4eca,	// (0x00082931) cell_cale_month_pane_t1_ParamLimits

0x4eca,	// (0x00082931) cell_cale_month_pane_t1

0xb634,	// (0x0008909b) grid_highlight_pane_cp08

0xb319,	// (0x00088d80) main_smil_g1

0x4eea,	// (0x00082951) smil_status_pane

0xba30,	// (0x00089497) smil_text_pane

0xc10d,	// (0x00089b74) bg_popup_call3_rect_pane_g8

0xc115,	// (0x00089b7c) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0008cf80) bg_popup_call3_rect_pane_g

0xc395,	// (0x00089dfc) smil_status_volume_pane_g1

0x4efb,	// (0x00082962) smil_status_pane_t1

0xeaf4,	// (0x0008c55b) volume_smil_pane

0xba3a,	// (0x000894a1) list_smil_text_pane

0x4f12,	// (0x00082979) scroll_pane_cp011

0x4f1d,	// (0x00082984) smil_text_list_pane_t1_ParamLimits

0x4f1d,	// (0x00082984) smil_text_list_pane_t1

0xba44,	// (0x000894ab) aid_volume_smil_ParamLimits

0xba44,	// (0x000894ab) aid_volume_smil

0xb319,	// (0x00088d80) smil_volume_pane_g1

0xb319,	// (0x00088d80) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0008cce2) smil_volume_pane_g

0x38c6,	// (0x0008132d) listscroll_cale_day_pane

0xba66,	// (0x000894cd) bg_cale_pane

0xba7e,	// (0x000894e5) list_cale_pane

0xbaa1,	// (0x00089508) scroll_pane_cp09

0xbab2,	// (0x00089519) cale_bg_pane_g1

0xbaba,	// (0x00089521) cale_bg_pane_g2

0xbac2,	// (0x00089529) cale_bg_pane_g3

0xbaca,	// (0x00089531) cale_bg_pane_g4

0xbad2,	// (0x00089539) cale_bg_pane_g5

0xbada,	// (0x00089541) cale_bg_pane_g6

0xbae2,	// (0x00089549) cale_bg_pane_g7

0xbaea,	// (0x00089551) cale_bg_pane_g8

0xbaf2,	// (0x00089559) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0008cce7) cale_bg_pane_g

0x4f61,	// (0x000829c8) list_cale_time_pane_ParamLimits

0x4f61,	// (0x000829c8) list_cale_time_pane

0xbafa,	// (0x00089561) list_cale_time_pane_g1_ParamLimits

0xbafa,	// (0x00089561) list_cale_time_pane_g1

0xbb06,	// (0x0008956d) list_cale_time_pane_g2_ParamLimits

0xbb06,	// (0x0008956d) list_cale_time_pane_g2

0x4f76,	// (0x000829dd) list_cale_time_pane_g3_ParamLimits

0x4f76,	// (0x000829dd) list_cale_time_pane_g3

0x4f82,	// (0x000829e9) list_cale_time_pane_g4_ParamLimits

0x4f82,	// (0x000829e9) list_cale_time_pane_g4

0x4f8e,	// (0x000829f5) list_cale_time_pane_g5_ParamLimits

0x4f8e,	// (0x000829f5) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0008ccfa) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0008ccfa) list_cale_time_pane_g

0x0e09,	// (0x0007e870) list_cale_time_pane_t1_ParamLimits

0x0e09,	// (0x0007e870) list_cale_time_pane_t1

0x0e31,	// (0x0007e898) list_cale_time_pane_t2_ParamLimits

0x0e31,	// (0x0007e898) list_cale_time_pane_t2

0x5230,	// (0x00082c97) aid_blid_cardinal_pane

0x526e,	// (0x00082cd5) compass_pane_t4

0x0e59,	// (0x0007e8c0) list_cale_time_pane_t4_ParamLimits

0x0e59,	// (0x0007e8c0) list_cale_time_pane_t4

0x527c,	// (0x00082ce3) compass_pane_t5

0x528a,	// (0x00082cf1) compass_pane_t6

0x5298,	// (0x00082cff) compass_pane_t7

0x12c6,	// (0x0007ed2d) navi_pane_cc_t1

0x146b,	// (0x0007eed2) aid_phob_thumbnail_center_pane

0x5686,	// (0x000830ed) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0008cd07) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0008cd07) list_cale_time_pane_t

0xacff,	// (0x00088766) bg_popup_window_pane_cp02_ParamLimits

0xacff,	// (0x00088766) bg_popup_window_pane_cp02

0x0e81,	// (0x0007e8e8) heading_pane_cp01_ParamLimits

0x0e81,	// (0x0007e8e8) heading_pane_cp01

0x0e8d,	// (0x0007e8f4) loc_req_pane_ParamLimits

0x0e8d,	// (0x0007e8f4) loc_req_pane

0x0e9d,	// (0x0007e904) loc_type_pane_ParamLimits

0x0e9d,	// (0x0007e904) loc_type_pane

0x0eaf,	// (0x0007e916) loc_type_pane_t1_ParamLimits

0x0eaf,	// (0x0007e916) loc_type_pane_t1

0x0ec1,	// (0x0007e928) loc_type_pane_t2_ParamLimits

0x0ec1,	// (0x0007e928) loc_type_pane_t2

0x0ed3,	// (0x0007e93a) loc_type_pane_t3_ParamLimits

0x0ed3,	// (0x0007e93a) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0008cd0e) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0008cd0e) loc_type_pane_t

0x0ee5,	// (0x0007e94c) list_loc_req_pane

0x0eef,	// (0x0007e956) scroll_pane_cp012

0x4f9a,	// (0x00082a01) list_single_loc_request_popup_menu_pane_ParamLimits

0x4f9a,	// (0x00082a01) list_single_loc_request_popup_menu_pane

0x0ef8,	// (0x0007e95f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0ef8,	// (0x0007e95f) list_single_loc_request_popup_menu_pane_g1

0x0f04,	// (0x0007e96b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0f04,	// (0x0007e96b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0008cd15) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0008cd15) list_single_loc_request_popup_menu_pane_g

0x0f10,	// (0x0007e977) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0f10,	// (0x0007e977) list_single_loc_request_popup_menu_pane_t1

0xb301,	// (0x00088d68) bg_popup_window_pane_cp03_ParamLimits

0xb301,	// (0x00088d68) bg_popup_window_pane_cp03

0x215e,	// (0x0007fbc5) heading_loc_req_pane_ParamLimits

0x215e,	// (0x0007fbc5) heading_loc_req_pane

0x4fa7,	// (0x00082a0e) popup_dyc_status_message_window_g1_ParamLimits

0x4fa7,	// (0x00082a0e) popup_dyc_status_message_window_g1

0x4fbb,	// (0x00082a22) popup_dyc_status_message_window_t1_ParamLimits

0x4fbb,	// (0x00082a22) popup_dyc_status_message_window_t1

0x4fd0,	// (0x00082a37) popup_dyc_status_message_window_t2_ParamLimits

0x4fd0,	// (0x00082a37) popup_dyc_status_message_window_t2

0x4fe5,	// (0x00082a4c) popup_dyc_status_message_window_t3_ParamLimits

0x4fe5,	// (0x00082a4c) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0008cd1a) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0008cd1a) popup_dyc_status_message_window_t

0xb0a6,	// (0x00088b0d) bg_heading_pane_cp01

0x0f26,	// (0x0007e98d) heading_loc_req_pane_g1

0x0f2e,	// (0x0007e995) heading_loc_req_pane_g2

0x0f36,	// (0x0007e99d) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0008cd21) heading_loc_req_pane_g

0x0f3e,	// (0x0007e9a5) heading_loc_req_pane_t1

0x0f4d,	// (0x0007e9b4) bg_popup_sub_pane_cp01_ParamLimits

0x0f4d,	// (0x0007e9b4) bg_popup_sub_pane_cp01

0x0f5b,	// (0x0007e9c2) popup_cale_events_window_g1_ParamLimits

0x0f5b,	// (0x0007e9c2) popup_cale_events_window_g1

0x0f7b,	// (0x0007e9e2) popup_cale_events_window_g2_ParamLimits

0x0f7b,	// (0x0007e9e2) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x0008cd55) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x0008cd55) popup_cale_events_window_g

0x0f9b,	// (0x0007ea02) popup_cale_events_window_t1_ParamLimits

0x0f9b,	// (0x0007ea02) popup_cale_events_window_t1

0x0fad,	// (0x0007ea14) popup_cale_events_window_t2_ParamLimits

0x0fad,	// (0x0007ea14) popup_cale_events_window_t2

0x0feb,	// (0x0007ea52) popup_cale_events_window_t3_ParamLimits

0x0feb,	// (0x0007ea52) popup_cale_events_window_t3

0x1025,	// (0x0007ea8c) popup_cale_events_window_t4_ParamLimits

0x1025,	// (0x0007ea8c) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x0008cd5a) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x0008cd5a) popup_cale_events_window_t

0x501b,	// (0x00082a82) call_type_pane

0x502b,	// (0x00082a92) popup_call_status_window_g1

0x503f,	// (0x00082aa6) popup_call_status_window_g2

0x5053,	// (0x00082aba) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x0008cd63) popup_call_status_window_g

0x1069,	// (0x0007ead0) call_type_pane_g1

0x1072,	// (0x0007ead9) call_type_pane_g2

0x0001,

0xf303,	// (0x0008cd6a) call_type_pane_g

0xb0a6,	// (0x00088b0d) bg_popup_sub_pane_cp02

0x107b,	// (0x0007eae2) listscroll_popup_wml_pane

0x1083,	// (0x0007eaea) list_wml_pane

0x108d,	// (0x0007eaf4) scroll_pane_cp013

0x5063,	// (0x00082aca) list_single_graphic_popup_wml_pane_ParamLimits

0x5063,	// (0x00082aca) list_single_graphic_popup_wml_pane

0xb319,	// (0x00088d80) list_single_graphic_popup_wml_pane_g1

0x1096,	// (0x0007eafd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0008cd6f) list_single_graphic_popup_wml_pane_g

0x109e,	// (0x0007eb05) list_single_graphic_popup_wml_pane_t1

0x10b4,	// (0x0007eb1b) aid_call_pane

0xb2f9,	// (0x00088d60) popup_clock_analogue_window_g1

0xb2f9,	// (0x00088d60) popup_clock_analogue_window_g2

0xbb3e,	// (0x000895a5) popup_clock_analogue_window_g3

0xbb3e,	// (0x000895a5) popup_clock_analogue_window_g4

0xb319,	// (0x00088d80) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x0008cd74) popup_clock_analogue_window_g

0xbb46,	// (0x000895ad) popup_clock_analogue_window_t1

0xbb54,	// (0x000895bb) clock_digital_number_pane_ParamLimits

0xbb54,	// (0x000895bb) clock_digital_number_pane

0xbb60,	// (0x000895c7) clock_digital_number_pane_cp02_ParamLimits

0xbb60,	// (0x000895c7) clock_digital_number_pane_cp02

0xbb6c,	// (0x000895d3) clock_digital_number_pane_cp03_ParamLimits

0xbb6c,	// (0x000895d3) clock_digital_number_pane_cp03

0xbb78,	// (0x000895df) clock_digital_number_pane_cp04_ParamLimits

0xbb78,	// (0x000895df) clock_digital_number_pane_cp04

0xbb84,	// (0x000895eb) clock_digital_separator_pane_ParamLimits

0xbb84,	// (0x000895eb) clock_digital_separator_pane

0xbb90,	// (0x000895f7) popup_clock_digital_window_t1

0xb319,	// (0x00088d80) clock_digital_number_pane_g1

0xb319,	// (0x00088d80) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0008cce2) clock_digital_number_pane_g

0xb319,	// (0x00088d80) clock_digital_separator_pane_g1

0xb319,	// (0x00088d80) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0008cce2) clock_digital_separator_pane_g

0xb0a6,	// (0x00088b0d) bg_popup_window_pane_cp04

0x10bc,	// (0x0007eb23) heading_pane_cp03

0x10c4,	// (0x0007eb2b) listscroll_popup_gms_pane

0x10cc,	// (0x0007eb33) grid_large_graphic_popup_pane

0x10d6,	// (0x0007eb3d) listscroll_popup_gms_pane_g1

0x10de,	// (0x0007eb45) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x0008cd7f) listscroll_popup_gms_pane_g

0xb888,	// (0x000892ef) scroll_pane_cp014

0x5076,	// (0x00082add) cell_large_graphic_popup_pane_ParamLimits

0x5076,	// (0x00082add) cell_large_graphic_popup_pane

0x508c,	// (0x00082af3) cell_large_graphic_popup_pane_g1_ParamLimits

0x508c,	// (0x00082af3) cell_large_graphic_popup_pane_g1

0x10e6,	// (0x0007eb4d) cell_large_graphic_popup_pane_g2_ParamLimits

0x10e6,	// (0x0007eb4d) cell_large_graphic_popup_pane_g2

0x10f2,	// (0x0007eb59) cell_large_graphic_popup_pane_g3_ParamLimits

0x10f2,	// (0x0007eb59) cell_large_graphic_popup_pane_g3

0x10ff,	// (0x0007eb66) cell_large_graphic_popup_pane_g4_ParamLimits

0x10ff,	// (0x0007eb66) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x0008cd84) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x0008cd84) cell_large_graphic_popup_pane_g

0x110f,	// (0x0007eb76) grid_highlight_pane_cp010

0xb319,	// (0x00088d80) bg_popup_call_pane_g1

0x1119,	// (0x0007eb80) list_single_graphic_popup_conf_pane_ParamLimits

0x1119,	// (0x0007eb80) list_single_graphic_popup_conf_pane

0x112c,	// (0x0007eb93) list_highlight_pane_cp01

0x1135,	// (0x0007eb9c) list_single_graphic_popup_conf_pane_g1

0x113d,	// (0x0007eba4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0008cd8d) list_single_graphic_popup_conf_pane_g

0x1145,	// (0x0007ebac) list_single_graphic_popup_conf_pane_t1

0x1153,	// (0x0007ebba) linegrid_cams_pane_g1

0x5098,	// (0x00082aff) linegrid_cams_pane_g2

0xb5b7,	// (0x0008901e) linegrid_cams_pane_g3

0x115c,	// (0x0007ebc3) linegrid_cams_pane_g4

0x50a1,	// (0x00082b08) linegrid_cams_pane_g5

0x50aa,	// (0x00082b11) linegrid_cams_pane_g6

0xb667,	// (0x000890ce) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x0008cd92) linegrid_cams_pane_g

0x1165,	// (0x0007ebcc) popup_clock_analogue_window

0x1165,	// (0x0007ebcc) popup_clock_digital_window

0xb0a6,	// (0x00088b0d) popup_phob_thumbnail_window

0xb319,	// (0x00088d80) call_video_uplink_pane_g1

0x116e,	// (0x0007ebd5) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x0008cda1) call_video_uplink_pane_g

0xb634,	// (0x0008909b) video_uplink_pane

0x1176,	// (0x0007ebdd) mce_image_pane_g1

0x50b3,	// (0x00082b1a) mce_image_pane_g2

0x50bb,	// (0x00082b22) mce_image_pane_g3

0x50c3,	// (0x00082b2a) mce_image_pane_g4

0x50cb,	// (0x00082b32) mce_image_pane_g5

0x0004,

0xf33f,	// (0x0008cda6) mce_image_pane_g

0x1180,	// (0x0007ebe7) control_top_pane_stacon_cp01_ParamLimits

0x1180,	// (0x0007ebe7) control_top_pane_stacon_cp01

0x1190,	// (0x0007ebf7) uni_indicator_pane_stacon_cp01_ParamLimits

0x1190,	// (0x0007ebf7) uni_indicator_pane_stacon_cp01

0x11a1,	// (0x0007ec08) bg_popup_sub_pane_cp03

0x11ab,	// (0x0007ec12) chi_dic_find_pane

0x50d3,	// (0x00082b3a) listscroll_chi_dic_pane

0x11b3,	// (0x0007ec1a) main_pane_chidic_g1

0x11bb,	// (0x0007ec22) chi_dic_find_pane_t1

0x11c9,	// (0x0007ec30) find_chidic_pane

0x11d2,	// (0x0007ec39) chi_dic_list_pane_ParamLimits

0x11d2,	// (0x0007ec39) chi_dic_list_pane

0x11e3,	// (0x0007ec4a) scroll_pane_cp020

0x11eb,	// (0x0007ec52) find_chidic_pane_t1

0xb0a6,	// (0x00088b0d) input_focus_pane_cp06

0x50e7,	// (0x00082b4e) list_chi_dic_pane_ParamLimits

0x50e7,	// (0x00082b4e) list_chi_dic_pane

0x50f9,	// (0x00082b60) list_chi_dic_pane_t1_ParamLimits

0x50f9,	// (0x00082b60) list_chi_dic_pane_t1

0xb0a6,	// (0x00088b0d) list_highlight_pane_cp020

0x11fa,	// (0x0007ec61) bg_cale_heading_pane_g1

0x510c,	// (0x00082b73) bg_cale_heading_pane_g2

0x5114,	// (0x00082b7b) bg_cale_heading_pane_g3

0x511c,	// (0x00082b83) bg_cale_heading_pane_g4

0x5124,	// (0x00082b8b) bg_cale_heading_pane_g5

0x512c,	// (0x00082b93) bg_cale_heading_pane_g6

0x5134,	// (0x00082b9b) bg_cale_heading_pane_g7

0x513c,	// (0x00082ba3) bg_cale_heading_pane_g8

0x5144,	// (0x00082bab) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x0008cdb1) bg_cale_heading_pane_g

0x11fa,	// (0x0007ec61) bg_cale_side_pane_g1

0x514c,	// (0x00082bb3) bg_cale_side_pane_g2

0x5154,	// (0x00082bbb) bg_cale_side_pane_g3

0x515c,	// (0x00082bc3) bg_cale_side_pane_g4

0x5164,	// (0x00082bcb) bg_cale_side_pane_g5

0x516c,	// (0x00082bd3) bg_cale_side_pane_g6

0x5174,	// (0x00082bdb) bg_cale_side_pane_g7

0x517c,	// (0x00082be3) bg_cale_side_pane_g8

0x5184,	// (0x00082beb) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x0008cdc4) bg_cale_side_pane_g

0x518c,	// (0x00082bf3) popup_call_status_window_ParamLimits

0x518c,	// (0x00082bf3) popup_call_status_window

0x1202,	// (0x0007ec69) stacon_top_pane

0x120a,	// (0x0007ec71) status_pane_ParamLimits

0x120a,	// (0x0007ec71) status_pane

0x1224,	// (0x0007ec8b) status_small_pane

0x122c,	// (0x0007ec93) control_pane

0xb0a6,	// (0x00088b0d) stacon_bottom_pane

0x1234,	// (0x0007ec9b) list_single_mce_smart_pane_t1_ParamLimits

0x1234,	// (0x0007ec9b) list_single_mce_smart_pane_t1

0x1247,	// (0x0007ecae) list_single_mce_smart_pane_t2_ParamLimits

0x1247,	// (0x0007ecae) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x0008cdd7) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x0008cdd7) list_single_mce_smart_pane_t

0x51d3,	// (0x00082c3a) compass_pane

0x51dc,	// (0x00082c43) main_location2_pane_t1

0x51f2,	// (0x00082c59) main_location2_pane_t2

0x5208,	// (0x00082c6f) main_location2_pane_t3

0x0003,

0xf375,	// (0x0008cddc) main_location2_pane_t

0x126f,	// (0x0007ecd6) compass_pane_g1_ParamLimits

0x126f,	// (0x0007ecd6) compass_pane_g1

0x5250,	// (0x00082cb7) compass_pane_t1

0x525f,	// (0x00082cc6) compass_pane_t2

0x0005,

0xf37e,	// (0x0008cde5) compass_pane_t

0x52a6,	// (0x00082d0d) text_secondary_cp61

0x12bd,	// (0x0007ed24) navi_pane_cams_g5

0x1309,	// (0x0007ed70) navi_pane_im_t1

0x1317,	// (0x0007ed7e) navi_pane_mp_g1_ParamLimits

0x1317,	// (0x0007ed7e) navi_pane_mp_g1

0x132b,	// (0x0007ed92) navi_pane_mp_g2_ParamLimits

0x132b,	// (0x0007ed92) navi_pane_mp_g2

0x1337,	// (0x0007ed9e) navi_pane_mp_g3_ParamLimits

0x1337,	// (0x0007ed9e) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0008cdf9) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0008cdf9) navi_pane_mp_g

0x1343,	// (0x0007edaa) navi_pane_mp_t1

0x1351,	// (0x0007edb8) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0008ce00) navi_pane_mp_t

0x13bc,	// (0x0007ee23) navi_pane_vt_g1

0x1343,	// (0x0007edaa) navi_pane_vt_t1

0x13c4,	// (0x0007ee2b) navi_slider_pane

0xb678,	// (0x000890df) zooming_pane

0x13cc,	// (0x0007ee33) navi_slider_pane_g1

0xbbad,	// (0x00089614) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x0008ce07) navi_slider_pane_g

0x13f0,	// (0x0007ee57) aid_levels_zoom

0x13f8,	// (0x0007ee5f) zooming_pane_g1

0x1400,	// (0x0007ee67) zooming_pane_g2

0x1400,	// (0x0007ee67) zooming_pane_g3

0x0002,

0xf3af,	// (0x0008ce16) zooming_pane_g

0x1408,	// (0x0007ee6f) level_10_zoom

0x1411,	// (0x0007ee78) level_11_zoom

0x141a,	// (0x0007ee81) level_1_zoom

0x1423,	// (0x0007ee8a) level_2_zoom

0x142c,	// (0x0007ee93) level_3_zoom

0x1435,	// (0x0007ee9c) level_4_zoom

0x143e,	// (0x0007eea5) level_5_zoom

0x1447,	// (0x0007eeae) level_6_zoom

0x1450,	// (0x0007eeb7) level_7_zoom

0x1459,	// (0x0007eec0) level_8_zoom

0x1462,	// (0x0007eec9) level_9_zoom

0x1473,	// (0x0007eeda) popup_phob_thumbnail_window_g1

0x147b,	// (0x0007eee2) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0008ce1d) popup_phob_thumbnail_window_g

0xc2c7,	// (0x00089d2e) level_1_location

0xc2cf,	// (0x00089d36) level_2_location

0xc2d7,	// (0x00089d3e) level_3_location

0xc2df,	// (0x00089d46) level_4_location

0xb678,	// (0x000890df) level_5_location

0x533c,	// (0x00082da3) mce_icon_pane_g1

0x5344,	// (0x00082dab) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0008ce22) mce_icon_pane_g

0x217e,	// (0x0007fbe5) main_mup_pane_g1_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g1

0x217e,	// (0x0007fbe5) main_mup_pane_g2_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g2

0x217e,	// (0x0007fbe5) main_mup_pane_g3_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g3

0x217e,	// (0x0007fbe5) main_mup_pane_g4_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g4

0x217e,	// (0x0007fbe5) main_mup_pane_g5_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g5

0x217e,	// (0x0007fbe5) main_mup_pane_g6_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g6

0x217e,	// (0x0007fbe5) main_mup_pane_g7_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g7

0x217e,	// (0x0007fbe5) main_mup_pane_g8_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g8

0x217e,	// (0x0007fbe5) main_mup_pane_g9_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g9

0x217e,	// (0x0007fbe5) main_mup_pane_g10_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g10

0x217e,	// (0x0007fbe5) main_mup_pane_g11_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g11

0xb37b,	// (0x00088de2) main_mup_pane_g12_ParamLimits

0xb37b,	// (0x00088de2) main_mup_pane_g12

0x217e,	// (0x0007fbe5) main_mup_pane_g13_ParamLimits

0x217e,	// (0x0007fbe5) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x0008ce27) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x0008ce27) main_mup_pane_g

0x216a,	// (0x0007fbd1) main_mup_pane_t1_ParamLimits

0x216a,	// (0x0007fbd1) main_mup_pane_t1

0x216a,	// (0x0007fbd1) main_mup_pane_t2_ParamLimits

0x216a,	// (0x0007fbd1) main_mup_pane_t2

0x216a,	// (0x0007fbd1) main_mup_pane_t3_ParamLimits

0x216a,	// (0x0007fbd1) main_mup_pane_t3

0x1483,	// (0x0007eeea) main_mup_pane_t4_ParamLimits

0x1483,	// (0x0007eeea) main_mup_pane_t4

0x1483,	// (0x0007eeea) main_mup_pane_t5_ParamLimits

0x1483,	// (0x0007eeea) main_mup_pane_t5

0xbbbf,	// (0x00089626) main_mup_pane_t6_ParamLimits

0xbbbf,	// (0x00089626) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0008ce42) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0008ce42) main_mup_pane_t

0xbbd3,	// (0x0008963a) mup_progress_pane_ParamLimits

0xbbd3,	// (0x0008963a) mup_progress_pane

0x2150,	// (0x0007fbb7) mup_visualizer_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup_visualizer_pane

0x2150,	// (0x0007fbb7) mup_volume_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup_volume_pane

0xb389,	// (0x00088df0) mup_visualizer_pane_g1_ParamLimits

0xb389,	// (0x00088df0) mup_visualizer_pane_g1

0x14a5,	// (0x0007ef0c) mup_visualizer_pane_g2_ParamLimits

0x14a5,	// (0x0007ef0c) mup_visualizer_pane_g2

0xb37b,	// (0x00088de2) mup_visualizer_pane_g3_ParamLimits

0xb37b,	// (0x00088de2) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0008ce4f) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0008ce4f) mup_visualizer_pane_g

0xb6dc,	// (0x00089143) mup_volume_pane_g1

0xb6dc,	// (0x00089143) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) mup_volume_pane_g

0xb6dc,	// (0x00089143) mup_progress_pane_g1

0xb6dc,	// (0x00089143) mup_progress_pane_g2

0xb6dc,	// (0x00089143) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x0008ce5b) mup_progress_pane_g

0xb0a6,	// (0x00088b0d) bg_popup_window_pane_cp05

0x14b3,	// (0x0007ef1a) heading_pane_cp02_ParamLimits

0x14b3,	// (0x0007ef1a) heading_pane_cp02

0x14cd,	// (0x0007ef34) list_popup_blid_pane

0x14d5,	// (0x0007ef3c) list_blid_sat_info_pane_ParamLimits

0x14d5,	// (0x0007ef3c) list_blid_sat_info_pane

0x14e8,	// (0x0007ef4f) list_blid_sat_info_pane_g1

0x14f0,	// (0x0007ef57) list_blid_sat_info_pane_t1

0x541e,	// (0x00082e85) mup_equalizer_pane_ParamLimits

0x541e,	// (0x00082e85) mup_equalizer_pane

0x5437,	// (0x00082e9e) mup_equalizer_pane_cp1_ParamLimits

0x5437,	// (0x00082e9e) mup_equalizer_pane_cp1

0x5450,	// (0x00082eb7) mup_equalizer_pane_cp2_ParamLimits

0x5450,	// (0x00082eb7) mup_equalizer_pane_cp2

0x5469,	// (0x00082ed0) mup_equalizer_pane_cp3_ParamLimits

0x5469,	// (0x00082ed0) mup_equalizer_pane_cp3

0x5482,	// (0x00082ee9) mup_equalizer_pane_cp4_ParamLimits

0x5482,	// (0x00082ee9) mup_equalizer_pane_cp4

0x549b,	// (0x00082f02) mup_equalizer_pane_cp5

0x54ad,	// (0x00082f14) mup_equalizer_pane_cp6

0x54bf,	// (0x00082f26) mup_equalizer_pane_cp7

0xc1a5,	// (0x00089c0c) bg_popup_call_poc_act_pane_g9

0xc1ad,	// (0x00089c14) bg_popup_call_poc_act_pane_g10

0xc1b5,	// (0x00089c1c) bg_popup_call_poc_act_pane_g11

0x000a,

0xb301,	// (0x00088d68) mup_scale_pane

0xb319,	// (0x00088d80) mup_scale_pane_g1

0x14fe,	// (0x0007ef65) mup_scale_pane_g2

0x0006,

0xf410,	// (0x0008ce77) mup_scale_pane_g

0x1522,	// (0x0007ef89) msg_data_pane

0x152a,	// (0x0007ef91) scroll_pane_cp017

0x54e5,	// (0x00082f4c) bg_list_pane_cp04_ParamLimits

0x54e5,	// (0x00082f4c) bg_list_pane_cp04

0x1532,	// (0x0007ef99) msg_data_pane_g1

0x50b3,	// (0x00082b1a) msg_data_pane_g2

0x50bb,	// (0x00082b22) msg_data_pane_g3

0x54fd,	// (0x00082f64) msg_data_pane_g4

0x50cb,	// (0x00082b32) msg_data_pane_g5

0x533c,	// (0x00082da3) msg_data_pane_g6

0x5505,	// (0x00082f6c) msg_data_pane_g7

0x0006,

0xf41f,	// (0x0008ce86) msg_data_pane_g

0x550d,	// (0x00082f74) msg_text_pane_ParamLimits

0x550d,	// (0x00082f74) msg_text_pane

0x5532,	// (0x00082f99) qrid_highlight_pane_cp011_ParamLimits

0x5532,	// (0x00082f99) qrid_highlight_pane_cp011

0xb0a6,	// (0x00088b0d) msg_body_pane

0xb0a6,	// (0x00088b0d) msg_header_pane

0x1543,	// (0x0007efaa) input_focus_pane_cp07

0xbbe9,	// (0x00089650) msg_header_pane_t1_ParamLimits

0xbbe9,	// (0x00089650) msg_header_pane_t1

0x5554,	// (0x00082fbb) msg_header_pane_t2_ParamLimits

0x5554,	// (0x00082fbb) msg_header_pane_t2

0x0001,

0xf433,	// (0x0008ce9a) msg_header_pane_t_ParamLimits

0xf433,	// (0x0008ce9a) msg_header_pane_t

0x1558,	// (0x0007efbf) msg_body_pane_g1

0x556b,	// (0x00082fd2) msg_body_pane_t1_ParamLimits

0x556b,	// (0x00082fd2) msg_body_pane_t1

0x5596,	// (0x00082ffd) msg_body_pane_t2_ParamLimits

0x5596,	// (0x00082ffd) msg_body_pane_t2

0x55a8,	// (0x0008300f) msg_body_pane_t3_ParamLimits

0x55a8,	// (0x0008300f) msg_body_pane_t3

0x0002,

0xf438,	// (0x0008ce9f) msg_body_pane_t_ParamLimits

0xf438,	// (0x0008ce9f) msg_body_pane_t

0x55f0,	// (0x00083057) main_viewer_pane_g1_ParamLimits

0x55f0,	// (0x00083057) main_viewer_pane_g1

0x55fc,	// (0x00083063) main_viewer_pane_g2_ParamLimits

0x55fc,	// (0x00083063) main_viewer_pane_g2

0x5608,	// (0x0008306f) main_viewer_pane_g3_ParamLimits

0x5608,	// (0x0008306f) main_viewer_pane_g3

0x5617,	// (0x0008307e) main_viewer_pane_g4_ParamLimits

0x5617,	// (0x0008307e) main_viewer_pane_g4

0xbc17,	// (0x0008967e) main_viewer_pane_g5_ParamLimits

0xbc17,	// (0x0008967e) main_viewer_pane_g5

0xbc17,	// (0x0008967e) main_viewer_pane_g7_ParamLimits

0xbc17,	// (0x0008967e) main_viewer_pane_g7

0xbc29,	// (0x00089690) main_viewer_pane_g8_ParamLimits

0xbc29,	// (0x00089690) main_viewer_pane_g8

0x0007,

0xf448,	// (0x0008ceaf) main_viewer_pane_g_ParamLimits

0xf448,	// (0x0008ceaf) main_viewer_pane_g

0x1560,	// (0x0007efc7) viewer_content_pane_ParamLimits

0x1560,	// (0x0007efc7) viewer_content_pane

0x564b,	// (0x000830b2) main_postcard_pane_g1_ParamLimits

0x564b,	// (0x000830b2) main_postcard_pane_g1

0x565f,	// (0x000830c6) main_postcard_pane_g2_ParamLimits

0x565f,	// (0x000830c6) main_postcard_pane_g2

0x5673,	// (0x000830da) main_postcard_pane_g3_ParamLimits

0x5673,	// (0x000830da) main_postcard_pane_g3

0x0005,

0xf459,	// (0x0008cec0) main_postcard_pane_g_ParamLimits

0xf459,	// (0x0008cec0) main_postcard_pane_g

0x5686,	// (0x000830ed) main_postcard_pane_g4

0xc3a8,	// (0x00089e0f) smil_status_volume_pane_g2

0x56c1,	// (0x00083128) postcard_pane_ParamLimits

0x56c1,	// (0x00083128) postcard_pane

0x157c,	// (0x0007efe3) postcard_pane_g1_ParamLimits

0x157c,	// (0x0007efe3) postcard_pane_g1

0x5701,	// (0x00083168) postcard_pane_g2_ParamLimits

0x5701,	// (0x00083168) postcard_pane_g2

0x570d,	// (0x00083174) postcard_pane_g3_ParamLimits

0x570d,	// (0x00083174) postcard_pane_g3

0x156e,	// (0x0007efd5) postcard_pane_g4_ParamLimits

0x156e,	// (0x0007efd5) postcard_pane_g4

0x5719,	// (0x00083180) postcard_pane_g5_ParamLimits

0x5719,	// (0x00083180) postcard_pane_g5

0x572e,	// (0x00083195) postcard_pane_g6_ParamLimits

0x572e,	// (0x00083195) postcard_pane_g6

0x157c,	// (0x0007efe3) postcard_pane_g7_ParamLimits

0x157c,	// (0x0007efe3) postcard_pane_g7

0x0006,

0xf466,	// (0x0008cecd) postcard_pane_g_ParamLimits

0xf466,	// (0x0008cecd) postcard_pane_g

0x5742,	// (0x000831a9) main_mp2_pane_g1_ParamLimits

0x5742,	// (0x000831a9) main_mp2_pane_g1

0x574e,	// (0x000831b5) main_mp2_pane_g2_ParamLimits

0x574e,	// (0x000831b5) main_mp2_pane_g2

0x575a,	// (0x000831c1) main_mp2_pane_g3_ParamLimits

0x575a,	// (0x000831c1) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0008cedc) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0008cedc) main_mp2_pane_g

0x5766,	// (0x000831cd) main_mp2_pane_t1_ParamLimits

0x5766,	// (0x000831cd) main_mp2_pane_t1

0x577b,	// (0x000831e2) main_mp2_pane_t2_ParamLimits

0x577b,	// (0x000831e2) main_mp2_pane_t2

0x578d,	// (0x000831f4) main_mp2_pane_t3_ParamLimits

0x578d,	// (0x000831f4) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x0008cee3) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x0008cee3) main_mp2_pane_t

0x158a,	// (0x0007eff1) pec_content_pane_ParamLimits

0x158a,	// (0x0007eff1) pec_content_pane

0xb888,	// (0x000892ef) scroll_pane_cp015

0x159c,	// (0x0007f003) pec_attribute_pane_ParamLimits

0x159c,	// (0x0007f003) pec_attribute_pane

0x579f,	// (0x00083206) pec_content_pane_g1_ParamLimits

0x579f,	// (0x00083206) pec_content_pane_g1

0x15ac,	// (0x0007f013) pec_content_pane_t1_ParamLimits

0x15ac,	// (0x0007f013) pec_content_pane_t1

0x15be,	// (0x0007f025) pec_content_pane_t2_ParamLimits

0x15be,	// (0x0007f025) pec_content_pane_t2

0x0001,

0xf483,	// (0x0008ceea) pec_content_pane_t_ParamLimits

0xf483,	// (0x0008ceea) pec_content_pane_t

0x57ab,	// (0x00083212) list_single_graphic_pane_cp01_ParamLimits

0x57ab,	// (0x00083212) list_single_graphic_pane_cp01

0xb301,	// (0x00088d68) bg_popup_sub_pane_cp04

0x15d0,	// (0x0007f037) popup_mup_playback_window_g1

0x15dc,	// (0x0007f043) popup_mup_playback_window_t1

0x15f1,	// (0x0007f058) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x0008ceef) popup_mup_playback_window_t

0x1628,	// (0x0007f08f) main_image_pane_g1_ParamLimits

0x1628,	// (0x0007f08f) main_image_pane_g1

0x166b,	// (0x0007f0d2) scroll_pane_cp018_ParamLimits

0x166b,	// (0x0007f0d2) scroll_pane_cp018

0x1683,	// (0x0007f0ea) scroll_pane_cp016_ParamLimits

0x1683,	// (0x0007f0ea) scroll_pane_cp016

0x5876,	// (0x000832dd) smil2_image_pane_ParamLimits

0x5876,	// (0x000832dd) smil2_image_pane

0x589e,	// (0x00083305) smil2_root_pane_ParamLimits

0x589e,	// (0x00083305) smil2_root_pane

0x58d6,	// (0x0008333d) smil2_text_pane_ParamLimits

0x58d6,	// (0x0008333d) smil2_text_pane

0xb0a6,	// (0x00088b0d) bg_list_pane_cp06

0x16b7,	// (0x0007f11e) grid_radio_pane

0xb0a6,	// (0x00088b0d) bg_popup_window_pane_cp06

0x16bf,	// (0x0007f126) main_fmradio_pane_t1

0x10bc,	// (0x0007eb23) heading_pane_cp04

0x16cd,	// (0x0007f134) main_fmradio_pane_t2

0xc1fd,	// (0x00089c64) popup_cale_lunar_info_window_g1

0x16db,	// (0x0007f142) main_fmradio_pane_t3

0xc205,	// (0x00089c6c) popup_cale_lunar_info_window_g2

0x16e9,	// (0x0007f150) main_fmradio_pane_t4

0x0001,

0x16f7,	// (0x0007f15e) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x0008cfe2) popup_cale_lunar_info_window_g

0xf49d,	// (0x0008cf04) main_fmradio_pane_t

0x1705,	// (0x0007f16c) wait_bar_pane_cp03

0x0df6,	// (0x0007e85d) cell_fmradio_pane_ParamLimits

0x0df6,	// (0x0007e85d) cell_fmradio_pane

0x157c,	// (0x0007efe3) cell_fmradio_pane_g1_ParamLimits

0x157c,	// (0x0007efe3) cell_fmradio_pane_g1

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp011

0x170d,	// (0x0007f174) poc_content_pane_ParamLimits

0x170d,	// (0x0007f174) poc_content_pane

0x1720,	// (0x0007f187) scroll_pane_cp019

0x5942,	// (0x000833a9) popup_call_poc_act_window_ParamLimits

0x5942,	// (0x000833a9) popup_call_poc_act_window

0x5962,	// (0x000833c9) popup_call_poc_inact_window_ParamLimits

0x5962,	// (0x000833c9) popup_call_poc_inact_window

0xf53f,	// (0x0008cfa6) bg_popup_call_poc_act_pane_g

0xc1bd,	// (0x00089c24) bg_popup_call_poc_inact_pane_g1

0xc1c5,	// (0x00089c2c) bg_popup_call_poc_inact_pane_g2

0x1728,	// (0x0007f18f) popup_call_poc_act_window_g2

0xc1cd,	// (0x00089c34) bg_popup_call_poc_inact_pane_g3

0xc17d,	// (0x00089be4) bg_popup_call_poc_inact_pane_g4

0xc1d5,	// (0x00089c3c) bg_popup_call_poc_inact_pane_g5

0x1730,	// (0x0007f197) popup_call_poc_act_window_t1_ParamLimits

0x1730,	// (0x0007f197) popup_call_poc_act_window_t1

0x1758,	// (0x0007f1bf) popup_call_poc_act_window_t2_ParamLimits

0x1758,	// (0x0007f1bf) popup_call_poc_act_window_t2

0x1780,	// (0x0007f1e7) popup_call_poc_act_window_t3_ParamLimits

0x1780,	// (0x0007f1e7) popup_call_poc_act_window_t3

0x17a8,	// (0x0007f20f) popup_call_poc_act_window_t4_ParamLimits

0x17a8,	// (0x0007f20f) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0008cf0f) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0008cf0f) popup_call_poc_act_window_t

0xc1dd,	// (0x00089c44) bg_popup_call_poc_inact_pane_g6

0xc1e5,	// (0x00089c4c) bg_popup_call_poc_inact_pane_g7

0xc1ed,	// (0x00089c54) bg_popup_call_poc_inact_pane_g8

0x17ba,	// (0x0007f221) popup_call_poc_inact_window_g2

0xc1f5,	// (0x00089c5c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x0008cfbd) bg_popup_call_poc_inact_pane_g

0x17c2,	// (0x0007f229) popup_call_poc_inact_window_t1_ParamLimits

0x17c2,	// (0x0007f229) popup_call_poc_inact_window_t1

0x17d7,	// (0x0007f23e) popup_call_poc_inact_window_t2_ParamLimits

0x17d7,	// (0x0007f23e) popup_call_poc_inact_window_t2

0x17ec,	// (0x0007f253) popup_call_poc_inact_window_t3_ParamLimits

0x17ec,	// (0x0007f253) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x0008cf18) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x0008cf18) popup_call_poc_inact_window_t

0xc336,	// (0x00089d9d) context_pane_ParamLimits

0x608e,	// (0x00083af5) signal_pane_ParamLimits

0xb678,	// (0x000890df) main_call2_pane

0xeac0,	// (0x0008c527) popup_phob_thumbnail2_window_ParamLimits

0xeac0,	// (0x0008c527) popup_phob_thumbnail2_window

0xbbff,	// (0x00089666) aid_hotspot_pointer_arrow_pane

0xbc07,	// (0x0008966e) aid_hotspot_pointer_hand_pane

0x5c37,	// (0x0008369e) phob_pre_status_pane_g5

0x1497,	// (0x0007eefe) cams_zoom_pane_ParamLimits

0x3f11,	// (0x00081978) image_vga_pane_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g2_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g3_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g4_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g5_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g6_ParamLimits

0xb37b,	// (0x00088de2) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0008cc2c) main_camera_pane_g_ParamLimits

0x1483,	// (0x0007eeea) main_camera_pane_t1_ParamLimits

0x1483,	// (0x0007eeea) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0008cc3d) main_camera_pane_t_ParamLimits

0xb301,	// (0x00088d68) bg_popup_preview_window_pane_cp01_ParamLimits

0xb301,	// (0x00088d68) bg_popup_preview_window_pane_cp01

0x1801,	// (0x0007f268) popup_phob_thumbnail2_window_g1_ParamLimits

0x1801,	// (0x0007f268) popup_phob_thumbnail2_window_g1

0xb0a6,	// (0x00088b0d) call2_cli_visual_pane

0x598e,	// (0x000833f5) popup_call2_audio_conf_window_ParamLimits

0x598e,	// (0x000833f5) popup_call2_audio_conf_window

0x59ac,	// (0x00083413) popup_call2_audio_first_window_ParamLimits

0x59ac,	// (0x00083413) popup_call2_audio_first_window

0x5a22,	// (0x00083489) popup_call2_audio_in_window_ParamLimits

0x5a22,	// (0x00083489) popup_call2_audio_in_window

0x5a56,	// (0x000834bd) popup_call2_audio_out_window_ParamLimits

0x5a56,	// (0x000834bd) popup_call2_audio_out_window

0x5aa8,	// (0x0008350f) popup_call2_audio_second_window_ParamLimits

0x5aa8,	// (0x0008350f) popup_call2_audio_second_window

0x5afa,	// (0x00083561) popup_call2_audio_wait_window_ParamLimits

0x5afa,	// (0x00083561) popup_call2_audio_wait_window

0xb0a6,	// (0x00088b0d) bg_popup_call2_act_pane_cp03

0x180d,	// (0x0007f274) list_conf_pane_cp

0x1815,	// (0x0007f27c) popup_call2_audio_conf_window_t1

0x1119,	// (0x0007eb80) list_single_graphic_popup_conf2_pane_ParamLimits

0x1119,	// (0x0007eb80) list_single_graphic_popup_conf2_pane

0x112c,	// (0x0007eb93) list_highlight_pane_cp04

0x1823,	// (0x0007f28a) list_single_graphic_popup_conf2_pane_g1

0x113d,	// (0x0007eba4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0008cf1f) list_single_graphic_popup_conf2_pane_g

0x182b,	// (0x0007f292) list_single_graphic_popup_conf2_pane_t1

0x1839,	// (0x0007f2a0) bg_popup_call2_act_pane_cp01_ParamLimits

0x1839,	// (0x0007f2a0) bg_popup_call2_act_pane_cp01

0x18c3,	// (0x0007f32a) call_type_pane_cp05_ParamLimits

0x18c3,	// (0x0007f32a) call_type_pane_cp05

0x1917,	// (0x0007f37e) popup_call2_audio_second_window_g1_ParamLimits

0x1917,	// (0x0007f37e) popup_call2_audio_second_window_g1

0x196b,	// (0x0007f3d2) popup_call2_audio_second_window_g2_ParamLimits

0x196b,	// (0x0007f3d2) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0008cf24) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0008cf24) popup_call2_audio_second_window_g

0x19d0,	// (0x0007f437) popup_call2_audio_second_window_t1_ParamLimits

0x19d0,	// (0x0007f437) popup_call2_audio_second_window_t1

0x1a8b,	// (0x0007f4f2) popup_call2_audio_second_window_t2_ParamLimits

0x1a8b,	// (0x0007f4f2) popup_call2_audio_second_window_t2

0x1ade,	// (0x0007f545) popup_call2_audio_second_window_t3_ParamLimits

0x1ade,	// (0x0007f545) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x0008cf2b) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x0008cf2b) popup_call2_audio_second_window_t

0xb0a6,	// (0x00088b0d) bg_popup_call2_in_pane_cp02

0x1bd1,	// (0x0007f638) call_type_pane_cp04

0x1bd9,	// (0x0007f640) popup_call2_audio_wait_window_g1

0x1be1,	// (0x0007f648) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0008cf34) popup_call2_audio_wait_window_g

0x1be9,	// (0x0007f650) popup_call2_audio_wait_window_t3

0x1bf7,	// (0x0007f65e) bg_popup_call2_act_pane_ParamLimits

0x1bf7,	// (0x0007f65e) bg_popup_call2_act_pane

0x1cb7,	// (0x0007f71e) call_type_pane_cp03_ParamLimits

0x1cb7,	// (0x0007f71e) call_type_pane_cp03

0x1d1b,	// (0x0007f782) popup_call2_audio_first_window_g1_ParamLimits

0x1d1b,	// (0x0007f782) popup_call2_audio_first_window_g1

0x1d8b,	// (0x0007f7f2) popup_call2_audio_first_window_g2_ParamLimits

0x1d8b,	// (0x0007f7f2) popup_call2_audio_first_window_g2

0x105b,	// (0x0007eac2) popup_call2_audio_first_window_g3_ParamLimits

0x105b,	// (0x0007eac2) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x0008cf39) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x0008cf39) popup_call2_audio_first_window_g

0x1e69,	// (0x0007f8d0) popup_call2_audio_first_window_t1_ParamLimits

0x1e69,	// (0x0007f8d0) popup_call2_audio_first_window_t1

0x1f6c,	// (0x0007f9d3) popup_call2_audio_first_window_t4_ParamLimits

0x1f6c,	// (0x0007f9d3) popup_call2_audio_first_window_t4

0x204f,	// (0x0007fab6) popup_call2_audio_first_window_t5_ParamLimits

0x204f,	// (0x0007fab6) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0008cf44) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0008cf44) popup_call2_audio_first_window_t

0xb2f9,	// (0x00088d60) bg_popup_call2_act_pane_g1

0xc20d,	// (0x00089c74) popup_cale_lunar_info_window_t1

0xc21b,	// (0x00089c82) popup_cale_lunar_info_window_t2

0xc229,	// (0x00089c90) popup_cale_lunar_info_window_t3

0xb0a6,	// (0x00088b0d) bg_popup_call2_bubble_pane

0xbc49,	// (0x000896b0) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc49,	// (0x000896b0) bg_popup_call2_in_pane_cp01

0x1bd1,	// (0x0007f638) call_type_pane_cp02

0xbc91,	// (0x000896f8) popup_call2_audio_out_window_g1_ParamLimits

0xbc91,	// (0x000896f8) popup_call2_audio_out_window_g1

0xbcbd,	// (0x00089724) popup_call2_audio_out_window_g2_ParamLimits

0xbcbd,	// (0x00089724) popup_call2_audio_out_window_g2

0xbce5,	// (0x0008974c) popup_call2_audio_out_window_g3_ParamLimits

0xbce5,	// (0x0008974c) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0008cf4d) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0008cf4d) popup_call2_audio_out_window_g

0xbd20,	// (0x00089787) popup_call2_audio_out_window_t1_ParamLimits

0xbd20,	// (0x00089787) popup_call2_audio_out_window_t1

0xbd7f,	// (0x000897e6) popup_call2_audio_out_window_t2_ParamLimits

0xbd7f,	// (0x000897e6) popup_call2_audio_out_window_t2

0xbdd3,	// (0x0008983a) popup_call2_audio_out_window_t3_ParamLimits

0xbdd3,	// (0x0008983a) popup_call2_audio_out_window_t3

0xbde9,	// (0x00089850) popup_call2_audio_out_window_t4_ParamLimits

0xbde9,	// (0x00089850) popup_call2_audio_out_window_t4

0xbdff,	// (0x00089866) popup_call2_audio_out_window_t5_ParamLimits

0xbdff,	// (0x00089866) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x0008cf56) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x0008cf56) popup_call2_audio_out_window_t

0xbe63,	// (0x000898ca) bg_popup_call2_in_pane_ParamLimits

0xbe63,	// (0x000898ca) bg_popup_call2_in_pane

0xbebf,	// (0x00089926) popup_call2_audio_in_window_g1_ParamLimits

0xbebf,	// (0x00089926) popup_call2_audio_in_window_g1

0xbef7,	// (0x0008995e) popup_call2_audio_in_window_g2_ParamLimits

0xbef7,	// (0x0008995e) popup_call2_audio_in_window_g2

0xbf2f,	// (0x00089996) popup_call2_audio_in_window_g3_ParamLimits

0xbf2f,	// (0x00089996) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x0008cf63) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x0008cf63) popup_call2_audio_in_window_g

0xbf87,	// (0x000899ee) popup_call2_audio_in_window_t1_ParamLimits

0xbf87,	// (0x000899ee) popup_call2_audio_in_window_t1

0xc007,	// (0x00089a6e) popup_call2_audio_in_window_t2_ParamLimits

0xc007,	// (0x00089a6e) popup_call2_audio_in_window_t2

0xc087,	// (0x00089aee) popup_call2_audio_in_window_t3_ParamLimits

0xc087,	// (0x00089aee) popup_call2_audio_in_window_t3

0xc0a1,	// (0x00089b08) popup_call2_audio_in_window_t4_ParamLimits

0xc0a1,	// (0x00089b08) popup_call2_audio_in_window_t4

0xc0b3,	// (0x00089b1a) popup_call2_audio_in_window_t5_ParamLimits

0xc0b3,	// (0x00089b1a) popup_call2_audio_in_window_t5

0xc0c8,	// (0x00089b2f) popup_call2_audio_in_window_t6_ParamLimits

0xc0c8,	// (0x00089b2f) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0008cf6c) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0008cf6c) popup_call2_audio_in_window_t

0xb2f9,	// (0x00088d60) bg_popup_call2_in_pane_g1

0xc237,	// (0x00089c9e) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x0008cfe7) popup_cale_lunar_info_window_t

0xb301,	// (0x00088d68) bg_popup_call2_rect_pane_ParamLimits

0xb301,	// (0x00088d68) bg_popup_call2_rect_pane

0xb0a6,	// (0x00088b0d) call2_cli_visual_graphic_pane

0xb0a6,	// (0x00088b0d) call2_cli_visual_text_pane

0xeae7,	// (0x0008c54e) smil_status_volume_pane_g3

0x0002,

0xb319,	// (0x00088d80) call2_cli_visual_graphic_pane_g1

0xb319,	// (0x00088d80) call2_cli_visual_graphic_pane_g2

0xb319,	// (0x00088d80) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0008cf79) call2_cli_visual_graphic_pane_g

0xc0dd,	// (0x00089b44) bg_popup_call2_rect_pane_g1

0xb554,	// (0x00088fbb) bg_popup_call2_rect_pane_g2

0xc0e5,	// (0x00089b4c) bg_popup_call2_rect_pane_g3

0xc0ed,	// (0x00089b54) bg_popup_call2_rect_pane_g4

0xc0f5,	// (0x00089b5c) bg_popup_call2_rect_pane_g5

0xc0fd,	// (0x00089b64) bg_popup_call2_rect_pane_g6

0xc105,	// (0x00089b6c) bg_popup_call2_rect_pane_g7

0xc10d,	// (0x00089b74) bg_popup_call2_rect_pane_g8

0xc115,	// (0x00089b7c) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0008cf80) bg_popup_call2_rect_pane_g

0xc11d,	// (0x00089b84) bg_popup_call2_bubble_pane_g1

0xc125,	// (0x00089b8c) bg_popup_call2_bubble_pane_g2

0xc12d,	// (0x00089b94) bg_popup_call2_bubble_pane_g3

0xc135,	// (0x00089b9c) bg_popup_call2_bubble_pane_g4

0xc13d,	// (0x00089ba4) bg_popup_call2_bubble_pane_g5

0xc145,	// (0x00089bac) bg_popup_call2_bubble_pane_g6

0xc14d,	// (0x00089bb4) bg_popup_call2_bubble_pane_g7

0xc155,	// (0x00089bbc) bg_popup_call2_bubble_pane_g8

0xc15d,	// (0x00089bc4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x0008cf93) bg_popup_call2_bubble_pane_g

0x38d6,	// (0x0008133d) aid_cale_week_size_cell_pane

0x3f24,	// (0x0008198b) aid_cams_cif_uncrop_pane_ParamLimits

0x3f24,	// (0x0008198b) aid_cams_cif_uncrop_pane

0x40c5,	// (0x00081b2c) aid_cams_size_cell_ParamLimits

0x40c5,	// (0x00081b2c) aid_cams_size_cell

0x40d9,	// (0x00081b40) grid_cams_pane_ParamLimits

0x40ee,	// (0x00081b55) linegrid_cams_pane_ParamLimits

0x41b8,	// (0x00081c1f) call_video_pane_t1

0x41d2,	// (0x00081c39) call_video_pane_t2

0x0001,

0xf222,	// (0x0008cc89) call_video_pane_t

0x4557,	// (0x00081fbe) aid_cale_month_size_cell_pane_ParamLimits

0x4557,	// (0x00081fbe) aid_cale_month_size_cell_pane

0xf5c4,	// (0x0008d02b) smil_status_volume_pane_g

0xeaf4,	// (0x0008c55b) volume_smil_pane_ParamLimits

0xac42,	// (0x000886a9) aid_popup2_width_pane

0x3824,	// (0x0008128b) cell_qdial_pane_g4_ParamLimits

0x3824,	// (0x0008128b) cell_qdial_pane_g4

0x5230,	// (0x00082c97) aid_blid_cardinal_pane_ParamLimits

0x523c,	// (0x00082ca3) aid_blid_destination_pane_ParamLimits

0x523c,	// (0x00082ca3) aid_blid_destination_pane

0xb301,	// (0x00088d68) bg_popup_call_poc_act_pane_ParamLimits

0xb301,	// (0x00088d68) bg_popup_call_poc_act_pane

0xb301,	// (0x00088d68) bg_popup_call_poc_inact_pane_ParamLimits

0xb301,	// (0x00088d68) bg_popup_call_poc_inact_pane

0xc165,	// (0x00089bcc) bg_popup_call_poc_act_pane_g1

0xc16d,	// (0x00089bd4) bg_popup_call_poc_act_pane_g2

0xc175,	// (0x00089bdc) bg_popup_call_poc_act_pane_g3

0xc17d,	// (0x00089be4) bg_popup_call_poc_act_pane_g4

0xc185,	// (0x00089bec) bg_popup_call_poc_act_pane_g5

0xc18d,	// (0x00089bf4) bg_popup_call_poc_act_pane_g6

0xc195,	// (0x00089bfc) bg_popup_call_poc_act_pane_g7

0xc19d,	// (0x00089c04) bg_popup_call_poc_act_pane_g8

0xb0a6,	// (0x00088b0d) main_usb_pane

0xea9f,	// (0x0008c506) popup_cale_lunar_info_window

0x4417,	// (0x00081e7e) im_reading_pane_t1_ParamLimits

0xb7d1,	// (0x00089238) list_im_pane_ParamLimits

0xb7e2,	// (0x00089249) scroll_pane_cp07_ParamLimits

0xb0a6,	// (0x00088b0d) grid_highlight_pane_cp012

0xb301,	// (0x00088d68) mup_scale_pane_ParamLimits

0x157c,	// (0x0007efe3) main_usb_pane_g1_ParamLimits

0x157c,	// (0x0007efe3) main_usb_pane_g1

0x5b54,	// (0x000835bb) main_usb_pane_g2_ParamLimits

0x5b54,	// (0x000835bb) main_usb_pane_g2

0x0001,

0xf569,	// (0x0008cfd0) main_usb_pane_g_ParamLimits

0xf569,	// (0x0008cfd0) main_usb_pane_g

0x5b68,	// (0x000835cf) main_usb_pane_t1_ParamLimits

0x5b68,	// (0x000835cf) main_usb_pane_t1

0x5b7a,	// (0x000835e1) main_usb_pane_t2_ParamLimits

0x5b7a,	// (0x000835e1) main_usb_pane_t2

0x5b8c,	// (0x000835f3) main_usb_pane_t3_ParamLimits

0x5b8c,	// (0x000835f3) main_usb_pane_t3

0x5b9e,	// (0x00083605) main_usb_pane_t4_ParamLimits

0x5b9e,	// (0x00083605) main_usb_pane_t4

0x5bb0,	// (0x00083617) main_usb_pane_t5_ParamLimits

0x5bb0,	// (0x00083617) main_usb_pane_t5

0x5bc2,	// (0x00083629) main_usb_pane_t6_ParamLimits

0x5bc2,	// (0x00083629) main_usb_pane_t6

0x0005,

0xf56e,	// (0x0008cfd5) main_usb_pane_t_ParamLimits

0x1266,	// (0x0007eccd) aid_text_placing

0x51dc,	// (0x00082c43) main_location2_pane_t1_ParamLimits

0x51f2,	// (0x00082c59) main_location2_pane_t2_ParamLimits

0x5208,	// (0x00082c6f) main_location2_pane_t3_ParamLimits

0x521e,	// (0x00082c85) main_location2_pane_t4_ParamLimits

0x521e,	// (0x00082c85) main_location2_pane_t4

0xf375,	// (0x0008cddc) main_location2_pane_t_ParamLimits

0xb33c,	// (0x00088da3) find_pinb_pane_g2_ParamLimits

0xb33c,	// (0x00088da3) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0008cb41) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0008cb41) find_pinb_pane_g

0xb348,	// (0x00088daf) find_pinb_pane_t1_ParamLimits

0xb35a,	// (0x00088dc1) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0008cb46) find_pinb_pane_t_ParamLimits

0xb0a6,	// (0x00088b0d) main_call3_pane

0x4952,	// (0x000823b9) cale_month_day_heading_pane_t1_ParamLimits

0x49d8,	// (0x0008243f) cale_month_day_heading_pane_t2_ParamLimits

0x4a69,	// (0x000824d0) cale_month_day_heading_pane_t3_ParamLimits

0x4afa,	// (0x00082561) cale_month_day_heading_pane_t4_ParamLimits

0x4b8b,	// (0x000825f2) cale_month_day_heading_pane_t5_ParamLimits

0x4c1c,	// (0x00082683) cale_month_day_heading_pane_t6_ParamLimits

0x4cad,	// (0x00082714) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0008ccc1) cale_month_day_heading_pane_t_ParamLimits

0x4f09,	// (0x00082970) smil_status_volume_pane

0x56dd,	// (0x00083144) postcard_address_pane_ParamLimits

0x56dd,	// (0x00083144) postcard_address_pane

0x56ef,	// (0x00083156) postcard_message_pane_ParamLimits

0x56ef,	// (0x00083156) postcard_message_pane

0x5b32,	// (0x00083599) call2_cli_visual_pane_t1_ParamLimits

0x5b32,	// (0x00083599) call2_cli_visual_pane_t1

0x627a,	// (0x00083ce1) postcard_message_pane_t1_ParamLimits

0x627a,	// (0x00083ce1) postcard_message_pane_t1

0x6263,	// (0x00083cca) postcard_address_pane_t1_ParamLimits

0x6263,	// (0x00083cca) postcard_address_pane_t1

0x6251,	// (0x00083cb8) popup_call3_audio_in_window_ParamLimits

0x6251,	// (0x00083cb8) popup_call3_audio_in_window

0x60e0,	// (0x00083b47) bg_popup_call3_in_pane_ParamLimits

0x60e0,	// (0x00083b47) bg_popup_call3_in_pane

0x6152,	// (0x00083bb9) popup_call3_audio_in_window_g1_ParamLimits

0x6152,	// (0x00083bb9) popup_call3_audio_in_window_g1

0x6172,	// (0x00083bd9) popup_call3_audio_in_window_g2_ParamLimits

0x6172,	// (0x00083bd9) popup_call3_audio_in_window_g2

0x6192,	// (0x00083bf9) popup_call3_audio_in_window_g3_ParamLimits

0x6192,	// (0x00083bf9) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0008d032) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0008d032) popup_call3_audio_in_window_g

0x61c3,	// (0x00083c2a) popup_call3_audio_in_window_t1_ParamLimits

0x61c3,	// (0x00083c2a) popup_call3_audio_in_window_t1

0x6201,	// (0x00083c68) popup_call3_audio_in_window_t2_ParamLimits

0x6201,	// (0x00083c68) popup_call3_audio_in_window_t2

0x623f,	// (0x00083ca6) popup_call3_audio_in_window_t3_ParamLimits

0x623f,	// (0x00083ca6) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x0008d03b) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x0008d03b) popup_call3_audio_in_window_t

0xb678,	// (0x000890df) bg_popup_call3_rect_pane

0xc0dd,	// (0x00089b44) bg_popup_call3_rect_pane_g1

0xb554,	// (0x00088fbb) bg_popup_call3_rect_pane_g2

0xc0e5,	// (0x00089b4c) bg_popup_call3_rect_pane_g3

0xc0ed,	// (0x00089b54) bg_popup_call3_rect_pane_g4

0xc0f5,	// (0x00089b5c) bg_popup_call3_rect_pane_g5

0xc0fd,	// (0x00089b64) bg_popup_call3_rect_pane_g6

0xc105,	// (0x00089b6c) bg_popup_call3_rect_pane_g7

0x3346,	// (0x00080dad) mup_visualizer_osc_pane

0x3346,	// (0x00080dad) mup_visualizer_spec_pane

0x6110,	// (0x00083b77) call3_video_qcif_pane_ParamLimits

0x6110,	// (0x00083b77) call3_video_qcif_pane

0x6121,	// (0x00083b88) call3_video_qcif_uncrop_pane_ParamLimits

0x6121,	// (0x00083b88) call3_video_qcif_uncrop_pane

0x612d,	// (0x00083b94) call3_video_subqcif_pane_ParamLimits

0x612d,	// (0x00083b94) call3_video_subqcif_pane

0x6141,	// (0x00083ba8) call3_video_subqcif_uncrop_pane_ParamLimits

0x6141,	// (0x00083ba8) call3_video_subqcif_uncrop_pane

0x61b2,	// (0x00083c19) popup_call3_audio_in_window_g4_ParamLimits

0x61b2,	// (0x00083c19) popup_call3_audio_in_window_g4

0x3346,	// (0x00080dad) mup_spec_half_pane

0x3346,	// (0x00080dad) mup_spec_half_pane_cp

0x3346,	// (0x00080dad) mup_osc_middle_pane

0xb6dc,	// (0x00089143) mup_visualizer_osc_pane_g1

0xc383,	// (0x00089dea) mup_spec_bar_pane_ParamLimits

0xc383,	// (0x00089dea) mup_spec_bar_pane

0xb6dc,	// (0x00089143) mup_spec_bar_pane_g1

0xb6dc,	// (0x00089143) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) mup_spec_bar_pane_g

0x38d6,	// (0x0008133d) aid_cale_week_size_cell_pane_ParamLimits

0x38f0,	// (0x00081357) bg_cale_heading_pane_ParamLimits

0xb5da,	// (0x00089041) bg_cale_pane_cp01_ParamLimits

0x3908,	// (0x0008136f) cale_week_corner_pane_ParamLimits

0x3927,	// (0x0008138e) cale_week_day_heading_pane_ParamLimits

0x3944,	// (0x000813ab) cale_week_scroll_pane_g1_ParamLimits

0x3957,	// (0x000813be) cale_week_scroll_pane_g2_ParamLimits

0x396f,	// (0x000813d6) cale_week_scroll_pane_g3_ParamLimits

0x3987,	// (0x000813ee) cale_week_scroll_pane_g4_ParamLimits

0x399f,	// (0x00081406) cale_week_scroll_pane_g5_ParamLimits

0x39b7,	// (0x0008141e) cale_week_scroll_pane_g6_ParamLimits

0x39cf,	// (0x00081436) cale_week_scroll_pane_g7_ParamLimits

0x39e7,	// (0x0008144e) cale_week_scroll_pane_g8_ParamLimits

0x3a03,	// (0x0008146a) cale_week_scroll_pane_g9_ParamLimits

0x3a1b,	// (0x00081482) cale_week_scroll_pane_g10_ParamLimits

0x3a33,	// (0x0008149a) cale_week_scroll_pane_g11_ParamLimits

0x3a4b,	// (0x000814b2) cale_week_scroll_pane_g12_ParamLimits

0x3a63,	// (0x000814ca) cale_week_scroll_pane_g13_ParamLimits

0x3a7b,	// (0x000814e2) cale_week_scroll_pane_g14_ParamLimits

0x3a93,	// (0x000814fa) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0008cbd2) cale_week_scroll_pane_g_ParamLimits

0x3ac7,	// (0x0008152e) cale_week_time_pane_ParamLimits

0x3ae3,	// (0x0008154a) grid_cale_week_pane_ParamLimits

0xb5f7,	// (0x0008905e) listscroll_cale_week_pane_t1

0xb609,	// (0x00089070) scroll_pane_cp08_ParamLimits

0x45ac,	// (0x00082013) cale_month_corner_pane_ParamLimits

0xba12,	// (0x00089479) cale_month_pane_t1

0x4908,	// (0x0008236f) cale_month_week_pane_ParamLimits

0x502b,	// (0x00082a92) popup_call_status_window_g1_ParamLimits

0x503f,	// (0x00082aa6) popup_call_status_window_g2_ParamLimits

0x5053,	// (0x00082aba) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x0008cd63) popup_call_status_window_g_ParamLimits

0x10ac,	// (0x0007eb13) aid_call2_pane

0x5548,	// (0x00082faf) msg_header_pane_g1

0x56dd,	// (0x00083144) postcard_address2_pane_ParamLimits

0x56dd,	// (0x00083144) postcard_address2_pane

0x56ef,	// (0x00083156) postcard_message2_pane_ParamLimits

0x56ef,	// (0x00083156) postcard_message2_pane

0x609c,	// (0x00083b03) message2_row_pane_ParamLimits

0x609c,	// (0x00083b03) message2_row_pane

0x60b6,	// (0x00083b1d) address2_row_pane_ParamLimits

0x60b6,	// (0x00083b1d) address2_row_pane

0xc351,	// (0x00089db8) postcard_message2_row_pane_g1

0xc359,	// (0x00089dc0) postcard_message2_row_pane_t1

0xc351,	// (0x00089db8) address2_row_pane_g1

0xc359,	// (0x00089dc0) address2_row_pane_t1

0x3ee0,	// (0x00081947) aid_size_cell_vorec

0xb0a6,	// (0x00088b0d) main_rss_pane

0x60c9,	// (0x00083b30) rss_list_single_pane_ParamLimits

0x60c9,	// (0x00083b30) rss_list_single_pane

0xc367,	// (0x00089dce) rss_list_single_pane_t1

0xc375,	// (0x00089ddc) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x0008d026) rss_list_single_pane_t

0xb0a6,	// (0x00088b0d) main_camera2_pane

0xb0a6,	// (0x00088b0d) main_video2_pane

0xeb09,	// (0x0008c570) cams_zoom_pane_cp2_ParamLimits

0xeb09,	// (0x0008c570) cams_zoom_pane_cp2

0xeb09,	// (0x0008c570) image2_vga_pane_ParamLimits

0xeb09,	// (0x0008c570) image2_vga_pane

0xeb17,	// (0x0008c57e) main_camera2_pane_g1_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g1

0xeb17,	// (0x0008c57e) main_camera2_pane_g2_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g2

0xeb17,	// (0x0008c57e) main_camera2_pane_g3_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g3

0xeb17,	// (0x0008c57e) main_camera2_pane_g4_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g4

0xeb17,	// (0x0008c57e) main_camera2_pane_g5_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g5

0xeb17,	// (0x0008c57e) main_camera2_pane_g6_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g6

0xeb17,	// (0x0008c57e) main_camera2_pane_g7_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g7

0xeb17,	// (0x0008c57e) main_camera2_pane_g8_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0008d042) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0008d042) main_camera2_pane_g

0x62a3,	// (0x00083d0a) main_camera2_pane_t1_ParamLimits

0x62a3,	// (0x00083d0a) main_camera2_pane_t1

0x62a3,	// (0x00083d0a) main_camera2_pane_t2_ParamLimits

0x62a3,	// (0x00083d0a) main_camera2_pane_t2

0x62a3,	// (0x00083d0a) main_camera2_pane_t3_ParamLimits

0x62a3,	// (0x00083d0a) main_camera2_pane_t3

0x62a3,	// (0x00083d0a) main_camera2_pane_t4_ParamLimits

0x62a3,	// (0x00083d0a) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0008d055) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0008d055) main_camera2_pane_t

0xeb5b,	// (0x0008c5c2) cams_zoom_pane_cp4_ParamLimits

0xeb5b,	// (0x0008c5c2) cams_zoom_pane_cp4

0x62b7,	// (0x00083d1e) image2_cif_pane_ParamLimits

0x62b7,	// (0x00083d1e) image2_cif_pane

0xea89,	// (0x0008c4f0) image2_subqcif_pane_ParamLimits

0xea89,	// (0x0008c4f0) image2_subqcif_pane

0x62c5,	// (0x00083d2c) main_video2_pane_g1_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g1

0x62c5,	// (0x00083d2c) main_video2_pane_g2_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g2

0x62c5,	// (0x00083d2c) main_video2_pane_g3_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g3

0x62c5,	// (0x00083d2c) main_video2_pane_g4_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g4

0x62c5,	// (0x00083d2c) main_video2_pane_g5_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g5

0x62c5,	// (0x00083d2c) main_video2_pane_g6_ParamLimits

0x62c5,	// (0x00083d2c) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0008d064) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0008d064) main_video2_pane_g

0x62d3,	// (0x00083d3a) main_video2_pane_t1_ParamLimits

0x62d3,	// (0x00083d3a) main_video2_pane_t1

0x62d3,	// (0x00083d3a) main_video2_pane_t2_ParamLimits

0x62d3,	// (0x00083d3a) main_video2_pane_t2

0x62d3,	// (0x00083d3a) main_video2_pane_t3_ParamLimits

0x62d3,	// (0x00083d3a) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0008d071) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0008d071) main_video2_pane_t

0x5c71,	// (0x000836d8) call_muted_g2

0x0001,

0xf5b1,	// (0x0008d018) call_muted_g

0xb0a6,	// (0x00088b0d) main_mup2_pane

0x217e,	// (0x0007fbe5) main_mup2_pane_g1_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g1

0x217e,	// (0x0007fbe5) main_mup2_pane_g2_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g2

0xc469,	// (0x00089ed0) main_mup_pane_g13_cp1

0xac8b,	// (0x000886f2) mup_volume_pane_cp1

0x217e,	// (0x0007fbe5) main_mup2_pane_g4_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g4

0x217e,	// (0x0007fbe5) main_mup2_pane_g5_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g5

0x217e,	// (0x0007fbe5) main_mup2_pane_g6_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g6

0x217e,	// (0x0007fbe5) main_mup2_pane_g7_ParamLimits

0x217e,	// (0x0007fbe5) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0008d078) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0008d078) main_mup2_pane_g

0x216a,	// (0x0007fbd1) main_mup2_pane_t1_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t1

0x216a,	// (0x0007fbd1) main_mup2_pane_t2_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t2

0x216a,	// (0x0007fbd1) main_mup2_pane_t3_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t3

0x216a,	// (0x0007fbd1) main_mup2_pane_t4_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t4

0x216a,	// (0x0007fbd1) main_mup2_pane_t5_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t5

0x216a,	// (0x0007fbd1) main_mup2_pane_t6_ParamLimits

0x216a,	// (0x0007fbd1) main_mup2_pane_t6

0x0005,

0xf620,	// (0x0008d087) main_mup2_pane_t_ParamLimits

0xf620,	// (0x0008d087) main_mup2_pane_t

0x2150,	// (0x0007fbb7) mup2_visualizer_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup2_visualizer_pane

0x2150,	// (0x0007fbb7) mup_progress_pane_cp_ParamLimits

0x2150,	// (0x0007fbb7) mup_progress_pane_cp

0xeb7f,	// (0x0008c5e6) mup_volume_pane_cp_ParamLimits

0xeb7f,	// (0x0008c5e6) mup_volume_pane_cp

0xb37b,	// (0x00088de2) mup2_visualizer_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) mup2_visualizer_pane_g1

0xb389,	// (0x00088df0) mup2_visualizer_pane_g2_ParamLimits

0xb389,	// (0x00088df0) mup2_visualizer_pane_g2

0xb389,	// (0x00088df0) mup2_visualizer_pane_g3_ParamLimits

0xb389,	// (0x00088df0) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0008cb4b) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0008cb4b) mup2_visualizer_pane_g

0xbc41,	// (0x000896a8) aid_size_cell_fmradio

0x5deb,	// (0x00083852) aid_height_parent_landcape

0xb86f,	// (0x000892d6) wml_content_pane_cp

0xb877,	// (0x000892de) wml_tabs_pane

0xb880,	// (0x000892e7) popup_wml_miniature_window

0xb888,	// (0x000892ef) scroll_pane_cp021

0xb89c,	// (0x00089303) wml_content_pane_comp8

0xb0a6,	// (0x00088b0d) bg_popup_sub_pane_cp05

0xc3d1,	// (0x00089e38) popup_wml_miniature_window_g1

0xc3d9,	// (0x00089e40) wml_miniature_view_pane

0x62e7,	// (0x00083d4e) aid_size_wml_view

0x62ef,	// (0x00083d56) wml_miniature_view_pane_g1

0x62f8,	// (0x00083d5f) wml_miniature_view_pane_g2

0x6301,	// (0x00083d68) wml_miniature_view_pane_g3

0x6309,	// (0x00083d70) wml_miniature_view_pane_g4

0x6311,	// (0x00083d78) wml_miniature_view_pane_g5

0x6319,	// (0x00083d80) wml_miniature_view_pane_g6

0x6321,	// (0x00083d88) wml_miniature_view_pane_g7

0x6329,	// (0x00083d90) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x0008d094) wml_miniature_view_pane_g

0xc3e1,	// (0x00089e48) background_graphic_ParamLimits

0xc3e1,	// (0x00089e48) background_graphic

0xc3ed,	// (0x00089e54) wml_tabs_2_pane

0xc3f6,	// (0x00089e5d) wml_tabs_3_pane_ParamLimits

0xc3f6,	// (0x00089e5d) wml_tabs_3_pane

0xc408,	// (0x00089e6f) wml_tabs_4_pane_ParamLimits

0xc408,	// (0x00089e6f) wml_tabs_4_pane

0xc41e,	// (0x00089e85) wml_tabs_5_pane_ParamLimits

0xc41e,	// (0x00089e85) wml_tabs_5_pane

0xc438,	// (0x00089e9f) wml_tabs_pane_g2_ParamLimits

0xc438,	// (0x00089e9f) wml_tabs_pane_g2

0xc44c,	// (0x00089eb3) wml_tabs_pane_g3_ParamLimits

0xc44c,	// (0x00089eb3) wml_tabs_pane_g3

0x6331,	// (0x00083d98) wml_tabs_2_active_pane_ParamLimits

0x6331,	// (0x00083d98) wml_tabs_2_active_pane

0x6341,	// (0x00083da8) wml_tabs_2_passive_pane_ParamLimits

0x6341,	// (0x00083da8) wml_tabs_2_passive_pane

0x6351,	// (0x00083db8) wml_tabs_3_active_pane_cp_ParamLimits

0x6351,	// (0x00083db8) wml_tabs_3_active_pane_cp

0x6362,	// (0x00083dc9) wml_tabs_3_passive_pane_ParamLimits

0x6362,	// (0x00083dc9) wml_tabs_3_passive_pane

0x6373,	// (0x00083dda) wml_tabs_3_passive_pane_cp_ParamLimits

0x6373,	// (0x00083dda) wml_tabs_3_passive_pane_cp

0x6384,	// (0x00083deb) tabs_4_active_pane

0x638c,	// (0x00083df3) tabs_4_passive_pane

0x6394,	// (0x00083dfb) tabs_4_passive_pane_cp

0x639c,	// (0x00083e03) tabs_4_passive_pane_cp2

0x5b4c,	// (0x000835b3) aid_height_text

0x2150,	// (0x0007fbb7) mup_volume_cont_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup_volume_cont_pane

0x35dc,	// (0x00081043) aid_size_cell_pinb

0x3346,	// (0x00080dad) aid_size_list_pinb

0x2150,	// (0x0007fbb7) mup2_volume_cont_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup2_volume_cont_pane

0xeb69,	// (0x0008c5d0) mup2_volume_cont_pane_g1_ParamLimits

0xeb69,	// (0x0008c5d0) mup2_volume_cont_pane_g1

0x3350,	// (0x00080db7) aid_size_cell_touch_ParamLimits

0x3350,	// (0x00080db7) aid_size_cell_touch

0x353c,	// (0x00080fa3) touch_pane_ParamLimits

0x353c,	// (0x00080fa3) touch_pane

0xac8b,	// (0x000886f2) main_rss2_pane

0xc473,	// (0x00089eda) listscroll_rss2_pane

0xc47c,	// (0x00089ee3) rss2_navigation_pane

0xc484,	// (0x00089eeb) list_rss2_pane

0x11e3,	// (0x0007ec4a) scroll_pane_cp22

0xc48c,	// (0x00089ef3) rss2_navigation_pane_g1

0xc495,	// (0x00089efc) rss2_navigation_pane_g2

0xc49d,	// (0x00089f04) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x0008d0a5) rss2_navigation_pane_g

0xc4a5,	// (0x00089f0c) rss2_navigation_pane_t1

0x63a4,	// (0x00083e0b) rss2_list_single_pane_ParamLimits

0x63a4,	// (0x00083e0b) rss2_list_single_pane

0xc4b3,	// (0x00089f1a) rss2_list_single_pane_t2

0xc4c1,	// (0x00089f28) rss2_list_single_pane_t3_ParamLimits

0xc4c1,	// (0x00089f28) rss2_list_single_pane_t3

0xc4de,	// (0x00089f45) rss2_list_single_pane_t4

0x4ef3,	// (0x0008295a) smil_status_pane_g1

0xea89,	// (0x0008c4f0) main_image2_pane_ParamLimits

0xea89,	// (0x0008c4f0) main_image2_pane

0xeb17,	// (0x0008c57e) main_camera2_pane_g9_ParamLimits

0xeb17,	// (0x0008c57e) main_camera2_pane_g9

0x62a3,	// (0x00083d0a) main_camera2_pane_t5_ParamLimits

0x62a3,	// (0x00083d0a) main_camera2_pane_t5

0xeb25,	// (0x0008c58c) main_camera2_pane_t6_ParamLimits

0xeb25,	// (0x0008c58c) main_camera2_pane_t6

0x63b8,	// (0x00083e1f) main_image2_pane_g1_ParamLimits

0x63b8,	// (0x00083e1f) main_image2_pane_g1

0x5904,	// (0x0008336b) smil2_video_pane_ParamLimits

0x5904,	// (0x0008336b) smil2_video_pane

0xac5a,	// (0x000886c1) aid_zoom_text_primary_cp

0xac83,	// (0x000886ea) popup_preview_fixed_window

0xb7c9,	// (0x00089230) im_reading_pane_g1

0x6295,	// (0x00083cfc) cams2_bc_adjust_pane_cp_ParamLimits

0x6295,	// (0x00083cfc) cams2_bc_adjust_pane_cp

0xeb4d,	// (0x0008c5b4) cams2_bc_adjust_pane_ParamLimits

0xeb4d,	// (0x0008c5b4) cams2_bc_adjust_pane

0xc469,	// (0x00089ed0) cams2_bc_adjust_pane_g1

0xac8b,	// (0x000886f2) cams2_slider_pane

0xc469,	// (0x00089ed0) cams2_slider_pane_g1

0xc469,	// (0x00089ed0) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x0008d0ac) cams2_slider_pane_g

0x3617,	// (0x0008107e) calc_display_pane_ParamLimits

0x3633,	// (0x0008109a) calc_paper_pane_ParamLimits

0x3654,	// (0x000810bb) grid_calc_pane_ParamLimits

0xbb90,	// (0x000895f7) popup_clock_digital_window_t1_ParamLimits

0x1654,	// (0x0007f0bb) main_image_pane_t1

0x35f9,	// (0x00081060) aid_size_cell_calc_ParamLimits

0x35f9,	// (0x00081060) aid_size_cell_calc

0x5e2b,	// (0x00083892) popup_blid_sat_info2_window_ParamLimits

0x5e2b,	// (0x00083892) popup_blid_sat_info2_window

0xc4ec,	// (0x00089f53) aid_size_cell_blid

0xc4f4,	// (0x00089f5b) bg_popup_window_pane_cp07

0xc517,	// (0x00089f7e) grid_popup_blid_pane

0xc51f,	// (0x00089f86) heading_pane_cp05_ParamLimits

0xc51f,	// (0x00089f86) heading_pane_cp05

0xc5e7,	// (0x0008a04e) cell_popup_blid_pane_ParamLimits

0xc5e7,	// (0x0008a04e) cell_popup_blid_pane

0xc607,	// (0x0008a06e) cell_popup_blid_pane_g1

0xc60f,	// (0x0008a076) cell_popup_blid_pane_t1

0x2150,	// (0x0007fbb7) mup2_indicator_pane_ParamLimits

0x2150,	// (0x0007fbb7) mup2_indicator_pane

0x3346,	// (0x00080dad) mup2_visualizer_osc_pane

0xc3bb,	// (0x00089e22) mup2_visualizer_spec_pane_ParamLimits

0xc3bb,	// (0x00089e22) mup2_visualizer_spec_pane

0x3346,	// (0x00080dad) mup2_spec_half_pane

0x3346,	// (0x00080dad) mup2_spec_half_pane_cp

0x3346,	// (0x00080dad) mup2_spec_bar_pane_ParamLimits

0x3346,	// (0x00080dad) mup2_spec_bar_pane

0xb6dc,	// (0x00089143) mup2_spec_bar_pane_g1

0xc61d,	// (0x0008a084) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x0008d0d2) mup2_spec_bar_pane_g

0x3346,	// (0x00080dad) mup2_osc_middle_pane

0xb6dc,	// (0x00089143) mup2_visualizer_osc_pane_g1

0xacb5,	// (0x0008871c) popup_number_entry_window_t1_ParamLimits

0xacc8,	// (0x0008872f) popup_number_entry_window_t2_ParamLimits

0xacda,	// (0x00088741) popup_number_entry_window_t3_ParamLimits

0x3584,	// (0x00080feb) popup_number_entry_window_t5_ParamLimits

0x3584,	// (0x00080feb) popup_number_entry_window_t5

0xf085,	// (0x0008caec) popup_number_entry_window_t_ParamLimits

0xacec,	// (0x00088753) text_title_cp2_ParamLimits

0xbc0f,	// (0x00089676) aid_hotspot_pointer_text2_pane

0xbc35,	// (0x0008969c) main_viewer_pane_g9_ParamLimits

0xbc35,	// (0x0008969c) main_viewer_pane_g9

0xba12,	// (0x00089479) cale_month_pane_t1_ParamLimits

0xba66,	// (0x000894cd) bg_cale_pane_ParamLimits

0xba7e,	// (0x000894e5) list_cale_pane_ParamLimits

0xba8f,	// (0x000894f6) listscroll_cale_day_pane_t1

0xbaa1,	// (0x00089508) scroll_pane_cp09_ParamLimits

0x534c,	// (0x00082db3) main_mup_eq_pane_t1_ParamLimits

0x534c,	// (0x00082db3) main_mup_eq_pane_t1

0x5364,	// (0x00082dcb) main_mup_eq_pane_t2_ParamLimits

0x5364,	// (0x00082dcb) main_mup_eq_pane_t2

0x537a,	// (0x00082de1) main_mup_eq_pane_t3_ParamLimits

0x537a,	// (0x00082de1) main_mup_eq_pane_t3

0x5390,	// (0x00082df7) main_mup_eq_pane_t4_ParamLimits

0x5390,	// (0x00082df7) main_mup_eq_pane_t4

0x53a6,	// (0x00082e0d) main_mup_eq_pane_t5_ParamLimits

0x53a6,	// (0x00082e0d) main_mup_eq_pane_t5

0x53bc,	// (0x00082e23) main_mup_eq_pane_t6_ParamLimits

0x53bc,	// (0x00082e23) main_mup_eq_pane_t6

0x53ce,	// (0x00082e35) main_mup_eq_pane_t7_ParamLimits

0x53ce,	// (0x00082e35) main_mup_eq_pane_t7

0x53e0,	// (0x00082e47) main_mup_eq_pane_t8_ParamLimits

0x53e0,	// (0x00082e47) main_mup_eq_pane_t8

0x53f2,	// (0x00082e59) main_mup_eq_pane_t9_ParamLimits

0x53f2,	// (0x00082e59) main_mup_eq_pane_t9

0x5408,	// (0x00082e6f) main_mup_eq_pane_t10_ParamLimits

0x5408,	// (0x00082e6f) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0008ce62) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0008ce62) main_mup_eq_pane_t

0x549b,	// (0x00082f02) mup_equalizer_pane_cp5_ParamLimits

0x54ad,	// (0x00082f14) mup_equalizer_pane_cp6_ParamLimits

0x54bf,	// (0x00082f26) mup_equalizer_pane_cp7_ParamLimits

0xac8b,	// (0x000886f2) main_gallery_pane

0xc38d,	// (0x00089df4) smil2_volume_pane

0xc395,	// (0x00089dfc) smil_status_volume_pane_g1_ParamLimits

0xc3a8,	// (0x00089e0f) smil_status_volume_pane_g2_ParamLimits

0xeae7,	// (0x0008c54e) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x0008d02b) smil_status_volume_pane_g_ParamLimits

0xc4f4,	// (0x00089f5b) bg_popup_window_pane_cp07_ParamLimits

0xc502,	// (0x00089f69) blid_firmament_pane

0x1497,	// (0x0007eefe) aid_size_cell_gallery_ParamLimits

0x1497,	// (0x0007eefe) aid_size_cell_gallery

0x63cc,	// (0x00083e33) grid_gallery_pane_ParamLimits

0x63cc,	// (0x00083e33) grid_gallery_pane

0x63e2,	// (0x00083e49) cell_gallery_pane_ParamLimits

0x63e2,	// (0x00083e49) cell_gallery_pane

0x1497,	// (0x0007eefe) bg_cell_gallery_focus_pane_ParamLimits

0x1497,	// (0x0007eefe) bg_cell_gallery_focus_pane

0xb37b,	// (0x00088de2) cell_gallery_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) cell_gallery_pane_g1

0xb37b,	// (0x00088de2) cell_gallery_pane_g2_ParamLimits

0xb37b,	// (0x00088de2) cell_gallery_pane_g2

0xb37b,	// (0x00088de2) cell_gallery_pane_g3_ParamLimits

0xb37b,	// (0x00088de2) cell_gallery_pane_g3

0xb389,	// (0x00088df0) cell_gallery_pane_g4_ParamLimits

0xb389,	// (0x00088df0) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x0008d0d7) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x0008d0d7) cell_gallery_pane_g

0xc627,	// (0x0008a08e) bg_cell_gallery_focus_pane_g1

0xc62f,	// (0x0008a096) bg_cell_gallery_focus_pane_g2

0xc637,	// (0x0008a09e) bg_cell_gallery_focus_pane_g3

0xc63f,	// (0x0008a0a6) bg_cell_gallery_focus_pane_g4

0xc647,	// (0x0008a0ae) bg_cell_gallery_focus_pane_g5

0xc64f,	// (0x0008a0b6) bg_cell_gallery_focus_pane_g6

0xc657,	// (0x0008a0be) bg_cell_gallery_focus_pane_g7

0xc65f,	// (0x0008a0c6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x0008d0e0) bg_cell_gallery_focus_pane_g

0xc667,	// (0x0008a0ce) aid_firma_cardinal

0xc67b,	// (0x0008a0e2) blid_firmament_pane_t1

0xc692,	// (0x0008a0f9) blid_firmament_pane_t2

0xc6a9,	// (0x0008a110) blid_firmament_pane_t3

0xc6c0,	// (0x0008a127) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x0008d0f1) blid_firmament_pane_t

0xc6d7,	// (0x0008a13e) blid_sat_info_pane

0xb6dc,	// (0x00089143) blid_sat_info_pane_g1

0xb6dc,	// (0x00089143) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) blid_sat_info_pane_g

0xc6e7,	// (0x0008a14e) blid_sat_info_pane_t1

0xc6f5,	// (0x0008a15c) smil2_volume_content_pane

0xc6fe,	// (0x0008a165) smil2_volume_pane_g1

0xc706,	// (0x0008a16d) smil2_volume_content_pane_g1

0xc70f,	// (0x0008a176) smil2_volume_content_pane_g2

0xc718,	// (0x0008a17f) smil2_volume_content_pane_g3

0xc721,	// (0x0008a188) smil2_volume_content_pane_g4

0xc72a,	// (0x0008a191) smil2_volume_content_pane_g5

0xc733,	// (0x0008a19a) smil2_volume_content_pane_g6

0xc73c,	// (0x0008a1a3) smil2_volume_content_pane_g7

0xc745,	// (0x0008a1ac) smil2_volume_content_pane_g8

0xc74e,	// (0x0008a1b5) smil2_volume_content_pane_g9

0xc757,	// (0x0008a1be) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x0008d0fa) smil2_volume_content_pane_g

0x3b77,	// (0x000815de) cale_week_day_heading_pane_t1_ParamLimits

0x3ba1,	// (0x00081608) cale_week_day_heading_pane_t2_ParamLimits

0x3bd0,	// (0x00081637) cale_week_day_heading_pane_t3_ParamLimits

0x3bff,	// (0x00081666) cale_week_day_heading_pane_t4_ParamLimits

0x3c2e,	// (0x00081695) cale_week_day_heading_pane_t5_ParamLimits

0x3c5d,	// (0x000816c4) cale_week_day_heading_pane_t6_ParamLimits

0x3c8c,	// (0x000816f3) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0008cbf3) cale_week_day_heading_pane_t_ParamLimits

0xb626,	// (0x0008908d) bg_cale_side_pane_ParamLimits

0x3cb6,	// (0x0008171d) cale_week_time_pane_t1_ParamLimits

0x3cf0,	// (0x00081757) cale_week_time_pane_t2_ParamLimits

0x3d2a,	// (0x00081791) cale_week_time_pane_t3_ParamLimits

0x3d64,	// (0x000817cb) cale_week_time_pane_t4_ParamLimits

0x3d9e,	// (0x00081805) cale_week_time_pane_t5_ParamLimits

0x3dd8,	// (0x0008183f) cale_week_time_pane_t6_ParamLimits

0x3e12,	// (0x00081879) cale_week_time_pane_t7_ParamLimits

0x3e4c,	// (0x000818b3) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0008cc02) cale_week_time_pane_t_ParamLimits

0x3e86,	// (0x000818ed) cell_cale_week_pane_g2_ParamLimits

0xb626,	// (0x0008908d) bg_cale_side_pane_cp01_ParamLimits

0x4d42,	// (0x000827a9) cale_month_week_pane_t1_ParamLimits

0x4d5b,	// (0x000827c2) cale_month_week_pane_t2_ParamLimits

0x4d74,	// (0x000827db) cale_month_week_pane_t3_ParamLimits

0x4d8d,	// (0x000827f4) cale_month_week_pane_t4_ParamLimits

0x4da6,	// (0x0008280d) cale_month_week_pane_t5_ParamLimits

0x4dbf,	// (0x00082826) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0008ccd0) cale_month_week_pane_t_ParamLimits

0xba24,	// (0x0008948b) cell_cale_month_pane_g1_ParamLimits

0xac8b,	// (0x000886f2) main_cale_event_viewer_pane

0x3346,	// (0x00080dad) listscroll_cale_event_viewer_pane

0xc760,	// (0x0008a1c7) list_cale_ev_pane

0xc768,	// (0x0008a1cf) scroll_pane_cp023

0x6402,	// (0x00083e69) field_cale_ev_pane_ParamLimits

0x6402,	// (0x00083e69) field_cale_ev_pane

0xc774,	// (0x0008a1db) field_cale_ev_content_pane_ParamLimits

0xc774,	// (0x0008a1db) field_cale_ev_content_pane

0xc780,	// (0x0008a1e7) field_cale_ev_pane_g1_ParamLimits

0xc780,	// (0x0008a1e7) field_cale_ev_pane_g1

0xc78c,	// (0x0008a1f3) field_cale_ev_pane_g2_ParamLimits

0xc78c,	// (0x0008a1f3) field_cale_ev_pane_g2

0xc7a4,	// (0x0008a20b) field_cale_ev_pane_g3_ParamLimits

0xc7a4,	// (0x0008a20b) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0008d10f) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0008d10f) field_cale_ev_pane_g

0xc7bc,	// (0x0008a223) field_cale_ev_pane_t1_ParamLimits

0xc7bc,	// (0x0008a223) field_cale_ev_pane_t1

0x3878,	// (0x000812df) field_cale_ev_content_pane_t1_ParamLimits

0x3878,	// (0x000812df) field_cale_ev_content_pane_t1

0x153a,	// (0x0007efa1) bg_button_pane_cp01

0x38c6,	// (0x0008132d) listscroll_cale_week_pane_ParamLimits

0xb5d1,	// (0x00089038) popup_toolbar_window_cp01

0xb5f7,	// (0x0008905e) listscroll_cale_week_pane_t1_ParamLimits

0x38c6,	// (0x0008132d) listscroll_cale_day_pane_ParamLimits

0xb5d1,	// (0x00089038) popup_toolbar_window_cp02

0xba8f,	// (0x000894f6) listscroll_cale_day_pane_t1_ParamLimits

0x5df3,	// (0x0008385a) main_cale_month_pane_ParamLimits

0xead2,	// (0x0008c539) popup_toolbar_window_cp03_ParamLimits

0xead2,	// (0x0008c539) popup_toolbar_window_cp03

0x57de,	// (0x00083245) main_image_pane_g2_ParamLimits

0x57de,	// (0x00083245) main_image_pane_g2

0x57ef,	// (0x00083256) main_image_pane_g3_ParamLimits

0x57ef,	// (0x00083256) main_image_pane_g3

0x0002,

0xf48d,	// (0x0008cef4) main_image_pane_g_ParamLimits

0xf48d,	// (0x0008cef4) main_image_pane_g

0x1654,	// (0x0007f0bb) main_image_pane_t1_ParamLimits

0x5800,	// (0x00083267) main_image_pane_t2_ParamLimits

0x5800,	// (0x00083267) main_image_pane_t2

0x5812,	// (0x00083279) main_image_pane_t3_ParamLimits

0x5812,	// (0x00083279) main_image_pane_t3

0x583a,	// (0x000832a1) main_image_pane_t4_ParamLimits

0x583a,	// (0x000832a1) main_image_pane_t4

0x0003,

0xf494,	// (0x0008cefb) main_image_pane_t_ParamLimits

0xf494,	// (0x0008cefb) main_image_pane_t

0x585a,	// (0x000832c1) popup_image_details_window_cp01

0x5862,	// (0x000832c9) popup_toobar_trans_pane_cp01_ParamLimits

0x5862,	// (0x000832c9) popup_toobar_trans_pane_cp01

0x5ef4,	// (0x0008395b) popup_image_details_window_ParamLimits

0x5ef4,	// (0x0008395b) popup_image_details_window

0xeaa7,	// (0x0008c50e) popup_image_focus_window

0xeb09,	// (0x0008c570) camera2_autofocus_pane_ParamLimits

0xeb09,	// (0x0008c570) camera2_autofocus_pane

0x3346,	// (0x00080dad) bg_popup_sub_pane_cp06

0xc7d3,	// (0x0008a23a) popup_image_focus_window_g1

0xc7db,	// (0x0008a242) popup_image_focus_window_g2

0xc7e3,	// (0x0008a24a) popup_image_focus_window_g3

0xc7eb,	// (0x0008a252) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x0008d116) popup_image_focus_window_g

0xc7f3,	// (0x0008a25a) popup_image_focus_window_t1

0xc801,	// (0x0008a268) popup_image_focus_window_t2

0xc810,	// (0x0008a277) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0008d11f) popup_image_focus_window_t

0xb37b,	// (0x00088de2) camera2_autofocus_pane_g1

0x1497,	// (0x0007eefe) bg_tb_trans_pane_cp01

0xc81e,	// (0x0008a285) popup_image_details_window_g1

0xc831,	// (0x0008a298) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0008d131) popup_image_details_window_g

0xc85a,	// (0x0008a2c1) popup_image_details_window_t1

0xc86c,	// (0x0008a2d3) popup_image_details_window_t2

0xc885,	// (0x0008a2ec) popup_image_details_window_t3

0xc899,	// (0x0008a300) popup_image_details_window_t4

0xc8b4,	// (0x0008a31b) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x0008d138) popup_image_details_window_t

0xb3e1,	// (0x00088e48) bg_calc_paper_pane_ParamLimits

0xac8b,	// (0x000886f2) grid_highlight_pane_cp013

0xb3f9,	// (0x00088e60) list_calc_pane_ParamLimits

0xb40b,	// (0x00088e72) scroll_pane_cp024

0xb413,	// (0x00088e7a) bg_calc_display_pane_ParamLimits

0xb41f,	// (0x00088e86) calc_display_pane_t1_ParamLimits

0xb434,	// (0x00088e9b) calc_display_pane_t2_ParamLimits

0xb449,	// (0x00088eb0) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0008cb73) calc_display_pane_t_ParamLimits

0x37d3,	// (0x0008123a) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0008cb90) cell_calc_pane_g

0x37dc,	// (0x00081243) cell_calc_pane_t1

0xb4b6,	// (0x00088f1d) grid_highlight_pane_cp02_ParamLimits

0xb4cc,	// (0x00088f33) toolbar_button_pane_cp01_ParamLimits

0xb4cc,	// (0x00088f33) toolbar_button_pane_cp01

0x1699,	// (0x0007f100) temp_image_control_pane_ParamLimits

0x1699,	// (0x0007f100) temp_image_control_pane

0xea89,	// (0x0008c4f0) main_mp3_pane

0xc8ce,	// (0x0008a335) temp_image_control_pane_g1_ParamLimits

0xc8ce,	// (0x0008a335) temp_image_control_pane_g1

0xc8dc,	// (0x0008a343) temp_image_control_pane_g2_ParamLimits

0xc8dc,	// (0x0008a343) temp_image_control_pane_g2

0xc8ee,	// (0x0008a355) temp_image_control_pane_g3_ParamLimits

0xc8ee,	// (0x0008a355) temp_image_control_pane_g3

0x641c,	// (0x00083e83) temp_image_control_pane_g4_ParamLimits

0x641c,	// (0x00083e83) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x0008d143) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x0008d143) temp_image_control_pane_g

0xc8ce,	// (0x0008a335) main_mp3_pane_g1

0x642d,	// (0x00083e94) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0008d14c) main_mp3_pane_g

0xc923,	// (0x0008a38a) main_mp3_pane_t1

0xb389,	// (0x00088df0) main_camera_pane_g8_ParamLimits

0xb389,	// (0x00088df0) main_camera_pane_g8

0x406d,	// (0x00081ad4) main_video_pane_g7_ParamLimits

0x406d,	// (0x00081ad4) main_video_pane_g7

0xeb39,	// (0x0008c5a0) main_camera2_pane_t7_ParamLimits

0xeb39,	// (0x0008c5a0) main_camera2_pane_t7

0xb82f,	// (0x00089296) scroll_pane_cp025_ParamLimits

0xb82f,	// (0x00089296) scroll_pane_cp025

0xb843,	// (0x000892aa) scroll_pane_cp026_ParamLimits

0xb843,	// (0x000892aa) scroll_pane_cp026

0xb852,	// (0x000892b9) wml_content_pane_ParamLimits

0xac8b,	// (0x000886f2) main_touch_calib_pane

0x64ef,	// (0x00083f56) main_touch_calib_pane_g1

0x6501,	// (0x00083f68) main_touch_calib_pane_g2

0x6513,	// (0x00083f7a) main_touch_calib_pane_g3

0x6525,	// (0x00083f8c) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0008d16a) main_touch_calib_pane_g

0x6537,	// (0x00083f9e) main_touch_calib_pane_t1

0x654f,	// (0x00083fb6) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x0008d173) main_touch_calib_pane_t

0x129f,	// (0x0007ed06) mup_progress_pane_cp02

0x12d4,	// (0x0007ed3b) navi_pane_g1

0x135f,	// (0x0007edc6) navi_pane_mp_t3

0xea89,	// (0x0008c4f0) main_mp3_pane_ParamLimits

0x604d,	// (0x00083ab4) navi_pane_ParamLimits

0xc8ce,	// (0x0008a335) main_mp3_pane_g1_ParamLimits

0x642d,	// (0x00083e94) main_mp3_pane_g2_ParamLimits

0x6439,	// (0x00083ea0) main_mp3_pane_g3_ParamLimits

0x6439,	// (0x00083ea0) main_mp3_pane_g3

0x6445,	// (0x00083eac) main_mp3_pane_g4_ParamLimits

0x6445,	// (0x00083eac) main_mp3_pane_g4

0xb37b,	// (0x00088de2) main_mp3_pane_g5_ParamLimits

0xb37b,	// (0x00088de2) main_mp3_pane_g5

0xc8fe,	// (0x0008a365) main_mp3_pane_g6_ParamLimits

0xc8fe,	// (0x0008a365) main_mp3_pane_g6

0xc90b,	// (0x0008a372) main_mp3_pane_g7_ParamLimits

0xc90b,	// (0x0008a372) main_mp3_pane_g7

0xc917,	// (0x0008a37e) main_mp3_pane_g8_ParamLimits

0xc917,	// (0x0008a37e) main_mp3_pane_g8

0xf6e5,	// (0x0008d14c) main_mp3_pane_g_ParamLimits

0x6451,	// (0x00083eb8) main_mp3_pane_t2

0x645f,	// (0x00083ec6) main_mp3_pane_t3

0xc931,	// (0x0008a398) main_mp3_pane_t4

0xc93f,	// (0x0008a3a6) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0008d15d) main_mp3_pane_t

0xc94d,	// (0x0008a3b4) mup_progress_pane_cp01

0xac5a,	// (0x000886c1) aid_zoom_text_secondary2

0xc760,	// (0x0008a1c7) list_cale_ev2_pane

0xc768,	// (0x0008a1cf) scroll_pane_cp023_ParamLimits

0x659d,	// (0x00084004) field_cale_ev2_pane_ParamLimits

0x659d,	// (0x00084004) field_cale_ev2_pane

0xc955,	// (0x0008a3bc) field_cale_ev2_pane_g1_ParamLimits

0xc955,	// (0x0008a3bc) field_cale_ev2_pane_g1

0xc961,	// (0x0008a3c8) field_cale_ev2_pane_g2_ParamLimits

0xc961,	// (0x0008a3c8) field_cale_ev2_pane_g2

0xc979,	// (0x0008a3e0) field_cale_ev2_pane_g3_ParamLimits

0xc979,	// (0x0008a3e0) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0008d17e) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0008d17e) field_cale_ev2_pane_g

0xc99d,	// (0x0008a404) field_cale_ev2_pane_t1_ParamLimits

0xc99d,	// (0x0008a404) field_cale_ev2_pane_t1

0xc9b4,	// (0x0008a41b) field_cale_ev2_pane_t2_ParamLimits

0xc9b4,	// (0x0008a41b) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x0008d187) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x0008d187) field_cale_ev2_pane_t

0x5699,	// (0x00083100) main_postcard_pane_g5_ParamLimits

0x5699,	// (0x00083100) main_postcard_pane_g5

0x56ad,	// (0x00083114) main_postcard_pane_g6_ParamLimits

0x56ad,	// (0x00083114) main_postcard_pane_g6

0x1497,	// (0x0007eefe) camera2_autofocus_pane_cp_ParamLimits

0x1497,	// (0x0007eefe) camera2_autofocus_pane_cp

0xea89,	// (0x0008c4f0) main_mup3_pane

0x65f3,	// (0x0008405a) main_mup3_pane_g1_ParamLimits

0x65f3,	// (0x0008405a) main_mup3_pane_g1

0x6615,	// (0x0008407c) main_mup3_pane_g2_ParamLimits

0x6615,	// (0x0008407c) main_mup3_pane_g2

0x6688,	// (0x000840ef) main_mup3_pane_g3_ParamLimits

0x6688,	// (0x000840ef) main_mup3_pane_g3

0x66c6,	// (0x0008412d) main_mup3_pane_g4_ParamLimits

0x66c6,	// (0x0008412d) main_mup3_pane_g4

0x6704,	// (0x0008416b) main_mup3_pane_g5_ParamLimits

0x6704,	// (0x0008416b) main_mup3_pane_g5

0x6742,	// (0x000841a9) main_mup3_pane_g6_ParamLimits

0x6742,	// (0x000841a9) main_mup3_pane_g6

0xb389,	// (0x00088df0) main_mup3_pane_g7_ParamLimits

0xb389,	// (0x00088df0) main_mup3_pane_g7

0x0007,

0xf730,	// (0x0008d197) main_mup3_pane_g_ParamLimits

0xf730,	// (0x0008d197) main_mup3_pane_g

0x67b8,	// (0x0008421f) main_mup3_pane_t1_ParamLimits

0x67b8,	// (0x0008421f) main_mup3_pane_t1

0x681e,	// (0x00084285) main_mup3_pane_t2_ParamLimits

0x681e,	// (0x00084285) main_mup3_pane_t2

0x68e4,	// (0x0008434b) main_mup3_pane_t4_ParamLimits

0x68e4,	// (0x0008434b) main_mup3_pane_t4

0x6932,	// (0x00084399) main_mup3_pane_t5_ParamLimits

0x6932,	// (0x00084399) main_mup3_pane_t5

0x69e0,	// (0x00084447) main_mup3_pane_t6_ParamLimits

0x69e0,	// (0x00084447) main_mup3_pane_t6

0x0005,

0xf741,	// (0x0008d1a8) main_mup3_pane_t_ParamLimits

0xf741,	// (0x0008d1a8) main_mup3_pane_t

0x6a94,	// (0x000844fb) mup3_progress_pane_ParamLimits

0x6a94,	// (0x000844fb) mup3_progress_pane

0x6b10,	// (0x00084577) popup_mup3_control_window_ParamLimits

0x6b10,	// (0x00084577) popup_mup3_control_window

0xc9c9,	// (0x0008a430) popup_mup3_text_window

0x6b3e,	// (0x000845a5) mup3_progress_pane_t1

0x6b5c,	// (0x000845c3) mup3_progress_pane_t2

0xc9d1,	// (0x0008a438) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x0008d1b5) mup3_progress_pane_t

0xc9ee,	// (0x0008a455) mup_progress_pane_cp03

0x3346,	// (0x00080dad) bg_tb_trans_pane_cp04

0x6b7a,	// (0x000845e1) mup3_volume_pane

0x6b82,	// (0x000845e9) popup_mup3_control_window_g1

0x6b8b,	// (0x000845f2) mup3_volume_pane_g1

0x6b94,	// (0x000845fb) mup3_volume_pane_g2

0x6b9d,	// (0x00084604) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x0008d1bc) mup3_volume_pane_g

0x3346,	// (0x00080dad) bg_tb_trans_pane_cp03

0xc9fe,	// (0x0008a465) popup_mup3_text_window_g1

0xca06,	// (0x0008a46d) popup_mup3_text_window_t1

0xb497,	// (0x00088efe) list_calc_item_pane_g1_ParamLimits

0xc460,	// (0x00089ec7) mup_volume_pane_cp_g1

0x6567,	// (0x00083fce) main_touch_calib_pane_t3

0x6579,	// (0x00083fe0) main_touch_calib_pane_t4

0x658b,	// (0x00083ff2) main_touch_calib_pane_t5

0xac3a,	// (0x000886a1) aid_cell_size_toolbar2

0xac42,	// (0x000886a9) aid_popup3_width_pane

0xac4a,	// (0x000886b1) aid_zoom_text_msg_primary

0xb6aa,	// (0x00089111) vorec_t7

0xb45b,	// (0x00088ec2) bg_calc_paper_pane_g1_ParamLimits

0xb467,	// (0x00088ece) bg_calc_paper_pane_g2_ParamLimits

0xb473,	// (0x00088eda) bg_calc_paper_pane_g3_ParamLimits

0xb47f,	// (0x00088ee6) bg_calc_paper_pane_g4_ParamLimits

0xb48b,	// (0x00088ef2) bg_calc_paper_pane_g5_ParamLimits

0x376d,	// (0x000811d4) bg_calc_paper_pane_g6_ParamLimits

0x377c,	// (0x000811e3) bg_calc_paper_pane_g7_ParamLimits

0x378b,	// (0x000811f2) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0008cb7a) bg_calc_paper_pane_g_ParamLimits

0x379a,	// (0x00081201) calc_bg_paper_pane_g9_ParamLimits

0x3f83,	// (0x000819ea) image_qvga_pane_ParamLimits

0x3f83,	// (0x000819ea) image_qvga_pane

0xb301,	// (0x00088d68) bg_popup_sub_pane_cp04_ParamLimits

0x15d0,	// (0x0007f037) popup_mup_playback_window_g1_ParamLimits

0x15dc,	// (0x0007f043) popup_mup_playback_window_t1_ParamLimits

0x15f1,	// (0x0007f058) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x0008ceef) popup_mup_playback_window_t_ParamLimits

0xb389,	// (0x00088df0) main_mup2_pane_g3_ParamLimits

0xb389,	// (0x00088df0) main_mup2_pane_g3

0x4251,	// (0x00081cb8) popup_toolbar_window_cp04

0x19bf,	// (0x0007f426) popup_call2_audio_second_window_g3_ParamLimits

0x19bf,	// (0x0007f426) popup_call2_audio_second_window_g3

0x1def,	// (0x0007f856) popup_call2_audio_first_window_g4_ParamLimits

0x1def,	// (0x0007f856) popup_call2_audio_first_window_g4

0xbf67,	// (0x000899ce) popup_call2_audio_in_window_g4_ParamLimits

0xbf67,	// (0x000899ce) popup_call2_audio_in_window_g4

0x57c0,	// (0x00083227) aid_area_sk_bg_cut_ParamLimits

0x57c0,	// (0x00083227) aid_area_sk_bg_cut

0x1606,	// (0x0007f06d) aid_area_sk_bg_cut_2_ParamLimits

0x1606,	// (0x0007f06d) aid_area_sk_bg_cut_2

0x3346,	// (0x00080dad) aid_placing_details_win

0x3346,	// (0x00080dad) aid_placing_details_win_2

0xb37b,	// (0x00088de2) camera2_autofocus_pane_g1_ParamLimits

0x34dd,	// (0x00080f44) popup_fixed_preview_cale_window_ParamLimits

0x34dd,	// (0x00080f44) popup_fixed_preview_cale_window

0x13d5,	// (0x0007ee3c) navi_slider_pane_g3

0x13de,	// (0x0007ee45) navi_slider_pane_g4

0x13e7,	// (0x0007ee4e) navi_slider_pane_g5

0x13d5,	// (0x0007ee3c) navi_slider_pane_g6

0xbbb6,	// (0x0008961d) navi_slider_pane_g7

0x1507,	// (0x0007ef6e) mup_scale_pane_g3

0x1510,	// (0x0007ef77) mup_scale_pane_g4

0x1519,	// (0x0007ef80) mup_scale_pane_g5

0x54d3,	// (0x00082f3a) mup_scale_pane_g6

0x54dc,	// (0x00082f43) mup_scale_pane_g7

0xc469,	// (0x00089ed0) cams2_slider_pane_g3

0xc469,	// (0x00089ed0) cams2_slider_pane_g4

0xc469,	// (0x00089ed0) cams2_slider_pane_g5

0xc469,	// (0x00089ed0) cams2_slider_pane_g6

0xc469,	// (0x00089ed0) cams2_slider_pane_g7

0xb6dc,	// (0x00089143) camera2_autofocus_pane_cp_g1

0xc320,	// (0x00089d87) bg_popup_preview_window_pane_cp02_ParamLimits

0xc320,	// (0x00089d87) bg_popup_preview_window_pane_cp02

0xca14,	// (0x0008a47b) list_fp_cale_pane_ParamLimits

0xca14,	// (0x0008a47b) list_fp_cale_pane

0xca20,	// (0x0008a487) popup_fixed_preview_cale_window_t1_ParamLimits

0xca20,	// (0x0008a487) popup_fixed_preview_cale_window_t1

0x6ba6,	// (0x0008460d) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ba6,	// (0x0008460d) popup_fixed_preview_cale_window_t2

0x6bbb,	// (0x00084622) popup_fixed_preview_cale_window_t3_ParamLimits

0x6bbb,	// (0x00084622) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x0008d1c3) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x0008d1c3) popup_fixed_preview_cale_window_t

0x6bd0,	// (0x00084637) list_single_fp_cale_pane_ParamLimits

0x6bd0,	// (0x00084637) list_single_fp_cale_pane

0xca3e,	// (0x0008a4a5) list_single_fp_cale_pane_g1_ParamLimits

0xca3e,	// (0x0008a4a5) list_single_fp_cale_pane_g1

0xca4a,	// (0x0008a4b1) list_single_fp_cale_pane_g2_ParamLimits

0xca4a,	// (0x0008a4b1) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x0008d1ca) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x0008d1ca) list_single_fp_cale_pane_g

0xca63,	// (0x0008a4ca) list_single_fp_cale_pane_t1_ParamLimits

0xca63,	// (0x0008a4ca) list_single_fp_cale_pane_t1

0xca75,	// (0x0008a4dc) list_single_fp_cale_pane_t2_ParamLimits

0xca75,	// (0x0008a4dc) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x0008d1d1) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x0008d1d1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xac8b,	// (0x000886f2) main_dialer_pane

0x6be4,	// (0x0008464b) aid_cell_size_keypad

0x3346,	// (0x00080dad) dialer_ne_pane

0x3346,	// (0x00080dad) grid_dialer_command_1_pane

0x3346,	// (0x00080dad) grid_dialer_command_2_pane

0x3346,	// (0x00080dad) grid_dialer_keypad_pane

0x6bee,	// (0x00084655) bg_popup_call_pane_cp06_ParamLimits

0x6bee,	// (0x00084655) bg_popup_call_pane_cp06

0x6bee,	// (0x00084655) dialer_ne_clear_pane_ParamLimits

0x6bee,	// (0x00084655) dialer_ne_clear_pane

0xb6dc,	// (0x00089143) dialer_ne_pane_g1

0xbbbf,	// (0x00089626) dialer_ne_pane_t1_ParamLimits

0xbbbf,	// (0x00089626) dialer_ne_pane_t1

0x6bfc,	// (0x00084663) dialer_ne_pane_t2_ParamLimits

0x6bfc,	// (0x00084663) dialer_ne_pane_t2

0x6c24,	// (0x0008468b) dialer_ne_pane_t3_ParamLimits

0x6c24,	// (0x0008468b) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x0008d1d6) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x0008d1d6) dialer_ne_pane_t

0x6c24,	// (0x0008468b) dialer_ne_pane_t3_copy1_ParamLimits

0x6c24,	// (0x0008468b) dialer_ne_pane_t3_copy1

0x6c51,	// (0x000846b8) cell_dialer_keypad_pane_ParamLimits

0x6c51,	// (0x000846b8) cell_dialer_keypad_pane

0x6c59,	// (0x000846c0) cell_dialer_command_1_pane_ParamLimits

0x6c59,	// (0x000846c0) cell_dialer_command_1_pane

0x6c51,	// (0x000846b8) cell_dialer_command_2_pane_ParamLimits

0x6c51,	// (0x000846b8) cell_dialer_command_2_pane

0x1497,	// (0x0007eefe) bg_button_pane_cp02_ParamLimits

0x1497,	// (0x0007eefe) bg_button_pane_cp02

0xb37b,	// (0x00088de2) cell_dialer_keypad_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) cell_dialer_keypad_pane_g1

0x1497,	// (0x0007eefe) bg_button_pane_cp03_ParamLimits

0x1497,	// (0x0007eefe) bg_button_pane_cp03

0xb37b,	// (0x00088de2) cell_dialer_command_1_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) cell_dialer_command_1_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp04

0xb6dc,	// (0x00089143) cell_dialer_command_2_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp06

0xb6dc,	// (0x00089143) dialer_ne_clear_pane_g1

0x12e0,	// (0x0007ed47) navi_pane_g2

0x52d9,	// (0x00082d40) navi_pane_g3

0x0002,

0xf38b,	// (0x0008cdf2) navi_pane_g

0x136d,	// (0x0007edd4) navi_pane_mv_g2

0x1394,	// (0x0007edfb) navi_pane_mv_g5

0x52f6,	// (0x00082d5d) navi_pane_mv_t1

0xb413,	// (0x00088e7a) main_clock2_pane

0x6ca7,	// (0x0008470e) main_clock2_list_pane_ParamLimits

0x6ca7,	// (0x0008470e) main_clock2_list_pane

0x6cd9,	// (0x00084740) main_clock2_pane_t1_ParamLimits

0x6cd9,	// (0x00084740) main_clock2_pane_t1

0x6d13,	// (0x0008477a) main_clock2_pane_t2_ParamLimits

0x6d13,	// (0x0008477a) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x0008d1e2) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x0008d1e2) main_clock2_pane_t

0x6da7,	// (0x0008480e) popup_clock_analogue_window_cp03_ParamLimits

0x6da7,	// (0x0008480e) popup_clock_analogue_window_cp03

0x6dcc,	// (0x00084833) popup_clock_digital_window_cp02_ParamLimits

0x6dcc,	// (0x00084833) popup_clock_digital_window_cp02

0x6e3d,	// (0x000848a4) main_clock2_list_single_pane_ParamLimits

0x6e3d,	// (0x000848a4) main_clock2_list_single_pane

0xb678,	// (0x000890df) list_highlight_pane_cp05

0xcad8,	// (0x0008a53f) main_clock2_list_single_pane_t1

0x4251,	// (0x00081cb8) popup_toolbar_window_cp04_ParamLimits

0xb389,	// (0x00088df0) camera2_autofocus_pane_g2_ParamLimits

0xb389,	// (0x00088df0) camera2_autofocus_pane_g2

0xb389,	// (0x00088df0) camera2_autofocus_pane_g3_ParamLimits

0xb389,	// (0x00088df0) camera2_autofocus_pane_g3

0xb389,	// (0x00088df0) camera2_autofocus_pane_g4_ParamLimits

0xb389,	// (0x00088df0) camera2_autofocus_pane_g4

0xb389,	// (0x00088df0) camera2_autofocus_pane_g5_ParamLimits

0xb389,	// (0x00088df0) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x0008d126) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x0008d126) camera2_autofocus_pane_g

0x65b5,	// (0x0008401c) camera2_autofocus_pane_cp_g2

0x65bd,	// (0x00084024) camera2_autofocus_pane_cp_g3

0x65c5,	// (0x0008402c) camera2_autofocus_pane_cp_g4

0x65cd,	// (0x00084034) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0008d18c) camera2_autofocus_pane_cp_g

0x3346,	// (0x00080dad) popup_dialer_spcha_window

0x3346,	// (0x00080dad) bg_popup_sub_pane_cp07

0x3346,	// (0x00080dad) list_spcha_pane

0x3346,	// (0x00080dad) list_single_spcha_pane_ParamLimits

0x3346,	// (0x00080dad) list_single_spcha_pane

0x3346,	// (0x00080dad) list_highlight_pane_cp06

0xcae6,	// (0x0008a54d) list_single_spcha_pane_t1

0xbd11,	// (0x00089778) popup_call2_audio_out_window_g4_ParamLimits

0xbd11,	// (0x00089778) popup_call2_audio_out_window_g4

0xac8b,	// (0x000886f2) main_imed2_pane

0xeaaf,	// (0x0008c516) popup_imed_adjust2_window

0x5f0a,	// (0x00083971) popup_imed_trans_window_ParamLimits

0x5f0a,	// (0x00083971) popup_imed_trans_window

0xc54b,	// (0x00089fb2) popup_blid_sat_info2_window_t1

0xc559,	// (0x00089fc0) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x0008d0bb) popup_blid_sat_info2_window_t

0x6ee7,	// (0x0008494e) aid_size_cell_colour_35

0x6f07,	// (0x0008496e) aid_size_cell_colour_112

0x6f27,	// (0x0008498e) aid_size_cell_effect

0x2150,	// (0x0007fbb7) bg_tb_trans_pane_cp02

0x0e81,	// (0x0007e8e8) heading_imed_pane

0x6f47,	// (0x000849ae) listscroll_imed_pane

0xcaf6,	// (0x0008a55d) heading_imed_pane_g1

0xcafe,	// (0x0008a565) heading_imed_pane_t1

0xcb0c,	// (0x0008a573) grid_imed_colour_35_pane_ParamLimits

0xcb0c,	// (0x0008a573) grid_imed_colour_35_pane

0x6f53,	// (0x000849ba) grid_imed_effect_pane

0xcb1f,	// (0x0008a586) list_imed_aspect_pane

0x6f66,	// (0x000849cd) scroll_pane_cp027_ParamLimits

0x6f66,	// (0x000849cd) scroll_pane_cp027

0x6f72,	// (0x000849d9) cell_imed_effect_pane_ParamLimits

0x6f72,	// (0x000849d9) cell_imed_effect_pane

0xcb27,	// (0x0008a58e) cell_imed_colour_pane_ParamLimits

0xcb27,	// (0x0008a58e) cell_imed_colour_pane

0xcb61,	// (0x0008a5c8) cell_imed_colour_pane_g1_ParamLimits

0xcb61,	// (0x0008a5c8) cell_imed_colour_pane_g1

0xcb72,	// (0x0008a5d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xcb72,	// (0x0008a5d9) hgihlgiht_grid_pane_cp016

0x6f97,	// (0x000849fe) cell_imed_effect_pane_g1

0x6f9f,	// (0x00084a06) grid_highlight_pane_cp017

0xcb83,	// (0x0008a5ea) list_imed_single_pane_ParamLimits

0xcb83,	// (0x0008a5ea) list_imed_single_pane

0x3346,	// (0x00080dad) list_highlight_pane_cp07

0xcb96,	// (0x0008a5fd) list_imed_aspect_pane_comp1_t1

0x2150,	// (0x0007fbb7) bg_tb_trans_pane_cp05

0xcbb6,	// (0x0008a61d) popup_imed_adjust2_window_g1

0xcbdd,	// (0x0008a644) popup_imed_adjust2_window_t1

0xcbf5,	// (0x0008a65c) slider_imed_adjust_pane

0xcc09,	// (0x0008a670) slider_imed_adjust_pane_g1

0xcc19,	// (0x0008a680) slider_imed_adjust_pane_g2

0xcc29,	// (0x0008a690) slider_imed_adjust_pane_g3

0xcc3a,	// (0x0008a6a1) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0008d1ff) slider_imed_adjust_pane_g

0x6fa8,	// (0x00084a0f) aid_size_cell_clipart2

0x6fb4,	// (0x00084a1b) grid_imed_clipart_pane

0xcc4b,	// (0x0008a6b2) scroll_pane_cp031

0x6fbe,	// (0x00084a25) cell_imed_clipart_pane_ParamLimits

0x6fbe,	// (0x00084a25) cell_imed_clipart_pane

0x6fd6,	// (0x00084a3d) cell_imed_clipart_pane_g1

0x3346,	// (0x00080dad) grid_highlight_pane_cp014

0x6cba,	// (0x00084721) main_clock2_pane_g1_ParamLimits

0x6cba,	// (0x00084721) main_clock2_pane_g1

0x6de8,	// (0x0008484f) aid_call2_pane_cp10

0x6dfa,	// (0x00084861) aid_call_pane_cp10

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g1

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g2

0x6e0c,	// (0x00084873) popup_clock_analogue_window_cp10_g3

0x6e0c,	// (0x00084873) popup_clock_analogue_window_cp10_g4

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0008d1ed) popup_clock_analogue_window_cp10_g

0x6e1e,	// (0x00084885) popup_clock_analogue_window_cp10_t1

0x6e4f,	// (0x000848b6) clock_digital_number_pane_cp10_ParamLimits

0x6e4f,	// (0x000848b6) clock_digital_number_pane_cp10

0x6e67,	// (0x000848ce) clock_digital_number_pane_cp11_ParamLimits

0x6e67,	// (0x000848ce) clock_digital_number_pane_cp11

0x6e7f,	// (0x000848e6) clock_digital_number_pane_cp12_ParamLimits

0x6e7f,	// (0x000848e6) clock_digital_number_pane_cp12

0x6e97,	// (0x000848fe) clock_digital_number_pane_cp13_ParamLimits

0x6e97,	// (0x000848fe) clock_digital_number_pane_cp13

0x6eaf,	// (0x00084916) clock_digital_separator_pane_cp10_ParamLimits

0x6eaf,	// (0x00084916) clock_digital_separator_pane_cp10

0x6ec7,	// (0x0008492e) popup_clock_digital_window_cp02_t1_ParamLimits

0x6ec7,	// (0x0008492e) popup_clock_digital_window_cp02_t1

0xb2f9,	// (0x00088d60) clock_digital_number_pane_cp10_g1

0xb2f9,	// (0x00088d60) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x0008d208) clock_digital_number_pane_cp10_g

0xb2f9,	// (0x00088d60) clock_digital_separator_pane_cp10_g1

0xb2f9,	// (0x00088d60) clock_digital_separator_pane_g2_cp10

0x139c,	// (0x0007ee03) navi_pane_vded_g4

0x13a5,	// (0x0007ee0c) navi_pane_vded_g5

0x13ae,	// (0x0007ee15) navi_pane_vded_t1

0xac8b,	// (0x000886f2) main_vded_pane

0x6fdf,	// (0x00084a46) main_vded_pane_g1

0x6fe9,	// (0x00084a50) main_vded_pane_g2

0x6ff1,	// (0x00084a58) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0008d20d) main_vded_pane_g

0x6ff9,	// (0x00084a60) main_vded_pane_t1

0x7007,	// (0x00084a6e) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x0008d214) main_vded_pane_t

0x7015,	// (0x00084a7c) vded_slider_pane

0x701d,	// (0x00084a84) vded_video_pane

0xcc53,	// (0x0008a6ba) vded_video_pane_g1

0x7025,	// (0x00084a8c) vded_video_pane_g2

0xb6dc,	// (0x00089143) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x0008d219) vded_video_pane_g

0xcc5d,	// (0x0008a6c4) vded_slider_pane_g1

0xc460,	// (0x00089ec7) vded_slider_pane_g2

0xcc66,	// (0x0008a6cd) vded_slider_pane_g3

0xcc6f,	// (0x0008a6d6) vded_slider_pane_g4

0xcc78,	// (0x0008a6df) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0008d220) vded_slider_pane_g

0x6afa,	// (0x00084561) mup3_rocker_pane_ParamLimits

0x6afa,	// (0x00084561) mup3_rocker_pane

0x702e,	// (0x00084a95) mup3_control_keys_pane_g1

0x7036,	// (0x00084a9d) mup3_control_keys_pane_g2

0x703e,	// (0x00084aa5) mup3_control_keys_pane_g3

0x7046,	// (0x00084aad) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x0008d22b) mup3_control_keys_pane_g

0x3510,	// (0x00080f77) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3510,	// (0x00080f77) popup_toolbar2_fixed_window_cp01

0x6b28,	// (0x0008458f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6b28,	// (0x0008458f) popup_toolbar2_fixed_window_cp02

0x1b31,	// (0x0007f598) popup_call2_audio_second_window_t4_ParamLimits

0x1b31,	// (0x0007f598) popup_call2_audio_second_window_t4

0x2085,	// (0x0007faec) popup_call2_audio_first_window_t6_ParamLimits

0x2085,	// (0x0007faec) popup_call2_audio_first_window_t6

0xbe14,	// (0x0008987b) popup_call2_audio_out_window_t6_ParamLimits

0xbe14,	// (0x0008987b) popup_call2_audio_out_window_t6

0xac8b,	// (0x000886f2) main_vitu_pane

0x1497,	// (0x0007eefe) aid_size_cell_itu_ParamLimits

0x1497,	// (0x0007eefe) aid_size_cell_itu

0x1497,	// (0x0007eefe) bg_popup_window_pane_cp08_ParamLimits

0x1497,	// (0x0007eefe) bg_popup_window_pane_cp08

0x1497,	// (0x0007eefe) field_vitu_entry_pane_ParamLimits

0x1497,	// (0x0007eefe) field_vitu_entry_pane

0x1497,	// (0x0007eefe) grid_vitu_function_pane_ParamLimits

0x1497,	// (0x0007eefe) grid_vitu_function_pane

0x1497,	// (0x0007eefe) grid_vitu_itu_pane_ParamLimits

0x1497,	// (0x0007eefe) grid_vitu_itu_pane

0x7056,	// (0x00084abd) cell_vitu_itu_pane_ParamLimits

0x7056,	// (0x00084abd) cell_vitu_itu_pane

0x1497,	// (0x0007eefe) cell_vitu_function_pane_ParamLimits

0x1497,	// (0x0007eefe) cell_vitu_function_pane

0x1497,	// (0x0007eefe) bg_popup_sub_pane_cp08_ParamLimits

0x1497,	// (0x0007eefe) bg_popup_sub_pane_cp08

0x1483,	// (0x0007eeea) field_vitu_entry_pane_t1_ParamLimits

0x1483,	// (0x0007eeea) field_vitu_entry_pane_t1

0xcc81,	// (0x0008a6e8) field_vitu_entry_pane_t2_ParamLimits

0xcc81,	// (0x0008a6e8) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x0008d239) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x0008d239) field_vitu_entry_pane_t

0xc4f4,	// (0x00089f5b) bg_button_pane_cp05_ParamLimits

0xc4f4,	// (0x00089f5b) bg_button_pane_cp05

0xcc9e,	// (0x0008a705) cell_vitu_itu_pane_g1

0x216a,	// (0x0007fbd1) cell_vitu_itu_pane_t1_ParamLimits

0x216a,	// (0x0007fbd1) cell_vitu_itu_pane_t1

0x216a,	// (0x0007fbd1) cell_vitu_itu_pane_t2_ParamLimits

0x216a,	// (0x0007fbd1) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0008d23e) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0008d23e) cell_vitu_itu_pane_t

0x3346,	// (0x00080dad) bg_button_pane_cp07

0xb6dc,	// (0x00089143) cell_vitu_function_pane_g1

0xb3b9,	// (0x00088e20) main_calc_pane_g1

0x3374,	// (0x00080ddb) aid_visual_content_pane

0xac8b,	// (0x000886f2) main_vradio_pane

0xb37b,	// (0x00088de2) main_vradio_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) main_vradio_pane_g1

0xb389,	// (0x00088df0) main_vradio_pane_g2_ParamLimits

0xb389,	// (0x00088df0) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0008d245) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0008d245) main_vradio_pane_g

0x1483,	// (0x0007eeea) main_vradio_pane_t1_ParamLimits

0x1483,	// (0x0007eeea) main_vradio_pane_t1

0x1483,	// (0x0007eeea) main_vradio_pane_t2_ParamLimits

0x1483,	// (0x0007eeea) main_vradio_pane_t2

0xbbbf,	// (0x00089626) main_vradio_pane_t3_ParamLimits

0xbbbf,	// (0x00089626) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x0008d24a) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x0008d24a) main_vradio_pane_t

0x1497,	// (0x0007eefe) vradio_rocker_control_pane_ParamLimits

0x1497,	// (0x0007eefe) vradio_rocker_control_pane

0x1497,	// (0x0007eefe) vradio_station_info_pane_ParamLimits

0x1497,	// (0x0007eefe) vradio_station_info_pane

0x1497,	// (0x0007eefe) vradio_frequency_info_pane_ParamLimits

0x1497,	// (0x0007eefe) vradio_frequency_info_pane

0xb6dc,	// (0x00089143) vradio_station_info_pane_g1

0x216a,	// (0x0007fbd1) vradio_station_info_pane_t1_ParamLimits

0x216a,	// (0x0007fbd1) vradio_station_info_pane_t1

0xbbbf,	// (0x00089626) vradio_station_info_pane_t2_ParamLimits

0xbbbf,	// (0x00089626) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0008d251) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0008d251) vradio_station_info_pane_t

0x3346,	// (0x00080dad) vradio_tuning_pane

0x706a,	// (0x00084ad1) vradio_rocker_control_pane_g1

0xccba,	// (0x0008a721) vradio_rocker_control_pane_g2

0x7072,	// (0x00084ad9) vradio_rocker_control_pane_g3

0x707a,	// (0x00084ae1) vradio_rocker_control_pane_g4

0x7082,	// (0x00084ae9) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x0008d256) vradio_rocker_control_pane_g

0xb6dc,	// (0x00089143) vradio_frequency_info_pane_g1

0x1483,	// (0x0007eeea) vradio_frequency_info_pane_t1_ParamLimits

0x1483,	// (0x0007eeea) vradio_frequency_info_pane_t1

0x708a,	// (0x00084af1) vradio_tuning_pane_g1

0x7093,	// (0x00084afa) vradio_tuning_pane_t1

0xac62,	// (0x000886c9) area_side_right_pane_ParamLimits

0xac62,	// (0x000886c9) area_side_right_pane

0xc2e7,	// (0x00089d4e) status_small_pane_g1

0xc2ef,	// (0x00089d56) status_small_pane_g2

0xc2f8,	// (0x00089d5f) status_small_pane_g3

0xc301,	// (0x00089d68) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0008d01d) status_small_pane_g

0xc30a,	// (0x00089d71) status_small_pane_t1

0xac8b,	// (0x000886f2) main_video3_pane

0xccc2,	// (0x0008a729) cams_zoom_vslider_pane

0xccca,	// (0x0008a731) image3_wide_pane_ParamLimits

0xccca,	// (0x0008a731) image3_wide_pane

0xcce4,	// (0x0008a74b) image3_wide_small_pane

0xccee,	// (0x0008a755) main_video3_pane_g1_ParamLimits

0xccee,	// (0x0008a755) main_video3_pane_g1

0xcd0a,	// (0x0008a771) main_video3_pane_g2_ParamLimits

0xcd0a,	// (0x0008a771) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0008d261) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0008d261) main_video3_pane_g

0xcd26,	// (0x0008a78d) main_video3_pane_t1_ParamLimits

0xcd26,	// (0x0008a78d) main_video3_pane_t1

0xcd51,	// (0x0008a7b8) main_video3_pane_t2_ParamLimits

0xcd51,	// (0x0008a7b8) main_video3_pane_t2

0xcd7c,	// (0x0008a7e3) main_video3_pane_t3_ParamLimits

0xcd7c,	// (0x0008a7e3) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x0008d266) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x0008d266) main_video3_pane_t

0xcda7,	// (0x0008a80e) cams_zoom_vslider_pane_g1

0xcdb0,	// (0x0008a817) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0008d26d) cams_zoom_vslider_pane_g

0xcdb8,	// (0x0008a81f) small_slider_vertical_pane

0xb6dc,	// (0x00089143) small_slider_vertical_pane_g1

0xb6dc,	// (0x00089143) small_slider_vertical_pane_g2

0xcdc0,	// (0x0008a827) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0008d272) small_slider_vertical_pane_g

0xac8b,	// (0x000886f2) main_hwr_training_pane

0xcdc9,	// (0x0008a830) hwr_training_instruct_pane_ParamLimits

0xcdc9,	// (0x0008a830) hwr_training_instruct_pane

0x70a2,	// (0x00084b09) hwr_training_navi_pane_ParamLimits

0x70a2,	// (0x00084b09) hwr_training_navi_pane

0x70b9,	// (0x00084b20) hwr_training_write_pane_ParamLimits

0x70b9,	// (0x00084b20) hwr_training_write_pane

0x3346,	// (0x00080dad) bg_frame_shadow_pane

0xcdf8,	// (0x0008a85f) hwr_training_write_pane_g1

0xce00,	// (0x0008a867) hwr_training_write_pane_g2

0xce08,	// (0x0008a86f) hwr_training_write_pane_g3

0xce10,	// (0x0008a877) hwr_training_write_pane_g4

0xce18,	// (0x0008a87f) hwr_training_write_pane_g5

0xce20,	// (0x0008a887) hwr_training_write_pane_g6

0xce28,	// (0x0008a88f) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0008d279) hwr_training_write_pane_g

0xeb95,	// (0x0008c5fc) hwr_training_navi_pane_g1_ParamLimits

0xeb95,	// (0x0008c5fc) hwr_training_navi_pane_g1

0xeba7,	// (0x0008c60e) hwr_training_navi_pane_g2_ParamLimits

0xeba7,	// (0x0008c60e) hwr_training_navi_pane_g2

0xebb9,	// (0x0008c620) hwr_training_navi_pane_g3_ParamLimits

0xebb9,	// (0x0008c620) hwr_training_navi_pane_g3

0xebc9,	// (0x0008c630) hwr_training_navi_pane_g4_ParamLimits

0xebc9,	// (0x0008c630) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0008d288) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0008d288) hwr_training_navi_pane_g

0xebd6,	// (0x0008c63d) hwr_training_navi_pane_t1

0x70f9,	// (0x00084b60) list_single_hwr_training_instruct_pane_ParamLimits

0x70f9,	// (0x00084b60) list_single_hwr_training_instruct_pane

0xce30,	// (0x0008a897) list_single_hwr_training_instruct_pane_t1

0xc627,	// (0x0008a08e) bg_frame_shadow_pane_g1

0xce3f,	// (0x0008a8a6) bg_frame_shadow_pane_g2

0xce47,	// (0x0008a8ae) bg_frame_shadow_pane_g3

0xce4f,	// (0x0008a8b6) bg_frame_shadow_pane_g4

0xce57,	// (0x0008a8be) bg_frame_shadow_pane_g5

0xce5f,	// (0x0008a8c6) bg_frame_shadow_pane_g6

0xce67,	// (0x0008a8ce) bg_frame_shadow_pane_g7

0xb52c,	// (0x00088f93) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x0008d293) bg_frame_shadow_pane_g

0xac8b,	// (0x000886f2) main_video_tele_dialer_pane

0x7111,	// (0x00084b78) aid_size_cell_video_keypad_ParamLimits

0x7111,	// (0x00084b78) aid_size_cell_video_keypad

0x712b,	// (0x00084b92) grid_video_dialer_keypad_pane_ParamLimits

0x712b,	// (0x00084b92) grid_video_dialer_keypad_pane

0x716d,	// (0x00084bd4) video_down_pane_cp_ParamLimits

0x716d,	// (0x00084bd4) video_down_pane_cp

0x719d,	// (0x00084c04) cell_video_dialer_keypad_pane_ParamLimits

0x719d,	// (0x00084c04) cell_video_dialer_keypad_pane

0xce6f,	// (0x0008a8d6) bg_button_pane_cp08_ParamLimits

0xce6f,	// (0x0008a8d6) bg_button_pane_cp08

0x71bf,	// (0x00084c26) cell_video_dialer_keypad_pane_g1_ParamLimits

0x71bf,	// (0x00084c26) cell_video_dialer_keypad_pane_g1

0x6ae4,	// (0x0008454b) mup3_rocker2_pane_ParamLimits

0x6ae4,	// (0x0008454b) mup3_rocker2_pane

0xb6dc,	// (0x00089143) mup3_rocker2_pane_g1

0x5e03,	// (0x0008386a) main_dialer2_pane

0xac8b,	// (0x000886f2) main_mp4_pane

0xec02,	// (0x0008c669) main_mp4_pane_g1_ParamLimits

0xec02,	// (0x0008c669) main_mp4_pane_g1

0xec02,	// (0x0008c669) main_mp4_pane_g2_ParamLimits

0xec02,	// (0x0008c669) main_mp4_pane_g2

0x71fa,	// (0x00084c61) main_mp4_pane_g3_ParamLimits

0x71fa,	// (0x00084c61) main_mp4_pane_g3

0xec10,	// (0x0008c677) main_mp4_pane_g4_ParamLimits

0xec10,	// (0x0008c677) main_mp4_pane_g4

0xec3e,	// (0x0008c6a5) main_mp4_pane_g5_ParamLimits

0xec3e,	// (0x0008c6a5) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x0008d2b3) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x0008d2b3) main_mp4_pane_g

0xecb2,	// (0x0008c719) main_mp4_pane_t1_ParamLimits

0xecb2,	// (0x0008c719) main_mp4_pane_t1

0xed0a,	// (0x0008c771) main_mp4_pane_t2_ParamLimits

0xed0a,	// (0x0008c771) main_mp4_pane_t2

0xce7b,	// (0x0008a8e2) main_mp4_pane_t3_ParamLimits

0xce7b,	// (0x0008a8e2) main_mp4_pane_t3

0xed5c,	// (0x0008c7c3) main_mp4_pane_t4_ParamLimits

0xed5c,	// (0x0008c7c3) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x0008d2c4) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x0008d2c4) main_mp4_pane_t

0xed9c,	// (0x0008c803) mp4_progress_pane_ParamLimits

0xed9c,	// (0x0008c803) mp4_progress_pane

0xede0,	// (0x0008c847) mp4_rocker_pane_ParamLimits

0xede0,	// (0x0008c847) mp4_rocker_pane

0xcea9,	// (0x0008a910) mp4_progress_pane_t1

0xcec0,	// (0x0008a927) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x0008d2cd) mp4_progress_pane_t

0xced7,	// (0x0008a93e) mup_progress_pane_cp04

0xc469,	// (0x00089ed0) mp4_rocker_pane_g1

0x722a,	// (0x00084c91) aid_cell_size_keypad2_ParamLimits

0x722a,	// (0x00084c91) aid_cell_size_keypad2

0x7242,	// (0x00084ca9) dialer2_ne_pane_ParamLimits

0x7242,	// (0x00084ca9) dialer2_ne_pane

0xea89,	// (0x0008c4f0) grid_dialer2_keypad_pane_ParamLimits

0xea89,	// (0x0008c4f0) grid_dialer2_keypad_pane

0xc4f4,	// (0x00089f5b) bg_popup_call_pane_cp07_ParamLimits

0xc4f4,	// (0x00089f5b) bg_popup_call_pane_cp07

0xb3a5,	// (0x00088e0c) dialer2_ne_pane_t1_ParamLimits

0xb3a5,	// (0x00088e0c) dialer2_ne_pane_t1

0x725d,	// (0x00084cc4) cell_dialer2_keypad_pane_ParamLimits

0x725d,	// (0x00084cc4) cell_dialer2_keypad_pane

0xcee3,	// (0x0008a94a) bg_button_pane_pane_cp04_ParamLimits

0xcee3,	// (0x0008a94a) bg_button_pane_pane_cp04

0xb37b,	// (0x00088de2) cell_dialer2_keypad_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) cell_dialer2_keypad_pane_g1

0x413f,	// (0x00081ba6) aid_placing_vt_set_content_ParamLimits

0x413f,	// (0x00081ba6) aid_placing_vt_set_content

0x4161,	// (0x00081bc8) aid_placing_vt_set_title_ParamLimits

0x4161,	// (0x00081bc8) aid_placing_vt_set_title

0xac8b,	// (0x000886f2) main_image3_pane

0x72b3,	// (0x00084d1a) area_side_right_pane_cp01_ParamLimits

0x72b3,	// (0x00084d1a) area_side_right_pane_cp01

0xec02,	// (0x0008c669) main_image3_pane_g1_ParamLimits

0xec02,	// (0x0008c669) main_image3_pane_g1

0x72ca,	// (0x00084d31) main_image3_pane_g2_ParamLimits

0x72ca,	// (0x00084d31) main_image3_pane_g2

0x72f0,	// (0x00084d57) main_image3_pane_g3_ParamLimits

0x72f0,	// (0x00084d57) main_image3_pane_g3

0x7316,	// (0x00084d7d) main_image3_pane_g4_ParamLimits

0x7316,	// (0x00084d7d) main_image3_pane_g4

0x0003,

0xf875,	// (0x0008d2dc) main_image3_pane_g_ParamLimits

0xf875,	// (0x0008d2dc) main_image3_pane_g

0x733c,	// (0x00084da3) main_image3_pane_t1_ParamLimits

0x733c,	// (0x00084da3) main_image3_pane_t1

0x7394,	// (0x00084dfb) main_image3_pane_t2_ParamLimits

0x7394,	// (0x00084dfb) main_image3_pane_t2

0x73e6,	// (0x00084e4d) main_image3_pane_t3_ParamLimits

0x73e6,	// (0x00084e4d) main_image3_pane_t3

0x0003,

0xf87e,	// (0x0008d2e5) main_image3_pane_t_ParamLimits

0xf87e,	// (0x0008d2e5) main_image3_pane_t

0x1497,	// (0x0007eefe) grid_sctrl_middle_pane_cp01_ParamLimits

0x1497,	// (0x0007eefe) grid_sctrl_middle_pane_cp01

0x7466,	// (0x00084ecd) cell_sctrl_middle_pane_cp01_ParamLimits

0x7466,	// (0x00084ecd) cell_sctrl_middle_pane_cp01

0x7483,	// (0x00084eea) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7483,	// (0x00084eea) cell_sctrl_middle_pane_cp01_g1

0xac8b,	// (0x000886f2) main_call4_pane

0x7499,	// (0x00084f00) aid_size_button_call4_ParamLimits

0x7499,	// (0x00084f00) aid_size_button_call4

0x74c6,	// (0x00084f2d) call4_windows_pane_ParamLimits

0x74c6,	// (0x00084f2d) call4_windows_pane

0x74dc,	// (0x00084f43) grid_call4_button_pane_ParamLimits

0x74dc,	// (0x00084f43) grid_call4_button_pane

0xcf17,	// (0x0008a97e) call4_windows_conf_pane

0xcf2a,	// (0x0008a991) popup_call4_audio_first_window_ParamLimits

0xcf2a,	// (0x0008a991) popup_call4_audio_first_window

0xcf6a,	// (0x0008a9d1) popup_call4_audio_second_window_ParamLimits

0xcf6a,	// (0x0008a9d1) popup_call4_audio_second_window

0xcf7c,	// (0x0008a9e3) popup_call4_audio_wait_window_ParamLimits

0xcf7c,	// (0x0008a9e3) popup_call4_audio_wait_window

0x7503,	// (0x00084f6a) cell_call4_button_pane_ParamLimits

0x7503,	// (0x00084f6a) cell_call4_button_pane

0x7528,	// (0x00084f8f) bg_button_pane_cp09_ParamLimits

0x7528,	// (0x00084f8f) bg_button_pane_cp09

0x7534,	// (0x00084f9b) cell_call4_button_pane_g1_ParamLimits

0x7534,	// (0x00084f9b) cell_call4_button_pane_g1

0x755a,	// (0x00084fc1) cell_call4_button_pane_t1_ParamLimits

0x755a,	// (0x00084fc1) cell_call4_button_pane_t1

0xcf90,	// (0x0008a9f7) popup_call4_audio_conf_window_ParamLimits

0xcf90,	// (0x0008a9f7) popup_call4_audio_conf_window

0x6b3e,	// (0x000845a5) mup3_progress_pane_t1_ParamLimits

0x6b5c,	// (0x000845c3) mup3_progress_pane_t2_ParamLimits

0xc9d1,	// (0x0008a438) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x0008d1b5) mup3_progress_pane_t_ParamLimits

0xc9ee,	// (0x0008a455) mup_progress_pane_cp03_ParamLimits

0x704e,	// (0x00084ab5) mup3_control_keys_pane_g4_copy1

0xedca,	// (0x0008c831) mp4_rocker2_pane_ParamLimits

0xedca,	// (0x0008c831) mp4_rocker2_pane

0xcfa4,	// (0x0008aa0b) mp4_rocker2_pane_g1

0xcfac,	// (0x0008aa13) mp4_rocker2_pane_g2

0xee62,	// (0x0008c8c9) mp4_rocker2_pane_g3

0xee6a,	// (0x0008c8d1) mp4_rocker2_pane_g4

0xee72,	// (0x0008c8d9) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x0008d2ee) mp4_rocker2_pane_g

0xac8b,	// (0x000886f2) main_camera4_pane

0xac8b,	// (0x000886f2) main_video4_pane

0x713f,	// (0x00084ba6) main_video_tele_dialer_pane_t1_ParamLimits

0x713f,	// (0x00084ba6) main_video_tele_dialer_pane_t1

0x7156,	// (0x00084bbd) main_video_tele_dialer_pane_t2_ParamLimits

0x7156,	// (0x00084bbd) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x0008d2a4) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x0008d2a4) main_video_tele_dialer_pane_t

0x7598,	// (0x00084fff) cam4_autofocus_pane_ParamLimits

0x7598,	// (0x00084fff) cam4_autofocus_pane

0x75ac,	// (0x00085013) cam4_image_uncrop_pane_ParamLimits

0x75ac,	// (0x00085013) cam4_image_uncrop_pane

0x75c3,	// (0x0008502a) cam4_indicators_pane_ParamLimits

0x75c3,	// (0x0008502a) cam4_indicators_pane

0x75e7,	// (0x0008504e) main_camera4_pane_g1_ParamLimits

0x75e7,	// (0x0008504e) main_camera4_pane_g1

0x75f3,	// (0x0008505a) main_camera4_pane_g2_ParamLimits

0x75f3,	// (0x0008505a) main_camera4_pane_g2

0x75f3,	// (0x0008505a) main_camera4_pane_g3_ParamLimits

0x75f3,	// (0x0008505a) main_camera4_pane_g3

0x75ff,	// (0x00085066) main_camera4_pane_g4_ParamLimits

0x75ff,	// (0x00085066) main_camera4_pane_g4

0x760b,	// (0x00085072) main_camera4_pane_g5_ParamLimits

0x760b,	// (0x00085072) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0008d2f9) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0008d2f9) main_camera4_pane_g

0x7628,	// (0x0008508f) main_camera4_pane_t1_ParamLimits

0x7628,	// (0x0008508f) main_camera4_pane_t1

0xee94,	// (0x0008c8fb) bg_tb_trans_pane_cp06

0xeeaa,	// (0x0008c911) cam4_indicators_pane_g1

0xeeba,	// (0x0008c921) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x0008d314) cam4_indicators_pane_g

0xeeda,	// (0x0008c941) cam4_indicators_pane_t1

0x767d,	// (0x000850e4) main_video4_pane_g1_ParamLimits

0x767d,	// (0x000850e4) main_video4_pane_g1

0x768f,	// (0x000850f6) main_video4_pane_g2_ParamLimits

0x768f,	// (0x000850f6) main_video4_pane_g2

0x768f,	// (0x000850f6) main_video4_pane_g3_ParamLimits

0x768f,	// (0x000850f6) main_video4_pane_g3

0x769e,	// (0x00085105) main_video4_pane_g4_ParamLimits

0x769e,	// (0x00085105) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x0008d31b) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x0008d31b) main_video4_pane_g

0x76bc,	// (0x00085123) vid4_indicators_pane_ParamLimits

0x76bc,	// (0x00085123) vid4_indicators_pane

0x76e4,	// (0x0008514b) video4_image_uncrop_cif_pane_ParamLimits

0x76e4,	// (0x0008514b) video4_image_uncrop_cif_pane

0x76fc,	// (0x00085163) video4_image_uncrop_nhd_pane_ParamLimits

0x76fc,	// (0x00085163) video4_image_uncrop_nhd_pane

0x7710,	// (0x00085177) video4_image_uncrop_vga_pane_ParamLimits

0x7710,	// (0x00085177) video4_image_uncrop_vga_pane

0xea89,	// (0x0008c4f0) bg_tb_trans_pane_cp07

0xeeaa,	// (0x0008c911) vid4_indicators_pane_g1

0xeefc,	// (0x0008c963) vid4_indicators_pane_g2

0xef0c,	// (0x0008c973) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x0008d326) vid4_indicators_pane_g

0xef39,	// (0x0008c9a0) vid4_indicators_pane_t1

0x7728,	// (0x0008518f) cam4_autofocus_pane_g1

0x7730,	// (0x00085197) cam4_autofocus_pane_g2

0x7738,	// (0x0008519f) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0008d331) cam4_autofocus_pane_g

0x7740,	// (0x000851a7) cam4_autofocus_pane_g3_copy1

0x7181,	// (0x00084be8) video_down_pane_cp_t1

0x718f,	// (0x00084bf6) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x0008d2a9) video_down_pane_cp_t

0xea89,	// (0x0008c4f0) popup_vitu2_window_ParamLimits

0xea89,	// (0x0008c4f0) popup_vitu2_window

0x7748,	// (0x000851af) aid_size_cell2_itu2_ParamLimits

0x7748,	// (0x000851af) aid_size_cell2_itu2

0x776e,	// (0x000851d5) aid_size_cell_itu2_ParamLimits

0x776e,	// (0x000851d5) aid_size_cell_itu2

0x77c0,	// (0x00085227) bg_popup_window_pane_cp09_ParamLimits

0x77c0,	// (0x00085227) bg_popup_window_pane_cp09

0x77ce,	// (0x00085235) field_vitu2_entry_pane_ParamLimits

0x77ce,	// (0x00085235) field_vitu2_entry_pane

0x77e8,	// (0x0008524f) grid_vitu2_function_pane_ParamLimits

0x77e8,	// (0x0008524f) grid_vitu2_function_pane

0x7823,	// (0x0008528a) grid_vitu2_itu_pane_ParamLimits

0x7823,	// (0x0008528a) grid_vitu2_itu_pane

0x788d,	// (0x000852f4) cell_vitu2_itu_pane_ParamLimits

0x788d,	// (0x000852f4) cell_vitu2_itu_pane

0x78b5,	// (0x0008531c) cell_vitu2_function_pane_ParamLimits

0x78b5,	// (0x0008531c) cell_vitu2_function_pane

0xcfb4,	// (0x0008aa1b) bg_popup_call_pane_cp08_ParamLimits

0xcfb4,	// (0x0008aa1b) bg_popup_call_pane_cp08

0xcfcb,	// (0x0008aa32) field_vitu2_entry_pane_g1

0xcfd7,	// (0x0008aa3e) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x0008d338) field_vitu2_entry_pane_g

0x78f4,	// (0x0008535b) field_vitu2_entry_pane_t1_ParamLimits

0x78f4,	// (0x0008535b) field_vitu2_entry_pane_t1

0xcfe3,	// (0x0008aa4a) field_vitu2_entry_pane_t2_ParamLimits

0xcfe3,	// (0x0008aa4a) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0008d33f) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0008d33f) field_vitu2_entry_pane_t

0x7921,	// (0x00085388) bg_button_pane_cp010_ParamLimits

0x7921,	// (0x00085388) bg_button_pane_cp010

0xef53,	// (0x0008c9ba) cell_vitu2_itu_pane_g1

0x793d,	// (0x000853a4) cell_vitu2_itu_pane_t1_ParamLimits

0x793d,	// (0x000853a4) cell_vitu2_itu_pane_t1

0x3246,	// (0x00080cad) cell_vitu2_itu_pane_t2_ParamLimits

0x3246,	// (0x00080cad) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x0008d349) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x0008d349) cell_vitu2_itu_pane_t

0xea89,	// (0x0008c4f0) bg_button_pane_cp011

0x799b,	// (0x00085402) cell_vitu2_function_pane_g1

0xac8b,	// (0x000886f2) main_myfav_hc_pane

0x7432,	// (0x00084e99) popup_image3_note_pane_ParamLimits

0x7432,	// (0x00084e99) popup_image3_note_pane

0x744c,	// (0x00084eb3) popup_image3_tool_bar_pane_ParamLimits

0x744c,	// (0x00084eb3) popup_image3_tool_bar_pane

0x32d4,	// (0x00080d3b) cell_vitu2_itu_pane_t3_ParamLimits

0x32d4,	// (0x00080d3b) cell_vitu2_itu_pane_t3

0x3346,	// (0x00080dad) bg_popup_trans_pane

0xd008,	// (0x0008aa6f) grid_image3_tool_bar_pane

0xd012,	// (0x0008aa79) bg_popup_trans_pane_g1

0xb938,	// (0x0008939f) bg_popup_trans_pane_g2

0xd01a,	// (0x0008aa81) bg_popup_trans_pane_g3

0xd022,	// (0x0008aa89) bg_popup_trans_pane_g4

0xd02a,	// (0x0008aa91) bg_popup_trans_pane_g5

0xd032,	// (0x0008aa99) bg_popup_trans_pane_g6

0xd03a,	// (0x0008aaa1) bg_popup_trans_pane_g7

0xd042,	// (0x0008aaa9) bg_popup_trans_pane_g8

0xb918,	// (0x0008937f) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0008d350) bg_popup_trans_pane_g

0xd04a,	// (0x0008aab1) cell_image3_tool_bar_pane_ParamLimits

0xd04a,	// (0x0008aab1) cell_image3_tool_bar_pane

0xb6dc,	// (0x00089143) cell_image3_tool_bar_pane_g1

0x3346,	// (0x00080dad) bg_popup_trans_pane_cp1

0xd05e,	// (0x0008aac5) popup_image3_note_pane_t1

0xd06c,	// (0x0008aad3) popup_image3_note_pane_t2

0xd07a,	// (0x0008aae1) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x0008d363) popup_image3_note_pane_t

0xd088,	// (0x0008aaef) popup_image3_note_pane_t3_copy1

0x79ae,	// (0x00085415) bg_myfav_hc_instruction_pane_ParamLimits

0x79ae,	// (0x00085415) bg_myfav_hc_instruction_pane

0x79c0,	// (0x00085427) cell_myfav_contact_pane_ParamLimits

0x79c0,	// (0x00085427) cell_myfav_contact_pane

0x79da,	// (0x00085441) cell_myfav_contact_pane_cp1_ParamLimits

0x79da,	// (0x00085441) cell_myfav_contact_pane_cp1

0x79f0,	// (0x00085457) cell_myfav_contact_pane_cp2_ParamLimits

0x79f0,	// (0x00085457) cell_myfav_contact_pane_cp2

0x7a06,	// (0x0008546d) cell_myfav_contact_pane_cp3_ParamLimits

0x7a06,	// (0x0008546d) cell_myfav_contact_pane_cp3

0x7a1b,	// (0x00085482) cell_myfav_contact_pane_cp4_ParamLimits

0x7a1b,	// (0x00085482) cell_myfav_contact_pane_cp4

0x7a2f,	// (0x00085496) cell_myfav_contact_pane_cp5_ParamLimits

0x7a2f,	// (0x00085496) cell_myfav_contact_pane_cp5

0x7a43,	// (0x000854aa) cell_myfav_contact_pane_cp6_ParamLimits

0x7a43,	// (0x000854aa) cell_myfav_contact_pane_cp6

0x7a57,	// (0x000854be) cell_myfav_contact_pane_cp7_ParamLimits

0x7a57,	// (0x000854be) cell_myfav_contact_pane_cp7

0xd096,	// (0x0008aafd) listscroll_gen_pane_cp05

0x7a6f,	// (0x000854d6) main_myfav_hc_pane_g1_ParamLimits

0x7a6f,	// (0x000854d6) main_myfav_hc_pane_g1

0x7a85,	// (0x000854ec) main_myfav_hc_pane_g2_ParamLimits

0x7a85,	// (0x000854ec) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x0008d36a) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x0008d36a) main_myfav_hc_pane_g

0x7aaf,	// (0x00085516) main_myfav_hc_pane_t1_ParamLimits

0x7aaf,	// (0x00085516) main_myfav_hc_pane_t1

0xd09f,	// (0x0008ab06) main_myfav_hc_pane_t2_ParamLimits

0xd09f,	// (0x0008ab06) main_myfav_hc_pane_t2

0xd0b1,	// (0x0008ab18) main_myfav_hc_pane_t3_ParamLimits

0xd0b1,	// (0x0008ab18) main_myfav_hc_pane_t3

0x7ac4,	// (0x0008552b) main_myfav_hc_pane_t4_ParamLimits

0x7ac4,	// (0x0008552b) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0008d371) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0008d371) main_myfav_hc_pane_t

0xb6dc,	// (0x00089143) bg_myfav_hc_instruction_pane_g1

0xd0c3,	// (0x0008ab2a) cell_myfav_contact_pane_g1_ParamLimits

0xd0c3,	// (0x0008ab2a) cell_myfav_contact_pane_g1

0xd0c3,	// (0x0008ab2a) cell_myfav_contact_pane_g2_ParamLimits

0xd0c3,	// (0x0008ab2a) cell_myfav_contact_pane_g2

0xd0cf,	// (0x0008ab36) cell_myfav_contact_pane_g3_ParamLimits

0xd0cf,	// (0x0008ab36) cell_myfav_contact_pane_g3

0xb389,	// (0x00088df0) cell_myfav_contact_pane_g4_ParamLimits

0xb389,	// (0x00088df0) cell_myfav_contact_pane_g4

0xd0dc,	// (0x0008ab43) cell_myfav_contact_pane_g5_ParamLimits

0xd0dc,	// (0x0008ab43) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x0008d37c) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x0008d37c) cell_myfav_contact_pane_g

0x7a9b,	// (0x00085502) main_myfav_hc_pane_g3_ParamLimits

0x7a9b,	// (0x00085502) main_myfav_hc_pane_g3

0x3496,	// (0x00080efd) popup_adpt_find_window

0x7ae8,	// (0x0008554f) afind_page_pane_ParamLimits

0x7ae8,	// (0x0008554f) afind_page_pane

0x7afd,	// (0x00085564) aid_size_cell_afind_ParamLimits

0x7afd,	// (0x00085564) aid_size_cell_afind

0x7b1b,	// (0x00085582) bg_popup_sub_pane_cp09_ParamLimits

0x7b1b,	// (0x00085582) bg_popup_sub_pane_cp09

0x7b28,	// (0x0008558f) find_pane_cp01_ParamLimits

0x7b28,	// (0x0008558f) find_pane_cp01

0xd0e8,	// (0x0008ab4f) grid_afind_control_pane_ParamLimits

0xd0e8,	// (0x0008ab4f) grid_afind_control_pane

0x7b35,	// (0x0008559c) grid_afind_pane_ParamLimits

0x7b35,	// (0x0008559c) grid_afind_pane

0x7b53,	// (0x000855ba) cell_afind_pane_ParamLimits

0x7b53,	// (0x000855ba) cell_afind_pane

0xb6dc,	// (0x00089143) afind_page_pane_g1

0x7ba2,	// (0x00085609) afind_page_pane_g2

0x7bab,	// (0x00085612) afind_page_pane_g3

0x0002,

0xf920,	// (0x0008d387) afind_page_pane_g

0x7bb4,	// (0x0008561b) afind_page_pane_t1

0xd0fc,	// (0x0008ab63) cell_afind_grid_control_pane_ParamLimits

0xd0fc,	// (0x0008ab63) cell_afind_grid_control_pane

0xd10b,	// (0x0008ab72) bg_button_pane_cp69_ParamLimits

0xd10b,	// (0x0008ab72) bg_button_pane_cp69

0x7bd4,	// (0x0008563b) cell_afind_pane_g1_ParamLimits

0x7bd4,	// (0x0008563b) cell_afind_pane_g1

0x7be1,	// (0x00085648) cell_afind_pane_t1_ParamLimits

0x7be1,	// (0x00085648) cell_afind_pane_t1

0xb6e6,	// (0x0008914d) bg_button_pane_cp72

0xd117,	// (0x0008ab7e) cell_afind_grid_control_pane_g1

0x5977,	// (0x000833de) aid_image_placing_area_ParamLimits

0x5977,	// (0x000833de) aid_image_placing_area

0xb37b,	// (0x00088de2) field_vitu_entry_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) field_vitu_entry_pane_g1

0xb37b,	// (0x00088de2) field_vitu_entry_pane_g2_ParamLimits

0xb37b,	// (0x00088de2) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0008d234) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0008d234) field_vitu_entry_pane_g

0xcc9e,	// (0x0008a705) cell_vitu_itu_pane_g1_ParamLimits

0xcc81,	// (0x0008a6e8) cell_vitu_itu_pane_t3_ParamLimits

0xcc81,	// (0x0008a6e8) cell_vitu_itu_pane_t3

0xcea9,	// (0x0008a910) mp4_progress_pane_t1_ParamLimits

0xcec0,	// (0x0008a927) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x0008d2cd) mp4_progress_pane_t_ParamLimits

0xced7,	// (0x0008a93e) mup_progress_pane_cp04_ParamLimits

0x7ad6,	// (0x0008553d) main_myfav_hc_pane_t5_ParamLimits

0x7ad6,	// (0x0008553d) main_myfav_hc_pane_t5

0xac52,	// (0x000886b9) aid_zoom_text_primary

0x3496,	// (0x00080efd) popup_adpt_find_window_ParamLimits

0xea89,	// (0x0008c4f0) main_cam_set_pane

0x75d5,	// (0x0008503c) cam4_zoom_pane_ParamLimits

0x75d5,	// (0x0008503c) cam4_zoom_pane

0x7bf3,	// (0x0008565a) main_cam_set_pane_g1_ParamLimits

0x7bf3,	// (0x0008565a) main_cam_set_pane_g1

0x7c01,	// (0x00085668) main_cam_set_pane_g2_ParamLimits

0x7c01,	// (0x00085668) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0008d38e) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0008d38e) main_cam_set_pane_g

0x7c20,	// (0x00085687) main_cam_set_pane_t1_ParamLimits

0x7c20,	// (0x00085687) main_cam_set_pane_t1

0x7c32,	// (0x00085699) main_cset_listscroll_pane_ParamLimits

0x7c32,	// (0x00085699) main_cset_listscroll_pane

0x7c54,	// (0x000856bb) main_cset_slider_pane_ParamLimits

0x7c54,	// (0x000856bb) main_cset_slider_pane

0xd128,	// (0x0008ab8f) main_cset_list_pane_ParamLimits

0xd128,	// (0x0008ab8f) main_cset_list_pane

0xd138,	// (0x0008ab9f) scroll_pane_cp028

0x7c78,	// (0x000856df) aid_area_touch_slider

0x7c94,	// (0x000856fb) cset_slider_pane

0x7cb7,	// (0x0008571e) main_cset_slider_pane_g1

0x7ccc,	// (0x00085733) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x0008d393) main_cset_slider_pane_g

0xd171,	// (0x0008abd8) main_cset_slider_pane_t1

0x7d88,	// (0x000857ef) main_cset_slider_pane_t2

0x7da2,	// (0x00085809) main_cset_slider_pane_t3

0x7dbc,	// (0x00085823) main_cset_slider_pane_t4

0x7dd6,	// (0x0008583d) main_cset_slider_pane_t5

0x7df0,	// (0x00085857) main_cset_slider_pane_t6

0x7e05,	// (0x0008586c) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x0008d3b8) main_cset_slider_pane_t

0x7f09,	// (0x00085970) cset_list_set_pane_ParamLimits

0x7f09,	// (0x00085970) cset_list_set_pane

0xd20b,	// (0x0008ac72) aid_position_infowindow_above

0xd213,	// (0x0008ac7a) aid_position_infowindow_below

0x7f1a,	// (0x00085981) cset_list_set_pane_g1_ParamLimits

0x7f1a,	// (0x00085981) cset_list_set_pane_g1

0x7f26,	// (0x0008598d) cset_list_set_pane_g3_ParamLimits

0x7f26,	// (0x0008598d) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x0008d3d7) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x0008d3d7) cset_list_set_pane_g

0x7f35,	// (0x0008599c) cset_list_set_pane_t1_ParamLimits

0x7f35,	// (0x0008599c) cset_list_set_pane_t1

0x1497,	// (0x0007eefe) list_highlight_pane_cp021_ParamLimits

0x1497,	// (0x0007eefe) list_highlight_pane_cp021

0x1507,	// (0x0007ef6e) cset_slider_pane_g1

0x1519,	// (0x0007ef80) cset_slider_pane_g2

0x1510,	// (0x0007ef77) cset_slider_pane_g3

0x0002,

0xf975,	// (0x0008d3dc) cset_slider_pane_g

0xef65,	// (0x0008c9cc) aid_area_touch_cam4_zoom

0xef6d,	// (0x0008c9d4) cam4_zoom_cont_pane

0xef75,	// (0x0008c9dc) cam4_zoom_pane_g1

0xef7d,	// (0x0008c9e4) cam4_zoom_pane_g2

0x7f4a,	// (0x000859b1) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x0008d3e3) cam4_zoom_pane_g

0xef85,	// (0x0008c9ec) cam4_zoom_cont_pane_g1

0xef8e,	// (0x0008c9f5) cam4_zoom_cont_pane_g2

0xef97,	// (0x0008c9fe) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x0008d3ea) cam4_zoom_cont_pane_g

0x74b7,	// (0x00084f1e) call4_image_pane_ParamLimits

0x74b7,	// (0x00084f1e) call4_image_pane

0xcf17,	// (0x0008a97e) call4_windows_conf_pane_ParamLimits

0xcf4a,	// (0x0008a9b1) popup_call4_audio_in_window_ParamLimits

0xcf4a,	// (0x0008a9b1) popup_call4_audio_in_window

0x3346,	// (0x00080dad) bg_popup_call2_act_pane_cp02

0xcf88,	// (0x0008a9ef) call4_list_conf_pane

0xb6dc,	// (0x00089143) call4_image_pane_g1

0xb6dc,	// (0x00089143) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) call4_image_pane_g

0xd21b,	// (0x0008ac82) list_single_graphic_popup_conf4_pane_ParamLimits

0xd21b,	// (0x0008ac82) list_single_graphic_popup_conf4_pane

0x3346,	// (0x00080dad) list_highlight_pane_cp022

0xd228,	// (0x0008ac8f) list_single_graphic_popup_conf4_pane_g1

0x113d,	// (0x0007eba4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x0008d3f1) list_single_graphic_popup_conf4_pane_g

0xd230,	// (0x0008ac97) list_single_graphic_popup_conf4_pane_t1

0x426b,	// (0x00081cd2) popup_vtel_slider_window_ParamLimits

0x426b,	// (0x00081cd2) popup_vtel_slider_window

0xbbbf,	// (0x00089626) dialer2_ne_pane_t2_ParamLimits

0xbbbf,	// (0x00089626) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x0008d2d2) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x0008d2d2) dialer2_ne_pane_t

0xc4f4,	// (0x00089f5b) bg_popup_sub_pane_cp010_ParamLimits

0xc4f4,	// (0x00089f5b) bg_popup_sub_pane_cp010

0x7f52,	// (0x000859b9) popup_vtel_slider_window_g1_ParamLimits

0x7f52,	// (0x000859b9) popup_vtel_slider_window_g1

0x7f65,	// (0x000859cc) popup_vtel_slider_window_g2_ParamLimits

0x7f65,	// (0x000859cc) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x0008d3f6) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x0008d3f6) popup_vtel_slider_window_g

0x7fb9,	// (0x00085a20) vtel_slider_pane_ParamLimits

0x7fb9,	// (0x00085a20) vtel_slider_pane

0x7fdb,	// (0x00085a42) vtel_slider_pane_g1_ParamLimits

0x7fdb,	// (0x00085a42) vtel_slider_pane_g1

0x7fef,	// (0x00085a56) vtel_slider_pane_g2_ParamLimits

0x7fef,	// (0x00085a56) vtel_slider_pane_g2

0x8007,	// (0x00085a6e) vtel_slider_pane_g3_ParamLimits

0x8007,	// (0x00085a6e) vtel_slider_pane_g3

0x7fdb,	// (0x00085a42) vtel_slider_pane_g4_ParamLimits

0x7fdb,	// (0x00085a42) vtel_slider_pane_g4

0x801d,	// (0x00085a84) vtel_slider_pane_g5_ParamLimits

0x801d,	// (0x00085a84) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0008d3ff) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0008d3ff) vtel_slider_pane_g

0xea89,	// (0x0008c4f0) main_gallery2_pane

0x779a,	// (0x00085201) aid_size_row_itut2_dropdow_list_ParamLimits

0x779a,	// (0x00085201) aid_size_row_itut2_dropdow_list

0x7804,	// (0x0008526b) grid_vitu2_function_top_pane_ParamLimits

0x7804,	// (0x0008526b) grid_vitu2_function_top_pane

0x784c,	// (0x000852b3) popup_vitu2_dropdown_list_window_ParamLimits

0x784c,	// (0x000852b3) popup_vitu2_dropdown_list_window

0x786b,	// (0x000852d2) popup_vitu2_match_list_window

0x8033,	// (0x00085a9a) cell_vitu2_function_top_pane_ParamLimits

0x8033,	// (0x00085a9a) cell_vitu2_function_top_pane

0x804b,	// (0x00085ab2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x804b,	// (0x00085ab2) cell_vitu2_function_top_pane_cp01

0x8067,	// (0x00085ace) cell_vitu2_function_top_wide_pane_ParamLimits

0x8067,	// (0x00085ace) cell_vitu2_function_top_wide_pane

0xea89,	// (0x0008c4f0) bg_button_pane_cp012

0x8084,	// (0x00085aeb) cell_vitu2_function_top_pane_g1

0xefa0,	// (0x0008ca07) bg_button_pane_cp013_ParamLimits

0xefa0,	// (0x0008ca07) bg_button_pane_cp013

0x8098,	// (0x00085aff) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8098,	// (0x00085aff) cell_vitu2_function_top_wide_pane_g1

0xea89,	// (0x0008c4f0) bg_popup_sub_pane_cp20

0x80b0,	// (0x00085b17) list_vitu2_match_list_pane

0xd012,	// (0x0008aa79) bg_popup_sub_pane_cp20_g1

0xd01a,	// (0x0008aa81) bg_popup_sub_pane_cp20_g2

0xb938,	// (0x0008939f) bg_popup_sub_pane_cp20_g3

0xd022,	// (0x0008aa89) bg_popup_sub_pane_cp20_g4

0xb918,	// (0x0008937f) bg_popup_sub_pane_cp20_g5

0xd246,	// (0x0008acad) bg_popup_sub_pane_cp20_g6

0xd032,	// (0x0008aa99) bg_popup_sub_pane_cp20_g7

0xd03a,	// (0x0008aaa1) bg_popup_sub_pane_cp20_g8

0xd042,	// (0x0008aaa9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x0008d40a) bg_popup_sub_pane_cp20_g

0xefbc,	// (0x0008ca23) list_vitu2_match_list_item_pane_ParamLimits

0xefbc,	// (0x0008ca23) list_vitu2_match_list_item_pane

0xefce,	// (0x0008ca35) list_vitu2_match_list_item_pane_t1

0xac8b,	// (0x000886f2) bg_popup_sub_pane_cp21

0xefdc,	// (0x0008ca43) grid_vitu2_dropdown_list_pane

0x80ce,	// (0x00085b35) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x80ce,	// (0x00085b35) cell_vitu2_dropdown_list_char_pane

0x80ef,	// (0x00085b56) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80ef,	// (0x00085b56) cell_vitu2_dropdown_list_ctrl_pane

0xd25b,	// (0x0008acc2) cell_vitu2_dropdown_list_char_pane_g1

0xd264,	// (0x0008accb) cell_vitu2_dropdown_list_char_pane_g2

0xd26d,	// (0x0008acd4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x0008d427) cell_vitu2_dropdown_list_char_pane_g

0x8119,	// (0x00085b80) cell_vitu2_dropdown_list_char_pane_t1

0x8127,	// (0x00085b8e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8127,	// (0x00085b8e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8134,	// (0x00085b9b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8134,	// (0x00085b9b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8141,	// (0x00085ba8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8141,	// (0x00085ba8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x814e,	// (0x00085bb5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x814e,	// (0x00085bb5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xee94,	// (0x0008c8fb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xee94,	// (0x0008c8fb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0008d42e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0008d42e) cell_vitu2_dropdown_list_ctrl_pane_g

0x816a,	// (0x00085bd1) aid_size_cell_gallery2_ParamLimits

0x816a,	// (0x00085bd1) aid_size_cell_gallery2

0x8188,	// (0x00085bef) grid_gallery2_pane_ParamLimits

0x8188,	// (0x00085bef) grid_gallery2_pane

0x6f66,	// (0x000849cd) scroll_pane_cp029_ParamLimits

0x6f66,	// (0x000849cd) scroll_pane_cp029

0x819c,	// (0x00085c03) cell_gallery2_pane_ParamLimits

0x819c,	// (0x00085c03) cell_gallery2_pane

0xd276,	// (0x0008acdd) cell_gallery2_pane_g2

0x81f5,	// (0x00085c5c) cell_gallery2_pane_g3

0xd27e,	// (0x0008ace5) cell_gallery2_pane_g4

0xd286,	// (0x0008aced) cell_gallery2_pane_g5

0xb678,	// (0x000890df) grid_highlight_pane_cp10

0x786b,	// (0x000852d2) popup_vitu2_match_list_window_ParamLimits

0x787c,	// (0x000852e3) popup_vitu2_query_window_ParamLimits

0x787c,	// (0x000852e3) popup_vitu2_query_window

0xac8b,	// (0x000886f2) bg_vitu2_candi_button_pane

0xd25b,	// (0x0008acc2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd264,	// (0x0008accb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd26d,	// (0x0008acd4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x81fd,	// (0x00085c64) bg_button_pane_cp015

0x820d,	// (0x00085c74) bg_button_pane_cp016

0x821f,	// (0x00085c86) bg_button_pane_cp017

0x2150,	// (0x0007fbb7) bg_popup_sub_pane_cp22

0xd28e,	// (0x0008acf5) popup_vitu2_query_window_g1

0x8260,	// (0x00085cc7) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x0008d439) popup_vitu2_query_window_g

0x827b,	// (0x00085ce2) popup_vitu2_query_window_t1_ParamLimits

0x827b,	// (0x00085ce2) popup_vitu2_query_window_t1

0x82ae,	// (0x00085d15) popup_vitu2_query_window_t2_ParamLimits

0x82ae,	// (0x00085d15) popup_vitu2_query_window_t2

0x82c0,	// (0x00085d27) popup_vitu2_query_window_t3_ParamLimits

0x82c0,	// (0x00085d27) popup_vitu2_query_window_t3

0x82e8,	// (0x00085d4f) popup_vitu2_query_window_t4_ParamLimits

0x82e8,	// (0x00085d4f) popup_vitu2_query_window_t4

0x8305,	// (0x00085d6c) popup_vitu2_query_window_t5_ParamLimits

0x8305,	// (0x00085d6c) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0008d440) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0008d440) popup_vitu2_query_window_t

0xd120,	// (0x0008ab87) main_cset_text_pane

0x7c78,	// (0x000856df) aid_area_touch_slider_ParamLimits

0x7c94,	// (0x000856fb) cset_slider_pane_ParamLimits

0x7cb7,	// (0x0008571e) main_cset_slider_pane_g1_ParamLimits

0x7ccc,	// (0x00085733) main_cset_slider_pane_g2_ParamLimits

0xd141,	// (0x0008aba8) main_cset_slider_pane_g3_ParamLimits

0xd141,	// (0x0008aba8) main_cset_slider_pane_g3

0x7ce1,	// (0x00085748) main_cset_slider_pane_g4_ParamLimits

0x7ce1,	// (0x00085748) main_cset_slider_pane_g4

0x7cf0,	// (0x00085757) main_cset_slider_pane_g5_ParamLimits

0x7cf0,	// (0x00085757) main_cset_slider_pane_g5

0x7cfc,	// (0x00085763) main_cset_slider_pane_g6_ParamLimits

0x7cfc,	// (0x00085763) main_cset_slider_pane_g6

0xf92c,	// (0x0008d393) main_cset_slider_pane_g_ParamLimits

0xd171,	// (0x0008abd8) main_cset_slider_pane_t1_ParamLimits

0x7d88,	// (0x000857ef) main_cset_slider_pane_t2_ParamLimits

0x7da2,	// (0x00085809) main_cset_slider_pane_t3_ParamLimits

0x7dbc,	// (0x00085823) main_cset_slider_pane_t4_ParamLimits

0x7dd6,	// (0x0008583d) main_cset_slider_pane_t5_ParamLimits

0x7df0,	// (0x00085857) main_cset_slider_pane_t6_ParamLimits

0x7e05,	// (0x0008586c) main_cset_slider_pane_t7_ParamLimits

0x7e2f,	// (0x00085896) main_cset_slider_pane_t8_ParamLimits

0x7e2f,	// (0x00085896) main_cset_slider_pane_t8

0x7e57,	// (0x000858be) main_cset_slider_pane_t9_ParamLimits

0x7e57,	// (0x000858be) main_cset_slider_pane_t9

0x7e7f,	// (0x000858e6) main_cset_slider_pane_t10_ParamLimits

0x7e7f,	// (0x000858e6) main_cset_slider_pane_t10

0x7ea7,	// (0x0008590e) main_cset_slider_pane_t11_ParamLimits

0x7ea7,	// (0x0008590e) main_cset_slider_pane_t11

0x7ecf,	// (0x00085936) main_cset_slider_pane_t12_ParamLimits

0x7ecf,	// (0x00085936) main_cset_slider_pane_t12

0x7eec,	// (0x00085953) main_cset_slider_pane_t13_ParamLimits

0x7eec,	// (0x00085953) main_cset_slider_pane_t13

0xf951,	// (0x0008d3b8) main_cset_slider_pane_t_ParamLimits

0x3346,	// (0x00080dad) bg_popup_sub_pane_cp011

0xd29a,	// (0x0008ad01) main_cset_text_pane_g1

0xd2a2,	// (0x0008ad09) main_cset_text_pane_t1

0xd2b0,	// (0x0008ad17) main_cset_text_pane_t2

0xd2be,	// (0x0008ad25) main_cset_text_pane_t3

0xd2cc,	// (0x0008ad33) main_cset_text_pane_t4

0xd2da,	// (0x0008ad41) main_cset_text_pane_t5

0xd2e8,	// (0x0008ad4f) main_cset_text_pane_t6

0xd2f6,	// (0x0008ad5d) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0008d44f) main_cset_text_pane_t

0xac8b,	// (0x000886f2) main_cam4_burst_pane

0xac8b,	// (0x000886f2) main_cam5_pane

0x7bc2,	// (0x00085629) bg_button_pane_cp019

0x7bcb,	// (0x00085632) bg_button_pane_cp020

0xd14d,	// (0x0008abb4) main_cset_slider_pane_g7_ParamLimits

0xd14d,	// (0x0008abb4) main_cset_slider_pane_g7

0xd159,	// (0x0008abc0) main_cset_slider_pane_g8_ParamLimits

0xd159,	// (0x0008abc0) main_cset_slider_pane_g8

0x7d10,	// (0x00085777) main_cset_slider_pane_g9_ParamLimits

0x7d10,	// (0x00085777) main_cset_slider_pane_g9

0x7d1c,	// (0x00085783) main_cset_slider_pane_g10_ParamLimits

0x7d1c,	// (0x00085783) main_cset_slider_pane_g10

0x7d28,	// (0x0008578f) main_cset_slider_pane_g11_ParamLimits

0x7d28,	// (0x0008578f) main_cset_slider_pane_g11

0x7d34,	// (0x0008579b) main_cset_slider_pane_g12_ParamLimits

0x7d34,	// (0x0008579b) main_cset_slider_pane_g12

0x7d40,	// (0x000857a7) main_cset_slider_pane_g13_ParamLimits

0x7d40,	// (0x000857a7) main_cset_slider_pane_g13

0x7d4c,	// (0x000857b3) main_cset_slider_pane_g14_ParamLimits

0x7d4c,	// (0x000857b3) main_cset_slider_pane_g14

0x7d58,	// (0x000857bf) main_cset_slider_pane_g15_ParamLimits

0x7d58,	// (0x000857bf) main_cset_slider_pane_g15

0xd199,	// (0x0008ac00) main_cset_slider_pane_t14_ParamLimits

0xd199,	// (0x0008ac00) main_cset_slider_pane_t14

0xd1d2,	// (0x0008ac39) main_cset_slider_pane_t15_ParamLimits

0xd1d2,	// (0x0008ac39) main_cset_slider_pane_t15

0x8378,	// (0x00085ddf) aid_cam4_burst_size_cell_ParamLimits

0x8378,	// (0x00085ddf) aid_cam4_burst_size_cell

0x8398,	// (0x00085dff) grid_cam4_burst_pane_ParamLimits

0x8398,	// (0x00085dff) grid_cam4_burst_pane

0x83be,	// (0x00085e25) linegrid_cam4_burst_pane_ParamLimits

0x83be,	// (0x00085e25) linegrid_cam4_burst_pane

0x83e0,	// (0x00085e47) scroll_pane_cp30_ParamLimits

0x83e0,	// (0x00085e47) scroll_pane_cp30

0x83ec,	// (0x00085e53) cell_cam4_burst_pane_ParamLimits

0x83ec,	// (0x00085e53) cell_cam4_burst_pane

0xd304,	// (0x0008ad6b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd304,	// (0x0008ad6b) linegrid_cam4_burst_pane_g1

0x8433,	// (0x00085e9a) linegrid_cam4_burst_pane_g2_ParamLimits

0x8433,	// (0x00085e9a) linegrid_cam4_burst_pane_g2

0xd311,	// (0x0008ad78) linegrid_cam4_burst_pane_g3_ParamLimits

0xd311,	// (0x0008ad78) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0008d45e) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0008d45e) linegrid_cam4_burst_pane_g

0x8444,	// (0x00085eab) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8444,	// (0x00085eab) linegrid_cam4_burst_pane_g3_copy1

0xd31e,	// (0x0008ad85) linegrid_cam4_burst_pane_g4_ParamLimits

0xd31e,	// (0x0008ad85) linegrid_cam4_burst_pane_g4

0x845e,	// (0x00085ec5) linegrid_cam4_burst_pane_g5_ParamLimits

0x845e,	// (0x00085ec5) linegrid_cam4_burst_pane_g5

0x846f,	// (0x00085ed6) linegrid_cam4_burst_pane_g6_ParamLimits

0x846f,	// (0x00085ed6) linegrid_cam4_burst_pane_g6

0xd32b,	// (0x0008ad92) linegrid_cam4_burst_pane_g7_ParamLimits

0xd32b,	// (0x0008ad92) linegrid_cam4_burst_pane_g7

0x8480,	// (0x00085ee7) cell_cam4_burst_pane_g1

0xd344,	// (0x0008adab) main_cam5_pane_t1_ParamLimits

0xd344,	// (0x0008adab) main_cam5_pane_t1

0xd356,	// (0x0008adbd) main_cam5_pane_t2_ParamLimits

0xd356,	// (0x0008adbd) main_cam5_pane_t2

0xd368,	// (0x0008adcf) main_cam5_pane_t3_ParamLimits

0xd368,	// (0x0008adcf) main_cam5_pane_t3

0xd37a,	// (0x0008ade1) main_cam5_pane_t4_ParamLimits

0xd37a,	// (0x0008ade1) main_cam5_pane_t4

0xd390,	// (0x0008adf7) main_cam5_pane_t5_ParamLimits

0xd390,	// (0x0008adf7) main_cam5_pane_t5

0xd3a2,	// (0x0008ae09) main_cam5_pane_t6_ParamLimits

0xd3a2,	// (0x0008ae09) main_cam5_pane_t6

0xd3b4,	// (0x0008ae1b) main_cam5_pane_t7_ParamLimits

0xd3b4,	// (0x0008ae1b) main_cam5_pane_t7

0xd3c6,	// (0x0008ae2d) main_cam5_pane_t8_ParamLimits

0xd3c6,	// (0x0008ae2d) main_cam5_pane_t8

0xd3e2,	// (0x0008ae49) main_cam5_pane_t9_ParamLimits

0xd3e2,	// (0x0008ae49) main_cam5_pane_t9

0xd3f4,	// (0x0008ae5b) main_cam5_pane_t10_ParamLimits

0xd3f4,	// (0x0008ae5b) main_cam5_pane_t10

0xd406,	// (0x0008ae6d) main_cam5_pane_t11_ParamLimits

0xd406,	// (0x0008ae6d) main_cam5_pane_t11

0xd418,	// (0x0008ae7f) main_cam5_pane_t12_ParamLimits

0xd418,	// (0x0008ae7f) main_cam5_pane_t12

0xd42d,	// (0x0008ae94) main_cam5_pane_t13_ParamLimits

0xd42d,	// (0x0008ae94) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x0008d46a) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x0008d46a) main_cam5_pane_t

0x34f4,	// (0x00080f5b) popup_scut_keymap_window_ParamLimits

0x34f4,	// (0x00080f5b) popup_scut_keymap_window

0x8495,	// (0x00085efc) aid_size_cell_brow_shortcut

0xb678,	// (0x000890df) bg_popup_window_pane_cp010

0x84a1,	// (0x00085f08) grid_scut_pane

0x84ab,	// (0x00085f12) cell_scut_pane_ParamLimits

0x84ab,	// (0x00085f12) cell_scut_pane

0x84c0,	// (0x00085f27) cell_scut_pane_g1

0xd44a,	// (0x0008aeb1) cell_scut_pane_t1

0xd459,	// (0x0008aec0) cell_scut_pane_t2

0x84c9,	// (0x00085f30) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x0008d485) cell_scut_pane_t

0x6751,	// (0x000841b8) main_mup3_pane_g8_ParamLimits

0x6751,	// (0x000841b8) main_mup3_pane_g8

0x77ae,	// (0x00085215) area_vitu2_query_pane_ParamLimits

0x77ae,	// (0x00085215) area_vitu2_query_pane

0x8231,	// (0x00085c98) input_focus_pane_cp08

0xd468,	// (0x0008aecf) area_vitu2_query_pane_g1

0x84d7,	// (0x00085f3e) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x0008d48c) area_vitu2_query_pane_g

0x84e6,	// (0x00085f4d) area_vitu2_query_pane_t1_ParamLimits

0x84e6,	// (0x00085f4d) area_vitu2_query_pane_t1

0x84f8,	// (0x00085f5f) area_vitu2_query_pane_t2_ParamLimits

0x84f8,	// (0x00085f5f) area_vitu2_query_pane_t2

0x850a,	// (0x00085f71) area_vitu2_query_pane_t3_ParamLimits

0x850a,	// (0x00085f71) area_vitu2_query_pane_t3

0xd474,	// (0x0008aedb) area_vitu2_query_pane_t4_ParamLimits

0xd474,	// (0x0008aedb) area_vitu2_query_pane_t4

0xd49c,	// (0x0008af03) area_vitu2_query_pane_t5_ParamLimits

0xd49c,	// (0x0008af03) area_vitu2_query_pane_t5

0xd4c4,	// (0x0008af2b) area_vitu2_query_pane_t6_ParamLimits

0xd4c4,	// (0x0008af2b) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0008d491) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0008d491) area_vitu2_query_pane_t

0x8532,	// (0x00085f99) bg_button_pane_cp018

0x853f,	// (0x00085fa6) bg_button_pane_cp021

0x854b,	// (0x00085fb2) bg_button_pane_cp022

0x855a,	// (0x00085fc1) input_focus_pane_cp09

0x52b5,	// (0x00082d1c) aid_size_touch_mv_arrow_left

0x127b,	// (0x0007ece2) aid_size_touch_mv_arrow_right

0x7d70,	// (0x000857d7) main_cset_slider_pane_g16_ParamLimits

0x7d70,	// (0x000857d7) main_cset_slider_pane_g16

0x7d7c,	// (0x000857e3) main_cset_slider_pane_g17_ParamLimits

0x7d7c,	// (0x000857e3) main_cset_slider_pane_g17

0x8480,	// (0x00085ee7) cell_cam4_burst_pane_g1_ParamLimits

0x3346,	// (0x00080dad) compa_mode_pane

0x7f75,	// (0x000859dc) popup_vtel_slider_window_g3_ParamLimits

0x7f75,	// (0x000859dc) popup_vtel_slider_window_g3

0x7f8c,	// (0x000859f3) popup_vtel_slider_window_g4_ParamLimits

0x7f8c,	// (0x000859f3) popup_vtel_slider_window_g4

0x7fa3,	// (0x00085a0a) popup_vtel_slider_window_t1_ParamLimits

0x7fa3,	// (0x00085a0a) popup_vtel_slider_window_t1

0xac8b,	// (0x000886f2) main_cl_pane

0xeaaf,	// (0x0008c516) popup_imed_adjust2_window_ParamLimits

0x2150,	// (0x0007fbb7) bg_tb_trans_pane_cp05_ParamLimits

0xcbb6,	// (0x0008a61d) popup_imed_adjust2_window_g1_ParamLimits

0xcbc5,	// (0x0008a62c) popup_imed_adjust2_window_g2_ParamLimits

0xcbc5,	// (0x0008a62c) popup_imed_adjust2_window_g2

0xcbd1,	// (0x0008a638) popup_imed_adjust2_window_g3_ParamLimits

0xcbd1,	// (0x0008a638) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0008d1f8) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0008d1f8) popup_imed_adjust2_window_g

0xcbdd,	// (0x0008a644) popup_imed_adjust2_window_t1_ParamLimits

0xcbf5,	// (0x0008a65c) slider_imed_adjust_pane_ParamLimits

0xcc09,	// (0x0008a670) slider_imed_adjust_pane_g1_ParamLimits

0xcc19,	// (0x0008a680) slider_imed_adjust_pane_g2_ParamLimits

0xcc29,	// (0x0008a690) slider_imed_adjust_pane_g3_ParamLimits

0xcc3a,	// (0x0008a6a1) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0008d1ff) slider_imed_adjust_pane_g_ParamLimits

0x7584,	// (0x00084feb) aid_touch_area_cam4_ParamLimits

0x7584,	// (0x00084feb) aid_touch_area_cam4

0xee7a,	// (0x0008c8e1) battery_pane_cp01

0x761c,	// (0x00085083) main_camera4_pane_g6_ParamLimits

0x761c,	// (0x00085083) main_camera4_pane_g6

0x763d,	// (0x000850a4) main_camera4_pane_t2_ParamLimits

0x763d,	// (0x000850a4) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x0008d306) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x0008d306) main_camera4_pane_t

0x766b,	// (0x000850d2) aid_touch_area_vid4_ParamLimits

0x766b,	// (0x000850d2) aid_touch_area_vid4

0x76ad,	// (0x00085114) main_video4_pane_g5_ParamLimits

0x76ad,	// (0x00085114) main_video4_pane_g5

0x76ce,	// (0x00085135) vid4_progress_pane_ParamLimits

0x76ce,	// (0x00085135) vid4_progress_pane

0xd165,	// (0x0008abcc) main_cset_slider_pane_g18_ParamLimits

0xd165,	// (0x0008abcc) main_cset_slider_pane_g18

0xd338,	// (0x0008ad9f) cell_cam4_burst_pane_g2_ParamLimits

0xd338,	// (0x0008ad9f) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0008d465) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0008d465) cell_cam4_burst_pane_g

0xb413,	// (0x00088e7a) bg_cl_pane_ParamLimits

0xb413,	// (0x00088e7a) bg_cl_pane

0x8569,	// (0x00085fd0) cl_header_pane_ParamLimits

0x8569,	// (0x00085fd0) cl_header_pane

0x857d,	// (0x00085fe4) cl_listscroll_pane_ParamLimits

0x857d,	// (0x00085fe4) cl_listscroll_pane

0xd510,	// (0x0008af77) bg_cl_pane_g1

0xd518,	// (0x0008af7f) bg_cl_pane_g2

0xd520,	// (0x0008af87) bg_cl_pane_g3

0xd528,	// (0x0008af8f) bg_cl_pane_g4

0xd530,	// (0x0008af97) bg_cl_pane_g5

0xd538,	// (0x0008af9f) bg_cl_pane_g6

0xd540,	// (0x0008afa7) bg_cl_pane_g7

0xd548,	// (0x0008afaf) bg_cl_pane_g8

0xd550,	// (0x0008afb7) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x0008d4a0) bg_cl_pane_g

0x858d,	// (0x00085ff4) aid_height_cl_leading_ParamLimits

0x858d,	// (0x00085ff4) aid_height_cl_leading

0x8599,	// (0x00086000) aid_height_cl_text_ParamLimits

0x8599,	// (0x00086000) aid_height_cl_text

0x1497,	// (0x0007eefe) bg_cl_header_pane_ParamLimits

0x1497,	// (0x0007eefe) bg_cl_header_pane

0x85b8,	// (0x0008601f) cl_header_pane_g1_ParamLimits

0x85b8,	// (0x0008601f) cl_header_pane_g1

0x85ce,	// (0x00086035) cl_header_pane_t1_ParamLimits

0x85ce,	// (0x00086035) cl_header_pane_t1

0xd558,	// (0x0008afbf) cl_list_pane

0xd561,	// (0x0008afc8) hc_scroll_pane_cp01

0xb918,	// (0x0008937f) bg_cl_header_pane_g1

0xd012,	// (0x0008aa79) bg_cl_header_pane_g2

0xb938,	// (0x0008939f) bg_cl_header_pane_g3

0xd022,	// (0x0008aa89) bg_cl_header_pane_g4

0xd01a,	// (0x0008aa81) bg_cl_header_pane_g5

0xd246,	// (0x0008acad) bg_cl_header_pane_g6

0xd03a,	// (0x0008aaa1) bg_cl_header_pane_g7

0xd042,	// (0x0008aaa9) bg_cl_header_pane_g8

0xd032,	// (0x0008aa99) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x0008d4b3) bg_cl_header_pane_g

0x85e7,	// (0x0008604e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x85e7,	// (0x0008604e) hc_cl_list_double_graphic_heading_pane

0x85f7,	// (0x0008605e) hc_cl_list_single_graphic_pane_ParamLimits

0x85f7,	// (0x0008605e) hc_cl_list_single_graphic_pane

0x860a,	// (0x00086071) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x860a,	// (0x00086071) hc_cl_list_single_graphic_pane_g1

0x8616,	// (0x0008607d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8616,	// (0x0008607d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x0008d4c6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x0008d4c6) hc_cl_list_single_graphic_pane_g

0x862a,	// (0x00086091) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x862a,	// (0x00086091) hc_cl_list_single_graphic_pane_t1

0x860a,	// (0x00086071) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x860a,	// (0x00086071) hc_cl_list_double_graphic_heading_pane_g1

0x863f,	// (0x000860a6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x863f,	// (0x000860a6) hc_cl_list_double_graphic_heading_pane_g2

0x8653,	// (0x000860ba) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8653,	// (0x000860ba) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x0008d4cb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x0008d4cb) hc_cl_list_double_graphic_heading_pane_g

0x8667,	// (0x000860ce) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8667,	// (0x000860ce) hc_cl_list_double_graphic_heading_pane_t1

0x867c,	// (0x000860e3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x867c,	// (0x000860e3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x0008d4d2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x0008d4d2) hc_cl_list_double_graphic_heading_pane_t

0xefe4,	// (0x0008ca4b) vid4_progress_pane_g1

0xeff3,	// (0x0008ca5a) vid4_progress_pane_g2

0xf002,	// (0x0008ca69) vid4_progress_pane_g3

0xf011,	// (0x0008ca78) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x0008d4d7) vid4_progress_pane_g

0xf029,	// (0x0008ca90) vid4_progress_pane_t1

0xf03f,	// (0x0008caa6) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x0008d4e2) vid4_progress_pane_t

0xf069,	// (0x0008cad0) wait_bar_pane_cp07

0xc502,	// (0x00089f69) blid_firmament_pane_ParamLimits

0xc543,	// (0x00089faa) popup_blid_sat_info2_window_g1

0xc567,	// (0x00089fce) popup_blid_sat_info2_window_t3

0xc575,	// (0x00089fdc) popup_blid_sat_info2_window_t4

0xc583,	// (0x00089fea) popup_blid_sat_info2_window_t5

0xc591,	// (0x00089ff8) popup_blid_sat_info2_window_t6

0xc5a1,	// (0x0008a008) popup_blid_sat_info2_window_t7

0xc5af,	// (0x0008a016) popup_blid_sat_info2_window_t8

0xc5bd,	// (0x0008a024) popup_blid_sat_info2_window_t9

0xc5cb,	// (0x0008a032) popup_blid_sat_info2_window_t10

0xc667,	// (0x0008a0ce) aid_firma_cardinal_ParamLimits

0xc67b,	// (0x0008a0e2) blid_firmament_pane_t1_ParamLimits

0xc692,	// (0x0008a0f9) blid_firmament_pane_t2_ParamLimits

0xc6a9,	// (0x0008a110) blid_firmament_pane_t3_ParamLimits

0xc6c0,	// (0x0008a127) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x0008d0f1) blid_firmament_pane_t_ParamLimits

0xc6d7,	// (0x0008a13e) blid_sat_info_pane_ParamLimits

0xea89,	// (0x0008c4f0) main_cam_set_pane_ParamLimits

0x6ee7,	// (0x0008494e) aid_size_cell_colour_35_ParamLimits

0x6f07,	// (0x0008496e) aid_size_cell_colour_112_ParamLimits

0x6f27,	// (0x0008498e) aid_size_cell_effect_ParamLimits

0x2150,	// (0x0007fbb7) bg_tb_trans_pane_cp02_ParamLimits

0x0e81,	// (0x0007e8e8) heading_imed_pane_ParamLimits

0x6f47,	// (0x000849ae) listscroll_imed_pane_ParamLimits

0x1e01,	// (0x0007f868) popup_call2_audio_first_window_g5_ParamLimits

0x1e01,	// (0x0007f868) popup_call2_audio_first_window_g5

0x726f,	// (0x00084cd6) aid_size_touch_image3_arrow_left_ParamLimits

0x726f,	// (0x00084cd6) aid_size_touch_image3_arrow_left

0x728f,	// (0x00084cf6) aid_size_touch_image3_arrow_right_ParamLimits

0x728f,	// (0x00084cf6) aid_size_touch_image3_arrow_right

0xf054,	// (0x0008cabb) vid4_progress_pane_t3

0x70d0,	// (0x00084b37) main_hwr_training_symbol_option_pane_ParamLimits

0x70d0,	// (0x00084b37) main_hwr_training_symbol_option_pane

0xcde3,	// (0x0008a84a) popup_hwr_training_preview_window_ParamLimits

0xcde3,	// (0x0008a84a) popup_hwr_training_preview_window

0x70ec,	// (0x00084b53) hwr_training_navi_pane_g5_ParamLimits

0x70ec,	// (0x00084b53) hwr_training_navi_pane_g5

0xd000,	// (0x0008aa67) popup_char_count_window

0xea89,	// (0x0008c4f0) bg_popup_sub_pane_cp20_ParamLimits

0x80b0,	// (0x00085b17) list_vitu2_match_list_pane_ParamLimits

0x80bf,	// (0x00085b26) vitu2_page_scroll_pane_ParamLimits

0x80bf,	// (0x00085b26) vitu2_page_scroll_pane

0xd595,	// (0x0008affc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd595,	// (0x0008affc) list_single_hwr_training_symbol_option_pane

0xd5a8,	// (0x0008b00f) list_single_hwr_training_symbol_option_pane_g1

0xd5b0,	// (0x0008b017) list_single_hwr_training_symbol_option_pane_t1

0xd5be,	// (0x0008b025) bg_button_pane_cp023

0xd5c7,	// (0x0008b02e) bg_button_pane_cp024

0x86c0,	// (0x00086127) vitu2_page_scroll_pane_g1

0x86c8,	// (0x0008612f) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x0008d4e9) vitu2_page_scroll_pane_g

0x86d0,	// (0x00086137) vitu2_page_scroll_pane_t1

0xc706,	// (0x0008a16d) popup_char_count_window_g1

0xd5fa,	// (0x0008b061) popup_char_count_window_g2

0xd603,	// (0x0008b06a) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x0008d4ee) popup_char_count_window_g

0xd60c,	// (0x0008b073) popup_char_count_window_t1

0xac8b,	// (0x000886f2) main_vded2_pane

0xcba4,	// (0x0008a60b) aid_size_cell_imed_line

0xcbae,	// (0x0008a615) grid_imed_line_width_pane

0xef1d,	// (0x0008c984) vid4_indicators_pane_g4

0xd61a,	// (0x0008b081) cell_imed_line_width_pane_ParamLimits

0xd61a,	// (0x0008b081) cell_imed_line_width_pane

0xd62c,	// (0x0008b093) cell_imed_line_width_pane_g1

0xd635,	// (0x0008b09c) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x0008d4f5) cell_imed_line_width_pane_g

0x86df,	// (0x00086146) main_vded2_pane_g1_ParamLimits

0x86df,	// (0x00086146) main_vded2_pane_g1

0x86f5,	// (0x0008615c) main_vded2_pane_g2_ParamLimits

0x86f5,	// (0x0008615c) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x0008d4fa) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x0008d4fa) main_vded2_pane_g

0x8705,	// (0x0008616c) vded2_slider_pane_ParamLimits

0x8705,	// (0x0008616c) vded2_slider_pane

0x8718,	// (0x0008617f) aid_size_touch_vded2_end

0x8720,	// (0x00086187) aid_size_touch_vded2_playhead

0x8728,	// (0x0008618f) aid_size_touch_vded2_start

0x8730,	// (0x00086197) vded2_slider_bg_pane

0x8739,	// (0x000861a0) vded2_slider_pane_g1

0x8742,	// (0x000861a9) vded2_slider_pane_g2

0x874a,	// (0x000861b1) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x0008d4ff) vded2_slider_pane_g

0x8753,	// (0x000861ba) vded2_slider_bg_pane_g1

0x875c,	// (0x000861c3) vded2_slider_bg_pane_g2

0x8765,	// (0x000861cc) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x0008d506) vded2_slider_bg_pane_g

0x5626,	// (0x0008308d) aid_postcard_touch_down_pane_ParamLimits

0x5626,	// (0x0008308d) aid_postcard_touch_down_pane

0x5638,	// (0x0008309f) aid_postcard_touch_up_pane_ParamLimits

0x5638,	// (0x0008309f) aid_postcard_touch_up_pane

0xac8b,	// (0x000886f2) main_blid2_pane

0xea97,	// (0x0008c4fe) popup_blid2_search_window

0x3346,	// (0x00080dad) blid2_gps_pane

0x3346,	// (0x00080dad) blid2_navig_pane

0x3346,	// (0x00080dad) blid2_search_pane

0x3346,	// (0x00080dad) blid2_tripm_pane

0x876e,	// (0x000861d5) blid2_search_pane_g1_ParamLimits

0x876e,	// (0x000861d5) blid2_search_pane_g1

0x8782,	// (0x000861e9) blid2_search_pane_t1_ParamLimits

0x8782,	// (0x000861e9) blid2_search_pane_t1

0x8794,	// (0x000861fb) aid_size_cell_blid2_gps_ParamLimits

0x8794,	// (0x000861fb) aid_size_cell_blid2_gps

0x87ac,	// (0x00086213) blid2_gps_pane_g1_ParamLimits

0x87ac,	// (0x00086213) blid2_gps_pane_g1

0x87c0,	// (0x00086227) grid_blid2_satellite_pane_ParamLimits

0x87c0,	// (0x00086227) grid_blid2_satellite_pane

0x87d4,	// (0x0008623b) blid2_navig_pane_g1_ParamLimits

0x87d4,	// (0x0008623b) blid2_navig_pane_g1

0x87e0,	// (0x00086247) blid2_navig_pane_t1_ParamLimits

0x87e0,	// (0x00086247) blid2_navig_pane_t1

0x87f9,	// (0x00086260) blid2_navig_pane_t2_ParamLimits

0x87f9,	// (0x00086260) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x0008d50d) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x0008d50d) blid2_navig_pane_t

0x8812,	// (0x00086279) blid2_navig_ring_pane_ParamLimits

0x8812,	// (0x00086279) blid2_navig_ring_pane

0x8827,	// (0x0008628e) blid2_speed_pane_ParamLimits

0x8827,	// (0x0008628e) blid2_speed_pane

0x8833,	// (0x0008629a) blid2_tripm_pane_g1_ParamLimits

0x8833,	// (0x0008629a) blid2_tripm_pane_g1

0x8848,	// (0x000862af) blid2_tripm_pane_g2_ParamLimits

0x8848,	// (0x000862af) blid2_tripm_pane_g2

0x885c,	// (0x000862c3) blid2_tripm_pane_g3_ParamLimits

0x885c,	// (0x000862c3) blid2_tripm_pane_g3

0x8870,	// (0x000862d7) blid2_tripm_pane_g4_ParamLimits

0x8870,	// (0x000862d7) blid2_tripm_pane_g4

0x8884,	// (0x000862eb) blid2_tripm_pane_g5_ParamLimits

0x8884,	// (0x000862eb) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x0008d512) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x0008d512) blid2_tripm_pane_g

0x88a6,	// (0x0008630d) blid2_tripm_pane_t1_ParamLimits

0x88a6,	// (0x0008630d) blid2_tripm_pane_t1

0x88bd,	// (0x00086324) blid2_tripm_pane_t2_ParamLimits

0x88bd,	// (0x00086324) blid2_tripm_pane_t2

0x88d4,	// (0x0008633b) blid2_tripm_pane_t3_ParamLimits

0x88d4,	// (0x0008633b) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x0008d51f) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x0008d51f) blid2_tripm_pane_t

0x8917,	// (0x0008637e) cell_blid2_satellite_pane_ParamLimits

0x8917,	// (0x0008637e) cell_blid2_satellite_pane

0x892f,	// (0x00086396) cell_blid2_satellite_pane_g1

0xd63d,	// (0x0008b0a4) cell_blid2_satellite_pane_t1

0xb6dc,	// (0x00089143) blid2_speed_pane_g1

0xd64b,	// (0x0008b0b2) blid2_speed_pane_t1

0xd659,	// (0x0008b0c0) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x0008d528) blid2_speed_pane_t

0xb6dc,	// (0x00089143) blid2_navig_ring_pane_g1

0x8938,	// (0x0008639f) blid2_navig_ring_pane_g2

0x8940,	// (0x000863a7) blid2_navig_ring_pane_g3

0x8948,	// (0x000863af) blid2_navig_ring_pane_g4

0x8950,	// (0x000863b7) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x0008d52d) blid2_navig_ring_pane_g

0x3346,	// (0x00080dad) bg_popup_window_pane_cp011

0xd667,	// (0x0008b0ce) popup_blid2_search_window_g1

0xd66f,	// (0x0008b0d6) popup_blid2_search_window_t1

0xd67d,	// (0x0008b0e4) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x0008d538) popup_blid2_search_window_t

0xb827,	// (0x0008928e) main_browser_pane_g1

0xb413,	// (0x00088e7a) main_browser_pane_ParamLimits

0xea89,	// (0x0008c4f0) bg_button_pane_cp011_ParamLimits

0x799b,	// (0x00085402) cell_vitu2_function_pane_g1_ParamLimits

0x2150,	// (0x0007fbb7) bg_popup_sub_pane_cp22_ParamLimits

0x8231,	// (0x00085c98) input_focus_pane_cp08_ParamLimits

0x8248,	// (0x00085caf) popup_vitu2_query_button_pane_ParamLimits

0x8248,	// (0x00085caf) popup_vitu2_query_button_pane

0x8258,	// (0x00085cbf) popup_vitu2_query_input_button_pane

0xd28e,	// (0x0008acf5) popup_vitu2_query_window_g1_ParamLimits

0x8260,	// (0x00085cc7) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x0008d439) popup_vitu2_query_window_g_ParamLimits

0x3346,	// (0x00080dad) bg_button_pane_cp026

0x8958,	// (0x000863bf) popup_vitu2_query_input_button_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp025

0xd68b,	// (0x0008b0f2) popup_vitu2_query_button_pane_t1

0x646d,	// (0x00083ed4) main_mp3_pane_t6

0x647b,	// (0x00083ee2) popup_slider_window_cp01

0xeea2,	// (0x0008c909) cam4_battery_pane

0xeea2,	// (0x0008c909) cam4_battery_pane_cp02

0xeea2,	// (0x0008c909) cam4_battery_pane_cp01

0xeea2,	// (0x0008c909) cam4_battery_pane_cp03

0xc469,	// (0x00089ed0) cam4_battery_pane_g1

0xb6dc,	// (0x00089143) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x0008d53d) cam4_battery_pane_g

0xc5d9,	// (0x0008a040) popup_blid_sat_info2_window_t11

0x52b5,	// (0x00082d1c) aid_size_touch_mv_arrow_left_ParamLimits

0x127b,	// (0x0007ece2) aid_size_touch_mv_arrow_right_ParamLimits

0x12d4,	// (0x0007ed3b) navi_pane_g1_ParamLimits

0x12e0,	// (0x0007ed47) navi_pane_g2_ParamLimits

0x52d9,	// (0x00082d40) navi_pane_g3_ParamLimits

0xf38b,	// (0x0008cdf2) navi_pane_g_ParamLimits

0x52f6,	// (0x00082d5d) navi_pane_mv_t1_ParamLimits

0x6f53,	// (0x000849ba) grid_imed_effect_pane_ParamLimits

0x417e,	// (0x00081be5) aid_placing_vt_slider_lsc

0xb769,	// (0x000891d0) aid_placing_vt_slider_prt

0x1497,	// (0x0007eefe) bg_tb_trans_pane_cp01_ParamLimits

0xc81e,	// (0x0008a285) popup_image_details_window_g1_ParamLimits

0xc831,	// (0x0008a298) popup_image_details_window_g2_ParamLimits

0xc846,	// (0x0008a2ad) popup_image_details_window_g3_ParamLimits

0xc846,	// (0x0008a2ad) popup_image_details_window_g3

0xf6ca,	// (0x0008d131) popup_image_details_window_g_ParamLimits

0xc85a,	// (0x0008a2c1) popup_image_details_window_t1_ParamLimits

0xc86c,	// (0x0008a2d3) popup_image_details_window_t2_ParamLimits

0xc885,	// (0x0008a2ec) popup_image_details_window_t3_ParamLimits

0xc899,	// (0x0008a300) popup_image_details_window_t4_ParamLimits

0xc8b4,	// (0x0008a31b) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x0008d138) popup_image_details_window_t_ParamLimits

0x85a5,	// (0x0008600c) cl_header_name_pane_ParamLimits

0x85a5,	// (0x0008600c) cl_header_name_pane

0x8960,	// (0x000863c7) cl_header_name_pane_t1_ParamLimits

0x8960,	// (0x000863c7) cl_header_name_pane_t1

0x8981,	// (0x000863e8) cl_header_name_pane_t2_ParamLimits

0x8981,	// (0x000863e8) cl_header_name_pane_t2

0x89c3,	// (0x0008642a) cl_header_name_pane_t3_ParamLimits

0x89c3,	// (0x0008642a) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x0008d542) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x0008d542) cl_header_name_pane_t

0x136d,	// (0x0007edd4) navi_pane_mv_g2_ParamLimits

0xcfcb,	// (0x0008aa32) field_vitu2_entry_pane_g1_ParamLimits

0xcfd7,	// (0x0008aa3e) field_vitu2_entry_pane_g2_ParamLimits

0x217e,	// (0x0007fbe5) field_vitu2_entry_pane_g3_ParamLimits

0x217e,	// (0x0007fbe5) field_vitu2_entry_pane_g3

0xf8d1,	// (0x0008d338) field_vitu2_entry_pane_g_ParamLimits

0xef53,	// (0x0008c9ba) cell_vitu2_itu_pane_g1_ParamLimits

0x792f,	// (0x00085396) cell_vitu2_itu_pane_g2_ParamLimits

0x792f,	// (0x00085396) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0008d344) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0008d344) cell_vitu2_itu_pane_g

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp05_ParamLimits

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp05

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp03

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp04

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp10_ParamLimits

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp10

0x854b,	// (0x00085fb2) bg_vkb2_func_pane_cp08

0x8532,	// (0x00085f99) bg_vkb2_func_pane_cp06

0x853f,	// (0x00085fa6) bg_vkb2_func_pane_cp07

0xd5d0,	// (0x0008b037) bg_vkb2_func_pane_cp11_ParamLimits

0xd5d0,	// (0x0008b037) bg_vkb2_func_pane_cp11

0xd5e5,	// (0x0008b04c) bg_vkb2_func_pane_cp12_ParamLimits

0xd5e5,	// (0x0008b04c) bg_vkb2_func_pane_cp12

0x3346,	// (0x00080dad) bg_vkb2_func_pane_cp09

0xd012,	// (0x0008aa79) bg_vkb2_func_pane_g1

0xb938,	// (0x0008939f) bg_vkb2_func_pane_g2

0xd01a,	// (0x0008aa81) bg_vkb2_func_pane_g3

0xd022,	// (0x0008aa89) bg_vkb2_func_pane_g4

0xd246,	// (0x0008acad) bg_vkb2_func_pane_g5

0xd03a,	// (0x0008aaa1) bg_vkb2_func_pane_g6

0xd042,	// (0x0008aaa9) bg_vkb2_func_pane_g7

0xd032,	// (0x0008aa99) bg_vkb2_func_pane_g8

0xb918,	// (0x0008937f) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x0008d549) bg_vkb2_func_pane_g

0x8896,	// (0x000862fd) blid2_tripm_pane_g6_ParamLimits

0x8896,	// (0x000862fd) blid2_tripm_pane_g6

0xcea1,	// (0x0008a908) mp4_progress_pane_g1

0x8905,	// (0x0008636c) blid2_tripm_values_pane_ParamLimits

0x8905,	// (0x0008636c) blid2_tripm_values_pane

0x89f4,	// (0x0008645b) blid2_tripm_values_pane_t1

0x8a02,	// (0x00086469) blid2_tripm_values_pane_t2

0x8a10,	// (0x00086477) blid2_tripm_values_pane_t3

0x8a1e,	// (0x00086485) blid2_tripm_values_pane_t4

0x8a2c,	// (0x00086493) blid2_tripm_values_pane_t5

0x8a3a,	// (0x000864a1) blid2_tripm_values_pane_t6

0x8a48,	// (0x000864af) blid2_tripm_values_pane_t7

0x8a56,	// (0x000864bd) blid2_tripm_values_pane_t8

0x8a64,	// (0x000864cb) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x0008d55c) blid2_tripm_values_pane_t

0x41b8,	// (0x00081c1f) call_video_pane_t1_ParamLimits

0x41d2,	// (0x00081c39) call_video_pane_t2_ParamLimits

0xf222,	// (0x0008cc89) call_video_pane_t_ParamLimits

0x5548,	// (0x00082faf) msg_header_pane_g1_ParamLimits

0x154c,	// (0x0007efb3) msg_header_pane_g2_ParamLimits

0x154c,	// (0x0007efb3) msg_header_pane_g2

0x0001,

0xf42e,	// (0x0008ce95) msg_header_pane_g_ParamLimits

0xf42e,	// (0x0008ce95) msg_header_pane_g

0xb413,	// (0x00088e7a) main_clock2_pane_ParamLimits

0x6c6a,	// (0x000846d1) grid_clock2_toolbar_pane_ParamLimits

0x6c6a,	// (0x000846d1) grid_clock2_toolbar_pane

0x6c6a,	// (0x000846d1) listscroll_clock2_pane_ParamLimits

0x6c6a,	// (0x000846d1) listscroll_clock2_pane

0x6d4d,	// (0x000847b4) main_clock2_pane_t3_ParamLimits

0x6d4d,	// (0x000847b4) main_clock2_pane_t3

0x6d6f,	// (0x000847d6) main_clock2_pane_t4_ParamLimits

0x6d6f,	// (0x000847d6) main_clock2_pane_t4

0xd699,	// (0x0008b100) cell_clock2_toolbar_pane

0xd6a1,	// (0x0008b108) cell_clock2_toolbar_pane_cp01

0xd6a1,	// (0x0008b108) cell_clock2_toolbar_pane_cp02

0xd6a9,	// (0x0008b110) cell_clock2_toolbar_pane_cp03

0xd6b1,	// (0x0008b118) list_clock2_pane

0xd6b9,	// (0x0008b120) scroll_pane_cp10

0xd6c1,	// (0x0008b128) list_single_clock2_pane_ParamLimits

0xd6c1,	// (0x0008b128) list_single_clock2_pane

0xb678,	// (0x000890df) list_highlight_pane_cp08

0xd6ce,	// (0x0008b135) list_single_clock2_pane_t1

0xd6dc,	// (0x0008b143) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x0008d56f) list_single_clock2_pane_t

0x3346,	// (0x00080dad) bg_button_pane_cp10

0xd6ea,	// (0x0008b151) cell_clock2_toolbar_pane_g1

0x55ba,	// (0x00083021) aid_main_viewer_pane_g1_ParamLimits

0x55ba,	// (0x00083021) aid_main_viewer_pane_g1

0x55c6,	// (0x0008302d) aid_main_viewer_pane_g2_ParamLimits

0x55c6,	// (0x0008302d) aid_main_viewer_pane_g2

0x55d2,	// (0x00083039) aid_main_viewer_pane_g3_ParamLimits

0x55d2,	// (0x00083039) aid_main_viewer_pane_g3

0x55e1,	// (0x00083048) aid_main_viewer_pane_g4_ParamLimits

0x55e1,	// (0x00083048) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x0008cea6) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x0008cea6) aid_main_viewer_pane_g

0xea89,	// (0x0008c4f0) main_calc_pane_ParamLimits

0x5e03,	// (0x0008386a) main_dialer2_pane_ParamLimits

0xac8b,	// (0x000886f2) main_cam6_pane

0xac8b,	// (0x000886f2) main_vid6_pane

0x6c76,	// (0x000846dd) listscroll_gen_pane_cp06_ParamLimits

0x6c76,	// (0x000846dd) listscroll_gen_pane_cp06

0x6d90,	// (0x000847f7) main_clock2_pane_t5_ParamLimits

0x6d90,	// (0x000847f7) main_clock2_pane_t5

0x6de8,	// (0x0008484f) aid_call2_pane_cp10_ParamLimits

0x6dfa,	// (0x00084861) aid_call_pane_cp10_ParamLimits

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6e0c,	// (0x00084873) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6e0c,	// (0x00084873) popup_clock_analogue_window_cp10_g4_ParamLimits

0x126f,	// (0x0007ecd6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0008d1ed) popup_clock_analogue_window_cp10_g_ParamLimits

0x6e1e,	// (0x00084885) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcef9,	// (0x0008a960) cell_dialer2_keypad_pane_g2_ParamLimits

0xcef9,	// (0x0008a960) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x0008d2d7) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x0008d2d7) cell_dialer2_keypad_pane_g

0x1483,	// (0x0007eeea) cell_dialer2_keypad_pane_t1

0x7c6a,	// (0x000856d1) main_cset_text2_pane_ParamLimits

0x7c6a,	// (0x000856d1) main_cset_text2_pane

0xd468,	// (0x0008aecf) area_vitu2_query_pane_g1_ParamLimits

0x84d7,	// (0x00085f3e) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x0008d48c) area_vitu2_query_pane_g_ParamLimits

0xd4ec,	// (0x0008af53) area_vitu2_query_pane_t7_ParamLimits

0xd4ec,	// (0x0008af53) area_vitu2_query_pane_t7

0x8532,	// (0x00085f99) bg_button_pane_cp018_ParamLimits

0x853f,	// (0x00085fa6) bg_button_pane_cp021_ParamLimits

0x854b,	// (0x00085fb2) bg_button_pane_cp022_ParamLimits

0x854b,	// (0x00085fb2) bg_vkb2_func_pane_cp08_ParamLimits

0x8532,	// (0x00085f99) bg_vkb2_func_pane_cp06_ParamLimits

0x853f,	// (0x00085fa6) bg_vkb2_func_pane_cp07_ParamLimits

0x855a,	// (0x00085fc1) input_focus_pane_cp09_ParamLimits

0xf079,	// (0x0008cae0) cam6_autofocus_pane_ParamLimits

0xf079,	// (0x0008cae0) cam6_autofocus_pane

0x8a72,	// (0x000864d9) cam6_image_uncrop_pane_ParamLimits

0x8a72,	// (0x000864d9) cam6_image_uncrop_pane

0x8a7f,	// (0x000864e6) cam6_indi_pane_ParamLimits

0x8a7f,	// (0x000864e6) cam6_indi_pane

0x8a95,	// (0x000864fc) cam6_mode_pane_ParamLimits

0x8a95,	// (0x000864fc) cam6_mode_pane

0x8aa7,	// (0x0008650e) cam6_timer_pane_ParamLimits

0x8aa7,	// (0x0008650e) cam6_timer_pane

0x8ab3,	// (0x0008651a) cam6_zoom_pane_ParamLimits

0x8ab3,	// (0x0008651a) cam6_zoom_pane

0x8abf,	// (0x00086526) cam6_mode_pane_g1_ParamLimits

0x8abf,	// (0x00086526) cam6_mode_pane_g1

0x8acf,	// (0x00086536) cam6_mode_pane_g2_ParamLimits

0x8acf,	// (0x00086536) cam6_mode_pane_g2

0x8adf,	// (0x00086546) cam6_mode_pane_g3_ParamLimits

0x8adf,	// (0x00086546) cam6_mode_pane_g3

0x8aef,	// (0x00086556) cam6_mode_pane_g4_ParamLimits

0x8aef,	// (0x00086556) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0008d574) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0008d574) cam6_mode_pane_g

0xd6f2,	// (0x0008b159) bg_tb_trans_pane_cp08_ParamLimits

0xd6f2,	// (0x0008b159) bg_tb_trans_pane_cp08

0xd700,	// (0x0008b167) cam6_battery_pane_ParamLimits

0xd700,	// (0x0008b167) cam6_battery_pane

0xd716,	// (0x0008b17d) cam6_indi_pane_g1_ParamLimits

0xd716,	// (0x0008b17d) cam6_indi_pane_g1

0xd728,	// (0x0008b18f) cam6_indi_pane_g2_ParamLimits

0xd728,	// (0x0008b18f) cam6_indi_pane_g2

0xd73a,	// (0x0008b1a1) cam6_indi_pane_g3_ParamLimits

0xd73a,	// (0x0008b1a1) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x0008d57d) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x0008d57d) cam6_indi_pane_g

0xd74c,	// (0x0008b1b3) cam6_indi_pane_t1_ParamLimits

0xd74c,	// (0x0008b1b3) cam6_indi_pane_t1

0x7730,	// (0x00085197) cam6_autofocus_pane_g1

0x7728,	// (0x0008518f) cam6_autofocus_pane_g2

0x7740,	// (0x000851a7) cam6_autofocus_pane_g3

0x7738,	// (0x0008519f) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x0008d584) cam6_autofocus_pane_g

0xd772,	// (0x0008b1d9) cam6_timer_pane_g1

0xd77a,	// (0x0008b1e1) cam6_timer_pane_t1

0xd788,	// (0x0008b1ef) cam6_zoom_cont_pane

0xd790,	// (0x0008b1f7) cam6_zoom_pane_g1

0xd798,	// (0x0008b1ff) cam6_zoom_pane_g2

0x8aff,	// (0x00086566) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x0008d58d) cam6_zoom_pane_g

0xb6dc,	// (0x00089143) cam6_battery_pane_g1

0xb6dc,	// (0x00089143) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) cam6_battery_pane_g

0xd7a0,	// (0x0008b207) cam6_zoom_cont_pane_g1

0xd7a9,	// (0x0008b210) cam6_zoom_cont_pane_g2

0xd7b2,	// (0x0008b219) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x0008d594) cam6_zoom_cont_pane_g

0x8b1c,	// (0x00086583) cam6_mode_pane_cp_ParamLimits

0x8b1c,	// (0x00086583) cam6_mode_pane_cp

0x8b2e,	// (0x00086595) cam6_zoom_pane_cp_ParamLimits

0x8b2e,	// (0x00086595) cam6_zoom_pane_cp

0x8b3a,	// (0x000865a1) vid6_image_uncrop_cif_pane_ParamLimits

0x8b3a,	// (0x000865a1) vid6_image_uncrop_cif_pane

0x8b48,	// (0x000865af) vid6_image_uncrop_nhd_pane_ParamLimits

0x8b48,	// (0x000865af) vid6_image_uncrop_nhd_pane

0x8b55,	// (0x000865bc) vid6_image_uncrop_vga_pane_ParamLimits

0x8b55,	// (0x000865bc) vid6_image_uncrop_vga_pane

0x8b62,	// (0x000865c9) vid6_image_uncrop_wvga_pane_ParamLimits

0x8b62,	// (0x000865c9) vid6_image_uncrop_wvga_pane

0x8b6f,	// (0x000865d6) vid6_indi_pane_ParamLimits

0x8b6f,	// (0x000865d6) vid6_indi_pane

0xd6f2,	// (0x0008b159) bg_tb_trans_pane_cp09_ParamLimits

0xd6f2,	// (0x0008b159) bg_tb_trans_pane_cp09

0xd7c6,	// (0x0008b22d) cam6_battery_pane_cp_ParamLimits

0xd7c6,	// (0x0008b22d) cam6_battery_pane_cp

0xd7d2,	// (0x0008b239) vid6_indi_pane_g1_ParamLimits

0xd7d2,	// (0x0008b239) vid6_indi_pane_g1

0xd7e4,	// (0x0008b24b) vid6_indi_pane_g2_ParamLimits

0xd7e4,	// (0x0008b24b) vid6_indi_pane_g2

0xd7f6,	// (0x0008b25d) vid6_indi_pane_g3_ParamLimits

0xd7f6,	// (0x0008b25d) vid6_indi_pane_g3

0xd80b,	// (0x0008b272) vid6_indi_pane_g4_ParamLimits

0xd80b,	// (0x0008b272) vid6_indi_pane_g4

0xd820,	// (0x0008b287) vid6_indi_pane_g5_ParamLimits

0xd820,	// (0x0008b287) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x0008d59b) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x0008d59b) vid6_indi_pane_g

0xd83a,	// (0x0008b2a1) vid6_indi_pane_t1_ParamLimits

0xd83a,	// (0x0008b2a1) vid6_indi_pane_t1

0xd850,	// (0x0008b2b7) vid6_indi_pane_t2_ParamLimits

0xd850,	// (0x0008b2b7) vid6_indi_pane_t2

0xd878,	// (0x0008b2df) vid6_indi_pane_t3_ParamLimits

0xd878,	// (0x0008b2df) vid6_indi_pane_t3

0xd8a0,	// (0x0008b307) vid6_indi_pane_t4_ParamLimits

0xd8a0,	// (0x0008b307) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x0008d5a6) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x0008d5a6) vid6_indi_pane_t

0xd8c4,	// (0x0008b32b) wait_bar_pane_cp08

0x8b86,	// (0x000865ed) main_cset_text2_pane_t1_ParamLimits

0x8b86,	// (0x000865ed) main_cset_text2_pane_t1

0x8b07,	// (0x0008656e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8b07,	// (0x0008656e) listscroll_gen_pane_cp06_t1

0xac8b,	// (0x000886f2) main_cam6_set_pane

0xee94,	// (0x0008c8fb) bg_tb_trans_pane_cp06_ParamLimits

0xeeaa,	// (0x0008c911) cam4_indicators_pane_g1_ParamLimits

0xeeba,	// (0x0008c921) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x0008d314) cam4_indicators_pane_g_ParamLimits

0xeeda,	// (0x0008c941) cam4_indicators_pane_t1_ParamLimits

0xea89,	// (0x0008c4f0) bg_tb_trans_pane_cp07_ParamLimits

0xeeaa,	// (0x0008c911) vid4_indicators_pane_g1_ParamLimits

0xeefc,	// (0x0008c963) vid4_indicators_pane_g2_ParamLimits

0xef0c,	// (0x0008c973) vid4_indicators_pane_g3_ParamLimits

0xef1d,	// (0x0008c984) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x0008d326) vid4_indicators_pane_g_ParamLimits

0xef39,	// (0x0008c9a0) vid4_indicators_pane_t1_ParamLimits

0xefe4,	// (0x0008ca4b) vid4_progress_pane_g1_ParamLimits

0xeff3,	// (0x0008ca5a) vid4_progress_pane_g2_ParamLimits

0xf002,	// (0x0008ca69) vid4_progress_pane_g3_ParamLimits

0xf011,	// (0x0008ca78) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x0008d4d7) vid4_progress_pane_g_ParamLimits

0xf029,	// (0x0008ca90) vid4_progress_pane_t1_ParamLimits

0xf03f,	// (0x0008caa6) vid4_progress_pane_t2_ParamLimits

0xf054,	// (0x0008cabb) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x0008d4e2) vid4_progress_pane_t_ParamLimits

0xf069,	// (0x0008cad0) wait_bar_pane_cp07_ParamLimits

0x8ba1,	// (0x00086608) main_cam6_set_pane_g2_ParamLimits

0x8ba1,	// (0x00086608) main_cam6_set_pane_g2

0x8bc3,	// (0x0008662a) main_cset6_listscroll_pane_ParamLimits

0x8bc3,	// (0x0008662a) main_cset6_listscroll_pane

0x8bdd,	// (0x00086644) main_cset6_slider_pane_ParamLimits

0x8bdd,	// (0x00086644) main_cset6_slider_pane

0x8bf3,	// (0x0008665a) main_cset6_text2_pane_ParamLimits

0x8bf3,	// (0x0008665a) main_cset6_text2_pane

0xd8d4,	// (0x0008b33b) main_cset6_text_pane

0xd128,	// (0x0008ab8f) main_cset_list_pane_copy1_ParamLimits

0xd128,	// (0x0008ab8f) main_cset_list_pane_copy1

0xd138,	// (0x0008ab9f) scroll_pane_cp028_copy1

0x8c01,	// (0x00086668) cset_list_set_pane_copy1

0x8c13,	// (0x0008667a) aid_position_infowindow_above_copy1

0x8c1b,	// (0x00086682) aid_position_infowindow_below_copy1

0x8c23,	// (0x0008668a) cset_list_set_pane_g1_copy1

0x8c2b,	// (0x00086692) cset_list_set_pane_g3_copy1_ParamLimits

0x8c2b,	// (0x00086692) cset_list_set_pane_g3_copy1

0x8c3a,	// (0x000866a1) cset_list_set_pane_t1_copy1_ParamLimits

0x8c3a,	// (0x000866a1) cset_list_set_pane_t1_copy1

0x1497,	// (0x0007eefe) list_highlight_pane_cp021_copy1_ParamLimits

0x1497,	// (0x0007eefe) list_highlight_pane_cp021_copy1

0xd8dc,	// (0x0008b343) cset6_slider_pane_ParamLimits

0xd8dc,	// (0x0008b343) cset6_slider_pane

0xd908,	// (0x0008b36f) main_cset6_slider_pane_g1_ParamLimits

0xd908,	// (0x0008b36f) main_cset6_slider_pane_g1

0x8c4f,	// (0x000866b6) main_cset6_slider_pane_g2_ParamLimits

0x8c4f,	// (0x000866b6) main_cset6_slider_pane_g2

0xd14d,	// (0x0008abb4) main_cset6_slider_pane_g3_ParamLimits

0xd14d,	// (0x0008abb4) main_cset6_slider_pane_g3

0x7d28,	// (0x0008578f) main_cset6_slider_pane_g4_ParamLimits

0x7d28,	// (0x0008578f) main_cset6_slider_pane_g4

0x7d70,	// (0x000857d7) main_cset6_slider_pane_g5_ParamLimits

0x7d70,	// (0x000857d7) main_cset6_slider_pane_g5

0xd14d,	// (0x0008abb4) main_cset6_slider_pane_g7_ParamLimits

0xd14d,	// (0x0008abb4) main_cset6_slider_pane_g7

0xd159,	// (0x0008abc0) main_cset6_slider_pane_g8_ParamLimits

0xd159,	// (0x0008abc0) main_cset6_slider_pane_g8

0x7d10,	// (0x00085777) main_cset6_slider_pane_g9_ParamLimits

0x7d10,	// (0x00085777) main_cset6_slider_pane_g9

0x7d1c,	// (0x00085783) main_cset6_slider_pane_g10_ParamLimits

0x7d1c,	// (0x00085783) main_cset6_slider_pane_g10

0x7d28,	// (0x0008578f) main_cset6_slider_pane_g11_ParamLimits

0x7d28,	// (0x0008578f) main_cset6_slider_pane_g11

0x7d34,	// (0x0008579b) main_cset6_slider_pane_g12_ParamLimits

0x7d34,	// (0x0008579b) main_cset6_slider_pane_g12

0x7d40,	// (0x000857a7) main_cset6_slider_pane_g13_ParamLimits

0x7d40,	// (0x000857a7) main_cset6_slider_pane_g13

0x7d4c,	// (0x000857b3) main_cset6_slider_pane_g14_ParamLimits

0x7d4c,	// (0x000857b3) main_cset6_slider_pane_g14

0x8c77,	// (0x000866de) main_cset6_slider_pane_g15_ParamLimits

0x8c77,	// (0x000866de) main_cset6_slider_pane_g15

0x7d70,	// (0x000857d7) main_cset6_slider_pane_g16_ParamLimits

0x7d70,	// (0x000857d7) main_cset6_slider_pane_g16

0x7d7c,	// (0x000857e3) main_cset6_slider_pane_g17_ParamLimits

0x7d7c,	// (0x000857e3) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x0008d5af) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x0008d5af) main_cset6_slider_pane_g

0xd930,	// (0x0008b397) main_cset6_slider_pane_t1_ParamLimits

0xd930,	// (0x0008b397) main_cset6_slider_pane_t1

0xd971,	// (0x0008b3d8) main_cset6_slider_pane_t2_ParamLimits

0xd971,	// (0x0008b3d8) main_cset6_slider_pane_t2

0xd99c,	// (0x0008b403) main_cset6_slider_pane_t3_ParamLimits

0xd99c,	// (0x0008b403) main_cset6_slider_pane_t3

0x8c8f,	// (0x000866f6) main_cset6_slider_pane_t4_ParamLimits

0x8c8f,	// (0x000866f6) main_cset6_slider_pane_t4

0x8cba,	// (0x00086721) main_cset6_slider_pane_t5_ParamLimits

0x8cba,	// (0x00086721) main_cset6_slider_pane_t5

0xd9c7,	// (0x0008b42e) main_cset6_slider_pane_t7_ParamLimits

0xd9c7,	// (0x0008b42e) main_cset6_slider_pane_t7

0x8ce5,	// (0x0008674c) main_cset6_slider_pane_t8_ParamLimits

0x8ce5,	// (0x0008674c) main_cset6_slider_pane_t8

0x8d09,	// (0x00086770) main_cset6_slider_pane_t9_ParamLimits

0x8d09,	// (0x00086770) main_cset6_slider_pane_t9

0x8d2d,	// (0x00086794) main_cset6_slider_pane_t10_ParamLimits

0x8d2d,	// (0x00086794) main_cset6_slider_pane_t10

0x8d51,	// (0x000867b8) main_cset6_slider_pane_t11_ParamLimits

0x8d51,	// (0x000867b8) main_cset6_slider_pane_t11

0xd9fd,	// (0x0008b464) main_cset6_slider_pane_t14_ParamLimits

0xd9fd,	// (0x0008b464) main_cset6_slider_pane_t14

0xda36,	// (0x0008b49d) main_cset6_slider_pane_t15_ParamLimits

0xda36,	// (0x0008b49d) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x0008d5d4) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x0008d5d4) main_cset6_slider_pane_t

0xda6f,	// (0x0008b4d6) cset_slider_pane_g1_copy1

0xda78,	// (0x0008b4df) cset_slider_pane_g2_copy1

0xda81,	// (0x0008b4e8) cset_slider_pane_g3_copy1

0x3346,	// (0x00080dad) bg_popup_sub_pane_cp011_copy1

0xd29a,	// (0x0008ad01) main_cset_text_pane_g1_copy1

0xd2a2,	// (0x0008ad09) main_cset_text_pane_t1_copy1

0xd2b0,	// (0x0008ad17) main_cset_text_pane_t2_copy1

0xd2be,	// (0x0008ad25) main_cset_text_pane_t3_copy1

0xd2cc,	// (0x0008ad33) main_cset_text_pane_t4_copy1

0xd2da,	// (0x0008ad41) main_cset_text_pane_t5_copy1

0xd2e8,	// (0x0008ad4f) main_cset_text_pane_t6_copy1

0xd2f6,	// (0x0008ad5d) main_cset_text_pane_t7_copy1

0x8d92,	// (0x000867f9) main_cset_text2_pane_t1_copy1

0xea89,	// (0x0008c4f0) main_ncimui_pane

0x6011,	// (0x00083a78) popup_query_ncimui_window_ParamLimits

0x6011,	// (0x00083a78) popup_query_ncimui_window

0xc991,	// (0x0008a3f8) field_cale_ev2_pane_g4_ParamLimits

0xc991,	// (0x0008a3f8) field_cale_ev2_pane_g4

0x71d4,	// (0x00084c3b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x71d4,	// (0x00084c3b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x0008d2ae) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x0008d2ae) cell_video_dialer_keypad_pane_g

0x71ec,	// (0x00084c53) cell_video_dialer_keypad_pane_t1

0x3346,	// (0x00080dad) bg_popup_window_pane_cp012

0x10bc,	// (0x0007eb23) heading_pane_cp06

0xdada,	// (0x0008b541) ncim_query_content_pane

0x3346,	// (0x00080dad) bg_popup_heading_pane_cp01

0xdae2,	// (0x0008b549) ncim_heading_pane_t1

0xdaf0,	// (0x0008b557) ncim_indicator_popup_pane

0xdb02,	// (0x0008b569) ncim_query_button_pane

0xdb16,	// (0x0008b57d) ncim_query_content_pane_t1

0xdb28,	// (0x0008b58f) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x0008d618) ncim_query_content_pane_t

0xdb62,	// (0x0008b5c9) ncim_query_list_pane

0xdb74,	// (0x0008b5db) ncim_query_popup_pane

0xdaf0,	// (0x0008b557) ncim_indicator_popup_pane_ParamLimits

0x8ed1,	// (0x00086938) ncim_query_content_pane_g1_ParamLimits

0x8ed1,	// (0x00086938) ncim_query_content_pane_g1

0xdb16,	// (0x0008b57d) ncim_query_content_pane_t1_ParamLimits

0xdb28,	// (0x0008b58f) ncim_query_content_pane_t2_ParamLimits

0x8edd,	// (0x00086944) ncim_query_content_pane_t3_ParamLimits

0x8edd,	// (0x00086944) ncim_query_content_pane_t3

0x8f05,	// (0x0008696c) ncim_query_content_pane_t4_ParamLimits

0x8f05,	// (0x0008696c) ncim_query_content_pane_t4

0x8f2d,	// (0x00086994) ncim_query_content_pane_t5_ParamLimits

0x8f2d,	// (0x00086994) ncim_query_content_pane_t5

0xdb3a,	// (0x0008b5a1) ncim_query_content_pane_t6_ParamLimits

0xdb3a,	// (0x0008b5a1) ncim_query_content_pane_t6

0xfbb1,	// (0x0008d618) ncim_query_content_pane_t_ParamLimits

0xdb62,	// (0x0008b5c9) ncim_query_list_pane_ParamLimits

0xdb74,	// (0x0008b5db) ncim_query_popup_pane_ParamLimits

0xdb88,	// (0x0008b5ef) wait_bar_pane_cp04

0x3346,	// (0x00080dad) input_focus_pane_cp011

0xdb90,	// (0x0008b5f7) ncim_query_popup_pane_t1

0xdb9e,	// (0x0008b605) ncim_list_query_list_pane_ParamLimits

0xdb9e,	// (0x0008b605) ncim_list_query_list_pane

0x3346,	// (0x00080dad) bg_button_pane_cp027

0xdbb1,	// (0x0008b618) ncim_query_button_pane_g1

0x3346,	// (0x00080dad) list_highlight_pane_cp012

0xdbbb,	// (0x0008b622) ncim_list_query_list_pane_g1

0xdbc3,	// (0x0008b62a) ncim_list_query_list_pane_t1

0xeeca,	// (0x0008c931) cam4_indicators_pane_g3_ParamLimits

0xeeca,	// (0x0008c931) cam4_indicators_pane_g3

0xef29,	// (0x0008c990) vid4_indicators_pane_g5_ParamLimits

0xef29,	// (0x0008c990) vid4_indicators_pane_g5

0xf01d,	// (0x0008ca84) vid4_progress_pane_g5_ParamLimits

0xf01d,	// (0x0008ca84) vid4_progress_pane_g5

0x8dc1,	// (0x00086828) main_ncimui_pane_g1

0x8e27,	// (0x0008688e) ncimui_group_query_pane_ParamLimits

0x8e27,	// (0x0008688e) ncimui_group_query_pane

0x8e6f,	// (0x000868d6) ncimui_list_pane_ParamLimits

0x8e6f,	// (0x000868d6) ncimui_list_pane

0x8e94,	// (0x000868fb) ncimui_text_pane_ParamLimits

0x8e94,	// (0x000868fb) ncimui_text_pane

0x8f55,	// (0x000869bc) ncimui_text_pane_t1_ParamLimits

0x8f55,	// (0x000869bc) ncimui_text_pane_t1

0xdbda,	// (0x0008b641) ncimui_list_single_graphic_pane_ParamLimits

0xdbda,	// (0x0008b641) ncimui_list_single_graphic_pane

0x8f73,	// (0x000869da) ncimui_query_pane_ParamLimits

0x8f73,	// (0x000869da) ncimui_query_pane

0x3346,	// (0x00080dad) list_highlight_pane_cp013

0xdbea,	// (0x0008b651) ncim_list_query_list_pane_t1_copy1

0xdbf8,	// (0x0008b65f) ncim_list_single_graphic_pane_g1

0xdc00,	// (0x0008b667) ncim_query_button_pane_cp01

0xdc0c,	// (0x0008b673) ncim_query_entry_pane_ParamLimits

0xdc0c,	// (0x0008b673) ncim_query_entry_pane

0xdc1f,	// (0x0008b686) ncimui_query_pane_g1

0xdc2b,	// (0x0008b692) ncimui_query_pane_t1_ParamLimits

0xdc2b,	// (0x0008b692) ncimui_query_pane_t1

0x1497,	// (0x0007eefe) input_focus_pane_cp012

0xdc44,	// (0x0008b6ab) ncim_query_entry_pane_t1

0xb413,	// (0x00088e7a) main_im_pane_ParamLimits

0xea89,	// (0x0008c4f0) main_mobtv_pane_ParamLimits

0xea89,	// (0x0008c4f0) main_mobtv_pane

0x7d10,	// (0x00085777) main_cset6_slider_pane_g18_ParamLimits

0x7d10,	// (0x00085777) main_cset6_slider_pane_g18

0x7d40,	// (0x000857a7) main_cset6_slider_pane_g19_ParamLimits

0x7d40,	// (0x000857a7) main_cset6_slider_pane_g19

0xb397,	// (0x00088dfe) bg_main_mobtv_pane_ParamLimits

0xb397,	// (0x00088dfe) bg_main_mobtv_pane

0x8f83,	// (0x000869ea) main_mobtv_info_pane

0x8f8c,	// (0x000869f3) main_mobtv_loading_pane_ParamLimits

0x8f8c,	// (0x000869f3) main_mobtv_loading_pane

0xdc56,	// (0x0008b6bd) main_mobtv_pg_channel_list_pane

0xdc60,	// (0x0008b6c7) main_mobtv_pg_hdr_pane

0x8f99,	// (0x00086a00) main_mobtv_programe_curr_pane_ParamLimits

0x8f99,	// (0x00086a00) main_mobtv_programe_curr_pane

0x8fa6,	// (0x00086a0d) main_mobtv_programe_next_pane_ParamLimits

0x8fa6,	// (0x00086a0d) main_mobtv_programe_next_pane

0xdc69,	// (0x0008b6d0) popup_mobtv_noti_window

0xb6dc,	// (0x00089143) main_tv_pg_hdr_pane_g1

0xdc71,	// (0x0008b6d8) main_tv_pg_hdr_pane_g2

0xdc79,	// (0x0008b6e0) main_tv_pg_hdr_pane_g3

0xdc81,	// (0x0008b6e8) main_tv_pg_hdr_pane_g4

0xdc89,	// (0x0008b6f0) main_tv_pg_hdr_pane_g5

0xdc91,	// (0x0008b6f8) main_tv_pg_hdr_pane_g6

0xdc99,	// (0x0008b700) main_tv_pg_hdr_pane_g7

0xdca1,	// (0x0008b708) main_tv_pg_hdr_pane_g8

0xdca9,	// (0x0008b710) main_tv_pg_hdr_pane_g9

0xdcb1,	// (0x0008b718) main_tv_pg_hdr_pane_g10

0xdcbb,	// (0x0008b722) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0008d625) main_tv_pg_hdr_pane_g

0xdcc5,	// (0x0008b72c) main_tv_pg_hdr_pane_t1

0xdcd3,	// (0x0008b73a) main_tv_pg_hdr_pane_t2

0xdce1,	// (0x0008b748) main_tv_pg_hdr_pane_t3

0xdcef,	// (0x0008b756) main_tv_pg_hdr_pane_t4

0xdcfd,	// (0x0008b764) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x0008d63c) main_tv_pg_hdr_pane_t

0xdd0b,	// (0x0008b772) single_mobtv_pg_channel_pane_ParamLimits

0xdd0b,	// (0x0008b772) single_mobtv_pg_channel_pane

0xdd1d,	// (0x0008b784) single_mobtv_pg_channel_table_pane

0xdd26,	// (0x0008b78d) single_mobtv_pg_channel_thumb_pane

0xdd2f,	// (0x0008b796) single_tv_pg_channel_pane_g1

0xdd38,	// (0x0008b79f) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x0008d647) single_tv_pg_channel_pane_g

0xb37b,	// (0x00088de2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb37b,	// (0x00088de2) bg_single_mobtv_pg_channel_thumb_pane

0xdd41,	// (0x0008b7a8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdd41,	// (0x0008b7a8) single_mobtv_pg_channel_thumb_pane_g1

0xdd4f,	// (0x0008b7b6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdd4f,	// (0x0008b7b6) single_mobtv_pg_channel_thumb_pane_g2

0xdd5b,	// (0x0008b7c2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdd5b,	// (0x0008b7c2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x0008d64c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x0008d64c) single_mobtv_pg_channel_thumb_pane_g

0xdd67,	// (0x0008b7ce) single_mobtv_pg_channel_thumb_pane_t1

0xdd75,	// (0x0008b7dc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x0008d653) single_mobtv_pg_channel_thumb_pane_t

0xb6dc,	// (0x00089143) bg_single_mobtv_pg_channel_table_pane_g1

0xb6dc,	// (0x00089143) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x0008ce56) bg_single_mobtv_pg_channel_table_pane_g

0xdd83,	// (0x0008b7ea) single_mobtv_pg_channel_table_pane_t1

0xdd91,	// (0x0008b7f8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x0008d658) single_mobtv_pg_channel_table_pane_t

0x8fbb,	// (0x00086a22) main_mobtv_info_pane_g1_ParamLimits

0x8fbb,	// (0x00086a22) main_mobtv_info_pane_g1

0x8fd7,	// (0x00086a3e) main_mobtv_info_pane_t1_ParamLimits

0x8fd7,	// (0x00086a3e) main_mobtv_info_pane_t1

0x903d,	// (0x00086aa4) main_mobtv_info_pane_t2_ParamLimits

0x903d,	// (0x00086aa4) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0008d662) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0008d662) main_mobtv_info_pane_t

0x90c0,	// (0x00086b27) wait_bar_pane_cp05

0x90d0,	// (0x00086b37) main_mobtv_loading_pane_g1_ParamLimits

0x90d0,	// (0x00086b37) main_mobtv_loading_pane_g1

0x90e1,	// (0x00086b48) main_mobtv_loading_pane_g2_ParamLimits

0x90e1,	// (0x00086b48) main_mobtv_loading_pane_g2

0x90ed,	// (0x00086b54) main_mobtv_loading_pane_g3_ParamLimits

0x90ed,	// (0x00086b54) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x0008d669) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x0008d669) main_mobtv_loading_pane_g

0xdd9f,	// (0x0008b806) main_mobtv_loading_pane_t1_ParamLimits

0xdd9f,	// (0x0008b806) main_mobtv_loading_pane_t1

0xddb7,	// (0x0008b81e) main_mobtv_loading_pane_t2_ParamLimits

0xddb7,	// (0x0008b81e) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0008d670) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0008d670) main_mobtv_loading_pane_t

0x90fe,	// (0x00086b65) wait_bar_pane_cp06_ParamLimits

0x90fe,	// (0x00086b65) wait_bar_pane_cp06

0xdddb,	// (0x0008b842) main_mobtv_programe_curr_pane_t1

0xdde9,	// (0x0008b850) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0008d675) main_mobtv_programe_curr_pane_t

0xddf7,	// (0x0008b85e) main_mobtv_programe_next_pane_t1

0xde05,	// (0x0008b86c) main_mobtv_programe_next_pane_t2

0xde13,	// (0x0008b87a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x0008d67a) main_mobtv_programe_next_pane_t

0x3346,	// (0x00080dad) bg_popup_mobtv_noti_window_pane

0xde21,	// (0x0008b888) popup_mobtv_noti_window_g1

0xde29,	// (0x0008b890) popup_mobtv_noti_window_t1

0xde37,	// (0x0008b89e) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x0008d681) popup_mobtv_noti_window_t

0xb6dc,	// (0x00089143) bg_popup_mobtv_noti_window_pane_g1

0xac8b,	// (0x000886f2) sc_clock_pane

0xac8b,	// (0x000886f2) main_fs_bigclock_pane

0x88ef,	// (0x00086356) blid2_tripm_pane_t4_ParamLimits

0x88ef,	// (0x00086356) blid2_tripm_pane_t4

0x910d,	// (0x00086b74) sc_clock_pane_g1_ParamLimits

0x910d,	// (0x00086b74) sc_clock_pane_g1

0x911f,	// (0x00086b86) sc_clock_pane_t1_ParamLimits

0x911f,	// (0x00086b86) sc_clock_pane_t1

0x9141,	// (0x00086ba8) sc_clock_pane_t2_ParamLimits

0x9141,	// (0x00086ba8) sc_clock_pane_t2

0x9157,	// (0x00086bbe) sc_clock_pane_t3_ParamLimits

0x9157,	// (0x00086bbe) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0008d686) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0008d686) sc_clock_pane_t

0x9f65,	// (0x000879cc) main_fs_bigclock_indicator_pane_ParamLimits

0x9f65,	// (0x000879cc) main_fs_bigclock_indicator_pane

0x91f3,	// (0x00086c5a) main_fs_bigclock_pane_g1_ParamLimits

0x91f3,	// (0x00086c5a) main_fs_bigclock_pane_g1

0x9f71,	// (0x000879d8) main_fs_bigclock_pane_t1_ParamLimits

0x9f71,	// (0x000879d8) main_fs_bigclock_pane_t1

0x9f83,	// (0x000879ea) main_fs_bigclock_pane_t2_ParamLimits

0x9f83,	// (0x000879ea) main_fs_bigclock_pane_t2

0x9f95,	// (0x000879fc) main_fs_bigclock_pane_t3_ParamLimits

0x9f95,	// (0x000879fc) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x0008d84f) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x0008d84f) main_fs_bigclock_pane_t

0xe87d,	// (0x0008c2e4) main_fs_bigclock_indicator_pane_g1

0xdb0a,	// (0x0008b571) ncim_query_content_pane_g2_ParamLimits

0xdb0a,	// (0x0008b571) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x0008d613) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x0008d613) ncim_query_content_pane_g

0x916e,	// (0x00086bd5) sc_clock_pane_t4_ParamLimits

0x916e,	// (0x00086bd5) sc_clock_pane_t4

0xea89,	// (0x0008c4f0) main_radioblah_pane

0xee30,	// (0x0008c897) cell_call4_button_pane_t1_copy1_ParamLimits

0xee30,	// (0x0008c897) cell_call4_button_pane_t1_copy1

0x8dd9,	// (0x00086840) main_ncimui_pane_t1_ParamLimits

0x8dd9,	// (0x00086840) main_ncimui_pane_t1

0x8df3,	// (0x0008685a) main_ncimui_pane_t2_ParamLimits

0x8df3,	// (0x0008685a) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x0008d60c) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x0008d60c) main_ncimui_pane_t

0xdf78,	// (0x0008b9df) main_radioblah_anim_pane_ParamLimits

0xdf78,	// (0x0008b9df) main_radioblah_anim_pane

0xdf89,	// (0x0008b9f0) main_radioblah_info_pane_ParamLimits

0xdf89,	// (0x0008b9f0) main_radioblah_info_pane

0xdf9d,	// (0x0008ba04) main_radioblah_pane_t1_ParamLimits

0xdf9d,	// (0x0008ba04) main_radioblah_pane_t1

0xdfb9,	// (0x0008ba20) main_radioblah_pane_t2_ParamLimits

0xdfb9,	// (0x0008ba20) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x0008d6a7) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x0008d6a7) main_radioblah_pane_t

0x923d,	// (0x00086ca4) main_radioblah_rocker_ctrl_pane_ParamLimits

0x923d,	// (0x00086ca4) main_radioblah_rocker_ctrl_pane

0xe001,	// (0x0008ba68) main_radioblah_info_pane_t1_ParamLimits

0xe001,	// (0x0008ba68) main_radioblah_info_pane_t1

0x9291,	// (0x00086cf8) main_radioblah_info_pane_t2_ParamLimits

0x9291,	// (0x00086cf8) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x0008d6b0) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x0008d6b0) main_radioblah_info_pane_t

0xb6dc,	// (0x00089143) main_radioblah_rocker_ctrl_pane_g1

0x933f,	// (0x00086da6) main_radioblah_rocker_ctrl_pane_g2

0x9347,	// (0x00086dae) main_radioblah_rocker_ctrl_pane_g3

0x934f,	// (0x00086db6) main_radioblah_rocker_ctrl_pane_g4

0x9357,	// (0x00086dbe) main_radioblah_rocker_ctrl_pane_g5

0x935f,	// (0x00086dc6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x0008d6b9) main_radioblah_rocker_ctrl_pane_g

0x8d92,	// (0x000867f9) main_cset_text2_pane_t1_copy1_ParamLimits

0xee8c,	// (0x0008c8f3) cam4_image_uncrop_qvga_pane

0xeef4,	// (0x0008c95b) vid4_image_uncrop_qcif_pane

0xf079,	// (0x0008cae0) cam6_image_uncrop_qvga_pane_ParamLimits

0xf079,	// (0x0008cae0) cam6_image_uncrop_qvga_pane

0xd7ba,	// (0x0008b221) vid6_image_uncrop_qcif_pane_ParamLimits

0xd7ba,	// (0x0008b221) vid6_image_uncrop_qcif_pane

0x3346,	// (0x00080dad) bg_popup_preview_window_pane_cp03

0xdab0,	// (0x0008b517) list_cset_text2_pane

0xdab8,	// (0x0008b51f) main_cset6_text2_pane_g1

0xdac0,	// (0x0008b527) main_cset6_text2_pane_t1

0x9367,	// (0x00086dce) list_cset_text2_pane_t1_ParamLimits

0x9367,	// (0x00086dce) list_cset_text2_pane_t1

0xea89,	// (0x0008c4f0) main_radioblah_pane_ParamLimits

0x90ae,	// (0x00086b15) main_mobtv_info_pane_t3_ParamLimits

0x90ae,	// (0x00086b15) main_mobtv_info_pane_t3

0x922b,	// (0x00086c92) main_radioblah_pane_g1

0x9265,	// (0x00086ccc) main_radioblah_info_pane_g1

0x92e4,	// (0x00086d4b) main_radioblah_info_pane_t3_ParamLimits

0x92e4,	// (0x00086d4b) main_radioblah_info_pane_t3

0x4ea4,	// (0x0008290b) highlight_cell_cale_month_pane_ParamLimits

0x4ea4,	// (0x0008290b) highlight_cell_cale_month_pane

0xac8b,	// (0x000886f2) main_phob_fisheye_pane

0xca32,	// (0x0008a499) scroll_pane_cp0031_ParamLimits

0xca32,	// (0x0008a499) scroll_pane_cp0031

0xd8c4,	// (0x0008b32b) wait_bar_pane_cp08_ParamLimits

0x8c01,	// (0x00086668) cset_list_set_pane_copy1_ParamLimits

0xe03b,	// (0x0008baa2) highlight_cell_cale_month_pane_g1

0x9380,	// (0x00086de7) highlight_cell_cale_month_pane_t1

0xe043,	// (0x0008baaa) list_gen_pane_cp01

0xd138,	// (0x0008ab9f) scroll_pane_01

0x938e,	// (0x00086df5) list_single_double_fisheye_pane

0x9397,	// (0x00086dfe) list_double_fisheye_pane_g1_ParamLimits

0x9397,	// (0x00086dfe) list_double_fisheye_pane_g1

0x93a3,	// (0x00086e0a) list_double_fisheye_pane_g2_ParamLimits

0x93a3,	// (0x00086e0a) list_double_fisheye_pane_g2

0x93b7,	// (0x00086e1e) list_double_fisheye_pane_g3_ParamLimits

0x93b7,	// (0x00086e1e) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x0008d6c6) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x0008d6c6) list_double_fisheye_pane_g

0x93e0,	// (0x00086e47) list_double_fisheye_pane_t1_ParamLimits

0x93e0,	// (0x00086e47) list_double_fisheye_pane_t1

0x93fb,	// (0x00086e62) list_double_fisheye_pane_t2_ParamLimits

0x93fb,	// (0x00086e62) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x0008d6d1) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x0008d6d1) list_double_fisheye_pane_t

0xac8b,	// (0x000886f2) main_call5_pane

0x9197,	// (0x00086bfe) sc_swipe_pane_ParamLimits

0x9197,	// (0x00086bfe) sc_swipe_pane

0x942e,	// (0x00086e95) call5_image_pane_ParamLimits

0x942e,	// (0x00086e95) call5_image_pane

0x9443,	// (0x00086eaa) call5_swipe_1_pane_ParamLimits

0x9443,	// (0x00086eaa) call5_swipe_1_pane

0x9454,	// (0x00086ebb) call5_swipe_2_pane_ParamLimits

0x9454,	// (0x00086ebb) call5_swipe_2_pane

0x9479,	// (0x00086ee0) popup_call5_audio_first_window_ParamLimits

0x9479,	// (0x00086ee0) popup_call5_audio_first_window

0xb37b,	// (0x00088de2) call5_swipe_1_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) call5_swipe_1_pane_g1

0xe04c,	// (0x0008bab3) call5_swipe_1_pane_g2_ParamLimits

0xe04c,	// (0x0008bab3) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x0008d6d6) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x0008d6d6) call5_swipe_1_pane_g

0xe058,	// (0x0008babf) call5_swipe_1_pane_t1_ParamLimits

0xe058,	// (0x0008babf) call5_swipe_1_pane_t1

0xb37b,	// (0x00088de2) call5_swipe_2_pane_g1_ParamLimits

0xb37b,	// (0x00088de2) call5_swipe_2_pane_g1

0xe06d,	// (0x0008bad4) call5_swipe_2_pane_g2_ParamLimits

0xe06d,	// (0x0008bad4) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0008d6db) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0008d6db) call5_swipe_2_pane_g

0xe079,	// (0x0008bae0) call5_swipe_2_pane_t1_ParamLimits

0xe079,	// (0x0008bae0) call5_swipe_2_pane_t1

0xe08e,	// (0x0008baf5) sc_swipe_pane_g1_ParamLimits

0xe08e,	// (0x0008baf5) sc_swipe_pane_g1

0xe09b,	// (0x0008bb02) sc_swipe_pane_g2_ParamLimits

0xe09b,	// (0x0008bb02) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x0008d6e0) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x0008d6e0) sc_swipe_pane_g

0xe0a7,	// (0x0008bb0e) sc_swipe_pane_t1_ParamLimits

0xe0a7,	// (0x0008bb0e) sc_swipe_pane_t1

0xac8b,	// (0x000886f2) main_cmail_launcher_pane

0x9488,	// (0x00086eef) aid_size_cell_cmail_l_ParamLimits

0x9488,	// (0x00086eef) aid_size_cell_cmail_l

0x94a1,	// (0x00086f08) grid_cmail_l_pane_ParamLimits

0x94a1,	// (0x00086f08) grid_cmail_l_pane

0x94b6,	// (0x00086f1d) cell_cmail_l_pane_ParamLimits

0x94b6,	// (0x00086f1d) cell_cmail_l_pane

0x94d8,	// (0x00086f3f) cell_cmail_l_pane_g1_ParamLimits

0x94d8,	// (0x00086f3f) cell_cmail_l_pane_g1

0x94e8,	// (0x00086f4f) cell_cmail_l_pane_t1_ParamLimits

0x94e8,	// (0x00086f4f) cell_cmail_l_pane_t1

0x94fe,	// (0x00086f65) cell_cmail_l_pane_t2_ParamLimits

0x94fe,	// (0x00086f65) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x0008d6e5) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x0008d6e5) cell_cmail_l_pane_t

0x1497,	// (0x0007eefe) grid_highlight_pane_cp018_ParamLimits

0x1497,	// (0x0007eefe) grid_highlight_pane_cp018

0x3404,	// (0x00080e6b) main2_pane_ParamLimits

0x3404,	// (0x00080e6b) main2_pane

0xb50c,	// (0x00088f73) popup_sp_fs_action_menu_bg_pane_g1

0xb514,	// (0x00088f7b) popup_sp_fs_action_menu_bg_pane_g2

0xb51c,	// (0x00088f83) popup_sp_fs_action_menu_bg_pane_g3

0xb524,	// (0x00088f8b) popup_sp_fs_action_menu_bg_pane_g4

0xb52c,	// (0x00088f93) popup_sp_fs_action_menu_bg_pane_g5

0xb534,	// (0x00088f9b) popup_sp_fs_action_menu_bg_pane_g6

0xb53c,	// (0x00088fa3) popup_sp_fs_action_menu_bg_pane_g7

0xb544,	// (0x00088fab) popup_sp_fs_action_menu_bg_pane_g8

0xb54c,	// (0x00088fb3) popup_sp_fs_action_menu_bg_pane_g9

0xb554,	// (0x00088fbb) popup_sp_fs_action_menu_bg_pane_g10

0xb554,	// (0x00088fbb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0008cbac) popup_sp_fs_action_menu_bg_pane_g

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g3_g1

0xb702,	// (0x00089169) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t3_g3_g2

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0008cc5a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0008cc5a) list_medium_line_x2_t3_g3_g

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g3_t1

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g3_t2

0xb721,	// (0x00089188) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g3_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g2_g1

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0008cc68) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0008cc68) list_medium_line_x2_t3_g2_g

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g2_t1

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g2_t2

0xb721,	// (0x00089188) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g2_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g4_g1

0xb702,	// (0x00089169) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t4_g4_g2

0xb702,	// (0x00089169) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t4_g4_g3

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0008cc6d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0008cc6d) list_medium_line_x2_t4_g4_g

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t1

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t2

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g4_t3

0xb721,	// (0x00089188) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0008cc76) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0008cc76) list_medium_line_x2_t4_g4_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g4_g1

0xb702,	// (0x00089169) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t2_g4_g2

0xb702,	// (0x00089169) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t2_g4_g3

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0008cc6d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0008cc6d) list_medium_line_x2_t2_g4_g

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g4_t1

0xb721,	// (0x00089188) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g4_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g3_g1

0xb702,	// (0x00089169) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t2_g3_g2

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0008cc5a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0008cc5a) list_medium_line_x2_t2_g3_g

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g3_t1

0xb721,	// (0x00089188) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g3_t

0x5001,	// (0x00082a68) main_sp_fs_list_pane_ParamLimits

0x5001,	// (0x00082a68) main_sp_fs_list_pane

0x500e,	// (0x00082a75) sp_fs_scroll_pane_ParamLimits

0x500e,	// (0x00082a75) sp_fs_scroll_pane

0xbb20,	// (0x00089587) list_medium_line_x2_t3_t1

0xbb20,	// (0x00089587) list_medium_line_x2_t3_t2

0xbb2f,	// (0x00089596) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0008cd28) list_medium_line_x2_t3_t

0xbb20,	// (0x00089587) list_medium_line_x3_t4_t1

0xbb20,	// (0x00089587) list_medium_line_x3_t4_t2

0xbb20,	// (0x00089587) list_medium_line_x3_t4_t3

0xbb20,	// (0x00089587) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0008cd2f) list_medium_line_x3_t4_t

0xbb20,	// (0x00089587) list_medium_line_x4_t5_t1

0xbb20,	// (0x00089587) list_medium_line_x4_t5_t2

0xbb20,	// (0x00089587) list_medium_line_x4_t5_t3

0xbb20,	// (0x00089587) list_medium_line_x4_t5_t4

0xbb20,	// (0x00089587) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0008cd38) list_medium_line_x4_t5_t

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g1

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g2_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g2

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g3_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g3

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g4_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x0008cd43) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x0008cd43) list_medium_line_t4_g4_g

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t1

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t2

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t3

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t4_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x0008cd4c) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x0008cd4c) list_medium_line_t4_g4_t

0x50dc,	// (0x00082b43) chi_dic_find_pane_g1

0x5e17,	// (0x0008387e) main_tport_pane

0xbb20,	// (0x00089587) list_medium_line_plain_t1

0xb6f6,	// (0x0008915d) list_medium_line_t2_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t2_g2_g1

0xd24e,	// (0x0008acb5) list_medium_line_t2_g2_g2_ParamLimits

0xd24e,	// (0x0008acb5) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0008d41d) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0008d41d) list_medium_line_t2_g2_g

0xb70e,	// (0x00089175) list_medium_line_t2_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_g2_t1

0xb70e,	// (0x00089175) list_medium_line_t2_g2_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0008d422) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0008d422) list_medium_line_t2_g2_t

0xd56a,	// (0x0008afd1) aid_sp_fs_list_icon_a_sm

0xd572,	// (0x0008afd9) aid_sp_fs_list_icon_d

0xd57a,	// (0x0008afe1) aid_sp_fs_text_primary

0xd583,	// (0x0008afea) aid_sp_fs_text_secondary

0xd58c,	// (0x0008aff3) list_medium_line

0xd58c,	// (0x0008aff3) list_medium_line_g2

0xd58c,	// (0x0008aff3) list_medium_line_g3

0xd58c,	// (0x0008aff3) list_medium_line_plain

0xd58c,	// (0x0008aff3) list_medium_line_plain_t2

0xd58c,	// (0x0008aff3) list_medium_line_plain_t3

0xd58c,	// (0x0008aff3) list_medium_line_right_icon

0xd58c,	// (0x0008aff3) list_medium_line_right_iconx2

0xd58c,	// (0x0008aff3) list_medium_line_t2

0xd58c,	// (0x0008aff3) list_medium_line_t2_g2

0xd58c,	// (0x0008aff3) list_medium_line_t2_g3

0xd58c,	// (0x0008aff3) list_medium_line_t2_right_icon

0xd58c,	// (0x0008aff3) list_medium_line_t2_right_iconx2

0xd58c,	// (0x0008aff3) list_medium_line_t3

0xd58c,	// (0x0008aff3) list_medium_line_t3_g2

0xd58c,	// (0x0008aff3) list_medium_line_t3_g3

0xd58c,	// (0x0008aff3) list_medium_line_t3_right_iconx2

0x8691,	// (0x000860f8) list_medium_line_t4_g4

0x869a,	// (0x00086101) list_medium_line_x2

0x869a,	// (0x00086101) list_medium_line_x2_t2_g2

0x869a,	// (0x00086101) list_medium_line_x2_t2_g3

0x869a,	// (0x00086101) list_medium_line_x2_t2_g4

0x869a,	// (0x00086101) list_medium_line_x2_t3

0x869a,	// (0x00086101) list_medium_line_x2_t3_g2

0x869a,	// (0x00086101) list_medium_line_x2_t3_g3

0x869a,	// (0x00086101) list_medium_line_x2_t3_g4

0x869a,	// (0x00086101) list_medium_line_x2_t4_g2

0x869a,	// (0x00086101) list_medium_line_x2_t4_g4

0x86a3,	// (0x0008610a) list_medium_line_x3

0x86a3,	// (0x0008610a) list_medium_line_x3_t4

0x86a3,	// (0x0008610a) list_medium_line_x3_t4_g4

0x8691,	// (0x000860f8) list_medium_line_x4_t4

0x8691,	// (0x000860f8) list_medium_line_x4_t4_g7

0x8691,	// (0x000860f8) list_medium_line_x4_t5

0x86ac,	// (0x00086113) list_single_fs_dyc_pane_ParamLimits

0x86ac,	// (0x00086113) list_single_fs_dyc_pane

0xb6f6,	// (0x0008915d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x4_t4_g7_g1

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g2

0xb702,	// (0x00089169) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x4_t4_g7_g3

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g4

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g5

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb37b,	// (0x00088de2) list_medium_line_x4_t4_g7_g6

0xb389,	// (0x00088df0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb389,	// (0x00088df0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x0008d5ed) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x0008d5ed) list_medium_line_x4_t4_g7_g

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t1

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t2

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x4_t4_g7_t3

0xda8a,	// (0x0008b4f1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xda8a,	// (0x0008b4f1) list_medium_line_x4_t4_g7_t4

0xda9d,	// (0x0008b504) list_medium_line_x4_t4_g7_t5_ParamLimits

0xda9d,	// (0x0008b504) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x0008d5fc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x0008d5fc) list_medium_line_x4_t4_g7_t

0x8d75,	// (0x000867dc) list_single_dyc_row_pane_ParamLimits

0x8d75,	// (0x000867dc) list_single_dyc_row_pane

0x941d,	// (0x00086e84) call5_gesture_pane_ParamLimits

0x941d,	// (0x00086e84) call5_gesture_pane

0x9465,	// (0x00086ecc) call5_windows_pane_ParamLimits

0x9465,	// (0x00086ecc) call5_windows_pane

0x9516,	// (0x00086f7d) call5_swipe_1_pane_cp_ParamLimits

0x9516,	// (0x00086f7d) call5_swipe_1_pane_cp

0x9522,	// (0x00086f89) call5_swipe_2_pane_cp_ParamLimits

0x9522,	// (0x00086f89) call5_swipe_2_pane_cp

0xb678,	// (0x000890df) call5_image_pane_cp

0x952e,	// (0x00086f95) popup_call5_audio_first_window_cp_ParamLimits

0x952e,	// (0x00086f95) popup_call5_audio_first_window_cp

0xe08e,	// (0x0008baf5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe08e,	// (0x0008baf5) call5_swipe_1_pane_g1_cp

0xe0bc,	// (0x0008bb23) call5_swipe_1_pane_g2_cp

0xe0a7,	// (0x0008bb0e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe0a7,	// (0x0008bb0e) call5_swipe_1_pane_t1_cp

0xe08e,	// (0x0008baf5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe08e,	// (0x0008baf5) call5_swipe_2_pane_g1_cp

0xe0c4,	// (0x0008bb2b) call5_swipe_2_pane_g2_cp

0xe0cc,	// (0x0008bb33) call5_swipe_2_pane_t1_cp_ParamLimits

0xe0cc,	// (0x0008bb33) call5_swipe_2_pane_t1_cp

0x1497,	// (0x0007eefe) main_sp_fs_email_pane

0xe0e1,	// (0x0008bb48) main_sp_fs_listscroll_pane_te

0x953a,	// (0x00086fa1) popup_sp_fs_action_menu_pane_ParamLimits

0x953a,	// (0x00086fa1) popup_sp_fs_action_menu_pane

0xb6dc,	// (0x00089143) bg_sp_fs_ctrlbar_pane_g1

0xcc66,	// (0x0008a6cd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc78,	// (0x0008a6df) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcc6f,	// (0x0008a6d6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb6dc,	// (0x00089143) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x0008d6ea) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc4f4,	// (0x00089f5b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc4f4,	// (0x00089f5b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe0ea,	// (0x0008bb51) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe0ea,	// (0x0008bb51) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0f6,	// (0x0008bb5d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe0f6,	// (0x0008bb5d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x0008d6f3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x0008d6f3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe102,	// (0x0008bb69) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe102,	// (0x0008bb69) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe11c,	// (0x0008bb83) list_medium_line_t2_right_icon_g1

0xbb20,	// (0x00089587) list_medium_line_t2_right_icon_t1

0xbb20,	// (0x00089587) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x0008d6f8) list_medium_line_t2_right_icon_t

0x2150,	// (0x0007fbb7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2150,	// (0x0007fbb7) bg_sp_fs_ctrlbar_pane

0x95b4,	// (0x0008701b) main_sp_fs_ctrlbar_button_pane_cp01

0x95bc,	// (0x00087023) main_sp_fs_ctrlbar_ddmenu_pane

0xe15c,	// (0x0008bbc3) main_sp_fs_ctrlbar_pane_g1

0xe168,	// (0x0008bbcf) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x0008d6fd) main_sp_fs_ctrlbar_pane_g

0x95f8,	// (0x0008705f) main_sp_fs_ctrlbar_pane_t1

0x9641,	// (0x000870a8) main_sp_fs_ctrlbar_pane

0x9662,	// (0x000870c9) main_sp_fs_listscroll_pane_te_cp01

0x9682,	// (0x000870e9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9682,	// (0x000870e9) popup_sp_fs_action_menu_pane_cp01

0x1497,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1497,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp01

0x96b2,	// (0x00087119) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x96b2,	// (0x00087119) sp_fs_action_menu_list_gene_pane_g1

0xe18f,	// (0x0008bbf6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe18f,	// (0x0008bbf6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x0008d70b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x0008d70b) sp_fs_action_menu_list_gene_pane_g

0x96c1,	// (0x00087128) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x96c1,	// (0x00087128) sp_fs_action_menu_list_gene_pane_t1

0x96d9,	// (0x00087140) sp_fs_action_menu_list_gene_pane_ParamLimits

0x96d9,	// (0x00087140) sp_fs_action_menu_list_gene_pane

0xe19c,	// (0x0008bc03) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe19c,	// (0x0008bc03) popup_sp_fs_action_menu_bg_pane

0x96f8,	// (0x0008715f) sp_fs_action_menu_list_pane_ParamLimits

0x96f8,	// (0x0008715f) sp_fs_action_menu_list_pane

0xe1aa,	// (0x0008bc11) sp_fs_scroll_pane_cp01_ParamLimits

0xe1aa,	// (0x0008bc11) sp_fs_scroll_pane_cp01

0xbb20,	// (0x00089587) list_medium_line_plain_t2_t1

0xbb20,	// (0x00089587) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x0008d6f8) list_medium_line_plain_t2_t

0xbb20,	// (0x00089587) list_medium_line_plain_t3_t1

0xbb20,	// (0x00089587) list_medium_line_plain_t3_t2

0xbb20,	// (0x00089587) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x0008d710) list_medium_line_plain_t3_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g2_g1

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0008cc68) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0008cc68) list_medium_line_x2_t2_g2_g

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t2_g2_t1

0xb721,	// (0x00089188) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0008ccdd) list_medium_line_x2_t2_g2_t

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t4_g2_g1

0xe1d0,	// (0x0008bc37) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe1d0,	// (0x0008bc37) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x0008d717) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x0008d717) list_medium_line_x2_t4_g2_g

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t1

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t2

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t4_g2_t3

0xb721,	// (0x00089188) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0008cc76) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0008cc76) list_medium_line_x2_t4_g2_t

0xe11c,	// (0x0008bb83) list_medium_line_t3_right_iconx2_g1

0xb6dc,	// (0x00089143) list_medium_line_t3_right_iconx2_g2

0xe1e1,	// (0x0008bc48) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x0008d71c) list_medium_line_t3_right_iconx2_g

0xbb20,	// (0x00089587) list_medium_line_t3_right_iconx2_t1

0xbb20,	// (0x00089587) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x0008d6f8) list_medium_line_t3_right_iconx2_t

0xb6f6,	// (0x0008915d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x3_t4_g4_g1

0xb702,	// (0x00089169) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x3_t4_g4_g2

0xb6f6,	// (0x0008915d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x3_t4_g4_g3

0xb702,	// (0x00089169) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x0008d723) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x0008d723) list_medium_line_x3_t4_g4_g

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t1

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t2

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x3_t4_g4_t3

0xe1ea,	// (0x0008bc51) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe1ea,	// (0x0008bc51) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x0008d72c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x0008d72c) list_medium_line_x3_t4_g4_t

0x9718,	// (0x0008717f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9718,	// (0x0008717f) list_single_dyc_row_text_pane_t1

0x974f,	// (0x000871b6) list_single_dyc_row_text_pane_t2_ParamLimits

0x974f,	// (0x000871b6) list_single_dyc_row_text_pane_t2

0xe207,	// (0x0008bc6e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe207,	// (0x0008bc6e) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x0008d735) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x0008d735) list_single_dyc_row_text_pane_t

0xe22b,	// (0x0008bc92) list_single_dyc_row_pane_g1_ParamLimits

0xe22b,	// (0x0008bc92) list_single_dyc_row_pane_g1

0xe237,	// (0x0008bc9e) list_single_dyc_row_pane_g2_ParamLimits

0xe237,	// (0x0008bc9e) list_single_dyc_row_pane_g2

0xe243,	// (0x0008bcaa) list_single_dyc_row_pane_g3_ParamLimits

0xe243,	// (0x0008bcaa) list_single_dyc_row_pane_g3

0xe24f,	// (0x0008bcb6) list_single_dyc_row_pane_g4_ParamLimits

0xe24f,	// (0x0008bcb6) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x0008d742) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x0008d742) list_single_dyc_row_pane_g

0xe25b,	// (0x0008bcc2) list_single_dyc_row_text_pane_ParamLimits

0xe25b,	// (0x0008bcc2) list_single_dyc_row_text_pane

0x3346,	// (0x00080dad) bg_sp_fs_scroll_pane

0xe27a,	// (0x0008bce1) thumb_sp_fs_scroll_pane

0xb6f6,	// (0x0008915d) list_medium_line_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_g1

0xb70e,	// (0x00089175) list_medium_line_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t1

0xb6f6,	// (0x0008915d) list_medium_line_x2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_g1

0xd24e,	// (0x0008acb5) list_medium_line_x2_g2_ParamLimits

0xd24e,	// (0x0008acb5) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0008d41d) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0008d41d) list_medium_line_x2_g

0x1483,	// (0x0007eeea) list_medium_line_x2_t1_ParamLimits

0x1483,	// (0x0007eeea) list_medium_line_x2_t1

0xb6f6,	// (0x0008915d) list_medium_line_x3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x3_g1

0xe283,	// (0x0008bcea) list_medium_line_x3_g2_ParamLimits

0xe283,	// (0x0008bcea) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x0008d74b) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x0008d74b) list_medium_line_x3_g

0xe290,	// (0x0008bcf7) list_medium_line_x3_t1_ParamLimits

0xe290,	// (0x0008bcf7) list_medium_line_x3_t1

0xe2a4,	// (0x0008bd0b) thumb_sp_fs_scroll_pane_g1

0xe2ad,	// (0x0008bd14) thumb_sp_fs_scroll_pane_g2

0xe2b6,	// (0x0008bd1d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0008d750) thumb_sp_fs_scroll_pane_g

0xe2a4,	// (0x0008bd0b) bg_sp_fs_scroll_pane_g1

0xe2ad,	// (0x0008bd14) bg_sp_fs_scroll_pane_g2

0xe2b6,	// (0x0008bd1d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0008d750) bg_sp_fs_scroll_pane_g

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g4_g1

0xb702,	// (0x00089169) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t3_g4_g2

0xb702,	// (0x00089169) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_x2_t3_g4_g3

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0008cc6d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0008cc6d) list_medium_line_x2_t3_g4_g

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g4_t1

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_x2_t3_g4_t2

0xb721,	// (0x00089188) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb721,	// (0x00089188) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0008cc61) list_medium_line_x2_t3_g4_t

0xb6f6,	// (0x0008915d) list_medium_line_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_g2_g1

0xd24e,	// (0x0008acb5) list_medium_line_g2_g2_ParamLimits

0xd24e,	// (0x0008acb5) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0008d41d) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0008d41d) list_medium_line_g2_g

0xb70e,	// (0x00089175) list_medium_line_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_g2_t1

0xb6f6,	// (0x0008915d) list_medium_line_t3_g2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t3_g2_g1

0xd24e,	// (0x0008acb5) list_medium_line_t3_g2_g2_ParamLimits

0xd24e,	// (0x0008acb5) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0008d41d) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0008d41d) list_medium_line_t3_g2_g

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t1

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t2

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x0008d757) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x0008d757) list_medium_line_t3_g2_t

0xe2bf,	// (0x0008bd26) list_medium_line_right_icon_g1

0xbb20,	// (0x00089587) list_medium_line_right_icon_t1

0xb6f6,	// (0x0008915d) list_medium_line_t2_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t2_g1

0xb70e,	// (0x00089175) list_medium_line_t2_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_t1

0xb70e,	// (0x00089175) list_medium_line_t2_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0008d422) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0008d422) list_medium_line_t2_t

0xb6f6,	// (0x0008915d) list_medium_line_t3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t3_g1

0xb70e,	// (0x00089175) list_medium_line_t3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_t1

0xb70e,	// (0x00089175) list_medium_line_t3_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_t2

0xb70e,	// (0x00089175) list_medium_line_t3_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x0008d757) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x0008d757) list_medium_line_t3_t

0xb6f6,	// (0x0008915d) list_medium_line_g3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_g3_g1

0xb702,	// (0x00089169) list_medium_line_g3_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_g3_g2

0xb702,	// (0x00089169) list_medium_line_g3_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x0008d75e) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x0008d75e) list_medium_line_g3_g

0xb70e,	// (0x00089175) list_medium_line_g3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_g3_t1

0xb6f6,	// (0x0008915d) list_medium_line_t2_g3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t2_g3_g1

0xb702,	// (0x00089169) list_medium_line_t2_g3_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_t2_g3_g2

0xb702,	// (0x00089169) list_medium_line_t2_g3_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x0008d75e) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x0008d75e) list_medium_line_t2_g3_g

0xb70e,	// (0x00089175) list_medium_line_t2_g3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_g3_t1

0xb70e,	// (0x00089175) list_medium_line_t2_g3_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0008d422) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0008d422) list_medium_line_t2_g3_t

0xb6f6,	// (0x0008915d) list_medium_line_t3_g3_g1_ParamLimits

0xb6f6,	// (0x0008915d) list_medium_line_t3_g3_g1

0xb702,	// (0x00089169) list_medium_line_t3_g3_g2_ParamLimits

0xb702,	// (0x00089169) list_medium_line_t3_g3_g2

0xb702,	// (0x00089169) list_medium_line_t3_g3_g3_ParamLimits

0xb702,	// (0x00089169) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x0008d75e) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x0008d75e) list_medium_line_t3_g3_g

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t1_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t1

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t2_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t2

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t3_ParamLimits

0xb70e,	// (0x00089175) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x0008d757) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x0008d757) list_medium_line_t3_g3_t

0xe11c,	// (0x0008bb83) list_medium_line_right_iconx2_g1

0xe11c,	// (0x0008bb83) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0008d765) list_medium_line_right_iconx2_g

0xbb2f,	// (0x00089596) list_medium_line_right_iconx2_t1

0xe11c,	// (0x0008bb83) list_medium_line_t2_right_iconx2_g1

0xe11c,	// (0x0008bb83) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0008d765) list_medium_line_t2_right_iconx2_g

0xbb20,	// (0x00089587) list_medium_line_t2_right_iconx2_t1

0xbb20,	// (0x00089587) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x0008d6f8) list_medium_line_t2_right_iconx2_t

0xbb20,	// (0x00089587) list_medium_line_x4_t4_t1

0xbb20,	// (0x00089587) list_medium_line_x4_t4_t2

0xbb20,	// (0x00089587) list_medium_line_x4_t4_t3

0xbb20,	// (0x00089587) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0008cd2f) list_medium_line_x4_t4_t

0x98ab,	// (0x00087312) tport_appsw_pane_ParamLimits

0x98ab,	// (0x00087312) tport_appsw_pane

0x98bc,	// (0x00087323) tport_contact_pane_ParamLimits

0x98bc,	// (0x00087323) tport_contact_pane

0x98d0,	// (0x00087337) tport_listscroll_pane_ParamLimits

0x98d0,	// (0x00087337) tport_listscroll_pane

0x98e8,	// (0x0008734f) cell_tport_appsw_pane_ParamLimits

0x98e8,	// (0x0008734f) cell_tport_appsw_pane

0x217e,	// (0x0007fbe5) tport_appsw_pane_g1_ParamLimits

0x217e,	// (0x0007fbe5) tport_appsw_pane_g1

0xe2c8,	// (0x0008bd2f) tport_contact_pane_g1

0xe2d1,	// (0x0008bd38) tport_contact_pane_t1

0xe2df,	// (0x0008bd46) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x0008d76a) tport_contact_pane_t

0xe2ed,	// (0x0008bd54) list_tport_pane

0xb566,	// (0x00088fcd) scroll_pane_cp_030

0xe2fe,	// (0x0008bd65) cell_tport_appsw_pane_g1

0xe30e,	// (0x0008bd75) cell_tport_appsw_pane_t1

0xe31c,	// (0x0008bd83) grid_highlight_pane_cp019

0x991e,	// (0x00087385) list_tport_double_graphic_pane_ParamLimits

0x991e,	// (0x00087385) list_tport_double_graphic_pane

0x1497,	// (0x0007eefe) list_highlight_pane_cp023_ParamLimits

0x1497,	// (0x0007eefe) list_highlight_pane_cp023

0x992b,	// (0x00087392) list_tport_double_graphic_pane_g1_ParamLimits

0x992b,	// (0x00087392) list_tport_double_graphic_pane_g1

0x9938,	// (0x0008739f) list_tport_double_graphic_pane_t1_ParamLimits

0x9938,	// (0x0008739f) list_tport_double_graphic_pane_t1

0x994d,	// (0x000873b4) list_tport_double_graphic_pane_t2_ParamLimits

0x994d,	// (0x000873b4) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x0008d776) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x0008d776) list_tport_double_graphic_pane_t

0x3346,	// (0x00080dad) main_cale_note_pane

0x78da,	// (0x00085341) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x78da,	// (0x00085341) cell_vitu2_function_top_wide_pane_cp01

0x90c0,	// (0x00086b27) wait_bar_pane_cp05_ParamLimits

0x1497,	// (0x0007eefe) listscroll_cmail_pane

0xe324,	// (0x0008bd8b) list_cmail_pane

0x995f,	// (0x000873c6) list_cmail_body_pane

0x995f,	// (0x000873c6) list_single_cmail_header_caption_pane

0x9976,	// (0x000873dd) list_single_cmail_header_detail_pane_ParamLimits

0x9976,	// (0x000873dd) list_single_cmail_header_detail_pane

0xe340,	// (0x0008bda7) list_single_cmail_header_caption_pane_t1

0x999f,	// (0x00087406) list_single_cmail_header_detail_pane_g1_ParamLimits

0x999f,	// (0x00087406) list_single_cmail_header_detail_pane_g1

0xe34e,	// (0x0008bdb5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe34e,	// (0x0008bdb5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x0008d77b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x0008d77b) list_single_cmail_header_detail_pane_g

0x99b5,	// (0x0008741c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x99b5,	// (0x0008741c) list_single_cmail_header_detail_pane_t1

0xe38b,	// (0x0008bdf2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe38b,	// (0x0008bdf2) list_single_cmail_header_editor_pane_bg

0xe3a2,	// (0x0008be09) list_cmail_body_pane_g1

0xe3ab,	// (0x0008be12) list_cmail_body_pane_t1

0xd012,	// (0x0008aa79) list_single_cmail_header_editor_pane_bg_g1

0xb938,	// (0x0008939f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd022,	// (0x0008aa89) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd01a,	// (0x0008aa81) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd246,	// (0x0008acad) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd042,	// (0x0008aaa9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd032,	// (0x0008aa99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd03a,	// (0x0008aaa1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb918,	// (0x0008937f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x99f1,	// (0x00087458) calenote_gesture_pane_ParamLimits

0x99f1,	// (0x00087458) calenote_gesture_pane

0x9a0d,	// (0x00087474) calenote_window_pane_ParamLimits

0x9a0d,	// (0x00087474) calenote_window_pane

0xe3b9,	// (0x0008be20) popup_note_window_cp01

0x9a29,	// (0x00087490) calenote_swipe_1_pane_ParamLimits

0x9a29,	// (0x00087490) calenote_swipe_1_pane

0x9522,	// (0x00086f89) calenote_swipe_2_pane_ParamLimits

0x9522,	// (0x00086f89) calenote_swipe_2_pane

0xe08e,	// (0x0008baf5) calenote_swipe_1_pane_g1_ParamLimits

0xe08e,	// (0x0008baf5) calenote_swipe_1_pane_g1

0xe09b,	// (0x0008bb02) calenote_swipe_1_pane_g2_ParamLimits

0xe09b,	// (0x0008bb02) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x0008d6e0) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x0008d6e0) calenote_swipe_1_pane_g

0xe3cb,	// (0x0008be32) calenote_swipe_1_pane_t1_ParamLimits

0xe3cb,	// (0x0008be32) calenote_swipe_1_pane_t1

0xe08e,	// (0x0008baf5) calenote_swipe_2_pane_g1_ParamLimits

0xe08e,	// (0x0008baf5) calenote_swipe_2_pane_g1

0xe3ea,	// (0x0008be51) calenote_swipe_2_pane_g2_ParamLimits

0xe3ea,	// (0x0008be51) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x0008d787) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x0008d787) calenote_swipe_2_pane_g

0xe3f6,	// (0x0008be5d) calenote_swipe_2_pane_t1_ParamLimits

0xe3f6,	// (0x0008be5d) calenote_swipe_2_pane_t1

0x3346,	// (0x00080dad) main_mup_navstr_pane

0x69f2,	// (0x00084459) main_mup3_pane_t7_ParamLimits

0x69f2,	// (0x00084459) main_mup3_pane_t7

0xec6c,	// (0x0008c6d3) main_mp4_pane_g6_ParamLimits

0xec6c,	// (0x0008c6d3) main_mp4_pane_g6

0xee1e,	// (0x0008c885) main_image3_pane_t4_ParamLimits

0xee1e,	// (0x0008c885) main_image3_pane_t4

0x9a3e,	// (0x000874a5) popup_navstr_preview_pane_ParamLimits

0x9a3e,	// (0x000874a5) popup_navstr_preview_pane

0x9a4e,	// (0x000874b5) scroll_navstr_pane_ParamLimits

0x9a4e,	// (0x000874b5) scroll_navstr_pane

0x3346,	// (0x00080dad) bg_popup_preview_window_pane_cp04

0xe41d,	// (0x0008be84) popup_navstr_preview_pane_t1

0x9a62,	// (0x000874c9) scroll_navstr_pane_g1_ParamLimits

0x9a62,	// (0x000874c9) scroll_navstr_pane_g1

0x9a76,	// (0x000874dd) scroll_navstr_pane_t1_ParamLimits

0x9a76,	// (0x000874dd) scroll_navstr_pane_t1

0xe3c2,	// (0x0008be29) bg_button_pane_cp014

0xe3c2,	// (0x0008be29) bg_button_pane_cp030

0x93c3,	// (0x00086e2a) list_double_fisheye_pane_g4_ParamLimits

0x93c3,	// (0x00086e2a) list_double_fisheye_pane_g4

0x93cf,	// (0x00086e36) list_double_fisheye_pane_g5_ParamLimits

0x93cf,	// (0x00086e36) list_double_fisheye_pane_g5

0xe334,	// (0x0008bd9b) sp_fs_scroll_pane_cp03

0xe15c,	// (0x0008bbc3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe168,	// (0x0008bbcf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x0008d6fd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x95f8,	// (0x0008705f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe32c,	// (0x0008bd93) sp_fs_scroll_pane_cp02

0xb5c0,	// (0x00089027) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb5c0,	// (0x00089027) popup_sp_fs_calendar_preview_list_single_pane

0x3346,	// (0x00080dad) main_cam6_pano_pane

0xea89,	// (0x0008c4f0) main_mup3_pane_ParamLimits

0x3346,	// (0x00080dad) main_phacti_pane

0x8fb3,	// (0x00086a1a) bg_button_pane_cp11

0x8fcb,	// (0x00086a32) main_mobtv_info_pane_g2_ParamLimits

0x8fcb,	// (0x00086a32) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x0008d65d) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x0008d65d) main_mobtv_info_pane_g

0x9180,	// (0x00086be7) sc_clock_pane_t5_ParamLimits

0x9180,	// (0x00086be7) sc_clock_pane_t5

0x922b,	// (0x00086c92) main_radioblah_pane_g1_ParamLimits

0xdfd1,	// (0x0008ba38) main_radioblah_pane_t3_ParamLimits

0xdfd1,	// (0x0008ba38) main_radioblah_pane_t3

0xdfe9,	// (0x0008ba50) main_radioblah_pane_t4_ParamLimits

0xdfe9,	// (0x0008ba50) main_radioblah_pane_t4

0x9253,	// (0x00086cba) main_radioblah_text_pane_ParamLimits

0x9253,	// (0x00086cba) main_radioblah_text_pane

0x9265,	// (0x00086ccc) main_radioblah_info_pane_g1_ParamLimits

0x92f8,	// (0x00086d5f) main_radioblah_info_pane_t4_ParamLimits

0x92f8,	// (0x00086d5f) main_radioblah_info_pane_t4

0x1497,	// (0x0007eefe) main_sp_fs_calendar_pane

0x9a8c,	// (0x000874f3) main_phacti_pane_g1

0x9a94,	// (0x000874fb) phacti_note_pane_ParamLimits

0x9a94,	// (0x000874fb) phacti_note_pane

0xe434,	// (0x0008be9b) phacti_term_pane_ParamLimits

0xe434,	// (0x0008be9b) phacti_term_pane

0xe449,	// (0x0008beb0) phacti_note_pane_t1_ParamLimits

0xe449,	// (0x0008beb0) phacti_note_pane_t1

0xe460,	// (0x0008bec7) phacti_term_pane_g1

0xe468,	// (0x0008becf) phacti_term_pane_t1_ParamLimits

0xe468,	// (0x0008becf) phacti_term_pane_t1

0xe492,	// (0x0008bef9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe49a,	// (0x0008bf01) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x0008d791) popup_sp_fs_calendar_preview_list_single_pane_g

0xe4a2,	// (0x0008bf09) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe4a2,	// (0x0008bf09) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe4b8,	// (0x0008bf1f) aid_popup_sp_fs_bg_corner_pane

0xb6dc,	// (0x00089143) popup_sp_fs_calendar_preview_bg_pane_g1

0x3346,	// (0x00080dad) popup_sp_fs_calendar_preview_bg_pane

0xe4c0,	// (0x0008bf27) popup_sp_fs_calendar_preview_list_pane

0x2150,	// (0x0007fbb7) bg_main_sp_fs_cale_pane_ParamLimits

0x2150,	// (0x0007fbb7) bg_main_sp_fs_cale_pane

0xe4d1,	// (0x0008bf38) listscroll_cale_mrui_pane_ParamLimits

0xe4d1,	// (0x0008bf38) listscroll_cale_mrui_pane

0xe4e6,	// (0x0008bf4d) listscroll_sp_fs_schedule_track_pane

0xe4ef,	// (0x0008bf56) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe4ef,	// (0x0008bf56) main_sp_fs_ctrlbar_pane_cp01

0xe502,	// (0x0008bf69) main_sp_fs_ribbon_pane

0xe50a,	// (0x0008bf71) popup_sp_fs_cale_preview_window

0x9af7,	// (0x0008755e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9af7,	// (0x0008755e) list_single_sp_fs_schedule_track_pane

0x1497,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1497,	// (0x0007eefe) bg_sp_fs_highlight_list_pane_cp03

0x9b0b,	// (0x00087572) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b0b,	// (0x00087572) list_single_sp_fs_schedule_track_pane_g1

0x9b17,	// (0x0008757e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b17,	// (0x0008757e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x0008d796) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x0008d796) list_single_sp_fs_schedule_track_pane_g

0x9b23,	// (0x0008758a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b23,	// (0x0008758a) list_single_sp_fs_schedule_track_pane_t1

0x9b3d,	// (0x000875a4) sp_fs_schedule_track_pane_ParamLimits

0x9b3d,	// (0x000875a4) sp_fs_schedule_track_pane

0xe51c,	// (0x0008bf83) sp_fs_schedule_track_pane_g1

0xe524,	// (0x0008bf8b) sp_fs_schedule_track_pane_g2

0xe52c,	// (0x0008bf93) sp_fs_schedule_track_pane_g3

0xe534,	// (0x0008bf9b) sp_fs_schedule_track_pane_g4

0xe53c,	// (0x0008bfa3) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x0008d79b) sp_fs_schedule_track_pane_g

0xd012,	// (0x0008aa79) bg_sp_fs_schedule_viewer_highlight_g1

0xb938,	// (0x0008939f) bg_sp_fs_schedule_viewer_highlight_g2

0xd01a,	// (0x0008aa81) bg_sp_fs_schedule_viewer_highlight_g3

0xd022,	// (0x0008aa89) bg_sp_fs_schedule_viewer_highlight_g4

0xd246,	// (0x0008acad) bg_sp_fs_schedule_viewer_highlight_g5

0xd032,	// (0x0008aa99) bg_sp_fs_schedule_viewer_highlight_g6

0xd03a,	// (0x0008aaa1) bg_sp_fs_schedule_viewer_highlight_g7

0xd042,	// (0x0008aaa9) bg_sp_fs_schedule_viewer_highlight_g8

0xb918,	// (0x0008937f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x0008d7a6) bg_sp_fs_schedule_viewer_highlight_g

0x3346,	// (0x00080dad) bg_main_sp_fs_ribbon_pane

0x9b4e,	// (0x000875b5) main_sp_fs_ribbon_pane_g1

0xe544,	// (0x0008bfab) main_sp_fs_ribbon_pane_t1

0x9b57,	// (0x000875be) main_sp_fs_ribbon_pane_t2

0xe553,	// (0x0008bfba) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x0008d7b9) main_sp_fs_ribbon_pane_t

0xe562,	// (0x0008bfc9) main_sp_fs_ribbon_scheduler_pane

0xe56a,	// (0x0008bfd1) bg_main_sp_fs_ribbon_pane_g1

0xe573,	// (0x0008bfda) bg_main_sp_fs_ribbon_pane_g2

0xe57c,	// (0x0008bfe3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x0008d7c0) bg_main_sp_fs_ribbon_pane_g

0xe584,	// (0x0008bfeb) main_sp_fs_ribbon_scheduler_pane_g1

0xe58d,	// (0x0008bff4) main_sp_fs_ribbon_scheduler_pane_g2

0xe596,	// (0x0008bffd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x0008d7c7) main_sp_fs_ribbon_scheduler_pane_g

0xe59f,	// (0x0008c006) list_cale_mrui_pane

0x9b66,	// (0x000875cd) sp_fs_scroll_pane_cp07_ParamLimits

0x9b66,	// (0x000875cd) sp_fs_scroll_pane_cp07

0x9b7e,	// (0x000875e5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9b7e,	// (0x000875e5) bg_sp_fs_schedule_viewer_highlight

0xe5ac,	// (0x0008c013) list_single_sp_fs_schedule_track_pane_cp01

0xe5b4,	// (0x0008c01b) list_sp_fs_schedule_track_pane

0xe5bc,	// (0x0008c023) sp_fs_scroll_pane_cp06_ParamLimits

0xe5bc,	// (0x0008c023) sp_fs_scroll_pane_cp06

0xb6dc,	// (0x00089143) bgmain_sp_fs_calendar_pane_g1

0x9b8e,	// (0x000875f5) list_single_cale_mrui_pane_ParamLimits

0x9b8e,	// (0x000875f5) list_single_cale_mrui_pane

0xe5ce,	// (0x0008c035) list_single_cale_mrui_row_pane_ParamLimits

0xe5ce,	// (0x0008c035) list_single_cale_mrui_row_pane

0x9bae,	// (0x00087615) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9bae,	// (0x00087615) list_single_cale_mrui_row_pane_g1

0x9be6,	// (0x0008764d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9be6,	// (0x0008764d) list_single_cale_mrui_row_pane_t1

0x9bf8,	// (0x0008765f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9bf8,	// (0x0008765f) list_single_cale_mrui_row_pane_t2

0x9c5e,	// (0x000876c5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9c5e,	// (0x000876c5) list_single_cale_mrui_row_pane_t3

0x9c8d,	// (0x000876f4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9c8d,	// (0x000876f4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x0008d7d5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x0008d7d5) list_single_cale_mrui_row_pane_t

0x9cbc,	// (0x00087723) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9cbc,	// (0x00087723) list_single_cmail_header_editor_pane_bg_cp01

0x9ce0,	// (0x00087747) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9ce0,	// (0x00087747) list_single_cmail_header_editor_pane_bg_cp02

0x9cfe,	// (0x00087765) main_radioblah_text_pane_t1_ParamLimits

0x9cfe,	// (0x00087765) main_radioblah_text_pane_t1

0xe5f1,	// (0x0008c058) cam6_indi_pane_cp01

0xe5f9,	// (0x0008c060) cam6_mode_pane_cp01

0xe601,	// (0x0008c068) cam6_pano_pane

0xe60a,	// (0x0008c071) cam6_zoom_pane_cp01

0xe612,	// (0x0008c079) cam6_pano_image_pane

0xe61b,	// (0x0008c082) cam6_pano_pane_g1

0xdd38,	// (0x0008b79f) cam6_pano_pane_g2

0xe624,	// (0x0008c08b) cam6_pano_pane_g3

0xe62d,	// (0x0008c094) cam6_pano_pane_g4

0xcc53,	// (0x0008a6ba) cam6_pano_pane_g5

0xe636,	// (0x0008c09d) cam6_pano_pane_g6

0xe63e,	// (0x0008c0a5) cam6_pano_pane_g7

0xe646,	// (0x0008c0ad) cam6_pano_pane_g8

0xe64f,	// (0x0008c0b6) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x0008d7de) cam6_pano_pane_g

0x3346,	// (0x00080dad) main_browser_tag_pane

0xe415,	// (0x0008be7c) grid_navstr_albumart_pane

0xe658,	// (0x0008c0bf) cell_navstr_albumart_pane_ParamLimits

0xe658,	// (0x0008c0bf) cell_navstr_albumart_pane

0x1532,	// (0x0007ef99) cell_navstr_albumart_pane_g1

0xc0e5,	// (0x00089b4c) cell_navstr_albumart_pane_g2

0xc0f5,	// (0x00089b5c) cell_navstr_albumart_pane_g3

0xc0ed,	// (0x00089b54) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x0008d7f1) cell_navstr_albumart_pane_g

0x9d17,	// (0x0008777e) bt_list_pane_ParamLimits

0x9d17,	// (0x0008777e) bt_list_pane

0x9d2a,	// (0x00087791) bt_list_pane_t1

0x9d39,	// (0x000877a0) bt_list_pane_t2

0x0001,

0xfd93,	// (0x0008d7fa) bt_list_pane_t

0x3346,	// (0x00080dad) main_cale_prevew_pane

0x9d48,	// (0x000877af) popup_cale_preview_window_ParamLimits

0x9d48,	// (0x000877af) popup_cale_preview_window

0x1497,	// (0x0007eefe) bg_popup_preview_window_pane_cp05_ParamLimits

0x1497,	// (0x0007eefe) bg_popup_preview_window_pane_cp05

0xe66f,	// (0x0008c0d6) list_cale_preview_pane_ParamLimits

0xe66f,	// (0x0008c0d6) list_cale_preview_pane

0x9d5d,	// (0x000877c4) list_double_cale_preview_pane_ParamLimits

0x9d5d,	// (0x000877c4) list_double_cale_preview_pane

0x9d6e,	// (0x000877d5) list_single_cale_preview_pane_ParamLimits

0x9d6e,	// (0x000877d5) list_single_cale_preview_pane

0xe67b,	// (0x0008c0e2) list_single_cale_preview_pane_g1

0xe683,	// (0x0008c0ea) list_single_cale_preview_pane_t1_ParamLimits

0xe683,	// (0x0008c0ea) list_single_cale_preview_pane_t1

0x9d82,	// (0x000877e9) list_double_cale_preview_pane_g1

0x9d8a,	// (0x000877f1) list_double_cale_preview_pane_t1_ParamLimits

0x9d8a,	// (0x000877f1) list_double_cale_preview_pane_t1

0x9d9f,	// (0x00087806) list_double_cale_preview_pane_t2_ParamLimits

0x9d9f,	// (0x00087806) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x0008d7ff) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x0008d7ff) list_double_cale_preview_pane_t

0x3346,	// (0x00080dad) main_ezdial_pane

0x1497,	// (0x0007eefe) main_sp_fs_email_pane_ParamLimits

0x956e,	// (0x00086fd5) cmail_ddmenu_btn01_pane_ParamLimits

0x956e,	// (0x00086fd5) cmail_ddmenu_btn01_pane

0x9581,	// (0x00086fe8) cmail_ddmenu_btn02_pane_ParamLimits

0x9581,	// (0x00086fe8) cmail_ddmenu_btn02_pane

0x95a4,	// (0x0008700b) cmail_ddmenu_btn03_pane_ParamLimits

0x95a4,	// (0x0008700b) cmail_ddmenu_btn03_pane

0x9641,	// (0x000870a8) main_sp_fs_ctrlbar_pane_ParamLimits

0x9662,	// (0x000870c9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x995f,	// (0x000873c6) list_cmail_body_pane_ParamLimits

0x153a,	// (0x0007efa1) bg_button_pane_cp12

0xe35a,	// (0x0008bdc1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe35a,	// (0x0008bdc1) list_single_cmail_header_detail_pane_g3

0xe367,	// (0x0008bdce) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe367,	// (0x0008bdce) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x0008d782) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x0008d782) list_single_cmail_header_detail_pane_t

0xe47d,	// (0x0008bee4) phacti_term_pane_t2_ParamLimits

0xe47d,	// (0x0008bee4) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x0008d78c) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x0008d78c) phacti_term_pane_t

0xe698,	// (0x0008c0ff) aid_size_list_single_double

0x9db7,	// (0x0008781e) popup_ezdial_listscroll_window

0x9dcd,	// (0x00087834) popup_number_entry_window_cp01

0xb678,	// (0x000890df) bg_popup_call_pane_cp09

0xe6a4,	// (0x0008c10b) ezdial_list_pane

0xe6ac,	// (0x0008c113) scroll_pane_cp23

0x2150,	// (0x0007fbb7) bg_button_pane_cp028_ParamLimits

0x2150,	// (0x0007fbb7) bg_button_pane_cp028

0x9dd9,	// (0x00087840) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9dd9,	// (0x00087840) cmail_ddmenu_btn01_pane_g1

0x9de5,	// (0x0008784c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9de5,	// (0x0008784c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x0008d804) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x0008d804) cmail_ddmenu_btn01_pane_g

0xe6b4,	// (0x0008c11b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe6b4,	// (0x0008c11b) cmail_ddmenu_btn01_pane_t1

0x2150,	// (0x0007fbb7) bg_button_pane_cp029_ParamLimits

0x2150,	// (0x0007fbb7) bg_button_pane_cp029

0x9df1,	// (0x00087858) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9df1,	// (0x00087858) cmail_ddmenu_btn02_pane_g1

0x9e09,	// (0x00087870) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e09,	// (0x00087870) cmail_ddmenu_btn02_pane_t1

0x1497,	// (0x0007eefe) bg_button_pane_cp031_ParamLimits

0x1497,	// (0x0007eefe) bg_button_pane_cp031

0x9df1,	// (0x00087858) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9df1,	// (0x00087858) cmail_ddmenu_btn03_pane_g1

0x9e09,	// (0x00087870) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e09,	// (0x00087870) cmail_ddmenu_btn03_pane_t1

0x1483,	// (0x0007eeea) cell_dialer2_keypad_pane_t1_ParamLimits

0xcc81,	// (0x0008a6e8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcc81,	// (0x0008a6e8) cell_dialer2_keypad_pane_t1_copy1

0x8e1f,	// (0x00086886) ncimui_group_button_pane

0x1497,	// (0x0007eefe) main_sp_fs_calendar_pane_ParamLimits

0x995f,	// (0x000873c6) list_single_cmail_header_caption_pane_ParamLimits

0xe4c8,	// (0x0008bf2f) aid_recal_txt_sm_pane

0x3346,	// (0x00080dad) mian_recal_day_pane

0xe50a,	// (0x0008bf71) popup_sp_fs_cale_preview_window_ParamLimits

0xe6c9,	// (0x0008c130) list_recal_day_pane

0xe70b,	// (0x0008c172) list_single_recal_day_pane_ParamLimits

0xe70b,	// (0x0008c172) list_single_recal_day_pane

0xe71d,	// (0x0008c184) list_single_recal_day_pane_g1_ParamLimits

0xe71d,	// (0x0008c184) list_single_recal_day_pane_g1

0xe729,	// (0x0008c190) list_single_recal_day_pane_g2_ParamLimits

0xe729,	// (0x0008c190) list_single_recal_day_pane_g2

0xe735,	// (0x0008c19c) list_single_recal_day_pane_g3_ParamLimits

0xe735,	// (0x0008c19c) list_single_recal_day_pane_g3

0x9e2d,	// (0x00087894) list_single_recal_day_pane_g4_ParamLimits

0x9e2d,	// (0x00087894) list_single_recal_day_pane_g4

0xe741,	// (0x0008c1a8) list_single_recal_day_pane_g5_ParamLimits

0xe741,	// (0x0008c1a8) list_single_recal_day_pane_g5

0x9e45,	// (0x000878ac) list_single_recal_day_pane_g6_ParamLimits

0x9e45,	// (0x000878ac) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x0008d813) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x0008d813) list_single_recal_day_pane_g

0xe755,	// (0x0008c1bc) list_single_recal_day_pane_t1

0x9e51,	// (0x000878b8) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x0008d81e) list_single_recal_day_pane_t

0x9e63,	// (0x000878ca) ncimui_query_button_pane_ParamLimits

0x9e63,	// (0x000878ca) ncimui_query_button_pane

0x9e73,	// (0x000878da) ncimui_query_button_pane_t1_ParamLimits

0x9e73,	// (0x000878da) ncimui_query_button_pane_t1

0xe767,	// (0x0008c1ce) ncimui_query_button_pane_t2_ParamLimits

0xe767,	// (0x0008c1ce) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x0008d823) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x0008d823) ncimui_query_button_pane_t

0x9e86,	// (0x000878ed) query_button_pane_ParamLimits

0x9e86,	// (0x000878ed) query_button_pane

0x3346,	// (0x00080dad) bg_button_pane_cp0028

0xe77a,	// (0x0008c1e1) query_button_pane_t1

0x5e17,	// (0x0008387e) main_tport_pane_ParamLimits

0x9872,	// (0x000872d9) bg_popup_window_pane_cp01_ParamLimits

0x9872,	// (0x000872d9) bg_popup_window_pane_cp01

0x9889,	// (0x000872f0) heading_pane_cp08_ParamLimits

0x9889,	// (0x000872f0) heading_pane_cp08

0x989a,	// (0x00087301) heading_pane_cp07_ParamLimits

0x989a,	// (0x00087301) heading_pane_cp07

0xe2fe,	// (0x0008bd65) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x0008d76f) cell_tport_appsw_pane_g

0xbbe1,	// (0x00089648) input_candi_list_open_g1

0xbb13,	// (0x0008957a) list_cale_time_pane_g6_ParamLimits

0xbb13,	// (0x0008957a) list_cale_time_pane_g6

0x6483,	// (0x00083eea) aid_size_touch_calib_1_ParamLimits

0x6483,	// (0x00083eea) aid_size_touch_calib_1

0x6495,	// (0x00083efc) aid_size_touch_calib_2_ParamLimits

0x6495,	// (0x00083efc) aid_size_touch_calib_2

0x64ab,	// (0x00083f12) aid_size_touch_calib_3_ParamLimits

0x64ab,	// (0x00083f12) aid_size_touch_calib_3

0x64c3,	// (0x00083f2a) aid_size_touch_calib_4_ParamLimits

0x64c3,	// (0x00083f2a) aid_size_touch_calib_4

0x64d7,	// (0x00083f3e) main_touch_calib_button_group_pane_ParamLimits

0x64d7,	// (0x00083f3e) main_touch_calib_button_group_pane

0x64ef,	// (0x00083f56) main_touch_calib_pane_g1_ParamLimits

0x6501,	// (0x00083f68) main_touch_calib_pane_g2_ParamLimits

0x6513,	// (0x00083f7a) main_touch_calib_pane_g3_ParamLimits

0x6525,	// (0x00083f8c) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0008d16a) main_touch_calib_pane_g_ParamLimits

0x6537,	// (0x00083f9e) main_touch_calib_pane_t1_ParamLimits

0x654f,	// (0x00083fb6) main_touch_calib_pane_t2_ParamLimits

0x6567,	// (0x00083fce) main_touch_calib_pane_t3_ParamLimits

0x6579,	// (0x00083fe0) main_touch_calib_pane_t4_ParamLimits

0x658b,	// (0x00083ff2) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x0008d173) main_touch_calib_pane_t_ParamLimits

0xca56,	// (0x0008a4bd) list_single_fp_cale_pane_g3_ParamLimits

0xca56,	// (0x0008a4bd) list_single_fp_cale_pane_g3

0xea89,	// (0x0008c4f0) bg_button_pane_cp012_ParamLimits

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp03_ParamLimits

0x8084,	// (0x00085aeb) cell_vitu2_function_top_pane_g1_ParamLimits

0xea89,	// (0x0008c4f0) bg_vkb2_func_pane_cp04_ParamLimits

0x8daf,	// (0x00086816) main_ncimui_button_group_pane_ParamLimits

0x8daf,	// (0x00086816) main_ncimui_button_group_pane

0x8e0d,	// (0x00086874) main_ncimui_pane_t3_ParamLimits

0x8e0d,	// (0x00086874) main_ncimui_pane_t3

0xe42b,	// (0x0008be92) phacti_button_group_pane

0xe698,	// (0x0008c0ff) aid_size_list_single_double_ParamLimits

0x9db7,	// (0x0008781e) popup_ezdial_listscroll_window_ParamLimits

0x9dcd,	// (0x00087834) popup_number_entry_window_cp01_ParamLimits

0x9e98,	// (0x000878ff) phacti_button_pane_ParamLimits

0x9e98,	// (0x000878ff) phacti_button_pane

0x3346,	// (0x00080dad) bg_button_pane_cp14

0xe788,	// (0x0008c1ef) phacti_button_pane_t1

0x9ea7,	// (0x0008790e) main_touch_calib_button_pane_ParamLimits

0x9ea7,	// (0x0008790e) main_touch_calib_button_pane

0xb413,	// (0x00088e7a) bg_button_pane_cp18_ParamLimits

0xb413,	// (0x00088e7a) bg_button_pane_cp18

0x9ec2,	// (0x00087929) main_touch_calib_button_pane_t1_ParamLimits

0x9ec2,	// (0x00087929) main_touch_calib_button_pane_t1

0x9ed8,	// (0x0008793f) main_touch_calib_button_pane_t2_ParamLimits

0x9ed8,	// (0x0008793f) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x0008d828) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x0008d828) main_touch_calib_button_pane_t

0x3346,	// (0x00080dad) cell_ncimui_button_pane

0x3346,	// (0x00080dad) bg_button_pane_cp032

0xe796,	// (0x0008c1fd) cell_ncimui_button_pane_t1

0xedfe,	// (0x0008c865) image3_infobar_pane_ParamLimits

0xedfe,	// (0x0008c865) image3_infobar_pane

0x91a8,	// (0x00086c0f) fs_bigclock_status_pane_ParamLimits

0x91a8,	// (0x00086c0f) fs_bigclock_status_pane

0x91b5,	// (0x00086c1c) main_fs_bigclock_clock_pane_ParamLimits

0x91b5,	// (0x00086c1c) main_fs_bigclock_clock_pane

0x91d7,	// (0x00086c3e) main_fs_bigclock_indi_pane_ParamLimits

0x91d7,	// (0x00086c3e) main_fs_bigclock_indi_pane

0x9201,	// (0x00086c68) main_fs_bigclock_swipe_pane_ParamLimits

0x9201,	// (0x00086c68) main_fs_bigclock_swipe_pane

0x3346,	// (0x00080dad) main_fs_clock_dumped_data

0xde45,	// (0x0008b8ac) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xde45,	// (0x0008b8ac) list_single_fs_bigclock_indicator_pane_g1

0xde5f,	// (0x0008b8c6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xde5f,	// (0x0008b8c6) list_single_fs_bigclock_indicator_pane_g2

0xde79,	// (0x0008b8e0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xde79,	// (0x0008b8e0) list_single_fs_bigclock_indicator_pane_g3

0xde93,	// (0x0008b8fa) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xde93,	// (0x0008b8fa) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0008d691) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0008d691) list_single_fs_bigclock_indicator_pane_g

0xdebc,	// (0x0008b923) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdebc,	// (0x0008b923) list_single_fs_bigclock_indicator_pane_t1

0xdee4,	// (0x0008b94b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdee4,	// (0x0008b94b) list_single_fs_bigclock_indicator_pane_t2

0xdf0c,	// (0x0008b973) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf0c,	// (0x0008b973) list_single_fs_bigclock_indicator_pane_t3

0xdf34,	// (0x0008b99b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf34,	// (0x0008b99b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x0008d69c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x0008d69c) list_single_fs_bigclock_indicator_pane_t

0xe7a4,	// (0x0008c20b) image3_infobar_fav_pane_ParamLimits

0xe7a4,	// (0x0008c20b) image3_infobar_fav_pane

0xe7b4,	// (0x0008c21b) image3_infobar_loc_pane_ParamLimits

0xe7b4,	// (0x0008c21b) image3_infobar_loc_pane

0xe7c8,	// (0x0008c22f) image3_infobar_time_pane_ParamLimits

0xe7c8,	// (0x0008c22f) image3_infobar_time_pane

0xb6dc,	// (0x00089143) image3_infobar_time_pane_g1

0xe7d8,	// (0x0008c23f) image3_infobar_time_pane_t1

0xb6dc,	// (0x00089143) image3_infobar_loc_pane_g1

0xe7e6,	// (0x0008c24d) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x0008d82d) image3_infobar_loc_pane_g

0xe7ee,	// (0x0008c255) image3_infobar_loc_pane_t1

0xb6dc,	// (0x00089143) image3_infobar_fav_pane_g1

0xe7fc,	// (0x0008c263) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x0008d832) image3_infobar_fav_pane_g

0xe804,	// (0x0008c26b) fs_bigclock_status_battery_pane

0xe80d,	// (0x0008c274) fs_bigclock_status_signal_pane

0xe816,	// (0x0008c27d) fs_bigclock_status_title_pane

0xe81f,	// (0x0008c286) fs_bigclock_status_signal_pane_g1

0xe828,	// (0x0008c28f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x0008d837) fs_bigclock_status_signal_pane_g

0xe830,	// (0x0008c297) fs_bigclock_status_battery_pane_g1

0xe839,	// (0x0008c2a0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x0008d83c) fs_bigclock_status_battery_pane_g

0xe841,	// (0x0008c2a8) fs_bigclock_status_title_pane_t1

0x9ef6,	// (0x0008795d) main_fs_bigclock_clock_pane_g1

0x9f08,	// (0x0008796f) main_fs_bigclock_clock_pane_g2

0x9f19,	// (0x00087980) main_fs_bigclock_clock_pane_g3

0x9f19,	// (0x00087980) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x0008d841) main_fs_bigclock_clock_pane_g

0x9f2c,	// (0x00087993) main_fs_bigclock_clock_pane_t1

0x9f47,	// (0x000879ae) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x0008d84a) main_fs_bigclock_clock_pane_t

0xe84f,	// (0x0008c2b6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe84f,	// (0x0008c2b6) list_single_fs_bigclock_indicator_pane

0xe860,	// (0x0008c2c7) list_single_fs_bigclock_pane_ParamLimits

0xe860,	// (0x0008c2c7) list_single_fs_bigclock_pane

0xe886,	// (0x0008c2ed) main_fs_bigclock_indicator_pane_t1

0xe895,	// (0x0008c2fc) list_single_fs_bigclock_pane_g1

0xe89d,	// (0x0008c304) list_single_fs_bigclock_pane_t1

0xb6dc,	// (0x00089143) main_fs_bigclock_swipe_pane_g1

0xe8dd,	// (0x0008c344) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x0008d85b) main_fs_bigclock_swipe_pane_g

0xe8e5,	// (0x0008c34c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe8e5,	// (0x0008c34c) main_fs_bigclock_swipe_pane_t1

0x501b,	// (0x00082a82) call_type_pane_ParamLimits

0x3346,	// (0x00080dad) main_btmg_pane

0x9bda,	// (0x00087641) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9bda,	// (0x00087641) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x0008d7ce) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x0008d7ce) list_single_cale_mrui_row_pane_g

0xe6f2,	// (0x0008c159) list_recal_vselct_arw_lo_pane

0xe6fa,	// (0x0008c161) list_recal_vselct_arw_up_pane

0xe702,	// (0x0008c169) list_recal_vselct_pane

0xe902,	// (0x0008c369) btmg_button_pane

0x9fa7,	// (0x00087a0e) main_btmg_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp044

0xe90a,	// (0x0008c371) btmg_button_pane_t1

0xc318,	// (0x00089d7f) aid_listscroll_gen

0x1497,	// (0x0007eefe) main_cntbar_detail_pane

0xe324,	// (0x0008bd8b) list_cmail_folder_pane

0xe334,	// (0x0008bd9b) sp_fs_scroll_pane_cp03_ParamLimits

0x9faf,	// (0x00087a16) list_single_fs_dyc_pane_cp01_ParamLimits

0x9faf,	// (0x00087a16) list_single_fs_dyc_pane_cp01

0xe918,	// (0x0008c37f) aid_size_cmail_indent

0xe921,	// (0x0008c388) list_single_dyc_row_pane_cp01

0x9fed,	// (0x00087a54) cntbar_detail_list_pane_ParamLimits

0x9fed,	// (0x00087a54) cntbar_detail_list_pane

0xa033,	// (0x00087a9a) main_cntbar_detail_cont_pane_ParamLimits

0xa033,	// (0x00087a9a) main_cntbar_detail_cont_pane

0xa047,	// (0x00087aae) scroll_pane_cp032_ParamLimits

0xa047,	// (0x00087aae) scroll_pane_cp032

0xa053,	// (0x00087aba) cntbar_detail_list_event_pane_ParamLimits

0xa053,	// (0x00087aba) cntbar_detail_list_event_pane

0x9ffd,	// (0x00087a64) cntbar_detail_list_shct_pane

0x001c,	// (0x0007da83) aid_list_gen

0xb566,	// (0x00088fcd) aid_scroll

0xd561,	// (0x0008afc8) aid_size_touch_scroll_bar

0x869a,	// (0x00086101) aid_list_double

0xd58c,	// (0x0008aff3) aid_list_single

0xd58c,	// (0x0008aff3) aid_list_single_lg

0xa064,	// (0x00087acb) aid_list_z_g_a_sm

0xa06c,	// (0x00087ad3) aid_list_z_g_d

0xa074,	// (0x00087adb) aid_txt_z_prm

0xa082,	// (0x00087ae9) aid_txt_z_prm_cp01

0xa090,	// (0x00087af7) aid_txt_z_sec

0xa09e,	// (0x00087b05) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa09e,	// (0x00087b05) main_cntbar_detail_cont_pane_g1

0xa0b2,	// (0x00087b19) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa0b2,	// (0x00087b19) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x0008d860) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x0008d860) main_cntbar_detail_cont_pane_g

0x0081,	// (0x0007dae8) main_cntbar_detail_cont_pane_t1

0x008f,	// (0x0007daf6) main_cntbar_detail_cont_pane_t2

0x009d,	// (0x0007db04) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x0008d865) main_cntbar_detail_cont_pane_t

0xa0c2,	// (0x00087b29) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa0c2,	// (0x00087b29) cell_cntbar_detail_list_shct_pane

0x00bd,	// (0x0007db24) cntbar_detail_list_shct_pane_g1

0x00c6,	// (0x0007db2d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x0008d86c) cntbar_detail_list_shct_pane_g

0xa0d4,	// (0x00087b3b) cntbar_detail_list_event_pane_g1_ParamLimits

0xa0d4,	// (0x00087b3b) cntbar_detail_list_event_pane_g1

0xa0e0,	// (0x00087b47) cntbar_detail_list_event_pane_g2_ParamLimits

0xa0e0,	// (0x00087b47) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x0008d871) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x0008d871) cntbar_detail_list_event_pane_g

0xa14c,	// (0x00087bb3) cntbar_detail_list_event_pane_t1_ParamLimits

0xa14c,	// (0x00087bb3) cntbar_detail_list_event_pane_t1

0xa161,	// (0x00087bc8) cntbar_detail_list_event_pane_t2_ParamLimits

0xa161,	// (0x00087bc8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x0008d87e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x0008d87e) cntbar_detail_list_event_pane_t

0xb6dc,	// (0x00089143) cell_cntbar_detail_list_shct_pane_g1

0x138c,	// (0x0007edf3) navi_pane_mv_g3

0x1497,	// (0x0007eefe) main_cntbar_detail_pane_ParamLimits

0x3346,	// (0x00080dad) main_notif_wgt_pane

0xebfa,	// (0x0008c661) aid_tch_main_mp4_pane_g4

0xedf6,	// (0x0008c85d) popup_slider_window_cp02

0xe6e8,	// (0x0008c14f) list_recal_day_event_pane

0x9fc5,	// (0x00087a2c) cntbar_detail_btn_pane_ParamLimits

0x9fc5,	// (0x00087a2c) cntbar_detail_btn_pane

0x9fd8,	// (0x00087a3f) cntbar_detail_btn_pane_cp01_ParamLimits

0x9fd8,	// (0x00087a3f) cntbar_detail_btn_pane_cp01

0x9ffd,	// (0x00087a64) cntbar_detail_list_shct_pane_ParamLimits

0xa00d,	// (0x00087a74) cntbar_detail_pane_g1_ParamLimits

0xa00d,	// (0x00087a74) cntbar_detail_pane_g1

0xa01d,	// (0x00087a84) cntbar_detail_pane_t1_ParamLimits

0xa01d,	// (0x00087a84) cntbar_detail_pane_t1

0xa0ec,	// (0x00087b53) cntbar_detail_list_event_pane_g3_ParamLimits

0xa0ec,	// (0x00087b53) cntbar_detail_list_event_pane_g3

0xa104,	// (0x00087b6b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa104,	// (0x00087b6b) cntbar_detail_list_event_pane_g4

0xa11c,	// (0x00087b83) cntbar_detail_list_event_pane_g5_ParamLimits

0xa11c,	// (0x00087b83) cntbar_detail_list_event_pane_g5

0xa134,	// (0x00087b9b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa134,	// (0x00087b9b) cntbar_detail_list_event_pane_g6

0xa176,	// (0x00087bdd) cntbar_detail_list_event_pane_t3_ParamLimits

0xa176,	// (0x00087bdd) cntbar_detail_list_event_pane_t3

0xa188,	// (0x00087bef) popup_notif_wgt_window_ParamLimits

0xa188,	// (0x00087bef) popup_notif_wgt_window

0xa19d,	// (0x00087c04) popup_submenu_window_cp01_ParamLimits

0xa19d,	// (0x00087c04) popup_submenu_window_cp01

0xb678,	// (0x000890df) bg_popup_window_pane_cp10

0x019d,	// (0x0007dc04) listscroll_notif_wgt_pane

0x01ae,	// (0x0007dc15) list_notif_wgt_window

0x01b7,	// (0x0007dc1e) scroll_pane_cp033

0xa1ad,	// (0x00087c14) list_notif_wgt_row_pane_ParamLimits

0xa1ad,	// (0x00087c14) list_notif_wgt_row_pane

0x01d2,	// (0x0007dc39) aid_size_list_notif_wgt_del

0x01df,	// (0x0007dc46) list_notif_wgt_row_pane_g1

0x01eb,	// (0x0007dc52) list_notif_wgt_row_pane_g2

0x01ff,	// (0x0007dc66) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x0008d885) list_notif_wgt_row_pane_g

0x020c,	// (0x0007dc73) list_notif_wgt_row_pane_t1

0x0222,	// (0x0007dc89) list_notif_wgt_row_pane_t2

0x0234,	// (0x0007dc9b) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x0008d88c) list_notif_wgt_row_pane_t

0xd26d,	// (0x0008acd4) list_recal_day_event_pane_g1

0x0246,	// (0x0007dcad) list_recal_day_event_pane_t1

0x3346,	// (0x00080dad) bg_button_pane_cp045

0xa1bd,	// (0x00087c24) cntbar_detail_btn_pane_t1

0x2150,	// (0x0007fbb7) main_callh_pane_ParamLimits

0x2150,	// (0x0007fbb7) main_callh_pane

0x3346,	// (0x00080dad) main_coverflow0_pane

0x3346,	// (0x00080dad) main_wgtman_pane

0x9215,	// (0x00086c7c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9215,	// (0x00086c7c) main_fs_bigclock_unlock_btn_pane

0xe2f6,	// (0x0008bd5d) bg_button_pane_cp16

0xe306,	// (0x0008bd6d) cell_tport_appsw_pane_g3

0xa1cb,	// (0x00087c32) cf0_flow_pane_ParamLimits

0xa1cb,	// (0x00087c32) cf0_flow_pane

0x0272,	// (0x0007dcd9) listscroll_cf0_pane

0x027b,	// (0x0007dce2) main_cf0_pane_g1

0xa1e0,	// (0x00087c47) main_cf0_pane_t1_ParamLimits

0xa1e0,	// (0x00087c47) main_cf0_pane_t1

0xa1f5,	// (0x00087c5c) main_cf0_pane_t2_ParamLimits

0xa1f5,	// (0x00087c5c) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x0008d898) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x0008d898) main_cf0_pane_t

0x02b1,	// (0x0007dd18) scroll_pane_cp11

0xa20a,	// (0x00087c71) cf0_flow_pane_g1

0xa212,	// (0x00087c79) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x0008d89d) cf0_flow_pane_g

0xa21a,	// (0x00087c81) cf0_flow_pane_t1

0x3346,	// (0x00080dad) main_call6_pane

0x3346,	// (0x00080dad) main_calllock_pane

0xa228,	// (0x00087c8f) call6_btn_grp_pane_ParamLimits

0xa228,	// (0x00087c8f) call6_btn_grp_pane

0xa23e,	// (0x00087ca5) call6_pane_g1_ParamLimits

0xa23e,	// (0x00087ca5) call6_pane_g1

0xa251,	// (0x00087cb8) popup_call6_1st_window_ParamLimits

0xa251,	// (0x00087cb8) popup_call6_1st_window

0xa260,	// (0x00087cc7) popup_call6_2nd_window_ParamLimits

0xa260,	// (0x00087cc7) popup_call6_2nd_window

0xa26f,	// (0x00087cd6) cell_call6_btn_pane_ParamLimits

0xa26f,	// (0x00087cd6) cell_call6_btn_pane

0xb678,	// (0x000890df) bg_popup_call2_in_pane_cp03

0x0319,	// (0x0007dd80) popup_call6_1st_window_g1

0x0321,	// (0x0007dd88) popup_call6_1st_window_g2

0x0329,	// (0x0007dd90) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x0008d8a2) popup_call6_1st_window_g

0x0331,	// (0x0007dd98) popup_call6_1st_window_t1

0x0340,	// (0x0007dda7) popup_call6_1st_window_t2

0x034e,	// (0x0007ddb5) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x0008d8a9) popup_call6_1st_window_t

0xb678,	// (0x000890df) bg_popup_call2_in_pane_cp04

0x035c,	// (0x0007ddc3) popup_call6_2nd_window_g1

0x0364,	// (0x0007ddcb) popup_call6_2nd_window_g2

0x036c,	// (0x0007ddd3) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x0008d8b0) popup_call6_2nd_window_g

0x0374,	// (0x0007dddb) popup_call6_2nd_window_t1

0xac8b,	// (0x000886f2) bg_button_pane_cp15

0x0383,	// (0x0007ddea) cell_call6_btn_pane_g1

0x038c,	// (0x0007ddf3) cell_call6_btn_pane_t1

0xa283,	// (0x00087cea) listscroll_wgtman_pane_ParamLimits

0xa283,	// (0x00087cea) listscroll_wgtman_pane

0xa2a4,	// (0x00087d0b) wgtman_btn_pane_ParamLimits

0xa2a4,	// (0x00087d0b) wgtman_btn_pane

0x11e3,	// (0x0007ec4a) aid_scroll_copy1

0x03ea,	// (0x0007de51) list_wgtman_pane

0xa2e4,	// (0x00087d4b) wgtman_btn_pane_g1_ParamLimits

0xa2e4,	// (0x00087d4b) wgtman_btn_pane_g1

0xa310,	// (0x00087d77) wgtman_btn_pane_t1_ParamLimits

0xa310,	// (0x00087d77) wgtman_btn_pane_t1

0x0453,	// (0x0007deba) wgtman_btn_pane_t2_ParamLimits

0x0453,	// (0x0007deba) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x0008d8b7) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x0008d8b7) wgtman_btn_pane_t

0xa34d,	// (0x00087db4) listrow_wgtman_pane_ParamLimits

0xa34d,	// (0x00087db4) listrow_wgtman_pane

0xa35f,	// (0x00087dc6) listrow_wgtman_pane_g1

0xa36c,	// (0x00087dd3) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x0008d8bc) listrow_wgtman_pane_g

0xa384,	// (0x00087deb) listrow_wgtman_pane_t1

0xa39c,	// (0x00087e03) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x0008d8c1) listrow_wgtman_pane_t

0xa3c2,	// (0x00087e29) wait_bar_pane_cp09

0x04f0,	// (0x0007df57) main_calllock_btn_pane

0x04f8,	// (0x0007df5f) main_calllock_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp17

0x0501,	// (0x0007df68) main_calllock_btn_pane_g1

0x050a,	// (0x0007df71) main_calllock_btn_pane_t1

0x3346,	// (0x00080dad) main_dialer3_pane

0x3346,	// (0x00080dad) main_fmrd2_pane

0xb6dc,	// (0x00089143) main_fs_bigclock_unlock_btn_pane_g1

0x0521,	// (0x0007df88) main_fs_bigclock_unlock_btn_pane_t1

0xa3d4,	// (0x00087e3b) area_fmrd2_info_pane_ParamLimits

0xa3d4,	// (0x00087e3b) area_fmrd2_info_pane

0xa3e3,	// (0x00087e4a) area_fmrd2_visual_pane_ParamLimits

0xa3e3,	// (0x00087e4a) area_fmrd2_visual_pane

0xa3f1,	// (0x00087e58) fmrd2_indi_pane_ParamLimits

0xa3f1,	// (0x00087e58) fmrd2_indi_pane

0xa3fe,	// (0x00087e65) area_fmrd2_visual_pane_g1

0xa406,	// (0x00087e6d) area_fmrd2_visual_pane_t1

0xa414,	// (0x00087e7b) area_fmrd2_visual_pane_t2

0xa422,	// (0x00087e89) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x0008d8cb) area_fmrd2_visual_pane_t

0xa430,	// (0x00087e97) area_fmrd2_info_pane_g1

0xa438,	// (0x00087e9f) area_fmrd2_info_pane_t1

0xa446,	// (0x00087ead) area_fmrd2_info_pane_t2

0xa454,	// (0x00087ebb) area_fmrd2_info_pane_t3

0xa462,	// (0x00087ec9) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x0008d8d2) area_fmrd2_info_pane_t

0xa470,	// (0x00087ed7) fmrd2_indi_pane_t1

0xa47e,	// (0x00087ee5) fmrd2_indi_pane_t2

0xa48c,	// (0x00087ef3) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x0008d8db) fmrd2_indi_pane_t

0xdea2,	// (0x0008b909) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdea2,	// (0x0008b909) list_single_fs_bigclock_indicator_pane_g5

0xdf50,	// (0x0008b9b7) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdf50,	// (0x0008b9b7) list_single_fs_bigclock_indicator_pane_t5

0x9aa8,	// (0x0008750f) aid_cell_bcale_month_pane_ParamLimits

0x9aa8,	// (0x0008750f) aid_cell_bcale_month_pane

0x9ac6,	// (0x0008752d) bcale_month_pane_ParamLimits

0x9ac6,	// (0x0008752d) bcale_month_pane

0x9ade,	// (0x00087545) bcale_preview_pane_ParamLimits

0x9ade,	// (0x00087545) bcale_preview_pane

0xe89d,	// (0x0008c304) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8b9,	// (0x0008c320) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8b9,	// (0x0008c320) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x0008d856) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x0008d856) list_single_fs_bigclock_pane_t

0x0519,	// (0x0007df80) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x0008d8c6) main_fs_bigclock_unlock_btn_pane_g

0xa49a,	// (0x00087f01) aid_dia3_key_size_ParamLimits

0xa49a,	// (0x00087f01) aid_dia3_key_size

0xa4a9,	// (0x00087f10) aid_dia3_listrow_size_ParamLimits

0xa4a9,	// (0x00087f10) aid_dia3_listrow_size

0xa4bc,	// (0x00087f23) dia3_keypad_fun_pane_ParamLimits

0xa4bc,	// (0x00087f23) dia3_keypad_fun_pane

0xa4d0,	// (0x00087f37) dia3_keypad_num_pane_ParamLimits

0xa4d0,	// (0x00087f37) dia3_keypad_num_pane

0xa4e1,	// (0x00087f48) dia3_listscroll_pane_ParamLimits

0xa4e1,	// (0x00087f48) dia3_listscroll_pane

0xa4f2,	// (0x00087f59) dia3_numentry_pane_ParamLimits

0xa4f2,	// (0x00087f59) dia3_numentry_pane

0x063c,	// (0x0007e0a3) dia3_list_pane

0x0645,	// (0x0007e0ac) scroll_pane_cp12

0x3346,	// (0x00080dad) bg_dia3_numentry_pane

0xa506,	// (0x00087f6d) dia3_numentry_pane_t1

0xa515,	// (0x00087f7c) cell_dia3_key_num_pane

0xa51d,	// (0x00087f84) cell_dia3_key0_fun_pane_ParamLimits

0xa51d,	// (0x00087f84) cell_dia3_key0_fun_pane

0xa531,	// (0x00087f98) cell_dia3_key1_fun_pane_ParamLimits

0xa531,	// (0x00087f98) cell_dia3_key1_fun_pane

0xa548,	// (0x00087faf) dia3_listrow_pane

0xdbb1,	// (0x0008b618) bg_dia3_numentry_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp21

0x068c,	// (0x0007e0f3) cell_dia3_key_num_pane_t1

0x069a,	// (0x0007e101) cell_dia3_key_num_pane_t2

0x06a9,	// (0x0007e110) cell_dia3_key_num_pane_t3

0x06b8,	// (0x0007e11f) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x0008d8e2) cell_dia3_key_num_pane_t

0x3346,	// (0x00080dad) bg_button_pane_cp19

0x06c7,	// (0x0007e12e) cell_dia3_key0_fun_pane_g1

0x3346,	// (0x00080dad) bg_button_pane_cp20

0xa55a,	// (0x00087fc1) cell_dia3_key1_fun_pane_g1

0xa562,	// (0x00087fc9) area_left_week_number_pane

0xa56e,	// (0x00087fd5) area_top_day_name_pane

0xa57f,	// (0x00087fe6) frame_month_view_pane

0x0705,	// (0x0007e16c) grid_month_view_pane

0xa590,	// (0x00087ff7) cell_top_day_name_pane_ParamLimits

0xa590,	// (0x00087ff7) cell_top_day_name_pane

0xa5b3,	// (0x0008801a) cell_area_left_week_number_pane_ParamLimits

0xa5b3,	// (0x0008801a) cell_area_left_week_number_pane

0xa5c7,	// (0x0008802e) cell_month_view_pane_ParamLimits

0xa5c7,	// (0x0008802e) cell_month_view_pane

0x076e,	// (0x0007e1d5) frm_month_g1

0xa5ec,	// (0x00088053) frm_month_g2

0xa5fd,	// (0x00088064) frm_month_g3

0xa60e,	// (0x00088075) frm_month_g4

0xa61f,	// (0x00088086) frm_month_g5

0xa630,	// (0x00088097) frm_month_g6

0xa641,	// (0x000880a8) frm_month_g7

0x07d5,	// (0x0007e23c) frm_month_g8

0xa652,	// (0x000880b9) frm_month_g9

0xa662,	// (0x000880c9) frm_month_g10

0xa672,	// (0x000880d9) frm_month_g11

0xa682,	// (0x000880e9) frm_month_g12

0xa692,	// (0x000880f9) frm_month_g13

0xa6a2,	// (0x00088109) frm_month_g14

0xa6b2,	// (0x00088119) frm_month_g15

0xa6c4,	// (0x0008812b) frm_month_g16

0x000f,

0xfe84,	// (0x0008d8eb) frm_month_g

0x084a,	// (0x0007e2b1) cell_top_day_name_pane_t1

0xa6d6,	// (0x0008813d) cell_area_left_week_number_pane_g1

0xa6e2,	// (0x00088149) cell_area_left_week_number_pane_t1

0xb37b,	// (0x00088de2) cell_month_view_pane_g1

0xa6f5,	// (0x0008815c) cell_month_view_pane_t1

0x3346,	// (0x00080dad) main_fps_pane

0xe124,	// (0x0008bb8b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe124,	// (0x0008bb8b) cmail_ddmenu_btn02_pane_cp1

0xe140,	// (0x0008bba7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe140,	// (0x0008bba7) cmail_ddmenu_btn02_pane_cp2

0x9dfd,	// (0x00087864) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9dfd,	// (0x00087864) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x0008d809) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x0008d809) cmail_ddmenu_btn02_pane_g

0x9e1b,	// (0x00087882) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e1b,	// (0x00087882) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x0008d80e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x0008d80e) cmail_ddmenu_btn02_pane_t

0xa708,	// (0x0008816f) fps_text_pane_ParamLimits

0xa708,	// (0x0008816f) fps_text_pane

0xa71e,	// (0x00088185) main_fps_pane_g1_ParamLimits

0xa71e,	// (0x00088185) main_fps_pane_g1

0xa734,	// (0x0008819b) wait_bar_pane_cp010_ParamLimits

0xa734,	// (0x0008819b) wait_bar_pane_cp010

0xa745,	// (0x000881ac) fps_text_pane_t1_ParamLimits

0xa745,	// (0x000881ac) fps_text_pane_t1

0x0b54,	// (0x0007e5bb) cam4_image_uncrop_pane_g1

0x0b5d,	// (0x0007e5c4) cam4_image_uncrop_pane_g2

0x7659,	// (0x000850c0) cam4_image_uncrop_pane_g3

0x7662,	// (0x000850c9) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x0008d30b) cam4_image_uncrop_pane_g

0xa548,	// (0x00087faf) dia3_listrow_pane_ParamLimits

0x3346,	// (0x00080dad) main_phob2_pane

0x98f9,	// (0x00087360) cell_tport_appsw_pane_cp02_ParamLimits

0x98f9,	// (0x00087360) cell_tport_appsw_pane_cp02

0x9909,	// (0x00087370) cell_tport_appsw_pane_cp03_ParamLimits

0x9909,	// (0x00087370) cell_tport_appsw_pane_cp03

0x3346,	// (0x00080dad) phob2_contact_card_pane

0x3346,	// (0x00080dad) phob2_listscroll_pane

0x08d6,	// (0x0007e33d) phob2_list_pane

0x08de,	// (0x0007e345) scroll_pane_cp034

0xa75d,	// (0x000881c4) phob2_cc_data_pane_ParamLimits

0xa75d,	// (0x000881c4) phob2_cc_data_pane

0xa77a,	// (0x000881e1) phob2_cc_listscroll_pane_ParamLimits

0xa77a,	// (0x000881e1) phob2_cc_listscroll_pane

0xa34d,	// (0x00087db4) list_double_large_graphic_phob2_pane_ParamLimits

0xa34d,	// (0x00087db4) list_double_large_graphic_phob2_pane

0xa796,	// (0x000881fd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa796,	// (0x000881fd) list_double_large_graphic_phob2_pane_g1

0xa7a3,	// (0x0008820a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa7a3,	// (0x0008820a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x0008d90c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x0008d90c) list_double_large_graphic_phob2_pane_g

0xa7c7,	// (0x0008822e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa7c7,	// (0x0008822e) list_double_large_graphic_phob2_pane_t1

0xa7dc,	// (0x00088243) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa7dc,	// (0x00088243) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x0008d915) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x0008d915) list_double_large_graphic_phob2_pane_t

0x3346,	// (0x00080dad) list_highlight_pane_cp024

0x0983,	// (0x0007e3ea) phob2_cc_button_pane

0xa7f1,	// (0x00088258) phob2_cc_data_pane_g1_ParamLimits

0xa7f1,	// (0x00088258) phob2_cc_data_pane_g1

0xa808,	// (0x0008826f) phob2_cc_data_pane_g2_ParamLimits

0xa808,	// (0x0008826f) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x0008d91a) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x0008d91a) phob2_cc_data_pane_g

0xa81a,	// (0x00088281) phob2_cc_data_pane_t1_ParamLimits

0xa81a,	// (0x00088281) phob2_cc_data_pane_t1

0xa832,	// (0x00088299) phob2_cc_data_pane_t2_ParamLimits

0xa832,	// (0x00088299) phob2_cc_data_pane_t2

0xa84a,	// (0x000882b1) phob2_cc_data_pane_t3_ParamLimits

0xa84a,	// (0x000882b1) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x0008d91f) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x0008d91f) phob2_cc_data_pane_t

0x09e8,	// (0x0007e44f) phob2_cc_list_pane_ParamLimits

0x09e8,	// (0x0007e44f) phob2_cc_list_pane

0xdace,	// (0x0008b535) scroll_pane_cp035_ParamLimits

0xdace,	// (0x0008b535) scroll_pane_cp035

0x1497,	// (0x0007eefe) bg_button_pane_cp033

0x09f4,	// (0x0007e45b) phob2_cc_button_pane_g1

0x0a00,	// (0x0007e467) phob2_cc_button_pane_t1

0x0a15,	// (0x0007e47c) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x0008d926) phob2_cc_button_pane_t

0xa862,	// (0x000882c9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa862,	// (0x000882c9) list_double_large_graphic_phob2_cc_pane

0xa890,	// (0x000882f7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa890,	// (0x000882f7) list_double_large_graphic_phob2_cc_pane_g1

0xa89c,	// (0x00088303) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa89c,	// (0x00088303) list_double_large_graphic_phob2_cc_pane_g2

0xa8a8,	// (0x0008830f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa8a8,	// (0x0008830f) list_double_large_graphic_phob2_cc_pane_g3

0xa8b4,	// (0x0008831b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa8b4,	// (0x0008831b) list_double_large_graphic_phob2_cc_pane_g4

0xa8c0,	// (0x00088327) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa8c0,	// (0x00088327) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x0008d92b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x0008d92b) list_double_large_graphic_phob2_cc_pane_g

0xa8cc,	// (0x00088333) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa8cc,	// (0x00088333) list_double_large_graphic_phob2_cc_pane_t1

0xa8f5,	// (0x0008835c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa8f5,	// (0x0008835c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x0008d936) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x0008d936) list_double_large_graphic_phob2_cc_pane_t

0x0b0e,	// (0x0007e575) list_highlight_pane_cp025_ParamLimits

0x0b0e,	// (0x0007e575) list_highlight_pane_cp025

0x1497,	// (0x0007eefe) bg_button_pane_cp033_ParamLimits

0x09f4,	// (0x0007e45b) phob2_cc_button_pane_g1_ParamLimits

0x0a00,	// (0x0007e467) phob2_cc_button_pane_t1_ParamLimits

0x0a15,	// (0x0007e47c) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x0008d926) phob2_cc_button_pane_t_ParamLimits

0x3534,	// (0x00080f9b) popup_wgtman_window

0xdbd1,	// (0x0008b638) scroll_pane_cp038

0xa2c6,	// (0x00087d2d) wgtman_btn_pane_cp_01_ParamLimits

0xa2c6,	// (0x00087d2d) wgtman_btn_pane_cp_01

0x0b1c,	// (0x0007e583) wgtman_content_pane

0x0b25,	// (0x0007e58c) wgtman_heading_pane

0x3346,	// (0x00080dad) bg_heading_pane_cp02

0x0b2e,	// (0x0007e595) wgtman_heading_pane_g1

0x0b36,	// (0x0007e59d) wgtman_heading_pane_t1

0x0b44,	// (0x0007e5ab) scroll_pane_cp036

0x0b4c,	// (0x0007e5b3) wgtman_list_pane

0xe92a,	// (0x0008c391) wgtman_list_pane_t1_ParamLimits

0xe92a,	// (0x0008c391) wgtman_list_pane_t1

0xee82,	// (0x0008c8e9) cam4_grid_pane

0x81fd,	// (0x00085c64) bg_button_pane_cp015_ParamLimits

0x820d,	// (0x00085c74) bg_button_pane_cp016_ParamLimits

0x821f,	// (0x00085c86) bg_button_pane_cp017_ParamLimits

0x826f,	// (0x00085cd6) popup_vitu2_query_window_g3_ParamLimits

0x826f,	// (0x00085cd6) popup_vitu2_query_window_g3

0x8322,	// (0x00085d89) popup_vitu2_query_window_t6_ParamLimits

0x8322,	// (0x00085d89) popup_vitu2_query_window_t6

0x834d,	// (0x00085db4) popup_vitu2_query_window_t7_ParamLimits

0x834d,	// (0x00085db4) popup_vitu2_query_window_t7

0x0b54,	// (0x0007e5bb) cam4_grid_pane_g1

0x0b5d,	// (0x0007e5c4) cam4_grid_pane_g2

0x0b66,	// (0x0007e5cd) cam4_grid_pane_g3

0x0b6f,	// (0x0007e5d6) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x0008d93b) cam4_grid_pane_g

0x417e,	// (0x00081be5) aid_placing_vt_slider_lsc_ParamLimits

0x43ee,	// (0x00081e55) vidtel_button_pane_ParamLimits

0x43ee,	// (0x00081e55) vidtel_button_pane

0x3346,	// (0x00080dad) bg_button_pane_cp034

0xa91e,	// (0x00088385) vidtel_button_pane_g1

0xa926,	// (0x0008838d) vidtel_button_pane_t1

0xd23e,	// (0x0008aca5) aid_size_vtel_slider_touch

0xdace,	// (0x0008b535) scroll_pane_cp039

0xdc00,	// (0x0008b667) ncim_query_button_pane_cp01_ParamLimits

0xdc1f,	// (0x0008b686) ncimui_query_pane_g1_ParamLimits

0x1497,	// (0x0007eefe) input_focus_pane_cp012_ParamLimits

0xdc44,	// (0x0008b6ab) ncim_query_entry_pane_t1_ParamLimits

0xdace,	// (0x0008b535) scroll_pane_cp039_ParamLimits

0x12a7,	// (0x0007ed0e) navi_pane_bcale_mc_g1

0x12af,	// (0x0007ed16) navi_pane_bcale_mc_t1

0xe174,	// (0x0008bbdb) main_sp_fs_email_pane_g1

0xe180,	// (0x0008bbe7) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x0008d706) main_sp_fs_email_pane_g

0xe5e4,	// (0x0008c04b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe5e4,	// (0x0008c04b) list_single_cale_mrui_row_pane_g3

0x9e3b,	// (0x000878a2) list_single_recal_day_pane_g5_event_pane

0xe74d,	// (0x0008c1b4) list_single_recal_day_pane_g7

0x0b96,	// (0x0007e5fd) list_recal_day_event_pane_cp01

0x0b9f,	// (0x0007e606) list_recal_vselct_arw_lo_pane_cp01

0x0ba7,	// (0x0007e60e) list_recal_vselct_arw_up_pane_cp01

0x0baf,	// (0x0007e616) list_recal_vselct_pane_cp01

0xd26d,	// (0x0008acd4) list_recal_day_event_pane_cp01_g1

0xe941,	// (0x0008c3a8) list_recal_day_event_pane_cp01_t1

0xe755,	// (0x0008c1bc) list_single_recal_day_pane_t1_ParamLimits

0x9e51,	// (0x000878b8) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x0008d81e) list_single_recal_day_pane_t_ParamLimits

0xb301,	// (0x00088d68) bg_notes_pane_ParamLimits

0xb3d3,	// (0x00088e3a) list_notes_pane_ParamLimits

0x3728,	// (0x0008118f) scroll_pane_cp06_ParamLimits

0xb413,	// (0x00088e7a) main_notes_pane_ParamLimits

0x1497,	// (0x0007eefe) main_welc_pane

0xa952,	// (0x000883b9) main_welc_body_pane_ParamLimits

0xa952,	// (0x000883b9) main_welc_body_pane

0xa96e,	// (0x000883d5) main_welc_opti_pane_ParamLimits

0xa96e,	// (0x000883d5) main_welc_opti_pane

0xa9da,	// (0x00088441) main_welc_pane_t1_ParamLimits

0xa9da,	// (0x00088441) main_welc_pane_t1

0xab1a,	// (0x00088581) main_welc_body_row_pane_ParamLimits

0xab1a,	// (0x00088581) main_welc_body_row_pane

0xbbd3,	// (0x0008963a) main_welc_opti_row_pane_ParamLimits

0xbbd3,	// (0x0008963a) main_welc_opti_row_pane

0x0d55,	// (0x0007e7bc) main_welc_opti_row_pane_g1

0xab2d,	// (0x00088594) main_welc_opti_row_pane_t1

0x0d6c,	// (0x0007e7d3) main_welc_body_row_pane_t1

0x01a6,	// (0x0007dc0d) popup_notif_wgt_heading_pane

0x01d2,	// (0x0007dc39) aid_size_list_notif_wgt_del_ParamLimits

0x01df,	// (0x0007dc46) list_notif_wgt_row_pane_g1_ParamLimits

0x01eb,	// (0x0007dc52) list_notif_wgt_row_pane_g2_ParamLimits

0x01ff,	// (0x0007dc66) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x0008d885) list_notif_wgt_row_pane_g_ParamLimits

0x020c,	// (0x0007dc73) list_notif_wgt_row_pane_t1_ParamLimits

0x0222,	// (0x0007dc89) list_notif_wgt_row_pane_t2_ParamLimits

0x0234,	// (0x0007dc9b) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x0008d88c) list_notif_wgt_row_pane_t_ParamLimits

0xa35f,	// (0x00087dc6) listrow_wgtman_pane_g1_ParamLimits

0xa36c,	// (0x00087dd3) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x0008d8bc) listrow_wgtman_pane_g_ParamLimits

0xa384,	// (0x00087deb) listrow_wgtman_pane_t1_ParamLimits

0xa39c,	// (0x00087e03) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x0008d8c1) listrow_wgtman_pane_t_ParamLimits

0xa3c2,	// (0x00087e29) wait_bar_pane_cp09_ParamLimits

0x3346,	// (0x00080dad) bg_popup_heading_pane_cp02

0x0d7b,	// (0x0007e7e2) popup_notif_wgt_heading_pane_g1

0x0d83,	// (0x0007e7ea) popup_notif_wgt_heading_pane_t1

0xc32c,	// (0x00089d93) main_vids_pane

0x3346,	// (0x00080dad) vids_listscroll_pane

0xab3c,	// (0x000885a3) scroll_pane_cp040

0x3346,	// (0x00080dad) vids_list_pane

0x000c,	// (0x0007da73) vids_list_double_pane_ParamLimits

0x000c,	// (0x0007da73) vids_list_double_pane

0xab47,	// (0x000885ae) vids_list_double_pane_g1

0xab50,	// (0x000885b7) vids_list_double_pane_t1

0xab5f,	// (0x000885c6) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x0008d95a) vids_list_double_pane_t

0xea89,	// (0x0008c4f0) main_ncimui_pane_ParamLimits

0x8dc1,	// (0x00086828) main_ncimui_pane_g1_ParamLimits

0x8dcd,	// (0x00086834) main_ncimui_pane_g2_ParamLimits

0x8dcd,	// (0x00086834) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x0008d607) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x0008d607) main_ncimui_pane_g

0xa985,	// (0x000883ec) main_welc_pane_g1_ParamLimits

0xa985,	// (0x000883ec) main_welc_pane_g1

0xa998,	// (0x000883ff) main_welc_pane_g2_ParamLimits

0xa998,	// (0x000883ff) main_welc_pane_g2

0x0003,

0xfedd,	// (0x0008d944) main_welc_pane_g_ParamLimits

0xfedd,	// (0x0008d944) main_welc_pane_g

0xb301,	// (0x00088d68) listscroll_mce_pane_ParamLimits

0x5334,	// (0x00082d9b) wait_bar_pane_cp10

0xc320,	// (0x00089d87) main_cale_day_pane_ParamLimits

0xc320,	// (0x00089d87) main_cale_week_pane_ParamLimits

0xb301,	// (0x00088d68) main_messa_pane_ParamLimits

0x6c97,	// (0x000846fe) main_clock2_btn_pane_ParamLimits

0x6c97,	// (0x000846fe) main_clock2_btn_pane

0xcaa8,	// (0x0008a50f) main_clock2_btn_pane_cp01_ParamLimits

0xcaa8,	// (0x0008a50f) main_clock2_btn_pane_cp01

0xe59f,	// (0x0008c006) list_cale_mrui_pane_ParamLimits

0x0285,	// (0x0007dcec) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x0008d893) main_cf0_pane_g

0xa562,	// (0x00087fc9) area_left_week_number_pane_ParamLimits

0xa56e,	// (0x00087fd5) area_top_day_name_pane_ParamLimits

0xa57f,	// (0x00087fe6) frame_month_view_pane_ParamLimits

0x0705,	// (0x0007e16c) grid_month_view_pane_ParamLimits

0x076e,	// (0x0007e1d5) frm_month_g1_ParamLimits

0xa5ec,	// (0x00088053) frm_month_g2_ParamLimits

0xa5fd,	// (0x00088064) frm_month_g3_ParamLimits

0xa60e,	// (0x00088075) frm_month_g4_ParamLimits

0xa61f,	// (0x00088086) frm_month_g5_ParamLimits

0xa630,	// (0x00088097) frm_month_g6_ParamLimits

0xa641,	// (0x000880a8) frm_month_g7_ParamLimits

0x07d5,	// (0x0007e23c) frm_month_g8_ParamLimits

0xa652,	// (0x000880b9) frm_month_g9_ParamLimits

0xa662,	// (0x000880c9) frm_month_g10_ParamLimits

0xa672,	// (0x000880d9) frm_month_g11_ParamLimits

0xa682,	// (0x000880e9) frm_month_g12_ParamLimits

0xa692,	// (0x000880f9) frm_month_g13_ParamLimits

0xa6a2,	// (0x00088109) frm_month_g14_ParamLimits

0xa6b2,	// (0x00088119) frm_month_g15_ParamLimits

0xa6c4,	// (0x0008812b) frm_month_g16_ParamLimits

0xfe84,	// (0x0008d8eb) frm_month_g_ParamLimits

0x084a,	// (0x0007e2b1) cell_top_day_name_pane_t1_ParamLimits

0xa6d6,	// (0x0008813d) cell_area_left_week_number_pane_g1_ParamLimits

0xa6e2,	// (0x00088149) cell_area_left_week_number_pane_t1_ParamLimits

0xb37b,	// (0x00088de2) cell_month_view_pane_g1_ParamLimits

0xa6f5,	// (0x0008815c) cell_month_view_pane_t1_ParamLimits

0xb2f9,	// (0x00088d60) main_clock2_btn_pane_g1

0x218c,	// (0x0007fbf3) main_clock2_btn_pane_t1

0x1497,	// (0x0007eefe) listscroll_cmail_pane_ParamLimits

0xe174,	// (0x0008bbdb) main_sp_fs_email_pane_g1_ParamLimits

0xe180,	// (0x0008bbe7) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x0008d706) main_sp_fs_email_pane_g_ParamLimits

0xe6c9,	// (0x0008c130) list_recal_day_pane_ParamLimits

0xe6da,	// (0x0008c141) mian_recal_day_pane_t1

0x97c5,	// (0x0008722c) list_single_dyc_row_text_pane_t4_ParamLimits

0x97c5,	// (0x0008722c) list_single_dyc_row_text_pane_t4

0x97fc,	// (0x00087263) list_single_dyc_row_text_pane_t5_ParamLimits

0x97fc,	// (0x00087263) list_single_dyc_row_text_pane_t5

0xe219,	// (0x0008bc80) list_single_dyc_row_text_pane_t6_ParamLimits

0xe219,	// (0x0008bc80) list_single_dyc_row_text_pane_t6

0x4f59,	// (0x000829c0) aid_mgn_list_cale_time_pane

0xea89,	// (0x0008c4f0) main_gallery2_pane_ParamLimits

0xcabc,	// (0x0008a523) main_clock2_pane_cp01_t1

0xcaca,	// (0x0008a531) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0008d1dd) main_clock2_pane_cp01_t

0x3aab,	// (0x00081512) cale_week_scroll_pane_g16_ParamLimits

0x3aab,	// (0x00081512) cale_week_scroll_pane_g16

0xb678,	// (0x000890df) vorec_slider_pane

0xa926,	// (0x0008838d) vidtel_button_pane_t1_ParamLimits

0x9ef6,	// (0x0008795d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9f08,	// (0x0008796f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9f19,	// (0x00087980) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9f19,	// (0x00087980) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x0008d841) main_fs_bigclock_clock_pane_g_ParamLimits

0x9f2c,	// (0x00087993) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9f47,	// (0x000879ae) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x0008d84a) main_fs_bigclock_clock_pane_t_ParamLimits

0x65d5,	// (0x0008403c) main_mup3_lyrics_pane_ParamLimits

0x65d5,	// (0x0008403c) main_mup3_lyrics_pane

0xab91,	// (0x000885f8) main_mup3_lyrics_pane_t1_ParamLimits

0xab91,	// (0x000885f8) main_mup3_lyrics_pane_t1

0xebe4,	// (0x0008c64b) aid_main_mp4_pane_t1_area

0xebee,	// (0x0008c655) aid_main_mp4_pane_t2_area

0xec9a,	// (0x0008c701) main_mp4_pane_g7_ParamLimits

0xec9a,	// (0x0008c701) main_mp4_pane_g7

0xeca6,	// (0x0008c70d) main_mp4_pane_g8_ParamLimits

0xeca6,	// (0x0008c70d) main_mp4_pane_g8

0x74fb,	// (0x00084f62) aid_call6_pane_g1_size

0xa87c,	// (0x000882e3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa87c,	// (0x000882e3) list_double_large_graphic_phob2_other_pane

0x11fa,	// (0x0007ec61) list_double_large_graphic_phob2_other_pane_g1

0x3346,	// (0x00080dad) list_highlight_pane_cp026

0x1497,	// (0x0007eefe) main_welc_pane_ParamLimits

0x95c6,	// (0x0008702d) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x95c6,	// (0x0008702d) main_sp_fs_ctrlbar_pane_g3

0x95de,	// (0x00087045) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x95de,	// (0x00087045) main_sp_fs_ctrlbar_pane_g4

0x9620,	// (0x00087087) toolbar2_fixed_button_pane_cp01

0x962b,	// (0x00087092) toolbar2_fixed_button_pane_cp02

0x9636,	// (0x0008709d) toolbar2_fixed_button_pane_cp03

0xa93c,	// (0x000883a3) list_welc_entry_pane_ParamLimits

0xa93c,	// (0x000883a3) list_welc_entry_pane

0xa9ab,	// (0x00088412) main_welc_pane_g3_ParamLimits

0xa9ab,	// (0x00088412) main_welc_pane_g3

0xa9f4,	// (0x0008845b) main_welc_pane_t2_ParamLimits

0xa9f4,	// (0x0008845b) main_welc_pane_t2

0xaa0a,	// (0x00088471) main_welc_pane_t3_ParamLimits

0xaa0a,	// (0x00088471) main_welc_pane_t3

0x0005,

0xfee6,	// (0x0008d94d) main_welc_pane_t_ParamLimits

0xfee6,	// (0x0008d94d) main_welc_pane_t

0xaab6,	// (0x0008851d) welc_button_pane_ParamLimits

0xaab6,	// (0x0008851d) welc_button_pane

0xab0a,	// (0x00088571) welc_service_logo_pane_ParamLimits

0xab0a,	// (0x00088571) welc_service_logo_pane

0xabb0,	// (0x00088617) list_single_welc_entry_pane_ParamLimits

0xabb0,	// (0x00088617) list_single_welc_entry_pane

0xabc1,	// (0x00088628) list_single_welc_entry_pane_g1

0xabc9,	// (0x00088630) list_single_welc_entry_pane_t1

0xabd7,	// (0x0008863e) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x0008d95f) list_single_welc_entry_pane_t

0x3346,	// (0x00080dad) bg_button_pane_cp035

0x21ed,	// (0x0007fc54) welc_button_pane_t1

0x21fb,	// (0x0007fc62) welc_service_logo_pane_g1

0x2204,	// (0x0007fc6b) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x0008d964) welc_service_logo_pane_g

0xac8b,	// (0x000886f2) main_int_radio_pane

0xb4eb,	// (0x00088f52) list_single_fs_dyc_pane_g1

0xa7af,	// (0x00088216) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa7af,	// (0x00088216) list_double_large_graphic_phob2_pane_g3

0xa7bb,	// (0x00088222) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa7bb,	// (0x00088222) list_double_large_graphic_phob2_pane_g4

0xabe5,	// (0x0008864c) main_int_radio1_pane_ParamLimits

0xabe5,	// (0x0008864c) main_int_radio1_pane

0x2223,	// (0x0007fc8a) find_pane_cp02

0xac02,	// (0x00088669) input_focus_pane_cp12_ParamLimits

0xac02,	// (0x00088669) input_focus_pane_cp12

0xac12,	// (0x00088679) input_focus_pane_cp13_ParamLimits

0xac12,	// (0x00088679) input_focus_pane_cp13

0xac26,	// (0x0008868d) input_focus_pane_cp14_ParamLimits

0xac26,	// (0x0008868d) input_focus_pane_cp14

0x2268,	// (0x0007fccf) int_radio1_listscroll_pane

0xe94f,	// (0x0008c3b6) main_int_radio1_pane_g1_ParamLimits

0xe94f,	// (0x0008c3b6) main_int_radio1_pane_g1

0xe963,	// (0x0008c3ca) main_int_radio1_pane_t1_ParamLimits

0xe963,	// (0x0008c3ca) main_int_radio1_pane_t1

0xe97a,	// (0x0008c3e1) main_int_radio1_pane_t2_ParamLimits

0xe97a,	// (0x0008c3e1) main_int_radio1_pane_t2

0xe991,	// (0x0008c3f8) main_int_radio1_pane_t3_ParamLimits

0xe991,	// (0x0008c3f8) main_int_radio1_pane_t3

0xe9a8,	// (0x0008c40f) main_int_radio1_pane_t4_ParamLimits

0xe9a8,	// (0x0008c40f) main_int_radio1_pane_t4

0x22cb,	// (0x0007fd32) main_int_radio1_pane_t5_ParamLimits

0x22cb,	// (0x0007fd32) main_int_radio1_pane_t5

0xe9ba,	// (0x0008c421) main_int_radio1_pane_t6_ParamLimits

0xe9ba,	// (0x0008c421) main_int_radio1_pane_t6

0xe9cf,	// (0x0008c436) main_int_radio1_pane_t7_ParamLimits

0xe9cf,	// (0x0008c436) main_int_radio1_pane_t7

0xe9e4,	// (0x0008c44b) main_int_radio1_pane_t8_ParamLimits

0xe9e4,	// (0x0008c44b) main_int_radio1_pane_t8

0xea01,	// (0x0008c468) main_int_radio1_pane_t9_ParamLimits

0xea01,	// (0x0008c468) main_int_radio1_pane_t9

0xea13,	// (0x0008c47a) main_int_radio1_pane_t10_ParamLimits

0xea13,	// (0x0008c47a) main_int_radio1_pane_t10

0xea37,	// (0x0008c49e) main_int_radio1_pane_t11_ParamLimits

0xea37,	// (0x0008c49e) main_int_radio1_pane_t11

0xea5b,	// (0x0008c4c2) main_int_radio1_pane_t12_ParamLimits

0xea5b,	// (0x0008c4c2) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x0008d969) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x0008d969) main_int_radio1_pane_t

0x239a,	// (0x0007fe01) int_radio_list_pane

0x08de,	// (0x0007e345) scroll_pane_cp037

0x046a,	// (0x0007ded1) list_double_large_graphic_int_radio_pane_ParamLimits

0x046a,	// (0x0007ded1) list_double_large_graphic_int_radio_pane

0x23a2,	// (0x0007fe09) list_double_large_graphic_int_radio_pane_g1

0xea6d,	// (0x0008c4d4) list_double_large_graphic_int_radio_pane_t1

0xea7b,	// (0x0008c4e2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x0008d982) list_double_large_graphic_int_radio_pane_t

0x3346,	// (0x00080dad) list_highlight_pane_cp027

0x0bc6,	// (0x0007e62d) main_button_pane_4

0xa9bb,	// (0x00088422) main_welc_pane_g4_ParamLimits

0xa9bb,	// (0x00088422) main_welc_pane_g4

0xaa20,	// (0x00088487) main_welc_pane_t4_ParamLimits

0xaa20,	// (0x00088487) main_welc_pane_t4

0xaa35,	// (0x0008849c) main_welc_pane_t5_ParamLimits

0xaa35,	// (0x0008849c) main_welc_pane_t5

0xaa7d,	// (0x000884e4) main_welc_pane_t6_ParamLimits

0xaa7d,	// (0x000884e4) main_welc_pane_t6

0xaac7,	// (0x0008852e) welc_button_pane_2_ParamLimits

0xaac7,	// (0x0008852e) welc_button_pane_2

0xaadd,	// (0x00088544) welc_button_pane_3_ParamLimits

0xaadd,	// (0x00088544) welc_button_pane_3

0x0bc6,	// (0x0007e62d) welc_button_pane_4

0xaaf8,	// (0x0008855f) welc_button_pane_5_ParamLimits

0xaaf8,	// (0x0008855f) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
