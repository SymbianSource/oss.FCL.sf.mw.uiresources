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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008b79d };

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
0x0e15,	// (0x0008c5b2) Screen

0x0e21,	// (0x0008c5be) application_window

0x0e5d,	// (0x0008c5fa) area_bottom_pane_ParamLimits

0x0e5d,	// (0x0008c5fa) area_bottom_pane

0x0e96,	// (0x0008c633) area_top_pane_ParamLimits

0x0e96,	// (0x0008c633) area_top_pane

0x9e2b,	// (0x000955c8) call_video_uplink_pane_ParamLimits

0x9e2b,	// (0x000955c8) call_video_uplink_pane

0x0f24,	// (0x0008c6c1) main_pane_ParamLimits

0x0f24,	// (0x0008c6c1) main_pane

0xa7c2,	// (0x00095f5f) context_pane

0x48f1,	// (0x0009008e) navi_pane

0x4923,	// (0x000900c0) popup_cale_events_window_ParamLimits

0x4923,	// (0x000900c0) popup_cale_events_window

0xa7d5,	// (0x00095f72) popup_mup_playback_window

0x493b,	// (0x000900d8) signal_pane

0xe374,	// (0x00099b11) main_browser_pane

0xe526,	// (0x00099cc3) main_burst_pane

0x463f,	// (0x0008fddc) main_calc_pane

0xa762,	// (0x00095eff) main_cale_day_pane

0x4653,	// (0x0008fdf0) main_cale_month_pane

0xa762,	// (0x00095eff) main_cale_week_pane

0xe526,	// (0x00099cc3) main_call_pane

0xe01e,	// (0x000997bb) main_call_poc_pane

0xe526,	// (0x00099cc3) main_camera_pane

0xe526,	// (0x00099cc3) main_chi_dic_pane

0xece4,	// (0x0009a481) main_clock_pane

0xe01e,	// (0x000997bb) main_fmradio_pane

0xe526,	// (0x00099cc3) main_graph_messa_pane

0xe01e,	// (0x000997bb) main_help_pane

0xe374,	// (0x00099b11) main_im_pane

0xe279,	// (0x00099a16) main_image_pane_ParamLimits

0xe279,	// (0x00099a16) main_image_pane

0xe01e,	// (0x000997bb) main_location2_pane

0xe526,	// (0x00099cc3) main_location_pane

0xe279,	// (0x00099a16) main_messa_pane

0xe01e,	// (0x000997bb) main_mp2_pane

0xe526,	// (0x00099cc3) main_mp_pane

0xe01e,	// (0x000997bb) main_msg_pane

0xe01e,	// (0x000997bb) main_mup_eq_pane

0xe01e,	// (0x000997bb) main_mup_pane

0xe374,	// (0x00099b11) main_notes_pane

0xe01e,	// (0x000997bb) main_pec_pane

0xe01e,	// (0x000997bb) main_phob_pane

0xe01e,	// (0x000997bb) main_pinb_pane

0xe01e,	// (0x000997bb) main_postcard_pane

0xe01e,	// (0x000997bb) main_qdial_pane

0xe526,	// (0x00099cc3) main_skin_pane

0xe01e,	// (0x000997bb) main_smil2_pane

0xe526,	// (0x00099cc3) main_smil_pane

0xe526,	// (0x00099cc3) main_video_pane

0xe526,	// (0x00099cc3) main_video_tele_pane

0xe279,	// (0x00099a16) main_viewer_pane_ParamLimits

0xe279,	// (0x00099a16) main_viewer_pane

0xe526,	// (0x00099cc3) main_vorec_pane

0x46a5,	// (0x0008fe42) popup_blid_sat_info_window_ParamLimits

0x46a5,	// (0x0008fe42) popup_blid_sat_info_window

0x46fd,	// (0x0008fe9a) popup_dyc_status_message_window_ParamLimits

0x46fd,	// (0x0008fe9a) popup_dyc_status_message_window

0x4717,	// (0x0008feb4) popup_grid_large_graphic_window_ParamLimits

0x4717,	// (0x0008feb4) popup_grid_large_graphic_window

0x47d3,	// (0x0008ff70) popup_loc_request_window_ParamLimits

0x47d3,	// (0x0008ff70) popup_loc_request_window

0x48c9,	// (0x00090066) popup_wml_address_window_ParamLimits

0x48c9,	// (0x00090066) popup_wml_address_window

0x4479,	// (0x0008fc16) call_muted_g1

0x39ac,	// (0x0008f149) popup_call_audio_conf_window_ParamLimits

0x39ac,	// (0x0008f149) popup_call_audio_conf_window

0x448d,	// (0x0008fc2a) popup_call_audio_first_window_ParamLimits

0x448d,	// (0x0008fc2a) popup_call_audio_first_window

0x4503,	// (0x0008fca0) popup_call_audio_in_window_ParamLimits

0x4503,	// (0x0008fca0) popup_call_audio_in_window

0x453f,	// (0x0008fcdc) popup_call_audio_out_window_ParamLimits

0x453f,	// (0x0008fcdc) popup_call_audio_out_window

0x4579,	// (0x0008fd16) popup_call_audio_second_window_ParamLimits

0x4579,	// (0x0008fd16) popup_call_audio_second_window

0x45cf,	// (0x0008fd6c) popup_call_audio_wait_window_ParamLimits

0x45cf,	// (0x0008fd6c) popup_call_audio_wait_window

0x4604,	// (0x0008fda1) popup_number_entry_window_ParamLimits

0x4604,	// (0x0008fda1) popup_number_entry_window

0xdc0b,	// (0x000993a8) bg_popup_call_pane_cp05_ParamLimits

0xdc0b,	// (0x000993a8) bg_popup_call_pane_cp05

0xdc2b,	// (0x000993c8) popup_number_entry_window_t1

0xdc3e,	// (0x000993db) popup_number_entry_window_t2

0xdc50,	// (0x000993ed) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0009a808) popup_number_entry_window_t

0xdc62,	// (0x000993ff) text_title_cp2

0xdc75,	// (0x00099412) bg_popup_call_pane_cp_ParamLimits

0xdc75,	// (0x00099412) bg_popup_call_pane_cp

0xdc83,	// (0x00099420) call_thumbnail_pane

0xdc8b,	// (0x00099428) popup_call_audio_in_window_g1_ParamLimits

0xdc8b,	// (0x00099428) popup_call_audio_in_window_g1

0xdc97,	// (0x00099434) popup_call_audio_in_window_g2_ParamLimits

0xdc97,	// (0x00099434) popup_call_audio_in_window_g2

0xdca3,	// (0x00099440) popup_call_audio_in_window_g3_ParamLimits

0xdca3,	// (0x00099440) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0009a811) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0009a811) popup_call_audio_in_window_g

0xdcaf,	// (0x0009944c) popup_call_audio_in_window_t1_ParamLimits

0xdcaf,	// (0x0009944c) popup_call_audio_in_window_t1

0xdccb,	// (0x00099468) popup_call_audio_in_window_t2_ParamLimits

0xdccb,	// (0x00099468) popup_call_audio_in_window_t2

0xdce7,	// (0x00099484) popup_call_audio_in_window_t3_ParamLimits

0xdce7,	// (0x00099484) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0009a818) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0009a818) popup_call_audio_in_window_t

0xdc75,	// (0x00099412) bg_popup_call_pane_cp01_ParamLimits

0xdc75,	// (0x00099412) bg_popup_call_pane_cp01

0xdc83,	// (0x00099420) call_thumbnail_pane_cp02

0xdcfa,	// (0x00099497) call_type_pane_cp022

0xdd02,	// (0x0009949f) popup_call_audio_out_window_g1_ParamLimits

0xdd02,	// (0x0009949f) popup_call_audio_out_window_g1

0xdd14,	// (0x000994b1) popup_call_audio_out_window_g2_ParamLimits

0xdd14,	// (0x000994b1) popup_call_audio_out_window_g2

0xdd20,	// (0x000994bd) popup_call_audio_out_window_g3_ParamLimits

0xdd20,	// (0x000994bd) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0009a81f) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0009a81f) popup_call_audio_out_window_g

0xdd32,	// (0x000994cf) popup_call_audio_out_window_t1_ParamLimits

0xdd32,	// (0x000994cf) popup_call_audio_out_window_t1

0xdd4a,	// (0x000994e7) popup_call_audio_out_window_t2_ParamLimits

0xdd4a,	// (0x000994e7) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0009a826) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0009a826) popup_call_audio_out_window_t

0xdd5f,	// (0x000994fc) bg_popup_call_pane_ParamLimits

0xdd5f,	// (0x000994fc) bg_popup_call_pane

0x10e0,	// (0x0008c87d) call_thumbnail_pane_cp_ParamLimits

0x10e0,	// (0x0008c87d) call_thumbnail_pane_cp

0xdde3,	// (0x00099580) call_type_pane_cp01_ParamLimits

0xdde3,	// (0x00099580) call_type_pane_cp01

0xde27,	// (0x000995c4) popup_call_audio_first_window_g1_ParamLimits

0xde27,	// (0x000995c4) popup_call_audio_first_window_g1

0xde73,	// (0x00099610) popup_call_audio_first_window_g2_ParamLimits

0xde73,	// (0x00099610) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0009a82b) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0009a82b) popup_call_audio_first_window_g

0xdeb7,	// (0x00099654) popup_call_audio_first_window_t1_ParamLimits

0xdeb7,	// (0x00099654) popup_call_audio_first_window_t1

0xdf63,	// (0x00099700) popup_call_audio_first_window_t4_ParamLimits

0xdf63,	// (0x00099700) popup_call_audio_first_window_t4

0xdfef,	// (0x0009978c) popup_call_audio_first_window_t5_ParamLimits

0xdfef,	// (0x0009978c) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0009a830) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0009a830) popup_call_audio_first_window_t

0xe01e,	// (0x000997bb) bg_popup_call_pane_cp02

0xe028,	// (0x000997c5) call_type_pane_cp023

0xe030,	// (0x000997cd) popup_call_audio_wait_window_g1

0xe038,	// (0x000997d5) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0009a837) popup_call_audio_wait_window_g

0xe040,	// (0x000997dd) popup_call_audio_wait_window_t3

0xe04e,	// (0x000997eb) bg_popup_call_pane_cp03_ParamLimits

0xe04e,	// (0x000997eb) bg_popup_call_pane_cp03

0xe0ae,	// (0x0009984b) call_thumbnail_pane_cp011_ParamLimits

0xe0ae,	// (0x0009984b) call_thumbnail_pane_cp011

0xe0ba,	// (0x00099857) call_type_pane_cp034_ParamLimits

0xe0ba,	// (0x00099857) call_type_pane_cp034

0xe0f6,	// (0x00099893) popup_call_audio_second_window_g1_ParamLimits

0xe0f6,	// (0x00099893) popup_call_audio_second_window_g1

0xe132,	// (0x000998cf) popup_call_audio_second_window_g2_ParamLimits

0xe132,	// (0x000998cf) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0009a83c) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0009a83c) popup_call_audio_second_window_g

0xe16e,	// (0x0009990b) popup_call_audio_second_window_t1_ParamLimits

0xe16e,	// (0x0009990b) popup_call_audio_second_window_t1

0xe1ef,	// (0x0009998c) popup_call_audio_second_window_t2_ParamLimits

0xe1ef,	// (0x0009998c) popup_call_audio_second_window_t2

0xe225,	// (0x000999c2) popup_call_audio_second_window_t3_ParamLimits

0xe225,	// (0x000999c2) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0009a841) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0009a841) popup_call_audio_second_window_t

0xe01e,	// (0x000997bb) bg_popup_call_pane_cp04

0xe25b,	// (0x000999f8) list_conf_pane

0xe263,	// (0x00099a00) popup_call_audio_conf_window_t1

0xe271,	// (0x00099a0e) call_thumbnail_pane_g1

0xe279,	// (0x00099a16) bg_pinb_pane_ParamLimits

0xe279,	// (0x00099a16) bg_pinb_pane

0xe287,	// (0x00099a24) find_pinb_pane

0xe279,	// (0x00099a16) listscroll_pinb_pane_ParamLimits

0xe279,	// (0x00099a16) listscroll_pinb_pane

0xe291,	// (0x00099a2e) pinb_bg_pane_g1

0xe291,	// (0x00099a2e) pinb_bg_pane_g2

0xe291,	// (0x00099a2e) pinb_bg_pane_g3

0xe291,	// (0x00099a2e) pinb_bg_pane_g4

0xe291,	// (0x00099a2e) pinb_bg_pane_g5

0xe291,	// (0x00099a2e) pinb_bg_pane_g6

0xe291,	// (0x00099a2e) pinb_bg_pane_g7

0xe291,	// (0x00099a2e) pinb_bg_pane_g8

0xe291,	// (0x00099a2e) pinb_bg_pane_g9

0xe291,	// (0x00099a2e) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0009a848) pinb_bg_pane_g

0xdc01,	// (0x0009939e) grid_pinb_pane

0xdc01,	// (0x0009939e) list_pinb_pane

0xe29b,	// (0x00099a38) scroll_pane_cp01_ParamLimits

0xe29b,	// (0x00099a38) scroll_pane_cp01

0xe2a9,	// (0x00099a46) find_pinb_pane_g1_ParamLimits

0xe2a9,	// (0x00099a46) find_pinb_pane_g1

0xe2c1,	// (0x00099a5e) find_pinb_pane_t1

0xe2d3,	// (0x00099a70) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0009a862) find_pinb_pane_t

0xe2e8,	// (0x00099a85) input_focus_pane_cp01_ParamLimits

0xe2e8,	// (0x00099a85) input_focus_pane_cp01

0xe2f4,	// (0x00099a91) cell_pinb_pane_ParamLimits

0xe2f4,	// (0x00099a91) cell_pinb_pane

0xe302,	// (0x00099a9f) cell_pinb_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) cell_pinb_pane_g1

0xe310,	// (0x00099aad) cell_pinb_pane_g2_ParamLimits

0xe310,	// (0x00099aad) cell_pinb_pane_g2

0xe310,	// (0x00099aad) cell_pinb_pane_g3_ParamLimits

0xe310,	// (0x00099aad) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0009a867) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0009a867) cell_pinb_pane_g

0xe01e,	// (0x000997bb) grid_highlight_pane_cp01

0xe2f4,	// (0x00099a91) list_pinb_item_pane_ParamLimits

0xe2f4,	// (0x00099a91) list_pinb_item_pane

0xdc01,	// (0x0009939e) list_highlight_pane_cp02

0xe31e,	// (0x00099abb) list_pinb_item_pane_g1_ParamLimits

0xe31e,	// (0x00099abb) list_pinb_item_pane_g1

0xe310,	// (0x00099aad) list_pinb_item_pane_g2_ParamLimits

0xe310,	// (0x00099aad) list_pinb_item_pane_g2

0xe302,	// (0x00099a9f) list_pinb_item_pane_g3_ParamLimits

0xe302,	// (0x00099a9f) list_pinb_item_pane_g3

0xe310,	// (0x00099aad) list_pinb_item_pane_g4_ParamLimits

0xe310,	// (0x00099aad) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0009a86e) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0009a86e) list_pinb_item_pane_g

0xe32c,	// (0x00099ac9) list_pinb_item_pane_t1_ParamLimits

0xe32c,	// (0x00099ac9) list_pinb_item_pane_t1

0x1122,	// (0x0008c8bf) calc_display_pane

0x1147,	// (0x0008c8e4) calc_paper_pane

0x116a,	// (0x0008c907) grid_calc_pane

0xe01e,	// (0x000997bb) bg_list_pane_cp01

0x1198,	// (0x0008c935) clock_g1

0x11a0,	// (0x0008c93d) clock_g2

0x0001,

0xf0da,	// (0x0009a877) clock_g

0x11a8,	// (0x0008c945) clock_t1_ParamLimits

0x11a8,	// (0x0008c945) clock_t1

0x11bd,	// (0x0008c95a) clock_t2_ParamLimits

0x11bd,	// (0x0008c95a) clock_t2

0x11cf,	// (0x0008c96c) clock_t3_ParamLimits

0x11cf,	// (0x0008c96c) clock_t3

0x11e1,	// (0x0008c97e) clock_t4_ParamLimits

0x11e1,	// (0x0008c97e) clock_t4

0x11f3,	// (0x0008c990) clock_t5_ParamLimits

0x11f3,	// (0x0008c990) clock_t5

0x1208,	// (0x0008c9a5) clock_t6_ParamLimits

0x1208,	// (0x0008c9a5) clock_t6

0x121a,	// (0x0008c9b7) clock_t7_ParamLimits

0x121a,	// (0x0008c9b7) clock_t7

0x122c,	// (0x0008c9c9) clock_t8_ParamLimits

0x122c,	// (0x0008c9c9) clock_t8

0x1240,	// (0x0008c9dd) clock_t9_ParamLimits

0x1240,	// (0x0008c9dd) clock_t9

0x0008,

0xf0df,	// (0x0009a87c) clock_t_ParamLimits

0xf0df,	// (0x0009a87c) clock_t

0xe340,	// (0x00099add) popup_clock_analogue_window_cp02

0xe340,	// (0x00099add) popup_clock_digital_window_cp01

0xe01e,	// (0x000997bb) listscroll_help_pane

0xe01e,	// (0x000997bb) phob_pre_status_pane

0xe348,	// (0x00099ae5) grid_qdial_pane

0x1254,	// (0x0008c9f1) listscroll_mce_pane

0xe279,	// (0x00099a16) bg_notes_pane

0xe352,	// (0x00099aef) list_notes_pane

0x126e,	// (0x0008ca0b) scroll_pane_cp06

0xe360,	// (0x00099afd) bg_calc_paper_pane

0x9e69,	// (0x00095606) list_calc_pane

0xe374,	// (0x00099b11) bg_calc_display_pane

0x1282,	// (0x0008ca1f) calc_display_pane_t1

0x1297,	// (0x0008ca34) calc_display_pane_t2

0x9e83,	// (0x00095620) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0009a88f) calc_display_pane_t

0x12ac,	// (0x0008ca49) cell_calc_pane_ParamLimits

0x12ac,	// (0x0008ca49) cell_calc_pane

0xe380,	// (0x00099b1d) bg_calc_paper_pane_g1

0xe38c,	// (0x00099b29) bg_calc_paper_pane_g2

0xe398,	// (0x00099b35) bg_calc_paper_pane_g3

0xe3a4,	// (0x00099b41) bg_calc_paper_pane_g4

0xe3b0,	// (0x00099b4d) bg_calc_paper_pane_g5

0x12e1,	// (0x0008ca7e) bg_calc_paper_pane_g6

0x12f0,	// (0x0008ca8d) bg_calc_paper_pane_g7

0x12ff,	// (0x0008ca9c) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0009a896) bg_calc_paper_pane_g

0x1312,	// (0x0008caaf) calc_bg_paper_pane_g9

0x1325,	// (0x0008cac2) list_calc_item_pane_ParamLimits

0x1325,	// (0x0008cac2) list_calc_item_pane

0xe3bc,	// (0x00099b59) list_calc_item_pane_g1

0x9e95,	// (0x00095632) list_calc_item_pane_t1_ParamLimits

0x9e95,	// (0x00095632) list_calc_item_pane_t1

0x133d,	// (0x0008cada) list_calc_item_pane_t2_ParamLimits

0x133d,	// (0x0008cada) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0009a8a7) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0009a8a7) list_calc_item_pane_t

0xe291,	// (0x00099a2e) cell_calc_pane_g1

0xe3c9,	// (0x00099b66) grid_highlight_pane_cp02

0x136f,	// (0x0008cb0c) bg_calc_display_pane_g1

0x1378,	// (0x0008cb15) bg_calc_display_pane_g2

0xefd9,	// (0x0009a776) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0009a8b1) bg_calc_display_pane_g

0x1382,	// (0x0008cb1f) cell_qdial_pane_ParamLimits

0x1382,	// (0x0008cb1f) cell_qdial_pane

0x1396,	// (0x0008cb33) cell_qdial_pane_g1_ParamLimits

0x1396,	// (0x0008cb33) cell_qdial_pane_g1

0x13ac,	// (0x0008cb49) cell_qdial_pane_g2_ParamLimits

0x13ac,	// (0x0008cb49) cell_qdial_pane_g2

0xe3eb,	// (0x00099b88) cell_qdial_pane_g3_ParamLimits

0xe3eb,	// (0x00099b88) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0009a8b8) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0009a8b8) cell_qdial_pane_g

0x13d3,	// (0x0008cb70) cell_qdial_pane_t1_ParamLimits

0x13d3,	// (0x0008cb70) cell_qdial_pane_t1

0x13eb,	// (0x0008cb88) cell_qdial_pane_t2_ParamLimits

0x13eb,	// (0x0008cb88) cell_qdial_pane_t2

0x13fe,	// (0x0008cb9b) cell_qdial_pane_t3_ParamLimits

0x13fe,	// (0x0008cb9b) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0009a8c1) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0009a8c1) cell_qdial_pane_t

0xe01e,	// (0x000997bb) grid_highlight_pane_cp04

0xe3f7,	// (0x00099b94) thumbnail_qdial_pane_ParamLimits

0xe3f7,	// (0x00099b94) thumbnail_qdial_pane

0xe453,	// (0x00099bf0) list_help_pane

0xe45c,	// (0x00099bf9) scroll_pane_cp02

0xefe2,	// (0x0009a77f) help_list_pane_t1_ParamLimits

0xefe2,	// (0x0009a77f) help_list_pane_t1

0x9ea7,	// (0x00095644) bg_notes_pane_g2

0x9eaf,	// (0x0009564c) bg_notes_pane_g3

0x9eb7,	// (0x00095654) notes_bg_pane_g1

0x9ebf,	// (0x0009565c) notes_bg_pane_g4

0x9ec7,	// (0x00095664) notes_bg_pane_g5

0x9ecf,	// (0x0009566c) notes_bg_pane_g6

0x9ed7,	// (0x00095674) notes_bg_pane_g7

0x9edf,	// (0x0009567c) notes_bg_pane_g8

0x9ee7,	// (0x00095684) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0009a8df) notes_bg_pane_g

0x1411,	// (0x0008cbae) list_notes_text_pane_ParamLimits

0x1411,	// (0x0008cbae) list_notes_text_pane

0xe465,	// (0x00099c02) list_notes_text_pane_g1

0x1426,	// (0x0008cbc3) list_notes_text_pane_t1

0x1434,	// (0x0008cbd1) listscroll_cale_week_pane

0x1460,	// (0x0008cbfd) bg_cale_heading_pane

0xe488,	// (0x00099c25) bg_cale_pane_cp01

0x1478,	// (0x0008cc15) cale_week_corner_pane

0x1497,	// (0x0008cc34) cale_week_day_heading_pane

0x14b4,	// (0x0008cc51) cale_week_scroll_pane_g1

0x14c7,	// (0x0008cc64) cale_week_scroll_pane_g2

0x14df,	// (0x0008cc7c) cale_week_scroll_pane_g3

0x14f7,	// (0x0008cc94) cale_week_scroll_pane_g4

0x150f,	// (0x0008ccac) cale_week_scroll_pane_g5

0x152f,	// (0x0008cccc) cale_week_scroll_pane_g6

0x154f,	// (0x0008ccec) cale_week_scroll_pane_g7

0x156f,	// (0x0008cd0c) cale_week_scroll_pane_g8

0x1593,	// (0x0008cd30) cale_week_scroll_pane_g9

0x15ab,	// (0x0008cd48) cale_week_scroll_pane_g10

0x15c3,	// (0x0008cd60) cale_week_scroll_pane_g11

0x15db,	// (0x0008cd78) cale_week_scroll_pane_g12

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g13

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g14

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0009a8ee) cale_week_scroll_pane_g

0x162f,	// (0x0008cdcc) cale_week_time_pane

0x1653,	// (0x0008cdf0) grid_cale_week_pane

0xe4b7,	// (0x00099c54) scroll_pane_cp08

0x1679,	// (0x0008ce16) cell_cale_week_pane_ParamLimits

0x1679,	// (0x0008ce16) cell_cale_week_pane

0x1707,	// (0x0008cea4) cale_week_day_heading_pane_t1

0x1731,	// (0x0008cece) cale_week_day_heading_pane_t2

0x1760,	// (0x0008cefd) cale_week_day_heading_pane_t3

0x178f,	// (0x0008cf2c) cale_week_day_heading_pane_t4

0x17be,	// (0x0008cf5b) cale_week_day_heading_pane_t5

0x17f5,	// (0x0008cf92) cale_week_day_heading_pane_t6

0x182c,	// (0x0008cfc9) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0009a90f) cale_week_day_heading_pane_t

0xe4d4,	// (0x00099c71) bg_cale_side_pane

0x1856,	// (0x0008cff3) cale_week_time_pane_t1

0x1870,	// (0x0008d00d) cale_week_time_pane_t2

0x188a,	// (0x0008d027) cale_week_time_pane_t3

0x18a4,	// (0x0008d041) cale_week_time_pane_t4

0x18be,	// (0x0008d05b) cale_week_time_pane_t5

0x18d8,	// (0x0008d075) cale_week_time_pane_t6

0x18f2,	// (0x0008d08f) cale_week_time_pane_t7

0x190c,	// (0x0008d0a9) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0009a91e) cale_week_time_pane_t

0x1926,	// (0x0008d0c3) cell_cale_week_pane_g2

0x1945,	// (0x0008d0e2) cell_cale_week_pane_g3_ParamLimits

0x1945,	// (0x0008d0e2) cell_cale_week_pane_g3

0xe4e2,	// (0x00099c7f) grid_highlight_pane_cp07

0xe4ea,	// (0x00099c87) listscroll_gms_pane

0xe4f4,	// (0x00099c91) grid_gms_pane

0xe4fd,	// (0x00099c9a) listscroll_gms_pane_g1

0xe505,	// (0x00099ca2) listscroll_gms_pane_g2

0x0001,

0x0011,	// (0x0008b7ae) listscroll_gms_pane_g

0x195d,	// (0x0008d0fa) scroll_pane_cp010

0x1968,	// (0x0008d105) cell_gms_pane_ParamLimits

0x1968,	// (0x0008d105) cell_gms_pane

0x197b,	// (0x0008d118) cell_gms_pane_g1

0xe50d,	// (0x00099caa) cell_gms_pane_g2

0xe465,	// (0x00099c02) cell_gms_pane_g3

0xe515,	// (0x00099cb2) cell_gms_pane_g4

0x0003,

0xf192,	// (0x0009a92f) cell_gms_pane_g

0xe51e,	// (0x00099cbb) grid_highlight_pane_cp09

0x4401,	// (0x0008fb9e) phob_pre_status_pane_g1

0x4409,	// (0x0008fba6) phob_pre_status_pane_g2

0x4411,	// (0x0008fbae) phob_pre_status_pane_g3

0x4419,	// (0x0008fbb6) phob_pre_status_pane_g4

0x0004,

0xf475,	// (0x0009ac12) phob_pre_status_pane_g

0x4429,	// (0x0008fbc6) phob_pre_status_pane_t1

0x4437,	// (0x0008fbd4) phob_pre_status_pane_t2

0x4447,	// (0x0008fbe4) phob_pre_status_pane_t3

0x0002,

0xf480,	// (0x0009ac1d) phob_pre_status_pane_t

0xe526,	// (0x00099cc3) bg_list_pane_cp05

0x198b,	// (0x0008d128) grid_vorec_pane

0x1993,	// (0x0008d130) vorec_t1

0x19a1,	// (0x0008d13e) vorec_t2

0x19af,	// (0x0008d14c) vorec_t3

0x19bd,	// (0x0008d15a) vorec_t4

0x9866,	// (0x00095003) vorec_t5

0x9874,	// (0x00095011) vorec_t6

0x0004,

0xf19b,	// (0x0009a938) vorec_t

0x9882,	// (0x0009501f) wait_bar_pane_cp01

0x19d9,	// (0x0008d176) cell_vorec_pane_ParamLimits

0x19d9,	// (0x0008d176) cell_vorec_pane

0x9eef,	// (0x0009568c) cell_vorec_pane_g1

0xe01e,	// (0x000997bb) grid_highlight_pane_cp05

0xe29b,	// (0x00099a38) cams_zoom_pane

0xe29b,	// (0x00099a38) image_vga_pane

0xe302,	// (0x00099a9f) main_camera_pane_g1

0xe302,	// (0x00099a9f) main_camera_pane_g2

0xe302,	// (0x00099a9f) main_camera_pane_g3

0xe302,	// (0x00099a9f) main_camera_pane_g4

0xe302,	// (0x00099a9f) main_camera_pane_g5

0xe302,	// (0x00099a9f) main_camera_pane_g6

0xe302,	// (0x00099a9f) main_camera_pane_g7

0x0007,

0xf1a6,	// (0x0009a943) main_camera_pane_g

0xe52e,	// (0x00099ccb) main_camera_pane_t1

0xe52e,	// (0x00099ccb) main_camera_pane_t2

0x0001,

0xf1b7,	// (0x0009a954) main_camera_pane_t

0x1a00,	// (0x0008d19d) cams_zoom_pane_cp_ParamLimits

0x1a00,	// (0x0008d19d) cams_zoom_pane_cp

0x1a34,	// (0x0008d1d1) image_cif_pane_ParamLimits

0x1a34,	// (0x0008d1d1) image_cif_pane

0xdc01,	// (0x0009939e) image_subqcif_pane

0x1a46,	// (0x0008d1e3) main_video_pane_g1_ParamLimits

0x1a46,	// (0x0008d1e3) main_video_pane_g1

0x1a74,	// (0x0008d211) main_video_pane_g2_ParamLimits

0x1a74,	// (0x0008d211) main_video_pane_g2

0x1aae,	// (0x0008d24b) main_video_pane_g3_ParamLimits

0x1aae,	// (0x0008d24b) main_video_pane_g3

0x1aae,	// (0x0008d24b) main_video_pane_g4_ParamLimits

0x1aae,	// (0x0008d24b) main_video_pane_g4

0x1ae2,	// (0x0008d27f) main_video_pane_g5_ParamLimits

0x1ae2,	// (0x0008d27f) main_video_pane_g5

0xe542,	// (0x00099cdf) main_video_pane_g6_ParamLimits

0xe542,	// (0x00099cdf) main_video_pane_g6

0x0006,

0xf1bc,	// (0x0009a959) main_video_pane_g_ParamLimits

0xf1bc,	// (0x0009a959) main_video_pane_g

0x1afe,	// (0x0008d29b) main_video_pane_t1_ParamLimits

0x1afe,	// (0x0008d29b) main_video_pane_t1

0xe55c,	// (0x00099cf9) cams_zoom_pane_g1

0xe55c,	// (0x00099cf9) cams_zoom_pane_g2

0xe55c,	// (0x00099cf9) cams_zoom_pane_g3

0xe55c,	// (0x00099cf9) cams_zoom_pane_g4

0x0003,

0xf1cb,	// (0x0009a968) cams_zoom_pane_g

0x1b56,	// (0x0008d2f3) grid_cams_pane

0x1b70,	// (0x0008d30d) linegrid_cams_pane

0x1b84,	// (0x0008d321) cell_cams_pane_ParamLimits

0x1b84,	// (0x0008d321) cell_cams_pane

0xe566,	// (0x00099d03) cams_burst_image_pane

0xe56e,	// (0x00099d0b) cell_cams_pane_g1

0xe01e,	// (0x000997bb) grid_highlight_pane_cp03

0xe291,	// (0x00099a2e) mp_bg_pane_g1

0xdc01,	// (0x0009939e) bg_list_pane_cp03

0xdc01,	// (0x0009939e) bg_mp_pane

0xdc01,	// (0x0009939e) grid_mp_pane

0xe55c,	// (0x00099cf9) media_player_g1

0xea78,	// (0x0009a215) media_player_t1

0xea78,	// (0x0009a215) media_player_t2

0xea78,	// (0x0009a215) media_player_t3

0xea78,	// (0x0009a215) media_player_t4

0xea78,	// (0x0009a215) media_player_t5

0xea78,	// (0x0009a215) media_player_t6

0xea78,	// (0x0009a215) media_player_t7

0x0006,

0x03c4,	// (0x0008bb61) media_player_t

0xdc01,	// (0x0009939e) wait_bar_pane_cp02

0xf453,	// (0x0009abf0) main_usb_pane_t

0xece4,	// (0x0009a481) cell_mp_pane

0xe291,	// (0x00099a2e) cell_mp_pane_g1

0xe01e,	// (0x000997bb) grid_highlight_pane_cp06

0xe576,	// (0x00099d13) grid_skin_colour_pane

0xe57e,	// (0x00099d1b) list_highlight_pane_cp03

0x1ba4,	// (0x0008d341) skin_g1

0xe586,	// (0x00099d23) skin_t1

0xe595,	// (0x00099d32) skin_t2

0x0001,

0x0078,	// (0x0008b815) skin_t

0x1bac,	// (0x0008d349) cell_skin_colour_pane_ParamLimits

0x1bac,	// (0x0008d349) cell_skin_colour_pane

0xe5a3,	// (0x00099d40) cell_skin_colour_pane_g1

0x1c25,	// (0x0008d3c2) call_video_g1_ParamLimits

0x1c25,	// (0x0008d3c2) call_video_g1

0x1c41,	// (0x0008d3de) call_video_g2_ParamLimits

0x1c41,	// (0x0008d3de) call_video_g2

0x0001,

0xf1e4,	// (0x0009a981) call_video_g_ParamLimits

0xf1e4,	// (0x0009a981) call_video_g

0x1c93,	// (0x0008d430) call_video_uplink_pane_cp1_ParamLimits

0x1c93,	// (0x0008d430) call_video_uplink_pane_cp1

0xe5b5,	// (0x00099d52) call_video_uplink_pane_cp2

0x1d32,	// (0x0008d4cf) video_down_crop_pane_ParamLimits

0x1d32,	// (0x0008d4cf) video_down_crop_pane

0x1e29,	// (0x0008d5c6) video_down_pane_ParamLimits

0x1e29,	// (0x0008d5c6) video_down_pane

0xe5bd,	// (0x00099d5a) video_down_subqcif_pane_ParamLimits

0xe5bd,	// (0x00099d5a) video_down_subqcif_pane

0xe5d5,	// (0x00099d72) video_down_subqcif_pane_cp_ParamLimits

0xe5d5,	// (0x00099d72) video_down_subqcif_pane_cp

0xe5fb,	// (0x00099d98) im_reading_pane_ParamLimits

0xe5fb,	// (0x00099d98) im_reading_pane

0x1f39,	// (0x0008d6d6) im_writing_pane_ParamLimits

0x1f39,	// (0x0008d6d6) im_writing_pane

0x1f4f,	// (0x0008d6ec) im_reading_pane_t1

0xe615,	// (0x00099db2) list_im_pane

0xe626,	// (0x00099dc3) scroll_pane_cp07

0x1f88,	// (0x0008d725) im_writing_pane_t1_ParamLimits

0x1f88,	// (0x0008d725) im_writing_pane_t1

0xe63f,	// (0x00099ddc) im_writing_pane_t2_ParamLimits

0xe63f,	// (0x00099ddc) im_writing_pane_t2

0x0001,

0xf1ee,	// (0x0009a98b) im_writing_pane_t_ParamLimits

0xf1ee,	// (0x0009a98b) im_writing_pane_t

0xe01e,	// (0x000997bb) input_focus_pane_cp04

0xe01e,	// (0x000997bb) input_focus_pane_cp05

0x1f9d,	// (0x0008d73a) list_im_single_pane_ParamLimits

0x1f9d,	// (0x0008d73a) list_im_single_pane

0x1fb1,	// (0x0008d74e) list_single_im_pane_t1

0xe526,	// (0x00099cc3) blid_accuracy_pane

0xe526,	// (0x00099cc3) blid_compass_pane

0xa71a,	// (0x00095eb7) main_location_t1

0xa71a,	// (0x00095eb7) main_location_t2

0xa71a,	// (0x00095eb7) main_location_t3

0x0002,

0xf46e,	// (0x0009ac0b) main_location_t

0xe01e,	// (0x000997bb) aid_levels_location

0xe291,	// (0x00099a2e) blid_accuracy_pane_g1

0xe291,	// (0x00099a2e) blid_accuracy_pane_g2

0x0001,

0x00db,	// (0x0008b878) blid_accuracy_pane_g

0xe687,	// (0x00099e24) wml_content_pane

0xe6c5,	// (0x00099e62) wml_button_pane_ParamLimits

0xe6c5,	// (0x00099e62) wml_button_pane

0x1fc0,	// (0x0008d75d) wml_list_single_large_pane_ParamLimits

0x1fc0,	// (0x0008d75d) wml_list_single_large_pane

0x1fd5,	// (0x0008d772) wml_list_single_medium_pane_ParamLimits

0x1fd5,	// (0x0008d772) wml_list_single_medium_pane

0x1feb,	// (0x0008d788) wml_list_single_small_pane_ParamLimits

0x1feb,	// (0x0008d788) wml_list_single_small_pane

0xe6d9,	// (0x00099e76) wml_selection_box_pane_ParamLimits

0xe6d9,	// (0x00099e76) wml_selection_box_pane

0xe6ec,	// (0x00099e89) wml_list_single_pane_t1

0xe6fb,	// (0x00099e98) wml_list_single_medium_pane_t1

0xe70a,	// (0x00099ea7) wml_list_single_large_pane_t1

0xe719,	// (0x00099eb6) input_focus_pane_cp02_ParamLimits

0xe719,	// (0x00099eb6) input_focus_pane_cp02

0xe72c,	// (0x00099ec9) wml_selection_box_pane_g1

0xe735,	// (0x00099ed2) wml_selection_box_pane_t1_ParamLimits

0xe735,	// (0x00099ed2) wml_selection_box_pane_t1

0xe279,	// (0x00099a16) bg_wml_button_pane_ParamLimits

0xe279,	// (0x00099a16) bg_wml_button_pane

0xe74d,	// (0x00099eea) wml_button_pane_g1

0xe755,	// (0x00099ef2) wml_button_pane_t1

0xe74d,	// (0x00099eea) wml_button_bg_pane_g1

0xe765,	// (0x00099f02) wml_button_bg_pane_g2

0xe76d,	// (0x00099f0a) wml_button_bg_pane_g3

0xe775,	// (0x00099f12) wml_button_bg_pane_g4

0xe77d,	// (0x00099f1a) wml_button_bg_pane_g5

0xe785,	// (0x00099f22) wml_button_bg_pane_g6

0xe78d,	// (0x00099f2a) wml_button_bg_pane_g7

0xe795,	// (0x00099f32) wml_button_bg_pane_g8

0xe79d,	// (0x00099f3a) wml_button_bg_pane_g9

0x0008,

0x008c,	// (0x0008b829) wml_button_bg_pane_g

0x2003,	// (0x0008d7a0) bg_list_pane_cp02

0xe7a5,	// (0x00099f42) mce_header_pane_ParamLimits

0xe7a5,	// (0x00099f42) mce_header_pane

0xe7bb,	// (0x00099f58) mce_icon_pane

0xe7bb,	// (0x00099f58) mce_image_pane

0x200b,	// (0x0008d7a8) mce_text_pane_ParamLimits

0x200b,	// (0x0008d7a8) mce_text_pane

0x201e,	// (0x0008d7bb) scroll_pane_cp03

0xe6bd,	// (0x00099e5a) scroll_pane_cp04

0xe7c4,	// (0x00099f61) scroll_pane_cp05_ParamLimits

0xe7c4,	// (0x00099f61) scroll_pane_cp05

0x2026,	// (0x0008d7c3) mce_header_field_pane_ParamLimits

0x2026,	// (0x0008d7c3) mce_header_field_pane

0x203d,	// (0x0008d7da) mce_header_field_pane_2_ParamLimits

0x203d,	// (0x0008d7da) mce_header_field_pane_2

0x2053,	// (0x0008d7f0) mce_header_field_pane_3

0x205b,	// (0x0008d7f8) list_single_mce_message_pane_ParamLimits

0x205b,	// (0x0008d7f8) list_single_mce_message_pane

0x2067,	// (0x0008d804) list_single_mce_smart_pane_ParamLimits

0x2067,	// (0x0008d804) list_single_mce_smart_pane

0xe7d0,	// (0x00099f6d) input_focus_pane_cp03

0xe7d9,	// (0x00099f76) list_header_data_pane

0x207b,	// (0x0008d818) mce_header_field_pane_t1

0x2089,	// (0x0008d826) list_single_mce_header_pane_ParamLimits

0x2089,	// (0x0008d826) list_single_mce_header_pane

0xe7e1,	// (0x00099f7e) list_single_mce_header_pane_t1

0xe7f0,	// (0x00099f8d) list_single_mce_message_pane_g1

0xe7f8,	// (0x00099f95) list_single_mce_message_pane_t1

0x20c3,	// (0x0008d860) bg_cale_heading_pane_cp01_ParamLimits

0x20c3,	// (0x0008d860) bg_cale_heading_pane_cp01

0xe806,	// (0x00099fa3) bg_cale_pane_cp02_ParamLimits

0xe806,	// (0x00099fa3) bg_cale_pane_cp02

0x20fd,	// (0x0008d89a) cale_month_corner_pane

0x211c,	// (0x0008d8b9) cale_month_day_heading_pane_ParamLimits

0x211c,	// (0x0008d8b9) cale_month_day_heading_pane

0x216e,	// (0x0008d90b) cale_month_pane_g1_ParamLimits

0x216e,	// (0x0008d90b) cale_month_pane_g1

0x219d,	// (0x0008d93a) cale_month_pane_g2_ParamLimits

0x219d,	// (0x0008d93a) cale_month_pane_g2

0x21cd,	// (0x0008d96a) cale_month_pane_g3_ParamLimits

0x21cd,	// (0x0008d96a) cale_month_pane_g3

0x2209,	// (0x0008d9a6) cale_month_pane_g4_ParamLimits

0x2209,	// (0x0008d9a6) cale_month_pane_g4

0x2245,	// (0x0008d9e2) cale_month_pane_g5_ParamLimits

0x2245,	// (0x0008d9e2) cale_month_pane_g5

0x228d,	// (0x0008da2a) cale_month_pane_g6_ParamLimits

0x228d,	// (0x0008da2a) cale_month_pane_g6

0x22d9,	// (0x0008da76) cale_month_pane_g7_ParamLimits

0x22d9,	// (0x0008da76) cale_month_pane_g7

0x232d,	// (0x0008daca) cale_month_pane_g8_ParamLimits

0x232d,	// (0x0008daca) cale_month_pane_g8

0x2381,	// (0x0008db1e) cale_month_pane_g9_ParamLimits

0x2381,	// (0x0008db1e) cale_month_pane_g9

0x23d3,	// (0x0008db70) cale_month_pane_g10_ParamLimits

0x23d3,	// (0x0008db70) cale_month_pane_g10

0x2425,	// (0x0008dbc2) cale_month_pane_g11_ParamLimits

0x2425,	// (0x0008dbc2) cale_month_pane_g11

0x2477,	// (0x0008dc14) cale_month_pane_g12_ParamLimits

0x2477,	// (0x0008dc14) cale_month_pane_g12

0x24c9,	// (0x0008dc66) cale_month_pane_g13_ParamLimits

0x24c9,	// (0x0008dc66) cale_month_pane_g13

0x000c,

0xf1f3,	// (0x0009a990) cale_month_pane_g_ParamLimits

0xf1f3,	// (0x0009a990) cale_month_pane_g

0x251b,	// (0x0008dcb8) cale_month_week_pane

0x253f,	// (0x0008dcdc) grid_cale_month_pane_ParamLimits

0x253f,	// (0x0008dcdc) grid_cale_month_pane

0x2588,	// (0x0008dd25) cale_month_day_heading_pane_t1

0x260e,	// (0x0008ddab) cale_month_day_heading_pane_t2

0x2687,	// (0x0008de24) cale_month_day_heading_pane_t3

0x2700,	// (0x0008de9d) cale_month_day_heading_pane_t4

0x2781,	// (0x0008df1e) cale_month_day_heading_pane_t5

0x280a,	// (0x0008dfa7) cale_month_day_heading_pane_t6

0x2893,	// (0x0008e030) cale_month_day_heading_pane_t7

0x0006,

0xf20e,	// (0x0009a9ab) cale_month_day_heading_pane_t

0xe4d4,	// (0x00099c71) bg_cale_side_pane_cp01

0x2924,	// (0x0008e0c1) cale_month_week_pane_t1

0x293d,	// (0x0008e0da) cale_month_week_pane_t2

0x2956,	// (0x0008e0f3) cale_month_week_pane_t3

0x296f,	// (0x0008e10c) cale_month_week_pane_t4

0x2988,	// (0x0008e125) cale_month_week_pane_t5

0x29a1,	// (0x0008e13e) cale_month_week_pane_t6

0x0005,

0xf21d,	// (0x0009a9ba) cale_month_week_pane_t

0x29ba,	// (0x0008e157) cell_cale_month_pane_ParamLimits

0x29ba,	// (0x0008e157) cell_cale_month_pane

0x9ef9,	// (0x00095696) cell_cale_month_pane_g1

0x2ae8,	// (0x0008e285) cell_cale_month_pane_t1_ParamLimits

0x2ae8,	// (0x0008e285) cell_cale_month_pane_t1

0xe4e2,	// (0x00099c7f) grid_highlight_pane_cp08

0xe291,	// (0x00099a2e) main_smil_g1

0x2b14,	// (0x0008e2b1) smil_status_pane

0xe845,	// (0x00099fe2) smil_text_pane

0xa632,	// (0x00095dcf) bg_popup_call3_rect_pane_g8

0xa63a,	// (0x00095dd7) bg_popup_call3_rect_pane_g9

0x0008,

0xf411,	// (0x0009abae) bg_popup_call3_rect_pane_g

0xa837,	// (0x00095fd4) smil_status_volume_pane_g1

0xe84f,	// (0x00099fec) smil_status_pane_t1

0xa86a,	// (0x00096007) volume_smil_pane

0xe866,	// (0x0009a003) list_smil_text_pane

0x2b27,	// (0x0008e2c4) scroll_pane_cp011

0x2b32,	// (0x0008e2cf) smil_text_list_pane_t1_ParamLimits

0x2b32,	// (0x0008e2cf) smil_text_list_pane_t1

0x9f05,	// (0x000956a2) aid_volume_smil_ParamLimits

0x9f05,	// (0x000956a2) aid_volume_smil

0xe291,	// (0x00099a2e) smil_volume_pane_g1

0xe291,	// (0x00099a2e) smil_volume_pane_g2

0x0001,

0x00db,	// (0x0008b878) smil_volume_pane_g

0x1434,	// (0x0008cbd1) listscroll_cale_day_pane

0xe870,	// (0x0009a00d) bg_cale_pane

0xe888,	// (0x0009a025) list_cale_pane

0xe8ab,	// (0x0009a048) scroll_pane_cp09

0xe8bc,	// (0x0009a059) cale_bg_pane_g1

0xe8c4,	// (0x0009a061) cale_bg_pane_g2

0xe8cc,	// (0x0009a069) cale_bg_pane_g3

0xe8d4,	// (0x0009a071) cale_bg_pane_g4

0xe8dc,	// (0x0009a079) cale_bg_pane_g5

0xe8e4,	// (0x0009a081) cale_bg_pane_g6

0xe8ec,	// (0x0009a089) cale_bg_pane_g7

0xe8f4,	// (0x0009a091) cale_bg_pane_g8

0xe8fc,	// (0x0009a099) cale_bg_pane_g9

0x0008,

0x00e0,	// (0x0008b87d) cale_bg_pane_g

0x2b6e,	// (0x0008e30b) list_cale_time_pane_ParamLimits

0x2b6e,	// (0x0008e30b) list_cale_time_pane

0xe90c,	// (0x0009a0a9) list_cale_time_pane_g1_ParamLimits

0xe90c,	// (0x0009a0a9) list_cale_time_pane_g1

0xe918,	// (0x0009a0b5) list_cale_time_pane_g2_ParamLimits

0xe918,	// (0x0009a0b5) list_cale_time_pane_g2

0x2b83,	// (0x0008e320) list_cale_time_pane_g3_ParamLimits

0x2b83,	// (0x0008e320) list_cale_time_pane_g3

0x2b91,	// (0x0008e32e) list_cale_time_pane_g4_ParamLimits

0x2b91,	// (0x0008e32e) list_cale_time_pane_g4

0x2b9f,	// (0x0008e33c) list_cale_time_pane_g5_ParamLimits

0x2b9f,	// (0x0008e33c) list_cale_time_pane_g5

0x0005,

0xf22a,	// (0x0009a9c7) list_cale_time_pane_g_ParamLimits

0xf22a,	// (0x0009a9c7) list_cale_time_pane_g

0xe932,	// (0x0009a0cf) list_cale_time_pane_t1_ParamLimits

0xe932,	// (0x0009a0cf) list_cale_time_pane_t1

0xe95a,	// (0x0009a0f7) list_cale_time_pane_t2_ParamLimits

0xe95a,	// (0x0009a0f7) list_cale_time_pane_t2

0x2e01,	// (0x0008e59e) aid_blid_cardinal_pane

0x2e3f,	// (0x0008e5dc) compass_pane_t4

0xe982,	// (0x0009a11f) list_cale_time_pane_t4_ParamLimits

0xe982,	// (0x0009a11f) list_cale_time_pane_t4

0x2e4d,	// (0x0008e5ea) compass_pane_t5

0x2e5b,	// (0x0008e5f8) compass_pane_t6

0x2e69,	// (0x0008e606) compass_pane_t7

0xee29,	// (0x0009a5c6) navi_pane_cc_t1

0xf045,	// (0x0009a7e2) aid_phob_thumbnail_center_pane

0x33b7,	// (0x0008eb54) main_postcard_pane_g4_ParamLimits

0x0002,

0x0100,	// (0x0008b89d) list_cale_time_pane_t_ParamLimits

0x0100,	// (0x0008b89d) list_cale_time_pane_t

0xdc75,	// (0x00099412) bg_popup_window_pane_cp02_ParamLimits

0xdc75,	// (0x00099412) bg_popup_window_pane_cp02

0xe9aa,	// (0x0009a147) heading_pane_cp01_ParamLimits

0xe9aa,	// (0x0009a147) heading_pane_cp01

0xe9b6,	// (0x0009a153) loc_req_pane_ParamLimits

0xe9b6,	// (0x0009a153) loc_req_pane

0xe9c6,	// (0x0009a163) loc_type_pane_ParamLimits

0xe9c6,	// (0x0009a163) loc_type_pane

0xe9d8,	// (0x0009a175) loc_type_pane_t1_ParamLimits

0xe9d8,	// (0x0009a175) loc_type_pane_t1

0xe9ea,	// (0x0009a187) loc_type_pane_t2_ParamLimits

0xe9ea,	// (0x0009a187) loc_type_pane_t2

0xe9fc,	// (0x0009a199) loc_type_pane_t3_ParamLimits

0xe9fc,	// (0x0009a199) loc_type_pane_t3

0x0002,

0x0107,	// (0x0008b8a4) loc_type_pane_t_ParamLimits

0x0107,	// (0x0008b8a4) loc_type_pane_t

0xea0e,	// (0x0009a1ab) list_loc_req_pane

0xea18,	// (0x0009a1b5) scroll_pane_cp012

0x2bad,	// (0x0008e34a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2bad,	// (0x0008e34a) list_single_loc_request_popup_menu_pane

0xea23,	// (0x0009a1c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea23,	// (0x0009a1c0) list_single_loc_request_popup_menu_pane_g1

0xea2f,	// (0x0009a1cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea2f,	// (0x0009a1cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x010e,	// (0x0008b8ab) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x010e,	// (0x0008b8ab) list_single_loc_request_popup_menu_pane_g

0xea3b,	// (0x0009a1d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea3b,	// (0x0009a1d8) list_single_loc_request_popup_menu_pane_t1

0xe279,	// (0x00099a16) bg_popup_window_pane_cp03_ParamLimits

0xe279,	// (0x00099a16) bg_popup_window_pane_cp03

0xf000,	// (0x0009a79d) heading_loc_req_pane_ParamLimits

0xf000,	// (0x0009a79d) heading_loc_req_pane

0x2bba,	// (0x0008e357) popup_dyc_status_message_window_g1_ParamLimits

0x2bba,	// (0x0008e357) popup_dyc_status_message_window_g1

0x2bce,	// (0x0008e36b) popup_dyc_status_message_window_t1_ParamLimits

0x2bce,	// (0x0008e36b) popup_dyc_status_message_window_t1

0x2be3,	// (0x0008e380) popup_dyc_status_message_window_t2_ParamLimits

0x2be3,	// (0x0008e380) popup_dyc_status_message_window_t2

0x2bf8,	// (0x0008e395) popup_dyc_status_message_window_t3_ParamLimits

0x2bf8,	// (0x0008e395) popup_dyc_status_message_window_t3

0x0002,

0xf237,	// (0x0009a9d4) popup_dyc_status_message_window_t_ParamLimits

0xf237,	// (0x0009a9d4) popup_dyc_status_message_window_t

0xe01e,	// (0x000997bb) bg_heading_pane_cp01

0xea51,	// (0x0009a1ee) heading_loc_req_pane_g1

0xea59,	// (0x0009a1f6) heading_loc_req_pane_g2

0xea61,	// (0x0009a1fe) heading_loc_req_pane_g3

0x0002,

0x011a,	// (0x0008b8b7) heading_loc_req_pane_g

0xea69,	// (0x0009a206) heading_loc_req_pane_t1

0xea88,	// (0x0009a225) bg_popup_sub_pane_cp01_ParamLimits

0xea88,	// (0x0009a225) bg_popup_sub_pane_cp01

0xea96,	// (0x0009a233) popup_cale_events_window_g1_ParamLimits

0xea96,	// (0x0009a233) popup_cale_events_window_g1

0xeab6,	// (0x0009a253) popup_cale_events_window_g2_ParamLimits

0xeab6,	// (0x0009a253) popup_cale_events_window_g2

0x0001,

0x013c,	// (0x0008b8d9) popup_cale_events_window_g_ParamLimits

0x013c,	// (0x0008b8d9) popup_cale_events_window_g

0xead6,	// (0x0009a273) popup_cale_events_window_t1_ParamLimits

0xead6,	// (0x0009a273) popup_cale_events_window_t1

0xeae8,	// (0x0009a285) popup_cale_events_window_t2_ParamLimits

0xeae8,	// (0x0009a285) popup_cale_events_window_t2

0xeb26,	// (0x0009a2c3) popup_cale_events_window_t3_ParamLimits

0xeb26,	// (0x0009a2c3) popup_cale_events_window_t3

0xeb60,	// (0x0009a2fd) popup_cale_events_window_t4_ParamLimits

0xeb60,	// (0x0009a2fd) popup_cale_events_window_t4

0x0003,

0x0141,	// (0x0008b8de) popup_cale_events_window_t_ParamLimits

0x0141,	// (0x0008b8de) popup_cale_events_window_t

0x2c20,	// (0x0008e3bd) call_type_pane

0x2c30,	// (0x0008e3cd) popup_call_status_window_g1

0x2c44,	// (0x0008e3e1) popup_call_status_window_g2

0x2c58,	// (0x0008e3f5) popup_call_status_window_g3

0x0002,

0xf23e,	// (0x0009a9db) popup_call_status_window_g

0xeb96,	// (0x0009a333) call_type_pane_g1

0xeb9f,	// (0x0009a33c) call_type_pane_g2

0x0001,

0x0151,	// (0x0008b8ee) call_type_pane_g

0xe01e,	// (0x000997bb) bg_popup_sub_pane_cp02

0xeba8,	// (0x0009a345) listscroll_popup_wml_pane

0xebb0,	// (0x0009a34d) list_wml_pane

0xebba,	// (0x0009a357) scroll_pane_cp013

0xebc5,	// (0x0009a362) list_single_graphic_popup_wml_pane_ParamLimits

0xebc5,	// (0x0009a362) list_single_graphic_popup_wml_pane

0xe291,	// (0x00099a2e) list_single_graphic_popup_wml_pane_g1

0xebd9,	// (0x0009a376) list_single_graphic_popup_wml_pane_g2

0x0001,

0x0156,	// (0x0008b8f3) list_single_graphic_popup_wml_pane_g

0xebe1,	// (0x0009a37e) list_single_graphic_popup_wml_pane_t1

0xebf7,	// (0x0009a394) aid_call_pane

0xe271,	// (0x00099a0e) popup_clock_analogue_window_g1

0xe271,	// (0x00099a0e) popup_clock_analogue_window_g2

0x9f27,	// (0x000956c4) popup_clock_analogue_window_g3

0x9f27,	// (0x000956c4) popup_clock_analogue_window_g4

0xe291,	// (0x00099a2e) popup_clock_analogue_window_g5

0x0004,

0xf245,	// (0x0009a9e2) popup_clock_analogue_window_g

0x9f2f,	// (0x000956cc) popup_clock_analogue_window_t1

0x9f3d,	// (0x000956da) clock_digital_number_pane_ParamLimits

0x9f3d,	// (0x000956da) clock_digital_number_pane

0x9f49,	// (0x000956e6) clock_digital_number_pane_cp02_ParamLimits

0x9f49,	// (0x000956e6) clock_digital_number_pane_cp02

0x9f55,	// (0x000956f2) clock_digital_number_pane_cp03_ParamLimits

0x9f55,	// (0x000956f2) clock_digital_number_pane_cp03

0x9f61,	// (0x000956fe) clock_digital_number_pane_cp04_ParamLimits

0x9f61,	// (0x000956fe) clock_digital_number_pane_cp04

0x9f71,	// (0x0009570e) clock_digital_separator_pane_ParamLimits

0x9f71,	// (0x0009570e) clock_digital_separator_pane

0x9f7d,	// (0x0009571a) popup_clock_digital_window_t1

0xe291,	// (0x00099a2e) clock_digital_number_pane_g1

0xe291,	// (0x00099a2e) clock_digital_number_pane_g2

0x0001,

0x00db,	// (0x0008b878) clock_digital_number_pane_g

0xe291,	// (0x00099a2e) clock_digital_separator_pane_g1

0xe291,	// (0x00099a2e) clock_digital_separator_pane_g2

0x0001,

0x00db,	// (0x0008b878) clock_digital_separator_pane_g

0xe01e,	// (0x000997bb) bg_popup_window_pane_cp04

0xebff,	// (0x0009a39c) heading_pane_cp03

0xe526,	// (0x00099cc3) listscroll_popup_gms_pane

0xe01e,	// (0x000997bb) grid_large_graphic_popup_pane

0xec08,	// (0x0009a3a5) listscroll_popup_gms_pane_g1

0xec11,	// (0x0009a3ae) listscroll_popup_gms_pane_g2

0x0001,

0x0166,	// (0x0008b903) listscroll_popup_gms_pane_g

0xec1a,	// (0x0009a3b7) scroll_pane_cp014

0xe2f4,	// (0x00099a91) cell_large_graphic_popup_pane_ParamLimits

0xe2f4,	// (0x00099a91) cell_large_graphic_popup_pane

0xe302,	// (0x00099a9f) cell_large_graphic_popup_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) cell_large_graphic_popup_pane_g1

0xec23,	// (0x0009a3c0) cell_large_graphic_popup_pane_g2_ParamLimits

0xec23,	// (0x0009a3c0) cell_large_graphic_popup_pane_g2

0xec31,	// (0x0009a3ce) cell_large_graphic_popup_pane_g3_ParamLimits

0xec31,	// (0x0009a3ce) cell_large_graphic_popup_pane_g3

0xec3f,	// (0x0009a3dc) cell_large_graphic_popup_pane_g4_ParamLimits

0xec3f,	// (0x0009a3dc) cell_large_graphic_popup_pane_g4

0x0003,

0x016b,	// (0x0008b908) cell_large_graphic_popup_pane_g_ParamLimits

0x016b,	// (0x0008b908) cell_large_graphic_popup_pane_g

0xe01e,	// (0x000997bb) grid_highlight_pane_cp010

0xe291,	// (0x00099a2e) bg_popup_call_pane_g1

0xec50,	// (0x0009a3ed) list_single_graphic_popup_conf_pane_ParamLimits

0xec50,	// (0x0009a3ed) list_single_graphic_popup_conf_pane

0xec63,	// (0x0009a400) list_highlight_pane_cp01

0xec6c,	// (0x0009a409) list_single_graphic_popup_conf_pane_g1

0xec74,	// (0x0009a411) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0174,	// (0x0008b911) list_single_graphic_popup_conf_pane_g

0xec7c,	// (0x0009a419) list_single_graphic_popup_conf_pane_t1

0xec8a,	// (0x0009a427) linegrid_cams_pane_g1

0x2c67,	// (0x0008e404) linegrid_cams_pane_g2

0xe465,	// (0x00099c02) linegrid_cams_pane_g3

0xec93,	// (0x0009a430) linegrid_cams_pane_g4

0x2c70,	// (0x0008e40d) linegrid_cams_pane_g5

0x2c79,	// (0x0008e416) linegrid_cams_pane_g6

0xe515,	// (0x00099cb2) linegrid_cams_pane_g7

0x0006,

0xf250,	// (0x0009a9ed) linegrid_cams_pane_g

0xec9c,	// (0x0009a439) popup_clock_analogue_window

0xec9c,	// (0x0009a439) popup_clock_digital_window

0xe01e,	// (0x000997bb) popup_phob_thumbnail_window

0xe291,	// (0x00099a2e) call_video_uplink_pane_g1

0xeca5,	// (0x0009a442) call_video_uplink_pane_g2

0x0001,

0x0188,	// (0x0008b925) call_video_uplink_pane_g

0xecad,	// (0x0009a44a) video_uplink_pane

0xecb5,	// (0x0009a452) mce_image_pane_g1

0x2c84,	// (0x0008e421) mce_image_pane_g2

0x2c8e,	// (0x0008e42b) mce_image_pane_g3

0x2c96,	// (0x0008e433) mce_image_pane_g4

0x2c9e,	// (0x0008e43b) mce_image_pane_g5

0x0004,

0xf25f,	// (0x0009a9fc) mce_image_pane_g

0xecbf,	// (0x0009a45c) control_top_pane_stacon_cp01_ParamLimits

0xecbf,	// (0x0009a45c) control_top_pane_stacon_cp01

0xecd3,	// (0x0009a470) uni_indicator_pane_stacon_cp01_ParamLimits

0xecd3,	// (0x0009a470) uni_indicator_pane_stacon_cp01

0xece4,	// (0x0009a481) bg_popup_sub_pane_cp03

0xecee,	// (0x0009a48b) chi_dic_find_pane

0x2ca6,	// (0x0008e443) listscroll_chi_dic_pane

0xecf6,	// (0x0009a493) main_pane_chidic_g1

0xecfe,	// (0x0009a49b) chi_dic_find_pane_t1

0xed0c,	// (0x0009a4a9) find_chidic_pane

0xed15,	// (0x0009a4b2) chi_dic_list_pane_ParamLimits

0xed15,	// (0x0009a4b2) chi_dic_list_pane

0xed26,	// (0x0009a4c3) scroll_pane_cp020

0xed2e,	// (0x0009a4cb) find_chidic_pane_t1

0xe01e,	// (0x000997bb) input_focus_pane_cp06

0x2cba,	// (0x0008e457) list_chi_dic_pane_ParamLimits

0x2cba,	// (0x0008e457) list_chi_dic_pane

0x2ccc,	// (0x0008e469) list_chi_dic_pane_t1_ParamLimits

0x2ccc,	// (0x0008e469) list_chi_dic_pane_t1

0xe01e,	// (0x000997bb) list_highlight_pane_cp020

0xed3d,	// (0x0009a4da) bg_cale_heading_pane_g1

0x2cdf,	// (0x0008e47c) bg_cale_heading_pane_g2

0x2ce7,	// (0x0008e484) bg_cale_heading_pane_g3

0x2cef,	// (0x0008e48c) bg_cale_heading_pane_g4

0x2cf9,	// (0x0008e496) bg_cale_heading_pane_g5

0x2d03,	// (0x0008e4a0) bg_cale_heading_pane_g6

0x2d0b,	// (0x0008e4a8) bg_cale_heading_pane_g7

0x2d13,	// (0x0008e4b0) bg_cale_heading_pane_g8

0x2d1d,	// (0x0008e4ba) bg_cale_heading_pane_g9

0x0008,

0xf26a,	// (0x0009aa07) bg_cale_heading_pane_g

0xed3d,	// (0x0009a4da) bg_cale_side_pane_g1

0x2d27,	// (0x0008e4c4) bg_cale_side_pane_g2

0x2d2f,	// (0x0008e4cc) bg_cale_side_pane_g3

0x2d37,	// (0x0008e4d4) bg_cale_side_pane_g4

0x2d3f,	// (0x0008e4dc) bg_cale_side_pane_g5

0x2d47,	// (0x0008e4e4) bg_cale_side_pane_g6

0x2d4f,	// (0x0008e4ec) bg_cale_side_pane_g7

0x2d57,	// (0x0008e4f4) bg_cale_side_pane_g8

0x2d5f,	// (0x0008e4fc) bg_cale_side_pane_g9

0x0008,

0xf27d,	// (0x0009aa1a) bg_cale_side_pane_g

0x2d67,	// (0x0008e504) popup_call_status_window_ParamLimits

0x2d67,	// (0x0008e504) popup_call_status_window

0xed45,	// (0x0009a4e2) stacon_top_pane

0xed4d,	// (0x0009a4ea) status_pane_ParamLimits

0xed4d,	// (0x0009a4ea) status_pane

0xed62,	// (0x0009a4ff) status_small_pane

0xed6a,	// (0x0009a507) control_pane

0xe01e,	// (0x000997bb) stacon_bottom_pane

0xed72,	// (0x0009a50f) list_single_mce_smart_pane_t1_ParamLimits

0xed72,	// (0x0009a50f) list_single_mce_smart_pane_t1

0xed85,	// (0x0009a522) list_single_mce_smart_pane_t2_ParamLimits

0xed85,	// (0x0009a522) list_single_mce_smart_pane_t2

0x0001,

0x01be,	// (0x0008b95b) list_single_mce_smart_pane_t_ParamLimits

0x01be,	// (0x0008b95b) list_single_mce_smart_pane_t

0x2db0,	// (0x0008e54d) compass_pane

0x2db9,	// (0x0008e556) main_location2_pane_t1

0x2dcb,	// (0x0008e568) main_location2_pane_t2

0x2ddd,	// (0x0008e57a) main_location2_pane_t3

0x0003,

0xf290,	// (0x0009aa2d) main_location2_pane_t

0xeda4,	// (0x0009a541) compass_pane_g1_ParamLimits

0xeda4,	// (0x0009a541) compass_pane_g1

0x2e21,	// (0x0008e5be) compass_pane_t1

0x2e30,	// (0x0008e5cd) compass_pane_t2

0x0005,

0xf299,	// (0x0009aa36) compass_pane_t

0x2e77,	// (0x0008e614) text_secondary_cp61

0xee20,	// (0x0009a5bd) navi_pane_cams_g5

0xee9c,	// (0x0009a639) navi_pane_im_t1

0xeeaa,	// (0x0009a647) navi_pane_mp_g1_ParamLimits

0xeeaa,	// (0x0009a647) navi_pane_mp_g1

0xeebe,	// (0x0009a65b) navi_pane_mp_g2_ParamLimits

0xeebe,	// (0x0009a65b) navi_pane_mp_g2

0xeeca,	// (0x0009a667) navi_pane_mp_g3_ParamLimits

0xeeca,	// (0x0009a667) navi_pane_mp_g3

0x0002,

0x01e0,	// (0x0008b97d) navi_pane_mp_g_ParamLimits

0x01e0,	// (0x0008b97d) navi_pane_mp_g

0xeed6,	// (0x0009a673) navi_pane_mp_t1

0xeee4,	// (0x0009a681) navi_pane_mp_t2

0x0002,

0x01e7,	// (0x0008b984) navi_pane_mp_t

0xef4f,	// (0x0009a6ec) navi_pane_vt_g1

0xeed6,	// (0x0009a673) navi_pane_vt_t1

0xef57,	// (0x0009a6f4) navi_slider_pane

0xe526,	// (0x00099cc3) zooming_pane

0xef67,	// (0x0009a704) navi_slider_pane_g1

0x9f9a,	// (0x00095737) navi_slider_pane_g2

0x0006,

0xf2a6,	// (0x0009aa43) navi_slider_pane_g

0xef8b,	// (0x0009a728) aid_levels_zoom

0xef93,	// (0x0009a730) zooming_pane_g1

0xef9b,	// (0x0009a738) zooming_pane_g2

0xef9b,	// (0x0009a738) zooming_pane_g3

0x0002,

0x01fd,	// (0x0008b99a) zooming_pane_g

0xefa3,	// (0x0009a740) level_10_zoom

0xefac,	// (0x0009a749) level_11_zoom

0xefb5,	// (0x0009a752) level_1_zoom

0xefbe,	// (0x0009a75b) level_2_zoom

0xefc7,	// (0x0009a764) level_3_zoom

0xefd0,	// (0x0009a76d) level_4_zoom

0xf018,	// (0x0009a7b5) level_5_zoom

0xf021,	// (0x0009a7be) level_6_zoom

0xf02a,	// (0x0009a7c7) level_7_zoom

0xf033,	// (0x0009a7d0) level_8_zoom

0xf03c,	// (0x0009a7d9) level_9_zoom

0xf04d,	// (0x0009a7ea) popup_phob_thumbnail_window_g1

0xf055,	// (0x0009a7f2) popup_phob_thumbnail_window_g2

0x0001,

0xf2b5,	// (0x0009aa52) popup_phob_thumbnail_window_g

0x4457,	// (0x0008fbf4) level_1_location

0x445f,	// (0x0008fbfc) level_2_location

0x4467,	// (0x0008fc04) level_3_location

0x446f,	// (0x0008fc0c) level_4_location

0xe526,	// (0x00099cc3) level_5_location

0x2ec8,	// (0x0008e665) mce_icon_pane_g1

0x2ed0,	// (0x0008e66d) mce_icon_pane_g2

0x0001,

0xf2ba,	// (0x0009aa57) mce_icon_pane_g

0xf05d,	// (0x0009a7fa) main_mup_pane_g1_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g1

0xf05d,	// (0x0009a7fa) main_mup_pane_g2_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g2

0xf05d,	// (0x0009a7fa) main_mup_pane_g3_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g3

0xf05d,	// (0x0009a7fa) main_mup_pane_g4_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g4

0xf05d,	// (0x0009a7fa) main_mup_pane_g5_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g5

0xf05d,	// (0x0009a7fa) main_mup_pane_g6_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g6

0xf05d,	// (0x0009a7fa) main_mup_pane_g7_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g7

0xf05d,	// (0x0009a7fa) main_mup_pane_g8_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g8

0xf05d,	// (0x0009a7fa) main_mup_pane_g9_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g9

0xf05d,	// (0x0009a7fa) main_mup_pane_g10_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g10

0xf05d,	// (0x0009a7fa) main_mup_pane_g11_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g11

0xe302,	// (0x00099a9f) main_mup_pane_g12_ParamLimits

0xe302,	// (0x00099a9f) main_mup_pane_g12

0xf05d,	// (0x0009a7fa) main_mup_pane_g13_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup_pane_g13

0x000c,

0xf2bf,	// (0x0009aa5c) main_mup_pane_g_ParamLimits

0xf2bf,	// (0x0009aa5c) main_mup_pane_g

0x2ed8,	// (0x0008e675) main_mup_pane_t1_ParamLimits

0x2ed8,	// (0x0008e675) main_mup_pane_t1

0x2ed8,	// (0x0008e675) main_mup_pane_t2_ParamLimits

0x2ed8,	// (0x0008e675) main_mup_pane_t2

0x2ed8,	// (0x0008e675) main_mup_pane_t3_ParamLimits

0x2ed8,	// (0x0008e675) main_mup_pane_t3

0xe52e,	// (0x00099ccb) main_mup_pane_t4_ParamLimits

0xe52e,	// (0x00099ccb) main_mup_pane_t4

0xe52e,	// (0x00099ccb) main_mup_pane_t5_ParamLimits

0xe52e,	// (0x00099ccb) main_mup_pane_t5

0x2eec,	// (0x0008e689) main_mup_pane_t6_ParamLimits

0x2eec,	// (0x0008e689) main_mup_pane_t6

0x0005,

0xf2da,	// (0x0009aa77) main_mup_pane_t_ParamLimits

0xf2da,	// (0x0009aa77) main_mup_pane_t

0xe2f4,	// (0x00099a91) mup_progress_pane_ParamLimits

0xe2f4,	// (0x00099a91) mup_progress_pane

0x2f00,	// (0x0008e69d) mup_visualizer_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup_visualizer_pane

0x2f00,	// (0x0008e69d) mup_volume_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup_volume_pane

0xe310,	// (0x00099aad) mup_visualizer_pane_g1_ParamLimits

0xe310,	// (0x00099aad) mup_visualizer_pane_g1

0x2f0e,	// (0x0008e6ab) mup_visualizer_pane_g2_ParamLimits

0x2f0e,	// (0x0008e6ab) mup_visualizer_pane_g2

0xe302,	// (0x00099a9f) mup_visualizer_pane_g3_ParamLimits

0xe302,	// (0x00099a9f) mup_visualizer_pane_g3

0x0002,

0xf2e7,	// (0x0009aa84) mup_visualizer_pane_g_ParamLimits

0xf2e7,	// (0x0009aa84) mup_visualizer_pane_g

0xe55c,	// (0x00099cf9) mup_volume_pane_g1

0xe55c,	// (0x00099cf9) mup_volume_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) mup_volume_pane_g

0xe55c,	// (0x00099cf9) mup_progress_pane_g1

0xe55c,	// (0x00099cf9) mup_progress_pane_g2

0xe55c,	// (0x00099cf9) mup_progress_pane_g3

0x0002,

0xf2f3,	// (0x0009aa90) mup_progress_pane_g

0xe01e,	// (0x000997bb) bg_popup_window_pane_cp05

0x2f1c,	// (0x0008e6b9) heading_pane_cp02_ParamLimits

0x2f1c,	// (0x0008e6b9) heading_pane_cp02

0x2f36,	// (0x0008e6d3) list_popup_blid_pane

0x2f3e,	// (0x0008e6db) list_blid_sat_info_pane_ParamLimits

0x2f3e,	// (0x0008e6db) list_blid_sat_info_pane

0x2f51,	// (0x0008e6ee) list_blid_sat_info_pane_g1

0x2f59,	// (0x0008e6f6) list_blid_sat_info_pane_t1

0x305f,	// (0x0008e7fc) mup_equalizer_pane_ParamLimits

0x305f,	// (0x0008e7fc) mup_equalizer_pane

0x3078,	// (0x0008e815) mup_equalizer_pane_cp1_ParamLimits

0x3078,	// (0x0008e815) mup_equalizer_pane_cp1

0x3095,	// (0x0008e832) mup_equalizer_pane_cp2_ParamLimits

0x3095,	// (0x0008e832) mup_equalizer_pane_cp2

0x30b2,	// (0x0008e84f) mup_equalizer_pane_cp3_ParamLimits

0x30b2,	// (0x0008e84f) mup_equalizer_pane_cp3

0x30d3,	// (0x0008e870) mup_equalizer_pane_cp4_ParamLimits

0x30d3,	// (0x0008e870) mup_equalizer_pane_cp4

0x30f4,	// (0x0008e891) mup_equalizer_pane_cp5

0x3108,	// (0x0008e8a5) mup_equalizer_pane_cp6

0x311c,	// (0x0008e8b9) mup_equalizer_pane_cp7

0xa6b2,	// (0x00095e4f) bg_popup_call_poc_act_pane_g9

0xa6ba,	// (0x00095e57) bg_popup_call_poc_act_pane_g10

0xa6c2,	// (0x00095e5f) bg_popup_call_poc_act_pane_g11

0x000a,

0xe279,	// (0x00099a16) mup_scale_pane

0xe291,	// (0x00099a2e) mup_scale_pane_g1

0x3130,	// (0x0008e8cd) mup_scale_pane_g2

0x0006,

0xf30f,	// (0x0009aaac) mup_scale_pane_g

0x3166,	// (0x0008e903) msg_data_pane

0x316e,	// (0x0008e90b) scroll_pane_cp017

0x3176,	// (0x0008e913) bg_list_pane_cp04_ParamLimits

0x3176,	// (0x0008e913) bg_list_pane_cp04

0x3196,	// (0x0008e933) msg_data_pane_g1

0x319e,	// (0x0008e93b) msg_data_pane_g2

0x31a8,	// (0x0008e945) msg_data_pane_g3

0x31b0,	// (0x0008e94d) msg_data_pane_g4

0x31b8,	// (0x0008e955) msg_data_pane_g5

0x31c0,	// (0x0008e95d) msg_data_pane_g6

0x31c8,	// (0x0008e965) msg_data_pane_g7

0x0006,

0xf31e,	// (0x0009aabb) msg_data_pane_g

0x31d0,	// (0x0008e96d) msg_text_pane_ParamLimits

0x31d0,	// (0x0008e96d) msg_text_pane

0x31f9,	// (0x0008e996) qrid_highlight_pane_cp011_ParamLimits

0x31f9,	// (0x0008e996) qrid_highlight_pane_cp011

0xe01e,	// (0x000997bb) msg_body_pane

0xe01e,	// (0x000997bb) msg_header_pane

0x3218,	// (0x0008e9b5) input_focus_pane_cp07

0x323b,	// (0x0008e9d8) msg_header_pane_t1_ParamLimits

0x323b,	// (0x0008e9d8) msg_header_pane_t1

0x3251,	// (0x0008e9ee) msg_header_pane_t2_ParamLimits

0x3251,	// (0x0008e9ee) msg_header_pane_t2

0x0001,

0xf332,	// (0x0009aacf) msg_header_pane_t_ParamLimits

0xf332,	// (0x0009aacf) msg_header_pane_t

0x3268,	// (0x0008ea05) msg_body_pane_g1

0x3270,	// (0x0008ea0d) msg_body_pane_t1_ParamLimits

0x3270,	// (0x0008ea0d) msg_body_pane_t1

0x32a1,	// (0x0008ea3e) msg_body_pane_t2_ParamLimits

0x32a1,	// (0x0008ea3e) msg_body_pane_t2

0x32b3,	// (0x0008ea50) msg_body_pane_t3_ParamLimits

0x32b3,	// (0x0008ea50) msg_body_pane_t3

0x0002,

0xf337,	// (0x0009aad4) msg_body_pane_t_ParamLimits

0xf337,	// (0x0009aad4) msg_body_pane_t

0x32ff,	// (0x0008ea9c) main_viewer_pane_g1_ParamLimits

0x32ff,	// (0x0008ea9c) main_viewer_pane_g1

0x330d,	// (0x0008eaaa) main_viewer_pane_g2_ParamLimits

0x330d,	// (0x0008eaaa) main_viewer_pane_g2

0x331b,	// (0x0008eab8) main_viewer_pane_g3_ParamLimits

0x331b,	// (0x0008eab8) main_viewer_pane_g3

0x332a,	// (0x0008eac7) main_viewer_pane_g4_ParamLimits

0x332a,	// (0x0008eac7) main_viewer_pane_g4

0x9fc4,	// (0x00095761) main_viewer_pane_g5_ParamLimits

0x9fc4,	// (0x00095761) main_viewer_pane_g5

0x9fc4,	// (0x00095761) main_viewer_pane_g7_ParamLimits

0x9fc4,	// (0x00095761) main_viewer_pane_g7

0xea23,	// (0x0009a1c0) main_viewer_pane_g8_ParamLimits

0xea23,	// (0x0009a1c0) main_viewer_pane_g8

0x0007,

0xf347,	// (0x0009aae4) main_viewer_pane_g_ParamLimits

0xf347,	// (0x0009aae4) main_viewer_pane_g

0x3339,	// (0x0008ead6) viewer_content_pane_ParamLimits

0x3339,	// (0x0008ead6) viewer_content_pane

0x3374,	// (0x0008eb11) main_postcard_pane_g1_ParamLimits

0x3374,	// (0x0008eb11) main_postcard_pane_g1

0x338a,	// (0x0008eb27) main_postcard_pane_g2_ParamLimits

0x338a,	// (0x0008eb27) main_postcard_pane_g2

0x33a0,	// (0x0008eb3d) main_postcard_pane_g3_ParamLimits

0x33a0,	// (0x0008eb3d) main_postcard_pane_g3

0x0005,

0xf358,	// (0x0009aaf5) main_postcard_pane_g_ParamLimits

0xf358,	// (0x0009aaf5) main_postcard_pane_g

0x33b7,	// (0x0008eb54) main_postcard_pane_g4

0xa84a,	// (0x00095fe7) smil_status_volume_pane_g2

0x33fa,	// (0x0008eb97) postcard_pane_ParamLimits

0x33fa,	// (0x0008eb97) postcard_pane

0x343c,	// (0x0008ebd9) postcard_pane_g1_ParamLimits

0x343c,	// (0x0008ebd9) postcard_pane_g1

0x344a,	// (0x0008ebe7) postcard_pane_g2_ParamLimits

0x344a,	// (0x0008ebe7) postcard_pane_g2

0x3456,	// (0x0008ebf3) postcard_pane_g3_ParamLimits

0x3456,	// (0x0008ebf3) postcard_pane_g3

0x3462,	// (0x0008ebff) postcard_pane_g4_ParamLimits

0x3462,	// (0x0008ebff) postcard_pane_g4

0x3470,	// (0x0008ec0d) postcard_pane_g5_ParamLimits

0x3470,	// (0x0008ec0d) postcard_pane_g5

0x3485,	// (0x0008ec22) postcard_pane_g6_ParamLimits

0x3485,	// (0x0008ec22) postcard_pane_g6

0x343c,	// (0x0008ebd9) postcard_pane_g7_ParamLimits

0x343c,	// (0x0008ebd9) postcard_pane_g7

0x0006,

0xf365,	// (0x0009ab02) postcard_pane_g_ParamLimits

0xf365,	// (0x0009ab02) postcard_pane_g

0x3499,	// (0x0008ec36) main_mp2_pane_g1_ParamLimits

0x3499,	// (0x0008ec36) main_mp2_pane_g1

0x34a5,	// (0x0008ec42) main_mp2_pane_g2_ParamLimits

0x34a5,	// (0x0008ec42) main_mp2_pane_g2

0x34b1,	// (0x0008ec4e) main_mp2_pane_g3_ParamLimits

0x34b1,	// (0x0008ec4e) main_mp2_pane_g3

0x0002,

0xf374,	// (0x0009ab11) main_mp2_pane_g_ParamLimits

0xf374,	// (0x0009ab11) main_mp2_pane_g

0x34bd,	// (0x0008ec5a) main_mp2_pane_t1_ParamLimits

0x34bd,	// (0x0008ec5a) main_mp2_pane_t1

0x34d2,	// (0x0008ec6f) main_mp2_pane_t2_ParamLimits

0x34d2,	// (0x0008ec6f) main_mp2_pane_t2

0x34e4,	// (0x0008ec81) main_mp2_pane_t3_ParamLimits

0x34e4,	// (0x0008ec81) main_mp2_pane_t3

0x0002,

0xf37b,	// (0x0009ab18) main_mp2_pane_t_ParamLimits

0xf37b,	// (0x0009ab18) main_mp2_pane_t

0x34f6,	// (0x0008ec93) pec_content_pane_ParamLimits

0x34f6,	// (0x0008ec93) pec_content_pane

0xe6bd,	// (0x00099e5a) scroll_pane_cp015

0x3508,	// (0x0008eca5) pec_attribute_pane_ParamLimits

0x3508,	// (0x0008eca5) pec_attribute_pane

0x3518,	// (0x0008ecb5) pec_content_pane_g1_ParamLimits

0x3518,	// (0x0008ecb5) pec_content_pane_g1

0x3524,	// (0x0008ecc1) pec_content_pane_t1_ParamLimits

0x3524,	// (0x0008ecc1) pec_content_pane_t1

0x3536,	// (0x0008ecd3) pec_content_pane_t2_ParamLimits

0x3536,	// (0x0008ecd3) pec_content_pane_t2

0x0001,

0xf382,	// (0x0009ab1f) pec_content_pane_t_ParamLimits

0xf382,	// (0x0009ab1f) pec_content_pane_t

0x3548,	// (0x0008ece5) list_single_graphic_pane_cp01_ParamLimits

0x3548,	// (0x0008ece5) list_single_graphic_pane_cp01

0xe279,	// (0x00099a16) bg_popup_sub_pane_cp04

0x355d,	// (0x0008ecfa) popup_mup_playback_window_g1

0x3569,	// (0x0008ed06) popup_mup_playback_window_t1

0x357e,	// (0x0008ed1b) popup_mup_playback_window_t2

0x0001,

0xf387,	// (0x0009ab24) popup_mup_playback_window_t

0x35d3,	// (0x0008ed70) main_image_pane_g1_ParamLimits

0x35d3,	// (0x0008ed70) main_image_pane_g1

0x36b0,	// (0x0008ee4d) scroll_pane_cp018_ParamLimits

0x36b0,	// (0x0008ee4d) scroll_pane_cp018

0x36c8,	// (0x0008ee65) scroll_pane_cp016_ParamLimits

0x36c8,	// (0x0008ee65) scroll_pane_cp016

0x36fc,	// (0x0008ee99) smil2_image_pane_ParamLimits

0x36fc,	// (0x0008ee99) smil2_image_pane

0x372c,	// (0x0008eec9) smil2_root_pane_ParamLimits

0x372c,	// (0x0008eec9) smil2_root_pane

0x3764,	// (0x0008ef01) smil2_text_pane_ParamLimits

0x3764,	// (0x0008ef01) smil2_text_pane

0xe01e,	// (0x000997bb) bg_list_pane_cp06

0x37ec,	// (0x0008ef89) grid_radio_pane

0xe01e,	// (0x000997bb) bg_popup_window_pane_cp06

0x37f4,	// (0x0008ef91) main_fmradio_pane_t1

0xa6ca,	// (0x00095e67) heading_pane_cp04

0x3802,	// (0x0008ef9f) main_fmradio_pane_t2

0xa6d2,	// (0x00095e6f) popup_cale_lunar_info_window_g1

0x3810,	// (0x0008efad) main_fmradio_pane_t3

0xa6da,	// (0x00095e77) popup_cale_lunar_info_window_g2

0x381e,	// (0x0008efbb) main_fmradio_pane_t4

0x0001,

0x382c,	// (0x0008efc9) main_fmradio_pane_t5

0x0004,

0xf460,	// (0x0009abfd) popup_cale_lunar_info_window_g

0xf39c,	// (0x0009ab39) main_fmradio_pane_t

0x383a,	// (0x0008efd7) wait_bar_pane_cp03

0x3842,	// (0x0008efdf) cell_fmradio_pane_ParamLimits

0x3842,	// (0x0008efdf) cell_fmradio_pane

0x343c,	// (0x0008ebd9) cell_fmradio_pane_g1_ParamLimits

0x343c,	// (0x0008ebd9) cell_fmradio_pane_g1

0xe01e,	// (0x000997bb) grid_highlight_pane_cp011

0x3855,	// (0x0008eff2) poc_content_pane_ParamLimits

0x3855,	// (0x0008eff2) poc_content_pane

0x3867,	// (0x0008f004) scroll_pane_cp019

0x386f,	// (0x0008f00c) popup_call_poc_act_window_ParamLimits

0x386f,	// (0x0008f00c) popup_call_poc_act_window

0x3893,	// (0x0008f030) popup_call_poc_inact_window_ParamLimits

0x3893,	// (0x0008f030) popup_call_poc_inact_window

0xf437,	// (0x0009abd4) bg_popup_call_poc_act_pane_g

0xa642,	// (0x00095ddf) bg_popup_call_poc_inact_pane_g1

0xa64a,	// (0x00095de7) bg_popup_call_poc_inact_pane_g2

0x38ac,	// (0x0008f049) popup_call_poc_act_window_g2

0xa652,	// (0x00095def) bg_popup_call_poc_inact_pane_g3

0xa65a,	// (0x00095df7) bg_popup_call_poc_inact_pane_g4

0xa662,	// (0x00095dff) bg_popup_call_poc_inact_pane_g5

0x38b4,	// (0x0008f051) popup_call_poc_act_window_t1_ParamLimits

0x38b4,	// (0x0008f051) popup_call_poc_act_window_t1

0x38dc,	// (0x0008f079) popup_call_poc_act_window_t2_ParamLimits

0x38dc,	// (0x0008f079) popup_call_poc_act_window_t2

0x3904,	// (0x0008f0a1) popup_call_poc_act_window_t3_ParamLimits

0x3904,	// (0x0008f0a1) popup_call_poc_act_window_t3

0x392c,	// (0x0008f0c9) popup_call_poc_act_window_t4_ParamLimits

0x392c,	// (0x0008f0c9) popup_call_poc_act_window_t4

0x0003,

0xf3a7,	// (0x0009ab44) popup_call_poc_act_window_t_ParamLimits

0xf3a7,	// (0x0009ab44) popup_call_poc_act_window_t

0xa66a,	// (0x00095e07) bg_popup_call_poc_inact_pane_g6

0xa672,	// (0x00095e0f) bg_popup_call_poc_inact_pane_g7

0xa67a,	// (0x00095e17) bg_popup_call_poc_inact_pane_g8

0x393e,	// (0x0008f0db) popup_call_poc_inact_window_g2

0xa682,	// (0x00095e1f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf424,	// (0x0009abc1) bg_popup_call_poc_inact_pane_g

0x3946,	// (0x0008f0e3) popup_call_poc_inact_window_t1_ParamLimits

0x3946,	// (0x0008f0e3) popup_call_poc_inact_window_t1

0x395b,	// (0x0008f0f8) popup_call_poc_inact_window_t2_ParamLimits

0x395b,	// (0x0008f0f8) popup_call_poc_inact_window_t2

0x3970,	// (0x0008f10d) popup_call_poc_inact_window_t3_ParamLimits

0x3970,	// (0x0008f10d) popup_call_poc_inact_window_t3

0x0002,

0xf3b0,	// (0x0009ab4d) popup_call_poc_inact_window_t_ParamLimits

0xf3b0,	// (0x0009ab4d) popup_call_poc_inact_window_t

0xa7c2,	// (0x00095f5f) context_pane_ParamLimits

0x493b,	// (0x000900d8) signal_pane_ParamLimits

0xe526,	// (0x00099cc3) main_call2_pane

0xa79b,	// (0x00095f38) popup_phob_thumbnail2_window_ParamLimits

0xa79b,	// (0x00095f38) popup_phob_thumbnail2_window

0x9fac,	// (0x00095749) aid_hotspot_pointer_arrow_pane

0x9fb4,	// (0x00095751) aid_hotspot_pointer_hand_pane

0x4421,	// (0x0008fbbe) phob_pre_status_pane_g5

0xe29b,	// (0x00099a38) cams_zoom_pane_ParamLimits

0xe29b,	// (0x00099a38) image_vga_pane_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g2_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g3_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g4_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g5_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g6_ParamLimits

0xe302,	// (0x00099a9f) main_camera_pane_g7_ParamLimits

0xf1a6,	// (0x0009a943) main_camera_pane_g_ParamLimits

0xe52e,	// (0x00099ccb) main_camera_pane_t1_ParamLimits

0xe52e,	// (0x00099ccb) main_camera_pane_t2_ParamLimits

0xf1b7,	// (0x0009a954) main_camera_pane_t_ParamLimits

0xe279,	// (0x00099a16) bg_popup_preview_window_pane_cp01_ParamLimits

0xe279,	// (0x00099a16) bg_popup_preview_window_pane_cp01

0x3985,	// (0x0008f122) popup_phob_thumbnail2_window_g1_ParamLimits

0x3985,	// (0x0008f122) popup_phob_thumbnail2_window_g1

0xe01e,	// (0x000997bb) call2_cli_visual_pane

0x39ac,	// (0x0008f149) popup_call2_audio_conf_window_ParamLimits

0x39ac,	// (0x0008f149) popup_call2_audio_conf_window

0x39cc,	// (0x0008f169) popup_call2_audio_first_window_ParamLimits

0x39cc,	// (0x0008f169) popup_call2_audio_first_window

0x3a62,	// (0x0008f1ff) popup_call2_audio_in_window_ParamLimits

0x3a62,	// (0x0008f1ff) popup_call2_audio_in_window

0x3aaa,	// (0x0008f247) popup_call2_audio_out_window_ParamLimits

0x3aaa,	// (0x0008f247) popup_call2_audio_out_window

0x3b14,	// (0x0008f2b1) popup_call2_audio_second_window_ParamLimits

0x3b14,	// (0x0008f2b1) popup_call2_audio_second_window

0x3b7a,	// (0x0008f317) popup_call2_audio_wait_window_ParamLimits

0x3b7a,	// (0x0008f317) popup_call2_audio_wait_window

0xe01e,	// (0x000997bb) bg_popup_call2_act_pane_cp03

0xe25b,	// (0x000999f8) list_conf_pane_cp

0x3bb4,	// (0x0008f351) popup_call2_audio_conf_window_t1

0xec50,	// (0x0009a3ed) list_single_graphic_popup_conf2_pane_ParamLimits

0xec50,	// (0x0009a3ed) list_single_graphic_popup_conf2_pane

0xec63,	// (0x0009a400) list_highlight_pane_cp04

0x3bc2,	// (0x0008f35f) list_single_graphic_popup_conf2_pane_g1

0xec74,	// (0x0009a411) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf3b7,	// (0x0009ab54) list_single_graphic_popup_conf2_pane_g

0x3bcc,	// (0x0008f369) list_single_graphic_popup_conf2_pane_t1

0x3bda,	// (0x0008f377) bg_popup_call2_act_pane_cp01_ParamLimits

0x3bda,	// (0x0008f377) bg_popup_call2_act_pane_cp01

0x3c64,	// (0x0008f401) call_type_pane_cp05_ParamLimits

0x3c64,	// (0x0008f401) call_type_pane_cp05

0x3cb8,	// (0x0008f455) popup_call2_audio_second_window_g1_ParamLimits

0x3cb8,	// (0x0008f455) popup_call2_audio_second_window_g1

0x3d0c,	// (0x0008f4a9) popup_call2_audio_second_window_g2_ParamLimits

0x3d0c,	// (0x0008f4a9) popup_call2_audio_second_window_g2

0x0002,

0xf3bc,	// (0x0009ab59) popup_call2_audio_second_window_g_ParamLimits

0xf3bc,	// (0x0009ab59) popup_call2_audio_second_window_g

0x3d71,	// (0x0008f50e) popup_call2_audio_second_window_t1_ParamLimits

0x3d71,	// (0x0008f50e) popup_call2_audio_second_window_t1

0x3e2c,	// (0x0008f5c9) popup_call2_audio_second_window_t2_ParamLimits

0x3e2c,	// (0x0008f5c9) popup_call2_audio_second_window_t2

0x3e7f,	// (0x0008f61c) popup_call2_audio_second_window_t3_ParamLimits

0x3e7f,	// (0x0008f61c) popup_call2_audio_second_window_t3

0x0003,

0xf3c3,	// (0x0009ab60) popup_call2_audio_second_window_t_ParamLimits

0xf3c3,	// (0x0009ab60) popup_call2_audio_second_window_t

0xe01e,	// (0x000997bb) bg_popup_call2_in_pane_cp02

0xe028,	// (0x000997c5) call_type_pane_cp04

0x3f72,	// (0x0008f70f) popup_call2_audio_wait_window_g1

0x3f7a,	// (0x0008f717) popup_call2_audio_wait_window_g2

0x0001,

0xf3cc,	// (0x0009ab69) popup_call2_audio_wait_window_g

0xe040,	// (0x000997dd) popup_call2_audio_wait_window_t3

0x3f82,	// (0x0008f71f) bg_popup_call2_act_pane_ParamLimits

0x3f82,	// (0x0008f71f) bg_popup_call2_act_pane

0x4042,	// (0x0008f7df) call_type_pane_cp03_ParamLimits

0x4042,	// (0x0008f7df) call_type_pane_cp03

0x40a6,	// (0x0008f843) popup_call2_audio_first_window_g1_ParamLimits

0x40a6,	// (0x0008f843) popup_call2_audio_first_window_g1

0x4116,	// (0x0008f8b3) popup_call2_audio_first_window_g2_ParamLimits

0x4116,	// (0x0008f8b3) popup_call2_audio_first_window_g2

0x417a,	// (0x0008f917) popup_call2_audio_first_window_g3_ParamLimits

0x417a,	// (0x0008f917) popup_call2_audio_first_window_g3

0x0004,

0xf3d1,	// (0x0009ab6e) popup_call2_audio_first_window_g_ParamLimits

0xf3d1,	// (0x0009ab6e) popup_call2_audio_first_window_g

0x4202,	// (0x0008f99f) popup_call2_audio_first_window_t1_ParamLimits

0x4202,	// (0x0008f99f) popup_call2_audio_first_window_t1

0x9fe2,	// (0x0009577f) popup_call2_audio_first_window_t4_ParamLimits

0x9fe2,	// (0x0009577f) popup_call2_audio_first_window_t4

0xa0c5,	// (0x00095862) popup_call2_audio_first_window_t5_ParamLimits

0xa0c5,	// (0x00095862) popup_call2_audio_first_window_t5

0x0003,

0xf3dc,	// (0x0009ab79) popup_call2_audio_first_window_t_ParamLimits

0xf3dc,	// (0x0009ab79) popup_call2_audio_first_window_t

0xe271,	// (0x00099a0e) bg_popup_call2_act_pane_g1

0xa6e2,	// (0x00095e7f) popup_cale_lunar_info_window_t1

0xa6f0,	// (0x00095e8d) popup_cale_lunar_info_window_t2

0xa6fe,	// (0x00095e9b) popup_cale_lunar_info_window_t3

0xe01e,	// (0x000997bb) bg_popup_call2_bubble_pane

0xa1c6,	// (0x00095963) bg_popup_call2_in_pane_cp01_ParamLimits

0xa1c6,	// (0x00095963) bg_popup_call2_in_pane_cp01

0xdcfa,	// (0x00099497) call_type_pane_cp02

0x4305,	// (0x0008faa2) popup_call2_audio_out_window_g1_ParamLimits

0x4305,	// (0x0008faa2) popup_call2_audio_out_window_g1

0xa20e,	// (0x000959ab) popup_call2_audio_out_window_g2_ParamLimits

0xa20e,	// (0x000959ab) popup_call2_audio_out_window_g2

0x4331,	// (0x0008face) popup_call2_audio_out_window_g3_ParamLimits

0x4331,	// (0x0008face) popup_call2_audio_out_window_g3

0x0003,

0xf3e5,	// (0x0009ab82) popup_call2_audio_out_window_g_ParamLimits

0xf3e5,	// (0x0009ab82) popup_call2_audio_out_window_g

0xa245,	// (0x000959e2) popup_call2_audio_out_window_t1_ParamLimits

0xa245,	// (0x000959e2) popup_call2_audio_out_window_t1

0xa2a4,	// (0x00095a41) popup_call2_audio_out_window_t2_ParamLimits

0xa2a4,	// (0x00095a41) popup_call2_audio_out_window_t2

0xa2f8,	// (0x00095a95) popup_call2_audio_out_window_t3_ParamLimits

0xa2f8,	// (0x00095a95) popup_call2_audio_out_window_t3

0xa30e,	// (0x00095aab) popup_call2_audio_out_window_t4_ParamLimits

0xa30e,	// (0x00095aab) popup_call2_audio_out_window_t4

0xa324,	// (0x00095ac1) popup_call2_audio_out_window_t5_ParamLimits

0xa324,	// (0x00095ac1) popup_call2_audio_out_window_t5

0x0005,

0xf3ee,	// (0x0009ab8b) popup_call2_audio_out_window_t_ParamLimits

0xf3ee,	// (0x0009ab8b) popup_call2_audio_out_window_t

0xa388,	// (0x00095b25) bg_popup_call2_in_pane_ParamLimits

0xa388,	// (0x00095b25) bg_popup_call2_in_pane

0xa3e4,	// (0x00095b81) popup_call2_audio_in_window_g1_ParamLimits

0xa3e4,	// (0x00095b81) popup_call2_audio_in_window_g1

0xa41c,	// (0x00095bb9) popup_call2_audio_in_window_g2_ParamLimits

0xa41c,	// (0x00095bb9) popup_call2_audio_in_window_g2

0xa454,	// (0x00095bf1) popup_call2_audio_in_window_g3_ParamLimits

0xa454,	// (0x00095bf1) popup_call2_audio_in_window_g3

0x0003,

0xf3fb,	// (0x0009ab98) popup_call2_audio_in_window_g_ParamLimits

0xf3fb,	// (0x0009ab98) popup_call2_audio_in_window_g

0xa4ac,	// (0x00095c49) popup_call2_audio_in_window_t1_ParamLimits

0xa4ac,	// (0x00095c49) popup_call2_audio_in_window_t1

0xa52c,	// (0x00095cc9) popup_call2_audio_in_window_t2_ParamLimits

0xa52c,	// (0x00095cc9) popup_call2_audio_in_window_t2

0xa5ac,	// (0x00095d49) popup_call2_audio_in_window_t3_ParamLimits

0xa5ac,	// (0x00095d49) popup_call2_audio_in_window_t3

0xa5c6,	// (0x00095d63) popup_call2_audio_in_window_t4_ParamLimits

0xa5c6,	// (0x00095d63) popup_call2_audio_in_window_t4

0xa5d8,	// (0x00095d75) popup_call2_audio_in_window_t5_ParamLimits

0xa5d8,	// (0x00095d75) popup_call2_audio_in_window_t5

0xa5ed,	// (0x00095d8a) popup_call2_audio_in_window_t6_ParamLimits

0xa5ed,	// (0x00095d8a) popup_call2_audio_in_window_t6

0x0005,

0xf404,	// (0x0009aba1) popup_call2_audio_in_window_t_ParamLimits

0xf404,	// (0x0009aba1) popup_call2_audio_in_window_t

0xe271,	// (0x00099a0e) bg_popup_call2_in_pane_g1

0xa70c,	// (0x00095ea9) popup_cale_lunar_info_window_t4

0x0003,

0xf465,	// (0x0009ac02) popup_cale_lunar_info_window_t

0xe279,	// (0x00099a16) bg_popup_call2_rect_pane_ParamLimits

0xe279,	// (0x00099a16) bg_popup_call2_rect_pane

0xe01e,	// (0x000997bb) call2_cli_visual_graphic_pane

0xe01e,	// (0x000997bb) call2_cli_visual_text_pane

0xa85d,	// (0x00095ffa) smil_status_volume_pane_g3

0x0002,

0xe291,	// (0x00099a2e) call2_cli_visual_graphic_pane_g1

0xe291,	// (0x00099a2e) call2_cli_visual_graphic_pane_g2

0xe291,	// (0x00099a2e) call2_cli_visual_graphic_pane_g3

0x0002,

0x0360,	// (0x0008bafd) call2_cli_visual_graphic_pane_g

0xa602,	// (0x00095d9f) bg_popup_call2_rect_pane_g1

0xe44b,	// (0x00099be8) bg_popup_call2_rect_pane_g2

0xa60a,	// (0x00095da7) bg_popup_call2_rect_pane_g3

0xa612,	// (0x00095daf) bg_popup_call2_rect_pane_g4

0xa61a,	// (0x00095db7) bg_popup_call2_rect_pane_g5

0xa622,	// (0x00095dbf) bg_popup_call2_rect_pane_g6

0xa62a,	// (0x00095dc7) bg_popup_call2_rect_pane_g7

0xa632,	// (0x00095dcf) bg_popup_call2_rect_pane_g8

0xa63a,	// (0x00095dd7) bg_popup_call2_rect_pane_g9

0x0008,

0xf411,	// (0x0009abae) bg_popup_call2_rect_pane_g

0xa642,	// (0x00095ddf) bg_popup_call2_bubble_pane_g1

0xa64a,	// (0x00095de7) bg_popup_call2_bubble_pane_g2

0xa652,	// (0x00095def) bg_popup_call2_bubble_pane_g3

0xa65a,	// (0x00095df7) bg_popup_call2_bubble_pane_g4

0xa662,	// (0x00095dff) bg_popup_call2_bubble_pane_g5

0xa66a,	// (0x00095e07) bg_popup_call2_bubble_pane_g6

0xa672,	// (0x00095e0f) bg_popup_call2_bubble_pane_g7

0xa67a,	// (0x00095e17) bg_popup_call2_bubble_pane_g8

0xa682,	// (0x00095e1f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf424,	// (0x0009abc1) bg_popup_call2_bubble_pane_g

0x1446,	// (0x0008cbe3) aid_cale_week_size_cell_pane

0x19ec,	// (0x0008d189) aid_cams_cif_uncrop_pane_ParamLimits

0x19ec,	// (0x0008d189) aid_cams_cif_uncrop_pane

0x1b42,	// (0x0008d2df) aid_cams_size_cell_ParamLimits

0x1b42,	// (0x0008d2df) aid_cams_size_cell

0x1b56,	// (0x0008d2f3) grid_cams_pane_ParamLimits

0x1b70,	// (0x0008d30d) linegrid_cams_pane_ParamLimits

0x1c57,	// (0x0008d3f4) call_video_pane_t1

0x1c75,	// (0x0008d412) call_video_pane_t2

0x0001,

0xf1e9,	// (0x0009a986) call_video_pane_t

0x209d,	// (0x0008d83a) aid_cale_month_size_cell_pane_ParamLimits

0x209d,	// (0x0008d83a) aid_cale_month_size_cell_pane

0xf49a,	// (0x0009ac37) smil_status_volume_pane_g

0xa86a,	// (0x00096007) volume_smil_pane_ParamLimits

0x9de4,	// (0x00095581) aid_popup2_width_pane

0x13bd,	// (0x0008cb5a) cell_qdial_pane_g4_ParamLimits

0x13bd,	// (0x0008cb5a) cell_qdial_pane_g4

0x2e01,	// (0x0008e59e) aid_blid_cardinal_pane_ParamLimits

0x2e0d,	// (0x0008e5aa) aid_blid_destination_pane_ParamLimits

0x2e0d,	// (0x0008e5aa) aid_blid_destination_pane

0xe279,	// (0x00099a16) bg_popup_call_poc_act_pane_ParamLimits

0xe279,	// (0x00099a16) bg_popup_call_poc_act_pane

0xe279,	// (0x00099a16) bg_popup_call_poc_inact_pane_ParamLimits

0xe279,	// (0x00099a16) bg_popup_call_poc_inact_pane

0xa68a,	// (0x00095e27) bg_popup_call_poc_act_pane_g1

0xa692,	// (0x00095e2f) bg_popup_call_poc_act_pane_g2

0xa69a,	// (0x00095e37) bg_popup_call_poc_act_pane_g3

0xa65a,	// (0x00095df7) bg_popup_call_poc_act_pane_g4

0xa662,	// (0x00095dff) bg_popup_call_poc_act_pane_g5

0xa6a2,	// (0x00095e3f) bg_popup_call_poc_act_pane_g6

0xa672,	// (0x00095e0f) bg_popup_call_poc_act_pane_g7

0xa6aa,	// (0x00095e47) bg_popup_call_poc_act_pane_g8

0xe01e,	// (0x000997bb) main_usb_pane

0xa776,	// (0x00095f13) popup_cale_lunar_info_window

0x1f4f,	// (0x0008d6ec) im_reading_pane_t1_ParamLimits

0xe615,	// (0x00099db2) list_im_pane_ParamLimits

0xe626,	// (0x00099dc3) scroll_pane_cp07_ParamLimits

0xe01e,	// (0x000997bb) grid_highlight_pane_cp012

0xe279,	// (0x00099a16) mup_scale_pane_ParamLimits

0x343c,	// (0x0008ebd9) main_usb_pane_g1_ParamLimits

0x343c,	// (0x0008ebd9) main_usb_pane_g1

0x437f,	// (0x0008fb1c) main_usb_pane_g2_ParamLimits

0x437f,	// (0x0008fb1c) main_usb_pane_g2

0x0001,

0xf44e,	// (0x0009abeb) main_usb_pane_g_ParamLimits

0xf44e,	// (0x0009abeb) main_usb_pane_g

0x4395,	// (0x0008fb32) main_usb_pane_t1_ParamLimits

0x4395,	// (0x0008fb32) main_usb_pane_t1

0x43a7,	// (0x0008fb44) main_usb_pane_t2_ParamLimits

0x43a7,	// (0x0008fb44) main_usb_pane_t2

0x43b9,	// (0x0008fb56) main_usb_pane_t3_ParamLimits

0x43b9,	// (0x0008fb56) main_usb_pane_t3

0x43cb,	// (0x0008fb68) main_usb_pane_t4_ParamLimits

0x43cb,	// (0x0008fb68) main_usb_pane_t4

0x43dd,	// (0x0008fb7a) main_usb_pane_t5_ParamLimits

0x43dd,	// (0x0008fb7a) main_usb_pane_t5

0x43ef,	// (0x0008fb8c) main_usb_pane_t6_ParamLimits

0x43ef,	// (0x0008fb8c) main_usb_pane_t6

0x0005,

0xf453,	// (0x0009abf0) main_usb_pane_t_ParamLimits

0x2db0,	// (0x0008e54d) aid_text_placing

0x2db9,	// (0x0008e556) main_location2_pane_t1_ParamLimits

0x2dcb,	// (0x0008e568) main_location2_pane_t2_ParamLimits

0x2ddd,	// (0x0008e57a) main_location2_pane_t3_ParamLimits

0x2def,	// (0x0008e58c) main_location2_pane_t4_ParamLimits

0x2def,	// (0x0008e58c) main_location2_pane_t4

0xf290,	// (0x0009aa2d) main_location2_pane_t_ParamLimits

0xe2b5,	// (0x00099a52) find_pinb_pane_g2_ParamLimits

0xe2b5,	// (0x00099a52) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0009a85d) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0009a85d) find_pinb_pane_g

0xe2c1,	// (0x00099a5e) find_pinb_pane_t1_ParamLimits

0xe2d3,	// (0x00099a70) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0009a862) find_pinb_pane_t_ParamLimits

0xe01e,	// (0x000997bb) main_call3_pane

0x2588,	// (0x0008dd25) cale_month_day_heading_pane_t1_ParamLimits

0x260e,	// (0x0008ddab) cale_month_day_heading_pane_t2_ParamLimits

0x2687,	// (0x0008de24) cale_month_day_heading_pane_t3_ParamLimits

0x2700,	// (0x0008de9d) cale_month_day_heading_pane_t4_ParamLimits

0x2781,	// (0x0008df1e) cale_month_day_heading_pane_t5_ParamLimits

0x280a,	// (0x0008dfa7) cale_month_day_heading_pane_t6_ParamLimits

0x2893,	// (0x0008e030) cale_month_day_heading_pane_t7_ParamLimits

0xf20e,	// (0x0009a9ab) cale_month_day_heading_pane_t_ParamLimits

0xe85d,	// (0x00099ffa) smil_status_volume_pane

0x3418,	// (0x0008ebb5) postcard_address_pane_ParamLimits

0x3418,	// (0x0008ebb5) postcard_address_pane

0x342a,	// (0x0008ebc7) postcard_message_pane_ParamLimits

0x342a,	// (0x0008ebc7) postcard_message_pane

0x435d,	// (0x0008fafa) call2_cli_visual_pane_t1_ParamLimits

0x435d,	// (0x0008fafa) call2_cli_visual_pane_t1

0xa897,	// (0x00096034) postcard_message_pane_t1_ParamLimits

0xa897,	// (0x00096034) postcard_message_pane_t1

0xa87f,	// (0x0009601c) postcard_address_pane_t1_ParamLimits

0xa87f,	// (0x0009601c) postcard_address_pane_t1

0x4aed,	// (0x0009028a) popup_call3_audio_in_window_ParamLimits

0x4aed,	// (0x0009028a) popup_call3_audio_in_window

0x4978,	// (0x00090115) bg_popup_call3_in_pane_ParamLimits

0x4978,	// (0x00090115) bg_popup_call3_in_pane

0x49ee,	// (0x0009018b) popup_call3_audio_in_window_g1_ParamLimits

0x49ee,	// (0x0009018b) popup_call3_audio_in_window_g1

0x4a0e,	// (0x000901ab) popup_call3_audio_in_window_g2_ParamLimits

0x4a0e,	// (0x000901ab) popup_call3_audio_in_window_g2

0x4a2e,	// (0x000901cb) popup_call3_audio_in_window_g3_ParamLimits

0x4a2e,	// (0x000901cb) popup_call3_audio_in_window_g3

0x0003,

0xf4a1,	// (0x0009ac3e) popup_call3_audio_in_window_g_ParamLimits

0xf4a1,	// (0x0009ac3e) popup_call3_audio_in_window_g

0x4a5f,	// (0x000901fc) popup_call3_audio_in_window_t1_ParamLimits

0x4a5f,	// (0x000901fc) popup_call3_audio_in_window_t1

0x4a9d,	// (0x0009023a) popup_call3_audio_in_window_t2_ParamLimits

0x4a9d,	// (0x0009023a) popup_call3_audio_in_window_t2

0x4adb,	// (0x00090278) popup_call3_audio_in_window_t3_ParamLimits

0x4adb,	// (0x00090278) popup_call3_audio_in_window_t3

0x0002,

0xf4aa,	// (0x0009ac47) popup_call3_audio_in_window_t_ParamLimits

0xf4aa,	// (0x0009ac47) popup_call3_audio_in_window_t

0xe526,	// (0x00099cc3) bg_popup_call3_rect_pane

0xa602,	// (0x00095d9f) bg_popup_call3_rect_pane_g1

0xe44b,	// (0x00099be8) bg_popup_call3_rect_pane_g2

0xa60a,	// (0x00095da7) bg_popup_call3_rect_pane_g3

0xa612,	// (0x00095daf) bg_popup_call3_rect_pane_g4

0xa61a,	// (0x00095db7) bg_popup_call3_rect_pane_g5

0xa622,	// (0x00095dbf) bg_popup_call3_rect_pane_g6

0xa62a,	// (0x00095dc7) bg_popup_call3_rect_pane_g7

0xdc01,	// (0x0009939e) mup_visualizer_osc_pane

0xdc01,	// (0x0009939e) mup_visualizer_spec_pane

0x49a8,	// (0x00090145) call3_video_qcif_pane_ParamLimits

0x49a8,	// (0x00090145) call3_video_qcif_pane

0x49bb,	// (0x00090158) call3_video_qcif_uncrop_pane_ParamLimits

0x49bb,	// (0x00090158) call3_video_qcif_uncrop_pane

0x49c9,	// (0x00090166) call3_video_subqcif_pane_ParamLimits

0x49c9,	// (0x00090166) call3_video_subqcif_pane

0x49dd,	// (0x0009017a) call3_video_subqcif_uncrop_pane_ParamLimits

0x49dd,	// (0x0009017a) call3_video_subqcif_uncrop_pane

0x4a4e,	// (0x000901eb) popup_call3_audio_in_window_g4_ParamLimits

0x4a4e,	// (0x000901eb) popup_call3_audio_in_window_g4

0xdc01,	// (0x0009939e) mup_spec_half_pane

0xdc01,	// (0x0009939e) mup_spec_half_pane_cp

0xdc01,	// (0x0009939e) mup_osc_middle_pane

0xe55c,	// (0x00099cf9) mup_visualizer_osc_pane_g1

0xa810,	// (0x00095fad) mup_spec_bar_pane_ParamLimits

0xa810,	// (0x00095fad) mup_spec_bar_pane

0xe55c,	// (0x00099cf9) mup_spec_bar_pane_g1

0xe55c,	// (0x00099cf9) mup_spec_bar_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) mup_spec_bar_pane_g

0x1446,	// (0x0008cbe3) aid_cale_week_size_cell_pane_ParamLimits

0x1460,	// (0x0008cbfd) bg_cale_heading_pane_ParamLimits

0xe488,	// (0x00099c25) bg_cale_pane_cp01_ParamLimits

0x1478,	// (0x0008cc15) cale_week_corner_pane_ParamLimits

0x1497,	// (0x0008cc34) cale_week_day_heading_pane_ParamLimits

0x14b4,	// (0x0008cc51) cale_week_scroll_pane_g1_ParamLimits

0x14c7,	// (0x0008cc64) cale_week_scroll_pane_g2_ParamLimits

0x14df,	// (0x0008cc7c) cale_week_scroll_pane_g3_ParamLimits

0x14f7,	// (0x0008cc94) cale_week_scroll_pane_g4_ParamLimits

0x150f,	// (0x0008ccac) cale_week_scroll_pane_g5_ParamLimits

0x152f,	// (0x0008cccc) cale_week_scroll_pane_g6_ParamLimits

0x154f,	// (0x0008ccec) cale_week_scroll_pane_g7_ParamLimits

0x156f,	// (0x0008cd0c) cale_week_scroll_pane_g8_ParamLimits

0x1593,	// (0x0008cd30) cale_week_scroll_pane_g9_ParamLimits

0x15ab,	// (0x0008cd48) cale_week_scroll_pane_g10_ParamLimits

0x15c3,	// (0x0008cd60) cale_week_scroll_pane_g11_ParamLimits

0x15db,	// (0x0008cd78) cale_week_scroll_pane_g12_ParamLimits

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g13_ParamLimits

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g14_ParamLimits

0x15f3,	// (0x0008cd90) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0009a8ee) cale_week_scroll_pane_g_ParamLimits

0x162f,	// (0x0008cdcc) cale_week_time_pane_ParamLimits

0x1653,	// (0x0008cdf0) grid_cale_week_pane_ParamLimits

0xe4a5,	// (0x00099c42) listscroll_cale_week_pane_t1

0xe4b7,	// (0x00099c54) scroll_pane_cp08_ParamLimits

0x20fd,	// (0x0008d89a) cale_month_corner_pane_ParamLimits

0xe833,	// (0x00099fd0) cale_month_pane_t1

0x251b,	// (0x0008dcb8) cale_month_week_pane_ParamLimits

0x2c30,	// (0x0008e3cd) popup_call_status_window_g1_ParamLimits

0x2c44,	// (0x0008e3e1) popup_call_status_window_g2_ParamLimits

0x2c58,	// (0x0008e3f5) popup_call_status_window_g3_ParamLimits

0xf23e,	// (0x0009a9db) popup_call_status_window_g_ParamLimits

0xebef,	// (0x0009a38c) aid_call2_pane

0x3221,	// (0x0008e9be) msg_header_pane_g1

0x3418,	// (0x0008ebb5) postcard_address2_pane_ParamLimits

0x3418,	// (0x0008ebb5) postcard_address2_pane

0x342a,	// (0x0008ebc7) postcard_message2_pane_ParamLimits

0x342a,	// (0x0008ebc7) postcard_message2_pane

0x4949,	// (0x000900e6) message2_row_pane_ParamLimits

0x4949,	// (0x000900e6) message2_row_pane

0x4965,	// (0x00090102) address2_row_pane_ParamLimits

0x4965,	// (0x00090102) address2_row_pane

0xa7dd,	// (0x00095f7a) postcard_message2_row_pane_g1

0xa7e5,	// (0x00095f82) postcard_message2_row_pane_t1

0xa7dd,	// (0x00095f7a) address2_row_pane_g1

0xa7e5,	// (0x00095f82) address2_row_pane_t1

0x1983,	// (0x0008d120) aid_size_cell_vorec

0xe01e,	// (0x000997bb) main_rss_pane

0xa7f3,	// (0x00095f90) rss_list_single_pane_ParamLimits

0xa7f3,	// (0x00095f90) rss_list_single_pane

0xa801,	// (0x00095f9e) rss_list_single_pane_t1

0xa801,	// (0x00095f9e) rss_list_single_pane_t2

0x0001,

0xf495,	// (0x0009ac32) rss_list_single_pane_t

0xe01e,	// (0x000997bb) main_camera2_pane

0xe01e,	// (0x000997bb) main_video2_pane

0xa8b3,	// (0x00096050) cams_zoom_pane_cp2_ParamLimits

0xa8b3,	// (0x00096050) cams_zoom_pane_cp2

0xa8b3,	// (0x00096050) image2_vga_pane_ParamLimits

0xa8b3,	// (0x00096050) image2_vga_pane

0xd995,	// (0x00099132) main_camera2_pane_g1_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g1

0xd995,	// (0x00099132) main_camera2_pane_g2_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g2

0xd995,	// (0x00099132) main_camera2_pane_g3_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g3

0xd995,	// (0x00099132) main_camera2_pane_g4_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g4

0xd995,	// (0x00099132) main_camera2_pane_g5_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g5

0xd995,	// (0x00099132) main_camera2_pane_g6_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g6

0xd995,	// (0x00099132) main_camera2_pane_g7_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g7

0xd995,	// (0x00099132) main_camera2_pane_g8_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g8

0x0008,

0xf4b1,	// (0x0009ac4e) main_camera2_pane_g_ParamLimits

0xf4b1,	// (0x0009ac4e) main_camera2_pane_g

0x4b0f,	// (0x000902ac) main_camera2_pane_t1_ParamLimits

0x4b0f,	// (0x000902ac) main_camera2_pane_t1

0x4b0f,	// (0x000902ac) main_camera2_pane_t2_ParamLimits

0x4b0f,	// (0x000902ac) main_camera2_pane_t2

0x4b0f,	// (0x000902ac) main_camera2_pane_t3_ParamLimits

0x4b0f,	// (0x000902ac) main_camera2_pane_t3

0x4b0f,	// (0x000902ac) main_camera2_pane_t4_ParamLimits

0x4b0f,	// (0x000902ac) main_camera2_pane_t4

0x0006,

0xf4c4,	// (0x0009ac61) main_camera2_pane_t_ParamLimits

0xf4c4,	// (0x0009ac61) main_camera2_pane_t

0xd9a3,	// (0x00099140) cams_zoom_pane_cp4_ParamLimits

0xd9a3,	// (0x00099140) cams_zoom_pane_cp4

0x4b23,	// (0x000902c0) image2_cif_pane_ParamLimits

0x4b23,	// (0x000902c0) image2_cif_pane

0x9e49,	// (0x000955e6) image2_subqcif_pane_ParamLimits

0x9e49,	// (0x000955e6) image2_subqcif_pane

0x4b31,	// (0x000902ce) main_video2_pane_g1_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g1

0x4b31,	// (0x000902ce) main_video2_pane_g2_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g2

0x4b31,	// (0x000902ce) main_video2_pane_g3_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g3

0x4b31,	// (0x000902ce) main_video2_pane_g4_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g4

0x4b31,	// (0x000902ce) main_video2_pane_g5_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g5

0x4b31,	// (0x000902ce) main_video2_pane_g6_ParamLimits

0x4b31,	// (0x000902ce) main_video2_pane_g6

0x0005,

0xf4d3,	// (0x0009ac70) main_video2_pane_g_ParamLimits

0xf4d3,	// (0x0009ac70) main_video2_pane_g

0x4b3f,	// (0x000902dc) main_video2_pane_t1_ParamLimits

0x4b3f,	// (0x000902dc) main_video2_pane_t1

0x4b3f,	// (0x000902dc) main_video2_pane_t2_ParamLimits

0x4b3f,	// (0x000902dc) main_video2_pane_t2

0x4b3f,	// (0x000902dc) main_video2_pane_t3_ParamLimits

0x4b3f,	// (0x000902dc) main_video2_pane_t3

0x0002,

0xf4e0,	// (0x0009ac7d) main_video2_pane_t_ParamLimits

0xf4e0,	// (0x0009ac7d) main_video2_pane_t

0x4483,	// (0x0008fc20) call_muted_g2

0x0001,

0xf487,	// (0x0009ac24) call_muted_g

0xe01e,	// (0x000997bb) main_mup2_pane

0xf05d,	// (0x0009a7fa) main_mup2_pane_g1_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g1

0xf05d,	// (0x0009a7fa) main_mup2_pane_g2_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g2

0xa9e1,	// (0x0009617e) main_mup_pane_g13_cp1

0x9e57,	// (0x000955f4) mup_volume_pane_cp1

0xf05d,	// (0x0009a7fa) main_mup2_pane_g4_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g4

0xf05d,	// (0x0009a7fa) main_mup2_pane_g5_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g5

0xf05d,	// (0x0009a7fa) main_mup2_pane_g6_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g6

0xf05d,	// (0x0009a7fa) main_mup2_pane_g7_ParamLimits

0xf05d,	// (0x0009a7fa) main_mup2_pane_g7

0x0006,

0xf4e7,	// (0x0009ac84) main_mup2_pane_g_ParamLimits

0xf4e7,	// (0x0009ac84) main_mup2_pane_g

0x2ed8,	// (0x0008e675) main_mup2_pane_t1_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t1

0x2ed8,	// (0x0008e675) main_mup2_pane_t2_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t2

0x2ed8,	// (0x0008e675) main_mup2_pane_t3_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t3

0x2ed8,	// (0x0008e675) main_mup2_pane_t4_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t4

0x2ed8,	// (0x0008e675) main_mup2_pane_t5_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t5

0x2ed8,	// (0x0008e675) main_mup2_pane_t6_ParamLimits

0x2ed8,	// (0x0008e675) main_mup2_pane_t6

0x0005,

0xf4f6,	// (0x0009ac93) main_mup2_pane_t_ParamLimits

0xf4f6,	// (0x0009ac93) main_mup2_pane_t

0x2f00,	// (0x0008e69d) mup2_visualizer_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup2_visualizer_pane

0x2f00,	// (0x0008e69d) mup_progress_pane_cp_ParamLimits

0x2f00,	// (0x0008e69d) mup_progress_pane_cp

0xa9c2,	// (0x0009615f) mup_volume_pane_cp_ParamLimits

0xa9c2,	// (0x0009615f) mup_volume_pane_cp

0xe302,	// (0x00099a9f) mup2_visualizer_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) mup2_visualizer_pane_g1

0xe310,	// (0x00099aad) mup2_visualizer_pane_g2_ParamLimits

0xe310,	// (0x00099aad) mup2_visualizer_pane_g2

0xe310,	// (0x00099aad) mup2_visualizer_pane_g3_ParamLimits

0xe310,	// (0x00099aad) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0009a867) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0009a867) mup2_visualizer_pane_g

0x37e4,	// (0x0008ef81) aid_size_cell_fmradio

0x4635,	// (0x0008fdd2) aid_height_parent_landcape

0xe6a4,	// (0x00099e41) wml_content_pane_cp

0xe6ac,	// (0x00099e49) wml_tabs_pane

0xe6b5,	// (0x00099e52) popup_wml_miniature_window

0xe6bd,	// (0x00099e5a) scroll_pane_cp021

0xe6d1,	// (0x00099e6e) wml_content_pane_comp8

0xe01e,	// (0x000997bb) bg_popup_sub_pane_cp05

0xa90d,	// (0x000960aa) popup_wml_miniature_window_g1

0xa915,	// (0x000960b2) wml_miniature_view_pane

0x4b53,	// (0x000902f0) aid_size_wml_view

0x4b5b,	// (0x000902f8) wml_miniature_view_pane_g1

0x4b64,	// (0x00090301) wml_miniature_view_pane_g2

0x4b6d,	// (0x0009030a) wml_miniature_view_pane_g3

0x4b75,	// (0x00090312) wml_miniature_view_pane_g4

0x4b7d,	// (0x0009031a) wml_miniature_view_pane_g5

0x4b85,	// (0x00090322) wml_miniature_view_pane_g6

0x4b8d,	// (0x0009032a) wml_miniature_view_pane_g7

0x4b95,	// (0x00090332) wml_miniature_view_pane_g8

0x0007,

0xf503,	// (0x0009aca0) wml_miniature_view_pane_g

0xa91d,	// (0x000960ba) background_graphic_ParamLimits

0xa91d,	// (0x000960ba) background_graphic

0xa929,	// (0x000960c6) wml_tabs_2_pane

0xa932,	// (0x000960cf) wml_tabs_3_pane_ParamLimits

0xa932,	// (0x000960cf) wml_tabs_3_pane

0xa944,	// (0x000960e1) wml_tabs_4_pane_ParamLimits

0xa944,	// (0x000960e1) wml_tabs_4_pane

0xa95a,	// (0x000960f7) wml_tabs_5_pane_ParamLimits

0xa95a,	// (0x000960f7) wml_tabs_5_pane

0xa974,	// (0x00096111) wml_tabs_pane_g2_ParamLimits

0xa974,	// (0x00096111) wml_tabs_pane_g2

0xa989,	// (0x00096126) wml_tabs_pane_g3_ParamLimits

0xa989,	// (0x00096126) wml_tabs_pane_g3

0xa99e,	// (0x0009613b) wml_tabs_2_active_pane_ParamLimits

0xa99e,	// (0x0009613b) wml_tabs_2_active_pane

0xa99e,	// (0x0009613b) wml_tabs_2_passive_pane_ParamLimits

0xa99e,	// (0x0009613b) wml_tabs_2_passive_pane

0x4b9d,	// (0x0009033a) wml_tabs_3_active_pane_cp_ParamLimits

0x4b9d,	// (0x0009033a) wml_tabs_3_active_pane_cp

0x4bb2,	// (0x0009034f) wml_tabs_3_passive_pane_ParamLimits

0x4bb2,	// (0x0009034f) wml_tabs_3_passive_pane

0x4bc5,	// (0x00090362) wml_tabs_3_passive_pane_cp_ParamLimits

0x4bc5,	// (0x00090362) wml_tabs_3_passive_pane_cp

0x4bdc,	// (0x00090379) tabs_4_active_pane

0x4be4,	// (0x00090381) tabs_4_passive_pane

0x4bee,	// (0x0009038b) tabs_4_passive_pane_cp

0x4bf6,	// (0x00090393) tabs_4_passive_pane_cp2

0x4377,	// (0x0008fb14) aid_height_text

0x2f00,	// (0x0008e69d) mup_volume_cont_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup_volume_cont_pane

0xdc01,	// (0x0009939e) aid_size_cell_pinb

0xdc01,	// (0x0009939e) aid_size_list_pinb

0x2f00,	// (0x0008e69d) mup2_volume_cont_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup2_volume_cont_pane

0xa9ac,	// (0x00096149) mup2_volume_cont_pane_g1_ParamLimits

0xa9ac,	// (0x00096149) mup2_volume_cont_pane_g1

0x0e2d,	// (0x0008c5ca) aid_size_cell_touch_ParamLimits

0x0e2d,	// (0x0008c5ca) aid_size_cell_touch

0x105a,	// (0x0008c7f7) touch_pane_ParamLimits

0x105a,	// (0x0008c7f7) touch_pane

0x9e57,	// (0x000955f4) main_rss2_pane

0xa9eb,	// (0x00096188) listscroll_rss2_pane

0xa9f4,	// (0x00096191) rss2_navigation_pane

0xa9fc,	// (0x00096199) list_rss2_pane

0xed26,	// (0x0009a4c3) scroll_pane_cp22

0xaa04,	// (0x000961a1) rss2_navigation_pane_g1

0xaa0d,	// (0x000961aa) rss2_navigation_pane_g2

0xaa15,	// (0x000961b2) rss2_navigation_pane_g3

0x0002,

0xf514,	// (0x0009acb1) rss2_navigation_pane_g

0xaa1d,	// (0x000961ba) rss2_navigation_pane_t1

0x4c00,	// (0x0009039d) rss2_list_single_pane_ParamLimits

0x4c00,	// (0x0009039d) rss2_list_single_pane

0xaa2b,	// (0x000961c8) rss2_list_single_pane_t2

0xaa39,	// (0x000961d6) rss2_list_single_pane_t3_ParamLimits

0xaa39,	// (0x000961d6) rss2_list_single_pane_t3

0xaa56,	// (0x000961f3) rss2_list_single_pane_t4

0x2b1d,	// (0x0008e2ba) smil_status_pane_g1

0x9e49,	// (0x000955e6) main_image2_pane_ParamLimits

0x9e49,	// (0x000955e6) main_image2_pane

0xd995,	// (0x00099132) main_camera2_pane_g9_ParamLimits

0xd995,	// (0x00099132) main_camera2_pane_g9

0x4b0f,	// (0x000902ac) main_camera2_pane_t5_ParamLimits

0x4b0f,	// (0x000902ac) main_camera2_pane_t5

0xa8c1,	// (0x0009605e) main_camera2_pane_t6_ParamLimits

0xa8c1,	// (0x0009605e) main_camera2_pane_t6

0x4c15,	// (0x000903b2) main_image2_pane_g1_ParamLimits

0x4c15,	// (0x000903b2) main_image2_pane_g1

0x379a,	// (0x0008ef37) smil2_video_pane_ParamLimits

0x379a,	// (0x0008ef37) smil2_video_pane

0x9e00,	// (0x0009559d) aid_zoom_text_primary_cp

0x9e3f,	// (0x000955dc) popup_preview_fixed_window

0xe60d,	// (0x00099daa) im_reading_pane_g1

0x4b01,	// (0x0009029e) cams2_bc_adjust_pane_cp_ParamLimits

0x4b01,	// (0x0009029e) cams2_bc_adjust_pane_cp

0xa8e9,	// (0x00096086) cams2_bc_adjust_pane_ParamLimits

0xa8e9,	// (0x00096086) cams2_bc_adjust_pane

0xa9e1,	// (0x0009617e) cams2_bc_adjust_pane_g1

0x9e57,	// (0x000955f4) cams2_slider_pane

0xa9e1,	// (0x0009617e) cams2_slider_pane_g1

0xa9e1,	// (0x0009617e) cams2_slider_pane_g2

0x0006,

0xf51b,	// (0x0009acb8) cams2_slider_pane_g

0x1122,	// (0x0008c8bf) calc_display_pane_ParamLimits

0x1147,	// (0x0008c8e4) calc_paper_pane_ParamLimits

0x116a,	// (0x0008c907) grid_calc_pane_ParamLimits

0x9f7d,	// (0x0009571a) popup_clock_digital_window_t1_ParamLimits

0x3621,	// (0x0008edbe) main_image_pane_t1

0x1104,	// (0x0008c8a1) aid_size_cell_calc_ParamLimits

0x1104,	// (0x0008c8a1) aid_size_cell_calc

0x468d,	// (0x0008fe2a) popup_blid_sat_info2_window_ParamLimits

0x468d,	// (0x0008fe2a) popup_blid_sat_info2_window

0xaa64,	// (0x00096201) aid_size_cell_blid

0xaa6c,	// (0x00096209) bg_popup_window_pane_cp07

0xaa8f,	// (0x0009622c) grid_popup_blid_pane

0xaa99,	// (0x00096236) heading_pane_cp05_ParamLimits

0xaa99,	// (0x00096236) heading_pane_cp05

0xab63,	// (0x00096300) cell_popup_blid_pane_ParamLimits

0xab63,	// (0x00096300) cell_popup_blid_pane

0xab87,	// (0x00096324) cell_popup_blid_pane_g1

0xab8f,	// (0x0009632c) cell_popup_blid_pane_t1

0x2f00,	// (0x0008e69d) mup2_indicator_pane_ParamLimits

0x2f00,	// (0x0008e69d) mup2_indicator_pane

0xdc01,	// (0x0009939e) mup2_visualizer_osc_pane

0xa8f7,	// (0x00096094) mup2_visualizer_spec_pane_ParamLimits

0xa8f7,	// (0x00096094) mup2_visualizer_spec_pane

0xdc01,	// (0x0009939e) mup2_spec_half_pane

0xdc01,	// (0x0009939e) mup2_spec_half_pane_cp

0xab9d,	// (0x0009633a) mup2_spec_bar_pane_ParamLimits

0xab9d,	// (0x0009633a) mup2_spec_bar_pane

0xe55c,	// (0x00099cf9) mup2_spec_bar_pane_g1

0xabbc,	// (0x00096359) mup2_spec_bar_pane_g2

0x0001,

0xf541,	// (0x0009acde) mup2_spec_bar_pane_g

0xdc01,	// (0x0009939e) mup2_osc_middle_pane

0xe55c,	// (0x00099cf9) mup2_visualizer_osc_pane_g1

0xdc2b,	// (0x000993c8) popup_number_entry_window_t1_ParamLimits

0xdc3e,	// (0x000993db) popup_number_entry_window_t2_ParamLimits

0xdc50,	// (0x000993ed) popup_number_entry_window_t3_ParamLimits

0x10ac,	// (0x0008c849) popup_number_entry_window_t5_ParamLimits

0x10ac,	// (0x0008c849) popup_number_entry_window_t5

0xf06b,	// (0x0009a808) popup_number_entry_window_t_ParamLimits

0xdc62,	// (0x000993ff) text_title_cp2_ParamLimits

0x9fbc,	// (0x00095759) aid_hotspot_pointer_text2_pane

0x9fd6,	// (0x00095773) main_viewer_pane_g9_ParamLimits

0x9fd6,	// (0x00095773) main_viewer_pane_g9

0xe833,	// (0x00099fd0) cale_month_pane_t1_ParamLimits

0xe870,	// (0x0009a00d) bg_cale_pane_ParamLimits

0xe888,	// (0x0009a025) list_cale_pane_ParamLimits

0xe899,	// (0x0009a036) listscroll_cale_day_pane_t1

0xe8ab,	// (0x0009a048) scroll_pane_cp09_ParamLimits

0x2f67,	// (0x0008e704) main_mup_eq_pane_t1_ParamLimits

0x2f67,	// (0x0008e704) main_mup_eq_pane_t1

0x2f81,	// (0x0008e71e) main_mup_eq_pane_t2_ParamLimits

0x2f81,	// (0x0008e71e) main_mup_eq_pane_t2

0x2f9b,	// (0x0008e738) main_mup_eq_pane_t3_ParamLimits

0x2f9b,	// (0x0008e738) main_mup_eq_pane_t3

0x2fb7,	// (0x0008e754) main_mup_eq_pane_t4_ParamLimits

0x2fb7,	// (0x0008e754) main_mup_eq_pane_t4

0x2fd3,	// (0x0008e770) main_mup_eq_pane_t5_ParamLimits

0x2fd3,	// (0x0008e770) main_mup_eq_pane_t5

0x2fef,	// (0x0008e78c) main_mup_eq_pane_t6_ParamLimits

0x2fef,	// (0x0008e78c) main_mup_eq_pane_t6

0x3003,	// (0x0008e7a0) main_mup_eq_pane_t7_ParamLimits

0x3003,	// (0x0008e7a0) main_mup_eq_pane_t7

0x3017,	// (0x0008e7b4) main_mup_eq_pane_t8_ParamLimits

0x3017,	// (0x0008e7b4) main_mup_eq_pane_t8

0x302b,	// (0x0008e7c8) main_mup_eq_pane_t9_ParamLimits

0x302b,	// (0x0008e7c8) main_mup_eq_pane_t9

0x3045,	// (0x0008e7e2) main_mup_eq_pane_t10_ParamLimits

0x3045,	// (0x0008e7e2) main_mup_eq_pane_t10

0x0009,

0xf2fa,	// (0x0009aa97) main_mup_eq_pane_t_ParamLimits

0xf2fa,	// (0x0009aa97) main_mup_eq_pane_t

0x30f4,	// (0x0008e891) mup_equalizer_pane_cp5_ParamLimits

0x3108,	// (0x0008e8a5) mup_equalizer_pane_cp6_ParamLimits

0x311c,	// (0x0008e8b9) mup_equalizer_pane_cp7_ParamLimits

0x9e57,	// (0x000955f4) main_gallery_pane

0xa82f,	// (0x00095fcc) smil2_volume_pane

0xa837,	// (0x00095fd4) smil_status_volume_pane_g1_ParamLimits

0xa84a,	// (0x00095fe7) smil_status_volume_pane_g2_ParamLimits

0xa85d,	// (0x00095ffa) smil_status_volume_pane_g3_ParamLimits

0xf49a,	// (0x0009ac37) smil_status_volume_pane_g_ParamLimits

0xaa6c,	// (0x00096209) bg_popup_window_pane_cp07_ParamLimits

0xaa7a,	// (0x00096217) blid_firmament_pane

0xe29b,	// (0x00099a38) aid_size_cell_gallery_ParamLimits

0xe29b,	// (0x00099a38) aid_size_cell_gallery

0xe29b,	// (0x00099a38) grid_gallery_pane_ParamLimits

0xe29b,	// (0x00099a38) grid_gallery_pane

0xaa6c,	// (0x00096209) cell_gallery_pane_ParamLimits

0xaa6c,	// (0x00096209) cell_gallery_pane

0xe29b,	// (0x00099a38) bg_cell_gallery_focus_pane_ParamLimits

0xe29b,	// (0x00099a38) bg_cell_gallery_focus_pane

0xe302,	// (0x00099a9f) cell_gallery_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) cell_gallery_pane_g1

0xe302,	// (0x00099a9f) cell_gallery_pane_g2_ParamLimits

0xe302,	// (0x00099a9f) cell_gallery_pane_g2

0xe302,	// (0x00099a9f) cell_gallery_pane_g3_ParamLimits

0xe302,	// (0x00099a9f) cell_gallery_pane_g3

0xe310,	// (0x00099aad) cell_gallery_pane_g4_ParamLimits

0xe310,	// (0x00099aad) cell_gallery_pane_g4

0x0003,

0x04ab,	// (0x0008bc48) cell_gallery_pane_g_ParamLimits

0x04ab,	// (0x0008bc48) cell_gallery_pane_g

0xabc6,	// (0x00096363) bg_cell_gallery_focus_pane_g1

0xabce,	// (0x0009636b) bg_cell_gallery_focus_pane_g2

0xabd6,	// (0x00096373) bg_cell_gallery_focus_pane_g3

0xabde,	// (0x0009637b) bg_cell_gallery_focus_pane_g4

0xabe6,	// (0x00096383) bg_cell_gallery_focus_pane_g5

0xabee,	// (0x0009638b) bg_cell_gallery_focus_pane_g6

0xabf6,	// (0x00096393) bg_cell_gallery_focus_pane_g7

0xabfe,	// (0x0009639b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf546,	// (0x0009ace3) bg_cell_gallery_focus_pane_g

0xac06,	// (0x000963a3) aid_firma_cardinal

0xac1a,	// (0x000963b7) blid_firmament_pane_t1

0xac31,	// (0x000963ce) blid_firmament_pane_t2

0xac48,	// (0x000963e5) blid_firmament_pane_t3

0xac5f,	// (0x000963fc) blid_firmament_pane_t4

0x0003,

0xf557,	// (0x0009acf4) blid_firmament_pane_t

0xac76,	// (0x00096413) blid_sat_info_pane

0xe55c,	// (0x00099cf9) blid_sat_info_pane_g1

0xe55c,	// (0x00099cf9) blid_sat_info_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) blid_sat_info_pane_g

0xac86,	// (0x00096423) blid_sat_info_pane_t1

0xac94,	// (0x00096431) smil2_volume_content_pane

0xac9d,	// (0x0009643a) smil2_volume_pane_g1

0xefd9,	// (0x0009a776) smil2_volume_content_pane_g1

0xaca5,	// (0x00096442) smil2_volume_content_pane_g2

0xacae,	// (0x0009644b) smil2_volume_content_pane_g3

0xacb7,	// (0x00096454) smil2_volume_content_pane_g4

0xacc0,	// (0x0009645d) smil2_volume_content_pane_g5

0xacc9,	// (0x00096466) smil2_volume_content_pane_g6

0xacd2,	// (0x0009646f) smil2_volume_content_pane_g7

0xacdb,	// (0x00096478) smil2_volume_content_pane_g8

0xace4,	// (0x00096481) smil2_volume_content_pane_g9

0xaced,	// (0x0009648a) smil2_volume_content_pane_g10

0x0009,

0xf560,	// (0x0009acfd) smil2_volume_content_pane_g

0x1707,	// (0x0008cea4) cale_week_day_heading_pane_t1_ParamLimits

0x1731,	// (0x0008cece) cale_week_day_heading_pane_t2_ParamLimits

0x1760,	// (0x0008cefd) cale_week_day_heading_pane_t3_ParamLimits

0x178f,	// (0x0008cf2c) cale_week_day_heading_pane_t4_ParamLimits

0x17be,	// (0x0008cf5b) cale_week_day_heading_pane_t5_ParamLimits

0x17f5,	// (0x0008cf92) cale_week_day_heading_pane_t6_ParamLimits

0x182c,	// (0x0008cfc9) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0009a90f) cale_week_day_heading_pane_t_ParamLimits

0xe4d4,	// (0x00099c71) bg_cale_side_pane_ParamLimits

0x1856,	// (0x0008cff3) cale_week_time_pane_t1_ParamLimits

0x1870,	// (0x0008d00d) cale_week_time_pane_t2_ParamLimits

0x188a,	// (0x0008d027) cale_week_time_pane_t3_ParamLimits

0x18a4,	// (0x0008d041) cale_week_time_pane_t4_ParamLimits

0x18be,	// (0x0008d05b) cale_week_time_pane_t5_ParamLimits

0x18d8,	// (0x0008d075) cale_week_time_pane_t6_ParamLimits

0x18f2,	// (0x0008d08f) cale_week_time_pane_t7_ParamLimits

0x190c,	// (0x0008d0a9) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0009a91e) cale_week_time_pane_t_ParamLimits

0x1926,	// (0x0008d0c3) cell_cale_week_pane_g2_ParamLimits

0xe4d4,	// (0x00099c71) bg_cale_side_pane_cp01_ParamLimits

0x2924,	// (0x0008e0c1) cale_month_week_pane_t1_ParamLimits

0x293d,	// (0x0008e0da) cale_month_week_pane_t2_ParamLimits

0x2956,	// (0x0008e0f3) cale_month_week_pane_t3_ParamLimits

0x296f,	// (0x0008e10c) cale_month_week_pane_t4_ParamLimits

0x2988,	// (0x0008e125) cale_month_week_pane_t5_ParamLimits

0x29a1,	// (0x0008e13e) cale_month_week_pane_t6_ParamLimits

0xf21d,	// (0x0009a9ba) cale_month_week_pane_t_ParamLimits

0x9ef9,	// (0x00095696) cell_cale_month_pane_g1_ParamLimits

0x9e57,	// (0x000955f4) main_cale_event_viewer_pane

0xdc01,	// (0x0009939e) listscroll_cale_event_viewer_pane

0xacf6,	// (0x00096493) list_cale_ev_pane

0xacfe,	// (0x0009649b) scroll_pane_cp023

0xad0a,	// (0x000964a7) field_cale_ev_pane_ParamLimits

0xad0a,	// (0x000964a7) field_cale_ev_pane

0xad28,	// (0x000964c5) field_cale_ev_content_pane_ParamLimits

0xad28,	// (0x000964c5) field_cale_ev_content_pane

0xad34,	// (0x000964d1) field_cale_ev_pane_g1_ParamLimits

0xad34,	// (0x000964d1) field_cale_ev_pane_g1

0xad40,	// (0x000964dd) field_cale_ev_pane_g2_ParamLimits

0xad40,	// (0x000964dd) field_cale_ev_pane_g2

0xad58,	// (0x000964f5) field_cale_ev_pane_g3_ParamLimits

0xad58,	// (0x000964f5) field_cale_ev_pane_g3

0x0002,

0xf575,	// (0x0009ad12) field_cale_ev_pane_g_ParamLimits

0xf575,	// (0x0009ad12) field_cale_ev_pane_g

0xad70,	// (0x0009650d) field_cale_ev_pane_t1_ParamLimits

0xad70,	// (0x0009650d) field_cale_ev_pane_t1

0xefe2,	// (0x0009a77f) field_cale_ev_content_pane_t1_ParamLimits

0xefe2,	// (0x0009a77f) field_cale_ev_content_pane_t1

0x320f,	// (0x0008e9ac) bg_button_pane_cp01

0x1434,	// (0x0008cbd1) listscroll_cale_week_pane_ParamLimits

0xe47f,	// (0x00099c1c) popup_toolbar_window_cp01

0xe4a5,	// (0x00099c42) listscroll_cale_week_pane_t1_ParamLimits

0x1434,	// (0x0008cbd1) listscroll_cale_day_pane_ParamLimits

0xe47f,	// (0x00099c1c) popup_toolbar_window_cp02

0xe899,	// (0x0009a036) listscroll_cale_day_pane_t1_ParamLimits

0x4653,	// (0x0008fdf0) main_cale_month_pane_ParamLimits

0xa7ad,	// (0x00095f4a) popup_toolbar_window_cp03_ParamLimits

0xa7ad,	// (0x00095f4a) popup_toolbar_window_cp03

0x35ff,	// (0x0008ed9c) main_image_pane_g2_ParamLimits

0x35ff,	// (0x0008ed9c) main_image_pane_g2

0x3610,	// (0x0008edad) main_image_pane_g3_ParamLimits

0x3610,	// (0x0008edad) main_image_pane_g3

0x0002,

0xf38c,	// (0x0009ab29) main_image_pane_g_ParamLimits

0xf38c,	// (0x0009ab29) main_image_pane_g

0x3621,	// (0x0008edbe) main_image_pane_t1_ParamLimits

0x3638,	// (0x0008edd5) main_image_pane_t2_ParamLimits

0x3638,	// (0x0008edd5) main_image_pane_t2

0x364a,	// (0x0008ede7) main_image_pane_t3_ParamLimits

0x364a,	// (0x0008ede7) main_image_pane_t3

0x3672,	// (0x0008ee0f) main_image_pane_t4_ParamLimits

0x3672,	// (0x0008ee0f) main_image_pane_t4

0x0003,

0xf393,	// (0x0009ab30) main_image_pane_t_ParamLimits

0xf393,	// (0x0009ab30) main_image_pane_t

0x3692,	// (0x0008ee2f) popup_image_details_window_cp01

0x369c,	// (0x0008ee39) popup_toobar_trans_pane_cp01_ParamLimits

0x369c,	// (0x0008ee39) popup_toobar_trans_pane_cp01

0x476c,	// (0x0008ff09) popup_image_details_window_ParamLimits

0x476c,	// (0x0008ff09) popup_image_details_window

0xa780,	// (0x00095f1d) popup_image_focus_window

0xa8b3,	// (0x00096050) camera2_autofocus_pane_ParamLimits

0xa8b3,	// (0x00096050) camera2_autofocus_pane

0xdc01,	// (0x0009939e) bg_popup_sub_pane_cp06

0xad87,	// (0x00096524) popup_image_focus_window_g1

0xad8f,	// (0x0009652c) popup_image_focus_window_g2

0xad97,	// (0x00096534) popup_image_focus_window_g3

0xad9f,	// (0x0009653c) popup_image_focus_window_g4

0x0003,

0xf57c,	// (0x0009ad19) popup_image_focus_window_g

0xada7,	// (0x00096544) popup_image_focus_window_t1

0xadb5,	// (0x00096552) popup_image_focus_window_t2

0xadc5,	// (0x00096562) popup_image_focus_window_t3

0x0002,

0xf585,	// (0x0009ad22) popup_image_focus_window_t

0xe302,	// (0x00099a9f) camera2_autofocus_pane_g1

0xe29b,	// (0x00099a38) bg_tb_trans_pane_cp01

0xadd3,	// (0x00096570) popup_image_details_window_g1

0xade6,	// (0x00096583) popup_image_details_window_g2

0x0002,

0xf58c,	// (0x0009ad29) popup_image_details_window_g

0xae0f,	// (0x000965ac) popup_image_details_window_t1

0xae21,	// (0x000965be) popup_image_details_window_t2

0xae3a,	// (0x000965d7) popup_image_details_window_t3

0xae4e,	// (0x000965eb) popup_image_details_window_t4

0xae69,	// (0x00096606) popup_image_details_window_t5

0x0004,

0xf593,	// (0x0009ad30) popup_image_details_window_t

0xe360,	// (0x00099afd) bg_calc_paper_pane_ParamLimits

0x9e57,	// (0x000955f4) grid_highlight_pane_cp013

0x9e69,	// (0x00095606) list_calc_pane_ParamLimits

0x9e7b,	// (0x00095618) scroll_pane_cp024

0xe374,	// (0x00099b11) bg_calc_display_pane_ParamLimits

0x1282,	// (0x0008ca1f) calc_display_pane_t1_ParamLimits

0x1297,	// (0x0008ca34) calc_display_pane_t2_ParamLimits

0x9e83,	// (0x00095620) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0009a88f) calc_display_pane_t_ParamLimits

0x1357,	// (0x0008caf4) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0009a8ac) cell_calc_pane_g

0x1360,	// (0x0008cafd) cell_calc_pane_t1

0xe3c9,	// (0x00099b66) grid_highlight_pane_cp02_ParamLimits

0xe3df,	// (0x00099b7c) toolbar_button_pane_cp01_ParamLimits

0xe3df,	// (0x00099b7c) toolbar_button_pane_cp01

0x36de,	// (0x0008ee7b) temp_image_control_pane_ParamLimits

0x36de,	// (0x0008ee7b) temp_image_control_pane

0x9e49,	// (0x000955e6) main_mp3_pane

0xae83,	// (0x00096620) temp_image_control_pane_g1_ParamLimits

0xae83,	// (0x00096620) temp_image_control_pane_g1

0xae91,	// (0x0009662e) temp_image_control_pane_g2_ParamLimits

0xae91,	// (0x0009662e) temp_image_control_pane_g2

0xaea3,	// (0x00096640) temp_image_control_pane_g3_ParamLimits

0xaea3,	// (0x00096640) temp_image_control_pane_g3

0x4c2b,	// (0x000903c8) temp_image_control_pane_g4_ParamLimits

0x4c2b,	// (0x000903c8) temp_image_control_pane_g4

0x0003,

0xf59e,	// (0x0009ad3b) temp_image_control_pane_g_ParamLimits

0xf59e,	// (0x0009ad3b) temp_image_control_pane_g

0xae83,	// (0x00096620) main_mp3_pane_g1

0x4c3e,	// (0x000903db) main_mp3_pane_g2

0x0007,

0xf5a7,	// (0x0009ad44) main_mp3_pane_g

0xaed8,	// (0x00096675) main_mp3_pane_t1

0xe310,	// (0x00099aad) main_camera_pane_g8_ParamLimits

0xe310,	// (0x00099aad) main_camera_pane_g8

0x1af0,	// (0x0008d28d) main_video_pane_g7_ParamLimits

0x1af0,	// (0x0008d28d) main_video_pane_g7

0xa8d5,	// (0x00096072) main_camera2_pane_t7_ParamLimits

0xa8d5,	// (0x00096072) main_camera2_pane_t7

0xe664,	// (0x00099e01) scroll_pane_cp025_ParamLimits

0xe664,	// (0x00099e01) scroll_pane_cp025

0xe678,	// (0x00099e15) scroll_pane_cp026_ParamLimits

0xe678,	// (0x00099e15) scroll_pane_cp026

0xe687,	// (0x00099e24) wml_content_pane_ParamLimits

0x9e57,	// (0x000955f4) main_touch_calib_pane

0x4d12,	// (0x000904af) main_touch_calib_pane_g1

0x4d24,	// (0x000904c1) main_touch_calib_pane_g2

0x4d36,	// (0x000904d3) main_touch_calib_pane_g3

0x4d48,	// (0x000904e5) main_touch_calib_pane_g4

0x0003,

0xf5c5,	// (0x0009ad62) main_touch_calib_pane_g

0x4d5a,	// (0x000904f7) main_touch_calib_pane_t1

0x4d74,	// (0x00090511) main_touch_calib_pane_t2

0x0004,

0xf5ce,	// (0x0009ad6b) main_touch_calib_pane_t

0xee02,	// (0x0009a59f) mup_progress_pane_cp02

0xee37,	// (0x0009a5d4) navi_pane_g1

0xeef2,	// (0x0009a68f) navi_pane_mp_t3

0x9e49,	// (0x000955e6) main_mp3_pane_ParamLimits

0x48f1,	// (0x0009008e) navi_pane_ParamLimits

0xae83,	// (0x00096620) main_mp3_pane_g1_ParamLimits

0x4c3e,	// (0x000903db) main_mp3_pane_g2_ParamLimits

0x4c4c,	// (0x000903e9) main_mp3_pane_g3_ParamLimits

0x4c4c,	// (0x000903e9) main_mp3_pane_g3

0x4c5a,	// (0x000903f7) main_mp3_pane_g4_ParamLimits

0x4c5a,	// (0x000903f7) main_mp3_pane_g4

0xe302,	// (0x00099a9f) main_mp3_pane_g5_ParamLimits

0xe302,	// (0x00099a9f) main_mp3_pane_g5

0xaeb3,	// (0x00096650) main_mp3_pane_g6_ParamLimits

0xaeb3,	// (0x00096650) main_mp3_pane_g6

0xaec0,	// (0x0009665d) main_mp3_pane_g7_ParamLimits

0xaec0,	// (0x0009665d) main_mp3_pane_g7

0xaecc,	// (0x00096669) main_mp3_pane_g8_ParamLimits

0xaecc,	// (0x00096669) main_mp3_pane_g8

0xf5a7,	// (0x0009ad44) main_mp3_pane_g_ParamLimits

0x4c66,	// (0x00090403) main_mp3_pane_t2

0x4c74,	// (0x00090411) main_mp3_pane_t3

0xaee6,	// (0x00096683) main_mp3_pane_t4

0xaef4,	// (0x00096691) main_mp3_pane_t5

0x0005,

0xf5b8,	// (0x0009ad55) main_mp3_pane_t

0xaf02,	// (0x0009669f) mup_progress_pane_cp01

0x9e00,	// (0x0009559d) aid_zoom_text_secondary2

0xacf6,	// (0x00096493) list_cale_ev2_pane

0xacfe,	// (0x0009649b) scroll_pane_cp023_ParamLimits

0x4dca,	// (0x00090567) field_cale_ev2_pane_ParamLimits

0x4dca,	// (0x00090567) field_cale_ev2_pane

0x4dea,	// (0x00090587) field_cale_ev2_pane_g1_ParamLimits

0x4dea,	// (0x00090587) field_cale_ev2_pane_g1

0x4df6,	// (0x00090593) field_cale_ev2_pane_g2_ParamLimits

0x4df6,	// (0x00090593) field_cale_ev2_pane_g2

0x4e0e,	// (0x000905ab) field_cale_ev2_pane_g3_ParamLimits

0x4e0e,	// (0x000905ab) field_cale_ev2_pane_g3

0x0003,

0xf5d9,	// (0x0009ad76) field_cale_ev2_pane_g_ParamLimits

0xf5d9,	// (0x0009ad76) field_cale_ev2_pane_g

0xaf16,	// (0x000966b3) field_cale_ev2_pane_t1_ParamLimits

0xaf16,	// (0x000966b3) field_cale_ev2_pane_t1

0xaf2d,	// (0x000966ca) field_cale_ev2_pane_t2_ParamLimits

0xaf2d,	// (0x000966ca) field_cale_ev2_pane_t2

0x0001,

0xf5e2,	// (0x0009ad7f) field_cale_ev2_pane_t_ParamLimits

0xf5e2,	// (0x0009ad7f) field_cale_ev2_pane_t

0x33ce,	// (0x0008eb6b) main_postcard_pane_g5_ParamLimits

0x33ce,	// (0x0008eb6b) main_postcard_pane_g5

0x33e4,	// (0x0008eb81) main_postcard_pane_g6_ParamLimits

0x33e4,	// (0x0008eb81) main_postcard_pane_g6

0xe29b,	// (0x00099a38) camera2_autofocus_pane_cp_ParamLimits

0xe29b,	// (0x00099a38) camera2_autofocus_pane_cp

0x9e49,	// (0x000955e6) main_mup3_pane

0x4e6a,	// (0x00090607) main_mup3_pane_g1_ParamLimits

0x4e6a,	// (0x00090607) main_mup3_pane_g1

0x4e8c,	// (0x00090629) main_mup3_pane_g2_ParamLimits

0x4e8c,	// (0x00090629) main_mup3_pane_g2

0x4f0a,	// (0x000906a7) main_mup3_pane_g3_ParamLimits

0x4f0a,	// (0x000906a7) main_mup3_pane_g3

0x4f50,	// (0x000906ed) main_mup3_pane_g4_ParamLimits

0x4f50,	// (0x000906ed) main_mup3_pane_g4

0x4f96,	// (0x00090733) main_mup3_pane_g5_ParamLimits

0x4f96,	// (0x00090733) main_mup3_pane_g5

0x4fdc,	// (0x00090779) main_mup3_pane_g6_ParamLimits

0x4fdc,	// (0x00090779) main_mup3_pane_g6

0xe310,	// (0x00099aad) main_mup3_pane_g7_ParamLimits

0xe310,	// (0x00099aad) main_mup3_pane_g7

0x0007,

0xf5f2,	// (0x0009ad8f) main_mup3_pane_g_ParamLimits

0xf5f2,	// (0x0009ad8f) main_mup3_pane_g

0x505a,	// (0x000907f7) main_mup3_pane_t1_ParamLimits

0x505a,	// (0x000907f7) main_mup3_pane_t1

0x50ce,	// (0x0009086b) main_mup3_pane_t2_ParamLimits

0x50ce,	// (0x0009086b) main_mup3_pane_t2

0x51a2,	// (0x0009093f) main_mup3_pane_t4_ParamLimits

0x51a2,	// (0x0009093f) main_mup3_pane_t4

0x51f8,	// (0x00090995) main_mup3_pane_t5_ParamLimits

0x51f8,	// (0x00090995) main_mup3_pane_t5

0x52b4,	// (0x00090a51) main_mup3_pane_t6_ParamLimits

0x52b4,	// (0x00090a51) main_mup3_pane_t6

0x0005,

0xf603,	// (0x0009ada0) main_mup3_pane_t_ParamLimits

0xf603,	// (0x0009ada0) main_mup3_pane_t

0x536c,	// (0x00090b09) mup3_progress_pane_ParamLimits

0x536c,	// (0x00090b09) mup3_progress_pane

0x5402,	// (0x00090b9f) popup_mup3_control_window_ParamLimits

0x5402,	// (0x00090b9f) popup_mup3_control_window

0xaf42,	// (0x000966df) popup_mup3_text_window

0x5434,	// (0x00090bd1) mup3_progress_pane_t1

0x5453,	// (0x00090bf0) mup3_progress_pane_t2

0xaf4a,	// (0x000966e7) mup3_progress_pane_t3

0x0002,

0xf610,	// (0x0009adad) mup3_progress_pane_t

0xaf67,	// (0x00096704) mup_progress_pane_cp03

0xdc01,	// (0x0009939e) bg_tb_trans_pane_cp04

0x5472,	// (0x00090c0f) mup3_volume_pane

0x547a,	// (0x00090c17) popup_mup3_control_window_g1

0x5483,	// (0x00090c20) mup3_volume_pane_g1

0x548c,	// (0x00090c29) mup3_volume_pane_g2

0x5495,	// (0x00090c32) mup3_volume_pane_g3

0x0002,

0xf617,	// (0x0009adb4) mup3_volume_pane_g

0xdc01,	// (0x0009939e) bg_tb_trans_pane_cp03

0xaf77,	// (0x00096714) popup_mup3_text_window_g1

0xaf7f,	// (0x0009671c) popup_mup3_text_window_t1

0xe3bc,	// (0x00099b59) list_calc_item_pane_g1_ParamLimits

0xa9d8,	// (0x00096175) mup_volume_pane_cp_g1

0x4d8e,	// (0x0009052b) main_touch_calib_pane_t3

0x4da2,	// (0x0009053f) main_touch_calib_pane_t4

0x4db6,	// (0x00090553) main_touch_calib_pane_t5

0x9ddc,	// (0x00095579) aid_cell_size_toolbar2

0x9de4,	// (0x00095581) aid_popup3_width_pane

0x9df0,	// (0x0009558d) aid_zoom_text_msg_primary

0x19cb,	// (0x0008d168) vorec_t7

0xe380,	// (0x00099b1d) bg_calc_paper_pane_g1_ParamLimits

0xe38c,	// (0x00099b29) bg_calc_paper_pane_g2_ParamLimits

0xe398,	// (0x00099b35) bg_calc_paper_pane_g3_ParamLimits

0xe3a4,	// (0x00099b41) bg_calc_paper_pane_g4_ParamLimits

0xe3b0,	// (0x00099b4d) bg_calc_paper_pane_g5_ParamLimits

0x12e1,	// (0x0008ca7e) bg_calc_paper_pane_g6_ParamLimits

0x12f0,	// (0x0008ca8d) bg_calc_paper_pane_g7_ParamLimits

0x12ff,	// (0x0008ca9c) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0009a896) bg_calc_paper_pane_g_ParamLimits

0x1312,	// (0x0008caaf) calc_bg_paper_pane_g9_ParamLimits

0xe29b,	// (0x00099a38) image_qvga_pane_ParamLimits

0xe29b,	// (0x00099a38) image_qvga_pane

0xe279,	// (0x00099a16) bg_popup_sub_pane_cp04_ParamLimits

0x355d,	// (0x0008ecfa) popup_mup_playback_window_g1_ParamLimits

0x3569,	// (0x0008ed06) popup_mup_playback_window_t1_ParamLimits

0x357e,	// (0x0008ed1b) popup_mup_playback_window_t2_ParamLimits

0xf387,	// (0x0009ab24) popup_mup_playback_window_t_ParamLimits

0xe310,	// (0x00099aad) main_mup2_pane_g3_ParamLimits

0xe310,	// (0x00099aad) main_mup2_pane_g3

0x1cf8,	// (0x0008d495) popup_toolbar_window_cp04

0x3d60,	// (0x0008f4fd) popup_call2_audio_second_window_g3_ParamLimits

0x3d60,	// (0x0008f4fd) popup_call2_audio_second_window_g3

0x4188,	// (0x0008f925) popup_call2_audio_first_window_g4_ParamLimits

0x4188,	// (0x0008f925) popup_call2_audio_first_window_g4

0xa48c,	// (0x00095c29) popup_call2_audio_in_window_g4_ParamLimits

0xa48c,	// (0x00095c29) popup_call2_audio_in_window_g4

0x3593,	// (0x0008ed30) aid_area_sk_bg_cut_ParamLimits

0x3593,	// (0x0008ed30) aid_area_sk_bg_cut

0x35b1,	// (0x0008ed4e) aid_area_sk_bg_cut_2_ParamLimits

0x35b1,	// (0x0008ed4e) aid_area_sk_bg_cut_2

0xdc01,	// (0x0009939e) aid_placing_details_win

0xdc01,	// (0x0009939e) aid_placing_details_win_2

0xe302,	// (0x00099a9f) camera2_autofocus_pane_g1_ParamLimits

0x0ff3,	// (0x0008c790) popup_fixed_preview_cale_window_ParamLimits

0x0ff3,	// (0x0008c790) popup_fixed_preview_cale_window

0xef70,	// (0x0009a70d) navi_slider_pane_g3

0xef79,	// (0x0009a716) navi_slider_pane_g4

0xef82,	// (0x0009a71f) navi_slider_pane_g5

0xef70,	// (0x0009a70d) navi_slider_pane_g6

0x9fa3,	// (0x00095740) navi_slider_pane_g7

0x3139,	// (0x0008e8d6) mup_scale_pane_g3

0x3142,	// (0x0008e8df) mup_scale_pane_g4

0x314b,	// (0x0008e8e8) mup_scale_pane_g5

0x3154,	// (0x0008e8f1) mup_scale_pane_g6

0x315d,	// (0x0008e8fa) mup_scale_pane_g7

0xa9e1,	// (0x0009617e) cams2_slider_pane_g3

0xa9e1,	// (0x0009617e) cams2_slider_pane_g4

0xa9e1,	// (0x0009617e) cams2_slider_pane_g5

0xa9e1,	// (0x0009617e) cams2_slider_pane_g6

0xa9e1,	// (0x0009617e) cams2_slider_pane_g7

0xe55c,	// (0x00099cf9) camera2_autofocus_pane_cp_g1

0xa762,	// (0x00095eff) bg_popup_preview_window_pane_cp02_ParamLimits

0xa762,	// (0x00095eff) bg_popup_preview_window_pane_cp02

0xaf8d,	// (0x0009672a) list_fp_cale_pane_ParamLimits

0xaf8d,	// (0x0009672a) list_fp_cale_pane

0xaf99,	// (0x00096736) popup_fixed_preview_cale_window_t1_ParamLimits

0xaf99,	// (0x00096736) popup_fixed_preview_cale_window_t1

0x549e,	// (0x00090c3b) popup_fixed_preview_cale_window_t2_ParamLimits

0x549e,	// (0x00090c3b) popup_fixed_preview_cale_window_t2

0x54b3,	// (0x00090c50) popup_fixed_preview_cale_window_t3_ParamLimits

0x54b3,	// (0x00090c50) popup_fixed_preview_cale_window_t3

0x0002,

0xf61e,	// (0x0009adbb) popup_fixed_preview_cale_window_t_ParamLimits

0xf61e,	// (0x0009adbb) popup_fixed_preview_cale_window_t

0x54c8,	// (0x00090c65) list_single_fp_cale_pane_ParamLimits

0x54c8,	// (0x00090c65) list_single_fp_cale_pane

0xafb7,	// (0x00096754) list_single_fp_cale_pane_g1_ParamLimits

0xafb7,	// (0x00096754) list_single_fp_cale_pane_g1

0xafc3,	// (0x00096760) list_single_fp_cale_pane_g2_ParamLimits

0xafc3,	// (0x00096760) list_single_fp_cale_pane_g2

0x0002,

0xf625,	// (0x0009adc2) list_single_fp_cale_pane_g_ParamLimits

0xf625,	// (0x0009adc2) list_single_fp_cale_pane_g

0xafdc,	// (0x00096779) list_single_fp_cale_pane_t1_ParamLimits

0xafdc,	// (0x00096779) list_single_fp_cale_pane_t1

0xafee,	// (0x0009678b) list_single_fp_cale_pane_t2_ParamLimits

0xafee,	// (0x0009678b) list_single_fp_cale_pane_t2

0x0001,

0xf62c,	// (0x0009adc9) list_single_fp_cale_pane_t_ParamLimits

0xf62c,	// (0x0009adc9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9e57,	// (0x000955f4) main_dialer_pane

0xdc01,	// (0x0009939e) aid_cell_size_keypad

0xdc01,	// (0x0009939e) dialer_ne_pane

0xdc01,	// (0x0009939e) grid_dialer_command_1_pane

0xdc01,	// (0x0009939e) grid_dialer_command_2_pane

0xdc01,	// (0x0009939e) grid_dialer_keypad_pane

0x54dd,	// (0x00090c7a) bg_popup_call_pane_cp06_ParamLimits

0x54dd,	// (0x00090c7a) bg_popup_call_pane_cp06

0x54dd,	// (0x00090c7a) dialer_ne_clear_pane_ParamLimits

0x54dd,	// (0x00090c7a) dialer_ne_clear_pane

0xe55c,	// (0x00099cf9) dialer_ne_pane_g1

0x2eec,	// (0x0008e689) dialer_ne_pane_t1_ParamLimits

0x2eec,	// (0x0008e689) dialer_ne_pane_t1

0x54eb,	// (0x00090c88) dialer_ne_pane_t2_ParamLimits

0x54eb,	// (0x00090c88) dialer_ne_pane_t2

0x5513,	// (0x00090cb0) dialer_ne_pane_t3_ParamLimits

0x5513,	// (0x00090cb0) dialer_ne_pane_t3

0x0002,

0xf631,	// (0x0009adce) dialer_ne_pane_t_ParamLimits

0xf631,	// (0x0009adce) dialer_ne_pane_t

0x5513,	// (0x00090cb0) dialer_ne_pane_t3_copy1_ParamLimits

0x5513,	// (0x00090cb0) dialer_ne_pane_t3_copy1

0xb021,	// (0x000967be) cell_dialer_keypad_pane_ParamLimits

0xb021,	// (0x000967be) cell_dialer_keypad_pane

0xe29b,	// (0x00099a38) cell_dialer_command_1_pane_ParamLimits

0xe29b,	// (0x00099a38) cell_dialer_command_1_pane

0xb038,	// (0x000967d5) cell_dialer_command_2_pane_ParamLimits

0xb038,	// (0x000967d5) cell_dialer_command_2_pane

0xe29b,	// (0x00099a38) bg_button_pane_cp02_ParamLimits

0xe29b,	// (0x00099a38) bg_button_pane_cp02

0xe302,	// (0x00099a9f) cell_dialer_keypad_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) cell_dialer_keypad_pane_g1

0xe29b,	// (0x00099a38) bg_button_pane_cp03_ParamLimits

0xe29b,	// (0x00099a38) bg_button_pane_cp03

0xe302,	// (0x00099a9f) cell_dialer_command_1_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) cell_dialer_command_1_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp04

0xe55c,	// (0x00099cf9) cell_dialer_command_2_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp06

0xe55c,	// (0x00099cf9) dialer_ne_clear_pane_g1

0xee43,	// (0x0009a5e0) navi_pane_g2

0xee71,	// (0x0009a60e) navi_pane_g3

0x0002,

0x01d9,	// (0x0008b976) navi_pane_g

0xef00,	// (0x0009a69d) navi_pane_mv_g2

0xef27,	// (0x0009a6c4) navi_pane_mv_g5

0x2e86,	// (0x0008e623) navi_pane_mv_t1

0xe374,	// (0x00099b11) main_clock2_pane

0xe29b,	// (0x00099a38) main_clock2_list_pane_ParamLimits

0xe29b,	// (0x00099a38) main_clock2_list_pane

0x55a9,	// (0x00090d46) main_clock2_pane_t1_ParamLimits

0x55a9,	// (0x00090d46) main_clock2_pane_t1

0x55e4,	// (0x00090d81) main_clock2_pane_t2_ParamLimits

0x55e4,	// (0x00090d81) main_clock2_pane_t2

0x0004,

0xf63d,	// (0x0009adda) main_clock2_pane_t_ParamLimits

0xf63d,	// (0x0009adda) main_clock2_pane_t

0x5684,	// (0x00090e21) popup_clock_analogue_window_cp03_ParamLimits

0x5684,	// (0x00090e21) popup_clock_analogue_window_cp03

0x56a9,	// (0x00090e46) popup_clock_digital_window_cp02_ParamLimits

0x56a9,	// (0x00090e46) popup_clock_digital_window_cp02

0x5722,	// (0x00090ebf) main_clock2_list_single_pane_ParamLimits

0x5722,	// (0x00090ebf) main_clock2_list_single_pane

0xe526,	// (0x00099cc3) list_highlight_pane_cp05

0xb07f,	// (0x0009681c) main_clock2_list_single_pane_t1

0x1cf8,	// (0x0008d495) popup_toolbar_window_cp04_ParamLimits

0xe310,	// (0x00099aad) camera2_autofocus_pane_g2_ParamLimits

0xe310,	// (0x00099aad) camera2_autofocus_pane_g2

0xe310,	// (0x00099aad) camera2_autofocus_pane_g3_ParamLimits

0xe310,	// (0x00099aad) camera2_autofocus_pane_g3

0xe310,	// (0x00099aad) camera2_autofocus_pane_g4_ParamLimits

0xe310,	// (0x00099aad) camera2_autofocus_pane_g4

0xe310,	// (0x00099aad) camera2_autofocus_pane_g5_ParamLimits

0xe310,	// (0x00099aad) camera2_autofocus_pane_g5

0x0004,

0x04fa,	// (0x0008bc97) camera2_autofocus_pane_g_ParamLimits

0x04fa,	// (0x0008bc97) camera2_autofocus_pane_g

0x4e26,	// (0x000905c3) camera2_autofocus_pane_cp_g2

0x4e2e,	// (0x000905cb) camera2_autofocus_pane_cp_g3

0x4e36,	// (0x000905d3) camera2_autofocus_pane_cp_g4

0x4e3e,	// (0x000905db) camera2_autofocus_pane_cp_g5

0x0004,

0xf5e7,	// (0x0009ad84) camera2_autofocus_pane_cp_g

0xdc01,	// (0x0009939e) popup_dialer_spcha_window

0xdc01,	// (0x0009939e) bg_popup_sub_pane_cp07

0xdc01,	// (0x0009939e) list_spcha_pane

0xb08d,	// (0x0009682a) list_single_spcha_pane_ParamLimits

0xb08d,	// (0x0009682a) list_single_spcha_pane

0xdc01,	// (0x0009939e) list_highlight_pane_cp06

0xea78,	// (0x0009a215) list_single_spcha_pane_t1

0xa236,	// (0x000959d3) popup_call2_audio_out_window_g4_ParamLimits

0xa236,	// (0x000959d3) popup_call2_audio_out_window_g4

0x9e57,	// (0x000955f4) main_imed2_pane

0xa788,	// (0x00095f25) popup_imed_adjust2_window

0x4784,	// (0x0008ff21) popup_imed_trans_window_ParamLimits

0x4784,	// (0x0008ff21) popup_imed_trans_window

0xaac5,	// (0x00096262) popup_blid_sat_info2_window_t1

0xaad3,	// (0x00096270) popup_blid_sat_info2_window_t2

0x000a,

0xf52a,	// (0x0009acc7) popup_blid_sat_info2_window_t

0x57d3,	// (0x00090f70) aid_size_cell_colour_35

0x57f3,	// (0x00090f90) aid_size_cell_colour_112

0x5813,	// (0x00090fb0) aid_size_cell_effect

0x2f00,	// (0x0008e69d) bg_tb_trans_pane_cp02

0xe9aa,	// (0x0009a147) heading_imed_pane

0x5833,	// (0x00090fd0) listscroll_imed_pane

0xb09f,	// (0x0009683c) heading_imed_pane_g1

0xb0a7,	// (0x00096844) heading_imed_pane_t1

0xb0b5,	// (0x00096852) grid_imed_colour_35_pane_ParamLimits

0xb0b5,	// (0x00096852) grid_imed_colour_35_pane

0x583f,	// (0x00090fdc) grid_imed_effect_pane

0xb0cc,	// (0x00096869) list_imed_aspect_pane

0x5855,	// (0x00090ff2) scroll_pane_cp027_ParamLimits

0x5855,	// (0x00090ff2) scroll_pane_cp027

0x5866,	// (0x00091003) cell_imed_effect_pane_ParamLimits

0x5866,	// (0x00091003) cell_imed_effect_pane

0xb0d4,	// (0x00096871) cell_imed_colour_pane_ParamLimits

0xb0d4,	// (0x00096871) cell_imed_colour_pane

0xb116,	// (0x000968b3) cell_imed_colour_pane_g1_ParamLimits

0xb116,	// (0x000968b3) cell_imed_colour_pane_g1

0xb127,	// (0x000968c4) hgihlgiht_grid_pane_cp016_ParamLimits

0xb127,	// (0x000968c4) hgihlgiht_grid_pane_cp016

0x588d,	// (0x0009102a) cell_imed_effect_pane_g1

0x5895,	// (0x00091032) grid_highlight_pane_cp017

0xb138,	// (0x000968d5) list_imed_single_pane_ParamLimits

0xb138,	// (0x000968d5) list_imed_single_pane

0xdc01,	// (0x0009939e) list_highlight_pane_cp07

0xb14d,	// (0x000968ea) list_imed_aspect_pane_comp1_t1

0x2f00,	// (0x0008e69d) bg_tb_trans_pane_cp05

0xb16f,	// (0x0009690c) popup_imed_adjust2_window_g1

0xb196,	// (0x00096933) popup_imed_adjust2_window_t1

0xb1ae,	// (0x0009694b) slider_imed_adjust_pane

0xb1c2,	// (0x0009695f) slider_imed_adjust_pane_g1

0xb1d2,	// (0x0009696f) slider_imed_adjust_pane_g2

0xb1e2,	// (0x0009697f) slider_imed_adjust_pane_g3

0xb1f3,	// (0x00096990) slider_imed_adjust_pane_g4

0x0003,

0xf65a,	// (0x0009adf7) slider_imed_adjust_pane_g

0x589e,	// (0x0009103b) aid_size_cell_clipart2

0x58aa,	// (0x00091047) grid_imed_clipart_pane

0xb204,	// (0x000969a1) scroll_pane_cp031

0x58b4,	// (0x00091051) cell_imed_clipart_pane_ParamLimits

0x58b4,	// (0x00091051) cell_imed_clipart_pane

0x58d6,	// (0x00091073) cell_imed_clipart_pane_g1

0xdc01,	// (0x0009939e) grid_highlight_pane_cp014

0x5585,	// (0x00090d22) main_clock2_pane_g1_ParamLimits

0x5585,	// (0x00090d22) main_clock2_pane_g1

0x56c9,	// (0x00090e66) aid_call2_pane_cp10

0x56db,	// (0x00090e78) aid_call_pane_cp10

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g1

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g2

0x56ed,	// (0x00090e8a) popup_clock_analogue_window_cp10_g3

0x56ed,	// (0x00090e8a) popup_clock_analogue_window_cp10_g4

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g5

0x0004,

0xf648,	// (0x0009ade5) popup_clock_analogue_window_cp10_g

0x5703,	// (0x00090ea0) popup_clock_analogue_window_cp10_t1

0x5734,	// (0x00090ed1) clock_digital_number_pane_cp10_ParamLimits

0x5734,	// (0x00090ed1) clock_digital_number_pane_cp10

0x574c,	// (0x00090ee9) clock_digital_number_pane_cp11_ParamLimits

0x574c,	// (0x00090ee9) clock_digital_number_pane_cp11

0x5764,	// (0x00090f01) clock_digital_number_pane_cp12_ParamLimits

0x5764,	// (0x00090f01) clock_digital_number_pane_cp12

0x577e,	// (0x00090f1b) clock_digital_number_pane_cp13_ParamLimits

0x577e,	// (0x00090f1b) clock_digital_number_pane_cp13

0x5798,	// (0x00090f35) clock_digital_separator_pane_cp10_ParamLimits

0x5798,	// (0x00090f35) clock_digital_separator_pane_cp10

0x57b2,	// (0x00090f4f) popup_clock_digital_window_cp02_t1_ParamLimits

0x57b2,	// (0x00090f4f) popup_clock_digital_window_cp02_t1

0xe271,	// (0x00099a0e) clock_digital_number_pane_cp10_g1

0xe271,	// (0x00099a0e) clock_digital_number_pane_cp10_g2

0x0001,

0x05dc,	// (0x0008bd79) clock_digital_number_pane_cp10_g

0xe271,	// (0x00099a0e) clock_digital_separator_pane_cp10_g1

0xe271,	// (0x00099a0e) clock_digital_separator_pane_g2_cp10

0xef2f,	// (0x0009a6cc) navi_pane_vded_g4

0xef38,	// (0x0009a6d5) navi_pane_vded_g5

0xef41,	// (0x0009a6de) navi_pane_vded_t1

0x9e57,	// (0x000955f4) main_vded_pane

0x58df,	// (0x0009107c) main_vded_pane_g1

0x58e9,	// (0x00091086) main_vded_pane_g2

0x58f3,	// (0x00091090) main_vded_pane_g3

0x0002,

0xf663,	// (0x0009ae00) main_vded_pane_g

0x58fd,	// (0x0009109a) main_vded_pane_t1

0x590b,	// (0x000910a8) main_vded_pane_t2

0x0001,

0xf66a,	// (0x0009ae07) main_vded_pane_t

0x5919,	// (0x000910b6) vded_slider_pane

0x5921,	// (0x000910be) vded_video_pane

0xb20c,	// (0x000969a9) vded_video_pane_g1

0x5929,	// (0x000910c6) vded_video_pane_g2

0xe55c,	// (0x00099cf9) vded_video_pane_g3

0x0002,

0xf66f,	// (0x0009ae0c) vded_video_pane_g

0xb216,	// (0x000969b3) vded_slider_pane_g1

0xa9d8,	// (0x00096175) vded_slider_pane_g2

0xb21f,	// (0x000969bc) vded_slider_pane_g3

0xb228,	// (0x000969c5) vded_slider_pane_g4

0xb231,	// (0x000969ce) vded_slider_pane_g5

0x0004,

0xf676,	// (0x0009ae13) vded_slider_pane_g

0x53ea,	// (0x00090b87) mup3_rocker_pane_ParamLimits

0x53ea,	// (0x00090b87) mup3_rocker_pane

0x5932,	// (0x000910cf) mup3_control_keys_pane_g1

0x593a,	// (0x000910d7) mup3_control_keys_pane_g2

0x5942,	// (0x000910df) mup3_control_keys_pane_g3

0x594a,	// (0x000910e7) mup3_control_keys_pane_g4

0x0003,

0xf681,	// (0x0009ae1e) mup3_control_keys_pane_g

0x102a,	// (0x0008c7c7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x102a,	// (0x0008c7c7) popup_toolbar2_fixed_window_cp01

0x541e,	// (0x00090bbb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x541e,	// (0x00090bbb) popup_toolbar2_fixed_window_cp02

0x3ed2,	// (0x0008f66f) popup_call2_audio_second_window_t4_ParamLimits

0x3ed2,	// (0x0008f66f) popup_call2_audio_second_window_t4

0xa0fb,	// (0x00095898) popup_call2_audio_first_window_t6_ParamLimits

0xa0fb,	// (0x00095898) popup_call2_audio_first_window_t6

0xa339,	// (0x00095ad6) popup_call2_audio_out_window_t6_ParamLimits

0xa339,	// (0x00095ad6) popup_call2_audio_out_window_t6

0x9e57,	// (0x000955f4) main_vitu_pane

0xe29b,	// (0x00099a38) aid_size_cell_itu_ParamLimits

0xe29b,	// (0x00099a38) aid_size_cell_itu

0xe29b,	// (0x00099a38) bg_popup_window_pane_cp08_ParamLimits

0xe29b,	// (0x00099a38) bg_popup_window_pane_cp08

0xe29b,	// (0x00099a38) field_vitu_entry_pane_ParamLimits

0xe29b,	// (0x00099a38) field_vitu_entry_pane

0xe29b,	// (0x00099a38) grid_vitu_function_pane_ParamLimits

0xe29b,	// (0x00099a38) grid_vitu_function_pane

0xe29b,	// (0x00099a38) grid_vitu_itu_pane_ParamLimits

0xe29b,	// (0x00099a38) grid_vitu_itu_pane

0xe29b,	// (0x00099a38) cell_vitu_itu_pane_ParamLimits

0xe29b,	// (0x00099a38) cell_vitu_itu_pane

0xe29b,	// (0x00099a38) cell_vitu_function_pane_ParamLimits

0xe29b,	// (0x00099a38) cell_vitu_function_pane

0xe29b,	// (0x00099a38) bg_popup_sub_pane_cp08_ParamLimits

0xe29b,	// (0x00099a38) bg_popup_sub_pane_cp08

0xe52e,	// (0x00099ccb) field_vitu_entry_pane_t1_ParamLimits

0xe52e,	// (0x00099ccb) field_vitu_entry_pane_t1

0xb23a,	// (0x000969d7) field_vitu_entry_pane_t2_ParamLimits

0xb23a,	// (0x000969d7) field_vitu_entry_pane_t2

0x0001,

0xf68a,	// (0x0009ae27) field_vitu_entry_pane_t_ParamLimits

0xf68a,	// (0x0009ae27) field_vitu_entry_pane_t

0xaa6c,	// (0x00096209) bg_button_pane_cp05_ParamLimits

0xaa6c,	// (0x00096209) bg_button_pane_cp05

0xb257,	// (0x000969f4) cell_vitu_itu_pane_g1

0x2ed8,	// (0x0008e675) cell_vitu_itu_pane_t1_ParamLimits

0x2ed8,	// (0x0008e675) cell_vitu_itu_pane_t1

0x2ed8,	// (0x0008e675) cell_vitu_itu_pane_t2_ParamLimits

0x2ed8,	// (0x0008e675) cell_vitu_itu_pane_t2

0x0002,

0xf68f,	// (0x0009ae2c) cell_vitu_itu_pane_t_ParamLimits

0xf68f,	// (0x0009ae2c) cell_vitu_itu_pane_t

0xdc01,	// (0x0009939e) bg_button_pane_cp07

0xe55c,	// (0x00099cf9) cell_vitu_function_pane_g1

0x9e61,	// (0x000955fe) main_calc_pane_g1

0x0e51,	// (0x0008c5ee) aid_visual_content_pane

0x9e57,	// (0x000955f4) main_vradio_pane

0xe302,	// (0x00099a9f) main_vradio_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) main_vradio_pane_g1

0xe310,	// (0x00099aad) main_vradio_pane_g2_ParamLimits

0xe310,	// (0x00099aad) main_vradio_pane_g2

0x0001,

0x04af,	// (0x0008bc4c) main_vradio_pane_g_ParamLimits

0x04af,	// (0x0008bc4c) main_vradio_pane_g

0xe52e,	// (0x00099ccb) main_vradio_pane_t1_ParamLimits

0xe52e,	// (0x00099ccb) main_vradio_pane_t1

0xe52e,	// (0x00099ccb) main_vradio_pane_t2_ParamLimits

0xe52e,	// (0x00099ccb) main_vradio_pane_t2

0x2eec,	// (0x0008e689) main_vradio_pane_t3_ParamLimits

0x2eec,	// (0x0008e689) main_vradio_pane_t3

0x0002,

0xf696,	// (0x0009ae33) main_vradio_pane_t_ParamLimits

0xf696,	// (0x0009ae33) main_vradio_pane_t

0xe29b,	// (0x00099a38) vradio_rocker_control_pane_ParamLimits

0xe29b,	// (0x00099a38) vradio_rocker_control_pane

0xe29b,	// (0x00099a38) vradio_station_info_pane_ParamLimits

0xe29b,	// (0x00099a38) vradio_station_info_pane

0xe29b,	// (0x00099a38) vradio_frequency_info_pane_ParamLimits

0xe29b,	// (0x00099a38) vradio_frequency_info_pane

0xe55c,	// (0x00099cf9) vradio_station_info_pane_g1

0x2ed8,	// (0x0008e675) vradio_station_info_pane_t1_ParamLimits

0x2ed8,	// (0x0008e675) vradio_station_info_pane_t1

0x2eec,	// (0x0008e689) vradio_station_info_pane_t2_ParamLimits

0x2eec,	// (0x0008e689) vradio_station_info_pane_t2

0x0001,

0xf69d,	// (0x0009ae3a) vradio_station_info_pane_t_ParamLimits

0xf69d,	// (0x0009ae3a) vradio_station_info_pane_t

0xdc01,	// (0x0009939e) vradio_tuning_pane

0x595a,	// (0x000910f7) vradio_rocker_control_pane_g1

0xb273,	// (0x00096a10) vradio_rocker_control_pane_g2

0x5964,	// (0x00091101) vradio_rocker_control_pane_g3

0x596e,	// (0x0009110b) vradio_rocker_control_pane_g4

0x5978,	// (0x00091115) vradio_rocker_control_pane_g5

0x0004,

0xf6a2,	// (0x0009ae3f) vradio_rocker_control_pane_g

0xe55c,	// (0x00099cf9) vradio_frequency_info_pane_g1

0xe52e,	// (0x00099ccb) vradio_frequency_info_pane_t1_ParamLimits

0xe52e,	// (0x00099ccb) vradio_frequency_info_pane_t1

0x5982,	// (0x0009111f) vradio_tuning_pane_g1

0x598f,	// (0x0009112c) vradio_tuning_pane_t1

0x9e08,	// (0x000955a5) area_side_right_pane_ParamLimits

0x9e08,	// (0x000955a5) area_side_right_pane

0xa729,	// (0x00095ec6) status_small_pane_g1

0xa731,	// (0x00095ece) status_small_pane_g2

0xa73a,	// (0x00095ed7) status_small_pane_g3

0xa743,	// (0x00095ee0) status_small_pane_g4

0x0003,

0xf48c,	// (0x0009ac29) status_small_pane_g

0xa74c,	// (0x00095ee9) status_small_pane_t1

0x9e57,	// (0x000955f4) main_video3_pane

0xb27b,	// (0x00096a18) cams_zoom_vslider_pane

0xb283,	// (0x00096a20) image3_wide_pane_ParamLimits

0xb283,	// (0x00096a20) image3_wide_pane

0xb29d,	// (0x00096a3a) image3_wide_small_pane

0xb2a9,	// (0x00096a46) main_video3_pane_g1_ParamLimits

0xb2a9,	// (0x00096a46) main_video3_pane_g1

0xb2c5,	// (0x00096a62) main_video3_pane_g2_ParamLimits

0xb2c5,	// (0x00096a62) main_video3_pane_g2

0x0001,

0xf6ad,	// (0x0009ae4a) main_video3_pane_g_ParamLimits

0xf6ad,	// (0x0009ae4a) main_video3_pane_g

0xb2e1,	// (0x00096a7e) main_video3_pane_t1_ParamLimits

0xb2e1,	// (0x00096a7e) main_video3_pane_t1

0xb30c,	// (0x00096aa9) main_video3_pane_t2_ParamLimits

0xb30c,	// (0x00096aa9) main_video3_pane_t2

0xb337,	// (0x00096ad4) main_video3_pane_t3_ParamLimits

0xb337,	// (0x00096ad4) main_video3_pane_t3

0x0002,

0xf6b2,	// (0x0009ae4f) main_video3_pane_t_ParamLimits

0xf6b2,	// (0x0009ae4f) main_video3_pane_t

0xb364,	// (0x00096b01) cams_zoom_vslider_pane_g1

0xb36d,	// (0x00096b0a) cams_zoom_vslider_pane_g2

0x0001,

0xf6b9,	// (0x0009ae56) cams_zoom_vslider_pane_g

0xb375,	// (0x00096b12) small_slider_vertical_pane

0xe55c,	// (0x00099cf9) small_slider_vertical_pane_g1

0xe55c,	// (0x00099cf9) small_slider_vertical_pane_g2

0xb37d,	// (0x00096b1a) small_slider_vertical_pane_g3

0x0002,

0xf6be,	// (0x0009ae5b) small_slider_vertical_pane_g

0x9e57,	// (0x000955f4) main_hwr_training_pane

0xb386,	// (0x00096b23) hwr_training_instruct_pane_ParamLimits

0xb386,	// (0x00096b23) hwr_training_instruct_pane

0x599e,	// (0x0009113b) hwr_training_navi_pane_ParamLimits

0x599e,	// (0x0009113b) hwr_training_navi_pane

0x59bd,	// (0x0009115a) hwr_training_write_pane_ParamLimits

0x59bd,	// (0x0009115a) hwr_training_write_pane

0xdc01,	// (0x0009939e) bg_frame_shadow_pane

0xb3bd,	// (0x00096b5a) hwr_training_write_pane_g1

0xb3c5,	// (0x00096b62) hwr_training_write_pane_g2

0xb3cd,	// (0x00096b6a) hwr_training_write_pane_g3

0xb3d5,	// (0x00096b72) hwr_training_write_pane_g4

0xb3dd,	// (0x00096b7a) hwr_training_write_pane_g5

0xb3e5,	// (0x00096b82) hwr_training_write_pane_g6

0xb3ed,	// (0x00096b8a) hwr_training_write_pane_g7

0x0006,

0xf6c5,	// (0x0009ae62) hwr_training_write_pane_g

0xb3f5,	// (0x00096b92) hwr_training_navi_pane_g1_ParamLimits

0xb3f5,	// (0x00096b92) hwr_training_navi_pane_g1

0xb407,	// (0x00096ba4) hwr_training_navi_pane_g2_ParamLimits

0xb407,	// (0x00096ba4) hwr_training_navi_pane_g2

0xb419,	// (0x00096bb6) hwr_training_navi_pane_g3_ParamLimits

0xb419,	// (0x00096bb6) hwr_training_navi_pane_g3

0xb429,	// (0x00096bc6) hwr_training_navi_pane_g4_ParamLimits

0xb429,	// (0x00096bc6) hwr_training_navi_pane_g4

0x0004,

0xf6d4,	// (0x0009ae71) hwr_training_navi_pane_g_ParamLimits

0xf6d4,	// (0x0009ae71) hwr_training_navi_pane_g

0xb436,	// (0x00096bd3) hwr_training_navi_pane_t1

0x5a05,	// (0x000911a2) list_single_hwr_training_instruct_pane_ParamLimits

0x5a05,	// (0x000911a2) list_single_hwr_training_instruct_pane

0xb444,	// (0x00096be1) list_single_hwr_training_instruct_pane_t1

0xabc6,	// (0x00096363) bg_frame_shadow_pane_g1

0xb453,	// (0x00096bf0) bg_frame_shadow_pane_g2

0xb45b,	// (0x00096bf8) bg_frame_shadow_pane_g3

0xb463,	// (0x00096c00) bg_frame_shadow_pane_g4

0xb46b,	// (0x00096c08) bg_frame_shadow_pane_g5

0xb473,	// (0x00096c10) bg_frame_shadow_pane_g6

0xb47b,	// (0x00096c18) bg_frame_shadow_pane_g7

0xe423,	// (0x00099bc0) bg_frame_shadow_pane_g8

0x0007,

0xf6df,	// (0x0009ae7c) bg_frame_shadow_pane_g

0x9e57,	// (0x000955f4) main_video_tele_dialer_pane

0x5a1a,	// (0x000911b7) aid_size_cell_video_keypad_ParamLimits

0x5a1a,	// (0x000911b7) aid_size_cell_video_keypad

0x5a34,	// (0x000911d1) grid_video_dialer_keypad_pane_ParamLimits

0x5a34,	// (0x000911d1) grid_video_dialer_keypad_pane

0x5a80,	// (0x0009121d) video_down_pane_cp_ParamLimits

0x5a80,	// (0x0009121d) video_down_pane_cp

0x5ab2,	// (0x0009124f) cell_video_dialer_keypad_pane_ParamLimits

0x5ab2,	// (0x0009124f) cell_video_dialer_keypad_pane

0xb483,	// (0x00096c20) bg_button_pane_cp08_ParamLimits

0xb483,	// (0x00096c20) bg_button_pane_cp08

0x5ad4,	// (0x00091271) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5ad4,	// (0x00091271) cell_video_dialer_keypad_pane_g1

0x53d4,	// (0x00090b71) mup3_rocker2_pane_ParamLimits

0x53d4,	// (0x00090b71) mup3_rocker2_pane

0xe55c,	// (0x00099cf9) mup3_rocker2_pane_g1

0x4665,	// (0x0008fe02) main_dialer2_pane

0x9e57,	// (0x000955f4) main_mp4_pane

0xb4ad,	// (0x00096c4a) main_mp4_pane_g1_ParamLimits

0xb4ad,	// (0x00096c4a) main_mp4_pane_g1

0xb4ad,	// (0x00096c4a) main_mp4_pane_g2_ParamLimits

0xb4ad,	// (0x00096c4a) main_mp4_pane_g2

0x5b0b,	// (0x000912a8) main_mp4_pane_g3_ParamLimits

0x5b0b,	// (0x000912a8) main_mp4_pane_g3

0xb4bb,	// (0x00096c58) main_mp4_pane_g4_ParamLimits

0xb4bb,	// (0x00096c58) main_mp4_pane_g4

0xb4e9,	// (0x00096c86) main_mp4_pane_g5_ParamLimits

0xb4e9,	// (0x00096c86) main_mp4_pane_g5

0x0007,

0xf6ff,	// (0x0009ae9c) main_mp4_pane_g_ParamLimits

0xf6ff,	// (0x0009ae9c) main_mp4_pane_g

0xb55d,	// (0x00096cfa) main_mp4_pane_t1_ParamLimits

0xb55d,	// (0x00096cfa) main_mp4_pane_t1

0xb5b9,	// (0x00096d56) main_mp4_pane_t2_ParamLimits

0xb5b9,	// (0x00096d56) main_mp4_pane_t2

0xb60b,	// (0x00096da8) main_mp4_pane_t3_ParamLimits

0xb60b,	// (0x00096da8) main_mp4_pane_t3

0xb631,	// (0x00096dce) main_mp4_pane_t4_ParamLimits

0xb631,	// (0x00096dce) main_mp4_pane_t4

0x0003,

0xf710,	// (0x0009aead) main_mp4_pane_t_ParamLimits

0xf710,	// (0x0009aead) main_mp4_pane_t

0xb675,	// (0x00096e12) mp4_progress_pane_ParamLimits

0xb675,	// (0x00096e12) mp4_progress_pane

0xb6bf,	// (0x00096e5c) mp4_rocker_pane_ParamLimits

0xb6bf,	// (0x00096e5c) mp4_rocker_pane

0xb6e7,	// (0x00096e84) mp4_progress_pane_t1

0xb700,	// (0x00096e9d) mp4_progress_pane_t2

0x0001,

0xf719,	// (0x0009aeb6) mp4_progress_pane_t

0xb719,	// (0x00096eb6) mup_progress_pane_cp04

0xa9e1,	// (0x0009617e) mp4_rocker_pane_g1

0x5b47,	// (0x000912e4) aid_cell_size_keypad2_ParamLimits

0x5b47,	// (0x000912e4) aid_cell_size_keypad2

0x5b5d,	// (0x000912fa) dialer2_ne_pane_ParamLimits

0x5b5d,	// (0x000912fa) dialer2_ne_pane

0x5b77,	// (0x00091314) grid_dialer2_keypad_pane_ParamLimits

0x5b77,	// (0x00091314) grid_dialer2_keypad_pane

0xaa6c,	// (0x00096209) bg_popup_call_pane_cp07_ParamLimits

0xaa6c,	// (0x00096209) bg_popup_call_pane_cp07

0x5b93,	// (0x00091330) dialer2_ne_pane_t1_ParamLimits

0x5b93,	// (0x00091330) dialer2_ne_pane_t1

0x5bce,	// (0x0009136b) cell_dialer2_keypad_pane_ParamLimits

0x5bce,	// (0x0009136b) cell_dialer2_keypad_pane

0xb73e,	// (0x00096edb) bg_button_pane_pane_cp04_ParamLimits

0xb73e,	// (0x00096edb) bg_button_pane_pane_cp04

0x5bf0,	// (0x0009138d) cell_dialer2_keypad_pane_g1_ParamLimits

0x5bf0,	// (0x0009138d) cell_dialer2_keypad_pane_g1

0x1bcc,	// (0x0008d369) aid_placing_vt_set_content_ParamLimits

0x1bcc,	// (0x0008d369) aid_placing_vt_set_content

0x1bf4,	// (0x0008d391) aid_placing_vt_set_title_ParamLimits

0x1bf4,	// (0x0008d391) aid_placing_vt_set_title

0x9e57,	// (0x000955f4) main_image3_pane

0x5cb6,	// (0x00091453) area_side_right_pane_cp01_ParamLimits

0x5cb6,	// (0x00091453) area_side_right_pane_cp01

0xb4ad,	// (0x00096c4a) main_image3_pane_g1_ParamLimits

0xb4ad,	// (0x00096c4a) main_image3_pane_g1

0x5ccd,	// (0x0009146a) main_image3_pane_g2_ParamLimits

0x5ccd,	// (0x0009146a) main_image3_pane_g2

0x5cf5,	// (0x00091492) main_image3_pane_g3_ParamLimits

0x5cf5,	// (0x00091492) main_image3_pane_g3

0x5d1f,	// (0x000914bc) main_image3_pane_g4_ParamLimits

0x5d1f,	// (0x000914bc) main_image3_pane_g4

0x0003,

0xf728,	// (0x0009aec5) main_image3_pane_g_ParamLimits

0xf728,	// (0x0009aec5) main_image3_pane_g

0x5d49,	// (0x000914e6) main_image3_pane_t1_ParamLimits

0x5d49,	// (0x000914e6) main_image3_pane_t1

0x5da1,	// (0x0009153e) main_image3_pane_t2_ParamLimits

0x5da1,	// (0x0009153e) main_image3_pane_t2

0x5df3,	// (0x00091590) main_image3_pane_t3_ParamLimits

0x5df3,	// (0x00091590) main_image3_pane_t3

0x0003,

0xf731,	// (0x0009aece) main_image3_pane_t_ParamLimits

0xf731,	// (0x0009aece) main_image3_pane_t

0xe29b,	// (0x00099a38) grid_sctrl_middle_pane_cp01_ParamLimits

0xe29b,	// (0x00099a38) grid_sctrl_middle_pane_cp01

0x5e7b,	// (0x00091618) cell_sctrl_middle_pane_cp01_ParamLimits

0x5e7b,	// (0x00091618) cell_sctrl_middle_pane_cp01

0x5e98,	// (0x00091635) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5e98,	// (0x00091635) cell_sctrl_middle_pane_cp01_g1

0x9e57,	// (0x000955f4) main_call4_pane

0x5eae,	// (0x0009164b) aid_size_button_call4_ParamLimits

0x5eae,	// (0x0009164b) aid_size_button_call4

0x5ee1,	// (0x0009167e) call4_windows_pane_ParamLimits

0x5ee1,	// (0x0009167e) call4_windows_pane

0x5f00,	// (0x0009169d) grid_call4_button_pane_ParamLimits

0x5f00,	// (0x0009169d) grid_call4_button_pane

0x5f33,	// (0x000916d0) call4_windows_conf_pane

0x5f4a,	// (0x000916e7) popup_call4_audio_first_window_ParamLimits

0x5f4a,	// (0x000916e7) popup_call4_audio_first_window

0x5f9a,	// (0x00091737) popup_call4_audio_second_window_ParamLimits

0x5f9a,	// (0x00091737) popup_call4_audio_second_window

0x5fb1,	// (0x0009174e) popup_call4_audio_wait_window_ParamLimits

0x5fb1,	// (0x0009174e) popup_call4_audio_wait_window

0x5fbf,	// (0x0009175c) cell_call4_button_pane_ParamLimits

0x5fbf,	// (0x0009175c) cell_call4_button_pane

0x5fe4,	// (0x00091781) bg_button_pane_cp09_ParamLimits

0x5fe4,	// (0x00091781) bg_button_pane_cp09

0x5ff0,	// (0x0009178d) cell_call4_button_pane_g1_ParamLimits

0x5ff0,	// (0x0009178d) cell_call4_button_pane_g1

0x6016,	// (0x000917b3) cell_call4_button_pane_t1_ParamLimits

0x6016,	// (0x000917b3) cell_call4_button_pane_t1

0xb772,	// (0x00096f0f) popup_call4_audio_conf_window_ParamLimits

0xb772,	// (0x00096f0f) popup_call4_audio_conf_window

0x5434,	// (0x00090bd1) mup3_progress_pane_t1_ParamLimits

0x5453,	// (0x00090bf0) mup3_progress_pane_t2_ParamLimits

0xaf4a,	// (0x000966e7) mup3_progress_pane_t3_ParamLimits

0xf610,	// (0x0009adad) mup3_progress_pane_t_ParamLimits

0xaf67,	// (0x00096704) mup_progress_pane_cp03_ParamLimits

0x5952,	// (0x000910ef) mup3_control_keys_pane_g4_copy1

0xb6a3,	// (0x00096e40) mp4_rocker2_pane_ParamLimits

0xb6a3,	// (0x00096e40) mp4_rocker2_pane

0xb786,	// (0x00096f23) mp4_rocker2_pane_g1

0xb78e,	// (0x00096f2b) mp4_rocker2_pane_g2

0xd9f5,	// (0x00099192) mp4_rocker2_pane_g3

0xd9fd,	// (0x0009919a) mp4_rocker2_pane_g4

0xda05,	// (0x000991a2) mp4_rocker2_pane_g5

0x0004,

0xf73a,	// (0x0009aed7) mp4_rocker2_pane_g

0x9e57,	// (0x000955f4) main_camera4_pane

0x9e57,	// (0x000955f4) main_video4_pane

0x5a4e,	// (0x000911eb) main_video_tele_dialer_pane_t1_ParamLimits

0x5a4e,	// (0x000911eb) main_video_tele_dialer_pane_t1

0x5a67,	// (0x00091204) main_video_tele_dialer_pane_t2_ParamLimits

0x5a67,	// (0x00091204) main_video_tele_dialer_pane_t2

0x0001,

0xf6f0,	// (0x0009ae8d) main_video_tele_dialer_pane_t_ParamLimits

0xf6f0,	// (0x0009ae8d) main_video_tele_dialer_pane_t

0x6054,	// (0x000917f1) cam4_autofocus_pane_ParamLimits

0x6054,	// (0x000917f1) cam4_autofocus_pane

0x606a,	// (0x00091807) cam4_image_uncrop_pane_ParamLimits

0x606a,	// (0x00091807) cam4_image_uncrop_pane

0x6084,	// (0x00091821) cam4_indicators_pane_ParamLimits

0x6084,	// (0x00091821) cam4_indicators_pane

0x60af,	// (0x0009184c) main_camera4_pane_g1_ParamLimits

0x60af,	// (0x0009184c) main_camera4_pane_g1

0x60c1,	// (0x0009185e) main_camera4_pane_g2_ParamLimits

0x60c1,	// (0x0009185e) main_camera4_pane_g2

0x60d4,	// (0x00091871) main_camera4_pane_g3_ParamLimits

0x60d4,	// (0x00091871) main_camera4_pane_g3

0x60e7,	// (0x00091884) main_camera4_pane_g4_ParamLimits

0x60e7,	// (0x00091884) main_camera4_pane_g4

0x60fa,	// (0x00091897) main_camera4_pane_g5_ParamLimits

0x60fa,	// (0x00091897) main_camera4_pane_g5

0x0005,

0xf745,	// (0x0009aee2) main_camera4_pane_g_ParamLimits

0xf745,	// (0x0009aee2) main_camera4_pane_g

0x611e,	// (0x000918bb) main_camera4_pane_t1_ParamLimits

0x611e,	// (0x000918bb) main_camera4_pane_t1

0xb7a8,	// (0x00096f45) bg_tb_trans_pane_cp06

0xda31,	// (0x000991ce) cam4_indicators_pane_g1

0xda42,	// (0x000991df) cam4_indicators_pane_g2

0x0002,

0xf760,	// (0x0009aefd) cam4_indicators_pane_g

0xda60,	// (0x000991fd) cam4_indicators_pane_t1

0x6182,	// (0x0009191f) main_video4_pane_g1_ParamLimits

0x6182,	// (0x0009191f) main_video4_pane_g1

0x6191,	// (0x0009192e) main_video4_pane_g2_ParamLimits

0x6191,	// (0x0009192e) main_video4_pane_g2

0x61a0,	// (0x0009193d) main_video4_pane_g3_ParamLimits

0x61a0,	// (0x0009193d) main_video4_pane_g3

0x61af,	// (0x0009194c) main_video4_pane_g4_ParamLimits

0x61af,	// (0x0009194c) main_video4_pane_g4

0x0004,

0xf767,	// (0x0009af04) main_video4_pane_g_ParamLimits

0xf767,	// (0x0009af04) main_video4_pane_g

0x61cd,	// (0x0009196a) vid4_indicators_pane_ParamLimits

0x61cd,	// (0x0009196a) vid4_indicators_pane

0x61fb,	// (0x00091998) video4_image_uncrop_cif_pane_ParamLimits

0x61fb,	// (0x00091998) video4_image_uncrop_cif_pane

0x6215,	// (0x000919b2) video4_image_uncrop_nhd_pane_ParamLimits

0x6215,	// (0x000919b2) video4_image_uncrop_nhd_pane

0x606a,	// (0x00091807) video4_image_uncrop_vga_pane_ParamLimits

0x606a,	// (0x00091807) video4_image_uncrop_vga_pane

0x9e49,	// (0x000955e6) bg_tb_trans_pane_cp07

0xda8c,	// (0x00099229) vid4_indicators_pane_g1

0xdaa0,	// (0x0009923d) vid4_indicators_pane_g2

0xdab4,	// (0x00099251) vid4_indicators_pane_g3

0x0004,

0xf772,	// (0x0009af0f) vid4_indicators_pane_g

0xdae3,	// (0x00099280) vid4_indicators_pane_t1

0x6229,	// (0x000919c6) cam4_autofocus_pane_g1

0x6231,	// (0x000919ce) cam4_autofocus_pane_g2

0x6239,	// (0x000919d6) cam4_autofocus_pane_g3

0x0002,

0xf77d,	// (0x0009af1a) cam4_autofocus_pane_g

0x6241,	// (0x000919de) cam4_autofocus_pane_g3_copy1

0x5a96,	// (0x00091233) video_down_pane_cp_t1

0x5aa4,	// (0x00091241) video_down_pane_cp_t2

0x0001,

0xf6f5,	// (0x0009ae92) video_down_pane_cp_t

0x9e49,	// (0x000955e6) popup_vitu2_window_ParamLimits

0x9e49,	// (0x000955e6) popup_vitu2_window

0x6249,	// (0x000919e6) aid_size_cell2_itu2_ParamLimits

0x6249,	// (0x000919e6) aid_size_cell2_itu2

0x626f,	// (0x00091a0c) aid_size_cell_itu2_ParamLimits

0x626f,	// (0x00091a0c) aid_size_cell_itu2

0x62cb,	// (0x00091a68) bg_popup_window_pane_cp09_ParamLimits

0x62cb,	// (0x00091a68) bg_popup_window_pane_cp09

0x62d9,	// (0x00091a76) field_vitu2_entry_pane_ParamLimits

0x62d9,	// (0x00091a76) field_vitu2_entry_pane

0x62ff,	// (0x00091a9c) grid_vitu2_function_pane_ParamLimits

0x62ff,	// (0x00091a9c) grid_vitu2_function_pane

0x6350,	// (0x00091aed) grid_vitu2_itu_pane_ParamLimits

0x6350,	// (0x00091aed) grid_vitu2_itu_pane

0x63e6,	// (0x00091b83) cell_vitu2_itu_pane_ParamLimits

0x63e6,	// (0x00091b83) cell_vitu2_itu_pane

0x6412,	// (0x00091baf) cell_vitu2_function_pane_ParamLimits

0x6412,	// (0x00091baf) cell_vitu2_function_pane

0xb7b6,	// (0x00096f53) bg_popup_call_pane_cp08_ParamLimits

0xb7b6,	// (0x00096f53) bg_popup_call_pane_cp08

0xb7cd,	// (0x00096f6a) field_vitu2_entry_pane_g1

0xb7d9,	// (0x00096f76) field_vitu2_entry_pane_g2

0x0002,

0xf784,	// (0x0009af21) field_vitu2_entry_pane_g

0x6451,	// (0x00091bee) field_vitu2_entry_pane_t1_ParamLimits

0x6451,	// (0x00091bee) field_vitu2_entry_pane_t1

0xb7e5,	// (0x00096f82) field_vitu2_entry_pane_t2_ParamLimits

0xb7e5,	// (0x00096f82) field_vitu2_entry_pane_t2

0x0001,

0xf78b,	// (0x0009af28) field_vitu2_entry_pane_t_ParamLimits

0xf78b,	// (0x0009af28) field_vitu2_entry_pane_t

0x6480,	// (0x00091c1d) bg_button_pane_cp010_ParamLimits

0x6480,	// (0x00091c1d) bg_button_pane_cp010

0x648e,	// (0x00091c2b) cell_vitu2_itu_pane_g1

0x64b4,	// (0x00091c51) cell_vitu2_itu_pane_t1_ParamLimits

0x64b4,	// (0x00091c51) cell_vitu2_itu_pane_t1

0x0d29,	// (0x0008c4c6) cell_vitu2_itu_pane_t2_ParamLimits

0x0d29,	// (0x0008c4c6) cell_vitu2_itu_pane_t2

0x0002,

0xf795,	// (0x0009af32) cell_vitu2_itu_pane_t_ParamLimits

0xf795,	// (0x0009af32) cell_vitu2_itu_pane_t

0x9e49,	// (0x000955e6) bg_button_pane_cp011

0x6512,	// (0x00091caf) cell_vitu2_function_pane_g1

0x9e57,	// (0x000955f4) main_myfav_hc_pane

0x5e43,	// (0x000915e0) popup_image3_note_pane_ParamLimits

0x5e43,	// (0x000915e0) popup_image3_note_pane

0x5e5f,	// (0x000915fc) popup_image3_tool_bar_pane_ParamLimits

0x5e5f,	// (0x000915fc) popup_image3_tool_bar_pane

0x0db7,	// (0x0008c554) cell_vitu2_itu_pane_t3_ParamLimits

0x0db7,	// (0x0008c554) cell_vitu2_itu_pane_t3

0xdc01,	// (0x0009939e) bg_popup_trans_pane

0xb80a,	// (0x00096fa7) grid_image3_tool_bar_pane

0xb814,	// (0x00096fb1) bg_popup_trans_pane_g1

0xe76d,	// (0x00099f0a) bg_popup_trans_pane_g2

0xb81c,	// (0x00096fb9) bg_popup_trans_pane_g3

0xb824,	// (0x00096fc1) bg_popup_trans_pane_g4

0xb82c,	// (0x00096fc9) bg_popup_trans_pane_g5

0xb834,	// (0x00096fd1) bg_popup_trans_pane_g6

0xb83c,	// (0x00096fd9) bg_popup_trans_pane_g7

0xb844,	// (0x00096fe1) bg_popup_trans_pane_g8

0xe74d,	// (0x00099eea) bg_popup_trans_pane_g9

0x0008,

0xf79c,	// (0x0009af39) bg_popup_trans_pane_g

0xb84c,	// (0x00096fe9) cell_image3_tool_bar_pane_ParamLimits

0xb84c,	// (0x00096fe9) cell_image3_tool_bar_pane

0xe55c,	// (0x00099cf9) cell_image3_tool_bar_pane_g1

0xdc01,	// (0x0009939e) bg_popup_trans_pane_cp1

0xb860,	// (0x00096ffd) popup_image3_note_pane_t1

0xb86e,	// (0x0009700b) popup_image3_note_pane_t2

0xb87c,	// (0x00097019) popup_image3_note_pane_t3

0x0002,

0xf7af,	// (0x0009af4c) popup_image3_note_pane_t

0xb88a,	// (0x00097027) popup_image3_note_pane_t3_copy1

0x6526,	// (0x00091cc3) bg_myfav_hc_instruction_pane_ParamLimits

0x6526,	// (0x00091cc3) bg_myfav_hc_instruction_pane

0x653a,	// (0x00091cd7) cell_myfav_contact_pane_ParamLimits

0x653a,	// (0x00091cd7) cell_myfav_contact_pane

0x6558,	// (0x00091cf5) cell_myfav_contact_pane_cp1_ParamLimits

0x6558,	// (0x00091cf5) cell_myfav_contact_pane_cp1

0x6570,	// (0x00091d0d) cell_myfav_contact_pane_cp2_ParamLimits

0x6570,	// (0x00091d0d) cell_myfav_contact_pane_cp2

0x6588,	// (0x00091d25) cell_myfav_contact_pane_cp3_ParamLimits

0x6588,	// (0x00091d25) cell_myfav_contact_pane_cp3

0x659f,	// (0x00091d3c) cell_myfav_contact_pane_cp4_ParamLimits

0x659f,	// (0x00091d3c) cell_myfav_contact_pane_cp4

0x65b7,	// (0x00091d54) cell_myfav_contact_pane_cp5_ParamLimits

0x65b7,	// (0x00091d54) cell_myfav_contact_pane_cp5

0x65cb,	// (0x00091d68) cell_myfav_contact_pane_cp6_ParamLimits

0x65cb,	// (0x00091d68) cell_myfav_contact_pane_cp6

0x65e1,	// (0x00091d7e) cell_myfav_contact_pane_cp7_ParamLimits

0x65e1,	// (0x00091d7e) cell_myfav_contact_pane_cp7

0xb898,	// (0x00097035) listscroll_gen_pane_cp05

0x65fb,	// (0x00091d98) main_myfav_hc_pane_g1_ParamLimits

0x65fb,	// (0x00091d98) main_myfav_hc_pane_g1

0x6615,	// (0x00091db2) main_myfav_hc_pane_g2_ParamLimits

0x6615,	// (0x00091db2) main_myfav_hc_pane_g2

0x0002,

0xf7b6,	// (0x0009af53) main_myfav_hc_pane_g_ParamLimits

0xf7b6,	// (0x0009af53) main_myfav_hc_pane_g

0x6647,	// (0x00091de4) main_myfav_hc_pane_t1_ParamLimits

0x6647,	// (0x00091de4) main_myfav_hc_pane_t1

0xb8a1,	// (0x0009703e) main_myfav_hc_pane_t2_ParamLimits

0xb8a1,	// (0x0009703e) main_myfav_hc_pane_t2

0xb8b3,	// (0x00097050) main_myfav_hc_pane_t3_ParamLimits

0xb8b3,	// (0x00097050) main_myfav_hc_pane_t3

0x665e,	// (0x00091dfb) main_myfav_hc_pane_t4_ParamLimits

0x665e,	// (0x00091dfb) main_myfav_hc_pane_t4

0x0004,

0xf7bd,	// (0x0009af5a) main_myfav_hc_pane_t_ParamLimits

0xf7bd,	// (0x0009af5a) main_myfav_hc_pane_t

0xe55c,	// (0x00099cf9) bg_myfav_hc_instruction_pane_g1

0xb8c5,	// (0x00097062) cell_myfav_contact_pane_g1_ParamLimits

0xb8c5,	// (0x00097062) cell_myfav_contact_pane_g1

0xb8c5,	// (0x00097062) cell_myfav_contact_pane_g2_ParamLimits

0xb8c5,	// (0x00097062) cell_myfav_contact_pane_g2

0xb8d1,	// (0x0009706e) cell_myfav_contact_pane_g3_ParamLimits

0xb8d1,	// (0x0009706e) cell_myfav_contact_pane_g3

0xe310,	// (0x00099aad) cell_myfav_contact_pane_g4_ParamLimits

0xe310,	// (0x00099aad) cell_myfav_contact_pane_g4

0xb8de,	// (0x0009707b) cell_myfav_contact_pane_g5_ParamLimits

0xb8de,	// (0x0009707b) cell_myfav_contact_pane_g5

0x0004,

0xf7c8,	// (0x0009af65) cell_myfav_contact_pane_g_ParamLimits

0xf7c8,	// (0x0009af65) cell_myfav_contact_pane_g

0x662f,	// (0x00091dcc) main_myfav_hc_pane_g3_ParamLimits

0x662f,	// (0x00091dcc) main_myfav_hc_pane_g3

0x0f8c,	// (0x0008c729) popup_adpt_find_window

0x6686,	// (0x00091e23) afind_page_pane_ParamLimits

0x6686,	// (0x00091e23) afind_page_pane

0x669b,	// (0x00091e38) aid_size_cell_afind_ParamLimits

0x669b,	// (0x00091e38) aid_size_cell_afind

0x66b9,	// (0x00091e56) bg_popup_sub_pane_cp09_ParamLimits

0x66b9,	// (0x00091e56) bg_popup_sub_pane_cp09

0x66c6,	// (0x00091e63) find_pane_cp01_ParamLimits

0x66c6,	// (0x00091e63) find_pane_cp01

0xb8ea,	// (0x00097087) grid_afind_control_pane_ParamLimits

0xb8ea,	// (0x00097087) grid_afind_control_pane

0x66d3,	// (0x00091e70) grid_afind_pane_ParamLimits

0x66d3,	// (0x00091e70) grid_afind_pane

0x66f5,	// (0x00091e92) cell_afind_pane_ParamLimits

0x66f5,	// (0x00091e92) cell_afind_pane

0xe55c,	// (0x00099cf9) afind_page_pane_g1

0x675c,	// (0x00091ef9) afind_page_pane_g2

0x6765,	// (0x00091f02) afind_page_pane_g3

0x0002,

0xf7d3,	// (0x0009af70) afind_page_pane_g

0x676e,	// (0x00091f0b) afind_page_pane_t1

0xb8fe,	// (0x0009709b) cell_afind_grid_control_pane_ParamLimits

0xb8fe,	// (0x0009709b) cell_afind_grid_control_pane

0xb73e,	// (0x00096edb) bg_button_pane_cp69_ParamLimits

0xb73e,	// (0x00096edb) bg_button_pane_cp69

0x678e,	// (0x00091f2b) cell_afind_pane_g1_ParamLimits

0x678e,	// (0x00091f2b) cell_afind_pane_g1

0x679b,	// (0x00091f38) cell_afind_pane_t1_ParamLimits

0x679b,	// (0x00091f38) cell_afind_pane_t1

0xe566,	// (0x00099d03) bg_button_pane_cp72

0xb90d,	// (0x000970aa) cell_afind_grid_control_pane_g1

0x3991,	// (0x0008f12e) aid_image_placing_area_ParamLimits

0x3991,	// (0x0008f12e) aid_image_placing_area

0xe302,	// (0x00099a9f) field_vitu_entry_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) field_vitu_entry_pane_g1

0xe302,	// (0x00099a9f) field_vitu_entry_pane_g2_ParamLimits

0xe302,	// (0x00099a9f) field_vitu_entry_pane_g2

0x0001,

0x005a,	// (0x0008b7f7) field_vitu_entry_pane_g_ParamLimits

0x005a,	// (0x0008b7f7) field_vitu_entry_pane_g

0xb257,	// (0x000969f4) cell_vitu_itu_pane_g1_ParamLimits

0xb23a,	// (0x000969d7) cell_vitu_itu_pane_t3_ParamLimits

0xb23a,	// (0x000969d7) cell_vitu_itu_pane_t3

0xb6e7,	// (0x00096e84) mp4_progress_pane_t1_ParamLimits

0xb700,	// (0x00096e9d) mp4_progress_pane_t2_ParamLimits

0xf719,	// (0x0009aeb6) mp4_progress_pane_t_ParamLimits

0xb719,	// (0x00096eb6) mup_progress_pane_cp04_ParamLimits

0x6672,	// (0x00091e0f) main_myfav_hc_pane_t5_ParamLimits

0x6672,	// (0x00091e0f) main_myfav_hc_pane_t5

0x9df8,	// (0x00095595) aid_zoom_text_primary

0x0f8c,	// (0x0008c729) popup_adpt_find_window_ParamLimits

0x9e49,	// (0x000955e6) main_cam_set_pane

0x609b,	// (0x00091838) cam4_zoom_pane_ParamLimits

0x609b,	// (0x00091838) cam4_zoom_pane

0x67ad,	// (0x00091f4a) main_cam_set_pane_g1_ParamLimits

0x67ad,	// (0x00091f4a) main_cam_set_pane_g1

0x67bb,	// (0x00091f58) main_cam_set_pane_g2_ParamLimits

0x67bb,	// (0x00091f58) main_cam_set_pane_g2

0x0001,

0xf7da,	// (0x0009af77) main_cam_set_pane_g_ParamLimits

0xf7da,	// (0x0009af77) main_cam_set_pane_g

0x67dc,	// (0x00091f79) main_cam_set_pane_t1_ParamLimits

0x67dc,	// (0x00091f79) main_cam_set_pane_t1

0x67f7,	// (0x00091f94) main_cset_listscroll_pane_ParamLimits

0x67f7,	// (0x00091f94) main_cset_listscroll_pane

0x681d,	// (0x00091fba) main_cset_slider_pane_ParamLimits

0x681d,	// (0x00091fba) main_cset_slider_pane

0xb91e,	// (0x000970bb) main_cset_list_pane_ParamLimits

0xb91e,	// (0x000970bb) main_cset_list_pane

0xb92e,	// (0x000970cb) scroll_pane_cp028

0x6843,	// (0x00091fe0) aid_area_touch_slider

0x685f,	// (0x00091ffc) cset_slider_pane

0x6882,	// (0x0009201f) main_cset_slider_pane_g1

0x6897,	// (0x00092034) main_cset_slider_pane_g2

0x0011,

0xf7df,	// (0x0009af7c) main_cset_slider_pane_g

0xb967,	// (0x00097104) main_cset_slider_pane_t1

0x6953,	// (0x000920f0) main_cset_slider_pane_t2

0x696d,	// (0x0009210a) main_cset_slider_pane_t3

0x6987,	// (0x00092124) main_cset_slider_pane_t4

0x69a1,	// (0x0009213e) main_cset_slider_pane_t5

0x69bb,	// (0x00092158) main_cset_slider_pane_t6

0x69d0,	// (0x0009216d) main_cset_slider_pane_t7

0x000e,

0xf804,	// (0x0009afa1) main_cset_slider_pane_t

0x6ad4,	// (0x00092271) cset_list_set_pane_ParamLimits

0x6ad4,	// (0x00092271) cset_list_set_pane

0xba01,	// (0x0009719e) aid_position_infowindow_above

0xba09,	// (0x000971a6) aid_position_infowindow_below

0xba11,	// (0x000971ae) cset_list_set_pane_g1_ParamLimits

0xba11,	// (0x000971ae) cset_list_set_pane_g1

0xba1d,	// (0x000971ba) cset_list_set_pane_g3_ParamLimits

0xba1d,	// (0x000971ba) cset_list_set_pane_g3

0x0001,

0xf823,	// (0x0009afc0) cset_list_set_pane_g_ParamLimits

0xf823,	// (0x0009afc0) cset_list_set_pane_g

0xba2c,	// (0x000971c9) cset_list_set_pane_t1_ParamLimits

0xba2c,	// (0x000971c9) cset_list_set_pane_t1

0xe29b,	// (0x00099a38) list_highlight_pane_cp021_ParamLimits

0xe29b,	// (0x00099a38) list_highlight_pane_cp021

0x3139,	// (0x0008e8d6) cset_slider_pane_g1

0x314b,	// (0x0008e8e8) cset_slider_pane_g2

0x3142,	// (0x0008e8df) cset_slider_pane_g3

0x0002,

0xf828,	// (0x0009afc5) cset_slider_pane_g

0xdafa,	// (0x00099297) aid_area_touch_cam4_zoom

0xdb02,	// (0x0009929f) cam4_zoom_cont_pane

0xdb0a,	// (0x000992a7) cam4_zoom_pane_g1

0xdb12,	// (0x000992af) cam4_zoom_pane_g2

0x6ae6,	// (0x00092283) cam4_zoom_pane_g3

0x0002,

0xf82f,	// (0x0009afcc) cam4_zoom_pane_g

0xdb1a,	// (0x000992b7) cam4_zoom_cont_pane_g1

0xdb23,	// (0x000992c0) cam4_zoom_cont_pane_g2

0xdb2c,	// (0x000992c9) cam4_zoom_cont_pane_g3

0x0002,

0xf836,	// (0x0009afd3) cam4_zoom_cont_pane_g

0x5ecc,	// (0x00091669) call4_image_pane_ParamLimits

0x5ecc,	// (0x00091669) call4_image_pane

0x5f33,	// (0x000916d0) call4_windows_conf_pane_ParamLimits

0x5f78,	// (0x00091715) popup_call4_audio_in_window_ParamLimits

0x5f78,	// (0x00091715) popup_call4_audio_in_window

0xdc01,	// (0x0009939e) bg_popup_call2_act_pane_cp02

0xb76a,	// (0x00096f07) call4_list_conf_pane

0xe55c,	// (0x00099cf9) call4_image_pane_g1

0xe55c,	// (0x00099cf9) call4_image_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) call4_image_pane_g

0xba41,	// (0x000971de) list_single_graphic_popup_conf4_pane_ParamLimits

0xba41,	// (0x000971de) list_single_graphic_popup_conf4_pane

0xdc01,	// (0x0009939e) list_highlight_pane_cp022

0xba54,	// (0x000971f1) list_single_graphic_popup_conf4_pane_g1

0xec74,	// (0x0009a411) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf83d,	// (0x0009afda) list_single_graphic_popup_conf4_pane_g

0xba5c,	// (0x000971f9) list_single_graphic_popup_conf4_pane_t1

0x1d18,	// (0x0008d4b5) popup_vtel_slider_window_ParamLimits

0x1d18,	// (0x0008d4b5) popup_vtel_slider_window

0xb72c,	// (0x00096ec9) dialer2_ne_pane_t2_ParamLimits

0xb72c,	// (0x00096ec9) dialer2_ne_pane_t2

0x0001,

0xf71e,	// (0x0009aebb) dialer2_ne_pane_t_ParamLimits

0xf71e,	// (0x0009aebb) dialer2_ne_pane_t

0xaa6c,	// (0x00096209) bg_popup_sub_pane_cp010_ParamLimits

0xaa6c,	// (0x00096209) bg_popup_sub_pane_cp010

0x6aee,	// (0x0009228b) popup_vtel_slider_window_g1_ParamLimits

0x6aee,	// (0x0009228b) popup_vtel_slider_window_g1

0x6b01,	// (0x0009229e) popup_vtel_slider_window_g2_ParamLimits

0x6b01,	// (0x0009229e) popup_vtel_slider_window_g2

0x0003,

0xf842,	// (0x0009afdf) popup_vtel_slider_window_g_ParamLimits

0xf842,	// (0x0009afdf) popup_vtel_slider_window_g

0x6b57,	// (0x000922f4) vtel_slider_pane_ParamLimits

0x6b57,	// (0x000922f4) vtel_slider_pane

0x6b79,	// (0x00092316) vtel_slider_pane_g1_ParamLimits

0x6b79,	// (0x00092316) vtel_slider_pane_g1

0x6b8d,	// (0x0009232a) vtel_slider_pane_g2_ParamLimits

0x6b8d,	// (0x0009232a) vtel_slider_pane_g2

0x6ba5,	// (0x00092342) vtel_slider_pane_g3_ParamLimits

0x6ba5,	// (0x00092342) vtel_slider_pane_g3

0x6b79,	// (0x00092316) vtel_slider_pane_g4_ParamLimits

0x6b79,	// (0x00092316) vtel_slider_pane_g4

0x6bbb,	// (0x00092358) vtel_slider_pane_g5_ParamLimits

0x6bbb,	// (0x00092358) vtel_slider_pane_g5

0x0004,

0xf84b,	// (0x0009afe8) vtel_slider_pane_g_ParamLimits

0xf84b,	// (0x0009afe8) vtel_slider_pane_g

0x9e49,	// (0x000955e6) main_gallery2_pane

0x629b,	// (0x00091a38) aid_size_row_itut2_dropdow_list_ParamLimits

0x629b,	// (0x00091a38) aid_size_row_itut2_dropdow_list

0x6327,	// (0x00091ac4) grid_vitu2_function_top_pane_ParamLimits

0x6327,	// (0x00091ac4) grid_vitu2_function_top_pane

0x6391,	// (0x00091b2e) popup_vitu2_dropdown_list_window_ParamLimits

0x6391,	// (0x00091b2e) popup_vitu2_dropdown_list_window

0x63b8,	// (0x00091b55) popup_vitu2_match_list_window

0x6bd1,	// (0x0009236e) cell_vitu2_function_top_pane_ParamLimits

0x6bd1,	// (0x0009236e) cell_vitu2_function_top_pane

0x6be9,	// (0x00092386) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6be9,	// (0x00092386) cell_vitu2_function_top_pane_cp01

0x6c05,	// (0x000923a2) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c05,	// (0x000923a2) cell_vitu2_function_top_wide_pane

0x9e49,	// (0x000955e6) bg_button_pane_cp012

0x6c23,	// (0x000923c0) cell_vitu2_function_top_pane_g1

0xdb35,	// (0x000992d2) bg_button_pane_cp013_ParamLimits

0xdb35,	// (0x000992d2) bg_button_pane_cp013

0x6c37,	// (0x000923d4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c37,	// (0x000923d4) cell_vitu2_function_top_wide_pane_g1

0x9e49,	// (0x000955e6) bg_popup_sub_pane_cp20

0x6c4f,	// (0x000923ec) list_vitu2_match_list_pane

0xb814,	// (0x00096fb1) bg_popup_sub_pane_cp20_g1

0xb81c,	// (0x00096fb9) bg_popup_sub_pane_cp20_g2

0xe76d,	// (0x00099f0a) bg_popup_sub_pane_cp20_g3

0xb824,	// (0x00096fc1) bg_popup_sub_pane_cp20_g4

0xe74d,	// (0x00099eea) bg_popup_sub_pane_cp20_g5

0xba72,	// (0x0009720f) bg_popup_sub_pane_cp20_g6

0xb834,	// (0x00096fd1) bg_popup_sub_pane_cp20_g7

0xb83c,	// (0x00096fd9) bg_popup_sub_pane_cp20_g8

0xb844,	// (0x00096fe1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf856,	// (0x0009aff3) bg_popup_sub_pane_cp20_g

0xdb51,	// (0x000992ee) list_vitu2_match_list_item_pane_ParamLimits

0xdb51,	// (0x000992ee) list_vitu2_match_list_item_pane

0xdb63,	// (0x00099300) list_vitu2_match_list_item_pane_t1

0x9e57,	// (0x000955f4) bg_popup_sub_pane_cp21

0xe526,	// (0x00099cc3) grid_vitu2_dropdown_list_pane

0x6c67,	// (0x00092404) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6c67,	// (0x00092404) cell_vitu2_dropdown_list_char_pane

0x6c87,	// (0x00092424) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c87,	// (0x00092424) cell_vitu2_dropdown_list_ctrl_pane

0xba7a,	// (0x00097217) cell_vitu2_dropdown_list_char_pane_g1

0xba83,	// (0x00097220) cell_vitu2_dropdown_list_char_pane_g2

0xba8c,	// (0x00097229) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf869,	// (0x0009b006) cell_vitu2_dropdown_list_char_pane_g

0x6caf,	// (0x0009244c) cell_vitu2_dropdown_list_char_pane_t1

0x6cbd,	// (0x0009245a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6cbd,	// (0x0009245a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6cca,	// (0x00092467) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6cca,	// (0x00092467) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6cd7,	// (0x00092474) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6cd7,	// (0x00092474) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6ce4,	// (0x00092481) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6ce4,	// (0x00092481) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb7a8,	// (0x00096f45) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb7a8,	// (0x00096f45) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf870,	// (0x0009b00d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf870,	// (0x0009b00d) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d00,	// (0x0009249d) aid_size_cell_gallery2_ParamLimits

0x6d00,	// (0x0009249d) aid_size_cell_gallery2

0x6d1e,	// (0x000924bb) grid_gallery2_pane_ParamLimits

0x6d1e,	// (0x000924bb) grid_gallery2_pane

0x6d38,	// (0x000924d5) scroll_pane_cp029_ParamLimits

0x6d38,	// (0x000924d5) scroll_pane_cp029

0x6d49,	// (0x000924e6) cell_gallery2_pane_ParamLimits

0x6d49,	// (0x000924e6) cell_gallery2_pane

0xba95,	// (0x00097232) cell_gallery2_pane_g2

0x6da8,	// (0x00092545) cell_gallery2_pane_g3

0xba9d,	// (0x0009723a) cell_gallery2_pane_g4

0xbaa5,	// (0x00097242) cell_gallery2_pane_g5

0xe526,	// (0x00099cc3) grid_highlight_pane_cp10

0x63b8,	// (0x00091b55) popup_vitu2_match_list_window_ParamLimits

0x63cd,	// (0x00091b6a) popup_vitu2_query_window_ParamLimits

0x63cd,	// (0x00091b6a) popup_vitu2_query_window

0x9e57,	// (0x000955f4) bg_vitu2_candi_button_pane

0xba7a,	// (0x00097217) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xba83,	// (0x00097220) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xba8c,	// (0x00097229) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6db0,	// (0x0009254d) bg_button_pane_cp015

0x6dc1,	// (0x0009255e) bg_button_pane_cp016

0x6dcd,	// (0x0009256a) bg_button_pane_cp017

0x2f00,	// (0x0008e69d) bg_popup_sub_pane_cp22

0xbaad,	// (0x0009724a) popup_vitu2_query_window_g1

0x6e0b,	// (0x000925a8) popup_vitu2_query_window_g2

0x0002,

0xf87b,	// (0x0009b018) popup_vitu2_query_window_g

0x6e2d,	// (0x000925ca) popup_vitu2_query_window_t1_ParamLimits

0x6e2d,	// (0x000925ca) popup_vitu2_query_window_t1

0x6e60,	// (0x000925fd) popup_vitu2_query_window_t2_ParamLimits

0x6e60,	// (0x000925fd) popup_vitu2_query_window_t2

0x6e72,	// (0x0009260f) popup_vitu2_query_window_t3_ParamLimits

0x6e72,	// (0x0009260f) popup_vitu2_query_window_t3

0x6e9a,	// (0x00092637) popup_vitu2_query_window_t4_ParamLimits

0x6e9a,	// (0x00092637) popup_vitu2_query_window_t4

0x6eae,	// (0x0009264b) popup_vitu2_query_window_t5_ParamLimits

0x6eae,	// (0x0009264b) popup_vitu2_query_window_t5

0x0006,

0xf882,	// (0x0009b01f) popup_vitu2_query_window_t_ParamLimits

0xf882,	// (0x0009b01f) popup_vitu2_query_window_t

0xb916,	// (0x000970b3) main_cset_text_pane

0x6843,	// (0x00091fe0) aid_area_touch_slider_ParamLimits

0x685f,	// (0x00091ffc) cset_slider_pane_ParamLimits

0x6882,	// (0x0009201f) main_cset_slider_pane_g1_ParamLimits

0x6897,	// (0x00092034) main_cset_slider_pane_g2_ParamLimits

0xb937,	// (0x000970d4) main_cset_slider_pane_g3_ParamLimits

0xb937,	// (0x000970d4) main_cset_slider_pane_g3

0x68ac,	// (0x00092049) main_cset_slider_pane_g4_ParamLimits

0x68ac,	// (0x00092049) main_cset_slider_pane_g4

0x68bb,	// (0x00092058) main_cset_slider_pane_g5_ParamLimits

0x68bb,	// (0x00092058) main_cset_slider_pane_g5

0x68c7,	// (0x00092064) main_cset_slider_pane_g6_ParamLimits

0x68c7,	// (0x00092064) main_cset_slider_pane_g6

0xf7df,	// (0x0009af7c) main_cset_slider_pane_g_ParamLimits

0xb967,	// (0x00097104) main_cset_slider_pane_t1_ParamLimits

0x6953,	// (0x000920f0) main_cset_slider_pane_t2_ParamLimits

0x696d,	// (0x0009210a) main_cset_slider_pane_t3_ParamLimits

0x6987,	// (0x00092124) main_cset_slider_pane_t4_ParamLimits

0x69a1,	// (0x0009213e) main_cset_slider_pane_t5_ParamLimits

0x69bb,	// (0x00092158) main_cset_slider_pane_t6_ParamLimits

0x69d0,	// (0x0009216d) main_cset_slider_pane_t7_ParamLimits

0x69fa,	// (0x00092197) main_cset_slider_pane_t8_ParamLimits

0x69fa,	// (0x00092197) main_cset_slider_pane_t8

0x6a22,	// (0x000921bf) main_cset_slider_pane_t9_ParamLimits

0x6a22,	// (0x000921bf) main_cset_slider_pane_t9

0x6a4a,	// (0x000921e7) main_cset_slider_pane_t10_ParamLimits

0x6a4a,	// (0x000921e7) main_cset_slider_pane_t10

0x6a72,	// (0x0009220f) main_cset_slider_pane_t11_ParamLimits

0x6a72,	// (0x0009220f) main_cset_slider_pane_t11

0x6a9a,	// (0x00092237) main_cset_slider_pane_t12_ParamLimits

0x6a9a,	// (0x00092237) main_cset_slider_pane_t12

0x6ab7,	// (0x00092254) main_cset_slider_pane_t13_ParamLimits

0x6ab7,	// (0x00092254) main_cset_slider_pane_t13

0xf804,	// (0x0009afa1) main_cset_slider_pane_t_ParamLimits

0xdc01,	// (0x0009939e) bg_popup_sub_pane_cp011

0xbab9,	// (0x00097256) main_cset_text_pane_g1

0xbac1,	// (0x0009725e) main_cset_text_pane_t1

0xbacf,	// (0x0009726c) main_cset_text_pane_t2

0xbadd,	// (0x0009727a) main_cset_text_pane_t3

0xbaeb,	// (0x00097288) main_cset_text_pane_t4

0xbaf9,	// (0x00097296) main_cset_text_pane_t5

0xbb07,	// (0x000972a4) main_cset_text_pane_t6

0xbb15,	// (0x000972b2) main_cset_text_pane_t7

0x0006,

0xf891,	// (0x0009b02e) main_cset_text_pane_t

0x9e57,	// (0x000955f4) main_cam4_burst_pane

0x9e57,	// (0x000955f4) main_cam5_pane

0x677c,	// (0x00091f19) bg_button_pane_cp019

0x6785,	// (0x00091f22) bg_button_pane_cp020

0xb943,	// (0x000970e0) main_cset_slider_pane_g7_ParamLimits

0xb943,	// (0x000970e0) main_cset_slider_pane_g7

0xb94f,	// (0x000970ec) main_cset_slider_pane_g8_ParamLimits

0xb94f,	// (0x000970ec) main_cset_slider_pane_g8

0x68db,	// (0x00092078) main_cset_slider_pane_g9_ParamLimits

0x68db,	// (0x00092078) main_cset_slider_pane_g9

0x68e7,	// (0x00092084) main_cset_slider_pane_g10_ParamLimits

0x68e7,	// (0x00092084) main_cset_slider_pane_g10

0x68f3,	// (0x00092090) main_cset_slider_pane_g11_ParamLimits

0x68f3,	// (0x00092090) main_cset_slider_pane_g11

0x68ff,	// (0x0009209c) main_cset_slider_pane_g12_ParamLimits

0x68ff,	// (0x0009209c) main_cset_slider_pane_g12

0x690b,	// (0x000920a8) main_cset_slider_pane_g13_ParamLimits

0x690b,	// (0x000920a8) main_cset_slider_pane_g13

0x6917,	// (0x000920b4) main_cset_slider_pane_g14_ParamLimits

0x6917,	// (0x000920b4) main_cset_slider_pane_g14

0x6923,	// (0x000920c0) main_cset_slider_pane_g15_ParamLimits

0x6923,	// (0x000920c0) main_cset_slider_pane_g15

0xb98f,	// (0x0009712c) main_cset_slider_pane_t14_ParamLimits

0xb98f,	// (0x0009712c) main_cset_slider_pane_t14

0xb9c8,	// (0x00097165) main_cset_slider_pane_t15_ParamLimits

0xb9c8,	// (0x00097165) main_cset_slider_pane_t15

0x6f18,	// (0x000926b5) aid_cam4_burst_size_cell_ParamLimits

0x6f18,	// (0x000926b5) aid_cam4_burst_size_cell

0x6f38,	// (0x000926d5) grid_cam4_burst_pane_ParamLimits

0x6f38,	// (0x000926d5) grid_cam4_burst_pane

0x6f70,	// (0x0009270d) linegrid_cam4_burst_pane_ParamLimits

0x6f70,	// (0x0009270d) linegrid_cam4_burst_pane

0xbb23,	// (0x000972c0) scroll_pane_cp30_ParamLimits

0xbb23,	// (0x000972c0) scroll_pane_cp30

0x6f94,	// (0x00092731) cell_cam4_burst_pane_ParamLimits

0x6f94,	// (0x00092731) cell_cam4_burst_pane

0xbb2f,	// (0x000972cc) linegrid_cam4_burst_pane_g1_ParamLimits

0xbb2f,	// (0x000972cc) linegrid_cam4_burst_pane_g1

0x6fe1,	// (0x0009277e) linegrid_cam4_burst_pane_g2_ParamLimits

0x6fe1,	// (0x0009277e) linegrid_cam4_burst_pane_g2

0xbb3c,	// (0x000972d9) linegrid_cam4_burst_pane_g3_ParamLimits

0xbb3c,	// (0x000972d9) linegrid_cam4_burst_pane_g3

0x0002,

0xf8a0,	// (0x0009b03d) linegrid_cam4_burst_pane_g_ParamLimits

0xf8a0,	// (0x0009b03d) linegrid_cam4_burst_pane_g

0x6ff2,	// (0x0009278f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ff2,	// (0x0009278f) linegrid_cam4_burst_pane_g3_copy1

0xbb49,	// (0x000972e6) linegrid_cam4_burst_pane_g4_ParamLimits

0xbb49,	// (0x000972e6) linegrid_cam4_burst_pane_g4

0x700c,	// (0x000927a9) linegrid_cam4_burst_pane_g5_ParamLimits

0x700c,	// (0x000927a9) linegrid_cam4_burst_pane_g5

0x701d,	// (0x000927ba) linegrid_cam4_burst_pane_g6_ParamLimits

0x701d,	// (0x000927ba) linegrid_cam4_burst_pane_g6

0xbb56,	// (0x000972f3) linegrid_cam4_burst_pane_g7_ParamLimits

0xbb56,	// (0x000972f3) linegrid_cam4_burst_pane_g7

0x7034,	// (0x000927d1) cell_cam4_burst_pane_g1

0xbb6f,	// (0x0009730c) main_cam5_pane_t1_ParamLimits

0xbb6f,	// (0x0009730c) main_cam5_pane_t1

0xbb81,	// (0x0009731e) main_cam5_pane_t2_ParamLimits

0xbb81,	// (0x0009731e) main_cam5_pane_t2

0xbb93,	// (0x00097330) main_cam5_pane_t3_ParamLimits

0xbb93,	// (0x00097330) main_cam5_pane_t3

0xbba5,	// (0x00097342) main_cam5_pane_t4_ParamLimits

0xbba5,	// (0x00097342) main_cam5_pane_t4

0xbbbd,	// (0x0009735a) main_cam5_pane_t5_ParamLimits

0xbbbd,	// (0x0009735a) main_cam5_pane_t5

0xbbd1,	// (0x0009736e) main_cam5_pane_t6_ParamLimits

0xbbd1,	// (0x0009736e) main_cam5_pane_t6

0xbbe5,	// (0x00097382) main_cam5_pane_t7_ParamLimits

0xbbe5,	// (0x00097382) main_cam5_pane_t7

0xbbf7,	// (0x00097394) main_cam5_pane_t8_ParamLimits

0xbbf7,	// (0x00097394) main_cam5_pane_t8

0xbc13,	// (0x000973b0) main_cam5_pane_t9_ParamLimits

0xbc13,	// (0x000973b0) main_cam5_pane_t9

0xbc25,	// (0x000973c2) main_cam5_pane_t10_ParamLimits

0xbc25,	// (0x000973c2) main_cam5_pane_t10

0xbc37,	// (0x000973d4) main_cam5_pane_t11_ParamLimits

0xbc37,	// (0x000973d4) main_cam5_pane_t11

0xbc49,	// (0x000973e6) main_cam5_pane_t12_ParamLimits

0xbc49,	// (0x000973e6) main_cam5_pane_t12

0xbc5e,	// (0x000973fb) main_cam5_pane_t13_ParamLimits

0xbc5e,	// (0x000973fb) main_cam5_pane_t13

0x000c,

0xf8ac,	// (0x0009b049) main_cam5_pane_t_ParamLimits

0xf8ac,	// (0x0009b049) main_cam5_pane_t

0x100e,	// (0x0008c7ab) popup_scut_keymap_window_ParamLimits

0x100e,	// (0x0008c7ab) popup_scut_keymap_window

0x7047,	// (0x000927e4) aid_size_cell_brow_shortcut

0xe526,	// (0x00099cc3) bg_popup_window_pane_cp010

0x7053,	// (0x000927f0) grid_scut_pane

0x705f,	// (0x000927fc) cell_scut_pane_ParamLimits

0x705f,	// (0x000927fc) cell_scut_pane

0x7076,	// (0x00092813) cell_scut_pane_g1

0xbc7b,	// (0x00097418) cell_scut_pane_t1

0xbc8a,	// (0x00097427) cell_scut_pane_t2

0x707f,	// (0x0009281c) cell_scut_pane_t3

0x0002,

0xf8c7,	// (0x0009b064) cell_scut_pane_t

0x4fed,	// (0x0009078a) main_mup3_pane_g8_ParamLimits

0x4fed,	// (0x0009078a) main_mup3_pane_g8

0x62b3,	// (0x00091a50) area_vitu2_query_pane_ParamLimits

0x62b3,	// (0x00091a50) area_vitu2_query_pane

0x6dd9,	// (0x00092576) input_focus_pane_cp08

0xbc99,	// (0x00097436) area_vitu2_query_pane_g1

0x708d,	// (0x0009282a) area_vitu2_query_pane_g2

0x0001,

0xf8ce,	// (0x0009b06b) area_vitu2_query_pane_g

0x709c,	// (0x00092839) area_vitu2_query_pane_t1_ParamLimits

0x709c,	// (0x00092839) area_vitu2_query_pane_t1

0x70b0,	// (0x0009284d) area_vitu2_query_pane_t2_ParamLimits

0x70b0,	// (0x0009284d) area_vitu2_query_pane_t2

0x70c4,	// (0x00092861) area_vitu2_query_pane_t3_ParamLimits

0x70c4,	// (0x00092861) area_vitu2_query_pane_t3

0xbca5,	// (0x00097442) area_vitu2_query_pane_t4_ParamLimits

0xbca5,	// (0x00097442) area_vitu2_query_pane_t4

0xbccd,	// (0x0009746a) area_vitu2_query_pane_t5_ParamLimits

0xbccd,	// (0x0009746a) area_vitu2_query_pane_t5

0xbcf5,	// (0x00097492) area_vitu2_query_pane_t6_ParamLimits

0xbcf5,	// (0x00097492) area_vitu2_query_pane_t6

0x0006,

0xf8d3,	// (0x0009b070) area_vitu2_query_pane_t_ParamLimits

0xf8d3,	// (0x0009b070) area_vitu2_query_pane_t

0x70ec,	// (0x00092889) bg_button_pane_cp018

0x70f8,	// (0x00092895) bg_button_pane_cp021

0x7104,	// (0x000928a1) bg_button_pane_cp022

0x7123,	// (0x000928c0) input_focus_pane_cp09

0xedb0,	// (0x0009a54d) aid_size_touch_mv_arrow_left

0xedd9,	// (0x0009a576) aid_size_touch_mv_arrow_right

0x693b,	// (0x000920d8) main_cset_slider_pane_g16_ParamLimits

0x693b,	// (0x000920d8) main_cset_slider_pane_g16

0x6947,	// (0x000920e4) main_cset_slider_pane_g17_ParamLimits

0x6947,	// (0x000920e4) main_cset_slider_pane_g17

0x7034,	// (0x000927d1) cell_cam4_burst_pane_g1_ParamLimits

0xdc01,	// (0x0009939e) compa_mode_pane

0x6b11,	// (0x000922ae) popup_vtel_slider_window_g3_ParamLimits

0x6b11,	// (0x000922ae) popup_vtel_slider_window_g3

0x6b28,	// (0x000922c5) popup_vtel_slider_window_g4_ParamLimits

0x6b28,	// (0x000922c5) popup_vtel_slider_window_g4

0x6b3f,	// (0x000922dc) popup_vtel_slider_window_t1_ParamLimits

0x6b3f,	// (0x000922dc) popup_vtel_slider_window_t1

0x9e57,	// (0x000955f4) main_cl_pane

0xa788,	// (0x00095f25) popup_imed_adjust2_window_ParamLimits

0x2f00,	// (0x0008e69d) bg_tb_trans_pane_cp05_ParamLimits

0xb16f,	// (0x0009690c) popup_imed_adjust2_window_g1_ParamLimits

0xb17e,	// (0x0009691b) popup_imed_adjust2_window_g2_ParamLimits

0xb17e,	// (0x0009691b) popup_imed_adjust2_window_g2

0xb18a,	// (0x00096927) popup_imed_adjust2_window_g3_ParamLimits

0xb18a,	// (0x00096927) popup_imed_adjust2_window_g3

0x0002,

0xf653,	// (0x0009adf0) popup_imed_adjust2_window_g_ParamLimits

0xf653,	// (0x0009adf0) popup_imed_adjust2_window_g

0xb196,	// (0x00096933) popup_imed_adjust2_window_t1_ParamLimits

0xb1ae,	// (0x0009694b) slider_imed_adjust_pane_ParamLimits

0xb1c2,	// (0x0009695f) slider_imed_adjust_pane_g1_ParamLimits

0xb1d2,	// (0x0009696f) slider_imed_adjust_pane_g2_ParamLimits

0xb1e2,	// (0x0009697f) slider_imed_adjust_pane_g3_ParamLimits

0xb1f3,	// (0x00096990) slider_imed_adjust_pane_g4_ParamLimits

0xf65a,	// (0x0009adf7) slider_imed_adjust_pane_g_ParamLimits

0x603c,	// (0x000917d9) aid_touch_area_cam4_ParamLimits

0x603c,	// (0x000917d9) aid_touch_area_cam4

0xda0d,	// (0x000991aa) battery_pane_cp01

0x610b,	// (0x000918a8) main_camera4_pane_g6_ParamLimits

0x610b,	// (0x000918a8) main_camera4_pane_g6

0x6135,	// (0x000918d2) main_camera4_pane_t2_ParamLimits

0x6135,	// (0x000918d2) main_camera4_pane_t2

0x0001,

0xf752,	// (0x0009aeef) main_camera4_pane_t_ParamLimits

0xf752,	// (0x0009aeef) main_camera4_pane_t

0x616a,	// (0x00091907) aid_touch_area_vid4_ParamLimits

0x616a,	// (0x00091907) aid_touch_area_vid4

0x61be,	// (0x0009195b) main_video4_pane_g5_ParamLimits

0x61be,	// (0x0009195b) main_video4_pane_g5

0x61e3,	// (0x00091980) vid4_progress_pane_ParamLimits

0x61e3,	// (0x00091980) vid4_progress_pane

0xb95b,	// (0x000970f8) main_cset_slider_pane_g18_ParamLimits

0xb95b,	// (0x000970f8) main_cset_slider_pane_g18

0xbb63,	// (0x00097300) cell_cam4_burst_pane_g2_ParamLimits

0xbb63,	// (0x00097300) cell_cam4_burst_pane_g2

0x0001,

0xf8a7,	// (0x0009b044) cell_cam4_burst_pane_g_ParamLimits

0xf8a7,	// (0x0009b044) cell_cam4_burst_pane_g

0xe374,	// (0x00099b11) bg_cl_pane_ParamLimits

0xe374,	// (0x00099b11) bg_cl_pane

0x7133,	// (0x000928d0) cl_header_pane_ParamLimits

0x7133,	// (0x000928d0) cl_header_pane

0x7147,	// (0x000928e4) cl_listscroll_pane_ParamLimits

0x7147,	// (0x000928e4) cl_listscroll_pane

0xbd41,	// (0x000974de) bg_cl_pane_g1

0xbd49,	// (0x000974e6) bg_cl_pane_g2

0xbd51,	// (0x000974ee) bg_cl_pane_g3

0xbd59,	// (0x000974f6) bg_cl_pane_g4

0xbd61,	// (0x000974fe) bg_cl_pane_g5

0xbd69,	// (0x00097506) bg_cl_pane_g6

0xbd71,	// (0x0009750e) bg_cl_pane_g7

0xbd79,	// (0x00097516) bg_cl_pane_g8

0xbd81,	// (0x0009751e) bg_cl_pane_g9

0x0008,

0xf8e2,	// (0x0009b07f) bg_cl_pane_g

0x7157,	// (0x000928f4) aid_height_cl_leading_ParamLimits

0x7157,	// (0x000928f4) aid_height_cl_leading

0x7163,	// (0x00092900) aid_height_cl_text_ParamLimits

0x7163,	// (0x00092900) aid_height_cl_text

0xe29b,	// (0x00099a38) bg_cl_header_pane_ParamLimits

0xe29b,	// (0x00099a38) bg_cl_header_pane

0x7182,	// (0x0009291f) cl_header_pane_g1_ParamLimits

0x7182,	// (0x0009291f) cl_header_pane_g1

0x7198,	// (0x00092935) cl_header_pane_t1_ParamLimits

0x7198,	// (0x00092935) cl_header_pane_t1

0xbd89,	// (0x00097526) cl_list_pane

0xb92e,	// (0x000970cb) hc_scroll_pane_cp01

0xe74d,	// (0x00099eea) bg_cl_header_pane_g1

0xb814,	// (0x00096fb1) bg_cl_header_pane_g2

0xe76d,	// (0x00099f0a) bg_cl_header_pane_g3

0xb824,	// (0x00096fc1) bg_cl_header_pane_g4

0xb81c,	// (0x00096fb9) bg_cl_header_pane_g5

0xba72,	// (0x0009720f) bg_cl_header_pane_g6

0xb83c,	// (0x00096fd9) bg_cl_header_pane_g7

0xb844,	// (0x00096fe1) bg_cl_header_pane_g8

0xb834,	// (0x00096fd1) bg_cl_header_pane_g9

0x0008,

0xf8f5,	// (0x0009b092) bg_cl_header_pane_g

0x71b1,	// (0x0009294e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71b1,	// (0x0009294e) hc_cl_list_double_graphic_heading_pane

0x71c2,	// (0x0009295f) hc_cl_list_single_graphic_pane_ParamLimits

0x71c2,	// (0x0009295f) hc_cl_list_single_graphic_pane

0x71d8,	// (0x00092975) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x71d8,	// (0x00092975) hc_cl_list_single_graphic_pane_g1

0x71e4,	// (0x00092981) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x71e4,	// (0x00092981) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf908,	// (0x0009b0a5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf908,	// (0x0009b0a5) hc_cl_list_single_graphic_pane_g

0x71f8,	// (0x00092995) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x71f8,	// (0x00092995) hc_cl_list_single_graphic_pane_t1

0x71d8,	// (0x00092975) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x71d8,	// (0x00092975) hc_cl_list_double_graphic_heading_pane_g1

0x720d,	// (0x000929aa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x720d,	// (0x000929aa) hc_cl_list_double_graphic_heading_pane_g2

0x7221,	// (0x000929be) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7221,	// (0x000929be) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf90d,	// (0x0009b0aa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf90d,	// (0x0009b0aa) hc_cl_list_double_graphic_heading_pane_g

0x7235,	// (0x000929d2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7235,	// (0x000929d2) hc_cl_list_double_graphic_heading_pane_t1

0x724a,	// (0x000929e7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x724a,	// (0x000929e7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf914,	// (0x0009b0b1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf914,	// (0x0009b0b1) hc_cl_list_double_graphic_heading_pane_t

0xdb79,	// (0x00099316) vid4_progress_pane_g1

0xdb89,	// (0x00099326) vid4_progress_pane_g2

0x725f,	// (0x000929fc) vid4_progress_pane_g3

0xdb99,	// (0x00099336) vid4_progress_pane_g4

0x0004,

0xf919,	// (0x0009b0b6) vid4_progress_pane_g

0x7271,	// (0x00092a0e) vid4_progress_pane_t1

0xdbb1,	// (0x0009934e) vid4_progress_pane_t2

0x0002,

0xf924,	// (0x0009b0c1) vid4_progress_pane_t

0x7289,	// (0x00092a26) wait_bar_pane_cp07

0xaa7a,	// (0x00096217) blid_firmament_pane_ParamLimits

0xaabd,	// (0x0009625a) popup_blid_sat_info2_window_g1

0xaae1,	// (0x0009627e) popup_blid_sat_info2_window_t3

0xaaef,	// (0x0009628c) popup_blid_sat_info2_window_t4

0xaafd,	// (0x0009629a) popup_blid_sat_info2_window_t5

0xab0b,	// (0x000962a8) popup_blid_sat_info2_window_t6

0xab1b,	// (0x000962b8) popup_blid_sat_info2_window_t7

0xab29,	// (0x000962c6) popup_blid_sat_info2_window_t8

0xab37,	// (0x000962d4) popup_blid_sat_info2_window_t9

0xab45,	// (0x000962e2) popup_blid_sat_info2_window_t10

0xac06,	// (0x000963a3) aid_firma_cardinal_ParamLimits

0xac1a,	// (0x000963b7) blid_firmament_pane_t1_ParamLimits

0xac31,	// (0x000963ce) blid_firmament_pane_t2_ParamLimits

0xac48,	// (0x000963e5) blid_firmament_pane_t3_ParamLimits

0xac5f,	// (0x000963fc) blid_firmament_pane_t4_ParamLimits

0xf557,	// (0x0009acf4) blid_firmament_pane_t_ParamLimits

0xac76,	// (0x00096413) blid_sat_info_pane_ParamLimits

0x9e49,	// (0x000955e6) main_cam_set_pane_ParamLimits

0x57d3,	// (0x00090f70) aid_size_cell_colour_35_ParamLimits

0x57f3,	// (0x00090f90) aid_size_cell_colour_112_ParamLimits

0x5813,	// (0x00090fb0) aid_size_cell_effect_ParamLimits

0x2f00,	// (0x0008e69d) bg_tb_trans_pane_cp02_ParamLimits

0xe9aa,	// (0x0009a147) heading_imed_pane_ParamLimits

0x5833,	// (0x00090fd0) listscroll_imed_pane_ParamLimits

0x419a,	// (0x0008f937) popup_call2_audio_first_window_g5_ParamLimits

0x419a,	// (0x0008f937) popup_call2_audio_first_window_g5

0x5c58,	// (0x000913f5) aid_size_touch_image3_arrow_left_ParamLimits

0x5c58,	// (0x000913f5) aid_size_touch_image3_arrow_left

0x5c84,	// (0x00091421) aid_size_touch_image3_arrow_right_ParamLimits

0x5c84,	// (0x00091421) aid_size_touch_image3_arrow_right

0xdbc6,	// (0x00099363) vid4_progress_pane_t3

0x59d8,	// (0x00091175) main_hwr_training_symbol_option_pane_ParamLimits

0x59d8,	// (0x00091175) main_hwr_training_symbol_option_pane

0xb3a8,	// (0x00096b45) popup_hwr_training_preview_window_ParamLimits

0xb3a8,	// (0x00096b45) popup_hwr_training_preview_window

0x59f8,	// (0x00091195) hwr_training_navi_pane_g5_ParamLimits

0x59f8,	// (0x00091195) hwr_training_navi_pane_g5

0xb802,	// (0x00096f9f) popup_char_count_window

0x9e49,	// (0x000955e6) bg_popup_sub_pane_cp20_ParamLimits

0x6c4f,	// (0x000923ec) list_vitu2_match_list_pane_ParamLimits

0x6c5b,	// (0x000923f8) vitu2_page_scroll_pane_ParamLimits

0x6c5b,	// (0x000923f8) vitu2_page_scroll_pane

0xbdb4,	// (0x00097551) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbdb4,	// (0x00097551) list_single_hwr_training_symbol_option_pane

0xbdc7,	// (0x00097564) list_single_hwr_training_symbol_option_pane_g1

0xbdcf,	// (0x0009756c) list_single_hwr_training_symbol_option_pane_t1

0xbddd,	// (0x0009757a) bg_button_pane_cp023

0xbde6,	// (0x00097583) bg_button_pane_cp024

0xbe19,	// (0x000975b6) vitu2_page_scroll_pane_g1

0xbe21,	// (0x000975be) vitu2_page_scroll_pane_g2

0x0001,

0xf92b,	// (0x0009b0c8) vitu2_page_scroll_pane_g

0xbe29,	// (0x000975c6) vitu2_page_scroll_pane_t1

0xa9d8,	// (0x00096175) popup_char_count_window_g1

0xbe38,	// (0x000975d5) popup_char_count_window_g2

0xbe41,	// (0x000975de) popup_char_count_window_g3

0x0002,

0xf930,	// (0x0009b0cd) popup_char_count_window_g

0xbe4a,	// (0x000975e7) popup_char_count_window_t1

0x9e57,	// (0x000955f4) main_vded2_pane

0xb15b,	// (0x000968f8) aid_size_cell_imed_line

0xb165,	// (0x00096902) grid_imed_line_width_pane

0xdac5,	// (0x00099262) vid4_indicators_pane_g4

0xbe58,	// (0x000975f5) cell_imed_line_width_pane_ParamLimits

0xbe58,	// (0x000975f5) cell_imed_line_width_pane

0xbe6c,	// (0x00097609) cell_imed_line_width_pane_g1

0xbe75,	// (0x00097612) cell_imed_line_width_pane_g2

0x0001,

0xf937,	// (0x0009b0d4) cell_imed_line_width_pane_g

0x72b0,	// (0x00092a4d) main_vded2_pane_g1_ParamLimits

0x72b0,	// (0x00092a4d) main_vded2_pane_g1

0x72c6,	// (0x00092a63) main_vded2_pane_g2_ParamLimits

0x72c6,	// (0x00092a63) main_vded2_pane_g2

0x0001,

0xf93c,	// (0x0009b0d9) main_vded2_pane_g_ParamLimits

0xf93c,	// (0x0009b0d9) main_vded2_pane_g

0x72d8,	// (0x00092a75) vded2_slider_pane_ParamLimits

0x72d8,	// (0x00092a75) vded2_slider_pane

0x72e8,	// (0x00092a85) aid_size_touch_vded2_end

0x72f2,	// (0x00092a8f) aid_size_touch_vded2_playhead

0xbe7d,	// (0x0009761a) aid_size_touch_vded2_start

0xbe85,	// (0x00097622) vded2_slider_bg_pane

0xbe8e,	// (0x0009762b) vded2_slider_pane_g1

0xbe97,	// (0x00097634) vded2_slider_pane_g2

0x72fc,	// (0x00092a99) vded2_slider_pane_g3

0x0002,

0xf941,	// (0x0009b0de) vded2_slider_pane_g

0xbe9f,	// (0x0009763c) vded2_slider_bg_pane_g1

0xbea8,	// (0x00097645) vded2_slider_bg_pane_g2

0xbeb1,	// (0x0009764e) vded2_slider_bg_pane_g3

0x0002,

0xf948,	// (0x0009b0e5) vded2_slider_bg_pane_g

0x3347,	// (0x0008eae4) aid_postcard_touch_down_pane_ParamLimits

0x3347,	// (0x0008eae4) aid_postcard_touch_down_pane

0x335d,	// (0x0008eafa) aid_postcard_touch_up_pane_ParamLimits

0x335d,	// (0x0008eafa) aid_postcard_touch_up_pane

0x9e57,	// (0x000955f4) main_blid2_pane

0xa76e,	// (0x00095f0b) popup_blid2_search_window

0xdc01,	// (0x0009939e) blid2_gps_pane

0xdc01,	// (0x0009939e) blid2_navig_pane

0xdc01,	// (0x0009939e) blid2_search_pane

0xdc01,	// (0x0009939e) blid2_tripm_pane

0x7307,	// (0x00092aa4) blid2_search_pane_g1_ParamLimits

0x7307,	// (0x00092aa4) blid2_search_pane_g1

0x7321,	// (0x00092abe) blid2_search_pane_t1_ParamLimits

0x7321,	// (0x00092abe) blid2_search_pane_t1

0x7333,	// (0x00092ad0) aid_size_cell_blid2_gps_ParamLimits

0x7333,	// (0x00092ad0) aid_size_cell_blid2_gps

0x734b,	// (0x00092ae8) blid2_gps_pane_g1_ParamLimits

0x734b,	// (0x00092ae8) blid2_gps_pane_g1

0x735f,	// (0x00092afc) grid_blid2_satellite_pane_ParamLimits

0x735f,	// (0x00092afc) grid_blid2_satellite_pane

0x7379,	// (0x00092b16) blid2_navig_pane_g1_ParamLimits

0x7379,	// (0x00092b16) blid2_navig_pane_g1

0x7385,	// (0x00092b22) blid2_navig_pane_t1_ParamLimits

0x7385,	// (0x00092b22) blid2_navig_pane_t1

0x73a0,	// (0x00092b3d) blid2_navig_pane_t2_ParamLimits

0x73a0,	// (0x00092b3d) blid2_navig_pane_t2

0x0001,

0xf94f,	// (0x0009b0ec) blid2_navig_pane_t_ParamLimits

0xf94f,	// (0x0009b0ec) blid2_navig_pane_t

0x73bb,	// (0x00092b58) blid2_navig_ring_pane_ParamLimits

0x73bb,	// (0x00092b58) blid2_navig_ring_pane

0x73d4,	// (0x00092b71) blid2_speed_pane_ParamLimits

0x73d4,	// (0x00092b71) blid2_speed_pane

0x73e0,	// (0x00092b7d) blid2_tripm_pane_g1_ParamLimits

0x73e0,	// (0x00092b7d) blid2_tripm_pane_g1

0x73f9,	// (0x00092b96) blid2_tripm_pane_g2_ParamLimits

0x73f9,	// (0x00092b96) blid2_tripm_pane_g2

0x740d,	// (0x00092baa) blid2_tripm_pane_g3_ParamLimits

0x740d,	// (0x00092baa) blid2_tripm_pane_g3

0x7421,	// (0x00092bbe) blid2_tripm_pane_g4_ParamLimits

0x7421,	// (0x00092bbe) blid2_tripm_pane_g4

0x7435,	// (0x00092bd2) blid2_tripm_pane_g5_ParamLimits

0x7435,	// (0x00092bd2) blid2_tripm_pane_g5

0x0005,

0xf954,	// (0x0009b0f1) blid2_tripm_pane_g_ParamLimits

0xf954,	// (0x0009b0f1) blid2_tripm_pane_g

0x745b,	// (0x00092bf8) blid2_tripm_pane_t1_ParamLimits

0x745b,	// (0x00092bf8) blid2_tripm_pane_t1

0x7476,	// (0x00092c13) blid2_tripm_pane_t2_ParamLimits

0x7476,	// (0x00092c13) blid2_tripm_pane_t2

0x748f,	// (0x00092c2c) blid2_tripm_pane_t3_ParamLimits

0x748f,	// (0x00092c2c) blid2_tripm_pane_t3

0x0003,

0xf961,	// (0x0009b0fe) blid2_tripm_pane_t_ParamLimits

0xf961,	// (0x0009b0fe) blid2_tripm_pane_t

0x74d6,	// (0x00092c73) cell_blid2_satellite_pane_ParamLimits

0x74d6,	// (0x00092c73) cell_blid2_satellite_pane

0x74f4,	// (0x00092c91) cell_blid2_satellite_pane_g1

0xbeba,	// (0x00097657) cell_blid2_satellite_pane_t1

0xe55c,	// (0x00099cf9) blid2_speed_pane_g1

0xbec8,	// (0x00097665) blid2_speed_pane_t1

0xbed6,	// (0x00097673) blid2_speed_pane_t2

0x0001,

0xf96a,	// (0x0009b107) blid2_speed_pane_t

0xe55c,	// (0x00099cf9) blid2_navig_ring_pane_g1

0x74fd,	// (0x00092c9a) blid2_navig_ring_pane_g2

0x7505,	// (0x00092ca2) blid2_navig_ring_pane_g3

0x750d,	// (0x00092caa) blid2_navig_ring_pane_g4

0x7515,	// (0x00092cb2) blid2_navig_ring_pane_g5

0x0004,

0xf96f,	// (0x0009b10c) blid2_navig_ring_pane_g

0xdc01,	// (0x0009939e) bg_popup_window_pane_cp011

0xbee4,	// (0x00097681) popup_blid2_search_window_g1

0xbeec,	// (0x00097689) popup_blid2_search_window_t1

0xbefa,	// (0x00097697) popup_blid2_search_window_t2

0x0001,

0xf97a,	// (0x0009b117) popup_blid2_search_window_t

0xe65c,	// (0x00099df9) main_browser_pane_g1

0xe374,	// (0x00099b11) main_browser_pane_ParamLimits

0x9e49,	// (0x000955e6) bg_button_pane_cp011_ParamLimits

0x6512,	// (0x00091caf) cell_vitu2_function_pane_g1_ParamLimits

0x2f00,	// (0x0008e69d) bg_popup_sub_pane_cp22_ParamLimits

0x6dd9,	// (0x00092576) input_focus_pane_cp08_ParamLimits

0x6df4,	// (0x00092591) popup_vitu2_query_button_pane_ParamLimits

0x6df4,	// (0x00092591) popup_vitu2_query_button_pane

0x6e03,	// (0x000925a0) popup_vitu2_query_input_button_pane

0xbaad,	// (0x0009724a) popup_vitu2_query_window_g1_ParamLimits

0x6e0b,	// (0x000925a8) popup_vitu2_query_window_g2_ParamLimits

0xf87b,	// (0x0009b018) popup_vitu2_query_window_g_ParamLimits

0xdc01,	// (0x0009939e) bg_button_pane_cp026

0x751d,	// (0x00092cba) popup_vitu2_query_input_button_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp025

0xbf08,	// (0x000976a5) popup_vitu2_query_button_pane_t1

0x4c82,	// (0x0009041f) main_mp3_pane_t6

0x4c90,	// (0x0009042d) popup_slider_window_cp01

0xda29,	// (0x000991c6) cam4_battery_pane

0xda82,	// (0x0009921f) cam4_battery_pane_cp02

0xdb71,	// (0x0009930e) cam4_battery_pane_cp01

0xdb71,	// (0x0009930e) cam4_battery_pane_cp03

0xa9e1,	// (0x0009617e) cam4_battery_pane_g1

0xe55c,	// (0x00099cf9) cam4_battery_pane_g2

0x0001,

0xf97f,	// (0x0009b11c) cam4_battery_pane_g

0xab53,	// (0x000962f0) popup_blid_sat_info2_window_t11

0xedb0,	// (0x0009a54d) aid_size_touch_mv_arrow_left_ParamLimits

0xedd9,	// (0x0009a576) aid_size_touch_mv_arrow_right_ParamLimits

0xee37,	// (0x0009a5d4) navi_pane_g1_ParamLimits

0xee43,	// (0x0009a5e0) navi_pane_g2_ParamLimits

0xee71,	// (0x0009a60e) navi_pane_g3_ParamLimits

0x01d9,	// (0x0008b976) navi_pane_g_ParamLimits

0x2e86,	// (0x0008e623) navi_pane_mv_t1_ParamLimits

0x583f,	// (0x00090fdc) grid_imed_effect_pane_ParamLimits

0x1c15,	// (0x0008d3b2) aid_placing_vt_slider_lsc

0xe5ab,	// (0x00099d48) aid_placing_vt_slider_prt

0xe29b,	// (0x00099a38) bg_tb_trans_pane_cp01_ParamLimits

0xadd3,	// (0x00096570) popup_image_details_window_g1_ParamLimits

0xade6,	// (0x00096583) popup_image_details_window_g2_ParamLimits

0xadfb,	// (0x00096598) popup_image_details_window_g3_ParamLimits

0xadfb,	// (0x00096598) popup_image_details_window_g3

0xf58c,	// (0x0009ad29) popup_image_details_window_g_ParamLimits

0xae0f,	// (0x000965ac) popup_image_details_window_t1_ParamLimits

0xae21,	// (0x000965be) popup_image_details_window_t2_ParamLimits

0xae3a,	// (0x000965d7) popup_image_details_window_t3_ParamLimits

0xae4e,	// (0x000965eb) popup_image_details_window_t4_ParamLimits

0xae69,	// (0x00096606) popup_image_details_window_t5_ParamLimits

0xf593,	// (0x0009ad30) popup_image_details_window_t_ParamLimits

0x716f,	// (0x0009290c) cl_header_name_pane_ParamLimits

0x716f,	// (0x0009290c) cl_header_name_pane

0x7525,	// (0x00092cc2) cl_header_name_pane_t1_ParamLimits

0x7525,	// (0x00092cc2) cl_header_name_pane_t1

0x7546,	// (0x00092ce3) cl_header_name_pane_t2_ParamLimits

0x7546,	// (0x00092ce3) cl_header_name_pane_t2

0x7588,	// (0x00092d25) cl_header_name_pane_t3_ParamLimits

0x7588,	// (0x00092d25) cl_header_name_pane_t3

0x0002,

0xf984,	// (0x0009b121) cl_header_name_pane_t_ParamLimits

0xf984,	// (0x0009b121) cl_header_name_pane_t

0xef00,	// (0x0009a69d) navi_pane_mv_g2_ParamLimits

0xb7cd,	// (0x00096f6a) field_vitu2_entry_pane_g1_ParamLimits

0xb7d9,	// (0x00096f76) field_vitu2_entry_pane_g2_ParamLimits

0xf05d,	// (0x0009a7fa) field_vitu2_entry_pane_g3_ParamLimits

0xf05d,	// (0x0009a7fa) field_vitu2_entry_pane_g3

0xf784,	// (0x0009af21) field_vitu2_entry_pane_g_ParamLimits

0x648e,	// (0x00091c2b) cell_vitu2_itu_pane_g1_ParamLimits

0x64a6,	// (0x00091c43) cell_vitu2_itu_pane_g2_ParamLimits

0x64a6,	// (0x00091c43) cell_vitu2_itu_pane_g2

0x0001,

0xf790,	// (0x0009af2d) cell_vitu2_itu_pane_g_ParamLimits

0xf790,	// (0x0009af2d) cell_vitu2_itu_pane_g

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp05_ParamLimits

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp05

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp03

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp04

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp10_ParamLimits

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp10

0x7113,	// (0x000928b0) bg_vkb2_func_pane_cp08

0x70ec,	// (0x00092889) bg_vkb2_func_pane_cp06

0x70f8,	// (0x00092895) bg_vkb2_func_pane_cp07

0xbdef,	// (0x0009758c) bg_vkb2_func_pane_cp11_ParamLimits

0xbdef,	// (0x0009758c) bg_vkb2_func_pane_cp11

0xbe04,	// (0x000975a1) bg_vkb2_func_pane_cp12_ParamLimits

0xbe04,	// (0x000975a1) bg_vkb2_func_pane_cp12

0xdc01,	// (0x0009939e) bg_vkb2_func_pane_cp09

0xb814,	// (0x00096fb1) bg_vkb2_func_pane_g1

0xe76d,	// (0x00099f0a) bg_vkb2_func_pane_g2

0xb81c,	// (0x00096fb9) bg_vkb2_func_pane_g3

0xb824,	// (0x00096fc1) bg_vkb2_func_pane_g4

0xba72,	// (0x0009720f) bg_vkb2_func_pane_g5

0xb83c,	// (0x00096fd9) bg_vkb2_func_pane_g6

0xb844,	// (0x00096fe1) bg_vkb2_func_pane_g7

0xb834,	// (0x00096fd1) bg_vkb2_func_pane_g8

0xe74d,	// (0x00099eea) bg_vkb2_func_pane_g9

0x0008,

0xf98b,	// (0x0009b128) bg_vkb2_func_pane_g

0x7449,	// (0x00092be6) blid2_tripm_pane_g6_ParamLimits

0x7449,	// (0x00092be6) blid2_tripm_pane_g6

0xb6df,	// (0x00096e7c) mp4_progress_pane_g1

0x74c2,	// (0x00092c5f) blid2_tripm_values_pane_ParamLimits

0x74c2,	// (0x00092c5f) blid2_tripm_values_pane

0x75b9,	// (0x00092d56) blid2_tripm_values_pane_t1

0x75c7,	// (0x00092d64) blid2_tripm_values_pane_t2

0x75d5,	// (0x00092d72) blid2_tripm_values_pane_t3

0x75e3,	// (0x00092d80) blid2_tripm_values_pane_t4

0x75f1,	// (0x00092d8e) blid2_tripm_values_pane_t5

0x75ff,	// (0x00092d9c) blid2_tripm_values_pane_t6

0x760d,	// (0x00092daa) blid2_tripm_values_pane_t7

0x761b,	// (0x00092db8) blid2_tripm_values_pane_t8

0x7629,	// (0x00092dc6) blid2_tripm_values_pane_t9

0x0008,

0xf99e,	// (0x0009b13b) blid2_tripm_values_pane_t

0x1c57,	// (0x0008d3f4) call_video_pane_t1_ParamLimits

0x1c75,	// (0x0008d412) call_video_pane_t2_ParamLimits

0xf1e9,	// (0x0009a986) call_video_pane_t_ParamLimits

0x3221,	// (0x0008e9be) msg_header_pane_g1_ParamLimits

0x322f,	// (0x0008e9cc) msg_header_pane_g2_ParamLimits

0x322f,	// (0x0008e9cc) msg_header_pane_g2

0x0001,

0xf32d,	// (0x0009aaca) msg_header_pane_g_ParamLimits

0xf32d,	// (0x0009aaca) msg_header_pane_g

0xe374,	// (0x00099b11) main_clock2_pane_ParamLimits

0x5540,	// (0x00090cdd) grid_clock2_toolbar_pane_ParamLimits

0x5540,	// (0x00090cdd) grid_clock2_toolbar_pane

0x5540,	// (0x00090cdd) listscroll_clock2_pane_ParamLimits

0x5540,	// (0x00090cdd) listscroll_clock2_pane

0x5624,	// (0x00090dc1) main_clock2_pane_t3_ParamLimits

0x5624,	// (0x00090dc1) main_clock2_pane_t3

0x5648,	// (0x00090de5) main_clock2_pane_t4_ParamLimits

0x5648,	// (0x00090de5) main_clock2_pane_t4

0xbf16,	// (0x000976b3) cell_clock2_toolbar_pane

0xbf1e,	// (0x000976bb) cell_clock2_toolbar_pane_cp01

0xbf1e,	// (0x000976bb) cell_clock2_toolbar_pane_cp02

0xbf26,	// (0x000976c3) cell_clock2_toolbar_pane_cp03

0xbf2e,	// (0x000976cb) list_clock2_pane

0xed26,	// (0x0009a4c3) scroll_pane_cp10

0xbf36,	// (0x000976d3) list_single_clock2_pane_ParamLimits

0xbf36,	// (0x000976d3) list_single_clock2_pane

0xe526,	// (0x00099cc3) list_highlight_pane_cp08

0xbf43,	// (0x000976e0) list_single_clock2_pane_t1

0xbf51,	// (0x000976ee) list_single_clock2_pane_t2

0x0001,

0xf9b1,	// (0x0009b14e) list_single_clock2_pane_t

0xdc01,	// (0x0009939e) bg_button_pane_cp10

0xbf5f,	// (0x000976fc) cell_clock2_toolbar_pane_g1

0x32c5,	// (0x0008ea62) aid_main_viewer_pane_g1_ParamLimits

0x32c5,	// (0x0008ea62) aid_main_viewer_pane_g1

0x32d3,	// (0x0008ea70) aid_main_viewer_pane_g2_ParamLimits

0x32d3,	// (0x0008ea70) aid_main_viewer_pane_g2

0x32e1,	// (0x0008ea7e) aid_main_viewer_pane_g3_ParamLimits

0x32e1,	// (0x0008ea7e) aid_main_viewer_pane_g3

0x32f0,	// (0x0008ea8d) aid_main_viewer_pane_g4_ParamLimits

0x32f0,	// (0x0008ea8d) aid_main_viewer_pane_g4

0x0003,

0xf33e,	// (0x0009aadb) aid_main_viewer_pane_g_ParamLimits

0xf33e,	// (0x0009aadb) aid_main_viewer_pane_g

0x463f,	// (0x0008fddc) main_calc_pane_ParamLimits

0x4665,	// (0x0008fe02) main_dialer2_pane_ParamLimits

0x9e57,	// (0x000955f4) main_cam6_pane

0x9e57,	// (0x000955f4) main_vid6_pane

0x554c,	// (0x00090ce9) listscroll_gen_pane_cp06_ParamLimits

0x554c,	// (0x00090ce9) listscroll_gen_pane_cp06

0x566b,	// (0x00090e08) main_clock2_pane_t5_ParamLimits

0x566b,	// (0x00090e08) main_clock2_pane_t5

0x56c9,	// (0x00090e66) aid_call2_pane_cp10_ParamLimits

0x56db,	// (0x00090e78) aid_call_pane_cp10_ParamLimits

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56ed,	// (0x00090e8a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56ed,	// (0x00090e8a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeda4,	// (0x0009a541) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf648,	// (0x0009ade5) popup_clock_analogue_window_cp10_g_ParamLimits

0x5703,	// (0x00090ea0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5c05,	// (0x000913a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x5c05,	// (0x000913a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf723,	// (0x0009aec0) cell_dialer2_keypad_pane_g_ParamLimits

0xf723,	// (0x0009aec0) cell_dialer2_keypad_pane_g

0x5c21,	// (0x000913be) cell_dialer2_keypad_pane_t1

0x6835,	// (0x00091fd2) main_cset_text2_pane_ParamLimits

0x6835,	// (0x00091fd2) main_cset_text2_pane

0xbc99,	// (0x00097436) area_vitu2_query_pane_g1_ParamLimits

0x708d,	// (0x0009282a) area_vitu2_query_pane_g2_ParamLimits

0xf8ce,	// (0x0009b06b) area_vitu2_query_pane_g_ParamLimits

0xbd1d,	// (0x000974ba) area_vitu2_query_pane_t7_ParamLimits

0xbd1d,	// (0x000974ba) area_vitu2_query_pane_t7

0x70ec,	// (0x00092889) bg_button_pane_cp018_ParamLimits

0x70f8,	// (0x00092895) bg_button_pane_cp021_ParamLimits

0x7104,	// (0x000928a1) bg_button_pane_cp022_ParamLimits

0x7113,	// (0x000928b0) bg_vkb2_func_pane_cp08_ParamLimits

0x70ec,	// (0x00092889) bg_vkb2_func_pane_cp06_ParamLimits

0x70f8,	// (0x00092895) bg_vkb2_func_pane_cp07_ParamLimits

0x7123,	// (0x000928c0) input_focus_pane_cp09_ParamLimits

0xdbdb,	// (0x00099378) cam6_autofocus_pane_ParamLimits

0xdbdb,	// (0x00099378) cam6_autofocus_pane

0x7637,	// (0x00092dd4) cam6_image_uncrop_pane_ParamLimits

0x7637,	// (0x00092dd4) cam6_image_uncrop_pane

0x7646,	// (0x00092de3) cam6_indi_pane_ParamLimits

0x7646,	// (0x00092de3) cam6_indi_pane

0x765c,	// (0x00092df9) cam6_mode_pane_ParamLimits

0x765c,	// (0x00092df9) cam6_mode_pane

0x766e,	// (0x00092e0b) cam6_timer_pane_ParamLimits

0x766e,	// (0x00092e0b) cam6_timer_pane

0x767a,	// (0x00092e17) cam6_zoom_pane_ParamLimits

0x767a,	// (0x00092e17) cam6_zoom_pane

0x7686,	// (0x00092e23) cam6_mode_pane_g1_ParamLimits

0x7686,	// (0x00092e23) cam6_mode_pane_g1

0x7696,	// (0x00092e33) cam6_mode_pane_g2_ParamLimits

0x7696,	// (0x00092e33) cam6_mode_pane_g2

0x76a6,	// (0x00092e43) cam6_mode_pane_g3_ParamLimits

0x76a6,	// (0x00092e43) cam6_mode_pane_g3

0x76b6,	// (0x00092e53) cam6_mode_pane_g4_ParamLimits

0x76b6,	// (0x00092e53) cam6_mode_pane_g4

0x0003,

0xf9b6,	// (0x0009b153) cam6_mode_pane_g_ParamLimits

0xf9b6,	// (0x0009b153) cam6_mode_pane_g

0xbf67,	// (0x00097704) bg_tb_trans_pane_cp08_ParamLimits

0xbf67,	// (0x00097704) bg_tb_trans_pane_cp08

0xbf75,	// (0x00097712) cam6_battery_pane_ParamLimits

0xbf75,	// (0x00097712) cam6_battery_pane

0xbf8b,	// (0x00097728) cam6_indi_pane_g1_ParamLimits

0xbf8b,	// (0x00097728) cam6_indi_pane_g1

0xbf9d,	// (0x0009773a) cam6_indi_pane_g2_ParamLimits

0xbf9d,	// (0x0009773a) cam6_indi_pane_g2

0xbfaf,	// (0x0009774c) cam6_indi_pane_g3_ParamLimits

0xbfaf,	// (0x0009774c) cam6_indi_pane_g3

0x0002,

0xf9bf,	// (0x0009b15c) cam6_indi_pane_g_ParamLimits

0xf9bf,	// (0x0009b15c) cam6_indi_pane_g

0xbfc1,	// (0x0009775e) cam6_indi_pane_t1_ParamLimits

0xbfc1,	// (0x0009775e) cam6_indi_pane_t1

0x76c6,	// (0x00092e63) cam6_autofocus_pane_g1

0x76ce,	// (0x00092e6b) cam6_autofocus_pane_g2

0x76d6,	// (0x00092e73) cam6_autofocus_pane_g3

0x76de,	// (0x00092e7b) cam6_autofocus_pane_g4

0x0003,

0xf9c6,	// (0x0009b163) cam6_autofocus_pane_g

0xbfe7,	// (0x00097784) cam6_timer_pane_g1

0xbfef,	// (0x0009778c) cam6_timer_pane_t1

0xbffd,	// (0x0009779a) cam6_zoom_cont_pane

0xc005,	// (0x000977a2) cam6_zoom_pane_g1

0xc00d,	// (0x000977aa) cam6_zoom_pane_g2

0x76e6,	// (0x00092e83) cam6_zoom_pane_g3

0x0002,

0xf9cf,	// (0x0009b16c) cam6_zoom_pane_g

0xe55c,	// (0x00099cf9) cam6_battery_pane_g1

0xe55c,	// (0x00099cf9) cam6_battery_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) cam6_battery_pane_g

0xc015,	// (0x000977b2) cam6_zoom_cont_pane_g1

0xc01e,	// (0x000977bb) cam6_zoom_cont_pane_g2

0xc027,	// (0x000977c4) cam6_zoom_cont_pane_g3

0x0002,

0xf9d6,	// (0x0009b173) cam6_zoom_cont_pane_g

0x7700,	// (0x00092e9d) cam6_mode_pane_cp_ParamLimits

0x7700,	// (0x00092e9d) cam6_mode_pane_cp

0x7712,	// (0x00092eaf) cam6_zoom_pane_cp_ParamLimits

0x7712,	// (0x00092eaf) cam6_zoom_pane_cp

0x771e,	// (0x00092ebb) vid6_image_uncrop_cif_pane_ParamLimits

0x771e,	// (0x00092ebb) vid6_image_uncrop_cif_pane

0x772e,	// (0x00092ecb) vid6_image_uncrop_nhd_pane_ParamLimits

0x772e,	// (0x00092ecb) vid6_image_uncrop_nhd_pane

0x773d,	// (0x00092eda) vid6_image_uncrop_vga_pane_ParamLimits

0x773d,	// (0x00092eda) vid6_image_uncrop_vga_pane

0x774c,	// (0x00092ee9) vid6_image_uncrop_wvga_pane_ParamLimits

0x774c,	// (0x00092ee9) vid6_image_uncrop_wvga_pane

0x775b,	// (0x00092ef8) vid6_indi_pane_ParamLimits

0x775b,	// (0x00092ef8) vid6_indi_pane

0xbf67,	// (0x00097704) bg_tb_trans_pane_cp09_ParamLimits

0xbf67,	// (0x00097704) bg_tb_trans_pane_cp09

0xc03f,	// (0x000977dc) cam6_battery_pane_cp_ParamLimits

0xc03f,	// (0x000977dc) cam6_battery_pane_cp

0xc04b,	// (0x000977e8) vid6_indi_pane_g1_ParamLimits

0xc04b,	// (0x000977e8) vid6_indi_pane_g1

0xc05d,	// (0x000977fa) vid6_indi_pane_g2_ParamLimits

0xc05d,	// (0x000977fa) vid6_indi_pane_g2

0xc06f,	// (0x0009780c) vid6_indi_pane_g3_ParamLimits

0xc06f,	// (0x0009780c) vid6_indi_pane_g3

0xc084,	// (0x00097821) vid6_indi_pane_g4_ParamLimits

0xc084,	// (0x00097821) vid6_indi_pane_g4

0xc099,	// (0x00097836) vid6_indi_pane_g5_ParamLimits

0xc099,	// (0x00097836) vid6_indi_pane_g5

0x0004,

0xf9dd,	// (0x0009b17a) vid6_indi_pane_g_ParamLimits

0xf9dd,	// (0x0009b17a) vid6_indi_pane_g

0xc0b3,	// (0x00097850) vid6_indi_pane_t1_ParamLimits

0xc0b3,	// (0x00097850) vid6_indi_pane_t1

0xc0c9,	// (0x00097866) vid6_indi_pane_t2_ParamLimits

0xc0c9,	// (0x00097866) vid6_indi_pane_t2

0xc0f1,	// (0x0009788e) vid6_indi_pane_t3_ParamLimits

0xc0f1,	// (0x0009788e) vid6_indi_pane_t3

0xc119,	// (0x000978b6) vid6_indi_pane_t4_ParamLimits

0xc119,	// (0x000978b6) vid6_indi_pane_t4

0x0003,

0xf9e8,	// (0x0009b185) vid6_indi_pane_t_ParamLimits

0xf9e8,	// (0x0009b185) vid6_indi_pane_t

0xc13d,	// (0x000978da) wait_bar_pane_cp08

0x7773,	// (0x00092f10) main_cset_text2_pane_t1_ParamLimits

0x7773,	// (0x00092f10) main_cset_text2_pane_t1

0x76ee,	// (0x00092e8b) listscroll_gen_pane_cp06_t1_ParamLimits

0x76ee,	// (0x00092e8b) listscroll_gen_pane_cp06_t1

0x9e57,	// (0x000955f4) main_cam6_set_pane

0xb7a8,	// (0x00096f45) bg_tb_trans_pane_cp06_ParamLimits

0xda31,	// (0x000991ce) cam4_indicators_pane_g1_ParamLimits

0xda42,	// (0x000991df) cam4_indicators_pane_g2_ParamLimits

0xf760,	// (0x0009aefd) cam4_indicators_pane_g_ParamLimits

0xda60,	// (0x000991fd) cam4_indicators_pane_t1_ParamLimits

0x9e49,	// (0x000955e6) bg_tb_trans_pane_cp07_ParamLimits

0xda8c,	// (0x00099229) vid4_indicators_pane_g1_ParamLimits

0xdaa0,	// (0x0009923d) vid4_indicators_pane_g2_ParamLimits

0xdab4,	// (0x00099251) vid4_indicators_pane_g3_ParamLimits

0xdac5,	// (0x00099262) vid4_indicators_pane_g4_ParamLimits

0xf772,	// (0x0009af0f) vid4_indicators_pane_g_ParamLimits

0xdae3,	// (0x00099280) vid4_indicators_pane_t1_ParamLimits

0xdb79,	// (0x00099316) vid4_progress_pane_g1_ParamLimits

0xdb89,	// (0x00099326) vid4_progress_pane_g2_ParamLimits

0x725f,	// (0x000929fc) vid4_progress_pane_g3_ParamLimits

0xdb99,	// (0x00099336) vid4_progress_pane_g4_ParamLimits

0xf919,	// (0x0009b0b6) vid4_progress_pane_g_ParamLimits

0x7271,	// (0x00092a0e) vid4_progress_pane_t1_ParamLimits

0xdbb1,	// (0x0009934e) vid4_progress_pane_t2_ParamLimits

0xdbc6,	// (0x00099363) vid4_progress_pane_t3_ParamLimits

0xf924,	// (0x0009b0c1) vid4_progress_pane_t_ParamLimits

0x7289,	// (0x00092a26) wait_bar_pane_cp07_ParamLimits

0x7790,	// (0x00092f2d) main_cam6_set_pane_g2_ParamLimits

0x7790,	// (0x00092f2d) main_cam6_set_pane_g2

0x77b4,	// (0x00092f51) main_cset6_listscroll_pane_ParamLimits

0x77b4,	// (0x00092f51) main_cset6_listscroll_pane

0x77d4,	// (0x00092f71) main_cset6_slider_pane_ParamLimits

0x77d4,	// (0x00092f71) main_cset6_slider_pane

0x77ea,	// (0x00092f87) main_cset6_text2_pane_ParamLimits

0x77ea,	// (0x00092f87) main_cset6_text2_pane

0xc14c,	// (0x000978e9) main_cset6_text_pane

0xc154,	// (0x000978f1) main_cset_list_pane_copy1_ParamLimits

0xc154,	// (0x000978f1) main_cset_list_pane_copy1

0xc164,	// (0x00097901) scroll_pane_cp028_copy1

0x77f8,	// (0x00092f95) cset_list_set_pane_copy1

0x7809,	// (0x00092fa6) aid_position_infowindow_above_copy1

0x7811,	// (0x00092fae) aid_position_infowindow_below_copy1

0x7819,	// (0x00092fb6) cset_list_set_pane_g1_copy1

0x7821,	// (0x00092fbe) cset_list_set_pane_g3_copy1_ParamLimits

0x7821,	// (0x00092fbe) cset_list_set_pane_g3_copy1

0x7830,	// (0x00092fcd) cset_list_set_pane_t1_copy1_ParamLimits

0x7830,	// (0x00092fcd) cset_list_set_pane_t1_copy1

0xe29b,	// (0x00099a38) list_highlight_pane_cp021_copy1_ParamLimits

0xe29b,	// (0x00099a38) list_highlight_pane_cp021_copy1

0xc16d,	// (0x0009790a) cset6_slider_pane_ParamLimits

0xc16d,	// (0x0009790a) cset6_slider_pane

0xc199,	// (0x00097936) main_cset6_slider_pane_g1_ParamLimits

0xc199,	// (0x00097936) main_cset6_slider_pane_g1

0x7845,	// (0x00092fe2) main_cset6_slider_pane_g2_ParamLimits

0x7845,	// (0x00092fe2) main_cset6_slider_pane_g2

0xc1c1,	// (0x0009795e) main_cset6_slider_pane_g3_ParamLimits

0xc1c1,	// (0x0009795e) main_cset6_slider_pane_g3

0x786d,	// (0x0009300a) main_cset6_slider_pane_g4_ParamLimits

0x786d,	// (0x0009300a) main_cset6_slider_pane_g4

0x7879,	// (0x00093016) main_cset6_slider_pane_g5_ParamLimits

0x7879,	// (0x00093016) main_cset6_slider_pane_g5

0xb943,	// (0x000970e0) main_cset6_slider_pane_g7_ParamLimits

0xb943,	// (0x000970e0) main_cset6_slider_pane_g7

0xb94f,	// (0x000970ec) main_cset6_slider_pane_g8_ParamLimits

0xb94f,	// (0x000970ec) main_cset6_slider_pane_g8

0x68db,	// (0x00092078) main_cset6_slider_pane_g9_ParamLimits

0x68db,	// (0x00092078) main_cset6_slider_pane_g9

0x68e7,	// (0x00092084) main_cset6_slider_pane_g10_ParamLimits

0x68e7,	// (0x00092084) main_cset6_slider_pane_g10

0x68f3,	// (0x00092090) main_cset6_slider_pane_g11_ParamLimits

0x68f3,	// (0x00092090) main_cset6_slider_pane_g11

0x68ff,	// (0x0009209c) main_cset6_slider_pane_g12_ParamLimits

0x68ff,	// (0x0009209c) main_cset6_slider_pane_g12

0x690b,	// (0x000920a8) main_cset6_slider_pane_g13_ParamLimits

0x690b,	// (0x000920a8) main_cset6_slider_pane_g13

0x6917,	// (0x000920b4) main_cset6_slider_pane_g14_ParamLimits

0x6917,	// (0x000920b4) main_cset6_slider_pane_g14

0x7885,	// (0x00093022) main_cset6_slider_pane_g15_ParamLimits

0x7885,	// (0x00093022) main_cset6_slider_pane_g15

0x693b,	// (0x000920d8) main_cset6_slider_pane_g16_ParamLimits

0x693b,	// (0x000920d8) main_cset6_slider_pane_g16

0x6947,	// (0x000920e4) main_cset6_slider_pane_g17_ParamLimits

0x6947,	// (0x000920e4) main_cset6_slider_pane_g17

0x0011,

0xf9f1,	// (0x0009b18e) main_cset6_slider_pane_g_ParamLimits

0xf9f1,	// (0x0009b18e) main_cset6_slider_pane_g

0xc1cd,	// (0x0009796a) main_cset6_slider_pane_t1_ParamLimits

0xc1cd,	// (0x0009796a) main_cset6_slider_pane_t1

0x78b5,	// (0x00093052) main_cset6_slider_pane_t2_ParamLimits

0x78b5,	// (0x00093052) main_cset6_slider_pane_t2

0x78e0,	// (0x0009307d) main_cset6_slider_pane_t3_ParamLimits

0x78e0,	// (0x0009307d) main_cset6_slider_pane_t3

0x790b,	// (0x000930a8) main_cset6_slider_pane_t4_ParamLimits

0x790b,	// (0x000930a8) main_cset6_slider_pane_t4

0x7936,	// (0x000930d3) main_cset6_slider_pane_t5_ParamLimits

0x7936,	// (0x000930d3) main_cset6_slider_pane_t5

0xc20e,	// (0x000979ab) main_cset6_slider_pane_t7_ParamLimits

0xc20e,	// (0x000979ab) main_cset6_slider_pane_t7

0x7961,	// (0x000930fe) main_cset6_slider_pane_t8_ParamLimits

0x7961,	// (0x000930fe) main_cset6_slider_pane_t8

0x7985,	// (0x00093122) main_cset6_slider_pane_t9_ParamLimits

0x7985,	// (0x00093122) main_cset6_slider_pane_t9

0x79a9,	// (0x00093146) main_cset6_slider_pane_t10_ParamLimits

0x79a9,	// (0x00093146) main_cset6_slider_pane_t10

0x79cd,	// (0x0009316a) main_cset6_slider_pane_t11_ParamLimits

0x79cd,	// (0x0009316a) main_cset6_slider_pane_t11

0xc244,	// (0x000979e1) main_cset6_slider_pane_t14_ParamLimits

0xc244,	// (0x000979e1) main_cset6_slider_pane_t14

0xc27d,	// (0x00097a1a) main_cset6_slider_pane_t15_ParamLimits

0xc27d,	// (0x00097a1a) main_cset6_slider_pane_t15

0x000b,

0xfa16,	// (0x0009b1b3) main_cset6_slider_pane_t_ParamLimits

0xfa16,	// (0x0009b1b3) main_cset6_slider_pane_t

0xc2b6,	// (0x00097a53) cset_slider_pane_g1_copy1

0xc2bf,	// (0x00097a5c) cset_slider_pane_g2_copy1

0xc2c8,	// (0x00097a65) cset_slider_pane_g3_copy1

0xdc01,	// (0x0009939e) bg_popup_sub_pane_cp011_copy1

0xc2d1,	// (0x00097a6e) main_cset_text_pane_g1_copy1

0xbac1,	// (0x0009725e) main_cset_text_pane_t1_copy1

0xbacf,	// (0x0009726c) main_cset_text_pane_t2_copy1

0xbadd,	// (0x0009727a) main_cset_text_pane_t3_copy1

0xbaeb,	// (0x00097288) main_cset_text_pane_t4_copy1

0xbaf9,	// (0x00097296) main_cset_text_pane_t5_copy1

0xc2d9,	// (0x00097a76) main_cset_text_pane_t6_copy1

0xc2e7,	// (0x00097a84) main_cset_text_pane_t7_copy1

0x7773,	// (0x00092f10) main_cset_text2_pane_t1_copy1

0x9e49,	// (0x000955e6) main_ncimui_pane

0x48af,	// (0x0009004c) popup_query_ncimui_window_ParamLimits

0x48af,	// (0x0009004c) popup_query_ncimui_window

0xaf0a,	// (0x000966a7) field_cale_ev2_pane_g4_ParamLimits

0xaf0a,	// (0x000966a7) field_cale_ev2_pane_g4

0x5ae5,	// (0x00091282) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ae5,	// (0x00091282) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6fa,	// (0x0009ae97) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6fa,	// (0x0009ae97) cell_video_dialer_keypad_pane_g

0x5afd,	// (0x0009129a) cell_video_dialer_keypad_pane_t1

0xdc01,	// (0x0009939e) bg_popup_window_pane_cp012

0xa6ca,	// (0x00095e67) heading_pane_cp06

0xc313,	// (0x00097ab0) ncim_query_content_pane

0xdc01,	// (0x0009939e) bg_popup_heading_pane_cp01

0xc31b,	// (0x00097ab8) ncim_heading_pane_t1

0xc329,	// (0x00097ac6) ncim_indicator_popup_pane

0xc33b,	// (0x00097ad8) ncim_query_button_pane

0xc34f,	// (0x00097aec) ncim_query_content_pane_t1

0xc361,	// (0x00097afe) ncim_query_content_pane_t2

0x0005,

0xfa4b,	// (0x0009b1e8) ncim_query_content_pane_t

0xc39b,	// (0x00097b38) ncim_query_list_pane

0xc3ad,	// (0x00097b4a) ncim_query_popup_pane

0xc329,	// (0x00097ac6) ncim_indicator_popup_pane_ParamLimits

0x7b37,	// (0x000932d4) ncim_query_content_pane_g1_ParamLimits

0x7b37,	// (0x000932d4) ncim_query_content_pane_g1

0xc34f,	// (0x00097aec) ncim_query_content_pane_t1_ParamLimits

0xc361,	// (0x00097afe) ncim_query_content_pane_t2_ParamLimits

0x7b43,	// (0x000932e0) ncim_query_content_pane_t3_ParamLimits

0x7b43,	// (0x000932e0) ncim_query_content_pane_t3

0x7b6b,	// (0x00093308) ncim_query_content_pane_t4_ParamLimits

0x7b6b,	// (0x00093308) ncim_query_content_pane_t4

0x7b93,	// (0x00093330) ncim_query_content_pane_t5_ParamLimits

0x7b93,	// (0x00093330) ncim_query_content_pane_t5

0xc373,	// (0x00097b10) ncim_query_content_pane_t6_ParamLimits

0xc373,	// (0x00097b10) ncim_query_content_pane_t6

0xfa4b,	// (0x0009b1e8) ncim_query_content_pane_t_ParamLimits

0xc39b,	// (0x00097b38) ncim_query_list_pane_ParamLimits

0xc3ad,	// (0x00097b4a) ncim_query_popup_pane_ParamLimits

0xc3c1,	// (0x00097b5e) wait_bar_pane_cp04

0xdc01,	// (0x0009939e) input_focus_pane_cp011

0xc3c9,	// (0x00097b66) ncim_query_popup_pane_t1

0xc3d7,	// (0x00097b74) ncim_list_query_list_pane_ParamLimits

0xc3d7,	// (0x00097b74) ncim_list_query_list_pane

0xdc01,	// (0x0009939e) bg_button_pane_cp027

0xc3e4,	// (0x00097b81) ncim_query_button_pane_g1

0xdc01,	// (0x0009939e) list_highlight_pane_cp012

0xc3ee,	// (0x00097b8b) ncim_list_query_list_pane_g1

0xc3f6,	// (0x00097b93) ncim_list_query_list_pane_t1

0xda51,	// (0x000991ee) cam4_indicators_pane_g3_ParamLimits

0xda51,	// (0x000991ee) cam4_indicators_pane_g3

0xdad1,	// (0x0009926e) vid4_indicators_pane_g5_ParamLimits

0xdad1,	// (0x0009926e) vid4_indicators_pane_g5

0xdba5,	// (0x00099342) vid4_progress_pane_g5_ParamLimits

0xdba5,	// (0x00099342) vid4_progress_pane_g5

0x7a22,	// (0x000931bf) main_ncimui_pane_g1

0x7a8b,	// (0x00093228) ncimui_group_query_pane_ParamLimits

0x7a8b,	// (0x00093228) ncimui_group_query_pane

0x7ad3,	// (0x00093270) ncimui_list_pane_ParamLimits

0x7ad3,	// (0x00093270) ncimui_list_pane

0x7afa,	// (0x00093297) ncimui_text_pane_ParamLimits

0x7afa,	// (0x00093297) ncimui_text_pane

0x7bbb,	// (0x00093358) ncimui_text_pane_t1_ParamLimits

0x7bbb,	// (0x00093358) ncimui_text_pane_t1

0xc404,	// (0x00097ba1) ncimui_list_single_graphic_pane_ParamLimits

0xc404,	// (0x00097ba1) ncimui_list_single_graphic_pane

0x7bd9,	// (0x00093376) ncimui_query_pane_ParamLimits

0x7bd9,	// (0x00093376) ncimui_query_pane

0xdc01,	// (0x0009939e) list_highlight_pane_cp013

0xc414,	// (0x00097bb1) ncim_list_query_list_pane_t1_copy1

0xc3ee,	// (0x00097b8b) ncim_list_single_graphic_pane_g1

0x7bec,	// (0x00093389) ncim_query_button_pane_cp01

0x7bf8,	// (0x00093395) ncim_query_entry_pane_ParamLimits

0x7bf8,	// (0x00093395) ncim_query_entry_pane

0x7c0b,	// (0x000933a8) ncimui_query_pane_g1

0x7c17,	// (0x000933b4) ncimui_query_pane_t1_ParamLimits

0x7c17,	// (0x000933b4) ncimui_query_pane_t1

0xe29b,	// (0x00099a38) input_focus_pane_cp012

0xc422,	// (0x00097bbf) ncim_query_entry_pane_t1

0xe374,	// (0x00099b11) main_im_pane_ParamLimits

0x9e49,	// (0x000955e6) main_mobtv_pane_ParamLimits

0x9e49,	// (0x000955e6) main_mobtv_pane

0x789d,	// (0x0009303a) main_cset6_slider_pane_g18_ParamLimits

0x789d,	// (0x0009303a) main_cset6_slider_pane_g18

0x78a9,	// (0x00093046) main_cset6_slider_pane_g19_ParamLimits

0x78a9,	// (0x00093046) main_cset6_slider_pane_g19

0xe31e,	// (0x00099abb) bg_main_mobtv_pane_ParamLimits

0xe31e,	// (0x00099abb) bg_main_mobtv_pane

0x7c30,	// (0x000933cd) main_mobtv_info_pane

0x7c39,	// (0x000933d6) main_mobtv_loading_pane_ParamLimits

0x7c39,	// (0x000933d6) main_mobtv_loading_pane

0xc434,	// (0x00097bd1) main_mobtv_pg_channel_list_pane

0xc43e,	// (0x00097bdb) main_mobtv_pg_hdr_pane

0x7c46,	// (0x000933e3) main_mobtv_programe_curr_pane_ParamLimits

0x7c46,	// (0x000933e3) main_mobtv_programe_curr_pane

0x7c53,	// (0x000933f0) main_mobtv_programe_next_pane_ParamLimits

0x7c53,	// (0x000933f0) main_mobtv_programe_next_pane

0xc447,	// (0x00097be4) popup_mobtv_noti_window

0xe55c,	// (0x00099cf9) main_tv_pg_hdr_pane_g1

0xc44f,	// (0x00097bec) main_tv_pg_hdr_pane_g2

0xc457,	// (0x00097bf4) main_tv_pg_hdr_pane_g3

0xc45f,	// (0x00097bfc) main_tv_pg_hdr_pane_g4

0xc467,	// (0x00097c04) main_tv_pg_hdr_pane_g5

0xc471,	// (0x00097c0e) main_tv_pg_hdr_pane_g6

0xc47b,	// (0x00097c18) main_tv_pg_hdr_pane_g7

0xc485,	// (0x00097c22) main_tv_pg_hdr_pane_g8

0xc48f,	// (0x00097c2c) main_tv_pg_hdr_pane_g9

0xc499,	// (0x00097c36) main_tv_pg_hdr_pane_g10

0xc4a3,	// (0x00097c40) main_tv_pg_hdr_pane_g11

0x000a,

0xfa58,	// (0x0009b1f5) main_tv_pg_hdr_pane_g

0xc4ad,	// (0x00097c4a) main_tv_pg_hdr_pane_t1

0xc4bb,	// (0x00097c58) main_tv_pg_hdr_pane_t2

0xc4c9,	// (0x00097c66) main_tv_pg_hdr_pane_t3

0xc4d9,	// (0x00097c76) main_tv_pg_hdr_pane_t4

0xc4e9,	// (0x00097c86) main_tv_pg_hdr_pane_t5

0x0004,

0xfa6f,	// (0x0009b20c) main_tv_pg_hdr_pane_t

0xc4f9,	// (0x00097c96) single_mobtv_pg_channel_pane_ParamLimits

0xc4f9,	// (0x00097c96) single_mobtv_pg_channel_pane

0xc50b,	// (0x00097ca8) single_mobtv_pg_channel_table_pane

0xc514,	// (0x00097cb1) single_mobtv_pg_channel_thumb_pane

0xc51d,	// (0x00097cba) single_tv_pg_channel_pane_g1

0xc526,	// (0x00097cc3) single_tv_pg_channel_pane_g2

0x0001,

0xfa7a,	// (0x0009b217) single_tv_pg_channel_pane_g

0xe302,	// (0x00099a9f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe302,	// (0x00099a9f) bg_single_mobtv_pg_channel_thumb_pane

0xc52f,	// (0x00097ccc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc52f,	// (0x00097ccc) single_mobtv_pg_channel_thumb_pane_g1

0xc53d,	// (0x00097cda) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc53d,	// (0x00097cda) single_mobtv_pg_channel_thumb_pane_g2

0xc549,	// (0x00097ce6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc549,	// (0x00097ce6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfa7f,	// (0x0009b21c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfa7f,	// (0x0009b21c) single_mobtv_pg_channel_thumb_pane_g

0xc555,	// (0x00097cf2) single_mobtv_pg_channel_thumb_pane_t1

0xc563,	// (0x00097d00) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfa86,	// (0x0009b223) single_mobtv_pg_channel_thumb_pane_t

0xe55c,	// (0x00099cf9) bg_single_mobtv_pg_channel_table_pane_g1

0xe55c,	// (0x00099cf9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf2ee,	// (0x0009aa8b) bg_single_mobtv_pg_channel_table_pane_g

0xc571,	// (0x00097d0e) single_mobtv_pg_channel_table_pane_t1

0xc57f,	// (0x00097d1c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfa8b,	// (0x0009b228) single_mobtv_pg_channel_table_pane_t

0x7c68,	// (0x00093405) main_mobtv_info_pane_g1_ParamLimits

0x7c68,	// (0x00093405) main_mobtv_info_pane_g1

0x7c86,	// (0x00093423) main_mobtv_info_pane_t1_ParamLimits

0x7c86,	// (0x00093423) main_mobtv_info_pane_t1

0x7cfe,	// (0x0009349b) main_mobtv_info_pane_t2_ParamLimits

0x7cfe,	// (0x0009349b) main_mobtv_info_pane_t2

0x0002,

0xfa95,	// (0x0009b232) main_mobtv_info_pane_t_ParamLimits

0xfa95,	// (0x0009b232) main_mobtv_info_pane_t

0x7d8d,	// (0x0009352a) wait_bar_pane_cp05

0x7d9f,	// (0x0009353c) main_mobtv_loading_pane_g1_ParamLimits

0x7d9f,	// (0x0009353c) main_mobtv_loading_pane_g1

0x7db2,	// (0x0009354f) main_mobtv_loading_pane_g2_ParamLimits

0x7db2,	// (0x0009354f) main_mobtv_loading_pane_g2

0x7dbe,	// (0x0009355b) main_mobtv_loading_pane_g3_ParamLimits

0x7dbe,	// (0x0009355b) main_mobtv_loading_pane_g3

0x0002,

0xfa9c,	// (0x0009b239) main_mobtv_loading_pane_g_ParamLimits

0xfa9c,	// (0x0009b239) main_mobtv_loading_pane_g

0xc58d,	// (0x00097d2a) main_mobtv_loading_pane_t1_ParamLimits

0xc58d,	// (0x00097d2a) main_mobtv_loading_pane_t1

0xc5a5,	// (0x00097d42) main_mobtv_loading_pane_t2_ParamLimits

0xc5a5,	// (0x00097d42) main_mobtv_loading_pane_t2

0x0001,

0xfaa3,	// (0x0009b240) main_mobtv_loading_pane_t_ParamLimits

0xfaa3,	// (0x0009b240) main_mobtv_loading_pane_t

0x7dd1,	// (0x0009356e) wait_bar_pane_cp06_ParamLimits

0x7dd1,	// (0x0009356e) wait_bar_pane_cp06

0xc5c9,	// (0x00097d66) main_mobtv_programe_curr_pane_t1

0xc5d7,	// (0x00097d74) main_mobtv_programe_curr_pane_t2

0x0001,

0xfaa8,	// (0x0009b245) main_mobtv_programe_curr_pane_t

0xc5e5,	// (0x00097d82) main_mobtv_programe_next_pane_t1

0xc5f3,	// (0x00097d90) main_mobtv_programe_next_pane_t2

0xc601,	// (0x00097d9e) main_mobtv_programe_next_pane_t3

0x0002,

0xfaad,	// (0x0009b24a) main_mobtv_programe_next_pane_t

0xdc01,	// (0x0009939e) bg_popup_mobtv_noti_window_pane

0xc60f,	// (0x00097dac) popup_mobtv_noti_window_g1

0xc617,	// (0x00097db4) popup_mobtv_noti_window_t1

0xc625,	// (0x00097dc2) popup_mobtv_noti_window_t2

0x0001,

0xfab4,	// (0x0009b251) popup_mobtv_noti_window_t

0xe55c,	// (0x00099cf9) bg_popup_mobtv_noti_window_pane_g1

0x9e57,	// (0x000955f4) sc_clock_pane

0x9e57,	// (0x000955f4) main_fs_bigclock_pane

0x74ac,	// (0x00092c49) blid2_tripm_pane_t4_ParamLimits

0x74ac,	// (0x00092c49) blid2_tripm_pane_t4

0x7de0,	// (0x0009357d) sc_clock_pane_g1_ParamLimits

0x7de0,	// (0x0009357d) sc_clock_pane_g1

0x7df2,	// (0x0009358f) sc_clock_pane_t1_ParamLimits

0x7df2,	// (0x0009358f) sc_clock_pane_t1

0x7e14,	// (0x000935b1) sc_clock_pane_t2_ParamLimits

0x7e14,	// (0x000935b1) sc_clock_pane_t2

0x7e2c,	// (0x000935c9) sc_clock_pane_t3_ParamLimits

0x7e2c,	// (0x000935c9) sc_clock_pane_t3

0x0004,

0xfab9,	// (0x0009b256) sc_clock_pane_t_ParamLimits

0xfab9,	// (0x0009b256) sc_clock_pane_t

0x8b10,	// (0x000942ad) main_fs_bigclock_indicator_pane_ParamLimits

0x8b10,	// (0x000942ad) main_fs_bigclock_indicator_pane

0x7ed2,	// (0x0009366f) main_fs_bigclock_pane_g1_ParamLimits

0x7ed2,	// (0x0009366f) main_fs_bigclock_pane_g1

0x8b1c,	// (0x000942b9) main_fs_bigclock_pane_t1_ParamLimits

0x8b1c,	// (0x000942b9) main_fs_bigclock_pane_t1

0x8b2e,	// (0x000942cb) main_fs_bigclock_pane_t2_ParamLimits

0x8b2e,	// (0x000942cb) main_fs_bigclock_pane_t2

0x8b42,	// (0x000942df) main_fs_bigclock_pane_t3_ParamLimits

0x8b42,	// (0x000942df) main_fs_bigclock_pane_t3

0x0002,

0xfc45,	// (0x0009b3e2) main_fs_bigclock_pane_t_ParamLimits

0xfc45,	// (0x0009b3e2) main_fs_bigclock_pane_t

0xd1fa,	// (0x00098997) main_fs_bigclock_indicator_pane_g1

0xc343,	// (0x00097ae0) ncim_query_content_pane_g2_ParamLimits

0xc343,	// (0x00097ae0) ncim_query_content_pane_g2

0x0001,

0xfa46,	// (0x0009b1e3) ncim_query_content_pane_g_ParamLimits

0xfa46,	// (0x0009b1e3) ncim_query_content_pane_g

0x7e45,	// (0x000935e2) sc_clock_pane_t4_ParamLimits

0x7e45,	// (0x000935e2) sc_clock_pane_t4

0x9e49,	// (0x000955e6) main_radioblah_pane

0xd9c3,	// (0x00099160) cell_call4_button_pane_t1_copy1_ParamLimits

0xd9c3,	// (0x00099160) cell_call4_button_pane_t1_copy1

0x7a3a,	// (0x000931d7) main_ncimui_pane_t1_ParamLimits

0x7a3a,	// (0x000931d7) main_ncimui_pane_t1

0x7a54,	// (0x000931f1) main_ncimui_pane_t2_ParamLimits

0x7a54,	// (0x000931f1) main_ncimui_pane_t2

0x0002,

0xfa3f,	// (0x0009b1dc) main_ncimui_pane_t_ParamLimits

0xfa3f,	// (0x0009b1dc) main_ncimui_pane_t

0xc76a,	// (0x00097f07) main_radioblah_anim_pane_ParamLimits

0xc76a,	// (0x00097f07) main_radioblah_anim_pane

0xc77b,	// (0x00097f18) main_radioblah_info_pane_ParamLimits

0xc77b,	// (0x00097f18) main_radioblah_info_pane

0xc78f,	// (0x00097f2c) main_radioblah_pane_t1_ParamLimits

0xc78f,	// (0x00097f2c) main_radioblah_pane_t1

0xc7ab,	// (0x00097f48) main_radioblah_pane_t2_ParamLimits

0xc7ab,	// (0x00097f48) main_radioblah_pane_t2

0x0003,

0xfada,	// (0x0009b277) main_radioblah_pane_t_ParamLimits

0xfada,	// (0x0009b277) main_radioblah_pane_t

0x7f31,	// (0x000936ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f31,	// (0x000936ce) main_radioblah_rocker_ctrl_pane

0xc7f3,	// (0x00097f90) main_radioblah_info_pane_t1_ParamLimits

0xc7f3,	// (0x00097f90) main_radioblah_info_pane_t1

0x7f89,	// (0x00093726) main_radioblah_info_pane_t2_ParamLimits

0x7f89,	// (0x00093726) main_radioblah_info_pane_t2

0x0003,

0xfae3,	// (0x0009b280) main_radioblah_info_pane_t_ParamLimits

0xfae3,	// (0x0009b280) main_radioblah_info_pane_t

0xe55c,	// (0x00099cf9) main_radioblah_rocker_ctrl_pane_g1

0x8039,	// (0x000937d6) main_radioblah_rocker_ctrl_pane_g2

0x8041,	// (0x000937de) main_radioblah_rocker_ctrl_pane_g3

0x8049,	// (0x000937e6) main_radioblah_rocker_ctrl_pane_g4

0x8051,	// (0x000937ee) main_radioblah_rocker_ctrl_pane_g5

0x8059,	// (0x000937f6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfaec,	// (0x0009b289) main_radioblah_rocker_ctrl_pane_g

0x7773,	// (0x00092f10) main_cset_text2_pane_t1_copy1_ParamLimits

0xda21,	// (0x000991be) cam4_image_uncrop_qvga_pane

0xda7a,	// (0x00099217) vid4_image_uncrop_qcif_pane

0xdbdb,	// (0x00099378) cam6_image_uncrop_qvga_pane_ParamLimits

0xdbdb,	// (0x00099378) cam6_image_uncrop_qvga_pane

0xc02f,	// (0x000977cc) vid6_image_uncrop_qcif_pane_ParamLimits

0xc02f,	// (0x000977cc) vid6_image_uncrop_qcif_pane

0xdc01,	// (0x0009939e) bg_popup_preview_window_pane_cp03

0xc2f5,	// (0x00097a92) list_cset_text2_pane

0xc2fd,	// (0x00097a9a) main_cset6_text2_pane_g1

0xc305,	// (0x00097aa2) main_cset6_text2_pane_t1

0x8061,	// (0x000937fe) list_cset_text2_pane_t1_ParamLimits

0x8061,	// (0x000937fe) list_cset_text2_pane_t1

0x9e49,	// (0x000955e6) main_radioblah_pane_ParamLimits

0x7d79,	// (0x00093516) main_mobtv_info_pane_t3_ParamLimits

0x7d79,	// (0x00093516) main_mobtv_info_pane_t3

0x7f1f,	// (0x000936bc) main_radioblah_pane_g1

0x7f59,	// (0x000936f6) main_radioblah_info_pane_g1

0x7fde,	// (0x0009377b) main_radioblah_info_pane_t3_ParamLimits

0x7fde,	// (0x0009377b) main_radioblah_info_pane_t3

0x2ac2,	// (0x0008e25f) highlight_cell_cale_month_pane_ParamLimits

0x2ac2,	// (0x0008e25f) highlight_cell_cale_month_pane

0x9e57,	// (0x000955f4) main_phob_fisheye_pane

0xafab,	// (0x00096748) scroll_pane_cp0031_ParamLimits

0xafab,	// (0x00096748) scroll_pane_cp0031

0xc13d,	// (0x000978da) wait_bar_pane_cp08_ParamLimits

0x77f8,	// (0x00092f95) cset_list_set_pane_copy1_ParamLimits

0xc82d,	// (0x00097fca) highlight_cell_cale_month_pane_g1

0x807a,	// (0x00093817) highlight_cell_cale_month_pane_t1

0xbd89,	// (0x00097526) list_gen_pane_cp01

0xb92e,	// (0x000970cb) scroll_pane_01

0x8088,	// (0x00093825) list_single_double_fisheye_pane

0x8091,	// (0x0009382e) list_double_fisheye_pane_g1_ParamLimits

0x8091,	// (0x0009382e) list_double_fisheye_pane_g1

0x809d,	// (0x0009383a) list_double_fisheye_pane_g2_ParamLimits

0x809d,	// (0x0009383a) list_double_fisheye_pane_g2

0x80b1,	// (0x0009384e) list_double_fisheye_pane_g3_ParamLimits

0x80b1,	// (0x0009384e) list_double_fisheye_pane_g3

0x0004,

0xfaf9,	// (0x0009b296) list_double_fisheye_pane_g_ParamLimits

0xfaf9,	// (0x0009b296) list_double_fisheye_pane_g

0x80da,	// (0x00093877) list_double_fisheye_pane_t1_ParamLimits

0x80da,	// (0x00093877) list_double_fisheye_pane_t1

0x80f5,	// (0x00093892) list_double_fisheye_pane_t2_ParamLimits

0x80f5,	// (0x00093892) list_double_fisheye_pane_t2

0x0001,

0xfb04,	// (0x0009b2a1) list_double_fisheye_pane_t_ParamLimits

0xfb04,	// (0x0009b2a1) list_double_fisheye_pane_t

0x9e57,	// (0x000955f4) main_call5_pane

0x7e70,	// (0x0009360d) sc_swipe_pane_ParamLimits

0x7e70,	// (0x0009360d) sc_swipe_pane

0x812a,	// (0x000938c7) call5_image_pane_ParamLimits

0x812a,	// (0x000938c7) call5_image_pane

0x8147,	// (0x000938e4) call5_swipe_1_pane_ParamLimits

0x8147,	// (0x000938e4) call5_swipe_1_pane

0x815a,	// (0x000938f7) call5_swipe_2_pane_ParamLimits

0x815a,	// (0x000938f7) call5_swipe_2_pane

0x8185,	// (0x00093922) popup_call5_audio_first_window_ParamLimits

0x8185,	// (0x00093922) popup_call5_audio_first_window

0xe302,	// (0x00099a9f) call5_swipe_1_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) call5_swipe_1_pane_g1

0xc835,	// (0x00097fd2) call5_swipe_1_pane_g2_ParamLimits

0xc835,	// (0x00097fd2) call5_swipe_1_pane_g2

0x0001,

0xfb09,	// (0x0009b2a6) call5_swipe_1_pane_g_ParamLimits

0xfb09,	// (0x0009b2a6) call5_swipe_1_pane_g

0xc841,	// (0x00097fde) call5_swipe_1_pane_t1_ParamLimits

0xc841,	// (0x00097fde) call5_swipe_1_pane_t1

0xe302,	// (0x00099a9f) call5_swipe_2_pane_g1_ParamLimits

0xe302,	// (0x00099a9f) call5_swipe_2_pane_g1

0xc856,	// (0x00097ff3) call5_swipe_2_pane_g2_ParamLimits

0xc856,	// (0x00097ff3) call5_swipe_2_pane_g2

0x0001,

0xfb0e,	// (0x0009b2ab) call5_swipe_2_pane_g_ParamLimits

0xfb0e,	// (0x0009b2ab) call5_swipe_2_pane_g

0xc862,	// (0x00097fff) call5_swipe_2_pane_t1_ParamLimits

0xc862,	// (0x00097fff) call5_swipe_2_pane_t1

0xc877,	// (0x00098014) sc_swipe_pane_g1_ParamLimits

0xc877,	// (0x00098014) sc_swipe_pane_g1

0xc884,	// (0x00098021) sc_swipe_pane_g2_ParamLimits

0xc884,	// (0x00098021) sc_swipe_pane_g2

0x0001,

0xfb13,	// (0x0009b2b0) sc_swipe_pane_g_ParamLimits

0xfb13,	// (0x0009b2b0) sc_swipe_pane_g

0xc890,	// (0x0009802d) sc_swipe_pane_t1_ParamLimits

0xc890,	// (0x0009802d) sc_swipe_pane_t1

0x9e57,	// (0x000955f4) main_cmail_launcher_pane

0x8196,	// (0x00093933) aid_size_cell_cmail_l_ParamLimits

0x8196,	// (0x00093933) aid_size_cell_cmail_l

0x81a4,	// (0x00093941) grid_cmail_l_pane_ParamLimits

0x81a4,	// (0x00093941) grid_cmail_l_pane

0x81be,	// (0x0009395b) cell_cmail_l_pane_ParamLimits

0x81be,	// (0x0009395b) cell_cmail_l_pane

0xc8a5,	// (0x00098042) cell_cmail_l_pane_g1_ParamLimits

0xc8a5,	// (0x00098042) cell_cmail_l_pane_g1

0xc8b1,	// (0x0009804e) cell_cmail_l_pane_t1_ParamLimits

0xc8b1,	// (0x0009804e) cell_cmail_l_pane_t1

0xc8c7,	// (0x00098064) cell_cmail_l_pane_t2_ParamLimits

0xc8c7,	// (0x00098064) cell_cmail_l_pane_t2

0x0001,

0xfb18,	// (0x0009b2b5) cell_cmail_l_pane_t_ParamLimits

0xfb18,	// (0x0009b2b5) cell_cmail_l_pane_t

0xe29b,	// (0x00099a38) grid_highlight_pane_cp018_ParamLimits

0xe29b,	// (0x00099a38) grid_highlight_pane_cp018

0x0ef3,	// (0x0008c690) main2_pane_ParamLimits

0x0ef3,	// (0x0008c690) main2_pane

0xe403,	// (0x00099ba0) popup_sp_fs_action_menu_bg_pane_g1

0xe40b,	// (0x00099ba8) popup_sp_fs_action_menu_bg_pane_g2

0xe413,	// (0x00099bb0) popup_sp_fs_action_menu_bg_pane_g3

0xe41b,	// (0x00099bb8) popup_sp_fs_action_menu_bg_pane_g4

0xe423,	// (0x00099bc0) popup_sp_fs_action_menu_bg_pane_g5

0xe42b,	// (0x00099bc8) popup_sp_fs_action_menu_bg_pane_g6

0xe433,	// (0x00099bd0) popup_sp_fs_action_menu_bg_pane_g7

0xe43b,	// (0x00099bd8) popup_sp_fs_action_menu_bg_pane_g8

0xe443,	// (0x00099be0) popup_sp_fs_action_menu_bg_pane_g9

0xe44b,	// (0x00099be8) popup_sp_fs_action_menu_bg_pane_g10

0xe44b,	// (0x00099be8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0009a8c8) popup_sp_fs_action_menu_bg_pane_g

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g2

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g3_g3

0x0002,

0x0058,	// (0x0008b7f5) list_medium_line_x2_t3_g3_g_ParamLimits

0x0058,	// (0x0008b7f5) list_medium_line_x2_t3_g3_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t2

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g3_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_x2_t3_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_x2_t3_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t2

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g2_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g2

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g3

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g4_g4

0x0003,

0x0066,	// (0x0008b803) list_medium_line_x2_t4_g4_g_ParamLimits

0x0066,	// (0x0008b803) list_medium_line_x2_t4_g4_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t2

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t3

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1db,	// (0x0009a978) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1db,	// (0x0009a978) list_medium_line_x2_t4_g4_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g2

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g3

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g4_g4

0x0003,

0x0066,	// (0x0008b803) list_medium_line_x2_t2_g4_g_ParamLimits

0x0066,	// (0x0008b803) list_medium_line_x2_t2_g4_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g4_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g4_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g2

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g3_g3

0x0002,

0x0058,	// (0x0008b7f5) list_medium_line_x2_t2_g3_g_ParamLimits

0x0058,	// (0x0008b7f5) list_medium_line_x2_t2_g3_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g3_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g3_t

0x2c14,	// (0x0008e3b1) main_sp_fs_list_pane_ParamLimits

0x2c14,	// (0x0008e3b1) main_sp_fs_list_pane

0xf00c,	// (0x0009a7a9) sp_fs_scroll_pane_ParamLimits

0xf00c,	// (0x0009a7a9) sp_fs_scroll_pane

0xea78,	// (0x0009a215) list_medium_line_x2_t3_t1

0xea78,	// (0x0009a215) list_medium_line_x2_t3_t2

0xea78,	// (0x0009a215) list_medium_line_x2_t3_t3

0x0002,

0x0121,	// (0x0008b8be) list_medium_line_x2_t3_t

0xea78,	// (0x0009a215) list_medium_line_x3_t4_t1

0xea78,	// (0x0009a215) list_medium_line_x3_t4_t2

0xea78,	// (0x0009a215) list_medium_line_x3_t4_t3

0xea78,	// (0x0009a215) list_medium_line_x3_t4_t4

0x0003,

0x0128,	// (0x0008b8c5) list_medium_line_x3_t4_t

0xea78,	// (0x0009a215) list_medium_line_x4_t5_t1

0xea78,	// (0x0009a215) list_medium_line_x4_t5_t2

0xea78,	// (0x0009a215) list_medium_line_x4_t5_t3

0xea78,	// (0x0009a215) list_medium_line_x4_t5_t4

0xea78,	// (0x0009a215) list_medium_line_x4_t5_t5

0x0004,

0x0131,	// (0x0008b8ce) list_medium_line_x4_t5_t

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g1

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g2

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g3

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t4_g4_g4

0x0003,

0x0066,	// (0x0008b803) list_medium_line_t4_g4_g_ParamLimits

0x0066,	// (0x0008b803) list_medium_line_t4_g4_g

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t1

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t2

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t3

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t4_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t4_g4_t4

0x0003,

0xf1db,	// (0x0009a978) list_medium_line_t4_g4_t_ParamLimits

0xf1db,	// (0x0009a978) list_medium_line_t4_g4_t

0x2caf,	// (0x0008e44c) chi_dic_find_pane_g1

0x4679,	// (0x0008fe16) main_tport_pane

0xea78,	// (0x0009a215) list_medium_line_plain_t1

0xe302,	// (0x00099a9f) list_medium_line_t2_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_t2_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_t2_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_t2_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_t2_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_g2_t1

0xe52e,	// (0x00099ccb) list_medium_line_t2_g2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_g2_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_t2_g2_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_t2_g2_t

0xbd92,	// (0x0009752f) aid_sp_fs_list_icon_a_sm

0xbd9a,	// (0x00097537) aid_sp_fs_list_icon_d

0xbda2,	// (0x0009753f) aid_sp_fs_text_primary

0xbdab,	// (0x00097548) aid_sp_fs_text_secondary

0xdc01,	// (0x0009939e) list_medium_line

0xdc01,	// (0x0009939e) list_medium_line_g2

0xdc01,	// (0x0009939e) list_medium_line_g3

0xdc01,	// (0x0009939e) list_medium_line_plain

0xdc01,	// (0x0009939e) list_medium_line_plain_t2

0xdc01,	// (0x0009939e) list_medium_line_plain_t3

0xdc01,	// (0x0009939e) list_medium_line_right_icon

0xdc01,	// (0x0009939e) list_medium_line_right_iconx2

0xdc01,	// (0x0009939e) list_medium_line_t2

0xdc01,	// (0x0009939e) list_medium_line_t2_g2

0xdc01,	// (0x0009939e) list_medium_line_t2_g3

0xdc01,	// (0x0009939e) list_medium_line_t2_right_icon

0xdc01,	// (0x0009939e) list_medium_line_t2_right_iconx2

0xdc01,	// (0x0009939e) list_medium_line_t3

0xdc01,	// (0x0009939e) list_medium_line_t3_g2

0xdc01,	// (0x0009939e) list_medium_line_t3_g3

0xdc01,	// (0x0009939e) list_medium_line_t3_right_iconx2

0xdc01,	// (0x0009939e) list_medium_line_t4_g4

0xdc01,	// (0x0009939e) list_medium_line_x2

0xdc01,	// (0x0009939e) list_medium_line_x2_t2_g2

0xdc01,	// (0x0009939e) list_medium_line_x2_t2_g3

0xdc01,	// (0x0009939e) list_medium_line_x2_t2_g4

0xdc01,	// (0x0009939e) list_medium_line_x2_t3

0xdc01,	// (0x0009939e) list_medium_line_x2_t3_g2

0xdc01,	// (0x0009939e) list_medium_line_x2_t3_g3

0xdc01,	// (0x0009939e) list_medium_line_x2_t3_g4

0xdc01,	// (0x0009939e) list_medium_line_x2_t4_g2

0xdc01,	// (0x0009939e) list_medium_line_x2_t4_g4

0xdc01,	// (0x0009939e) list_medium_line_x3

0xdc01,	// (0x0009939e) list_medium_line_x3_t4

0xdc01,	// (0x0009939e) list_medium_line_x3_t4_g4

0xdc01,	// (0x0009939e) list_medium_line_x4_t4

0xdc01,	// (0x0009939e) list_medium_line_x4_t4_g7

0xdc01,	// (0x0009939e) list_medium_line_x4_t5

0x729c,	// (0x00092a39) list_single_fs_dyc_pane_ParamLimits

0x729c,	// (0x00092a39) list_single_fs_dyc_pane

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g1

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g2

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g3

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g4

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g5

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x4_t4_g7_g6

0xe310,	// (0x00099aad) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe310,	// (0x00099aad) list_medium_line_x4_t4_g7_g7

0x0006,

0x09ad,	// (0x0008c14a) list_medium_line_x4_t4_g7_g_ParamLimits

0x09ad,	// (0x0008c14a) list_medium_line_x4_t4_g7_g

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t1

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t2

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x4_t4_g7_t3

0x2eec,	// (0x0008e689) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2eec,	// (0x0008e689) list_medium_line_x4_t4_g7_t4

0x2eec,	// (0x0008e689) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2eec,	// (0x0008e689) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa2f,	// (0x0009b1cc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa2f,	// (0x0009b1cc) list_medium_line_x4_t4_g7_t

0x79f1,	// (0x0009318e) list_single_dyc_row_pane_ParamLimits

0x79f1,	// (0x0009318e) list_single_dyc_row_pane

0x8117,	// (0x000938b4) call5_gesture_pane_ParamLimits

0x8117,	// (0x000938b4) call5_gesture_pane

0x816d,	// (0x0009390a) call5_windows_pane_ParamLimits

0x816d,	// (0x0009390a) call5_windows_pane

0x81d8,	// (0x00093975) call5_swipe_1_pane_cp_ParamLimits

0x81d8,	// (0x00093975) call5_swipe_1_pane_cp

0x81e4,	// (0x00093981) call5_swipe_2_pane_cp_ParamLimits

0x81e4,	// (0x00093981) call5_swipe_2_pane_cp

0xe526,	// (0x00099cc3) call5_image_pane_cp

0x81f0,	// (0x0009398d) popup_call5_audio_first_window_cp_ParamLimits

0x81f0,	// (0x0009398d) popup_call5_audio_first_window_cp

0xc877,	// (0x00098014) call5_swipe_1_pane_g1_cp_ParamLimits

0xc877,	// (0x00098014) call5_swipe_1_pane_g1_cp

0xc8e4,	// (0x00098081) call5_swipe_1_pane_g2_cp

0xc890,	// (0x0009802d) call5_swipe_1_pane_t1_cp_ParamLimits

0xc890,	// (0x0009802d) call5_swipe_1_pane_t1_cp

0xc877,	// (0x00098014) call5_swipe_2_pane_g1_cp_ParamLimits

0xc877,	// (0x00098014) call5_swipe_2_pane_g1_cp

0xc8ec,	// (0x00098089) call5_swipe_2_pane_g2_cp

0xc8f4,	// (0x00098091) call5_swipe_2_pane_t1_cp_ParamLimits

0xc8f4,	// (0x00098091) call5_swipe_2_pane_t1_cp

0xe29b,	// (0x00099a38) main_sp_fs_email_pane

0xc909,	// (0x000980a6) main_sp_fs_listscroll_pane_te

0xc912,	// (0x000980af) popup_sp_fs_action_menu_pane_ParamLimits

0xc912,	// (0x000980af) popup_sp_fs_action_menu_pane

0xe55c,	// (0x00099cf9) bg_sp_fs_ctrlbar_pane_g1

0xc956,	// (0x000980f3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc95f,	// (0x000980fc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc968,	// (0x00098105) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe55c,	// (0x00099cf9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb1d,	// (0x0009b2ba) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xaa6c,	// (0x00096209) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xaa6c,	// (0x00096209) bg_sp_fs_ctrlbar_ddmenu_pane

0xc971,	// (0x0009810e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc971,	// (0x0009810e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc97d,	// (0x0009811a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc97d,	// (0x0009811a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb26,	// (0x0009b2c3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb26,	// (0x0009b2c3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc989,	// (0x00098126) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc989,	// (0x00098126) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe55c,	// (0x00099cf9) list_medium_line_t2_right_icon_g1

0xea78,	// (0x0009a215) list_medium_line_t2_right_icon_t1

0xea78,	// (0x0009a215) list_medium_line_t2_right_icon_t2

0x0001,

0x0ab8,	// (0x0008c255) list_medium_line_t2_right_icon_t

0x2f00,	// (0x0008e69d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2f00,	// (0x0008e69d) bg_sp_fs_ctrlbar_pane

0x8246,	// (0x000939e3) main_sp_fs_ctrlbar_button_pane_cp01

0x8250,	// (0x000939ed) main_sp_fs_ctrlbar_ddmenu_pane

0xc9db,	// (0x00098178) main_sp_fs_ctrlbar_pane_g1

0xc9e7,	// (0x00098184) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb2b,	// (0x0009b2c8) main_sp_fs_ctrlbar_pane_g

0x828e,	// (0x00093a2b) main_sp_fs_ctrlbar_pane_t1

0x82cd,	// (0x00093a6a) main_sp_fs_ctrlbar_pane

0x82f1,	// (0x00093a8e) main_sp_fs_listscroll_pane_te_cp01

0x8311,	// (0x00093aae) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8311,	// (0x00093aae) popup_sp_fs_action_menu_pane_cp01

0xe29b,	// (0x00099a38) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe29b,	// (0x00099a38) bg_sp_fs_highlight_list_pane_cp01

0xca0e,	// (0x000981ab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca0e,	// (0x000981ab) sp_fs_action_menu_list_gene_pane_g1

0xca1d,	// (0x000981ba) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca1d,	// (0x000981ba) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb39,	// (0x0009b2d6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb39,	// (0x0009b2d6) sp_fs_action_menu_list_gene_pane_g

0xca2a,	// (0x000981c7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca2a,	// (0x000981c7) sp_fs_action_menu_list_gene_pane_t1

0xca42,	// (0x000981df) sp_fs_action_menu_list_gene_pane_ParamLimits

0xca42,	// (0x000981df) sp_fs_action_menu_list_gene_pane

0xca63,	// (0x00098200) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca63,	// (0x00098200) popup_sp_fs_action_menu_bg_pane

0xca71,	// (0x0009820e) sp_fs_action_menu_list_pane_ParamLimits

0xca71,	// (0x0009820e) sp_fs_action_menu_list_pane

0xca93,	// (0x00098230) sp_fs_scroll_pane_cp01_ParamLimits

0xca93,	// (0x00098230) sp_fs_scroll_pane_cp01

0xea78,	// (0x0009a215) list_medium_line_plain_t2_t1

0xea78,	// (0x0009a215) list_medium_line_plain_t2_t2

0x0001,

0x0ab8,	// (0x0008c255) list_medium_line_plain_t2_t

0xea78,	// (0x0009a215) list_medium_line_plain_t3_t1

0xea78,	// (0x0009a215) list_medium_line_plain_t3_t2

0xea78,	// (0x0009a215) list_medium_line_plain_t3_t3

0x0002,

0x0121,	// (0x0008b8be) list_medium_line_plain_t3_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t2_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_x2_t2_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_x2_t2_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g2_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_x2_t2_g2_t

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t4_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_x2_t4_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_x2_t4_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t2

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t3

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1db,	// (0x0009a978) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1db,	// (0x0009a978) list_medium_line_x2_t4_g2_t

0xe55c,	// (0x00099cf9) list_medium_line_t3_right_iconx2_g1

0xe55c,	// (0x00099cf9) list_medium_line_t3_right_iconx2_g2

0xe55c,	// (0x00099cf9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf2f3,	// (0x0009aa90) list_medium_line_t3_right_iconx2_g

0xea78,	// (0x0009a215) list_medium_line_t3_right_iconx2_t1

0xea78,	// (0x0009a215) list_medium_line_t3_right_iconx2_t2

0x0001,

0x0ab8,	// (0x0008c255) list_medium_line_t3_right_iconx2_t

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g1

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g2

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g3

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x3_t4_g4_g4

0x0003,

0x0066,	// (0x0008b803) list_medium_line_x3_t4_g4_g_ParamLimits

0x0066,	// (0x0008b803) list_medium_line_x3_t4_g4_g

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t1

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t2

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t3

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1db,	// (0x0009a978) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1db,	// (0x0009a978) list_medium_line_x3_t4_g4_t

0x8336,	// (0x00093ad3) list_single_dyc_row_text_pane_t1_ParamLimits

0x8336,	// (0x00093ad3) list_single_dyc_row_text_pane_t1

0x837f,	// (0x00093b1c) list_single_dyc_row_text_pane_t2_ParamLimits

0x837f,	// (0x00093b1c) list_single_dyc_row_text_pane_t2

0xcab9,	// (0x00098256) list_single_dyc_row_text_pane_t3_ParamLimits

0xcab9,	// (0x00098256) list_single_dyc_row_text_pane_t3

0x0005,

0xfb3e,	// (0x0009b2db) list_single_dyc_row_text_pane_t_ParamLimits

0xfb3e,	// (0x0009b2db) list_single_dyc_row_text_pane_t

0xcadd,	// (0x0009827a) list_single_dyc_row_pane_g1_ParamLimits

0xcadd,	// (0x0009827a) list_single_dyc_row_pane_g1

0xcae9,	// (0x00098286) list_single_dyc_row_pane_g2_ParamLimits

0xcae9,	// (0x00098286) list_single_dyc_row_pane_g2

0xcaf5,	// (0x00098292) list_single_dyc_row_pane_g3_ParamLimits

0xcaf5,	// (0x00098292) list_single_dyc_row_pane_g3

0xcb01,	// (0x0009829e) list_single_dyc_row_pane_g4_ParamLimits

0xcb01,	// (0x0009829e) list_single_dyc_row_pane_g4

0x0003,

0xfb4b,	// (0x0009b2e8) list_single_dyc_row_pane_g_ParamLimits

0xfb4b,	// (0x0009b2e8) list_single_dyc_row_pane_g

0xcb0d,	// (0x000982aa) list_single_dyc_row_text_pane_ParamLimits

0xcb0d,	// (0x000982aa) list_single_dyc_row_text_pane

0xdc01,	// (0x0009939e) bg_sp_fs_scroll_pane

0xcb2c,	// (0x000982c9) thumb_sp_fs_scroll_pane

0xe302,	// (0x00099a9f) list_medium_line_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g1

0xe52e,	// (0x00099ccb) list_medium_line_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t1

0xe302,	// (0x00099a9f) list_medium_line_x2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_x2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_x2_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t1

0xe302,	// (0x00099a9f) list_medium_line_x3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x3_g1

0xb7a8,	// (0x00096f45) list_medium_line_x3_g2_ParamLimits

0xb7a8,	// (0x00096f45) list_medium_line_x3_g2

0x0001,

0xfb54,	// (0x0009b2f1) list_medium_line_x3_g_ParamLimits

0xfb54,	// (0x0009b2f1) list_medium_line_x3_g

0xcb35,	// (0x000982d2) list_medium_line_x3_t1_ParamLimits

0xcb35,	// (0x000982d2) list_medium_line_x3_t1

0xcb49,	// (0x000982e6) thumb_sp_fs_scroll_pane_g1

0xcb52,	// (0x000982ef) thumb_sp_fs_scroll_pane_g2

0xcb5b,	// (0x000982f8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb59,	// (0x0009b2f6) thumb_sp_fs_scroll_pane_g

0xcb49,	// (0x000982e6) bg_sp_fs_scroll_pane_g1

0xcb52,	// (0x000982ef) bg_sp_fs_scroll_pane_g2

0xcb5b,	// (0x000982f8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb59,	// (0x0009b2f6) bg_sp_fs_scroll_pane_g

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g1

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g2

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g3

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_x2_t3_g4_g4

0x0003,

0x0066,	// (0x0008b803) list_medium_line_x2_t3_g4_g_ParamLimits

0x0066,	// (0x0008b803) list_medium_line_x2_t3_g4_g

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t1

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t2

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_x2_t3_g4_t

0xe302,	// (0x00099a9f) list_medium_line_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_g2_t1

0xe302,	// (0x00099a9f) list_medium_line_t3_g2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g2_g1

0xe302,	// (0x00099a9f) list_medium_line_t3_g2_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g2_g2

0x0001,

0x005a,	// (0x0008b7f7) list_medium_line_t3_g2_g_ParamLimits

0x005a,	// (0x0008b7f7) list_medium_line_t3_g2_g

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t1

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t2

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g2_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_t3_g2_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_t3_g2_t

0xe55c,	// (0x00099cf9) list_medium_line_right_icon_g1

0xea78,	// (0x0009a215) list_medium_line_right_icon_t1

0xe302,	// (0x00099a9f) list_medium_line_t2_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g1

0xe52e,	// (0x00099ccb) list_medium_line_t2_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_t1

0xe52e,	// (0x00099ccb) list_medium_line_t2_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_t2_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_t2_t

0xe302,	// (0x00099a9f) list_medium_line_t3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g1

0xe52e,	// (0x00099ccb) list_medium_line_t3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_t1

0xe52e,	// (0x00099ccb) list_medium_line_t3_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_t2

0xe52e,	// (0x00099ccb) list_medium_line_t3_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_t3_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_t3_t

0xe302,	// (0x00099a9f) list_medium_line_g3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g3_g1

0xe302,	// (0x00099a9f) list_medium_line_g3_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g3_g2

0xe302,	// (0x00099a9f) list_medium_line_g3_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_g3_g3

0x0002,

0x0058,	// (0x0008b7f5) list_medium_line_g3_g_ParamLimits

0x0058,	// (0x0008b7f5) list_medium_line_g3_g

0xe52e,	// (0x00099ccb) list_medium_line_g3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_g3_t1

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g1

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g2

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t2_g3_g3

0x0002,

0x0058,	// (0x0008b7f5) list_medium_line_t2_g3_g_ParamLimits

0x0058,	// (0x0008b7f5) list_medium_line_t2_g3_g

0xe52e,	// (0x00099ccb) list_medium_line_t2_g3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_g3_t1

0xe52e,	// (0x00099ccb) list_medium_line_t2_g3_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t2_g3_t2

0x0001,

0xf1b7,	// (0x0009a954) list_medium_line_t2_g3_t_ParamLimits

0xf1b7,	// (0x0009a954) list_medium_line_t2_g3_t

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g1_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g1

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g2_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g2

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g3_ParamLimits

0xe302,	// (0x00099a9f) list_medium_line_t3_g3_g3

0x0002,

0x0058,	// (0x0008b7f5) list_medium_line_t3_g3_g_ParamLimits

0x0058,	// (0x0008b7f5) list_medium_line_t3_g3_g

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t1_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t1

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t2_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t2

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t3_ParamLimits

0xe52e,	// (0x00099ccb) list_medium_line_t3_g3_t3

0x0002,

0xf1d4,	// (0x0009a971) list_medium_line_t3_g3_t_ParamLimits

0xf1d4,	// (0x0009a971) list_medium_line_t3_g3_t

0xe55c,	// (0x00099cf9) list_medium_line_right_iconx2_g1

0xe55c,	// (0x00099cf9) list_medium_line_right_iconx2_g2

0x0001,

0xf2ee,	// (0x0009aa8b) list_medium_line_right_iconx2_g

0xea78,	// (0x0009a215) list_medium_line_right_iconx2_t1

0xe55c,	// (0x00099cf9) list_medium_line_t2_right_iconx2_g1

0xe55c,	// (0x00099cf9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf2ee,	// (0x0009aa8b) list_medium_line_t2_right_iconx2_g

0xea78,	// (0x0009a215) list_medium_line_t2_right_iconx2_t1

0xea78,	// (0x0009a215) list_medium_line_t2_right_iconx2_t2

0x0001,

0x0ab8,	// (0x0008c255) list_medium_line_t2_right_iconx2_t

0xea78,	// (0x0009a215) list_medium_line_x4_t4_t1

0xea78,	// (0x0009a215) list_medium_line_x4_t4_t2

0xea78,	// (0x0009a215) list_medium_line_x4_t4_t3

0xea78,	// (0x0009a215) list_medium_line_x4_t4_t4

0x0003,

0x0128,	// (0x0008b8c5) list_medium_line_x4_t4_t

0x84f7,	// (0x00093c94) tport_appsw_pane_ParamLimits

0x84f7,	// (0x00093c94) tport_appsw_pane

0x850f,	// (0x00093cac) tport_contact_pane_ParamLimits

0x850f,	// (0x00093cac) tport_contact_pane

0x8527,	// (0x00093cc4) tport_listscroll_pane_ParamLimits

0x8527,	// (0x00093cc4) tport_listscroll_pane

0x8541,	// (0x00093cde) cell_tport_appsw_pane_ParamLimits

0x8541,	// (0x00093cde) cell_tport_appsw_pane

0xf05d,	// (0x0009a7fa) tport_appsw_pane_g1_ParamLimits

0xf05d,	// (0x0009a7fa) tport_appsw_pane_g1

0xcb64,	// (0x00098301) tport_contact_pane_g1

0xc3c9,	// (0x00097b66) tport_contact_pane_t1

0xcb6d,	// (0x0009830a) tport_contact_pane_t2

0x0001,

0xfb60,	// (0x0009b2fd) tport_contact_pane_t

0xcb7b,	// (0x00098318) list_tport_pane

0xcb84,	// (0x00098321) scroll_pane_cp_030

0x8589,	// (0x00093d26) cell_tport_appsw_pane_g1

0x8599,	// (0x00093d36) cell_tport_appsw_pane_t1

0x85a7,	// (0x00093d44) grid_highlight_pane_cp019

0x85af,	// (0x00093d4c) list_tport_double_graphic_pane_ParamLimits

0x85af,	// (0x00093d4c) list_tport_double_graphic_pane

0xe29b,	// (0x00099a38) list_highlight_pane_cp023_ParamLimits

0xe29b,	// (0x00099a38) list_highlight_pane_cp023

0x85bc,	// (0x00093d59) list_tport_double_graphic_pane_g1_ParamLimits

0x85bc,	// (0x00093d59) list_tport_double_graphic_pane_g1

0x85c9,	// (0x00093d66) list_tport_double_graphic_pane_t1_ParamLimits

0x85c9,	// (0x00093d66) list_tport_double_graphic_pane_t1

0x85de,	// (0x00093d7b) list_tport_double_graphic_pane_t2_ParamLimits

0x85de,	// (0x00093d7b) list_tport_double_graphic_pane_t2

0x0001,

0xfb6c,	// (0x0009b309) list_tport_double_graphic_pane_t_ParamLimits

0xfb6c,	// (0x0009b309) list_tport_double_graphic_pane_t

0xdc01,	// (0x0009939e) main_cale_note_pane

0x6437,	// (0x00091bd4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6437,	// (0x00091bd4) cell_vitu2_function_top_wide_pane_cp01

0x7d8d,	// (0x0009352a) wait_bar_pane_cp05_ParamLimits

0xe29b,	// (0x00099a38) listscroll_cmail_pane

0xcb8d,	// (0x0009832a) list_cmail_pane

0x85f0,	// (0x00093d8d) list_cmail_body_pane

0x8605,	// (0x00093da2) list_single_cmail_header_caption_pane

0x861b,	// (0x00093db8) list_single_cmail_header_detail_pane_ParamLimits

0x861b,	// (0x00093db8) list_single_cmail_header_detail_pane

0xcb9d,	// (0x0009833a) list_single_cmail_header_caption_pane_t1

0x8644,	// (0x00093de1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8644,	// (0x00093de1) list_single_cmail_header_detail_pane_g1

0xcbb4,	// (0x00098351) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcbb4,	// (0x00098351) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb71,	// (0x0009b30e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb71,	// (0x0009b30e) list_single_cmail_header_detail_pane_g

0xcbcd,	// (0x0009836a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcbcd,	// (0x0009836a) list_single_cmail_header_detail_pane_t1

0xcc2d,	// (0x000983ca) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcc2d,	// (0x000983ca) list_single_cmail_header_editor_pane_bg

0xc526,	// (0x00097cc3) list_cmail_body_pane_g1

0xcc44,	// (0x000983e1) list_cmail_body_pane_t1

0xb814,	// (0x00096fb1) list_single_cmail_header_editor_pane_bg_g1

0xe76d,	// (0x00099f0a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb824,	// (0x00096fc1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb81c,	// (0x00096fb9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xba72,	// (0x0009720f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb844,	// (0x00096fe1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb834,	// (0x00096fd1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb83c,	// (0x00096fd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe74d,	// (0x00099eea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x865c,	// (0x00093df9) calenote_gesture_pane_ParamLimits

0x865c,	// (0x00093df9) calenote_gesture_pane

0x867c,	// (0x00093e19) calenote_window_pane_ParamLimits

0x867c,	// (0x00093e19) calenote_window_pane

0xcc52,	// (0x000983ef) popup_note_window_cp01

0x8698,	// (0x00093e35) calenote_swipe_1_pane_ParamLimits

0x8698,	// (0x00093e35) calenote_swipe_1_pane

0x81e4,	// (0x00093981) calenote_swipe_2_pane_ParamLimits

0x81e4,	// (0x00093981) calenote_swipe_2_pane

0xc877,	// (0x00098014) calenote_swipe_1_pane_g1_ParamLimits

0xc877,	// (0x00098014) calenote_swipe_1_pane_g1

0xc884,	// (0x00098021) calenote_swipe_1_pane_g2_ParamLimits

0xc884,	// (0x00098021) calenote_swipe_1_pane_g2

0x0001,

0xfb13,	// (0x0009b2b0) calenote_swipe_1_pane_g_ParamLimits

0xfb13,	// (0x0009b2b0) calenote_swipe_1_pane_g

0xcc64,	// (0x00098401) calenote_swipe_1_pane_t1_ParamLimits

0xcc64,	// (0x00098401) calenote_swipe_1_pane_t1

0xc877,	// (0x00098014) calenote_swipe_2_pane_g1_ParamLimits

0xc877,	// (0x00098014) calenote_swipe_2_pane_g1

0xcc83,	// (0x00098420) calenote_swipe_2_pane_g2_ParamLimits

0xcc83,	// (0x00098420) calenote_swipe_2_pane_g2

0x0001,

0xfb7d,	// (0x0009b31a) calenote_swipe_2_pane_g_ParamLimits

0xfb7d,	// (0x0009b31a) calenote_swipe_2_pane_g

0xcc8f,	// (0x0009842c) calenote_swipe_2_pane_t1_ParamLimits

0xcc8f,	// (0x0009842c) calenote_swipe_2_pane_t1

0xdc01,	// (0x0009939e) main_mup_navstr_pane

0x52c6,	// (0x00090a63) main_mup3_pane_t7_ParamLimits

0x52c6,	// (0x00090a63) main_mup3_pane_t7

0xb517,	// (0x00096cb4) main_mp4_pane_g6_ParamLimits

0xb517,	// (0x00096cb4) main_mp4_pane_g6

0xd9b1,	// (0x0009914e) main_image3_pane_t4_ParamLimits

0xd9b1,	// (0x0009914e) main_image3_pane_t4

0x86ad,	// (0x00093e4a) popup_navstr_preview_pane_ParamLimits

0x86ad,	// (0x00093e4a) popup_navstr_preview_pane

0x86c1,	// (0x00093e5e) scroll_navstr_pane_ParamLimits

0x86c1,	// (0x00093e5e) scroll_navstr_pane

0xdc01,	// (0x0009939e) bg_popup_preview_window_pane_cp04

0xccb6,	// (0x00098453) popup_navstr_preview_pane_t1

0x86d5,	// (0x00093e72) scroll_navstr_pane_g1_ParamLimits

0x86d5,	// (0x00093e72) scroll_navstr_pane_g1

0x86e9,	// (0x00093e86) scroll_navstr_pane_t1_ParamLimits

0x86e9,	// (0x00093e86) scroll_navstr_pane_t1

0xcc5b,	// (0x000983f8) bg_button_pane_cp014

0xcc5b,	// (0x000983f8) bg_button_pane_cp030

0x80bd,	// (0x0009385a) list_double_fisheye_pane_g4_ParamLimits

0x80bd,	// (0x0009385a) list_double_fisheye_pane_g4

0x80c9,	// (0x00093866) list_double_fisheye_pane_g5_ParamLimits

0x80c9,	// (0x00093866) list_double_fisheye_pane_g5

0xf00c,	// (0x0009a7a9) sp_fs_scroll_pane_cp03

0xc9db,	// (0x00098178) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc9e7,	// (0x00098184) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb2b,	// (0x0009b2c8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x828e,	// (0x00093a2b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcb95,	// (0x00098332) sp_fs_scroll_pane_cp02

0xe46e,	// (0x00099c0b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe46e,	// (0x00099c0b) popup_sp_fs_calendar_preview_list_single_pane

0xdc01,	// (0x0009939e) main_cam6_pano_pane

0x9e49,	// (0x000955e6) main_mup3_pane_ParamLimits

0xdc01,	// (0x0009939e) main_phacti_pane

0x7c60,	// (0x000933fd) bg_button_pane_cp11

0x7c7a,	// (0x00093417) main_mobtv_info_pane_g2_ParamLimits

0x7c7a,	// (0x00093417) main_mobtv_info_pane_g2

0x0001,

0xfa90,	// (0x0009b22d) main_mobtv_info_pane_g_ParamLimits

0xfa90,	// (0x0009b22d) main_mobtv_info_pane_g

0x7e57,	// (0x000935f4) sc_clock_pane_t5_ParamLimits

0x7e57,	// (0x000935f4) sc_clock_pane_t5

0x7f1f,	// (0x000936bc) main_radioblah_pane_g1_ParamLimits

0xc7c3,	// (0x00097f60) main_radioblah_pane_t3_ParamLimits

0xc7c3,	// (0x00097f60) main_radioblah_pane_t3

0xc7db,	// (0x00097f78) main_radioblah_pane_t4_ParamLimits

0xc7db,	// (0x00097f78) main_radioblah_pane_t4

0x7f47,	// (0x000936e4) main_radioblah_text_pane_ParamLimits

0x7f47,	// (0x000936e4) main_radioblah_text_pane

0x7f59,	// (0x000936f6) main_radioblah_info_pane_g1_ParamLimits

0x7ff2,	// (0x0009378f) main_radioblah_info_pane_t4_ParamLimits

0x7ff2,	// (0x0009378f) main_radioblah_info_pane_t4

0xe29b,	// (0x00099a38) main_sp_fs_calendar_pane

0x8700,	// (0x00093e9d) main_phacti_pane_g1

0x8708,	// (0x00093ea5) phacti_note_pane_ParamLimits

0x8708,	// (0x00093ea5) phacti_note_pane

0xcccd,	// (0x0009846a) phacti_term_pane_ParamLimits

0xcccd,	// (0x0009846a) phacti_term_pane

0xcce2,	// (0x0009847f) phacti_note_pane_t1_ParamLimits

0xcce2,	// (0x0009847f) phacti_note_pane_t1

0xccf9,	// (0x00098496) phacti_term_pane_g1

0xcd01,	// (0x0009849e) phacti_term_pane_t1_ParamLimits

0xcd01,	// (0x0009849e) phacti_term_pane_t1

0xcd2b,	// (0x000984c8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe50d,	// (0x00099caa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb87,	// (0x0009b324) popup_sp_fs_calendar_preview_list_single_pane_g

0xcd33,	// (0x000984d0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcd33,	// (0x000984d0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcd49,	// (0x000984e6) aid_popup_sp_fs_bg_corner_pane

0xe55c,	// (0x00099cf9) popup_sp_fs_calendar_preview_bg_pane_g1

0xdc01,	// (0x0009939e) popup_sp_fs_calendar_preview_bg_pane

0xcd51,	// (0x000984ee) popup_sp_fs_calendar_preview_list_pane

0x2f00,	// (0x0008e69d) bg_main_sp_fs_cale_pane_ParamLimits

0x2f00,	// (0x0008e69d) bg_main_sp_fs_cale_pane

0xcd62,	// (0x000984ff) listscroll_cale_mrui_pane_ParamLimits

0xcd62,	// (0x000984ff) listscroll_cale_mrui_pane

0xcd77,	// (0x00098514) listscroll_sp_fs_schedule_track_pane

0xcd80,	// (0x0009851d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcd80,	// (0x0009851d) main_sp_fs_ctrlbar_pane_cp01

0xcd93,	// (0x00098530) main_sp_fs_ribbon_pane

0xcd9b,	// (0x00098538) popup_sp_fs_cale_preview_window

0x877d,	// (0x00093f1a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x877d,	// (0x00093f1a) list_single_sp_fs_schedule_track_pane

0xe29b,	// (0x00099a38) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe29b,	// (0x00099a38) bg_sp_fs_highlight_list_pane_cp03

0x8790,	// (0x00093f2d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8790,	// (0x00093f2d) list_single_sp_fs_schedule_track_pane_g1

0x879c,	// (0x00093f39) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x879c,	// (0x00093f39) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb8c,	// (0x0009b329) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb8c,	// (0x0009b329) list_single_sp_fs_schedule_track_pane_g

0x87a8,	// (0x00093f45) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87a8,	// (0x00093f45) list_single_sp_fs_schedule_track_pane_t1

0x87c2,	// (0x00093f5f) sp_fs_schedule_track_pane_ParamLimits

0x87c2,	// (0x00093f5f) sp_fs_schedule_track_pane

0xcdad,	// (0x0009854a) sp_fs_schedule_track_pane_g1

0xcdb5,	// (0x00098552) sp_fs_schedule_track_pane_g2

0xcdbd,	// (0x0009855a) sp_fs_schedule_track_pane_g3

0xcdc5,	// (0x00098562) sp_fs_schedule_track_pane_g4

0xcdcd,	// (0x0009856a) sp_fs_schedule_track_pane_g5

0x0004,

0xfb91,	// (0x0009b32e) sp_fs_schedule_track_pane_g

0xb814,	// (0x00096fb1) bg_sp_fs_schedule_viewer_highlight_g1

0xe76d,	// (0x00099f0a) bg_sp_fs_schedule_viewer_highlight_g2

0xb81c,	// (0x00096fb9) bg_sp_fs_schedule_viewer_highlight_g3

0xb824,	// (0x00096fc1) bg_sp_fs_schedule_viewer_highlight_g4

0xba72,	// (0x0009720f) bg_sp_fs_schedule_viewer_highlight_g5

0xb834,	// (0x00096fd1) bg_sp_fs_schedule_viewer_highlight_g6

0xb83c,	// (0x00096fd9) bg_sp_fs_schedule_viewer_highlight_g7

0xb844,	// (0x00096fe1) bg_sp_fs_schedule_viewer_highlight_g8

0xe74d,	// (0x00099eea) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb9c,	// (0x0009b339) bg_sp_fs_schedule_viewer_highlight_g

0xdc01,	// (0x0009939e) bg_main_sp_fs_ribbon_pane

0x87d3,	// (0x00093f70) main_sp_fs_ribbon_pane_g1

0xcdd5,	// (0x00098572) main_sp_fs_ribbon_pane_t1

0x87dc,	// (0x00093f79) main_sp_fs_ribbon_pane_t2

0xcde4,	// (0x00098581) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbaf,	// (0x0009b34c) main_sp_fs_ribbon_pane_t

0xcdf3,	// (0x00098590) main_sp_fs_ribbon_scheduler_pane

0xcdfb,	// (0x00098598) bg_main_sp_fs_ribbon_pane_g1

0xce04,	// (0x000985a1) bg_main_sp_fs_ribbon_pane_g2

0xce0d,	// (0x000985aa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfbb6,	// (0x0009b353) bg_main_sp_fs_ribbon_pane_g

0xce15,	// (0x000985b2) main_sp_fs_ribbon_scheduler_pane_g1

0xce1e,	// (0x000985bb) main_sp_fs_ribbon_scheduler_pane_g2

0xce27,	// (0x000985c4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfbbd,	// (0x0009b35a) main_sp_fs_ribbon_scheduler_pane_g

0xce30,	// (0x000985cd) list_cale_mrui_pane

0x87eb,	// (0x00093f88) sp_fs_scroll_pane_cp07_ParamLimits

0x87eb,	// (0x00093f88) sp_fs_scroll_pane_cp07

0x8807,	// (0x00093fa4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8807,	// (0x00093fa4) bg_sp_fs_schedule_viewer_highlight

0xce3d,	// (0x000985da) list_single_sp_fs_schedule_track_pane_cp01

0xce45,	// (0x000985e2) list_sp_fs_schedule_track_pane

0xce4d,	// (0x000985ea) sp_fs_scroll_pane_cp06_ParamLimits

0xce4d,	// (0x000985ea) sp_fs_scroll_pane_cp06

0xe55c,	// (0x00099cf9) bgmain_sp_fs_calendar_pane_g1

0x8817,	// (0x00093fb4) list_single_cale_mrui_pane_ParamLimits

0x8817,	// (0x00093fb4) list_single_cale_mrui_pane

0xce5f,	// (0x000985fc) list_single_cale_mrui_row_pane_ParamLimits

0xce5f,	// (0x000985fc) list_single_cale_mrui_row_pane

0xce6c,	// (0x00098609) list_single_cale_mrui_row_pane_g1_ParamLimits

0xce6c,	// (0x00098609) list_single_cale_mrui_row_pane_g1

0xceb1,	// (0x0009864e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xceb1,	// (0x0009864e) list_single_cale_mrui_row_pane_t1

0x8837,	// (0x00093fd4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8837,	// (0x00093fd4) list_single_cale_mrui_row_pane_t2

0xcec3,	// (0x00098660) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcec3,	// (0x00098660) list_single_cale_mrui_row_pane_t3

0xcef2,	// (0x0009868f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcef2,	// (0x0009868f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbcb,	// (0x0009b368) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbcb,	// (0x0009b368) list_single_cale_mrui_row_pane_t

0x889f,	// (0x0009403c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x889f,	// (0x0009403c) list_single_cmail_header_editor_pane_bg_cp01

0x88c5,	// (0x00094062) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88c5,	// (0x00094062) list_single_cmail_header_editor_pane_bg_cp02

0x88e5,	// (0x00094082) main_radioblah_text_pane_t1_ParamLimits

0x88e5,	// (0x00094082) main_radioblah_text_pane_t1

0xcf21,	// (0x000986be) cam6_indi_pane_cp01

0xcf29,	// (0x000986c6) cam6_mode_pane_cp01

0xcf31,	// (0x000986ce) cam6_pano_pane

0xcf3a,	// (0x000986d7) cam6_zoom_pane_cp01

0xcf42,	// (0x000986df) cam6_pano_image_pane

0xcf4d,	// (0x000986ea) cam6_pano_pane_g1

0xc526,	// (0x00097cc3) cam6_pano_pane_g2

0xcf56,	// (0x000986f3) cam6_pano_pane_g3

0xcf5f,	// (0x000986fc) cam6_pano_pane_g4

0xb20c,	// (0x000969a9) cam6_pano_pane_g5

0xcf68,	// (0x00098705) cam6_pano_pane_g6

0xcf72,	// (0x0009870f) cam6_pano_pane_g7

0xcf7a,	// (0x00098717) cam6_pano_pane_g8

0xcf83,	// (0x00098720) cam6_pano_pane_g9

0x0008,

0xfbd4,	// (0x0009b371) cam6_pano_pane_g

0xdc01,	// (0x0009939e) main_browser_tag_pane

0xccae,	// (0x0009844b) grid_navstr_albumart_pane

0xcf8e,	// (0x0009872b) cell_navstr_albumart_pane_ParamLimits

0xcf8e,	// (0x0009872b) cell_navstr_albumart_pane

0xcfae,	// (0x0009874b) cell_navstr_albumart_pane_g1

0xa60a,	// (0x00095da7) cell_navstr_albumart_pane_g2

0xa61a,	// (0x00095db7) cell_navstr_albumart_pane_g3

0xa612,	// (0x00095daf) cell_navstr_albumart_pane_g4

0x0003,

0xfbe7,	// (0x0009b384) cell_navstr_albumart_pane_g

0x88ff,	// (0x0009409c) bt_list_pane_ParamLimits

0x88ff,	// (0x0009409c) bt_list_pane

0x8913,	// (0x000940b0) bt_list_pane_t1

0x8922,	// (0x000940bf) bt_list_pane_t2

0x0001,

0xfbf0,	// (0x0009b38d) bt_list_pane_t

0xdc01,	// (0x0009939e) main_cale_prevew_pane

0x8931,	// (0x000940ce) popup_cale_preview_window_ParamLimits

0x8931,	// (0x000940ce) popup_cale_preview_window

0xe29b,	// (0x00099a38) bg_popup_preview_window_pane_cp05_ParamLimits

0xe29b,	// (0x00099a38) bg_popup_preview_window_pane_cp05

0xcfb6,	// (0x00098753) list_cale_preview_pane_ParamLimits

0xcfb6,	// (0x00098753) list_cale_preview_pane

0x894c,	// (0x000940e9) list_double_cale_preview_pane_ParamLimits

0x894c,	// (0x000940e9) list_double_cale_preview_pane

0x895e,	// (0x000940fb) list_single_cale_preview_pane_ParamLimits

0x895e,	// (0x000940fb) list_single_cale_preview_pane

0x8974,	// (0x00094111) list_single_cale_preview_pane_g1

0x897c,	// (0x00094119) list_single_cale_preview_pane_t1_ParamLimits

0x897c,	// (0x00094119) list_single_cale_preview_pane_t1

0x8991,	// (0x0009412e) list_double_cale_preview_pane_g1

0x8999,	// (0x00094136) list_double_cale_preview_pane_t1_ParamLimits

0x8999,	// (0x00094136) list_double_cale_preview_pane_t1

0x89ae,	// (0x0009414b) list_double_cale_preview_pane_t2_ParamLimits

0x89ae,	// (0x0009414b) list_double_cale_preview_pane_t2

0x0001,

0xfbf5,	// (0x0009b392) list_double_cale_preview_pane_t_ParamLimits

0xfbf5,	// (0x0009b392) list_double_cale_preview_pane_t

0xdc01,	// (0x0009939e) main_ezdial_pane

0xe29b,	// (0x00099a38) main_sp_fs_email_pane_ParamLimits

0x81fe,	// (0x0009399b) cmail_ddmenu_btn01_pane_ParamLimits

0x81fe,	// (0x0009399b) cmail_ddmenu_btn01_pane

0x8211,	// (0x000939ae) cmail_ddmenu_btn02_pane_ParamLimits

0x8211,	// (0x000939ae) cmail_ddmenu_btn02_pane

0x8234,	// (0x000939d1) cmail_ddmenu_btn03_pane_ParamLimits

0x8234,	// (0x000939d1) cmail_ddmenu_btn03_pane

0x82cd,	// (0x00093a6a) main_sp_fs_ctrlbar_pane_ParamLimits

0x82f1,	// (0x00093a8e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x85f0,	// (0x00093d8d) list_cmail_body_pane_ParamLimits

0xcbab,	// (0x00098348) bg_button_pane_cp12

0xcbc0,	// (0x0009835d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcbc0,	// (0x0009835d) list_single_cmail_header_detail_pane_g3

0xcc09,	// (0x000983a6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc09,	// (0x000983a6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb78,	// (0x0009b315) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb78,	// (0x0009b315) list_single_cmail_header_detail_pane_t

0xcd16,	// (0x000984b3) phacti_term_pane_t2_ParamLimits

0xcd16,	// (0x000984b3) phacti_term_pane_t2

0x0001,

0xfb82,	// (0x0009b31f) phacti_term_pane_t_ParamLimits

0xfb82,	// (0x0009b31f) phacti_term_pane_t

0xcfc2,	// (0x0009875f) aid_size_list_single_double

0x89c6,	// (0x00094163) popup_ezdial_listscroll_window

0x89e2,	// (0x0009417f) popup_number_entry_window_cp01

0xe526,	// (0x00099cc3) bg_popup_call_pane_cp09

0xcfce,	// (0x0009876b) ezdial_list_pane

0xcfd6,	// (0x00098773) scroll_pane_cp23

0x2f00,	// (0x0008e69d) bg_button_pane_cp028_ParamLimits

0x2f00,	// (0x0008e69d) bg_button_pane_cp028

0x89f0,	// (0x0009418d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x89f0,	// (0x0009418d) cmail_ddmenu_btn01_pane_g1

0x89fc,	// (0x00094199) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x89fc,	// (0x00094199) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbfa,	// (0x0009b397) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbfa,	// (0x0009b397) cmail_ddmenu_btn01_pane_g

0xcfde,	// (0x0009877b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcfde,	// (0x0009877b) cmail_ddmenu_btn01_pane_t1

0x2f00,	// (0x0008e69d) bg_button_pane_cp029_ParamLimits

0x2f00,	// (0x0008e69d) bg_button_pane_cp029

0x8a10,	// (0x000941ad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a10,	// (0x000941ad) cmail_ddmenu_btn02_pane_g1

0x8a28,	// (0x000941c5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a28,	// (0x000941c5) cmail_ddmenu_btn02_pane_t1

0xe29b,	// (0x00099a38) bg_button_pane_cp031_ParamLimits

0xe29b,	// (0x00099a38) bg_button_pane_cp031

0x8a10,	// (0x000941ad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a10,	// (0x000941ad) cmail_ddmenu_btn03_pane_g1

0x8a28,	// (0x000941c5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a28,	// (0x000941c5) cmail_ddmenu_btn03_pane_t1

0x5c21,	// (0x000913be) cell_dialer2_keypad_pane_t1_ParamLimits

0x5c3b,	// (0x000913d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5c3b,	// (0x000913d8) cell_dialer2_keypad_pane_t1_copy1

0x7a83,	// (0x00093220) ncimui_group_button_pane

0xe29b,	// (0x00099a38) main_sp_fs_calendar_pane_ParamLimits

0x8605,	// (0x00093da2) list_single_cmail_header_caption_pane_ParamLimits

0xcd59,	// (0x000984f6) aid_recal_txt_sm_pane

0xdc01,	// (0x0009939e) mian_recal_day_pane

0xcd9b,	// (0x00098538) popup_sp_fs_cale_preview_window_ParamLimits

0xcff4,	// (0x00098791) list_recal_day_pane

0xd036,	// (0x000987d3) list_single_recal_day_pane_ParamLimits

0xd036,	// (0x000987d3) list_single_recal_day_pane

0xd048,	// (0x000987e5) list_single_recal_day_pane_g1_ParamLimits

0xd048,	// (0x000987e5) list_single_recal_day_pane_g1

0xd054,	// (0x000987f1) list_single_recal_day_pane_g2_ParamLimits

0xd054,	// (0x000987f1) list_single_recal_day_pane_g2

0xd060,	// (0x000987fd) list_single_recal_day_pane_g3_ParamLimits

0xd060,	// (0x000987fd) list_single_recal_day_pane_g3

0x8a4c,	// (0x000941e9) list_single_recal_day_pane_g4_ParamLimits

0x8a4c,	// (0x000941e9) list_single_recal_day_pane_g4

0xd06c,	// (0x00098809) list_single_recal_day_pane_g5_ParamLimits

0xd06c,	// (0x00098809) list_single_recal_day_pane_g5

0xd078,	// (0x00098815) list_single_recal_day_pane_g6_ParamLimits

0xd078,	// (0x00098815) list_single_recal_day_pane_g6

0x0004,

0xfc09,	// (0x0009b3a6) list_single_recal_day_pane_g_ParamLimits

0xfc09,	// (0x0009b3a6) list_single_recal_day_pane_g

0xd08c,	// (0x00098829) list_single_recal_day_pane_t1

0xd09e,	// (0x0009883b) list_single_recal_day_pane_t2

0x0001,

0xfc14,	// (0x0009b3b1) list_single_recal_day_pane_t

0x8a64,	// (0x00094201) ncimui_query_button_pane_ParamLimits

0x8a64,	// (0x00094201) ncimui_query_button_pane

0x8a74,	// (0x00094211) ncimui_query_button_pane_t1_ParamLimits

0x8a74,	// (0x00094211) ncimui_query_button_pane_t1

0xd0b0,	// (0x0009884d) ncimui_query_button_pane_t2_ParamLimits

0xd0b0,	// (0x0009884d) ncimui_query_button_pane_t2

0x0001,

0xfc19,	// (0x0009b3b6) ncimui_query_button_pane_t_ParamLimits

0xfc19,	// (0x0009b3b6) ncimui_query_button_pane_t

0x8a87,	// (0x00094224) query_button_pane_ParamLimits

0x8a87,	// (0x00094224) query_button_pane

0xdc01,	// (0x0009939e) bg_button_pane_cp0028

0xd0c3,	// (0x00098860) query_button_pane_t1

0x4679,	// (0x0008fe16) main_tport_pane_ParamLimits

0x84b4,	// (0x00093c51) bg_popup_window_pane_cp01_ParamLimits

0x84b4,	// (0x00093c51) bg_popup_window_pane_cp01

0x84cf,	// (0x00093c6c) heading_pane_cp08_ParamLimits

0x84cf,	// (0x00093c6c) heading_pane_cp08

0x84e2,	// (0x00093c7f) heading_pane_cp07_ParamLimits

0x84e2,	// (0x00093c7f) heading_pane_cp07

0x8589,	// (0x00093d26) cell_tport_appsw_pane_g2

0x0002,

0xfb65,	// (0x0009b302) cell_tport_appsw_pane_g

0x318e,	// (0x0008e92b) input_candi_list_open_g1

0xe925,	// (0x0009a0c2) list_cale_time_pane_g6_ParamLimits

0xe925,	// (0x0009a0c2) list_cale_time_pane_g6

0x4c9a,	// (0x00090437) aid_size_touch_calib_1_ParamLimits

0x4c9a,	// (0x00090437) aid_size_touch_calib_1

0x4cac,	// (0x00090449) aid_size_touch_calib_2_ParamLimits

0x4cac,	// (0x00090449) aid_size_touch_calib_2

0x4cc4,	// (0x00090461) aid_size_touch_calib_3_ParamLimits

0x4cc4,	// (0x00090461) aid_size_touch_calib_3

0x4ce2,	// (0x0009047f) aid_size_touch_calib_4_ParamLimits

0x4ce2,	// (0x0009047f) aid_size_touch_calib_4

0x4cfa,	// (0x00090497) main_touch_calib_button_group_pane_ParamLimits

0x4cfa,	// (0x00090497) main_touch_calib_button_group_pane

0x4d12,	// (0x000904af) main_touch_calib_pane_g1_ParamLimits

0x4d24,	// (0x000904c1) main_touch_calib_pane_g2_ParamLimits

0x4d36,	// (0x000904d3) main_touch_calib_pane_g3_ParamLimits

0x4d48,	// (0x000904e5) main_touch_calib_pane_g4_ParamLimits

0xf5c5,	// (0x0009ad62) main_touch_calib_pane_g_ParamLimits

0x4d5a,	// (0x000904f7) main_touch_calib_pane_t1_ParamLimits

0x4d74,	// (0x00090511) main_touch_calib_pane_t2_ParamLimits

0x4d8e,	// (0x0009052b) main_touch_calib_pane_t3_ParamLimits

0x4da2,	// (0x0009053f) main_touch_calib_pane_t4_ParamLimits

0x4db6,	// (0x00090553) main_touch_calib_pane_t5_ParamLimits

0xf5ce,	// (0x0009ad6b) main_touch_calib_pane_t_ParamLimits

0xafcf,	// (0x0009676c) list_single_fp_cale_pane_g3_ParamLimits

0xafcf,	// (0x0009676c) list_single_fp_cale_pane_g3

0x9e49,	// (0x000955e6) bg_button_pane_cp012_ParamLimits

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp03_ParamLimits

0x6c23,	// (0x000923c0) cell_vitu2_function_top_pane_g1_ParamLimits

0x9e49,	// (0x000955e6) bg_vkb2_func_pane_cp04_ParamLimits

0x7a0e,	// (0x000931ab) main_ncimui_button_group_pane_ParamLimits

0x7a0e,	// (0x000931ab) main_ncimui_button_group_pane

0x7a6e,	// (0x0009320b) main_ncimui_pane_t3_ParamLimits

0x7a6e,	// (0x0009320b) main_ncimui_pane_t3

0xccc4,	// (0x00098461) phacti_button_group_pane

0xcfc2,	// (0x0009875f) aid_size_list_single_double_ParamLimits

0x89c6,	// (0x00094163) popup_ezdial_listscroll_window_ParamLimits

0x89e2,	// (0x0009417f) popup_number_entry_window_cp01_ParamLimits

0x8a9a,	// (0x00094237) phacti_button_pane_ParamLimits

0x8a9a,	// (0x00094237) phacti_button_pane

0xdc01,	// (0x0009939e) bg_button_pane_cp14

0xd0d1,	// (0x0009886e) phacti_button_pane_t1

0x8aab,	// (0x00094248) main_touch_calib_button_pane_ParamLimits

0x8aab,	// (0x00094248) main_touch_calib_button_pane

0xe374,	// (0x00099b11) bg_button_pane_cp18_ParamLimits

0xe374,	// (0x00099b11) bg_button_pane_cp18

0xd0df,	// (0x0009887c) main_touch_calib_button_pane_t1_ParamLimits

0xd0df,	// (0x0009887c) main_touch_calib_button_pane_t1

0xd0f5,	// (0x00098892) main_touch_calib_button_pane_t2_ParamLimits

0xd0f5,	// (0x00098892) main_touch_calib_button_pane_t2

0x0001,

0xfc1e,	// (0x0009b3bb) main_touch_calib_button_pane_t_ParamLimits

0xfc1e,	// (0x0009b3bb) main_touch_calib_button_pane_t

0xdc01,	// (0x0009939e) cell_ncimui_button_pane

0xdc01,	// (0x0009939e) bg_button_pane_cp032

0xd113,	// (0x000988b0) cell_ncimui_button_pane_t1

0xb74a,	// (0x00096ee7) image3_infobar_pane_ParamLimits

0xb74a,	// (0x00096ee7) image3_infobar_pane

0x7e83,	// (0x00093620) fs_bigclock_status_pane_ParamLimits

0x7e83,	// (0x00093620) fs_bigclock_status_pane

0x7e90,	// (0x0009362d) main_fs_bigclock_clock_pane_ParamLimits

0x7e90,	// (0x0009362d) main_fs_bigclock_clock_pane

0x7eae,	// (0x0009364b) main_fs_bigclock_indi_pane_ParamLimits

0x7eae,	// (0x0009364b) main_fs_bigclock_indi_pane

0x7ee0,	// (0x0009367d) main_fs_bigclock_swipe_pane_ParamLimits

0x7ee0,	// (0x0009367d) main_fs_bigclock_swipe_pane

0xdc01,	// (0x0009939e) main_fs_clock_dumped_data

0xc633,	// (0x00097dd0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc633,	// (0x00097dd0) list_single_fs_bigclock_indicator_pane_g1

0xc64e,	// (0x00097deb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc64e,	// (0x00097deb) list_single_fs_bigclock_indicator_pane_g2

0xc668,	// (0x00097e05) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc668,	// (0x00097e05) list_single_fs_bigclock_indicator_pane_g3

0xc682,	// (0x00097e1f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc682,	// (0x00097e1f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfac4,	// (0x0009b261) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfac4,	// (0x0009b261) list_single_fs_bigclock_indicator_pane_g

0xc6ad,	// (0x00097e4a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc6ad,	// (0x00097e4a) list_single_fs_bigclock_indicator_pane_t1

0xc6d5,	// (0x00097e72) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc6d5,	// (0x00097e72) list_single_fs_bigclock_indicator_pane_t2

0xc6fd,	// (0x00097e9a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6fd,	// (0x00097e9a) list_single_fs_bigclock_indicator_pane_t3

0xc725,	// (0x00097ec2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc725,	// (0x00097ec2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfacf,	// (0x0009b26c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfacf,	// (0x0009b26c) list_single_fs_bigclock_indicator_pane_t

0xd121,	// (0x000988be) image3_infobar_fav_pane_ParamLimits

0xd121,	// (0x000988be) image3_infobar_fav_pane

0xd131,	// (0x000988ce) image3_infobar_loc_pane_ParamLimits

0xd131,	// (0x000988ce) image3_infobar_loc_pane

0xd145,	// (0x000988e2) image3_infobar_time_pane_ParamLimits

0xd145,	// (0x000988e2) image3_infobar_time_pane

0xe55c,	// (0x00099cf9) image3_infobar_time_pane_g1

0xd155,	// (0x000988f2) image3_infobar_time_pane_t1

0xe55c,	// (0x00099cf9) image3_infobar_loc_pane_g1

0xd163,	// (0x00098900) image3_infobar_loc_pane_g2

0x0001,

0xfc23,	// (0x0009b3c0) image3_infobar_loc_pane_g

0xd16b,	// (0x00098908) image3_infobar_loc_pane_t1

0xe55c,	// (0x00099cf9) image3_infobar_fav_pane_g1

0xd179,	// (0x00098916) image3_infobar_fav_pane_g2

0x0001,

0xfc28,	// (0x0009b3c5) image3_infobar_fav_pane_g

0xd181,	// (0x0009891e) fs_bigclock_status_battery_pane

0xd18a,	// (0x00098927) fs_bigclock_status_signal_pane

0xd193,	// (0x00098930) fs_bigclock_status_title_pane

0xd19c,	// (0x00098939) fs_bigclock_status_signal_pane_g1

0xd1a5,	// (0x00098942) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc2d,	// (0x0009b3ca) fs_bigclock_status_signal_pane_g

0xd1ad,	// (0x0009894a) fs_bigclock_status_battery_pane_g1

0xd1b6,	// (0x00098953) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc32,	// (0x0009b3cf) fs_bigclock_status_battery_pane_g

0xd1be,	// (0x0009895b) fs_bigclock_status_title_pane_t1

0x8ac0,	// (0x0009425d) main_fs_bigclock_clock_pane_g1

0x8ac0,	// (0x0009425d) main_fs_bigclock_clock_pane_g2

0x8ad1,	// (0x0009426e) main_fs_bigclock_clock_pane_g3

0x8ad1,	// (0x0009426e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc37,	// (0x0009b3d4) main_fs_bigclock_clock_pane_g

0x8ae4,	// (0x00094281) main_fs_bigclock_clock_pane_t1

0x8afa,	// (0x00094297) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc40,	// (0x0009b3dd) main_fs_bigclock_clock_pane_t

0xd1cc,	// (0x00098969) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1cc,	// (0x00098969) list_single_fs_bigclock_indicator_pane

0xd1dd,	// (0x0009897a) list_single_fs_bigclock_pane_ParamLimits

0xd1dd,	// (0x0009897a) list_single_fs_bigclock_pane

0xd203,	// (0x000989a0) main_fs_bigclock_indicator_pane_t1

0xd212,	// (0x000989af) list_single_fs_bigclock_pane_g1

0xd21a,	// (0x000989b7) list_single_fs_bigclock_pane_t1

0xe55c,	// (0x00099cf9) main_fs_bigclock_swipe_pane_g1

0xd25d,	// (0x000989fa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc51,	// (0x0009b3ee) main_fs_bigclock_swipe_pane_g

0xd265,	// (0x00098a02) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd265,	// (0x00098a02) main_fs_bigclock_swipe_pane_t1

0x2c20,	// (0x0008e3bd) call_type_pane_ParamLimits

0xdc01,	// (0x0009939e) main_btmg_pane

0xce98,	// (0x00098635) list_single_cale_mrui_row_pane_g2_ParamLimits

0xce98,	// (0x00098635) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbc4,	// (0x0009b361) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbc4,	// (0x0009b361) list_single_cale_mrui_row_pane_g

0xd01d,	// (0x000987ba) list_recal_vselct_arw_lo_pane

0xd025,	// (0x000987c2) list_recal_vselct_arw_up_pane

0xd02d,	// (0x000987ca) list_recal_vselct_pane

0x8b54,	// (0x000942f1) btmg_button_pane

0x8b5e,	// (0x000942fb) main_btmg_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp044

0xd282,	// (0x00098a1f) btmg_button_pane_t1

0xa75a,	// (0x00095ef7) aid_listscroll_gen

0xe29b,	// (0x00099a38) main_cntbar_detail_pane

0xcb8d,	// (0x0009832a) list_cmail_folder_pane

0xf00c,	// (0x0009a7a9) sp_fs_scroll_pane_cp03_ParamLimits

0x8b68,	// (0x00094305) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b68,	// (0x00094305) list_single_fs_dyc_pane_cp01

0xd290,	// (0x00098a2d) aid_size_cmail_indent

0xd299,	// (0x00098a36) list_single_dyc_row_pane_cp01

0x8ba9,	// (0x00094346) cntbar_detail_list_pane_ParamLimits

0x8ba9,	// (0x00094346) cntbar_detail_list_pane

0x8bf5,	// (0x00094392) main_cntbar_detail_cont_pane_ParamLimits

0x8bf5,	// (0x00094392) main_cntbar_detail_cont_pane

0xf00c,	// (0x0009a7a9) scroll_pane_cp032_ParamLimits

0xf00c,	// (0x0009a7a9) scroll_pane_cp032

0x8c09,	// (0x000943a6) cntbar_detail_list_event_pane_ParamLimits

0x8c09,	// (0x000943a6) cntbar_detail_list_event_pane

0x8bb9,	// (0x00094356) cntbar_detail_list_shct_pane

0xe7bb,	// (0x00099f58) aid_list_gen

0xd2a2,	// (0x00098a3f) aid_scroll

0xd2ab,	// (0x00098a48) aid_size_touch_scroll_bar

0x8088,	// (0x00093825) aid_list_double

0xd2b4,	// (0x00098a51) aid_list_single

0xd2b4,	// (0x00098a51) aid_list_single_lg

0xd2bd,	// (0x00098a5a) aid_list_z_g_a_sm

0xd2c5,	// (0x00098a62) aid_list_z_g_d

0xd2cd,	// (0x00098a6a) aid_txt_z_prm

0x8c19,	// (0x000943b6) aid_txt_z_prm_cp01

0x8c27,	// (0x000943c4) aid_txt_z_sec

0x8c35,	// (0x000943d2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c35,	// (0x000943d2) main_cntbar_detail_cont_pane_g1

0x8c49,	// (0x000943e6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c49,	// (0x000943e6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc56,	// (0x0009b3f3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc56,	// (0x0009b3f3) main_cntbar_detail_cont_pane_g

0xd2db,	// (0x00098a78) main_cntbar_detail_cont_pane_t1

0xd2e9,	// (0x00098a86) main_cntbar_detail_cont_pane_t2

0xd2f7,	// (0x00098a94) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc5b,	// (0x0009b3f8) main_cntbar_detail_cont_pane_t

0x8c59,	// (0x000943f6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c59,	// (0x000943f6) cell_cntbar_detail_list_shct_pane

0xd305,	// (0x00098aa2) cntbar_detail_list_shct_pane_g1

0xd30e,	// (0x00098aab) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc62,	// (0x0009b3ff) cntbar_detail_list_shct_pane_g

0x8c6d,	// (0x0009440a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c6d,	// (0x0009440a) cntbar_detail_list_event_pane_g1

0x8c79,	// (0x00094416) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c79,	// (0x00094416) cntbar_detail_list_event_pane_g2

0x0005,

0xfc67,	// (0x0009b404) cntbar_detail_list_event_pane_g_ParamLimits

0xfc67,	// (0x0009b404) cntbar_detail_list_event_pane_g

0x8ce5,	// (0x00094482) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ce5,	// (0x00094482) cntbar_detail_list_event_pane_t1

0x8cfa,	// (0x00094497) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cfa,	// (0x00094497) cntbar_detail_list_event_pane_t2

0x0002,

0xfc74,	// (0x0009b411) cntbar_detail_list_event_pane_t_ParamLimits

0xfc74,	// (0x0009b411) cntbar_detail_list_event_pane_t

0xe55c,	// (0x00099cf9) cell_cntbar_detail_list_shct_pane_g1

0xef1f,	// (0x0009a6bc) navi_pane_mv_g3

0xe29b,	// (0x00099a38) main_cntbar_detail_pane_ParamLimits

0xdc01,	// (0x0009939e) main_notif_wgt_pane

0xb4a5,	// (0x00096c42) aid_tch_main_mp4_pane_g4

0xb6d7,	// (0x00096e74) popup_slider_window_cp02

0xd013,	// (0x000987b0) list_recal_day_event_pane

0x8b7d,	// (0x0009431a) cntbar_detail_btn_pane_ParamLimits

0x8b7d,	// (0x0009431a) cntbar_detail_btn_pane

0x8b93,	// (0x00094330) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b93,	// (0x00094330) cntbar_detail_btn_pane_cp01

0x8bb9,	// (0x00094356) cntbar_detail_list_shct_pane_ParamLimits

0x8bc9,	// (0x00094366) cntbar_detail_pane_g1_ParamLimits

0x8bc9,	// (0x00094366) cntbar_detail_pane_g1

0x8bd9,	// (0x00094376) cntbar_detail_pane_t1_ParamLimits

0x8bd9,	// (0x00094376) cntbar_detail_pane_t1

0x8c85,	// (0x00094422) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c85,	// (0x00094422) cntbar_detail_list_event_pane_g3

0x8c9d,	// (0x0009443a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c9d,	// (0x0009443a) cntbar_detail_list_event_pane_g4

0x8cb5,	// (0x00094452) cntbar_detail_list_event_pane_g5_ParamLimits

0x8cb5,	// (0x00094452) cntbar_detail_list_event_pane_g5

0x8ccd,	// (0x0009446a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ccd,	// (0x0009446a) cntbar_detail_list_event_pane_g6

0x8d0f,	// (0x000944ac) cntbar_detail_list_event_pane_t3_ParamLimits

0x8d0f,	// (0x000944ac) cntbar_detail_list_event_pane_t3

0x8d21,	// (0x000944be) popup_notif_wgt_window_ParamLimits

0x8d21,	// (0x000944be) popup_notif_wgt_window

0x8d3a,	// (0x000944d7) popup_submenu_window_cp01_ParamLimits

0x8d3a,	// (0x000944d7) popup_submenu_window_cp01

0xe526,	// (0x00099cc3) bg_popup_window_pane_cp10

0xd317,	// (0x00098ab4) listscroll_notif_wgt_pane

0xd329,	// (0x00098ac6) list_notif_wgt_window

0xd332,	// (0x00098acf) scroll_pane_cp033

0x8d50,	// (0x000944ed) list_notif_wgt_row_pane_ParamLimits

0x8d50,	// (0x000944ed) list_notif_wgt_row_pane

0xd33b,	// (0x00098ad8) aid_size_list_notif_wgt_del

0xd348,	// (0x00098ae5) list_notif_wgt_row_pane_g1

0xd354,	// (0x00098af1) list_notif_wgt_row_pane_g2

0xd363,	// (0x00098b00) list_notif_wgt_row_pane_g3

0x0002,

0xfc7b,	// (0x0009b418) list_notif_wgt_row_pane_g

0xd370,	// (0x00098b0d) list_notif_wgt_row_pane_t1

0xd386,	// (0x00098b23) list_notif_wgt_row_pane_t2

0xd398,	// (0x00098b35) list_notif_wgt_row_pane_t3

0x0002,

0xfc82,	// (0x0009b41f) list_notif_wgt_row_pane_t

0xba8c,	// (0x00097229) list_recal_day_event_pane_g1

0xd3aa,	// (0x00098b47) list_recal_day_event_pane_t1

0xdc01,	// (0x0009939e) bg_button_pane_cp045

0xd3b9,	// (0x00098b56) cntbar_detail_btn_pane_t1

0x2f00,	// (0x0008e69d) main_callh_pane_ParamLimits

0x2f00,	// (0x0008e69d) main_callh_pane

0xdc01,	// (0x0009939e) main_coverflow0_pane

0xdc01,	// (0x0009939e) main_wgtman_pane

0x7ef8,	// (0x00093695) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7ef8,	// (0x00093695) main_fs_bigclock_unlock_btn_pane

0x8581,	// (0x00093d1e) bg_button_pane_cp16

0x8591,	// (0x00093d2e) cell_tport_appsw_pane_g3

0x8d60,	// (0x000944fd) cf0_flow_pane_ParamLimits

0x8d60,	// (0x000944fd) cf0_flow_pane

0xd3c7,	// (0x00098b64) listscroll_cf0_pane

0xd3d2,	// (0x00098b6f) main_cf0_pane_g1

0x8d75,	// (0x00094512) main_cf0_pane_t1_ParamLimits

0x8d75,	// (0x00094512) main_cf0_pane_t1

0x8d8c,	// (0x00094529) main_cf0_pane_t2_ParamLimits

0x8d8c,	// (0x00094529) main_cf0_pane_t2

0x0001,

0xfc8e,	// (0x0009b42b) main_cf0_pane_t_ParamLimits

0xfc8e,	// (0x0009b42b) main_cf0_pane_t

0xd3e4,	// (0x00098b81) scroll_pane_cp11

0x8da3,	// (0x00094540) cf0_flow_pane_g1

0x8dab,	// (0x00094548) cf0_flow_pane_g2

0x0001,

0xfc93,	// (0x0009b430) cf0_flow_pane_g

0x8db3,	// (0x00094550) cf0_flow_pane_t1

0xdc01,	// (0x0009939e) main_call6_pane

0xdc01,	// (0x0009939e) main_calllock_pane

0x8dc1,	// (0x0009455e) call6_btn_grp_pane_ParamLimits

0x8dc1,	// (0x0009455e) call6_btn_grp_pane

0x8ddb,	// (0x00094578) call6_pane_g1_ParamLimits

0x8ddb,	// (0x00094578) call6_pane_g1

0x8df1,	// (0x0009458e) popup_call6_1st_window_ParamLimits

0x8df1,	// (0x0009458e) popup_call6_1st_window

0x8e02,	// (0x0009459f) popup_call6_2nd_window_ParamLimits

0x8e02,	// (0x0009459f) popup_call6_2nd_window

0x8e13,	// (0x000945b0) cell_call6_btn_pane_ParamLimits

0x8e13,	// (0x000945b0) cell_call6_btn_pane

0xe526,	// (0x00099cc3) bg_popup_call2_in_pane_cp03

0xd3ef,	// (0x00098b8c) popup_call6_1st_window_g1

0xd3f7,	// (0x00098b94) popup_call6_1st_window_g2

0xd3ff,	// (0x00098b9c) popup_call6_1st_window_g3

0x0002,

0xfc98,	// (0x0009b435) popup_call6_1st_window_g

0xd407,	// (0x00098ba4) popup_call6_1st_window_t1

0xd416,	// (0x00098bb3) popup_call6_1st_window_t2

0xd424,	// (0x00098bc1) popup_call6_1st_window_t3

0x0002,

0xfc9f,	// (0x0009b43c) popup_call6_1st_window_t

0xe526,	// (0x00099cc3) bg_popup_call2_in_pane_cp04

0xd432,	// (0x00098bcf) popup_call6_2nd_window_g1

0xd43a,	// (0x00098bd7) popup_call6_2nd_window_g2

0xd442,	// (0x00098bdf) popup_call6_2nd_window_g3

0x0002,

0xfca6,	// (0x0009b443) popup_call6_2nd_window_g

0xd44a,	// (0x00098be7) popup_call6_2nd_window_t1

0x9e57,	// (0x000955f4) bg_button_pane_cp15

0xdbe9,	// (0x00099386) cell_call6_btn_pane_g1

0xdbf2,	// (0x0009938f) cell_call6_btn_pane_t1

0x8e26,	// (0x000945c3) listscroll_wgtman_pane_ParamLimits

0x8e26,	// (0x000945c3) listscroll_wgtman_pane

0x8e47,	// (0x000945e4) wgtman_btn_pane_ParamLimits

0x8e47,	// (0x000945e4) wgtman_btn_pane

0xed26,	// (0x0009a4c3) aid_scroll_copy1

0xd459,	// (0x00098bf6) list_wgtman_pane

0x8e8a,	// (0x00094627) wgtman_btn_pane_g1_ParamLimits

0x8e8a,	// (0x00094627) wgtman_btn_pane_g1

0x8eb6,	// (0x00094653) wgtman_btn_pane_t1_ParamLimits

0x8eb6,	// (0x00094653) wgtman_btn_pane_t1

0xd463,	// (0x00098c00) wgtman_btn_pane_t2_ParamLimits

0xd463,	// (0x00098c00) wgtman_btn_pane_t2

0x0001,

0xfcad,	// (0x0009b44a) wgtman_btn_pane_t_ParamLimits

0xfcad,	// (0x0009b44a) wgtman_btn_pane_t

0x8ef3,	// (0x00094690) listrow_wgtman_pane_ParamLimits

0x8ef3,	// (0x00094690) listrow_wgtman_pane

0x8f05,	// (0x000946a2) listrow_wgtman_pane_g1

0x8f12,	// (0x000946af) listrow_wgtman_pane_g2

0x0001,

0xfcb2,	// (0x0009b44f) listrow_wgtman_pane_g

0x8f30,	// (0x000946cd) listrow_wgtman_pane_t1

0x8f48,	// (0x000946e5) listrow_wgtman_pane_t2

0x0001,

0xfcb7,	// (0x0009b454) listrow_wgtman_pane_t

0x8f6e,	// (0x0009470b) wait_bar_pane_cp09

0xd47a,	// (0x00098c17) main_calllock_btn_pane

0xd484,	// (0x00098c21) main_calllock_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp17

0xd48c,	// (0x00098c29) main_calllock_btn_pane_g1

0xd495,	// (0x00098c32) main_calllock_btn_pane_t1

0xdc01,	// (0x0009939e) main_dialer3_pane

0xdc01,	// (0x0009939e) main_fmrd2_pane

0xe55c,	// (0x00099cf9) main_fs_bigclock_unlock_btn_pane_g1

0x8f88,	// (0x00094725) main_fs_bigclock_unlock_btn_pane_t1

0x8f96,	// (0x00094733) area_fmrd2_info_pane_ParamLimits

0x8f96,	// (0x00094733) area_fmrd2_info_pane

0x8fa7,	// (0x00094744) area_fmrd2_visual_pane_ParamLimits

0x8fa7,	// (0x00094744) area_fmrd2_visual_pane

0x8fb5,	// (0x00094752) fmrd2_indi_pane_ParamLimits

0x8fb5,	// (0x00094752) fmrd2_indi_pane

0x8fc2,	// (0x0009475f) area_fmrd2_visual_pane_g1

0x8fca,	// (0x00094767) area_fmrd2_visual_pane_t1

0x8fda,	// (0x00094777) area_fmrd2_visual_pane_t2

0x8fea,	// (0x00094787) area_fmrd2_visual_pane_t3

0x0002,

0xfcc1,	// (0x0009b45e) area_fmrd2_visual_pane_t

0x8ffa,	// (0x00094797) area_fmrd2_info_pane_g1

0x9002,	// (0x0009479f) area_fmrd2_info_pane_t1

0x9012,	// (0x000947af) area_fmrd2_info_pane_t2

0x9022,	// (0x000947bf) area_fmrd2_info_pane_t3

0x9032,	// (0x000947cf) area_fmrd2_info_pane_t4

0x0003,

0xfcc8,	// (0x0009b465) area_fmrd2_info_pane_t

0x9040,	// (0x000947dd) fmrd2_indi_pane_t1

0x9050,	// (0x000947ed) fmrd2_indi_pane_t2

0x9060,	// (0x000947fd) fmrd2_indi_pane_t3

0x0002,

0xfcd1,	// (0x0009b46e) fmrd2_indi_pane_t

0xc691,	// (0x00097e2e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc691,	// (0x00097e2e) list_single_fs_bigclock_indicator_pane_g5

0xc742,	// (0x00097edf) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc742,	// (0x00097edf) list_single_fs_bigclock_indicator_pane_t5

0x871c,	// (0x00093eb9) aid_cell_bcale_month_pane_ParamLimits

0x871c,	// (0x00093eb9) aid_cell_bcale_month_pane

0x873a,	// (0x00093ed7) bcale_month_pane_ParamLimits

0x873a,	// (0x00093ed7) bcale_month_pane

0x875e,	// (0x00093efb) bcale_preview_pane_ParamLimits

0x875e,	// (0x00093efb) bcale_preview_pane

0xd21a,	// (0x000989b7) list_single_fs_bigclock_pane_t1_ParamLimits

0xd239,	// (0x000989d6) list_single_fs_bigclock_pane_t2_ParamLimits

0xd239,	// (0x000989d6) list_single_fs_bigclock_pane_t2

0x0001,

0xfc4c,	// (0x0009b3e9) list_single_fs_bigclock_pane_t_ParamLimits

0xfc4c,	// (0x0009b3e9) list_single_fs_bigclock_pane_t

0x8f80,	// (0x0009471d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfcbc,	// (0x0009b459) main_fs_bigclock_unlock_btn_pane_g

0x9070,	// (0x0009480d) aid_dia3_key_size_ParamLimits

0x9070,	// (0x0009480d) aid_dia3_key_size

0x907f,	// (0x0009481c) aid_dia3_listrow_size_ParamLimits

0x907f,	// (0x0009481c) aid_dia3_listrow_size

0x9094,	// (0x00094831) dia3_keypad_fun_pane_ParamLimits

0x9094,	// (0x00094831) dia3_keypad_fun_pane

0x90b0,	// (0x0009484d) dia3_keypad_num_pane_ParamLimits

0x90b0,	// (0x0009484d) dia3_keypad_num_pane

0x90cb,	// (0x00094868) dia3_listscroll_pane_ParamLimits

0x90cb,	// (0x00094868) dia3_listscroll_pane

0x90de,	// (0x0009487b) dia3_numentry_pane_ParamLimits

0x90de,	// (0x0009487b) dia3_numentry_pane

0xd4a4,	// (0x00098c41) dia3_list_pane

0xd4af,	// (0x00098c4c) scroll_pane_cp12

0xdc01,	// (0x0009939e) bg_dia3_numentry_pane

0x90f6,	// (0x00094893) dia3_numentry_pane_t1

0x9105,	// (0x000948a2) cell_dia3_key_num_pane

0x910d,	// (0x000948aa) cell_dia3_key0_fun_pane_ParamLimits

0x910d,	// (0x000948aa) cell_dia3_key0_fun_pane

0x9121,	// (0x000948be) cell_dia3_key1_fun_pane_ParamLimits

0x9121,	// (0x000948be) cell_dia3_key1_fun_pane

0x9139,	// (0x000948d6) dia3_listrow_pane

0xc3e4,	// (0x00097b81) bg_dia3_numentry_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp21

0xd4ba,	// (0x00098c57) cell_dia3_key_num_pane_t1

0xd4c8,	// (0x00098c65) cell_dia3_key_num_pane_t2

0xd4d7,	// (0x00098c74) cell_dia3_key_num_pane_t3

0xd4e6,	// (0x00098c83) cell_dia3_key_num_pane_t4

0x0003,

0xfcd8,	// (0x0009b475) cell_dia3_key_num_pane_t

0xdc01,	// (0x0009939e) bg_button_pane_cp19

0x914b,	// (0x000948e8) cell_dia3_key0_fun_pane_g1

0xdc01,	// (0x0009939e) bg_button_pane_cp20

0x9153,	// (0x000948f0) cell_dia3_key1_fun_pane_g1

0x915b,	// (0x000948f8) area_left_week_number_pane

0x9167,	// (0x00094904) area_top_day_name_pane

0x917a,	// (0x00094917) frame_month_view_pane

0xd4f5,	// (0x00098c92) grid_month_view_pane

0x918d,	// (0x0009492a) cell_top_day_name_pane_ParamLimits

0x918d,	// (0x0009492a) cell_top_day_name_pane

0x91ba,	// (0x00094957) cell_area_left_week_number_pane_ParamLimits

0x91ba,	// (0x00094957) cell_area_left_week_number_pane

0x91ce,	// (0x0009496b) cell_month_view_pane_ParamLimits

0x91ce,	// (0x0009496b) cell_month_view_pane

0xd503,	// (0x00098ca0) frm_month_g1

0x91fb,	// (0x00094998) frm_month_g2

0x920e,	// (0x000949ab) frm_month_g3

0x9221,	// (0x000949be) frm_month_g4

0x9234,	// (0x000949d1) frm_month_g5

0x9247,	// (0x000949e4) frm_month_g6

0x925a,	// (0x000949f7) frm_month_g7

0xd510,	// (0x00098cad) frm_month_g8

0x926d,	// (0x00094a0a) frm_month_g9

0x927d,	// (0x00094a1a) frm_month_g10

0x928d,	// (0x00094a2a) frm_month_g11

0x929d,	// (0x00094a3a) frm_month_g12

0x92af,	// (0x00094a4c) frm_month_g13

0x92c1,	// (0x00094a5e) frm_month_g14

0x92d5,	// (0x00094a72) frm_month_g15

0x92e9,	// (0x00094a86) frm_month_g16

0x000f,

0xfce1,	// (0x0009b47e) frm_month_g

0xd51d,	// (0x00098cba) cell_top_day_name_pane_t1

0x92fd,	// (0x00094a9a) cell_area_left_week_number_pane_g1

0x9309,	// (0x00094aa6) cell_area_left_week_number_pane_t1

0xe302,	// (0x00099a9f) cell_month_view_pane_g1

0x931c,	// (0x00094ab9) cell_month_view_pane_t1

0xdc01,	// (0x0009939e) main_fps_pane

0xc9a3,	// (0x00098140) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc9a3,	// (0x00098140) cmail_ddmenu_btn02_pane_cp1

0xc9bf,	// (0x0009815c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc9bf,	// (0x0009815c) cmail_ddmenu_btn02_pane_cp2

0x8a1c,	// (0x000941b9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a1c,	// (0x000941b9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbff,	// (0x0009b39c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbff,	// (0x0009b39c) cmail_ddmenu_btn02_pane_g

0x8a3a,	// (0x000941d7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a3a,	// (0x000941d7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc04,	// (0x0009b3a1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc04,	// (0x0009b3a1) cmail_ddmenu_btn02_pane_t

0x932f,	// (0x00094acc) fps_text_pane_ParamLimits

0x932f,	// (0x00094acc) fps_text_pane

0x9346,	// (0x00094ae3) main_fps_pane_g1_ParamLimits

0x9346,	// (0x00094ae3) main_fps_pane_g1

0x9360,	// (0x00094afd) wait_bar_pane_cp010_ParamLimits

0x9360,	// (0x00094afd) wait_bar_pane_cp010

0x9371,	// (0x00094b0e) fps_text_pane_t1_ParamLimits

0x9371,	// (0x00094b0e) fps_text_pane_t1

0xb796,	// (0x00096f33) cam4_image_uncrop_pane_g1

0xb79f,	// (0x00096f3c) cam4_image_uncrop_pane_g2

0x6156,	// (0x000918f3) cam4_image_uncrop_pane_g3

0x615f,	// (0x000918fc) cam4_image_uncrop_pane_g4

0x0003,

0xf757,	// (0x0009aef4) cam4_image_uncrop_pane_g

0x9139,	// (0x000948d6) dia3_listrow_pane_ParamLimits

0xdc01,	// (0x0009939e) main_phob2_pane

0x8552,	// (0x00093cef) cell_tport_appsw_pane_cp02_ParamLimits

0x8552,	// (0x00093cef) cell_tport_appsw_pane_cp02

0x8566,	// (0x00093d03) cell_tport_appsw_pane_cp03_ParamLimits

0x8566,	// (0x00093d03) cell_tport_appsw_pane_cp03

0xdc01,	// (0x0009939e) phob2_contact_card_pane

0xdc01,	// (0x0009939e) phob2_listscroll_pane

0xd530,	// (0x00098ccd) phob2_list_pane

0xd538,	// (0x00098cd5) scroll_pane_cp034

0x9389,	// (0x00094b26) phob2_cc_data_pane_ParamLimits

0x9389,	// (0x00094b26) phob2_cc_data_pane

0x93a8,	// (0x00094b45) phob2_cc_listscroll_pane_ParamLimits

0x93a8,	// (0x00094b45) phob2_cc_listscroll_pane

0x8ef3,	// (0x00094690) list_double_large_graphic_phob2_pane_ParamLimits

0x8ef3,	// (0x00094690) list_double_large_graphic_phob2_pane

0x93c6,	// (0x00094b63) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x93c6,	// (0x00094b63) list_double_large_graphic_phob2_pane_g1

0x93d3,	// (0x00094b70) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x93d3,	// (0x00094b70) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd02,	// (0x0009b49f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd02,	// (0x0009b49f) list_double_large_graphic_phob2_pane_g

0x93f9,	// (0x00094b96) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x93f9,	// (0x00094b96) list_double_large_graphic_phob2_pane_t1

0x940e,	// (0x00094bab) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x940e,	// (0x00094bab) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd0b,	// (0x0009b4a8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd0b,	// (0x0009b4a8) list_double_large_graphic_phob2_pane_t

0xdc01,	// (0x0009939e) list_highlight_pane_cp024

0xd540,	// (0x00098cdd) phob2_cc_button_pane

0x9423,	// (0x00094bc0) phob2_cc_data_pane_g1_ParamLimits

0x9423,	// (0x00094bc0) phob2_cc_data_pane_g1

0x943a,	// (0x00094bd7) phob2_cc_data_pane_g2_ParamLimits

0x943a,	// (0x00094bd7) phob2_cc_data_pane_g2

0x0001,

0xfd10,	// (0x0009b4ad) phob2_cc_data_pane_g_ParamLimits

0xfd10,	// (0x0009b4ad) phob2_cc_data_pane_g

0x944c,	// (0x00094be9) phob2_cc_data_pane_t1_ParamLimits

0x944c,	// (0x00094be9) phob2_cc_data_pane_t1

0x9464,	// (0x00094c01) phob2_cc_data_pane_t2_ParamLimits

0x9464,	// (0x00094c01) phob2_cc_data_pane_t2

0x947c,	// (0x00094c19) phob2_cc_data_pane_t3_ParamLimits

0x947c,	// (0x00094c19) phob2_cc_data_pane_t3

0x0002,

0xfd15,	// (0x0009b4b2) phob2_cc_data_pane_t_ParamLimits

0xfd15,	// (0x0009b4b2) phob2_cc_data_pane_t

0xd548,	// (0x00098ce5) phob2_cc_list_pane_ParamLimits

0xd548,	// (0x00098ce5) phob2_cc_list_pane

0xbb23,	// (0x000972c0) scroll_pane_cp035_ParamLimits

0xbb23,	// (0x000972c0) scroll_pane_cp035

0xe29b,	// (0x00099a38) bg_button_pane_cp033

0xd554,	// (0x00098cf1) phob2_cc_button_pane_g1

0xd560,	// (0x00098cfd) phob2_cc_button_pane_t1

0xd575,	// (0x00098d12) phob2_cc_button_pane_t2

0x0001,

0xfd1c,	// (0x0009b4b9) phob2_cc_button_pane_t

0x9494,	// (0x00094c31) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9494,	// (0x00094c31) list_double_large_graphic_phob2_cc_pane

0x94c4,	// (0x00094c61) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x94c4,	// (0x00094c61) list_double_large_graphic_phob2_cc_pane_g1

0x94d0,	// (0x00094c6d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x94d0,	// (0x00094c6d) list_double_large_graphic_phob2_cc_pane_g2

0x94dc,	// (0x00094c79) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x94dc,	// (0x00094c79) list_double_large_graphic_phob2_cc_pane_g3

0x94e8,	// (0x00094c85) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x94e8,	// (0x00094c85) list_double_large_graphic_phob2_cc_pane_g4

0x94f4,	// (0x00094c91) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x94f4,	// (0x00094c91) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd21,	// (0x0009b4be) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd21,	// (0x0009b4be) list_double_large_graphic_phob2_cc_pane_g

0x9500,	// (0x00094c9d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9500,	// (0x00094c9d) list_double_large_graphic_phob2_cc_pane_t1

0x9529,	// (0x00094cc6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9529,	// (0x00094cc6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd2c,	// (0x0009b4c9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd2c,	// (0x0009b4c9) list_double_large_graphic_phob2_cc_pane_t

0xd587,	// (0x00098d24) list_highlight_pane_cp025_ParamLimits

0xd587,	// (0x00098d24) list_highlight_pane_cp025

0xe29b,	// (0x00099a38) bg_button_pane_cp033_ParamLimits

0xd554,	// (0x00098cf1) phob2_cc_button_pane_g1_ParamLimits

0xd560,	// (0x00098cfd) phob2_cc_button_pane_t1_ParamLimits

0xd575,	// (0x00098d12) phob2_cc_button_pane_t2_ParamLimits

0xfd1c,	// (0x0009b4b9) phob2_cc_button_pane_t_ParamLimits

0x104e,	// (0x0008c7eb) popup_wgtman_window

0xb92e,	// (0x000970cb) scroll_pane_cp038

0x8e6c,	// (0x00094609) wgtman_btn_pane_cp_01_ParamLimits

0x8e6c,	// (0x00094609) wgtman_btn_pane_cp_01

0xd595,	// (0x00098d32) wgtman_content_pane

0xd59e,	// (0x00098d3b) wgtman_heading_pane

0xdc01,	// (0x0009939e) bg_heading_pane_cp02

0xd5a7,	// (0x00098d44) wgtman_heading_pane_g1

0xd5af,	// (0x00098d4c) wgtman_heading_pane_t1

0xd5bd,	// (0x00098d5a) scroll_pane_cp036

0xd5c5,	// (0x00098d62) wgtman_list_pane

0xd5cd,	// (0x00098d6a) wgtman_list_pane_t1_ParamLimits

0xd5cd,	// (0x00098d6a) wgtman_list_pane_t1

0xda15,	// (0x000991b2) cam4_grid_pane

0x6db0,	// (0x0009254d) bg_button_pane_cp015_ParamLimits

0x6dc1,	// (0x0009255e) bg_button_pane_cp016_ParamLimits

0x6dcd,	// (0x0009256a) bg_button_pane_cp017_ParamLimits

0x6e21,	// (0x000925be) popup_vitu2_query_window_g3_ParamLimits

0x6e21,	// (0x000925be) popup_vitu2_query_window_g3

0x6ec2,	// (0x0009265f) popup_vitu2_query_window_t6_ParamLimits

0x6ec2,	// (0x0009265f) popup_vitu2_query_window_t6

0x6eed,	// (0x0009268a) popup_vitu2_query_window_t7_ParamLimits

0x6eed,	// (0x0009268a) popup_vitu2_query_window_t7

0xb796,	// (0x00096f33) cam4_grid_pane_g1

0xb79f,	// (0x00096f3c) cam4_grid_pane_g2

0xd5e7,	// (0x00098d84) cam4_grid_pane_g3

0xd5f0,	// (0x00098d8d) cam4_grid_pane_g4

0x0003,

0xfd31,	// (0x0009b4ce) cam4_grid_pane_g

0x1c15,	// (0x0008d3b2) aid_placing_vt_slider_lsc_ParamLimits

0x1f20,	// (0x0008d6bd) vidtel_button_pane_ParamLimits

0x1f20,	// (0x0008d6bd) vidtel_button_pane

0xdc01,	// (0x0009939e) bg_button_pane_cp034

0xd5fb,	// (0x00098d98) vidtel_button_pane_g1

0xd603,	// (0x00098da0) vidtel_button_pane_t1

0xba6a,	// (0x00097207) aid_size_vtel_slider_touch

0xbb23,	// (0x000972c0) scroll_pane_cp039

0x7bec,	// (0x00093389) ncim_query_button_pane_cp01_ParamLimits

0x7c0b,	// (0x000933a8) ncimui_query_pane_g1_ParamLimits

0xe29b,	// (0x00099a38) input_focus_pane_cp012_ParamLimits

0xc422,	// (0x00097bbf) ncim_query_entry_pane_t1_ParamLimits

0xbb23,	// (0x000972c0) scroll_pane_cp039_ParamLimits

0xee0a,	// (0x0009a5a7) navi_pane_bcale_mc_g1

0xee12,	// (0x0009a5af) navi_pane_bcale_mc_t1

0xc9f3,	// (0x00098190) main_sp_fs_email_pane_g1

0xc9ff,	// (0x0009819c) main_sp_fs_email_pane_g2

0x0001,

0xfb34,	// (0x0009b2d1) main_sp_fs_email_pane_g

0xcea4,	// (0x00098641) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcea4,	// (0x00098641) list_single_cale_mrui_row_pane_g3

0x8a5a,	// (0x000941f7) list_single_recal_day_pane_g5_event_pane

0xd084,	// (0x00098821) list_single_recal_day_pane_g7

0xd619,	// (0x00098db6) list_recal_day_event_pane_cp01

0xd622,	// (0x00098dbf) list_recal_vselct_arw_lo_pane_cp01

0xd62a,	// (0x00098dc7) list_recal_vselct_arw_up_pane_cp01

0xd632,	// (0x00098dcf) list_recal_vselct_pane_cp01

0xba8c,	// (0x00097229) list_recal_day_event_pane_cp01_g1

0xd63c,	// (0x00098dd9) list_recal_day_event_pane_cp01_t1

0xd08c,	// (0x00098829) list_single_recal_day_pane_t1_ParamLimits

0xd09e,	// (0x0009883b) list_single_recal_day_pane_t2_ParamLimits

0xfc14,	// (0x0009b3b1) list_single_recal_day_pane_t_ParamLimits

0xe279,	// (0x00099a16) bg_notes_pane_ParamLimits

0xe352,	// (0x00099aef) list_notes_pane_ParamLimits

0x126e,	// (0x0008ca0b) scroll_pane_cp06_ParamLimits

0xe374,	// (0x00099b11) main_notes_pane_ParamLimits

0xe29b,	// (0x00099a38) main_welc_pane

0x9581,	// (0x00094d1e) main_welc_body_pane_ParamLimits

0x9581,	// (0x00094d1e) main_welc_body_pane

0x959f,	// (0x00094d3c) main_welc_opti_pane_ParamLimits

0x959f,	// (0x00094d3c) main_welc_opti_pane

0x961a,	// (0x00094db7) main_welc_pane_t1_ParamLimits

0x961a,	// (0x00094db7) main_welc_pane_t1

0x97fe,	// (0x00094f9b) main_welc_body_row_pane_ParamLimits

0x97fe,	// (0x00094f9b) main_welc_body_row_pane

0xe2f4,	// (0x00099a91) main_welc_opti_row_pane_ParamLimits

0xe2f4,	// (0x00099a91) main_welc_opti_row_pane

0xd65a,	// (0x00098df7) main_welc_opti_row_pane_g1

0x9812,	// (0x00094faf) main_welc_opti_row_pane_t1

0xd662,	// (0x00098dff) main_welc_body_row_pane_t1

0xd321,	// (0x00098abe) popup_notif_wgt_heading_pane

0xd33b,	// (0x00098ad8) aid_size_list_notif_wgt_del_ParamLimits

0xd348,	// (0x00098ae5) list_notif_wgt_row_pane_g1_ParamLimits

0xd354,	// (0x00098af1) list_notif_wgt_row_pane_g2_ParamLimits

0xd363,	// (0x00098b00) list_notif_wgt_row_pane_g3_ParamLimits

0xfc7b,	// (0x0009b418) list_notif_wgt_row_pane_g_ParamLimits

0xd370,	// (0x00098b0d) list_notif_wgt_row_pane_t1_ParamLimits

0xd386,	// (0x00098b23) list_notif_wgt_row_pane_t2_ParamLimits

0xd398,	// (0x00098b35) list_notif_wgt_row_pane_t3_ParamLimits

0xfc82,	// (0x0009b41f) list_notif_wgt_row_pane_t_ParamLimits

0x8f05,	// (0x000946a2) listrow_wgtman_pane_g1_ParamLimits

0x8f12,	// (0x000946af) listrow_wgtman_pane_g2_ParamLimits

0xfcb2,	// (0x0009b44f) listrow_wgtman_pane_g_ParamLimits

0x8f30,	// (0x000946cd) listrow_wgtman_pane_t1_ParamLimits

0x8f48,	// (0x000946e5) listrow_wgtman_pane_t2_ParamLimits

0xfcb7,	// (0x0009b454) listrow_wgtman_pane_t_ParamLimits

0x8f6e,	// (0x0009470b) wait_bar_pane_cp09_ParamLimits

0xdc01,	// (0x0009939e) bg_popup_heading_pane_cp02

0xd671,	// (0x00098e0e) popup_notif_wgt_heading_pane_g1

0xd679,	// (0x00098e16) popup_notif_wgt_heading_pane_t1

0xdc01,	// (0x0009939e) main_vids_pane

0xdc01,	// (0x0009939e) vids_listscroll_pane

0x9821,	// (0x00094fbe) scroll_pane_cp040

0xdc01,	// (0x0009939e) vids_list_pane

0x982c,	// (0x00094fc9) vids_list_double_pane_ParamLimits

0x982c,	// (0x00094fc9) vids_list_double_pane

0x983d,	// (0x00094fda) vids_list_double_pane_g1

0x9846,	// (0x00094fe3) vids_list_double_pane_t1

0x9856,	// (0x00094ff3) vids_list_double_pane_t2

0x0001,

0xfd50,	// (0x0009b4ed) vids_list_double_pane_t

0x9e49,	// (0x000955e6) main_ncimui_pane_ParamLimits

0x7a22,	// (0x000931bf) main_ncimui_pane_g1_ParamLimits

0x7a2e,	// (0x000931cb) main_ncimui_pane_g2_ParamLimits

0x7a2e,	// (0x000931cb) main_ncimui_pane_g2

0x0001,

0xfa3a,	// (0x0009b1d7) main_ncimui_pane_g_ParamLimits

0xfa3a,	// (0x0009b1d7) main_ncimui_pane_g

0x95ba,	// (0x00094d57) main_welc_pane_g1_ParamLimits

0x95ba,	// (0x00094d57) main_welc_pane_g1

0x95cf,	// (0x00094d6c) main_welc_pane_g2_ParamLimits

0x95cf,	// (0x00094d6c) main_welc_pane_g2

0x0003,

0xfd3a,	// (0x0009b4d7) main_welc_pane_g_ParamLimits

0xfd3a,	// (0x0009b4d7) main_welc_pane_g

0x1254,	// (0x0008c9f1) listscroll_mce_pane_ParamLimits

0xef5f,	// (0x0009a6fc) wait_bar_pane_cp10

0xa762,	// (0x00095eff) main_cale_day_pane_ParamLimits

0xa762,	// (0x00095eff) main_cale_week_pane_ParamLimits

0xe279,	// (0x00099a16) main_messa_pane_ParamLimits

0x5571,	// (0x00090d0e) main_clock2_btn_pane_ParamLimits

0x5571,	// (0x00090d0e) main_clock2_btn_pane

0xb049,	// (0x000967e6) main_clock2_btn_pane_cp01_ParamLimits

0xb049,	// (0x000967e6) main_clock2_btn_pane_cp01

0xce30,	// (0x000985cd) list_cale_mrui_pane_ParamLimits

0xd3dc,	// (0x00098b79) main_cf0_pane_g2

0x0001,

0xfc89,	// (0x0009b426) main_cf0_pane_g

0x915b,	// (0x000948f8) area_left_week_number_pane_ParamLimits

0x9167,	// (0x00094904) area_top_day_name_pane_ParamLimits

0x917a,	// (0x00094917) frame_month_view_pane_ParamLimits

0xd4f5,	// (0x00098c92) grid_month_view_pane_ParamLimits

0xd503,	// (0x00098ca0) frm_month_g1_ParamLimits

0x91fb,	// (0x00094998) frm_month_g2_ParamLimits

0x920e,	// (0x000949ab) frm_month_g3_ParamLimits

0x9221,	// (0x000949be) frm_month_g4_ParamLimits

0x9234,	// (0x000949d1) frm_month_g5_ParamLimits

0x9247,	// (0x000949e4) frm_month_g6_ParamLimits

0x925a,	// (0x000949f7) frm_month_g7_ParamLimits

0xd510,	// (0x00098cad) frm_month_g8_ParamLimits

0x926d,	// (0x00094a0a) frm_month_g9_ParamLimits

0x927d,	// (0x00094a1a) frm_month_g10_ParamLimits

0x928d,	// (0x00094a2a) frm_month_g11_ParamLimits

0x929d,	// (0x00094a3a) frm_month_g12_ParamLimits

0x92af,	// (0x00094a4c) frm_month_g13_ParamLimits

0x92c1,	// (0x00094a5e) frm_month_g14_ParamLimits

0x92d5,	// (0x00094a72) frm_month_g15_ParamLimits

0x92e9,	// (0x00094a86) frm_month_g16_ParamLimits

0xfce1,	// (0x0009b47e) frm_month_g_ParamLimits

0xd51d,	// (0x00098cba) cell_top_day_name_pane_t1_ParamLimits

0x92fd,	// (0x00094a9a) cell_area_left_week_number_pane_g1_ParamLimits

0x9309,	// (0x00094aa6) cell_area_left_week_number_pane_t1_ParamLimits

0xe302,	// (0x00099a9f) cell_month_view_pane_g1_ParamLimits

0x931c,	// (0x00094ab9) cell_month_view_pane_t1_ParamLimits

0xe271,	// (0x00099a0e) main_clock2_btn_pane_g1

0xd687,	// (0x00098e24) main_clock2_btn_pane_t1

0xe29b,	// (0x00099a38) listscroll_cmail_pane_ParamLimits

0xc9f3,	// (0x00098190) main_sp_fs_email_pane_g1_ParamLimits

0xc9ff,	// (0x0009819c) main_sp_fs_email_pane_g2_ParamLimits

0xfb34,	// (0x0009b2d1) main_sp_fs_email_pane_g_ParamLimits

0xcff4,	// (0x00098791) list_recal_day_pane_ParamLimits

0xd005,	// (0x000987a2) mian_recal_day_pane_t1

0x83f5,	// (0x00093b92) list_single_dyc_row_text_pane_t4_ParamLimits

0x83f5,	// (0x00093b92) list_single_dyc_row_text_pane_t4

0x843e,	// (0x00093bdb) list_single_dyc_row_text_pane_t5_ParamLimits

0x843e,	// (0x00093bdb) list_single_dyc_row_text_pane_t5

0xcacb,	// (0x00098268) list_single_dyc_row_text_pane_t6_ParamLimits

0xcacb,	// (0x00098268) list_single_dyc_row_text_pane_t6

0xe904,	// (0x0009a0a1) aid_mgn_list_cale_time_pane

0x9e49,	// (0x000955e6) main_gallery2_pane_ParamLimits

0xb05f,	// (0x000967fc) main_clock2_pane_cp01_t1

0xb06f,	// (0x0009680c) main_clock2_pane_cp01_t3

0x0001,

0xf638,	// (0x0009add5) main_clock2_pane_cp01_t

0x160b,	// (0x0008cda8) cale_week_scroll_pane_g16_ParamLimits

0x160b,	// (0x0008cda8) cale_week_scroll_pane_g16

0xe526,	// (0x00099cc3) vorec_slider_pane

0xd603,	// (0x00098da0) vidtel_button_pane_t1_ParamLimits

0x8ac0,	// (0x0009425d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8ac0,	// (0x0009425d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8ad1,	// (0x0009426e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8ad1,	// (0x0009426e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc37,	// (0x0009b3d4) main_fs_bigclock_clock_pane_g_ParamLimits

0x8ae4,	// (0x00094281) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8afa,	// (0x00094297) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc40,	// (0x0009b3dd) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e46,	// (0x000905e3) main_mup3_lyrics_pane_ParamLimits

0x4e46,	// (0x000905e3) main_mup3_lyrics_pane

0x988c,	// (0x00095029) main_mup3_lyrics_pane_t1_ParamLimits

0x988c,	// (0x00095029) main_mup3_lyrics_pane_t1

0xb48f,	// (0x00096c2c) aid_main_mp4_pane_t1_area

0xb499,	// (0x00096c36) aid_main_mp4_pane_t2_area

0xb545,	// (0x00096ce2) main_mp4_pane_g7_ParamLimits

0xb545,	// (0x00096ce2) main_mp4_pane_g7

0xb551,	// (0x00096cee) main_mp4_pane_g8_ParamLimits

0xb551,	// (0x00096cee) main_mp4_pane_g8

0x5f29,	// (0x000916c6) aid_call6_pane_g1_size

0x94ae,	// (0x00094c4b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x94ae,	// (0x00094c4b) list_double_large_graphic_phob2_other_pane

0xe8bc,	// (0x0009a059) list_double_large_graphic_phob2_other_pane_g1

0xdc01,	// (0x0009939e) list_highlight_pane_cp026

0xe29b,	// (0x00099a38) main_welc_pane_ParamLimits

0x825a,	// (0x000939f7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x825a,	// (0x000939f7) main_sp_fs_ctrlbar_pane_g3

0x8274,	// (0x00093a11) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8274,	// (0x00093a11) main_sp_fs_ctrlbar_pane_g4

0x82a8,	// (0x00093a45) toolbar2_fixed_button_pane_cp01

0x82b3,	// (0x00093a50) toolbar2_fixed_button_pane_cp02

0x82c0,	// (0x00093a5d) toolbar2_fixed_button_pane_cp03

0x9565,	// (0x00094d02) list_welc_entry_pane_ParamLimits

0x9565,	// (0x00094d02) list_welc_entry_pane

0x95e4,	// (0x00094d81) main_welc_pane_g3_ParamLimits

0x95e4,	// (0x00094d81) main_welc_pane_g3

0x9638,	// (0x00094dd5) main_welc_pane_t2_ParamLimits

0x9638,	// (0x00094dd5) main_welc_pane_t2

0x9652,	// (0x00094def) main_welc_pane_t3_ParamLimits

0x9652,	// (0x00094def) main_welc_pane_t3

0x0005,

0xfd43,	// (0x0009b4e0) main_welc_pane_t_ParamLimits

0xfd43,	// (0x0009b4e0) main_welc_pane_t

0x9781,	// (0x00094f1e) welc_button_pane_ParamLimits

0x9781,	// (0x00094f1e) welc_button_pane

0x97e9,	// (0x00094f86) welc_service_logo_pane_ParamLimits

0x97e9,	// (0x00094f86) welc_service_logo_pane

0x98a8,	// (0x00095045) list_single_welc_entry_pane_ParamLimits

0x98a8,	// (0x00095045) list_single_welc_entry_pane

0x98b9,	// (0x00095056) list_single_welc_entry_pane_g1

0x98c1,	// (0x0009505e) list_single_welc_entry_pane_t1

0x98cf,	// (0x0009506c) list_single_welc_entry_pane_t2

0x0001,

0xfd55,	// (0x0009b4f2) list_single_welc_entry_pane_t

0xdc01,	// (0x0009939e) bg_button_pane_cp035

0xd695,	// (0x00098e32) welc_button_pane_t1

0xd6a3,	// (0x00098e40) welc_service_logo_pane_g1

0xd6ac,	// (0x00098e49) welc_service_logo_pane_g2

0x0001,

0xfd5a,	// (0x0009b4f7) welc_service_logo_pane_g

0x9e57,	// (0x000955f4) main_int_radio_pane

0xefd9,	// (0x0009a776) list_single_fs_dyc_pane_g1

0x93df,	// (0x00094b7c) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x93df,	// (0x00094b7c) list_double_large_graphic_phob2_pane_g3

0x93eb,	// (0x00094b88) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x93eb,	// (0x00094b88) list_double_large_graphic_phob2_pane_g4

0x98dd,	// (0x0009507a) main_int_radio1_pane_ParamLimits

0x98dd,	// (0x0009507a) main_int_radio1_pane

0xd6b5,	// (0x00098e52) find_pane_cp02

0x98fa,	// (0x00095097) input_focus_pane_cp12_ParamLimits

0x98fa,	// (0x00095097) input_focus_pane_cp12

0x990a,	// (0x000950a7) input_focus_pane_cp13_ParamLimits

0x990a,	// (0x000950a7) input_focus_pane_cp13

0x991e,	// (0x000950bb) input_focus_pane_cp14_ParamLimits

0x991e,	// (0x000950bb) input_focus_pane_cp14

0xd6be,	// (0x00098e5b) int_radio1_listscroll_pane

0x9932,	// (0x000950cf) main_int_radio1_pane_g1_ParamLimits

0x9932,	// (0x000950cf) main_int_radio1_pane_g1

0x994a,	// (0x000950e7) main_int_radio1_pane_t1_ParamLimits

0x994a,	// (0x000950e7) main_int_radio1_pane_t1

0x9965,	// (0x00095102) main_int_radio1_pane_t2_ParamLimits

0x9965,	// (0x00095102) main_int_radio1_pane_t2

0x9980,	// (0x0009511d) main_int_radio1_pane_t3_ParamLimits

0x9980,	// (0x0009511d) main_int_radio1_pane_t3

0x999b,	// (0x00095138) main_int_radio1_pane_t4_ParamLimits

0x999b,	// (0x00095138) main_int_radio1_pane_t4

0xd6c8,	// (0x00098e65) main_int_radio1_pane_t5_ParamLimits

0xd6c8,	// (0x00098e65) main_int_radio1_pane_t5

0x99ad,	// (0x0009514a) main_int_radio1_pane_t6_ParamLimits

0x99ad,	// (0x0009514a) main_int_radio1_pane_t6

0x99c2,	// (0x0009515f) main_int_radio1_pane_t7_ParamLimits

0x99c2,	// (0x0009515f) main_int_radio1_pane_t7

0x99d7,	// (0x00095174) main_int_radio1_pane_t8_ParamLimits

0x99d7,	// (0x00095174) main_int_radio1_pane_t8

0x99f6,	// (0x00095193) main_int_radio1_pane_t9_ParamLimits

0x99f6,	// (0x00095193) main_int_radio1_pane_t9

0x9a08,	// (0x000951a5) main_int_radio1_pane_t10_ParamLimits

0x9a08,	// (0x000951a5) main_int_radio1_pane_t10

0x9a2e,	// (0x000951cb) main_int_radio1_pane_t11_ParamLimits

0x9a2e,	// (0x000951cb) main_int_radio1_pane_t11

0x9a54,	// (0x000951f1) main_int_radio1_pane_t12_ParamLimits

0x9a54,	// (0x000951f1) main_int_radio1_pane_t12

0x000b,

0xfd5f,	// (0x0009b4fc) main_int_radio1_pane_t_ParamLimits

0xfd5f,	// (0x0009b4fc) main_int_radio1_pane_t

0xd6da,	// (0x00098e77) int_radio_list_pane

0xd538,	// (0x00098cd5) scroll_pane_cp037

0xd6e2,	// (0x00098e7f) list_double_large_graphic_int_radio_pane_ParamLimits

0xd6e2,	// (0x00098e7f) list_double_large_graphic_int_radio_pane

0xd6fa,	// (0x00098e97) list_double_large_graphic_int_radio_pane_g1

0xd703,	// (0x00098ea0) list_double_large_graphic_int_radio_pane_t1

0xd711,	// (0x00098eae) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfd78,	// (0x0009b515) list_double_large_graphic_int_radio_pane_t

0xdc01,	// (0x0009939e) list_highlight_pane_cp027

0xd64a,	// (0x00098de7) main_button_pane_4

0x95f4,	// (0x00094d91) main_welc_pane_g4_ParamLimits

0x95f4,	// (0x00094d91) main_welc_pane_g4

0x966a,	// (0x00094e07) main_welc_pane_t4_ParamLimits

0x966a,	// (0x00094e07) main_welc_pane_t4

0x9681,	// (0x00094e1e) main_welc_pane_t5_ParamLimits

0x9681,	// (0x00094e1e) main_welc_pane_t5

0x96be,	// (0x00094e5b) main_welc_pane_t6_ParamLimits

0x96be,	// (0x00094e5b) main_welc_pane_t6

0x9798,	// (0x00094f35) welc_button_pane_2_ParamLimits

0x9798,	// (0x00094f35) welc_button_pane_2

0x97b4,	// (0x00094f51) welc_button_pane_3_ParamLimits

0x97b4,	// (0x00094f51) welc_button_pane_3

0xd652,	// (0x00098def) welc_button_pane_4

0x97d3,	// (0x00094f70) welc_button_pane_5_ParamLimits

0x97d3,	// (0x00094f70) welc_button_pane_5

0x0e51,	// (0x0008c5ee) main_popup_welc_pane

0xd72e,	// (0x00098ecb) main_welc_sk_g3

0xd738,	// (0x00098ed5) main_welc_sk_g4

0xd742,	// (0x00098edf) main_welc_sk_t3

0xd752,	// (0x00098eef) main_welc_sk_t4

0xd762,	// (0x00098eff) popup_welc_pane_t4

0xd770,	// (0x00098f0d) popup_welc_pane_t5

0xd780,	// (0x00098f1d) popup_welc_pane_t6

0x9e57,	// (0x000955f4) main_acti_pane

0xdc01,	// (0x0009939e) main_sso_pane

0x9a66,	// (0x00095203) sso_body_pane_ParamLimits

0x9a66,	// (0x00095203) sso_body_pane

0x9a7a,	// (0x00095217) sso_logo_pane_ParamLimits

0x9a7a,	// (0x00095217) sso_logo_pane

0x9aa6,	// (0x00095243) sso_sk_pane_ParamLimits

0x9aa6,	// (0x00095243) sso_sk_pane

0xe55c,	// (0x00099cf9) main_sso_logo_pane_g1

0x9ab8,	// (0x00095255) sso_sk_pane_t1_ParamLimits

0x9ab8,	// (0x00095255) sso_sk_pane_t1

0x9ad2,	// (0x0009526f) sso_sk_pane_t2_ParamLimits

0x9ad2,	// (0x0009526f) sso_sk_pane_t2

0x0001,

0xfd7d,	// (0x0009b51a) sso_sk_pane_t_ParamLimits

0xfd7d,	// (0x0009b51a) sso_sk_pane_t

0xd7be,	// (0x00098f5b) aid_sso_gap

0xd7c7,	// (0x00098f64) aid_sso_txt1

0xd7d1,	// (0x00098f6e) aid_sso_txt2

0xd7db,	// (0x00098f78) aid_sso_txt3

0x0002,

0xfd82,	// (0x0009b51f) aid_sso_txt

0xd7e5,	// (0x00098f82) aid_sso_widget

0x9b3c,	// (0x000952d9) sso_btn_pane_ParamLimits

0x9b3c,	// (0x000952d9) sso_btn_pane

0x9bc4,	// (0x00095361) sso_option_pane_ParamLimits

0x9bc4,	// (0x00095361) sso_option_pane

0x9c44,	// (0x000953e1) sso_query_pane_ParamLimits

0x9c44,	// (0x000953e1) sso_query_pane

0x9c9a,	// (0x00095437) sso_query_pane_cp01_ParamLimits

0x9c9a,	// (0x00095437) sso_query_pane_cp01

0x9cf4,	// (0x00095491) sso_t_hdr_pane_ParamLimits

0x9cf4,	// (0x00095491) sso_t_hdr_pane

0x9d18,	// (0x000954b5) sso_t_nml_pane_ParamLimits

0x9d18,	// (0x000954b5) sso_t_nml_pane

0xd7db,	// (0x00098f78) sso_t_sub_pane

0x9a87,	// (0x00095224) sso_popup_window_ParamLimits

0x9a87,	// (0x00095224) sso_popup_window

0x9ae8,	// (0x00095285) sso_apps_pane_ParamLimits

0x9ae8,	// (0x00095285) sso_apps_pane

0x9b12,	// (0x000952af) sso_body_pane_g1

0x9b1c,	// (0x000952b9) sso_body_pane_t1

0x9b2c,	// (0x000952c9) sso_body_pane_t2

0x0001,

0xfd89,	// (0x0009b526) sso_body_pane_t

0x9b8e,	// (0x0009532b) sso_btn_pane_cp01_ParamLimits

0x9b8e,	// (0x0009532b) sso_btn_pane_cp01

0x9c18,	// (0x000953b5) sso_prog_pane_ParamLimits

0x9c18,	// (0x000953b5) sso_prog_pane

0xd7ef,	// (0x00098f8c) sso_t_hdr_pane_t1_ParamLimits

0xd7ef,	// (0x00098f8c) sso_t_hdr_pane_t1

0xd802,	// (0x00098f9f) input_focus_pane_cp10_ParamLimits

0xd802,	// (0x00098f9f) input_focus_pane_cp10

0xd818,	// (0x00098fb5) sso_query_pane_t1_ParamLimits

0xd818,	// (0x00098fb5) sso_query_pane_t1

0xd82b,	// (0x00098fc8) sso_query_pane_t2_ParamLimits

0xd82b,	// (0x00098fc8) sso_query_pane_t2

0xd846,	// (0x00098fe3) sso_query_pane_t3_ParamLimits

0xd846,	// (0x00098fe3) sso_query_pane_t3

0xd870,	// (0x0009900d) sso_query_pane_t4_ParamLimits

0xd870,	// (0x0009900d) sso_query_pane_t4

0x0003,

0xfd8e,	// (0x0009b52b) sso_query_pane_t_ParamLimits

0xfd8e,	// (0x0009b52b) sso_query_pane_t

0xdc01,	// (0x0009939e) bg_button_pane_cp22

0xd71f,	// (0x00098ebc) sso_btn_pane_t1

0x9d6e,	// (0x0009550b) sso_t_nml_pane_t1_ParamLimits

0x9d6e,	// (0x0009550b) sso_t_nml_pane_t1

0xd894,	// (0x00099031) sso_option_row_pane_ParamLimits

0xd894,	// (0x00099031) sso_option_row_pane

0xd8a1,	// (0x0009903e) sso_t_sub_pane_t1_ParamLimits

0xd8a1,	// (0x0009903e) sso_t_sub_pane_t1

0xe29b,	// (0x00099a38) bg_popup_window_pane_cp11_ParamLimits

0xe29b,	// (0x00099a38) bg_popup_window_pane_cp11

0xd8b4,	// (0x00099051) popup_sk_window_cp01_ParamLimits

0xd8b4,	// (0x00099051) popup_sk_window_cp01

0xd8c1,	// (0x0009905e) sso_popup_body_pane_ParamLimits

0xd8c1,	// (0x0009905e) sso_popup_body_pane

0xd8ce,	// (0x0009906b) scroll_pane_cp21_ParamLimits

0xd8ce,	// (0x0009906b) scroll_pane_cp21

0xd8db,	// (0x00099078) sso_popup_body_t_pane_ParamLimits

0xd8db,	// (0x00099078) sso_popup_body_t_pane

0xd8e8,	// (0x00099085) sso_popup_body_t_hdr_pane_ParamLimits

0xd8e8,	// (0x00099085) sso_popup_body_t_hdr_pane

0xd8f6,	// (0x00099093) sso_popup_body_t_nml_pane_ParamLimits

0xd8f6,	// (0x00099093) sso_popup_body_t_nml_pane

0xd911,	// (0x000990ae) sso_popup_body_t_sub_pane_ParamLimits

0xd911,	// (0x000990ae) sso_popup_body_t_sub_pane

0xd934,	// (0x000990d1) sso_popup_body_t_hdr_pane_t1

0x9d89,	// (0x00095526) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9d89,	// (0x00095526) sso_popup_body_t_nml_pane_t1

0xd944,	// (0x000990e1) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd944,	// (0x000990e1) sso_popup_body_t_sub_pane_t1

0xe55c,	// (0x00099cf9) sso_prog_pane_g1

0x9dc2,	// (0x0009555f) sso_apps_pane_comp1_ParamLimits

0x9dc2,	// (0x0009555f) sso_apps_pane_comp1

0xd969,	// (0x00099106) sso_apps_pane_comp1_g1

0xd971,	// (0x0009910e) sso_apps_pane_comp1_t1

0xd97f,	// (0x0009911c) sso_option_row_pane_g1

0xd987,	// (0x00099124) sso_option_row_pane_t1

0x9552,	// (0x00094cef) bg_welc_area_ParamLimits

0x9552,	// (0x00094cef) bg_welc_area

0x96fc,	// (0x00094e99) sso_t_hdr_pane_a_t1_ParamLimits

0x96fc,	// (0x00094e99) sso_t_hdr_pane_a_t1

0x9717,	// (0x00094eb4) sso_t_nml_pane_a_t1_ParamLimits

0x9717,	// (0x00094eb4) sso_t_nml_pane_a_t1

0x9746,	// (0x00094ee3) sso_t_sub_pane_a_t1_ParamLimits

0x9746,	// (0x00094ee3) sso_t_sub_pane_a_t1

0xd71f,	// (0x00098ebc) sso_btn_pane_t1_copy1

0xdc01,	// (0x0009939e) welc_button_pane_2_comp1

0xd78e,	// (0x00098f2b) sso_t_hdr_pane_p_t1

0xd79e,	// (0x00098f3b) sso_t_nml_pane_p_t1

0xd7ae,	// (0x00098f4b) sso_t_sub_pane_p_t1
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
