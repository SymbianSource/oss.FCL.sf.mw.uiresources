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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004ddf6 };

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
0x0711,	// (0x0004e507) Screen

0x071d,	// (0x0004e513) application_window

0x0769,	// (0x0004e55f) area_bottom_pane_ParamLimits

0x0769,	// (0x0004e55f) area_bottom_pane

0x07a2,	// (0x0004e598) area_top_pane_ParamLimits

0x07a2,	// (0x0004e598) area_top_pane

0x984a,	// (0x00057640) call_video_uplink_pane_ParamLimits

0x984a,	// (0x00057640) call_video_uplink_pane

0x0830,	// (0x0004e626) main_pane_ParamLimits

0x0830,	// (0x0004e626) main_pane

0xc62a,	// (0x0005a420) context_pane

0x3a1f,	// (0x00051815) navi_pane

0x3a56,	// (0x0005184c) popup_cale_events_window_ParamLimits

0x3a56,	// (0x0005184c) popup_cale_events_window

0xc63d,	// (0x0005a433) popup_mup_playback_window

0x3a6e,	// (0x00051864) signal_pane

0xa028,	// (0x00057e1e) main_browser_pane

0xa966,	// (0x0005875c) main_burst_pane

0x3737,	// (0x0005152d) main_calc_pane

0xc61e,	// (0x0005a414) main_cale_day_pane

0x0cc1,	// (0x0004eab7) main_cale_month_pane

0xc61e,	// (0x0005a414) main_cale_week_pane

0xa966,	// (0x0005875c) main_call_pane

0x9cbe,	// (0x00057ab4) main_call_poc_pane

0xa966,	// (0x0005875c) main_camera_pane

0xa966,	// (0x0005875c) main_chi_dic_pane

0xb165,	// (0x00058f5b) main_clock_pane

0x9cbe,	// (0x00057ab4) main_fmradio_pane

0xa966,	// (0x0005875c) main_graph_messa_pane

0x9cbe,	// (0x00057ab4) main_help_pane

0xa028,	// (0x00057e1e) main_im_pane

0x9f19,	// (0x00057d0f) main_image_pane_ParamLimits

0x9f19,	// (0x00057d0f) main_image_pane

0x9cbe,	// (0x00057ab4) main_location2_pane

0xa966,	// (0x0005875c) main_location_pane

0x9f19,	// (0x00057d0f) main_messa_pane

0x9cbe,	// (0x00057ab4) main_mp2_pane

0xa966,	// (0x0005875c) main_mp_pane

0x9cbe,	// (0x00057ab4) main_msg_pane

0x9cbe,	// (0x00057ab4) main_mup_eq_pane

0x9cbe,	// (0x00057ab4) main_mup_pane

0xa028,	// (0x00057e1e) main_notes_pane

0x9cbe,	// (0x00057ab4) main_pec_pane

0x9cbe,	// (0x00057ab4) main_phob_pane

0x9cbe,	// (0x00057ab4) main_pinb_pane

0x9cbe,	// (0x00057ab4) main_postcard_pane

0x9cbe,	// (0x00057ab4) main_qdial_pane

0xa966,	// (0x0005875c) main_skin_pane

0x9cbe,	// (0x00057ab4) main_smil2_pane

0xa966,	// (0x0005875c) main_smil_pane

0xa966,	// (0x0005875c) main_video_pane

0xa966,	// (0x0005875c) main_video_tele_pane

0x9f19,	// (0x00057d0f) main_viewer_pane_ParamLimits

0x9f19,	// (0x00057d0f) main_viewer_pane

0xa966,	// (0x0005875c) main_vorec_pane

0x378d,	// (0x00051583) popup_blid_sat_info_window_ParamLimits

0x378d,	// (0x00051583) popup_blid_sat_info_window

0x37f1,	// (0x000515e7) popup_dyc_status_message_window_ParamLimits

0x37f1,	// (0x000515e7) popup_dyc_status_message_window

0x380b,	// (0x00051601) popup_grid_large_graphic_window_ParamLimits

0x380b,	// (0x00051601) popup_grid_large_graphic_window

0x38cd,	// (0x000516c3) popup_loc_request_window_ParamLimits

0x38cd,	// (0x000516c3) popup_loc_request_window

0x39f3,	// (0x000517e9) popup_wml_address_window_ParamLimits

0x39f3,	// (0x000517e9) popup_wml_address_window

0x3575,	// (0x0005136b) call_muted_g1

0x31c3,	// (0x00050fb9) popup_call_audio_conf_window_ParamLimits

0x31c3,	// (0x00050fb9) popup_call_audio_conf_window

0x3585,	// (0x0005137b) popup_call_audio_first_window_ParamLimits

0x3585,	// (0x0005137b) popup_call_audio_first_window

0x35fb,	// (0x000513f1) popup_call_audio_in_window_ParamLimits

0x35fb,	// (0x000513f1) popup_call_audio_in_window

0x3637,	// (0x0005142d) popup_call_audio_out_window_ParamLimits

0x3637,	// (0x0005142d) popup_call_audio_out_window

0x3671,	// (0x00051467) popup_call_audio_second_window_ParamLimits

0x3671,	// (0x00051467) popup_call_audio_second_window

0x36c7,	// (0x000514bd) popup_call_audio_wait_window_ParamLimits

0x36c7,	// (0x000514bd) popup_call_audio_wait_window

0x36fc,	// (0x000514f2) popup_number_entry_window_ParamLimits

0x36fc,	// (0x000514f2) popup_number_entry_window

0x9876,	// (0x0005766c) bg_popup_call_pane_cp05_ParamLimits

0x9876,	// (0x0005766c) bg_popup_call_pane_cp05

0x9896,	// (0x0005768c) popup_number_entry_window_t1

0x98a9,	// (0x0005769f) popup_number_entry_window_t2

0x98bb,	// (0x000576b1) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0005ce3b) popup_number_entry_window_t

0x9902,	// (0x000576f8) text_title_cp2

0x9915,	// (0x0005770b) bg_popup_call_pane_cp_ParamLimits

0x9915,	// (0x0005770b) bg_popup_call_pane_cp

0x9923,	// (0x00057719) call_thumbnail_pane

0x992b,	// (0x00057721) popup_call_audio_in_window_g1_ParamLimits

0x992b,	// (0x00057721) popup_call_audio_in_window_g1

0x9937,	// (0x0005772d) popup_call_audio_in_window_g2_ParamLimits

0x9937,	// (0x0005772d) popup_call_audio_in_window_g2

0x9943,	// (0x00057739) popup_call_audio_in_window_g3_ParamLimits

0x9943,	// (0x00057739) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0005ce44) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0005ce44) popup_call_audio_in_window_g

0x994f,	// (0x00057745) popup_call_audio_in_window_t1_ParamLimits

0x994f,	// (0x00057745) popup_call_audio_in_window_t1

0x996b,	// (0x00057761) popup_call_audio_in_window_t2_ParamLimits

0x996b,	// (0x00057761) popup_call_audio_in_window_t2

0x9987,	// (0x0005777d) popup_call_audio_in_window_t3_ParamLimits

0x9987,	// (0x0005777d) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0005ce4b) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0005ce4b) popup_call_audio_in_window_t

0x9915,	// (0x0005770b) bg_popup_call_pane_cp01_ParamLimits

0x9915,	// (0x0005770b) bg_popup_call_pane_cp01

0x9923,	// (0x00057719) call_thumbnail_pane_cp02

0x999a,	// (0x00057790) call_type_pane_cp022

0x99a2,	// (0x00057798) popup_call_audio_out_window_g1_ParamLimits

0x99a2,	// (0x00057798) popup_call_audio_out_window_g1

0x99b4,	// (0x000577aa) popup_call_audio_out_window_g2_ParamLimits

0x99b4,	// (0x000577aa) popup_call_audio_out_window_g2

0x99c0,	// (0x000577b6) popup_call_audio_out_window_g3_ParamLimits

0x99c0,	// (0x000577b6) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0005ce52) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0005ce52) popup_call_audio_out_window_g

0x99d2,	// (0x000577c8) popup_call_audio_out_window_t1_ParamLimits

0x99d2,	// (0x000577c8) popup_call_audio_out_window_t1

0x99ea,	// (0x000577e0) popup_call_audio_out_window_t2_ParamLimits

0x99ea,	// (0x000577e0) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0005ce59) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0005ce59) popup_call_audio_out_window_t

0x99ff,	// (0x000577f5) bg_popup_call_pane_ParamLimits

0x99ff,	// (0x000577f5) bg_popup_call_pane

0x094f,	// (0x0004e745) call_thumbnail_pane_cp_ParamLimits

0x094f,	// (0x0004e745) call_thumbnail_pane_cp

0x9a83,	// (0x00057879) call_type_pane_cp01_ParamLimits

0x9a83,	// (0x00057879) call_type_pane_cp01

0x9ac7,	// (0x000578bd) popup_call_audio_first_window_g1_ParamLimits

0x9ac7,	// (0x000578bd) popup_call_audio_first_window_g1

0x9b13,	// (0x00057909) popup_call_audio_first_window_g2_ParamLimits

0x9b13,	// (0x00057909) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0005ce5e) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0005ce5e) popup_call_audio_first_window_g

0x9b57,	// (0x0005794d) popup_call_audio_first_window_t1_ParamLimits

0x9b57,	// (0x0005794d) popup_call_audio_first_window_t1

0x9c03,	// (0x000579f9) popup_call_audio_first_window_t4_ParamLimits

0x9c03,	// (0x000579f9) popup_call_audio_first_window_t4

0x9c8f,	// (0x00057a85) popup_call_audio_first_window_t5_ParamLimits

0x9c8f,	// (0x00057a85) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0005ce63) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0005ce63) popup_call_audio_first_window_t

0x9cbe,	// (0x00057ab4) bg_popup_call_pane_cp02

0x9cc8,	// (0x00057abe) call_type_pane_cp023

0x9cd0,	// (0x00057ac6) popup_call_audio_wait_window_g1

0x9cd8,	// (0x00057ace) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0005ce6a) popup_call_audio_wait_window_g

0x9ce0,	// (0x00057ad6) popup_call_audio_wait_window_t3

0x9cee,	// (0x00057ae4) bg_popup_call_pane_cp03_ParamLimits

0x9cee,	// (0x00057ae4) bg_popup_call_pane_cp03

0x9d4e,	// (0x00057b44) call_thumbnail_pane_cp011_ParamLimits

0x9d4e,	// (0x00057b44) call_thumbnail_pane_cp011

0x9d5a,	// (0x00057b50) call_type_pane_cp034_ParamLimits

0x9d5a,	// (0x00057b50) call_type_pane_cp034

0x9d96,	// (0x00057b8c) popup_call_audio_second_window_g1_ParamLimits

0x9d96,	// (0x00057b8c) popup_call_audio_second_window_g1

0x9dd2,	// (0x00057bc8) popup_call_audio_second_window_g2_ParamLimits

0x9dd2,	// (0x00057bc8) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0005ce6f) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0005ce6f) popup_call_audio_second_window_g

0x9e0e,	// (0x00057c04) popup_call_audio_second_window_t1_ParamLimits

0x9e0e,	// (0x00057c04) popup_call_audio_second_window_t1

0x9e8f,	// (0x00057c85) popup_call_audio_second_window_t2_ParamLimits

0x9e8f,	// (0x00057c85) popup_call_audio_second_window_t2

0x9ec5,	// (0x00057cbb) popup_call_audio_second_window_t3_ParamLimits

0x9ec5,	// (0x00057cbb) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0005ce74) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0005ce74) popup_call_audio_second_window_t

0x9cbe,	// (0x00057ab4) bg_popup_call_pane_cp04

0x9efb,	// (0x00057cf1) list_conf_pane

0x9f03,	// (0x00057cf9) popup_call_audio_conf_window_t1

0x9f11,	// (0x00057d07) call_thumbnail_pane_g1

0x9f19,	// (0x00057d0f) bg_pinb_pane_ParamLimits

0x9f19,	// (0x00057d0f) bg_pinb_pane

0x9f27,	// (0x00057d1d) find_pinb_pane

0x9f19,	// (0x00057d0f) listscroll_pinb_pane_ParamLimits

0x9f19,	// (0x00057d0f) listscroll_pinb_pane

0x9f31,	// (0x00057d27) pinb_bg_pane_g1

0x9f31,	// (0x00057d27) pinb_bg_pane_g2

0x9f31,	// (0x00057d27) pinb_bg_pane_g3

0x9f31,	// (0x00057d27) pinb_bg_pane_g4

0x9f31,	// (0x00057d27) pinb_bg_pane_g5

0x9f31,	// (0x00057d27) pinb_bg_pane_g6

0x9f31,	// (0x00057d27) pinb_bg_pane_g7

0x9f31,	// (0x00057d27) pinb_bg_pane_g8

0x9f31,	// (0x00057d27) pinb_bg_pane_g9

0x9f31,	// (0x00057d27) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0005ce7b) pinb_bg_pane_g

0x97fb,	// (0x000575f1) grid_pinb_pane

0x97fb,	// (0x000575f1) list_pinb_pane

0x9868,	// (0x0005765e) scroll_pane_cp01_ParamLimits

0x9868,	// (0x0005765e) scroll_pane_cp01

0x9f3b,	// (0x00057d31) find_pinb_pane_g1_ParamLimits

0x9f3b,	// (0x00057d31) find_pinb_pane_g1

0x9f53,	// (0x00057d49) find_pinb_pane_t1

0x9f65,	// (0x00057d5b) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0005ce95) find_pinb_pane_t

0x9f7a,	// (0x00057d70) input_focus_pane_cp01_ParamLimits

0x9f7a,	// (0x00057d70) input_focus_pane_cp01

0x9f86,	// (0x00057d7c) cell_pinb_pane_ParamLimits

0x9f86,	// (0x00057d7c) cell_pinb_pane

0x9f94,	// (0x00057d8a) cell_pinb_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) cell_pinb_pane_g1

0x9fa2,	// (0x00057d98) cell_pinb_pane_g2_ParamLimits

0x9fa2,	// (0x00057d98) cell_pinb_pane_g2

0x9fa2,	// (0x00057d98) cell_pinb_pane_g3_ParamLimits

0x9fa2,	// (0x00057d98) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0005ce9a) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0005ce9a) cell_pinb_pane_g

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp01

0x9f86,	// (0x00057d7c) list_pinb_item_pane_ParamLimits

0x9f86,	// (0x00057d7c) list_pinb_item_pane

0x97fb,	// (0x000575f1) list_highlight_pane_cp02

0x9fb0,	// (0x00057da6) list_pinb_item_pane_g1_ParamLimits

0x9fb0,	// (0x00057da6) list_pinb_item_pane_g1

0x9fa2,	// (0x00057d98) list_pinb_item_pane_g2_ParamLimits

0x9fa2,	// (0x00057d98) list_pinb_item_pane_g2

0x9f94,	// (0x00057d8a) list_pinb_item_pane_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_pinb_item_pane_g3

0x9fa2,	// (0x00057d98) list_pinb_item_pane_g4_ParamLimits

0x9fa2,	// (0x00057d98) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0005cea1) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0005cea1) list_pinb_item_pane_g

0x9fbe,	// (0x00057db4) list_pinb_item_pane_t1_ParamLimits

0x9fbe,	// (0x00057db4) list_pinb_item_pane_t1

0x0993,	// (0x0004e789) calc_display_pane

0x09b8,	// (0x0004e7ae) calc_paper_pane

0x09db,	// (0x0004e7d1) grid_calc_pane

0x9cbe,	// (0x00057ab4) bg_list_pane_cp01

0x0a09,	// (0x0004e7ff) clock_g1

0x0a11,	// (0x0004e807) clock_g2

0x0001,

0xf0b4,	// (0x0005ceaa) clock_g

0x0a19,	// (0x0004e80f) clock_t1_ParamLimits

0x0a19,	// (0x0004e80f) clock_t1

0x0a2e,	// (0x0004e824) clock_t2_ParamLimits

0x0a2e,	// (0x0004e824) clock_t2

0x0a40,	// (0x0004e836) clock_t3_ParamLimits

0x0a40,	// (0x0004e836) clock_t3

0x0a52,	// (0x0004e848) clock_t4_ParamLimits

0x0a52,	// (0x0004e848) clock_t4

0x0a64,	// (0x0004e85a) clock_t5_ParamLimits

0x0a64,	// (0x0004e85a) clock_t5

0x0a79,	// (0x0004e86f) clock_t6_ParamLimits

0x0a79,	// (0x0004e86f) clock_t6

0x0a8b,	// (0x0004e881) clock_t7_ParamLimits

0x0a8b,	// (0x0004e881) clock_t7

0x0a9d,	// (0x0004e893) clock_t8_ParamLimits

0x0a9d,	// (0x0004e893) clock_t8

0x0ab1,	// (0x0004e8a7) clock_t9_ParamLimits

0x0ab1,	// (0x0004e8a7) clock_t9

0x0008,

0xf0b9,	// (0x0005ceaf) clock_t_ParamLimits

0xf0b9,	// (0x0005ceaf) clock_t

0x9fda,	// (0x00057dd0) popup_clock_analogue_window_cp02

0x9fda,	// (0x00057dd0) popup_clock_digital_window_cp01

0x9cbe,	// (0x00057ab4) listscroll_help_pane

0x9cbe,	// (0x00057ab4) phob_pre_status_pane

0x9fe2,	// (0x00057dd8) grid_qdial_pane

0x9f19,	// (0x00057d0f) listscroll_mce_pane

0x9f19,	// (0x00057d0f) bg_notes_pane

0x9fec,	// (0x00057de2) list_notes_pane

0x0ac7,	// (0x0004e8bd) scroll_pane_cp06

0x9ffa,	// (0x00057df0) bg_calc_paper_pane

0xa00e,	// (0x00057e04) list_calc_pane

0xa028,	// (0x00057e1e) bg_calc_display_pane

0x0adb,	// (0x0004e8d1) calc_display_pane_t1

0x0af0,	// (0x0004e8e6) calc_display_pane_t2

0xa034,	// (0x00057e2a) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0005cec2) calc_display_pane_t

0x0b05,	// (0x0004e8fb) cell_calc_pane_ParamLimits

0x0b05,	// (0x0004e8fb) cell_calc_pane

0xa046,	// (0x00057e3c) bg_calc_paper_pane_g1

0xa052,	// (0x00057e48) bg_calc_paper_pane_g2

0xa05e,	// (0x00057e54) bg_calc_paper_pane_g3

0xa06a,	// (0x00057e60) bg_calc_paper_pane_g4

0xa076,	// (0x00057e6c) bg_calc_paper_pane_g5

0x0b40,	// (0x0004e936) bg_calc_paper_pane_g6

0x0b53,	// (0x0004e949) bg_calc_paper_pane_g7

0x0b66,	// (0x0004e95c) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0005cec9) bg_calc_paper_pane_g

0x0b79,	// (0x0004e96f) calc_bg_paper_pane_g9

0x0b8c,	// (0x0004e982) list_calc_item_pane_ParamLimits

0x0b8c,	// (0x0004e982) list_calc_item_pane

0xa082,	// (0x00057e78) list_calc_item_pane_g1

0xa08f,	// (0x00057e85) list_calc_item_pane_t1_ParamLimits

0xa08f,	// (0x00057e85) list_calc_item_pane_t1

0x0ba4,	// (0x0004e99a) list_calc_item_pane_t2_ParamLimits

0x0ba4,	// (0x0004e99a) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0005ceda) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0005ceda) list_calc_item_pane_t

0x9f31,	// (0x00057d27) cell_calc_pane_g1

0xa0a1,	// (0x00057e97) grid_highlight_pane_cp02

0xa910,	// (0x00058706) bg_calc_display_pane_g1

0x0bd6,	// (0x0004e9cc) bg_calc_display_pane_g2

0x0be0,	// (0x0004e9d6) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0005cee4) bg_calc_display_pane_g

0x0be9,	// (0x0004e9df) cell_qdial_pane_ParamLimits

0x0be9,	// (0x0004e9df) cell_qdial_pane

0x0bfd,	// (0x0004e9f3) cell_qdial_pane_g1_ParamLimits

0x0bfd,	// (0x0004e9f3) cell_qdial_pane_g1

0x0c13,	// (0x0004ea09) cell_qdial_pane_g2_ParamLimits

0x0c13,	// (0x0004ea09) cell_qdial_pane_g2

0xa0c3,	// (0x00057eb9) cell_qdial_pane_g3_ParamLimits

0xa0c3,	// (0x00057eb9) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0005ceeb) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0005ceeb) cell_qdial_pane_g

0x0c3a,	// (0x0004ea30) cell_qdial_pane_t1_ParamLimits

0x0c3a,	// (0x0004ea30) cell_qdial_pane_t1

0x0c52,	// (0x0004ea48) cell_qdial_pane_t2_ParamLimits

0x0c52,	// (0x0004ea48) cell_qdial_pane_t2

0x0c65,	// (0x0004ea5b) cell_qdial_pane_t3_ParamLimits

0x0c65,	// (0x0004ea5b) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0005cef4) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0005cef4) cell_qdial_pane_t

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp04

0xa0cf,	// (0x00057ec5) thumbnail_qdial_pane_ParamLimits

0xa0cf,	// (0x00057ec5) thumbnail_qdial_pane

0xa12b,	// (0x00057f21) list_help_pane

0xa134,	// (0x00057f2a) scroll_pane_cp02

0x0c78,	// (0x0004ea6e) help_list_pane_t1_ParamLimits

0x0c78,	// (0x0004ea6e) help_list_pane_t1

0xa13d,	// (0x00057f33) bg_notes_pane_g2

0xa145,	// (0x00057f3b) bg_notes_pane_g3

0xa14d,	// (0x00057f43) notes_bg_pane_g1

0xa155,	// (0x00057f4b) notes_bg_pane_g4

0xa15d,	// (0x00057f53) notes_bg_pane_g5

0xa165,	// (0x00057f5b) notes_bg_pane_g6

0xa16d,	// (0x00057f63) notes_bg_pane_g7

0xa175,	// (0x00057f6b) notes_bg_pane_g8

0xa17d,	// (0x00057f73) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0005cf12) notes_bg_pane_g

0x0c9c,	// (0x0004ea92) list_notes_text_pane_ParamLimits

0x0c9c,	// (0x0004ea92) list_notes_text_pane

0xa185,	// (0x00057f7b) list_notes_text_pane_g1

0x0cb3,	// (0x0004eaa9) list_notes_text_pane_t1

0x0cc1,	// (0x0004eab7) listscroll_cale_week_pane

0x0ceb,	// (0x0004eae1) bg_cale_heading_pane

0x0d0f,	// (0x0004eb05) bg_cale_pane_cp01

0x0d2c,	// (0x0004eb22) cale_week_corner_pane

0x0d4b,	// (0x0004eb41) cale_week_day_heading_pane

0x0d74,	// (0x0004eb6a) cale_week_scroll_pane_g1

0x0d93,	// (0x0004eb89) cale_week_scroll_pane_g2

0x0dab,	// (0x0004eba1) cale_week_scroll_pane_g3

0x0dc3,	// (0x0004ebb9) cale_week_scroll_pane_g4

0x0ddb,	// (0x0004ebd1) cale_week_scroll_pane_g5

0x0dfb,	// (0x0004ebf1) cale_week_scroll_pane_g6

0x0e1b,	// (0x0004ec11) cale_week_scroll_pane_g7

0x0e3f,	// (0x0004ec35) cale_week_scroll_pane_g8

0x0e63,	// (0x0004ec59) cale_week_scroll_pane_g9

0x0e7b,	// (0x0004ec71) cale_week_scroll_pane_g10

0x0e93,	// (0x0004ec89) cale_week_scroll_pane_g11

0x0eab,	// (0x0004eca1) cale_week_scroll_pane_g12

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g13

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g14

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0005cf21) cale_week_scroll_pane_g

0x0f17,	// (0x0004ed0d) cale_week_time_pane

0x0f3b,	// (0x0004ed31) grid_cale_week_pane

0xa1ba,	// (0x00057fb0) scroll_pane_cp08

0x0f6d,	// (0x0004ed63) cell_cale_week_pane_ParamLimits

0x0f6d,	// (0x0004ed63) cell_cale_week_pane

0x1009,	// (0x0004edff) cale_week_day_heading_pane_t1

0x1033,	// (0x0004ee29) cale_week_day_heading_pane_t2

0x1062,	// (0x0004ee58) cale_week_day_heading_pane_t3

0x1091,	// (0x0004ee87) cale_week_day_heading_pane_t4

0x10c0,	// (0x0004eeb6) cale_week_day_heading_pane_t5

0x10f3,	// (0x0004eee9) cale_week_day_heading_pane_t6

0x112a,	// (0x0004ef20) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0005cf42) cale_week_day_heading_pane_t

0xa1d7,	// (0x00057fcd) bg_cale_side_pane

0x1154,	// (0x0004ef4a) cale_week_time_pane_t1

0x116e,	// (0x0004ef64) cale_week_time_pane_t2

0x1188,	// (0x0004ef7e) cale_week_time_pane_t3

0x11a2,	// (0x0004ef98) cale_week_time_pane_t4

0x11bc,	// (0x0004efb2) cale_week_time_pane_t5

0x11d6,	// (0x0004efcc) cale_week_time_pane_t6

0x11f6,	// (0x0004efec) cale_week_time_pane_t7

0x121c,	// (0x0004f012) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0005cf51) cale_week_time_pane_t

0x1242,	// (0x0004f038) cell_cale_week_pane_g2

0x1266,	// (0x0004f05c) cell_cale_week_pane_g3_ParamLimits

0x1266,	// (0x0004f05c) cell_cale_week_pane_g3

0xa919,	// (0x0005870f) grid_highlight_pane_cp07

0xa921,	// (0x00058717) listscroll_gms_pane

0xa92b,	// (0x00058721) grid_gms_pane

0xa934,	// (0x0005872a) listscroll_gms_pane_g1

0xa93c,	// (0x00058732) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0005cf62) listscroll_gms_pane_g

0x127e,	// (0x0004f074) scroll_pane_cp010

0x1289,	// (0x0004f07f) cell_gms_pane_ParamLimits

0x1289,	// (0x0004f07f) cell_gms_pane

0x12a0,	// (0x0004f096) cell_gms_pane_g1

0xa944,	// (0x0005873a) cell_gms_pane_g2

0xa94c,	// (0x00058742) cell_gms_pane_g3

0xa955,	// (0x0005874b) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0005cf67) cell_gms_pane_g

0xa95e,	// (0x00058754) grid_highlight_pane_cp09

0x34f9,	// (0x000512ef) phob_pre_status_pane_g1

0x3501,	// (0x000512f7) phob_pre_status_pane_g2

0x3509,	// (0x000512ff) phob_pre_status_pane_g3

0x3511,	// (0x00051307) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0005d32b) phob_pre_status_pane_g

0x3521,	// (0x00051317) phob_pre_status_pane_t1

0x3531,	// (0x00051327) phob_pre_status_pane_t2

0x3541,	// (0x00051337) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0005d336) phob_pre_status_pane_t

0xa966,	// (0x0005875c) bg_list_pane_cp05

0x12b0,	// (0x0004f0a6) grid_vorec_pane

0x12ba,	// (0x0004f0b0) vorec_t1

0x12c8,	// (0x0004f0be) vorec_t2

0x12d6,	// (0x0004f0cc) vorec_t3

0x12e4,	// (0x0004f0da) vorec_t4

0xa8e6,	// (0x000586dc) vorec_t5

0x8af8,	// (0x000568ee) vorec_t6

0x0004,

0xf17a,	// (0x0005cf70) vorec_t

0x8b06,	// (0x000568fc) wait_bar_pane_cp01

0x1300,	// (0x0004f0f6) cell_vorec_pane_ParamLimits

0x1300,	// (0x0004f0f6) cell_vorec_pane

0xa1e5,	// (0x00057fdb) cell_vorec_pane_g1

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp05

0x9868,	// (0x0005765e) cams_zoom_pane

0x9868,	// (0x0005765e) image_vga_pane

0x9f94,	// (0x00057d8a) main_camera_pane_g1

0x9f94,	// (0x00057d8a) main_camera_pane_g2

0x9f94,	// (0x00057d8a) main_camera_pane_g3

0x9f94,	// (0x00057d8a) main_camera_pane_g4

0x9f94,	// (0x00057d8a) main_camera_pane_g5

0x9f94,	// (0x00057d8a) main_camera_pane_g6

0x9f94,	// (0x00057d8a) main_camera_pane_g7

0x0007,

0xf185,	// (0x0005cf7b) main_camera_pane_g

0xa96e,	// (0x00058764) main_camera_pane_t1

0xa96e,	// (0x00058764) main_camera_pane_t2

0x0001,

0xf196,	// (0x0005cf8c) main_camera_pane_t

0x1329,	// (0x0004f11f) cams_zoom_pane_cp_ParamLimits

0x1329,	// (0x0004f11f) cams_zoom_pane_cp

0x135d,	// (0x0004f153) image_cif_pane_ParamLimits

0x135d,	// (0x0004f153) image_cif_pane

0x97fb,	// (0x000575f1) image_subqcif_pane

0x136f,	// (0x0004f165) main_video_pane_g1_ParamLimits

0x136f,	// (0x0004f165) main_video_pane_g1

0x139d,	// (0x0004f193) main_video_pane_g2_ParamLimits

0x139d,	// (0x0004f193) main_video_pane_g2

0x13d7,	// (0x0004f1cd) main_video_pane_g3_ParamLimits

0x13d7,	// (0x0004f1cd) main_video_pane_g3

0x13d7,	// (0x0004f1cd) main_video_pane_g4_ParamLimits

0x13d7,	// (0x0004f1cd) main_video_pane_g4

0x140b,	// (0x0004f201) main_video_pane_g5_ParamLimits

0x140b,	// (0x0004f201) main_video_pane_g5

0xa982,	// (0x00058778) main_video_pane_g6_ParamLimits

0xa982,	// (0x00058778) main_video_pane_g6

0x0006,

0xf19b,	// (0x0005cf91) main_video_pane_g_ParamLimits

0xf19b,	// (0x0005cf91) main_video_pane_g

0x1427,	// (0x0004f21d) main_video_pane_t1_ParamLimits

0x1427,	// (0x0004f21d) main_video_pane_t1

0xa99c,	// (0x00058792) cams_zoom_pane_g1

0xa99c,	// (0x00058792) cams_zoom_pane_g2

0xa99c,	// (0x00058792) cams_zoom_pane_g3

0xa99c,	// (0x00058792) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0005cfa0) cams_zoom_pane_g

0x147f,	// (0x0004f275) grid_cams_pane

0x1499,	// (0x0004f28f) linegrid_cams_pane

0x14ab,	// (0x0004f2a1) cell_cams_pane_ParamLimits

0x14ab,	// (0x0004f2a1) cell_cams_pane

0xa9a6,	// (0x0005879c) cams_burst_image_pane

0xa9ae,	// (0x000587a4) cell_cams_pane_g1

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp03

0x9f31,	// (0x00057d27) mp_bg_pane_g1

0x97fb,	// (0x000575f1) bg_list_pane_cp03

0x97fb,	// (0x000575f1) bg_mp_pane

0x97fb,	// (0x000575f1) grid_mp_pane

0xa99c,	// (0x00058792) media_player_g1

0xaefa,	// (0x00058cf0) media_player_t1

0xaefa,	// (0x00058cf0) media_player_t2

0xaefa,	// (0x00058cf0) media_player_t3

0xaefa,	// (0x00058cf0) media_player_t4

0xaefa,	// (0x00058cf0) media_player_t5

0xaefa,	// (0x00058cf0) media_player_t6

0xaefa,	// (0x00058cf0) media_player_t7

0x0006,

0xf51f,	// (0x0005d315) media_player_t

0x97fb,	// (0x000575f1) wait_bar_pane_cp02

0xf504,	// (0x0005d2fa) main_usb_pane_t

0xb165,	// (0x00058f5b) cell_mp_pane

0x9f31,	// (0x00057d27) cell_mp_pane_g1

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp06

0xa9b6,	// (0x000587ac) grid_skin_colour_pane

0xa9be,	// (0x000587b4) list_highlight_pane_cp03

0x14cd,	// (0x0004f2c3) skin_g1

0xa9c6,	// (0x000587bc) skin_t1

0xa9d5,	// (0x000587cb) skin_t2

0x0001,

0xf1d8,	// (0x0005cfce) skin_t

0x14d5,	// (0x0004f2cb) cell_skin_colour_pane_ParamLimits

0x14d5,	// (0x0004f2cb) cell_skin_colour_pane

0xa9e3,	// (0x000587d9) cell_skin_colour_pane_g1

0x1548,	// (0x0004f33e) call_video_g1_ParamLimits

0x1548,	// (0x0004f33e) call_video_g1

0x1564,	// (0x0004f35a) call_video_g2_ParamLimits

0x1564,	// (0x0004f35a) call_video_g2

0x0001,

0xf1dd,	// (0x0005cfd3) call_video_g_ParamLimits

0xf1dd,	// (0x0005cfd3) call_video_g

0x15a9,	// (0x0004f39f) call_video_uplink_pane_cp1_ParamLimits

0x15a9,	// (0x0004f39f) call_video_uplink_pane_cp1

0xa9f5,	// (0x000587eb) call_video_uplink_pane_cp2

0x164a,	// (0x0004f440) video_down_crop_pane_ParamLimits

0x164a,	// (0x0004f440) video_down_crop_pane

0x1733,	// (0x0004f529) video_down_pane_ParamLimits

0x1733,	// (0x0004f529) video_down_pane

0xa9fd,	// (0x000587f3) video_down_subqcif_pane_ParamLimits

0xa9fd,	// (0x000587f3) video_down_subqcif_pane

0xaa17,	// (0x0005880d) video_down_subqcif_pane_cp_ParamLimits

0xaa17,	// (0x0005880d) video_down_subqcif_pane_cp

0xaa3f,	// (0x00058835) im_reading_pane_ParamLimits

0xaa3f,	// (0x00058835) im_reading_pane

0x183e,	// (0x0004f634) im_writing_pane_ParamLimits

0x183e,	// (0x0004f634) im_writing_pane

0x185c,	// (0x0004f652) im_reading_pane_t1

0xaa59,	// (0x0005884f) list_im_pane

0xaa6a,	// (0x00058860) scroll_pane_cp07

0x189b,	// (0x0004f691) im_writing_pane_t1_ParamLimits

0x189b,	// (0x0004f691) im_writing_pane_t1

0xaa83,	// (0x00058879) im_writing_pane_t2_ParamLimits

0xaa83,	// (0x00058879) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0005cfdd) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0005cfdd) im_writing_pane_t

0x9cbe,	// (0x00057ab4) input_focus_pane_cp04

0x9cbe,	// (0x00057ab4) input_focus_pane_cp05

0x18b0,	// (0x0004f6a6) list_im_single_pane_ParamLimits

0x18b0,	// (0x0004f6a6) list_im_single_pane

0xaaa0,	// (0x00058896) list_single_im_pane_t1

0xa966,	// (0x0005875c) blid_accuracy_pane

0xa966,	// (0x0005875c) blid_compass_pane

0xc5d6,	// (0x0005a3cc) main_location_t1

0xc5d6,	// (0x0005a3cc) main_location_t2

0xc5d6,	// (0x0005a3cc) main_location_t3

0x0002,

0xf52e,	// (0x0005d324) main_location_t

0x9cbe,	// (0x00057ab4) aid_levels_location

0x9f31,	// (0x00057d27) blid_accuracy_pane_g1

0x9f31,	// (0x00057d27) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0005d02c) blid_accuracy_pane_g

0xaada,	// (0x000588d0) wml_content_pane

0xab18,	// (0x0005890e) wml_button_pane_ParamLimits

0xab18,	// (0x0005890e) wml_button_pane

0x18c6,	// (0x0004f6bc) wml_list_single_large_pane_ParamLimits

0x18c6,	// (0x0004f6bc) wml_list_single_large_pane

0x18df,	// (0x0004f6d5) wml_list_single_medium_pane_ParamLimits

0x18df,	// (0x0004f6d5) wml_list_single_medium_pane

0x18f9,	// (0x0004f6ef) wml_list_single_small_pane_ParamLimits

0x18f9,	// (0x0004f6ef) wml_list_single_small_pane

0xab2c,	// (0x00058922) wml_selection_box_pane_ParamLimits

0xab2c,	// (0x00058922) wml_selection_box_pane

0xab3f,	// (0x00058935) wml_list_single_pane_t1

0xab4e,	// (0x00058944) wml_list_single_medium_pane_t1

0xab5d,	// (0x00058953) wml_list_single_large_pane_t1

0xab6c,	// (0x00058962) input_focus_pane_cp02_ParamLimits

0xab6c,	// (0x00058962) input_focus_pane_cp02

0xab7f,	// (0x00058975) wml_selection_box_pane_g1

0xab88,	// (0x0005897e) wml_selection_box_pane_t1_ParamLimits

0xab88,	// (0x0005897e) wml_selection_box_pane_t1

0x9f19,	// (0x00057d0f) bg_wml_button_pane_ParamLimits

0x9f19,	// (0x00057d0f) bg_wml_button_pane

0xaba0,	// (0x00058996) wml_button_pane_g1

0xaba8,	// (0x0005899e) wml_button_pane_t1

0xaba0,	// (0x00058996) wml_button_bg_pane_g1

0xabb8,	// (0x000589ae) wml_button_bg_pane_g2

0xabc0,	// (0x000589b6) wml_button_bg_pane_g3

0xabc8,	// (0x000589be) wml_button_bg_pane_g4

0xabd0,	// (0x000589c6) wml_button_bg_pane_g5

0xabd8,	// (0x000589ce) wml_button_bg_pane_g6

0xabe0,	// (0x000589d6) wml_button_bg_pane_g7

0xabe8,	// (0x000589de) wml_button_bg_pane_g8

0xabf0,	// (0x000589e6) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0005cfe2) wml_button_bg_pane_g

0x1915,	// (0x0004f70b) bg_list_pane_cp02

0xabf8,	// (0x000589ee) mce_header_pane_ParamLimits

0xabf8,	// (0x000589ee) mce_header_pane

0xac0e,	// (0x00058a04) mce_icon_pane

0xac0e,	// (0x00058a04) mce_image_pane

0xac17,	// (0x00058a0d) mce_text_pane_ParamLimits

0xac17,	// (0x00058a0d) mce_text_pane

0x191f,	// (0x0004f715) scroll_pane_cp03

0xab10,	// (0x00058906) scroll_pane_cp04

0xac2a,	// (0x00058a20) scroll_pane_cp05_ParamLimits

0xac2a,	// (0x00058a20) scroll_pane_cp05

0x1929,	// (0x0004f71f) mce_header_field_pane_ParamLimits

0x1929,	// (0x0004f71f) mce_header_field_pane

0x1942,	// (0x0004f738) mce_header_field_pane_2_ParamLimits

0x1942,	// (0x0004f738) mce_header_field_pane_2

0x1958,	// (0x0004f74e) mce_header_field_pane_3

0x1960,	// (0x0004f756) list_single_mce_message_pane_ParamLimits

0x1960,	// (0x0004f756) list_single_mce_message_pane

0x197c,	// (0x0004f772) list_single_mce_smart_pane_ParamLimits

0x197c,	// (0x0004f772) list_single_mce_smart_pane

0xac36,	// (0x00058a2c) input_focus_pane_cp03

0xac3f,	// (0x00058a35) list_header_data_pane

0x19a3,	// (0x0004f799) mce_header_field_pane_t1

0x19b3,	// (0x0004f7a9) list_single_mce_header_pane_ParamLimits

0x19b3,	// (0x0004f7a9) list_single_mce_header_pane

0xac47,	// (0x00058a3d) list_single_mce_header_pane_t1

0xac56,	// (0x00058a4c) list_single_mce_message_pane_g1

0xac5e,	// (0x00058a54) list_single_mce_message_pane_t1

0x19ed,	// (0x0004f7e3) bg_cale_heading_pane_cp01_ParamLimits

0x19ed,	// (0x0004f7e3) bg_cale_heading_pane_cp01

0xac6c,	// (0x00058a62) bg_cale_pane_cp02_ParamLimits

0xac6c,	// (0x00058a62) bg_cale_pane_cp02

0x1a3f,	// (0x0004f835) cale_month_corner_pane

0x1a5e,	// (0x0004f854) cale_month_day_heading_pane_ParamLimits

0x1a5e,	// (0x0004f854) cale_month_day_heading_pane

0x1ac8,	// (0x0004f8be) cale_month_pane_g1_ParamLimits

0x1ac8,	// (0x0004f8be) cale_month_pane_g1

0x1b0f,	// (0x0004f905) cale_month_pane_g2_ParamLimits

0x1b0f,	// (0x0004f905) cale_month_pane_g2

0x1b4b,	// (0x0004f941) cale_month_pane_g3_ParamLimits

0x1b4b,	// (0x0004f941) cale_month_pane_g3

0x1b9f,	// (0x0004f995) cale_month_pane_g4_ParamLimits

0x1b9f,	// (0x0004f995) cale_month_pane_g4

0x1bf3,	// (0x0004f9e9) cale_month_pane_g5_ParamLimits

0x1bf3,	// (0x0004f9e9) cale_month_pane_g5

0x1c4f,	// (0x0004fa45) cale_month_pane_g6_ParamLimits

0x1c4f,	// (0x0004fa45) cale_month_pane_g6

0x1cb7,	// (0x0004faad) cale_month_pane_g7_ParamLimits

0x1cb7,	// (0x0004faad) cale_month_pane_g7

0x1d23,	// (0x0004fb19) cale_month_pane_g8_ParamLimits

0x1d23,	// (0x0004fb19) cale_month_pane_g8

0x1d8f,	// (0x0004fb85) cale_month_pane_g9_ParamLimits

0x1d8f,	// (0x0004fb85) cale_month_pane_g9

0x1df3,	// (0x0004fbe9) cale_month_pane_g10_ParamLimits

0x1df3,	// (0x0004fbe9) cale_month_pane_g10

0x1e45,	// (0x0004fc3b) cale_month_pane_g11_ParamLimits

0x1e45,	// (0x0004fc3b) cale_month_pane_g11

0x1e97,	// (0x0004fc8d) cale_month_pane_g12_ParamLimits

0x1e97,	// (0x0004fc8d) cale_month_pane_g12

0x1eef,	// (0x0004fce5) cale_month_pane_g13_ParamLimits

0x1eef,	// (0x0004fce5) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0005cff5) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0005cff5) cale_month_pane_g

0x1f47,	// (0x0004fd3d) cale_month_week_pane

0x1f6b,	// (0x0004fd61) grid_cale_month_pane_ParamLimits

0x1f6b,	// (0x0004fd61) grid_cale_month_pane

0x1fcc,	// (0x0004fdc2) cale_month_day_heading_pane_t1

0x2052,	// (0x0004fe48) cale_month_day_heading_pane_t2

0x20cb,	// (0x0004fec1) cale_month_day_heading_pane_t3

0x2144,	// (0x0004ff3a) cale_month_day_heading_pane_t4

0x21c5,	// (0x0004ffbb) cale_month_day_heading_pane_t5

0x224e,	// (0x00050044) cale_month_day_heading_pane_t6

0x22df,	// (0x000500d5) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0005d010) cale_month_day_heading_pane_t

0xa1d7,	// (0x00057fcd) bg_cale_side_pane_cp01

0x2370,	// (0x00050166) cale_month_week_pane_t1

0x2389,	// (0x0005017f) cale_month_week_pane_t2

0x23a2,	// (0x00050198) cale_month_week_pane_t3

0x23bb,	// (0x000501b1) cale_month_week_pane_t4

0x23d4,	// (0x000501ca) cale_month_week_pane_t5

0x23ed,	// (0x000501e3) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0005d01f) cale_month_week_pane_t

0x2412,	// (0x00050208) cell_cale_month_pane_ParamLimits

0x2412,	// (0x00050208) cell_cale_month_pane

0xa1ef,	// (0x00057fe5) cell_cale_month_pane_g1

0x2550,	// (0x00050346) cell_cale_month_pane_t1_ParamLimits

0x2550,	// (0x00050346) cell_cale_month_pane_t1

0xa919,	// (0x0005870f) grid_highlight_pane_cp08

0x9f31,	// (0x00057d27) main_smil_g1

0x257c,	// (0x00050372) smil_status_pane

0xacab,	// (0x00058aa1) smil_text_pane

0xc4ec,	// (0x0005a2e2) bg_popup_call3_rect_pane_g8

0xc4f4,	// (0x0005a2ea) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005d2b8) bg_popup_call3_rect_pane_g

0xc69f,	// (0x0005a495) smil_status_volume_pane_g1

0xacb5,	// (0x00058aab) smil_status_pane_t1

0xa35b,	// (0x00058151) volume_smil_pane

0xaccc,	// (0x00058ac2) list_smil_text_pane

0x2591,	// (0x00050387) scroll_pane_cp011

0x259c,	// (0x00050392) smil_text_list_pane_t1_ParamLimits

0x259c,	// (0x00050392) smil_text_list_pane_t1

0xa1fb,	// (0x00057ff1) aid_volume_smil_ParamLimits

0xa1fb,	// (0x00057ff1) aid_volume_smil

0x9f31,	// (0x00057d27) smil_volume_pane_g1

0x9f31,	// (0x00057d27) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0005d02c) smil_volume_pane_g

0x0cc1,	// (0x0004eab7) listscroll_cale_day_pane

0xacd6,	// (0x00058acc) bg_cale_pane

0xacee,	// (0x00058ae4) list_cale_pane

0xad11,	// (0x00058b07) scroll_pane_cp09

0xad22,	// (0x00058b18) cale_bg_pane_g1

0xad2a,	// (0x00058b20) cale_bg_pane_g2

0xad32,	// (0x00058b28) cale_bg_pane_g3

0xad3a,	// (0x00058b30) cale_bg_pane_g4

0xad42,	// (0x00058b38) cale_bg_pane_g5

0xad4a,	// (0x00058b40) cale_bg_pane_g6

0xad52,	// (0x00058b48) cale_bg_pane_g7

0xad5a,	// (0x00058b50) cale_bg_pane_g8

0xad62,	// (0x00058b58) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0005d031) cale_bg_pane_g

0xad6a,	// (0x00058b60) list_cale_time_pane_ParamLimits

0xad6a,	// (0x00058b60) list_cale_time_pane

0xad81,	// (0x00058b77) list_cale_time_pane_g1_ParamLimits

0xad81,	// (0x00058b77) list_cale_time_pane_g1

0xad8d,	// (0x00058b83) list_cale_time_pane_g2_ParamLimits

0xad8d,	// (0x00058b83) list_cale_time_pane_g2

0x25f0,	// (0x000503e6) list_cale_time_pane_g3_ParamLimits

0x25f0,	// (0x000503e6) list_cale_time_pane_g3

0x25fe,	// (0x000503f4) list_cale_time_pane_g4_ParamLimits

0x25fe,	// (0x000503f4) list_cale_time_pane_g4

0x260c,	// (0x00050402) list_cale_time_pane_g5_ParamLimits

0x260c,	// (0x00050402) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0005d044) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0005d044) list_cale_time_pane_g

0xada7,	// (0x00058b9d) list_cale_time_pane_t1_ParamLimits

0xada7,	// (0x00058b9d) list_cale_time_pane_t1

0xadcf,	// (0x00058bc5) list_cale_time_pane_t2_ParamLimits

0xadcf,	// (0x00058bc5) list_cale_time_pane_t2

0x28be,	// (0x000506b4) aid_blid_cardinal_pane

0x28fc,	// (0x000506f2) compass_pane_t4

0xadf7,	// (0x00058bed) list_cale_time_pane_t4_ParamLimits

0xadf7,	// (0x00058bed) list_cale_time_pane_t4

0x290a,	// (0x00050700) compass_pane_t5

0x291a,	// (0x00050710) compass_pane_t6

0x2928,	// (0x0005071e) compass_pane_t7

0xb215,	// (0x0005900b) navi_pane_cc_t1

0xb362,	// (0x00059158) aid_phob_thumbnail_center_pane

0x2e56,	// (0x00050c4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0005d051) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0005d051) list_cale_time_pane_t

0x9915,	// (0x0005770b) bg_popup_window_pane_cp02_ParamLimits

0x9915,	// (0x0005770b) bg_popup_window_pane_cp02

0xae1f,	// (0x00058c15) heading_pane_cp01_ParamLimits

0xae1f,	// (0x00058c15) heading_pane_cp01

0xae2b,	// (0x00058c21) loc_req_pane_ParamLimits

0xae2b,	// (0x00058c21) loc_req_pane

0xae3b,	// (0x00058c31) loc_type_pane_ParamLimits

0xae3b,	// (0x00058c31) loc_type_pane

0xae4d,	// (0x00058c43) loc_type_pane_t1_ParamLimits

0xae4d,	// (0x00058c43) loc_type_pane_t1

0xae5f,	// (0x00058c55) loc_type_pane_t2_ParamLimits

0xae5f,	// (0x00058c55) loc_type_pane_t2

0xae71,	// (0x00058c67) loc_type_pane_t3_ParamLimits

0xae71,	// (0x00058c67) loc_type_pane_t3

0x0002,

0xf262,	// (0x0005d058) loc_type_pane_t_ParamLimits

0xf262,	// (0x0005d058) loc_type_pane_t

0xae83,	// (0x00058c79) list_loc_req_pane

0xae8d,	// (0x00058c83) scroll_pane_cp012

0x261a,	// (0x00050410) list_single_loc_request_popup_menu_pane_ParamLimits

0x261a,	// (0x00050410) list_single_loc_request_popup_menu_pane

0xae98,	// (0x00058c8e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae98,	// (0x00058c8e) list_single_loc_request_popup_menu_pane_g1

0xaea4,	// (0x00058c9a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaea4,	// (0x00058c9a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0005d05f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0005d05f) list_single_loc_request_popup_menu_pane_g

0xaeb0,	// (0x00058ca6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb0,	// (0x00058ca6) list_single_loc_request_popup_menu_pane_t1

0x9f19,	// (0x00057d0f) bg_popup_window_pane_cp03_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_window_pane_cp03

0xaec6,	// (0x00058cbc) heading_loc_req_pane_ParamLimits

0xaec6,	// (0x00058cbc) heading_loc_req_pane

0x2627,	// (0x0005041d) popup_dyc_status_message_window_g1_ParamLimits

0x2627,	// (0x0005041d) popup_dyc_status_message_window_g1

0x263b,	// (0x00050431) popup_dyc_status_message_window_t1_ParamLimits

0x263b,	// (0x00050431) popup_dyc_status_message_window_t1

0x2650,	// (0x00050446) popup_dyc_status_message_window_t2_ParamLimits

0x2650,	// (0x00050446) popup_dyc_status_message_window_t2

0x2665,	// (0x0005045b) popup_dyc_status_message_window_t3_ParamLimits

0x2665,	// (0x0005045b) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0005d064) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0005d064) popup_dyc_status_message_window_t

0x9cbe,	// (0x00057ab4) bg_heading_pane_cp01

0xaed2,	// (0x00058cc8) heading_loc_req_pane_g1

0xaeda,	// (0x00058cd0) heading_loc_req_pane_g2

0xaee2,	// (0x00058cd8) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0005d06b) heading_loc_req_pane_g

0xaeea,	// (0x00058ce0) heading_loc_req_pane_t1

0xaf0a,	// (0x00058d00) bg_popup_sub_pane_cp01_ParamLimits

0xaf0a,	// (0x00058d00) bg_popup_sub_pane_cp01

0xaf18,	// (0x00058d0e) popup_cale_events_window_g1_ParamLimits

0xaf18,	// (0x00058d0e) popup_cale_events_window_g1

0xaf38,	// (0x00058d2e) popup_cale_events_window_g2_ParamLimits

0xaf38,	// (0x00058d2e) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0005d08d) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0005d08d) popup_cale_events_window_g

0xaf58,	// (0x00058d4e) popup_cale_events_window_t1_ParamLimits

0xaf58,	// (0x00058d4e) popup_cale_events_window_t1

0xaf6a,	// (0x00058d60) popup_cale_events_window_t2_ParamLimits

0xaf6a,	// (0x00058d60) popup_cale_events_window_t2

0xafa8,	// (0x00058d9e) popup_cale_events_window_t3_ParamLimits

0xafa8,	// (0x00058d9e) popup_cale_events_window_t3

0xafe2,	// (0x00058dd8) popup_cale_events_window_t4_ParamLimits

0xafe2,	// (0x00058dd8) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0005d092) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0005d092) popup_cale_events_window_t

0x268d,	// (0x00050483) call_type_pane

0x269d,	// (0x00050493) popup_call_status_window_g1

0x26b1,	// (0x000504a7) popup_call_status_window_g2

0x26c5,	// (0x000504bb) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0005d09b) popup_call_status_window_g

0xb018,	// (0x00058e0e) call_type_pane_g1

0xb021,	// (0x00058e17) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0005d0a2) call_type_pane_g

0x9cbe,	// (0x00057ab4) bg_popup_sub_pane_cp02

0xb02a,	// (0x00058e20) listscroll_popup_wml_pane

0xb032,	// (0x00058e28) list_wml_pane

0xb03c,	// (0x00058e32) scroll_pane_cp013

0xb047,	// (0x00058e3d) list_single_graphic_popup_wml_pane_ParamLimits

0xb047,	// (0x00058e3d) list_single_graphic_popup_wml_pane

0x9f31,	// (0x00057d27) list_single_graphic_popup_wml_pane_g1

0xb05b,	// (0x00058e51) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0005d0a7) list_single_graphic_popup_wml_pane_g

0xb063,	// (0x00058e59) list_single_graphic_popup_wml_pane_t1

0xb079,	// (0x00058e6f) aid_call_pane

0x9f11,	// (0x00057d07) popup_clock_analogue_window_g1

0x9f11,	// (0x00057d07) popup_clock_analogue_window_g2

0xa21d,	// (0x00058013) popup_clock_analogue_window_g3

0xa21d,	// (0x00058013) popup_clock_analogue_window_g4

0x9f31,	// (0x00057d27) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0005d0ac) popup_clock_analogue_window_g

0xa225,	// (0x0005801b) popup_clock_analogue_window_t1

0xa233,	// (0x00058029) clock_digital_number_pane_ParamLimits

0xa233,	// (0x00058029) clock_digital_number_pane

0xa23f,	// (0x00058035) clock_digital_number_pane_cp02_ParamLimits

0xa23f,	// (0x00058035) clock_digital_number_pane_cp02

0xa24b,	// (0x00058041) clock_digital_number_pane_cp03_ParamLimits

0xa24b,	// (0x00058041) clock_digital_number_pane_cp03

0xa257,	// (0x0005804d) clock_digital_number_pane_cp04_ParamLimits

0xa257,	// (0x0005804d) clock_digital_number_pane_cp04

0xa263,	// (0x00058059) clock_digital_separator_pane_ParamLimits

0xa263,	// (0x00058059) clock_digital_separator_pane

0xa26f,	// (0x00058065) popup_clock_digital_window_t1

0x9f31,	// (0x00057d27) clock_digital_number_pane_g1

0x9f31,	// (0x00057d27) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0005d02c) clock_digital_number_pane_g

0x9f31,	// (0x00057d27) clock_digital_separator_pane_g1

0x9f31,	// (0x00057d27) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0005d02c) clock_digital_separator_pane_g

0x9cbe,	// (0x00057ab4) bg_popup_window_pane_cp04

0xb081,	// (0x00058e77) heading_pane_cp03

0xa966,	// (0x0005875c) listscroll_popup_gms_pane

0x9cbe,	// (0x00057ab4) grid_large_graphic_popup_pane

0xb08a,	// (0x00058e80) listscroll_popup_gms_pane_g1

0xb093,	// (0x00058e89) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0005d0b7) listscroll_popup_gms_pane_g

0xb09c,	// (0x00058e92) scroll_pane_cp014

0x9f86,	// (0x00057d7c) cell_large_graphic_popup_pane_ParamLimits

0x9f86,	// (0x00057d7c) cell_large_graphic_popup_pane

0x9f94,	// (0x00057d8a) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) cell_large_graphic_popup_pane_g1

0xb0a5,	// (0x00058e9b) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a5,	// (0x00058e9b) cell_large_graphic_popup_pane_g2

0xb0b3,	// (0x00058ea9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b3,	// (0x00058ea9) cell_large_graphic_popup_pane_g3

0xb0c1,	// (0x00058eb7) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0c1,	// (0x00058eb7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0005d0bc) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0005d0bc) cell_large_graphic_popup_pane_g

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp010

0x9f31,	// (0x00057d27) bg_popup_call_pane_g1

0xb0d2,	// (0x00058ec8) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d2,	// (0x00058ec8) list_single_graphic_popup_conf_pane

0xb0e4,	// (0x00058eda) list_highlight_pane_cp01

0xb0ed,	// (0x00058ee3) list_single_graphic_popup_conf_pane_g1

0xb0f5,	// (0x00058eeb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0005d0c5) list_single_graphic_popup_conf_pane_g

0xb0fd,	// (0x00058ef3) list_single_graphic_popup_conf_pane_t1

0xb10b,	// (0x00058f01) linegrid_cams_pane_g1

0x26d5,	// (0x000504cb) linegrid_cams_pane_g2

0xa94c,	// (0x00058742) linegrid_cams_pane_g3

0xb114,	// (0x00058f0a) linegrid_cams_pane_g4

0x26de,	// (0x000504d4) linegrid_cams_pane_g5

0x26e7,	// (0x000504dd) linegrid_cams_pane_g6

0xa955,	// (0x0005874b) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0005d0ca) linegrid_cams_pane_g

0xb11d,	// (0x00058f13) popup_clock_analogue_window

0xb11d,	// (0x00058f13) popup_clock_digital_window

0x9cbe,	// (0x00057ab4) popup_phob_thumbnail_window

0x9f31,	// (0x00057d27) call_video_uplink_pane_g1

0xb126,	// (0x00058f1c) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0005d0d9) call_video_uplink_pane_g

0xb12e,	// (0x00058f24) video_uplink_pane

0xb136,	// (0x00058f2c) mce_image_pane_g1

0x26f2,	// (0x000504e8) mce_image_pane_g2

0x26fc,	// (0x000504f2) mce_image_pane_g3

0x2706,	// (0x000504fc) mce_image_pane_g4

0x270e,	// (0x00050504) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0005d0de) mce_image_pane_g

0xb140,	// (0x00058f36) control_top_pane_stacon_cp01_ParamLimits

0xb140,	// (0x00058f36) control_top_pane_stacon_cp01

0xb154,	// (0x00058f4a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb154,	// (0x00058f4a) uni_indicator_pane_stacon_cp01

0xb165,	// (0x00058f5b) bg_popup_sub_pane_cp03

0x2716,	// (0x0005050c) chi_dic_find_pane

0x271e,	// (0x00050514) listscroll_chi_dic_pane

0x2727,	// (0x0005051d) main_pane_chidic_g1

0x273a,	// (0x00050530) chi_dic_find_pane_t1

0xb16f,	// (0x00058f65) find_chidic_pane

0xb178,	// (0x00058f6e) chi_dic_list_pane_ParamLimits

0xb178,	// (0x00058f6e) chi_dic_list_pane

0xb189,	// (0x00058f7f) scroll_pane_cp020

0x2748,	// (0x0005053e) find_chidic_pane_t1

0x9cbe,	// (0x00057ab4) input_focus_pane_cp06

0x2757,	// (0x0005054d) list_chi_dic_pane_ParamLimits

0x2757,	// (0x0005054d) list_chi_dic_pane

0x2769,	// (0x0005055f) list_chi_dic_pane_t1_ParamLimits

0x2769,	// (0x0005055f) list_chi_dic_pane_t1

0x9cbe,	// (0x00057ab4) list_highlight_pane_cp020

0xb191,	// (0x00058f87) bg_cale_heading_pane_g1

0x277c,	// (0x00050572) bg_cale_heading_pane_g2

0x2784,	// (0x0005057a) bg_cale_heading_pane_g3

0x278c,	// (0x00050582) bg_cale_heading_pane_g4

0x2796,	// (0x0005058c) bg_cale_heading_pane_g5

0x27a0,	// (0x00050596) bg_cale_heading_pane_g6

0x27a8,	// (0x0005059e) bg_cale_heading_pane_g7

0x27b0,	// (0x000505a6) bg_cale_heading_pane_g8

0x27ba,	// (0x000505b0) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0005d0e9) bg_cale_heading_pane_g

0xb191,	// (0x00058f87) bg_cale_side_pane_g1

0x27c4,	// (0x000505ba) bg_cale_side_pane_g2

0x27ce,	// (0x000505c4) bg_cale_side_pane_g3

0x27d8,	// (0x000505ce) bg_cale_side_pane_g4

0x27e2,	// (0x000505d8) bg_cale_side_pane_g5

0x27ec,	// (0x000505e2) bg_cale_side_pane_g6

0x27f6,	// (0x000505ec) bg_cale_side_pane_g7

0x2800,	// (0x000505f6) bg_cale_side_pane_g8

0x2808,	// (0x000505fe) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0005d0fc) bg_cale_side_pane_g

0x2810,	// (0x00050606) popup_call_status_window_ParamLimits

0x2810,	// (0x00050606) popup_call_status_window

0xb199,	// (0x00058f8f) stacon_top_pane

0xb1a1,	// (0x00058f97) status_pane_ParamLimits

0xb1a1,	// (0x00058f97) status_pane

0xb1b6,	// (0x00058fac) status_small_pane

0xb1be,	// (0x00058fb4) control_pane

0x9cbe,	// (0x00057ab4) stacon_bottom_pane

0xb1c6,	// (0x00058fbc) list_single_mce_smart_pane_t1_ParamLimits

0xb1c6,	// (0x00058fbc) list_single_mce_smart_pane_t1

0xb1d9,	// (0x00058fcf) list_single_mce_smart_pane_t2_ParamLimits

0xb1d9,	// (0x00058fcf) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0005d10f) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0005d10f) list_single_mce_smart_pane_t

0x285d,	// (0x00050653) compass_pane

0x2868,	// (0x0005065e) main_location2_pane_t1

0x287e,	// (0x00050674) main_location2_pane_t2

0x2894,	// (0x0005068a) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0005d114) main_location2_pane_t

0xb1f8,	// (0x00058fee) compass_pane_g1_ParamLimits

0xb1f8,	// (0x00058fee) compass_pane_g1

0x28de,	// (0x000506d4) compass_pane_t1

0x28ed,	// (0x000506e3) compass_pane_t2

0x0005,

0xf327,	// (0x0005d11d) compass_pane_t

0x2938,	// (0x0005072e) text_secondary_cp61

0xb20c,	// (0x00059002) navi_pane_cams_g5

0xb22f,	// (0x00059025) navi_pane_im_t1

0xb23d,	// (0x00059033) navi_pane_mp_g1_ParamLimits

0xb23d,	// (0x00059033) navi_pane_mp_g1

0xb251,	// (0x00059047) navi_pane_mp_g2_ParamLimits

0xb251,	// (0x00059047) navi_pane_mp_g2

0xb25d,	// (0x00059053) navi_pane_mp_g3_ParamLimits

0xb25d,	// (0x00059053) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0005d131) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0005d131) navi_pane_mp_g

0xb269,	// (0x0005905f) navi_pane_mp_t1

0xb277,	// (0x0005906d) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0005d138) navi_pane_mp_t

0xb2b3,	// (0x000590a9) navi_pane_vt_g1

0xb269,	// (0x0005905f) navi_pane_vt_t1

0xb2bb,	// (0x000590b1) navi_slider_pane

0xa966,	// (0x0005875c) zooming_pane

0xb2c3,	// (0x000590b9) navi_slider_pane_g1

0xa28c,	// (0x00058082) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0005d13f) navi_slider_pane_g

0xb2e7,	// (0x000590dd) aid_levels_zoom

0xb2ef,	// (0x000590e5) zooming_pane_g1

0xb2f7,	// (0x000590ed) zooming_pane_g2

0xb2f7,	// (0x000590ed) zooming_pane_g3

0x0002,

0xf358,	// (0x0005d14e) zooming_pane_g

0xb2ff,	// (0x000590f5) level_10_zoom

0xb308,	// (0x000590fe) level_11_zoom

0xb311,	// (0x00059107) level_1_zoom

0xb31a,	// (0x00059110) level_2_zoom

0xb323,	// (0x00059119) level_3_zoom

0xb32c,	// (0x00059122) level_4_zoom

0xb335,	// (0x0005912b) level_5_zoom

0xb33e,	// (0x00059134) level_6_zoom

0xb347,	// (0x0005913d) level_7_zoom

0xb350,	// (0x00059146) level_8_zoom

0xb359,	// (0x0005914f) level_9_zoom

0xb36a,	// (0x00059160) popup_phob_thumbnail_window_g1

0xb372,	// (0x00059168) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0005d155) popup_phob_thumbnail_window_g

0x3551,	// (0x00051347) level_1_location

0x3559,	// (0x0005134f) level_2_location

0x3561,	// (0x00051357) level_3_location

0x356b,	// (0x00051361) level_4_location

0xa966,	// (0x0005875c) level_5_location

0x2a81,	// (0x00050877) mce_icon_pane_g1

0x2a8b,	// (0x00050881) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0005d15a) mce_icon_pane_g

0xb37a,	// (0x00059170) main_mup_pane_g1_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g1

0xb37a,	// (0x00059170) main_mup_pane_g2_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g2

0xb37a,	// (0x00059170) main_mup_pane_g3_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g3

0xb37a,	// (0x00059170) main_mup_pane_g4_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g4

0xb37a,	// (0x00059170) main_mup_pane_g5_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g5

0xb37a,	// (0x00059170) main_mup_pane_g6_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g6

0xb37a,	// (0x00059170) main_mup_pane_g7_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g7

0xb37a,	// (0x00059170) main_mup_pane_g8_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g8

0xb37a,	// (0x00059170) main_mup_pane_g9_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g9

0xb37a,	// (0x00059170) main_mup_pane_g10_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g10

0xb37a,	// (0x00059170) main_mup_pane_g11_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g11

0x9f94,	// (0x00057d8a) main_mup_pane_g12_ParamLimits

0x9f94,	// (0x00057d8a) main_mup_pane_g12

0xb37a,	// (0x00059170) main_mup_pane_g13_ParamLimits

0xb37a,	// (0x00059170) main_mup_pane_g13

0x000c,

0xf369,	// (0x0005d15f) main_mup_pane_g_ParamLimits

0xf369,	// (0x0005d15f) main_mup_pane_g

0xb388,	// (0x0005917e) main_mup_pane_t1_ParamLimits

0xb388,	// (0x0005917e) main_mup_pane_t1

0xb388,	// (0x0005917e) main_mup_pane_t2_ParamLimits

0xb388,	// (0x0005917e) main_mup_pane_t2

0xb388,	// (0x0005917e) main_mup_pane_t3_ParamLimits

0xb388,	// (0x0005917e) main_mup_pane_t3

0xa96e,	// (0x00058764) main_mup_pane_t4_ParamLimits

0xa96e,	// (0x00058764) main_mup_pane_t4

0xa96e,	// (0x00058764) main_mup_pane_t5_ParamLimits

0xa96e,	// (0x00058764) main_mup_pane_t5

0xb39c,	// (0x00059192) main_mup_pane_t6_ParamLimits

0xb39c,	// (0x00059192) main_mup_pane_t6

0x0005,

0xf384,	// (0x0005d17a) main_mup_pane_t_ParamLimits

0xf384,	// (0x0005d17a) main_mup_pane_t

0x9f86,	// (0x00057d7c) mup_progress_pane_ParamLimits

0x9f86,	// (0x00057d7c) mup_progress_pane

0xb3b0,	// (0x000591a6) mup_visualizer_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup_visualizer_pane

0xb3b0,	// (0x000591a6) mup_volume_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup_volume_pane

0x9fa2,	// (0x00057d98) mup_visualizer_pane_g1_ParamLimits

0x9fa2,	// (0x00057d98) mup_visualizer_pane_g1

0xb3be,	// (0x000591b4) mup_visualizer_pane_g2_ParamLimits

0xb3be,	// (0x000591b4) mup_visualizer_pane_g2

0x9f94,	// (0x00057d8a) mup_visualizer_pane_g3_ParamLimits

0x9f94,	// (0x00057d8a) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0005d187) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0005d187) mup_visualizer_pane_g

0xa99c,	// (0x00058792) mup_volume_pane_g1

0xa99c,	// (0x00058792) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0005d18e) mup_volume_pane_g

0xa99c,	// (0x00058792) mup_progress_pane_g1

0xa99c,	// (0x00058792) mup_progress_pane_g2

0xa99c,	// (0x00058792) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0005d193) mup_progress_pane_g

0x9cbe,	// (0x00057ab4) bg_popup_window_pane_cp05

0xb3cc,	// (0x000591c2) heading_pane_cp02_ParamLimits

0xb3cc,	// (0x000591c2) heading_pane_cp02

0xb3e8,	// (0x000591de) list_popup_blid_pane

0xb3f0,	// (0x000591e6) list_blid_sat_info_pane_ParamLimits

0xb3f0,	// (0x000591e6) list_blid_sat_info_pane

0xb403,	// (0x000591f9) list_blid_sat_info_pane_g1

0xb40b,	// (0x00059201) list_blid_sat_info_pane_t1

0x2b9f,	// (0x00050995) mup_equalizer_pane_ParamLimits

0x2b9f,	// (0x00050995) mup_equalizer_pane

0x2bc0,	// (0x000509b6) mup_equalizer_pane_cp1_ParamLimits

0x2bc0,	// (0x000509b6) mup_equalizer_pane_cp1

0x2be1,	// (0x000509d7) mup_equalizer_pane_cp2_ParamLimits

0x2be1,	// (0x000509d7) mup_equalizer_pane_cp2

0x2c06,	// (0x000509fc) mup_equalizer_pane_cp3_ParamLimits

0x2c06,	// (0x000509fc) mup_equalizer_pane_cp3

0x2c2f,	// (0x00050a25) mup_equalizer_pane_cp4_ParamLimits

0x2c2f,	// (0x00050a25) mup_equalizer_pane_cp4

0x2c58,	// (0x00050a4e) mup_equalizer_pane_cp5

0x2c70,	// (0x00050a66) mup_equalizer_pane_cp6

0x2c88,	// (0x00050a7e) mup_equalizer_pane_cp7

0xc56c,	// (0x0005a362) bg_popup_call_poc_act_pane_g9

0xc574,	// (0x0005a36a) bg_popup_call_poc_act_pane_g10

0xc57c,	// (0x0005a372) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f19,	// (0x00057d0f) mup_scale_pane

0x9f31,	// (0x00057d27) mup_scale_pane_g1

0xb419,	// (0x0005920f) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0005d1af) mup_scale_pane_g

0xb43d,	// (0x00059233) msg_data_pane

0xb445,	// (0x0005923b) scroll_pane_cp017

0xfdd5,	// (0x0004dbcb) bg_list_pane_cp04_ParamLimits

0xfdd5,	// (0x0004dbcb) bg_list_pane_cp04

0xb44d,	// (0x00059243) msg_data_pane_g1

0x2cba,	// (0x00050ab0) msg_data_pane_g2

0x2cc4,	// (0x00050aba) msg_data_pane_g3

0x2cce,	// (0x00050ac4) msg_data_pane_g4

0x2cd6,	// (0x00050acc) msg_data_pane_g5

0x2cde,	// (0x00050ad4) msg_data_pane_g6

0x2ce6,	// (0x00050adc) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0005d1be) msg_data_pane_g

0xfdf3,	// (0x0004dbe9) msg_text_pane_ParamLimits

0xfdf3,	// (0x0004dbe9) msg_text_pane

0x2cee,	// (0x00050ae4) qrid_highlight_pane_cp011_ParamLimits

0x2cee,	// (0x00050ae4) qrid_highlight_pane_cp011

0x9cbe,	// (0x00057ab4) msg_body_pane

0x9cbe,	// (0x00057ab4) msg_header_pane

0xb45e,	// (0x00059254) input_focus_pane_cp07

0xa29e,	// (0x00058094) msg_header_pane_t1_ParamLimits

0xa29e,	// (0x00058094) msg_header_pane_t1

0x2d04,	// (0x00050afa) msg_header_pane_t2_ParamLimits

0x2d04,	// (0x00050afa) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0005d1d2) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0005d1d2) msg_header_pane_t

0xb473,	// (0x00059269) msg_body_pane_g1

0x2d1b,	// (0x00050b11) msg_body_pane_t1_ParamLimits

0x2d1b,	// (0x00050b11) msg_body_pane_t1

0x2d4c,	// (0x00050b42) msg_body_pane_t2_ParamLimits

0x2d4c,	// (0x00050b42) msg_body_pane_t2

0x2d5e,	// (0x00050b54) msg_body_pane_t3_ParamLimits

0x2d5e,	// (0x00050b54) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0005d1d7) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0005d1d7) msg_body_pane_t

0x2daa,	// (0x00050ba0) main_viewer_pane_g1_ParamLimits

0x2daa,	// (0x00050ba0) main_viewer_pane_g1

0x2db8,	// (0x00050bae) main_viewer_pane_g2_ParamLimits

0x2db8,	// (0x00050bae) main_viewer_pane_g2

0x2dc6,	// (0x00050bbc) main_viewer_pane_g3_ParamLimits

0x2dc6,	// (0x00050bbc) main_viewer_pane_g3

0x2dd5,	// (0x00050bcb) main_viewer_pane_g4_ParamLimits

0x2dd5,	// (0x00050bcb) main_viewer_pane_g4

0xa2cc,	// (0x000580c2) main_viewer_pane_g5_ParamLimits

0xa2cc,	// (0x000580c2) main_viewer_pane_g5

0xa2cc,	// (0x000580c2) main_viewer_pane_g7_ParamLimits

0xa2cc,	// (0x000580c2) main_viewer_pane_g7

0xa2de,	// (0x000580d4) main_viewer_pane_g8_ParamLimits

0xa2de,	// (0x000580d4) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0005d1e7) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0005d1e7) main_viewer_pane_g

0xb47b,	// (0x00059271) viewer_content_pane_ParamLimits

0xb47b,	// (0x00059271) viewer_content_pane

0x2e13,	// (0x00050c09) main_postcard_pane_g1_ParamLimits

0x2e13,	// (0x00050c09) main_postcard_pane_g1

0x2e29,	// (0x00050c1f) main_postcard_pane_g2_ParamLimits

0x2e29,	// (0x00050c1f) main_postcard_pane_g2

0x2e3f,	// (0x00050c35) main_postcard_pane_g3_ParamLimits

0x2e3f,	// (0x00050c35) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0005d1f8) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0005d1f8) main_postcard_pane_g

0x2e56,	// (0x00050c4c) main_postcard_pane_g4

0xc6b2,	// (0x0005a4a8) smil_status_volume_pane_g2

0x2e99,	// (0x00050c8f) postcard_pane_ParamLimits

0x2e99,	// (0x00050c8f) postcard_pane

0xb489,	// (0x0005927f) postcard_pane_g1_ParamLimits

0xb489,	// (0x0005927f) postcard_pane_g1

0x2ee9,	// (0x00050cdf) postcard_pane_g2_ParamLimits

0x2ee9,	// (0x00050cdf) postcard_pane_g2

0x2ef5,	// (0x00050ceb) postcard_pane_g3_ParamLimits

0x2ef5,	// (0x00050ceb) postcard_pane_g3

0xb497,	// (0x0005928d) postcard_pane_g4_ParamLimits

0xb497,	// (0x0005928d) postcard_pane_g4

0x2f01,	// (0x00050cf7) postcard_pane_g5_ParamLimits

0x2f01,	// (0x00050cf7) postcard_pane_g5

0x2f16,	// (0x00050d0c) postcard_pane_g6_ParamLimits

0x2f16,	// (0x00050d0c) postcard_pane_g6

0xb489,	// (0x0005927f) postcard_pane_g7_ParamLimits

0xb489,	// (0x0005927f) postcard_pane_g7

0x0006,

0xf40f,	// (0x0005d205) postcard_pane_g_ParamLimits

0xf40f,	// (0x0005d205) postcard_pane_g

0x2f2e,	// (0x00050d24) main_mp2_pane_g1_ParamLimits

0x2f2e,	// (0x00050d24) main_mp2_pane_g1

0x2f3c,	// (0x00050d32) main_mp2_pane_g2_ParamLimits

0x2f3c,	// (0x00050d32) main_mp2_pane_g2

0x2f48,	// (0x00050d3e) main_mp2_pane_g3_ParamLimits

0x2f48,	// (0x00050d3e) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0005d214) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0005d214) main_mp2_pane_g

0x2f54,	// (0x00050d4a) main_mp2_pane_t1_ParamLimits

0x2f54,	// (0x00050d4a) main_mp2_pane_t1

0x2f6b,	// (0x00050d61) main_mp2_pane_t2_ParamLimits

0x2f6b,	// (0x00050d61) main_mp2_pane_t2

0x2f7d,	// (0x00050d73) main_mp2_pane_t3_ParamLimits

0x2f7d,	// (0x00050d73) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0005d21b) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0005d21b) main_mp2_pane_t

0xb4a5,	// (0x0005929b) pec_content_pane_ParamLimits

0xb4a5,	// (0x0005929b) pec_content_pane

0xab10,	// (0x00058906) scroll_pane_cp015

0xb4b7,	// (0x000592ad) pec_attribute_pane_ParamLimits

0xb4b7,	// (0x000592ad) pec_attribute_pane

0x2f8f,	// (0x00050d85) pec_content_pane_g1_ParamLimits

0x2f8f,	// (0x00050d85) pec_content_pane_g1

0xb4c7,	// (0x000592bd) pec_content_pane_t1_ParamLimits

0xb4c7,	// (0x000592bd) pec_content_pane_t1

0xb4d9,	// (0x000592cf) pec_content_pane_t2_ParamLimits

0xb4d9,	// (0x000592cf) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0005d222) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0005d222) pec_content_pane_t

0x2f9b,	// (0x00050d91) list_single_graphic_pane_cp01_ParamLimits

0x2f9b,	// (0x00050d91) list_single_graphic_pane_cp01

0x9f19,	// (0x00057d0f) bg_popup_sub_pane_cp04

0xb4eb,	// (0x000592e1) popup_mup_playback_window_g1

0xb4f7,	// (0x000592ed) popup_mup_playback_window_t1

0xb50c,	// (0x00059302) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0005d227) popup_mup_playback_window_t

0xb543,	// (0x00059339) main_image_pane_g1_ParamLimits

0xb543,	// (0x00059339) main_image_pane_g1

0xb586,	// (0x0005937c) scroll_pane_cp018_ParamLimits

0xb586,	// (0x0005937c) scroll_pane_cp018

0xb59e,	// (0x00059394) scroll_pane_cp016_ParamLimits

0xb59e,	// (0x00059394) scroll_pane_cp016

0x306d,	// (0x00050e63) smil2_image_pane_ParamLimits

0x306d,	// (0x00050e63) smil2_image_pane

0x30a3,	// (0x00050e99) smil2_root_pane_ParamLimits

0x30a3,	// (0x00050e99) smil2_root_pane

0x30db,	// (0x00050ed1) smil2_text_pane_ParamLimits

0x30db,	// (0x00050ed1) smil2_text_pane

0x9cbe,	// (0x00057ab4) bg_list_pane_cp06

0xb5da,	// (0x000593d0) grid_radio_pane

0x9cbe,	// (0x00057ab4) bg_popup_window_pane_cp06

0xb5e4,	// (0x000593da) main_fmradio_pane_t1

0xc584,	// (0x0005a37a) heading_pane_cp04

0xb5f2,	// (0x000593e8) main_fmradio_pane_t2

0xc58c,	// (0x0005a382) popup_cale_lunar_info_window_g1

0xb600,	// (0x000593f6) main_fmradio_pane_t3

0xc594,	// (0x0005a38a) popup_cale_lunar_info_window_g2

0xb610,	// (0x00059406) main_fmradio_pane_t4

0x0001,

0xb61e,	// (0x00059414) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0005d307) popup_cale_lunar_info_window_g

0xf446,	// (0x0005d23c) main_fmradio_pane_t

0xb62c,	// (0x00059422) wait_bar_pane_cp03

0xb634,	// (0x0005942a) cell_fmradio_pane_ParamLimits

0xb634,	// (0x0005942a) cell_fmradio_pane

0xb489,	// (0x0005927f) cell_fmradio_pane_g1_ParamLimits

0xb489,	// (0x0005927f) cell_fmradio_pane_g1

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp011

0xb649,	// (0x0005943f) poc_content_pane_ParamLimits

0xb649,	// (0x0005943f) poc_content_pane

0xb65b,	// (0x00059451) scroll_pane_cp019

0x316b,	// (0x00050f61) popup_call_poc_act_window_ParamLimits

0x316b,	// (0x00050f61) popup_call_poc_act_window

0x318f,	// (0x00050f85) popup_call_poc_inact_window_ParamLimits

0x318f,	// (0x00050f85) popup_call_poc_inact_window

0xf4e8,	// (0x0005d2de) bg_popup_call_poc_act_pane_g

0xc4fc,	// (0x0005a2f2) bg_popup_call_poc_inact_pane_g1

0xc504,	// (0x0005a2fa) bg_popup_call_poc_inact_pane_g2

0xb663,	// (0x00059459) popup_call_poc_act_window_g2

0xc50c,	// (0x0005a302) bg_popup_call_poc_inact_pane_g3

0xc514,	// (0x0005a30a) bg_popup_call_poc_inact_pane_g4

0xc51c,	// (0x0005a312) bg_popup_call_poc_inact_pane_g5

0xb66b,	// (0x00059461) popup_call_poc_act_window_t1_ParamLimits

0xb66b,	// (0x00059461) popup_call_poc_act_window_t1

0xb693,	// (0x00059489) popup_call_poc_act_window_t2_ParamLimits

0xb693,	// (0x00059489) popup_call_poc_act_window_t2

0xb6bb,	// (0x000594b1) popup_call_poc_act_window_t3_ParamLimits

0xb6bb,	// (0x000594b1) popup_call_poc_act_window_t3

0xb6e3,	// (0x000594d9) popup_call_poc_act_window_t4_ParamLimits

0xb6e3,	// (0x000594d9) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0005d247) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0005d247) popup_call_poc_act_window_t

0xc524,	// (0x0005a31a) bg_popup_call_poc_inact_pane_g6

0xc52c,	// (0x0005a322) bg_popup_call_poc_inact_pane_g7

0xc534,	// (0x0005a32a) bg_popup_call_poc_inact_pane_g8

0xb6f5,	// (0x000594eb) popup_call_poc_inact_window_g2

0xc53c,	// (0x0005a332) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0005d2cb) bg_popup_call_poc_inact_pane_g

0xb6fd,	// (0x000594f3) popup_call_poc_inact_window_t1_ParamLimits

0xb6fd,	// (0x000594f3) popup_call_poc_inact_window_t1

0xb712,	// (0x00059508) popup_call_poc_inact_window_t2_ParamLimits

0xb712,	// (0x00059508) popup_call_poc_inact_window_t2

0xb727,	// (0x0005951d) popup_call_poc_inact_window_t3_ParamLimits

0xb727,	// (0x0005951d) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0005d250) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0005d250) popup_call_poc_inact_window_t

0xc62a,	// (0x0005a420) context_pane_ParamLimits

0x3a6e,	// (0x00051864) signal_pane_ParamLimits

0xa966,	// (0x0005875c) main_call2_pane

0xa327,	// (0x0005811d) popup_phob_thumbnail2_window_ParamLimits

0xa327,	// (0x0005811d) popup_phob_thumbnail2_window

0xa2b4,	// (0x000580aa) aid_hotspot_pointer_arrow_pane

0xa2bc,	// (0x000580b2) aid_hotspot_pointer_hand_pane

0x3519,	// (0x0005130f) phob_pre_status_pane_g5

0x9868,	// (0x0005765e) cams_zoom_pane_ParamLimits

0x9868,	// (0x0005765e) image_vga_pane_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g2_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g3_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g4_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g5_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g6_ParamLimits

0x9f94,	// (0x00057d8a) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0005cf7b) main_camera_pane_g_ParamLimits

0xa96e,	// (0x00058764) main_camera_pane_t1_ParamLimits

0xa96e,	// (0x00058764) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0005cf8c) main_camera_pane_t_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_preview_window_pane_cp01

0xb73c,	// (0x00059532) popup_phob_thumbnail2_window_g1_ParamLimits

0xb73c,	// (0x00059532) popup_phob_thumbnail2_window_g1

0x9cbe,	// (0x00057ab4) call2_cli_visual_pane

0x31c3,	// (0x00050fb9) popup_call2_audio_conf_window_ParamLimits

0x31c3,	// (0x00050fb9) popup_call2_audio_conf_window

0x31eb,	// (0x00050fe1) popup_call2_audio_first_window_ParamLimits

0x31eb,	// (0x00050fe1) popup_call2_audio_first_window

0x3281,	// (0x00051077) popup_call2_audio_in_window_ParamLimits

0x3281,	// (0x00051077) popup_call2_audio_in_window

0x32cd,	// (0x000510c3) popup_call2_audio_out_window_ParamLimits

0x32cd,	// (0x000510c3) popup_call2_audio_out_window

0x333f,	// (0x00051135) popup_call2_audio_second_window_ParamLimits

0x333f,	// (0x00051135) popup_call2_audio_second_window

0x33a5,	// (0x0005119b) popup_call2_audio_wait_window_ParamLimits

0x33a5,	// (0x0005119b) popup_call2_audio_wait_window

0x9cbe,	// (0x00057ab4) bg_popup_call2_act_pane_cp03

0x9efb,	// (0x00057cf1) list_conf_pane_cp

0xb748,	// (0x0005953e) popup_call2_audio_conf_window_t1

0xb756,	// (0x0005954c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb756,	// (0x0005954c) list_single_graphic_popup_conf2_pane

0xb0e4,	// (0x00058eda) list_highlight_pane_cp04

0xb769,	// (0x0005955f) list_single_graphic_popup_conf2_pane_g1

0xb0f5,	// (0x00058eeb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0005d257) list_single_graphic_popup_conf2_pane_g

0xb773,	// (0x00059569) list_single_graphic_popup_conf2_pane_t1

0xb781,	// (0x00059577) bg_popup_call2_act_pane_cp01_ParamLimits

0xb781,	// (0x00059577) bg_popup_call2_act_pane_cp01

0xb80b,	// (0x00059601) call_type_pane_cp05_ParamLimits

0xb80b,	// (0x00059601) call_type_pane_cp05

0xb85f,	// (0x00059655) popup_call2_audio_second_window_g1_ParamLimits

0xb85f,	// (0x00059655) popup_call2_audio_second_window_g1

0xb8b3,	// (0x000596a9) popup_call2_audio_second_window_g2_ParamLimits

0xb8b3,	// (0x000596a9) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0005d25c) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0005d25c) popup_call2_audio_second_window_g

0xb918,	// (0x0005970e) popup_call2_audio_second_window_t1_ParamLimits

0xb918,	// (0x0005970e) popup_call2_audio_second_window_t1

0xb9d3,	// (0x000597c9) popup_call2_audio_second_window_t2_ParamLimits

0xb9d3,	// (0x000597c9) popup_call2_audio_second_window_t2

0xba34,	// (0x0005982a) popup_call2_audio_second_window_t3_ParamLimits

0xba34,	// (0x0005982a) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0005d263) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0005d263) popup_call2_audio_second_window_t

0x9cbe,	// (0x00057ab4) bg_popup_call2_in_pane_cp02

0x9cc8,	// (0x00057abe) call_type_pane_cp04

0x33df,	// (0x000511d5) popup_call2_audio_wait_window_g1

0x33e7,	// (0x000511dd) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0005d26c) popup_call2_audio_wait_window_g

0x9ce0,	// (0x00057ad6) popup_call2_audio_wait_window_t3

0xbb27,	// (0x0005991d) bg_popup_call2_act_pane_ParamLimits

0xbb27,	// (0x0005991d) bg_popup_call2_act_pane

0xbbe7,	// (0x000599dd) call_type_pane_cp03_ParamLimits

0xbbe7,	// (0x000599dd) call_type_pane_cp03

0xbc4b,	// (0x00059a41) popup_call2_audio_first_window_g1_ParamLimits

0xbc4b,	// (0x00059a41) popup_call2_audio_first_window_g1

0xbcbb,	// (0x00059ab1) popup_call2_audio_first_window_g2_ParamLimits

0xbcbb,	// (0x00059ab1) popup_call2_audio_first_window_g2

0xba26,	// (0x0005981c) popup_call2_audio_first_window_g3_ParamLimits

0xba26,	// (0x0005981c) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0005d271) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0005d271) popup_call2_audio_first_window_g

0xbd99,	// (0x00059b8f) popup_call2_audio_first_window_t1_ParamLimits

0xbd99,	// (0x00059b8f) popup_call2_audio_first_window_t1

0xbe9c,	// (0x00059c92) popup_call2_audio_first_window_t4_ParamLimits

0xbe9c,	// (0x00059c92) popup_call2_audio_first_window_t4

0xbf7f,	// (0x00059d75) popup_call2_audio_first_window_t5_ParamLimits

0xbf7f,	// (0x00059d75) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0005d27c) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0005d27c) popup_call2_audio_first_window_t

0x9f11,	// (0x00057d07) bg_popup_call2_act_pane_g1

0xc59e,	// (0x0005a394) popup_cale_lunar_info_window_t1

0xc5ac,	// (0x0005a3a2) popup_cale_lunar_info_window_t2

0xc5ba,	// (0x0005a3b0) popup_cale_lunar_info_window_t3

0x9cbe,	// (0x00057ab4) bg_popup_call2_bubble_pane

0xc080,	// (0x00059e76) bg_popup_call2_in_pane_cp01_ParamLimits

0xc080,	// (0x00059e76) bg_popup_call2_in_pane_cp01

0x999a,	// (0x00057790) call_type_pane_cp02

0x33ef,	// (0x000511e5) popup_call2_audio_out_window_g1_ParamLimits

0x33ef,	// (0x000511e5) popup_call2_audio_out_window_g1

0xc0c8,	// (0x00059ebe) popup_call2_audio_out_window_g2_ParamLimits

0xc0c8,	// (0x00059ebe) popup_call2_audio_out_window_g2

0x341b,	// (0x00051211) popup_call2_audio_out_window_g3_ParamLimits

0x341b,	// (0x00051211) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0005d285) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0005d285) popup_call2_audio_out_window_g

0xc0ff,	// (0x00059ef5) popup_call2_audio_out_window_t1_ParamLimits

0xc0ff,	// (0x00059ef5) popup_call2_audio_out_window_t1

0xc15e,	// (0x00059f54) popup_call2_audio_out_window_t2_ParamLimits

0xc15e,	// (0x00059f54) popup_call2_audio_out_window_t2

0xc1b2,	// (0x00059fa8) popup_call2_audio_out_window_t3_ParamLimits

0xc1b2,	// (0x00059fa8) popup_call2_audio_out_window_t3

0xc1c8,	// (0x00059fbe) popup_call2_audio_out_window_t4_ParamLimits

0xc1c8,	// (0x00059fbe) popup_call2_audio_out_window_t4

0xc1de,	// (0x00059fd4) popup_call2_audio_out_window_t5_ParamLimits

0xc1de,	// (0x00059fd4) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0005d28e) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0005d28e) popup_call2_audio_out_window_t

0xc242,	// (0x0005a038) bg_popup_call2_in_pane_ParamLimits

0xc242,	// (0x0005a038) bg_popup_call2_in_pane

0xc29e,	// (0x0005a094) popup_call2_audio_in_window_g1_ParamLimits

0xc29e,	// (0x0005a094) popup_call2_audio_in_window_g1

0xc2d6,	// (0x0005a0cc) popup_call2_audio_in_window_g2_ParamLimits

0xc2d6,	// (0x0005a0cc) popup_call2_audio_in_window_g2

0xc30e,	// (0x0005a104) popup_call2_audio_in_window_g3_ParamLimits

0xc30e,	// (0x0005a104) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0005d29b) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0005d29b) popup_call2_audio_in_window_g

0xc366,	// (0x0005a15c) popup_call2_audio_in_window_t1_ParamLimits

0xc366,	// (0x0005a15c) popup_call2_audio_in_window_t1

0xc3e6,	// (0x0005a1dc) popup_call2_audio_in_window_t2_ParamLimits

0xc3e6,	// (0x0005a1dc) popup_call2_audio_in_window_t2

0xc466,	// (0x0005a25c) popup_call2_audio_in_window_t3_ParamLimits

0xc466,	// (0x0005a25c) popup_call2_audio_in_window_t3

0xc480,	// (0x0005a276) popup_call2_audio_in_window_t4_ParamLimits

0xc480,	// (0x0005a276) popup_call2_audio_in_window_t4

0xc492,	// (0x0005a288) popup_call2_audio_in_window_t5_ParamLimits

0xc492,	// (0x0005a288) popup_call2_audio_in_window_t5

0xc4a7,	// (0x0005a29d) popup_call2_audio_in_window_t6_ParamLimits

0xc4a7,	// (0x0005a29d) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0005d2a4) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0005d2a4) popup_call2_audio_in_window_t

0x9f11,	// (0x00057d07) bg_popup_call2_in_pane_g1

0xc5c8,	// (0x0005a3be) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0005d30c) popup_cale_lunar_info_window_t

0x9f19,	// (0x00057d0f) bg_popup_call2_rect_pane_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_call2_rect_pane

0x9cbe,	// (0x00057ab4) call2_cli_visual_graphic_pane

0x9cbe,	// (0x00057ab4) call2_cli_visual_text_pane

0xa34e,	// (0x00058144) smil_status_volume_pane_g3

0x0002,

0x9f31,	// (0x00057d27) call2_cli_visual_graphic_pane_g1

0x9f31,	// (0x00057d27) call2_cli_visual_graphic_pane_g2

0x9f31,	// (0x00057d27) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0005d2b1) call2_cli_visual_graphic_pane_g

0xc4bc,	// (0x0005a2b2) bg_popup_call2_rect_pane_g1

0xa123,	// (0x00057f19) bg_popup_call2_rect_pane_g2

0xc4c4,	// (0x0005a2ba) bg_popup_call2_rect_pane_g3

0xc4cc,	// (0x0005a2c2) bg_popup_call2_rect_pane_g4

0xc4d4,	// (0x0005a2ca) bg_popup_call2_rect_pane_g5

0xc4dc,	// (0x0005a2d2) bg_popup_call2_rect_pane_g6

0xc4e4,	// (0x0005a2da) bg_popup_call2_rect_pane_g7

0xc4ec,	// (0x0005a2e2) bg_popup_call2_rect_pane_g8

0xc4f4,	// (0x0005a2ea) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0005d2b8) bg_popup_call2_rect_pane_g

0xc4fc,	// (0x0005a2f2) bg_popup_call2_bubble_pane_g1

0xc504,	// (0x0005a2fa) bg_popup_call2_bubble_pane_g2

0xc50c,	// (0x0005a302) bg_popup_call2_bubble_pane_g3

0xc514,	// (0x0005a30a) bg_popup_call2_bubble_pane_g4

0xc51c,	// (0x0005a312) bg_popup_call2_bubble_pane_g5

0xc524,	// (0x0005a31a) bg_popup_call2_bubble_pane_g6

0xc52c,	// (0x0005a322) bg_popup_call2_bubble_pane_g7

0xc534,	// (0x0005a32a) bg_popup_call2_bubble_pane_g8

0xc53c,	// (0x0005a332) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0005d2cb) bg_popup_call2_bubble_pane_g

0x0cd1,	// (0x0004eac7) aid_cale_week_size_cell_pane

0x1315,	// (0x0004f10b) aid_cams_cif_uncrop_pane_ParamLimits

0x1315,	// (0x0004f10b) aid_cams_cif_uncrop_pane

0x146b,	// (0x0004f261) aid_cams_size_cell_ParamLimits

0x146b,	// (0x0004f261) aid_cams_size_cell

0x147f,	// (0x0004f275) grid_cams_pane_ParamLimits

0x1499,	// (0x0004f28f) linegrid_cams_pane_ParamLimits

0x1575,	// (0x0004f36b) call_video_pane_t1

0x158f,	// (0x0004f385) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0005cfd8) call_video_pane_t

0x19c7,	// (0x0004f7bd) aid_cale_month_size_cell_pane_ParamLimits

0x19c7,	// (0x0004f7bd) aid_cale_month_size_cell_pane

0xf55a,	// (0x0005d350) smil_status_volume_pane_g

0xa35b,	// (0x00058151) volume_smil_pane_ParamLimits

0x980d,	// (0x00057603) aid_popup2_width_pane

0x0c24,	// (0x0004ea1a) cell_qdial_pane_g4_ParamLimits

0x0c24,	// (0x0004ea1a) cell_qdial_pane_g4

0x28be,	// (0x000506b4) aid_blid_cardinal_pane_ParamLimits

0x28ca,	// (0x000506c0) aid_blid_destination_pane_ParamLimits

0x28ca,	// (0x000506c0) aid_blid_destination_pane

0x9f19,	// (0x00057d0f) bg_popup_call_poc_act_pane_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_call_poc_act_pane

0x9f19,	// (0x00057d0f) bg_popup_call_poc_inact_pane_ParamLimits

0x9f19,	// (0x00057d0f) bg_popup_call_poc_inact_pane

0xc544,	// (0x0005a33a) bg_popup_call_poc_act_pane_g1

0xc54c,	// (0x0005a342) bg_popup_call_poc_act_pane_g2

0xc554,	// (0x0005a34a) bg_popup_call_poc_act_pane_g3

0xc514,	// (0x0005a30a) bg_popup_call_poc_act_pane_g4

0xc51c,	// (0x0005a312) bg_popup_call_poc_act_pane_g5

0xc55c,	// (0x0005a352) bg_popup_call_poc_act_pane_g6

0xc52c,	// (0x0005a322) bg_popup_call_poc_act_pane_g7

0xc564,	// (0x0005a35a) bg_popup_call_poc_act_pane_g8

0x9cbe,	// (0x00057ab4) main_usb_pane

0xa2fe,	// (0x000580f4) popup_cale_lunar_info_window

0x185c,	// (0x0004f652) im_reading_pane_t1_ParamLimits

0xaa59,	// (0x0005884f) list_im_pane_ParamLimits

0xaa6a,	// (0x00058860) scroll_pane_cp07_ParamLimits

0x9cbe,	// (0x00057ab4) grid_highlight_pane_cp012

0x9f19,	// (0x00057d0f) mup_scale_pane_ParamLimits

0xb489,	// (0x0005927f) main_usb_pane_g1_ParamLimits

0xb489,	// (0x0005927f) main_usb_pane_g1

0x346e,	// (0x00051264) main_usb_pane_g2_ParamLimits

0x346e,	// (0x00051264) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0005d2f5) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0005d2f5) main_usb_pane_g

0x3484,	// (0x0005127a) main_usb_pane_t1_ParamLimits

0x3484,	// (0x0005127a) main_usb_pane_t1

0x3496,	// (0x0005128c) main_usb_pane_t2_ParamLimits

0x3496,	// (0x0005128c) main_usb_pane_t2

0x34a8,	// (0x0005129e) main_usb_pane_t3_ParamLimits

0x34a8,	// (0x0005129e) main_usb_pane_t3

0x34ba,	// (0x000512b0) main_usb_pane_t4_ParamLimits

0x34ba,	// (0x000512b0) main_usb_pane_t4

0x34cf,	// (0x000512c5) main_usb_pane_t5_ParamLimits

0x34cf,	// (0x000512c5) main_usb_pane_t5

0x34e4,	// (0x000512da) main_usb_pane_t6_ParamLimits

0x34e4,	// (0x000512da) main_usb_pane_t6

0x0005,

0xf504,	// (0x0005d2fa) main_usb_pane_t_ParamLimits

0x285d,	// (0x00050653) aid_text_placing

0x2868,	// (0x0005065e) main_location2_pane_t1_ParamLimits

0x287e,	// (0x00050674) main_location2_pane_t2_ParamLimits

0x2894,	// (0x0005068a) main_location2_pane_t3_ParamLimits

0x28aa,	// (0x000506a0) main_location2_pane_t4_ParamLimits

0x28aa,	// (0x000506a0) main_location2_pane_t4

0xf31e,	// (0x0005d114) main_location2_pane_t_ParamLimits

0x9f47,	// (0x00057d3d) find_pinb_pane_g2_ParamLimits

0x9f47,	// (0x00057d3d) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0005ce90) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0005ce90) find_pinb_pane_g

0x9f53,	// (0x00057d49) find_pinb_pane_t1_ParamLimits

0x9f65,	// (0x00057d5b) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0005ce95) find_pinb_pane_t_ParamLimits

0x9cbe,	// (0x00057ab4) main_call3_pane

0x1fcc,	// (0x0004fdc2) cale_month_day_heading_pane_t1_ParamLimits

0x2052,	// (0x0004fe48) cale_month_day_heading_pane_t2_ParamLimits

0x20cb,	// (0x0004fec1) cale_month_day_heading_pane_t3_ParamLimits

0x2144,	// (0x0004ff3a) cale_month_day_heading_pane_t4_ParamLimits

0x21c5,	// (0x0004ffbb) cale_month_day_heading_pane_t5_ParamLimits

0x224e,	// (0x00050044) cale_month_day_heading_pane_t6_ParamLimits

0x22df,	// (0x000500d5) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0005d010) cale_month_day_heading_pane_t_ParamLimits

0xacc3,	// (0x00058ab9) smil_status_volume_pane

0x2ebd,	// (0x00050cb3) postcard_address_pane_ParamLimits

0x2ebd,	// (0x00050cb3) postcard_address_pane

0x2ed3,	// (0x00050cc9) postcard_message_pane_ParamLimits

0x2ed3,	// (0x00050cc9) postcard_message_pane

0x3447,	// (0x0005123d) call2_cli_visual_pane_t1_ParamLimits

0x3447,	// (0x0005123d) call2_cli_visual_pane_t1

0xc6dd,	// (0x0005a4d3) postcard_message_pane_t1_ParamLimits

0xc6dd,	// (0x0005a4d3) postcard_message_pane_t1

0xc6c5,	// (0x0005a4bb) postcard_address_pane_t1_ParamLimits

0xc6c5,	// (0x0005a4bb) postcard_address_pane_t1

0x3c2a,	// (0x00051a20) popup_call3_audio_in_window_ParamLimits

0x3c2a,	// (0x00051a20) popup_call3_audio_in_window

0x3aaf,	// (0x000518a5) bg_popup_call3_in_pane_ParamLimits

0x3aaf,	// (0x000518a5) bg_popup_call3_in_pane

0x3b2b,	// (0x00051921) popup_call3_audio_in_window_g1_ParamLimits

0x3b2b,	// (0x00051921) popup_call3_audio_in_window_g1

0x3b4b,	// (0x00051941) popup_call3_audio_in_window_g2_ParamLimits

0x3b4b,	// (0x00051941) popup_call3_audio_in_window_g2

0x3b6b,	// (0x00051961) popup_call3_audio_in_window_g3_ParamLimits

0x3b6b,	// (0x00051961) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0005d357) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0005d357) popup_call3_audio_in_window_g

0x3b9c,	// (0x00051992) popup_call3_audio_in_window_t1_ParamLimits

0x3b9c,	// (0x00051992) popup_call3_audio_in_window_t1

0x3bda,	// (0x000519d0) popup_call3_audio_in_window_t2_ParamLimits

0x3bda,	// (0x000519d0) popup_call3_audio_in_window_t2

0x3c18,	// (0x00051a0e) popup_call3_audio_in_window_t3_ParamLimits

0x3c18,	// (0x00051a0e) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0005d360) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0005d360) popup_call3_audio_in_window_t

0xa966,	// (0x0005875c) bg_popup_call3_rect_pane

0xc4bc,	// (0x0005a2b2) bg_popup_call3_rect_pane_g1

0xa123,	// (0x00057f19) bg_popup_call3_rect_pane_g2

0xc4c4,	// (0x0005a2ba) bg_popup_call3_rect_pane_g3

0xc4cc,	// (0x0005a2c2) bg_popup_call3_rect_pane_g4

0xc4d4,	// (0x0005a2ca) bg_popup_call3_rect_pane_g5

0xc4dc,	// (0x0005a2d2) bg_popup_call3_rect_pane_g6

0xc4e4,	// (0x0005a2da) bg_popup_call3_rect_pane_g7

0x97fb,	// (0x000575f1) mup_visualizer_osc_pane

0x97fb,	// (0x000575f1) mup_visualizer_spec_pane

0x3adf,	// (0x000518d5) call3_video_qcif_pane_ParamLimits

0x3adf,	// (0x000518d5) call3_video_qcif_pane

0x3af2,	// (0x000518e8) call3_video_qcif_uncrop_pane_ParamLimits

0x3af2,	// (0x000518e8) call3_video_qcif_uncrop_pane

0x3b02,	// (0x000518f8) call3_video_subqcif_pane_ParamLimits

0x3b02,	// (0x000518f8) call3_video_subqcif_pane

0x3b18,	// (0x0005190e) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b18,	// (0x0005190e) call3_video_subqcif_uncrop_pane

0x3b8b,	// (0x00051981) popup_call3_audio_in_window_g4_ParamLimits

0x3b8b,	// (0x00051981) popup_call3_audio_in_window_g4

0x97fb,	// (0x000575f1) mup_spec_half_pane

0x97fb,	// (0x000575f1) mup_spec_half_pane_cp

0x97fb,	// (0x000575f1) mup_osc_middle_pane

0xa99c,	// (0x00058792) mup_visualizer_osc_pane_g1

0xc678,	// (0x0005a46e) mup_spec_bar_pane_ParamLimits

0xc678,	// (0x0005a46e) mup_spec_bar_pane

0xa99c,	// (0x00058792) mup_spec_bar_pane_g1

0xa99c,	// (0x00058792) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0005d18e) mup_spec_bar_pane_g

0x0cd1,	// (0x0004eac7) aid_cale_week_size_cell_pane_ParamLimits

0x0ceb,	// (0x0004eae1) bg_cale_heading_pane_ParamLimits

0x0d0f,	// (0x0004eb05) bg_cale_pane_cp01_ParamLimits

0x0d2c,	// (0x0004eb22) cale_week_corner_pane_ParamLimits

0x0d4b,	// (0x0004eb41) cale_week_day_heading_pane_ParamLimits

0x0d74,	// (0x0004eb6a) cale_week_scroll_pane_g1_ParamLimits

0x0d93,	// (0x0004eb89) cale_week_scroll_pane_g2_ParamLimits

0x0dab,	// (0x0004eba1) cale_week_scroll_pane_g3_ParamLimits

0x0dc3,	// (0x0004ebb9) cale_week_scroll_pane_g4_ParamLimits

0x0ddb,	// (0x0004ebd1) cale_week_scroll_pane_g5_ParamLimits

0x0dfb,	// (0x0004ebf1) cale_week_scroll_pane_g6_ParamLimits

0x0e1b,	// (0x0004ec11) cale_week_scroll_pane_g7_ParamLimits

0x0e3f,	// (0x0004ec35) cale_week_scroll_pane_g8_ParamLimits

0x0e63,	// (0x0004ec59) cale_week_scroll_pane_g9_ParamLimits

0x0e7b,	// (0x0004ec71) cale_week_scroll_pane_g10_ParamLimits

0x0e93,	// (0x0004ec89) cale_week_scroll_pane_g11_ParamLimits

0x0eab,	// (0x0004eca1) cale_week_scroll_pane_g12_ParamLimits

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g13_ParamLimits

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g14_ParamLimits

0x0ecf,	// (0x0004ecc5) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0005cf21) cale_week_scroll_pane_g_ParamLimits

0x0f17,	// (0x0004ed0d) cale_week_time_pane_ParamLimits

0x0f3b,	// (0x0004ed31) grid_cale_week_pane_ParamLimits

0xa1a8,	// (0x00057f9e) listscroll_cale_week_pane_t1

0xa1ba,	// (0x00057fb0) scroll_pane_cp08_ParamLimits

0x1a3f,	// (0x0004f835) cale_month_corner_pane_ParamLimits

0xac99,	// (0x00058a8f) cale_month_pane_t1

0x1f47,	// (0x0004fd3d) cale_month_week_pane_ParamLimits

0x269d,	// (0x00050493) popup_call_status_window_g1_ParamLimits

0x26b1,	// (0x000504a7) popup_call_status_window_g2_ParamLimits

0x26c5,	// (0x000504bb) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0005d09b) popup_call_status_window_g_ParamLimits

0xb071,	// (0x00058e67) aid_call2_pane

0xfe28,	// (0x0004dc1e) msg_header_pane_g1

0x2ebd,	// (0x00050cb3) postcard_address2_pane_ParamLimits

0x2ebd,	// (0x00050cb3) postcard_address2_pane

0x2ed3,	// (0x00050cc9) postcard_message2_pane_ParamLimits

0x2ed3,	// (0x00050cc9) postcard_message2_pane

0x3a7c,	// (0x00051872) message2_row_pane_ParamLimits

0x3a7c,	// (0x00051872) message2_row_pane

0x3a9c,	// (0x00051892) address2_row_pane_ParamLimits

0x3a9c,	// (0x00051892) address2_row_pane

0xc645,	// (0x0005a43b) postcard_message2_row_pane_g1

0xc64d,	// (0x0005a443) postcard_message2_row_pane_t1

0xc645,	// (0x0005a43b) address2_row_pane_g1

0xc64d,	// (0x0005a443) address2_row_pane_t1

0x12a8,	// (0x0004f09e) aid_size_cell_vorec

0x9cbe,	// (0x00057ab4) main_rss_pane

0xc65b,	// (0x0005a451) rss_list_single_pane_ParamLimits

0xc65b,	// (0x0005a451) rss_list_single_pane

0xc669,	// (0x0005a45f) rss_list_single_pane_t1

0xc669,	// (0x0005a45f) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0005d34b) rss_list_single_pane_t

0x9cbe,	// (0x00057ab4) main_camera2_pane

0x9cbe,	// (0x00057ab4) main_video2_pane

0xa370,	// (0x00058166) cams_zoom_pane_cp2_ParamLimits

0xa370,	// (0x00058166) cams_zoom_pane_cp2

0xa370,	// (0x00058166) image2_vga_pane_ParamLimits

0xa370,	// (0x00058166) image2_vga_pane

0xa37e,	// (0x00058174) main_camera2_pane_g1_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g1

0xa37e,	// (0x00058174) main_camera2_pane_g2_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g2

0xa37e,	// (0x00058174) main_camera2_pane_g3_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g3

0xa37e,	// (0x00058174) main_camera2_pane_g4_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g4

0xa37e,	// (0x00058174) main_camera2_pane_g5_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g5

0xa37e,	// (0x00058174) main_camera2_pane_g6_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g6

0xa37e,	// (0x00058174) main_camera2_pane_g7_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g7

0xa37e,	// (0x00058174) main_camera2_pane_g8_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0005d367) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0005d367) main_camera2_pane_g

0x3c4c,	// (0x00051a42) main_camera2_pane_t1_ParamLimits

0x3c4c,	// (0x00051a42) main_camera2_pane_t1

0x3c4c,	// (0x00051a42) main_camera2_pane_t2_ParamLimits

0x3c4c,	// (0x00051a42) main_camera2_pane_t2

0x3c4c,	// (0x00051a42) main_camera2_pane_t3_ParamLimits

0x3c4c,	// (0x00051a42) main_camera2_pane_t3

0x3c4c,	// (0x00051a42) main_camera2_pane_t4_ParamLimits

0x3c4c,	// (0x00051a42) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0005d37a) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0005d37a) main_camera2_pane_t

0xcb57,	// (0x0005a94d) cams_zoom_pane_cp4_ParamLimits

0xcb57,	// (0x0005a94d) cams_zoom_pane_cp4

0xc6f9,	// (0x0005a4ef) image2_cif_pane_ParamLimits

0xc6f9,	// (0x0005a4ef) image2_cif_pane

0x9868,	// (0x0005765e) image2_subqcif_pane_ParamLimits

0x9868,	// (0x0005765e) image2_subqcif_pane

0x3c60,	// (0x00051a56) main_video2_pane_g1_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g1

0x3c60,	// (0x00051a56) main_video2_pane_g2_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g2

0x3c60,	// (0x00051a56) main_video2_pane_g3_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g3

0x3c60,	// (0x00051a56) main_video2_pane_g4_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g4

0x3c60,	// (0x00051a56) main_video2_pane_g5_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g5

0x3c60,	// (0x00051a56) main_video2_pane_g6_ParamLimits

0x3c60,	// (0x00051a56) main_video2_pane_g6

0x0005,

0xf593,	// (0x0005d389) main_video2_pane_g_ParamLimits

0xf593,	// (0x0005d389) main_video2_pane_g

0x3c6e,	// (0x00051a64) main_video2_pane_t1_ParamLimits

0x3c6e,	// (0x00051a64) main_video2_pane_t1

0x3c6e,	// (0x00051a64) main_video2_pane_t2_ParamLimits

0x3c6e,	// (0x00051a64) main_video2_pane_t2

0x3c6e,	// (0x00051a64) main_video2_pane_t3_ParamLimits

0x3c6e,	// (0x00051a64) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0005d396) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0005d396) main_video2_pane_t

0x357d,	// (0x00051373) call_muted_g2

0x0001,

0xf547,	// (0x0005d33d) call_muted_g

0x9cbe,	// (0x00057ab4) main_mup2_pane

0xb37a,	// (0x00059170) main_mup2_pane_g1_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g1

0xb37a,	// (0x00059170) main_mup2_pane_g2_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g2

0xa99c,	// (0x00058792) main_mup_pane_g13_cp1

0x97fb,	// (0x000575f1) mup_volume_pane_cp1

0xb37a,	// (0x00059170) main_mup2_pane_g4_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g4

0xb37a,	// (0x00059170) main_mup2_pane_g5_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g5

0xb37a,	// (0x00059170) main_mup2_pane_g6_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g6

0xb37a,	// (0x00059170) main_mup2_pane_g7_ParamLimits

0xb37a,	// (0x00059170) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0005d39d) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0005d39d) main_mup2_pane_g

0xb388,	// (0x0005917e) main_mup2_pane_t1_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t1

0xb388,	// (0x0005917e) main_mup2_pane_t2_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t2

0xb388,	// (0x0005917e) main_mup2_pane_t3_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t3

0xb388,	// (0x0005917e) main_mup2_pane_t4_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t4

0xb388,	// (0x0005917e) main_mup2_pane_t5_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t5

0xb388,	// (0x0005917e) main_mup2_pane_t6_ParamLimits

0xb388,	// (0x0005917e) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0005d3ac) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0005d3ac) main_mup2_pane_t

0xb3b0,	// (0x000591a6) mup2_visualizer_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup2_visualizer_pane

0xb3b0,	// (0x000591a6) mup_progress_pane_cp_ParamLimits

0xb3b0,	// (0x000591a6) mup_progress_pane_cp

0xc707,	// (0x0005a4fd) mup_volume_pane_cp_ParamLimits

0xc707,	// (0x0005a4fd) mup_volume_pane_cp

0x9f94,	// (0x00057d8a) mup2_visualizer_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) mup2_visualizer_pane_g1

0x9fa2,	// (0x00057d98) mup2_visualizer_pane_g2_ParamLimits

0x9fa2,	// (0x00057d98) mup2_visualizer_pane_g2

0x9fa2,	// (0x00057d98) mup2_visualizer_pane_g3_ParamLimits

0x9fa2,	// (0x00057d98) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0005ce9a) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0005ce9a) mup2_visualizer_pane_g

0xb5d2,	// (0x000593c8) aid_size_cell_fmradio

0x372d,	// (0x00051523) aid_height_parent_landcape

0xaaf7,	// (0x000588ed) wml_content_pane_cp

0xaaff,	// (0x000588f5) wml_tabs_pane

0xab08,	// (0x000588fe) popup_wml_miniature_window

0xab10,	// (0x00058906) scroll_pane_cp021

0xab24,	// (0x0005891a) wml_content_pane_comp8

0x9cbe,	// (0x00057ab4) bg_popup_sub_pane_cp05

0xc71d,	// (0x0005a513) popup_wml_miniature_window_g1

0xc725,	// (0x0005a51b) wml_miniature_view_pane

0x3c82,	// (0x00051a78) aid_size_wml_view

0x3c8a,	// (0x00051a80) wml_miniature_view_pane_g1

0x3c93,	// (0x00051a89) wml_miniature_view_pane_g2

0x3c9c,	// (0x00051a92) wml_miniature_view_pane_g3

0x3ca4,	// (0x00051a9a) wml_miniature_view_pane_g4

0x3cac,	// (0x00051aa2) wml_miniature_view_pane_g5

0x3cb4,	// (0x00051aaa) wml_miniature_view_pane_g6

0x3cbc,	// (0x00051ab2) wml_miniature_view_pane_g7

0x3cc4,	// (0x00051aba) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0005d3b9) wml_miniature_view_pane_g

0xc72d,	// (0x0005a523) background_graphic_ParamLimits

0xc72d,	// (0x0005a523) background_graphic

0xc739,	// (0x0005a52f) wml_tabs_2_pane

0xc742,	// (0x0005a538) wml_tabs_3_pane_ParamLimits

0xc742,	// (0x0005a538) wml_tabs_3_pane

0xc754,	// (0x0005a54a) wml_tabs_4_pane_ParamLimits

0xc754,	// (0x0005a54a) wml_tabs_4_pane

0xc76a,	// (0x0005a560) wml_tabs_5_pane_ParamLimits

0xc76a,	// (0x0005a560) wml_tabs_5_pane

0xc784,	// (0x0005a57a) wml_tabs_pane_g2_ParamLimits

0xc784,	// (0x0005a57a) wml_tabs_pane_g2

0xc799,	// (0x0005a58f) wml_tabs_pane_g3_ParamLimits

0xc799,	// (0x0005a58f) wml_tabs_pane_g3

0xc7ae,	// (0x0005a5a4) wml_tabs_2_active_pane_ParamLimits

0xc7ae,	// (0x0005a5a4) wml_tabs_2_active_pane

0xc7ae,	// (0x0005a5a4) wml_tabs_2_passive_pane_ParamLimits

0xc7ae,	// (0x0005a5a4) wml_tabs_2_passive_pane

0x3ccc,	// (0x00051ac2) wml_tabs_3_active_pane_cp_ParamLimits

0x3ccc,	// (0x00051ac2) wml_tabs_3_active_pane_cp

0x3ce1,	// (0x00051ad7) wml_tabs_3_passive_pane_ParamLimits

0x3ce1,	// (0x00051ad7) wml_tabs_3_passive_pane

0x3cf4,	// (0x00051aea) wml_tabs_3_passive_pane_cp_ParamLimits

0x3cf4,	// (0x00051aea) wml_tabs_3_passive_pane_cp

0x3d0b,	// (0x00051b01) tabs_4_active_pane

0x3d13,	// (0x00051b09) tabs_4_passive_pane

0x3d1d,	// (0x00051b13) tabs_4_passive_pane_cp

0x3d25,	// (0x00051b1b) tabs_4_passive_pane_cp2

0x3466,	// (0x0005125c) aid_height_text

0xb3b0,	// (0x000591a6) mup_volume_cont_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup_volume_cont_pane

0x97fb,	// (0x000575f1) aid_size_cell_pinb

0x97fb,	// (0x000575f1) aid_size_list_pinb

0xb3b0,	// (0x000591a6) mup2_volume_cont_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup2_volume_cont_pane

0xa3a0,	// (0x00058196) mup2_volume_cont_pane_g1_ParamLimits

0xa3a0,	// (0x00058196) mup2_volume_cont_pane_g1

0x0729,	// (0x0004e51f) aid_size_cell_touch_ParamLimits

0x0729,	// (0x0004e51f) aid_size_cell_touch

0x08fd,	// (0x0004e6f3) touch_pane_ParamLimits

0x08fd,	// (0x0004e6f3) touch_pane

0x97fb,	// (0x000575f1) main_rss2_pane

0xc7c5,	// (0x0005a5bb) listscroll_rss2_pane

0xc7ce,	// (0x0005a5c4) rss2_navigation_pane

0xc7d6,	// (0x0005a5cc) list_rss2_pane

0xb189,	// (0x00058f7f) scroll_pane_cp22

0xc7de,	// (0x0005a5d4) rss2_navigation_pane_g1

0xc7e7,	// (0x0005a5dd) rss2_navigation_pane_g2

0xc7ef,	// (0x0005a5e5) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0005d3ca) rss2_navigation_pane_g

0xc7f7,	// (0x0005a5ed) rss2_navigation_pane_t1

0x3d2f,	// (0x00051b25) rss2_list_single_pane_ParamLimits

0x3d2f,	// (0x00051b25) rss2_list_single_pane

0xc805,	// (0x0005a5fb) rss2_list_single_pane_t2

0xc813,	// (0x0005a609) rss2_list_single_pane_t3_ParamLimits

0xc813,	// (0x0005a609) rss2_list_single_pane_t3

0xc830,	// (0x0005a626) rss2_list_single_pane_t4

0x2587,	// (0x0005037d) smil_status_pane_g1

0x9868,	// (0x0005765e) main_image2_pane_ParamLimits

0x9868,	// (0x0005765e) main_image2_pane

0xa37e,	// (0x00058174) main_camera2_pane_g9_ParamLimits

0xa37e,	// (0x00058174) main_camera2_pane_g9

0x3c4c,	// (0x00051a42) main_camera2_pane_t5_ParamLimits

0x3c4c,	// (0x00051a42) main_camera2_pane_t5

0xa38c,	// (0x00058182) main_camera2_pane_t6_ParamLimits

0xa38c,	// (0x00058182) main_camera2_pane_t6

0x3d46,	// (0x00051b3c) main_image2_pane_g1_ParamLimits

0x3d46,	// (0x00051b3c) main_image2_pane_g1

0x3115,	// (0x00050f0b) smil2_video_pane_ParamLimits

0x3115,	// (0x00050f0b) smil2_video_pane

0x0761,	// (0x0004e557) aid_zoom_text_primary_cp

0x985e,	// (0x00057654) popup_preview_fixed_window

0xaa51,	// (0x00058847) im_reading_pane_g1

0x3c3e,	// (0x00051a34) cams2_bc_adjust_pane_cp_ParamLimits

0x3c3e,	// (0x00051a34) cams2_bc_adjust_pane_cp

0xb3b0,	// (0x000591a6) cams2_bc_adjust_pane_ParamLimits

0xb3b0,	// (0x000591a6) cams2_bc_adjust_pane

0xa99c,	// (0x00058792) cams2_bc_adjust_pane_g1

0x97fb,	// (0x000575f1) cams2_slider_pane

0xa99c,	// (0x00058792) cams2_slider_pane_g1

0xa99c,	// (0x00058792) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0005d3d1) cams2_slider_pane_g

0x0993,	// (0x0004e789) calc_display_pane_ParamLimits

0x09b8,	// (0x0004e7ae) calc_paper_pane_ParamLimits

0x09db,	// (0x0004e7d1) grid_calc_pane_ParamLimits

0xa26f,	// (0x00058065) popup_clock_digital_window_t1_ParamLimits

0xb56f,	// (0x00059365) main_image_pane_t1

0x0973,	// (0x0004e769) aid_size_cell_calc_ParamLimits

0x0973,	// (0x0004e769) aid_size_cell_calc

0x3773,	// (0x00051569) popup_blid_sat_info2_window_ParamLimits

0x3773,	// (0x00051569) popup_blid_sat_info2_window

0xc83e,	// (0x0005a634) aid_size_cell_blid

0xc6f9,	// (0x0005a4ef) bg_popup_window_pane_cp07

0xc85b,	// (0x0005a651) grid_popup_blid_pane

0xc865,	// (0x0005a65b) heading_pane_cp05_ParamLimits

0xc865,	// (0x0005a65b) heading_pane_cp05

0xc92f,	// (0x0005a725) cell_popup_blid_pane_ParamLimits

0xc92f,	// (0x0005a725) cell_popup_blid_pane

0xc959,	// (0x0005a74f) cell_popup_blid_pane_g1

0xc961,	// (0x0005a757) cell_popup_blid_pane_t1

0xb3b0,	// (0x000591a6) mup2_indicator_pane_ParamLimits

0xb3b0,	// (0x000591a6) mup2_indicator_pane

0x97fb,	// (0x000575f1) mup2_visualizer_osc_pane

0xc707,	// (0x0005a4fd) mup2_visualizer_spec_pane_ParamLimits

0xc707,	// (0x0005a4fd) mup2_visualizer_spec_pane

0x97fb,	// (0x000575f1) mup2_spec_half_pane

0x97fb,	// (0x000575f1) mup2_spec_half_pane_cp

0xc96f,	// (0x0005a765) mup2_spec_bar_pane_ParamLimits

0xc96f,	// (0x0005a765) mup2_spec_bar_pane

0xa99c,	// (0x00058792) mup2_spec_bar_pane_g1

0xc98e,	// (0x0005a784) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0005d3f7) mup2_spec_bar_pane_g

0x97fb,	// (0x000575f1) mup2_osc_middle_pane

0xa99c,	// (0x00058792) mup2_visualizer_osc_pane_g1

0x9896,	// (0x0005768c) popup_number_entry_window_t1_ParamLimits

0x98a9,	// (0x0005769f) popup_number_entry_window_t2_ParamLimits

0x98bb,	// (0x000576b1) popup_number_entry_window_t3_ParamLimits

0x98cd,	// (0x000576c3) popup_number_entry_window_t5_ParamLimits

0x98cd,	// (0x000576c3) popup_number_entry_window_t5

0xf045,	// (0x0005ce3b) popup_number_entry_window_t_ParamLimits

0x9902,	// (0x000576f8) text_title_cp2_ParamLimits

0xa2c4,	// (0x000580ba) aid_hotspot_pointer_text2_pane

0xa2ea,	// (0x000580e0) main_viewer_pane_g9_ParamLimits

0xa2ea,	// (0x000580e0) main_viewer_pane_g9

0xac99,	// (0x00058a8f) cale_month_pane_t1_ParamLimits

0xacd6,	// (0x00058acc) bg_cale_pane_ParamLimits

0xacee,	// (0x00058ae4) list_cale_pane_ParamLimits

0xacff,	// (0x00058af5) listscroll_cale_day_pane_t1

0xad11,	// (0x00058b07) scroll_pane_cp09_ParamLimits

0x2a93,	// (0x00050889) main_mup_eq_pane_t1_ParamLimits

0x2a93,	// (0x00050889) main_mup_eq_pane_t1

0x2aaf,	// (0x000508a5) main_mup_eq_pane_t2_ParamLimits

0x2aaf,	// (0x000508a5) main_mup_eq_pane_t2

0x2acb,	// (0x000508c1) main_mup_eq_pane_t3_ParamLimits

0x2acb,	// (0x000508c1) main_mup_eq_pane_t3

0x2ae9,	// (0x000508df) main_mup_eq_pane_t4_ParamLimits

0x2ae9,	// (0x000508df) main_mup_eq_pane_t4

0x2b07,	// (0x000508fd) main_mup_eq_pane_t5_ParamLimits

0x2b07,	// (0x000508fd) main_mup_eq_pane_t5

0x2b25,	// (0x0005091b) main_mup_eq_pane_t6_ParamLimits

0x2b25,	// (0x0005091b) main_mup_eq_pane_t6

0x2b3b,	// (0x00050931) main_mup_eq_pane_t7_ParamLimits

0x2b3b,	// (0x00050931) main_mup_eq_pane_t7

0x2b51,	// (0x00050947) main_mup_eq_pane_t8_ParamLimits

0x2b51,	// (0x00050947) main_mup_eq_pane_t8

0x2b67,	// (0x0005095d) main_mup_eq_pane_t9_ParamLimits

0x2b67,	// (0x0005095d) main_mup_eq_pane_t9

0x2b83,	// (0x00050979) main_mup_eq_pane_t10_ParamLimits

0x2b83,	// (0x00050979) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0005d19a) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0005d19a) main_mup_eq_pane_t

0x2c58,	// (0x00050a4e) mup_equalizer_pane_cp5_ParamLimits

0x2c70,	// (0x00050a66) mup_equalizer_pane_cp6_ParamLimits

0x2c88,	// (0x00050a7e) mup_equalizer_pane_cp7_ParamLimits

0x97fb,	// (0x000575f1) main_gallery_pane

0xc697,	// (0x0005a48d) smil2_volume_pane

0xc69f,	// (0x0005a495) smil_status_volume_pane_g1_ParamLimits

0xc6b2,	// (0x0005a4a8) smil_status_volume_pane_g2_ParamLimits

0xa34e,	// (0x00058144) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0005d350) smil_status_volume_pane_g_ParamLimits

0xc6f9,	// (0x0005a4ef) bg_popup_window_pane_cp07_ParamLimits

0xc846,	// (0x0005a63c) blid_firmament_pane

0x9868,	// (0x0005765e) aid_size_cell_gallery_ParamLimits

0x9868,	// (0x0005765e) aid_size_cell_gallery

0x9868,	// (0x0005765e) grid_gallery_pane_ParamLimits

0x9868,	// (0x0005765e) grid_gallery_pane

0xc6f9,	// (0x0005a4ef) cell_gallery_pane_ParamLimits

0xc6f9,	// (0x0005a4ef) cell_gallery_pane

0x9868,	// (0x0005765e) bg_cell_gallery_focus_pane_ParamLimits

0x9868,	// (0x0005765e) bg_cell_gallery_focus_pane

0x9f94,	// (0x00057d8a) cell_gallery_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) cell_gallery_pane_g1

0x9f94,	// (0x00057d8a) cell_gallery_pane_g2_ParamLimits

0x9f94,	// (0x00057d8a) cell_gallery_pane_g2

0x9f94,	// (0x00057d8a) cell_gallery_pane_g3_ParamLimits

0x9f94,	// (0x00057d8a) cell_gallery_pane_g3

0x9fa2,	// (0x00057d98) cell_gallery_pane_g4_ParamLimits

0x9fa2,	// (0x00057d98) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0005d3fc) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0005d3fc) cell_gallery_pane_g

0xc998,	// (0x0005a78e) bg_cell_gallery_focus_pane_g1

0xc9a0,	// (0x0005a796) bg_cell_gallery_focus_pane_g2

0xc9a8,	// (0x0005a79e) bg_cell_gallery_focus_pane_g3

0xc9b0,	// (0x0005a7a6) bg_cell_gallery_focus_pane_g4

0xc9b8,	// (0x0005a7ae) bg_cell_gallery_focus_pane_g5

0xc9c0,	// (0x0005a7b6) bg_cell_gallery_focus_pane_g6

0xc9c8,	// (0x0005a7be) bg_cell_gallery_focus_pane_g7

0xc9d0,	// (0x0005a7c6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0005d405) bg_cell_gallery_focus_pane_g

0xc9d8,	// (0x0005a7ce) aid_firma_cardinal

0xc9ec,	// (0x0005a7e2) blid_firmament_pane_t1

0xca03,	// (0x0005a7f9) blid_firmament_pane_t2

0xca1a,	// (0x0005a810) blid_firmament_pane_t3

0xca31,	// (0x0005a827) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0005d416) blid_firmament_pane_t

0xca48,	// (0x0005a83e) blid_sat_info_pane

0xa99c,	// (0x00058792) blid_sat_info_pane_g1

0xa99c,	// (0x00058792) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0005d18e) blid_sat_info_pane_g

0xca58,	// (0x0005a84e) blid_sat_info_pane_t1

0xca66,	// (0x0005a85c) smil2_volume_content_pane

0xca6f,	// (0x0005a865) smil2_volume_pane_g1

0xa910,	// (0x00058706) smil2_volume_content_pane_g1

0xca77,	// (0x0005a86d) smil2_volume_content_pane_g2

0xca80,	// (0x0005a876) smil2_volume_content_pane_g3

0xca89,	// (0x0005a87f) smil2_volume_content_pane_g4

0xca92,	// (0x0005a888) smil2_volume_content_pane_g5

0xca9b,	// (0x0005a891) smil2_volume_content_pane_g6

0xcaa4,	// (0x0005a89a) smil2_volume_content_pane_g7

0xcaad,	// (0x0005a8a3) smil2_volume_content_pane_g8

0xcab6,	// (0x0005a8ac) smil2_volume_content_pane_g9

0xcabf,	// (0x0005a8b5) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0005d41f) smil2_volume_content_pane_g

0x1009,	// (0x0004edff) cale_week_day_heading_pane_t1_ParamLimits

0x1033,	// (0x0004ee29) cale_week_day_heading_pane_t2_ParamLimits

0x1062,	// (0x0004ee58) cale_week_day_heading_pane_t3_ParamLimits

0x1091,	// (0x0004ee87) cale_week_day_heading_pane_t4_ParamLimits

0x10c0,	// (0x0004eeb6) cale_week_day_heading_pane_t5_ParamLimits

0x10f3,	// (0x0004eee9) cale_week_day_heading_pane_t6_ParamLimits

0x112a,	// (0x0004ef20) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0005cf42) cale_week_day_heading_pane_t_ParamLimits

0xa1d7,	// (0x00057fcd) bg_cale_side_pane_ParamLimits

0x1154,	// (0x0004ef4a) cale_week_time_pane_t1_ParamLimits

0x116e,	// (0x0004ef64) cale_week_time_pane_t2_ParamLimits

0x1188,	// (0x0004ef7e) cale_week_time_pane_t3_ParamLimits

0x11a2,	// (0x0004ef98) cale_week_time_pane_t4_ParamLimits

0x11bc,	// (0x0004efb2) cale_week_time_pane_t5_ParamLimits

0x11d6,	// (0x0004efcc) cale_week_time_pane_t6_ParamLimits

0x11f6,	// (0x0004efec) cale_week_time_pane_t7_ParamLimits

0x121c,	// (0x0004f012) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0005cf51) cale_week_time_pane_t_ParamLimits

0x1242,	// (0x0004f038) cell_cale_week_pane_g2_ParamLimits

0xa1d7,	// (0x00057fcd) bg_cale_side_pane_cp01_ParamLimits

0x2370,	// (0x00050166) cale_month_week_pane_t1_ParamLimits

0x2389,	// (0x0005017f) cale_month_week_pane_t2_ParamLimits

0x23a2,	// (0x00050198) cale_month_week_pane_t3_ParamLimits

0x23bb,	// (0x000501b1) cale_month_week_pane_t4_ParamLimits

0x23d4,	// (0x000501ca) cale_month_week_pane_t5_ParamLimits

0x23ed,	// (0x000501e3) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0005d01f) cale_month_week_pane_t_ParamLimits

0xa1ef,	// (0x00057fe5) cell_cale_month_pane_g1_ParamLimits

0x97fb,	// (0x000575f1) main_cale_event_viewer_pane

0x97fb,	// (0x000575f1) listscroll_cale_event_viewer_pane

0xcac8,	// (0x0005a8be) list_cale_ev_pane

0xcad0,	// (0x0005a8c6) scroll_pane_cp023

0x3d5c,	// (0x00051b52) field_cale_ev_pane_ParamLimits

0x3d5c,	// (0x00051b52) field_cale_ev_pane

0xcadc,	// (0x0005a8d2) field_cale_ev_content_pane_ParamLimits

0xcadc,	// (0x0005a8d2) field_cale_ev_content_pane

0xcae8,	// (0x0005a8de) field_cale_ev_pane_g1_ParamLimits

0xcae8,	// (0x0005a8de) field_cale_ev_pane_g1

0xcaf4,	// (0x0005a8ea) field_cale_ev_pane_g2_ParamLimits

0xcaf4,	// (0x0005a8ea) field_cale_ev_pane_g2

0xcb0c,	// (0x0005a902) field_cale_ev_pane_g3_ParamLimits

0xcb0c,	// (0x0005a902) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0005d434) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0005d434) field_cale_ev_pane_g

0xcb24,	// (0x0005a91a) field_cale_ev_pane_t1_ParamLimits

0xcb24,	// (0x0005a91a) field_cale_ev_pane_t1

0x3d80,	// (0x00051b76) field_cale_ev_content_pane_t1_ParamLimits

0x3d80,	// (0x00051b76) field_cale_ev_content_pane_t1

0xb455,	// (0x0005924b) bg_button_pane_cp01

0x0cc1,	// (0x0004eab7) listscroll_cale_week_pane_ParamLimits

0xa19f,	// (0x00057f95) popup_toolbar_window_cp01

0xa1a8,	// (0x00057f9e) listscroll_cale_week_pane_t1_ParamLimits

0x0cc1,	// (0x0004eab7) listscroll_cale_day_pane_ParamLimits

0xa19f,	// (0x00057f95) popup_toolbar_window_cp02

0xacff,	// (0x00058af5) listscroll_cale_day_pane_t1_ParamLimits

0x0cc1,	// (0x0004eab7) main_cale_month_pane_ParamLimits

0xa339,	// (0x0005812f) popup_toolbar_window_cp03_ParamLimits

0xa339,	// (0x0005812f) popup_toolbar_window_cp03

0x2fd3,	// (0x00050dc9) main_image_pane_g2_ParamLimits

0x2fd3,	// (0x00050dc9) main_image_pane_g2

0x2fe4,	// (0x00050dda) main_image_pane_g3_ParamLimits

0x2fe4,	// (0x00050dda) main_image_pane_g3

0x0002,

0xf436,	// (0x0005d22c) main_image_pane_g_ParamLimits

0xf436,	// (0x0005d22c) main_image_pane_g

0xb56f,	// (0x00059365) main_image_pane_t1_ParamLimits

0x2ff5,	// (0x00050deb) main_image_pane_t2_ParamLimits

0x2ff5,	// (0x00050deb) main_image_pane_t2

0x3007,	// (0x00050dfd) main_image_pane_t3_ParamLimits

0x3007,	// (0x00050dfd) main_image_pane_t3

0x302f,	// (0x00050e25) main_image_pane_t4_ParamLimits

0x302f,	// (0x00050e25) main_image_pane_t4

0x0003,

0xf43d,	// (0x0005d233) main_image_pane_t_ParamLimits

0xf43d,	// (0x0005d233) main_image_pane_t

0x304f,	// (0x00050e45) popup_image_details_window_cp01

0x3059,	// (0x00050e4f) popup_toobar_trans_pane_cp01_ParamLimits

0x3059,	// (0x00050e4f) popup_toobar_trans_pane_cp01

0x3866,	// (0x0005165c) popup_image_details_window_ParamLimits

0x3866,	// (0x0005165c) popup_image_details_window

0xa30a,	// (0x00058100) popup_image_focus_window

0xa370,	// (0x00058166) camera2_autofocus_pane_ParamLimits

0xa370,	// (0x00058166) camera2_autofocus_pane

0x97fb,	// (0x000575f1) bg_popup_sub_pane_cp06

0xcb3b,	// (0x0005a931) popup_image_focus_window_g1

0xcb43,	// (0x0005a939) popup_image_focus_window_g2

0xcb65,	// (0x0005a95b) popup_image_focus_window_g3

0xcb6d,	// (0x0005a963) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0005d43b) popup_image_focus_window_g

0xcb75,	// (0x0005a96b) popup_image_focus_window_t1

0xcb83,	// (0x0005a979) popup_image_focus_window_t2

0xcb93,	// (0x0005a989) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0005d444) popup_image_focus_window_t

0x9f94,	// (0x00057d8a) camera2_autofocus_pane_g1

0x9868,	// (0x0005765e) bg_tb_trans_pane_cp01

0xcba1,	// (0x0005a997) popup_image_details_window_g1

0xcbb4,	// (0x0005a9aa) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0005d456) popup_image_details_window_g

0xcbdd,	// (0x0005a9d3) popup_image_details_window_t1

0xcbef,	// (0x0005a9e5) popup_image_details_window_t2

0xcc08,	// (0x0005a9fe) popup_image_details_window_t3

0xcc1c,	// (0x0005aa12) popup_image_details_window_t4

0xcc37,	// (0x0005aa2d) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0005d45d) popup_image_details_window_t

0x9ffa,	// (0x00057df0) bg_calc_paper_pane_ParamLimits

0x97fb,	// (0x000575f1) grid_highlight_pane_cp013

0xa00e,	// (0x00057e04) list_calc_pane_ParamLimits

0xa020,	// (0x00057e16) scroll_pane_cp024

0xa028,	// (0x00057e1e) bg_calc_display_pane_ParamLimits

0x0adb,	// (0x0004e8d1) calc_display_pane_t1_ParamLimits

0x0af0,	// (0x0004e8e6) calc_display_pane_t2_ParamLimits

0xa034,	// (0x00057e2a) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0005cec2) calc_display_pane_t_ParamLimits

0x0bbe,	// (0x0004e9b4) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0005cedf) cell_calc_pane_g

0x0bc7,	// (0x0004e9bd) cell_calc_pane_t1

0xa0a1,	// (0x00057e97) grid_highlight_pane_cp02_ParamLimits

0xa0b7,	// (0x00057ead) toolbar_button_pane_cp01_ParamLimits

0xa0b7,	// (0x00057ead) toolbar_button_pane_cp01

0xb5b4,	// (0x000593aa) temp_image_control_pane_ParamLimits

0xb5b4,	// (0x000593aa) temp_image_control_pane

0x9868,	// (0x0005765e) main_mp3_pane

0xcc51,	// (0x0005aa47) temp_image_control_pane_g1_ParamLimits

0xcc51,	// (0x0005aa47) temp_image_control_pane_g1

0xcc5f,	// (0x0005aa55) temp_image_control_pane_g2_ParamLimits

0xcc5f,	// (0x0005aa55) temp_image_control_pane_g2

0xcc71,	// (0x0005aa67) temp_image_control_pane_g3_ParamLimits

0xcc71,	// (0x0005aa67) temp_image_control_pane_g3

0x3da1,	// (0x00051b97) temp_image_control_pane_g4_ParamLimits

0x3da1,	// (0x00051b97) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0005d468) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0005d468) temp_image_control_pane_g

0xcc51,	// (0x0005aa47) main_mp3_pane_g1

0x3db4,	// (0x00051baa) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0005d471) main_mp3_pane_g

0xcca6,	// (0x0005aa9c) main_mp3_pane_t1

0x9fa2,	// (0x00057d98) main_camera_pane_g8_ParamLimits

0x9fa2,	// (0x00057d98) main_camera_pane_g8

0x1419,	// (0x0004f20f) main_video_pane_g7_ParamLimits

0x1419,	// (0x0004f20f) main_video_pane_g7

0xb39c,	// (0x00059192) main_camera2_pane_t7_ParamLimits

0xb39c,	// (0x00059192) main_camera2_pane_t7

0xaab7,	// (0x000588ad) scroll_pane_cp025_ParamLimits

0xaab7,	// (0x000588ad) scroll_pane_cp025

0xaacb,	// (0x000588c1) scroll_pane_cp026_ParamLimits

0xaacb,	// (0x000588c1) scroll_pane_cp026

0xaada,	// (0x000588d0) wml_content_pane_ParamLimits

0x97fb,	// (0x000575f1) main_touch_calib_pane

0x3e86,	// (0x00051c7c) main_touch_calib_pane_g1

0x3e98,	// (0x00051c8e) main_touch_calib_pane_g2

0x3eaa,	// (0x00051ca0) main_touch_calib_pane_g3

0x3ebc,	// (0x00051cb2) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0005d48f) main_touch_calib_pane_g

0x3ece,	// (0x00051cc4) main_touch_calib_pane_t1

0x3ee8,	// (0x00051cde) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0005d498) main_touch_calib_pane_t

0xb204,	// (0x00058ffa) mup_progress_pane_cp02

0xb223,	// (0x00059019) navi_pane_g1

0xb285,	// (0x0005907b) navi_pane_mp_t3

0x9868,	// (0x0005765e) main_mp3_pane_ParamLimits

0x3a1f,	// (0x00051815) navi_pane_ParamLimits

0xcc51,	// (0x0005aa47) main_mp3_pane_g1_ParamLimits

0x3db4,	// (0x00051baa) main_mp3_pane_g2_ParamLimits

0x3dc0,	// (0x00051bb6) main_mp3_pane_g3_ParamLimits

0x3dc0,	// (0x00051bb6) main_mp3_pane_g3

0x3dce,	// (0x00051bc4) main_mp3_pane_g4_ParamLimits

0x3dce,	// (0x00051bc4) main_mp3_pane_g4

0x9f94,	// (0x00057d8a) main_mp3_pane_g5_ParamLimits

0x9f94,	// (0x00057d8a) main_mp3_pane_g5

0xcc81,	// (0x0005aa77) main_mp3_pane_g6_ParamLimits

0xcc81,	// (0x0005aa77) main_mp3_pane_g6

0xcc8e,	// (0x0005aa84) main_mp3_pane_g7_ParamLimits

0xcc8e,	// (0x0005aa84) main_mp3_pane_g7

0xcc9a,	// (0x0005aa90) main_mp3_pane_g8_ParamLimits

0xcc9a,	// (0x0005aa90) main_mp3_pane_g8

0xf67b,	// (0x0005d471) main_mp3_pane_g_ParamLimits

0x3dda,	// (0x00051bd0) main_mp3_pane_t2

0x3de8,	// (0x00051bde) main_mp3_pane_t3

0xccb4,	// (0x0005aaaa) main_mp3_pane_t4

0xccc2,	// (0x0005aab8) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0005d482) main_mp3_pane_t

0xccd0,	// (0x0005aac6) mup_progress_pane_cp01

0x0761,	// (0x0004e557) aid_zoom_text_secondary2

0xcac8,	// (0x0005a8be) list_cale_ev2_pane

0xcad0,	// (0x0005a8c6) scroll_pane_cp023_ParamLimits

0x3f42,	// (0x00051d38) field_cale_ev2_pane_ParamLimits

0x3f42,	// (0x00051d38) field_cale_ev2_pane

0xfe36,	// (0x0004dc2c) field_cale_ev2_pane_g1_ParamLimits

0xfe36,	// (0x0004dc2c) field_cale_ev2_pane_g1

0xfe42,	// (0x0004dc38) field_cale_ev2_pane_g2_ParamLimits

0xfe42,	// (0x0004dc38) field_cale_ev2_pane_g2

0xfe5a,	// (0x0004dc50) field_cale_ev2_pane_g3_ParamLimits

0xfe5a,	// (0x0004dc50) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0005d4a3) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0005d4a3) field_cale_ev2_pane_g

0xfe72,	// (0x0004dc68) field_cale_ev2_pane_t1_ParamLimits

0xfe72,	// (0x0004dc68) field_cale_ev2_pane_t1

0xfe89,	// (0x0004dc7f) field_cale_ev2_pane_t2_ParamLimits

0xfe89,	// (0x0004dc7f) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0005d4ac) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0005d4ac) field_cale_ev2_pane_t

0x2e6d,	// (0x00050c63) main_postcard_pane_g5_ParamLimits

0x2e6d,	// (0x00050c63) main_postcard_pane_g5

0x2e83,	// (0x00050c79) main_postcard_pane_g6_ParamLimits

0x2e83,	// (0x00050c79) main_postcard_pane_g6

0x9868,	// (0x0005765e) camera2_autofocus_pane_cp_ParamLimits

0x9868,	// (0x0005765e) camera2_autofocus_pane_cp

0x9868,	// (0x0005765e) main_mup3_pane

0x3fbc,	// (0x00051db2) main_mup3_pane_g1_ParamLimits

0x3fbc,	// (0x00051db2) main_mup3_pane_g1

0x3fde,	// (0x00051dd4) main_mup3_pane_g2_ParamLimits

0x3fde,	// (0x00051dd4) main_mup3_pane_g2

0x4059,	// (0x00051e4f) main_mup3_pane_g3_ParamLimits

0x4059,	// (0x00051e4f) main_mup3_pane_g3

0x40c3,	// (0x00051eb9) main_mup3_pane_g4_ParamLimits

0x40c3,	// (0x00051eb9) main_mup3_pane_g4

0x412d,	// (0x00051f23) main_mup3_pane_g5_ParamLimits

0x412d,	// (0x00051f23) main_mup3_pane_g5

0x4197,	// (0x00051f8d) main_mup3_pane_g6_ParamLimits

0x4197,	// (0x00051f8d) main_mup3_pane_g6

0x9fa2,	// (0x00057d98) main_mup3_pane_g7_ParamLimits

0x9fa2,	// (0x00057d98) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0005d4bc) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0005d4bc) main_mup3_pane_g

0x421b,	// (0x00052011) main_mup3_pane_t1_ParamLimits

0x421b,	// (0x00052011) main_mup3_pane_t1

0x4285,	// (0x0005207b) main_mup3_pane_t2_ParamLimits

0x4285,	// (0x0005207b) main_mup3_pane_t2

0x435b,	// (0x00052151) main_mup3_pane_t4_ParamLimits

0x435b,	// (0x00052151) main_mup3_pane_t4

0x43b9,	// (0x000521af) main_mup3_pane_t5_ParamLimits

0x43b9,	// (0x000521af) main_mup3_pane_t5

0x4481,	// (0x00052277) main_mup3_pane_t6_ParamLimits

0x4481,	// (0x00052277) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0005d4cd) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0005d4cd) main_mup3_pane_t

0x4539,	// (0x0005232f) mup3_progress_pane_ParamLimits

0x4539,	// (0x0005232f) mup3_progress_pane

0x45d1,	// (0x000523c7) popup_mup3_control_window_ParamLimits

0x45d1,	// (0x000523c7) popup_mup3_control_window

0xccd8,	// (0x0005aace) popup_mup3_text_window

0x4607,	// (0x000523fd) mup3_progress_pane_t1

0x4626,	// (0x0005241c) mup3_progress_pane_t2

0xcce0,	// (0x0005aad6) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0005d4da) mup3_progress_pane_t

0xccfd,	// (0x0005aaf3) mup_progress_pane_cp03

0x97fb,	// (0x000575f1) bg_tb_trans_pane_cp04

0x4645,	// (0x0005243b) mup3_volume_pane

0x464d,	// (0x00052443) popup_mup3_control_window_g1

0x4656,	// (0x0005244c) mup3_volume_pane_g1

0x465f,	// (0x00052455) mup3_volume_pane_g2

0x4668,	// (0x0005245e) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0005d4e1) mup3_volume_pane_g

0x97fb,	// (0x000575f1) bg_tb_trans_pane_cp03

0xcd0d,	// (0x0005ab03) popup_mup3_text_window_g1

0xcd15,	// (0x0005ab0b) popup_mup3_text_window_t1

0xa082,	// (0x00057e78) list_calc_item_pane_g1_ParamLimits

0xc7bc,	// (0x0005a5b2) mup_volume_pane_cp_g1

0x3f02,	// (0x00051cf8) main_touch_calib_pane_t3

0x3f16,	// (0x00051d0c) main_touch_calib_pane_t4

0x3f2c,	// (0x00051d22) main_touch_calib_pane_t5

0x9805,	// (0x000575fb) aid_cell_size_toolbar2

0x980d,	// (0x00057603) aid_popup3_width_pane

0x0759,	// (0x0004e54f) aid_zoom_text_msg_primary

0x12f2,	// (0x0004f0e8) vorec_t7

0xa046,	// (0x00057e3c) bg_calc_paper_pane_g1_ParamLimits

0xa052,	// (0x00057e48) bg_calc_paper_pane_g2_ParamLimits

0xa05e,	// (0x00057e54) bg_calc_paper_pane_g3_ParamLimits

0xa06a,	// (0x00057e60) bg_calc_paper_pane_g4_ParamLimits

0xa076,	// (0x00057e6c) bg_calc_paper_pane_g5_ParamLimits

0x0b40,	// (0x0004e936) bg_calc_paper_pane_g6_ParamLimits

0x0b53,	// (0x0004e949) bg_calc_paper_pane_g7_ParamLimits

0x0b66,	// (0x0004e95c) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0005cec9) bg_calc_paper_pane_g_ParamLimits

0x0b79,	// (0x0004e96f) calc_bg_paper_pane_g9_ParamLimits

0x9868,	// (0x0005765e) image_qvga_pane_ParamLimits

0x9868,	// (0x0005765e) image_qvga_pane

0x9f19,	// (0x00057d0f) bg_popup_sub_pane_cp04_ParamLimits

0xb4eb,	// (0x000592e1) popup_mup_playback_window_g1_ParamLimits

0xb4f7,	// (0x000592ed) popup_mup_playback_window_t1_ParamLimits

0xb50c,	// (0x00059302) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0005d227) popup_mup_playback_window_t_ParamLimits

0x9fa2,	// (0x00057d98) main_mup2_pane_g3_ParamLimits

0x9fa2,	// (0x00057d98) main_mup2_pane_g3

0x160e,	// (0x0004f404) popup_toolbar_window_cp04

0xb907,	// (0x000596fd) popup_call2_audio_second_window_g3_ParamLimits

0xb907,	// (0x000596fd) popup_call2_audio_second_window_g3

0xbd1f,	// (0x00059b15) popup_call2_audio_first_window_g4_ParamLimits

0xbd1f,	// (0x00059b15) popup_call2_audio_first_window_g4

0xc346,	// (0x0005a13c) popup_call2_audio_in_window_g4_ParamLimits

0xc346,	// (0x0005a13c) popup_call2_audio_in_window_g4

0x2fb5,	// (0x00050dab) aid_area_sk_bg_cut_ParamLimits

0x2fb5,	// (0x00050dab) aid_area_sk_bg_cut

0xb521,	// (0x00059317) aid_area_sk_bg_cut_2_ParamLimits

0xb521,	// (0x00059317) aid_area_sk_bg_cut_2

0x97fb,	// (0x000575f1) aid_placing_details_win

0x97fb,	// (0x000575f1) aid_placing_details_win_2

0x9f94,	// (0x00057d8a) camera2_autofocus_pane_g1_ParamLimits

0x0898,	// (0x0004e68e) popup_fixed_preview_cale_window_ParamLimits

0x0898,	// (0x0004e68e) popup_fixed_preview_cale_window

0xb2cc,	// (0x000590c2) navi_slider_pane_g3

0xb2d5,	// (0x000590cb) navi_slider_pane_g4

0xb2de,	// (0x000590d4) navi_slider_pane_g5

0xb2cc,	// (0x000590c2) navi_slider_pane_g6

0xa295,	// (0x0005808b) navi_slider_pane_g7

0xb422,	// (0x00059218) mup_scale_pane_g3

0xb42b,	// (0x00059221) mup_scale_pane_g4

0xb434,	// (0x0005922a) mup_scale_pane_g5

0x2ca0,	// (0x00050a96) mup_scale_pane_g6

0x2ca9,	// (0x00050a9f) mup_scale_pane_g7

0xa99c,	// (0x00058792) cams2_slider_pane_g3

0xa99c,	// (0x00058792) cams2_slider_pane_g4

0xa99c,	// (0x00058792) cams2_slider_pane_g5

0xa99c,	// (0x00058792) cams2_slider_pane_g6

0xa99c,	// (0x00058792) cams2_slider_pane_g7

0xa99c,	// (0x00058792) camera2_autofocus_pane_cp_g1

0xc61e,	// (0x0005a414) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61e,	// (0x0005a414) bg_popup_preview_window_pane_cp02

0xcd23,	// (0x0005ab19) list_fp_cale_pane_ParamLimits

0xcd23,	// (0x0005ab19) list_fp_cale_pane

0xcd2f,	// (0x0005ab25) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd2f,	// (0x0005ab25) popup_fixed_preview_cale_window_t1

0x4671,	// (0x00052467) popup_fixed_preview_cale_window_t2_ParamLimits

0x4671,	// (0x00052467) popup_fixed_preview_cale_window_t2

0x4686,	// (0x0005247c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4686,	// (0x0005247c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0005d4e8) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0005d4e8) popup_fixed_preview_cale_window_t

0x469d,	// (0x00052493) list_single_fp_cale_pane_ParamLimits

0x469d,	// (0x00052493) list_single_fp_cale_pane

0xcd4d,	// (0x0005ab43) list_single_fp_cale_pane_g1_ParamLimits

0xcd4d,	// (0x0005ab43) list_single_fp_cale_pane_g1

0xcd59,	// (0x0005ab4f) list_single_fp_cale_pane_g2_ParamLimits

0xcd59,	// (0x0005ab4f) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0005d4ef) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0005d4ef) list_single_fp_cale_pane_g

0xcd72,	// (0x0005ab68) list_single_fp_cale_pane_t1_ParamLimits

0xcd72,	// (0x0005ab68) list_single_fp_cale_pane_t1

0xcd84,	// (0x0005ab7a) list_single_fp_cale_pane_t2_ParamLimits

0xcd84,	// (0x0005ab7a) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0005d4f6) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0005d4f6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x97fb,	// (0x000575f1) main_dialer_pane

0x97fb,	// (0x000575f1) aid_cell_size_keypad

0x97fb,	// (0x000575f1) dialer_ne_pane

0x97fb,	// (0x000575f1) grid_dialer_command_1_pane

0x97fb,	// (0x000575f1) grid_dialer_command_2_pane

0x97fb,	// (0x000575f1) grid_dialer_keypad_pane

0x46b2,	// (0x000524a8) bg_popup_call_pane_cp06_ParamLimits

0x46b2,	// (0x000524a8) bg_popup_call_pane_cp06

0x46b2,	// (0x000524a8) dialer_ne_clear_pane_ParamLimits

0x46b2,	// (0x000524a8) dialer_ne_clear_pane

0xa99c,	// (0x00058792) dialer_ne_pane_g1

0xb39c,	// (0x00059192) dialer_ne_pane_t1_ParamLimits

0xb39c,	// (0x00059192) dialer_ne_pane_t1

0x46c0,	// (0x000524b6) dialer_ne_pane_t2_ParamLimits

0x46c0,	// (0x000524b6) dialer_ne_pane_t2

0x46e8,	// (0x000524de) dialer_ne_pane_t3_ParamLimits

0x46e8,	// (0x000524de) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0005d4fb) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0005d4fb) dialer_ne_pane_t

0x46e8,	// (0x000524de) dialer_ne_pane_t3_copy1_ParamLimits

0x46e8,	// (0x000524de) dialer_ne_pane_t3_copy1

0xcdb7,	// (0x0005abad) cell_dialer_keypad_pane_ParamLimits

0xcdb7,	// (0x0005abad) cell_dialer_keypad_pane

0x9868,	// (0x0005765e) cell_dialer_command_1_pane_ParamLimits

0x9868,	// (0x0005765e) cell_dialer_command_1_pane

0xcdce,	// (0x0005abc4) cell_dialer_command_2_pane_ParamLimits

0xcdce,	// (0x0005abc4) cell_dialer_command_2_pane

0x9868,	// (0x0005765e) bg_button_pane_cp02_ParamLimits

0x9868,	// (0x0005765e) bg_button_pane_cp02

0x9f94,	// (0x00057d8a) cell_dialer_keypad_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) cell_dialer_keypad_pane_g1

0x9868,	// (0x0005765e) bg_button_pane_cp03_ParamLimits

0x9868,	// (0x0005765e) bg_button_pane_cp03

0x9f94,	// (0x00057d8a) cell_dialer_command_1_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) cell_dialer_command_1_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp04

0xa99c,	// (0x00058792) cell_dialer_command_2_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp06

0xa99c,	// (0x00058792) dialer_ne_clear_pane_g1

0x29af,	// (0x000507a5) navi_pane_g2

0x29dd,	// (0x000507d3) navi_pane_g3

0x0002,

0xf334,	// (0x0005d12a) navi_pane_g

0x2a08,	// (0x000507fe) navi_pane_mv_g2

0x2a2f,	// (0x00050825) navi_pane_mv_g5

0x2a37,	// (0x0005082d) navi_pane_mv_t1

0xa028,	// (0x00057e1e) main_clock2_pane

0x9868,	// (0x0005765e) main_clock2_list_pane_ParamLimits

0x9868,	// (0x0005765e) main_clock2_list_pane

0x4779,	// (0x0005256f) main_clock2_pane_t1_ParamLimits

0x4779,	// (0x0005256f) main_clock2_pane_t1

0x47b4,	// (0x000525aa) main_clock2_pane_t2_ParamLimits

0x47b4,	// (0x000525aa) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0005d507) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0005d507) main_clock2_pane_t

0x4853,	// (0x00052649) popup_clock_analogue_window_cp03_ParamLimits

0x4853,	// (0x00052649) popup_clock_analogue_window_cp03

0x4878,	// (0x0005266e) popup_clock_digital_window_cp02_ParamLimits

0x4878,	// (0x0005266e) popup_clock_digital_window_cp02

0x48f1,	// (0x000526e7) main_clock2_list_single_pane_ParamLimits

0x48f1,	// (0x000526e7) main_clock2_list_single_pane

0xa966,	// (0x0005875c) list_highlight_pane_cp05

0xce0f,	// (0x0005ac05) main_clock2_list_single_pane_t1

0x160e,	// (0x0004f404) popup_toolbar_window_cp04_ParamLimits

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g2_ParamLimits

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g2

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g3_ParamLimits

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g3

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g4_ParamLimits

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g4

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g5_ParamLimits

0x9fa2,	// (0x00057d98) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0005d44b) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0005d44b) camera2_autofocus_pane_g

0x3f72,	// (0x00051d68) camera2_autofocus_pane_cp_g2

0x3f7a,	// (0x00051d70) camera2_autofocus_pane_cp_g3

0x3f82,	// (0x00051d78) camera2_autofocus_pane_cp_g4

0x3f8a,	// (0x00051d80) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0005d4b1) camera2_autofocus_pane_cp_g

0x97fb,	// (0x000575f1) popup_dialer_spcha_window

0x97fb,	// (0x000575f1) bg_popup_sub_pane_cp07

0x97fb,	// (0x000575f1) list_spcha_pane

0xce1d,	// (0x0005ac13) list_single_spcha_pane_ParamLimits

0xce1d,	// (0x0005ac13) list_single_spcha_pane

0x97fb,	// (0x000575f1) list_highlight_pane_cp06

0xaefa,	// (0x00058cf0) list_single_spcha_pane_t1

0xc0f0,	// (0x00059ee6) popup_call2_audio_out_window_g4_ParamLimits

0xc0f0,	// (0x00059ee6) popup_call2_audio_out_window_g4

0x97fb,	// (0x000575f1) main_imed2_pane

0xa314,	// (0x0005810a) popup_imed_adjust2_window

0x387e,	// (0x00051674) popup_imed_trans_window_ParamLimits

0x387e,	// (0x00051674) popup_imed_trans_window

0xc891,	// (0x0005a687) popup_blid_sat_info2_window_t1

0xc89f,	// (0x0005a695) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0005d3e0) popup_blid_sat_info2_window_t

0x49ac,	// (0x000527a2) aid_size_cell_colour_35

0x49cc,	// (0x000527c2) aid_size_cell_colour_112

0x49ec,	// (0x000527e2) aid_size_cell_effect

0xb3b0,	// (0x000591a6) bg_tb_trans_pane_cp02

0xae1f,	// (0x00058c15) heading_imed_pane

0x4a0c,	// (0x00052802) listscroll_imed_pane

0xce2f,	// (0x0005ac25) heading_imed_pane_g1

0xce37,	// (0x0005ac2d) heading_imed_pane_t1

0xce45,	// (0x0005ac3b) grid_imed_colour_35_pane_ParamLimits

0xce45,	// (0x0005ac3b) grid_imed_colour_35_pane

0x4a18,	// (0x0005280e) grid_imed_effect_pane

0xce61,	// (0x0005ac57) list_imed_aspect_pane

0x4a2f,	// (0x00052825) scroll_pane_cp027_ParamLimits

0x4a2f,	// (0x00052825) scroll_pane_cp027

0x4a40,	// (0x00052836) cell_imed_effect_pane_ParamLimits

0x4a40,	// (0x00052836) cell_imed_effect_pane

0xce69,	// (0x0005ac5f) cell_imed_colour_pane_ParamLimits

0xce69,	// (0x0005ac5f) cell_imed_colour_pane

0xceb3,	// (0x0005aca9) cell_imed_colour_pane_g1_ParamLimits

0xceb3,	// (0x0005aca9) cell_imed_colour_pane_g1

0xcec4,	// (0x0005acba) hgihlgiht_grid_pane_cp016_ParamLimits

0xcec4,	// (0x0005acba) hgihlgiht_grid_pane_cp016

0x4a6b,	// (0x00052861) cell_imed_effect_pane_g1

0x4a73,	// (0x00052869) grid_highlight_pane_cp017

0xced5,	// (0x0005accb) list_imed_single_pane_ParamLimits

0xced5,	// (0x0005accb) list_imed_single_pane

0x97fb,	// (0x000575f1) list_highlight_pane_cp07

0xcee9,	// (0x0005acdf) list_imed_aspect_pane_comp1_t1

0xb3b0,	// (0x000591a6) bg_tb_trans_pane_cp05

0xcf0b,	// (0x0005ad01) popup_imed_adjust2_window_g1

0xcf32,	// (0x0005ad28) popup_imed_adjust2_window_t1

0xcf4a,	// (0x0005ad40) slider_imed_adjust_pane

0xcf5e,	// (0x0005ad54) slider_imed_adjust_pane_g1

0xcf6e,	// (0x0005ad64) slider_imed_adjust_pane_g2

0xcf7e,	// (0x0005ad74) slider_imed_adjust_pane_g3

0xcf8f,	// (0x0005ad85) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0005d524) slider_imed_adjust_pane_g

0x4a7c,	// (0x00052872) aid_size_cell_clipart2

0xcfa0,	// (0x0005ad96) grid_imed_clipart_pane

0xcfaa,	// (0x0005ada0) scroll_pane_cp031

0x4a88,	// (0x0005287e) cell_imed_clipart_pane_ParamLimits

0x4a88,	// (0x0005287e) cell_imed_clipart_pane

0x4aa5,	// (0x0005289b) cell_imed_clipart_pane_g1

0x97fb,	// (0x000575f1) grid_highlight_pane_cp014

0x4757,	// (0x0005254d) main_clock2_pane_g1_ParamLimits

0x4757,	// (0x0005254d) main_clock2_pane_g1

0x4898,	// (0x0005268e) aid_call2_pane_cp10

0x48aa,	// (0x000526a0) aid_call_pane_cp10

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g1

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g2

0x48bc,	// (0x000526b2) popup_clock_analogue_window_cp10_g3

0x48bc,	// (0x000526b2) popup_clock_analogue_window_cp10_g4

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0005d512) popup_clock_analogue_window_cp10_g

0x48d2,	// (0x000526c8) popup_clock_analogue_window_cp10_t1

0x4903,	// (0x000526f9) clock_digital_number_pane_cp10_ParamLimits

0x4903,	// (0x000526f9) clock_digital_number_pane_cp10

0x491d,	// (0x00052713) clock_digital_number_pane_cp11_ParamLimits

0x491d,	// (0x00052713) clock_digital_number_pane_cp11

0x4937,	// (0x0005272d) clock_digital_number_pane_cp12_ParamLimits

0x4937,	// (0x0005272d) clock_digital_number_pane_cp12

0x4953,	// (0x00052749) clock_digital_number_pane_cp13_ParamLimits

0x4953,	// (0x00052749) clock_digital_number_pane_cp13

0x496f,	// (0x00052765) clock_digital_separator_pane_cp10_ParamLimits

0x496f,	// (0x00052765) clock_digital_separator_pane_cp10

0x498b,	// (0x00052781) popup_clock_digital_window_cp02_t1_ParamLimits

0x498b,	// (0x00052781) popup_clock_digital_window_cp02_t1

0x9f11,	// (0x00057d07) clock_digital_number_pane_cp10_g1

0x9f11,	// (0x00057d07) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0005d52d) clock_digital_number_pane_cp10_g

0x9f11,	// (0x00057d07) clock_digital_separator_pane_cp10_g1

0x9f11,	// (0x00057d07) clock_digital_separator_pane_g2_cp10

0xb293,	// (0x00059089) navi_pane_vded_g4

0xb29c,	// (0x00059092) navi_pane_vded_g5

0xb2a5,	// (0x0005909b) navi_pane_vded_t1

0x97fb,	// (0x000575f1) main_vded_pane

0x4aae,	// (0x000528a4) main_vded_pane_g1

0x4aba,	// (0x000528b0) main_vded_pane_g2

0x4ac6,	// (0x000528bc) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0005d532) main_vded_pane_g

0x4ad2,	// (0x000528c8) main_vded_pane_t1

0x4ae0,	// (0x000528d6) main_vded_pane_t2

0x0001,

0xf743,	// (0x0005d539) main_vded_pane_t

0x4aee,	// (0x000528e4) vded_slider_pane

0x4af8,	// (0x000528ee) vded_video_pane

0xcfb2,	// (0x0005ada8) vded_video_pane_g1

0x4b04,	// (0x000528fa) vded_video_pane_g2

0xa99c,	// (0x00058792) vded_video_pane_g3

0x0002,

0xf748,	// (0x0005d53e) vded_video_pane_g

0xcfbc,	// (0x0005adb2) vded_slider_pane_g1

0xc7bc,	// (0x0005a5b2) vded_slider_pane_g2

0xcfc5,	// (0x0005adbb) vded_slider_pane_g3

0xcfce,	// (0x0005adc4) vded_slider_pane_g4

0xcfd7,	// (0x0005adcd) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0005d545) vded_slider_pane_g

0x45bb,	// (0x000523b1) mup3_rocker_pane_ParamLimits

0x45bb,	// (0x000523b1) mup3_rocker_pane

0x4b0d,	// (0x00052903) mup3_control_keys_pane_g1

0x4b15,	// (0x0005290b) mup3_control_keys_pane_g2

0x4b1d,	// (0x00052913) mup3_control_keys_pane_g3

0x4b25,	// (0x0005291b) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0005d550) mup3_control_keys_pane_g

0x08cd,	// (0x0004e6c3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x08cd,	// (0x0004e6c3) popup_toolbar2_fixed_window_cp01

0x45f1,	// (0x000523e7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x45f1,	// (0x000523e7) popup_toolbar2_fixed_window_cp02

0xba87,	// (0x0005987d) popup_call2_audio_second_window_t4_ParamLimits

0xba87,	// (0x0005987d) popup_call2_audio_second_window_t4

0xbfb5,	// (0x00059dab) popup_call2_audio_first_window_t6_ParamLimits

0xbfb5,	// (0x00059dab) popup_call2_audio_first_window_t6

0xc1f3,	// (0x00059fe9) popup_call2_audio_out_window_t6_ParamLimits

0xc1f3,	// (0x00059fe9) popup_call2_audio_out_window_t6

0x97fb,	// (0x000575f1) main_vitu_pane

0x9868,	// (0x0005765e) aid_size_cell_itu_ParamLimits

0x9868,	// (0x0005765e) aid_size_cell_itu

0x9868,	// (0x0005765e) bg_popup_window_pane_cp08_ParamLimits

0x9868,	// (0x0005765e) bg_popup_window_pane_cp08

0x9868,	// (0x0005765e) field_vitu_entry_pane_ParamLimits

0x9868,	// (0x0005765e) field_vitu_entry_pane

0x9868,	// (0x0005765e) grid_vitu_function_pane_ParamLimits

0x9868,	// (0x0005765e) grid_vitu_function_pane

0x9868,	// (0x0005765e) grid_vitu_itu_pane_ParamLimits

0x9868,	// (0x0005765e) grid_vitu_itu_pane

0x9868,	// (0x0005765e) cell_vitu_itu_pane_ParamLimits

0x9868,	// (0x0005765e) cell_vitu_itu_pane

0x9868,	// (0x0005765e) cell_vitu_function_pane_ParamLimits

0x9868,	// (0x0005765e) cell_vitu_function_pane

0x9868,	// (0x0005765e) bg_popup_sub_pane_cp08_ParamLimits

0x9868,	// (0x0005765e) bg_popup_sub_pane_cp08

0xa96e,	// (0x00058764) field_vitu_entry_pane_t1_ParamLimits

0xa96e,	// (0x00058764) field_vitu_entry_pane_t1

0xcfe0,	// (0x0005add6) field_vitu_entry_pane_t2_ParamLimits

0xcfe0,	// (0x0005add6) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0005d559) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0005d559) field_vitu_entry_pane_t

0xc6f9,	// (0x0005a4ef) bg_button_pane_cp05_ParamLimits

0xc6f9,	// (0x0005a4ef) bg_button_pane_cp05

0xcffd,	// (0x0005adf3) cell_vitu_itu_pane_g1

0xb388,	// (0x0005917e) cell_vitu_itu_pane_t1_ParamLimits

0xb388,	// (0x0005917e) cell_vitu_itu_pane_t1

0xb388,	// (0x0005917e) cell_vitu_itu_pane_t2_ParamLimits

0xb388,	// (0x0005917e) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0005d55e) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0005d55e) cell_vitu_itu_pane_t

0x97fb,	// (0x000575f1) bg_button_pane_cp07

0xa99c,	// (0x00058792) cell_vitu_function_pane_g1

0x9fd2,	// (0x00057dc8) main_calc_pane_g1

0x074d,	// (0x0004e543) aid_visual_content_pane

0x97fb,	// (0x000575f1) main_vradio_pane

0x9f94,	// (0x00057d8a) main_vradio_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) main_vradio_pane_g1

0x9fa2,	// (0x00057d98) main_vradio_pane_g2_ParamLimits

0x9fa2,	// (0x00057d98) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0005d565) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0005d565) main_vradio_pane_g

0xa96e,	// (0x00058764) main_vradio_pane_t1_ParamLimits

0xa96e,	// (0x00058764) main_vradio_pane_t1

0xa96e,	// (0x00058764) main_vradio_pane_t2_ParamLimits

0xa96e,	// (0x00058764) main_vradio_pane_t2

0xb39c,	// (0x00059192) main_vradio_pane_t3_ParamLimits

0xb39c,	// (0x00059192) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0005d56a) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0005d56a) main_vradio_pane_t

0x9868,	// (0x0005765e) vradio_rocker_control_pane_ParamLimits

0x9868,	// (0x0005765e) vradio_rocker_control_pane

0x9868,	// (0x0005765e) vradio_station_info_pane_ParamLimits

0x9868,	// (0x0005765e) vradio_station_info_pane

0x9868,	// (0x0005765e) vradio_frequency_info_pane_ParamLimits

0x9868,	// (0x0005765e) vradio_frequency_info_pane

0xa99c,	// (0x00058792) vradio_station_info_pane_g1

0xb388,	// (0x0005917e) vradio_station_info_pane_t1_ParamLimits

0xb388,	// (0x0005917e) vradio_station_info_pane_t1

0xb39c,	// (0x00059192) vradio_station_info_pane_t2_ParamLimits

0xb39c,	// (0x00059192) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0005d571) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0005d571) vradio_station_info_pane_t

0x97fb,	// (0x000575f1) vradio_tuning_pane

0x4b35,	// (0x0005292b) vradio_rocker_control_pane_g1

0xd019,	// (0x0005ae0f) vradio_rocker_control_pane_g2

0x4b3f,	// (0x00052935) vradio_rocker_control_pane_g3

0x4b49,	// (0x0005293f) vradio_rocker_control_pane_g4

0x4b53,	// (0x00052949) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0005d576) vradio_rocker_control_pane_g

0xa99c,	// (0x00058792) vradio_frequency_info_pane_g1

0xa96e,	// (0x00058764) vradio_frequency_info_pane_t1_ParamLimits

0xa96e,	// (0x00058764) vradio_frequency_info_pane_t1

0x4b5d,	// (0x00052953) vradio_tuning_pane_g1

0x4b68,	// (0x0005295e) vradio_tuning_pane_t1

0x9821,	// (0x00057617) area_side_right_pane_ParamLimits

0x9821,	// (0x00057617) area_side_right_pane

0xc5e5,	// (0x0005a3db) status_small_pane_g1

0xc5ed,	// (0x0005a3e3) status_small_pane_g2

0xc5f6,	// (0x0005a3ec) status_small_pane_g3

0xc5ff,	// (0x0005a3f5) status_small_pane_g4

0x0003,

0xf54c,	// (0x0005d342) status_small_pane_g

0xc608,	// (0x0005a3fe) status_small_pane_t1

0x97fb,	// (0x000575f1) main_video3_pane

0xd021,	// (0x0005ae17) cams_zoom_vslider_pane

0xd029,	// (0x0005ae1f) image3_wide_pane_ParamLimits

0xd029,	// (0x0005ae1f) image3_wide_pane

0xd043,	// (0x0005ae39) image3_wide_small_pane

0xd04f,	// (0x0005ae45) main_video3_pane_g1_ParamLimits

0xd04f,	// (0x0005ae45) main_video3_pane_g1

0xd06b,	// (0x0005ae61) main_video3_pane_g2_ParamLimits

0xd06b,	// (0x0005ae61) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0005d581) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0005d581) main_video3_pane_g

0xd087,	// (0x0005ae7d) main_video3_pane_t1_ParamLimits

0xd087,	// (0x0005ae7d) main_video3_pane_t1

0xd0b2,	// (0x0005aea8) main_video3_pane_t2_ParamLimits

0xd0b2,	// (0x0005aea8) main_video3_pane_t2

0xd0df,	// (0x0005aed5) main_video3_pane_t3_ParamLimits

0xd0df,	// (0x0005aed5) main_video3_pane_t3

0x0002,

0xf790,	// (0x0005d586) main_video3_pane_t_ParamLimits

0xf790,	// (0x0005d586) main_video3_pane_t

0xd10c,	// (0x0005af02) cams_zoom_vslider_pane_g1

0xd115,	// (0x0005af0b) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0005d58d) cams_zoom_vslider_pane_g

0xd11d,	// (0x0005af13) small_slider_vertical_pane

0xa99c,	// (0x00058792) small_slider_vertical_pane_g1

0xa99c,	// (0x00058792) small_slider_vertical_pane_g2

0xd125,	// (0x0005af1b) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0005d592) small_slider_vertical_pane_g

0x97fb,	// (0x000575f1) main_hwr_training_pane

0xd12e,	// (0x0005af24) hwr_training_instruct_pane_ParamLimits

0xd12e,	// (0x0005af24) hwr_training_instruct_pane

0x4b77,	// (0x0005296d) hwr_training_navi_pane_ParamLimits

0x4b77,	// (0x0005296d) hwr_training_navi_pane

0x4b96,	// (0x0005298c) hwr_training_write_pane_ParamLimits

0x4b96,	// (0x0005298c) hwr_training_write_pane

0x97fb,	// (0x000575f1) bg_frame_shadow_pane

0xd165,	// (0x0005af5b) hwr_training_write_pane_g1

0xd16d,	// (0x0005af63) hwr_training_write_pane_g2

0xd175,	// (0x0005af6b) hwr_training_write_pane_g3

0xd17d,	// (0x0005af73) hwr_training_write_pane_g4

0xd185,	// (0x0005af7b) hwr_training_write_pane_g5

0xd18d,	// (0x0005af83) hwr_training_write_pane_g6

0xd195,	// (0x0005af8b) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0005d599) hwr_training_write_pane_g

0xa3b6,	// (0x000581ac) hwr_training_navi_pane_g1_ParamLimits

0xa3b6,	// (0x000581ac) hwr_training_navi_pane_g1

0xa3c8,	// (0x000581be) hwr_training_navi_pane_g2_ParamLimits

0xa3c8,	// (0x000581be) hwr_training_navi_pane_g2

0xa3da,	// (0x000581d0) hwr_training_navi_pane_g3_ParamLimits

0xa3da,	// (0x000581d0) hwr_training_navi_pane_g3

0xa3ea,	// (0x000581e0) hwr_training_navi_pane_g4_ParamLimits

0xa3ea,	// (0x000581e0) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0005d5a8) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0005d5a8) hwr_training_navi_pane_g

0xa3f7,	// (0x000581ed) hwr_training_navi_pane_t1

0x4bde,	// (0x000529d4) list_single_hwr_training_instruct_pane_ParamLimits

0x4bde,	// (0x000529d4) list_single_hwr_training_instruct_pane

0xd19d,	// (0x0005af93) list_single_hwr_training_instruct_pane_t1

0xc998,	// (0x0005a78e) bg_frame_shadow_pane_g1

0xd1ac,	// (0x0005afa2) bg_frame_shadow_pane_g2

0xd1b4,	// (0x0005afaa) bg_frame_shadow_pane_g3

0xd1bc,	// (0x0005afb2) bg_frame_shadow_pane_g4

0xd1c4,	// (0x0005afba) bg_frame_shadow_pane_g5

0xd1cc,	// (0x0005afc2) bg_frame_shadow_pane_g6

0xd1d4,	// (0x0005afca) bg_frame_shadow_pane_g7

0xa0fb,	// (0x00057ef1) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0005d5b3) bg_frame_shadow_pane_g

0x97fb,	// (0x000575f1) main_video_tele_dialer_pane

0x4bfa,	// (0x000529f0) aid_size_cell_video_keypad_ParamLimits

0x4bfa,	// (0x000529f0) aid_size_cell_video_keypad

0x4c14,	// (0x00052a0a) grid_video_dialer_keypad_pane_ParamLimits

0x4c14,	// (0x00052a0a) grid_video_dialer_keypad_pane

0x4c60,	// (0x00052a56) video_down_pane_cp_ParamLimits

0x4c60,	// (0x00052a56) video_down_pane_cp

0x4c92,	// (0x00052a88) cell_video_dialer_keypad_pane_ParamLimits

0x4c92,	// (0x00052a88) cell_video_dialer_keypad_pane

0xd1dc,	// (0x0005afd2) bg_button_pane_cp08_ParamLimits

0xd1dc,	// (0x0005afd2) bg_button_pane_cp08

0x4cb8,	// (0x00052aae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4cb8,	// (0x00052aae) cell_video_dialer_keypad_pane_g1

0x45a5,	// (0x0005239b) mup3_rocker2_pane_ParamLimits

0x45a5,	// (0x0005239b) mup3_rocker2_pane

0xa99c,	// (0x00058792) mup3_rocker2_pane_g1

0x374b,	// (0x00051541) main_dialer2_pane

0x97fb,	// (0x000575f1) main_mp4_pane

0xa423,	// (0x00058219) main_mp4_pane_g1_ParamLimits

0xa423,	// (0x00058219) main_mp4_pane_g1

0xa423,	// (0x00058219) main_mp4_pane_g2_ParamLimits

0xa423,	// (0x00058219) main_mp4_pane_g2

0x4cf3,	// (0x00052ae9) main_mp4_pane_g3_ParamLimits

0x4cf3,	// (0x00052ae9) main_mp4_pane_g3

0xa431,	// (0x00058227) main_mp4_pane_g4_ParamLimits

0xa431,	// (0x00058227) main_mp4_pane_g4

0xa45f,	// (0x00058255) main_mp4_pane_g5_ParamLimits

0xa45f,	// (0x00058255) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0005d5d3) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0005d5d3) main_mp4_pane_g

0xa4d3,	// (0x000582c9) main_mp4_pane_t1_ParamLimits

0xa4d3,	// (0x000582c9) main_mp4_pane_t1

0xa52f,	// (0x00058325) main_mp4_pane_t2_ParamLimits

0xa52f,	// (0x00058325) main_mp4_pane_t2

0xd1e8,	// (0x0005afde) main_mp4_pane_t3_ParamLimits

0xd1e8,	// (0x0005afde) main_mp4_pane_t3

0xa581,	// (0x00058377) main_mp4_pane_t4_ParamLimits

0xa581,	// (0x00058377) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0005d5e4) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0005d5e4) main_mp4_pane_t

0xa5c1,	// (0x000583b7) mp4_progress_pane_ParamLimits

0xa5c1,	// (0x000583b7) mp4_progress_pane

0xa60b,	// (0x00058401) mp4_rocker_pane_ParamLimits

0xa60b,	// (0x00058401) mp4_rocker_pane

0xd216,	// (0x0005b00c) mp4_progress_pane_t1

0xd22f,	// (0x0005b025) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0005d5ed) mp4_progress_pane_t

0xd248,	// (0x0005b03e) mup_progress_pane_cp04

0xa99c,	// (0x00058792) mp4_rocker_pane_g1

0x4d3d,	// (0x00052b33) aid_cell_size_keypad2_ParamLimits

0x4d3d,	// (0x00052b33) aid_cell_size_keypad2

0x4d53,	// (0x00052b49) dialer2_ne_pane_ParamLimits

0x4d53,	// (0x00052b49) dialer2_ne_pane

0x4d6b,	// (0x00052b61) grid_dialer2_keypad_pane_ParamLimits

0x4d6b,	// (0x00052b61) grid_dialer2_keypad_pane

0xc6f9,	// (0x0005a4ef) bg_popup_call_pane_cp07_ParamLimits

0xc6f9,	// (0x0005a4ef) bg_popup_call_pane_cp07

0x4d87,	// (0x00052b7d) dialer2_ne_pane_t1_ParamLimits

0x4d87,	// (0x00052b7d) dialer2_ne_pane_t1

0x4dc7,	// (0x00052bbd) cell_dialer2_keypad_pane_ParamLimits

0x4dc7,	// (0x00052bbd) cell_dialer2_keypad_pane

0xd26d,	// (0x0005b063) bg_button_pane_pane_cp04_ParamLimits

0xd26d,	// (0x0005b063) bg_button_pane_pane_cp04

0x4ded,	// (0x00052be3) cell_dialer2_keypad_pane_g1_ParamLimits

0x4ded,	// (0x00052be3) cell_dialer2_keypad_pane_g1

0x14f5,	// (0x0004f2eb) aid_placing_vt_set_content_ParamLimits

0x14f5,	// (0x0004f2eb) aid_placing_vt_set_content

0x1519,	// (0x0004f30f) aid_placing_vt_set_title_ParamLimits

0x1519,	// (0x0004f30f) aid_placing_vt_set_title

0x97fb,	// (0x000575f1) main_image3_pane

0x4eb3,	// (0x00052ca9) area_side_right_pane_cp01_ParamLimits

0x4eb3,	// (0x00052ca9) area_side_right_pane_cp01

0xa423,	// (0x00058219) main_image3_pane_g1_ParamLimits

0xa423,	// (0x00058219) main_image3_pane_g1

0x4ecc,	// (0x00052cc2) main_image3_pane_g2_ParamLimits

0x4ecc,	// (0x00052cc2) main_image3_pane_g2

0x4ef4,	// (0x00052cea) main_image3_pane_g3_ParamLimits

0x4ef4,	// (0x00052cea) main_image3_pane_g3

0x4f1e,	// (0x00052d14) main_image3_pane_g4_ParamLimits

0x4f1e,	// (0x00052d14) main_image3_pane_g4

0x0003,

0xf806,	// (0x0005d5fc) main_image3_pane_g_ParamLimits

0xf806,	// (0x0005d5fc) main_image3_pane_g

0x4f48,	// (0x00052d3e) main_image3_pane_t1_ParamLimits

0x4f48,	// (0x00052d3e) main_image3_pane_t1

0x4fa0,	// (0x00052d96) main_image3_pane_t2_ParamLimits

0x4fa0,	// (0x00052d96) main_image3_pane_t2

0x4ff2,	// (0x00052de8) main_image3_pane_t3_ParamLimits

0x4ff2,	// (0x00052de8) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0005d605) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0005d605) main_image3_pane_t

0x9868,	// (0x0005765e) grid_sctrl_middle_pane_cp01_ParamLimits

0x9868,	// (0x0005765e) grid_sctrl_middle_pane_cp01

0x507a,	// (0x00052e70) cell_sctrl_middle_pane_cp01_ParamLimits

0x507a,	// (0x00052e70) cell_sctrl_middle_pane_cp01

0x5097,	// (0x00052e8d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5097,	// (0x00052e8d) cell_sctrl_middle_pane_cp01_g1

0x97fb,	// (0x000575f1) main_call4_pane

0x50ac,	// (0x00052ea2) aid_size_button_call4_ParamLimits

0x50ac,	// (0x00052ea2) aid_size_button_call4

0x50df,	// (0x00052ed5) call4_windows_pane_ParamLimits

0x50df,	// (0x00052ed5) call4_windows_pane

0x50fe,	// (0x00052ef4) grid_call4_button_pane_ParamLimits

0x50fe,	// (0x00052ef4) grid_call4_button_pane

0x5135,	// (0x00052f2b) call4_windows_conf_pane

0x514e,	// (0x00052f44) popup_call4_audio_first_window_ParamLimits

0x514e,	// (0x00052f44) popup_call4_audio_first_window

0x519e,	// (0x00052f94) popup_call4_audio_second_window_ParamLimits

0x519e,	// (0x00052f94) popup_call4_audio_second_window

0x51b7,	// (0x00052fad) popup_call4_audio_wait_window_ParamLimits

0x51b7,	// (0x00052fad) popup_call4_audio_wait_window

0x51c5,	// (0x00052fbb) cell_call4_button_pane_ParamLimits

0x51c5,	// (0x00052fbb) cell_call4_button_pane

0x51ec,	// (0x00052fe2) bg_button_pane_cp09_ParamLimits

0x51ec,	// (0x00052fe2) bg_button_pane_cp09

0x51f8,	// (0x00052fee) cell_call4_button_pane_g1_ParamLimits

0x51f8,	// (0x00052fee) cell_call4_button_pane_g1

0x521e,	// (0x00053014) cell_call4_button_pane_t1_ParamLimits

0x521e,	// (0x00053014) cell_call4_button_pane_t1

0xd281,	// (0x0005b077) popup_call4_audio_conf_window_ParamLimits

0xd281,	// (0x0005b077) popup_call4_audio_conf_window

0x4607,	// (0x000523fd) mup3_progress_pane_t1_ParamLimits

0x4626,	// (0x0005241c) mup3_progress_pane_t2_ParamLimits

0xcce0,	// (0x0005aad6) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0005d4da) mup3_progress_pane_t_ParamLimits

0xccfd,	// (0x0005aaf3) mup_progress_pane_cp03_ParamLimits

0x4b2d,	// (0x00052923) mup3_control_keys_pane_g4_copy1

0xa5ef,	// (0x000583e5) mp4_rocker2_pane_ParamLimits

0xa5ef,	// (0x000583e5) mp4_rocker2_pane

0xd29b,	// (0x0005b091) mp4_rocker2_pane_g1

0xd2a3,	// (0x0005b099) mp4_rocker2_pane_g2

0xa693,	// (0x00058489) mp4_rocker2_pane_g3

0xa69b,	// (0x00058491) mp4_rocker2_pane_g4

0xa6a3,	// (0x00058499) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0005d60e) mp4_rocker2_pane_g

0x97fb,	// (0x000575f1) main_camera4_pane

0x97fb,	// (0x000575f1) main_video4_pane

0x4c2e,	// (0x00052a24) main_video_tele_dialer_pane_t1_ParamLimits

0x4c2e,	// (0x00052a24) main_video_tele_dialer_pane_t1

0x4c47,	// (0x00052a3d) main_video_tele_dialer_pane_t2_ParamLimits

0x4c47,	// (0x00052a3d) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0005d5c4) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0005d5c4) main_video_tele_dialer_pane_t

0x525c,	// (0x00053052) cam4_autofocus_pane_ParamLimits

0x525c,	// (0x00053052) cam4_autofocus_pane

0x5272,	// (0x00053068) cam4_image_uncrop_pane_ParamLimits

0x5272,	// (0x00053068) cam4_image_uncrop_pane

0x528b,	// (0x00053081) cam4_indicators_pane_ParamLimits

0x528b,	// (0x00053081) cam4_indicators_pane

0x52bb,	// (0x000530b1) main_camera4_pane_g1_ParamLimits

0x52bb,	// (0x000530b1) main_camera4_pane_g1

0x52cd,	// (0x000530c3) main_camera4_pane_g2_ParamLimits

0x52cd,	// (0x000530c3) main_camera4_pane_g2

0x52e0,	// (0x000530d6) main_camera4_pane_g3_ParamLimits

0x52e0,	// (0x000530d6) main_camera4_pane_g3

0x52f3,	// (0x000530e9) main_camera4_pane_g4_ParamLimits

0x52f3,	// (0x000530e9) main_camera4_pane_g4

0x5306,	// (0x000530fc) main_camera4_pane_g5_ParamLimits

0x5306,	// (0x000530fc) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0005d619) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0005d619) main_camera4_pane_g

0x532a,	// (0x00053120) main_camera4_pane_t1_ParamLimits

0x532a,	// (0x00053120) main_camera4_pane_t1

0x9f94,	// (0x00057d8a) bg_tb_trans_pane_cp06

0xa6d1,	// (0x000584c7) cam4_indicators_pane_g1

0xa6e2,	// (0x000584d8) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0005d634) cam4_indicators_pane_g

0xa6fa,	// (0x000584f0) cam4_indicators_pane_t1

0x538e,	// (0x00053184) main_video4_pane_g1_ParamLimits

0x538e,	// (0x00053184) main_video4_pane_g1

0x539d,	// (0x00053193) main_video4_pane_g2_ParamLimits

0x539d,	// (0x00053193) main_video4_pane_g2

0x53ad,	// (0x000531a3) main_video4_pane_g3_ParamLimits

0x53ad,	// (0x000531a3) main_video4_pane_g3

0x53bd,	// (0x000531b3) main_video4_pane_g4_ParamLimits

0x53bd,	// (0x000531b3) main_video4_pane_g4

0x0004,

0xf845,	// (0x0005d63b) main_video4_pane_g_ParamLimits

0xf845,	// (0x0005d63b) main_video4_pane_g

0x53dd,	// (0x000531d3) vid4_indicators_pane_ParamLimits

0x53dd,	// (0x000531d3) vid4_indicators_pane

0x5407,	// (0x000531fd) video4_image_uncrop_cif_pane_ParamLimits

0x5407,	// (0x000531fd) video4_image_uncrop_cif_pane

0x5421,	// (0x00053217) video4_image_uncrop_nhd_pane_ParamLimits

0x5421,	// (0x00053217) video4_image_uncrop_nhd_pane

0x5272,	// (0x00053068) video4_image_uncrop_vga_pane_ParamLimits

0x5272,	// (0x00053068) video4_image_uncrop_vga_pane

0x9868,	// (0x0005765e) bg_tb_trans_pane_cp07

0xa728,	// (0x0005851e) vid4_indicators_pane_g1

0xa73e,	// (0x00058534) vid4_indicators_pane_g2

0xa752,	// (0x00058548) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0005d646) vid4_indicators_pane_g

0xa783,	// (0x00058579) vid4_indicators_pane_t1

0x5438,	// (0x0005322e) cam4_autofocus_pane_g1

0x5440,	// (0x00053236) cam4_autofocus_pane_g2

0x5448,	// (0x0005323e) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0005d651) cam4_autofocus_pane_g

0x5450,	// (0x00053246) cam4_autofocus_pane_g3_copy1

0x4c76,	// (0x00052a6c) video_down_pane_cp_t1

0x4c84,	// (0x00052a7a) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0005d5c9) video_down_pane_cp_t

0x9868,	// (0x0005765e) popup_vitu2_window_ParamLimits

0x9868,	// (0x0005765e) popup_vitu2_window

0x5458,	// (0x0005324e) aid_size_cell2_itu2_ParamLimits

0x5458,	// (0x0005324e) aid_size_cell2_itu2

0x547e,	// (0x00053274) aid_size_cell_itu2_ParamLimits

0x547e,	// (0x00053274) aid_size_cell_itu2

0x46b2,	// (0x000524a8) bg_popup_window_pane_cp09_ParamLimits

0x46b2,	// (0x000524a8) bg_popup_window_pane_cp09

0x54dc,	// (0x000532d2) field_vitu2_entry_pane_ParamLimits

0x54dc,	// (0x000532d2) field_vitu2_entry_pane

0x5504,	// (0x000532fa) grid_vitu2_function_pane_ParamLimits

0x5504,	// (0x000532fa) grid_vitu2_function_pane

0x5555,	// (0x0005334b) grid_vitu2_itu_pane_ParamLimits

0x5555,	// (0x0005334b) grid_vitu2_itu_pane

0x55e5,	// (0x000533db) cell_vitu2_itu_pane_ParamLimits

0x55e5,	// (0x000533db) cell_vitu2_itu_pane

0x5613,	// (0x00053409) cell_vitu2_function_pane_ParamLimits

0x5613,	// (0x00053409) cell_vitu2_function_pane

0xd2bf,	// (0x0005b0b5) bg_popup_call_pane_cp08_ParamLimits

0xd2bf,	// (0x0005b0b5) bg_popup_call_pane_cp08

0xd2d6,	// (0x0005b0cc) field_vitu2_entry_pane_g1

0xd2e2,	// (0x0005b0d8) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0005d658) field_vitu2_entry_pane_g

0xfe9e,	// (0x0004dc94) field_vitu2_entry_pane_t1_ParamLimits

0xfe9e,	// (0x0004dc94) field_vitu2_entry_pane_t1

0x5657,	// (0x0005344d) field_vitu2_entry_pane_t2_ParamLimits

0x5657,	// (0x0005344d) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0005d65f) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0005d65f) field_vitu2_entry_pane_t

0x5674,	// (0x0005346a) bg_button_pane_cp010_ParamLimits

0x5674,	// (0x0005346a) bg_button_pane_cp010

0x5682,	// (0x00053478) cell_vitu2_itu_pane_g1

0x56a8,	// (0x0005349e) cell_vitu2_itu_pane_t1_ParamLimits

0x56a8,	// (0x0005349e) cell_vitu2_itu_pane_t1

0xfece,	// (0x0004dcc4) cell_vitu2_itu_pane_t2_ParamLimits

0xfece,	// (0x0004dcc4) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0005d669) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0005d669) cell_vitu2_itu_pane_t

0x9868,	// (0x0005765e) bg_button_pane_cp011

0x5706,	// (0x000534fc) cell_vitu2_function_pane_g1

0x97fb,	// (0x000575f1) main_myfav_hc_pane

0x5042,	// (0x00052e38) popup_image3_note_pane_ParamLimits

0x5042,	// (0x00052e38) popup_image3_note_pane

0x505e,	// (0x00052e54) popup_image3_tool_bar_pane_ParamLimits

0x505e,	// (0x00052e54) popup_image3_tool_bar_pane

0xff5c,	// (0x0004dd52) cell_vitu2_itu_pane_t3_ParamLimits

0xff5c,	// (0x0004dd52) cell_vitu2_itu_pane_t3

0x97fb,	// (0x000575f1) bg_popup_trans_pane

0xd2f6,	// (0x0005b0ec) grid_image3_tool_bar_pane

0xd300,	// (0x0005b0f6) bg_popup_trans_pane_g1

0xabc0,	// (0x000589b6) bg_popup_trans_pane_g2

0xd308,	// (0x0005b0fe) bg_popup_trans_pane_g3

0xd310,	// (0x0005b106) bg_popup_trans_pane_g4

0xd318,	// (0x0005b10e) bg_popup_trans_pane_g5

0xd320,	// (0x0005b116) bg_popup_trans_pane_g6

0xd328,	// (0x0005b11e) bg_popup_trans_pane_g7

0xd330,	// (0x0005b126) bg_popup_trans_pane_g8

0xaba0,	// (0x00058996) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0005d670) bg_popup_trans_pane_g

0xd338,	// (0x0005b12e) cell_image3_tool_bar_pane_ParamLimits

0xd338,	// (0x0005b12e) cell_image3_tool_bar_pane

0xa99c,	// (0x00058792) cell_image3_tool_bar_pane_g1

0x97fb,	// (0x000575f1) bg_popup_trans_pane_cp1

0xd34e,	// (0x0005b144) popup_image3_note_pane_t1

0xd35c,	// (0x0005b152) popup_image3_note_pane_t2

0xd36a,	// (0x0005b160) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0005d683) popup_image3_note_pane_t

0xd37a,	// (0x0005b170) popup_image3_note_pane_t3_copy1

0x571a,	// (0x00053510) bg_myfav_hc_instruction_pane_ParamLimits

0x571a,	// (0x00053510) bg_myfav_hc_instruction_pane

0x5732,	// (0x00053528) cell_myfav_contact_pane_ParamLimits

0x5732,	// (0x00053528) cell_myfav_contact_pane

0x574e,	// (0x00053544) cell_myfav_contact_pane_cp1_ParamLimits

0x574e,	// (0x00053544) cell_myfav_contact_pane_cp1

0x5766,	// (0x0005355c) cell_myfav_contact_pane_cp2_ParamLimits

0x5766,	// (0x0005355c) cell_myfav_contact_pane_cp2

0x577e,	// (0x00053574) cell_myfav_contact_pane_cp3_ParamLimits

0x577e,	// (0x00053574) cell_myfav_contact_pane_cp3

0x5795,	// (0x0005358b) cell_myfav_contact_pane_cp4_ParamLimits

0x5795,	// (0x0005358b) cell_myfav_contact_pane_cp4

0x57ad,	// (0x000535a3) cell_myfav_contact_pane_cp5_ParamLimits

0x57ad,	// (0x000535a3) cell_myfav_contact_pane_cp5

0x57c1,	// (0x000535b7) cell_myfav_contact_pane_cp6_ParamLimits

0x57c1,	// (0x000535b7) cell_myfav_contact_pane_cp6

0x57d7,	// (0x000535cd) cell_myfav_contact_pane_cp7_ParamLimits

0x57d7,	// (0x000535cd) cell_myfav_contact_pane_cp7

0xd388,	// (0x0005b17e) listscroll_gen_pane_cp05

0x57ef,	// (0x000535e5) main_myfav_hc_pane_g1_ParamLimits

0x57ef,	// (0x000535e5) main_myfav_hc_pane_g1

0x5809,	// (0x000535ff) main_myfav_hc_pane_g2_ParamLimits

0x5809,	// (0x000535ff) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0005d68a) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0005d68a) main_myfav_hc_pane_g

0x583d,	// (0x00053633) main_myfav_hc_pane_t1_ParamLimits

0x583d,	// (0x00053633) main_myfav_hc_pane_t1

0xd391,	// (0x0005b187) main_myfav_hc_pane_t2_ParamLimits

0xd391,	// (0x0005b187) main_myfav_hc_pane_t2

0xd3a3,	// (0x0005b199) main_myfav_hc_pane_t3_ParamLimits

0xd3a3,	// (0x0005b199) main_myfav_hc_pane_t3

0x5854,	// (0x0005364a) main_myfav_hc_pane_t4_ParamLimits

0x5854,	// (0x0005364a) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0005d691) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0005d691) main_myfav_hc_pane_t

0xa99c,	// (0x00058792) bg_myfav_hc_instruction_pane_g1

0xd3b5,	// (0x0005b1ab) cell_myfav_contact_pane_g1_ParamLimits

0xd3b5,	// (0x0005b1ab) cell_myfav_contact_pane_g1

0xd3b5,	// (0x0005b1ab) cell_myfav_contact_pane_g2_ParamLimits

0xd3b5,	// (0x0005b1ab) cell_myfav_contact_pane_g2

0xd3c1,	// (0x0005b1b7) cell_myfav_contact_pane_g3_ParamLimits

0xd3c1,	// (0x0005b1b7) cell_myfav_contact_pane_g3

0x9fa2,	// (0x00057d98) cell_myfav_contact_pane_g4_ParamLimits

0x9fa2,	// (0x00057d98) cell_myfav_contact_pane_g4

0xd3ce,	// (0x0005b1c4) cell_myfav_contact_pane_g5_ParamLimits

0xd3ce,	// (0x0005b1c4) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0005d69c) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0005d69c) cell_myfav_contact_pane_g

0x5823,	// (0x00053619) main_myfav_hc_pane_g3_ParamLimits

0x5823,	// (0x00053619) main_myfav_hc_pane_g3

0xfd6f,	// (0x0004db65) popup_adpt_find_window

0x587e,	// (0x00053674) afind_page_pane_ParamLimits

0x587e,	// (0x00053674) afind_page_pane

0x5894,	// (0x0005368a) aid_size_cell_afind_ParamLimits

0x5894,	// (0x0005368a) aid_size_cell_afind

0x58b2,	// (0x000536a8) bg_popup_sub_pane_cp09_ParamLimits

0x58b2,	// (0x000536a8) bg_popup_sub_pane_cp09

0x58c4,	// (0x000536ba) find_pane_cp01_ParamLimits

0x58c4,	// (0x000536ba) find_pane_cp01

0xd3da,	// (0x0005b1d0) grid_afind_control_pane_ParamLimits

0xd3da,	// (0x0005b1d0) grid_afind_control_pane

0x58d8,	// (0x000536ce) grid_afind_pane_ParamLimits

0x58d8,	// (0x000536ce) grid_afind_pane

0x58fa,	// (0x000536f0) cell_afind_pane_ParamLimits

0x58fa,	// (0x000536f0) cell_afind_pane

0xa99c,	// (0x00058792) afind_page_pane_g1

0x5963,	// (0x00053759) afind_page_pane_g2

0x596b,	// (0x00053761) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0005d6a7) afind_page_pane_g

0x5973,	// (0x00053769) afind_page_pane_t1

0xd400,	// (0x0005b1f6) cell_afind_grid_control_pane_ParamLimits

0xd400,	// (0x0005b1f6) cell_afind_grid_control_pane

0xd26d,	// (0x0005b063) bg_button_pane_cp69_ParamLimits

0xd26d,	// (0x0005b063) bg_button_pane_cp69

0x5981,	// (0x00053777) cell_afind_pane_g1_ParamLimits

0x5981,	// (0x00053777) cell_afind_pane_g1

0x598e,	// (0x00053784) cell_afind_pane_t1_ParamLimits

0x598e,	// (0x00053784) cell_afind_pane_t1

0xa9a6,	// (0x0005879c) bg_button_pane_cp72

0xd40f,	// (0x0005b205) cell_afind_grid_control_pane_g1

0x31a8,	// (0x00050f9e) aid_image_placing_area_ParamLimits

0x31a8,	// (0x00050f9e) aid_image_placing_area

0x9f94,	// (0x00057d8a) field_vitu_entry_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) field_vitu_entry_pane_g1

0x9f94,	// (0x00057d8a) field_vitu_entry_pane_g2_ParamLimits

0x9f94,	// (0x00057d8a) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0005cfb7) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0005cfb7) field_vitu_entry_pane_g

0xcffd,	// (0x0005adf3) cell_vitu_itu_pane_g1_ParamLimits

0xcfe0,	// (0x0005add6) cell_vitu_itu_pane_t3_ParamLimits

0xcfe0,	// (0x0005add6) cell_vitu_itu_pane_t3

0xd216,	// (0x0005b00c) mp4_progress_pane_t1_ParamLimits

0xd22f,	// (0x0005b025) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0005d5ed) mp4_progress_pane_t_ParamLimits

0xd248,	// (0x0005b03e) mup_progress_pane_cp04_ParamLimits

0x5868,	// (0x0005365e) main_myfav_hc_pane_t5_ParamLimits

0x5868,	// (0x0005365e) main_myfav_hc_pane_t5

0x9819,	// (0x0005760f) aid_zoom_text_primary

0xfd6f,	// (0x0004db65) popup_adpt_find_window_ParamLimits

0x9868,	// (0x0005765e) main_cam_set_pane

0x52a4,	// (0x0005309a) cam4_zoom_pane_ParamLimits

0x52a4,	// (0x0005309a) cam4_zoom_pane

0x59a0,	// (0x00053796) main_cam_set_pane_g1_ParamLimits

0x59a0,	// (0x00053796) main_cam_set_pane_g1

0x59ae,	// (0x000537a4) main_cam_set_pane_g2_ParamLimits

0x59ae,	// (0x000537a4) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0005d6ae) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0005d6ae) main_cam_set_pane_g

0x59cf,	// (0x000537c5) main_cam_set_pane_t1_ParamLimits

0x59cf,	// (0x000537c5) main_cam_set_pane_t1

0x59ea,	// (0x000537e0) main_cset_listscroll_pane_ParamLimits

0x59ea,	// (0x000537e0) main_cset_listscroll_pane

0x5a12,	// (0x00053808) main_cset_slider_pane_ParamLimits

0x5a12,	// (0x00053808) main_cset_slider_pane

0xd420,	// (0x0005b216) main_cset_list_pane_ParamLimits

0xd420,	// (0x0005b216) main_cset_list_pane

0xd430,	// (0x0005b226) scroll_pane_cp028

0x5a3c,	// (0x00053832) aid_area_touch_slider

0x5a58,	// (0x0005384e) cset_slider_pane

0x5a7b,	// (0x00053871) main_cset_slider_pane_g1

0x5a90,	// (0x00053886) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0005d6b3) main_cset_slider_pane_g

0xd469,	// (0x0005b25f) main_cset_slider_pane_t1

0x5b52,	// (0x00053948) main_cset_slider_pane_t2

0x5b6c,	// (0x00053962) main_cset_slider_pane_t3

0x5b86,	// (0x0005397c) main_cset_slider_pane_t4

0x5ba0,	// (0x00053996) main_cset_slider_pane_t5

0x5bbe,	// (0x000539b4) main_cset_slider_pane_t6

0x5bd3,	// (0x000539c9) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0005d6d8) main_cset_slider_pane_t

0x5cdf,	// (0x00053ad5) cset_list_set_pane_ParamLimits

0x5cdf,	// (0x00053ad5) cset_list_set_pane

0xd503,	// (0x0005b2f9) aid_position_infowindow_above

0xd50b,	// (0x0005b301) aid_position_infowindow_below

0xffba,	// (0x0004ddb0) cset_list_set_pane_g1_ParamLimits

0xffba,	// (0x0004ddb0) cset_list_set_pane_g1

0xffc6,	// (0x0004ddbc) cset_list_set_pane_g3_ParamLimits

0xffc6,	// (0x0004ddbc) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0005d6f7) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0005d6f7) cset_list_set_pane_g

0xffd5,	// (0x0004ddcb) cset_list_set_pane_t1_ParamLimits

0xffd5,	// (0x0004ddcb) cset_list_set_pane_t1

0x9868,	// (0x0005765e) list_highlight_pane_cp021_ParamLimits

0x9868,	// (0x0005765e) list_highlight_pane_cp021

0xb422,	// (0x00059218) cset_slider_pane_g1

0xb434,	// (0x0005922a) cset_slider_pane_g2

0xb42b,	// (0x00059221) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0005d6fc) cset_slider_pane_g

0xdc8b,	// (0x0005ba81) aid_area_touch_cam4_zoom

0x5cf3,	// (0x00053ae9) cam4_zoom_cont_pane

0x5cfb,	// (0x00053af1) cam4_zoom_pane_g1

0x5d03,	// (0x00053af9) cam4_zoom_pane_g2

0x5d0b,	// (0x00053b01) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0005d703) cam4_zoom_pane_g

0xa79a,	// (0x00058590) cam4_zoom_cont_pane_g1

0xa7a3,	// (0x00058599) cam4_zoom_cont_pane_g2

0xa7ac,	// (0x000585a2) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0005d70a) cam4_zoom_cont_pane_g

0x50ca,	// (0x00052ec0) call4_image_pane_ParamLimits

0x50ca,	// (0x00052ec0) call4_image_pane

0x5135,	// (0x00052f2b) call4_windows_conf_pane_ParamLimits

0x517c,	// (0x00052f72) popup_call4_audio_in_window_ParamLimits

0x517c,	// (0x00052f72) popup_call4_audio_in_window

0x97fb,	// (0x000575f1) bg_popup_call2_act_pane_cp02

0xd279,	// (0x0005b06f) call4_list_conf_pane

0xa99c,	// (0x00058792) call4_image_pane_g1

0xa99c,	// (0x00058792) call4_image_pane_g2

0x0001,

0xf398,	// (0x0005d18e) call4_image_pane_g

0xd513,	// (0x0005b309) list_single_graphic_popup_conf4_pane_ParamLimits

0xd513,	// (0x0005b309) list_single_graphic_popup_conf4_pane

0x97fb,	// (0x000575f1) list_highlight_pane_cp022

0xd528,	// (0x0005b31e) list_single_graphic_popup_conf4_pane_g1

0xb0f5,	// (0x00058eeb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0005d711) list_single_graphic_popup_conf4_pane_g

0xd530,	// (0x0005b326) list_single_graphic_popup_conf4_pane_t1

0x1630,	// (0x0004f426) popup_vtel_slider_window_ParamLimits

0x1630,	// (0x0004f426) popup_vtel_slider_window

0xd25b,	// (0x0005b051) dialer2_ne_pane_t2_ParamLimits

0xd25b,	// (0x0005b051) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0005d5f2) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0005d5f2) dialer2_ne_pane_t

0xc6f9,	// (0x0005a4ef) bg_popup_sub_pane_cp010_ParamLimits

0xc6f9,	// (0x0005a4ef) bg_popup_sub_pane_cp010

0x5d13,	// (0x00053b09) popup_vtel_slider_window_g1_ParamLimits

0x5d13,	// (0x00053b09) popup_vtel_slider_window_g1

0x5d26,	// (0x00053b1c) popup_vtel_slider_window_g2_ParamLimits

0x5d26,	// (0x00053b1c) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0005d716) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0005d716) popup_vtel_slider_window_g

0x5d7c,	// (0x00053b72) vtel_slider_pane_ParamLimits

0x5d7c,	// (0x00053b72) vtel_slider_pane

0x5d9e,	// (0x00053b94) vtel_slider_pane_g1_ParamLimits

0x5d9e,	// (0x00053b94) vtel_slider_pane_g1

0x5db2,	// (0x00053ba8) vtel_slider_pane_g2_ParamLimits

0x5db2,	// (0x00053ba8) vtel_slider_pane_g2

0x5dca,	// (0x00053bc0) vtel_slider_pane_g3_ParamLimits

0x5dca,	// (0x00053bc0) vtel_slider_pane_g3

0x5d9e,	// (0x00053b94) vtel_slider_pane_g4_ParamLimits

0x5d9e,	// (0x00053b94) vtel_slider_pane_g4

0x5de0,	// (0x00053bd6) vtel_slider_pane_g5_ParamLimits

0x5de0,	// (0x00053bd6) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0005d71f) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0005d71f) vtel_slider_pane_g

0x9868,	// (0x0005765e) main_gallery2_pane

0x54aa,	// (0x000532a0) aid_size_row_itut2_dropdow_list_ParamLimits

0x54aa,	// (0x000532a0) aid_size_row_itut2_dropdow_list

0x552c,	// (0x00053322) grid_vitu2_function_top_pane_ParamLimits

0x552c,	// (0x00053322) grid_vitu2_function_top_pane

0x5590,	// (0x00053386) popup_vitu2_dropdown_list_window_ParamLimits

0x5590,	// (0x00053386) popup_vitu2_dropdown_list_window

0x55b7,	// (0x000533ad) popup_vitu2_match_list_window

0x5df6,	// (0x00053bec) cell_vitu2_function_top_pane_ParamLimits

0x5df6,	// (0x00053bec) cell_vitu2_function_top_pane

0x5e10,	// (0x00053c06) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5e10,	// (0x00053c06) cell_vitu2_function_top_pane_cp01

0x5e2c,	// (0x00053c22) cell_vitu2_function_top_wide_pane_ParamLimits

0x5e2c,	// (0x00053c22) cell_vitu2_function_top_wide_pane

0x9868,	// (0x0005765e) bg_button_pane_cp012

0x5e4a,	// (0x00053c40) cell_vitu2_function_top_pane_g1

0xa7b5,	// (0x000585ab) bg_button_pane_cp013_ParamLimits

0xa7b5,	// (0x000585ab) bg_button_pane_cp013

0x5e5e,	// (0x00053c54) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5e5e,	// (0x00053c54) cell_vitu2_function_top_wide_pane_g1

0x9868,	// (0x0005765e) bg_popup_sub_pane_cp20

0x5e76,	// (0x00053c6c) list_vitu2_match_list_pane

0xd300,	// (0x0005b0f6) bg_popup_sub_pane_cp20_g1

0xd308,	// (0x0005b0fe) bg_popup_sub_pane_cp20_g2

0xabc0,	// (0x000589b6) bg_popup_sub_pane_cp20_g3

0xd310,	// (0x0005b106) bg_popup_sub_pane_cp20_g4

0xaba0,	// (0x00058996) bg_popup_sub_pane_cp20_g5

0xd546,	// (0x0005b33c) bg_popup_sub_pane_cp20_g6

0xd320,	// (0x0005b116) bg_popup_sub_pane_cp20_g7

0xd328,	// (0x0005b11e) bg_popup_sub_pane_cp20_g8

0xd330,	// (0x0005b126) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0005d72a) bg_popup_sub_pane_cp20_g

0xa7d1,	// (0x000585c7) list_vitu2_match_list_item_pane_ParamLimits

0xa7d1,	// (0x000585c7) list_vitu2_match_list_item_pane

0xa7e3,	// (0x000585d9) list_vitu2_match_list_item_pane_t1

0x97fb,	// (0x000575f1) bg_popup_sub_pane_cp21

0xa966,	// (0x0005875c) grid_vitu2_dropdown_list_pane

0x5e8e,	// (0x00053c84) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5e8e,	// (0x00053c84) cell_vitu2_dropdown_list_char_pane

0x5eb0,	// (0x00053ca6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5eb0,	// (0x00053ca6) cell_vitu2_dropdown_list_ctrl_pane

0xd54e,	// (0x0005b344) cell_vitu2_dropdown_list_char_pane_g1

0xd557,	// (0x0005b34d) cell_vitu2_dropdown_list_char_pane_g2

0xd560,	// (0x0005b356) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0005d73d) cell_vitu2_dropdown_list_char_pane_g

0x5eda,	// (0x00053cd0) cell_vitu2_dropdown_list_char_pane_t1

0x5ee8,	// (0x00053cde) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5ee8,	// (0x00053cde) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ef8,	// (0x00053cee) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ef8,	// (0x00053cee) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5f09,	// (0x00053cff) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5f09,	// (0x00053cff) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5f19,	// (0x00053d0f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5f19,	// (0x00053d0f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9f94,	// (0x00057d8a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9f94,	// (0x00057d8a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0005d744) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0005d744) cell_vitu2_dropdown_list_ctrl_pane_g

0x5f35,	// (0x00053d2b) aid_size_cell_gallery2_ParamLimits

0x5f35,	// (0x00053d2b) aid_size_cell_gallery2

0x5f53,	// (0x00053d49) grid_gallery2_pane_ParamLimits

0x5f53,	// (0x00053d49) grid_gallery2_pane

0x5f6d,	// (0x00053d63) scroll_pane_cp029_ParamLimits

0x5f6d,	// (0x00053d63) scroll_pane_cp029

0x5f7e,	// (0x00053d74) cell_gallery2_pane_ParamLimits

0x5f7e,	// (0x00053d74) cell_gallery2_pane

0xd569,	// (0x0005b35f) cell_gallery2_pane_g2

0x5fe2,	// (0x00053dd8) cell_gallery2_pane_g3

0xd571,	// (0x0005b367) cell_gallery2_pane_g4

0xd579,	// (0x0005b36f) cell_gallery2_pane_g5

0xa966,	// (0x0005875c) grid_highlight_pane_cp10

0x55b7,	// (0x000533ad) popup_vitu2_match_list_window_ParamLimits

0x55ce,	// (0x000533c4) popup_vitu2_query_window_ParamLimits

0x55ce,	// (0x000533c4) popup_vitu2_query_window

0x97fb,	// (0x000575f1) bg_vitu2_candi_button_pane

0xd54e,	// (0x0005b344) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd557,	// (0x0005b34d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd560,	// (0x0005b356) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xffea,	// (0x0004dde0) bg_button_pane_cp015

0x5fea,	// (0x00053de0) bg_button_pane_cp016

0x5ff6,	// (0x00053dec) bg_button_pane_cp017

0xb3b0,	// (0x000591a6) bg_popup_sub_pane_cp22

0xd581,	// (0x0005b377) popup_vitu2_query_window_g1

0x0027,	// (0x0004de1d) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0005d74f) popup_vitu2_query_window_g

0x0041,	// (0x0004de37) popup_vitu2_query_window_t1_ParamLimits

0x0041,	// (0x0004de37) popup_vitu2_query_window_t1

0x0076,	// (0x0004de6c) popup_vitu2_query_window_t2_ParamLimits

0x0076,	// (0x0004de6c) popup_vitu2_query_window_t2

0x0088,	// (0x0004de7e) popup_vitu2_query_window_t3_ParamLimits

0x0088,	// (0x0004de7e) popup_vitu2_query_window_t3

0x601d,	// (0x00053e13) popup_vitu2_query_window_t4_ParamLimits

0x601d,	// (0x00053e13) popup_vitu2_query_window_t4

0x6031,	// (0x00053e27) popup_vitu2_query_window_t5_ParamLimits

0x6031,	// (0x00053e27) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0005d756) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0005d756) popup_vitu2_query_window_t

0xd418,	// (0x0005b20e) main_cset_text_pane

0x5a3c,	// (0x00053832) aid_area_touch_slider_ParamLimits

0x5a58,	// (0x0005384e) cset_slider_pane_ParamLimits

0x5a7b,	// (0x00053871) main_cset_slider_pane_g1_ParamLimits

0x5a90,	// (0x00053886) main_cset_slider_pane_g2_ParamLimits

0xd439,	// (0x0005b22f) main_cset_slider_pane_g3_ParamLimits

0xd439,	// (0x0005b22f) main_cset_slider_pane_g3

0x5aa5,	// (0x0005389b) main_cset_slider_pane_g4_ParamLimits

0x5aa5,	// (0x0005389b) main_cset_slider_pane_g4

0x5ab4,	// (0x000538aa) main_cset_slider_pane_g5_ParamLimits

0x5ab4,	// (0x000538aa) main_cset_slider_pane_g5

0x5ac2,	// (0x000538b8) main_cset_slider_pane_g6_ParamLimits

0x5ac2,	// (0x000538b8) main_cset_slider_pane_g6

0xf8bd,	// (0x0005d6b3) main_cset_slider_pane_g_ParamLimits

0xd469,	// (0x0005b25f) main_cset_slider_pane_t1_ParamLimits

0x5b52,	// (0x00053948) main_cset_slider_pane_t2_ParamLimits

0x5b6c,	// (0x00053962) main_cset_slider_pane_t3_ParamLimits

0x5b86,	// (0x0005397c) main_cset_slider_pane_t4_ParamLimits

0x5ba0,	// (0x00053996) main_cset_slider_pane_t5_ParamLimits

0x5bbe,	// (0x000539b4) main_cset_slider_pane_t6_ParamLimits

0x5bd3,	// (0x000539c9) main_cset_slider_pane_t7_ParamLimits

0x5c01,	// (0x000539f7) main_cset_slider_pane_t8_ParamLimits

0x5c01,	// (0x000539f7) main_cset_slider_pane_t8

0x5c29,	// (0x00053a1f) main_cset_slider_pane_t9_ParamLimits

0x5c29,	// (0x00053a1f) main_cset_slider_pane_t9

0x5c51,	// (0x00053a47) main_cset_slider_pane_t10_ParamLimits

0x5c51,	// (0x00053a47) main_cset_slider_pane_t10

0x5c79,	// (0x00053a6f) main_cset_slider_pane_t11_ParamLimits

0x5c79,	// (0x00053a6f) main_cset_slider_pane_t11

0x5ca3,	// (0x00053a99) main_cset_slider_pane_t12_ParamLimits

0x5ca3,	// (0x00053a99) main_cset_slider_pane_t12

0x5cc0,	// (0x00053ab6) main_cset_slider_pane_t13_ParamLimits

0x5cc0,	// (0x00053ab6) main_cset_slider_pane_t13

0xf8e2,	// (0x0005d6d8) main_cset_slider_pane_t_ParamLimits

0x97fb,	// (0x000575f1) bg_popup_sub_pane_cp011

0xd58d,	// (0x0005b383) main_cset_text_pane_g1

0xd595,	// (0x0005b38b) main_cset_text_pane_t1

0xd5a3,	// (0x0005b399) main_cset_text_pane_t2

0xd5b1,	// (0x0005b3a7) main_cset_text_pane_t3

0xd5bf,	// (0x0005b3b5) main_cset_text_pane_t4

0xd5cd,	// (0x0005b3c3) main_cset_text_pane_t5

0xd5db,	// (0x0005b3d1) main_cset_text_pane_t6

0xd5e9,	// (0x0005b3df) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0005d765) main_cset_text_pane_t

0x97fb,	// (0x000575f1) main_cam4_burst_pane

0x97fb,	// (0x000575f1) main_cam5_pane

0xd3ee,	// (0x0005b1e4) bg_button_pane_cp019

0xd3f7,	// (0x0005b1ed) bg_button_pane_cp020

0xd445,	// (0x0005b23b) main_cset_slider_pane_g7_ParamLimits

0xd445,	// (0x0005b23b) main_cset_slider_pane_g7

0xd451,	// (0x0005b247) main_cset_slider_pane_g8_ParamLimits

0xd451,	// (0x0005b247) main_cset_slider_pane_g8

0x5ad6,	// (0x000538cc) main_cset_slider_pane_g9_ParamLimits

0x5ad6,	// (0x000538cc) main_cset_slider_pane_g9

0x5ae2,	// (0x000538d8) main_cset_slider_pane_g10_ParamLimits

0x5ae2,	// (0x000538d8) main_cset_slider_pane_g10

0x5aee,	// (0x000538e4) main_cset_slider_pane_g11_ParamLimits

0x5aee,	// (0x000538e4) main_cset_slider_pane_g11

0x5afa,	// (0x000538f0) main_cset_slider_pane_g12_ParamLimits

0x5afa,	// (0x000538f0) main_cset_slider_pane_g12

0x5b06,	// (0x000538fc) main_cset_slider_pane_g13_ParamLimits

0x5b06,	// (0x000538fc) main_cset_slider_pane_g13

0x5b12,	// (0x00053908) main_cset_slider_pane_g14_ParamLimits

0x5b12,	// (0x00053908) main_cset_slider_pane_g14

0x5b1e,	// (0x00053914) main_cset_slider_pane_g15_ParamLimits

0x5b1e,	// (0x00053914) main_cset_slider_pane_g15

0xd491,	// (0x0005b287) main_cset_slider_pane_t14_ParamLimits

0xd491,	// (0x0005b287) main_cset_slider_pane_t14

0xd4ca,	// (0x0005b2c0) main_cset_slider_pane_t15_ParamLimits

0xd4ca,	// (0x0005b2c0) main_cset_slider_pane_t15

0x6045,	// (0x00053e3b) aid_cam4_burst_size_cell_ParamLimits

0x6045,	// (0x00053e3b) aid_cam4_burst_size_cell

0x6065,	// (0x00053e5b) grid_cam4_burst_pane_ParamLimits

0x6065,	// (0x00053e5b) grid_cam4_burst_pane

0x609f,	// (0x00053e95) linegrid_cam4_burst_pane_ParamLimits

0x609f,	// (0x00053e95) linegrid_cam4_burst_pane

0xd5f7,	// (0x0005b3ed) scroll_pane_cp30_ParamLimits

0xd5f7,	// (0x0005b3ed) scroll_pane_cp30

0x60c1,	// (0x00053eb7) cell_cam4_burst_pane_ParamLimits

0x60c1,	// (0x00053eb7) cell_cam4_burst_pane

0xd603,	// (0x0005b3f9) linegrid_cam4_burst_pane_g1_ParamLimits

0xd603,	// (0x0005b3f9) linegrid_cam4_burst_pane_g1

0x6116,	// (0x00053f0c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6116,	// (0x00053f0c) linegrid_cam4_burst_pane_g2

0xd610,	// (0x0005b406) linegrid_cam4_burst_pane_g3_ParamLimits

0xd610,	// (0x0005b406) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0005d774) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0005d774) linegrid_cam4_burst_pane_g

0x6127,	// (0x00053f1d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6127,	// (0x00053f1d) linegrid_cam4_burst_pane_g3_copy1

0xd61d,	// (0x0005b413) linegrid_cam4_burst_pane_g4_ParamLimits

0xd61d,	// (0x0005b413) linegrid_cam4_burst_pane_g4

0x6145,	// (0x00053f3b) linegrid_cam4_burst_pane_g5_ParamLimits

0x6145,	// (0x00053f3b) linegrid_cam4_burst_pane_g5

0x6156,	// (0x00053f4c) linegrid_cam4_burst_pane_g6_ParamLimits

0x6156,	// (0x00053f4c) linegrid_cam4_burst_pane_g6

0xd62a,	// (0x0005b420) linegrid_cam4_burst_pane_g7_ParamLimits

0xd62a,	// (0x0005b420) linegrid_cam4_burst_pane_g7

0x616d,	// (0x00053f63) cell_cam4_burst_pane_g1

0xd643,	// (0x0005b439) main_cam5_pane_t1_ParamLimits

0xd643,	// (0x0005b439) main_cam5_pane_t1

0xd655,	// (0x0005b44b) main_cam5_pane_t2_ParamLimits

0xd655,	// (0x0005b44b) main_cam5_pane_t2

0xd667,	// (0x0005b45d) main_cam5_pane_t3_ParamLimits

0xd667,	// (0x0005b45d) main_cam5_pane_t3

0xd679,	// (0x0005b46f) main_cam5_pane_t4_ParamLimits

0xd679,	// (0x0005b46f) main_cam5_pane_t4

0xd691,	// (0x0005b487) main_cam5_pane_t5_ParamLimits

0xd691,	// (0x0005b487) main_cam5_pane_t5

0xd6a5,	// (0x0005b49b) main_cam5_pane_t6_ParamLimits

0xd6a5,	// (0x0005b49b) main_cam5_pane_t6

0xd6b9,	// (0x0005b4af) main_cam5_pane_t7_ParamLimits

0xd6b9,	// (0x0005b4af) main_cam5_pane_t7

0xd6cb,	// (0x0005b4c1) main_cam5_pane_t8_ParamLimits

0xd6cb,	// (0x0005b4c1) main_cam5_pane_t8

0xd6e9,	// (0x0005b4df) main_cam5_pane_t9_ParamLimits

0xd6e9,	// (0x0005b4df) main_cam5_pane_t9

0xd6fb,	// (0x0005b4f1) main_cam5_pane_t10_ParamLimits

0xd6fb,	// (0x0005b4f1) main_cam5_pane_t10

0xd70d,	// (0x0005b503) main_cam5_pane_t11_ParamLimits

0xd70d,	// (0x0005b503) main_cam5_pane_t11

0xd721,	// (0x0005b517) main_cam5_pane_t12_ParamLimits

0xd721,	// (0x0005b517) main_cam5_pane_t12

0xd738,	// (0x0005b52e) main_cam5_pane_t13_ParamLimits

0xd738,	// (0x0005b52e) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0005d780) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0005d780) main_cam5_pane_t

0x08b1,	// (0x0004e6a7) popup_scut_keymap_window_ParamLimits

0x08b1,	// (0x0004e6a7) popup_scut_keymap_window

0x6180,	// (0x00053f76) aid_size_cell_brow_shortcut

0xa966,	// (0x0005875c) bg_popup_window_pane_cp010

0x618c,	// (0x00053f82) grid_scut_pane

0x6198,	// (0x00053f8e) cell_scut_pane_ParamLimits

0x6198,	// (0x00053f8e) cell_scut_pane

0x61b1,	// (0x00053fa7) cell_scut_pane_g1

0xd75b,	// (0x0005b551) cell_scut_pane_t1

0xd76a,	// (0x0005b560) cell_scut_pane_t2

0x61ba,	// (0x00053fb0) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0005d79b) cell_scut_pane_t

0x41aa,	// (0x00051fa0) main_mup3_pane_g8_ParamLimits

0x41aa,	// (0x00051fa0) main_mup3_pane_g8

0x54c4,	// (0x000532ba) area_vitu2_query_pane_ParamLimits

0x54c4,	// (0x000532ba) area_vitu2_query_pane

0x0001,	// (0x0004ddf7) input_focus_pane_cp08

0xd779,	// (0x0005b56f) area_vitu2_query_pane_g1

0x0106,	// (0x0004defc) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0005d7a2) area_vitu2_query_pane_g

0x61c8,	// (0x00053fbe) area_vitu2_query_pane_t1_ParamLimits

0x61c8,	// (0x00053fbe) area_vitu2_query_pane_t1

0x61dc,	// (0x00053fd2) area_vitu2_query_pane_t2_ParamLimits

0x61dc,	// (0x00053fd2) area_vitu2_query_pane_t2

0x011b,	// (0x0004df11) area_vitu2_query_pane_t3_ParamLimits

0x011b,	// (0x0004df11) area_vitu2_query_pane_t3

0x61f0,	// (0x00053fe6) area_vitu2_query_pane_t4_ParamLimits

0x61f0,	// (0x00053fe6) area_vitu2_query_pane_t4

0x6218,	// (0x0005400e) area_vitu2_query_pane_t5_ParamLimits

0x6218,	// (0x0005400e) area_vitu2_query_pane_t5

0x6240,	// (0x00054036) area_vitu2_query_pane_t6_ParamLimits

0x6240,	// (0x00054036) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0005d7a7) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0005d7a7) area_vitu2_query_pane_t

0x628c,	// (0x00054082) bg_button_pane_cp018

0x6298,	// (0x0005408e) bg_button_pane_cp021

0x0147,	// (0x0004df3d) bg_button_pane_cp022

0x016e,	// (0x0004df64) input_focus_pane_cp09

0x2947,	// (0x0005073d) aid_size_touch_mv_arrow_left

0x2970,	// (0x00050766) aid_size_touch_mv_arrow_right

0x5b36,	// (0x0005392c) main_cset_slider_pane_g16_ParamLimits

0x5b36,	// (0x0005392c) main_cset_slider_pane_g16

0x5b44,	// (0x0005393a) main_cset_slider_pane_g17_ParamLimits

0x5b44,	// (0x0005393a) main_cset_slider_pane_g17

0x616d,	// (0x00053f63) cell_cam4_burst_pane_g1_ParamLimits

0x97fb,	// (0x000575f1) compa_mode_pane

0x5d36,	// (0x00053b2c) popup_vtel_slider_window_g3_ParamLimits

0x5d36,	// (0x00053b2c) popup_vtel_slider_window_g3

0x5d4d,	// (0x00053b43) popup_vtel_slider_window_g4_ParamLimits

0x5d4d,	// (0x00053b43) popup_vtel_slider_window_g4

0x5d64,	// (0x00053b5a) popup_vtel_slider_window_t1_ParamLimits

0x5d64,	// (0x00053b5a) popup_vtel_slider_window_t1

0x97fb,	// (0x000575f1) main_cl_pane

0xa314,	// (0x0005810a) popup_imed_adjust2_window_ParamLimits

0xb3b0,	// (0x000591a6) bg_tb_trans_pane_cp05_ParamLimits

0xcf0b,	// (0x0005ad01) popup_imed_adjust2_window_g1_ParamLimits

0xcf1a,	// (0x0005ad10) popup_imed_adjust2_window_g2_ParamLimits

0xcf1a,	// (0x0005ad10) popup_imed_adjust2_window_g2

0xcf26,	// (0x0005ad1c) popup_imed_adjust2_window_g3_ParamLimits

0xcf26,	// (0x0005ad1c) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0005d51d) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0005d51d) popup_imed_adjust2_window_g

0xcf32,	// (0x0005ad28) popup_imed_adjust2_window_t1_ParamLimits

0xcf4a,	// (0x0005ad40) slider_imed_adjust_pane_ParamLimits

0xcf5e,	// (0x0005ad54) slider_imed_adjust_pane_g1_ParamLimits

0xcf6e,	// (0x0005ad64) slider_imed_adjust_pane_g2_ParamLimits

0xcf7e,	// (0x0005ad74) slider_imed_adjust_pane_g3_ParamLimits

0xcf8f,	// (0x0005ad85) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0005d524) slider_imed_adjust_pane_g_ParamLimits

0x5244,	// (0x0005303a) aid_touch_area_cam4_ParamLimits

0x5244,	// (0x0005303a) aid_touch_area_cam4

0xa6ab,	// (0x000584a1) battery_pane_cp01

0x5317,	// (0x0005310d) main_camera4_pane_g6_ParamLimits

0x5317,	// (0x0005310d) main_camera4_pane_g6

0x5341,	// (0x00053137) main_camera4_pane_t2_ParamLimits

0x5341,	// (0x00053137) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0005d626) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0005d626) main_camera4_pane_t

0x5376,	// (0x0005316c) aid_touch_area_vid4_ParamLimits

0x5376,	// (0x0005316c) aid_touch_area_vid4

0x53cd,	// (0x000531c3) main_video4_pane_g5_ParamLimits

0x53cd,	// (0x000531c3) main_video4_pane_g5

0x53f3,	// (0x000531e9) vid4_progress_pane_ParamLimits

0x53f3,	// (0x000531e9) vid4_progress_pane

0xd45d,	// (0x0005b253) main_cset_slider_pane_g18_ParamLimits

0xd45d,	// (0x0005b253) main_cset_slider_pane_g18

0xd637,	// (0x0005b42d) cell_cam4_burst_pane_g2_ParamLimits

0xd637,	// (0x0005b42d) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0005d77b) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0005d77b) cell_cam4_burst_pane_g

0xa028,	// (0x00057e1e) bg_cl_pane_ParamLimits

0xa028,	// (0x00057e1e) bg_cl_pane

0x62a4,	// (0x0005409a) cl_header_pane_ParamLimits

0x62a4,	// (0x0005409a) cl_header_pane

0x62b8,	// (0x000540ae) cl_listscroll_pane_ParamLimits

0x62b8,	// (0x000540ae) cl_listscroll_pane

0xd785,	// (0x0005b57b) bg_cl_pane_g1

0xd78d,	// (0x0005b583) bg_cl_pane_g2

0xd795,	// (0x0005b58b) bg_cl_pane_g3

0xd79d,	// (0x0005b593) bg_cl_pane_g4

0xd7a5,	// (0x0005b59b) bg_cl_pane_g5

0xd7ad,	// (0x0005b5a3) bg_cl_pane_g6

0xd7b5,	// (0x0005b5ab) bg_cl_pane_g7

0xd7bd,	// (0x0005b5b3) bg_cl_pane_g8

0xd7c5,	// (0x0005b5bb) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0005d7b6) bg_cl_pane_g

0x62c8,	// (0x000540be) aid_height_cl_leading_ParamLimits

0x62c8,	// (0x000540be) aid_height_cl_leading

0x62d4,	// (0x000540ca) aid_height_cl_text_ParamLimits

0x62d4,	// (0x000540ca) aid_height_cl_text

0x9868,	// (0x0005765e) bg_cl_header_pane_ParamLimits

0x9868,	// (0x0005765e) bg_cl_header_pane

0x62f3,	// (0x000540e9) cl_header_pane_g1_ParamLimits

0x62f3,	// (0x000540e9) cl_header_pane_g1

0x6309,	// (0x000540ff) cl_header_pane_t1_ParamLimits

0x6309,	// (0x000540ff) cl_header_pane_t1

0xd7cd,	// (0x0005b5c3) cl_list_pane

0xd430,	// (0x0005b226) hc_scroll_pane_cp01

0xaba0,	// (0x00058996) bg_cl_header_pane_g1

0xd300,	// (0x0005b0f6) bg_cl_header_pane_g2

0xabc0,	// (0x000589b6) bg_cl_header_pane_g3

0xd310,	// (0x0005b106) bg_cl_header_pane_g4

0xd308,	// (0x0005b0fe) bg_cl_header_pane_g5

0xd546,	// (0x0005b33c) bg_cl_header_pane_g6

0xd328,	// (0x0005b11e) bg_cl_header_pane_g7

0xd330,	// (0x0005b126) bg_cl_header_pane_g8

0xd320,	// (0x0005b116) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0005d7c9) bg_cl_header_pane_g

0x6322,	// (0x00054118) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6322,	// (0x00054118) hc_cl_list_double_graphic_heading_pane

0x6335,	// (0x0005412b) hc_cl_list_single_graphic_pane_ParamLimits

0x6335,	// (0x0005412b) hc_cl_list_single_graphic_pane

0x634d,	// (0x00054143) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x634d,	// (0x00054143) hc_cl_list_single_graphic_pane_g1

0x6359,	// (0x0005414f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6359,	// (0x0005414f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0005d7dc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0005d7dc) hc_cl_list_single_graphic_pane_g

0x636d,	// (0x00054163) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x636d,	// (0x00054163) hc_cl_list_single_graphic_pane_t1

0x634d,	// (0x00054143) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x634d,	// (0x00054143) hc_cl_list_double_graphic_heading_pane_g1

0x6382,	// (0x00054178) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6382,	// (0x00054178) hc_cl_list_double_graphic_heading_pane_g2

0x6396,	// (0x0005418c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6396,	// (0x0005418c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0005d7e1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0005d7e1) hc_cl_list_double_graphic_heading_pane_g

0x63aa,	// (0x000541a0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x63aa,	// (0x000541a0) hc_cl_list_double_graphic_heading_pane_t1

0x63bf,	// (0x000541b5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x63bf,	// (0x000541b5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0005d7e8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0005d7e8) hc_cl_list_double_graphic_heading_pane_t

0xa7f9,	// (0x000585ef) vid4_progress_pane_g1

0xa809,	// (0x000585ff) vid4_progress_pane_g2

0x63d4,	// (0x000541ca) vid4_progress_pane_g3

0xa819,	// (0x0005860f) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0005d7ed) vid4_progress_pane_g

0x63e6,	// (0x000541dc) vid4_progress_pane_t1

0xa837,	// (0x0005862d) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0005d7f8) vid4_progress_pane_t

0x6400,	// (0x000541f6) wait_bar_pane_cp07

0xc846,	// (0x0005a63c) blid_firmament_pane_ParamLimits

0xc889,	// (0x0005a67f) popup_blid_sat_info2_window_g1

0xc8ad,	// (0x0005a6a3) popup_blid_sat_info2_window_t3

0xc8bb,	// (0x0005a6b1) popup_blid_sat_info2_window_t4

0xc8c9,	// (0x0005a6bf) popup_blid_sat_info2_window_t5

0xc8d7,	// (0x0005a6cd) popup_blid_sat_info2_window_t6

0xc8e7,	// (0x0005a6dd) popup_blid_sat_info2_window_t7

0xc8f5,	// (0x0005a6eb) popup_blid_sat_info2_window_t8

0xc903,	// (0x0005a6f9) popup_blid_sat_info2_window_t9

0xc911,	// (0x0005a707) popup_blid_sat_info2_window_t10

0xc9d8,	// (0x0005a7ce) aid_firma_cardinal_ParamLimits

0xc9ec,	// (0x0005a7e2) blid_firmament_pane_t1_ParamLimits

0xca03,	// (0x0005a7f9) blid_firmament_pane_t2_ParamLimits

0xca1a,	// (0x0005a810) blid_firmament_pane_t3_ParamLimits

0xca31,	// (0x0005a827) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0005d416) blid_firmament_pane_t_ParamLimits

0xca48,	// (0x0005a83e) blid_sat_info_pane_ParamLimits

0x9868,	// (0x0005765e) main_cam_set_pane_ParamLimits

0x49ac,	// (0x000527a2) aid_size_cell_colour_35_ParamLimits

0x49cc,	// (0x000527c2) aid_size_cell_colour_112_ParamLimits

0x49ec,	// (0x000527e2) aid_size_cell_effect_ParamLimits

0xb3b0,	// (0x000591a6) bg_tb_trans_pane_cp02_ParamLimits

0xae1f,	// (0x00058c15) heading_imed_pane_ParamLimits

0x4a0c,	// (0x00052802) listscroll_imed_pane_ParamLimits

0xbd31,	// (0x00059b27) popup_call2_audio_first_window_g5_ParamLimits

0xbd31,	// (0x00059b27) popup_call2_audio_first_window_g5

0x4e55,	// (0x00052c4b) aid_size_touch_image3_arrow_left_ParamLimits

0x4e55,	// (0x00052c4b) aid_size_touch_image3_arrow_left

0x4e81,	// (0x00052c77) aid_size_touch_image3_arrow_right_ParamLimits

0x4e81,	// (0x00052c77) aid_size_touch_image3_arrow_right

0xa850,	// (0x00058646) vid4_progress_pane_t3

0x4bb1,	// (0x000529a7) main_hwr_training_symbol_option_pane_ParamLimits

0x4bb1,	// (0x000529a7) main_hwr_training_symbol_option_pane

0xd150,	// (0x0005af46) popup_hwr_training_preview_window_ParamLimits

0xd150,	// (0x0005af46) popup_hwr_training_preview_window

0x4bd1,	// (0x000529c7) hwr_training_navi_pane_g5_ParamLimits

0x4bd1,	// (0x000529c7) hwr_training_navi_pane_g5

0xd2ee,	// (0x0005b0e4) popup_char_count_window

0x9868,	// (0x0005765e) bg_popup_sub_pane_cp20_ParamLimits

0x5e76,	// (0x00053c6c) list_vitu2_match_list_pane_ParamLimits

0x5e82,	// (0x00053c78) vitu2_page_scroll_pane_ParamLimits

0x5e82,	// (0x00053c78) vitu2_page_scroll_pane

0xd7d6,	// (0x0005b5cc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d6,	// (0x0005b5cc) list_single_hwr_training_symbol_option_pane

0xd7e9,	// (0x0005b5df) list_single_hwr_training_symbol_option_pane_g1

0xd7f1,	// (0x0005b5e7) list_single_hwr_training_symbol_option_pane_t1

0xd7ff,	// (0x0005b5f5) bg_button_pane_cp023

0xd808,	// (0x0005b5fe) bg_button_pane_cp024

0xd83b,	// (0x0005b631) vitu2_page_scroll_pane_g1

0xd843,	// (0x0005b639) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0005d7ff) vitu2_page_scroll_pane_g

0xd84b,	// (0x0005b641) vitu2_page_scroll_pane_t1

0xd85a,	// (0x0005b650) popup_char_count_window_g1

0xd863,	// (0x0005b659) popup_char_count_window_g2

0xd86c,	// (0x0005b662) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0005d804) popup_char_count_window_g

0xd875,	// (0x0005b66b) popup_char_count_window_t1

0x97fb,	// (0x000575f1) main_vded2_pane

0xcef7,	// (0x0005aced) aid_size_cell_imed_line

0xcf01,	// (0x0005acf7) grid_imed_line_width_pane

0xa765,	// (0x0005855b) vid4_indicators_pane_g4

0xd883,	// (0x0005b679) cell_imed_line_width_pane_ParamLimits

0xd883,	// (0x0005b679) cell_imed_line_width_pane

0xd899,	// (0x0005b68f) cell_imed_line_width_pane_g1

0xd8a2,	// (0x0005b698) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0005d80b) cell_imed_line_width_pane_g

0x642c,	// (0x00054222) main_vded2_pane_g1_ParamLimits

0x642c,	// (0x00054222) main_vded2_pane_g1

0x6447,	// (0x0005423d) main_vded2_pane_g2_ParamLimits

0x6447,	// (0x0005423d) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0005d810) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0005d810) main_vded2_pane_g

0x6459,	// (0x0005424f) vded2_slider_pane_ParamLimits

0x6459,	// (0x0005424f) vded2_slider_pane

0x6469,	// (0x0005425f) aid_size_touch_vded2_end

0x6473,	// (0x00054269) aid_size_touch_vded2_playhead

0xd8aa,	// (0x0005b6a0) aid_size_touch_vded2_start

0xd8b2,	// (0x0005b6a8) vded2_slider_bg_pane

0xd8bb,	// (0x0005b6b1) vded2_slider_pane_g1

0xd8c4,	// (0x0005b6ba) vded2_slider_pane_g2

0x647d,	// (0x00054273) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0005d815) vded2_slider_pane_g

0xd8cc,	// (0x0005b6c2) vded2_slider_bg_pane_g1

0xd8d5,	// (0x0005b6cb) vded2_slider_bg_pane_g2

0xd8de,	// (0x0005b6d4) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0005d81c) vded2_slider_bg_pane_g

0x2de4,	// (0x00050bda) aid_postcard_touch_down_pane_ParamLimits

0x2de4,	// (0x00050bda) aid_postcard_touch_down_pane

0x2dfc,	// (0x00050bf2) aid_postcard_touch_up_pane_ParamLimits

0x2dfc,	// (0x00050bf2) aid_postcard_touch_up_pane

0x97fb,	// (0x000575f1) main_blid2_pane

0xa2f6,	// (0x000580ec) popup_blid2_search_window

0x97fb,	// (0x000575f1) blid2_gps_pane

0x97fb,	// (0x000575f1) blid2_navig_pane

0x97fb,	// (0x000575f1) blid2_search_pane

0x97fb,	// (0x000575f1) blid2_tripm_pane

0x6488,	// (0x0005427e) blid2_search_pane_g1_ParamLimits

0x6488,	// (0x0005427e) blid2_search_pane_g1

0x649b,	// (0x00054291) blid2_search_pane_t1_ParamLimits

0x649b,	// (0x00054291) blid2_search_pane_t1

0x64ad,	// (0x000542a3) aid_size_cell_blid2_gps_ParamLimits

0x64ad,	// (0x000542a3) aid_size_cell_blid2_gps

0x64c5,	// (0x000542bb) blid2_gps_pane_g1_ParamLimits

0x64c5,	// (0x000542bb) blid2_gps_pane_g1

0x64d9,	// (0x000542cf) grid_blid2_satellite_pane_ParamLimits

0x64d9,	// (0x000542cf) grid_blid2_satellite_pane

0x64f1,	// (0x000542e7) blid2_navig_pane_g1_ParamLimits

0x64f1,	// (0x000542e7) blid2_navig_pane_g1

0x64fd,	// (0x000542f3) blid2_navig_pane_t1_ParamLimits

0x64fd,	// (0x000542f3) blid2_navig_pane_t1

0x6518,	// (0x0005430e) blid2_navig_pane_t2_ParamLimits

0x6518,	// (0x0005430e) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0005d823) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0005d823) blid2_navig_pane_t

0x6533,	// (0x00054329) blid2_navig_ring_pane_ParamLimits

0x6533,	// (0x00054329) blid2_navig_ring_pane

0x654e,	// (0x00054344) blid2_speed_pane_ParamLimits

0x654e,	// (0x00054344) blid2_speed_pane

0x655a,	// (0x00054350) blid2_tripm_pane_g1_ParamLimits

0x655a,	// (0x00054350) blid2_tripm_pane_g1

0x6575,	// (0x0005436b) blid2_tripm_pane_g2_ParamLimits

0x6575,	// (0x0005436b) blid2_tripm_pane_g2

0x6588,	// (0x0005437e) blid2_tripm_pane_g3_ParamLimits

0x6588,	// (0x0005437e) blid2_tripm_pane_g3

0x6599,	// (0x0005438f) blid2_tripm_pane_g4_ParamLimits

0x6599,	// (0x0005438f) blid2_tripm_pane_g4

0x65aa,	// (0x000543a0) blid2_tripm_pane_g5_ParamLimits

0x65aa,	// (0x000543a0) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0005d828) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0005d828) blid2_tripm_pane_g

0x65d0,	// (0x000543c6) blid2_tripm_pane_t1_ParamLimits

0x65d0,	// (0x000543c6) blid2_tripm_pane_t1

0x65e9,	// (0x000543df) blid2_tripm_pane_t2_ParamLimits

0x65e9,	// (0x000543df) blid2_tripm_pane_t2

0x6602,	// (0x000543f8) blid2_tripm_pane_t3_ParamLimits

0x6602,	// (0x000543f8) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0005d835) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0005d835) blid2_tripm_pane_t

0x6649,	// (0x0005443f) cell_blid2_satellite_pane_ParamLimits

0x6649,	// (0x0005443f) cell_blid2_satellite_pane

0x6665,	// (0x0005445b) cell_blid2_satellite_pane_g1

0xd8e7,	// (0x0005b6dd) cell_blid2_satellite_pane_t1

0xa99c,	// (0x00058792) blid2_speed_pane_g1

0xd8f5,	// (0x0005b6eb) blid2_speed_pane_t1

0xd903,	// (0x0005b6f9) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0005d83e) blid2_speed_pane_t

0xa99c,	// (0x00058792) blid2_navig_ring_pane_g1

0x666e,	// (0x00054464) blid2_navig_ring_pane_g2

0x6676,	// (0x0005446c) blid2_navig_ring_pane_g3

0x667e,	// (0x00054474) blid2_navig_ring_pane_g4

0x6686,	// (0x0005447c) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0005d843) blid2_navig_ring_pane_g

0x97fb,	// (0x000575f1) bg_popup_window_pane_cp011

0xd911,	// (0x0005b707) popup_blid2_search_window_g1

0xd919,	// (0x0005b70f) popup_blid2_search_window_t1

0xd927,	// (0x0005b71d) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0005d84e) popup_blid2_search_window_t

0xaaaf,	// (0x000588a5) main_browser_pane_g1

0xa028,	// (0x00057e1e) main_browser_pane_ParamLimits

0x9868,	// (0x0005765e) bg_button_pane_cp011_ParamLimits

0x5706,	// (0x000534fc) cell_vitu2_function_pane_g1_ParamLimits

0xb3b0,	// (0x000591a6) bg_popup_sub_pane_cp22_ParamLimits

0x0001,	// (0x0004ddf7) input_focus_pane_cp08_ParamLimits

0x6002,	// (0x00053df8) popup_vitu2_query_button_pane_ParamLimits

0x6002,	// (0x00053df8) popup_vitu2_query_button_pane

0x001d,	// (0x0004de13) popup_vitu2_query_input_button_pane

0xd581,	// (0x0005b377) popup_vitu2_query_window_g1_ParamLimits

0x0027,	// (0x0004de1d) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0005d74f) popup_vitu2_query_window_g_ParamLimits

0x97fb,	// (0x000575f1) bg_button_pane_cp026

0x668e,	// (0x00054484) popup_vitu2_query_input_button_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp025

0xd935,	// (0x0005b72b) popup_vitu2_query_button_pane_t1

0x3df6,	// (0x00051bec) main_mp3_pane_t6

0x3e04,	// (0x00051bfa) popup_slider_window_cp01

0xa6c9,	// (0x000584bf) cam4_battery_pane

0xa71e,	// (0x00058514) cam4_battery_pane_cp02

0xa7f1,	// (0x000585e7) cam4_battery_pane_cp01

0xa7f1,	// (0x000585e7) cam4_battery_pane_cp03

0xa99c,	// (0x00058792) cam4_battery_pane_g1

0xd943,	// (0x0005b739) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0005d853) cam4_battery_pane_g

0xc91f,	// (0x0005a715) popup_blid_sat_info2_window_t11

0x2947,	// (0x0005073d) aid_size_touch_mv_arrow_left_ParamLimits

0x2970,	// (0x00050766) aid_size_touch_mv_arrow_right_ParamLimits

0xb223,	// (0x00059019) navi_pane_g1_ParamLimits

0x29af,	// (0x000507a5) navi_pane_g2_ParamLimits

0x29dd,	// (0x000507d3) navi_pane_g3_ParamLimits

0xf334,	// (0x0005d12a) navi_pane_g_ParamLimits

0x2a37,	// (0x0005082d) navi_pane_mv_t1_ParamLimits

0x4a18,	// (0x0005280e) grid_imed_effect_pane_ParamLimits

0x1538,	// (0x0004f32e) aid_placing_vt_slider_lsc

0xa9eb,	// (0x000587e1) aid_placing_vt_slider_prt

0x9868,	// (0x0005765e) bg_tb_trans_pane_cp01_ParamLimits

0xcba1,	// (0x0005a997) popup_image_details_window_g1_ParamLimits

0xcbb4,	// (0x0005a9aa) popup_image_details_window_g2_ParamLimits

0xcbc9,	// (0x0005a9bf) popup_image_details_window_g3_ParamLimits

0xcbc9,	// (0x0005a9bf) popup_image_details_window_g3

0xf660,	// (0x0005d456) popup_image_details_window_g_ParamLimits

0xcbdd,	// (0x0005a9d3) popup_image_details_window_t1_ParamLimits

0xcbef,	// (0x0005a9e5) popup_image_details_window_t2_ParamLimits

0xcc08,	// (0x0005a9fe) popup_image_details_window_t3_ParamLimits

0xcc1c,	// (0x0005aa12) popup_image_details_window_t4_ParamLimits

0xcc37,	// (0x0005aa2d) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0005d45d) popup_image_details_window_t_ParamLimits

0x62e0,	// (0x000540d6) cl_header_name_pane_ParamLimits

0x62e0,	// (0x000540d6) cl_header_name_pane

0x6696,	// (0x0005448c) cl_header_name_pane_t1_ParamLimits

0x6696,	// (0x0005448c) cl_header_name_pane_t1

0x66b7,	// (0x000544ad) cl_header_name_pane_t2_ParamLimits

0x66b7,	// (0x000544ad) cl_header_name_pane_t2

0x66f9,	// (0x000544ef) cl_header_name_pane_t3_ParamLimits

0x66f9,	// (0x000544ef) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0005d858) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0005d858) cl_header_name_pane_t

0x2a08,	// (0x000507fe) navi_pane_mv_g2_ParamLimits

0xd2d6,	// (0x0005b0cc) field_vitu2_entry_pane_g1_ParamLimits

0xd2e2,	// (0x0005b0d8) field_vitu2_entry_pane_g2_ParamLimits

0xb37a,	// (0x00059170) field_vitu2_entry_pane_g3_ParamLimits

0xb37a,	// (0x00059170) field_vitu2_entry_pane_g3

0xf862,	// (0x0005d658) field_vitu2_entry_pane_g_ParamLimits

0x5682,	// (0x00053478) cell_vitu2_itu_pane_g1_ParamLimits

0x569a,	// (0x00053490) cell_vitu2_itu_pane_g2_ParamLimits

0x569a,	// (0x00053490) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0005d664) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0005d664) cell_vitu2_itu_pane_g

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp05_ParamLimits

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp05

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp03

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp04

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp10_ParamLimits

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp10

0x015a,	// (0x0004df50) bg_vkb2_func_pane_cp08

0x628c,	// (0x00054082) bg_vkb2_func_pane_cp06

0x6298,	// (0x0005408e) bg_vkb2_func_pane_cp07

0xd811,	// (0x0005b607) bg_vkb2_func_pane_cp11_ParamLimits

0xd811,	// (0x0005b607) bg_vkb2_func_pane_cp11

0xd826,	// (0x0005b61c) bg_vkb2_func_pane_cp12_ParamLimits

0xd826,	// (0x0005b61c) bg_vkb2_func_pane_cp12

0x97fb,	// (0x000575f1) bg_vkb2_func_pane_cp09

0xd300,	// (0x0005b0f6) bg_vkb2_func_pane_g1

0xabc0,	// (0x000589b6) bg_vkb2_func_pane_g2

0xd308,	// (0x0005b0fe) bg_vkb2_func_pane_g3

0xd310,	// (0x0005b106) bg_vkb2_func_pane_g4

0xd546,	// (0x0005b33c) bg_vkb2_func_pane_g5

0xd328,	// (0x0005b11e) bg_vkb2_func_pane_g6

0xd330,	// (0x0005b126) bg_vkb2_func_pane_g7

0xd320,	// (0x0005b116) bg_vkb2_func_pane_g8

0xaba0,	// (0x00058996) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0005d85f) bg_vkb2_func_pane_g

0x65be,	// (0x000543b4) blid2_tripm_pane_g6_ParamLimits

0x65be,	// (0x000543b4) blid2_tripm_pane_g6

0xd20e,	// (0x0005b004) mp4_progress_pane_g1

0x6635,	// (0x0005442b) blid2_tripm_values_pane_ParamLimits

0x6635,	// (0x0005442b) blid2_tripm_values_pane

0x672a,	// (0x00054520) blid2_tripm_values_pane_t1

0x6738,	// (0x0005452e) blid2_tripm_values_pane_t2

0xd94d,	// (0x0005b743) blid2_tripm_values_pane_t3

0x6746,	// (0x0005453c) blid2_tripm_values_pane_t4

0x6754,	// (0x0005454a) blid2_tripm_values_pane_t5

0x6762,	// (0x00054558) blid2_tripm_values_pane_t6

0xd95b,	// (0x0005b751) blid2_tripm_values_pane_t7

0x6770,	// (0x00054566) blid2_tripm_values_pane_t8

0x677e,	// (0x00054574) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0005d872) blid2_tripm_values_pane_t

0x1575,	// (0x0004f36b) call_video_pane_t1_ParamLimits

0x158f,	// (0x0004f385) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0005cfd8) call_video_pane_t_ParamLimits

0xfe28,	// (0x0004dc1e) msg_header_pane_g1_ParamLimits

0xb467,	// (0x0005925d) msg_header_pane_g2_ParamLimits

0xb467,	// (0x0005925d) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0005d1cd) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0005d1cd) msg_header_pane_g

0xa028,	// (0x00057e1e) main_clock2_pane_ParamLimits

0x4715,	// (0x0005250b) grid_clock2_toolbar_pane_ParamLimits

0x4715,	// (0x0005250b) grid_clock2_toolbar_pane

0x4715,	// (0x0005250b) listscroll_clock2_pane_ParamLimits

0x4715,	// (0x0005250b) listscroll_clock2_pane

0x47f4,	// (0x000525ea) main_clock2_pane_t3_ParamLimits

0x47f4,	// (0x000525ea) main_clock2_pane_t3

0x4817,	// (0x0005260d) main_clock2_pane_t4_ParamLimits

0x4817,	// (0x0005260d) main_clock2_pane_t4

0xd969,	// (0x0005b75f) cell_clock2_toolbar_pane

0xd971,	// (0x0005b767) cell_clock2_toolbar_pane_cp01

0xd971,	// (0x0005b767) cell_clock2_toolbar_pane_cp02

0xd979,	// (0x0005b76f) cell_clock2_toolbar_pane_cp03

0xd981,	// (0x0005b777) list_clock2_pane

0xb189,	// (0x00058f7f) scroll_pane_cp10

0xd989,	// (0x0005b77f) list_single_clock2_pane_ParamLimits

0xd989,	// (0x0005b77f) list_single_clock2_pane

0xa966,	// (0x0005875c) list_highlight_pane_cp08

0xd996,	// (0x0005b78c) list_single_clock2_pane_t1

0xd9a4,	// (0x0005b79a) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0005d885) list_single_clock2_pane_t

0x97fb,	// (0x000575f1) bg_button_pane_cp10

0xd9b2,	// (0x0005b7a8) cell_clock2_toolbar_pane_g1

0x2d70,	// (0x00050b66) aid_main_viewer_pane_g1_ParamLimits

0x2d70,	// (0x00050b66) aid_main_viewer_pane_g1

0x2d7e,	// (0x00050b74) aid_main_viewer_pane_g2_ParamLimits

0x2d7e,	// (0x00050b74) aid_main_viewer_pane_g2

0x2d8c,	// (0x00050b82) aid_main_viewer_pane_g3_ParamLimits

0x2d8c,	// (0x00050b82) aid_main_viewer_pane_g3

0x2d9b,	// (0x00050b91) aid_main_viewer_pane_g4_ParamLimits

0x2d9b,	// (0x00050b91) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0005d1de) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0005d1de) aid_main_viewer_pane_g

0x3737,	// (0x0005152d) main_calc_pane_ParamLimits

0x374b,	// (0x00051541) main_dialer2_pane_ParamLimits

0x97fb,	// (0x000575f1) main_cam6_pane

0x97fb,	// (0x000575f1) main_vid6_pane

0x4721,	// (0x00052517) listscroll_gen_pane_cp06_ParamLimits

0x4721,	// (0x00052517) listscroll_gen_pane_cp06

0x483a,	// (0x00052630) main_clock2_pane_t5_ParamLimits

0x483a,	// (0x00052630) main_clock2_pane_t5

0x4898,	// (0x0005268e) aid_call2_pane_cp10_ParamLimits

0x48aa,	// (0x000526a0) aid_call_pane_cp10_ParamLimits

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g2_ParamLimits

0x48bc,	// (0x000526b2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x48bc,	// (0x000526b2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1f8,	// (0x00058fee) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0005d512) popup_clock_analogue_window_cp10_g_ParamLimits

0x48d2,	// (0x000526c8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4e02,	// (0x00052bf8) cell_dialer2_keypad_pane_g2_ParamLimits

0x4e02,	// (0x00052bf8) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0005d5f7) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0005d5f7) cell_dialer2_keypad_pane_g

0x4e1e,	// (0x00052c14) cell_dialer2_keypad_pane_t1

0x5a2e,	// (0x00053824) main_cset_text2_pane_ParamLimits

0x5a2e,	// (0x00053824) main_cset_text2_pane

0xd779,	// (0x0005b56f) area_vitu2_query_pane_g1_ParamLimits

0x0106,	// (0x0004defc) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0005d7a2) area_vitu2_query_pane_g_ParamLimits

0x6268,	// (0x0005405e) area_vitu2_query_pane_t7_ParamLimits

0x6268,	// (0x0005405e) area_vitu2_query_pane_t7

0x628c,	// (0x00054082) bg_button_pane_cp018_ParamLimits

0x6298,	// (0x0005408e) bg_button_pane_cp021_ParamLimits

0x0147,	// (0x0004df3d) bg_button_pane_cp022_ParamLimits

0x015a,	// (0x0004df50) bg_vkb2_func_pane_cp08_ParamLimits

0x628c,	// (0x00054082) bg_vkb2_func_pane_cp06_ParamLimits

0x6298,	// (0x0005408e) bg_vkb2_func_pane_cp07_ParamLimits

0x016e,	// (0x0004df64) input_focus_pane_cp09_ParamLimits

0xa865,	// (0x0005865b) cam6_autofocus_pane_ParamLimits

0xa865,	// (0x0005865b) cam6_autofocus_pane

0x678c,	// (0x00054582) cam6_image_uncrop_pane_ParamLimits

0x678c,	// (0x00054582) cam6_image_uncrop_pane

0x679c,	// (0x00054592) cam6_indi_pane_ParamLimits

0x679c,	// (0x00054592) cam6_indi_pane

0x67b2,	// (0x000545a8) cam6_mode_pane_ParamLimits

0x67b2,	// (0x000545a8) cam6_mode_pane

0x67c4,	// (0x000545ba) cam6_timer_pane_ParamLimits

0x67c4,	// (0x000545ba) cam6_timer_pane

0x67d0,	// (0x000545c6) cam6_zoom_pane_ParamLimits

0x67d0,	// (0x000545c6) cam6_zoom_pane

0x67de,	// (0x000545d4) cam6_mode_pane_g1_ParamLimits

0x67de,	// (0x000545d4) cam6_mode_pane_g1

0x67ee,	// (0x000545e4) cam6_mode_pane_g2_ParamLimits

0x67ee,	// (0x000545e4) cam6_mode_pane_g2

0x67fe,	// (0x000545f4) cam6_mode_pane_g3_ParamLimits

0x67fe,	// (0x000545f4) cam6_mode_pane_g3

0x680e,	// (0x00054604) cam6_mode_pane_g4_ParamLimits

0x680e,	// (0x00054604) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0005d88a) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0005d88a) cam6_mode_pane_g

0xcb57,	// (0x0005a94d) bg_tb_trans_pane_cp08_ParamLimits

0xcb57,	// (0x0005a94d) bg_tb_trans_pane_cp08

0xd9ba,	// (0x0005b7b0) cam6_battery_pane_ParamLimits

0xd9ba,	// (0x0005b7b0) cam6_battery_pane

0xd9d0,	// (0x0005b7c6) cam6_indi_pane_g1_ParamLimits

0xd9d0,	// (0x0005b7c6) cam6_indi_pane_g1

0xd9e2,	// (0x0005b7d8) cam6_indi_pane_g2_ParamLimits

0xd9e2,	// (0x0005b7d8) cam6_indi_pane_g2

0xd9f4,	// (0x0005b7ea) cam6_indi_pane_g3_ParamLimits

0xd9f4,	// (0x0005b7ea) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0005d893) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0005d893) cam6_indi_pane_g

0xda06,	// (0x0005b7fc) cam6_indi_pane_t1_ParamLimits

0xda06,	// (0x0005b7fc) cam6_indi_pane_t1

0x5438,	// (0x0005322e) cam6_autofocus_pane_g1

0x5440,	// (0x00053236) cam6_autofocus_pane_g2

0x5448,	// (0x0005323e) cam6_autofocus_pane_g3

0x5450,	// (0x00053246) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0005d89a) cam6_autofocus_pane_g

0xda2c,	// (0x0005b822) cam6_timer_pane_g1

0xda34,	// (0x0005b82a) cam6_timer_pane_t1

0xda42,	// (0x0005b838) cam6_zoom_cont_pane

0xda4a,	// (0x0005b840) cam6_zoom_pane_g1

0xda53,	// (0x0005b849) cam6_zoom_pane_g2

0x681e,	// (0x00054614) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0005d8a3) cam6_zoom_pane_g

0xa99c,	// (0x00058792) cam6_battery_pane_g1

0xa99c,	// (0x00058792) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0005d18e) cam6_battery_pane_g

0xda4a,	// (0x0005b840) cam6_zoom_cont_pane_g1

0xda53,	// (0x0005b849) cam6_zoom_cont_pane_g2

0xda5c,	// (0x0005b852) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0005d8aa) cam6_zoom_cont_pane_g

0x683c,	// (0x00054632) cam6_mode_pane_cp_ParamLimits

0x683c,	// (0x00054632) cam6_mode_pane_cp

0x684e,	// (0x00054644) cam6_zoom_pane_cp_ParamLimits

0x684e,	// (0x00054644) cam6_zoom_pane_cp

0x685c,	// (0x00054652) vid6_image_uncrop_cif_pane_ParamLimits

0x685c,	// (0x00054652) vid6_image_uncrop_cif_pane

0x686c,	// (0x00054662) vid6_image_uncrop_nhd_pane_ParamLimits

0x686c,	// (0x00054662) vid6_image_uncrop_nhd_pane

0x687b,	// (0x00054671) vid6_image_uncrop_vga_pane_ParamLimits

0x687b,	// (0x00054671) vid6_image_uncrop_vga_pane

0x688a,	// (0x00054680) vid6_image_uncrop_wvga_pane_ParamLimits

0x688a,	// (0x00054680) vid6_image_uncrop_wvga_pane

0x6899,	// (0x0005468f) vid6_indi_pane_ParamLimits

0x6899,	// (0x0005468f) vid6_indi_pane

0xcb57,	// (0x0005a94d) bg_tb_trans_pane_cp09_ParamLimits

0xcb57,	// (0x0005a94d) bg_tb_trans_pane_cp09

0xda74,	// (0x0005b86a) cam6_battery_pane_cp_ParamLimits

0xda74,	// (0x0005b86a) cam6_battery_pane_cp

0xda80,	// (0x0005b876) vid6_indi_pane_g1_ParamLimits

0xda80,	// (0x0005b876) vid6_indi_pane_g1

0xda92,	// (0x0005b888) vid6_indi_pane_g2_ParamLimits

0xda92,	// (0x0005b888) vid6_indi_pane_g2

0xdaa4,	// (0x0005b89a) vid6_indi_pane_g3_ParamLimits

0xdaa4,	// (0x0005b89a) vid6_indi_pane_g3

0xdabb,	// (0x0005b8b1) vid6_indi_pane_g4_ParamLimits

0xdabb,	// (0x0005b8b1) vid6_indi_pane_g4

0xdad2,	// (0x0005b8c8) vid6_indi_pane_g5_ParamLimits

0xdad2,	// (0x0005b8c8) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0005d8b1) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0005d8b1) vid6_indi_pane_g

0xdaec,	// (0x0005b8e2) vid6_indi_pane_t1_ParamLimits

0xdaec,	// (0x0005b8e2) vid6_indi_pane_t1

0xdb02,	// (0x0005b8f8) vid6_indi_pane_t2_ParamLimits

0xdb02,	// (0x0005b8f8) vid6_indi_pane_t2

0xdb2a,	// (0x0005b920) vid6_indi_pane_t3_ParamLimits

0xdb2a,	// (0x0005b920) vid6_indi_pane_t3

0xdb52,	// (0x0005b948) vid6_indi_pane_t4_ParamLimits

0xdb52,	// (0x0005b948) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0005d8bc) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0005d8bc) vid6_indi_pane_t

0xdb76,	// (0x0005b96c) wait_bar_pane_cp08

0x68b1,	// (0x000546a7) main_cset_text2_pane_t1_ParamLimits

0x68b1,	// (0x000546a7) main_cset_text2_pane_t1

0x6827,	// (0x0005461d) listscroll_gen_pane_cp06_t1_ParamLimits

0x6827,	// (0x0005461d) listscroll_gen_pane_cp06_t1

0x97fb,	// (0x000575f1) main_cam6_set_pane

0x9f94,	// (0x00057d8a) bg_tb_trans_pane_cp06_ParamLimits

0xa6d1,	// (0x000584c7) cam4_indicators_pane_g1_ParamLimits

0xa6e2,	// (0x000584d8) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0005d634) cam4_indicators_pane_g_ParamLimits

0xa6fa,	// (0x000584f0) cam4_indicators_pane_t1_ParamLimits

0x9868,	// (0x0005765e) bg_tb_trans_pane_cp07_ParamLimits

0xa728,	// (0x0005851e) vid4_indicators_pane_g1_ParamLimits

0xa73e,	// (0x00058534) vid4_indicators_pane_g2_ParamLimits

0xa752,	// (0x00058548) vid4_indicators_pane_g3_ParamLimits

0xa765,	// (0x0005855b) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0005d646) vid4_indicators_pane_g_ParamLimits

0xa783,	// (0x00058579) vid4_indicators_pane_t1_ParamLimits

0xa7f9,	// (0x000585ef) vid4_progress_pane_g1_ParamLimits

0xa809,	// (0x000585ff) vid4_progress_pane_g2_ParamLimits

0x63d4,	// (0x000541ca) vid4_progress_pane_g3_ParamLimits

0xa819,	// (0x0005860f) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0005d7ed) vid4_progress_pane_g_ParamLimits

0x63e6,	// (0x000541dc) vid4_progress_pane_t1_ParamLimits

0xa837,	// (0x0005862d) vid4_progress_pane_t2_ParamLimits

0xa850,	// (0x00058646) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0005d7f8) vid4_progress_pane_t_ParamLimits

0x6400,	// (0x000541f6) wait_bar_pane_cp07_ParamLimits

0x68d2,	// (0x000546c8) main_cam6_set_pane_g2_ParamLimits

0x68d2,	// (0x000546c8) main_cam6_set_pane_g2

0x68f8,	// (0x000546ee) main_cset6_listscroll_pane_ParamLimits

0x68f8,	// (0x000546ee) main_cset6_listscroll_pane

0x6916,	// (0x0005470c) main_cset6_slider_pane_ParamLimits

0x6916,	// (0x0005470c) main_cset6_slider_pane

0x692c,	// (0x00054722) main_cset6_text2_pane_ParamLimits

0x692c,	// (0x00054722) main_cset6_text2_pane

0xdb85,	// (0x0005b97b) main_cset6_text_pane

0xdb8d,	// (0x0005b983) main_cset_list_pane_copy1_ParamLimits

0xdb8d,	// (0x0005b983) main_cset_list_pane_copy1

0xdb9d,	// (0x0005b993) scroll_pane_cp028_copy1

0x693a,	// (0x00054730) cset_list_set_pane_copy1

0x694e,	// (0x00054744) aid_position_infowindow_above_copy1

0x6956,	// (0x0005474c) aid_position_infowindow_below_copy1

0x0193,	// (0x0004df89) cset_list_set_pane_g1_copy1

0x019b,	// (0x0004df91) cset_list_set_pane_g3_copy1_ParamLimits

0x019b,	// (0x0004df91) cset_list_set_pane_g3_copy1

0x01aa,	// (0x0004dfa0) cset_list_set_pane_t1_copy1_ParamLimits

0x01aa,	// (0x0004dfa0) cset_list_set_pane_t1_copy1

0x9868,	// (0x0005765e) list_highlight_pane_cp021_copy1_ParamLimits

0x9868,	// (0x0005765e) list_highlight_pane_cp021_copy1

0xdba6,	// (0x0005b99c) cset6_slider_pane_ParamLimits

0xdba6,	// (0x0005b99c) cset6_slider_pane

0xdbd2,	// (0x0005b9c8) main_cset6_slider_pane_g1_ParamLimits

0xdbd2,	// (0x0005b9c8) main_cset6_slider_pane_g1

0x695e,	// (0x00054754) main_cset6_slider_pane_g2_ParamLimits

0x695e,	// (0x00054754) main_cset6_slider_pane_g2

0xdbfa,	// (0x0005b9f0) main_cset6_slider_pane_g3_ParamLimits

0xdbfa,	// (0x0005b9f0) main_cset6_slider_pane_g3

0x6986,	// (0x0005477c) main_cset6_slider_pane_g4_ParamLimits

0x6986,	// (0x0005477c) main_cset6_slider_pane_g4

0x6992,	// (0x00054788) main_cset6_slider_pane_g5_ParamLimits

0x6992,	// (0x00054788) main_cset6_slider_pane_g5

0xd445,	// (0x0005b23b) main_cset6_slider_pane_g7_ParamLimits

0xd445,	// (0x0005b23b) main_cset6_slider_pane_g7

0xd451,	// (0x0005b247) main_cset6_slider_pane_g8_ParamLimits

0xd451,	// (0x0005b247) main_cset6_slider_pane_g8

0x5ad6,	// (0x000538cc) main_cset6_slider_pane_g9_ParamLimits

0x5ad6,	// (0x000538cc) main_cset6_slider_pane_g9

0x5ae2,	// (0x000538d8) main_cset6_slider_pane_g10_ParamLimits

0x5ae2,	// (0x000538d8) main_cset6_slider_pane_g10

0x5aee,	// (0x000538e4) main_cset6_slider_pane_g11_ParamLimits

0x5aee,	// (0x000538e4) main_cset6_slider_pane_g11

0x5afa,	// (0x000538f0) main_cset6_slider_pane_g12_ParamLimits

0x5afa,	// (0x000538f0) main_cset6_slider_pane_g12

0x5b06,	// (0x000538fc) main_cset6_slider_pane_g13_ParamLimits

0x5b06,	// (0x000538fc) main_cset6_slider_pane_g13

0x5b12,	// (0x00053908) main_cset6_slider_pane_g14_ParamLimits

0x5b12,	// (0x00053908) main_cset6_slider_pane_g14

0x69a0,	// (0x00054796) main_cset6_slider_pane_g15_ParamLimits

0x69a0,	// (0x00054796) main_cset6_slider_pane_g15

0x5b36,	// (0x0005392c) main_cset6_slider_pane_g16_ParamLimits

0x5b36,	// (0x0005392c) main_cset6_slider_pane_g16

0x5b44,	// (0x0005393a) main_cset6_slider_pane_g17_ParamLimits

0x5b44,	// (0x0005393a) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0005d8c5) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0005d8c5) main_cset6_slider_pane_g

0xdc06,	// (0x0005b9fc) main_cset6_slider_pane_t1_ParamLimits

0xdc06,	// (0x0005b9fc) main_cset6_slider_pane_t1

0x69d0,	// (0x000547c6) main_cset6_slider_pane_t2_ParamLimits

0x69d0,	// (0x000547c6) main_cset6_slider_pane_t2

0x69fb,	// (0x000547f1) main_cset6_slider_pane_t3_ParamLimits

0x69fb,	// (0x000547f1) main_cset6_slider_pane_t3

0x6a26,	// (0x0005481c) main_cset6_slider_pane_t4_ParamLimits

0x6a26,	// (0x0005481c) main_cset6_slider_pane_t4

0x6a51,	// (0x00054847) main_cset6_slider_pane_t5_ParamLimits

0x6a51,	// (0x00054847) main_cset6_slider_pane_t5

0xdc47,	// (0x0005ba3d) main_cset6_slider_pane_t7_ParamLimits

0xdc47,	// (0x0005ba3d) main_cset6_slider_pane_t7

0x6a7e,	// (0x00054874) main_cset6_slider_pane_t8_ParamLimits

0x6a7e,	// (0x00054874) main_cset6_slider_pane_t8

0x6aa2,	// (0x00054898) main_cset6_slider_pane_t9_ParamLimits

0x6aa2,	// (0x00054898) main_cset6_slider_pane_t9

0x6ac6,	// (0x000548bc) main_cset6_slider_pane_t10_ParamLimits

0x6ac6,	// (0x000548bc) main_cset6_slider_pane_t10

0x6aea,	// (0x000548e0) main_cset6_slider_pane_t11_ParamLimits

0x6aea,	// (0x000548e0) main_cset6_slider_pane_t11

0xdc9d,	// (0x0005ba93) main_cset6_slider_pane_t14_ParamLimits

0xdc9d,	// (0x0005ba93) main_cset6_slider_pane_t14

0xdcd6,	// (0x0005bacc) main_cset6_slider_pane_t15_ParamLimits

0xdcd6,	// (0x0005bacc) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0005d8ea) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0005d8ea) main_cset6_slider_pane_t

0xdd0f,	// (0x0005bb05) cset_slider_pane_g1_copy1

0xdd18,	// (0x0005bb0e) cset_slider_pane_g2_copy1

0xdd21,	// (0x0005bb17) cset_slider_pane_g3_copy1

0x97fb,	// (0x000575f1) bg_popup_sub_pane_cp011_copy1

0xdd33,	// (0x0005bb29) main_cset_text_pane_g1_copy1

0xd595,	// (0x0005b38b) main_cset_text_pane_t1_copy1

0xd5a3,	// (0x0005b399) main_cset_text_pane_t2_copy1

0xd5b1,	// (0x0005b3a7) main_cset_text_pane_t3_copy1

0xd5bf,	// (0x0005b3b5) main_cset_text_pane_t4_copy1

0xd5cd,	// (0x0005b3c3) main_cset_text_pane_t5_copy1

0xdd3b,	// (0x0005bb31) main_cset_text_pane_t6_copy1

0xdd49,	// (0x0005bb3f) main_cset_text_pane_t7_copy1

0x68b1,	// (0x000546a7) main_cset_text2_pane_t1_copy1

0x9868,	// (0x0005765e) main_ncimui_pane

0x39d9,	// (0x000517cf) popup_query_ncimui_window_ParamLimits

0x39d9,	// (0x000517cf) popup_query_ncimui_window

0x3f66,	// (0x00051d5c) field_cale_ev2_pane_g4_ParamLimits

0x3f66,	// (0x00051d5c) field_cale_ev2_pane_g4

0x4ccd,	// (0x00052ac3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4ccd,	// (0x00052ac3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0005d5ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0005d5ce) cell_video_dialer_keypad_pane_g

0x4ce5,	// (0x00052adb) cell_video_dialer_keypad_pane_t1

0x97fb,	// (0x000575f1) bg_popup_window_pane_cp012

0xc584,	// (0x0005a37a) heading_pane_cp06

0xdd75,	// (0x0005bb6b) ncim_query_content_pane

0x97fb,	// (0x000575f1) bg_popup_heading_pane_cp01

0xdd7d,	// (0x0005bb73) ncim_heading_pane_t1

0xdd8b,	// (0x0005bb81) ncim_indicator_popup_pane

0xdd9d,	// (0x0005bb93) ncim_query_button_pane

0xddb3,	// (0x0005bba9) ncim_query_content_pane_t1

0xddc5,	// (0x0005bbbb) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0005d92e) ncim_query_content_pane_t

0xddff,	// (0x0005bbf5) ncim_query_list_pane

0xde11,	// (0x0005bc07) ncim_query_popup_pane

0xdd8b,	// (0x0005bb81) ncim_indicator_popup_pane_ParamLimits

0x6c39,	// (0x00054a2f) ncim_query_content_pane_g1_ParamLimits

0x6c39,	// (0x00054a2f) ncim_query_content_pane_g1

0xddb3,	// (0x0005bba9) ncim_query_content_pane_t1_ParamLimits

0xddc5,	// (0x0005bbbb) ncim_query_content_pane_t2_ParamLimits

0x6c45,	// (0x00054a3b) ncim_query_content_pane_t3_ParamLimits

0x6c45,	// (0x00054a3b) ncim_query_content_pane_t3

0x6c6d,	// (0x00054a63) ncim_query_content_pane_t4_ParamLimits

0x6c6d,	// (0x00054a63) ncim_query_content_pane_t4

0x6c95,	// (0x00054a8b) ncim_query_content_pane_t5_ParamLimits

0x6c95,	// (0x00054a8b) ncim_query_content_pane_t5

0xddd7,	// (0x0005bbcd) ncim_query_content_pane_t6_ParamLimits

0xddd7,	// (0x0005bbcd) ncim_query_content_pane_t6

0xfb38,	// (0x0005d92e) ncim_query_content_pane_t_ParamLimits

0xddff,	// (0x0005bbf5) ncim_query_list_pane_ParamLimits

0xde11,	// (0x0005bc07) ncim_query_popup_pane_ParamLimits

0xde25,	// (0x0005bc1b) wait_bar_pane_cp04

0x97fb,	// (0x000575f1) input_focus_pane_cp011

0xde2d,	// (0x0005bc23) ncim_query_popup_pane_t1

0xde3b,	// (0x0005bc31) ncim_list_query_list_pane_ParamLimits

0xde3b,	// (0x0005bc31) ncim_list_query_list_pane

0x97fb,	// (0x000575f1) bg_button_pane_cp027

0xde4e,	// (0x0005bc44) ncim_query_button_pane_g1

0x97fb,	// (0x000575f1) list_highlight_pane_cp012

0xde58,	// (0x0005bc4e) ncim_list_query_list_pane_g1

0xde60,	// (0x0005bc56) ncim_list_query_list_pane_t1

0xa6ee,	// (0x000584e4) cam4_indicators_pane_g3_ParamLimits

0xa6ee,	// (0x000584e4) cam4_indicators_pane_g3

0xa771,	// (0x00058567) vid4_indicators_pane_g5_ParamLimits

0xa771,	// (0x00058567) vid4_indicators_pane_g5

0xa828,	// (0x0005861e) vid4_progress_pane_g5_ParamLimits

0xa828,	// (0x0005861e) vid4_progress_pane_g5

0x6b24,	// (0x0005491a) main_ncimui_pane_g1

0x6b8d,	// (0x00054983) ncimui_group_query_pane_ParamLimits

0x6b8d,	// (0x00054983) ncimui_group_query_pane

0x6bd5,	// (0x000549cb) ncimui_list_pane_ParamLimits

0x6bd5,	// (0x000549cb) ncimui_list_pane

0x6bfc,	// (0x000549f2) ncimui_text_pane_ParamLimits

0x6bfc,	// (0x000549f2) ncimui_text_pane

0x6cbd,	// (0x00054ab3) ncimui_text_pane_t1_ParamLimits

0x6cbd,	// (0x00054ab3) ncimui_text_pane_t1

0xde6e,	// (0x0005bc64) ncimui_list_single_graphic_pane_ParamLimits

0xde6e,	// (0x0005bc64) ncimui_list_single_graphic_pane

0x6cdb,	// (0x00054ad1) ncimui_query_pane_ParamLimits

0x6cdb,	// (0x00054ad1) ncimui_query_pane

0x97fb,	// (0x000575f1) list_highlight_pane_cp013

0xde7e,	// (0x0005bc74) ncim_list_query_list_pane_t1_copy1

0xde58,	// (0x0005bc4e) ncim_list_single_graphic_pane_g1

0x6cee,	// (0x00054ae4) ncim_query_button_pane_cp01

0x6cfa,	// (0x00054af0) ncim_query_entry_pane_ParamLimits

0x6cfa,	// (0x00054af0) ncim_query_entry_pane

0x6d0d,	// (0x00054b03) ncimui_query_pane_g1

0x6d19,	// (0x00054b0f) ncimui_query_pane_t1_ParamLimits

0x6d19,	// (0x00054b0f) ncimui_query_pane_t1

0x9868,	// (0x0005765e) input_focus_pane_cp012

0xde8c,	// (0x0005bc82) ncim_query_entry_pane_t1

0xa028,	// (0x00057e1e) main_im_pane_ParamLimits

0x9868,	// (0x0005765e) main_mobtv_pane_ParamLimits

0x9868,	// (0x0005765e) main_mobtv_pane

0x69b8,	// (0x000547ae) main_cset6_slider_pane_g18_ParamLimits

0x69b8,	// (0x000547ae) main_cset6_slider_pane_g18

0x69c4,	// (0x000547ba) main_cset6_slider_pane_g19_ParamLimits

0x69c4,	// (0x000547ba) main_cset6_slider_pane_g19

0x9fb0,	// (0x00057da6) bg_main_mobtv_pane_ParamLimits

0x9fb0,	// (0x00057da6) bg_main_mobtv_pane

0x6d32,	// (0x00054b28) main_mobtv_info_pane

0x6d3d,	// (0x00054b33) main_mobtv_loading_pane_ParamLimits

0x6d3d,	// (0x00054b33) main_mobtv_loading_pane

0xde9e,	// (0x0005bc94) main_mobtv_pg_channel_list_pane

0xdea8,	// (0x0005bc9e) main_mobtv_pg_hdr_pane

0x6d4a,	// (0x00054b40) main_mobtv_programe_curr_pane_ParamLimits

0x6d4a,	// (0x00054b40) main_mobtv_programe_curr_pane

0x6d57,	// (0x00054b4d) main_mobtv_programe_next_pane_ParamLimits

0x6d57,	// (0x00054b4d) main_mobtv_programe_next_pane

0xdeb1,	// (0x0005bca7) popup_mobtv_noti_window

0xa99c,	// (0x00058792) main_tv_pg_hdr_pane_g1

0xdebb,	// (0x0005bcb1) main_tv_pg_hdr_pane_g2

0xdec3,	// (0x0005bcb9) main_tv_pg_hdr_pane_g3

0xdecb,	// (0x0005bcc1) main_tv_pg_hdr_pane_g4

0xded3,	// (0x0005bcc9) main_tv_pg_hdr_pane_g5

0xdedd,	// (0x0005bcd3) main_tv_pg_hdr_pane_g6

0xdee7,	// (0x0005bcdd) main_tv_pg_hdr_pane_g7

0xdef1,	// (0x0005bce7) main_tv_pg_hdr_pane_g8

0xdefb,	// (0x0005bcf1) main_tv_pg_hdr_pane_g9

0xdf05,	// (0x0005bcfb) main_tv_pg_hdr_pane_g10

0xdf0f,	// (0x0005bd05) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0005d93b) main_tv_pg_hdr_pane_g

0xdf19,	// (0x0005bd0f) main_tv_pg_hdr_pane_t1

0xdf27,	// (0x0005bd1d) main_tv_pg_hdr_pane_t2

0xdf35,	// (0x0005bd2b) main_tv_pg_hdr_pane_t3

0xdf45,	// (0x0005bd3b) main_tv_pg_hdr_pane_t4

0xdf55,	// (0x0005bd4b) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0005d952) main_tv_pg_hdr_pane_t

0xdf65,	// (0x0005bd5b) single_mobtv_pg_channel_pane_ParamLimits

0xdf65,	// (0x0005bd5b) single_mobtv_pg_channel_pane

0xdf77,	// (0x0005bd6d) single_mobtv_pg_channel_table_pane

0xdf80,	// (0x0005bd76) single_mobtv_pg_channel_thumb_pane

0xdf89,	// (0x0005bd7f) single_tv_pg_channel_pane_g1

0xdf92,	// (0x0005bd88) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0005d95d) single_tv_pg_channel_pane_g

0x9f94,	// (0x00057d8a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9f94,	// (0x00057d8a) bg_single_mobtv_pg_channel_thumb_pane

0xdf9b,	// (0x0005bd91) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9b,	// (0x0005bd91) single_mobtv_pg_channel_thumb_pane_g1

0xdfa9,	// (0x0005bd9f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa9,	// (0x0005bd9f) single_mobtv_pg_channel_thumb_pane_g2

0xdfb5,	// (0x0005bdab) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb5,	// (0x0005bdab) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0005d962) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0005d962) single_mobtv_pg_channel_thumb_pane_g

0xdfc1,	// (0x0005bdb7) single_mobtv_pg_channel_thumb_pane_t1

0xdfcf,	// (0x0005bdc5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0005d969) single_mobtv_pg_channel_thumb_pane_t

0xa99c,	// (0x00058792) bg_single_mobtv_pg_channel_table_pane_g1

0xa99c,	// (0x00058792) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0005d18e) bg_single_mobtv_pg_channel_table_pane_g

0xdfdd,	// (0x0005bdd3) single_mobtv_pg_channel_table_pane_t1

0xdfeb,	// (0x0005bde1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0005d96e) single_mobtv_pg_channel_table_pane_t

0x6d6c,	// (0x00054b62) main_mobtv_info_pane_g1_ParamLimits

0x6d6c,	// (0x00054b62) main_mobtv_info_pane_g1

0x6d8a,	// (0x00054b80) main_mobtv_info_pane_t1_ParamLimits

0x6d8a,	// (0x00054b80) main_mobtv_info_pane_t1

0x6e02,	// (0x00054bf8) main_mobtv_info_pane_t2_ParamLimits

0x6e02,	// (0x00054bf8) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0005d978) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0005d978) main_mobtv_info_pane_t

0x6e93,	// (0x00054c89) wait_bar_pane_cp05

0x6ea5,	// (0x00054c9b) main_mobtv_loading_pane_g1_ParamLimits

0x6ea5,	// (0x00054c9b) main_mobtv_loading_pane_g1

0x6eb6,	// (0x00054cac) main_mobtv_loading_pane_g2_ParamLimits

0x6eb6,	// (0x00054cac) main_mobtv_loading_pane_g2

0x6ec2,	// (0x00054cb8) main_mobtv_loading_pane_g3_ParamLimits

0x6ec2,	// (0x00054cb8) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0005d97f) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0005d97f) main_mobtv_loading_pane_g

0xdff9,	// (0x0005bdef) main_mobtv_loading_pane_t1_ParamLimits

0xdff9,	// (0x0005bdef) main_mobtv_loading_pane_t1

0xe011,	// (0x0005be07) main_mobtv_loading_pane_t2_ParamLimits

0xe011,	// (0x0005be07) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0005d986) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0005d986) main_mobtv_loading_pane_t

0x6ed5,	// (0x00054ccb) wait_bar_pane_cp06_ParamLimits

0x6ed5,	// (0x00054ccb) wait_bar_pane_cp06

0xe035,	// (0x0005be2b) main_mobtv_programe_curr_pane_t1

0xe043,	// (0x0005be39) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0005d98b) main_mobtv_programe_curr_pane_t

0xe051,	// (0x0005be47) main_mobtv_programe_next_pane_t1

0xe05f,	// (0x0005be55) main_mobtv_programe_next_pane_t2

0xe06d,	// (0x0005be63) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0005d990) main_mobtv_programe_next_pane_t

0x97fb,	// (0x000575f1) bg_popup_mobtv_noti_window_pane

0xe07b,	// (0x0005be71) popup_mobtv_noti_window_g1

0xe083,	// (0x0005be79) popup_mobtv_noti_window_t1

0xe091,	// (0x0005be87) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0005d997) popup_mobtv_noti_window_t

0xa99c,	// (0x00058792) bg_popup_mobtv_noti_window_pane_g1

0x97fb,	// (0x000575f1) sc_clock_pane

0x97fb,	// (0x000575f1) main_fs_bigclock_pane

0x661f,	// (0x00054415) blid2_tripm_pane_t4_ParamLimits

0x661f,	// (0x00054415) blid2_tripm_pane_t4

0x6ee4,	// (0x00054cda) sc_clock_pane_g1_ParamLimits

0x6ee4,	// (0x00054cda) sc_clock_pane_g1

0x6ef6,	// (0x00054cec) sc_clock_pane_t1_ParamLimits

0x6ef6,	// (0x00054cec) sc_clock_pane_t1

0x6f1a,	// (0x00054d10) sc_clock_pane_t2_ParamLimits

0x6f1a,	// (0x00054d10) sc_clock_pane_t2

0x6f32,	// (0x00054d28) sc_clock_pane_t3_ParamLimits

0x6f32,	// (0x00054d28) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0005d99c) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0005d99c) sc_clock_pane_t

0x7da7,	// (0x00055b9d) main_fs_bigclock_indicator_pane_ParamLimits

0x7da7,	// (0x00055b9d) main_fs_bigclock_indicator_pane

0x6ff8,	// (0x00054dee) main_fs_bigclock_pane_g1_ParamLimits

0x6ff8,	// (0x00054dee) main_fs_bigclock_pane_g1

0x7db3,	// (0x00055ba9) main_fs_bigclock_pane_t1_ParamLimits

0x7db3,	// (0x00055ba9) main_fs_bigclock_pane_t1

0x7dc5,	// (0x00055bbb) main_fs_bigclock_pane_t2_ParamLimits

0x7dc5,	// (0x00055bbb) main_fs_bigclock_pane_t2

0x7dd9,	// (0x00055bcf) main_fs_bigclock_pane_t3_ParamLimits

0x7dd9,	// (0x00055bcf) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0005db2d) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0005db2d) main_fs_bigclock_pane_t

0xe779,	// (0x0005c56f) main_fs_bigclock_indicator_pane_g1

0xdda5,	// (0x0005bb9b) ncim_query_content_pane_g2_ParamLimits

0xdda5,	// (0x0005bb9b) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0005d929) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0005d929) ncim_query_content_pane_g

0x6f49,	// (0x00054d3f) sc_clock_pane_t4_ParamLimits

0x6f49,	// (0x00054d3f) sc_clock_pane_t4

0x9868,	// (0x0005765e) main_radioblah_pane

0xa661,	// (0x00058457) cell_call4_button_pane_t1_copy1_ParamLimits

0xa661,	// (0x00058457) cell_call4_button_pane_t1_copy1

0x6b3c,	// (0x00054932) main_ncimui_pane_t1_ParamLimits

0x6b3c,	// (0x00054932) main_ncimui_pane_t1

0x6b56,	// (0x0005494c) main_ncimui_pane_t2_ParamLimits

0x6b56,	// (0x0005494c) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0005d922) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0005d922) main_ncimui_pane_t

0xe09f,	// (0x0005be95) main_radioblah_anim_pane_ParamLimits

0xe09f,	// (0x0005be95) main_radioblah_anim_pane

0xe0b0,	// (0x0005bea6) main_radioblah_info_pane_ParamLimits

0xe0b0,	// (0x0005bea6) main_radioblah_info_pane

0xe0c4,	// (0x0005beba) main_radioblah_pane_t1_ParamLimits

0xe0c4,	// (0x0005beba) main_radioblah_pane_t1

0xe0e0,	// (0x0005bed6) main_radioblah_pane_t2_ParamLimits

0xe0e0,	// (0x0005bed6) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0005d9bd) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0005d9bd) main_radioblah_pane_t

0x71a1,	// (0x00054f97) main_radioblah_rocker_ctrl_pane_ParamLimits

0x71a1,	// (0x00054f97) main_radioblah_rocker_ctrl_pane

0xe128,	// (0x0005bf1e) main_radioblah_info_pane_t1_ParamLimits

0xe128,	// (0x0005bf1e) main_radioblah_info_pane_t1

0x71f9,	// (0x00054fef) main_radioblah_info_pane_t2_ParamLimits

0x71f9,	// (0x00054fef) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0005d9c6) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0005d9c6) main_radioblah_info_pane_t

0xa99c,	// (0x00058792) main_radioblah_rocker_ctrl_pane_g1

0x72a9,	// (0x0005509f) main_radioblah_rocker_ctrl_pane_g2

0x72b1,	// (0x000550a7) main_radioblah_rocker_ctrl_pane_g3

0x72b9,	// (0x000550af) main_radioblah_rocker_ctrl_pane_g4

0x72c1,	// (0x000550b7) main_radioblah_rocker_ctrl_pane_g5

0x72c9,	// (0x000550bf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0005d9cf) main_radioblah_rocker_ctrl_pane_g

0x68b1,	// (0x000546a7) main_cset_text2_pane_t1_copy1_ParamLimits

0xa6bf,	// (0x000584b5) cam4_image_uncrop_qvga_pane

0xa714,	// (0x0005850a) vid4_image_uncrop_qcif_pane

0xa865,	// (0x0005865b) cam6_image_uncrop_qvga_pane_ParamLimits

0xa865,	// (0x0005865b) cam6_image_uncrop_qvga_pane

0xda64,	// (0x0005b85a) vid6_image_uncrop_qcif_pane_ParamLimits

0xda64,	// (0x0005b85a) vid6_image_uncrop_qcif_pane

0x97fb,	// (0x000575f1) bg_popup_preview_window_pane_cp03

0xdd57,	// (0x0005bb4d) list_cset_text2_pane

0xdd5f,	// (0x0005bb55) main_cset6_text2_pane_g1

0xdd67,	// (0x0005bb5d) main_cset6_text2_pane_t1

0xe162,	// (0x0005bf58) list_cset_text2_pane_t1_ParamLimits

0xe162,	// (0x0005bf58) list_cset_text2_pane_t1

0x9868,	// (0x0005765e) main_radioblah_pane_ParamLimits

0x6e7f,	// (0x00054c75) main_mobtv_info_pane_t3_ParamLimits

0x6e7f,	// (0x00054c75) main_mobtv_info_pane_t3

0x718f,	// (0x00054f85) main_radioblah_pane_g1

0x71c9,	// (0x00054fbf) main_radioblah_info_pane_g1

0x724e,	// (0x00055044) main_radioblah_info_pane_t3_ParamLimits

0x724e,	// (0x00055044) main_radioblah_info_pane_t3

0x252a,	// (0x00050320) highlight_cell_cale_month_pane_ParamLimits

0x252a,	// (0x00050320) highlight_cell_cale_month_pane

0x97fb,	// (0x000575f1) main_phob_fisheye_pane

0xcd41,	// (0x0005ab37) scroll_pane_cp0031_ParamLimits

0xcd41,	// (0x0005ab37) scroll_pane_cp0031

0xdb76,	// (0x0005b96c) wait_bar_pane_cp08_ParamLimits

0x693a,	// (0x00054730) cset_list_set_pane_copy1_ParamLimits

0xe17c,	// (0x0005bf72) highlight_cell_cale_month_pane_g1

0x72d1,	// (0x000550c7) highlight_cell_cale_month_pane_t1

0xd7cd,	// (0x0005b5c3) list_gen_pane_cp01

0xd430,	// (0x0005b226) scroll_pane_01

0x72df,	// (0x000550d5) list_single_double_fisheye_pane

0x01dc,	// (0x0004dfd2) list_double_fisheye_pane_g1_ParamLimits

0x01dc,	// (0x0004dfd2) list_double_fisheye_pane_g1

0x01e8,	// (0x0004dfde) list_double_fisheye_pane_g2_ParamLimits

0x01e8,	// (0x0004dfde) list_double_fisheye_pane_g2

0x72e8,	// (0x000550de) list_double_fisheye_pane_g3_ParamLimits

0x72e8,	// (0x000550de) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0005d9dc) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0005d9dc) list_double_fisheye_pane_g

0x0219,	// (0x0004e00f) list_double_fisheye_pane_t1_ParamLimits

0x0219,	// (0x0004e00f) list_double_fisheye_pane_t1

0x0234,	// (0x0004e02a) list_double_fisheye_pane_t2_ParamLimits

0x0234,	// (0x0004e02a) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0005d9e7) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0005d9e7) list_double_fisheye_pane_t

0x97fb,	// (0x000575f1) main_call5_pane

0x6f74,	// (0x00054d6a) sc_swipe_pane_ParamLimits

0x6f74,	// (0x00054d6a) sc_swipe_pane

0x7307,	// (0x000550fd) call5_image_pane_ParamLimits

0x7307,	// (0x000550fd) call5_image_pane

0x7324,	// (0x0005511a) call5_swipe_1_pane_ParamLimits

0x7324,	// (0x0005511a) call5_swipe_1_pane

0x7337,	// (0x0005512d) call5_swipe_2_pane_ParamLimits

0x7337,	// (0x0005512d) call5_swipe_2_pane

0x7362,	// (0x00055158) popup_call5_audio_first_window_ParamLimits

0x7362,	// (0x00055158) popup_call5_audio_first_window

0x9f94,	// (0x00057d8a) call5_swipe_1_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) call5_swipe_1_pane_g1

0xe184,	// (0x0005bf7a) call5_swipe_1_pane_g2_ParamLimits

0xe184,	// (0x0005bf7a) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0005d9ec) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0005d9ec) call5_swipe_1_pane_g

0xe190,	// (0x0005bf86) call5_swipe_1_pane_t1_ParamLimits

0xe190,	// (0x0005bf86) call5_swipe_1_pane_t1

0x9f94,	// (0x00057d8a) call5_swipe_2_pane_g1_ParamLimits

0x9f94,	// (0x00057d8a) call5_swipe_2_pane_g1

0xe1a5,	// (0x0005bf9b) call5_swipe_2_pane_g2_ParamLimits

0xe1a5,	// (0x0005bf9b) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0005d9f1) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0005d9f1) call5_swipe_2_pane_g

0xe1b1,	// (0x0005bfa7) call5_swipe_2_pane_t1_ParamLimits

0xe1b1,	// (0x0005bfa7) call5_swipe_2_pane_t1

0xe1c6,	// (0x0005bfbc) sc_swipe_pane_g1_ParamLimits

0xe1c6,	// (0x0005bfbc) sc_swipe_pane_g1

0xe1d3,	// (0x0005bfc9) sc_swipe_pane_g2_ParamLimits

0xe1d3,	// (0x0005bfc9) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0005d9f6) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0005d9f6) sc_swipe_pane_g

0xe1df,	// (0x0005bfd5) sc_swipe_pane_t1_ParamLimits

0xe1df,	// (0x0005bfd5) sc_swipe_pane_t1

0x97fb,	// (0x000575f1) main_cmail_launcher_pane

0x7377,	// (0x0005516d) aid_size_cell_cmail_l_ParamLimits

0x7377,	// (0x0005516d) aid_size_cell_cmail_l

0x738c,	// (0x00055182) grid_cmail_l_pane_ParamLimits

0x738c,	// (0x00055182) grid_cmail_l_pane

0x73a6,	// (0x0005519c) cell_cmail_l_pane_ParamLimits

0x73a6,	// (0x0005519c) cell_cmail_l_pane

0x73c7,	// (0x000551bd) cell_cmail_l_pane_g1_ParamLimits

0x73c7,	// (0x000551bd) cell_cmail_l_pane_g1

0x73d3,	// (0x000551c9) cell_cmail_l_pane_t1_ParamLimits

0x73d3,	// (0x000551c9) cell_cmail_l_pane_t1

0x73e9,	// (0x000551df) cell_cmail_l_pane_t2_ParamLimits

0x73e9,	// (0x000551df) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0005d9fb) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0005d9fb) cell_cmail_l_pane_t

0x9868,	// (0x0005765e) grid_highlight_pane_cp018_ParamLimits

0x9868,	// (0x0005765e) grid_highlight_pane_cp018

0x07ff,	// (0x0004e5f5) main2_pane_ParamLimits

0x07ff,	// (0x0004e5f5) main2_pane

0xa0db,	// (0x00057ed1) popup_sp_fs_action_menu_bg_pane_g1

0xa0e3,	// (0x00057ed9) popup_sp_fs_action_menu_bg_pane_g2

0xa0eb,	// (0x00057ee1) popup_sp_fs_action_menu_bg_pane_g3

0xa0f3,	// (0x00057ee9) popup_sp_fs_action_menu_bg_pane_g4

0xa0fb,	// (0x00057ef1) popup_sp_fs_action_menu_bg_pane_g5

0xa103,	// (0x00057ef9) popup_sp_fs_action_menu_bg_pane_g6

0xa10b,	// (0x00057f01) popup_sp_fs_action_menu_bg_pane_g7

0xa113,	// (0x00057f09) popup_sp_fs_action_menu_bg_pane_g8

0xa11b,	// (0x00057f11) popup_sp_fs_action_menu_bg_pane_g9

0xa123,	// (0x00057f19) popup_sp_fs_action_menu_bg_pane_g10

0xa123,	// (0x00057f19) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0005cefb) popup_sp_fs_action_menu_bg_pane_g

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g2

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005cfa9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005cfa9) list_medium_line_x2_t3_g3_g

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t2

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g3_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t3_g2_g

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t2

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g2_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g2

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g3

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t4_g4_g

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t2

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t3

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005cfc5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005cfc5) list_medium_line_x2_t4_g4_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g2

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g3

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t2_g4_g

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g4_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g4_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g2

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005cfa9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005cfa9) list_medium_line_x2_t2_g3_g

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g3_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g3_t

0x2681,	// (0x00050477) main_sp_fs_list_pane_ParamLimits

0x2681,	// (0x00050477) main_sp_fs_list_pane

0xcb4b,	// (0x0005a941) sp_fs_scroll_pane_ParamLimits

0xcb4b,	// (0x0005a941) sp_fs_scroll_pane

0xaefa,	// (0x00058cf0) list_medium_line_x2_t3_t1

0xaefa,	// (0x00058cf0) list_medium_line_x2_t3_t2

0xaefa,	// (0x00058cf0) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0005d072) list_medium_line_x2_t3_t

0xaefa,	// (0x00058cf0) list_medium_line_x3_t4_t1

0xaefa,	// (0x00058cf0) list_medium_line_x3_t4_t2

0xaefa,	// (0x00058cf0) list_medium_line_x3_t4_t3

0xaefa,	// (0x00058cf0) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0005d079) list_medium_line_x3_t4_t

0xaefa,	// (0x00058cf0) list_medium_line_x4_t5_t1

0xaefa,	// (0x00058cf0) list_medium_line_x4_t5_t2

0xaefa,	// (0x00058cf0) list_medium_line_x4_t5_t3

0xaefa,	// (0x00058cf0) list_medium_line_x4_t5_t4

0xaefa,	// (0x00058cf0) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0005d082) list_medium_line_x4_t5_t

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g1

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g2

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g3

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005cfbc) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005cfbc) list_medium_line_t4_g4_g

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t1

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t2

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t3

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t4_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005cfc5) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005cfc5) list_medium_line_t4_g4_t

0x272f,	// (0x00050525) chi_dic_find_pane_g1

0x375f,	// (0x00051555) main_tport_pane

0xaefa,	// (0x00058cf0) list_medium_line_plain_t1

0x9f94,	// (0x00057d8a) list_medium_line_t2_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_t2_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_t2_g2_g

0xa96e,	// (0x00058764) list_medium_line_t2_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_g2_t1

0xa96e,	// (0x00058764) list_medium_line_t2_g2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_t2_g2_t

0x6413,	// (0x00054209) aid_sp_fs_list_icon_a_sm

0x641b,	// (0x00054211) aid_sp_fs_list_icon_d

0x6423,	// (0x00054219) aid_sp_fs_text_primary

0xdc94,	// (0x0005ba8a) aid_sp_fs_text_secondary

0x97fb,	// (0x000575f1) list_medium_line

0x97fb,	// (0x000575f1) list_medium_line_g2

0x97fb,	// (0x000575f1) list_medium_line_g3

0x97fb,	// (0x000575f1) list_medium_line_plain

0x97fb,	// (0x000575f1) list_medium_line_plain_t2

0x97fb,	// (0x000575f1) list_medium_line_plain_t3

0x97fb,	// (0x000575f1) list_medium_line_right_icon

0x97fb,	// (0x000575f1) list_medium_line_right_iconx2

0x97fb,	// (0x000575f1) list_medium_line_t2

0x97fb,	// (0x000575f1) list_medium_line_t2_g2

0x97fb,	// (0x000575f1) list_medium_line_t2_g3

0x97fb,	// (0x000575f1) list_medium_line_t2_right_icon

0x97fb,	// (0x000575f1) list_medium_line_t2_right_iconx2

0x97fb,	// (0x000575f1) list_medium_line_t3

0x97fb,	// (0x000575f1) list_medium_line_t3_g2

0x97fb,	// (0x000575f1) list_medium_line_t3_g3

0x97fb,	// (0x000575f1) list_medium_line_t3_right_iconx2

0x97fb,	// (0x000575f1) list_medium_line_t4_g4

0x97fb,	// (0x000575f1) list_medium_line_x2

0x97fb,	// (0x000575f1) list_medium_line_x2_t2_g2

0x97fb,	// (0x000575f1) list_medium_line_x2_t2_g3

0x97fb,	// (0x000575f1) list_medium_line_x2_t2_g4

0x97fb,	// (0x000575f1) list_medium_line_x2_t3

0x97fb,	// (0x000575f1) list_medium_line_x2_t3_g2

0x97fb,	// (0x000575f1) list_medium_line_x2_t3_g3

0x97fb,	// (0x000575f1) list_medium_line_x2_t3_g4

0x97fb,	// (0x000575f1) list_medium_line_x2_t4_g2

0x97fb,	// (0x000575f1) list_medium_line_x2_t4_g4

0x97fb,	// (0x000575f1) list_medium_line_x3

0x97fb,	// (0x000575f1) list_medium_line_x3_t4

0x97fb,	// (0x000575f1) list_medium_line_x3_t4_g4

0x97fb,	// (0x000575f1) list_medium_line_x4_t4

0x97fb,	// (0x000575f1) list_medium_line_x4_t4_g7

0x97fb,	// (0x000575f1) list_medium_line_x4_t5

0x017f,	// (0x0004df75) list_single_fs_dyc_pane_ParamLimits

0x017f,	// (0x0004df75) list_single_fs_dyc_pane

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g1

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g2

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g3

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g4

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g5

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x4_t4_g7_g6

0x9fa2,	// (0x00057d98) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9fa2,	// (0x00057d98) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0005d903) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0005d903) list_medium_line_x4_t4_g7_g

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t1

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t2

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x4_t4_g7_t3

0xb39c,	// (0x00059192) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb39c,	// (0x00059192) list_medium_line_x4_t4_g7_t4

0xb39c,	// (0x00059192) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb39c,	// (0x00059192) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0005d912) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0005d912) list_medium_line_x4_t4_g7_t

0x01bf,	// (0x0004dfb5) list_single_dyc_row_pane_ParamLimits

0x01bf,	// (0x0004dfb5) list_single_dyc_row_pane

0x72f4,	// (0x000550ea) call5_gesture_pane_ParamLimits

0x72f4,	// (0x000550ea) call5_gesture_pane

0x734a,	// (0x00055140) call5_windows_pane_ParamLimits

0x734a,	// (0x00055140) call5_windows_pane

0x7406,	// (0x000551fc) call5_swipe_1_pane_cp_ParamLimits

0x7406,	// (0x000551fc) call5_swipe_1_pane_cp

0x7412,	// (0x00055208) call5_swipe_2_pane_cp_ParamLimits

0x7412,	// (0x00055208) call5_swipe_2_pane_cp

0xa966,	// (0x0005875c) call5_image_pane_cp

0x741e,	// (0x00055214) popup_call5_audio_first_window_cp_ParamLimits

0x741e,	// (0x00055214) popup_call5_audio_first_window_cp

0xe1c6,	// (0x0005bfbc) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0005bfbc) call5_swipe_1_pane_g1_cp

0xe1f4,	// (0x0005bfea) call5_swipe_1_pane_g2_cp

0xe1df,	// (0x0005bfd5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1df,	// (0x0005bfd5) call5_swipe_1_pane_t1_cp

0xe1c6,	// (0x0005bfbc) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0005bfbc) call5_swipe_2_pane_g1_cp

0xe1fc,	// (0x0005bff2) call5_swipe_2_pane_g2_cp

0xe204,	// (0x0005bffa) call5_swipe_2_pane_t1_cp_ParamLimits

0xe204,	// (0x0005bffa) call5_swipe_2_pane_t1_cp

0x9868,	// (0x0005765e) main_sp_fs_email_pane

0xdc8b,	// (0x0005ba81) main_sp_fs_listscroll_pane_te

0x0256,	// (0x0004e04c) popup_sp_fs_action_menu_pane_ParamLimits

0x0256,	// (0x0004e04c) popup_sp_fs_action_menu_pane

0xa99c,	// (0x00058792) bg_sp_fs_ctrlbar_pane_g1

0xe219,	// (0x0005c00f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe222,	// (0x0005c018) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe22b,	// (0x0005c021) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa99c,	// (0x00058792) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0005da00) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6f9,	// (0x0005a4ef) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6f9,	// (0x0005a4ef) bg_sp_fs_ctrlbar_ddmenu_pane

0xe234,	// (0x0005c02a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe234,	// (0x0005c02a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe240,	// (0x0005c036) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe240,	// (0x0005c036) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0005da09) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0005da09) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe24c,	// (0x0005c042) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe24c,	// (0x0005c042) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa99c,	// (0x00058792) list_medium_line_t2_right_icon_g1

0xaefa,	// (0x00058cf0) list_medium_line_t2_right_icon_t1

0xaefa,	// (0x00058cf0) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0005da0e) list_medium_line_t2_right_icon_t

0xb3b0,	// (0x000591a6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb3b0,	// (0x000591a6) bg_sp_fs_ctrlbar_pane

0x7479,	// (0x0005526f) main_sp_fs_ctrlbar_button_pane_cp01

0x7483,	// (0x00055279) main_sp_fs_ctrlbar_ddmenu_pane

0xe2a0,	// (0x0005c096) main_sp_fs_ctrlbar_pane_g1

0xe2ac,	// (0x0005c0a2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0005da13) main_sp_fs_ctrlbar_pane_g

0x74c1,	// (0x000552b7) main_sp_fs_ctrlbar_pane_t1

0x7500,	// (0x000552f6) main_sp_fs_ctrlbar_pane

0x7524,	// (0x0005531a) main_sp_fs_listscroll_pane_te_cp01

0x029c,	// (0x0004e092) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x029c,	// (0x0004e092) popup_sp_fs_action_menu_pane_cp01

0x9868,	// (0x0005765e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9868,	// (0x0005765e) bg_sp_fs_highlight_list_pane_cp01

0x7544,	// (0x0005533a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7544,	// (0x0005533a) sp_fs_action_menu_list_gene_pane_g1

0xe2d3,	// (0x0005c0c9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2d3,	// (0x0005c0c9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0005da21) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0005da21) sp_fs_action_menu_list_gene_pane_g

0x7553,	// (0x00055349) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7553,	// (0x00055349) sp_fs_action_menu_list_gene_pane_t1

0x756b,	// (0x00055361) sp_fs_action_menu_list_gene_pane_ParamLimits

0x756b,	// (0x00055361) sp_fs_action_menu_list_gene_pane

0xe2e0,	// (0x0005c0d6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2e0,	// (0x0005c0d6) popup_sp_fs_action_menu_bg_pane

0x758e,	// (0x00055384) sp_fs_action_menu_list_pane_ParamLimits

0x758e,	// (0x00055384) sp_fs_action_menu_list_pane

0x75b2,	// (0x000553a8) sp_fs_scroll_pane_cp01_ParamLimits

0x75b2,	// (0x000553a8) sp_fs_scroll_pane_cp01

0xaefa,	// (0x00058cf0) list_medium_line_plain_t2_t1

0xaefa,	// (0x00058cf0) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0005da0e) list_medium_line_plain_t2_t

0xaefa,	// (0x00058cf0) list_medium_line_plain_t3_t1

0xaefa,	// (0x00058cf0) list_medium_line_plain_t3_t2

0xaefa,	// (0x00058cf0) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0005d072) list_medium_line_plain_t3_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t2_g2_g

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g2_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_x2_t2_g2_t

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_t4_g2_g

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t2

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t3

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0005cfc5) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0005cfc5) list_medium_line_x2_t4_g2_t

0xa99c,	// (0x00058792) list_medium_line_t3_right_iconx2_g1

0xa99c,	// (0x00058792) list_medium_line_t3_right_iconx2_g2

0xa99c,	// (0x00058792) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0005d193) list_medium_line_t3_right_iconx2_g

0xaefa,	// (0x00058cf0) list_medium_line_t3_right_iconx2_t1

0xaefa,	// (0x00058cf0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0005da0e) list_medium_line_t3_right_iconx2_t

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g1

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g2

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g3

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0005cfbc) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0005cfbc) list_medium_line_x3_t4_g4_g

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t1

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t2

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t3

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0005cfc5) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0005cfc5) list_medium_line_x3_t4_g4_t

0x02c1,	// (0x0004e0b7) list_single_dyc_row_text_pane_t1_ParamLimits

0x02c1,	// (0x0004e0b7) list_single_dyc_row_text_pane_t1

0x030a,	// (0x0004e100) list_single_dyc_row_text_pane_t2_ParamLimits

0x030a,	// (0x0004e100) list_single_dyc_row_text_pane_t2

0x75d8,	// (0x000553ce) list_single_dyc_row_text_pane_t3_ParamLimits

0x75d8,	// (0x000553ce) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0005da26) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0005da26) list_single_dyc_row_text_pane_t

0x75fc,	// (0x000553f2) list_single_dyc_row_pane_g1_ParamLimits

0x75fc,	// (0x000553f2) list_single_dyc_row_pane_g1

0x7608,	// (0x000553fe) list_single_dyc_row_pane_g2_ParamLimits

0x7608,	// (0x000553fe) list_single_dyc_row_pane_g2

0x7614,	// (0x0005540a) list_single_dyc_row_pane_g3_ParamLimits

0x7614,	// (0x0005540a) list_single_dyc_row_pane_g3

0x7620,	// (0x00055416) list_single_dyc_row_pane_g4_ParamLimits

0x7620,	// (0x00055416) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0005da33) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0005da33) list_single_dyc_row_pane_g

0x762c,	// (0x00055422) list_single_dyc_row_text_pane_ParamLimits

0x762c,	// (0x00055422) list_single_dyc_row_text_pane

0x97fb,	// (0x000575f1) bg_sp_fs_scroll_pane

0xe2ee,	// (0x0005c0e4) thumb_sp_fs_scroll_pane

0x9f94,	// (0x00057d8a) list_medium_line_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g1

0xa96e,	// (0x00058764) list_medium_line_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t1

0x9f94,	// (0x00057d8a) list_medium_line_x2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_x2_g

0xa96e,	// (0x00058764) list_medium_line_x2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t1

0x9f94,	// (0x00057d8a) list_medium_line_x3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x3_g1

0xdc7d,	// (0x0005ba73) list_medium_line_x3_g2_ParamLimits

0xdc7d,	// (0x0005ba73) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0005da3c) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0005da3c) list_medium_line_x3_g

0xe2f7,	// (0x0005c0ed) list_medium_line_x3_t1_ParamLimits

0xe2f7,	// (0x0005c0ed) list_medium_line_x3_t1

0xe30b,	// (0x0005c101) thumb_sp_fs_scroll_pane_g1

0xe314,	// (0x0005c10a) thumb_sp_fs_scroll_pane_g2

0xe31d,	// (0x0005c113) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0005da41) thumb_sp_fs_scroll_pane_g

0xe30b,	// (0x0005c101) bg_sp_fs_scroll_pane_g1

0xe314,	// (0x0005c10a) bg_sp_fs_scroll_pane_g2

0xe31d,	// (0x0005c113) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0005da41) bg_sp_fs_scroll_pane_g

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g1

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g2

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g3

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0005cfbc) list_medium_line_x2_t3_g4_g

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t1

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t2

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_x2_t3_g4_t

0x9f94,	// (0x00057d8a) list_medium_line_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_g2_g

0xa96e,	// (0x00058764) list_medium_line_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_g2_t1

0x9f94,	// (0x00057d8a) list_medium_line_t3_g2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g2_g1

0x9f94,	// (0x00057d8a) list_medium_line_t3_g2_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0005cfb7) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0005cfb7) list_medium_line_t3_g2_g

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t1

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t2

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_g2_t

0xa99c,	// (0x00058792) list_medium_line_right_icon_g1

0xaefa,	// (0x00058cf0) list_medium_line_right_icon_t1

0x9f94,	// (0x00057d8a) list_medium_line_t2_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g1

0xa96e,	// (0x00058764) list_medium_line_t2_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_t1

0xa96e,	// (0x00058764) list_medium_line_t2_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_t2_t

0x9f94,	// (0x00057d8a) list_medium_line_t3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g1

0xa96e,	// (0x00058764) list_medium_line_t3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_t1

0xa96e,	// (0x00058764) list_medium_line_t3_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_t2

0xa96e,	// (0x00058764) list_medium_line_t3_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_t

0x9f94,	// (0x00057d8a) list_medium_line_g3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g3_g1

0x9f94,	// (0x00057d8a) list_medium_line_g3_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g3_g2

0x9f94,	// (0x00057d8a) list_medium_line_g3_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0005cfa9) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0005cfa9) list_medium_line_g3_g

0xa96e,	// (0x00058764) list_medium_line_g3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_g3_t1

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g1

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g2

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0005cfa9) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0005cfa9) list_medium_line_t2_g3_g

0xa96e,	// (0x00058764) list_medium_line_t2_g3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_g3_t1

0xa96e,	// (0x00058764) list_medium_line_t2_g3_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0005cf8c) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0005cf8c) list_medium_line_t2_g3_t

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g1_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g1

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g2_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g2

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g3_ParamLimits

0x9f94,	// (0x00057d8a) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0005cfa9) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0005cfa9) list_medium_line_t3_g3_g

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t1_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t1

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t2_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t2

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t3_ParamLimits

0xa96e,	// (0x00058764) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0005cfb0) list_medium_line_t3_g3_t

0xa99c,	// (0x00058792) list_medium_line_right_iconx2_g1

0xa99c,	// (0x00058792) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0005d18e) list_medium_line_right_iconx2_g

0xaefa,	// (0x00058cf0) list_medium_line_right_iconx2_t1

0xa99c,	// (0x00058792) list_medium_line_t2_right_iconx2_g1

0xa99c,	// (0x00058792) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0005d18e) list_medium_line_t2_right_iconx2_g

0xaefa,	// (0x00058cf0) list_medium_line_t2_right_iconx2_t1

0xaefa,	// (0x00058cf0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0005da0e) list_medium_line_t2_right_iconx2_t

0xaefa,	// (0x00058cf0) list_medium_line_x4_t4_t1

0xaefa,	// (0x00058cf0) list_medium_line_x4_t4_t2

0xaefa,	// (0x00058cf0) list_medium_line_x4_t4_t3

0xaefa,	// (0x00058cf0) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0005d079) list_medium_line_x4_t4_t

0x768f,	// (0x00055485) tport_appsw_pane_ParamLimits

0x768f,	// (0x00055485) tport_appsw_pane

0x76a7,	// (0x0005549d) tport_contact_pane_ParamLimits

0x76a7,	// (0x0005549d) tport_contact_pane

0x76c2,	// (0x000554b8) tport_listscroll_pane_ParamLimits

0x76c2,	// (0x000554b8) tport_listscroll_pane

0x76da,	// (0x000554d0) cell_tport_appsw_pane_ParamLimits

0x76da,	// (0x000554d0) cell_tport_appsw_pane

0xb37a,	// (0x00059170) tport_appsw_pane_g1_ParamLimits

0xb37a,	// (0x00059170) tport_appsw_pane_g1

0x7724,	// (0x0005551a) tport_contact_pane_g1

0x772d,	// (0x00055523) tport_contact_pane_t1

0x773b,	// (0x00055531) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0005da48) tport_contact_pane_t

0xe326,	// (0x0005c11c) list_tport_pane

0xe32f,	// (0x0005c125) scroll_pane_cp_030

0x7751,	// (0x00055547) cell_tport_appsw_pane_g1

0x7761,	// (0x00055557) cell_tport_appsw_pane_t1

0x776f,	// (0x00055565) grid_highlight_pane_cp019

0x7777,	// (0x0005556d) list_tport_double_graphic_pane_ParamLimits

0x7777,	// (0x0005556d) list_tport_double_graphic_pane

0x9868,	// (0x0005765e) list_highlight_pane_cp023_ParamLimits

0x9868,	// (0x0005765e) list_highlight_pane_cp023

0x7784,	// (0x0005557a) list_tport_double_graphic_pane_g1_ParamLimits

0x7784,	// (0x0005557a) list_tport_double_graphic_pane_g1

0x7791,	// (0x00055587) list_tport_double_graphic_pane_t1_ParamLimits

0x7791,	// (0x00055587) list_tport_double_graphic_pane_t1

0x77a6,	// (0x0005559c) list_tport_double_graphic_pane_t2_ParamLimits

0x77a6,	// (0x0005559c) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0005da54) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0005da54) list_tport_double_graphic_pane_t

0x97fb,	// (0x000575f1) main_cale_note_pane

0x563c,	// (0x00053432) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x563c,	// (0x00053432) cell_vitu2_function_top_wide_pane_cp01

0x6e93,	// (0x00054c89) wait_bar_pane_cp05_ParamLimits

0x9868,	// (0x0005765e) listscroll_cmail_pane

0xe340,	// (0x0005c136) list_cmail_pane

0x77b8,	// (0x000555ae) list_cmail_body_pane

0x77cf,	// (0x000555c5) list_single_cmail_header_caption_pane

0x77e9,	// (0x000555df) list_single_cmail_header_detail_pane_ParamLimits

0x77e9,	// (0x000555df) list_single_cmail_header_detail_pane

0xe357,	// (0x0005c14d) list_single_cmail_header_caption_pane_t1

0x043f,	// (0x0004e235) list_single_cmail_header_detail_pane_g1_ParamLimits

0x043f,	// (0x0004e235) list_single_cmail_header_detail_pane_g1

0x781c,	// (0x00055612) list_single_cmail_header_detail_pane_g2_ParamLimits

0x781c,	// (0x00055612) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0005da59) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0005da59) list_single_cmail_header_detail_pane_g

0x0457,	// (0x0004e24d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0457,	// (0x0004e24d) list_single_cmail_header_detail_pane_t1

0x0493,	// (0x0004e289) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0493,	// (0x0004e289) list_single_cmail_header_editor_pane_bg

0xdf92,	// (0x0005bd88) list_cmail_body_pane_g1

0xe37b,	// (0x0005c171) list_cmail_body_pane_t1

0xd300,	// (0x0005b0f6) list_single_cmail_header_editor_pane_bg_g1

0xabc0,	// (0x000589b6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd310,	// (0x0005b106) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd308,	// (0x0005b0fe) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd546,	// (0x0005b33c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd330,	// (0x0005b126) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd320,	// (0x0005b116) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd328,	// (0x0005b11e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba0,	// (0x00058996) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x784c,	// (0x00055642) calenote_gesture_pane_ParamLimits

0x784c,	// (0x00055642) calenote_gesture_pane

0x786c,	// (0x00055662) calenote_window_pane_ParamLimits

0x786c,	// (0x00055662) calenote_window_pane

0xe389,	// (0x0005c17f) popup_note_window_cp01

0x7888,	// (0x0005567e) calenote_swipe_1_pane_ParamLimits

0x7888,	// (0x0005567e) calenote_swipe_1_pane

0x7412,	// (0x00055208) calenote_swipe_2_pane_ParamLimits

0x7412,	// (0x00055208) calenote_swipe_2_pane

0xe1c6,	// (0x0005bfbc) calenote_swipe_1_pane_g1_ParamLimits

0xe1c6,	// (0x0005bfbc) calenote_swipe_1_pane_g1

0xe1d3,	// (0x0005bfc9) calenote_swipe_1_pane_g2_ParamLimits

0xe1d3,	// (0x0005bfc9) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0005d9f6) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0005d9f6) calenote_swipe_1_pane_g

0xe39b,	// (0x0005c191) calenote_swipe_1_pane_t1_ParamLimits

0xe39b,	// (0x0005c191) calenote_swipe_1_pane_t1

0xe1c6,	// (0x0005bfbc) calenote_swipe_2_pane_g1_ParamLimits

0xe1c6,	// (0x0005bfbc) calenote_swipe_2_pane_g1

0xe3ba,	// (0x0005c1b0) calenote_swipe_2_pane_g2_ParamLimits

0xe3ba,	// (0x0005c1b0) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0005da65) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0005da65) calenote_swipe_2_pane_g

0xe3c6,	// (0x0005c1bc) calenote_swipe_2_pane_t1_ParamLimits

0xe3c6,	// (0x0005c1bc) calenote_swipe_2_pane_t1

0x97fb,	// (0x000575f1) main_mup_navstr_pane

0x4493,	// (0x00052289) main_mup3_pane_t7_ParamLimits

0x4493,	// (0x00052289) main_mup3_pane_t7

0xa48d,	// (0x00058283) main_mp4_pane_g6_ParamLimits

0xa48d,	// (0x00058283) main_mp4_pane_g6

0xa64f,	// (0x00058445) main_image3_pane_t4_ParamLimits

0xa64f,	// (0x00058445) main_image3_pane_t4

0x789d,	// (0x00055693) popup_navstr_preview_pane_ParamLimits

0x789d,	// (0x00055693) popup_navstr_preview_pane

0x78ad,	// (0x000556a3) scroll_navstr_pane_ParamLimits

0x78ad,	// (0x000556a3) scroll_navstr_pane

0x97fb,	// (0x000575f1) bg_popup_preview_window_pane_cp04

0xe3ed,	// (0x0005c1e3) popup_navstr_preview_pane_t1

0x78c1,	// (0x000556b7) scroll_navstr_pane_g1_ParamLimits

0x78c1,	// (0x000556b7) scroll_navstr_pane_g1

0x78d5,	// (0x000556cb) scroll_navstr_pane_t1_ParamLimits

0x78d5,	// (0x000556cb) scroll_navstr_pane_t1

0xe392,	// (0x0005c188) bg_button_pane_cp014

0xe392,	// (0x0005c188) bg_button_pane_cp030

0x01fc,	// (0x0004dff2) list_double_fisheye_pane_g4_ParamLimits

0x01fc,	// (0x0004dff2) list_double_fisheye_pane_g4

0x0208,	// (0x0004dffe) list_double_fisheye_pane_g5_ParamLimits

0x0208,	// (0x0004dffe) list_double_fisheye_pane_g5

0xcb4b,	// (0x0005a941) sp_fs_scroll_pane_cp03

0xe2a0,	// (0x0005c096) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe2ac,	// (0x0005c0a2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0005da13) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x74c1,	// (0x000552b7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe34f,	// (0x0005c145) sp_fs_scroll_pane_cp02

0xa18e,	// (0x00057f84) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa18e,	// (0x00057f84) popup_sp_fs_calendar_preview_list_single_pane

0x97fb,	// (0x000575f1) main_cam6_pano_pane

0x9868,	// (0x0005765e) main_mup3_pane_ParamLimits

0x97fb,	// (0x000575f1) main_phacti_pane

0x6d64,	// (0x00054b5a) bg_button_pane_cp11

0x6d7e,	// (0x00054b74) main_mobtv_info_pane_g2_ParamLimits

0x6d7e,	// (0x00054b74) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0005d973) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0005d973) main_mobtv_info_pane_g

0x6f5b,	// (0x00054d51) sc_clock_pane_t5_ParamLimits

0x6f5b,	// (0x00054d51) sc_clock_pane_t5

0x718f,	// (0x00054f85) main_radioblah_pane_g1_ParamLimits

0xe0f8,	// (0x0005beee) main_radioblah_pane_t3_ParamLimits

0xe0f8,	// (0x0005beee) main_radioblah_pane_t3

0xe110,	// (0x0005bf06) main_radioblah_pane_t4_ParamLimits

0xe110,	// (0x0005bf06) main_radioblah_pane_t4

0x71b7,	// (0x00054fad) main_radioblah_text_pane_ParamLimits

0x71b7,	// (0x00054fad) main_radioblah_text_pane

0x71c9,	// (0x00054fbf) main_radioblah_info_pane_g1_ParamLimits

0x7262,	// (0x00055058) main_radioblah_info_pane_t4_ParamLimits

0x7262,	// (0x00055058) main_radioblah_info_pane_t4

0x9868,	// (0x0005765e) main_sp_fs_calendar_pane

0x78ec,	// (0x000556e2) main_phacti_pane_g1

0x78f4,	// (0x000556ea) phacti_note_pane_ParamLimits

0x78f4,	// (0x000556ea) phacti_note_pane

0xe404,	// (0x0005c1fa) phacti_term_pane_ParamLimits

0xe404,	// (0x0005c1fa) phacti_term_pane

0xe419,	// (0x0005c20f) phacti_note_pane_t1_ParamLimits

0xe419,	// (0x0005c20f) phacti_note_pane_t1

0x7908,	// (0x000556fe) phacti_term_pane_g1

0x7910,	// (0x00055706) phacti_term_pane_t1_ParamLimits

0x7910,	// (0x00055706) phacti_term_pane_t1

0xe430,	// (0x0005c226) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe438,	// (0x0005c22e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0005da6f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe440,	// (0x0005c236) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe440,	// (0x0005c236) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe456,	// (0x0005c24c) aid_popup_sp_fs_bg_corner_pane

0xa99c,	// (0x00058792) popup_sp_fs_calendar_preview_bg_pane_g1

0x97fb,	// (0x000575f1) popup_sp_fs_calendar_preview_bg_pane

0xe45e,	// (0x0005c254) popup_sp_fs_calendar_preview_list_pane

0xb3b0,	// (0x000591a6) bg_main_sp_fs_cale_pane_ParamLimits

0xb3b0,	// (0x000591a6) bg_main_sp_fs_cale_pane

0x79a4,	// (0x0005579a) listscroll_cale_mrui_pane_ParamLimits

0x79a4,	// (0x0005579a) listscroll_cale_mrui_pane

0x79b9,	// (0x000557af) listscroll_sp_fs_schedule_track_pane

0x79c2,	// (0x000557b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x79c2,	// (0x000557b8) main_sp_fs_ctrlbar_pane_cp01

0xe466,	// (0x0005c25c) main_sp_fs_ribbon_pane

0x79d5,	// (0x000557cb) popup_sp_fs_cale_preview_window

0x79e7,	// (0x000557dd) list_single_sp_fs_schedule_track_pane_ParamLimits

0x79e7,	// (0x000557dd) list_single_sp_fs_schedule_track_pane

0x9868,	// (0x0005765e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9868,	// (0x0005765e) bg_sp_fs_highlight_list_pane_cp03

0x79fa,	// (0x000557f0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x79fa,	// (0x000557f0) list_single_sp_fs_schedule_track_pane_g1

0x7a06,	// (0x000557fc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7a06,	// (0x000557fc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0005da74) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0005da74) list_single_sp_fs_schedule_track_pane_g

0x7a12,	// (0x00055808) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7a12,	// (0x00055808) list_single_sp_fs_schedule_track_pane_t1

0x7a34,	// (0x0005582a) sp_fs_schedule_track_pane_ParamLimits

0x7a34,	// (0x0005582a) sp_fs_schedule_track_pane

0xe46e,	// (0x0005c264) sp_fs_schedule_track_pane_g1

0xe476,	// (0x0005c26c) sp_fs_schedule_track_pane_g2

0xe47e,	// (0x0005c274) sp_fs_schedule_track_pane_g3

0xe486,	// (0x0005c27c) sp_fs_schedule_track_pane_g4

0xe48e,	// (0x0005c284) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0005da79) sp_fs_schedule_track_pane_g

0xd300,	// (0x0005b0f6) bg_sp_fs_schedule_viewer_highlight_g1

0xabc0,	// (0x000589b6) bg_sp_fs_schedule_viewer_highlight_g2

0xd308,	// (0x0005b0fe) bg_sp_fs_schedule_viewer_highlight_g3

0xd310,	// (0x0005b106) bg_sp_fs_schedule_viewer_highlight_g4

0xd546,	// (0x0005b33c) bg_sp_fs_schedule_viewer_highlight_g5

0xd320,	// (0x0005b116) bg_sp_fs_schedule_viewer_highlight_g6

0xd328,	// (0x0005b11e) bg_sp_fs_schedule_viewer_highlight_g7

0xd330,	// (0x0005b126) bg_sp_fs_schedule_viewer_highlight_g8

0xaba0,	// (0x00058996) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0005da84) bg_sp_fs_schedule_viewer_highlight_g

0x97fb,	// (0x000575f1) bg_main_sp_fs_ribbon_pane

0x7a49,	// (0x0005583f) main_sp_fs_ribbon_pane_g1

0xe496,	// (0x0005c28c) main_sp_fs_ribbon_pane_t1

0x7a52,	// (0x00055848) main_sp_fs_ribbon_pane_t2

0xe4a5,	// (0x0005c29b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0005da97) main_sp_fs_ribbon_pane_t

0xe4b4,	// (0x0005c2aa) main_sp_fs_ribbon_scheduler_pane

0xe4bc,	// (0x0005c2b2) bg_main_sp_fs_ribbon_pane_g1

0xe4c5,	// (0x0005c2bb) bg_main_sp_fs_ribbon_pane_g2

0xe4ce,	// (0x0005c2c4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0005da9e) bg_main_sp_fs_ribbon_pane_g

0xe4d6,	// (0x0005c2cc) main_sp_fs_ribbon_scheduler_pane_g1

0xe4df,	// (0x0005c2d5) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e8,	// (0x0005c2de) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0005daa5) main_sp_fs_ribbon_scheduler_pane_g

0xe4f1,	// (0x0005c2e7) list_cale_mrui_pane

0x7a61,	// (0x00055857) sp_fs_scroll_pane_cp07_ParamLimits

0x7a61,	// (0x00055857) sp_fs_scroll_pane_cp07

0x7a7d,	// (0x00055873) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7a7d,	// (0x00055873) bg_sp_fs_schedule_viewer_highlight

0xe4fe,	// (0x0005c2f4) list_single_sp_fs_schedule_track_pane_cp01

0xe506,	// (0x0005c2fc) list_sp_fs_schedule_track_pane

0xe50e,	// (0x0005c304) sp_fs_scroll_pane_cp06_ParamLimits

0xe50e,	// (0x0005c304) sp_fs_scroll_pane_cp06

0xa99c,	// (0x00058792) bgmain_sp_fs_calendar_pane_g1

0x04a6,	// (0x0004e29c) list_single_cale_mrui_pane_ParamLimits

0x04a6,	// (0x0004e29c) list_single_cale_mrui_pane

0x7a8f,	// (0x00055885) list_single_cale_mrui_row_pane_ParamLimits

0x7a8f,	// (0x00055885) list_single_cale_mrui_row_pane

0x7a9c,	// (0x00055892) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7a9c,	// (0x00055892) list_single_cale_mrui_row_pane_g1

0x7ad4,	// (0x000558ca) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7ad4,	// (0x000558ca) list_single_cale_mrui_row_pane_t1

0x04c9,	// (0x0004e2bf) list_single_cale_mrui_row_pane_t2_ParamLimits

0x04c9,	// (0x0004e2bf) list_single_cale_mrui_row_pane_t2

0x7ae6,	// (0x000558dc) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7ae6,	// (0x000558dc) list_single_cale_mrui_row_pane_t3

0x7b15,	// (0x0005590b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7b15,	// (0x0005590b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0005dab3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0005dab3) list_single_cale_mrui_row_pane_t

0x052f,	// (0x0004e325) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x052f,	// (0x0004e325) list_single_cmail_header_editor_pane_bg_cp01

0x055b,	// (0x0004e351) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x055b,	// (0x0004e351) list_single_cmail_header_editor_pane_bg_cp02

0x7b44,	// (0x0005593a) main_radioblah_text_pane_t1_ParamLimits

0x7b44,	// (0x0005593a) main_radioblah_text_pane_t1

0xe52d,	// (0x0005c323) cam6_indi_pane_cp01

0xe535,	// (0x0005c32b) cam6_mode_pane_cp01

0xe53d,	// (0x0005c333) cam6_pano_pane

0xe546,	// (0x0005c33c) cam6_zoom_pane_cp01

0xe550,	// (0x0005c346) cam6_pano_image_pane

0xe559,	// (0x0005c34f) cam6_pano_pane_g1

0xdf92,	// (0x0005bd88) cam6_pano_pane_g2

0xe562,	// (0x0005c358) cam6_pano_pane_g3

0xe56b,	// (0x0005c361) cam6_pano_pane_g4

0xcfb2,	// (0x0005ada8) cam6_pano_pane_g5

0xe574,	// (0x0005c36a) cam6_pano_pane_g6

0xe57c,	// (0x0005c372) cam6_pano_pane_g7

0xe584,	// (0x0005c37a) cam6_pano_pane_g8

0xe58d,	// (0x0005c383) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0005dabc) cam6_pano_pane_g

0x97fb,	// (0x000575f1) main_browser_tag_pane

0xe3e5,	// (0x0005c1db) grid_navstr_albumart_pane

0xe598,	// (0x0005c38e) cell_navstr_albumart_pane_ParamLimits

0xe598,	// (0x0005c38e) cell_navstr_albumart_pane

0xe5b4,	// (0x0005c3aa) cell_navstr_albumart_pane_g1

0xc4c4,	// (0x0005a2ba) cell_navstr_albumart_pane_g2

0xc4d4,	// (0x0005a2ca) cell_navstr_albumart_pane_g3

0xc4cc,	// (0x0005a2c2) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0005dacf) cell_navstr_albumart_pane_g

0x7b5f,	// (0x00055955) bt_list_pane_ParamLimits

0x7b5f,	// (0x00055955) bt_list_pane

0x7b75,	// (0x0005596b) bt_list_pane_t1

0x7b84,	// (0x0005597a) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0005dad8) bt_list_pane_t

0x97fb,	// (0x000575f1) main_cale_prevew_pane

0x7b93,	// (0x00055989) popup_cale_preview_window_ParamLimits

0x7b93,	// (0x00055989) popup_cale_preview_window

0x9868,	// (0x0005765e) bg_popup_preview_window_pane_cp05_ParamLimits

0x9868,	// (0x0005765e) bg_popup_preview_window_pane_cp05

0xe5bc,	// (0x0005c3b2) list_cale_preview_pane_ParamLimits

0xe5bc,	// (0x0005c3b2) list_cale_preview_pane

0x7bb0,	// (0x000559a6) list_double_cale_preview_pane_ParamLimits

0x7bb0,	// (0x000559a6) list_double_cale_preview_pane

0x7bc4,	// (0x000559ba) list_single_cale_preview_pane_ParamLimits

0x7bc4,	// (0x000559ba) list_single_cale_preview_pane

0x7bdc,	// (0x000559d2) list_single_cale_preview_pane_g1

0x7be4,	// (0x000559da) list_single_cale_preview_pane_t1_ParamLimits

0x7be4,	// (0x000559da) list_single_cale_preview_pane_t1

0x7bf9,	// (0x000559ef) list_double_cale_preview_pane_g1

0x7c01,	// (0x000559f7) list_double_cale_preview_pane_t1_ParamLimits

0x7c01,	// (0x000559f7) list_double_cale_preview_pane_t1

0x7c16,	// (0x00055a0c) list_double_cale_preview_pane_t2_ParamLimits

0x7c16,	// (0x00055a0c) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0005dadd) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0005dadd) list_double_cale_preview_pane_t

0x97fb,	// (0x000575f1) main_ezdial_pane

0x9868,	// (0x0005765e) main_sp_fs_email_pane_ParamLimits

0x742c,	// (0x00055222) cmail_ddmenu_btn01_pane_ParamLimits

0x742c,	// (0x00055222) cmail_ddmenu_btn01_pane

0x743f,	// (0x00055235) cmail_ddmenu_btn02_pane_ParamLimits

0x743f,	// (0x00055235) cmail_ddmenu_btn02_pane

0x7462,	// (0x00055258) cmail_ddmenu_btn03_pane_ParamLimits

0x7462,	// (0x00055258) cmail_ddmenu_btn03_pane

0x7500,	// (0x000552f6) main_sp_fs_ctrlbar_pane_ParamLimits

0x7524,	// (0x0005531a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x77b8,	// (0x000555ae) list_cmail_body_pane_ParamLimits

0xe365,	// (0x0005c15b) bg_button_pane_cp12

0xe36e,	// (0x0005c164) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe36e,	// (0x0005c164) list_single_cmail_header_detail_pane_g3

0x7828,	// (0x0005561e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7828,	// (0x0005561e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0005da60) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0005da60) list_single_cmail_header_detail_pane_t

0x7925,	// (0x0005571b) phacti_term_pane_t2_ParamLimits

0x7925,	// (0x0005571b) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0005da6a) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0005da6a) phacti_term_pane_t

0xe5c8,	// (0x0005c3be) aid_size_list_single_double

0x7c2e,	// (0x00055a24) popup_ezdial_listscroll_window

0x7c4a,	// (0x00055a40) popup_number_entry_window_cp01

0xa966,	// (0x0005875c) bg_popup_call_pane_cp09

0xe5d4,	// (0x0005c3ca) ezdial_list_pane

0xe5dc,	// (0x0005c3d2) scroll_pane_cp23

0xb3b0,	// (0x000591a6) bg_button_pane_cp028_ParamLimits

0xb3b0,	// (0x000591a6) bg_button_pane_cp028

0x7c58,	// (0x00055a4e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7c58,	// (0x00055a4e) cmail_ddmenu_btn01_pane_g1

0x7c67,	// (0x00055a5d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7c67,	// (0x00055a5d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0005dae2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0005dae2) cmail_ddmenu_btn01_pane_g

0xe5e4,	// (0x0005c3da) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5e4,	// (0x0005c3da) cmail_ddmenu_btn01_pane_t1

0xb3b0,	// (0x000591a6) bg_button_pane_cp029_ParamLimits

0xb3b0,	// (0x000591a6) bg_button_pane_cp029

0x7c7d,	// (0x00055a73) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7c7d,	// (0x00055a73) cmail_ddmenu_btn02_pane_g1

0x7c98,	// (0x00055a8e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7c98,	// (0x00055a8e) cmail_ddmenu_btn02_pane_t1

0x9868,	// (0x0005765e) bg_button_pane_cp031_ParamLimits

0x9868,	// (0x0005765e) bg_button_pane_cp031

0x7c7d,	// (0x00055a73) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7c7d,	// (0x00055a73) cmail_ddmenu_btn03_pane_g1

0x7c98,	// (0x00055a8e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7c98,	// (0x00055a8e) cmail_ddmenu_btn03_pane_t1

0x4e1e,	// (0x00052c14) cell_dialer2_keypad_pane_t1_ParamLimits

0x4e38,	// (0x00052c2e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4e38,	// (0x00052c2e) cell_dialer2_keypad_pane_t1_copy1

0x6b85,	// (0x0005497b) ncimui_group_button_pane

0x9868,	// (0x0005765e) main_sp_fs_calendar_pane_ParamLimits

0x77cf,	// (0x000555c5) list_single_cmail_header_caption_pane_ParamLimits

0x7958,	// (0x0005574e) aid_recal_txt_sm_pane

0x97fb,	// (0x000575f1) mian_recal_day_pane

0x79d5,	// (0x000557cb) popup_sp_fs_cale_preview_window_ParamLimits

0xe5fa,	// (0x0005c3f0) list_recal_day_pane

0x7cdb,	// (0x00055ad1) list_single_recal_day_pane_ParamLimits

0x7cdb,	// (0x00055ad1) list_single_recal_day_pane

0xe621,	// (0x0005c417) list_single_recal_day_pane_g1_ParamLimits

0xe621,	// (0x0005c417) list_single_recal_day_pane_g1

0xa873,	// (0x00058669) list_single_recal_day_pane_g2_ParamLimits

0xa873,	// (0x00058669) list_single_recal_day_pane_g2

0xa87f,	// (0x00058675) list_single_recal_day_pane_g3_ParamLimits

0xa87f,	// (0x00058675) list_single_recal_day_pane_g3

0x0579,	// (0x0004e36f) list_single_recal_day_pane_g4_ParamLimits

0x0579,	// (0x0004e36f) list_single_recal_day_pane_g4

0xa88b,	// (0x00058681) list_single_recal_day_pane_g5_ParamLimits

0xa88b,	// (0x00058681) list_single_recal_day_pane_g5

0xa897,	// (0x0005868d) list_single_recal_day_pane_g6_ParamLimits

0xa897,	// (0x0005868d) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0005daf1) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0005daf1) list_single_recal_day_pane_g

0xa8ab,	// (0x000586a1) list_single_recal_day_pane_t1

0xa8bd,	// (0x000586b3) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0005dafc) list_single_recal_day_pane_t

0x7ced,	// (0x00055ae3) ncimui_query_button_pane_ParamLimits

0x7ced,	// (0x00055ae3) ncimui_query_button_pane

0x7cfd,	// (0x00055af3) ncimui_query_button_pane_t1_ParamLimits

0x7cfd,	// (0x00055af3) ncimui_query_button_pane_t1

0xe62d,	// (0x0005c423) ncimui_query_button_pane_t2_ParamLimits

0xe62d,	// (0x0005c423) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0005db01) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0005db01) ncimui_query_button_pane_t

0x7d10,	// (0x00055b06) query_button_pane_ParamLimits

0x7d10,	// (0x00055b06) query_button_pane

0x97fb,	// (0x000575f1) bg_button_pane_cp0028

0xe640,	// (0x0005c436) query_button_pane_t1

0x375f,	// (0x00051555) main_tport_pane_ParamLimits

0x764b,	// (0x00055441) bg_popup_window_pane_cp01_ParamLimits

0x764b,	// (0x00055441) bg_popup_window_pane_cp01

0x7664,	// (0x0005545a) heading_pane_cp08_ParamLimits

0x7664,	// (0x0005545a) heading_pane_cp08

0x767a,	// (0x00055470) heading_pane_cp07_ParamLimits

0x767a,	// (0x00055470) heading_pane_cp07

0x7751,	// (0x00055547) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0005da4d) cell_tport_appsw_pane_g

0x2cb2,	// (0x00050aa8) input_candi_list_open_g1

0xad9a,	// (0x00058b90) list_cale_time_pane_g6_ParamLimits

0xad9a,	// (0x00058b90) list_cale_time_pane_g6

0x3e0e,	// (0x00051c04) aid_size_touch_calib_1_ParamLimits

0x3e0e,	// (0x00051c04) aid_size_touch_calib_1

0x3e20,	// (0x00051c16) aid_size_touch_calib_2_ParamLimits

0x3e20,	// (0x00051c16) aid_size_touch_calib_2

0x3e38,	// (0x00051c2e) aid_size_touch_calib_3_ParamLimits

0x3e38,	// (0x00051c2e) aid_size_touch_calib_3

0x3e56,	// (0x00051c4c) aid_size_touch_calib_4_ParamLimits

0x3e56,	// (0x00051c4c) aid_size_touch_calib_4

0x3e6e,	// (0x00051c64) main_touch_calib_button_group_pane_ParamLimits

0x3e6e,	// (0x00051c64) main_touch_calib_button_group_pane

0x3e86,	// (0x00051c7c) main_touch_calib_pane_g1_ParamLimits

0x3e98,	// (0x00051c8e) main_touch_calib_pane_g2_ParamLimits

0x3eaa,	// (0x00051ca0) main_touch_calib_pane_g3_ParamLimits

0x3ebc,	// (0x00051cb2) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0005d48f) main_touch_calib_pane_g_ParamLimits

0x3ece,	// (0x00051cc4) main_touch_calib_pane_t1_ParamLimits

0x3ee8,	// (0x00051cde) main_touch_calib_pane_t2_ParamLimits

0x3f02,	// (0x00051cf8) main_touch_calib_pane_t3_ParamLimits

0x3f16,	// (0x00051d0c) main_touch_calib_pane_t4_ParamLimits

0x3f2c,	// (0x00051d22) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0005d498) main_touch_calib_pane_t_ParamLimits

0xcd65,	// (0x0005ab5b) list_single_fp_cale_pane_g3_ParamLimits

0xcd65,	// (0x0005ab5b) list_single_fp_cale_pane_g3

0x9868,	// (0x0005765e) bg_button_pane_cp012_ParamLimits

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp03_ParamLimits

0x5e4a,	// (0x00053c40) cell_vitu2_function_top_pane_g1_ParamLimits

0x9868,	// (0x0005765e) bg_vkb2_func_pane_cp04_ParamLimits

0x6b10,	// (0x00054906) main_ncimui_button_group_pane_ParamLimits

0x6b10,	// (0x00054906) main_ncimui_button_group_pane

0x6b70,	// (0x00054966) main_ncimui_pane_t3_ParamLimits

0x6b70,	// (0x00054966) main_ncimui_pane_t3

0xe3fb,	// (0x0005c1f1) phacti_button_group_pane

0xe5c8,	// (0x0005c3be) aid_size_list_single_double_ParamLimits

0x7c2e,	// (0x00055a24) popup_ezdial_listscroll_window_ParamLimits

0x7c4a,	// (0x00055a40) popup_number_entry_window_cp01_ParamLimits

0x7d23,	// (0x00055b19) phacti_button_pane_ParamLimits

0x7d23,	// (0x00055b19) phacti_button_pane

0x97fb,	// (0x000575f1) bg_button_pane_cp14

0xe64e,	// (0x0005c444) phacti_button_pane_t1

0x7d34,	// (0x00055b2a) main_touch_calib_button_pane_ParamLimits

0x7d34,	// (0x00055b2a) main_touch_calib_button_pane

0xa028,	// (0x00057e1e) bg_button_pane_cp18_ParamLimits

0xa028,	// (0x00057e1e) bg_button_pane_cp18

0xe65c,	// (0x0005c452) main_touch_calib_button_pane_t1_ParamLimits

0xe65c,	// (0x0005c452) main_touch_calib_button_pane_t1

0xe672,	// (0x0005c468) main_touch_calib_button_pane_t2_ParamLimits

0xe672,	// (0x0005c468) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0005db06) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0005db06) main_touch_calib_button_pane_t

0x97fb,	// (0x000575f1) cell_ncimui_button_pane

0x97fb,	// (0x000575f1) bg_button_pane_cp032

0xe690,	// (0x0005c486) cell_ncimui_button_pane_t1

0xa62d,	// (0x00058423) image3_infobar_pane_ParamLimits

0xa62d,	// (0x00058423) image3_infobar_pane

0x6f87,	// (0x00054d7d) fs_bigclock_status_pane_ParamLimits

0x6f87,	// (0x00054d7d) fs_bigclock_status_pane

0x6f94,	// (0x00054d8a) main_fs_bigclock_clock_pane_ParamLimits

0x6f94,	// (0x00054d8a) main_fs_bigclock_clock_pane

0x6fc6,	// (0x00054dbc) main_fs_bigclock_indi_pane_ParamLimits

0x6fc6,	// (0x00054dbc) main_fs_bigclock_indi_pane

0x7006,	// (0x00054dfc) main_fs_bigclock_swipe_pane_ParamLimits

0x7006,	// (0x00054dfc) main_fs_bigclock_swipe_pane

0x97fb,	// (0x000575f1) main_fs_clock_dumped_data

0x7052,	// (0x00054e48) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7052,	// (0x00054e48) list_single_fs_bigclock_indicator_pane_g1

0x706b,	// (0x00054e61) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x706b,	// (0x00054e61) list_single_fs_bigclock_indicator_pane_g2

0x7085,	// (0x00054e7b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7085,	// (0x00054e7b) list_single_fs_bigclock_indicator_pane_g3

0x709f,	// (0x00054e95) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x709f,	// (0x00054e95) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0005d9a7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0005d9a7) list_single_fs_bigclock_indicator_pane_g

0x70ce,	// (0x00054ec4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x70ce,	// (0x00054ec4) list_single_fs_bigclock_indicator_pane_t1

0x70f6,	// (0x00054eec) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x70f6,	// (0x00054eec) list_single_fs_bigclock_indicator_pane_t2

0x711e,	// (0x00054f14) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x711e,	// (0x00054f14) list_single_fs_bigclock_indicator_pane_t3

0x7146,	// (0x00054f3c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7146,	// (0x00054f3c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0005d9b2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0005d9b2) list_single_fs_bigclock_indicator_pane_t

0xe69e,	// (0x0005c494) image3_infobar_fav_pane_ParamLimits

0xe69e,	// (0x0005c494) image3_infobar_fav_pane

0xe6ae,	// (0x0005c4a4) image3_infobar_loc_pane_ParamLimits

0xe6ae,	// (0x0005c4a4) image3_infobar_loc_pane

0xe6c4,	// (0x0005c4ba) image3_infobar_time_pane_ParamLimits

0xe6c4,	// (0x0005c4ba) image3_infobar_time_pane

0xa99c,	// (0x00058792) image3_infobar_time_pane_g1

0xe6d4,	// (0x0005c4ca) image3_infobar_time_pane_t1

0xa99c,	// (0x00058792) image3_infobar_loc_pane_g1

0xe6e2,	// (0x0005c4d8) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0005db0b) image3_infobar_loc_pane_g

0xe6ea,	// (0x0005c4e0) image3_infobar_loc_pane_t1

0xa99c,	// (0x00058792) image3_infobar_fav_pane_g1

0xe6f8,	// (0x0005c4ee) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0005db10) image3_infobar_fav_pane_g

0xe700,	// (0x0005c4f6) fs_bigclock_status_battery_pane

0xe709,	// (0x0005c4ff) fs_bigclock_status_signal_pane

0xe712,	// (0x0005c508) fs_bigclock_status_title_pane

0xe71b,	// (0x0005c511) fs_bigclock_status_signal_pane_g1

0xe724,	// (0x0005c51a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0005db15) fs_bigclock_status_signal_pane_g

0xe72c,	// (0x0005c522) fs_bigclock_status_battery_pane_g1

0xe735,	// (0x0005c52b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0005db1a) fs_bigclock_status_battery_pane_g

0xe73d,	// (0x0005c533) fs_bigclock_status_title_pane_t1

0x7d49,	// (0x00055b3f) main_fs_bigclock_clock_pane_g1

0x7d49,	// (0x00055b3f) main_fs_bigclock_clock_pane_g2

0x7d5c,	// (0x00055b52) main_fs_bigclock_clock_pane_g3

0x7d5c,	// (0x00055b52) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0005db1f) main_fs_bigclock_clock_pane_g

0x7d73,	// (0x00055b69) main_fs_bigclock_clock_pane_t1

0x7d89,	// (0x00055b7f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0005db28) main_fs_bigclock_clock_pane_t

0xe74b,	// (0x0005c541) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe74b,	// (0x0005c541) list_single_fs_bigclock_indicator_pane

0xe75c,	// (0x0005c552) list_single_fs_bigclock_pane_ParamLimits

0xe75c,	// (0x0005c552) list_single_fs_bigclock_pane

0xe782,	// (0x0005c578) main_fs_bigclock_indicator_pane_t1

0xe791,	// (0x0005c587) list_single_fs_bigclock_pane_g1

0xe799,	// (0x0005c58f) list_single_fs_bigclock_pane_t1

0xa99c,	// (0x00058792) main_fs_bigclock_swipe_pane_g1

0xe7dc,	// (0x0005c5d2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0005db39) main_fs_bigclock_swipe_pane_g

0xe7e4,	// (0x0005c5da) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7e4,	// (0x0005c5da) main_fs_bigclock_swipe_pane_t1

0x268d,	// (0x00050483) call_type_pane_ParamLimits

0x97fb,	// (0x000575f1) main_btmg_pane

0x7ac8,	// (0x000558be) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7ac8,	// (0x000558be) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0005daac) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0005daac) list_single_cale_mrui_row_pane_g

0x7cc9,	// (0x00055abf) list_recal_vselct_arw_lo_pane

0xe619,	// (0x0005c40f) list_recal_vselct_arw_up_pane

0x7cd1,	// (0x00055ac7) list_recal_vselct_pane

0x7deb,	// (0x00055be1) btmg_button_pane

0x7df5,	// (0x00055beb) main_btmg_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp044

0xe801,	// (0x0005c5f7) btmg_button_pane_t1

0xc616,	// (0x0005a40c) aid_listscroll_gen

0x9868,	// (0x0005765e) main_cntbar_detail_pane

0xe338,	// (0x0005c12e) list_cmail_folder_pane

0xcb4b,	// (0x0005a941) sp_fs_scroll_pane_cp03_ParamLimits

0x0591,	// (0x0004e387) list_single_fs_dyc_pane_cp01_ParamLimits

0x0591,	// (0x0004e387) list_single_fs_dyc_pane_cp01

0xe80f,	// (0x0005c605) aid_size_cmail_indent

0xa8cf,	// (0x000586c5) list_single_dyc_row_pane_cp01

0x7e33,	// (0x00055c29) cntbar_detail_list_pane_ParamLimits

0x7e33,	// (0x00055c29) cntbar_detail_list_pane

0x7e85,	// (0x00055c7b) main_cntbar_detail_cont_pane_ParamLimits

0x7e85,	// (0x00055c7b) main_cntbar_detail_cont_pane

0xcb4b,	// (0x0005a941) scroll_pane_cp032_ParamLimits

0xcb4b,	// (0x0005a941) scroll_pane_cp032

0x7e99,	// (0x00055c8f) cntbar_detail_list_event_pane_ParamLimits

0x7e99,	// (0x00055c8f) cntbar_detail_list_event_pane

0x7e45,	// (0x00055c3b) cntbar_detail_list_shct_pane

0xac0e,	// (0x00058a04) aid_list_gen

0xe818,	// (0x0005c60e) aid_scroll

0xe821,	// (0x0005c617) aid_size_touch_scroll_bar

0x7ea9,	// (0x00055c9f) aid_list_double

0x05ac,	// (0x0004e3a2) aid_list_single

0x7ea9,	// (0x00055c9f) aid_list_single_lg

0x05b5,	// (0x0004e3ab) aid_list_z_g_a_sm

0x05bd,	// (0x0004e3b3) aid_list_z_g_d

0x05c5,	// (0x0004e3bb) aid_txt_z_prm

0x05d3,	// (0x0004e3c9) aid_txt_z_prm_cp01

0x05e1,	// (0x0004e3d7) aid_txt_z_sec

0x7eb2,	// (0x00055ca8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7eb2,	// (0x00055ca8) main_cntbar_detail_cont_pane_g1

0x7ec6,	// (0x00055cbc) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7ec6,	// (0x00055cbc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0005db3e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0005db3e) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x0005c620) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x0005c62e) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x0005c63c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0005db43) main_cntbar_detail_cont_pane_t

0x7ed6,	// (0x00055ccc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7ed6,	// (0x00055ccc) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x0005c64a) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x0005c653) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0005db4a) cntbar_detail_list_shct_pane_g

0x7ee8,	// (0x00055cde) cntbar_detail_list_event_pane_g1_ParamLimits

0x7ee8,	// (0x00055cde) cntbar_detail_list_event_pane_g1

0x7ef4,	// (0x00055cea) cntbar_detail_list_event_pane_g2_ParamLimits

0x7ef4,	// (0x00055cea) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0005db4f) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0005db4f) cntbar_detail_list_event_pane_g

0x7f62,	// (0x00055d58) cntbar_detail_list_event_pane_t1_ParamLimits

0x7f62,	// (0x00055d58) cntbar_detail_list_event_pane_t1

0x7f77,	// (0x00055d6d) cntbar_detail_list_event_pane_t2_ParamLimits

0x7f77,	// (0x00055d6d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0005db5c) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0005db5c) cntbar_detail_list_event_pane_t

0xa99c,	// (0x00058792) cell_cntbar_detail_list_shct_pane_g1

0x2a27,	// (0x0005081d) navi_pane_mv_g3

0x9868,	// (0x0005765e) main_cntbar_detail_pane_ParamLimits

0x97fb,	// (0x000575f1) main_notif_wgt_pane

0xa41b,	// (0x00058211) aid_tch_main_mp4_pane_g4

0xa623,	// (0x00058419) popup_slider_window_cp02

0x7cbf,	// (0x00055ab5) list_recal_day_event_pane

0x7dff,	// (0x00055bf5) cntbar_detail_btn_pane_ParamLimits

0x7dff,	// (0x00055bf5) cntbar_detail_btn_pane

0x7e18,	// (0x00055c0e) cntbar_detail_btn_pane_cp01_ParamLimits

0x7e18,	// (0x00055c0e) cntbar_detail_btn_pane_cp01

0x7e45,	// (0x00055c3b) cntbar_detail_list_shct_pane_ParamLimits

0x7e55,	// (0x00055c4b) cntbar_detail_pane_g1_ParamLimits

0x7e55,	// (0x00055c4b) cntbar_detail_pane_g1

0x7e69,	// (0x00055c5f) cntbar_detail_pane_t1_ParamLimits

0x7e69,	// (0x00055c5f) cntbar_detail_pane_t1

0x7f00,	// (0x00055cf6) cntbar_detail_list_event_pane_g3_ParamLimits

0x7f00,	// (0x00055cf6) cntbar_detail_list_event_pane_g3

0x7f18,	// (0x00055d0e) cntbar_detail_list_event_pane_g4_ParamLimits

0x7f18,	// (0x00055d0e) cntbar_detail_list_event_pane_g4

0x7f30,	// (0x00055d26) cntbar_detail_list_event_pane_g5_ParamLimits

0x7f30,	// (0x00055d26) cntbar_detail_list_event_pane_g5

0x7f48,	// (0x00055d3e) cntbar_detail_list_event_pane_g6_ParamLimits

0x7f48,	// (0x00055d3e) cntbar_detail_list_event_pane_g6

0x7f8c,	// (0x00055d82) cntbar_detail_list_event_pane_t3_ParamLimits

0x7f8c,	// (0x00055d82) cntbar_detail_list_event_pane_t3

0x7f9e,	// (0x00055d94) popup_notif_wgt_window_ParamLimits

0x7f9e,	// (0x00055d94) popup_notif_wgt_window

0x7fb7,	// (0x00055dad) popup_submenu_window_cp01_ParamLimits

0x7fb7,	// (0x00055dad) popup_submenu_window_cp01

0xa966,	// (0x0005875c) bg_popup_window_pane_cp10

0xe866,	// (0x0005c65c) listscroll_notif_wgt_pane

0xe878,	// (0x0005c66e) list_notif_wgt_window

0xe881,	// (0x0005c677) scroll_pane_cp033

0x7fcb,	// (0x00055dc1) list_notif_wgt_row_pane_ParamLimits

0x7fcb,	// (0x00055dc1) list_notif_wgt_row_pane

0xe88a,	// (0x0005c680) aid_size_list_notif_wgt_del

0xe897,	// (0x0005c68d) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x0005c699) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x0005c6a8) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0005db63) list_notif_wgt_row_pane_g

0xe8bf,	// (0x0005c6b5) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x0005c6cb) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x0005c6dd) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0005db6a) list_notif_wgt_row_pane_t

0xd54e,	// (0x0005b344) list_recal_day_event_pane_g1

0xe8f9,	// (0x0005c6ef) list_recal_day_event_pane_t1

0x97fb,	// (0x000575f1) bg_button_pane_cp045

0x7fdb,	// (0x00055dd1) cntbar_detail_btn_pane_t1

0xb3b0,	// (0x000591a6) main_callh_pane_ParamLimits

0xb3b0,	// (0x000591a6) main_callh_pane

0x97fb,	// (0x000575f1) main_coverflow0_pane

0x97fb,	// (0x000575f1) main_wgtman_pane

0x7027,	// (0x00054e1d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7027,	// (0x00054e1d) main_fs_bigclock_unlock_btn_pane

0x7749,	// (0x0005553f) bg_button_pane_cp16

0x7759,	// (0x0005554f) cell_tport_appsw_pane_g3

0x7fe9,	// (0x00055ddf) cf0_flow_pane_ParamLimits

0x7fe9,	// (0x00055ddf) cf0_flow_pane

0xe908,	// (0x0005c6fe) listscroll_cf0_pane

0xe913,	// (0x0005c709) main_cf0_pane_g1

0x7ffe,	// (0x00055df4) main_cf0_pane_t1_ParamLimits

0x7ffe,	// (0x00055df4) main_cf0_pane_t1

0x8015,	// (0x00055e0b) main_cf0_pane_t2_ParamLimits

0x8015,	// (0x00055e0b) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0005db76) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0005db76) main_cf0_pane_t

0xe925,	// (0x0005c71b) scroll_pane_cp11

0x802c,	// (0x00055e22) cf0_flow_pane_g1

0x8038,	// (0x00055e2e) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0005db7b) cf0_flow_pane_g

0x8044,	// (0x00055e3a) cf0_flow_pane_t1

0x97fb,	// (0x000575f1) main_call6_pane

0x97fb,	// (0x000575f1) main_calllock_pane

0x8056,	// (0x00055e4c) call6_btn_grp_pane_ParamLimits

0x8056,	// (0x00055e4c) call6_btn_grp_pane

0x8070,	// (0x00055e66) call6_pane_g1_ParamLimits

0x8070,	// (0x00055e66) call6_pane_g1

0x8089,	// (0x00055e7f) popup_call6_1st_window_ParamLimits

0x8089,	// (0x00055e7f) popup_call6_1st_window

0x809d,	// (0x00055e93) popup_call6_2nd_window_ParamLimits

0x809d,	// (0x00055e93) popup_call6_2nd_window

0x80b1,	// (0x00055ea7) cell_call6_btn_pane_ParamLimits

0x80b1,	// (0x00055ea7) cell_call6_btn_pane

0xa966,	// (0x0005875c) bg_popup_call2_in_pane_cp03

0xe930,	// (0x0005c726) popup_call6_1st_window_g1

0xe938,	// (0x0005c72e) popup_call6_1st_window_g2

0xe940,	// (0x0005c736) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0005db80) popup_call6_1st_window_g

0xe948,	// (0x0005c73e) popup_call6_1st_window_t1

0xe957,	// (0x0005c74d) popup_call6_1st_window_t2

0xe967,	// (0x0005c75d) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0005db87) popup_call6_1st_window_t

0xa966,	// (0x0005875c) bg_popup_call2_in_pane_cp04

0xe977,	// (0x0005c76d) popup_call6_2nd_window_g1

0xe97f,	// (0x0005c775) popup_call6_2nd_window_g2

0xe987,	// (0x0005c77d) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0005db8e) popup_call6_2nd_window_g

0xe98f,	// (0x0005c785) popup_call6_2nd_window_t1

0x97fb,	// (0x000575f1) bg_button_pane_cp15

0xe99e,	// (0x0005c794) cell_call6_btn_pane_g1

0xed87,	// (0x0005cb7d) cell_call6_btn_pane_t1

0x80c5,	// (0x00055ebb) listscroll_wgtman_pane_ParamLimits

0x80c5,	// (0x00055ebb) listscroll_wgtman_pane

0x80e6,	// (0x00055edc) wgtman_btn_pane_ParamLimits

0x80e6,	// (0x00055edc) wgtman_btn_pane

0xb189,	// (0x00058f7f) aid_scroll_copy1

0xe9a7,	// (0x0005c79d) list_wgtman_pane

0x8129,	// (0x00055f1f) wgtman_btn_pane_g1_ParamLimits

0x8129,	// (0x00055f1f) wgtman_btn_pane_g1

0x8155,	// (0x00055f4b) wgtman_btn_pane_t1_ParamLimits

0x8155,	// (0x00055f4b) wgtman_btn_pane_t1

0xe9b1,	// (0x0005c7a7) wgtman_btn_pane_t2_ParamLimits

0xe9b1,	// (0x0005c7a7) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0005db95) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0005db95) wgtman_btn_pane_t

0x8192,	// (0x00055f88) listrow_wgtman_pane_ParamLimits

0x8192,	// (0x00055f88) listrow_wgtman_pane

0x81a6,	// (0x00055f9c) listrow_wgtman_pane_g1

0x81b3,	// (0x00055fa9) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0005db9a) listrow_wgtman_pane_g

0x05ef,	// (0x0004e3e5) listrow_wgtman_pane_t1

0x0607,	// (0x0004e3fd) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0005db9f) listrow_wgtman_pane_t

0x062d,	// (0x0004e423) wait_bar_pane_cp09

0xe9c8,	// (0x0005c7be) main_calllock_btn_pane

0xe9d2,	// (0x0005c7c8) main_calllock_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp17

0xe99e,	// (0x0005c794) main_calllock_btn_pane_g1

0xe9de,	// (0x0005c7d4) main_calllock_btn_pane_t1

0x97fb,	// (0x000575f1) main_dialer3_pane

0x97fb,	// (0x000575f1) main_fmrd2_pane

0xa99c,	// (0x00058792) main_fs_bigclock_unlock_btn_pane_g1

0x81d9,	// (0x00055fcf) main_fs_bigclock_unlock_btn_pane_t1

0x81e7,	// (0x00055fdd) area_fmrd2_info_pane_ParamLimits

0x81e7,	// (0x00055fdd) area_fmrd2_info_pane

0x81f8,	// (0x00055fee) area_fmrd2_visual_pane_ParamLimits

0x81f8,	// (0x00055fee) area_fmrd2_visual_pane

0x8206,	// (0x00055ffc) fmrd2_indi_pane_ParamLimits

0x8206,	// (0x00055ffc) fmrd2_indi_pane

0x8213,	// (0x00056009) area_fmrd2_visual_pane_g1

0x821b,	// (0x00056011) area_fmrd2_visual_pane_t1

0x822b,	// (0x00056021) area_fmrd2_visual_pane_t2

0x823b,	// (0x00056031) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0005dba9) area_fmrd2_visual_pane_t

0x824b,	// (0x00056041) area_fmrd2_info_pane_g1

0x8253,	// (0x00056049) area_fmrd2_info_pane_t1

0x8263,	// (0x00056059) area_fmrd2_info_pane_t2

0x8273,	// (0x00056069) area_fmrd2_info_pane_t3

0x8283,	// (0x00056079) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0005dbb0) area_fmrd2_info_pane_t

0x8293,	// (0x00056089) fmrd2_indi_pane_t1

0x82a3,	// (0x00056099) fmrd2_indi_pane_t2

0x82b3,	// (0x000560a9) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0005dbb9) fmrd2_indi_pane_t

0x70b0,	// (0x00054ea6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x70b0,	// (0x00054ea6) list_single_fs_bigclock_indicator_pane_g5

0x7165,	// (0x00054f5b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7165,	// (0x00054f5b) list_single_fs_bigclock_indicator_pane_t5

0x793a,	// (0x00055730) aid_cell_bcale_month_pane_ParamLimits

0x793a,	// (0x00055730) aid_cell_bcale_month_pane

0x7961,	// (0x00055757) bcale_month_pane_ParamLimits

0x7961,	// (0x00055757) bcale_month_pane

0x7985,	// (0x0005577b) bcale_preview_pane_ParamLimits

0x7985,	// (0x0005577b) bcale_preview_pane

0xe799,	// (0x0005c58f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7b8,	// (0x0005c5ae) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7b8,	// (0x0005c5ae) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0005db34) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0005db34) list_single_fs_bigclock_pane_t

0x81d1,	// (0x00055fc7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0005dba4) main_fs_bigclock_unlock_btn_pane_g

0x82c3,	// (0x000560b9) aid_dia3_key_size_ParamLimits

0x82c3,	// (0x000560b9) aid_dia3_key_size

0x82d7,	// (0x000560cd) aid_dia3_listrow_size_ParamLimits

0x82d7,	// (0x000560cd) aid_dia3_listrow_size

0x82f1,	// (0x000560e7) dia3_keypad_fun_pane_ParamLimits

0x82f1,	// (0x000560e7) dia3_keypad_fun_pane

0x830b,	// (0x00056101) dia3_keypad_num_pane_ParamLimits

0x830b,	// (0x00056101) dia3_keypad_num_pane

0x8325,	// (0x0005611b) dia3_listscroll_pane_ParamLimits

0x8325,	// (0x0005611b) dia3_listscroll_pane

0x833b,	// (0x00056131) dia3_numentry_pane_ParamLimits

0x833b,	// (0x00056131) dia3_numentry_pane

0xe9ed,	// (0x0005c7e3) dia3_list_pane

0x8355,	// (0x0005614b) scroll_pane_cp12

0x97fb,	// (0x000575f1) bg_dia3_numentry_pane

0x8360,	// (0x00056156) dia3_numentry_pane_t1

0x836f,	// (0x00056165) cell_dia3_key_num_pane

0x8377,	// (0x0005616d) cell_dia3_key0_fun_pane_ParamLimits

0x8377,	// (0x0005616d) cell_dia3_key0_fun_pane

0x838b,	// (0x00056181) cell_dia3_key1_fun_pane_ParamLimits

0x838b,	// (0x00056181) cell_dia3_key1_fun_pane

0x83a0,	// (0x00056196) dia3_listrow_pane

0xde4e,	// (0x0005bc44) bg_dia3_numentry_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp21

0x83b2,	// (0x000561a8) cell_dia3_key_num_pane_t1

0x83c0,	// (0x000561b6) cell_dia3_key_num_pane_t2

0x83c0,	// (0x000561b6) cell_dia3_key_num_pane_t3

0x83c0,	// (0x000561b6) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0005dbc0) cell_dia3_key_num_pane_t

0x97fb,	// (0x000575f1) bg_button_pane_cp19

0x83cf,	// (0x000561c5) cell_dia3_key0_fun_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp20

0x83d7,	// (0x000561cd) cell_dia3_key1_fun_pane_g1

0x83df,	// (0x000561d5) area_left_week_number_pane

0x83ed,	// (0x000561e3) area_top_day_name_pane

0x8400,	// (0x000561f6) frame_month_view_pane

0xe9f8,	// (0x0005c7ee) grid_month_view_pane

0x8415,	// (0x0005620b) cell_top_day_name_pane_ParamLimits

0x8415,	// (0x0005620b) cell_top_day_name_pane

0x8444,	// (0x0005623a) cell_area_left_week_number_pane_ParamLimits

0x8444,	// (0x0005623a) cell_area_left_week_number_pane

0x845a,	// (0x00056250) cell_month_view_pane_ParamLimits

0x845a,	// (0x00056250) cell_month_view_pane

0xea06,	// (0x0005c7fc) frm_month_g1

0x848b,	// (0x00056281) frm_month_g2

0x849e,	// (0x00056294) frm_month_g3

0x84b1,	// (0x000562a7) frm_month_g4

0x84c4,	// (0x000562ba) frm_month_g5

0x84d7,	// (0x000562cd) frm_month_g6

0x84ec,	// (0x000562e2) frm_month_g7

0xea13,	// (0x0005c809) frm_month_g8

0x8501,	// (0x000562f7) frm_month_g9

0x8511,	// (0x00056307) frm_month_g10

0x8521,	// (0x00056317) frm_month_g11

0x8531,	// (0x00056327) frm_month_g12

0x8543,	// (0x00056339) frm_month_g13

0x8557,	// (0x0005634d) frm_month_g14

0x856b,	// (0x00056361) frm_month_g15

0x857f,	// (0x00056375) frm_month_g16

0x000f,

0xfdd3,	// (0x0005dbc9) frm_month_g

0xea20,	// (0x0005c816) cell_top_day_name_pane_t1

0x8593,	// (0x00056389) cell_area_left_week_number_pane_g1

0x859f,	// (0x00056395) cell_area_left_week_number_pane_t1

0x9f94,	// (0x00057d8a) cell_month_view_pane_g1

0x85b2,	// (0x000563a8) cell_month_view_pane_t1

0x97fb,	// (0x000575f1) main_fps_pane

0xe266,	// (0x0005c05c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe266,	// (0x0005c05c) cmail_ddmenu_btn02_pane_cp1

0xe282,	// (0x0005c078) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe282,	// (0x0005c078) cmail_ddmenu_btn02_pane_cp2

0x7c8c,	// (0x00055a82) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7c8c,	// (0x00055a82) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0005dae7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0005dae7) cmail_ddmenu_btn02_pane_g

0x7cad,	// (0x00055aa3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7cad,	// (0x00055aa3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0005daec) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0005daec) cmail_ddmenu_btn02_pane_t

0x85c5,	// (0x000563bb) fps_text_pane_ParamLimits

0x85c5,	// (0x000563bb) fps_text_pane

0x85dc,	// (0x000563d2) main_fps_pane_g1_ParamLimits

0x85dc,	// (0x000563d2) main_fps_pane_g1

0x85f4,	// (0x000563ea) wait_bar_pane_cp010_ParamLimits

0x85f4,	// (0x000563ea) wait_bar_pane_cp010

0x8607,	// (0x000563fd) fps_text_pane_t1_ParamLimits

0x8607,	// (0x000563fd) fps_text_pane_t1

0xd2ab,	// (0x0005b0a1) cam4_image_uncrop_pane_g1

0xd2b4,	// (0x0005b0aa) cam4_image_uncrop_pane_g2

0x5362,	// (0x00053158) cam4_image_uncrop_pane_g3

0x536b,	// (0x00053161) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0005d62b) cam4_image_uncrop_pane_g

0x83a0,	// (0x00056196) dia3_listrow_pane_ParamLimits

0x97fb,	// (0x000575f1) main_phob2_pane

0x76f3,	// (0x000554e9) cell_tport_appsw_pane_cp02_ParamLimits

0x76f3,	// (0x000554e9) cell_tport_appsw_pane_cp02

0x7707,	// (0x000554fd) cell_tport_appsw_pane_cp03_ParamLimits

0x7707,	// (0x000554fd) cell_tport_appsw_pane_cp03

0x97fb,	// (0x000575f1) phob2_contact_card_pane

0x97fb,	// (0x000575f1) phob2_listscroll_pane

0xea33,	// (0x0005c829) phob2_list_pane

0xea3b,	// (0x0005c831) scroll_pane_cp034

0x861f,	// (0x00056415) phob2_cc_data_pane_ParamLimits

0x861f,	// (0x00056415) phob2_cc_data_pane

0x8638,	// (0x0005642e) phob2_cc_listscroll_pane_ParamLimits

0x8638,	// (0x0005642e) phob2_cc_listscroll_pane

0x8659,	// (0x0005644f) list_double_large_graphic_phob2_pane_ParamLimits

0x8659,	// (0x0005644f) list_double_large_graphic_phob2_pane

0x866d,	// (0x00056463) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x866d,	// (0x00056463) list_double_large_graphic_phob2_pane_g1

0x063f,	// (0x0004e435) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x063f,	// (0x0004e435) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0005dbea) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0005dbea) list_double_large_graphic_phob2_pane_g

0x0665,	// (0x0004e45b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0665,	// (0x0004e45b) list_double_large_graphic_phob2_pane_t1

0x067a,	// (0x0004e470) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x067a,	// (0x0004e470) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0005dbf3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0005dbf3) list_double_large_graphic_phob2_pane_t

0x97fb,	// (0x000575f1) list_highlight_pane_cp024

0x867a,	// (0x00056470) phob2_cc_button_pane

0x8686,	// (0x0005647c) phob2_cc_data_pane_g1_ParamLimits

0x8686,	// (0x0005647c) phob2_cc_data_pane_g1

0x869c,	// (0x00056492) phob2_cc_data_pane_g2_ParamLimits

0x869c,	// (0x00056492) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0005dbf8) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0005dbf8) phob2_cc_data_pane_g

0x86b4,	// (0x000564aa) phob2_cc_data_pane_t1_ParamLimits

0x86b4,	// (0x000564aa) phob2_cc_data_pane_t1

0x86e4,	// (0x000564da) phob2_cc_data_pane_t2_ParamLimits

0x86e4,	// (0x000564da) phob2_cc_data_pane_t2

0x8714,	// (0x0005650a) phob2_cc_data_pane_t3_ParamLimits

0x8714,	// (0x0005650a) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0005dbfd) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0005dbfd) phob2_cc_data_pane_t

0xea43,	// (0x0005c839) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x0005c839) phob2_cc_list_pane

0xd5f7,	// (0x0005b3ed) scroll_pane_cp035_ParamLimits

0xd5f7,	// (0x0005b3ed) scroll_pane_cp035

0x9868,	// (0x0005765e) bg_button_pane_cp033

0x8744,	// (0x0005653a) phob2_cc_button_pane_g1

0x8750,	// (0x00056546) phob2_cc_button_pane_t1

0x8765,	// (0x0005655b) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0005dc04) phob2_cc_button_pane_t

0x8777,	// (0x0005656d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8777,	// (0x0005656d) list_double_large_graphic_phob2_cc_pane

0x87ae,	// (0x000565a4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x87ae,	// (0x000565a4) list_double_large_graphic_phob2_cc_pane_g1

0x068f,	// (0x0004e485) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x068f,	// (0x0004e485) list_double_large_graphic_phob2_cc_pane_g2

0x069b,	// (0x0004e491) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x069b,	// (0x0004e491) list_double_large_graphic_phob2_cc_pane_g3

0x06a7,	// (0x0004e49d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x06a7,	// (0x0004e49d) list_double_large_graphic_phob2_cc_pane_g4

0x06b3,	// (0x0004e4a9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x06b3,	// (0x0004e4a9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0005dc09) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0005dc09) list_double_large_graphic_phob2_cc_pane_g

0x06bf,	// (0x0004e4b5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x06bf,	// (0x0004e4b5) list_double_large_graphic_phob2_cc_pane_t1

0x06e8,	// (0x0004e4de) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x06e8,	// (0x0004e4de) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0005dc14) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0005dc14) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x0005c845) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x0005c845) list_highlight_pane_cp025

0x9868,	// (0x0005765e) bg_button_pane_cp033_ParamLimits

0x8744,	// (0x0005653a) phob2_cc_button_pane_g1_ParamLimits

0x8750,	// (0x00056546) phob2_cc_button_pane_t1_ParamLimits

0x8765,	// (0x0005655b) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0005dc04) phob2_cc_button_pane_t_ParamLimits

0x08f1,	// (0x0004e6e7) popup_wgtman_window

0xd430,	// (0x0005b226) scroll_pane_cp038

0x810b,	// (0x00055f01) wgtman_btn_pane_cp_01_ParamLimits

0x810b,	// (0x00055f01) wgtman_btn_pane_cp_01

0xea5d,	// (0x0005c853) wgtman_content_pane

0xea66,	// (0x0005c85c) wgtman_heading_pane

0x97fb,	// (0x000575f1) bg_heading_pane_cp02

0xea6f,	// (0x0005c865) wgtman_heading_pane_g1

0xea77,	// (0x0005c86d) wgtman_heading_pane_t1

0xea85,	// (0x0005c87b) scroll_pane_cp036

0xea8d,	// (0x0005c883) wgtman_list_pane

0xe162,	// (0x0005bf58) wgtman_list_pane_t1_ParamLimits

0xe162,	// (0x0005bf58) wgtman_list_pane_t1

0xa6b3,	// (0x000584a9) cam4_grid_pane

0xffea,	// (0x0004dde0) bg_button_pane_cp015_ParamLimits

0x5fea,	// (0x00053de0) bg_button_pane_cp016_ParamLimits

0x5ff6,	// (0x00053dec) bg_button_pane_cp017_ParamLimits

0x6011,	// (0x00053e07) popup_vitu2_query_window_g3_ParamLimits

0x6011,	// (0x00053e07) popup_vitu2_query_window_g3

0x00b0,	// (0x0004dea6) popup_vitu2_query_window_t6_ParamLimits

0x00b0,	// (0x0004dea6) popup_vitu2_query_window_t6

0x00db,	// (0x0004ded1) popup_vitu2_query_window_t7_ParamLimits

0x00db,	// (0x0004ded1) popup_vitu2_query_window_t7

0xd2ab,	// (0x0005b0a1) cam4_grid_pane_g1

0xd2b4,	// (0x0005b0aa) cam4_grid_pane_g2

0xea95,	// (0x0005c88b) cam4_grid_pane_g3

0xea9e,	// (0x0005c894) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0005dc19) cam4_grid_pane_g

0x1538,	// (0x0004f32e) aid_placing_vt_slider_lsc_ParamLimits

0x1825,	// (0x0004f61b) vidtel_button_pane_ParamLimits

0x1825,	// (0x0004f61b) vidtel_button_pane

0x97fb,	// (0x000575f1) bg_button_pane_cp034

0xeaa9,	// (0x0005c89f) vidtel_button_pane_g1

0xeab1,	// (0x0005c8a7) vidtel_button_pane_t1

0xd53e,	// (0x0005b334) aid_size_vtel_slider_touch

0xd5f7,	// (0x0005b3ed) scroll_pane_cp039

0x6cee,	// (0x00054ae4) ncim_query_button_pane_cp01_ParamLimits

0x6d0d,	// (0x00054b03) ncimui_query_pane_g1_ParamLimits

0x9868,	// (0x0005765e) input_focus_pane_cp012_ParamLimits

0xde8c,	// (0x0005bc82) ncim_query_entry_pane_t1_ParamLimits

0xd5f7,	// (0x0005b3ed) scroll_pane_cp039_ParamLimits

0x2999,	// (0x0005078f) navi_pane_bcale_mc_g1

0x29a1,	// (0x00050797) navi_pane_bcale_mc_t1

0xe2b8,	// (0x0005c0ae) main_sp_fs_email_pane_g1

0xe2c4,	// (0x0005c0ba) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0005da1c) main_sp_fs_email_pane_g

0xe520,	// (0x0005c316) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe520,	// (0x0005c316) list_single_cale_mrui_row_pane_g3

0x0587,	// (0x0004e37d) list_single_recal_day_pane_g5_event_pane

0xa8a3,	// (0x00058699) list_single_recal_day_pane_g7

0xeac7,	// (0x0005c8bd) list_recal_day_event_pane_cp01

0xead0,	// (0x0005c8c6) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x0005c8ce) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x0005c8d6) list_recal_vselct_pane_cp01

0xd54e,	// (0x0005b344) list_recal_day_event_pane_cp01_g1

0xa8d8,	// (0x000586ce) list_recal_day_event_pane_cp01_t1

0xa8ab,	// (0x000586a1) list_single_recal_day_pane_t1_ParamLimits

0xa8bd,	// (0x000586b3) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0005dafc) list_single_recal_day_pane_t_ParamLimits

0x9f19,	// (0x00057d0f) bg_notes_pane_ParamLimits

0x9fec,	// (0x00057de2) list_notes_pane_ParamLimits

0x0ac7,	// (0x0004e8bd) scroll_pane_cp06_ParamLimits

0xa028,	// (0x00057e1e) main_notes_pane_ParamLimits

0x9868,	// (0x0005765e) main_welc_pane

0x87e7,	// (0x000565dd) main_welc_body_pane_ParamLimits

0x87e7,	// (0x000565dd) main_welc_body_pane

0x8806,	// (0x000565fc) main_welc_opti_pane_ParamLimits

0x8806,	// (0x000565fc) main_welc_opti_pane

0x8886,	// (0x0005667c) main_welc_pane_t1_ParamLimits

0x8886,	// (0x0005667c) main_welc_pane_t1

0x8a8e,	// (0x00056884) main_welc_body_row_pane_ParamLimits

0x8a8e,	// (0x00056884) main_welc_body_row_pane

0x9f86,	// (0x00057d7c) main_welc_opti_row_pane_ParamLimits

0x9f86,	// (0x00057d7c) main_welc_opti_row_pane

0xeafa,	// (0x0005c8f0) main_welc_opti_row_pane_g1

0x8aa2,	// (0x00056898) main_welc_opti_row_pane_t1

0xeb02,	// (0x0005c8f8) main_welc_body_row_pane_t1

0xe870,	// (0x0005c666) popup_notif_wgt_heading_pane

0xe88a,	// (0x0005c680) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x0005c68d) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x0005c699) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x0005c6a8) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0005db63) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x0005c6b5) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x0005c6cb) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x0005c6dd) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0005db6a) list_notif_wgt_row_pane_t_ParamLimits

0x81a6,	// (0x00055f9c) listrow_wgtman_pane_g1_ParamLimits

0x81b3,	// (0x00055fa9) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0005db9a) listrow_wgtman_pane_g_ParamLimits

0x05ef,	// (0x0004e3e5) listrow_wgtman_pane_t1_ParamLimits

0x0607,	// (0x0004e3fd) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0005db9f) listrow_wgtman_pane_t_ParamLimits

0x062d,	// (0x0004e423) wait_bar_pane_cp09_ParamLimits

0x97fb,	// (0x000575f1) bg_popup_heading_pane_cp02

0xeb11,	// (0x0005c907) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x0005c90f) popup_notif_wgt_heading_pane_t1

0x97fb,	// (0x000575f1) main_vids_pane

0x97fb,	// (0x000575f1) vids_listscroll_pane

0x8ab1,	// (0x000568a7) scroll_pane_cp040

0x97fb,	// (0x000575f1) vids_list_pane

0x8abc,	// (0x000568b2) vids_list_double_pane_ParamLimits

0x8abc,	// (0x000568b2) vids_list_double_pane

0x8acf,	// (0x000568c5) vids_list_double_pane_g1

0x8ad8,	// (0x000568ce) vids_list_double_pane_t1

0x8ae8,	// (0x000568de) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0005dc38) vids_list_double_pane_t

0x9868,	// (0x0005765e) main_ncimui_pane_ParamLimits

0x6b24,	// (0x0005491a) main_ncimui_pane_g1_ParamLimits

0x6b30,	// (0x00054926) main_ncimui_pane_g2_ParamLimits

0x6b30,	// (0x00054926) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0005d91d) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0005d91d) main_ncimui_pane_g

0x8825,	// (0x0005661b) main_welc_pane_g1_ParamLimits

0x8825,	// (0x0005661b) main_welc_pane_g1

0x883a,	// (0x00056630) main_welc_pane_g2_ParamLimits

0x883a,	// (0x00056630) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0005dc22) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0005dc22) main_welc_pane_g

0x9f19,	// (0x00057d0f) listscroll_mce_pane_ParamLimits

0x2a79,	// (0x0005086f) wait_bar_pane_cp10

0xc61e,	// (0x0005a414) main_cale_day_pane_ParamLimits

0xc61e,	// (0x0005a414) main_cale_week_pane_ParamLimits

0x9f19,	// (0x00057d0f) main_messa_pane_ParamLimits

0x4745,	// (0x0005253b) main_clock2_btn_pane_ParamLimits

0x4745,	// (0x0005253b) main_clock2_btn_pane

0xcddf,	// (0x0005abd5) main_clock2_btn_pane_cp01_ParamLimits

0xcddf,	// (0x0005abd5) main_clock2_btn_pane_cp01

0xe4f1,	// (0x0005c2e7) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x0005c713) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0005db71) main_cf0_pane_g

0x83df,	// (0x000561d5) area_left_week_number_pane_ParamLimits

0x83ed,	// (0x000561e3) area_top_day_name_pane_ParamLimits

0x8400,	// (0x000561f6) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x0005c7ee) grid_month_view_pane_ParamLimits

0xea06,	// (0x0005c7fc) frm_month_g1_ParamLimits

0x848b,	// (0x00056281) frm_month_g2_ParamLimits

0x849e,	// (0x00056294) frm_month_g3_ParamLimits

0x84b1,	// (0x000562a7) frm_month_g4_ParamLimits

0x84c4,	// (0x000562ba) frm_month_g5_ParamLimits

0x84d7,	// (0x000562cd) frm_month_g6_ParamLimits

0x84ec,	// (0x000562e2) frm_month_g7_ParamLimits

0xea13,	// (0x0005c809) frm_month_g8_ParamLimits

0x8501,	// (0x000562f7) frm_month_g9_ParamLimits

0x8511,	// (0x00056307) frm_month_g10_ParamLimits

0x8521,	// (0x00056317) frm_month_g11_ParamLimits

0x8531,	// (0x00056327) frm_month_g12_ParamLimits

0x8543,	// (0x00056339) frm_month_g13_ParamLimits

0x8557,	// (0x0005634d) frm_month_g14_ParamLimits

0x856b,	// (0x00056361) frm_month_g15_ParamLimits

0x857f,	// (0x00056375) frm_month_g16_ParamLimits

0xfdd3,	// (0x0005dbc9) frm_month_g_ParamLimits

0xea20,	// (0x0005c816) cell_top_day_name_pane_t1_ParamLimits

0x8593,	// (0x00056389) cell_area_left_week_number_pane_g1_ParamLimits

0x859f,	// (0x00056395) cell_area_left_week_number_pane_t1_ParamLimits

0x9f94,	// (0x00057d8a) cell_month_view_pane_g1_ParamLimits

0x85b2,	// (0x000563a8) cell_month_view_pane_t1_ParamLimits

0x9f11,	// (0x00057d07) main_clock2_btn_pane_g1

0xeb27,	// (0x0005c91d) main_clock2_btn_pane_t1

0x9868,	// (0x0005765e) listscroll_cmail_pane_ParamLimits

0xe2b8,	// (0x0005c0ae) main_sp_fs_email_pane_g1_ParamLimits

0xe2c4,	// (0x0005c0ba) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0005da1c) main_sp_fs_email_pane_g_ParamLimits

0xe5fa,	// (0x0005c3f0) list_recal_day_pane_ParamLimits

0xe60b,	// (0x0005c401) mian_recal_day_pane_t1

0x0380,	// (0x0004e176) list_single_dyc_row_text_pane_t4_ParamLimits

0x0380,	// (0x0004e176) list_single_dyc_row_text_pane_t4

0x03c9,	// (0x0004e1bf) list_single_dyc_row_text_pane_t5_ParamLimits

0x03c9,	// (0x0004e1bf) list_single_dyc_row_text_pane_t5

0x75ea,	// (0x000553e0) list_single_dyc_row_text_pane_t6_ParamLimits

0x75ea,	// (0x000553e0) list_single_dyc_row_text_pane_t6

0x25e8,	// (0x000503de) aid_mgn_list_cale_time_pane

0x9868,	// (0x0005765e) main_gallery2_pane_ParamLimits

0xcdf3,	// (0x0005abe9) main_clock2_pane_cp01_t1

0xce01,	// (0x0005abf7) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0005d502) main_clock2_pane_cp01_t

0x0ef3,	// (0x0004ece9) cale_week_scroll_pane_g16_ParamLimits

0x0ef3,	// (0x0004ece9) cale_week_scroll_pane_g16

0xa966,	// (0x0005875c) vorec_slider_pane

0xeab1,	// (0x0005c8a7) vidtel_button_pane_t1_ParamLimits

0x7d49,	// (0x00055b3f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7d49,	// (0x00055b3f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7d5c,	// (0x00055b52) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7d5c,	// (0x00055b52) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0005db1f) main_fs_bigclock_clock_pane_g_ParamLimits

0x7d73,	// (0x00055b69) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7d89,	// (0x00055b7f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0005db28) main_fs_bigclock_clock_pane_t_ParamLimits

0x3f92,	// (0x00051d88) main_mup3_lyrics_pane_ParamLimits

0x3f92,	// (0x00051d88) main_mup3_lyrics_pane

0x8b10,	// (0x00056906) main_mup3_lyrics_pane_t1_ParamLimits

0x8b10,	// (0x00056906) main_mup3_lyrics_pane_t1

0xa405,	// (0x000581fb) aid_main_mp4_pane_t1_area

0xa40f,	// (0x00058205) aid_main_mp4_pane_t2_area

0xa4bb,	// (0x000582b1) main_mp4_pane_g7_ParamLimits

0xa4bb,	// (0x000582b1) main_mp4_pane_g7

0xa4c7,	// (0x000582bd) main_mp4_pane_g8_ParamLimits

0xa4c7,	// (0x000582bd) main_mp4_pane_g8

0x5129,	// (0x00052f1f) aid_call6_pane_g1_size

0x8796,	// (0x0005658c) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8796,	// (0x0005658c) list_double_large_graphic_phob2_other_pane

0xad22,	// (0x00058b18) list_double_large_graphic_phob2_other_pane_g1

0x97fb,	// (0x000575f1) list_highlight_pane_cp026

0x9868,	// (0x0005765e) main_welc_pane_ParamLimits

0x748d,	// (0x00055283) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x748d,	// (0x00055283) main_sp_fs_ctrlbar_pane_g3

0x74a7,	// (0x0005529d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x74a7,	// (0x0005529d) main_sp_fs_ctrlbar_pane_g4

0x74db,	// (0x000552d1) toolbar2_fixed_button_pane_cp01

0x74e6,	// (0x000552dc) toolbar2_fixed_button_pane_cp02

0x74f3,	// (0x000552e9) toolbar2_fixed_button_pane_cp03

0x87cd,	// (0x000565c3) list_welc_entry_pane_ParamLimits

0x87cd,	// (0x000565c3) list_welc_entry_pane

0x884f,	// (0x00056645) main_welc_pane_g3_ParamLimits

0x884f,	// (0x00056645) main_welc_pane_g3

0x88a8,	// (0x0005669e) main_welc_pane_t2_ParamLimits

0x88a8,	// (0x0005669e) main_welc_pane_t2

0x88c3,	// (0x000566b9) main_welc_pane_t3_ParamLimits

0x88c3,	// (0x000566b9) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0005dc2b) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0005dc2b) main_welc_pane_t

0x89fd,	// (0x000567f3) welc_button_pane_ParamLimits

0x89fd,	// (0x000567f3) welc_button_pane

0x8a7b,	// (0x00056871) welc_service_logo_pane_ParamLimits

0x8a7b,	// (0x00056871) welc_service_logo_pane

0x8b2b,	// (0x00056921) list_single_welc_entry_pane_ParamLimits

0x8b2b,	// (0x00056921) list_single_welc_entry_pane

0x8b3e,	// (0x00056934) list_single_welc_entry_pane_g1

0x8b48,	// (0x0005693e) list_single_welc_entry_pane_t1

0x8b56,	// (0x0005694c) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0005dc3d) list_single_welc_entry_pane_t

0x97fb,	// (0x000575f1) bg_button_pane_cp035

0x8b64,	// (0x0005695a) welc_button_pane_t1

0xeb35,	// (0x0005c92b) welc_service_logo_pane_g1

0xeb3e,	// (0x0005c934) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0005dc42) welc_service_logo_pane_g

0x97fb,	// (0x000575f1) main_int_radio_pane

0xdd2a,	// (0x0005bb20) list_single_fs_dyc_pane_g1

0x064b,	// (0x0004e441) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x064b,	// (0x0004e441) list_double_large_graphic_phob2_pane_g3

0x0657,	// (0x0004e44d) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0657,	// (0x0004e44d) list_double_large_graphic_phob2_pane_g4

0x8b72,	// (0x00056968) main_int_radio1_pane_ParamLimits

0x8b72,	// (0x00056968) main_int_radio1_pane

0xeb47,	// (0x0005c93d) find_pane_cp02

0x8b8f,	// (0x00056985) input_focus_pane_cp12_ParamLimits

0x8b8f,	// (0x00056985) input_focus_pane_cp12

0x8b9f,	// (0x00056995) input_focus_pane_cp13_ParamLimits

0x8b9f,	// (0x00056995) input_focus_pane_cp13

0x8bb3,	// (0x000569a9) input_focus_pane_cp14_ParamLimits

0x8bb3,	// (0x000569a9) input_focus_pane_cp14

0xeb50,	// (0x0005c946) int_radio1_listscroll_pane

0x8bc7,	// (0x000569bd) main_int_radio1_pane_g1_ParamLimits

0x8bc7,	// (0x000569bd) main_int_radio1_pane_g1

0x8bdd,	// (0x000569d3) main_int_radio1_pane_t1_ParamLimits

0x8bdd,	// (0x000569d3) main_int_radio1_pane_t1

0x8bf6,	// (0x000569ec) main_int_radio1_pane_t2_ParamLimits

0x8bf6,	// (0x000569ec) main_int_radio1_pane_t2

0x8c11,	// (0x00056a07) main_int_radio1_pane_t3_ParamLimits

0x8c11,	// (0x00056a07) main_int_radio1_pane_t3

0x8c2c,	// (0x00056a22) main_int_radio1_pane_t4_ParamLimits

0x8c2c,	// (0x00056a22) main_int_radio1_pane_t4

0xeb5a,	// (0x0005c950) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x0005c950) main_int_radio1_pane_t5

0x8c3e,	// (0x00056a34) main_int_radio1_pane_t6_ParamLimits

0x8c3e,	// (0x00056a34) main_int_radio1_pane_t6

0x8c53,	// (0x00056a49) main_int_radio1_pane_t7_ParamLimits

0x8c53,	// (0x00056a49) main_int_radio1_pane_t7

0x8c68,	// (0x00056a5e) main_int_radio1_pane_t8_ParamLimits

0x8c68,	// (0x00056a5e) main_int_radio1_pane_t8

0x8c85,	// (0x00056a7b) main_int_radio1_pane_t9_ParamLimits

0x8c85,	// (0x00056a7b) main_int_radio1_pane_t9

0x8c97,	// (0x00056a8d) main_int_radio1_pane_t10_ParamLimits

0x8c97,	// (0x00056a8d) main_int_radio1_pane_t10

0x8cbd,	// (0x00056ab3) main_int_radio1_pane_t11_ParamLimits

0x8cbd,	// (0x00056ab3) main_int_radio1_pane_t11

0x8ce3,	// (0x00056ad9) main_int_radio1_pane_t12_ParamLimits

0x8ce3,	// (0x00056ad9) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0005dc47) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0005dc47) main_int_radio1_pane_t

0xea33,	// (0x0005c829) int_radio_list_pane

0xea3b,	// (0x0005c831) scroll_pane_cp037

0xeb6c,	// (0x0005c962) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x0005c962) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x0005c976) list_double_large_graphic_int_radio_pane_g1

0xa8f4,	// (0x000586ea) list_double_large_graphic_int_radio_pane_t1

0xa902,	// (0x000586f8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0005dc60) list_double_large_graphic_int_radio_pane_t

0x97fb,	// (0x000575f1) list_highlight_pane_cp027

0xeaea,	// (0x0005c8e0) main_button_pane_4

0x8862,	// (0x00056658) main_welc_pane_g4_ParamLimits

0x8862,	// (0x00056658) main_welc_pane_g4

0x88de,	// (0x000566d4) main_welc_pane_t4_ParamLimits

0x88de,	// (0x000566d4) main_welc_pane_t4

0x88f5,	// (0x000566eb) main_welc_pane_t5_ParamLimits

0x88f5,	// (0x000566eb) main_welc_pane_t5

0x8936,	// (0x0005672c) main_welc_pane_t6_ParamLimits

0x8936,	// (0x0005672c) main_welc_pane_t6

0x8a12,	// (0x00056808) welc_button_pane_2_ParamLimits

0x8a12,	// (0x00056808) welc_button_pane_2

0x8a30,	// (0x00056826) welc_button_pane_3_ParamLimits

0x8a30,	// (0x00056826) welc_button_pane_3

0xeaf2,	// (0x0005c8e8) welc_button_pane_4

0x8a51,	// (0x00056847) welc_button_pane_5_ParamLimits

0x8a51,	// (0x00056847) welc_button_pane_5

0x074d,	// (0x0004e543) main_popup_welc_pane

0xeb98,	// (0x0005c98e) main_welc_sk_g3

0xeba2,	// (0x0005c998) main_welc_sk_g4

0xebac,	// (0x0005c9a2) main_welc_sk_t3

0xebbc,	// (0x0005c9b2) main_welc_sk_t4

0xebcc,	// (0x0005c9c2) popup_welc_pane_t4

0xebda,	// (0x0005c9d0) popup_welc_pane_t5

0xebe8,	// (0x0005c9de) popup_welc_pane_t6

0x97fb,	// (0x000575f1) main_acti_pane

0x97fb,	// (0x000575f1) main_sso_pane

0x8cf5,	// (0x00056aeb) sso_body_pane_ParamLimits

0x8cf5,	// (0x00056aeb) sso_body_pane

0x8d0a,	// (0x00056b00) sso_logo_pane_ParamLimits

0x8d0a,	// (0x00056b00) sso_logo_pane

0x8d3a,	// (0x00056b30) sso_sk_pane_ParamLimits

0x8d3a,	// (0x00056b30) sso_sk_pane

0xa99c,	// (0x00058792) main_sso_logo_pane_g1

0x8d4c,	// (0x00056b42) sso_sk_pane_t1_ParamLimits

0x8d4c,	// (0x00056b42) sso_sk_pane_t1

0x8d66,	// (0x00056b5c) sso_sk_pane_t2_ParamLimits

0x8d66,	// (0x00056b5c) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0005dc65) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0005dc65) sso_sk_pane_t

0xec2a,	// (0x0005ca20) aid_sso_gap

0xec33,	// (0x0005ca29) aid_sso_txt1

0xec3d,	// (0x0005ca33) aid_sso_txt2

0xec47,	// (0x0005ca3d) aid_sso_txt3

0x0002,

0xfe74,	// (0x0005dc6a) aid_sso_txt

0xec51,	// (0x0005ca47) aid_sso_widget

0x8dd0,	// (0x00056bc6) sso_btn_pane_ParamLimits

0x8dd0,	// (0x00056bc6) sso_btn_pane

0x8e58,	// (0x00056c4e) sso_option_pane_ParamLimits

0x8e58,	// (0x00056c4e) sso_option_pane

0x8eda,	// (0x00056cd0) sso_query_pane_ParamLimits

0x8eda,	// (0x00056cd0) sso_query_pane

0x8f30,	// (0x00056d26) sso_query_pane_cp01_ParamLimits

0x8f30,	// (0x00056d26) sso_query_pane_cp01

0x8f90,	// (0x00056d86) sso_t_hdr_pane_ParamLimits

0x8f90,	// (0x00056d86) sso_t_hdr_pane

0x8fba,	// (0x00056db0) sso_t_nml_pane_ParamLimits

0x8fba,	// (0x00056db0) sso_t_nml_pane

0xec5b,	// (0x0005ca51) sso_t_sub_pane

0x8d17,	// (0x00056b0d) sso_popup_window_ParamLimits

0x8d17,	// (0x00056b0d) sso_popup_window

0x8d7c,	// (0x00056b72) sso_apps_pane_ParamLimits

0x8d7c,	// (0x00056b72) sso_apps_pane

0x8da6,	// (0x00056b9c) sso_body_pane_g1

0x8db0,	// (0x00056ba6) sso_body_pane_t1

0x8dc0,	// (0x00056bb6) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0005dc71) sso_body_pane_t

0x8e22,	// (0x00056c18) sso_btn_pane_cp01_ParamLimits

0x8e22,	// (0x00056c18) sso_btn_pane_cp01

0x8eae,	// (0x00056ca4) sso_prog_pane_ParamLimits

0x8eae,	// (0x00056ca4) sso_prog_pane

0x9010,	// (0x00056e06) sso_t_hdr_pane_t1_ParamLimits

0x9010,	// (0x00056e06) sso_t_hdr_pane_t1

0xec70,	// (0x0005ca66) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x0005ca66) input_focus_pane_cp10

0xec8a,	// (0x0005ca80) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x0005ca80) sso_query_pane_t1

0xec9d,	// (0x0005ca93) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x0005ca93) sso_query_pane_t2

0xecb7,	// (0x0005caad) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0005caad) sso_query_pane_t3

0xece1,	// (0x0005cad7) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0005cad7) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0005dc76) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0005dc76) sso_query_pane_t

0x97fb,	// (0x000575f1) bg_button_pane_cp22

0xeb89,	// (0x0005c97f) sso_btn_pane_t1

0x9023,	// (0x00056e19) sso_t_nml_pane_t1_ParamLimits

0x9023,	// (0x00056e19) sso_t_nml_pane_t1

0x903e,	// (0x00056e34) sso_option_row_pane_ParamLimits

0x903e,	// (0x00056e34) sso_option_row_pane

0xed05,	// (0x0005cafb) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x0005cafb) sso_t_sub_pane_t1

0x9868,	// (0x0005765e) bg_popup_window_pane_cp11_ParamLimits

0x9868,	// (0x0005765e) bg_popup_window_pane_cp11

0xed22,	// (0x0005cb18) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x0005cb18) popup_sk_window_cp01

0xed2f,	// (0x0005cb25) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x0005cb25) sso_popup_body_pane

0xed3c,	// (0x0005cb32) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x0005cb32) scroll_pane_cp21

0xed49,	// (0x0005cb3f) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x0005cb3f) sso_popup_body_t_pane

0xed56,	// (0x0005cb4c) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x0005cb4c) sso_popup_body_t_hdr_pane

0xed69,	// (0x0005cb5f) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x0005cb5f) sso_popup_body_t_nml_pane

0xed96,	// (0x0005cb8c) sso_popup_body_t_sub_pane_ParamLimits

0xed96,	// (0x0005cb8c) sso_popup_body_t_sub_pane

0xedb9,	// (0x0005cbaf) sso_popup_body_t_hdr_pane_t1

0x9051,	// (0x00056e47) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9051,	// (0x00056e47) sso_popup_body_t_nml_pane_t1

0xedc9,	// (0x0005cbbf) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedc9,	// (0x0005cbbf) sso_popup_body_t_sub_pane_t1

0xa99c,	// (0x00058792) sso_prog_pane_g1

0x908c,	// (0x00056e82) sso_apps_pane_comp1_ParamLimits

0x908c,	// (0x00056e82) sso_apps_pane_comp1

0xedee,	// (0x0005cbe4) sso_apps_pane_comp1_g1

0xedf6,	// (0x0005cbec) sso_apps_pane_comp1_t1

0xee12,	// (0x0005cc08) sso_option_row_pane_g1

0xee1a,	// (0x0005cc10) sso_option_row_pane_t1

0x87ba,	// (0x000565b0) bg_welc_area_ParamLimits

0x87ba,	// (0x000565b0) bg_welc_area

0x8974,	// (0x0005676a) sso_t_hdr_pane_a_t1_ParamLimits

0x8974,	// (0x0005676a) sso_t_hdr_pane_a_t1

0x898f,	// (0x00056785) sso_t_nml_pane_a_t1_ParamLimits

0x898f,	// (0x00056785) sso_t_nml_pane_a_t1

0x89c2,	// (0x000567b8) sso_t_sub_pane_a_t1_ParamLimits

0x89c2,	// (0x000567b8) sso_t_sub_pane_a_t1

0xeb89,	// (0x0005c97f) sso_btn_pane_t1_copy1

0x97fb,	// (0x000575f1) welc_button_pane_2_comp1

0xebf8,	// (0x0005c9ee) sso_t_hdr_pane_p_t1

0xec08,	// (0x0005c9fe) sso_t_nml_pane_p_t1

0xec18,	// (0x0005ca0e) sso_t_sub_pane_p_t1

0xe340,	// (0x0005c136) list_cmail_pane_ParamLimits

0x8a69,	// (0x0005685f) welc_button_pane_cp01_ParamLimits

0x8a69,	// (0x0005685f) welc_button_pane_cp01

0x97fb,	// (0x000575f1) main_att_pane

0xee04,	// (0x0005cbfa) input_focus_pane_cp10_t1

0xee1a,	// (0x0005cc10) sso_option_row_pane_t1_ParamLimits

0x90a6,	// (0x00056e9c) main_att_body_pane_ParamLimits

0x90a6,	// (0x00056e9c) main_att_body_pane

0x90db,	// (0x00056ed1) att_btn_pane_ParamLimits

0x90db,	// (0x00056ed1) att_btn_pane

0x9102,	// (0x00056ef8) att_btn_pane_cp01_ParamLimits

0x9102,	// (0x00056ef8) att_btn_pane_cp01

0x9122,	// (0x00056f18) att_li_srv_pane_ParamLimits

0x9122,	// (0x00056f18) att_li_srv_pane

0x913f,	// (0x00056f35) att_opt_pane_ParamLimits

0x913f,	// (0x00056f35) att_opt_pane

0x918d,	// (0x00056f83) att_query_pane_ParamLimits

0x918d,	// (0x00056f83) att_query_pane

0x91d9,	// (0x00056fcf) att_query_pane_cp01_ParamLimits

0x91d9,	// (0x00056fcf) att_query_pane_cp01

0x9225,	// (0x0005701b) att_t_hdr_pane_ParamLimits

0x9225,	// (0x0005701b) att_t_hdr_pane

0x9289,	// (0x0005707f) att_t_nml_pane_ParamLimits

0x9289,	// (0x0005707f) att_t_nml_pane

0x92d6,	// (0x000570cc) att_t_nml_pane_cp01_ParamLimits

0x92d6,	// (0x000570cc) att_t_nml_pane_cp01

0x9304,	// (0x000570fa) att_t_nmlb_pane_ParamLimits

0x9304,	// (0x000570fa) att_t_nmlb_pane

0x9321,	// (0x00057117) att_term_pane_ParamLimits

0x9321,	// (0x00057117) att_term_pane

0x9371,	// (0x00057167) main_att_body_pane_g1_ParamLimits

0x9371,	// (0x00057167) main_att_body_pane_g1

0xee30,	// (0x0005cc26) att_t_hdr_pane_t1_ParamLimits

0xee30,	// (0x0005cc26) att_t_hdr_pane_t1

0xee49,	// (0x0005cc3f) att_t_nml_pane_t1_ParamLimits

0xee49,	// (0x0005cc3f) att_t_nml_pane_t1

0xee6e,	// (0x0005cc64) att_btn_pane_t1

0x97fb,	// (0x000575f1) bg_button_pane_cp23

0x93a8,	// (0x0005719e) att_li_srv_row_pane_ParamLimits

0x93a8,	// (0x0005719e) att_li_srv_row_pane

0xee7e,	// (0x0005cc74) att_t_nmlb_pane_t1_ParamLimits

0xee7e,	// (0x0005cc74) att_t_nmlb_pane_t1

0xee97,	// (0x0005cc8d) att_query_pane_t1

0xeea6,	// (0x0005cc9c) att_query_pane_t2

0xeeb5,	// (0x0005ccab) att_query_pane_t3

0x0002,

0xfe89,	// (0x0005dc7f) att_query_pane_t

0xeec4,	// (0x0005ccba) input_focus_pane_cp11

0xeecd,	// (0x0005ccc3) att_term_pane_t1_ParamLimits

0xeecd,	// (0x0005ccc3) att_term_pane_t1

0x97fb,	// (0x000575f1) att_opt_row_pane

0xeeea,	// (0x0005cce0) att_opt_row_pane_g1

0xeef2,	// (0x0005cce8) att_opt_row_pane_t1_ParamLimits

0xeef2,	// (0x0005cce8) att_opt_row_pane_t1

0x93b8,	// (0x000571ae) att_li_srv_row_pane_g1

0x93c0,	// (0x000571b6) att_li_srv_row_pane_t1

0x93d5,	// (0x000571cb) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0005dc86) att_li_srv_row_pane_t

0x97fb,	// (0x000575f1) main_call7_pane

0x97fb,	// (0x000575f1) main_vod_pane

0xec5b,	// (0x0005ca51) sso_t_sub_pane_ParamLimits

0x90bc,	// (0x00056eb2) att_btn_emg_pane_ParamLimits

0x90bc,	// (0x00056eb2) att_btn_emg_pane

0x93c0,	// (0x000571b6) att_li_srv_row_pane_t1_ParamLimits

0x93d5,	// (0x000571cb) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0005dc86) att_li_srv_row_pane_t_ParamLimits

0xef0b,	// (0x0005cd01) att_btn_close_pane_g1

0x97fb,	// (0x000575f1) bg_button_pane_cp24

0x93ea,	// (0x000571e0) main_vod_body_pane_ParamLimits

0x93ea,	// (0x000571e0) main_vod_body_pane

0x93fe,	// (0x000571f4) main_vod_body_pane_g1_ParamLimits

0x93fe,	// (0x000571f4) main_vod_body_pane_g1

0x9432,	// (0x00057228) scroll_pane_cp24_ParamLimits

0x9432,	// (0x00057228) scroll_pane_cp24

0x9480,	// (0x00057276) vod_btn_pane_ParamLimits

0x9480,	// (0x00057276) vod_btn_pane

0x94c4,	// (0x000572ba) vod_det_pane_ParamLimits

0x94c4,	// (0x000572ba) vod_det_pane

0x94f6,	// (0x000572ec) vod_logo_g1_ParamLimits

0x94f6,	// (0x000572ec) vod_logo_g1

0x9534,	// (0x0005732a) vod_opt_pane_ParamLimits

0x9534,	// (0x0005732a) vod_opt_pane

0x9567,	// (0x0005735d) vod_opt_pane_cp01_ParamLimits

0x9567,	// (0x0005735d) vod_opt_pane_cp01

0x9593,	// (0x00057389) vod_query_pane_ParamLimits

0x9593,	// (0x00057389) vod_query_pane

0x95c0,	// (0x000573b6) vod_query_pane_cp01_ParamLimits

0x95c0,	// (0x000573b6) vod_query_pane_cp01

0x95cc,	// (0x000573c2) vod_t_nml_pane_ParamLimits

0x95cc,	// (0x000573c2) vod_t_nml_pane

0x9681,	// (0x00057477) vod_t_nml_pane_cp01_ParamLimits

0x9681,	// (0x00057477) vod_t_nml_pane_cp01

0x96bd,	// (0x000574b3) vod_t_sub_pane_ParamLimits

0x96bd,	// (0x000574b3) vod_t_sub_pane

0x96f2,	// (0x000574e8) vod_t_sub_pane_cp01_ParamLimits

0x96f2,	// (0x000574e8) vod_t_sub_pane_cp01

0xeec4,	// (0x0005ccba) vod_query_field_pane

0xee97,	// (0x0005cc8d) vod_query_pane_t1

0x97fb,	// (0x000575f1) bg_button_pane_cp25

0xef13,	// (0x0005cd09) sso_btn_pane_t1_copy2

0x971e,	// (0x00057514) vod_t_nml_pane_t1_ParamLimits

0x971e,	// (0x00057514) vod_t_nml_pane_t1

0xef23,	// (0x0005cd19) vod_opt_row_pane_ParamLimits

0xef23,	// (0x0005cd19) vod_opt_row_pane

0xef35,	// (0x0005cd2b) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x0005cd2b) vod_t_sub_pane_t1

0x9755,	// (0x0005754b) vod_det_cell_pane_ParamLimits

0x9755,	// (0x0005754b) vod_det_cell_pane

0x97fb,	// (0x000575f1) input_focus_pane_cp15

0xef4e,	// (0x0005cd44) vod_query_field_pane_t1

0xef5c,	// (0x0005cd52) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0005cd52) vod_opt_row_pane_g1

0xef68,	// (0x0005cd5e) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0005cd5e) vod_opt_row_pane_t1

0xef8d,	// (0x0005cd83) vod_det_cell_field_pane

0xef96,	// (0x0005cd8c) vod_det_cell_pane_g1

0xee97,	// (0x0005cc8d) vod_det_cell_pane_t1

0x97fb,	// (0x000575f1) input_focus_pane_cp16

0xef4e,	// (0x0005cd44) vod_det_cell_field_pane_t1

0x8056,	// (0x00055e4c) call7_btn_grp_pane_ParamLimits

0x8056,	// (0x00055e4c) call7_btn_grp_pane

0x9769,	// (0x0005755f) call7_bubble_pane_ParamLimits

0x9769,	// (0x0005755f) call7_bubble_pane

0x9781,	// (0x00057577) cell_call7_btn_pane_ParamLimits

0x9781,	// (0x00057577) cell_call7_btn_pane

0x9795,	// (0x0005758b) call7_pane_g1_ParamLimits

0x9795,	// (0x0005758b) call7_pane_g1

0x97a7,	// (0x0005759d) call7_windows_conf_pane_ParamLimits

0x97a7,	// (0x0005759d) call7_windows_conf_pane

0x97c5,	// (0x000575bb) popup_call7_1st_window_ParamLimits

0x97c5,	// (0x000575bb) popup_call7_1st_window

0x97d7,	// (0x000575cd) popup_call7_2nd_window_ParamLimits

0x97d7,	// (0x000575cd) popup_call7_2nd_window

0x97e9,	// (0x000575df) popup_call7_3rd_window_ParamLimits

0x97e9,	// (0x000575df) popup_call7_3rd_window

0x97fb,	// (0x000575f1) bg_button_pane_cp26

0xe99e,	// (0x0005c794) cell_call7_btn_pane_g1

0xed87,	// (0x0005cb7d) cell_call7_btn_pane_t1

0x97fb,	// (0x000575f1) bg_popup_window_pane_cp12

0xef9e,	// (0x0005cd94) popup_call7_1st_window_g1

0xefa6,	// (0x0005cd9c) popup_call7_1st_window_g2

0xefae,	// (0x0005cda4) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0005dc8b) popup_call7_1st_window_g

0xefb6,	// (0x0005cdac) popup_call7_1st_window_t1

0xefc5,	// (0x0005cdbb) popup_call7_1st_window_t2

0xefd5,	// (0x0005cdcb) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0005dc92) popup_call7_1st_window_t

0x97fb,	// (0x000575f1) bg_popup_window_pane_cp13

0xefe5,	// (0x0005cddb) popup_call7_2nd_window_g1

0xefed,	// (0x0005cde3) popup_call7_2nd_window_g2

0xeff5,	// (0x0005cdeb) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0005dc99) popup_call7_2nd_window_g

0xeffd,	// (0x0005cdf3) popup_call7_2nd_window_t1

0x97fb,	// (0x000575f1) bg_popup_window_pane_cp14

0xf00c,	// (0x0005ce02) call7_list_conf_pane

0xf014,	// (0x0005ce0a) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0005ce0a) call7_list_conf_row_pane

0xf027,	// (0x0005ce1d) call7_list_conf_row_pane_g1

0xf02f,	// (0x0005ce25) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0005dca0) call7_list_conf_row_pane_g

0xf037,	// (0x0005ce2d) call7_list_conf_row_pane_t1

0x97fb,	// (0x000575f1) list_highlight_pane_cp22
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
