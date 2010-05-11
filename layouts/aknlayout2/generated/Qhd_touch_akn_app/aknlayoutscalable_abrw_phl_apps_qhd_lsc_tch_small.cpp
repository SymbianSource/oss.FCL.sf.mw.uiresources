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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006b896 };

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
0x01f4,	// (0x0006ba8a) Screen

0x0200,	// (0x0006ba96) application_window

0x023c,	// (0x0006bad2) area_bottom_pane_ParamLimits

0x023c,	// (0x0006bad2) area_bottom_pane

0x0275,	// (0x0006bb0b) area_top_pane_ParamLimits

0x0275,	// (0x0006bb0b) area_top_pane

0x94ac,	// (0x00074d42) call_video_uplink_pane_ParamLimits

0x94ac,	// (0x00074d42) call_video_uplink_pane

0x0303,	// (0x0006bb99) main_pane_ParamLimits

0x0303,	// (0x0006bb99) main_pane

0xc846,	// (0x000780dc) context_pane

0x3954,	// (0x0006f1ea) navi_pane

0x3986,	// (0x0006f21c) popup_cale_events_window_ParamLimits

0x3986,	// (0x0006f21c) popup_cale_events_window

0xc859,	// (0x000780ef) popup_mup_playback_window

0x399e,	// (0x0006f234) signal_pane

0xa328,	// (0x00075bbe) main_browser_pane

0xa4ed,	// (0x00075d83) main_burst_pane

0x36a2,	// (0x0006ef38) main_calc_pane

0xc82c,	// (0x000780c2) main_cale_day_pane

0x36b6,	// (0x0006ef4c) main_cale_month_pane

0xc82c,	// (0x000780c2) main_cale_week_pane

0xa4ed,	// (0x00075d83) main_call_pane

0xa008,	// (0x0007589e) main_call_poc_pane

0xa4ed,	// (0x00075d83) main_camera_pane

0xa4ed,	// (0x00075d83) main_chi_dic_pane

0xb1b7,	// (0x00076a4d) main_clock_pane

0xa008,	// (0x0007589e) main_fmradio_pane

0xa4ed,	// (0x00075d83) main_graph_messa_pane

0xa008,	// (0x0007589e) main_help_pane

0xa328,	// (0x00075bbe) main_im_pane

0xa263,	// (0x00075af9) main_image_pane_ParamLimits

0xa263,	// (0x00075af9) main_image_pane

0xa008,	// (0x0007589e) main_location2_pane

0xa4ed,	// (0x00075d83) main_location_pane

0xa263,	// (0x00075af9) main_messa_pane

0xa008,	// (0x0007589e) main_mp2_pane

0xa4ed,	// (0x00075d83) main_mp_pane

0xa008,	// (0x0007589e) main_msg_pane

0xa008,	// (0x0007589e) main_mup_eq_pane

0xa008,	// (0x0007589e) main_mup_pane

0xa328,	// (0x00075bbe) main_notes_pane

0xa008,	// (0x0007589e) main_pec_pane

0xa008,	// (0x0007589e) main_phob_pane

0xa008,	// (0x0007589e) main_pinb_pane

0xa008,	// (0x0007589e) main_postcard_pane

0xa008,	// (0x0007589e) main_qdial_pane

0xa4ed,	// (0x00075d83) main_skin_pane

0xa008,	// (0x0007589e) main_smil2_pane

0xa4ed,	// (0x00075d83) main_smil_pane

0xa4ed,	// (0x00075d83) main_video_pane

0xa4ed,	// (0x00075d83) main_video_tele_pane

0xa263,	// (0x00075af9) main_viewer_pane_ParamLimits

0xa263,	// (0x00075af9) main_viewer_pane

0xa4ed,	// (0x00075d83) main_vorec_pane

0x3708,	// (0x0006ef9e) popup_blid_sat_info_window_ParamLimits

0x3708,	// (0x0006ef9e) popup_blid_sat_info_window

0x3760,	// (0x0006eff6) popup_dyc_status_message_window_ParamLimits

0x3760,	// (0x0006eff6) popup_dyc_status_message_window

0x377a,	// (0x0006f010) popup_grid_large_graphic_window_ParamLimits

0x377a,	// (0x0006f010) popup_grid_large_graphic_window

0x3836,	// (0x0006f0cc) popup_loc_request_window_ParamLimits

0x3836,	// (0x0006f0cc) popup_loc_request_window

0x392c,	// (0x0006f1c2) popup_wml_address_window_ParamLimits

0x392c,	// (0x0006f1c2) popup_wml_address_window

0x34dc,	// (0x0006ed72) call_muted_g1

0x3191,	// (0x0006ea27) popup_call_audio_conf_window_ParamLimits

0x3191,	// (0x0006ea27) popup_call_audio_conf_window

0x34f0,	// (0x0006ed86) popup_call_audio_first_window_ParamLimits

0x34f0,	// (0x0006ed86) popup_call_audio_first_window

0x3566,	// (0x0006edfc) popup_call_audio_in_window_ParamLimits

0x3566,	// (0x0006edfc) popup_call_audio_in_window

0x35a2,	// (0x0006ee38) popup_call_audio_out_window_ParamLimits

0x35a2,	// (0x0006ee38) popup_call_audio_out_window

0x35dc,	// (0x0006ee72) popup_call_audio_second_window_ParamLimits

0x35dc,	// (0x0006ee72) popup_call_audio_second_window

0x3632,	// (0x0006eec8) popup_call_audio_wait_window_ParamLimits

0x3632,	// (0x0006eec8) popup_call_audio_wait_window

0x3667,	// (0x0006eefd) popup_number_entry_window_ParamLimits

0x3667,	// (0x0006eefd) popup_number_entry_window

0x94e2,	// (0x00074d78) bg_popup_call_pane_cp05_ParamLimits

0x94e2,	// (0x00074d78) bg_popup_call_pane_cp05

0x9502,	// (0x00074d98) popup_number_entry_window_t1

0x9515,	// (0x00074dab) popup_number_entry_window_t2

0x9527,	// (0x00074dbd) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007a960) popup_number_entry_window_t

0x9539,	// (0x00074dcf) text_title_cp2

0x954c,	// (0x00074de2) bg_popup_call_pane_cp_ParamLimits

0x954c,	// (0x00074de2) bg_popup_call_pane_cp

0x955a,	// (0x00074df0) call_thumbnail_pane

0x9562,	// (0x00074df8) popup_call_audio_in_window_g1_ParamLimits

0x9562,	// (0x00074df8) popup_call_audio_in_window_g1

0x956e,	// (0x00074e04) popup_call_audio_in_window_g2_ParamLimits

0x956e,	// (0x00074e04) popup_call_audio_in_window_g2

0x957a,	// (0x00074e10) popup_call_audio_in_window_g3_ParamLimits

0x957a,	// (0x00074e10) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007a969) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007a969) popup_call_audio_in_window_g

0x9586,	// (0x00074e1c) popup_call_audio_in_window_t1_ParamLimits

0x9586,	// (0x00074e1c) popup_call_audio_in_window_t1

0x95a2,	// (0x00074e38) popup_call_audio_in_window_t2_ParamLimits

0x95a2,	// (0x00074e38) popup_call_audio_in_window_t2

0x95be,	// (0x00074e54) popup_call_audio_in_window_t3_ParamLimits

0x95be,	// (0x00074e54) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007a970) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007a970) popup_call_audio_in_window_t

0x954c,	// (0x00074de2) bg_popup_call_pane_cp01_ParamLimits

0x954c,	// (0x00074de2) bg_popup_call_pane_cp01

0x955a,	// (0x00074df0) call_thumbnail_pane_cp02

0x95d1,	// (0x00074e67) call_type_pane_cp022

0x95d9,	// (0x00074e6f) popup_call_audio_out_window_g1_ParamLimits

0x95d9,	// (0x00074e6f) popup_call_audio_out_window_g1

0x95eb,	// (0x00074e81) popup_call_audio_out_window_g2_ParamLimits

0x95eb,	// (0x00074e81) popup_call_audio_out_window_g2

0x95f7,	// (0x00074e8d) popup_call_audio_out_window_g3_ParamLimits

0x95f7,	// (0x00074e8d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007a977) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007a977) popup_call_audio_out_window_g

0x9609,	// (0x00074e9f) popup_call_audio_out_window_t1_ParamLimits

0x9609,	// (0x00074e9f) popup_call_audio_out_window_t1

0x9621,	// (0x00074eb7) popup_call_audio_out_window_t2_ParamLimits

0x9621,	// (0x00074eb7) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007a97e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007a97e) popup_call_audio_out_window_t

0x9636,	// (0x00074ecc) bg_popup_call_pane_ParamLimits

0x9636,	// (0x00074ecc) bg_popup_call_pane

0x04bf,	// (0x0006bd55) call_thumbnail_pane_cp_ParamLimits

0x04bf,	// (0x0006bd55) call_thumbnail_pane_cp

0x96ba,	// (0x00074f50) call_type_pane_cp01_ParamLimits

0x96ba,	// (0x00074f50) call_type_pane_cp01

0x96fe,	// (0x00074f94) popup_call_audio_first_window_g1_ParamLimits

0x96fe,	// (0x00074f94) popup_call_audio_first_window_g1

0x974a,	// (0x00074fe0) popup_call_audio_first_window_g2_ParamLimits

0x974a,	// (0x00074fe0) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007a983) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007a983) popup_call_audio_first_window_g

0x978e,	// (0x00075024) popup_call_audio_first_window_t1_ParamLimits

0x978e,	// (0x00075024) popup_call_audio_first_window_t1

0x9f4d,	// (0x000757e3) popup_call_audio_first_window_t4_ParamLimits

0x9f4d,	// (0x000757e3) popup_call_audio_first_window_t4

0x9fd9,	// (0x0007586f) popup_call_audio_first_window_t5_ParamLimits

0x9fd9,	// (0x0007586f) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007a988) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007a988) popup_call_audio_first_window_t

0xa008,	// (0x0007589e) bg_popup_call_pane_cp02

0xa012,	// (0x000758a8) call_type_pane_cp023

0xa01a,	// (0x000758b0) popup_call_audio_wait_window_g1

0xa022,	// (0x000758b8) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a98f) popup_call_audio_wait_window_g

0xa02a,	// (0x000758c0) popup_call_audio_wait_window_t3

0xa038,	// (0x000758ce) bg_popup_call_pane_cp03_ParamLimits

0xa038,	// (0x000758ce) bg_popup_call_pane_cp03

0xa098,	// (0x0007592e) call_thumbnail_pane_cp011_ParamLimits

0xa098,	// (0x0007592e) call_thumbnail_pane_cp011

0xa0a4,	// (0x0007593a) call_type_pane_cp034_ParamLimits

0xa0a4,	// (0x0007593a) call_type_pane_cp034

0xa0e0,	// (0x00075976) popup_call_audio_second_window_g1_ParamLimits

0xa0e0,	// (0x00075976) popup_call_audio_second_window_g1

0xa11c,	// (0x000759b2) popup_call_audio_second_window_g2_ParamLimits

0xa11c,	// (0x000759b2) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007a994) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007a994) popup_call_audio_second_window_g

0xa158,	// (0x000759ee) popup_call_audio_second_window_t1_ParamLimits

0xa158,	// (0x000759ee) popup_call_audio_second_window_t1

0xa1d9,	// (0x00075a6f) popup_call_audio_second_window_t2_ParamLimits

0xa1d9,	// (0x00075a6f) popup_call_audio_second_window_t2

0xa20f,	// (0x00075aa5) popup_call_audio_second_window_t3_ParamLimits

0xa20f,	// (0x00075aa5) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007a999) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007a999) popup_call_audio_second_window_t

0xa008,	// (0x0007589e) bg_popup_call_pane_cp04

0xa245,	// (0x00075adb) list_conf_pane

0xa24d,	// (0x00075ae3) popup_call_audio_conf_window_t1

0xa25b,	// (0x00075af1) call_thumbnail_pane_g1

0xa263,	// (0x00075af9) bg_pinb_pane_ParamLimits

0xa263,	// (0x00075af9) bg_pinb_pane

0xa271,	// (0x00075b07) find_pinb_pane

0xa27a,	// (0x00075b10) listscroll_pinb_pane_ParamLimits

0xa27a,	// (0x00075b10) listscroll_pinb_pane

0xa289,	// (0x00075b1f) pinb_bg_pane_g1

0x04e3,	// (0x0006bd79) pinb_bg_pane_g2

0x04ef,	// (0x0006bd85) pinb_bg_pane_g3

0x04fb,	// (0x0006bd91) pinb_bg_pane_g4

0x0507,	// (0x0006bd9d) pinb_bg_pane_g5

0x0513,	// (0x0006bda9) pinb_bg_pane_g6

0x051e,	// (0x0006bdb4) pinb_bg_pane_g7

0x0529,	// (0x0006bdbf) pinb_bg_pane_g8

0x0534,	// (0x0006bdca) pinb_bg_pane_g9

0x053e,	// (0x0006bdd4) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007a9a0) pinb_bg_pane_g

0x055b,	// (0x0006bdf1) grid_pinb_pane

0x0564,	// (0x0006bdfa) list_pinb_pane

0x056d,	// (0x0006be03) scroll_pane_cp01_ParamLimits

0x056d,	// (0x0006be03) scroll_pane_cp01

0xa293,	// (0x00075b29) find_pinb_pane_g1_ParamLimits

0xa293,	// (0x00075b29) find_pinb_pane_g1

0xa2ab,	// (0x00075b41) find_pinb_pane_t1

0xa2bd,	// (0x00075b53) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007a9ba) find_pinb_pane_t

0xa2d2,	// (0x00075b68) input_focus_pane_cp01_ParamLimits

0xa2d2,	// (0x00075b68) input_focus_pane_cp01

0x057f,	// (0x0006be15) cell_pinb_pane_ParamLimits

0x057f,	// (0x0006be15) cell_pinb_pane

0x05a8,	// (0x0006be3e) cell_pinb_pane_g1_ParamLimits

0x05a8,	// (0x0006be3e) cell_pinb_pane_g1

0x05b8,	// (0x0006be4e) cell_pinb_pane_g2_ParamLimits

0x05b8,	// (0x0006be4e) cell_pinb_pane_g2

0xa2de,	// (0x00075b74) cell_pinb_pane_g3_ParamLimits

0xa2de,	// (0x00075b74) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007a9bf) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007a9bf) cell_pinb_pane_g

0xa008,	// (0x0007589e) grid_highlight_pane_cp01

0x05c4,	// (0x0006be5a) list_pinb_item_pane_ParamLimits

0x05c4,	// (0x0006be5a) list_pinb_item_pane

0xa008,	// (0x0007589e) list_highlight_pane_cp02

0x05d6,	// (0x0006be6c) list_pinb_item_pane_g1_ParamLimits

0x05d6,	// (0x0006be6c) list_pinb_item_pane_g1

0x05e3,	// (0x0006be79) list_pinb_item_pane_g2_ParamLimits

0x05e3,	// (0x0006be79) list_pinb_item_pane_g2

0x05ef,	// (0x0006be85) list_pinb_item_pane_g3_ParamLimits

0x05ef,	// (0x0006be85) list_pinb_item_pane_g3

0x0600,	// (0x0006be96) list_pinb_item_pane_g4_ParamLimits

0x0600,	// (0x0006be96) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007a9c6) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007a9c6) list_pinb_item_pane_g

0x060c,	// (0x0006bea2) list_pinb_item_pane_t1_ParamLimits

0x060c,	// (0x0006bea2) list_pinb_item_pane_t1

0x0641,	// (0x0006bed7) calc_display_pane

0x0669,	// (0x0006beff) calc_paper_pane

0x068c,	// (0x0006bf22) grid_calc_pane

0xa008,	// (0x0007589e) bg_list_pane_cp01

0x06ba,	// (0x0006bf50) clock_g1

0x06c2,	// (0x0006bf58) clock_g2

0x0001,

0xf139,	// (0x0007a9cf) clock_g

0x06ca,	// (0x0006bf60) clock_t1_ParamLimits

0x06ca,	// (0x0006bf60) clock_t1

0x06df,	// (0x0006bf75) clock_t2_ParamLimits

0x06df,	// (0x0006bf75) clock_t2

0x06f1,	// (0x0006bf87) clock_t3_ParamLimits

0x06f1,	// (0x0006bf87) clock_t3

0x0703,	// (0x0006bf99) clock_t4_ParamLimits

0x0703,	// (0x0006bf99) clock_t4

0x0715,	// (0x0006bfab) clock_t5_ParamLimits

0x0715,	// (0x0006bfab) clock_t5

0x072a,	// (0x0006bfc0) clock_t6_ParamLimits

0x072a,	// (0x0006bfc0) clock_t6

0x073c,	// (0x0006bfd2) clock_t7_ParamLimits

0x073c,	// (0x0006bfd2) clock_t7

0x074e,	// (0x0006bfe4) clock_t8_ParamLimits

0x074e,	// (0x0006bfe4) clock_t8

0x0762,	// (0x0006bff8) clock_t9_ParamLimits

0x0762,	// (0x0006bff8) clock_t9

0x0008,

0xf13e,	// (0x0007a9d4) clock_t_ParamLimits

0xf13e,	// (0x0007a9d4) clock_t

0xa2ea,	// (0x00075b80) popup_clock_analogue_window_cp02

0xa2ea,	// (0x00075b80) popup_clock_digital_window_cp01

0xa2f2,	// (0x00075b88) listscroll_help_pane

0xa008,	// (0x0007589e) phob_pre_status_pane

0xa2fc,	// (0x00075b92) grid_qdial_pane

0xa263,	// (0x00075af9) listscroll_mce_pane

0xa263,	// (0x00075af9) bg_notes_pane

0xa306,	// (0x00075b9c) list_notes_pane

0x0776,	// (0x0006c00c) scroll_pane_cp06

0xa314,	// (0x00075baa) bg_calc_paper_pane

0x9842,	// (0x000750d8) list_calc_pane

0xa328,	// (0x00075bbe) bg_calc_display_pane

0x078a,	// (0x0006c020) calc_display_pane_t1

0x079c,	// (0x0006c032) calc_display_pane_t2

0x985c,	// (0x000750f2) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007a9e7) calc_display_pane_t

0x07ae,	// (0x0006c044) cell_calc_pane_ParamLimits

0x07ae,	// (0x0006c044) cell_calc_pane

0xa334,	// (0x00075bca) bg_calc_paper_pane_g1

0xa340,	// (0x00075bd6) bg_calc_paper_pane_g2

0xa34c,	// (0x00075be2) bg_calc_paper_pane_g3

0xa358,	// (0x00075bee) bg_calc_paper_pane_g4

0xa364,	// (0x00075bfa) bg_calc_paper_pane_g5

0x07e3,	// (0x0006c079) bg_calc_paper_pane_g6

0x07f2,	// (0x0006c088) bg_calc_paper_pane_g7

0x0801,	// (0x0006c097) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007a9ee) bg_calc_paper_pane_g

0x0814,	// (0x0006c0aa) calc_bg_paper_pane_g9

0x0827,	// (0x0006c0bd) list_calc_item_pane_ParamLimits

0x0827,	// (0x0006c0bd) list_calc_item_pane

0xa370,	// (0x00075c06) list_calc_item_pane_g1

0x986e,	// (0x00075104) list_calc_item_pane_t1_ParamLimits

0x986e,	// (0x00075104) list_calc_item_pane_t1

0x083c,	// (0x0006c0d2) list_calc_item_pane_t2_ParamLimits

0x083c,	// (0x0006c0d2) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007a9ff) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007a9ff) list_calc_item_pane_t

0xa37d,	// (0x00075c13) cell_calc_pane_g1

0xa387,	// (0x00075c1d) grid_highlight_pane_cp02

0x086e,	// (0x0006c104) bg_calc_display_pane_g1

0x0877,	// (0x0006c10d) bg_calc_display_pane_g2

0x0881,	// (0x0006c117) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007aa09) bg_calc_display_pane_g

0x088a,	// (0x0006c120) cell_qdial_pane_ParamLimits

0x088a,	// (0x0006c120) cell_qdial_pane

0x089e,	// (0x0006c134) cell_qdial_pane_g1_ParamLimits

0x089e,	// (0x0006c134) cell_qdial_pane_g1

0x08b4,	// (0x0006c14a) cell_qdial_pane_g2_ParamLimits

0x08b4,	// (0x0006c14a) cell_qdial_pane_g2

0xa3a9,	// (0x00075c3f) cell_qdial_pane_g3_ParamLimits

0xa3a9,	// (0x00075c3f) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007aa10) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007aa10) cell_qdial_pane_g

0x08db,	// (0x0006c171) cell_qdial_pane_t1_ParamLimits

0x08db,	// (0x0006c171) cell_qdial_pane_t1

0x08f3,	// (0x0006c189) cell_qdial_pane_t2_ParamLimits

0x08f3,	// (0x0006c189) cell_qdial_pane_t2

0x0906,	// (0x0006c19c) cell_qdial_pane_t3_ParamLimits

0x0906,	// (0x0006c19c) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007aa19) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007aa19) cell_qdial_pane_t

0xa008,	// (0x0007589e) grid_highlight_pane_cp04

0xa3b5,	// (0x00075c4b) thumbnail_qdial_pane_ParamLimits

0xa3b5,	// (0x00075c4b) thumbnail_qdial_pane

0xa411,	// (0x00075ca7) list_help_pane

0xa41a,	// (0x00075cb0) scroll_pane_cp02

0x0919,	// (0x0006c1af) help_list_pane_t1_ParamLimits

0x0919,	// (0x0006c1af) help_list_pane_t1

0x9880,	// (0x00075116) bg_notes_pane_g2

0x9888,	// (0x0007511e) bg_notes_pane_g3

0x9890,	// (0x00075126) notes_bg_pane_g1

0x9898,	// (0x0007512e) notes_bg_pane_g4

0x98a0,	// (0x00075136) notes_bg_pane_g5

0x98a8,	// (0x0007513e) notes_bg_pane_g6

0x98b0,	// (0x00075146) notes_bg_pane_g7

0x98b8,	// (0x0007514e) notes_bg_pane_g8

0x98c0,	// (0x00075156) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007aa37) notes_bg_pane_g

0x0936,	// (0x0006c1cc) list_notes_text_pane_ParamLimits

0x0936,	// (0x0006c1cc) list_notes_text_pane

0xa423,	// (0x00075cb9) list_notes_text_pane_g1

0x094b,	// (0x0006c1e1) list_notes_text_pane_t1

0x0959,	// (0x0006c1ef) listscroll_cale_week_pane

0x0985,	// (0x0006c21b) bg_cale_heading_pane

0xa446,	// (0x00075cdc) bg_cale_pane_cp01

0x099d,	// (0x0006c233) cale_week_corner_pane

0x09bc,	// (0x0006c252) cale_week_day_heading_pane

0x09d9,	// (0x0006c26f) cale_week_scroll_pane_g1

0x09ec,	// (0x0006c282) cale_week_scroll_pane_g2

0x0a04,	// (0x0006c29a) cale_week_scroll_pane_g3

0x0a1c,	// (0x0006c2b2) cale_week_scroll_pane_g4

0x0a34,	// (0x0006c2ca) cale_week_scroll_pane_g5

0x0a54,	// (0x0006c2ea) cale_week_scroll_pane_g6

0x0a74,	// (0x0006c30a) cale_week_scroll_pane_g7

0x0a94,	// (0x0006c32a) cale_week_scroll_pane_g8

0x0ab8,	// (0x0006c34e) cale_week_scroll_pane_g9

0x0ad0,	// (0x0006c366) cale_week_scroll_pane_g10

0x0ae8,	// (0x0006c37e) cale_week_scroll_pane_g11

0x0b00,	// (0x0006c396) cale_week_scroll_pane_g12

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g13

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g14

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007aa46) cale_week_scroll_pane_g

0x0b54,	// (0x0006c3ea) cale_week_time_pane

0x0b78,	// (0x0006c40e) grid_cale_week_pane

0xa475,	// (0x00075d0b) scroll_pane_cp08

0x0b9e,	// (0x0006c434) cell_cale_week_pane_ParamLimits

0x0b9e,	// (0x0006c434) cell_cale_week_pane

0x0c2c,	// (0x0006c4c2) cale_week_day_heading_pane_t1

0x0c71,	// (0x0006c507) cale_week_day_heading_pane_t2

0x0cbb,	// (0x0006c551) cale_week_day_heading_pane_t3

0x0d05,	// (0x0006c59b) cale_week_day_heading_pane_t4

0x0d4f,	// (0x0006c5e5) cale_week_day_heading_pane_t5

0x0da1,	// (0x0006c637) cale_week_day_heading_pane_t6

0x0df3,	// (0x0006c689) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007aa67) cale_week_day_heading_pane_t

0xa492,	// (0x00075d28) bg_cale_side_pane

0x0e38,	// (0x0006c6ce) cale_week_time_pane_t1

0x0e52,	// (0x0006c6e8) cale_week_time_pane_t2

0x0e6c,	// (0x0006c702) cale_week_time_pane_t3

0x0e86,	// (0x0006c71c) cale_week_time_pane_t4

0x0ea0,	// (0x0006c736) cale_week_time_pane_t5

0x0eba,	// (0x0006c750) cale_week_time_pane_t6

0x0ed4,	// (0x0006c76a) cale_week_time_pane_t7

0x0eee,	// (0x0006c784) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007aa76) cale_week_time_pane_t

0x0f0e,	// (0x0006c7a4) cell_cale_week_pane_g2

0x0f2d,	// (0x0006c7c3) cell_cale_week_pane_g3_ParamLimits

0x0f2d,	// (0x0006c7c3) cell_cale_week_pane_g3

0xa4a0,	// (0x00075d36) grid_highlight_pane_cp07

0xa4a8,	// (0x00075d3e) listscroll_gms_pane

0xa4b2,	// (0x00075d48) grid_gms_pane

0xa4bb,	// (0x00075d51) listscroll_gms_pane_g1

0xa4c3,	// (0x00075d59) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007aa87) listscroll_gms_pane_g

0x0f45,	// (0x0006c7db) scroll_pane_cp010

0x0f50,	// (0x0006c7e6) cell_gms_pane_ParamLimits

0x0f50,	// (0x0006c7e6) cell_gms_pane

0x0f63,	// (0x0006c7f9) cell_gms_pane_g1

0xa4cb,	// (0x00075d61) cell_gms_pane_g2

0xa4d3,	// (0x00075d69) cell_gms_pane_g3

0xa4dc,	// (0x00075d72) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007aa8c) cell_gms_pane_g

0xa4e5,	// (0x00075d7b) grid_highlight_pane_cp09

0x3486,	// (0x0006ed1c) phob_pre_status_pane_g1

0x348e,	// (0x0006ed24) phob_pre_status_pane_g2

0x3496,	// (0x0006ed2c) phob_pre_status_pane_g3

0x349e,	// (0x0006ed34) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007ae77) phob_pre_status_pane_g

0x34ae,	// (0x0006ed44) phob_pre_status_pane_t1

0x34bc,	// (0x0006ed52) phob_pre_status_pane_t2

0x34cc,	// (0x0006ed62) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007ae82) phob_pre_status_pane_t

0xa4ed,	// (0x00075d83) bg_list_pane_cp05

0x0f73,	// (0x0006c809) grid_vorec_pane

0x0f7b,	// (0x0006c811) vorec_t1

0x0f89,	// (0x0006c81f) vorec_t2

0x0f97,	// (0x0006c82d) vorec_t3

0x0fa5,	// (0x0006c83b) vorec_t4

0x942c,	// (0x00074cc2) vorec_t5

0x943a,	// (0x00074cd0) vorec_t6

0x0004,

0xf1ff,	// (0x0007aa95) vorec_t

0x9448,	// (0x00074cde) wait_bar_pane_cp01

0x0fc1,	// (0x0006c857) cell_vorec_pane_ParamLimits

0x0fc1,	// (0x0006c857) cell_vorec_pane

0x98c8,	// (0x0007515e) cell_vorec_pane_g1

0xa008,	// (0x0007589e) grid_highlight_pane_cp05

0x0fe9,	// (0x0006c87f) cams_zoom_pane

0x0ff8,	// (0x0006c88e) image_vga_pane

0x1012,	// (0x0006c8a8) main_camera_pane_g1

0x1024,	// (0x0006c8ba) main_camera_pane_g2

0x1034,	// (0x0006c8ca) main_camera_pane_g3

0x1044,	// (0x0006c8da) main_camera_pane_g4

0x1054,	// (0x0006c8ea) main_camera_pane_g5

0x1064,	// (0x0006c8fa) main_camera_pane_g6

0x1076,	// (0x0006c90c) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007aaa0) main_camera_pane_g

0x1086,	// (0x0006c91c) main_camera_pane_t1

0x109c,	// (0x0006c932) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007aab1) main_camera_pane_t

0x10d6,	// (0x0006c96c) cams_zoom_pane_cp_ParamLimits

0x10d6,	// (0x0006c96c) cams_zoom_pane_cp

0x10fe,	// (0x0006c994) image_cif_pane_ParamLimits

0x10fe,	// (0x0006c994) image_cif_pane

0x1134,	// (0x0006c9ca) image_subqcif_pane

0x113c,	// (0x0006c9d2) main_video_pane_g1_ParamLimits

0x113c,	// (0x0006c9d2) main_video_pane_g1

0x1160,	// (0x0006c9f6) main_video_pane_g2_ParamLimits

0x1160,	// (0x0006c9f6) main_video_pane_g2

0x1194,	// (0x0006ca2a) main_video_pane_g3_ParamLimits

0x1194,	// (0x0006ca2a) main_video_pane_g3

0x11c2,	// (0x0006ca58) main_video_pane_g4_ParamLimits

0x11c2,	// (0x0006ca58) main_video_pane_g4

0x11f0,	// (0x0006ca86) main_video_pane_g5_ParamLimits

0x11f0,	// (0x0006ca86) main_video_pane_g5

0xa501,	// (0x00075d97) main_video_pane_g6_ParamLimits

0xa501,	// (0x00075d97) main_video_pane_g6

0x0006,

0xf220,	// (0x0007aab6) main_video_pane_g_ParamLimits

0xf220,	// (0x0007aab6) main_video_pane_g

0x1219,	// (0x0006caaf) main_video_pane_t1_ParamLimits

0x1219,	// (0x0006caaf) main_video_pane_t1

0xa51b,	// (0x00075db1) cams_zoom_pane_g1

0xa524,	// (0x00075dba) cams_zoom_pane_g2

0xa52d,	// (0x00075dc3) cams_zoom_pane_g3

0xaa1d,	// (0x000762b3) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007aac5) cams_zoom_pane_g

0x1276,	// (0x0006cb0c) grid_cams_pane

0x1290,	// (0x0006cb26) linegrid_cams_pane

0x12a4,	// (0x0006cb3a) cell_cams_pane_ParamLimits

0x12a4,	// (0x0006cb3a) cell_cams_pane

0xaa26,	// (0x000762bc) cams_burst_image_pane

0xaa2e,	// (0x000762c4) cell_cams_pane_g1

0xa008,	// (0x0007589e) grid_highlight_pane_cp03

0xa37d,	// (0x00075c13) mp_bg_pane_g1

0xa008,	// (0x0007589e) bg_list_pane_cp03

0xc751,	// (0x00077fe7) bg_mp_pane

0xc759,	// (0x00077fef) grid_mp_pane

0xc761,	// (0x00077ff7) media_player_g1

0xc769,	// (0x00077fff) media_player_t1

0xc777,	// (0x0007800d) media_player_t2

0xc785,	// (0x0007801b) media_player_t3

0xc793,	// (0x00078029) media_player_t4

0xc7a1,	// (0x00078037) media_player_t5

0xc7af,	// (0x00078045) media_player_t6

0xc7bd,	// (0x00078053) media_player_t7

0x0006,

0xf5cb,	// (0x0007ae61) media_player_t

0xc7cb,	// (0x00078061) wait_bar_pane_cp02

0xf5b0,	// (0x0007ae46) main_usb_pane_t

0x347d,	// (0x0006ed13) cell_mp_pane

0xa37d,	// (0x00075c13) cell_mp_pane_g1

0xa008,	// (0x0007589e) grid_highlight_pane_cp06

0xaa36,	// (0x000762cc) grid_skin_colour_pane

0xaa3e,	// (0x000762d4) list_highlight_pane_cp03

0x13da,	// (0x0006cc70) skin_g1

0xaa46,	// (0x000762dc) skin_t1

0xaa55,	// (0x000762eb) skin_t2

0x0001,

0xf264,	// (0x0007aafa) skin_t

0x13e2,	// (0x0006cc78) cell_skin_colour_pane_ParamLimits

0x13e2,	// (0x0006cc78) cell_skin_colour_pane

0xaa63,	// (0x000762f9) cell_skin_colour_pane_g1

0x145b,	// (0x0006ccf1) call_video_g1_ParamLimits

0x145b,	// (0x0006ccf1) call_video_g1

0x1477,	// (0x0006cd0d) call_video_g2_ParamLimits

0x1477,	// (0x0006cd0d) call_video_g2

0x0001,

0xf269,	// (0x0007aaff) call_video_g_ParamLimits

0xf269,	// (0x0007aaff) call_video_g

0x14c9,	// (0x0006cd5f) call_video_uplink_pane_cp1_ParamLimits

0x14c9,	// (0x0006cd5f) call_video_uplink_pane_cp1

0xaa75,	// (0x0007630b) call_video_uplink_pane_cp2

0x1568,	// (0x0006cdfe) video_down_crop_pane_ParamLimits

0x1568,	// (0x0006cdfe) video_down_crop_pane

0x165f,	// (0x0006cef5) video_down_pane_ParamLimits

0x165f,	// (0x0006cef5) video_down_pane

0xaa7d,	// (0x00076313) video_down_subqcif_pane_ParamLimits

0xaa7d,	// (0x00076313) video_down_subqcif_pane

0xaa95,	// (0x0007632b) video_down_subqcif_pane_cp_ParamLimits

0xaa95,	// (0x0007632b) video_down_subqcif_pane_cp

0xaabb,	// (0x00076351) im_reading_pane_ParamLimits

0xaabb,	// (0x00076351) im_reading_pane

0x176d,	// (0x0006d003) im_writing_pane_ParamLimits

0x176d,	// (0x0006d003) im_writing_pane

0x1783,	// (0x0006d019) im_reading_pane_t1

0xaad5,	// (0x0007636b) list_im_pane

0xaae6,	// (0x0007637c) scroll_pane_cp07

0x17bc,	// (0x0006d052) im_writing_pane_t1_ParamLimits

0x17bc,	// (0x0006d052) im_writing_pane_t1

0xaaff,	// (0x00076395) im_writing_pane_t2_ParamLimits

0xaaff,	// (0x00076395) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007ab09) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007ab09) im_writing_pane_t

0xa008,	// (0x0007589e) input_focus_pane_cp04

0xa008,	// (0x0007589e) input_focus_pane_cp05

0x17d1,	// (0x0006d067) list_im_single_pane_ParamLimits

0x17d1,	// (0x0006d067) list_im_single_pane

0x17e5,	// (0x0006d07b) list_single_im_pane_t1

0x343d,	// (0x0006ecd3) blid_accuracy_pane

0x3445,	// (0x0006ecdb) blid_compass_pane

0x344f,	// (0x0006ece5) main_location_t1

0x345f,	// (0x0006ecf5) main_location_t2

0x346f,	// (0x0006ed05) main_location_t3

0x0002,

0xf5da,	// (0x0007ae70) main_location_t

0xa008,	// (0x0007589e) aid_levels_location

0xa37d,	// (0x00075c13) blid_accuracy_pane_g1

0xa37d,	// (0x00075c13) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007ab6b) blid_accuracy_pane_g

0xab47,	// (0x000763dd) wml_content_pane

0xab85,	// (0x0007641b) wml_button_pane_ParamLimits

0xab85,	// (0x0007641b) wml_button_pane

0x17f4,	// (0x0006d08a) wml_list_single_large_pane_ParamLimits

0x17f4,	// (0x0006d08a) wml_list_single_large_pane

0x1809,	// (0x0006d09f) wml_list_single_medium_pane_ParamLimits

0x1809,	// (0x0006d09f) wml_list_single_medium_pane

0x181f,	// (0x0006d0b5) wml_list_single_small_pane_ParamLimits

0x181f,	// (0x0006d0b5) wml_list_single_small_pane

0xab99,	// (0x0007642f) wml_selection_box_pane_ParamLimits

0xab99,	// (0x0007642f) wml_selection_box_pane

0xabac,	// (0x00076442) wml_list_single_pane_t1

0xabbb,	// (0x00076451) wml_list_single_medium_pane_t1

0xabca,	// (0x00076460) wml_list_single_large_pane_t1

0xabd9,	// (0x0007646f) input_focus_pane_cp02_ParamLimits

0xabd9,	// (0x0007646f) input_focus_pane_cp02

0xabec,	// (0x00076482) wml_selection_box_pane_g1

0xabf5,	// (0x0007648b) wml_selection_box_pane_t1_ParamLimits

0xabf5,	// (0x0007648b) wml_selection_box_pane_t1

0xa263,	// (0x00075af9) bg_wml_button_pane_ParamLimits

0xa263,	// (0x00075af9) bg_wml_button_pane

0xac0d,	// (0x000764a3) wml_button_pane_g1

0xac15,	// (0x000764ab) wml_button_pane_t1

0xac0d,	// (0x000764a3) wml_button_bg_pane_g1

0xac25,	// (0x000764bb) wml_button_bg_pane_g2

0xac2d,	// (0x000764c3) wml_button_bg_pane_g3

0xac35,	// (0x000764cb) wml_button_bg_pane_g4

0xac3d,	// (0x000764d3) wml_button_bg_pane_g5

0xac45,	// (0x000764db) wml_button_bg_pane_g6

0xac4d,	// (0x000764e3) wml_button_bg_pane_g7

0xac55,	// (0x000764eb) wml_button_bg_pane_g8

0xac5d,	// (0x000764f3) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007ab0e) wml_button_bg_pane_g

0x1837,	// (0x0006d0cd) bg_list_pane_cp02

0xac65,	// (0x000764fb) mce_header_pane_ParamLimits

0xac65,	// (0x000764fb) mce_header_pane

0xac7b,	// (0x00076511) mce_icon_pane

0xac7b,	// (0x00076511) mce_image_pane

0xac84,	// (0x0007651a) mce_text_pane_ParamLimits

0xac84,	// (0x0007651a) mce_text_pane

0x183f,	// (0x0006d0d5) scroll_pane_cp03

0xab7d,	// (0x00076413) scroll_pane_cp04

0xac97,	// (0x0007652d) scroll_pane_cp05_ParamLimits

0xac97,	// (0x0007652d) scroll_pane_cp05

0x1849,	// (0x0006d0df) mce_header_field_pane_ParamLimits

0x1849,	// (0x0006d0df) mce_header_field_pane

0x1860,	// (0x0006d0f6) mce_header_field_pane_2_ParamLimits

0x1860,	// (0x0006d0f6) mce_header_field_pane_2

0x1876,	// (0x0006d10c) mce_header_field_pane_3

0x187e,	// (0x0006d114) list_single_mce_message_pane_ParamLimits

0x187e,	// (0x0006d114) list_single_mce_message_pane

0x1893,	// (0x0006d129) list_single_mce_smart_pane_ParamLimits

0x1893,	// (0x0006d129) list_single_mce_smart_pane

0xaca3,	// (0x00076539) input_focus_pane_cp03

0xacac,	// (0x00076542) list_header_data_pane

0x18b3,	// (0x0006d149) mce_header_field_pane_t1

0x18c3,	// (0x0006d159) list_single_mce_header_pane_ParamLimits

0x18c3,	// (0x0006d159) list_single_mce_header_pane

0xacb4,	// (0x0007654a) list_single_mce_header_pane_t1

0xacc3,	// (0x00076559) list_single_mce_message_pane_g1

0xaccb,	// (0x00076561) list_single_mce_message_pane_t1

0x18fd,	// (0x0006d193) bg_cale_heading_pane_cp01_ParamLimits

0x18fd,	// (0x0006d193) bg_cale_heading_pane_cp01

0xacd9,	// (0x0007656f) bg_cale_pane_cp02_ParamLimits

0xacd9,	// (0x0007656f) bg_cale_pane_cp02

0x192c,	// (0x0006d1c2) cale_month_corner_pane

0x194b,	// (0x0006d1e1) cale_month_day_heading_pane_ParamLimits

0x194b,	// (0x0006d1e1) cale_month_day_heading_pane

0x1992,	// (0x0006d228) cale_month_pane_g1_ParamLimits

0x1992,	// (0x0006d228) cale_month_pane_g1

0x19b6,	// (0x0006d24c) cale_month_pane_g2_ParamLimits

0x19b6,	// (0x0006d24c) cale_month_pane_g2

0x19e6,	// (0x0006d27c) cale_month_pane_g3_ParamLimits

0x19e6,	// (0x0006d27c) cale_month_pane_g3

0x1a22,	// (0x0006d2b8) cale_month_pane_g4_ParamLimits

0x1a22,	// (0x0006d2b8) cale_month_pane_g4

0x1a5e,	// (0x0006d2f4) cale_month_pane_g5_ParamLimits

0x1a5e,	// (0x0006d2f4) cale_month_pane_g5

0x1aa6,	// (0x0006d33c) cale_month_pane_g6_ParamLimits

0x1aa6,	// (0x0006d33c) cale_month_pane_g6

0x1af2,	// (0x0006d388) cale_month_pane_g7_ParamLimits

0x1af2,	// (0x0006d388) cale_month_pane_g7

0x1b46,	// (0x0006d3dc) cale_month_pane_g8_ParamLimits

0x1b46,	// (0x0006d3dc) cale_month_pane_g8

0x1b9a,	// (0x0006d430) cale_month_pane_g9_ParamLimits

0x1b9a,	// (0x0006d430) cale_month_pane_g9

0x1bec,	// (0x0006d482) cale_month_pane_g10_ParamLimits

0x1bec,	// (0x0006d482) cale_month_pane_g10

0x1c3e,	// (0x0006d4d4) cale_month_pane_g11_ParamLimits

0x1c3e,	// (0x0006d4d4) cale_month_pane_g11

0x1c90,	// (0x0006d526) cale_month_pane_g12_ParamLimits

0x1c90,	// (0x0006d526) cale_month_pane_g12

0x1ce2,	// (0x0006d578) cale_month_pane_g13_ParamLimits

0x1ce2,	// (0x0006d578) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007ab21) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007ab21) cale_month_pane_g

0x1d34,	// (0x0006d5ca) cale_month_week_pane

0x1d58,	// (0x0006d5ee) grid_cale_month_pane_ParamLimits

0x1d58,	// (0x0006d5ee) grid_cale_month_pane

0x1d96,	// (0x0006d62c) cale_month_day_heading_pane_t1

0x1e1c,	// (0x0006d6b2) cale_month_day_heading_pane_t2

0x1ead,	// (0x0006d743) cale_month_day_heading_pane_t3

0x1f3e,	// (0x0006d7d4) cale_month_day_heading_pane_t4

0x1fd3,	// (0x0006d869) cale_month_day_heading_pane_t5

0x2074,	// (0x0006d90a) cale_month_day_heading_pane_t6

0x2115,	// (0x0006d9ab) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007ab3c) cale_month_day_heading_pane_t

0xa492,	// (0x00075d28) bg_cale_side_pane_cp01

0x21be,	// (0x0006da54) cale_month_week_pane_t1

0x21d7,	// (0x0006da6d) cale_month_week_pane_t2

0x21f0,	// (0x0006da86) cale_month_week_pane_t3

0x2209,	// (0x0006da9f) cale_month_week_pane_t4

0x2222,	// (0x0006dab8) cale_month_week_pane_t5

0x223b,	// (0x0006dad1) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007ab4b) cale_month_week_pane_t

0x2254,	// (0x0006daea) cell_cale_month_pane_ParamLimits

0x2254,	// (0x0006daea) cell_cale_month_pane

0x98d2,	// (0x00075168) cell_cale_month_pane_g1

0x23a8,	// (0x0006dc3e) cell_cale_month_pane_t1_ParamLimits

0x23a8,	// (0x0006dc3e) cell_cale_month_pane_t1

0xa4a0,	// (0x00075d36) grid_highlight_pane_cp08

0xa37d,	// (0x00075c13) main_smil_g1

0x23d4,	// (0x0006dc6a) smil_status_pane

0xad18,	// (0x000765ae) smil_text_pane

0xc671,	// (0x00077f07) bg_popup_call3_rect_pane_g8

0xc679,	// (0x00077f0f) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ae04) bg_popup_call3_rect_pane_g

0xc8c0,	// (0x00078156) smil_status_volume_pane_g1

0xad22,	// (0x000765b8) smil_status_pane_t1

0x9a1c,	// (0x000752b2) volume_smil_pane

0xad39,	// (0x000765cf) list_smil_text_pane

0x23e7,	// (0x0006dc7d) scroll_pane_cp011

0x23f2,	// (0x0006dc88) smil_text_list_pane_t1_ParamLimits

0x23f2,	// (0x0006dc88) smil_text_list_pane_t1

0x98de,	// (0x00075174) aid_volume_smil_ParamLimits

0x98de,	// (0x00075174) aid_volume_smil

0xa37d,	// (0x00075c13) smil_volume_pane_g1

0xa37d,	// (0x00075c13) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007ab6b) smil_volume_pane_g

0x0959,	// (0x0006c1ef) listscroll_cale_day_pane

0xad43,	// (0x000765d9) bg_cale_pane

0xad5b,	// (0x000765f1) list_cale_pane

0xad7e,	// (0x00076614) scroll_pane_cp09

0xad8f,	// (0x00076625) cale_bg_pane_g1

0xad97,	// (0x0007662d) cale_bg_pane_g2

0xad9f,	// (0x00076635) cale_bg_pane_g3

0xada7,	// (0x0007663d) cale_bg_pane_g4

0xadaf,	// (0x00076645) cale_bg_pane_g5

0xadb7,	// (0x0007664d) cale_bg_pane_g6

0xadbf,	// (0x00076655) cale_bg_pane_g7

0xadc7,	// (0x0007665d) cale_bg_pane_g8

0xadcf,	// (0x00076665) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007ab70) cale_bg_pane_g

0x2436,	// (0x0006dccc) list_cale_time_pane_ParamLimits

0x2436,	// (0x0006dccc) list_cale_time_pane

0xadd7,	// (0x0007666d) list_cale_time_pane_g1_ParamLimits

0xadd7,	// (0x0007666d) list_cale_time_pane_g1

0xade3,	// (0x00076679) list_cale_time_pane_g2_ParamLimits

0xade3,	// (0x00076679) list_cale_time_pane_g2

0x244b,	// (0x0006dce1) list_cale_time_pane_g3_ParamLimits

0x244b,	// (0x0006dce1) list_cale_time_pane_g3

0x2459,	// (0x0006dcef) list_cale_time_pane_g4_ParamLimits

0x2459,	// (0x0006dcef) list_cale_time_pane_g4

0x2467,	// (0x0006dcfd) list_cale_time_pane_g5_ParamLimits

0x2467,	// (0x0006dcfd) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007ab83) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007ab83) list_cale_time_pane_g

0xadfd,	// (0x00076693) list_cale_time_pane_t1_ParamLimits

0xadfd,	// (0x00076693) list_cale_time_pane_t1

0xae25,	// (0x000766bb) list_cale_time_pane_t2_ParamLimits

0xae25,	// (0x000766bb) list_cale_time_pane_t2

0x27c8,	// (0x0006e05e) aid_blid_cardinal_pane

0x2806,	// (0x0006e09c) compass_pane_t4

0xae4d,	// (0x000766e3) list_cale_time_pane_t4_ParamLimits

0xae4d,	// (0x000766e3) list_cale_time_pane_t4

0x2814,	// (0x0006e0aa) compass_pane_t5

0x2822,	// (0x0006e0b8) compass_pane_t6

0x2830,	// (0x0006e0c6) compass_pane_t7

0xb2fc,	// (0x00076b92) navi_pane_cc_t1

0xb4e7,	// (0x00076d7d) aid_phob_thumbnail_center_pane

0x2e55,	// (0x0006e6eb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007ab90) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007ab90) list_cale_time_pane_t

0x954c,	// (0x00074de2) bg_popup_window_pane_cp02_ParamLimits

0x954c,	// (0x00074de2) bg_popup_window_pane_cp02

0xae75,	// (0x0007670b) heading_pane_cp01_ParamLimits

0xae75,	// (0x0007670b) heading_pane_cp01

0xae81,	// (0x00076717) loc_req_pane_ParamLimits

0xae81,	// (0x00076717) loc_req_pane

0xae91,	// (0x00076727) loc_type_pane_ParamLimits

0xae91,	// (0x00076727) loc_type_pane

0xaea3,	// (0x00076739) loc_type_pane_t1_ParamLimits

0xaea3,	// (0x00076739) loc_type_pane_t1

0xaeb5,	// (0x0007674b) loc_type_pane_t2_ParamLimits

0xaeb5,	// (0x0007674b) loc_type_pane_t2

0xaec7,	// (0x0007675d) loc_type_pane_t3_ParamLimits

0xaec7,	// (0x0007675d) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007ab97) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007ab97) loc_type_pane_t

0xaed9,	// (0x0007676f) list_loc_req_pane

0xaee3,	// (0x00076779) scroll_pane_cp012

0x2475,	// (0x0006dd0b) list_single_loc_request_popup_menu_pane_ParamLimits

0x2475,	// (0x0006dd0b) list_single_loc_request_popup_menu_pane

0xaeee,	// (0x00076784) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaeee,	// (0x00076784) list_single_loc_request_popup_menu_pane_g1

0xaefa,	// (0x00076790) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaefa,	// (0x00076790) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007ab9e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007ab9e) list_single_loc_request_popup_menu_pane_g

0xaf06,	// (0x0007679c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf06,	// (0x0007679c) list_single_loc_request_popup_menu_pane_t1

0xa263,	// (0x00075af9) bg_popup_window_pane_cp03_ParamLimits

0xa263,	// (0x00075af9) bg_popup_window_pane_cp03

0xaf1c,	// (0x000767b2) heading_loc_req_pane_ParamLimits

0xaf1c,	// (0x000767b2) heading_loc_req_pane

0x2482,	// (0x0006dd18) popup_dyc_status_message_window_g1_ParamLimits

0x2482,	// (0x0006dd18) popup_dyc_status_message_window_g1

0x2496,	// (0x0006dd2c) popup_dyc_status_message_window_t1_ParamLimits

0x2496,	// (0x0006dd2c) popup_dyc_status_message_window_t1

0x24ab,	// (0x0006dd41) popup_dyc_status_message_window_t2_ParamLimits

0x24ab,	// (0x0006dd41) popup_dyc_status_message_window_t2

0x24c0,	// (0x0006dd56) popup_dyc_status_message_window_t3_ParamLimits

0x24c0,	// (0x0006dd56) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007aba3) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007aba3) popup_dyc_status_message_window_t

0xa008,	// (0x0007589e) bg_heading_pane_cp01

0xaf28,	// (0x000767be) heading_loc_req_pane_g1

0xaf30,	// (0x000767c6) heading_loc_req_pane_g2

0xaf38,	// (0x000767ce) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007abaa) heading_loc_req_pane_g

0xaf40,	// (0x000767d6) heading_loc_req_pane_t1

0xaf4f,	// (0x000767e5) bg_popup_sub_pane_cp01_ParamLimits

0xaf4f,	// (0x000767e5) bg_popup_sub_pane_cp01

0xaf5d,	// (0x000767f3) popup_cale_events_window_g1_ParamLimits

0xaf5d,	// (0x000767f3) popup_cale_events_window_g1

0xaf7d,	// (0x00076813) popup_cale_events_window_g2_ParamLimits

0xaf7d,	// (0x00076813) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007abde) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007abde) popup_cale_events_window_g

0xaf9d,	// (0x00076833) popup_cale_events_window_t1_ParamLimits

0xaf9d,	// (0x00076833) popup_cale_events_window_t1

0xafaf,	// (0x00076845) popup_cale_events_window_t2_ParamLimits

0xafaf,	// (0x00076845) popup_cale_events_window_t2

0xafed,	// (0x00076883) popup_cale_events_window_t3_ParamLimits

0xafed,	// (0x00076883) popup_cale_events_window_t3

0xb027,	// (0x000768bd) popup_cale_events_window_t4_ParamLimits

0xb027,	// (0x000768bd) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007abe3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007abe3) popup_cale_events_window_t

0x25c3,	// (0x0006de59) call_type_pane

0x25d3,	// (0x0006de69) popup_call_status_window_g1

0x25e7,	// (0x0006de7d) popup_call_status_window_g2

0x25fb,	// (0x0006de91) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007abec) popup_call_status_window_g

0xb05d,	// (0x000768f3) call_type_pane_g1

0xb066,	// (0x000768fc) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007abf3) call_type_pane_g

0xa008,	// (0x0007589e) bg_popup_sub_pane_cp02

0xb06f,	// (0x00076905) listscroll_popup_wml_pane

0xb077,	// (0x0007690d) list_wml_pane

0xb081,	// (0x00076917) scroll_pane_cp013

0xb08c,	// (0x00076922) list_single_graphic_popup_wml_pane_ParamLimits

0xb08c,	// (0x00076922) list_single_graphic_popup_wml_pane

0xa37d,	// (0x00075c13) list_single_graphic_popup_wml_pane_g1

0xb0a0,	// (0x00076936) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007abf8) list_single_graphic_popup_wml_pane_g

0xb0a8,	// (0x0007693e) list_single_graphic_popup_wml_pane_t1

0xb0be,	// (0x00076954) aid_call_pane

0xa25b,	// (0x00075af1) popup_clock_analogue_window_g1

0xa25b,	// (0x00075af1) popup_clock_analogue_window_g2

0x9900,	// (0x00075196) popup_clock_analogue_window_g3

0x9900,	// (0x00075196) popup_clock_analogue_window_g4

0xa37d,	// (0x00075c13) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007abfd) popup_clock_analogue_window_g

0x9908,	// (0x0007519e) popup_clock_analogue_window_t1

0x9916,	// (0x000751ac) clock_digital_number_pane_ParamLimits

0x9916,	// (0x000751ac) clock_digital_number_pane

0x9922,	// (0x000751b8) clock_digital_number_pane_cp02_ParamLimits

0x9922,	// (0x000751b8) clock_digital_number_pane_cp02

0x992e,	// (0x000751c4) clock_digital_number_pane_cp03_ParamLimits

0x992e,	// (0x000751c4) clock_digital_number_pane_cp03

0x993a,	// (0x000751d0) clock_digital_number_pane_cp04_ParamLimits

0x993a,	// (0x000751d0) clock_digital_number_pane_cp04

0x994a,	// (0x000751e0) clock_digital_separator_pane_ParamLimits

0x994a,	// (0x000751e0) clock_digital_separator_pane

0x9956,	// (0x000751ec) popup_clock_digital_window_t1

0xa37d,	// (0x00075c13) clock_digital_number_pane_g1

0xa37d,	// (0x00075c13) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007ab6b) clock_digital_number_pane_g

0xa37d,	// (0x00075c13) clock_digital_separator_pane_g1

0xa37d,	// (0x00075c13) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007ab6b) clock_digital_separator_pane_g

0xa008,	// (0x0007589e) bg_popup_window_pane_cp04

0xb0c6,	// (0x0007695c) heading_pane_cp03

0xb0ce,	// (0x00076964) listscroll_popup_gms_pane

0xb0d6,	// (0x0007696c) grid_large_graphic_popup_pane

0xb0e0,	// (0x00076976) listscroll_popup_gms_pane_g1

0xb0e8,	// (0x0007697e) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007ac08) listscroll_popup_gms_pane_g

0xab7d,	// (0x00076413) scroll_pane_cp014

0x260a,	// (0x0006dea0) cell_large_graphic_popup_pane_ParamLimits

0x260a,	// (0x0006dea0) cell_large_graphic_popup_pane

0x2622,	// (0x0006deb8) cell_large_graphic_popup_pane_g1_ParamLimits

0x2622,	// (0x0006deb8) cell_large_graphic_popup_pane_g1

0xb0f0,	// (0x00076986) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0f0,	// (0x00076986) cell_large_graphic_popup_pane_g2

0xb0fc,	// (0x00076992) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0fc,	// (0x00076992) cell_large_graphic_popup_pane_g3

0xb109,	// (0x0007699f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb109,	// (0x0007699f) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007ac0d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007ac0d) cell_large_graphic_popup_pane_g

0xb119,	// (0x000769af) grid_highlight_pane_cp010

0xa37d,	// (0x00075c13) bg_popup_call_pane_g1

0xb123,	// (0x000769b9) list_single_graphic_popup_conf_pane_ParamLimits

0xb123,	// (0x000769b9) list_single_graphic_popup_conf_pane

0xb136,	// (0x000769cc) list_highlight_pane_cp01

0xb13f,	// (0x000769d5) list_single_graphic_popup_conf_pane_g1

0xb147,	// (0x000769dd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007ac16) list_single_graphic_popup_conf_pane_g

0xb14f,	// (0x000769e5) list_single_graphic_popup_conf_pane_t1

0xb15d,	// (0x000769f3) linegrid_cams_pane_g1

0x262e,	// (0x0006dec4) linegrid_cams_pane_g2

0xa4d3,	// (0x00075d69) linegrid_cams_pane_g3

0xb166,	// (0x000769fc) linegrid_cams_pane_g4

0x2637,	// (0x0006decd) linegrid_cams_pane_g5

0x2640,	// (0x0006ded6) linegrid_cams_pane_g6

0xa4dc,	// (0x00075d72) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007ac1b) linegrid_cams_pane_g

0xb16f,	// (0x00076a05) popup_clock_analogue_window

0xb16f,	// (0x00076a05) popup_clock_digital_window

0xa008,	// (0x0007589e) popup_phob_thumbnail_window

0xa37d,	// (0x00075c13) call_video_uplink_pane_g1

0xb178,	// (0x00076a0e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007ac2a) call_video_uplink_pane_g

0xb180,	// (0x00076a16) video_uplink_pane

0xb188,	// (0x00076a1e) mce_image_pane_g1

0x264b,	// (0x0006dee1) mce_image_pane_g2

0x2655,	// (0x0006deeb) mce_image_pane_g3

0x265d,	// (0x0006def3) mce_image_pane_g4

0x2665,	// (0x0006defb) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007ac2f) mce_image_pane_g

0xb192,	// (0x00076a28) control_top_pane_stacon_cp01_ParamLimits

0xb192,	// (0x00076a28) control_top_pane_stacon_cp01

0xb1a6,	// (0x00076a3c) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1a6,	// (0x00076a3c) uni_indicator_pane_stacon_cp01

0xb1b7,	// (0x00076a4d) bg_popup_sub_pane_cp03

0xb1c1,	// (0x00076a57) chi_dic_find_pane

0x266d,	// (0x0006df03) listscroll_chi_dic_pane

0xb1c9,	// (0x00076a5f) main_pane_chidic_g1

0xb1d1,	// (0x00076a67) chi_dic_find_pane_t1

0xb1df,	// (0x00076a75) find_chidic_pane

0xb1e8,	// (0x00076a7e) chi_dic_list_pane_ParamLimits

0xb1e8,	// (0x00076a7e) chi_dic_list_pane

0xb1f9,	// (0x00076a8f) scroll_pane_cp020

0xb201,	// (0x00076a97) find_chidic_pane_t1

0xa008,	// (0x0007589e) input_focus_pane_cp06

0x2681,	// (0x0006df17) list_chi_dic_pane_ParamLimits

0x2681,	// (0x0006df17) list_chi_dic_pane

0x2693,	// (0x0006df29) list_chi_dic_pane_t1_ParamLimits

0x2693,	// (0x0006df29) list_chi_dic_pane_t1

0xa008,	// (0x0007589e) list_highlight_pane_cp020

0xb210,	// (0x00076aa6) bg_cale_heading_pane_g1

0x26a6,	// (0x0006df3c) bg_cale_heading_pane_g2

0x26ae,	// (0x0006df44) bg_cale_heading_pane_g3

0x26b6,	// (0x0006df4c) bg_cale_heading_pane_g4

0x26c0,	// (0x0006df56) bg_cale_heading_pane_g5

0x26ca,	// (0x0006df60) bg_cale_heading_pane_g6

0x26d2,	// (0x0006df68) bg_cale_heading_pane_g7

0x26da,	// (0x0006df70) bg_cale_heading_pane_g8

0x26e4,	// (0x0006df7a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007ac3a) bg_cale_heading_pane_g

0xb210,	// (0x00076aa6) bg_cale_side_pane_g1

0x26ee,	// (0x0006df84) bg_cale_side_pane_g2

0x26f6,	// (0x0006df8c) bg_cale_side_pane_g3

0x26fe,	// (0x0006df94) bg_cale_side_pane_g4

0x2706,	// (0x0006df9c) bg_cale_side_pane_g5

0x270e,	// (0x0006dfa4) bg_cale_side_pane_g6

0x2716,	// (0x0006dfac) bg_cale_side_pane_g7

0x271e,	// (0x0006dfb4) bg_cale_side_pane_g8

0x2726,	// (0x0006dfbc) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007ac4d) bg_cale_side_pane_g

0x272e,	// (0x0006dfc4) popup_call_status_window_ParamLimits

0x272e,	// (0x0006dfc4) popup_call_status_window

0xb218,	// (0x00076aae) stacon_top_pane

0xb220,	// (0x00076ab6) status_pane_ParamLimits

0xb220,	// (0x00076ab6) status_pane

0xb235,	// (0x00076acb) status_small_pane

0xb23d,	// (0x00076ad3) control_pane

0xa008,	// (0x0007589e) stacon_bottom_pane

0xb245,	// (0x00076adb) list_single_mce_smart_pane_t1_ParamLimits

0xb245,	// (0x00076adb) list_single_mce_smart_pane_t1

0xb258,	// (0x00076aee) list_single_mce_smart_pane_t2_ParamLimits

0xb258,	// (0x00076aee) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007ac60) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007ac60) list_single_mce_smart_pane_t

0x2777,	// (0x0006e00d) compass_pane

0x2780,	// (0x0006e016) main_location2_pane_t1

0x2792,	// (0x0006e028) main_location2_pane_t2

0x27a4,	// (0x0006e03a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007ac65) main_location2_pane_t

0xb277,	// (0x00076b0d) compass_pane_g1_ParamLimits

0xb277,	// (0x00076b0d) compass_pane_g1

0x27e8,	// (0x0006e07e) compass_pane_t1

0x27f7,	// (0x0006e08d) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007ac6e) compass_pane_t

0x283e,	// (0x0006e0d4) text_secondary_cp61

0xb2f3,	// (0x00076b89) navi_pane_cams_g5

0xb36f,	// (0x00076c05) navi_pane_im_t1

0xb37d,	// (0x00076c13) navi_pane_mp_g1_ParamLimits

0xb37d,	// (0x00076c13) navi_pane_mp_g1

0xb391,	// (0x00076c27) navi_pane_mp_g2_ParamLimits

0xb391,	// (0x00076c27) navi_pane_mp_g2

0xb39d,	// (0x00076c33) navi_pane_mp_g3_ParamLimits

0xb39d,	// (0x00076c33) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007ac82) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007ac82) navi_pane_mp_g

0xb3a9,	// (0x00076c3f) navi_pane_mp_t1

0xb3b7,	// (0x00076c4d) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007ac89) navi_pane_mp_t

0xb422,	// (0x00076cb8) navi_pane_vt_g1

0xb3a9,	// (0x00076c3f) navi_pane_vt_t1

0xb42a,	// (0x00076cc0) navi_slider_pane

0xa4ed,	// (0x00075d83) zooming_pane

0xb43a,	// (0x00076cd0) navi_slider_pane_g1

0x9973,	// (0x00075209) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007ac90) navi_slider_pane_g

0xb45e,	// (0x00076cf4) aid_levels_zoom

0xb466,	// (0x00076cfc) zooming_pane_g1

0xb46e,	// (0x00076d04) zooming_pane_g2

0xb46e,	// (0x00076d04) zooming_pane_g3

0x0002,

0xf409,	// (0x0007ac9f) zooming_pane_g

0xb476,	// (0x00076d0c) level_10_zoom

0xb47f,	// (0x00076d15) level_11_zoom

0xb488,	// (0x00076d1e) level_1_zoom

0xb491,	// (0x00076d27) level_2_zoom

0xb49a,	// (0x00076d30) level_3_zoom

0xb4a3,	// (0x00076d39) level_4_zoom

0xb4ac,	// (0x00076d42) level_5_zoom

0xb4b5,	// (0x00076d4b) level_6_zoom

0xb4be,	// (0x00076d54) level_7_zoom

0xb4c7,	// (0x00076d5d) level_8_zoom

0xb4d0,	// (0x00076d66) level_9_zoom

0xb4ef,	// (0x00076d85) popup_phob_thumbnail_window_g1

0xb4f7,	// (0x00076d8d) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007aca6) popup_phob_thumbnail_window_g

0xc7d3,	// (0x00078069) level_1_location

0xc7db,	// (0x00078071) level_2_location

0xc7e3,	// (0x00078079) level_3_location

0xc7eb,	// (0x00078081) level_4_location

0xa4ed,	// (0x00075d83) level_5_location

0x288f,	// (0x0006e125) mce_icon_pane_g1

0x2899,	// (0x0006e12f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007acab) mce_icon_pane_g

0x28a1,	// (0x0006e137) main_mup_pane_g1_ParamLimits

0x28a1,	// (0x0006e137) main_mup_pane_g1

0x28b7,	// (0x0006e14d) main_mup_pane_g2_ParamLimits

0x28b7,	// (0x0006e14d) main_mup_pane_g2

0x28cf,	// (0x0006e165) main_mup_pane_g3_ParamLimits

0x28cf,	// (0x0006e165) main_mup_pane_g3

0x28e7,	// (0x0006e17d) main_mup_pane_g4_ParamLimits

0x28e7,	// (0x0006e17d) main_mup_pane_g4

0x28ff,	// (0x0006e195) main_mup_pane_g5_ParamLimits

0x28ff,	// (0x0006e195) main_mup_pane_g5

0x291b,	// (0x0006e1b1) main_mup_pane_g6_ParamLimits

0x291b,	// (0x0006e1b1) main_mup_pane_g6

0x2933,	// (0x0006e1c9) main_mup_pane_g7_ParamLimits

0x2933,	// (0x0006e1c9) main_mup_pane_g7

0x294b,	// (0x0006e1e1) main_mup_pane_g8_ParamLimits

0x294b,	// (0x0006e1e1) main_mup_pane_g8

0x2965,	// (0x0006e1fb) main_mup_pane_g9_ParamLimits

0x2965,	// (0x0006e1fb) main_mup_pane_g9

0x297f,	// (0x0006e215) main_mup_pane_g10_ParamLimits

0x297f,	// (0x0006e215) main_mup_pane_g10

0x2999,	// (0x0006e22f) main_mup_pane_g11_ParamLimits

0x2999,	// (0x0006e22f) main_mup_pane_g11

0x29ad,	// (0x0006e243) main_mup_pane_g12_ParamLimits

0x29ad,	// (0x0006e243) main_mup_pane_g12

0x29c3,	// (0x0006e259) main_mup_pane_g13_ParamLimits

0x29c3,	// (0x0006e259) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007acb0) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007acb0) main_mup_pane_g

0x29d7,	// (0x0006e26d) main_mup_pane_t1_ParamLimits

0x29d7,	// (0x0006e26d) main_mup_pane_t1

0x29f1,	// (0x0006e287) main_mup_pane_t2_ParamLimits

0x29f1,	// (0x0006e287) main_mup_pane_t2

0x2a09,	// (0x0006e29f) main_mup_pane_t3_ParamLimits

0x2a09,	// (0x0006e29f) main_mup_pane_t3

0x2a21,	// (0x0006e2b7) main_mup_pane_t4_ParamLimits

0x2a21,	// (0x0006e2b7) main_mup_pane_t4

0x2a3f,	// (0x0006e2d5) main_mup_pane_t5_ParamLimits

0x2a3f,	// (0x0006e2d5) main_mup_pane_t5

0x2a54,	// (0x0006e2ea) main_mup_pane_t6_ParamLimits

0x2a54,	// (0x0006e2ea) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007accb) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007accb) main_mup_pane_t

0x2a66,	// (0x0006e2fc) mup_progress_pane_ParamLimits

0x2a66,	// (0x0006e2fc) mup_progress_pane

0x2a72,	// (0x0006e308) mup_visualizer_pane_ParamLimits

0x2a72,	// (0x0006e308) mup_visualizer_pane

0x2aa2,	// (0x0006e338) mup_volume_pane_ParamLimits

0x2aa2,	// (0x0006e338) mup_volume_pane

0xb4d9,	// (0x00076d6f) mup_visualizer_pane_g1_ParamLimits

0xb4d9,	// (0x00076d6f) mup_visualizer_pane_g1

0xb4d9,	// (0x00076d6f) mup_visualizer_pane_g2_ParamLimits

0xb4d9,	// (0x00076d6f) mup_visualizer_pane_g2

0xb277,	// (0x00076b0d) mup_visualizer_pane_g3_ParamLimits

0xb277,	// (0x00076b0d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007acd8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007acd8) mup_visualizer_pane_g

0xa37d,	// (0x00075c13) mup_volume_pane_g1

0xb507,	// (0x00076d9d) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007acdf) mup_volume_pane_g

0xa37d,	// (0x00075c13) mup_progress_pane_g1

0xb510,	// (0x00076da6) mup_progress_pane_g2

0xb519,	// (0x00076daf) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007ace4) mup_progress_pane_g

0xa008,	// (0x0007589e) bg_popup_window_pane_cp05

0xb522,	// (0x00076db8) heading_pane_cp02_ParamLimits

0xb522,	// (0x00076db8) heading_pane_cp02

0xb53c,	// (0x00076dd2) list_popup_blid_pane

0xb544,	// (0x00076dda) list_blid_sat_info_pane_ParamLimits

0xb544,	// (0x00076dda) list_blid_sat_info_pane

0xb557,	// (0x00076ded) list_blid_sat_info_pane_g1

0xb55f,	// (0x00076df5) list_blid_sat_info_pane_t1

0x2bb8,	// (0x0006e44e) mup_equalizer_pane_ParamLimits

0x2bb8,	// (0x0006e44e) mup_equalizer_pane

0x2bd1,	// (0x0006e467) mup_equalizer_pane_cp1_ParamLimits

0x2bd1,	// (0x0006e467) mup_equalizer_pane_cp1

0x2bee,	// (0x0006e484) mup_equalizer_pane_cp2_ParamLimits

0x2bee,	// (0x0006e484) mup_equalizer_pane_cp2

0x2c0b,	// (0x0006e4a1) mup_equalizer_pane_cp3_ParamLimits

0x2c0b,	// (0x0006e4a1) mup_equalizer_pane_cp3

0x2c2c,	// (0x0006e4c2) mup_equalizer_pane_cp4_ParamLimits

0x2c2c,	// (0x0006e4c2) mup_equalizer_pane_cp4

0x2c4d,	// (0x0006e4e3) mup_equalizer_pane_cp5

0x2c61,	// (0x0006e4f7) mup_equalizer_pane_cp6

0x2c75,	// (0x0006e50b) mup_equalizer_pane_cp7

0xc6f1,	// (0x00077f87) bg_popup_call_poc_act_pane_g9

0xc6f9,	// (0x00077f8f) bg_popup_call_poc_act_pane_g10

0xc701,	// (0x00077f97) bg_popup_call_poc_act_pane_g11

0x000a,

0xa263,	// (0x00075af9) mup_scale_pane

0xa37d,	// (0x00075c13) mup_scale_pane_g1

0xb56d,	// (0x00076e03) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007ad00) mup_scale_pane_g

0xb591,	// (0x00076e27) msg_data_pane

0xb599,	// (0x00076e2f) scroll_pane_cp017

0x2c9b,	// (0x0006e531) bg_list_pane_cp04_ParamLimits

0x2c9b,	// (0x0006e531) bg_list_pane_cp04

0xb5a1,	// (0x00076e37) msg_data_pane_g1

0x2cb3,	// (0x0006e549) msg_data_pane_g2

0x2cbd,	// (0x0006e553) msg_data_pane_g3

0x2cc5,	// (0x0006e55b) msg_data_pane_g4

0x2ccd,	// (0x0006e563) msg_data_pane_g5

0x2cd5,	// (0x0006e56b) msg_data_pane_g6

0x2cdd,	// (0x0006e573) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007ad0f) msg_data_pane_g

0x2ce5,	// (0x0006e57b) msg_text_pane_ParamLimits

0x2ce5,	// (0x0006e57b) msg_text_pane

0x2d0a,	// (0x0006e5a0) qrid_highlight_pane_cp011_ParamLimits

0x2d0a,	// (0x0006e5a0) qrid_highlight_pane_cp011

0xa008,	// (0x0007589e) msg_body_pane

0xa008,	// (0x0007589e) msg_header_pane

0xb5b2,	// (0x00076e48) input_focus_pane_cp07

0x2d2e,	// (0x0006e5c4) msg_header_pane_t1_ParamLimits

0x2d2e,	// (0x0006e5c4) msg_header_pane_t1

0xa53e,	// (0x00075dd4) msg_header_pane_t2_ParamLimits

0xa53e,	// (0x00075dd4) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007ad23) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007ad23) msg_header_pane_t

0xb5c7,	// (0x00076e5d) msg_body_pane_g1

0x2d40,	// (0x0006e5d6) msg_body_pane_t1_ParamLimits

0x2d40,	// (0x0006e5d6) msg_body_pane_t1

0xa550,	// (0x00075de6) msg_body_pane_t2_ParamLimits

0xa550,	// (0x00075de6) msg_body_pane_t2

0xa562,	// (0x00075df8) msg_body_pane_t3_ParamLimits

0xa562,	// (0x00075df8) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007ad28) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007ad28) msg_body_pane_t

0x2dab,	// (0x0006e641) main_viewer_pane_g1_ParamLimits

0x2dab,	// (0x0006e641) main_viewer_pane_g1

0x2db9,	// (0x0006e64f) main_viewer_pane_g2_ParamLimits

0x2db9,	// (0x0006e64f) main_viewer_pane_g2

0x2dc7,	// (0x0006e65d) main_viewer_pane_g3_ParamLimits

0x2dc7,	// (0x0006e65d) main_viewer_pane_g3

0x2dd6,	// (0x0006e66c) main_viewer_pane_g4_ParamLimits

0x2dd6,	// (0x0006e66c) main_viewer_pane_g4

0x999d,	// (0x00075233) main_viewer_pane_g5_ParamLimits

0x999d,	// (0x00075233) main_viewer_pane_g5

0x999d,	// (0x00075233) main_viewer_pane_g7_ParamLimits

0x999d,	// (0x00075233) main_viewer_pane_g7

0xaeee,	// (0x00076784) main_viewer_pane_g8_ParamLimits

0xaeee,	// (0x00076784) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007ad38) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007ad38) main_viewer_pane_g

0xb5cf,	// (0x00076e65) viewer_content_pane_ParamLimits

0xb5cf,	// (0x00076e65) viewer_content_pane

0x2e12,	// (0x0006e6a8) main_postcard_pane_g1_ParamLimits

0x2e12,	// (0x0006e6a8) main_postcard_pane_g1

0x2e28,	// (0x0006e6be) main_postcard_pane_g2_ParamLimits

0x2e28,	// (0x0006e6be) main_postcard_pane_g2

0x2e3e,	// (0x0006e6d4) main_postcard_pane_g3_ParamLimits

0x2e3e,	// (0x0006e6d4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007ad49) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007ad49) main_postcard_pane_g

0x2e55,	// (0x0006e6eb) main_postcard_pane_g4

0xc8d3,	// (0x00078169) smil_status_volume_pane_g2

0x2e98,	// (0x0006e72e) postcard_pane_ParamLimits

0x2e98,	// (0x0006e72e) postcard_pane

0xb5dd,	// (0x00076e73) postcard_pane_g1_ParamLimits

0xb5dd,	// (0x00076e73) postcard_pane_g1

0x2eda,	// (0x0006e770) postcard_pane_g2_ParamLimits

0x2eda,	// (0x0006e770) postcard_pane_g2

0x2ee6,	// (0x0006e77c) postcard_pane_g3_ParamLimits

0x2ee6,	// (0x0006e77c) postcard_pane_g3

0xb5eb,	// (0x00076e81) postcard_pane_g4_ParamLimits

0xb5eb,	// (0x00076e81) postcard_pane_g4

0x2ef2,	// (0x0006e788) postcard_pane_g5_ParamLimits

0x2ef2,	// (0x0006e788) postcard_pane_g5

0x2f07,	// (0x0006e79d) postcard_pane_g6_ParamLimits

0x2f07,	// (0x0006e79d) postcard_pane_g6

0xb5dd,	// (0x00076e73) postcard_pane_g7_ParamLimits

0xb5dd,	// (0x00076e73) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007ad56) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007ad56) postcard_pane_g

0x2f1b,	// (0x0006e7b1) main_mp2_pane_g1_ParamLimits

0x2f1b,	// (0x0006e7b1) main_mp2_pane_g1

0x2f27,	// (0x0006e7bd) main_mp2_pane_g2_ParamLimits

0x2f27,	// (0x0006e7bd) main_mp2_pane_g2

0x2f33,	// (0x0006e7c9) main_mp2_pane_g3_ParamLimits

0x2f33,	// (0x0006e7c9) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007ad65) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007ad65) main_mp2_pane_g

0x2f3f,	// (0x0006e7d5) main_mp2_pane_t1_ParamLimits

0x2f3f,	// (0x0006e7d5) main_mp2_pane_t1

0x2f54,	// (0x0006e7ea) main_mp2_pane_t2_ParamLimits

0x2f54,	// (0x0006e7ea) main_mp2_pane_t2

0x2f66,	// (0x0006e7fc) main_mp2_pane_t3_ParamLimits

0x2f66,	// (0x0006e7fc) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007ad6c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007ad6c) main_mp2_pane_t

0xb5f9,	// (0x00076e8f) pec_content_pane_ParamLimits

0xb5f9,	// (0x00076e8f) pec_content_pane

0xab7d,	// (0x00076413) scroll_pane_cp015

0xb60b,	// (0x00076ea1) pec_attribute_pane_ParamLimits

0xb60b,	// (0x00076ea1) pec_attribute_pane

0x2f78,	// (0x0006e80e) pec_content_pane_g1_ParamLimits

0x2f78,	// (0x0006e80e) pec_content_pane_g1

0xb61b,	// (0x00076eb1) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x00076eb1) pec_content_pane_t1

0xb62d,	// (0x00076ec3) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x00076ec3) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007ad73) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007ad73) pec_content_pane_t

0x2f84,	// (0x0006e81a) list_single_graphic_pane_cp01_ParamLimits

0x2f84,	// (0x0006e81a) list_single_graphic_pane_cp01

0xa263,	// (0x00075af9) bg_popup_sub_pane_cp04

0xb63f,	// (0x00076ed5) popup_mup_playback_window_g1

0xb64b,	// (0x00076ee1) popup_mup_playback_window_t1

0xb660,	// (0x00076ef6) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007ad78) popup_mup_playback_window_t

0xb697,	// (0x00076f2d) main_image_pane_g1_ParamLimits

0xb697,	// (0x00076f2d) main_image_pane_g1

0xb6da,	// (0x00076f70) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x00076f70) scroll_pane_cp018

0xb6f2,	// (0x00076f88) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x00076f88) scroll_pane_cp016

0x3051,	// (0x0006e8e7) smil2_image_pane_ParamLimits

0x3051,	// (0x0006e8e7) smil2_image_pane

0x3081,	// (0x0006e917) smil2_root_pane_ParamLimits

0x3081,	// (0x0006e917) smil2_root_pane

0x30b9,	// (0x0006e94f) smil2_text_pane_ParamLimits

0x30b9,	// (0x0006e94f) smil2_text_pane

0xa008,	// (0x0007589e) bg_list_pane_cp06

0xb72e,	// (0x00076fc4) grid_radio_pane

0xa008,	// (0x0007589e) bg_popup_window_pane_cp06

0xb736,	// (0x00076fcc) main_fmradio_pane_t1

0xb0c6,	// (0x0007695c) heading_pane_cp04

0xb744,	// (0x00076fda) main_fmradio_pane_t2

0xc709,	// (0x00077f9f) popup_cale_lunar_info_window_g1

0xb752,	// (0x00076fe8) main_fmradio_pane_t3

0xc711,	// (0x00077fa7) popup_cale_lunar_info_window_g2

0xb760,	// (0x00076ff6) main_fmradio_pane_t4

0x0001,

0xb76e,	// (0x00077004) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007ae53) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007ad8d) main_fmradio_pane_t

0xb77c,	// (0x00077012) wait_bar_pane_cp03

0xb784,	// (0x0007701a) cell_fmradio_pane_ParamLimits

0xb784,	// (0x0007701a) cell_fmradio_pane

0xb5dd,	// (0x00076e73) cell_fmradio_pane_g1_ParamLimits

0xb5dd,	// (0x00076e73) cell_fmradio_pane_g1

0xa008,	// (0x0007589e) grid_highlight_pane_cp011

0xb797,	// (0x0007702d) poc_content_pane_ParamLimits

0xb797,	// (0x0007702d) poc_content_pane

0xb7a9,	// (0x0007703f) scroll_pane_cp019

0x3139,	// (0x0006e9cf) popup_call_poc_act_window_ParamLimits

0x3139,	// (0x0006e9cf) popup_call_poc_act_window

0x315d,	// (0x0006e9f3) popup_call_poc_inact_window_ParamLimits

0x315d,	// (0x0006e9f3) popup_call_poc_inact_window

0xf594,	// (0x0007ae2a) bg_popup_call_poc_act_pane_g

0xc681,	// (0x00077f17) bg_popup_call_poc_inact_pane_g1

0xc689,	// (0x00077f1f) bg_popup_call_poc_inact_pane_g2

0xb7b1,	// (0x00077047) popup_call_poc_act_window_g2

0xc691,	// (0x00077f27) bg_popup_call_poc_inact_pane_g3

0xc699,	// (0x00077f2f) bg_popup_call_poc_inact_pane_g4

0xc6a1,	// (0x00077f37) bg_popup_call_poc_inact_pane_g5

0xb7b9,	// (0x0007704f) popup_call_poc_act_window_t1_ParamLimits

0xb7b9,	// (0x0007704f) popup_call_poc_act_window_t1

0xb7e1,	// (0x00077077) popup_call_poc_act_window_t2_ParamLimits

0xb7e1,	// (0x00077077) popup_call_poc_act_window_t2

0xb809,	// (0x0007709f) popup_call_poc_act_window_t3_ParamLimits

0xb809,	// (0x0007709f) popup_call_poc_act_window_t3

0xb831,	// (0x000770c7) popup_call_poc_act_window_t4_ParamLimits

0xb831,	// (0x000770c7) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007ad98) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007ad98) popup_call_poc_act_window_t

0xc6a9,	// (0x00077f3f) bg_popup_call_poc_inact_pane_g6

0xc6b1,	// (0x00077f47) bg_popup_call_poc_inact_pane_g7

0xc6b9,	// (0x00077f4f) bg_popup_call_poc_inact_pane_g8

0xb843,	// (0x000770d9) popup_call_poc_inact_window_g2

0xc6c1,	// (0x00077f57) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007ae17) bg_popup_call_poc_inact_pane_g

0xb84b,	// (0x000770e1) popup_call_poc_inact_window_t1_ParamLimits

0xb84b,	// (0x000770e1) popup_call_poc_inact_window_t1

0xb860,	// (0x000770f6) popup_call_poc_inact_window_t2_ParamLimits

0xb860,	// (0x000770f6) popup_call_poc_inact_window_t2

0xb875,	// (0x0007710b) popup_call_poc_inact_window_t3_ParamLimits

0xb875,	// (0x0007710b) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007ada1) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007ada1) popup_call_poc_inact_window_t

0xc846,	// (0x000780dc) context_pane_ParamLimits

0x399e,	// (0x0006f234) signal_pane_ParamLimits

0xa4ed,	// (0x00075d83) main_call2_pane

0x99e8,	// (0x0007527e) popup_phob_thumbnail2_window_ParamLimits

0x99e8,	// (0x0007527e) popup_phob_thumbnail2_window

0x9985,	// (0x0007521b) aid_hotspot_pointer_arrow_pane

0x998d,	// (0x00075223) aid_hotspot_pointer_hand_pane

0x34a6,	// (0x0006ed3c) phob_pre_status_pane_g5

0x0fe9,	// (0x0006c87f) cams_zoom_pane_ParamLimits

0x0ff8,	// (0x0006c88e) image_vga_pane_ParamLimits

0x1012,	// (0x0006c8a8) main_camera_pane_g1_ParamLimits

0x1024,	// (0x0006c8ba) main_camera_pane_g2_ParamLimits

0x1034,	// (0x0006c8ca) main_camera_pane_g3_ParamLimits

0x1044,	// (0x0006c8da) main_camera_pane_g4_ParamLimits

0x1054,	// (0x0006c8ea) main_camera_pane_g5_ParamLimits

0x1064,	// (0x0006c8fa) main_camera_pane_g6_ParamLimits

0x1076,	// (0x0006c90c) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007aaa0) main_camera_pane_g_ParamLimits

0x1086,	// (0x0006c91c) main_camera_pane_t1_ParamLimits

0x109c,	// (0x0006c932) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007aab1) main_camera_pane_t_ParamLimits

0xa263,	// (0x00075af9) bg_popup_preview_window_pane_cp01_ParamLimits

0xa263,	// (0x00075af9) bg_popup_preview_window_pane_cp01

0xb88a,	// (0x00077120) popup_phob_thumbnail2_window_g1_ParamLimits

0xb88a,	// (0x00077120) popup_phob_thumbnail2_window_g1

0xa008,	// (0x0007589e) call2_cli_visual_pane

0x3191,	// (0x0006ea27) popup_call2_audio_conf_window_ParamLimits

0x3191,	// (0x0006ea27) popup_call2_audio_conf_window

0x31b1,	// (0x0006ea47) popup_call2_audio_first_window_ParamLimits

0x31b1,	// (0x0006ea47) popup_call2_audio_first_window

0x3247,	// (0x0006eadd) popup_call2_audio_in_window_ParamLimits

0x3247,	// (0x0006eadd) popup_call2_audio_in_window

0x328f,	// (0x0006eb25) popup_call2_audio_out_window_ParamLimits

0x328f,	// (0x0006eb25) popup_call2_audio_out_window

0x32f9,	// (0x0006eb8f) popup_call2_audio_second_window_ParamLimits

0x32f9,	// (0x0006eb8f) popup_call2_audio_second_window

0x335f,	// (0x0006ebf5) popup_call2_audio_wait_window_ParamLimits

0x335f,	// (0x0006ebf5) popup_call2_audio_wait_window

0xa008,	// (0x0007589e) bg_popup_call2_act_pane_cp03

0xa245,	// (0x00075adb) list_conf_pane_cp

0xb896,	// (0x0007712c) popup_call2_audio_conf_window_t1

0xb123,	// (0x000769b9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb123,	// (0x000769b9) list_single_graphic_popup_conf2_pane

0xb136,	// (0x000769cc) list_highlight_pane_cp04

0xb8a4,	// (0x0007713a) list_single_graphic_popup_conf2_pane_g1

0xb147,	// (0x000769dd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007ada8) list_single_graphic_popup_conf2_pane_g

0xb8ae,	// (0x00077144) list_single_graphic_popup_conf2_pane_t1

0xb8bc,	// (0x00077152) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8bc,	// (0x00077152) bg_popup_call2_act_pane_cp01

0xb946,	// (0x000771dc) call_type_pane_cp05_ParamLimits

0xb946,	// (0x000771dc) call_type_pane_cp05

0xb99a,	// (0x00077230) popup_call2_audio_second_window_g1_ParamLimits

0xb99a,	// (0x00077230) popup_call2_audio_second_window_g1

0xb9ee,	// (0x00077284) popup_call2_audio_second_window_g2_ParamLimits

0xb9ee,	// (0x00077284) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007adad) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007adad) popup_call2_audio_second_window_g

0xba53,	// (0x000772e9) popup_call2_audio_second_window_t1_ParamLimits

0xba53,	// (0x000772e9) popup_call2_audio_second_window_t1

0xbb0e,	// (0x000773a4) popup_call2_audio_second_window_t2_ParamLimits

0xbb0e,	// (0x000773a4) popup_call2_audio_second_window_t2

0xbb61,	// (0x000773f7) popup_call2_audio_second_window_t3_ParamLimits

0xbb61,	// (0x000773f7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007adb4) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007adb4) popup_call2_audio_second_window_t

0xa008,	// (0x0007589e) bg_popup_call2_in_pane_cp02

0xa012,	// (0x000758a8) call_type_pane_cp04

0xa01a,	// (0x000758b0) popup_call2_audio_wait_window_g1

0xa022,	// (0x000758b8) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a98f) popup_call2_audio_wait_window_g

0xa02a,	// (0x000758c0) popup_call2_audio_wait_window_t3

0xbc54,	// (0x000774ea) bg_popup_call2_act_pane_ParamLimits

0xbc54,	// (0x000774ea) bg_popup_call2_act_pane

0xbd14,	// (0x000775aa) call_type_pane_cp03_ParamLimits

0xbd14,	// (0x000775aa) call_type_pane_cp03

0xbd78,	// (0x0007760e) popup_call2_audio_first_window_g1_ParamLimits

0xbd78,	// (0x0007760e) popup_call2_audio_first_window_g1

0xbde8,	// (0x0007767e) popup_call2_audio_first_window_g2_ParamLimits

0xbde8,	// (0x0007767e) popup_call2_audio_first_window_g2

0xb4d9,	// (0x00076d6f) popup_call2_audio_first_window_g3_ParamLimits

0xb4d9,	// (0x00076d6f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007adbd) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007adbd) popup_call2_audio_first_window_g

0xbec6,	// (0x0007775c) popup_call2_audio_first_window_t1_ParamLimits

0xbec6,	// (0x0007775c) popup_call2_audio_first_window_t1

0xbfc9,	// (0x0007785f) popup_call2_audio_first_window_t4_ParamLimits

0xbfc9,	// (0x0007785f) popup_call2_audio_first_window_t4

0xc0ac,	// (0x00077942) popup_call2_audio_first_window_t5_ParamLimits

0xc0ac,	// (0x00077942) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007adc8) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007adc8) popup_call2_audio_first_window_t

0xa25b,	// (0x00075af1) bg_popup_call2_act_pane_g1

0xc719,	// (0x00077faf) popup_cale_lunar_info_window_t1

0xc727,	// (0x00077fbd) popup_cale_lunar_info_window_t2

0xc735,	// (0x00077fcb) popup_cale_lunar_info_window_t3

0xa008,	// (0x0007589e) bg_popup_call2_bubble_pane

0xc1ad,	// (0x00077a43) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1ad,	// (0x00077a43) bg_popup_call2_in_pane_cp01

0x95d1,	// (0x00074e67) call_type_pane_cp02

0xc1f5,	// (0x00077a8b) popup_call2_audio_out_window_g1_ParamLimits

0xc1f5,	// (0x00077a8b) popup_call2_audio_out_window_g1

0xc221,	// (0x00077ab7) popup_call2_audio_out_window_g2_ParamLimits

0xc221,	// (0x00077ab7) popup_call2_audio_out_window_g2

0xc249,	// (0x00077adf) popup_call2_audio_out_window_g3_ParamLimits

0xc249,	// (0x00077adf) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007add1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007add1) popup_call2_audio_out_window_g

0xc284,	// (0x00077b1a) popup_call2_audio_out_window_t1_ParamLimits

0xc284,	// (0x00077b1a) popup_call2_audio_out_window_t1

0xc2e3,	// (0x00077b79) popup_call2_audio_out_window_t2_ParamLimits

0xc2e3,	// (0x00077b79) popup_call2_audio_out_window_t2

0xc337,	// (0x00077bcd) popup_call2_audio_out_window_t3_ParamLimits

0xc337,	// (0x00077bcd) popup_call2_audio_out_window_t3

0xc34d,	// (0x00077be3) popup_call2_audio_out_window_t4_ParamLimits

0xc34d,	// (0x00077be3) popup_call2_audio_out_window_t4

0xc363,	// (0x00077bf9) popup_call2_audio_out_window_t5_ParamLimits

0xc363,	// (0x00077bf9) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007adda) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007adda) popup_call2_audio_out_window_t

0xc3c7,	// (0x00077c5d) bg_popup_call2_in_pane_ParamLimits

0xc3c7,	// (0x00077c5d) bg_popup_call2_in_pane

0xc423,	// (0x00077cb9) popup_call2_audio_in_window_g1_ParamLimits

0xc423,	// (0x00077cb9) popup_call2_audio_in_window_g1

0xc45b,	// (0x00077cf1) popup_call2_audio_in_window_g2_ParamLimits

0xc45b,	// (0x00077cf1) popup_call2_audio_in_window_g2

0xc493,	// (0x00077d29) popup_call2_audio_in_window_g3_ParamLimits

0xc493,	// (0x00077d29) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007ade7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007ade7) popup_call2_audio_in_window_g

0xc4eb,	// (0x00077d81) popup_call2_audio_in_window_t1_ParamLimits

0xc4eb,	// (0x00077d81) popup_call2_audio_in_window_t1

0xc56b,	// (0x00077e01) popup_call2_audio_in_window_t2_ParamLimits

0xc56b,	// (0x00077e01) popup_call2_audio_in_window_t2

0xc5eb,	// (0x00077e81) popup_call2_audio_in_window_t3_ParamLimits

0xc5eb,	// (0x00077e81) popup_call2_audio_in_window_t3

0xc605,	// (0x00077e9b) popup_call2_audio_in_window_t4_ParamLimits

0xc605,	// (0x00077e9b) popup_call2_audio_in_window_t4

0xc617,	// (0x00077ead) popup_call2_audio_in_window_t5_ParamLimits

0xc617,	// (0x00077ead) popup_call2_audio_in_window_t5

0xc62c,	// (0x00077ec2) popup_call2_audio_in_window_t6_ParamLimits

0xc62c,	// (0x00077ec2) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007adf0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007adf0) popup_call2_audio_in_window_t

0xa25b,	// (0x00075af1) bg_popup_call2_in_pane_g1

0xc743,	// (0x00077fd9) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007ae58) popup_cale_lunar_info_window_t

0xa263,	// (0x00075af9) bg_popup_call2_rect_pane_ParamLimits

0xa263,	// (0x00075af9) bg_popup_call2_rect_pane

0xa008,	// (0x0007589e) call2_cli_visual_graphic_pane

0xa008,	// (0x0007589e) call2_cli_visual_text_pane

0x9a0f,	// (0x000752a5) smil_status_volume_pane_g3

0x0002,

0xa37d,	// (0x00075c13) call2_cli_visual_graphic_pane_g1

0xa37d,	// (0x00075c13) call2_cli_visual_graphic_pane_g2

0xa37d,	// (0x00075c13) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007adfd) call2_cli_visual_graphic_pane_g

0xc641,	// (0x00077ed7) bg_popup_call2_rect_pane_g1

0xa409,	// (0x00075c9f) bg_popup_call2_rect_pane_g2

0xc649,	// (0x00077edf) bg_popup_call2_rect_pane_g3

0xc651,	// (0x00077ee7) bg_popup_call2_rect_pane_g4

0xc659,	// (0x00077eef) bg_popup_call2_rect_pane_g5

0xc661,	// (0x00077ef7) bg_popup_call2_rect_pane_g6

0xc669,	// (0x00077eff) bg_popup_call2_rect_pane_g7

0xc671,	// (0x00077f07) bg_popup_call2_rect_pane_g8

0xc679,	// (0x00077f0f) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007ae04) bg_popup_call2_rect_pane_g

0xc681,	// (0x00077f17) bg_popup_call2_bubble_pane_g1

0xc689,	// (0x00077f1f) bg_popup_call2_bubble_pane_g2

0xc691,	// (0x00077f27) bg_popup_call2_bubble_pane_g3

0xc699,	// (0x00077f2f) bg_popup_call2_bubble_pane_g4

0xc6a1,	// (0x00077f37) bg_popup_call2_bubble_pane_g5

0xc6a9,	// (0x00077f3f) bg_popup_call2_bubble_pane_g6

0xc6b1,	// (0x00077f47) bg_popup_call2_bubble_pane_g7

0xc6b9,	// (0x00077f4f) bg_popup_call2_bubble_pane_g8

0xc6c1,	// (0x00077f57) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007ae17) bg_popup_call2_bubble_pane_g

0x096b,	// (0x0006c201) aid_cale_week_size_cell_pane

0x10b2,	// (0x0006c948) aid_cams_cif_uncrop_pane_ParamLimits

0x10b2,	// (0x0006c948) aid_cams_cif_uncrop_pane

0x1262,	// (0x0006caf8) aid_cams_size_cell_ParamLimits

0x1262,	// (0x0006caf8) aid_cams_size_cell

0x1276,	// (0x0006cb0c) grid_cams_pane_ParamLimits

0x1290,	// (0x0006cb26) linegrid_cams_pane_ParamLimits

0x148d,	// (0x0006cd23) call_video_pane_t1

0x14ab,	// (0x0006cd41) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007ab04) call_video_pane_t

0x18d7,	// (0x0006d16d) aid_cale_month_size_cell_pane_ParamLimits

0x18d7,	// (0x0006d16d) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007aea1) smil_status_volume_pane_g

0x9a1c,	// (0x000752b2) volume_smil_pane_ParamLimits

0x9464,	// (0x00074cfa) aid_popup2_width_pane

0x08c5,	// (0x0006c15b) cell_qdial_pane_g4_ParamLimits

0x08c5,	// (0x0006c15b) cell_qdial_pane_g4

0x27c8,	// (0x0006e05e) aid_blid_cardinal_pane_ParamLimits

0x27d4,	// (0x0006e06a) aid_blid_destination_pane_ParamLimits

0x27d4,	// (0x0006e06a) aid_blid_destination_pane

0xa263,	// (0x00075af9) bg_popup_call_poc_act_pane_ParamLimits

0xa263,	// (0x00075af9) bg_popup_call_poc_act_pane

0xa263,	// (0x00075af9) bg_popup_call_poc_inact_pane_ParamLimits

0xa263,	// (0x00075af9) bg_popup_call_poc_inact_pane

0xc6c9,	// (0x00077f5f) bg_popup_call_poc_act_pane_g1

0xc6d1,	// (0x00077f67) bg_popup_call_poc_act_pane_g2

0xc6d9,	// (0x00077f6f) bg_popup_call_poc_act_pane_g3

0xc699,	// (0x00077f2f) bg_popup_call_poc_act_pane_g4

0xc6a1,	// (0x00077f37) bg_popup_call_poc_act_pane_g5

0xc6e1,	// (0x00077f77) bg_popup_call_poc_act_pane_g6

0xc6b1,	// (0x00077f47) bg_popup_call_poc_act_pane_g7

0xc6e9,	// (0x00077f7f) bg_popup_call_poc_act_pane_g8

0xa008,	// (0x0007589e) main_usb_pane

0x99c3,	// (0x00075259) popup_cale_lunar_info_window

0x1783,	// (0x0006d019) im_reading_pane_t1_ParamLimits

0xaad5,	// (0x0007636b) list_im_pane_ParamLimits

0xaae6,	// (0x0007637c) scroll_pane_cp07_ParamLimits

0xa008,	// (0x0007589e) grid_highlight_pane_cp012

0xa263,	// (0x00075af9) mup_scale_pane_ParamLimits

0xb5dd,	// (0x00076e73) main_usb_pane_g1_ParamLimits

0xb5dd,	// (0x00076e73) main_usb_pane_g1

0x33bb,	// (0x0006ec51) main_usb_pane_g2_ParamLimits

0x33bb,	// (0x0006ec51) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007ae41) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007ae41) main_usb_pane_g

0x33d1,	// (0x0006ec67) main_usb_pane_t1_ParamLimits

0x33d1,	// (0x0006ec67) main_usb_pane_t1

0x33e3,	// (0x0006ec79) main_usb_pane_t2_ParamLimits

0x33e3,	// (0x0006ec79) main_usb_pane_t2

0x33f5,	// (0x0006ec8b) main_usb_pane_t3_ParamLimits

0x33f5,	// (0x0006ec8b) main_usb_pane_t3

0x3407,	// (0x0006ec9d) main_usb_pane_t4_ParamLimits

0x3407,	// (0x0006ec9d) main_usb_pane_t4

0x3419,	// (0x0006ecaf) main_usb_pane_t5_ParamLimits

0x3419,	// (0x0006ecaf) main_usb_pane_t5

0x342b,	// (0x0006ecc1) main_usb_pane_t6_ParamLimits

0x342b,	// (0x0006ecc1) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007ae46) main_usb_pane_t_ParamLimits

0x2777,	// (0x0006e00d) aid_text_placing

0x2780,	// (0x0006e016) main_location2_pane_t1_ParamLimits

0x2792,	// (0x0006e028) main_location2_pane_t2_ParamLimits

0x27a4,	// (0x0006e03a) main_location2_pane_t3_ParamLimits

0x27b6,	// (0x0006e04c) main_location2_pane_t4_ParamLimits

0x27b6,	// (0x0006e04c) main_location2_pane_t4

0xf3cf,	// (0x0007ac65) main_location2_pane_t_ParamLimits

0xa29f,	// (0x00075b35) find_pinb_pane_g2_ParamLimits

0xa29f,	// (0x00075b35) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007a9b5) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007a9b5) find_pinb_pane_g

0xa2ab,	// (0x00075b41) find_pinb_pane_t1_ParamLimits

0xa2bd,	// (0x00075b53) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007a9ba) find_pinb_pane_t_ParamLimits

0xa008,	// (0x0007589e) main_call3_pane

0x1d96,	// (0x0006d62c) cale_month_day_heading_pane_t1_ParamLimits

0x1e1c,	// (0x0006d6b2) cale_month_day_heading_pane_t2_ParamLimits

0x1ead,	// (0x0006d743) cale_month_day_heading_pane_t3_ParamLimits

0x1f3e,	// (0x0006d7d4) cale_month_day_heading_pane_t4_ParamLimits

0x1fd3,	// (0x0006d869) cale_month_day_heading_pane_t5_ParamLimits

0x2074,	// (0x0006d90a) cale_month_day_heading_pane_t6_ParamLimits

0x2115,	// (0x0006d9ab) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007ab3c) cale_month_day_heading_pane_t_ParamLimits

0xad30,	// (0x000765c6) smil_status_volume_pane

0x2eb6,	// (0x0006e74c) postcard_address_pane_ParamLimits

0x2eb6,	// (0x0006e74c) postcard_address_pane

0x2ec8,	// (0x0006e75e) postcard_message_pane_ParamLimits

0x2ec8,	// (0x0006e75e) postcard_message_pane

0x3399,	// (0x0006ec2f) call2_cli_visual_pane_t1_ParamLimits

0x3399,	// (0x0006ec2f) call2_cli_visual_pane_t1

0x3bcb,	// (0x0006f461) postcard_message_pane_t1_ParamLimits

0x3bcb,	// (0x0006f461) postcard_message_pane_t1

0x3bb4,	// (0x0006f44a) postcard_address_pane_t1_ParamLimits

0x3bb4,	// (0x0006f44a) postcard_address_pane_t1

0x3ba0,	// (0x0006f436) popup_call3_audio_in_window_ParamLimits

0x3ba0,	// (0x0006f436) popup_call3_audio_in_window

0x3a2b,	// (0x0006f2c1) bg_popup_call3_in_pane_ParamLimits

0x3a2b,	// (0x0006f2c1) bg_popup_call3_in_pane

0x3aa1,	// (0x0006f337) popup_call3_audio_in_window_g1_ParamLimits

0x3aa1,	// (0x0006f337) popup_call3_audio_in_window_g1

0x3ac1,	// (0x0006f357) popup_call3_audio_in_window_g2_ParamLimits

0x3ac1,	// (0x0006f357) popup_call3_audio_in_window_g2

0x3ae1,	// (0x0006f377) popup_call3_audio_in_window_g3_ParamLimits

0x3ae1,	// (0x0006f377) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007aea8) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007aea8) popup_call3_audio_in_window_g

0x3b12,	// (0x0006f3a8) popup_call3_audio_in_window_t1_ParamLimits

0x3b12,	// (0x0006f3a8) popup_call3_audio_in_window_t1

0x3b50,	// (0x0006f3e6) popup_call3_audio_in_window_t2_ParamLimits

0x3b50,	// (0x0006f3e6) popup_call3_audio_in_window_t2

0x3b8e,	// (0x0006f424) popup_call3_audio_in_window_t3_ParamLimits

0x3b8e,	// (0x0006f424) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007aeb1) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007aeb1) popup_call3_audio_in_window_t

0xa4ed,	// (0x00075d83) bg_popup_call3_rect_pane

0xc641,	// (0x00077ed7) bg_popup_call3_rect_pane_g1

0xa409,	// (0x00075c9f) bg_popup_call3_rect_pane_g2

0xc649,	// (0x00077edf) bg_popup_call3_rect_pane_g3

0xc651,	// (0x00077ee7) bg_popup_call3_rect_pane_g4

0xc659,	// (0x00077eef) bg_popup_call3_rect_pane_g5

0xc661,	// (0x00077ef7) bg_popup_call3_rect_pane_g6

0xc669,	// (0x00077eff) bg_popup_call3_rect_pane_g7

0x2ab8,	// (0x0006e34e) mup_visualizer_osc_pane

0xb4ff,	// (0x00076d95) mup_visualizer_spec_pane

0x3a5b,	// (0x0006f2f1) call3_video_qcif_pane_ParamLimits

0x3a5b,	// (0x0006f2f1) call3_video_qcif_pane

0x3a6e,	// (0x0006f304) call3_video_qcif_uncrop_pane_ParamLimits

0x3a6e,	// (0x0006f304) call3_video_qcif_uncrop_pane

0x3a7c,	// (0x0006f312) call3_video_subqcif_pane_ParamLimits

0x3a7c,	// (0x0006f312) call3_video_subqcif_pane

0x3a90,	// (0x0006f326) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a90,	// (0x0006f326) call3_video_subqcif_uncrop_pane

0x3b01,	// (0x0006f397) popup_call3_audio_in_window_g4_ParamLimits

0x3b01,	// (0x0006f397) popup_call3_audio_in_window_g4

0x3a1a,	// (0x0006f2b0) mup_spec_half_pane

0x3a23,	// (0x0006f2b9) mup_spec_half_pane_cp

0xc8a6,	// (0x0007813c) mup_osc_middle_pane

0xc8af,	// (0x00078145) mup_visualizer_osc_pane_g1

0x39fa,	// (0x0006f290) mup_spec_bar_pane_ParamLimits

0x39fa,	// (0x0006f290) mup_spec_bar_pane

0xc893,	// (0x00078129) mup_spec_bar_pane_g1

0xc89d,	// (0x00078133) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ae9c) mup_spec_bar_pane_g

0x096b,	// (0x0006c201) aid_cale_week_size_cell_pane_ParamLimits

0x0985,	// (0x0006c21b) bg_cale_heading_pane_ParamLimits

0xa446,	// (0x00075cdc) bg_cale_pane_cp01_ParamLimits

0x099d,	// (0x0006c233) cale_week_corner_pane_ParamLimits

0x09bc,	// (0x0006c252) cale_week_day_heading_pane_ParamLimits

0x09d9,	// (0x0006c26f) cale_week_scroll_pane_g1_ParamLimits

0x09ec,	// (0x0006c282) cale_week_scroll_pane_g2_ParamLimits

0x0a04,	// (0x0006c29a) cale_week_scroll_pane_g3_ParamLimits

0x0a1c,	// (0x0006c2b2) cale_week_scroll_pane_g4_ParamLimits

0x0a34,	// (0x0006c2ca) cale_week_scroll_pane_g5_ParamLimits

0x0a54,	// (0x0006c2ea) cale_week_scroll_pane_g6_ParamLimits

0x0a74,	// (0x0006c30a) cale_week_scroll_pane_g7_ParamLimits

0x0a94,	// (0x0006c32a) cale_week_scroll_pane_g8_ParamLimits

0x0ab8,	// (0x0006c34e) cale_week_scroll_pane_g9_ParamLimits

0x0ad0,	// (0x0006c366) cale_week_scroll_pane_g10_ParamLimits

0x0ae8,	// (0x0006c37e) cale_week_scroll_pane_g11_ParamLimits

0x0b00,	// (0x0006c396) cale_week_scroll_pane_g12_ParamLimits

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g13_ParamLimits

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g14_ParamLimits

0x0b18,	// (0x0006c3ae) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007aa46) cale_week_scroll_pane_g_ParamLimits

0x0b54,	// (0x0006c3ea) cale_week_time_pane_ParamLimits

0x0b78,	// (0x0006c40e) grid_cale_week_pane_ParamLimits

0xa463,	// (0x00075cf9) listscroll_cale_week_pane_t1

0xa475,	// (0x00075d0b) scroll_pane_cp08_ParamLimits

0x192c,	// (0x0006d1c2) cale_month_corner_pane_ParamLimits

0xad06,	// (0x0007659c) cale_month_pane_t1

0x1d34,	// (0x0006d5ca) cale_month_week_pane_ParamLimits

0x25d3,	// (0x0006de69) popup_call_status_window_g1_ParamLimits

0x25e7,	// (0x0006de7d) popup_call_status_window_g2_ParamLimits

0x25fb,	// (0x0006de91) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007abec) popup_call_status_window_g_ParamLimits

0xb0b6,	// (0x0007694c) aid_call2_pane

0x2d20,	// (0x0006e5b6) msg_header_pane_g1

0x2eb6,	// (0x0006e74c) postcard_address2_pane_ParamLimits

0x2eb6,	// (0x0006e74c) postcard_address2_pane

0x2ec8,	// (0x0006e75e) postcard_message2_pane_ParamLimits

0x2ec8,	// (0x0006e75e) postcard_message2_pane

0x39ac,	// (0x0006f242) message2_row_pane_ParamLimits

0x39ac,	// (0x0006f242) message2_row_pane

0x39c8,	// (0x0006f25e) address2_row_pane_ParamLimits

0x39c8,	// (0x0006f25e) address2_row_pane

0xc861,	// (0x000780f7) postcard_message2_row_pane_g1

0xc869,	// (0x000780ff) postcard_message2_row_pane_t1

0xc861,	// (0x000780f7) address2_row_pane_g1

0xc869,	// (0x000780ff) address2_row_pane_t1

0x0f6b,	// (0x0006c801) aid_size_cell_vorec

0xa008,	// (0x0007589e) main_rss_pane

0x39db,	// (0x0006f271) rss_list_single_pane_ParamLimits

0x39db,	// (0x0006f271) rss_list_single_pane

0xc877,	// (0x0007810d) rss_list_single_pane_t1

0xc885,	// (0x0007811b) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007ae97) rss_list_single_pane_t

0xa008,	// (0x0007589e) main_camera2_pane

0xa008,	// (0x0007589e) main_video2_pane

0x3c44,	// (0x0006f4da) cams_zoom_pane_cp2_ParamLimits

0x3c44,	// (0x0006f4da) cams_zoom_pane_cp2

0x3c64,	// (0x0006f4fa) image2_vga_pane_ParamLimits

0x3c64,	// (0x0006f4fa) image2_vga_pane

0x3cb5,	// (0x0006f54b) main_camera2_pane_g1_ParamLimits

0x3cb5,	// (0x0006f54b) main_camera2_pane_g1

0x3cd5,	// (0x0006f56b) main_camera2_pane_g2_ParamLimits

0x3cd5,	// (0x0006f56b) main_camera2_pane_g2

0x3cf5,	// (0x0006f58b) main_camera2_pane_g3_ParamLimits

0x3cf5,	// (0x0006f58b) main_camera2_pane_g3

0x3d15,	// (0x0006f5ab) main_camera2_pane_g4_ParamLimits

0x3d15,	// (0x0006f5ab) main_camera2_pane_g4

0x3d35,	// (0x0006f5cb) main_camera2_pane_g5_ParamLimits

0x3d35,	// (0x0006f5cb) main_camera2_pane_g5

0x3d55,	// (0x0006f5eb) main_camera2_pane_g6_ParamLimits

0x3d55,	// (0x0006f5eb) main_camera2_pane_g6

0x3d75,	// (0x0006f60b) main_camera2_pane_g7_ParamLimits

0x3d75,	// (0x0006f60b) main_camera2_pane_g7

0x3d95,	// (0x0006f62b) main_camera2_pane_g8_ParamLimits

0x3d95,	// (0x0006f62b) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007aeb8) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007aeb8) main_camera2_pane_g

0x3dd5,	// (0x0006f66b) main_camera2_pane_t1_ParamLimits

0x3dd5,	// (0x0006f66b) main_camera2_pane_t1

0x3e0a,	// (0x0006f6a0) main_camera2_pane_t2_ParamLimits

0x3e0a,	// (0x0006f6a0) main_camera2_pane_t2

0x3e30,	// (0x0006f6c6) main_camera2_pane_t3_ParamLimits

0x3e30,	// (0x0006f6c6) main_camera2_pane_t3

0x3e8e,	// (0x0006f724) main_camera2_pane_t4_ParamLimits

0x3e8e,	// (0x0006f724) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007aecb) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007aecb) main_camera2_pane_t

0x3f20,	// (0x0006f7b6) cams_zoom_pane_cp4_ParamLimits

0x3f20,	// (0x0006f7b6) cams_zoom_pane_cp4

0x3f36,	// (0x0006f7cc) image2_cif_pane_ParamLimits

0x3f36,	// (0x0006f7cc) image2_cif_pane

0x3f61,	// (0x0006f7f7) image2_subqcif_pane_ParamLimits

0x3f61,	// (0x0006f7f7) image2_subqcif_pane

0x3f7b,	// (0x0006f811) main_video2_pane_g1_ParamLimits

0x3f7b,	// (0x0006f811) main_video2_pane_g1

0x3f95,	// (0x0006f82b) main_video2_pane_g2_ParamLimits

0x3f95,	// (0x0006f82b) main_video2_pane_g2

0x3fab,	// (0x0006f841) main_video2_pane_g3_ParamLimits

0x3fab,	// (0x0006f841) main_video2_pane_g3

0x3fc1,	// (0x0006f857) main_video2_pane_g4_ParamLimits

0x3fc1,	// (0x0006f857) main_video2_pane_g4

0x3fd7,	// (0x0006f86d) main_video2_pane_g5_ParamLimits

0x3fd7,	// (0x0006f86d) main_video2_pane_g5

0x3fed,	// (0x0006f883) main_video2_pane_g6_ParamLimits

0x3fed,	// (0x0006f883) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007aeda) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007aeda) main_video2_pane_g

0x4007,	// (0x0006f89d) main_video2_pane_t1_ParamLimits

0x4007,	// (0x0006f89d) main_video2_pane_t1

0x402b,	// (0x0006f8c1) main_video2_pane_t2_ParamLimits

0x402b,	// (0x0006f8c1) main_video2_pane_t2

0x4079,	// (0x0006f90f) main_video2_pane_t3_ParamLimits

0x4079,	// (0x0006f90f) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007aee7) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007aee7) main_video2_pane_t

0x34e6,	// (0x0006ed7c) call_muted_g2

0x0001,

0xf5f3,	// (0x0007ae89) call_muted_g

0xa008,	// (0x0007589e) main_mup2_pane

0x40bd,	// (0x0006f953) main_mup2_pane_g1_ParamLimits

0x40bd,	// (0x0006f953) main_mup2_pane_g1

0x40c9,	// (0x0006f95f) main_mup2_pane_g2_ParamLimits

0x40c9,	// (0x0006f95f) main_mup2_pane_g2

0x9a8a,	// (0x00075320) main_mup_pane_g13_cp1

0x9a92,	// (0x00075328) mup_volume_pane_cp1

0x40e5,	// (0x0006f97b) main_mup2_pane_g4_ParamLimits

0x40e5,	// (0x0006f97b) main_mup2_pane_g4

0x40f7,	// (0x0006f98d) main_mup2_pane_g5_ParamLimits

0x40f7,	// (0x0006f98d) main_mup2_pane_g5

0x4109,	// (0x0006f99f) main_mup2_pane_g6_ParamLimits

0x4109,	// (0x0006f99f) main_mup2_pane_g6

0x411b,	// (0x0006f9b1) main_mup2_pane_g7_ParamLimits

0x411b,	// (0x0006f9b1) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007aeee) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007aeee) main_mup2_pane_g

0x4133,	// (0x0006f9c9) main_mup2_pane_t1_ParamLimits

0x4133,	// (0x0006f9c9) main_mup2_pane_t1

0x4149,	// (0x0006f9df) main_mup2_pane_t2_ParamLimits

0x4149,	// (0x0006f9df) main_mup2_pane_t2

0x415f,	// (0x0006f9f5) main_mup2_pane_t3_ParamLimits

0x415f,	// (0x0006f9f5) main_mup2_pane_t3

0x4175,	// (0x0006fa0b) main_mup2_pane_t4_ParamLimits

0x4175,	// (0x0006fa0b) main_mup2_pane_t4

0x418d,	// (0x0006fa23) main_mup2_pane_t5_ParamLimits

0x418d,	// (0x0006fa23) main_mup2_pane_t5

0x41a5,	// (0x0006fa3b) main_mup2_pane_t6_ParamLimits

0x41a5,	// (0x0006fa3b) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007aefd) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007aefd) main_mup2_pane_t

0x41d5,	// (0x0006fa6b) mup2_visualizer_pane_ParamLimits

0x41d5,	// (0x0006fa6b) mup2_visualizer_pane

0x4203,	// (0x0006fa99) mup_progress_pane_cp_ParamLimits

0x4203,	// (0x0006fa99) mup_progress_pane_cp

0x9a75,	// (0x0007530b) mup_volume_pane_cp_ParamLimits

0x9a75,	// (0x0007530b) mup_volume_pane_cp

0x4217,	// (0x0006faad) mup2_visualizer_pane_g1_ParamLimits

0x4217,	// (0x0006faad) mup2_visualizer_pane_g1

0xc8e6,	// (0x0007817c) mup2_visualizer_pane_g2_ParamLimits

0xc8e6,	// (0x0007817c) mup2_visualizer_pane_g2

0x422e,	// (0x0006fac4) mup2_visualizer_pane_g3_ParamLimits

0x422e,	// (0x0006fac4) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007af0a) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007af0a) mup2_visualizer_pane_g

0xb726,	// (0x00076fbc) aid_size_cell_fmradio

0x3698,	// (0x0006ef2e) aid_height_parent_landcape

0xab64,	// (0x000763fa) wml_content_pane_cp

0xab6c,	// (0x00076402) wml_tabs_pane

0xab75,	// (0x0007640b) popup_wml_miniature_window

0xab7d,	// (0x00076413) scroll_pane_cp021

0xab91,	// (0x00076427) wml_content_pane_comp8

0xa008,	// (0x0007589e) bg_popup_sub_pane_cp05

0xc904,	// (0x0007819a) popup_wml_miniature_window_g1

0xc90c,	// (0x000781a2) wml_miniature_view_pane

0x423a,	// (0x0006fad0) aid_size_wml_view

0x4242,	// (0x0006fad8) wml_miniature_view_pane_g1

0x424b,	// (0x0006fae1) wml_miniature_view_pane_g2

0x4254,	// (0x0006faea) wml_miniature_view_pane_g3

0x425c,	// (0x0006faf2) wml_miniature_view_pane_g4

0x4264,	// (0x0006fafa) wml_miniature_view_pane_g5

0x426c,	// (0x0006fb02) wml_miniature_view_pane_g6

0x4274,	// (0x0006fb0a) wml_miniature_view_pane_g7

0x427c,	// (0x0006fb12) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007af11) wml_miniature_view_pane_g

0xc914,	// (0x000781aa) background_graphic_ParamLimits

0xc914,	// (0x000781aa) background_graphic

0xc920,	// (0x000781b6) wml_tabs_2_pane

0xc929,	// (0x000781bf) wml_tabs_3_pane_ParamLimits

0xc929,	// (0x000781bf) wml_tabs_3_pane

0xc93b,	// (0x000781d1) wml_tabs_4_pane_ParamLimits

0xc93b,	// (0x000781d1) wml_tabs_4_pane

0xc951,	// (0x000781e7) wml_tabs_5_pane_ParamLimits

0xc951,	// (0x000781e7) wml_tabs_5_pane

0xc96b,	// (0x00078201) wml_tabs_pane_g2_ParamLimits

0xc96b,	// (0x00078201) wml_tabs_pane_g2

0xc97f,	// (0x00078215) wml_tabs_pane_g3_ParamLimits

0xc97f,	// (0x00078215) wml_tabs_pane_g3

0x4284,	// (0x0006fb1a) wml_tabs_2_active_pane_ParamLimits

0x4284,	// (0x0006fb1a) wml_tabs_2_active_pane

0x4298,	// (0x0006fb2e) wml_tabs_2_passive_pane_ParamLimits

0x4298,	// (0x0006fb2e) wml_tabs_2_passive_pane

0x42ac,	// (0x0006fb42) wml_tabs_3_active_pane_cp_ParamLimits

0x42ac,	// (0x0006fb42) wml_tabs_3_active_pane_cp

0x42c1,	// (0x0006fb57) wml_tabs_3_passive_pane_ParamLimits

0x42c1,	// (0x0006fb57) wml_tabs_3_passive_pane

0x42d4,	// (0x0006fb6a) wml_tabs_3_passive_pane_cp_ParamLimits

0x42d4,	// (0x0006fb6a) wml_tabs_3_passive_pane_cp

0x42eb,	// (0x0006fb81) tabs_4_active_pane

0x42f3,	// (0x0006fb89) tabs_4_passive_pane

0x42fd,	// (0x0006fb93) tabs_4_passive_pane_cp

0x4305,	// (0x0006fb9b) tabs_4_passive_pane_cp2

0x33b3,	// (0x0006ec49) aid_height_text

0x2a8e,	// (0x0006e324) mup_volume_cont_pane_ParamLimits

0x2a8e,	// (0x0006e324) mup_volume_cont_pane

0x0549,	// (0x0006bddf) aid_size_cell_pinb

0x0553,	// (0x0006bde9) aid_size_list_pinb

0x41ef,	// (0x0006fa85) mup2_volume_cont_pane_ParamLimits

0x41ef,	// (0x0006fa85) mup2_volume_cont_pane

0x9a61,	// (0x000752f7) mup2_volume_cont_pane_g1_ParamLimits

0x9a61,	// (0x000752f7) mup2_volume_cont_pane_g1

0x020c,	// (0x0006baa2) aid_size_cell_touch_ParamLimits

0x020c,	// (0x0006baa2) aid_size_cell_touch

0x0439,	// (0x0006bccf) touch_pane_ParamLimits

0x0439,	// (0x0006bccf) touch_pane

0x94d8,	// (0x00074d6e) main_rss2_pane

0xc99c,	// (0x00078232) listscroll_rss2_pane

0xc9a5,	// (0x0007823b) rss2_navigation_pane

0xc9ad,	// (0x00078243) list_rss2_pane

0xb1f9,	// (0x00076a8f) scroll_pane_cp22

0xc9b5,	// (0x0007824b) rss2_navigation_pane_g1

0xc9be,	// (0x00078254) rss2_navigation_pane_g2

0xc9c6,	// (0x0007825c) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007af22) rss2_navigation_pane_g

0xc9ce,	// (0x00078264) rss2_navigation_pane_t1

0x430f,	// (0x0006fba5) rss2_list_single_pane_ParamLimits

0x430f,	// (0x0006fba5) rss2_list_single_pane

0xc9dc,	// (0x00078272) rss2_list_single_pane_t2

0xc9ea,	// (0x00078280) rss2_list_single_pane_t3_ParamLimits

0xc9ea,	// (0x00078280) rss2_list_single_pane_t3

0xca07,	// (0x0007829d) rss2_list_single_pane_t4

0x23dd,	// (0x0006dc73) smil_status_pane_g1

0x94ca,	// (0x00074d60) main_image2_pane_ParamLimits

0x94ca,	// (0x00074d60) main_image2_pane

0x3db5,	// (0x0006f64b) main_camera2_pane_g9_ParamLimits

0x3db5,	// (0x0006f64b) main_camera2_pane_g9

0x3ee3,	// (0x0006f779) main_camera2_pane_t5_ParamLimits

0x3ee3,	// (0x0006f779) main_camera2_pane_t5

0x9a31,	// (0x000752c7) main_camera2_pane_t6_ParamLimits

0x9a31,	// (0x000752c7) main_camera2_pane_t6

0x4324,	// (0x0006fbba) main_image2_pane_g1_ParamLimits

0x4324,	// (0x0006fbba) main_image2_pane_g1

0x30ef,	// (0x0006e985) smil2_video_pane_ParamLimits

0x30ef,	// (0x0006e985) smil2_video_pane

0x9480,	// (0x00074d16) aid_zoom_text_primary_cp

0x94c0,	// (0x00074d56) popup_preview_fixed_window

0xaacd,	// (0x00076363) im_reading_pane_g1

0x3c2c,	// (0x0006f4c2) cams2_bc_adjust_pane_cp_ParamLimits

0x3c2c,	// (0x0006f4c2) cams2_bc_adjust_pane_cp

0x3f12,	// (0x0006f7a8) cams2_bc_adjust_pane_ParamLimits

0x3f12,	// (0x0006f7a8) cams2_bc_adjust_pane

0xd57a,	// (0x00078e10) cams2_bc_adjust_pane_g1

0x9a9a,	// (0x00075330) cams2_slider_pane

0x9aa3,	// (0x00075339) cams2_slider_pane_g1

0x9aac,	// (0x00075342) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007af29) cams2_slider_pane_g

0x0641,	// (0x0006bed7) calc_display_pane_ParamLimits

0x0669,	// (0x0006beff) calc_paper_pane_ParamLimits

0x068c,	// (0x0006bf22) grid_calc_pane_ParamLimits

0x9956,	// (0x000751ec) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x00076f59) main_image_pane_t1

0x0623,	// (0x0006beb9) aid_size_cell_calc_ParamLimits

0x0623,	// (0x0006beb9) aid_size_cell_calc

0x36f0,	// (0x0006ef86) popup_blid_sat_info2_window_ParamLimits

0x36f0,	// (0x0006ef86) popup_blid_sat_info2_window

0xca1d,	// (0x000782b3) aid_size_cell_blid

0xca25,	// (0x000782bb) bg_popup_window_pane_cp07

0xca48,	// (0x000782de) grid_popup_blid_pane

0xca52,	// (0x000782e8) heading_pane_cp05_ParamLimits

0xca52,	// (0x000782e8) heading_pane_cp05

0xcb28,	// (0x000783be) cell_popup_blid_pane_ParamLimits

0xcb28,	// (0x000783be) cell_popup_blid_pane

0xcb4c,	// (0x000783e2) cell_popup_blid_pane_g1

0xcb54,	// (0x000783ea) cell_popup_blid_pane_t1

0x41bf,	// (0x0006fa55) mup2_indicator_pane_ParamLimits

0x41bf,	// (0x0006fa55) mup2_indicator_pane

0xa4ed,	// (0x00075d83) mup2_visualizer_osc_pane

0xc8f2,	// (0x00078188) mup2_visualizer_spec_pane_ParamLimits

0xc8f2,	// (0x00078188) mup2_visualizer_spec_pane

0x433a,	// (0x0006fbd0) mup2_spec_half_pane

0x4343,	// (0x0006fbd9) mup2_spec_half_pane_cp

0x434b,	// (0x0006fbe1) mup2_spec_bar_pane_ParamLimits

0x434b,	// (0x0006fbe1) mup2_spec_bar_pane

0xc893,	// (0x00078129) mup2_spec_bar_pane_g1

0xc89d,	// (0x00078133) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007ae9c) mup2_spec_bar_pane_g

0x436b,	// (0x0006fc01) mup2_osc_middle_pane

0xc8af,	// (0x00078145) mup2_visualizer_osc_pane_g1

0x9502,	// (0x00074d98) popup_number_entry_window_t1_ParamLimits

0x9515,	// (0x00074dab) popup_number_entry_window_t2_ParamLimits

0x9527,	// (0x00074dbd) popup_number_entry_window_t3_ParamLimits

0x048b,	// (0x0006bd21) popup_number_entry_window_t5_ParamLimits

0x048b,	// (0x0006bd21) popup_number_entry_window_t5

0xf0ca,	// (0x0007a960) popup_number_entry_window_t_ParamLimits

0x9539,	// (0x00074dcf) text_title_cp2_ParamLimits

0x9995,	// (0x0007522b) aid_hotspot_pointer_text2_pane

0x99af,	// (0x00075245) main_viewer_pane_g9_ParamLimits

0x99af,	// (0x00075245) main_viewer_pane_g9

0xad06,	// (0x0007659c) cale_month_pane_t1_ParamLimits

0xad43,	// (0x000765d9) bg_cale_pane_ParamLimits

0xad5b,	// (0x000765f1) list_cale_pane_ParamLimits

0xad6c,	// (0x00076602) listscroll_cale_day_pane_t1

0xad7e,	// (0x00076614) scroll_pane_cp09_ParamLimits

0x2ac0,	// (0x0006e356) main_mup_eq_pane_t1_ParamLimits

0x2ac0,	// (0x0006e356) main_mup_eq_pane_t1

0x2ada,	// (0x0006e370) main_mup_eq_pane_t2_ParamLimits

0x2ada,	// (0x0006e370) main_mup_eq_pane_t2

0x2af4,	// (0x0006e38a) main_mup_eq_pane_t3_ParamLimits

0x2af4,	// (0x0006e38a) main_mup_eq_pane_t3

0x2b10,	// (0x0006e3a6) main_mup_eq_pane_t4_ParamLimits

0x2b10,	// (0x0006e3a6) main_mup_eq_pane_t4

0x2b2c,	// (0x0006e3c2) main_mup_eq_pane_t5_ParamLimits

0x2b2c,	// (0x0006e3c2) main_mup_eq_pane_t5

0x2b48,	// (0x0006e3de) main_mup_eq_pane_t6_ParamLimits

0x2b48,	// (0x0006e3de) main_mup_eq_pane_t6

0x2b5c,	// (0x0006e3f2) main_mup_eq_pane_t7_ParamLimits

0x2b5c,	// (0x0006e3f2) main_mup_eq_pane_t7

0x2b70,	// (0x0006e406) main_mup_eq_pane_t8_ParamLimits

0x2b70,	// (0x0006e406) main_mup_eq_pane_t8

0x2b84,	// (0x0006e41a) main_mup_eq_pane_t9_ParamLimits

0x2b84,	// (0x0006e41a) main_mup_eq_pane_t9

0x2b9e,	// (0x0006e434) main_mup_eq_pane_t10_ParamLimits

0x2b9e,	// (0x0006e434) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007aceb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007aceb) main_mup_eq_pane_t

0x2c4d,	// (0x0006e4e3) mup_equalizer_pane_cp5_ParamLimits

0x2c61,	// (0x0006e4f7) mup_equalizer_pane_cp6_ParamLimits

0x2c75,	// (0x0006e50b) mup_equalizer_pane_cp7_ParamLimits

0x94d8,	// (0x00074d6e) main_gallery_pane

0xc8b8,	// (0x0007814e) smil2_volume_pane

0xc8c0,	// (0x00078156) smil_status_volume_pane_g1_ParamLimits

0xc8d3,	// (0x00078169) smil_status_volume_pane_g2_ParamLimits

0x9a0f,	// (0x000752a5) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007aea1) smil_status_volume_pane_g_ParamLimits

0xca25,	// (0x000782bb) bg_popup_window_pane_cp07_ParamLimits

0xca33,	// (0x000782c9) blid_firmament_pane

0x4374,	// (0x0006fc0a) aid_size_cell_gallery_ParamLimits

0x4374,	// (0x0006fc0a) aid_size_cell_gallery

0x438a,	// (0x0006fc20) grid_gallery_pane_ParamLimits

0x438a,	// (0x0006fc20) grid_gallery_pane

0x43a3,	// (0x0006fc39) cell_gallery_pane_ParamLimits

0x43a3,	// (0x0006fc39) cell_gallery_pane

0xcb62,	// (0x000783f8) bg_cell_gallery_focus_pane_ParamLimits

0xcb62,	// (0x000783f8) bg_cell_gallery_focus_pane

0xcb74,	// (0x0007840a) cell_gallery_pane_g1_ParamLimits

0xcb74,	// (0x0007840a) cell_gallery_pane_g1

0x43ec,	// (0x0006fc82) cell_gallery_pane_g2_ParamLimits

0x43ec,	// (0x0006fc82) cell_gallery_pane_g2

0x43f9,	// (0x0006fc8f) cell_gallery_pane_g3_ParamLimits

0x43f9,	// (0x0006fc8f) cell_gallery_pane_g3

0xcb80,	// (0x00078416) cell_gallery_pane_g4_ParamLimits

0xcb80,	// (0x00078416) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007af4f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007af4f) cell_gallery_pane_g

0xcb8c,	// (0x00078422) bg_cell_gallery_focus_pane_g1

0xcb94,	// (0x0007842a) bg_cell_gallery_focus_pane_g2

0xcb9c,	// (0x00078432) bg_cell_gallery_focus_pane_g3

0xcba4,	// (0x0007843a) bg_cell_gallery_focus_pane_g4

0xcbac,	// (0x00078442) bg_cell_gallery_focus_pane_g5

0xcbb4,	// (0x0007844a) bg_cell_gallery_focus_pane_g6

0xcbbc,	// (0x00078452) bg_cell_gallery_focus_pane_g7

0xcbc4,	// (0x0007845a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007af58) bg_cell_gallery_focus_pane_g

0xcbcc,	// (0x00078462) aid_firma_cardinal

0xcbe0,	// (0x00078476) blid_firmament_pane_t1

0xcbf7,	// (0x0007848d) blid_firmament_pane_t2

0xcc0e,	// (0x000784a4) blid_firmament_pane_t3

0xcc25,	// (0x000784bb) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007af69) blid_firmament_pane_t

0xcc3c,	// (0x000784d2) blid_sat_info_pane

0xcc4c,	// (0x000784e2) blid_sat_info_pane_g1

0xcc4c,	// (0x000784e2) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007af72) blid_sat_info_pane_g

0xcc56,	// (0x000784ec) blid_sat_info_pane_t1

0xcc64,	// (0x000784fa) smil2_volume_content_pane

0xcc6d,	// (0x00078503) smil2_volume_pane_g1

0xcc75,	// (0x0007850b) smil2_volume_content_pane_g1

0xcc7e,	// (0x00078514) smil2_volume_content_pane_g2

0xcc87,	// (0x0007851d) smil2_volume_content_pane_g3

0xcc90,	// (0x00078526) smil2_volume_content_pane_g4

0xcc99,	// (0x0007852f) smil2_volume_content_pane_g5

0xcca2,	// (0x00078538) smil2_volume_content_pane_g6

0xccab,	// (0x00078541) smil2_volume_content_pane_g7

0xccb4,	// (0x0007854a) smil2_volume_content_pane_g8

0xccbd,	// (0x00078553) smil2_volume_content_pane_g9

0xccc6,	// (0x0007855c) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007af77) smil2_volume_content_pane_g

0x0c2c,	// (0x0006c4c2) cale_week_day_heading_pane_t1_ParamLimits

0x0c71,	// (0x0006c507) cale_week_day_heading_pane_t2_ParamLimits

0x0cbb,	// (0x0006c551) cale_week_day_heading_pane_t3_ParamLimits

0x0d05,	// (0x0006c59b) cale_week_day_heading_pane_t4_ParamLimits

0x0d4f,	// (0x0006c5e5) cale_week_day_heading_pane_t5_ParamLimits

0x0da1,	// (0x0006c637) cale_week_day_heading_pane_t6_ParamLimits

0x0df3,	// (0x0006c689) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007aa67) cale_week_day_heading_pane_t_ParamLimits

0xa492,	// (0x00075d28) bg_cale_side_pane_ParamLimits

0x0e38,	// (0x0006c6ce) cale_week_time_pane_t1_ParamLimits

0x0e52,	// (0x0006c6e8) cale_week_time_pane_t2_ParamLimits

0x0e6c,	// (0x0006c702) cale_week_time_pane_t3_ParamLimits

0x0e86,	// (0x0006c71c) cale_week_time_pane_t4_ParamLimits

0x0ea0,	// (0x0006c736) cale_week_time_pane_t5_ParamLimits

0x0eba,	// (0x0006c750) cale_week_time_pane_t6_ParamLimits

0x0ed4,	// (0x0006c76a) cale_week_time_pane_t7_ParamLimits

0x0eee,	// (0x0006c784) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007aa76) cale_week_time_pane_t_ParamLimits

0x0f0e,	// (0x0006c7a4) cell_cale_week_pane_g2_ParamLimits

0xa492,	// (0x00075d28) bg_cale_side_pane_cp01_ParamLimits

0x21be,	// (0x0006da54) cale_month_week_pane_t1_ParamLimits

0x21d7,	// (0x0006da6d) cale_month_week_pane_t2_ParamLimits

0x21f0,	// (0x0006da86) cale_month_week_pane_t3_ParamLimits

0x2209,	// (0x0006da9f) cale_month_week_pane_t4_ParamLimits

0x2222,	// (0x0006dab8) cale_month_week_pane_t5_ParamLimits

0x223b,	// (0x0006dad1) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007ab4b) cale_month_week_pane_t_ParamLimits

0x98d2,	// (0x00075168) cell_cale_month_pane_g1_ParamLimits

0x94d8,	// (0x00074d6e) main_cale_event_viewer_pane

0x9452,	// (0x00074ce8) listscroll_cale_event_viewer_pane

0xcccf,	// (0x00078565) list_cale_ev_pane

0xccd7,	// (0x0007856d) scroll_pane_cp023

0xcce3,	// (0x00078579) field_cale_ev_pane_ParamLimits

0xcce3,	// (0x00078579) field_cale_ev_pane

0xcd01,	// (0x00078597) field_cale_ev_content_pane_ParamLimits

0xcd01,	// (0x00078597) field_cale_ev_content_pane

0xcd0d,	// (0x000785a3) field_cale_ev_pane_g1_ParamLimits

0xcd0d,	// (0x000785a3) field_cale_ev_pane_g1

0xcd19,	// (0x000785af) field_cale_ev_pane_g2_ParamLimits

0xcd19,	// (0x000785af) field_cale_ev_pane_g2

0xcd31,	// (0x000785c7) field_cale_ev_pane_g3_ParamLimits

0xcd31,	// (0x000785c7) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007af8c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007af8c) field_cale_ev_pane_g

0xcd49,	// (0x000785df) field_cale_ev_pane_t1_ParamLimits

0xcd49,	// (0x000785df) field_cale_ev_pane_t1

0xcd60,	// (0x000785f6) field_cale_ev_content_pane_t1_ParamLimits

0xcd60,	// (0x000785f6) field_cale_ev_content_pane_t1

0xb5a9,	// (0x00076e3f) bg_button_pane_cp01

0x0959,	// (0x0006c1ef) listscroll_cale_week_pane_ParamLimits

0xa43d,	// (0x00075cd3) popup_toolbar_window_cp01

0xa463,	// (0x00075cf9) listscroll_cale_week_pane_t1_ParamLimits

0x0959,	// (0x0006c1ef) listscroll_cale_day_pane_ParamLimits

0xa43d,	// (0x00075cd3) popup_toolbar_window_cp02

0xad6c,	// (0x00076602) listscroll_cale_day_pane_t1_ParamLimits

0x36b6,	// (0x0006ef4c) main_cale_month_pane_ParamLimits

0x99fa,	// (0x00075290) popup_toolbar_window_cp03_ParamLimits

0x99fa,	// (0x00075290) popup_toolbar_window_cp03

0x2fb7,	// (0x0006e84d) main_image_pane_g2_ParamLimits

0x2fb7,	// (0x0006e84d) main_image_pane_g2

0x2fc8,	// (0x0006e85e) main_image_pane_g3_ParamLimits

0x2fc8,	// (0x0006e85e) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007ad7d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007ad7d) main_image_pane_g

0xb6c3,	// (0x00076f59) main_image_pane_t1_ParamLimits

0x2fd9,	// (0x0006e86f) main_image_pane_t2_ParamLimits

0x2fd9,	// (0x0006e86f) main_image_pane_t2

0x2feb,	// (0x0006e881) main_image_pane_t3_ParamLimits

0x2feb,	// (0x0006e881) main_image_pane_t3

0x3013,	// (0x0006e8a9) main_image_pane_t4_ParamLimits

0x3013,	// (0x0006e8a9) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007ad84) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007ad84) main_image_pane_t

0x3033,	// (0x0006e8c9) popup_image_details_window_cp01

0x303d,	// (0x0006e8d3) popup_toobar_trans_pane_cp01_ParamLimits

0x303d,	// (0x0006e8d3) popup_toobar_trans_pane_cp01

0x37cf,	// (0x0006f065) popup_image_details_window_ParamLimits

0x37cf,	// (0x0006f065) popup_image_details_window

0x99cd,	// (0x00075263) popup_image_focus_window

0x3be6,	// (0x0006f47c) camera2_autofocus_pane_ParamLimits

0x3be6,	// (0x0006f47c) camera2_autofocus_pane

0x9452,	// (0x00074ce8) bg_popup_sub_pane_cp06

0xcd7e,	// (0x00078614) popup_image_focus_window_g1

0xcd86,	// (0x0007861c) popup_image_focus_window_g2

0xcd8e,	// (0x00078624) popup_image_focus_window_g3

0xcd96,	// (0x0007862c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007af93) popup_image_focus_window_g

0xcd9e,	// (0x00078634) popup_image_focus_window_t1

0xcdac,	// (0x00078642) popup_image_focus_window_t2

0xcdbc,	// (0x00078652) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007af9c) popup_image_focus_window_t

0xcdca,	// (0x00078660) camera2_autofocus_pane_g1

0xa574,	// (0x00075e0a) bg_tb_trans_pane_cp01

0xcdd8,	// (0x0007866e) popup_image_details_window_g1

0xcdeb,	// (0x00078681) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007afae) popup_image_details_window_g

0xce14,	// (0x000786aa) popup_image_details_window_t1

0xce26,	// (0x000786bc) popup_image_details_window_t2

0xce3f,	// (0x000786d5) popup_image_details_window_t3

0xce53,	// (0x000786e9) popup_image_details_window_t4

0xce6e,	// (0x00078704) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007afb5) popup_image_details_window_t

0xa314,	// (0x00075baa) bg_calc_paper_pane_ParamLimits

0x94d8,	// (0x00074d6e) grid_highlight_pane_cp013

0x9842,	// (0x000750d8) list_calc_pane_ParamLimits

0x9854,	// (0x000750ea) scroll_pane_cp024

0xa328,	// (0x00075bbe) bg_calc_display_pane_ParamLimits

0x078a,	// (0x0006c020) calc_display_pane_t1_ParamLimits

0x079c,	// (0x0006c032) calc_display_pane_t2_ParamLimits

0x985c,	// (0x000750f2) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007a9e7) calc_display_pane_t_ParamLimits

0x0856,	// (0x0006c0ec) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007aa04) cell_calc_pane_g

0x085f,	// (0x0006c0f5) cell_calc_pane_t1

0xa387,	// (0x00075c1d) grid_highlight_pane_cp02_ParamLimits

0xa39d,	// (0x00075c33) toolbar_button_pane_cp01_ParamLimits

0xa39d,	// (0x00075c33) toolbar_button_pane_cp01

0xb708,	// (0x00076f9e) temp_image_control_pane_ParamLimits

0xb708,	// (0x00076f9e) temp_image_control_pane

0x94ca,	// (0x00074d60) main_mp3_pane

0xce88,	// (0x0007871e) temp_image_control_pane_g1_ParamLimits

0xce88,	// (0x0007871e) temp_image_control_pane_g1

0xce96,	// (0x0007872c) temp_image_control_pane_g2_ParamLimits

0xce96,	// (0x0007872c) temp_image_control_pane_g2

0xcea8,	// (0x0007873e) temp_image_control_pane_g3_ParamLimits

0xcea8,	// (0x0007873e) temp_image_control_pane_g3

0x4436,	// (0x0006fccc) temp_image_control_pane_g4_ParamLimits

0x4436,	// (0x0006fccc) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007afc0) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007afc0) temp_image_control_pane_g

0xce88,	// (0x0007871e) main_mp3_pane_g1

0x4449,	// (0x0006fcdf) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007afc9) main_mp3_pane_g

0xceeb,	// (0x00078781) main_mp3_pane_t1

0xa4f5,	// (0x00075d8b) main_camera_pane_g8_ParamLimits

0xa4f5,	// (0x00075d8b) main_camera_pane_g8

0x1208,	// (0x0006ca9e) main_video_pane_g7_ParamLimits

0x1208,	// (0x0006ca9e) main_video_pane_g7

0x9a4f,	// (0x000752e5) main_camera2_pane_t7_ParamLimits

0x9a4f,	// (0x000752e5) main_camera2_pane_t7

0xab24,	// (0x000763ba) scroll_pane_cp025_ParamLimits

0xab24,	// (0x000763ba) scroll_pane_cp025

0xab38,	// (0x000763ce) scroll_pane_cp026_ParamLimits

0xab38,	// (0x000763ce) scroll_pane_cp026

0xab47,	// (0x000763dd) wml_content_pane_ParamLimits

0x94d8,	// (0x00074d6e) main_touch_calib_pane

0x451d,	// (0x0006fdb3) main_touch_calib_pane_g1

0x452f,	// (0x0006fdc5) main_touch_calib_pane_g2

0x4541,	// (0x0006fdd7) main_touch_calib_pane_g3

0x4553,	// (0x0006fde9) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007afe7) main_touch_calib_pane_g

0x4565,	// (0x0006fdfb) main_touch_calib_pane_t1

0x457f,	// (0x0006fe15) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007aff0) main_touch_calib_pane_t

0xb2d5,	// (0x00076b6b) mup_progress_pane_cp02

0xb30a,	// (0x00076ba0) navi_pane_g1

0xb3c5,	// (0x00076c5b) navi_pane_mp_t3

0x94ca,	// (0x00074d60) main_mp3_pane_ParamLimits

0x3954,	// (0x0006f1ea) navi_pane_ParamLimits

0xce88,	// (0x0007871e) main_mp3_pane_g1_ParamLimits

0x4449,	// (0x0006fcdf) main_mp3_pane_g2_ParamLimits

0x4457,	// (0x0006fced) main_mp3_pane_g3_ParamLimits

0x4457,	// (0x0006fced) main_mp3_pane_g3

0x4465,	// (0x0006fcfb) main_mp3_pane_g4_ParamLimits

0x4465,	// (0x0006fcfb) main_mp3_pane_g4

0xceb8,	// (0x0007874e) main_mp3_pane_g5_ParamLimits

0xceb8,	// (0x0007874e) main_mp3_pane_g5

0xcec6,	// (0x0007875c) main_mp3_pane_g6_ParamLimits

0xcec6,	// (0x0007875c) main_mp3_pane_g6

0xced3,	// (0x00078769) main_mp3_pane_g7_ParamLimits

0xced3,	// (0x00078769) main_mp3_pane_g7

0xcedf,	// (0x00078775) main_mp3_pane_g8_ParamLimits

0xcedf,	// (0x00078775) main_mp3_pane_g8

0xf733,	// (0x0007afc9) main_mp3_pane_g_ParamLimits

0x4471,	// (0x0006fd07) main_mp3_pane_t2

0x447f,	// (0x0006fd15) main_mp3_pane_t3

0xcef9,	// (0x0007878f) main_mp3_pane_t4

0xcf07,	// (0x0007879d) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007afda) main_mp3_pane_t

0xcf15,	// (0x000787ab) mup_progress_pane_cp01

0x9480,	// (0x00074d16) aid_zoom_text_secondary2

0xcccf,	// (0x00078565) list_cale_ev2_pane

0xccd7,	// (0x0007856d) scroll_pane_cp023_ParamLimits

0x45d5,	// (0x0006fe6b) field_cale_ev2_pane_ParamLimits

0x45d5,	// (0x0006fe6b) field_cale_ev2_pane

0xa582,	// (0x00075e18) field_cale_ev2_pane_g1_ParamLimits

0xa582,	// (0x00075e18) field_cale_ev2_pane_g1

0xa58e,	// (0x00075e24) field_cale_ev2_pane_g2_ParamLimits

0xa58e,	// (0x00075e24) field_cale_ev2_pane_g2

0xa5a6,	// (0x00075e3c) field_cale_ev2_pane_g3_ParamLimits

0xa5a6,	// (0x00075e3c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007affb) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007affb) field_cale_ev2_pane_g

0x45f5,	// (0x0006fe8b) field_cale_ev2_pane_t1_ParamLimits

0x45f5,	// (0x0006fe8b) field_cale_ev2_pane_t1

0x460c,	// (0x0006fea2) field_cale_ev2_pane_t2_ParamLimits

0x460c,	// (0x0006fea2) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007b004) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007b004) field_cale_ev2_pane_t

0x2e6c,	// (0x0006e702) main_postcard_pane_g5_ParamLimits

0x2e6c,	// (0x0006e702) main_postcard_pane_g5

0x2e82,	// (0x0006e718) main_postcard_pane_g6_ParamLimits

0x2e82,	// (0x0006e718) main_postcard_pane_g6

0x0fd4,	// (0x0006c86a) camera2_autofocus_pane_cp_ParamLimits

0x0fd4,	// (0x0006c86a) camera2_autofocus_pane_cp

0x94ca,	// (0x00074d60) main_mup3_pane

0x4621,	// (0x0006feb7) main_mup3_pane_g1_ParamLimits

0x4621,	// (0x0006feb7) main_mup3_pane_g1

0x4643,	// (0x0006fed9) main_mup3_pane_g2_ParamLimits

0x4643,	// (0x0006fed9) main_mup3_pane_g2

0x46c1,	// (0x0006ff57) main_mup3_pane_g3_ParamLimits

0x46c1,	// (0x0006ff57) main_mup3_pane_g3

0x4707,	// (0x0006ff9d) main_mup3_pane_g4_ParamLimits

0x4707,	// (0x0006ff9d) main_mup3_pane_g4

0x474d,	// (0x0006ffe3) main_mup3_pane_g5_ParamLimits

0x474d,	// (0x0006ffe3) main_mup3_pane_g5

0x4793,	// (0x00070029) main_mup3_pane_g6_ParamLimits

0x4793,	// (0x00070029) main_mup3_pane_g6

0xcf3d,	// (0x000787d3) main_mup3_pane_g7_ParamLimits

0xcf3d,	// (0x000787d3) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007b014) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007b014) main_mup3_pane_g

0x4811,	// (0x000700a7) main_mup3_pane_t1_ParamLimits

0x4811,	// (0x000700a7) main_mup3_pane_t1

0x4885,	// (0x0007011b) main_mup3_pane_t2_ParamLimits

0x4885,	// (0x0007011b) main_mup3_pane_t2

0x4959,	// (0x000701ef) main_mup3_pane_t4_ParamLimits

0x4959,	// (0x000701ef) main_mup3_pane_t4

0x49af,	// (0x00070245) main_mup3_pane_t5_ParamLimits

0x49af,	// (0x00070245) main_mup3_pane_t5

0x4a6b,	// (0x00070301) main_mup3_pane_t6_ParamLimits

0x4a6b,	// (0x00070301) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007b025) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007b025) main_mup3_pane_t

0x4b23,	// (0x000703b9) mup3_progress_pane_ParamLimits

0x4b23,	// (0x000703b9) mup3_progress_pane

0x4bb9,	// (0x0007044f) popup_mup3_control_window_ParamLimits

0x4bb9,	// (0x0007044f) popup_mup3_control_window

0xcf4b,	// (0x000787e1) popup_mup3_text_window

0x4beb,	// (0x00070481) mup3_progress_pane_t1

0x4c0a,	// (0x000704a0) mup3_progress_pane_t2

0xcf53,	// (0x000787e9) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007b032) mup3_progress_pane_t

0xcf70,	// (0x00078806) mup_progress_pane_cp03

0x9452,	// (0x00074ce8) bg_tb_trans_pane_cp04

0x4c29,	// (0x000704bf) mup3_volume_pane

0x4c31,	// (0x000704c7) popup_mup3_control_window_g1

0x4c3a,	// (0x000704d0) mup3_volume_pane_g1

0x4c43,	// (0x000704d9) mup3_volume_pane_g2

0x4c4c,	// (0x000704e2) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007b039) mup3_volume_pane_g

0x9452,	// (0x00074ce8) bg_tb_trans_pane_cp03

0xcf80,	// (0x00078816) popup_mup3_text_window_g1

0xcf88,	// (0x0007881e) popup_mup3_text_window_t1

0xa370,	// (0x00075c06) list_calc_item_pane_g1_ParamLimits

0xc993,	// (0x00078229) mup_volume_pane_cp_g1

0x4599,	// (0x0006fe2f) main_touch_calib_pane_t3

0x45ad,	// (0x0006fe43) main_touch_calib_pane_t4

0x45c1,	// (0x0006fe57) main_touch_calib_pane_t5

0x945c,	// (0x00074cf2) aid_cell_size_toolbar2

0x9464,	// (0x00074cfa) aid_popup3_width_pane

0x9470,	// (0x00074d06) aid_zoom_text_msg_primary

0x0fb3,	// (0x0006c849) vorec_t7

0xa334,	// (0x00075bca) bg_calc_paper_pane_g1_ParamLimits

0xa340,	// (0x00075bd6) bg_calc_paper_pane_g2_ParamLimits

0xa34c,	// (0x00075be2) bg_calc_paper_pane_g3_ParamLimits

0xa358,	// (0x00075bee) bg_calc_paper_pane_g4_ParamLimits

0xa364,	// (0x00075bfa) bg_calc_paper_pane_g5_ParamLimits

0x07e3,	// (0x0006c079) bg_calc_paper_pane_g6_ParamLimits

0x07f2,	// (0x0006c088) bg_calc_paper_pane_g7_ParamLimits

0x0801,	// (0x0006c097) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007a9ee) bg_calc_paper_pane_g_ParamLimits

0x0814,	// (0x0006c0aa) calc_bg_paper_pane_g9_ParamLimits

0x111f,	// (0x0006c9b5) image_qvga_pane_ParamLimits

0x111f,	// (0x0006c9b5) image_qvga_pane

0xa263,	// (0x00075af9) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x00076ed5) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x00076ee1) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x00076ef6) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007ad78) popup_mup_playback_window_t_ParamLimits

0x40d9,	// (0x0006f96f) main_mup2_pane_g3_ParamLimits

0x40d9,	// (0x0006f96f) main_mup2_pane_g3

0x152e,	// (0x0006cdc4) popup_toolbar_window_cp04

0xba42,	// (0x000772d8) popup_call2_audio_second_window_g3_ParamLimits

0xba42,	// (0x000772d8) popup_call2_audio_second_window_g3

0xbe4c,	// (0x000776e2) popup_call2_audio_first_window_g4_ParamLimits

0xbe4c,	// (0x000776e2) popup_call2_audio_first_window_g4

0xc4cb,	// (0x00077d61) popup_call2_audio_in_window_g4_ParamLimits

0xc4cb,	// (0x00077d61) popup_call2_audio_in_window_g4

0x2f99,	// (0x0006e82f) aid_area_sk_bg_cut_ParamLimits

0x2f99,	// (0x0006e82f) aid_area_sk_bg_cut

0xb675,	// (0x00076f0b) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x00076f0b) aid_area_sk_bg_cut_2

0x43dc,	// (0x0006fc72) aid_placing_details_win

0x43e4,	// (0x0006fc7a) aid_placing_details_win_2

0xcdca,	// (0x00078660) camera2_autofocus_pane_g1_ParamLimits

0x03d2,	// (0x0006bc68) popup_fixed_preview_cale_window_ParamLimits

0x03d2,	// (0x0006bc68) popup_fixed_preview_cale_window

0xb443,	// (0x00076cd9) navi_slider_pane_g3

0xb44c,	// (0x00076ce2) navi_slider_pane_g4

0xb455,	// (0x00076ceb) navi_slider_pane_g5

0xb443,	// (0x00076cd9) navi_slider_pane_g6

0x997c,	// (0x00075212) navi_slider_pane_g7

0xb576,	// (0x00076e0c) mup_scale_pane_g3

0xb57f,	// (0x00076e15) mup_scale_pane_g4

0xb588,	// (0x00076e1e) mup_scale_pane_g5

0x2c89,	// (0x0006e51f) mup_scale_pane_g6

0x2c92,	// (0x0006e528) mup_scale_pane_g7

0xb443,	// (0x00076cd9) cams2_slider_pane_g3

0xca15,	// (0x000782ab) cams2_slider_pane_g4

0x9ab5,	// (0x0007534b) cams2_slider_pane_g5

0xb443,	// (0x00076cd9) cams2_slider_pane_g6

0x9abd,	// (0x00075353) cams2_slider_pane_g7

0xcc4c,	// (0x000784e2) camera2_autofocus_pane_cp_g1

0xc82c,	// (0x000780c2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc82c,	// (0x000780c2) bg_popup_preview_window_pane_cp02

0xcf96,	// (0x0007882c) list_fp_cale_pane_ParamLimits

0xcf96,	// (0x0007882c) list_fp_cale_pane

0xcfa2,	// (0x00078838) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfa2,	// (0x00078838) popup_fixed_preview_cale_window_t1

0x4c55,	// (0x000704eb) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c55,	// (0x000704eb) popup_fixed_preview_cale_window_t2

0x4c6a,	// (0x00070500) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c6a,	// (0x00070500) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007b040) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007b040) popup_fixed_preview_cale_window_t

0x4c7f,	// (0x00070515) list_single_fp_cale_pane_ParamLimits

0x4c7f,	// (0x00070515) list_single_fp_cale_pane

0xcfc0,	// (0x00078856) list_single_fp_cale_pane_g1_ParamLimits

0xcfc0,	// (0x00078856) list_single_fp_cale_pane_g1

0xcfcc,	// (0x00078862) list_single_fp_cale_pane_g2_ParamLimits

0xcfcc,	// (0x00078862) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007b047) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007b047) list_single_fp_cale_pane_g

0xcfe5,	// (0x0007887b) list_single_fp_cale_pane_t1_ParamLimits

0xcfe5,	// (0x0007887b) list_single_fp_cale_pane_t1

0xcff7,	// (0x0007888d) list_single_fp_cale_pane_t2_ParamLimits

0xcff7,	// (0x0007888d) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007b04e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007b04e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94d8,	// (0x00074d6e) main_dialer_pane

0x4c94,	// (0x0007052a) aid_cell_size_keypad

0x4c9e,	// (0x00070534) dialer_ne_pane

0x4ca6,	// (0x0007053c) grid_dialer_command_1_pane

0x4cae,	// (0x00070544) grid_dialer_command_2_pane

0x4cb6,	// (0x0007054c) grid_dialer_keypad_pane

0x4cc8,	// (0x0007055e) bg_popup_call_pane_cp06_ParamLimits

0x4cc8,	// (0x0007055e) bg_popup_call_pane_cp06

0x4cd4,	// (0x0007056a) dialer_ne_clear_pane_ParamLimits

0x4cd4,	// (0x0007056a) dialer_ne_clear_pane

0xd02a,	// (0x000788c0) dialer_ne_pane_g1

0xd032,	// (0x000788c8) dialer_ne_pane_t1_ParamLimits

0xd032,	// (0x000788c8) dialer_ne_pane_t1

0x4ce0,	// (0x00070576) dialer_ne_pane_t2_ParamLimits

0x4ce0,	// (0x00070576) dialer_ne_pane_t2

0x4d0a,	// (0x000705a0) dialer_ne_pane_t3_ParamLimits

0x4d0a,	// (0x000705a0) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007b053) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007b053) dialer_ne_pane_t

0x4d3a,	// (0x000705d0) dialer_ne_pane_t3_copy1_ParamLimits

0x4d3a,	// (0x000705d0) dialer_ne_pane_t3_copy1

0x4d69,	// (0x000705ff) cell_dialer_keypad_pane_ParamLimits

0x4d69,	// (0x000705ff) cell_dialer_keypad_pane

0x4d80,	// (0x00070616) cell_dialer_command_1_pane_ParamLimits

0x4d80,	// (0x00070616) cell_dialer_command_1_pane

0x4d96,	// (0x0007062c) cell_dialer_command_2_pane_ParamLimits

0x4d96,	// (0x0007062c) cell_dialer_command_2_pane

0xd044,	// (0x000788da) bg_button_pane_cp02_ParamLimits

0xd044,	// (0x000788da) bg_button_pane_cp02

0x4da5,	// (0x0007063b) cell_dialer_keypad_pane_g1_ParamLimits

0x4da5,	// (0x0007063b) cell_dialer_keypad_pane_g1

0xd044,	// (0x000788da) bg_button_pane_cp03_ParamLimits

0xd044,	// (0x000788da) bg_button_pane_cp03

0x4db9,	// (0x0007064f) cell_dialer_command_1_pane_g1_ParamLimits

0x4db9,	// (0x0007064f) cell_dialer_command_1_pane_g1

0xd050,	// (0x000788e6) bg_button_pane_cp04

0x4dcd,	// (0x00070663) cell_dialer_command_2_pane_g1

0xa4ed,	// (0x00075d83) bg_button_pane_cp06

0xd058,	// (0x000788ee) dialer_ne_clear_pane_g1

0xb316,	// (0x00076bac) navi_pane_g2

0xb344,	// (0x00076bda) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007ac7b) navi_pane_g

0xb3d3,	// (0x00076c69) navi_pane_mv_g2

0xb3fa,	// (0x00076c90) navi_pane_mv_g5

0x284d,	// (0x0006e0e3) navi_pane_mv_t1

0xa328,	// (0x00075bbe) main_clock2_pane

0x4e18,	// (0x000706ae) main_clock2_list_pane_ParamLimits

0x4e18,	// (0x000706ae) main_clock2_list_pane

0x4e4e,	// (0x000706e4) main_clock2_pane_t1_ParamLimits

0x4e4e,	// (0x000706e4) main_clock2_pane_t1

0x4e8a,	// (0x00070720) main_clock2_pane_t2_ParamLimits

0x4e8a,	// (0x00070720) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007b05f) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007b05f) main_clock2_pane_t

0x4f28,	// (0x000707be) popup_clock_analogue_window_cp03_ParamLimits

0x4f28,	// (0x000707be) popup_clock_analogue_window_cp03

0x4f4d,	// (0x000707e3) popup_clock_digital_window_cp02_ParamLimits

0x4f4d,	// (0x000707e3) popup_clock_digital_window_cp02

0x4fbe,	// (0x00070854) main_clock2_list_single_pane_ParamLimits

0x4fbe,	// (0x00070854) main_clock2_list_single_pane

0xa4ed,	// (0x00075d83) list_highlight_pane_cp05

0xd096,	// (0x0007892c) main_clock2_list_single_pane_t1

0x152e,	// (0x0006cdc4) popup_toolbar_window_cp04_ParamLimits

0x4406,	// (0x0006fc9c) camera2_autofocus_pane_g2_ParamLimits

0x4406,	// (0x0006fc9c) camera2_autofocus_pane_g2

0x4412,	// (0x0006fca8) camera2_autofocus_pane_g3_ParamLimits

0x4412,	// (0x0006fca8) camera2_autofocus_pane_g3

0x441e,	// (0x0006fcb4) camera2_autofocus_pane_g4_ParamLimits

0x441e,	// (0x0006fcb4) camera2_autofocus_pane_g4

0x442a,	// (0x0006fcc0) camera2_autofocus_pane_g5_ParamLimits

0x442a,	// (0x0006fcc0) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007afa3) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007afa3) camera2_autofocus_pane_g

0xcf1d,	// (0x000787b3) camera2_autofocus_pane_cp_g2

0xcf25,	// (0x000787bb) camera2_autofocus_pane_cp_g3

0xcf2d,	// (0x000787c3) camera2_autofocus_pane_cp_g4

0xcf35,	// (0x000787cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007b009) camera2_autofocus_pane_cp_g

0x4cc0,	// (0x00070556) popup_dialer_spcha_window

0x9452,	// (0x00074ce8) bg_popup_sub_pane_cp07

0xd0a4,	// (0x0007893a) list_spcha_pane

0xd0ac,	// (0x00078942) list_single_spcha_pane_ParamLimits

0xd0ac,	// (0x00078942) list_single_spcha_pane

0x9452,	// (0x00074ce8) list_highlight_pane_cp06

0xd0bd,	// (0x00078953) list_single_spcha_pane_t1

0xc275,	// (0x00077b0b) popup_call2_audio_out_window_g4_ParamLimits

0xc275,	// (0x00077b0b) popup_call2_audio_out_window_g4

0x94d8,	// (0x00074d6e) main_imed2_pane

0x99d5,	// (0x0007526b) popup_imed_adjust2_window

0x37e7,	// (0x0006f07d) popup_imed_trans_window_ParamLimits

0x37e7,	// (0x0006f07d) popup_imed_trans_window

0xca7e,	// (0x00078314) popup_blid_sat_info2_window_t1

0xca8c,	// (0x00078322) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007af38) popup_blid_sat_info2_window_t

0x5068,	// (0x000708fe) aid_size_cell_colour_35

0x5088,	// (0x0007091e) aid_size_cell_colour_112

0x50a8,	// (0x0007093e) aid_size_cell_effect

0xc838,	// (0x000780ce) bg_tb_trans_pane_cp02

0xae75,	// (0x0007670b) heading_imed_pane

0x50c8,	// (0x0007095e) listscroll_imed_pane

0xd0cb,	// (0x00078961) heading_imed_pane_g1

0xd0d3,	// (0x00078969) heading_imed_pane_t1

0xd0e1,	// (0x00078977) grid_imed_colour_35_pane_ParamLimits

0xd0e1,	// (0x00078977) grid_imed_colour_35_pane

0x50d4,	// (0x0007096a) grid_imed_effect_pane

0xd0f8,	// (0x0007898e) list_imed_aspect_pane

0x50ea,	// (0x00070980) scroll_pane_cp027_ParamLimits

0x50ea,	// (0x00070980) scroll_pane_cp027

0x50fb,	// (0x00070991) cell_imed_effect_pane_ParamLimits

0x50fb,	// (0x00070991) cell_imed_effect_pane

0xd100,	// (0x00078996) cell_imed_colour_pane_ParamLimits

0xd100,	// (0x00078996) cell_imed_colour_pane

0xd142,	// (0x000789d8) cell_imed_colour_pane_g1_ParamLimits

0xd142,	// (0x000789d8) cell_imed_colour_pane_g1

0xd153,	// (0x000789e9) hgihlgiht_grid_pane_cp016_ParamLimits

0xd153,	// (0x000789e9) hgihlgiht_grid_pane_cp016

0x5122,	// (0x000709b8) cell_imed_effect_pane_g1

0x512a,	// (0x000709c0) grid_highlight_pane_cp017

0xd164,	// (0x000789fa) list_imed_single_pane_ParamLimits

0xd164,	// (0x000789fa) list_imed_single_pane

0x9452,	// (0x00074ce8) list_highlight_pane_cp07

0xd179,	// (0x00078a0f) list_imed_aspect_pane_comp1_t1

0xc838,	// (0x000780ce) bg_tb_trans_pane_cp05

0xd19b,	// (0x00078a31) popup_imed_adjust2_window_g1

0xd1c2,	// (0x00078a58) popup_imed_adjust2_window_t1

0xd1da,	// (0x00078a70) slider_imed_adjust_pane

0xd1ee,	// (0x00078a84) slider_imed_adjust_pane_g1

0xd1fe,	// (0x00078a94) slider_imed_adjust_pane_g2

0xd20e,	// (0x00078aa4) slider_imed_adjust_pane_g3

0xd21f,	// (0x00078ab5) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007b07c) slider_imed_adjust_pane_g

0x5133,	// (0x000709c9) aid_size_cell_clipart2

0x513f,	// (0x000709d5) grid_imed_clipart_pane

0xd230,	// (0x00078ac6) scroll_pane_cp031

0x5149,	// (0x000709df) cell_imed_clipart_pane_ParamLimits

0x5149,	// (0x000709df) cell_imed_clipart_pane

0x516b,	// (0x00070a01) cell_imed_clipart_pane_g1

0x9452,	// (0x00074ce8) grid_highlight_pane_cp014

0x4e2d,	// (0x000706c3) main_clock2_pane_g1_ParamLimits

0x4e2d,	// (0x000706c3) main_clock2_pane_g1

0x4f69,	// (0x000707ff) aid_call2_pane_cp10

0x4f7b,	// (0x00070811) aid_call_pane_cp10

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g1

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g2

0x4f8d,	// (0x00070823) popup_clock_analogue_window_cp10_g3

0x4f8d,	// (0x00070823) popup_clock_analogue_window_cp10_g4

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007b06a) popup_clock_analogue_window_cp10_g

0x4f9f,	// (0x00070835) popup_clock_analogue_window_cp10_t1

0x4fd0,	// (0x00070866) clock_digital_number_pane_cp10_ParamLimits

0x4fd0,	// (0x00070866) clock_digital_number_pane_cp10

0x4fe8,	// (0x0007087e) clock_digital_number_pane_cp11_ParamLimits

0x4fe8,	// (0x0007087e) clock_digital_number_pane_cp11

0x5000,	// (0x00070896) clock_digital_number_pane_cp12_ParamLimits

0x5000,	// (0x00070896) clock_digital_number_pane_cp12

0x5018,	// (0x000708ae) clock_digital_number_pane_cp13_ParamLimits

0x5018,	// (0x000708ae) clock_digital_number_pane_cp13

0x5030,	// (0x000708c6) clock_digital_separator_pane_cp10_ParamLimits

0x5030,	// (0x000708c6) clock_digital_separator_pane_cp10

0x5048,	// (0x000708de) popup_clock_digital_window_cp02_t1_ParamLimits

0x5048,	// (0x000708de) popup_clock_digital_window_cp02_t1

0xa25b,	// (0x00075af1) clock_digital_number_pane_cp10_g1

0xa25b,	// (0x00075af1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007b085) clock_digital_number_pane_cp10_g

0xa25b,	// (0x00075af1) clock_digital_separator_pane_cp10_g1

0xa25b,	// (0x00075af1) clock_digital_separator_pane_g2_cp10

0xb402,	// (0x00076c98) navi_pane_vded_g4

0xb40b,	// (0x00076ca1) navi_pane_vded_g5

0xb414,	// (0x00076caa) navi_pane_vded_t1

0x94d8,	// (0x00074d6e) main_vded_pane

0x5174,	// (0x00070a0a) main_vded_pane_g1

0x517e,	// (0x00070a14) main_vded_pane_g2

0x5188,	// (0x00070a1e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007b08a) main_vded_pane_g

0x5192,	// (0x00070a28) main_vded_pane_t1

0x51a0,	// (0x00070a36) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007b091) main_vded_pane_t

0x51ae,	// (0x00070a44) vded_slider_pane

0x51b6,	// (0x00070a4c) vded_video_pane

0xd238,	// (0x00078ace) vded_video_pane_g1

0x51be,	// (0x00070a54) vded_video_pane_g2

0xcc4c,	// (0x000784e2) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007b096) vded_video_pane_g

0xd242,	// (0x00078ad8) vded_slider_pane_g1

0xc993,	// (0x00078229) vded_slider_pane_g2

0xd24b,	// (0x00078ae1) vded_slider_pane_g3

0xd254,	// (0x00078aea) vded_slider_pane_g4

0xd25d,	// (0x00078af3) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007b09d) vded_slider_pane_g

0x4ba1,	// (0x00070437) mup3_rocker_pane_ParamLimits

0x4ba1,	// (0x00070437) mup3_rocker_pane

0x51c7,	// (0x00070a5d) mup3_control_keys_pane_g1

0x51cf,	// (0x00070a65) mup3_control_keys_pane_g2

0x51d7,	// (0x00070a6d) mup3_control_keys_pane_g3

0x51df,	// (0x00070a75) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007b0a8) mup3_control_keys_pane_g

0x0409,	// (0x0006bc9f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0409,	// (0x0006bc9f) popup_toolbar2_fixed_window_cp01

0x4bd5,	// (0x0007046b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bd5,	// (0x0007046b) popup_toolbar2_fixed_window_cp02

0xbbb4,	// (0x0007744a) popup_call2_audio_second_window_t4_ParamLimits

0xbbb4,	// (0x0007744a) popup_call2_audio_second_window_t4

0xc0e2,	// (0x00077978) popup_call2_audio_first_window_t6_ParamLimits

0xc0e2,	// (0x00077978) popup_call2_audio_first_window_t6

0xc378,	// (0x00077c0e) popup_call2_audio_out_window_t6_ParamLimits

0xc378,	// (0x00077c0e) popup_call2_audio_out_window_t6

0x94d8,	// (0x00074d6e) main_vitu_pane

0x51ef,	// (0x00070a85) aid_size_cell_itu_ParamLimits

0x51ef,	// (0x00070a85) aid_size_cell_itu

0xa574,	// (0x00075e0a) bg_popup_window_pane_cp08_ParamLimits

0xa574,	// (0x00075e0a) bg_popup_window_pane_cp08

0x5205,	// (0x00070a9b) field_vitu_entry_pane_ParamLimits

0x5205,	// (0x00070a9b) field_vitu_entry_pane

0x521c,	// (0x00070ab2) grid_vitu_function_pane_ParamLimits

0x521c,	// (0x00070ab2) grid_vitu_function_pane

0x5237,	// (0x00070acd) grid_vitu_itu_pane_ParamLimits

0x5237,	// (0x00070acd) grid_vitu_itu_pane

0x5255,	// (0x00070aeb) cell_vitu_itu_pane_ParamLimits

0x5255,	// (0x00070aeb) cell_vitu_itu_pane

0x5277,	// (0x00070b0d) cell_vitu_function_pane_ParamLimits

0x5277,	// (0x00070b0d) cell_vitu_function_pane

0xa574,	// (0x00075e0a) bg_popup_sub_pane_cp08_ParamLimits

0xa574,	// (0x00075e0a) bg_popup_sub_pane_cp08

0x5290,	// (0x00070b26) field_vitu_entry_pane_t1_ParamLimits

0x5290,	// (0x00070b26) field_vitu_entry_pane_t1

0xd27e,	// (0x00078b14) field_vitu_entry_pane_t2_ParamLimits

0xd27e,	// (0x00078b14) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007b0b6) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007b0b6) field_vitu_entry_pane_t

0xd29b,	// (0x00078b31) bg_button_pane_cp05_ParamLimits

0xd29b,	// (0x00078b31) bg_button_pane_cp05

0x52ae,	// (0x00070b44) cell_vitu_itu_pane_g1

0x52c6,	// (0x00070b5c) cell_vitu_itu_pane_t1_ParamLimits

0x52c6,	// (0x00070b5c) cell_vitu_itu_pane_t1

0x52d8,	// (0x00070b6e) cell_vitu_itu_pane_t2_ParamLimits

0x52d8,	// (0x00070b6e) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007b0bb) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007b0bb) cell_vitu_itu_pane_t

0xd2a9,	// (0x00078b3f) bg_button_pane_cp07

0x530d,	// (0x00070ba3) cell_vitu_function_pane_g1

0x983a,	// (0x000750d0) main_calc_pane_g1

0x0230,	// (0x0006bac6) aid_visual_content_pane

0x94d8,	// (0x00074d6e) main_vradio_pane

0x5316,	// (0x00070bac) main_vradio_pane_g1_ParamLimits

0x5316,	// (0x00070bac) main_vradio_pane_g1

0xd2b3,	// (0x00078b49) main_vradio_pane_g2_ParamLimits

0xd2b3,	// (0x00078b49) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007b0c2) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007b0c2) main_vradio_pane_g

0x532f,	// (0x00070bc5) main_vradio_pane_t1_ParamLimits

0x532f,	// (0x00070bc5) main_vradio_pane_t1

0x5344,	// (0x00070bda) main_vradio_pane_t2_ParamLimits

0x5344,	// (0x00070bda) main_vradio_pane_t2

0xd2c0,	// (0x00078b56) main_vradio_pane_t3_ParamLimits

0xd2c0,	// (0x00078b56) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007b0c7) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007b0c7) main_vradio_pane_t

0x5359,	// (0x00070bef) vradio_rocker_control_pane_ParamLimits

0x5359,	// (0x00070bef) vradio_rocker_control_pane

0x536b,	// (0x00070c01) vradio_station_info_pane_ParamLimits

0x536b,	// (0x00070c01) vradio_station_info_pane

0xd2d4,	// (0x00078b6a) vradio_frequency_info_pane_ParamLimits

0xd2d4,	// (0x00078b6a) vradio_frequency_info_pane

0xcc4c,	// (0x000784e2) vradio_station_info_pane_g1

0xd2e3,	// (0x00078b79) vradio_station_info_pane_t1_ParamLimits

0xd2e3,	// (0x00078b79) vradio_station_info_pane_t1

0xd305,	// (0x00078b9b) vradio_station_info_pane_t2_ParamLimits

0xd305,	// (0x00078b9b) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007b0ce) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007b0ce) vradio_station_info_pane_t

0xd317,	// (0x00078bad) vradio_tuning_pane

0xd31f,	// (0x00078bb5) vradio_rocker_control_pane_g1

0xd327,	// (0x00078bbd) vradio_rocker_control_pane_g2

0xd32f,	// (0x00078bc5) vradio_rocker_control_pane_g3

0xd337,	// (0x00078bcd) vradio_rocker_control_pane_g4

0xd33f,	// (0x00078bd5) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007b0d3) vradio_rocker_control_pane_g

0x537d,	// (0x00070c13) vradio_frequency_info_pane_g1

0xd347,	// (0x00078bdd) vradio_frequency_info_pane_t1_ParamLimits

0xd347,	// (0x00078bdd) vradio_frequency_info_pane_t1

0x5387,	// (0x00070c1d) vradio_tuning_pane_g1

0x5392,	// (0x00070c28) vradio_tuning_pane_t1

0x9488,	// (0x00074d1e) area_side_right_pane_ParamLimits

0x9488,	// (0x00074d1e) area_side_right_pane

0xc7f3,	// (0x00078089) status_small_pane_g1

0xc7fb,	// (0x00078091) status_small_pane_g2

0xc804,	// (0x0007809a) status_small_pane_g3

0xc80d,	// (0x000780a3) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007ae8e) status_small_pane_g

0xc816,	// (0x000780ac) status_small_pane_t1

0x94d8,	// (0x00074d6e) main_video3_pane

0xd35b,	// (0x00078bf1) cams_zoom_vslider_pane

0xd363,	// (0x00078bf9) image3_wide_pane_ParamLimits

0xd363,	// (0x00078bf9) image3_wide_pane

0xd37d,	// (0x00078c13) image3_wide_small_pane

0xd389,	// (0x00078c1f) main_video3_pane_g1_ParamLimits

0xd389,	// (0x00078c1f) main_video3_pane_g1

0xd3a5,	// (0x00078c3b) main_video3_pane_g2_ParamLimits

0xd3a5,	// (0x00078c3b) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007b0de) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007b0de) main_video3_pane_g

0xd3c1,	// (0x00078c57) main_video3_pane_t1_ParamLimits

0xd3c1,	// (0x00078c57) main_video3_pane_t1

0xd3ec,	// (0x00078c82) main_video3_pane_t2_ParamLimits

0xd3ec,	// (0x00078c82) main_video3_pane_t2

0xd417,	// (0x00078cad) main_video3_pane_t3_ParamLimits

0xd417,	// (0x00078cad) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007b0e3) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007b0e3) main_video3_pane_t

0xd444,	// (0x00078cda) cams_zoom_vslider_pane_g1

0xd44d,	// (0x00078ce3) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007b0ea) cams_zoom_vslider_pane_g

0xd455,	// (0x00078ceb) small_slider_vertical_pane

0xcc4c,	// (0x000784e2) small_slider_vertical_pane_g1

0xcc4c,	// (0x000784e2) small_slider_vertical_pane_g2

0xd45d,	// (0x00078cf3) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007b0ef) small_slider_vertical_pane_g

0x94d8,	// (0x00074d6e) main_hwr_training_pane

0xd466,	// (0x00078cfc) hwr_training_instruct_pane_ParamLimits

0xd466,	// (0x00078cfc) hwr_training_instruct_pane

0x53a1,	// (0x00070c37) hwr_training_navi_pane_ParamLimits

0x53a1,	// (0x00070c37) hwr_training_navi_pane

0x53c0,	// (0x00070c56) hwr_training_write_pane_ParamLimits

0x53c0,	// (0x00070c56) hwr_training_write_pane

0x9452,	// (0x00074ce8) bg_frame_shadow_pane

0xd49d,	// (0x00078d33) hwr_training_write_pane_g1

0xd4a5,	// (0x00078d3b) hwr_training_write_pane_g2

0xd4ad,	// (0x00078d43) hwr_training_write_pane_g3

0xd4b5,	// (0x00078d4b) hwr_training_write_pane_g4

0xd4bd,	// (0x00078d53) hwr_training_write_pane_g5

0xd4c5,	// (0x00078d5b) hwr_training_write_pane_g6

0xd4cd,	// (0x00078d63) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007b0f6) hwr_training_write_pane_g

0x9ac6,	// (0x0007535c) hwr_training_navi_pane_g1_ParamLimits

0x9ac6,	// (0x0007535c) hwr_training_navi_pane_g1

0x9ad8,	// (0x0007536e) hwr_training_navi_pane_g2_ParamLimits

0x9ad8,	// (0x0007536e) hwr_training_navi_pane_g2

0x9aea,	// (0x00075380) hwr_training_navi_pane_g3_ParamLimits

0x9aea,	// (0x00075380) hwr_training_navi_pane_g3

0x9afa,	// (0x00075390) hwr_training_navi_pane_g4_ParamLimits

0x9afa,	// (0x00075390) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007b105) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007b105) hwr_training_navi_pane_g

0x9b07,	// (0x0007539d) hwr_training_navi_pane_t1

0x5408,	// (0x00070c9e) list_single_hwr_training_instruct_pane_ParamLimits

0x5408,	// (0x00070c9e) list_single_hwr_training_instruct_pane

0xd4d5,	// (0x00078d6b) list_single_hwr_training_instruct_pane_t1

0xcb8c,	// (0x00078422) bg_frame_shadow_pane_g1

0xd4e4,	// (0x00078d7a) bg_frame_shadow_pane_g2

0xd4ec,	// (0x00078d82) bg_frame_shadow_pane_g3

0xd4f4,	// (0x00078d8a) bg_frame_shadow_pane_g4

0xd4fc,	// (0x00078d92) bg_frame_shadow_pane_g5

0xd504,	// (0x00078d9a) bg_frame_shadow_pane_g6

0xd50c,	// (0x00078da2) bg_frame_shadow_pane_g7

0xa3e1,	// (0x00075c77) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007b110) bg_frame_shadow_pane_g

0x94d8,	// (0x00074d6e) main_video_tele_dialer_pane

0x541d,	// (0x00070cb3) aid_size_cell_video_keypad_ParamLimits

0x541d,	// (0x00070cb3) aid_size_cell_video_keypad

0x5437,	// (0x00070ccd) grid_video_dialer_keypad_pane_ParamLimits

0x5437,	// (0x00070ccd) grid_video_dialer_keypad_pane

0x5483,	// (0x00070d19) video_down_pane_cp_ParamLimits

0x5483,	// (0x00070d19) video_down_pane_cp

0x54b5,	// (0x00070d4b) cell_video_dialer_keypad_pane_ParamLimits

0x54b5,	// (0x00070d4b) cell_video_dialer_keypad_pane

0xd514,	// (0x00078daa) bg_button_pane_cp08_ParamLimits

0xd514,	// (0x00078daa) bg_button_pane_cp08

0x54d7,	// (0x00070d6d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54d7,	// (0x00070d6d) cell_video_dialer_keypad_pane_g1

0x4b8b,	// (0x00070421) mup3_rocker2_pane_ParamLimits

0x4b8b,	// (0x00070421) mup3_rocker2_pane

0xcc4c,	// (0x000784e2) mup3_rocker2_pane_g1

0x36c8,	// (0x0006ef5e) main_dialer2_pane

0x94d8,	// (0x00074d6e) main_mp4_pane

0x9b1d,	// (0x000753b3) main_mp4_pane_g1_ParamLimits

0x9b1d,	// (0x000753b3) main_mp4_pane_g1

0x9b1d,	// (0x000753b3) main_mp4_pane_g2_ParamLimits

0x9b1d,	// (0x000753b3) main_mp4_pane_g2

0x550e,	// (0x00070da4) main_mp4_pane_g3_ParamLimits

0x550e,	// (0x00070da4) main_mp4_pane_g3

0x9b2b,	// (0x000753c1) main_mp4_pane_g4_ParamLimits

0x9b2b,	// (0x000753c1) main_mp4_pane_g4

0x9b53,	// (0x000753e9) main_mp4_pane_g5_ParamLimits

0x9b53,	// (0x000753e9) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007b130) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007b130) main_mp4_pane_g

0x9ba3,	// (0x00075439) main_mp4_pane_t1_ParamLimits

0x9ba3,	// (0x00075439) main_mp4_pane_t1

0x9bff,	// (0x00075495) main_mp4_pane_t2_ParamLimits

0x9bff,	// (0x00075495) main_mp4_pane_t2

0xd520,	// (0x00078db6) main_mp4_pane_t3_ParamLimits

0xd520,	// (0x00078db6) main_mp4_pane_t3

0x9c51,	// (0x000754e7) main_mp4_pane_t4_ParamLimits

0x9c51,	// (0x000754e7) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007b13d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007b13d) main_mp4_pane_t

0x9c95,	// (0x0007552b) mp4_progress_pane_ParamLimits

0x9c95,	// (0x0007552b) mp4_progress_pane

0x9cdf,	// (0x00075575) mp4_rocker_pane_ParamLimits

0x9cdf,	// (0x00075575) mp4_rocker_pane

0xd548,	// (0x00078dde) mp4_progress_pane_t1

0xd561,	// (0x00078df7) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007b146) mp4_progress_pane_t

0xd582,	// (0x00078e18) mup_progress_pane_cp04

0xd58e,	// (0x00078e24) mp4_rocker_pane_g1

0x554a,	// (0x00070de0) aid_cell_size_keypad2_ParamLimits

0x554a,	// (0x00070de0) aid_cell_size_keypad2

0x5560,	// (0x00070df6) dialer2_ne_pane_ParamLimits

0x5560,	// (0x00070df6) dialer2_ne_pane

0x557a,	// (0x00070e10) grid_dialer2_keypad_pane_ParamLimits

0x557a,	// (0x00070e10) grid_dialer2_keypad_pane

0xca25,	// (0x000782bb) bg_popup_call_pane_cp07_ParamLimits

0xca25,	// (0x000782bb) bg_popup_call_pane_cp07

0x5596,	// (0x00070e2c) dialer2_ne_pane_t1_ParamLimits

0x5596,	// (0x00070e2c) dialer2_ne_pane_t1

0x55d1,	// (0x00070e67) cell_dialer2_keypad_pane_ParamLimits

0x55d1,	// (0x00070e67) cell_dialer2_keypad_pane

0xd5aa,	// (0x00078e40) bg_button_pane_pane_cp04_ParamLimits

0xd5aa,	// (0x00078e40) bg_button_pane_pane_cp04

0x55f3,	// (0x00070e89) cell_dialer2_keypad_pane_g1_ParamLimits

0x55f3,	// (0x00070e89) cell_dialer2_keypad_pane_g1

0x1402,	// (0x0006cc98) aid_placing_vt_set_content_ParamLimits

0x1402,	// (0x0006cc98) aid_placing_vt_set_content

0x142a,	// (0x0006ccc0) aid_placing_vt_set_title_ParamLimits

0x142a,	// (0x0006ccc0) aid_placing_vt_set_title

0x94d8,	// (0x00074d6e) main_image3_pane

0x56b9,	// (0x00070f4f) area_side_right_pane_cp01_ParamLimits

0x56b9,	// (0x00070f4f) area_side_right_pane_cp01

0x9b1d,	// (0x000753b3) main_image3_pane_g1_ParamLimits

0x9b1d,	// (0x000753b3) main_image3_pane_g1

0x56d0,	// (0x00070f66) main_image3_pane_g2_ParamLimits

0x56d0,	// (0x00070f66) main_image3_pane_g2

0x56f8,	// (0x00070f8e) main_image3_pane_g3_ParamLimits

0x56f8,	// (0x00070f8e) main_image3_pane_g3

0x5722,	// (0x00070fb8) main_image3_pane_g4_ParamLimits

0x5722,	// (0x00070fb8) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007b155) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007b155) main_image3_pane_g

0x574c,	// (0x00070fe2) main_image3_pane_t1_ParamLimits

0x574c,	// (0x00070fe2) main_image3_pane_t1

0x57a4,	// (0x0007103a) main_image3_pane_t2_ParamLimits

0x57a4,	// (0x0007103a) main_image3_pane_t2

0x57f6,	// (0x0007108c) main_image3_pane_t3_ParamLimits

0x57f6,	// (0x0007108c) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007b15e) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007b15e) main_image3_pane_t

0xa574,	// (0x00075e0a) grid_sctrl_middle_pane_cp01_ParamLimits

0xa574,	// (0x00075e0a) grid_sctrl_middle_pane_cp01

0x587e,	// (0x00071114) cell_sctrl_middle_pane_cp01_ParamLimits

0x587e,	// (0x00071114) cell_sctrl_middle_pane_cp01

0x589b,	// (0x00071131) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x589b,	// (0x00071131) cell_sctrl_middle_pane_cp01_g1

0x94d8,	// (0x00074d6e) main_call4_pane

0x58b1,	// (0x00071147) aid_size_button_call4_ParamLimits

0x58b1,	// (0x00071147) aid_size_button_call4

0x58e2,	// (0x00071178) call4_windows_pane_ParamLimits

0x58e2,	// (0x00071178) call4_windows_pane

0x5902,	// (0x00071198) grid_call4_button_pane_ParamLimits

0x5902,	// (0x00071198) grid_call4_button_pane

0xd5b6,	// (0x00078e4c) call4_windows_conf_pane

0xd5cd,	// (0x00078e63) popup_call4_audio_first_window_ParamLimits

0xd5cd,	// (0x00078e63) popup_call4_audio_first_window

0xd619,	// (0x00078eaf) popup_call4_audio_second_window_ParamLimits

0xd619,	// (0x00078eaf) popup_call4_audio_second_window

0xd62d,	// (0x00078ec3) popup_call4_audio_wait_window_ParamLimits

0xd62d,	// (0x00078ec3) popup_call4_audio_wait_window

0x592f,	// (0x000711c5) cell_call4_button_pane_ParamLimits

0x592f,	// (0x000711c5) cell_call4_button_pane

0x5958,	// (0x000711ee) bg_button_pane_cp09_ParamLimits

0x5958,	// (0x000711ee) bg_button_pane_cp09

0x5964,	// (0x000711fa) cell_call4_button_pane_g1_ParamLimits

0x5964,	// (0x000711fa) cell_call4_button_pane_g1

0x598a,	// (0x00071220) cell_call4_button_pane_t1_ParamLimits

0x598a,	// (0x00071220) cell_call4_button_pane_t1

0xd675,	// (0x00078f0b) popup_call4_audio_conf_window_ParamLimits

0xd675,	// (0x00078f0b) popup_call4_audio_conf_window

0x4beb,	// (0x00070481) mup3_progress_pane_t1_ParamLimits

0x4c0a,	// (0x000704a0) mup3_progress_pane_t2_ParamLimits

0xcf53,	// (0x000787e9) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007b032) mup3_progress_pane_t_ParamLimits

0xcf70,	// (0x00078806) mup_progress_pane_cp03_ParamLimits

0x51e7,	// (0x00070a7d) mup3_control_keys_pane_g4_copy1

0x9cc3,	// (0x00075559) mp4_rocker2_pane_ParamLimits

0x9cc3,	// (0x00075559) mp4_rocker2_pane

0xd689,	// (0x00078f1f) mp4_rocker2_pane_g1

0xd691,	// (0x00078f27) mp4_rocker2_pane_g2

0x9d31,	// (0x000755c7) mp4_rocker2_pane_g3

0x9d39,	// (0x000755cf) mp4_rocker2_pane_g4

0x9d41,	// (0x000755d7) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007b167) mp4_rocker2_pane_g

0x94d8,	// (0x00074d6e) main_camera4_pane

0x94d8,	// (0x00074d6e) main_video4_pane

0x5451,	// (0x00070ce7) main_video_tele_dialer_pane_t1_ParamLimits

0x5451,	// (0x00070ce7) main_video_tele_dialer_pane_t1

0x546a,	// (0x00070d00) main_video_tele_dialer_pane_t2_ParamLimits

0x546a,	// (0x00070d00) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007b121) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007b121) main_video_tele_dialer_pane_t

0x59c8,	// (0x0007125e) cam4_autofocus_pane_ParamLimits

0x59c8,	// (0x0007125e) cam4_autofocus_pane

0x59de,	// (0x00071274) cam4_image_uncrop_pane_ParamLimits

0x59de,	// (0x00071274) cam4_image_uncrop_pane

0x59f8,	// (0x0007128e) cam4_indicators_pane_ParamLimits

0x59f8,	// (0x0007128e) cam4_indicators_pane

0x5a23,	// (0x000712b9) main_camera4_pane_g1_ParamLimits

0x5a23,	// (0x000712b9) main_camera4_pane_g1

0x5a35,	// (0x000712cb) main_camera4_pane_g2_ParamLimits

0x5a35,	// (0x000712cb) main_camera4_pane_g2

0x5a48,	// (0x000712de) main_camera4_pane_g3_ParamLimits

0x5a48,	// (0x000712de) main_camera4_pane_g3

0x5a5b,	// (0x000712f1) main_camera4_pane_g4_ParamLimits

0x5a5b,	// (0x000712f1) main_camera4_pane_g4

0x5a6e,	// (0x00071304) main_camera4_pane_g5_ParamLimits

0x5a6e,	// (0x00071304) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007b172) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007b172) main_camera4_pane_g

0x5a92,	// (0x00071328) main_camera4_pane_t1_ParamLimits

0x5a92,	// (0x00071328) main_camera4_pane_t1

0x9d65,	// (0x000755fb) bg_tb_trans_pane_cp06

0x9d7b,	// (0x00075611) cam4_indicators_pane_g1

0x9d8c,	// (0x00075622) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007b18d) cam4_indicators_pane_g

0x9daa,	// (0x00075640) cam4_indicators_pane_t1

0x5af6,	// (0x0007138c) main_video4_pane_g1_ParamLimits

0x5af6,	// (0x0007138c) main_video4_pane_g1

0x5b05,	// (0x0007139b) main_video4_pane_g2_ParamLimits

0x5b05,	// (0x0007139b) main_video4_pane_g2

0x5b14,	// (0x000713aa) main_video4_pane_g3_ParamLimits

0x5b14,	// (0x000713aa) main_video4_pane_g3

0x5b23,	// (0x000713b9) main_video4_pane_g4_ParamLimits

0x5b23,	// (0x000713b9) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007b194) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007b194) main_video4_pane_g

0x5b41,	// (0x000713d7) vid4_indicators_pane_ParamLimits

0x5b41,	// (0x000713d7) vid4_indicators_pane

0x5b6f,	// (0x00071405) video4_image_uncrop_cif_pane_ParamLimits

0x5b6f,	// (0x00071405) video4_image_uncrop_cif_pane

0x5b89,	// (0x0007141f) video4_image_uncrop_nhd_pane_ParamLimits

0x5b89,	// (0x0007141f) video4_image_uncrop_nhd_pane

0x59de,	// (0x00071274) video4_image_uncrop_vga_pane_ParamLimits

0x59de,	// (0x00071274) video4_image_uncrop_vga_pane

0x94ca,	// (0x00074d60) bg_tb_trans_pane_cp07

0x9dd6,	// (0x0007566c) vid4_indicators_pane_g1

0x9dea,	// (0x00075680) vid4_indicators_pane_g2

0x9dfe,	// (0x00075694) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007b19f) vid4_indicators_pane_g

0x9e2d,	// (0x000756c3) vid4_indicators_pane_t1

0x5b9d,	// (0x00071433) cam4_autofocus_pane_g1

0x5ba5,	// (0x0007143b) cam4_autofocus_pane_g2

0x5bad,	// (0x00071443) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007b1aa) cam4_autofocus_pane_g

0x5bb5,	// (0x0007144b) cam4_autofocus_pane_g3_copy1

0x5499,	// (0x00070d2f) video_down_pane_cp_t1

0x54a7,	// (0x00070d3d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007b126) video_down_pane_cp_t

0x94ca,	// (0x00074d60) popup_vitu2_window_ParamLimits

0x94ca,	// (0x00074d60) popup_vitu2_window

0x5bbd,	// (0x00071453) aid_size_cell2_itu2_ParamLimits

0x5bbd,	// (0x00071453) aid_size_cell2_itu2

0x5be3,	// (0x00071479) aid_size_cell_itu2_ParamLimits

0x5be3,	// (0x00071479) aid_size_cell_itu2

0x5c3f,	// (0x000714d5) bg_popup_window_pane_cp09_ParamLimits

0x5c3f,	// (0x000714d5) bg_popup_window_pane_cp09

0x5c4d,	// (0x000714e3) field_vitu2_entry_pane_ParamLimits

0x5c4d,	// (0x000714e3) field_vitu2_entry_pane

0x5c73,	// (0x00071509) grid_vitu2_function_pane_ParamLimits

0x5c73,	// (0x00071509) grid_vitu2_function_pane

0x5cc4,	// (0x0007155a) grid_vitu2_itu_pane_ParamLimits

0x5cc4,	// (0x0007155a) grid_vitu2_itu_pane

0x5d5c,	// (0x000715f2) cell_vitu2_itu_pane_ParamLimits

0x5d5c,	// (0x000715f2) cell_vitu2_itu_pane

0x5d88,	// (0x0007161e) cell_vitu2_function_pane_ParamLimits

0x5d88,	// (0x0007161e) cell_vitu2_function_pane

0xd699,	// (0x00078f2f) bg_popup_call_pane_cp08_ParamLimits

0xd699,	// (0x00078f2f) bg_popup_call_pane_cp08

0xd6b0,	// (0x00078f46) field_vitu2_entry_pane_g1

0xd6bc,	// (0x00078f52) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007b1b1) field_vitu2_entry_pane_g

0x5dc7,	// (0x0007165d) field_vitu2_entry_pane_t1_ParamLimits

0x5dc7,	// (0x0007165d) field_vitu2_entry_pane_t1

0xa5ca,	// (0x00075e60) field_vitu2_entry_pane_t2_ParamLimits

0xa5ca,	// (0x00075e60) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007b1b8) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007b1b8) field_vitu2_entry_pane_t

0x5df7,	// (0x0007168d) bg_button_pane_cp010_ParamLimits

0x5df7,	// (0x0007168d) bg_button_pane_cp010

0x9e44,	// (0x000756da) cell_vitu2_itu_pane_g1

0x5e13,	// (0x000716a9) cell_vitu2_itu_pane_t1_ParamLimits

0x5e13,	// (0x000716a9) cell_vitu2_itu_pane_t1

0x0108,	// (0x0006b99e) cell_vitu2_itu_pane_t2_ParamLimits

0x0108,	// (0x0006b99e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007b1c2) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007b1c2) cell_vitu2_itu_pane_t

0x94ca,	// (0x00074d60) bg_button_pane_cp011

0x5e71,	// (0x00071707) cell_vitu2_function_pane_g1

0x94d8,	// (0x00074d6e) main_myfav_hc_pane

0x5846,	// (0x000710dc) popup_image3_note_pane_ParamLimits

0x5846,	// (0x000710dc) popup_image3_note_pane

0x5862,	// (0x000710f8) popup_image3_tool_bar_pane_ParamLimits

0x5862,	// (0x000710f8) popup_image3_tool_bar_pane

0x0196,	// (0x0006ba2c) cell_vitu2_itu_pane_t3_ParamLimits

0x0196,	// (0x0006ba2c) cell_vitu2_itu_pane_t3

0x9452,	// (0x00074ce8) bg_popup_trans_pane

0xd6de,	// (0x00078f74) grid_image3_tool_bar_pane

0xd6e8,	// (0x00078f7e) bg_popup_trans_pane_g1

0xac2d,	// (0x000764c3) bg_popup_trans_pane_g2

0xd6f0,	// (0x00078f86) bg_popup_trans_pane_g3

0xd6f8,	// (0x00078f8e) bg_popup_trans_pane_g4

0xd700,	// (0x00078f96) bg_popup_trans_pane_g5

0xd708,	// (0x00078f9e) bg_popup_trans_pane_g6

0xd710,	// (0x00078fa6) bg_popup_trans_pane_g7

0xd718,	// (0x00078fae) bg_popup_trans_pane_g8

0xac0d,	// (0x000764a3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007b1c9) bg_popup_trans_pane_g

0xd720,	// (0x00078fb6) cell_image3_tool_bar_pane_ParamLimits

0xd720,	// (0x00078fb6) cell_image3_tool_bar_pane

0xcc4c,	// (0x000784e2) cell_image3_tool_bar_pane_g1

0x9452,	// (0x00074ce8) bg_popup_trans_pane_cp1

0xd734,	// (0x00078fca) popup_image3_note_pane_t1

0xd742,	// (0x00078fd8) popup_image3_note_pane_t2

0xd750,	// (0x00078fe6) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007b1dc) popup_image3_note_pane_t

0xd75e,	// (0x00078ff4) popup_image3_note_pane_t3_copy1

0x5e85,	// (0x0007171b) bg_myfav_hc_instruction_pane_ParamLimits

0x5e85,	// (0x0007171b) bg_myfav_hc_instruction_pane

0x5e99,	// (0x0007172f) cell_myfav_contact_pane_ParamLimits

0x5e99,	// (0x0007172f) cell_myfav_contact_pane

0x5eb7,	// (0x0007174d) cell_myfav_contact_pane_cp1_ParamLimits

0x5eb7,	// (0x0007174d) cell_myfav_contact_pane_cp1

0x5ecf,	// (0x00071765) cell_myfav_contact_pane_cp2_ParamLimits

0x5ecf,	// (0x00071765) cell_myfav_contact_pane_cp2

0x5ee7,	// (0x0007177d) cell_myfav_contact_pane_cp3_ParamLimits

0x5ee7,	// (0x0007177d) cell_myfav_contact_pane_cp3

0x5efe,	// (0x00071794) cell_myfav_contact_pane_cp4_ParamLimits

0x5efe,	// (0x00071794) cell_myfav_contact_pane_cp4

0x5f16,	// (0x000717ac) cell_myfav_contact_pane_cp5_ParamLimits

0x5f16,	// (0x000717ac) cell_myfav_contact_pane_cp5

0x5f2a,	// (0x000717c0) cell_myfav_contact_pane_cp6_ParamLimits

0x5f2a,	// (0x000717c0) cell_myfav_contact_pane_cp6

0x5f40,	// (0x000717d6) cell_myfav_contact_pane_cp7_ParamLimits

0x5f40,	// (0x000717d6) cell_myfav_contact_pane_cp7

0xd76c,	// (0x00079002) listscroll_gen_pane_cp05

0x5f5a,	// (0x000717f0) main_myfav_hc_pane_g1_ParamLimits

0x5f5a,	// (0x000717f0) main_myfav_hc_pane_g1

0x5f74,	// (0x0007180a) main_myfav_hc_pane_g2_ParamLimits

0x5f74,	// (0x0007180a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007b1e3) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007b1e3) main_myfav_hc_pane_g

0x5fa6,	// (0x0007183c) main_myfav_hc_pane_t1_ParamLimits

0x5fa6,	// (0x0007183c) main_myfav_hc_pane_t1

0xd775,	// (0x0007900b) main_myfav_hc_pane_t2_ParamLimits

0xd775,	// (0x0007900b) main_myfav_hc_pane_t2

0xd787,	// (0x0007901d) main_myfav_hc_pane_t3_ParamLimits

0xd787,	// (0x0007901d) main_myfav_hc_pane_t3

0x5fbd,	// (0x00071853) main_myfav_hc_pane_t4_ParamLimits

0x5fbd,	// (0x00071853) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007b1ea) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007b1ea) main_myfav_hc_pane_t

0xcc4c,	// (0x000784e2) bg_myfav_hc_instruction_pane_g1

0xd799,	// (0x0007902f) cell_myfav_contact_pane_g1_ParamLimits

0xd799,	// (0x0007902f) cell_myfav_contact_pane_g1

0xd799,	// (0x0007902f) cell_myfav_contact_pane_g2_ParamLimits

0xd799,	// (0x0007902f) cell_myfav_contact_pane_g2

0xd7a5,	// (0x0007903b) cell_myfav_contact_pane_g3_ParamLimits

0xd7a5,	// (0x0007903b) cell_myfav_contact_pane_g3

0xcf3d,	// (0x000787d3) cell_myfav_contact_pane_g4_ParamLimits

0xcf3d,	// (0x000787d3) cell_myfav_contact_pane_g4

0xd7b2,	// (0x00079048) cell_myfav_contact_pane_g5_ParamLimits

0xd7b2,	// (0x00079048) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007b1f5) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007b1f5) cell_myfav_contact_pane_g

0x5f8e,	// (0x00071824) main_myfav_hc_pane_g3_ParamLimits

0x5f8e,	// (0x00071824) main_myfav_hc_pane_g3

0x036b,	// (0x0006bc01) popup_adpt_find_window

0x5fe5,	// (0x0007187b) afind_page_pane_ParamLimits

0x5fe5,	// (0x0007187b) afind_page_pane

0x5ffa,	// (0x00071890) aid_size_cell_afind_ParamLimits

0x5ffa,	// (0x00071890) aid_size_cell_afind

0x6018,	// (0x000718ae) bg_popup_sub_pane_cp09_ParamLimits

0x6018,	// (0x000718ae) bg_popup_sub_pane_cp09

0x6025,	// (0x000718bb) find_pane_cp01_ParamLimits

0x6025,	// (0x000718bb) find_pane_cp01

0xd7be,	// (0x00079054) grid_afind_control_pane_ParamLimits

0xd7be,	// (0x00079054) grid_afind_control_pane

0x6032,	// (0x000718c8) grid_afind_pane_ParamLimits

0x6032,	// (0x000718c8) grid_afind_pane

0x6054,	// (0x000718ea) cell_afind_pane_ParamLimits

0x6054,	// (0x000718ea) cell_afind_pane

0xcc4c,	// (0x000784e2) afind_page_pane_g1

0x60bb,	// (0x00071951) afind_page_pane_g2

0x60c4,	// (0x0007195a) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007b200) afind_page_pane_g

0x60cd,	// (0x00071963) afind_page_pane_t1

0xd7d2,	// (0x00079068) cell_afind_grid_control_pane_ParamLimits

0xd7d2,	// (0x00079068) cell_afind_grid_control_pane

0xd5aa,	// (0x00078e40) bg_button_pane_cp69_ParamLimits

0xd5aa,	// (0x00078e40) bg_button_pane_cp69

0x60ed,	// (0x00071983) cell_afind_pane_g1_ParamLimits

0x60ed,	// (0x00071983) cell_afind_pane_g1

0x60fa,	// (0x00071990) cell_afind_pane_t1_ParamLimits

0x60fa,	// (0x00071990) cell_afind_pane_t1

0xaa26,	// (0x000762bc) bg_button_pane_cp72

0xd7e1,	// (0x00079077) cell_afind_grid_control_pane_g1

0x3176,	// (0x0006ea0c) aid_image_placing_area_ParamLimits

0x3176,	// (0x0006ea0c) aid_image_placing_area

0xd266,	// (0x00078afc) field_vitu_entry_pane_g1_ParamLimits

0xd266,	// (0x00078afc) field_vitu_entry_pane_g1

0xd272,	// (0x00078b08) field_vitu_entry_pane_g2_ParamLimits

0xd272,	// (0x00078b08) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007b0b1) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007b0b1) field_vitu_entry_pane_g

0x52ae,	// (0x00070b44) cell_vitu_itu_pane_g1_ParamLimits

0x52f0,	// (0x00070b86) cell_vitu_itu_pane_t3_ParamLimits

0x52f0,	// (0x00070b86) cell_vitu_itu_pane_t3

0xd548,	// (0x00078dde) mp4_progress_pane_t1_ParamLimits

0xd561,	// (0x00078df7) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007b146) mp4_progress_pane_t_ParamLimits

0xd582,	// (0x00078e18) mup_progress_pane_cp04_ParamLimits

0x5fd1,	// (0x00071867) main_myfav_hc_pane_t5_ParamLimits

0x5fd1,	// (0x00071867) main_myfav_hc_pane_t5

0x9478,	// (0x00074d0e) aid_zoom_text_primary

0x036b,	// (0x0006bc01) popup_adpt_find_window_ParamLimits

0x94ca,	// (0x00074d60) main_cam_set_pane

0x5a0f,	// (0x000712a5) cam4_zoom_pane_ParamLimits

0x5a0f,	// (0x000712a5) cam4_zoom_pane

0x610c,	// (0x000719a2) main_cam_set_pane_g1_ParamLimits

0x610c,	// (0x000719a2) main_cam_set_pane_g1

0x611a,	// (0x000719b0) main_cam_set_pane_g2_ParamLimits

0x611a,	// (0x000719b0) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007b207) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007b207) main_cam_set_pane_g

0x613b,	// (0x000719d1) main_cam_set_pane_t1_ParamLimits

0x613b,	// (0x000719d1) main_cam_set_pane_t1

0x6156,	// (0x000719ec) main_cset_listscroll_pane_ParamLimits

0x6156,	// (0x000719ec) main_cset_listscroll_pane

0x6176,	// (0x00071a0c) main_cset_slider_pane_ParamLimits

0x6176,	// (0x00071a0c) main_cset_slider_pane

0xd7f2,	// (0x00079088) main_cset_list_pane_ParamLimits

0xd7f2,	// (0x00079088) main_cset_list_pane

0xd802,	// (0x00079098) scroll_pane_cp028

0x619c,	// (0x00071a32) aid_area_touch_slider

0x61b8,	// (0x00071a4e) cset_slider_pane

0x61e2,	// (0x00071a78) main_cset_slider_pane_g1

0x61f7,	// (0x00071a8d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007b20c) main_cset_slider_pane_g

0xd83b,	// (0x000790d1) main_cset_slider_pane_t1

0x62b3,	// (0x00071b49) main_cset_slider_pane_t2

0x62cd,	// (0x00071b63) main_cset_slider_pane_t3

0x62e7,	// (0x00071b7d) main_cset_slider_pane_t4

0x6301,	// (0x00071b97) main_cset_slider_pane_t5

0x631b,	// (0x00071bb1) main_cset_slider_pane_t6

0x6330,	// (0x00071bc6) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007b231) main_cset_slider_pane_t

0x6434,	// (0x00071cca) cset_list_set_pane_ParamLimits

0x6434,	// (0x00071cca) cset_list_set_pane

0x6446,	// (0x00071cdc) aid_position_infowindow_above

0x644e,	// (0x00071ce4) aid_position_infowindow_below

0xa5e7,	// (0x00075e7d) cset_list_set_pane_g1_ParamLimits

0xa5e7,	// (0x00075e7d) cset_list_set_pane_g1

0xa5f3,	// (0x00075e89) cset_list_set_pane_g3_ParamLimits

0xa5f3,	// (0x00075e89) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007b250) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007b250) cset_list_set_pane_g

0xa602,	// (0x00075e98) cset_list_set_pane_t1_ParamLimits

0xa602,	// (0x00075e98) cset_list_set_pane_t1

0xa574,	// (0x00075e0a) list_highlight_pane_cp021_ParamLimits

0xa574,	// (0x00075e0a) list_highlight_pane_cp021

0xb576,	// (0x00076e0c) cset_slider_pane_g1

0xb588,	// (0x00076e1e) cset_slider_pane_g2

0xb57f,	// (0x00076e15) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007b255) cset_slider_pane_g

0x9e56,	// (0x000756ec) aid_area_touch_cam4_zoom

0x9e5e,	// (0x000756f4) cam4_zoom_cont_pane

0x9e66,	// (0x000756fc) cam4_zoom_pane_g1

0x9e6e,	// (0x00075704) cam4_zoom_pane_g2

0x6456,	// (0x00071cec) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007b25c) cam4_zoom_pane_g

0x9e76,	// (0x0007570c) cam4_zoom_cont_pane_g1

0x9e7f,	// (0x00075715) cam4_zoom_cont_pane_g2

0x9e88,	// (0x0007571e) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007b263) cam4_zoom_cont_pane_g

0x58cf,	// (0x00071165) call4_image_pane_ParamLimits

0x58cf,	// (0x00071165) call4_image_pane

0xd5b6,	// (0x00078e4c) call4_windows_conf_pane_ParamLimits

0xd5f7,	// (0x00078e8d) popup_call4_audio_in_window_ParamLimits

0xd5f7,	// (0x00078e8d) popup_call4_audio_in_window

0x9452,	// (0x00074ce8) bg_popup_call2_act_pane_cp02

0xd66d,	// (0x00078f03) call4_list_conf_pane

0xcc4c,	// (0x000784e2) call4_image_pane_g1

0xcc4c,	// (0x000784e2) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007af72) call4_image_pane_g

0xd8db,	// (0x00079171) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8db,	// (0x00079171) list_single_graphic_popup_conf4_pane

0x9452,	// (0x00074ce8) list_highlight_pane_cp022

0xd8ee,	// (0x00079184) list_single_graphic_popup_conf4_pane_g1

0xb147,	// (0x000769dd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007b26a) list_single_graphic_popup_conf4_pane_g

0xd8f6,	// (0x0007918c) list_single_graphic_popup_conf4_pane_t1

0x154e,	// (0x0006cde4) popup_vtel_slider_window_ParamLimits

0x154e,	// (0x0006cde4) popup_vtel_slider_window

0xd598,	// (0x00078e2e) dialer2_ne_pane_t2_ParamLimits

0xd598,	// (0x00078e2e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007b14b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007b14b) dialer2_ne_pane_t

0xca25,	// (0x000782bb) bg_popup_sub_pane_cp010_ParamLimits

0xca25,	// (0x000782bb) bg_popup_sub_pane_cp010

0x645e,	// (0x00071cf4) popup_vtel_slider_window_g1_ParamLimits

0x645e,	// (0x00071cf4) popup_vtel_slider_window_g1

0x6471,	// (0x00071d07) popup_vtel_slider_window_g2_ParamLimits

0x6471,	// (0x00071d07) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007b26f) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007b26f) popup_vtel_slider_window_g

0x64c7,	// (0x00071d5d) vtel_slider_pane_ParamLimits

0x64c7,	// (0x00071d5d) vtel_slider_pane

0x64e9,	// (0x00071d7f) vtel_slider_pane_g1_ParamLimits

0x64e9,	// (0x00071d7f) vtel_slider_pane_g1

0x64fd,	// (0x00071d93) vtel_slider_pane_g2_ParamLimits

0x64fd,	// (0x00071d93) vtel_slider_pane_g2

0x6515,	// (0x00071dab) vtel_slider_pane_g3_ParamLimits

0x6515,	// (0x00071dab) vtel_slider_pane_g3

0x64e9,	// (0x00071d7f) vtel_slider_pane_g4_ParamLimits

0x64e9,	// (0x00071d7f) vtel_slider_pane_g4

0x652b,	// (0x00071dc1) vtel_slider_pane_g5_ParamLimits

0x652b,	// (0x00071dc1) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007b278) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007b278) vtel_slider_pane_g

0x94ca,	// (0x00074d60) main_gallery2_pane

0x5c0f,	// (0x000714a5) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c0f,	// (0x000714a5) aid_size_row_itut2_dropdow_list

0x5c9b,	// (0x00071531) grid_vitu2_function_top_pane_ParamLimits

0x5c9b,	// (0x00071531) grid_vitu2_function_top_pane

0x5d05,	// (0x0007159b) popup_vitu2_dropdown_list_window_ParamLimits

0x5d05,	// (0x0007159b) popup_vitu2_dropdown_list_window

0x5d2e,	// (0x000715c4) popup_vitu2_match_list_window

0x654f,	// (0x00071de5) cell_vitu2_function_top_pane_ParamLimits

0x654f,	// (0x00071de5) cell_vitu2_function_top_pane

0x6567,	// (0x00071dfd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6567,	// (0x00071dfd) cell_vitu2_function_top_pane_cp01

0x6583,	// (0x00071e19) cell_vitu2_function_top_wide_pane_ParamLimits

0x6583,	// (0x00071e19) cell_vitu2_function_top_wide_pane

0x94ca,	// (0x00074d60) bg_button_pane_cp012

0x659f,	// (0x00071e35) cell_vitu2_function_top_pane_g1

0x9e91,	// (0x00075727) bg_button_pane_cp013_ParamLimits

0x9e91,	// (0x00075727) bg_button_pane_cp013

0x65b3,	// (0x00071e49) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65b3,	// (0x00071e49) cell_vitu2_function_top_wide_pane_g1

0x94ca,	// (0x00074d60) bg_popup_sub_pane_cp20

0x65cb,	// (0x00071e61) list_vitu2_match_list_pane

0xd6e8,	// (0x00078f7e) bg_popup_sub_pane_cp20_g1

0xd6f0,	// (0x00078f86) bg_popup_sub_pane_cp20_g2

0xac2d,	// (0x000764c3) bg_popup_sub_pane_cp20_g3

0xd6f8,	// (0x00078f8e) bg_popup_sub_pane_cp20_g4

0xac0d,	// (0x000764a3) bg_popup_sub_pane_cp20_g5

0xd90c,	// (0x000791a2) bg_popup_sub_pane_cp20_g6

0xd708,	// (0x00078f9e) bg_popup_sub_pane_cp20_g7

0xd710,	// (0x00078fa6) bg_popup_sub_pane_cp20_g8

0xd718,	// (0x00078fae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007b283) bg_popup_sub_pane_cp20_g

0x9ead,	// (0x00075743) list_vitu2_match_list_item_pane_ParamLimits

0x9ead,	// (0x00075743) list_vitu2_match_list_item_pane

0x9ebf,	// (0x00075755) list_vitu2_match_list_item_pane_t1

0x94d8,	// (0x00074d6e) bg_popup_sub_pane_cp21

0x9ecd,	// (0x00075763) grid_vitu2_dropdown_list_pane

0x6639,	// (0x00071ecf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6639,	// (0x00071ecf) cell_vitu2_dropdown_list_char_pane

0x665a,	// (0x00071ef0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x665a,	// (0x00071ef0) cell_vitu2_dropdown_list_ctrl_pane

0xd914,	// (0x000791aa) cell_vitu2_dropdown_list_char_pane_g1

0xd91d,	// (0x000791b3) cell_vitu2_dropdown_list_char_pane_g2

0xd926,	// (0x000791bc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007b2a0) cell_vitu2_dropdown_list_char_pane_g

0x6686,	// (0x00071f1c) cell_vitu2_dropdown_list_char_pane_t1

0x6694,	// (0x00071f2a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6694,	// (0x00071f2a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66a1,	// (0x00071f37) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66a1,	// (0x00071f37) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66ae,	// (0x00071f44) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66ae,	// (0x00071f44) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66bb,	// (0x00071f51) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66bb,	// (0x00071f51) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d65,	// (0x000755fb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d65,	// (0x000755fb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007b2a7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007b2a7) cell_vitu2_dropdown_list_ctrl_pane_g

0x66d7,	// (0x00071f6d) aid_size_cell_gallery2_ParamLimits

0x66d7,	// (0x00071f6d) aid_size_cell_gallery2

0x66f5,	// (0x00071f8b) grid_gallery2_pane_ParamLimits

0x66f5,	// (0x00071f8b) grid_gallery2_pane

0x670f,	// (0x00071fa5) scroll_pane_cp029_ParamLimits

0x670f,	// (0x00071fa5) scroll_pane_cp029

0x671b,	// (0x00071fb1) cell_gallery2_pane_ParamLimits

0x671b,	// (0x00071fb1) cell_gallery2_pane

0xd92f,	// (0x000791c5) cell_gallery2_pane_g2

0x6777,	// (0x0007200d) cell_gallery2_pane_g3

0xd937,	// (0x000791cd) cell_gallery2_pane_g4

0xd93f,	// (0x000791d5) cell_gallery2_pane_g5

0xa4ed,	// (0x00075d83) grid_highlight_pane_cp10

0x5d2e,	// (0x000715c4) popup_vitu2_match_list_window_ParamLimits

0x5d45,	// (0x000715db) popup_vitu2_query_window_ParamLimits

0x5d45,	// (0x000715db) popup_vitu2_query_window

0x94d8,	// (0x00074d6e) bg_vitu2_candi_button_pane

0xd914,	// (0x000791aa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91d,	// (0x000791b3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd926,	// (0x000791bc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x677f,	// (0x00072015) bg_button_pane_cp015

0x6791,	// (0x00072027) bg_button_pane_cp016

0x67a4,	// (0x0007203a) bg_button_pane_cp017

0xc838,	// (0x000780ce) bg_popup_sub_pane_cp22

0xd947,	// (0x000791dd) popup_vitu2_query_window_g1

0x67e9,	// (0x0007207f) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007b2b2) popup_vitu2_query_window_g

0x6808,	// (0x0007209e) popup_vitu2_query_window_t1_ParamLimits

0x6808,	// (0x0007209e) popup_vitu2_query_window_t1

0x683d,	// (0x000720d3) popup_vitu2_query_window_t2_ParamLimits

0x683d,	// (0x000720d3) popup_vitu2_query_window_t2

0x684f,	// (0x000720e5) popup_vitu2_query_window_t3_ParamLimits

0x684f,	// (0x000720e5) popup_vitu2_query_window_t3

0x6877,	// (0x0007210d) popup_vitu2_query_window_t4_ParamLimits

0x6877,	// (0x0007210d) popup_vitu2_query_window_t4

0x6898,	// (0x0007212e) popup_vitu2_query_window_t5_ParamLimits

0x6898,	// (0x0007212e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007b2b9) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007b2b9) popup_vitu2_query_window_t

0xd7ea,	// (0x00079080) main_cset_text_pane

0x619c,	// (0x00071a32) aid_area_touch_slider_ParamLimits

0x61b8,	// (0x00071a4e) cset_slider_pane_ParamLimits

0x61e2,	// (0x00071a78) main_cset_slider_pane_g1_ParamLimits

0x61f7,	// (0x00071a8d) main_cset_slider_pane_g2_ParamLimits

0xd80b,	// (0x000790a1) main_cset_slider_pane_g3_ParamLimits

0xd80b,	// (0x000790a1) main_cset_slider_pane_g3

0x620c,	// (0x00071aa2) main_cset_slider_pane_g4_ParamLimits

0x620c,	// (0x00071aa2) main_cset_slider_pane_g4

0x621b,	// (0x00071ab1) main_cset_slider_pane_g5_ParamLimits

0x621b,	// (0x00071ab1) main_cset_slider_pane_g5

0x6227,	// (0x00071abd) main_cset_slider_pane_g6_ParamLimits

0x6227,	// (0x00071abd) main_cset_slider_pane_g6

0xf976,	// (0x0007b20c) main_cset_slider_pane_g_ParamLimits

0xd83b,	// (0x000790d1) main_cset_slider_pane_t1_ParamLimits

0x62b3,	// (0x00071b49) main_cset_slider_pane_t2_ParamLimits

0x62cd,	// (0x00071b63) main_cset_slider_pane_t3_ParamLimits

0x62e7,	// (0x00071b7d) main_cset_slider_pane_t4_ParamLimits

0x6301,	// (0x00071b97) main_cset_slider_pane_t5_ParamLimits

0x631b,	// (0x00071bb1) main_cset_slider_pane_t6_ParamLimits

0x6330,	// (0x00071bc6) main_cset_slider_pane_t7_ParamLimits

0x635a,	// (0x00071bf0) main_cset_slider_pane_t8_ParamLimits

0x635a,	// (0x00071bf0) main_cset_slider_pane_t8

0x6382,	// (0x00071c18) main_cset_slider_pane_t9_ParamLimits

0x6382,	// (0x00071c18) main_cset_slider_pane_t9

0x63aa,	// (0x00071c40) main_cset_slider_pane_t10_ParamLimits

0x63aa,	// (0x00071c40) main_cset_slider_pane_t10

0x63d2,	// (0x00071c68) main_cset_slider_pane_t11_ParamLimits

0x63d2,	// (0x00071c68) main_cset_slider_pane_t11

0x63fa,	// (0x00071c90) main_cset_slider_pane_t12_ParamLimits

0x63fa,	// (0x00071c90) main_cset_slider_pane_t12

0x6417,	// (0x00071cad) main_cset_slider_pane_t13_ParamLimits

0x6417,	// (0x00071cad) main_cset_slider_pane_t13

0xf99b,	// (0x0007b231) main_cset_slider_pane_t_ParamLimits

0x9452,	// (0x00074ce8) bg_popup_sub_pane_cp011

0xd953,	// (0x000791e9) main_cset_text_pane_g1

0xd95b,	// (0x000791f1) main_cset_text_pane_t1

0xd969,	// (0x000791ff) main_cset_text_pane_t2

0xd977,	// (0x0007920d) main_cset_text_pane_t3

0xd985,	// (0x0007921b) main_cset_text_pane_t4

0xd993,	// (0x00079229) main_cset_text_pane_t5

0xd9a1,	// (0x00079237) main_cset_text_pane_t6

0xd9af,	// (0x00079245) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007b2c8) main_cset_text_pane_t

0x94d8,	// (0x00074d6e) main_cam4_burst_pane

0x94d8,	// (0x00074d6e) main_cam5_pane

0x60db,	// (0x00071971) bg_button_pane_cp019

0x60e4,	// (0x0007197a) bg_button_pane_cp020

0xd817,	// (0x000790ad) main_cset_slider_pane_g7_ParamLimits

0xd817,	// (0x000790ad) main_cset_slider_pane_g7

0xd823,	// (0x000790b9) main_cset_slider_pane_g8_ParamLimits

0xd823,	// (0x000790b9) main_cset_slider_pane_g8

0x623b,	// (0x00071ad1) main_cset_slider_pane_g9_ParamLimits

0x623b,	// (0x00071ad1) main_cset_slider_pane_g9

0x6247,	// (0x00071add) main_cset_slider_pane_g10_ParamLimits

0x6247,	// (0x00071add) main_cset_slider_pane_g10

0x6253,	// (0x00071ae9) main_cset_slider_pane_g11_ParamLimits

0x6253,	// (0x00071ae9) main_cset_slider_pane_g11

0x625f,	// (0x00071af5) main_cset_slider_pane_g12_ParamLimits

0x625f,	// (0x00071af5) main_cset_slider_pane_g12

0x626b,	// (0x00071b01) main_cset_slider_pane_g13_ParamLimits

0x626b,	// (0x00071b01) main_cset_slider_pane_g13

0x6277,	// (0x00071b0d) main_cset_slider_pane_g14_ParamLimits

0x6277,	// (0x00071b0d) main_cset_slider_pane_g14

0x6283,	// (0x00071b19) main_cset_slider_pane_g15_ParamLimits

0x6283,	// (0x00071b19) main_cset_slider_pane_g15

0xd869,	// (0x000790ff) main_cset_slider_pane_t14_ParamLimits

0xd869,	// (0x000790ff) main_cset_slider_pane_t14

0xd8a2,	// (0x00079138) main_cset_slider_pane_t15_ParamLimits

0xd8a2,	// (0x00079138) main_cset_slider_pane_t15

0x690f,	// (0x000721a5) aid_cam4_burst_size_cell_ParamLimits

0x690f,	// (0x000721a5) aid_cam4_burst_size_cell

0x692f,	// (0x000721c5) grid_cam4_burst_pane_ParamLimits

0x692f,	// (0x000721c5) grid_cam4_burst_pane

0x6967,	// (0x000721fd) linegrid_cam4_burst_pane_ParamLimits

0x6967,	// (0x000721fd) linegrid_cam4_burst_pane

0xd9bd,	// (0x00079253) scroll_pane_cp30_ParamLimits

0xd9bd,	// (0x00079253) scroll_pane_cp30

0x698b,	// (0x00072221) cell_cam4_burst_pane_ParamLimits

0x698b,	// (0x00072221) cell_cam4_burst_pane

0xd9c9,	// (0x0007925f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c9,	// (0x0007925f) linegrid_cam4_burst_pane_g1

0x69d8,	// (0x0007226e) linegrid_cam4_burst_pane_g2_ParamLimits

0x69d8,	// (0x0007226e) linegrid_cam4_burst_pane_g2

0xd9d6,	// (0x0007926c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d6,	// (0x0007926c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007b2d7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007b2d7) linegrid_cam4_burst_pane_g

0x69e9,	// (0x0007227f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69e9,	// (0x0007227f) linegrid_cam4_burst_pane_g3_copy1

0xd9e3,	// (0x00079279) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e3,	// (0x00079279) linegrid_cam4_burst_pane_g4

0x6a03,	// (0x00072299) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a03,	// (0x00072299) linegrid_cam4_burst_pane_g5

0x6a14,	// (0x000722aa) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a14,	// (0x000722aa) linegrid_cam4_burst_pane_g6

0xd9f0,	// (0x00079286) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f0,	// (0x00079286) linegrid_cam4_burst_pane_g7

0x6a2b,	// (0x000722c1) cell_cam4_burst_pane_g1

0xda09,	// (0x0007929f) main_cam5_pane_t1_ParamLimits

0xda09,	// (0x0007929f) main_cam5_pane_t1

0xda1b,	// (0x000792b1) main_cam5_pane_t2_ParamLimits

0xda1b,	// (0x000792b1) main_cam5_pane_t2

0xda2d,	// (0x000792c3) main_cam5_pane_t3_ParamLimits

0xda2d,	// (0x000792c3) main_cam5_pane_t3

0xda3f,	// (0x000792d5) main_cam5_pane_t4_ParamLimits

0xda3f,	// (0x000792d5) main_cam5_pane_t4

0xda57,	// (0x000792ed) main_cam5_pane_t5_ParamLimits

0xda57,	// (0x000792ed) main_cam5_pane_t5

0xda6b,	// (0x00079301) main_cam5_pane_t6_ParamLimits

0xda6b,	// (0x00079301) main_cam5_pane_t6

0xda7f,	// (0x00079315) main_cam5_pane_t7_ParamLimits

0xda7f,	// (0x00079315) main_cam5_pane_t7

0xda91,	// (0x00079327) main_cam5_pane_t8_ParamLimits

0xda91,	// (0x00079327) main_cam5_pane_t8

0xdaad,	// (0x00079343) main_cam5_pane_t9_ParamLimits

0xdaad,	// (0x00079343) main_cam5_pane_t9

0xdabf,	// (0x00079355) main_cam5_pane_t10_ParamLimits

0xdabf,	// (0x00079355) main_cam5_pane_t10

0xdad1,	// (0x00079367) main_cam5_pane_t11_ParamLimits

0xdad1,	// (0x00079367) main_cam5_pane_t11

0xdae3,	// (0x00079379) main_cam5_pane_t12_ParamLimits

0xdae3,	// (0x00079379) main_cam5_pane_t12

0xdaf8,	// (0x0007938e) main_cam5_pane_t13_ParamLimits

0xdaf8,	// (0x0007938e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007b2e3) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007b2e3) main_cam5_pane_t

0x03ed,	// (0x0006bc83) popup_scut_keymap_window_ParamLimits

0x03ed,	// (0x0006bc83) popup_scut_keymap_window

0x6a3e,	// (0x000722d4) aid_size_cell_brow_shortcut

0xa4ed,	// (0x00075d83) bg_popup_window_pane_cp010

0x6a4a,	// (0x000722e0) grid_scut_pane

0x6a56,	// (0x000722ec) cell_scut_pane_ParamLimits

0x6a56,	// (0x000722ec) cell_scut_pane

0x6a6d,	// (0x00072303) cell_scut_pane_g1

0xdb15,	// (0x000793ab) cell_scut_pane_t1

0xdb24,	// (0x000793ba) cell_scut_pane_t2

0x6a76,	// (0x0007230c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007b2fe) cell_scut_pane_t

0x47a4,	// (0x0007003a) main_mup3_pane_g8_ParamLimits

0x47a4,	// (0x0007003a) main_mup3_pane_g8

0x5c27,	// (0x000714bd) area_vitu2_query_pane_ParamLimits

0x5c27,	// (0x000714bd) area_vitu2_query_pane

0x67b7,	// (0x0007204d) input_focus_pane_cp08

0xdb33,	// (0x000793c9) area_vitu2_query_pane_g1

0x6a84,	// (0x0007231a) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007b305) area_vitu2_query_pane_g

0x6a95,	// (0x0007232b) area_vitu2_query_pane_t1_ParamLimits

0x6a95,	// (0x0007232b) area_vitu2_query_pane_t1

0x6aa9,	// (0x0007233f) area_vitu2_query_pane_t2_ParamLimits

0x6aa9,	// (0x0007233f) area_vitu2_query_pane_t2

0x6abd,	// (0x00072353) area_vitu2_query_pane_t3_ParamLimits

0x6abd,	// (0x00072353) area_vitu2_query_pane_t3

0xa617,	// (0x00075ead) area_vitu2_query_pane_t4_ParamLimits

0xa617,	// (0x00075ead) area_vitu2_query_pane_t4

0xa63f,	// (0x00075ed5) area_vitu2_query_pane_t5_ParamLimits

0xa63f,	// (0x00075ed5) area_vitu2_query_pane_t5

0xa667,	// (0x00075efd) area_vitu2_query_pane_t6_ParamLimits

0xa667,	// (0x00075efd) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007b30a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007b30a) area_vitu2_query_pane_t

0x6ae5,	// (0x0007237b) bg_button_pane_cp018

0x6af3,	// (0x00072389) bg_button_pane_cp021

0x6aff,	// (0x00072395) bg_button_pane_cp022

0x6b0e,	// (0x000723a4) input_focus_pane_cp09

0xb283,	// (0x00076b19) aid_size_touch_mv_arrow_left

0xb2ac,	// (0x00076b42) aid_size_touch_mv_arrow_right

0x629b,	// (0x00071b31) main_cset_slider_pane_g16_ParamLimits

0x629b,	// (0x00071b31) main_cset_slider_pane_g16

0x62a7,	// (0x00071b3d) main_cset_slider_pane_g17_ParamLimits

0x62a7,	// (0x00071b3d) main_cset_slider_pane_g17

0x6a2b,	// (0x000722c1) cell_cam4_burst_pane_g1_ParamLimits

0x9452,	// (0x00074ce8) compa_mode_pane

0x6481,	// (0x00071d17) popup_vtel_slider_window_g3_ParamLimits

0x6481,	// (0x00071d17) popup_vtel_slider_window_g3

0x6498,	// (0x00071d2e) popup_vtel_slider_window_g4_ParamLimits

0x6498,	// (0x00071d2e) popup_vtel_slider_window_g4

0x64af,	// (0x00071d45) popup_vtel_slider_window_t1_ParamLimits

0x64af,	// (0x00071d45) popup_vtel_slider_window_t1

0x94d8,	// (0x00074d6e) main_cl_pane

0x99d5,	// (0x0007526b) popup_imed_adjust2_window_ParamLimits

0xc838,	// (0x000780ce) bg_tb_trans_pane_cp05_ParamLimits

0xd19b,	// (0x00078a31) popup_imed_adjust2_window_g1_ParamLimits

0xd1aa,	// (0x00078a40) popup_imed_adjust2_window_g2_ParamLimits

0xd1aa,	// (0x00078a40) popup_imed_adjust2_window_g2

0xd1b6,	// (0x00078a4c) popup_imed_adjust2_window_g3_ParamLimits

0xd1b6,	// (0x00078a4c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007b075) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007b075) popup_imed_adjust2_window_g

0xd1c2,	// (0x00078a58) popup_imed_adjust2_window_t1_ParamLimits

0xd1da,	// (0x00078a70) slider_imed_adjust_pane_ParamLimits

0xd1ee,	// (0x00078a84) slider_imed_adjust_pane_g1_ParamLimits

0xd1fe,	// (0x00078a94) slider_imed_adjust_pane_g2_ParamLimits

0xd20e,	// (0x00078aa4) slider_imed_adjust_pane_g3_ParamLimits

0xd21f,	// (0x00078ab5) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007b07c) slider_imed_adjust_pane_g_ParamLimits

0x59b0,	// (0x00071246) aid_touch_area_cam4_ParamLimits

0x59b0,	// (0x00071246) aid_touch_area_cam4

0x9d49,	// (0x000755df) battery_pane_cp01

0x5a7f,	// (0x00071315) main_camera4_pane_g6_ParamLimits

0x5a7f,	// (0x00071315) main_camera4_pane_g6

0x5aa9,	// (0x0007133f) main_camera4_pane_t2_ParamLimits

0x5aa9,	// (0x0007133f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007b17f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007b17f) main_camera4_pane_t

0x5ade,	// (0x00071374) aid_touch_area_vid4_ParamLimits

0x5ade,	// (0x00071374) aid_touch_area_vid4

0x5b32,	// (0x000713c8) main_video4_pane_g5_ParamLimits

0x5b32,	// (0x000713c8) main_video4_pane_g5

0x5b57,	// (0x000713ed) vid4_progress_pane_ParamLimits

0x5b57,	// (0x000713ed) vid4_progress_pane

0xd82f,	// (0x000790c5) main_cset_slider_pane_g18_ParamLimits

0xd82f,	// (0x000790c5) main_cset_slider_pane_g18

0xd9fd,	// (0x00079293) cell_cam4_burst_pane_g2_ParamLimits

0xd9fd,	// (0x00079293) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007b2de) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007b2de) cell_cam4_burst_pane_g

0xa328,	// (0x00075bbe) bg_cl_pane_ParamLimits

0xa328,	// (0x00075bbe) bg_cl_pane

0x6b1d,	// (0x000723b3) cl_header_pane_ParamLimits

0x6b1d,	// (0x000723b3) cl_header_pane

0x6b31,	// (0x000723c7) cl_listscroll_pane_ParamLimits

0x6b31,	// (0x000723c7) cl_listscroll_pane

0xdb3f,	// (0x000793d5) bg_cl_pane_g1

0xdb47,	// (0x000793dd) bg_cl_pane_g2

0xdb4f,	// (0x000793e5) bg_cl_pane_g3

0xdb57,	// (0x000793ed) bg_cl_pane_g4

0xdb5f,	// (0x000793f5) bg_cl_pane_g5

0xdb67,	// (0x000793fd) bg_cl_pane_g6

0xdb6f,	// (0x00079405) bg_cl_pane_g7

0xdb77,	// (0x0007940d) bg_cl_pane_g8

0xdb7f,	// (0x00079415) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007b319) bg_cl_pane_g

0x6b41,	// (0x000723d7) aid_height_cl_leading_ParamLimits

0x6b41,	// (0x000723d7) aid_height_cl_leading

0x6b4d,	// (0x000723e3) aid_height_cl_text_ParamLimits

0x6b4d,	// (0x000723e3) aid_height_cl_text

0xa574,	// (0x00075e0a) bg_cl_header_pane_ParamLimits

0xa574,	// (0x00075e0a) bg_cl_header_pane

0x6b6c,	// (0x00072402) cl_header_pane_g1_ParamLimits

0x6b6c,	// (0x00072402) cl_header_pane_g1

0x6b82,	// (0x00072418) cl_header_pane_t1_ParamLimits

0x6b82,	// (0x00072418) cl_header_pane_t1

0xdb87,	// (0x0007941d) cl_list_pane

0xd802,	// (0x00079098) hc_scroll_pane_cp01

0xac0d,	// (0x000764a3) bg_cl_header_pane_g1

0xd6e8,	// (0x00078f7e) bg_cl_header_pane_g2

0xac2d,	// (0x000764c3) bg_cl_header_pane_g3

0xd6f8,	// (0x00078f8e) bg_cl_header_pane_g4

0xd6f0,	// (0x00078f86) bg_cl_header_pane_g5

0xd90c,	// (0x000791a2) bg_cl_header_pane_g6

0xd710,	// (0x00078fa6) bg_cl_header_pane_g7

0xd718,	// (0x00078fae) bg_cl_header_pane_g8

0xd708,	// (0x00078f9e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007b32c) bg_cl_header_pane_g

0x6b9b,	// (0x00072431) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b9b,	// (0x00072431) hc_cl_list_double_graphic_heading_pane

0x6bac,	// (0x00072442) hc_cl_list_single_graphic_pane_ParamLimits

0x6bac,	// (0x00072442) hc_cl_list_single_graphic_pane

0x6bc2,	// (0x00072458) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bc2,	// (0x00072458) hc_cl_list_single_graphic_pane_g1

0x6bce,	// (0x00072464) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bce,	// (0x00072464) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007b33f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007b33f) hc_cl_list_single_graphic_pane_g

0x6be2,	// (0x00072478) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6be2,	// (0x00072478) hc_cl_list_single_graphic_pane_t1

0x6bc2,	// (0x00072458) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bc2,	// (0x00072458) hc_cl_list_double_graphic_heading_pane_g1

0x6bf7,	// (0x0007248d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6bf7,	// (0x0007248d) hc_cl_list_double_graphic_heading_pane_g2

0x6c0b,	// (0x000724a1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c0b,	// (0x000724a1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007b344) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007b344) hc_cl_list_double_graphic_heading_pane_g

0x6c1f,	// (0x000724b5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c1f,	// (0x000724b5) hc_cl_list_double_graphic_heading_pane_t1

0x6c34,	// (0x000724ca) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c34,	// (0x000724ca) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007b34b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007b34b) hc_cl_list_double_graphic_heading_pane_t

0x9edd,	// (0x00075773) vid4_progress_pane_g1

0x9eed,	// (0x00075783) vid4_progress_pane_g2

0x6c49,	// (0x000724df) vid4_progress_pane_g3

0x9efd,	// (0x00075793) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007b350) vid4_progress_pane_g

0x6c5b,	// (0x000724f1) vid4_progress_pane_t1

0x9f15,	// (0x000757ab) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007b35b) vid4_progress_pane_t

0x6c73,	// (0x00072509) wait_bar_pane_cp07

0xca33,	// (0x000782c9) blid_firmament_pane_ParamLimits

0xca76,	// (0x0007830c) popup_blid_sat_info2_window_g1

0xcaa6,	// (0x0007833c) popup_blid_sat_info2_window_t3

0xcab4,	// (0x0007834a) popup_blid_sat_info2_window_t4

0xcac2,	// (0x00078358) popup_blid_sat_info2_window_t5

0xcad0,	// (0x00078366) popup_blid_sat_info2_window_t6

0xcae0,	// (0x00078376) popup_blid_sat_info2_window_t7

0xcaee,	// (0x00078384) popup_blid_sat_info2_window_t8

0xcafc,	// (0x00078392) popup_blid_sat_info2_window_t9

0xcb0a,	// (0x000783a0) popup_blid_sat_info2_window_t10

0xcbcc,	// (0x00078462) aid_firma_cardinal_ParamLimits

0xcbe0,	// (0x00078476) blid_firmament_pane_t1_ParamLimits

0xcbf7,	// (0x0007848d) blid_firmament_pane_t2_ParamLimits

0xcc0e,	// (0x000784a4) blid_firmament_pane_t3_ParamLimits

0xcc25,	// (0x000784bb) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007af69) blid_firmament_pane_t_ParamLimits

0xcc3c,	// (0x000784d2) blid_sat_info_pane_ParamLimits

0x94ca,	// (0x00074d60) main_cam_set_pane_ParamLimits

0x5068,	// (0x000708fe) aid_size_cell_colour_35_ParamLimits

0x5088,	// (0x0007091e) aid_size_cell_colour_112_ParamLimits

0x50a8,	// (0x0007093e) aid_size_cell_effect_ParamLimits

0xc838,	// (0x000780ce) bg_tb_trans_pane_cp02_ParamLimits

0xae75,	// (0x0007670b) heading_imed_pane_ParamLimits

0x50c8,	// (0x0007095e) listscroll_imed_pane_ParamLimits

0xbe5e,	// (0x000776f4) popup_call2_audio_first_window_g5_ParamLimits

0xbe5e,	// (0x000776f4) popup_call2_audio_first_window_g5

0x565b,	// (0x00070ef1) aid_size_touch_image3_arrow_left_ParamLimits

0x565b,	// (0x00070ef1) aid_size_touch_image3_arrow_left

0x5687,	// (0x00070f1d) aid_size_touch_image3_arrow_right_ParamLimits

0x5687,	// (0x00070f1d) aid_size_touch_image3_arrow_right

0x9f2a,	// (0x000757c0) vid4_progress_pane_t3

0x53db,	// (0x00070c71) main_hwr_training_symbol_option_pane_ParamLimits

0x53db,	// (0x00070c71) main_hwr_training_symbol_option_pane

0xd488,	// (0x00078d1e) popup_hwr_training_preview_window_ParamLimits

0xd488,	// (0x00078d1e) popup_hwr_training_preview_window

0x53fb,	// (0x00070c91) hwr_training_navi_pane_g5_ParamLimits

0x53fb,	// (0x00070c91) hwr_training_navi_pane_g5

0xd6d6,	// (0x00078f6c) popup_char_count_window

0x94ca,	// (0x00074d60) bg_popup_sub_pane_cp20_ParamLimits

0x65cb,	// (0x00071e61) list_vitu2_match_list_pane_ParamLimits

0x65da,	// (0x00071e70) vitu2_page_scroll_pane_ParamLimits

0x65da,	// (0x00071e70) vitu2_page_scroll_pane

0xdb90,	// (0x00079426) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb90,	// (0x00079426) list_single_hwr_training_symbol_option_pane

0xdba3,	// (0x00079439) list_single_hwr_training_symbol_option_pane_g1

0xdbab,	// (0x00079441) list_single_hwr_training_symbol_option_pane_t1

0xdbb9,	// (0x0007944f) bg_button_pane_cp023

0xdbc2,	// (0x00079458) bg_button_pane_cp024

0x6cbe,	// (0x00072554) vitu2_page_scroll_pane_g1

0x6cc6,	// (0x0007255c) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007b362) vitu2_page_scroll_pane_g

0x6cce,	// (0x00072564) vitu2_page_scroll_pane_t1

0xc993,	// (0x00078229) popup_char_count_window_g1

0xdbf5,	// (0x0007948b) popup_char_count_window_g2

0xdbfe,	// (0x00079494) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007b367) popup_char_count_window_g

0xdc07,	// (0x0007949d) popup_char_count_window_t1

0x94d8,	// (0x00074d6e) main_vded2_pane

0xd187,	// (0x00078a1d) aid_size_cell_imed_line

0xd191,	// (0x00078a27) grid_imed_line_width_pane

0x9e0f,	// (0x000756a5) vid4_indicators_pane_g4

0xdc15,	// (0x000794ab) cell_imed_line_width_pane_ParamLimits

0xdc15,	// (0x000794ab) cell_imed_line_width_pane

0xdc29,	// (0x000794bf) cell_imed_line_width_pane_g1

0xd57a,	// (0x00078e10) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007b36e) cell_imed_line_width_pane_g

0x6cdd,	// (0x00072573) main_vded2_pane_g1_ParamLimits

0x6cdd,	// (0x00072573) main_vded2_pane_g1

0x6cf3,	// (0x00072589) main_vded2_pane_g2_ParamLimits

0x6cf3,	// (0x00072589) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007b373) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007b373) main_vded2_pane_g

0x6d05,	// (0x0007259b) vded2_slider_pane_ParamLimits

0x6d05,	// (0x0007259b) vded2_slider_pane

0x6d15,	// (0x000725ab) aid_size_touch_vded2_end

0x6d1f,	// (0x000725b5) aid_size_touch_vded2_playhead

0xdc32,	// (0x000794c8) aid_size_touch_vded2_start

0xdc3a,	// (0x000794d0) vded2_slider_bg_pane

0xdc43,	// (0x000794d9) vded2_slider_pane_g1

0xdc4c,	// (0x000794e2) vded2_slider_pane_g2

0x6d29,	// (0x000725bf) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007b378) vded2_slider_pane_g

0xdc54,	// (0x000794ea) vded2_slider_bg_pane_g1

0xdc5d,	// (0x000794f3) vded2_slider_bg_pane_g2

0xdc66,	// (0x000794fc) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007b37f) vded2_slider_bg_pane_g

0x2de5,	// (0x0006e67b) aid_postcard_touch_down_pane_ParamLimits

0x2de5,	// (0x0006e67b) aid_postcard_touch_down_pane

0x2dfb,	// (0x0006e691) aid_postcard_touch_up_pane_ParamLimits

0x2dfb,	// (0x0006e691) aid_postcard_touch_up_pane

0x94d8,	// (0x00074d6e) main_blid2_pane

0x99bb,	// (0x00075251) popup_blid2_search_window

0x9452,	// (0x00074ce8) blid2_gps_pane

0x9452,	// (0x00074ce8) blid2_navig_pane

0x9452,	// (0x00074ce8) blid2_search_pane

0x9452,	// (0x00074ce8) blid2_tripm_pane

0x6d34,	// (0x000725ca) blid2_search_pane_g1_ParamLimits

0x6d34,	// (0x000725ca) blid2_search_pane_g1

0x6d4e,	// (0x000725e4) blid2_search_pane_t1_ParamLimits

0x6d4e,	// (0x000725e4) blid2_search_pane_t1

0x6d60,	// (0x000725f6) aid_size_cell_blid2_gps_ParamLimits

0x6d60,	// (0x000725f6) aid_size_cell_blid2_gps

0x6d78,	// (0x0007260e) blid2_gps_pane_g1_ParamLimits

0x6d78,	// (0x0007260e) blid2_gps_pane_g1

0x6d8c,	// (0x00072622) grid_blid2_satellite_pane_ParamLimits

0x6d8c,	// (0x00072622) grid_blid2_satellite_pane

0x6da6,	// (0x0007263c) blid2_navig_pane_g1_ParamLimits

0x6da6,	// (0x0007263c) blid2_navig_pane_g1

0x6db2,	// (0x00072648) blid2_navig_pane_t1_ParamLimits

0x6db2,	// (0x00072648) blid2_navig_pane_t1

0x6dcd,	// (0x00072663) blid2_navig_pane_t2_ParamLimits

0x6dcd,	// (0x00072663) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007b386) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007b386) blid2_navig_pane_t

0x6de8,	// (0x0007267e) blid2_navig_ring_pane_ParamLimits

0x6de8,	// (0x0007267e) blid2_navig_ring_pane

0x6e01,	// (0x00072697) blid2_speed_pane_ParamLimits

0x6e01,	// (0x00072697) blid2_speed_pane

0x6e0d,	// (0x000726a3) blid2_tripm_pane_g1_ParamLimits

0x6e0d,	// (0x000726a3) blid2_tripm_pane_g1

0x6e26,	// (0x000726bc) blid2_tripm_pane_g2_ParamLimits

0x6e26,	// (0x000726bc) blid2_tripm_pane_g2

0x6e3a,	// (0x000726d0) blid2_tripm_pane_g3_ParamLimits

0x6e3a,	// (0x000726d0) blid2_tripm_pane_g3

0x6e4e,	// (0x000726e4) blid2_tripm_pane_g4_ParamLimits

0x6e4e,	// (0x000726e4) blid2_tripm_pane_g4

0x6e62,	// (0x000726f8) blid2_tripm_pane_g5_ParamLimits

0x6e62,	// (0x000726f8) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007b38b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007b38b) blid2_tripm_pane_g

0x6e88,	// (0x0007271e) blid2_tripm_pane_t1_ParamLimits

0x6e88,	// (0x0007271e) blid2_tripm_pane_t1

0x6ea3,	// (0x00072739) blid2_tripm_pane_t2_ParamLimits

0x6ea3,	// (0x00072739) blid2_tripm_pane_t2

0x6ebc,	// (0x00072752) blid2_tripm_pane_t3_ParamLimits

0x6ebc,	// (0x00072752) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007b398) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007b398) blid2_tripm_pane_t

0x6f03,	// (0x00072799) cell_blid2_satellite_pane_ParamLimits

0x6f03,	// (0x00072799) cell_blid2_satellite_pane

0x6f21,	// (0x000727b7) cell_blid2_satellite_pane_g1

0xdc6f,	// (0x00079505) cell_blid2_satellite_pane_t1

0xcc4c,	// (0x000784e2) blid2_speed_pane_g1

0xdc7d,	// (0x00079513) blid2_speed_pane_t1

0xdc8b,	// (0x00079521) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007b3a1) blid2_speed_pane_t

0xcc4c,	// (0x000784e2) blid2_navig_ring_pane_g1

0x6f2a,	// (0x000727c0) blid2_navig_ring_pane_g2

0x6f32,	// (0x000727c8) blid2_navig_ring_pane_g3

0x6f3a,	// (0x000727d0) blid2_navig_ring_pane_g4

0x6f42,	// (0x000727d8) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007b3a6) blid2_navig_ring_pane_g

0x9452,	// (0x00074ce8) bg_popup_window_pane_cp011

0xdc99,	// (0x0007952f) popup_blid2_search_window_g1

0xdca1,	// (0x00079537) popup_blid2_search_window_t1

0xdcaf,	// (0x00079545) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007b3b1) popup_blid2_search_window_t

0xab1c,	// (0x000763b2) main_browser_pane_g1

0xa328,	// (0x00075bbe) main_browser_pane_ParamLimits

0x94ca,	// (0x00074d60) bg_button_pane_cp011_ParamLimits

0x5e71,	// (0x00071707) cell_vitu2_function_pane_g1_ParamLimits

0xc838,	// (0x000780ce) bg_popup_sub_pane_cp22_ParamLimits

0x67b7,	// (0x0007204d) input_focus_pane_cp08_ParamLimits

0x67ce,	// (0x00072064) popup_vitu2_query_button_pane_ParamLimits

0x67ce,	// (0x00072064) popup_vitu2_query_button_pane

0x67df,	// (0x00072075) popup_vitu2_query_input_button_pane

0xd947,	// (0x000791dd) popup_vitu2_query_window_g1_ParamLimits

0x67e9,	// (0x0007207f) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007b2b2) popup_vitu2_query_window_g_ParamLimits

0x9452,	// (0x00074ce8) bg_button_pane_cp026

0x6f4a,	// (0x000727e0) popup_vitu2_query_input_button_pane_g1

0x9452,	// (0x00074ce8) bg_button_pane_cp025

0xdcbd,	// (0x00079553) popup_vitu2_query_button_pane_t1

0x448d,	// (0x0006fd23) main_mp3_pane_t6

0x449b,	// (0x0006fd31) popup_slider_window_cp01

0x9d73,	// (0x00075609) cam4_battery_pane

0x9dcc,	// (0x00075662) cam4_battery_pane_cp02

0x9ed5,	// (0x0007576b) cam4_battery_pane_cp01

0x9ed5,	// (0x0007576b) cam4_battery_pane_cp03

0xd58e,	// (0x00078e24) cam4_battery_pane_g1

0xcc4c,	// (0x000784e2) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007b3b6) cam4_battery_pane_g

0xcb18,	// (0x000783ae) popup_blid_sat_info2_window_t11

0xb283,	// (0x00076b19) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ac,	// (0x00076b42) aid_size_touch_mv_arrow_right_ParamLimits

0xb30a,	// (0x00076ba0) navi_pane_g1_ParamLimits

0xb316,	// (0x00076bac) navi_pane_g2_ParamLimits

0xb344,	// (0x00076bda) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007ac7b) navi_pane_g_ParamLimits

0x284d,	// (0x0006e0e3) navi_pane_mv_t1_ParamLimits

0x50d4,	// (0x0007096a) grid_imed_effect_pane_ParamLimits

0x144b,	// (0x0006cce1) aid_placing_vt_slider_lsc

0xaa6b,	// (0x00076301) aid_placing_vt_slider_prt

0xa574,	// (0x00075e0a) bg_tb_trans_pane_cp01_ParamLimits

0xcdd8,	// (0x0007866e) popup_image_details_window_g1_ParamLimits

0xcdeb,	// (0x00078681) popup_image_details_window_g2_ParamLimits

0xce00,	// (0x00078696) popup_image_details_window_g3_ParamLimits

0xce00,	// (0x00078696) popup_image_details_window_g3

0xf718,	// (0x0007afae) popup_image_details_window_g_ParamLimits

0xce14,	// (0x000786aa) popup_image_details_window_t1_ParamLimits

0xce26,	// (0x000786bc) popup_image_details_window_t2_ParamLimits

0xce3f,	// (0x000786d5) popup_image_details_window_t3_ParamLimits

0xce53,	// (0x000786e9) popup_image_details_window_t4_ParamLimits

0xce6e,	// (0x00078704) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007afb5) popup_image_details_window_t_ParamLimits

0x6b59,	// (0x000723ef) cl_header_name_pane_ParamLimits

0x6b59,	// (0x000723ef) cl_header_name_pane

0x6f52,	// (0x000727e8) cl_header_name_pane_t1_ParamLimits

0x6f52,	// (0x000727e8) cl_header_name_pane_t1

0x6f73,	// (0x00072809) cl_header_name_pane_t2_ParamLimits

0x6f73,	// (0x00072809) cl_header_name_pane_t2

0x6fb5,	// (0x0007284b) cl_header_name_pane_t3_ParamLimits

0x6fb5,	// (0x0007284b) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007b3bb) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007b3bb) cl_header_name_pane_t

0xb3d3,	// (0x00076c69) navi_pane_mv_g2_ParamLimits

0xd6b0,	// (0x00078f46) field_vitu2_entry_pane_g1_ParamLimits

0xd6bc,	// (0x00078f52) field_vitu2_entry_pane_g2_ParamLimits

0xd6c8,	// (0x00078f5e) field_vitu2_entry_pane_g3_ParamLimits

0xd6c8,	// (0x00078f5e) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007b1b1) field_vitu2_entry_pane_g_ParamLimits

0x9e44,	// (0x000756da) cell_vitu2_itu_pane_g1_ParamLimits

0x5e05,	// (0x0007169b) cell_vitu2_itu_pane_g2_ParamLimits

0x5e05,	// (0x0007169b) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007b1bd) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007b1bd) cell_vitu2_itu_pane_g

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp05_ParamLimits

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp05

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp03

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp04

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp10_ParamLimits

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp10

0x6aff,	// (0x00072395) bg_vkb2_func_pane_cp08

0x6ae5,	// (0x0007237b) bg_vkb2_func_pane_cp06

0x6af3,	// (0x00072389) bg_vkb2_func_pane_cp07

0xdbcb,	// (0x00079461) bg_vkb2_func_pane_cp11_ParamLimits

0xdbcb,	// (0x00079461) bg_vkb2_func_pane_cp11

0xdbe0,	// (0x00079476) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe0,	// (0x00079476) bg_vkb2_func_pane_cp12

0x9452,	// (0x00074ce8) bg_vkb2_func_pane_cp09

0xd6e8,	// (0x00078f7e) bg_vkb2_func_pane_g1

0xac2d,	// (0x000764c3) bg_vkb2_func_pane_g2

0xd6f0,	// (0x00078f86) bg_vkb2_func_pane_g3

0xd6f8,	// (0x00078f8e) bg_vkb2_func_pane_g4

0xd90c,	// (0x000791a2) bg_vkb2_func_pane_g5

0xd710,	// (0x00078fa6) bg_vkb2_func_pane_g6

0xd718,	// (0x00078fae) bg_vkb2_func_pane_g7

0xd708,	// (0x00078f9e) bg_vkb2_func_pane_g8

0xac0d,	// (0x000764a3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007b3c2) bg_vkb2_func_pane_g

0x6e76,	// (0x0007270c) blid2_tripm_pane_g6_ParamLimits

0x6e76,	// (0x0007270c) blid2_tripm_pane_g6

0xd540,	// (0x00078dd6) mp4_progress_pane_g1

0x6eef,	// (0x00072785) blid2_tripm_values_pane_ParamLimits

0x6eef,	// (0x00072785) blid2_tripm_values_pane

0x6fe6,	// (0x0007287c) blid2_tripm_values_pane_t1

0x6ff4,	// (0x0007288a) blid2_tripm_values_pane_t2

0x7002,	// (0x00072898) blid2_tripm_values_pane_t3

0x7010,	// (0x000728a6) blid2_tripm_values_pane_t4

0x701e,	// (0x000728b4) blid2_tripm_values_pane_t5

0x702c,	// (0x000728c2) blid2_tripm_values_pane_t6

0x703a,	// (0x000728d0) blid2_tripm_values_pane_t7

0x7048,	// (0x000728de) blid2_tripm_values_pane_t8

0x7056,	// (0x000728ec) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007b3d5) blid2_tripm_values_pane_t

0x148d,	// (0x0006cd23) call_video_pane_t1_ParamLimits

0x14ab,	// (0x0006cd41) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007ab04) call_video_pane_t_ParamLimits

0x2d20,	// (0x0006e5b6) msg_header_pane_g1_ParamLimits

0xb5bb,	// (0x00076e51) msg_header_pane_g2_ParamLimits

0xb5bb,	// (0x00076e51) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007ad1e) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007ad1e) msg_header_pane_g

0xa328,	// (0x00075bbe) main_clock2_pane_ParamLimits

0x4dd5,	// (0x0007066b) grid_clock2_toolbar_pane_ParamLimits

0x4dd5,	// (0x0007066b) grid_clock2_toolbar_pane

0x4dd5,	// (0x0007066b) listscroll_clock2_pane_ParamLimits

0x4dd5,	// (0x0007066b) listscroll_clock2_pane

0x4ec8,	// (0x0007075e) main_clock2_pane_t3_ParamLimits

0x4ec8,	// (0x0007075e) main_clock2_pane_t3

0x4eec,	// (0x00070782) main_clock2_pane_t4_ParamLimits

0x4eec,	// (0x00070782) main_clock2_pane_t4

0xdccb,	// (0x00079561) cell_clock2_toolbar_pane

0xdcd3,	// (0x00079569) cell_clock2_toolbar_pane_cp01

0xdcd3,	// (0x00079569) cell_clock2_toolbar_pane_cp02

0xdcdb,	// (0x00079571) cell_clock2_toolbar_pane_cp03

0xdce3,	// (0x00079579) list_clock2_pane

0xb1f9,	// (0x00076a8f) scroll_pane_cp10

0xdceb,	// (0x00079581) list_single_clock2_pane_ParamLimits

0xdceb,	// (0x00079581) list_single_clock2_pane

0xa4ed,	// (0x00075d83) list_highlight_pane_cp08

0xdcf8,	// (0x0007958e) list_single_clock2_pane_t1

0xdd06,	// (0x0007959c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007b3e8) list_single_clock2_pane_t

0x9452,	// (0x00074ce8) bg_button_pane_cp10

0xdd14,	// (0x000795aa) cell_clock2_toolbar_pane_g1

0x2d71,	// (0x0006e607) aid_main_viewer_pane_g1_ParamLimits

0x2d71,	// (0x0006e607) aid_main_viewer_pane_g1

0x2d7f,	// (0x0006e615) aid_main_viewer_pane_g2_ParamLimits

0x2d7f,	// (0x0006e615) aid_main_viewer_pane_g2

0x2d8d,	// (0x0006e623) aid_main_viewer_pane_g3_ParamLimits

0x2d8d,	// (0x0006e623) aid_main_viewer_pane_g3

0x2d9c,	// (0x0006e632) aid_main_viewer_pane_g4_ParamLimits

0x2d9c,	// (0x0006e632) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007ad2f) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007ad2f) aid_main_viewer_pane_g

0x36a2,	// (0x0006ef38) main_calc_pane_ParamLimits

0x36c8,	// (0x0006ef5e) main_dialer2_pane_ParamLimits

0x94d8,	// (0x00074d6e) main_cam6_pane

0x94d8,	// (0x00074d6e) main_vid6_pane

0x4de1,	// (0x00070677) listscroll_gen_pane_cp06_ParamLimits

0x4de1,	// (0x00070677) listscroll_gen_pane_cp06

0x4f0f,	// (0x000707a5) main_clock2_pane_t5_ParamLimits

0x4f0f,	// (0x000707a5) main_clock2_pane_t5

0x4f69,	// (0x000707ff) aid_call2_pane_cp10_ParamLimits

0x4f7b,	// (0x00070811) aid_call_pane_cp10_ParamLimits

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f8d,	// (0x00070823) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f8d,	// (0x00070823) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb277,	// (0x00076b0d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007b06a) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f9f,	// (0x00070835) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5608,	// (0x00070e9e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5608,	// (0x00070e9e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007b150) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007b150) cell_dialer2_keypad_pane_g

0x5624,	// (0x00070eba) cell_dialer2_keypad_pane_t1

0x618e,	// (0x00071a24) main_cset_text2_pane_ParamLimits

0x618e,	// (0x00071a24) main_cset_text2_pane

0xdb33,	// (0x000793c9) area_vitu2_query_pane_g1_ParamLimits

0x6a84,	// (0x0007231a) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007b305) area_vitu2_query_pane_g_ParamLimits

0xa68f,	// (0x00075f25) area_vitu2_query_pane_t7_ParamLimits

0xa68f,	// (0x00075f25) area_vitu2_query_pane_t7

0x6ae5,	// (0x0007237b) bg_button_pane_cp018_ParamLimits

0x6af3,	// (0x00072389) bg_button_pane_cp021_ParamLimits

0x6aff,	// (0x00072395) bg_button_pane_cp022_ParamLimits

0x6aff,	// (0x00072395) bg_vkb2_func_pane_cp08_ParamLimits

0x6ae5,	// (0x0007237b) bg_vkb2_func_pane_cp06_ParamLimits

0x6af3,	// (0x00072389) bg_vkb2_func_pane_cp07_ParamLimits

0x6b0e,	// (0x000723a4) input_focus_pane_cp09_ParamLimits

0x9f3f,	// (0x000757d5) cam6_autofocus_pane_ParamLimits

0x9f3f,	// (0x000757d5) cam6_autofocus_pane

0x7064,	// (0x000728fa) cam6_image_uncrop_pane_ParamLimits

0x7064,	// (0x000728fa) cam6_image_uncrop_pane

0x7073,	// (0x00072909) cam6_indi_pane_ParamLimits

0x7073,	// (0x00072909) cam6_indi_pane

0x7089,	// (0x0007291f) cam6_mode_pane_ParamLimits

0x7089,	// (0x0007291f) cam6_mode_pane

0x709b,	// (0x00072931) cam6_timer_pane_ParamLimits

0x709b,	// (0x00072931) cam6_timer_pane

0x70a7,	// (0x0007293d) cam6_zoom_pane_ParamLimits

0x70a7,	// (0x0007293d) cam6_zoom_pane

0x70b3,	// (0x00072949) cam6_mode_pane_g1_ParamLimits

0x70b3,	// (0x00072949) cam6_mode_pane_g1

0x70c3,	// (0x00072959) cam6_mode_pane_g2_ParamLimits

0x70c3,	// (0x00072959) cam6_mode_pane_g2

0x70d3,	// (0x00072969) cam6_mode_pane_g3_ParamLimits

0x70d3,	// (0x00072969) cam6_mode_pane_g3

0x70e3,	// (0x00072979) cam6_mode_pane_g4_ParamLimits

0x70e3,	// (0x00072979) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007b3ed) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007b3ed) cam6_mode_pane_g

0xdd1c,	// (0x000795b2) bg_tb_trans_pane_cp08_ParamLimits

0xdd1c,	// (0x000795b2) bg_tb_trans_pane_cp08

0xdd2a,	// (0x000795c0) cam6_battery_pane_ParamLimits

0xdd2a,	// (0x000795c0) cam6_battery_pane

0xdd40,	// (0x000795d6) cam6_indi_pane_g1_ParamLimits

0xdd40,	// (0x000795d6) cam6_indi_pane_g1

0xdd52,	// (0x000795e8) cam6_indi_pane_g2_ParamLimits

0xdd52,	// (0x000795e8) cam6_indi_pane_g2

0xdd64,	// (0x000795fa) cam6_indi_pane_g3_ParamLimits

0xdd64,	// (0x000795fa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007b3f6) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007b3f6) cam6_indi_pane_g

0xdd76,	// (0x0007960c) cam6_indi_pane_t1_ParamLimits

0xdd76,	// (0x0007960c) cam6_indi_pane_t1

0x70f3,	// (0x00072989) cam6_autofocus_pane_g1

0x70fb,	// (0x00072991) cam6_autofocus_pane_g2

0x7103,	// (0x00072999) cam6_autofocus_pane_g3

0x710b,	// (0x000729a1) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007b3fd) cam6_autofocus_pane_g

0xdd9c,	// (0x00079632) cam6_timer_pane_g1

0xdda4,	// (0x0007963a) cam6_timer_pane_t1

0xddb2,	// (0x00079648) cam6_zoom_cont_pane

0xddba,	// (0x00079650) cam6_zoom_pane_g1

0xddc2,	// (0x00079658) cam6_zoom_pane_g2

0x7113,	// (0x000729a9) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007b406) cam6_zoom_pane_g

0xcc4c,	// (0x000784e2) cam6_battery_pane_g1

0xcc4c,	// (0x000784e2) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007af72) cam6_battery_pane_g

0xddca,	// (0x00079660) cam6_zoom_cont_pane_g1

0xddd3,	// (0x00079669) cam6_zoom_cont_pane_g2

0xdddc,	// (0x00079672) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007b40d) cam6_zoom_cont_pane_g

0x7130,	// (0x000729c6) cam6_mode_pane_cp_ParamLimits

0x7130,	// (0x000729c6) cam6_mode_pane_cp

0x7142,	// (0x000729d8) cam6_zoom_pane_cp_ParamLimits

0x7142,	// (0x000729d8) cam6_zoom_pane_cp

0x714e,	// (0x000729e4) vid6_image_uncrop_cif_pane_ParamLimits

0x714e,	// (0x000729e4) vid6_image_uncrop_cif_pane

0x715e,	// (0x000729f4) vid6_image_uncrop_nhd_pane_ParamLimits

0x715e,	// (0x000729f4) vid6_image_uncrop_nhd_pane

0x716d,	// (0x00072a03) vid6_image_uncrop_vga_pane_ParamLimits

0x716d,	// (0x00072a03) vid6_image_uncrop_vga_pane

0x717c,	// (0x00072a12) vid6_image_uncrop_wvga_pane_ParamLimits

0x717c,	// (0x00072a12) vid6_image_uncrop_wvga_pane

0x718b,	// (0x00072a21) vid6_indi_pane_ParamLimits

0x718b,	// (0x00072a21) vid6_indi_pane

0xdd1c,	// (0x000795b2) bg_tb_trans_pane_cp09_ParamLimits

0xdd1c,	// (0x000795b2) bg_tb_trans_pane_cp09

0xddf4,	// (0x0007968a) cam6_battery_pane_cp_ParamLimits

0xddf4,	// (0x0007968a) cam6_battery_pane_cp

0xde00,	// (0x00079696) vid6_indi_pane_g1_ParamLimits

0xde00,	// (0x00079696) vid6_indi_pane_g1

0xde12,	// (0x000796a8) vid6_indi_pane_g2_ParamLimits

0xde12,	// (0x000796a8) vid6_indi_pane_g2

0xde24,	// (0x000796ba) vid6_indi_pane_g3_ParamLimits

0xde24,	// (0x000796ba) vid6_indi_pane_g3

0xde39,	// (0x000796cf) vid6_indi_pane_g4_ParamLimits

0xde39,	// (0x000796cf) vid6_indi_pane_g4

0xde4e,	// (0x000796e4) vid6_indi_pane_g5_ParamLimits

0xde4e,	// (0x000796e4) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007b414) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007b414) vid6_indi_pane_g

0xde68,	// (0x000796fe) vid6_indi_pane_t1_ParamLimits

0xde68,	// (0x000796fe) vid6_indi_pane_t1

0xde7e,	// (0x00079714) vid6_indi_pane_t2_ParamLimits

0xde7e,	// (0x00079714) vid6_indi_pane_t2

0xdea6,	// (0x0007973c) vid6_indi_pane_t3_ParamLimits

0xdea6,	// (0x0007973c) vid6_indi_pane_t3

0xdece,	// (0x00079764) vid6_indi_pane_t4_ParamLimits

0xdece,	// (0x00079764) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007b41f) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007b41f) vid6_indi_pane_t

0xdef2,	// (0x00079788) wait_bar_pane_cp08

0x71a3,	// (0x00072a39) main_cset_text2_pane_t1_ParamLimits

0x71a3,	// (0x00072a39) main_cset_text2_pane_t1

0x711b,	// (0x000729b1) listscroll_gen_pane_cp06_t1_ParamLimits

0x711b,	// (0x000729b1) listscroll_gen_pane_cp06_t1

0x94d8,	// (0x00074d6e) main_cam6_set_pane

0x9d65,	// (0x000755fb) bg_tb_trans_pane_cp06_ParamLimits

0x9d7b,	// (0x00075611) cam4_indicators_pane_g1_ParamLimits

0x9d8c,	// (0x00075622) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007b18d) cam4_indicators_pane_g_ParamLimits

0x9daa,	// (0x00075640) cam4_indicators_pane_t1_ParamLimits

0x94ca,	// (0x00074d60) bg_tb_trans_pane_cp07_ParamLimits

0x9dd6,	// (0x0007566c) vid4_indicators_pane_g1_ParamLimits

0x9dea,	// (0x00075680) vid4_indicators_pane_g2_ParamLimits

0x9dfe,	// (0x00075694) vid4_indicators_pane_g3_ParamLimits

0x9e0f,	// (0x000756a5) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007b19f) vid4_indicators_pane_g_ParamLimits

0x9e2d,	// (0x000756c3) vid4_indicators_pane_t1_ParamLimits

0x9edd,	// (0x00075773) vid4_progress_pane_g1_ParamLimits

0x9eed,	// (0x00075783) vid4_progress_pane_g2_ParamLimits

0x6c49,	// (0x000724df) vid4_progress_pane_g3_ParamLimits

0x9efd,	// (0x00075793) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007b350) vid4_progress_pane_g_ParamLimits

0x6c5b,	// (0x000724f1) vid4_progress_pane_t1_ParamLimits

0x9f15,	// (0x000757ab) vid4_progress_pane_t2_ParamLimits

0x9f2a,	// (0x000757c0) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007b35b) vid4_progress_pane_t_ParamLimits

0x6c73,	// (0x00072509) wait_bar_pane_cp07_ParamLimits

0x71c0,	// (0x00072a56) main_cam6_set_pane_g2_ParamLimits

0x71c0,	// (0x00072a56) main_cam6_set_pane_g2

0x71e4,	// (0x00072a7a) main_cset6_listscroll_pane_ParamLimits

0x71e4,	// (0x00072a7a) main_cset6_listscroll_pane

0x7204,	// (0x00072a9a) main_cset6_slider_pane_ParamLimits

0x7204,	// (0x00072a9a) main_cset6_slider_pane

0x721a,	// (0x00072ab0) main_cset6_text2_pane_ParamLimits

0x721a,	// (0x00072ab0) main_cset6_text2_pane

0xdf01,	// (0x00079797) main_cset6_text_pane

0xdf09,	// (0x0007979f) main_cset_list_pane_copy1_ParamLimits

0xdf09,	// (0x0007979f) main_cset_list_pane_copy1

0xdf19,	// (0x000797af) scroll_pane_cp028_copy1

0x7228,	// (0x00072abe) cset_list_set_pane_copy1

0x7239,	// (0x00072acf) aid_position_infowindow_above_copy1

0x7241,	// (0x00072ad7) aid_position_infowindow_below_copy1

0x7249,	// (0x00072adf) cset_list_set_pane_g1_copy1

0x7251,	// (0x00072ae7) cset_list_set_pane_g3_copy1_ParamLimits

0x7251,	// (0x00072ae7) cset_list_set_pane_g3_copy1

0x7260,	// (0x00072af6) cset_list_set_pane_t1_copy1_ParamLimits

0x7260,	// (0x00072af6) cset_list_set_pane_t1_copy1

0xa574,	// (0x00075e0a) list_highlight_pane_cp021_copy1_ParamLimits

0xa574,	// (0x00075e0a) list_highlight_pane_cp021_copy1

0xdf22,	// (0x000797b8) cset6_slider_pane_ParamLimits

0xdf22,	// (0x000797b8) cset6_slider_pane

0xdf4e,	// (0x000797e4) main_cset6_slider_pane_g1_ParamLimits

0xdf4e,	// (0x000797e4) main_cset6_slider_pane_g1

0x7275,	// (0x00072b0b) main_cset6_slider_pane_g2_ParamLimits

0x7275,	// (0x00072b0b) main_cset6_slider_pane_g2

0xdf76,	// (0x0007980c) main_cset6_slider_pane_g3_ParamLimits

0xdf76,	// (0x0007980c) main_cset6_slider_pane_g3

0x729d,	// (0x00072b33) main_cset6_slider_pane_g4_ParamLimits

0x729d,	// (0x00072b33) main_cset6_slider_pane_g4

0x72a9,	// (0x00072b3f) main_cset6_slider_pane_g5_ParamLimits

0x72a9,	// (0x00072b3f) main_cset6_slider_pane_g5

0xd817,	// (0x000790ad) main_cset6_slider_pane_g7_ParamLimits

0xd817,	// (0x000790ad) main_cset6_slider_pane_g7

0xd823,	// (0x000790b9) main_cset6_slider_pane_g8_ParamLimits

0xd823,	// (0x000790b9) main_cset6_slider_pane_g8

0x623b,	// (0x00071ad1) main_cset6_slider_pane_g9_ParamLimits

0x623b,	// (0x00071ad1) main_cset6_slider_pane_g9

0x6247,	// (0x00071add) main_cset6_slider_pane_g10_ParamLimits

0x6247,	// (0x00071add) main_cset6_slider_pane_g10

0x6253,	// (0x00071ae9) main_cset6_slider_pane_g11_ParamLimits

0x6253,	// (0x00071ae9) main_cset6_slider_pane_g11

0x625f,	// (0x00071af5) main_cset6_slider_pane_g12_ParamLimits

0x625f,	// (0x00071af5) main_cset6_slider_pane_g12

0x626b,	// (0x00071b01) main_cset6_slider_pane_g13_ParamLimits

0x626b,	// (0x00071b01) main_cset6_slider_pane_g13

0x6277,	// (0x00071b0d) main_cset6_slider_pane_g14_ParamLimits

0x6277,	// (0x00071b0d) main_cset6_slider_pane_g14

0x72b5,	// (0x00072b4b) main_cset6_slider_pane_g15_ParamLimits

0x72b5,	// (0x00072b4b) main_cset6_slider_pane_g15

0x629b,	// (0x00071b31) main_cset6_slider_pane_g16_ParamLimits

0x629b,	// (0x00071b31) main_cset6_slider_pane_g16

0x62a7,	// (0x00071b3d) main_cset6_slider_pane_g17_ParamLimits

0x62a7,	// (0x00071b3d) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007b428) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007b428) main_cset6_slider_pane_g

0xdf82,	// (0x00079818) main_cset6_slider_pane_t1_ParamLimits

0xdf82,	// (0x00079818) main_cset6_slider_pane_t1

0x72e5,	// (0x00072b7b) main_cset6_slider_pane_t2_ParamLimits

0x72e5,	// (0x00072b7b) main_cset6_slider_pane_t2

0x7310,	// (0x00072ba6) main_cset6_slider_pane_t3_ParamLimits

0x7310,	// (0x00072ba6) main_cset6_slider_pane_t3

0x733b,	// (0x00072bd1) main_cset6_slider_pane_t4_ParamLimits

0x733b,	// (0x00072bd1) main_cset6_slider_pane_t4

0x7366,	// (0x00072bfc) main_cset6_slider_pane_t5_ParamLimits

0x7366,	// (0x00072bfc) main_cset6_slider_pane_t5

0xdfc3,	// (0x00079859) main_cset6_slider_pane_t7_ParamLimits

0xdfc3,	// (0x00079859) main_cset6_slider_pane_t7

0x7391,	// (0x00072c27) main_cset6_slider_pane_t8_ParamLimits

0x7391,	// (0x00072c27) main_cset6_slider_pane_t8

0x73b5,	// (0x00072c4b) main_cset6_slider_pane_t9_ParamLimits

0x73b5,	// (0x00072c4b) main_cset6_slider_pane_t9

0x73d9,	// (0x00072c6f) main_cset6_slider_pane_t10_ParamLimits

0x73d9,	// (0x00072c6f) main_cset6_slider_pane_t10

0x73fd,	// (0x00072c93) main_cset6_slider_pane_t11_ParamLimits

0x73fd,	// (0x00072c93) main_cset6_slider_pane_t11

0xdff9,	// (0x0007988f) main_cset6_slider_pane_t14_ParamLimits

0xdff9,	// (0x0007988f) main_cset6_slider_pane_t14

0xe076,	// (0x0007990c) main_cset6_slider_pane_t15_ParamLimits

0xe076,	// (0x0007990c) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007b44d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007b44d) main_cset6_slider_pane_t

0xe032,	// (0x000798c8) cset_slider_pane_g1_copy1

0xe03b,	// (0x000798d1) cset_slider_pane_g2_copy1

0xe044,	// (0x000798da) cset_slider_pane_g3_copy1

0x9452,	// (0x00074ce8) bg_popup_sub_pane_cp011_copy1

0xe0af,	// (0x00079945) main_cset_text_pane_g1_copy1

0xd95b,	// (0x000791f1) main_cset_text_pane_t1_copy1

0xd969,	// (0x000791ff) main_cset_text_pane_t2_copy1

0xd977,	// (0x0007920d) main_cset_text_pane_t3_copy1

0xd985,	// (0x0007921b) main_cset_text_pane_t4_copy1

0xd993,	// (0x00079229) main_cset_text_pane_t5_copy1

0xe0b7,	// (0x0007994d) main_cset_text_pane_t6_copy1

0xe0c5,	// (0x0007995b) main_cset_text_pane_t7_copy1

0x71a3,	// (0x00072a39) main_cset_text2_pane_t1_copy1

0x94ca,	// (0x00074d60) main_ncimui_pane

0x3912,	// (0x0006f1a8) popup_query_ncimui_window_ParamLimits

0x3912,	// (0x0006f1a8) popup_query_ncimui_window

0xa5be,	// (0x00075e54) field_cale_ev2_pane_g4_ParamLimits

0xa5be,	// (0x00075e54) field_cale_ev2_pane_g4

0x54e8,	// (0x00070d7e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54e8,	// (0x00070d7e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007b12b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007b12b) cell_video_dialer_keypad_pane_g

0x5500,	// (0x00070d96) cell_video_dialer_keypad_pane_t1

0x9452,	// (0x00074ce8) bg_popup_window_pane_cp012

0xb0c6,	// (0x0007695c) heading_pane_cp06

0xe0f1,	// (0x00079987) ncim_query_content_pane

0x9452,	// (0x00074ce8) bg_popup_heading_pane_cp01

0xe0f9,	// (0x0007998f) ncim_heading_pane_t1

0xe107,	// (0x0007999d) ncim_indicator_popup_pane

0xe119,	// (0x000799af) ncim_query_button_pane

0xe12d,	// (0x000799c3) ncim_query_content_pane_t1

0xe13f,	// (0x000799d5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007b491) ncim_query_content_pane_t

0xe179,	// (0x00079a0f) ncim_query_list_pane

0xe18b,	// (0x00079a21) ncim_query_popup_pane

0xe107,	// (0x0007999d) ncim_indicator_popup_pane_ParamLimits

0x7618,	// (0x00072eae) ncim_query_content_pane_g1_ParamLimits

0x7618,	// (0x00072eae) ncim_query_content_pane_g1

0xe12d,	// (0x000799c3) ncim_query_content_pane_t1_ParamLimits

0xe13f,	// (0x000799d5) ncim_query_content_pane_t2_ParamLimits

0x7624,	// (0x00072eba) ncim_query_content_pane_t3_ParamLimits

0x7624,	// (0x00072eba) ncim_query_content_pane_t3

0x764c,	// (0x00072ee2) ncim_query_content_pane_t4_ParamLimits

0x764c,	// (0x00072ee2) ncim_query_content_pane_t4

0x7674,	// (0x00072f0a) ncim_query_content_pane_t5_ParamLimits

0x7674,	// (0x00072f0a) ncim_query_content_pane_t5

0xe151,	// (0x000799e7) ncim_query_content_pane_t6_ParamLimits

0xe151,	// (0x000799e7) ncim_query_content_pane_t6

0xfbfb,	// (0x0007b491) ncim_query_content_pane_t_ParamLimits

0xe179,	// (0x00079a0f) ncim_query_list_pane_ParamLimits

0xe18b,	// (0x00079a21) ncim_query_popup_pane_ParamLimits

0xe19f,	// (0x00079a35) wait_bar_pane_cp04

0x9452,	// (0x00074ce8) input_focus_pane_cp011

0xe1a7,	// (0x00079a3d) ncim_query_popup_pane_t1

0xe1b5,	// (0x00079a4b) ncim_list_query_list_pane_ParamLimits

0xe1b5,	// (0x00079a4b) ncim_list_query_list_pane

0x9452,	// (0x00074ce8) bg_button_pane_cp027

0xe1c2,	// (0x00079a58) ncim_query_button_pane_g1

0x9452,	// (0x00074ce8) list_highlight_pane_cp012

0xe1cc,	// (0x00079a62) ncim_list_query_list_pane_g1

0xe1d4,	// (0x00079a6a) ncim_list_query_list_pane_t1

0x9d9b,	// (0x00075631) cam4_indicators_pane_g3_ParamLimits

0x9d9b,	// (0x00075631) cam4_indicators_pane_g3

0x9e1b,	// (0x000756b1) vid4_indicators_pane_g5_ParamLimits

0x9e1b,	// (0x000756b1) vid4_indicators_pane_g5

0x9f09,	// (0x0007579f) vid4_progress_pane_g5_ParamLimits

0x9f09,	// (0x0007579f) vid4_progress_pane_g5

0x7506,	// (0x00072d9c) main_ncimui_pane_g1

0x756c,	// (0x00072e02) ncimui_group_query_pane_ParamLimits

0x756c,	// (0x00072e02) ncimui_group_query_pane

0x75b4,	// (0x00072e4a) ncimui_list_pane_ParamLimits

0x75b4,	// (0x00072e4a) ncimui_list_pane

0x75db,	// (0x00072e71) ncimui_text_pane_ParamLimits

0x75db,	// (0x00072e71) ncimui_text_pane

0x769c,	// (0x00072f32) ncimui_text_pane_t1_ParamLimits

0x769c,	// (0x00072f32) ncimui_text_pane_t1

0xe1e2,	// (0x00079a78) ncimui_list_single_graphic_pane_ParamLimits

0xe1e2,	// (0x00079a78) ncimui_list_single_graphic_pane

0x76ba,	// (0x00072f50) ncimui_query_pane_ParamLimits

0x76ba,	// (0x00072f50) ncimui_query_pane

0x9452,	// (0x00074ce8) list_highlight_pane_cp013

0xe1f2,	// (0x00079a88) ncim_list_query_list_pane_t1_copy1

0xe1cc,	// (0x00079a62) ncim_list_single_graphic_pane_g1

0xe200,	// (0x00079a96) ncim_query_button_pane_cp01

0xe20c,	// (0x00079aa2) ncim_query_entry_pane_ParamLimits

0xe20c,	// (0x00079aa2) ncim_query_entry_pane

0xe21f,	// (0x00079ab5) ncimui_query_pane_g1

0xe22b,	// (0x00079ac1) ncimui_query_pane_t1_ParamLimits

0xe22b,	// (0x00079ac1) ncimui_query_pane_t1

0xa574,	// (0x00075e0a) input_focus_pane_cp012

0xe244,	// (0x00079ada) ncim_query_entry_pane_t1

0xa328,	// (0x00075bbe) main_im_pane_ParamLimits

0x94ca,	// (0x00074d60) main_mobtv_pane_ParamLimits

0x94ca,	// (0x00074d60) main_mobtv_pane

0x72cd,	// (0x00072b63) main_cset6_slider_pane_g18_ParamLimits

0x72cd,	// (0x00072b63) main_cset6_slider_pane_g18

0x72d9,	// (0x00072b6f) main_cset6_slider_pane_g19_ParamLimits

0x72d9,	// (0x00072b6f) main_cset6_slider_pane_g19

0x76cd,	// (0x00072f63) bg_main_mobtv_pane_ParamLimits

0x76cd,	// (0x00072f63) bg_main_mobtv_pane

0x76db,	// (0x00072f71) main_mobtv_info_pane

0x76e4,	// (0x00072f7a) main_mobtv_loading_pane_ParamLimits

0x76e4,	// (0x00072f7a) main_mobtv_loading_pane

0xe256,	// (0x00079aec) main_mobtv_pg_channel_list_pane

0xe260,	// (0x00079af6) main_mobtv_pg_hdr_pane

0x76f1,	// (0x00072f87) main_mobtv_programe_curr_pane_ParamLimits

0x76f1,	// (0x00072f87) main_mobtv_programe_curr_pane

0x76fe,	// (0x00072f94) main_mobtv_programe_next_pane_ParamLimits

0x76fe,	// (0x00072f94) main_mobtv_programe_next_pane

0xe269,	// (0x00079aff) popup_mobtv_noti_window

0xcc4c,	// (0x000784e2) main_tv_pg_hdr_pane_g1

0xe271,	// (0x00079b07) main_tv_pg_hdr_pane_g2

0xe279,	// (0x00079b0f) main_tv_pg_hdr_pane_g3

0xe281,	// (0x00079b17) main_tv_pg_hdr_pane_g4

0xe289,	// (0x00079b1f) main_tv_pg_hdr_pane_g5

0xe293,	// (0x00079b29) main_tv_pg_hdr_pane_g6

0xe29d,	// (0x00079b33) main_tv_pg_hdr_pane_g7

0xe2a7,	// (0x00079b3d) main_tv_pg_hdr_pane_g8

0xe2b1,	// (0x00079b47) main_tv_pg_hdr_pane_g9

0xe2bb,	// (0x00079b51) main_tv_pg_hdr_pane_g10

0xe2c5,	// (0x00079b5b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007b49e) main_tv_pg_hdr_pane_g

0xe2cf,	// (0x00079b65) main_tv_pg_hdr_pane_t1

0xe2dd,	// (0x00079b73) main_tv_pg_hdr_pane_t2

0xe2eb,	// (0x00079b81) main_tv_pg_hdr_pane_t3

0xe2fb,	// (0x00079b91) main_tv_pg_hdr_pane_t4

0xe30b,	// (0x00079ba1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007b4b5) main_tv_pg_hdr_pane_t

0xe31b,	// (0x00079bb1) single_mobtv_pg_channel_pane_ParamLimits

0xe31b,	// (0x00079bb1) single_mobtv_pg_channel_pane

0xe32d,	// (0x00079bc3) single_mobtv_pg_channel_table_pane

0xe336,	// (0x00079bcc) single_mobtv_pg_channel_thumb_pane

0xe33f,	// (0x00079bd5) single_tv_pg_channel_pane_g1

0xe348,	// (0x00079bde) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007b4c0) single_tv_pg_channel_pane_g

0xceb8,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb8,	// (0x0007874e) bg_single_mobtv_pg_channel_thumb_pane

0xe351,	// (0x00079be7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe351,	// (0x00079be7) single_mobtv_pg_channel_thumb_pane_g1

0xe35f,	// (0x00079bf5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe35f,	// (0x00079bf5) single_mobtv_pg_channel_thumb_pane_g2

0xe36b,	// (0x00079c01) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe36b,	// (0x00079c01) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007b4c5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007b4c5) single_mobtv_pg_channel_thumb_pane_g

0xe377,	// (0x00079c0d) single_mobtv_pg_channel_thumb_pane_t1

0xe385,	// (0x00079c1b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007b4cc) single_mobtv_pg_channel_thumb_pane_t

0xcc4c,	// (0x000784e2) bg_single_mobtv_pg_channel_table_pane_g1

0xcc4c,	// (0x000784e2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007af72) bg_single_mobtv_pg_channel_table_pane_g

0xe393,	// (0x00079c29) single_mobtv_pg_channel_table_pane_t1

0xe3a1,	// (0x00079c37) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007b4d1) single_mobtv_pg_channel_table_pane_t

0x7713,	// (0x00072fa9) main_mobtv_info_pane_g1_ParamLimits

0x7713,	// (0x00072fa9) main_mobtv_info_pane_g1

0x7731,	// (0x00072fc7) main_mobtv_info_pane_t1_ParamLimits

0x7731,	// (0x00072fc7) main_mobtv_info_pane_t1

0x77a9,	// (0x0007303f) main_mobtv_info_pane_t2_ParamLimits

0x77a9,	// (0x0007303f) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007b4db) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007b4db) main_mobtv_info_pane_t

0x7838,	// (0x000730ce) wait_bar_pane_cp05

0x784a,	// (0x000730e0) main_mobtv_loading_pane_g1_ParamLimits

0x784a,	// (0x000730e0) main_mobtv_loading_pane_g1

0x785d,	// (0x000730f3) main_mobtv_loading_pane_g2_ParamLimits

0x785d,	// (0x000730f3) main_mobtv_loading_pane_g2

0x7869,	// (0x000730ff) main_mobtv_loading_pane_g3_ParamLimits

0x7869,	// (0x000730ff) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007b4e2) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007b4e2) main_mobtv_loading_pane_g

0xe3af,	// (0x00079c45) main_mobtv_loading_pane_t1_ParamLimits

0xe3af,	// (0x00079c45) main_mobtv_loading_pane_t1

0xe3c7,	// (0x00079c5d) main_mobtv_loading_pane_t2_ParamLimits

0xe3c7,	// (0x00079c5d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007b4e9) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007b4e9) main_mobtv_loading_pane_t

0x787c,	// (0x00073112) wait_bar_pane_cp06_ParamLimits

0x787c,	// (0x00073112) wait_bar_pane_cp06

0xe3eb,	// (0x00079c81) main_mobtv_programe_curr_pane_t1

0xe3f9,	// (0x00079c8f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007b4ee) main_mobtv_programe_curr_pane_t

0xe407,	// (0x00079c9d) main_mobtv_programe_next_pane_t1

0xe415,	// (0x00079cab) main_mobtv_programe_next_pane_t2

0xe423,	// (0x00079cb9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007b4f3) main_mobtv_programe_next_pane_t

0x9452,	// (0x00074ce8) bg_popup_mobtv_noti_window_pane

0xe431,	// (0x00079cc7) popup_mobtv_noti_window_g1

0xe439,	// (0x00079ccf) popup_mobtv_noti_window_t1

0xe447,	// (0x00079cdd) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007b4fa) popup_mobtv_noti_window_t

0xcc4c,	// (0x000784e2) bg_popup_mobtv_noti_window_pane_g1

0x94d8,	// (0x00074d6e) sc_clock_pane

0x94d8,	// (0x00074d6e) main_fs_bigclock_pane

0x6ed9,	// (0x0007276f) blid2_tripm_pane_t4_ParamLimits

0x6ed9,	// (0x0007276f) blid2_tripm_pane_t4

0x788b,	// (0x00073121) sc_clock_pane_g1_ParamLimits

0x788b,	// (0x00073121) sc_clock_pane_g1

0x789d,	// (0x00073133) sc_clock_pane_t1_ParamLimits

0x789d,	// (0x00073133) sc_clock_pane_t1

0x78bf,	// (0x00073155) sc_clock_pane_t2_ParamLimits

0x78bf,	// (0x00073155) sc_clock_pane_t2

0x78d7,	// (0x0007316d) sc_clock_pane_t3_ParamLimits

0x78d7,	// (0x0007316d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007b4ff) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007b4ff) sc_clock_pane_t

0x891a,	// (0x000741b0) main_fs_bigclock_indicator_pane_ParamLimits

0x891a,	// (0x000741b0) main_fs_bigclock_indicator_pane

0x7977,	// (0x0007320d) main_fs_bigclock_pane_g1_ParamLimits

0x7977,	// (0x0007320d) main_fs_bigclock_pane_g1

0x8926,	// (0x000741bc) main_fs_bigclock_pane_t1_ParamLimits

0x8926,	// (0x000741bc) main_fs_bigclock_pane_t1

0x8938,	// (0x000741ce) main_fs_bigclock_pane_t2_ParamLimits

0x8938,	// (0x000741ce) main_fs_bigclock_pane_t2

0x894c,	// (0x000741e2) main_fs_bigclock_pane_t3_ParamLimits

0x894c,	// (0x000741e2) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0007b704) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0007b704) main_fs_bigclock_pane_t

0xec87,	// (0x0007a51d) main_fs_bigclock_indicator_pane_g1

0xe121,	// (0x000799b7) ncim_query_content_pane_g2_ParamLimits

0xe121,	// (0x000799b7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007b48c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007b48c) ncim_query_content_pane_g

0x78f0,	// (0x00073186) sc_clock_pane_t4_ParamLimits

0x78f0,	// (0x00073186) sc_clock_pane_t4

0x94ca,	// (0x00074d60) main_radioblah_pane

0xd63b,	// (0x00078ed1) cell_call4_button_pane_t1_copy1_ParamLimits

0xd63b,	// (0x00078ed1) cell_call4_button_pane_t1_copy1

0x751e,	// (0x00072db4) main_ncimui_pane_t1_ParamLimits

0x751e,	// (0x00072db4) main_ncimui_pane_t1

0x7538,	// (0x00072dce) main_ncimui_pane_t2_ParamLimits

0x7538,	// (0x00072dce) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007b485) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007b485) main_ncimui_pane_t

0xe58b,	// (0x00079e21) main_radioblah_anim_pane_ParamLimits

0xe58b,	// (0x00079e21) main_radioblah_anim_pane

0xe59c,	// (0x00079e32) main_radioblah_info_pane_ParamLimits

0xe59c,	// (0x00079e32) main_radioblah_info_pane

0xe5b0,	// (0x00079e46) main_radioblah_pane_t1_ParamLimits

0xe5b0,	// (0x00079e46) main_radioblah_pane_t1

0xe5cc,	// (0x00079e62) main_radioblah_pane_t2_ParamLimits

0xe5cc,	// (0x00079e62) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007b520) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007b520) main_radioblah_pane_t

0x79cf,	// (0x00073265) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79cf,	// (0x00073265) main_radioblah_rocker_ctrl_pane

0xe614,	// (0x00079eaa) main_radioblah_info_pane_t1_ParamLimits

0xe614,	// (0x00079eaa) main_radioblah_info_pane_t1

0x7a27,	// (0x000732bd) main_radioblah_info_pane_t2_ParamLimits

0x7a27,	// (0x000732bd) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007b529) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007b529) main_radioblah_info_pane_t

0xcc4c,	// (0x000784e2) main_radioblah_rocker_ctrl_pane_g1

0x7ad7,	// (0x0007336d) main_radioblah_rocker_ctrl_pane_g2

0x7adf,	// (0x00073375) main_radioblah_rocker_ctrl_pane_g3

0x7ae7,	// (0x0007337d) main_radioblah_rocker_ctrl_pane_g4

0x7aef,	// (0x00073385) main_radioblah_rocker_ctrl_pane_g5

0x7af7,	// (0x0007338d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007b532) main_radioblah_rocker_ctrl_pane_g

0x71a3,	// (0x00072a39) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d5d,	// (0x000755f3) cam4_image_uncrop_qvga_pane

0x9dc4,	// (0x0007565a) vid4_image_uncrop_qcif_pane

0x9f3f,	// (0x000757d5) cam6_image_uncrop_qvga_pane_ParamLimits

0x9f3f,	// (0x000757d5) cam6_image_uncrop_qvga_pane

0xdde4,	// (0x0007967a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdde4,	// (0x0007967a) vid6_image_uncrop_qcif_pane

0x9452,	// (0x00074ce8) bg_popup_preview_window_pane_cp03

0xe0d3,	// (0x00079969) list_cset_text2_pane

0xe0db,	// (0x00079971) main_cset6_text2_pane_g1

0xe0e3,	// (0x00079979) main_cset6_text2_pane_t1

0x7aff,	// (0x00073395) list_cset_text2_pane_t1_ParamLimits

0x7aff,	// (0x00073395) list_cset_text2_pane_t1

0x94ca,	// (0x00074d60) main_radioblah_pane_ParamLimits

0x7824,	// (0x000730ba) main_mobtv_info_pane_t3_ParamLimits

0x7824,	// (0x000730ba) main_mobtv_info_pane_t3

0x79bd,	// (0x00073253) main_radioblah_pane_g1

0x79f7,	// (0x0007328d) main_radioblah_info_pane_g1

0x7a7c,	// (0x00073312) main_radioblah_info_pane_t3_ParamLimits

0x7a7c,	// (0x00073312) main_radioblah_info_pane_t3

0x2358,	// (0x0006dbee) highlight_cell_cale_month_pane_ParamLimits

0x2358,	// (0x0006dbee) highlight_cell_cale_month_pane

0x94d8,	// (0x00074d6e) main_phob_fisheye_pane

0xcfb4,	// (0x0007884a) scroll_pane_cp0031_ParamLimits

0xcfb4,	// (0x0007884a) scroll_pane_cp0031

0xdef2,	// (0x00079788) wait_bar_pane_cp08_ParamLimits

0x7228,	// (0x00072abe) cset_list_set_pane_copy1_ParamLimits

0xe64e,	// (0x00079ee4) highlight_cell_cale_month_pane_g1

0x7b18,	// (0x000733ae) highlight_cell_cale_month_pane_t1

0xdb87,	// (0x0007941d) list_gen_pane_cp01

0xd802,	// (0x00079098) scroll_pane_01

0x7b26,	// (0x000733bc) list_single_double_fisheye_pane

0x7b2f,	// (0x000733c5) list_double_fisheye_pane_g1_ParamLimits

0x7b2f,	// (0x000733c5) list_double_fisheye_pane_g1

0x7b3b,	// (0x000733d1) list_double_fisheye_pane_g2_ParamLimits

0x7b3b,	// (0x000733d1) list_double_fisheye_pane_g2

0x7b4f,	// (0x000733e5) list_double_fisheye_pane_g3_ParamLimits

0x7b4f,	// (0x000733e5) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007b53f) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007b53f) list_double_fisheye_pane_g

0x7b78,	// (0x0007340e) list_double_fisheye_pane_t1_ParamLimits

0x7b78,	// (0x0007340e) list_double_fisheye_pane_t1

0x7b93,	// (0x00073429) list_double_fisheye_pane_t2_ParamLimits

0x7b93,	// (0x00073429) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007b54a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007b54a) list_double_fisheye_pane_t

0x94d8,	// (0x00074d6e) main_call5_pane

0x791b,	// (0x000731b1) sc_swipe_pane_ParamLimits

0x791b,	// (0x000731b1) sc_swipe_pane

0x7bc8,	// (0x0007345e) call5_image_pane_ParamLimits

0x7bc8,	// (0x0007345e) call5_image_pane

0x7be5,	// (0x0007347b) call5_swipe_1_pane_ParamLimits

0x7be5,	// (0x0007347b) call5_swipe_1_pane

0x7bf8,	// (0x0007348e) call5_swipe_2_pane_ParamLimits

0x7bf8,	// (0x0007348e) call5_swipe_2_pane

0x7c23,	// (0x000734b9) popup_call5_audio_first_window_ParamLimits

0x7c23,	// (0x000734b9) popup_call5_audio_first_window

0xceb8,	// (0x0007874e) call5_swipe_1_pane_g1_ParamLimits

0xceb8,	// (0x0007874e) call5_swipe_1_pane_g1

0xe656,	// (0x00079eec) call5_swipe_1_pane_g2_ParamLimits

0xe656,	// (0x00079eec) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007b54f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007b54f) call5_swipe_1_pane_g

0xe662,	// (0x00079ef8) call5_swipe_1_pane_t1_ParamLimits

0xe662,	// (0x00079ef8) call5_swipe_1_pane_t1

0xceb8,	// (0x0007874e) call5_swipe_2_pane_g1_ParamLimits

0xceb8,	// (0x0007874e) call5_swipe_2_pane_g1

0xe677,	// (0x00079f0d) call5_swipe_2_pane_g2_ParamLimits

0xe677,	// (0x00079f0d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007b554) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007b554) call5_swipe_2_pane_g

0xe683,	// (0x00079f19) call5_swipe_2_pane_t1_ParamLimits

0xe683,	// (0x00079f19) call5_swipe_2_pane_t1

0xe698,	// (0x00079f2e) sc_swipe_pane_g1_ParamLimits

0xe698,	// (0x00079f2e) sc_swipe_pane_g1

0xe6a5,	// (0x00079f3b) sc_swipe_pane_g2_ParamLimits

0xe6a5,	// (0x00079f3b) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007b559) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007b559) sc_swipe_pane_g

0xe6b1,	// (0x00079f47) sc_swipe_pane_t1_ParamLimits

0xe6b1,	// (0x00079f47) sc_swipe_pane_t1

0x94d8,	// (0x00074d6e) main_cmail_launcher_pane

0x7c34,	// (0x000734ca) aid_size_cell_cmail_l_ParamLimits

0x7c34,	// (0x000734ca) aid_size_cell_cmail_l

0x7c4e,	// (0x000734e4) grid_cmail_l_pane_ParamLimits

0x7c4e,	// (0x000734e4) grid_cmail_l_pane

0x7c69,	// (0x000734ff) cell_cmail_l_pane_ParamLimits

0x7c69,	// (0x000734ff) cell_cmail_l_pane

0x7c8f,	// (0x00073525) cell_cmail_l_pane_g1_ParamLimits

0x7c8f,	// (0x00073525) cell_cmail_l_pane_g1

0x7c9b,	// (0x00073531) cell_cmail_l_pane_t1_ParamLimits

0x7c9b,	// (0x00073531) cell_cmail_l_pane_t1

0xe6c6,	// (0x00079f5c) cell_cmail_l_pane_t2_ParamLimits

0xe6c6,	// (0x00079f5c) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007b55e) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007b55e) cell_cmail_l_pane_t

0xa574,	// (0x00075e0a) grid_highlight_pane_cp018_ParamLimits

0xa574,	// (0x00075e0a) grid_highlight_pane_cp018

0x02d2,	// (0x0006bb68) main2_pane_ParamLimits

0x02d2,	// (0x0006bb68) main2_pane

0xa3c1,	// (0x00075c57) popup_sp_fs_action_menu_bg_pane_g1

0xa3c9,	// (0x00075c5f) popup_sp_fs_action_menu_bg_pane_g2

0xa3d1,	// (0x00075c67) popup_sp_fs_action_menu_bg_pane_g3

0xa3d9,	// (0x00075c6f) popup_sp_fs_action_menu_bg_pane_g4

0xa3e1,	// (0x00075c77) popup_sp_fs_action_menu_bg_pane_g5

0xa3e9,	// (0x00075c7f) popup_sp_fs_action_menu_bg_pane_g6

0xa3f1,	// (0x00075c87) popup_sp_fs_action_menu_bg_pane_g7

0xa3f9,	// (0x00075c8f) popup_sp_fs_action_menu_bg_pane_g8

0xa401,	// (0x00075c97) popup_sp_fs_action_menu_bg_pane_g9

0xa409,	// (0x00075c9f) popup_sp_fs_action_menu_bg_pane_g10

0xa409,	// (0x00075c9f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007aa20) popup_sp_fs_action_menu_bg_pane_g

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g3_g1

0x12d0,	// (0x0006cb66) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_t3_g3_g2

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007aace) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007aace) list_medium_line_x2_t3_g3_g

0x12e8,	// (0x0006cb7e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12e8,	// (0x0006cb7e) list_medium_line_x2_t3_g3_t1

0x12fd,	// (0x0006cb93) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12fd,	// (0x0006cb93) list_medium_line_x2_t3_g3_t2

0x1311,	// (0x0006cba7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007aad5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007aad5) list_medium_line_x2_t3_g3_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g2_g1

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007aadc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007aadc) list_medium_line_x2_t3_g2_g

0x1326,	// (0x0006cbbc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1326,	// (0x0006cbbc) list_medium_line_x2_t3_g2_t1

0x133c,	// (0x0006cbd2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x133c,	// (0x0006cbd2) list_medium_line_x2_t3_g2_t2

0x134e,	// (0x0006cbe4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x134e,	// (0x0006cbe4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007aae1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007aae1) list_medium_line_x2_t3_g2_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t4_g4_g1

0x136b,	// (0x0006cc01) list_medium_line_x2_t4_g4_g2_ParamLimits

0x136b,	// (0x0006cc01) list_medium_line_x2_t4_g4_g2

0x12d0,	// (0x0006cb66) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_t4_g4_g3

0x1377,	// (0x0006cc0d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1377,	// (0x0006cc0d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007aae8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007aae8) list_medium_line_x2_t4_g4_g

0x1383,	// (0x0006cc19) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1383,	// (0x0006cc19) list_medium_line_x2_t4_g4_t1

0x139d,	// (0x0006cc33) list_medium_line_x2_t4_g4_t2_ParamLimits

0x139d,	// (0x0006cc33) list_medium_line_x2_t4_g4_t2

0x13b3,	// (0x0006cc49) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13b3,	// (0x0006cc49) list_medium_line_x2_t4_g4_t3

0x13c8,	// (0x0006cc5e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13c8,	// (0x0006cc5e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007aaf1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007aaf1) list_medium_line_x2_t4_g4_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g4_g1

0x136b,	// (0x0006cc01) list_medium_line_x2_t2_g4_g2_ParamLimits

0x136b,	// (0x0006cc01) list_medium_line_x2_t2_g4_g2

0x12d0,	// (0x0006cb66) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_t2_g4_g3

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007ab58) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007ab58) list_medium_line_x2_t2_g4_g

0x237e,	// (0x0006dc14) list_medium_line_x2_t2_g4_t1_ParamLimits

0x237e,	// (0x0006dc14) list_medium_line_x2_t2_g4_t1

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007ab61) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007ab61) list_medium_line_x2_t2_g4_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g3_g1

0x12d0,	// (0x0006cb66) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_t2_g3_g2

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007aace) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007aace) list_medium_line_x2_t2_g3_g

0x2393,	// (0x0006dc29) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2393,	// (0x0006dc29) list_medium_line_x2_t2_g3_t1

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007ab66) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007ab66) list_medium_line_x2_t2_g3_t

0x24dc,	// (0x0006dd72) main_sp_fs_list_pane_ParamLimits

0x24dc,	// (0x0006dd72) main_sp_fs_list_pane

0xca9a,	// (0x00078330) sp_fs_scroll_pane_ParamLimits

0xca9a,	// (0x00078330) sp_fs_scroll_pane

0x24e8,	// (0x0006dd7e) list_medium_line_x2_t3_t1

0x24f8,	// (0x0006dd8e) list_medium_line_x2_t3_t2

0x2506,	// (0x0006dd9c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007abb1) list_medium_line_x2_t3_t

0x2514,	// (0x0006ddaa) list_medium_line_x3_t4_t1

0x2524,	// (0x0006ddba) list_medium_line_x3_t4_t2

0x2532,	// (0x0006ddc8) list_medium_line_x3_t4_t3

0x2506,	// (0x0006dd9c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007abb8) list_medium_line_x3_t4_t

0x2540,	// (0x0006ddd6) list_medium_line_x4_t5_t1

0x2550,	// (0x0006dde6) list_medium_line_x4_t5_t2

0x2532,	// (0x0006ddc8) list_medium_line_x4_t5_t3

0x255e,	// (0x0006ddf4) list_medium_line_x4_t5_t4

0x2506,	// (0x0006dd9c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007abc1) list_medium_line_x4_t5_t

0x12c4,	// (0x0006cb5a) list_medium_line_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_t4_g4_g1

0x256c,	// (0x0006de02) list_medium_line_t4_g4_g2_ParamLimits

0x256c,	// (0x0006de02) list_medium_line_t4_g4_g2

0x2578,	// (0x0006de0e) list_medium_line_t4_g4_g3_ParamLimits

0x2578,	// (0x0006de0e) list_medium_line_t4_g4_g3

0x12dc,	// (0x0006cb72) list_medium_line_t4_g4_g4_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007abcc) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007abcc) list_medium_line_t4_g4_g

0x2584,	// (0x0006de1a) list_medium_line_t4_g4_t1_ParamLimits

0x2584,	// (0x0006de1a) list_medium_line_t4_g4_t1

0x2599,	// (0x0006de2f) list_medium_line_t4_g4_t2_ParamLimits

0x2599,	// (0x0006de2f) list_medium_line_t4_g4_t2

0x25ae,	// (0x0006de44) list_medium_line_t4_g4_t3_ParamLimits

0x25ae,	// (0x0006de44) list_medium_line_t4_g4_t3

0x1311,	// (0x0006cba7) list_medium_line_t4_g4_t4_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007abd5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007abd5) list_medium_line_t4_g4_t

0x2676,	// (0x0006df0c) chi_dic_find_pane_g1

0x36dc,	// (0x0006ef72) main_tport_pane

0x6541,	// (0x00071dd7) list_medium_line_plain_t1

0x65e9,	// (0x00071e7f) list_medium_line_t2_g2_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t2_g2_g1

0x65f5,	// (0x00071e8b) list_medium_line_t2_g2_g2_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007b296) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007b296) list_medium_line_t2_g2_g

0x6601,	// (0x00071e97) list_medium_line_t2_g2_t1_ParamLimits

0x6601,	// (0x00071e97) list_medium_line_t2_g2_t1

0x661b,	// (0x00071eb1) list_medium_line_t2_g2_t2_ParamLimits

0x661b,	// (0x00071eb1) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007b29b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007b29b) list_medium_line_t2_g2_t

0xa6b3,	// (0x00075f49) aid_sp_fs_list_icon_a_sm

0xa6bb,	// (0x00075f51) aid_sp_fs_list_icon_d

0xa6c3,	// (0x00075f59) aid_sp_fs_text_primary

0xe06d,	// (0x00079903) aid_sp_fs_text_secondary

0x6c86,	// (0x0007251c) list_medium_line

0x6c86,	// (0x0007251c) list_medium_line_g2

0x6c86,	// (0x0007251c) list_medium_line_g3

0x6c86,	// (0x0007251c) list_medium_line_plain

0x6c86,	// (0x0007251c) list_medium_line_plain_t2

0x6c86,	// (0x0007251c) list_medium_line_plain_t3

0x6c86,	// (0x0007251c) list_medium_line_right_icon

0x6c86,	// (0x0007251c) list_medium_line_right_iconx2

0x6c86,	// (0x0007251c) list_medium_line_t2

0x6c86,	// (0x0007251c) list_medium_line_t2_g2

0x6c86,	// (0x0007251c) list_medium_line_t2_g3

0x6c86,	// (0x0007251c) list_medium_line_t2_right_icon

0x6c86,	// (0x0007251c) list_medium_line_t2_right_iconx2

0x6c86,	// (0x0007251c) list_medium_line_t3

0x6c86,	// (0x0007251c) list_medium_line_t3_g2

0x6c86,	// (0x0007251c) list_medium_line_t3_g3

0x6c86,	// (0x0007251c) list_medium_line_t3_right_iconx2

0x6c8f,	// (0x00072525) list_medium_line_t4_g4

0x6c98,	// (0x0007252e) list_medium_line_x2

0x6c98,	// (0x0007252e) list_medium_line_x2_t2_g2

0x6c98,	// (0x0007252e) list_medium_line_x2_t2_g3

0x6c98,	// (0x0007252e) list_medium_line_x2_t2_g4

0x6c98,	// (0x0007252e) list_medium_line_x2_t3

0x6c98,	// (0x0007252e) list_medium_line_x2_t3_g2

0x6c98,	// (0x0007252e) list_medium_line_x2_t3_g3

0x6c98,	// (0x0007252e) list_medium_line_x2_t3_g4

0x6c98,	// (0x0007252e) list_medium_line_x2_t4_g2

0x6c98,	// (0x0007252e) list_medium_line_x2_t4_g4

0x6ca1,	// (0x00072537) list_medium_line_x3

0x6ca1,	// (0x00072537) list_medium_line_x3_t4

0x6ca1,	// (0x00072537) list_medium_line_x3_t4_g4

0x6c8f,	// (0x00072525) list_medium_line_x4_t4

0x6c8f,	// (0x00072525) list_medium_line_x4_t4_g7

0x6c8f,	// (0x00072525) list_medium_line_x4_t5

0x6caa,	// (0x00072540) list_single_fs_dyc_pane_ParamLimits

0x6caa,	// (0x00072540) list_single_fs_dyc_pane

0x12c4,	// (0x0006cb5a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x4_t4_g7_g1

0x7421,	// (0x00072cb7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7421,	// (0x00072cb7) list_medium_line_x4_t4_g7_g2

0x742d,	// (0x00072cc3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x742d,	// (0x00072cc3) list_medium_line_x4_t4_g7_g3

0x743c,	// (0x00072cd2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x743c,	// (0x00072cd2) list_medium_line_x4_t4_g7_g4

0x7448,	// (0x00072cde) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7448,	// (0x00072cde) list_medium_line_x4_t4_g7_g5

0x7457,	// (0x00072ced) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7457,	// (0x00072ced) list_medium_line_x4_t4_g7_g6

0x7466,	// (0x00072cfc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7466,	// (0x00072cfc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007b466) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007b466) list_medium_line_x4_t4_g7_g

0x7472,	// (0x00072d08) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7472,	// (0x00072d08) list_medium_line_x4_t4_g7_t1

0x7487,	// (0x00072d1d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7487,	// (0x00072d1d) list_medium_line_x4_t4_g7_t2

0x749c,	// (0x00072d32) list_medium_line_x4_t4_g7_t3_ParamLimits

0x749c,	// (0x00072d32) list_medium_line_x4_t4_g7_t3

0x74b1,	// (0x00072d47) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74b1,	// (0x00072d47) list_medium_line_x4_t4_g7_t4

0x74c3,	// (0x00072d59) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74c3,	// (0x00072d59) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007b475) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007b475) list_medium_line_x4_t4_g7_t

0x74d5,	// (0x00072d6b) list_single_dyc_row_pane_ParamLimits

0x74d5,	// (0x00072d6b) list_single_dyc_row_pane

0x7bb5,	// (0x0007344b) call5_gesture_pane_ParamLimits

0x7bb5,	// (0x0007344b) call5_gesture_pane

0x7c0b,	// (0x000734a1) call5_windows_pane_ParamLimits

0x7c0b,	// (0x000734a1) call5_windows_pane

0x7cb1,	// (0x00073547) call5_swipe_1_pane_cp_ParamLimits

0x7cb1,	// (0x00073547) call5_swipe_1_pane_cp

0x7cbd,	// (0x00073553) call5_swipe_2_pane_cp_ParamLimits

0x7cbd,	// (0x00073553) call5_swipe_2_pane_cp

0xa4ed,	// (0x00075d83) call5_image_pane_cp

0x7cc9,	// (0x0007355f) popup_call5_audio_first_window_cp_ParamLimits

0x7cc9,	// (0x0007355f) popup_call5_audio_first_window_cp

0xe698,	// (0x00079f2e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe698,	// (0x00079f2e) call5_swipe_1_pane_g1_cp

0xe6d8,	// (0x00079f6e) call5_swipe_1_pane_g2_cp

0xe6b1,	// (0x00079f47) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b1,	// (0x00079f47) call5_swipe_1_pane_t1_cp

0xe698,	// (0x00079f2e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe698,	// (0x00079f2e) call5_swipe_2_pane_g1_cp

0xe6e0,	// (0x00079f76) call5_swipe_2_pane_g2_cp

0xe6e8,	// (0x00079f7e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e8,	// (0x00079f7e) call5_swipe_2_pane_t1_cp

0xa574,	// (0x00075e0a) main_sp_fs_email_pane

0xe6fd,	// (0x00079f93) main_sp_fs_listscroll_pane_te

0x7cd7,	// (0x0007356d) popup_sp_fs_action_menu_pane_ParamLimits

0x7cd7,	// (0x0007356d) popup_sp_fs_action_menu_pane

0xcc4c,	// (0x000784e2) bg_sp_fs_ctrlbar_pane_g1

0xe706,	// (0x00079f9c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70f,	// (0x00079fa5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe718,	// (0x00079fae) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc4c,	// (0x000784e2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007b563) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca25,	// (0x000782bb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca25,	// (0x000782bb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe721,	// (0x00079fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe721,	// (0x00079fb7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72d,	// (0x00079fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72d,	// (0x00079fc3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007b56c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007b56c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe739,	// (0x00079fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe739,	// (0x00079fcf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d1b,	// (0x000735b1) list_medium_line_t2_right_icon_g1

0x7d23,	// (0x000735b9) list_medium_line_t2_right_icon_t1

0x7d33,	// (0x000735c9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007b571) list_medium_line_t2_right_icon_t

0xc838,	// (0x000780ce) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc838,	// (0x000780ce) bg_sp_fs_ctrlbar_pane

0x7d8d,	// (0x00073623) main_sp_fs_ctrlbar_button_pane_cp01

0x7d97,	// (0x0007362d) main_sp_fs_ctrlbar_ddmenu_pane

0xe78b,	// (0x0007a021) main_sp_fs_ctrlbar_pane_g1

0xe797,	// (0x0007a02d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007b576) main_sp_fs_ctrlbar_pane_g

0xe7a3,	// (0x0007a039) main_sp_fs_ctrlbar_pane_t1

0x7da1,	// (0x00073637) main_sp_fs_ctrlbar_pane

0x7dc5,	// (0x0007365b) main_sp_fs_listscroll_pane_te_cp01

0x7de5,	// (0x0007367b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7de5,	// (0x0007367b) popup_sp_fs_action_menu_pane_cp01

0xa574,	// (0x00075e0a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa574,	// (0x00075e0a) bg_sp_fs_highlight_list_pane_cp01

0xa6cc,	// (0x00075f62) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa6cc,	// (0x00075f62) sp_fs_action_menu_list_gene_pane_g1

0xe7d3,	// (0x0007a069) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d3,	// (0x0007a069) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007b580) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007b580) sp_fs_action_menu_list_gene_pane_g

0xa6db,	// (0x00075f71) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6db,	// (0x00075f71) sp_fs_action_menu_list_gene_pane_t1

0xa6f3,	// (0x00075f89) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6f3,	// (0x00075f89) sp_fs_action_menu_list_gene_pane

0xe7e0,	// (0x0007a076) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7e0,	// (0x0007a076) popup_sp_fs_action_menu_bg_pane

0xa712,	// (0x00075fa8) sp_fs_action_menu_list_pane_ParamLimits

0xa712,	// (0x00075fa8) sp_fs_action_menu_list_pane

0x7e15,	// (0x000736ab) sp_fs_scroll_pane_cp01_ParamLimits

0x7e15,	// (0x000736ab) sp_fs_scroll_pane_cp01

0x7e3b,	// (0x000736d1) list_medium_line_plain_t2_t1

0x7e4b,	// (0x000736e1) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007b585) list_medium_line_plain_t2_t

0x7e5b,	// (0x000736f1) list_medium_line_plain_t3_t1

0x7e6b,	// (0x00073701) list_medium_line_plain_t3_t2

0x7e79,	// (0x0007370f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007b58a) list_medium_line_plain_t3_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t2_g2_g1

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007aadc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007aadc) list_medium_line_x2_t2_g2_g

0x2584,	// (0x0006de1a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2584,	// (0x0006de1a) list_medium_line_x2_t2_g2_t1

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007b591) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007b591) list_medium_line_x2_t2_g2_t

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t4_g2_g1

0x7e87,	// (0x0007371d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e87,	// (0x0007371d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007b596) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007b596) list_medium_line_x2_t4_g2_g

0x7e99,	// (0x0007372f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e99,	// (0x0007372f) list_medium_line_x2_t4_g2_t1

0x7eb0,	// (0x00073746) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7eb0,	// (0x00073746) list_medium_line_x2_t4_g2_t2

0x7ec5,	// (0x0007375b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ec5,	// (0x0007375b) list_medium_line_x2_t4_g2_t3

0x1311,	// (0x0006cba7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007b59b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007b59b) list_medium_line_x2_t4_g2_t

0x7ed7,	// (0x0007376d) list_medium_line_t3_right_iconx2_g1

0x7d1b,	// (0x000735b1) list_medium_line_t3_right_iconx2_g2

0x7edf,	// (0x00073775) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007b5a4) list_medium_line_t3_right_iconx2_g

0x7ee9,	// (0x0007377f) list_medium_line_t3_right_iconx2_t1

0x7ef9,	// (0x0007378f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007b5ab) list_medium_line_t3_right_iconx2_t

0x12c4,	// (0x0006cb5a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x3_t4_g4_g1

0x12d0,	// (0x0006cb66) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x3_t4_g4_g2

0x256c,	// (0x0006de02) list_medium_line_x3_t4_g4_g3_ParamLimits

0x256c,	// (0x0006de02) list_medium_line_x3_t4_g4_g3

0x7f07,	// (0x0007379d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f07,	// (0x0007379d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007b5b0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007b5b0) list_medium_line_x3_t4_g4_g

0x7f13,	// (0x000737a9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f13,	// (0x000737a9) list_medium_line_x3_t4_g4_t1

0x7f2a,	// (0x000737c0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f2a,	// (0x000737c0) list_medium_line_x3_t4_g4_t2

0x2599,	// (0x0006de2f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2599,	// (0x0006de2f) list_medium_line_x3_t4_g4_t3

0x7f45,	// (0x000737db) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f45,	// (0x000737db) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007b5b9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007b5b9) list_medium_line_x3_t4_g4_t

0x7f62,	// (0x000737f8) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f62,	// (0x000737f8) list_single_dyc_row_text_pane_t1

0x7fab,	// (0x00073841) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fab,	// (0x00073841) list_single_dyc_row_text_pane_t2

0xa732,	// (0x00075fc8) list_single_dyc_row_text_pane_t3_ParamLimits

0xa732,	// (0x00075fc8) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007b5c2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007b5c2) list_single_dyc_row_text_pane_t

0xa756,	// (0x00075fec) list_single_dyc_row_pane_g1_ParamLimits

0xa756,	// (0x00075fec) list_single_dyc_row_pane_g1

0xa762,	// (0x00075ff8) list_single_dyc_row_pane_g2_ParamLimits

0xa762,	// (0x00075ff8) list_single_dyc_row_pane_g2

0xa76e,	// (0x00076004) list_single_dyc_row_pane_g3_ParamLimits

0xa76e,	// (0x00076004) list_single_dyc_row_pane_g3

0xa77a,	// (0x00076010) list_single_dyc_row_pane_g4_ParamLimits

0xa77a,	// (0x00076010) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007b5cf) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007b5cf) list_single_dyc_row_pane_g

0xa786,	// (0x0007601c) list_single_dyc_row_text_pane_ParamLimits

0xa786,	// (0x0007601c) list_single_dyc_row_text_pane

0x9452,	// (0x00074ce8) bg_sp_fs_scroll_pane

0xe7ee,	// (0x0007a084) thumb_sp_fs_scroll_pane

0x65e9,	// (0x00071e7f) list_medium_line_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_g1

0x80e0,	// (0x00073976) list_medium_line_t1_ParamLimits

0x80e0,	// (0x00073976) list_medium_line_t1

0x12c4,	// (0x0006cb5a) list_medium_line_x2_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_g1

0x12d0,	// (0x0006cb66) list_medium_line_x2_g2_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007b5d8) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007b5d8) list_medium_line_x2_g

0xa7a5,	// (0x0007603b) list_medium_line_x2_t1_ParamLimits

0xa7a5,	// (0x0007603b) list_medium_line_x2_t1

0x12c4,	// (0x0006cb5a) list_medium_line_x3_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x3_g1

0x12d0,	// (0x0006cb66) list_medium_line_x3_g2_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007b5d8) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007b5d8) list_medium_line_x3_g

0xa7a5,	// (0x0007603b) list_medium_line_x3_t1_ParamLimits

0xa7a5,	// (0x0007603b) list_medium_line_x3_t1

0xe7f7,	// (0x0007a08d) thumb_sp_fs_scroll_pane_g1

0xe800,	// (0x0007a096) thumb_sp_fs_scroll_pane_g2

0xe809,	// (0x0007a09f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b5dd) thumb_sp_fs_scroll_pane_g

0xe7f7,	// (0x0007a08d) bg_sp_fs_scroll_pane_g1

0xe800,	// (0x0007a096) bg_sp_fs_scroll_pane_g2

0xe809,	// (0x0007a09f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007b5dd) bg_sp_fs_scroll_pane_g

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12c4,	// (0x0006cb5a) list_medium_line_x2_t3_g4_g1

0x136b,	// (0x0006cc01) list_medium_line_x2_t3_g4_g2_ParamLimits

0x136b,	// (0x0006cc01) list_medium_line_x2_t3_g4_g2

0x12d0,	// (0x0006cb66) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12d0,	// (0x0006cb66) list_medium_line_x2_t3_g4_g3

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12dc,	// (0x0006cb72) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007ab58) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007ab58) list_medium_line_x2_t3_g4_g

0x80f5,	// (0x0007398b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80f5,	// (0x0007398b) list_medium_line_x2_t3_g4_t1

0x810f,	// (0x000739a5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x810f,	// (0x000739a5) list_medium_line_x2_t3_g4_t2

0x1311,	// (0x0006cba7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1311,	// (0x0006cba7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007b5e4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007b5e4) list_medium_line_x2_t3_g4_t

0x65e9,	// (0x00071e7f) list_medium_line_g2_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_g2_g1

0x65f5,	// (0x00071e8b) list_medium_line_g2_g2_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007b296) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007b296) list_medium_line_g2_g

0x8128,	// (0x000739be) list_medium_line_g2_t1_ParamLimits

0x8128,	// (0x000739be) list_medium_line_g2_t1

0x65e9,	// (0x00071e7f) list_medium_line_t3_g2_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t3_g2_g1

0x65f5,	// (0x00071e8b) list_medium_line_t3_g2_g2_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007b296) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007b296) list_medium_line_t3_g2_g

0x813d,	// (0x000739d3) list_medium_line_t3_g2_t1_ParamLimits

0x813d,	// (0x000739d3) list_medium_line_t3_g2_t1

0x8157,	// (0x000739ed) list_medium_line_t3_g2_t2_ParamLimits

0x8157,	// (0x000739ed) list_medium_line_t3_g2_t2

0x816d,	// (0x00073a03) list_medium_line_t3_g2_t3_ParamLimits

0x816d,	// (0x00073a03) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007b5eb) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007b5eb) list_medium_line_t3_g2_t

0x7d1b,	// (0x000735b1) list_medium_line_right_icon_g1

0x8184,	// (0x00073a1a) list_medium_line_right_icon_t1

0x65e9,	// (0x00071e7f) list_medium_line_t2_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t2_g1

0x8192,	// (0x00073a28) list_medium_line_t2_t1_ParamLimits

0x8192,	// (0x00073a28) list_medium_line_t2_t1

0x81ac,	// (0x00073a42) list_medium_line_t2_t2_ParamLimits

0x81ac,	// (0x00073a42) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007b5f2) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007b5f2) list_medium_line_t2_t

0x65e9,	// (0x00071e7f) list_medium_line_t3_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t3_g1

0x81c5,	// (0x00073a5b) list_medium_line_t3_t1_ParamLimits

0x81c5,	// (0x00073a5b) list_medium_line_t3_t1

0x81df,	// (0x00073a75) list_medium_line_t3_t2_ParamLimits

0x81df,	// (0x00073a75) list_medium_line_t3_t2

0x81f5,	// (0x00073a8b) list_medium_line_t3_t3_ParamLimits

0x81f5,	// (0x00073a8b) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007b5f7) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007b5f7) list_medium_line_t3_t

0x65e9,	// (0x00071e7f) list_medium_line_g3_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_g3_g1

0x820a,	// (0x00073aa0) list_medium_line_g3_g2_ParamLimits

0x820a,	// (0x00073aa0) list_medium_line_g3_g2

0x65f5,	// (0x00071e8b) list_medium_line_g3_g3_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007b5fe) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007b5fe) list_medium_line_g3_g

0x8216,	// (0x00073aac) list_medium_line_g3_t1_ParamLimits

0x8216,	// (0x00073aac) list_medium_line_g3_t1

0x65e9,	// (0x00071e7f) list_medium_line_t2_g3_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t2_g3_g1

0x820a,	// (0x00073aa0) list_medium_line_t2_g3_g2_ParamLimits

0x820a,	// (0x00073aa0) list_medium_line_t2_g3_g2

0x65f5,	// (0x00071e8b) list_medium_line_t2_g3_g3_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007b5fe) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007b5fe) list_medium_line_t2_g3_g

0x822b,	// (0x00073ac1) list_medium_line_t2_g3_t1_ParamLimits

0x822b,	// (0x00073ac1) list_medium_line_t2_g3_t1

0x8245,	// (0x00073adb) list_medium_line_t2_g3_t2_ParamLimits

0x8245,	// (0x00073adb) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007b605) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007b605) list_medium_line_t2_g3_t

0x65e9,	// (0x00071e7f) list_medium_line_t3_g3_g1_ParamLimits

0x65e9,	// (0x00071e7f) list_medium_line_t3_g3_g1

0x820a,	// (0x00073aa0) list_medium_line_t3_g3_g2_ParamLimits

0x820a,	// (0x00073aa0) list_medium_line_t3_g3_g2

0x65f5,	// (0x00071e8b) list_medium_line_t3_g3_g3_ParamLimits

0x65f5,	// (0x00071e8b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007b5fe) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007b5fe) list_medium_line_t3_g3_g

0x8263,	// (0x00073af9) list_medium_line_t3_g3_t1_ParamLimits

0x8263,	// (0x00073af9) list_medium_line_t3_g3_t1

0x827c,	// (0x00073b12) list_medium_line_t3_g3_t2_ParamLimits

0x827c,	// (0x00073b12) list_medium_line_t3_g3_t2

0x8292,	// (0x00073b28) list_medium_line_t3_g3_t3_ParamLimits

0x8292,	// (0x00073b28) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007b60a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007b60a) list_medium_line_t3_g3_t

0x7ed7,	// (0x0007376d) list_medium_line_right_iconx2_g1

0x7d1b,	// (0x000735b1) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b611) list_medium_line_right_iconx2_g

0x82ac,	// (0x00073b42) list_medium_line_right_iconx2_t1

0x7ed7,	// (0x0007376d) list_medium_line_t2_right_iconx2_g1

0x7d1b,	// (0x000735b1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007b611) list_medium_line_t2_right_iconx2_g

0x82ba,	// (0x00073b50) list_medium_line_t2_right_iconx2_t1

0x82ca,	// (0x00073b60) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007b616) list_medium_line_t2_right_iconx2_t

0x82dc,	// (0x00073b72) list_medium_line_x4_t4_t1

0x82ea,	// (0x00073b80) list_medium_line_x4_t4_t2

0x82fa,	// (0x00073b90) list_medium_line_x4_t4_t3

0x830a,	// (0x00073ba0) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007b61b) list_medium_line_x4_t4_t

0x835d,	// (0x00073bf3) tport_appsw_pane_ParamLimits

0x835d,	// (0x00073bf3) tport_appsw_pane

0x8375,	// (0x00073c0b) tport_contact_pane_ParamLimits

0x8375,	// (0x00073c0b) tport_contact_pane

0x838d,	// (0x00073c23) tport_listscroll_pane_ParamLimits

0x838d,	// (0x00073c23) tport_listscroll_pane

0x83a7,	// (0x00073c3d) cell_tport_appsw_pane_ParamLimits

0x83a7,	// (0x00073c3d) cell_tport_appsw_pane

0xd6c8,	// (0x00078f5e) tport_appsw_pane_g1_ParamLimits

0xd6c8,	// (0x00078f5e) tport_appsw_pane_g1

0xe812,	// (0x0007a0a8) tport_contact_pane_g1

0xe1a7,	// (0x00079a3d) tport_contact_pane_t1

0xe81b,	// (0x0007a0b1) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007b624) tport_contact_pane_t

0xe829,	// (0x0007a0bf) list_tport_pane

0xe832,	// (0x0007a0c8) scroll_pane_cp_030

0x83ef,	// (0x00073c85) cell_tport_appsw_pane_g1

0x83ff,	// (0x00073c95) cell_tport_appsw_pane_t1

0x840d,	// (0x00073ca3) grid_highlight_pane_cp019

0x8415,	// (0x00073cab) list_tport_double_graphic_pane_ParamLimits

0x8415,	// (0x00073cab) list_tport_double_graphic_pane

0xa574,	// (0x00075e0a) list_highlight_pane_cp023_ParamLimits

0xa574,	// (0x00075e0a) list_highlight_pane_cp023

0x8422,	// (0x00073cb8) list_tport_double_graphic_pane_g1_ParamLimits

0x8422,	// (0x00073cb8) list_tport_double_graphic_pane_g1

0x842f,	// (0x00073cc5) list_tport_double_graphic_pane_t1_ParamLimits

0x842f,	// (0x00073cc5) list_tport_double_graphic_pane_t1

0x8444,	// (0x00073cda) list_tport_double_graphic_pane_t2_ParamLimits

0x8444,	// (0x00073cda) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007b630) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007b630) list_tport_double_graphic_pane_t

0x9452,	// (0x00074ce8) main_cale_note_pane

0x5dad,	// (0x00071643) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5dad,	// (0x00071643) cell_vitu2_function_top_wide_pane_cp01

0x7838,	// (0x000730ce) wait_bar_pane_cp05_ParamLimits

0xa574,	// (0x00075e0a) listscroll_cmail_pane

0xe83b,	// (0x0007a0d1) list_cmail_pane

0xd8db,	// (0x00079171) list_cmail_body_pane

0x8456,	// (0x00073cec) list_single_cmail_header_caption_pane

0x846c,	// (0x00073d02) list_single_cmail_header_detail_pane_ParamLimits

0x846c,	// (0x00073d02) list_single_cmail_header_detail_pane

0xe84b,	// (0x0007a0e1) list_single_cmail_header_caption_pane_t1

0x8495,	// (0x00073d2b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8495,	// (0x00073d2b) list_single_cmail_header_detail_pane_g1

0xa7bb,	// (0x00076051) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa7bb,	// (0x00076051) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007b635) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007b635) list_single_cmail_header_detail_pane_g

0xa7c7,	// (0x0007605d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7c7,	// (0x0007605d) list_single_cmail_header_detail_pane_t1

0xa827,	// (0x000760bd) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa827,	// (0x000760bd) list_single_cmail_header_editor_pane_bg

0xe348,	// (0x00079bde) list_cmail_body_pane_g1

0xe86f,	// (0x0007a105) list_cmail_body_pane_t1

0xd6e8,	// (0x00078f7e) list_single_cmail_header_editor_pane_bg_g1

0xac2d,	// (0x000764c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6f8,	// (0x00078f8e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6f0,	// (0x00078f86) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90c,	// (0x000791a2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd718,	// (0x00078fae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd708,	// (0x00078f9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd710,	// (0x00078fa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac0d,	// (0x000764a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84ad,	// (0x00073d43) calenote_gesture_pane_ParamLimits

0x84ad,	// (0x00073d43) calenote_gesture_pane

0x84cd,	// (0x00073d63) calenote_window_pane_ParamLimits

0x84cd,	// (0x00073d63) calenote_window_pane

0xe87d,	// (0x0007a113) popup_note_window_cp01

0x84e9,	// (0x00073d7f) calenote_swipe_1_pane_ParamLimits

0x84e9,	// (0x00073d7f) calenote_swipe_1_pane

0x7cbd,	// (0x00073553) calenote_swipe_2_pane_ParamLimits

0x7cbd,	// (0x00073553) calenote_swipe_2_pane

0xe698,	// (0x00079f2e) calenote_swipe_1_pane_g1_ParamLimits

0xe698,	// (0x00079f2e) calenote_swipe_1_pane_g1

0xe6a5,	// (0x00079f3b) calenote_swipe_1_pane_g2_ParamLimits

0xe6a5,	// (0x00079f3b) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007b559) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007b559) calenote_swipe_1_pane_g

0xe88f,	// (0x0007a125) calenote_swipe_1_pane_t1_ParamLimits

0xe88f,	// (0x0007a125) calenote_swipe_1_pane_t1

0xe698,	// (0x00079f2e) calenote_swipe_2_pane_g1_ParamLimits

0xe698,	// (0x00079f2e) calenote_swipe_2_pane_g1

0xe8ae,	// (0x0007a144) calenote_swipe_2_pane_g2_ParamLimits

0xe8ae,	// (0x0007a144) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007b641) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007b641) calenote_swipe_2_pane_g

0xe8ba,	// (0x0007a150) calenote_swipe_2_pane_t1_ParamLimits

0xe8ba,	// (0x0007a150) calenote_swipe_2_pane_t1

0x9452,	// (0x00074ce8) main_mup_navstr_pane

0x4a7d,	// (0x00070313) main_mup3_pane_t7_ParamLimits

0x4a7d,	// (0x00070313) main_mup3_pane_t7

0x9b7b,	// (0x00075411) main_mp4_pane_g6_ParamLimits

0x9b7b,	// (0x00075411) main_mp4_pane_g6

0x9d1f,	// (0x000755b5) main_image3_pane_t4_ParamLimits

0x9d1f,	// (0x000755b5) main_image3_pane_t4

0x84fe,	// (0x00073d94) popup_navstr_preview_pane_ParamLimits

0x84fe,	// (0x00073d94) popup_navstr_preview_pane

0x8512,	// (0x00073da8) scroll_navstr_pane_ParamLimits

0x8512,	// (0x00073da8) scroll_navstr_pane

0x9452,	// (0x00074ce8) bg_popup_preview_window_pane_cp04

0xe8e1,	// (0x0007a177) popup_navstr_preview_pane_t1

0x8526,	// (0x00073dbc) scroll_navstr_pane_g1_ParamLimits

0x8526,	// (0x00073dbc) scroll_navstr_pane_g1

0x853a,	// (0x00073dd0) scroll_navstr_pane_t1_ParamLimits

0x853a,	// (0x00073dd0) scroll_navstr_pane_t1

0xe886,	// (0x0007a11c) bg_button_pane_cp014

0xe886,	// (0x0007a11c) bg_button_pane_cp030

0x7b5b,	// (0x000733f1) list_double_fisheye_pane_g4_ParamLimits

0x7b5b,	// (0x000733f1) list_double_fisheye_pane_g4

0x7b67,	// (0x000733fd) list_double_fisheye_pane_g5_ParamLimits

0x7b67,	// (0x000733fd) list_double_fisheye_pane_g5

0xca9a,	// (0x00078330) sp_fs_scroll_pane_cp03

0xe78b,	// (0x0007a021) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe797,	// (0x0007a02d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007b576) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a3,	// (0x0007a039) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe843,	// (0x0007a0d9) sp_fs_scroll_pane_cp02

0xa42c,	// (0x00075cc2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa42c,	// (0x00075cc2) popup_sp_fs_calendar_preview_list_single_pane

0x9452,	// (0x00074ce8) main_cam6_pano_pane

0x94ca,	// (0x00074d60) main_mup3_pane_ParamLimits

0x9452,	// (0x00074ce8) main_phacti_pane

0x770b,	// (0x00072fa1) bg_button_pane_cp11

0x7725,	// (0x00072fbb) main_mobtv_info_pane_g2_ParamLimits

0x7725,	// (0x00072fbb) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007b4d6) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007b4d6) main_mobtv_info_pane_g

0x7902,	// (0x00073198) sc_clock_pane_t5_ParamLimits

0x7902,	// (0x00073198) sc_clock_pane_t5

0x79bd,	// (0x00073253) main_radioblah_pane_g1_ParamLimits

0xe5e4,	// (0x00079e7a) main_radioblah_pane_t3_ParamLimits

0xe5e4,	// (0x00079e7a) main_radioblah_pane_t3

0xe5fc,	// (0x00079e92) main_radioblah_pane_t4_ParamLimits

0xe5fc,	// (0x00079e92) main_radioblah_pane_t4

0x79e5,	// (0x0007327b) main_radioblah_text_pane_ParamLimits

0x79e5,	// (0x0007327b) main_radioblah_text_pane

0x79f7,	// (0x0007328d) main_radioblah_info_pane_g1_ParamLimits

0x7a90,	// (0x00073326) main_radioblah_info_pane_t4_ParamLimits

0x7a90,	// (0x00073326) main_radioblah_info_pane_t4

0xa574,	// (0x00075e0a) main_sp_fs_calendar_pane

0x8551,	// (0x00073de7) main_phacti_pane_g1

0x8559,	// (0x00073def) phacti_note_pane_ParamLimits

0x8559,	// (0x00073def) phacti_note_pane

0xe8f8,	// (0x0007a18e) phacti_term_pane_ParamLimits

0xe8f8,	// (0x0007a18e) phacti_term_pane

0xe90d,	// (0x0007a1a3) phacti_note_pane_t1_ParamLimits

0xe90d,	// (0x0007a1a3) phacti_note_pane_t1

0xa83e,	// (0x000760d4) phacti_term_pane_g1

0xa846,	// (0x000760dc) phacti_term_pane_t1_ParamLimits

0xa846,	// (0x000760dc) phacti_term_pane_t1

0xe924,	// (0x0007a1ba) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa2e,	// (0x000762c4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007b64b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0007a1c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0007a1c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0007a1d8) aid_popup_sp_fs_bg_corner_pane

0xcc4c,	// (0x000784e2) popup_sp_fs_calendar_preview_bg_pane_g1

0x9452,	// (0x00074ce8) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0007a1e0) popup_sp_fs_calendar_preview_list_pane

0xc838,	// (0x000780ce) bg_main_sp_fs_cale_pane_ParamLimits

0xc838,	// (0x000780ce) bg_main_sp_fs_cale_pane

0xa879,	// (0x0007610f) listscroll_cale_mrui_pane_ParamLimits

0xa879,	// (0x0007610f) listscroll_cale_mrui_pane

0xa88e,	// (0x00076124) listscroll_sp_fs_schedule_track_pane

0xa897,	// (0x0007612d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa897,	// (0x0007612d) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0007a1e8) main_sp_fs_ribbon_pane

0xa8aa,	// (0x00076140) popup_sp_fs_cale_preview_window

0x85ce,	// (0x00073e64) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85ce,	// (0x00073e64) list_single_sp_fs_schedule_track_pane

0xa574,	// (0x00075e0a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa574,	// (0x00075e0a) bg_sp_fs_highlight_list_pane_cp03

0x85e1,	// (0x00073e77) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85e1,	// (0x00073e77) list_single_sp_fs_schedule_track_pane_g1

0x85ed,	// (0x00073e83) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85ed,	// (0x00073e83) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007b650) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007b650) list_single_sp_fs_schedule_track_pane_g

0x85f9,	// (0x00073e8f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85f9,	// (0x00073e8f) list_single_sp_fs_schedule_track_pane_t1

0x8613,	// (0x00073ea9) sp_fs_schedule_track_pane_ParamLimits

0x8613,	// (0x00073ea9) sp_fs_schedule_track_pane

0xe95a,	// (0x0007a1f0) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0007a1f8) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0007a200) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0007a208) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0007a210) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007b655) sp_fs_schedule_track_pane_g

0xd6e8,	// (0x00078f7e) bg_sp_fs_schedule_viewer_highlight_g1

0xac2d,	// (0x000764c3) bg_sp_fs_schedule_viewer_highlight_g2

0xd6f0,	// (0x00078f86) bg_sp_fs_schedule_viewer_highlight_g3

0xd6f8,	// (0x00078f8e) bg_sp_fs_schedule_viewer_highlight_g4

0xd90c,	// (0x000791a2) bg_sp_fs_schedule_viewer_highlight_g5

0xd708,	// (0x00078f9e) bg_sp_fs_schedule_viewer_highlight_g6

0xd710,	// (0x00078fa6) bg_sp_fs_schedule_viewer_highlight_g7

0xd718,	// (0x00078fae) bg_sp_fs_schedule_viewer_highlight_g8

0xac0d,	// (0x000764a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007b660) bg_sp_fs_schedule_viewer_highlight_g

0x9452,	// (0x00074ce8) bg_main_sp_fs_ribbon_pane

0x8624,	// (0x00073eba) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0007a218) main_sp_fs_ribbon_pane_t1

0x862d,	// (0x00073ec3) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0007a227) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007b673) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0007a236) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0007a23e) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0007a247) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0007a250) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007b67a) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0007a258) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x0007a261) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x0007a26a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007b681) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x0007a273) list_cale_mrui_pane

0x863c,	// (0x00073ed2) sp_fs_scroll_pane_cp07_ParamLimits

0x863c,	// (0x00073ed2) sp_fs_scroll_pane_cp07

0x8658,	// (0x00073eee) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8658,	// (0x00073eee) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x0007a280) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x0007a288) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x0007a290) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x0007a290) sp_fs_scroll_pane_cp06

0xcc4c,	// (0x000784e2) bgmain_sp_fs_calendar_pane_g1

0x8668,	// (0x00073efe) list_single_cale_mrui_pane_ParamLimits

0x8668,	// (0x00073efe) list_single_cale_mrui_pane

0xa8bc,	// (0x00076152) list_single_cale_mrui_row_pane_ParamLimits

0xa8bc,	// (0x00076152) list_single_cale_mrui_row_pane

0xa8c9,	// (0x0007615f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8c9,	// (0x0007615f) list_single_cale_mrui_row_pane_g1

0xa901,	// (0x00076197) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa901,	// (0x00076197) list_single_cale_mrui_row_pane_t1

0x8689,	// (0x00073f1f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8689,	// (0x00073f1f) list_single_cale_mrui_row_pane_t2

0xa913,	// (0x000761a9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa913,	// (0x000761a9) list_single_cale_mrui_row_pane_t3

0xa942,	// (0x000761d8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa942,	// (0x000761d8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007b68f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007b68f) list_single_cale_mrui_row_pane_t

0x86f1,	// (0x00073f87) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86f1,	// (0x00073f87) list_single_cmail_header_editor_pane_bg_cp01

0x8717,	// (0x00073fad) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8717,	// (0x00073fad) list_single_cmail_header_editor_pane_bg_cp02

0x8737,	// (0x00073fcd) main_radioblah_text_pane_t1_ParamLimits

0x8737,	// (0x00073fcd) main_radioblah_text_pane_t1

0xea19,	// (0x0007a2af) cam6_indi_pane_cp01

0xea21,	// (0x0007a2b7) cam6_mode_pane_cp01

0xea29,	// (0x0007a2bf) cam6_pano_pane

0xea32,	// (0x0007a2c8) cam6_zoom_pane_cp01

0xea3a,	// (0x0007a2d0) cam6_pano_image_pane

0xea45,	// (0x0007a2db) cam6_pano_pane_g1

0xe348,	// (0x00079bde) cam6_pano_pane_g2

0xea4e,	// (0x0007a2e4) cam6_pano_pane_g3

0xea57,	// (0x0007a2ed) cam6_pano_pane_g4

0xd238,	// (0x00078ace) cam6_pano_pane_g5

0xea60,	// (0x0007a2f6) cam6_pano_pane_g6

0xea6a,	// (0x0007a300) cam6_pano_pane_g7

0xea72,	// (0x0007a308) cam6_pano_pane_g8

0xea7b,	// (0x0007a311) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007b698) cam6_pano_pane_g

0x9452,	// (0x00074ce8) main_browser_tag_pane

0xe8d9,	// (0x0007a16f) grid_navstr_albumart_pane

0xea86,	// (0x0007a31c) cell_navstr_albumart_pane_ParamLimits

0xea86,	// (0x0007a31c) cell_navstr_albumart_pane

0xeaa6,	// (0x0007a33c) cell_navstr_albumart_pane_g1

0xc649,	// (0x00077edf) cell_navstr_albumart_pane_g2

0xc659,	// (0x00077eef) cell_navstr_albumart_pane_g3

0xc651,	// (0x00077ee7) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007b6ab) cell_navstr_albumart_pane_g

0x8751,	// (0x00073fe7) bt_list_pane_ParamLimits

0x8751,	// (0x00073fe7) bt_list_pane

0x8765,	// (0x00073ffb) bt_list_pane_t1

0x8774,	// (0x0007400a) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007b6b4) bt_list_pane_t

0x9452,	// (0x00074ce8) main_cale_prevew_pane

0x8783,	// (0x00074019) popup_cale_preview_window_ParamLimits

0x8783,	// (0x00074019) popup_cale_preview_window

0xa574,	// (0x00075e0a) bg_popup_preview_window_pane_cp05_ParamLimits

0xa574,	// (0x00075e0a) bg_popup_preview_window_pane_cp05

0xeaae,	// (0x0007a344) list_cale_preview_pane_ParamLimits

0xeaae,	// (0x0007a344) list_cale_preview_pane

0x879e,	// (0x00074034) list_double_cale_preview_pane_ParamLimits

0x879e,	// (0x00074034) list_double_cale_preview_pane

0x87b0,	// (0x00074046) list_single_cale_preview_pane_ParamLimits

0x87b0,	// (0x00074046) list_single_cale_preview_pane

0x87c6,	// (0x0007405c) list_single_cale_preview_pane_g1

0x87ce,	// (0x00074064) list_single_cale_preview_pane_t1_ParamLimits

0x87ce,	// (0x00074064) list_single_cale_preview_pane_t1

0x87e3,	// (0x00074079) list_double_cale_preview_pane_g1

0x87eb,	// (0x00074081) list_double_cale_preview_pane_t1_ParamLimits

0x87eb,	// (0x00074081) list_double_cale_preview_pane_t1

0x8800,	// (0x00074096) list_double_cale_preview_pane_t2_ParamLimits

0x8800,	// (0x00074096) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007b6b9) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007b6b9) list_double_cale_preview_pane_t

0x9452,	// (0x00074ce8) main_ezdial_pane

0xa574,	// (0x00075e0a) main_sp_fs_email_pane_ParamLimits

0x7d45,	// (0x000735db) cmail_ddmenu_btn01_pane_ParamLimits

0x7d45,	// (0x000735db) cmail_ddmenu_btn01_pane

0x7d58,	// (0x000735ee) cmail_ddmenu_btn02_pane_ParamLimits

0x7d58,	// (0x000735ee) cmail_ddmenu_btn02_pane

0x7d7b,	// (0x00073611) cmail_ddmenu_btn03_pane_ParamLimits

0x7d7b,	// (0x00073611) cmail_ddmenu_btn03_pane

0x7da1,	// (0x00073637) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dc5,	// (0x0007365b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd8db,	// (0x00079171) list_cmail_body_pane_ParamLimits

0xe859,	// (0x0007a0ef) bg_button_pane_cp12

0xe862,	// (0x0007a0f8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe862,	// (0x0007a0f8) list_single_cmail_header_detail_pane_g3

0xa803,	// (0x00076099) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa803,	// (0x00076099) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007b63c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007b63c) list_single_cmail_header_detail_pane_t

0xa85b,	// (0x000760f1) phacti_term_pane_t2_ParamLimits

0xa85b,	// (0x000760f1) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007b646) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007b646) phacti_term_pane_t

0xeaba,	// (0x0007a350) aid_size_list_single_double

0x8818,	// (0x000740ae) popup_ezdial_listscroll_window

0x8834,	// (0x000740ca) popup_number_entry_window_cp01

0xa4ed,	// (0x00075d83) bg_popup_call_pane_cp09

0xeac6,	// (0x0007a35c) ezdial_list_pane

0xeace,	// (0x0007a364) scroll_pane_cp23

0xc838,	// (0x000780ce) bg_button_pane_cp028_ParamLimits

0xc838,	// (0x000780ce) bg_button_pane_cp028

0x8842,	// (0x000740d8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8842,	// (0x000740d8) cmail_ddmenu_btn01_pane_g1

0x884e,	// (0x000740e4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x884e,	// (0x000740e4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007b6be) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007b6be) cmail_ddmenu_btn01_pane_g

0xead6,	// (0x0007a36c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead6,	// (0x0007a36c) cmail_ddmenu_btn01_pane_t1

0xc838,	// (0x000780ce) bg_button_pane_cp029_ParamLimits

0xc838,	// (0x000780ce) bg_button_pane_cp029

0x885a,	// (0x000740f0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x885a,	// (0x000740f0) cmail_ddmenu_btn02_pane_g1

0x8873,	// (0x00074109) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8873,	// (0x00074109) cmail_ddmenu_btn02_pane_t1

0xa574,	// (0x00075e0a) bg_button_pane_cp031_ParamLimits

0xa574,	// (0x00075e0a) bg_button_pane_cp031

0x885a,	// (0x000740f0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x885a,	// (0x000740f0) cmail_ddmenu_btn03_pane_g1

0x8873,	// (0x00074109) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8873,	// (0x00074109) cmail_ddmenu_btn03_pane_t1

0x5624,	// (0x00070eba) cell_dialer2_keypad_pane_t1_ParamLimits

0x563e,	// (0x00070ed4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x563e,	// (0x00070ed4) cell_dialer2_keypad_pane_t1_copy1

0x7564,	// (0x00072dfa) ncimui_group_button_pane

0xa574,	// (0x00075e0a) main_sp_fs_calendar_pane_ParamLimits

0x8456,	// (0x00073cec) list_single_cmail_header_caption_pane_ParamLimits

0xa870,	// (0x00076106) aid_recal_txt_sm_pane

0x9452,	// (0x00074ce8) mian_recal_day_pane

0xa8aa,	// (0x00076140) popup_sp_fs_cale_preview_window_ParamLimits

0xeaeb,	// (0x0007a381) list_recal_day_pane

0xa98c,	// (0x00076222) list_single_recal_day_pane_ParamLimits

0xa98c,	// (0x00076222) list_single_recal_day_pane

0xeb12,	// (0x0007a3a8) list_single_recal_day_pane_g1_ParamLimits

0xeb12,	// (0x0007a3a8) list_single_recal_day_pane_g1

0xa99e,	// (0x00076234) list_single_recal_day_pane_g2_ParamLimits

0xa99e,	// (0x00076234) list_single_recal_day_pane_g2

0xa9aa,	// (0x00076240) list_single_recal_day_pane_g3_ParamLimits

0xa9aa,	// (0x00076240) list_single_recal_day_pane_g3

0x8897,	// (0x0007412d) list_single_recal_day_pane_g4_ParamLimits

0x8897,	// (0x0007412d) list_single_recal_day_pane_g4

0xa9b6,	// (0x0007624c) list_single_recal_day_pane_g5_ParamLimits

0xa9b6,	// (0x0007624c) list_single_recal_day_pane_g5

0xa9c2,	// (0x00076258) list_single_recal_day_pane_g6_ParamLimits

0xa9c2,	// (0x00076258) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007b6cd) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007b6cd) list_single_recal_day_pane_g

0xa9d6,	// (0x0007626c) list_single_recal_day_pane_t1

0xa9e8,	// (0x0007627e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007b6d8) list_single_recal_day_pane_t

0x88af,	// (0x00074145) ncimui_query_button_pane_ParamLimits

0x88af,	// (0x00074145) ncimui_query_button_pane

0x88bf,	// (0x00074155) ncimui_query_button_pane_t1_ParamLimits

0x88bf,	// (0x00074155) ncimui_query_button_pane_t1

0xeb1e,	// (0x0007a3b4) ncimui_query_button_pane_t2_ParamLimits

0xeb1e,	// (0x0007a3b4) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007b6dd) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007b6dd) ncimui_query_button_pane_t

0x88d2,	// (0x00074168) query_button_pane_ParamLimits

0x88d2,	// (0x00074168) query_button_pane

0x9452,	// (0x00074ce8) bg_button_pane_cp0028

0xeb31,	// (0x0007a3c7) query_button_pane_t1

0x36dc,	// (0x0006ef72) main_tport_pane_ParamLimits

0x831a,	// (0x00073bb0) bg_popup_window_pane_cp01_ParamLimits

0x831a,	// (0x00073bb0) bg_popup_window_pane_cp01

0x8335,	// (0x00073bcb) heading_pane_cp08_ParamLimits

0x8335,	// (0x00073bcb) heading_pane_cp08

0x8348,	// (0x00073bde) heading_pane_cp07_ParamLimits

0x8348,	// (0x00073bde) heading_pane_cp07

0x83ef,	// (0x00073c85) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007b629) cell_tport_appsw_pane_g

0xa536,	// (0x00075dcc) input_candi_list_open_g1

0xadf0,	// (0x00076686) list_cale_time_pane_g6_ParamLimits

0xadf0,	// (0x00076686) list_cale_time_pane_g6

0x44a5,	// (0x0006fd3b) aid_size_touch_calib_1_ParamLimits

0x44a5,	// (0x0006fd3b) aid_size_touch_calib_1

0x44b7,	// (0x0006fd4d) aid_size_touch_calib_2_ParamLimits

0x44b7,	// (0x0006fd4d) aid_size_touch_calib_2

0x44cf,	// (0x0006fd65) aid_size_touch_calib_3_ParamLimits

0x44cf,	// (0x0006fd65) aid_size_touch_calib_3

0x44ed,	// (0x0006fd83) aid_size_touch_calib_4_ParamLimits

0x44ed,	// (0x0006fd83) aid_size_touch_calib_4

0x4505,	// (0x0006fd9b) main_touch_calib_button_group_pane_ParamLimits

0x4505,	// (0x0006fd9b) main_touch_calib_button_group_pane

0x451d,	// (0x0006fdb3) main_touch_calib_pane_g1_ParamLimits

0x452f,	// (0x0006fdc5) main_touch_calib_pane_g2_ParamLimits

0x4541,	// (0x0006fdd7) main_touch_calib_pane_g3_ParamLimits

0x4553,	// (0x0006fde9) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007afe7) main_touch_calib_pane_g_ParamLimits

0x4565,	// (0x0006fdfb) main_touch_calib_pane_t1_ParamLimits

0x457f,	// (0x0006fe15) main_touch_calib_pane_t2_ParamLimits

0x4599,	// (0x0006fe2f) main_touch_calib_pane_t3_ParamLimits

0x45ad,	// (0x0006fe43) main_touch_calib_pane_t4_ParamLimits

0x45c1,	// (0x0006fe57) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007aff0) main_touch_calib_pane_t_ParamLimits

0xcfd8,	// (0x0007886e) list_single_fp_cale_pane_g3_ParamLimits

0xcfd8,	// (0x0007886e) list_single_fp_cale_pane_g3

0x94ca,	// (0x00074d60) bg_button_pane_cp012_ParamLimits

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp03_ParamLimits

0x659f,	// (0x00071e35) cell_vitu2_function_top_pane_g1_ParamLimits

0x94ca,	// (0x00074d60) bg_vkb2_func_pane_cp04_ParamLimits

0x74f2,	// (0x00072d88) main_ncimui_button_group_pane_ParamLimits

0x74f2,	// (0x00072d88) main_ncimui_button_group_pane

0x7552,	// (0x00072de8) main_ncimui_pane_t3_ParamLimits

0x7552,	// (0x00072de8) main_ncimui_pane_t3

0xe8ef,	// (0x0007a185) phacti_button_group_pane

0xeaba,	// (0x0007a350) aid_size_list_single_double_ParamLimits

0x8818,	// (0x000740ae) popup_ezdial_listscroll_window_ParamLimits

0x8834,	// (0x000740ca) popup_number_entry_window_cp01_ParamLimits

0x88e5,	// (0x0007417b) phacti_button_pane_ParamLimits

0x88e5,	// (0x0007417b) phacti_button_pane

0x9452,	// (0x00074ce8) bg_button_pane_cp14

0xeb3f,	// (0x0007a3d5) phacti_button_pane_t1

0x88f6,	// (0x0007418c) main_touch_calib_button_pane_ParamLimits

0x88f6,	// (0x0007418c) main_touch_calib_button_pane

0xa328,	// (0x00075bbe) bg_button_pane_cp18_ParamLimits

0xa328,	// (0x00075bbe) bg_button_pane_cp18

0xeb4d,	// (0x0007a3e3) main_touch_calib_button_pane_t1_ParamLimits

0xeb4d,	// (0x0007a3e3) main_touch_calib_button_pane_t1

0xeb63,	// (0x0007a3f9) main_touch_calib_button_pane_t2_ParamLimits

0xeb63,	// (0x0007a3f9) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007b6e2) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007b6e2) main_touch_calib_button_pane_t

0x9452,	// (0x00074ce8) cell_ncimui_button_pane

0x9452,	// (0x00074ce8) bg_button_pane_cp032

0xeb81,	// (0x0007a417) cell_ncimui_button_pane_t1

0x9cff,	// (0x00075595) image3_infobar_pane_ParamLimits

0x9cff,	// (0x00075595) image3_infobar_pane

0x792e,	// (0x000731c4) fs_bigclock_status_pane_ParamLimits

0x792e,	// (0x000731c4) fs_bigclock_status_pane

0x793b,	// (0x000731d1) main_fs_bigclock_clock_pane_ParamLimits

0x793b,	// (0x000731d1) main_fs_bigclock_clock_pane

0x795b,	// (0x000731f1) main_fs_bigclock_indi_pane_ParamLimits

0x795b,	// (0x000731f1) main_fs_bigclock_indi_pane

0x7985,	// (0x0007321b) main_fs_bigclock_swipe_pane_ParamLimits

0x7985,	// (0x0007321b) main_fs_bigclock_swipe_pane

0x9452,	// (0x00074ce8) main_fs_clock_dumped_data

0xe455,	// (0x00079ceb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe455,	// (0x00079ceb) list_single_fs_bigclock_indicator_pane_g1

0xe470,	// (0x00079d06) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe470,	// (0x00079d06) list_single_fs_bigclock_indicator_pane_g2

0xe48a,	// (0x00079d20) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48a,	// (0x00079d20) list_single_fs_bigclock_indicator_pane_g3

0xe4a4,	// (0x00079d3a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a4,	// (0x00079d3a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007b50a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007b50a) list_single_fs_bigclock_indicator_pane_g

0xe4cf,	// (0x00079d65) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4cf,	// (0x00079d65) list_single_fs_bigclock_indicator_pane_t1

0xe4f7,	// (0x00079d8d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f7,	// (0x00079d8d) list_single_fs_bigclock_indicator_pane_t2

0xe51f,	// (0x00079db5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe51f,	// (0x00079db5) list_single_fs_bigclock_indicator_pane_t3

0xe547,	// (0x00079ddd) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe547,	// (0x00079ddd) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007b515) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007b515) list_single_fs_bigclock_indicator_pane_t

0xeb8f,	// (0x0007a425) image3_infobar_fav_pane_ParamLimits

0xeb8f,	// (0x0007a425) image3_infobar_fav_pane

0xeb9f,	// (0x0007a435) image3_infobar_loc_pane_ParamLimits

0xeb9f,	// (0x0007a435) image3_infobar_loc_pane

0xebb3,	// (0x0007a449) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0007a449) image3_infobar_time_pane

0xcc4c,	// (0x000784e2) image3_infobar_time_pane_g1

0xebc3,	// (0x0007a459) image3_infobar_time_pane_t1

0xcc4c,	// (0x000784e2) image3_infobar_loc_pane_g1

0xebd1,	// (0x0007a467) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007b6e7) image3_infobar_loc_pane_g

0xebd9,	// (0x0007a46f) image3_infobar_loc_pane_t1

0xcc4c,	// (0x000784e2) image3_infobar_fav_pane_g1

0xebe7,	// (0x0007a47d) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007b6ec) image3_infobar_fav_pane_g

0xebef,	// (0x0007a485) fs_bigclock_status_battery_pane

0xebf8,	// (0x0007a48e) fs_bigclock_status_signal_pane

0xec01,	// (0x0007a497) fs_bigclock_status_title_pane

0xec0a,	// (0x0007a4a0) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0007a4a9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007b6f1) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0007a4b1) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0007a4ba) fs_bigclock_status_battery_pane_g2

0x0001,

0x0001,	// (0x0006b897) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0007a4c2) fs_bigclock_status_title_pane_t1

0xcc4c,	// (0x000784e2) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0007a4d0) main_fs_bigclock_clock_pane_g2

0xec43,	// (0x0007a4d9) main_fs_bigclock_clock_pane_g3

0xec43,	// (0x0007a4d9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0007b6f6) main_fs_bigclock_clock_pane_g

0xec4b,	// (0x0007a4e1) main_fs_bigclock_clock_pane_t1

0x890b,	// (0x000741a1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0007b6ff) main_fs_bigclock_clock_pane_t

0xec59,	// (0x0007a4ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec59,	// (0x0007a4ef) list_single_fs_bigclock_indicator_pane

0xec6a,	// (0x0007a500) list_single_fs_bigclock_pane_ParamLimits

0xec6a,	// (0x0007a500) list_single_fs_bigclock_pane

0xec90,	// (0x0007a526) main_fs_bigclock_indicator_pane_t1

0xec9f,	// (0x0007a535) list_single_fs_bigclock_pane_g1

0xeca7,	// (0x0007a53d) list_single_fs_bigclock_pane_t1

0xcc4c,	// (0x000784e2) main_fs_bigclock_swipe_pane_g1

0xecea,	// (0x0007a580) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe75,	// (0x0007b70b) main_fs_bigclock_swipe_pane_g

0xecf2,	// (0x0007a588) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf2,	// (0x0007a588) main_fs_bigclock_swipe_pane_t1

0x25c3,	// (0x0006de59) call_type_pane_ParamLimits

0x9452,	// (0x00074ce8) main_btmg_pane

0xa8f5,	// (0x0007618b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8f5,	// (0x0007618b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007b688) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007b688) list_single_cale_mrui_row_pane_g

0xa97b,	// (0x00076211) list_recal_vselct_arw_lo_pane

0xeb0a,	// (0x0007a3a0) list_recal_vselct_arw_up_pane

0xa983,	// (0x00076219) list_recal_vselct_pane

0x895e,	// (0x000741f4) btmg_button_pane

0x8968,	// (0x000741fe) main_btmg_pane_g1

0x9452,	// (0x00074ce8) bg_button_pane_cp044

0xed0f,	// (0x0007a5a5) btmg_button_pane_t1

0xc824,	// (0x000780ba) aid_listscroll_gen

0xa574,	// (0x00075e0a) main_cntbar_detail_pane

0xe83b,	// (0x0007a0d1) list_cmail_folder_pane

0xca9a,	// (0x00078330) sp_fs_scroll_pane_cp03_ParamLimits

0x8972,	// (0x00074208) list_single_fs_dyc_pane_cp01_ParamLimits

0x8972,	// (0x00074208) list_single_fs_dyc_pane_cp01

0xed1d,	// (0x0007a5b3) aid_size_cmail_indent

0xa9fa,	// (0x00076290) list_single_dyc_row_pane_cp01

0x89ba,	// (0x00074250) cntbar_detail_list_pane_ParamLimits

0x89ba,	// (0x00074250) cntbar_detail_list_pane

0x8a06,	// (0x0007429c) main_cntbar_detail_cont_pane_ParamLimits

0x8a06,	// (0x0007429c) main_cntbar_detail_cont_pane

0xca9a,	// (0x00078330) scroll_pane_cp032_ParamLimits

0xca9a,	// (0x00078330) scroll_pane_cp032

0x8a1a,	// (0x000742b0) cntbar_detail_list_event_pane_ParamLimits

0x8a1a,	// (0x000742b0) cntbar_detail_list_event_pane

0x89ca,	// (0x00074260) cntbar_detail_list_shct_pane

0xac7b,	// (0x00076511) aid_list_gen

0xed26,	// (0x0007a5bc) aid_scroll

0xed2f,	// (0x0007a5c5) aid_size_touch_scroll_bar

0x6c98,	// (0x0007252e) aid_list_double

0x6c86,	// (0x0007251c) aid_list_single

0x6c86,	// (0x0007251c) aid_list_single_lg

0x8a2a,	// (0x000742c0) aid_list_z_g_a_sm

0x8a32,	// (0x000742c8) aid_list_z_g_d

0x8a3a,	// (0x000742d0) aid_txt_z_prm

0x8a48,	// (0x000742de) aid_txt_z_prm_cp01

0x8a56,	// (0x000742ec) aid_txt_z_sec

0x8a64,	// (0x000742fa) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a64,	// (0x000742fa) main_cntbar_detail_cont_pane_g1

0x8a78,	// (0x0007430e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a78,	// (0x0007430e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7a,	// (0x0007b710) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7a,	// (0x0007b710) main_cntbar_detail_cont_pane_g

0xed38,	// (0x0007a5ce) main_cntbar_detail_cont_pane_t1

0xed46,	// (0x0007a5dc) main_cntbar_detail_cont_pane_t2

0xed54,	// (0x0007a5ea) main_cntbar_detail_cont_pane_t3

0x0002,

0x002a,	// (0x0006b8c0) main_cntbar_detail_cont_pane_t

0x8a88,	// (0x0007431e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a88,	// (0x0007431e) cell_cntbar_detail_list_shct_pane

0xed62,	// (0x0007a5f8) cntbar_detail_list_shct_pane_g1

0xed6b,	// (0x0007a601) cntbar_detail_list_shct_pane_g2

0x0001,

0x0031,	// (0x0006b8c7) cntbar_detail_list_shct_pane_g

0x8a9c,	// (0x00074332) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a9c,	// (0x00074332) cntbar_detail_list_event_pane_g1

0x8aa8,	// (0x0007433e) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aa8,	// (0x0007433e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7f,	// (0x0007b715) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7f,	// (0x0007b715) cntbar_detail_list_event_pane_g

0x8b14,	// (0x000743aa) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b14,	// (0x000743aa) cntbar_detail_list_event_pane_t1

0x8b29,	// (0x000743bf) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b29,	// (0x000743bf) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8c,	// (0x0007b722) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8c,	// (0x0007b722) cntbar_detail_list_event_pane_t

0xcc4c,	// (0x000784e2) cell_cntbar_detail_list_shct_pane_g1

0xb3f2,	// (0x00076c88) navi_pane_mv_g3

0xa574,	// (0x00075e0a) main_cntbar_detail_pane_ParamLimits

0x9452,	// (0x00074ce8) main_notif_wgt_pane

0x9b15,	// (0x000753ab) aid_tch_main_mp4_pane_g4

0x9cf7,	// (0x0007558d) popup_slider_window_cp02

0xa971,	// (0x00076207) list_recal_day_event_pane

0x8988,	// (0x0007421e) cntbar_detail_btn_pane_ParamLimits

0x8988,	// (0x0007421e) cntbar_detail_btn_pane

0x89a1,	// (0x00074237) cntbar_detail_btn_pane_cp01_ParamLimits

0x89a1,	// (0x00074237) cntbar_detail_btn_pane_cp01

0x89ca,	// (0x00074260) cntbar_detail_list_shct_pane_ParamLimits

0x89da,	// (0x00074270) cntbar_detail_pane_g1_ParamLimits

0x89da,	// (0x00074270) cntbar_detail_pane_g1

0x89ea,	// (0x00074280) cntbar_detail_pane_t1_ParamLimits

0x89ea,	// (0x00074280) cntbar_detail_pane_t1

0x8ab4,	// (0x0007434a) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ab4,	// (0x0007434a) cntbar_detail_list_event_pane_g3

0x8acc,	// (0x00074362) cntbar_detail_list_event_pane_g4_ParamLimits

0x8acc,	// (0x00074362) cntbar_detail_list_event_pane_g4

0x8ae4,	// (0x0007437a) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ae4,	// (0x0007437a) cntbar_detail_list_event_pane_g5

0x8afc,	// (0x00074392) cntbar_detail_list_event_pane_g6_ParamLimits

0x8afc,	// (0x00074392) cntbar_detail_list_event_pane_g6

0x8b3e,	// (0x000743d4) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b3e,	// (0x000743d4) cntbar_detail_list_event_pane_t3

0x8b50,	// (0x000743e6) popup_notif_wgt_window_ParamLimits

0x8b50,	// (0x000743e6) popup_notif_wgt_window

0x8b69,	// (0x000743ff) popup_submenu_window_cp01_ParamLimits

0x8b69,	// (0x000743ff) popup_submenu_window_cp01

0xa4ed,	// (0x00075d83) bg_popup_window_pane_cp10

0xed74,	// (0x0007a60a) listscroll_notif_wgt_pane

0xed86,	// (0x0007a61c) list_notif_wgt_window

0xed8f,	// (0x0007a625) scroll_pane_cp033

0x8b7f,	// (0x00074415) list_notif_wgt_row_pane_ParamLimits

0x8b7f,	// (0x00074415) list_notif_wgt_row_pane

0xed98,	// (0x0007a62e) aid_size_list_notif_wgt_del

0xeda5,	// (0x0007a63b) list_notif_wgt_row_pane_g1

0xedb1,	// (0x0007a647) list_notif_wgt_row_pane_g2

0xedc5,	// (0x0007a65b) list_notif_wgt_row_pane_g3

0x0002,

0x004a,	// (0x0006b8e0) list_notif_wgt_row_pane_g

0xedd2,	// (0x0007a668) list_notif_wgt_row_pane_t1

0xede8,	// (0x0007a67e) list_notif_wgt_row_pane_t2

0xedfa,	// (0x0007a690) list_notif_wgt_row_pane_t3

0x0002,

0x0051,	// (0x0006b8e7) list_notif_wgt_row_pane_t

0xd926,	// (0x000791bc) list_recal_day_event_pane_g1

0xee0c,	// (0x0007a6a2) list_recal_day_event_pane_t1

0x9452,	// (0x00074ce8) bg_button_pane_cp045

0x8b8f,	// (0x00074425) cntbar_detail_btn_pane_t1

0xc838,	// (0x000780ce) main_callh_pane_ParamLimits

0xc838,	// (0x000780ce) main_callh_pane

0x9452,	// (0x00074ce8) main_coverflow0_pane

0x9452,	// (0x00074ce8) main_wgtman_pane

0x799d,	// (0x00073233) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x799d,	// (0x00073233) main_fs_bigclock_unlock_btn_pane

0x83e7,	// (0x00073c7d) bg_button_pane_cp16

0x83f7,	// (0x00073c8d) cell_tport_appsw_pane_g3

0x8b9d,	// (0x00074433) cf0_flow_pane_ParamLimits

0x8b9d,	// (0x00074433) cf0_flow_pane

0xee1b,	// (0x0007a6b1) listscroll_cf0_pane

0xee26,	// (0x0007a6bc) main_cf0_pane_g1

0x8bb2,	// (0x00074448) main_cf0_pane_t1_ParamLimits

0x8bb2,	// (0x00074448) main_cf0_pane_t1

0x8bc9,	// (0x0007445f) main_cf0_pane_t2_ParamLimits

0x8bc9,	// (0x0007445f) main_cf0_pane_t2

0x0001,

0xfe93,	// (0x0007b729) main_cf0_pane_t_ParamLimits

0xfe93,	// (0x0007b729) main_cf0_pane_t

0xee38,	// (0x0007a6ce) scroll_pane_cp11

0x8be0,	// (0x00074476) cf0_flow_pane_g1

0x8be8,	// (0x0007447e) cf0_flow_pane_g2

0x0001,

0xfe98,	// (0x0007b72e) cf0_flow_pane_g

0x8bf0,	// (0x00074486) cf0_flow_pane_t1

0x9452,	// (0x00074ce8) main_call6_pane

0x9452,	// (0x00074ce8) main_calllock_pane

0x8bfe,	// (0x00074494) call6_btn_grp_pane_ParamLimits

0x8bfe,	// (0x00074494) call6_btn_grp_pane

0x8c18,	// (0x000744ae) call6_pane_g1_ParamLimits

0x8c18,	// (0x000744ae) call6_pane_g1

0x8c2d,	// (0x000744c3) popup_call6_1st_window_ParamLimits

0x8c2d,	// (0x000744c3) popup_call6_1st_window

0x8c3e,	// (0x000744d4) popup_call6_2nd_window_ParamLimits

0x8c3e,	// (0x000744d4) popup_call6_2nd_window

0x8c4f,	// (0x000744e5) cell_call6_btn_pane_ParamLimits

0x8c4f,	// (0x000744e5) cell_call6_btn_pane

0xa4ed,	// (0x00075d83) bg_popup_call2_in_pane_cp03

0xee43,	// (0x0007a6d9) popup_call6_1st_window_g1

0xee4b,	// (0x0007a6e1) popup_call6_1st_window_g2

0xee53,	// (0x0007a6e9) popup_call6_1st_window_g3

0x0002,

0x0067,	// (0x0006b8fd) popup_call6_1st_window_g

0xee5b,	// (0x0007a6f1) popup_call6_1st_window_t1

0xee6a,	// (0x0007a700) popup_call6_1st_window_t2

0xee7a,	// (0x0007a710) popup_call6_1st_window_t3

0x0002,

0x006e,	// (0x0006b904) popup_call6_1st_window_t

0xa4ed,	// (0x00075d83) bg_popup_call2_in_pane_cp04

0xee43,	// (0x0007a6d9) popup_call6_2nd_window_g1

0xee4b,	// (0x0007a6e1) popup_call6_2nd_window_g2

0xee53,	// (0x0007a6e9) popup_call6_2nd_window_g3

0x0002,

0x0067,	// (0x0006b8fd) popup_call6_2nd_window_g

0xee5b,	// (0x0007a6f1) popup_call6_2nd_window_t1

0x9452,	// (0x00074ce8) bg_button_pane_cp15

0xee8a,	// (0x0007a720) cell_call6_btn_pane_g1

0xee93,	// (0x0007a729) cell_call6_btn_pane_t1

0x8c63,	// (0x000744f9) listscroll_wgtman_pane_ParamLimits

0x8c63,	// (0x000744f9) listscroll_wgtman_pane

0x8c84,	// (0x0007451a) wgtman_btn_pane_ParamLimits

0x8c84,	// (0x0007451a) wgtman_btn_pane

0xb1f9,	// (0x00076a8f) aid_scroll_copy1

0xeea2,	// (0x0007a738) list_wgtman_pane

0x8cc7,	// (0x0007455d) wgtman_btn_pane_g1_ParamLimits

0x8cc7,	// (0x0007455d) wgtman_btn_pane_g1

0x8cf3,	// (0x00074589) wgtman_btn_pane_t1_ParamLimits

0x8cf3,	// (0x00074589) wgtman_btn_pane_t1

0xeeac,	// (0x0007a742) wgtman_btn_pane_t2_ParamLimits

0xeeac,	// (0x0007a742) wgtman_btn_pane_t2

0x0001,

0xfe9d,	// (0x0007b733) wgtman_btn_pane_t_ParamLimits

0xfe9d,	// (0x0007b733) wgtman_btn_pane_t

0x8d30,	// (0x000745c6) listrow_wgtman_pane_ParamLimits

0x8d30,	// (0x000745c6) listrow_wgtman_pane

0x8d42,	// (0x000745d8) listrow_wgtman_pane_g1

0x8d4f,	// (0x000745e5) listrow_wgtman_pane_g2

0x0001,

0xfea2,	// (0x0007b738) listrow_wgtman_pane_g

0x8d6d,	// (0x00074603) listrow_wgtman_pane_t1

0x8d85,	// (0x0007461b) listrow_wgtman_pane_t2

0x0001,

0xfea7,	// (0x0007b73d) listrow_wgtman_pane_t

0x8dab,	// (0x00074641) wait_bar_pane_cp09

0xeec3,	// (0x0007a759) main_calllock_btn_pane

0xeecd,	// (0x0007a763) main_calllock_pane_g1

0x9452,	// (0x00074ce8) bg_button_pane_cp17

0xeed9,	// (0x0007a76f) main_calllock_btn_pane_g1

0xeee2,	// (0x0007a778) main_calllock_btn_pane_t1

0x9452,	// (0x00074ce8) main_dialer3_pane

0x9452,	// (0x00074ce8) main_fmrd2_pane

0xcc4c,	// (0x000784e2) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0007a78f) main_fs_bigclock_unlock_btn_pane_t1

0x8dbd,	// (0x00074653) area_fmrd2_info_pane_ParamLimits

0x8dbd,	// (0x00074653) area_fmrd2_info_pane

0x8dce,	// (0x00074664) area_fmrd2_visual_pane_ParamLimits

0x8dce,	// (0x00074664) area_fmrd2_visual_pane

0x8ddc,	// (0x00074672) fmrd2_indi_pane_ParamLimits

0x8ddc,	// (0x00074672) fmrd2_indi_pane

0x8de9,	// (0x0007467f) area_fmrd2_visual_pane_g1

0x8df1,	// (0x00074687) area_fmrd2_visual_pane_t1

0x8e01,	// (0x00074697) area_fmrd2_visual_pane_t2

0x8e11,	// (0x000746a7) area_fmrd2_visual_pane_t3

0x0002,

0xfeb1,	// (0x0007b747) area_fmrd2_visual_pane_t

0x8e21,	// (0x000746b7) area_fmrd2_info_pane_g1

0x8e29,	// (0x000746bf) area_fmrd2_info_pane_t1

0x8e39,	// (0x000746cf) area_fmrd2_info_pane_t2

0x8e49,	// (0x000746df) area_fmrd2_info_pane_t3

0x8e59,	// (0x000746ef) area_fmrd2_info_pane_t4

0x0003,

0xfeb8,	// (0x0007b74e) area_fmrd2_info_pane_t

0x8e67,	// (0x000746fd) fmrd2_indi_pane_t1

0x8e77,	// (0x0007470d) fmrd2_indi_pane_t2

0x8e87,	// (0x0007471d) fmrd2_indi_pane_t3

0x0002,

0xfec1,	// (0x0007b757) fmrd2_indi_pane_t

0xe4b3,	// (0x00079d49) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b3,	// (0x00079d49) list_single_fs_bigclock_indicator_pane_g5

0xe563,	// (0x00079df9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe563,	// (0x00079df9) list_single_fs_bigclock_indicator_pane_t5

0x856d,	// (0x00073e03) aid_cell_bcale_month_pane_ParamLimits

0x856d,	// (0x00073e03) aid_cell_bcale_month_pane

0x858b,	// (0x00073e21) bcale_month_pane_ParamLimits

0x858b,	// (0x00073e21) bcale_month_pane

0x85af,	// (0x00073e45) bcale_preview_pane_ParamLimits

0x85af,	// (0x00073e45) bcale_preview_pane

0xeca7,	// (0x0007a53d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc6,	// (0x0007a55c) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc6,	// (0x0007a55c) list_single_fs_bigclock_pane_t2

0x0001,

0x001b,	// (0x0006b8b1) list_single_fs_bigclock_pane_t_ParamLimits

0x001b,	// (0x0006b8b1) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0007a787) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeac,	// (0x0007b742) main_fs_bigclock_unlock_btn_pane_g

0x8e97,	// (0x0007472d) aid_dia3_key_size_ParamLimits

0x8e97,	// (0x0007472d) aid_dia3_key_size

0x8ea6,	// (0x0007473c) aid_dia3_listrow_size_ParamLimits

0x8ea6,	// (0x0007473c) aid_dia3_listrow_size

0x8ebb,	// (0x00074751) dia3_keypad_fun_pane_ParamLimits

0x8ebb,	// (0x00074751) dia3_keypad_fun_pane

0x8ed7,	// (0x0007476d) dia3_keypad_num_pane_ParamLimits

0x8ed7,	// (0x0007476d) dia3_keypad_num_pane

0x8ef2,	// (0x00074788) dia3_listscroll_pane_ParamLimits

0x8ef2,	// (0x00074788) dia3_listscroll_pane

0x8f05,	// (0x0007479b) dia3_numentry_pane_ParamLimits

0x8f05,	// (0x0007479b) dia3_numentry_pane

0xef07,	// (0x0007a79d) dia3_list_pane

0xef12,	// (0x0007a7a8) scroll_pane_cp12

0x9452,	// (0x00074ce8) bg_dia3_numentry_pane

0x8f19,	// (0x000747af) dia3_numentry_pane_t1

0x8f28,	// (0x000747be) cell_dia3_key_num_pane

0x8f30,	// (0x000747c6) cell_dia3_key0_fun_pane_ParamLimits

0x8f30,	// (0x000747c6) cell_dia3_key0_fun_pane

0x8f44,	// (0x000747da) cell_dia3_key1_fun_pane_ParamLimits

0x8f44,	// (0x000747da) cell_dia3_key1_fun_pane

0x8f5c,	// (0x000747f2) dia3_listrow_pane

0xe1c2,	// (0x00079a58) bg_dia3_numentry_pane_g1

0x9452,	// (0x00074ce8) bg_button_pane_cp21

0xef1d,	// (0x0007a7b3) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0007a7c1) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0007a7d0) cell_dia3_key_num_pane_t3

0xef49,	// (0x0007a7df) cell_dia3_key_num_pane_t4

0x0003,

0x00a0,	// (0x0006b936) cell_dia3_key_num_pane_t

0x9452,	// (0x00074ce8) bg_button_pane_cp19

0x8f6e,	// (0x00074804) cell_dia3_key0_fun_pane_g1

0x9452,	// (0x00074ce8) bg_button_pane_cp20

0x8f76,	// (0x0007480c) cell_dia3_key1_fun_pane_g1

0x8f7e,	// (0x00074814) area_left_week_number_pane

0x8f8a,	// (0x00074820) area_top_day_name_pane

0x8f9d,	// (0x00074833) frame_month_view_pane

0xef58,	// (0x0007a7ee) grid_month_view_pane

0x8fb0,	// (0x00074846) cell_top_day_name_pane_ParamLimits

0x8fb0,	// (0x00074846) cell_top_day_name_pane

0x8fdd,	// (0x00074873) cell_area_left_week_number_pane_ParamLimits

0x8fdd,	// (0x00074873) cell_area_left_week_number_pane

0x8ff1,	// (0x00074887) cell_month_view_pane_ParamLimits

0x8ff1,	// (0x00074887) cell_month_view_pane

0xef66,	// (0x0007a7fc) frm_month_g1

0x901e,	// (0x000748b4) frm_month_g2

0x9031,	// (0x000748c7) frm_month_g3

0x9044,	// (0x000748da) frm_month_g4

0x9057,	// (0x000748ed) frm_month_g5

0x906a,	// (0x00074900) frm_month_g6

0x907d,	// (0x00074913) frm_month_g7

0xef73,	// (0x0007a809) frm_month_g8

0x9090,	// (0x00074926) frm_month_g9

0x90a0,	// (0x00074936) frm_month_g10

0x90b0,	// (0x00074946) frm_month_g11

0x90c0,	// (0x00074956) frm_month_g12

0x90d2,	// (0x00074968) frm_month_g13

0x90e4,	// (0x0007497a) frm_month_g14

0x90f8,	// (0x0007498e) frm_month_g15

0x910c,	// (0x000749a2) frm_month_g16

0x000f,

0xfec8,	// (0x0007b75e) frm_month_g

0xef80,	// (0x0007a816) cell_top_day_name_pane_t1

0x9120,	// (0x000749b6) cell_area_left_week_number_pane_g1

0x912c,	// (0x000749c2) cell_area_left_week_number_pane_t1

0xceb8,	// (0x0007874e) cell_month_view_pane_g1

0x913f,	// (0x000749d5) cell_month_view_pane_t1

0x9452,	// (0x00074ce8) main_fps_pane

0xe753,	// (0x00079fe9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe753,	// (0x00079fe9) cmail_ddmenu_btn02_pane_cp1

0xe76f,	// (0x0007a005) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76f,	// (0x0007a005) cmail_ddmenu_btn02_pane_cp2

0x8866,	// (0x000740fc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8866,	// (0x000740fc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007b6c3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007b6c3) cmail_ddmenu_btn02_pane_g

0x8885,	// (0x0007411b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8885,	// (0x0007411b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007b6c8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007b6c8) cmail_ddmenu_btn02_pane_t

0x9152,	// (0x000749e8) fps_text_pane_ParamLimits

0x9152,	// (0x000749e8) fps_text_pane

0x9169,	// (0x000749ff) main_fps_pane_g1_ParamLimits

0x9169,	// (0x000749ff) main_fps_pane_g1

0x9183,	// (0x00074a19) wait_bar_pane_cp010_ParamLimits

0x9183,	// (0x00074a19) wait_bar_pane_cp010

0x9194,	// (0x00074a2a) fps_text_pane_t1_ParamLimits

0x9194,	// (0x00074a2a) fps_text_pane_t1

0xe05b,	// (0x000798f1) cam4_image_uncrop_pane_g1

0xe064,	// (0x000798fa) cam4_image_uncrop_pane_g2

0x5aca,	// (0x00071360) cam4_image_uncrop_pane_g3

0x5ad3,	// (0x00071369) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007b184) cam4_image_uncrop_pane_g

0x8f5c,	// (0x000747f2) dia3_listrow_pane_ParamLimits

0x9452,	// (0x00074ce8) main_phob2_pane

0x83b8,	// (0x00073c4e) cell_tport_appsw_pane_cp02_ParamLimits

0x83b8,	// (0x00073c4e) cell_tport_appsw_pane_cp02

0x83cc,	// (0x00073c62) cell_tport_appsw_pane_cp03_ParamLimits

0x83cc,	// (0x00073c62) cell_tport_appsw_pane_cp03

0x9452,	// (0x00074ce8) phob2_contact_card_pane

0x9452,	// (0x00074ce8) phob2_listscroll_pane

0xef93,	// (0x0007a829) phob2_list_pane

0xef9b,	// (0x0007a831) scroll_pane_cp034

0x91ac,	// (0x00074a42) phob2_cc_data_pane_ParamLimits

0x91ac,	// (0x00074a42) phob2_cc_data_pane

0x91cb,	// (0x00074a61) phob2_cc_listscroll_pane_ParamLimits

0x91cb,	// (0x00074a61) phob2_cc_listscroll_pane

0x8d30,	// (0x000745c6) list_double_large_graphic_phob2_pane_ParamLimits

0x8d30,	// (0x000745c6) list_double_large_graphic_phob2_pane

0x91e9,	// (0x00074a7f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91e9,	// (0x00074a7f) list_double_large_graphic_phob2_pane_g1

0x91ff,	// (0x00074a95) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91ff,	// (0x00074a95) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee9,	// (0x0007b77f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee9,	// (0x0007b77f) list_double_large_graphic_phob2_pane_g

0x920b,	// (0x00074aa1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x920b,	// (0x00074aa1) list_double_large_graphic_phob2_pane_t1

0x9220,	// (0x00074ab6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9220,	// (0x00074ab6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeee,	// (0x0007b784) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeee,	// (0x0007b784) list_double_large_graphic_phob2_pane_t

0x9452,	// (0x00074ce8) list_highlight_pane_cp024

0x9232,	// (0x00074ac8) phob2_cc_button_pane

0x923a,	// (0x00074ad0) phob2_cc_data_pane_g1_ParamLimits

0x923a,	// (0x00074ad0) phob2_cc_data_pane_g1

0x924f,	// (0x00074ae5) phob2_cc_data_pane_g2_ParamLimits

0x924f,	// (0x00074ae5) phob2_cc_data_pane_g2

0x0001,

0xfef3,	// (0x0007b789) phob2_cc_data_pane_g_ParamLimits

0xfef3,	// (0x0007b789) phob2_cc_data_pane_g

0x925f,	// (0x00074af5) phob2_cc_data_pane_t1_ParamLimits

0x925f,	// (0x00074af5) phob2_cc_data_pane_t1

0x9277,	// (0x00074b0d) phob2_cc_data_pane_t2_ParamLimits

0x9277,	// (0x00074b0d) phob2_cc_data_pane_t2

0x928f,	// (0x00074b25) phob2_cc_data_pane_t3_ParamLimits

0x928f,	// (0x00074b25) phob2_cc_data_pane_t3

0x0002,

0xfef8,	// (0x0007b78e) phob2_cc_data_pane_t_ParamLimits

0xfef8,	// (0x0007b78e) phob2_cc_data_pane_t

0xefa3,	// (0x0007a839) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0007a839) phob2_cc_list_pane

0xd9bd,	// (0x00079253) scroll_pane_cp035_ParamLimits

0xd9bd,	// (0x00079253) scroll_pane_cp035

0xa574,	// (0x00075e0a) bg_button_pane_cp033

0xefaf,	// (0x0007a845) phob2_cc_button_pane_g1

0xefbb,	// (0x0007a851) phob2_cc_button_pane_t1

0xefd0,	// (0x0007a866) phob2_cc_button_pane_t2

0x0001,

0x00e0,	// (0x0006b976) phob2_cc_button_pane_t

0x92a7,	// (0x00074b3d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92a7,	// (0x00074b3d) list_double_large_graphic_phob2_cc_pane

0x92b9,	// (0x00074b4f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92b9,	// (0x00074b4f) list_double_large_graphic_phob2_cc_pane_g1

0x92c5,	// (0x00074b5b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92c5,	// (0x00074b5b) list_double_large_graphic_phob2_cc_pane_g2

0x92d1,	// (0x00074b67) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92d1,	// (0x00074b67) list_double_large_graphic_phob2_cc_pane_g3

0x92dd,	// (0x00074b73) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92dd,	// (0x00074b73) list_double_large_graphic_phob2_cc_pane_g4

0xaa03,	// (0x00076299) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaa03,	// (0x00076299) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeff,	// (0x0007b795) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeff,	// (0x0007b795) list_double_large_graphic_phob2_cc_pane_g

0x92e9,	// (0x00074b7f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92e9,	// (0x00074b7f) list_double_large_graphic_phob2_cc_pane_t1

0x9312,	// (0x00074ba8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9312,	// (0x00074ba8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff0a,	// (0x0007b7a0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff0a,	// (0x0007b7a0) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0007a878) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0007a878) list_highlight_pane_cp025

0xa574,	// (0x00075e0a) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0007a845) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0007a851) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0007a866) phob2_cc_button_pane_t2_ParamLimits

0x00e0,	// (0x0006b976) phob2_cc_button_pane_t_ParamLimits

0x042d,	// (0x0006bcc3) popup_wgtman_window

0xd802,	// (0x00079098) scroll_pane_cp038

0x8ca9,	// (0x0007453f) wgtman_btn_pane_cp_01_ParamLimits

0x8ca9,	// (0x0007453f) wgtman_btn_pane_cp_01

0xeff0,	// (0x0007a886) wgtman_content_pane

0xeff9,	// (0x0007a88f) wgtman_heading_pane

0x9452,	// (0x00074ce8) bg_heading_pane_cp02

0xf002,	// (0x0007a898) wgtman_heading_pane_g1

0xf00a,	// (0x0007a8a0) wgtman_heading_pane_t1

0xf018,	// (0x0007a8ae) scroll_pane_cp036

0xf020,	// (0x0007a8b6) wgtman_list_pane

0xf028,	// (0x0007a8be) wgtman_list_pane_t1_ParamLimits

0xf028,	// (0x0007a8be) wgtman_list_pane_t1

0x9d51,	// (0x000755e7) cam4_grid_pane

0x677f,	// (0x00072015) bg_button_pane_cp015_ParamLimits

0x6791,	// (0x00072027) bg_button_pane_cp016_ParamLimits

0x67a4,	// (0x0007203a) bg_button_pane_cp017_ParamLimits

0x67fc,	// (0x00072092) popup_vitu2_query_window_g3_ParamLimits

0x67fc,	// (0x00072092) popup_vitu2_query_window_g3

0x68b9,	// (0x0007214f) popup_vitu2_query_window_t6_ParamLimits

0x68b9,	// (0x0007214f) popup_vitu2_query_window_t6

0x68e4,	// (0x0007217a) popup_vitu2_query_window_t7_ParamLimits

0x68e4,	// (0x0007217a) popup_vitu2_query_window_t7

0xe05b,	// (0x000798f1) cam4_grid_pane_g1

0xe064,	// (0x000798fa) cam4_grid_pane_g2

0xf042,	// (0x0007a8d8) cam4_grid_pane_g3

0xf04b,	// (0x0007a8e1) cam4_grid_pane_g4

0x0003,

0xff0f,	// (0x0007b7a5) cam4_grid_pane_g

0x144b,	// (0x0006cce1) aid_placing_vt_slider_lsc_ParamLimits

0x1756,	// (0x0006cfec) vidtel_button_pane_ParamLimits

0x1756,	// (0x0006cfec) vidtel_button_pane

0x9452,	// (0x00074ce8) bg_button_pane_cp034

0x933b,	// (0x00074bd1) vidtel_button_pane_g1

0xf056,	// (0x0007a8ec) vidtel_button_pane_t1

0xd904,	// (0x0007919a) aid_size_vtel_slider_touch

0xd9bd,	// (0x00079253) scroll_pane_cp039

0xe200,	// (0x00079a96) ncim_query_button_pane_cp01_ParamLimits

0xe21f,	// (0x00079ab5) ncimui_query_pane_g1_ParamLimits

0xa574,	// (0x00075e0a) input_focus_pane_cp012_ParamLimits

0xe244,	// (0x00079ada) ncim_query_entry_pane_t1_ParamLimits

0xd9bd,	// (0x00079253) scroll_pane_cp039_ParamLimits

0xb2dd,	// (0x00076b73) navi_pane_bcale_mc_g1

0xb2e5,	// (0x00076b7b) navi_pane_bcale_mc_t1

0xe7b8,	// (0x0007a04e) main_sp_fs_email_pane_g1

0xe7c4,	// (0x0007a05a) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007b57b) main_sp_fs_email_pane_g

0xea0c,	// (0x0007a2a2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x0007a2a2) list_single_cale_mrui_row_pane_g3

0x88a5,	// (0x0007413b) list_single_recal_day_pane_g5_event_pane

0xa9ce,	// (0x00076264) list_single_recal_day_pane_g7

0xf06c,	// (0x0007a902) list_recal_day_event_pane_cp01

0xf075,	// (0x0007a90b) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007a913) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007a91b) list_recal_vselct_pane_cp01

0xd926,	// (0x000791bc) list_recal_day_event_pane_cp01_g1

0xaa0f,	// (0x000762a5) list_recal_day_event_pane_cp01_t1

0xa9d6,	// (0x0007626c) list_single_recal_day_pane_t1_ParamLimits

0xa9e8,	// (0x0007627e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007b6d8) list_single_recal_day_pane_t_ParamLimits

0xa263,	// (0x00075af9) bg_notes_pane_ParamLimits

0xa306,	// (0x00075b9c) list_notes_pane_ParamLimits

0x0776,	// (0x0006c00c) scroll_pane_cp06_ParamLimits

0xa328,	// (0x00075bbe) main_notes_pane_ParamLimits

0x9452,	// (0x00074ce8) main_welc_pane

0x9343,	// (0x00074bd9) main_welc_body_pane_ParamLimits

0x9343,	// (0x00074bd9) main_welc_body_pane

0x9361,	// (0x00074bf7) main_welc_opti_pane_ParamLimits

0x9361,	// (0x00074bf7) main_welc_opti_pane

0x93a6,	// (0x00074c3c) main_welc_pane_t1_ParamLimits

0x93a6,	// (0x00074c3c) main_welc_pane_t1

0x93c4,	// (0x00074c5a) main_welc_body_row_pane_ParamLimits

0x93c4,	// (0x00074c5a) main_welc_body_row_pane

0xe04d,	// (0x000798e3) main_welc_opti_row_pane_ParamLimits

0xe04d,	// (0x000798e3) main_welc_opti_row_pane

0xf08f,	// (0x0007a925) main_welc_opti_row_pane_g1

0x93d8,	// (0x00074c6e) main_welc_opti_row_pane_t1

0xf097,	// (0x0007a92d) main_welc_body_row_pane_t1

0xed7e,	// (0x0007a614) popup_notif_wgt_heading_pane

0xed98,	// (0x0007a62e) aid_size_list_notif_wgt_del_ParamLimits

0xeda5,	// (0x0007a63b) list_notif_wgt_row_pane_g1_ParamLimits

0xedb1,	// (0x0007a647) list_notif_wgt_row_pane_g2_ParamLimits

0xedc5,	// (0x0007a65b) list_notif_wgt_row_pane_g3_ParamLimits

0x004a,	// (0x0006b8e0) list_notif_wgt_row_pane_g_ParamLimits

0xedd2,	// (0x0007a668) list_notif_wgt_row_pane_t1_ParamLimits

0xede8,	// (0x0007a67e) list_notif_wgt_row_pane_t2_ParamLimits

0xedfa,	// (0x0007a690) list_notif_wgt_row_pane_t3_ParamLimits

0x0051,	// (0x0006b8e7) list_notif_wgt_row_pane_t_ParamLimits

0x8d42,	// (0x000745d8) listrow_wgtman_pane_g1_ParamLimits

0x8d4f,	// (0x000745e5) listrow_wgtman_pane_g2_ParamLimits

0xfea2,	// (0x0007b738) listrow_wgtman_pane_g_ParamLimits

0x8d6d,	// (0x00074603) listrow_wgtman_pane_t1_ParamLimits

0x8d85,	// (0x0007461b) listrow_wgtman_pane_t2_ParamLimits

0xfea7,	// (0x0007b73d) listrow_wgtman_pane_t_ParamLimits

0x8dab,	// (0x00074641) wait_bar_pane_cp09_ParamLimits

0x9452,	// (0x00074ce8) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007a93c) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007a944) popup_notif_wgt_heading_pane_t1

0x9452,	// (0x00074ce8) main_vids_pane

0x9452,	// (0x00074ce8) vids_listscroll_pane

0x93e7,	// (0x00074c7d) scroll_pane_cp040

0x9452,	// (0x00074ce8) vids_list_pane

0x93f2,	// (0x00074c88) vids_list_double_pane_ParamLimits

0x93f2,	// (0x00074c88) vids_list_double_pane

0x9403,	// (0x00074c99) vids_list_double_pane_g1

0x940c,	// (0x00074ca2) vids_list_double_pane_t1

0x941c,	// (0x00074cb2) vids_list_double_pane_t2

0x0001,

0xff1d,	// (0x0007b7b3) vids_list_double_pane_t

0x94ca,	// (0x00074d60) main_ncimui_pane_ParamLimits

0x7506,	// (0x00072d9c) main_ncimui_pane_g1_ParamLimits

0x7512,	// (0x00072da8) main_ncimui_pane_g2_ParamLimits

0x7512,	// (0x00072da8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007b480) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007b480) main_ncimui_pane_g

0x937c,	// (0x00074c12) main_welc_pane_g1_ParamLimits

0x937c,	// (0x00074c12) main_welc_pane_g1

0x9391,	// (0x00074c27) main_welc_pane_g2_ParamLimits

0x9391,	// (0x00074c27) main_welc_pane_g2

0x0001,

0xff18,	// (0x0007b7ae) main_welc_pane_g_ParamLimits

0xff18,	// (0x0007b7ae) main_welc_pane_g

0xa263,	// (0x00075af9) listscroll_mce_pane_ParamLimits

0xb432,	// (0x00076cc8) wait_bar_pane_cp10

0xc82c,	// (0x000780c2) main_cale_day_pane_ParamLimits

0xc82c,	// (0x000780c2) main_cale_week_pane_ParamLimits

0xa263,	// (0x00075af9) main_messa_pane_ParamLimits

0x4e06,	// (0x0007069c) main_clock2_btn_pane_ParamLimits

0x4e06,	// (0x0007069c) main_clock2_btn_pane

0xd060,	// (0x000788f6) main_clock2_btn_pane_cp01_ParamLimits

0xd060,	// (0x000788f6) main_clock2_btn_pane_cp01

0xe9dd,	// (0x0007a273) list_cale_mrui_pane_ParamLimits

0xee30,	// (0x0007a6c6) main_cf0_pane_g2

0x0001,

0x0058,	// (0x0006b8ee) main_cf0_pane_g

0x8f7e,	// (0x00074814) area_left_week_number_pane_ParamLimits

0x8f8a,	// (0x00074820) area_top_day_name_pane_ParamLimits

0x8f9d,	// (0x00074833) frame_month_view_pane_ParamLimits

0xef58,	// (0x0007a7ee) grid_month_view_pane_ParamLimits

0xef66,	// (0x0007a7fc) frm_month_g1_ParamLimits

0x901e,	// (0x000748b4) frm_month_g2_ParamLimits

0x9031,	// (0x000748c7) frm_month_g3_ParamLimits

0x9044,	// (0x000748da) frm_month_g4_ParamLimits

0x9057,	// (0x000748ed) frm_month_g5_ParamLimits

0x906a,	// (0x00074900) frm_month_g6_ParamLimits

0x907d,	// (0x00074913) frm_month_g7_ParamLimits

0xef73,	// (0x0007a809) frm_month_g8_ParamLimits

0x9090,	// (0x00074926) frm_month_g9_ParamLimits

0x90a0,	// (0x00074936) frm_month_g10_ParamLimits

0x90b0,	// (0x00074946) frm_month_g11_ParamLimits

0x90c0,	// (0x00074956) frm_month_g12_ParamLimits

0x90d2,	// (0x00074968) frm_month_g13_ParamLimits

0x90e4,	// (0x0007497a) frm_month_g14_ParamLimits

0x90f8,	// (0x0007498e) frm_month_g15_ParamLimits

0x910c,	// (0x000749a2) frm_month_g16_ParamLimits

0xfec8,	// (0x0007b75e) frm_month_g_ParamLimits

0xef80,	// (0x0007a816) cell_top_day_name_pane_t1_ParamLimits

0x9120,	// (0x000749b6) cell_area_left_week_number_pane_g1_ParamLimits

0x912c,	// (0x000749c2) cell_area_left_week_number_pane_t1_ParamLimits

0xceb8,	// (0x0007874e) cell_month_view_pane_g1_ParamLimits

0x913f,	// (0x000749d5) cell_month_view_pane_t1_ParamLimits

0xa25b,	// (0x00075af1) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007a952) main_clock2_btn_pane_t1

0xa574,	// (0x00075e0a) listscroll_cmail_pane_ParamLimits

0xe7b8,	// (0x0007a04e) main_sp_fs_email_pane_g1_ParamLimits

0xe7c4,	// (0x0007a05a) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007b57b) main_sp_fs_email_pane_g_ParamLimits

0xeaeb,	// (0x0007a381) list_recal_day_pane_ParamLimits

0xeafc,	// (0x0007a392) mian_recal_day_pane_t1

0x8021,	// (0x000738b7) list_single_dyc_row_text_pane_t4_ParamLimits

0x8021,	// (0x000738b7) list_single_dyc_row_text_pane_t4

0x806a,	// (0x00073900) list_single_dyc_row_text_pane_t5_ParamLimits

0x806a,	// (0x00073900) list_single_dyc_row_text_pane_t5

0xa744,	// (0x00075fda) list_single_dyc_row_text_pane_t6_ParamLimits

0xa744,	// (0x00075fda) list_single_dyc_row_text_pane_t6

0x242e,	// (0x0006dcc4) aid_mgn_list_cale_time_pane

0x94ca,	// (0x00074d60) main_gallery2_pane_ParamLimits

0xd076,	// (0x0007890c) main_clock2_pane_cp01_t1

0xd086,	// (0x0007891c) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007b05a) main_clock2_pane_cp01_t

0x0b30,	// (0x0006c3c6) cale_week_scroll_pane_g16_ParamLimits

0x0b30,	// (0x0006c3c6) cale_week_scroll_pane_g16

0xa4ed,	// (0x00075d83) vorec_slider_pane

0xf056,	// (0x0007a8ec) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
