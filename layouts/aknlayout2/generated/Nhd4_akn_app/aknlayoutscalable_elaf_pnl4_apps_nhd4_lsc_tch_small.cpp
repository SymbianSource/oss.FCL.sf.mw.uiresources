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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d4e1 };

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
0x32d7,	// (0x000407b8) Screen

0x32e3,	// (0x000407c4) application_window

0x331f,	// (0x00040800) area_bottom_pane_ParamLimits

0x331f,	// (0x00040800) area_bottom_pane

0x3358,	// (0x00040839) area_top_pane_ParamLimits

0x3358,	// (0x00040839) area_top_pane

0x0318,	// (0x0003d7f9) call_video_uplink_pane_ParamLimits

0x0318,	// (0x0003d7f9) call_video_uplink_pane

0x33d2,	// (0x000408b3) main_pane_ParamLimits

0x33d2,	// (0x000408b3) main_pane

0x7089,	// (0x0004456a) context_pane

0x709c,	// (0x0004457d) navi_pane

0x70c4,	// (0x000445a5) popup_cale_events_window_ParamLimits

0x70c4,	// (0x000445a5) popup_cale_events_window

0x70dc,	// (0x000445bd) popup_mup_playback_window

0x70e4,	// (0x000445c5) signal_pane

0x0ab1,	// (0x0003df92) main_browser_pane

0x1541,	// (0x0003ea22) main_burst_pane

0x6d9c,	// (0x0004427d) main_calc_pane

0x1541,	// (0x0003ea22) main_cale_day_pane

0x0ab1,	// (0x0003df92) main_cale_month_pane

0x1541,	// (0x0003ea22) main_cale_week_pane

0x1541,	// (0x0003ea22) main_call_pane

0x0747,	// (0x0003dc28) main_call_poc_pane

0x1541,	// (0x0003ea22) main_camera_pane

0x1541,	// (0x0003ea22) main_chi_dic_pane

0x13d0,	// (0x0003e8b1) main_clock_pane

0x0747,	// (0x0003dc28) main_fmradio_pane

0x1541,	// (0x0003ea22) main_graph_messa_pane

0x0747,	// (0x0003dc28) main_help_pane

0x0ab1,	// (0x0003df92) main_im_pane

0x09a2,	// (0x0003de83) main_image_pane_ParamLimits

0x09a2,	// (0x0003de83) main_image_pane

0x0747,	// (0x0003dc28) main_location2_pane

0x1541,	// (0x0003ea22) main_location_pane

0x0747,	// (0x0003dc28) main_messa_pane

0x0747,	// (0x0003dc28) main_mp2_pane

0x1541,	// (0x0003ea22) main_mp_pane

0x0747,	// (0x0003dc28) main_msg_pane

0x0747,	// (0x0003dc28) main_mup_eq_pane

0x0747,	// (0x0003dc28) main_mup_pane

0x1541,	// (0x0003ea22) main_notes_pane

0x0747,	// (0x0003dc28) main_pec_pane

0x0747,	// (0x0003dc28) main_phob_pane

0x0747,	// (0x0003dc28) main_pinb_pane

0x0747,	// (0x0003dc28) main_postcard_pane

0x0747,	// (0x0003dc28) main_qdial_pane

0x1541,	// (0x0003ea22) main_skin_pane

0x0747,	// (0x0003dc28) main_smil2_pane

0x1541,	// (0x0003ea22) main_smil_pane

0x1541,	// (0x0003ea22) main_video_pane

0x1541,	// (0x0003ea22) main_video_tele_pane

0x09a2,	// (0x0003de83) main_viewer_pane_ParamLimits

0x09a2,	// (0x0003de83) main_viewer_pane

0x1541,	// (0x0003ea22) main_vorec_pane

0x6e06,	// (0x000442e7) popup_blid_sat_info_window_ParamLimits

0x6e06,	// (0x000442e7) popup_blid_sat_info_window

0x6e68,	// (0x00044349) popup_dyc_status_message_window_ParamLimits

0x6e68,	// (0x00044349) popup_dyc_status_message_window

0x6e80,	// (0x00044361) popup_grid_large_graphic_window_ParamLimits

0x6e80,	// (0x00044361) popup_grid_large_graphic_window

0x6f51,	// (0x00044432) popup_loc_request_window_ParamLimits

0x6f51,	// (0x00044432) popup_loc_request_window

0x7061,	// (0x00044542) popup_wml_address_window_ParamLimits

0x7061,	// (0x00044542) popup_wml_address_window

0x6b9d,	// (0x0004407e) call_muted_g1

0x59a0,	// (0x00042e81) popup_call_audio_conf_window_ParamLimits

0x59a0,	// (0x00042e81) popup_call_audio_conf_window

0x6bb1,	// (0x00044092) popup_call_audio_first_window_ParamLimits

0x6bb1,	// (0x00044092) popup_call_audio_first_window

0x6c27,	// (0x00044108) popup_call_audio_in_window_ParamLimits

0x6c27,	// (0x00044108) popup_call_audio_in_window

0x6c63,	// (0x00044144) popup_call_audio_out_window_ParamLimits

0x6c63,	// (0x00044144) popup_call_audio_out_window

0x6c9d,	// (0x0004417e) popup_call_audio_second_window_ParamLimits

0x6c9d,	// (0x0004417e) popup_call_audio_second_window

0x6cf3,	// (0x000441d4) popup_call_audio_wait_window_ParamLimits

0x6cf3,	// (0x000441d4) popup_call_audio_wait_window

0x6d28,	// (0x00044209) popup_number_entry_window_ParamLimits

0x6d28,	// (0x00044209) popup_number_entry_window

0x0336,	// (0x0003d817) bg_popup_call_pane_cp05_ParamLimits

0x0336,	// (0x0003d817) bg_popup_call_pane_cp05

0x0356,	// (0x0003d837) popup_number_entry_window_t1

0x0369,	// (0x0003d84a) popup_number_entry_window_t2

0x037b,	// (0x0003d85c) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0004c5dc) popup_number_entry_window_t

0x038d,	// (0x0003d86e) text_title_cp2

0x03a0,	// (0x0003d881) bg_popup_call_pane_cp_ParamLimits

0x03a0,	// (0x0003d881) bg_popup_call_pane_cp

0x03ae,	// (0x0003d88f) call_thumbnail_pane

0x03b6,	// (0x0003d897) popup_call_audio_in_window_g1_ParamLimits

0x03b6,	// (0x0003d897) popup_call_audio_in_window_g1

0x03c2,	// (0x0003d8a3) popup_call_audio_in_window_g2_ParamLimits

0x03c2,	// (0x0003d8a3) popup_call_audio_in_window_g2

0x03ce,	// (0x0003d8af) popup_call_audio_in_window_g3_ParamLimits

0x03ce,	// (0x0003d8af) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0004c5e5) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0004c5e5) popup_call_audio_in_window_g

0x03da,	// (0x0003d8bb) popup_call_audio_in_window_t1_ParamLimits

0x03da,	// (0x0003d8bb) popup_call_audio_in_window_t1

0x03f5,	// (0x0003d8d6) popup_call_audio_in_window_t2_ParamLimits

0x03f5,	// (0x0003d8d6) popup_call_audio_in_window_t2

0x0410,	// (0x0003d8f1) popup_call_audio_in_window_t3_ParamLimits

0x0410,	// (0x0003d8f1) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0004c5ec) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0004c5ec) popup_call_audio_in_window_t

0x03a0,	// (0x0003d881) bg_popup_call_pane_cp01_ParamLimits

0x03a0,	// (0x0003d881) bg_popup_call_pane_cp01

0x03ae,	// (0x0003d88f) call_thumbnail_pane_cp02

0x0423,	// (0x0003d904) call_type_pane_cp022

0x042b,	// (0x0003d90c) popup_call_audio_out_window_g1_ParamLimits

0x042b,	// (0x0003d90c) popup_call_audio_out_window_g1

0x043d,	// (0x0003d91e) popup_call_audio_out_window_g2_ParamLimits

0x043d,	// (0x0003d91e) popup_call_audio_out_window_g2

0x0449,	// (0x0003d92a) popup_call_audio_out_window_g3_ParamLimits

0x0449,	// (0x0003d92a) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0004c5f3) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0004c5f3) popup_call_audio_out_window_g

0x045b,	// (0x0003d93c) popup_call_audio_out_window_t1_ParamLimits

0x045b,	// (0x0003d93c) popup_call_audio_out_window_t1

0x0473,	// (0x0003d954) popup_call_audio_out_window_t2_ParamLimits

0x0473,	// (0x0003d954) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0004c5fa) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0004c5fa) popup_call_audio_out_window_t

0x0488,	// (0x0003d969) bg_popup_call_pane_ParamLimits

0x0488,	// (0x0003d969) bg_popup_call_pane

0x358e,	// (0x00040a6f) call_thumbnail_pane_cp_ParamLimits

0x358e,	// (0x00040a6f) call_thumbnail_pane_cp

0x050c,	// (0x0003d9ed) call_type_pane_cp01_ParamLimits

0x050c,	// (0x0003d9ed) call_type_pane_cp01

0x0550,	// (0x0003da31) popup_call_audio_first_window_g1_ParamLimits

0x0550,	// (0x0003da31) popup_call_audio_first_window_g1

0x059c,	// (0x0003da7d) popup_call_audio_first_window_g2_ParamLimits

0x059c,	// (0x0003da7d) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0004c5ff) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0004c5ff) popup_call_audio_first_window_g

0x05e0,	// (0x0003dac1) popup_call_audio_first_window_t1_ParamLimits

0x05e0,	// (0x0003dac1) popup_call_audio_first_window_t1

0x068c,	// (0x0003db6d) popup_call_audio_first_window_t4_ParamLimits

0x068c,	// (0x0003db6d) popup_call_audio_first_window_t4

0x0718,	// (0x0003dbf9) popup_call_audio_first_window_t5_ParamLimits

0x0718,	// (0x0003dbf9) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0004c604) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0004c604) popup_call_audio_first_window_t

0x0747,	// (0x0003dc28) bg_popup_call_pane_cp02

0x0751,	// (0x0003dc32) call_type_pane_cp023

0x0759,	// (0x0003dc3a) popup_call_audio_wait_window_g1

0x0761,	// (0x0003dc42) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004c60b) popup_call_audio_wait_window_g

0x0769,	// (0x0003dc4a) popup_call_audio_wait_window_t3

0x0777,	// (0x0003dc58) bg_popup_call_pane_cp03_ParamLimits

0x0777,	// (0x0003dc58) bg_popup_call_pane_cp03

0x07d7,	// (0x0003dcb8) call_thumbnail_pane_cp011_ParamLimits

0x07d7,	// (0x0003dcb8) call_thumbnail_pane_cp011

0x07e3,	// (0x0003dcc4) call_type_pane_cp034_ParamLimits

0x07e3,	// (0x0003dcc4) call_type_pane_cp034

0x081f,	// (0x0003dd00) popup_call_audio_second_window_g1_ParamLimits

0x081f,	// (0x0003dd00) popup_call_audio_second_window_g1

0x085b,	// (0x0003dd3c) popup_call_audio_second_window_g2_ParamLimits

0x085b,	// (0x0003dd3c) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0004c610) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0004c610) popup_call_audio_second_window_g

0x0897,	// (0x0003dd78) popup_call_audio_second_window_t1_ParamLimits

0x0897,	// (0x0003dd78) popup_call_audio_second_window_t1

0x0918,	// (0x0003ddf9) popup_call_audio_second_window_t2_ParamLimits

0x0918,	// (0x0003ddf9) popup_call_audio_second_window_t2

0x094e,	// (0x0003de2f) popup_call_audio_second_window_t3_ParamLimits

0x094e,	// (0x0003de2f) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0004c615) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0004c615) popup_call_audio_second_window_t

0x0747,	// (0x0003dc28) bg_popup_call_pane_cp04

0x0984,	// (0x0003de65) list_conf_pane

0x098c,	// (0x0003de6d) popup_call_audio_conf_window_t1

0x099a,	// (0x0003de7b) call_thumbnail_pane_g1

0x09a2,	// (0x0003de83) bg_pinb_pane_ParamLimits

0x09a2,	// (0x0003de83) bg_pinb_pane

0x09b0,	// (0x0003de91) find_pinb_pane

0x09b9,	// (0x0003de9a) listscroll_pinb_pane_ParamLimits

0x09b9,	// (0x0003de9a) listscroll_pinb_pane

0x09c8,	// (0x0003dea9) pinb_bg_pane_g1

0x35b2,	// (0x00040a93) pinb_bg_pane_g2

0x35be,	// (0x00040a9f) pinb_bg_pane_g3

0x35ca,	// (0x00040aab) pinb_bg_pane_g4

0x35d6,	// (0x00040ab7) pinb_bg_pane_g5

0x35e2,	// (0x00040ac3) pinb_bg_pane_g6

0x35ed,	// (0x00040ace) pinb_bg_pane_g7

0x35f8,	// (0x00040ad9) pinb_bg_pane_g8

0x3603,	// (0x00040ae4) pinb_bg_pane_g9

0x360d,	// (0x00040aee) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0004c61c) pinb_bg_pane_g

0x3622,	// (0x00040b03) grid_pinb_pane

0x362b,	// (0x00040b0c) list_pinb_pane

0x3634,	// (0x00040b15) scroll_pane_cp01_ParamLimits

0x3634,	// (0x00040b15) scroll_pane_cp01

0x09da,	// (0x0003debb) find_pinb_pane_g1_ParamLimits

0x09da,	// (0x0003debb) find_pinb_pane_g1

0x09f2,	// (0x0003ded3) find_pinb_pane_t1

0x0a04,	// (0x0003dee5) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0004c636) find_pinb_pane_t

0x0a19,	// (0x0003defa) input_focus_pane_cp01_ParamLimits

0x0a19,	// (0x0003defa) input_focus_pane_cp01

0x3646,	// (0x00040b27) cell_pinb_pane_ParamLimits

0x3646,	// (0x00040b27) cell_pinb_pane

0x3678,	// (0x00040b59) cell_pinb_pane_g1_ParamLimits

0x3678,	// (0x00040b59) cell_pinb_pane_g1

0x3688,	// (0x00040b69) cell_pinb_pane_g2_ParamLimits

0x3688,	// (0x00040b69) cell_pinb_pane_g2

0x0a25,	// (0x0003df06) cell_pinb_pane_g3_ParamLimits

0x0a25,	// (0x0003df06) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0004c63b) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0004c63b) cell_pinb_pane_g

0x0747,	// (0x0003dc28) grid_highlight_pane_cp01

0x3694,	// (0x00040b75) list_pinb_item_pane_ParamLimits

0x3694,	// (0x00040b75) list_pinb_item_pane

0x0747,	// (0x0003dc28) list_highlight_pane_cp02

0x0a31,	// (0x0003df12) list_pinb_item_pane_g1_ParamLimits

0x0a31,	// (0x0003df12) list_pinb_item_pane_g1

0x0a3e,	// (0x0003df1f) list_pinb_item_pane_g2_ParamLimits

0x0a3e,	// (0x0003df1f) list_pinb_item_pane_g2

0x36a8,	// (0x00040b89) list_pinb_item_pane_g3_ParamLimits

0x36a8,	// (0x00040b89) list_pinb_item_pane_g3

0x0a4a,	// (0x0003df2b) list_pinb_item_pane_g4_ParamLimits

0x0a4a,	// (0x0003df2b) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0004c642) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0004c642) list_pinb_item_pane_g

0x0a56,	// (0x0003df37) list_pinb_item_pane_t1_ParamLimits

0x0a56,	// (0x0003df37) list_pinb_item_pane_t1

0x36d7,	// (0x00040bb8) calc_display_pane

0x36fd,	// (0x00040bde) calc_paper_pane

0x3720,	// (0x00040c01) grid_calc_pane

0x0747,	// (0x0003dc28) bg_list_pane_cp01

0x374c,	// (0x00040c2d) clock_g1

0x3754,	// (0x00040c35) clock_g2

0x0001,

0xf16a,	// (0x0004c64b) clock_g

0x375c,	// (0x00040c3d) clock_t1_ParamLimits

0x375c,	// (0x00040c3d) clock_t1

0x3771,	// (0x00040c52) clock_t2_ParamLimits

0x3771,	// (0x00040c52) clock_t2

0x3783,	// (0x00040c64) clock_t3_ParamLimits

0x3783,	// (0x00040c64) clock_t3

0x3795,	// (0x00040c76) clock_t4_ParamLimits

0x3795,	// (0x00040c76) clock_t4

0x37a7,	// (0x00040c88) clock_t5_ParamLimits

0x37a7,	// (0x00040c88) clock_t5

0x37bc,	// (0x00040c9d) clock_t6_ParamLimits

0x37bc,	// (0x00040c9d) clock_t6

0x37ce,	// (0x00040caf) clock_t7_ParamLimits

0x37ce,	// (0x00040caf) clock_t7

0x37e0,	// (0x00040cc1) clock_t8_ParamLimits

0x37e0,	// (0x00040cc1) clock_t8

0x37f4,	// (0x00040cd5) clock_t9_ParamLimits

0x37f4,	// (0x00040cd5) clock_t9

0x0008,

0xf16f,	// (0x0004c650) clock_t_ParamLimits

0xf16f,	// (0x0004c650) clock_t

0x0a6d,	// (0x0003df4e) popup_clock_analogue_window_cp02

0x0a6d,	// (0x0003df4e) popup_clock_digital_window_cp01

0x0a75,	// (0x0003df56) listscroll_help_pane

0x0747,	// (0x0003dc28) phob_pre_status_pane

0x0a7f,	// (0x0003df60) grid_qdial_pane

0x0747,	// (0x0003dc28) listscroll_mce_pane

0x0a89,	// (0x0003df6a) bg_notes_pane

0x0a93,	// (0x0003df74) list_notes_pane

0x3808,	// (0x00040ce9) scroll_pane_cp06

0x0a9d,	// (0x0003df7e) bg_calc_paper_pane

0xc2f8,	// (0x000497d9) list_calc_pane

0x0ab1,	// (0x0003df92) bg_calc_display_pane

0x3813,	// (0x00040cf4) calc_display_pane_t1

0x3825,	// (0x00040d06) calc_display_pane_t2

0xc312,	// (0x000497f3) calc_display_pane_t3

0x0002,

0xf182,	// (0x0004c663) calc_display_pane_t

0x3837,	// (0x00040d18) cell_calc_pane_ParamLimits

0x3837,	// (0x00040d18) cell_calc_pane

0x0abd,	// (0x0003df9e) bg_calc_paper_pane_g1

0x0ac9,	// (0x0003dfaa) bg_calc_paper_pane_g2

0x0ad5,	// (0x0003dfb6) bg_calc_paper_pane_g3

0x0ae1,	// (0x0003dfc2) bg_calc_paper_pane_g4

0x0aed,	// (0x0003dfce) bg_calc_paper_pane_g5

0x386c,	// (0x00040d4d) bg_calc_paper_pane_g6

0x387b,	// (0x00040d5c) bg_calc_paper_pane_g7

0x388a,	// (0x00040d6b) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0004c66a) bg_calc_paper_pane_g

0x389d,	// (0x00040d7e) calc_bg_paper_pane_g9

0x38b0,	// (0x00040d91) list_calc_item_pane_ParamLimits

0x38b0,	// (0x00040d91) list_calc_item_pane

0x0af9,	// (0x0003dfda) list_calc_item_pane_g1

0xc324,	// (0x00049805) list_calc_item_pane_t1_ParamLimits

0xc324,	// (0x00049805) list_calc_item_pane_t1

0x38c6,	// (0x00040da7) list_calc_item_pane_t2_ParamLimits

0x38c6,	// (0x00040da7) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0004c67b) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0004c67b) list_calc_item_pane_t

0x0b06,	// (0x0003dfe7) cell_calc_pane_g1

0x0b10,	// (0x0003dff1) grid_highlight_pane_cp02

0x0b32,	// (0x0003e013) bg_calc_display_pane_g1

0xc336,	// (0x00049817) bg_calc_display_pane_g2

0x0b3b,	// (0x0003e01c) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0004c685) bg_calc_display_pane_g

0x38fa,	// (0x00040ddb) cell_qdial_pane_ParamLimits

0x38fa,	// (0x00040ddb) cell_qdial_pane

0x390e,	// (0x00040def) cell_qdial_pane_g1_ParamLimits

0x390e,	// (0x00040def) cell_qdial_pane_g1

0x3924,	// (0x00040e05) cell_qdial_pane_g2_ParamLimits

0x3924,	// (0x00040e05) cell_qdial_pane_g2

0x0b44,	// (0x0003e025) cell_qdial_pane_g3_ParamLimits

0x0b44,	// (0x0003e025) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0004c68c) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0004c68c) cell_qdial_pane_g

0x394b,	// (0x00040e2c) cell_qdial_pane_t1_ParamLimits

0x394b,	// (0x00040e2c) cell_qdial_pane_t1

0x3963,	// (0x00040e44) cell_qdial_pane_t2_ParamLimits

0x3963,	// (0x00040e44) cell_qdial_pane_t2

0x3976,	// (0x00040e57) cell_qdial_pane_t3_ParamLimits

0x3976,	// (0x00040e57) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0004c695) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0004c695) cell_qdial_pane_t

0x0747,	// (0x0003dc28) grid_highlight_pane_cp04

0x0b50,	// (0x0003e031) thumbnail_qdial_pane_ParamLimits

0x0b50,	// (0x0003e031) thumbnail_qdial_pane

0x0bac,	// (0x0003e08d) list_help_pane

0x0bb5,	// (0x0003e096) scroll_pane_cp02

0x3989,	// (0x00040e6a) help_list_pane_t1_ParamLimits

0x3989,	// (0x00040e6a) help_list_pane_t1

0xc340,	// (0x00049821) bg_notes_pane_g2

0xc348,	// (0x00049829) bg_notes_pane_g3

0xc350,	// (0x00049831) notes_bg_pane_g1

0xc358,	// (0x00049839) notes_bg_pane_g4

0xc360,	// (0x00049841) notes_bg_pane_g5

0xc368,	// (0x00049849) notes_bg_pane_g6

0xc370,	// (0x00049851) notes_bg_pane_g7

0xc378,	// (0x00049859) notes_bg_pane_g8

0xc380,	// (0x00049861) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0004c6b3) notes_bg_pane_g

0x1a74,	// (0x0003ef55) list_notes_text_pane_ParamLimits

0x1a74,	// (0x0003ef55) list_notes_text_pane

0x0bbe,	// (0x0003e09f) list_notes_text_pane_g1

0x2903,	// (0x0003fde4) list_notes_text_pane_t1

0x0ab1,	// (0x0003df92) listscroll_cale_week_pane

0x39c6,	// (0x00040ea7) bg_cale_heading_pane

0x0bd8,	// (0x0003e0b9) bg_cale_pane_cp01

0x39de,	// (0x00040ebf) cale_week_corner_pane

0x39ef,	// (0x00040ed0) cale_week_day_heading_pane

0x3a07,	// (0x00040ee8) cale_week_scroll_pane_g1

0x3a1c,	// (0x00040efd) cale_week_scroll_pane_g2

0x3a2d,	// (0x00040f0e) cale_week_scroll_pane_g3

0x3a3e,	// (0x00040f1f) cale_week_scroll_pane_g4

0x3a4f,	// (0x00040f30) cale_week_scroll_pane_g5

0x3a60,	// (0x00040f41) cale_week_scroll_pane_g6

0x3a71,	// (0x00040f52) cale_week_scroll_pane_g7

0x3a82,	// (0x00040f63) cale_week_scroll_pane_g8

0x3a93,	// (0x00040f74) cale_week_scroll_pane_g9

0x3aa4,	// (0x00040f85) cale_week_scroll_pane_g10

0x3ab5,	// (0x00040f96) cale_week_scroll_pane_g11

0x3ac6,	// (0x00040fa7) cale_week_scroll_pane_g12

0x3ad7,	// (0x00040fb8) cale_week_scroll_pane_g13

0x3ae8,	// (0x00040fc9) cale_week_scroll_pane_g14

0x3af9,	// (0x00040fda) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0004c6c2) cale_week_scroll_pane_g

0x3b0a,	// (0x00040feb) cale_week_time_pane

0x3b1b,	// (0x00040ffc) grid_cale_week_pane

0x3b2e,	// (0x0004100f) scroll_pane_cp08

0x3b48,	// (0x00041029) cell_cale_week_pane_ParamLimits

0x3b48,	// (0x00041029) cell_cale_week_pane

0x3b84,	// (0x00041065) cale_week_day_heading_pane_t1

0x3b98,	// (0x00041079) cale_week_day_heading_pane_t2

0x3bac,	// (0x0004108d) cale_week_day_heading_pane_t3

0x3bc0,	// (0x000410a1) cale_week_day_heading_pane_t4

0x3bd4,	// (0x000410b5) cale_week_day_heading_pane_t5

0x3be8,	// (0x000410c9) cale_week_day_heading_pane_t6

0x3bfc,	// (0x000410dd) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0004c6e1) cale_week_day_heading_pane_t

0x0c03,	// (0x0003e0e4) bg_cale_side_pane

0x3c10,	// (0x000410f1) cale_week_time_pane_t1

0x3c28,	// (0x00041109) cale_week_time_pane_t2

0x3c40,	// (0x00041121) cale_week_time_pane_t3

0x3c58,	// (0x00041139) cale_week_time_pane_t4

0x3c70,	// (0x00041151) cale_week_time_pane_t5

0x3c88,	// (0x00041169) cale_week_time_pane_t6

0x3ca0,	// (0x00041181) cale_week_time_pane_t7

0x3cb8,	// (0x00041199) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0004c6f0) cale_week_time_pane_t

0x3cd0,	// (0x000411b1) cell_cale_week_pane_g2

0x3cec,	// (0x000411cd) cell_cale_week_pane_g3_ParamLimits

0x3cec,	// (0x000411cd) cell_cale_week_pane_g3

0x0c11,	// (0x0003e0f2) grid_highlight_pane_cp07

0x0c19,	// (0x0003e0fa) listscroll_gms_pane

0x0c23,	// (0x0003e104) grid_gms_pane

0x0c2c,	// (0x0003e10d) listscroll_gms_pane_g1

0x0c34,	// (0x0003e115) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0004c701) listscroll_gms_pane_g

0x3d04,	// (0x000411e5) scroll_pane_cp010

0x3d0f,	// (0x000411f0) cell_gms_pane_ParamLimits

0x3d0f,	// (0x000411f0) cell_gms_pane

0x3d22,	// (0x00041203) cell_gms_pane_g1

0x0c3c,	// (0x0003e11d) cell_gms_pane_g2

0x0bbe,	// (0x0003e09f) cell_gms_pane_g3

0x0c44,	// (0x0003e125) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0004c706) cell_gms_pane_g

0x0c4d,	// (0x0003e12e) grid_highlight_pane_cp09

0x6b25,	// (0x00044006) phob_pre_status_pane_g1

0x6b2d,	// (0x0004400e) phob_pre_status_pane_g2

0x6b35,	// (0x00044016) phob_pre_status_pane_g3

0x6b3d,	// (0x0004401e) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0004caf5) phob_pre_status_pane_g

0x6b4f,	// (0x00044030) phob_pre_status_pane_t1

0x6b5d,	// (0x0004403e) phob_pre_status_pane_t2

0x6b6d,	// (0x0004404e) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0004cb00) phob_pre_status_pane_t

0x0747,	// (0x0003dc28) bg_list_pane_cp05

0xc390,	// (0x00049871) grid_vorec_pane

0xc398,	// (0x00049879) vorec_t1

0xc3a6,	// (0x00049887) vorec_t2

0xc3b4,	// (0x00049895) vorec_t3

0xc3c2,	// (0x000498a3) vorec_t4

0xc3d0,	// (0x000498b1) vorec_t5

0xc3de,	// (0x000498bf) vorec_t6

0x0006,

0xf22e,	// (0x0004c70f) vorec_t

0xc3fa,	// (0x000498db) wait_bar_pane_cp01

0x0c55,	// (0x0003e136) cell_vorec_pane_ParamLimits

0x0c55,	// (0x0003e136) cell_vorec_pane

0x0c68,	// (0x0003e149) cell_vorec_pane_g1

0x0747,	// (0x0003dc28) grid_highlight_pane_cp05

0x3d42,	// (0x00041223) cams_zoom_pane

0x3d51,	// (0x00041232) image_vga_pane

0x3d6b,	// (0x0004124c) main_camera_pane_g1

0x3d7d,	// (0x0004125e) main_camera_pane_g2

0x3d8f,	// (0x00041270) main_camera_pane_g3

0x3da1,	// (0x00041282) main_camera_pane_g4

0x3db3,	// (0x00041294) main_camera_pane_g5

0x3dc5,	// (0x000412a6) main_camera_pane_g6

0x3dd7,	// (0x000412b8) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0004c71e) main_camera_pane_g

0x3de9,	// (0x000412ca) main_camera_pane_t1

0x3dff,	// (0x000412e0) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0004c72f) main_camera_pane_t

0x3e3b,	// (0x0004131c) cams_zoom_pane_cp_ParamLimits

0x3e3b,	// (0x0004131c) cams_zoom_pane_cp

0x3e63,	// (0x00041344) image_cif_pane_ParamLimits

0x3e63,	// (0x00041344) image_cif_pane

0x3e9e,	// (0x0004137f) image_subqcif_pane

0x3ea6,	// (0x00041387) main_video_pane_g1_ParamLimits

0x3ea6,	// (0x00041387) main_video_pane_g1

0x3eca,	// (0x000413ab) main_video_pane_g2_ParamLimits

0x3eca,	// (0x000413ab) main_video_pane_g2

0x3f00,	// (0x000413e1) main_video_pane_g3_ParamLimits

0x3f00,	// (0x000413e1) main_video_pane_g3

0x3f30,	// (0x00041411) main_video_pane_g4_ParamLimits

0x3f30,	// (0x00041411) main_video_pane_g4

0x3f60,	// (0x00041441) main_video_pane_g5_ParamLimits

0x3f60,	// (0x00041441) main_video_pane_g5

0x0c7e,	// (0x0003e15f) main_video_pane_g6_ParamLimits

0x0c7e,	// (0x0003e15f) main_video_pane_g6

0x0006,

0xf253,	// (0x0004c734) main_video_pane_g_ParamLimits

0xf253,	// (0x0004c734) main_video_pane_g

0x3f8b,	// (0x0004146c) main_video_pane_t1_ParamLimits

0x3f8b,	// (0x0004146c) main_video_pane_t1

0x0c98,	// (0x0003e179) cams_zoom_pane_g1

0x0ca1,	// (0x0003e182) cams_zoom_pane_g2

0x0caa,	// (0x0003e18b) cams_zoom_pane_g3

0x0cb3,	// (0x0003e194) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0004c743) cams_zoom_pane_g

0x3fe8,	// (0x000414c9) grid_cams_pane

0x4002,	// (0x000414e3) linegrid_cams_pane

0x4015,	// (0x000414f6) cell_cams_pane_ParamLimits

0x4015,	// (0x000414f6) cell_cams_pane

0x0cbc,	// (0x0003e19d) cams_burst_image_pane

0x0cc4,	// (0x0003e1a5) cell_cams_pane_g1

0x0747,	// (0x0003dc28) grid_highlight_pane_cp03

0x0b06,	// (0x0003dfe7) mp_bg_pane_g1

0x0747,	// (0x0003dc28) bg_list_pane_cp03

0x6a5a,	// (0x00043f3b) bg_mp_pane

0x6a62,	// (0x00043f43) grid_mp_pane

0x6a6a,	// (0x00043f4b) media_player_g1

0x6a72,	// (0x00043f53) media_player_t1

0x6a80,	// (0x00043f61) media_player_t2

0x6a8e,	// (0x00043f6f) media_player_t3

0x6a9c,	// (0x00043f7d) media_player_t4

0x6aaa,	// (0x00043f8b) media_player_t5

0x6ab8,	// (0x00043f99) media_player_t6

0x6ac6,	// (0x00043fa7) media_player_t7

0x0006,

0xf5fe,	// (0x0004cadf) media_player_t

0x6ad4,	// (0x00043fb5) wait_bar_pane_cp02

0xf5e3,	// (0x0004cac4) main_usb_pane_t

0x6b1c,	// (0x00043ffd) cell_mp_pane

0x0b06,	// (0x0003dfe7) cell_mp_pane_g1

0x0747,	// (0x0003dc28) grid_highlight_pane_cp06

0x0ccc,	// (0x0003e1ad) grid_skin_colour_pane

0x0cd4,	// (0x0003e1b5) list_highlight_pane_cp03

0x4035,	// (0x00041516) skin_g1

0x0cdc,	// (0x0003e1bd) skin_t1

0x0ceb,	// (0x0003e1cc) skin_t2

0x0001,

0xf297,	// (0x0004c778) skin_t

0x403d,	// (0x0004151e) cell_skin_colour_pane_ParamLimits

0x403d,	// (0x0004151e) cell_skin_colour_pane

0x0cf9,	// (0x0003e1da) cell_skin_colour_pane_g1

0x409b,	// (0x0004157c) call_video_g1_ParamLimits

0x409b,	// (0x0004157c) call_video_g1

0x40b7,	// (0x00041598) call_video_g2_ParamLimits

0x40b7,	// (0x00041598) call_video_g2

0x0001,

0xf29c,	// (0x0004c77d) call_video_g_ParamLimits

0xf29c,	// (0x0004c77d) call_video_g

0x40ed,	// (0x000415ce) call_video_uplink_pane_cp1_ParamLimits

0x40ed,	// (0x000415ce) call_video_uplink_pane_cp1

0x0d13,	// (0x0003e1f4) call_video_uplink_pane_cp2

0x416b,	// (0x0004164c) video_down_crop_pane_ParamLimits

0x416b,	// (0x0004164c) video_down_crop_pane

0x4231,	// (0x00041712) video_down_pane_ParamLimits

0x4231,	// (0x00041712) video_down_pane

0x0d1b,	// (0x0003e1fc) video_down_subqcif_pane_ParamLimits

0x0d1b,	// (0x0003e1fc) video_down_subqcif_pane

0x0d33,	// (0x0003e214) video_down_subqcif_pane_cp_ParamLimits

0x0d33,	// (0x0003e214) video_down_subqcif_pane_cp

0x0d57,	// (0x0003e238) im_reading_pane_ParamLimits

0x0d57,	// (0x0003e238) im_reading_pane

0x4302,	// (0x000417e3) im_writing_pane_ParamLimits

0x4302,	// (0x000417e3) im_writing_pane

0x4318,	// (0x000417f9) im_reading_pane_t1

0x0d71,	// (0x0003e252) list_im_pane

0x0d82,	// (0x0003e263) scroll_pane_cp07

0x4354,	// (0x00041835) im_writing_pane_t1_ParamLimits

0x4354,	// (0x00041835) im_writing_pane_t1

0x0d9b,	// (0x0003e27c) im_writing_pane_t2_ParamLimits

0x0d9b,	// (0x0003e27c) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0004c787) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0004c787) im_writing_pane_t

0x0747,	// (0x0003dc28) input_focus_pane_cp04

0x0747,	// (0x0003dc28) input_focus_pane_cp05

0x4369,	// (0x0004184a) list_im_single_pane_ParamLimits

0x4369,	// (0x0004184a) list_im_single_pane

0x437f,	// (0x00041860) list_single_im_pane_t1

0x6adc,	// (0x00043fbd) blid_accuracy_pane

0x6ae4,	// (0x00043fc5) blid_compass_pane

0x6aee,	// (0x00043fcf) main_location_t1

0x6afe,	// (0x00043fdf) main_location_t2

0x6b0e,	// (0x00043fef) main_location_t3

0x0002,

0xf60d,	// (0x0004caee) main_location_t

0x0747,	// (0x0003dc28) aid_levels_location

0x0b06,	// (0x0003dfe7) blid_accuracy_pane_g1

0x0b06,	// (0x0003dfe7) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0004c7e9) blid_accuracy_pane_g

0x0de3,	// (0x0003e2c4) wml_content_pane

0x0e21,	// (0x0003e302) wml_button_pane_ParamLimits

0x0e21,	// (0x0003e302) wml_button_pane

0x438e,	// (0x0004186f) wml_list_single_large_pane_ParamLimits

0x438e,	// (0x0004186f) wml_list_single_large_pane

0x43a5,	// (0x00041886) wml_list_single_medium_pane_ParamLimits

0x43a5,	// (0x00041886) wml_list_single_medium_pane

0x43bd,	// (0x0004189e) wml_list_single_small_pane_ParamLimits

0x43bd,	// (0x0004189e) wml_list_single_small_pane

0x0e35,	// (0x0003e316) wml_selection_box_pane_ParamLimits

0x0e35,	// (0x0003e316) wml_selection_box_pane

0x0e48,	// (0x0003e329) wml_list_single_pane_t1

0x0e57,	// (0x0003e338) wml_list_single_medium_pane_t1

0x0e66,	// (0x0003e347) wml_list_single_large_pane_t1

0x0e75,	// (0x0003e356) input_focus_pane_cp02_ParamLimits

0x0e75,	// (0x0003e356) input_focus_pane_cp02

0x0e88,	// (0x0003e369) wml_selection_box_pane_g1

0x0e91,	// (0x0003e372) wml_selection_box_pane_t1_ParamLimits

0x0e91,	// (0x0003e372) wml_selection_box_pane_t1

0x09a2,	// (0x0003de83) bg_wml_button_pane_ParamLimits

0x09a2,	// (0x0003de83) bg_wml_button_pane

0x0ea9,	// (0x0003e38a) wml_button_pane_g1

0x0eb1,	// (0x0003e392) wml_button_pane_t1

0x0ea9,	// (0x0003e38a) wml_button_bg_pane_g1

0x0ec1,	// (0x0003e3a2) wml_button_bg_pane_g2

0x0ec9,	// (0x0003e3aa) wml_button_bg_pane_g3

0x0ed1,	// (0x0003e3b2) wml_button_bg_pane_g4

0x0ed9,	// (0x0003e3ba) wml_button_bg_pane_g5

0x0ee1,	// (0x0003e3c2) wml_button_bg_pane_g6

0x0ee9,	// (0x0003e3ca) wml_button_bg_pane_g7

0x0ef1,	// (0x0003e3d2) wml_button_bg_pane_g8

0x0ef9,	// (0x0003e3da) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0004c78c) wml_button_bg_pane_g

0x43db,	// (0x000418bc) bg_list_pane_cp02

0x0f01,	// (0x0003e3e2) mce_header_pane_ParamLimits

0x0f01,	// (0x0003e3e2) mce_header_pane

0x0f17,	// (0x0003e3f8) mce_icon_pane

0x0f17,	// (0x0003e3f8) mce_image_pane

0x0f20,	// (0x0003e401) mce_text_pane_ParamLimits

0x0f20,	// (0x0003e401) mce_text_pane

0x43e3,	// (0x000418c4) scroll_pane_cp03

0x0e19,	// (0x0003e2fa) scroll_pane_cp04

0x0f33,	// (0x0003e414) scroll_pane_cp05_ParamLimits

0x0f33,	// (0x0003e414) scroll_pane_cp05

0x43ed,	// (0x000418ce) mce_header_field_pane_ParamLimits

0x43ed,	// (0x000418ce) mce_header_field_pane

0x4404,	// (0x000418e5) mce_header_field_pane_2_ParamLimits

0x4404,	// (0x000418e5) mce_header_field_pane_2

0x441a,	// (0x000418fb) mce_header_field_pane_3

0x4422,	// (0x00041903) list_single_mce_message_pane_ParamLimits

0x4422,	// (0x00041903) list_single_mce_message_pane

0x443a,	// (0x0004191b) list_single_mce_smart_pane_ParamLimits

0x443a,	// (0x0004191b) list_single_mce_smart_pane

0x0f3f,	// (0x0003e420) input_focus_pane_cp03

0x0f48,	// (0x0003e429) list_header_data_pane

0x445d,	// (0x0004193e) mce_header_field_pane_t1

0x446d,	// (0x0004194e) list_single_mce_header_pane_ParamLimits

0x446d,	// (0x0004194e) list_single_mce_header_pane

0x0f50,	// (0x0003e431) list_single_mce_header_pane_t1

0x0f5f,	// (0x0003e440) list_single_mce_message_pane_g1

0x0f67,	// (0x0003e448) list_single_mce_message_pane_t1

0x449f,	// (0x00041980) bg_cale_heading_pane_cp01_ParamLimits

0x449f,	// (0x00041980) bg_cale_heading_pane_cp01

0x0f75,	// (0x0003e456) bg_cale_pane_cp02_ParamLimits

0x0f75,	// (0x0003e456) bg_cale_pane_cp02

0x44c2,	// (0x000419a3) cale_month_corner_pane

0x44d8,	// (0x000419b9) cale_month_day_heading_pane_ParamLimits

0x44d8,	// (0x000419b9) cale_month_day_heading_pane

0x4503,	// (0x000419e4) cale_month_pane_g1_ParamLimits

0x4503,	// (0x000419e4) cale_month_pane_g1

0x451f,	// (0x00041a00) cale_month_pane_g2_ParamLimits

0x451f,	// (0x00041a00) cale_month_pane_g2

0x4538,	// (0x00041a19) cale_month_pane_g3_ParamLimits

0x4538,	// (0x00041a19) cale_month_pane_g3

0x4564,	// (0x00041a45) cale_month_pane_g4_ParamLimits

0x4564,	// (0x00041a45) cale_month_pane_g4

0x4590,	// (0x00041a71) cale_month_pane_g5_ParamLimits

0x4590,	// (0x00041a71) cale_month_pane_g5

0x45bc,	// (0x00041a9d) cale_month_pane_g6_ParamLimits

0x45bc,	// (0x00041a9d) cale_month_pane_g6

0x45e8,	// (0x00041ac9) cale_month_pane_g7_ParamLimits

0x45e8,	// (0x00041ac9) cale_month_pane_g7

0x4614,	// (0x00041af5) cale_month_pane_g8_ParamLimits

0x4614,	// (0x00041af5) cale_month_pane_g8

0x4648,	// (0x00041b29) cale_month_pane_g9_ParamLimits

0x4648,	// (0x00041b29) cale_month_pane_g9

0x467a,	// (0x00041b5b) cale_month_pane_g10_ParamLimits

0x467a,	// (0x00041b5b) cale_month_pane_g10

0x46ac,	// (0x00041b8d) cale_month_pane_g11_ParamLimits

0x46ac,	// (0x00041b8d) cale_month_pane_g11

0x46de,	// (0x00041bbf) cale_month_pane_g12_ParamLimits

0x46de,	// (0x00041bbf) cale_month_pane_g12

0x4710,	// (0x00041bf1) cale_month_pane_g13_ParamLimits

0x4710,	// (0x00041bf1) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0004c79f) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0004c79f) cale_month_pane_g

0x4742,	// (0x00041c23) cale_month_week_pane

0x4753,	// (0x00041c34) grid_cale_month_pane_ParamLimits

0x4753,	// (0x00041c34) grid_cale_month_pane

0x4779,	// (0x00041c5a) cale_month_day_heading_pane_t1

0x47d7,	// (0x00041cb8) cale_month_day_heading_pane_t2

0x483c,	// (0x00041d1d) cale_month_day_heading_pane_t3

0x48a1,	// (0x00041d82) cale_month_day_heading_pane_t4

0x4906,	// (0x00041de7) cale_month_day_heading_pane_t5

0x496b,	// (0x00041e4c) cale_month_day_heading_pane_t6

0x49d0,	// (0x00041eb1) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0004c7ba) cale_month_day_heading_pane_t

0x0c03,	// (0x0003e0e4) bg_cale_side_pane_cp01

0x4a35,	// (0x00041f16) cale_month_week_pane_t1

0x4a4c,	// (0x00041f2d) cale_month_week_pane_t2

0x4a63,	// (0x00041f44) cale_month_week_pane_t3

0x4a7a,	// (0x00041f5b) cale_month_week_pane_t4

0x4a91,	// (0x00041f72) cale_month_week_pane_t5

0x4aa8,	// (0x00041f89) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0004c7c9) cale_month_week_pane_t

0x4abf,	// (0x00041fa0) cell_cale_month_pane_ParamLimits

0x4abf,	// (0x00041fa0) cell_cale_month_pane

0xc4cc,	// (0x000499ad) cell_cale_month_pane_g1

0x4b65,	// (0x00042046) cell_cale_month_pane_t1_ParamLimits

0x4b65,	// (0x00042046) cell_cale_month_pane_t1

0x0c11,	// (0x0003e0f2) grid_highlight_pane_cp08

0x0b06,	// (0x0003dfe7) main_smil_g1

0x4b81,	// (0x00042062) smil_status_pane

0x0faa,	// (0x0003e48b) smil_text_pane

0x68f0,	// (0x00043dd1) bg_popup_call3_rect_pane_g8

0x68f8,	// (0x00043dd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0004ca82) bg_popup_call3_rect_pane_g

0x71d5,	// (0x000446b6) smil_status_volume_pane_g1

0x0fb4,	// (0x0003e495) smil_status_pane_t1

0xc63f,	// (0x00049b20) volume_smil_pane

0x0fcb,	// (0x0003e4ac) list_smil_text_pane

0x4b96,	// (0x00042077) scroll_pane_cp011

0x4ba1,	// (0x00042082) smil_text_list_pane_t1_ParamLimits

0x4ba1,	// (0x00042082) smil_text_list_pane_t1

0xc4d8,	// (0x000499b9) aid_volume_smil_ParamLimits

0xc4d8,	// (0x000499b9) aid_volume_smil

0x0b06,	// (0x0003dfe7) smil_volume_pane_g1

0x0b06,	// (0x0003dfe7) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0004c7e9) smil_volume_pane_g

0x0ab1,	// (0x0003df92) listscroll_cale_day_pane

0x0fd5,	// (0x0003e4b6) bg_cale_pane

0x0fed,	// (0x0003e4ce) list_cale_pane

0x0ffe,	// (0x0003e4df) scroll_pane_cp09

0x100f,	// (0x0003e4f0) cale_bg_pane_g1

0x1017,	// (0x0003e4f8) cale_bg_pane_g2

0x101f,	// (0x0003e500) cale_bg_pane_g3

0x1027,	// (0x0003e508) cale_bg_pane_g4

0x102f,	// (0x0003e510) cale_bg_pane_g5

0x1037,	// (0x0003e518) cale_bg_pane_g6

0x103f,	// (0x0003e520) cale_bg_pane_g7

0x1047,	// (0x0003e528) cale_bg_pane_g8

0x104f,	// (0x0003e530) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0004c7ee) cale_bg_pane_g

0x4bf5,	// (0x000420d6) list_cale_time_pane_ParamLimits

0x4bf5,	// (0x000420d6) list_cale_time_pane

0x4c0a,	// (0x000420eb) list_cale_time_pane_g1_ParamLimits

0x4c0a,	// (0x000420eb) list_cale_time_pane_g1

0x1057,	// (0x0003e538) list_cale_time_pane_g2_ParamLimits

0x1057,	// (0x0003e538) list_cale_time_pane_g2

0x4c16,	// (0x000420f7) list_cale_time_pane_g3_ParamLimits

0x4c16,	// (0x000420f7) list_cale_time_pane_g3

0x4c32,	// (0x00042113) list_cale_time_pane_g4_ParamLimits

0x4c32,	// (0x00042113) list_cale_time_pane_g4

0x4c40,	// (0x00042121) list_cale_time_pane_g5_ParamLimits

0x4c40,	// (0x00042121) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0004c801) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0004c801) list_cale_time_pane_g

0x4c4e,	// (0x0004212f) list_cale_time_pane_t1_ParamLimits

0x4c4e,	// (0x0004212f) list_cale_time_pane_t1

0x4c76,	// (0x00042157) list_cale_time_pane_t2_ParamLimits

0x4c76,	// (0x00042157) list_cale_time_pane_t2

0x4f49,	// (0x0004242a) aid_blid_cardinal_pane

0x4f87,	// (0x00042468) compass_pane_t4

0x4c9e,	// (0x0004217f) list_cale_time_pane_t4_ParamLimits

0x4c9e,	// (0x0004217f) list_cale_time_pane_t4

0x4f95,	// (0x00042476) compass_pane_t5

0x4fa3,	// (0x00042484) compass_pane_t6

0x4fb1,	// (0x00042492) compass_pane_t7

0x1493,	// (0x0003e974) navi_pane_cc_t1

0x15e8,	// (0x0003eac9) aid_phob_thumbnail_center_pane

0x565b,	// (0x00042b3c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0004c80e) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0004c80e) list_cale_time_pane_t

0x03a0,	// (0x0003d881) bg_popup_window_pane_cp02_ParamLimits

0x03a0,	// (0x0003d881) bg_popup_window_pane_cp02

0x1071,	// (0x0003e552) heading_pane_cp01_ParamLimits

0x1071,	// (0x0003e552) heading_pane_cp01

0x107d,	// (0x0003e55e) loc_req_pane_ParamLimits

0x107d,	// (0x0003e55e) loc_req_pane

0x108d,	// (0x0003e56e) loc_type_pane_ParamLimits

0x108d,	// (0x0003e56e) loc_type_pane

0x109f,	// (0x0003e580) loc_type_pane_t1_ParamLimits

0x109f,	// (0x0003e580) loc_type_pane_t1

0x10b1,	// (0x0003e592) loc_type_pane_t2_ParamLimits

0x10b1,	// (0x0003e592) loc_type_pane_t2

0x10c3,	// (0x0003e5a4) loc_type_pane_t3_ParamLimits

0x10c3,	// (0x0003e5a4) loc_type_pane_t3

0x0002,

0xf334,	// (0x0004c815) loc_type_pane_t_ParamLimits

0xf334,	// (0x0004c815) loc_type_pane_t

0x10d5,	// (0x0003e5b6) list_loc_req_pane

0x10df,	// (0x0003e5c0) scroll_pane_cp012

0x4cc6,	// (0x000421a7) list_single_loc_request_popup_menu_pane_ParamLimits

0x4cc6,	// (0x000421a7) list_single_loc_request_popup_menu_pane

0x10ea,	// (0x0003e5cb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x10ea,	// (0x0003e5cb) list_single_loc_request_popup_menu_pane_g1

0x10f6,	// (0x0003e5d7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x10f6,	// (0x0003e5d7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0004c81c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0004c81c) list_single_loc_request_popup_menu_pane_g

0x1102,	// (0x0003e5e3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1102,	// (0x0003e5e3) list_single_loc_request_popup_menu_pane_t1

0x09a2,	// (0x0003de83) bg_popup_window_pane_cp03_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_window_pane_cp03

0x1a68,	// (0x0003ef49) heading_loc_req_pane_ParamLimits

0x1a68,	// (0x0003ef49) heading_loc_req_pane

0x4cd3,	// (0x000421b4) popup_dyc_status_message_window_g1_ParamLimits

0x4cd3,	// (0x000421b4) popup_dyc_status_message_window_g1

0x4ce7,	// (0x000421c8) popup_dyc_status_message_window_t1_ParamLimits

0x4ce7,	// (0x000421c8) popup_dyc_status_message_window_t1

0x4cfc,	// (0x000421dd) popup_dyc_status_message_window_t2_ParamLimits

0x4cfc,	// (0x000421dd) popup_dyc_status_message_window_t2

0x4d11,	// (0x000421f2) popup_dyc_status_message_window_t3_ParamLimits

0x4d11,	// (0x000421f2) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0004c821) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0004c821) popup_dyc_status_message_window_t

0x0747,	// (0x0003dc28) bg_heading_pane_cp01

0x1118,	// (0x0003e5f9) heading_loc_req_pane_g1

0x1120,	// (0x0003e601) heading_loc_req_pane_g2

0x1128,	// (0x0003e609) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0004c828) heading_loc_req_pane_g

0x1130,	// (0x0003e611) heading_loc_req_pane_t1

0x113f,	// (0x0003e620) bg_popup_sub_pane_cp01_ParamLimits

0x113f,	// (0x0003e620) bg_popup_sub_pane_cp01

0x114d,	// (0x0003e62e) popup_cale_events_window_g1_ParamLimits

0x114d,	// (0x0003e62e) popup_cale_events_window_g1

0x116d,	// (0x0003e64e) popup_cale_events_window_g2_ParamLimits

0x116d,	// (0x0003e64e) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0004c85c) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0004c85c) popup_cale_events_window_g

0x118d,	// (0x0003e66e) popup_cale_events_window_t1_ParamLimits

0x118d,	// (0x0003e66e) popup_cale_events_window_t1

0x119f,	// (0x0003e680) popup_cale_events_window_t2_ParamLimits

0x119f,	// (0x0003e680) popup_cale_events_window_t2

0x11dd,	// (0x0003e6be) popup_cale_events_window_t3_ParamLimits

0x11dd,	// (0x0003e6be) popup_cale_events_window_t3

0x1217,	// (0x0003e6f8) popup_cale_events_window_t4_ParamLimits

0x1217,	// (0x0003e6f8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0004c861) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0004c861) popup_cale_events_window_t

0x4d45,	// (0x00042226) call_type_pane

0x4d55,	// (0x00042236) popup_call_status_window_g1

0x4d69,	// (0x0004224a) popup_call_status_window_g2

0x4d7d,	// (0x0004225e) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0004c86a) popup_call_status_window_g

0x125b,	// (0x0003e73c) call_type_pane_g1

0x1264,	// (0x0003e745) call_type_pane_g2

0x0001,

0xf390,	// (0x0004c871) call_type_pane_g

0x0747,	// (0x0003dc28) bg_popup_sub_pane_cp02

0x126d,	// (0x0003e74e) listscroll_popup_wml_pane

0x1275,	// (0x0003e756) list_wml_pane

0x127f,	// (0x0003e760) scroll_pane_cp013

0x128a,	// (0x0003e76b) list_single_graphic_popup_wml_pane_ParamLimits

0x128a,	// (0x0003e76b) list_single_graphic_popup_wml_pane

0x0b06,	// (0x0003dfe7) list_single_graphic_popup_wml_pane_g1

0x129e,	// (0x0003e77f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0004c876) list_single_graphic_popup_wml_pane_g

0x12a6,	// (0x0003e787) list_single_graphic_popup_wml_pane_t1

0x12bc,	// (0x0003e79d) aid_call_pane

0x099a,	// (0x0003de7b) popup_clock_analogue_window_g1

0x099a,	// (0x0003de7b) popup_clock_analogue_window_g2

0xc56f,	// (0x00049a50) popup_clock_analogue_window_g3

0xc56f,	// (0x00049a50) popup_clock_analogue_window_g4

0x0b06,	// (0x0003dfe7) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0004c87b) popup_clock_analogue_window_g

0xc577,	// (0x00049a58) popup_clock_analogue_window_t1

0xc585,	// (0x00049a66) clock_digital_number_pane_ParamLimits

0xc585,	// (0x00049a66) clock_digital_number_pane

0xc591,	// (0x00049a72) clock_digital_number_pane_cp02_ParamLimits

0xc591,	// (0x00049a72) clock_digital_number_pane_cp02

0xc59d,	// (0x00049a7e) clock_digital_number_pane_cp03_ParamLimits

0xc59d,	// (0x00049a7e) clock_digital_number_pane_cp03

0xc5a9,	// (0x00049a8a) clock_digital_number_pane_cp04_ParamLimits

0xc5a9,	// (0x00049a8a) clock_digital_number_pane_cp04

0xc5b5,	// (0x00049a96) clock_digital_separator_pane_ParamLimits

0xc5b5,	// (0x00049a96) clock_digital_separator_pane

0xc5c1,	// (0x00049aa2) popup_clock_digital_window_t1

0x0b06,	// (0x0003dfe7) clock_digital_number_pane_g1

0x0b06,	// (0x0003dfe7) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0004c7e9) clock_digital_number_pane_g

0x0b06,	// (0x0003dfe7) clock_digital_separator_pane_g1

0x0b06,	// (0x0003dfe7) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0004c7e9) clock_digital_separator_pane_g

0x0747,	// (0x0003dc28) bg_popup_window_pane_cp04

0x12c4,	// (0x0003e7a5) heading_pane_cp03

0x12cc,	// (0x0003e7ad) listscroll_popup_gms_pane

0x12d4,	// (0x0003e7b5) grid_large_graphic_popup_pane

0x12de,	// (0x0003e7bf) listscroll_popup_gms_pane_g1

0x12e6,	// (0x0003e7c7) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0004c886) listscroll_popup_gms_pane_g

0x0e19,	// (0x0003e2fa) scroll_pane_cp014

0x12ee,	// (0x0003e7cf) cell_large_graphic_popup_pane_ParamLimits

0x12ee,	// (0x0003e7cf) cell_large_graphic_popup_pane

0x1306,	// (0x0003e7e7) cell_large_graphic_popup_pane_g1_ParamLimits

0x1306,	// (0x0003e7e7) cell_large_graphic_popup_pane_g1

0x1312,	// (0x0003e7f3) cell_large_graphic_popup_pane_g2_ParamLimits

0x1312,	// (0x0003e7f3) cell_large_graphic_popup_pane_g2

0x131e,	// (0x0003e7ff) cell_large_graphic_popup_pane_g3_ParamLimits

0x131e,	// (0x0003e7ff) cell_large_graphic_popup_pane_g3

0x132b,	// (0x0003e80c) cell_large_graphic_popup_pane_g4_ParamLimits

0x132b,	// (0x0003e80c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0004c88b) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0004c88b) cell_large_graphic_popup_pane_g

0x133b,	// (0x0003e81c) grid_highlight_pane_cp010

0x0b06,	// (0x0003dfe7) bg_popup_call_pane_g1

0x1345,	// (0x0003e826) list_single_graphic_popup_conf_pane_ParamLimits

0x1345,	// (0x0003e826) list_single_graphic_popup_conf_pane

0x1357,	// (0x0003e838) list_highlight_pane_cp01

0x1360,	// (0x0003e841) list_single_graphic_popup_conf_pane_g1

0x1368,	// (0x0003e849) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0004c894) list_single_graphic_popup_conf_pane_g

0x1370,	// (0x0003e851) list_single_graphic_popup_conf_pane_t1

0x137e,	// (0x0003e85f) linegrid_cams_pane_g1

0x4d8d,	// (0x0004226e) linegrid_cams_pane_g2

0x0bbe,	// (0x0003e09f) linegrid_cams_pane_g3

0x1387,	// (0x0003e868) linegrid_cams_pane_g4

0x4d96,	// (0x00042277) linegrid_cams_pane_g5

0x4d9f,	// (0x00042280) linegrid_cams_pane_g6

0x0c44,	// (0x0003e125) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0004c899) linegrid_cams_pane_g

0x1390,	// (0x0003e871) popup_clock_analogue_window

0x1390,	// (0x0003e871) popup_clock_digital_window

0x0747,	// (0x0003dc28) popup_phob_thumbnail_window

0x0b06,	// (0x0003dfe7) call_video_uplink_pane_g1

0x1399,	// (0x0003e87a) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0004c8a8) call_video_uplink_pane_g

0x0c11,	// (0x0003e0f2) video_uplink_pane

0x13a1,	// (0x0003e882) mce_image_pane_g1

0x4daa,	// (0x0004228b) mce_image_pane_g2

0x4db2,	// (0x00042293) mce_image_pane_g3

0x4dba,	// (0x0004229b) mce_image_pane_g4

0x4dc2,	// (0x000422a3) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0004c8ad) mce_image_pane_g

0x13ab,	// (0x0003e88c) control_top_pane_stacon_cp01_ParamLimits

0x13ab,	// (0x0003e88c) control_top_pane_stacon_cp01

0x13bf,	// (0x0003e8a0) uni_indicator_pane_stacon_cp01_ParamLimits

0x13bf,	// (0x0003e8a0) uni_indicator_pane_stacon_cp01

0x13d0,	// (0x0003e8b1) bg_popup_sub_pane_cp03

0x4dca,	// (0x000422ab) chi_dic_find_pane

0x4dd2,	// (0x000422b3) listscroll_chi_dic_pane

0x4ddb,	// (0x000422bc) main_pane_chidic_g1

0x4dee,	// (0x000422cf) chi_dic_find_pane_t1

0x13da,	// (0x0003e8bb) find_chidic_pane

0x13e3,	// (0x0003e8c4) chi_dic_list_pane_ParamLimits

0x13e3,	// (0x0003e8c4) chi_dic_list_pane

0x13f4,	// (0x0003e8d5) scroll_pane_cp020

0x4dfc,	// (0x000422dd) find_chidic_pane_t1

0x0747,	// (0x0003dc28) input_focus_pane_cp06

0x4e0b,	// (0x000422ec) list_chi_dic_pane_ParamLimits

0x4e0b,	// (0x000422ec) list_chi_dic_pane

0x13fc,	// (0x0003e8dd) list_chi_dic_pane_t1_ParamLimits

0x13fc,	// (0x0003e8dd) list_chi_dic_pane_t1

0x0747,	// (0x0003dc28) list_highlight_pane_cp020

0x140f,	// (0x0003e8f0) bg_cale_heading_pane_g1

0x4e1f,	// (0x00042300) bg_cale_heading_pane_g2

0x4e27,	// (0x00042308) bg_cale_heading_pane_g3

0x4e2f,	// (0x00042310) bg_cale_heading_pane_g4

0x4e39,	// (0x0004231a) bg_cale_heading_pane_g5

0x4e43,	// (0x00042324) bg_cale_heading_pane_g6

0x4e4b,	// (0x0004232c) bg_cale_heading_pane_g7

0x4e53,	// (0x00042334) bg_cale_heading_pane_g8

0x4e5d,	// (0x0004233e) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0004c8b8) bg_cale_heading_pane_g

0x140f,	// (0x0003e8f0) bg_cale_side_pane_g1

0x4e67,	// (0x00042348) bg_cale_side_pane_g2

0x4e6f,	// (0x00042350) bg_cale_side_pane_g3

0x4e77,	// (0x00042358) bg_cale_side_pane_g4

0x4e7f,	// (0x00042360) bg_cale_side_pane_g5

0x4e87,	// (0x00042368) bg_cale_side_pane_g6

0x4e8f,	// (0x00042370) bg_cale_side_pane_g7

0x4e97,	// (0x00042378) bg_cale_side_pane_g8

0x4e9f,	// (0x00042380) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0004c8cb) bg_cale_side_pane_g

0x4ea7,	// (0x00042388) popup_call_status_window_ParamLimits

0x4ea7,	// (0x00042388) popup_call_status_window

0x1417,	// (0x0003e8f8) stacon_top_pane

0x141f,	// (0x0003e900) status_pane_ParamLimits

0x141f,	// (0x0003e900) status_pane

0x1434,	// (0x0003e915) status_small_pane

0x143c,	// (0x0003e91d) control_pane

0x0747,	// (0x0003dc28) stacon_bottom_pane

0x1444,	// (0x0003e925) list_single_mce_smart_pane_t1_ParamLimits

0x1444,	// (0x0003e925) list_single_mce_smart_pane_t1

0x1457,	// (0x0003e938) list_single_mce_smart_pane_t2_ParamLimits

0x1457,	// (0x0003e938) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0004c8de) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0004c8de) list_single_mce_smart_pane_t

0x4eee,	// (0x000423cf) compass_pane

0x4ef7,	// (0x000423d8) main_location2_pane_t1

0x4f0b,	// (0x000423ec) main_location2_pane_t2

0x4f1f,	// (0x00042400) main_location2_pane_t3

0x0003,

0xf402,	// (0x0004c8e3) main_location2_pane_t

0x1476,	// (0x0003e957) compass_pane_g1_ParamLimits

0x1476,	// (0x0003e957) compass_pane_g1

0x4f69,	// (0x0004244a) compass_pane_t1

0x4f78,	// (0x00042459) compass_pane_t2

0x0005,

0xf40b,	// (0x0004c8ec) compass_pane_t

0x4fbf,	// (0x000424a0) text_secondary_cp61

0x148a,	// (0x0003e96b) navi_pane_cams_g5

0x14ad,	// (0x0003e98e) navi_pane_im_t1

0x14bb,	// (0x0003e99c) navi_pane_mp_g1_ParamLimits

0x14bb,	// (0x0003e99c) navi_pane_mp_g1

0x14cf,	// (0x0003e9b0) navi_pane_mp_g2_ParamLimits

0x14cf,	// (0x0003e9b0) navi_pane_mp_g2

0x14db,	// (0x0003e9bc) navi_pane_mp_g3_ParamLimits

0x14db,	// (0x0003e9bc) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0004c900) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0004c900) navi_pane_mp_g

0x14e7,	// (0x0003e9c8) navi_pane_mp_t1

0x14f5,	// (0x0003e9d6) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0004c907) navi_pane_mp_t

0x1531,	// (0x0003ea12) navi_pane_vt_g1

0x14e7,	// (0x0003e9c8) navi_pane_vt_t1

0x1539,	// (0x0003ea1a) navi_slider_pane

0x1541,	// (0x0003ea22) zooming_pane

0x1549,	// (0x0003ea2a) navi_slider_pane_g1

0xc5de,	// (0x00049abf) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0004c90e) navi_slider_pane_g

0x156d,	// (0x0003ea4e) aid_levels_zoom

0x1575,	// (0x0003ea56) zooming_pane_g1

0x157d,	// (0x0003ea5e) zooming_pane_g2

0x157d,	// (0x0003ea5e) zooming_pane_g3

0x0002,

0xf43c,	// (0x0004c91d) zooming_pane_g

0x1585,	// (0x0003ea66) level_10_zoom

0x158e,	// (0x0003ea6f) level_11_zoom

0x1597,	// (0x0003ea78) level_1_zoom

0x15a0,	// (0x0003ea81) level_2_zoom

0x15a9,	// (0x0003ea8a) level_3_zoom

0x15b2,	// (0x0003ea93) level_4_zoom

0x15bb,	// (0x0003ea9c) level_5_zoom

0x15c4,	// (0x0003eaa5) level_6_zoom

0x15cd,	// (0x0003eaae) level_7_zoom

0x15d6,	// (0x0003eab7) level_8_zoom

0x15df,	// (0x0003eac0) level_9_zoom

0x15f0,	// (0x0003ead1) popup_phob_thumbnail_window_g1

0x15f8,	// (0x0003ead9) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0004c924) popup_phob_thumbnail_window_g

0x6b7d,	// (0x0004405e) level_1_location

0x6b85,	// (0x00044066) level_2_location

0x6b8d,	// (0x0004406e) level_3_location

0x6b95,	// (0x00044076) level_4_location

0x1541,	// (0x0003ea22) level_5_location

0x50e8,	// (0x000425c9) mce_icon_pane_g1

0x50f0,	// (0x000425d1) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0004c929) mce_icon_pane_g

0x50f8,	// (0x000425d9) main_mup_pane_g1_ParamLimits

0x50f8,	// (0x000425d9) main_mup_pane_g1

0x510e,	// (0x000425ef) main_mup_pane_g2_ParamLimits

0x510e,	// (0x000425ef) main_mup_pane_g2

0x5126,	// (0x00042607) main_mup_pane_g3_ParamLimits

0x5126,	// (0x00042607) main_mup_pane_g3

0x513e,	// (0x0004261f) main_mup_pane_g4_ParamLimits

0x513e,	// (0x0004261f) main_mup_pane_g4

0x5156,	// (0x00042637) main_mup_pane_g5_ParamLimits

0x5156,	// (0x00042637) main_mup_pane_g5

0x5172,	// (0x00042653) main_mup_pane_g6_ParamLimits

0x5172,	// (0x00042653) main_mup_pane_g6

0x518a,	// (0x0004266b) main_mup_pane_g7_ParamLimits

0x518a,	// (0x0004266b) main_mup_pane_g7

0x51a2,	// (0x00042683) main_mup_pane_g8_ParamLimits

0x51a2,	// (0x00042683) main_mup_pane_g8

0x51ba,	// (0x0004269b) main_mup_pane_g9_ParamLimits

0x51ba,	// (0x0004269b) main_mup_pane_g9

0x51d4,	// (0x000426b5) main_mup_pane_g10_ParamLimits

0x51d4,	// (0x000426b5) main_mup_pane_g10

0x51ee,	// (0x000426cf) main_mup_pane_g11_ParamLimits

0x51ee,	// (0x000426cf) main_mup_pane_g11

0x5202,	// (0x000426e3) main_mup_pane_g12_ParamLimits

0x5202,	// (0x000426e3) main_mup_pane_g12

0x5218,	// (0x000426f9) main_mup_pane_g13_ParamLimits

0x5218,	// (0x000426f9) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0004c92e) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0004c92e) main_mup_pane_g

0x522c,	// (0x0004270d) main_mup_pane_t1_ParamLimits

0x522c,	// (0x0004270d) main_mup_pane_t1

0x5246,	// (0x00042727) main_mup_pane_t2_ParamLimits

0x5246,	// (0x00042727) main_mup_pane_t2

0x525e,	// (0x0004273f) main_mup_pane_t3_ParamLimits

0x525e,	// (0x0004273f) main_mup_pane_t3

0x5276,	// (0x00042757) main_mup_pane_t4_ParamLimits

0x5276,	// (0x00042757) main_mup_pane_t4

0x5294,	// (0x00042775) main_mup_pane_t5_ParamLimits

0x5294,	// (0x00042775) main_mup_pane_t5

0x52a9,	// (0x0004278a) main_mup_pane_t6_ParamLimits

0x52a9,	// (0x0004278a) main_mup_pane_t6

0x0005,

0xf468,	// (0x0004c949) main_mup_pane_t_ParamLimits

0xf468,	// (0x0004c949) main_mup_pane_t

0x52bb,	// (0x0004279c) mup_progress_pane_ParamLimits

0x52bb,	// (0x0004279c) mup_progress_pane

0x52c7,	// (0x000427a8) mup_visualizer_pane_ParamLimits

0x52c7,	// (0x000427a8) mup_visualizer_pane

0x52fb,	// (0x000427dc) mup_volume_pane_ParamLimits

0x52fb,	// (0x000427dc) mup_volume_pane

0x124d,	// (0x0003e72e) mup_visualizer_pane_g1_ParamLimits

0x124d,	// (0x0003e72e) mup_visualizer_pane_g1

0x124d,	// (0x0003e72e) mup_visualizer_pane_g2_ParamLimits

0x124d,	// (0x0003e72e) mup_visualizer_pane_g2

0x1476,	// (0x0003e957) mup_visualizer_pane_g3_ParamLimits

0x1476,	// (0x0003e957) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0004c956) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0004c956) mup_visualizer_pane_g

0x0b06,	// (0x0003dfe7) mup_volume_pane_g1

0x1608,	// (0x0003eae9) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0004c95d) mup_volume_pane_g

0x0b06,	// (0x0003dfe7) mup_progress_pane_g1

0x1611,	// (0x0003eaf2) mup_progress_pane_g2

0x161a,	// (0x0003eafb) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0004c962) mup_progress_pane_g

0x0747,	// (0x0003dc28) bg_popup_window_pane_cp05

0x1623,	// (0x0003eb04) heading_pane_cp02_ParamLimits

0x1623,	// (0x0003eb04) heading_pane_cp02

0x163d,	// (0x0003eb1e) list_popup_blid_pane

0x1645,	// (0x0003eb26) list_blid_sat_info_pane_ParamLimits

0x1645,	// (0x0003eb26) list_blid_sat_info_pane

0x1658,	// (0x0003eb39) list_blid_sat_info_pane_g1

0x1660,	// (0x0003eb41) list_blid_sat_info_pane_t1

0x5411,	// (0x000428f2) mup_equalizer_pane_ParamLimits

0x5411,	// (0x000428f2) mup_equalizer_pane

0x542a,	// (0x0004290b) mup_equalizer_pane_cp1_ParamLimits

0x542a,	// (0x0004290b) mup_equalizer_pane_cp1

0x5447,	// (0x00042928) mup_equalizer_pane_cp2_ParamLimits

0x5447,	// (0x00042928) mup_equalizer_pane_cp2

0x5464,	// (0x00042945) mup_equalizer_pane_cp3_ParamLimits

0x5464,	// (0x00042945) mup_equalizer_pane_cp3

0x5485,	// (0x00042966) mup_equalizer_pane_cp4_ParamLimits

0x5485,	// (0x00042966) mup_equalizer_pane_cp4

0x54a6,	// (0x00042987) mup_equalizer_pane_cp5

0x54ba,	// (0x0004299b) mup_equalizer_pane_cp6

0x54ce,	// (0x000429af) mup_equalizer_pane_cp7

0x6978,	// (0x00043e59) bg_popup_call_poc_act_pane_g9

0x6980,	// (0x00043e61) bg_popup_call_poc_act_pane_g10

0x6988,	// (0x00043e69) bg_popup_call_poc_act_pane_g11

0x000a,

0x09a2,	// (0x0003de83) mup_scale_pane

0x0b06,	// (0x0003dfe7) mup_scale_pane_g1

0x166e,	// (0x0003eb4f) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0004c97e) mup_scale_pane_g

0x1692,	// (0x0003eb73) msg_data_pane

0x169a,	// (0x0003eb7b) scroll_pane_cp017

0x29c3,	// (0x0003fea4) bg_list_pane_cp04_ParamLimits

0x29c3,	// (0x0003fea4) bg_list_pane_cp04

0x16a2,	// (0x0003eb83) msg_data_pane_g1

0x54fc,	// (0x000429dd) msg_data_pane_g2

0x4db2,	// (0x00042293) msg_data_pane_g3

0x5504,	// (0x000429e5) msg_data_pane_g4

0x550c,	// (0x000429ed) msg_data_pane_g5

0x5514,	// (0x000429f5) msg_data_pane_g6

0x551c,	// (0x000429fd) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0004c98d) msg_data_pane_g

0x5524,	// (0x00042a05) msg_text_pane_ParamLimits

0x5524,	// (0x00042a05) msg_text_pane

0x554d,	// (0x00042a2e) qrid_highlight_pane_cp011_ParamLimits

0x554d,	// (0x00042a2e) qrid_highlight_pane_cp011

0x0747,	// (0x0003dc28) msg_body_pane

0x0747,	// (0x0003dc28) msg_header_pane

0x16b3,	// (0x0003eb94) input_focus_pane_cp07

0x5563,	// (0x00042a44) msg_header_pane_t1_ParamLimits

0x5563,	// (0x00042a44) msg_header_pane_t1

0x29e9,	// (0x0003feca) msg_header_pane_t2_ParamLimits

0x29e9,	// (0x0003feca) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0004c9a1) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0004c9a1) msg_header_pane_t

0x16c8,	// (0x0003eba9) msg_body_pane_g1

0x29fb,	// (0x0003fedc) msg_body_pane_t1_ParamLimits

0x29fb,	// (0x0003fedc) msg_body_pane_t1

0x2a2c,	// (0x0003ff0d) msg_body_pane_t2_ParamLimits

0x2a2c,	// (0x0003ff0d) msg_body_pane_t2

0x2a3e,	// (0x0003ff1f) msg_body_pane_t3_ParamLimits

0x2a3e,	// (0x0003ff1f) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0004c9a6) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0004c9a6) msg_body_pane_t

0x55b1,	// (0x00042a92) main_viewer_pane_g1_ParamLimits

0x55b1,	// (0x00042a92) main_viewer_pane_g1

0x55bf,	// (0x00042aa0) main_viewer_pane_g2_ParamLimits

0x55bf,	// (0x00042aa0) main_viewer_pane_g2

0x55cd,	// (0x00042aae) main_viewer_pane_g3_ParamLimits

0x55cd,	// (0x00042aae) main_viewer_pane_g3

0x55dc,	// (0x00042abd) main_viewer_pane_g4_ParamLimits

0x55dc,	// (0x00042abd) main_viewer_pane_g4

0xc608,	// (0x00049ae9) main_viewer_pane_g5_ParamLimits

0xc608,	// (0x00049ae9) main_viewer_pane_g5

0xc608,	// (0x00049ae9) main_viewer_pane_g7_ParamLimits

0xc608,	// (0x00049ae9) main_viewer_pane_g7

0xc61a,	// (0x00049afb) main_viewer_pane_g8_ParamLimits

0xc61a,	// (0x00049afb) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0004c9b6) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0004c9b6) main_viewer_pane_g

0x16d0,	// (0x0003ebb1) viewer_content_pane_ParamLimits

0x16d0,	// (0x0003ebb1) viewer_content_pane

0x5618,	// (0x00042af9) main_postcard_pane_g1_ParamLimits

0x5618,	// (0x00042af9) main_postcard_pane_g1

0x562e,	// (0x00042b0f) main_postcard_pane_g2_ParamLimits

0x562e,	// (0x00042b0f) main_postcard_pane_g2

0x5644,	// (0x00042b25) main_postcard_pane_g3_ParamLimits

0x5644,	// (0x00042b25) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0004c9c7) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0004c9c7) main_postcard_pane_g

0x565b,	// (0x00042b3c) main_postcard_pane_g4

0x71e8,	// (0x000446c9) smil_status_volume_pane_g2

0x569e,	// (0x00042b7f) postcard_pane_ParamLimits

0x569e,	// (0x00042b7f) postcard_pane

0x16ec,	// (0x0003ebcd) postcard_pane_g1_ParamLimits

0x16ec,	// (0x0003ebcd) postcard_pane_g1

0x56e0,	// (0x00042bc1) postcard_pane_g2_ParamLimits

0x56e0,	// (0x00042bc1) postcard_pane_g2

0x56ec,	// (0x00042bcd) postcard_pane_g3_ParamLimits

0x56ec,	// (0x00042bcd) postcard_pane_g3

0x16de,	// (0x0003ebbf) postcard_pane_g4_ParamLimits

0x16de,	// (0x0003ebbf) postcard_pane_g4

0x56f8,	// (0x00042bd9) postcard_pane_g5_ParamLimits

0x56f8,	// (0x00042bd9) postcard_pane_g5

0x570d,	// (0x00042bee) postcard_pane_g6_ParamLimits

0x570d,	// (0x00042bee) postcard_pane_g6

0x16ec,	// (0x0003ebcd) postcard_pane_g7_ParamLimits

0x16ec,	// (0x0003ebcd) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0004c9d4) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0004c9d4) postcard_pane_g

0x5721,	// (0x00042c02) main_mp2_pane_g1_ParamLimits

0x5721,	// (0x00042c02) main_mp2_pane_g1

0x572d,	// (0x00042c0e) main_mp2_pane_g2_ParamLimits

0x572d,	// (0x00042c0e) main_mp2_pane_g2

0x5739,	// (0x00042c1a) main_mp2_pane_g3_ParamLimits

0x5739,	// (0x00042c1a) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0004c9e3) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0004c9e3) main_mp2_pane_g

0x5745,	// (0x00042c26) main_mp2_pane_t1_ParamLimits

0x5745,	// (0x00042c26) main_mp2_pane_t1

0x575a,	// (0x00042c3b) main_mp2_pane_t2_ParamLimits

0x575a,	// (0x00042c3b) main_mp2_pane_t2

0x576c,	// (0x00042c4d) main_mp2_pane_t3_ParamLimits

0x576c,	// (0x00042c4d) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0004c9ea) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0004c9ea) main_mp2_pane_t

0x16fa,	// (0x0003ebdb) pec_content_pane_ParamLimits

0x16fa,	// (0x0003ebdb) pec_content_pane

0x0e19,	// (0x0003e2fa) scroll_pane_cp015

0x170c,	// (0x0003ebed) pec_attribute_pane_ParamLimits

0x170c,	// (0x0003ebed) pec_attribute_pane

0x577e,	// (0x00042c5f) pec_content_pane_g1_ParamLimits

0x577e,	// (0x00042c5f) pec_content_pane_g1

0x171c,	// (0x0003ebfd) pec_content_pane_t1_ParamLimits

0x171c,	// (0x0003ebfd) pec_content_pane_t1

0x172e,	// (0x0003ec0f) pec_content_pane_t2_ParamLimits

0x172e,	// (0x0003ec0f) pec_content_pane_t2

0x0001,

0xf510,	// (0x0004c9f1) pec_content_pane_t_ParamLimits

0xf510,	// (0x0004c9f1) pec_content_pane_t

0x578c,	// (0x00042c6d) list_single_graphic_pane_cp01_ParamLimits

0x578c,	// (0x00042c6d) list_single_graphic_pane_cp01

0x09a2,	// (0x0003de83) bg_popup_sub_pane_cp04

0x1740,	// (0x0003ec21) popup_mup_playback_window_g1

0x174c,	// (0x0003ec2d) popup_mup_playback_window_t1

0x1761,	// (0x0003ec42) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0004c9f6) popup_mup_playback_window_t

0x1798,	// (0x0003ec79) main_image_pane_g1_ParamLimits

0x1798,	// (0x0003ec79) main_image_pane_g1

0x17db,	// (0x0003ecbc) scroll_pane_cp018_ParamLimits

0x17db,	// (0x0003ecbc) scroll_pane_cp018

0x17f3,	// (0x0003ecd4) scroll_pane_cp016_ParamLimits

0x17f3,	// (0x0003ecd4) scroll_pane_cp016

0x585c,	// (0x00042d3d) smil2_image_pane_ParamLimits

0x585c,	// (0x00042d3d) smil2_image_pane

0x5890,	// (0x00042d71) smil2_root_pane_ParamLimits

0x5890,	// (0x00042d71) smil2_root_pane

0x58c8,	// (0x00042da9) smil2_text_pane_ParamLimits

0x58c8,	// (0x00042da9) smil2_text_pane

0x0747,	// (0x0003dc28) bg_list_pane_cp06

0x182f,	// (0x0003ed10) grid_radio_pane

0x0747,	// (0x0003dc28) bg_popup_window_pane_cp06

0x1837,	// (0x0003ed18) main_fmradio_pane_t1

0x12c4,	// (0x0003e7a5) heading_pane_cp04

0x1845,	// (0x0003ed26) main_fmradio_pane_t2

0x6a12,	// (0x00043ef3) popup_cale_lunar_info_window_g1

0x1853,	// (0x0003ed34) main_fmradio_pane_t3

0x6a1a,	// (0x00043efb) popup_cale_lunar_info_window_g2

0x1861,	// (0x0003ed42) main_fmradio_pane_t4

0x0001,

0x186f,	// (0x0003ed50) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0004cad1) popup_cale_lunar_info_window_g

0xf52a,	// (0x0004ca0b) main_fmradio_pane_t

0x187d,	// (0x0003ed5e) wait_bar_pane_cp03

0x1885,	// (0x0003ed66) cell_fmradio_pane_ParamLimits

0x1885,	// (0x0003ed66) cell_fmradio_pane

0x16ec,	// (0x0003ebcd) cell_fmradio_pane_g1_ParamLimits

0x16ec,	// (0x0003ebcd) cell_fmradio_pane_g1

0x0747,	// (0x0003dc28) grid_highlight_pane_cp011

0x1898,	// (0x0003ed79) poc_content_pane_ParamLimits

0x1898,	// (0x0003ed79) poc_content_pane

0x18aa,	// (0x0003ed8b) scroll_pane_cp019

0x5948,	// (0x00042e29) popup_call_poc_act_window_ParamLimits

0x5948,	// (0x00042e29) popup_call_poc_act_window

0x596c,	// (0x00042e4d) popup_call_poc_inact_window_ParamLimits

0x596c,	// (0x00042e4d) popup_call_poc_inact_window

0xf5c7,	// (0x0004caa8) bg_popup_call_poc_act_pane_g

0x6900,	// (0x00043de1) bg_popup_call_poc_inact_pane_g1

0x6908,	// (0x00043de9) bg_popup_call_poc_inact_pane_g2

0x18b2,	// (0x0003ed93) popup_call_poc_act_window_g2

0x6910,	// (0x00043df1) bg_popup_call_poc_inact_pane_g3

0x6918,	// (0x00043df9) bg_popup_call_poc_inact_pane_g4

0x6920,	// (0x00043e01) bg_popup_call_poc_inact_pane_g5

0x18ba,	// (0x0003ed9b) popup_call_poc_act_window_t1_ParamLimits

0x18ba,	// (0x0003ed9b) popup_call_poc_act_window_t1

0x18e2,	// (0x0003edc3) popup_call_poc_act_window_t2_ParamLimits

0x18e2,	// (0x0003edc3) popup_call_poc_act_window_t2

0x190a,	// (0x0003edeb) popup_call_poc_act_window_t3_ParamLimits

0x190a,	// (0x0003edeb) popup_call_poc_act_window_t3

0x1932,	// (0x0003ee13) popup_call_poc_act_window_t4_ParamLimits

0x1932,	// (0x0003ee13) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0004ca16) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0004ca16) popup_call_poc_act_window_t

0x6928,	// (0x00043e09) bg_popup_call_poc_inact_pane_g6

0x6930,	// (0x00043e11) bg_popup_call_poc_inact_pane_g7

0x6938,	// (0x00043e19) bg_popup_call_poc_inact_pane_g8

0x1944,	// (0x0003ee25) popup_call_poc_inact_window_g2

0x6940,	// (0x00043e21) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0004ca95) bg_popup_call_poc_inact_pane_g

0x194c,	// (0x0003ee2d) popup_call_poc_inact_window_t1_ParamLimits

0x194c,	// (0x0003ee2d) popup_call_poc_inact_window_t1

0x1961,	// (0x0003ee42) popup_call_poc_inact_window_t2_ParamLimits

0x1961,	// (0x0003ee42) popup_call_poc_inact_window_t2

0x1976,	// (0x0003ee57) popup_call_poc_inact_window_t3_ParamLimits

0x1976,	// (0x0003ee57) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0004ca1f) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0004ca1f) popup_call_poc_inact_window_t

0x7089,	// (0x0004456a) context_pane_ParamLimits

0x70e4,	// (0x000445c5) signal_pane_ParamLimits

0x1541,	// (0x0003ea22) main_call2_pane

0x7021,	// (0x00044502) popup_phob_thumbnail2_window_ParamLimits

0x7021,	// (0x00044502) popup_phob_thumbnail2_window

0xc5f0,	// (0x00049ad1) aid_hotspot_pointer_arrow_pane

0xc5f8,	// (0x00049ad9) aid_hotspot_pointer_hand_pane

0x6b47,	// (0x00044028) phob_pre_status_pane_g5

0x3d42,	// (0x00041223) cams_zoom_pane_ParamLimits

0x3d51,	// (0x00041232) image_vga_pane_ParamLimits

0x3d6b,	// (0x0004124c) main_camera_pane_g1_ParamLimits

0x3d7d,	// (0x0004125e) main_camera_pane_g2_ParamLimits

0x3d8f,	// (0x00041270) main_camera_pane_g3_ParamLimits

0x3da1,	// (0x00041282) main_camera_pane_g4_ParamLimits

0x3db3,	// (0x00041294) main_camera_pane_g5_ParamLimits

0x3dc5,	// (0x000412a6) main_camera_pane_g6_ParamLimits

0x3dd7,	// (0x000412b8) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0004c71e) main_camera_pane_g_ParamLimits

0x3de9,	// (0x000412ca) main_camera_pane_t1_ParamLimits

0x3dff,	// (0x000412e0) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0004c72f) main_camera_pane_t_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_preview_window_pane_cp01_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_preview_window_pane_cp01

0x198b,	// (0x0003ee6c) popup_phob_thumbnail2_window_g1_ParamLimits

0x198b,	// (0x0003ee6c) popup_phob_thumbnail2_window_g1

0x0747,	// (0x0003dc28) call2_cli_visual_pane

0x59a0,	// (0x00042e81) popup_call2_audio_conf_window_ParamLimits

0x59a0,	// (0x00042e81) popup_call2_audio_conf_window

0x59c0,	// (0x00042ea1) popup_call2_audio_first_window_ParamLimits

0x59c0,	// (0x00042ea1) popup_call2_audio_first_window

0x5a56,	// (0x00042f37) popup_call2_audio_in_window_ParamLimits

0x5a56,	// (0x00042f37) popup_call2_audio_in_window

0x5a9e,	// (0x00042f7f) popup_call2_audio_out_window_ParamLimits

0x5a9e,	// (0x00042f7f) popup_call2_audio_out_window

0x5b08,	// (0x00042fe9) popup_call2_audio_second_window_ParamLimits

0x5b08,	// (0x00042fe9) popup_call2_audio_second_window

0x5b6e,	// (0x0004304f) popup_call2_audio_wait_window_ParamLimits

0x5b6e,	// (0x0004304f) popup_call2_audio_wait_window

0x0747,	// (0x0003dc28) bg_popup_call2_act_pane_cp03

0x0984,	// (0x0003de65) list_conf_pane_cp

0x1997,	// (0x0003ee78) popup_call2_audio_conf_window_t1

0x19a5,	// (0x0003ee86) list_single_graphic_popup_conf2_pane_ParamLimits

0x19a5,	// (0x0003ee86) list_single_graphic_popup_conf2_pane

0x1357,	// (0x0003e838) list_highlight_pane_cp04

0x19b8,	// (0x0003ee99) list_single_graphic_popup_conf2_pane_g1

0x1368,	// (0x0003e849) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0004ca26) list_single_graphic_popup_conf2_pane_g

0x19c2,	// (0x0003eea3) list_single_graphic_popup_conf2_pane_t1

0x19d0,	// (0x0003eeb1) bg_popup_call2_act_pane_cp01_ParamLimits

0x19d0,	// (0x0003eeb1) bg_popup_call2_act_pane_cp01

0x5ba8,	// (0x00043089) call_type_pane_cp05_ParamLimits

0x5ba8,	// (0x00043089) call_type_pane_cp05

0x5bfc,	// (0x000430dd) popup_call2_audio_second_window_g1_ParamLimits

0x5bfc,	// (0x000430dd) popup_call2_audio_second_window_g1

0x5c50,	// (0x00043131) popup_call2_audio_second_window_g2_ParamLimits

0x5c50,	// (0x00043131) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0004ca2b) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0004ca2b) popup_call2_audio_second_window_g

0x5cb5,	// (0x00043196) popup_call2_audio_second_window_t1_ParamLimits

0x5cb5,	// (0x00043196) popup_call2_audio_second_window_t1

0x5d70,	// (0x00043251) popup_call2_audio_second_window_t2_ParamLimits

0x5d70,	// (0x00043251) popup_call2_audio_second_window_t2

0x5dc3,	// (0x000432a4) popup_call2_audio_second_window_t3_ParamLimits

0x5dc3,	// (0x000432a4) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0004ca32) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0004ca32) popup_call2_audio_second_window_t

0x0747,	// (0x0003dc28) bg_popup_call2_in_pane_cp02

0x0751,	// (0x0003dc32) call_type_pane_cp04

0x0759,	// (0x0003dc3a) popup_call2_audio_wait_window_g1

0x0761,	// (0x0003dc42) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0004c60b) popup_call2_audio_wait_window_g

0x0769,	// (0x0003dc4a) popup_call2_audio_wait_window_t3

0x5eb6,	// (0x00043397) bg_popup_call2_act_pane_ParamLimits

0x5eb6,	// (0x00043397) bg_popup_call2_act_pane

0x5f76,	// (0x00043457) call_type_pane_cp03_ParamLimits

0x5f76,	// (0x00043457) call_type_pane_cp03

0x5fda,	// (0x000434bb) popup_call2_audio_first_window_g1_ParamLimits

0x5fda,	// (0x000434bb) popup_call2_audio_first_window_g1

0x604a,	// (0x0004352b) popup_call2_audio_first_window_g2_ParamLimits

0x604a,	// (0x0004352b) popup_call2_audio_first_window_g2

0x124d,	// (0x0003e72e) popup_call2_audio_first_window_g3_ParamLimits

0x124d,	// (0x0003e72e) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0004ca3b) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0004ca3b) popup_call2_audio_first_window_g

0x6128,	// (0x00043609) popup_call2_audio_first_window_t1_ParamLimits

0x6128,	// (0x00043609) popup_call2_audio_first_window_t1

0x622b,	// (0x0004370c) popup_call2_audio_first_window_t4_ParamLimits

0x622b,	// (0x0004370c) popup_call2_audio_first_window_t4

0x630e,	// (0x000437ef) popup_call2_audio_first_window_t5_ParamLimits

0x630e,	// (0x000437ef) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0004ca46) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0004ca46) popup_call2_audio_first_window_t

0x099a,	// (0x0003de7b) bg_popup_call2_act_pane_g1

0x6a22,	// (0x00043f03) popup_cale_lunar_info_window_t1

0x6a30,	// (0x00043f11) popup_cale_lunar_info_window_t2

0x6a3e,	// (0x00043f1f) popup_cale_lunar_info_window_t3

0x0747,	// (0x0003dc28) bg_popup_call2_bubble_pane

0x640f,	// (0x000438f0) bg_popup_call2_in_pane_cp01_ParamLimits

0x640f,	// (0x000438f0) bg_popup_call2_in_pane_cp01

0x0423,	// (0x0003d904) call_type_pane_cp02

0x6457,	// (0x00043938) popup_call2_audio_out_window_g1_ParamLimits

0x6457,	// (0x00043938) popup_call2_audio_out_window_g1

0x6483,	// (0x00043964) popup_call2_audio_out_window_g2_ParamLimits

0x6483,	// (0x00043964) popup_call2_audio_out_window_g2

0x64ab,	// (0x0004398c) popup_call2_audio_out_window_g3_ParamLimits

0x64ab,	// (0x0004398c) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0004ca4f) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0004ca4f) popup_call2_audio_out_window_g

0x64e6,	// (0x000439c7) popup_call2_audio_out_window_t1_ParamLimits

0x64e6,	// (0x000439c7) popup_call2_audio_out_window_t1

0x6545,	// (0x00043a26) popup_call2_audio_out_window_t2_ParamLimits

0x6545,	// (0x00043a26) popup_call2_audio_out_window_t2

0x6599,	// (0x00043a7a) popup_call2_audio_out_window_t3_ParamLimits

0x6599,	// (0x00043a7a) popup_call2_audio_out_window_t3

0x65af,	// (0x00043a90) popup_call2_audio_out_window_t4_ParamLimits

0x65af,	// (0x00043a90) popup_call2_audio_out_window_t4

0x65c5,	// (0x00043aa6) popup_call2_audio_out_window_t5_ParamLimits

0x65c5,	// (0x00043aa6) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0004ca58) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0004ca58) popup_call2_audio_out_window_t

0x6629,	// (0x00043b0a) bg_popup_call2_in_pane_ParamLimits

0x6629,	// (0x00043b0a) bg_popup_call2_in_pane

0x6685,	// (0x00043b66) popup_call2_audio_in_window_g1_ParamLimits

0x6685,	// (0x00043b66) popup_call2_audio_in_window_g1

0x66bd,	// (0x00043b9e) popup_call2_audio_in_window_g2_ParamLimits

0x66bd,	// (0x00043b9e) popup_call2_audio_in_window_g2

0x66f5,	// (0x00043bd6) popup_call2_audio_in_window_g3_ParamLimits

0x66f5,	// (0x00043bd6) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0004ca65) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0004ca65) popup_call2_audio_in_window_g

0x674d,	// (0x00043c2e) popup_call2_audio_in_window_t1_ParamLimits

0x674d,	// (0x00043c2e) popup_call2_audio_in_window_t1

0x67cd,	// (0x00043cae) popup_call2_audio_in_window_t2_ParamLimits

0x67cd,	// (0x00043cae) popup_call2_audio_in_window_t2

0x684d,	// (0x00043d2e) popup_call2_audio_in_window_t3_ParamLimits

0x684d,	// (0x00043d2e) popup_call2_audio_in_window_t3

0x6867,	// (0x00043d48) popup_call2_audio_in_window_t4_ParamLimits

0x6867,	// (0x00043d48) popup_call2_audio_in_window_t4

0x6879,	// (0x00043d5a) popup_call2_audio_in_window_t5_ParamLimits

0x6879,	// (0x00043d5a) popup_call2_audio_in_window_t5

0x688e,	// (0x00043d6f) popup_call2_audio_in_window_t6_ParamLimits

0x688e,	// (0x00043d6f) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0004ca6e) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0004ca6e) popup_call2_audio_in_window_t

0x099a,	// (0x0003de7b) bg_popup_call2_in_pane_g1

0x6a4c,	// (0x00043f2d) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0004cad6) popup_cale_lunar_info_window_t

0x09a2,	// (0x0003de83) bg_popup_call2_rect_pane_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_call2_rect_pane

0x0747,	// (0x0003dc28) call2_cli_visual_graphic_pane

0x0747,	// (0x0003dc28) call2_cli_visual_text_pane

0xc632,	// (0x00049b13) smil_status_volume_pane_g3

0x0002,

0x0b06,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g1

0x0b06,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g2

0x0b06,	// (0x0003dfe7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0004ca7b) call2_cli_visual_graphic_pane_g

0x68c0,	// (0x00043da1) bg_popup_call2_rect_pane_g1

0x0ba4,	// (0x0003e085) bg_popup_call2_rect_pane_g2

0x68c8,	// (0x00043da9) bg_popup_call2_rect_pane_g3

0x68d0,	// (0x00043db1) bg_popup_call2_rect_pane_g4

0x68d8,	// (0x00043db9) bg_popup_call2_rect_pane_g5

0x68e0,	// (0x00043dc1) bg_popup_call2_rect_pane_g6

0x68e8,	// (0x00043dc9) bg_popup_call2_rect_pane_g7

0x68f0,	// (0x00043dd1) bg_popup_call2_rect_pane_g8

0x68f8,	// (0x00043dd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0004ca82) bg_popup_call2_rect_pane_g

0x6900,	// (0x00043de1) bg_popup_call2_bubble_pane_g1

0x6908,	// (0x00043de9) bg_popup_call2_bubble_pane_g2

0x6910,	// (0x00043df1) bg_popup_call2_bubble_pane_g3

0x6918,	// (0x00043df9) bg_popup_call2_bubble_pane_g4

0x6920,	// (0x00043e01) bg_popup_call2_bubble_pane_g5

0x6928,	// (0x00043e09) bg_popup_call2_bubble_pane_g6

0x6930,	// (0x00043e11) bg_popup_call2_bubble_pane_g7

0x6938,	// (0x00043e19) bg_popup_call2_bubble_pane_g8

0x6940,	// (0x00043e21) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0004ca95) bg_popup_call2_bubble_pane_g

0x39b3,	// (0x00040e94) aid_cale_week_size_cell_pane

0x3e17,	// (0x000412f8) aid_cams_cif_uncrop_pane_ParamLimits

0x3e17,	// (0x000412f8) aid_cams_cif_uncrop_pane

0x3fd4,	// (0x000414b5) aid_cams_size_cell_ParamLimits

0x3fd4,	// (0x000414b5) aid_cams_size_cell

0x3fe8,	// (0x000414c9) grid_cams_pane_ParamLimits

0x4002,	// (0x000414e3) linegrid_cams_pane_ParamLimits

0x40c9,	// (0x000415aa) call_video_pane_t1

0x40db,	// (0x000415bc) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0004c782) call_video_pane_t

0x4481,	// (0x00041962) aid_cale_month_size_cell_pane_ParamLimits

0x4481,	// (0x00041962) aid_cale_month_size_cell_pane

0xf63e,	// (0x0004cb1f) smil_status_volume_pane_g

0xc63f,	// (0x00049b20) volume_smil_pane_ParamLimits

0x02e0,	// (0x0003d7c1) aid_popup2_width_pane

0x3935,	// (0x00040e16) cell_qdial_pane_g4_ParamLimits

0x3935,	// (0x00040e16) cell_qdial_pane_g4

0x4f49,	// (0x0004242a) aid_blid_cardinal_pane_ParamLimits

0x4f55,	// (0x00042436) aid_blid_destination_pane_ParamLimits

0x4f55,	// (0x00042436) aid_blid_destination_pane

0x09a2,	// (0x0003de83) bg_popup_call_poc_act_pane_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_call_poc_act_pane

0x09a2,	// (0x0003de83) bg_popup_call_poc_inact_pane_ParamLimits

0x09a2,	// (0x0003de83) bg_popup_call_poc_inact_pane

0x6950,	// (0x00043e31) bg_popup_call_poc_act_pane_g1

0x6958,	// (0x00043e39) bg_popup_call_poc_act_pane_g2

0x6960,	// (0x00043e41) bg_popup_call_poc_act_pane_g3

0x6918,	// (0x00043df9) bg_popup_call_poc_act_pane_g4

0x6920,	// (0x00043e01) bg_popup_call_poc_act_pane_g5

0x6968,	// (0x00043e49) bg_popup_call_poc_act_pane_g6

0x6930,	// (0x00043e11) bg_popup_call_poc_act_pane_g7

0x6970,	// (0x00043e51) bg_popup_call_poc_act_pane_g8

0x0747,	// (0x0003dc28) main_usb_pane

0x6e5e,	// (0x0004433f) popup_cale_lunar_info_window

0x4318,	// (0x000417f9) im_reading_pane_t1_ParamLimits

0x0d71,	// (0x0003e252) list_im_pane_ParamLimits

0x0d82,	// (0x0003e263) scroll_pane_cp07_ParamLimits

0x0747,	// (0x0003dc28) grid_highlight_pane_cp012

0x09a2,	// (0x0003de83) mup_scale_pane_ParamLimits

0x16ec,	// (0x0003ebcd) main_usb_pane_g1_ParamLimits

0x16ec,	// (0x0003ebcd) main_usb_pane_g1

0x6990,	// (0x00043e71) main_usb_pane_g2_ParamLimits

0x6990,	// (0x00043e71) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0004cabf) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0004cabf) main_usb_pane_g

0x69a6,	// (0x00043e87) main_usb_pane_t1_ParamLimits

0x69a6,	// (0x00043e87) main_usb_pane_t1

0x69b8,	// (0x00043e99) main_usb_pane_t2_ParamLimits

0x69b8,	// (0x00043e99) main_usb_pane_t2

0x69ca,	// (0x00043eab) main_usb_pane_t3_ParamLimits

0x69ca,	// (0x00043eab) main_usb_pane_t3

0x69dc,	// (0x00043ebd) main_usb_pane_t4_ParamLimits

0x69dc,	// (0x00043ebd) main_usb_pane_t4

0x69ee,	// (0x00043ecf) main_usb_pane_t5_ParamLimits

0x69ee,	// (0x00043ecf) main_usb_pane_t5

0x6a00,	// (0x00043ee1) main_usb_pane_t6_ParamLimits

0x6a00,	// (0x00043ee1) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0004cac4) main_usb_pane_t_ParamLimits

0x4eee,	// (0x000423cf) aid_text_placing

0x4ef7,	// (0x000423d8) main_location2_pane_t1_ParamLimits

0x4f0b,	// (0x000423ec) main_location2_pane_t2_ParamLimits

0x4f1f,	// (0x00042400) main_location2_pane_t3_ParamLimits

0x4f35,	// (0x00042416) main_location2_pane_t4_ParamLimits

0x4f35,	// (0x00042416) main_location2_pane_t4

0xf402,	// (0x0004c8e3) main_location2_pane_t_ParamLimits

0x09e6,	// (0x0003dec7) find_pinb_pane_g2_ParamLimits

0x09e6,	// (0x0003dec7) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0004c631) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0004c631) find_pinb_pane_g

0x09f2,	// (0x0003ded3) find_pinb_pane_t1_ParamLimits

0x0a04,	// (0x0003dee5) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0004c636) find_pinb_pane_t_ParamLimits

0x0747,	// (0x0003dc28) main_call3_pane

0x4779,	// (0x00041c5a) cale_month_day_heading_pane_t1_ParamLimits

0x47d7,	// (0x00041cb8) cale_month_day_heading_pane_t2_ParamLimits

0x483c,	// (0x00041d1d) cale_month_day_heading_pane_t3_ParamLimits

0x48a1,	// (0x00041d82) cale_month_day_heading_pane_t4_ParamLimits

0x4906,	// (0x00041de7) cale_month_day_heading_pane_t5_ParamLimits

0x496b,	// (0x00041e4c) cale_month_day_heading_pane_t6_ParamLimits

0x49d0,	// (0x00041eb1) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0004c7ba) cale_month_day_heading_pane_t_ParamLimits

0x0fc2,	// (0x0003e4a3) smil_status_volume_pane

0x56bc,	// (0x00042b9d) postcard_address_pane_ParamLimits

0x56bc,	// (0x00042b9d) postcard_address_pane

0x56ce,	// (0x00042baf) postcard_message_pane_ParamLimits

0x56ce,	// (0x00042baf) postcard_message_pane

0x68a3,	// (0x00043d84) call2_cli_visual_pane_t1_ParamLimits

0x68a3,	// (0x00043d84) call2_cli_visual_pane_t1

0x7397,	// (0x00044878) postcard_message_pane_t1_ParamLimits

0x7397,	// (0x00044878) postcard_message_pane_t1

0x7380,	// (0x00044861) postcard_address_pane_t1_ParamLimits

0x7380,	// (0x00044861) postcard_address_pane_t1

0x736c,	// (0x0004484d) popup_call3_audio_in_window_ParamLimits

0x736c,	// (0x0004484d) popup_call3_audio_in_window

0x71fb,	// (0x000446dc) bg_popup_call3_in_pane_ParamLimits

0x71fb,	// (0x000446dc) bg_popup_call3_in_pane

0x726d,	// (0x0004474e) popup_call3_audio_in_window_g1_ParamLimits

0x726d,	// (0x0004474e) popup_call3_audio_in_window_g1

0x728d,	// (0x0004476e) popup_call3_audio_in_window_g2_ParamLimits

0x728d,	// (0x0004476e) popup_call3_audio_in_window_g2

0x72ad,	// (0x0004478e) popup_call3_audio_in_window_g3_ParamLimits

0x72ad,	// (0x0004478e) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0004cb26) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0004cb26) popup_call3_audio_in_window_g

0x72de,	// (0x000447bf) popup_call3_audio_in_window_t1_ParamLimits

0x72de,	// (0x000447bf) popup_call3_audio_in_window_t1

0x731c,	// (0x000447fd) popup_call3_audio_in_window_t2_ParamLimits

0x731c,	// (0x000447fd) popup_call3_audio_in_window_t2

0x735a,	// (0x0004483b) popup_call3_audio_in_window_t3_ParamLimits

0x735a,	// (0x0004483b) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0004cb2f) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0004cb2f) popup_call3_audio_in_window_t

0x1541,	// (0x0003ea22) bg_popup_call3_rect_pane

0x68c0,	// (0x00043da1) bg_popup_call3_rect_pane_g1

0x0ba4,	// (0x0003e085) bg_popup_call3_rect_pane_g2

0x68c8,	// (0x00043da9) bg_popup_call3_rect_pane_g3

0x68d0,	// (0x00043db1) bg_popup_call3_rect_pane_g4

0x68d8,	// (0x00043db9) bg_popup_call3_rect_pane_g5

0x68e0,	// (0x00043dc1) bg_popup_call3_rect_pane_g6

0x68e8,	// (0x00043dc9) bg_popup_call3_rect_pane_g7

0x5311,	// (0x000427f2) mup_visualizer_osc_pane

0x1600,	// (0x0003eae1) mup_visualizer_spec_pane

0x722b,	// (0x0004470c) call3_video_qcif_pane_ParamLimits

0x722b,	// (0x0004470c) call3_video_qcif_pane

0x723c,	// (0x0004471d) call3_video_qcif_uncrop_pane_ParamLimits

0x723c,	// (0x0004471d) call3_video_qcif_uncrop_pane

0x7248,	// (0x00044729) call3_video_subqcif_pane_ParamLimits

0x7248,	// (0x00044729) call3_video_subqcif_pane

0x725c,	// (0x0004473d) call3_video_subqcif_uncrop_pane_ParamLimits

0x725c,	// (0x0004473d) call3_video_subqcif_uncrop_pane

0x72cd,	// (0x000447ae) popup_call3_audio_in_window_g4_ParamLimits

0x72cd,	// (0x000447ae) popup_call3_audio_in_window_g4

0x71bc,	// (0x0004469d) mup_spec_half_pane

0x71c5,	// (0x000446a6) mup_spec_half_pane_cp

0x71aa,	// (0x0004468b) mup_osc_middle_pane

0x71b3,	// (0x00044694) mup_visualizer_osc_pane_g1

0x718a,	// (0x0004466b) mup_spec_bar_pane_ParamLimits

0x718a,	// (0x0004466b) mup_spec_bar_pane

0x7177,	// (0x00044658) mup_spec_bar_pane_g1

0x7181,	// (0x00044662) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0004cb1a) mup_spec_bar_pane_g

0x39b3,	// (0x00040e94) aid_cale_week_size_cell_pane_ParamLimits

0x39c6,	// (0x00040ea7) bg_cale_heading_pane_ParamLimits

0x0bd8,	// (0x0003e0b9) bg_cale_pane_cp01_ParamLimits

0x39de,	// (0x00040ebf) cale_week_corner_pane_ParamLimits

0x39ef,	// (0x00040ed0) cale_week_day_heading_pane_ParamLimits

0x3a07,	// (0x00040ee8) cale_week_scroll_pane_g1_ParamLimits

0x3a1c,	// (0x00040efd) cale_week_scroll_pane_g2_ParamLimits

0x3a2d,	// (0x00040f0e) cale_week_scroll_pane_g3_ParamLimits

0x3a3e,	// (0x00040f1f) cale_week_scroll_pane_g4_ParamLimits

0x3a4f,	// (0x00040f30) cale_week_scroll_pane_g5_ParamLimits

0x3a60,	// (0x00040f41) cale_week_scroll_pane_g6_ParamLimits

0x3a71,	// (0x00040f52) cale_week_scroll_pane_g7_ParamLimits

0x3a82,	// (0x00040f63) cale_week_scroll_pane_g8_ParamLimits

0x3a93,	// (0x00040f74) cale_week_scroll_pane_g9_ParamLimits

0x3aa4,	// (0x00040f85) cale_week_scroll_pane_g10_ParamLimits

0x3ab5,	// (0x00040f96) cale_week_scroll_pane_g11_ParamLimits

0x3ac6,	// (0x00040fa7) cale_week_scroll_pane_g12_ParamLimits

0x3ad7,	// (0x00040fb8) cale_week_scroll_pane_g13_ParamLimits

0x3ae8,	// (0x00040fc9) cale_week_scroll_pane_g14_ParamLimits

0x3af9,	// (0x00040fda) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0004c6c2) cale_week_scroll_pane_g_ParamLimits

0x3b0a,	// (0x00040feb) cale_week_time_pane_ParamLimits

0x3b1b,	// (0x00040ffc) grid_cale_week_pane_ParamLimits

0x0bf1,	// (0x0003e0d2) listscroll_cale_week_pane_t1

0x3b2e,	// (0x0004100f) scroll_pane_cp08_ParamLimits

0x44c2,	// (0x000419a3) cale_month_corner_pane_ParamLimits

0x0f98,	// (0x0003e479) cale_month_pane_t1

0x4742,	// (0x00041c23) cale_month_week_pane_ParamLimits

0x4d55,	// (0x00042236) popup_call_status_window_g1_ParamLimits

0x4d69,	// (0x0004224a) popup_call_status_window_g2_ParamLimits

0x4d7d,	// (0x0004225e) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0004c86a) popup_call_status_window_g_ParamLimits

0x12b4,	// (0x0003e795) aid_call2_pane

0x29db,	// (0x0003febc) msg_header_pane_g1

0x56bc,	// (0x00042b9d) postcard_address2_pane_ParamLimits

0x56bc,	// (0x00042b9d) postcard_address2_pane

0x56ce,	// (0x00042baf) postcard_message2_pane_ParamLimits

0x56ce,	// (0x00042baf) postcard_message2_pane

0x70f2,	// (0x000445d3) message2_row_pane_ParamLimits

0x70f2,	// (0x000445d3) message2_row_pane

0x7111,	// (0x000445f2) address2_row_pane_ParamLimits

0x7111,	// (0x000445f2) address2_row_pane

0x7124,	// (0x00044605) postcard_message2_row_pane_g1

0x712c,	// (0x0004460d) postcard_message2_row_pane_t1

0x7124,	// (0x00044605) address2_row_pane_g1

0x712c,	// (0x0004460d) address2_row_pane_t1

0xc388,	// (0x00049869) aid_size_cell_vorec

0x0747,	// (0x0003dc28) main_rss_pane

0x713a,	// (0x0004461b) rss_list_single_pane_ParamLimits

0x713a,	// (0x0004461b) rss_list_single_pane

0x715b,	// (0x0004463c) rss_list_single_pane_t1

0x7169,	// (0x0004464a) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0004cb15) rss_list_single_pane_t

0x0747,	// (0x0003dc28) main_camera2_pane

0x0747,	// (0x0003dc28) main_video2_pane

0x7410,	// (0x000448f1) cams_zoom_pane_cp2_ParamLimits

0x7410,	// (0x000448f1) cams_zoom_pane_cp2

0x7430,	// (0x00044911) image2_vga_pane_ParamLimits

0x7430,	// (0x00044911) image2_vga_pane

0x7481,	// (0x00044962) main_camera2_pane_g1_ParamLimits

0x7481,	// (0x00044962) main_camera2_pane_g1

0x74a1,	// (0x00044982) main_camera2_pane_g2_ParamLimits

0x74a1,	// (0x00044982) main_camera2_pane_g2

0x74c1,	// (0x000449a2) main_camera2_pane_g3_ParamLimits

0x74c1,	// (0x000449a2) main_camera2_pane_g3

0x74e1,	// (0x000449c2) main_camera2_pane_g4_ParamLimits

0x74e1,	// (0x000449c2) main_camera2_pane_g4

0x7501,	// (0x000449e2) main_camera2_pane_g5_ParamLimits

0x7501,	// (0x000449e2) main_camera2_pane_g5

0x7521,	// (0x00044a02) main_camera2_pane_g6_ParamLimits

0x7521,	// (0x00044a02) main_camera2_pane_g6

0x7541,	// (0x00044a22) main_camera2_pane_g7_ParamLimits

0x7541,	// (0x00044a22) main_camera2_pane_g7

0x7561,	// (0x00044a42) main_camera2_pane_g8_ParamLimits

0x7561,	// (0x00044a42) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0004cb36) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0004cb36) main_camera2_pane_g

0x75a1,	// (0x00044a82) main_camera2_pane_t1_ParamLimits

0x75a1,	// (0x00044a82) main_camera2_pane_t1

0x75d6,	// (0x00044ab7) main_camera2_pane_t2_ParamLimits

0x75d6,	// (0x00044ab7) main_camera2_pane_t2

0x75fc,	// (0x00044add) main_camera2_pane_t3_ParamLimits

0x75fc,	// (0x00044add) main_camera2_pane_t3

0x765a,	// (0x00044b3b) main_camera2_pane_t4_ParamLimits

0x765a,	// (0x00044b3b) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0004cb49) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0004cb49) main_camera2_pane_t

0x76ec,	// (0x00044bcd) cams_zoom_pane_cp4_ParamLimits

0x76ec,	// (0x00044bcd) cams_zoom_pane_cp4

0x7702,	// (0x00044be3) image2_cif_pane_ParamLimits

0x7702,	// (0x00044be3) image2_cif_pane

0x772d,	// (0x00044c0e) image2_subqcif_pane_ParamLimits

0x772d,	// (0x00044c0e) image2_subqcif_pane

0x7747,	// (0x00044c28) main_video2_pane_g1_ParamLimits

0x7747,	// (0x00044c28) main_video2_pane_g1

0x7761,	// (0x00044c42) main_video2_pane_g2_ParamLimits

0x7761,	// (0x00044c42) main_video2_pane_g2

0x7777,	// (0x00044c58) main_video2_pane_g3_ParamLimits

0x7777,	// (0x00044c58) main_video2_pane_g3

0x778d,	// (0x00044c6e) main_video2_pane_g4_ParamLimits

0x778d,	// (0x00044c6e) main_video2_pane_g4

0x77a3,	// (0x00044c84) main_video2_pane_g5_ParamLimits

0x77a3,	// (0x00044c84) main_video2_pane_g5

0x77b9,	// (0x00044c9a) main_video2_pane_g6_ParamLimits

0x77b9,	// (0x00044c9a) main_video2_pane_g6

0x0005,

0xf677,	// (0x0004cb58) main_video2_pane_g_ParamLimits

0xf677,	// (0x0004cb58) main_video2_pane_g

0x77d3,	// (0x00044cb4) main_video2_pane_t1_ParamLimits

0x77d3,	// (0x00044cb4) main_video2_pane_t1

0x77f7,	// (0x00044cd8) main_video2_pane_t2_ParamLimits

0x77f7,	// (0x00044cd8) main_video2_pane_t2

0x7845,	// (0x00044d26) main_video2_pane_t3_ParamLimits

0x7845,	// (0x00044d26) main_video2_pane_t3

0x0002,

0xf684,	// (0x0004cb65) main_video2_pane_t_ParamLimits

0xf684,	// (0x0004cb65) main_video2_pane_t

0x6ba7,	// (0x00044088) call_muted_g2

0x0001,

0xf626,	// (0x0004cb07) call_muted_g

0x0747,	// (0x0003dc28) main_mup2_pane

0x788d,	// (0x00044d6e) main_mup2_pane_g1_ParamLimits

0x788d,	// (0x00044d6e) main_mup2_pane_g1

0x7899,	// (0x00044d7a) main_mup2_pane_g2_ParamLimits

0x7899,	// (0x00044d7a) main_mup2_pane_g2

0xc6ad,	// (0x00049b8e) main_mup_pane_g13_cp1

0xc6b5,	// (0x00049b96) mup_volume_pane_cp1

0x78b5,	// (0x00044d96) main_mup2_pane_g4_ParamLimits

0x78b5,	// (0x00044d96) main_mup2_pane_g4

0x78c7,	// (0x00044da8) main_mup2_pane_g5_ParamLimits

0x78c7,	// (0x00044da8) main_mup2_pane_g5

0x78d9,	// (0x00044dba) main_mup2_pane_g6_ParamLimits

0x78d9,	// (0x00044dba) main_mup2_pane_g6

0x78eb,	// (0x00044dcc) main_mup2_pane_g7_ParamLimits

0x78eb,	// (0x00044dcc) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0004cb6c) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0004cb6c) main_mup2_pane_g

0x7903,	// (0x00044de4) main_mup2_pane_t1_ParamLimits

0x7903,	// (0x00044de4) main_mup2_pane_t1

0x7919,	// (0x00044dfa) main_mup2_pane_t2_ParamLimits

0x7919,	// (0x00044dfa) main_mup2_pane_t2

0x792f,	// (0x00044e10) main_mup2_pane_t3_ParamLimits

0x792f,	// (0x00044e10) main_mup2_pane_t3

0x7945,	// (0x00044e26) main_mup2_pane_t4_ParamLimits

0x7945,	// (0x00044e26) main_mup2_pane_t4

0x795d,	// (0x00044e3e) main_mup2_pane_t5_ParamLimits

0x795d,	// (0x00044e3e) main_mup2_pane_t5

0x7975,	// (0x00044e56) main_mup2_pane_t6_ParamLimits

0x7975,	// (0x00044e56) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0004cb7b) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0004cb7b) main_mup2_pane_t

0x79a5,	// (0x00044e86) mup2_visualizer_pane_ParamLimits

0x79a5,	// (0x00044e86) mup2_visualizer_pane

0x79d3,	// (0x00044eb4) mup_progress_pane_cp_ParamLimits

0x79d3,	// (0x00044eb4) mup_progress_pane_cp

0xc698,	// (0x00049b79) mup_volume_pane_cp_ParamLimits

0xc698,	// (0x00049b79) mup_volume_pane_cp

0x79e7,	// (0x00044ec8) mup2_visualizer_pane_g1_ParamLimits

0x79e7,	// (0x00044ec8) mup2_visualizer_pane_g1

0x79fe,	// (0x00044edf) mup2_visualizer_pane_g2_ParamLimits

0x79fe,	// (0x00044edf) mup2_visualizer_pane_g2

0x7a0a,	// (0x00044eeb) mup2_visualizer_pane_g3_ParamLimits

0x7a0a,	// (0x00044eeb) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0004cb88) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0004cb88) mup2_visualizer_pane_g

0x1827,	// (0x0003ed08) aid_size_cell_fmradio

0x6d8a,	// (0x0004426b) aid_height_parent_landcape

0x0e00,	// (0x0003e2e1) wml_content_pane_cp

0x0e08,	// (0x0003e2e9) wml_tabs_pane

0x0e11,	// (0x0003e2f2) popup_wml_miniature_window

0x0e19,	// (0x0003e2fa) scroll_pane_cp021

0x0e2d,	// (0x0003e30e) wml_content_pane_comp8

0x0747,	// (0x0003dc28) bg_popup_sub_pane_cp05

0x7a28,	// (0x00044f09) popup_wml_miniature_window_g1

0x7a30,	// (0x00044f11) wml_miniature_view_pane

0x7a38,	// (0x00044f19) aid_size_wml_view

0x7a40,	// (0x00044f21) wml_miniature_view_pane_g1

0x7a49,	// (0x00044f2a) wml_miniature_view_pane_g2

0x7a52,	// (0x00044f33) wml_miniature_view_pane_g3

0x7a5a,	// (0x00044f3b) wml_miniature_view_pane_g4

0x7a62,	// (0x00044f43) wml_miniature_view_pane_g5

0x7a6a,	// (0x00044f4b) wml_miniature_view_pane_g6

0x7a72,	// (0x00044f53) wml_miniature_view_pane_g7

0x7a7a,	// (0x00044f5b) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0004cb8f) wml_miniature_view_pane_g

0x7a82,	// (0x00044f63) background_graphic_ParamLimits

0x7a82,	// (0x00044f63) background_graphic

0x7a8e,	// (0x00044f6f) wml_tabs_2_pane

0x7a97,	// (0x00044f78) wml_tabs_3_pane_ParamLimits

0x7a97,	// (0x00044f78) wml_tabs_3_pane

0x7aa9,	// (0x00044f8a) wml_tabs_4_pane_ParamLimits

0x7aa9,	// (0x00044f8a) wml_tabs_4_pane

0x7abf,	// (0x00044fa0) wml_tabs_5_pane_ParamLimits

0x7abf,	// (0x00044fa0) wml_tabs_5_pane

0x7ad9,	// (0x00044fba) wml_tabs_pane_g2_ParamLimits

0x7ad9,	// (0x00044fba) wml_tabs_pane_g2

0x7aed,	// (0x00044fce) wml_tabs_pane_g3_ParamLimits

0x7aed,	// (0x00044fce) wml_tabs_pane_g3

0x7b01,	// (0x00044fe2) wml_tabs_2_active_pane_ParamLimits

0x7b01,	// (0x00044fe2) wml_tabs_2_active_pane

0x7b15,	// (0x00044ff6) wml_tabs_2_passive_pane_ParamLimits

0x7b15,	// (0x00044ff6) wml_tabs_2_passive_pane

0x7b29,	// (0x0004500a) wml_tabs_3_active_pane_cp_ParamLimits

0x7b29,	// (0x0004500a) wml_tabs_3_active_pane_cp

0x7b3e,	// (0x0004501f) wml_tabs_3_passive_pane_ParamLimits

0x7b3e,	// (0x0004501f) wml_tabs_3_passive_pane

0x7b51,	// (0x00045032) wml_tabs_3_passive_pane_cp_ParamLimits

0x7b51,	// (0x00045032) wml_tabs_3_passive_pane_cp

0x7b68,	// (0x00045049) tabs_4_active_pane

0x7b70,	// (0x00045051) tabs_4_passive_pane

0x7b7a,	// (0x0004505b) tabs_4_passive_pane_cp

0x7b82,	// (0x00045063) tabs_4_passive_pane_cp2

0x6948,	// (0x00043e29) aid_height_text

0x52e3,	// (0x000427c4) mup_volume_cont_pane_ParamLimits

0x52e3,	// (0x000427c4) mup_volume_cont_pane

0x3618,	// (0x00040af9) aid_size_cell_pinb

0x09d2,	// (0x0003deb3) aid_size_list_pinb

0x79bf,	// (0x00044ea0) mup2_volume_cont_pane_ParamLimits

0x79bf,	// (0x00044ea0) mup2_volume_cont_pane

0xc684,	// (0x00049b65) mup2_volume_cont_pane_g1_ParamLimits

0xc684,	// (0x00049b65) mup2_volume_cont_pane_g1

0x32ef,	// (0x000407d0) aid_size_cell_touch_ParamLimits

0x32ef,	// (0x000407d0) aid_size_cell_touch

0x3507,	// (0x000409e8) touch_pane_ParamLimits

0x3507,	// (0x000409e8) touch_pane

0x02ce,	// (0x0003d7af) main_rss2_pane

0x7b95,	// (0x00045076) listscroll_rss2_pane

0x7b9e,	// (0x0004507f) rss2_navigation_pane

0x7ba6,	// (0x00045087) list_rss2_pane

0x13f4,	// (0x0003e8d5) scroll_pane_cp22

0x7bae,	// (0x0004508f) rss2_navigation_pane_g1

0x7bb7,	// (0x00045098) rss2_navigation_pane_g2

0x7bbf,	// (0x000450a0) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0004cba0) rss2_navigation_pane_g

0x7bc7,	// (0x000450a8) rss2_navigation_pane_t1

0x7bd5,	// (0x000450b6) rss2_list_single_pane_ParamLimits

0x7bd5,	// (0x000450b6) rss2_list_single_pane

0x7bed,	// (0x000450ce) rss2_list_single_pane_t2

0x7bfb,	// (0x000450dc) rss2_list_single_pane_t3_ParamLimits

0x7bfb,	// (0x000450dc) rss2_list_single_pane_t3

0x7c18,	// (0x000450f9) rss2_list_single_pane_t4

0x4b8c,	// (0x0004206d) smil_status_pane_g1

0x1a5a,	// (0x0003ef3b) main_image2_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) main_image2_pane

0x7581,	// (0x00044a62) main_camera2_pane_g9_ParamLimits

0x7581,	// (0x00044a62) main_camera2_pane_g9

0x76af,	// (0x00044b90) main_camera2_pane_t5_ParamLimits

0x76af,	// (0x00044b90) main_camera2_pane_t5

0xc654,	// (0x00049b35) main_camera2_pane_t6_ParamLimits

0xc654,	// (0x00049b35) main_camera2_pane_t6

0x7c26,	// (0x00045107) main_image2_pane_g1_ParamLimits

0x7c26,	// (0x00045107) main_image2_pane_g1

0x58fe,	// (0x00042ddf) smil2_video_pane_ParamLimits

0x58fe,	// (0x00042ddf) smil2_video_pane

0xc2e8,	// (0x000497c9) aid_zoom_text_primary_cp

0x032c,	// (0x0003d80d) popup_preview_fixed_window

0x0d69,	// (0x0003e24a) im_reading_pane_g1

0x73f8,	// (0x000448d9) cams2_bc_adjust_pane_cp_ParamLimits

0x73f8,	// (0x000448d9) cams2_bc_adjust_pane_cp

0x76de,	// (0x00044bbf) cams2_bc_adjust_pane_ParamLimits

0x76de,	// (0x00044bbf) cams2_bc_adjust_pane

0xc6bd,	// (0x00049b9e) cams2_bc_adjust_pane_g1

0xc6c5,	// (0x00049ba6) cams2_slider_pane

0xc6ce,	// (0x00049baf) cams2_slider_pane_g1

0xc6d7,	// (0x00049bb8) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0004cba7) cams2_slider_pane_g

0x36d7,	// (0x00040bb8) calc_display_pane_ParamLimits

0x36fd,	// (0x00040bde) calc_paper_pane_ParamLimits

0x3720,	// (0x00040c01) grid_calc_pane_ParamLimits

0xc5c1,	// (0x00049aa2) popup_clock_digital_window_t1_ParamLimits

0x17c4,	// (0x0003eca5) main_image_pane_t1

0x36b9,	// (0x00040b9a) aid_size_cell_calc_ParamLimits

0x36b9,	// (0x00040b9a) aid_size_cell_calc

0x6dee,	// (0x000442cf) popup_blid_sat_info2_window_ParamLimits

0x6dee,	// (0x000442cf) popup_blid_sat_info2_window

0x7c44,	// (0x00045125) aid_size_cell_blid

0x7c4c,	// (0x0004512d) bg_popup_window_pane_cp07

0x7c6f,	// (0x00045150) grid_popup_blid_pane

0x7c79,	// (0x0004515a) heading_pane_cp05_ParamLimits

0x7c79,	// (0x0004515a) heading_pane_cp05

0x7d43,	// (0x00045224) cell_popup_blid_pane_ParamLimits

0x7d43,	// (0x00045224) cell_popup_blid_pane

0x7d69,	// (0x0004524a) cell_popup_blid_pane_g1

0x7d71,	// (0x00045252) cell_popup_blid_pane_t1

0x798f,	// (0x00044e70) mup2_indicator_pane_ParamLimits

0x798f,	// (0x00044e70) mup2_indicator_pane

0x1541,	// (0x0003ea22) mup2_visualizer_osc_pane

0x7a16,	// (0x00044ef7) mup2_visualizer_spec_pane_ParamLimits

0x7a16,	// (0x00044ef7) mup2_visualizer_spec_pane

0x7d7f,	// (0x00045260) mup2_spec_half_pane

0x7d88,	// (0x00045269) mup2_spec_half_pane_cp

0x7d90,	// (0x00045271) mup2_spec_bar_pane_ParamLimits

0x7d90,	// (0x00045271) mup2_spec_bar_pane

0x7177,	// (0x00044658) mup2_spec_bar_pane_g1

0x7181,	// (0x00044662) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0004cb1a) mup2_spec_bar_pane_g

0x7db0,	// (0x00045291) mup2_osc_middle_pane

0x71b3,	// (0x00044694) mup2_visualizer_osc_pane_g1

0x0356,	// (0x0003d837) popup_number_entry_window_t1_ParamLimits

0x0369,	// (0x0003d84a) popup_number_entry_window_t2_ParamLimits

0x037b,	// (0x0003d85c) popup_number_entry_window_t3_ParamLimits

0x3559,	// (0x00040a3a) popup_number_entry_window_t5_ParamLimits

0x3559,	// (0x00040a3a) popup_number_entry_window_t5

0xf0fb,	// (0x0004c5dc) popup_number_entry_window_t_ParamLimits

0x038d,	// (0x0003d86e) text_title_cp2_ParamLimits

0xc600,	// (0x00049ae1) aid_hotspot_pointer_text2_pane

0xc626,	// (0x00049b07) main_viewer_pane_g9_ParamLimits

0xc626,	// (0x00049b07) main_viewer_pane_g9

0x0f98,	// (0x0003e479) cale_month_pane_t1_ParamLimits

0x0fd5,	// (0x0003e4b6) bg_cale_pane_ParamLimits

0x0fed,	// (0x0003e4ce) list_cale_pane_ParamLimits

0x0bf1,	// (0x0003e0d2) listscroll_cale_day_pane_t1

0x0ffe,	// (0x0003e4df) scroll_pane_cp09_ParamLimits

0x5319,	// (0x000427fa) main_mup_eq_pane_t1_ParamLimits

0x5319,	// (0x000427fa) main_mup_eq_pane_t1

0x5333,	// (0x00042814) main_mup_eq_pane_t2_ParamLimits

0x5333,	// (0x00042814) main_mup_eq_pane_t2

0x534d,	// (0x0004282e) main_mup_eq_pane_t3_ParamLimits

0x534d,	// (0x0004282e) main_mup_eq_pane_t3

0x5369,	// (0x0004284a) main_mup_eq_pane_t4_ParamLimits

0x5369,	// (0x0004284a) main_mup_eq_pane_t4

0x5385,	// (0x00042866) main_mup_eq_pane_t5_ParamLimits

0x5385,	// (0x00042866) main_mup_eq_pane_t5

0x53a1,	// (0x00042882) main_mup_eq_pane_t6_ParamLimits

0x53a1,	// (0x00042882) main_mup_eq_pane_t6

0x53b5,	// (0x00042896) main_mup_eq_pane_t7_ParamLimits

0x53b5,	// (0x00042896) main_mup_eq_pane_t7

0x53c9,	// (0x000428aa) main_mup_eq_pane_t8_ParamLimits

0x53c9,	// (0x000428aa) main_mup_eq_pane_t8

0x53dd,	// (0x000428be) main_mup_eq_pane_t9_ParamLimits

0x53dd,	// (0x000428be) main_mup_eq_pane_t9

0x53f7,	// (0x000428d8) main_mup_eq_pane_t10_ParamLimits

0x53f7,	// (0x000428d8) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0004c969) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0004c969) main_mup_eq_pane_t

0x54a6,	// (0x00042987) mup_equalizer_pane_cp5_ParamLimits

0x54ba,	// (0x0004299b) mup_equalizer_pane_cp6_ParamLimits

0x54ce,	// (0x000429af) mup_equalizer_pane_cp7_ParamLimits

0x02ce,	// (0x0003d7af) main_gallery_pane

0x71cd,	// (0x000446ae) smil2_volume_pane

0x71d5,	// (0x000446b6) smil_status_volume_pane_g1_ParamLimits

0x71e8,	// (0x000446c9) smil_status_volume_pane_g2_ParamLimits

0xc632,	// (0x00049b13) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0004cb1f) smil_status_volume_pane_g_ParamLimits

0x7c4c,	// (0x0004512d) bg_popup_window_pane_cp07_ParamLimits

0x7c5a,	// (0x0004513b) blid_firmament_pane

0x7db9,	// (0x0004529a) aid_size_cell_gallery_ParamLimits

0x7db9,	// (0x0004529a) aid_size_cell_gallery

0x7dcf,	// (0x000452b0) grid_gallery_pane_ParamLimits

0x7dcf,	// (0x000452b0) grid_gallery_pane

0x7de8,	// (0x000452c9) cell_gallery_pane_ParamLimits

0x7de8,	// (0x000452c9) cell_gallery_pane

0x7e31,	// (0x00045312) bg_cell_gallery_focus_pane_ParamLimits

0x7e31,	// (0x00045312) bg_cell_gallery_focus_pane

0x7e43,	// (0x00045324) cell_gallery_pane_g1_ParamLimits

0x7e43,	// (0x00045324) cell_gallery_pane_g1

0x7e4f,	// (0x00045330) cell_gallery_pane_g2_ParamLimits

0x7e4f,	// (0x00045330) cell_gallery_pane_g2

0x7e5c,	// (0x0004533d) cell_gallery_pane_g3_ParamLimits

0x7e5c,	// (0x0004533d) cell_gallery_pane_g3

0x7e69,	// (0x0004534a) cell_gallery_pane_g4_ParamLimits

0x7e69,	// (0x0004534a) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0004cbcd) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0004cbcd) cell_gallery_pane_g

0x7e75,	// (0x00045356) bg_cell_gallery_focus_pane_g1

0x7e7d,	// (0x0004535e) bg_cell_gallery_focus_pane_g2

0x7e85,	// (0x00045366) bg_cell_gallery_focus_pane_g3

0x7e8d,	// (0x0004536e) bg_cell_gallery_focus_pane_g4

0x7e95,	// (0x00045376) bg_cell_gallery_focus_pane_g5

0x7e9d,	// (0x0004537e) bg_cell_gallery_focus_pane_g6

0x7ea5,	// (0x00045386) bg_cell_gallery_focus_pane_g7

0x7ead,	// (0x0004538e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0004cbd6) bg_cell_gallery_focus_pane_g

0x7eb5,	// (0x00045396) aid_firma_cardinal

0x7ec9,	// (0x000453aa) blid_firmament_pane_t1

0x7ee0,	// (0x000453c1) blid_firmament_pane_t2

0x7ef7,	// (0x000453d8) blid_firmament_pane_t3

0x7f0e,	// (0x000453ef) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0004cbe7) blid_firmament_pane_t

0x7f25,	// (0x00045406) blid_sat_info_pane

0x7f35,	// (0x00045416) blid_sat_info_pane_g1

0x7f35,	// (0x00045416) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0004cbf0) blid_sat_info_pane_g

0x7f3f,	// (0x00045420) blid_sat_info_pane_t1

0x7f4d,	// (0x0004542e) smil2_volume_content_pane

0x7f56,	// (0x00045437) smil2_volume_pane_g1

0x7f5e,	// (0x0004543f) smil2_volume_content_pane_g1

0x7f67,	// (0x00045448) smil2_volume_content_pane_g2

0x7f70,	// (0x00045451) smil2_volume_content_pane_g3

0x7f79,	// (0x0004545a) smil2_volume_content_pane_g4

0x7f82,	// (0x00045463) smil2_volume_content_pane_g5

0x7f8b,	// (0x0004546c) smil2_volume_content_pane_g6

0x7f94,	// (0x00045475) smil2_volume_content_pane_g7

0x7f9d,	// (0x0004547e) smil2_volume_content_pane_g8

0x7fa6,	// (0x00045487) smil2_volume_content_pane_g9

0x7faf,	// (0x00045490) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0004cbf5) smil2_volume_content_pane_g

0x3b84,	// (0x00041065) cale_week_day_heading_pane_t1_ParamLimits

0x3b98,	// (0x00041079) cale_week_day_heading_pane_t2_ParamLimits

0x3bac,	// (0x0004108d) cale_week_day_heading_pane_t3_ParamLimits

0x3bc0,	// (0x000410a1) cale_week_day_heading_pane_t4_ParamLimits

0x3bd4,	// (0x000410b5) cale_week_day_heading_pane_t5_ParamLimits

0x3be8,	// (0x000410c9) cale_week_day_heading_pane_t6_ParamLimits

0x3bfc,	// (0x000410dd) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0004c6e1) cale_week_day_heading_pane_t_ParamLimits

0x0c03,	// (0x0003e0e4) bg_cale_side_pane_ParamLimits

0x3c10,	// (0x000410f1) cale_week_time_pane_t1_ParamLimits

0x3c28,	// (0x00041109) cale_week_time_pane_t2_ParamLimits

0x3c40,	// (0x00041121) cale_week_time_pane_t3_ParamLimits

0x3c58,	// (0x00041139) cale_week_time_pane_t4_ParamLimits

0x3c70,	// (0x00041151) cale_week_time_pane_t5_ParamLimits

0x3c88,	// (0x00041169) cale_week_time_pane_t6_ParamLimits

0x3ca0,	// (0x00041181) cale_week_time_pane_t7_ParamLimits

0x3cb8,	// (0x00041199) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0004c6f0) cale_week_time_pane_t_ParamLimits

0x3cd0,	// (0x000411b1) cell_cale_week_pane_g2_ParamLimits

0x0c03,	// (0x0003e0e4) bg_cale_side_pane_cp01_ParamLimits

0x4a35,	// (0x00041f16) cale_month_week_pane_t1_ParamLimits

0x4a4c,	// (0x00041f2d) cale_month_week_pane_t2_ParamLimits

0x4a63,	// (0x00041f44) cale_month_week_pane_t3_ParamLimits

0x4a7a,	// (0x00041f5b) cale_month_week_pane_t4_ParamLimits

0x4a91,	// (0x00041f72) cale_month_week_pane_t5_ParamLimits

0x4aa8,	// (0x00041f89) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0004c7c9) cale_month_week_pane_t_ParamLimits

0xc4cc,	// (0x000499ad) cell_cale_month_pane_g1_ParamLimits

0x02ce,	// (0x0003d7af) main_cale_event_viewer_pane

0x02ce,	// (0x0003d7af) listscroll_cale_event_viewer_pane

0x7fb8,	// (0x00045499) list_cale_ev_pane

0x7fc0,	// (0x000454a1) scroll_pane_cp023

0x7fcc,	// (0x000454ad) field_cale_ev_pane_ParamLimits

0x7fcc,	// (0x000454ad) field_cale_ev_pane

0x7fe6,	// (0x000454c7) field_cale_ev_content_pane_ParamLimits

0x7fe6,	// (0x000454c7) field_cale_ev_content_pane

0x7ff2,	// (0x000454d3) field_cale_ev_pane_g1_ParamLimits

0x7ff2,	// (0x000454d3) field_cale_ev_pane_g1

0x7ffe,	// (0x000454df) field_cale_ev_pane_g2_ParamLimits

0x7ffe,	// (0x000454df) field_cale_ev_pane_g2

0x8016,	// (0x000454f7) field_cale_ev_pane_g3_ParamLimits

0x8016,	// (0x000454f7) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0004cc0a) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0004cc0a) field_cale_ev_pane_g

0x802e,	// (0x0004550f) field_cale_ev_pane_t1_ParamLimits

0x802e,	// (0x0004550f) field_cale_ev_pane_t1

0x8045,	// (0x00045526) field_cale_ev_content_pane_t1_ParamLimits

0x8045,	// (0x00045526) field_cale_ev_content_pane_t1

0x16aa,	// (0x0003eb8b) bg_button_pane_cp01

0x0ab1,	// (0x0003df92) listscroll_cale_week_pane_ParamLimits

0x39a9,	// (0x00040e8a) popup_toolbar_window_cp01

0x0bf1,	// (0x0003e0d2) listscroll_cale_week_pane_t1_ParamLimits

0x0ab1,	// (0x0003df92) listscroll_cale_day_pane_ParamLimits

0x4beb,	// (0x000420cc) popup_toolbar_window_cp02

0x0bf1,	// (0x0003e0d2) listscroll_cale_day_pane_t1_ParamLimits

0x0ab1,	// (0x0003df92) main_cale_month_pane_ParamLimits

0x704b,	// (0x0004452c) popup_toolbar_window_cp03_ParamLimits

0x704b,	// (0x0004452c) popup_toolbar_window_cp03

0x57c2,	// (0x00042ca3) main_image_pane_g2_ParamLimits

0x57c2,	// (0x00042ca3) main_image_pane_g2

0x57d3,	// (0x00042cb4) main_image_pane_g3_ParamLimits

0x57d3,	// (0x00042cb4) main_image_pane_g3

0x0002,

0xf51a,	// (0x0004c9fb) main_image_pane_g_ParamLimits

0xf51a,	// (0x0004c9fb) main_image_pane_g

0x17c4,	// (0x0003eca5) main_image_pane_t1_ParamLimits

0x57e4,	// (0x00042cc5) main_image_pane_t2_ParamLimits

0x57e4,	// (0x00042cc5) main_image_pane_t2

0x57f6,	// (0x00042cd7) main_image_pane_t3_ParamLimits

0x57f6,	// (0x00042cd7) main_image_pane_t3

0x581e,	// (0x00042cff) main_image_pane_t4_ParamLimits

0x581e,	// (0x00042cff) main_image_pane_t4

0x0003,

0xf521,	// (0x0004ca02) main_image_pane_t_ParamLimits

0xf521,	// (0x0004ca02) main_image_pane_t

0x583e,	// (0x00042d1f) popup_image_details_window_cp01

0x5848,	// (0x00042d29) popup_toobar_trans_pane_cp01_ParamLimits

0x5848,	// (0x00042d29) popup_toobar_trans_pane_cp01

0x6ecf,	// (0x000443b0) popup_image_details_window_ParamLimits

0x6ecf,	// (0x000443b0) popup_image_details_window

0x6ee7,	// (0x000443c8) popup_image_focus_window

0x73b2,	// (0x00044893) camera2_autofocus_pane_ParamLimits

0x73b2,	// (0x00044893) camera2_autofocus_pane

0x02ce,	// (0x0003d7af) bg_popup_sub_pane_cp06

0x8062,	// (0x00045543) popup_image_focus_window_g1

0x806a,	// (0x0004554b) popup_image_focus_window_g2

0x8072,	// (0x00045553) popup_image_focus_window_g3

0x807a,	// (0x0004555b) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0004cc11) popup_image_focus_window_g

0x8082,	// (0x00045563) popup_image_focus_window_t1

0x8090,	// (0x00045571) popup_image_focus_window_t2

0x80a0,	// (0x00045581) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0004cc1a) popup_image_focus_window_t

0x80ae,	// (0x0004558f) camera2_autofocus_pane_g1

0x1a5a,	// (0x0003ef3b) bg_tb_trans_pane_cp01

0x80ec,	// (0x000455cd) popup_image_details_window_g1

0x80ff,	// (0x000455e0) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0004cc2c) popup_image_details_window_g

0x8128,	// (0x00045609) popup_image_details_window_t1

0x813a,	// (0x0004561b) popup_image_details_window_t2

0x8153,	// (0x00045634) popup_image_details_window_t3

0x8167,	// (0x00045648) popup_image_details_window_t4

0x8182,	// (0x00045663) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0004cc33) popup_image_details_window_t

0x0a9d,	// (0x0003df7e) bg_calc_paper_pane_ParamLimits

0x02ce,	// (0x0003d7af) grid_highlight_pane_cp013

0xc2f8,	// (0x000497d9) list_calc_pane_ParamLimits

0xc30a,	// (0x000497eb) scroll_pane_cp024

0x0ab1,	// (0x0003df92) bg_calc_display_pane_ParamLimits

0x3813,	// (0x00040cf4) calc_display_pane_t1_ParamLimits

0x3825,	// (0x00040d06) calc_display_pane_t2_ParamLimits

0xc312,	// (0x000497f3) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0004c663) calc_display_pane_t_ParamLimits

0x38e2,	// (0x00040dc3) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0004c680) cell_calc_pane_g

0x38eb,	// (0x00040dcc) cell_calc_pane_t1

0x0b10,	// (0x0003dff1) grid_highlight_pane_cp02_ParamLimits

0x0b26,	// (0x0003e007) toolbar_button_pane_cp01_ParamLimits

0x0b26,	// (0x0003e007) toolbar_button_pane_cp01

0x1809,	// (0x0003ecea) temp_image_control_pane_ParamLimits

0x1809,	// (0x0003ecea) temp_image_control_pane

0x1a5a,	// (0x0003ef3b) main_mp3_pane

0x819c,	// (0x0004567d) temp_image_control_pane_g1_ParamLimits

0x819c,	// (0x0004567d) temp_image_control_pane_g1

0x81aa,	// (0x0004568b) temp_image_control_pane_g2_ParamLimits

0x81aa,	// (0x0004568b) temp_image_control_pane_g2

0x81bc,	// (0x0004569d) temp_image_control_pane_g3_ParamLimits

0x81bc,	// (0x0004569d) temp_image_control_pane_g3

0x81cc,	// (0x000456ad) temp_image_control_pane_g4_ParamLimits

0x81cc,	// (0x000456ad) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0004cc3e) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0004cc3e) temp_image_control_pane_g

0x819c,	// (0x0004567d) main_mp3_pane_g1

0x81df,	// (0x000456c0) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0004cc47) main_mp3_pane_g

0xc6fd,	// (0x00049bde) main_mp3_pane_t1

0x0c72,	// (0x0003e153) main_camera_pane_g8_ParamLimits

0x0c72,	// (0x0003e153) main_camera_pane_g8

0x3f7a,	// (0x0004145b) main_video_pane_g7_ParamLimits

0x3f7a,	// (0x0004145b) main_video_pane_g7

0xc672,	// (0x00049b53) main_camera2_pane_t7_ParamLimits

0xc672,	// (0x00049b53) main_camera2_pane_t7

0x0dc0,	// (0x0003e2a1) scroll_pane_cp025_ParamLimits

0x0dc0,	// (0x0003e2a1) scroll_pane_cp025

0x0dd4,	// (0x0003e2b5) scroll_pane_cp026_ParamLimits

0x0dd4,	// (0x0003e2b5) scroll_pane_cp026

0x0de3,	// (0x0003e2c4) wml_content_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_touch_calib_pane

0x82d1,	// (0x000457b2) main_touch_calib_pane_g1

0x82dd,	// (0x000457be) main_touch_calib_pane_g2

0x82e9,	// (0x000457ca) main_touch_calib_pane_g3

0x82f5,	// (0x000457d6) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0004cc65) main_touch_calib_pane_g

0x8301,	// (0x000457e2) main_touch_calib_pane_t1

0x831b,	// (0x000457fc) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0004cc6e) main_touch_calib_pane_t

0x1482,	// (0x0003e963) mup_progress_pane_cp02

0x14a1,	// (0x0003e982) navi_pane_g1

0x1503,	// (0x0003e9e4) navi_pane_mp_t3

0x1a5a,	// (0x0003ef3b) main_mp3_pane_ParamLimits

0x709c,	// (0x0004457d) navi_pane_ParamLimits

0x819c,	// (0x0004567d) main_mp3_pane_g1_ParamLimits

0x81df,	// (0x000456c0) main_mp3_pane_g2_ParamLimits

0x81ed,	// (0x000456ce) main_mp3_pane_g3_ParamLimits

0x81ed,	// (0x000456ce) main_mp3_pane_g3

0x81fb,	// (0x000456dc) main_mp3_pane_g4_ParamLimits

0x81fb,	// (0x000456dc) main_mp3_pane_g4

0x8209,	// (0x000456ea) main_mp3_pane_g5_ParamLimits

0x8209,	// (0x000456ea) main_mp3_pane_g5

0x8217,	// (0x000456f8) main_mp3_pane_g6_ParamLimits

0x8217,	// (0x000456f8) main_mp3_pane_g6

0x8224,	// (0x00045705) main_mp3_pane_g7_ParamLimits

0x8224,	// (0x00045705) main_mp3_pane_g7

0xc6f1,	// (0x00049bd2) main_mp3_pane_g8_ParamLimits

0xc6f1,	// (0x00049bd2) main_mp3_pane_g8

0xf766,	// (0x0004cc47) main_mp3_pane_g_ParamLimits

0x8230,	// (0x00045711) main_mp3_pane_t2

0x823e,	// (0x0004571f) main_mp3_pane_t3

0xc70b,	// (0x00049bec) main_mp3_pane_t4

0xc719,	// (0x00049bfa) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0004cc58) main_mp3_pane_t

0xc727,	// (0x00049c08) mup_progress_pane_cp01

0xc2e8,	// (0x000497c9) aid_zoom_text_secondary2

0x7fb8,	// (0x00045499) list_cale_ev2_pane

0x7fc0,	// (0x000454a1) scroll_pane_cp023_ParamLimits

0x8371,	// (0x00045852) field_cale_ev2_pane_ParamLimits

0x8371,	// (0x00045852) field_cale_ev2_pane

0xc72f,	// (0x00049c10) field_cale_ev2_pane_g1_ParamLimits

0xc72f,	// (0x00049c10) field_cale_ev2_pane_g1

0xc73b,	// (0x00049c1c) field_cale_ev2_pane_g2_ParamLimits

0xc73b,	// (0x00049c1c) field_cale_ev2_pane_g2

0xc753,	// (0x00049c34) field_cale_ev2_pane_g3_ParamLimits

0xc753,	// (0x00049c34) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0004cc79) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0004cc79) field_cale_ev2_pane_g

0x2a50,	// (0x0003ff31) field_cale_ev2_pane_t1_ParamLimits

0x2a50,	// (0x0003ff31) field_cale_ev2_pane_t1

0x2a67,	// (0x0003ff48) field_cale_ev2_pane_t2_ParamLimits

0x2a67,	// (0x0003ff48) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0004cc82) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0004cc82) field_cale_ev2_pane_t

0x5672,	// (0x00042b53) main_postcard_pane_g5_ParamLimits

0x5672,	// (0x00042b53) main_postcard_pane_g5

0x5688,	// (0x00042b69) main_postcard_pane_g6_ParamLimits

0x5688,	// (0x00042b69) main_postcard_pane_g6

0x3d2a,	// (0x0004120b) camera2_autofocus_pane_cp_ParamLimits

0x3d2a,	// (0x0004120b) camera2_autofocus_pane_cp

0x1a5a,	// (0x0003ef3b) main_mup3_pane

0x83b7,	// (0x00045898) main_mup3_pane_g1_ParamLimits

0x83b7,	// (0x00045898) main_mup3_pane_g1

0x83d9,	// (0x000458ba) main_mup3_pane_g2_ParamLimits

0x83d9,	// (0x000458ba) main_mup3_pane_g2

0x845a,	// (0x0004593b) main_mup3_pane_g3_ParamLimits

0x845a,	// (0x0004593b) main_mup3_pane_g3

0x849c,	// (0x0004597d) main_mup3_pane_g4_ParamLimits

0x849c,	// (0x0004597d) main_mup3_pane_g4

0x84de,	// (0x000459bf) main_mup3_pane_g5_ParamLimits

0x84de,	// (0x000459bf) main_mup3_pane_g5

0x8522,	// (0x00045a03) main_mup3_pane_g6_ParamLimits

0x8522,	// (0x00045a03) main_mup3_pane_g6

0xc777,	// (0x00049c58) main_mup3_pane_g7_ParamLimits

0xc777,	// (0x00049c58) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0004cc92) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0004cc92) main_mup3_pane_g

0x859e,	// (0x00045a7f) main_mup3_pane_t1_ParamLimits

0x859e,	// (0x00045a7f) main_mup3_pane_t1

0x8612,	// (0x00045af3) main_mup3_pane_t2_ParamLimits

0x8612,	// (0x00045af3) main_mup3_pane_t2

0x86e6,	// (0x00045bc7) main_mup3_pane_t4_ParamLimits

0x86e6,	// (0x00045bc7) main_mup3_pane_t4

0x8740,	// (0x00045c21) main_mup3_pane_t5_ParamLimits

0x8740,	// (0x00045c21) main_mup3_pane_t5

0x87f4,	// (0x00045cd5) main_mup3_pane_t6_ParamLimits

0x87f4,	// (0x00045cd5) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0004cca3) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0004cca3) main_mup3_pane_t

0x88a8,	// (0x00045d89) mup3_progress_pane_ParamLimits

0x88a8,	// (0x00045d89) mup3_progress_pane

0x8924,	// (0x00045e05) popup_mup3_control_window_ParamLimits

0x8924,	// (0x00045e05) popup_mup3_control_window

0xc785,	// (0x00049c66) popup_mup3_text_window

0x8956,	// (0x00045e37) mup3_progress_pane_t1

0x896d,	// (0x00045e4e) mup3_progress_pane_t2

0xc78d,	// (0x00049c6e) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0004ccb0) mup3_progress_pane_t

0xc7a4,	// (0x00049c85) mup_progress_pane_cp03

0x02ce,	// (0x0003d7af) bg_tb_trans_pane_cp04

0x8984,	// (0x00045e65) mup3_volume_pane

0x898c,	// (0x00045e6d) popup_mup3_control_window_g1

0x8995,	// (0x00045e76) mup3_volume_pane_g1

0x899e,	// (0x00045e7f) mup3_volume_pane_g2

0x89a7,	// (0x00045e88) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0004ccb7) mup3_volume_pane_g

0x02ce,	// (0x0003d7af) bg_tb_trans_pane_cp03

0xc7b4,	// (0x00049c95) popup_mup3_text_window_g1

0xc7bc,	// (0x00049c9d) popup_mup3_text_window_t1

0x0af9,	// (0x0003dfda) list_calc_item_pane_g1_ParamLimits

0x7b8c,	// (0x0004506d) mup_volume_pane_cp_g1

0x8335,	// (0x00045816) main_touch_calib_pane_t3

0x8349,	// (0x0004582a) main_touch_calib_pane_t4

0x835d,	// (0x0004583e) main_touch_calib_pane_t5

0x02d8,	// (0x0003d7b9) aid_cell_size_toolbar2

0x02e0,	// (0x0003d7c1) aid_popup3_width_pane

0xc2e0,	// (0x000497c1) aid_zoom_text_msg_primary

0xc3ec,	// (0x000498cd) vorec_t7

0x0abd,	// (0x0003df9e) bg_calc_paper_pane_g1_ParamLimits

0x0ac9,	// (0x0003dfaa) bg_calc_paper_pane_g2_ParamLimits

0x0ad5,	// (0x0003dfb6) bg_calc_paper_pane_g3_ParamLimits

0x0ae1,	// (0x0003dfc2) bg_calc_paper_pane_g4_ParamLimits

0x0aed,	// (0x0003dfce) bg_calc_paper_pane_g5_ParamLimits

0x386c,	// (0x00040d4d) bg_calc_paper_pane_g6_ParamLimits

0x387b,	// (0x00040d5c) bg_calc_paper_pane_g7_ParamLimits

0x388a,	// (0x00040d6b) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0004c66a) bg_calc_paper_pane_g_ParamLimits

0x389d,	// (0x00040d7e) calc_bg_paper_pane_g9_ParamLimits

0x3e84,	// (0x00041365) image_qvga_pane_ParamLimits

0x3e84,	// (0x00041365) image_qvga_pane

0x09a2,	// (0x0003de83) bg_popup_sub_pane_cp04_ParamLimits

0x1740,	// (0x0003ec21) popup_mup_playback_window_g1_ParamLimits

0x174c,	// (0x0003ec2d) popup_mup_playback_window_t1_ParamLimits

0x1761,	// (0x0003ec42) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0004c9f6) popup_mup_playback_window_t_ParamLimits

0x78a9,	// (0x00044d8a) main_mup2_pane_g3_ParamLimits

0x78a9,	// (0x00044d8a) main_mup2_pane_g3

0x4131,	// (0x00041612) popup_toolbar_window_cp04

0x5ca4,	// (0x00043185) popup_call2_audio_second_window_g3_ParamLimits

0x5ca4,	// (0x00043185) popup_call2_audio_second_window_g3

0x60ae,	// (0x0004358f) popup_call2_audio_first_window_g4_ParamLimits

0x60ae,	// (0x0004358f) popup_call2_audio_first_window_g4

0x672d,	// (0x00043c0e) popup_call2_audio_in_window_g4_ParamLimits

0x672d,	// (0x00043c0e) popup_call2_audio_in_window_g4

0x57a4,	// (0x00042c85) aid_area_sk_bg_cut_ParamLimits

0x57a4,	// (0x00042c85) aid_area_sk_bg_cut

0x1776,	// (0x0003ec57) aid_area_sk_bg_cut_2_ParamLimits

0x1776,	// (0x0003ec57) aid_area_sk_bg_cut_2

0x7e21,	// (0x00045302) aid_placing_details_win

0x7e29,	// (0x0004530a) aid_placing_details_win_2

0x80ae,	// (0x0004558f) camera2_autofocus_pane_g1_ParamLimits

0x34a6,	// (0x00040987) popup_fixed_preview_cale_window_ParamLimits

0x34a6,	// (0x00040987) popup_fixed_preview_cale_window

0x1552,	// (0x0003ea33) navi_slider_pane_g3

0x155b,	// (0x0003ea3c) navi_slider_pane_g4

0x1564,	// (0x0003ea45) navi_slider_pane_g5

0x1552,	// (0x0003ea33) navi_slider_pane_g6

0xc5e7,	// (0x00049ac8) navi_slider_pane_g7

0x1677,	// (0x0003eb58) mup_scale_pane_g3

0x1680,	// (0x0003eb61) mup_scale_pane_g4

0x1689,	// (0x0003eb6a) mup_scale_pane_g5

0x54e2,	// (0x000429c3) mup_scale_pane_g6

0x54eb,	// (0x000429cc) mup_scale_pane_g7

0x1552,	// (0x0003ea33) cams2_slider_pane_g3

0x7c3c,	// (0x0004511d) cams2_slider_pane_g4

0xc6e0,	// (0x00049bc1) cams2_slider_pane_g5

0x1552,	// (0x0003ea33) cams2_slider_pane_g6

0xc6e8,	// (0x00049bc9) cams2_slider_pane_g7

0x7f35,	// (0x00045416) camera2_autofocus_pane_cp_g1

0xc7ca,	// (0x00049cab) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7ca,	// (0x00049cab) bg_popup_preview_window_pane_cp02

0xc7d6,	// (0x00049cb7) list_fp_cale_pane_ParamLimits

0xc7d6,	// (0x00049cb7) list_fp_cale_pane

0xc7e2,	// (0x00049cc3) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7e2,	// (0x00049cc3) popup_fixed_preview_cale_window_t1

0x89b0,	// (0x00045e91) popup_fixed_preview_cale_window_t2_ParamLimits

0x89b0,	// (0x00045e91) popup_fixed_preview_cale_window_t2

0x89c5,	// (0x00045ea6) popup_fixed_preview_cale_window_t3_ParamLimits

0x89c5,	// (0x00045ea6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0004ccbe) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0004ccbe) popup_fixed_preview_cale_window_t

0x89da,	// (0x00045ebb) list_single_fp_cale_pane_ParamLimits

0x89da,	// (0x00045ebb) list_single_fp_cale_pane

0xc800,	// (0x00049ce1) list_single_fp_cale_pane_g1_ParamLimits

0xc800,	// (0x00049ce1) list_single_fp_cale_pane_g1

0xc80c,	// (0x00049ced) list_single_fp_cale_pane_g2_ParamLimits

0xc80c,	// (0x00049ced) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0004ccc5) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0004ccc5) list_single_fp_cale_pane_g

0xc825,	// (0x00049d06) list_single_fp_cale_pane_t1_ParamLimits

0xc825,	// (0x00049d06) list_single_fp_cale_pane_t1

0xc837,	// (0x00049d18) list_single_fp_cale_pane_t2_ParamLimits

0xc837,	// (0x00049d18) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0004cccc) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0004cccc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x02ce,	// (0x0003d7af) main_dialer_pane

0x89f2,	// (0x00045ed3) aid_cell_size_keypad

0x89fc,	// (0x00045edd) dialer_ne_pane

0x8a04,	// (0x00045ee5) grid_dialer_command_1_pane

0x8a0c,	// (0x00045eed) grid_dialer_command_2_pane

0x8a14,	// (0x00045ef5) grid_dialer_keypad_pane

0x8a26,	// (0x00045f07) bg_popup_call_pane_cp06_ParamLimits

0x8a26,	// (0x00045f07) bg_popup_call_pane_cp06

0x8a32,	// (0x00045f13) dialer_ne_clear_pane_ParamLimits

0x8a32,	// (0x00045f13) dialer_ne_clear_pane

0xc86a,	// (0x00049d4b) dialer_ne_pane_g1

0xc872,	// (0x00049d53) dialer_ne_pane_t1_ParamLimits

0xc872,	// (0x00049d53) dialer_ne_pane_t1

0x8a3e,	// (0x00045f1f) dialer_ne_pane_t2_ParamLimits

0x8a3e,	// (0x00045f1f) dialer_ne_pane_t2

0x8a68,	// (0x00045f49) dialer_ne_pane_t3_ParamLimits

0x8a68,	// (0x00045f49) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0004ccd1) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0004ccd1) dialer_ne_pane_t

0x8a98,	// (0x00045f79) dialer_ne_pane_t3_copy1_ParamLimits

0x8a98,	// (0x00045f79) dialer_ne_pane_t3_copy1

0x8ac7,	// (0x00045fa8) cell_dialer_keypad_pane_ParamLimits

0x8ac7,	// (0x00045fa8) cell_dialer_keypad_pane

0x8ade,	// (0x00045fbf) cell_dialer_command_1_pane_ParamLimits

0x8ade,	// (0x00045fbf) cell_dialer_command_1_pane

0x8af4,	// (0x00045fd5) cell_dialer_command_2_pane_ParamLimits

0x8af4,	// (0x00045fd5) cell_dialer_command_2_pane

0xc884,	// (0x00049d65) bg_button_pane_cp02_ParamLimits

0xc884,	// (0x00049d65) bg_button_pane_cp02

0x8b03,	// (0x00045fe4) cell_dialer_keypad_pane_g1_ParamLimits

0x8b03,	// (0x00045fe4) cell_dialer_keypad_pane_g1

0xc884,	// (0x00049d65) bg_button_pane_cp03_ParamLimits

0xc884,	// (0x00049d65) bg_button_pane_cp03

0x8b18,	// (0x00045ff9) cell_dialer_command_1_pane_g1_ParamLimits

0x8b18,	// (0x00045ff9) cell_dialer_command_1_pane_g1

0xc890,	// (0x00049d71) bg_button_pane_cp04

0x8b2c,	// (0x0004600d) cell_dialer_command_2_pane_g1

0x1541,	// (0x0003ea22) bg_button_pane_cp06

0xc898,	// (0x00049d79) dialer_ne_clear_pane_g1

0x5020,	// (0x00042501) navi_pane_g2

0x504e,	// (0x0004252f) navi_pane_g3

0x0002,

0xf418,	// (0x0004c8f9) navi_pane_g

0x5077,	// (0x00042558) navi_pane_mv_g2

0x509e,	// (0x0004257f) navi_pane_mv_g5

0x50a6,	// (0x00042587) navi_pane_mv_t1

0x0ab1,	// (0x0003df92) main_clock2_pane

0x8b5f,	// (0x00046040) main_clock2_list_pane_ParamLimits

0x8b5f,	// (0x00046040) main_clock2_list_pane

0x8b95,	// (0x00046076) main_clock2_pane_t1_ParamLimits

0x8b95,	// (0x00046076) main_clock2_pane_t1

0x8bd3,	// (0x000460b4) main_clock2_pane_t2_ParamLimits

0x8bd3,	// (0x000460b4) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0004ccd8) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0004ccd8) main_clock2_pane_t

0x8c5d,	// (0x0004613e) popup_clock_analogue_window_cp03_ParamLimits

0x8c5d,	// (0x0004613e) popup_clock_analogue_window_cp03

0x8c84,	// (0x00046165) popup_clock_digital_window_cp02_ParamLimits

0x8c84,	// (0x00046165) popup_clock_digital_window_cp02

0x8cf9,	// (0x000461da) main_clock2_list_single_pane_ParamLimits

0x8cf9,	// (0x000461da) main_clock2_list_single_pane

0x1541,	// (0x0003ea22) list_highlight_pane_cp05

0xc8a0,	// (0x00049d81) main_clock2_list_single_pane_t1

0x4131,	// (0x00041612) popup_toolbar_window_cp04_ParamLimits

0x80bc,	// (0x0004559d) camera2_autofocus_pane_g2_ParamLimits

0x80bc,	// (0x0004559d) camera2_autofocus_pane_g2

0x80c8,	// (0x000455a9) camera2_autofocus_pane_g3_ParamLimits

0x80c8,	// (0x000455a9) camera2_autofocus_pane_g3

0x80d4,	// (0x000455b5) camera2_autofocus_pane_g4_ParamLimits

0x80d4,	// (0x000455b5) camera2_autofocus_pane_g4

0x80e0,	// (0x000455c1) camera2_autofocus_pane_g5_ParamLimits

0x80e0,	// (0x000455c1) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0004cc21) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0004cc21) camera2_autofocus_pane_g

0x8397,	// (0x00045878) camera2_autofocus_pane_cp_g2

0x839f,	// (0x00045880) camera2_autofocus_pane_cp_g3

0x83a7,	// (0x00045888) camera2_autofocus_pane_cp_g4

0x83af,	// (0x00045890) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0004cc87) camera2_autofocus_pane_cp_g

0x8a1e,	// (0x00045eff) popup_dialer_spcha_window

0x02ce,	// (0x0003d7af) bg_popup_sub_pane_cp07

0xc8ae,	// (0x00049d8f) list_spcha_pane

0xc8b6,	// (0x00049d97) list_single_spcha_pane_ParamLimits

0xc8b6,	// (0x00049d97) list_single_spcha_pane

0x02ce,	// (0x0003d7af) list_highlight_pane_cp06

0xc8c7,	// (0x00049da8) list_single_spcha_pane_t1

0x64d7,	// (0x000439b8) popup_call2_audio_out_window_g4_ParamLimits

0x64d7,	// (0x000439b8) popup_call2_audio_out_window_g4

0x02ce,	// (0x0003d7af) main_imed2_pane

0x6eef,	// (0x000443d0) popup_imed_adjust2_window

0x6f02,	// (0x000443e3) popup_imed_trans_window_ParamLimits

0x6f02,	// (0x000443e3) popup_imed_trans_window

0x7ca5,	// (0x00045186) popup_blid_sat_info2_window_t1

0x7cb3,	// (0x00045194) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0004cbb6) popup_blid_sat_info2_window_t

0x8da3,	// (0x00046284) aid_size_cell_colour_35

0x8dc3,	// (0x000462a4) aid_size_cell_colour_112

0x8de3,	// (0x000462c4) aid_size_cell_effect

0x6db0,	// (0x00044291) bg_tb_trans_pane_cp02

0x1071,	// (0x0003e552) heading_imed_pane

0x8e03,	// (0x000462e4) listscroll_imed_pane

0xc8d5,	// (0x00049db6) heading_imed_pane_g1

0xc8dd,	// (0x00049dbe) heading_imed_pane_t1

0xc8eb,	// (0x00049dcc) grid_imed_colour_35_pane_ParamLimits

0xc8eb,	// (0x00049dcc) grid_imed_colour_35_pane

0x8e0f,	// (0x000462f0) grid_imed_effect_pane

0xc906,	// (0x00049de7) list_imed_aspect_pane

0x8e24,	// (0x00046305) scroll_pane_cp027_ParamLimits

0x8e24,	// (0x00046305) scroll_pane_cp027

0x8e35,	// (0x00046316) cell_imed_effect_pane_ParamLimits

0x8e35,	// (0x00046316) cell_imed_effect_pane

0xc90e,	// (0x00049def) cell_imed_colour_pane_ParamLimits

0xc90e,	// (0x00049def) cell_imed_colour_pane

0xc950,	// (0x00049e31) cell_imed_colour_pane_g1_ParamLimits

0xc950,	// (0x00049e31) cell_imed_colour_pane_g1

0xc961,	// (0x00049e42) hgihlgiht_grid_pane_cp016_ParamLimits

0xc961,	// (0x00049e42) hgihlgiht_grid_pane_cp016

0x8e5c,	// (0x0004633d) cell_imed_effect_pane_g1

0x8e64,	// (0x00046345) grid_highlight_pane_cp017

0x1a74,	// (0x0003ef55) list_imed_single_pane_ParamLimits

0x1a74,	// (0x0003ef55) list_imed_single_pane

0x02ce,	// (0x0003d7af) list_highlight_pane_cp07

0xc972,	// (0x00049e53) list_imed_aspect_pane_comp1_t1

0x6db0,	// (0x00044291) bg_tb_trans_pane_cp05

0xc994,	// (0x00049e75) popup_imed_adjust2_window_g1

0xc9bb,	// (0x00049e9c) popup_imed_adjust2_window_t1

0xc9d3,	// (0x00049eb4) slider_imed_adjust_pane

0xc9e7,	// (0x00049ec8) slider_imed_adjust_pane_g1

0xc9f7,	// (0x00049ed8) slider_imed_adjust_pane_g2

0xca07,	// (0x00049ee8) slider_imed_adjust_pane_g3

0xca18,	// (0x00049ef9) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0004ccf5) slider_imed_adjust_pane_g

0x8e6d,	// (0x0004634e) aid_size_cell_clipart2

0x8e79,	// (0x0004635a) grid_imed_clipart_pane

0xca29,	// (0x00049f0a) scroll_pane_cp031

0x8e83,	// (0x00046364) cell_imed_clipart_pane_ParamLimits

0x8e83,	// (0x00046364) cell_imed_clipart_pane

0x8eaa,	// (0x0004638b) cell_imed_clipart_pane_g1

0x02ce,	// (0x0003d7af) grid_highlight_pane_cp014

0x8b74,	// (0x00046055) main_clock2_pane_g1_ParamLimits

0x8b74,	// (0x00046055) main_clock2_pane_g1

0x8ca4,	// (0x00046185) aid_call2_pane_cp10

0x8cb6,	// (0x00046197) aid_call_pane_cp10

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g1

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g2

0x8cc8,	// (0x000461a9) popup_clock_analogue_window_cp10_g3

0x8cc8,	// (0x000461a9) popup_clock_analogue_window_cp10_g4

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0004cce3) popup_clock_analogue_window_cp10_g

0x8cda,	// (0x000461bb) popup_clock_analogue_window_cp10_t1

0x8d0b,	// (0x000461ec) clock_digital_number_pane_cp10_ParamLimits

0x8d0b,	// (0x000461ec) clock_digital_number_pane_cp10

0x8d23,	// (0x00046204) clock_digital_number_pane_cp11_ParamLimits

0x8d23,	// (0x00046204) clock_digital_number_pane_cp11

0x8d3b,	// (0x0004621c) clock_digital_number_pane_cp12_ParamLimits

0x8d3b,	// (0x0004621c) clock_digital_number_pane_cp12

0x8d53,	// (0x00046234) clock_digital_number_pane_cp13_ParamLimits

0x8d53,	// (0x00046234) clock_digital_number_pane_cp13

0x8d6b,	// (0x0004624c) clock_digital_separator_pane_cp10_ParamLimits

0x8d6b,	// (0x0004624c) clock_digital_separator_pane_cp10

0x8d83,	// (0x00046264) popup_clock_digital_window_cp02_t1_ParamLimits

0x8d83,	// (0x00046264) popup_clock_digital_window_cp02_t1

0x099a,	// (0x0003de7b) clock_digital_number_pane_cp10_g1

0x099a,	// (0x0003de7b) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0004ccfe) clock_digital_number_pane_cp10_g

0x099a,	// (0x0003de7b) clock_digital_separator_pane_cp10_g1

0x099a,	// (0x0003de7b) clock_digital_separator_pane_g2_cp10

0x1511,	// (0x0003e9f2) navi_pane_vded_g4

0x151a,	// (0x0003e9fb) navi_pane_vded_g5

0x1523,	// (0x0003ea04) navi_pane_vded_t1

0x02ce,	// (0x0003d7af) main_vded_pane

0x8eb3,	// (0x00046394) main_vded_pane_g1

0x8ebf,	// (0x000463a0) main_vded_pane_g2

0x8ec9,	// (0x000463aa) main_vded_pane_g3

0x0002,

0xf822,	// (0x0004cd03) main_vded_pane_g

0x8ed3,	// (0x000463b4) main_vded_pane_t1

0x8ee1,	// (0x000463c2) main_vded_pane_t2

0x0001,

0xf829,	// (0x0004cd0a) main_vded_pane_t

0x8eef,	// (0x000463d0) vded_slider_pane

0x8ef9,	// (0x000463da) vded_video_pane

0xca31,	// (0x00049f12) vded_video_pane_g1

0x8f03,	// (0x000463e4) vded_video_pane_g2

0x7f35,	// (0x00045416) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0004cd0f) vded_video_pane_g

0xca3b,	// (0x00049f1c) vded_slider_pane_g1

0x7b8c,	// (0x0004506d) vded_slider_pane_g2

0xca44,	// (0x00049f25) vded_slider_pane_g3

0xca4d,	// (0x00049f2e) vded_slider_pane_g4

0xca56,	// (0x00049f37) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0004cd16) vded_slider_pane_g

0x890c,	// (0x00045ded) mup3_rocker_pane_ParamLimits

0x890c,	// (0x00045ded) mup3_rocker_pane

0x8f0c,	// (0x000463ed) mup3_control_keys_pane_g1

0x8f14,	// (0x000463f5) mup3_control_keys_pane_g2

0x8f1c,	// (0x000463fd) mup3_control_keys_pane_g3

0x8f24,	// (0x00046405) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0004cd21) mup3_control_keys_pane_g

0x34dd,	// (0x000409be) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34dd,	// (0x000409be) popup_toolbar2_fixed_window_cp01

0x8940,	// (0x00045e21) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8940,	// (0x00045e21) popup_toolbar2_fixed_window_cp02

0x5e16,	// (0x000432f7) popup_call2_audio_second_window_t4_ParamLimits

0x5e16,	// (0x000432f7) popup_call2_audio_second_window_t4

0x6344,	// (0x00043825) popup_call2_audio_first_window_t6_ParamLimits

0x6344,	// (0x00043825) popup_call2_audio_first_window_t6

0x65da,	// (0x00043abb) popup_call2_audio_out_window_t6_ParamLimits

0x65da,	// (0x00043abb) popup_call2_audio_out_window_t6

0x02ce,	// (0x0003d7af) main_vitu_pane

0x8f34,	// (0x00046415) aid_size_cell_itu_ParamLimits

0x8f34,	// (0x00046415) aid_size_cell_itu

0x1a5a,	// (0x0003ef3b) bg_popup_window_pane_cp08_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_popup_window_pane_cp08

0x8f4a,	// (0x0004642b) field_vitu_entry_pane_ParamLimits

0x8f4a,	// (0x0004642b) field_vitu_entry_pane

0x8f61,	// (0x00046442) grid_vitu_function_pane_ParamLimits

0x8f61,	// (0x00046442) grid_vitu_function_pane

0x8f7c,	// (0x0004645d) grid_vitu_itu_pane_ParamLimits

0x8f7c,	// (0x0004645d) grid_vitu_itu_pane

0x8f9a,	// (0x0004647b) cell_vitu_itu_pane_ParamLimits

0x8f9a,	// (0x0004647b) cell_vitu_itu_pane

0x8fbe,	// (0x0004649f) cell_vitu_function_pane_ParamLimits

0x8fbe,	// (0x0004649f) cell_vitu_function_pane

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp08_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp08

0x8fd9,	// (0x000464ba) field_vitu_entry_pane_t1_ParamLimits

0x8fd9,	// (0x000464ba) field_vitu_entry_pane_t1

0xca77,	// (0x00049f58) field_vitu_entry_pane_t2_ParamLimits

0xca77,	// (0x00049f58) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0004cd2f) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0004cd2f) field_vitu_entry_pane_t

0xca94,	// (0x00049f75) bg_button_pane_cp05_ParamLimits

0xca94,	// (0x00049f75) bg_button_pane_cp05

0x8ff9,	// (0x000464da) cell_vitu_itu_pane_g1

0x9011,	// (0x000464f2) cell_vitu_itu_pane_t1_ParamLimits

0x9011,	// (0x000464f2) cell_vitu_itu_pane_t1

0x9023,	// (0x00046504) cell_vitu_itu_pane_t2_ParamLimits

0x9023,	// (0x00046504) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0004cd34) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0004cd34) cell_vitu_itu_pane_t

0xcaa2,	// (0x00049f83) bg_button_pane_cp07

0x9058,	// (0x00046539) cell_vitu_function_pane_g1

0xc2f0,	// (0x000497d1) main_calc_pane_g1

0x3313,	// (0x000407f4) aid_visual_content_pane

0x02ce,	// (0x0003d7af) main_vradio_pane

0x9061,	// (0x00046542) main_vradio_pane_g1_ParamLimits

0x9061,	// (0x00046542) main_vradio_pane_g1

0xcaac,	// (0x00049f8d) main_vradio_pane_g2_ParamLimits

0xcaac,	// (0x00049f8d) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0004cd3b) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0004cd3b) main_vradio_pane_g

0x907a,	// (0x0004655b) main_vradio_pane_t1_ParamLimits

0x907a,	// (0x0004655b) main_vradio_pane_t1

0x908f,	// (0x00046570) main_vradio_pane_t2_ParamLimits

0x908f,	// (0x00046570) main_vradio_pane_t2

0xcab9,	// (0x00049f9a) main_vradio_pane_t3_ParamLimits

0xcab9,	// (0x00049f9a) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0004cd40) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0004cd40) main_vradio_pane_t

0x90a4,	// (0x00046585) vradio_rocker_control_pane_ParamLimits

0x90a4,	// (0x00046585) vradio_rocker_control_pane

0x90b6,	// (0x00046597) vradio_station_info_pane_ParamLimits

0x90b6,	// (0x00046597) vradio_station_info_pane

0xcacd,	// (0x00049fae) vradio_frequency_info_pane_ParamLimits

0xcacd,	// (0x00049fae) vradio_frequency_info_pane

0x7f35,	// (0x00045416) vradio_station_info_pane_g1

0xcadc,	// (0x00049fbd) vradio_station_info_pane_t1_ParamLimits

0xcadc,	// (0x00049fbd) vradio_station_info_pane_t1

0xcafe,	// (0x00049fdf) vradio_station_info_pane_t2_ParamLimits

0xcafe,	// (0x00049fdf) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0004cd47) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0004cd47) vradio_station_info_pane_t

0xcb10,	// (0x00049ff1) vradio_tuning_pane

0xcb18,	// (0x00049ff9) vradio_rocker_control_pane_g1

0xcb20,	// (0x0004a001) vradio_rocker_control_pane_g2

0xcb28,	// (0x0004a009) vradio_rocker_control_pane_g3

0xcb30,	// (0x0004a011) vradio_rocker_control_pane_g4

0xcb38,	// (0x0004a019) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0004cd4c) vradio_rocker_control_pane_g

0x90c8,	// (0x000465a9) vradio_frequency_info_pane_g1

0xcb40,	// (0x0004a021) vradio_frequency_info_pane_t1_ParamLimits

0xcb40,	// (0x0004a021) vradio_frequency_info_pane_t1

0x90d2,	// (0x000465b3) vradio_tuning_pane_g1

0x90dd,	// (0x000465be) vradio_tuning_pane_t1

0x02f4,	// (0x0003d7d5) area_side_right_pane_ParamLimits

0x02f4,	// (0x0003d7d5) area_side_right_pane

0x6d59,	// (0x0004423a) status_small_pane_g1

0x6d61,	// (0x00044242) status_small_pane_g2

0x6d6a,	// (0x0004424b) status_small_pane_g3

0x6d73,	// (0x00044254) status_small_pane_g4

0x0003,

0xf62b,	// (0x0004cb0c) status_small_pane_g

0x6d7c,	// (0x0004425d) status_small_pane_t1

0x02ce,	// (0x0003d7af) main_video3_pane

0xcb54,	// (0x0004a035) cams_zoom_vslider_pane

0xcb5c,	// (0x0004a03d) image3_wide_pane_ParamLimits

0xcb5c,	// (0x0004a03d) image3_wide_pane

0xcb76,	// (0x0004a057) image3_wide_small_pane

0xcb82,	// (0x0004a063) main_video3_pane_g1_ParamLimits

0xcb82,	// (0x0004a063) main_video3_pane_g1

0xcb9e,	// (0x0004a07f) main_video3_pane_g2_ParamLimits

0xcb9e,	// (0x0004a07f) main_video3_pane_g2

0x0001,

0xf876,	// (0x0004cd57) main_video3_pane_g_ParamLimits

0xf876,	// (0x0004cd57) main_video3_pane_g

0xcbba,	// (0x0004a09b) main_video3_pane_t1_ParamLimits

0xcbba,	// (0x0004a09b) main_video3_pane_t1

0xcbe5,	// (0x0004a0c6) main_video3_pane_t2_ParamLimits

0xcbe5,	// (0x0004a0c6) main_video3_pane_t2

0xcc10,	// (0x0004a0f1) main_video3_pane_t3_ParamLimits

0xcc10,	// (0x0004a0f1) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0004cd5c) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0004cd5c) main_video3_pane_t

0xcc3d,	// (0x0004a11e) cams_zoom_vslider_pane_g1

0xcc46,	// (0x0004a127) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0004cd63) cams_zoom_vslider_pane_g

0xcc4e,	// (0x0004a12f) small_slider_vertical_pane

0x7f35,	// (0x00045416) small_slider_vertical_pane_g1

0x7f35,	// (0x00045416) small_slider_vertical_pane_g2

0xcc56,	// (0x0004a137) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0004cd68) small_slider_vertical_pane_g

0x02ce,	// (0x0003d7af) main_hwr_training_pane

0xcc5f,	// (0x0004a140) hwr_training_instruct_pane_ParamLimits

0xcc5f,	// (0x0004a140) hwr_training_instruct_pane

0x90ec,	// (0x000465cd) hwr_training_navi_pane_ParamLimits

0x90ec,	// (0x000465cd) hwr_training_navi_pane

0x910b,	// (0x000465ec) hwr_training_write_pane_ParamLimits

0x910b,	// (0x000465ec) hwr_training_write_pane

0x02ce,	// (0x0003d7af) bg_frame_shadow_pane

0xcc96,	// (0x0004a177) hwr_training_write_pane_g1

0xcc9e,	// (0x0004a17f) hwr_training_write_pane_g2

0xcca6,	// (0x0004a187) hwr_training_write_pane_g3

0xccae,	// (0x0004a18f) hwr_training_write_pane_g4

0xccb6,	// (0x0004a197) hwr_training_write_pane_g5

0xccbe,	// (0x0004a19f) hwr_training_write_pane_g6

0xccc6,	// (0x0004a1a7) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0004cd6f) hwr_training_write_pane_g

0xccce,	// (0x0004a1af) hwr_training_navi_pane_g1_ParamLimits

0xccce,	// (0x0004a1af) hwr_training_navi_pane_g1

0xcce0,	// (0x0004a1c1) hwr_training_navi_pane_g2_ParamLimits

0xcce0,	// (0x0004a1c1) hwr_training_navi_pane_g2

0xccf2,	// (0x0004a1d3) hwr_training_navi_pane_g3_ParamLimits

0xccf2,	// (0x0004a1d3) hwr_training_navi_pane_g3

0xed4d,	// (0x0004c22e) hwr_training_navi_pane_g4_ParamLimits

0xed4d,	// (0x0004c22e) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0004cd7e) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0004cd7e) hwr_training_navi_pane_g

0xed5a,	// (0x0004c23b) hwr_training_navi_pane_t1

0x9155,	// (0x00046636) list_single_hwr_training_instruct_pane_ParamLimits

0x9155,	// (0x00046636) list_single_hwr_training_instruct_pane

0xcd02,	// (0x0004a1e3) list_single_hwr_training_instruct_pane_t1

0x7e75,	// (0x00045356) bg_frame_shadow_pane_g1

0xcd11,	// (0x0004a1f2) bg_frame_shadow_pane_g2

0xcd19,	// (0x0004a1fa) bg_frame_shadow_pane_g3

0xcd21,	// (0x0004a202) bg_frame_shadow_pane_g4

0xcd29,	// (0x0004a20a) bg_frame_shadow_pane_g5

0xcd31,	// (0x0004a212) bg_frame_shadow_pane_g6

0xcd39,	// (0x0004a21a) bg_frame_shadow_pane_g7

0x0b7c,	// (0x0003e05d) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0004cd89) bg_frame_shadow_pane_g

0x02ce,	// (0x0003d7af) main_video_tele_dialer_pane

0x9172,	// (0x00046653) aid_size_cell_video_keypad_ParamLimits

0x9172,	// (0x00046653) aid_size_cell_video_keypad

0x918c,	// (0x0004666d) grid_video_dialer_keypad_pane_ParamLimits

0x918c,	// (0x0004666d) grid_video_dialer_keypad_pane

0x91d8,	// (0x000466b9) video_down_pane_cp_ParamLimits

0x91d8,	// (0x000466b9) video_down_pane_cp

0x920c,	// (0x000466ed) cell_video_dialer_keypad_pane_ParamLimits

0x920c,	// (0x000466ed) cell_video_dialer_keypad_pane

0xcd41,	// (0x0004a222) bg_button_pane_cp08_ParamLimits

0xcd41,	// (0x0004a222) bg_button_pane_cp08

0x922e,	// (0x0004670f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x922e,	// (0x0004670f) cell_video_dialer_keypad_pane_g1

0x88f6,	// (0x00045dd7) mup3_rocker2_pane_ParamLimits

0x88f6,	// (0x00045dd7) mup3_rocker2_pane

0x7f35,	// (0x00045416) mup3_rocker2_pane_g1

0x6dbe,	// (0x0004429f) main_dialer2_pane

0x02ce,	// (0x0003d7af) main_mp4_pane

0xed70,	// (0x0004c251) main_mp4_pane_g1_ParamLimits

0xed70,	// (0x0004c251) main_mp4_pane_g1

0xed70,	// (0x0004c251) main_mp4_pane_g2_ParamLimits

0xed70,	// (0x0004c251) main_mp4_pane_g2

0x9269,	// (0x0004674a) main_mp4_pane_g3_ParamLimits

0x9269,	// (0x0004674a) main_mp4_pane_g3

0xed7e,	// (0x0004c25f) main_mp4_pane_g4_ParamLimits

0xed7e,	// (0x0004c25f) main_mp4_pane_g4

0xeda6,	// (0x0004c287) main_mp4_pane_g5_ParamLimits

0xeda6,	// (0x0004c287) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0004cda9) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0004cda9) main_mp4_pane_g

0xedf6,	// (0x0004c2d7) main_mp4_pane_t1_ParamLimits

0xedf6,	// (0x0004c2d7) main_mp4_pane_t1

0xee52,	// (0x0004c333) main_mp4_pane_t2_ParamLimits

0xee52,	// (0x0004c333) main_mp4_pane_t2

0xcd4d,	// (0x0004a22e) main_mp4_pane_t3_ParamLimits

0xcd4d,	// (0x0004a22e) main_mp4_pane_t3

0xeea4,	// (0x0004c385) main_mp4_pane_t4_ParamLimits

0xeea4,	// (0x0004c385) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0004cdb6) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0004cdb6) main_mp4_pane_t

0xeee8,	// (0x0004c3c9) mp4_progress_pane_ParamLimits

0xeee8,	// (0x0004c3c9) mp4_progress_pane

0xef32,	// (0x0004c413) mp4_rocker_pane_ParamLimits

0xef32,	// (0x0004c413) mp4_rocker_pane

0xcd75,	// (0x0004a256) mp4_progress_pane_t1

0xcd8e,	// (0x0004a26f) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0004cdbf) mp4_progress_pane_t

0xcda7,	// (0x0004a288) mup_progress_pane_cp04

0x7f35,	// (0x00045416) mp4_rocker_pane_g1

0x92a5,	// (0x00046786) aid_cell_size_keypad2_ParamLimits

0x92a5,	// (0x00046786) aid_cell_size_keypad2

0x92bb,	// (0x0004679c) dialer2_ne_pane_ParamLimits

0x92bb,	// (0x0004679c) dialer2_ne_pane

0x92d5,	// (0x000467b6) grid_dialer2_keypad_pane_ParamLimits

0x92d5,	// (0x000467b6) grid_dialer2_keypad_pane

0x7c4c,	// (0x0004512d) bg_popup_call_pane_cp07_ParamLimits

0x7c4c,	// (0x0004512d) bg_popup_call_pane_cp07

0x92f3,	// (0x000467d4) dialer2_ne_pane_t1_ParamLimits

0x92f3,	// (0x000467d4) dialer2_ne_pane_t1

0x9332,	// (0x00046813) cell_dialer2_keypad_pane_ParamLimits

0x9332,	// (0x00046813) cell_dialer2_keypad_pane

0xcdc5,	// (0x0004a2a6) bg_button_pane_pane_cp04_ParamLimits

0xcdc5,	// (0x0004a2a6) bg_button_pane_pane_cp04

0x9356,	// (0x00046837) cell_dialer2_keypad_pane_g1_ParamLimits

0x9356,	// (0x00046837) cell_dialer2_keypad_pane_g1

0x405d,	// (0x0004153e) aid_placing_vt_set_content_ParamLimits

0x405d,	// (0x0004153e) aid_placing_vt_set_content

0x407f,	// (0x00041560) aid_placing_vt_set_title_ParamLimits

0x407f,	// (0x00041560) aid_placing_vt_set_title

0x02ce,	// (0x0003d7af) main_image3_pane

0x941c,	// (0x000468fd) area_side_right_pane_cp01_ParamLimits

0x941c,	// (0x000468fd) area_side_right_pane_cp01

0xed70,	// (0x0004c251) main_image3_pane_g1_ParamLimits

0xed70,	// (0x0004c251) main_image3_pane_g1

0x9433,	// (0x00046914) main_image3_pane_g2_ParamLimits

0x9433,	// (0x00046914) main_image3_pane_g2

0x945b,	// (0x0004693c) main_image3_pane_g3_ParamLimits

0x945b,	// (0x0004693c) main_image3_pane_g3

0x9485,	// (0x00046966) main_image3_pane_g4_ParamLimits

0x9485,	// (0x00046966) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0004cdce) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0004cdce) main_image3_pane_g

0x94af,	// (0x00046990) main_image3_pane_t1_ParamLimits

0x94af,	// (0x00046990) main_image3_pane_t1

0x9507,	// (0x000469e8) main_image3_pane_t2_ParamLimits

0x9507,	// (0x000469e8) main_image3_pane_t2

0x9559,	// (0x00046a3a) main_image3_pane_t3_ParamLimits

0x9559,	// (0x00046a3a) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0004cdd7) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0004cdd7) main_image3_pane_t

0x1a5a,	// (0x0003ef3b) grid_sctrl_middle_pane_cp01_ParamLimits

0x1a5a,	// (0x0003ef3b) grid_sctrl_middle_pane_cp01

0x95e1,	// (0x00046ac2) cell_sctrl_middle_pane_cp01_ParamLimits

0x95e1,	// (0x00046ac2) cell_sctrl_middle_pane_cp01

0x95fe,	// (0x00046adf) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x95fe,	// (0x00046adf) cell_sctrl_middle_pane_cp01_g1

0x02ce,	// (0x0003d7af) main_call4_pane

0x9614,	// (0x00046af5) aid_size_button_call4_ParamLimits

0x9614,	// (0x00046af5) aid_size_button_call4

0x9645,	// (0x00046b26) call4_windows_pane_ParamLimits

0x9645,	// (0x00046b26) call4_windows_pane

0x9665,	// (0x00046b46) grid_call4_button_pane_ParamLimits

0x9665,	// (0x00046b46) grid_call4_button_pane

0xcdd1,	// (0x0004a2b2) call4_windows_conf_pane

0xcde6,	// (0x0004a2c7) popup_call4_audio_first_window_ParamLimits

0xcde6,	// (0x0004a2c7) popup_call4_audio_first_window

0xce32,	// (0x0004a313) popup_call4_audio_second_window_ParamLimits

0xce32,	// (0x0004a313) popup_call4_audio_second_window

0xce46,	// (0x0004a327) popup_call4_audio_wait_window_ParamLimits

0xce46,	// (0x0004a327) popup_call4_audio_wait_window

0x9692,	// (0x00046b73) cell_call4_button_pane_ParamLimits

0x9692,	// (0x00046b73) cell_call4_button_pane

0x96bb,	// (0x00046b9c) bg_button_pane_cp09_ParamLimits

0x96bb,	// (0x00046b9c) bg_button_pane_cp09

0x96c7,	// (0x00046ba8) cell_call4_button_pane_g1_ParamLimits

0x96c7,	// (0x00046ba8) cell_call4_button_pane_g1

0x96ed,	// (0x00046bce) cell_call4_button_pane_t1_ParamLimits

0x96ed,	// (0x00046bce) cell_call4_button_pane_t1

0xce8e,	// (0x0004a36f) popup_call4_audio_conf_window_ParamLimits

0xce8e,	// (0x0004a36f) popup_call4_audio_conf_window

0x8956,	// (0x00045e37) mup3_progress_pane_t1_ParamLimits

0x896d,	// (0x00045e4e) mup3_progress_pane_t2_ParamLimits

0xc78d,	// (0x00049c6e) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0004ccb0) mup3_progress_pane_t_ParamLimits

0xc7a4,	// (0x00049c85) mup_progress_pane_cp03_ParamLimits

0x8f2c,	// (0x0004640d) mup3_control_keys_pane_g4_copy1

0xef16,	// (0x0004c3f7) mp4_rocker2_pane_ParamLimits

0xef16,	// (0x0004c3f7) mp4_rocker2_pane

0xcea2,	// (0x0004a383) mp4_rocker2_pane_g1

0xceaa,	// (0x0004a38b) mp4_rocker2_pane_g2

0xef84,	// (0x0004c465) mp4_rocker2_pane_g3

0xef8c,	// (0x0004c46d) mp4_rocker2_pane_g4

0xef94,	// (0x0004c475) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0004cde0) mp4_rocker2_pane_g

0x02ce,	// (0x0003d7af) main_camera4_pane

0x02ce,	// (0x0003d7af) main_video4_pane

0x91a8,	// (0x00046689) main_video_tele_dialer_pane_t1_ParamLimits

0x91a8,	// (0x00046689) main_video_tele_dialer_pane_t1

0x91c0,	// (0x000466a1) main_video_tele_dialer_pane_t2_ParamLimits

0x91c0,	// (0x000466a1) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0004cd9a) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0004cd9a) main_video_tele_dialer_pane_t

0x972f,	// (0x00046c10) cam4_autofocus_pane_ParamLimits

0x972f,	// (0x00046c10) cam4_autofocus_pane

0x9745,	// (0x00046c26) cam4_image_uncrop_pane_ParamLimits

0x9745,	// (0x00046c26) cam4_image_uncrop_pane

0x975f,	// (0x00046c40) cam4_indicators_pane_ParamLimits

0x975f,	// (0x00046c40) cam4_indicators_pane

0x978a,	// (0x00046c6b) main_camera4_pane_g1_ParamLimits

0x978a,	// (0x00046c6b) main_camera4_pane_g1

0x979d,	// (0x00046c7e) main_camera4_pane_g2_ParamLimits

0x979d,	// (0x00046c7e) main_camera4_pane_g2

0x97b0,	// (0x00046c91) main_camera4_pane_g3_ParamLimits

0x97b0,	// (0x00046c91) main_camera4_pane_g3

0x97c3,	// (0x00046ca4) main_camera4_pane_g4_ParamLimits

0x97c3,	// (0x00046ca4) main_camera4_pane_g4

0x97d6,	// (0x00046cb7) main_camera4_pane_g5_ParamLimits

0x97d6,	// (0x00046cb7) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0004cdeb) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0004cdeb) main_camera4_pane_g

0x97fa,	// (0x00046cdb) main_camera4_pane_t1_ParamLimits

0x97fa,	// (0x00046cdb) main_camera4_pane_t1

0x8209,	// (0x000456ea) bg_tb_trans_pane_cp06

0xefb4,	// (0x0004c495) cam4_indicators_pane_g1

0xefc5,	// (0x0004c4a6) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0004ce06) cam4_indicators_pane_g

0xefe3,	// (0x0004c4c4) cam4_indicators_pane_t1

0x9870,	// (0x00046d51) main_video4_pane_g1_ParamLimits

0x9870,	// (0x00046d51) main_video4_pane_g1

0x9883,	// (0x00046d64) main_video4_pane_g2_ParamLimits

0x9883,	// (0x00046d64) main_video4_pane_g2

0x9897,	// (0x00046d78) main_video4_pane_g3_ParamLimits

0x9897,	// (0x00046d78) main_video4_pane_g3

0x98ab,	// (0x00046d8c) main_video4_pane_g4_ParamLimits

0x98ab,	// (0x00046d8c) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0004ce0d) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0004ce0d) main_video4_pane_g

0x98d3,	// (0x00046db4) vid4_indicators_pane_ParamLimits

0x98d3,	// (0x00046db4) vid4_indicators_pane

0x9905,	// (0x00046de6) video4_image_uncrop_cif_pane_ParamLimits

0x9905,	// (0x00046de6) video4_image_uncrop_cif_pane

0x991f,	// (0x00046e00) video4_image_uncrop_nhd_pane_ParamLimits

0x991f,	// (0x00046e00) video4_image_uncrop_nhd_pane

0x9745,	// (0x00046c26) video4_image_uncrop_vga_pane_ParamLimits

0x9745,	// (0x00046c26) video4_image_uncrop_vga_pane

0xceb2,	// (0x0004a393) bg_tb_trans_pane_cp07

0x9933,	// (0x00046e14) vid4_indicators_pane_g1

0x9940,	// (0x00046e21) vid4_indicators_pane_g2

0x994d,	// (0x00046e2e) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0004ce18) vid4_indicators_pane_g

0x9972,	// (0x00046e53) vid4_indicators_pane_t1

0x9984,	// (0x00046e65) cam4_autofocus_pane_g1

0x998c,	// (0x00046e6d) cam4_autofocus_pane_g2

0x9994,	// (0x00046e75) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0004ce23) cam4_autofocus_pane_g

0x999c,	// (0x00046e7d) cam4_autofocus_pane_g3_copy1

0x91f0,	// (0x000466d1) video_down_pane_cp_t1

0x91fe,	// (0x000466df) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0004cd9f) video_down_pane_cp_t

0x1a5a,	// (0x0003ef3b) popup_vitu2_window_ParamLimits

0x1a5a,	// (0x0003ef3b) popup_vitu2_window

0x99a4,	// (0x00046e85) aid_size_cell2_itu2_ParamLimits

0x99a4,	// (0x00046e85) aid_size_cell2_itu2

0x99ca,	// (0x00046eab) aid_size_cell_itu2_ParamLimits

0x99ca,	// (0x00046eab) aid_size_cell_itu2

0x9a26,	// (0x00046f07) bg_popup_window_pane_cp09_ParamLimits

0x9a26,	// (0x00046f07) bg_popup_window_pane_cp09

0x9a34,	// (0x00046f15) field_vitu2_entry_pane_ParamLimits

0x9a34,	// (0x00046f15) field_vitu2_entry_pane

0x9a5a,	// (0x00046f3b) grid_vitu2_function_pane_ParamLimits

0x9a5a,	// (0x00046f3b) grid_vitu2_function_pane

0x9aab,	// (0x00046f8c) grid_vitu2_itu_pane_ParamLimits

0x9aab,	// (0x00046f8c) grid_vitu2_itu_pane

0x9b3c,	// (0x0004701d) cell_vitu2_itu_pane_ParamLimits

0x9b3c,	// (0x0004701d) cell_vitu2_itu_pane

0x9b60,	// (0x00047041) cell_vitu2_function_pane_ParamLimits

0x9b60,	// (0x00047041) cell_vitu2_function_pane

0xcec0,	// (0x0004a3a1) bg_popup_call_pane_cp08_ParamLimits

0xcec0,	// (0x0004a3a1) bg_popup_call_pane_cp08

0xced9,	// (0x0004a3ba) field_vitu2_entry_pane_g1

0xcee5,	// (0x0004a3c6) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0004ce2a) field_vitu2_entry_pane_g

0xceff,	// (0x0004a3e0) field_vitu2_entry_pane_t1_ParamLimits

0xceff,	// (0x0004a3e0) field_vitu2_entry_pane_t1

0xcf31,	// (0x0004a412) field_vitu2_entry_pane_t2_ParamLimits

0xcf31,	// (0x0004a412) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0004ce31) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0004ce31) field_vitu2_entry_pane_t

0x9b9f,	// (0x00047080) bg_button_pane_cp010_ParamLimits

0x9b9f,	// (0x00047080) bg_button_pane_cp010

0x9bad,	// (0x0004708e) cell_vitu2_itu_pane_g1

0x9bcb,	// (0x000470ac) cell_vitu2_itu_pane_t1_ParamLimits

0x9bcb,	// (0x000470ac) cell_vitu2_itu_pane_t1

0x2a7c,	// (0x0003ff5d) cell_vitu2_itu_pane_t2_ParamLimits

0x2a7c,	// (0x0003ff5d) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0004ce3b) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0004ce3b) cell_vitu2_itu_pane_t

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp011

0x9c31,	// (0x00047112) cell_vitu2_function_pane_g1

0x02ce,	// (0x0003d7af) main_myfav_hc_pane

0x95a9,	// (0x00046a8a) popup_image3_note_pane_ParamLimits

0x95a9,	// (0x00046a8a) popup_image3_note_pane

0x95c5,	// (0x00046aa6) popup_image3_tool_bar_pane_ParamLimits

0x95c5,	// (0x00046aa6) popup_image3_tool_bar_pane

0x2b00,	// (0x0003ffe1) cell_vitu2_itu_pane_t3_ParamLimits

0x2b00,	// (0x0003ffe1) cell_vitu2_itu_pane_t3

0x02ce,	// (0x0003d7af) bg_popup_trans_pane

0xcf56,	// (0x0004a437) grid_image3_tool_bar_pane

0xcf60,	// (0x0004a441) bg_popup_trans_pane_g1

0x0ec9,	// (0x0003e3aa) bg_popup_trans_pane_g2

0xcf68,	// (0x0004a449) bg_popup_trans_pane_g3

0xcf70,	// (0x0004a451) bg_popup_trans_pane_g4

0xcf78,	// (0x0004a459) bg_popup_trans_pane_g5

0xcf80,	// (0x0004a461) bg_popup_trans_pane_g6

0xcf88,	// (0x0004a469) bg_popup_trans_pane_g7

0xcf90,	// (0x0004a471) bg_popup_trans_pane_g8

0x0ea9,	// (0x0003e38a) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0004ce42) bg_popup_trans_pane_g

0xcf98,	// (0x0004a479) cell_image3_tool_bar_pane_ParamLimits

0xcf98,	// (0x0004a479) cell_image3_tool_bar_pane

0x7f35,	// (0x00045416) cell_image3_tool_bar_pane_g1

0x02ce,	// (0x0003d7af) bg_popup_trans_pane_cp1

0xcfac,	// (0x0004a48d) popup_image3_note_pane_t1

0xcfba,	// (0x0004a49b) popup_image3_note_pane_t2

0xcfc8,	// (0x0004a4a9) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0004ce55) popup_image3_note_pane_t

0xcfd6,	// (0x0004a4b7) popup_image3_note_pane_t3_copy1

0x9c45,	// (0x00047126) bg_myfav_hc_instruction_pane_ParamLimits

0x9c45,	// (0x00047126) bg_myfav_hc_instruction_pane

0x9c5b,	// (0x0004713c) cell_myfav_contact_pane_ParamLimits

0x9c5b,	// (0x0004713c) cell_myfav_contact_pane

0x9c77,	// (0x00047158) cell_myfav_contact_pane_cp1_ParamLimits

0x9c77,	// (0x00047158) cell_myfav_contact_pane_cp1

0x9c8f,	// (0x00047170) cell_myfav_contact_pane_cp2_ParamLimits

0x9c8f,	// (0x00047170) cell_myfav_contact_pane_cp2

0x9ca7,	// (0x00047188) cell_myfav_contact_pane_cp3_ParamLimits

0x9ca7,	// (0x00047188) cell_myfav_contact_pane_cp3

0x9cbe,	// (0x0004719f) cell_myfav_contact_pane_cp4_ParamLimits

0x9cbe,	// (0x0004719f) cell_myfav_contact_pane_cp4

0x9cd6,	// (0x000471b7) cell_myfav_contact_pane_cp5_ParamLimits

0x9cd6,	// (0x000471b7) cell_myfav_contact_pane_cp5

0x9cea,	// (0x000471cb) cell_myfav_contact_pane_cp6_ParamLimits

0x9cea,	// (0x000471cb) cell_myfav_contact_pane_cp6

0x9d00,	// (0x000471e1) cell_myfav_contact_pane_cp7_ParamLimits

0x9d00,	// (0x000471e1) cell_myfav_contact_pane_cp7

0xcfe4,	// (0x0004a4c5) listscroll_gen_pane_cp05

0x9d1a,	// (0x000471fb) main_myfav_hc_pane_g1_ParamLimits

0x9d1a,	// (0x000471fb) main_myfav_hc_pane_g1

0x9d34,	// (0x00047215) main_myfav_hc_pane_g2_ParamLimits

0x9d34,	// (0x00047215) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0004ce5c) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0004ce5c) main_myfav_hc_pane_g

0x9d66,	// (0x00047247) main_myfav_hc_pane_t1_ParamLimits

0x9d66,	// (0x00047247) main_myfav_hc_pane_t1

0xcfed,	// (0x0004a4ce) main_myfav_hc_pane_t2_ParamLimits

0xcfed,	// (0x0004a4ce) main_myfav_hc_pane_t2

0xcfff,	// (0x0004a4e0) main_myfav_hc_pane_t3_ParamLimits

0xcfff,	// (0x0004a4e0) main_myfav_hc_pane_t3

0x9d7d,	// (0x0004725e) main_myfav_hc_pane_t4_ParamLimits

0x9d7d,	// (0x0004725e) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0004ce63) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0004ce63) main_myfav_hc_pane_t

0x7f35,	// (0x00045416) bg_myfav_hc_instruction_pane_g1

0xd011,	// (0x0004a4f2) cell_myfav_contact_pane_g1_ParamLimits

0xd011,	// (0x0004a4f2) cell_myfav_contact_pane_g1

0xd011,	// (0x0004a4f2) cell_myfav_contact_pane_g2_ParamLimits

0xd011,	// (0x0004a4f2) cell_myfav_contact_pane_g2

0xd01d,	// (0x0004a4fe) cell_myfav_contact_pane_g3_ParamLimits

0xd01d,	// (0x0004a4fe) cell_myfav_contact_pane_g3

0xc777,	// (0x00049c58) cell_myfav_contact_pane_g4_ParamLimits

0xc777,	// (0x00049c58) cell_myfav_contact_pane_g4

0xd02a,	// (0x0004a50b) cell_myfav_contact_pane_g5_ParamLimits

0xd02a,	// (0x0004a50b) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0004ce6e) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0004ce6e) cell_myfav_contact_pane_g

0x9d4e,	// (0x0004722f) main_myfav_hc_pane_g3_ParamLimits

0x9d4e,	// (0x0004722f) main_myfav_hc_pane_g3

0x343e,	// (0x0004091f) popup_adpt_find_window

0x9da5,	// (0x00047286) afind_page_pane_ParamLimits

0x9da5,	// (0x00047286) afind_page_pane

0x9dba,	// (0x0004729b) aid_size_cell_afind_ParamLimits

0x9dba,	// (0x0004729b) aid_size_cell_afind

0x9dd8,	// (0x000472b9) bg_popup_sub_pane_cp09_ParamLimits

0x9dd8,	// (0x000472b9) bg_popup_sub_pane_cp09

0x9de5,	// (0x000472c6) find_pane_cp01_ParamLimits

0x9de5,	// (0x000472c6) find_pane_cp01

0xd036,	// (0x0004a517) grid_afind_control_pane_ParamLimits

0xd036,	// (0x0004a517) grid_afind_control_pane

0x9df2,	// (0x000472d3) grid_afind_pane_ParamLimits

0x9df2,	// (0x000472d3) grid_afind_pane

0x9e14,	// (0x000472f5) cell_afind_pane_ParamLimits

0x9e14,	// (0x000472f5) cell_afind_pane

0x7f35,	// (0x00045416) afind_page_pane_g1

0x9e75,	// (0x00047356) afind_page_pane_g2

0x9e7e,	// (0x0004735f) afind_page_pane_g3

0x0002,

0xf998,	// (0x0004ce79) afind_page_pane_g

0x9e87,	// (0x00047368) afind_page_pane_t1

0xd04a,	// (0x0004a52b) cell_afind_grid_control_pane_ParamLimits

0xd04a,	// (0x0004a52b) cell_afind_grid_control_pane

0xcdc5,	// (0x0004a2a6) bg_button_pane_cp69_ParamLimits

0xcdc5,	// (0x0004a2a6) bg_button_pane_cp69

0x9ea7,	// (0x00047388) cell_afind_pane_g1_ParamLimits

0x9ea7,	// (0x00047388) cell_afind_pane_g1

0x9eb4,	// (0x00047395) cell_afind_pane_t1_ParamLimits

0x9eb4,	// (0x00047395) cell_afind_pane_t1

0x0cbc,	// (0x0003e19d) bg_button_pane_cp72

0xd059,	// (0x0004a53a) cell_afind_grid_control_pane_g1

0x5985,	// (0x00042e66) aid_image_placing_area_ParamLimits

0x5985,	// (0x00042e66) aid_image_placing_area

0xca5f,	// (0x00049f40) field_vitu_entry_pane_g1_ParamLimits

0xca5f,	// (0x00049f40) field_vitu_entry_pane_g1

0xca6b,	// (0x00049f4c) field_vitu_entry_pane_g2_ParamLimits

0xca6b,	// (0x00049f4c) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0004cd2a) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0004cd2a) field_vitu_entry_pane_g

0x8ff9,	// (0x000464da) cell_vitu_itu_pane_g1_ParamLimits

0x903b,	// (0x0004651c) cell_vitu_itu_pane_t3_ParamLimits

0x903b,	// (0x0004651c) cell_vitu_itu_pane_t3

0xcd75,	// (0x0004a256) mp4_progress_pane_t1_ParamLimits

0xcd8e,	// (0x0004a26f) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0004cdbf) mp4_progress_pane_t_ParamLimits

0xcda7,	// (0x0004a288) mup_progress_pane_cp04_ParamLimits

0x9d91,	// (0x00047272) main_myfav_hc_pane_t5_ParamLimits

0x9d91,	// (0x00047272) main_myfav_hc_pane_t5

0x02ec,	// (0x0003d7cd) aid_zoom_text_primary

0x343e,	// (0x0004091f) popup_adpt_find_window_ParamLimits

0x1a5a,	// (0x0003ef3b) main_cam_set_pane

0x9776,	// (0x00046c57) cam4_zoom_pane_ParamLimits

0x9776,	// (0x00046c57) cam4_zoom_pane

0x9ec6,	// (0x000473a7) main_cam_set_pane_g1_ParamLimits

0x9ec6,	// (0x000473a7) main_cam_set_pane_g1

0x9ed4,	// (0x000473b5) main_cam_set_pane_g2_ParamLimits

0x9ed4,	// (0x000473b5) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0004ce80) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0004ce80) main_cam_set_pane_g

0x9ef5,	// (0x000473d6) main_cam_set_pane_t1_ParamLimits

0x9ef5,	// (0x000473d6) main_cam_set_pane_t1

0x9f10,	// (0x000473f1) main_cset_listscroll_pane_ParamLimits

0x9f10,	// (0x000473f1) main_cset_listscroll_pane

0x9f30,	// (0x00047411) main_cset_slider_pane_ParamLimits

0x9f30,	// (0x00047411) main_cset_slider_pane

0xd06a,	// (0x0004a54b) main_cset_list_pane_ParamLimits

0xd06a,	// (0x0004a54b) main_cset_list_pane

0xd07a,	// (0x0004a55b) scroll_pane_cp028

0x9f56,	// (0x00047437) aid_area_touch_slider

0x9f72,	// (0x00047453) cset_slider_pane

0x9f9c,	// (0x0004747d) main_cset_slider_pane_g1

0x9fb1,	// (0x00047492) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0004ce85) main_cset_slider_pane_g

0xd0b3,	// (0x0004a594) main_cset_slider_pane_t1

0xa06d,	// (0x0004754e) main_cset_slider_pane_t2

0xa087,	// (0x00047568) main_cset_slider_pane_t3

0xa0a1,	// (0x00047582) main_cset_slider_pane_t4

0xa0bb,	// (0x0004759c) main_cset_slider_pane_t5

0xa0d7,	// (0x000475b8) main_cset_slider_pane_t6

0xa0ec,	// (0x000475cd) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0004ceaa) main_cset_slider_pane_t

0xa1f0,	// (0x000476d1) cset_list_set_pane_ParamLimits

0xa1f0,	// (0x000476d1) cset_list_set_pane

0xa204,	// (0x000476e5) aid_position_infowindow_above

0xa20c,	// (0x000476ed) aid_position_infowindow_below

0x2b58,	// (0x00040039) cset_list_set_pane_g1_ParamLimits

0x2b58,	// (0x00040039) cset_list_set_pane_g1

0x2b64,	// (0x00040045) cset_list_set_pane_g3_ParamLimits

0x2b64,	// (0x00040045) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0004cec9) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0004cec9) cset_list_set_pane_g

0x2b73,	// (0x00040054) cset_list_set_pane_t1_ParamLimits

0x2b73,	// (0x00040054) cset_list_set_pane_t1

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp021_ParamLimits

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp021

0x1677,	// (0x0003eb58) cset_slider_pane_g1

0x1689,	// (0x0003eb6a) cset_slider_pane_g2

0x1680,	// (0x0003eb61) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0004cece) cset_slider_pane_g

0xf00d,	// (0x0004c4ee) aid_area_touch_cam4_zoom

0xf015,	// (0x0004c4f6) cam4_zoom_cont_pane

0xf01d,	// (0x0004c4fe) cam4_zoom_pane_g1

0xf025,	// (0x0004c506) cam4_zoom_pane_g2

0xa214,	// (0x000476f5) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0004ced5) cam4_zoom_pane_g

0xd153,	// (0x0004a634) cam4_zoom_cont_pane_g1

0xd15c,	// (0x0004a63d) cam4_zoom_cont_pane_g2

0xd165,	// (0x0004a646) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0004cedc) cam4_zoom_cont_pane_g

0x9632,	// (0x00046b13) call4_image_pane_ParamLimits

0x9632,	// (0x00046b13) call4_image_pane

0xcdd1,	// (0x0004a2b2) call4_windows_conf_pane_ParamLimits

0xce10,	// (0x0004a2f1) popup_call4_audio_in_window_ParamLimits

0xce10,	// (0x0004a2f1) popup_call4_audio_in_window

0x02ce,	// (0x0003d7af) bg_popup_call2_act_pane_cp02

0xce86,	// (0x0004a367) call4_list_conf_pane

0x7f35,	// (0x00045416) call4_image_pane_g1

0x7f35,	// (0x00045416) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0004cbf0) call4_image_pane_g

0xd16e,	// (0x0004a64f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd16e,	// (0x0004a64f) list_single_graphic_popup_conf4_pane

0x02ce,	// (0x0003d7af) list_highlight_pane_cp022

0xd181,	// (0x0004a662) list_single_graphic_popup_conf4_pane_g1

0x1368,	// (0x0003e849) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0004cee3) list_single_graphic_popup_conf4_pane_g

0xd189,	// (0x0004a66a) list_single_graphic_popup_conf4_pane_t1

0x4151,	// (0x00041632) popup_vtel_slider_window_ParamLimits

0x4151,	// (0x00041632) popup_vtel_slider_window

0xcdb3,	// (0x0004a294) dialer2_ne_pane_t2_ParamLimits

0xcdb3,	// (0x0004a294) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0004cdc4) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0004cdc4) dialer2_ne_pane_t

0x7c4c,	// (0x0004512d) bg_popup_sub_pane_cp010_ParamLimits

0x7c4c,	// (0x0004512d) bg_popup_sub_pane_cp010

0xa21c,	// (0x000476fd) popup_vtel_slider_window_g1_ParamLimits

0xa21c,	// (0x000476fd) popup_vtel_slider_window_g1

0xa22f,	// (0x00047710) popup_vtel_slider_window_g2_ParamLimits

0xa22f,	// (0x00047710) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0004cee8) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0004cee8) popup_vtel_slider_window_g

0xa285,	// (0x00047766) vtel_slider_pane_ParamLimits

0xa285,	// (0x00047766) vtel_slider_pane

0xa2a7,	// (0x00047788) vtel_slider_pane_g1_ParamLimits

0xa2a7,	// (0x00047788) vtel_slider_pane_g1

0xa2bb,	// (0x0004779c) vtel_slider_pane_g2_ParamLimits

0xa2bb,	// (0x0004779c) vtel_slider_pane_g2

0xa2d3,	// (0x000477b4) vtel_slider_pane_g3_ParamLimits

0xa2d3,	// (0x000477b4) vtel_slider_pane_g3

0xa2a7,	// (0x00047788) vtel_slider_pane_g4_ParamLimits

0xa2a7,	// (0x00047788) vtel_slider_pane_g4

0xa2e9,	// (0x000477ca) vtel_slider_pane_g5_ParamLimits

0xa2e9,	// (0x000477ca) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0004cef1) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0004cef1) vtel_slider_pane_g

0x02ce,	// (0x0003d7af) main_gallery2_pane

0x99f6,	// (0x00046ed7) aid_size_row_itut2_dropdow_list_ParamLimits

0x99f6,	// (0x00046ed7) aid_size_row_itut2_dropdow_list

0x9a82,	// (0x00046f63) grid_vitu2_function_top_pane_ParamLimits

0x9a82,	// (0x00046f63) grid_vitu2_function_top_pane

0x9ae7,	// (0x00046fc8) popup_vitu2_dropdown_list_window_ParamLimits

0x9ae7,	// (0x00046fc8) popup_vitu2_dropdown_list_window

0x9b10,	// (0x00046ff1) popup_vitu2_match_list_window

0xa2ff,	// (0x000477e0) cell_vitu2_function_top_pane_ParamLimits

0xa2ff,	// (0x000477e0) cell_vitu2_function_top_pane

0xa31d,	// (0x000477fe) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa31d,	// (0x000477fe) cell_vitu2_function_top_pane_cp01

0xa33b,	// (0x0004781c) cell_vitu2_function_top_wide_pane_ParamLimits

0xa33b,	// (0x0004781c) cell_vitu2_function_top_wide_pane

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp012

0xa359,	// (0x0004783a) cell_vitu2_function_top_pane_g1

0xf02d,	// (0x0004c50e) bg_button_pane_cp013_ParamLimits

0xf02d,	// (0x0004c50e) bg_button_pane_cp013

0xa36d,	// (0x0004784e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa36d,	// (0x0004784e) cell_vitu2_function_top_wide_pane_g1

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp20

0xa385,	// (0x00047866) list_vitu2_match_list_pane

0xcf60,	// (0x0004a441) bg_popup_sub_pane_cp20_g1

0xcf68,	// (0x0004a449) bg_popup_sub_pane_cp20_g2

0x0ec9,	// (0x0003e3aa) bg_popup_sub_pane_cp20_g3

0xcf70,	// (0x0004a451) bg_popup_sub_pane_cp20_g4

0x0ea9,	// (0x0003e38a) bg_popup_sub_pane_cp20_g5

0xd1a5,	// (0x0004a686) bg_popup_sub_pane_cp20_g6

0xcf80,	// (0x0004a461) bg_popup_sub_pane_cp20_g7

0xcf88,	// (0x0004a469) bg_popup_sub_pane_cp20_g8

0xcf90,	// (0x0004a471) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0004cefc) bg_popup_sub_pane_cp20_g

0xf049,	// (0x0004c52a) list_vitu2_match_list_item_pane_ParamLimits

0xf049,	// (0x0004c52a) list_vitu2_match_list_item_pane

0xf05b,	// (0x0004c53c) list_vitu2_match_list_item_pane_t1

0x02ce,	// (0x0003d7af) bg_popup_sub_pane_cp21

0x126d,	// (0x0003e74e) grid_vitu2_dropdown_list_pane

0xa3a3,	// (0x00047884) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa3a3,	// (0x00047884) cell_vitu2_dropdown_list_char_pane

0xa3c4,	// (0x000478a5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa3c4,	// (0x000478a5) cell_vitu2_dropdown_list_ctrl_pane

0xd1c5,	// (0x0004a6a6) cell_vitu2_dropdown_list_char_pane_g1

0xd1ce,	// (0x0004a6af) cell_vitu2_dropdown_list_char_pane_g2

0xd1d7,	// (0x0004a6b8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0004cf19) cell_vitu2_dropdown_list_char_pane_g

0xa3f0,	// (0x000478d1) cell_vitu2_dropdown_list_char_pane_t1

0xa3fe,	// (0x000478df) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa3fe,	// (0x000478df) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa40e,	// (0x000478ef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa40e,	// (0x000478ef) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa41f,	// (0x00047900) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa41f,	// (0x00047900) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa42f,	// (0x00047910) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa42f,	// (0x00047910) cell_vitu2_dropdown_list_ctrl_pane_g4

0x8209,	// (0x000456ea) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x8209,	// (0x000456ea) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0004cf20) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0004cf20) cell_vitu2_dropdown_list_ctrl_pane_g

0xa44b,	// (0x0004792c) aid_size_cell_gallery2_ParamLimits

0xa44b,	// (0x0004792c) aid_size_cell_gallery2

0xa461,	// (0x00047942) grid_gallery2_pane_ParamLimits

0xa461,	// (0x00047942) grid_gallery2_pane

0xa475,	// (0x00047956) scroll_pane_cp029_ParamLimits

0xa475,	// (0x00047956) scroll_pane_cp029

0xa481,	// (0x00047962) cell_gallery2_pane_ParamLimits

0xa481,	// (0x00047962) cell_gallery2_pane

0xd1e0,	// (0x0004a6c1) cell_gallery2_pane_g2

0xa4b7,	// (0x00047998) cell_gallery2_pane_g3

0xd1ea,	// (0x0004a6cb) cell_gallery2_pane_g4

0xd1f2,	// (0x0004a6d3) cell_gallery2_pane_g5

0x1541,	// (0x0003ea22) grid_highlight_pane_cp10

0x9b10,	// (0x00046ff1) popup_vitu2_match_list_window_ParamLimits

0x9b25,	// (0x00047006) popup_vitu2_query_window_ParamLimits

0x9b25,	// (0x00047006) popup_vitu2_query_window

0x02ce,	// (0x0003d7af) bg_vitu2_candi_button_pane

0xd1c5,	// (0x0004a6a6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1ce,	// (0x0004a6af) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1d7,	// (0x0004a6b8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2bb9,	// (0x0004009a) bg_button_pane_cp015

0xa4bf,	// (0x000479a0) bg_button_pane_cp016

0xa4c9,	// (0x000479aa) bg_button_pane_cp017

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp22

0xd1fa,	// (0x0004a6db) popup_vitu2_query_window_g1

0x2bd0,	// (0x000400b1) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0004cf2b) popup_vitu2_query_window_g

0x2bde,	// (0x000400bf) popup_vitu2_query_window_t1_ParamLimits

0x2bde,	// (0x000400bf) popup_vitu2_query_window_t1

0x2c06,	// (0x000400e7) popup_vitu2_query_window_t2_ParamLimits

0x2c06,	// (0x000400e7) popup_vitu2_query_window_t2

0x2c18,	// (0x000400f9) popup_vitu2_query_window_t3_ParamLimits

0x2c18,	// (0x000400f9) popup_vitu2_query_window_t3

0xa4e4,	// (0x000479c5) popup_vitu2_query_window_t4_ParamLimits

0xa4e4,	// (0x000479c5) popup_vitu2_query_window_t4

0xa4f8,	// (0x000479d9) popup_vitu2_query_window_t5_ParamLimits

0xa4f8,	// (0x000479d9) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0004cf30) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0004cf30) popup_vitu2_query_window_t

0xd062,	// (0x0004a543) main_cset_text_pane

0x9f56,	// (0x00047437) aid_area_touch_slider_ParamLimits

0x9f72,	// (0x00047453) cset_slider_pane_ParamLimits

0x9f9c,	// (0x0004747d) main_cset_slider_pane_g1_ParamLimits

0x9fb1,	// (0x00047492) main_cset_slider_pane_g2_ParamLimits

0xd083,	// (0x0004a564) main_cset_slider_pane_g3_ParamLimits

0xd083,	// (0x0004a564) main_cset_slider_pane_g3

0x9fc6,	// (0x000474a7) main_cset_slider_pane_g4_ParamLimits

0x9fc6,	// (0x000474a7) main_cset_slider_pane_g4

0x9fd5,	// (0x000474b6) main_cset_slider_pane_g5_ParamLimits

0x9fd5,	// (0x000474b6) main_cset_slider_pane_g5

0x9fe1,	// (0x000474c2) main_cset_slider_pane_g6_ParamLimits

0x9fe1,	// (0x000474c2) main_cset_slider_pane_g6

0xf9a4,	// (0x0004ce85) main_cset_slider_pane_g_ParamLimits

0xd0b3,	// (0x0004a594) main_cset_slider_pane_t1_ParamLimits

0xa06d,	// (0x0004754e) main_cset_slider_pane_t2_ParamLimits

0xa087,	// (0x00047568) main_cset_slider_pane_t3_ParamLimits

0xa0a1,	// (0x00047582) main_cset_slider_pane_t4_ParamLimits

0xa0bb,	// (0x0004759c) main_cset_slider_pane_t5_ParamLimits

0xa0d7,	// (0x000475b8) main_cset_slider_pane_t6_ParamLimits

0xa0ec,	// (0x000475cd) main_cset_slider_pane_t7_ParamLimits

0xa116,	// (0x000475f7) main_cset_slider_pane_t8_ParamLimits

0xa116,	// (0x000475f7) main_cset_slider_pane_t8

0xa13e,	// (0x0004761f) main_cset_slider_pane_t9_ParamLimits

0xa13e,	// (0x0004761f) main_cset_slider_pane_t9

0xa166,	// (0x00047647) main_cset_slider_pane_t10_ParamLimits

0xa166,	// (0x00047647) main_cset_slider_pane_t10

0xa18e,	// (0x0004766f) main_cset_slider_pane_t11_ParamLimits

0xa18e,	// (0x0004766f) main_cset_slider_pane_t11

0xa1b6,	// (0x00047697) main_cset_slider_pane_t12_ParamLimits

0xa1b6,	// (0x00047697) main_cset_slider_pane_t12

0xa1d3,	// (0x000476b4) main_cset_slider_pane_t13_ParamLimits

0xa1d3,	// (0x000476b4) main_cset_slider_pane_t13

0xf9c9,	// (0x0004ceaa) main_cset_slider_pane_t_ParamLimits

0x02ce,	// (0x0003d7af) bg_popup_sub_pane_cp011

0xd206,	// (0x0004a6e7) main_cset_text_pane_g1

0xd20e,	// (0x0004a6ef) main_cset_text_pane_t1

0xd21c,	// (0x0004a6fd) main_cset_text_pane_t2

0xd22a,	// (0x0004a70b) main_cset_text_pane_t3

0xd238,	// (0x0004a719) main_cset_text_pane_t4

0xd246,	// (0x0004a727) main_cset_text_pane_t5

0xd254,	// (0x0004a735) main_cset_text_pane_t6

0xd262,	// (0x0004a743) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0004cf3b) main_cset_text_pane_t

0x02ce,	// (0x0003d7af) main_cam4_burst_pane

0x02ce,	// (0x0003d7af) main_cam5_pane

0x9e95,	// (0x00047376) bg_button_pane_cp019

0x9e9e,	// (0x0004737f) bg_button_pane_cp020

0xd08f,	// (0x0004a570) main_cset_slider_pane_g7_ParamLimits

0xd08f,	// (0x0004a570) main_cset_slider_pane_g7

0xd09b,	// (0x0004a57c) main_cset_slider_pane_g8_ParamLimits

0xd09b,	// (0x0004a57c) main_cset_slider_pane_g8

0x9ff5,	// (0x000474d6) main_cset_slider_pane_g9_ParamLimits

0x9ff5,	// (0x000474d6) main_cset_slider_pane_g9

0xa001,	// (0x000474e2) main_cset_slider_pane_g10_ParamLimits

0xa001,	// (0x000474e2) main_cset_slider_pane_g10

0xa00d,	// (0x000474ee) main_cset_slider_pane_g11_ParamLimits

0xa00d,	// (0x000474ee) main_cset_slider_pane_g11

0xa019,	// (0x000474fa) main_cset_slider_pane_g12_ParamLimits

0xa019,	// (0x000474fa) main_cset_slider_pane_g12

0xa025,	// (0x00047506) main_cset_slider_pane_g13_ParamLimits

0xa025,	// (0x00047506) main_cset_slider_pane_g13

0xa031,	// (0x00047512) main_cset_slider_pane_g14_ParamLimits

0xa031,	// (0x00047512) main_cset_slider_pane_g14

0xa03d,	// (0x0004751e) main_cset_slider_pane_g15_ParamLimits

0xa03d,	// (0x0004751e) main_cset_slider_pane_g15

0xd0e1,	// (0x0004a5c2) main_cset_slider_pane_t14_ParamLimits

0xd0e1,	// (0x0004a5c2) main_cset_slider_pane_t14

0xd11a,	// (0x0004a5fb) main_cset_slider_pane_t15_ParamLimits

0xd11a,	// (0x0004a5fb) main_cset_slider_pane_t15

0xa50c,	// (0x000479ed) aid_cam4_burst_size_cell_ParamLimits

0xa50c,	// (0x000479ed) aid_cam4_burst_size_cell

0xa52c,	// (0x00047a0d) grid_cam4_burst_pane_ParamLimits

0xa52c,	// (0x00047a0d) grid_cam4_burst_pane

0xa564,	// (0x00047a45) linegrid_cam4_burst_pane_ParamLimits

0xa564,	// (0x00047a45) linegrid_cam4_burst_pane

0x01ea,	// (0x0003d6cb) scroll_pane_cp30_ParamLimits

0x01ea,	// (0x0003d6cb) scroll_pane_cp30

0xa58a,	// (0x00047a6b) cell_cam4_burst_pane_ParamLimits

0xa58a,	// (0x00047a6b) cell_cam4_burst_pane

0xd270,	// (0x0004a751) linegrid_cam4_burst_pane_g1_ParamLimits

0xd270,	// (0x0004a751) linegrid_cam4_burst_pane_g1

0xa5d7,	// (0x00047ab8) linegrid_cam4_burst_pane_g2_ParamLimits

0xa5d7,	// (0x00047ab8) linegrid_cam4_burst_pane_g2

0xd27d,	// (0x0004a75e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd27d,	// (0x0004a75e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0004cf4a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0004cf4a) linegrid_cam4_burst_pane_g

0xa5e8,	// (0x00047ac9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa5e8,	// (0x00047ac9) linegrid_cam4_burst_pane_g3_copy1

0xd28a,	// (0x0004a76b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd28a,	// (0x0004a76b) linegrid_cam4_burst_pane_g4

0xa602,	// (0x00047ae3) linegrid_cam4_burst_pane_g5_ParamLimits

0xa602,	// (0x00047ae3) linegrid_cam4_burst_pane_g5

0xa613,	// (0x00047af4) linegrid_cam4_burst_pane_g6_ParamLimits

0xa613,	// (0x00047af4) linegrid_cam4_burst_pane_g6

0xd297,	// (0x0004a778) linegrid_cam4_burst_pane_g7_ParamLimits

0xd297,	// (0x0004a778) linegrid_cam4_burst_pane_g7

0xa62a,	// (0x00047b0b) cell_cam4_burst_pane_g1

0xd2b0,	// (0x0004a791) main_cam5_pane_t1_ParamLimits

0xd2b0,	// (0x0004a791) main_cam5_pane_t1

0xd2c2,	// (0x0004a7a3) main_cam5_pane_t2_ParamLimits

0xd2c2,	// (0x0004a7a3) main_cam5_pane_t2

0xd2d4,	// (0x0004a7b5) main_cam5_pane_t3_ParamLimits

0xd2d4,	// (0x0004a7b5) main_cam5_pane_t3

0xd2e6,	// (0x0004a7c7) main_cam5_pane_t4_ParamLimits

0xd2e6,	// (0x0004a7c7) main_cam5_pane_t4

0xd2fc,	// (0x0004a7dd) main_cam5_pane_t5_ParamLimits

0xd2fc,	// (0x0004a7dd) main_cam5_pane_t5

0xd30e,	// (0x0004a7ef) main_cam5_pane_t6_ParamLimits

0xd30e,	// (0x0004a7ef) main_cam5_pane_t6

0xd322,	// (0x0004a803) main_cam5_pane_t7_ParamLimits

0xd322,	// (0x0004a803) main_cam5_pane_t7

0xd334,	// (0x0004a815) main_cam5_pane_t8_ParamLimits

0xd334,	// (0x0004a815) main_cam5_pane_t8

0xd350,	// (0x0004a831) main_cam5_pane_t9_ParamLimits

0xd350,	// (0x0004a831) main_cam5_pane_t9

0xd362,	// (0x0004a843) main_cam5_pane_t10_ParamLimits

0xd362,	// (0x0004a843) main_cam5_pane_t10

0xd374,	// (0x0004a855) main_cam5_pane_t11_ParamLimits

0xd374,	// (0x0004a855) main_cam5_pane_t11

0xd386,	// (0x0004a867) main_cam5_pane_t12_ParamLimits

0xd386,	// (0x0004a867) main_cam5_pane_t12

0xd39b,	// (0x0004a87c) main_cam5_pane_t13_ParamLimits

0xd39b,	// (0x0004a87c) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0004cf56) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0004cf56) main_cam5_pane_t

0x34c1,	// (0x000409a2) popup_scut_keymap_window_ParamLimits

0x34c1,	// (0x000409a2) popup_scut_keymap_window

0xa63d,	// (0x00047b1e) aid_size_cell_brow_shortcut

0x1541,	// (0x0003ea22) bg_popup_window_pane_cp010

0xa649,	// (0x00047b2a) grid_scut_pane

0xa655,	// (0x00047b36) cell_scut_pane_ParamLimits

0xa655,	// (0x00047b36) cell_scut_pane

0xa66c,	// (0x00047b4d) cell_scut_pane_g1

0xd3b8,	// (0x0004a899) cell_scut_pane_t1

0xd3c7,	// (0x0004a8a8) cell_scut_pane_t2

0xa675,	// (0x00047b56) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0004cf71) cell_scut_pane_t

0x8535,	// (0x00045a16) main_mup3_pane_g8_ParamLimits

0x8535,	// (0x00045a16) main_mup3_pane_g8

0x9a0e,	// (0x00046eef) area_vitu2_query_pane_ParamLimits

0x9a0e,	// (0x00046eef) area_vitu2_query_pane

0x2bc3,	// (0x000400a4) input_focus_pane_cp08

0xd3d6,	// (0x0004a8b7) area_vitu2_query_pane_g1

0x2c40,	// (0x00040121) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0004cf78) area_vitu2_query_pane_g

0xa683,	// (0x00047b64) area_vitu2_query_pane_t1_ParamLimits

0xa683,	// (0x00047b64) area_vitu2_query_pane_t1

0xa697,	// (0x00047b78) area_vitu2_query_pane_t2_ParamLimits

0xa697,	// (0x00047b78) area_vitu2_query_pane_t2

0x2c51,	// (0x00040132) area_vitu2_query_pane_t3_ParamLimits

0x2c51,	// (0x00040132) area_vitu2_query_pane_t3

0xd3e2,	// (0x0004a8c3) area_vitu2_query_pane_t4_ParamLimits

0xd3e2,	// (0x0004a8c3) area_vitu2_query_pane_t4

0xd40a,	// (0x0004a8eb) area_vitu2_query_pane_t5_ParamLimits

0xd40a,	// (0x0004a8eb) area_vitu2_query_pane_t5

0xd432,	// (0x0004a913) area_vitu2_query_pane_t6_ParamLimits

0xd432,	// (0x0004a913) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0004cf7d) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0004cf7d) area_vitu2_query_pane_t

0xa6ab,	// (0x00047b8c) bg_button_pane_cp018

0xa6b9,	// (0x00047b9a) bg_button_pane_cp021

0x2c79,	// (0x0004015a) bg_button_pane_cp022

0x2c8a,	// (0x0004016b) input_focus_pane_cp09

0x4fce,	// (0x000424af) aid_size_touch_mv_arrow_left

0x4ff7,	// (0x000424d8) aid_size_touch_mv_arrow_right

0xa055,	// (0x00047536) main_cset_slider_pane_g16_ParamLimits

0xa055,	// (0x00047536) main_cset_slider_pane_g16

0xa061,	// (0x00047542) main_cset_slider_pane_g17_ParamLimits

0xa061,	// (0x00047542) main_cset_slider_pane_g17

0xa62a,	// (0x00047b0b) cell_cam4_burst_pane_g1_ParamLimits

0x02ce,	// (0x0003d7af) compa_mode_pane

0xa23f,	// (0x00047720) popup_vtel_slider_window_g3_ParamLimits

0xa23f,	// (0x00047720) popup_vtel_slider_window_g3

0xa256,	// (0x00047737) popup_vtel_slider_window_g4_ParamLimits

0xa256,	// (0x00047737) popup_vtel_slider_window_g4

0xa26d,	// (0x0004774e) popup_vtel_slider_window_t1_ParamLimits

0xa26d,	// (0x0004774e) popup_vtel_slider_window_t1

0x02ce,	// (0x0003d7af) main_cl_pane

0x6eef,	// (0x000443d0) popup_imed_adjust2_window_ParamLimits

0x6db0,	// (0x00044291) bg_tb_trans_pane_cp05_ParamLimits

0xc994,	// (0x00049e75) popup_imed_adjust2_window_g1_ParamLimits

0xc9a3,	// (0x00049e84) popup_imed_adjust2_window_g2_ParamLimits

0xc9a3,	// (0x00049e84) popup_imed_adjust2_window_g2

0xc9af,	// (0x00049e90) popup_imed_adjust2_window_g3_ParamLimits

0xc9af,	// (0x00049e90) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0004ccee) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0004ccee) popup_imed_adjust2_window_g

0xc9bb,	// (0x00049e9c) popup_imed_adjust2_window_t1_ParamLimits

0xc9d3,	// (0x00049eb4) slider_imed_adjust_pane_ParamLimits

0xc9e7,	// (0x00049ec8) slider_imed_adjust_pane_g1_ParamLimits

0xc9f7,	// (0x00049ed8) slider_imed_adjust_pane_g2_ParamLimits

0xca07,	// (0x00049ee8) slider_imed_adjust_pane_g3_ParamLimits

0xca18,	// (0x00049ef9) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0004ccf5) slider_imed_adjust_pane_g_ParamLimits

0x9717,	// (0x00046bf8) aid_touch_area_cam4_ParamLimits

0x9717,	// (0x00046bf8) aid_touch_area_cam4

0xef9c,	// (0x0004c47d) battery_pane_cp01

0x97e7,	// (0x00046cc8) main_camera4_pane_g6_ParamLimits

0x97e7,	// (0x00046cc8) main_camera4_pane_g6

0x9811,	// (0x00046cf2) main_camera4_pane_t2_ParamLimits

0x9811,	// (0x00046cf2) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0004cdf8) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0004cdf8) main_camera4_pane_t

0x9858,	// (0x00046d39) aid_touch_area_vid4_ParamLimits

0x9858,	// (0x00046d39) aid_touch_area_vid4

0x98bf,	// (0x00046da0) main_video4_pane_g5_ParamLimits

0x98bf,	// (0x00046da0) main_video4_pane_g5

0x98ea,	// (0x00046dcb) vid4_progress_pane_ParamLimits

0x98ea,	// (0x00046dcb) vid4_progress_pane

0xd0a7,	// (0x0004a588) main_cset_slider_pane_g18_ParamLimits

0xd0a7,	// (0x0004a588) main_cset_slider_pane_g18

0xd2a4,	// (0x0004a785) cell_cam4_burst_pane_g2_ParamLimits

0xd2a4,	// (0x0004a785) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0004cf51) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0004cf51) cell_cam4_burst_pane_g

0x0ab1,	// (0x0003df92) bg_cl_pane_ParamLimits

0x0ab1,	// (0x0003df92) bg_cl_pane

0xa6c5,	// (0x00047ba6) cl_header_pane_ParamLimits

0xa6c5,	// (0x00047ba6) cl_header_pane

0xa6d9,	// (0x00047bba) cl_listscroll_pane_ParamLimits

0xa6d9,	// (0x00047bba) cl_listscroll_pane

0xd47e,	// (0x0004a95f) bg_cl_pane_g1

0xd486,	// (0x0004a967) bg_cl_pane_g2

0xd48e,	// (0x0004a96f) bg_cl_pane_g3

0xd496,	// (0x0004a977) bg_cl_pane_g4

0xd49e,	// (0x0004a97f) bg_cl_pane_g5

0xd4a6,	// (0x0004a987) bg_cl_pane_g6

0xd4ae,	// (0x0004a98f) bg_cl_pane_g7

0xd4b6,	// (0x0004a997) bg_cl_pane_g8

0xd4be,	// (0x0004a99f) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0004cf8c) bg_cl_pane_g

0xa6e9,	// (0x00047bca) aid_height_cl_leading_ParamLimits

0xa6e9,	// (0x00047bca) aid_height_cl_leading

0xa6f5,	// (0x00047bd6) aid_height_cl_text_ParamLimits

0xa6f5,	// (0x00047bd6) aid_height_cl_text

0x1a5a,	// (0x0003ef3b) bg_cl_header_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_cl_header_pane

0xa714,	// (0x00047bf5) cl_header_pane_g1_ParamLimits

0xa714,	// (0x00047bf5) cl_header_pane_g1

0xa72a,	// (0x00047c0b) cl_header_pane_t1_ParamLimits

0xa72a,	// (0x00047c0b) cl_header_pane_t1

0xd4c6,	// (0x0004a9a7) cl_list_pane

0xd07a,	// (0x0004a55b) hc_scroll_pane_cp01

0x0ea9,	// (0x0003e38a) bg_cl_header_pane_g1

0xcf60,	// (0x0004a441) bg_cl_header_pane_g2

0x0ec9,	// (0x0003e3aa) bg_cl_header_pane_g3

0xcf70,	// (0x0004a451) bg_cl_header_pane_g4

0xcf68,	// (0x0004a449) bg_cl_header_pane_g5

0xd1a5,	// (0x0004a686) bg_cl_header_pane_g6

0xcf88,	// (0x0004a469) bg_cl_header_pane_g7

0xcf90,	// (0x0004a471) bg_cl_header_pane_g8

0xcf80,	// (0x0004a461) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0004cf9f) bg_cl_header_pane_g

0xa743,	// (0x00047c24) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa743,	// (0x00047c24) hc_cl_list_double_graphic_heading_pane

0xa757,	// (0x00047c38) hc_cl_list_single_graphic_pane_ParamLimits

0xa757,	// (0x00047c38) hc_cl_list_single_graphic_pane

0xa771,	// (0x00047c52) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa771,	// (0x00047c52) hc_cl_list_single_graphic_pane_g1

0xa77d,	// (0x00047c5e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa77d,	// (0x00047c5e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0004cfb2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0004cfb2) hc_cl_list_single_graphic_pane_g

0xa791,	// (0x00047c72) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa791,	// (0x00047c72) hc_cl_list_single_graphic_pane_t1

0xa771,	// (0x00047c52) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa771,	// (0x00047c52) hc_cl_list_double_graphic_heading_pane_g1

0xa7a6,	// (0x00047c87) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa7a6,	// (0x00047c87) hc_cl_list_double_graphic_heading_pane_g2

0xa7ba,	// (0x00047c9b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa7ba,	// (0x00047c9b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0004cfb7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0004cfb7) hc_cl_list_double_graphic_heading_pane_g

0xa7ce,	// (0x00047caf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa7ce,	// (0x00047caf) hc_cl_list_double_graphic_heading_pane_t1

0xa7e3,	// (0x00047cc4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa7e3,	// (0x00047cc4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0004cfbe) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0004cfbe) hc_cl_list_double_graphic_heading_pane_t

0xf071,	// (0x0004c552) vid4_progress_pane_g1

0xf081,	// (0x0004c562) vid4_progress_pane_g2

0xf091,	// (0x0004c572) vid4_progress_pane_g3

0xefc5,	// (0x0004c4a6) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0004cfc3) vid4_progress_pane_g

0xf09d,	// (0x0004c57e) vid4_progress_pane_t1

0xf0b2,	// (0x0004c593) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0004cfce) vid4_progress_pane_t

0xf0dd,	// (0x0004c5be) wait_bar_pane_cp07

0x7c5a,	// (0x0004513b) blid_firmament_pane_ParamLimits

0x7c9d,	// (0x0004517e) popup_blid_sat_info2_window_g1

0x7cc1,	// (0x000451a2) popup_blid_sat_info2_window_t3

0x7ccf,	// (0x000451b0) popup_blid_sat_info2_window_t4

0x7cdd,	// (0x000451be) popup_blid_sat_info2_window_t5

0x7ceb,	// (0x000451cc) popup_blid_sat_info2_window_t6

0x7cfb,	// (0x000451dc) popup_blid_sat_info2_window_t7

0x7d09,	// (0x000451ea) popup_blid_sat_info2_window_t8

0x7d17,	// (0x000451f8) popup_blid_sat_info2_window_t9

0x7d25,	// (0x00045206) popup_blid_sat_info2_window_t10

0x7eb5,	// (0x00045396) aid_firma_cardinal_ParamLimits

0x7ec9,	// (0x000453aa) blid_firmament_pane_t1_ParamLimits

0x7ee0,	// (0x000453c1) blid_firmament_pane_t2_ParamLimits

0x7ef7,	// (0x000453d8) blid_firmament_pane_t3_ParamLimits

0x7f0e,	// (0x000453ef) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0004cbe7) blid_firmament_pane_t_ParamLimits

0x7f25,	// (0x00045406) blid_sat_info_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) main_cam_set_pane_ParamLimits

0x8da3,	// (0x00046284) aid_size_cell_colour_35_ParamLimits

0x8dc3,	// (0x000462a4) aid_size_cell_colour_112_ParamLimits

0x8de3,	// (0x000462c4) aid_size_cell_effect_ParamLimits

0x6db0,	// (0x00044291) bg_tb_trans_pane_cp02_ParamLimits

0x1071,	// (0x0003e552) heading_imed_pane_ParamLimits

0x8e03,	// (0x000462e4) listscroll_imed_pane_ParamLimits

0x60c0,	// (0x000435a1) popup_call2_audio_first_window_g5_ParamLimits

0x60c0,	// (0x000435a1) popup_call2_audio_first_window_g5

0x93be,	// (0x0004689f) aid_size_touch_image3_arrow_left_ParamLimits

0x93be,	// (0x0004689f) aid_size_touch_image3_arrow_left

0x93ea,	// (0x000468cb) aid_size_touch_image3_arrow_right_ParamLimits

0x93ea,	// (0x000468cb) aid_size_touch_image3_arrow_right

0xf0c8,	// (0x0004c5a9) vid4_progress_pane_t3

0x9126,	// (0x00046607) main_hwr_training_symbol_option_pane_ParamLimits

0x9126,	// (0x00046607) main_hwr_training_symbol_option_pane

0xcc81,	// (0x0004a162) popup_hwr_training_preview_window_ParamLimits

0xcc81,	// (0x0004a162) popup_hwr_training_preview_window

0x9146,	// (0x00046627) hwr_training_navi_pane_g5_ParamLimits

0x9146,	// (0x00046627) hwr_training_navi_pane_g5

0xcf4e,	// (0x0004a42f) popup_char_count_window

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp20_ParamLimits

0xa385,	// (0x00047866) list_vitu2_match_list_pane_ParamLimits

0xa394,	// (0x00047875) vitu2_page_scroll_pane_ParamLimits

0xa394,	// (0x00047875) vitu2_page_scroll_pane

0xd529,	// (0x0004aa0a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd529,	// (0x0004aa0a) list_single_hwr_training_symbol_option_pane

0xd53c,	// (0x0004aa1d) list_single_hwr_training_symbol_option_pane_g1

0xd544,	// (0x0004aa25) list_single_hwr_training_symbol_option_pane_t1

0xd552,	// (0x0004aa33) bg_button_pane_cp023

0xd55b,	// (0x0004aa3c) bg_button_pane_cp024

0xa7f8,	// (0x00047cd9) vitu2_page_scroll_pane_g1

0xa800,	// (0x00047ce1) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0004cfd5) vitu2_page_scroll_pane_g

0xa808,	// (0x00047ce9) vitu2_page_scroll_pane_t1

0x7b8c,	// (0x0004506d) popup_char_count_window_g1

0xd58e,	// (0x0004aa6f) popup_char_count_window_g2

0xd597,	// (0x0004aa78) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0004cfda) popup_char_count_window_g

0xd5a0,	// (0x0004aa81) popup_char_count_window_t1

0x02ce,	// (0x0003d7af) main_vded2_pane

0xc980,	// (0x00049e61) aid_size_cell_imed_line

0xc98a,	// (0x00049e6b) grid_imed_line_width_pane

0x995a,	// (0x00046e3b) vid4_indicators_pane_g4

0xd5ae,	// (0x0004aa8f) cell_imed_line_width_pane_ParamLimits

0xd5ae,	// (0x0004aa8f) cell_imed_line_width_pane

0xd5c2,	// (0x0004aaa3) cell_imed_line_width_pane_g1

0xa817,	// (0x00047cf8) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0004cfe1) cell_imed_line_width_pane_g

0xa81f,	// (0x00047d00) main_vded2_pane_g1_ParamLimits

0xa81f,	// (0x00047d00) main_vded2_pane_g1

0xa835,	// (0x00047d16) main_vded2_pane_g2_ParamLimits

0xa835,	// (0x00047d16) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0004cfe6) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0004cfe6) main_vded2_pane_g

0xa847,	// (0x00047d28) vded2_slider_pane_ParamLimits

0xa847,	// (0x00047d28) vded2_slider_pane

0xa857,	// (0x00047d38) aid_size_touch_vded2_end

0xa861,	// (0x00047d42) aid_size_touch_vded2_playhead

0xd5cb,	// (0x0004aaac) aid_size_touch_vded2_start

0xd5d3,	// (0x0004aab4) vded2_slider_bg_pane

0xd5dc,	// (0x0004aabd) vded2_slider_pane_g1

0xd5e5,	// (0x0004aac6) vded2_slider_pane_g2

0xa86b,	// (0x00047d4c) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0004cfeb) vded2_slider_pane_g

0xd5ed,	// (0x0004aace) vded2_slider_bg_pane_g1

0xd5f6,	// (0x0004aad7) vded2_slider_bg_pane_g2

0xd5ff,	// (0x0004aae0) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0004cff2) vded2_slider_bg_pane_g

0x55eb,	// (0x00042acc) aid_postcard_touch_down_pane_ParamLimits

0x55eb,	// (0x00042acc) aid_postcard_touch_down_pane

0x5601,	// (0x00042ae2) aid_postcard_touch_up_pane_ParamLimits

0x5601,	// (0x00042ae2) aid_postcard_touch_up_pane

0x02ce,	// (0x0003d7af) main_blid2_pane

0x6de6,	// (0x000442c7) popup_blid2_search_window

0x02ce,	// (0x0003d7af) blid2_gps_pane

0x02ce,	// (0x0003d7af) blid2_navig_pane

0x02ce,	// (0x0003d7af) blid2_search_pane

0x02ce,	// (0x0003d7af) blid2_tripm_pane

0xa876,	// (0x00047d57) blid2_search_pane_g1_ParamLimits

0xa876,	// (0x00047d57) blid2_search_pane_g1

0xa88e,	// (0x00047d6f) blid2_search_pane_t1_ParamLimits

0xa88e,	// (0x00047d6f) blid2_search_pane_t1

0xa8a0,	// (0x00047d81) aid_size_cell_blid2_gps_ParamLimits

0xa8a0,	// (0x00047d81) aid_size_cell_blid2_gps

0xa8b8,	// (0x00047d99) blid2_gps_pane_g1_ParamLimits

0xa8b8,	// (0x00047d99) blid2_gps_pane_g1

0xa8cc,	// (0x00047dad) grid_blid2_satellite_pane_ParamLimits

0xa8cc,	// (0x00047dad) grid_blid2_satellite_pane

0xa8e6,	// (0x00047dc7) blid2_navig_pane_g1_ParamLimits

0xa8e6,	// (0x00047dc7) blid2_navig_pane_g1

0xa8f2,	// (0x00047dd3) blid2_navig_pane_t1_ParamLimits

0xa8f2,	// (0x00047dd3) blid2_navig_pane_t1

0xa90d,	// (0x00047dee) blid2_navig_pane_t2_ParamLimits

0xa90d,	// (0x00047dee) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0004cff9) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0004cff9) blid2_navig_pane_t

0xa928,	// (0x00047e09) blid2_navig_ring_pane_ParamLimits

0xa928,	// (0x00047e09) blid2_navig_ring_pane

0xa941,	// (0x00047e22) blid2_speed_pane_ParamLimits

0xa941,	// (0x00047e22) blid2_speed_pane

0xa94d,	// (0x00047e2e) blid2_tripm_pane_g1_ParamLimits

0xa94d,	// (0x00047e2e) blid2_tripm_pane_g1

0xa968,	// (0x00047e49) blid2_tripm_pane_g2_ParamLimits

0xa968,	// (0x00047e49) blid2_tripm_pane_g2

0xa97c,	// (0x00047e5d) blid2_tripm_pane_g3_ParamLimits

0xa97c,	// (0x00047e5d) blid2_tripm_pane_g3

0xa990,	// (0x00047e71) blid2_tripm_pane_g4_ParamLimits

0xa990,	// (0x00047e71) blid2_tripm_pane_g4

0xa9a4,	// (0x00047e85) blid2_tripm_pane_g5_ParamLimits

0xa9a4,	// (0x00047e85) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0004cffe) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0004cffe) blid2_tripm_pane_g

0xa9ca,	// (0x00047eab) blid2_tripm_pane_t1_ParamLimits

0xa9ca,	// (0x00047eab) blid2_tripm_pane_t1

0xa9e5,	// (0x00047ec6) blid2_tripm_pane_t2_ParamLimits

0xa9e5,	// (0x00047ec6) blid2_tripm_pane_t2

0xaa00,	// (0x00047ee1) blid2_tripm_pane_t3_ParamLimits

0xaa00,	// (0x00047ee1) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0004d00b) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0004d00b) blid2_tripm_pane_t

0xaa47,	// (0x00047f28) cell_blid2_satellite_pane_ParamLimits

0xaa47,	// (0x00047f28) cell_blid2_satellite_pane

0xaa65,	// (0x00047f46) cell_blid2_satellite_pane_g1

0xd608,	// (0x0004aae9) cell_blid2_satellite_pane_t1

0x7f35,	// (0x00045416) blid2_speed_pane_g1

0xd616,	// (0x0004aaf7) blid2_speed_pane_t1

0xd624,	// (0x0004ab05) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0004d014) blid2_speed_pane_t

0x7f35,	// (0x00045416) blid2_navig_ring_pane_g1

0xaa6e,	// (0x00047f4f) blid2_navig_ring_pane_g2

0xaa76,	// (0x00047f57) blid2_navig_ring_pane_g3

0xaa7e,	// (0x00047f5f) blid2_navig_ring_pane_g4

0xaa86,	// (0x00047f67) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0004d019) blid2_navig_ring_pane_g

0x02ce,	// (0x0003d7af) bg_popup_window_pane_cp011

0xd632,	// (0x0004ab13) popup_blid2_search_window_g1

0xd63a,	// (0x0004ab1b) popup_blid2_search_window_t1

0xd648,	// (0x0004ab29) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0004d024) popup_blid2_search_window_t

0x0db8,	// (0x0003e299) main_browser_pane_g1

0x0ab1,	// (0x0003df92) main_browser_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp011_ParamLimits

0x9c31,	// (0x00047112) cell_vitu2_function_pane_g1_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_popup_sub_pane_cp22_ParamLimits

0x2bc3,	// (0x000400a4) input_focus_pane_cp08_ParamLimits

0xa4d3,	// (0x000479b4) popup_vitu2_query_button_pane_ParamLimits

0xa4d3,	// (0x000479b4) popup_vitu2_query_button_pane

0x2bb9,	// (0x0004009a) popup_vitu2_query_input_button_pane

0xd1fa,	// (0x0004a6db) popup_vitu2_query_window_g1_ParamLimits

0x2bd0,	// (0x000400b1) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0004cf2b) popup_vitu2_query_window_g_ParamLimits

0x02ce,	// (0x0003d7af) bg_button_pane_cp026

0xaa8e,	// (0x00047f6f) popup_vitu2_query_input_button_pane_g1

0x02ce,	// (0x0003d7af) bg_button_pane_cp025

0xd656,	// (0x0004ab37) popup_vitu2_query_button_pane_t1

0x824c,	// (0x0004572d) main_mp3_pane_t6

0x825a,	// (0x0004573b) popup_slider_window_cp01

0xefac,	// (0x0004c48d) cam4_battery_pane

0xf005,	// (0x0004c4e6) cam4_battery_pane_cp02

0xf069,	// (0x0004c54a) cam4_battery_pane_cp01

0xf069,	// (0x0004c54a) cam4_battery_pane_cp03

0x7f35,	// (0x00045416) cam4_battery_pane_g1

0xd664,	// (0x0004ab45) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0004d029) cam4_battery_pane_g

0x7d33,	// (0x00045214) popup_blid_sat_info2_window_t11

0x4fce,	// (0x000424af) aid_size_touch_mv_arrow_left_ParamLimits

0x4ff7,	// (0x000424d8) aid_size_touch_mv_arrow_right_ParamLimits

0x14a1,	// (0x0003e982) navi_pane_g1_ParamLimits

0x5020,	// (0x00042501) navi_pane_g2_ParamLimits

0x504e,	// (0x0004252f) navi_pane_g3_ParamLimits

0xf418,	// (0x0004c8f9) navi_pane_g_ParamLimits

0x50a6,	// (0x00042587) navi_pane_mv_t1_ParamLimits

0x8e0f,	// (0x000462f0) grid_imed_effect_pane_ParamLimits

0x0d01,	// (0x0003e1e2) aid_placing_vt_slider_lsc

0x0d09,	// (0x0003e1ea) aid_placing_vt_slider_prt

0x1a5a,	// (0x0003ef3b) bg_tb_trans_pane_cp01_ParamLimits

0x80ec,	// (0x000455cd) popup_image_details_window_g1_ParamLimits

0x80ff,	// (0x000455e0) popup_image_details_window_g2_ParamLimits

0x8114,	// (0x000455f5) popup_image_details_window_g3_ParamLimits

0x8114,	// (0x000455f5) popup_image_details_window_g3

0xf74b,	// (0x0004cc2c) popup_image_details_window_g_ParamLimits

0x8128,	// (0x00045609) popup_image_details_window_t1_ParamLimits

0x813a,	// (0x0004561b) popup_image_details_window_t2_ParamLimits

0x8153,	// (0x00045634) popup_image_details_window_t3_ParamLimits

0x8167,	// (0x00045648) popup_image_details_window_t4_ParamLimits

0x8182,	// (0x00045663) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0004cc33) popup_image_details_window_t_ParamLimits

0xa701,	// (0x00047be2) cl_header_name_pane_ParamLimits

0xa701,	// (0x00047be2) cl_header_name_pane

0xaa96,	// (0x00047f77) cl_header_name_pane_t1_ParamLimits

0xaa96,	// (0x00047f77) cl_header_name_pane_t1

0xaab7,	// (0x00047f98) cl_header_name_pane_t2_ParamLimits

0xaab7,	// (0x00047f98) cl_header_name_pane_t2

0xaaf9,	// (0x00047fda) cl_header_name_pane_t3_ParamLimits

0xaaf9,	// (0x00047fda) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0004d02e) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0004d02e) cl_header_name_pane_t

0x5077,	// (0x00042558) navi_pane_mv_g2_ParamLimits

0xced9,	// (0x0004a3ba) field_vitu2_entry_pane_g1_ParamLimits

0xcee5,	// (0x0004a3c6) field_vitu2_entry_pane_g2_ParamLimits

0xcef1,	// (0x0004a3d2) field_vitu2_entry_pane_g3_ParamLimits

0xcef1,	// (0x0004a3d2) field_vitu2_entry_pane_g3

0xf949,	// (0x0004ce2a) field_vitu2_entry_pane_g_ParamLimits

0x9bad,	// (0x0004708e) cell_vitu2_itu_pane_g1_ParamLimits

0x9bbd,	// (0x0004709e) cell_vitu2_itu_pane_g2_ParamLimits

0x9bbd,	// (0x0004709e) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0004ce36) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0004ce36) cell_vitu2_itu_pane_g

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp05_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp05

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp03

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp04

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp10_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp10

0x2c79,	// (0x0004015a) bg_vkb2_func_pane_cp08

0xa6ab,	// (0x00047b8c) bg_vkb2_func_pane_cp06

0xa6b9,	// (0x00047b9a) bg_vkb2_func_pane_cp07

0xd564,	// (0x0004aa45) bg_vkb2_func_pane_cp11_ParamLimits

0xd564,	// (0x0004aa45) bg_vkb2_func_pane_cp11

0xd579,	// (0x0004aa5a) bg_vkb2_func_pane_cp12_ParamLimits

0xd579,	// (0x0004aa5a) bg_vkb2_func_pane_cp12

0x02ce,	// (0x0003d7af) bg_vkb2_func_pane_cp09

0xcf60,	// (0x0004a441) bg_vkb2_func_pane_g1

0x0ec9,	// (0x0003e3aa) bg_vkb2_func_pane_g2

0xcf68,	// (0x0004a449) bg_vkb2_func_pane_g3

0xcf70,	// (0x0004a451) bg_vkb2_func_pane_g4

0xd1a5,	// (0x0004a686) bg_vkb2_func_pane_g5

0xcf88,	// (0x0004a469) bg_vkb2_func_pane_g6

0xcf90,	// (0x0004a471) bg_vkb2_func_pane_g7

0xcf80,	// (0x0004a461) bg_vkb2_func_pane_g8

0x0ea9,	// (0x0003e38a) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0004d035) bg_vkb2_func_pane_g

0xa9b8,	// (0x00047e99) blid2_tripm_pane_g6_ParamLimits

0xa9b8,	// (0x00047e99) blid2_tripm_pane_g6

0xcd6d,	// (0x0004a24e) mp4_progress_pane_g1

0xaa33,	// (0x00047f14) blid2_tripm_values_pane_ParamLimits

0xaa33,	// (0x00047f14) blid2_tripm_values_pane

0xab2a,	// (0x0004800b) blid2_tripm_values_pane_t1

0xab38,	// (0x00048019) blid2_tripm_values_pane_t2

0xab46,	// (0x00048027) blid2_tripm_values_pane_t3

0xab54,	// (0x00048035) blid2_tripm_values_pane_t4

0xab62,	// (0x00048043) blid2_tripm_values_pane_t5

0xab70,	// (0x00048051) blid2_tripm_values_pane_t6

0xab7e,	// (0x0004805f) blid2_tripm_values_pane_t7

0xab8c,	// (0x0004806d) blid2_tripm_values_pane_t8

0xab9a,	// (0x0004807b) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0004d048) blid2_tripm_values_pane_t

0x40c9,	// (0x000415aa) call_video_pane_t1_ParamLimits

0x40db,	// (0x000415bc) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0004c782) call_video_pane_t_ParamLimits

0x29db,	// (0x0003febc) msg_header_pane_g1_ParamLimits

0x16bc,	// (0x0003eb9d) msg_header_pane_g2_ParamLimits

0x16bc,	// (0x0003eb9d) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0004c99c) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0004c99c) msg_header_pane_g

0x0ab1,	// (0x0003df92) main_clock2_pane_ParamLimits

0x8b34,	// (0x00046015) grid_clock2_toolbar_pane_ParamLimits

0x8b34,	// (0x00046015) grid_clock2_toolbar_pane

0x8b34,	// (0x00046015) listscroll_clock2_pane_ParamLimits

0x8b34,	// (0x00046015) listscroll_clock2_pane

0x8c11,	// (0x000460f2) main_clock2_pane_t3_ParamLimits

0x8c11,	// (0x000460f2) main_clock2_pane_t3

0x8c2c,	// (0x0004610d) main_clock2_pane_t4_ParamLimits

0x8c2c,	// (0x0004610d) main_clock2_pane_t4

0xd66e,	// (0x0004ab4f) cell_clock2_toolbar_pane

0xd676,	// (0x0004ab57) cell_clock2_toolbar_pane_cp01

0xd676,	// (0x0004ab57) cell_clock2_toolbar_pane_cp02

0xd67e,	// (0x0004ab5f) cell_clock2_toolbar_pane_cp03

0xd686,	// (0x0004ab67) list_clock2_pane

0x13f4,	// (0x0003e8d5) scroll_pane_cp10

0xd68e,	// (0x0004ab6f) list_single_clock2_pane_ParamLimits

0xd68e,	// (0x0004ab6f) list_single_clock2_pane

0x1541,	// (0x0003ea22) list_highlight_pane_cp08

0xd69b,	// (0x0004ab7c) list_single_clock2_pane_t1

0xd6a9,	// (0x0004ab8a) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0004d05b) list_single_clock2_pane_t

0x02ce,	// (0x0003d7af) bg_button_pane_cp10

0xd6b7,	// (0x0004ab98) cell_clock2_toolbar_pane_g1

0x5577,	// (0x00042a58) aid_main_viewer_pane_g1_ParamLimits

0x5577,	// (0x00042a58) aid_main_viewer_pane_g1

0x5585,	// (0x00042a66) aid_main_viewer_pane_g2_ParamLimits

0x5585,	// (0x00042a66) aid_main_viewer_pane_g2

0x5593,	// (0x00042a74) aid_main_viewer_pane_g3_ParamLimits

0x5593,	// (0x00042a74) aid_main_viewer_pane_g3

0x55a2,	// (0x00042a83) aid_main_viewer_pane_g4_ParamLimits

0x55a2,	// (0x00042a83) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0004c9ad) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0004c9ad) aid_main_viewer_pane_g

0x6d9c,	// (0x0004427d) main_calc_pane_ParamLimits

0x6dbe,	// (0x0004429f) main_dialer2_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_cam6_pane

0x02ce,	// (0x0003d7af) main_vid6_pane

0x8b40,	// (0x00046021) listscroll_gen_pane_cp06_ParamLimits

0x8b40,	// (0x00046021) listscroll_gen_pane_cp06

0x8c47,	// (0x00046128) main_clock2_pane_t5_ParamLimits

0x8c47,	// (0x00046128) main_clock2_pane_t5

0x8ca4,	// (0x00046185) aid_call2_pane_cp10_ParamLimits

0x8cb6,	// (0x00046197) aid_call_pane_cp10_ParamLimits

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8cc8,	// (0x000461a9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8cc8,	// (0x000461a9) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1476,	// (0x0003e957) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0004cce3) popup_clock_analogue_window_cp10_g_ParamLimits

0x8cda,	// (0x000461bb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x936b,	// (0x0004684c) cell_dialer2_keypad_pane_g2_ParamLimits

0x936b,	// (0x0004684c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0004cdc9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0004cdc9) cell_dialer2_keypad_pane_g

0x9387,	// (0x00046868) cell_dialer2_keypad_pane_t1

0x9f48,	// (0x00047429) main_cset_text2_pane_ParamLimits

0x9f48,	// (0x00047429) main_cset_text2_pane

0xd3d6,	// (0x0004a8b7) area_vitu2_query_pane_g1_ParamLimits

0x2c40,	// (0x00040121) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0004cf78) area_vitu2_query_pane_g_ParamLimits

0xd45a,	// (0x0004a93b) area_vitu2_query_pane_t7_ParamLimits

0xd45a,	// (0x0004a93b) area_vitu2_query_pane_t7

0xa6ab,	// (0x00047b8c) bg_button_pane_cp018_ParamLimits

0xa6b9,	// (0x00047b9a) bg_button_pane_cp021_ParamLimits

0x2c79,	// (0x0004015a) bg_button_pane_cp022_ParamLimits

0x2c79,	// (0x0004015a) bg_vkb2_func_pane_cp08_ParamLimits

0xa6ab,	// (0x00047b8c) bg_vkb2_func_pane_cp06_ParamLimits

0xa6b9,	// (0x00047b9a) bg_vkb2_func_pane_cp07_ParamLimits

0x2c8a,	// (0x0004016b) input_focus_pane_cp09_ParamLimits

0xf0ed,	// (0x0004c5ce) cam6_autofocus_pane_ParamLimits

0xf0ed,	// (0x0004c5ce) cam6_autofocus_pane

0xaba8,	// (0x00048089) cam6_image_uncrop_pane_ParamLimits

0xaba8,	// (0x00048089) cam6_image_uncrop_pane

0xabb7,	// (0x00048098) cam6_indi_pane_ParamLimits

0xabb7,	// (0x00048098) cam6_indi_pane

0xabcd,	// (0x000480ae) cam6_mode_pane_ParamLimits

0xabcd,	// (0x000480ae) cam6_mode_pane

0xabdf,	// (0x000480c0) cam6_timer_pane_ParamLimits

0xabdf,	// (0x000480c0) cam6_timer_pane

0xabeb,	// (0x000480cc) cam6_zoom_pane_ParamLimits

0xabeb,	// (0x000480cc) cam6_zoom_pane

0xabf7,	// (0x000480d8) cam6_mode_pane_g1_ParamLimits

0xabf7,	// (0x000480d8) cam6_mode_pane_g1

0xac07,	// (0x000480e8) cam6_mode_pane_g2_ParamLimits

0xac07,	// (0x000480e8) cam6_mode_pane_g2

0xac17,	// (0x000480f8) cam6_mode_pane_g3_ParamLimits

0xac17,	// (0x000480f8) cam6_mode_pane_g3

0xac27,	// (0x00048108) cam6_mode_pane_g4_ParamLimits

0xac27,	// (0x00048108) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0004d060) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0004d060) cam6_mode_pane_g

0xd6bf,	// (0x0004aba0) bg_tb_trans_pane_cp08_ParamLimits

0xd6bf,	// (0x0004aba0) bg_tb_trans_pane_cp08

0xd6cd,	// (0x0004abae) cam6_battery_pane_ParamLimits

0xd6cd,	// (0x0004abae) cam6_battery_pane

0xd6e3,	// (0x0004abc4) cam6_indi_pane_g1_ParamLimits

0xd6e3,	// (0x0004abc4) cam6_indi_pane_g1

0xd6f5,	// (0x0004abd6) cam6_indi_pane_g2_ParamLimits

0xd6f5,	// (0x0004abd6) cam6_indi_pane_g2

0xd707,	// (0x0004abe8) cam6_indi_pane_g3_ParamLimits

0xd707,	// (0x0004abe8) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0004d069) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0004d069) cam6_indi_pane_g

0xd719,	// (0x0004abfa) cam6_indi_pane_t1_ParamLimits

0xd719,	// (0x0004abfa) cam6_indi_pane_t1

0xac37,	// (0x00048118) cam6_autofocus_pane_g1

0xac3f,	// (0x00048120) cam6_autofocus_pane_g2

0xac47,	// (0x00048128) cam6_autofocus_pane_g3

0xac4f,	// (0x00048130) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0004d070) cam6_autofocus_pane_g

0xd73f,	// (0x0004ac20) cam6_timer_pane_g1

0xd747,	// (0x0004ac28) cam6_timer_pane_t1

0xd755,	// (0x0004ac36) cam6_zoom_cont_pane

0xd75d,	// (0x0004ac3e) cam6_zoom_pane_g1

0xd765,	// (0x0004ac46) cam6_zoom_pane_g2

0xac57,	// (0x00048138) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0004d079) cam6_zoom_pane_g

0x7f35,	// (0x00045416) cam6_battery_pane_g1

0x7f35,	// (0x00045416) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0004cbf0) cam6_battery_pane_g

0xd76d,	// (0x0004ac4e) cam6_zoom_cont_pane_g1

0xd776,	// (0x0004ac57) cam6_zoom_cont_pane_g2

0xd77f,	// (0x0004ac60) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0004d080) cam6_zoom_cont_pane_g

0xac74,	// (0x00048155) cam6_mode_pane_cp_ParamLimits

0xac74,	// (0x00048155) cam6_mode_pane_cp

0xabeb,	// (0x000480cc) cam6_zoom_pane_cp_ParamLimits

0xabeb,	// (0x000480cc) cam6_zoom_pane_cp

0xac86,	// (0x00048167) vid6_image_uncrop_cif_pane_ParamLimits

0xac86,	// (0x00048167) vid6_image_uncrop_cif_pane

0xac96,	// (0x00048177) vid6_image_uncrop_nhd_pane_ParamLimits

0xac96,	// (0x00048177) vid6_image_uncrop_nhd_pane

0xaba8,	// (0x00048089) vid6_image_uncrop_vga_pane_ParamLimits

0xaba8,	// (0x00048089) vid6_image_uncrop_vga_pane

0xaca5,	// (0x00048186) vid6_image_uncrop_wvga_pane_ParamLimits

0xaca5,	// (0x00048186) vid6_image_uncrop_wvga_pane

0xacb4,	// (0x00048195) vid6_indi_pane_ParamLimits

0xacb4,	// (0x00048195) vid6_indi_pane

0xd6bf,	// (0x0004aba0) bg_tb_trans_pane_cp09_ParamLimits

0xd6bf,	// (0x0004aba0) bg_tb_trans_pane_cp09

0xd797,	// (0x0004ac78) cam6_battery_pane_cp_ParamLimits

0xd797,	// (0x0004ac78) cam6_battery_pane_cp

0xd7a3,	// (0x0004ac84) vid6_indi_pane_g1_ParamLimits

0xd7a3,	// (0x0004ac84) vid6_indi_pane_g1

0xd7b5,	// (0x0004ac96) vid6_indi_pane_g2_ParamLimits

0xd7b5,	// (0x0004ac96) vid6_indi_pane_g2

0xd7c7,	// (0x0004aca8) vid6_indi_pane_g3_ParamLimits

0xd7c7,	// (0x0004aca8) vid6_indi_pane_g3

0xd7dc,	// (0x0004acbd) vid6_indi_pane_g4_ParamLimits

0xd7dc,	// (0x0004acbd) vid6_indi_pane_g4

0xd7f1,	// (0x0004acd2) vid6_indi_pane_g5_ParamLimits

0xd7f1,	// (0x0004acd2) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0004d087) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0004d087) vid6_indi_pane_g

0xd80b,	// (0x0004acec) vid6_indi_pane_t1_ParamLimits

0xd80b,	// (0x0004acec) vid6_indi_pane_t1

0xd821,	// (0x0004ad02) vid6_indi_pane_t2_ParamLimits

0xd821,	// (0x0004ad02) vid6_indi_pane_t2

0xd849,	// (0x0004ad2a) vid6_indi_pane_t3_ParamLimits

0xd849,	// (0x0004ad2a) vid6_indi_pane_t3

0xd871,	// (0x0004ad52) vid6_indi_pane_t4_ParamLimits

0xd871,	// (0x0004ad52) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0004d092) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0004d092) vid6_indi_pane_t

0xd895,	// (0x0004ad76) wait_bar_pane_cp08

0xaccc,	// (0x000481ad) main_cset_text2_pane_t1_ParamLimits

0xaccc,	// (0x000481ad) main_cset_text2_pane_t1

0xac5f,	// (0x00048140) listscroll_gen_pane_cp06_t1_ParamLimits

0xac5f,	// (0x00048140) listscroll_gen_pane_cp06_t1

0x02ce,	// (0x0003d7af) main_cam6_set_pane

0x8209,	// (0x000456ea) bg_tb_trans_pane_cp06_ParamLimits

0xefb4,	// (0x0004c495) cam4_indicators_pane_g1_ParamLimits

0xefc5,	// (0x0004c4a6) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0004ce06) cam4_indicators_pane_g_ParamLimits

0xefe3,	// (0x0004c4c4) cam4_indicators_pane_t1_ParamLimits

0xceb2,	// (0x0004a393) bg_tb_trans_pane_cp07_ParamLimits

0x9933,	// (0x00046e14) vid4_indicators_pane_g1_ParamLimits

0x9940,	// (0x00046e21) vid4_indicators_pane_g2_ParamLimits

0x994d,	// (0x00046e2e) vid4_indicators_pane_g3_ParamLimits

0x995a,	// (0x00046e3b) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0004ce18) vid4_indicators_pane_g_ParamLimits

0x9972,	// (0x00046e53) vid4_indicators_pane_t1_ParamLimits

0xf071,	// (0x0004c552) vid4_progress_pane_g1_ParamLimits

0xf081,	// (0x0004c562) vid4_progress_pane_g2_ParamLimits

0xf091,	// (0x0004c572) vid4_progress_pane_g3_ParamLimits

0xefc5,	// (0x0004c4a6) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0004cfc3) vid4_progress_pane_g_ParamLimits

0xf09d,	// (0x0004c57e) vid4_progress_pane_t1_ParamLimits

0xf0b2,	// (0x0004c593) vid4_progress_pane_t2_ParamLimits

0xf0c8,	// (0x0004c5a9) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0004cfce) vid4_progress_pane_t_ParamLimits

0xf0dd,	// (0x0004c5be) wait_bar_pane_cp07_ParamLimits

0xacec,	// (0x000481cd) main_cam6_set_pane_g2_ParamLimits

0xacec,	// (0x000481cd) main_cam6_set_pane_g2

0xad10,	// (0x000481f1) main_cset6_listscroll_pane_ParamLimits

0xad10,	// (0x000481f1) main_cset6_listscroll_pane

0xad2c,	// (0x0004820d) main_cset6_slider_pane_ParamLimits

0xad2c,	// (0x0004820d) main_cset6_slider_pane

0xad42,	// (0x00048223) main_cset6_text2_pane_ParamLimits

0xad42,	// (0x00048223) main_cset6_text2_pane

0xd8a4,	// (0x0004ad85) main_cset6_text_pane

0xd8ac,	// (0x0004ad8d) main_cset_list_pane_copy1_ParamLimits

0xd8ac,	// (0x0004ad8d) main_cset_list_pane_copy1

0xd8bc,	// (0x0004ad9d) scroll_pane_cp028_copy1

0xad50,	// (0x00048231) cset_list_set_pane_copy1

0xad63,	// (0x00048244) aid_position_infowindow_above_copy1

0xad6b,	// (0x0004824c) aid_position_infowindow_below_copy1

0x2c9b,	// (0x0004017c) cset_list_set_pane_g1_copy1

0xd8c5,	// (0x0004ada6) cset_list_set_pane_g3_copy1_ParamLimits

0xd8c5,	// (0x0004ada6) cset_list_set_pane_g3_copy1

0x2b73,	// (0x00040054) cset_list_set_pane_t1_copy1_ParamLimits

0x2b73,	// (0x00040054) cset_list_set_pane_t1_copy1

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp021_copy1_ParamLimits

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp021_copy1

0xd8d4,	// (0x0004adb5) cset6_slider_pane_ParamLimits

0xd8d4,	// (0x0004adb5) cset6_slider_pane

0xd900,	// (0x0004ade1) main_cset6_slider_pane_g1_ParamLimits

0xd900,	// (0x0004ade1) main_cset6_slider_pane_g1

0xad73,	// (0x00048254) main_cset6_slider_pane_g2_ParamLimits

0xad73,	// (0x00048254) main_cset6_slider_pane_g2

0xd08f,	// (0x0004a570) main_cset6_slider_pane_g3_ParamLimits

0xd08f,	// (0x0004a570) main_cset6_slider_pane_g3

0xa00d,	// (0x000474ee) main_cset6_slider_pane_g4_ParamLimits

0xa00d,	// (0x000474ee) main_cset6_slider_pane_g4

0xa055,	// (0x00047536) main_cset6_slider_pane_g5_ParamLimits

0xa055,	// (0x00047536) main_cset6_slider_pane_g5

0xd08f,	// (0x0004a570) main_cset6_slider_pane_g7_ParamLimits

0xd08f,	// (0x0004a570) main_cset6_slider_pane_g7

0xd09b,	// (0x0004a57c) main_cset6_slider_pane_g8_ParamLimits

0xd09b,	// (0x0004a57c) main_cset6_slider_pane_g8

0x9ff5,	// (0x000474d6) main_cset6_slider_pane_g9_ParamLimits

0x9ff5,	// (0x000474d6) main_cset6_slider_pane_g9

0xa001,	// (0x000474e2) main_cset6_slider_pane_g10_ParamLimits

0xa001,	// (0x000474e2) main_cset6_slider_pane_g10

0xa00d,	// (0x000474ee) main_cset6_slider_pane_g11_ParamLimits

0xa00d,	// (0x000474ee) main_cset6_slider_pane_g11

0xa019,	// (0x000474fa) main_cset6_slider_pane_g12_ParamLimits

0xa019,	// (0x000474fa) main_cset6_slider_pane_g12

0xa025,	// (0x00047506) main_cset6_slider_pane_g13_ParamLimits

0xa025,	// (0x00047506) main_cset6_slider_pane_g13

0xa031,	// (0x00047512) main_cset6_slider_pane_g14_ParamLimits

0xa031,	// (0x00047512) main_cset6_slider_pane_g14

0xad9b,	// (0x0004827c) main_cset6_slider_pane_g15_ParamLimits

0xad9b,	// (0x0004827c) main_cset6_slider_pane_g15

0xa055,	// (0x00047536) main_cset6_slider_pane_g16_ParamLimits

0xa055,	// (0x00047536) main_cset6_slider_pane_g16

0xa061,	// (0x00047542) main_cset6_slider_pane_g17_ParamLimits

0xa061,	// (0x00047542) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0004d09b) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0004d09b) main_cset6_slider_pane_g

0xd928,	// (0x0004ae09) main_cset6_slider_pane_t1_ParamLimits

0xd928,	// (0x0004ae09) main_cset6_slider_pane_t1

0xadb3,	// (0x00048294) main_cset6_slider_pane_t2_ParamLimits

0xadb3,	// (0x00048294) main_cset6_slider_pane_t2

0xadde,	// (0x000482bf) main_cset6_slider_pane_t3_ParamLimits

0xadde,	// (0x000482bf) main_cset6_slider_pane_t3

0xae09,	// (0x000482ea) main_cset6_slider_pane_t4_ParamLimits

0xae09,	// (0x000482ea) main_cset6_slider_pane_t4

0xae34,	// (0x00048315) main_cset6_slider_pane_t5_ParamLimits

0xae34,	// (0x00048315) main_cset6_slider_pane_t5

0xd969,	// (0x0004ae4a) main_cset6_slider_pane_t7_ParamLimits

0xd969,	// (0x0004ae4a) main_cset6_slider_pane_t7

0xae5f,	// (0x00048340) main_cset6_slider_pane_t8_ParamLimits

0xae5f,	// (0x00048340) main_cset6_slider_pane_t8

0xae83,	// (0x00048364) main_cset6_slider_pane_t9_ParamLimits

0xae83,	// (0x00048364) main_cset6_slider_pane_t9

0xaea7,	// (0x00048388) main_cset6_slider_pane_t10_ParamLimits

0xaea7,	// (0x00048388) main_cset6_slider_pane_t10

0xaecb,	// (0x000483ac) main_cset6_slider_pane_t11_ParamLimits

0xaecb,	// (0x000483ac) main_cset6_slider_pane_t11

0xd99f,	// (0x0004ae80) main_cset6_slider_pane_t14_ParamLimits

0xd99f,	// (0x0004ae80) main_cset6_slider_pane_t14

0xd9d8,	// (0x0004aeb9) main_cset6_slider_pane_t15_ParamLimits

0xd9d8,	// (0x0004aeb9) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0004d0c0) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0004d0c0) main_cset6_slider_pane_t

0xd153,	// (0x0004a634) cset_slider_pane_g1_copy1

0xd15c,	// (0x0004a63d) cset_slider_pane_g2_copy1

0xd165,	// (0x0004a646) cset_slider_pane_g3_copy1

0x02ce,	// (0x0003d7af) bg_popup_sub_pane_cp011_copy1

0xd206,	// (0x0004a6e7) main_cset_text_pane_g1_copy1

0xd20e,	// (0x0004a6ef) main_cset_text_pane_t1_copy1

0xd21c,	// (0x0004a6fd) main_cset_text_pane_t2_copy1

0xd22a,	// (0x0004a70b) main_cset_text_pane_t3_copy1

0xd238,	// (0x0004a719) main_cset_text_pane_t4_copy1

0xd246,	// (0x0004a727) main_cset_text_pane_t5_copy1

0xd254,	// (0x0004a735) main_cset_text_pane_t6_copy1

0xd262,	// (0x0004a743) main_cset_text_pane_t7_copy1

0xaccc,	// (0x000481ad) main_cset_text2_pane_t1_copy1

0x02ce,	// (0x0003d7af) main_ncimui_pane

0x7033,	// (0x00044514) popup_query_ncimui_window_ParamLimits

0x7033,	// (0x00044514) popup_query_ncimui_window

0xc76b,	// (0x00049c4c) field_cale_ev2_pane_g4_ParamLimits

0xc76b,	// (0x00049c4c) field_cale_ev2_pane_g4

0x9243,	// (0x00046724) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9243,	// (0x00046724) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0004cda4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0004cda4) cell_video_dialer_keypad_pane_g

0x925b,	// (0x0004673c) cell_video_dialer_keypad_pane_t1

0x02ce,	// (0x0003d7af) bg_popup_window_pane_cp012

0x12c4,	// (0x0003e7a5) heading_pane_cp06

0xdb00,	// (0x0004afe1) ncim_query_content_pane

0x02ce,	// (0x0003d7af) bg_popup_heading_pane_cp01

0xdb08,	// (0x0004afe9) ncim_heading_pane_t1

0xdb16,	// (0x0004aff7) ncim_indicator_popup_pane

0xdb28,	// (0x0004b009) ncim_query_button_pane

0xdb3c,	// (0x0004b01d) ncim_query_content_pane_t1

0xdb4e,	// (0x0004b02f) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0004d0ff) ncim_query_content_pane_t

0xdb88,	// (0x0004b069) ncim_query_list_pane

0xdb9a,	// (0x0004b07b) ncim_query_popup_pane

0xdb16,	// (0x0004aff7) ncim_indicator_popup_pane_ParamLimits

0xafb5,	// (0x00048496) ncim_query_content_pane_g1_ParamLimits

0xafb5,	// (0x00048496) ncim_query_content_pane_g1

0xdb3c,	// (0x0004b01d) ncim_query_content_pane_t1_ParamLimits

0xdb4e,	// (0x0004b02f) ncim_query_content_pane_t2_ParamLimits

0xafc1,	// (0x000484a2) ncim_query_content_pane_t3_ParamLimits

0xafc1,	// (0x000484a2) ncim_query_content_pane_t3

0xafe9,	// (0x000484ca) ncim_query_content_pane_t4_ParamLimits

0xafe9,	// (0x000484ca) ncim_query_content_pane_t4

0xb011,	// (0x000484f2) ncim_query_content_pane_t5_ParamLimits

0xb011,	// (0x000484f2) ncim_query_content_pane_t5

0xdb60,	// (0x0004b041) ncim_query_content_pane_t6_ParamLimits

0xdb60,	// (0x0004b041) ncim_query_content_pane_t6

0xfc1e,	// (0x0004d0ff) ncim_query_content_pane_t_ParamLimits

0xdb88,	// (0x0004b069) ncim_query_list_pane_ParamLimits

0xdb9a,	// (0x0004b07b) ncim_query_popup_pane_ParamLimits

0xdbae,	// (0x0004b08f) wait_bar_pane_cp04

0x02ce,	// (0x0003d7af) input_focus_pane_cp011

0xdbb6,	// (0x0004b097) ncim_query_popup_pane_t1

0xdbc4,	// (0x0004b0a5) ncim_list_query_list_pane_ParamLimits

0xdbc4,	// (0x0004b0a5) ncim_list_query_list_pane

0x02ce,	// (0x0003d7af) bg_button_pane_cp027

0xdbd7,	// (0x0004b0b8) ncim_query_button_pane_g1

0x02ce,	// (0x0003d7af) list_highlight_pane_cp012

0xdbe1,	// (0x0004b0c2) ncim_list_query_list_pane_g1

0xdbe9,	// (0x0004b0ca) ncim_list_query_list_pane_t1

0xefd4,	// (0x0004c4b5) cam4_indicators_pane_g3_ParamLimits

0xefd4,	// (0x0004c4b5) cam4_indicators_pane_g3

0x9966,	// (0x00046e47) vid4_indicators_pane_g5_ParamLimits

0x9966,	// (0x00046e47) vid4_indicators_pane_g5

0xefd4,	// (0x0004c4b5) vid4_progress_pane_g5_ParamLimits

0xefd4,	// (0x0004c4b5) vid4_progress_pane_g5

0xaefd,	// (0x000483de) main_ncimui_pane_g1

0xaf43,	// (0x00048424) ncimui_group_query_pane_ParamLimits

0xaf43,	// (0x00048424) ncimui_group_query_pane

0xaf77,	// (0x00048458) ncimui_list_pane_ParamLimits

0xaf77,	// (0x00048458) ncimui_list_pane

0xaf91,	// (0x00048472) ncimui_text_pane_ParamLimits

0xaf91,	// (0x00048472) ncimui_text_pane

0xb039,	// (0x0004851a) ncimui_text_pane_t1_ParamLimits

0xb039,	// (0x0004851a) ncimui_text_pane_t1

0xdbf7,	// (0x0004b0d8) ncimui_list_single_graphic_pane_ParamLimits

0xdbf7,	// (0x0004b0d8) ncimui_list_single_graphic_pane

0xb05f,	// (0x00048540) ncimui_query_pane_ParamLimits

0xb05f,	// (0x00048540) ncimui_query_pane

0x02ce,	// (0x0003d7af) list_highlight_pane_cp013

0xdc07,	// (0x0004b0e8) ncim_list_query_list_pane_t1_copy1

0xdbe1,	// (0x0004b0c2) ncim_list_single_graphic_pane_g1

0xdc15,	// (0x0004b0f6) ncim_query_button_pane_cp01

0xdc1d,	// (0x0004b0fe) ncim_query_entry_pane_ParamLimits

0xdc1d,	// (0x0004b0fe) ncim_query_entry_pane

0xdc2d,	// (0x0004b10e) ncimui_query_pane_g1

0xdc35,	// (0x0004b116) ncimui_query_pane_t1_ParamLimits

0xdc35,	// (0x0004b116) ncimui_query_pane_t1

0x02ce,	// (0x0003d7af) input_focus_pane_cp012

0xdbb6,	// (0x0004b097) ncim_query_entry_pane_t1

0x0ab1,	// (0x0003df92) main_im_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) main_mobtv_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) main_mobtv_pane

0x9ff5,	// (0x000474d6) main_cset6_slider_pane_g18_ParamLimits

0x9ff5,	// (0x000474d6) main_cset6_slider_pane_g18

0xa025,	// (0x00047506) main_cset6_slider_pane_g19_ParamLimits

0xa025,	// (0x00047506) main_cset6_slider_pane_g19

0xdc4b,	// (0x0004b12c) bg_main_mobtv_pane_ParamLimits

0xdc4b,	// (0x0004b12c) bg_main_mobtv_pane

0xb06f,	// (0x00048550) main_mobtv_info_pane

0xb078,	// (0x00048559) main_mobtv_loading_pane_ParamLimits

0xb078,	// (0x00048559) main_mobtv_loading_pane

0xdc59,	// (0x0004b13a) main_mobtv_pg_channel_list_pane

0xdc63,	// (0x0004b144) main_mobtv_pg_hdr_pane

0xb085,	// (0x00048566) main_mobtv_programe_curr_pane_ParamLimits

0xb085,	// (0x00048566) main_mobtv_programe_curr_pane

0xb092,	// (0x00048573) main_mobtv_programe_next_pane_ParamLimits

0xb092,	// (0x00048573) main_mobtv_programe_next_pane

0xdc6c,	// (0x0004b14d) popup_mobtv_noti_window

0x7f35,	// (0x00045416) main_tv_pg_hdr_pane_g1

0xdc74,	// (0x0004b155) main_tv_pg_hdr_pane_g2

0xdc7c,	// (0x0004b15d) main_tv_pg_hdr_pane_g3

0xdc84,	// (0x0004b165) main_tv_pg_hdr_pane_g4

0xdc8c,	// (0x0004b16d) main_tv_pg_hdr_pane_g5

0xdc96,	// (0x0004b177) main_tv_pg_hdr_pane_g6

0xdca0,	// (0x0004b181) main_tv_pg_hdr_pane_g7

0xdcaa,	// (0x0004b18b) main_tv_pg_hdr_pane_g8

0xdcb4,	// (0x0004b195) main_tv_pg_hdr_pane_g9

0xdcbe,	// (0x0004b19f) main_tv_pg_hdr_pane_g10

0xdcc8,	// (0x0004b1a9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0004d10c) main_tv_pg_hdr_pane_g

0xdcd2,	// (0x0004b1b3) main_tv_pg_hdr_pane_t1

0xdce0,	// (0x0004b1c1) main_tv_pg_hdr_pane_t2

0xdcee,	// (0x0004b1cf) main_tv_pg_hdr_pane_t3

0xdcfe,	// (0x0004b1df) main_tv_pg_hdr_pane_t4

0xdd0e,	// (0x0004b1ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0004d123) main_tv_pg_hdr_pane_t

0xdd1e,	// (0x0004b1ff) single_mobtv_pg_channel_pane_ParamLimits

0xdd1e,	// (0x0004b1ff) single_mobtv_pg_channel_pane

0xdd30,	// (0x0004b211) single_mobtv_pg_channel_table_pane

0xdd39,	// (0x0004b21a) single_mobtv_pg_channel_thumb_pane

0xdd42,	// (0x0004b223) single_tv_pg_channel_pane_g1

0xdd4b,	// (0x0004b22c) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0004d12e) single_tv_pg_channel_pane_g

0x8209,	// (0x000456ea) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x8209,	// (0x000456ea) bg_single_mobtv_pg_channel_thumb_pane

0xdd54,	// (0x0004b235) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdd54,	// (0x0004b235) single_mobtv_pg_channel_thumb_pane_g1

0xdd62,	// (0x0004b243) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdd62,	// (0x0004b243) single_mobtv_pg_channel_thumb_pane_g2

0xdd6e,	// (0x0004b24f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdd6e,	// (0x0004b24f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0004d133) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0004d133) single_mobtv_pg_channel_thumb_pane_g

0xdd7a,	// (0x0004b25b) single_mobtv_pg_channel_thumb_pane_t1

0xdd88,	// (0x0004b269) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0004d13a) single_mobtv_pg_channel_thumb_pane_t

0x7f35,	// (0x00045416) bg_single_mobtv_pg_channel_table_pane_g1

0x7f35,	// (0x00045416) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0004cbf0) bg_single_mobtv_pg_channel_table_pane_g

0xdd96,	// (0x0004b277) single_mobtv_pg_channel_table_pane_t1

0xdda4,	// (0x0004b285) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0004d13f) single_mobtv_pg_channel_table_pane_t

0xb0a7,	// (0x00048588) main_mobtv_info_pane_g1_ParamLimits

0xb0a7,	// (0x00048588) main_mobtv_info_pane_g1

0xb0c5,	// (0x000485a6) main_mobtv_info_pane_t1_ParamLimits

0xb0c5,	// (0x000485a6) main_mobtv_info_pane_t1

0xb13d,	// (0x0004861e) main_mobtv_info_pane_t2_ParamLimits

0xb13d,	// (0x0004861e) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0004d149) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0004d149) main_mobtv_info_pane_t

0xb1cc,	// (0x000486ad) wait_bar_pane_cp05

0xb1de,	// (0x000486bf) main_mobtv_loading_pane_g1_ParamLimits

0xb1de,	// (0x000486bf) main_mobtv_loading_pane_g1

0xb1f1,	// (0x000486d2) main_mobtv_loading_pane_g2_ParamLimits

0xb1f1,	// (0x000486d2) main_mobtv_loading_pane_g2

0xb1fd,	// (0x000486de) main_mobtv_loading_pane_g3_ParamLimits

0xb1fd,	// (0x000486de) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0004d150) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0004d150) main_mobtv_loading_pane_g

0xddb2,	// (0x0004b293) main_mobtv_loading_pane_t1_ParamLimits

0xddb2,	// (0x0004b293) main_mobtv_loading_pane_t1

0xddca,	// (0x0004b2ab) main_mobtv_loading_pane_t2_ParamLimits

0xddca,	// (0x0004b2ab) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0004d157) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0004d157) main_mobtv_loading_pane_t

0xb210,	// (0x000486f1) wait_bar_pane_cp06_ParamLimits

0xb210,	// (0x000486f1) wait_bar_pane_cp06

0xddee,	// (0x0004b2cf) main_mobtv_programe_curr_pane_t1

0xddfc,	// (0x0004b2dd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0004d15c) main_mobtv_programe_curr_pane_t

0xde0a,	// (0x0004b2eb) main_mobtv_programe_next_pane_t1

0xde18,	// (0x0004b2f9) main_mobtv_programe_next_pane_t2

0xde26,	// (0x0004b307) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0004d161) main_mobtv_programe_next_pane_t

0x02ce,	// (0x0003d7af) bg_popup_mobtv_noti_window_pane

0xde34,	// (0x0004b315) popup_mobtv_noti_window_g1

0xde3c,	// (0x0004b31d) popup_mobtv_noti_window_t1

0xde4a,	// (0x0004b32b) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0004d168) popup_mobtv_noti_window_t

0x7f35,	// (0x00045416) bg_popup_mobtv_noti_window_pane_g1

0x02ce,	// (0x0003d7af) sc_clock_pane

0x02ce,	// (0x0003d7af) main_fs_bigclock_pane

0xaa1d,	// (0x00047efe) blid2_tripm_pane_t4_ParamLimits

0xaa1d,	// (0x00047efe) blid2_tripm_pane_t4

0xb21f,	// (0x00048700) sc_clock_pane_g1_ParamLimits

0xb21f,	// (0x00048700) sc_clock_pane_g1

0xb231,	// (0x00048712) sc_clock_pane_t1_ParamLimits

0xb231,	// (0x00048712) sc_clock_pane_t1

0xb253,	// (0x00048734) sc_clock_pane_t2_ParamLimits

0xb253,	// (0x00048734) sc_clock_pane_t2

0xb26b,	// (0x0004874c) sc_clock_pane_t3_ParamLimits

0xb26b,	// (0x0004874c) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0004d16d) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0004d16d) sc_clock_pane_t

0xbb1a,	// (0x00048ffb) main_fs_bigclock_indicator_pane_ParamLimits

0xbb1a,	// (0x00048ffb) main_fs_bigclock_indicator_pane

0x819c,	// (0x0004567d) main_fs_bigclock_pane_g1_ParamLimits

0x819c,	// (0x0004567d) main_fs_bigclock_pane_g1

0xbb26,	// (0x00049007) main_fs_bigclock_pane_t1_ParamLimits

0xbb26,	// (0x00049007) main_fs_bigclock_pane_t1

0xbb38,	// (0x00049019) main_fs_bigclock_pane_t2_ParamLimits

0xbb38,	// (0x00049019) main_fs_bigclock_pane_t2

0xbb4a,	// (0x0004902b) main_fs_bigclock_pane_t3_ParamLimits

0xbb4a,	// (0x0004902b) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0004d36c) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0004d36c) main_fs_bigclock_pane_t

0xea3c,	// (0x0004bf1d) main_fs_bigclock_indicator_pane_g1

0xdb30,	// (0x0004b011) ncim_query_content_pane_g2_ParamLimits

0xdb30,	// (0x0004b011) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0004d0fa) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0004d0fa) ncim_query_content_pane_g

0xb282,	// (0x00048763) sc_clock_pane_t4_ParamLimits

0xb282,	// (0x00048763) sc_clock_pane_t4

0x1a5a,	// (0x0003ef3b) main_radioblah_pane

0xce54,	// (0x0004a335) cell_call4_button_pane_t1_copy1_ParamLimits

0xce54,	// (0x0004a335) cell_call4_button_pane_t1_copy1

0xaf05,	// (0x000483e6) main_ncimui_pane_t1_ParamLimits

0xaf05,	// (0x000483e6) main_ncimui_pane_t1

0xaf17,	// (0x000483f8) main_ncimui_pane_t2_ParamLimits

0xaf17,	// (0x000483f8) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0004d0f3) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0004d0f3) main_ncimui_pane_t

0xdf7a,	// (0x0004b45b) main_radioblah_anim_pane_ParamLimits

0xdf7a,	// (0x0004b45b) main_radioblah_anim_pane

0xdf8b,	// (0x0004b46c) main_radioblah_info_pane_ParamLimits

0xdf8b,	// (0x0004b46c) main_radioblah_info_pane

0xdf9f,	// (0x0004b480) main_radioblah_pane_t1_ParamLimits

0xdf9f,	// (0x0004b480) main_radioblah_pane_t1

0xdfbb,	// (0x0004b49c) main_radioblah_pane_t2_ParamLimits

0xdfbb,	// (0x0004b49c) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0004d18e) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0004d18e) main_radioblah_pane_t

0xb32b,	// (0x0004880c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb32b,	// (0x0004880c) main_radioblah_rocker_ctrl_pane

0xe003,	// (0x0004b4e4) main_radioblah_info_pane_t1_ParamLimits

0xe003,	// (0x0004b4e4) main_radioblah_info_pane_t1

0xb383,	// (0x00048864) main_radioblah_info_pane_t2_ParamLimits

0xb383,	// (0x00048864) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0004d197) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0004d197) main_radioblah_info_pane_t

0x7f35,	// (0x00045416) main_radioblah_rocker_ctrl_pane_g1

0xb435,	// (0x00048916) main_radioblah_rocker_ctrl_pane_g2

0xb43d,	// (0x0004891e) main_radioblah_rocker_ctrl_pane_g3

0xb445,	// (0x00048926) main_radioblah_rocker_ctrl_pane_g4

0xb44d,	// (0x0004892e) main_radioblah_rocker_ctrl_pane_g5

0xb455,	// (0x00048936) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0004d1a0) main_radioblah_rocker_ctrl_pane_g

0xaccc,	// (0x000481ad) main_cset_text2_pane_t1_copy1_ParamLimits

0xefa4,	// (0x0004c485) cam4_image_uncrop_qvga_pane

0xeffd,	// (0x0004c4de) vid4_image_uncrop_qcif_pane

0xf0ed,	// (0x0004c5ce) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ed,	// (0x0004c5ce) cam6_image_uncrop_qvga_pane

0xd787,	// (0x0004ac68) vid6_image_uncrop_qcif_pane_ParamLimits

0xd787,	// (0x0004ac68) vid6_image_uncrop_qcif_pane

0x02ce,	// (0x0003d7af) bg_popup_preview_window_pane_cp03

0xdae2,	// (0x0004afc3) list_cset_text2_pane

0xdaea,	// (0x0004afcb) main_cset6_text2_pane_g1

0xdaf2,	// (0x0004afd3) main_cset6_text2_pane_t1

0xb45d,	// (0x0004893e) list_cset_text2_pane_t1_ParamLimits

0xb45d,	// (0x0004893e) list_cset_text2_pane_t1

0x1a5a,	// (0x0003ef3b) main_radioblah_pane_ParamLimits

0xb1b8,	// (0x00048699) main_mobtv_info_pane_t3_ParamLimits

0xb1b8,	// (0x00048699) main_mobtv_info_pane_t3

0xb319,	// (0x000487fa) main_radioblah_pane_g1

0xb353,	// (0x00048834) main_radioblah_info_pane_g1

0xb3da,	// (0x000488bb) main_radioblah_info_pane_t3_ParamLimits

0xb3da,	// (0x000488bb) main_radioblah_info_pane_t3

0x4b47,	// (0x00042028) highlight_cell_cale_month_pane_ParamLimits

0x4b47,	// (0x00042028) highlight_cell_cale_month_pane

0x02ce,	// (0x0003d7af) main_phob_fisheye_pane

0xc7f4,	// (0x00049cd5) scroll_pane_cp0031_ParamLimits

0xc7f4,	// (0x00049cd5) scroll_pane_cp0031

0xd895,	// (0x0004ad76) wait_bar_pane_cp08_ParamLimits

0xad50,	// (0x00048231) cset_list_set_pane_copy1_ParamLimits

0xe03d,	// (0x0004b51e) highlight_cell_cale_month_pane_g1

0xb47a,	// (0x0004895b) highlight_cell_cale_month_pane_t1

0xd4c6,	// (0x0004a9a7) list_gen_pane_cp01

0xd07a,	// (0x0004a55b) scroll_pane_01

0xe045,	// (0x0004b526) list_single_double_fisheye_pane

0x2ca3,	// (0x00040184) list_double_fisheye_pane_g1_ParamLimits

0x2ca3,	// (0x00040184) list_double_fisheye_pane_g1

0x2caf,	// (0x00040190) list_double_fisheye_pane_g2_ParamLimits

0x2caf,	// (0x00040190) list_double_fisheye_pane_g2

0xb488,	// (0x00048969) list_double_fisheye_pane_g3_ParamLimits

0xb488,	// (0x00048969) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0004d1ad) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0004d1ad) list_double_fisheye_pane_g

0x2ce0,	// (0x000401c1) list_double_fisheye_pane_t1_ParamLimits

0x2ce0,	// (0x000401c1) list_double_fisheye_pane_t1

0x2cfb,	// (0x000401dc) list_double_fisheye_pane_t2_ParamLimits

0x2cfb,	// (0x000401dc) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0004d1b8) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0004d1b8) list_double_fisheye_pane_t

0x02ce,	// (0x0003d7af) main_call5_pane

0xb2ad,	// (0x0004878e) sc_swipe_pane_ParamLimits

0xb2ad,	// (0x0004878e) sc_swipe_pane

0xb4a7,	// (0x00048988) call5_image_pane_ParamLimits

0xb4a7,	// (0x00048988) call5_image_pane

0xb4c4,	// (0x000489a5) call5_swipe_1_pane_ParamLimits

0xb4c4,	// (0x000489a5) call5_swipe_1_pane

0xb4d7,	// (0x000489b8) call5_swipe_2_pane_ParamLimits

0xb4d7,	// (0x000489b8) call5_swipe_2_pane

0xb502,	// (0x000489e3) popup_call5_audio_first_window_ParamLimits

0xb502,	// (0x000489e3) popup_call5_audio_first_window

0x8209,	// (0x000456ea) call5_swipe_1_pane_g1_ParamLimits

0x8209,	// (0x000456ea) call5_swipe_1_pane_g1

0xe04e,	// (0x0004b52f) call5_swipe_1_pane_g2_ParamLimits

0xe04e,	// (0x0004b52f) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0004d1bd) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0004d1bd) call5_swipe_1_pane_g

0xe05a,	// (0x0004b53b) call5_swipe_1_pane_t1_ParamLimits

0xe05a,	// (0x0004b53b) call5_swipe_1_pane_t1

0x8209,	// (0x000456ea) call5_swipe_2_pane_g1_ParamLimits

0x8209,	// (0x000456ea) call5_swipe_2_pane_g1

0xe06f,	// (0x0004b550) call5_swipe_2_pane_g2_ParamLimits

0xe06f,	// (0x0004b550) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0004d1c2) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0004d1c2) call5_swipe_2_pane_g

0xe07b,	// (0x0004b55c) call5_swipe_2_pane_t1_ParamLimits

0xe07b,	// (0x0004b55c) call5_swipe_2_pane_t1

0xe090,	// (0x0004b571) sc_swipe_pane_g1_ParamLimits

0xe090,	// (0x0004b571) sc_swipe_pane_g1

0xe09d,	// (0x0004b57e) sc_swipe_pane_g2_ParamLimits

0xe09d,	// (0x0004b57e) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0004d1c7) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0004d1c7) sc_swipe_pane_g

0xe0a9,	// (0x0004b58a) sc_swipe_pane_t1_ParamLimits

0xe0a9,	// (0x0004b58a) sc_swipe_pane_t1

0x02ce,	// (0x0003d7af) main_cmail_launcher_pane

0xb513,	// (0x000489f4) aid_size_cell_cmail_l_ParamLimits

0xb513,	// (0x000489f4) aid_size_cell_cmail_l

0xb52d,	// (0x00048a0e) grid_cmail_l_pane_ParamLimits

0xb52d,	// (0x00048a0e) grid_cmail_l_pane

0xb548,	// (0x00048a29) cell_cmail_l_pane_ParamLimits

0xb548,	// (0x00048a29) cell_cmail_l_pane

0xb56e,	// (0x00048a4f) cell_cmail_l_pane_g1_ParamLimits

0xb56e,	// (0x00048a4f) cell_cmail_l_pane_g1

0xb57a,	// (0x00048a5b) cell_cmail_l_pane_t1_ParamLimits

0xb57a,	// (0x00048a5b) cell_cmail_l_pane_t1

0xe0be,	// (0x0004b59f) cell_cmail_l_pane_t2_ParamLimits

0xe0be,	// (0x0004b59f) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0004d1cc) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0004d1cc) cell_cmail_l_pane_t

0x1a5a,	// (0x0003ef3b) grid_highlight_pane_cp018_ParamLimits

0x1a5a,	// (0x0003ef3b) grid_highlight_pane_cp018

0x33b5,	// (0x00040896) main2_pane_ParamLimits

0x33b5,	// (0x00040896) main2_pane

0x0b5c,	// (0x0003e03d) popup_sp_fs_action_menu_bg_pane_g1

0x0b64,	// (0x0003e045) popup_sp_fs_action_menu_bg_pane_g2

0x0b6c,	// (0x0003e04d) popup_sp_fs_action_menu_bg_pane_g3

0x0b74,	// (0x0003e055) popup_sp_fs_action_menu_bg_pane_g4

0x0b7c,	// (0x0003e05d) popup_sp_fs_action_menu_bg_pane_g5

0x0b84,	// (0x0003e065) popup_sp_fs_action_menu_bg_pane_g6

0x0b8c,	// (0x0003e06d) popup_sp_fs_action_menu_bg_pane_g7

0x0b94,	// (0x0003e075) popup_sp_fs_action_menu_bg_pane_g8

0x0b9c,	// (0x0003e07d) popup_sp_fs_action_menu_bg_pane_g9

0x0ba4,	// (0x0003e085) popup_sp_fs_action_menu_bg_pane_g10

0x0ba4,	// (0x0003e085) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0004c69c) popup_sp_fs_action_menu_bg_pane_g

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g3_g1

0xc40e,	// (0x000498ef) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_t3_g3_g2

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0004c74c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0004c74c) list_medium_line_x2_t3_g3_g

0xc426,	// (0x00049907) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc426,	// (0x00049907) list_medium_line_x2_t3_g3_t1

0x2911,	// (0x0003fdf2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2911,	// (0x0003fdf2) list_medium_line_x2_t3_g3_t2

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0004c753) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0004c753) list_medium_line_x2_t3_g3_t

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g2_g1

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0004c75a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0004c75a) list_medium_line_x2_t3_g2_g

0xc450,	// (0x00049931) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc450,	// (0x00049931) list_medium_line_x2_t3_g2_t1

0xc466,	// (0x00049947) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc466,	// (0x00049947) list_medium_line_x2_t3_g2_t2

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0004c75f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0004c75f) list_medium_line_x2_t3_g2_t

0xc402,	// (0x000498e3) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t4_g4_g1

0xc478,	// (0x00049959) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc478,	// (0x00049959) list_medium_line_x2_t4_g4_g2

0xc40e,	// (0x000498ef) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_t4_g4_g3

0xc484,	// (0x00049965) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc484,	// (0x00049965) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0004c766) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0004c766) list_medium_line_x2_t4_g4_g

0x2925,	// (0x0003fe06) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2925,	// (0x0003fe06) list_medium_line_x2_t4_g4_t1

0x293f,	// (0x0003fe20) list_medium_line_x2_t4_g4_t2_ParamLimits

0x293f,	// (0x0003fe20) list_medium_line_x2_t4_g4_t2

0x2954,	// (0x0003fe35) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2954,	// (0x0003fe35) list_medium_line_x2_t4_g4_t3

0xc490,	// (0x00049971) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc490,	// (0x00049971) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0004c76f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0004c76f) list_medium_line_x2_t4_g4_t

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g4_g1

0xc478,	// (0x00049959) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc478,	// (0x00049959) list_medium_line_x2_t2_g4_g2

0xc40e,	// (0x000498ef) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_t2_g4_g3

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0004c7d6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0004c7d6) list_medium_line_x2_t2_g4_g

0xc4a2,	// (0x00049983) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc4a2,	// (0x00049983) list_medium_line_x2_t2_g4_t1

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0004c7df) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0004c7df) list_medium_line_x2_t2_g4_t

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g3_g1

0xc40e,	// (0x000498ef) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_t2_g3_g2

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0004c74c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0004c74c) list_medium_line_x2_t2_g3_g

0xc4b7,	// (0x00049998) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc4b7,	// (0x00049998) list_medium_line_x2_t2_g3_t1

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0004c7e4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0004c7e4) list_medium_line_x2_t2_g3_t

0x4d2d,	// (0x0004220e) main_sp_fs_list_pane_ParamLimits

0x4d2d,	// (0x0004220e) main_sp_fs_list_pane

0x4d39,	// (0x0004221a) sp_fs_scroll_pane_ParamLimits

0x4d39,	// (0x0004221a) sp_fs_scroll_pane

0x2969,	// (0x0003fe4a) list_medium_line_x2_t3_t1

0x2979,	// (0x0003fe5a) list_medium_line_x2_t3_t2

0xc4fa,	// (0x000499db) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0004c82f) list_medium_line_x2_t3_t

0x2987,	// (0x0003fe68) list_medium_line_x3_t4_t1

0x2997,	// (0x0003fe78) list_medium_line_x3_t4_t2

0xc508,	// (0x000499e9) list_medium_line_x3_t4_t3

0xc4fa,	// (0x000499db) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0004c836) list_medium_line_x3_t4_t

0x29a5,	// (0x0003fe86) list_medium_line_x4_t5_t1

0x29b5,	// (0x0003fe96) list_medium_line_x4_t5_t2

0xc508,	// (0x000499e9) list_medium_line_x4_t5_t3

0xc516,	// (0x000499f7) list_medium_line_x4_t5_t4

0xc4fa,	// (0x000499db) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0004c83f) list_medium_line_x4_t5_t

0xc402,	// (0x000498e3) list_medium_line_t4_g4_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_t4_g4_g1

0xc484,	// (0x00049965) list_medium_line_t4_g4_g2_ParamLimits

0xc484,	// (0x00049965) list_medium_line_t4_g4_g2

0xc524,	// (0x00049a05) list_medium_line_t4_g4_g3_ParamLimits

0xc524,	// (0x00049a05) list_medium_line_t4_g4_g3

0xc41a,	// (0x000498fb) list_medium_line_t4_g4_g4_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0004c84a) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0004c84a) list_medium_line_t4_g4_g

0xc530,	// (0x00049a11) list_medium_line_t4_g4_t1_ParamLimits

0xc530,	// (0x00049a11) list_medium_line_t4_g4_t1

0xc545,	// (0x00049a26) list_medium_line_t4_g4_t2_ParamLimits

0xc545,	// (0x00049a26) list_medium_line_t4_g4_t2

0xc55a,	// (0x00049a3b) list_medium_line_t4_g4_t3_ParamLimits

0xc55a,	// (0x00049a3b) list_medium_line_t4_g4_t3

0xc43b,	// (0x0004991c) list_medium_line_t4_g4_t4_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0004c853) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0004c853) list_medium_line_t4_g4_t

0x4de3,	// (0x000422c4) chi_dic_find_pane_g1

0x6dd2,	// (0x000442b3) main_tport_pane

0xd197,	// (0x0004a678) list_medium_line_plain_t1

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g2_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g2_g1

0xd1b9,	// (0x0004a69a) list_medium_line_t2_g2_g2_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0004cf0f) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0004cf0f) list_medium_line_t2_g2_g

0x2b88,	// (0x00040069) list_medium_line_t2_g2_t1_ParamLimits

0x2b88,	// (0x00040069) list_medium_line_t2_g2_t1

0x2ba2,	// (0x00040083) list_medium_line_t2_g2_t2_ParamLimits

0x2ba2,	// (0x00040083) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0004cf14) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0004cf14) list_medium_line_t2_g2_t

0xd4cf,	// (0x0004a9b0) aid_sp_fs_list_icon_a_sm

0xd4d7,	// (0x0004a9b8) aid_sp_fs_list_icon_d

0xd4df,	// (0x0004a9c0) aid_sp_fs_text_primary

0xd4e8,	// (0x0004a9c9) aid_sp_fs_text_secondary

0xd4f1,	// (0x0004a9d2) list_medium_line

0xd4f1,	// (0x0004a9d2) list_medium_line_g2

0xd4f1,	// (0x0004a9d2) list_medium_line_g3

0xd4f1,	// (0x0004a9d2) list_medium_line_plain

0xd4f1,	// (0x0004a9d2) list_medium_line_plain_t2

0xd4f1,	// (0x0004a9d2) list_medium_line_plain_t3

0xd4f1,	// (0x0004a9d2) list_medium_line_right_icon

0xd4f1,	// (0x0004a9d2) list_medium_line_right_iconx2

0xd4f1,	// (0x0004a9d2) list_medium_line_t2

0xd4f1,	// (0x0004a9d2) list_medium_line_t2_g2

0xd4f1,	// (0x0004a9d2) list_medium_line_t2_g3

0xd4f1,	// (0x0004a9d2) list_medium_line_t2_right_icon

0xd4f1,	// (0x0004a9d2) list_medium_line_t2_right_iconx2

0xd4f1,	// (0x0004a9d2) list_medium_line_t3

0xd4f1,	// (0x0004a9d2) list_medium_line_t3_g2

0xd4f1,	// (0x0004a9d2) list_medium_line_t3_g3

0xd4f1,	// (0x0004a9d2) list_medium_line_t3_right_iconx2

0xd4fa,	// (0x0004a9db) list_medium_line_t4_g4

0xd503,	// (0x0004a9e4) list_medium_line_x2

0xd503,	// (0x0004a9e4) list_medium_line_x2_t2_g2

0xd503,	// (0x0004a9e4) list_medium_line_x2_t2_g3

0xd503,	// (0x0004a9e4) list_medium_line_x2_t2_g4

0xd503,	// (0x0004a9e4) list_medium_line_x2_t3

0xd503,	// (0x0004a9e4) list_medium_line_x2_t3_g2

0xd503,	// (0x0004a9e4) list_medium_line_x2_t3_g3

0xd503,	// (0x0004a9e4) list_medium_line_x2_t3_g4

0xd503,	// (0x0004a9e4) list_medium_line_x2_t4_g2

0xd503,	// (0x0004a9e4) list_medium_line_x2_t4_g4

0xd50c,	// (0x0004a9ed) list_medium_line_x3

0xd50c,	// (0x0004a9ed) list_medium_line_x3_t4

0xd50c,	// (0x0004a9ed) list_medium_line_x3_t4_g4

0xd4fa,	// (0x0004a9db) list_medium_line_x4_t4

0xd4fa,	// (0x0004a9db) list_medium_line_x4_t4_g7

0xd4fa,	// (0x0004a9db) list_medium_line_x4_t5

0xd515,	// (0x0004a9f6) list_single_fs_dyc_pane_ParamLimits

0xd515,	// (0x0004a9f6) list_single_fs_dyc_pane

0xc402,	// (0x000498e3) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x4_t4_g7_g1

0xda11,	// (0x0004aef2) list_medium_line_x4_t4_g7_g2_ParamLimits

0xda11,	// (0x0004aef2) list_medium_line_x4_t4_g7_g2

0xda1d,	// (0x0004aefe) list_medium_line_x4_t4_g7_g3_ParamLimits

0xda1d,	// (0x0004aefe) list_medium_line_x4_t4_g7_g3

0xda2c,	// (0x0004af0d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xda2c,	// (0x0004af0d) list_medium_line_x4_t4_g7_g4

0xda38,	// (0x0004af19) list_medium_line_x4_t4_g7_g5_ParamLimits

0xda38,	// (0x0004af19) list_medium_line_x4_t4_g7_g5

0xda47,	// (0x0004af28) list_medium_line_x4_t4_g7_g6_ParamLimits

0xda47,	// (0x0004af28) list_medium_line_x4_t4_g7_g6

0xda56,	// (0x0004af37) list_medium_line_x4_t4_g7_g7_ParamLimits

0xda56,	// (0x0004af37) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0004d0d9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0004d0d9) list_medium_line_x4_t4_g7_g

0xda62,	// (0x0004af43) list_medium_line_x4_t4_g7_t1_ParamLimits

0xda62,	// (0x0004af43) list_medium_line_x4_t4_g7_t1

0xda77,	// (0x0004af58) list_medium_line_x4_t4_g7_t2_ParamLimits

0xda77,	// (0x0004af58) list_medium_line_x4_t4_g7_t2

0xda8c,	// (0x0004af6d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xda8c,	// (0x0004af6d) list_medium_line_x4_t4_g7_t3

0xdaa1,	// (0x0004af82) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdaa1,	// (0x0004af82) list_medium_line_x4_t4_g7_t4

0xdab3,	// (0x0004af94) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdab3,	// (0x0004af94) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0004d0e8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0004d0e8) list_medium_line_x4_t4_g7_t

0xdac5,	// (0x0004afa6) list_single_dyc_row_pane_ParamLimits

0xdac5,	// (0x0004afa6) list_single_dyc_row_pane

0xb494,	// (0x00048975) call5_gesture_pane_ParamLimits

0xb494,	// (0x00048975) call5_gesture_pane

0xb4ea,	// (0x000489cb) call5_windows_pane_ParamLimits

0xb4ea,	// (0x000489cb) call5_windows_pane

0xb590,	// (0x00048a71) call5_swipe_1_pane_cp_ParamLimits

0xb590,	// (0x00048a71) call5_swipe_1_pane_cp

0xb59c,	// (0x00048a7d) call5_swipe_2_pane_cp_ParamLimits

0xb59c,	// (0x00048a7d) call5_swipe_2_pane_cp

0x1541,	// (0x0003ea22) call5_image_pane_cp

0xb5a8,	// (0x00048a89) popup_call5_audio_first_window_cp_ParamLimits

0xb5a8,	// (0x00048a89) popup_call5_audio_first_window_cp

0xe090,	// (0x0004b571) call5_swipe_1_pane_g1_cp_ParamLimits

0xe090,	// (0x0004b571) call5_swipe_1_pane_g1_cp

0xe0d0,	// (0x0004b5b1) call5_swipe_1_pane_g2_cp

0xe0a9,	// (0x0004b58a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe0a9,	// (0x0004b58a) call5_swipe_1_pane_t1_cp

0xe090,	// (0x0004b571) call5_swipe_2_pane_g1_cp_ParamLimits

0xe090,	// (0x0004b571) call5_swipe_2_pane_g1_cp

0xe0d8,	// (0x0004b5b9) call5_swipe_2_pane_g2_cp

0xe0e0,	// (0x0004b5c1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe0e0,	// (0x0004b5c1) call5_swipe_2_pane_t1_cp

0x1a5a,	// (0x0003ef3b) main_sp_fs_email_pane

0xe0f5,	// (0x0004b5d6) main_sp_fs_listscroll_pane_te

0xe0fe,	// (0x0004b5df) popup_sp_fs_action_menu_pane_ParamLimits

0xe0fe,	// (0x0004b5df) popup_sp_fs_action_menu_pane

0x7f35,	// (0x00045416) bg_sp_fs_ctrlbar_pane_g1

0xe13e,	// (0x0004b61f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe147,	// (0x0004b628) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe150,	// (0x0004b631) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x7f35,	// (0x00045416) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0004d1d1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x7c4c,	// (0x0004512d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x7c4c,	// (0x0004512d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe159,	// (0x0004b63a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe159,	// (0x0004b63a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe165,	// (0x0004b646) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe165,	// (0x0004b646) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0004d1da) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0004d1da) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe171,	// (0x0004b652) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe171,	// (0x0004b652) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe18b,	// (0x0004b66c) list_medium_line_t2_right_icon_g1

0x2d1d,	// (0x000401fe) list_medium_line_t2_right_icon_t1

0x2d2d,	// (0x0004020e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0004d1df) list_medium_line_t2_right_icon_t

0x6db0,	// (0x00044291) bg_sp_fs_ctrlbar_pane_ParamLimits

0x6db0,	// (0x00044291) bg_sp_fs_ctrlbar_pane

0xb5fc,	// (0x00048add) main_sp_fs_ctrlbar_button_pane_cp01

0xb604,	// (0x00048ae5) main_sp_fs_ctrlbar_ddmenu_pane

0x1a8b,	// (0x0003ef6c) main_sp_fs_ctrlbar_pane_g1

0xe1cb,	// (0x0004b6ac) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0004d1e4) main_sp_fs_ctrlbar_pane_g

0xe1d7,	// (0x0004b6b8) main_sp_fs_ctrlbar_pane_t1

0x2d3d,	// (0x0004021e) main_sp_fs_ctrlbar_pane

0x2d61,	// (0x00040242) main_sp_fs_listscroll_pane_te_cp01

0x2d81,	// (0x00040262) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2d81,	// (0x00040262) popup_sp_fs_action_menu_pane_cp01

0x1a5a,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp01

0xe1ec,	// (0x0004b6cd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe1ec,	// (0x0004b6cd) sp_fs_action_menu_list_gene_pane_g1

0xe1fb,	// (0x0004b6dc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe1fb,	// (0x0004b6dc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0004d1e9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0004d1e9) sp_fs_action_menu_list_gene_pane_g

0xe208,	// (0x0004b6e9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe208,	// (0x0004b6e9) sp_fs_action_menu_list_gene_pane_t1

0xe220,	// (0x0004b701) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe220,	// (0x0004b701) sp_fs_action_menu_list_gene_pane

0xe23d,	// (0x0004b71e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe23d,	// (0x0004b71e) popup_sp_fs_action_menu_bg_pane

0xe24b,	// (0x0004b72c) sp_fs_action_menu_list_pane_ParamLimits

0xe24b,	// (0x0004b72c) sp_fs_action_menu_list_pane

0xe269,	// (0x0004b74a) sp_fs_scroll_pane_cp01_ParamLimits

0xe269,	// (0x0004b74a) sp_fs_scroll_pane_cp01

0x2d9b,	// (0x0004027c) list_medium_line_plain_t2_t1

0x2dab,	// (0x0004028c) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0004d1ee) list_medium_line_plain_t2_t

0x2dbb,	// (0x0004029c) list_medium_line_plain_t3_t1

0x2dcb,	// (0x000402ac) list_medium_line_plain_t3_t2

0x2dd9,	// (0x000402ba) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0004d1f3) list_medium_line_plain_t3_t

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t2_g2_g1

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0004c75a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0004c75a) list_medium_line_x2_t2_g2_g

0xc530,	// (0x00049a11) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc530,	// (0x00049a11) list_medium_line_x2_t2_g2_t1

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0004d1fa) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0004d1fa) list_medium_line_x2_t2_g2_t

0xc402,	// (0x000498e3) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t4_g2_g1

0xe28f,	// (0x0004b770) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe28f,	// (0x0004b770) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0004d1ff) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0004d1ff) list_medium_line_x2_t4_g2_g

0x2de7,	// (0x000402c8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2de7,	// (0x000402c8) list_medium_line_x2_t4_g2_t1

0x2dfe,	// (0x000402df) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2dfe,	// (0x000402df) list_medium_line_x2_t4_g2_t2

0x2e13,	// (0x000402f4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2e13,	// (0x000402f4) list_medium_line_x2_t4_g2_t3

0xc43b,	// (0x0004991c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0004d204) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0004d204) list_medium_line_x2_t4_g2_t

0xe2a1,	// (0x0004b782) list_medium_line_t3_right_iconx2_g1

0xe18b,	// (0x0004b66c) list_medium_line_t3_right_iconx2_g2

0x2e25,	// (0x00040306) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0004d20d) list_medium_line_t3_right_iconx2_g

0x2e2f,	// (0x00040310) list_medium_line_t3_right_iconx2_t1

0x2e3f,	// (0x00040320) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0004d214) list_medium_line_t3_right_iconx2_t

0xc402,	// (0x000498e3) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x3_t4_g4_g1

0xc40e,	// (0x000498ef) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x3_t4_g4_g2

0xc484,	// (0x00049965) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc484,	// (0x00049965) list_medium_line_x3_t4_g4_g3

0xe2a9,	// (0x0004b78a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe2a9,	// (0x0004b78a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0004d219) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0004d219) list_medium_line_x3_t4_g4_g

0x2e4d,	// (0x0004032e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2e4d,	// (0x0004032e) list_medium_line_x3_t4_g4_t1

0x2e64,	// (0x00040345) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2e64,	// (0x00040345) list_medium_line_x3_t4_g4_t2

0xc545,	// (0x00049a26) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc545,	// (0x00049a26) list_medium_line_x3_t4_g4_t3

0xe2b5,	// (0x0004b796) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe2b5,	// (0x0004b796) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0004d222) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0004d222) list_medium_line_x3_t4_g4_t

0x2e7d,	// (0x0004035e) list_single_dyc_row_text_pane_t1_ParamLimits

0x2e7d,	// (0x0004035e) list_single_dyc_row_text_pane_t1

0x2ec6,	// (0x000403a7) list_single_dyc_row_text_pane_t2_ParamLimits

0x2ec6,	// (0x000403a7) list_single_dyc_row_text_pane_t2

0xe2d2,	// (0x0004b7b3) list_single_dyc_row_text_pane_t3_ParamLimits

0xe2d2,	// (0x0004b7b3) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0004d22b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0004d22b) list_single_dyc_row_text_pane_t

0xe2e4,	// (0x0004b7c5) list_single_dyc_row_pane_g1_ParamLimits

0xe2e4,	// (0x0004b7c5) list_single_dyc_row_pane_g1

0xe2f0,	// (0x0004b7d1) list_single_dyc_row_pane_g2_ParamLimits

0xe2f0,	// (0x0004b7d1) list_single_dyc_row_pane_g2

0xe2fc,	// (0x0004b7dd) list_single_dyc_row_pane_g3_ParamLimits

0xe2fc,	// (0x0004b7dd) list_single_dyc_row_pane_g3

0xe308,	// (0x0004b7e9) list_single_dyc_row_pane_g4_ParamLimits

0xe308,	// (0x0004b7e9) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0004d232) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0004d232) list_single_dyc_row_pane_g

0xe314,	// (0x0004b7f5) list_single_dyc_row_text_pane_ParamLimits

0xe314,	// (0x0004b7f5) list_single_dyc_row_text_pane

0x02ce,	// (0x0003d7af) bg_sp_fs_scroll_pane

0xe333,	// (0x0004b814) thumb_sp_fs_scroll_pane

0xd1ad,	// (0x0004a68e) list_medium_line_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_g1

0xe33c,	// (0x0004b81d) list_medium_line_t1_ParamLimits

0xe33c,	// (0x0004b81d) list_medium_line_t1

0xc402,	// (0x000498e3) list_medium_line_x2_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_g1

0xc40e,	// (0x000498ef) list_medium_line_x2_g2_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0004d23b) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0004d23b) list_medium_line_x2_g

0xe351,	// (0x0004b832) list_medium_line_x2_t1_ParamLimits

0xe351,	// (0x0004b832) list_medium_line_x2_t1

0xc402,	// (0x000498e3) list_medium_line_x3_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x3_g1

0xc40e,	// (0x000498ef) list_medium_line_x3_g2_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0004d23b) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0004d23b) list_medium_line_x3_g

0xe351,	// (0x0004b832) list_medium_line_x3_t1_ParamLimits

0xe351,	// (0x0004b832) list_medium_line_x3_t1

0xe367,	// (0x0004b848) thumb_sp_fs_scroll_pane_g1

0xe370,	// (0x0004b851) thumb_sp_fs_scroll_pane_g2

0xe379,	// (0x0004b85a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0004d240) thumb_sp_fs_scroll_pane_g

0xe367,	// (0x0004b848) bg_sp_fs_scroll_pane_g1

0xe370,	// (0x0004b851) bg_sp_fs_scroll_pane_g2

0xe379,	// (0x0004b85a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0004d240) bg_sp_fs_scroll_pane_g

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc402,	// (0x000498e3) list_medium_line_x2_t3_g4_g1

0xc478,	// (0x00049959) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc478,	// (0x00049959) list_medium_line_x2_t3_g4_g2

0xc40e,	// (0x000498ef) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc40e,	// (0x000498ef) list_medium_line_x2_t3_g4_g3

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc41a,	// (0x000498fb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0004c7d6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0004c7d6) list_medium_line_x2_t3_g4_g

0x2f20,	// (0x00040401) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2f20,	// (0x00040401) list_medium_line_x2_t3_g4_t1

0x2f36,	// (0x00040417) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2f36,	// (0x00040417) list_medium_line_x2_t3_g4_t2

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc43b,	// (0x0004991c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0004d247) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0004d247) list_medium_line_x2_t3_g4_t

0xd1ad,	// (0x0004a68e) list_medium_line_g2_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_g2_g1

0xd1b9,	// (0x0004a69a) list_medium_line_g2_g2_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0004cf0f) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0004cf0f) list_medium_line_g2_g

0xe382,	// (0x0004b863) list_medium_line_g2_t1_ParamLimits

0xe382,	// (0x0004b863) list_medium_line_g2_t1

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g2_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g2_g1

0xd1b9,	// (0x0004a69a) list_medium_line_t3_g2_g2_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0004cf0f) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0004cf0f) list_medium_line_t3_g2_g

0x2f4f,	// (0x00040430) list_medium_line_t3_g2_t1_ParamLimits

0x2f4f,	// (0x00040430) list_medium_line_t3_g2_t1

0x2f66,	// (0x00040447) list_medium_line_t3_g2_t2_ParamLimits

0x2f66,	// (0x00040447) list_medium_line_t3_g2_t2

0x2f7b,	// (0x0004045c) list_medium_line_t3_g2_t3_ParamLimits

0x2f7b,	// (0x0004045c) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0004d24e) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0004d24e) list_medium_line_t3_g2_t

0xe18b,	// (0x0004b66c) list_medium_line_right_icon_g1

0xe397,	// (0x0004b878) list_medium_line_right_icon_t1

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g1

0x2f94,	// (0x00040475) list_medium_line_t2_t1_ParamLimits

0x2f94,	// (0x00040475) list_medium_line_t2_t1

0x2fab,	// (0x0004048c) list_medium_line_t2_t2_ParamLimits

0x2fab,	// (0x0004048c) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0004d255) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0004d255) list_medium_line_t2_t

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g1

0x2fbd,	// (0x0004049e) list_medium_line_t3_t1_ParamLimits

0x2fbd,	// (0x0004049e) list_medium_line_t3_t1

0x2fd4,	// (0x000404b5) list_medium_line_t3_t2_ParamLimits

0x2fd4,	// (0x000404b5) list_medium_line_t3_t2

0x2fe9,	// (0x000404ca) list_medium_line_t3_t3_ParamLimits

0x2fe9,	// (0x000404ca) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0004d25a) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0004d25a) list_medium_line_t3_t

0xd1ad,	// (0x0004a68e) list_medium_line_g3_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_g3_g1

0xe3a5,	// (0x0004b886) list_medium_line_g3_g2_ParamLimits

0xe3a5,	// (0x0004b886) list_medium_line_g3_g2

0xd1b9,	// (0x0004a69a) list_medium_line_g3_g3_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0004d261) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0004d261) list_medium_line_g3_g

0xe3b1,	// (0x0004b892) list_medium_line_g3_t1_ParamLimits

0xe3b1,	// (0x0004b892) list_medium_line_g3_t1

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g3_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t2_g3_g1

0xe3a5,	// (0x0004b886) list_medium_line_t2_g3_g2_ParamLimits

0xe3a5,	// (0x0004b886) list_medium_line_t2_g3_g2

0xd1b9,	// (0x0004a69a) list_medium_line_t2_g3_g3_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0004d261) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0004d261) list_medium_line_t2_g3_g

0x2ffb,	// (0x000404dc) list_medium_line_t2_g3_t1_ParamLimits

0x2ffb,	// (0x000404dc) list_medium_line_t2_g3_t1

0x3015,	// (0x000404f6) list_medium_line_t2_g3_t2_ParamLimits

0x3015,	// (0x000404f6) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0004d268) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0004d268) list_medium_line_t2_g3_t

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g3_g1_ParamLimits

0xd1ad,	// (0x0004a68e) list_medium_line_t3_g3_g1

0xe3a5,	// (0x0004b886) list_medium_line_t3_g3_g2_ParamLimits

0xe3a5,	// (0x0004b886) list_medium_line_t3_g3_g2

0xd1b9,	// (0x0004a69a) list_medium_line_t3_g3_g3_ParamLimits

0xd1b9,	// (0x0004a69a) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0004d261) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0004d261) list_medium_line_t3_g3_g

0x302c,	// (0x0004050d) list_medium_line_t3_g3_t1_ParamLimits

0x302c,	// (0x0004050d) list_medium_line_t3_g3_t1

0x3040,	// (0x00040521) list_medium_line_t3_g3_t2_ParamLimits

0x3040,	// (0x00040521) list_medium_line_t3_g3_t2

0x3052,	// (0x00040533) list_medium_line_t3_g3_t3_ParamLimits

0x3052,	// (0x00040533) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0004d26d) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0004d26d) list_medium_line_t3_g3_t

0xe2a1,	// (0x0004b782) list_medium_line_right_iconx2_g1

0xe18b,	// (0x0004b66c) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0004d274) list_medium_line_right_iconx2_g

0xe3c6,	// (0x0004b8a7) list_medium_line_right_iconx2_t1

0xe2a1,	// (0x0004b782) list_medium_line_t2_right_iconx2_g1

0xe18b,	// (0x0004b66c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0004d274) list_medium_line_t2_right_iconx2_g

0x3066,	// (0x00040547) list_medium_line_t2_right_iconx2_t1

0x3076,	// (0x00040557) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0004d279) list_medium_line_t2_right_iconx2_t

0xe3d4,	// (0x0004b8b5) list_medium_line_x4_t4_t1

0x3084,	// (0x00040565) list_medium_line_x4_t4_t2

0x3094,	// (0x00040575) list_medium_line_x4_t4_t3

0x30a4,	// (0x00040585) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0004d27e) list_medium_line_x4_t4_t

0xb651,	// (0x00048b32) tport_appsw_pane_ParamLimits

0xb651,	// (0x00048b32) tport_appsw_pane

0xb662,	// (0x00048b43) tport_contact_pane_ParamLimits

0xb662,	// (0x00048b43) tport_contact_pane

0xb67b,	// (0x00048b5c) tport_listscroll_pane_ParamLimits

0xb67b,	// (0x00048b5c) tport_listscroll_pane

0xb696,	// (0x00048b77) cell_tport_appsw_pane_ParamLimits

0xb696,	// (0x00048b77) cell_tport_appsw_pane

0xcef1,	// (0x0004a3d2) tport_appsw_pane_g1_ParamLimits

0xcef1,	// (0x0004a3d2) tport_appsw_pane_g1

0xe3e2,	// (0x0004b8c3) tport_contact_pane_g1

0xe3eb,	// (0x0004b8cc) tport_contact_pane_t1

0xe3f9,	// (0x0004b8da) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0004d287) tport_contact_pane_t

0xe407,	// (0x0004b8e8) list_tport_pane

0xe410,	// (0x0004b8f1) scroll_pane_cp_030

0xe421,	// (0x0004b902) cell_tport_appsw_pane_g1

0xe431,	// (0x0004b912) cell_tport_appsw_pane_t1

0x02ce,	// (0x0003d7af) grid_highlight_pane_cp019

0xb6d6,	// (0x00048bb7) list_tport_double_graphic_pane_ParamLimits

0xb6d6,	// (0x00048bb7) list_tport_double_graphic_pane

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp023_ParamLimits

0x1a5a,	// (0x0003ef3b) list_highlight_pane_cp023

0xb6e3,	// (0x00048bc4) list_tport_double_graphic_pane_g1_ParamLimits

0xb6e3,	// (0x00048bc4) list_tport_double_graphic_pane_g1

0xb6f0,	// (0x00048bd1) list_tport_double_graphic_pane_t1_ParamLimits

0xb6f0,	// (0x00048bd1) list_tport_double_graphic_pane_t1

0xb705,	// (0x00048be6) list_tport_double_graphic_pane_t2_ParamLimits

0xb705,	// (0x00048be6) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0004d293) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0004d293) list_tport_double_graphic_pane_t

0x02ce,	// (0x0003d7af) main_cale_note_pane

0x9b85,	// (0x00047066) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9b85,	// (0x00047066) cell_vitu2_function_top_wide_pane_cp01

0xb1cc,	// (0x000486ad) wait_bar_pane_cp05_ParamLimits

0x02ce,	// (0x0003d7af) listscroll_cmail_pane

0xe447,	// (0x0004b928) list_cmail_pane

0xb721,	// (0x00048c02) list_cmail_body_pane

0xb739,	// (0x00048c1a) list_single_cmail_header_caption_pane

0xb755,	// (0x00048c36) list_single_cmail_header_detail_pane_ParamLimits

0xb755,	// (0x00048c36) list_single_cmail_header_detail_pane

0xb781,	// (0x00048c62) list_single_cmail_header_caption_pane_t1

0x30b4,	// (0x00040595) list_single_cmail_header_detail_pane_g1_ParamLimits

0x30b4,	// (0x00040595) list_single_cmail_header_detail_pane_g1

0xe467,	// (0x0004b948) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe467,	// (0x0004b948) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0004d298) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0004d298) list_single_cmail_header_detail_pane_g

0xe480,	// (0x0004b961) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe480,	// (0x0004b961) list_single_cmail_header_detail_pane_t1

0xe4b2,	// (0x0004b993) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe4b2,	// (0x0004b993) list_single_cmail_header_editor_pane_bg

0xe4c4,	// (0x0004b9a5) list_cmail_body_pane_g1

0xe4cd,	// (0x0004b9ae) list_cmail_body_pane_t1

0xcf60,	// (0x0004a441) list_single_cmail_header_editor_pane_bg_g1

0x0ec9,	// (0x0003e3aa) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf70,	// (0x0004a451) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf68,	// (0x0004a449) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1a5,	// (0x0004a686) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf90,	// (0x0004a471) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf80,	// (0x0004a461) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf88,	// (0x0004a469) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ea9,	// (0x0003e38a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb791,	// (0x00048c72) calenote_gesture_pane_ParamLimits

0xb791,	// (0x00048c72) calenote_gesture_pane

0xb7b1,	// (0x00048c92) calenote_window_pane_ParamLimits

0xb7b1,	// (0x00048c92) calenote_window_pane

0xe4db,	// (0x0004b9bc) popup_note_window_cp01

0xb7cd,	// (0x00048cae) calenote_swipe_1_pane_ParamLimits

0xb7cd,	// (0x00048cae) calenote_swipe_1_pane

0xb59c,	// (0x00048a7d) calenote_swipe_2_pane_ParamLimits

0xb59c,	// (0x00048a7d) calenote_swipe_2_pane

0xe090,	// (0x0004b571) calenote_swipe_1_pane_g1_ParamLimits

0xe090,	// (0x0004b571) calenote_swipe_1_pane_g1

0xe09d,	// (0x0004b57e) calenote_swipe_1_pane_g2_ParamLimits

0xe09d,	// (0x0004b57e) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0004d1c7) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0004d1c7) calenote_swipe_1_pane_g

0xe4ed,	// (0x0004b9ce) calenote_swipe_1_pane_t1_ParamLimits

0xe4ed,	// (0x0004b9ce) calenote_swipe_1_pane_t1

0xe090,	// (0x0004b571) calenote_swipe_2_pane_g1_ParamLimits

0xe090,	// (0x0004b571) calenote_swipe_2_pane_g1

0xe50c,	// (0x0004b9ed) calenote_swipe_2_pane_g2_ParamLimits

0xe50c,	// (0x0004b9ed) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0004d2a4) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0004d2a4) calenote_swipe_2_pane_g

0xe518,	// (0x0004b9f9) calenote_swipe_2_pane_t1_ParamLimits

0xe518,	// (0x0004b9f9) calenote_swipe_2_pane_t1

0x02ce,	// (0x0003d7af) main_mup_navstr_pane

0x8806,	// (0x00045ce7) main_mup3_pane_t7_ParamLimits

0x8806,	// (0x00045ce7) main_mup3_pane_t7

0xedce,	// (0x0004c2af) main_mp4_pane_g6_ParamLimits

0xedce,	// (0x0004c2af) main_mp4_pane_g6

0xef72,	// (0x0004c453) main_image3_pane_t4_ParamLimits

0xef72,	// (0x0004c453) main_image3_pane_t4

0xb7e2,	// (0x00048cc3) popup_navstr_preview_pane_ParamLimits

0xb7e2,	// (0x00048cc3) popup_navstr_preview_pane

0xb7f6,	// (0x00048cd7) scroll_navstr_pane_ParamLimits

0xb7f6,	// (0x00048cd7) scroll_navstr_pane

0x02ce,	// (0x0003d7af) bg_popup_preview_window_pane_cp04

0xe53f,	// (0x0004ba20) popup_navstr_preview_pane_t1

0xb80a,	// (0x00048ceb) scroll_navstr_pane_g1_ParamLimits

0xb80a,	// (0x00048ceb) scroll_navstr_pane_g1

0xb81e,	// (0x00048cff) scroll_navstr_pane_t1_ParamLimits

0xb81e,	// (0x00048cff) scroll_navstr_pane_t1

0xe4e4,	// (0x0004b9c5) bg_button_pane_cp014

0xe4e4,	// (0x0004b9c5) bg_button_pane_cp030

0x2cc3,	// (0x000401a4) list_double_fisheye_pane_g4_ParamLimits

0x2cc3,	// (0x000401a4) list_double_fisheye_pane_g4

0x2ccf,	// (0x000401b0) list_double_fisheye_pane_g5_ParamLimits

0x2ccf,	// (0x000401b0) list_double_fisheye_pane_g5

0xe44f,	// (0x0004b930) sp_fs_scroll_pane_cp03

0x1a8b,	// (0x0003ef6c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe1cb,	// (0x0004b6ac) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0004d1e4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe1d7,	// (0x0004b6b8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb717,	// (0x00048bf8) sp_fs_scroll_pane_cp02

0x0bc7,	// (0x0003e0a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0bc7,	// (0x0003e0a8) popup_sp_fs_calendar_preview_list_single_pane

0x02ce,	// (0x0003d7af) main_cam6_pano_pane

0x1a5a,	// (0x0003ef3b) main_mup3_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_phacti_pane

0xb09f,	// (0x00048580) bg_button_pane_cp11

0xb0b9,	// (0x0004859a) main_mobtv_info_pane_g2_ParamLimits

0xb0b9,	// (0x0004859a) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0004d144) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0004d144) main_mobtv_info_pane_g

0xb294,	// (0x00048775) sc_clock_pane_t5_ParamLimits

0xb294,	// (0x00048775) sc_clock_pane_t5

0xb319,	// (0x000487fa) main_radioblah_pane_g1_ParamLimits

0xdfd3,	// (0x0004b4b4) main_radioblah_pane_t3_ParamLimits

0xdfd3,	// (0x0004b4b4) main_radioblah_pane_t3

0xdfeb,	// (0x0004b4cc) main_radioblah_pane_t4_ParamLimits

0xdfeb,	// (0x0004b4cc) main_radioblah_pane_t4

0xb341,	// (0x00048822) main_radioblah_text_pane_ParamLimits

0xb341,	// (0x00048822) main_radioblah_text_pane

0xb353,	// (0x00048834) main_radioblah_info_pane_g1_ParamLimits

0xb3ee,	// (0x000488cf) main_radioblah_info_pane_t4_ParamLimits

0xb3ee,	// (0x000488cf) main_radioblah_info_pane_t4

0x1a5a,	// (0x0003ef3b) main_sp_fs_calendar_pane

0xb834,	// (0x00048d15) main_phacti_pane_g1

0xb83c,	// (0x00048d1d) phacti_note_pane_ParamLimits

0xb83c,	// (0x00048d1d) phacti_note_pane

0xe556,	// (0x0004ba37) phacti_term_pane_ParamLimits

0xe556,	// (0x0004ba37) phacti_term_pane

0xe56b,	// (0x0004ba4c) phacti_note_pane_t1_ParamLimits

0xe56b,	// (0x0004ba4c) phacti_note_pane_t1

0xe582,	// (0x0004ba63) phacti_term_pane_g1

0xe58a,	// (0x0004ba6b) phacti_term_pane_t1_ParamLimits

0xe58a,	// (0x0004ba6b) phacti_term_pane_t1

0xe5b4,	// (0x0004ba95) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5bc,	// (0x0004ba9d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0004d2ae) popup_sp_fs_calendar_preview_list_single_pane_g

0xe5c4,	// (0x0004baa5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe5c4,	// (0x0004baa5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe5da,	// (0x0004babb) aid_popup_sp_fs_bg_corner_pane

0x7f35,	// (0x00045416) popup_sp_fs_calendar_preview_bg_pane_g1

0x02ce,	// (0x0003d7af) popup_sp_fs_calendar_preview_bg_pane

0xe5e2,	// (0x0004bac3) popup_sp_fs_calendar_preview_list_pane

0x1a5a,	// (0x0003ef3b) bg_main_sp_fs_cale_pane_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_main_sp_fs_cale_pane

0xe5ea,	// (0x0004bacb) listscroll_cale_mrui_pane_ParamLimits

0xe5ea,	// (0x0004bacb) listscroll_cale_mrui_pane

0xe5fe,	// (0x0004badf) listscroll_sp_fs_schedule_track_pane

0xe607,	// (0x0004bae8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe607,	// (0x0004bae8) main_sp_fs_ctrlbar_pane_cp01

0xe618,	// (0x0004baf9) main_sp_fs_ribbon_pane

0xe620,	// (0x0004bb01) popup_sp_fs_cale_preview_window

0xb897,	// (0x00048d78) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb897,	// (0x00048d78) list_single_sp_fs_schedule_track_pane

0x1a5a,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_sp_fs_highlight_list_pane_cp03

0xb8ad,	// (0x00048d8e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb8ad,	// (0x00048d8e) list_single_sp_fs_schedule_track_pane_g1

0xb8b9,	// (0x00048d9a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb8b9,	// (0x00048d9a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0004d2b3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0004d2b3) list_single_sp_fs_schedule_track_pane_g

0xb8c5,	// (0x00048da6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb8c5,	// (0x00048da6) list_single_sp_fs_schedule_track_pane_t1

0xb8df,	// (0x00048dc0) sp_fs_schedule_track_pane_ParamLimits

0xb8df,	// (0x00048dc0) sp_fs_schedule_track_pane

0xe632,	// (0x0004bb13) sp_fs_schedule_track_pane_g1

0xe63a,	// (0x0004bb1b) sp_fs_schedule_track_pane_g2

0xe642,	// (0x0004bb23) sp_fs_schedule_track_pane_g3

0xe64a,	// (0x0004bb2b) sp_fs_schedule_track_pane_g4

0xe652,	// (0x0004bb33) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0004d2b8) sp_fs_schedule_track_pane_g

0xcf60,	// (0x0004a441) bg_sp_fs_schedule_viewer_highlight_g1

0x0ec9,	// (0x0003e3aa) bg_sp_fs_schedule_viewer_highlight_g2

0xcf68,	// (0x0004a449) bg_sp_fs_schedule_viewer_highlight_g3

0xcf70,	// (0x0004a451) bg_sp_fs_schedule_viewer_highlight_g4

0xd1a5,	// (0x0004a686) bg_sp_fs_schedule_viewer_highlight_g5

0xcf80,	// (0x0004a461) bg_sp_fs_schedule_viewer_highlight_g6

0xcf88,	// (0x0004a469) bg_sp_fs_schedule_viewer_highlight_g7

0xcf90,	// (0x0004a471) bg_sp_fs_schedule_viewer_highlight_g8

0x0ea9,	// (0x0003e38a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0004d2c3) bg_sp_fs_schedule_viewer_highlight_g

0x02ce,	// (0x0003d7af) bg_main_sp_fs_ribbon_pane

0xb8f0,	// (0x00048dd1) main_sp_fs_ribbon_pane_g1

0xe65a,	// (0x0004bb3b) main_sp_fs_ribbon_pane_t1

0xb8f9,	// (0x00048dda) main_sp_fs_ribbon_pane_t2

0xe669,	// (0x0004bb4a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0004d2d6) main_sp_fs_ribbon_pane_t

0xe678,	// (0x0004bb59) main_sp_fs_ribbon_scheduler_pane

0xe680,	// (0x0004bb61) bg_main_sp_fs_ribbon_pane_g1

0xe689,	// (0x0004bb6a) bg_main_sp_fs_ribbon_pane_g2

0xe692,	// (0x0004bb73) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0004d2dd) bg_main_sp_fs_ribbon_pane_g

0xe69a,	// (0x0004bb7b) main_sp_fs_ribbon_scheduler_pane_g1

0xe6a3,	// (0x0004bb84) main_sp_fs_ribbon_scheduler_pane_g2

0xe6ac,	// (0x0004bb8d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0004d2e4) main_sp_fs_ribbon_scheduler_pane_g

0xe6b5,	// (0x0004bb96) list_cale_mrui_pane

0xb908,	// (0x00048de9) sp_fs_scroll_pane_cp07_ParamLimits

0xb908,	// (0x00048de9) sp_fs_scroll_pane_cp07

0xb91e,	// (0x00048dff) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb91e,	// (0x00048dff) bg_sp_fs_schedule_viewer_highlight

0xe6be,	// (0x0004bb9f) list_single_sp_fs_schedule_track_pane_cp01

0xe6c6,	// (0x0004bba7) list_sp_fs_schedule_track_pane

0xe6ce,	// (0x0004bbaf) sp_fs_scroll_pane_cp06_ParamLimits

0xe6ce,	// (0x0004bbaf) sp_fs_scroll_pane_cp06

0x7f35,	// (0x00045416) bgmain_sp_fs_calendar_pane_g1

0x30f2,	// (0x000405d3) list_single_cale_mrui_pane_ParamLimits

0x30f2,	// (0x000405d3) list_single_cale_mrui_pane

0xe6e0,	// (0x0004bbc1) list_single_cale_mrui_row_pane_ParamLimits

0xe6e0,	// (0x0004bbc1) list_single_cale_mrui_row_pane

0xe6ed,	// (0x0004bbce) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe6ed,	// (0x0004bbce) list_single_cale_mrui_row_pane_g1

0xe725,	// (0x0004bc06) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe725,	// (0x0004bc06) list_single_cale_mrui_row_pane_t1

0x3115,	// (0x000405f6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3115,	// (0x000405f6) list_single_cale_mrui_row_pane_t2

0xe737,	// (0x0004bc18) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe737,	// (0x0004bc18) list_single_cale_mrui_row_pane_t3

0xe766,	// (0x0004bc47) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe766,	// (0x0004bc47) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0004d2f0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0004d2f0) list_single_cale_mrui_row_pane_t

0x317d,	// (0x0004065e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x317d,	// (0x0004065e) list_single_cmail_header_editor_pane_bg_cp01

0x31a3,	// (0x00040684) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x31a3,	// (0x00040684) list_single_cmail_header_editor_pane_bg_cp02

0xb92e,	// (0x00048e0f) main_radioblah_text_pane_t1_ParamLimits

0xb92e,	// (0x00048e0f) main_radioblah_text_pane_t1

0xe795,	// (0x0004bc76) cam6_indi_pane_cp01

0xe79d,	// (0x0004bc7e) cam6_mode_pane_cp01

0xe7a5,	// (0x0004bc86) cam6_pano_pane

0xe7ae,	// (0x0004bc8f) cam6_zoom_pane_cp01

0xe7b6,	// (0x0004bc97) cam6_pano_image_pane

0xe7c1,	// (0x0004bca2) cam6_pano_pane_g1

0xdd4b,	// (0x0004b22c) cam6_pano_pane_g2

0xe7ca,	// (0x0004bcab) cam6_pano_pane_g3

0xe7d3,	// (0x0004bcb4) cam6_pano_pane_g4

0xca31,	// (0x00049f12) cam6_pano_pane_g5

0xe7dc,	// (0x0004bcbd) cam6_pano_pane_g6

0xe7e6,	// (0x0004bcc7) cam6_pano_pane_g7

0xe7ee,	// (0x0004bccf) cam6_pano_pane_g8

0xe7f7,	// (0x0004bcd8) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0004d2f9) cam6_pano_pane_g

0x02ce,	// (0x0003d7af) main_browser_tag_pane

0xe537,	// (0x0004ba18) grid_navstr_albumart_pane

0xe802,	// (0x0004bce3) cell_navstr_albumart_pane_ParamLimits

0xe802,	// (0x0004bce3) cell_navstr_albumart_pane

0x16a2,	// (0x0003eb83) cell_navstr_albumart_pane_g1

0x68c8,	// (0x00043da9) cell_navstr_albumart_pane_g2

0x68d8,	// (0x00043db9) cell_navstr_albumart_pane_g3

0x68d0,	// (0x00043db1) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0004d30c) cell_navstr_albumart_pane_g

0xb949,	// (0x00048e2a) bt_list_pane_ParamLimits

0xb949,	// (0x00048e2a) bt_list_pane

0xb95e,	// (0x00048e3f) bt_list_pane_t1

0xb96d,	// (0x00048e4e) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0004d315) bt_list_pane_t

0x02ce,	// (0x0003d7af) main_cale_prevew_pane

0xb97c,	// (0x00048e5d) popup_cale_preview_window_ParamLimits

0xb97c,	// (0x00048e5d) popup_cale_preview_window

0x1a5a,	// (0x0003ef3b) bg_popup_preview_window_pane_cp05_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_popup_preview_window_pane_cp05

0xe824,	// (0x0004bd05) list_cale_preview_pane_ParamLimits

0xe824,	// (0x0004bd05) list_cale_preview_pane

0xb991,	// (0x00048e72) list_double_cale_preview_pane_ParamLimits

0xb991,	// (0x00048e72) list_double_cale_preview_pane

0xb9a3,	// (0x00048e84) list_single_cale_preview_pane_ParamLimits

0xb9a3,	// (0x00048e84) list_single_cale_preview_pane

0xb9b7,	// (0x00048e98) list_single_cale_preview_pane_g1

0xb9bf,	// (0x00048ea0) list_single_cale_preview_pane_t1_ParamLimits

0xb9bf,	// (0x00048ea0) list_single_cale_preview_pane_t1

0xb9d4,	// (0x00048eb5) list_double_cale_preview_pane_g1

0xb9dc,	// (0x00048ebd) list_double_cale_preview_pane_t1_ParamLimits

0xb9dc,	// (0x00048ebd) list_double_cale_preview_pane_t1

0xb9f1,	// (0x00048ed2) list_double_cale_preview_pane_t2_ParamLimits

0xb9f1,	// (0x00048ed2) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0004d31a) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0004d31a) list_double_cale_preview_pane_t

0x02ce,	// (0x0003d7af) main_ezdial_pane

0x1a5a,	// (0x0003ef3b) main_sp_fs_email_pane_ParamLimits

0xb5b4,	// (0x00048a95) cmail_ddmenu_btn01_pane_ParamLimits

0xb5b4,	// (0x00048a95) cmail_ddmenu_btn01_pane

0xb5c7,	// (0x00048aa8) cmail_ddmenu_btn02_pane_ParamLimits

0xb5c7,	// (0x00048aa8) cmail_ddmenu_btn02_pane

0xb5ea,	// (0x00048acb) cmail_ddmenu_btn03_pane_ParamLimits

0xb5ea,	// (0x00048acb) cmail_ddmenu_btn03_pane

0x2d3d,	// (0x0004021e) main_sp_fs_ctrlbar_pane_ParamLimits

0x2d61,	// (0x00040242) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb721,	// (0x00048c02) list_cmail_body_pane_ParamLimits

0xe45e,	// (0x0004b93f) bg_button_pane_cp12

0xe473,	// (0x0004b954) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe473,	// (0x0004b954) list_single_cmail_header_detail_pane_g3

0x30cc,	// (0x000405ad) list_single_cmail_header_detail_pane_t2_ParamLimits

0x30cc,	// (0x000405ad) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0004d29f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0004d29f) list_single_cmail_header_detail_pane_t

0xe59f,	// (0x0004ba80) phacti_term_pane_t2_ParamLimits

0xe59f,	// (0x0004ba80) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0004d2a9) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0004d2a9) phacti_term_pane_t

0xe830,	// (0x0004bd11) aid_size_list_single_double

0xba09,	// (0x00048eea) popup_ezdial_listscroll_window

0xba25,	// (0x00048f06) popup_number_entry_window_cp01

0x1541,	// (0x0003ea22) bg_popup_call_pane_cp09

0xe83c,	// (0x0004bd1d) ezdial_list_pane

0xe844,	// (0x0004bd25) scroll_pane_cp23

0x6db0,	// (0x00044291) bg_button_pane_cp028_ParamLimits

0x6db0,	// (0x00044291) bg_button_pane_cp028

0xba33,	// (0x00048f14) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xba33,	// (0x00048f14) cmail_ddmenu_btn01_pane_g1

0xba3f,	// (0x00048f20) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xba3f,	// (0x00048f20) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0004d31f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0004d31f) cmail_ddmenu_btn01_pane_g

0xe84c,	// (0x0004bd2d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe84c,	// (0x0004bd2d) cmail_ddmenu_btn01_pane_t1

0x6db0,	// (0x00044291) bg_button_pane_cp029_ParamLimits

0x6db0,	// (0x00044291) bg_button_pane_cp029

0xba4b,	// (0x00048f2c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xba4b,	// (0x00048f2c) cmail_ddmenu_btn02_pane_g1

0xba63,	// (0x00048f44) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xba63,	// (0x00048f44) cmail_ddmenu_btn02_pane_t1

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp031_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp031

0xba4b,	// (0x00048f2c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xba4b,	// (0x00048f2c) cmail_ddmenu_btn03_pane_g1

0xba63,	// (0x00048f44) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xba63,	// (0x00048f44) cmail_ddmenu_btn03_pane_t1

0x9387,	// (0x00046868) cell_dialer2_keypad_pane_t1_ParamLimits

0x93a1,	// (0x00046882) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x93a1,	// (0x00046882) cell_dialer2_keypad_pane_t1_copy1

0xaf3b,	// (0x0004841c) ncimui_group_button_pane

0x1a5a,	// (0x0003ef3b) main_sp_fs_calendar_pane_ParamLimits

0xb739,	// (0x00048c1a) list_single_cmail_header_caption_pane_ParamLimits

0xd4e8,	// (0x0004a9c9) aid_recal_txt_sm_pane

0x02ce,	// (0x0003d7af) mian_recal_day_pane

0xe620,	// (0x0004bb01) popup_sp_fs_cale_preview_window_ParamLimits

0x02ce,	// (0x0003d7af) list_recal_day_pane

0xe87a,	// (0x0004bd5b) list_single_recal_day_pane_ParamLimits

0xe87a,	// (0x0004bd5b) list_single_recal_day_pane

0xe88c,	// (0x0004bd6d) list_single_recal_day_pane_g1_ParamLimits

0xe88c,	// (0x0004bd6d) list_single_recal_day_pane_g1

0xe898,	// (0x0004bd79) list_single_recal_day_pane_g2_ParamLimits

0xe898,	// (0x0004bd79) list_single_recal_day_pane_g2

0xe8a7,	// (0x0004bd88) list_single_recal_day_pane_g3_ParamLimits

0xe8a7,	// (0x0004bd88) list_single_recal_day_pane_g3

0xba87,	// (0x00048f68) list_single_recal_day_pane_g4_ParamLimits

0xba87,	// (0x00048f68) list_single_recal_day_pane_g4

0xe8b3,	// (0x0004bd94) list_single_recal_day_pane_g5_ParamLimits

0xe8b3,	// (0x0004bd94) list_single_recal_day_pane_g5

0xe8c2,	// (0x0004bda3) list_single_recal_day_pane_g6_ParamLimits

0xe8c2,	// (0x0004bda3) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0004d32e) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0004d32e) list_single_recal_day_pane_g

0xe8ce,	// (0x0004bdaf) list_single_recal_day_pane_t1

0xe8dc,	// (0x0004bdbd) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0004d33b) list_single_recal_day_pane_t

0xba9a,	// (0x00048f7b) ncimui_query_button_pane_ParamLimits

0xba9a,	// (0x00048f7b) ncimui_query_button_pane

0xbaaa,	// (0x00048f8b) ncimui_query_button_pane_t1_ParamLimits

0xbaaa,	// (0x00048f8b) ncimui_query_button_pane_t1

0xe8ea,	// (0x0004bdcb) ncimui_query_button_pane_t2_ParamLimits

0xe8ea,	// (0x0004bdcb) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0004d340) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0004d340) ncimui_query_button_pane_t

0xbabd,	// (0x00048f9e) query_button_pane_ParamLimits

0xbabd,	// (0x00048f9e) query_button_pane

0x02ce,	// (0x0003d7af) bg_button_pane_cp0028

0xe8fd,	// (0x0004bdde) query_button_pane_t1

0x6dd2,	// (0x000442b3) main_tport_pane_ParamLimits

0xb60e,	// (0x00048aef) bg_popup_window_pane_cp01_ParamLimits

0xb60e,	// (0x00048aef) bg_popup_window_pane_cp01

0xb628,	// (0x00048b09) heading_pane_cp08_ParamLimits

0xb628,	// (0x00048b09) heading_pane_cp08

0xb63c,	// (0x00048b1d) heading_pane_cp07_ParamLimits

0xb63c,	// (0x00048b1d) heading_pane_cp07

0xe421,	// (0x0004b902) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0004d28c) cell_tport_appsw_pane_g

0x54f4,	// (0x000429d5) input_candi_list_open_g1

0x1064,	// (0x0003e545) list_cale_time_pane_g6_ParamLimits

0x1064,	// (0x0003e545) list_cale_time_pane_g6

0x8264,	// (0x00045745) aid_size_touch_calib_1_ParamLimits

0x8264,	// (0x00045745) aid_size_touch_calib_1

0x8270,	// (0x00045751) aid_size_touch_calib_2_ParamLimits

0x8270,	// (0x00045751) aid_size_touch_calib_2

0x8286,	// (0x00045767) aid_size_touch_calib_3_ParamLimits

0x8286,	// (0x00045767) aid_size_touch_calib_3

0x82a4,	// (0x00045785) aid_size_touch_calib_4_ParamLimits

0x82a4,	// (0x00045785) aid_size_touch_calib_4

0x82ba,	// (0x0004579b) main_touch_calib_button_group_pane_ParamLimits

0x82ba,	// (0x0004579b) main_touch_calib_button_group_pane

0x82d1,	// (0x000457b2) main_touch_calib_pane_g1_ParamLimits

0x82dd,	// (0x000457be) main_touch_calib_pane_g2_ParamLimits

0x82e9,	// (0x000457ca) main_touch_calib_pane_g3_ParamLimits

0x82f5,	// (0x000457d6) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0004cc65) main_touch_calib_pane_g_ParamLimits

0x8301,	// (0x000457e2) main_touch_calib_pane_t1_ParamLimits

0x831b,	// (0x000457fc) main_touch_calib_pane_t2_ParamLimits

0x8335,	// (0x00045816) main_touch_calib_pane_t3_ParamLimits

0x8349,	// (0x0004582a) main_touch_calib_pane_t4_ParamLimits

0x835d,	// (0x0004583e) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0004cc6e) main_touch_calib_pane_t_ParamLimits

0xc818,	// (0x00049cf9) list_single_fp_cale_pane_g3_ParamLimits

0xc818,	// (0x00049cf9) list_single_fp_cale_pane_g3

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp012_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp03_ParamLimits

0xa359,	// (0x0004783a) cell_vitu2_function_top_pane_g1_ParamLimits

0x1a5a,	// (0x0003ef3b) bg_vkb2_func_pane_cp04_ParamLimits

0xaeef,	// (0x000483d0) main_ncimui_button_group_pane_ParamLimits

0xaeef,	// (0x000483d0) main_ncimui_button_group_pane

0xaf29,	// (0x0004840a) main_ncimui_pane_t3_ParamLimits

0xaf29,	// (0x0004840a) main_ncimui_pane_t3

0xe54d,	// (0x0004ba2e) phacti_button_group_pane

0xe830,	// (0x0004bd11) aid_size_list_single_double_ParamLimits

0xba09,	// (0x00048eea) popup_ezdial_listscroll_window_ParamLimits

0xba25,	// (0x00048f06) popup_number_entry_window_cp01_ParamLimits

0xbad0,	// (0x00048fb1) phacti_button_pane_ParamLimits

0xbad0,	// (0x00048fb1) phacti_button_pane

0x02ce,	// (0x0003d7af) bg_button_pane_cp14

0xe90b,	// (0x0004bdec) phacti_button_pane_t1

0xbae1,	// (0x00048fc2) main_touch_calib_button_pane_ParamLimits

0xbae1,	// (0x00048fc2) main_touch_calib_button_pane

0x0ab1,	// (0x0003df92) bg_button_pane_cp18_ParamLimits

0x0ab1,	// (0x0003df92) bg_button_pane_cp18

0xe919,	// (0x0004bdfa) main_touch_calib_button_pane_t1_ParamLimits

0xe919,	// (0x0004bdfa) main_touch_calib_button_pane_t1

0xe92f,	// (0x0004be10) main_touch_calib_button_pane_t2_ParamLimits

0xe92f,	// (0x0004be10) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0004d345) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0004d345) main_touch_calib_button_pane_t

0x02ce,	// (0x0003d7af) cell_ncimui_button_pane

0x02ce,	// (0x0003d7af) bg_button_pane_cp032

0xe94d,	// (0x0004be2e) cell_ncimui_button_pane_t1

0xef52,	// (0x0004c433) image3_infobar_pane_ParamLimits

0xef52,	// (0x0004c433) image3_infobar_pane

0xb2c0,	// (0x000487a1) fs_bigclock_status_pane_ParamLimits

0xb2c0,	// (0x000487a1) fs_bigclock_status_pane

0xb2cd,	// (0x000487ae) main_fs_bigclock_clock_pane_ParamLimits

0xb2cd,	// (0x000487ae) main_fs_bigclock_clock_pane

0xb2e0,	// (0x000487c1) main_fs_bigclock_indi_pane_ParamLimits

0xb2e0,	// (0x000487c1) main_fs_bigclock_indi_pane

0xb2f8,	// (0x000487d9) main_fs_bigclock_swipe_pane_ParamLimits

0xb2f8,	// (0x000487d9) main_fs_bigclock_swipe_pane

0x02ce,	// (0x0003d7af) main_fs_clock_dumped_data

0xde58,	// (0x0004b339) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xde58,	// (0x0004b339) list_single_fs_bigclock_indicator_pane_g1

0xde76,	// (0x0004b357) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xde76,	// (0x0004b357) list_single_fs_bigclock_indicator_pane_g2

0xde90,	// (0x0004b371) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xde90,	// (0x0004b371) list_single_fs_bigclock_indicator_pane_g3

0xdeaa,	// (0x0004b38b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdeaa,	// (0x0004b38b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0004d178) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0004d178) list_single_fs_bigclock_indicator_pane_g

0xded0,	// (0x0004b3b1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xded0,	// (0x0004b3b1) list_single_fs_bigclock_indicator_pane_t1

0xdef8,	// (0x0004b3d9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdef8,	// (0x0004b3d9) list_single_fs_bigclock_indicator_pane_t2

0xdf20,	// (0x0004b401) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf20,	// (0x0004b401) list_single_fs_bigclock_indicator_pane_t3

0xdf48,	// (0x0004b429) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf48,	// (0x0004b429) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0004d183) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0004d183) list_single_fs_bigclock_indicator_pane_t

0xe95b,	// (0x0004be3c) image3_infobar_fav_pane_ParamLimits

0xe95b,	// (0x0004be3c) image3_infobar_fav_pane

0xe96b,	// (0x0004be4c) image3_infobar_loc_pane_ParamLimits

0xe96b,	// (0x0004be4c) image3_infobar_loc_pane

0xe97f,	// (0x0004be60) image3_infobar_time_pane_ParamLimits

0xe97f,	// (0x0004be60) image3_infobar_time_pane

0x7f35,	// (0x00045416) image3_infobar_time_pane_g1

0xe98f,	// (0x0004be70) image3_infobar_time_pane_t1

0x7f35,	// (0x00045416) image3_infobar_loc_pane_g1

0xe99d,	// (0x0004be7e) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0004d34a) image3_infobar_loc_pane_g

0xe9a5,	// (0x0004be86) image3_infobar_loc_pane_t1

0x7f35,	// (0x00045416) image3_infobar_fav_pane_g1

0xe9b3,	// (0x0004be94) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0004d34f) image3_infobar_fav_pane_g

0xe9bb,	// (0x0004be9c) fs_bigclock_status_battery_pane

0xe9c4,	// (0x0004bea5) fs_bigclock_status_signal_pane

0xe9cd,	// (0x0004beae) fs_bigclock_status_title_pane

0xe9d6,	// (0x0004beb7) fs_bigclock_status_signal_pane_g1

0xe9df,	// (0x0004bec0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0004d354) fs_bigclock_status_signal_pane_g

0xe9e7,	// (0x0004bec8) fs_bigclock_status_battery_pane_g1

0xe9f0,	// (0x0004bed1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0004d359) fs_bigclock_status_battery_pane_g

0xe9f8,	// (0x0004bed9) fs_bigclock_status_title_pane_t1

0x7f35,	// (0x00045416) main_fs_bigclock_clock_pane_g1

0xea06,	// (0x0004bee7) main_fs_bigclock_clock_pane_g2

0xea06,	// (0x0004bee7) main_fs_bigclock_clock_pane_g3

0xea06,	// (0x0004bee7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0004d35e) main_fs_bigclock_clock_pane_g

0xea0e,	// (0x0004beef) main_fs_bigclock_clock_pane_t1

0xea1c,	// (0x0004befd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0004d367) main_fs_bigclock_clock_pane_t

0xea2b,	// (0x0004bf0c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea2b,	// (0x0004bf0c) list_single_fs_bigclock_indicator_pane

0xbaf6,	// (0x00048fd7) list_single_fs_bigclock_pane_ParamLimits

0xbaf6,	// (0x00048fd7) list_single_fs_bigclock_pane

0xea45,	// (0x0004bf26) main_fs_bigclock_indicator_pane_t1

0xea54,	// (0x0004bf35) list_single_fs_bigclock_pane_g1

0xea5c,	// (0x0004bf3d) list_single_fs_bigclock_pane_t1

0x7f35,	// (0x00045416) main_fs_bigclock_swipe_pane_g1

0xea9a,	// (0x0004bf7b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0004d378) main_fs_bigclock_swipe_pane_g

0xeaa2,	// (0x0004bf83) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeaa2,	// (0x0004bf83) main_fs_bigclock_swipe_pane_t1

0x4d45,	// (0x00042226) call_type_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_btmg_pane

0xe719,	// (0x0004bbfa) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe719,	// (0x0004bbfa) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0004d2eb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0004d2eb) list_single_cale_mrui_row_pane_g

0xe86a,	// (0x0004bd4b) list_recal_vselct_arw_lo_pane

0xe872,	// (0x0004bd53) list_recal_vselct_arw_up_pane

0xd4df,	// (0x0004a9c0) list_recal_vselct_pane

0xeabf,	// (0x0004bfa0) btmg_button_pane

0xbb5c,	// (0x0004903d) main_btmg_pane_g1

0x02ce,	// (0x0003d7af) bg_button_pane_cp044

0xeac9,	// (0x0004bfaa) btmg_button_pane_t1

0x6d94,	// (0x00044275) aid_listscroll_gen

0x1a5a,	// (0x0003ef3b) main_cntbar_detail_pane

0xe43f,	// (0x0004b920) list_cmail_folder_pane

0xe44f,	// (0x0004b930) sp_fs_scroll_pane_cp03_ParamLimits

0x31c3,	// (0x000406a4) list_single_fs_dyc_pane_cp01_ParamLimits

0x31c3,	// (0x000406a4) list_single_fs_dyc_pane_cp01

0xead7,	// (0x0004bfb8) aid_size_cmail_indent

0xeae0,	// (0x0004bfc1) list_single_dyc_row_pane_cp01

0xbb92,	// (0x00049073) cntbar_detail_list_pane_ParamLimits

0xbb92,	// (0x00049073) cntbar_detail_list_pane

0xbbde,	// (0x000490bf) main_cntbar_detail_cont_pane_ParamLimits

0xbbde,	// (0x000490bf) main_cntbar_detail_cont_pane

0x4d39,	// (0x0004221a) scroll_pane_cp032_ParamLimits

0x4d39,	// (0x0004221a) scroll_pane_cp032

0xbbf2,	// (0x000490d3) cntbar_detail_list_event_pane_ParamLimits

0xbbf2,	// (0x000490d3) cntbar_detail_list_event_pane

0xbba2,	// (0x00049083) cntbar_detail_list_shct_pane

0x0f17,	// (0x0003e3f8) aid_list_gen

0xeae9,	// (0x0004bfca) aid_scroll

0xeaf2,	// (0x0004bfd3) aid_size_touch_scroll_bar

0x0281,	// (0x0003d762) aid_list_double

0xeafb,	// (0x0004bfdc) aid_list_single

0xeb04,	// (0x0004bfe5) aid_list_single_lg

0xeb0d,	// (0x0004bfee) aid_list_z_g_a_sm

0xeb15,	// (0x0004bff6) aid_list_z_g_d

0xeb1d,	// (0x0004bffe) aid_txt_z_prm

0x31e2,	// (0x000406c3) aid_txt_z_prm_cp01

0x31f0,	// (0x000406d1) aid_txt_z_sec

0xbc02,	// (0x000490e3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbc02,	// (0x000490e3) main_cntbar_detail_cont_pane_g1

0xbc16,	// (0x000490f7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbc16,	// (0x000490f7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0004d37d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0004d37d) main_cntbar_detail_cont_pane_g

0xeb2b,	// (0x0004c00c) main_cntbar_detail_cont_pane_t1

0xeb39,	// (0x0004c01a) main_cntbar_detail_cont_pane_t2

0xeb47,	// (0x0004c028) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0004d382) main_cntbar_detail_cont_pane_t

0xbc26,	// (0x00049107) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbc26,	// (0x00049107) cell_cntbar_detail_list_shct_pane

0xeb55,	// (0x0004c036) cntbar_detail_list_shct_pane_g1

0xeb5e,	// (0x0004c03f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0004d389) cntbar_detail_list_shct_pane_g

0xbc3a,	// (0x0004911b) cntbar_detail_list_event_pane_g1_ParamLimits

0xbc3a,	// (0x0004911b) cntbar_detail_list_event_pane_g1

0xbc46,	// (0x00049127) cntbar_detail_list_event_pane_g2_ParamLimits

0xbc46,	// (0x00049127) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0004d38e) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0004d38e) cntbar_detail_list_event_pane_g

0xbcb2,	// (0x00049193) cntbar_detail_list_event_pane_t1_ParamLimits

0xbcb2,	// (0x00049193) cntbar_detail_list_event_pane_t1

0xbcc7,	// (0x000491a8) cntbar_detail_list_event_pane_t2_ParamLimits

0xbcc7,	// (0x000491a8) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0004d39b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0004d39b) cntbar_detail_list_event_pane_t

0x7f35,	// (0x00045416) cell_cntbar_detail_list_shct_pane_g1

0x5096,	// (0x00042577) navi_pane_mv_g3

0x1a5a,	// (0x0003ef3b) main_cntbar_detail_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_notif_wgt_pane

0xed68,	// (0x0004c249) aid_tch_main_mp4_pane_g4

0xef4a,	// (0x0004c42b) popup_slider_window_cp02

0xe861,	// (0x0004bd42) list_recal_day_event_pane

0xbb66,	// (0x00049047) cntbar_detail_btn_pane_ParamLimits

0xbb66,	// (0x00049047) cntbar_detail_btn_pane

0xbb7c,	// (0x0004905d) cntbar_detail_btn_pane_cp01_ParamLimits

0xbb7c,	// (0x0004905d) cntbar_detail_btn_pane_cp01

0xbba2,	// (0x00049083) cntbar_detail_list_shct_pane_ParamLimits

0xbbb2,	// (0x00049093) cntbar_detail_pane_g1_ParamLimits

0xbbb2,	// (0x00049093) cntbar_detail_pane_g1

0xbbc2,	// (0x000490a3) cntbar_detail_pane_t1_ParamLimits

0xbbc2,	// (0x000490a3) cntbar_detail_pane_t1

0xbc52,	// (0x00049133) cntbar_detail_list_event_pane_g3_ParamLimits

0xbc52,	// (0x00049133) cntbar_detail_list_event_pane_g3

0xbc6a,	// (0x0004914b) cntbar_detail_list_event_pane_g4_ParamLimits

0xbc6a,	// (0x0004914b) cntbar_detail_list_event_pane_g4

0xbc82,	// (0x00049163) cntbar_detail_list_event_pane_g5_ParamLimits

0xbc82,	// (0x00049163) cntbar_detail_list_event_pane_g5

0xbc9a,	// (0x0004917b) cntbar_detail_list_event_pane_g6_ParamLimits

0xbc9a,	// (0x0004917b) cntbar_detail_list_event_pane_g6

0xbcdc,	// (0x000491bd) cntbar_detail_list_event_pane_t3_ParamLimits

0xbcdc,	// (0x000491bd) cntbar_detail_list_event_pane_t3

0xbcee,	// (0x000491cf) popup_notif_wgt_window_ParamLimits

0xbcee,	// (0x000491cf) popup_notif_wgt_window

0xbd07,	// (0x000491e8) popup_submenu_window_cp01_ParamLimits

0xbd07,	// (0x000491e8) popup_submenu_window_cp01

0x1541,	// (0x0003ea22) bg_popup_window_pane_cp10

0xeb67,	// (0x0004c048) listscroll_notif_wgt_pane

0xeb71,	// (0x0004c052) list_notif_wgt_window

0xeb7a,	// (0x0004c05b) scroll_pane_cp033

0xeb83,	// (0x0004c064) list_notif_wgt_row_pane_ParamLimits

0xeb83,	// (0x0004c064) list_notif_wgt_row_pane

0xeb97,	// (0x0004c078) aid_size_list_notif_wgt_del

0xeba0,	// (0x0004c081) list_notif_wgt_row_pane_g1

0xeba8,	// (0x0004c089) list_notif_wgt_row_pane_g2

0xebb0,	// (0x0004c091) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0004d3a2) list_notif_wgt_row_pane_g

0xebb9,	// (0x0004c09a) list_notif_wgt_row_pane_t1

0xebc7,	// (0x0004c0a8) list_notif_wgt_row_pane_t2

0xebd5,	// (0x0004c0b6) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0004d3a9) list_notif_wgt_row_pane_t

0xd1c5,	// (0x0004a6a6) list_recal_day_event_pane_g1

0xebe3,	// (0x0004c0c4) list_recal_day_event_pane_t1

0x02ce,	// (0x0003d7af) bg_button_pane_cp045

0xebf2,	// (0x0004c0d3) cntbar_detail_btn_pane_t1

0x6db0,	// (0x00044291) main_callh_pane_ParamLimits

0x6db0,	// (0x00044291) main_callh_pane

0x02ce,	// (0x0003d7af) main_coverflow0_pane

0x02ce,	// (0x0003d7af) main_wgtman_pane

0xb306,	// (0x000487e7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb306,	// (0x000487e7) main_fs_bigclock_unlock_btn_pane

0xe419,	// (0x0004b8fa) bg_button_pane_cp16

0xe429,	// (0x0004b90a) cell_tport_appsw_pane_g3

0xbd19,	// (0x000491fa) cf0_flow_pane_ParamLimits

0xbd19,	// (0x000491fa) cf0_flow_pane

0xec00,	// (0x0004c0e1) listscroll_cf0_pane

0xec09,	// (0x0004c0ea) main_cf0_pane_g1

0xbd2e,	// (0x0004920f) main_cf0_pane_t1_ParamLimits

0xbd2e,	// (0x0004920f) main_cf0_pane_t1

0xbd46,	// (0x00049227) main_cf0_pane_t2_ParamLimits

0xbd46,	// (0x00049227) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0004d3b0) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0004d3b0) main_cf0_pane_t

0xec13,	// (0x0004c0f4) scroll_pane_cp11

0xbd5e,	// (0x0004923f) cf0_flow_pane_g1

0xbd66,	// (0x00049247) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004d3b5) cf0_flow_pane_g

0xbd6e,	// (0x0004924f) cf0_flow_pane_t1

0x02ce,	// (0x0003d7af) main_call6_pane

0x02ce,	// (0x0003d7af) main_calllock_pane

0xbd7c,	// (0x0004925d) call6_btn_grp_pane_ParamLimits

0xbd7c,	// (0x0004925d) call6_btn_grp_pane

0xbd96,	// (0x00049277) call6_pane_g1_ParamLimits

0xbd96,	// (0x00049277) call6_pane_g1

0xbdab,	// (0x0004928c) popup_call6_1st_window_ParamLimits

0xbdab,	// (0x0004928c) popup_call6_1st_window

0xbdbc,	// (0x0004929d) popup_call6_2nd_window_ParamLimits

0xbdbc,	// (0x0004929d) popup_call6_2nd_window

0xbdcd,	// (0x000492ae) cell_call6_btn_pane_ParamLimits

0xbdcd,	// (0x000492ae) cell_call6_btn_pane

0x1541,	// (0x0003ea22) bg_popup_call2_in_pane_cp03

0xec1e,	// (0x0004c0ff) popup_call6_1st_window_g1

0xec26,	// (0x0004c107) popup_call6_1st_window_g2

0xec2e,	// (0x0004c10f) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004d3ba) popup_call6_1st_window_g

0xec36,	// (0x0004c117) popup_call6_1st_window_t1

0xec45,	// (0x0004c126) popup_call6_1st_window_t2

0xec55,	// (0x0004c136) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0004d3c1) popup_call6_1st_window_t

0x1541,	// (0x0003ea22) bg_popup_call2_in_pane_cp04

0xec1e,	// (0x0004c0ff) popup_call6_2nd_window_g1

0xec26,	// (0x0004c107) popup_call6_2nd_window_g2

0xec2e,	// (0x0004c10f) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004d3ba) popup_call6_2nd_window_g

0xec36,	// (0x0004c117) popup_call6_2nd_window_t1

0x02ce,	// (0x0003d7af) bg_button_pane_cp15

0xec65,	// (0x0004c146) cell_call6_btn_pane_g1

0xec6e,	// (0x0004c14f) cell_call6_btn_pane_t1

0xbde1,	// (0x000492c2) listscroll_wgtman_pane_ParamLimits

0xbde1,	// (0x000492c2) listscroll_wgtman_pane

0xbe04,	// (0x000492e5) wgtman_btn_pane_ParamLimits

0xbe04,	// (0x000492e5) wgtman_btn_pane

0x13f4,	// (0x0003e8d5) aid_scroll_copy1

0xec7d,	// (0x0004c15e) list_wgtman_pane

0xbe47,	// (0x00049328) wgtman_btn_pane_g1_ParamLimits

0xbe47,	// (0x00049328) wgtman_btn_pane_g1

0xbe73,	// (0x00049354) wgtman_btn_pane_t1_ParamLimits

0xbe73,	// (0x00049354) wgtman_btn_pane_t1

0xec87,	// (0x0004c168) wgtman_btn_pane_t2_ParamLimits

0xec87,	// (0x0004c168) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004d3c8) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004d3c8) wgtman_btn_pane_t

0xbeb0,	// (0x00049391) listrow_wgtman_pane_ParamLimits

0xbeb0,	// (0x00049391) listrow_wgtman_pane

0xbec3,	// (0x000493a4) listrow_wgtman_pane_g1

0xbecc,	// (0x000493ad) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0004d3cd) listrow_wgtman_pane_g

0x31fe,	// (0x000406df) listrow_wgtman_pane_t1

0x320c,	// (0x000406ed) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0004d3d2) listrow_wgtman_pane_t

0x321a,	// (0x000406fb) wait_bar_pane_cp09

0xec9e,	// (0x0004c17f) main_calllock_btn_pane

0xeca8,	// (0x0004c189) main_calllock_pane_g1

0x02ce,	// (0x0003d7af) bg_button_pane_cp17

0xecb3,	// (0x0004c194) main_calllock_btn_pane_g1

0xecbc,	// (0x0004c19d) main_calllock_btn_pane_t1

0x02ce,	// (0x0003d7af) main_dialer3_pane

0x02ce,	// (0x0003d7af) main_fmrd2_pane

0x7f35,	// (0x00045416) main_fs_bigclock_unlock_btn_pane_g1

0xecd3,	// (0x0004c1b4) main_fs_bigclock_unlock_btn_pane_t1

0xbed6,	// (0x000493b7) area_fmrd2_info_pane_ParamLimits

0xbed6,	// (0x000493b7) area_fmrd2_info_pane

0xbee7,	// (0x000493c8) area_fmrd2_visual_pane_ParamLimits

0xbee7,	// (0x000493c8) area_fmrd2_visual_pane

0xbef5,	// (0x000493d6) fmrd2_indi_pane_ParamLimits

0xbef5,	// (0x000493d6) fmrd2_indi_pane

0xbf02,	// (0x000493e3) area_fmrd2_visual_pane_g1

0xbf0a,	// (0x000493eb) area_fmrd2_visual_pane_t1

0xbf1a,	// (0x000493fb) area_fmrd2_visual_pane_t2

0xbf2a,	// (0x0004940b) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0004d3dc) area_fmrd2_visual_pane_t

0xbf3a,	// (0x0004941b) area_fmrd2_info_pane_g1

0xbf42,	// (0x00049423) area_fmrd2_info_pane_t1

0xbf52,	// (0x00049433) area_fmrd2_info_pane_t2

0xbf62,	// (0x00049443) area_fmrd2_info_pane_t3

0xbf72,	// (0x00049453) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0004d3e3) area_fmrd2_info_pane_t

0xbf80,	// (0x00049461) fmrd2_indi_pane_t1

0xbf90,	// (0x00049471) fmrd2_indi_pane_t2

0xbfa0,	// (0x00049481) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0004d3ec) fmrd2_indi_pane_t

0xdeb9,	// (0x0004b39a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdeb9,	// (0x0004b39a) list_single_fs_bigclock_indicator_pane_g5

0xdf5d,	// (0x0004b43e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdf5d,	// (0x0004b43e) list_single_fs_bigclock_indicator_pane_t5

0xb850,	// (0x00048d31) aid_cell_bcale_month_pane_ParamLimits

0xb850,	// (0x00048d31) aid_cell_bcale_month_pane

0xb862,	// (0x00048d43) bcale_month_pane_ParamLimits

0xb862,	// (0x00048d43) bcale_month_pane

0xb87c,	// (0x00048d5d) bcale_preview_pane_ParamLimits

0xb87c,	// (0x00048d5d) bcale_preview_pane

0xea5c,	// (0x0004bf3d) list_single_fs_bigclock_pane_t1_ParamLimits

0xea76,	// (0x0004bf57) list_single_fs_bigclock_pane_t2_ParamLimits

0xea76,	// (0x0004bf57) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0004d373) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0004d373) list_single_fs_bigclock_pane_t

0xeccb,	// (0x0004c1ac) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004d3d7) main_fs_bigclock_unlock_btn_pane_g

0xbfb0,	// (0x00049491) aid_dia3_key_size_ParamLimits

0xbfb0,	// (0x00049491) aid_dia3_key_size

0xbfbf,	// (0x000494a0) aid_dia3_listrow_size_ParamLimits

0xbfbf,	// (0x000494a0) aid_dia3_listrow_size

0xbfd4,	// (0x000494b5) dia3_keypad_fun_pane_ParamLimits

0xbfd4,	// (0x000494b5) dia3_keypad_fun_pane

0xbff0,	// (0x000494d1) dia3_keypad_num_pane_ParamLimits

0xbff0,	// (0x000494d1) dia3_keypad_num_pane

0xc00b,	// (0x000494ec) dia3_listscroll_pane_ParamLimits

0xc00b,	// (0x000494ec) dia3_listscroll_pane

0xc01e,	// (0x000494ff) dia3_numentry_pane_ParamLimits

0xc01e,	// (0x000494ff) dia3_numentry_pane

0xece1,	// (0x0004c1c2) dia3_list_pane

0xecec,	// (0x0004c1cd) scroll_pane_cp12

0x02ce,	// (0x0003d7af) bg_dia3_numentry_pane

0xc032,	// (0x00049513) dia3_numentry_pane_t1

0xc041,	// (0x00049522) cell_dia3_key_num_pane

0xc049,	// (0x0004952a) cell_dia3_key0_fun_pane_ParamLimits

0xc049,	// (0x0004952a) cell_dia3_key0_fun_pane

0xc05d,	// (0x0004953e) cell_dia3_key1_fun_pane_ParamLimits

0xc05d,	// (0x0004953e) cell_dia3_key1_fun_pane

0xc075,	// (0x00049556) dia3_listrow_pane

0xdbd7,	// (0x0004b0b8) bg_dia3_numentry_pane_g1

0x02ce,	// (0x0003d7af) bg_button_pane_cp21

0xecf7,	// (0x0004c1d8) cell_dia3_key_num_pane_t1

0xed05,	// (0x0004c1e6) cell_dia3_key_num_pane_t2

0xed14,	// (0x0004c1f5) cell_dia3_key_num_pane_t3

0xed23,	// (0x0004c204) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0004d3f3) cell_dia3_key_num_pane_t

0x02ce,	// (0x0003d7af) bg_button_pane_cp19

0xc087,	// (0x00049568) cell_dia3_key0_fun_pane_g1

0x02ce,	// (0x0003d7af) bg_button_pane_cp20

0xc08f,	// (0x00049570) cell_dia3_key1_fun_pane_g1

0xc097,	// (0x00049578) area_left_week_number_pane

0xc0a0,	// (0x00049581) area_top_day_name_pane

0xc0a9,	// (0x0004958a) frame_month_view_pane

0xc0b5,	// (0x00049596) grid_month_view_pane

0xc0bf,	// (0x000495a0) cell_top_day_name_pane_ParamLimits

0xc0bf,	// (0x000495a0) cell_top_day_name_pane

0xc0d7,	// (0x000495b8) cell_area_left_week_number_pane_ParamLimits

0xc0d7,	// (0x000495b8) cell_area_left_week_number_pane

0xc0eb,	// (0x000495cc) cell_month_view_pane_ParamLimits

0xc0eb,	// (0x000495cc) cell_month_view_pane

0xed32,	// (0x0004c213) frm_month_g1

0xc106,	// (0x000495e7) frm_month_g2

0xc110,	// (0x000495f1) frm_month_g3

0xc11a,	// (0x000495fb) frm_month_g4

0xc124,	// (0x00049605) frm_month_g5

0xc12e,	// (0x0004960f) frm_month_g6

0xc138,	// (0x00049619) frm_month_g7

0xed3b,	// (0x0004c21c) frm_month_g8

0xc144,	// (0x00049625) frm_month_g9

0xc14d,	// (0x0004962e) frm_month_g10

0xc156,	// (0x00049637) frm_month_g11

0xc15f,	// (0x00049640) frm_month_g12

0xc168,	// (0x00049649) frm_month_g13

0xc171,	// (0x00049652) frm_month_g14

0xed44,	// (0x0004c225) frm_month_g15

0xc17a,	// (0x0004965b) frm_month_g16

0x000f,

0xff1b,	// (0x0004d3fc) frm_month_g

0xc185,	// (0x00049666) cell_top_day_name_pane_t1

0xc194,	// (0x00049675) cell_area_left_week_number_pane_g1

0xc185,	// (0x00049666) cell_area_left_week_number_pane_t1

0x7f35,	// (0x00045416) cell_month_view_pane_g1

0xc19c,	// (0x0004967d) cell_month_view_pane_t1

0x02ce,	// (0x0003d7af) main_fps_pane

0xe193,	// (0x0004b674) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe193,	// (0x0004b674) cmail_ddmenu_btn02_pane_cp1

0xe1af,	// (0x0004b690) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe1af,	// (0x0004b690) cmail_ddmenu_btn02_pane_cp2

0xba57,	// (0x00048f38) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xba57,	// (0x00048f38) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0004d324) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0004d324) cmail_ddmenu_btn02_pane_g

0xba75,	// (0x00048f56) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xba75,	// (0x00048f56) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0004d329) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0004d329) cmail_ddmenu_btn02_pane_t

0xc1ab,	// (0x0004968c) fps_text_pane_ParamLimits

0xc1ab,	// (0x0004968c) fps_text_pane

0xc1c2,	// (0x000496a3) main_fps_pane_g1_ParamLimits

0xc1c2,	// (0x000496a3) main_fps_pane_g1

0xc1dc,	// (0x000496bd) wait_bar_pane_cp010_ParamLimits

0xc1dc,	// (0x000496bd) wait_bar_pane_cp010

0xc1ed,	// (0x000496ce) fps_text_pane_t1_ParamLimits

0xc1ed,	// (0x000496ce) fps_text_pane_t1

0x9832,	// (0x00046d13) cam4_image_uncrop_pane_g1

0x983b,	// (0x00046d1c) cam4_image_uncrop_pane_g2

0x9844,	// (0x00046d25) cam4_image_uncrop_pane_g3

0x984d,	// (0x00046d2e) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0004cdfd) cam4_image_uncrop_pane_g

0xc075,	// (0x00049556) dia3_listrow_pane_ParamLimits

0x02ce,	// (0x0003d7af) main_phob2_pane

0xb6a7,	// (0x00048b88) cell_tport_appsw_pane_cp02_ParamLimits

0xb6a7,	// (0x00048b88) cell_tport_appsw_pane_cp02

0xb6bb,	// (0x00048b9c) cell_tport_appsw_pane_cp03_ParamLimits

0xb6bb,	// (0x00048b9c) cell_tport_appsw_pane_cp03

0x02ce,	// (0x0003d7af) phob2_contact_card_pane

0x02ce,	// (0x0003d7af) phob2_listscroll_pane

0x0114,	// (0x0003d5f5) phob2_list_pane

0x011c,	// (0x0003d5fd) scroll_pane_cp034

0xc205,	// (0x000496e6) phob2_cc_data_pane_ParamLimits

0xc205,	// (0x000496e6) phob2_cc_data_pane

0xc224,	// (0x00049705) phob2_cc_listscroll_pane_ParamLimits

0xc224,	// (0x00049705) phob2_cc_listscroll_pane

0xcf98,	// (0x0004a479) list_double_large_graphic_phob2_pane_ParamLimits

0xcf98,	// (0x0004a479) list_double_large_graphic_phob2_pane

0xc242,	// (0x00049723) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc242,	// (0x00049723) list_double_large_graphic_phob2_pane_g1

0x3222,	// (0x00040703) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3222,	// (0x00040703) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004d41d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004d41d) list_double_large_graphic_phob2_pane_g

0x322e,	// (0x0004070f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x322e,	// (0x0004070f) list_double_large_graphic_phob2_pane_t1

0x3243,	// (0x00040724) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3243,	// (0x00040724) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0004d422) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0004d422) list_double_large_graphic_phob2_pane_t

0x02ce,	// (0x0003d7af) list_highlight_pane_cp024

0x0188,	// (0x0003d669) phob2_cc_button_pane

0xc24f,	// (0x00049730) phob2_cc_data_pane_g1_ParamLimits

0xc24f,	// (0x00049730) phob2_cc_data_pane_g1

0xc264,	// (0x00049745) phob2_cc_data_pane_g2_ParamLimits

0xc264,	// (0x00049745) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0004d427) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0004d427) phob2_cc_data_pane_g

0xc276,	// (0x00049757) phob2_cc_data_pane_t1_ParamLimits

0xc276,	// (0x00049757) phob2_cc_data_pane_t1

0xc28e,	// (0x0004976f) phob2_cc_data_pane_t2_ParamLimits

0xc28e,	// (0x0004976f) phob2_cc_data_pane_t2

0xc2a6,	// (0x00049787) phob2_cc_data_pane_t3_ParamLimits

0xc2a6,	// (0x00049787) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004d42c) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004d42c) phob2_cc_data_pane_t

0x01de,	// (0x0003d6bf) phob2_cc_list_pane_ParamLimits

0x01de,	// (0x0003d6bf) phob2_cc_list_pane

0x01ea,	// (0x0003d6cb) scroll_pane_cp035_ParamLimits

0x01ea,	// (0x0003d6cb) scroll_pane_cp035

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp033

0x01f6,	// (0x0003d6d7) phob2_cc_button_pane_g1

0x0202,	// (0x0003d6e3) phob2_cc_button_pane_t1

0x0217,	// (0x0003d6f8) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0004d433) phob2_cc_button_pane_t

0xc2c0,	// (0x000497a1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc2c0,	// (0x000497a1) list_double_large_graphic_phob2_cc_pane

0xc2d4,	// (0x000497b5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc2d4,	// (0x000497b5) list_double_large_graphic_phob2_cc_pane_g1

0x3255,	// (0x00040736) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3255,	// (0x00040736) list_double_large_graphic_phob2_cc_pane_g2

0x3261,	// (0x00040742) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3261,	// (0x00040742) list_double_large_graphic_phob2_cc_pane_g3

0x326d,	// (0x0004074e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x326d,	// (0x0004074e) list_double_large_graphic_phob2_cc_pane_g4

0x3279,	// (0x0004075a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3279,	// (0x0004075a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0004d438) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0004d438) list_double_large_graphic_phob2_cc_pane_g

0x3285,	// (0x00040766) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3285,	// (0x00040766) list_double_large_graphic_phob2_cc_pane_t1

0x32ae,	// (0x0004078f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x32ae,	// (0x0004078f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0004d443) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0004d443) list_double_large_graphic_phob2_cc_pane_t

0x026a,	// (0x0003d74b) list_highlight_pane_cp025_ParamLimits

0x026a,	// (0x0003d74b) list_highlight_pane_cp025

0x1a5a,	// (0x0003ef3b) bg_button_pane_cp033_ParamLimits

0x01f6,	// (0x0003d6d7) phob2_cc_button_pane_g1_ParamLimits

0x0202,	// (0x0003d6e3) phob2_cc_button_pane_t1_ParamLimits

0x0217,	// (0x0003d6f8) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0004d433) phob2_cc_button_pane_t_ParamLimits

0x34fb,	// (0x000409dc) popup_wgtman_window

0xd07a,	// (0x0004a55b) scroll_pane_cp038

0xbe29,	// (0x0004930a) wgtman_btn_pane_cp_01_ParamLimits

0xbe29,	// (0x0004930a) wgtman_btn_pane_cp_01

0x0278,	// (0x0003d759) wgtman_content_pane

0x0281,	// (0x0003d762) wgtman_heading_pane

0x02ce,	// (0x0003d7af) bg_heading_pane_cp02

0x028a,	// (0x0003d76b) wgtman_heading_pane_g1

0x0292,	// (0x0003d773) wgtman_heading_pane_t1

0x02a0,	// (0x0003d781) scroll_pane_cp036

0x02a8,	// (0x0003d789) wgtman_list_pane

0x02b0,	// (0x0003d791) wgtman_list_pane_t1_ParamLimits

0x02b0,	// (0x0003d791) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
