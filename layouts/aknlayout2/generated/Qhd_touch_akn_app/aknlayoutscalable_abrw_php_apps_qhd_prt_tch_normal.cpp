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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001ab39 };

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
0x4eed,	// (0x0001fa26) Screen

0x4ef9,	// (0x0001fa32) application_window

0x4f05,	// (0x0001fa3e) area_bottom_pane_ParamLimits

0x4f05,	// (0x0001fa3e) area_bottom_pane

0x3718,	// (0x0001e251) area_top_pane_ParamLimits

0x3718,	// (0x0001e251) area_top_pane

0x377c,	// (0x0001e2b5) call_video_uplink_pane_ParamLimits

0x377c,	// (0x0001e2b5) call_video_uplink_pane

0x37bb,	// (0x0001e2f4) main_pane_ParamLimits

0x37bb,	// (0x0001e2f4) main_pane

0xe521,	// (0x0002905a) context_pane

0x7546,	// (0x0002207f) navi_pane

0x756c,	// (0x000220a5) popup_cale_events_window_ParamLimits

0x756c,	// (0x000220a5) popup_cale_events_window

0xe534,	// (0x0002906d) popup_mup_playback_window

0x7584,	// (0x000220bd) signal_pane

0xc64a,	// (0x00027183) main_browser_pane

0xc7fc,	// (0x00027335) main_burst_pane

0x3d78,	// (0x0001e8b1) main_calc_pane

0xe515,	// (0x0002904e) main_cale_day_pane

0x5109,	// (0x0001fc42) main_cale_month_pane

0xe515,	// (0x0002904e) main_cale_week_pane

0xc7fc,	// (0x00027335) main_call_pane

0xc2d8,	// (0x00026e11) main_call_poc_pane

0xc7fc,	// (0x00027335) main_camera_pane

0xc7fc,	// (0x00027335) main_chi_dic_pane

0xcfd2,	// (0x00027b0b) main_clock_pane

0xc2d8,	// (0x00026e11) main_fmradio_pane

0xc7fc,	// (0x00027335) main_graph_messa_pane

0xc2d8,	// (0x00026e11) main_help_pane

0xc64a,	// (0x00027183) main_im_pane

0xc533,	// (0x0002706c) main_image_pane_ParamLimits

0xc533,	// (0x0002706c) main_image_pane

0xc2d8,	// (0x00026e11) main_location2_pane

0xc7fc,	// (0x00027335) main_location_pane

0xc533,	// (0x0002706c) main_messa_pane

0xc2d8,	// (0x00026e11) main_mp2_pane

0xc7fc,	// (0x00027335) main_mp_pane

0xc2d8,	// (0x00026e11) main_msg_pane

0xc2d8,	// (0x00026e11) main_mup_eq_pane

0xc2d8,	// (0x00026e11) main_mup_pane

0xc64a,	// (0x00027183) main_notes_pane

0xc2d8,	// (0x00026e11) main_pec_pane

0xc2d8,	// (0x00026e11) main_phob_pane

0xc2d8,	// (0x00026e11) main_pinb_pane

0xc2d8,	// (0x00026e11) main_postcard_pane

0xc2d8,	// (0x00026e11) main_qdial_pane

0xc7fc,	// (0x00027335) main_skin_pane

0xc2d8,	// (0x00026e11) main_smil2_pane

0xc7fc,	// (0x00027335) main_smil_pane

0xc7fc,	// (0x00027335) main_video_pane

0xc7fc,	// (0x00027335) main_video_tele_pane

0xc533,	// (0x0002706c) main_viewer_pane_ParamLimits

0xc533,	// (0x0002706c) main_viewer_pane

0xc7fc,	// (0x00027335) main_vorec_pane

0x3dc4,	// (0x0001e8fd) popup_blid_sat_info_window_ParamLimits

0x3dc4,	// (0x0001e8fd) popup_blid_sat_info_window

0x3de4,	// (0x0001e91d) popup_dyc_status_message_window_ParamLimits

0x3de4,	// (0x0001e91d) popup_dyc_status_message_window

0x3df4,	// (0x0001e92d) popup_grid_large_graphic_window_ParamLimits

0x3df4,	// (0x0001e92d) popup_grid_large_graphic_window

0x3e85,	// (0x0001e9be) popup_loc_request_window_ParamLimits

0x3e85,	// (0x0001e9be) popup_loc_request_window

0x3ed2,	// (0x0001ea0b) popup_wml_address_window_ParamLimits

0x3ed2,	// (0x0001ea0b) popup_wml_address_window

0x7428,	// (0x00021f61) call_muted_g1

0x711b,	// (0x00021c54) popup_call_audio_conf_window_ParamLimits

0x711b,	// (0x00021c54) popup_call_audio_conf_window

0x7438,	// (0x00021f71) popup_call_audio_first_window_ParamLimits

0x7438,	// (0x00021f71) popup_call_audio_first_window

0x7478,	// (0x00021fb1) popup_call_audio_in_window_ParamLimits

0x7478,	// (0x00021fb1) popup_call_audio_in_window

0x749c,	// (0x00021fd5) popup_call_audio_out_window_ParamLimits

0x749c,	// (0x00021fd5) popup_call_audio_out_window

0x74be,	// (0x00021ff7) popup_call_audio_second_window_ParamLimits

0x74be,	// (0x00021ff7) popup_call_audio_second_window

0x74ee,	// (0x00022027) popup_call_audio_wait_window_ParamLimits

0x74ee,	// (0x00022027) popup_call_audio_wait_window

0x750f,	// (0x00022048) popup_number_entry_window_ParamLimits

0x750f,	// (0x00022048) popup_number_entry_window

0xbeb7,	// (0x000269f0) bg_popup_call_pane_cp05_ParamLimits

0xbeb7,	// (0x000269f0) bg_popup_call_pane_cp05

0xbed7,	// (0x00026a10) popup_number_entry_window_t1

0xbeea,	// (0x00026a23) popup_number_entry_window_t2

0xbefc,	// (0x00026a35) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00029b79) popup_number_entry_window_t

0xbf0e,	// (0x00026a47) text_title_cp2

0xbf21,	// (0x00026a5a) bg_popup_call_pane_cp_ParamLimits

0xbf21,	// (0x00026a5a) bg_popup_call_pane_cp

0xbf2f,	// (0x00026a68) call_thumbnail_pane

0xbf37,	// (0x00026a70) popup_call_audio_in_window_g1_ParamLimits

0xbf37,	// (0x00026a70) popup_call_audio_in_window_g1

0xbf43,	// (0x00026a7c) popup_call_audio_in_window_g2_ParamLimits

0xbf43,	// (0x00026a7c) popup_call_audio_in_window_g2

0xbf4f,	// (0x00026a88) popup_call_audio_in_window_g3_ParamLimits

0xbf4f,	// (0x00026a88) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00029b82) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00029b82) popup_call_audio_in_window_g

0xbf5b,	// (0x00026a94) popup_call_audio_in_window_t1_ParamLimits

0xbf5b,	// (0x00026a94) popup_call_audio_in_window_t1

0xbf77,	// (0x00026ab0) popup_call_audio_in_window_t2_ParamLimits

0xbf77,	// (0x00026ab0) popup_call_audio_in_window_t2

0xbf93,	// (0x00026acc) popup_call_audio_in_window_t3_ParamLimits

0xbf93,	// (0x00026acc) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00029b89) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00029b89) popup_call_audio_in_window_t

0xbf21,	// (0x00026a5a) bg_popup_call_pane_cp01_ParamLimits

0xbf21,	// (0x00026a5a) bg_popup_call_pane_cp01

0xbf2f,	// (0x00026a68) call_thumbnail_pane_cp02

0xbfa6,	// (0x00026adf) call_type_pane_cp022

0xbfae,	// (0x00026ae7) popup_call_audio_out_window_g1_ParamLimits

0xbfae,	// (0x00026ae7) popup_call_audio_out_window_g1

0xbfc0,	// (0x00026af9) popup_call_audio_out_window_g2_ParamLimits

0xbfc0,	// (0x00026af9) popup_call_audio_out_window_g2

0xbfcc,	// (0x00026b05) popup_call_audio_out_window_g3_ParamLimits

0xbfcc,	// (0x00026b05) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00029b90) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00029b90) popup_call_audio_out_window_g

0xbfde,	// (0x00026b17) popup_call_audio_out_window_t1_ParamLimits

0xbfde,	// (0x00026b17) popup_call_audio_out_window_t1

0xbff6,	// (0x00026b2f) popup_call_audio_out_window_t2_ParamLimits

0xbff6,	// (0x00026b2f) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00029b97) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00029b97) popup_call_audio_out_window_t

0xc00b,	// (0x00026b44) bg_popup_call_pane_ParamLimits

0xc00b,	// (0x00026b44) bg_popup_call_pane

0x4f7f,	// (0x0001fab8) call_thumbnail_pane_cp_ParamLimits

0x4f7f,	// (0x0001fab8) call_thumbnail_pane_cp

0xc08f,	// (0x00026bc8) call_type_pane_cp01_ParamLimits

0xc08f,	// (0x00026bc8) call_type_pane_cp01

0xc0d3,	// (0x00026c0c) popup_call_audio_first_window_g1_ParamLimits

0xc0d3,	// (0x00026c0c) popup_call_audio_first_window_g1

0xc11f,	// (0x00026c58) popup_call_audio_first_window_g2_ParamLimits

0xc11f,	// (0x00026c58) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00029b9c) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00029b9c) popup_call_audio_first_window_g

0xc163,	// (0x00026c9c) popup_call_audio_first_window_t1_ParamLimits

0xc163,	// (0x00026c9c) popup_call_audio_first_window_t1

0xc20f,	// (0x00026d48) popup_call_audio_first_window_t4_ParamLimits

0xc20f,	// (0x00026d48) popup_call_audio_first_window_t4

0xc2a9,	// (0x00026de2) popup_call_audio_first_window_t5_ParamLimits

0xc2a9,	// (0x00026de2) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00029ba1) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00029ba1) popup_call_audio_first_window_t

0xc2d8,	// (0x00026e11) bg_popup_call_pane_cp02

0xc2e2,	// (0x00026e1b) call_type_pane_cp023

0xc2ea,	// (0x00026e23) popup_call_audio_wait_window_g1

0xc2f2,	// (0x00026e2b) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00029ba8) popup_call_audio_wait_window_g

0xc2fa,	// (0x00026e33) popup_call_audio_wait_window_t3

0xc308,	// (0x00026e41) bg_popup_call_pane_cp03_ParamLimits

0xc308,	// (0x00026e41) bg_popup_call_pane_cp03

0xc368,	// (0x00026ea1) call_thumbnail_pane_cp011_ParamLimits

0xc368,	// (0x00026ea1) call_thumbnail_pane_cp011

0xc374,	// (0x00026ead) call_type_pane_cp034_ParamLimits

0xc374,	// (0x00026ead) call_type_pane_cp034

0xc3b0,	// (0x00026ee9) popup_call_audio_second_window_g1_ParamLimits

0xc3b0,	// (0x00026ee9) popup_call_audio_second_window_g1

0xc3ec,	// (0x00026f25) popup_call_audio_second_window_g2_ParamLimits

0xc3ec,	// (0x00026f25) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00029bad) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00029bad) popup_call_audio_second_window_g

0xc428,	// (0x00026f61) popup_call_audio_second_window_t1_ParamLimits

0xc428,	// (0x00026f61) popup_call_audio_second_window_t1

0xc4a9,	// (0x00026fe2) popup_call_audio_second_window_t2_ParamLimits

0xc4a9,	// (0x00026fe2) popup_call_audio_second_window_t2

0xc4df,	// (0x00027018) popup_call_audio_second_window_t3_ParamLimits

0xc4df,	// (0x00027018) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00029bb2) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00029bb2) popup_call_audio_second_window_t

0xc2d8,	// (0x00026e11) bg_popup_call_pane_cp04

0xc515,	// (0x0002704e) list_conf_pane

0xc51d,	// (0x00027056) popup_call_audio_conf_window_t1

0xc52b,	// (0x00027064) call_thumbnail_pane_g1

0xc533,	// (0x0002706c) bg_pinb_pane_ParamLimits

0xc533,	// (0x0002706c) bg_pinb_pane

0xc541,	// (0x0002707a) find_pinb_pane

0xc533,	// (0x0002706c) listscroll_pinb_pane_ParamLimits

0xc533,	// (0x0002706c) listscroll_pinb_pane

0xc54b,	// (0x00027084) pinb_bg_pane_g1

0xc54b,	// (0x00027084) pinb_bg_pane_g2

0xc54b,	// (0x00027084) pinb_bg_pane_g3

0xc54b,	// (0x00027084) pinb_bg_pane_g4

0xc54b,	// (0x00027084) pinb_bg_pane_g5

0xc54b,	// (0x00027084) pinb_bg_pane_g6

0xc54b,	// (0x00027084) pinb_bg_pane_g7

0xc54b,	// (0x00027084) pinb_bg_pane_g8

0xc54b,	// (0x00027084) pinb_bg_pane_g9

0xc54b,	// (0x00027084) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00029bb9) pinb_bg_pane_g

0xbead,	// (0x000269e6) grid_pinb_pane

0xbead,	// (0x000269e6) list_pinb_pane

0xc29b,	// (0x00026dd4) scroll_pane_cp01_ParamLimits

0xc29b,	// (0x00026dd4) scroll_pane_cp01

0xc555,	// (0x0002708e) find_pinb_pane_g1_ParamLimits

0xc555,	// (0x0002708e) find_pinb_pane_g1

0xc56d,	// (0x000270a6) find_pinb_pane_t1

0xc57f,	// (0x000270b8) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00029bd3) find_pinb_pane_t

0xc594,	// (0x000270cd) input_focus_pane_cp01_ParamLimits

0xc594,	// (0x000270cd) input_focus_pane_cp01

0xc5a0,	// (0x000270d9) cell_pinb_pane_ParamLimits

0xc5a0,	// (0x000270d9) cell_pinb_pane

0xc5ae,	// (0x000270e7) cell_pinb_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_pinb_pane_g1

0xc5bc,	// (0x000270f5) cell_pinb_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) cell_pinb_pane_g2

0xc5bc,	// (0x000270f5) cell_pinb_pane_g3_ParamLimits

0xc5bc,	// (0x000270f5) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00029bd8) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00029bd8) cell_pinb_pane_g

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp01

0xc5a0,	// (0x000270d9) list_pinb_item_pane_ParamLimits

0xc5a0,	// (0x000270d9) list_pinb_item_pane

0xbead,	// (0x000269e6) list_highlight_pane_cp02

0xc5ca,	// (0x00027103) list_pinb_item_pane_g1_ParamLimits

0xc5ca,	// (0x00027103) list_pinb_item_pane_g1

0xc5bc,	// (0x000270f5) list_pinb_item_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) list_pinb_item_pane_g2

0xc5ae,	// (0x000270e7) list_pinb_item_pane_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_pinb_item_pane_g3

0xc5bc,	// (0x000270f5) list_pinb_item_pane_g4_ParamLimits

0xc5bc,	// (0x000270f5) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00029bdf) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00029bdf) list_pinb_item_pane_g

0xc5d8,	// (0x00027111) list_pinb_item_pane_t1_ParamLimits

0xc5d8,	// (0x00027111) list_pinb_item_pane_t1

0x39a8,	// (0x0001e4e1) calc_display_pane

0x39c6,	// (0x0001e4ff) calc_paper_pane

0x39e2,	// (0x0001e51b) grid_calc_pane

0xbead,	// (0x000269e6) bg_list_pane_cp01

0xc5ec,	// (0x00027125) clock_g1

0xc5ec,	// (0x00027125) clock_g2

0x0001,

0xf0af,	// (0x00029be8) clock_g

0xc5f6,	// (0x0002712f) clock_t1_ParamLimits

0xc5f6,	// (0x0002712f) clock_t1

0xc60a,	// (0x00027143) clock_t2_ParamLimits

0xc60a,	// (0x00027143) clock_t2

0xc60a,	// (0x00027143) clock_t3_ParamLimits

0xc60a,	// (0x00027143) clock_t3

0xc60a,	// (0x00027143) clock_t4_ParamLimits

0xc60a,	// (0x00027143) clock_t4

0xc5f6,	// (0x0002712f) clock_t5_ParamLimits

0xc5f6,	// (0x0002712f) clock_t5

0xc60a,	// (0x00027143) clock_t6_ParamLimits

0xc60a,	// (0x00027143) clock_t6

0xc60a,	// (0x00027143) clock_t7_ParamLimits

0xc60a,	// (0x00027143) clock_t7

0xc60a,	// (0x00027143) clock_t8_ParamLimits

0xc60a,	// (0x00027143) clock_t8

0xc60a,	// (0x00027143) clock_t9_ParamLimits

0xc60a,	// (0x00027143) clock_t9

0x0008,

0xf0b4,	// (0x00029bed) clock_t_ParamLimits

0xf0b4,	// (0x00029bed) clock_t

0xbead,	// (0x000269e6) popup_clock_analogue_window_cp02

0xbead,	// (0x000269e6) popup_clock_digital_window_cp01

0xc2d8,	// (0x00026e11) listscroll_help_pane

0xc2d8,	// (0x00026e11) phob_pre_status_pane

0xc61e,	// (0x00027157) grid_qdial_pane

0xc533,	// (0x0002706c) listscroll_mce_pane

0xc533,	// (0x0002706c) bg_notes_pane

0xc628,	// (0x00027161) list_notes_pane

0x4fa3,	// (0x0001fadc) scroll_pane_cp06

0xc636,	// (0x0002716f) bg_calc_paper_pane

0x3a0e,	// (0x0001e547) list_calc_pane

0xc64a,	// (0x00027183) bg_calc_display_pane

0x3a28,	// (0x0001e561) calc_display_pane_t1

0x3a3d,	// (0x0001e576) calc_display_pane_t2

0x3a52,	// (0x0001e58b) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00029c00) calc_display_pane_t

0x3a64,	// (0x0001e59d) cell_calc_pane_ParamLimits

0x3a64,	// (0x0001e59d) cell_calc_pane

0xc656,	// (0x0002718f) bg_calc_paper_pane_g1

0xc662,	// (0x0002719b) bg_calc_paper_pane_g2

0xc66e,	// (0x000271a7) bg_calc_paper_pane_g3

0xc67a,	// (0x000271b3) bg_calc_paper_pane_g4

0xc686,	// (0x000271bf) bg_calc_paper_pane_g5

0x4fb2,	// (0x0001faeb) bg_calc_paper_pane_g6

0x4fc3,	// (0x0001fafc) bg_calc_paper_pane_g7

0x4fd4,	// (0x0001fb0d) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00029c07) bg_calc_paper_pane_g

0x4fe5,	// (0x0001fb1e) calc_bg_paper_pane_g9

0x4ff6,	// (0x0001fb2f) list_calc_item_pane_ParamLimits

0x4ff6,	// (0x0001fb2f) list_calc_item_pane

0xc692,	// (0x000271cb) list_calc_item_pane_g1

0x3a91,	// (0x0001e5ca) list_calc_item_pane_t1_ParamLimits

0x3a91,	// (0x0001e5ca) list_calc_item_pane_t1

0x3aa3,	// (0x0001e5dc) list_calc_item_pane_t2_ParamLimits

0x3aa3,	// (0x0001e5dc) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00029c18) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00029c18) list_calc_item_pane_t

0xc54b,	// (0x00027084) cell_calc_pane_g1

0xc69f,	// (0x000271d8) grid_highlight_pane_cp02

0x5022,	// (0x0001fb5b) bg_calc_display_pane_g1

0x3ad3,	// (0x0001e60c) bg_calc_display_pane_g2

0x502b,	// (0x0001fb64) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00029c22) bg_calc_display_pane_g

0x3add,	// (0x0001e616) cell_qdial_pane_ParamLimits

0x3add,	// (0x0001e616) cell_qdial_pane

0x5034,	// (0x0001fb6d) cell_qdial_pane_g1_ParamLimits

0x5034,	// (0x0001fb6d) cell_qdial_pane_g1

0x5041,	// (0x0001fb7a) cell_qdial_pane_g2_ParamLimits

0x5041,	// (0x0001fb7a) cell_qdial_pane_g2

0xc6c1,	// (0x000271fa) cell_qdial_pane_g3_ParamLimits

0xc6c1,	// (0x000271fa) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00029c29) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00029c29) cell_qdial_pane_g

0x505f,	// (0x0001fb98) cell_qdial_pane_t1_ParamLimits

0x505f,	// (0x0001fb98) cell_qdial_pane_t1

0x5077,	// (0x0001fbb0) cell_qdial_pane_t2_ParamLimits

0x5077,	// (0x0001fbb0) cell_qdial_pane_t2

0x508a,	// (0x0001fbc3) cell_qdial_pane_t3_ParamLimits

0x508a,	// (0x0001fbc3) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00029c32) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00029c32) cell_qdial_pane_t

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp04

0xc6cd,	// (0x00027206) thumbnail_qdial_pane_ParamLimits

0xc6cd,	// (0x00027206) thumbnail_qdial_pane

0xc729,	// (0x00027262) list_help_pane

0xc732,	// (0x0002726b) scroll_pane_cp02

0x509d,	// (0x0001fbd6) help_list_pane_t1_ParamLimits

0x509d,	// (0x0001fbd6) help_list_pane_t1

0x3af1,	// (0x0001e62a) bg_notes_pane_g2

0x3af9,	// (0x0001e632) bg_notes_pane_g3

0x3b01,	// (0x0001e63a) notes_bg_pane_g1

0x3b09,	// (0x0001e642) notes_bg_pane_g4

0x3b11,	// (0x0001e64a) notes_bg_pane_g5

0x3b19,	// (0x0001e652) notes_bg_pane_g6

0x3b21,	// (0x0001e65a) notes_bg_pane_g7

0x3b29,	// (0x0001e662) notes_bg_pane_g8

0x3b31,	// (0x0001e66a) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00029c50) notes_bg_pane_g

0x50d3,	// (0x0001fc0c) list_notes_text_pane_ParamLimits

0x50d3,	// (0x0001fc0c) list_notes_text_pane

0xc73b,	// (0x00027274) list_notes_text_pane_g1

0x50fb,	// (0x0001fc34) list_notes_text_pane_t1

0x5109,	// (0x0001fc42) listscroll_cale_week_pane

0x512e,	// (0x0001fc67) bg_cale_heading_pane

0xc75e,	// (0x00027297) bg_cale_pane_cp01

0x514e,	// (0x0001fc87) cale_week_corner_pane

0x5168,	// (0x0001fca1) cale_week_day_heading_pane

0x5188,	// (0x0001fcc1) cale_week_scroll_pane_g1

0x51a3,	// (0x0001fcdc) cale_week_scroll_pane_g2

0x51b6,	// (0x0001fcef) cale_week_scroll_pane_g3

0x51c9,	// (0x0001fd02) cale_week_scroll_pane_g4

0x51dc,	// (0x0001fd15) cale_week_scroll_pane_g5

0x51ef,	// (0x0001fd28) cale_week_scroll_pane_g6

0x5202,	// (0x0001fd3b) cale_week_scroll_pane_g7

0x5217,	// (0x0001fd50) cale_week_scroll_pane_g8

0x522c,	// (0x0001fd65) cale_week_scroll_pane_g9

0x523f,	// (0x0001fd78) cale_week_scroll_pane_g10

0x5252,	// (0x0001fd8b) cale_week_scroll_pane_g11

0x5265,	// (0x0001fd9e) cale_week_scroll_pane_g12

0x527c,	// (0x0001fdb5) cale_week_scroll_pane_g13

0x5297,	// (0x0001fdd0) cale_week_scroll_pane_g14

0x52b2,	// (0x0001fdeb) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00029c5f) cale_week_scroll_pane_g

0x52e2,	// (0x0001fe1b) cale_week_time_pane

0x52f7,	// (0x0001fe30) grid_cale_week_pane

0xc78d,	// (0x000272c6) scroll_pane_cp08

0x5316,	// (0x0001fe4f) cell_cale_week_pane_ParamLimits

0x5316,	// (0x0001fe4f) cell_cale_week_pane

0x5378,	// (0x0001feb1) cale_week_day_heading_pane_t1

0x5393,	// (0x0001fecc) cale_week_day_heading_pane_t2

0x53ae,	// (0x0001fee7) cale_week_day_heading_pane_t3

0x53c9,	// (0x0001ff02) cale_week_day_heading_pane_t4

0x53e4,	// (0x0001ff1d) cale_week_day_heading_pane_t5

0x53ff,	// (0x0001ff38) cale_week_day_heading_pane_t6

0x541a,	// (0x0001ff53) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00029c80) cale_week_day_heading_pane_t

0xc7aa,	// (0x000272e3) bg_cale_side_pane

0x3b39,	// (0x0001e672) cale_week_time_pane_t1

0x3b53,	// (0x0001e68c) cale_week_time_pane_t2

0x3b6d,	// (0x0001e6a6) cale_week_time_pane_t3

0x3b87,	// (0x0001e6c0) cale_week_time_pane_t4

0x3ba1,	// (0x0001e6da) cale_week_time_pane_t5

0x3bbb,	// (0x0001e6f4) cale_week_time_pane_t6

0x3bd9,	// (0x0001e712) cale_week_time_pane_t7

0x3bfb,	// (0x0001e734) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00029c8f) cale_week_time_pane_t

0x5435,	// (0x0001ff6e) cell_cale_week_pane_g2

0x5459,	// (0x0001ff92) cell_cale_week_pane_g3_ParamLimits

0x5459,	// (0x0001ff92) cell_cale_week_pane_g3

0xc7b8,	// (0x000272f1) grid_highlight_pane_cp07

0xc7c0,	// (0x000272f9) listscroll_gms_pane

0xc7ca,	// (0x00027303) grid_gms_pane

0xc7d3,	// (0x0002730c) listscroll_gms_pane_g1

0xc7db,	// (0x00027314) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00029ca0) listscroll_gms_pane_g

0x5471,	// (0x0001ffaa) scroll_pane_cp010

0x547c,	// (0x0001ffb5) cell_gms_pane_ParamLimits

0x547c,	// (0x0001ffb5) cell_gms_pane

0x548f,	// (0x0001ffc8) cell_gms_pane_g1

0xc7e3,	// (0x0002731c) cell_gms_pane_g2

0xc73b,	// (0x00027274) cell_gms_pane_g3

0xc7eb,	// (0x00027324) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00029ca5) cell_gms_pane_g

0xc7f4,	// (0x0002732d) grid_highlight_pane_cp09

0x73ac,	// (0x00021ee5) phob_pre_status_pane_g1

0x73b4,	// (0x00021eed) phob_pre_status_pane_g2

0x73bc,	// (0x00021ef5) phob_pre_status_pane_g3

0x73c4,	// (0x00021efd) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x0002a05e) phob_pre_status_pane_g

0x73d4,	// (0x00021f0d) phob_pre_status_pane_t1

0x73e4,	// (0x00021f1d) phob_pre_status_pane_t2

0x73f4,	// (0x00021f2d) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x0002a069) phob_pre_status_pane_t

0xc7fc,	// (0x00027335) bg_list_pane_cp05

0x549f,	// (0x0001ffd8) grid_vorec_pane

0x54a9,	// (0x0001ffe2) vorec_t1

0x54b7,	// (0x0001fff0) vorec_t2

0x54c5,	// (0x0001fffe) vorec_t3

0x54d3,	// (0x0002000c) vorec_t4

0x4ec8,	// (0x0001fa01) vorec_t5

0x4ed6,	// (0x0001fa0f) vorec_t6

0x0004,

0xf175,	// (0x00029cae) vorec_t

0x4ee4,	// (0x0001fa1d) wait_bar_pane_cp01

0x54ef,	// (0x00020028) cell_vorec_pane_ParamLimits

0x54ef,	// (0x00020028) cell_vorec_pane

0x3c1f,	// (0x0001e758) cell_vorec_pane_g1

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp05

0xc5a0,	// (0x000270d9) cams_zoom_pane

0xc5a0,	// (0x000270d9) image_vga_pane

0xc5bc,	// (0x000270f5) main_camera_pane_g1

0xc5bc,	// (0x000270f5) main_camera_pane_g2

0xc5bc,	// (0x000270f5) main_camera_pane_g3

0xc5bc,	// (0x000270f5) main_camera_pane_g4

0xc5bc,	// (0x000270f5) main_camera_pane_g5

0xc5bc,	// (0x000270f5) main_camera_pane_g6

0xc5bc,	// (0x000270f5) main_camera_pane_g7

0x0007,

0xf180,	// (0x00029cb9) main_camera_pane_g

0xc60a,	// (0x00027143) main_camera_pane_t1

0xc60a,	// (0x00027143) main_camera_pane_t2

0x0001,

0xf191,	// (0x00029cca) main_camera_pane_t

0x5502,	// (0x0002003b) cams_zoom_pane_cp_ParamLimits

0x5502,	// (0x0002003b) cams_zoom_pane_cp

0x5530,	// (0x00020069) image_cif_pane_ParamLimits

0x5530,	// (0x00020069) image_cif_pane

0xbead,	// (0x000269e6) image_subqcif_pane

0x553e,	// (0x00020077) main_video_pane_g1_ParamLimits

0x553e,	// (0x00020077) main_video_pane_g1

0x5566,	// (0x0002009f) main_video_pane_g2_ParamLimits

0x5566,	// (0x0002009f) main_video_pane_g2

0x5599,	// (0x000200d2) main_video_pane_g3_ParamLimits

0x5599,	// (0x000200d2) main_video_pane_g3

0x5599,	// (0x000200d2) main_video_pane_g4_ParamLimits

0x5599,	// (0x000200d2) main_video_pane_g4

0x55c7,	// (0x00020100) main_video_pane_g5_ParamLimits

0x55c7,	// (0x00020100) main_video_pane_g5

0xc804,	// (0x0002733d) main_video_pane_g6_ParamLimits

0xc804,	// (0x0002733d) main_video_pane_g6

0x0006,

0xf196,	// (0x00029ccf) main_video_pane_g_ParamLimits

0xf196,	// (0x00029ccf) main_video_pane_g

0x55e3,	// (0x0002011c) main_video_pane_t1_ParamLimits

0x55e3,	// (0x0002011c) main_video_pane_t1

0xc5ec,	// (0x00027125) cams_zoom_pane_g1

0xc5ec,	// (0x00027125) cams_zoom_pane_g2

0xc5ec,	// (0x00027125) cams_zoom_pane_g3

0xc5ec,	// (0x00027125) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00029cde) cams_zoom_pane_g

0xc5a0,	// (0x000270d9) grid_cams_pane

0xc5a0,	// (0x000270d9) linegrid_cams_pane

0x561d,	// (0x00020156) cell_cams_pane_ParamLimits

0x561d,	// (0x00020156) cell_cams_pane

0xbead,	// (0x000269e6) cams_burst_image_pane

0xc5ec,	// (0x00027125) cell_cams_pane_g1

0xbead,	// (0x000269e6) grid_highlight_pane_cp03

0xc54b,	// (0x00027084) mp_bg_pane_g1

0xbead,	// (0x000269e6) bg_list_pane_cp03

0xbead,	// (0x000269e6) bg_mp_pane

0xbead,	// (0x000269e6) grid_mp_pane

0xc5ec,	// (0x00027125) media_player_g1

0xcd5a,	// (0x00027893) media_player_t1

0xcd5a,	// (0x00027893) media_player_t2

0xcd5a,	// (0x00027893) media_player_t3

0xcd5a,	// (0x00027893) media_player_t4

0xcd5a,	// (0x00027893) media_player_t5

0xcd5a,	// (0x00027893) media_player_t6

0xcd5a,	// (0x00027893) media_player_t7

0x0006,

0xf50f,	// (0x0002a048) media_player_t

0xbead,	// (0x000269e6) wait_bar_pane_cp02

0xf4f4,	// (0x0002a02d) main_usb_pane_t

0xcfd2,	// (0x00027b0b) cell_mp_pane

0xc54b,	// (0x00027084) cell_mp_pane_g1

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp06

0xc81e,	// (0x00027357) grid_skin_colour_pane

0xc826,	// (0x0002735f) list_highlight_pane_cp03

0x5632,	// (0x0002016b) skin_g1

0xc82e,	// (0x00027367) skin_t1

0xc83d,	// (0x00027376) skin_t2

0x0001,

0xf1d3,	// (0x00029d0c) skin_t

0x563c,	// (0x00020175) cell_skin_colour_pane_ParamLimits

0x563c,	// (0x00020175) cell_skin_colour_pane

0xc84b,	// (0x00027384) cell_skin_colour_pane_g1

0x56c0,	// (0x000201f9) call_video_g1_ParamLimits

0x56c0,	// (0x000201f9) call_video_g1

0x56d0,	// (0x00020209) call_video_g2_ParamLimits

0x56d0,	// (0x00020209) call_video_g2

0x0001,

0xf1d8,	// (0x00029d11) call_video_g_ParamLimits

0xf1d8,	// (0x00029d11) call_video_g

0x572a,	// (0x00020263) call_video_uplink_pane_cp1_ParamLimits

0x572a,	// (0x00020263) call_video_uplink_pane_cp1

0xc85d,	// (0x00027396) call_video_uplink_pane_cp2

0x57f6,	// (0x0002032f) video_down_crop_pane_ParamLimits

0x57f6,	// (0x0002032f) video_down_crop_pane

0x58f4,	// (0x0002042d) video_down_pane_ParamLimits

0x58f4,	// (0x0002042d) video_down_pane

0xc865,	// (0x0002739e) video_down_subqcif_pane_ParamLimits

0xc865,	// (0x0002739e) video_down_subqcif_pane

0xc87d,	// (0x000273b6) video_down_subqcif_pane_cp_ParamLimits

0xc87d,	// (0x000273b6) video_down_subqcif_pane_cp

0xc8a3,	// (0x000273dc) im_reading_pane_ParamLimits

0xc8a3,	// (0x000273dc) im_reading_pane

0x5a14,	// (0x0002054d) im_writing_pane_ParamLimits

0x5a14,	// (0x0002054d) im_writing_pane

0x5a32,	// (0x0002056b) im_reading_pane_t1

0xc8bd,	// (0x000273f6) list_im_pane

0xc8ce,	// (0x00027407) scroll_pane_cp07

0x5a86,	// (0x000205bf) im_writing_pane_t1_ParamLimits

0x5a86,	// (0x000205bf) im_writing_pane_t1

0xc8e7,	// (0x00027420) im_writing_pane_t2_ParamLimits

0xc8e7,	// (0x00027420) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00029d1b) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00029d1b) im_writing_pane_t

0xc2d8,	// (0x00026e11) input_focus_pane_cp04

0xc2d8,	// (0x00026e11) input_focus_pane_cp05

0x5a9b,	// (0x000205d4) list_im_single_pane_ParamLimits

0x5a9b,	// (0x000205d4) list_im_single_pane

0x5abf,	// (0x000205f8) list_single_im_pane_t1

0xc7fc,	// (0x00027335) blid_accuracy_pane

0xc7fc,	// (0x00027335) blid_compass_pane

0xe4bf,	// (0x00028ff8) main_location_t1

0xe4bf,	// (0x00028ff8) main_location_t2

0xe4bf,	// (0x00028ff8) main_location_t3

0x0002,

0xf51e,	// (0x0002a057) main_location_t

0xc2d8,	// (0x00026e11) aid_levels_location

0xc54b,	// (0x00027084) blid_accuracy_pane_g1

0xc54b,	// (0x00027084) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00029d6f) blid_accuracy_pane_g

0xc956,	// (0x0002748f) wml_content_pane

0xc994,	// (0x000274cd) wml_button_pane_ParamLimits

0xc994,	// (0x000274cd) wml_button_pane

0x5ace,	// (0x00020607) wml_list_single_large_pane_ParamLimits

0x5ace,	// (0x00020607) wml_list_single_large_pane

0x5af8,	// (0x00020631) wml_list_single_medium_pane_ParamLimits

0x5af8,	// (0x00020631) wml_list_single_medium_pane

0x5b29,	// (0x00020662) wml_list_single_small_pane_ParamLimits

0x5b29,	// (0x00020662) wml_list_single_small_pane

0xc9a8,	// (0x000274e1) wml_selection_box_pane_ParamLimits

0xc9a8,	// (0x000274e1) wml_selection_box_pane

0xc9bb,	// (0x000274f4) wml_list_single_pane_t1

0xc9ca,	// (0x00027503) wml_list_single_medium_pane_t1

0xc9d9,	// (0x00027512) wml_list_single_large_pane_t1

0xc9e8,	// (0x00027521) input_focus_pane_cp02_ParamLimits

0xc9e8,	// (0x00027521) input_focus_pane_cp02

0xc9fb,	// (0x00027534) wml_selection_box_pane_g1

0xca04,	// (0x0002753d) wml_selection_box_pane_t1_ParamLimits

0xca04,	// (0x0002753d) wml_selection_box_pane_t1

0xc533,	// (0x0002706c) bg_wml_button_pane_ParamLimits

0xc533,	// (0x0002706c) bg_wml_button_pane

0xca1c,	// (0x00027555) wml_button_pane_g1

0xca24,	// (0x0002755d) wml_button_pane_t1

0xca1c,	// (0x00027555) wml_button_bg_pane_g1

0xca34,	// (0x0002756d) wml_button_bg_pane_g2

0xca3c,	// (0x00027575) wml_button_bg_pane_g3

0xca44,	// (0x0002757d) wml_button_bg_pane_g4

0xca4c,	// (0x00027585) wml_button_bg_pane_g5

0xca54,	// (0x0002758d) wml_button_bg_pane_g6

0xca5c,	// (0x00027595) wml_button_bg_pane_g7

0xca64,	// (0x0002759d) wml_button_bg_pane_g8

0xca6c,	// (0x000275a5) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00029d20) wml_button_bg_pane_g

0x5b63,	// (0x0002069c) bg_list_pane_cp02

0xca74,	// (0x000275ad) mce_header_pane_ParamLimits

0xca74,	// (0x000275ad) mce_header_pane

0xca8a,	// (0x000275c3) mce_icon_pane

0xca8a,	// (0x000275c3) mce_image_pane

0xca93,	// (0x000275cc) mce_text_pane_ParamLimits

0xca93,	// (0x000275cc) mce_text_pane

0x5b6d,	// (0x000206a6) scroll_pane_cp03

0xc98c,	// (0x000274c5) scroll_pane_cp04

0xcaa6,	// (0x000275df) scroll_pane_cp05_ParamLimits

0xcaa6,	// (0x000275df) scroll_pane_cp05

0x5b77,	// (0x000206b0) mce_header_field_pane_ParamLimits

0x5b77,	// (0x000206b0) mce_header_field_pane

0x5b97,	// (0x000206d0) mce_header_field_pane_2_ParamLimits

0x5b97,	// (0x000206d0) mce_header_field_pane_2

0x5bad,	// (0x000206e6) mce_header_field_pane_3

0x5bb5,	// (0x000206ee) list_single_mce_message_pane_ParamLimits

0x5bb5,	// (0x000206ee) list_single_mce_message_pane

0x5be0,	// (0x00020719) list_single_mce_smart_pane_ParamLimits

0x5be0,	// (0x00020719) list_single_mce_smart_pane

0xcab2,	// (0x000275eb) input_focus_pane_cp03

0xcabb,	// (0x000275f4) list_header_data_pane

0x5c16,	// (0x0002074f) mce_header_field_pane_t1

0x5c24,	// (0x0002075d) list_single_mce_header_pane_ParamLimits

0x5c24,	// (0x0002075d) list_single_mce_header_pane

0xcac3,	// (0x000275fc) list_single_mce_header_pane_t1

0xcad2,	// (0x0002760b) list_single_mce_message_pane_g1

0xcada,	// (0x00027613) list_single_mce_message_pane_t1

0x5c76,	// (0x000207af) bg_cale_heading_pane_cp01_ParamLimits

0x5c76,	// (0x000207af) bg_cale_heading_pane_cp01

0xcae8,	// (0x00027621) bg_cale_pane_cp02_ParamLimits

0xcae8,	// (0x00027621) bg_cale_pane_cp02

0x5cc4,	// (0x000207fd) cale_month_corner_pane

0x5ce3,	// (0x0002081c) cale_month_day_heading_pane_ParamLimits

0x5ce3,	// (0x0002081c) cale_month_day_heading_pane

0x5d49,	// (0x00020882) cale_month_pane_g1_ParamLimits

0x5d49,	// (0x00020882) cale_month_pane_g1

0x5d8c,	// (0x000208c5) cale_month_pane_g2_ParamLimits

0x5d8c,	// (0x000208c5) cale_month_pane_g2

0x5dc4,	// (0x000208fd) cale_month_pane_g3_ParamLimits

0x5dc4,	// (0x000208fd) cale_month_pane_g3

0x5e10,	// (0x00020949) cale_month_pane_g4_ParamLimits

0x5e10,	// (0x00020949) cale_month_pane_g4

0x5e5c,	// (0x00020995) cale_month_pane_g5_ParamLimits

0x5e5c,	// (0x00020995) cale_month_pane_g5

0x5ea8,	// (0x000209e1) cale_month_pane_g6_ParamLimits

0x5ea8,	// (0x000209e1) cale_month_pane_g6

0x5ef4,	// (0x00020a2d) cale_month_pane_g7_ParamLimits

0x5ef4,	// (0x00020a2d) cale_month_pane_g7

0x5f58,	// (0x00020a91) cale_month_pane_g8_ParamLimits

0x5f58,	// (0x00020a91) cale_month_pane_g8

0x5fbc,	// (0x00020af5) cale_month_pane_g9_ParamLimits

0x5fbc,	// (0x00020af5) cale_month_pane_g9

0x601a,	// (0x00020b53) cale_month_pane_g10_ParamLimits

0x601a,	// (0x00020b53) cale_month_pane_g10

0x6076,	// (0x00020baf) cale_month_pane_g11_ParamLimits

0x6076,	// (0x00020baf) cale_month_pane_g11

0x60ca,	// (0x00020c03) cale_month_pane_g12_ParamLimits

0x60ca,	// (0x00020c03) cale_month_pane_g12

0x6120,	// (0x00020c59) cale_month_pane_g13_ParamLimits

0x6120,	// (0x00020c59) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00029d33) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00029d33) cale_month_pane_g

0x6176,	// (0x00020caf) cale_month_week_pane

0x619a,	// (0x00020cd3) grid_cale_month_pane_ParamLimits

0x619a,	// (0x00020cd3) grid_cale_month_pane

0x61f3,	// (0x00020d2c) cale_month_day_heading_pane_t1

0x6279,	// (0x00020db2) cale_month_day_heading_pane_t2

0x62f2,	// (0x00020e2b) cale_month_day_heading_pane_t3

0x636b,	// (0x00020ea4) cale_month_day_heading_pane_t4

0x63e4,	// (0x00020f1d) cale_month_day_heading_pane_t5

0x645d,	// (0x00020f96) cale_month_day_heading_pane_t6

0x64d6,	// (0x0002100f) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00029d4e) cale_month_day_heading_pane_t

0xc7aa,	// (0x000272e3) bg_cale_side_pane_cp01

0x6567,	// (0x000210a0) cale_month_week_pane_t1

0x6580,	// (0x000210b9) cale_month_week_pane_t2

0x6599,	// (0x000210d2) cale_month_week_pane_t3

0x65b2,	// (0x000210eb) cale_month_week_pane_t4

0x65cb,	// (0x00021104) cale_month_week_pane_t5

0x65ec,	// (0x00021125) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00029d5d) cale_month_week_pane_t

0x660d,	// (0x00021146) cell_cale_month_pane_ParamLimits

0x660d,	// (0x00021146) cell_cale_month_pane

0x3c29,	// (0x0001e762) cell_cale_month_pane_g1

0x3c35,	// (0x0001e76e) cell_cale_month_pane_t1_ParamLimits

0x3c35,	// (0x0001e76e) cell_cale_month_pane_t1

0xc7b8,	// (0x000272f1) grid_highlight_pane_cp08

0xc54b,	// (0x00027084) main_smil_g1

0x672f,	// (0x00021268) smil_status_pane

0xcb27,	// (0x00027660) smil_text_pane

0xe3d7,	// (0x00028f10) bg_popup_call3_rect_pane_g8

0xe3df,	// (0x00028f18) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00029feb) bg_popup_call3_rect_pane_g

0xe596,	// (0x000290cf) smil_status_volume_pane_g1

0xcb31,	// (0x0002766a) smil_status_pane_t1

0x3f07,	// (0x0001ea40) volume_smil_pane

0xcb48,	// (0x00027681) list_smil_text_pane

0x6742,	// (0x0002127b) scroll_pane_cp011

0x674d,	// (0x00021286) smil_text_list_pane_t1_ParamLimits

0x674d,	// (0x00021286) smil_text_list_pane_t1

0x3c61,	// (0x0001e79a) aid_volume_smil_ParamLimits

0x3c61,	// (0x0001e79a) aid_volume_smil

0xc54b,	// (0x00027084) smil_volume_pane_g1

0xc54b,	// (0x00027084) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00029d6f) smil_volume_pane_g

0x5109,	// (0x0001fc42) listscroll_cale_day_pane

0xcb52,	// (0x0002768b) bg_cale_pane

0xcb6a,	// (0x000276a3) list_cale_pane

0xcb8d,	// (0x000276c6) scroll_pane_cp09

0xcb9e,	// (0x000276d7) cale_bg_pane_g1

0xcba6,	// (0x000276df) cale_bg_pane_g2

0xcbae,	// (0x000276e7) cale_bg_pane_g3

0xcbb6,	// (0x000276ef) cale_bg_pane_g4

0xcbbe,	// (0x000276f7) cale_bg_pane_g5

0xcbc6,	// (0x000276ff) cale_bg_pane_g6

0xcbce,	// (0x00027707) cale_bg_pane_g7

0xcbd6,	// (0x0002770f) cale_bg_pane_g8

0xcbde,	// (0x00027717) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00029d74) cale_bg_pane_g

0x67c5,	// (0x000212fe) list_cale_time_pane_ParamLimits

0x67c5,	// (0x000212fe) list_cale_time_pane

0xcbee,	// (0x00027727) list_cale_time_pane_g1_ParamLimits

0xcbee,	// (0x00027727) list_cale_time_pane_g1

0xcbfa,	// (0x00027733) list_cale_time_pane_g2_ParamLimits

0xcbfa,	// (0x00027733) list_cale_time_pane_g2

0x67e7,	// (0x00021320) list_cale_time_pane_g3_ParamLimits

0x67e7,	// (0x00021320) list_cale_time_pane_g3

0x67f5,	// (0x0002132e) list_cale_time_pane_g4_ParamLimits

0x67f5,	// (0x0002132e) list_cale_time_pane_g4

0x6803,	// (0x0002133c) list_cale_time_pane_g5_ParamLimits

0x6803,	// (0x0002133c) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00029d87) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00029d87) list_cale_time_pane_g

0xcc14,	// (0x0002774d) list_cale_time_pane_t1_ParamLimits

0xcc14,	// (0x0002774d) list_cale_time_pane_t1

0xcc3c,	// (0x00027775) list_cale_time_pane_t2_ParamLimits

0xcc3c,	// (0x00027775) list_cale_time_pane_t2

0x6a33,	// (0x0002156c) aid_blid_cardinal_pane

0x6a75,	// (0x000215ae) compass_pane_t4

0xcc64,	// (0x0002779d) list_cale_time_pane_t4_ParamLimits

0xcc64,	// (0x0002779d) list_cale_time_pane_t4

0x6a83,	// (0x000215bc) compass_pane_t5

0x6a93,	// (0x000215cc) compass_pane_t6

0x6aa1,	// (0x000215da) compass_pane_t7

0xd117,	// (0x00027c50) navi_pane_cc_t1

0xd2f4,	// (0x00027e2d) aid_phob_thumbnail_center_pane

0x6ef6,	// (0x00021a2f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00029d94) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00029d94) list_cale_time_pane_t

0xbf21,	// (0x00026a5a) bg_popup_window_pane_cp02_ParamLimits

0xbf21,	// (0x00026a5a) bg_popup_window_pane_cp02

0xcc8c,	// (0x000277c5) heading_pane_cp01_ParamLimits

0xcc8c,	// (0x000277c5) heading_pane_cp01

0xcc98,	// (0x000277d1) loc_req_pane_ParamLimits

0xcc98,	// (0x000277d1) loc_req_pane

0xcca8,	// (0x000277e1) loc_type_pane_ParamLimits

0xcca8,	// (0x000277e1) loc_type_pane

0xccba,	// (0x000277f3) loc_type_pane_t1_ParamLimits

0xccba,	// (0x000277f3) loc_type_pane_t1

0xcccc,	// (0x00027805) loc_type_pane_t2_ParamLimits

0xcccc,	// (0x00027805) loc_type_pane_t2

0xccde,	// (0x00027817) loc_type_pane_t3_ParamLimits

0xccde,	// (0x00027817) loc_type_pane_t3

0x0002,

0xf262,	// (0x00029d9b) loc_type_pane_t_ParamLimits

0xf262,	// (0x00029d9b) loc_type_pane_t

0xccf0,	// (0x00027829) list_loc_req_pane

0xccfa,	// (0x00027833) scroll_pane_cp012

0x6811,	// (0x0002134a) list_single_loc_request_popup_menu_pane_ParamLimits

0x6811,	// (0x0002134a) list_single_loc_request_popup_menu_pane

0xcd05,	// (0x0002783e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcd05,	// (0x0002783e) list_single_loc_request_popup_menu_pane_g1

0xcd11,	// (0x0002784a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcd11,	// (0x0002784a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00029da2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00029da2) list_single_loc_request_popup_menu_pane_g

0xcd1d,	// (0x00027856) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcd1d,	// (0x00027856) list_single_loc_request_popup_menu_pane_t1

0x6823,	// (0x0002135c) bg_popup_window_pane_cp03_ParamLimits

0x6823,	// (0x0002135c) bg_popup_window_pane_cp03

0x6831,	// (0x0002136a) heading_loc_req_pane_ParamLimits

0x6831,	// (0x0002136a) heading_loc_req_pane

0x683d,	// (0x00021376) popup_dyc_status_message_window_g1_ParamLimits

0x683d,	// (0x00021376) popup_dyc_status_message_window_g1

0x6849,	// (0x00021382) popup_dyc_status_message_window_t1_ParamLimits

0x6849,	// (0x00021382) popup_dyc_status_message_window_t1

0x685b,	// (0x00021394) popup_dyc_status_message_window_t2_ParamLimits

0x685b,	// (0x00021394) popup_dyc_status_message_window_t2

0x686d,	// (0x000213a6) popup_dyc_status_message_window_t3_ParamLimits

0x686d,	// (0x000213a6) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00029da7) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00029da7) popup_dyc_status_message_window_t

0xc2d8,	// (0x00026e11) bg_heading_pane_cp01

0xcd33,	// (0x0002786c) heading_loc_req_pane_g1

0xcd3b,	// (0x00027874) heading_loc_req_pane_g2

0xcd43,	// (0x0002787c) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00029dae) heading_loc_req_pane_g

0xcd4b,	// (0x00027884) heading_loc_req_pane_t1

0xcd6a,	// (0x000278a3) bg_popup_sub_pane_cp01_ParamLimits

0xcd6a,	// (0x000278a3) bg_popup_sub_pane_cp01

0xcd78,	// (0x000278b1) popup_cale_events_window_g1_ParamLimits

0xcd78,	// (0x000278b1) popup_cale_events_window_g1

0xcd98,	// (0x000278d1) popup_cale_events_window_g2_ParamLimits

0xcd98,	// (0x000278d1) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00029dd0) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00029dd0) popup_cale_events_window_g

0xcdb8,	// (0x000278f1) popup_cale_events_window_t1_ParamLimits

0xcdb8,	// (0x000278f1) popup_cale_events_window_t1

0xcdca,	// (0x00027903) popup_cale_events_window_t2_ParamLimits

0xcdca,	// (0x00027903) popup_cale_events_window_t2

0xce08,	// (0x00027941) popup_cale_events_window_t3_ParamLimits

0xce08,	// (0x00027941) popup_cale_events_window_t3

0xce42,	// (0x0002797b) popup_cale_events_window_t4_ParamLimits

0xce42,	// (0x0002797b) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00029dd5) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00029dd5) popup_cale_events_window_t

0x6897,	// (0x000213d0) call_type_pane

0xda04,	// (0x0002853d) popup_call_status_window_g1

0x68a3,	// (0x000213dc) popup_call_status_window_g2

0x68af,	// (0x000213e8) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00029dde) popup_call_status_window_g

0xce78,	// (0x000279b1) call_type_pane_g1

0xce81,	// (0x000279ba) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00029de5) call_type_pane_g

0xc2d8,	// (0x00026e11) bg_popup_sub_pane_cp02

0xce8a,	// (0x000279c3) listscroll_popup_wml_pane

0xce92,	// (0x000279cb) list_wml_pane

0xce9c,	// (0x000279d5) scroll_pane_cp013

0xcea7,	// (0x000279e0) list_single_graphic_popup_wml_pane_ParamLimits

0xcea7,	// (0x000279e0) list_single_graphic_popup_wml_pane

0xc54b,	// (0x00027084) list_single_graphic_popup_wml_pane_g1

0xcebb,	// (0x000279f4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00029dea) list_single_graphic_popup_wml_pane_g

0xcec3,	// (0x000279fc) list_single_graphic_popup_wml_pane_t1

0xced9,	// (0x00027a12) aid_call_pane

0xc52b,	// (0x00027064) popup_clock_analogue_window_g1

0xc52b,	// (0x00027064) popup_clock_analogue_window_g2

0x3c83,	// (0x0001e7bc) popup_clock_analogue_window_g3

0x3c83,	// (0x0001e7bc) popup_clock_analogue_window_g4

0xc54b,	// (0x00027084) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00029def) popup_clock_analogue_window_g

0x3c8b,	// (0x0001e7c4) popup_clock_analogue_window_t1

0x3c99,	// (0x0001e7d2) clock_digital_number_pane_ParamLimits

0x3c99,	// (0x0001e7d2) clock_digital_number_pane

0x3ca5,	// (0x0001e7de) clock_digital_number_pane_cp02_ParamLimits

0x3ca5,	// (0x0001e7de) clock_digital_number_pane_cp02

0x3cb1,	// (0x0001e7ea) clock_digital_number_pane_cp03_ParamLimits

0x3cb1,	// (0x0001e7ea) clock_digital_number_pane_cp03

0x3cbd,	// (0x0001e7f6) clock_digital_number_pane_cp04_ParamLimits

0x3cbd,	// (0x0001e7f6) clock_digital_number_pane_cp04

0x3ccd,	// (0x0001e806) clock_digital_separator_pane_ParamLimits

0x3ccd,	// (0x0001e806) clock_digital_separator_pane

0x3cd9,	// (0x0001e812) popup_clock_digital_window_t1

0xc54b,	// (0x00027084) clock_digital_number_pane_g1

0xc54b,	// (0x00027084) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00029d6f) clock_digital_number_pane_g

0xc54b,	// (0x00027084) clock_digital_separator_pane_g1

0xc54b,	// (0x00027084) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00029d6f) clock_digital_separator_pane_g

0xc2d8,	// (0x00026e11) bg_popup_window_pane_cp04

0xceed,	// (0x00027a26) heading_pane_cp03

0xc7fc,	// (0x00027335) listscroll_popup_gms_pane

0xc2d8,	// (0x00026e11) grid_large_graphic_popup_pane

0xcef6,	// (0x00027a2f) listscroll_popup_gms_pane_g1

0xceff,	// (0x00027a38) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00029dfa) listscroll_popup_gms_pane_g

0xcf08,	// (0x00027a41) scroll_pane_cp014

0xc5a0,	// (0x000270d9) cell_large_graphic_popup_pane_ParamLimits

0xc5a0,	// (0x000270d9) cell_large_graphic_popup_pane

0xc5ae,	// (0x000270e7) cell_large_graphic_popup_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_large_graphic_popup_pane_g1

0xcf11,	// (0x00027a4a) cell_large_graphic_popup_pane_g2_ParamLimits

0xcf11,	// (0x00027a4a) cell_large_graphic_popup_pane_g2

0xcf1f,	// (0x00027a58) cell_large_graphic_popup_pane_g3_ParamLimits

0xcf1f,	// (0x00027a58) cell_large_graphic_popup_pane_g3

0xcf2d,	// (0x00027a66) cell_large_graphic_popup_pane_g4_ParamLimits

0xcf2d,	// (0x00027a66) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00029dff) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00029dff) cell_large_graphic_popup_pane_g

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp010

0xc54b,	// (0x00027084) bg_popup_call_pane_g1

0xcf3e,	// (0x00027a77) list_single_graphic_popup_conf_pane_ParamLimits

0xcf3e,	// (0x00027a77) list_single_graphic_popup_conf_pane

0xcf51,	// (0x00027a8a) list_highlight_pane_cp01

0xcf5a,	// (0x00027a93) list_single_graphic_popup_conf_pane_g1

0xcf62,	// (0x00027a9b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00029e08) list_single_graphic_popup_conf_pane_g

0xcf6a,	// (0x00027aa3) list_single_graphic_popup_conf_pane_t1

0xcf78,	// (0x00027ab1) linegrid_cams_pane_g1

0x68bb,	// (0x000213f4) linegrid_cams_pane_g2

0xc73b,	// (0x00027274) linegrid_cams_pane_g3

0xcf81,	// (0x00027aba) linegrid_cams_pane_g4

0x68c4,	// (0x000213fd) linegrid_cams_pane_g5

0x68cd,	// (0x00021406) linegrid_cams_pane_g6

0xc7eb,	// (0x00027324) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00029e0d) linegrid_cams_pane_g

0xcf8a,	// (0x00027ac3) popup_clock_analogue_window

0xcf8a,	// (0x00027ac3) popup_clock_digital_window

0xc2d8,	// (0x00026e11) popup_phob_thumbnail_window

0xc54b,	// (0x00027084) call_video_uplink_pane_g1

0xcf93,	// (0x00027acc) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00029e1c) call_video_uplink_pane_g

0xcf9b,	// (0x00027ad4) video_uplink_pane

0xcfa3,	// (0x00027adc) mce_image_pane_g1

0x68d6,	// (0x0002140f) mce_image_pane_g2

0x68e0,	// (0x00021419) mce_image_pane_g3

0x68e8,	// (0x00021421) mce_image_pane_g4

0x68f0,	// (0x00021429) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00029e21) mce_image_pane_g

0xcfad,	// (0x00027ae6) control_top_pane_stacon_cp01_ParamLimits

0xcfad,	// (0x00027ae6) control_top_pane_stacon_cp01

0xcfc1,	// (0x00027afa) uni_indicator_pane_stacon_cp01_ParamLimits

0xcfc1,	// (0x00027afa) uni_indicator_pane_stacon_cp01

0xcfd2,	// (0x00027b0b) bg_popup_sub_pane_cp03

0xcfdc,	// (0x00027b15) chi_dic_find_pane

0x68f8,	// (0x00021431) listscroll_chi_dic_pane

0xcfe4,	// (0x00027b1d) main_pane_chidic_g1

0xcfec,	// (0x00027b25) chi_dic_find_pane_t1

0xcffa,	// (0x00027b33) find_chidic_pane

0xd003,	// (0x00027b3c) chi_dic_list_pane_ParamLimits

0xd003,	// (0x00027b3c) chi_dic_list_pane

0xd014,	// (0x00027b4d) scroll_pane_cp020

0xd01c,	// (0x00027b55) find_chidic_pane_t1

0xc2d8,	// (0x00026e11) input_focus_pane_cp06

0x690c,	// (0x00021445) list_chi_dic_pane_ParamLimits

0x690c,	// (0x00021445) list_chi_dic_pane

0x6926,	// (0x0002145f) list_chi_dic_pane_t1_ParamLimits

0x6926,	// (0x0002145f) list_chi_dic_pane_t1

0xc2d8,	// (0x00026e11) list_highlight_pane_cp020

0xd02b,	// (0x00027b64) bg_cale_heading_pane_g1

0x6939,	// (0x00021472) bg_cale_heading_pane_g2

0x6941,	// (0x0002147a) bg_cale_heading_pane_g3

0x6949,	// (0x00021482) bg_cale_heading_pane_g4

0x6953,	// (0x0002148c) bg_cale_heading_pane_g5

0x695d,	// (0x00021496) bg_cale_heading_pane_g6

0x6965,	// (0x0002149e) bg_cale_heading_pane_g7

0x696d,	// (0x000214a6) bg_cale_heading_pane_g8

0x6977,	// (0x000214b0) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00029e2c) bg_cale_heading_pane_g

0xd02b,	// (0x00027b64) bg_cale_side_pane_g1

0x6981,	// (0x000214ba) bg_cale_side_pane_g2

0x698b,	// (0x000214c4) bg_cale_side_pane_g3

0x6995,	// (0x000214ce) bg_cale_side_pane_g4

0x699f,	// (0x000214d8) bg_cale_side_pane_g5

0x69a9,	// (0x000214e2) bg_cale_side_pane_g6

0x69b3,	// (0x000214ec) bg_cale_side_pane_g7

0x69bd,	// (0x000214f6) bg_cale_side_pane_g8

0x69c5,	// (0x000214fe) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00029e3f) bg_cale_side_pane_g

0x69cd,	// (0x00021506) popup_call_status_window_ParamLimits

0x69cd,	// (0x00021506) popup_call_status_window

0xd033,	// (0x00027b6c) stacon_top_pane

0xd03b,	// (0x00027b74) status_pane_ParamLimits

0xd03b,	// (0x00027b74) status_pane

0xd050,	// (0x00027b89) status_small_pane

0xd058,	// (0x00027b91) control_pane

0xc2d8,	// (0x00026e11) stacon_bottom_pane

0xd060,	// (0x00027b99) list_single_mce_smart_pane_t1_ParamLimits

0xd060,	// (0x00027b99) list_single_mce_smart_pane_t1

0xd073,	// (0x00027bac) list_single_mce_smart_pane_t2_ParamLimits

0xd073,	// (0x00027bac) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00029e52) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00029e52) list_single_mce_smart_pane_t

0x69d9,	// (0x00021512) compass_pane

0x69e5,	// (0x0002151e) main_location2_pane_t1

0x69f9,	// (0x00021532) main_location2_pane_t2

0x6a0d,	// (0x00021546) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00029e57) main_location2_pane_t

0xd092,	// (0x00027bcb) compass_pane_g1_ParamLimits

0xd092,	// (0x00027bcb) compass_pane_g1

0x6a57,	// (0x00021590) compass_pane_t1

0x6a66,	// (0x0002159f) compass_pane_t2

0x0005,

0xf327,	// (0x00029e60) compass_pane_t

0x6ab1,	// (0x000215ea) text_secondary_cp61

0xd10e,	// (0x00027c47) navi_pane_cams_g5

0xd18a,	// (0x00027cc3) navi_pane_im_t1

0xd198,	// (0x00027cd1) navi_pane_mp_g1_ParamLimits

0xd198,	// (0x00027cd1) navi_pane_mp_g1

0xd1ac,	// (0x00027ce5) navi_pane_mp_g2_ParamLimits

0xd1ac,	// (0x00027ce5) navi_pane_mp_g2

0xd1b8,	// (0x00027cf1) navi_pane_mp_g3_ParamLimits

0xd1b8,	// (0x00027cf1) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00029e74) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00029e74) navi_pane_mp_g

0xd1c4,	// (0x00027cfd) navi_pane_mp_t1

0xd1d2,	// (0x00027d0b) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00029e7b) navi_pane_mp_t

0xd23d,	// (0x00027d76) navi_pane_vt_g1

0xd1c4,	// (0x00027cfd) navi_pane_vt_t1

0xd245,	// (0x00027d7e) navi_slider_pane

0xc7fc,	// (0x00027335) zooming_pane

0xd255,	// (0x00027d8e) navi_slider_pane_g1

0x3cf6,	// (0x0001e82f) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00029e82) navi_slider_pane_g

0xd279,	// (0x00027db2) aid_levels_zoom

0xd281,	// (0x00027dba) zooming_pane_g1

0xd289,	// (0x00027dc2) zooming_pane_g2

0xd289,	// (0x00027dc2) zooming_pane_g3

0x0002,

0xf358,	// (0x00029e91) zooming_pane_g

0xd291,	// (0x00027dca) level_10_zoom

0xd29a,	// (0x00027dd3) level_11_zoom

0xd2a3,	// (0x00027ddc) level_1_zoom

0xd2ac,	// (0x00027de5) level_2_zoom

0xd2b5,	// (0x00027dee) level_3_zoom

0xd2be,	// (0x00027df7) level_4_zoom

0xd2c7,	// (0x00027e00) level_5_zoom

0xd2d0,	// (0x00027e09) level_6_zoom

0xd2d9,	// (0x00027e12) level_7_zoom

0xd2e2,	// (0x00027e1b) level_8_zoom

0xd2eb,	// (0x00027e24) level_9_zoom

0xd2fc,	// (0x00027e35) popup_phob_thumbnail_window_g1

0xd304,	// (0x00027e3d) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00029e98) popup_phob_thumbnail_window_g

0x7404,	// (0x00021f3d) level_1_location

0x740c,	// (0x00021f45) level_2_location

0x7414,	// (0x00021f4d) level_3_location

0x741e,	// (0x00021f57) level_4_location

0xc7fc,	// (0x00027335) level_5_location

0x6aec,	// (0x00021625) mce_icon_pane_g1

0x6af4,	// (0x0002162d) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00029e9d) mce_icon_pane_g

0x6afc,	// (0x00021635) main_mup_pane_g1_ParamLimits

0x6afc,	// (0x00021635) main_mup_pane_g1

0xc5ca,	// (0x00027103) main_mup_pane_g2_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g2

0xc5ca,	// (0x00027103) main_mup_pane_g3_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g3

0xc5ca,	// (0x00027103) main_mup_pane_g4_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g4

0xc5ca,	// (0x00027103) main_mup_pane_g5_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g5

0xc5ca,	// (0x00027103) main_mup_pane_g6_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g6

0xc5ca,	// (0x00027103) main_mup_pane_g7_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g7

0xc5ca,	// (0x00027103) main_mup_pane_g8_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g8

0xc5ca,	// (0x00027103) main_mup_pane_g9_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g9

0xc5ca,	// (0x00027103) main_mup_pane_g10_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g10

0xc5ca,	// (0x00027103) main_mup_pane_g11_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g11

0xc5bc,	// (0x000270f5) main_mup_pane_g12_ParamLimits

0xc5bc,	// (0x000270f5) main_mup_pane_g12

0xc5ca,	// (0x00027103) main_mup_pane_g13_ParamLimits

0xc5ca,	// (0x00027103) main_mup_pane_g13

0x000c,

0xf369,	// (0x00029ea2) main_mup_pane_g_ParamLimits

0xf369,	// (0x00029ea2) main_mup_pane_g

0xc5d8,	// (0x00027111) main_mup_pane_t1_ParamLimits

0xc5d8,	// (0x00027111) main_mup_pane_t1

0xc5d8,	// (0x00027111) main_mup_pane_t2_ParamLimits

0xc5d8,	// (0x00027111) main_mup_pane_t2

0xc5d8,	// (0x00027111) main_mup_pane_t3_ParamLimits

0xc5d8,	// (0x00027111) main_mup_pane_t3

0xc60a,	// (0x00027143) main_mup_pane_t4_ParamLimits

0xc60a,	// (0x00027143) main_mup_pane_t4

0xc60a,	// (0x00027143) main_mup_pane_t5_ParamLimits

0xc60a,	// (0x00027143) main_mup_pane_t5

0xc5f6,	// (0x0002712f) main_mup_pane_t6_ParamLimits

0xc5f6,	// (0x0002712f) main_mup_pane_t6

0x0005,

0xf384,	// (0x00029ebd) main_mup_pane_t_ParamLimits

0xf384,	// (0x00029ebd) main_mup_pane_t

0xc29b,	// (0x00026dd4) mup_progress_pane_ParamLimits

0xc29b,	// (0x00026dd4) mup_progress_pane

0xe4e8,	// (0x00029021) mup_visualizer_pane_ParamLimits

0xe4e8,	// (0x00029021) mup_visualizer_pane

0xe4e8,	// (0x00029021) mup_volume_pane_ParamLimits

0xe4e8,	// (0x00029021) mup_volume_pane

0xc5bc,	// (0x000270f5) mup_visualizer_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) mup_visualizer_pane_g1

0xd30c,	// (0x00027e45) mup_visualizer_pane_g2_ParamLimits

0xd30c,	// (0x00027e45) mup_visualizer_pane_g2

0xc5ae,	// (0x000270e7) mup_visualizer_pane_g3_ParamLimits

0xc5ae,	// (0x000270e7) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00029eca) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00029eca) mup_visualizer_pane_g

0xc5ec,	// (0x00027125) mup_volume_pane_g1

0xc5ec,	// (0x00027125) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00029be8) mup_volume_pane_g

0xc5ec,	// (0x00027125) mup_progress_pane_g1

0xc5ec,	// (0x00027125) mup_progress_pane_g2

0xc5ec,	// (0x00027125) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00029ed1) mup_progress_pane_g

0xc2d8,	// (0x00026e11) bg_popup_window_pane_cp05

0xd31a,	// (0x00027e53) heading_pane_cp02_ParamLimits

0xd31a,	// (0x00027e53) heading_pane_cp02

0xd334,	// (0x00027e6d) list_popup_blid_pane

0xd33c,	// (0x00027e75) list_blid_sat_info_pane_ParamLimits

0xd33c,	// (0x00027e75) list_blid_sat_info_pane

0xd34f,	// (0x00027e88) list_blid_sat_info_pane_g1

0xd357,	// (0x00027e90) list_blid_sat_info_pane_t1

0x6bf9,	// (0x00021732) mup_equalizer_pane_ParamLimits

0x6bf9,	// (0x00021732) mup_equalizer_pane

0x6c1a,	// (0x00021753) mup_equalizer_pane_cp1_ParamLimits

0x6c1a,	// (0x00021753) mup_equalizer_pane_cp1

0x6c3b,	// (0x00021774) mup_equalizer_pane_cp2_ParamLimits

0x6c3b,	// (0x00021774) mup_equalizer_pane_cp2

0x6c5c,	// (0x00021795) mup_equalizer_pane_cp3_ParamLimits

0x6c5c,	// (0x00021795) mup_equalizer_pane_cp3

0x6c7d,	// (0x000217b6) mup_equalizer_pane_cp4_ParamLimits

0x6c7d,	// (0x000217b6) mup_equalizer_pane_cp4

0x6c9e,	// (0x000217d7) mup_equalizer_pane_cp5

0x6cb4,	// (0x000217ed) mup_equalizer_pane_cp6

0x6ccc,	// (0x00021805) mup_equalizer_pane_cp7

0xe457,	// (0x00028f90) bg_popup_call_poc_act_pane_g9

0xe45f,	// (0x00028f98) bg_popup_call_poc_act_pane_g10

0xe467,	// (0x00028fa0) bg_popup_call_poc_act_pane_g11

0x000a,

0xc533,	// (0x0002706c) mup_scale_pane

0xc54b,	// (0x00027084) mup_scale_pane_g1

0xd365,	// (0x00027e9e) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00029eed) mup_scale_pane_g

0xd3b9,	// (0x00027ef2) msg_data_pane

0xd3c1,	// (0x00027efa) scroll_pane_cp017

0x6cf6,	// (0x0002182f) bg_list_pane_cp04_ParamLimits

0x6cf6,	// (0x0002182f) bg_list_pane_cp04

0xd3c9,	// (0x00027f02) msg_data_pane_g1

0x6d1a,	// (0x00021853) msg_data_pane_g2

0x6d24,	// (0x0002185d) msg_data_pane_g3

0x6d2c,	// (0x00021865) msg_data_pane_g4

0x6d34,	// (0x0002186d) msg_data_pane_g5

0x6d3c,	// (0x00021875) msg_data_pane_g6

0x6d44,	// (0x0002187d) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00029efc) msg_data_pane_g

0x6d4c,	// (0x00021885) msg_text_pane_ParamLimits

0x6d4c,	// (0x00021885) msg_text_pane

0x6dad,	// (0x000218e6) qrid_highlight_pane_cp011_ParamLimits

0x6dad,	// (0x000218e6) qrid_highlight_pane_cp011

0xc2d8,	// (0x00026e11) msg_body_pane

0xc533,	// (0x0002706c) msg_header_pane

0xd3e5,	// (0x00027f1e) input_focus_pane_cp07

0x6dd5,	// (0x0002190e) msg_header_pane_t1_ParamLimits

0x6dd5,	// (0x0002190e) msg_header_pane_t1

0x6df1,	// (0x0002192a) msg_header_pane_t2_ParamLimits

0x6df1,	// (0x0002192a) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00029f10) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00029f10) msg_header_pane_t

0xd406,	// (0x00027f3f) msg_body_pane_g1

0x6e11,	// (0x0002194a) msg_body_pane_t1_ParamLimits

0x6e11,	// (0x0002194a) msg_body_pane_t1

0x6e42,	// (0x0002197b) msg_body_pane_t2_ParamLimits

0x6e42,	// (0x0002197b) msg_body_pane_t2

0x6e54,	// (0x0002198d) msg_body_pane_t3_ParamLimits

0x6e54,	// (0x0002198d) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00029f15) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00029f15) msg_body_pane_t

0x3d38,	// (0x0001e871) main_viewer_pane_g1_ParamLimits

0x3d38,	// (0x0001e871) main_viewer_pane_g1

0x3d44,	// (0x0001e87d) main_viewer_pane_g2_ParamLimits

0x3d44,	// (0x0001e87d) main_viewer_pane_g2

0x6e88,	// (0x000219c1) main_viewer_pane_g3_ParamLimits

0x6e88,	// (0x000219c1) main_viewer_pane_g3

0x6e99,	// (0x000219d2) main_viewer_pane_g4_ParamLimits

0x6e99,	// (0x000219d2) main_viewer_pane_g4

0x3d50,	// (0x0001e889) main_viewer_pane_g5_ParamLimits

0x3d50,	// (0x0001e889) main_viewer_pane_g5

0x3d50,	// (0x0001e889) main_viewer_pane_g7_ParamLimits

0x3d50,	// (0x0001e889) main_viewer_pane_g7

0xcd05,	// (0x0002783e) main_viewer_pane_g8_ParamLimits

0xcd05,	// (0x0002783e) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00029f25) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00029f25) main_viewer_pane_g

0xd40e,	// (0x00027f47) viewer_content_pane_ParamLimits

0xd40e,	// (0x00027f47) viewer_content_pane

0x6eca,	// (0x00021a03) main_postcard_pane_g1_ParamLimits

0x6eca,	// (0x00021a03) main_postcard_pane_g1

0x6ed8,	// (0x00021a11) main_postcard_pane_g2_ParamLimits

0x6ed8,	// (0x00021a11) main_postcard_pane_g2

0x6ee6,	// (0x00021a1f) main_postcard_pane_g3_ParamLimits

0x6ee6,	// (0x00021a1f) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00029f36) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00029f36) main_postcard_pane_g

0x6ef6,	// (0x00021a2f) main_postcard_pane_g4

0xe5a9,	// (0x000290e2) smil_status_volume_pane_g2

0x6f22,	// (0x00021a5b) postcard_pane_ParamLimits

0x6f22,	// (0x00021a5b) postcard_pane

0xda04,	// (0x0002853d) postcard_pane_g1_ParamLimits

0xda04,	// (0x0002853d) postcard_pane_g1

0x6f54,	// (0x00021a8d) postcard_pane_g2_ParamLimits

0x6f54,	// (0x00021a8d) postcard_pane_g2

0x6f60,	// (0x00021a99) postcard_pane_g3_ParamLimits

0x6f60,	// (0x00021a99) postcard_pane_g3

0xd41c,	// (0x00027f55) postcard_pane_g4_ParamLimits

0xd41c,	// (0x00027f55) postcard_pane_g4

0x6f6c,	// (0x00021aa5) postcard_pane_g5_ParamLimits

0x6f6c,	// (0x00021aa5) postcard_pane_g5

0x6f78,	// (0x00021ab1) postcard_pane_g6_ParamLimits

0x6f78,	// (0x00021ab1) postcard_pane_g6

0xd42a,	// (0x00027f63) postcard_pane_g7_ParamLimits

0xd42a,	// (0x00027f63) postcard_pane_g7

0x0006,

0xf40a,	// (0x00029f43) postcard_pane_g_ParamLimits

0xf40a,	// (0x00029f43) postcard_pane_g

0x6f84,	// (0x00021abd) main_mp2_pane_g1_ParamLimits

0x6f84,	// (0x00021abd) main_mp2_pane_g1

0x6f90,	// (0x00021ac9) main_mp2_pane_g2_ParamLimits

0x6f90,	// (0x00021ac9) main_mp2_pane_g2

0x6f9c,	// (0x00021ad5) main_mp2_pane_g3_ParamLimits

0x6f9c,	// (0x00021ad5) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00029f52) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00029f52) main_mp2_pane_g

0x6fa8,	// (0x00021ae1) main_mp2_pane_t1_ParamLimits

0x6fa8,	// (0x00021ae1) main_mp2_pane_t1

0x6fbf,	// (0x00021af8) main_mp2_pane_t2_ParamLimits

0x6fbf,	// (0x00021af8) main_mp2_pane_t2

0x6fd3,	// (0x00021b0c) main_mp2_pane_t3_ParamLimits

0x6fd3,	// (0x00021b0c) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00029f59) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00029f59) main_mp2_pane_t

0xc29b,	// (0x00026dd4) pec_content_pane_ParamLimits

0xc29b,	// (0x00026dd4) pec_content_pane

0xbead,	// (0x000269e6) scroll_pane_cp015

0xd380,	// (0x00027eb9) pec_attribute_pane_ParamLimits

0xd380,	// (0x00027eb9) pec_attribute_pane

0xc5ae,	// (0x000270e7) pec_content_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) pec_content_pane_g1

0xd438,	// (0x00027f71) pec_content_pane_t1_ParamLimits

0xd438,	// (0x00027f71) pec_content_pane_t1

0xd44c,	// (0x00027f85) pec_content_pane_t2_ParamLimits

0xd44c,	// (0x00027f85) pec_content_pane_t2

0x0001,

0xf427,	// (0x00029f60) pec_content_pane_t_ParamLimits

0xf427,	// (0x00029f60) pec_content_pane_t

0xc5a0,	// (0x000270d9) list_single_graphic_pane_cp01_ParamLimits

0xc5a0,	// (0x000270d9) list_single_graphic_pane_cp01

0xc533,	// (0x0002706c) bg_popup_sub_pane_cp04

0xd460,	// (0x00027f99) popup_mup_playback_window_g1

0xd46c,	// (0x00027fa5) popup_mup_playback_window_t1

0xd481,	// (0x00027fba) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00029f65) popup_mup_playback_window_t

0xd4b8,	// (0x00027ff1) main_image_pane_g1_ParamLimits

0xd4b8,	// (0x00027ff1) main_image_pane_g1

0xd4fb,	// (0x00028034) scroll_pane_cp018_ParamLimits

0xd4fb,	// (0x00028034) scroll_pane_cp018

0xd513,	// (0x0002804c) scroll_pane_cp016_ParamLimits

0xd513,	// (0x0002804c) scroll_pane_cp016

0x7056,	// (0x00021b8f) smil2_image_pane_ParamLimits

0x7056,	// (0x00021b8f) smil2_image_pane

0x7086,	// (0x00021bbf) smil2_root_pane_ParamLimits

0x7086,	// (0x00021bbf) smil2_root_pane

0x70b2,	// (0x00021beb) smil2_text_pane_ParamLimits

0x70b2,	// (0x00021beb) smil2_text_pane

0xbead,	// (0x000269e6) bg_list_pane_cp06

0xbead,	// (0x000269e6) grid_radio_pane

0xc2d8,	// (0x00026e11) bg_popup_window_pane_cp06

0xcd5a,	// (0x00027893) main_fmradio_pane_t1

0xe46f,	// (0x00028fa8) heading_pane_cp04

0xcd5a,	// (0x00027893) main_fmradio_pane_t2

0xe477,	// (0x00028fb0) popup_cale_lunar_info_window_g1

0xcd5a,	// (0x00027893) main_fmradio_pane_t3

0xe47f,	// (0x00028fb8) popup_cale_lunar_info_window_g2

0xcd5a,	// (0x00027893) main_fmradio_pane_t4

0x0001,

0xcd5a,	// (0x00027893) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x0002a03a) popup_cale_lunar_info_window_g

0xf28c,	// (0x00029dc5) main_fmradio_pane_t

0xbead,	// (0x000269e6) wait_bar_pane_cp03

0xc5a0,	// (0x000270d9) cell_fmradio_pane_ParamLimits

0xc5a0,	// (0x000270d9) cell_fmradio_pane

0xc5ae,	// (0x000270e7) cell_fmradio_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_fmradio_pane_g1

0xbead,	// (0x000269e6) grid_highlight_pane_cp011

0xd547,	// (0x00028080) poc_content_pane_ParamLimits

0xd547,	// (0x00028080) poc_content_pane

0xd559,	// (0x00028092) scroll_pane_cp019

0x70f2,	// (0x00021c2b) popup_call_poc_act_window_ParamLimits

0x70f2,	// (0x00021c2b) popup_call_poc_act_window

0x70ff,	// (0x00021c38) popup_call_poc_inact_window_ParamLimits

0x70ff,	// (0x00021c38) popup_call_poc_inact_window

0xf4d8,	// (0x0002a011) bg_popup_call_poc_act_pane_g

0xe3e7,	// (0x00028f20) bg_popup_call_poc_inact_pane_g1

0xe3ef,	// (0x00028f28) bg_popup_call_poc_inact_pane_g2

0xd561,	// (0x0002809a) popup_call_poc_act_window_g2

0xe3f7,	// (0x00028f30) bg_popup_call_poc_inact_pane_g3

0xe3ff,	// (0x00028f38) bg_popup_call_poc_inact_pane_g4

0xe407,	// (0x00028f40) bg_popup_call_poc_inact_pane_g5

0xd569,	// (0x000280a2) popup_call_poc_act_window_t1_ParamLimits

0xd569,	// (0x000280a2) popup_call_poc_act_window_t1

0xd591,	// (0x000280ca) popup_call_poc_act_window_t2_ParamLimits

0xd591,	// (0x000280ca) popup_call_poc_act_window_t2

0xd5b9,	// (0x000280f2) popup_call_poc_act_window_t3_ParamLimits

0xd5b9,	// (0x000280f2) popup_call_poc_act_window_t3

0xd5e1,	// (0x0002811a) popup_call_poc_act_window_t4_ParamLimits

0xd5e1,	// (0x0002811a) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00029f7a) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00029f7a) popup_call_poc_act_window_t

0xe40f,	// (0x00028f48) bg_popup_call_poc_inact_pane_g6

0xe417,	// (0x00028f50) bg_popup_call_poc_inact_pane_g7

0xe41f,	// (0x00028f58) bg_popup_call_poc_inact_pane_g8

0xd5f3,	// (0x0002812c) popup_call_poc_inact_window_g2

0xe427,	// (0x00028f60) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00029ffe) bg_popup_call_poc_inact_pane_g

0xd5fb,	// (0x00028134) popup_call_poc_inact_window_t1_ParamLimits

0xd5fb,	// (0x00028134) popup_call_poc_inact_window_t1

0xd610,	// (0x00028149) popup_call_poc_inact_window_t2_ParamLimits

0xd610,	// (0x00028149) popup_call_poc_inact_window_t2

0xd625,	// (0x0002815e) popup_call_poc_inact_window_t3_ParamLimits

0xd625,	// (0x0002815e) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00029f83) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00029f83) popup_call_poc_inact_window_t

0xe521,	// (0x0002905a) context_pane_ParamLimits

0x7584,	// (0x000220bd) signal_pane_ParamLimits

0xc7fc,	// (0x00027335) main_call2_pane

0x3eab,	// (0x0001e9e4) popup_phob_thumbnail2_window_ParamLimits

0x3eab,	// (0x0001e9e4) popup_phob_thumbnail2_window

0x3d08,	// (0x0001e841) aid_hotspot_pointer_arrow_pane

0x3d10,	// (0x0001e849) aid_hotspot_pointer_hand_pane

0x73cc,	// (0x00021f05) phob_pre_status_pane_g5

0xc5a0,	// (0x000270d9) cams_zoom_pane_ParamLimits

0xc5a0,	// (0x000270d9) image_vga_pane_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g3_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g4_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g5_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g6_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00029cb9) main_camera_pane_g_ParamLimits

0xc60a,	// (0x00027143) main_camera_pane_t1_ParamLimits

0xc60a,	// (0x00027143) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00029cca) main_camera_pane_t_ParamLimits

0xc533,	// (0x0002706c) bg_popup_preview_window_pane_cp01_ParamLimits

0xc533,	// (0x0002706c) bg_popup_preview_window_pane_cp01

0xd63a,	// (0x00028173) popup_phob_thumbnail2_window_g1_ParamLimits

0xd63a,	// (0x00028173) popup_phob_thumbnail2_window_g1

0xc2d8,	// (0x00026e11) call2_cli_visual_pane

0x711b,	// (0x00021c54) popup_call2_audio_conf_window_ParamLimits

0x711b,	// (0x00021c54) popup_call2_audio_conf_window

0x7130,	// (0x00021c69) popup_call2_audio_first_window_ParamLimits

0x7130,	// (0x00021c69) popup_call2_audio_first_window

0x71ce,	// (0x00021d07) popup_call2_audio_in_window_ParamLimits

0x71ce,	// (0x00021d07) popup_call2_audio_in_window

0x7210,	// (0x00021d49) popup_call2_audio_out_window_ParamLimits

0x7210,	// (0x00021d49) popup_call2_audio_out_window

0x7272,	// (0x00021dab) popup_call2_audio_second_window_ParamLimits

0x7272,	// (0x00021dab) popup_call2_audio_second_window

0x72d0,	// (0x00021e09) popup_call2_audio_wait_window_ParamLimits

0x72d0,	// (0x00021e09) popup_call2_audio_wait_window

0xc2d8,	// (0x00026e11) bg_popup_call2_act_pane_cp03

0xc515,	// (0x0002704e) list_conf_pane_cp

0xd646,	// (0x0002817f) popup_call2_audio_conf_window_t1

0xcf3e,	// (0x00027a77) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf3e,	// (0x00027a77) list_single_graphic_popup_conf2_pane

0xcf51,	// (0x00027a8a) list_highlight_pane_cp04

0xd654,	// (0x0002818d) list_single_graphic_popup_conf2_pane_g1

0xcf62,	// (0x00027a9b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00029f8a) list_single_graphic_popup_conf2_pane_g

0xd65e,	// (0x00028197) list_single_graphic_popup_conf2_pane_t1

0xd66c,	// (0x000281a5) bg_popup_call2_act_pane_cp01_ParamLimits

0xd66c,	// (0x000281a5) bg_popup_call2_act_pane_cp01

0xd6f6,	// (0x0002822f) call_type_pane_cp05_ParamLimits

0xd6f6,	// (0x0002822f) call_type_pane_cp05

0xd74a,	// (0x00028283) popup_call2_audio_second_window_g1_ParamLimits

0xd74a,	// (0x00028283) popup_call2_audio_second_window_g1

0xd79e,	// (0x000282d7) popup_call2_audio_second_window_g2_ParamLimits

0xd79e,	// (0x000282d7) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00029f8f) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00029f8f) popup_call2_audio_second_window_g

0xd803,	// (0x0002833c) popup_call2_audio_second_window_t1_ParamLimits

0xd803,	// (0x0002833c) popup_call2_audio_second_window_t1

0xd8be,	// (0x000283f7) popup_call2_audio_second_window_t2_ParamLimits

0xd8be,	// (0x000283f7) popup_call2_audio_second_window_t2

0xd911,	// (0x0002844a) popup_call2_audio_second_window_t3_ParamLimits

0xd911,	// (0x0002844a) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00029f96) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00029f96) popup_call2_audio_second_window_t

0xc2d8,	// (0x00026e11) bg_popup_call2_in_pane_cp02

0xc2e2,	// (0x00026e1b) call_type_pane_cp04

0x730f,	// (0x00021e48) popup_call2_audio_wait_window_g1

0x7317,	// (0x00021e50) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00029f9f) popup_call2_audio_wait_window_g

0xc2fa,	// (0x00026e33) popup_call2_audio_wait_window_t3

0xda12,	// (0x0002854b) bg_popup_call2_act_pane_ParamLimits

0xda12,	// (0x0002854b) bg_popup_call2_act_pane

0xdad2,	// (0x0002860b) call_type_pane_cp03_ParamLimits

0xdad2,	// (0x0002860b) call_type_pane_cp03

0xdb36,	// (0x0002866f) popup_call2_audio_first_window_g1_ParamLimits

0xdb36,	// (0x0002866f) popup_call2_audio_first_window_g1

0xdba6,	// (0x000286df) popup_call2_audio_first_window_g2_ParamLimits

0xdba6,	// (0x000286df) popup_call2_audio_first_window_g2

0xda04,	// (0x0002853d) popup_call2_audio_first_window_g3_ParamLimits

0xda04,	// (0x0002853d) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00029fa4) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00029fa4) popup_call2_audio_first_window_g

0xdc84,	// (0x000287bd) popup_call2_audio_first_window_t1_ParamLimits

0xdc84,	// (0x000287bd) popup_call2_audio_first_window_t1

0xdd87,	// (0x000288c0) popup_call2_audio_first_window_t4_ParamLimits

0xdd87,	// (0x000288c0) popup_call2_audio_first_window_t4

0xde6a,	// (0x000289a3) popup_call2_audio_first_window_t5_ParamLimits

0xde6a,	// (0x000289a3) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00029faf) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00029faf) popup_call2_audio_first_window_t

0xc52b,	// (0x00027064) bg_popup_call2_act_pane_g1

0xe487,	// (0x00028fc0) popup_cale_lunar_info_window_t1

0xe495,	// (0x00028fce) popup_cale_lunar_info_window_t2

0xe4a3,	// (0x00028fdc) popup_cale_lunar_info_window_t3

0xc2d8,	// (0x00026e11) bg_popup_call2_bubble_pane

0xdf6b,	// (0x00028aa4) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf6b,	// (0x00028aa4) bg_popup_call2_in_pane_cp01

0xbfa6,	// (0x00026adf) call_type_pane_cp02

0x731f,	// (0x00021e58) popup_call2_audio_out_window_g1_ParamLimits

0x731f,	// (0x00021e58) popup_call2_audio_out_window_g1

0xdfb3,	// (0x00028aec) popup_call2_audio_out_window_g2_ParamLimits

0xdfb3,	// (0x00028aec) popup_call2_audio_out_window_g2

0x734b,	// (0x00021e84) popup_call2_audio_out_window_g3_ParamLimits

0x734b,	// (0x00021e84) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00029fb8) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00029fb8) popup_call2_audio_out_window_g

0xdfea,	// (0x00028b23) popup_call2_audio_out_window_t1_ParamLimits

0xdfea,	// (0x00028b23) popup_call2_audio_out_window_t1

0xe049,	// (0x00028b82) popup_call2_audio_out_window_t2_ParamLimits

0xe049,	// (0x00028b82) popup_call2_audio_out_window_t2

0xe09d,	// (0x00028bd6) popup_call2_audio_out_window_t3_ParamLimits

0xe09d,	// (0x00028bd6) popup_call2_audio_out_window_t3

0xe0b3,	// (0x00028bec) popup_call2_audio_out_window_t4_ParamLimits

0xe0b3,	// (0x00028bec) popup_call2_audio_out_window_t4

0xe0c9,	// (0x00028c02) popup_call2_audio_out_window_t5_ParamLimits

0xe0c9,	// (0x00028c02) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00029fc1) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00029fc1) popup_call2_audio_out_window_t

0xe12d,	// (0x00028c66) bg_popup_call2_in_pane_ParamLimits

0xe12d,	// (0x00028c66) bg_popup_call2_in_pane

0xe189,	// (0x00028cc2) popup_call2_audio_in_window_g1_ParamLimits

0xe189,	// (0x00028cc2) popup_call2_audio_in_window_g1

0xe1c1,	// (0x00028cfa) popup_call2_audio_in_window_g2_ParamLimits

0xe1c1,	// (0x00028cfa) popup_call2_audio_in_window_g2

0xe1f9,	// (0x00028d32) popup_call2_audio_in_window_g3_ParamLimits

0xe1f9,	// (0x00028d32) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00029fce) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00029fce) popup_call2_audio_in_window_g

0xe251,	// (0x00028d8a) popup_call2_audio_in_window_t1_ParamLimits

0xe251,	// (0x00028d8a) popup_call2_audio_in_window_t1

0xe2d1,	// (0x00028e0a) popup_call2_audio_in_window_t2_ParamLimits

0xe2d1,	// (0x00028e0a) popup_call2_audio_in_window_t2

0xe351,	// (0x00028e8a) popup_call2_audio_in_window_t3_ParamLimits

0xe351,	// (0x00028e8a) popup_call2_audio_in_window_t3

0xe36b,	// (0x00028ea4) popup_call2_audio_in_window_t4_ParamLimits

0xe36b,	// (0x00028ea4) popup_call2_audio_in_window_t4

0xe37d,	// (0x00028eb6) popup_call2_audio_in_window_t5_ParamLimits

0xe37d,	// (0x00028eb6) popup_call2_audio_in_window_t5

0xe392,	// (0x00028ecb) popup_call2_audio_in_window_t6_ParamLimits

0xe392,	// (0x00028ecb) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00029fd7) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00029fd7) popup_call2_audio_in_window_t

0xc52b,	// (0x00027064) bg_popup_call2_in_pane_g1

0xe4b1,	// (0x00028fea) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x0002a03f) popup_cale_lunar_info_window_t

0xc533,	// (0x0002706c) bg_popup_call2_rect_pane_ParamLimits

0xc533,	// (0x0002706c) bg_popup_call2_rect_pane

0xc2d8,	// (0x00026e11) call2_cli_visual_graphic_pane

0xc2d8,	// (0x00026e11) call2_cli_visual_text_pane

0x3efa,	// (0x0001ea33) smil_status_volume_pane_g3

0x0002,

0xc54b,	// (0x00027084) call2_cli_visual_graphic_pane_g1

0xc54b,	// (0x00027084) call2_cli_visual_graphic_pane_g2

0xc54b,	// (0x00027084) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00029fe4) call2_cli_visual_graphic_pane_g

0xe3a7,	// (0x00028ee0) bg_popup_call2_rect_pane_g1

0xc721,	// (0x0002725a) bg_popup_call2_rect_pane_g2

0xe3af,	// (0x00028ee8) bg_popup_call2_rect_pane_g3

0xe3b7,	// (0x00028ef0) bg_popup_call2_rect_pane_g4

0xe3bf,	// (0x00028ef8) bg_popup_call2_rect_pane_g5

0xe3c7,	// (0x00028f00) bg_popup_call2_rect_pane_g6

0xe3cf,	// (0x00028f08) bg_popup_call2_rect_pane_g7

0xe3d7,	// (0x00028f10) bg_popup_call2_rect_pane_g8

0xe3df,	// (0x00028f18) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00029feb) bg_popup_call2_rect_pane_g

0xe3e7,	// (0x00028f20) bg_popup_call2_bubble_pane_g1

0xe3ef,	// (0x00028f28) bg_popup_call2_bubble_pane_g2

0xe3f7,	// (0x00028f30) bg_popup_call2_bubble_pane_g3

0xe3ff,	// (0x00028f38) bg_popup_call2_bubble_pane_g4

0xe407,	// (0x00028f40) bg_popup_call2_bubble_pane_g5

0xe40f,	// (0x00028f48) bg_popup_call2_bubble_pane_g6

0xe417,	// (0x00028f50) bg_popup_call2_bubble_pane_g7

0xe41f,	// (0x00028f58) bg_popup_call2_bubble_pane_g8

0xe427,	// (0x00028f60) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00029ffe) bg_popup_call2_bubble_pane_g

0x5119,	// (0x0001fc52) aid_cale_week_size_cell_pane

0xc533,	// (0x0002706c) aid_cams_cif_uncrop_pane_ParamLimits

0xc533,	// (0x0002706c) aid_cams_cif_uncrop_pane

0xc5a0,	// (0x000270d9) aid_cams_size_cell_ParamLimits

0xc5a0,	// (0x000270d9) aid_cams_size_cell

0xc5a0,	// (0x000270d9) grid_cams_pane_ParamLimits

0xc5a0,	// (0x000270d9) linegrid_cams_pane_ParamLimits

0x56e8,	// (0x00020221) call_video_pane_t1

0x5709,	// (0x00020242) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00029d16) call_video_pane_t

0x5c50,	// (0x00020789) aid_cale_month_size_cell_pane_ParamLimits

0x5c50,	// (0x00020789) aid_cale_month_size_cell_pane

0xf54a,	// (0x0002a083) smil_status_volume_pane_g

0x3f07,	// (0x0001ea40) volume_smil_pane_ParamLimits

0x36a5,	// (0x0001e1de) aid_popup2_width_pane

0x5052,	// (0x0001fb8b) cell_qdial_pane_g4_ParamLimits

0x5052,	// (0x0001fb8b) cell_qdial_pane_g4

0x6a33,	// (0x0002156c) aid_blid_cardinal_pane_ParamLimits

0x6a43,	// (0x0002157c) aid_blid_destination_pane_ParamLimits

0x6a43,	// (0x0002157c) aid_blid_destination_pane

0xc533,	// (0x0002706c) bg_popup_call_poc_act_pane_ParamLimits

0xc533,	// (0x0002706c) bg_popup_call_poc_act_pane

0xc533,	// (0x0002706c) bg_popup_call_poc_inact_pane_ParamLimits

0xc533,	// (0x0002706c) bg_popup_call_poc_inact_pane

0xe42f,	// (0x00028f68) bg_popup_call_poc_act_pane_g1

0xe437,	// (0x00028f70) bg_popup_call_poc_act_pane_g2

0xe43f,	// (0x00028f78) bg_popup_call_poc_act_pane_g3

0xe3ff,	// (0x00028f38) bg_popup_call_poc_act_pane_g4

0xe407,	// (0x00028f40) bg_popup_call_poc_act_pane_g5

0xe447,	// (0x00028f80) bg_popup_call_poc_act_pane_g6

0xe417,	// (0x00028f50) bg_popup_call_poc_act_pane_g7

0xe44f,	// (0x00028f88) bg_popup_call_poc_act_pane_g8

0xc2d8,	// (0x00026e11) main_usb_pane

0x3dda,	// (0x0001e913) popup_cale_lunar_info_window

0x5a32,	// (0x0002056b) im_reading_pane_t1_ParamLimits

0xc8bd,	// (0x000273f6) list_im_pane_ParamLimits

0xc8ce,	// (0x00027407) scroll_pane_cp07_ParamLimits

0xc2d8,	// (0x00026e11) grid_highlight_pane_cp012

0xc533,	// (0x0002706c) mup_scale_pane_ParamLimits

0xc5bc,	// (0x000270f5) main_usb_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) main_usb_pane_g1

0xc5bc,	// (0x000270f5) main_usb_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x0002a028) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x0002a028) main_usb_pane_g

0xc60a,	// (0x00027143) main_usb_pane_t1_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t1

0xc60a,	// (0x00027143) main_usb_pane_t2_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t2

0xc60a,	// (0x00027143) main_usb_pane_t3_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t3

0xc60a,	// (0x00027143) main_usb_pane_t4_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t4

0xc60a,	// (0x00027143) main_usb_pane_t5_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t5

0xc60a,	// (0x00027143) main_usb_pane_t6_ParamLimits

0xc60a,	// (0x00027143) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x0002a02d) main_usb_pane_t_ParamLimits

0x69d9,	// (0x00021512) aid_text_placing

0x69e5,	// (0x0002151e) main_location2_pane_t1_ParamLimits

0x69f9,	// (0x00021532) main_location2_pane_t2_ParamLimits

0x6a0d,	// (0x00021546) main_location2_pane_t3_ParamLimits

0x6a21,	// (0x0002155a) main_location2_pane_t4_ParamLimits

0x6a21,	// (0x0002155a) main_location2_pane_t4

0xf31e,	// (0x00029e57) main_location2_pane_t_ParamLimits

0xc561,	// (0x0002709a) find_pinb_pane_g2_ParamLimits

0xc561,	// (0x0002709a) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00029bce) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00029bce) find_pinb_pane_g

0xc56d,	// (0x000270a6) find_pinb_pane_t1_ParamLimits

0xc57f,	// (0x000270b8) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00029bd3) find_pinb_pane_t_ParamLimits

0xc2d8,	// (0x00026e11) main_call3_pane

0x61f3,	// (0x00020d2c) cale_month_day_heading_pane_t1_ParamLimits

0x6279,	// (0x00020db2) cale_month_day_heading_pane_t2_ParamLimits

0x62f2,	// (0x00020e2b) cale_month_day_heading_pane_t3_ParamLimits

0x636b,	// (0x00020ea4) cale_month_day_heading_pane_t4_ParamLimits

0x63e4,	// (0x00020f1d) cale_month_day_heading_pane_t5_ParamLimits

0x645d,	// (0x00020f96) cale_month_day_heading_pane_t6_ParamLimits

0x64d6,	// (0x0002100f) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00029d4e) cale_month_day_heading_pane_t_ParamLimits

0xcb3f,	// (0x00027678) smil_status_volume_pane

0x6f3c,	// (0x00021a75) postcard_address_pane_ParamLimits

0x6f3c,	// (0x00021a75) postcard_address_pane

0x6f48,	// (0x00021a81) postcard_message_pane_ParamLimits

0x6f48,	// (0x00021a81) postcard_message_pane

0x7377,	// (0x00021eb0) call2_cli_visual_pane_t1_ParamLimits

0x7377,	// (0x00021eb0) call2_cli_visual_pane_t1

0xe5d4,	// (0x0002910d) postcard_message_pane_t1_ParamLimits

0xe5d4,	// (0x0002910d) postcard_message_pane_t1

0xe5bc,	// (0x000290f5) postcard_address_pane_t1_ParamLimits

0xe5bc,	// (0x000290f5) postcard_address_pane_t1

0x76dc,	// (0x00022215) popup_call3_audio_in_window_ParamLimits

0x76dc,	// (0x00022215) popup_call3_audio_in_window

0x75c0,	// (0x000220f9) bg_popup_call3_in_pane_ParamLimits

0x75c0,	// (0x000220f9) bg_popup_call3_in_pane

0x7622,	// (0x0002215b) popup_call3_audio_in_window_g1_ParamLimits

0x7622,	// (0x0002215b) popup_call3_audio_in_window_g1

0x763a,	// (0x00022173) popup_call3_audio_in_window_g2_ParamLimits

0x763a,	// (0x00022173) popup_call3_audio_in_window_g2

0x7652,	// (0x0002218b) popup_call3_audio_in_window_g3_ParamLimits

0x7652,	// (0x0002218b) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x0002a08a) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x0002a08a) popup_call3_audio_in_window_g

0x767a,	// (0x000221b3) popup_call3_audio_in_window_t1_ParamLimits

0x767a,	// (0x000221b3) popup_call3_audio_in_window_t1

0x76a2,	// (0x000221db) popup_call3_audio_in_window_t2_ParamLimits

0x76a2,	// (0x000221db) popup_call3_audio_in_window_t2

0x76ca,	// (0x00022203) popup_call3_audio_in_window_t3_ParamLimits

0x76ca,	// (0x00022203) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x0002a093) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002a093) popup_call3_audio_in_window_t

0xc7fc,	// (0x00027335) bg_popup_call3_rect_pane

0xe3a7,	// (0x00028ee0) bg_popup_call3_rect_pane_g1

0xc721,	// (0x0002725a) bg_popup_call3_rect_pane_g2

0xe3af,	// (0x00028ee8) bg_popup_call3_rect_pane_g3

0xe3b7,	// (0x00028ef0) bg_popup_call3_rect_pane_g4

0xe3bf,	// (0x00028ef8) bg_popup_call3_rect_pane_g5

0xe3c7,	// (0x00028f00) bg_popup_call3_rect_pane_g6

0xe3cf,	// (0x00028f08) bg_popup_call3_rect_pane_g7

0xbead,	// (0x000269e6) mup_visualizer_osc_pane

0xbead,	// (0x000269e6) mup_visualizer_spec_pane

0x75e0,	// (0x00022119) call3_video_qcif_pane_ParamLimits

0x75e0,	// (0x00022119) call3_video_qcif_pane

0x75f2,	// (0x0002212b) call3_video_qcif_uncrop_pane_ParamLimits

0x75f2,	// (0x0002212b) call3_video_qcif_uncrop_pane

0x7600,	// (0x00022139) call3_video_subqcif_pane_ParamLimits

0x7600,	// (0x00022139) call3_video_subqcif_pane

0x7612,	// (0x0002214b) call3_video_subqcif_uncrop_pane_ParamLimits

0x7612,	// (0x0002214b) call3_video_subqcif_uncrop_pane

0x766a,	// (0x000221a3) popup_call3_audio_in_window_g4_ParamLimits

0x766a,	// (0x000221a3) popup_call3_audio_in_window_g4

0xbead,	// (0x000269e6) mup_spec_half_pane

0xbead,	// (0x000269e6) mup_spec_half_pane_cp

0xbead,	// (0x000269e6) mup_osc_middle_pane

0xc5ec,	// (0x00027125) mup_visualizer_osc_pane_g1

0xe56f,	// (0x000290a8) mup_spec_bar_pane_ParamLimits

0xe56f,	// (0x000290a8) mup_spec_bar_pane

0xc5ec,	// (0x00027125) mup_spec_bar_pane_g1

0xc5ec,	// (0x00027125) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00029be8) mup_spec_bar_pane_g

0x5119,	// (0x0001fc52) aid_cale_week_size_cell_pane_ParamLimits

0x512e,	// (0x0001fc67) bg_cale_heading_pane_ParamLimits

0xc75e,	// (0x00027297) bg_cale_pane_cp01_ParamLimits

0x514e,	// (0x0001fc87) cale_week_corner_pane_ParamLimits

0x5168,	// (0x0001fca1) cale_week_day_heading_pane_ParamLimits

0x5188,	// (0x0001fcc1) cale_week_scroll_pane_g1_ParamLimits

0x51a3,	// (0x0001fcdc) cale_week_scroll_pane_g2_ParamLimits

0x51b6,	// (0x0001fcef) cale_week_scroll_pane_g3_ParamLimits

0x51c9,	// (0x0001fd02) cale_week_scroll_pane_g4_ParamLimits

0x51dc,	// (0x0001fd15) cale_week_scroll_pane_g5_ParamLimits

0x51ef,	// (0x0001fd28) cale_week_scroll_pane_g6_ParamLimits

0x5202,	// (0x0001fd3b) cale_week_scroll_pane_g7_ParamLimits

0x5217,	// (0x0001fd50) cale_week_scroll_pane_g8_ParamLimits

0x522c,	// (0x0001fd65) cale_week_scroll_pane_g9_ParamLimits

0x523f,	// (0x0001fd78) cale_week_scroll_pane_g10_ParamLimits

0x5252,	// (0x0001fd8b) cale_week_scroll_pane_g11_ParamLimits

0x5265,	// (0x0001fd9e) cale_week_scroll_pane_g12_ParamLimits

0x527c,	// (0x0001fdb5) cale_week_scroll_pane_g13_ParamLimits

0x5297,	// (0x0001fdd0) cale_week_scroll_pane_g14_ParamLimits

0x52b2,	// (0x0001fdeb) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00029c5f) cale_week_scroll_pane_g_ParamLimits

0x52e2,	// (0x0001fe1b) cale_week_time_pane_ParamLimits

0x52f7,	// (0x0001fe30) grid_cale_week_pane_ParamLimits

0xc77b,	// (0x000272b4) listscroll_cale_week_pane_t1

0xc78d,	// (0x000272c6) scroll_pane_cp08_ParamLimits

0x5cc4,	// (0x000207fd) cale_month_corner_pane_ParamLimits

0xcb15,	// (0x0002764e) cale_month_pane_t1

0x6176,	// (0x00020caf) cale_month_week_pane_ParamLimits

0xda04,	// (0x0002853d) popup_call_status_window_g1_ParamLimits

0x68a3,	// (0x000213dc) popup_call_status_window_g2_ParamLimits

0x68af,	// (0x000213e8) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00029dde) popup_call_status_window_g_ParamLimits

0xced1,	// (0x00027a0a) aid_call2_pane

0x6dc9,	// (0x00021902) msg_header_pane_g1

0x6f3c,	// (0x00021a75) postcard_address2_pane_ParamLimits

0x6f3c,	// (0x00021a75) postcard_address2_pane

0x6f48,	// (0x00021a81) postcard_message2_pane_ParamLimits

0x6f48,	// (0x00021a81) postcard_message2_pane

0x7592,	// (0x000220cb) message2_row_pane_ParamLimits

0x7592,	// (0x000220cb) message2_row_pane

0x75ad,	// (0x000220e6) address2_row_pane_ParamLimits

0x75ad,	// (0x000220e6) address2_row_pane

0xe53c,	// (0x00029075) postcard_message2_row_pane_g1

0xe544,	// (0x0002907d) postcard_message2_row_pane_t1

0xe53c,	// (0x00029075) address2_row_pane_g1

0xe544,	// (0x0002907d) address2_row_pane_t1

0x5497,	// (0x0001ffd0) aid_size_cell_vorec

0xc2d8,	// (0x00026e11) main_rss_pane

0xe552,	// (0x0002908b) rss_list_single_pane_ParamLimits

0xe552,	// (0x0002908b) rss_list_single_pane

0xe560,	// (0x00029099) rss_list_single_pane_t1

0xe560,	// (0x00029099) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x0002a07e) rss_list_single_pane_t

0xc2d8,	// (0x00026e11) main_camera2_pane

0xc2d8,	// (0x00026e11) main_video2_pane

0x391f,	// (0x0001e458) cams_zoom_pane_cp2_ParamLimits

0x391f,	// (0x0001e458) cams_zoom_pane_cp2

0x391f,	// (0x0001e458) image2_vga_pane_ParamLimits

0x391f,	// (0x0001e458) image2_vga_pane

0xcf11,	// (0x00027a4a) main_camera2_pane_g1_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g1

0xcf11,	// (0x00027a4a) main_camera2_pane_g2_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g2

0xcf11,	// (0x00027a4a) main_camera2_pane_g3_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g3

0xcf11,	// (0x00027a4a) main_camera2_pane_g4_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g4

0xcf11,	// (0x00027a4a) main_camera2_pane_g5_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g5

0xcf11,	// (0x00027a4a) main_camera2_pane_g6_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g6

0xcf11,	// (0x00027a4a) main_camera2_pane_g7_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g7

0xcf11,	// (0x00027a4a) main_camera2_pane_g8_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g8

0x0008,

0xf561,	// (0x0002a09a) main_camera2_pane_g_ParamLimits

0xf561,	// (0x0002a09a) main_camera2_pane_g

0x3f2a,	// (0x0001ea63) main_camera2_pane_t1_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t1

0x3f2a,	// (0x0001ea63) main_camera2_pane_t2_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t2

0x3f2a,	// (0x0001ea63) main_camera2_pane_t3_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t3

0x3f2a,	// (0x0001ea63) main_camera2_pane_t4_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t4

0x0006,

0xf574,	// (0x0002a0ad) main_camera2_pane_t_ParamLimits

0xf574,	// (0x0002a0ad) main_camera2_pane_t

0x3f52,	// (0x0001ea8b) cams_zoom_pane_cp4_ParamLimits

0x3f52,	// (0x0001ea8b) cams_zoom_pane_cp4

0x3d85,	// (0x0001e8be) image2_cif_pane_ParamLimits

0x3d85,	// (0x0001e8be) image2_cif_pane

0x391f,	// (0x0001e458) image2_subqcif_pane_ParamLimits

0x391f,	// (0x0001e458) image2_subqcif_pane

0x3f60,	// (0x0001ea99) main_video2_pane_g1_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g1

0x3f60,	// (0x0001ea99) main_video2_pane_g2_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g2

0x3f60,	// (0x0001ea99) main_video2_pane_g3_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g3

0x3f60,	// (0x0001ea99) main_video2_pane_g4_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g4

0x3f60,	// (0x0001ea99) main_video2_pane_g5_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g5

0x3f60,	// (0x0001ea99) main_video2_pane_g6_ParamLimits

0x3f60,	// (0x0001ea99) main_video2_pane_g6

0x0005,

0xf583,	// (0x0002a0bc) main_video2_pane_g_ParamLimits

0xf583,	// (0x0002a0bc) main_video2_pane_g

0x3f6e,	// (0x0001eaa7) main_video2_pane_t1_ParamLimits

0x3f6e,	// (0x0001eaa7) main_video2_pane_t1

0x3f6e,	// (0x0001eaa7) main_video2_pane_t2_ParamLimits

0x3f6e,	// (0x0001eaa7) main_video2_pane_t2

0x3f6e,	// (0x0001eaa7) main_video2_pane_t3_ParamLimits

0x3f6e,	// (0x0001eaa7) main_video2_pane_t3

0x0002,

0xf590,	// (0x0002a0c9) main_video2_pane_t_ParamLimits

0xf590,	// (0x0002a0c9) main_video2_pane_t

0x7430,	// (0x00021f69) call_muted_g2

0x0001,

0xf537,	// (0x0002a070) call_muted_g

0xc2d8,	// (0x00026e11) main_mup2_pane

0xc5ca,	// (0x00027103) main_mup2_pane_g1_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g1

0xc5ca,	// (0x00027103) main_mup2_pane_g2_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g2

0x0bf3,	// (0x0001b72c) main_mup_pane_g13_cp1

0x392d,	// (0x0001e466) mup_volume_pane_cp1

0xc5ca,	// (0x00027103) main_mup2_pane_g4_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g4

0xc5ca,	// (0x00027103) main_mup2_pane_g5_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g5

0xc5ca,	// (0x00027103) main_mup2_pane_g6_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g6

0xc5ca,	// (0x00027103) main_mup2_pane_g7_ParamLimits

0xc5ca,	// (0x00027103) main_mup2_pane_g7

0x0006,

0xf597,	// (0x0002a0d0) main_mup2_pane_g_ParamLimits

0xf597,	// (0x0002a0d0) main_mup2_pane_g

0xc5d8,	// (0x00027111) main_mup2_pane_t1_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t1

0xc5d8,	// (0x00027111) main_mup2_pane_t2_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t2

0xc5d8,	// (0x00027111) main_mup2_pane_t3_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t3

0xc5d8,	// (0x00027111) main_mup2_pane_t4_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t4

0xc5d8,	// (0x00027111) main_mup2_pane_t5_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t5

0xc5d8,	// (0x00027111) main_mup2_pane_t6_ParamLimits

0xc5d8,	// (0x00027111) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x0002a0df) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x0002a0df) main_mup2_pane_t

0xe4e8,	// (0x00029021) mup2_visualizer_pane_ParamLimits

0xe4e8,	// (0x00029021) mup2_visualizer_pane

0xe4e8,	// (0x00029021) mup_progress_pane_cp_ParamLimits

0xe4e8,	// (0x00029021) mup_progress_pane_cp

0x3f98,	// (0x0001ead1) mup_volume_pane_cp_ParamLimits

0x3f98,	// (0x0001ead1) mup_volume_pane_cp

0xc5ae,	// (0x000270e7) mup2_visualizer_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) mup2_visualizer_pane_g1

0xc5bc,	// (0x000270f5) mup2_visualizer_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) mup2_visualizer_pane_g2

0xc5bc,	// (0x000270f5) mup2_visualizer_pane_g3_ParamLimits

0xc5bc,	// (0x000270f5) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00029bd8) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00029bd8) mup2_visualizer_pane_g

0xbead,	// (0x000269e6) aid_size_cell_fmradio

0x3d6e,	// (0x0001e8a7) aid_height_parent_landcape

0xc973,	// (0x000274ac) wml_content_pane_cp

0xc97b,	// (0x000274b4) wml_tabs_pane

0xc984,	// (0x000274bd) popup_wml_miniature_window

0xc98c,	// (0x000274c5) scroll_pane_cp021

0xc9a0,	// (0x000274d9) wml_content_pane_comp8

0xc2d8,	// (0x00026e11) bg_popup_sub_pane_cp05

0xe606,	// (0x0002913f) popup_wml_miniature_window_g1

0xe60e,	// (0x00029147) wml_miniature_view_pane

0x76eb,	// (0x00022224) aid_size_wml_view

0x76f3,	// (0x0002222c) wml_miniature_view_pane_g1

0x76fc,	// (0x00022235) wml_miniature_view_pane_g2

0x7705,	// (0x0002223e) wml_miniature_view_pane_g3

0x770d,	// (0x00022246) wml_miniature_view_pane_g4

0x7715,	// (0x0002224e) wml_miniature_view_pane_g5

0x771d,	// (0x00022256) wml_miniature_view_pane_g6

0x7725,	// (0x0002225e) wml_miniature_view_pane_g7

0x772d,	// (0x00022266) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x0002a0ec) wml_miniature_view_pane_g

0xe616,	// (0x0002914f) background_graphic_ParamLimits

0xe616,	// (0x0002914f) background_graphic

0xe622,	// (0x0002915b) wml_tabs_2_pane

0xe62b,	// (0x00029164) wml_tabs_3_pane_ParamLimits

0xe62b,	// (0x00029164) wml_tabs_3_pane

0xe63d,	// (0x00029176) wml_tabs_4_pane_ParamLimits

0xe63d,	// (0x00029176) wml_tabs_4_pane

0xe675,	// (0x000291ae) wml_tabs_5_pane_ParamLimits

0xe675,	// (0x000291ae) wml_tabs_5_pane

0xe68f,	// (0x000291c8) wml_tabs_pane_g2_ParamLimits

0xe68f,	// (0x000291c8) wml_tabs_pane_g2

0xe6a4,	// (0x000291dd) wml_tabs_pane_g3_ParamLimits

0xe6a4,	// (0x000291dd) wml_tabs_pane_g3

0xe6b9,	// (0x000291f2) wml_tabs_2_active_pane_ParamLimits

0xe6b9,	// (0x000291f2) wml_tabs_2_active_pane

0xe6b9,	// (0x000291f2) wml_tabs_2_passive_pane_ParamLimits

0xe6b9,	// (0x000291f2) wml_tabs_2_passive_pane

0x7735,	// (0x0002226e) wml_tabs_3_active_pane_cp_ParamLimits

0x7735,	// (0x0002226e) wml_tabs_3_active_pane_cp

0x7746,	// (0x0002227f) wml_tabs_3_passive_pane_ParamLimits

0x7746,	// (0x0002227f) wml_tabs_3_passive_pane

0x7757,	// (0x00022290) wml_tabs_3_passive_pane_cp_ParamLimits

0x7757,	// (0x00022290) wml_tabs_3_passive_pane_cp

0x7768,	// (0x000222a1) tabs_4_active_pane

0x7770,	// (0x000222a9) tabs_4_passive_pane

0x7778,	// (0x000222b1) tabs_4_passive_pane_cp

0x7780,	// (0x000222b9) tabs_4_passive_pane_cp2

0x73a4,	// (0x00021edd) aid_height_text

0xe4e8,	// (0x00029021) mup_volume_cont_pane_ParamLimits

0xe4e8,	// (0x00029021) mup_volume_cont_pane

0xbead,	// (0x000269e6) aid_size_cell_pinb

0xbead,	// (0x000269e6) aid_size_list_pinb

0xe4e8,	// (0x00029021) mup2_volume_cont_pane_ParamLimits

0xe4e8,	// (0x00029021) mup2_volume_cont_pane

0x3f82,	// (0x0001eabb) mup2_volume_cont_pane_g1_ParamLimits

0x3f82,	// (0x0001eabb) mup2_volume_cont_pane_g1

0x36b1,	// (0x0001e1ea) aid_size_cell_touch_ParamLimits

0x36b1,	// (0x0001e1ea) aid_size_cell_touch

0x3937,	// (0x0001e470) touch_pane_ParamLimits

0x3937,	// (0x0001e470) touch_pane

0x392d,	// (0x0001e466) main_rss2_pane

0xe6d0,	// (0x00029209) listscroll_rss2_pane

0xe6d9,	// (0x00029212) rss2_navigation_pane

0xe6e1,	// (0x0002921a) list_rss2_pane

0xd014,	// (0x00027b4d) scroll_pane_cp22

0xe6e9,	// (0x00029222) rss2_navigation_pane_g1

0xe6f2,	// (0x0002922b) rss2_navigation_pane_g2

0xe6fa,	// (0x00029233) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x0002a0fd) rss2_navigation_pane_g

0xe702,	// (0x0002923b) rss2_navigation_pane_t1

0x7788,	// (0x000222c1) rss2_list_single_pane_ParamLimits

0x7788,	// (0x000222c1) rss2_list_single_pane

0xe710,	// (0x00029249) rss2_list_single_pane_t2

0xe71e,	// (0x00029257) rss2_list_single_pane_t3_ParamLimits

0xe71e,	// (0x00029257) rss2_list_single_pane_t3

0xe73b,	// (0x00029274) rss2_list_single_pane_t4

0x673a,	// (0x00021273) smil_status_pane_g1

0x3d85,	// (0x0001e8be) main_image2_pane_ParamLimits

0x3d85,	// (0x0001e8be) main_image2_pane

0xcf11,	// (0x00027a4a) main_camera2_pane_g9_ParamLimits

0xcf11,	// (0x00027a4a) main_camera2_pane_g9

0x3f2a,	// (0x0001ea63) main_camera2_pane_t5_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t5

0x3f3e,	// (0x0001ea77) main_camera2_pane_t6_ParamLimits

0x3f3e,	// (0x0001ea77) main_camera2_pane_t6

0x77b9,	// (0x000222f2) main_image2_pane_g1_ParamLimits

0x77b9,	// (0x000222f2) main_image2_pane_g1

0x70dc,	// (0x00021c15) smil2_video_pane_ParamLimits

0x70dc,	// (0x00021c15) smil2_video_pane

0x36e5,	// (0x0001e21e) aid_zoom_text_primary_cp

0x38d4,	// (0x0001e40d) popup_preview_fixed_window

0xc8b5,	// (0x000273ee) im_reading_pane_g1

0x3f1c,	// (0x0001ea55) cams2_bc_adjust_pane_cp_ParamLimits

0x3f1c,	// (0x0001ea55) cams2_bc_adjust_pane_cp

0x391f,	// (0x0001e458) cams2_bc_adjust_pane_ParamLimits

0x391f,	// (0x0001e458) cams2_bc_adjust_pane

0x0bf3,	// (0x0001b72c) cams2_bc_adjust_pane_g1

0x392d,	// (0x0001e466) cams2_slider_pane

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g1

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x0002a104) cams2_slider_pane_g

0x39a8,	// (0x0001e4e1) calc_display_pane_ParamLimits

0x39c6,	// (0x0001e4ff) calc_paper_pane_ParamLimits

0x39e2,	// (0x0001e51b) grid_calc_pane_ParamLimits

0x3cd9,	// (0x0001e812) popup_clock_digital_window_t1_ParamLimits

0xd4e4,	// (0x0002801d) main_image_pane_t1

0x398e,	// (0x0001e4c7) aid_size_cell_calc_ParamLimits

0x398e,	// (0x0001e4c7) aid_size_cell_calc

0x3db6,	// (0x0001e8ef) popup_blid_sat_info2_window_ParamLimits

0x3db6,	// (0x0001e8ef) popup_blid_sat_info2_window

0xe749,	// (0x00029282) aid_size_cell_blid

0xe4e8,	// (0x00029021) bg_popup_window_pane_cp07

0xe766,	// (0x0002929f) grid_popup_blid_pane

0xe770,	// (0x000292a9) heading_pane_cp05_ParamLimits

0xe770,	// (0x000292a9) heading_pane_cp05

0xe83a,	// (0x00029373) cell_popup_blid_pane_ParamLimits

0xe83a,	// (0x00029373) cell_popup_blid_pane

0xe85e,	// (0x00029397) cell_popup_blid_pane_g1

0xe866,	// (0x0002939f) cell_popup_blid_pane_t1

0xe4e8,	// (0x00029021) mup2_indicator_pane_ParamLimits

0xe4e8,	// (0x00029021) mup2_indicator_pane

0xbead,	// (0x000269e6) mup2_visualizer_osc_pane

0xe5f0,	// (0x00029129) mup2_visualizer_spec_pane_ParamLimits

0xe5f0,	// (0x00029129) mup2_visualizer_spec_pane

0xbead,	// (0x000269e6) mup2_spec_half_pane

0xbead,	// (0x000269e6) mup2_spec_half_pane_cp

0xe874,	// (0x000293ad) mup2_spec_bar_pane_ParamLimits

0xe874,	// (0x000293ad) mup2_spec_bar_pane

0xc5ec,	// (0x00027125) mup2_spec_bar_pane_g1

0xe893,	// (0x000293cc) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x0002a12a) mup2_spec_bar_pane_g

0xbead,	// (0x000269e6) mup2_osc_middle_pane

0xc5ec,	// (0x00027125) mup2_visualizer_osc_pane_g1

0xbed7,	// (0x00026a10) popup_number_entry_window_t1_ParamLimits

0xbeea,	// (0x00026a23) popup_number_entry_window_t2_ParamLimits

0xbefc,	// (0x00026a35) popup_number_entry_window_t3_ParamLimits

0x4f46,	// (0x0001fa7f) popup_number_entry_window_t5_ParamLimits

0x4f46,	// (0x0001fa7f) popup_number_entry_window_t5

0xf040,	// (0x00029b79) popup_number_entry_window_t_ParamLimits

0xbf0e,	// (0x00026a47) text_title_cp2_ParamLimits

0x3d18,	// (0x0001e851) aid_hotspot_pointer_text2_pane

0x3d62,	// (0x0001e89b) main_viewer_pane_g9_ParamLimits

0x3d62,	// (0x0001e89b) main_viewer_pane_g9

0xcb15,	// (0x0002764e) cale_month_pane_t1_ParamLimits

0xcb52,	// (0x0002768b) bg_cale_pane_ParamLimits

0xcb6a,	// (0x000276a3) list_cale_pane_ParamLimits

0xcb7b,	// (0x000276b4) listscroll_cale_day_pane_t1

0xcb8d,	// (0x000276c6) scroll_pane_cp09_ParamLimits

0x6b0f,	// (0x00021648) main_mup_eq_pane_t1_ParamLimits

0x6b0f,	// (0x00021648) main_mup_eq_pane_t1

0x6b29,	// (0x00021662) main_mup_eq_pane_t2_ParamLimits

0x6b29,	// (0x00021662) main_mup_eq_pane_t2

0x6b43,	// (0x0002167c) main_mup_eq_pane_t3_ParamLimits

0x6b43,	// (0x0002167c) main_mup_eq_pane_t3

0x6b5b,	// (0x00021694) main_mup_eq_pane_t4_ParamLimits

0x6b5b,	// (0x00021694) main_mup_eq_pane_t4

0x6b73,	// (0x000216ac) main_mup_eq_pane_t5_ParamLimits

0x6b73,	// (0x000216ac) main_mup_eq_pane_t5

0x6b8b,	// (0x000216c4) main_mup_eq_pane_t6_ParamLimits

0x6b8b,	// (0x000216c4) main_mup_eq_pane_t6

0x6b9f,	// (0x000216d8) main_mup_eq_pane_t7_ParamLimits

0x6b9f,	// (0x000216d8) main_mup_eq_pane_t7

0x6bb3,	// (0x000216ec) main_mup_eq_pane_t8_ParamLimits

0x6bb3,	// (0x000216ec) main_mup_eq_pane_t8

0x6bc9,	// (0x00021702) main_mup_eq_pane_t9_ParamLimits

0x6bc9,	// (0x00021702) main_mup_eq_pane_t9

0x6be1,	// (0x0002171a) main_mup_eq_pane_t10_ParamLimits

0x6be1,	// (0x0002171a) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00029ed8) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00029ed8) main_mup_eq_pane_t

0x6c9e,	// (0x000217d7) mup_equalizer_pane_cp5_ParamLimits

0x6cb4,	// (0x000217ed) mup_equalizer_pane_cp6_ParamLimits

0x6ccc,	// (0x00021805) mup_equalizer_pane_cp7_ParamLimits

0x392d,	// (0x0001e466) main_gallery_pane

0xe58e,	// (0x000290c7) smil2_volume_pane

0xe596,	// (0x000290cf) smil_status_volume_pane_g1_ParamLimits

0xe5a9,	// (0x000290e2) smil_status_volume_pane_g2_ParamLimits

0x3efa,	// (0x0001ea33) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x0002a083) smil_status_volume_pane_g_ParamLimits

0xe4e8,	// (0x00029021) bg_popup_window_pane_cp07_ParamLimits

0xe751,	// (0x0002928a) blid_firmament_pane

0xc5a0,	// (0x000270d9) aid_size_cell_gallery_ParamLimits

0xc5a0,	// (0x000270d9) aid_size_cell_gallery

0xc5a0,	// (0x000270d9) grid_gallery_pane_ParamLimits

0xc5a0,	// (0x000270d9) grid_gallery_pane

0xd380,	// (0x00027eb9) cell_gallery_pane_ParamLimits

0xd380,	// (0x00027eb9) cell_gallery_pane

0xc29b,	// (0x00026dd4) bg_cell_gallery_focus_pane_ParamLimits

0xc29b,	// (0x00026dd4) bg_cell_gallery_focus_pane

0xc5ae,	// (0x000270e7) cell_gallery_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_gallery_pane_g1

0xc5ae,	// (0x000270e7) cell_gallery_pane_g2_ParamLimits

0xc5ae,	// (0x000270e7) cell_gallery_pane_g2

0xc5ae,	// (0x000270e7) cell_gallery_pane_g3_ParamLimits

0xc5ae,	// (0x000270e7) cell_gallery_pane_g3

0xc5bc,	// (0x000270f5) cell_gallery_pane_g4_ParamLimits

0xc5bc,	// (0x000270f5) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x0002a12f) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x0002a12f) cell_gallery_pane_g

0xe89d,	// (0x000293d6) bg_cell_gallery_focus_pane_g1

0xe8a5,	// (0x000293de) bg_cell_gallery_focus_pane_g2

0xe8ad,	// (0x000293e6) bg_cell_gallery_focus_pane_g3

0xe8b5,	// (0x000293ee) bg_cell_gallery_focus_pane_g4

0xe8bd,	// (0x000293f6) bg_cell_gallery_focus_pane_g5

0xe8c5,	// (0x000293fe) bg_cell_gallery_focus_pane_g6

0xe8cd,	// (0x00029406) bg_cell_gallery_focus_pane_g7

0xe8d5,	// (0x0002940e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x0002a138) bg_cell_gallery_focus_pane_g

0xe8dd,	// (0x00029416) aid_firma_cardinal

0xe8f1,	// (0x0002942a) blid_firmament_pane_t1

0xe908,	// (0x00029441) blid_firmament_pane_t2

0xe91f,	// (0x00029458) blid_firmament_pane_t3

0xe936,	// (0x0002946f) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x0002a149) blid_firmament_pane_t

0xe94d,	// (0x00029486) blid_sat_info_pane

0xc5ec,	// (0x00027125) blid_sat_info_pane_g1

0xc5ec,	// (0x00027125) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00029be8) blid_sat_info_pane_g

0xe95d,	// (0x00029496) blid_sat_info_pane_t1

0xe96b,	// (0x000294a4) smil2_volume_content_pane

0xe974,	// (0x000294ad) smil2_volume_pane_g1

0xc92f,	// (0x00027468) smil2_volume_content_pane_g1

0xe97c,	// (0x000294b5) smil2_volume_content_pane_g2

0xe985,	// (0x000294be) smil2_volume_content_pane_g3

0xe98e,	// (0x000294c7) smil2_volume_content_pane_g4

0xe997,	// (0x000294d0) smil2_volume_content_pane_g5

0xe9a0,	// (0x000294d9) smil2_volume_content_pane_g6

0xe9a9,	// (0x000294e2) smil2_volume_content_pane_g7

0xe9b2,	// (0x000294eb) smil2_volume_content_pane_g8

0xe9bb,	// (0x000294f4) smil2_volume_content_pane_g9

0xe9c4,	// (0x000294fd) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x0002a152) smil2_volume_content_pane_g

0x5378,	// (0x0001feb1) cale_week_day_heading_pane_t1_ParamLimits

0x5393,	// (0x0001fecc) cale_week_day_heading_pane_t2_ParamLimits

0x53ae,	// (0x0001fee7) cale_week_day_heading_pane_t3_ParamLimits

0x53c9,	// (0x0001ff02) cale_week_day_heading_pane_t4_ParamLimits

0x53e4,	// (0x0001ff1d) cale_week_day_heading_pane_t5_ParamLimits

0x53ff,	// (0x0001ff38) cale_week_day_heading_pane_t6_ParamLimits

0x541a,	// (0x0001ff53) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00029c80) cale_week_day_heading_pane_t_ParamLimits

0xc7aa,	// (0x000272e3) bg_cale_side_pane_ParamLimits

0x3b39,	// (0x0001e672) cale_week_time_pane_t1_ParamLimits

0x3b53,	// (0x0001e68c) cale_week_time_pane_t2_ParamLimits

0x3b6d,	// (0x0001e6a6) cale_week_time_pane_t3_ParamLimits

0x3b87,	// (0x0001e6c0) cale_week_time_pane_t4_ParamLimits

0x3ba1,	// (0x0001e6da) cale_week_time_pane_t5_ParamLimits

0x3bbb,	// (0x0001e6f4) cale_week_time_pane_t6_ParamLimits

0x3bd9,	// (0x0001e712) cale_week_time_pane_t7_ParamLimits

0x3bfb,	// (0x0001e734) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00029c8f) cale_week_time_pane_t_ParamLimits

0x5435,	// (0x0001ff6e) cell_cale_week_pane_g2_ParamLimits

0xc7aa,	// (0x000272e3) bg_cale_side_pane_cp01_ParamLimits

0x6567,	// (0x000210a0) cale_month_week_pane_t1_ParamLimits

0x6580,	// (0x000210b9) cale_month_week_pane_t2_ParamLimits

0x6599,	// (0x000210d2) cale_month_week_pane_t3_ParamLimits

0x65b2,	// (0x000210eb) cale_month_week_pane_t4_ParamLimits

0x65cb,	// (0x00021104) cale_month_week_pane_t5_ParamLimits

0x65ec,	// (0x00021125) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00029d5d) cale_month_week_pane_t_ParamLimits

0x3c29,	// (0x0001e762) cell_cale_month_pane_g1_ParamLimits

0x392d,	// (0x0001e466) main_cale_event_viewer_pane

0xbead,	// (0x000269e6) listscroll_cale_event_viewer_pane

0xe9cd,	// (0x00029506) list_cale_ev_pane

0xe9d5,	// (0x0002950e) scroll_pane_cp023

0xe9e1,	// (0x0002951a) field_cale_ev_pane_ParamLimits

0xe9e1,	// (0x0002951a) field_cale_ev_pane

0xe9ff,	// (0x00029538) field_cale_ev_content_pane_ParamLimits

0xe9ff,	// (0x00029538) field_cale_ev_content_pane

0xea0b,	// (0x00029544) field_cale_ev_pane_g1_ParamLimits

0xea0b,	// (0x00029544) field_cale_ev_pane_g1

0xea17,	// (0x00029550) field_cale_ev_pane_g2_ParamLimits

0xea17,	// (0x00029550) field_cale_ev_pane_g2

0xea2f,	// (0x00029568) field_cale_ev_pane_g3_ParamLimits

0xea2f,	// (0x00029568) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x0002a167) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x0002a167) field_cale_ev_pane_g

0xea47,	// (0x00029580) field_cale_ev_pane_t1_ParamLimits

0xea47,	// (0x00029580) field_cale_ev_pane_t1

0xc938,	// (0x00027471) field_cale_ev_content_pane_t1_ParamLimits

0xc938,	// (0x00027471) field_cale_ev_content_pane_t1

0xd3d1,	// (0x00027f0a) bg_button_pane_cp01

0x5109,	// (0x0001fc42) listscroll_cale_week_pane_ParamLimits

0xc755,	// (0x0002728e) popup_toolbar_window_cp01

0xc77b,	// (0x000272b4) listscroll_cale_week_pane_t1_ParamLimits

0x5109,	// (0x0001fc42) listscroll_cale_day_pane_ParamLimits

0xc755,	// (0x0002728e) popup_toolbar_window_cp02

0xcb7b,	// (0x000276b4) listscroll_cale_day_pane_t1_ParamLimits

0x5109,	// (0x0001fc42) main_cale_month_pane_ParamLimits

0x3ebd,	// (0x0001e9f6) popup_toolbar_window_cp03_ParamLimits

0x3ebd,	// (0x0001e9f6) popup_toolbar_window_cp03

0x6ff2,	// (0x00021b2b) main_image_pane_g2_ParamLimits

0x6ff2,	// (0x00021b2b) main_image_pane_g2

0x6ffe,	// (0x00021b37) main_image_pane_g3_ParamLimits

0x6ffe,	// (0x00021b37) main_image_pane_g3

0x0002,

0xf431,	// (0x00029f6a) main_image_pane_g_ParamLimits

0xf431,	// (0x00029f6a) main_image_pane_g

0xd4e4,	// (0x0002801d) main_image_pane_t1_ParamLimits

0x700a,	// (0x00021b43) main_image_pane_t2_ParamLimits

0x700a,	// (0x00021b43) main_image_pane_t2

0x701c,	// (0x00021b55) main_image_pane_t3_ParamLimits

0x701c,	// (0x00021b55) main_image_pane_t3

0x702e,	// (0x00021b67) main_image_pane_t4_ParamLimits

0x702e,	// (0x00021b67) main_image_pane_t4

0x0003,

0xf438,	// (0x00029f71) main_image_pane_t_ParamLimits

0xf438,	// (0x00029f71) main_image_pane_t

0x7040,	// (0x00021b79) popup_image_details_window_cp01

0x704a,	// (0x00021b83) popup_toobar_trans_pane_cp01_ParamLimits

0x704a,	// (0x00021b83) popup_toobar_trans_pane_cp01

0x3e0d,	// (0x0001e946) popup_image_details_window_ParamLimits

0x3e0d,	// (0x0001e946) popup_image_details_window

0x3e1b,	// (0x0001e954) popup_image_focus_window

0x391f,	// (0x0001e458) camera2_autofocus_pane_ParamLimits

0x391f,	// (0x0001e458) camera2_autofocus_pane

0xbead,	// (0x000269e6) bg_popup_sub_pane_cp06

0xea5e,	// (0x00029597) popup_image_focus_window_g1

0xea66,	// (0x0002959f) popup_image_focus_window_g2

0xea6e,	// (0x000295a7) popup_image_focus_window_g3

0xea76,	// (0x000295af) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x0002a16e) popup_image_focus_window_g

0xea7e,	// (0x000295b7) popup_image_focus_window_t1

0xea8c,	// (0x000295c5) popup_image_focus_window_t2

0xea9c,	// (0x000295d5) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x0002a177) popup_image_focus_window_t

0xc5ae,	// (0x000270e7) camera2_autofocus_pane_g1

0xc29b,	// (0x00026dd4) bg_tb_trans_pane_cp01

0xeaaa,	// (0x000295e3) popup_image_details_window_g1

0xeabd,	// (0x000295f6) popup_image_details_window_g2

0x0002,

0xf650,	// (0x0002a189) popup_image_details_window_g

0xeae6,	// (0x0002961f) popup_image_details_window_t1

0xeaf8,	// (0x00029631) popup_image_details_window_t2

0xeb11,	// (0x0002964a) popup_image_details_window_t3

0xeb25,	// (0x0002965e) popup_image_details_window_t4

0xeb40,	// (0x00029679) popup_image_details_window_t5

0x0004,

0xf657,	// (0x0002a190) popup_image_details_window_t

0xc636,	// (0x0002716f) bg_calc_paper_pane_ParamLimits

0x392d,	// (0x0001e466) grid_highlight_pane_cp013

0x3a0e,	// (0x0001e547) list_calc_pane_ParamLimits

0x3a20,	// (0x0001e559) scroll_pane_cp024

0xc64a,	// (0x00027183) bg_calc_display_pane_ParamLimits

0x3a28,	// (0x0001e561) calc_display_pane_t1_ParamLimits

0x3a3d,	// (0x0001e576) calc_display_pane_t2_ParamLimits

0x3a52,	// (0x0001e58b) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00029c00) calc_display_pane_t_ParamLimits

0x3abb,	// (0x0001e5f4) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00029c1d) cell_calc_pane_g

0x3ac4,	// (0x0001e5fd) cell_calc_pane_t1

0xc69f,	// (0x000271d8) grid_highlight_pane_cp02_ParamLimits

0xc6b5,	// (0x000271ee) toolbar_button_pane_cp01_ParamLimits

0xc6b5,	// (0x000271ee) toolbar_button_pane_cp01

0xd529,	// (0x00028062) temp_image_control_pane_ParamLimits

0xd529,	// (0x00028062) temp_image_control_pane

0x3d85,	// (0x0001e8be) main_mp3_pane

0xeb5a,	// (0x00029693) temp_image_control_pane_g1_ParamLimits

0xeb5a,	// (0x00029693) temp_image_control_pane_g1

0xeb68,	// (0x000296a1) temp_image_control_pane_g2_ParamLimits

0xeb68,	// (0x000296a1) temp_image_control_pane_g2

0xeb7a,	// (0x000296b3) temp_image_control_pane_g3_ParamLimits

0xeb7a,	// (0x000296b3) temp_image_control_pane_g3

0x77c5,	// (0x000222fe) temp_image_control_pane_g4_ParamLimits

0x77c5,	// (0x000222fe) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x0002a19b) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x0002a19b) temp_image_control_pane_g

0xeb5a,	// (0x00029693) main_mp3_pane_g1

0x77d6,	// (0x0002230f) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x0002a1a4) main_mp3_pane_g

0xebaf,	// (0x000296e8) main_mp3_pane_t1

0xc5bc,	// (0x000270f5) main_camera_pane_g8_ParamLimits

0xc5bc,	// (0x000270f5) main_camera_pane_g8

0x55d5,	// (0x0002010e) main_video_pane_g7_ParamLimits

0x55d5,	// (0x0002010e) main_video_pane_g7

0x3f2a,	// (0x0001ea63) main_camera2_pane_t7_ParamLimits

0x3f2a,	// (0x0001ea63) main_camera2_pane_t7

0xc90c,	// (0x00027445) scroll_pane_cp025_ParamLimits

0xc90c,	// (0x00027445) scroll_pane_cp025

0xc920,	// (0x00027459) scroll_pane_cp026_ParamLimits

0xc920,	// (0x00027459) scroll_pane_cp026

0xc956,	// (0x0002748f) wml_content_pane_ParamLimits

0x392d,	// (0x0001e466) main_touch_calib_pane

0x787a,	// (0x000223b3) main_touch_calib_pane_g1

0x7886,	// (0x000223bf) main_touch_calib_pane_g2

0x7892,	// (0x000223cb) main_touch_calib_pane_g3

0x789e,	// (0x000223d7) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x0002a1c2) main_touch_calib_pane_g

0x78aa,	// (0x000223e3) main_touch_calib_pane_t1

0x78c3,	// (0x000223fc) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x0002a1cb) main_touch_calib_pane_t

0xd0f0,	// (0x00027c29) mup_progress_pane_cp02

0xd125,	// (0x00027c5e) navi_pane_g1

0xd1e0,	// (0x00027d19) navi_pane_mp_t3

0x3d85,	// (0x0001e8be) main_mp3_pane_ParamLimits

0x7546,	// (0x0002207f) navi_pane_ParamLimits

0xeb5a,	// (0x00029693) main_mp3_pane_g1_ParamLimits

0x77d6,	// (0x0002230f) main_mp3_pane_g2_ParamLimits

0x77e2,	// (0x0002231b) main_mp3_pane_g3_ParamLimits

0x77e2,	// (0x0002231b) main_mp3_pane_g3

0x77ee,	// (0x00022327) main_mp3_pane_g4_ParamLimits

0x77ee,	// (0x00022327) main_mp3_pane_g4

0xc5ae,	// (0x000270e7) main_mp3_pane_g5_ParamLimits

0xc5ae,	// (0x000270e7) main_mp3_pane_g5

0xeb8a,	// (0x000296c3) main_mp3_pane_g6_ParamLimits

0xeb8a,	// (0x000296c3) main_mp3_pane_g6

0xeb97,	// (0x000296d0) main_mp3_pane_g7_ParamLimits

0xeb97,	// (0x000296d0) main_mp3_pane_g7

0xeba3,	// (0x000296dc) main_mp3_pane_g8_ParamLimits

0xeba3,	// (0x000296dc) main_mp3_pane_g8

0xf66b,	// (0x0002a1a4) main_mp3_pane_g_ParamLimits

0x77fa,	// (0x00022333) main_mp3_pane_t2

0x780a,	// (0x00022343) main_mp3_pane_t3

0xebbd,	// (0x000296f6) main_mp3_pane_t4

0xebcb,	// (0x00029704) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x0002a1b5) main_mp3_pane_t

0xebd9,	// (0x00029712) mup_progress_pane_cp01

0x36e5,	// (0x0001e21e) aid_zoom_text_secondary2

0xe9cd,	// (0x00029506) list_cale_ev2_pane

0xe9d5,	// (0x0002950e) scroll_pane_cp023_ParamLimits

0x791e,	// (0x00022457) field_cale_ev2_pane_ParamLimits

0x791e,	// (0x00022457) field_cale_ev2_pane

0x7947,	// (0x00022480) field_cale_ev2_pane_g1_ParamLimits

0x7947,	// (0x00022480) field_cale_ev2_pane_g1

0x7953,	// (0x0002248c) field_cale_ev2_pane_g2_ParamLimits

0x7953,	// (0x0002248c) field_cale_ev2_pane_g2

0x796b,	// (0x000224a4) field_cale_ev2_pane_g3_ParamLimits

0x796b,	// (0x000224a4) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x0002a1d6) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x0002a1d6) field_cale_ev2_pane_g

0x7983,	// (0x000224bc) field_cale_ev2_pane_t1_ParamLimits

0x7983,	// (0x000224bc) field_cale_ev2_pane_t1

0x799a,	// (0x000224d3) field_cale_ev2_pane_t2_ParamLimits

0x799a,	// (0x000224d3) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x0002a1df) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x0002a1df) field_cale_ev2_pane_t

0x6f06,	// (0x00021a3f) main_postcard_pane_g5_ParamLimits

0x6f06,	// (0x00021a3f) main_postcard_pane_g5

0x6f14,	// (0x00021a4d) main_postcard_pane_g6_ParamLimits

0x6f14,	// (0x00021a4d) main_postcard_pane_g6

0xc5a0,	// (0x000270d9) camera2_autofocus_pane_cp_ParamLimits

0xc5a0,	// (0x000270d9) camera2_autofocus_pane_cp

0x3d85,	// (0x0001e8be) main_mup3_pane

0x79ee,	// (0x00022527) main_mup3_pane_g1_ParamLimits

0x79ee,	// (0x00022527) main_mup3_pane_g1

0x7a0f,	// (0x00022548) main_mup3_pane_g2_ParamLimits

0x7a0f,	// (0x00022548) main_mup3_pane_g2

0x7a87,	// (0x000225c0) main_mup3_pane_g3_ParamLimits

0x7a87,	// (0x000225c0) main_mup3_pane_g3

0x7aca,	// (0x00022603) main_mup3_pane_g4_ParamLimits

0x7aca,	// (0x00022603) main_mup3_pane_g4

0x7b0d,	// (0x00022646) main_mup3_pane_g5_ParamLimits

0x7b0d,	// (0x00022646) main_mup3_pane_g5

0x7b50,	// (0x00022689) main_mup3_pane_g6_ParamLimits

0x7b50,	// (0x00022689) main_mup3_pane_g6

0xc5bc,	// (0x000270f5) main_mup3_pane_g7_ParamLimits

0xc5bc,	// (0x000270f5) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x0002a1ef) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x0002a1ef) main_mup3_pane_g

0x7bc6,	// (0x000226ff) main_mup3_pane_t1_ParamLimits

0x7bc6,	// (0x000226ff) main_mup3_pane_t1

0x7c35,	// (0x0002276e) main_mup3_pane_t2_ParamLimits

0x7c35,	// (0x0002276e) main_mup3_pane_t2

0x7cfe,	// (0x00022837) main_mup3_pane_t4_ParamLimits

0x7cfe,	// (0x00022837) main_mup3_pane_t4

0x7d4c,	// (0x00022885) main_mup3_pane_t5_ParamLimits

0x7d4c,	// (0x00022885) main_mup3_pane_t5

0x7dfc,	// (0x00022935) main_mup3_pane_t6_ParamLimits

0x7dfc,	// (0x00022935) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x0002a200) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x0002a200) main_mup3_pane_t

0x7ea8,	// (0x000229e1) mup3_progress_pane_ParamLimits

0x7ea8,	// (0x000229e1) mup3_progress_pane

0x7f26,	// (0x00022a5f) popup_mup3_control_window_ParamLimits

0x7f26,	// (0x00022a5f) popup_mup3_control_window

0xebed,	// (0x00029726) popup_mup3_text_window

0x7f3f,	// (0x00022a78) mup3_progress_pane_t1

0x7f5e,	// (0x00022a97) mup3_progress_pane_t2

0xebf5,	// (0x0002972e) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x0002a20d) mup3_progress_pane_t

0xec12,	// (0x0002974b) mup_progress_pane_cp03

0xbead,	// (0x000269e6) bg_tb_trans_pane_cp04

0x7f7d,	// (0x00022ab6) mup3_volume_pane

0x7f85,	// (0x00022abe) popup_mup3_control_window_g1

0x7f8e,	// (0x00022ac7) mup3_volume_pane_g1

0x7f97,	// (0x00022ad0) mup3_volume_pane_g2

0x7fa0,	// (0x00022ad9) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x0002a214) mup3_volume_pane_g

0xbead,	// (0x000269e6) bg_tb_trans_pane_cp03

0xec22,	// (0x0002975b) popup_mup3_text_window_g1

0xec2a,	// (0x00029763) popup_mup3_text_window_t1

0xc692,	// (0x000271cb) list_calc_item_pane_g1_ParamLimits

0xe6c7,	// (0x00029200) mup_volume_pane_cp_g1

0x78dc,	// (0x00022415) main_touch_calib_pane_t3

0x78f2,	// (0x0002242b) main_touch_calib_pane_t4

0x7908,	// (0x00022441) main_touch_calib_pane_t5

0x369d,	// (0x0001e1d6) aid_cell_size_toolbar2

0x36a5,	// (0x0001e1de) aid_popup3_width_pane

0x36e5,	// (0x0001e21e) aid_zoom_text_msg_primary

0x54e1,	// (0x0002001a) vorec_t7

0xc656,	// (0x0002718f) bg_calc_paper_pane_g1_ParamLimits

0xc662,	// (0x0002719b) bg_calc_paper_pane_g2_ParamLimits

0xc66e,	// (0x000271a7) bg_calc_paper_pane_g3_ParamLimits

0xc67a,	// (0x000271b3) bg_calc_paper_pane_g4_ParamLimits

0xc686,	// (0x000271bf) bg_calc_paper_pane_g5_ParamLimits

0x4fb2,	// (0x0001faeb) bg_calc_paper_pane_g6_ParamLimits

0x4fc3,	// (0x0001fafc) bg_calc_paper_pane_g7_ParamLimits

0x4fd4,	// (0x0001fb0d) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00029c07) bg_calc_paper_pane_g_ParamLimits

0x4fe5,	// (0x0001fb1e) calc_bg_paper_pane_g9_ParamLimits

0xc5a0,	// (0x000270d9) image_qvga_pane_ParamLimits

0xc5a0,	// (0x000270d9) image_qvga_pane

0xc533,	// (0x0002706c) bg_popup_sub_pane_cp04_ParamLimits

0xd460,	// (0x00027f99) popup_mup_playback_window_g1_ParamLimits

0xd46c,	// (0x00027fa5) popup_mup_playback_window_t1_ParamLimits

0xd481,	// (0x00027fba) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00029f65) popup_mup_playback_window_t_ParamLimits

0xc5ae,	// (0x000270e7) main_mup2_pane_g3_ParamLimits

0xc5ae,	// (0x000270e7) main_mup2_pane_g3

0x5796,	// (0x000202cf) popup_toolbar_window_cp04

0xd7f2,	// (0x0002832b) popup_call2_audio_second_window_g3_ParamLimits

0xd7f2,	// (0x0002832b) popup_call2_audio_second_window_g3

0xdc0a,	// (0x00028743) popup_call2_audio_first_window_g4_ParamLimits

0xdc0a,	// (0x00028743) popup_call2_audio_first_window_g4

0xe231,	// (0x00028d6a) popup_call2_audio_in_window_g4_ParamLimits

0xe231,	// (0x00028d6a) popup_call2_audio_in_window_g4

0x6fe5,	// (0x00021b1e) aid_area_sk_bg_cut_ParamLimits

0x6fe5,	// (0x00021b1e) aid_area_sk_bg_cut

0xd496,	// (0x00027fcf) aid_area_sk_bg_cut_2_ParamLimits

0xd496,	// (0x00027fcf) aid_area_sk_bg_cut_2

0xbead,	// (0x000269e6) aid_placing_details_win

0xbead,	// (0x000269e6) aid_placing_details_win_2

0xc5ae,	// (0x000270e7) camera2_autofocus_pane_g1_ParamLimits

0x38c5,	// (0x0001e3fe) popup_fixed_preview_cale_window_ParamLimits

0x38c5,	// (0x0001e3fe) popup_fixed_preview_cale_window

0xd25e,	// (0x00027d97) navi_slider_pane_g3

0xd267,	// (0x00027da0) navi_slider_pane_g4

0xd270,	// (0x00027da9) navi_slider_pane_g5

0xd25e,	// (0x00027d97) navi_slider_pane_g6

0x3cff,	// (0x0001e838) navi_slider_pane_g7

0xd36e,	// (0x00027ea7) mup_scale_pane_g3

0xd377,	// (0x00027eb0) mup_scale_pane_g4

0xd3b0,	// (0x00027ee9) mup_scale_pane_g5

0x6ce4,	// (0x0002181d) mup_scale_pane_g6

0x6ced,	// (0x00021826) mup_scale_pane_g7

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g3

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g4

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g5

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g6

0x0bf3,	// (0x0001b72c) cams2_slider_pane_g7

0xc5ec,	// (0x00027125) camera2_autofocus_pane_cp_g1

0xe515,	// (0x0002904e) bg_popup_preview_window_pane_cp02_ParamLimits

0xe515,	// (0x0002904e) bg_popup_preview_window_pane_cp02

0xec38,	// (0x00029771) list_fp_cale_pane_ParamLimits

0xec38,	// (0x00029771) list_fp_cale_pane

0xec44,	// (0x0002977d) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x0002977d) popup_fixed_preview_cale_window_t1

0x7fa9,	// (0x00022ae2) popup_fixed_preview_cale_window_t2_ParamLimits

0x7fa9,	// (0x00022ae2) popup_fixed_preview_cale_window_t2

0x7fbe,	// (0x00022af7) popup_fixed_preview_cale_window_t3_ParamLimits

0x7fbe,	// (0x00022af7) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x0002a21b) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x0002a21b) popup_fixed_preview_cale_window_t

0x7fd3,	// (0x00022b0c) list_single_fp_cale_pane_ParamLimits

0x7fd3,	// (0x00022b0c) list_single_fp_cale_pane

0xec62,	// (0x0002979b) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x0002979b) list_single_fp_cale_pane_g1

0xec6e,	// (0x000297a7) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x000297a7) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x0002a222) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x0002a222) list_single_fp_cale_pane_g

0xec87,	// (0x000297c0) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x000297c0) list_single_fp_cale_pane_t1

0xec99,	// (0x000297d2) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x000297d2) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x0002a229) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x0002a229) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x392d,	// (0x0001e466) main_dialer_pane

0xbead,	// (0x000269e6) aid_cell_size_keypad

0xbead,	// (0x000269e6) dialer_ne_pane

0xbead,	// (0x000269e6) grid_dialer_command_1_pane

0xbead,	// (0x000269e6) grid_dialer_command_2_pane

0xbead,	// (0x000269e6) grid_dialer_keypad_pane

0xe4e8,	// (0x00029021) bg_popup_call_pane_cp06_ParamLimits

0xe4e8,	// (0x00029021) bg_popup_call_pane_cp06

0xe4e8,	// (0x00029021) dialer_ne_clear_pane_ParamLimits

0xe4e8,	// (0x00029021) dialer_ne_clear_pane

0xc5ec,	// (0x00027125) dialer_ne_pane_g1

0xc60a,	// (0x00027143) dialer_ne_pane_t1_ParamLimits

0xc60a,	// (0x00027143) dialer_ne_pane_t1

0xedc1,	// (0x000298fa) dialer_ne_pane_t2_ParamLimits

0xedc1,	// (0x000298fa) dialer_ne_pane_t2

0x7fe6,	// (0x00022b1f) dialer_ne_pane_t3_ParamLimits

0x7fe6,	// (0x00022b1f) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x0002a22e) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x0002a22e) dialer_ne_pane_t

0x7fe6,	// (0x00022b1f) dialer_ne_pane_t3_copy1_ParamLimits

0x7fe6,	// (0x00022b1f) dialer_ne_pane_t3_copy1

0xeccc,	// (0x00029805) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x00029805) cell_dialer_keypad_pane

0xc29b,	// (0x00026dd4) cell_dialer_command_1_pane_ParamLimits

0xc29b,	// (0x00026dd4) cell_dialer_command_1_pane

0xece3,	// (0x0002981c) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x0002981c) cell_dialer_command_2_pane

0xc29b,	// (0x00026dd4) bg_button_pane_cp02_ParamLimits

0xc29b,	// (0x00026dd4) bg_button_pane_cp02

0xc5ae,	// (0x000270e7) cell_dialer_keypad_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_dialer_keypad_pane_g1

0xc29b,	// (0x00026dd4) bg_button_pane_cp03_ParamLimits

0xc29b,	// (0x00026dd4) bg_button_pane_cp03

0xc5ae,	// (0x000270e7) cell_dialer_command_1_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_dialer_command_1_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp04

0xc5ec,	// (0x00027125) cell_dialer_command_2_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp06

0xc5ec,	// (0x00027125) dialer_ne_clear_pane_g1

0xd131,	// (0x00027c6a) navi_pane_g2

0xd15f,	// (0x00027c98) navi_pane_g3

0x0002,

0xf334,	// (0x00029e6d) navi_pane_g

0xd1ee,	// (0x00027d27) navi_pane_mv_g2

0xd215,	// (0x00027d4e) navi_pane_mv_g5

0x6ac0,	// (0x000215f9) navi_pane_mv_t1

0xc64a,	// (0x00027183) main_clock2_pane

0xc5a0,	// (0x000270d9) main_clock2_list_pane_ParamLimits

0xc5a0,	// (0x000270d9) main_clock2_list_pane

0x805c,	// (0x00022b95) main_clock2_pane_t1_ParamLimits

0x805c,	// (0x00022b95) main_clock2_pane_t1

0x808a,	// (0x00022bc3) main_clock2_pane_t2_ParamLimits

0x808a,	// (0x00022bc3) main_clock2_pane_t2

0x0004,

0xf701,	// (0x0002a23a) main_clock2_pane_t_ParamLimits

0xf701,	// (0x0002a23a) main_clock2_pane_t

0x80ef,	// (0x00022c28) popup_clock_analogue_window_cp03_ParamLimits

0x80ef,	// (0x00022c28) popup_clock_analogue_window_cp03

0x810d,	// (0x00022c46) popup_clock_digital_window_cp02_ParamLimits

0x810d,	// (0x00022c46) popup_clock_digital_window_cp02

0x814d,	// (0x00022c86) main_clock2_list_single_pane_ParamLimits

0x814d,	// (0x00022c86) main_clock2_list_single_pane

0xc7fc,	// (0x00027335) list_highlight_pane_cp05

0xed2a,	// (0x00029863) main_clock2_list_single_pane_t1

0x5796,	// (0x000202cf) popup_toolbar_window_cp04_ParamLimits

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g2

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g3_ParamLimits

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g3

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g4_ParamLimits

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g4

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g5_ParamLimits

0xc5bc,	// (0x000270f5) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x0002a17e) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x0002a17e) camera2_autofocus_pane_g

0x79af,	// (0x000224e8) camera2_autofocus_pane_cp_g2

0x79b7,	// (0x000224f0) camera2_autofocus_pane_cp_g3

0x79bf,	// (0x000224f8) camera2_autofocus_pane_cp_g4

0x79c7,	// (0x00022500) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x0002a1e4) camera2_autofocus_pane_cp_g

0xbead,	// (0x000269e6) popup_dialer_spcha_window

0xbead,	// (0x000269e6) bg_popup_sub_pane_cp07

0xbead,	// (0x000269e6) list_spcha_pane

0xed38,	// (0x00029871) list_single_spcha_pane_ParamLimits

0xed38,	// (0x00029871) list_single_spcha_pane

0xbead,	// (0x000269e6) list_highlight_pane_cp06

0xcd5a,	// (0x00027893) list_single_spcha_pane_t1

0xdfdb,	// (0x00028b14) popup_call2_audio_out_window_g4_ParamLimits

0xdfdb,	// (0x00028b14) popup_call2_audio_out_window_g4

0x392d,	// (0x0001e466) main_imed2_pane

0x3e23,	// (0x0001e95c) popup_imed_adjust2_window

0x3e36,	// (0x0001e96f) popup_imed_trans_window_ParamLimits

0x3e36,	// (0x0001e96f) popup_imed_trans_window

0xe79c,	// (0x000292d5) popup_blid_sat_info2_window_t1

0xe7aa,	// (0x000292e3) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x0002a113) popup_blid_sat_info2_window_t

0x815f,	// (0x00022c98) aid_size_cell_colour_35

0x8179,	// (0x00022cb2) aid_size_cell_colour_112

0x8190,	// (0x00022cc9) aid_size_cell_effect

0xc29b,	// (0x00026dd4) bg_tb_trans_pane_cp02

0xcee1,	// (0x00027a1a) heading_imed_pane

0x81aa,	// (0x00022ce3) listscroll_imed_pane

0xed4a,	// (0x00029883) heading_imed_pane_g1

0xed52,	// (0x0002988b) heading_imed_pane_t1

0xed60,	// (0x00029899) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x00029899) grid_imed_colour_35_pane

0x81b6,	// (0x00022cef) grid_imed_effect_pane

0xed77,	// (0x000298b0) list_imed_aspect_pane

0x81c6,	// (0x00022cff) scroll_pane_cp027_ParamLimits

0x81c6,	// (0x00022cff) scroll_pane_cp027

0x81d2,	// (0x00022d0b) cell_imed_effect_pane_ParamLimits

0x81d2,	// (0x00022d0b) cell_imed_effect_pane

0xed7f,	// (0x000298b8) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x000298b8) cell_imed_colour_pane

0xedde,	// (0x00029917) cell_imed_colour_pane_g1_ParamLimits

0xedde,	// (0x00029917) cell_imed_colour_pane_g1

0xedef,	// (0x00029928) hgihlgiht_grid_pane_cp016_ParamLimits

0xedef,	// (0x00029928) hgihlgiht_grid_pane_cp016

0x81ea,	// (0x00022d23) cell_imed_effect_pane_g1

0x81f2,	// (0x00022d2b) grid_highlight_pane_cp017

0xee00,	// (0x00029939) list_imed_single_pane_ParamLimits

0xee00,	// (0x00029939) list_imed_single_pane

0xbead,	// (0x000269e6) list_highlight_pane_cp07

0xee15,	// (0x0002994e) list_imed_aspect_pane_comp1_t1

0xd380,	// (0x00027eb9) bg_tb_trans_pane_cp05

0xee37,	// (0x00029970) popup_imed_adjust2_window_g1

0xee5e,	// (0x00029997) popup_imed_adjust2_window_t1

0xee76,	// (0x000299af) slider_imed_adjust_pane

0xee8a,	// (0x000299c3) slider_imed_adjust_pane_g1

0xee9a,	// (0x000299d3) slider_imed_adjust_pane_g2

0xeeaa,	// (0x000299e3) slider_imed_adjust_pane_g3

0xeebb,	// (0x000299f4) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x0002a257) slider_imed_adjust_pane_g

0x81fb,	// (0x00022d34) aid_size_cell_clipart2

0x8207,	// (0x00022d40) grid_imed_clipart_pane

0xd3c1,	// (0x00027efa) scroll_pane_cp031

0x8211,	// (0x00022d4a) cell_imed_clipart_pane_ParamLimits

0x8211,	// (0x00022d4a) cell_imed_clipart_pane

0x8233,	// (0x00022d6c) cell_imed_clipart_pane_g1

0xbead,	// (0x000269e6) grid_highlight_pane_cp014

0x803e,	// (0x00022b77) main_clock2_pane_g1_ParamLimits

0x803e,	// (0x00022b77) main_clock2_pane_g1

0x8129,	// (0x00022c62) aid_call2_pane_cp10

0x813b,	// (0x00022c74) aid_call_pane_cp10

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g1

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g2

0x3fae,	// (0x0001eae7) popup_clock_analogue_window_cp10_g3

0x3fae,	// (0x0001eae7) popup_clock_analogue_window_cp10_g4

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x0002a245) popup_clock_analogue_window_cp10_g

0x3fc4,	// (0x0001eafd) popup_clock_analogue_window_cp10_t1

0x3fe3,	// (0x0001eb1c) clock_digital_number_pane_cp10_ParamLimits

0x3fe3,	// (0x0001eb1c) clock_digital_number_pane_cp10

0x3ffd,	// (0x0001eb36) clock_digital_number_pane_cp11_ParamLimits

0x3ffd,	// (0x0001eb36) clock_digital_number_pane_cp11

0x4017,	// (0x0001eb50) clock_digital_number_pane_cp12_ParamLimits

0x4017,	// (0x0001eb50) clock_digital_number_pane_cp12

0x4031,	// (0x0001eb6a) clock_digital_number_pane_cp13_ParamLimits

0x4031,	// (0x0001eb6a) clock_digital_number_pane_cp13

0x404b,	// (0x0001eb84) clock_digital_separator_pane_cp10_ParamLimits

0x404b,	// (0x0001eb84) clock_digital_separator_pane_cp10

0x4065,	// (0x0001eb9e) popup_clock_digital_window_cp02_t1_ParamLimits

0x4065,	// (0x0001eb9e) popup_clock_digital_window_cp02_t1

0xc52b,	// (0x00027064) clock_digital_number_pane_cp10_g1

0xc52b,	// (0x00027064) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x0002a260) clock_digital_number_pane_cp10_g

0xc52b,	// (0x00027064) clock_digital_separator_pane_cp10_g1

0xc52b,	// (0x00027064) clock_digital_separator_pane_g2_cp10

0xd21d,	// (0x00027d56) navi_pane_vded_g4

0xd226,	// (0x00027d5f) navi_pane_vded_g5

0xd22f,	// (0x00027d68) navi_pane_vded_t1

0x392d,	// (0x0001e466) main_vded_pane

0x823c,	// (0x00022d75) main_vded_pane_g1

0x8248,	// (0x00022d81) main_vded_pane_g2

0x8252,	// (0x00022d8b) main_vded_pane_g3

0x0002,

0xf72c,	// (0x0002a265) main_vded_pane_g

0x825c,	// (0x00022d95) main_vded_pane_t1

0x826a,	// (0x00022da3) main_vded_pane_t2

0x0001,

0xf733,	// (0x0002a26c) main_vded_pane_t

0x8278,	// (0x00022db1) vded_slider_pane

0x8282,	// (0x00022dbb) vded_video_pane

0xeecc,	// (0x00029a05) vded_video_pane_g1

0x828c,	// (0x00022dc5) vded_video_pane_g2

0xc5ec,	// (0x00027125) vded_video_pane_g3

0x0002,

0xf738,	// (0x0002a271) vded_video_pane_g

0xeed6,	// (0x00029a0f) vded_slider_pane_g1

0xe6c7,	// (0x00029200) vded_slider_pane_g2

0xeedf,	// (0x00029a18) vded_slider_pane_g3

0xeee8,	// (0x00029a21) vded_slider_pane_g4

0xeef1,	// (0x00029a2a) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x0002a278) vded_slider_pane_g

0x7f18,	// (0x00022a51) mup3_rocker_pane_ParamLimits

0x7f18,	// (0x00022a51) mup3_rocker_pane

0x8295,	// (0x00022dce) mup3_control_keys_pane_g1

0x829d,	// (0x00022dd6) mup3_control_keys_pane_g2

0x82a5,	// (0x00022dde) mup3_control_keys_pane_g3

0x82ad,	// (0x00022de6) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x0002a283) mup3_control_keys_pane_g

0x38ed,	// (0x0001e426) popup_toolbar2_fixed_window_cp01_ParamLimits

0x38ed,	// (0x0001e426) popup_toolbar2_fixed_window_cp01

0x7f32,	// (0x00022a6b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7f32,	// (0x00022a6b) popup_toolbar2_fixed_window_cp02

0xd964,	// (0x0002849d) popup_call2_audio_second_window_t4_ParamLimits

0xd964,	// (0x0002849d) popup_call2_audio_second_window_t4

0xdea0,	// (0x000289d9) popup_call2_audio_first_window_t6_ParamLimits

0xdea0,	// (0x000289d9) popup_call2_audio_first_window_t6

0xe0de,	// (0x00028c17) popup_call2_audio_out_window_t6_ParamLimits

0xe0de,	// (0x00028c17) popup_call2_audio_out_window_t6

0x392d,	// (0x0001e466) main_vitu_pane

0xc5a0,	// (0x000270d9) aid_size_cell_itu_ParamLimits

0xc5a0,	// (0x000270d9) aid_size_cell_itu

0xc5a0,	// (0x000270d9) bg_popup_window_pane_cp08_ParamLimits

0xc5a0,	// (0x000270d9) bg_popup_window_pane_cp08

0xc5a0,	// (0x000270d9) field_vitu_entry_pane_ParamLimits

0xc5a0,	// (0x000270d9) field_vitu_entry_pane

0xc5a0,	// (0x000270d9) grid_vitu_function_pane_ParamLimits

0xc5a0,	// (0x000270d9) grid_vitu_function_pane

0xc5a0,	// (0x000270d9) grid_vitu_itu_pane_ParamLimits

0xc5a0,	// (0x000270d9) grid_vitu_itu_pane

0xc5a0,	// (0x000270d9) cell_vitu_itu_pane_ParamLimits

0xc5a0,	// (0x000270d9) cell_vitu_itu_pane

0xc5a0,	// (0x000270d9) cell_vitu_function_pane_ParamLimits

0xc5a0,	// (0x000270d9) cell_vitu_function_pane

0xc29b,	// (0x00026dd4) bg_popup_sub_pane_cp08_ParamLimits

0xc29b,	// (0x00026dd4) bg_popup_sub_pane_cp08

0xc5f6,	// (0x0002712f) field_vitu_entry_pane_t1_ParamLimits

0xc5f6,	// (0x0002712f) field_vitu_entry_pane_t1

0xedc1,	// (0x000298fa) field_vitu_entry_pane_t2_ParamLimits

0xedc1,	// (0x000298fa) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x0002a28c) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x0002a28c) field_vitu_entry_pane_t

0xe4e8,	// (0x00029021) bg_button_pane_cp05_ParamLimits

0xe4e8,	// (0x00029021) bg_button_pane_cp05

0xeefa,	// (0x00029a33) cell_vitu_itu_pane_g1

0xd38e,	// (0x00027ec7) cell_vitu_itu_pane_t1_ParamLimits

0xd38e,	// (0x00027ec7) cell_vitu_itu_pane_t1

0xd38e,	// (0x00027ec7) cell_vitu_itu_pane_t2_ParamLimits

0xd38e,	// (0x00027ec7) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x0002a291) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x0002a291) cell_vitu_itu_pane_t

0xbead,	// (0x000269e6) bg_button_pane_cp07

0xc5ec,	// (0x00027125) cell_vitu_function_pane_g1

0x3a06,	// (0x0001e53f) main_calc_pane_g1

0x36d9,	// (0x0001e212) aid_visual_content_pane

0x392d,	// (0x0001e466) main_vradio_pane

0xc5bc,	// (0x000270f5) main_vradio_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) main_vradio_pane_g1

0xc5bc,	// (0x000270f5) main_vradio_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x0002a028) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x0002a028) main_vradio_pane_g

0xc60a,	// (0x00027143) main_vradio_pane_t1_ParamLimits

0xc60a,	// (0x00027143) main_vradio_pane_t1

0xc60a,	// (0x00027143) main_vradio_pane_t2_ParamLimits

0xc60a,	// (0x00027143) main_vradio_pane_t2

0xc60a,	// (0x00027143) main_vradio_pane_t3_ParamLimits

0xc60a,	// (0x00027143) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x0002a298) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x0002a298) main_vradio_pane_t

0xc5a0,	// (0x000270d9) vradio_rocker_control_pane_ParamLimits

0xc5a0,	// (0x000270d9) vradio_rocker_control_pane

0xc5a0,	// (0x000270d9) vradio_station_info_pane_ParamLimits

0xc5a0,	// (0x000270d9) vradio_station_info_pane

0xc29b,	// (0x00026dd4) vradio_frequency_info_pane_ParamLimits

0xc29b,	// (0x00026dd4) vradio_frequency_info_pane

0xc5ec,	// (0x00027125) vradio_station_info_pane_g1

0xd38e,	// (0x00027ec7) vradio_station_info_pane_t1_ParamLimits

0xd38e,	// (0x00027ec7) vradio_station_info_pane_t1

0xc60a,	// (0x00027143) vradio_station_info_pane_t2_ParamLimits

0xc60a,	// (0x00027143) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x0002a29f) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x0002a29f) vradio_station_info_pane_t

0xbead,	// (0x000269e6) vradio_tuning_pane

0x82bd,	// (0x00022df6) vradio_rocker_control_pane_g1

0xef16,	// (0x00029a4f) vradio_rocker_control_pane_g2

0x82c5,	// (0x00022dfe) vradio_rocker_control_pane_g3

0x82cd,	// (0x00022e06) vradio_rocker_control_pane_g4

0x82d5,	// (0x00022e0e) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x0002a2a4) vradio_rocker_control_pane_g

0xc5ec,	// (0x00027125) vradio_frequency_info_pane_g1

0xc5f6,	// (0x0002712f) vradio_frequency_info_pane_t1_ParamLimits

0xc5f6,	// (0x0002712f) vradio_frequency_info_pane_t1

0x82dd,	// (0x00022e16) vradio_tuning_pane_g1

0x82ea,	// (0x00022e23) vradio_tuning_pane_t1

0x36f5,	// (0x0001e22e) area_side_right_pane_ParamLimits

0x36f5,	// (0x0001e22e) area_side_right_pane

0xe4ce,	// (0x00029007) status_small_pane_g1

0xe4d6,	// (0x0002900f) status_small_pane_g2

0xe4df,	// (0x00029018) status_small_pane_g3

0xe4f6,	// (0x0002902f) status_small_pane_g4

0x0003,

0xf53c,	// (0x0002a075) status_small_pane_g

0xe4ff,	// (0x00029038) status_small_pane_t1

0x392d,	// (0x0001e466) main_video3_pane

0xbead,	// (0x000269e6) cams_zoom_vslider_pane

0xef1e,	// (0x00029a57) image3_wide_pane_ParamLimits

0xef1e,	// (0x00029a57) image3_wide_pane

0xbead,	// (0x000269e6) image3_wide_small_pane

0xef38,	// (0x00029a71) main_video3_pane_g1_ParamLimits

0xef38,	// (0x00029a71) main_video3_pane_g1

0xef38,	// (0x00029a71) main_video3_pane_g2_ParamLimits

0xef38,	// (0x00029a71) main_video3_pane_g2

0x0001,

0xf776,	// (0x0002a2af) main_video3_pane_g_ParamLimits

0xf776,	// (0x0002a2af) main_video3_pane_g

0xef56,	// (0x00029a8f) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00029a8f) main_video3_pane_t1

0xef56,	// (0x00029a8f) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00029a8f) main_video3_pane_t2

0xef56,	// (0x00029a8f) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00029a8f) main_video3_pane_t3

0x0002,

0xf77b,	// (0x0002a2b4) main_video3_pane_t_ParamLimits

0xf77b,	// (0x0002a2b4) main_video3_pane_t

0xc5ec,	// (0x00027125) cams_zoom_vslider_pane_g1

0xc5ec,	// (0x00027125) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00029be8) cams_zoom_vslider_pane_g

0xbead,	// (0x000269e6) small_slider_vertical_pane

0xc5ec,	// (0x00027125) small_slider_vertical_pane_g1

0xc5ec,	// (0x00027125) small_slider_vertical_pane_g2

0xef7d,	// (0x00029ab6) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x0002a2bb) small_slider_vertical_pane_g

0x392d,	// (0x0001e466) main_hwr_training_pane

0xef86,	// (0x00029abf) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00029abf) hwr_training_instruct_pane

0x82f9,	// (0x00022e32) hwr_training_navi_pane_ParamLimits

0x82f9,	// (0x00022e32) hwr_training_navi_pane

0x8313,	// (0x00022e4c) hwr_training_write_pane_ParamLimits

0x8313,	// (0x00022e4c) hwr_training_write_pane

0xbead,	// (0x000269e6) bg_frame_shadow_pane

0xefbd,	// (0x00029af6) hwr_training_write_pane_g1

0xefc5,	// (0x00029afe) hwr_training_write_pane_g2

0xefcd,	// (0x00029b06) hwr_training_write_pane_g3

0xefd5,	// (0x00029b0e) hwr_training_write_pane_g4

0xefdd,	// (0x00029b16) hwr_training_write_pane_g5

0xefe5,	// (0x00029b1e) hwr_training_write_pane_g6

0xefed,	// (0x00029b26) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x0002a2c2) hwr_training_write_pane_g

0x4086,	// (0x0001ebbf) hwr_training_navi_pane_g1_ParamLimits

0x4086,	// (0x0001ebbf) hwr_training_navi_pane_g1

0x4098,	// (0x0001ebd1) hwr_training_navi_pane_g2_ParamLimits

0x4098,	// (0x0001ebd1) hwr_training_navi_pane_g2

0x40aa,	// (0x0001ebe3) hwr_training_navi_pane_g3_ParamLimits

0x40aa,	// (0x0001ebe3) hwr_training_navi_pane_g3

0x40ba,	// (0x0001ebf3) hwr_training_navi_pane_g4_ParamLimits

0x40ba,	// (0x0001ebf3) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x0002a2d1) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x0002a2d1) hwr_training_navi_pane_g

0x40d4,	// (0x0001ec0d) hwr_training_navi_pane_t1

0x834b,	// (0x00022e84) list_single_hwr_training_instruct_pane_ParamLimits

0x834b,	// (0x00022e84) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00029b2e) list_single_hwr_training_instruct_pane_t1

0xe89d,	// (0x000293d6) bg_frame_shadow_pane_g1

0xf004,	// (0x00029b3d) bg_frame_shadow_pane_g2

0xf00c,	// (0x00029b45) bg_frame_shadow_pane_g3

0xf014,	// (0x00029b4d) bg_frame_shadow_pane_g4

0xf01c,	// (0x00029b55) bg_frame_shadow_pane_g5

0xf024,	// (0x00029b5d) bg_frame_shadow_pane_g6

0xf02c,	// (0x00029b65) bg_frame_shadow_pane_g7

0xc6f9,	// (0x00027232) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x0002a2dc) bg_frame_shadow_pane_g

0x392d,	// (0x0001e466) main_video_tele_dialer_pane

0x40e2,	// (0x0001ec1b) aid_size_cell_video_keypad_ParamLimits

0x40e2,	// (0x0001ec1b) aid_size_cell_video_keypad

0x40f2,	// (0x0001ec2b) grid_video_dialer_keypad_pane_ParamLimits

0x40f2,	// (0x0001ec2b) grid_video_dialer_keypad_pane

0x4126,	// (0x0001ec5f) video_down_pane_cp_ParamLimits

0x4126,	// (0x0001ec5f) video_down_pane_cp

0x4134,	// (0x0001ec6d) cell_video_dialer_keypad_pane_ParamLimits

0x4134,	// (0x0001ec6d) cell_video_dialer_keypad_pane

0xf034,	// (0x00029b6d) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00029b6d) bg_button_pane_cp08

0x838c,	// (0x00022ec5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x838c,	// (0x00022ec5) cell_video_dialer_keypad_pane_g1

0x7f0c,	// (0x00022a45) mup3_rocker2_pane_ParamLimits

0x7f0c,	// (0x00022a45) mup3_rocker2_pane

0xc5ec,	// (0x00027125) mup3_rocker2_pane_g1

0x3d93,	// (0x0001e8cc) main_dialer2_pane

0x392d,	// (0x0001e466) main_mp4_pane

0x4167,	// (0x0001eca0) main_mp4_pane_g1_ParamLimits

0x4167,	// (0x0001eca0) main_mp4_pane_g1

0x4189,	// (0x0001ecc2) main_mp4_pane_g2_ParamLimits

0x4189,	// (0x0001ecc2) main_mp4_pane_g2

0x41a7,	// (0x0001ece0) main_mp4_pane_g3_ParamLimits

0x41a7,	// (0x0001ece0) main_mp4_pane_g3

0x41e0,	// (0x0001ed19) main_mp4_pane_g4_ParamLimits

0x41e0,	// (0x0001ed19) main_mp4_pane_g4

0x4208,	// (0x0001ed41) main_mp4_pane_g5_ParamLimits

0x4208,	// (0x0001ed41) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x0002a2fc) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x0002a2fc) main_mp4_pane_g

0x4270,	// (0x0001eda9) main_mp4_pane_t1_ParamLimits

0x4270,	// (0x0001eda9) main_mp4_pane_t1

0x42d2,	// (0x0001ee0b) main_mp4_pane_t2_ParamLimits

0x42d2,	// (0x0001ee0b) main_mp4_pane_t2

0x4336,	// (0x0001ee6f) main_mp4_pane_t3_ParamLimits

0x4336,	// (0x0001ee6f) main_mp4_pane_t3

0x4394,	// (0x0001eecd) main_mp4_pane_t4_ParamLimits

0x4394,	// (0x0001eecd) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x0002a30d) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x0002a30d) main_mp4_pane_t

0x43f2,	// (0x0001ef2b) mp4_progress_pane_ParamLimits

0x43f2,	// (0x0001ef2b) mp4_progress_pane

0x4426,	// (0x0001ef5f) mp4_rocker_pane_ParamLimits

0x4426,	// (0x0001ef5f) mp4_rocker_pane

0x0186,	// (0x0001acbf) mp4_progress_pane_t1

0x01a8,	// (0x0001ace1) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x0002a316) mp4_progress_pane_t

0x01ca,	// (0x0001ad03) mup_progress_pane_cp04

0x0bf3,	// (0x0001b72c) mp4_rocker_pane_g1

0x391f,	// (0x0001e458) aid_cell_size_keypad2_ParamLimits

0x391f,	// (0x0001e458) aid_cell_size_keypad2

0x391f,	// (0x0001e458) dialer2_ne_pane_ParamLimits

0x391f,	// (0x0001e458) dialer2_ne_pane

0x391f,	// (0x0001e458) grid_dialer2_keypad_pane_ParamLimits

0x391f,	// (0x0001e458) grid_dialer2_keypad_pane

0xe653,	// (0x0002918c) bg_popup_call_pane_cp07_ParamLimits

0xe653,	// (0x0002918c) bg_popup_call_pane_cp07

0x83c3,	// (0x00022efc) dialer2_ne_pane_t1_ParamLimits

0x83c3,	// (0x00022efc) dialer2_ne_pane_t1

0x443a,	// (0x0001ef73) cell_dialer2_keypad_pane_ParamLimits

0x443a,	// (0x0001ef73) cell_dialer2_keypad_pane

0xe4e8,	// (0x00029021) bg_button_pane_pane_cp04_ParamLimits

0xe4e8,	// (0x00029021) bg_button_pane_pane_cp04

0xc5ae,	// (0x000270e7) cell_dialer2_keypad_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) cell_dialer2_keypad_pane_g1

0x5658,	// (0x00020191) aid_placing_vt_set_content_ParamLimits

0x5658,	// (0x00020191) aid_placing_vt_set_content

0x5684,	// (0x000201bd) aid_placing_vt_set_title_ParamLimits

0x5684,	// (0x000201bd) aid_placing_vt_set_title

0x392d,	// (0x0001e466) main_image3_pane

0x4483,	// (0x0001efbc) area_side_right_pane_cp01_ParamLimits

0x4483,	// (0x0001efbc) area_side_right_pane_cp01

0x44b0,	// (0x0001efe9) main_image3_pane_g1_ParamLimits

0x44b0,	// (0x0001efe9) main_image3_pane_g1

0x44be,	// (0x0001eff7) main_image3_pane_g2_ParamLimits

0x44be,	// (0x0001eff7) main_image3_pane_g2

0x44d7,	// (0x0001f010) main_image3_pane_g3_ParamLimits

0x44d7,	// (0x0001f010) main_image3_pane_g3

0x44f0,	// (0x0001f029) main_image3_pane_g4_ParamLimits

0x44f0,	// (0x0001f029) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x0002a325) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x0002a325) main_image3_pane_g

0x4509,	// (0x0001f042) main_image3_pane_t1_ParamLimits

0x4509,	// (0x0001f042) main_image3_pane_t1

0x452e,	// (0x0001f067) main_image3_pane_t2_ParamLimits

0x452e,	// (0x0001f067) main_image3_pane_t2

0x454d,	// (0x0001f086) main_image3_pane_t3_ParamLimits

0x454d,	// (0x0001f086) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x0002a32e) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x0002a32e) main_image3_pane_t

0xc5a0,	// (0x000270d9) grid_sctrl_middle_pane_cp01_ParamLimits

0xc5a0,	// (0x000270d9) grid_sctrl_middle_pane_cp01

0x83ea,	// (0x00022f23) cell_sctrl_middle_pane_cp01_ParamLimits

0x83ea,	// (0x00022f23) cell_sctrl_middle_pane_cp01

0x83fb,	// (0x00022f34) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x83fb,	// (0x00022f34) cell_sctrl_middle_pane_cp01_g1

0x392d,	// (0x0001e466) main_call4_pane

0x45ae,	// (0x0001f0e7) aid_size_button_call4_ParamLimits

0x45ae,	// (0x0001f0e7) aid_size_button_call4

0x45e4,	// (0x0001f11d) call4_windows_pane_ParamLimits

0x45e4,	// (0x0001f11d) call4_windows_pane

0x45f9,	// (0x0001f132) grid_call4_button_pane_ParamLimits

0x45f9,	// (0x0001f132) grid_call4_button_pane

0x8414,	// (0x00022f4d) call4_windows_conf_pane

0x842b,	// (0x00022f64) popup_call4_audio_first_window_ParamLimits

0x842b,	// (0x00022f64) popup_call4_audio_first_window

0x847b,	// (0x00022fb4) popup_call4_audio_second_window_ParamLimits

0x847b,	// (0x00022fb4) popup_call4_audio_second_window

0x8494,	// (0x00022fcd) popup_call4_audio_wait_window_ParamLimits

0x8494,	// (0x00022fcd) popup_call4_audio_wait_window

0x461b,	// (0x0001f154) cell_call4_button_pane_ParamLimits

0x461b,	// (0x0001f154) cell_call4_button_pane

0x84a2,	// (0x00022fdb) bg_button_pane_cp09_ParamLimits

0x84a2,	// (0x00022fdb) bg_button_pane_cp09

0x463e,	// (0x0001f177) cell_call4_button_pane_g1_ParamLimits

0x463e,	// (0x0001f177) cell_call4_button_pane_g1

0x84ae,	// (0x00022fe7) cell_call4_button_pane_t1_ParamLimits

0x84ae,	// (0x00022fe7) cell_call4_button_pane_t1

0x0277,	// (0x0001adb0) popup_call4_audio_conf_window_ParamLimits

0x0277,	// (0x0001adb0) popup_call4_audio_conf_window

0x7f3f,	// (0x00022a78) mup3_progress_pane_t1_ParamLimits

0x7f5e,	// (0x00022a97) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x0002972e) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x0002a20d) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x0002974b) mup_progress_pane_cp03_ParamLimits

0x82b5,	// (0x00022dee) mup3_control_keys_pane_g4_copy1

0x4426,	// (0x0001ef5f) mp4_rocker2_pane_ParamLimits

0x4426,	// (0x0001ef5f) mp4_rocker2_pane

0x467d,	// (0x0001f1b6) mp4_rocker2_pane_g1

0x467d,	// (0x0001f1b6) mp4_rocker2_pane_g2

0x467d,	// (0x0001f1b6) mp4_rocker2_pane_g3

0x467d,	// (0x0001f1b6) mp4_rocker2_pane_g4

0x467d,	// (0x0001f1b6) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x0002a337) mp4_rocker2_pane_g

0x392d,	// (0x0001e466) main_camera4_pane

0x392d,	// (0x0001e466) main_video4_pane

0x4102,	// (0x0001ec3b) main_video_tele_dialer_pane_t1_ParamLimits

0x4102,	// (0x0001ec3b) main_video_tele_dialer_pane_t1

0x4114,	// (0x0001ec4d) main_video_tele_dialer_pane_t2_ParamLimits

0x4114,	// (0x0001ec4d) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x0002a2ed) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x0002a2ed) main_video_tele_dialer_pane_t

0x469d,	// (0x0001f1d6) cam4_autofocus_pane_ParamLimits

0x469d,	// (0x0001f1d6) cam4_autofocus_pane

0x46b7,	// (0x0001f1f0) cam4_image_uncrop_pane_ParamLimits

0x46b7,	// (0x0001f1f0) cam4_image_uncrop_pane

0x46ce,	// (0x0001f207) cam4_indicators_pane_ParamLimits

0x46ce,	// (0x0001f207) cam4_indicators_pane

0x46ea,	// (0x0001f223) main_camera4_pane_g1_ParamLimits

0x46ea,	// (0x0001f223) main_camera4_pane_g1

0x46f6,	// (0x0001f22f) main_camera4_pane_g2_ParamLimits

0x46f6,	// (0x0001f22f) main_camera4_pane_g2

0x46f6,	// (0x0001f22f) main_camera4_pane_g3_ParamLimits

0x46f6,	// (0x0001f22f) main_camera4_pane_g3

0x4702,	// (0x0001f23b) main_camera4_pane_g4_ParamLimits

0x4702,	// (0x0001f23b) main_camera4_pane_g4

0x470e,	// (0x0001f247) main_camera4_pane_g5_ParamLimits

0x470e,	// (0x0001f247) main_camera4_pane_g5

0x0005,

0xf809,	// (0x0002a342) main_camera4_pane_g_ParamLimits

0xf809,	// (0x0002a342) main_camera4_pane_g

0x4728,	// (0x0001f261) main_camera4_pane_t1_ParamLimits

0x4728,	// (0x0001f261) main_camera4_pane_t1

0x179d,	// (0x0001c2d6) bg_tb_trans_pane_cp06

0x4754,	// (0x0001f28d) cam4_indicators_pane_g1

0x4765,	// (0x0001f29e) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x0002a35d) cam4_indicators_pane_g

0x4783,	// (0x0001f2bc) cam4_indicators_pane_t1

0x47ad,	// (0x0001f2e6) main_video4_pane_g1_ParamLimits

0x47ad,	// (0x0001f2e6) main_video4_pane_g1

0x47b9,	// (0x0001f2f2) main_video4_pane_g2_ParamLimits

0x47b9,	// (0x0001f2f2) main_video4_pane_g2

0x47c5,	// (0x0001f2fe) main_video4_pane_g3_ParamLimits

0x47c5,	// (0x0001f2fe) main_video4_pane_g3

0x47d1,	// (0x0001f30a) main_video4_pane_g4_ParamLimits

0x47d1,	// (0x0001f30a) main_video4_pane_g4

0x0004,

0xf82b,	// (0x0002a364) main_video4_pane_g_ParamLimits

0xf82b,	// (0x0002a364) main_video4_pane_g

0x47f1,	// (0x0001f32a) vid4_indicators_pane_ParamLimits

0x47f1,	// (0x0001f32a) vid4_indicators_pane

0x4810,	// (0x0001f349) video4_image_uncrop_cif_pane_ParamLimits

0x4810,	// (0x0001f349) video4_image_uncrop_cif_pane

0x481f,	// (0x0001f358) video4_image_uncrop_nhd_pane_ParamLimits

0x481f,	// (0x0001f358) video4_image_uncrop_nhd_pane

0x46b7,	// (0x0001f1f0) video4_image_uncrop_vga_pane_ParamLimits

0x46b7,	// (0x0001f1f0) video4_image_uncrop_vga_pane

0x3d85,	// (0x0001e8be) bg_tb_trans_pane_cp07

0x4836,	// (0x0001f36f) vid4_indicators_pane_g1

0x484a,	// (0x0001f383) vid4_indicators_pane_g2

0x485e,	// (0x0001f397) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x0002a36f) vid4_indicators_pane_g

0x488d,	// (0x0001f3c6) vid4_indicators_pane_t1

0x84e4,	// (0x0002301d) cam4_autofocus_pane_g1

0x84ec,	// (0x00023025) cam4_autofocus_pane_g2

0x84f4,	// (0x0002302d) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x0002a37a) cam4_autofocus_pane_g

0x84fc,	// (0x00023035) cam4_autofocus_pane_g3_copy1

0x8370,	// (0x00022ea9) video_down_pane_cp_t1

0x837e,	// (0x00022eb7) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x0002a2f2) video_down_pane_cp_t

0x391f,	// (0x0001e458) popup_vitu2_window_ParamLimits

0x391f,	// (0x0001e458) popup_vitu2_window

0x48a4,	// (0x0001f3dd) aid_size_cell2_itu2_ParamLimits

0x48a4,	// (0x0001f3dd) aid_size_cell2_itu2

0x48c6,	// (0x0001f3ff) aid_size_cell_itu2_ParamLimits

0x48c6,	// (0x0001f3ff) aid_size_cell_itu2

0x490a,	// (0x0001f443) bg_popup_window_pane_cp09_ParamLimits

0x490a,	// (0x0001f443) bg_popup_window_pane_cp09

0x4918,	// (0x0001f451) field_vitu2_entry_pane_ParamLimits

0x4918,	// (0x0001f451) field_vitu2_entry_pane

0x4938,	// (0x0001f471) grid_vitu2_function_pane_ParamLimits

0x4938,	// (0x0001f471) grid_vitu2_function_pane

0x497c,	// (0x0001f4b5) grid_vitu2_itu_pane_ParamLimits

0x497c,	// (0x0001f4b5) grid_vitu2_itu_pane

0x49f4,	// (0x0001f52d) cell_vitu2_itu_pane_ParamLimits

0x49f4,	// (0x0001f52d) cell_vitu2_itu_pane

0x4a0d,	// (0x0001f546) cell_vitu2_function_pane_ParamLimits

0x4a0d,	// (0x0001f546) cell_vitu2_function_pane

0x0380,	// (0x0001aeb9) bg_popup_call_pane_cp08_ParamLimits

0x0380,	// (0x0001aeb9) bg_popup_call_pane_cp08

0x0397,	// (0x0001aed0) field_vitu2_entry_pane_g1

0x03a3,	// (0x0001aedc) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x0002a381) field_vitu2_entry_pane_g

0x8504,	// (0x0002303d) field_vitu2_entry_pane_t1_ParamLimits

0x8504,	// (0x0002303d) field_vitu2_entry_pane_t1

0x03af,	// (0x0001aee8) field_vitu2_entry_pane_t2_ParamLimits

0x03af,	// (0x0001aee8) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x0002a388) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x0002a388) field_vitu2_entry_pane_t

0x3f1c,	// (0x0001ea55) bg_button_pane_cp010_ParamLimits

0x3f1c,	// (0x0001ea55) bg_button_pane_cp010

0x4a4e,	// (0x0001f587) cell_vitu2_itu_pane_g1

0x4a74,	// (0x0001f5ad) cell_vitu2_itu_pane_t1_ParamLimits

0x4a74,	// (0x0001f5ad) cell_vitu2_itu_pane_t1

0x4ac0,	// (0x0001f5f9) cell_vitu2_itu_pane_t2_ParamLimits

0x4ac0,	// (0x0001f5f9) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x0002a392) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x0002a392) cell_vitu2_itu_pane_t

0x3d85,	// (0x0001e8be) bg_button_pane_cp011

0x4b88,	// (0x0001f6c1) cell_vitu2_function_pane_g1

0x392d,	// (0x0001e466) main_myfav_hc_pane

0x458f,	// (0x0001f0c8) popup_image3_note_pane_ParamLimits

0x458f,	// (0x0001f0c8) popup_image3_note_pane

0x459d,	// (0x0001f0d6) popup_image3_tool_bar_pane_ParamLimits

0x459d,	// (0x0001f0d6) popup_image3_tool_bar_pane

0x4b36,	// (0x0001f66f) cell_vitu2_itu_pane_t3_ParamLimits

0x4b36,	// (0x0001f66f) cell_vitu2_itu_pane_t3

0xbead,	// (0x000269e6) bg_popup_trans_pane

0x03d4,	// (0x0001af0d) grid_image3_tool_bar_pane

0x03de,	// (0x0001af17) bg_popup_trans_pane_g1

0xca3c,	// (0x00027575) bg_popup_trans_pane_g2

0x03e6,	// (0x0001af1f) bg_popup_trans_pane_g3

0x03ee,	// (0x0001af27) bg_popup_trans_pane_g4

0x03f6,	// (0x0001af2f) bg_popup_trans_pane_g5

0x03fe,	// (0x0001af37) bg_popup_trans_pane_g6

0x0406,	// (0x0001af3f) bg_popup_trans_pane_g7

0x040e,	// (0x0001af47) bg_popup_trans_pane_g8

0xca1c,	// (0x00027555) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x0002a399) bg_popup_trans_pane_g

0x0416,	// (0x0001af4f) cell_image3_tool_bar_pane_ParamLimits

0x0416,	// (0x0001af4f) cell_image3_tool_bar_pane

0xc5ec,	// (0x00027125) cell_image3_tool_bar_pane_g1

0xbead,	// (0x000269e6) bg_popup_trans_pane_cp1

0x042a,	// (0x0001af63) popup_image3_note_pane_t1

0x0438,	// (0x0001af71) popup_image3_note_pane_t2

0x0446,	// (0x0001af7f) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x0002a3ac) popup_image3_note_pane_t

0x0454,	// (0x0001af8d) popup_image3_note_pane_t3_copy1

0x8537,	// (0x00023070) bg_myfav_hc_instruction_pane_ParamLimits

0x8537,	// (0x00023070) bg_myfav_hc_instruction_pane

0x854f,	// (0x00023088) cell_myfav_contact_pane_ParamLimits

0x854f,	// (0x00023088) cell_myfav_contact_pane

0x8569,	// (0x000230a2) cell_myfav_contact_pane_cp1_ParamLimits

0x8569,	// (0x000230a2) cell_myfav_contact_pane_cp1

0x8581,	// (0x000230ba) cell_myfav_contact_pane_cp2_ParamLimits

0x8581,	// (0x000230ba) cell_myfav_contact_pane_cp2

0x8599,	// (0x000230d2) cell_myfav_contact_pane_cp3_ParamLimits

0x8599,	// (0x000230d2) cell_myfav_contact_pane_cp3

0x85b0,	// (0x000230e9) cell_myfav_contact_pane_cp4_ParamLimits

0x85b0,	// (0x000230e9) cell_myfav_contact_pane_cp4

0x85c6,	// (0x000230ff) cell_myfav_contact_pane_cp5_ParamLimits

0x85c6,	// (0x000230ff) cell_myfav_contact_pane_cp5

0x85da,	// (0x00023113) cell_myfav_contact_pane_cp6_ParamLimits

0x85da,	// (0x00023113) cell_myfav_contact_pane_cp6

0x85ee,	// (0x00023127) cell_myfav_contact_pane_cp7_ParamLimits

0x85ee,	// (0x00023127) cell_myfav_contact_pane_cp7

0x0462,	// (0x0001af9b) listscroll_gen_pane_cp05

0x8606,	// (0x0002313f) main_myfav_hc_pane_g1_ParamLimits

0x8606,	// (0x0002313f) main_myfav_hc_pane_g1

0x861c,	// (0x00023155) main_myfav_hc_pane_g2_ParamLimits

0x861c,	// (0x00023155) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x0002a3b3) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x0002a3b3) main_myfav_hc_pane_g

0x864a,	// (0x00023183) main_myfav_hc_pane_t1_ParamLimits

0x864a,	// (0x00023183) main_myfav_hc_pane_t1

0x046b,	// (0x0001afa4) main_myfav_hc_pane_t2_ParamLimits

0x046b,	// (0x0001afa4) main_myfav_hc_pane_t2

0x047d,	// (0x0001afb6) main_myfav_hc_pane_t3_ParamLimits

0x047d,	// (0x0001afb6) main_myfav_hc_pane_t3

0x8661,	// (0x0002319a) main_myfav_hc_pane_t4_ParamLimits

0x8661,	// (0x0002319a) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x0002a3ba) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x0002a3ba) main_myfav_hc_pane_t

0xc5ec,	// (0x00027125) bg_myfav_hc_instruction_pane_g1

0x048f,	// (0x0001afc8) cell_myfav_contact_pane_g1_ParamLimits

0x048f,	// (0x0001afc8) cell_myfav_contact_pane_g1

0x048f,	// (0x0001afc8) cell_myfav_contact_pane_g2_ParamLimits

0x048f,	// (0x0001afc8) cell_myfav_contact_pane_g2

0x049b,	// (0x0001afd4) cell_myfav_contact_pane_g3_ParamLimits

0x049b,	// (0x0001afd4) cell_myfav_contact_pane_g3

0xc5bc,	// (0x000270f5) cell_myfav_contact_pane_g4_ParamLimits

0xc5bc,	// (0x000270f5) cell_myfav_contact_pane_g4

0x04a8,	// (0x0001afe1) cell_myfav_contact_pane_g5_ParamLimits

0x04a8,	// (0x0001afe1) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x0002a3c5) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x0002a3c5) cell_myfav_contact_pane_g

0x8632,	// (0x0002316b) main_myfav_hc_pane_g3_ParamLimits

0x8632,	// (0x0002316b) main_myfav_hc_pane_g3

0x3829,	// (0x0001e362) popup_adpt_find_window

0x868b,	// (0x000231c4) afind_page_pane_ParamLimits

0x868b,	// (0x000231c4) afind_page_pane

0x8698,	// (0x000231d1) aid_size_cell_afind_ParamLimits

0x8698,	// (0x000231d1) aid_size_cell_afind

0x86b2,	// (0x000231eb) bg_popup_sub_pane_cp09_ParamLimits

0x86b2,	// (0x000231eb) bg_popup_sub_pane_cp09

0x86bf,	// (0x000231f8) find_pane_cp01_ParamLimits

0x86bf,	// (0x000231f8) find_pane_cp01

0x04b4,	// (0x0001afed) grid_afind_control_pane_ParamLimits

0x04b4,	// (0x0001afed) grid_afind_control_pane

0x86cc,	// (0x00023205) grid_afind_pane_ParamLimits

0x86cc,	// (0x00023205) grid_afind_pane

0x86e8,	// (0x00023221) cell_afind_pane_ParamLimits

0x86e8,	// (0x00023221) cell_afind_pane

0xc5ec,	// (0x00027125) afind_page_pane_g1

0x8730,	// (0x00023269) afind_page_pane_g2

0x8738,	// (0x00023271) afind_page_pane_g3

0x0002,

0xf897,	// (0x0002a3d0) afind_page_pane_g

0x8740,	// (0x00023279) afind_page_pane_t1

0x04da,	// (0x0001b013) cell_afind_grid_control_pane_ParamLimits

0x04da,	// (0x0001b013) cell_afind_grid_control_pane

0x04e9,	// (0x0001b022) bg_button_pane_cp69_ParamLimits

0x04e9,	// (0x0001b022) bg_button_pane_cp69

0x874e,	// (0x00023287) cell_afind_pane_g1_ParamLimits

0x874e,	// (0x00023287) cell_afind_pane_g1

0x875b,	// (0x00023294) cell_afind_pane_t1_ParamLimits

0x875b,	// (0x00023294) cell_afind_pane_t1

0x04f5,	// (0x0001b02e) bg_button_pane_cp72

0x04fd,	// (0x0001b036) cell_afind_grid_control_pane_g1

0x710c,	// (0x00021c45) aid_image_placing_area_ParamLimits

0x710c,	// (0x00021c45) aid_image_placing_area

0xc5ae,	// (0x000270e7) field_vitu_entry_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) field_vitu_entry_pane_g1

0xc5ae,	// (0x000270e7) field_vitu_entry_pane_g2_ParamLimits

0xc5ae,	// (0x000270e7) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00029cf5) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00029cf5) field_vitu_entry_pane_g

0xeefa,	// (0x00029a33) cell_vitu_itu_pane_g1_ParamLimits

0xedc1,	// (0x000298fa) cell_vitu_itu_pane_t3_ParamLimits

0xedc1,	// (0x000298fa) cell_vitu_itu_pane_t3

0x0186,	// (0x0001acbf) mp4_progress_pane_t1_ParamLimits

0x01a8,	// (0x0001ace1) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x0002a316) mp4_progress_pane_t_ParamLimits

0x01ca,	// (0x0001ad03) mup_progress_pane_cp04_ParamLimits

0x8675,	// (0x000231ae) main_myfav_hc_pane_t5_ParamLimits

0x8675,	// (0x000231ae) main_myfav_hc_pane_t5

0x36ed,	// (0x0001e226) aid_zoom_text_primary

0x3829,	// (0x0001e362) popup_adpt_find_window_ParamLimits

0x3d85,	// (0x0001e8be) main_cam_set_pane

0x46dc,	// (0x0001f215) cam4_zoom_pane_ParamLimits

0x46dc,	// (0x0001f215) cam4_zoom_pane

0x876d,	// (0x000232a6) main_cam_set_pane_g1_ParamLimits

0x876d,	// (0x000232a6) main_cam_set_pane_g1

0x877b,	// (0x000232b4) main_cam_set_pane_g2_ParamLimits

0x877b,	// (0x000232b4) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x0002a3d7) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x0002a3d7) main_cam_set_pane_g

0x8787,	// (0x000232c0) main_cam_set_pane_t1_ParamLimits

0x8787,	// (0x000232c0) main_cam_set_pane_t1

0x87a3,	// (0x000232dc) main_cset_listscroll_pane_ParamLimits

0x87a3,	// (0x000232dc) main_cset_listscroll_pane

0x87d5,	// (0x0002330e) main_cset_slider_pane_ParamLimits

0x87d5,	// (0x0002330e) main_cset_slider_pane

0x050e,	// (0x0001b047) main_cset_list_pane_ParamLimits

0x050e,	// (0x0001b047) main_cset_list_pane

0x051e,	// (0x0001b057) scroll_pane_cp028

0x87f4,	// (0x0002332d) aid_area_touch_slider

0x8810,	// (0x00023349) cset_slider_pane

0x8833,	// (0x0002336c) main_cset_slider_pane_g1

0x8848,	// (0x00023381) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x0002a3dc) main_cset_slider_pane_g

0x0557,	// (0x0001b090) main_cset_slider_pane_t1

0x890a,	// (0x00023443) main_cset_slider_pane_t2

0x8924,	// (0x0002345d) main_cset_slider_pane_t3

0x893e,	// (0x00023477) main_cset_slider_pane_t4

0x8958,	// (0x00023491) main_cset_slider_pane_t5

0x8976,	// (0x000234af) main_cset_slider_pane_t6

0x898d,	// (0x000234c6) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x0002a401) main_cset_slider_pane_t

0x8a99,	// (0x000235d2) cset_list_set_pane_ParamLimits

0x8a99,	// (0x000235d2) cset_list_set_pane

0x05f1,	// (0x0001b12a) aid_position_infowindow_above

0x05f9,	// (0x0001b132) aid_position_infowindow_below

0x0601,	// (0x0001b13a) cset_list_set_pane_g1_ParamLimits

0x0601,	// (0x0001b13a) cset_list_set_pane_g1

0x060d,	// (0x0001b146) cset_list_set_pane_g3_ParamLimits

0x060d,	// (0x0001b146) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x0002a420) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x0002a420) cset_list_set_pane_g

0x061c,	// (0x0001b155) cset_list_set_pane_t1_ParamLimits

0x061c,	// (0x0001b155) cset_list_set_pane_t1

0xc29b,	// (0x00026dd4) list_highlight_pane_cp021_ParamLimits

0xc29b,	// (0x00026dd4) list_highlight_pane_cp021

0xd36e,	// (0x00027ea7) cset_slider_pane_g1

0xd3b0,	// (0x00027ee9) cset_slider_pane_g2

0xd377,	// (0x00027eb0) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x0002a425) cset_slider_pane_g

0x4b9c,	// (0x0001f6d5) aid_area_touch_cam4_zoom

0x4ba4,	// (0x0001f6dd) cam4_zoom_cont_pane

0x4bac,	// (0x0001f6e5) cam4_zoom_pane_g1

0x4bb4,	// (0x0001f6ed) cam4_zoom_pane_g2

0x4bbc,	// (0x0001f6f5) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x0002a42c) cam4_zoom_pane_g

0x4bc4,	// (0x0001f6fd) cam4_zoom_cont_pane_g1

0x4bcd,	// (0x0001f706) cam4_zoom_cont_pane_g2

0x4bd6,	// (0x0001f70f) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x0002a433) cam4_zoom_cont_pane_g

0x45c8,	// (0x0001f101) call4_image_pane_ParamLimits

0x45c8,	// (0x0001f101) call4_image_pane

0x8414,	// (0x00022f4d) call4_windows_conf_pane_ParamLimits

0x8459,	// (0x00022f92) popup_call4_audio_in_window_ParamLimits

0x8459,	// (0x00022f92) popup_call4_audio_in_window

0xbead,	// (0x000269e6) bg_popup_call2_act_pane_cp02

0x026f,	// (0x0001ada8) call4_list_conf_pane

0xc5ec,	// (0x00027125) call4_image_pane_g1

0xc5ec,	// (0x00027125) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00029be8) call4_image_pane_g

0x066c,	// (0x0001b1a5) list_single_graphic_popup_conf4_pane_ParamLimits

0x066c,	// (0x0001b1a5) list_single_graphic_popup_conf4_pane

0xbead,	// (0x000269e6) list_highlight_pane_cp022

0x067f,	// (0x0001b1b8) list_single_graphic_popup_conf4_pane_g1

0xcf62,	// (0x00027a9b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x0002a43a) list_single_graphic_popup_conf4_pane_g

0x0687,	// (0x0001b1c0) list_single_graphic_popup_conf4_pane_t1

0x57e8,	// (0x00020321) popup_vtel_slider_window_ParamLimits

0x57e8,	// (0x00020321) popup_vtel_slider_window

0x01dd,	// (0x0001ad16) dialer2_ne_pane_t2_ParamLimits

0x01dd,	// (0x0001ad16) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x0002a31b) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x0002a31b) dialer2_ne_pane_t

0xc29b,	// (0x00026dd4) bg_popup_sub_pane_cp010_ParamLimits

0xc29b,	// (0x00026dd4) bg_popup_sub_pane_cp010

0x8aaf,	// (0x000235e8) popup_vtel_slider_window_g1_ParamLimits

0x8aaf,	// (0x000235e8) popup_vtel_slider_window_g1

0x8abb,	// (0x000235f4) popup_vtel_slider_window_g2_ParamLimits

0x8abb,	// (0x000235f4) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x0002a43f) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x0002a43f) popup_vtel_slider_window_g

0x8b03,	// (0x0002363c) vtel_slider_pane_ParamLimits

0x8b03,	// (0x0002363c) vtel_slider_pane

0x8b12,	// (0x0002364b) vtel_slider_pane_g1_ParamLimits

0x8b12,	// (0x0002364b) vtel_slider_pane_g1

0x8b1f,	// (0x00023658) vtel_slider_pane_g2_ParamLimits

0x8b1f,	// (0x00023658) vtel_slider_pane_g2

0x8b2c,	// (0x00023665) vtel_slider_pane_g3_ParamLimits

0x8b2c,	// (0x00023665) vtel_slider_pane_g3

0x8b12,	// (0x0002364b) vtel_slider_pane_g4_ParamLimits

0x8b12,	// (0x0002364b) vtel_slider_pane_g4

0x8b39,	// (0x00023672) vtel_slider_pane_g5_ParamLimits

0x8b39,	// (0x00023672) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x0002a448) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x0002a448) vtel_slider_pane_g

0x3d85,	// (0x0001e8be) main_gallery2_pane

0x48ec,	// (0x0001f425) aid_size_row_itut2_dropdow_list_ParamLimits

0x48ec,	// (0x0001f425) aid_size_row_itut2_dropdow_list

0x495a,	// (0x0001f493) grid_vitu2_function_top_pane_ParamLimits

0x495a,	// (0x0001f493) grid_vitu2_function_top_pane

0x49b4,	// (0x0001f4ed) popup_vitu2_dropdown_list_window_ParamLimits

0x49b4,	// (0x0001f4ed) popup_vitu2_dropdown_list_window

0x49d2,	// (0x0001f50b) popup_vitu2_match_list_window

0x4bdf,	// (0x0001f718) cell_vitu2_function_top_pane_ParamLimits

0x4bdf,	// (0x0001f718) cell_vitu2_function_top_pane

0x4bf9,	// (0x0001f732) cell_vitu2_function_top_pane_cp01_ParamLimits

0x4bf9,	// (0x0001f732) cell_vitu2_function_top_pane_cp01

0x4c15,	// (0x0001f74e) cell_vitu2_function_top_wide_pane_ParamLimits

0x4c15,	// (0x0001f74e) cell_vitu2_function_top_wide_pane

0x3d85,	// (0x0001e8be) bg_button_pane_cp012

0x4c33,	// (0x0001f76c) cell_vitu2_function_top_pane_g1

0x4c47,	// (0x0001f780) bg_button_pane_cp013_ParamLimits

0x4c47,	// (0x0001f780) bg_button_pane_cp013

0x8b46,	// (0x0002367f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b46,	// (0x0002367f) cell_vitu2_function_top_wide_pane_g1

0x391f,	// (0x0001e458) bg_popup_sub_pane_cp20

0x4c63,	// (0x0001f79c) list_vitu2_match_list_pane

0x03de,	// (0x0001af17) bg_popup_sub_pane_cp20_g1

0x03e6,	// (0x0001af1f) bg_popup_sub_pane_cp20_g2

0xca3c,	// (0x00027575) bg_popup_sub_pane_cp20_g3

0x03ee,	// (0x0001af27) bg_popup_sub_pane_cp20_g4

0xca1c,	// (0x00027555) bg_popup_sub_pane_cp20_g5

0x06c5,	// (0x0001b1fe) bg_popup_sub_pane_cp20_g6

0x03fe,	// (0x0001af37) bg_popup_sub_pane_cp20_g7

0x0406,	// (0x0001af3f) bg_popup_sub_pane_cp20_g8

0x040e,	// (0x0001af47) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x0002a453) bg_popup_sub_pane_cp20_g

0x4c7b,	// (0x0001f7b4) list_vitu2_match_list_item_pane_ParamLimits

0x4c7b,	// (0x0001f7b4) list_vitu2_match_list_item_pane

0x4c8d,	// (0x0001f7c6) list_vitu2_match_list_item_pane_t1

0x392d,	// (0x0001e466) bg_popup_sub_pane_cp21

0xc7fc,	// (0x00027335) grid_vitu2_dropdown_list_pane

0x4c9b,	// (0x0001f7d4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x4c9b,	// (0x0001f7d4) cell_vitu2_dropdown_list_char_pane

0x4cbd,	// (0x0001f7f6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x4cbd,	// (0x0001f7f6) cell_vitu2_dropdown_list_ctrl_pane

0x06ff,	// (0x0001b238) cell_vitu2_dropdown_list_char_pane_g1

0x06f6,	// (0x0001b22f) cell_vitu2_dropdown_list_char_pane_g2

0x06ed,	// (0x0001b226) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x0002a466) cell_vitu2_dropdown_list_char_pane_g

0x4ce5,	// (0x0001f81e) cell_vitu2_dropdown_list_char_pane_t1

0x8b5e,	// (0x00023697) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8b5e,	// (0x00023697) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8b6b,	// (0x000236a4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8b6b,	// (0x000236a4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8b78,	// (0x000236b1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8b78,	// (0x000236b1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x4cf3,	// (0x0001f82c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x4cf3,	// (0x0001f82c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x179d,	// (0x0001c2d6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x179d,	// (0x0001c2d6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x0002a46d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x0002a46d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b85,	// (0x000236be) aid_size_cell_gallery2_ParamLimits

0x8b85,	// (0x000236be) aid_size_cell_gallery2

0x8b9f,	// (0x000236d8) grid_gallery2_pane_ParamLimits

0x8b9f,	// (0x000236d8) grid_gallery2_pane

0x8bb6,	// (0x000236ef) scroll_pane_cp029_ParamLimits

0x8bb6,	// (0x000236ef) scroll_pane_cp029

0x8bc6,	// (0x000236ff) cell_gallery2_pane_ParamLimits

0x8bc6,	// (0x000236ff) cell_gallery2_pane

0x0708,	// (0x0001b241) cell_gallery2_pane_g2

0x1bca,	// (0x0001c703) cell_gallery2_pane_g3

0x0710,	// (0x0001b249) cell_gallery2_pane_g4

0x0718,	// (0x0001b251) cell_gallery2_pane_g5

0xc7fc,	// (0x00027335) grid_highlight_pane_cp10

0x49d2,	// (0x0001f50b) popup_vitu2_match_list_window_ParamLimits

0x49e4,	// (0x0001f51d) popup_vitu2_query_window_ParamLimits

0x49e4,	// (0x0001f51d) popup_vitu2_query_window

0x392d,	// (0x0001e466) bg_vitu2_candi_button_pane

0x06ff,	// (0x0001b238) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x06f6,	// (0x0001b22f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x06ed,	// (0x0001b226) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8c1b,	// (0x00023754) bg_button_pane_cp015

0x8c30,	// (0x00023769) bg_button_pane_cp016

0x8c3c,	// (0x00023775) bg_button_pane_cp017

0xd380,	// (0x00027eb9) bg_popup_sub_pane_cp22

0x0720,	// (0x0001b259) popup_vitu2_query_window_g1

0x8c7c,	// (0x000237b5) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x0002a478) popup_vitu2_query_window_g

0x8ca0,	// (0x000237d9) popup_vitu2_query_window_t1_ParamLimits

0x8ca0,	// (0x000237d9) popup_vitu2_query_window_t1

0x8cd3,	// (0x0002380c) popup_vitu2_query_window_t2_ParamLimits

0x8cd3,	// (0x0002380c) popup_vitu2_query_window_t2

0x8ce5,	// (0x0002381e) popup_vitu2_query_window_t3_ParamLimits

0x8ce5,	// (0x0002381e) popup_vitu2_query_window_t3

0x8d0d,	// (0x00023846) popup_vitu2_query_window_t4_ParamLimits

0x8d0d,	// (0x00023846) popup_vitu2_query_window_t4

0x8d21,	// (0x0002385a) popup_vitu2_query_window_t5_ParamLimits

0x8d21,	// (0x0002385a) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x0002a47f) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x0002a47f) popup_vitu2_query_window_t

0x0506,	// (0x0001b03f) main_cset_text_pane

0x87f4,	// (0x0002332d) aid_area_touch_slider_ParamLimits

0x8810,	// (0x00023349) cset_slider_pane_ParamLimits

0x8833,	// (0x0002336c) main_cset_slider_pane_g1_ParamLimits

0x8848,	// (0x00023381) main_cset_slider_pane_g2_ParamLimits

0x0527,	// (0x0001b060) main_cset_slider_pane_g3_ParamLimits

0x0527,	// (0x0001b060) main_cset_slider_pane_g3

0x885d,	// (0x00023396) main_cset_slider_pane_g4_ParamLimits

0x885d,	// (0x00023396) main_cset_slider_pane_g4

0x886c,	// (0x000233a5) main_cset_slider_pane_g5_ParamLimits

0x886c,	// (0x000233a5) main_cset_slider_pane_g5

0x887a,	// (0x000233b3) main_cset_slider_pane_g6_ParamLimits

0x887a,	// (0x000233b3) main_cset_slider_pane_g6

0xf8a3,	// (0x0002a3dc) main_cset_slider_pane_g_ParamLimits

0x0557,	// (0x0001b090) main_cset_slider_pane_t1_ParamLimits

0x890a,	// (0x00023443) main_cset_slider_pane_t2_ParamLimits

0x8924,	// (0x0002345d) main_cset_slider_pane_t3_ParamLimits

0x893e,	// (0x00023477) main_cset_slider_pane_t4_ParamLimits

0x8958,	// (0x00023491) main_cset_slider_pane_t5_ParamLimits

0x8976,	// (0x000234af) main_cset_slider_pane_t6_ParamLimits

0x898d,	// (0x000234c6) main_cset_slider_pane_t7_ParamLimits

0x89bb,	// (0x000234f4) main_cset_slider_pane_t8_ParamLimits

0x89bb,	// (0x000234f4) main_cset_slider_pane_t8

0x89e3,	// (0x0002351c) main_cset_slider_pane_t9_ParamLimits

0x89e3,	// (0x0002351c) main_cset_slider_pane_t9

0x8a0b,	// (0x00023544) main_cset_slider_pane_t10_ParamLimits

0x8a0b,	// (0x00023544) main_cset_slider_pane_t10

0x8a33,	// (0x0002356c) main_cset_slider_pane_t11_ParamLimits

0x8a33,	// (0x0002356c) main_cset_slider_pane_t11

0x8a5d,	// (0x00023596) main_cset_slider_pane_t12_ParamLimits

0x8a5d,	// (0x00023596) main_cset_slider_pane_t12

0x8a7a,	// (0x000235b3) main_cset_slider_pane_t13_ParamLimits

0x8a7a,	// (0x000235b3) main_cset_slider_pane_t13

0xf8c8,	// (0x0002a401) main_cset_slider_pane_t_ParamLimits

0xbead,	// (0x000269e6) bg_popup_sub_pane_cp011

0x072c,	// (0x0001b265) main_cset_text_pane_g1

0x0734,	// (0x0001b26d) main_cset_text_pane_t1

0x0742,	// (0x0001b27b) main_cset_text_pane_t2

0x0750,	// (0x0001b289) main_cset_text_pane_t3

0x075e,	// (0x0001b297) main_cset_text_pane_t4

0x076c,	// (0x0001b2a5) main_cset_text_pane_t5

0x077a,	// (0x0001b2b3) main_cset_text_pane_t6

0x0788,	// (0x0001b2c1) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x0002a48e) main_cset_text_pane_t

0x392d,	// (0x0001e466) main_cam4_burst_pane

0x392d,	// (0x0001e466) main_cam5_pane

0x04c8,	// (0x0001b001) bg_button_pane_cp019

0x04d1,	// (0x0001b00a) bg_button_pane_cp020

0x0533,	// (0x0001b06c) main_cset_slider_pane_g7_ParamLimits

0x0533,	// (0x0001b06c) main_cset_slider_pane_g7

0x053f,	// (0x0001b078) main_cset_slider_pane_g8_ParamLimits

0x053f,	// (0x0001b078) main_cset_slider_pane_g8

0x888e,	// (0x000233c7) main_cset_slider_pane_g9_ParamLimits

0x888e,	// (0x000233c7) main_cset_slider_pane_g9

0x889a,	// (0x000233d3) main_cset_slider_pane_g10_ParamLimits

0x889a,	// (0x000233d3) main_cset_slider_pane_g10

0x88a6,	// (0x000233df) main_cset_slider_pane_g11_ParamLimits

0x88a6,	// (0x000233df) main_cset_slider_pane_g11

0x88b2,	// (0x000233eb) main_cset_slider_pane_g12_ParamLimits

0x88b2,	// (0x000233eb) main_cset_slider_pane_g12

0x88be,	// (0x000233f7) main_cset_slider_pane_g13_ParamLimits

0x88be,	// (0x000233f7) main_cset_slider_pane_g13

0x88ca,	// (0x00023403) main_cset_slider_pane_g14_ParamLimits

0x88ca,	// (0x00023403) main_cset_slider_pane_g14

0x88d6,	// (0x0002340f) main_cset_slider_pane_g15_ParamLimits

0x88d6,	// (0x0002340f) main_cset_slider_pane_g15

0x057f,	// (0x0001b0b8) main_cset_slider_pane_t14_ParamLimits

0x057f,	// (0x0001b0b8) main_cset_slider_pane_t14

0x05b8,	// (0x0001b0f1) main_cset_slider_pane_t15_ParamLimits

0x05b8,	// (0x0001b0f1) main_cset_slider_pane_t15

0x8d8b,	// (0x000238c4) aid_cam4_burst_size_cell_ParamLimits

0x8d8b,	// (0x000238c4) aid_cam4_burst_size_cell

0x8da7,	// (0x000238e0) grid_cam4_burst_pane_ParamLimits

0x8da7,	// (0x000238e0) grid_cam4_burst_pane

0x8dd7,	// (0x00023910) linegrid_cam4_burst_pane_ParamLimits

0x8dd7,	// (0x00023910) linegrid_cam4_burst_pane

0x8df7,	// (0x00023930) scroll_pane_cp30_ParamLimits

0x8df7,	// (0x00023930) scroll_pane_cp30

0x8e03,	// (0x0002393c) cell_cam4_burst_pane_ParamLimits

0x8e03,	// (0x0002393c) cell_cam4_burst_pane

0x07a2,	// (0x0001b2db) linegrid_cam4_burst_pane_g1_ParamLimits

0x07a2,	// (0x0001b2db) linegrid_cam4_burst_pane_g1

0x8e3f,	// (0x00023978) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e3f,	// (0x00023978) linegrid_cam4_burst_pane_g2

0x07af,	// (0x0001b2e8) linegrid_cam4_burst_pane_g3_ParamLimits

0x07af,	// (0x0001b2e8) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x0002a49d) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x0002a49d) linegrid_cam4_burst_pane_g

0x8e50,	// (0x00023989) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e50,	// (0x00023989) linegrid_cam4_burst_pane_g3_copy1

0x07bc,	// (0x0001b2f5) linegrid_cam4_burst_pane_g4_ParamLimits

0x07bc,	// (0x0001b2f5) linegrid_cam4_burst_pane_g4

0x8e6a,	// (0x000239a3) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e6a,	// (0x000239a3) linegrid_cam4_burst_pane_g5

0x8e7b,	// (0x000239b4) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e7b,	// (0x000239b4) linegrid_cam4_burst_pane_g6

0x07c9,	// (0x0001b302) linegrid_cam4_burst_pane_g7_ParamLimits

0x07c9,	// (0x0001b302) linegrid_cam4_burst_pane_g7

0x8e8c,	// (0x000239c5) cell_cam4_burst_pane_g1

0x07e2,	// (0x0001b31b) main_cam5_pane_t1_ParamLimits

0x07e2,	// (0x0001b31b) main_cam5_pane_t1

0x07f4,	// (0x0001b32d) main_cam5_pane_t2_ParamLimits

0x07f4,	// (0x0001b32d) main_cam5_pane_t2

0x0806,	// (0x0001b33f) main_cam5_pane_t3_ParamLimits

0x0806,	// (0x0001b33f) main_cam5_pane_t3

0x0818,	// (0x0001b351) main_cam5_pane_t4_ParamLimits

0x0818,	// (0x0001b351) main_cam5_pane_t4

0x0830,	// (0x0001b369) main_cam5_pane_t5_ParamLimits

0x0830,	// (0x0001b369) main_cam5_pane_t5

0x0844,	// (0x0001b37d) main_cam5_pane_t6_ParamLimits

0x0844,	// (0x0001b37d) main_cam5_pane_t6

0x0858,	// (0x0001b391) main_cam5_pane_t7_ParamLimits

0x0858,	// (0x0001b391) main_cam5_pane_t7

0x086a,	// (0x0001b3a3) main_cam5_pane_t8_ParamLimits

0x086a,	// (0x0001b3a3) main_cam5_pane_t8

0x0886,	// (0x0001b3bf) main_cam5_pane_t9_ParamLimits

0x0886,	// (0x0001b3bf) main_cam5_pane_t9

0x0898,	// (0x0001b3d1) main_cam5_pane_t10_ParamLimits

0x0898,	// (0x0001b3d1) main_cam5_pane_t10

0x08aa,	// (0x0001b3e3) main_cam5_pane_t11_ParamLimits

0x08aa,	// (0x0001b3e3) main_cam5_pane_t11

0x08bc,	// (0x0001b3f5) main_cam5_pane_t12_ParamLimits

0x08bc,	// (0x0001b3f5) main_cam5_pane_t12

0x08d1,	// (0x0001b40a) main_cam5_pane_t13_ParamLimits

0x08d1,	// (0x0001b40a) main_cam5_pane_t13

0x000c,

0xf970,	// (0x0002a4a9) main_cam5_pane_t_ParamLimits

0xf970,	// (0x0002a4a9) main_cam5_pane_t

0x38de,	// (0x0001e417) popup_scut_keymap_window_ParamLimits

0x38de,	// (0x0001e417) popup_scut_keymap_window

0x8e9f,	// (0x000239d8) aid_size_cell_brow_shortcut

0xc7fc,	// (0x00027335) bg_popup_window_pane_cp010

0x8eab,	// (0x000239e4) grid_scut_pane

0x8eb7,	// (0x000239f0) cell_scut_pane_ParamLimits

0x8eb7,	// (0x000239f0) cell_scut_pane

0x8ece,	// (0x00023a07) cell_scut_pane_g1

0x08ee,	// (0x0001b427) cell_scut_pane_t1

0x08fd,	// (0x0001b436) cell_scut_pane_t2

0x8ed7,	// (0x00023a10) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0002a4c4) cell_scut_pane_t

0x7b5e,	// (0x00022697) main_mup3_pane_g8_ParamLimits

0x7b5e,	// (0x00022697) main_mup3_pane_g8

0x48fa,	// (0x0001f433) area_vitu2_query_pane_ParamLimits

0x48fa,	// (0x0001f433) area_vitu2_query_pane

0x8c48,	// (0x00023781) input_focus_pane_cp08

0x090c,	// (0x0001b445) area_vitu2_query_pane_g1

0x8ee5,	// (0x00023a1e) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x0002a4cb) area_vitu2_query_pane_g

0x8ef6,	// (0x00023a2f) area_vitu2_query_pane_t1_ParamLimits

0x8ef6,	// (0x00023a2f) area_vitu2_query_pane_t1

0x8f0a,	// (0x00023a43) area_vitu2_query_pane_t2_ParamLimits

0x8f0a,	// (0x00023a43) area_vitu2_query_pane_t2

0x8f1e,	// (0x00023a57) area_vitu2_query_pane_t3_ParamLimits

0x8f1e,	// (0x00023a57) area_vitu2_query_pane_t3

0x0918,	// (0x0001b451) area_vitu2_query_pane_t4_ParamLimits

0x0918,	// (0x0001b451) area_vitu2_query_pane_t4

0x0940,	// (0x0001b479) area_vitu2_query_pane_t5_ParamLimits

0x0940,	// (0x0001b479) area_vitu2_query_pane_t5

0x0968,	// (0x0001b4a1) area_vitu2_query_pane_t6_ParamLimits

0x0968,	// (0x0001b4a1) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x0002a4d0) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x0002a4d0) area_vitu2_query_pane_t

0x8c30,	// (0x00023769) bg_button_pane_cp018

0x8f46,	// (0x00023a7f) bg_button_pane_cp021

0x8f52,	// (0x00023a8b) bg_button_pane_cp022

0x8f75,	// (0x00023aae) input_focus_pane_cp09

0xd09e,	// (0x00027bd7) aid_size_touch_mv_arrow_left

0xd0c7,	// (0x00027c00) aid_size_touch_mv_arrow_right

0x88ee,	// (0x00023427) main_cset_slider_pane_g16_ParamLimits

0x88ee,	// (0x00023427) main_cset_slider_pane_g16

0x88fc,	// (0x00023435) main_cset_slider_pane_g17_ParamLimits

0x88fc,	// (0x00023435) main_cset_slider_pane_g17

0x8e8c,	// (0x000239c5) cell_cam4_burst_pane_g1_ParamLimits

0xbead,	// (0x000269e6) compa_mode_pane

0x8ac7,	// (0x00023600) popup_vtel_slider_window_g3_ParamLimits

0x8ac7,	// (0x00023600) popup_vtel_slider_window_g3

0x8adb,	// (0x00023614) popup_vtel_slider_window_g4_ParamLimits

0x8adb,	// (0x00023614) popup_vtel_slider_window_g4

0x8aef,	// (0x00023628) popup_vtel_slider_window_t1_ParamLimits

0x8aef,	// (0x00023628) popup_vtel_slider_window_t1

0x392d,	// (0x0001e466) main_cl_pane

0x3e23,	// (0x0001e95c) popup_imed_adjust2_window_ParamLimits

0xd380,	// (0x00027eb9) bg_tb_trans_pane_cp05_ParamLimits

0xee37,	// (0x00029970) popup_imed_adjust2_window_g1_ParamLimits

0xee46,	// (0x0002997f) popup_imed_adjust2_window_g2_ParamLimits

0xee46,	// (0x0002997f) popup_imed_adjust2_window_g2

0xee52,	// (0x0002998b) popup_imed_adjust2_window_g3_ParamLimits

0xee52,	// (0x0002998b) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x0002a250) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x0002a250) popup_imed_adjust2_window_g

0xee5e,	// (0x00029997) popup_imed_adjust2_window_t1_ParamLimits

0xee76,	// (0x000299af) slider_imed_adjust_pane_ParamLimits

0xee8a,	// (0x000299c3) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x000299d3) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x000299e3) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x000299f4) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x0002a257) slider_imed_adjust_pane_g_ParamLimits

0x4685,	// (0x0001f1be) aid_touch_area_cam4_ParamLimits

0x4685,	// (0x0001f1be) aid_touch_area_cam4

0x4695,	// (0x0001f1ce) battery_pane_cp01

0x471c,	// (0x0001f255) main_camera4_pane_g6_ParamLimits

0x471c,	// (0x0001f255) main_camera4_pane_g6

0x473a,	// (0x0001f273) main_camera4_pane_t2_ParamLimits

0x473a,	// (0x0001f273) main_camera4_pane_t2

0x0001,

0xf816,	// (0x0002a34f) main_camera4_pane_t_ParamLimits

0xf816,	// (0x0002a34f) main_camera4_pane_t

0x479d,	// (0x0001f2d6) aid_touch_area_vid4_ParamLimits

0x479d,	// (0x0001f2d6) aid_touch_area_vid4

0x47dd,	// (0x0001f316) main_video4_pane_g5_ParamLimits

0x47dd,	// (0x0001f316) main_video4_pane_g5

0x4801,	// (0x0001f33a) vid4_progress_pane_ParamLimits

0x4801,	// (0x0001f33a) vid4_progress_pane

0x054b,	// (0x0001b084) main_cset_slider_pane_g18_ParamLimits

0x054b,	// (0x0001b084) main_cset_slider_pane_g18

0x07d6,	// (0x0001b30f) cell_cam4_burst_pane_g2_ParamLimits

0x07d6,	// (0x0001b30f) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0002a4a4) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0002a4a4) cell_cam4_burst_pane_g

0x8f85,	// (0x00023abe) bg_cl_pane_ParamLimits

0x8f85,	// (0x00023abe) bg_cl_pane

0x8f91,	// (0x00023aca) cl_header_pane_ParamLimits

0x8f91,	// (0x00023aca) cl_header_pane

0x8f9d,	// (0x00023ad6) cl_listscroll_pane_ParamLimits

0x8f9d,	// (0x00023ad6) cl_listscroll_pane

0x09b4,	// (0x0001b4ed) bg_cl_pane_g1

0x09bc,	// (0x0001b4f5) bg_cl_pane_g2

0x09c4,	// (0x0001b4fd) bg_cl_pane_g3

0x09cc,	// (0x0001b505) bg_cl_pane_g4

0x09d4,	// (0x0001b50d) bg_cl_pane_g5

0x09dc,	// (0x0001b515) bg_cl_pane_g6

0x09e4,	// (0x0001b51d) bg_cl_pane_g7

0x09ec,	// (0x0001b525) bg_cl_pane_g8

0x09f4,	// (0x0001b52d) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x0002a4df) bg_cl_pane_g

0x8fa9,	// (0x00023ae2) aid_height_cl_leading_ParamLimits

0x8fa9,	// (0x00023ae2) aid_height_cl_leading

0x8fb5,	// (0x00023aee) aid_height_cl_text_ParamLimits

0x8fb5,	// (0x00023aee) aid_height_cl_text

0xc5a0,	// (0x000270d9) bg_cl_header_pane_ParamLimits

0xc5a0,	// (0x000270d9) bg_cl_header_pane

0x8fcd,	// (0x00023b06) cl_header_pane_g1_ParamLimits

0x8fcd,	// (0x00023b06) cl_header_pane_g1

0x8fda,	// (0x00023b13) cl_header_pane_t1_ParamLimits

0x8fda,	// (0x00023b13) cl_header_pane_t1

0x09fc,	// (0x0001b535) cl_list_pane

0x051e,	// (0x0001b057) hc_scroll_pane_cp01

0xca1c,	// (0x00027555) bg_cl_header_pane_g1

0x03de,	// (0x0001af17) bg_cl_header_pane_g2

0xca3c,	// (0x00027575) bg_cl_header_pane_g3

0x03ee,	// (0x0001af27) bg_cl_header_pane_g4

0x03e6,	// (0x0001af1f) bg_cl_header_pane_g5

0x06c5,	// (0x0001b1fe) bg_cl_header_pane_g6

0x0406,	// (0x0001af3f) bg_cl_header_pane_g7

0x040e,	// (0x0001af47) bg_cl_header_pane_g8

0x03fe,	// (0x0001af37) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x0002a4f2) bg_cl_header_pane_g

0x8fec,	// (0x00023b25) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8fec,	// (0x00023b25) hc_cl_list_double_graphic_heading_pane

0x8ffd,	// (0x00023b36) hc_cl_list_single_graphic_pane_ParamLimits

0x8ffd,	// (0x00023b36) hc_cl_list_single_graphic_pane

0x9016,	// (0x00023b4f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9016,	// (0x00023b4f) hc_cl_list_single_graphic_pane_g1

0x9022,	// (0x00023b5b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9022,	// (0x00023b5b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x0002a505) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x0002a505) hc_cl_list_single_graphic_pane_g

0x9036,	// (0x00023b6f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9036,	// (0x00023b6f) hc_cl_list_single_graphic_pane_t1

0x9016,	// (0x00023b4f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9016,	// (0x00023b4f) hc_cl_list_double_graphic_heading_pane_g1

0x904b,	// (0x00023b84) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x904b,	// (0x00023b84) hc_cl_list_double_graphic_heading_pane_g2

0x905f,	// (0x00023b98) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x905f,	// (0x00023b98) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x0002a50a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x0002a50a) hc_cl_list_double_graphic_heading_pane_g

0x9073,	// (0x00023bac) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9073,	// (0x00023bac) hc_cl_list_double_graphic_heading_pane_t1

0x9088,	// (0x00023bc1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9088,	// (0x00023bc1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x0002a511) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x0002a511) hc_cl_list_double_graphic_heading_pane_t

0x4d17,	// (0x0001f850) vid4_progress_pane_g1

0x4d27,	// (0x0001f860) vid4_progress_pane_g2

0x4d37,	// (0x0001f870) vid4_progress_pane_g3

0x4d49,	// (0x0001f882) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x0002a516) vid4_progress_pane_g

0x4d61,	// (0x0001f89a) vid4_progress_pane_t1

0x4d77,	// (0x0001f8b0) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x0002a521) vid4_progress_pane_t

0x4da1,	// (0x0001f8da) wait_bar_pane_cp07

0xe751,	// (0x0002928a) blid_firmament_pane_ParamLimits

0xe794,	// (0x000292cd) popup_blid_sat_info2_window_g1

0xe7b8,	// (0x000292f1) popup_blid_sat_info2_window_t3

0xe7c6,	// (0x000292ff) popup_blid_sat_info2_window_t4

0xe7d4,	// (0x0002930d) popup_blid_sat_info2_window_t5

0xe7e2,	// (0x0002931b) popup_blid_sat_info2_window_t6

0xe7f2,	// (0x0002932b) popup_blid_sat_info2_window_t7

0xe800,	// (0x00029339) popup_blid_sat_info2_window_t8

0xe80e,	// (0x00029347) popup_blid_sat_info2_window_t9

0xe81c,	// (0x00029355) popup_blid_sat_info2_window_t10

0xe8dd,	// (0x00029416) aid_firma_cardinal_ParamLimits

0xe8f1,	// (0x0002942a) blid_firmament_pane_t1_ParamLimits

0xe908,	// (0x00029441) blid_firmament_pane_t2_ParamLimits

0xe91f,	// (0x00029458) blid_firmament_pane_t3_ParamLimits

0xe936,	// (0x0002946f) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x0002a149) blid_firmament_pane_t_ParamLimits

0xe94d,	// (0x00029486) blid_sat_info_pane_ParamLimits

0x3d85,	// (0x0001e8be) main_cam_set_pane_ParamLimits

0x815f,	// (0x00022c98) aid_size_cell_colour_35_ParamLimits

0x8179,	// (0x00022cb2) aid_size_cell_colour_112_ParamLimits

0x8190,	// (0x00022cc9) aid_size_cell_effect_ParamLimits

0xc29b,	// (0x00026dd4) bg_tb_trans_pane_cp02_ParamLimits

0xcee1,	// (0x00027a1a) heading_imed_pane_ParamLimits

0x81aa,	// (0x00022ce3) listscroll_imed_pane_ParamLimits

0xdc1c,	// (0x00028755) popup_call2_audio_first_window_g5_ParamLimits

0xdc1c,	// (0x00028755) popup_call2_audio_first_window_g5

0x4451,	// (0x0001ef8a) aid_size_touch_image3_arrow_left_ParamLimits

0x4451,	// (0x0001ef8a) aid_size_touch_image3_arrow_left

0x4467,	// (0x0001efa0) aid_size_touch_image3_arrow_right_ParamLimits

0x4467,	// (0x0001efa0) aid_size_touch_image3_arrow_right

0x4d8c,	// (0x0001f8c5) vid4_progress_pane_t3

0x832b,	// (0x00022e64) main_hwr_training_symbol_option_pane_ParamLimits

0x832b,	// (0x00022e64) main_hwr_training_symbol_option_pane

0xefa8,	// (0x00029ae1) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x00029ae1) popup_hwr_training_preview_window

0x40c7,	// (0x0001ec00) hwr_training_navi_pane_g5_ParamLimits

0x40c7,	// (0x0001ec00) hwr_training_navi_pane_g5

0x03cc,	// (0x0001af05) popup_char_count_window

0x391f,	// (0x0001e458) bg_popup_sub_pane_cp20_ParamLimits

0x4c63,	// (0x0001f79c) list_vitu2_match_list_pane_ParamLimits

0x4c6f,	// (0x0001f7a8) vitu2_page_scroll_pane_ParamLimits

0x4c6f,	// (0x0001f7a8) vitu2_page_scroll_pane

0x0a91,	// (0x0001b5ca) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a91,	// (0x0001b5ca) list_single_hwr_training_symbol_option_pane

0x0aa4,	// (0x0001b5dd) list_single_hwr_training_symbol_option_pane_g1

0x0aac,	// (0x0001b5e5) list_single_hwr_training_symbol_option_pane_t1

0x0aba,	// (0x0001b5f3) bg_button_pane_cp023

0x0ac3,	// (0x0001b5fc) bg_button_pane_cp024

0x0af6,	// (0x0001b62f) vitu2_page_scroll_pane_g1

0x0afe,	// (0x0001b637) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x0002a528) vitu2_page_scroll_pane_g

0x0b06,	// (0x0001b63f) vitu2_page_scroll_pane_t1

0xe6c7,	// (0x00029200) popup_char_count_window_g1

0x0b15,	// (0x0001b64e) popup_char_count_window_g2

0x0b1e,	// (0x0001b657) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0002a52d) popup_char_count_window_g

0x0b27,	// (0x0001b660) popup_char_count_window_t1

0x392d,	// (0x0001e466) main_vded2_pane

0xee23,	// (0x0002995c) aid_size_cell_imed_line

0xee2d,	// (0x00029966) grid_imed_line_width_pane

0x486f,	// (0x0001f3a8) vid4_indicators_pane_g4

0x0b35,	// (0x0001b66e) cell_imed_line_width_pane_ParamLimits

0x0b35,	// (0x0001b66e) cell_imed_line_width_pane

0x0b49,	// (0x0001b682) cell_imed_line_width_pane_g1

0x0b52,	// (0x0001b68b) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x0002a534) cell_imed_line_width_pane_g

0x90b1,	// (0x00023bea) main_vded2_pane_g1_ParamLimits

0x90b1,	// (0x00023bea) main_vded2_pane_g1

0x90be,	// (0x00023bf7) main_vded2_pane_g2_ParamLimits

0x90be,	// (0x00023bf7) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x0002a539) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x0002a539) main_vded2_pane_g

0x90cc,	// (0x00023c05) vded2_slider_pane_ParamLimits

0x90cc,	// (0x00023c05) vded2_slider_pane

0x90d9,	// (0x00023c12) aid_size_touch_vded2_end

0x90e3,	// (0x00023c1c) aid_size_touch_vded2_playhead

0x0b5a,	// (0x0001b693) aid_size_touch_vded2_start

0x0b62,	// (0x0001b69b) vded2_slider_bg_pane

0x0b6b,	// (0x0001b6a4) vded2_slider_pane_g1

0x0b74,	// (0x0001b6ad) vded2_slider_pane_g2

0x90eb,	// (0x00023c24) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0002a53e) vded2_slider_pane_g

0x0b7c,	// (0x0001b6b5) vded2_slider_bg_pane_g1

0x0b85,	// (0x0001b6be) vded2_slider_bg_pane_g2

0x0b8e,	// (0x0001b6c7) vded2_slider_bg_pane_g3

0x0002,

0xfa0c,	// (0x0002a545) vded2_slider_bg_pane_g

0x6eaa,	// (0x000219e3) aid_postcard_touch_down_pane_ParamLimits

0x6eaa,	// (0x000219e3) aid_postcard_touch_down_pane

0x6eba,	// (0x000219f3) aid_postcard_touch_up_pane_ParamLimits

0x6eba,	// (0x000219f3) aid_postcard_touch_up_pane

0x392d,	// (0x0001e466) main_blid2_pane

0x3dae,	// (0x0001e8e7) popup_blid2_search_window

0xbead,	// (0x000269e6) blid2_gps_pane

0xbead,	// (0x000269e6) blid2_navig_pane

0xbead,	// (0x000269e6) blid2_search_pane

0xbead,	// (0x000269e6) blid2_tripm_pane

0x90f4,	// (0x00023c2d) blid2_search_pane_g1_ParamLimits

0x90f4,	// (0x00023c2d) blid2_search_pane_g1

0x9104,	// (0x00023c3d) blid2_search_pane_t1_ParamLimits

0x9104,	// (0x00023c3d) blid2_search_pane_t1

0x9116,	// (0x00023c4f) aid_size_cell_blid2_gps_ParamLimits

0x9116,	// (0x00023c4f) aid_size_cell_blid2_gps

0x9126,	// (0x00023c5f) blid2_gps_pane_g1_ParamLimits

0x9126,	// (0x00023c5f) blid2_gps_pane_g1

0x9132,	// (0x00023c6b) grid_blid2_satellite_pane_ParamLimits

0x9132,	// (0x00023c6b) grid_blid2_satellite_pane

0x9142,	// (0x00023c7b) blid2_navig_pane_g1_ParamLimits

0x9142,	// (0x00023c7b) blid2_navig_pane_g1

0x914e,	// (0x00023c87) blid2_navig_pane_t1_ParamLimits

0x914e,	// (0x00023c87) blid2_navig_pane_t1

0x9160,	// (0x00023c99) blid2_navig_pane_t2_ParamLimits

0x9160,	// (0x00023c99) blid2_navig_pane_t2

0x0001,

0xfa13,	// (0x0002a54c) blid2_navig_pane_t_ParamLimits

0xfa13,	// (0x0002a54c) blid2_navig_pane_t

0x9172,	// (0x00023cab) blid2_navig_ring_pane_ParamLimits

0x9172,	// (0x00023cab) blid2_navig_ring_pane

0x9182,	// (0x00023cbb) blid2_speed_pane_ParamLimits

0x9182,	// (0x00023cbb) blid2_speed_pane

0x918e,	// (0x00023cc7) blid2_tripm_pane_g1_ParamLimits

0x918e,	// (0x00023cc7) blid2_tripm_pane_g1

0x919e,	// (0x00023cd7) blid2_tripm_pane_g2_ParamLimits

0x919e,	// (0x00023cd7) blid2_tripm_pane_g2

0x91aa,	// (0x00023ce3) blid2_tripm_pane_g3_ParamLimits

0x91aa,	// (0x00023ce3) blid2_tripm_pane_g3

0x91b6,	// (0x00023cef) blid2_tripm_pane_g4_ParamLimits

0x91b6,	// (0x00023cef) blid2_tripm_pane_g4

0x91c2,	// (0x00023cfb) blid2_tripm_pane_g5_ParamLimits

0x91c2,	// (0x00023cfb) blid2_tripm_pane_g5

0x0005,

0xfa18,	// (0x0002a551) blid2_tripm_pane_g_ParamLimits

0xfa18,	// (0x0002a551) blid2_tripm_pane_g

0x91de,	// (0x00023d17) blid2_tripm_pane_t1_ParamLimits

0x91de,	// (0x00023d17) blid2_tripm_pane_t1

0x91f2,	// (0x00023d2b) blid2_tripm_pane_t2_ParamLimits

0x91f2,	// (0x00023d2b) blid2_tripm_pane_t2

0x9204,	// (0x00023d3d) blid2_tripm_pane_t3_ParamLimits

0x9204,	// (0x00023d3d) blid2_tripm_pane_t3

0x0003,

0xfa25,	// (0x0002a55e) blid2_tripm_pane_t_ParamLimits

0xfa25,	// (0x0002a55e) blid2_tripm_pane_t

0x9236,	// (0x00023d6f) cell_blid2_satellite_pane_ParamLimits

0x9236,	// (0x00023d6f) cell_blid2_satellite_pane

0x9250,	// (0x00023d89) cell_blid2_satellite_pane_g1

0x0b97,	// (0x0001b6d0) cell_blid2_satellite_pane_t1

0xc5ec,	// (0x00027125) blid2_speed_pane_g1

0x0ba5,	// (0x0001b6de) blid2_speed_pane_t1

0x0bb3,	// (0x0001b6ec) blid2_speed_pane_t2

0x0001,

0xfa2e,	// (0x0002a567) blid2_speed_pane_t

0xc5ec,	// (0x00027125) blid2_navig_ring_pane_g1

0x9259,	// (0x00023d92) blid2_navig_ring_pane_g2

0x9261,	// (0x00023d9a) blid2_navig_ring_pane_g3

0x9269,	// (0x00023da2) blid2_navig_ring_pane_g4

0x9271,	// (0x00023daa) blid2_navig_ring_pane_g5

0x0004,

0xfa33,	// (0x0002a56c) blid2_navig_ring_pane_g

0xbead,	// (0x000269e6) bg_popup_window_pane_cp011

0x0bc1,	// (0x0001b6fa) popup_blid2_search_window_g1

0x0bc9,	// (0x0001b702) popup_blid2_search_window_t1

0x0bd7,	// (0x0001b710) popup_blid2_search_window_t2

0x0001,

0xfa3e,	// (0x0002a577) popup_blid2_search_window_t

0xc904,	// (0x0002743d) main_browser_pane_g1

0xc64a,	// (0x00027183) main_browser_pane_ParamLimits

0x3d85,	// (0x0001e8be) bg_button_pane_cp011_ParamLimits

0x4b88,	// (0x0001f6c1) cell_vitu2_function_pane_g1_ParamLimits

0xd380,	// (0x00027eb9) bg_popup_sub_pane_cp22_ParamLimits

0x8c48,	// (0x00023781) input_focus_pane_cp08_ParamLimits

0x8c63,	// (0x0002379c) popup_vitu2_query_button_pane_ParamLimits

0x8c63,	// (0x0002379c) popup_vitu2_query_button_pane

0x8c72,	// (0x000237ab) popup_vitu2_query_input_button_pane

0x0720,	// (0x0001b259) popup_vitu2_query_window_g1_ParamLimits

0x8c7c,	// (0x000237b5) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x0002a478) popup_vitu2_query_window_g_ParamLimits

0xbead,	// (0x000269e6) bg_button_pane_cp026

0x9279,	// (0x00023db2) popup_vitu2_query_input_button_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp025

0x0be5,	// (0x0001b71e) popup_vitu2_query_button_pane_t1

0x781a,	// (0x00022353) main_mp3_pane_t6

0x782a,	// (0x00022363) popup_slider_window_cp01

0x474c,	// (0x0001f285) cam4_battery_pane

0x482c,	// (0x0001f365) cam4_battery_pane_cp02

0x4d0f,	// (0x0001f848) cam4_battery_pane_cp01

0x4d0f,	// (0x0001f848) cam4_battery_pane_cp03

0x0bf3,	// (0x0001b72c) cam4_battery_pane_g1

0xc5ec,	// (0x00027125) cam4_battery_pane_g2

0x0001,

0xfa43,	// (0x0002a57c) cam4_battery_pane_g

0xe82a,	// (0x00029363) popup_blid_sat_info2_window_t11

0xd09e,	// (0x00027bd7) aid_size_touch_mv_arrow_left_ParamLimits

0xd0c7,	// (0x00027c00) aid_size_touch_mv_arrow_right_ParamLimits

0xd125,	// (0x00027c5e) navi_pane_g1_ParamLimits

0xd131,	// (0x00027c6a) navi_pane_g2_ParamLimits

0xd15f,	// (0x00027c98) navi_pane_g3_ParamLimits

0xf334,	// (0x00029e6d) navi_pane_g_ParamLimits

0x6ac0,	// (0x000215f9) navi_pane_mv_t1_ParamLimits

0x81b6,	// (0x00022cef) grid_imed_effect_pane_ParamLimits

0x56a8,	// (0x000201e1) aid_placing_vt_slider_lsc

0xc853,	// (0x0002738c) aid_placing_vt_slider_prt

0xc29b,	// (0x00026dd4) bg_tb_trans_pane_cp01_ParamLimits

0xeaaa,	// (0x000295e3) popup_image_details_window_g1_ParamLimits

0xeabd,	// (0x000295f6) popup_image_details_window_g2_ParamLimits

0xead2,	// (0x0002960b) popup_image_details_window_g3_ParamLimits

0xead2,	// (0x0002960b) popup_image_details_window_g3

0xf650,	// (0x0002a189) popup_image_details_window_g_ParamLimits

0xeae6,	// (0x0002961f) popup_image_details_window_t1_ParamLimits

0xeaf8,	// (0x00029631) popup_image_details_window_t2_ParamLimits

0xeb11,	// (0x0002964a) popup_image_details_window_t3_ParamLimits

0xeb25,	// (0x0002965e) popup_image_details_window_t4_ParamLimits

0xeb40,	// (0x00029679) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x0002a190) popup_image_details_window_t_ParamLimits

0x8fc1,	// (0x00023afa) cl_header_name_pane_ParamLimits

0x8fc1,	// (0x00023afa) cl_header_name_pane

0x9281,	// (0x00023dba) cl_header_name_pane_t1_ParamLimits

0x9281,	// (0x00023dba) cl_header_name_pane_t1

0x9298,	// (0x00023dd1) cl_header_name_pane_t2_ParamLimits

0x9298,	// (0x00023dd1) cl_header_name_pane_t2

0x92c2,	// (0x00023dfb) cl_header_name_pane_t3_ParamLimits

0x92c2,	// (0x00023dfb) cl_header_name_pane_t3

0x0002,

0xfa48,	// (0x0002a581) cl_header_name_pane_t_ParamLimits

0xfa48,	// (0x0002a581) cl_header_name_pane_t

0xd1ee,	// (0x00027d27) navi_pane_mv_g2_ParamLimits

0x0397,	// (0x0001aed0) field_vitu2_entry_pane_g1_ParamLimits

0x03a3,	// (0x0001aedc) field_vitu2_entry_pane_g2_ParamLimits

0xd3a2,	// (0x00027edb) field_vitu2_entry_pane_g3_ParamLimits

0xd3a2,	// (0x00027edb) field_vitu2_entry_pane_g3

0xf848,	// (0x0002a381) field_vitu2_entry_pane_g_ParamLimits

0x4a4e,	// (0x0001f587) cell_vitu2_itu_pane_g1_ParamLimits

0x4a66,	// (0x0001f59f) cell_vitu2_itu_pane_g2_ParamLimits

0x4a66,	// (0x0001f59f) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x0002a38d) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x0002a38d) cell_vitu2_itu_pane_g

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp05_ParamLimits

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp05

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp03

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp04

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp10_ParamLimits

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp10

0x8f63,	// (0x00023a9c) bg_vkb2_func_pane_cp08

0x8c30,	// (0x00023769) bg_vkb2_func_pane_cp06

0x8f46,	// (0x00023a7f) bg_vkb2_func_pane_cp07

0x0acc,	// (0x0001b605) bg_vkb2_func_pane_cp11_ParamLimits

0x0acc,	// (0x0001b605) bg_vkb2_func_pane_cp11

0x0ae1,	// (0x0001b61a) bg_vkb2_func_pane_cp12_ParamLimits

0x0ae1,	// (0x0001b61a) bg_vkb2_func_pane_cp12

0xbead,	// (0x000269e6) bg_vkb2_func_pane_cp09

0x03de,	// (0x0001af17) bg_vkb2_func_pane_g1

0xca3c,	// (0x00027575) bg_vkb2_func_pane_g2

0x03e6,	// (0x0001af1f) bg_vkb2_func_pane_g3

0x03ee,	// (0x0001af27) bg_vkb2_func_pane_g4

0x06c5,	// (0x0001b1fe) bg_vkb2_func_pane_g5

0x0406,	// (0x0001af3f) bg_vkb2_func_pane_g6

0x040e,	// (0x0001af47) bg_vkb2_func_pane_g7

0x03fe,	// (0x0001af37) bg_vkb2_func_pane_g8

0xca1c,	// (0x00027555) bg_vkb2_func_pane_g9

0x0008,

0xfa4f,	// (0x0002a588) bg_vkb2_func_pane_g

0x91d0,	// (0x00023d09) blid2_tripm_pane_g6_ParamLimits

0x91d0,	// (0x00023d09) blid2_tripm_pane_g6

0x017e,	// (0x0001acb7) mp4_progress_pane_g1

0x922a,	// (0x00023d63) blid2_tripm_values_pane_ParamLimits

0x922a,	// (0x00023d63) blid2_tripm_values_pane

0x92e7,	// (0x00023e20) blid2_tripm_values_pane_t1

0x92f5,	// (0x00023e2e) blid2_tripm_values_pane_t2

0x9303,	// (0x00023e3c) blid2_tripm_values_pane_t3

0x9311,	// (0x00023e4a) blid2_tripm_values_pane_t4

0x931f,	// (0x00023e58) blid2_tripm_values_pane_t5

0x932d,	// (0x00023e66) blid2_tripm_values_pane_t6

0x933b,	// (0x00023e74) blid2_tripm_values_pane_t7

0x9349,	// (0x00023e82) blid2_tripm_values_pane_t8

0x9357,	// (0x00023e90) blid2_tripm_values_pane_t9

0x0008,

0xfa62,	// (0x0002a59b) blid2_tripm_values_pane_t

0x56e8,	// (0x00020221) call_video_pane_t1_ParamLimits

0x5709,	// (0x00020242) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00029d16) call_video_pane_t_ParamLimits

0x6dc9,	// (0x00021902) msg_header_pane_g1_ParamLimits

0xd3fa,	// (0x00027f33) msg_header_pane_g2_ParamLimits

0xd3fa,	// (0x00027f33) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00029f0b) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00029f0b) msg_header_pane_g

0xc64a,	// (0x00027183) main_clock2_pane_ParamLimits

0x8008,	// (0x00022b41) grid_clock2_toolbar_pane_ParamLimits

0x8008,	// (0x00022b41) grid_clock2_toolbar_pane

0x8008,	// (0x00022b41) listscroll_clock2_pane_ParamLimits

0x8008,	// (0x00022b41) listscroll_clock2_pane

0x80b8,	// (0x00022bf1) main_clock2_pane_t3_ParamLimits

0x80b8,	// (0x00022bf1) main_clock2_pane_t3

0x80ca,	// (0x00022c03) main_clock2_pane_t4_ParamLimits

0x80ca,	// (0x00022c03) main_clock2_pane_t4

0x0bfd,	// (0x0001b736) cell_clock2_toolbar_pane

0x0c05,	// (0x0001b73e) cell_clock2_toolbar_pane_cp01

0x0c05,	// (0x0001b73e) cell_clock2_toolbar_pane_cp02

0x0c0d,	// (0x0001b746) cell_clock2_toolbar_pane_cp03

0x0c15,	// (0x0001b74e) list_clock2_pane

0xd014,	// (0x00027b4d) scroll_pane_cp10

0x0c1d,	// (0x0001b756) list_single_clock2_pane_ParamLimits

0x0c1d,	// (0x0001b756) list_single_clock2_pane

0xc7fc,	// (0x00027335) list_highlight_pane_cp08

0x0c2a,	// (0x0001b763) list_single_clock2_pane_t1

0x0c38,	// (0x0001b771) list_single_clock2_pane_t2

0x0001,

0xfa75,	// (0x0002a5ae) list_single_clock2_pane_t

0xbead,	// (0x000269e6) bg_button_pane_cp10

0x0c46,	// (0x0001b77f) cell_clock2_toolbar_pane_g1

0x3d20,	// (0x0001e859) aid_main_viewer_pane_g1_ParamLimits

0x3d20,	// (0x0001e859) aid_main_viewer_pane_g1

0x3d2c,	// (0x0001e865) aid_main_viewer_pane_g2_ParamLimits

0x3d2c,	// (0x0001e865) aid_main_viewer_pane_g2

0x6e66,	// (0x0002199f) aid_main_viewer_pane_g3_ParamLimits

0x6e66,	// (0x0002199f) aid_main_viewer_pane_g3

0x6e77,	// (0x000219b0) aid_main_viewer_pane_g4_ParamLimits

0x6e77,	// (0x000219b0) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00029f1c) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00029f1c) aid_main_viewer_pane_g

0x3d78,	// (0x0001e8b1) main_calc_pane_ParamLimits

0x3d93,	// (0x0001e8cc) main_dialer2_pane_ParamLimits

0x392d,	// (0x0001e466) main_cam6_pane

0x392d,	// (0x0001e466) main_vid6_pane

0x8014,	// (0x00022b4d) listscroll_gen_pane_cp06_ParamLimits

0x8014,	// (0x00022b4d) listscroll_gen_pane_cp06

0x80dc,	// (0x00022c15) main_clock2_pane_t5_ParamLimits

0x80dc,	// (0x00022c15) main_clock2_pane_t5

0x8129,	// (0x00022c62) aid_call2_pane_cp10_ParamLimits

0x813b,	// (0x00022c74) aid_call_pane_cp10_ParamLimits

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x3fae,	// (0x0001eae7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x3fae,	// (0x0001eae7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd092,	// (0x00027bcb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x0002a245) popup_clock_analogue_window_cp10_g_ParamLimits

0x3fc4,	// (0x0001eafd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x01ef,	// (0x0001ad28) cell_dialer2_keypad_pane_g2_ParamLimits

0x01ef,	// (0x0001ad28) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x0002a320) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x0002a320) cell_dialer2_keypad_pane_g

0xc5f6,	// (0x0002712f) cell_dialer2_keypad_pane_t1

0x87e1,	// (0x0002331a) main_cset_text2_pane_ParamLimits

0x87e1,	// (0x0002331a) main_cset_text2_pane

0x090c,	// (0x0001b445) area_vitu2_query_pane_g1_ParamLimits

0x8ee5,	// (0x00023a1e) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x0002a4cb) area_vitu2_query_pane_g_ParamLimits

0x0990,	// (0x0001b4c9) area_vitu2_query_pane_t7_ParamLimits

0x0990,	// (0x0001b4c9) area_vitu2_query_pane_t7

0x8c30,	// (0x00023769) bg_button_pane_cp018_ParamLimits

0x8f46,	// (0x00023a7f) bg_button_pane_cp021_ParamLimits

0x8f52,	// (0x00023a8b) bg_button_pane_cp022_ParamLimits

0x8f63,	// (0x00023a9c) bg_vkb2_func_pane_cp08_ParamLimits

0x8c30,	// (0x00023769) bg_vkb2_func_pane_cp06_ParamLimits

0x8f46,	// (0x00023a7f) bg_vkb2_func_pane_cp07_ParamLimits

0x8f75,	// (0x00023aae) input_focus_pane_cp09_ParamLimits

0x4db4,	// (0x0001f8ed) cam6_autofocus_pane_ParamLimits

0x4db4,	// (0x0001f8ed) cam6_autofocus_pane

0x4dd0,	// (0x0001f909) cam6_image_uncrop_pane_ParamLimits

0x4dd0,	// (0x0001f909) cam6_image_uncrop_pane

0x4e09,	// (0x0001f942) cam6_indi_pane_ParamLimits

0x4e09,	// (0x0001f942) cam6_indi_pane

0x4e23,	// (0x0001f95c) cam6_mode_pane_ParamLimits

0x4e23,	// (0x0001f95c) cam6_mode_pane

0x4e37,	// (0x0001f970) cam6_timer_pane_ParamLimits

0x4e37,	// (0x0001f970) cam6_timer_pane

0x4e4b,	// (0x0001f984) cam6_zoom_pane_ParamLimits

0x4e4b,	// (0x0001f984) cam6_zoom_pane

0x9365,	// (0x00023e9e) cam6_mode_pane_g1_ParamLimits

0x9365,	// (0x00023e9e) cam6_mode_pane_g1

0x9371,	// (0x00023eaa) cam6_mode_pane_g2_ParamLimits

0x9371,	// (0x00023eaa) cam6_mode_pane_g2

0x937d,	// (0x00023eb6) cam6_mode_pane_g3_ParamLimits

0x937d,	// (0x00023eb6) cam6_mode_pane_g3

0x9389,	// (0x00023ec2) cam6_mode_pane_g4_ParamLimits

0x9389,	// (0x00023ec2) cam6_mode_pane_g4

0x0003,

0xfa7a,	// (0x0002a5b3) cam6_mode_pane_g_ParamLimits

0xfa7a,	// (0x0002a5b3) cam6_mode_pane_g

0xe653,	// (0x0002918c) bg_tb_trans_pane_cp08_ParamLimits

0xe653,	// (0x0002918c) bg_tb_trans_pane_cp08

0x0c5c,	// (0x0001b795) cam6_battery_pane_ParamLimits

0x0c5c,	// (0x0001b795) cam6_battery_pane

0x0c72,	// (0x0001b7ab) cam6_indi_pane_g1_ParamLimits

0x0c72,	// (0x0001b7ab) cam6_indi_pane_g1

0x0c84,	// (0x0001b7bd) cam6_indi_pane_g2_ParamLimits

0x0c84,	// (0x0001b7bd) cam6_indi_pane_g2

0x0c96,	// (0x0001b7cf) cam6_indi_pane_g3_ParamLimits

0x0c96,	// (0x0001b7cf) cam6_indi_pane_g3

0x0002,

0xfa83,	// (0x0002a5bc) cam6_indi_pane_g_ParamLimits

0xfa83,	// (0x0002a5bc) cam6_indi_pane_g

0x0ca8,	// (0x0001b7e1) cam6_indi_pane_t1_ParamLimits

0x0ca8,	// (0x0001b7e1) cam6_indi_pane_t1

0x84ec,	// (0x00023025) cam6_autofocus_pane_g1

0x84e4,	// (0x0002301d) cam6_autofocus_pane_g2

0x84fc,	// (0x00023035) cam6_autofocus_pane_g3

0x84f4,	// (0x0002302d) cam6_autofocus_pane_g4

0x0003,

0xfa8a,	// (0x0002a5c3) cam6_autofocus_pane_g

0x0cce,	// (0x0001b807) cam6_timer_pane_g1

0x0cd6,	// (0x0001b80f) cam6_timer_pane_t1

0x0ce4,	// (0x0001b81d) cam6_zoom_cont_pane

0x0cec,	// (0x0001b825) cam6_zoom_pane_g1

0x0cf5,	// (0x0001b82e) cam6_zoom_pane_g2

0x9395,	// (0x00023ece) cam6_zoom_pane_g3

0x0002,

0xfa93,	// (0x0002a5cc) cam6_zoom_pane_g

0xc5ec,	// (0x00027125) cam6_battery_pane_g1

0xc5ec,	// (0x00027125) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00029be8) cam6_battery_pane_g

0x0cec,	// (0x0001b825) cam6_zoom_cont_pane_g1

0x0cf5,	// (0x0001b82e) cam6_zoom_cont_pane_g2

0x0cfe,	// (0x0001b837) cam6_zoom_cont_pane_g3

0x0002,

0xfa9a,	// (0x0002a5d3) cam6_zoom_cont_pane_g

0x93b3,	// (0x00023eec) cam6_mode_pane_cp_ParamLimits

0x93b3,	// (0x00023eec) cam6_mode_pane_cp

0x93c7,	// (0x00023f00) cam6_zoom_pane_cp_ParamLimits

0x93c7,	// (0x00023f00) cam6_zoom_pane_cp

0x93df,	// (0x00023f18) vid6_image_uncrop_cif_pane_ParamLimits

0x93df,	// (0x00023f18) vid6_image_uncrop_cif_pane

0x940b,	// (0x00023f44) vid6_image_uncrop_nhd_pane_ParamLimits

0x940b,	// (0x00023f44) vid6_image_uncrop_nhd_pane

0x9428,	// (0x00023f61) vid6_image_uncrop_vga_pane_ParamLimits

0x9428,	// (0x00023f61) vid6_image_uncrop_vga_pane

0x9447,	// (0x00023f80) vid6_image_uncrop_wvga_pane_ParamLimits

0x9447,	// (0x00023f80) vid6_image_uncrop_wvga_pane

0x9464,	// (0x00023f9d) vid6_indi_pane_ParamLimits

0x9464,	// (0x00023f9d) vid6_indi_pane

0xe653,	// (0x0002918c) bg_tb_trans_pane_cp09_ParamLimits

0xe653,	// (0x0002918c) bg_tb_trans_pane_cp09

0x0d16,	// (0x0001b84f) cam6_battery_pane_cp_ParamLimits

0x0d16,	// (0x0001b84f) cam6_battery_pane_cp

0x0d22,	// (0x0001b85b) vid6_indi_pane_g1_ParamLimits

0x0d22,	// (0x0001b85b) vid6_indi_pane_g1

0x0d34,	// (0x0001b86d) vid6_indi_pane_g2_ParamLimits

0x0d34,	// (0x0001b86d) vid6_indi_pane_g2

0x0d46,	// (0x0001b87f) vid6_indi_pane_g3_ParamLimits

0x0d46,	// (0x0001b87f) vid6_indi_pane_g3

0x0d5b,	// (0x0001b894) vid6_indi_pane_g4_ParamLimits

0x0d5b,	// (0x0001b894) vid6_indi_pane_g4

0x0d70,	// (0x0001b8a9) vid6_indi_pane_g5_ParamLimits

0x0d70,	// (0x0001b8a9) vid6_indi_pane_g5

0x0004,

0xfaa1,	// (0x0002a5da) vid6_indi_pane_g_ParamLimits

0xfaa1,	// (0x0002a5da) vid6_indi_pane_g

0x0d8a,	// (0x0001b8c3) vid6_indi_pane_t1_ParamLimits

0x0d8a,	// (0x0001b8c3) vid6_indi_pane_t1

0x0da0,	// (0x0001b8d9) vid6_indi_pane_t2_ParamLimits

0x0da0,	// (0x0001b8d9) vid6_indi_pane_t2

0x0dc8,	// (0x0001b901) vid6_indi_pane_t3_ParamLimits

0x0dc8,	// (0x0001b901) vid6_indi_pane_t3

0x0df0,	// (0x0001b929) vid6_indi_pane_t4_ParamLimits

0x0df0,	// (0x0001b929) vid6_indi_pane_t4

0x0003,

0xfaac,	// (0x0002a5e5) vid6_indi_pane_t_ParamLimits

0xfaac,	// (0x0002a5e5) vid6_indi_pane_t

0x0e14,	// (0x0001b94d) wait_bar_pane_cp08

0x9489,	// (0x00023fc2) main_cset_text2_pane_t1_ParamLimits

0x9489,	// (0x00023fc2) main_cset_text2_pane_t1

0x939e,	// (0x00023ed7) listscroll_gen_pane_cp06_t1_ParamLimits

0x939e,	// (0x00023ed7) listscroll_gen_pane_cp06_t1

0x392d,	// (0x0001e466) main_cam6_set_pane

0x179d,	// (0x0001c2d6) bg_tb_trans_pane_cp06_ParamLimits

0x4754,	// (0x0001f28d) cam4_indicators_pane_g1_ParamLimits

0x4765,	// (0x0001f29e) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x0002a35d) cam4_indicators_pane_g_ParamLimits

0x4783,	// (0x0001f2bc) cam4_indicators_pane_t1_ParamLimits

0x3d85,	// (0x0001e8be) bg_tb_trans_pane_cp07_ParamLimits

0x4836,	// (0x0001f36f) vid4_indicators_pane_g1_ParamLimits

0x484a,	// (0x0001f383) vid4_indicators_pane_g2_ParamLimits

0x485e,	// (0x0001f397) vid4_indicators_pane_g3_ParamLimits

0x486f,	// (0x0001f3a8) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x0002a36f) vid4_indicators_pane_g_ParamLimits

0x488d,	// (0x0001f3c6) vid4_indicators_pane_t1_ParamLimits

0x4d17,	// (0x0001f850) vid4_progress_pane_g1_ParamLimits

0x4d27,	// (0x0001f860) vid4_progress_pane_g2_ParamLimits

0x4d37,	// (0x0001f870) vid4_progress_pane_g3_ParamLimits

0x4d49,	// (0x0001f882) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x0002a516) vid4_progress_pane_g_ParamLimits

0x4d61,	// (0x0001f89a) vid4_progress_pane_t1_ParamLimits

0x4d77,	// (0x0001f8b0) vid4_progress_pane_t2_ParamLimits

0x4d8c,	// (0x0001f8c5) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x0002a521) vid4_progress_pane_t_ParamLimits

0x4da1,	// (0x0001f8da) wait_bar_pane_cp07_ParamLimits

0x94bc,	// (0x00023ff5) main_cam6_set_pane_g2_ParamLimits

0x94bc,	// (0x00023ff5) main_cam6_set_pane_g2

0x94c8,	// (0x00024001) main_cset6_listscroll_pane_ParamLimits

0x94c8,	// (0x00024001) main_cset6_listscroll_pane

0x94f3,	// (0x0002402c) main_cset6_slider_pane_ParamLimits

0x94f3,	// (0x0002402c) main_cset6_slider_pane

0x94ff,	// (0x00024038) main_cset6_text2_pane_ParamLimits

0x94ff,	// (0x00024038) main_cset6_text2_pane

0x0e23,	// (0x0001b95c) main_cset6_text_pane

0x0e2b,	// (0x0001b964) main_cset_list_pane_copy1_ParamLimits

0x0e2b,	// (0x0001b964) main_cset_list_pane_copy1

0x0e3b,	// (0x0001b974) scroll_pane_cp028_copy1

0x9512,	// (0x0002404b) cset_list_set_pane_copy1

0x9525,	// (0x0002405e) aid_position_infowindow_above_copy1

0x952d,	// (0x00024066) aid_position_infowindow_below_copy1

0x9535,	// (0x0002406e) cset_list_set_pane_g1_copy1

0x060d,	// (0x0001b146) cset_list_set_pane_g3_copy1_ParamLimits

0x060d,	// (0x0001b146) cset_list_set_pane_g3_copy1

0x061c,	// (0x0001b155) cset_list_set_pane_t1_copy1_ParamLimits

0x061c,	// (0x0001b155) cset_list_set_pane_t1_copy1

0xc29b,	// (0x00026dd4) list_highlight_pane_cp021_copy1_ParamLimits

0xc29b,	// (0x00026dd4) list_highlight_pane_cp021_copy1

0x0e44,	// (0x0001b97d) cset6_slider_pane_ParamLimits

0x0e44,	// (0x0001b97d) cset6_slider_pane

0x0e70,	// (0x0001b9a9) main_cset6_slider_pane_g1_ParamLimits

0x0e70,	// (0x0001b9a9) main_cset6_slider_pane_g1

0x953d,	// (0x00024076) main_cset6_slider_pane_g2_ParamLimits

0x953d,	// (0x00024076) main_cset6_slider_pane_g2

0x0e98,	// (0x0001b9d1) main_cset6_slider_pane_g3_ParamLimits

0x0e98,	// (0x0001b9d1) main_cset6_slider_pane_g3

0x9565,	// (0x0002409e) main_cset6_slider_pane_g4_ParamLimits

0x9565,	// (0x0002409e) main_cset6_slider_pane_g4

0x9571,	// (0x000240aa) main_cset6_slider_pane_g5_ParamLimits

0x9571,	// (0x000240aa) main_cset6_slider_pane_g5

0x0533,	// (0x0001b06c) main_cset6_slider_pane_g7_ParamLimits

0x0533,	// (0x0001b06c) main_cset6_slider_pane_g7

0x053f,	// (0x0001b078) main_cset6_slider_pane_g8_ParamLimits

0x053f,	// (0x0001b078) main_cset6_slider_pane_g8

0x957f,	// (0x000240b8) main_cset6_slider_pane_g9_ParamLimits

0x957f,	// (0x000240b8) main_cset6_slider_pane_g9

0x958b,	// (0x000240c4) main_cset6_slider_pane_g10_ParamLimits

0x958b,	// (0x000240c4) main_cset6_slider_pane_g10

0x9597,	// (0x000240d0) main_cset6_slider_pane_g11_ParamLimits

0x9597,	// (0x000240d0) main_cset6_slider_pane_g11

0x95a3,	// (0x000240dc) main_cset6_slider_pane_g12_ParamLimits

0x95a3,	// (0x000240dc) main_cset6_slider_pane_g12

0x95af,	// (0x000240e8) main_cset6_slider_pane_g13_ParamLimits

0x95af,	// (0x000240e8) main_cset6_slider_pane_g13

0x95bb,	// (0x000240f4) main_cset6_slider_pane_g14_ParamLimits

0x95bb,	// (0x000240f4) main_cset6_slider_pane_g14

0x95c7,	// (0x00024100) main_cset6_slider_pane_g15_ParamLimits

0x95c7,	// (0x00024100) main_cset6_slider_pane_g15

0x95df,	// (0x00024118) main_cset6_slider_pane_g16_ParamLimits

0x95df,	// (0x00024118) main_cset6_slider_pane_g16

0x95ed,	// (0x00024126) main_cset6_slider_pane_g17_ParamLimits

0x95ed,	// (0x00024126) main_cset6_slider_pane_g17

0x0011,

0xfab5,	// (0x0002a5ee) main_cset6_slider_pane_g_ParamLimits

0xfab5,	// (0x0002a5ee) main_cset6_slider_pane_g

0x0ea4,	// (0x0001b9dd) main_cset6_slider_pane_t1_ParamLimits

0x0ea4,	// (0x0001b9dd) main_cset6_slider_pane_t1

0x9613,	// (0x0002414c) main_cset6_slider_pane_t2_ParamLimits

0x9613,	// (0x0002414c) main_cset6_slider_pane_t2

0x963e,	// (0x00024177) main_cset6_slider_pane_t3_ParamLimits

0x963e,	// (0x00024177) main_cset6_slider_pane_t3

0x9669,	// (0x000241a2) main_cset6_slider_pane_t4_ParamLimits

0x9669,	// (0x000241a2) main_cset6_slider_pane_t4

0x9694,	// (0x000241cd) main_cset6_slider_pane_t5_ParamLimits

0x9694,	// (0x000241cd) main_cset6_slider_pane_t5

0x0ee5,	// (0x0001ba1e) main_cset6_slider_pane_t7_ParamLimits

0x0ee5,	// (0x0001ba1e) main_cset6_slider_pane_t7

0x96c1,	// (0x000241fa) main_cset6_slider_pane_t8_ParamLimits

0x96c1,	// (0x000241fa) main_cset6_slider_pane_t8

0x96e5,	// (0x0002421e) main_cset6_slider_pane_t9_ParamLimits

0x96e5,	// (0x0002421e) main_cset6_slider_pane_t9

0x9709,	// (0x00024242) main_cset6_slider_pane_t10_ParamLimits

0x9709,	// (0x00024242) main_cset6_slider_pane_t10

0x972d,	// (0x00024266) main_cset6_slider_pane_t11_ParamLimits

0x972d,	// (0x00024266) main_cset6_slider_pane_t11

0x0f1b,	// (0x0001ba54) main_cset6_slider_pane_t14_ParamLimits

0x0f1b,	// (0x0001ba54) main_cset6_slider_pane_t14

0x0f54,	// (0x0001ba8d) main_cset6_slider_pane_t15_ParamLimits

0x0f54,	// (0x0001ba8d) main_cset6_slider_pane_t15

0x000b,

0xfada,	// (0x0002a613) main_cset6_slider_pane_t_ParamLimits

0xfada,	// (0x0002a613) main_cset6_slider_pane_t

0x0651,	// (0x0001b18a) cset_slider_pane_g1_copy1

0x065a,	// (0x0001b193) cset_slider_pane_g2_copy1

0x0663,	// (0x0001b19c) cset_slider_pane_g3_copy1

0xbead,	// (0x000269e6) bg_popup_sub_pane_cp011_copy1

0x0f8d,	// (0x0001bac6) main_cset_text_pane_g1_copy1

0x0734,	// (0x0001b26d) main_cset_text_pane_t1_copy1

0x0742,	// (0x0001b27b) main_cset_text_pane_t2_copy1

0x0750,	// (0x0001b289) main_cset_text_pane_t3_copy1

0x075e,	// (0x0001b297) main_cset_text_pane_t4_copy1

0x076c,	// (0x0001b2a5) main_cset_text_pane_t5_copy1

0x0f95,	// (0x0001bace) main_cset_text_pane_t6_copy1

0x0fa3,	// (0x0001badc) main_cset_text_pane_t7_copy1

0x976e,	// (0x000242a7) main_cset_text2_pane_t1_copy1

0x3d85,	// (0x0001e8be) main_ncimui_pane

0x3de4,	// (0x0001e91d) popup_query_ncimui_window_ParamLimits

0x3de4,	// (0x0001e91d) popup_query_ncimui_window

0xebe1,	// (0x0002971a) field_cale_ev2_pane_g4_ParamLimits

0xebe1,	// (0x0002971a) field_cale_ev2_pane_g4

0x839d,	// (0x00022ed6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x839d,	// (0x00022ed6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x0002a2f7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x0002a2f7) cell_video_dialer_keypad_pane_g

0x83b5,	// (0x00022eee) cell_video_dialer_keypad_pane_t1

0xbead,	// (0x000269e6) bg_popup_window_pane_cp012

0xe46f,	// (0x00028fa8) heading_pane_cp06

0x0fcf,	// (0x0001bb08) ncim_query_content_pane

0xbead,	// (0x000269e6) bg_popup_heading_pane_cp01

0x0fd7,	// (0x0001bb10) ncim_heading_pane_t1

0x0fe5,	// (0x0001bb1e) ncim_indicator_popup_pane

0x0ff7,	// (0x0001bb30) ncim_query_button_pane

0x100b,	// (0x0001bb44) ncim_query_content_pane_t1

0x101d,	// (0x0001bb56) ncim_query_content_pane_t2

0x0005,

0xfb1e,	// (0x0002a657) ncim_query_content_pane_t

0x1057,	// (0x0001bb90) ncim_query_list_pane

0x1069,	// (0x0001bba2) ncim_query_popup_pane

0x0fe5,	// (0x0001bb1e) ncim_indicator_popup_pane_ParamLimits

0x98c1,	// (0x000243fa) ncim_query_content_pane_g1_ParamLimits

0x98c1,	// (0x000243fa) ncim_query_content_pane_g1

0x100b,	// (0x0001bb44) ncim_query_content_pane_t1_ParamLimits

0x101d,	// (0x0001bb56) ncim_query_content_pane_t2_ParamLimits

0x98cd,	// (0x00024406) ncim_query_content_pane_t3_ParamLimits

0x98cd,	// (0x00024406) ncim_query_content_pane_t3

0x98ea,	// (0x00024423) ncim_query_content_pane_t4_ParamLimits

0x98ea,	// (0x00024423) ncim_query_content_pane_t4

0x9907,	// (0x00024440) ncim_query_content_pane_t5_ParamLimits

0x9907,	// (0x00024440) ncim_query_content_pane_t5

0x102f,	// (0x0001bb68) ncim_query_content_pane_t6_ParamLimits

0x102f,	// (0x0001bb68) ncim_query_content_pane_t6

0xfb1e,	// (0x0002a657) ncim_query_content_pane_t_ParamLimits

0x1057,	// (0x0001bb90) ncim_query_list_pane_ParamLimits

0x1069,	// (0x0001bba2) ncim_query_popup_pane_ParamLimits

0x107d,	// (0x0001bbb6) wait_bar_pane_cp04

0xbead,	// (0x000269e6) input_focus_pane_cp011

0x1085,	// (0x0001bbbe) ncim_query_popup_pane_t1

0x1093,	// (0x0001bbcc) ncim_list_query_list_pane_ParamLimits

0x1093,	// (0x0001bbcc) ncim_list_query_list_pane

0xbead,	// (0x000269e6) bg_button_pane_cp027

0x10a0,	// (0x0001bbd9) ncim_query_button_pane_g1

0xbead,	// (0x000269e6) list_highlight_pane_cp012

0x10aa,	// (0x0001bbe3) ncim_list_query_list_pane_g1

0x10b2,	// (0x0001bbeb) ncim_list_query_list_pane_t1

0x4774,	// (0x0001f2ad) cam4_indicators_pane_g3_ParamLimits

0x4774,	// (0x0001f2ad) cam4_indicators_pane_g3

0x487b,	// (0x0001f3b4) vid4_indicators_pane_g5_ParamLimits

0x487b,	// (0x0001f3b4) vid4_indicators_pane_g5

0x4d55,	// (0x0001f88e) vid4_progress_pane_g5_ParamLimits

0x4d55,	// (0x0001f88e) vid4_progress_pane_g5

0x97ad,	// (0x000242e6) main_ncimui_pane_g1

0x9815,	// (0x0002434e) ncimui_group_query_pane_ParamLimits

0x9815,	// (0x0002434e) ncimui_group_query_pane

0x985d,	// (0x00024396) ncimui_list_pane_ParamLimits

0x985d,	// (0x00024396) ncimui_list_pane

0x9884,	// (0x000243bd) ncimui_text_pane_ParamLimits

0x9884,	// (0x000243bd) ncimui_text_pane

0x9924,	// (0x0002445d) ncimui_text_pane_t1_ParamLimits

0x9924,	// (0x0002445d) ncimui_text_pane_t1

0x10c0,	// (0x0001bbf9) ncimui_list_single_graphic_pane_ParamLimits

0x10c0,	// (0x0001bbf9) ncimui_list_single_graphic_pane

0x9943,	// (0x0002447c) ncimui_query_pane_ParamLimits

0x9943,	// (0x0002447c) ncimui_query_pane

0xbead,	// (0x000269e6) list_highlight_pane_cp013

0x10d0,	// (0x0001bc09) ncim_list_query_list_pane_t1_copy1

0x10aa,	// (0x0001bbe3) ncim_list_single_graphic_pane_g1

0x9956,	// (0x0002448f) ncim_query_button_pane_cp01

0x9962,	// (0x0002449b) ncim_query_entry_pane_ParamLimits

0x9962,	// (0x0002449b) ncim_query_entry_pane

0x9975,	// (0x000244ae) ncimui_query_pane_g1

0x9981,	// (0x000244ba) ncimui_query_pane_t1_ParamLimits

0x9981,	// (0x000244ba) ncimui_query_pane_t1

0xc29b,	// (0x00026dd4) input_focus_pane_cp012

0x10de,	// (0x0001bc17) ncim_query_entry_pane_t1

0xc64a,	// (0x00027183) main_im_pane_ParamLimits

0x3d85,	// (0x0001e8be) main_mobtv_pane_ParamLimits

0x3d85,	// (0x0001e8be) main_mobtv_pane

0x95fb,	// (0x00024134) main_cset6_slider_pane_g18_ParamLimits

0x95fb,	// (0x00024134) main_cset6_slider_pane_g18

0x9607,	// (0x00024140) main_cset6_slider_pane_g19_ParamLimits

0x9607,	// (0x00024140) main_cset6_slider_pane_g19

0xd3a2,	// (0x00027edb) bg_main_mobtv_pane_ParamLimits

0xd3a2,	// (0x00027edb) bg_main_mobtv_pane

0x999a,	// (0x000244d3) main_mobtv_info_pane

0x99a5,	// (0x000244de) main_mobtv_loading_pane_ParamLimits

0x99a5,	// (0x000244de) main_mobtv_loading_pane

0x10f0,	// (0x0001bc29) main_mobtv_pg_channel_list_pane

0x10fa,	// (0x0001bc33) main_mobtv_pg_hdr_pane

0x99b2,	// (0x000244eb) main_mobtv_programe_curr_pane_ParamLimits

0x99b2,	// (0x000244eb) main_mobtv_programe_curr_pane

0x99bf,	// (0x000244f8) main_mobtv_programe_next_pane_ParamLimits

0x99bf,	// (0x000244f8) main_mobtv_programe_next_pane

0x1103,	// (0x0001bc3c) popup_mobtv_noti_window

0xc5ec,	// (0x00027125) main_tv_pg_hdr_pane_g1

0x110b,	// (0x0001bc44) main_tv_pg_hdr_pane_g2

0x1113,	// (0x0001bc4c) main_tv_pg_hdr_pane_g3

0x111b,	// (0x0001bc54) main_tv_pg_hdr_pane_g4

0x1123,	// (0x0001bc5c) main_tv_pg_hdr_pane_g5

0x112d,	// (0x0001bc66) main_tv_pg_hdr_pane_g6

0x1137,	// (0x0001bc70) main_tv_pg_hdr_pane_g7

0x1141,	// (0x0001bc7a) main_tv_pg_hdr_pane_g8

0x114b,	// (0x0001bc84) main_tv_pg_hdr_pane_g9

0x1155,	// (0x0001bc8e) main_tv_pg_hdr_pane_g10

0x115f,	// (0x0001bc98) main_tv_pg_hdr_pane_g11

0x000a,

0xfb2b,	// (0x0002a664) main_tv_pg_hdr_pane_g

0x1169,	// (0x0001bca2) main_tv_pg_hdr_pane_t1

0x1177,	// (0x0001bcb0) main_tv_pg_hdr_pane_t2

0x1185,	// (0x0001bcbe) main_tv_pg_hdr_pane_t3

0x1195,	// (0x0001bcce) main_tv_pg_hdr_pane_t4

0x11a5,	// (0x0001bcde) main_tv_pg_hdr_pane_t5

0x0004,

0xfb42,	// (0x0002a67b) main_tv_pg_hdr_pane_t

0x11b5,	// (0x0001bcee) single_mobtv_pg_channel_pane_ParamLimits

0x11b5,	// (0x0001bcee) single_mobtv_pg_channel_pane

0x11c7,	// (0x0001bd00) single_mobtv_pg_channel_table_pane

0x11d0,	// (0x0001bd09) single_mobtv_pg_channel_thumb_pane

0x11d9,	// (0x0001bd12) single_tv_pg_channel_pane_g1

0x11e2,	// (0x0001bd1b) single_tv_pg_channel_pane_g2

0x0001,

0xfb4d,	// (0x0002a686) single_tv_pg_channel_pane_g

0xc5ae,	// (0x000270e7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5ae,	// (0x000270e7) bg_single_mobtv_pg_channel_thumb_pane

0x11eb,	// (0x0001bd24) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x11eb,	// (0x0001bd24) single_mobtv_pg_channel_thumb_pane_g1

0x11f9,	// (0x0001bd32) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x11f9,	// (0x0001bd32) single_mobtv_pg_channel_thumb_pane_g2

0x1205,	// (0x0001bd3e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1205,	// (0x0001bd3e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb52,	// (0x0002a68b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb52,	// (0x0002a68b) single_mobtv_pg_channel_thumb_pane_g

0x1211,	// (0x0001bd4a) single_mobtv_pg_channel_thumb_pane_t1

0x121f,	// (0x0001bd58) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb59,	// (0x0002a692) single_mobtv_pg_channel_thumb_pane_t

0xc5ec,	// (0x00027125) bg_single_mobtv_pg_channel_table_pane_g1

0xc5ec,	// (0x00027125) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00029be8) bg_single_mobtv_pg_channel_table_pane_g

0x122d,	// (0x0001bd66) single_mobtv_pg_channel_table_pane_t1

0x123b,	// (0x0001bd74) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5e,	// (0x0002a697) single_mobtv_pg_channel_table_pane_t

0x99d4,	// (0x0002450d) main_mobtv_info_pane_g1_ParamLimits

0x99d4,	// (0x0002450d) main_mobtv_info_pane_g1

0x99f0,	// (0x00024529) main_mobtv_info_pane_t1_ParamLimits

0x99f0,	// (0x00024529) main_mobtv_info_pane_t1

0x9a68,	// (0x000245a1) main_mobtv_info_pane_t2_ParamLimits

0x9a68,	// (0x000245a1) main_mobtv_info_pane_t2

0x0002,

0xfb68,	// (0x0002a6a1) main_mobtv_info_pane_t_ParamLimits

0xfb68,	// (0x0002a6a1) main_mobtv_info_pane_t

0x9af7,	// (0x00024630) wait_bar_pane_cp05

0x9b09,	// (0x00024642) main_mobtv_loading_pane_g1_ParamLimits

0x9b09,	// (0x00024642) main_mobtv_loading_pane_g1

0x9b17,	// (0x00024650) main_mobtv_loading_pane_g2_ParamLimits

0x9b17,	// (0x00024650) main_mobtv_loading_pane_g2

0x9b23,	// (0x0002465c) main_mobtv_loading_pane_g3_ParamLimits

0x9b23,	// (0x0002465c) main_mobtv_loading_pane_g3

0x0002,

0xfb6f,	// (0x0002a6a8) main_mobtv_loading_pane_g_ParamLimits

0xfb6f,	// (0x0002a6a8) main_mobtv_loading_pane_g

0x1249,	// (0x0001bd82) main_mobtv_loading_pane_t1_ParamLimits

0x1249,	// (0x0001bd82) main_mobtv_loading_pane_t1

0x1261,	// (0x0001bd9a) main_mobtv_loading_pane_t2_ParamLimits

0x1261,	// (0x0001bd9a) main_mobtv_loading_pane_t2

0x0001,

0xfb76,	// (0x0002a6af) main_mobtv_loading_pane_t_ParamLimits

0xfb76,	// (0x0002a6af) main_mobtv_loading_pane_t

0x9b31,	// (0x0002466a) wait_bar_pane_cp06_ParamLimits

0x9b31,	// (0x0002466a) wait_bar_pane_cp06

0x1285,	// (0x0001bdbe) main_mobtv_programe_curr_pane_t1

0x1293,	// (0x0001bdcc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb7b,	// (0x0002a6b4) main_mobtv_programe_curr_pane_t

0x12a1,	// (0x0001bdda) main_mobtv_programe_next_pane_t1

0x12af,	// (0x0001bde8) main_mobtv_programe_next_pane_t2

0x12bd,	// (0x0001bdf6) main_mobtv_programe_next_pane_t3

0x0002,

0xfb80,	// (0x0002a6b9) main_mobtv_programe_next_pane_t

0xbead,	// (0x000269e6) bg_popup_mobtv_noti_window_pane

0x12cb,	// (0x0001be04) popup_mobtv_noti_window_g1

0x12d3,	// (0x0001be0c) popup_mobtv_noti_window_t1

0x12e1,	// (0x0001be1a) popup_mobtv_noti_window_t2

0x0001,

0xfb87,	// (0x0002a6c0) popup_mobtv_noti_window_t

0xc5ec,	// (0x00027125) bg_popup_mobtv_noti_window_pane_g1

0x392d,	// (0x0001e466) sc_clock_pane

0x392d,	// (0x0001e466) main_fs_bigclock_pane

0x9218,	// (0x00023d51) blid2_tripm_pane_t4_ParamLimits

0x9218,	// (0x00023d51) blid2_tripm_pane_t4

0xc5bc,	// (0x000270f5) sc_clock_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) sc_clock_pane_g1

0xc60a,	// (0x00027143) sc_clock_pane_t1_ParamLimits

0xc60a,	// (0x00027143) sc_clock_pane_t1

0xc60a,	// (0x00027143) sc_clock_pane_t2_ParamLimits

0xc60a,	// (0x00027143) sc_clock_pane_t2

0xc60a,	// (0x00027143) sc_clock_pane_t3_ParamLimits

0xc60a,	// (0x00027143) sc_clock_pane_t3

0x0004,

0xfb8c,	// (0x0002a6c5) sc_clock_pane_t_ParamLimits

0xfb8c,	// (0x0002a6c5) sc_clock_pane_t

0xa5d3,	// (0x0002510c) main_fs_bigclock_indicator_pane_ParamLimits

0xa5d3,	// (0x0002510c) main_fs_bigclock_indicator_pane

0x9b78,	// (0x000246b1) main_fs_bigclock_pane_g1_ParamLimits

0x9b78,	// (0x000246b1) main_fs_bigclock_pane_g1

0xa5df,	// (0x00025118) main_fs_bigclock_pane_t1_ParamLimits

0xa5df,	// (0x00025118) main_fs_bigclock_pane_t1

0xa5f1,	// (0x0002512a) main_fs_bigclock_pane_t2_ParamLimits

0xa5f1,	// (0x0002512a) main_fs_bigclock_pane_t2

0xa605,	// (0x0002513e) main_fs_bigclock_pane_t3_ParamLimits

0xa605,	// (0x0002513e) main_fs_bigclock_pane_t3

0x0002,

0xfd22,	// (0x0002a85b) main_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0002a85b) main_fs_bigclock_pane_t

0x1e5f,	// (0x0001c998) main_fs_bigclock_indicator_pane_g1

0x0fff,	// (0x0001bb38) ncim_query_content_pane_g2_ParamLimits

0x0fff,	// (0x0001bb38) ncim_query_content_pane_g2

0x0001,

0xfb19,	// (0x0002a652) ncim_query_content_pane_g_ParamLimits

0xfb19,	// (0x0002a652) ncim_query_content_pane_g

0xc60a,	// (0x00027143) sc_clock_pane_t4_ParamLimits

0xc60a,	// (0x00027143) sc_clock_pane_t4

0x3d85,	// (0x0001e8be) main_radioblah_pane

0x464b,	// (0x0001f184) cell_call4_button_pane_t1_copy1_ParamLimits

0x464b,	// (0x0001f184) cell_call4_button_pane_t1_copy1

0x97c7,	// (0x00024300) main_ncimui_pane_t1_ParamLimits

0x97c7,	// (0x00024300) main_ncimui_pane_t1

0x97e1,	// (0x0002431a) main_ncimui_pane_t2_ParamLimits

0x97e1,	// (0x0002431a) main_ncimui_pane_t2

0x0002,

0xfb12,	// (0x0002a64b) main_ncimui_pane_t_ParamLimits

0xfb12,	// (0x0002a64b) main_ncimui_pane_t

0xd380,	// (0x00027eb9) main_radioblah_anim_pane_ParamLimits

0xd380,	// (0x00027eb9) main_radioblah_anim_pane

0xd380,	// (0x00027eb9) main_radioblah_info_pane_ParamLimits

0xd380,	// (0x00027eb9) main_radioblah_info_pane

0xd38e,	// (0x00027ec7) main_radioblah_pane_t1_ParamLimits

0xd38e,	// (0x00027ec7) main_radioblah_pane_t1

0xd38e,	// (0x00027ec7) main_radioblah_pane_t2_ParamLimits

0xd38e,	// (0x00027ec7) main_radioblah_pane_t2

0x0003,

0xfbad,	// (0x0002a6e6) main_radioblah_pane_t_ParamLimits

0xfbad,	// (0x0002a6e6) main_radioblah_pane_t

0xc5a0,	// (0x000270d9) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc5a0,	// (0x000270d9) main_radioblah_rocker_ctrl_pane

0xe661,	// (0x0002919a) main_radioblah_info_pane_t1_ParamLimits

0xe661,	// (0x0002919a) main_radioblah_info_pane_t1

0x1456,	// (0x0001bf8f) main_radioblah_info_pane_t2_ParamLimits

0x1456,	// (0x0001bf8f) main_radioblah_info_pane_t2

0x0003,

0xfbb6,	// (0x0002a6ef) main_radioblah_info_pane_t_ParamLimits

0xfbb6,	// (0x0002a6ef) main_radioblah_info_pane_t

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g1

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g2

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g3

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g4

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g5

0xc5ec,	// (0x00027125) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbf,	// (0x0002a6f8) main_radioblah_rocker_ctrl_pane_g

0x976e,	// (0x000242a7) main_cset_text2_pane_t1_copy1_ParamLimits

0x46c6,	// (0x0001f1ff) cam4_image_uncrop_qvga_pane

0x47e9,	// (0x0001f322) vid4_image_uncrop_qcif_pane

0x4dfb,	// (0x0001f934) cam6_image_uncrop_qvga_pane_ParamLimits

0x4dfb,	// (0x0001f934) cam6_image_uncrop_qvga_pane

0x0d06,	// (0x0001b83f) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d06,	// (0x0001b83f) vid6_image_uncrop_qcif_pane

0xbead,	// (0x000269e6) bg_popup_preview_window_pane_cp03

0x0fb1,	// (0x0001baea) list_cset_text2_pane

0x0fb9,	// (0x0001baf2) main_cset6_text2_pane_g1

0x0fc1,	// (0x0001bafa) main_cset6_text2_pane_t1

0x9bbc,	// (0x000246f5) list_cset_text2_pane_t1_ParamLimits

0x9bbc,	// (0x000246f5) list_cset_text2_pane_t1

0x3d85,	// (0x0001e8be) main_radioblah_pane_ParamLimits

0x9ae3,	// (0x0002461c) main_mobtv_info_pane_t3_ParamLimits

0x9ae3,	// (0x0002461c) main_mobtv_info_pane_t3

0xd3a2,	// (0x00027edb) main_radioblah_pane_g1

0x1426,	// (0x0001bf5f) main_radioblah_info_pane_g1

0xc60a,	// (0x00027143) main_radioblah_info_pane_t3_ParamLimits

0xc60a,	// (0x00027143) main_radioblah_info_pane_t3

0x6709,	// (0x00021242) highlight_cell_cale_month_pane_ParamLimits

0x6709,	// (0x00021242) highlight_cell_cale_month_pane

0x392d,	// (0x0001e466) main_phob_fisheye_pane

0xec56,	// (0x0002978f) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x0002978f) scroll_pane_cp0031

0x0e14,	// (0x0001b94d) wait_bar_pane_cp08_ParamLimits

0x9512,	// (0x0002404b) cset_list_set_pane_copy1_ParamLimits

0x14a5,	// (0x0001bfde) highlight_cell_cale_month_pane_g1

0x9bd9,	// (0x00024712) highlight_cell_cale_month_pane_t1

0x09fc,	// (0x0001b535) list_gen_pane_cp01

0x051e,	// (0x0001b057) scroll_pane_01

0x9be7,	// (0x00024720) list_single_double_fisheye_pane

0x9bf0,	// (0x00024729) list_double_fisheye_pane_g1_ParamLimits

0x9bf0,	// (0x00024729) list_double_fisheye_pane_g1

0x9bfc,	// (0x00024735) list_double_fisheye_pane_g2_ParamLimits

0x9bfc,	// (0x00024735) list_double_fisheye_pane_g2

0x9c10,	// (0x00024749) list_double_fisheye_pane_g3_ParamLimits

0x9c10,	// (0x00024749) list_double_fisheye_pane_g3

0x0004,

0xfbcc,	// (0x0002a705) list_double_fisheye_pane_g_ParamLimits

0xfbcc,	// (0x0002a705) list_double_fisheye_pane_g

0x9c39,	// (0x00024772) list_double_fisheye_pane_t1_ParamLimits

0x9c39,	// (0x00024772) list_double_fisheye_pane_t1

0x9c54,	// (0x0002478d) list_double_fisheye_pane_t2_ParamLimits

0x9c54,	// (0x0002478d) list_double_fisheye_pane_t2

0x0001,

0xfbd7,	// (0x0002a710) list_double_fisheye_pane_t_ParamLimits

0xfbd7,	// (0x0002a710) list_double_fisheye_pane_t

0x392d,	// (0x0001e466) main_call5_pane

0xc5a0,	// (0x000270d9) sc_swipe_pane_ParamLimits

0xc5a0,	// (0x000270d9) sc_swipe_pane

0x9c82,	// (0x000247bb) call5_image_pane_ParamLimits

0x9c82,	// (0x000247bb) call5_image_pane

0x9c92,	// (0x000247cb) call5_swipe_1_pane_ParamLimits

0x9c92,	// (0x000247cb) call5_swipe_1_pane

0x9c9e,	// (0x000247d7) call5_swipe_2_pane_ParamLimits

0x9c9e,	// (0x000247d7) call5_swipe_2_pane

0x9cb8,	// (0x000247f1) popup_call5_audio_first_window_ParamLimits

0x9cb8,	// (0x000247f1) popup_call5_audio_first_window

0xc5ae,	// (0x000270e7) call5_swipe_1_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) call5_swipe_1_pane_g1

0x14ad,	// (0x0001bfe6) call5_swipe_1_pane_g2_ParamLimits

0x14ad,	// (0x0001bfe6) call5_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x0002a715) call5_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x0002a715) call5_swipe_1_pane_g

0x14b9,	// (0x0001bff2) call5_swipe_1_pane_t1_ParamLimits

0x14b9,	// (0x0001bff2) call5_swipe_1_pane_t1

0xc5ae,	// (0x000270e7) call5_swipe_2_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) call5_swipe_2_pane_g1

0x14ce,	// (0x0001c007) call5_swipe_2_pane_g2_ParamLimits

0x14ce,	// (0x0001c007) call5_swipe_2_pane_g2

0x0001,

0xfbe1,	// (0x0002a71a) call5_swipe_2_pane_g_ParamLimits

0xfbe1,	// (0x0002a71a) call5_swipe_2_pane_g

0x14da,	// (0x0001c013) call5_swipe_2_pane_t1_ParamLimits

0x14da,	// (0x0001c013) call5_swipe_2_pane_t1

0xc5ae,	// (0x000270e7) sc_swipe_pane_g1_ParamLimits

0xc5ae,	// (0x000270e7) sc_swipe_pane_g1

0xc5bc,	// (0x000270f5) sc_swipe_pane_g2_ParamLimits

0xc5bc,	// (0x000270f5) sc_swipe_pane_g2

0x0001,

0xfbe6,	// (0x0002a71f) sc_swipe_pane_g_ParamLimits

0xfbe6,	// (0x0002a71f) sc_swipe_pane_g

0xc5f6,	// (0x0002712f) sc_swipe_pane_t1_ParamLimits

0xc5f6,	// (0x0002712f) sc_swipe_pane_t1

0x392d,	// (0x0001e466) main_cmail_launcher_pane

0x9cc6,	// (0x000247ff) aid_size_cell_cmail_l_ParamLimits

0x9cc6,	// (0x000247ff) aid_size_cell_cmail_l

0x9cd4,	// (0x0002480d) grid_cmail_l_pane_ParamLimits

0x9cd4,	// (0x0002480d) grid_cmail_l_pane

0x9ce4,	// (0x0002481d) cell_cmail_l_pane_ParamLimits

0x9ce4,	// (0x0002481d) cell_cmail_l_pane

0x14ef,	// (0x0001c028) cell_cmail_l_pane_g1_ParamLimits

0x14ef,	// (0x0001c028) cell_cmail_l_pane_g1

0x14fb,	// (0x0001c034) cell_cmail_l_pane_t1_ParamLimits

0x14fb,	// (0x0001c034) cell_cmail_l_pane_t1

0x1511,	// (0x0001c04a) cell_cmail_l_pane_t2_ParamLimits

0x1511,	// (0x0001c04a) cell_cmail_l_pane_t2

0x0001,

0xfbeb,	// (0x0002a724) cell_cmail_l_pane_t_ParamLimits

0xfbeb,	// (0x0002a724) cell_cmail_l_pane_t

0xc29b,	// (0x00026dd4) grid_highlight_pane_cp018_ParamLimits

0xc29b,	// (0x00026dd4) grid_highlight_pane_cp018

0x3790,	// (0x0001e2c9) main2_pane_ParamLimits

0x3790,	// (0x0001e2c9) main2_pane

0xc6d9,	// (0x00027212) popup_sp_fs_action_menu_bg_pane_g1

0xc6e1,	// (0x0002721a) popup_sp_fs_action_menu_bg_pane_g2

0xc6e9,	// (0x00027222) popup_sp_fs_action_menu_bg_pane_g3

0xc6f1,	// (0x0002722a) popup_sp_fs_action_menu_bg_pane_g4

0xc6f9,	// (0x00027232) popup_sp_fs_action_menu_bg_pane_g5

0xc701,	// (0x0002723a) popup_sp_fs_action_menu_bg_pane_g6

0xc709,	// (0x00027242) popup_sp_fs_action_menu_bg_pane_g7

0xc711,	// (0x0002724a) popup_sp_fs_action_menu_bg_pane_g8

0xc719,	// (0x00027252) popup_sp_fs_action_menu_bg_pane_g9

0xc721,	// (0x0002725a) popup_sp_fs_action_menu_bg_pane_g10

0xc721,	// (0x0002725a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00029c39) popup_sp_fs_action_menu_bg_pane_g

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g2

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00029ce7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00029ce7) list_medium_line_x2_t3_g3_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t2

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g3_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t3_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t2

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g2_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g2

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g3

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t4_g4_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t2

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t3

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029d03) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029d03) list_medium_line_x2_t4_g4_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g2

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g3

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t2_g4_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g4_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g4_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g2

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00029ce7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00029ce7) list_medium_line_x2_t2_g3_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g3_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g3_t

0x687f,	// (0x000213b8) main_sp_fs_list_pane_ParamLimits

0x687f,	// (0x000213b8) main_sp_fs_list_pane

0x688b,	// (0x000213c4) sp_fs_scroll_pane_ParamLimits

0x688b,	// (0x000213c4) sp_fs_scroll_pane

0xcd5a,	// (0x00027893) list_medium_line_x2_t3_t1

0xcd5a,	// (0x00027893) list_medium_line_x2_t3_t2

0xcd5a,	// (0x00027893) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00029db5) list_medium_line_x2_t3_t

0xcd5a,	// (0x00027893) list_medium_line_x3_t4_t1

0xcd5a,	// (0x00027893) list_medium_line_x3_t4_t2

0xcd5a,	// (0x00027893) list_medium_line_x3_t4_t3

0xcd5a,	// (0x00027893) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00029dbc) list_medium_line_x3_t4_t

0xcd5a,	// (0x00027893) list_medium_line_x4_t5_t1

0xcd5a,	// (0x00027893) list_medium_line_x4_t5_t2

0xcd5a,	// (0x00027893) list_medium_line_x4_t5_t3

0xcd5a,	// (0x00027893) list_medium_line_x4_t5_t4

0xcd5a,	// (0x00027893) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00029dc5) list_medium_line_x4_t5_t

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g1

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g2

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g3

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029cfa) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029cfa) list_medium_line_t4_g4_g

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t1

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t2

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t3

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t4_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029d03) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029d03) list_medium_line_t4_g4_t

0x6901,	// (0x0002143a) chi_dic_find_pane_g1

0x3da1,	// (0x0001e8da) main_tport_pane

0xcd5a,	// (0x00027893) list_medium_line_plain_t1

0xc5ae,	// (0x000270e7) list_medium_line_t2_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_t2_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_t2_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_t2_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_g2_t1

0xc5f6,	// (0x0002712f) list_medium_line_t2_g2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_t2_g2_t

0x0a6f,	// (0x0001b5a8) aid_sp_fs_list_icon_a_sm

0x0a77,	// (0x0001b5b0) aid_sp_fs_list_icon_d

0x0a7f,	// (0x0001b5b8) aid_sp_fs_text_primary

0x0a88,	// (0x0001b5c1) aid_sp_fs_text_secondary

0xbead,	// (0x000269e6) list_medium_line

0xbead,	// (0x000269e6) list_medium_line_g2

0xbead,	// (0x000269e6) list_medium_line_g3

0xbead,	// (0x000269e6) list_medium_line_plain

0xbead,	// (0x000269e6) list_medium_line_plain_t2

0xbead,	// (0x000269e6) list_medium_line_plain_t3

0xbead,	// (0x000269e6) list_medium_line_right_icon

0xbead,	// (0x000269e6) list_medium_line_right_iconx2

0xbead,	// (0x000269e6) list_medium_line_t2

0xbead,	// (0x000269e6) list_medium_line_t2_g2

0xbead,	// (0x000269e6) list_medium_line_t2_g3

0xbead,	// (0x000269e6) list_medium_line_t2_right_icon

0xbead,	// (0x000269e6) list_medium_line_t2_right_iconx2

0xbead,	// (0x000269e6) list_medium_line_t3

0xbead,	// (0x000269e6) list_medium_line_t3_g2

0xbead,	// (0x000269e6) list_medium_line_t3_g3

0xbead,	// (0x000269e6) list_medium_line_t3_right_iconx2

0xbead,	// (0x000269e6) list_medium_line_t4_g4

0xbead,	// (0x000269e6) list_medium_line_x2

0xbead,	// (0x000269e6) list_medium_line_x2_t2_g2

0xbead,	// (0x000269e6) list_medium_line_x2_t2_g3

0xbead,	// (0x000269e6) list_medium_line_x2_t2_g4

0xbead,	// (0x000269e6) list_medium_line_x2_t3

0xbead,	// (0x000269e6) list_medium_line_x2_t3_g2

0xbead,	// (0x000269e6) list_medium_line_x2_t3_g3

0xbead,	// (0x000269e6) list_medium_line_x2_t3_g4

0xbead,	// (0x000269e6) list_medium_line_x2_t4_g2

0xbead,	// (0x000269e6) list_medium_line_x2_t4_g4

0xbead,	// (0x000269e6) list_medium_line_x3

0xbead,	// (0x000269e6) list_medium_line_x3_t4

0xbead,	// (0x000269e6) list_medium_line_x3_t4_g4

0xbead,	// (0x000269e6) list_medium_line_x4_t4

0xbead,	// (0x000269e6) list_medium_line_x4_t4_g7

0xbead,	// (0x000269e6) list_medium_line_x4_t5

0x909d,	// (0x00023bd6) list_single_fs_dyc_pane_ParamLimits

0x909d,	// (0x00023bd6) list_single_fs_dyc_pane

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g1

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g2

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g3

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g4

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g5

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x4_t4_g7_g6

0xc5bc,	// (0x000270f5) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc5bc,	// (0x000270f5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf3,	// (0x0002a62c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf3,	// (0x0002a62c) list_medium_line_x4_t4_g7_g

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t1

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t2

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x4_t4_g7_t3

0xc60a,	// (0x00027143) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc60a,	// (0x00027143) list_medium_line_x4_t4_g7_t4

0xc60a,	// (0x00027143) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc60a,	// (0x00027143) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb02,	// (0x0002a63b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb02,	// (0x0002a63b) list_medium_line_x4_t4_g7_t

0x9751,	// (0x0002428a) list_single_dyc_row_pane_ParamLimits

0x9751,	// (0x0002428a) list_single_dyc_row_pane

0x9c76,	// (0x000247af) call5_gesture_pane_ParamLimits

0x9c76,	// (0x000247af) call5_gesture_pane

0x9caa,	// (0x000247e3) call5_windows_pane_ParamLimits

0x9caa,	// (0x000247e3) call5_windows_pane

0x9cfd,	// (0x00024836) call5_swipe_1_pane_cp_ParamLimits

0x9cfd,	// (0x00024836) call5_swipe_1_pane_cp

0x9d09,	// (0x00024842) call5_swipe_2_pane_cp_ParamLimits

0x9d09,	// (0x00024842) call5_swipe_2_pane_cp

0xc7fc,	// (0x00027335) call5_image_pane_cp

0x9d15,	// (0x0002484e) popup_call5_audio_first_window_cp_ParamLimits

0x9d15,	// (0x0002484e) popup_call5_audio_first_window_cp

0x152e,	// (0x0001c067) call5_swipe_1_pane_g1_cp_ParamLimits

0x152e,	// (0x0001c067) call5_swipe_1_pane_g1_cp

0x153b,	// (0x0001c074) call5_swipe_1_pane_g2_cp

0x1543,	// (0x0001c07c) call5_swipe_1_pane_t1_cp_ParamLimits

0x1543,	// (0x0001c07c) call5_swipe_1_pane_t1_cp

0x152e,	// (0x0001c067) call5_swipe_2_pane_g1_cp_ParamLimits

0x152e,	// (0x0001c067) call5_swipe_2_pane_g1_cp

0x1558,	// (0x0001c091) call5_swipe_2_pane_g2_cp

0x1560,	// (0x0001c099) call5_swipe_2_pane_t1_cp_ParamLimits

0x1560,	// (0x0001c099) call5_swipe_2_pane_t1_cp

0xc29b,	// (0x00026dd4) main_sp_fs_email_pane

0x1575,	// (0x0001c0ae) main_sp_fs_listscroll_pane_te

0x157e,	// (0x0001c0b7) popup_sp_fs_action_menu_pane_ParamLimits

0x157e,	// (0x0001c0b7) popup_sp_fs_action_menu_pane

0xc5ec,	// (0x00027125) bg_sp_fs_ctrlbar_pane_g1

0x15c2,	// (0x0001c0fb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x15cb,	// (0x0001c104) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x15d4,	// (0x0001c10d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc5ec,	// (0x00027125) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf0,	// (0x0002a729) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe4e8,	// (0x00029021) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe4e8,	// (0x00029021) bg_sp_fs_ctrlbar_ddmenu_pane

0x15dd,	// (0x0001c116) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x15dd,	// (0x0001c116) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x15e9,	// (0x0001c122) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x15e9,	// (0x0001c122) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf9,	// (0x0002a732) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf9,	// (0x0002a732) main_sp_fs_ctrlbar_ddmenu_pane_g

0x15f5,	// (0x0001c12e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x15f5,	// (0x0001c12e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc5ec,	// (0x00027125) list_medium_line_t2_right_icon_g1

0xcd5a,	// (0x00027893) list_medium_line_t2_right_icon_t1

0xcd5a,	// (0x00027893) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfe,	// (0x0002a737) list_medium_line_t2_right_icon_t

0xd380,	// (0x00027eb9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd380,	// (0x00027eb9) bg_sp_fs_ctrlbar_pane

0x9d7a,	// (0x000248b3) main_sp_fs_ctrlbar_button_pane_cp01

0x9d82,	// (0x000248bb) main_sp_fs_ctrlbar_ddmenu_pane

0x1647,	// (0x0001c180) main_sp_fs_ctrlbar_pane_g1

0x1653,	// (0x0001c18c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc03,	// (0x0002a73c) main_sp_fs_ctrlbar_pane_g

0x9dbe,	// (0x000248f7) main_sp_fs_ctrlbar_pane_t1

0x9df9,	// (0x00024932) main_sp_fs_ctrlbar_pane

0x9e0f,	// (0x00024948) main_sp_fs_listscroll_pane_te_cp01

0x9e2a,	// (0x00024963) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e2a,	// (0x00024963) popup_sp_fs_action_menu_pane_cp01

0xc29b,	// (0x00026dd4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc29b,	// (0x00026dd4) bg_sp_fs_highlight_list_pane_cp01

0x167a,	// (0x0001c1b3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x167a,	// (0x0001c1b3) sp_fs_action_menu_list_gene_pane_g1

0x1689,	// (0x0001c1c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1689,	// (0x0001c1c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc11,	// (0x0002a74a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc11,	// (0x0002a74a) sp_fs_action_menu_list_gene_pane_g

0x1696,	// (0x0001c1cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1696,	// (0x0001c1cf) sp_fs_action_menu_list_gene_pane_t1

0x16ae,	// (0x0001c1e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16ae,	// (0x0001c1e7) sp_fs_action_menu_list_gene_pane

0x16cd,	// (0x0001c206) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x16cd,	// (0x0001c206) popup_sp_fs_action_menu_bg_pane

0x16db,	// (0x0001c214) sp_fs_action_menu_list_pane_ParamLimits

0x16db,	// (0x0001c214) sp_fs_action_menu_list_pane

0x16fb,	// (0x0001c234) sp_fs_scroll_pane_cp01_ParamLimits

0x16fb,	// (0x0001c234) sp_fs_scroll_pane_cp01

0xcd5a,	// (0x00027893) list_medium_line_plain_t2_t1

0xcd5a,	// (0x00027893) list_medium_line_plain_t2_t2

0x0001,

0xfbfe,	// (0x0002a737) list_medium_line_plain_t2_t

0xcd5a,	// (0x00027893) list_medium_line_plain_t3_t1

0xcd5a,	// (0x00027893) list_medium_line_plain_t3_t2

0xcd5a,	// (0x00027893) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00029db5) list_medium_line_plain_t3_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t2_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g2_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_x2_t2_g2_t

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_x2_t4_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t2

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t3

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00029d03) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00029d03) list_medium_line_x2_t4_g2_t

0xc5ec,	// (0x00027125) list_medium_line_t3_right_iconx2_g1

0xc5ec,	// (0x00027125) list_medium_line_t3_right_iconx2_g2

0xc5ec,	// (0x00027125) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00029ed1) list_medium_line_t3_right_iconx2_g

0xcd5a,	// (0x00027893) list_medium_line_t3_right_iconx2_t1

0xcd5a,	// (0x00027893) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbfe,	// (0x0002a737) list_medium_line_t3_right_iconx2_t

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g1

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g2

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g3

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00029cfa) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00029cfa) list_medium_line_x3_t4_g4_g

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t1

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t2

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t3

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00029d03) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00029d03) list_medium_line_x3_t4_g4_t

0x9e4a,	// (0x00024983) list_single_dyc_row_text_pane_t1_ParamLimits

0x9e4a,	// (0x00024983) list_single_dyc_row_text_pane_t1

0x9e81,	// (0x000249ba) list_single_dyc_row_text_pane_t2_ParamLimits

0x9e81,	// (0x000249ba) list_single_dyc_row_text_pane_t2

0x1721,	// (0x0001c25a) list_single_dyc_row_text_pane_t3_ParamLimits

0x1721,	// (0x0001c25a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc16,	// (0x0002a74f) list_single_dyc_row_text_pane_t_ParamLimits

0xfc16,	// (0x0002a74f) list_single_dyc_row_text_pane_t

0x1745,	// (0x0001c27e) list_single_dyc_row_pane_g1_ParamLimits

0x1745,	// (0x0001c27e) list_single_dyc_row_pane_g1

0x1751,	// (0x0001c28a) list_single_dyc_row_pane_g2_ParamLimits

0x1751,	// (0x0001c28a) list_single_dyc_row_pane_g2

0x175d,	// (0x0001c296) list_single_dyc_row_pane_g3_ParamLimits

0x175d,	// (0x0001c296) list_single_dyc_row_pane_g3

0x1769,	// (0x0001c2a2) list_single_dyc_row_pane_g4_ParamLimits

0x1769,	// (0x0001c2a2) list_single_dyc_row_pane_g4

0x0003,

0xfc23,	// (0x0002a75c) list_single_dyc_row_pane_g_ParamLimits

0xfc23,	// (0x0002a75c) list_single_dyc_row_pane_g

0x1775,	// (0x0001c2ae) list_single_dyc_row_text_pane_ParamLimits

0x1775,	// (0x0001c2ae) list_single_dyc_row_text_pane

0xbead,	// (0x000269e6) bg_sp_fs_scroll_pane

0x1794,	// (0x0001c2cd) thumb_sp_fs_scroll_pane

0xc5ae,	// (0x000270e7) list_medium_line_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g1

0xc5f6,	// (0x0002712f) list_medium_line_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t1

0xc5ae,	// (0x000270e7) list_medium_line_x2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_x2_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t1

0xc5ae,	// (0x000270e7) list_medium_line_x3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x3_g1

0x179d,	// (0x0001c2d6) list_medium_line_x3_g2_ParamLimits

0x179d,	// (0x0001c2d6) list_medium_line_x3_g2

0x0001,

0xfc2c,	// (0x0002a765) list_medium_line_x3_g_ParamLimits

0xfc2c,	// (0x0002a765) list_medium_line_x3_g

0x17ab,	// (0x0001c2e4) list_medium_line_x3_t1_ParamLimits

0x17ab,	// (0x0001c2e4) list_medium_line_x3_t1

0x17bf,	// (0x0001c2f8) thumb_sp_fs_scroll_pane_g1

0x17c8,	// (0x0001c301) thumb_sp_fs_scroll_pane_g2

0x17d1,	// (0x0001c30a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x0002a76a) thumb_sp_fs_scroll_pane_g

0x17bf,	// (0x0001c2f8) bg_sp_fs_scroll_pane_g1

0x17c8,	// (0x0001c301) bg_sp_fs_scroll_pane_g2

0x17d1,	// (0x0001c30a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x0002a76a) bg_sp_fs_scroll_pane_g

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g1

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g2

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g3

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00029cfa) list_medium_line_x2_t3_g4_g

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t1

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t2

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_x2_t3_g4_t

0xc5ae,	// (0x000270e7) list_medium_line_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_g2_t1

0xc5ae,	// (0x000270e7) list_medium_line_t3_g2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g2_g1

0xc5ae,	// (0x000270e7) list_medium_line_t3_g2_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00029cf5) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00029cf5) list_medium_line_t3_g2_g

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t1

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t2

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_t3_g2_t

0xc5ec,	// (0x00027125) list_medium_line_right_icon_g1

0xcd5a,	// (0x00027893) list_medium_line_right_icon_t1

0xc5ae,	// (0x000270e7) list_medium_line_t2_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g1

0xc5f6,	// (0x0002712f) list_medium_line_t2_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_t1

0xc5f6,	// (0x0002712f) list_medium_line_t2_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_t2_t

0xc5ae,	// (0x000270e7) list_medium_line_t3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g1

0xc5f6,	// (0x0002712f) list_medium_line_t3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_t1

0xc5f6,	// (0x0002712f) list_medium_line_t3_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_t2

0xc5f6,	// (0x0002712f) list_medium_line_t3_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_t3_t

0xc5ae,	// (0x000270e7) list_medium_line_g3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g3_g1

0xc5ae,	// (0x000270e7) list_medium_line_g3_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g3_g2

0xc5ae,	// (0x000270e7) list_medium_line_g3_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00029ce7) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00029ce7) list_medium_line_g3_g

0xc5f6,	// (0x0002712f) list_medium_line_g3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_g3_t1

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g1

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g2

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00029ce7) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00029ce7) list_medium_line_t2_g3_g

0xc5f6,	// (0x0002712f) list_medium_line_t2_g3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_g3_t1

0xc5f6,	// (0x0002712f) list_medium_line_t2_g3_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00029d6a) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00029d6a) list_medium_line_t2_g3_t

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g1_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g1

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g2_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g2

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g3_ParamLimits

0xc5ae,	// (0x000270e7) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00029ce7) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00029ce7) list_medium_line_t3_g3_g

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t1_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t1

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t2_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t2

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t3_ParamLimits

0xc5f6,	// (0x0002712f) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00029cee) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00029cee) list_medium_line_t3_g3_t

0xc5ec,	// (0x00027125) list_medium_line_right_iconx2_g1

0xc5ec,	// (0x00027125) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00029be8) list_medium_line_right_iconx2_g

0xcd5a,	// (0x00027893) list_medium_line_right_iconx2_t1

0xc5ec,	// (0x00027125) list_medium_line_t2_right_iconx2_g1

0xc5ec,	// (0x00027125) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00029be8) list_medium_line_t2_right_iconx2_g

0xcd5a,	// (0x00027893) list_medium_line_t2_right_iconx2_t1

0xcd5a,	// (0x00027893) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfe,	// (0x0002a737) list_medium_line_t2_right_iconx2_t

0xcd5a,	// (0x00027893) list_medium_line_x4_t4_t1

0xcd5a,	// (0x00027893) list_medium_line_x4_t4_t2

0xcd5a,	// (0x00027893) list_medium_line_x4_t4_t3

0xcd5a,	// (0x00027893) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00029dbc) list_medium_line_x4_t4_t

0x9fce,	// (0x00024b07) tport_appsw_pane_ParamLimits

0x9fce,	// (0x00024b07) tport_appsw_pane

0x9fdc,	// (0x00024b15) tport_contact_pane_ParamLimits

0x9fdc,	// (0x00024b15) tport_contact_pane

0x9fec,	// (0x00024b25) tport_listscroll_pane_ParamLimits

0x9fec,	// (0x00024b25) tport_listscroll_pane

0x9ffc,	// (0x00024b35) cell_tport_appsw_pane_ParamLimits

0x9ffc,	// (0x00024b35) cell_tport_appsw_pane

0xc5bc,	// (0x000270f5) tport_appsw_pane_g1_ParamLimits

0xc5bc,	// (0x000270f5) tport_appsw_pane_g1

0x17da,	// (0x0001c313) tport_contact_pane_g1

0x1085,	// (0x0001bbbe) tport_contact_pane_t1

0x17e3,	// (0x0001c31c) tport_contact_pane_t2

0x0001,

0xfc38,	// (0x0002a771) tport_contact_pane_t

0x17f1,	// (0x0001c32a) list_tport_pane

0x17fa,	// (0x0001c333) scroll_pane_cp_030

0xa02f,	// (0x00024b68) cell_tport_appsw_pane_g1

0xa03f,	// (0x00024b78) cell_tport_appsw_pane_t1

0xa04d,	// (0x00024b86) grid_highlight_pane_cp019

0xa055,	// (0x00024b8e) list_tport_double_graphic_pane_ParamLimits

0xa055,	// (0x00024b8e) list_tport_double_graphic_pane

0xc29b,	// (0x00026dd4) list_highlight_pane_cp023_ParamLimits

0xc29b,	// (0x00026dd4) list_highlight_pane_cp023

0xa066,	// (0x00024b9f) list_tport_double_graphic_pane_g1_ParamLimits

0xa066,	// (0x00024b9f) list_tport_double_graphic_pane_g1

0xa073,	// (0x00024bac) list_tport_double_graphic_pane_t1_ParamLimits

0xa073,	// (0x00024bac) list_tport_double_graphic_pane_t1

0xa088,	// (0x00024bc1) list_tport_double_graphic_pane_t2_ParamLimits

0xa088,	// (0x00024bc1) list_tport_double_graphic_pane_t2

0x0001,

0xfc44,	// (0x0002a77d) list_tport_double_graphic_pane_t_ParamLimits

0xfc44,	// (0x0002a77d) list_tport_double_graphic_pane_t

0xbead,	// (0x000269e6) main_cale_note_pane

0x4a34,	// (0x0001f56d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4a34,	// (0x0001f56d) cell_vitu2_function_top_wide_pane_cp01

0x9af7,	// (0x00024630) wait_bar_pane_cp05_ParamLimits

0xc29b,	// (0x00026dd4) listscroll_cmail_pane

0x180b,	// (0x0001c344) list_cmail_pane

0xa09a,	// (0x00024bd3) list_cmail_body_pane

0xa0c1,	// (0x00024bfa) list_single_cmail_header_caption_pane

0xa0ea,	// (0x00024c23) list_single_cmail_header_detail_pane_ParamLimits

0xa0ea,	// (0x00024c23) list_single_cmail_header_detail_pane

0x1822,	// (0x0001c35b) list_single_cmail_header_caption_pane_t1

0xa124,	// (0x00024c5d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa124,	// (0x00024c5d) list_single_cmail_header_detail_pane_g1

0x1839,	// (0x0001c372) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1839,	// (0x0001c372) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc49,	// (0x0002a782) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc49,	// (0x0002a782) list_single_cmail_header_detail_pane_g

0xa13a,	// (0x00024c73) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa13a,	// (0x00024c73) list_single_cmail_header_detail_pane_t1

0xa176,	// (0x00024caf) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa176,	// (0x00024caf) list_single_cmail_header_editor_pane_bg

0x11e2,	// (0x0001bd1b) list_cmail_body_pane_g1

0x1876,	// (0x0001c3af) list_cmail_body_pane_t1

0x03de,	// (0x0001af17) list_single_cmail_header_editor_pane_bg_g1

0xca3c,	// (0x00027575) list_single_cmail_header_editor_pane_bg_g1_copy1

0x03ee,	// (0x0001af27) list_single_cmail_header_editor_pane_bg_g1_copy2

0x03e6,	// (0x0001af1f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06c5,	// (0x0001b1fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0x040e,	// (0x0001af47) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x03fe,	// (0x0001af37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0406,	// (0x0001af3f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xca1c,	// (0x00027555) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa18d,	// (0x00024cc6) calenote_gesture_pane_ParamLimits

0xa18d,	// (0x00024cc6) calenote_gesture_pane

0xa1a7,	// (0x00024ce0) calenote_window_pane_ParamLimits

0xa1a7,	// (0x00024ce0) calenote_window_pane

0x1884,	// (0x0001c3bd) popup_note_window_cp01

0xa1bf,	// (0x00024cf8) calenote_swipe_1_pane_ParamLimits

0xa1bf,	// (0x00024cf8) calenote_swipe_1_pane

0x9d09,	// (0x00024842) calenote_swipe_2_pane_ParamLimits

0x9d09,	// (0x00024842) calenote_swipe_2_pane

0x152e,	// (0x0001c067) calenote_swipe_1_pane_g1_ParamLimits

0x152e,	// (0x0001c067) calenote_swipe_1_pane_g1

0x1896,	// (0x0001c3cf) calenote_swipe_1_pane_g2_ParamLimits

0x1896,	// (0x0001c3cf) calenote_swipe_1_pane_g2

0x0001,

0xfc55,	// (0x0002a78e) calenote_swipe_1_pane_g_ParamLimits

0xfc55,	// (0x0002a78e) calenote_swipe_1_pane_g

0x18a2,	// (0x0001c3db) calenote_swipe_1_pane_t1_ParamLimits

0x18a2,	// (0x0001c3db) calenote_swipe_1_pane_t1

0x152e,	// (0x0001c067) calenote_swipe_2_pane_g1_ParamLimits

0x152e,	// (0x0001c067) calenote_swipe_2_pane_g1

0x18c1,	// (0x0001c3fa) calenote_swipe_2_pane_g2_ParamLimits

0x18c1,	// (0x0001c3fa) calenote_swipe_2_pane_g2

0x0001,

0xfc5a,	// (0x0002a793) calenote_swipe_2_pane_g_ParamLimits

0xfc5a,	// (0x0002a793) calenote_swipe_2_pane_g

0x18cd,	// (0x0001c406) calenote_swipe_2_pane_t1_ParamLimits

0x18cd,	// (0x0001c406) calenote_swipe_2_pane_t1

0xbead,	// (0x000269e6) main_mup_navstr_pane

0x7e0e,	// (0x00022947) main_mup3_pane_t7_ParamLimits

0x7e0e,	// (0x00022947) main_mup3_pane_t7

0x4230,	// (0x0001ed69) main_mp4_pane_g6_ParamLimits

0x4230,	// (0x0001ed69) main_mp4_pane_g6

0x457d,	// (0x0001f0b6) main_image3_pane_t4_ParamLimits

0x457d,	// (0x0001f0b6) main_image3_pane_t4

0xa1d2,	// (0x00024d0b) popup_navstr_preview_pane_ParamLimits

0xa1d2,	// (0x00024d0b) popup_navstr_preview_pane

0xa1de,	// (0x00024d17) scroll_navstr_pane_ParamLimits

0xa1de,	// (0x00024d17) scroll_navstr_pane

0xbead,	// (0x000269e6) bg_popup_preview_window_pane_cp04

0x18f4,	// (0x0001c42d) popup_navstr_preview_pane_t1

0xa1ea,	// (0x00024d23) scroll_navstr_pane_g1_ParamLimits

0xa1ea,	// (0x00024d23) scroll_navstr_pane_g1

0xa1f7,	// (0x00024d30) scroll_navstr_pane_t1_ParamLimits

0xa1f7,	// (0x00024d30) scroll_navstr_pane_t1

0x188d,	// (0x0001c3c6) bg_button_pane_cp014

0x188d,	// (0x0001c3c6) bg_button_pane_cp030

0x9c1c,	// (0x00024755) list_double_fisheye_pane_g4_ParamLimits

0x9c1c,	// (0x00024755) list_double_fisheye_pane_g4

0x9c28,	// (0x00024761) list_double_fisheye_pane_g5_ParamLimits

0x9c28,	// (0x00024761) list_double_fisheye_pane_g5

0x069d,	// (0x0001b1d6) sp_fs_scroll_pane_cp03

0x1647,	// (0x0001c180) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1653,	// (0x0001c18c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc03,	// (0x0002a73c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9dbe,	// (0x000248f7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x181a,	// (0x0001c353) sp_fs_scroll_pane_cp02

0xc744,	// (0x0002727d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc744,	// (0x0002727d) popup_sp_fs_calendar_preview_list_single_pane

0xbead,	// (0x000269e6) main_cam6_pano_pane

0x3d85,	// (0x0001e8be) main_mup3_pane_ParamLimits

0xbead,	// (0x000269e6) main_phacti_pane

0x99cc,	// (0x00024505) bg_button_pane_cp11

0x99e4,	// (0x0002451d) main_mobtv_info_pane_g2_ParamLimits

0x99e4,	// (0x0002451d) main_mobtv_info_pane_g2

0x0001,

0xfb63,	// (0x0002a69c) main_mobtv_info_pane_g_ParamLimits

0xfb63,	// (0x0002a69c) main_mobtv_info_pane_g

0xc60a,	// (0x00027143) sc_clock_pane_t5_ParamLimits

0xc60a,	// (0x00027143) sc_clock_pane_t5

0xd3a2,	// (0x00027edb) main_radioblah_pane_g1_ParamLimits

0xd38e,	// (0x00027ec7) main_radioblah_pane_t3_ParamLimits

0xd38e,	// (0x00027ec7) main_radioblah_pane_t3

0xd38e,	// (0x00027ec7) main_radioblah_pane_t4_ParamLimits

0xd38e,	// (0x00027ec7) main_radioblah_pane_t4

0xc5a0,	// (0x000270d9) main_radioblah_text_pane_ParamLimits

0xc5a0,	// (0x000270d9) main_radioblah_text_pane

0x1426,	// (0x0001bf5f) main_radioblah_info_pane_g1_ParamLimits

0x146a,	// (0x0001bfa3) main_radioblah_info_pane_t4_ParamLimits

0x146a,	// (0x0001bfa3) main_radioblah_info_pane_t4

0xc29b,	// (0x00026dd4) main_sp_fs_calendar_pane

0xa209,	// (0x00024d42) main_phacti_pane_g1

0xa211,	// (0x00024d4a) phacti_note_pane_ParamLimits

0xa211,	// (0x00024d4a) phacti_note_pane

0x190b,	// (0x0001c444) phacti_term_pane_ParamLimits

0x190b,	// (0x0001c444) phacti_term_pane

0x1920,	// (0x0001c459) phacti_note_pane_t1_ParamLimits

0x1920,	// (0x0001c459) phacti_note_pane_t1

0x1937,	// (0x0001c470) phacti_term_pane_g1

0x193f,	// (0x0001c478) phacti_term_pane_t1_ParamLimits

0x193f,	// (0x0001c478) phacti_term_pane_t1

0x1969,	// (0x0001c4a2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc7e3,	// (0x0002731c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc64,	// (0x0002a79d) popup_sp_fs_calendar_preview_list_single_pane_g

0x1971,	// (0x0001c4aa) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1971,	// (0x0001c4aa) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1987,	// (0x0001c4c0) aid_popup_sp_fs_bg_corner_pane

0xc5ec,	// (0x00027125) popup_sp_fs_calendar_preview_bg_pane_g1

0xbead,	// (0x000269e6) popup_sp_fs_calendar_preview_bg_pane

0x198f,	// (0x0001c4c8) popup_sp_fs_calendar_preview_list_pane

0xd380,	// (0x00027eb9) bg_main_sp_fs_cale_pane_ParamLimits

0xd380,	// (0x00027eb9) bg_main_sp_fs_cale_pane

0x19a0,	// (0x0001c4d9) listscroll_cale_mrui_pane_ParamLimits

0x19a0,	// (0x0001c4d9) listscroll_cale_mrui_pane

0x19b5,	// (0x0001c4ee) listscroll_sp_fs_schedule_track_pane

0x19be,	// (0x0001c4f7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x19be,	// (0x0001c4f7) main_sp_fs_ctrlbar_pane_cp01

0x19d1,	// (0x0001c50a) main_sp_fs_ribbon_pane

0x19d9,	// (0x0001c512) popup_sp_fs_cale_preview_window

0xa274,	// (0x00024dad) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa274,	// (0x00024dad) list_single_sp_fs_schedule_track_pane

0xc5a0,	// (0x000270d9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc5a0,	// (0x000270d9) bg_sp_fs_highlight_list_pane_cp03

0xa294,	// (0x00024dcd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa294,	// (0x00024dcd) list_single_sp_fs_schedule_track_pane_g1

0xa2a0,	// (0x00024dd9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2a0,	// (0x00024dd9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc69,	// (0x0002a7a2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc69,	// (0x0002a7a2) list_single_sp_fs_schedule_track_pane_g

0xa2ac,	// (0x00024de5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa2ac,	// (0x00024de5) list_single_sp_fs_schedule_track_pane_t1

0xa2c4,	// (0x00024dfd) sp_fs_schedule_track_pane_ParamLimits

0xa2c4,	// (0x00024dfd) sp_fs_schedule_track_pane

0x19eb,	// (0x0001c524) sp_fs_schedule_track_pane_g1

0x19f3,	// (0x0001c52c) sp_fs_schedule_track_pane_g2

0x19fb,	// (0x0001c534) sp_fs_schedule_track_pane_g3

0x1a03,	// (0x0001c53c) sp_fs_schedule_track_pane_g4

0x1a0b,	// (0x0001c544) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6e,	// (0x0002a7a7) sp_fs_schedule_track_pane_g

0x03de,	// (0x0001af17) bg_sp_fs_schedule_viewer_highlight_g1

0xca3c,	// (0x00027575) bg_sp_fs_schedule_viewer_highlight_g2

0x03e6,	// (0x0001af1f) bg_sp_fs_schedule_viewer_highlight_g3

0x03ee,	// (0x0001af27) bg_sp_fs_schedule_viewer_highlight_g4

0x06c5,	// (0x0001b1fe) bg_sp_fs_schedule_viewer_highlight_g5

0x03fe,	// (0x0001af37) bg_sp_fs_schedule_viewer_highlight_g6

0x0406,	// (0x0001af3f) bg_sp_fs_schedule_viewer_highlight_g7

0x040e,	// (0x0001af47) bg_sp_fs_schedule_viewer_highlight_g8

0xca1c,	// (0x00027555) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc79,	// (0x0002a7b2) bg_sp_fs_schedule_viewer_highlight_g

0xbead,	// (0x000269e6) bg_main_sp_fs_ribbon_pane

0xa2d4,	// (0x00024e0d) main_sp_fs_ribbon_pane_g1

0x1a13,	// (0x0001c54c) main_sp_fs_ribbon_pane_t1

0xa2dd,	// (0x00024e16) main_sp_fs_ribbon_pane_t2

0x1a22,	// (0x0001c55b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8c,	// (0x0002a7c5) main_sp_fs_ribbon_pane_t

0x1a31,	// (0x0001c56a) main_sp_fs_ribbon_scheduler_pane

0x1a39,	// (0x0001c572) bg_main_sp_fs_ribbon_pane_g1

0x1a42,	// (0x0001c57b) bg_main_sp_fs_ribbon_pane_g2

0x1a4b,	// (0x0001c584) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc93,	// (0x0002a7cc) bg_main_sp_fs_ribbon_pane_g

0x1a53,	// (0x0001c58c) main_sp_fs_ribbon_scheduler_pane_g1

0x1a5c,	// (0x0001c595) main_sp_fs_ribbon_scheduler_pane_g2

0x1a65,	// (0x0001c59e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9a,	// (0x0002a7d3) main_sp_fs_ribbon_scheduler_pane_g

0x1a6e,	// (0x0001c5a7) list_cale_mrui_pane

0xa2ec,	// (0x00024e25) sp_fs_scroll_pane_cp07_ParamLimits

0xa2ec,	// (0x00024e25) sp_fs_scroll_pane_cp07

0xa308,	// (0x00024e41) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa308,	// (0x00024e41) bg_sp_fs_schedule_viewer_highlight

0x1a7b,	// (0x0001c5b4) list_single_sp_fs_schedule_track_pane_cp01

0x1a83,	// (0x0001c5bc) list_sp_fs_schedule_track_pane

0x1a8b,	// (0x0001c5c4) sp_fs_scroll_pane_cp06_ParamLimits

0x1a8b,	// (0x0001c5c4) sp_fs_scroll_pane_cp06

0xc5ec,	// (0x00027125) bgmain_sp_fs_calendar_pane_g1

0xa315,	// (0x00024e4e) list_single_cale_mrui_pane_ParamLimits

0xa315,	// (0x00024e4e) list_single_cale_mrui_pane

0x1a9d,	// (0x0001c5d6) list_single_cale_mrui_row_pane_ParamLimits

0x1a9d,	// (0x0001c5d6) list_single_cale_mrui_row_pane

0x1aaa,	// (0x0001c5e3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1aaa,	// (0x0001c5e3) list_single_cale_mrui_row_pane_g1

0x1aef,	// (0x0001c628) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1aef,	// (0x0001c628) list_single_cale_mrui_row_pane_t1

0xa33f,	// (0x00024e78) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa33f,	// (0x00024e78) list_single_cale_mrui_row_pane_t2

0x1b01,	// (0x0001c63a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1b01,	// (0x0001c63a) list_single_cale_mrui_row_pane_t3

0x1b30,	// (0x0001c669) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1b30,	// (0x0001c669) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca8,	// (0x0002a7e1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca8,	// (0x0002a7e1) list_single_cale_mrui_row_pane_t

0xa3a5,	// (0x00024ede) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa3a5,	// (0x00024ede) list_single_cmail_header_editor_pane_bg_cp01

0xa3cd,	// (0x00024f06) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa3cd,	// (0x00024f06) list_single_cmail_header_editor_pane_bg_cp02

0x1b5f,	// (0x0001c698) main_radioblah_text_pane_t1_ParamLimits

0x1b5f,	// (0x0001c698) main_radioblah_text_pane_t1

0x1b79,	// (0x0001c6b2) cam6_indi_pane_cp01

0x1b81,	// (0x0001c6ba) cam6_mode_pane_cp01

0x1b89,	// (0x0001c6c2) cam6_pano_pane

0x1b92,	// (0x0001c6cb) cam6_zoom_pane_cp01

0x1b9a,	// (0x0001c6d3) cam6_pano_image_pane

0x1ba5,	// (0x0001c6de) cam6_pano_pane_g1

0x11e2,	// (0x0001bd1b) cam6_pano_pane_g2

0x1bae,	// (0x0001c6e7) cam6_pano_pane_g3

0x1bb7,	// (0x0001c6f0) cam6_pano_pane_g4

0xeecc,	// (0x00029a05) cam6_pano_pane_g5

0x1bc0,	// (0x0001c6f9) cam6_pano_pane_g6

0x1bca,	// (0x0001c703) cam6_pano_pane_g7

0x1bd2,	// (0x0001c70b) cam6_pano_pane_g8

0x1bdb,	// (0x0001c714) cam6_pano_pane_g9

0x0008,

0xfcb1,	// (0x0002a7ea) cam6_pano_pane_g

0xbead,	// (0x000269e6) main_browser_tag_pane

0x18ec,	// (0x0001c425) grid_navstr_albumart_pane

0x1be6,	// (0x0001c71f) cell_navstr_albumart_pane_ParamLimits

0x1be6,	// (0x0001c71f) cell_navstr_albumart_pane

0x1c06,	// (0x0001c73f) cell_navstr_albumart_pane_g1

0xe3af,	// (0x00028ee8) cell_navstr_albumart_pane_g2

0xe3bf,	// (0x00028ef8) cell_navstr_albumart_pane_g3

0xe3b7,	// (0x00028ef0) cell_navstr_albumart_pane_g4

0x0003,

0xfcc4,	// (0x0002a7fd) cell_navstr_albumart_pane_g

0xa3e9,	// (0x00024f22) bt_list_pane_ParamLimits

0xa3e9,	// (0x00024f22) bt_list_pane

0xa409,	// (0x00024f42) bt_list_pane_t1

0xa418,	// (0x00024f51) bt_list_pane_t2

0x0001,

0xfccd,	// (0x0002a806) bt_list_pane_t

0xbead,	// (0x000269e6) main_cale_prevew_pane

0xa427,	// (0x00024f60) popup_cale_preview_window_ParamLimits

0xa427,	// (0x00024f60) popup_cale_preview_window

0xc29b,	// (0x00026dd4) bg_popup_preview_window_pane_cp05_ParamLimits

0xc29b,	// (0x00026dd4) bg_popup_preview_window_pane_cp05

0x1c0e,	// (0x0001c747) list_cale_preview_pane_ParamLimits

0x1c0e,	// (0x0001c747) list_cale_preview_pane

0xa440,	// (0x00024f79) list_double_cale_preview_pane_ParamLimits

0xa440,	// (0x00024f79) list_double_cale_preview_pane

0xa452,	// (0x00024f8b) list_single_cale_preview_pane_ParamLimits

0xa452,	// (0x00024f8b) list_single_cale_preview_pane

0xa468,	// (0x00024fa1) list_single_cale_preview_pane_g1

0xa470,	// (0x00024fa9) list_single_cale_preview_pane_t1_ParamLimits

0xa470,	// (0x00024fa9) list_single_cale_preview_pane_t1

0xa485,	// (0x00024fbe) list_double_cale_preview_pane_g1

0xa48d,	// (0x00024fc6) list_double_cale_preview_pane_t1_ParamLimits

0xa48d,	// (0x00024fc6) list_double_cale_preview_pane_t1

0xa4a2,	// (0x00024fdb) list_double_cale_preview_pane_t2_ParamLimits

0xa4a2,	// (0x00024fdb) list_double_cale_preview_pane_t2

0x0001,

0xfcd2,	// (0x0002a80b) list_double_cale_preview_pane_t_ParamLimits

0xfcd2,	// (0x0002a80b) list_double_cale_preview_pane_t

0xbead,	// (0x000269e6) main_ezdial_pane

0xc29b,	// (0x00026dd4) main_sp_fs_email_pane_ParamLimits

0x9d23,	// (0x0002485c) cmail_ddmenu_btn01_pane_ParamLimits

0x9d23,	// (0x0002485c) cmail_ddmenu_btn01_pane

0x9d40,	// (0x00024879) cmail_ddmenu_btn02_pane_ParamLimits

0x9d40,	// (0x00024879) cmail_ddmenu_btn02_pane

0x9d5e,	// (0x00024897) cmail_ddmenu_btn03_pane_ParamLimits

0x9d5e,	// (0x00024897) cmail_ddmenu_btn03_pane

0x9df9,	// (0x00024932) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e0f,	// (0x00024948) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa09a,	// (0x00024bd3) list_cmail_body_pane_ParamLimits

0x1830,	// (0x0001c369) bg_button_pane_cp12

0x1845,	// (0x0001c37e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1845,	// (0x0001c37e) list_single_cmail_header_detail_pane_g3

0x1852,	// (0x0001c38b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1852,	// (0x0001c38b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc50,	// (0x0002a789) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc50,	// (0x0002a789) list_single_cmail_header_detail_pane_t

0x1954,	// (0x0001c48d) phacti_term_pane_t2_ParamLimits

0x1954,	// (0x0001c48d) phacti_term_pane_t2

0x0001,

0xfc5f,	// (0x0002a798) phacti_term_pane_t_ParamLimits

0xfc5f,	// (0x0002a798) phacti_term_pane_t

0x1c1a,	// (0x0001c753) aid_size_list_single_double

0xa4ba,	// (0x00024ff3) popup_ezdial_listscroll_window

0x1c26,	// (0x0001c75f) popup_number_entry_window_cp01

0xc7fc,	// (0x00027335) bg_popup_call_pane_cp09

0x1c33,	// (0x0001c76c) ezdial_list_pane

0x1c3b,	// (0x0001c774) scroll_pane_cp23

0xe4e8,	// (0x00029021) bg_button_pane_cp028_ParamLimits

0xe4e8,	// (0x00029021) bg_button_pane_cp028

0xa4d3,	// (0x0002500c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa4d3,	// (0x0002500c) cmail_ddmenu_btn01_pane_g1

0xa4e3,	// (0x0002501c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa4e3,	// (0x0002501c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd7,	// (0x0002a810) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd7,	// (0x0002a810) cmail_ddmenu_btn01_pane_g

0x1c43,	// (0x0001c77c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1c43,	// (0x0001c77c) cmail_ddmenu_btn01_pane_t1

0xd380,	// (0x00027eb9) bg_button_pane_cp029_ParamLimits

0xd380,	// (0x00027eb9) bg_button_pane_cp029

0xa4ef,	// (0x00025028) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa4ef,	// (0x00025028) cmail_ddmenu_btn02_pane_g1

0xa507,	// (0x00025040) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa507,	// (0x00025040) cmail_ddmenu_btn02_pane_t1

0xc5a0,	// (0x000270d9) bg_button_pane_cp031_ParamLimits

0xc5a0,	// (0x000270d9) bg_button_pane_cp031

0xa4ef,	// (0x00025028) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa4ef,	// (0x00025028) cmail_ddmenu_btn03_pane_g1

0xa507,	// (0x00025040) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa507,	// (0x00025040) cmail_ddmenu_btn03_pane_t1

0xc5f6,	// (0x0002712f) cell_dialer2_keypad_pane_t1_ParamLimits

0xedc1,	// (0x000298fa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xedc1,	// (0x000298fa) cell_dialer2_keypad_pane_t1_copy1

0x980d,	// (0x00024346) ncimui_group_button_pane

0xc29b,	// (0x00026dd4) main_sp_fs_calendar_pane_ParamLimits

0xa0c1,	// (0x00024bfa) list_single_cmail_header_caption_pane_ParamLimits

0x1997,	// (0x0001c4d0) aid_recal_txt_sm_pane

0xbead,	// (0x000269e6) mian_recal_day_pane

0x19d9,	// (0x0001c512) popup_sp_fs_cale_preview_window_ParamLimits

0x1c59,	// (0x0001c792) list_recal_day_pane

0x1c9b,	// (0x0001c7d4) list_single_recal_day_pane_ParamLimits

0x1c9b,	// (0x0001c7d4) list_single_recal_day_pane

0x1cad,	// (0x0001c7e6) list_single_recal_day_pane_g1_ParamLimits

0x1cad,	// (0x0001c7e6) list_single_recal_day_pane_g1

0x1cb9,	// (0x0001c7f2) list_single_recal_day_pane_g2_ParamLimits

0x1cb9,	// (0x0001c7f2) list_single_recal_day_pane_g2

0x1cc5,	// (0x0001c7fe) list_single_recal_day_pane_g3_ParamLimits

0x1cc5,	// (0x0001c7fe) list_single_recal_day_pane_g3

0xa52b,	// (0x00025064) list_single_recal_day_pane_g4_ParamLimits

0xa52b,	// (0x00025064) list_single_recal_day_pane_g4

0x1cd1,	// (0x0001c80a) list_single_recal_day_pane_g5_ParamLimits

0x1cd1,	// (0x0001c80a) list_single_recal_day_pane_g5

0x1cdd,	// (0x0001c816) list_single_recal_day_pane_g6_ParamLimits

0x1cdd,	// (0x0001c816) list_single_recal_day_pane_g6

0x0004,

0xfce6,	// (0x0002a81f) list_single_recal_day_pane_g_ParamLimits

0xfce6,	// (0x0002a81f) list_single_recal_day_pane_g

0x1cf1,	// (0x0001c82a) list_single_recal_day_pane_t1

0x1d03,	// (0x0001c83c) list_single_recal_day_pane_t2

0x0001,

0xfcf1,	// (0x0002a82a) list_single_recal_day_pane_t

0xa543,	// (0x0002507c) ncimui_query_button_pane_ParamLimits

0xa543,	// (0x0002507c) ncimui_query_button_pane

0xa553,	// (0x0002508c) ncimui_query_button_pane_t1_ParamLimits

0xa553,	// (0x0002508c) ncimui_query_button_pane_t1

0x1d15,	// (0x0001c84e) ncimui_query_button_pane_t2_ParamLimits

0x1d15,	// (0x0001c84e) ncimui_query_button_pane_t2

0x0001,

0xfcf6,	// (0x0002a82f) ncimui_query_button_pane_t_ParamLimits

0xfcf6,	// (0x0002a82f) ncimui_query_button_pane_t

0xa566,	// (0x0002509f) query_button_pane_ParamLimits

0xa566,	// (0x0002509f) query_button_pane

0xbead,	// (0x000269e6) bg_button_pane_cp0028

0x1d28,	// (0x0001c861) query_button_pane_t1

0x3da1,	// (0x0001e8da) main_tport_pane_ParamLimits

0x9fa4,	// (0x00024add) bg_popup_window_pane_cp01_ParamLimits

0x9fa4,	// (0x00024add) bg_popup_window_pane_cp01

0x9fb2,	// (0x00024aeb) heading_pane_cp08_ParamLimits

0x9fb2,	// (0x00024aeb) heading_pane_cp08

0x9fc0,	// (0x00024af9) heading_pane_cp07_ParamLimits

0x9fc0,	// (0x00024af9) heading_pane_cp07

0xa02f,	// (0x00024b68) cell_tport_appsw_pane_g2

0x0002,

0xfc3d,	// (0x0002a776) cell_tport_appsw_pane_g

0x6d12,	// (0x0002184b) input_candi_list_open_g1

0xcc07,	// (0x00027740) list_cale_time_pane_g6_ParamLimits

0xcc07,	// (0x00027740) list_cale_time_pane_g6

0x7834,	// (0x0002236d) aid_size_touch_calib_1_ParamLimits

0x7834,	// (0x0002236d) aid_size_touch_calib_1

0x7840,	// (0x00022379) aid_size_touch_calib_2_ParamLimits

0x7840,	// (0x00022379) aid_size_touch_calib_2

0x784e,	// (0x00022387) aid_size_touch_calib_3_ParamLimits

0x784e,	// (0x00022387) aid_size_touch_calib_3

0x785e,	// (0x00022397) aid_size_touch_calib_4_ParamLimits

0x785e,	// (0x00022397) aid_size_touch_calib_4

0x786c,	// (0x000223a5) main_touch_calib_button_group_pane_ParamLimits

0x786c,	// (0x000223a5) main_touch_calib_button_group_pane

0x787a,	// (0x000223b3) main_touch_calib_pane_g1_ParamLimits

0x7886,	// (0x000223bf) main_touch_calib_pane_g2_ParamLimits

0x7892,	// (0x000223cb) main_touch_calib_pane_g3_ParamLimits

0x789e,	// (0x000223d7) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x0002a1c2) main_touch_calib_pane_g_ParamLimits

0x78aa,	// (0x000223e3) main_touch_calib_pane_t1_ParamLimits

0x78c3,	// (0x000223fc) main_touch_calib_pane_t2_ParamLimits

0x78dc,	// (0x00022415) main_touch_calib_pane_t3_ParamLimits

0x78f2,	// (0x0002242b) main_touch_calib_pane_t4_ParamLimits

0x7908,	// (0x00022441) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x0002a1cb) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x000297b3) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x000297b3) list_single_fp_cale_pane_g3

0x3d85,	// (0x0001e8be) bg_button_pane_cp012_ParamLimits

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp03_ParamLimits

0x4c33,	// (0x0001f76c) cell_vitu2_function_top_pane_g1_ParamLimits

0x3d85,	// (0x0001e8be) bg_vkb2_func_pane_cp04_ParamLimits

0x9795,	// (0x000242ce) main_ncimui_button_group_pane_ParamLimits

0x9795,	// (0x000242ce) main_ncimui_button_group_pane

0x97fb,	// (0x00024334) main_ncimui_pane_t3_ParamLimits

0x97fb,	// (0x00024334) main_ncimui_pane_t3

0x1902,	// (0x0001c43b) phacti_button_group_pane

0x1c1a,	// (0x0001c753) aid_size_list_single_double_ParamLimits

0xa4ba,	// (0x00024ff3) popup_ezdial_listscroll_window_ParamLimits

0x1c26,	// (0x0001c75f) popup_number_entry_window_cp01_ParamLimits

0xa573,	// (0x000250ac) phacti_button_pane_ParamLimits

0xa573,	// (0x000250ac) phacti_button_pane

0xbead,	// (0x000269e6) bg_button_pane_cp14

0x1d36,	// (0x0001c86f) phacti_button_pane_t1

0xa584,	// (0x000250bd) main_touch_calib_button_pane_ParamLimits

0xa584,	// (0x000250bd) main_touch_calib_button_pane

0xc64a,	// (0x00027183) bg_button_pane_cp18_ParamLimits

0xc64a,	// (0x00027183) bg_button_pane_cp18

0x1d44,	// (0x0001c87d) main_touch_calib_button_pane_t1_ParamLimits

0x1d44,	// (0x0001c87d) main_touch_calib_button_pane_t1

0x1d5a,	// (0x0001c893) main_touch_calib_button_pane_t2_ParamLimits

0x1d5a,	// (0x0001c893) main_touch_calib_button_pane_t2

0x0001,

0xfcfb,	// (0x0002a834) main_touch_calib_button_pane_t_ParamLimits

0xfcfb,	// (0x0002a834) main_touch_calib_button_pane_t

0xbead,	// (0x000269e6) cell_ncimui_button_pane

0xbead,	// (0x000269e6) bg_button_pane_cp032

0x1d78,	// (0x0001c8b1) cell_ncimui_button_pane_t1

0x4490,	// (0x0001efc9) image3_infobar_pane_ParamLimits

0x4490,	// (0x0001efc9) image3_infobar_pane

0x9b3d,	// (0x00024676) fs_bigclock_status_pane_ParamLimits

0x9b3d,	// (0x00024676) fs_bigclock_status_pane

0x9b4a,	// (0x00024683) main_fs_bigclock_clock_pane_ParamLimits

0x9b4a,	// (0x00024683) main_fs_bigclock_clock_pane

0x9b5e,	// (0x00024697) main_fs_bigclock_indi_pane_ParamLimits

0x9b5e,	// (0x00024697) main_fs_bigclock_indi_pane

0x9b86,	// (0x000246bf) main_fs_bigclock_swipe_pane_ParamLimits

0x9b86,	// (0x000246bf) main_fs_bigclock_swipe_pane

0xbead,	// (0x000269e6) main_fs_clock_dumped_data

0x12ef,	// (0x0001be28) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x12ef,	// (0x0001be28) list_single_fs_bigclock_indicator_pane_g1

0x130a,	// (0x0001be43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x130a,	// (0x0001be43) list_single_fs_bigclock_indicator_pane_g2

0x1324,	// (0x0001be5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1324,	// (0x0001be5d) list_single_fs_bigclock_indicator_pane_g3

0x133e,	// (0x0001be77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x133e,	// (0x0001be77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb97,	// (0x0002a6d0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb97,	// (0x0002a6d0) list_single_fs_bigclock_indicator_pane_g

0x1369,	// (0x0001bea2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1369,	// (0x0001bea2) list_single_fs_bigclock_indicator_pane_t1

0x1391,	// (0x0001beca) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1391,	// (0x0001beca) list_single_fs_bigclock_indicator_pane_t2

0x13b9,	// (0x0001bef2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x13b9,	// (0x0001bef2) list_single_fs_bigclock_indicator_pane_t3

0x13e1,	// (0x0001bf1a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x13e1,	// (0x0001bf1a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba2,	// (0x0002a6db) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba2,	// (0x0002a6db) list_single_fs_bigclock_indicator_pane_t

0x1d86,	// (0x0001c8bf) image3_infobar_fav_pane_ParamLimits

0x1d86,	// (0x0001c8bf) image3_infobar_fav_pane

0x1d96,	// (0x0001c8cf) image3_infobar_loc_pane_ParamLimits

0x1d96,	// (0x0001c8cf) image3_infobar_loc_pane

0x1daa,	// (0x0001c8e3) image3_infobar_time_pane_ParamLimits

0x1daa,	// (0x0001c8e3) image3_infobar_time_pane

0xc5ec,	// (0x00027125) image3_infobar_time_pane_g1

0x1dba,	// (0x0001c8f3) image3_infobar_time_pane_t1

0xc5ec,	// (0x00027125) image3_infobar_loc_pane_g1

0x1dc8,	// (0x0001c901) image3_infobar_loc_pane_g2

0x0001,

0xfd00,	// (0x0002a839) image3_infobar_loc_pane_g

0x1dd0,	// (0x0001c909) image3_infobar_loc_pane_t1

0xc5ec,	// (0x00027125) image3_infobar_fav_pane_g1

0x1dde,	// (0x0001c917) image3_infobar_fav_pane_g2

0x0001,

0xfd05,	// (0x0002a83e) image3_infobar_fav_pane_g

0x1de6,	// (0x0001c91f) fs_bigclock_status_battery_pane

0x1def,	// (0x0001c928) fs_bigclock_status_signal_pane

0x1df8,	// (0x0001c931) fs_bigclock_status_title_pane

0x1e01,	// (0x0001c93a) fs_bigclock_status_signal_pane_g1

0x1e0a,	// (0x0001c943) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0a,	// (0x0002a843) fs_bigclock_status_signal_pane_g

0x1e12,	// (0x0001c94b) fs_bigclock_status_battery_pane_g1

0x1e1b,	// (0x0001c954) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd0f,	// (0x0002a848) fs_bigclock_status_battery_pane_g

0x1e23,	// (0x0001c95c) fs_bigclock_status_title_pane_t1

0xa594,	// (0x000250cd) main_fs_bigclock_clock_pane_g1

0xa594,	// (0x000250cd) main_fs_bigclock_clock_pane_g2

0xa5a1,	// (0x000250da) main_fs_bigclock_clock_pane_g3

0xa5a1,	// (0x000250da) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd14,	// (0x0002a84d) main_fs_bigclock_clock_pane_g

0xa5ad,	// (0x000250e6) main_fs_bigclock_clock_pane_t1

0xa5c0,	// (0x000250f9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1d,	// (0x0002a856) main_fs_bigclock_clock_pane_t

0x1e31,	// (0x0001c96a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1e31,	// (0x0001c96a) list_single_fs_bigclock_indicator_pane

0x1e42,	// (0x0001c97b) list_single_fs_bigclock_pane_ParamLimits

0x1e42,	// (0x0001c97b) list_single_fs_bigclock_pane

0x1e68,	// (0x0001c9a1) main_fs_bigclock_indicator_pane_t1

0x1e77,	// (0x0001c9b0) list_single_fs_bigclock_pane_g1

0x1e7f,	// (0x0001c9b8) list_single_fs_bigclock_pane_t1

0xc5ec,	// (0x00027125) main_fs_bigclock_swipe_pane_g1

0x1ec2,	// (0x0001c9fb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2e,	// (0x0002a867) main_fs_bigclock_swipe_pane_g

0x1eca,	// (0x0001ca03) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1eca,	// (0x0001ca03) main_fs_bigclock_swipe_pane_t1

0x6897,	// (0x000213d0) call_type_pane_ParamLimits

0xbead,	// (0x000269e6) main_btmg_pane

0x1ad6,	// (0x0001c60f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ad6,	// (0x0001c60f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca1,	// (0x0002a7da) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca1,	// (0x0002a7da) list_single_cale_mrui_row_pane_g

0x1c82,	// (0x0001c7bb) list_recal_vselct_arw_lo_pane

0x1c8a,	// (0x0001c7c3) list_recal_vselct_arw_up_pane

0x1c92,	// (0x0001c7cb) list_recal_vselct_pane

0xa617,	// (0x00025150) btmg_button_pane

0xa623,	// (0x0002515c) main_btmg_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp044

0x1ee7,	// (0x0001ca20) btmg_button_pane_t1

0xe50d,	// (0x00029046) aid_listscroll_gen

0xc29b,	// (0x00026dd4) main_cntbar_detail_pane

0x1803,	// (0x0001c33c) list_cmail_folder_pane

0x069d,	// (0x0001b1d6) sp_fs_scroll_pane_cp03_ParamLimits

0xa0c1,	// (0x00024bfa) list_single_fs_dyc_pane_cp01_ParamLimits

0xa0c1,	// (0x00024bfa) list_single_fs_dyc_pane_cp01

0x1ef5,	// (0x0001ca2e) aid_size_cmail_indent

0x1efe,	// (0x0001ca37) list_single_dyc_row_pane_cp01

0xa64b,	// (0x00025184) cntbar_detail_list_pane_ParamLimits

0xa64b,	// (0x00025184) cntbar_detail_list_pane

0xa685,	// (0x000251be) main_cntbar_detail_cont_pane_ParamLimits

0xa685,	// (0x000251be) main_cntbar_detail_cont_pane

0x688b,	// (0x000213c4) scroll_pane_cp032_ParamLimits

0x688b,	// (0x000213c4) scroll_pane_cp032

0xa691,	// (0x000251ca) cntbar_detail_list_event_pane_ParamLimits

0xa691,	// (0x000251ca) cntbar_detail_list_event_pane

0xa657,	// (0x00025190) cntbar_detail_list_shct_pane

0xca8a,	// (0x000275c3) aid_list_gen

0x1f07,	// (0x0001ca40) aid_scroll

0x1f10,	// (0x0001ca49) aid_size_touch_scroll_bar

0x9be7,	// (0x00024720) aid_list_double

0x1f19,	// (0x0001ca52) aid_list_single

0x1f19,	// (0x0001ca52) aid_list_single_lg

0x1f22,	// (0x0001ca5b) aid_list_z_g_a_sm

0x1f2a,	// (0x0001ca63) aid_list_z_g_d

0x1f32,	// (0x0001ca6b) aid_txt_z_prm

0xa6a5,	// (0x000251de) aid_txt_z_prm_cp01

0xa6b3,	// (0x000251ec) aid_txt_z_sec

0xa6c1,	// (0x000251fa) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa6c1,	// (0x000251fa) main_cntbar_detail_cont_pane_g1

0xa6ce,	// (0x00025207) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa6ce,	// (0x00025207) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd33,	// (0x0002a86c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd33,	// (0x0002a86c) main_cntbar_detail_cont_pane_g

0x1f40,	// (0x0001ca79) main_cntbar_detail_cont_pane_t1

0x1f4e,	// (0x0001ca87) main_cntbar_detail_cont_pane_t2

0x1f5c,	// (0x0001ca95) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd38,	// (0x0002a871) main_cntbar_detail_cont_pane_t

0xa6da,	// (0x00025213) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa6da,	// (0x00025213) cell_cntbar_detail_list_shct_pane

0x1f6a,	// (0x0001caa3) cntbar_detail_list_shct_pane_g1

0x1f73,	// (0x0001caac) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd3f,	// (0x0002a878) cntbar_detail_list_shct_pane_g

0xa6ee,	// (0x00025227) cntbar_detail_list_event_pane_g1_ParamLimits

0xa6ee,	// (0x00025227) cntbar_detail_list_event_pane_g1

0xa6fa,	// (0x00025233) cntbar_detail_list_event_pane_g2_ParamLimits

0xa6fa,	// (0x00025233) cntbar_detail_list_event_pane_g2

0x0005,

0xfd44,	// (0x0002a87d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd44,	// (0x0002a87d) cntbar_detail_list_event_pane_g

0xa766,	// (0x0002529f) cntbar_detail_list_event_pane_t1_ParamLimits

0xa766,	// (0x0002529f) cntbar_detail_list_event_pane_t1

0xa77b,	// (0x000252b4) cntbar_detail_list_event_pane_t2_ParamLimits

0xa77b,	// (0x000252b4) cntbar_detail_list_event_pane_t2

0x0002,

0xfd51,	// (0x0002a88a) cntbar_detail_list_event_pane_t_ParamLimits

0xfd51,	// (0x0002a88a) cntbar_detail_list_event_pane_t

0xc5ec,	// (0x00027125) cell_cntbar_detail_list_shct_pane_g1

0xd20d,	// (0x00027d46) navi_pane_mv_g3

0xc29b,	// (0x00026dd4) main_cntbar_detail_pane_ParamLimits

0xbead,	// (0x000269e6) main_notif_wgt_pane

0x415f,	// (0x0001ec98) aid_tch_main_mp4_pane_g4

0x4432,	// (0x0001ef6b) popup_slider_window_cp02

0x1c78,	// (0x0001c7b1) list_recal_day_event_pane

0xa62b,	// (0x00025164) cntbar_detail_btn_pane_ParamLimits

0xa62b,	// (0x00025164) cntbar_detail_btn_pane

0xa63b,	// (0x00025174) cntbar_detail_btn_pane_cp01_ParamLimits

0xa63b,	// (0x00025174) cntbar_detail_btn_pane_cp01

0xa657,	// (0x00025190) cntbar_detail_list_shct_pane_ParamLimits

0xa663,	// (0x0002519c) cntbar_detail_pane_g1_ParamLimits

0xa663,	// (0x0002519c) cntbar_detail_pane_g1

0xa66f,	// (0x000251a8) cntbar_detail_pane_t1_ParamLimits

0xa66f,	// (0x000251a8) cntbar_detail_pane_t1

0xa706,	// (0x0002523f) cntbar_detail_list_event_pane_g3_ParamLimits

0xa706,	// (0x0002523f) cntbar_detail_list_event_pane_g3

0xa71e,	// (0x00025257) cntbar_detail_list_event_pane_g4_ParamLimits

0xa71e,	// (0x00025257) cntbar_detail_list_event_pane_g4

0xa736,	// (0x0002526f) cntbar_detail_list_event_pane_g5_ParamLimits

0xa736,	// (0x0002526f) cntbar_detail_list_event_pane_g5

0xa74e,	// (0x00025287) cntbar_detail_list_event_pane_g6_ParamLimits

0xa74e,	// (0x00025287) cntbar_detail_list_event_pane_g6

0xa790,	// (0x000252c9) cntbar_detail_list_event_pane_t3_ParamLimits

0xa790,	// (0x000252c9) cntbar_detail_list_event_pane_t3

0xa7a2,	// (0x000252db) popup_notif_wgt_window_ParamLimits

0xa7a2,	// (0x000252db) popup_notif_wgt_window

0xa7b2,	// (0x000252eb) popup_submenu_window_cp01_ParamLimits

0xa7b2,	// (0x000252eb) popup_submenu_window_cp01

0xc7fc,	// (0x00027335) bg_popup_window_pane_cp10

0x1f7c,	// (0x0001cab5) listscroll_notif_wgt_pane

0x1f8e,	// (0x0001cac7) list_notif_wgt_window

0x1f97,	// (0x0001cad0) scroll_pane_cp033

0xa7c4,	// (0x000252fd) list_notif_wgt_row_pane_ParamLimits

0xa7c4,	// (0x000252fd) list_notif_wgt_row_pane

0x1fa0,	// (0x0001cad9) aid_size_list_notif_wgt_del

0x1fad,	// (0x0001cae6) list_notif_wgt_row_pane_g1

0x1fb9,	// (0x0001caf2) list_notif_wgt_row_pane_g2

0x1fc8,	// (0x0001cb01) list_notif_wgt_row_pane_g3

0x0002,

0xfd58,	// (0x0002a891) list_notif_wgt_row_pane_g

0x1fd5,	// (0x0001cb0e) list_notif_wgt_row_pane_t1

0x1feb,	// (0x0001cb24) list_notif_wgt_row_pane_t2

0x1ffd,	// (0x0001cb36) list_notif_wgt_row_pane_t3

0x0002,

0xfd5f,	// (0x0002a898) list_notif_wgt_row_pane_t

0x06ed,	// (0x0001b226) list_recal_day_event_pane_g1

0x200f,	// (0x0001cb48) list_recal_day_event_pane_t1

0xbead,	// (0x000269e6) bg_button_pane_cp045

0x201e,	// (0x0001cb57) cntbar_detail_btn_pane_t1

0xd380,	// (0x00027eb9) main_callh_pane_ParamLimits

0xd380,	// (0x00027eb9) main_callh_pane

0xbead,	// (0x000269e6) main_coverflow0_pane

0xbead,	// (0x000269e6) main_wgtman_pane

0x9b9e,	// (0x000246d7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b9e,	// (0x000246d7) main_fs_bigclock_unlock_btn_pane

0xa027,	// (0x00024b60) bg_button_pane_cp16

0xa037,	// (0x00024b70) cell_tport_appsw_pane_g3

0xa7d6,	// (0x0002530f) cf0_flow_pane_ParamLimits

0xa7d6,	// (0x0002530f) cf0_flow_pane

0x202c,	// (0x0001cb65) listscroll_cf0_pane

0x2037,	// (0x0001cb70) main_cf0_pane_g1

0xa7e5,	// (0x0002531e) main_cf0_pane_t1_ParamLimits

0xa7e5,	// (0x0002531e) main_cf0_pane_t1

0xa7f9,	// (0x00025332) main_cf0_pane_t2_ParamLimits

0xa7f9,	// (0x00025332) main_cf0_pane_t2

0x0001,

0xfd6b,	// (0x0002a8a4) main_cf0_pane_t_ParamLimits

0xfd6b,	// (0x0002a8a4) main_cf0_pane_t

0x2049,	// (0x0001cb82) scroll_pane_cp11

0xa80d,	// (0x00025346) cf0_flow_pane_g1

0xa815,	// (0x0002534e) cf0_flow_pane_g2

0x0001,

0xfd70,	// (0x0002a8a9) cf0_flow_pane_g

0xa81d,	// (0x00025356) cf0_flow_pane_t1

0xbead,	// (0x000269e6) main_call6_pane

0xbead,	// (0x000269e6) main_calllock_pane

0x4e66,	// (0x0001f99f) call6_btn_grp_pane_ParamLimits

0x4e66,	// (0x0001f99f) call6_btn_grp_pane

0x4e75,	// (0x0001f9ae) call6_pane_g1_ParamLimits

0x4e75,	// (0x0001f9ae) call6_pane_g1

0x4e85,	// (0x0001f9be) popup_call6_1st_window_ParamLimits

0x4e85,	// (0x0001f9be) popup_call6_1st_window

0x4e93,	// (0x0001f9cc) popup_call6_2nd_window_ParamLimits

0x4e93,	// (0x0001f9cc) popup_call6_2nd_window

0x4ea1,	// (0x0001f9da) cell_call6_btn_pane_ParamLimits

0x4ea1,	// (0x0001f9da) cell_call6_btn_pane

0xc7fc,	// (0x00027335) bg_popup_call2_in_pane_cp03

0x2054,	// (0x0001cb8d) popup_call6_1st_window_g1

0x205c,	// (0x0001cb95) popup_call6_1st_window_g2

0x2064,	// (0x0001cb9d) popup_call6_1st_window_g3

0x0002,

0xfd75,	// (0x0002a8ae) popup_call6_1st_window_g

0x206c,	// (0x0001cba5) popup_call6_1st_window_t1

0x207b,	// (0x0001cbb4) popup_call6_1st_window_t2

0x2089,	// (0x0001cbc2) popup_call6_1st_window_t3

0x0002,

0xfd7c,	// (0x0002a8b5) popup_call6_1st_window_t

0xc7fc,	// (0x00027335) bg_popup_call2_in_pane_cp04

0x2097,	// (0x0001cbd0) popup_call6_2nd_window_g1

0x209f,	// (0x0001cbd8) popup_call6_2nd_window_g2

0x20a7,	// (0x0001cbe0) popup_call6_2nd_window_g3

0x0002,

0xfd83,	// (0x0002a8bc) popup_call6_2nd_window_g

0x20af,	// (0x0001cbe8) popup_call6_2nd_window_t1

0x392d,	// (0x0001e466) bg_button_pane_cp15

0x4eb0,	// (0x0001f9e9) cell_call6_btn_pane_g1

0x4eb9,	// (0x0001f9f2) cell_call6_btn_pane_t1

0xa82b,	// (0x00025364) listscroll_wgtman_pane_ParamLimits

0xa82b,	// (0x00025364) listscroll_wgtman_pane

0xa847,	// (0x00025380) wgtman_btn_pane_ParamLimits

0xa847,	// (0x00025380) wgtman_btn_pane

0xd014,	// (0x00027b4d) aid_scroll_copy1

0x20d6,	// (0x0001cc0f) list_wgtman_pane

0xa87c,	// (0x000253b5) wgtman_btn_pane_g1_ParamLimits

0xa87c,	// (0x000253b5) wgtman_btn_pane_g1

0xa8a4,	// (0x000253dd) wgtman_btn_pane_t1_ParamLimits

0xa8a4,	// (0x000253dd) wgtman_btn_pane_t1

0x20e0,	// (0x0001cc19) wgtman_btn_pane_t2_ParamLimits

0x20e0,	// (0x0001cc19) wgtman_btn_pane_t2

0x0001,

0xfd8a,	// (0x0002a8c3) wgtman_btn_pane_t_ParamLimits

0xfd8a,	// (0x0002a8c3) wgtman_btn_pane_t

0xa8db,	// (0x00025414) listrow_wgtman_pane_ParamLimits

0xa8db,	// (0x00025414) listrow_wgtman_pane

0xa8f6,	// (0x0002542f) listrow_wgtman_pane_g1

0xa903,	// (0x0002543c) listrow_wgtman_pane_g2

0x0001,

0xfd8f,	// (0x0002a8c8) listrow_wgtman_pane_g

0xa921,	// (0x0002545a) listrow_wgtman_pane_t1

0xa939,	// (0x00025472) listrow_wgtman_pane_t2

0x0001,

0xfd94,	// (0x0002a8cd) listrow_wgtman_pane_t

0xa95f,	// (0x00025498) wait_bar_pane_cp09

0x20f7,	// (0x0001cc30) main_calllock_btn_pane

0x2101,	// (0x0001cc3a) main_calllock_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp17

0x20be,	// (0x0001cbf7) main_calllock_btn_pane_g1

0x2109,	// (0x0001cc42) main_calllock_btn_pane_t1

0xbead,	// (0x000269e6) main_dialer3_pane

0xbead,	// (0x000269e6) main_fmrd2_pane

0xc5ec,	// (0x00027125) main_fs_bigclock_unlock_btn_pane_g1

0xa979,	// (0x000254b2) main_fs_bigclock_unlock_btn_pane_t1

0xa987,	// (0x000254c0) area_fmrd2_info_pane_ParamLimits

0xa987,	// (0x000254c0) area_fmrd2_info_pane

0xa995,	// (0x000254ce) area_fmrd2_visual_pane_ParamLimits

0xa995,	// (0x000254ce) area_fmrd2_visual_pane

0xa9a3,	// (0x000254dc) fmrd2_indi_pane_ParamLimits

0xa9a3,	// (0x000254dc) fmrd2_indi_pane

0xa9b0,	// (0x000254e9) area_fmrd2_visual_pane_g1

0xa9b8,	// (0x000254f1) area_fmrd2_visual_pane_t1

0xa9c8,	// (0x00025501) area_fmrd2_visual_pane_t2

0xa9d8,	// (0x00025511) area_fmrd2_visual_pane_t3

0x0002,

0xfd9e,	// (0x0002a8d7) area_fmrd2_visual_pane_t

0xa9e8,	// (0x00025521) area_fmrd2_info_pane_g1

0xa9f0,	// (0x00025529) area_fmrd2_info_pane_t1

0xaa00,	// (0x00025539) area_fmrd2_info_pane_t2

0xaa10,	// (0x00025549) area_fmrd2_info_pane_t3

0xaa20,	// (0x00025559) area_fmrd2_info_pane_t4

0x0003,

0xfda5,	// (0x0002a8de) area_fmrd2_info_pane_t

0xaa2e,	// (0x00025567) fmrd2_indi_pane_t1

0xaa3e,	// (0x00025577) fmrd2_indi_pane_t2

0xaa4e,	// (0x00025587) fmrd2_indi_pane_t3

0x0002,

0xfdae,	// (0x0002a8e7) fmrd2_indi_pane_t

0x134d,	// (0x0001be86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x134d,	// (0x0001be86) list_single_fs_bigclock_indicator_pane_g5

0x13fe,	// (0x0001bf37) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x13fe,	// (0x0001bf37) list_single_fs_bigclock_indicator_pane_t5

0xa227,	// (0x00024d60) aid_cell_bcale_month_pane_ParamLimits

0xa227,	// (0x00024d60) aid_cell_bcale_month_pane

0xa245,	// (0x00024d7e) bcale_month_pane_ParamLimits

0xa245,	// (0x00024d7e) bcale_month_pane

0xa263,	// (0x00024d9c) bcale_preview_pane_ParamLimits

0xa263,	// (0x00024d9c) bcale_preview_pane

0x1e7f,	// (0x0001c9b8) list_single_fs_bigclock_pane_t1_ParamLimits

0x1e9e,	// (0x0001c9d7) list_single_fs_bigclock_pane_t2_ParamLimits

0x1e9e,	// (0x0001c9d7) list_single_fs_bigclock_pane_t2

0x0001,

0xfd29,	// (0x0002a862) list_single_fs_bigclock_pane_t_ParamLimits

0xfd29,	// (0x0002a862) list_single_fs_bigclock_pane_t

0xa971,	// (0x000254aa) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd99,	// (0x0002a8d2) main_fs_bigclock_unlock_btn_pane_g

0xaa5c,	// (0x00025595) aid_dia3_key_size_ParamLimits

0xaa5c,	// (0x00025595) aid_dia3_key_size

0xaa68,	// (0x000255a1) aid_dia3_listrow_size_ParamLimits

0xaa68,	// (0x000255a1) aid_dia3_listrow_size

0xaa78,	// (0x000255b1) dia3_keypad_fun_pane_ParamLimits

0xaa78,	// (0x000255b1) dia3_keypad_fun_pane

0xaa8a,	// (0x000255c3) dia3_keypad_num_pane_ParamLimits

0xaa8a,	// (0x000255c3) dia3_keypad_num_pane

0xaa9c,	// (0x000255d5) dia3_listscroll_pane_ParamLimits

0xaa9c,	// (0x000255d5) dia3_listscroll_pane

0xaaaa,	// (0x000255e3) dia3_numentry_pane_ParamLimits

0xaaaa,	// (0x000255e3) dia3_numentry_pane

0x212a,	// (0x0001cc63) dia3_list_pane

0x2135,	// (0x0001cc6e) scroll_pane_cp12

0xbead,	// (0x000269e6) bg_dia3_numentry_pane

0xaab8,	// (0x000255f1) dia3_numentry_pane_t1

0xaac7,	// (0x00025600) cell_dia3_key_num_pane

0xaacf,	// (0x00025608) cell_dia3_key0_fun_pane_ParamLimits

0xaacf,	// (0x00025608) cell_dia3_key0_fun_pane

0xaadc,	// (0x00025615) cell_dia3_key1_fun_pane_ParamLimits

0xaadc,	// (0x00025615) cell_dia3_key1_fun_pane

0xaae9,	// (0x00025622) dia3_listrow_pane

0x10a0,	// (0x0001bbd9) bg_dia3_numentry_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp21

0x2140,	// (0x0001cc79) cell_dia3_key_num_pane_t1

0x214e,	// (0x0001cc87) cell_dia3_key_num_pane_t2

0x215d,	// (0x0001cc96) cell_dia3_key_num_pane_t3

0x216c,	// (0x0001cca5) cell_dia3_key_num_pane_t4

0x0003,

0xfdb5,	// (0x0002a8ee) cell_dia3_key_num_pane_t

0xbead,	// (0x000269e6) bg_button_pane_cp19

0xaaf6,	// (0x0002562f) cell_dia3_key0_fun_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp20

0xaafe,	// (0x00025637) cell_dia3_key1_fun_pane_g1

0xab06,	// (0x0002563f) area_left_week_number_pane

0xab19,	// (0x00025652) area_top_day_name_pane

0xab27,	// (0x00025660) frame_month_view_pane

0x217b,	// (0x0001ccb4) grid_month_view_pane

0xab3c,	// (0x00025675) cell_top_day_name_pane_ParamLimits

0xab3c,	// (0x00025675) cell_top_day_name_pane

0xab56,	// (0x0002568f) cell_area_left_week_number_pane_ParamLimits

0xab56,	// (0x0002568f) cell_area_left_week_number_pane

0xab79,	// (0x000256b2) cell_month_view_pane_ParamLimits

0xab79,	// (0x000256b2) cell_month_view_pane

0x2189,	// (0x0001ccc2) frm_month_g1

0xaba5,	// (0x000256de) frm_month_g2

0xabb6,	// (0x000256ef) frm_month_g3

0xabc7,	// (0x00025700) frm_month_g4

0xabd8,	// (0x00025711) frm_month_g5

0xabeb,	// (0x00025724) frm_month_g6

0xabfe,	// (0x00025737) frm_month_g7

0x2196,	// (0x0001cccf) frm_month_g8

0xac11,	// (0x0002574a) frm_month_g9

0xac1e,	// (0x00025757) frm_month_g10

0xac2b,	// (0x00025764) frm_month_g11

0xac38,	// (0x00025771) frm_month_g12

0xac45,	// (0x0002577e) frm_month_g13

0xac52,	// (0x0002578b) frm_month_g14

0xac61,	// (0x0002579a) frm_month_g15

0xac70,	// (0x000257a9) frm_month_g16

0x000f,

0xfdbe,	// (0x0002a8f7) frm_month_g

0x21a3,	// (0x0001ccdc) cell_top_day_name_pane_t1

0xac7f,	// (0x000257b8) cell_area_left_week_number_pane_g1

0xac8e,	// (0x000257c7) cell_area_left_week_number_pane_t1

0xc5ae,	// (0x000270e7) cell_month_view_pane_g1

0xaca4,	// (0x000257dd) cell_month_view_pane_t1

0xbead,	// (0x000269e6) main_fps_pane

0x160f,	// (0x0001c148) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x160f,	// (0x0001c148) cmail_ddmenu_btn02_pane_cp1

0x162b,	// (0x0001c164) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x162b,	// (0x0001c164) cmail_ddmenu_btn02_pane_cp2

0xa4fb,	// (0x00025034) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa4fb,	// (0x00025034) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdc,	// (0x0002a815) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdc,	// (0x0002a815) cmail_ddmenu_btn02_pane_g

0xa519,	// (0x00025052) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa519,	// (0x00025052) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce1,	// (0x0002a81a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce1,	// (0x0002a81a) cmail_ddmenu_btn02_pane_t

0xacba,	// (0x000257f3) fps_text_pane_ParamLimits

0xacba,	// (0x000257f3) fps_text_pane

0xacc7,	// (0x00025800) main_fps_pane_g1_ParamLimits

0xacc7,	// (0x00025800) main_fps_pane_g1

0xacd5,	// (0x0002580e) wait_bar_pane_cp010_ParamLimits

0xacd5,	// (0x0002580e) wait_bar_pane_cp010

0xace1,	// (0x0002581a) fps_text_pane_t1_ParamLimits

0xace1,	// (0x0002581a) fps_text_pane_t1

0x84c0,	// (0x00022ff9) cam4_image_uncrop_pane_g1

0x84c9,	// (0x00023002) cam4_image_uncrop_pane_g2

0x84d2,	// (0x0002300b) cam4_image_uncrop_pane_g3

0x84db,	// (0x00023014) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x0002a354) cam4_image_uncrop_pane_g

0xaae9,	// (0x00025622) dia3_listrow_pane_ParamLimits

0xbead,	// (0x000269e6) main_phob2_pane

0xa009,	// (0x00024b42) cell_tport_appsw_pane_cp02_ParamLimits

0xa009,	// (0x00024b42) cell_tport_appsw_pane_cp02

0xa018,	// (0x00024b51) cell_tport_appsw_pane_cp03_ParamLimits

0xa018,	// (0x00024b51) cell_tport_appsw_pane_cp03

0xbead,	// (0x000269e6) phob2_contact_card_pane

0xbead,	// (0x000269e6) phob2_listscroll_pane

0x21b6,	// (0x0001ccef) phob2_list_pane

0x1c3b,	// (0x0001c774) scroll_pane_cp034

0xacfa,	// (0x00025833) phob2_cc_data_pane_ParamLimits

0xacfa,	// (0x00025833) phob2_cc_data_pane

0xad14,	// (0x0002584d) phob2_cc_listscroll_pane_ParamLimits

0xad14,	// (0x0002584d) phob2_cc_listscroll_pane

0xa8db,	// (0x00025414) list_double_large_graphic_phob2_pane_ParamLimits

0xa8db,	// (0x00025414) list_double_large_graphic_phob2_pane

0xad2e,	// (0x00025867) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xad2e,	// (0x00025867) list_double_large_graphic_phob2_pane_g1

0xad3b,	// (0x00025874) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xad3b,	// (0x00025874) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfddf,	// (0x0002a918) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfddf,	// (0x0002a918) list_double_large_graphic_phob2_pane_g

0xad61,	// (0x0002589a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xad61,	// (0x0002589a) list_double_large_graphic_phob2_pane_t1

0xad76,	// (0x000258af) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xad76,	// (0x000258af) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde8,	// (0x0002a921) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde8,	// (0x0002a921) list_double_large_graphic_phob2_pane_t

0xbead,	// (0x000269e6) list_highlight_pane_cp024

0x21be,	// (0x0001ccf7) phob2_cc_button_pane

0xad8b,	// (0x000258c4) phob2_cc_data_pane_g1_ParamLimits

0xad8b,	// (0x000258c4) phob2_cc_data_pane_g1

0xad9a,	// (0x000258d3) phob2_cc_data_pane_g2_ParamLimits

0xad9a,	// (0x000258d3) phob2_cc_data_pane_g2

0x0001,

0xfded,	// (0x0002a926) phob2_cc_data_pane_g_ParamLimits

0xfded,	// (0x0002a926) phob2_cc_data_pane_g

0xada9,	// (0x000258e2) phob2_cc_data_pane_t1_ParamLimits

0xada9,	// (0x000258e2) phob2_cc_data_pane_t1

0xadbe,	// (0x000258f7) phob2_cc_data_pane_t2_ParamLimits

0xadbe,	// (0x000258f7) phob2_cc_data_pane_t2

0xadd3,	// (0x0002590c) phob2_cc_data_pane_t3_ParamLimits

0xadd3,	// (0x0002590c) phob2_cc_data_pane_t3

0x0002,

0xfdf2,	// (0x0002a92b) phob2_cc_data_pane_t_ParamLimits

0xfdf2,	// (0x0002a92b) phob2_cc_data_pane_t

0x21c6,	// (0x0001ccff) phob2_cc_list_pane_ParamLimits

0x21c6,	// (0x0001ccff) phob2_cc_list_pane

0x0796,	// (0x0001b2cf) scroll_pane_cp035_ParamLimits

0x0796,	// (0x0001b2cf) scroll_pane_cp035

0xc29b,	// (0x00026dd4) bg_button_pane_cp033

0x21d2,	// (0x0001cd0b) phob2_cc_button_pane_g1

0x21de,	// (0x0001cd17) phob2_cc_button_pane_t1

0x21f3,	// (0x0001cd2c) phob2_cc_button_pane_t2

0x0001,

0xfdf9,	// (0x0002a932) phob2_cc_button_pane_t

0xade8,	// (0x00025921) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xade8,	// (0x00025921) list_double_large_graphic_phob2_cc_pane

0xae56,	// (0x0002598f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xae56,	// (0x0002598f) list_double_large_graphic_phob2_cc_pane_g1

0xae67,	// (0x000259a0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xae67,	// (0x000259a0) list_double_large_graphic_phob2_cc_pane_g2

0xae76,	// (0x000259af) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xae76,	// (0x000259af) list_double_large_graphic_phob2_cc_pane_g3

0xae85,	// (0x000259be) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xae85,	// (0x000259be) list_double_large_graphic_phob2_cc_pane_g4

0xae96,	// (0x000259cf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xae96,	// (0x000259cf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdfe,	// (0x0002a937) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdfe,	// (0x0002a937) list_double_large_graphic_phob2_cc_pane_g

0xaea5,	// (0x000259de) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaea5,	// (0x000259de) list_double_large_graphic_phob2_cc_pane_t1

0xaece,	// (0x00025a07) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaece,	// (0x00025a07) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe09,	// (0x0002a942) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe09,	// (0x0002a942) list_double_large_graphic_phob2_cc_pane_t

0x2205,	// (0x0001cd3e) list_highlight_pane_cp025_ParamLimits

0x2205,	// (0x0001cd3e) list_highlight_pane_cp025

0xc29b,	// (0x00026dd4) bg_button_pane_cp033_ParamLimits

0x21d2,	// (0x0001cd0b) phob2_cc_button_pane_g1_ParamLimits

0x21de,	// (0x0001cd17) phob2_cc_button_pane_t1_ParamLimits

0x21f3,	// (0x0001cd2c) phob2_cc_button_pane_t2_ParamLimits

0xfdf9,	// (0x0002a932) phob2_cc_button_pane_t_ParamLimits

0x4f3a,	// (0x0001fa73) popup_wgtman_window

0x051e,	// (0x0001b057) scroll_pane_cp038

0xa864,	// (0x0002539d) wgtman_btn_pane_cp_01_ParamLimits

0xa864,	// (0x0002539d) wgtman_btn_pane_cp_01

0x2213,	// (0x0001cd4c) wgtman_content_pane

0x221c,	// (0x0001cd55) wgtman_heading_pane

0xbead,	// (0x000269e6) bg_heading_pane_cp02

0x2225,	// (0x0001cd5e) wgtman_heading_pane_g1

0x222d,	// (0x0001cd66) wgtman_heading_pane_t1

0x223b,	// (0x0001cd74) scroll_pane_cp036

0x2243,	// (0x0001cd7c) wgtman_list_pane

0x224b,	// (0x0001cd84) wgtman_list_pane_t1_ParamLimits

0x224b,	// (0x0001cd84) wgtman_list_pane_t1

0x46ab,	// (0x0001f1e4) cam4_grid_pane

0x8c1b,	// (0x00023754) bg_button_pane_cp015_ParamLimits

0x8c30,	// (0x00023769) bg_button_pane_cp016_ParamLimits

0x8c3c,	// (0x00023775) bg_button_pane_cp017_ParamLimits

0x8c94,	// (0x000237cd) popup_vitu2_query_window_g3_ParamLimits

0x8c94,	// (0x000237cd) popup_vitu2_query_window_g3

0x8d35,	// (0x0002386e) popup_vitu2_query_window_t6_ParamLimits

0x8d35,	// (0x0002386e) popup_vitu2_query_window_t6

0x8d60,	// (0x00023899) popup_vitu2_query_window_t7_ParamLimits

0x8d60,	// (0x00023899) popup_vitu2_query_window_t7

0x2118,	// (0x0001cc51) cam4_grid_pane_g1

0x2121,	// (0x0001cc5a) cam4_grid_pane_g2

0x2265,	// (0x0001cd9e) cam4_grid_pane_g3

0x226e,	// (0x0001cda7) cam4_grid_pane_g4

0x0003,

0xfe0e,	// (0x0002a947) cam4_grid_pane_g

0x56a8,	// (0x000201e1) aid_placing_vt_slider_lsc_ParamLimits

0x59f4,	// (0x0002052d) vidtel_button_pane_ParamLimits

0x59f4,	// (0x0002052d) vidtel_button_pane

0xbead,	// (0x000269e6) bg_button_pane_cp034

0x2279,	// (0x0001cdb2) vidtel_button_pane_g1

0x2281,	// (0x0001cdba) vidtel_button_pane_t1

0x0695,	// (0x0001b1ce) aid_size_vtel_slider_touch

0x0796,	// (0x0001b2cf) scroll_pane_cp039

0x9956,	// (0x0002448f) ncim_query_button_pane_cp01_ParamLimits

0x9975,	// (0x000244ae) ncimui_query_pane_g1_ParamLimits

0xc29b,	// (0x00026dd4) input_focus_pane_cp012_ParamLimits

0x10de,	// (0x0001bc17) ncim_query_entry_pane_t1_ParamLimits

0x0796,	// (0x0001b2cf) scroll_pane_cp039_ParamLimits

0xd0f8,	// (0x00027c31) navi_pane_bcale_mc_g1

0xd100,	// (0x00027c39) navi_pane_bcale_mc_t1

0x165f,	// (0x0001c198) main_sp_fs_email_pane_g1

0x166b,	// (0x0001c1a4) main_sp_fs_email_pane_g2

0x0001,

0xfc0c,	// (0x0002a745) main_sp_fs_email_pane_g

0x1ae2,	// (0x0001c61b) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1ae2,	// (0x0001c61b) list_single_cale_mrui_row_pane_g3

0xa539,	// (0x00025072) list_single_recal_day_pane_g5_event_pane

0x1ce9,	// (0x0001c822) list_single_recal_day_pane_g7

0x2297,	// (0x0001cdd0) list_recal_day_event_pane_cp01

0x22a0,	// (0x0001cdd9) list_recal_vselct_arw_lo_pane_cp01

0x22a8,	// (0x0001cde1) list_recal_vselct_arw_up_pane_cp01

0x22b0,	// (0x0001cde9) list_recal_vselct_pane_cp01

0x06ed,	// (0x0001b226) list_recal_day_event_pane_cp01_g1

0x22ba,	// (0x0001cdf3) list_recal_day_event_pane_cp01_t1

0x1cf1,	// (0x0001c82a) list_single_recal_day_pane_t1_ParamLimits

0x1d03,	// (0x0001c83c) list_single_recal_day_pane_t2_ParamLimits

0xfcf1,	// (0x0002a82a) list_single_recal_day_pane_t_ParamLimits

0xc533,	// (0x0002706c) bg_notes_pane_ParamLimits

0xc628,	// (0x00027161) list_notes_pane_ParamLimits

0x4fa3,	// (0x0001fadc) scroll_pane_cp06_ParamLimits

0xc64a,	// (0x00027183) main_notes_pane_ParamLimits

0xc29b,	// (0x00026dd4) main_welc_pane

0xaf19,	// (0x00025a52) main_welc_body_pane_ParamLimits

0xaf19,	// (0x00025a52) main_welc_body_pane

0xaf33,	// (0x00025a6c) main_welc_opti_pane_ParamLimits

0xaf33,	// (0x00025a6c) main_welc_opti_pane

0xaf92,	// (0x00025acb) main_welc_pane_t1_ParamLimits

0xaf92,	// (0x00025acb) main_welc_pane_t1

0xb128,	// (0x00025c61) main_welc_body_row_pane_ParamLimits

0xb128,	// (0x00025c61) main_welc_body_row_pane

0xc5a0,	// (0x000270d9) main_welc_opti_row_pane_ParamLimits

0xc5a0,	// (0x000270d9) main_welc_opti_row_pane

0x22d8,	// (0x0001ce11) main_welc_opti_row_pane_g1

0xb14d,	// (0x00025c86) main_welc_opti_row_pane_t1

0x22e0,	// (0x0001ce19) main_welc_body_row_pane_t1

0x1f86,	// (0x0001cabf) popup_notif_wgt_heading_pane

0x1fa0,	// (0x0001cad9) aid_size_list_notif_wgt_del_ParamLimits

0x1fad,	// (0x0001cae6) list_notif_wgt_row_pane_g1_ParamLimits

0x1fb9,	// (0x0001caf2) list_notif_wgt_row_pane_g2_ParamLimits

0x1fc8,	// (0x0001cb01) list_notif_wgt_row_pane_g3_ParamLimits

0xfd58,	// (0x0002a891) list_notif_wgt_row_pane_g_ParamLimits

0x1fd5,	// (0x0001cb0e) list_notif_wgt_row_pane_t1_ParamLimits

0x1feb,	// (0x0001cb24) list_notif_wgt_row_pane_t2_ParamLimits

0x1ffd,	// (0x0001cb36) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5f,	// (0x0002a898) list_notif_wgt_row_pane_t_ParamLimits

0xa8f6,	// (0x0002542f) listrow_wgtman_pane_g1_ParamLimits

0xa903,	// (0x0002543c) listrow_wgtman_pane_g2_ParamLimits

0xfd8f,	// (0x0002a8c8) listrow_wgtman_pane_g_ParamLimits

0xa921,	// (0x0002545a) listrow_wgtman_pane_t1_ParamLimits

0xa939,	// (0x00025472) listrow_wgtman_pane_t2_ParamLimits

0xfd94,	// (0x0002a8cd) listrow_wgtman_pane_t_ParamLimits

0xa95f,	// (0x00025498) wait_bar_pane_cp09_ParamLimits

0xbead,	// (0x000269e6) bg_popup_heading_pane_cp02

0x22ef,	// (0x0001ce28) popup_notif_wgt_heading_pane_g1

0x22f7,	// (0x0001ce30) popup_notif_wgt_heading_pane_t1

0xbead,	// (0x000269e6) main_vids_pane

0xbead,	// (0x000269e6) vids_listscroll_pane

0xb15c,	// (0x00025c95) scroll_pane_cp040

0xbead,	// (0x000269e6) vids_list_pane

0xb167,	// (0x00025ca0) vids_list_double_pane_ParamLimits

0xb167,	// (0x00025ca0) vids_list_double_pane

0xb17e,	// (0x00025cb7) vids_list_double_pane_g1

0xb187,	// (0x00025cc0) vids_list_double_pane_t1

0xb197,	// (0x00025cd0) vids_list_double_pane_t2

0x0001,

0xfe2d,	// (0x0002a966) vids_list_double_pane_t

0x3d85,	// (0x0001e8be) main_ncimui_pane_ParamLimits

0x97ad,	// (0x000242e6) main_ncimui_pane_g1_ParamLimits

0x97b9,	// (0x000242f2) main_ncimui_pane_g2_ParamLimits

0x97b9,	// (0x000242f2) main_ncimui_pane_g2

0x0001,

0xfb0d,	// (0x0002a646) main_ncimui_pane_g_ParamLimits

0xfb0d,	// (0x0002a646) main_ncimui_pane_g

0xaf4c,	// (0x00025a85) main_welc_pane_g1_ParamLimits

0xaf4c,	// (0x00025a85) main_welc_pane_g1

0xaf58,	// (0x00025a91) main_welc_pane_g2_ParamLimits

0xaf58,	// (0x00025a91) main_welc_pane_g2

0x0003,

0xfe17,	// (0x0002a950) main_welc_pane_g_ParamLimits

0xfe17,	// (0x0002a950) main_welc_pane_g

0xc533,	// (0x0002706c) listscroll_mce_pane_ParamLimits

0xd24d,	// (0x00027d86) wait_bar_pane_cp10

0xe515,	// (0x0002904e) main_cale_day_pane_ParamLimits

0xe515,	// (0x0002904e) main_cale_week_pane_ParamLimits

0xc533,	// (0x0002706c) main_messa_pane_ParamLimits

0x8032,	// (0x00022b6b) main_clock2_btn_pane_ParamLimits

0x8032,	// (0x00022b6b) main_clock2_btn_pane

0xecf4,	// (0x0002982d) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x0002982d) main_clock2_btn_pane_cp01

0x1a6e,	// (0x0001c5a7) list_cale_mrui_pane_ParamLimits

0x2041,	// (0x0001cb7a) main_cf0_pane_g2

0x0001,

0xfd66,	// (0x0002a89f) main_cf0_pane_g

0xab06,	// (0x0002563f) area_left_week_number_pane_ParamLimits

0xab19,	// (0x00025652) area_top_day_name_pane_ParamLimits

0xab27,	// (0x00025660) frame_month_view_pane_ParamLimits

0x217b,	// (0x0001ccb4) grid_month_view_pane_ParamLimits

0x2189,	// (0x0001ccc2) frm_month_g1_ParamLimits

0xaba5,	// (0x000256de) frm_month_g2_ParamLimits

0xabb6,	// (0x000256ef) frm_month_g3_ParamLimits

0xabc7,	// (0x00025700) frm_month_g4_ParamLimits

0xabd8,	// (0x00025711) frm_month_g5_ParamLimits

0xabeb,	// (0x00025724) frm_month_g6_ParamLimits

0xabfe,	// (0x00025737) frm_month_g7_ParamLimits

0x2196,	// (0x0001cccf) frm_month_g8_ParamLimits

0xac11,	// (0x0002574a) frm_month_g9_ParamLimits

0xac1e,	// (0x00025757) frm_month_g10_ParamLimits

0xac2b,	// (0x00025764) frm_month_g11_ParamLimits

0xac38,	// (0x00025771) frm_month_g12_ParamLimits

0xac45,	// (0x0002577e) frm_month_g13_ParamLimits

0xac52,	// (0x0002578b) frm_month_g14_ParamLimits

0xac61,	// (0x0002579a) frm_month_g15_ParamLimits

0xac70,	// (0x000257a9) frm_month_g16_ParamLimits

0xfdbe,	// (0x0002a8f7) frm_month_g_ParamLimits

0x21a3,	// (0x0001ccdc) cell_top_day_name_pane_t1_ParamLimits

0xac7f,	// (0x000257b8) cell_area_left_week_number_pane_g1_ParamLimits

0xac8e,	// (0x000257c7) cell_area_left_week_number_pane_t1_ParamLimits

0xc5ae,	// (0x000270e7) cell_month_view_pane_g1_ParamLimits

0xaca4,	// (0x000257dd) cell_month_view_pane_t1_ParamLimits

0xc52b,	// (0x00027064) main_clock2_btn_pane_g1

0x2305,	// (0x0001ce3e) main_clock2_btn_pane_t1

0xc29b,	// (0x00026dd4) listscroll_cmail_pane_ParamLimits

0x165f,	// (0x0001c198) main_sp_fs_email_pane_g1_ParamLimits

0x166b,	// (0x0001c1a4) main_sp_fs_email_pane_g2_ParamLimits

0xfc0c,	// (0x0002a745) main_sp_fs_email_pane_g_ParamLimits

0x1c59,	// (0x0001c792) list_recal_day_pane_ParamLimits

0x1c6a,	// (0x0001c7a3) mian_recal_day_pane_t1

0x9ef7,	// (0x00024a30) list_single_dyc_row_text_pane_t4_ParamLimits

0x9ef7,	// (0x00024a30) list_single_dyc_row_text_pane_t4

0x9f2e,	// (0x00024a67) list_single_dyc_row_text_pane_t5_ParamLimits

0x9f2e,	// (0x00024a67) list_single_dyc_row_text_pane_t5

0x1733,	// (0x0001c26c) list_single_dyc_row_text_pane_t6_ParamLimits

0x1733,	// (0x0001c26c) list_single_dyc_row_text_pane_t6

0xcbe6,	// (0x0002771f) aid_mgn_list_cale_time_pane

0x3d85,	// (0x0001e8be) main_gallery2_pane_ParamLimits

0xed0a,	// (0x00029843) main_clock2_pane_cp01_t1

0xed1a,	// (0x00029853) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x0002a235) main_clock2_pane_cp01_t

0x52cd,	// (0x0001fe06) cale_week_scroll_pane_g16_ParamLimits

0x52cd,	// (0x0001fe06) cale_week_scroll_pane_g16

0xc7fc,	// (0x00027335) vorec_slider_pane

0x2281,	// (0x0001cdba) vidtel_button_pane_t1_ParamLimits

0xa594,	// (0x000250cd) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa594,	// (0x000250cd) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa5a1,	// (0x000250da) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa5a1,	// (0x000250da) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd14,	// (0x0002a84d) main_fs_bigclock_clock_pane_g_ParamLimits

0xa5ad,	// (0x000250e6) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa5c0,	// (0x000250f9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1d,	// (0x0002a856) main_fs_bigclock_clock_pane_t_ParamLimits

0x79cf,	// (0x00022508) main_mup3_lyrics_pane_ParamLimits

0x79cf,	// (0x00022508) main_mup3_lyrics_pane

0xb1a5,	// (0x00025cde) main_mup3_lyrics_pane_t1_ParamLimits

0xb1a5,	// (0x00025cde) main_mup3_lyrics_pane_t1

0x4149,	// (0x0001ec82) aid_main_mp4_pane_t1_area

0x4153,	// (0x0001ec8c) aid_main_mp4_pane_t2_area

0x4258,	// (0x0001ed91) main_mp4_pane_g7_ParamLimits

0x4258,	// (0x0001ed91) main_mp4_pane_g7

0x4264,	// (0x0001ed9d) main_mp4_pane_g8_ParamLimits

0x4264,	// (0x0001ed9d) main_mp4_pane_g8

0x8408,	// (0x00022f41) aid_call6_pane_g1_size

0xae2a,	// (0x00025963) list_double_large_graphic_phob2_other_pane_ParamLimits

0xae2a,	// (0x00025963) list_double_large_graphic_phob2_other_pane

0xcb9e,	// (0x000276d7) list_double_large_graphic_phob2_other_pane_g1

0xbead,	// (0x000269e6) list_highlight_pane_cp026

0xc29b,	// (0x00026dd4) main_welc_pane_ParamLimits

0x9d8c,	// (0x000248c5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9d8c,	// (0x000248c5) main_sp_fs_ctrlbar_pane_g3

0x9da4,	// (0x000248dd) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9da4,	// (0x000248dd) main_sp_fs_ctrlbar_pane_g4

0x9dd6,	// (0x0002490f) toolbar2_fixed_button_pane_cp01

0x9de1,	// (0x0002491a) toolbar2_fixed_button_pane_cp02

0x9dec,	// (0x00024925) toolbar2_fixed_button_pane_cp03

0xaf09,	// (0x00025a42) list_welc_entry_pane_ParamLimits

0xaf09,	// (0x00025a42) list_welc_entry_pane

0xaf66,	// (0x00025a9f) main_welc_pane_g3_ParamLimits

0xaf66,	// (0x00025a9f) main_welc_pane_g3

0xafac,	// (0x00025ae5) main_welc_pane_t2_ParamLimits

0xafac,	// (0x00025ae5) main_welc_pane_t2

0xafc0,	// (0x00025af9) main_welc_pane_t3_ParamLimits

0xafc0,	// (0x00025af9) main_welc_pane_t3

0x0005,

0xfe20,	// (0x0002a959) main_welc_pane_t_ParamLimits

0xfe20,	// (0x0002a959) main_welc_pane_t

0xb0bc,	// (0x00025bf5) welc_button_pane_ParamLimits

0xb0bc,	// (0x00025bf5) welc_button_pane

0xb11a,	// (0x00025c53) welc_service_logo_pane_ParamLimits

0xb11a,	// (0x00025c53) welc_service_logo_pane

0xb1d7,	// (0x00025d10) list_single_welc_entry_pane_ParamLimits

0xb1d7,	// (0x00025d10) list_single_welc_entry_pane

0xb1e8,	// (0x00025d21) list_single_welc_entry_pane_g1

0xb1f0,	// (0x00025d29) list_single_welc_entry_pane_t1

0xb1fe,	// (0x00025d37) list_single_welc_entry_pane_t2

0x0001,

0xfe32,	// (0x0002a96b) list_single_welc_entry_pane_t

0xbead,	// (0x000269e6) bg_button_pane_cp035

0xb20c,	// (0x00025d45) welc_button_pane_t1

0x2321,	// (0x0001ce5a) welc_service_logo_pane_g1

0x232a,	// (0x0001ce63) welc_service_logo_pane_g2

0x0001,

0xfe37,	// (0x0002a970) welc_service_logo_pane_g

0x392d,	// (0x0001e466) main_int_radio_pane

0xc92f,	// (0x00027468) list_single_fs_dyc_pane_g1

0xad47,	// (0x00025880) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xad47,	// (0x00025880) list_double_large_graphic_phob2_pane_g3

0xad53,	// (0x0002588c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xad53,	// (0x0002588c) list_double_large_graphic_phob2_pane_g4

0xb21a,	// (0x00025d53) main_int_radio1_pane_ParamLimits

0xb21a,	// (0x00025d53) main_int_radio1_pane

0x2333,	// (0x0001ce6c) find_pane_cp02

0xb22c,	// (0x00025d65) input_focus_pane_cp12_ParamLimits

0xb22c,	// (0x00025d65) input_focus_pane_cp12

0xb238,	// (0x00025d71) input_focus_pane_cp13_ParamLimits

0xb238,	// (0x00025d71) input_focus_pane_cp13

0xb250,	// (0x00025d89) input_focus_pane_cp14_ParamLimits

0xb250,	// (0x00025d89) input_focus_pane_cp14

0x233c,	// (0x0001ce75) int_radio1_listscroll_pane

0xb268,	// (0x00025da1) main_int_radio1_pane_g1_ParamLimits

0xb268,	// (0x00025da1) main_int_radio1_pane_g1

0xb278,	// (0x00025db1) main_int_radio1_pane_t1_ParamLimits

0xb278,	// (0x00025db1) main_int_radio1_pane_t1

0xb28c,	// (0x00025dc5) main_int_radio1_pane_t2_ParamLimits

0xb28c,	// (0x00025dc5) main_int_radio1_pane_t2

0xb2a0,	// (0x00025dd9) main_int_radio1_pane_t3_ParamLimits

0xb2a0,	// (0x00025dd9) main_int_radio1_pane_t3

0xb2b4,	// (0x00025ded) main_int_radio1_pane_t4_ParamLimits

0xb2b4,	// (0x00025ded) main_int_radio1_pane_t4

0x2346,	// (0x0001ce7f) main_int_radio1_pane_t5_ParamLimits

0x2346,	// (0x0001ce7f) main_int_radio1_pane_t5

0xb2cb,	// (0x00025e04) main_int_radio1_pane_t6_ParamLimits

0xb2cb,	// (0x00025e04) main_int_radio1_pane_t6

0xb2dd,	// (0x00025e16) main_int_radio1_pane_t7_ParamLimits

0xb2dd,	// (0x00025e16) main_int_radio1_pane_t7

0xb2ef,	// (0x00025e28) main_int_radio1_pane_t8_ParamLimits

0xb2ef,	// (0x00025e28) main_int_radio1_pane_t8

0xb303,	// (0x00025e3c) main_int_radio1_pane_t9_ParamLimits

0xb303,	// (0x00025e3c) main_int_radio1_pane_t9

0xb315,	// (0x00025e4e) main_int_radio1_pane_t10_ParamLimits

0xb315,	// (0x00025e4e) main_int_radio1_pane_t10

0xb346,	// (0x00025e7f) main_int_radio1_pane_t11_ParamLimits

0xb346,	// (0x00025e7f) main_int_radio1_pane_t11

0xb377,	// (0x00025eb0) main_int_radio1_pane_t12_ParamLimits

0xb377,	// (0x00025eb0) main_int_radio1_pane_t12

0x000b,

0xfe3c,	// (0x0002a975) main_int_radio1_pane_t_ParamLimits

0xfe3c,	// (0x0002a975) main_int_radio1_pane_t

0x2358,	// (0x0001ce91) int_radio_list_pane

0x1c3b,	// (0x0001c774) scroll_pane_cp037

0x2360,	// (0x0001ce99) list_double_large_graphic_int_radio_pane_ParamLimits

0x2360,	// (0x0001ce99) list_double_large_graphic_int_radio_pane

0x2378,	// (0x0001ceb1) list_double_large_graphic_int_radio_pane_g1

0x2381,	// (0x0001ceba) list_double_large_graphic_int_radio_pane_t1

0x238f,	// (0x0001cec8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe55,	// (0x0002a98e) list_double_large_graphic_int_radio_pane_t

0xbead,	// (0x000269e6) list_highlight_pane_cp027

0x22c8,	// (0x0001ce01) main_button_pane_4

0xaf72,	// (0x00025aab) main_welc_pane_g4_ParamLimits

0xaf72,	// (0x00025aab) main_welc_pane_g4

0xafd2,	// (0x00025b0b) main_welc_pane_t4_ParamLimits

0xafd2,	// (0x00025b0b) main_welc_pane_t4

0xafe4,	// (0x00025b1d) main_welc_pane_t5_ParamLimits

0xafe4,	// (0x00025b1d) main_welc_pane_t5

0xb014,	// (0x00025b4d) main_welc_pane_t6_ParamLimits

0xb014,	// (0x00025b4d) main_welc_pane_t6

0xb0ca,	// (0x00025c03) welc_button_pane_2_ParamLimits

0xb0ca,	// (0x00025c03) welc_button_pane_2

0xb0e2,	// (0x00025c1b) welc_button_pane_3_ParamLimits

0xb0e2,	// (0x00025c1b) welc_button_pane_3

0x22d0,	// (0x0001ce09) welc_button_pane_4

0xb0fc,	// (0x00025c35) welc_button_pane_5_ParamLimits

0xb0fc,	// (0x00025c35) welc_button_pane_5

0x36d9,	// (0x0001e212) main_popup_welc_pane

0x23b5,	// (0x0001ceee) main_welc_sk_g3

0x23bf,	// (0x0001cef8) main_welc_sk_g4

0x23c9,	// (0x0001cf02) main_welc_sk_t3

0x23d9,	// (0x0001cf12) main_welc_sk_t4

0x23e9,	// (0x0001cf22) popup_welc_pane_t4

0x23f7,	// (0x0001cf30) popup_welc_pane_t5

0x2405,	// (0x0001cf3e) popup_welc_pane_t6

0x392d,	// (0x0001e466) main_acti_pane

0xbead,	// (0x000269e6) main_sso_pane

0xb38e,	// (0x00025ec7) sso_body_pane_ParamLimits

0xb38e,	// (0x00025ec7) sso_body_pane

0xb39c,	// (0x00025ed5) sso_logo_pane_ParamLimits

0xb39c,	// (0x00025ed5) sso_logo_pane

0xb3cd,	// (0x00025f06) sso_sk_pane_ParamLimits

0xb3cd,	// (0x00025f06) sso_sk_pane

0x2443,	// (0x0001cf7c) main_sso_logo_pane_g1

0xb3da,	// (0x00025f13) sso_sk_pane_t1_ParamLimits

0xb3da,	// (0x00025f13) sso_sk_pane_t1

0xb3ee,	// (0x00025f27) sso_sk_pane_t2_ParamLimits

0xb3ee,	// (0x00025f27) sso_sk_pane_t2

0x0001,

0xfe5a,	// (0x0002a993) sso_sk_pane_t_ParamLimits

0xfe5a,	// (0x0002a993) sso_sk_pane_t

0x244e,	// (0x0001cf87) aid_sso_gap

0x2457,	// (0x0001cf90) aid_sso_txt1

0x2461,	// (0x0001cf9a) aid_sso_txt2

0x246b,	// (0x0001cfa4) aid_sso_txt3

0x0002,

0xfe5f,	// (0x0002a998) aid_sso_txt

0x2475,	// (0x0001cfae) aid_sso_widget

0xb44b,	// (0x00025f84) sso_btn_pane_ParamLimits

0xb44b,	// (0x00025f84) sso_btn_pane

0xb4bf,	// (0x00025ff8) sso_option_pane_ParamLimits

0xb4bf,	// (0x00025ff8) sso_option_pane

0xb56b,	// (0x000260a4) sso_query_pane_ParamLimits

0xb56b,	// (0x000260a4) sso_query_pane

0xb5bb,	// (0x000260f4) sso_query_pane_cp01_ParamLimits

0xb5bb,	// (0x000260f4) sso_query_pane_cp01

0xb60d,	// (0x00026146) sso_t_hdr_pane_ParamLimits

0xb60d,	// (0x00026146) sso_t_hdr_pane

0xb631,	// (0x0002616a) sso_t_nml_pane_ParamLimits

0xb631,	// (0x0002616a) sso_t_nml_pane

0x247f,	// (0x0001cfb8) sso_t_sub_pane

0xb3a9,	// (0x00025ee2) sso_popup_window_ParamLimits

0xb3a9,	// (0x00025ee2) sso_popup_window

0xb400,	// (0x00025f39) sso_apps_pane_ParamLimits

0xb400,	// (0x00025f39) sso_apps_pane

0xb423,	// (0x00025f5c) sso_body_pane_g1

0xb42b,	// (0x00025f64) sso_body_pane_t1

0xb43b,	// (0x00025f74) sso_body_pane_t2

0x0001,

0xfe66,	// (0x0002a99f) sso_body_pane_t

0xb48f,	// (0x00025fc8) sso_btn_pane_cp01_ParamLimits

0xb48f,	// (0x00025fc8) sso_btn_pane_cp01

0xb53d,	// (0x00026076) sso_prog_pane_ParamLimits

0xb53d,	// (0x00026076) sso_prog_pane

0xb681,	// (0x000261ba) sso_t_hdr_pane_t1_ParamLimits

0xb681,	// (0x000261ba) sso_t_hdr_pane_t1

0x2494,	// (0x0001cfcd) input_focus_pane_cp10_ParamLimits

0x2494,	// (0x0001cfcd) input_focus_pane_cp10

0x24a8,	// (0x0001cfe1) sso_query_pane_t1_ParamLimits

0x24a8,	// (0x0001cfe1) sso_query_pane_t1

0x24bb,	// (0x0001cff4) sso_query_pane_t2_ParamLimits

0x24bb,	// (0x0001cff4) sso_query_pane_t2

0x24d4,	// (0x0001d00d) sso_query_pane_t3_ParamLimits

0x24d4,	// (0x0001d00d) sso_query_pane_t3

0x24fe,	// (0x0001d037) sso_query_pane_t4_ParamLimits

0x24fe,	// (0x0001d037) sso_query_pane_t4

0x0003,

0xfe6b,	// (0x0002a9a4) sso_query_pane_t_ParamLimits

0xfe6b,	// (0x0002a9a4) sso_query_pane_t

0x23ac,	// (0x0001cee5) bg_button_pane_cp22

0x239d,	// (0x0001ced6) sso_btn_pane_t1

0xb69a,	// (0x000261d3) sso_t_nml_pane_t1_ParamLimits

0xb69a,	// (0x000261d3) sso_t_nml_pane_t1

0x2522,	// (0x0001d05b) sso_option_row_pane_ParamLimits

0x2522,	// (0x0001d05b) sso_option_row_pane

0x252f,	// (0x0001d068) sso_t_sub_pane_t1_ParamLimits

0x252f,	// (0x0001d068) sso_t_sub_pane_t1

0xc29b,	// (0x00026dd4) bg_popup_window_pane_cp11_ParamLimits

0xc29b,	// (0x00026dd4) bg_popup_window_pane_cp11

0x254c,	// (0x0001d085) popup_sk_window_cp01_ParamLimits

0x254c,	// (0x0001d085) popup_sk_window_cp01

0x2559,	// (0x0001d092) sso_popup_body_pane_ParamLimits

0x2559,	// (0x0001d092) sso_popup_body_pane

0x2566,	// (0x0001d09f) scroll_pane_cp21_ParamLimits

0x2566,	// (0x0001d09f) scroll_pane_cp21

0x2573,	// (0x0001d0ac) sso_popup_body_t_pane_ParamLimits

0x2573,	// (0x0001d0ac) sso_popup_body_t_pane

0x2580,	// (0x0001d0b9) sso_popup_body_t_hdr_pane_ParamLimits

0x2580,	// (0x0001d0b9) sso_popup_body_t_hdr_pane

0xb6b7,	// (0x000261f0) sso_popup_body_t_nml_pane_ParamLimits

0xb6b7,	// (0x000261f0) sso_popup_body_t_nml_pane

0xb6d5,	// (0x0002620e) sso_popup_body_t_sub_pane_ParamLimits

0xb6d5,	// (0x0002620e) sso_popup_body_t_sub_pane

0x2592,	// (0x0001d0cb) sso_popup_body_t_hdr_pane_t1

0xb6f8,	// (0x00026231) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb6f8,	// (0x00026231) sso_popup_body_t_nml_pane_t1

0x25a2,	// (0x0001d0db) sso_popup_body_t_sub_pane_t1_ParamLimits

0x25a2,	// (0x0001d0db) sso_popup_body_t_sub_pane_t1

0xc5ec,	// (0x00027125) sso_prog_pane_g1

0xb73c,	// (0x00026275) sso_apps_pane_comp1_ParamLimits

0xb73c,	// (0x00026275) sso_apps_pane_comp1

0x25c7,	// (0x0001d100) sso_apps_pane_comp1_g1

0x25cf,	// (0x0001d108) sso_apps_pane_comp1_t1

0x25eb,	// (0x0001d124) sso_option_row_pane_g1

0x25f3,	// (0x0001d12c) sso_option_row_pane_t1

0x180b,	// (0x0001c344) list_cmail_pane_ParamLimits

0xbead,	// (0x000269e6) main_call7_pane

0xaef7,	// (0x00025a30) bg_welc_area_ParamLimits

0xaef7,	// (0x00025a30) bg_welc_area

0xb04a,	// (0x00025b83) sso_t_hdr_pane_a_t1_ParamLimits

0xb04a,	// (0x00025b83) sso_t_hdr_pane_a_t1

0xb05e,	// (0x00025b97) sso_t_nml_pane_a_t1_ParamLimits

0xb05e,	// (0x00025b97) sso_t_nml_pane_a_t1

0xb088,	// (0x00025bc1) sso_t_sub_pane_a_t1_ParamLimits

0xb088,	// (0x00025bc1) sso_t_sub_pane_a_t1

0xb10c,	// (0x00025c45) welc_button_pane_cp01_ParamLimits

0xb10c,	// (0x00025c45) welc_button_pane_cp01

0x239d,	// (0x0001ced6) sso_btn_pane_t1_copy1

0x23ac,	// (0x0001cee5) welc_button_pane_2_comp1

0x2413,	// (0x0001cf4c) sso_t_hdr_pane_p_t1

0x2423,	// (0x0001cf5c) sso_t_nml_pane_p_t1

0x2433,	// (0x0001cf6c) sso_t_sub_pane_p_t1

0xbead,	// (0x000269e6) main_att_pane

0xbead,	// (0x000269e6) main_vod_pane

0x247f,	// (0x0001cfb8) sso_t_sub_pane_ParamLimits

0x25dd,	// (0x0001d116) input_focus_pane_cp10_t1

0x25f3,	// (0x0001d12c) sso_option_row_pane_t1_ParamLimits

0xb753,	// (0x0002628c) main_att_body_pane_ParamLimits

0xb753,	// (0x0002628c) main_att_body_pane

0xb767,	// (0x000262a0) att_btn_emg_pane_ParamLimits

0xb767,	// (0x000262a0) att_btn_emg_pane

0xb77f,	// (0x000262b8) att_btn_pane_ParamLimits

0xb77f,	// (0x000262b8) att_btn_pane

0xb7e7,	// (0x00026320) att_btn_pane_cp01_ParamLimits

0xb7e7,	// (0x00026320) att_btn_pane_cp01

0xb801,	// (0x0002633a) att_li_srv_pane_ParamLimits

0xb801,	// (0x0002633a) att_li_srv_pane

0xb813,	// (0x0002634c) att_opt_pane_ParamLimits

0xb813,	// (0x0002634c) att_opt_pane

0xb857,	// (0x00026390) att_query_pane_ParamLimits

0xb857,	// (0x00026390) att_query_pane

0xb8c7,	// (0x00026400) att_query_pane_cp01_ParamLimits

0xb8c7,	// (0x00026400) att_query_pane_cp01

0xb90b,	// (0x00026444) att_t_hdr_pane_ParamLimits

0xb90b,	// (0x00026444) att_t_hdr_pane

0xb971,	// (0x000264aa) att_t_nml_pane_ParamLimits

0xb971,	// (0x000264aa) att_t_nml_pane

0xb9d9,	// (0x00026512) att_t_nml_pane_cp01_ParamLimits

0xb9d9,	// (0x00026512) att_t_nml_pane_cp01

0xb9fd,	// (0x00026536) att_t_nmlb_pane_ParamLimits

0xb9fd,	// (0x00026536) att_t_nmlb_pane

0xba61,	// (0x0002659a) att_term_pane_ParamLimits

0xba61,	// (0x0002659a) att_term_pane

0xbaa3,	// (0x000265dc) main_att_body_pane_g1_ParamLimits

0xbaa3,	// (0x000265dc) main_att_body_pane_g1

0x260c,	// (0x0001d145) att_t_hdr_pane_t1_ParamLimits

0x260c,	// (0x0001d145) att_t_hdr_pane_t1

0x2625,	// (0x0001d15e) att_t_nml_pane_t1_ParamLimits

0x2625,	// (0x0001d15e) att_t_nml_pane_t1

0x264a,	// (0x0001d183) att_btn_pane_t1

0x23ac,	// (0x0001cee5) bg_button_pane_cp23

0xbacd,	// (0x00026606) att_li_srv_row_pane_ParamLimits

0xbacd,	// (0x00026606) att_li_srv_row_pane

0x265a,	// (0x0001d193) att_t_nmlb_pane_t1_ParamLimits

0x265a,	// (0x0001d193) att_t_nmlb_pane_t1

0x2678,	// (0x0001d1b1) att_query_pane_t1

0x2687,	// (0x0001d1c0) att_query_pane_t2

0x2696,	// (0x0001d1cf) att_query_pane_t3

0x0002,

0xfe74,	// (0x0002a9ad) att_query_pane_t

0x26a5,	// (0x0001d1de) input_focus_pane_cp11

0x26ae,	// (0x0001d1e7) att_term_pane_t1_ParamLimits

0x26ae,	// (0x0001d1e7) att_term_pane_t1

0xbead,	// (0x000269e6) att_opt_row_pane

0x25eb,	// (0x0001d124) att_opt_row_pane_g1

0x26cb,	// (0x0001d204) att_opt_row_pane_t1_ParamLimits

0x26cb,	// (0x0001d204) att_opt_row_pane_t1

0xbadd,	// (0x00026616) att_li_srv_row_pane_g1

0xbae5,	// (0x0002661e) att_li_srv_row_pane_t1_ParamLimits

0xbae5,	// (0x0002661e) att_li_srv_row_pane_t1

0xbafa,	// (0x00026633) att_li_srv_row_pane_t2_ParamLimits

0xbafa,	// (0x00026633) att_li_srv_row_pane_t2

0x0001,

0xfe7b,	// (0x0002a9b4) att_li_srv_row_pane_t_ParamLimits

0xfe7b,	// (0x0002a9b4) att_li_srv_row_pane_t

0x26e4,	// (0x0001d21d) att_btn_close_pane_g1

0xbead,	// (0x000269e6) bg_button_pane_cp24

0xbb0f,	// (0x00026648) main_vod_body_pane_ParamLimits

0xbb0f,	// (0x00026648) main_vod_body_pane

0xbb1d,	// (0x00026656) main_vod_body_pane_g1_ParamLimits

0xbb1d,	// (0x00026656) main_vod_body_pane_g1

0xbb4d,	// (0x00026686) scroll_pane_cp24_ParamLimits

0xbb4d,	// (0x00026686) scroll_pane_cp24

0xbb95,	// (0x000266ce) vod_btn_pane_ParamLimits

0xbb95,	// (0x000266ce) vod_btn_pane

0xbbd3,	// (0x0002670c) vod_det_pane_ParamLimits

0xbbd3,	// (0x0002670c) vod_det_pane

0xbbff,	// (0x00026738) vod_logo_g1_ParamLimits

0xbbff,	// (0x00026738) vod_logo_g1

0xbc39,	// (0x00026772) vod_opt_pane_ParamLimits

0xbc39,	// (0x00026772) vod_opt_pane

0xbc69,	// (0x000267a2) vod_opt_pane_cp01_ParamLimits

0xbc69,	// (0x000267a2) vod_opt_pane_cp01

0xbc91,	// (0x000267ca) vod_query_pane_ParamLimits

0xbc91,	// (0x000267ca) vod_query_pane

0xbcb9,	// (0x000267f2) vod_query_pane_cp01_ParamLimits

0xbcb9,	// (0x000267f2) vod_query_pane_cp01

0xbcc5,	// (0x000267fe) vod_t_nml_pane_ParamLimits

0xbcc5,	// (0x000267fe) vod_t_nml_pane

0xbd6b,	// (0x000268a4) vod_t_nml_pane_cp01_ParamLimits

0xbd6b,	// (0x000268a4) vod_t_nml_pane_cp01

0xbda3,	// (0x000268dc) vod_t_sub_pane_ParamLimits

0xbda3,	// (0x000268dc) vod_t_sub_pane

0xbdcf,	// (0x00026908) vod_t_sub_pane_cp01_ParamLimits

0xbdcf,	// (0x00026908) vod_t_sub_pane_cp01

0x26a5,	// (0x0001d1de) vod_query_field_pane

0x26ec,	// (0x0001d225) vod_query_pane_t1

0x23ac,	// (0x0001cee5) bg_button_pane_cp25

0x239d,	// (0x0001ced6) sso_btn_pane_t1_copy2

0xbdf7,	// (0x00026930) vod_t_nml_pane_t1_ParamLimits

0xbdf7,	// (0x00026930) vod_t_nml_pane_t1

0x26fb,	// (0x0001d234) vod_opt_row_pane_ParamLimits

0x26fb,	// (0x0001d234) vod_opt_row_pane

0x270d,	// (0x0001d246) vod_t_sub_pane_t1_ParamLimits

0x270d,	// (0x0001d246) vod_t_sub_pane_t1

0x2726,	// (0x0001d25f) vod_det_cell_pane_ParamLimits

0x2726,	// (0x0001d25f) vod_det_cell_pane

0xbead,	// (0x000269e6) input_focus_pane_cp15

0x2737,	// (0x0001d270) vod_query_field_pane_t1

0x2745,	// (0x0001d27e) vod_opt_row_pane_g1_ParamLimits

0x2745,	// (0x0001d27e) vod_opt_row_pane_g1

0x2751,	// (0x0001d28a) vod_opt_row_pane_t1_ParamLimits

0x2751,	// (0x0001d28a) vod_opt_row_pane_t1

0x2770,	// (0x0001d2a9) vod_det_cell_field_pane

0x2779,	// (0x0001d2b2) vod_det_cell_pane_g1

0x2781,	// (0x0001d2ba) vod_det_cell_pane_t1

0xbead,	// (0x000269e6) input_focus_pane_cp16

0x2790,	// (0x0001d2c9) vod_det_cell_field_pane_t1

0xbe2e,	// (0x00026967) call7_btn_grp_pane_ParamLimits

0xbe2e,	// (0x00026967) call7_btn_grp_pane

0xbe3d,	// (0x00026976) call7_bubble_pane_ParamLimits

0xbe3d,	// (0x00026976) call7_bubble_pane

0xbe4b,	// (0x00026984) cell_call7_btn_pane_ParamLimits

0xbe4b,	// (0x00026984) cell_call7_btn_pane

0xbe5a,	// (0x00026993) call7_pane_g1_ParamLimits

0xbe5a,	// (0x00026993) call7_pane_g1

0xbe69,	// (0x000269a2) call7_windows_conf_pane_ParamLimits

0xbe69,	// (0x000269a2) call7_windows_conf_pane

0xbe83,	// (0x000269bc) popup_call7_1st_window_ParamLimits

0xbe83,	// (0x000269bc) popup_call7_1st_window

0xbe91,	// (0x000269ca) popup_call7_2nd_window_ParamLimits

0xbe91,	// (0x000269ca) popup_call7_2nd_window

0xbe9f,	// (0x000269d8) popup_call7_3rd_window_ParamLimits

0xbe9f,	// (0x000269d8) popup_call7_3rd_window

0xbead,	// (0x000269e6) bg_button_pane_cp26

0x20be,	// (0x0001cbf7) cell_call7_btn_pane_g1

0x20c7,	// (0x0001cc00) cell_call7_btn_pane_t1

0xbead,	// (0x000269e6) bg_popup_window_pane_cp12

0x279e,	// (0x0001d2d7) popup_call7_1st_window_g1

0x27a6,	// (0x0001d2df) popup_call7_1st_window_g2

0x27ae,	// (0x0001d2e7) popup_call7_1st_window_g3

0x0002,

0xfe80,	// (0x0002a9b9) popup_call7_1st_window_g

0x27b6,	// (0x0001d2ef) popup_call7_1st_window_t1

0x27c5,	// (0x0001d2fe) popup_call7_1st_window_t2

0x27d3,	// (0x0001d30c) popup_call7_1st_window_t3

0x0002,

0xfe87,	// (0x0002a9c0) popup_call7_1st_window_t

0xbead,	// (0x000269e6) bg_popup_window_pane_cp13

0x27e1,	// (0x0001d31a) popup_call7_2nd_window_g1

0x27e9,	// (0x0001d322) popup_call7_2nd_window_g2

0x27f1,	// (0x0001d32a) popup_call7_2nd_window_g3

0x0002,

0xfe8e,	// (0x0002a9c7) popup_call7_2nd_window_g

0x27b6,	// (0x0001d2ef) popup_call7_2nd_window_t1

0xbead,	// (0x000269e6) bg_popup_window_pane_cp14

0x27f9,	// (0x0001d332) call7_list_conf_pane

0x2801,	// (0x0001d33a) call7_list_conf_row_pane_ParamLimits

0x2801,	// (0x0001d33a) call7_list_conf_row_pane

0x2814,	// (0x0001d34d) call7_list_conf_row_pane_g1

0x281c,	// (0x0001d355) call7_list_conf_row_pane_g2

0x0001,

0xfe95,	// (0x0002a9ce) call7_list_conf_row_pane_g

0x2824,	// (0x0001d35d) call7_list_conf_row_pane_t1

0xbead,	// (0x000269e6) list_highlight_pane_cp22

0xb50f,	// (0x00026048) sso_option_pane_cp01_ParamLimits

0xb50f,	// (0x00026048) sso_option_pane_cp01

0xc533,	// (0x0002706c) msg_header_pane_ParamLimits

0xd3d1,	// (0x00027f0a) bg_button_pane_cp01_ParamLimits

0xd3e5,	// (0x00027f1e) input_focus_pane_cp07_ParamLimits

0x9e20,	// (0x00024959) popup_email_progress_window

0xc5ec,	// (0x00027125) popup_email_progress_window_g1

0x2832,	// (0x0001d36b) popup_email_progress_window_g2

0x0001,

0xfe9a,	// (0x0002a9d3) popup_email_progress_window_g

0x283a,	// (0x0001d373) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
