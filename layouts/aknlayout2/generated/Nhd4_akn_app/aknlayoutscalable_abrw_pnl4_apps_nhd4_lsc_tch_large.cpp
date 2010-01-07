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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00088a4e };

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
0x241d,	// (0x0008ae6b) Screen

0x2429,	// (0x0008ae77) application_window

0x247d,	// (0x0008aecb) area_bottom_pane_ParamLimits

0x247d,	// (0x0008aecb) area_bottom_pane

0x24b6,	// (0x0008af04) area_top_pane_ParamLimits

0x24b6,	// (0x0008af04) area_top_pane

0x026e,	// (0x00088cbc) call_video_uplink_pane_ParamLimits

0x026e,	// (0x00088cbc) call_video_uplink_pane

0x2530,	// (0x0008af7e) main_pane_ParamLimits

0x2530,	// (0x0008af7e) main_pane

0xc5a7,	// (0x00094ff5) context_pane

0x5c24,	// (0x0008e672) navi_pane

0x5c4c,	// (0x0008e69a) popup_cale_events_window_ParamLimits

0x5c4c,	// (0x0008e69a) popup_cale_events_window

0xc5ba,	// (0x00095008) popup_mup_playback_window

0x5c64,	// (0x0008e6b2) signal_pane

0x0a07,	// (0x00089455) main_browser_pane

0x4a6d,	// (0x0008d4bb) main_burst_pane

0x5984,	// (0x0008e3d2) main_calc_pane

0x4a6d,	// (0x0008d4bb) main_cale_day_pane

0x0a07,	// (0x00089455) main_cale_month_pane

0x4a6d,	// (0x0008d4bb) main_cale_week_pane

0x4a6d,	// (0x0008d4bb) main_call_pane

0x069d,	// (0x000890eb) main_call_poc_pane

0x4a6d,	// (0x0008d4bb) main_camera_pane

0x4a6d,	// (0x0008d4bb) main_chi_dic_pane

0x45de,	// (0x0008d02c) main_clock_pane

0x069d,	// (0x000890eb) main_fmradio_pane

0x4a6d,	// (0x0008d4bb) main_graph_messa_pane

0x069d,	// (0x000890eb) main_help_pane

0x0a07,	// (0x00089455) main_im_pane

0x08f8,	// (0x00089346) main_image_pane_ParamLimits

0x08f8,	// (0x00089346) main_image_pane

0x069d,	// (0x000890eb) main_location2_pane

0x4a6d,	// (0x0008d4bb) main_location_pane

0x069d,	// (0x000890eb) main_messa_pane

0x069d,	// (0x000890eb) main_mp2_pane

0x4a6d,	// (0x0008d4bb) main_mp_pane

0x069d,	// (0x000890eb) main_msg_pane

0x069d,	// (0x000890eb) main_mup_eq_pane

0x069d,	// (0x000890eb) main_mup_pane

0x4a6d,	// (0x0008d4bb) main_notes_pane

0x069d,	// (0x000890eb) main_pec_pane

0x069d,	// (0x000890eb) main_phob_pane

0x069d,	// (0x000890eb) main_pinb_pane

0x069d,	// (0x000890eb) main_postcard_pane

0x069d,	// (0x000890eb) main_qdial_pane

0x4a6d,	// (0x0008d4bb) main_skin_pane

0x069d,	// (0x000890eb) main_smil2_pane

0x4a6d,	// (0x0008d4bb) main_smil_pane

0x4a6d,	// (0x0008d4bb) main_video_pane

0x4a6d,	// (0x0008d4bb) main_video_tele_pane

0x08f8,	// (0x00089346) main_viewer_pane_ParamLimits

0x08f8,	// (0x00089346) main_viewer_pane

0x4a6d,	// (0x0008d4bb) main_vorec_pane

0x59d8,	// (0x0008e426) popup_blid_sat_info_window_ParamLimits

0x59d8,	// (0x0008e426) popup_blid_sat_info_window

0x5a30,	// (0x0008e47e) popup_dyc_status_message_window_ParamLimits

0x5a30,	// (0x0008e47e) popup_dyc_status_message_window

0x5a48,	// (0x0008e496) popup_grid_large_graphic_window_ParamLimits

0x5a48,	// (0x0008e496) popup_grid_large_graphic_window

0x5afe,	// (0x0008e54c) popup_loc_request_window_ParamLimits

0x5afe,	// (0x0008e54c) popup_loc_request_window

0x5bfc,	// (0x0008e64a) popup_wml_address_window_ParamLimits

0x5bfc,	// (0x0008e64a) popup_wml_address_window

0x57be,	// (0x0008e20c) call_muted_g1

0x546e,	// (0x0008debc) popup_call_audio_conf_window_ParamLimits

0x546e,	// (0x0008debc) popup_call_audio_conf_window

0x57d2,	// (0x0008e220) popup_call_audio_first_window_ParamLimits

0x57d2,	// (0x0008e220) popup_call_audio_first_window

0x5848,	// (0x0008e296) popup_call_audio_in_window_ParamLimits

0x5848,	// (0x0008e296) popup_call_audio_in_window

0x5884,	// (0x0008e2d2) popup_call_audio_out_window_ParamLimits

0x5884,	// (0x0008e2d2) popup_call_audio_out_window

0x58be,	// (0x0008e30c) popup_call_audio_second_window_ParamLimits

0x58be,	// (0x0008e30c) popup_call_audio_second_window

0x5914,	// (0x0008e362) popup_call_audio_wait_window_ParamLimits

0x5914,	// (0x0008e362) popup_call_audio_wait_window

0x5949,	// (0x0008e397) popup_number_entry_window_ParamLimits

0x5949,	// (0x0008e397) popup_number_entry_window

0x028c,	// (0x00088cda) bg_popup_call_pane_cp05_ParamLimits

0x028c,	// (0x00088cda) bg_popup_call_pane_cp05

0x02ac,	// (0x00088cfa) popup_number_entry_window_t1

0x02bf,	// (0x00088d0d) popup_number_entry_window_t2

0x02d1,	// (0x00088d1f) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00097b49) popup_number_entry_window_t

0x02e3,	// (0x00088d31) text_title_cp2

0x02f6,	// (0x00088d44) bg_popup_call_pane_cp_ParamLimits

0x02f6,	// (0x00088d44) bg_popup_call_pane_cp

0x0304,	// (0x00088d52) call_thumbnail_pane

0x030c,	// (0x00088d5a) popup_call_audio_in_window_g1_ParamLimits

0x030c,	// (0x00088d5a) popup_call_audio_in_window_g1

0x0318,	// (0x00088d66) popup_call_audio_in_window_g2_ParamLimits

0x0318,	// (0x00088d66) popup_call_audio_in_window_g2

0x0324,	// (0x00088d72) popup_call_audio_in_window_g3_ParamLimits

0x0324,	// (0x00088d72) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00097b52) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00097b52) popup_call_audio_in_window_g

0x0330,	// (0x00088d7e) popup_call_audio_in_window_t1_ParamLimits

0x0330,	// (0x00088d7e) popup_call_audio_in_window_t1

0x034b,	// (0x00088d99) popup_call_audio_in_window_t2_ParamLimits

0x034b,	// (0x00088d99) popup_call_audio_in_window_t2

0x0366,	// (0x00088db4) popup_call_audio_in_window_t3_ParamLimits

0x0366,	// (0x00088db4) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00097b59) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00097b59) popup_call_audio_in_window_t

0x02f6,	// (0x00088d44) bg_popup_call_pane_cp01_ParamLimits

0x02f6,	// (0x00088d44) bg_popup_call_pane_cp01

0x0304,	// (0x00088d52) call_thumbnail_pane_cp02

0x0379,	// (0x00088dc7) call_type_pane_cp022

0x0381,	// (0x00088dcf) popup_call_audio_out_window_g1_ParamLimits

0x0381,	// (0x00088dcf) popup_call_audio_out_window_g1

0x0393,	// (0x00088de1) popup_call_audio_out_window_g2_ParamLimits

0x0393,	// (0x00088de1) popup_call_audio_out_window_g2

0x039f,	// (0x00088ded) popup_call_audio_out_window_g3_ParamLimits

0x039f,	// (0x00088ded) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00097b60) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00097b60) popup_call_audio_out_window_g

0x03b1,	// (0x00088dff) popup_call_audio_out_window_t1_ParamLimits

0x03b1,	// (0x00088dff) popup_call_audio_out_window_t1

0x03c9,	// (0x00088e17) popup_call_audio_out_window_t2_ParamLimits

0x03c9,	// (0x00088e17) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00097b67) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00097b67) popup_call_audio_out_window_t

0x03de,	// (0x00088e2c) bg_popup_call_pane_ParamLimits

0x03de,	// (0x00088e2c) bg_popup_call_pane

0x26fa,	// (0x0008b148) call_thumbnail_pane_cp_ParamLimits

0x26fa,	// (0x0008b148) call_thumbnail_pane_cp

0x0462,	// (0x00088eb0) call_type_pane_cp01_ParamLimits

0x0462,	// (0x00088eb0) call_type_pane_cp01

0x04a6,	// (0x00088ef4) popup_call_audio_first_window_g1_ParamLimits

0x04a6,	// (0x00088ef4) popup_call_audio_first_window_g1

0x04f2,	// (0x00088f40) popup_call_audio_first_window_g2_ParamLimits

0x04f2,	// (0x00088f40) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00097b6c) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00097b6c) popup_call_audio_first_window_g

0x0536,	// (0x00088f84) popup_call_audio_first_window_t1_ParamLimits

0x0536,	// (0x00088f84) popup_call_audio_first_window_t1

0x05e2,	// (0x00089030) popup_call_audio_first_window_t4_ParamLimits

0x05e2,	// (0x00089030) popup_call_audio_first_window_t4

0x066e,	// (0x000890bc) popup_call_audio_first_window_t5_ParamLimits

0x066e,	// (0x000890bc) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00097b71) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00097b71) popup_call_audio_first_window_t

0x069d,	// (0x000890eb) bg_popup_call_pane_cp02

0x06a7,	// (0x000890f5) call_type_pane_cp023

0x06af,	// (0x000890fd) popup_call_audio_wait_window_g1

0x06b7,	// (0x00089105) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00097b78) popup_call_audio_wait_window_g

0x06bf,	// (0x0008910d) popup_call_audio_wait_window_t3

0x06cd,	// (0x0008911b) bg_popup_call_pane_cp03_ParamLimits

0x06cd,	// (0x0008911b) bg_popup_call_pane_cp03

0x072d,	// (0x0008917b) call_thumbnail_pane_cp011_ParamLimits

0x072d,	// (0x0008917b) call_thumbnail_pane_cp011

0x0739,	// (0x00089187) call_type_pane_cp034_ParamLimits

0x0739,	// (0x00089187) call_type_pane_cp034

0x0775,	// (0x000891c3) popup_call_audio_second_window_g1_ParamLimits

0x0775,	// (0x000891c3) popup_call_audio_second_window_g1

0x07b1,	// (0x000891ff) popup_call_audio_second_window_g2_ParamLimits

0x07b1,	// (0x000891ff) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00097b7d) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00097b7d) popup_call_audio_second_window_g

0x07ed,	// (0x0008923b) popup_call_audio_second_window_t1_ParamLimits

0x07ed,	// (0x0008923b) popup_call_audio_second_window_t1

0x086e,	// (0x000892bc) popup_call_audio_second_window_t2_ParamLimits

0x086e,	// (0x000892bc) popup_call_audio_second_window_t2

0x08a4,	// (0x000892f2) popup_call_audio_second_window_t3_ParamLimits

0x08a4,	// (0x000892f2) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00097b82) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00097b82) popup_call_audio_second_window_t

0x069d,	// (0x000890eb) bg_popup_call_pane_cp04

0x08da,	// (0x00089328) list_conf_pane

0x08e2,	// (0x00089330) popup_call_audio_conf_window_t1

0x08f0,	// (0x0008933e) call_thumbnail_pane_g1

0x08f8,	// (0x00089346) bg_pinb_pane_ParamLimits

0x08f8,	// (0x00089346) bg_pinb_pane

0x0906,	// (0x00089354) find_pinb_pane

0x090f,	// (0x0008935d) listscroll_pinb_pane_ParamLimits

0x090f,	// (0x0008935d) listscroll_pinb_pane

0x091e,	// (0x0008936c) pinb_bg_pane_g1

0x271e,	// (0x0008b16c) pinb_bg_pane_g2

0x272a,	// (0x0008b178) pinb_bg_pane_g3

0x2736,	// (0x0008b184) pinb_bg_pane_g4

0x2742,	// (0x0008b190) pinb_bg_pane_g5

0x274e,	// (0x0008b19c) pinb_bg_pane_g6

0x2759,	// (0x0008b1a7) pinb_bg_pane_g7

0x2764,	// (0x0008b1b2) pinb_bg_pane_g8

0x276f,	// (0x0008b1bd) pinb_bg_pane_g9

0x2779,	// (0x0008b1c7) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00097b89) pinb_bg_pane_g

0x278e,	// (0x0008b1dc) grid_pinb_pane

0x2797,	// (0x0008b1e5) list_pinb_pane

0x27a0,	// (0x0008b1ee) scroll_pane_cp01_ParamLimits

0x27a0,	// (0x0008b1ee) scroll_pane_cp01

0x0930,	// (0x0008937e) find_pinb_pane_g1_ParamLimits

0x0930,	// (0x0008937e) find_pinb_pane_g1

0x0948,	// (0x00089396) find_pinb_pane_t1

0x095a,	// (0x000893a8) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00097ba3) find_pinb_pane_t

0x096f,	// (0x000893bd) input_focus_pane_cp01_ParamLimits

0x096f,	// (0x000893bd) input_focus_pane_cp01

0x27b2,	// (0x0008b200) cell_pinb_pane_ParamLimits

0x27b2,	// (0x0008b200) cell_pinb_pane

0x27e4,	// (0x0008b232) cell_pinb_pane_g1_ParamLimits

0x27e4,	// (0x0008b232) cell_pinb_pane_g1

0x27f4,	// (0x0008b242) cell_pinb_pane_g2_ParamLimits

0x27f4,	// (0x0008b242) cell_pinb_pane_g2

0x097b,	// (0x000893c9) cell_pinb_pane_g3_ParamLimits

0x097b,	// (0x000893c9) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00097ba8) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00097ba8) cell_pinb_pane_g

0x069d,	// (0x000890eb) grid_highlight_pane_cp01

0x2800,	// (0x0008b24e) list_pinb_item_pane_ParamLimits

0x2800,	// (0x0008b24e) list_pinb_item_pane

0x069d,	// (0x000890eb) list_highlight_pane_cp02

0x0987,	// (0x000893d5) list_pinb_item_pane_g1_ParamLimits

0x0987,	// (0x000893d5) list_pinb_item_pane_g1

0x0994,	// (0x000893e2) list_pinb_item_pane_g2_ParamLimits

0x0994,	// (0x000893e2) list_pinb_item_pane_g2

0x2814,	// (0x0008b262) list_pinb_item_pane_g3_ParamLimits

0x2814,	// (0x0008b262) list_pinb_item_pane_g3

0x09a0,	// (0x000893ee) list_pinb_item_pane_g4_ParamLimits

0x09a0,	// (0x000893ee) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00097baf) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00097baf) list_pinb_item_pane_g

0x09ac,	// (0x000893fa) list_pinb_item_pane_t1_ParamLimits

0x09ac,	// (0x000893fa) list_pinb_item_pane_t1

0x2843,	// (0x0008b291) calc_display_pane

0x2869,	// (0x0008b2b7) calc_paper_pane

0x288c,	// (0x0008b2da) grid_calc_pane

0x069d,	// (0x000890eb) bg_list_pane_cp01

0x28b8,	// (0x0008b306) clock_g1

0x28c0,	// (0x0008b30e) clock_g2

0x0001,

0xf16a,	// (0x00097bb8) clock_g

0x28c8,	// (0x0008b316) clock_t1_ParamLimits

0x28c8,	// (0x0008b316) clock_t1

0x28dd,	// (0x0008b32b) clock_t2_ParamLimits

0x28dd,	// (0x0008b32b) clock_t2

0x28ef,	// (0x0008b33d) clock_t3_ParamLimits

0x28ef,	// (0x0008b33d) clock_t3

0x2901,	// (0x0008b34f) clock_t4_ParamLimits

0x2901,	// (0x0008b34f) clock_t4

0x2913,	// (0x0008b361) clock_t5_ParamLimits

0x2913,	// (0x0008b361) clock_t5

0x2928,	// (0x0008b376) clock_t6_ParamLimits

0x2928,	// (0x0008b376) clock_t6

0x293a,	// (0x0008b388) clock_t7_ParamLimits

0x293a,	// (0x0008b388) clock_t7

0x294c,	// (0x0008b39a) clock_t8_ParamLimits

0x294c,	// (0x0008b39a) clock_t8

0x2960,	// (0x0008b3ae) clock_t9_ParamLimits

0x2960,	// (0x0008b3ae) clock_t9

0x0008,

0xf16f,	// (0x00097bbd) clock_t_ParamLimits

0xf16f,	// (0x00097bbd) clock_t

0x09c3,	// (0x00089411) popup_clock_analogue_window_cp02

0x09c3,	// (0x00089411) popup_clock_digital_window_cp01

0x09cb,	// (0x00089419) listscroll_help_pane

0x069d,	// (0x000890eb) phob_pre_status_pane

0x09d5,	// (0x00089423) grid_qdial_pane

0x069d,	// (0x000890eb) listscroll_mce_pane

0x09df,	// (0x0008942d) bg_notes_pane

0x09e9,	// (0x00089437) list_notes_pane

0x2974,	// (0x0008b3c2) scroll_pane_cp06

0x09f3,	// (0x00089441) bg_calc_paper_pane

0xb011,	// (0x00093a5f) list_calc_pane

0x0a07,	// (0x00089455) bg_calc_display_pane

0x297f,	// (0x0008b3cd) calc_display_pane_t1

0x2991,	// (0x0008b3df) calc_display_pane_t2

0xb02b,	// (0x00093a79) calc_display_pane_t3

0x0002,

0xf182,	// (0x00097bd0) calc_display_pane_t

0x29a3,	// (0x0008b3f1) cell_calc_pane_ParamLimits

0x29a3,	// (0x0008b3f1) cell_calc_pane

0x0a13,	// (0x00089461) bg_calc_paper_pane_g1

0x0a1f,	// (0x0008946d) bg_calc_paper_pane_g2

0x0a2b,	// (0x00089479) bg_calc_paper_pane_g3

0x0a37,	// (0x00089485) bg_calc_paper_pane_g4

0x0a43,	// (0x00089491) bg_calc_paper_pane_g5

0x29d8,	// (0x0008b426) bg_calc_paper_pane_g6

0x29e7,	// (0x0008b435) bg_calc_paper_pane_g7

0x29f6,	// (0x0008b444) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00097bd7) bg_calc_paper_pane_g

0x2a09,	// (0x0008b457) calc_bg_paper_pane_g9

0x2a1c,	// (0x0008b46a) list_calc_item_pane_ParamLimits

0x2a1c,	// (0x0008b46a) list_calc_item_pane

0x0a4f,	// (0x0008949d) list_calc_item_pane_g1

0xb03d,	// (0x00093a8b) list_calc_item_pane_t1_ParamLimits

0xb03d,	// (0x00093a8b) list_calc_item_pane_t1

0x2a32,	// (0x0008b480) list_calc_item_pane_t2_ParamLimits

0x2a32,	// (0x0008b480) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00097be8) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00097be8) list_calc_item_pane_t

0x0a5c,	// (0x000894aa) cell_calc_pane_g1

0x0a66,	// (0x000894b4) grid_highlight_pane_cp02

0x0a88,	// (0x000894d6) bg_calc_display_pane_g1

0xb04f,	// (0x00093a9d) bg_calc_display_pane_g2

0x0a91,	// (0x000894df) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00097bf2) bg_calc_display_pane_g

0x2a66,	// (0x0008b4b4) cell_qdial_pane_ParamLimits

0x2a66,	// (0x0008b4b4) cell_qdial_pane

0x2a7a,	// (0x0008b4c8) cell_qdial_pane_g1_ParamLimits

0x2a7a,	// (0x0008b4c8) cell_qdial_pane_g1

0x2a90,	// (0x0008b4de) cell_qdial_pane_g2_ParamLimits

0x2a90,	// (0x0008b4de) cell_qdial_pane_g2

0x0a9a,	// (0x000894e8) cell_qdial_pane_g3_ParamLimits

0x0a9a,	// (0x000894e8) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00097bf9) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00097bf9) cell_qdial_pane_g

0x2ab7,	// (0x0008b505) cell_qdial_pane_t1_ParamLimits

0x2ab7,	// (0x0008b505) cell_qdial_pane_t1

0x2acf,	// (0x0008b51d) cell_qdial_pane_t2_ParamLimits

0x2acf,	// (0x0008b51d) cell_qdial_pane_t2

0x2ae2,	// (0x0008b530) cell_qdial_pane_t3_ParamLimits

0x2ae2,	// (0x0008b530) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00097c02) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00097c02) cell_qdial_pane_t

0x069d,	// (0x000890eb) grid_highlight_pane_cp04

0x0aa6,	// (0x000894f4) thumbnail_qdial_pane_ParamLimits

0x0aa6,	// (0x000894f4) thumbnail_qdial_pane

0x0b02,	// (0x00089550) list_help_pane

0x0b0b,	// (0x00089559) scroll_pane_cp02

0x2af5,	// (0x0008b543) help_list_pane_t1_ParamLimits

0x2af5,	// (0x0008b543) help_list_pane_t1

0xb059,	// (0x00093aa7) bg_notes_pane_g2

0xb061,	// (0x00093aaf) bg_notes_pane_g3

0xb069,	// (0x00093ab7) notes_bg_pane_g1

0xb071,	// (0x00093abf) notes_bg_pane_g4

0xb079,	// (0x00093ac7) notes_bg_pane_g5

0xb081,	// (0x00093acf) notes_bg_pane_g6

0xb089,	// (0x00093ad7) notes_bg_pane_g7

0xb091,	// (0x00093adf) notes_bg_pane_g8

0xb099,	// (0x00093ae7) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00097c20) notes_bg_pane_g

0xe85b,	// (0x000972a9) list_notes_text_pane_ParamLimits

0xe85b,	// (0x000972a9) list_notes_text_pane

0x0b14,	// (0x00089562) list_notes_text_pane_g1

0x2b15,	// (0x0008b563) list_notes_text_pane_t1

0x0a07,	// (0x00089455) listscroll_cale_week_pane

0x2b40,	// (0x0008b58e) bg_cale_heading_pane

0x0b2e,	// (0x0008957c) bg_cale_pane_cp01

0x2b58,	// (0x0008b5a6) cale_week_corner_pane

0x2b69,	// (0x0008b5b7) cale_week_day_heading_pane

0x2b81,	// (0x0008b5cf) cale_week_scroll_pane_g1

0x2b96,	// (0x0008b5e4) cale_week_scroll_pane_g2

0x2ba7,	// (0x0008b5f5) cale_week_scroll_pane_g3

0x2bb8,	// (0x0008b606) cale_week_scroll_pane_g4

0x2bc9,	// (0x0008b617) cale_week_scroll_pane_g5

0x2bda,	// (0x0008b628) cale_week_scroll_pane_g6

0x2beb,	// (0x0008b639) cale_week_scroll_pane_g7

0x2bfc,	// (0x0008b64a) cale_week_scroll_pane_g8

0x2c0d,	// (0x0008b65b) cale_week_scroll_pane_g9

0x2c1e,	// (0x0008b66c) cale_week_scroll_pane_g10

0x2c2f,	// (0x0008b67d) cale_week_scroll_pane_g11

0x2c40,	// (0x0008b68e) cale_week_scroll_pane_g12

0x2c51,	// (0x0008b69f) cale_week_scroll_pane_g13

0x2c62,	// (0x0008b6b0) cale_week_scroll_pane_g14

0x2c73,	// (0x0008b6c1) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00097c2f) cale_week_scroll_pane_g

0x2c84,	// (0x0008b6d2) cale_week_time_pane

0x2c95,	// (0x0008b6e3) grid_cale_week_pane

0x2ca8,	// (0x0008b6f6) scroll_pane_cp08

0x2cc2,	// (0x0008b710) cell_cale_week_pane_ParamLimits

0x2cc2,	// (0x0008b710) cell_cale_week_pane

0x2cfe,	// (0x0008b74c) cale_week_day_heading_pane_t1

0x2d12,	// (0x0008b760) cale_week_day_heading_pane_t2

0x2d26,	// (0x0008b774) cale_week_day_heading_pane_t3

0x2d3a,	// (0x0008b788) cale_week_day_heading_pane_t4

0x2d4e,	// (0x0008b79c) cale_week_day_heading_pane_t5

0x2d62,	// (0x0008b7b0) cale_week_day_heading_pane_t6

0x2d76,	// (0x0008b7c4) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00097c4e) cale_week_day_heading_pane_t

0x0b59,	// (0x000895a7) bg_cale_side_pane

0x2d8a,	// (0x0008b7d8) cale_week_time_pane_t1

0x2da2,	// (0x0008b7f0) cale_week_time_pane_t2

0x2dba,	// (0x0008b808) cale_week_time_pane_t3

0x2dd2,	// (0x0008b820) cale_week_time_pane_t4

0x2dea,	// (0x0008b838) cale_week_time_pane_t5

0x2e02,	// (0x0008b850) cale_week_time_pane_t6

0x2e1a,	// (0x0008b868) cale_week_time_pane_t7

0x2e32,	// (0x0008b880) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00097c5d) cale_week_time_pane_t

0x2e4a,	// (0x0008b898) cell_cale_week_pane_g2

0x2e66,	// (0x0008b8b4) cell_cale_week_pane_g3_ParamLimits

0x2e66,	// (0x0008b8b4) cell_cale_week_pane_g3

0x0b67,	// (0x000895b5) grid_highlight_pane_cp07

0x0b6f,	// (0x000895bd) listscroll_gms_pane

0x0b79,	// (0x000895c7) grid_gms_pane

0x0b82,	// (0x000895d0) listscroll_gms_pane_g1

0x0b8a,	// (0x000895d8) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00097c6e) listscroll_gms_pane_g

0x2e7e,	// (0x0008b8cc) scroll_pane_cp010

0x2e89,	// (0x0008b8d7) cell_gms_pane_ParamLimits

0x2e89,	// (0x0008b8d7) cell_gms_pane

0x2e9c,	// (0x0008b8ea) cell_gms_pane_g1

0x0b92,	// (0x000895e0) cell_gms_pane_g2

0x0b14,	// (0x00089562) cell_gms_pane_g3

0x0b9a,	// (0x000895e8) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00097c73) cell_gms_pane_g

0x0ba3,	// (0x000895f1) grid_highlight_pane_cp09

0x5766,	// (0x0008e1b4) phob_pre_status_pane_g1

0x576e,	// (0x0008e1bc) phob_pre_status_pane_g2

0x5776,	// (0x0008e1c4) phob_pre_status_pane_g3

0x577e,	// (0x0008e1cc) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00098062) phob_pre_status_pane_g

0x5790,	// (0x0008e1de) phob_pre_status_pane_t1

0x579e,	// (0x0008e1ec) phob_pre_status_pane_t2

0x57ae,	// (0x0008e1fc) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0009806d) phob_pre_status_pane_t

0x069d,	// (0x000890eb) bg_list_pane_cp05

0xb0a9,	// (0x00093af7) grid_vorec_pane

0xb0b1,	// (0x00093aff) vorec_t1

0xb0bf,	// (0x00093b0d) vorec_t2

0xb0cd,	// (0x00093b1b) vorec_t3

0xb0db,	// (0x00093b29) vorec_t4

0xb0e9,	// (0x00093b37) vorec_t5

0xb0f7,	// (0x00093b45) vorec_t6

0x0006,

0xf22e,	// (0x00097c7c) vorec_t

0xb113,	// (0x00093b61) wait_bar_pane_cp01

0x0bab,	// (0x000895f9) cell_vorec_pane_ParamLimits

0x0bab,	// (0x000895f9) cell_vorec_pane

0x0bbe,	// (0x0008960c) cell_vorec_pane_g1

0x069d,	// (0x000890eb) grid_highlight_pane_cp05

0x2ebc,	// (0x0008b90a) cams_zoom_pane

0x2ecb,	// (0x0008b919) image_vga_pane

0x2ee5,	// (0x0008b933) main_camera_pane_g1

0x2ef7,	// (0x0008b945) main_camera_pane_g2

0x2f09,	// (0x0008b957) main_camera_pane_g3

0x2f1b,	// (0x0008b969) main_camera_pane_g4

0x2f2d,	// (0x0008b97b) main_camera_pane_g5

0x2f3f,	// (0x0008b98d) main_camera_pane_g6

0x2f51,	// (0x0008b99f) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00097c8b) main_camera_pane_g

0x2f63,	// (0x0008b9b1) main_camera_pane_t1

0x2f79,	// (0x0008b9c7) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00097c9c) main_camera_pane_t

0x2fb5,	// (0x0008ba03) cams_zoom_pane_cp_ParamLimits

0x2fb5,	// (0x0008ba03) cams_zoom_pane_cp

0x2fdd,	// (0x0008ba2b) image_cif_pane_ParamLimits

0x2fdd,	// (0x0008ba2b) image_cif_pane

0x3018,	// (0x0008ba66) image_subqcif_pane

0x3020,	// (0x0008ba6e) main_video_pane_g1_ParamLimits

0x3020,	// (0x0008ba6e) main_video_pane_g1

0x3044,	// (0x0008ba92) main_video_pane_g2_ParamLimits

0x3044,	// (0x0008ba92) main_video_pane_g2

0x307a,	// (0x0008bac8) main_video_pane_g3_ParamLimits

0x307a,	// (0x0008bac8) main_video_pane_g3

0x30aa,	// (0x0008baf8) main_video_pane_g4_ParamLimits

0x30aa,	// (0x0008baf8) main_video_pane_g4

0x30da,	// (0x0008bb28) main_video_pane_g5_ParamLimits

0x30da,	// (0x0008bb28) main_video_pane_g5

0x0bd4,	// (0x00089622) main_video_pane_g6_ParamLimits

0x0bd4,	// (0x00089622) main_video_pane_g6

0x0006,

0xf253,	// (0x00097ca1) main_video_pane_g_ParamLimits

0xf253,	// (0x00097ca1) main_video_pane_g

0x3105,	// (0x0008bb53) main_video_pane_t1_ParamLimits

0x3105,	// (0x0008bb53) main_video_pane_t1

0x0bee,	// (0x0008963c) cams_zoom_pane_g1

0x0bf7,	// (0x00089645) cams_zoom_pane_g2

0x0c00,	// (0x0008964e) cams_zoom_pane_g3

0x0c09,	// (0x00089657) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00097cb0) cams_zoom_pane_g

0x3162,	// (0x0008bbb0) grid_cams_pane

0x317c,	// (0x0008bbca) linegrid_cams_pane

0x318f,	// (0x0008bbdd) cell_cams_pane_ParamLimits

0x318f,	// (0x0008bbdd) cell_cams_pane

0x0c12,	// (0x00089660) cams_burst_image_pane

0x0c1a,	// (0x00089668) cell_cams_pane_g1

0x069d,	// (0x000890eb) grid_highlight_pane_cp03

0x0a5c,	// (0x000894aa) mp_bg_pane_g1

0x069d,	// (0x000890eb) bg_list_pane_cp03

0xc47f,	// (0x00094ecd) bg_mp_pane

0xc487,	// (0x00094ed5) grid_mp_pane

0xc48f,	// (0x00094edd) media_player_g1

0xc497,	// (0x00094ee5) media_player_t1

0xc4a5,	// (0x00094ef3) media_player_t2

0xc4b3,	// (0x00094f01) media_player_t3

0xc4c1,	// (0x00094f0f) media_player_t4

0xc4cf,	// (0x00094f1d) media_player_t5

0xc4dd,	// (0x00094f2b) media_player_t6

0xc4eb,	// (0x00094f39) media_player_t7

0x0006,

0xf5fe,	// (0x0009804c) media_player_t

0xc4f9,	// (0x00094f47) wait_bar_pane_cp02

0xf5e3,	// (0x00098031) main_usb_pane_t

0x575d,	// (0x0008e1ab) cell_mp_pane

0x0a5c,	// (0x000894aa) cell_mp_pane_g1

0x069d,	// (0x000890eb) grid_highlight_pane_cp06

0x0c22,	// (0x00089670) grid_skin_colour_pane

0x0c2a,	// (0x00089678) list_highlight_pane_cp03

0x32bf,	// (0x0008bd0d) skin_g1

0x0c32,	// (0x00089680) skin_t1

0x0c41,	// (0x0008968f) skin_t2

0x0001,

0xf297,	// (0x00097ce5) skin_t

0x32c7,	// (0x0008bd15) cell_skin_colour_pane_ParamLimits

0x32c7,	// (0x0008bd15) cell_skin_colour_pane

0x0c4f,	// (0x0008969d) cell_skin_colour_pane_g1

0x3325,	// (0x0008bd73) call_video_g1_ParamLimits

0x3325,	// (0x0008bd73) call_video_g1

0x3341,	// (0x0008bd8f) call_video_g2_ParamLimits

0x3341,	// (0x0008bd8f) call_video_g2

0x0001,

0xf29c,	// (0x00097cea) call_video_g_ParamLimits

0xf29c,	// (0x00097cea) call_video_g

0x3377,	// (0x0008bdc5) call_video_uplink_pane_cp1_ParamLimits

0x3377,	// (0x0008bdc5) call_video_uplink_pane_cp1

0x0c69,	// (0x000896b7) call_video_uplink_pane_cp2

0x33f5,	// (0x0008be43) video_down_crop_pane_ParamLimits

0x33f5,	// (0x0008be43) video_down_crop_pane

0x34bb,	// (0x0008bf09) video_down_pane_ParamLimits

0x34bb,	// (0x0008bf09) video_down_pane

0x0c71,	// (0x000896bf) video_down_subqcif_pane_ParamLimits

0x0c71,	// (0x000896bf) video_down_subqcif_pane

0x0c89,	// (0x000896d7) video_down_subqcif_pane_cp_ParamLimits

0x0c89,	// (0x000896d7) video_down_subqcif_pane_cp

0x0cad,	// (0x000896fb) im_reading_pane_ParamLimits

0x0cad,	// (0x000896fb) im_reading_pane

0x358c,	// (0x0008bfda) im_writing_pane_ParamLimits

0x358c,	// (0x0008bfda) im_writing_pane

0x35a2,	// (0x0008bff0) im_reading_pane_t1

0x0cc7,	// (0x00089715) list_im_pane

0x0cd8,	// (0x00089726) scroll_pane_cp07

0x35de,	// (0x0008c02c) im_writing_pane_t1_ParamLimits

0x35de,	// (0x0008c02c) im_writing_pane_t1

0x0cf1,	// (0x0008973f) im_writing_pane_t2_ParamLimits

0x0cf1,	// (0x0008973f) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00097cf4) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00097cf4) im_writing_pane_t

0x069d,	// (0x000890eb) input_focus_pane_cp04

0x069d,	// (0x000890eb) input_focus_pane_cp05

0x35f3,	// (0x0008c041) list_im_single_pane_ParamLimits

0x35f3,	// (0x0008c041) list_im_single_pane

0x3609,	// (0x0008c057) list_single_im_pane_t1

0x571d,	// (0x0008e16b) blid_accuracy_pane

0x5725,	// (0x0008e173) blid_compass_pane

0x572f,	// (0x0008e17d) main_location_t1

0x573f,	// (0x0008e18d) main_location_t2

0x574f,	// (0x0008e19d) main_location_t3

0x0002,

0xf60d,	// (0x0009805b) main_location_t

0x069d,	// (0x000890eb) aid_levels_location

0x0a5c,	// (0x000894aa) blid_accuracy_pane_g1

0x0a5c,	// (0x000894aa) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00097d56) blid_accuracy_pane_g

0x0d39,	// (0x00089787) wml_content_pane

0x0d77,	// (0x000897c5) wml_button_pane_ParamLimits

0x0d77,	// (0x000897c5) wml_button_pane

0x3618,	// (0x0008c066) wml_list_single_large_pane_ParamLimits

0x3618,	// (0x0008c066) wml_list_single_large_pane

0x362f,	// (0x0008c07d) wml_list_single_medium_pane_ParamLimits

0x362f,	// (0x0008c07d) wml_list_single_medium_pane

0x3647,	// (0x0008c095) wml_list_single_small_pane_ParamLimits

0x3647,	// (0x0008c095) wml_list_single_small_pane

0x0d8b,	// (0x000897d9) wml_selection_box_pane_ParamLimits

0x0d8b,	// (0x000897d9) wml_selection_box_pane

0x0d9e,	// (0x000897ec) wml_list_single_pane_t1

0x0dad,	// (0x000897fb) wml_list_single_medium_pane_t1

0x0dbc,	// (0x0008980a) wml_list_single_large_pane_t1

0x0dcb,	// (0x00089819) input_focus_pane_cp02_ParamLimits

0x0dcb,	// (0x00089819) input_focus_pane_cp02

0x0dde,	// (0x0008982c) wml_selection_box_pane_g1

0x0de7,	// (0x00089835) wml_selection_box_pane_t1_ParamLimits

0x0de7,	// (0x00089835) wml_selection_box_pane_t1

0x08f8,	// (0x00089346) bg_wml_button_pane_ParamLimits

0x08f8,	// (0x00089346) bg_wml_button_pane

0x0dff,	// (0x0008984d) wml_button_pane_g1

0x0e07,	// (0x00089855) wml_button_pane_t1

0x0dff,	// (0x0008984d) wml_button_bg_pane_g1

0x0e17,	// (0x00089865) wml_button_bg_pane_g2

0x0e1f,	// (0x0008986d) wml_button_bg_pane_g3

0x0e27,	// (0x00089875) wml_button_bg_pane_g4

0x0e2f,	// (0x0008987d) wml_button_bg_pane_g5

0x0e37,	// (0x00089885) wml_button_bg_pane_g6

0x0e3f,	// (0x0008988d) wml_button_bg_pane_g7

0x0e47,	// (0x00089895) wml_button_bg_pane_g8

0x0e4f,	// (0x0008989d) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00097cf9) wml_button_bg_pane_g

0x3665,	// (0x0008c0b3) bg_list_pane_cp02

0x0e57,	// (0x000898a5) mce_header_pane_ParamLimits

0x0e57,	// (0x000898a5) mce_header_pane

0x0e6d,	// (0x000898bb) mce_icon_pane

0x0e6d,	// (0x000898bb) mce_image_pane

0x0e76,	// (0x000898c4) mce_text_pane_ParamLimits

0x0e76,	// (0x000898c4) mce_text_pane

0x366d,	// (0x0008c0bb) scroll_pane_cp03

0x0d6f,	// (0x000897bd) scroll_pane_cp04

0x3677,	// (0x0008c0c5) scroll_pane_cp05_ParamLimits

0x3677,	// (0x0008c0c5) scroll_pane_cp05

0x3683,	// (0x0008c0d1) mce_header_field_pane_ParamLimits

0x3683,	// (0x0008c0d1) mce_header_field_pane

0x369a,	// (0x0008c0e8) mce_header_field_pane_2_ParamLimits

0x369a,	// (0x0008c0e8) mce_header_field_pane_2

0x36b0,	// (0x0008c0fe) mce_header_field_pane_3

0x36b8,	// (0x0008c106) list_single_mce_message_pane_ParamLimits

0x36b8,	// (0x0008c106) list_single_mce_message_pane

0x36d0,	// (0x0008c11e) list_single_mce_smart_pane_ParamLimits

0x36d0,	// (0x0008c11e) list_single_mce_smart_pane

0x36f3,	// (0x0008c141) input_focus_pane_cp03

0x36fc,	// (0x0008c14a) list_header_data_pane

0x3704,	// (0x0008c152) mce_header_field_pane_t1

0x3714,	// (0x0008c162) list_single_mce_header_pane_ParamLimits

0x3714,	// (0x0008c162) list_single_mce_header_pane

0x3728,	// (0x0008c176) list_single_mce_header_pane_t1

0x3737,	// (0x0008c185) list_single_mce_message_pane_g1

0x373f,	// (0x0008c18d) list_single_mce_message_pane_t1

0x376b,	// (0x0008c1b9) bg_cale_heading_pane_cp01_ParamLimits

0x376b,	// (0x0008c1b9) bg_cale_heading_pane_cp01

0x378e,	// (0x0008c1dc) bg_cale_pane_cp02_ParamLimits

0x378e,	// (0x0008c1dc) bg_cale_pane_cp02

0x37b1,	// (0x0008c1ff) cale_month_corner_pane

0x37c7,	// (0x0008c215) cale_month_day_heading_pane_ParamLimits

0x37c7,	// (0x0008c215) cale_month_day_heading_pane

0x37f2,	// (0x0008c240) cale_month_pane_g1_ParamLimits

0x37f2,	// (0x0008c240) cale_month_pane_g1

0x380e,	// (0x0008c25c) cale_month_pane_g2_ParamLimits

0x380e,	// (0x0008c25c) cale_month_pane_g2

0x3827,	// (0x0008c275) cale_month_pane_g3_ParamLimits

0x3827,	// (0x0008c275) cale_month_pane_g3

0x3853,	// (0x0008c2a1) cale_month_pane_g4_ParamLimits

0x3853,	// (0x0008c2a1) cale_month_pane_g4

0x387f,	// (0x0008c2cd) cale_month_pane_g5_ParamLimits

0x387f,	// (0x0008c2cd) cale_month_pane_g5

0x38ab,	// (0x0008c2f9) cale_month_pane_g6_ParamLimits

0x38ab,	// (0x0008c2f9) cale_month_pane_g6

0x38d7,	// (0x0008c325) cale_month_pane_g7_ParamLimits

0x38d7,	// (0x0008c325) cale_month_pane_g7

0x3903,	// (0x0008c351) cale_month_pane_g8_ParamLimits

0x3903,	// (0x0008c351) cale_month_pane_g8

0x3937,	// (0x0008c385) cale_month_pane_g9_ParamLimits

0x3937,	// (0x0008c385) cale_month_pane_g9

0x3969,	// (0x0008c3b7) cale_month_pane_g10_ParamLimits

0x3969,	// (0x0008c3b7) cale_month_pane_g10

0x399b,	// (0x0008c3e9) cale_month_pane_g11_ParamLimits

0x399b,	// (0x0008c3e9) cale_month_pane_g11

0x39cd,	// (0x0008c41b) cale_month_pane_g12_ParamLimits

0x39cd,	// (0x0008c41b) cale_month_pane_g12

0x39ff,	// (0x0008c44d) cale_month_pane_g13_ParamLimits

0x39ff,	// (0x0008c44d) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00097d0c) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00097d0c) cale_month_pane_g

0x3a43,	// (0x0008c491) cale_month_week_pane

0x3a54,	// (0x0008c4a2) grid_cale_month_pane_ParamLimits

0x3a54,	// (0x0008c4a2) grid_cale_month_pane

0x3a7a,	// (0x0008c4c8) cale_month_day_heading_pane_t1

0x3ad8,	// (0x0008c526) cale_month_day_heading_pane_t2

0x3b3d,	// (0x0008c58b) cale_month_day_heading_pane_t3

0x3ba2,	// (0x0008c5f0) cale_month_day_heading_pane_t4

0x3c07,	// (0x0008c655) cale_month_day_heading_pane_t5

0x3c6c,	// (0x0008c6ba) cale_month_day_heading_pane_t6

0x3cd1,	// (0x0008c71f) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00097d27) cale_month_day_heading_pane_t

0x0b59,	// (0x000895a7) bg_cale_side_pane_cp01

0x3d36,	// (0x0008c784) cale_month_week_pane_t1

0x3d4d,	// (0x0008c79b) cale_month_week_pane_t2

0x3d64,	// (0x0008c7b2) cale_month_week_pane_t3

0x3d7b,	// (0x0008c7c9) cale_month_week_pane_t4

0x3d92,	// (0x0008c7e0) cale_month_week_pane_t5

0x3da9,	// (0x0008c7f7) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00097d36) cale_month_week_pane_t

0x3dc0,	// (0x0008c80e) cell_cale_month_pane_ParamLimits

0x3dc0,	// (0x0008c80e) cell_cale_month_pane

0xb11b,	// (0x00093b69) cell_cale_month_pane_g1

0x3e90,	// (0x0008c8de) cell_cale_month_pane_t1_ParamLimits

0x3e90,	// (0x0008c8de) cell_cale_month_pane_t1

0x0b67,	// (0x000895b5) grid_highlight_pane_cp08

0x0a5c,	// (0x000894aa) main_smil_g1

0x3eac,	// (0x0008c8fa) smil_status_pane

0x3eb7,	// (0x0008c905) smil_text_pane

0xc39f,	// (0x00094ded) bg_popup_call3_rect_pane_g8

0xc3a7,	// (0x00094df5) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00097fef) bg_popup_call3_rect_pane_g

0xc621,	// (0x0009506f) smil_status_volume_pane_g1

0x3ecb,	// (0x0008c919) smil_status_pane_t1

0xc654,	// (0x000950a2) volume_smil_pane

0x3ee2,	// (0x0008c930) list_smil_text_pane

0x3eec,	// (0x0008c93a) scroll_pane_cp011

0x3ef7,	// (0x0008c945) smil_text_list_pane_t1_ParamLimits

0x3ef7,	// (0x0008c945) smil_text_list_pane_t1

0xb127,	// (0x00093b75) aid_volume_smil_ParamLimits

0xb127,	// (0x00093b75) aid_volume_smil

0x0a5c,	// (0x000894aa) smil_volume_pane_g1

0x0a5c,	// (0x000894aa) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00097d56) smil_volume_pane_g

0x0a07,	// (0x00089455) listscroll_cale_day_pane

0x3f4b,	// (0x0008c999) bg_cale_pane

0x3f63,	// (0x0008c9b1) list_cale_pane

0x3f74,	// (0x0008c9c2) scroll_pane_cp09

0x3f85,	// (0x0008c9d3) cale_bg_pane_g1

0x3f8d,	// (0x0008c9db) cale_bg_pane_g2

0x3f95,	// (0x0008c9e3) cale_bg_pane_g3

0x3f9d,	// (0x0008c9eb) cale_bg_pane_g4

0x3fa5,	// (0x0008c9f3) cale_bg_pane_g5

0x3fad,	// (0x0008c9fb) cale_bg_pane_g6

0x3fb5,	// (0x0008ca03) cale_bg_pane_g7

0x3fbd,	// (0x0008ca0b) cale_bg_pane_g8

0x3fc5,	// (0x0008ca13) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00097d5b) cale_bg_pane_g

0x3fcd,	// (0x0008ca1b) list_cale_time_pane_ParamLimits

0x3fcd,	// (0x0008ca1b) list_cale_time_pane

0x3fe2,	// (0x0008ca30) list_cale_time_pane_g1_ParamLimits

0x3fe2,	// (0x0008ca30) list_cale_time_pane_g1

0x3fee,	// (0x0008ca3c) list_cale_time_pane_g2_ParamLimits

0x3fee,	// (0x0008ca3c) list_cale_time_pane_g2

0x3ffb,	// (0x0008ca49) list_cale_time_pane_g3_ParamLimits

0x3ffb,	// (0x0008ca49) list_cale_time_pane_g3

0x4017,	// (0x0008ca65) list_cale_time_pane_g4_ParamLimits

0x4017,	// (0x0008ca65) list_cale_time_pane_g4

0x4025,	// (0x0008ca73) list_cale_time_pane_g5_ParamLimits

0x4025,	// (0x0008ca73) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00097d6e) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00097d6e) list_cale_time_pane_g

0x4040,	// (0x0008ca8e) list_cale_time_pane_t1_ParamLimits

0x4040,	// (0x0008ca8e) list_cale_time_pane_t1

0x4068,	// (0x0008cab6) list_cale_time_pane_t2_ParamLimits

0x4068,	// (0x0008cab6) list_cale_time_pane_t2

0x4803,	// (0x0008d251) aid_blid_cardinal_pane

0x484d,	// (0x0008d29b) compass_pane_t4

0x4090,	// (0x0008cade) list_cale_time_pane_t4_ParamLimits

0x4090,	// (0x0008cade) list_cale_time_pane_t4

0x485b,	// (0x0008d2a9) compass_pane_t5

0x4869,	// (0x0008d2b7) compass_pane_t6

0x4877,	// (0x0008d2c5) compass_pane_t7

0x48f7,	// (0x0008d345) navi_pane_cc_t1

0x4b14,	// (0x0008d562) aid_phob_thumbnail_center_pane

0x5129,	// (0x0008db77) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00097d7b) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00097d7b) list_cale_time_pane_t

0x02f6,	// (0x00088d44) bg_popup_window_pane_cp02_ParamLimits

0x02f6,	// (0x00088d44) bg_popup_window_pane_cp02

0x40b8,	// (0x0008cb06) heading_pane_cp01_ParamLimits

0x40b8,	// (0x0008cb06) heading_pane_cp01

0x40c4,	// (0x0008cb12) loc_req_pane_ParamLimits

0x40c4,	// (0x0008cb12) loc_req_pane

0x40d4,	// (0x0008cb22) loc_type_pane_ParamLimits

0x40d4,	// (0x0008cb22) loc_type_pane

0x40e6,	// (0x0008cb34) loc_type_pane_t1_ParamLimits

0x40e6,	// (0x0008cb34) loc_type_pane_t1

0x40f8,	// (0x0008cb46) loc_type_pane_t2_ParamLimits

0x40f8,	// (0x0008cb46) loc_type_pane_t2

0x410a,	// (0x0008cb58) loc_type_pane_t3_ParamLimits

0x410a,	// (0x0008cb58) loc_type_pane_t3

0x0002,

0xf334,	// (0x00097d82) loc_type_pane_t_ParamLimits

0xf334,	// (0x00097d82) loc_type_pane_t

0x411c,	// (0x0008cb6a) list_loc_req_pane

0x4126,	// (0x0008cb74) scroll_pane_cp012

0x4131,	// (0x0008cb7f) list_single_loc_request_popup_menu_pane_ParamLimits

0x4131,	// (0x0008cb7f) list_single_loc_request_popup_menu_pane

0x413e,	// (0x0008cb8c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x413e,	// (0x0008cb8c) list_single_loc_request_popup_menu_pane_g1

0x414a,	// (0x0008cb98) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x414a,	// (0x0008cb98) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00097d89) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00097d89) list_single_loc_request_popup_menu_pane_g

0x4156,	// (0x0008cba4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4156,	// (0x0008cba4) list_single_loc_request_popup_menu_pane_t1

0x08f8,	// (0x00089346) bg_popup_window_pane_cp03_ParamLimits

0x08f8,	// (0x00089346) bg_popup_window_pane_cp03

0xe872,	// (0x000972c0) heading_loc_req_pane_ParamLimits

0xe872,	// (0x000972c0) heading_loc_req_pane

0x416c,	// (0x0008cbba) popup_dyc_status_message_window_g1_ParamLimits

0x416c,	// (0x0008cbba) popup_dyc_status_message_window_g1

0x4180,	// (0x0008cbce) popup_dyc_status_message_window_t1_ParamLimits

0x4180,	// (0x0008cbce) popup_dyc_status_message_window_t1

0x4195,	// (0x0008cbe3) popup_dyc_status_message_window_t2_ParamLimits

0x4195,	// (0x0008cbe3) popup_dyc_status_message_window_t2

0x41aa,	// (0x0008cbf8) popup_dyc_status_message_window_t3_ParamLimits

0x41aa,	// (0x0008cbf8) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00097d8e) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00097d8e) popup_dyc_status_message_window_t

0x069d,	// (0x000890eb) bg_heading_pane_cp01

0x41c6,	// (0x0008cc14) heading_loc_req_pane_g1

0x41ce,	// (0x0008cc1c) heading_loc_req_pane_g2

0x41d6,	// (0x0008cc24) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00097d95) heading_loc_req_pane_g

0x41de,	// (0x0008cc2c) heading_loc_req_pane_t1

0x42d6,	// (0x0008cd24) bg_popup_sub_pane_cp01_ParamLimits

0x42d6,	// (0x0008cd24) bg_popup_sub_pane_cp01

0x42e4,	// (0x0008cd32) popup_cale_events_window_g1_ParamLimits

0x42e4,	// (0x0008cd32) popup_cale_events_window_g1

0x4304,	// (0x0008cd52) popup_cale_events_window_g2_ParamLimits

0x4304,	// (0x0008cd52) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00097dc9) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00097dc9) popup_cale_events_window_g

0x4324,	// (0x0008cd72) popup_cale_events_window_t1_ParamLimits

0x4324,	// (0x0008cd72) popup_cale_events_window_t1

0x4336,	// (0x0008cd84) popup_cale_events_window_t2_ParamLimits

0x4336,	// (0x0008cd84) popup_cale_events_window_t2

0x4374,	// (0x0008cdc2) popup_cale_events_window_t3_ParamLimits

0x4374,	// (0x0008cdc2) popup_cale_events_window_t3

0x43ae,	// (0x0008cdfc) popup_cale_events_window_t4_ParamLimits

0x43ae,	// (0x0008cdfc) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00097dce) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00097dce) popup_cale_events_window_t

0x43e4,	// (0x0008ce32) call_type_pane

0x43f4,	// (0x0008ce42) popup_call_status_window_g1

0x4408,	// (0x0008ce56) popup_call_status_window_g2

0x441c,	// (0x0008ce6a) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00097dd7) popup_call_status_window_g

0x442c,	// (0x0008ce7a) call_type_pane_g1

0x4435,	// (0x0008ce83) call_type_pane_g2

0x0001,

0xf390,	// (0x00097dde) call_type_pane_g

0x069d,	// (0x000890eb) bg_popup_sub_pane_cp02

0x443e,	// (0x0008ce8c) listscroll_popup_wml_pane

0x4446,	// (0x0008ce94) list_wml_pane

0x4450,	// (0x0008ce9e) scroll_pane_cp013

0x445b,	// (0x0008cea9) list_single_graphic_popup_wml_pane_ParamLimits

0x445b,	// (0x0008cea9) list_single_graphic_popup_wml_pane

0x0a5c,	// (0x000894aa) list_single_graphic_popup_wml_pane_g1

0x446f,	// (0x0008cebd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00097de3) list_single_graphic_popup_wml_pane_g

0x4477,	// (0x0008cec5) list_single_graphic_popup_wml_pane_t1

0x448d,	// (0x0008cedb) aid_call_pane

0x08f0,	// (0x0008933e) popup_clock_analogue_window_g1

0x08f0,	// (0x0008933e) popup_clock_analogue_window_g2

0xb149,	// (0x00093b97) popup_clock_analogue_window_g3

0xb149,	// (0x00093b97) popup_clock_analogue_window_g4

0x0a5c,	// (0x000894aa) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00097de8) popup_clock_analogue_window_g

0xb151,	// (0x00093b9f) popup_clock_analogue_window_t1

0xb15f,	// (0x00093bad) clock_digital_number_pane_ParamLimits

0xb15f,	// (0x00093bad) clock_digital_number_pane

0xb16b,	// (0x00093bb9) clock_digital_number_pane_cp02_ParamLimits

0xb16b,	// (0x00093bb9) clock_digital_number_pane_cp02

0xb177,	// (0x00093bc5) clock_digital_number_pane_cp03_ParamLimits

0xb177,	// (0x00093bc5) clock_digital_number_pane_cp03

0xb183,	// (0x00093bd1) clock_digital_number_pane_cp04_ParamLimits

0xb183,	// (0x00093bd1) clock_digital_number_pane_cp04

0xb18f,	// (0x00093bdd) clock_digital_separator_pane_ParamLimits

0xb18f,	// (0x00093bdd) clock_digital_separator_pane

0xb19b,	// (0x00093be9) popup_clock_digital_window_t1

0x0a5c,	// (0x000894aa) clock_digital_number_pane_g1

0x0a5c,	// (0x000894aa) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00097d56) clock_digital_number_pane_g

0x0a5c,	// (0x000894aa) clock_digital_separator_pane_g1

0x0a5c,	// (0x000894aa) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00097d56) clock_digital_separator_pane_g

0x069d,	// (0x000890eb) bg_popup_window_pane_cp04

0x4495,	// (0x0008cee3) heading_pane_cp03

0x449d,	// (0x0008ceeb) listscroll_popup_gms_pane

0x44a5,	// (0x0008cef3) grid_large_graphic_popup_pane

0x44af,	// (0x0008cefd) listscroll_popup_gms_pane_g1

0x44b7,	// (0x0008cf05) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00097df3) listscroll_popup_gms_pane_g

0x0d6f,	// (0x000897bd) scroll_pane_cp014

0x44bf,	// (0x0008cf0d) cell_large_graphic_popup_pane_ParamLimits

0x44bf,	// (0x0008cf0d) cell_large_graphic_popup_pane

0x44d7,	// (0x0008cf25) cell_large_graphic_popup_pane_g1_ParamLimits

0x44d7,	// (0x0008cf25) cell_large_graphic_popup_pane_g1

0x44e3,	// (0x0008cf31) cell_large_graphic_popup_pane_g2_ParamLimits

0x44e3,	// (0x0008cf31) cell_large_graphic_popup_pane_g2

0x44ef,	// (0x0008cf3d) cell_large_graphic_popup_pane_g3_ParamLimits

0x44ef,	// (0x0008cf3d) cell_large_graphic_popup_pane_g3

0x44fc,	// (0x0008cf4a) cell_large_graphic_popup_pane_g4_ParamLimits

0x44fc,	// (0x0008cf4a) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00097df8) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00097df8) cell_large_graphic_popup_pane_g

0x450c,	// (0x0008cf5a) grid_highlight_pane_cp010

0x0a5c,	// (0x000894aa) bg_popup_call_pane_g1

0x4516,	// (0x0008cf64) list_single_graphic_popup_conf_pane_ParamLimits

0x4516,	// (0x0008cf64) list_single_graphic_popup_conf_pane

0x4528,	// (0x0008cf76) list_highlight_pane_cp01

0x4531,	// (0x0008cf7f) list_single_graphic_popup_conf_pane_g1

0x4539,	// (0x0008cf87) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00097e01) list_single_graphic_popup_conf_pane_g

0x4541,	// (0x0008cf8f) list_single_graphic_popup_conf_pane_t1

0x454f,	// (0x0008cf9d) linegrid_cams_pane_g1

0x4558,	// (0x0008cfa6) linegrid_cams_pane_g2

0x0b14,	// (0x00089562) linegrid_cams_pane_g3

0x4561,	// (0x0008cfaf) linegrid_cams_pane_g4

0x456a,	// (0x0008cfb8) linegrid_cams_pane_g5

0x4573,	// (0x0008cfc1) linegrid_cams_pane_g6

0x0b9a,	// (0x000895e8) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00097e06) linegrid_cams_pane_g

0x457e,	// (0x0008cfcc) popup_clock_analogue_window

0x457e,	// (0x0008cfcc) popup_clock_digital_window

0x069d,	// (0x000890eb) popup_phob_thumbnail_window

0x0a5c,	// (0x000894aa) call_video_uplink_pane_g1

0x4587,	// (0x0008cfd5) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00097e15) call_video_uplink_pane_g

0x0b67,	// (0x000895b5) video_uplink_pane

0x458f,	// (0x0008cfdd) mce_image_pane_g1

0x4599,	// (0x0008cfe7) mce_image_pane_g2

0x45a1,	// (0x0008cfef) mce_image_pane_g3

0x45a9,	// (0x0008cff7) mce_image_pane_g4

0x45b1,	// (0x0008cfff) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00097e1a) mce_image_pane_g

0x45b9,	// (0x0008d007) control_top_pane_stacon_cp01_ParamLimits

0x45b9,	// (0x0008d007) control_top_pane_stacon_cp01

0x45cd,	// (0x0008d01b) uni_indicator_pane_stacon_cp01_ParamLimits

0x45cd,	// (0x0008d01b) uni_indicator_pane_stacon_cp01

0x45de,	// (0x0008d02c) bg_popup_sub_pane_cp03

0x45e8,	// (0x0008d036) chi_dic_find_pane

0x45f0,	// (0x0008d03e) listscroll_chi_dic_pane

0x45f9,	// (0x0008d047) main_pane_chidic_g1

0x460c,	// (0x0008d05a) chi_dic_find_pane_t1

0x461a,	// (0x0008d068) find_chidic_pane

0x4623,	// (0x0008d071) chi_dic_list_pane_ParamLimits

0x4623,	// (0x0008d071) chi_dic_list_pane

0x4634,	// (0x0008d082) scroll_pane_cp020

0x463c,	// (0x0008d08a) find_chidic_pane_t1

0x069d,	// (0x000890eb) input_focus_pane_cp06

0x464b,	// (0x0008d099) list_chi_dic_pane_ParamLimits

0x464b,	// (0x0008d099) list_chi_dic_pane

0x465f,	// (0x0008d0ad) list_chi_dic_pane_t1_ParamLimits

0x465f,	// (0x0008d0ad) list_chi_dic_pane_t1

0x069d,	// (0x000890eb) list_highlight_pane_cp020

0x4672,	// (0x0008d0c0) bg_cale_heading_pane_g1

0x467a,	// (0x0008d0c8) bg_cale_heading_pane_g2

0x4682,	// (0x0008d0d0) bg_cale_heading_pane_g3

0x468a,	// (0x0008d0d8) bg_cale_heading_pane_g4

0x4694,	// (0x0008d0e2) bg_cale_heading_pane_g5

0x469e,	// (0x0008d0ec) bg_cale_heading_pane_g6

0x46a6,	// (0x0008d0f4) bg_cale_heading_pane_g7

0x46ae,	// (0x0008d0fc) bg_cale_heading_pane_g8

0x46b8,	// (0x0008d106) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00097e25) bg_cale_heading_pane_g

0x4672,	// (0x0008d0c0) bg_cale_side_pane_g1

0x46c2,	// (0x0008d110) bg_cale_side_pane_g2

0x46ca,	// (0x0008d118) bg_cale_side_pane_g3

0x46d2,	// (0x0008d120) bg_cale_side_pane_g4

0x46da,	// (0x0008d128) bg_cale_side_pane_g5

0x46e2,	// (0x0008d130) bg_cale_side_pane_g6

0x46ea,	// (0x0008d138) bg_cale_side_pane_g7

0x46f2,	// (0x0008d140) bg_cale_side_pane_g8

0x46fa,	// (0x0008d148) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00097e38) bg_cale_side_pane_g

0x4702,	// (0x0008d150) popup_call_status_window_ParamLimits

0x4702,	// (0x0008d150) popup_call_status_window

0x4749,	// (0x0008d197) stacon_top_pane

0x4751,	// (0x0008d19f) status_pane_ParamLimits

0x4751,	// (0x0008d19f) status_pane

0x4766,	// (0x0008d1b4) status_small_pane

0x476e,	// (0x0008d1bc) control_pane

0x069d,	// (0x000890eb) stacon_bottom_pane

0x4776,	// (0x0008d1c4) list_single_mce_smart_pane_t1_ParamLimits

0x4776,	// (0x0008d1c4) list_single_mce_smart_pane_t1

0x4789,	// (0x0008d1d7) list_single_mce_smart_pane_t2_ParamLimits

0x4789,	// (0x0008d1d7) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00097e4b) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00097e4b) list_single_mce_smart_pane_t

0x47a8,	// (0x0008d1f6) compass_pane

0x47b1,	// (0x0008d1ff) main_location2_pane_t1

0x47c5,	// (0x0008d213) main_location2_pane_t2

0x47d9,	// (0x0008d227) main_location2_pane_t3

0x0003,

0xf402,	// (0x00097e50) main_location2_pane_t

0x4823,	// (0x0008d271) compass_pane_g1_ParamLimits

0x4823,	// (0x0008d271) compass_pane_g1

0x482f,	// (0x0008d27d) compass_pane_t1

0x483e,	// (0x0008d28c) compass_pane_t2

0x0005,

0xf40b,	// (0x00097e59) compass_pane_t

0x4885,	// (0x0008d2d3) text_secondary_cp61

0x48ee,	// (0x0008d33c) navi_pane_cams_g5

0x4968,	// (0x0008d3b6) navi_pane_im_t1

0x4976,	// (0x0008d3c4) navi_pane_mp_g1_ParamLimits

0x4976,	// (0x0008d3c4) navi_pane_mp_g1

0x498a,	// (0x0008d3d8) navi_pane_mp_g2_ParamLimits

0x498a,	// (0x0008d3d8) navi_pane_mp_g2

0x4996,	// (0x0008d3e4) navi_pane_mp_g3_ParamLimits

0x4996,	// (0x0008d3e4) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00097e6d) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00097e6d) navi_pane_mp_g

0x49a2,	// (0x0008d3f0) navi_pane_mp_t1

0x49b0,	// (0x0008d3fe) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00097e74) navi_pane_mp_t

0x4a5d,	// (0x0008d4ab) navi_pane_vt_g1

0x49a2,	// (0x0008d3f0) navi_pane_vt_t1

0x4a65,	// (0x0008d4b3) navi_slider_pane

0x4a6d,	// (0x0008d4bb) zooming_pane

0x4a75,	// (0x0008d4c3) navi_slider_pane_g1

0xb1b8,	// (0x00093c06) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00097e7b) navi_slider_pane_g

0x4a99,	// (0x0008d4e7) aid_levels_zoom

0x4aa1,	// (0x0008d4ef) zooming_pane_g1

0x4aa9,	// (0x0008d4f7) zooming_pane_g2

0x4aa9,	// (0x0008d4f7) zooming_pane_g3

0x0002,

0xf43c,	// (0x00097e8a) zooming_pane_g

0x4ab1,	// (0x0008d4ff) level_10_zoom

0x4aba,	// (0x0008d508) level_11_zoom

0x4ac3,	// (0x0008d511) level_1_zoom

0x4acc,	// (0x0008d51a) level_2_zoom

0x4ad5,	// (0x0008d523) level_3_zoom

0x4ade,	// (0x0008d52c) level_4_zoom

0x4ae7,	// (0x0008d535) level_5_zoom

0x4af0,	// (0x0008d53e) level_6_zoom

0x4af9,	// (0x0008d547) level_7_zoom

0x4b02,	// (0x0008d550) level_8_zoom

0x4b0b,	// (0x0008d559) level_9_zoom

0x4b1c,	// (0x0008d56a) popup_phob_thumbnail_window_g1

0x4b24,	// (0x0008d572) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00097e91) popup_phob_thumbnail_window_g

0xc501,	// (0x00094f4f) level_1_location

0xc509,	// (0x00094f57) level_2_location

0xc511,	// (0x00094f5f) level_3_location

0xc519,	// (0x00094f67) level_4_location

0x4a6d,	// (0x0008d4bb) level_5_location

0x4b2c,	// (0x0008d57a) mce_icon_pane_g1

0x4b34,	// (0x0008d582) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00097e96) mce_icon_pane_g

0x4b3c,	// (0x0008d58a) main_mup_pane_g1_ParamLimits

0x4b3c,	// (0x0008d58a) main_mup_pane_g1

0x4b52,	// (0x0008d5a0) main_mup_pane_g2_ParamLimits

0x4b52,	// (0x0008d5a0) main_mup_pane_g2

0x4b6a,	// (0x0008d5b8) main_mup_pane_g3_ParamLimits

0x4b6a,	// (0x0008d5b8) main_mup_pane_g3

0x4b82,	// (0x0008d5d0) main_mup_pane_g4_ParamLimits

0x4b82,	// (0x0008d5d0) main_mup_pane_g4

0x4b9a,	// (0x0008d5e8) main_mup_pane_g5_ParamLimits

0x4b9a,	// (0x0008d5e8) main_mup_pane_g5

0x4bb6,	// (0x0008d604) main_mup_pane_g6_ParamLimits

0x4bb6,	// (0x0008d604) main_mup_pane_g6

0x4bce,	// (0x0008d61c) main_mup_pane_g7_ParamLimits

0x4bce,	// (0x0008d61c) main_mup_pane_g7

0x4be6,	// (0x0008d634) main_mup_pane_g8_ParamLimits

0x4be6,	// (0x0008d634) main_mup_pane_g8

0x4bfe,	// (0x0008d64c) main_mup_pane_g9_ParamLimits

0x4bfe,	// (0x0008d64c) main_mup_pane_g9

0x4c18,	// (0x0008d666) main_mup_pane_g10_ParamLimits

0x4c18,	// (0x0008d666) main_mup_pane_g10

0x4c32,	// (0x0008d680) main_mup_pane_g11_ParamLimits

0x4c32,	// (0x0008d680) main_mup_pane_g11

0x4c46,	// (0x0008d694) main_mup_pane_g12_ParamLimits

0x4c46,	// (0x0008d694) main_mup_pane_g12

0x4c5c,	// (0x0008d6aa) main_mup_pane_g13_ParamLimits

0x4c5c,	// (0x0008d6aa) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00097e9b) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00097e9b) main_mup_pane_g

0x4c70,	// (0x0008d6be) main_mup_pane_t1_ParamLimits

0x4c70,	// (0x0008d6be) main_mup_pane_t1

0x4c8a,	// (0x0008d6d8) main_mup_pane_t2_ParamLimits

0x4c8a,	// (0x0008d6d8) main_mup_pane_t2

0x4ca2,	// (0x0008d6f0) main_mup_pane_t3_ParamLimits

0x4ca2,	// (0x0008d6f0) main_mup_pane_t3

0x4cba,	// (0x0008d708) main_mup_pane_t4_ParamLimits

0x4cba,	// (0x0008d708) main_mup_pane_t4

0x4cd8,	// (0x0008d726) main_mup_pane_t5_ParamLimits

0x4cd8,	// (0x0008d726) main_mup_pane_t5

0x4ced,	// (0x0008d73b) main_mup_pane_t6_ParamLimits

0x4ced,	// (0x0008d73b) main_mup_pane_t6

0x0005,

0xf468,	// (0x00097eb6) main_mup_pane_t_ParamLimits

0xf468,	// (0x00097eb6) main_mup_pane_t

0x4cff,	// (0x0008d74d) mup_progress_pane_ParamLimits

0x4cff,	// (0x0008d74d) mup_progress_pane

0x4d0b,	// (0x0008d759) mup_visualizer_pane_ParamLimits

0x4d0b,	// (0x0008d759) mup_visualizer_pane

0x4d3f,	// (0x0008d78d) mup_volume_pane_ParamLimits

0x4d3f,	// (0x0008d78d) mup_volume_pane

0xb1ca,	// (0x00093c18) mup_visualizer_pane_g1_ParamLimits

0xb1ca,	// (0x00093c18) mup_visualizer_pane_g1

0xb1ca,	// (0x00093c18) mup_visualizer_pane_g2_ParamLimits

0xb1ca,	// (0x00093c18) mup_visualizer_pane_g2

0x4823,	// (0x0008d271) mup_visualizer_pane_g3_ParamLimits

0x4823,	// (0x0008d271) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00097ec3) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00097ec3) mup_visualizer_pane_g

0x0a5c,	// (0x000894aa) mup_volume_pane_g1

0xb1e0,	// (0x00093c2e) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00097eca) mup_volume_pane_g

0x0a5c,	// (0x000894aa) mup_progress_pane_g1

0xb1e9,	// (0x00093c37) mup_progress_pane_g2

0xb1f2,	// (0x00093c40) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00097ecf) mup_progress_pane_g

0x069d,	// (0x000890eb) bg_popup_window_pane_cp05

0xb1fb,	// (0x00093c49) heading_pane_cp02_ParamLimits

0xb1fb,	// (0x00093c49) heading_pane_cp02

0xb215,	// (0x00093c63) list_popup_blid_pane

0xb21d,	// (0x00093c6b) list_blid_sat_info_pane_ParamLimits

0xb21d,	// (0x00093c6b) list_blid_sat_info_pane

0xb230,	// (0x00093c7e) list_blid_sat_info_pane_g1

0xb238,	// (0x00093c86) list_blid_sat_info_pane_t1

0x4e55,	// (0x0008d8a3) mup_equalizer_pane_ParamLimits

0x4e55,	// (0x0008d8a3) mup_equalizer_pane

0x4e6e,	// (0x0008d8bc) mup_equalizer_pane_cp1_ParamLimits

0x4e6e,	// (0x0008d8bc) mup_equalizer_pane_cp1

0x4e8b,	// (0x0008d8d9) mup_equalizer_pane_cp2_ParamLimits

0x4e8b,	// (0x0008d8d9) mup_equalizer_pane_cp2

0x4ea8,	// (0x0008d8f6) mup_equalizer_pane_cp3_ParamLimits

0x4ea8,	// (0x0008d8f6) mup_equalizer_pane_cp3

0x4ec9,	// (0x0008d917) mup_equalizer_pane_cp4_ParamLimits

0x4ec9,	// (0x0008d917) mup_equalizer_pane_cp4

0x4eea,	// (0x0008d938) mup_equalizer_pane_cp5

0x4efe,	// (0x0008d94c) mup_equalizer_pane_cp6

0x4f12,	// (0x0008d960) mup_equalizer_pane_cp7

0xc41f,	// (0x00094e6d) bg_popup_call_poc_act_pane_g9

0xc427,	// (0x00094e75) bg_popup_call_poc_act_pane_g10

0xc42f,	// (0x00094e7d) bg_popup_call_poc_act_pane_g11

0x000a,

0x08f8,	// (0x00089346) mup_scale_pane

0x0a5c,	// (0x000894aa) mup_scale_pane_g1

0xb246,	// (0x00093c94) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00097eeb) mup_scale_pane_g

0xb26a,	// (0x00093cb8) msg_data_pane

0xb272,	// (0x00093cc0) scroll_pane_cp017

0x4f38,	// (0x0008d986) bg_list_pane_cp04_ParamLimits

0x4f38,	// (0x0008d986) bg_list_pane_cp04

0xb27a,	// (0x00093cc8) msg_data_pane_g1

0x4f58,	// (0x0008d9a6) msg_data_pane_g2

0x45a1,	// (0x0008cfef) msg_data_pane_g3

0x4f60,	// (0x0008d9ae) msg_data_pane_g4

0x4f68,	// (0x0008d9b6) msg_data_pane_g5

0x4f70,	// (0x0008d9be) msg_data_pane_g6

0x4f78,	// (0x0008d9c6) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00097efa) msg_data_pane_g

0x4f80,	// (0x0008d9ce) msg_text_pane_ParamLimits

0x4f80,	// (0x0008d9ce) msg_text_pane

0x4fa6,	// (0x0008d9f4) qrid_highlight_pane_cp011_ParamLimits

0x4fa6,	// (0x0008d9f4) qrid_highlight_pane_cp011

0x069d,	// (0x000890eb) msg_body_pane

0x069d,	// (0x000890eb) msg_header_pane

0xb28b,	// (0x00093cd9) input_focus_pane_cp07

0x4fca,	// (0x0008da18) msg_header_pane_t1_ParamLimits

0x4fca,	// (0x0008da18) msg_header_pane_t1

0x4fde,	// (0x0008da2c) msg_header_pane_t2_ParamLimits

0x4fde,	// (0x0008da2c) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00097f0e) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00097f0e) msg_header_pane_t

0xb2a0,	// (0x00093cee) msg_body_pane_g1

0x4ff0,	// (0x0008da3e) msg_body_pane_t1_ParamLimits

0x4ff0,	// (0x0008da3e) msg_body_pane_t1

0x5021,	// (0x0008da6f) msg_body_pane_t2_ParamLimits

0x5021,	// (0x0008da6f) msg_body_pane_t2

0x5033,	// (0x0008da81) msg_body_pane_t3_ParamLimits

0x5033,	// (0x0008da81) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00097f13) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00097f13) msg_body_pane_t

0x507f,	// (0x0008dacd) main_viewer_pane_g1_ParamLimits

0x507f,	// (0x0008dacd) main_viewer_pane_g1

0x508d,	// (0x0008dadb) main_viewer_pane_g2_ParamLimits

0x508d,	// (0x0008dadb) main_viewer_pane_g2

0x509b,	// (0x0008dae9) main_viewer_pane_g3_ParamLimits

0x509b,	// (0x0008dae9) main_viewer_pane_g3

0x50aa,	// (0x0008daf8) main_viewer_pane_g4_ParamLimits

0x50aa,	// (0x0008daf8) main_viewer_pane_g4

0xb2c0,	// (0x00093d0e) main_viewer_pane_g5_ParamLimits

0xb2c0,	// (0x00093d0e) main_viewer_pane_g5

0xb2c0,	// (0x00093d0e) main_viewer_pane_g7_ParamLimits

0xb2c0,	// (0x00093d0e) main_viewer_pane_g7

0xb2d2,	// (0x00093d20) main_viewer_pane_g8_ParamLimits

0xb2d2,	// (0x00093d20) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00097f23) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00097f23) main_viewer_pane_g

0xb2ea,	// (0x00093d38) viewer_content_pane_ParamLimits

0xb2ea,	// (0x00093d38) viewer_content_pane

0x50e6,	// (0x0008db34) main_postcard_pane_g1_ParamLimits

0x50e6,	// (0x0008db34) main_postcard_pane_g1

0x50fc,	// (0x0008db4a) main_postcard_pane_g2_ParamLimits

0x50fc,	// (0x0008db4a) main_postcard_pane_g2

0x5112,	// (0x0008db60) main_postcard_pane_g3_ParamLimits

0x5112,	// (0x0008db60) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00097f34) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00097f34) main_postcard_pane_g

0x5129,	// (0x0008db77) main_postcard_pane_g4

0xc634,	// (0x00095082) smil_status_volume_pane_g2

0x516c,	// (0x0008dbba) postcard_pane_ParamLimits

0x516c,	// (0x0008dbba) postcard_pane

0xb2f8,	// (0x00093d46) postcard_pane_g1_ParamLimits

0xb2f8,	// (0x00093d46) postcard_pane_g1

0x51ae,	// (0x0008dbfc) postcard_pane_g2_ParamLimits

0x51ae,	// (0x0008dbfc) postcard_pane_g2

0x51ba,	// (0x0008dc08) postcard_pane_g3_ParamLimits

0x51ba,	// (0x0008dc08) postcard_pane_g3

0xb306,	// (0x00093d54) postcard_pane_g4_ParamLimits

0xb306,	// (0x00093d54) postcard_pane_g4

0x51c6,	// (0x0008dc14) postcard_pane_g5_ParamLimits

0x51c6,	// (0x0008dc14) postcard_pane_g5

0x51db,	// (0x0008dc29) postcard_pane_g6_ParamLimits

0x51db,	// (0x0008dc29) postcard_pane_g6

0xb2f8,	// (0x00093d46) postcard_pane_g7_ParamLimits

0xb2f8,	// (0x00093d46) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00097f41) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00097f41) postcard_pane_g

0x51ef,	// (0x0008dc3d) main_mp2_pane_g1_ParamLimits

0x51ef,	// (0x0008dc3d) main_mp2_pane_g1

0x51fb,	// (0x0008dc49) main_mp2_pane_g2_ParamLimits

0x51fb,	// (0x0008dc49) main_mp2_pane_g2

0x5207,	// (0x0008dc55) main_mp2_pane_g3_ParamLimits

0x5207,	// (0x0008dc55) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00097f50) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00097f50) main_mp2_pane_g

0x5213,	// (0x0008dc61) main_mp2_pane_t1_ParamLimits

0x5213,	// (0x0008dc61) main_mp2_pane_t1

0x5228,	// (0x0008dc76) main_mp2_pane_t2_ParamLimits

0x5228,	// (0x0008dc76) main_mp2_pane_t2

0x523a,	// (0x0008dc88) main_mp2_pane_t3_ParamLimits

0x523a,	// (0x0008dc88) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00097f57) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00097f57) main_mp2_pane_t

0xb314,	// (0x00093d62) pec_content_pane_ParamLimits

0xb314,	// (0x00093d62) pec_content_pane

0x0d6f,	// (0x000897bd) scroll_pane_cp015

0xb326,	// (0x00093d74) pec_attribute_pane_ParamLimits

0xb326,	// (0x00093d74) pec_attribute_pane

0x524c,	// (0x0008dc9a) pec_content_pane_g1_ParamLimits

0x524c,	// (0x0008dc9a) pec_content_pane_g1

0xb336,	// (0x00093d84) pec_content_pane_t1_ParamLimits

0xb336,	// (0x00093d84) pec_content_pane_t1

0xb348,	// (0x00093d96) pec_content_pane_t2_ParamLimits

0xb348,	// (0x00093d96) pec_content_pane_t2

0x0001,

0xf510,	// (0x00097f5e) pec_content_pane_t_ParamLimits

0xf510,	// (0x00097f5e) pec_content_pane_t

0x525a,	// (0x0008dca8) list_single_graphic_pane_cp01_ParamLimits

0x525a,	// (0x0008dca8) list_single_graphic_pane_cp01

0x08f8,	// (0x00089346) bg_popup_sub_pane_cp04

0xb35a,	// (0x00093da8) popup_mup_playback_window_g1

0xb366,	// (0x00093db4) popup_mup_playback_window_t1

0xb37b,	// (0x00093dc9) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00097f63) popup_mup_playback_window_t

0xb3b2,	// (0x00093e00) main_image_pane_g1_ParamLimits

0xb3b2,	// (0x00093e00) main_image_pane_g1

0xb3f5,	// (0x00093e43) scroll_pane_cp018_ParamLimits

0xb3f5,	// (0x00093e43) scroll_pane_cp018

0xb40d,	// (0x00093e5b) scroll_pane_cp016_ParamLimits

0xb40d,	// (0x00093e5b) scroll_pane_cp016

0x532a,	// (0x0008dd78) smil2_image_pane_ParamLimits

0x532a,	// (0x0008dd78) smil2_image_pane

0x535e,	// (0x0008ddac) smil2_root_pane_ParamLimits

0x535e,	// (0x0008ddac) smil2_root_pane

0x5396,	// (0x0008dde4) smil2_text_pane_ParamLimits

0x5396,	// (0x0008dde4) smil2_text_pane

0x069d,	// (0x000890eb) bg_list_pane_cp06

0xb449,	// (0x00093e97) grid_radio_pane

0x069d,	// (0x000890eb) bg_popup_window_pane_cp06

0xb451,	// (0x00093e9f) main_fmradio_pane_t1

0x4495,	// (0x0008cee3) heading_pane_cp04

0xb45f,	// (0x00093ead) main_fmradio_pane_t2

0xc437,	// (0x00094e85) popup_cale_lunar_info_window_g1

0xb46d,	// (0x00093ebb) main_fmradio_pane_t3

0xc43f,	// (0x00094e8d) popup_cale_lunar_info_window_g2

0xb47b,	// (0x00093ec9) main_fmradio_pane_t4

0x0001,

0xb489,	// (0x00093ed7) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0009803e) popup_cale_lunar_info_window_g

0xf52a,	// (0x00097f78) main_fmradio_pane_t

0xb497,	// (0x00093ee5) wait_bar_pane_cp03

0xb49f,	// (0x00093eed) cell_fmradio_pane_ParamLimits

0xb49f,	// (0x00093eed) cell_fmradio_pane

0xb2f8,	// (0x00093d46) cell_fmradio_pane_g1_ParamLimits

0xb2f8,	// (0x00093d46) cell_fmradio_pane_g1

0x069d,	// (0x000890eb) grid_highlight_pane_cp011

0xb4b2,	// (0x00093f00) poc_content_pane_ParamLimits

0xb4b2,	// (0x00093f00) poc_content_pane

0xb4c4,	// (0x00093f12) scroll_pane_cp019

0x5416,	// (0x0008de64) popup_call_poc_act_window_ParamLimits

0x5416,	// (0x0008de64) popup_call_poc_act_window

0x543a,	// (0x0008de88) popup_call_poc_inact_window_ParamLimits

0x543a,	// (0x0008de88) popup_call_poc_inact_window

0xf5c7,	// (0x00098015) bg_popup_call_poc_act_pane_g

0xc3af,	// (0x00094dfd) bg_popup_call_poc_inact_pane_g1

0xc3b7,	// (0x00094e05) bg_popup_call_poc_inact_pane_g2

0xb4cc,	// (0x00093f1a) popup_call_poc_act_window_g2

0xc3bf,	// (0x00094e0d) bg_popup_call_poc_inact_pane_g3

0xc3c7,	// (0x00094e15) bg_popup_call_poc_inact_pane_g4

0xc3cf,	// (0x00094e1d) bg_popup_call_poc_inact_pane_g5

0xb4d4,	// (0x00093f22) popup_call_poc_act_window_t1_ParamLimits

0xb4d4,	// (0x00093f22) popup_call_poc_act_window_t1

0xb4fc,	// (0x00093f4a) popup_call_poc_act_window_t2_ParamLimits

0xb4fc,	// (0x00093f4a) popup_call_poc_act_window_t2

0xb524,	// (0x00093f72) popup_call_poc_act_window_t3_ParamLimits

0xb524,	// (0x00093f72) popup_call_poc_act_window_t3

0xb54c,	// (0x00093f9a) popup_call_poc_act_window_t4_ParamLimits

0xb54c,	// (0x00093f9a) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00097f83) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00097f83) popup_call_poc_act_window_t

0xc3d7,	// (0x00094e25) bg_popup_call_poc_inact_pane_g6

0xc3df,	// (0x00094e2d) bg_popup_call_poc_inact_pane_g7

0xc3e7,	// (0x00094e35) bg_popup_call_poc_inact_pane_g8

0xb55e,	// (0x00093fac) popup_call_poc_inact_window_g2

0xc3ef,	// (0x00094e3d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00098002) bg_popup_call_poc_inact_pane_g

0xb566,	// (0x00093fb4) popup_call_poc_inact_window_t1_ParamLimits

0xb566,	// (0x00093fb4) popup_call_poc_inact_window_t1

0xb57b,	// (0x00093fc9) popup_call_poc_inact_window_t2_ParamLimits

0xb57b,	// (0x00093fc9) popup_call_poc_inact_window_t2

0xb590,	// (0x00093fde) popup_call_poc_inact_window_t3_ParamLimits

0xb590,	// (0x00093fde) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00097f8c) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00097f8c) popup_call_poc_inact_window_t

0xc5a7,	// (0x00094ff5) context_pane_ParamLimits

0x5c64,	// (0x0008e6b2) signal_pane_ParamLimits

0x4a6d,	// (0x0008d4bb) main_call2_pane

0xc595,	// (0x00094fe3) popup_phob_thumbnail2_window_ParamLimits

0xc595,	// (0x00094fe3) popup_phob_thumbnail2_window

0xb2a8,	// (0x00093cf6) aid_hotspot_pointer_arrow_pane

0xb2b0,	// (0x00093cfe) aid_hotspot_pointer_hand_pane

0x5788,	// (0x0008e1d6) phob_pre_status_pane_g5

0x2ebc,	// (0x0008b90a) cams_zoom_pane_ParamLimits

0x2ecb,	// (0x0008b919) image_vga_pane_ParamLimits

0x2ee5,	// (0x0008b933) main_camera_pane_g1_ParamLimits

0x2ef7,	// (0x0008b945) main_camera_pane_g2_ParamLimits

0x2f09,	// (0x0008b957) main_camera_pane_g3_ParamLimits

0x2f1b,	// (0x0008b969) main_camera_pane_g4_ParamLimits

0x2f2d,	// (0x0008b97b) main_camera_pane_g5_ParamLimits

0x2f3f,	// (0x0008b98d) main_camera_pane_g6_ParamLimits

0x2f51,	// (0x0008b99f) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00097c8b) main_camera_pane_g_ParamLimits

0x2f63,	// (0x0008b9b1) main_camera_pane_t1_ParamLimits

0x2f79,	// (0x0008b9c7) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00097c9c) main_camera_pane_t_ParamLimits

0x08f8,	// (0x00089346) bg_popup_preview_window_pane_cp01_ParamLimits

0x08f8,	// (0x00089346) bg_popup_preview_window_pane_cp01

0xb5a5,	// (0x00093ff3) popup_phob_thumbnail2_window_g1_ParamLimits

0xb5a5,	// (0x00093ff3) popup_phob_thumbnail2_window_g1

0x069d,	// (0x000890eb) call2_cli_visual_pane

0x546e,	// (0x0008debc) popup_call2_audio_conf_window_ParamLimits

0x546e,	// (0x0008debc) popup_call2_audio_conf_window

0x548e,	// (0x0008dedc) popup_call2_audio_first_window_ParamLimits

0x548e,	// (0x0008dedc) popup_call2_audio_first_window

0x5524,	// (0x0008df72) popup_call2_audio_in_window_ParamLimits

0x5524,	// (0x0008df72) popup_call2_audio_in_window

0x556c,	// (0x0008dfba) popup_call2_audio_out_window_ParamLimits

0x556c,	// (0x0008dfba) popup_call2_audio_out_window

0x55d6,	// (0x0008e024) popup_call2_audio_second_window_ParamLimits

0x55d6,	// (0x0008e024) popup_call2_audio_second_window

0x563c,	// (0x0008e08a) popup_call2_audio_wait_window_ParamLimits

0x563c,	// (0x0008e08a) popup_call2_audio_wait_window

0x069d,	// (0x000890eb) bg_popup_call2_act_pane_cp03

0x08da,	// (0x00089328) list_conf_pane_cp

0xb5b1,	// (0x00093fff) popup_call2_audio_conf_window_t1

0xb5bf,	// (0x0009400d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb5bf,	// (0x0009400d) list_single_graphic_popup_conf2_pane

0x4528,	// (0x0008cf76) list_highlight_pane_cp04

0xb5d2,	// (0x00094020) list_single_graphic_popup_conf2_pane_g1

0x4539,	// (0x0008cf87) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00097f93) list_single_graphic_popup_conf2_pane_g

0xb5dc,	// (0x0009402a) list_single_graphic_popup_conf2_pane_t1

0xb5ea,	// (0x00094038) bg_popup_call2_act_pane_cp01_ParamLimits

0xb5ea,	// (0x00094038) bg_popup_call2_act_pane_cp01

0xb674,	// (0x000940c2) call_type_pane_cp05_ParamLimits

0xb674,	// (0x000940c2) call_type_pane_cp05

0xb6c8,	// (0x00094116) popup_call2_audio_second_window_g1_ParamLimits

0xb6c8,	// (0x00094116) popup_call2_audio_second_window_g1

0xb71c,	// (0x0009416a) popup_call2_audio_second_window_g2_ParamLimits

0xb71c,	// (0x0009416a) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00097f98) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00097f98) popup_call2_audio_second_window_g

0xb781,	// (0x000941cf) popup_call2_audio_second_window_t1_ParamLimits

0xb781,	// (0x000941cf) popup_call2_audio_second_window_t1

0xb83c,	// (0x0009428a) popup_call2_audio_second_window_t2_ParamLimits

0xb83c,	// (0x0009428a) popup_call2_audio_second_window_t2

0xb88f,	// (0x000942dd) popup_call2_audio_second_window_t3_ParamLimits

0xb88f,	// (0x000942dd) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00097f9f) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00097f9f) popup_call2_audio_second_window_t

0x069d,	// (0x000890eb) bg_popup_call2_in_pane_cp02

0x06a7,	// (0x000890f5) call_type_pane_cp04

0x06af,	// (0x000890fd) popup_call2_audio_wait_window_g1

0x06b7,	// (0x00089105) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00097b78) popup_call2_audio_wait_window_g

0x06bf,	// (0x0008910d) popup_call2_audio_wait_window_t3

0xb982,	// (0x000943d0) bg_popup_call2_act_pane_ParamLimits

0xb982,	// (0x000943d0) bg_popup_call2_act_pane

0xba42,	// (0x00094490) call_type_pane_cp03_ParamLimits

0xba42,	// (0x00094490) call_type_pane_cp03

0xbaa6,	// (0x000944f4) popup_call2_audio_first_window_g1_ParamLimits

0xbaa6,	// (0x000944f4) popup_call2_audio_first_window_g1

0xbb16,	// (0x00094564) popup_call2_audio_first_window_g2_ParamLimits

0xbb16,	// (0x00094564) popup_call2_audio_first_window_g2

0xb1ca,	// (0x00093c18) popup_call2_audio_first_window_g3_ParamLimits

0xb1ca,	// (0x00093c18) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00097fa8) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00097fa8) popup_call2_audio_first_window_g

0xbbf4,	// (0x00094642) popup_call2_audio_first_window_t1_ParamLimits

0xbbf4,	// (0x00094642) popup_call2_audio_first_window_t1

0xbcf7,	// (0x00094745) popup_call2_audio_first_window_t4_ParamLimits

0xbcf7,	// (0x00094745) popup_call2_audio_first_window_t4

0xbdda,	// (0x00094828) popup_call2_audio_first_window_t5_ParamLimits

0xbdda,	// (0x00094828) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00097fb3) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00097fb3) popup_call2_audio_first_window_t

0x08f0,	// (0x0008933e) bg_popup_call2_act_pane_g1

0xc447,	// (0x00094e95) popup_cale_lunar_info_window_t1

0xc455,	// (0x00094ea3) popup_cale_lunar_info_window_t2

0xc463,	// (0x00094eb1) popup_cale_lunar_info_window_t3

0x069d,	// (0x000890eb) bg_popup_call2_bubble_pane

0xbedb,	// (0x00094929) bg_popup_call2_in_pane_cp01_ParamLimits

0xbedb,	// (0x00094929) bg_popup_call2_in_pane_cp01

0x0379,	// (0x00088dc7) call_type_pane_cp02

0xbf23,	// (0x00094971) popup_call2_audio_out_window_g1_ParamLimits

0xbf23,	// (0x00094971) popup_call2_audio_out_window_g1

0xbf4f,	// (0x0009499d) popup_call2_audio_out_window_g2_ParamLimits

0xbf4f,	// (0x0009499d) popup_call2_audio_out_window_g2

0xbf77,	// (0x000949c5) popup_call2_audio_out_window_g3_ParamLimits

0xbf77,	// (0x000949c5) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00097fbc) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00097fbc) popup_call2_audio_out_window_g

0xbfb2,	// (0x00094a00) popup_call2_audio_out_window_t1_ParamLimits

0xbfb2,	// (0x00094a00) popup_call2_audio_out_window_t1

0xc011,	// (0x00094a5f) popup_call2_audio_out_window_t2_ParamLimits

0xc011,	// (0x00094a5f) popup_call2_audio_out_window_t2

0xc065,	// (0x00094ab3) popup_call2_audio_out_window_t3_ParamLimits

0xc065,	// (0x00094ab3) popup_call2_audio_out_window_t3

0xc07b,	// (0x00094ac9) popup_call2_audio_out_window_t4_ParamLimits

0xc07b,	// (0x00094ac9) popup_call2_audio_out_window_t4

0xc091,	// (0x00094adf) popup_call2_audio_out_window_t5_ParamLimits

0xc091,	// (0x00094adf) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00097fc5) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00097fc5) popup_call2_audio_out_window_t

0xc0f5,	// (0x00094b43) bg_popup_call2_in_pane_ParamLimits

0xc0f5,	// (0x00094b43) bg_popup_call2_in_pane

0xc151,	// (0x00094b9f) popup_call2_audio_in_window_g1_ParamLimits

0xc151,	// (0x00094b9f) popup_call2_audio_in_window_g1

0xc189,	// (0x00094bd7) popup_call2_audio_in_window_g2_ParamLimits

0xc189,	// (0x00094bd7) popup_call2_audio_in_window_g2

0xc1c1,	// (0x00094c0f) popup_call2_audio_in_window_g3_ParamLimits

0xc1c1,	// (0x00094c0f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00097fd2) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00097fd2) popup_call2_audio_in_window_g

0xc219,	// (0x00094c67) popup_call2_audio_in_window_t1_ParamLimits

0xc219,	// (0x00094c67) popup_call2_audio_in_window_t1

0xc299,	// (0x00094ce7) popup_call2_audio_in_window_t2_ParamLimits

0xc299,	// (0x00094ce7) popup_call2_audio_in_window_t2

0xc319,	// (0x00094d67) popup_call2_audio_in_window_t3_ParamLimits

0xc319,	// (0x00094d67) popup_call2_audio_in_window_t3

0xc333,	// (0x00094d81) popup_call2_audio_in_window_t4_ParamLimits

0xc333,	// (0x00094d81) popup_call2_audio_in_window_t4

0xc345,	// (0x00094d93) popup_call2_audio_in_window_t5_ParamLimits

0xc345,	// (0x00094d93) popup_call2_audio_in_window_t5

0xc35a,	// (0x00094da8) popup_call2_audio_in_window_t6_ParamLimits

0xc35a,	// (0x00094da8) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00097fdb) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00097fdb) popup_call2_audio_in_window_t

0x08f0,	// (0x0008933e) bg_popup_call2_in_pane_g1

0xc471,	// (0x00094ebf) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00098043) popup_cale_lunar_info_window_t

0x08f8,	// (0x00089346) bg_popup_call2_rect_pane_ParamLimits

0x08f8,	// (0x00089346) bg_popup_call2_rect_pane

0x069d,	// (0x000890eb) call2_cli_visual_graphic_pane

0x069d,	// (0x000890eb) call2_cli_visual_text_pane

0xc647,	// (0x00095095) smil_status_volume_pane_g3

0x0002,

0x0a5c,	// (0x000894aa) call2_cli_visual_graphic_pane_g1

0x0a5c,	// (0x000894aa) call2_cli_visual_graphic_pane_g2

0x0a5c,	// (0x000894aa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00097fe8) call2_cli_visual_graphic_pane_g

0xc36f,	// (0x00094dbd) bg_popup_call2_rect_pane_g1

0x0afa,	// (0x00089548) bg_popup_call2_rect_pane_g2

0xc377,	// (0x00094dc5) bg_popup_call2_rect_pane_g3

0xc37f,	// (0x00094dcd) bg_popup_call2_rect_pane_g4

0xc387,	// (0x00094dd5) bg_popup_call2_rect_pane_g5

0xc38f,	// (0x00094ddd) bg_popup_call2_rect_pane_g6

0xc397,	// (0x00094de5) bg_popup_call2_rect_pane_g7

0xc39f,	// (0x00094ded) bg_popup_call2_rect_pane_g8

0xc3a7,	// (0x00094df5) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00097fef) bg_popup_call2_rect_pane_g

0xc3af,	// (0x00094dfd) bg_popup_call2_bubble_pane_g1

0xc3b7,	// (0x00094e05) bg_popup_call2_bubble_pane_g2

0xc3bf,	// (0x00094e0d) bg_popup_call2_bubble_pane_g3

0xc3c7,	// (0x00094e15) bg_popup_call2_bubble_pane_g4

0xc3cf,	// (0x00094e1d) bg_popup_call2_bubble_pane_g5

0xc3d7,	// (0x00094e25) bg_popup_call2_bubble_pane_g6

0xc3df,	// (0x00094e2d) bg_popup_call2_bubble_pane_g7

0xc3e7,	// (0x00094e35) bg_popup_call2_bubble_pane_g8

0xc3ef,	// (0x00094e3d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00098002) bg_popup_call2_bubble_pane_g

0x2b2d,	// (0x0008b57b) aid_cale_week_size_cell_pane

0x2f91,	// (0x0008b9df) aid_cams_cif_uncrop_pane_ParamLimits

0x2f91,	// (0x0008b9df) aid_cams_cif_uncrop_pane

0x314e,	// (0x0008bb9c) aid_cams_size_cell_ParamLimits

0x314e,	// (0x0008bb9c) aid_cams_size_cell

0x3162,	// (0x0008bbb0) grid_cams_pane_ParamLimits

0x317c,	// (0x0008bbca) linegrid_cams_pane_ParamLimits

0x3353,	// (0x0008bda1) call_video_pane_t1

0x3365,	// (0x0008bdb3) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00097cef) call_video_pane_t

0x374d,	// (0x0008c19b) aid_cale_month_size_cell_pane_ParamLimits

0x374d,	// (0x0008c19b) aid_cale_month_size_cell_pane

0xf63e,	// (0x0009808c) smil_status_volume_pane_g

0xc654,	// (0x000950a2) volume_smil_pane_ParamLimits

0x023e,	// (0x00088c8c) aid_popup2_width_pane

0x2aa1,	// (0x0008b4ef) cell_qdial_pane_g4_ParamLimits

0x2aa1,	// (0x0008b4ef) cell_qdial_pane_g4

0x4803,	// (0x0008d251) aid_blid_cardinal_pane_ParamLimits

0x480f,	// (0x0008d25d) aid_blid_destination_pane_ParamLimits

0x480f,	// (0x0008d25d) aid_blid_destination_pane

0x08f8,	// (0x00089346) bg_popup_call_poc_act_pane_ParamLimits

0x08f8,	// (0x00089346) bg_popup_call_poc_act_pane

0x08f8,	// (0x00089346) bg_popup_call_poc_inact_pane_ParamLimits

0x08f8,	// (0x00089346) bg_popup_call_poc_inact_pane

0xc3f7,	// (0x00094e45) bg_popup_call_poc_act_pane_g1

0xc3ff,	// (0x00094e4d) bg_popup_call_poc_act_pane_g2

0xc407,	// (0x00094e55) bg_popup_call_poc_act_pane_g3

0xc3c7,	// (0x00094e15) bg_popup_call_poc_act_pane_g4

0xc3cf,	// (0x00094e1d) bg_popup_call_poc_act_pane_g5

0xc40f,	// (0x00094e5d) bg_popup_call_poc_act_pane_g6

0xc3df,	// (0x00094e2d) bg_popup_call_poc_act_pane_g7

0xc417,	// (0x00094e65) bg_popup_call_poc_act_pane_g8

0x069d,	// (0x000890eb) main_usb_pane

0xc570,	// (0x00094fbe) popup_cale_lunar_info_window

0x35a2,	// (0x0008bff0) im_reading_pane_t1_ParamLimits

0x0cc7,	// (0x00089715) list_im_pane_ParamLimits

0x0cd8,	// (0x00089726) scroll_pane_cp07_ParamLimits

0x069d,	// (0x000890eb) grid_highlight_pane_cp012

0x08f8,	// (0x00089346) mup_scale_pane_ParamLimits

0xb2f8,	// (0x00093d46) main_usb_pane_g1_ParamLimits

0xb2f8,	// (0x00093d46) main_usb_pane_g1

0x569b,	// (0x0008e0e9) main_usb_pane_g2_ParamLimits

0x569b,	// (0x0008e0e9) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0009802c) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0009802c) main_usb_pane_g

0x56b1,	// (0x0008e0ff) main_usb_pane_t1_ParamLimits

0x56b1,	// (0x0008e0ff) main_usb_pane_t1

0x56c3,	// (0x0008e111) main_usb_pane_t2_ParamLimits

0x56c3,	// (0x0008e111) main_usb_pane_t2

0x56d5,	// (0x0008e123) main_usb_pane_t3_ParamLimits

0x56d5,	// (0x0008e123) main_usb_pane_t3

0x56e7,	// (0x0008e135) main_usb_pane_t4_ParamLimits

0x56e7,	// (0x0008e135) main_usb_pane_t4

0x56f9,	// (0x0008e147) main_usb_pane_t5_ParamLimits

0x56f9,	// (0x0008e147) main_usb_pane_t5

0x570b,	// (0x0008e159) main_usb_pane_t6_ParamLimits

0x570b,	// (0x0008e159) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00098031) main_usb_pane_t_ParamLimits

0x47a8,	// (0x0008d1f6) aid_text_placing

0x47b1,	// (0x0008d1ff) main_location2_pane_t1_ParamLimits

0x47c5,	// (0x0008d213) main_location2_pane_t2_ParamLimits

0x47d9,	// (0x0008d227) main_location2_pane_t3_ParamLimits

0x47ef,	// (0x0008d23d) main_location2_pane_t4_ParamLimits

0x47ef,	// (0x0008d23d) main_location2_pane_t4

0xf402,	// (0x00097e50) main_location2_pane_t_ParamLimits

0x093c,	// (0x0008938a) find_pinb_pane_g2_ParamLimits

0x093c,	// (0x0008938a) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00097b9e) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00097b9e) find_pinb_pane_g

0x0948,	// (0x00089396) find_pinb_pane_t1_ParamLimits

0x095a,	// (0x000893a8) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00097ba3) find_pinb_pane_t_ParamLimits

0x069d,	// (0x000890eb) main_call3_pane

0x3a7a,	// (0x0008c4c8) cale_month_day_heading_pane_t1_ParamLimits

0x3ad8,	// (0x0008c526) cale_month_day_heading_pane_t2_ParamLimits

0x3b3d,	// (0x0008c58b) cale_month_day_heading_pane_t3_ParamLimits

0x3ba2,	// (0x0008c5f0) cale_month_day_heading_pane_t4_ParamLimits

0x3c07,	// (0x0008c655) cale_month_day_heading_pane_t5_ParamLimits

0x3c6c,	// (0x0008c6ba) cale_month_day_heading_pane_t6_ParamLimits

0x3cd1,	// (0x0008c71f) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00097d27) cale_month_day_heading_pane_t_ParamLimits

0x3ed9,	// (0x0008c927) smil_status_volume_pane

0x518a,	// (0x0008dbd8) postcard_address_pane_ParamLimits

0x518a,	// (0x0008dbd8) postcard_address_pane

0x519c,	// (0x0008dbea) postcard_message_pane_ParamLimits

0x519c,	// (0x0008dbea) postcard_message_pane

0x5676,	// (0x0008e0c4) call2_cli_visual_pane_t1_ParamLimits

0x5676,	// (0x0008e0c4) call2_cli_visual_pane_t1

0x5e92,	// (0x0008e8e0) postcard_message_pane_t1_ParamLimits

0x5e92,	// (0x0008e8e0) postcard_message_pane_t1

0x5e7b,	// (0x0008e8c9) postcard_address_pane_t1_ParamLimits

0x5e7b,	// (0x0008e8c9) postcard_address_pane_t1

0x5e67,	// (0x0008e8b5) popup_call3_audio_in_window_ParamLimits

0x5e67,	// (0x0008e8b5) popup_call3_audio_in_window

0x5cf6,	// (0x0008e744) bg_popup_call3_in_pane_ParamLimits

0x5cf6,	// (0x0008e744) bg_popup_call3_in_pane

0x5d68,	// (0x0008e7b6) popup_call3_audio_in_window_g1_ParamLimits

0x5d68,	// (0x0008e7b6) popup_call3_audio_in_window_g1

0x5d88,	// (0x0008e7d6) popup_call3_audio_in_window_g2_ParamLimits

0x5d88,	// (0x0008e7d6) popup_call3_audio_in_window_g2

0x5da8,	// (0x0008e7f6) popup_call3_audio_in_window_g3_ParamLimits

0x5da8,	// (0x0008e7f6) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00098093) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00098093) popup_call3_audio_in_window_g

0x5dd9,	// (0x0008e827) popup_call3_audio_in_window_t1_ParamLimits

0x5dd9,	// (0x0008e827) popup_call3_audio_in_window_t1

0x5e17,	// (0x0008e865) popup_call3_audio_in_window_t2_ParamLimits

0x5e17,	// (0x0008e865) popup_call3_audio_in_window_t2

0x5e55,	// (0x0008e8a3) popup_call3_audio_in_window_t3_ParamLimits

0x5e55,	// (0x0008e8a3) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0009809c) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0009809c) popup_call3_audio_in_window_t

0x4a6d,	// (0x0008d4bb) bg_popup_call3_rect_pane

0xc36f,	// (0x00094dbd) bg_popup_call3_rect_pane_g1

0x0afa,	// (0x00089548) bg_popup_call3_rect_pane_g2

0xc377,	// (0x00094dc5) bg_popup_call3_rect_pane_g3

0xc37f,	// (0x00094dcd) bg_popup_call3_rect_pane_g4

0xc387,	// (0x00094dd5) bg_popup_call3_rect_pane_g5

0xc38f,	// (0x00094ddd) bg_popup_call3_rect_pane_g6

0xc397,	// (0x00094de5) bg_popup_call3_rect_pane_g7

0x4d55,	// (0x0008d7a3) mup_visualizer_osc_pane

0xb1d8,	// (0x00093c26) mup_visualizer_spec_pane

0x5d26,	// (0x0008e774) call3_video_qcif_pane_ParamLimits

0x5d26,	// (0x0008e774) call3_video_qcif_pane

0x5d37,	// (0x0008e785) call3_video_qcif_uncrop_pane_ParamLimits

0x5d37,	// (0x0008e785) call3_video_qcif_uncrop_pane

0x5d43,	// (0x0008e791) call3_video_subqcif_pane_ParamLimits

0x5d43,	// (0x0008e791) call3_video_subqcif_pane

0x5d57,	// (0x0008e7a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x5d57,	// (0x0008e7a5) call3_video_subqcif_uncrop_pane

0x5dc8,	// (0x0008e816) popup_call3_audio_in_window_g4_ParamLimits

0x5dc8,	// (0x0008e816) popup_call3_audio_in_window_g4

0x5ce5,	// (0x0008e733) mup_spec_half_pane

0x5cee,	// (0x0008e73c) mup_spec_half_pane_cp

0xc607,	// (0x00095055) mup_osc_middle_pane

0xc610,	// (0x0009505e) mup_visualizer_osc_pane_g1

0x5cc5,	// (0x0008e713) mup_spec_bar_pane_ParamLimits

0x5cc5,	// (0x0008e713) mup_spec_bar_pane

0xc5f4,	// (0x00095042) mup_spec_bar_pane_g1

0xc5fe,	// (0x0009504c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00098087) mup_spec_bar_pane_g

0x2b2d,	// (0x0008b57b) aid_cale_week_size_cell_pane_ParamLimits

0x2b40,	// (0x0008b58e) bg_cale_heading_pane_ParamLimits

0x0b2e,	// (0x0008957c) bg_cale_pane_cp01_ParamLimits

0x2b58,	// (0x0008b5a6) cale_week_corner_pane_ParamLimits

0x2b69,	// (0x0008b5b7) cale_week_day_heading_pane_ParamLimits

0x2b81,	// (0x0008b5cf) cale_week_scroll_pane_g1_ParamLimits

0x2b96,	// (0x0008b5e4) cale_week_scroll_pane_g2_ParamLimits

0x2ba7,	// (0x0008b5f5) cale_week_scroll_pane_g3_ParamLimits

0x2bb8,	// (0x0008b606) cale_week_scroll_pane_g4_ParamLimits

0x2bc9,	// (0x0008b617) cale_week_scroll_pane_g5_ParamLimits

0x2bda,	// (0x0008b628) cale_week_scroll_pane_g6_ParamLimits

0x2beb,	// (0x0008b639) cale_week_scroll_pane_g7_ParamLimits

0x2bfc,	// (0x0008b64a) cale_week_scroll_pane_g8_ParamLimits

0x2c0d,	// (0x0008b65b) cale_week_scroll_pane_g9_ParamLimits

0x2c1e,	// (0x0008b66c) cale_week_scroll_pane_g10_ParamLimits

0x2c2f,	// (0x0008b67d) cale_week_scroll_pane_g11_ParamLimits

0x2c40,	// (0x0008b68e) cale_week_scroll_pane_g12_ParamLimits

0x2c51,	// (0x0008b69f) cale_week_scroll_pane_g13_ParamLimits

0x2c62,	// (0x0008b6b0) cale_week_scroll_pane_g14_ParamLimits

0x2c73,	// (0x0008b6c1) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00097c2f) cale_week_scroll_pane_g_ParamLimits

0x2c84,	// (0x0008b6d2) cale_week_time_pane_ParamLimits

0x2c95,	// (0x0008b6e3) grid_cale_week_pane_ParamLimits

0x0b47,	// (0x00089595) listscroll_cale_week_pane_t1

0x2ca8,	// (0x0008b6f6) scroll_pane_cp08_ParamLimits

0x37b1,	// (0x0008c1ff) cale_month_corner_pane_ParamLimits

0x3a31,	// (0x0008c47f) cale_month_pane_t1

0x3a43,	// (0x0008c491) cale_month_week_pane_ParamLimits

0x43f4,	// (0x0008ce42) popup_call_status_window_g1_ParamLimits

0x4408,	// (0x0008ce56) popup_call_status_window_g2_ParamLimits

0x441c,	// (0x0008ce6a) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00097dd7) popup_call_status_window_g_ParamLimits

0x4485,	// (0x0008ced3) aid_call2_pane

0x4fbc,	// (0x0008da0a) msg_header_pane_g1

0x518a,	// (0x0008dbd8) postcard_address2_pane_ParamLimits

0x518a,	// (0x0008dbd8) postcard_address2_pane

0x519c,	// (0x0008dbea) postcard_message2_pane_ParamLimits

0x519c,	// (0x0008dbea) postcard_message2_pane

0x5c72,	// (0x0008e6c0) message2_row_pane_ParamLimits

0x5c72,	// (0x0008e6c0) message2_row_pane

0x5c91,	// (0x0008e6df) address2_row_pane_ParamLimits

0x5c91,	// (0x0008e6df) address2_row_pane

0xc5c2,	// (0x00095010) postcard_message2_row_pane_g1

0xc5ca,	// (0x00095018) postcard_message2_row_pane_t1

0xc5c2,	// (0x00095010) address2_row_pane_g1

0xc5ca,	// (0x00095018) address2_row_pane_t1

0xb0a1,	// (0x00093aef) aid_size_cell_vorec

0x069d,	// (0x000890eb) main_rss_pane

0x5ca4,	// (0x0008e6f2) rss_list_single_pane_ParamLimits

0x5ca4,	// (0x0008e6f2) rss_list_single_pane

0xc5d8,	// (0x00095026) rss_list_single_pane_t1

0xc5e6,	// (0x00095034) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00098082) rss_list_single_pane_t

0x069d,	// (0x000890eb) main_camera2_pane

0x069d,	// (0x000890eb) main_video2_pane

0x5f0b,	// (0x0008e959) cams_zoom_pane_cp2_ParamLimits

0x5f0b,	// (0x0008e959) cams_zoom_pane_cp2

0x5f2b,	// (0x0008e979) image2_vga_pane_ParamLimits

0x5f2b,	// (0x0008e979) image2_vga_pane

0x5f7c,	// (0x0008e9ca) main_camera2_pane_g1_ParamLimits

0x5f7c,	// (0x0008e9ca) main_camera2_pane_g1

0x5f9c,	// (0x0008e9ea) main_camera2_pane_g2_ParamLimits

0x5f9c,	// (0x0008e9ea) main_camera2_pane_g2

0x5fbc,	// (0x0008ea0a) main_camera2_pane_g3_ParamLimits

0x5fbc,	// (0x0008ea0a) main_camera2_pane_g3

0x5fdc,	// (0x0008ea2a) main_camera2_pane_g4_ParamLimits

0x5fdc,	// (0x0008ea2a) main_camera2_pane_g4

0x5ffc,	// (0x0008ea4a) main_camera2_pane_g5_ParamLimits

0x5ffc,	// (0x0008ea4a) main_camera2_pane_g5

0x601c,	// (0x0008ea6a) main_camera2_pane_g6_ParamLimits

0x601c,	// (0x0008ea6a) main_camera2_pane_g6

0x603c,	// (0x0008ea8a) main_camera2_pane_g7_ParamLimits

0x603c,	// (0x0008ea8a) main_camera2_pane_g7

0x605c,	// (0x0008eaaa) main_camera2_pane_g8_ParamLimits

0x605c,	// (0x0008eaaa) main_camera2_pane_g8

0x0008,

0xf655,	// (0x000980a3) main_camera2_pane_g_ParamLimits

0xf655,	// (0x000980a3) main_camera2_pane_g

0x609c,	// (0x0008eaea) main_camera2_pane_t1_ParamLimits

0x609c,	// (0x0008eaea) main_camera2_pane_t1

0x60d1,	// (0x0008eb1f) main_camera2_pane_t2_ParamLimits

0x60d1,	// (0x0008eb1f) main_camera2_pane_t2

0x60f7,	// (0x0008eb45) main_camera2_pane_t3_ParamLimits

0x60f7,	// (0x0008eb45) main_camera2_pane_t3

0x6155,	// (0x0008eba3) main_camera2_pane_t4_ParamLimits

0x6155,	// (0x0008eba3) main_camera2_pane_t4

0x0006,

0xf668,	// (0x000980b6) main_camera2_pane_t_ParamLimits

0xf668,	// (0x000980b6) main_camera2_pane_t

0x61e7,	// (0x0008ec35) cams_zoom_pane_cp4_ParamLimits

0x61e7,	// (0x0008ec35) cams_zoom_pane_cp4

0x61fd,	// (0x0008ec4b) image2_cif_pane_ParamLimits

0x61fd,	// (0x0008ec4b) image2_cif_pane

0x6228,	// (0x0008ec76) image2_subqcif_pane_ParamLimits

0x6228,	// (0x0008ec76) image2_subqcif_pane

0x6242,	// (0x0008ec90) main_video2_pane_g1_ParamLimits

0x6242,	// (0x0008ec90) main_video2_pane_g1

0x625c,	// (0x0008ecaa) main_video2_pane_g2_ParamLimits

0x625c,	// (0x0008ecaa) main_video2_pane_g2

0x6272,	// (0x0008ecc0) main_video2_pane_g3_ParamLimits

0x6272,	// (0x0008ecc0) main_video2_pane_g3

0x6288,	// (0x0008ecd6) main_video2_pane_g4_ParamLimits

0x6288,	// (0x0008ecd6) main_video2_pane_g4

0x629e,	// (0x0008ecec) main_video2_pane_g5_ParamLimits

0x629e,	// (0x0008ecec) main_video2_pane_g5

0x62b4,	// (0x0008ed02) main_video2_pane_g6_ParamLimits

0x62b4,	// (0x0008ed02) main_video2_pane_g6

0x0005,

0xf677,	// (0x000980c5) main_video2_pane_g_ParamLimits

0xf677,	// (0x000980c5) main_video2_pane_g

0x62ce,	// (0x0008ed1c) main_video2_pane_t1_ParamLimits

0x62ce,	// (0x0008ed1c) main_video2_pane_t1

0x62f2,	// (0x0008ed40) main_video2_pane_t2_ParamLimits

0x62f2,	// (0x0008ed40) main_video2_pane_t2

0x6340,	// (0x0008ed8e) main_video2_pane_t3_ParamLimits

0x6340,	// (0x0008ed8e) main_video2_pane_t3

0x0002,

0xf684,	// (0x000980d2) main_video2_pane_t_ParamLimits

0xf684,	// (0x000980d2) main_video2_pane_t

0x57c8,	// (0x0008e216) call_muted_g2

0x0001,

0xf626,	// (0x00098074) call_muted_g

0x069d,	// (0x000890eb) main_mup2_pane

0x6388,	// (0x0008edd6) main_mup2_pane_g1_ParamLimits

0x6388,	// (0x0008edd6) main_mup2_pane_g1

0x6394,	// (0x0008ede2) main_mup2_pane_g2_ParamLimits

0x6394,	// (0x0008ede2) main_mup2_pane_g2

0xc778,	// (0x000951c6) main_mup_pane_g13_cp1

0xc780,	// (0x000951ce) mup_volume_pane_cp1

0x63b0,	// (0x0008edfe) main_mup2_pane_g4_ParamLimits

0x63b0,	// (0x0008edfe) main_mup2_pane_g4

0x63c2,	// (0x0008ee10) main_mup2_pane_g5_ParamLimits

0x63c2,	// (0x0008ee10) main_mup2_pane_g5

0x63d4,	// (0x0008ee22) main_mup2_pane_g6_ParamLimits

0x63d4,	// (0x0008ee22) main_mup2_pane_g6

0x63e6,	// (0x0008ee34) main_mup2_pane_g7_ParamLimits

0x63e6,	// (0x0008ee34) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000980d9) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000980d9) main_mup2_pane_g

0x63fe,	// (0x0008ee4c) main_mup2_pane_t1_ParamLimits

0x63fe,	// (0x0008ee4c) main_mup2_pane_t1

0x6414,	// (0x0008ee62) main_mup2_pane_t2_ParamLimits

0x6414,	// (0x0008ee62) main_mup2_pane_t2

0x642a,	// (0x0008ee78) main_mup2_pane_t3_ParamLimits

0x642a,	// (0x0008ee78) main_mup2_pane_t3

0x6440,	// (0x0008ee8e) main_mup2_pane_t4_ParamLimits

0x6440,	// (0x0008ee8e) main_mup2_pane_t4

0x6458,	// (0x0008eea6) main_mup2_pane_t5_ParamLimits

0x6458,	// (0x0008eea6) main_mup2_pane_t5

0x6470,	// (0x0008eebe) main_mup2_pane_t6_ParamLimits

0x6470,	// (0x0008eebe) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000980e8) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000980e8) main_mup2_pane_t

0x64a0,	// (0x0008eeee) mup2_visualizer_pane_ParamLimits

0x64a0,	// (0x0008eeee) mup2_visualizer_pane

0x64ce,	// (0x0008ef1c) mup_progress_pane_cp_ParamLimits

0x64ce,	// (0x0008ef1c) mup_progress_pane_cp

0xc75a,	// (0x000951a8) mup_volume_pane_cp_ParamLimits

0xc75a,	// (0x000951a8) mup_volume_pane_cp

0x64e2,	// (0x0008ef30) mup2_visualizer_pane_g1_ParamLimits

0x64e2,	// (0x0008ef30) mup2_visualizer_pane_g1

0xc699,	// (0x000950e7) mup2_visualizer_pane_g2_ParamLimits

0xc699,	// (0x000950e7) mup2_visualizer_pane_g2

0x64f9,	// (0x0008ef47) mup2_visualizer_pane_g3_ParamLimits

0x64f9,	// (0x0008ef47) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000980f5) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000980f5) mup2_visualizer_pane_g

0xb441,	// (0x00093e8f) aid_size_cell_fmradio

0x597a,	// (0x0008e3c8) aid_height_parent_landcape

0x0d56,	// (0x000897a4) wml_content_pane_cp

0x0d5e,	// (0x000897ac) wml_tabs_pane

0x0d67,	// (0x000897b5) popup_wml_miniature_window

0x0d6f,	// (0x000897bd) scroll_pane_cp021

0x0d83,	// (0x000897d1) wml_content_pane_comp8

0x069d,	// (0x000890eb) bg_popup_sub_pane_cp05

0xc6b7,	// (0x00095105) popup_wml_miniature_window_g1

0xc6bf,	// (0x0009510d) wml_miniature_view_pane

0x6505,	// (0x0008ef53) aid_size_wml_view

0x650d,	// (0x0008ef5b) wml_miniature_view_pane_g1

0x6516,	// (0x0008ef64) wml_miniature_view_pane_g2

0x651f,	// (0x0008ef6d) wml_miniature_view_pane_g3

0x6527,	// (0x0008ef75) wml_miniature_view_pane_g4

0x652f,	// (0x0008ef7d) wml_miniature_view_pane_g5

0x6537,	// (0x0008ef85) wml_miniature_view_pane_g6

0x653f,	// (0x0008ef8d) wml_miniature_view_pane_g7

0x6547,	// (0x0008ef95) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000980fc) wml_miniature_view_pane_g

0xc6c7,	// (0x00095115) background_graphic_ParamLimits

0xc6c7,	// (0x00095115) background_graphic

0xc6d3,	// (0x00095121) wml_tabs_2_pane

0xc6dc,	// (0x0009512a) wml_tabs_3_pane_ParamLimits

0xc6dc,	// (0x0009512a) wml_tabs_3_pane

0xc6ee,	// (0x0009513c) wml_tabs_4_pane_ParamLimits

0xc6ee,	// (0x0009513c) wml_tabs_4_pane

0xc704,	// (0x00095152) wml_tabs_5_pane_ParamLimits

0xc704,	// (0x00095152) wml_tabs_5_pane

0xc71e,	// (0x0009516c) wml_tabs_pane_g2_ParamLimits

0xc71e,	// (0x0009516c) wml_tabs_pane_g2

0xc732,	// (0x00095180) wml_tabs_pane_g3_ParamLimits

0xc732,	// (0x00095180) wml_tabs_pane_g3

0x654f,	// (0x0008ef9d) wml_tabs_2_active_pane_ParamLimits

0x654f,	// (0x0008ef9d) wml_tabs_2_active_pane

0x6563,	// (0x0008efb1) wml_tabs_2_passive_pane_ParamLimits

0x6563,	// (0x0008efb1) wml_tabs_2_passive_pane

0x6577,	// (0x0008efc5) wml_tabs_3_active_pane_cp_ParamLimits

0x6577,	// (0x0008efc5) wml_tabs_3_active_pane_cp

0x658c,	// (0x0008efda) wml_tabs_3_passive_pane_ParamLimits

0x658c,	// (0x0008efda) wml_tabs_3_passive_pane

0x659f,	// (0x0008efed) wml_tabs_3_passive_pane_cp_ParamLimits

0x659f,	// (0x0008efed) wml_tabs_3_passive_pane_cp

0x65b6,	// (0x0008f004) tabs_4_active_pane

0x65be,	// (0x0008f00c) tabs_4_passive_pane

0x65c8,	// (0x0008f016) tabs_4_passive_pane_cp

0x65d0,	// (0x0008f01e) tabs_4_passive_pane_cp2

0x5693,	// (0x0008e0e1) aid_height_text

0x4d27,	// (0x0008d775) mup_volume_cont_pane_ParamLimits

0x4d27,	// (0x0008d775) mup_volume_cont_pane

0x2784,	// (0x0008b1d2) aid_size_cell_pinb

0x0928,	// (0x00089376) aid_size_list_pinb

0x64ba,	// (0x0008ef08) mup2_volume_cont_pane_ParamLimits

0x64ba,	// (0x0008ef08) mup2_volume_cont_pane

0xc746,	// (0x00095194) mup2_volume_cont_pane_g1_ParamLimits

0xc746,	// (0x00095194) mup2_volume_cont_pane_g1

0x2435,	// (0x0008ae83) aid_size_cell_touch_ParamLimits

0x2435,	// (0x0008ae83) aid_size_cell_touch

0x2673,	// (0x0008b0c1) touch_pane_ParamLimits

0x2673,	// (0x0008b0c1) touch_pane

0x022c,	// (0x00088c7a) main_rss2_pane

0xc788,	// (0x000951d6) listscroll_rss2_pane

0xc791,	// (0x000951df) rss2_navigation_pane

0xc799,	// (0x000951e7) list_rss2_pane

0x4634,	// (0x0008d082) scroll_pane_cp22

0xc7a1,	// (0x000951ef) rss2_navigation_pane_g1

0xc7aa,	// (0x000951f8) rss2_navigation_pane_g2

0xc7b2,	// (0x00095200) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0009810d) rss2_navigation_pane_g

0xc7ba,	// (0x00095208) rss2_navigation_pane_t1

0x65da,	// (0x0008f028) rss2_list_single_pane_ParamLimits

0x65da,	// (0x0008f028) rss2_list_single_pane

0xc7c8,	// (0x00095216) rss2_list_single_pane_t2

0xc7d6,	// (0x00095224) rss2_list_single_pane_t3_ParamLimits

0xc7d6,	// (0x00095224) rss2_list_single_pane_t3

0xc7f3,	// (0x00095241) rss2_list_single_pane_t4

0x3ec1,	// (0x0008c90f) smil_status_pane_g1

0x2659,	// (0x0008b0a7) main_image2_pane_ParamLimits

0x2659,	// (0x0008b0a7) main_image2_pane

0x607c,	// (0x0008eaca) main_camera2_pane_g9_ParamLimits

0x607c,	// (0x0008eaca) main_camera2_pane_g9

0x61aa,	// (0x0008ebf8) main_camera2_pane_t5_ParamLimits

0x61aa,	// (0x0008ebf8) main_camera2_pane_t5

0xc669,	// (0x000950b7) main_camera2_pane_t6_ParamLimits

0xc669,	// (0x000950b7) main_camera2_pane_t6

0x65f2,	// (0x0008f040) main_image2_pane_g1_ParamLimits

0x65f2,	// (0x0008f040) main_image2_pane_g1

0x53cc,	// (0x0008de1a) smil2_video_pane_ParamLimits

0x53cc,	// (0x0008de1a) smil2_video_pane

0x2475,	// (0x0008aec3) aid_zoom_text_primary_cp

0x0282,	// (0x00088cd0) popup_preview_fixed_window

0x0cbf,	// (0x0008970d) im_reading_pane_g1

0x5ef3,	// (0x0008e941) cams2_bc_adjust_pane_cp_ParamLimits

0x5ef3,	// (0x0008e941) cams2_bc_adjust_pane_cp

0x61d9,	// (0x0008ec27) cams2_bc_adjust_pane_ParamLimits

0x61d9,	// (0x0008ec27) cams2_bc_adjust_pane

0xc801,	// (0x0009524f) cams2_bc_adjust_pane_g1

0xc809,	// (0x00095257) cams2_slider_pane

0xc812,	// (0x00095260) cams2_slider_pane_g1

0xc81b,	// (0x00095269) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00098114) cams2_slider_pane_g

0x2843,	// (0x0008b291) calc_display_pane_ParamLimits

0x2869,	// (0x0008b2b7) calc_paper_pane_ParamLimits

0x288c,	// (0x0008b2da) grid_calc_pane_ParamLimits

0xb19b,	// (0x00093be9) popup_clock_digital_window_t1_ParamLimits

0xb3de,	// (0x00093e2c) main_image_pane_t1

0x2825,	// (0x0008b273) aid_size_cell_calc_ParamLimits

0x2825,	// (0x0008b273) aid_size_cell_calc

0x59c0,	// (0x0008e40e) popup_blid_sat_info2_window_ParamLimits

0x59c0,	// (0x0008e40e) popup_blid_sat_info2_window

0xc83d,	// (0x0009528b) aid_size_cell_blid

0xc845,	// (0x00095293) bg_popup_window_pane_cp07

0xc868,	// (0x000952b6) grid_popup_blid_pane

0xc872,	// (0x000952c0) heading_pane_cp05_ParamLimits

0xc872,	// (0x000952c0) heading_pane_cp05

0xc93c,	// (0x0009538a) cell_popup_blid_pane_ParamLimits

0xc93c,	// (0x0009538a) cell_popup_blid_pane

0xc962,	// (0x000953b0) cell_popup_blid_pane_g1

0xc96a,	// (0x000953b8) cell_popup_blid_pane_t1

0x648a,	// (0x0008eed8) mup2_indicator_pane_ParamLimits

0x648a,	// (0x0008eed8) mup2_indicator_pane

0x4a6d,	// (0x0008d4bb) mup2_visualizer_osc_pane

0xc6a5,	// (0x000950f3) mup2_visualizer_spec_pane_ParamLimits

0xc6a5,	// (0x000950f3) mup2_visualizer_spec_pane

0x6608,	// (0x0008f056) mup2_spec_half_pane

0x6611,	// (0x0008f05f) mup2_spec_half_pane_cp

0x6619,	// (0x0008f067) mup2_spec_bar_pane_ParamLimits

0x6619,	// (0x0008f067) mup2_spec_bar_pane

0xc5f4,	// (0x00095042) mup2_spec_bar_pane_g1

0xc5fe,	// (0x0009504c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00098087) mup2_spec_bar_pane_g

0x6639,	// (0x0008f087) mup2_osc_middle_pane

0xc610,	// (0x0009505e) mup2_visualizer_osc_pane_g1

0x02ac,	// (0x00088cfa) popup_number_entry_window_t1_ParamLimits

0x02bf,	// (0x00088d0d) popup_number_entry_window_t2_ParamLimits

0x02d1,	// (0x00088d1f) popup_number_entry_window_t3_ParamLimits

0x26c5,	// (0x0008b113) popup_number_entry_window_t5_ParamLimits

0x26c5,	// (0x0008b113) popup_number_entry_window_t5

0xf0fb,	// (0x00097b49) popup_number_entry_window_t_ParamLimits

0x02e3,	// (0x00088d31) text_title_cp2_ParamLimits

0xb2b8,	// (0x00093d06) aid_hotspot_pointer_text2_pane

0xb2de,	// (0x00093d2c) main_viewer_pane_g9_ParamLimits

0xb2de,	// (0x00093d2c) main_viewer_pane_g9

0x3a31,	// (0x0008c47f) cale_month_pane_t1_ParamLimits

0x3f4b,	// (0x0008c999) bg_cale_pane_ParamLimits

0x3f63,	// (0x0008c9b1) list_cale_pane_ParamLimits

0x0b47,	// (0x00089595) listscroll_cale_day_pane_t1

0x3f74,	// (0x0008c9c2) scroll_pane_cp09_ParamLimits

0x4d5d,	// (0x0008d7ab) main_mup_eq_pane_t1_ParamLimits

0x4d5d,	// (0x0008d7ab) main_mup_eq_pane_t1

0x4d77,	// (0x0008d7c5) main_mup_eq_pane_t2_ParamLimits

0x4d77,	// (0x0008d7c5) main_mup_eq_pane_t2

0x4d91,	// (0x0008d7df) main_mup_eq_pane_t3_ParamLimits

0x4d91,	// (0x0008d7df) main_mup_eq_pane_t3

0x4dad,	// (0x0008d7fb) main_mup_eq_pane_t4_ParamLimits

0x4dad,	// (0x0008d7fb) main_mup_eq_pane_t4

0x4dc9,	// (0x0008d817) main_mup_eq_pane_t5_ParamLimits

0x4dc9,	// (0x0008d817) main_mup_eq_pane_t5

0x4de5,	// (0x0008d833) main_mup_eq_pane_t6_ParamLimits

0x4de5,	// (0x0008d833) main_mup_eq_pane_t6

0x4df9,	// (0x0008d847) main_mup_eq_pane_t7_ParamLimits

0x4df9,	// (0x0008d847) main_mup_eq_pane_t7

0x4e0d,	// (0x0008d85b) main_mup_eq_pane_t8_ParamLimits

0x4e0d,	// (0x0008d85b) main_mup_eq_pane_t8

0x4e21,	// (0x0008d86f) main_mup_eq_pane_t9_ParamLimits

0x4e21,	// (0x0008d86f) main_mup_eq_pane_t9

0x4e3b,	// (0x0008d889) main_mup_eq_pane_t10_ParamLimits

0x4e3b,	// (0x0008d889) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00097ed6) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00097ed6) main_mup_eq_pane_t

0x4eea,	// (0x0008d938) mup_equalizer_pane_cp5_ParamLimits

0x4efe,	// (0x0008d94c) mup_equalizer_pane_cp6_ParamLimits

0x4f12,	// (0x0008d960) mup_equalizer_pane_cp7_ParamLimits

0x022c,	// (0x00088c7a) main_gallery_pane

0xc619,	// (0x00095067) smil2_volume_pane

0xc621,	// (0x0009506f) smil_status_volume_pane_g1_ParamLimits

0xc634,	// (0x00095082) smil_status_volume_pane_g2_ParamLimits

0xc647,	// (0x00095095) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0009808c) smil_status_volume_pane_g_ParamLimits

0xc845,	// (0x00095293) bg_popup_window_pane_cp07_ParamLimits

0xc853,	// (0x000952a1) blid_firmament_pane

0x6642,	// (0x0008f090) aid_size_cell_gallery_ParamLimits

0x6642,	// (0x0008f090) aid_size_cell_gallery

0x6658,	// (0x0008f0a6) grid_gallery_pane_ParamLimits

0x6658,	// (0x0008f0a6) grid_gallery_pane

0x6671,	// (0x0008f0bf) cell_gallery_pane_ParamLimits

0x6671,	// (0x0008f0bf) cell_gallery_pane

0xc978,	// (0x000953c6) bg_cell_gallery_focus_pane_ParamLimits

0xc978,	// (0x000953c6) bg_cell_gallery_focus_pane

0xc98a,	// (0x000953d8) cell_gallery_pane_g1_ParamLimits

0xc98a,	// (0x000953d8) cell_gallery_pane_g1

0x66ba,	// (0x0008f108) cell_gallery_pane_g2_ParamLimits

0x66ba,	// (0x0008f108) cell_gallery_pane_g2

0x66c7,	// (0x0008f115) cell_gallery_pane_g3_ParamLimits

0x66c7,	// (0x0008f115) cell_gallery_pane_g3

0xc996,	// (0x000953e4) cell_gallery_pane_g4_ParamLimits

0xc996,	// (0x000953e4) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0009813a) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0009813a) cell_gallery_pane_g

0xc9a2,	// (0x000953f0) bg_cell_gallery_focus_pane_g1

0xc9aa,	// (0x000953f8) bg_cell_gallery_focus_pane_g2

0xc9b2,	// (0x00095400) bg_cell_gallery_focus_pane_g3

0xc9ba,	// (0x00095408) bg_cell_gallery_focus_pane_g4

0xc9c2,	// (0x00095410) bg_cell_gallery_focus_pane_g5

0xc9ca,	// (0x00095418) bg_cell_gallery_focus_pane_g6

0xc9d2,	// (0x00095420) bg_cell_gallery_focus_pane_g7

0xc9da,	// (0x00095428) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00098143) bg_cell_gallery_focus_pane_g

0xc9e2,	// (0x00095430) aid_firma_cardinal

0xc9f6,	// (0x00095444) blid_firmament_pane_t1

0xca0d,	// (0x0009545b) blid_firmament_pane_t2

0xca24,	// (0x00095472) blid_firmament_pane_t3

0xca3b,	// (0x00095489) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00098154) blid_firmament_pane_t

0xca52,	// (0x000954a0) blid_sat_info_pane

0xca62,	// (0x000954b0) blid_sat_info_pane_g1

0xca62,	// (0x000954b0) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0009815d) blid_sat_info_pane_g

0xca6c,	// (0x000954ba) blid_sat_info_pane_t1

0xca7a,	// (0x000954c8) smil2_volume_content_pane

0xca83,	// (0x000954d1) smil2_volume_pane_g1

0xca8b,	// (0x000954d9) smil2_volume_content_pane_g1

0xca94,	// (0x000954e2) smil2_volume_content_pane_g2

0xca9d,	// (0x000954eb) smil2_volume_content_pane_g3

0xcaa6,	// (0x000954f4) smil2_volume_content_pane_g4

0xcaaf,	// (0x000954fd) smil2_volume_content_pane_g5

0xcab8,	// (0x00095506) smil2_volume_content_pane_g6

0xcac1,	// (0x0009550f) smil2_volume_content_pane_g7

0xcaca,	// (0x00095518) smil2_volume_content_pane_g8

0xcad3,	// (0x00095521) smil2_volume_content_pane_g9

0xcadc,	// (0x0009552a) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00098162) smil2_volume_content_pane_g

0x2cfe,	// (0x0008b74c) cale_week_day_heading_pane_t1_ParamLimits

0x2d12,	// (0x0008b760) cale_week_day_heading_pane_t2_ParamLimits

0x2d26,	// (0x0008b774) cale_week_day_heading_pane_t3_ParamLimits

0x2d3a,	// (0x0008b788) cale_week_day_heading_pane_t4_ParamLimits

0x2d4e,	// (0x0008b79c) cale_week_day_heading_pane_t5_ParamLimits

0x2d62,	// (0x0008b7b0) cale_week_day_heading_pane_t6_ParamLimits

0x2d76,	// (0x0008b7c4) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00097c4e) cale_week_day_heading_pane_t_ParamLimits

0x0b59,	// (0x000895a7) bg_cale_side_pane_ParamLimits

0x2d8a,	// (0x0008b7d8) cale_week_time_pane_t1_ParamLimits

0x2da2,	// (0x0008b7f0) cale_week_time_pane_t2_ParamLimits

0x2dba,	// (0x0008b808) cale_week_time_pane_t3_ParamLimits

0x2dd2,	// (0x0008b820) cale_week_time_pane_t4_ParamLimits

0x2dea,	// (0x0008b838) cale_week_time_pane_t5_ParamLimits

0x2e02,	// (0x0008b850) cale_week_time_pane_t6_ParamLimits

0x2e1a,	// (0x0008b868) cale_week_time_pane_t7_ParamLimits

0x2e32,	// (0x0008b880) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00097c5d) cale_week_time_pane_t_ParamLimits

0x2e4a,	// (0x0008b898) cell_cale_week_pane_g2_ParamLimits

0x0b59,	// (0x000895a7) bg_cale_side_pane_cp01_ParamLimits

0x3d36,	// (0x0008c784) cale_month_week_pane_t1_ParamLimits

0x3d4d,	// (0x0008c79b) cale_month_week_pane_t2_ParamLimits

0x3d64,	// (0x0008c7b2) cale_month_week_pane_t3_ParamLimits

0x3d7b,	// (0x0008c7c9) cale_month_week_pane_t4_ParamLimits

0x3d92,	// (0x0008c7e0) cale_month_week_pane_t5_ParamLimits

0x3da9,	// (0x0008c7f7) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00097d36) cale_month_week_pane_t_ParamLimits

0xb11b,	// (0x00093b69) cell_cale_month_pane_g1_ParamLimits

0x022c,	// (0x00088c7a) main_cale_event_viewer_pane

0x022c,	// (0x00088c7a) listscroll_cale_event_viewer_pane

0xcae5,	// (0x00095533) list_cale_ev_pane

0xcaed,	// (0x0009553b) scroll_pane_cp023

0xcaf9,	// (0x00095547) field_cale_ev_pane_ParamLimits

0xcaf9,	// (0x00095547) field_cale_ev_pane

0xcb13,	// (0x00095561) field_cale_ev_content_pane_ParamLimits

0xcb13,	// (0x00095561) field_cale_ev_content_pane

0xcb1f,	// (0x0009556d) field_cale_ev_pane_g1_ParamLimits

0xcb1f,	// (0x0009556d) field_cale_ev_pane_g1

0xcb2b,	// (0x00095579) field_cale_ev_pane_g2_ParamLimits

0xcb2b,	// (0x00095579) field_cale_ev_pane_g2

0xcb43,	// (0x00095591) field_cale_ev_pane_g3_ParamLimits

0xcb43,	// (0x00095591) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00098177) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00098177) field_cale_ev_pane_g

0xcb5b,	// (0x000955a9) field_cale_ev_pane_t1_ParamLimits

0xcb5b,	// (0x000955a9) field_cale_ev_pane_t1

0xcb72,	// (0x000955c0) field_cale_ev_content_pane_t1_ParamLimits

0xcb72,	// (0x000955c0) field_cale_ev_content_pane_t1

0xb282,	// (0x00093cd0) bg_button_pane_cp01

0x0a07,	// (0x00089455) listscroll_cale_week_pane_ParamLimits

0x2b23,	// (0x0008b571) popup_toolbar_window_cp01

0x0b47,	// (0x00089595) listscroll_cale_week_pane_t1_ParamLimits

0x0a07,	// (0x00089455) listscroll_cale_day_pane_ParamLimits

0x3f41,	// (0x0008c98f) popup_toolbar_window_cp02

0x0b47,	// (0x00089595) listscroll_cale_day_pane_t1_ParamLimits

0x0a07,	// (0x00089455) main_cale_month_pane_ParamLimits

0x5be6,	// (0x0008e634) popup_toolbar_window_cp03_ParamLimits

0x5be6,	// (0x0008e634) popup_toolbar_window_cp03

0x5290,	// (0x0008dcde) main_image_pane_g2_ParamLimits

0x5290,	// (0x0008dcde) main_image_pane_g2

0x52a1,	// (0x0008dcef) main_image_pane_g3_ParamLimits

0x52a1,	// (0x0008dcef) main_image_pane_g3

0x0002,

0xf51a,	// (0x00097f68) main_image_pane_g_ParamLimits

0xf51a,	// (0x00097f68) main_image_pane_g

0xb3de,	// (0x00093e2c) main_image_pane_t1_ParamLimits

0x52b2,	// (0x0008dd00) main_image_pane_t2_ParamLimits

0x52b2,	// (0x0008dd00) main_image_pane_t2

0x52c4,	// (0x0008dd12) main_image_pane_t3_ParamLimits

0x52c4,	// (0x0008dd12) main_image_pane_t3

0x52ec,	// (0x0008dd3a) main_image_pane_t4_ParamLimits

0x52ec,	// (0x0008dd3a) main_image_pane_t4

0x0003,

0xf521,	// (0x00097f6f) main_image_pane_t_ParamLimits

0xf521,	// (0x00097f6f) main_image_pane_t

0x530c,	// (0x0008dd5a) popup_image_details_window_cp01

0x5316,	// (0x0008dd64) popup_toobar_trans_pane_cp01_ParamLimits

0x5316,	// (0x0008dd64) popup_toobar_trans_pane_cp01

0x5a97,	// (0x0008e4e5) popup_image_details_window_ParamLimits

0x5a97,	// (0x0008e4e5) popup_image_details_window

0xc57a,	// (0x00094fc8) popup_image_focus_window

0x5ead,	// (0x0008e8fb) camera2_autofocus_pane_ParamLimits

0x5ead,	// (0x0008e8fb) camera2_autofocus_pane

0x022c,	// (0x00088c7a) bg_popup_sub_pane_cp06

0xcb8f,	// (0x000955dd) popup_image_focus_window_g1

0xcb97,	// (0x000955e5) popup_image_focus_window_g2

0xcb9f,	// (0x000955ed) popup_image_focus_window_g3

0xcba7,	// (0x000955f5) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0009817e) popup_image_focus_window_g

0xcbaf,	// (0x000955fd) popup_image_focus_window_t1

0xcbbd,	// (0x0009560b) popup_image_focus_window_t2

0xcbcd,	// (0x0009561b) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00098187) popup_image_focus_window_t

0xcbdb,	// (0x00095629) camera2_autofocus_pane_g1

0x2659,	// (0x0008b0a7) bg_tb_trans_pane_cp01

0xcbe9,	// (0x00095637) popup_image_details_window_g1

0xcbfc,	// (0x0009564a) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00098199) popup_image_details_window_g

0xcc25,	// (0x00095673) popup_image_details_window_t1

0xcc37,	// (0x00095685) popup_image_details_window_t2

0xcc50,	// (0x0009569e) popup_image_details_window_t3

0xcc64,	// (0x000956b2) popup_image_details_window_t4

0xcc7f,	// (0x000956cd) popup_image_details_window_t5

0x0004,

0xf752,	// (0x000981a0) popup_image_details_window_t

0x09f3,	// (0x00089441) bg_calc_paper_pane_ParamLimits

0xb007,	// (0x00093a55) grid_highlight_pane_cp013

0xb011,	// (0x00093a5f) list_calc_pane_ParamLimits

0xb023,	// (0x00093a71) scroll_pane_cp024

0x0a07,	// (0x00089455) bg_calc_display_pane_ParamLimits

0x297f,	// (0x0008b3cd) calc_display_pane_t1_ParamLimits

0x2991,	// (0x0008b3df) calc_display_pane_t2_ParamLimits

0xb02b,	// (0x00093a79) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00097bd0) calc_display_pane_t_ParamLimits

0x2a4e,	// (0x0008b49c) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00097bed) cell_calc_pane_g

0x2a57,	// (0x0008b4a5) cell_calc_pane_t1

0x0a66,	// (0x000894b4) grid_highlight_pane_cp02_ParamLimits

0x0a7c,	// (0x000894ca) toolbar_button_pane_cp01_ParamLimits

0x0a7c,	// (0x000894ca) toolbar_button_pane_cp01

0xb423,	// (0x00093e71) temp_image_control_pane_ParamLimits

0xb423,	// (0x00093e71) temp_image_control_pane

0x2659,	// (0x0008b0a7) main_mp3_pane

0xcc99,	// (0x000956e7) temp_image_control_pane_g1_ParamLimits

0xcc99,	// (0x000956e7) temp_image_control_pane_g1

0xcca7,	// (0x000956f5) temp_image_control_pane_g2_ParamLimits

0xcca7,	// (0x000956f5) temp_image_control_pane_g2

0xccb9,	// (0x00095707) temp_image_control_pane_g3_ParamLimits

0xccb9,	// (0x00095707) temp_image_control_pane_g3

0x6704,	// (0x0008f152) temp_image_control_pane_g4_ParamLimits

0x6704,	// (0x0008f152) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000981ab) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000981ab) temp_image_control_pane_g

0xcc99,	// (0x000956e7) main_mp3_pane_g1

0x6717,	// (0x0008f165) main_mp3_pane_g2

0x0007,

0xf766,	// (0x000981b4) main_mp3_pane_g

0xccfc,	// (0x0009574a) main_mp3_pane_t1

0x0bc8,	// (0x00089616) main_camera_pane_g8_ParamLimits

0x0bc8,	// (0x00089616) main_camera_pane_g8

0x30f4,	// (0x0008bb42) main_video_pane_g7_ParamLimits

0x30f4,	// (0x0008bb42) main_video_pane_g7

0xc687,	// (0x000950d5) main_camera2_pane_t7_ParamLimits

0xc687,	// (0x000950d5) main_camera2_pane_t7

0x0d16,	// (0x00089764) scroll_pane_cp025_ParamLimits

0x0d16,	// (0x00089764) scroll_pane_cp025

0x0d2a,	// (0x00089778) scroll_pane_cp026_ParamLimits

0x0d2a,	// (0x00089778) scroll_pane_cp026

0x0d39,	// (0x00089787) wml_content_pane_ParamLimits

0x022c,	// (0x00088c7a) main_touch_calib_pane

0x67e2,	// (0x0008f230) main_touch_calib_pane_g1

0x67ee,	// (0x0008f23c) main_touch_calib_pane_g2

0x67fa,	// (0x0008f248) main_touch_calib_pane_g3

0x6806,	// (0x0008f254) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000981d2) main_touch_calib_pane_g

0x6812,	// (0x0008f260) main_touch_calib_pane_t1

0x682c,	// (0x0008f27a) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000981db) main_touch_calib_pane_t

0x48e6,	// (0x0008d334) mup_progress_pane_cp02

0x4905,	// (0x0008d353) navi_pane_g1

0x49be,	// (0x0008d40c) navi_pane_mp_t3

0x2659,	// (0x0008b0a7) main_mp3_pane_ParamLimits

0x5c24,	// (0x0008e672) navi_pane_ParamLimits

0xcc99,	// (0x000956e7) main_mp3_pane_g1_ParamLimits

0x6717,	// (0x0008f165) main_mp3_pane_g2_ParamLimits

0x6725,	// (0x0008f173) main_mp3_pane_g3_ParamLimits

0x6725,	// (0x0008f173) main_mp3_pane_g3

0x6733,	// (0x0008f181) main_mp3_pane_g4_ParamLimits

0x6733,	// (0x0008f181) main_mp3_pane_g4

0xccc9,	// (0x00095717) main_mp3_pane_g5_ParamLimits

0xccc9,	// (0x00095717) main_mp3_pane_g5

0xccd7,	// (0x00095725) main_mp3_pane_g6_ParamLimits

0xccd7,	// (0x00095725) main_mp3_pane_g6

0xcce4,	// (0x00095732) main_mp3_pane_g7_ParamLimits

0xcce4,	// (0x00095732) main_mp3_pane_g7

0xccf0,	// (0x0009573e) main_mp3_pane_g8_ParamLimits

0xccf0,	// (0x0009573e) main_mp3_pane_g8

0xf766,	// (0x000981b4) main_mp3_pane_g_ParamLimits

0x6741,	// (0x0008f18f) main_mp3_pane_t2

0x674f,	// (0x0008f19d) main_mp3_pane_t3

0xcd0a,	// (0x00095758) main_mp3_pane_t4

0xcd18,	// (0x00095766) main_mp3_pane_t5

0x0005,

0xf777,	// (0x000981c5) main_mp3_pane_t

0xcd26,	// (0x00095774) mup_progress_pane_cp01

0x2475,	// (0x0008aec3) aid_zoom_text_secondary2

0xcae5,	// (0x00095533) list_cale_ev2_pane

0xcaed,	// (0x0009553b) scroll_pane_cp023_ParamLimits

0x6882,	// (0x0008f2d0) field_cale_ev2_pane_ParamLimits

0x6882,	// (0x0008f2d0) field_cale_ev2_pane

0x68a8,	// (0x0008f2f6) field_cale_ev2_pane_g1_ParamLimits

0x68a8,	// (0x0008f2f6) field_cale_ev2_pane_g1

0x68b4,	// (0x0008f302) field_cale_ev2_pane_g2_ParamLimits

0x68b4,	// (0x0008f302) field_cale_ev2_pane_g2

0x68cc,	// (0x0008f31a) field_cale_ev2_pane_g3_ParamLimits

0x68cc,	// (0x0008f31a) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000981e6) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000981e6) field_cale_ev2_pane_g

0xcd3a,	// (0x00095788) field_cale_ev2_pane_t1_ParamLimits

0xcd3a,	// (0x00095788) field_cale_ev2_pane_t1

0xcd51,	// (0x0009579f) field_cale_ev2_pane_t2_ParamLimits

0xcd51,	// (0x0009579f) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000981ef) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000981ef) field_cale_ev2_pane_t

0x5140,	// (0x0008db8e) main_postcard_pane_g5_ParamLimits

0x5140,	// (0x0008db8e) main_postcard_pane_g5

0x5156,	// (0x0008dba4) main_postcard_pane_g6_ParamLimits

0x5156,	// (0x0008dba4) main_postcard_pane_g6

0x2ea4,	// (0x0008b8f2) camera2_autofocus_pane_cp_ParamLimits

0x2ea4,	// (0x0008b8f2) camera2_autofocus_pane_cp

0x2659,	// (0x0008b0a7) main_mup3_pane

0x6904,	// (0x0008f352) main_mup3_pane_g1_ParamLimits

0x6904,	// (0x0008f352) main_mup3_pane_g1

0x6926,	// (0x0008f374) main_mup3_pane_g2_ParamLimits

0x6926,	// (0x0008f374) main_mup3_pane_g2

0x69a7,	// (0x0008f3f5) main_mup3_pane_g3_ParamLimits

0x69a7,	// (0x0008f3f5) main_mup3_pane_g3

0x69e9,	// (0x0008f437) main_mup3_pane_g4_ParamLimits

0x69e9,	// (0x0008f437) main_mup3_pane_g4

0x6a2b,	// (0x0008f479) main_mup3_pane_g5_ParamLimits

0x6a2b,	// (0x0008f479) main_mup3_pane_g5

0x6a6f,	// (0x0008f4bd) main_mup3_pane_g6_ParamLimits

0x6a6f,	// (0x0008f4bd) main_mup3_pane_g6

0xcd66,	// (0x000957b4) main_mup3_pane_g7_ParamLimits

0xcd66,	// (0x000957b4) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000981ff) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000981ff) main_mup3_pane_g

0x6aeb,	// (0x0008f539) main_mup3_pane_t1_ParamLimits

0x6aeb,	// (0x0008f539) main_mup3_pane_t1

0x6b5f,	// (0x0008f5ad) main_mup3_pane_t2_ParamLimits

0x6b5f,	// (0x0008f5ad) main_mup3_pane_t2

0x6c33,	// (0x0008f681) main_mup3_pane_t4_ParamLimits

0x6c33,	// (0x0008f681) main_mup3_pane_t4

0x6c8d,	// (0x0008f6db) main_mup3_pane_t5_ParamLimits

0x6c8d,	// (0x0008f6db) main_mup3_pane_t5

0x6d41,	// (0x0008f78f) main_mup3_pane_t6_ParamLimits

0x6d41,	// (0x0008f78f) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00098210) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00098210) main_mup3_pane_t

0x6df5,	// (0x0008f843) mup3_progress_pane_ParamLimits

0x6df5,	// (0x0008f843) mup3_progress_pane

0x6e71,	// (0x0008f8bf) popup_mup3_control_window_ParamLimits

0x6e71,	// (0x0008f8bf) popup_mup3_control_window

0xcd74,	// (0x000957c2) popup_mup3_text_window

0x6ea3,	// (0x0008f8f1) mup3_progress_pane_t1

0x6eba,	// (0x0008f908) mup3_progress_pane_t2

0xcd7c,	// (0x000957ca) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0009821d) mup3_progress_pane_t

0xcd93,	// (0x000957e1) mup_progress_pane_cp03

0x022c,	// (0x00088c7a) bg_tb_trans_pane_cp04

0x6ed1,	// (0x0008f91f) mup3_volume_pane

0x6ed9,	// (0x0008f927) popup_mup3_control_window_g1

0x6ee2,	// (0x0008f930) mup3_volume_pane_g1

0x6eeb,	// (0x0008f939) mup3_volume_pane_g2

0x6ef4,	// (0x0008f942) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00098224) mup3_volume_pane_g

0x022c,	// (0x00088c7a) bg_tb_trans_pane_cp03

0xcda3,	// (0x000957f1) popup_mup3_text_window_g1

0xcdab,	// (0x000957f9) popup_mup3_text_window_t1

0x0a4f,	// (0x0008949d) list_calc_item_pane_g1_ParamLimits

0xc76f,	// (0x000951bd) mup_volume_pane_cp_g1

0x6846,	// (0x0008f294) main_touch_calib_pane_t3

0x685a,	// (0x0008f2a8) main_touch_calib_pane_t4

0x686e,	// (0x0008f2bc) main_touch_calib_pane_t5

0x0236,	// (0x00088c84) aid_cell_size_toolbar2

0x023e,	// (0x00088c8c) aid_popup3_width_pane

0x2465,	// (0x0008aeb3) aid_zoom_text_msg_primary

0xb105,	// (0x00093b53) vorec_t7

0x0a13,	// (0x00089461) bg_calc_paper_pane_g1_ParamLimits

0x0a1f,	// (0x0008946d) bg_calc_paper_pane_g2_ParamLimits

0x0a2b,	// (0x00089479) bg_calc_paper_pane_g3_ParamLimits

0x0a37,	// (0x00089485) bg_calc_paper_pane_g4_ParamLimits

0x0a43,	// (0x00089491) bg_calc_paper_pane_g5_ParamLimits

0x29d8,	// (0x0008b426) bg_calc_paper_pane_g6_ParamLimits

0x29e7,	// (0x0008b435) bg_calc_paper_pane_g7_ParamLimits

0x29f6,	// (0x0008b444) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00097bd7) bg_calc_paper_pane_g_ParamLimits

0x2a09,	// (0x0008b457) calc_bg_paper_pane_g9_ParamLimits

0x2ffe,	// (0x0008ba4c) image_qvga_pane_ParamLimits

0x2ffe,	// (0x0008ba4c) image_qvga_pane

0x08f8,	// (0x00089346) bg_popup_sub_pane_cp04_ParamLimits

0xb35a,	// (0x00093da8) popup_mup_playback_window_g1_ParamLimits

0xb366,	// (0x00093db4) popup_mup_playback_window_t1_ParamLimits

0xb37b,	// (0x00093dc9) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00097f63) popup_mup_playback_window_t_ParamLimits

0x63a4,	// (0x0008edf2) main_mup2_pane_g3_ParamLimits

0x63a4,	// (0x0008edf2) main_mup2_pane_g3

0x33bb,	// (0x0008be09) popup_toolbar_window_cp04

0xb770,	// (0x000941be) popup_call2_audio_second_window_g3_ParamLimits

0xb770,	// (0x000941be) popup_call2_audio_second_window_g3

0xbb7a,	// (0x000945c8) popup_call2_audio_first_window_g4_ParamLimits

0xbb7a,	// (0x000945c8) popup_call2_audio_first_window_g4

0xc1f9,	// (0x00094c47) popup_call2_audio_in_window_g4_ParamLimits

0xc1f9,	// (0x00094c47) popup_call2_audio_in_window_g4

0x5272,	// (0x0008dcc0) aid_area_sk_bg_cut_ParamLimits

0x5272,	// (0x0008dcc0) aid_area_sk_bg_cut

0xb390,	// (0x00093dde) aid_area_sk_bg_cut_2_ParamLimits

0xb390,	// (0x00093dde) aid_area_sk_bg_cut_2

0x66aa,	// (0x0008f0f8) aid_placing_details_win

0x66b2,	// (0x0008f100) aid_placing_details_win_2

0xcbdb,	// (0x00095629) camera2_autofocus_pane_g1_ParamLimits

0x2604,	// (0x0008b052) popup_fixed_preview_cale_window_ParamLimits

0x2604,	// (0x0008b052) popup_fixed_preview_cale_window

0x4a7e,	// (0x0008d4cc) navi_slider_pane_g3

0x4a87,	// (0x0008d4d5) navi_slider_pane_g4

0x4a90,	// (0x0008d4de) navi_slider_pane_g5

0x4a7e,	// (0x0008d4cc) navi_slider_pane_g6

0xb1c1,	// (0x00093c0f) navi_slider_pane_g7

0xb24f,	// (0x00093c9d) mup_scale_pane_g3

0xb258,	// (0x00093ca6) mup_scale_pane_g4

0xb261,	// (0x00093caf) mup_scale_pane_g5

0x4f26,	// (0x0008d974) mup_scale_pane_g6

0x4f2f,	// (0x0008d97d) mup_scale_pane_g7

0x4a7e,	// (0x0008d4cc) cams2_slider_pane_g3

0xc824,	// (0x00095272) cams2_slider_pane_g4

0xc82c,	// (0x0009527a) cams2_slider_pane_g5

0x4a7e,	// (0x0008d4cc) cams2_slider_pane_g6

0xc834,	// (0x00095282) cams2_slider_pane_g7

0xca62,	// (0x000954b0) camera2_autofocus_pane_cp_g1

0xcdb9,	// (0x00095807) bg_popup_preview_window_pane_cp02_ParamLimits

0xcdb9,	// (0x00095807) bg_popup_preview_window_pane_cp02

0xcdc5,	// (0x00095813) list_fp_cale_pane_ParamLimits

0xcdc5,	// (0x00095813) list_fp_cale_pane

0xcdd1,	// (0x0009581f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcdd1,	// (0x0009581f) popup_fixed_preview_cale_window_t1

0x6efd,	// (0x0008f94b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6efd,	// (0x0008f94b) popup_fixed_preview_cale_window_t2

0x6f12,	// (0x0008f960) popup_fixed_preview_cale_window_t3_ParamLimits

0x6f12,	// (0x0008f960) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0009822b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0009822b) popup_fixed_preview_cale_window_t

0x6f27,	// (0x0008f975) list_single_fp_cale_pane_ParamLimits

0x6f27,	// (0x0008f975) list_single_fp_cale_pane

0xcdef,	// (0x0009583d) list_single_fp_cale_pane_g1_ParamLimits

0xcdef,	// (0x0009583d) list_single_fp_cale_pane_g1

0xcdfb,	// (0x00095849) list_single_fp_cale_pane_g2_ParamLimits

0xcdfb,	// (0x00095849) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00098232) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00098232) list_single_fp_cale_pane_g

0xce14,	// (0x00095862) list_single_fp_cale_pane_t1_ParamLimits

0xce14,	// (0x00095862) list_single_fp_cale_pane_t1

0xce26,	// (0x00095874) list_single_fp_cale_pane_t2_ParamLimits

0xce26,	// (0x00095874) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00098239) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00098239) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x022c,	// (0x00088c7a) main_dialer_pane

0x6f3f,	// (0x0008f98d) aid_cell_size_keypad

0x6f49,	// (0x0008f997) dialer_ne_pane

0x6f51,	// (0x0008f99f) grid_dialer_command_1_pane

0x6f59,	// (0x0008f9a7) grid_dialer_command_2_pane

0x6f61,	// (0x0008f9af) grid_dialer_keypad_pane

0x6f73,	// (0x0008f9c1) bg_popup_call_pane_cp06_ParamLimits

0x6f73,	// (0x0008f9c1) bg_popup_call_pane_cp06

0x6f7f,	// (0x0008f9cd) dialer_ne_clear_pane_ParamLimits

0x6f7f,	// (0x0008f9cd) dialer_ne_clear_pane

0xce59,	// (0x000958a7) dialer_ne_pane_g1

0xce61,	// (0x000958af) dialer_ne_pane_t1_ParamLimits

0xce61,	// (0x000958af) dialer_ne_pane_t1

0x6f8b,	// (0x0008f9d9) dialer_ne_pane_t2_ParamLimits

0x6f8b,	// (0x0008f9d9) dialer_ne_pane_t2

0x6fb5,	// (0x0008fa03) dialer_ne_pane_t3_ParamLimits

0x6fb5,	// (0x0008fa03) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0009823e) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0009823e) dialer_ne_pane_t

0x6fe5,	// (0x0008fa33) dialer_ne_pane_t3_copy1_ParamLimits

0x6fe5,	// (0x0008fa33) dialer_ne_pane_t3_copy1

0x7014,	// (0x0008fa62) cell_dialer_keypad_pane_ParamLimits

0x7014,	// (0x0008fa62) cell_dialer_keypad_pane

0x702b,	// (0x0008fa79) cell_dialer_command_1_pane_ParamLimits

0x702b,	// (0x0008fa79) cell_dialer_command_1_pane

0x7041,	// (0x0008fa8f) cell_dialer_command_2_pane_ParamLimits

0x7041,	// (0x0008fa8f) cell_dialer_command_2_pane

0xce73,	// (0x000958c1) bg_button_pane_cp02_ParamLimits

0xce73,	// (0x000958c1) bg_button_pane_cp02

0x7050,	// (0x0008fa9e) cell_dialer_keypad_pane_g1_ParamLimits

0x7050,	// (0x0008fa9e) cell_dialer_keypad_pane_g1

0xce73,	// (0x000958c1) bg_button_pane_cp03_ParamLimits

0xce73,	// (0x000958c1) bg_button_pane_cp03

0x7065,	// (0x0008fab3) cell_dialer_command_1_pane_g1_ParamLimits

0x7065,	// (0x0008fab3) cell_dialer_command_1_pane_g1

0xe87e,	// (0x000972cc) bg_button_pane_cp04

0x7079,	// (0x0008fac7) cell_dialer_command_2_pane_g1

0x4a6d,	// (0x0008d4bb) bg_button_pane_cp06

0xe886,	// (0x000972d4) dialer_ne_clear_pane_g1

0x4911,	// (0x0008d35f) navi_pane_g2

0x493f,	// (0x0008d38d) navi_pane_g3

0x0002,

0xf418,	// (0x00097e66) navi_pane_g

0x49cc,	// (0x0008d41a) navi_pane_mv_g2

0x49f3,	// (0x0008d441) navi_pane_mv_g5

0x49fb,	// (0x0008d449) navi_pane_mv_t1

0x0a07,	// (0x00089455) main_clock2_pane

0x70ac,	// (0x0008fafa) main_clock2_list_pane_ParamLimits

0x70ac,	// (0x0008fafa) main_clock2_list_pane

0x70e2,	// (0x0008fb30) main_clock2_pane_t1_ParamLimits

0x70e2,	// (0x0008fb30) main_clock2_pane_t1

0x7120,	// (0x0008fb6e) main_clock2_pane_t2_ParamLimits

0x7120,	// (0x0008fb6e) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00098245) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00098245) main_clock2_pane_t

0x71aa,	// (0x0008fbf8) popup_clock_analogue_window_cp03_ParamLimits

0x71aa,	// (0x0008fbf8) popup_clock_analogue_window_cp03

0x71d1,	// (0x0008fc1f) popup_clock_digital_window_cp02_ParamLimits

0x71d1,	// (0x0008fc1f) popup_clock_digital_window_cp02

0x7246,	// (0x0008fc94) main_clock2_list_single_pane_ParamLimits

0x7246,	// (0x0008fc94) main_clock2_list_single_pane

0x4a6d,	// (0x0008d4bb) list_highlight_pane_cp05

0xe88e,	// (0x000972dc) main_clock2_list_single_pane_t1

0x33bb,	// (0x0008be09) popup_toolbar_window_cp04_ParamLimits

0x66d4,	// (0x0008f122) camera2_autofocus_pane_g2_ParamLimits

0x66d4,	// (0x0008f122) camera2_autofocus_pane_g2

0x66e0,	// (0x0008f12e) camera2_autofocus_pane_g3_ParamLimits

0x66e0,	// (0x0008f12e) camera2_autofocus_pane_g3

0x66ec,	// (0x0008f13a) camera2_autofocus_pane_g4_ParamLimits

0x66ec,	// (0x0008f13a) camera2_autofocus_pane_g4

0x66f8,	// (0x0008f146) camera2_autofocus_pane_g5_ParamLimits

0x66f8,	// (0x0008f146) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0009818e) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0009818e) camera2_autofocus_pane_g

0x68e4,	// (0x0008f332) camera2_autofocus_pane_cp_g2

0x68ec,	// (0x0008f33a) camera2_autofocus_pane_cp_g3

0x68f4,	// (0x0008f342) camera2_autofocus_pane_cp_g4

0x68fc,	// (0x0008f34a) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000981f4) camera2_autofocus_pane_cp_g

0x6f6b,	// (0x0008f9b9) popup_dialer_spcha_window

0x022c,	// (0x00088c7a) bg_popup_sub_pane_cp07

0xe89c,	// (0x000972ea) list_spcha_pane

0xe8a4,	// (0x000972f2) list_single_spcha_pane_ParamLimits

0xe8a4,	// (0x000972f2) list_single_spcha_pane

0x022c,	// (0x00088c7a) list_highlight_pane_cp06

0xe8b5,	// (0x00097303) list_single_spcha_pane_t1

0xbfa3,	// (0x000949f1) popup_call2_audio_out_window_g4_ParamLimits

0xbfa3,	// (0x000949f1) popup_call2_audio_out_window_g4

0x022c,	// (0x00088c7a) main_imed2_pane

0xc582,	// (0x00094fd0) popup_imed_adjust2_window

0x5aaf,	// (0x0008e4fd) popup_imed_trans_window_ParamLimits

0x5aaf,	// (0x0008e4fd) popup_imed_trans_window

0xc89e,	// (0x000952ec) popup_blid_sat_info2_window_t1

0xc8ac,	// (0x000952fa) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00098123) popup_blid_sat_info2_window_t

0x72f0,	// (0x0008fd3e) aid_size_cell_colour_35

0x7310,	// (0x0008fd5e) aid_size_cell_colour_112

0x7330,	// (0x0008fd7e) aid_size_cell_effect

0xc55a,	// (0x00094fa8) bg_tb_trans_pane_cp02

0x40b8,	// (0x0008cb06) heading_imed_pane

0x7350,	// (0x0008fd9e) listscroll_imed_pane

0xe8c3,	// (0x00097311) heading_imed_pane_g1

0xe8cb,	// (0x00097319) heading_imed_pane_t1

0xe8d9,	// (0x00097327) grid_imed_colour_35_pane_ParamLimits

0xe8d9,	// (0x00097327) grid_imed_colour_35_pane

0x735c,	// (0x0008fdaa) grid_imed_effect_pane

0xe8f4,	// (0x00097342) list_imed_aspect_pane

0x7371,	// (0x0008fdbf) scroll_pane_cp027_ParamLimits

0x7371,	// (0x0008fdbf) scroll_pane_cp027

0x7382,	// (0x0008fdd0) cell_imed_effect_pane_ParamLimits

0x7382,	// (0x0008fdd0) cell_imed_effect_pane

0xe8fc,	// (0x0009734a) cell_imed_colour_pane_ParamLimits

0xe8fc,	// (0x0009734a) cell_imed_colour_pane

0xe93e,	// (0x0009738c) cell_imed_colour_pane_g1_ParamLimits

0xe93e,	// (0x0009738c) cell_imed_colour_pane_g1

0xe94f,	// (0x0009739d) hgihlgiht_grid_pane_cp016_ParamLimits

0xe94f,	// (0x0009739d) hgihlgiht_grid_pane_cp016

0x73a9,	// (0x0008fdf7) cell_imed_effect_pane_g1

0x73b1,	// (0x0008fdff) grid_highlight_pane_cp017

0xe85b,	// (0x000972a9) list_imed_single_pane_ParamLimits

0xe85b,	// (0x000972a9) list_imed_single_pane

0x022c,	// (0x00088c7a) list_highlight_pane_cp07

0xe960,	// (0x000973ae) list_imed_aspect_pane_comp1_t1

0xc55a,	// (0x00094fa8) bg_tb_trans_pane_cp05

0xe982,	// (0x000973d0) popup_imed_adjust2_window_g1

0xe9a9,	// (0x000973f7) popup_imed_adjust2_window_t1

0xe9c1,	// (0x0009740f) slider_imed_adjust_pane

0xe9d5,	// (0x00097423) slider_imed_adjust_pane_g1

0xe9e5,	// (0x00097433) slider_imed_adjust_pane_g2

0xe9f5,	// (0x00097443) slider_imed_adjust_pane_g3

0xea06,	// (0x00097454) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00098262) slider_imed_adjust_pane_g

0x73ba,	// (0x0008fe08) aid_size_cell_clipart2

0x73c6,	// (0x0008fe14) grid_imed_clipart_pane

0xea17,	// (0x00097465) scroll_pane_cp031

0x73d0,	// (0x0008fe1e) cell_imed_clipart_pane_ParamLimits

0x73d0,	// (0x0008fe1e) cell_imed_clipart_pane

0x73f7,	// (0x0008fe45) cell_imed_clipart_pane_g1

0x022c,	// (0x00088c7a) grid_highlight_pane_cp014

0x70c1,	// (0x0008fb0f) main_clock2_pane_g1_ParamLimits

0x70c1,	// (0x0008fb0f) main_clock2_pane_g1

0x71f1,	// (0x0008fc3f) aid_call2_pane_cp10

0x7203,	// (0x0008fc51) aid_call_pane_cp10

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g1

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g2

0x7215,	// (0x0008fc63) popup_clock_analogue_window_cp10_g3

0x7215,	// (0x0008fc63) popup_clock_analogue_window_cp10_g4

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00098250) popup_clock_analogue_window_cp10_g

0x7227,	// (0x0008fc75) popup_clock_analogue_window_cp10_t1

0x7258,	// (0x0008fca6) clock_digital_number_pane_cp10_ParamLimits

0x7258,	// (0x0008fca6) clock_digital_number_pane_cp10

0x7270,	// (0x0008fcbe) clock_digital_number_pane_cp11_ParamLimits

0x7270,	// (0x0008fcbe) clock_digital_number_pane_cp11

0x7288,	// (0x0008fcd6) clock_digital_number_pane_cp12_ParamLimits

0x7288,	// (0x0008fcd6) clock_digital_number_pane_cp12

0x72a0,	// (0x0008fcee) clock_digital_number_pane_cp13_ParamLimits

0x72a0,	// (0x0008fcee) clock_digital_number_pane_cp13

0x72b8,	// (0x0008fd06) clock_digital_separator_pane_cp10_ParamLimits

0x72b8,	// (0x0008fd06) clock_digital_separator_pane_cp10

0x72d0,	// (0x0008fd1e) popup_clock_digital_window_cp02_t1_ParamLimits

0x72d0,	// (0x0008fd1e) popup_clock_digital_window_cp02_t1

0x08f0,	// (0x0008933e) clock_digital_number_pane_cp10_g1

0x08f0,	// (0x0008933e) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0009826b) clock_digital_number_pane_cp10_g

0x08f0,	// (0x0008933e) clock_digital_separator_pane_cp10_g1

0x08f0,	// (0x0008933e) clock_digital_separator_pane_g2_cp10

0x4a3d,	// (0x0008d48b) navi_pane_vded_g4

0x4a46,	// (0x0008d494) navi_pane_vded_g5

0x4a4f,	// (0x0008d49d) navi_pane_vded_t1

0x022c,	// (0x00088c7a) main_vded_pane

0x7400,	// (0x0008fe4e) main_vded_pane_g1

0x740c,	// (0x0008fe5a) main_vded_pane_g2

0x7416,	// (0x0008fe64) main_vded_pane_g3

0x0002,

0xf822,	// (0x00098270) main_vded_pane_g

0x7420,	// (0x0008fe6e) main_vded_pane_t1

0x742e,	// (0x0008fe7c) main_vded_pane_t2

0x0001,

0xf829,	// (0x00098277) main_vded_pane_t

0x743c,	// (0x0008fe8a) vded_slider_pane

0x7446,	// (0x0008fe94) vded_video_pane

0xea1f,	// (0x0009746d) vded_video_pane_g1

0x7450,	// (0x0008fe9e) vded_video_pane_g2

0xca62,	// (0x000954b0) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0009827c) vded_video_pane_g

0xea29,	// (0x00097477) vded_slider_pane_g1

0xc76f,	// (0x000951bd) vded_slider_pane_g2

0xea32,	// (0x00097480) vded_slider_pane_g3

0xea3b,	// (0x00097489) vded_slider_pane_g4

0xea44,	// (0x00097492) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00098283) vded_slider_pane_g

0x6e59,	// (0x0008f8a7) mup3_rocker_pane_ParamLimits

0x6e59,	// (0x0008f8a7) mup3_rocker_pane

0x7459,	// (0x0008fea7) mup3_control_keys_pane_g1

0x7461,	// (0x0008feaf) mup3_control_keys_pane_g2

0x7469,	// (0x0008feb7) mup3_control_keys_pane_g3

0x7471,	// (0x0008febf) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0009828e) mup3_control_keys_pane_g

0x263b,	// (0x0008b089) popup_toolbar2_fixed_window_cp01_ParamLimits

0x263b,	// (0x0008b089) popup_toolbar2_fixed_window_cp01

0x6e8d,	// (0x0008f8db) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e8d,	// (0x0008f8db) popup_toolbar2_fixed_window_cp02

0xb8e2,	// (0x00094330) popup_call2_audio_second_window_t4_ParamLimits

0xb8e2,	// (0x00094330) popup_call2_audio_second_window_t4

0xbe10,	// (0x0009485e) popup_call2_audio_first_window_t6_ParamLimits

0xbe10,	// (0x0009485e) popup_call2_audio_first_window_t6

0xc0a6,	// (0x00094af4) popup_call2_audio_out_window_t6_ParamLimits

0xc0a6,	// (0x00094af4) popup_call2_audio_out_window_t6

0x022c,	// (0x00088c7a) main_vitu_pane

0x7481,	// (0x0008fecf) aid_size_cell_itu_ParamLimits

0x7481,	// (0x0008fecf) aid_size_cell_itu

0x2659,	// (0x0008b0a7) bg_popup_window_pane_cp08_ParamLimits

0x2659,	// (0x0008b0a7) bg_popup_window_pane_cp08

0x7497,	// (0x0008fee5) field_vitu_entry_pane_ParamLimits

0x7497,	// (0x0008fee5) field_vitu_entry_pane

0x74ae,	// (0x0008fefc) grid_vitu_function_pane_ParamLimits

0x74ae,	// (0x0008fefc) grid_vitu_function_pane

0x74c9,	// (0x0008ff17) grid_vitu_itu_pane_ParamLimits

0x74c9,	// (0x0008ff17) grid_vitu_itu_pane

0x74e7,	// (0x0008ff35) cell_vitu_itu_pane_ParamLimits

0x74e7,	// (0x0008ff35) cell_vitu_itu_pane

0x750b,	// (0x0008ff59) cell_vitu_function_pane_ParamLimits

0x750b,	// (0x0008ff59) cell_vitu_function_pane

0x2659,	// (0x0008b0a7) bg_popup_sub_pane_cp08_ParamLimits

0x2659,	// (0x0008b0a7) bg_popup_sub_pane_cp08

0x7526,	// (0x0008ff74) field_vitu_entry_pane_t1_ParamLimits

0x7526,	// (0x0008ff74) field_vitu_entry_pane_t1

0xea65,	// (0x000974b3) field_vitu_entry_pane_t2_ParamLimits

0xea65,	// (0x000974b3) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0009829c) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0009829c) field_vitu_entry_pane_t

0xea82,	// (0x000974d0) bg_button_pane_cp05_ParamLimits

0xea82,	// (0x000974d0) bg_button_pane_cp05

0x7546,	// (0x0008ff94) cell_vitu_itu_pane_g1

0x755e,	// (0x0008ffac) cell_vitu_itu_pane_t1_ParamLimits

0x755e,	// (0x0008ffac) cell_vitu_itu_pane_t1

0x7570,	// (0x0008ffbe) cell_vitu_itu_pane_t2_ParamLimits

0x7570,	// (0x0008ffbe) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x000982a1) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x000982a1) cell_vitu_itu_pane_t

0xea90,	// (0x000974de) bg_button_pane_cp07

0x75a5,	// (0x0008fff3) cell_vitu_function_pane_g1

0xafff,	// (0x00093a4d) main_calc_pane_g1

0x2459,	// (0x0008aea7) aid_visual_content_pane

0x022c,	// (0x00088c7a) main_vradio_pane

0x75ae,	// (0x0008fffc) main_vradio_pane_g1_ParamLimits

0x75ae,	// (0x0008fffc) main_vradio_pane_g1

0xea9a,	// (0x000974e8) main_vradio_pane_g2_ParamLimits

0xea9a,	// (0x000974e8) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x000982a8) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x000982a8) main_vradio_pane_g

0x75c7,	// (0x00090015) main_vradio_pane_t1_ParamLimits

0x75c7,	// (0x00090015) main_vradio_pane_t1

0x75dc,	// (0x0009002a) main_vradio_pane_t2_ParamLimits

0x75dc,	// (0x0009002a) main_vradio_pane_t2

0xeaa7,	// (0x000974f5) main_vradio_pane_t3_ParamLimits

0xeaa7,	// (0x000974f5) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x000982ad) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x000982ad) main_vradio_pane_t

0x75f1,	// (0x0009003f) vradio_rocker_control_pane_ParamLimits

0x75f1,	// (0x0009003f) vradio_rocker_control_pane

0x7603,	// (0x00090051) vradio_station_info_pane_ParamLimits

0x7603,	// (0x00090051) vradio_station_info_pane

0xeabb,	// (0x00097509) vradio_frequency_info_pane_ParamLimits

0xeabb,	// (0x00097509) vradio_frequency_info_pane

0xca62,	// (0x000954b0) vradio_station_info_pane_g1

0xeaca,	// (0x00097518) vradio_station_info_pane_t1_ParamLimits

0xeaca,	// (0x00097518) vradio_station_info_pane_t1

0xeaec,	// (0x0009753a) vradio_station_info_pane_t2_ParamLimits

0xeaec,	// (0x0009753a) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x000982b4) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x000982b4) vradio_station_info_pane_t

0xeafe,	// (0x0009754c) vradio_tuning_pane

0xeb06,	// (0x00097554) vradio_rocker_control_pane_g1

0xeb0e,	// (0x0009755c) vradio_rocker_control_pane_g2

0xeb16,	// (0x00097564) vradio_rocker_control_pane_g3

0xeb1e,	// (0x0009756c) vradio_rocker_control_pane_g4

0xeb26,	// (0x00097574) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x000982b9) vradio_rocker_control_pane_g

0x7615,	// (0x00090063) vradio_frequency_info_pane_g1

0xeb2e,	// (0x0009757c) vradio_frequency_info_pane_t1_ParamLimits

0xeb2e,	// (0x0009757c) vradio_frequency_info_pane_t1

0x761f,	// (0x0009006d) vradio_tuning_pane_g1

0x762a,	// (0x00090078) vradio_tuning_pane_t1

0x024a,	// (0x00088c98) area_side_right_pane_ParamLimits

0x024a,	// (0x00088c98) area_side_right_pane

0xc521,	// (0x00094f6f) status_small_pane_g1

0xc529,	// (0x00094f77) status_small_pane_g2

0xc532,	// (0x00094f80) status_small_pane_g3

0xc53b,	// (0x00094f89) status_small_pane_g4

0x0003,

0xf62b,	// (0x00098079) status_small_pane_g

0xc544,	// (0x00094f92) status_small_pane_t1

0x022c,	// (0x00088c7a) main_video3_pane

0xeb42,	// (0x00097590) cams_zoom_vslider_pane

0xeb4a,	// (0x00097598) image3_wide_pane_ParamLimits

0xeb4a,	// (0x00097598) image3_wide_pane

0xeb64,	// (0x000975b2) image3_wide_small_pane

0xeb70,	// (0x000975be) main_video3_pane_g1_ParamLimits

0xeb70,	// (0x000975be) main_video3_pane_g1

0xeb8c,	// (0x000975da) main_video3_pane_g2_ParamLimits

0xeb8c,	// (0x000975da) main_video3_pane_g2

0x0001,

0xf876,	// (0x000982c4) main_video3_pane_g_ParamLimits

0xf876,	// (0x000982c4) main_video3_pane_g

0xeba8,	// (0x000975f6) main_video3_pane_t1_ParamLimits

0xeba8,	// (0x000975f6) main_video3_pane_t1

0xebd3,	// (0x00097621) main_video3_pane_t2_ParamLimits

0xebd3,	// (0x00097621) main_video3_pane_t2

0xebfe,	// (0x0009764c) main_video3_pane_t3_ParamLimits

0xebfe,	// (0x0009764c) main_video3_pane_t3

0x0002,

0xf87b,	// (0x000982c9) main_video3_pane_t_ParamLimits

0xf87b,	// (0x000982c9) main_video3_pane_t

0xec2b,	// (0x00097679) cams_zoom_vslider_pane_g1

0xec34,	// (0x00097682) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000982d0) cams_zoom_vslider_pane_g

0xec3c,	// (0x0009768a) small_slider_vertical_pane

0xca62,	// (0x000954b0) small_slider_vertical_pane_g1

0xca62,	// (0x000954b0) small_slider_vertical_pane_g2

0xec44,	// (0x00097692) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000982d5) small_slider_vertical_pane_g

0x022c,	// (0x00088c7a) main_hwr_training_pane

0xec4d,	// (0x0009769b) hwr_training_instruct_pane_ParamLimits

0xec4d,	// (0x0009769b) hwr_training_instruct_pane

0x7639,	// (0x00090087) hwr_training_navi_pane_ParamLimits

0x7639,	// (0x00090087) hwr_training_navi_pane

0x7658,	// (0x000900a6) hwr_training_write_pane_ParamLimits

0x7658,	// (0x000900a6) hwr_training_write_pane

0x022c,	// (0x00088c7a) bg_frame_shadow_pane

0xec84,	// (0x000976d2) hwr_training_write_pane_g1

0xec8c,	// (0x000976da) hwr_training_write_pane_g2

0xec94,	// (0x000976e2) hwr_training_write_pane_g3

0xec9c,	// (0x000976ea) hwr_training_write_pane_g4

0xeca4,	// (0x000976f2) hwr_training_write_pane_g5

0xecac,	// (0x000976fa) hwr_training_write_pane_g6

0xecb4,	// (0x00097702) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000982dc) hwr_training_write_pane_g

0xecbc,	// (0x0009770a) hwr_training_navi_pane_g1_ParamLimits

0xecbc,	// (0x0009770a) hwr_training_navi_pane_g1

0xecce,	// (0x0009771c) hwr_training_navi_pane_g2_ParamLimits

0xecce,	// (0x0009771c) hwr_training_navi_pane_g2

0xece0,	// (0x0009772e) hwr_training_navi_pane_g3_ParamLimits

0xece0,	// (0x0009772e) hwr_training_navi_pane_g3

0xecf0,	// (0x0009773e) hwr_training_navi_pane_g4_ParamLimits

0xecf0,	// (0x0009773e) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000982eb) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000982eb) hwr_training_navi_pane_g

0xecfd,	// (0x0009774b) hwr_training_navi_pane_t1

0x76a2,	// (0x000900f0) list_single_hwr_training_instruct_pane_ParamLimits

0x76a2,	// (0x000900f0) list_single_hwr_training_instruct_pane

0x0e89,	// (0x000898d7) list_single_hwr_training_instruct_pane_t1

0xc9a2,	// (0x000953f0) bg_frame_shadow_pane_g1

0x0e98,	// (0x000898e6) bg_frame_shadow_pane_g2

0x0ea0,	// (0x000898ee) bg_frame_shadow_pane_g3

0x0ea8,	// (0x000898f6) bg_frame_shadow_pane_g4

0x0eb0,	// (0x000898fe) bg_frame_shadow_pane_g5

0x0eb8,	// (0x00089906) bg_frame_shadow_pane_g6

0x0ec0,	// (0x0008990e) bg_frame_shadow_pane_g7

0x0ad2,	// (0x00089520) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000982f6) bg_frame_shadow_pane_g

0x022c,	// (0x00088c7a) main_video_tele_dialer_pane

0x76bf,	// (0x0009010d) aid_size_cell_video_keypad_ParamLimits

0x76bf,	// (0x0009010d) aid_size_cell_video_keypad

0x76d9,	// (0x00090127) grid_video_dialer_keypad_pane_ParamLimits

0x76d9,	// (0x00090127) grid_video_dialer_keypad_pane

0x7725,	// (0x00090173) video_down_pane_cp_ParamLimits

0x7725,	// (0x00090173) video_down_pane_cp

0x7759,	// (0x000901a7) cell_video_dialer_keypad_pane_ParamLimits

0x7759,	// (0x000901a7) cell_video_dialer_keypad_pane

0x0ec8,	// (0x00089916) bg_button_pane_cp08_ParamLimits

0x0ec8,	// (0x00089916) bg_button_pane_cp08

0x777b,	// (0x000901c9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x777b,	// (0x000901c9) cell_video_dialer_keypad_pane_g1

0x6e43,	// (0x0008f891) mup3_rocker2_pane_ParamLimits

0x6e43,	// (0x0008f891) mup3_rocker2_pane

0xca62,	// (0x000954b0) mup3_rocker2_pane_g1

0x5998,	// (0x0008e3e6) main_dialer2_pane

0x022c,	// (0x00088c7a) main_mp4_pane

0xed13,	// (0x00097761) main_mp4_pane_g1_ParamLimits

0xed13,	// (0x00097761) main_mp4_pane_g1

0xed13,	// (0x00097761) main_mp4_pane_g2_ParamLimits

0xed13,	// (0x00097761) main_mp4_pane_g2

0x77b6,	// (0x00090204) main_mp4_pane_g3_ParamLimits

0x77b6,	// (0x00090204) main_mp4_pane_g3

0xed21,	// (0x0009776f) main_mp4_pane_g4_ParamLimits

0xed21,	// (0x0009776f) main_mp4_pane_g4

0xed49,	// (0x00097797) main_mp4_pane_g5_ParamLimits

0xed49,	// (0x00097797) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00098316) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00098316) main_mp4_pane_g

0xed99,	// (0x000977e7) main_mp4_pane_t1_ParamLimits

0xed99,	// (0x000977e7) main_mp4_pane_t1

0xedf5,	// (0x00097843) main_mp4_pane_t2_ParamLimits

0xedf5,	// (0x00097843) main_mp4_pane_t2

0x0ed4,	// (0x00089922) main_mp4_pane_t3_ParamLimits

0x0ed4,	// (0x00089922) main_mp4_pane_t3

0xee47,	// (0x00097895) main_mp4_pane_t4_ParamLimits

0xee47,	// (0x00097895) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00098323) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00098323) main_mp4_pane_t

0xee8b,	// (0x000978d9) mp4_progress_pane_ParamLimits

0xee8b,	// (0x000978d9) mp4_progress_pane

0xeed5,	// (0x00097923) mp4_rocker_pane_ParamLimits

0xeed5,	// (0x00097923) mp4_rocker_pane

0x0efc,	// (0x0008994a) mp4_progress_pane_t1

0x0f15,	// (0x00089963) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0009832c) mp4_progress_pane_t

0x0f2e,	// (0x0008997c) mup_progress_pane_cp04

0x0f3a,	// (0x00089988) mp4_rocker_pane_g1

0x77f2,	// (0x00090240) aid_cell_size_keypad2_ParamLimits

0x77f2,	// (0x00090240) aid_cell_size_keypad2

0x7808,	// (0x00090256) dialer2_ne_pane_ParamLimits

0x7808,	// (0x00090256) dialer2_ne_pane

0x7822,	// (0x00090270) grid_dialer2_keypad_pane_ParamLimits

0x7822,	// (0x00090270) grid_dialer2_keypad_pane

0xc845,	// (0x00095293) bg_popup_call_pane_cp07_ParamLimits

0xc845,	// (0x00095293) bg_popup_call_pane_cp07

0x7840,	// (0x0009028e) dialer2_ne_pane_t1_ParamLimits

0x7840,	// (0x0009028e) dialer2_ne_pane_t1

0x787f,	// (0x000902cd) cell_dialer2_keypad_pane_ParamLimits

0x787f,	// (0x000902cd) cell_dialer2_keypad_pane

0x0f56,	// (0x000899a4) bg_button_pane_pane_cp04_ParamLimits

0x0f56,	// (0x000899a4) bg_button_pane_pane_cp04

0x78a3,	// (0x000902f1) cell_dialer2_keypad_pane_g1_ParamLimits

0x78a3,	// (0x000902f1) cell_dialer2_keypad_pane_g1

0x32e7,	// (0x0008bd35) aid_placing_vt_set_content_ParamLimits

0x32e7,	// (0x0008bd35) aid_placing_vt_set_content

0x3309,	// (0x0008bd57) aid_placing_vt_set_title_ParamLimits

0x3309,	// (0x0008bd57) aid_placing_vt_set_title

0x022c,	// (0x00088c7a) main_image3_pane

0x7969,	// (0x000903b7) area_side_right_pane_cp01_ParamLimits

0x7969,	// (0x000903b7) area_side_right_pane_cp01

0xed13,	// (0x00097761) main_image3_pane_g1_ParamLimits

0xed13,	// (0x00097761) main_image3_pane_g1

0x7980,	// (0x000903ce) main_image3_pane_g2_ParamLimits

0x7980,	// (0x000903ce) main_image3_pane_g2

0x79a8,	// (0x000903f6) main_image3_pane_g3_ParamLimits

0x79a8,	// (0x000903f6) main_image3_pane_g3

0x79d2,	// (0x00090420) main_image3_pane_g4_ParamLimits

0x79d2,	// (0x00090420) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0009833b) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0009833b) main_image3_pane_g

0x79fc,	// (0x0009044a) main_image3_pane_t1_ParamLimits

0x79fc,	// (0x0009044a) main_image3_pane_t1

0x7a54,	// (0x000904a2) main_image3_pane_t2_ParamLimits

0x7a54,	// (0x000904a2) main_image3_pane_t2

0x7aa6,	// (0x000904f4) main_image3_pane_t3_ParamLimits

0x7aa6,	// (0x000904f4) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00098344) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00098344) main_image3_pane_t

0x2659,	// (0x0008b0a7) grid_sctrl_middle_pane_cp01_ParamLimits

0x2659,	// (0x0008b0a7) grid_sctrl_middle_pane_cp01

0x7b2e,	// (0x0009057c) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b2e,	// (0x0009057c) cell_sctrl_middle_pane_cp01

0x7b4b,	// (0x00090599) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b4b,	// (0x00090599) cell_sctrl_middle_pane_cp01_g1

0x022c,	// (0x00088c7a) main_call4_pane

0x7b61,	// (0x000905af) aid_size_button_call4_ParamLimits

0x7b61,	// (0x000905af) aid_size_button_call4

0x7b92,	// (0x000905e0) call4_windows_pane_ParamLimits

0x7b92,	// (0x000905e0) call4_windows_pane

0x7bb2,	// (0x00090600) grid_call4_button_pane_ParamLimits

0x7bb2,	// (0x00090600) grid_call4_button_pane

0x0f62,	// (0x000899b0) call4_windows_conf_pane

0x0f77,	// (0x000899c5) popup_call4_audio_first_window_ParamLimits

0x0f77,	// (0x000899c5) popup_call4_audio_first_window

0x0fc3,	// (0x00089a11) popup_call4_audio_second_window_ParamLimits

0x0fc3,	// (0x00089a11) popup_call4_audio_second_window

0x0fd7,	// (0x00089a25) popup_call4_audio_wait_window_ParamLimits

0x0fd7,	// (0x00089a25) popup_call4_audio_wait_window

0x7bdf,	// (0x0009062d) cell_call4_button_pane_ParamLimits

0x7bdf,	// (0x0009062d) cell_call4_button_pane

0x7c08,	// (0x00090656) bg_button_pane_cp09_ParamLimits

0x7c08,	// (0x00090656) bg_button_pane_cp09

0x7c14,	// (0x00090662) cell_call4_button_pane_g1_ParamLimits

0x7c14,	// (0x00090662) cell_call4_button_pane_g1

0x7c3a,	// (0x00090688) cell_call4_button_pane_t1_ParamLimits

0x7c3a,	// (0x00090688) cell_call4_button_pane_t1

0x101f,	// (0x00089a6d) popup_call4_audio_conf_window_ParamLimits

0x101f,	// (0x00089a6d) popup_call4_audio_conf_window

0x6ea3,	// (0x0008f8f1) mup3_progress_pane_t1_ParamLimits

0x6eba,	// (0x0008f908) mup3_progress_pane_t2_ParamLimits

0xcd7c,	// (0x000957ca) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0009821d) mup3_progress_pane_t_ParamLimits

0xcd93,	// (0x000957e1) mup_progress_pane_cp03_ParamLimits

0x7479,	// (0x0008fec7) mup3_control_keys_pane_g4_copy1

0xeeb9,	// (0x00097907) mp4_rocker2_pane_ParamLimits

0xeeb9,	// (0x00097907) mp4_rocker2_pane

0x1033,	// (0x00089a81) mp4_rocker2_pane_g1

0x103b,	// (0x00089a89) mp4_rocker2_pane_g2

0xef27,	// (0x00097975) mp4_rocker2_pane_g3

0xef2f,	// (0x0009797d) mp4_rocker2_pane_g4

0xef37,	// (0x00097985) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0009834d) mp4_rocker2_pane_g

0x022c,	// (0x00088c7a) main_camera4_pane

0x022c,	// (0x00088c7a) main_video4_pane

0x76f5,	// (0x00090143) main_video_tele_dialer_pane_t1_ParamLimits

0x76f5,	// (0x00090143) main_video_tele_dialer_pane_t1

0x770d,	// (0x0009015b) main_video_tele_dialer_pane_t2_ParamLimits

0x770d,	// (0x0009015b) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00098307) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00098307) main_video_tele_dialer_pane_t

0x7c7c,	// (0x000906ca) cam4_autofocus_pane_ParamLimits

0x7c7c,	// (0x000906ca) cam4_autofocus_pane

0x7c92,	// (0x000906e0) cam4_image_uncrop_pane_ParamLimits

0x7c92,	// (0x000906e0) cam4_image_uncrop_pane

0x7cac,	// (0x000906fa) cam4_indicators_pane_ParamLimits

0x7cac,	// (0x000906fa) cam4_indicators_pane

0x7cd7,	// (0x00090725) main_camera4_pane_g1_ParamLimits

0x7cd7,	// (0x00090725) main_camera4_pane_g1

0x7cea,	// (0x00090738) main_camera4_pane_g2_ParamLimits

0x7cea,	// (0x00090738) main_camera4_pane_g2

0x7cfd,	// (0x0009074b) main_camera4_pane_g3_ParamLimits

0x7cfd,	// (0x0009074b) main_camera4_pane_g3

0x7d10,	// (0x0009075e) main_camera4_pane_g4_ParamLimits

0x7d10,	// (0x0009075e) main_camera4_pane_g4

0x7d23,	// (0x00090771) main_camera4_pane_g5_ParamLimits

0x7d23,	// (0x00090771) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00098358) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00098358) main_camera4_pane_g

0x7d47,	// (0x00090795) main_camera4_pane_t1_ParamLimits

0x7d47,	// (0x00090795) main_camera4_pane_t1

0xef4f,	// (0x0009799d) bg_tb_trans_pane_cp06

0xef65,	// (0x000979b3) cam4_indicators_pane_g1

0xef76,	// (0x000979c4) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00098373) cam4_indicators_pane_g

0xef94,	// (0x000979e2) cam4_indicators_pane_t1

0x7dbd,	// (0x0009080b) main_video4_pane_g1_ParamLimits

0x7dbd,	// (0x0009080b) main_video4_pane_g1

0x7dd0,	// (0x0009081e) main_video4_pane_g2_ParamLimits

0x7dd0,	// (0x0009081e) main_video4_pane_g2

0x7de4,	// (0x00090832) main_video4_pane_g3_ParamLimits

0x7de4,	// (0x00090832) main_video4_pane_g3

0x7df8,	// (0x00090846) main_video4_pane_g4_ParamLimits

0x7df8,	// (0x00090846) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0009837a) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0009837a) main_video4_pane_g

0x7e20,	// (0x0009086e) vid4_indicators_pane_ParamLimits

0x7e20,	// (0x0009086e) vid4_indicators_pane

0x7e52,	// (0x000908a0) video4_image_uncrop_cif_pane_ParamLimits

0x7e52,	// (0x000908a0) video4_image_uncrop_cif_pane

0x7e6c,	// (0x000908ba) video4_image_uncrop_nhd_pane_ParamLimits

0x7e6c,	// (0x000908ba) video4_image_uncrop_nhd_pane

0x7c92,	// (0x000906e0) video4_image_uncrop_vga_pane_ParamLimits

0x7c92,	// (0x000906e0) video4_image_uncrop_vga_pane

0xefb6,	// (0x00097a04) bg_tb_trans_pane_cp07

0x7e80,	// (0x000908ce) vid4_indicators_pane_g1

0x7e8d,	// (0x000908db) vid4_indicators_pane_g2

0x7e9a,	// (0x000908e8) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00098385) vid4_indicators_pane_g

0x7ebf,	// (0x0009090d) vid4_indicators_pane_t1

0x7ed1,	// (0x0009091f) cam4_autofocus_pane_g1

0x7ed9,	// (0x00090927) cam4_autofocus_pane_g2

0x7ee1,	// (0x0009092f) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00098390) cam4_autofocus_pane_g

0x7ee9,	// (0x00090937) cam4_autofocus_pane_g3_copy1

0x773d,	// (0x0009018b) video_down_pane_cp_t1

0x774b,	// (0x00090199) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0009830c) video_down_pane_cp_t

0x2659,	// (0x0008b0a7) popup_vitu2_window_ParamLimits

0x2659,	// (0x0008b0a7) popup_vitu2_window

0x7ef1,	// (0x0009093f) aid_size_cell2_itu2_ParamLimits

0x7ef1,	// (0x0009093f) aid_size_cell2_itu2

0x7f17,	// (0x00090965) aid_size_cell_itu2_ParamLimits

0x7f17,	// (0x00090965) aid_size_cell_itu2

0x7f73,	// (0x000909c1) bg_popup_window_pane_cp09_ParamLimits

0x7f73,	// (0x000909c1) bg_popup_window_pane_cp09

0x7f81,	// (0x000909cf) field_vitu2_entry_pane_ParamLimits

0x7f81,	// (0x000909cf) field_vitu2_entry_pane

0x7fa7,	// (0x000909f5) grid_vitu2_function_pane_ParamLimits

0x7fa7,	// (0x000909f5) grid_vitu2_function_pane

0x7ff8,	// (0x00090a46) grid_vitu2_itu_pane_ParamLimits

0x7ff8,	// (0x00090a46) grid_vitu2_itu_pane

0x8089,	// (0x00090ad7) cell_vitu2_itu_pane_ParamLimits

0x8089,	// (0x00090ad7) cell_vitu2_itu_pane

0x80ad,	// (0x00090afb) cell_vitu2_function_pane_ParamLimits

0x80ad,	// (0x00090afb) cell_vitu2_function_pane

0x1043,	// (0x00089a91) bg_popup_call_pane_cp08_ParamLimits

0x1043,	// (0x00089a91) bg_popup_call_pane_cp08

0x105c,	// (0x00089aaa) field_vitu2_entry_pane_g1

0x1068,	// (0x00089ab6) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00098397) field_vitu2_entry_pane_g

0x80ec,	// (0x00090b3a) field_vitu2_entry_pane_t1_ParamLimits

0x80ec,	// (0x00090b3a) field_vitu2_entry_pane_t1

0xce7f,	// (0x000958cd) field_vitu2_entry_pane_t2_ParamLimits

0xce7f,	// (0x000958cd) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0009839e) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0009839e) field_vitu2_entry_pane_t

0x811d,	// (0x00090b6b) bg_button_pane_cp010_ParamLimits

0x811d,	// (0x00090b6b) bg_button_pane_cp010

0x812b,	// (0x00090b79) cell_vitu2_itu_pane_g1

0x8149,	// (0x00090b97) cell_vitu2_itu_pane_t1_ParamLimits

0x8149,	// (0x00090b97) cell_vitu2_itu_pane_t1

0x2341,	// (0x0008ad8f) cell_vitu2_itu_pane_t2_ParamLimits

0x2341,	// (0x0008ad8f) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x000983a8) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x000983a8) cell_vitu2_itu_pane_t

0xefcc,	// (0x00097a1a) bg_button_pane_cp011

0x81af,	// (0x00090bfd) cell_vitu2_function_pane_g1

0x022c,	// (0x00088c7a) main_myfav_hc_pane

0x7af6,	// (0x00090544) popup_image3_note_pane_ParamLimits

0x7af6,	// (0x00090544) popup_image3_note_pane

0x7b12,	// (0x00090560) popup_image3_tool_bar_pane_ParamLimits

0x7b12,	// (0x00090560) popup_image3_tool_bar_pane

0x23c5,	// (0x0008ae13) cell_vitu2_itu_pane_t3_ParamLimits

0x23c5,	// (0x0008ae13) cell_vitu2_itu_pane_t3

0x022c,	// (0x00088c7a) bg_popup_trans_pane

0x108a,	// (0x00089ad8) grid_image3_tool_bar_pane

0x1094,	// (0x00089ae2) bg_popup_trans_pane_g1

0x0e1f,	// (0x0008986d) bg_popup_trans_pane_g2

0x109c,	// (0x00089aea) bg_popup_trans_pane_g3

0x10a4,	// (0x00089af2) bg_popup_trans_pane_g4

0x10ac,	// (0x00089afa) bg_popup_trans_pane_g5

0x10b4,	// (0x00089b02) bg_popup_trans_pane_g6

0x10bc,	// (0x00089b0a) bg_popup_trans_pane_g7

0x10c4,	// (0x00089b12) bg_popup_trans_pane_g8

0x0dff,	// (0x0008984d) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x000983af) bg_popup_trans_pane_g

0x10cc,	// (0x00089b1a) cell_image3_tool_bar_pane_ParamLimits

0x10cc,	// (0x00089b1a) cell_image3_tool_bar_pane

0xca62,	// (0x000954b0) cell_image3_tool_bar_pane_g1

0x022c,	// (0x00088c7a) bg_popup_trans_pane_cp1

0x10e0,	// (0x00089b2e) popup_image3_note_pane_t1

0x10ee,	// (0x00089b3c) popup_image3_note_pane_t2

0x10fc,	// (0x00089b4a) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x000983c2) popup_image3_note_pane_t

0x110a,	// (0x00089b58) popup_image3_note_pane_t3_copy1

0x81c3,	// (0x00090c11) bg_myfav_hc_instruction_pane_ParamLimits

0x81c3,	// (0x00090c11) bg_myfav_hc_instruction_pane

0x81d9,	// (0x00090c27) cell_myfav_contact_pane_ParamLimits

0x81d9,	// (0x00090c27) cell_myfav_contact_pane

0x81f5,	// (0x00090c43) cell_myfav_contact_pane_cp1_ParamLimits

0x81f5,	// (0x00090c43) cell_myfav_contact_pane_cp1

0x820d,	// (0x00090c5b) cell_myfav_contact_pane_cp2_ParamLimits

0x820d,	// (0x00090c5b) cell_myfav_contact_pane_cp2

0x8225,	// (0x00090c73) cell_myfav_contact_pane_cp3_ParamLimits

0x8225,	// (0x00090c73) cell_myfav_contact_pane_cp3

0x823c,	// (0x00090c8a) cell_myfav_contact_pane_cp4_ParamLimits

0x823c,	// (0x00090c8a) cell_myfav_contact_pane_cp4

0x8254,	// (0x00090ca2) cell_myfav_contact_pane_cp5_ParamLimits

0x8254,	// (0x00090ca2) cell_myfav_contact_pane_cp5

0x8268,	// (0x00090cb6) cell_myfav_contact_pane_cp6_ParamLimits

0x8268,	// (0x00090cb6) cell_myfav_contact_pane_cp6

0x827e,	// (0x00090ccc) cell_myfav_contact_pane_cp7_ParamLimits

0x827e,	// (0x00090ccc) cell_myfav_contact_pane_cp7

0x1118,	// (0x00089b66) listscroll_gen_pane_cp05

0x8298,	// (0x00090ce6) main_myfav_hc_pane_g1_ParamLimits

0x8298,	// (0x00090ce6) main_myfav_hc_pane_g1

0x82b2,	// (0x00090d00) main_myfav_hc_pane_g2_ParamLimits

0x82b2,	// (0x00090d00) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x000983c9) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x000983c9) main_myfav_hc_pane_g

0x82e4,	// (0x00090d32) main_myfav_hc_pane_t1_ParamLimits

0x82e4,	// (0x00090d32) main_myfav_hc_pane_t1

0x1121,	// (0x00089b6f) main_myfav_hc_pane_t2_ParamLimits

0x1121,	// (0x00089b6f) main_myfav_hc_pane_t2

0x1133,	// (0x00089b81) main_myfav_hc_pane_t3_ParamLimits

0x1133,	// (0x00089b81) main_myfav_hc_pane_t3

0x82fb,	// (0x00090d49) main_myfav_hc_pane_t4_ParamLimits

0x82fb,	// (0x00090d49) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000983d0) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000983d0) main_myfav_hc_pane_t

0xca62,	// (0x000954b0) bg_myfav_hc_instruction_pane_g1

0x1145,	// (0x00089b93) cell_myfav_contact_pane_g1_ParamLimits

0x1145,	// (0x00089b93) cell_myfav_contact_pane_g1

0x1145,	// (0x00089b93) cell_myfav_contact_pane_g2_ParamLimits

0x1145,	// (0x00089b93) cell_myfav_contact_pane_g2

0x1151,	// (0x00089b9f) cell_myfav_contact_pane_g3_ParamLimits

0x1151,	// (0x00089b9f) cell_myfav_contact_pane_g3

0xcd66,	// (0x000957b4) cell_myfav_contact_pane_g4_ParamLimits

0xcd66,	// (0x000957b4) cell_myfav_contact_pane_g4

0x115e,	// (0x00089bac) cell_myfav_contact_pane_g5_ParamLimits

0x115e,	// (0x00089bac) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000983db) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000983db) cell_myfav_contact_pane_g

0x82cc,	// (0x00090d1a) main_myfav_hc_pane_g3_ParamLimits

0x82cc,	// (0x00090d1a) main_myfav_hc_pane_g3

0x259c,	// (0x0008afea) popup_adpt_find_window

0x8323,	// (0x00090d71) afind_page_pane_ParamLimits

0x8323,	// (0x00090d71) afind_page_pane

0x8338,	// (0x00090d86) aid_size_cell_afind_ParamLimits

0x8338,	// (0x00090d86) aid_size_cell_afind

0x8356,	// (0x00090da4) bg_popup_sub_pane_cp09_ParamLimits

0x8356,	// (0x00090da4) bg_popup_sub_pane_cp09

0x8363,	// (0x00090db1) find_pane_cp01_ParamLimits

0x8363,	// (0x00090db1) find_pane_cp01

0x116a,	// (0x00089bb8) grid_afind_control_pane_ParamLimits

0x116a,	// (0x00089bb8) grid_afind_control_pane

0x8370,	// (0x00090dbe) grid_afind_pane_ParamLimits

0x8370,	// (0x00090dbe) grid_afind_pane

0x8392,	// (0x00090de0) cell_afind_pane_ParamLimits

0x8392,	// (0x00090de0) cell_afind_pane

0xca62,	// (0x000954b0) afind_page_pane_g1

0x83f3,	// (0x00090e41) afind_page_pane_g2

0x83fc,	// (0x00090e4a) afind_page_pane_g3

0x0002,

0xf998,	// (0x000983e6) afind_page_pane_g

0x8405,	// (0x00090e53) afind_page_pane_t1

0x117e,	// (0x00089bcc) cell_afind_grid_control_pane_ParamLimits

0x117e,	// (0x00089bcc) cell_afind_grid_control_pane

0x0f56,	// (0x000899a4) bg_button_pane_cp69_ParamLimits

0x0f56,	// (0x000899a4) bg_button_pane_cp69

0x8425,	// (0x00090e73) cell_afind_pane_g1_ParamLimits

0x8425,	// (0x00090e73) cell_afind_pane_g1

0x8432,	// (0x00090e80) cell_afind_pane_t1_ParamLimits

0x8432,	// (0x00090e80) cell_afind_pane_t1

0x0c12,	// (0x00089660) bg_button_pane_cp72

0x118d,	// (0x00089bdb) cell_afind_grid_control_pane_g1

0x5453,	// (0x0008dea1) aid_image_placing_area_ParamLimits

0x5453,	// (0x0008dea1) aid_image_placing_area

0xea4d,	// (0x0009749b) field_vitu_entry_pane_g1_ParamLimits

0xea4d,	// (0x0009749b) field_vitu_entry_pane_g1

0xea59,	// (0x000974a7) field_vitu_entry_pane_g2_ParamLimits

0xea59,	// (0x000974a7) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00098297) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00098297) field_vitu_entry_pane_g

0x7546,	// (0x0008ff94) cell_vitu_itu_pane_g1_ParamLimits

0x7588,	// (0x0008ffd6) cell_vitu_itu_pane_t3_ParamLimits

0x7588,	// (0x0008ffd6) cell_vitu_itu_pane_t3

0x0efc,	// (0x0008994a) mp4_progress_pane_t1_ParamLimits

0x0f15,	// (0x00089963) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0009832c) mp4_progress_pane_t_ParamLimits

0x0f2e,	// (0x0008997c) mup_progress_pane_cp04_ParamLimits

0x830f,	// (0x00090d5d) main_myfav_hc_pane_t5_ParamLimits

0x830f,	// (0x00090d5d) main_myfav_hc_pane_t5

0x246d,	// (0x0008aebb) aid_zoom_text_primary

0x259c,	// (0x0008afea) popup_adpt_find_window_ParamLimits

0x2659,	// (0x0008b0a7) main_cam_set_pane

0x7cc3,	// (0x00090711) cam4_zoom_pane_ParamLimits

0x7cc3,	// (0x00090711) cam4_zoom_pane

0x8444,	// (0x00090e92) main_cam_set_pane_g1_ParamLimits

0x8444,	// (0x00090e92) main_cam_set_pane_g1

0x8452,	// (0x00090ea0) main_cam_set_pane_g2_ParamLimits

0x8452,	// (0x00090ea0) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000983ed) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000983ed) main_cam_set_pane_g

0x8473,	// (0x00090ec1) main_cam_set_pane_t1_ParamLimits

0x8473,	// (0x00090ec1) main_cam_set_pane_t1

0x848e,	// (0x00090edc) main_cset_listscroll_pane_ParamLimits

0x848e,	// (0x00090edc) main_cset_listscroll_pane

0x84ae,	// (0x00090efc) main_cset_slider_pane_ParamLimits

0x84ae,	// (0x00090efc) main_cset_slider_pane

0x119e,	// (0x00089bec) main_cset_list_pane_ParamLimits

0x119e,	// (0x00089bec) main_cset_list_pane

0x11ae,	// (0x00089bfc) scroll_pane_cp028

0x84d4,	// (0x00090f22) aid_area_touch_slider

0x84f0,	// (0x00090f3e) cset_slider_pane

0x851a,	// (0x00090f68) main_cset_slider_pane_g1

0x852f,	// (0x00090f7d) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000983f2) main_cset_slider_pane_g

0x11e7,	// (0x00089c35) main_cset_slider_pane_t1

0x85eb,	// (0x00091039) main_cset_slider_pane_t2

0x8605,	// (0x00091053) main_cset_slider_pane_t3

0x861f,	// (0x0009106d) main_cset_slider_pane_t4

0x8639,	// (0x00091087) main_cset_slider_pane_t5

0x8655,	// (0x000910a3) main_cset_slider_pane_t6

0x866a,	// (0x000910b8) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00098417) main_cset_slider_pane_t

0x876e,	// (0x000911bc) cset_list_set_pane_ParamLimits

0x876e,	// (0x000911bc) cset_list_set_pane

0x8782,	// (0x000911d0) aid_position_infowindow_above

0x878a,	// (0x000911d8) aid_position_infowindow_below

0x8792,	// (0x000911e0) cset_list_set_pane_g1_ParamLimits

0x8792,	// (0x000911e0) cset_list_set_pane_g1

0x879e,	// (0x000911ec) cset_list_set_pane_g3_ParamLimits

0x879e,	// (0x000911ec) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00098436) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00098436) cset_list_set_pane_g

0x87ad,	// (0x000911fb) cset_list_set_pane_t1_ParamLimits

0x87ad,	// (0x000911fb) cset_list_set_pane_t1

0x2659,	// (0x0008b0a7) list_highlight_pane_cp021_ParamLimits

0x2659,	// (0x0008b0a7) list_highlight_pane_cp021

0xb24f,	// (0x00093c9d) cset_slider_pane_g1

0xb261,	// (0x00093caf) cset_slider_pane_g2

0xb258,	// (0x00093ca6) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0009843b) cset_slider_pane_g

0xefda,	// (0x00097a28) aid_area_touch_cam4_zoom

0xefe2,	// (0x00097a30) cam4_zoom_cont_pane

0xefea,	// (0x00097a38) cam4_zoom_pane_g1

0xeff2,	// (0x00097a40) cam4_zoom_pane_g2

0x87c2,	// (0x00091210) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00098442) cam4_zoom_pane_g

0xeffa,	// (0x00097a48) cam4_zoom_cont_pane_g1

0xf003,	// (0x00097a51) cam4_zoom_cont_pane_g2

0xf00c,	// (0x00097a5a) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00098449) cam4_zoom_cont_pane_g

0x7b7f,	// (0x000905cd) call4_image_pane_ParamLimits

0x7b7f,	// (0x000905cd) call4_image_pane

0x0f62,	// (0x000899b0) call4_windows_conf_pane_ParamLimits

0x0fa1,	// (0x000899ef) popup_call4_audio_in_window_ParamLimits

0x0fa1,	// (0x000899ef) popup_call4_audio_in_window

0x022c,	// (0x00088c7a) bg_popup_call2_act_pane_cp02

0x1017,	// (0x00089a65) call4_list_conf_pane

0xca62,	// (0x000954b0) call4_image_pane_g1

0xca62,	// (0x000954b0) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0009815d) call4_image_pane_g

0x1287,	// (0x00089cd5) list_single_graphic_popup_conf4_pane_ParamLimits

0x1287,	// (0x00089cd5) list_single_graphic_popup_conf4_pane

0x022c,	// (0x00088c7a) list_highlight_pane_cp022

0x129a,	// (0x00089ce8) list_single_graphic_popup_conf4_pane_g1

0x4539,	// (0x0008cf87) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00098450) list_single_graphic_popup_conf4_pane_g

0x12a2,	// (0x00089cf0) list_single_graphic_popup_conf4_pane_t1

0x33db,	// (0x0008be29) popup_vtel_slider_window_ParamLimits

0x33db,	// (0x0008be29) popup_vtel_slider_window

0x0f44,	// (0x00089992) dialer2_ne_pane_t2_ParamLimits

0x0f44,	// (0x00089992) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00098331) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00098331) dialer2_ne_pane_t

0xc845,	// (0x00095293) bg_popup_sub_pane_cp010_ParamLimits

0xc845,	// (0x00095293) bg_popup_sub_pane_cp010

0x87ca,	// (0x00091218) popup_vtel_slider_window_g1_ParamLimits

0x87ca,	// (0x00091218) popup_vtel_slider_window_g1

0x87dd,	// (0x0009122b) popup_vtel_slider_window_g2_ParamLimits

0x87dd,	// (0x0009122b) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00098455) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00098455) popup_vtel_slider_window_g

0x8833,	// (0x00091281) vtel_slider_pane_ParamLimits

0x8833,	// (0x00091281) vtel_slider_pane

0x8855,	// (0x000912a3) vtel_slider_pane_g1_ParamLimits

0x8855,	// (0x000912a3) vtel_slider_pane_g1

0x8869,	// (0x000912b7) vtel_slider_pane_g2_ParamLimits

0x8869,	// (0x000912b7) vtel_slider_pane_g2

0x8881,	// (0x000912cf) vtel_slider_pane_g3_ParamLimits

0x8881,	// (0x000912cf) vtel_slider_pane_g3

0x8855,	// (0x000912a3) vtel_slider_pane_g4_ParamLimits

0x8855,	// (0x000912a3) vtel_slider_pane_g4

0x8897,	// (0x000912e5) vtel_slider_pane_g5_ParamLimits

0x8897,	// (0x000912e5) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0009845e) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0009845e) vtel_slider_pane_g

0x022c,	// (0x00088c7a) main_gallery2_pane

0x7f43,	// (0x00090991) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f43,	// (0x00090991) aid_size_row_itut2_dropdow_list

0x7fcf,	// (0x00090a1d) grid_vitu2_function_top_pane_ParamLimits

0x7fcf,	// (0x00090a1d) grid_vitu2_function_top_pane

0x8034,	// (0x00090a82) popup_vitu2_dropdown_list_window_ParamLimits

0x8034,	// (0x00090a82) popup_vitu2_dropdown_list_window

0x805d,	// (0x00090aab) popup_vitu2_match_list_window

0x88ad,	// (0x000912fb) cell_vitu2_function_top_pane_ParamLimits

0x88ad,	// (0x000912fb) cell_vitu2_function_top_pane

0x88cb,	// (0x00091319) cell_vitu2_function_top_pane_cp01_ParamLimits

0x88cb,	// (0x00091319) cell_vitu2_function_top_pane_cp01

0x88e9,	// (0x00091337) cell_vitu2_function_top_wide_pane_ParamLimits

0x88e9,	// (0x00091337) cell_vitu2_function_top_wide_pane

0xefcc,	// (0x00097a1a) bg_button_pane_cp012

0x8907,	// (0x00091355) cell_vitu2_function_top_pane_g1

0xf015,	// (0x00097a63) bg_button_pane_cp013_ParamLimits

0xf015,	// (0x00097a63) bg_button_pane_cp013

0x891b,	// (0x00091369) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x891b,	// (0x00091369) cell_vitu2_function_top_wide_pane_g1

0xefcc,	// (0x00097a1a) bg_popup_sub_pane_cp20

0x8933,	// (0x00091381) list_vitu2_match_list_pane

0x1094,	// (0x00089ae2) bg_popup_sub_pane_cp20_g1

0x109c,	// (0x00089aea) bg_popup_sub_pane_cp20_g2

0x0e1f,	// (0x0008986d) bg_popup_sub_pane_cp20_g3

0x10a4,	// (0x00089af2) bg_popup_sub_pane_cp20_g4

0x0dff,	// (0x0008984d) bg_popup_sub_pane_cp20_g5

0x12b0,	// (0x00089cfe) bg_popup_sub_pane_cp20_g6

0x10b4,	// (0x00089b02) bg_popup_sub_pane_cp20_g7

0x10bc,	// (0x00089b0a) bg_popup_sub_pane_cp20_g8

0x10c4,	// (0x00089b12) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00098469) bg_popup_sub_pane_cp20_g

0xf031,	// (0x00097a7f) list_vitu2_match_list_item_pane_ParamLimits

0xf031,	// (0x00097a7f) list_vitu2_match_list_item_pane

0xf043,	// (0x00097a91) list_vitu2_match_list_item_pane_t1

0xb007,	// (0x00093a55) bg_popup_sub_pane_cp21

0xf051,	// (0x00097a9f) grid_vitu2_dropdown_list_pane

0x8982,	// (0x000913d0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8982,	// (0x000913d0) cell_vitu2_dropdown_list_char_pane

0x89a3,	// (0x000913f1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x89a3,	// (0x000913f1) cell_vitu2_dropdown_list_ctrl_pane

0x12b8,	// (0x00089d06) cell_vitu2_dropdown_list_char_pane_g1

0x12c1,	// (0x00089d0f) cell_vitu2_dropdown_list_char_pane_g2

0x12ca,	// (0x00089d18) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00098486) cell_vitu2_dropdown_list_char_pane_g

0x89cf,	// (0x0009141d) cell_vitu2_dropdown_list_char_pane_t1

0x89dd,	// (0x0009142b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x89dd,	// (0x0009142b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x89ed,	// (0x0009143b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x89ed,	// (0x0009143b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x89fe,	// (0x0009144c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x89fe,	// (0x0009144c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8a0e,	// (0x0009145c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8a0e,	// (0x0009145c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef4f,	// (0x0009799d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef4f,	// (0x0009799d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0009848d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0009848d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a2a,	// (0x00091478) aid_size_cell_gallery2_ParamLimits

0x8a2a,	// (0x00091478) aid_size_cell_gallery2

0x8a40,	// (0x0009148e) grid_gallery2_pane_ParamLimits

0x8a40,	// (0x0009148e) grid_gallery2_pane

0x8a54,	// (0x000914a2) scroll_pane_cp029_ParamLimits

0x8a54,	// (0x000914a2) scroll_pane_cp029

0x8a60,	// (0x000914ae) cell_gallery2_pane_ParamLimits

0x8a60,	// (0x000914ae) cell_gallery2_pane

0x12d3,	// (0x00089d21) cell_gallery2_pane_g2

0x8a96,	// (0x000914e4) cell_gallery2_pane_g3

0x12dd,	// (0x00089d2b) cell_gallery2_pane_g4

0x12e5,	// (0x00089d33) cell_gallery2_pane_g5

0x4a6d,	// (0x0008d4bb) grid_highlight_pane_cp10

0x805d,	// (0x00090aab) popup_vitu2_match_list_window_ParamLimits

0x8072,	// (0x00090ac0) popup_vitu2_query_window_ParamLimits

0x8072,	// (0x00090ac0) popup_vitu2_query_window

0xb007,	// (0x00093a55) bg_vitu2_candi_button_pane

0x12b8,	// (0x00089d06) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x12c1,	// (0x00089d0f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x12ca,	// (0x00089d18) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8a9e,	// (0x000914ec) bg_button_pane_cp015

0x8aa8,	// (0x000914f6) bg_button_pane_cp016

0x8ab2,	// (0x00091500) bg_button_pane_cp017

0x2659,	// (0x0008b0a7) bg_popup_sub_pane_cp22

0x12ed,	// (0x00089d3b) popup_vitu2_query_window_g1

0x8ada,	// (0x00091528) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00098498) popup_vitu2_query_window_g

0x8ae8,	// (0x00091536) popup_vitu2_query_window_t1_ParamLimits

0x8ae8,	// (0x00091536) popup_vitu2_query_window_t1

0x8b10,	// (0x0009155e) popup_vitu2_query_window_t2_ParamLimits

0x8b10,	// (0x0009155e) popup_vitu2_query_window_t2

0x8b22,	// (0x00091570) popup_vitu2_query_window_t3_ParamLimits

0x8b22,	// (0x00091570) popup_vitu2_query_window_t3

0x8b4a,	// (0x00091598) popup_vitu2_query_window_t4_ParamLimits

0x8b4a,	// (0x00091598) popup_vitu2_query_window_t4

0x8b5e,	// (0x000915ac) popup_vitu2_query_window_t5_ParamLimits

0x8b5e,	// (0x000915ac) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0009849d) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0009849d) popup_vitu2_query_window_t

0x1196,	// (0x00089be4) main_cset_text_pane

0x84d4,	// (0x00090f22) aid_area_touch_slider_ParamLimits

0x84f0,	// (0x00090f3e) cset_slider_pane_ParamLimits

0x851a,	// (0x00090f68) main_cset_slider_pane_g1_ParamLimits

0x852f,	// (0x00090f7d) main_cset_slider_pane_g2_ParamLimits

0x11b7,	// (0x00089c05) main_cset_slider_pane_g3_ParamLimits

0x11b7,	// (0x00089c05) main_cset_slider_pane_g3

0x8544,	// (0x00090f92) main_cset_slider_pane_g4_ParamLimits

0x8544,	// (0x00090f92) main_cset_slider_pane_g4

0x8553,	// (0x00090fa1) main_cset_slider_pane_g5_ParamLimits

0x8553,	// (0x00090fa1) main_cset_slider_pane_g5

0x855f,	// (0x00090fad) main_cset_slider_pane_g6_ParamLimits

0x855f,	// (0x00090fad) main_cset_slider_pane_g6

0xf9a4,	// (0x000983f2) main_cset_slider_pane_g_ParamLimits

0x11e7,	// (0x00089c35) main_cset_slider_pane_t1_ParamLimits

0x85eb,	// (0x00091039) main_cset_slider_pane_t2_ParamLimits

0x8605,	// (0x00091053) main_cset_slider_pane_t3_ParamLimits

0x861f,	// (0x0009106d) main_cset_slider_pane_t4_ParamLimits

0x8639,	// (0x00091087) main_cset_slider_pane_t5_ParamLimits

0x8655,	// (0x000910a3) main_cset_slider_pane_t6_ParamLimits

0x866a,	// (0x000910b8) main_cset_slider_pane_t7_ParamLimits

0x8694,	// (0x000910e2) main_cset_slider_pane_t8_ParamLimits

0x8694,	// (0x000910e2) main_cset_slider_pane_t8

0x86bc,	// (0x0009110a) main_cset_slider_pane_t9_ParamLimits

0x86bc,	// (0x0009110a) main_cset_slider_pane_t9

0x86e4,	// (0x00091132) main_cset_slider_pane_t10_ParamLimits

0x86e4,	// (0x00091132) main_cset_slider_pane_t10

0x870c,	// (0x0009115a) main_cset_slider_pane_t11_ParamLimits

0x870c,	// (0x0009115a) main_cset_slider_pane_t11

0x8734,	// (0x00091182) main_cset_slider_pane_t12_ParamLimits

0x8734,	// (0x00091182) main_cset_slider_pane_t12

0x8751,	// (0x0009119f) main_cset_slider_pane_t13_ParamLimits

0x8751,	// (0x0009119f) main_cset_slider_pane_t13

0xf9c9,	// (0x00098417) main_cset_slider_pane_t_ParamLimits

0x022c,	// (0x00088c7a) bg_popup_sub_pane_cp011

0x12f9,	// (0x00089d47) main_cset_text_pane_g1

0x1301,	// (0x00089d4f) main_cset_text_pane_t1

0x130f,	// (0x00089d5d) main_cset_text_pane_t2

0x131d,	// (0x00089d6b) main_cset_text_pane_t3

0x132b,	// (0x00089d79) main_cset_text_pane_t4

0x1339,	// (0x00089d87) main_cset_text_pane_t5

0x1347,	// (0x00089d95) main_cset_text_pane_t6

0x1355,	// (0x00089da3) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x000984a8) main_cset_text_pane_t

0x022c,	// (0x00088c7a) main_cam4_burst_pane

0x022c,	// (0x00088c7a) main_cam5_pane

0x8413,	// (0x00090e61) bg_button_pane_cp019

0x841c,	// (0x00090e6a) bg_button_pane_cp020

0x11c3,	// (0x00089c11) main_cset_slider_pane_g7_ParamLimits

0x11c3,	// (0x00089c11) main_cset_slider_pane_g7

0x11cf,	// (0x00089c1d) main_cset_slider_pane_g8_ParamLimits

0x11cf,	// (0x00089c1d) main_cset_slider_pane_g8

0x8573,	// (0x00090fc1) main_cset_slider_pane_g9_ParamLimits

0x8573,	// (0x00090fc1) main_cset_slider_pane_g9

0x857f,	// (0x00090fcd) main_cset_slider_pane_g10_ParamLimits

0x857f,	// (0x00090fcd) main_cset_slider_pane_g10

0x858b,	// (0x00090fd9) main_cset_slider_pane_g11_ParamLimits

0x858b,	// (0x00090fd9) main_cset_slider_pane_g11

0x8597,	// (0x00090fe5) main_cset_slider_pane_g12_ParamLimits

0x8597,	// (0x00090fe5) main_cset_slider_pane_g12

0x85a3,	// (0x00090ff1) main_cset_slider_pane_g13_ParamLimits

0x85a3,	// (0x00090ff1) main_cset_slider_pane_g13

0x85af,	// (0x00090ffd) main_cset_slider_pane_g14_ParamLimits

0x85af,	// (0x00090ffd) main_cset_slider_pane_g14

0x85bb,	// (0x00091009) main_cset_slider_pane_g15_ParamLimits

0x85bb,	// (0x00091009) main_cset_slider_pane_g15

0x1215,	// (0x00089c63) main_cset_slider_pane_t14_ParamLimits

0x1215,	// (0x00089c63) main_cset_slider_pane_t14

0x124e,	// (0x00089c9c) main_cset_slider_pane_t15_ParamLimits

0x124e,	// (0x00089c9c) main_cset_slider_pane_t15

0x8b72,	// (0x000915c0) aid_cam4_burst_size_cell_ParamLimits

0x8b72,	// (0x000915c0) aid_cam4_burst_size_cell

0x8b92,	// (0x000915e0) grid_cam4_burst_pane_ParamLimits

0x8b92,	// (0x000915e0) grid_cam4_burst_pane

0x8bca,	// (0x00091618) linegrid_cam4_burst_pane_ParamLimits

0x8bca,	// (0x00091618) linegrid_cam4_burst_pane

0x00b8,	// (0x00088b06) scroll_pane_cp30_ParamLimits

0x00b8,	// (0x00088b06) scroll_pane_cp30

0x8bf0,	// (0x0009163e) cell_cam4_burst_pane_ParamLimits

0x8bf0,	// (0x0009163e) cell_cam4_burst_pane

0x1363,	// (0x00089db1) linegrid_cam4_burst_pane_g1_ParamLimits

0x1363,	// (0x00089db1) linegrid_cam4_burst_pane_g1

0x8c3d,	// (0x0009168b) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c3d,	// (0x0009168b) linegrid_cam4_burst_pane_g2

0x1370,	// (0x00089dbe) linegrid_cam4_burst_pane_g3_ParamLimits

0x1370,	// (0x00089dbe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x000984b7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x000984b7) linegrid_cam4_burst_pane_g

0x8c4e,	// (0x0009169c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c4e,	// (0x0009169c) linegrid_cam4_burst_pane_g3_copy1

0x137d,	// (0x00089dcb) linegrid_cam4_burst_pane_g4_ParamLimits

0x137d,	// (0x00089dcb) linegrid_cam4_burst_pane_g4

0x8c68,	// (0x000916b6) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c68,	// (0x000916b6) linegrid_cam4_burst_pane_g5

0x8c79,	// (0x000916c7) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c79,	// (0x000916c7) linegrid_cam4_burst_pane_g6

0x138a,	// (0x00089dd8) linegrid_cam4_burst_pane_g7_ParamLimits

0x138a,	// (0x00089dd8) linegrid_cam4_burst_pane_g7

0x8c90,	// (0x000916de) cell_cam4_burst_pane_g1

0x13a3,	// (0x00089df1) main_cam5_pane_t1_ParamLimits

0x13a3,	// (0x00089df1) main_cam5_pane_t1

0x13b5,	// (0x00089e03) main_cam5_pane_t2_ParamLimits

0x13b5,	// (0x00089e03) main_cam5_pane_t2

0x13c7,	// (0x00089e15) main_cam5_pane_t3_ParamLimits

0x13c7,	// (0x00089e15) main_cam5_pane_t3

0x13d9,	// (0x00089e27) main_cam5_pane_t4_ParamLimits

0x13d9,	// (0x00089e27) main_cam5_pane_t4

0x13ef,	// (0x00089e3d) main_cam5_pane_t5_ParamLimits

0x13ef,	// (0x00089e3d) main_cam5_pane_t5

0x1401,	// (0x00089e4f) main_cam5_pane_t6_ParamLimits

0x1401,	// (0x00089e4f) main_cam5_pane_t6

0x1415,	// (0x00089e63) main_cam5_pane_t7_ParamLimits

0x1415,	// (0x00089e63) main_cam5_pane_t7

0x1427,	// (0x00089e75) main_cam5_pane_t8_ParamLimits

0x1427,	// (0x00089e75) main_cam5_pane_t8

0x1443,	// (0x00089e91) main_cam5_pane_t9_ParamLimits

0x1443,	// (0x00089e91) main_cam5_pane_t9

0x1455,	// (0x00089ea3) main_cam5_pane_t10_ParamLimits

0x1455,	// (0x00089ea3) main_cam5_pane_t10

0x1467,	// (0x00089eb5) main_cam5_pane_t11_ParamLimits

0x1467,	// (0x00089eb5) main_cam5_pane_t11

0x1479,	// (0x00089ec7) main_cam5_pane_t12_ParamLimits

0x1479,	// (0x00089ec7) main_cam5_pane_t12

0x148e,	// (0x00089edc) main_cam5_pane_t13_ParamLimits

0x148e,	// (0x00089edc) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x000984c3) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x000984c3) main_cam5_pane_t

0x261f,	// (0x0008b06d) popup_scut_keymap_window_ParamLimits

0x261f,	// (0x0008b06d) popup_scut_keymap_window

0x8ca3,	// (0x000916f1) aid_size_cell_brow_shortcut

0x4a6d,	// (0x0008d4bb) bg_popup_window_pane_cp010

0x8caf,	// (0x000916fd) grid_scut_pane

0x8cbb,	// (0x00091709) cell_scut_pane_ParamLimits

0x8cbb,	// (0x00091709) cell_scut_pane

0x8cd2,	// (0x00091720) cell_scut_pane_g1

0x14ab,	// (0x00089ef9) cell_scut_pane_t1

0x14ba,	// (0x00089f08) cell_scut_pane_t2

0x8cdb,	// (0x00091729) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x000984de) cell_scut_pane_t

0x6a82,	// (0x0008f4d0) main_mup3_pane_g8_ParamLimits

0x6a82,	// (0x0008f4d0) main_mup3_pane_g8

0x7f5b,	// (0x000909a9) area_vitu2_query_pane_ParamLimits

0x7f5b,	// (0x000909a9) area_vitu2_query_pane

0x8abc,	// (0x0009150a) input_focus_pane_cp08

0x14c9,	// (0x00089f17) area_vitu2_query_pane_g1

0x8ce9,	// (0x00091737) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000984e5) area_vitu2_query_pane_g

0x8cfa,	// (0x00091748) area_vitu2_query_pane_t1_ParamLimits

0x8cfa,	// (0x00091748) area_vitu2_query_pane_t1

0x8d0e,	// (0x0009175c) area_vitu2_query_pane_t2_ParamLimits

0x8d0e,	// (0x0009175c) area_vitu2_query_pane_t2

0x8d22,	// (0x00091770) area_vitu2_query_pane_t3_ParamLimits

0x8d22,	// (0x00091770) area_vitu2_query_pane_t3

0xcec2,	// (0x00095910) area_vitu2_query_pane_t4_ParamLimits

0xcec2,	// (0x00095910) area_vitu2_query_pane_t4

0xceea,	// (0x00095938) area_vitu2_query_pane_t5_ParamLimits

0xceea,	// (0x00095938) area_vitu2_query_pane_t5

0xcf12,	// (0x00095960) area_vitu2_query_pane_t6_ParamLimits

0xcf12,	// (0x00095960) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000984ea) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000984ea) area_vitu2_query_pane_t

0x8d4a,	// (0x00091798) bg_button_pane_cp018

0x8d58,	// (0x000917a6) bg_button_pane_cp021

0x8d64,	// (0x000917b2) bg_button_pane_cp022

0x8d75,	// (0x000917c3) input_focus_pane_cp09

0x4894,	// (0x0008d2e2) aid_size_touch_mv_arrow_left

0x48bd,	// (0x0008d30b) aid_size_touch_mv_arrow_right

0x85d3,	// (0x00091021) main_cset_slider_pane_g16_ParamLimits

0x85d3,	// (0x00091021) main_cset_slider_pane_g16

0x85df,	// (0x0009102d) main_cset_slider_pane_g17_ParamLimits

0x85df,	// (0x0009102d) main_cset_slider_pane_g17

0x8c90,	// (0x000916de) cell_cam4_burst_pane_g1_ParamLimits

0x022c,	// (0x00088c7a) compa_mode_pane

0x87ed,	// (0x0009123b) popup_vtel_slider_window_g3_ParamLimits

0x87ed,	// (0x0009123b) popup_vtel_slider_window_g3

0x8804,	// (0x00091252) popup_vtel_slider_window_g4_ParamLimits

0x8804,	// (0x00091252) popup_vtel_slider_window_g4

0x881b,	// (0x00091269) popup_vtel_slider_window_t1_ParamLimits

0x881b,	// (0x00091269) popup_vtel_slider_window_t1

0x022c,	// (0x00088c7a) main_cl_pane

0xc582,	// (0x00094fd0) popup_imed_adjust2_window_ParamLimits

0xc55a,	// (0x00094fa8) bg_tb_trans_pane_cp05_ParamLimits

0xe982,	// (0x000973d0) popup_imed_adjust2_window_g1_ParamLimits

0xe991,	// (0x000973df) popup_imed_adjust2_window_g2_ParamLimits

0xe991,	// (0x000973df) popup_imed_adjust2_window_g2

0xe99d,	// (0x000973eb) popup_imed_adjust2_window_g3_ParamLimits

0xe99d,	// (0x000973eb) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0009825b) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0009825b) popup_imed_adjust2_window_g

0xe9a9,	// (0x000973f7) popup_imed_adjust2_window_t1_ParamLimits

0xe9c1,	// (0x0009740f) slider_imed_adjust_pane_ParamLimits

0xe9d5,	// (0x00097423) slider_imed_adjust_pane_g1_ParamLimits

0xe9e5,	// (0x00097433) slider_imed_adjust_pane_g2_ParamLimits

0xe9f5,	// (0x00097443) slider_imed_adjust_pane_g3_ParamLimits

0xea06,	// (0x00097454) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00098262) slider_imed_adjust_pane_g_ParamLimits

0x7c64,	// (0x000906b2) aid_touch_area_cam4_ParamLimits

0x7c64,	// (0x000906b2) aid_touch_area_cam4

0xef3f,	// (0x0009798d) battery_pane_cp01

0x7d34,	// (0x00090782) main_camera4_pane_g6_ParamLimits

0x7d34,	// (0x00090782) main_camera4_pane_g6

0x7d5e,	// (0x000907ac) main_camera4_pane_t2_ParamLimits

0x7d5e,	// (0x000907ac) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00098365) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00098365) main_camera4_pane_t

0x7da5,	// (0x000907f3) aid_touch_area_vid4_ParamLimits

0x7da5,	// (0x000907f3) aid_touch_area_vid4

0x7e0c,	// (0x0009085a) main_video4_pane_g5_ParamLimits

0x7e0c,	// (0x0009085a) main_video4_pane_g5

0x7e37,	// (0x00090885) vid4_progress_pane_ParamLimits

0x7e37,	// (0x00090885) vid4_progress_pane

0x11db,	// (0x00089c29) main_cset_slider_pane_g18_ParamLimits

0x11db,	// (0x00089c29) main_cset_slider_pane_g18

0x1397,	// (0x00089de5) cell_cam4_burst_pane_g2_ParamLimits

0x1397,	// (0x00089de5) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x000984be) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x000984be) cell_cam4_burst_pane_g

0x0a07,	// (0x00089455) bg_cl_pane_ParamLimits

0x0a07,	// (0x00089455) bg_cl_pane

0x8d86,	// (0x000917d4) cl_header_pane_ParamLimits

0x8d86,	// (0x000917d4) cl_header_pane

0x8d9a,	// (0x000917e8) cl_listscroll_pane_ParamLimits

0x8d9a,	// (0x000917e8) cl_listscroll_pane

0xcf5e,	// (0x000959ac) bg_cl_pane_g1

0xcf66,	// (0x000959b4) bg_cl_pane_g2

0xcf6e,	// (0x000959bc) bg_cl_pane_g3

0xcf76,	// (0x000959c4) bg_cl_pane_g4

0xcf7e,	// (0x000959cc) bg_cl_pane_g5

0xcf86,	// (0x000959d4) bg_cl_pane_g6

0xcf8e,	// (0x000959dc) bg_cl_pane_g7

0xcf96,	// (0x000959e4) bg_cl_pane_g8

0xcf9e,	// (0x000959ec) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x000984f9) bg_cl_pane_g

0x8daa,	// (0x000917f8) aid_height_cl_leading_ParamLimits

0x8daa,	// (0x000917f8) aid_height_cl_leading

0x8db6,	// (0x00091804) aid_height_cl_text_ParamLimits

0x8db6,	// (0x00091804) aid_height_cl_text

0x2659,	// (0x0008b0a7) bg_cl_header_pane_ParamLimits

0x2659,	// (0x0008b0a7) bg_cl_header_pane

0x8dd5,	// (0x00091823) cl_header_pane_g1_ParamLimits

0x8dd5,	// (0x00091823) cl_header_pane_g1

0x8deb,	// (0x00091839) cl_header_pane_t1_ParamLimits

0x8deb,	// (0x00091839) cl_header_pane_t1

0xcfa6,	// (0x000959f4) cl_list_pane

0x11ae,	// (0x00089bfc) hc_scroll_pane_cp01

0x0dff,	// (0x0008984d) bg_cl_header_pane_g1

0x1094,	// (0x00089ae2) bg_cl_header_pane_g2

0x0e1f,	// (0x0008986d) bg_cl_header_pane_g3

0x10a4,	// (0x00089af2) bg_cl_header_pane_g4

0x109c,	// (0x00089aea) bg_cl_header_pane_g5

0x12b0,	// (0x00089cfe) bg_cl_header_pane_g6

0x10bc,	// (0x00089b0a) bg_cl_header_pane_g7

0x10c4,	// (0x00089b12) bg_cl_header_pane_g8

0x10b4,	// (0x00089b02) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0009850c) bg_cl_header_pane_g

0x8e04,	// (0x00091852) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e04,	// (0x00091852) hc_cl_list_double_graphic_heading_pane

0x8e18,	// (0x00091866) hc_cl_list_single_graphic_pane_ParamLimits

0x8e18,	// (0x00091866) hc_cl_list_single_graphic_pane

0x8e32,	// (0x00091880) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e32,	// (0x00091880) hc_cl_list_single_graphic_pane_g1

0x8e3e,	// (0x0009188c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e3e,	// (0x0009188c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0009851f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0009851f) hc_cl_list_single_graphic_pane_g

0x8e52,	// (0x000918a0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e52,	// (0x000918a0) hc_cl_list_single_graphic_pane_t1

0x8e32,	// (0x00091880) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e32,	// (0x00091880) hc_cl_list_double_graphic_heading_pane_g1

0x8e67,	// (0x000918b5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e67,	// (0x000918b5) hc_cl_list_double_graphic_heading_pane_g2

0x8e7b,	// (0x000918c9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e7b,	// (0x000918c9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00098524) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00098524) hc_cl_list_double_graphic_heading_pane_g

0x8e8f,	// (0x000918dd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8e8f,	// (0x000918dd) hc_cl_list_double_graphic_heading_pane_t1

0x8ea4,	// (0x000918f2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ea4,	// (0x000918f2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0009852b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0009852b) hc_cl_list_double_graphic_heading_pane_t

0xf061,	// (0x00097aaf) vid4_progress_pane_g1

0xf071,	// (0x00097abf) vid4_progress_pane_g2

0x413e,	// (0x0008cb8c) vid4_progress_pane_g3

0xef76,	// (0x000979c4) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00098530) vid4_progress_pane_g

0xf081,	// (0x00097acf) vid4_progress_pane_t1

0xf096,	// (0x00097ae4) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0009853b) vid4_progress_pane_t

0xf0c1,	// (0x00097b0f) wait_bar_pane_cp07

0xc853,	// (0x000952a1) blid_firmament_pane_ParamLimits

0xc896,	// (0x000952e4) popup_blid_sat_info2_window_g1

0xc8ba,	// (0x00095308) popup_blid_sat_info2_window_t3

0xc8c8,	// (0x00095316) popup_blid_sat_info2_window_t4

0xc8d6,	// (0x00095324) popup_blid_sat_info2_window_t5

0xc8e4,	// (0x00095332) popup_blid_sat_info2_window_t6

0xc8f4,	// (0x00095342) popup_blid_sat_info2_window_t7

0xc902,	// (0x00095350) popup_blid_sat_info2_window_t8

0xc910,	// (0x0009535e) popup_blid_sat_info2_window_t9

0xc91e,	// (0x0009536c) popup_blid_sat_info2_window_t10

0xc9e2,	// (0x00095430) aid_firma_cardinal_ParamLimits

0xc9f6,	// (0x00095444) blid_firmament_pane_t1_ParamLimits

0xca0d,	// (0x0009545b) blid_firmament_pane_t2_ParamLimits

0xca24,	// (0x00095472) blid_firmament_pane_t3_ParamLimits

0xca3b,	// (0x00095489) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00098154) blid_firmament_pane_t_ParamLimits

0xca52,	// (0x000954a0) blid_sat_info_pane_ParamLimits

0x2659,	// (0x0008b0a7) main_cam_set_pane_ParamLimits

0x72f0,	// (0x0008fd3e) aid_size_cell_colour_35_ParamLimits

0x7310,	// (0x0008fd5e) aid_size_cell_colour_112_ParamLimits

0x7330,	// (0x0008fd7e) aid_size_cell_effect_ParamLimits

0xc55a,	// (0x00094fa8) bg_tb_trans_pane_cp02_ParamLimits

0x40b8,	// (0x0008cb06) heading_imed_pane_ParamLimits

0x7350,	// (0x0008fd9e) listscroll_imed_pane_ParamLimits

0xbb8c,	// (0x000945da) popup_call2_audio_first_window_g5_ParamLimits

0xbb8c,	// (0x000945da) popup_call2_audio_first_window_g5

0x790b,	// (0x00090359) aid_size_touch_image3_arrow_left_ParamLimits

0x790b,	// (0x00090359) aid_size_touch_image3_arrow_left

0x7937,	// (0x00090385) aid_size_touch_image3_arrow_right_ParamLimits

0x7937,	// (0x00090385) aid_size_touch_image3_arrow_right

0xf0ac,	// (0x00097afa) vid4_progress_pane_t3

0x7673,	// (0x000900c1) main_hwr_training_symbol_option_pane_ParamLimits

0x7673,	// (0x000900c1) main_hwr_training_symbol_option_pane

0xec6f,	// (0x000976bd) popup_hwr_training_preview_window_ParamLimits

0xec6f,	// (0x000976bd) popup_hwr_training_preview_window

0x7693,	// (0x000900e1) hwr_training_navi_pane_g5_ParamLimits

0x7693,	// (0x000900e1) hwr_training_navi_pane_g5

0x1082,	// (0x00089ad0) popup_char_count_window

0xefcc,	// (0x00097a1a) bg_popup_sub_pane_cp20_ParamLimits

0x8933,	// (0x00091381) list_vitu2_match_list_pane_ParamLimits

0x8942,	// (0x00091390) vitu2_page_scroll_pane_ParamLimits

0x8942,	// (0x00091390) vitu2_page_scroll_pane

0xd009,	// (0x00095a57) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd009,	// (0x00095a57) list_single_hwr_training_symbol_option_pane

0xd01c,	// (0x00095a6a) list_single_hwr_training_symbol_option_pane_g1

0xd024,	// (0x00095a72) list_single_hwr_training_symbol_option_pane_t1

0xd032,	// (0x00095a80) bg_button_pane_cp023

0xd03b,	// (0x00095a89) bg_button_pane_cp024

0x8eb9,	// (0x00091907) vitu2_page_scroll_pane_g1

0x8ec1,	// (0x0009190f) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00098542) vitu2_page_scroll_pane_g

0x8ec9,	// (0x00091917) vitu2_page_scroll_pane_t1

0xc76f,	// (0x000951bd) popup_char_count_window_g1

0xd06e,	// (0x00095abc) popup_char_count_window_g2

0xd077,	// (0x00095ac5) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00098547) popup_char_count_window_g

0xd080,	// (0x00095ace) popup_char_count_window_t1

0x022c,	// (0x00088c7a) main_vded2_pane

0xe96e,	// (0x000973bc) aid_size_cell_imed_line

0xe978,	// (0x000973c6) grid_imed_line_width_pane

0x7ea7,	// (0x000908f5) vid4_indicators_pane_g4

0xd08e,	// (0x00095adc) cell_imed_line_width_pane_ParamLimits

0xd08e,	// (0x00095adc) cell_imed_line_width_pane

0xd0a2,	// (0x00095af0) cell_imed_line_width_pane_g1

0xc801,	// (0x0009524f) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0009854e) cell_imed_line_width_pane_g

0x8ed8,	// (0x00091926) main_vded2_pane_g1_ParamLimits

0x8ed8,	// (0x00091926) main_vded2_pane_g1

0x8eee,	// (0x0009193c) main_vded2_pane_g2_ParamLimits

0x8eee,	// (0x0009193c) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00098553) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00098553) main_vded2_pane_g

0x8f00,	// (0x0009194e) vded2_slider_pane_ParamLimits

0x8f00,	// (0x0009194e) vded2_slider_pane

0x8f10,	// (0x0009195e) aid_size_touch_vded2_end

0x8f1a,	// (0x00091968) aid_size_touch_vded2_playhead

0xd0ab,	// (0x00095af9) aid_size_touch_vded2_start

0xd0b3,	// (0x00095b01) vded2_slider_bg_pane

0xd0bc,	// (0x00095b0a) vded2_slider_pane_g1

0xd0c5,	// (0x00095b13) vded2_slider_pane_g2

0x8f24,	// (0x00091972) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00098558) vded2_slider_pane_g

0xd0cd,	// (0x00095b1b) vded2_slider_bg_pane_g1

0xd0d6,	// (0x00095b24) vded2_slider_bg_pane_g2

0xd0df,	// (0x00095b2d) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0009855f) vded2_slider_bg_pane_g

0x50b9,	// (0x0008db07) aid_postcard_touch_down_pane_ParamLimits

0x50b9,	// (0x0008db07) aid_postcard_touch_down_pane

0x50cf,	// (0x0008db1d) aid_postcard_touch_up_pane_ParamLimits

0x50cf,	// (0x0008db1d) aid_postcard_touch_up_pane

0x022c,	// (0x00088c7a) main_blid2_pane

0xc568,	// (0x00094fb6) popup_blid2_search_window

0x022c,	// (0x00088c7a) blid2_gps_pane

0x022c,	// (0x00088c7a) blid2_navig_pane

0x022c,	// (0x00088c7a) blid2_search_pane

0x022c,	// (0x00088c7a) blid2_tripm_pane

0x8f2f,	// (0x0009197d) blid2_search_pane_g1_ParamLimits

0x8f2f,	// (0x0009197d) blid2_search_pane_g1

0x8f47,	// (0x00091995) blid2_search_pane_t1_ParamLimits

0x8f47,	// (0x00091995) blid2_search_pane_t1

0x8f59,	// (0x000919a7) aid_size_cell_blid2_gps_ParamLimits

0x8f59,	// (0x000919a7) aid_size_cell_blid2_gps

0x8f71,	// (0x000919bf) blid2_gps_pane_g1_ParamLimits

0x8f71,	// (0x000919bf) blid2_gps_pane_g1

0x8f85,	// (0x000919d3) grid_blid2_satellite_pane_ParamLimits

0x8f85,	// (0x000919d3) grid_blid2_satellite_pane

0x8f9f,	// (0x000919ed) blid2_navig_pane_g1_ParamLimits

0x8f9f,	// (0x000919ed) blid2_navig_pane_g1

0x8fab,	// (0x000919f9) blid2_navig_pane_t1_ParamLimits

0x8fab,	// (0x000919f9) blid2_navig_pane_t1

0x8fc6,	// (0x00091a14) blid2_navig_pane_t2_ParamLimits

0x8fc6,	// (0x00091a14) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00098566) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00098566) blid2_navig_pane_t

0x8fe1,	// (0x00091a2f) blid2_navig_ring_pane_ParamLimits

0x8fe1,	// (0x00091a2f) blid2_navig_ring_pane

0x8ffa,	// (0x00091a48) blid2_speed_pane_ParamLimits

0x8ffa,	// (0x00091a48) blid2_speed_pane

0x9006,	// (0x00091a54) blid2_tripm_pane_g1_ParamLimits

0x9006,	// (0x00091a54) blid2_tripm_pane_g1

0x9021,	// (0x00091a6f) blid2_tripm_pane_g2_ParamLimits

0x9021,	// (0x00091a6f) blid2_tripm_pane_g2

0x9035,	// (0x00091a83) blid2_tripm_pane_g3_ParamLimits

0x9035,	// (0x00091a83) blid2_tripm_pane_g3

0x9049,	// (0x00091a97) blid2_tripm_pane_g4_ParamLimits

0x9049,	// (0x00091a97) blid2_tripm_pane_g4

0x905d,	// (0x00091aab) blid2_tripm_pane_g5_ParamLimits

0x905d,	// (0x00091aab) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0009856b) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0009856b) blid2_tripm_pane_g

0x9083,	// (0x00091ad1) blid2_tripm_pane_t1_ParamLimits

0x9083,	// (0x00091ad1) blid2_tripm_pane_t1

0x909e,	// (0x00091aec) blid2_tripm_pane_t2_ParamLimits

0x909e,	// (0x00091aec) blid2_tripm_pane_t2

0x90b9,	// (0x00091b07) blid2_tripm_pane_t3_ParamLimits

0x90b9,	// (0x00091b07) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00098578) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00098578) blid2_tripm_pane_t

0x9100,	// (0x00091b4e) cell_blid2_satellite_pane_ParamLimits

0x9100,	// (0x00091b4e) cell_blid2_satellite_pane

0x911e,	// (0x00091b6c) cell_blid2_satellite_pane_g1

0xd0e8,	// (0x00095b36) cell_blid2_satellite_pane_t1

0xca62,	// (0x000954b0) blid2_speed_pane_g1

0xd0f6,	// (0x00095b44) blid2_speed_pane_t1

0xd104,	// (0x00095b52) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00098581) blid2_speed_pane_t

0xca62,	// (0x000954b0) blid2_navig_ring_pane_g1

0x9127,	// (0x00091b75) blid2_navig_ring_pane_g2

0x912f,	// (0x00091b7d) blid2_navig_ring_pane_g3

0x9137,	// (0x00091b85) blid2_navig_ring_pane_g4

0x913f,	// (0x00091b8d) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00098586) blid2_navig_ring_pane_g

0x022c,	// (0x00088c7a) bg_popup_window_pane_cp011

0xd112,	// (0x00095b60) popup_blid2_search_window_g1

0xd11a,	// (0x00095b68) popup_blid2_search_window_t1

0xd128,	// (0x00095b76) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00098591) popup_blid2_search_window_t

0x0d0e,	// (0x0008975c) main_browser_pane_g1

0x0a07,	// (0x00089455) main_browser_pane_ParamLimits

0xefcc,	// (0x00097a1a) bg_button_pane_cp011_ParamLimits

0x81af,	// (0x00090bfd) cell_vitu2_function_pane_g1_ParamLimits

0x2659,	// (0x0008b0a7) bg_popup_sub_pane_cp22_ParamLimits

0x8abc,	// (0x0009150a) input_focus_pane_cp08_ParamLimits

0x8ac9,	// (0x00091517) popup_vitu2_query_button_pane_ParamLimits

0x8ac9,	// (0x00091517) popup_vitu2_query_button_pane

0x8a9e,	// (0x000914ec) popup_vitu2_query_input_button_pane

0x12ed,	// (0x00089d3b) popup_vitu2_query_window_g1_ParamLimits

0x8ada,	// (0x00091528) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00098498) popup_vitu2_query_window_g_ParamLimits

0x022c,	// (0x00088c7a) bg_button_pane_cp026

0x9147,	// (0x00091b95) popup_vitu2_query_input_button_pane_g1

0x022c,	// (0x00088c7a) bg_button_pane_cp025

0xd136,	// (0x00095b84) popup_vitu2_query_button_pane_t1

0x675d,	// (0x0008f1ab) main_mp3_pane_t6

0x676b,	// (0x0008f1b9) popup_slider_window_cp01

0xef5d,	// (0x000979ab) cam4_battery_pane

0xefc4,	// (0x00097a12) cam4_battery_pane_cp02

0xf059,	// (0x00097aa7) cam4_battery_pane_cp01

0xf059,	// (0x00097aa7) cam4_battery_pane_cp03

0x0f3a,	// (0x00089988) cam4_battery_pane_g1

0xca62,	// (0x000954b0) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00098596) cam4_battery_pane_g

0xc92c,	// (0x0009537a) popup_blid_sat_info2_window_t11

0x4894,	// (0x0008d2e2) aid_size_touch_mv_arrow_left_ParamLimits

0x48bd,	// (0x0008d30b) aid_size_touch_mv_arrow_right_ParamLimits

0x4905,	// (0x0008d353) navi_pane_g1_ParamLimits

0x4911,	// (0x0008d35f) navi_pane_g2_ParamLimits

0x493f,	// (0x0008d38d) navi_pane_g3_ParamLimits

0xf418,	// (0x00097e66) navi_pane_g_ParamLimits

0x49fb,	// (0x0008d449) navi_pane_mv_t1_ParamLimits

0x735c,	// (0x0008fdaa) grid_imed_effect_pane_ParamLimits

0x0c57,	// (0x000896a5) aid_placing_vt_slider_lsc

0x0c5f,	// (0x000896ad) aid_placing_vt_slider_prt

0x2659,	// (0x0008b0a7) bg_tb_trans_pane_cp01_ParamLimits

0xcbe9,	// (0x00095637) popup_image_details_window_g1_ParamLimits

0xcbfc,	// (0x0009564a) popup_image_details_window_g2_ParamLimits

0xcc11,	// (0x0009565f) popup_image_details_window_g3_ParamLimits

0xcc11,	// (0x0009565f) popup_image_details_window_g3

0xf74b,	// (0x00098199) popup_image_details_window_g_ParamLimits

0xcc25,	// (0x00095673) popup_image_details_window_t1_ParamLimits

0xcc37,	// (0x00095685) popup_image_details_window_t2_ParamLimits

0xcc50,	// (0x0009569e) popup_image_details_window_t3_ParamLimits

0xcc64,	// (0x000956b2) popup_image_details_window_t4_ParamLimits

0xcc7f,	// (0x000956cd) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x000981a0) popup_image_details_window_t_ParamLimits

0x8dc2,	// (0x00091810) cl_header_name_pane_ParamLimits

0x8dc2,	// (0x00091810) cl_header_name_pane

0x914f,	// (0x00091b9d) cl_header_name_pane_t1_ParamLimits

0x914f,	// (0x00091b9d) cl_header_name_pane_t1

0x9170,	// (0x00091bbe) cl_header_name_pane_t2_ParamLimits

0x9170,	// (0x00091bbe) cl_header_name_pane_t2

0x91b2,	// (0x00091c00) cl_header_name_pane_t3_ParamLimits

0x91b2,	// (0x00091c00) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0009859b) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0009859b) cl_header_name_pane_t

0x49cc,	// (0x0008d41a) navi_pane_mv_g2_ParamLimits

0x105c,	// (0x00089aaa) field_vitu2_entry_pane_g1_ParamLimits

0x1068,	// (0x00089ab6) field_vitu2_entry_pane_g2_ParamLimits

0x1074,	// (0x00089ac2) field_vitu2_entry_pane_g3_ParamLimits

0x1074,	// (0x00089ac2) field_vitu2_entry_pane_g3

0xf949,	// (0x00098397) field_vitu2_entry_pane_g_ParamLimits

0x812b,	// (0x00090b79) cell_vitu2_itu_pane_g1_ParamLimits

0x813b,	// (0x00090b89) cell_vitu2_itu_pane_g2_ParamLimits

0x813b,	// (0x00090b89) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x000983a3) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x000983a3) cell_vitu2_itu_pane_g

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp05_ParamLimits

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp05

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp03

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp04

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp10_ParamLimits

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp10

0x8d64,	// (0x000917b2) bg_vkb2_func_pane_cp08

0x8d4a,	// (0x00091798) bg_vkb2_func_pane_cp06

0x8d58,	// (0x000917a6) bg_vkb2_func_pane_cp07

0xd044,	// (0x00095a92) bg_vkb2_func_pane_cp11_ParamLimits

0xd044,	// (0x00095a92) bg_vkb2_func_pane_cp11

0xd059,	// (0x00095aa7) bg_vkb2_func_pane_cp12_ParamLimits

0xd059,	// (0x00095aa7) bg_vkb2_func_pane_cp12

0x022c,	// (0x00088c7a) bg_vkb2_func_pane_cp09

0x1094,	// (0x00089ae2) bg_vkb2_func_pane_g1

0x0e1f,	// (0x0008986d) bg_vkb2_func_pane_g2

0x109c,	// (0x00089aea) bg_vkb2_func_pane_g3

0x10a4,	// (0x00089af2) bg_vkb2_func_pane_g4

0x12b0,	// (0x00089cfe) bg_vkb2_func_pane_g5

0x10bc,	// (0x00089b0a) bg_vkb2_func_pane_g6

0x10c4,	// (0x00089b12) bg_vkb2_func_pane_g7

0x10b4,	// (0x00089b02) bg_vkb2_func_pane_g8

0x0dff,	// (0x0008984d) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x000985a2) bg_vkb2_func_pane_g

0x9071,	// (0x00091abf) blid2_tripm_pane_g6_ParamLimits

0x9071,	// (0x00091abf) blid2_tripm_pane_g6

0x0ef4,	// (0x00089942) mp4_progress_pane_g1

0x90ec,	// (0x00091b3a) blid2_tripm_values_pane_ParamLimits

0x90ec,	// (0x00091b3a) blid2_tripm_values_pane

0x91e3,	// (0x00091c31) blid2_tripm_values_pane_t1

0x91f1,	// (0x00091c3f) blid2_tripm_values_pane_t2

0x91ff,	// (0x00091c4d) blid2_tripm_values_pane_t3

0x920d,	// (0x00091c5b) blid2_tripm_values_pane_t4

0x921b,	// (0x00091c69) blid2_tripm_values_pane_t5

0x9229,	// (0x00091c77) blid2_tripm_values_pane_t6

0x9237,	// (0x00091c85) blid2_tripm_values_pane_t7

0x9245,	// (0x00091c93) blid2_tripm_values_pane_t8

0x9253,	// (0x00091ca1) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x000985b5) blid2_tripm_values_pane_t

0x3353,	// (0x0008bda1) call_video_pane_t1_ParamLimits

0x3365,	// (0x0008bdb3) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00097cef) call_video_pane_t_ParamLimits

0x4fbc,	// (0x0008da0a) msg_header_pane_g1_ParamLimits

0xb294,	// (0x00093ce2) msg_header_pane_g2_ParamLimits

0xb294,	// (0x00093ce2) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00097f09) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00097f09) msg_header_pane_g

0x0a07,	// (0x00089455) main_clock2_pane_ParamLimits

0x7081,	// (0x0008facf) grid_clock2_toolbar_pane_ParamLimits

0x7081,	// (0x0008facf) grid_clock2_toolbar_pane

0x7081,	// (0x0008facf) listscroll_clock2_pane_ParamLimits

0x7081,	// (0x0008facf) listscroll_clock2_pane

0x715e,	// (0x0008fbac) main_clock2_pane_t3_ParamLimits

0x715e,	// (0x0008fbac) main_clock2_pane_t3

0x7179,	// (0x0008fbc7) main_clock2_pane_t4_ParamLimits

0x7179,	// (0x0008fbc7) main_clock2_pane_t4

0xd144,	// (0x00095b92) cell_clock2_toolbar_pane

0xd14c,	// (0x00095b9a) cell_clock2_toolbar_pane_cp01

0xd14c,	// (0x00095b9a) cell_clock2_toolbar_pane_cp02

0xd154,	// (0x00095ba2) cell_clock2_toolbar_pane_cp03

0xd15c,	// (0x00095baa) list_clock2_pane

0x4634,	// (0x0008d082) scroll_pane_cp10

0xd164,	// (0x00095bb2) list_single_clock2_pane_ParamLimits

0xd164,	// (0x00095bb2) list_single_clock2_pane

0x4a6d,	// (0x0008d4bb) list_highlight_pane_cp08

0xd171,	// (0x00095bbf) list_single_clock2_pane_t1

0xd17f,	// (0x00095bcd) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x000985c8) list_single_clock2_pane_t

0x022c,	// (0x00088c7a) bg_button_pane_cp10

0xd18d,	// (0x00095bdb) cell_clock2_toolbar_pane_g1

0x5045,	// (0x0008da93) aid_main_viewer_pane_g1_ParamLimits

0x5045,	// (0x0008da93) aid_main_viewer_pane_g1

0x5053,	// (0x0008daa1) aid_main_viewer_pane_g2_ParamLimits

0x5053,	// (0x0008daa1) aid_main_viewer_pane_g2

0x5061,	// (0x0008daaf) aid_main_viewer_pane_g3_ParamLimits

0x5061,	// (0x0008daaf) aid_main_viewer_pane_g3

0x5070,	// (0x0008dabe) aid_main_viewer_pane_g4_ParamLimits

0x5070,	// (0x0008dabe) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00097f1a) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00097f1a) aid_main_viewer_pane_g

0x5984,	// (0x0008e3d2) main_calc_pane_ParamLimits

0x5998,	// (0x0008e3e6) main_dialer2_pane_ParamLimits

0x022c,	// (0x00088c7a) main_cam6_pane

0x022c,	// (0x00088c7a) main_vid6_pane

0x708d,	// (0x0008fadb) listscroll_gen_pane_cp06_ParamLimits

0x708d,	// (0x0008fadb) listscroll_gen_pane_cp06

0x7194,	// (0x0008fbe2) main_clock2_pane_t5_ParamLimits

0x7194,	// (0x0008fbe2) main_clock2_pane_t5

0x71f1,	// (0x0008fc3f) aid_call2_pane_cp10_ParamLimits

0x7203,	// (0x0008fc51) aid_call_pane_cp10_ParamLimits

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7215,	// (0x0008fc63) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7215,	// (0x0008fc63) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4823,	// (0x0008d271) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00098250) popup_clock_analogue_window_cp10_g_ParamLimits

0x7227,	// (0x0008fc75) popup_clock_analogue_window_cp10_t1_ParamLimits

0x78b8,	// (0x00090306) cell_dialer2_keypad_pane_g2_ParamLimits

0x78b8,	// (0x00090306) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00098336) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00098336) cell_dialer2_keypad_pane_g

0x78d4,	// (0x00090322) cell_dialer2_keypad_pane_t1

0x84c6,	// (0x00090f14) main_cset_text2_pane_ParamLimits

0x84c6,	// (0x00090f14) main_cset_text2_pane

0x14c9,	// (0x00089f17) area_vitu2_query_pane_g1_ParamLimits

0x8ce9,	// (0x00091737) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000984e5) area_vitu2_query_pane_g_ParamLimits

0xcf3a,	// (0x00095988) area_vitu2_query_pane_t7_ParamLimits

0xcf3a,	// (0x00095988) area_vitu2_query_pane_t7

0x8d4a,	// (0x00091798) bg_button_pane_cp018_ParamLimits

0x8d58,	// (0x000917a6) bg_button_pane_cp021_ParamLimits

0x8d64,	// (0x000917b2) bg_button_pane_cp022_ParamLimits

0x8d64,	// (0x000917b2) bg_vkb2_func_pane_cp08_ParamLimits

0x8d4a,	// (0x00091798) bg_vkb2_func_pane_cp06_ParamLimits

0x8d58,	// (0x000917a6) bg_vkb2_func_pane_cp07_ParamLimits

0x8d75,	// (0x000917c3) input_focus_pane_cp09_ParamLimits

0xf0d1,	// (0x00097b1f) cam6_autofocus_pane_ParamLimits

0xf0d1,	// (0x00097b1f) cam6_autofocus_pane

0x9261,	// (0x00091caf) cam6_image_uncrop_pane_ParamLimits

0x9261,	// (0x00091caf) cam6_image_uncrop_pane

0x9270,	// (0x00091cbe) cam6_indi_pane_ParamLimits

0x9270,	// (0x00091cbe) cam6_indi_pane

0x9286,	// (0x00091cd4) cam6_mode_pane_ParamLimits

0x9286,	// (0x00091cd4) cam6_mode_pane

0x9298,	// (0x00091ce6) cam6_timer_pane_ParamLimits

0x9298,	// (0x00091ce6) cam6_timer_pane

0x92a4,	// (0x00091cf2) cam6_zoom_pane_ParamLimits

0x92a4,	// (0x00091cf2) cam6_zoom_pane

0x92b0,	// (0x00091cfe) cam6_mode_pane_g1_ParamLimits

0x92b0,	// (0x00091cfe) cam6_mode_pane_g1

0x92c0,	// (0x00091d0e) cam6_mode_pane_g2_ParamLimits

0x92c0,	// (0x00091d0e) cam6_mode_pane_g2

0x92d0,	// (0x00091d1e) cam6_mode_pane_g3_ParamLimits

0x92d0,	// (0x00091d1e) cam6_mode_pane_g3

0x92e0,	// (0x00091d2e) cam6_mode_pane_g4_ParamLimits

0x92e0,	// (0x00091d2e) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x000985cd) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x000985cd) cam6_mode_pane_g

0xd195,	// (0x00095be3) bg_tb_trans_pane_cp08_ParamLimits

0xd195,	// (0x00095be3) bg_tb_trans_pane_cp08

0xd1a3,	// (0x00095bf1) cam6_battery_pane_ParamLimits

0xd1a3,	// (0x00095bf1) cam6_battery_pane

0xd1b9,	// (0x00095c07) cam6_indi_pane_g1_ParamLimits

0xd1b9,	// (0x00095c07) cam6_indi_pane_g1

0xd1cb,	// (0x00095c19) cam6_indi_pane_g2_ParamLimits

0xd1cb,	// (0x00095c19) cam6_indi_pane_g2

0xd1dd,	// (0x00095c2b) cam6_indi_pane_g3_ParamLimits

0xd1dd,	// (0x00095c2b) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x000985d6) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x000985d6) cam6_indi_pane_g

0xd1ef,	// (0x00095c3d) cam6_indi_pane_t1_ParamLimits

0xd1ef,	// (0x00095c3d) cam6_indi_pane_t1

0x92f0,	// (0x00091d3e) cam6_autofocus_pane_g1

0x92f8,	// (0x00091d46) cam6_autofocus_pane_g2

0x9300,	// (0x00091d4e) cam6_autofocus_pane_g3

0x9308,	// (0x00091d56) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x000985dd) cam6_autofocus_pane_g

0xd215,	// (0x00095c63) cam6_timer_pane_g1

0xd21d,	// (0x00095c6b) cam6_timer_pane_t1

0xd22b,	// (0x00095c79) cam6_zoom_cont_pane

0xd233,	// (0x00095c81) cam6_zoom_pane_g1

0xd23b,	// (0x00095c89) cam6_zoom_pane_g2

0x9310,	// (0x00091d5e) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x000985e6) cam6_zoom_pane_g

0xca62,	// (0x000954b0) cam6_battery_pane_g1

0xca62,	// (0x000954b0) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0009815d) cam6_battery_pane_g

0xd243,	// (0x00095c91) cam6_zoom_cont_pane_g1

0xd24c,	// (0x00095c9a) cam6_zoom_cont_pane_g2

0xd255,	// (0x00095ca3) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x000985ed) cam6_zoom_cont_pane_g

0x932d,	// (0x00091d7b) cam6_mode_pane_cp_ParamLimits

0x932d,	// (0x00091d7b) cam6_mode_pane_cp

0x933f,	// (0x00091d8d) cam6_zoom_pane_cp_ParamLimits

0x933f,	// (0x00091d8d) cam6_zoom_pane_cp

0x934b,	// (0x00091d99) vid6_image_uncrop_cif_pane_ParamLimits

0x934b,	// (0x00091d99) vid6_image_uncrop_cif_pane

0x935b,	// (0x00091da9) vid6_image_uncrop_nhd_pane_ParamLimits

0x935b,	// (0x00091da9) vid6_image_uncrop_nhd_pane

0x936a,	// (0x00091db8) vid6_image_uncrop_vga_pane_ParamLimits

0x936a,	// (0x00091db8) vid6_image_uncrop_vga_pane

0x9379,	// (0x00091dc7) vid6_image_uncrop_wvga_pane_ParamLimits

0x9379,	// (0x00091dc7) vid6_image_uncrop_wvga_pane

0x9388,	// (0x00091dd6) vid6_indi_pane_ParamLimits

0x9388,	// (0x00091dd6) vid6_indi_pane

0xd195,	// (0x00095be3) bg_tb_trans_pane_cp09_ParamLimits

0xd195,	// (0x00095be3) bg_tb_trans_pane_cp09

0xd26d,	// (0x00095cbb) cam6_battery_pane_cp_ParamLimits

0xd26d,	// (0x00095cbb) cam6_battery_pane_cp

0xd279,	// (0x00095cc7) vid6_indi_pane_g1_ParamLimits

0xd279,	// (0x00095cc7) vid6_indi_pane_g1

0xd28b,	// (0x00095cd9) vid6_indi_pane_g2_ParamLimits

0xd28b,	// (0x00095cd9) vid6_indi_pane_g2

0xd29d,	// (0x00095ceb) vid6_indi_pane_g3_ParamLimits

0xd29d,	// (0x00095ceb) vid6_indi_pane_g3

0xd2b2,	// (0x00095d00) vid6_indi_pane_g4_ParamLimits

0xd2b2,	// (0x00095d00) vid6_indi_pane_g4

0xd2c7,	// (0x00095d15) vid6_indi_pane_g5_ParamLimits

0xd2c7,	// (0x00095d15) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x000985f4) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x000985f4) vid6_indi_pane_g

0xd2e1,	// (0x00095d2f) vid6_indi_pane_t1_ParamLimits

0xd2e1,	// (0x00095d2f) vid6_indi_pane_t1

0xd2f7,	// (0x00095d45) vid6_indi_pane_t2_ParamLimits

0xd2f7,	// (0x00095d45) vid6_indi_pane_t2

0xd31f,	// (0x00095d6d) vid6_indi_pane_t3_ParamLimits

0xd31f,	// (0x00095d6d) vid6_indi_pane_t3

0xd347,	// (0x00095d95) vid6_indi_pane_t4_ParamLimits

0xd347,	// (0x00095d95) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x000985ff) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x000985ff) vid6_indi_pane_t

0xd36b,	// (0x00095db9) wait_bar_pane_cp08

0x93a0,	// (0x00091dee) main_cset_text2_pane_t1_ParamLimits

0x93a0,	// (0x00091dee) main_cset_text2_pane_t1

0x9318,	// (0x00091d66) listscroll_gen_pane_cp06_t1_ParamLimits

0x9318,	// (0x00091d66) listscroll_gen_pane_cp06_t1

0x022c,	// (0x00088c7a) main_cam6_set_pane

0xef4f,	// (0x0009799d) bg_tb_trans_pane_cp06_ParamLimits

0xef65,	// (0x000979b3) cam4_indicators_pane_g1_ParamLimits

0xef76,	// (0x000979c4) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00098373) cam4_indicators_pane_g_ParamLimits

0xef94,	// (0x000979e2) cam4_indicators_pane_t1_ParamLimits

0xefb6,	// (0x00097a04) bg_tb_trans_pane_cp07_ParamLimits

0x7e80,	// (0x000908ce) vid4_indicators_pane_g1_ParamLimits

0x7e8d,	// (0x000908db) vid4_indicators_pane_g2_ParamLimits

0x7e9a,	// (0x000908e8) vid4_indicators_pane_g3_ParamLimits

0x7ea7,	// (0x000908f5) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00098385) vid4_indicators_pane_g_ParamLimits

0x7ebf,	// (0x0009090d) vid4_indicators_pane_t1_ParamLimits

0xf061,	// (0x00097aaf) vid4_progress_pane_g1_ParamLimits

0xf071,	// (0x00097abf) vid4_progress_pane_g2_ParamLimits

0x413e,	// (0x0008cb8c) vid4_progress_pane_g3_ParamLimits

0xef76,	// (0x000979c4) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00098530) vid4_progress_pane_g_ParamLimits

0xf081,	// (0x00097acf) vid4_progress_pane_t1_ParamLimits

0xf096,	// (0x00097ae4) vid4_progress_pane_t2_ParamLimits

0xf0ac,	// (0x00097afa) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0009853b) vid4_progress_pane_t_ParamLimits

0xf0c1,	// (0x00097b0f) wait_bar_pane_cp07_ParamLimits

0x93c0,	// (0x00091e0e) main_cam6_set_pane_g2_ParamLimits

0x93c0,	// (0x00091e0e) main_cam6_set_pane_g2

0x93e4,	// (0x00091e32) main_cset6_listscroll_pane_ParamLimits

0x93e4,	// (0x00091e32) main_cset6_listscroll_pane

0x9400,	// (0x00091e4e) main_cset6_slider_pane_ParamLimits

0x9400,	// (0x00091e4e) main_cset6_slider_pane

0x9416,	// (0x00091e64) main_cset6_text2_pane_ParamLimits

0x9416,	// (0x00091e64) main_cset6_text2_pane

0xd37a,	// (0x00095dc8) main_cset6_text_pane

0xd382,	// (0x00095dd0) main_cset_list_pane_copy1_ParamLimits

0xd382,	// (0x00095dd0) main_cset_list_pane_copy1

0xd392,	// (0x00095de0) scroll_pane_cp028_copy1

0x9424,	// (0x00091e72) cset_list_set_pane_copy1

0x9437,	// (0x00091e85) aid_position_infowindow_above_copy1

0x943f,	// (0x00091e8d) aid_position_infowindow_below_copy1

0xd39b,	// (0x00095de9) cset_list_set_pane_g1_copy1

0x879e,	// (0x000911ec) cset_list_set_pane_g3_copy1_ParamLimits

0x879e,	// (0x000911ec) cset_list_set_pane_g3_copy1

0x87ad,	// (0x000911fb) cset_list_set_pane_t1_copy1_ParamLimits

0x87ad,	// (0x000911fb) cset_list_set_pane_t1_copy1

0x2659,	// (0x0008b0a7) list_highlight_pane_cp021_copy1_ParamLimits

0x2659,	// (0x0008b0a7) list_highlight_pane_cp021_copy1

0xd3a3,	// (0x00095df1) cset6_slider_pane_ParamLimits

0xd3a3,	// (0x00095df1) cset6_slider_pane

0xd3cf,	// (0x00095e1d) main_cset6_slider_pane_g1_ParamLimits

0xd3cf,	// (0x00095e1d) main_cset6_slider_pane_g1

0x9447,	// (0x00091e95) main_cset6_slider_pane_g2_ParamLimits

0x9447,	// (0x00091e95) main_cset6_slider_pane_g2

0x11c3,	// (0x00089c11) main_cset6_slider_pane_g3_ParamLimits

0x11c3,	// (0x00089c11) main_cset6_slider_pane_g3

0x858b,	// (0x00090fd9) main_cset6_slider_pane_g4_ParamLimits

0x858b,	// (0x00090fd9) main_cset6_slider_pane_g4

0x85d3,	// (0x00091021) main_cset6_slider_pane_g5_ParamLimits

0x85d3,	// (0x00091021) main_cset6_slider_pane_g5

0x11c3,	// (0x00089c11) main_cset6_slider_pane_g7_ParamLimits

0x11c3,	// (0x00089c11) main_cset6_slider_pane_g7

0x11cf,	// (0x00089c1d) main_cset6_slider_pane_g8_ParamLimits

0x11cf,	// (0x00089c1d) main_cset6_slider_pane_g8

0x8573,	// (0x00090fc1) main_cset6_slider_pane_g9_ParamLimits

0x8573,	// (0x00090fc1) main_cset6_slider_pane_g9

0x857f,	// (0x00090fcd) main_cset6_slider_pane_g10_ParamLimits

0x857f,	// (0x00090fcd) main_cset6_slider_pane_g10

0x858b,	// (0x00090fd9) main_cset6_slider_pane_g11_ParamLimits

0x858b,	// (0x00090fd9) main_cset6_slider_pane_g11

0x8597,	// (0x00090fe5) main_cset6_slider_pane_g12_ParamLimits

0x8597,	// (0x00090fe5) main_cset6_slider_pane_g12

0x85a3,	// (0x00090ff1) main_cset6_slider_pane_g13_ParamLimits

0x85a3,	// (0x00090ff1) main_cset6_slider_pane_g13

0x85af,	// (0x00090ffd) main_cset6_slider_pane_g14_ParamLimits

0x85af,	// (0x00090ffd) main_cset6_slider_pane_g14

0x946f,	// (0x00091ebd) main_cset6_slider_pane_g15_ParamLimits

0x946f,	// (0x00091ebd) main_cset6_slider_pane_g15

0x85d3,	// (0x00091021) main_cset6_slider_pane_g16_ParamLimits

0x85d3,	// (0x00091021) main_cset6_slider_pane_g16

0x85df,	// (0x0009102d) main_cset6_slider_pane_g17_ParamLimits

0x85df,	// (0x0009102d) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00098608) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00098608) main_cset6_slider_pane_g

0xd3f7,	// (0x00095e45) main_cset6_slider_pane_t1_ParamLimits

0xd3f7,	// (0x00095e45) main_cset6_slider_pane_t1

0x9487,	// (0x00091ed5) main_cset6_slider_pane_t2_ParamLimits

0x9487,	// (0x00091ed5) main_cset6_slider_pane_t2

0x94b2,	// (0x00091f00) main_cset6_slider_pane_t3_ParamLimits

0x94b2,	// (0x00091f00) main_cset6_slider_pane_t3

0x94dd,	// (0x00091f2b) main_cset6_slider_pane_t4_ParamLimits

0x94dd,	// (0x00091f2b) main_cset6_slider_pane_t4

0x9508,	// (0x00091f56) main_cset6_slider_pane_t5_ParamLimits

0x9508,	// (0x00091f56) main_cset6_slider_pane_t5

0xd438,	// (0x00095e86) main_cset6_slider_pane_t7_ParamLimits

0xd438,	// (0x00095e86) main_cset6_slider_pane_t7

0x9533,	// (0x00091f81) main_cset6_slider_pane_t8_ParamLimits

0x9533,	// (0x00091f81) main_cset6_slider_pane_t8

0x9557,	// (0x00091fa5) main_cset6_slider_pane_t9_ParamLimits

0x9557,	// (0x00091fa5) main_cset6_slider_pane_t9

0x957b,	// (0x00091fc9) main_cset6_slider_pane_t10_ParamLimits

0x957b,	// (0x00091fc9) main_cset6_slider_pane_t10

0x959f,	// (0x00091fed) main_cset6_slider_pane_t11_ParamLimits

0x959f,	// (0x00091fed) main_cset6_slider_pane_t11

0xd46e,	// (0x00095ebc) main_cset6_slider_pane_t14_ParamLimits

0xd46e,	// (0x00095ebc) main_cset6_slider_pane_t14

0xd4a7,	// (0x00095ef5) main_cset6_slider_pane_t15_ParamLimits

0xd4a7,	// (0x00095ef5) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0009862d) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0009862d) main_cset6_slider_pane_t

0xd4e0,	// (0x00095f2e) cset_slider_pane_g1_copy1

0xd4e9,	// (0x00095f37) cset_slider_pane_g2_copy1

0xd4f2,	// (0x00095f40) cset_slider_pane_g3_copy1

0x022c,	// (0x00088c7a) bg_popup_sub_pane_cp011_copy1

0x12f9,	// (0x00089d47) main_cset_text_pane_g1_copy1

0x1301,	// (0x00089d4f) main_cset_text_pane_t1_copy1

0x130f,	// (0x00089d5d) main_cset_text_pane_t2_copy1

0x131d,	// (0x00089d6b) main_cset_text_pane_t3_copy1

0x132b,	// (0x00089d79) main_cset_text_pane_t4_copy1

0x1339,	// (0x00089d87) main_cset_text_pane_t5_copy1

0x1347,	// (0x00089d95) main_cset_text_pane_t6_copy1

0x1355,	// (0x00089da3) main_cset_text_pane_t7_copy1

0x93a0,	// (0x00091dee) main_cset_text2_pane_t1_copy1

0x022c,	// (0x00088c7a) main_ncimui_pane

0x5bce,	// (0x0008e61c) popup_query_ncimui_window_ParamLimits

0x5bce,	// (0x0008e61c) popup_query_ncimui_window

0xcd2e,	// (0x0009577c) field_cale_ev2_pane_g4_ParamLimits

0xcd2e,	// (0x0009577c) field_cale_ev2_pane_g4

0x7790,	// (0x000901de) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7790,	// (0x000901de) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00098311) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00098311) cell_video_dialer_keypad_pane_g

0x77a8,	// (0x000901f6) cell_video_dialer_keypad_pane_t1

0x022c,	// (0x00088c7a) bg_popup_window_pane_cp012

0x4495,	// (0x0008cee3) heading_pane_cp06

0xd5ea,	// (0x00096038) ncim_query_content_pane

0x022c,	// (0x00088c7a) bg_popup_heading_pane_cp01

0xd5f2,	// (0x00096040) ncim_heading_pane_t1

0xd600,	// (0x0009604e) ncim_indicator_popup_pane

0xd612,	// (0x00096060) ncim_query_button_pane

0xd626,	// (0x00096074) ncim_query_content_pane_t1

0xd638,	// (0x00096086) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0009866c) ncim_query_content_pane_t

0xd672,	// (0x000960c0) ncim_query_list_pane

0xd684,	// (0x000960d2) ncim_query_popup_pane

0xd600,	// (0x0009604e) ncim_indicator_popup_pane_ParamLimits

0x9689,	// (0x000920d7) ncim_query_content_pane_g1_ParamLimits

0x9689,	// (0x000920d7) ncim_query_content_pane_g1

0xd626,	// (0x00096074) ncim_query_content_pane_t1_ParamLimits

0xd638,	// (0x00096086) ncim_query_content_pane_t2_ParamLimits

0x9695,	// (0x000920e3) ncim_query_content_pane_t3_ParamLimits

0x9695,	// (0x000920e3) ncim_query_content_pane_t3

0x96bd,	// (0x0009210b) ncim_query_content_pane_t4_ParamLimits

0x96bd,	// (0x0009210b) ncim_query_content_pane_t4

0x96e5,	// (0x00092133) ncim_query_content_pane_t5_ParamLimits

0x96e5,	// (0x00092133) ncim_query_content_pane_t5

0xd64a,	// (0x00096098) ncim_query_content_pane_t6_ParamLimits

0xd64a,	// (0x00096098) ncim_query_content_pane_t6

0xfc1e,	// (0x0009866c) ncim_query_content_pane_t_ParamLimits

0xd672,	// (0x000960c0) ncim_query_list_pane_ParamLimits

0xd684,	// (0x000960d2) ncim_query_popup_pane_ParamLimits

0xd698,	// (0x000960e6) wait_bar_pane_cp04

0x022c,	// (0x00088c7a) input_focus_pane_cp011

0xd6a0,	// (0x000960ee) ncim_query_popup_pane_t1

0xd6ae,	// (0x000960fc) ncim_list_query_list_pane_ParamLimits

0xd6ae,	// (0x000960fc) ncim_list_query_list_pane

0x022c,	// (0x00088c7a) bg_button_pane_cp027

0xd6c1,	// (0x0009610f) ncim_query_button_pane_g1

0x022c,	// (0x00088c7a) list_highlight_pane_cp012

0xd6cb,	// (0x00096119) ncim_list_query_list_pane_g1

0xd6d3,	// (0x00096121) ncim_list_query_list_pane_t1

0xef85,	// (0x000979d3) cam4_indicators_pane_g3_ParamLimits

0xef85,	// (0x000979d3) cam4_indicators_pane_g3

0x7eb3,	// (0x00090901) vid4_indicators_pane_g5_ParamLimits

0x7eb3,	// (0x00090901) vid4_indicators_pane_g5

0xef85,	// (0x000979d3) vid4_progress_pane_g5_ParamLimits

0xef85,	// (0x000979d3) vid4_progress_pane_g5

0x95d1,	// (0x0009201f) main_ncimui_pane_g1

0x9617,	// (0x00092065) ncimui_group_query_pane_ParamLimits

0x9617,	// (0x00092065) ncimui_group_query_pane

0x964b,	// (0x00092099) ncimui_list_pane_ParamLimits

0x964b,	// (0x00092099) ncimui_list_pane

0x9665,	// (0x000920b3) ncimui_text_pane_ParamLimits

0x9665,	// (0x000920b3) ncimui_text_pane

0x970d,	// (0x0009215b) ncimui_text_pane_t1_ParamLimits

0x970d,	// (0x0009215b) ncimui_text_pane_t1

0xd6e1,	// (0x0009612f) ncimui_list_single_graphic_pane_ParamLimits

0xd6e1,	// (0x0009612f) ncimui_list_single_graphic_pane

0x9733,	// (0x00092181) ncimui_query_pane_ParamLimits

0x9733,	// (0x00092181) ncimui_query_pane

0x022c,	// (0x00088c7a) list_highlight_pane_cp013

0xd6f1,	// (0x0009613f) ncim_list_query_list_pane_t1_copy1

0xd6cb,	// (0x00096119) ncim_list_single_graphic_pane_g1

0xd6ff,	// (0x0009614d) ncim_query_button_pane_cp01

0xd707,	// (0x00096155) ncim_query_entry_pane_ParamLimits

0xd707,	// (0x00096155) ncim_query_entry_pane

0xd717,	// (0x00096165) ncimui_query_pane_g1

0xd71f,	// (0x0009616d) ncimui_query_pane_t1_ParamLimits

0xd71f,	// (0x0009616d) ncimui_query_pane_t1

0x022c,	// (0x00088c7a) input_focus_pane_cp012

0xd6a0,	// (0x000960ee) ncim_query_entry_pane_t1

0x0a07,	// (0x00089455) main_im_pane_ParamLimits

0x2659,	// (0x0008b0a7) main_mobtv_pane_ParamLimits

0x2659,	// (0x0008b0a7) main_mobtv_pane

0x8573,	// (0x00090fc1) main_cset6_slider_pane_g18_ParamLimits

0x8573,	// (0x00090fc1) main_cset6_slider_pane_g18

0x85a3,	// (0x00090ff1) main_cset6_slider_pane_g19_ParamLimits

0x85a3,	// (0x00090ff1) main_cset6_slider_pane_g19

0xd735,	// (0x00096183) bg_main_mobtv_pane_ParamLimits

0xd735,	// (0x00096183) bg_main_mobtv_pane

0x9743,	// (0x00092191) main_mobtv_info_pane

0x974c,	// (0x0009219a) main_mobtv_loading_pane_ParamLimits

0x974c,	// (0x0009219a) main_mobtv_loading_pane

0xd743,	// (0x00096191) main_mobtv_pg_channel_list_pane

0xd74d,	// (0x0009619b) main_mobtv_pg_hdr_pane

0x9759,	// (0x000921a7) main_mobtv_programe_curr_pane_ParamLimits

0x9759,	// (0x000921a7) main_mobtv_programe_curr_pane

0x9766,	// (0x000921b4) main_mobtv_programe_next_pane_ParamLimits

0x9766,	// (0x000921b4) main_mobtv_programe_next_pane

0xd756,	// (0x000961a4) popup_mobtv_noti_window

0xca62,	// (0x000954b0) main_tv_pg_hdr_pane_g1

0xd75e,	// (0x000961ac) main_tv_pg_hdr_pane_g2

0xd766,	// (0x000961b4) main_tv_pg_hdr_pane_g3

0xd76e,	// (0x000961bc) main_tv_pg_hdr_pane_g4

0xd776,	// (0x000961c4) main_tv_pg_hdr_pane_g5

0xd780,	// (0x000961ce) main_tv_pg_hdr_pane_g6

0xd78a,	// (0x000961d8) main_tv_pg_hdr_pane_g7

0xd794,	// (0x000961e2) main_tv_pg_hdr_pane_g8

0xd79e,	// (0x000961ec) main_tv_pg_hdr_pane_g9

0xd7a8,	// (0x000961f6) main_tv_pg_hdr_pane_g10

0xd7b2,	// (0x00096200) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00098679) main_tv_pg_hdr_pane_g

0xd7bc,	// (0x0009620a) main_tv_pg_hdr_pane_t1

0xd7ca,	// (0x00096218) main_tv_pg_hdr_pane_t2

0xd7d8,	// (0x00096226) main_tv_pg_hdr_pane_t3

0xd7e8,	// (0x00096236) main_tv_pg_hdr_pane_t4

0xd7f8,	// (0x00096246) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00098690) main_tv_pg_hdr_pane_t

0xd808,	// (0x00096256) single_mobtv_pg_channel_pane_ParamLimits

0xd808,	// (0x00096256) single_mobtv_pg_channel_pane

0xd81a,	// (0x00096268) single_mobtv_pg_channel_table_pane

0xd823,	// (0x00096271) single_mobtv_pg_channel_thumb_pane

0xd82c,	// (0x0009627a) single_tv_pg_channel_pane_g1

0xd835,	// (0x00096283) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0009869b) single_tv_pg_channel_pane_g

0xccc9,	// (0x00095717) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xccc9,	// (0x00095717) bg_single_mobtv_pg_channel_thumb_pane

0xd83e,	// (0x0009628c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd83e,	// (0x0009628c) single_mobtv_pg_channel_thumb_pane_g1

0xd84c,	// (0x0009629a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd84c,	// (0x0009629a) single_mobtv_pg_channel_thumb_pane_g2

0xd858,	// (0x000962a6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd858,	// (0x000962a6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x000986a0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x000986a0) single_mobtv_pg_channel_thumb_pane_g

0xd864,	// (0x000962b2) single_mobtv_pg_channel_thumb_pane_t1

0xd872,	// (0x000962c0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x000986a7) single_mobtv_pg_channel_thumb_pane_t

0xca62,	// (0x000954b0) bg_single_mobtv_pg_channel_table_pane_g1

0xca62,	// (0x000954b0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0009815d) bg_single_mobtv_pg_channel_table_pane_g

0xd880,	// (0x000962ce) single_mobtv_pg_channel_table_pane_t1

0xd88e,	// (0x000962dc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x000986ac) single_mobtv_pg_channel_table_pane_t

0x977b,	// (0x000921c9) main_mobtv_info_pane_g1_ParamLimits

0x977b,	// (0x000921c9) main_mobtv_info_pane_g1

0x9799,	// (0x000921e7) main_mobtv_info_pane_t1_ParamLimits

0x9799,	// (0x000921e7) main_mobtv_info_pane_t1

0x9811,	// (0x0009225f) main_mobtv_info_pane_t2_ParamLimits

0x9811,	// (0x0009225f) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x000986b6) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x000986b6) main_mobtv_info_pane_t

0x98a0,	// (0x000922ee) wait_bar_pane_cp05

0x98b2,	// (0x00092300) main_mobtv_loading_pane_g1_ParamLimits

0x98b2,	// (0x00092300) main_mobtv_loading_pane_g1

0x98c5,	// (0x00092313) main_mobtv_loading_pane_g2_ParamLimits

0x98c5,	// (0x00092313) main_mobtv_loading_pane_g2

0x98d1,	// (0x0009231f) main_mobtv_loading_pane_g3_ParamLimits

0x98d1,	// (0x0009231f) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x000986bd) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x000986bd) main_mobtv_loading_pane_g

0xd89c,	// (0x000962ea) main_mobtv_loading_pane_t1_ParamLimits

0xd89c,	// (0x000962ea) main_mobtv_loading_pane_t1

0xd8b4,	// (0x00096302) main_mobtv_loading_pane_t2_ParamLimits

0xd8b4,	// (0x00096302) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x000986c4) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x000986c4) main_mobtv_loading_pane_t

0x98e4,	// (0x00092332) wait_bar_pane_cp06_ParamLimits

0x98e4,	// (0x00092332) wait_bar_pane_cp06

0xd8d8,	// (0x00096326) main_mobtv_programe_curr_pane_t1

0xd8e6,	// (0x00096334) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x000986c9) main_mobtv_programe_curr_pane_t

0xd8f4,	// (0x00096342) main_mobtv_programe_next_pane_t1

0xd902,	// (0x00096350) main_mobtv_programe_next_pane_t2

0xd910,	// (0x0009635e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x000986ce) main_mobtv_programe_next_pane_t

0x022c,	// (0x00088c7a) bg_popup_mobtv_noti_window_pane

0xd91e,	// (0x0009636c) popup_mobtv_noti_window_g1

0xd926,	// (0x00096374) popup_mobtv_noti_window_t1

0xd934,	// (0x00096382) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x000986d5) popup_mobtv_noti_window_t

0xca62,	// (0x000954b0) bg_popup_mobtv_noti_window_pane_g1

0x022c,	// (0x00088c7a) sc_clock_pane

0x022c,	// (0x00088c7a) main_fs_bigclock_pane

0x90d6,	// (0x00091b24) blid2_tripm_pane_t4_ParamLimits

0x90d6,	// (0x00091b24) blid2_tripm_pane_t4

0x98f3,	// (0x00092341) sc_clock_pane_g1_ParamLimits

0x98f3,	// (0x00092341) sc_clock_pane_g1

0x9905,	// (0x00092353) sc_clock_pane_t1_ParamLimits

0x9905,	// (0x00092353) sc_clock_pane_t1

0x9927,	// (0x00092375) sc_clock_pane_t2_ParamLimits

0x9927,	// (0x00092375) sc_clock_pane_t2

0x993f,	// (0x0009238d) sc_clock_pane_t3_ParamLimits

0x993f,	// (0x0009238d) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x000986da) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x000986da) sc_clock_pane_t

0xa727,	// (0x00093175) main_fs_bigclock_indicator_pane_ParamLimits

0xa727,	// (0x00093175) main_fs_bigclock_indicator_pane

0xcc99,	// (0x000956e7) main_fs_bigclock_pane_g1_ParamLimits

0xcc99,	// (0x000956e7) main_fs_bigclock_pane_g1

0xa733,	// (0x00093181) main_fs_bigclock_pane_t1_ParamLimits

0xa733,	// (0x00093181) main_fs_bigclock_pane_t1

0xa745,	// (0x00093193) main_fs_bigclock_pane_t2_ParamLimits

0xa745,	// (0x00093193) main_fs_bigclock_pane_t2

0xa757,	// (0x000931a5) main_fs_bigclock_pane_t3_ParamLimits

0xa757,	// (0x000931a5) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x000988d9) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x000988d9) main_fs_bigclock_pane_t

0xe54a,	// (0x00096f98) main_fs_bigclock_indicator_pane_g1

0xd61a,	// (0x00096068) ncim_query_content_pane_g2_ParamLimits

0xd61a,	// (0x00096068) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00098667) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00098667) ncim_query_content_pane_g

0x9956,	// (0x000923a4) sc_clock_pane_t4_ParamLimits

0x9956,	// (0x000923a4) sc_clock_pane_t4

0x2659,	// (0x0008b0a7) main_radioblah_pane

0x0fe5,	// (0x00089a33) cell_call4_button_pane_t1_copy1_ParamLimits

0x0fe5,	// (0x00089a33) cell_call4_button_pane_t1_copy1

0x95d9,	// (0x00092027) main_ncimui_pane_t1_ParamLimits

0x95d9,	// (0x00092027) main_ncimui_pane_t1

0x95eb,	// (0x00092039) main_ncimui_pane_t2_ParamLimits

0x95eb,	// (0x00092039) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00098660) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00098660) main_ncimui_pane_t

0xda64,	// (0x000964b2) main_radioblah_anim_pane_ParamLimits

0xda64,	// (0x000964b2) main_radioblah_anim_pane

0xda75,	// (0x000964c3) main_radioblah_info_pane_ParamLimits

0xda75,	// (0x000964c3) main_radioblah_info_pane

0xda89,	// (0x000964d7) main_radioblah_pane_t1_ParamLimits

0xda89,	// (0x000964d7) main_radioblah_pane_t1

0xdaa5,	// (0x000964f3) main_radioblah_pane_t2_ParamLimits

0xdaa5,	// (0x000964f3) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x000986fb) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x000986fb) main_radioblah_pane_t

0x99ff,	// (0x0009244d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99ff,	// (0x0009244d) main_radioblah_rocker_ctrl_pane

0xdaed,	// (0x0009653b) main_radioblah_info_pane_t1_ParamLimits

0xdaed,	// (0x0009653b) main_radioblah_info_pane_t1

0x9a57,	// (0x000924a5) main_radioblah_info_pane_t2_ParamLimits

0x9a57,	// (0x000924a5) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00098704) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00098704) main_radioblah_info_pane_t

0xca62,	// (0x000954b0) main_radioblah_rocker_ctrl_pane_g1

0x9b09,	// (0x00092557) main_radioblah_rocker_ctrl_pane_g2

0x9b11,	// (0x0009255f) main_radioblah_rocker_ctrl_pane_g3

0x9b19,	// (0x00092567) main_radioblah_rocker_ctrl_pane_g4

0x9b21,	// (0x0009256f) main_radioblah_rocker_ctrl_pane_g5

0x9b29,	// (0x00092577) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0009870d) main_radioblah_rocker_ctrl_pane_g

0x93a0,	// (0x00091dee) main_cset_text2_pane_t1_copy1_ParamLimits

0xef47,	// (0x00097995) cam4_image_uncrop_qvga_pane

0xefae,	// (0x000979fc) vid4_image_uncrop_qcif_pane

0xf0d1,	// (0x00097b1f) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0d1,	// (0x00097b1f) cam6_image_uncrop_qvga_pane

0xd25d,	// (0x00095cab) vid6_image_uncrop_qcif_pane_ParamLimits

0xd25d,	// (0x00095cab) vid6_image_uncrop_qcif_pane

0x022c,	// (0x00088c7a) bg_popup_preview_window_pane_cp03

0xd5cc,	// (0x0009601a) list_cset_text2_pane

0xd5d4,	// (0x00096022) main_cset6_text2_pane_g1

0xd5dc,	// (0x0009602a) main_cset6_text2_pane_t1

0x9b31,	// (0x0009257f) list_cset_text2_pane_t1_ParamLimits

0x9b31,	// (0x0009257f) list_cset_text2_pane_t1

0x2659,	// (0x0008b0a7) main_radioblah_pane_ParamLimits

0x988c,	// (0x000922da) main_mobtv_info_pane_t3_ParamLimits

0x988c,	// (0x000922da) main_mobtv_info_pane_t3

0x99ed,	// (0x0009243b) main_radioblah_pane_g1

0x9a27,	// (0x00092475) main_radioblah_info_pane_g1

0x9aae,	// (0x000924fc) main_radioblah_info_pane_t3_ParamLimits

0x9aae,	// (0x000924fc) main_radioblah_info_pane_t3

0x3e48,	// (0x0008c896) highlight_cell_cale_month_pane_ParamLimits

0x3e48,	// (0x0008c896) highlight_cell_cale_month_pane

0x022c,	// (0x00088c7a) main_phob_fisheye_pane

0xcde3,	// (0x00095831) scroll_pane_cp0031_ParamLimits

0xcde3,	// (0x00095831) scroll_pane_cp0031

0xd36b,	// (0x00095db9) wait_bar_pane_cp08_ParamLimits

0x9424,	// (0x00091e72) cset_list_set_pane_copy1_ParamLimits

0xdb27,	// (0x00096575) highlight_cell_cale_month_pane_g1

0x9b4e,	// (0x0009259c) highlight_cell_cale_month_pane_t1

0xcfa6,	// (0x000959f4) list_gen_pane_cp01

0x11ae,	// (0x00089bfc) scroll_pane_01

0xcfe3,	// (0x00095a31) list_single_double_fisheye_pane

0x9b5c,	// (0x000925aa) list_double_fisheye_pane_g1_ParamLimits

0x9b5c,	// (0x000925aa) list_double_fisheye_pane_g1

0x9b68,	// (0x000925b6) list_double_fisheye_pane_g2_ParamLimits

0x9b68,	// (0x000925b6) list_double_fisheye_pane_g2

0x9b7c,	// (0x000925ca) list_double_fisheye_pane_g3_ParamLimits

0x9b7c,	// (0x000925ca) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0009871a) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0009871a) list_double_fisheye_pane_g

0x9ba5,	// (0x000925f3) list_double_fisheye_pane_t1_ParamLimits

0x9ba5,	// (0x000925f3) list_double_fisheye_pane_t1

0x9bc0,	// (0x0009260e) list_double_fisheye_pane_t2_ParamLimits

0x9bc0,	// (0x0009260e) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00098725) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00098725) list_double_fisheye_pane_t

0x022c,	// (0x00088c7a) main_call5_pane

0x9981,	// (0x000923cf) sc_swipe_pane_ParamLimits

0x9981,	// (0x000923cf) sc_swipe_pane

0x9bf5,	// (0x00092643) call5_image_pane_ParamLimits

0x9bf5,	// (0x00092643) call5_image_pane

0x9c12,	// (0x00092660) call5_swipe_1_pane_ParamLimits

0x9c12,	// (0x00092660) call5_swipe_1_pane

0x9c25,	// (0x00092673) call5_swipe_2_pane_ParamLimits

0x9c25,	// (0x00092673) call5_swipe_2_pane

0x9c50,	// (0x0009269e) popup_call5_audio_first_window_ParamLimits

0x9c50,	// (0x0009269e) popup_call5_audio_first_window

0xccc9,	// (0x00095717) call5_swipe_1_pane_g1_ParamLimits

0xccc9,	// (0x00095717) call5_swipe_1_pane_g1

0xdb2f,	// (0x0009657d) call5_swipe_1_pane_g2_ParamLimits

0xdb2f,	// (0x0009657d) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0009872a) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0009872a) call5_swipe_1_pane_g

0xdb3b,	// (0x00096589) call5_swipe_1_pane_t1_ParamLimits

0xdb3b,	// (0x00096589) call5_swipe_1_pane_t1

0xccc9,	// (0x00095717) call5_swipe_2_pane_g1_ParamLimits

0xccc9,	// (0x00095717) call5_swipe_2_pane_g1

0xdb50,	// (0x0009659e) call5_swipe_2_pane_g2_ParamLimits

0xdb50,	// (0x0009659e) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0009872f) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0009872f) call5_swipe_2_pane_g

0xdb5c,	// (0x000965aa) call5_swipe_2_pane_t1_ParamLimits

0xdb5c,	// (0x000965aa) call5_swipe_2_pane_t1

0xdb71,	// (0x000965bf) sc_swipe_pane_g1_ParamLimits

0xdb71,	// (0x000965bf) sc_swipe_pane_g1

0xdb7e,	// (0x000965cc) sc_swipe_pane_g2_ParamLimits

0xdb7e,	// (0x000965cc) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00098734) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00098734) sc_swipe_pane_g

0xdb8a,	// (0x000965d8) sc_swipe_pane_t1_ParamLimits

0xdb8a,	// (0x000965d8) sc_swipe_pane_t1

0x022c,	// (0x00088c7a) main_cmail_launcher_pane

0x9c61,	// (0x000926af) aid_size_cell_cmail_l_ParamLimits

0x9c61,	// (0x000926af) aid_size_cell_cmail_l

0x9c7b,	// (0x000926c9) grid_cmail_l_pane_ParamLimits

0x9c7b,	// (0x000926c9) grid_cmail_l_pane

0x9c96,	// (0x000926e4) cell_cmail_l_pane_ParamLimits

0x9c96,	// (0x000926e4) cell_cmail_l_pane

0x9cbc,	// (0x0009270a) cell_cmail_l_pane_g1_ParamLimits

0x9cbc,	// (0x0009270a) cell_cmail_l_pane_g1

0x9cc8,	// (0x00092716) cell_cmail_l_pane_t1_ParamLimits

0x9cc8,	// (0x00092716) cell_cmail_l_pane_t1

0xdb9f,	// (0x000965ed) cell_cmail_l_pane_t2_ParamLimits

0xdb9f,	// (0x000965ed) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00098739) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00098739) cell_cmail_l_pane_t

0x2659,	// (0x0008b0a7) grid_highlight_pane_cp018_ParamLimits

0x2659,	// (0x0008b0a7) grid_highlight_pane_cp018

0x2513,	// (0x0008af61) main2_pane_ParamLimits

0x2513,	// (0x0008af61) main2_pane

0x0ab2,	// (0x00089500) popup_sp_fs_action_menu_bg_pane_g1

0x0aba,	// (0x00089508) popup_sp_fs_action_menu_bg_pane_g2

0x0ac2,	// (0x00089510) popup_sp_fs_action_menu_bg_pane_g3

0x0aca,	// (0x00089518) popup_sp_fs_action_menu_bg_pane_g4

0x0ad2,	// (0x00089520) popup_sp_fs_action_menu_bg_pane_g5

0x0ada,	// (0x00089528) popup_sp_fs_action_menu_bg_pane_g6

0x0ae2,	// (0x00089530) popup_sp_fs_action_menu_bg_pane_g7

0x0aea,	// (0x00089538) popup_sp_fs_action_menu_bg_pane_g8

0x0af2,	// (0x00089540) popup_sp_fs_action_menu_bg_pane_g9

0x0afa,	// (0x00089548) popup_sp_fs_action_menu_bg_pane_g10

0x0afa,	// (0x00089548) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00097c09) popup_sp_fs_action_menu_bg_pane_g

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g3_g1

0x31bb,	// (0x0008bc09) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_t3_g3_g2

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g3_g3_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00097cb9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00097cb9) list_medium_line_x2_t3_g3_g

0x31d3,	// (0x0008bc21) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31d3,	// (0x0008bc21) list_medium_line_x2_t3_g3_t1

0x31e8,	// (0x0008bc36) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31e8,	// (0x0008bc36) list_medium_line_x2_t3_g3_t2

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00097cc0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00097cc0) list_medium_line_x2_t3_g3_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g2_g1

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g2_g2_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00097cc7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00097cc7) list_medium_line_x2_t3_g2_g

0x3211,	// (0x0008bc5f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3211,	// (0x0008bc5f) list_medium_line_x2_t3_g2_t1

0x3227,	// (0x0008bc75) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3227,	// (0x0008bc75) list_medium_line_x2_t3_g2_t2

0x3239,	// (0x0008bc87) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3239,	// (0x0008bc87) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00097ccc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00097ccc) list_medium_line_x2_t3_g2_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t4_g4_g1

0x3257,	// (0x0008bca5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3257,	// (0x0008bca5) list_medium_line_x2_t4_g4_g2

0x31bb,	// (0x0008bc09) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_t4_g4_g3

0x3263,	// (0x0008bcb1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3263,	// (0x0008bcb1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00097cd3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00097cd3) list_medium_line_x2_t4_g4_g

0x326f,	// (0x0008bcbd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x326f,	// (0x0008bcbd) list_medium_line_x2_t4_g4_t1

0x3286,	// (0x0008bcd4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3286,	// (0x0008bcd4) list_medium_line_x2_t4_g4_t2

0x329b,	// (0x0008bce9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x329b,	// (0x0008bce9) list_medium_line_x2_t4_g4_t3

0x32ad,	// (0x0008bcfb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x32ad,	// (0x0008bcfb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00097cdc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00097cdc) list_medium_line_x2_t4_g4_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g4_g1

0x3257,	// (0x0008bca5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3257,	// (0x0008bca5) list_medium_line_x2_t2_g4_g2

0x31bb,	// (0x0008bc09) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_t2_g4_g3

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g4_g4_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00097d43) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00097d43) list_medium_line_x2_t2_g4_g

0x3e66,	// (0x0008c8b4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3e66,	// (0x0008c8b4) list_medium_line_x2_t2_g4_t1

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00097d4c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00097d4c) list_medium_line_x2_t2_g4_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g3_g1

0x31bb,	// (0x0008bc09) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_t2_g3_g2

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g3_g3_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00097cb9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00097cb9) list_medium_line_x2_t2_g3_g

0x3e7b,	// (0x0008c8c9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3e7b,	// (0x0008c8c9) list_medium_line_x2_t2_g3_t1

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00097d51) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00097d51) list_medium_line_x2_t2_g3_t

0x41ed,	// (0x0008cc3b) main_sp_fs_list_pane_ParamLimits

0x41ed,	// (0x0008cc3b) main_sp_fs_list_pane

0x41f9,	// (0x0008cc47) sp_fs_scroll_pane_ParamLimits

0x41f9,	// (0x0008cc47) sp_fs_scroll_pane

0x4205,	// (0x0008cc53) list_medium_line_x2_t3_t1

0x4215,	// (0x0008cc63) list_medium_line_x2_t3_t2

0x4223,	// (0x0008cc71) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00097d9c) list_medium_line_x2_t3_t

0x4231,	// (0x0008cc7f) list_medium_line_x3_t4_t1

0x4241,	// (0x0008cc8f) list_medium_line_x3_t4_t2

0x424f,	// (0x0008cc9d) list_medium_line_x3_t4_t3

0x4223,	// (0x0008cc71) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00097da3) list_medium_line_x3_t4_t

0x425d,	// (0x0008ccab) list_medium_line_x4_t5_t1

0x426d,	// (0x0008ccbb) list_medium_line_x4_t5_t2

0x424f,	// (0x0008cc9d) list_medium_line_x4_t5_t3

0x427b,	// (0x0008ccc9) list_medium_line_x4_t5_t4

0x4223,	// (0x0008cc71) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00097dac) list_medium_line_x4_t5_t

0x31af,	// (0x0008bbfd) list_medium_line_t4_g4_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_t4_g4_g1

0x3263,	// (0x0008bcb1) list_medium_line_t4_g4_g2_ParamLimits

0x3263,	// (0x0008bcb1) list_medium_line_t4_g4_g2

0x4289,	// (0x0008ccd7) list_medium_line_t4_g4_g3_ParamLimits

0x4289,	// (0x0008ccd7) list_medium_line_t4_g4_g3

0x31c7,	// (0x0008bc15) list_medium_line_t4_g4_g4_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00097db7) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00097db7) list_medium_line_t4_g4_g

0x4295,	// (0x0008cce3) list_medium_line_t4_g4_t1_ParamLimits

0x4295,	// (0x0008cce3) list_medium_line_t4_g4_t1

0x42aa,	// (0x0008ccf8) list_medium_line_t4_g4_t2_ParamLimits

0x42aa,	// (0x0008ccf8) list_medium_line_t4_g4_t2

0x42c0,	// (0x0008cd0e) list_medium_line_t4_g4_t3_ParamLimits

0x42c0,	// (0x0008cd0e) list_medium_line_t4_g4_t3

0x31fc,	// (0x0008bc4a) list_medium_line_t4_g4_t4_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00097dc0) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00097dc0) list_medium_line_t4_g4_t

0x4601,	// (0x0008d04f) chi_dic_find_pane_g1

0x59ac,	// (0x0008e3fa) main_tport_pane

0xce9c,	// (0x000958ea) list_medium_line_plain_t1

0xceaa,	// (0x000958f8) list_medium_line_t2_g2_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t2_g2_g1

0xceb6,	// (0x00095904) list_medium_line_t2_g2_g2_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0009847c) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0009847c) list_medium_line_t2_g2_g

0x8951,	// (0x0009139f) list_medium_line_t2_g2_t1_ParamLimits

0x8951,	// (0x0009139f) list_medium_line_t2_g2_t1

0x896b,	// (0x000913b9) list_medium_line_t2_g2_t2_ParamLimits

0x896b,	// (0x000913b9) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00098481) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00098481) list_medium_line_t2_g2_t

0xcfaf,	// (0x000959fd) aid_sp_fs_list_icon_a_sm

0xcfb7,	// (0x00095a05) aid_sp_fs_list_icon_d

0xcfbf,	// (0x00095a0d) aid_sp_fs_text_primary

0xcfc8,	// (0x00095a16) aid_sp_fs_text_secondary

0xcfd1,	// (0x00095a1f) list_medium_line

0xcfd1,	// (0x00095a1f) list_medium_line_g2

0xcfd1,	// (0x00095a1f) list_medium_line_g3

0xcfd1,	// (0x00095a1f) list_medium_line_plain

0xcfd1,	// (0x00095a1f) list_medium_line_plain_t2

0xcfd1,	// (0x00095a1f) list_medium_line_plain_t3

0xcfd1,	// (0x00095a1f) list_medium_line_right_icon

0xcfd1,	// (0x00095a1f) list_medium_line_right_iconx2

0xcfd1,	// (0x00095a1f) list_medium_line_t2

0xcfd1,	// (0x00095a1f) list_medium_line_t2_g2

0xcfd1,	// (0x00095a1f) list_medium_line_t2_g3

0xcfd1,	// (0x00095a1f) list_medium_line_t2_right_icon

0xcfd1,	// (0x00095a1f) list_medium_line_t2_right_iconx2

0xcfd1,	// (0x00095a1f) list_medium_line_t3

0xcfd1,	// (0x00095a1f) list_medium_line_t3_g2

0xcfd1,	// (0x00095a1f) list_medium_line_t3_g3

0xcfd1,	// (0x00095a1f) list_medium_line_t3_right_iconx2

0xcfda,	// (0x00095a28) list_medium_line_t4_g4

0xcfe3,	// (0x00095a31) list_medium_line_x2

0xcfe3,	// (0x00095a31) list_medium_line_x2_t2_g2

0xcfe3,	// (0x00095a31) list_medium_line_x2_t2_g3

0xcfe3,	// (0x00095a31) list_medium_line_x2_t2_g4

0xcfe3,	// (0x00095a31) list_medium_line_x2_t3

0xcfe3,	// (0x00095a31) list_medium_line_x2_t3_g2

0xcfe3,	// (0x00095a31) list_medium_line_x2_t3_g3

0xcfe3,	// (0x00095a31) list_medium_line_x2_t3_g4

0xcfe3,	// (0x00095a31) list_medium_line_x2_t4_g2

0xcfe3,	// (0x00095a31) list_medium_line_x2_t4_g4

0xcfec,	// (0x00095a3a) list_medium_line_x3

0xcfec,	// (0x00095a3a) list_medium_line_x3_t4

0xcfec,	// (0x00095a3a) list_medium_line_x3_t4_g4

0xcfda,	// (0x00095a28) list_medium_line_x4_t4

0xcfda,	// (0x00095a28) list_medium_line_x4_t4_g7

0xcfda,	// (0x00095a28) list_medium_line_x4_t5

0xcff5,	// (0x00095a43) list_single_fs_dyc_pane_ParamLimits

0xcff5,	// (0x00095a43) list_single_fs_dyc_pane

0x31af,	// (0x0008bbfd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x4_t4_g7_g1

0xd4fb,	// (0x00095f49) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd4fb,	// (0x00095f49) list_medium_line_x4_t4_g7_g2

0xd507,	// (0x00095f55) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd507,	// (0x00095f55) list_medium_line_x4_t4_g7_g3

0xd516,	// (0x00095f64) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd516,	// (0x00095f64) list_medium_line_x4_t4_g7_g4

0xd522,	// (0x00095f70) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd522,	// (0x00095f70) list_medium_line_x4_t4_g7_g5

0xd531,	// (0x00095f7f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd531,	// (0x00095f7f) list_medium_line_x4_t4_g7_g6

0xd540,	// (0x00095f8e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd540,	// (0x00095f8e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00098646) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00098646) list_medium_line_x4_t4_g7_g

0xd54c,	// (0x00095f9a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd54c,	// (0x00095f9a) list_medium_line_x4_t4_g7_t1

0xd561,	// (0x00095faf) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd561,	// (0x00095faf) list_medium_line_x4_t4_g7_t2

0xd576,	// (0x00095fc4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd576,	// (0x00095fc4) list_medium_line_x4_t4_g7_t3

0xd58b,	// (0x00095fd9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd58b,	// (0x00095fd9) list_medium_line_x4_t4_g7_t4

0xd59d,	// (0x00095feb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd59d,	// (0x00095feb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00098655) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00098655) list_medium_line_x4_t4_g7_t

0xd5af,	// (0x00095ffd) list_single_dyc_row_pane_ParamLimits

0xd5af,	// (0x00095ffd) list_single_dyc_row_pane

0x9be2,	// (0x00092630) call5_gesture_pane_ParamLimits

0x9be2,	// (0x00092630) call5_gesture_pane

0x9c38,	// (0x00092686) call5_windows_pane_ParamLimits

0x9c38,	// (0x00092686) call5_windows_pane

0x9cde,	// (0x0009272c) call5_swipe_1_pane_cp_ParamLimits

0x9cde,	// (0x0009272c) call5_swipe_1_pane_cp

0x9cea,	// (0x00092738) call5_swipe_2_pane_cp_ParamLimits

0x9cea,	// (0x00092738) call5_swipe_2_pane_cp

0x4a6d,	// (0x0008d4bb) call5_image_pane_cp

0x9cf6,	// (0x00092744) popup_call5_audio_first_window_cp_ParamLimits

0x9cf6,	// (0x00092744) popup_call5_audio_first_window_cp

0xdb71,	// (0x000965bf) call5_swipe_1_pane_g1_cp_ParamLimits

0xdb71,	// (0x000965bf) call5_swipe_1_pane_g1_cp

0xdbb1,	// (0x000965ff) call5_swipe_1_pane_g2_cp

0xdb8a,	// (0x000965d8) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb8a,	// (0x000965d8) call5_swipe_1_pane_t1_cp

0xdb71,	// (0x000965bf) call5_swipe_2_pane_g1_cp_ParamLimits

0xdb71,	// (0x000965bf) call5_swipe_2_pane_g1_cp

0xdbb9,	// (0x00096607) call5_swipe_2_pane_g2_cp

0xdbc1,	// (0x0009660f) call5_swipe_2_pane_t1_cp_ParamLimits

0xdbc1,	// (0x0009660f) call5_swipe_2_pane_t1_cp

0x2659,	// (0x0008b0a7) main_sp_fs_email_pane

0xdbd6,	// (0x00096624) main_sp_fs_listscroll_pane_te

0xdbdf,	// (0x0009662d) popup_sp_fs_action_menu_pane_ParamLimits

0xdbdf,	// (0x0009662d) popup_sp_fs_action_menu_pane

0xca62,	// (0x000954b0) bg_sp_fs_ctrlbar_pane_g1

0xdc21,	// (0x0009666f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdc2a,	// (0x00096678) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdc33,	// (0x00096681) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xca62,	// (0x000954b0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0009873e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc845,	// (0x00095293) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc845,	// (0x00095293) bg_sp_fs_ctrlbar_ddmenu_pane

0xdc3c,	// (0x0009668a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdc3c,	// (0x0009668a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdc48,	// (0x00096696) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdc48,	// (0x00096696) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00098747) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00098747) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdc54,	// (0x000966a2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdc54,	// (0x000966a2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdc6e,	// (0x000966bc) list_medium_line_t2_right_icon_g1

0x9d02,	// (0x00092750) list_medium_line_t2_right_icon_t1

0x9d12,	// (0x00092760) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0009874c) list_medium_line_t2_right_icon_t

0xc55a,	// (0x00094fa8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc55a,	// (0x00094fa8) bg_sp_fs_ctrlbar_pane

0x9d6a,	// (0x000927b8) main_sp_fs_ctrlbar_button_pane_cp01

0x9d72,	// (0x000927c0) main_sp_fs_ctrlbar_ddmenu_pane

0xf0df,	// (0x00097b2d) main_sp_fs_ctrlbar_pane_g1

0xdcae,	// (0x000966fc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00098751) main_sp_fs_ctrlbar_pane_g

0xdcba,	// (0x00096708) main_sp_fs_ctrlbar_pane_t1

0x9d7c,	// (0x000927ca) main_sp_fs_ctrlbar_pane

0x9da0,	// (0x000927ee) main_sp_fs_listscroll_pane_te_cp01

0x9dc0,	// (0x0009280e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9dc0,	// (0x0009280e) popup_sp_fs_action_menu_pane_cp01

0x2659,	// (0x0008b0a7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2659,	// (0x0008b0a7) bg_sp_fs_highlight_list_pane_cp01

0xdccf,	// (0x0009671d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdccf,	// (0x0009671d) sp_fs_action_menu_list_gene_pane_g1

0xdcde,	// (0x0009672c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdcde,	// (0x0009672c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00098756) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00098756) sp_fs_action_menu_list_gene_pane_g

0xdceb,	// (0x00096739) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdceb,	// (0x00096739) sp_fs_action_menu_list_gene_pane_t1

0xdd03,	// (0x00096751) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdd03,	// (0x00096751) sp_fs_action_menu_list_gene_pane

0xdd22,	// (0x00096770) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdd22,	// (0x00096770) popup_sp_fs_action_menu_bg_pane

0xdd30,	// (0x0009677e) sp_fs_action_menu_list_pane_ParamLimits

0xdd30,	// (0x0009677e) sp_fs_action_menu_list_pane

0xdd50,	// (0x0009679e) sp_fs_scroll_pane_cp01_ParamLimits

0xdd50,	// (0x0009679e) sp_fs_scroll_pane_cp01

0x9dda,	// (0x00092828) list_medium_line_plain_t2_t1

0x9dea,	// (0x00092838) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0009875b) list_medium_line_plain_t2_t

0x9dfa,	// (0x00092848) list_medium_line_plain_t3_t1

0x9e0a,	// (0x00092858) list_medium_line_plain_t3_t2

0x9e18,	// (0x00092866) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00098760) list_medium_line_plain_t3_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t2_g2_g1

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g2_g2_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00097cc7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00097cc7) list_medium_line_x2_t2_g2_g

0x4295,	// (0x0008cce3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4295,	// (0x0008cce3) list_medium_line_x2_t2_g2_t1

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00098767) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00098767) list_medium_line_x2_t2_g2_t

0x31af,	// (0x0008bbfd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t4_g2_g1

0xdd76,	// (0x000967c4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdd76,	// (0x000967c4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0009876c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0009876c) list_medium_line_x2_t4_g2_g

0x9e26,	// (0x00092874) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9e26,	// (0x00092874) list_medium_line_x2_t4_g2_t1

0x9e3d,	// (0x0009288b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9e3d,	// (0x0009288b) list_medium_line_x2_t4_g2_t2

0x9e52,	// (0x000928a0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9e52,	// (0x000928a0) list_medium_line_x2_t4_g2_t3

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00098771) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00098771) list_medium_line_x2_t4_g2_t

0xdd88,	// (0x000967d6) list_medium_line_t3_right_iconx2_g1

0xdc6e,	// (0x000966bc) list_medium_line_t3_right_iconx2_g2

0x9e64,	// (0x000928b2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0009877a) list_medium_line_t3_right_iconx2_g

0x9e6e,	// (0x000928bc) list_medium_line_t3_right_iconx2_t1

0x9e7e,	// (0x000928cc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00098781) list_medium_line_t3_right_iconx2_t

0x31af,	// (0x0008bbfd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x3_t4_g4_g1

0x31bb,	// (0x0008bc09) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x3_t4_g4_g2

0x3263,	// (0x0008bcb1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3263,	// (0x0008bcb1) list_medium_line_x3_t4_g4_g3

0xdd90,	// (0x000967de) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdd90,	// (0x000967de) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00098786) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00098786) list_medium_line_x3_t4_g4_g

0x9e8c,	// (0x000928da) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9e8c,	// (0x000928da) list_medium_line_x3_t4_g4_t1

0x9ea3,	// (0x000928f1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9ea3,	// (0x000928f1) list_medium_line_x3_t4_g4_t2

0xdd9c,	// (0x000967ea) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdd9c,	// (0x000967ea) list_medium_line_x3_t4_g4_t3

0xddb1,	// (0x000967ff) list_medium_line_x3_t4_g4_t4_ParamLimits

0xddb1,	// (0x000967ff) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0009878f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0009878f) list_medium_line_x3_t4_g4_t

0x9ebc,	// (0x0009290a) list_single_dyc_row_text_pane_t1_ParamLimits

0x9ebc,	// (0x0009290a) list_single_dyc_row_text_pane_t1

0x9f05,	// (0x00092953) list_single_dyc_row_text_pane_t2_ParamLimits

0x9f05,	// (0x00092953) list_single_dyc_row_text_pane_t2

0xddce,	// (0x0009681c) list_single_dyc_row_text_pane_t3_ParamLimits

0xddce,	// (0x0009681c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00098798) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00098798) list_single_dyc_row_text_pane_t

0xdde0,	// (0x0009682e) list_single_dyc_row_pane_g1_ParamLimits

0xdde0,	// (0x0009682e) list_single_dyc_row_pane_g1

0xddec,	// (0x0009683a) list_single_dyc_row_pane_g2_ParamLimits

0xddec,	// (0x0009683a) list_single_dyc_row_pane_g2

0xddf8,	// (0x00096846) list_single_dyc_row_pane_g3_ParamLimits

0xddf8,	// (0x00096846) list_single_dyc_row_pane_g3

0xde04,	// (0x00096852) list_single_dyc_row_pane_g4_ParamLimits

0xde04,	// (0x00096852) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0009879f) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0009879f) list_single_dyc_row_pane_g

0xde10,	// (0x0009685e) list_single_dyc_row_text_pane_ParamLimits

0xde10,	// (0x0009685e) list_single_dyc_row_text_pane

0x022c,	// (0x00088c7a) bg_sp_fs_scroll_pane

0xde2f,	// (0x0009687d) thumb_sp_fs_scroll_pane

0xceaa,	// (0x000958f8) list_medium_line_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_g1

0xde38,	// (0x00096886) list_medium_line_t1_ParamLimits

0xde38,	// (0x00096886) list_medium_line_t1

0x31af,	// (0x0008bbfd) list_medium_line_x2_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_g1

0x31bb,	// (0x0008bc09) list_medium_line_x2_g2_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x000987a8) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x000987a8) list_medium_line_x2_g

0xde4d,	// (0x0009689b) list_medium_line_x2_t1_ParamLimits

0xde4d,	// (0x0009689b) list_medium_line_x2_t1

0x31af,	// (0x0008bbfd) list_medium_line_x3_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x3_g1

0x31bb,	// (0x0008bc09) list_medium_line_x3_g2_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x000987a8) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x000987a8) list_medium_line_x3_g

0xde4d,	// (0x0009689b) list_medium_line_x3_t1_ParamLimits

0xde4d,	// (0x0009689b) list_medium_line_x3_t1

0xde63,	// (0x000968b1) thumb_sp_fs_scroll_pane_g1

0xde6c,	// (0x000968ba) thumb_sp_fs_scroll_pane_g2

0xde75,	// (0x000968c3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x000987ad) thumb_sp_fs_scroll_pane_g

0xde63,	// (0x000968b1) bg_sp_fs_scroll_pane_g1

0xde6c,	// (0x000968ba) bg_sp_fs_scroll_pane_g2

0xde75,	// (0x000968c3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x000987ad) bg_sp_fs_scroll_pane_g

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x31af,	// (0x0008bbfd) list_medium_line_x2_t3_g4_g1

0x3257,	// (0x0008bca5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3257,	// (0x0008bca5) list_medium_line_x2_t3_g4_g2

0x31bb,	// (0x0008bc09) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31bb,	// (0x0008bc09) list_medium_line_x2_t3_g4_g3

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g4_g4_ParamLimits

0x31c7,	// (0x0008bc15) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00097d43) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00097d43) list_medium_line_x2_t3_g4_g

0x9f5f,	// (0x000929ad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9f5f,	// (0x000929ad) list_medium_line_x2_t3_g4_t1

0x9f75,	// (0x000929c3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9f75,	// (0x000929c3) list_medium_line_x2_t3_g4_t2

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31fc,	// (0x0008bc4a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x000987b4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x000987b4) list_medium_line_x2_t3_g4_t

0xceaa,	// (0x000958f8) list_medium_line_g2_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_g2_g1

0xceb6,	// (0x00095904) list_medium_line_g2_g2_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0009847c) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0009847c) list_medium_line_g2_g

0xde7e,	// (0x000968cc) list_medium_line_g2_t1_ParamLimits

0xde7e,	// (0x000968cc) list_medium_line_g2_t1

0xceaa,	// (0x000958f8) list_medium_line_t3_g2_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t3_g2_g1

0xceb6,	// (0x00095904) list_medium_line_t3_g2_g2_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0009847c) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0009847c) list_medium_line_t3_g2_g

0x9f8e,	// (0x000929dc) list_medium_line_t3_g2_t1_ParamLimits

0x9f8e,	// (0x000929dc) list_medium_line_t3_g2_t1

0x9fa5,	// (0x000929f3) list_medium_line_t3_g2_t2_ParamLimits

0x9fa5,	// (0x000929f3) list_medium_line_t3_g2_t2

0x9fba,	// (0x00092a08) list_medium_line_t3_g2_t3_ParamLimits

0x9fba,	// (0x00092a08) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x000987bb) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x000987bb) list_medium_line_t3_g2_t

0xdc6e,	// (0x000966bc) list_medium_line_right_icon_g1

0xde93,	// (0x000968e1) list_medium_line_right_icon_t1

0xceaa,	// (0x000958f8) list_medium_line_t2_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t2_g1

0x9fd3,	// (0x00092a21) list_medium_line_t2_t1_ParamLimits

0x9fd3,	// (0x00092a21) list_medium_line_t2_t1

0x9fed,	// (0x00092a3b) list_medium_line_t2_t2_ParamLimits

0x9fed,	// (0x00092a3b) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x000987c2) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x000987c2) list_medium_line_t2_t

0xceaa,	// (0x000958f8) list_medium_line_t3_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t3_g1

0xa002,	// (0x00092a50) list_medium_line_t3_t1_ParamLimits

0xa002,	// (0x00092a50) list_medium_line_t3_t1

0xa01c,	// (0x00092a6a) list_medium_line_t3_t2_ParamLimits

0xa01c,	// (0x00092a6a) list_medium_line_t3_t2

0xa031,	// (0x00092a7f) list_medium_line_t3_t3_ParamLimits

0xa031,	// (0x00092a7f) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x000987c7) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x000987c7) list_medium_line_t3_t

0xceaa,	// (0x000958f8) list_medium_line_g3_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_g3_g1

0xdea1,	// (0x000968ef) list_medium_line_g3_g2_ParamLimits

0xdea1,	// (0x000968ef) list_medium_line_g3_g2

0xceb6,	// (0x00095904) list_medium_line_g3_g3_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x000987ce) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x000987ce) list_medium_line_g3_g

0xdead,	// (0x000968fb) list_medium_line_g3_t1_ParamLimits

0xdead,	// (0x000968fb) list_medium_line_g3_t1

0xceaa,	// (0x000958f8) list_medium_line_t2_g3_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t2_g3_g1

0xdea1,	// (0x000968ef) list_medium_line_t2_g3_g2_ParamLimits

0xdea1,	// (0x000968ef) list_medium_line_t2_g3_g2

0xceb6,	// (0x00095904) list_medium_line_t2_g3_g3_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x000987ce) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x000987ce) list_medium_line_t2_g3_g

0xa046,	// (0x00092a94) list_medium_line_t2_g3_t1_ParamLimits

0xa046,	// (0x00092a94) list_medium_line_t2_g3_t1

0xa05d,	// (0x00092aab) list_medium_line_t2_g3_t2_ParamLimits

0xa05d,	// (0x00092aab) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x000987d5) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x000987d5) list_medium_line_t2_g3_t

0xceaa,	// (0x000958f8) list_medium_line_t3_g3_g1_ParamLimits

0xceaa,	// (0x000958f8) list_medium_line_t3_g3_g1

0xdea1,	// (0x000968ef) list_medium_line_t3_g3_g2_ParamLimits

0xdea1,	// (0x000968ef) list_medium_line_t3_g3_g2

0xceb6,	// (0x00095904) list_medium_line_t3_g3_g3_ParamLimits

0xceb6,	// (0x00095904) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x000987ce) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x000987ce) list_medium_line_t3_g3_g

0xa076,	// (0x00092ac4) list_medium_line_t3_g3_t1_ParamLimits

0xa076,	// (0x00092ac4) list_medium_line_t3_g3_t1

0xa08f,	// (0x00092add) list_medium_line_t3_g3_t2_ParamLimits

0xa08f,	// (0x00092add) list_medium_line_t3_g3_t2

0xa0a5,	// (0x00092af3) list_medium_line_t3_g3_t3_ParamLimits

0xa0a5,	// (0x00092af3) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x000987da) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x000987da) list_medium_line_t3_g3_t

0xdd88,	// (0x000967d6) list_medium_line_right_iconx2_g1

0xdc6e,	// (0x000966bc) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x000987e1) list_medium_line_right_iconx2_g

0xdec2,	// (0x00096910) list_medium_line_right_iconx2_t1

0xdd88,	// (0x000967d6) list_medium_line_t2_right_iconx2_g1

0xdc6e,	// (0x000966bc) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x000987e1) list_medium_line_t2_right_iconx2_g

0xa0bf,	// (0x00092b0d) list_medium_line_t2_right_iconx2_t1

0xa0cf,	// (0x00092b1d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x000987e6) list_medium_line_t2_right_iconx2_t

0xded0,	// (0x0009691e) list_medium_line_x4_t4_t1

0xa0dd,	// (0x00092b2b) list_medium_line_x4_t4_t2

0xa0ed,	// (0x00092b3b) list_medium_line_x4_t4_t3

0xa0fd,	// (0x00092b4b) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x000987eb) list_medium_line_x4_t4_t

0xa150,	// (0x00092b9e) tport_appsw_pane_ParamLimits

0xa150,	// (0x00092b9e) tport_appsw_pane

0xa161,	// (0x00092baf) tport_contact_pane_ParamLimits

0xa161,	// (0x00092baf) tport_contact_pane

0xa17a,	// (0x00092bc8) tport_listscroll_pane_ParamLimits

0xa17a,	// (0x00092bc8) tport_listscroll_pane

0xa195,	// (0x00092be3) cell_tport_appsw_pane_ParamLimits

0xa195,	// (0x00092be3) cell_tport_appsw_pane

0x1074,	// (0x00089ac2) tport_appsw_pane_g1_ParamLimits

0x1074,	// (0x00089ac2) tport_appsw_pane_g1

0xdede,	// (0x0009692c) tport_contact_pane_g1

0xdee7,	// (0x00096935) tport_contact_pane_t1

0xdef5,	// (0x00096943) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x000987f4) tport_contact_pane_t

0xdf03,	// (0x00096951) list_tport_pane

0xdf0c,	// (0x0009695a) scroll_pane_cp_030

0xdf1d,	// (0x0009696b) cell_tport_appsw_pane_g1

0xdf2d,	// (0x0009697b) cell_tport_appsw_pane_t1

0x022c,	// (0x00088c7a) grid_highlight_pane_cp019

0xa1d5,	// (0x00092c23) list_tport_double_graphic_pane_ParamLimits

0xa1d5,	// (0x00092c23) list_tport_double_graphic_pane

0x2659,	// (0x0008b0a7) list_highlight_pane_cp023_ParamLimits

0x2659,	// (0x0008b0a7) list_highlight_pane_cp023

0xa1e2,	// (0x00092c30) list_tport_double_graphic_pane_g1_ParamLimits

0xa1e2,	// (0x00092c30) list_tport_double_graphic_pane_g1

0xa1ef,	// (0x00092c3d) list_tport_double_graphic_pane_t1_ParamLimits

0xa1ef,	// (0x00092c3d) list_tport_double_graphic_pane_t1

0xa204,	// (0x00092c52) list_tport_double_graphic_pane_t2_ParamLimits

0xa204,	// (0x00092c52) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00098800) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00098800) list_tport_double_graphic_pane_t

0x022c,	// (0x00088c7a) main_cale_note_pane

0x80d2,	// (0x00090b20) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x80d2,	// (0x00090b20) cell_vitu2_function_top_wide_pane_cp01

0x98a0,	// (0x000922ee) wait_bar_pane_cp05_ParamLimits

0x022c,	// (0x00088c7a) listscroll_cmail_pane

0xdf43,	// (0x00096991) list_cmail_pane

0xa220,	// (0x00092c6e) list_cmail_body_pane

0xa238,	// (0x00092c86) list_single_cmail_header_caption_pane

0xa254,	// (0x00092ca2) list_single_cmail_header_detail_pane_ParamLimits

0xa254,	// (0x00092ca2) list_single_cmail_header_detail_pane

0xa280,	// (0x00092cce) list_single_cmail_header_caption_pane_t1

0xa290,	// (0x00092cde) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa290,	// (0x00092cde) list_single_cmail_header_detail_pane_g1

0xdf63,	// (0x000969b1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdf63,	// (0x000969b1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00098805) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00098805) list_single_cmail_header_detail_pane_g

0xdf7c,	// (0x000969ca) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdf7c,	// (0x000969ca) list_single_cmail_header_detail_pane_t1

0xdfae,	// (0x000969fc) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdfae,	// (0x000969fc) list_single_cmail_header_editor_pane_bg

0xdfc0,	// (0x00096a0e) list_cmail_body_pane_g1

0xdfc9,	// (0x00096a17) list_cmail_body_pane_t1

0x1094,	// (0x00089ae2) list_single_cmail_header_editor_pane_bg_g1

0x0e1f,	// (0x0008986d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x10a4,	// (0x00089af2) list_single_cmail_header_editor_pane_bg_g1_copy2

0x109c,	// (0x00089aea) list_single_cmail_header_editor_pane_bg_g1_copy3

0x12b0,	// (0x00089cfe) list_single_cmail_header_editor_pane_bg_g1_copy4

0x10c4,	// (0x00089b12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x10b4,	// (0x00089b02) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x10bc,	// (0x00089b0a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0dff,	// (0x0008984d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa2ce,	// (0x00092d1c) calenote_gesture_pane_ParamLimits

0xa2ce,	// (0x00092d1c) calenote_gesture_pane

0xa2ee,	// (0x00092d3c) calenote_window_pane_ParamLimits

0xa2ee,	// (0x00092d3c) calenote_window_pane

0xdfd7,	// (0x00096a25) popup_note_window_cp01

0xa30a,	// (0x00092d58) calenote_swipe_1_pane_ParamLimits

0xa30a,	// (0x00092d58) calenote_swipe_1_pane

0x9cea,	// (0x00092738) calenote_swipe_2_pane_ParamLimits

0x9cea,	// (0x00092738) calenote_swipe_2_pane

0xdb71,	// (0x000965bf) calenote_swipe_1_pane_g1_ParamLimits

0xdb71,	// (0x000965bf) calenote_swipe_1_pane_g1

0xdb7e,	// (0x000965cc) calenote_swipe_1_pane_g2_ParamLimits

0xdb7e,	// (0x000965cc) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00098734) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00098734) calenote_swipe_1_pane_g

0xdfe9,	// (0x00096a37) calenote_swipe_1_pane_t1_ParamLimits

0xdfe9,	// (0x00096a37) calenote_swipe_1_pane_t1

0xdb71,	// (0x000965bf) calenote_swipe_2_pane_g1_ParamLimits

0xdb71,	// (0x000965bf) calenote_swipe_2_pane_g1

0xe008,	// (0x00096a56) calenote_swipe_2_pane_g2_ParamLimits

0xe008,	// (0x00096a56) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00098811) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00098811) calenote_swipe_2_pane_g

0xe014,	// (0x00096a62) calenote_swipe_2_pane_t1_ParamLimits

0xe014,	// (0x00096a62) calenote_swipe_2_pane_t1

0x022c,	// (0x00088c7a) main_mup_navstr_pane

0x6d53,	// (0x0008f7a1) main_mup3_pane_t7_ParamLimits

0x6d53,	// (0x0008f7a1) main_mup3_pane_t7

0xed71,	// (0x000977bf) main_mp4_pane_g6_ParamLimits

0xed71,	// (0x000977bf) main_mp4_pane_g6

0xef15,	// (0x00097963) main_image3_pane_t4_ParamLimits

0xef15,	// (0x00097963) main_image3_pane_t4

0xa31f,	// (0x00092d6d) popup_navstr_preview_pane_ParamLimits

0xa31f,	// (0x00092d6d) popup_navstr_preview_pane

0xa333,	// (0x00092d81) scroll_navstr_pane_ParamLimits

0xa333,	// (0x00092d81) scroll_navstr_pane

0x022c,	// (0x00088c7a) bg_popup_preview_window_pane_cp04

0xe03b,	// (0x00096a89) popup_navstr_preview_pane_t1

0xa347,	// (0x00092d95) scroll_navstr_pane_g1_ParamLimits

0xa347,	// (0x00092d95) scroll_navstr_pane_g1

0xa35b,	// (0x00092da9) scroll_navstr_pane_t1_ParamLimits

0xa35b,	// (0x00092da9) scroll_navstr_pane_t1

0xdfe0,	// (0x00096a2e) bg_button_pane_cp014

0xdfe0,	// (0x00096a2e) bg_button_pane_cp030

0x9b88,	// (0x000925d6) list_double_fisheye_pane_g4_ParamLimits

0x9b88,	// (0x000925d6) list_double_fisheye_pane_g4

0x9b94,	// (0x000925e2) list_double_fisheye_pane_g5_ParamLimits

0x9b94,	// (0x000925e2) list_double_fisheye_pane_g5

0xdf4b,	// (0x00096999) sp_fs_scroll_pane_cp03

0xf0df,	// (0x00097b2d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdcae,	// (0x000966fc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00098751) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdcba,	// (0x00096708) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa216,	// (0x00092c64) sp_fs_scroll_pane_cp02

0x0b1d,	// (0x0008956b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b1d,	// (0x0008956b) popup_sp_fs_calendar_preview_list_single_pane

0x022c,	// (0x00088c7a) main_cam6_pano_pane

0x2659,	// (0x0008b0a7) main_mup3_pane_ParamLimits

0x022c,	// (0x00088c7a) main_phacti_pane

0x9773,	// (0x000921c1) bg_button_pane_cp11

0x978d,	// (0x000921db) main_mobtv_info_pane_g2_ParamLimits

0x978d,	// (0x000921db) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x000986b1) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x000986b1) main_mobtv_info_pane_g

0x9968,	// (0x000923b6) sc_clock_pane_t5_ParamLimits

0x9968,	// (0x000923b6) sc_clock_pane_t5

0x99ed,	// (0x0009243b) main_radioblah_pane_g1_ParamLimits

0xdabd,	// (0x0009650b) main_radioblah_pane_t3_ParamLimits

0xdabd,	// (0x0009650b) main_radioblah_pane_t3

0xdad5,	// (0x00096523) main_radioblah_pane_t4_ParamLimits

0xdad5,	// (0x00096523) main_radioblah_pane_t4

0x9a15,	// (0x00092463) main_radioblah_text_pane_ParamLimits

0x9a15,	// (0x00092463) main_radioblah_text_pane

0x9a27,	// (0x00092475) main_radioblah_info_pane_g1_ParamLimits

0x9ac2,	// (0x00092510) main_radioblah_info_pane_t4_ParamLimits

0x9ac2,	// (0x00092510) main_radioblah_info_pane_t4

0x2659,	// (0x0008b0a7) main_sp_fs_calendar_pane

0xa371,	// (0x00092dbf) main_phacti_pane_g1

0xa379,	// (0x00092dc7) phacti_note_pane_ParamLimits

0xa379,	// (0x00092dc7) phacti_note_pane

0xe052,	// (0x00096aa0) phacti_term_pane_ParamLimits

0xe052,	// (0x00096aa0) phacti_term_pane

0xe067,	// (0x00096ab5) phacti_note_pane_t1_ParamLimits

0xe067,	// (0x00096ab5) phacti_note_pane_t1

0xe07e,	// (0x00096acc) phacti_term_pane_g1

0xe086,	// (0x00096ad4) phacti_term_pane_t1_ParamLimits

0xe086,	// (0x00096ad4) phacti_term_pane_t1

0xe0b0,	// (0x00096afe) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe0b8,	// (0x00096b06) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0009881b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe0c0,	// (0x00096b0e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe0c0,	// (0x00096b0e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe0d6,	// (0x00096b24) aid_popup_sp_fs_bg_corner_pane

0xca62,	// (0x000954b0) popup_sp_fs_calendar_preview_bg_pane_g1

0x022c,	// (0x00088c7a) popup_sp_fs_calendar_preview_bg_pane

0xe0de,	// (0x00096b2c) popup_sp_fs_calendar_preview_list_pane

0x2659,	// (0x0008b0a7) bg_main_sp_fs_cale_pane_ParamLimits

0x2659,	// (0x0008b0a7) bg_main_sp_fs_cale_pane

0xe0ef,	// (0x00096b3d) listscroll_cale_mrui_pane_ParamLimits

0xe0ef,	// (0x00096b3d) listscroll_cale_mrui_pane

0xe103,	// (0x00096b51) listscroll_sp_fs_schedule_track_pane

0xe10c,	// (0x00096b5a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe10c,	// (0x00096b5a) main_sp_fs_ctrlbar_pane_cp01

0xe11d,	// (0x00096b6b) main_sp_fs_ribbon_pane

0xe125,	// (0x00096b73) popup_sp_fs_cale_preview_window

0xa3d4,	// (0x00092e22) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa3d4,	// (0x00092e22) list_single_sp_fs_schedule_track_pane

0x2659,	// (0x0008b0a7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2659,	// (0x0008b0a7) bg_sp_fs_highlight_list_pane_cp03

0xa3ea,	// (0x00092e38) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa3ea,	// (0x00092e38) list_single_sp_fs_schedule_track_pane_g1

0xa3f6,	// (0x00092e44) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa3f6,	// (0x00092e44) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00098820) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00098820) list_single_sp_fs_schedule_track_pane_g

0xa402,	// (0x00092e50) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa402,	// (0x00092e50) list_single_sp_fs_schedule_track_pane_t1

0xa41c,	// (0x00092e6a) sp_fs_schedule_track_pane_ParamLimits

0xa41c,	// (0x00092e6a) sp_fs_schedule_track_pane

0xe137,	// (0x00096b85) sp_fs_schedule_track_pane_g1

0xe13f,	// (0x00096b8d) sp_fs_schedule_track_pane_g2

0xe147,	// (0x00096b95) sp_fs_schedule_track_pane_g3

0xe14f,	// (0x00096b9d) sp_fs_schedule_track_pane_g4

0xe157,	// (0x00096ba5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00098825) sp_fs_schedule_track_pane_g

0x1094,	// (0x00089ae2) bg_sp_fs_schedule_viewer_highlight_g1

0x0e1f,	// (0x0008986d) bg_sp_fs_schedule_viewer_highlight_g2

0x109c,	// (0x00089aea) bg_sp_fs_schedule_viewer_highlight_g3

0x10a4,	// (0x00089af2) bg_sp_fs_schedule_viewer_highlight_g4

0x12b0,	// (0x00089cfe) bg_sp_fs_schedule_viewer_highlight_g5

0x10b4,	// (0x00089b02) bg_sp_fs_schedule_viewer_highlight_g6

0x10bc,	// (0x00089b0a) bg_sp_fs_schedule_viewer_highlight_g7

0x10c4,	// (0x00089b12) bg_sp_fs_schedule_viewer_highlight_g8

0x0dff,	// (0x0008984d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00098830) bg_sp_fs_schedule_viewer_highlight_g

0x022c,	// (0x00088c7a) bg_main_sp_fs_ribbon_pane

0xa42d,	// (0x00092e7b) main_sp_fs_ribbon_pane_g1

0xe15f,	// (0x00096bad) main_sp_fs_ribbon_pane_t1

0xa436,	// (0x00092e84) main_sp_fs_ribbon_pane_t2

0xe16e,	// (0x00096bbc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00098843) main_sp_fs_ribbon_pane_t

0xe17d,	// (0x00096bcb) main_sp_fs_ribbon_scheduler_pane

0xe185,	// (0x00096bd3) bg_main_sp_fs_ribbon_pane_g1

0xe18e,	// (0x00096bdc) bg_main_sp_fs_ribbon_pane_g2

0xe197,	// (0x00096be5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0009884a) bg_main_sp_fs_ribbon_pane_g

0xe19f,	// (0x00096bed) main_sp_fs_ribbon_scheduler_pane_g1

0xe1a8,	// (0x00096bf6) main_sp_fs_ribbon_scheduler_pane_g2

0xe1b1,	// (0x00096bff) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00098851) main_sp_fs_ribbon_scheduler_pane_g

0xe1ba,	// (0x00096c08) list_cale_mrui_pane

0xa445,	// (0x00092e93) sp_fs_scroll_pane_cp07_ParamLimits

0xa445,	// (0x00092e93) sp_fs_scroll_pane_cp07

0xa45b,	// (0x00092ea9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa45b,	// (0x00092ea9) bg_sp_fs_schedule_viewer_highlight

0xe1c3,	// (0x00096c11) list_single_sp_fs_schedule_track_pane_cp01

0xe1cb,	// (0x00096c19) list_sp_fs_schedule_track_pane

0xe1d3,	// (0x00096c21) sp_fs_scroll_pane_cp06_ParamLimits

0xe1d3,	// (0x00096c21) sp_fs_scroll_pane_cp06

0xca62,	// (0x000954b0) bgmain_sp_fs_calendar_pane_g1

0xa46b,	// (0x00092eb9) list_single_cale_mrui_pane_ParamLimits

0xa46b,	// (0x00092eb9) list_single_cale_mrui_pane

0xe1e5,	// (0x00096c33) list_single_cale_mrui_row_pane_ParamLimits

0xe1e5,	// (0x00096c33) list_single_cale_mrui_row_pane

0xe1f2,	// (0x00096c40) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe1f2,	// (0x00096c40) list_single_cale_mrui_row_pane_g1

0xe22a,	// (0x00096c78) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe22a,	// (0x00096c78) list_single_cale_mrui_row_pane_t1

0xa48d,	// (0x00092edb) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa48d,	// (0x00092edb) list_single_cale_mrui_row_pane_t2

0xe23c,	// (0x00096c8a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe23c,	// (0x00096c8a) list_single_cale_mrui_row_pane_t3

0xe26b,	// (0x00096cb9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe26b,	// (0x00096cb9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0009885d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0009885d) list_single_cale_mrui_row_pane_t

0xa4f5,	// (0x00092f43) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa4f5,	// (0x00092f43) list_single_cmail_header_editor_pane_bg_cp01

0xa51b,	// (0x00092f69) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa51b,	// (0x00092f69) list_single_cmail_header_editor_pane_bg_cp02

0xa53b,	// (0x00092f89) main_radioblah_text_pane_t1_ParamLimits

0xa53b,	// (0x00092f89) main_radioblah_text_pane_t1

0xe29a,	// (0x00096ce8) cam6_indi_pane_cp01

0xe2a2,	// (0x00096cf0) cam6_mode_pane_cp01

0xe2aa,	// (0x00096cf8) cam6_pano_pane

0xe2b3,	// (0x00096d01) cam6_zoom_pane_cp01

0xe2bb,	// (0x00096d09) cam6_pano_image_pane

0xe2c6,	// (0x00096d14) cam6_pano_pane_g1

0xd835,	// (0x00096283) cam6_pano_pane_g2

0xe2cf,	// (0x00096d1d) cam6_pano_pane_g3

0xe2d8,	// (0x00096d26) cam6_pano_pane_g4

0xea1f,	// (0x0009746d) cam6_pano_pane_g5

0xe2e1,	// (0x00096d2f) cam6_pano_pane_g6

0xe2eb,	// (0x00096d39) cam6_pano_pane_g7

0xe2f3,	// (0x00096d41) cam6_pano_pane_g8

0xe2fc,	// (0x00096d4a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00098866) cam6_pano_pane_g

0x022c,	// (0x00088c7a) main_browser_tag_pane

0xe033,	// (0x00096a81) grid_navstr_albumart_pane

0xe307,	// (0x00096d55) cell_navstr_albumart_pane_ParamLimits

0xe307,	// (0x00096d55) cell_navstr_albumart_pane

0xb27a,	// (0x00093cc8) cell_navstr_albumart_pane_g1

0xc377,	// (0x00094dc5) cell_navstr_albumart_pane_g2

0xc387,	// (0x00094dd5) cell_navstr_albumart_pane_g3

0xc37f,	// (0x00094dcd) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00098879) cell_navstr_albumart_pane_g

0xa556,	// (0x00092fa4) bt_list_pane_ParamLimits

0xa556,	// (0x00092fa4) bt_list_pane

0xa56b,	// (0x00092fb9) bt_list_pane_t1

0xa57a,	// (0x00092fc8) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00098882) bt_list_pane_t

0x022c,	// (0x00088c7a) main_cale_prevew_pane

0xa589,	// (0x00092fd7) popup_cale_preview_window_ParamLimits

0xa589,	// (0x00092fd7) popup_cale_preview_window

0x2659,	// (0x0008b0a7) bg_popup_preview_window_pane_cp05_ParamLimits

0x2659,	// (0x0008b0a7) bg_popup_preview_window_pane_cp05

0xe329,	// (0x00096d77) list_cale_preview_pane_ParamLimits

0xe329,	// (0x00096d77) list_cale_preview_pane

0xa59e,	// (0x00092fec) list_double_cale_preview_pane_ParamLimits

0xa59e,	// (0x00092fec) list_double_cale_preview_pane

0xa5b0,	// (0x00092ffe) list_single_cale_preview_pane_ParamLimits

0xa5b0,	// (0x00092ffe) list_single_cale_preview_pane

0xa5c4,	// (0x00093012) list_single_cale_preview_pane_g1

0xa5cc,	// (0x0009301a) list_single_cale_preview_pane_t1_ParamLimits

0xa5cc,	// (0x0009301a) list_single_cale_preview_pane_t1

0xa5e1,	// (0x0009302f) list_double_cale_preview_pane_g1

0xa5e9,	// (0x00093037) list_double_cale_preview_pane_t1_ParamLimits

0xa5e9,	// (0x00093037) list_double_cale_preview_pane_t1

0xa5fe,	// (0x0009304c) list_double_cale_preview_pane_t2_ParamLimits

0xa5fe,	// (0x0009304c) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00098887) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00098887) list_double_cale_preview_pane_t

0x022c,	// (0x00088c7a) main_ezdial_pane

0x2659,	// (0x0008b0a7) main_sp_fs_email_pane_ParamLimits

0x9d22,	// (0x00092770) cmail_ddmenu_btn01_pane_ParamLimits

0x9d22,	// (0x00092770) cmail_ddmenu_btn01_pane

0x9d35,	// (0x00092783) cmail_ddmenu_btn02_pane_ParamLimits

0x9d35,	// (0x00092783) cmail_ddmenu_btn02_pane

0x9d58,	// (0x000927a6) cmail_ddmenu_btn03_pane_ParamLimits

0x9d58,	// (0x000927a6) cmail_ddmenu_btn03_pane

0x9d7c,	// (0x000927ca) main_sp_fs_ctrlbar_pane_ParamLimits

0x9da0,	// (0x000927ee) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa220,	// (0x00092c6e) list_cmail_body_pane_ParamLimits

0xdf5a,	// (0x000969a8) bg_button_pane_cp12

0xdf6f,	// (0x000969bd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdf6f,	// (0x000969bd) list_single_cmail_header_detail_pane_g3

0xa2a8,	// (0x00092cf6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2a8,	// (0x00092cf6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0009880c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0009880c) list_single_cmail_header_detail_pane_t

0xe09b,	// (0x00096ae9) phacti_term_pane_t2_ParamLimits

0xe09b,	// (0x00096ae9) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00098816) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00098816) phacti_term_pane_t

0xe335,	// (0x00096d83) aid_size_list_single_double

0xa616,	// (0x00093064) popup_ezdial_listscroll_window

0xa632,	// (0x00093080) popup_number_entry_window_cp01

0x4a6d,	// (0x0008d4bb) bg_popup_call_pane_cp09

0xe341,	// (0x00096d8f) ezdial_list_pane

0xe349,	// (0x00096d97) scroll_pane_cp23

0xc55a,	// (0x00094fa8) bg_button_pane_cp028_ParamLimits

0xc55a,	// (0x00094fa8) bg_button_pane_cp028

0xa640,	// (0x0009308e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa640,	// (0x0009308e) cmail_ddmenu_btn01_pane_g1

0xa64c,	// (0x0009309a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa64c,	// (0x0009309a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0009888c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0009888c) cmail_ddmenu_btn01_pane_g

0xe351,	// (0x00096d9f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe351,	// (0x00096d9f) cmail_ddmenu_btn01_pane_t1

0xc55a,	// (0x00094fa8) bg_button_pane_cp029_ParamLimits

0xc55a,	// (0x00094fa8) bg_button_pane_cp029

0xa658,	// (0x000930a6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa658,	// (0x000930a6) cmail_ddmenu_btn02_pane_g1

0xa670,	// (0x000930be) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa670,	// (0x000930be) cmail_ddmenu_btn02_pane_t1

0x2659,	// (0x0008b0a7) bg_button_pane_cp031_ParamLimits

0x2659,	// (0x0008b0a7) bg_button_pane_cp031

0xa658,	// (0x000930a6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa658,	// (0x000930a6) cmail_ddmenu_btn03_pane_g1

0xa670,	// (0x000930be) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa670,	// (0x000930be) cmail_ddmenu_btn03_pane_t1

0x78d4,	// (0x00090322) cell_dialer2_keypad_pane_t1_ParamLimits

0x78ee,	// (0x0009033c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x78ee,	// (0x0009033c) cell_dialer2_keypad_pane_t1_copy1

0x960f,	// (0x0009205d) ncimui_group_button_pane

0x2659,	// (0x0008b0a7) main_sp_fs_calendar_pane_ParamLimits

0xa238,	// (0x00092c86) list_single_cmail_header_caption_pane_ParamLimits

0xe0e6,	// (0x00096b34) aid_recal_txt_sm_pane

0x022c,	// (0x00088c7a) mian_recal_day_pane

0xe125,	// (0x00096b73) popup_sp_fs_cale_preview_window_ParamLimits

0x022c,	// (0x00088c7a) list_recal_day_pane

0xe388,	// (0x00096dd6) list_single_recal_day_pane_ParamLimits

0xe388,	// (0x00096dd6) list_single_recal_day_pane

0xe39a,	// (0x00096de8) list_single_recal_day_pane_g1_ParamLimits

0xe39a,	// (0x00096de8) list_single_recal_day_pane_g1

0xe3a6,	// (0x00096df4) list_single_recal_day_pane_g2_ParamLimits

0xe3a6,	// (0x00096df4) list_single_recal_day_pane_g2

0xe3b5,	// (0x00096e03) list_single_recal_day_pane_g3_ParamLimits

0xe3b5,	// (0x00096e03) list_single_recal_day_pane_g3

0xa694,	// (0x000930e2) list_single_recal_day_pane_g4_ParamLimits

0xa694,	// (0x000930e2) list_single_recal_day_pane_g4

0xe3c1,	// (0x00096e0f) list_single_recal_day_pane_g5_ParamLimits

0xe3c1,	// (0x00096e0f) list_single_recal_day_pane_g5

0xe3d0,	// (0x00096e1e) list_single_recal_day_pane_g6_ParamLimits

0xe3d0,	// (0x00096e1e) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0009889b) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0009889b) list_single_recal_day_pane_g

0xe3dc,	// (0x00096e2a) list_single_recal_day_pane_t1

0xe3ea,	// (0x00096e38) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x000988a8) list_single_recal_day_pane_t

0xa6a7,	// (0x000930f5) ncimui_query_button_pane_ParamLimits

0xa6a7,	// (0x000930f5) ncimui_query_button_pane

0xa6b7,	// (0x00093105) ncimui_query_button_pane_t1_ParamLimits

0xa6b7,	// (0x00093105) ncimui_query_button_pane_t1

0xe3f8,	// (0x00096e46) ncimui_query_button_pane_t2_ParamLimits

0xe3f8,	// (0x00096e46) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x000988ad) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x000988ad) ncimui_query_button_pane_t

0xa6ca,	// (0x00093118) query_button_pane_ParamLimits

0xa6ca,	// (0x00093118) query_button_pane

0x022c,	// (0x00088c7a) bg_button_pane_cp0028

0xe40b,	// (0x00096e59) query_button_pane_t1

0x59ac,	// (0x0008e3fa) main_tport_pane_ParamLimits

0xa10d,	// (0x00092b5b) bg_popup_window_pane_cp01_ParamLimits

0xa10d,	// (0x00092b5b) bg_popup_window_pane_cp01

0xa127,	// (0x00092b75) heading_pane_cp08_ParamLimits

0xa127,	// (0x00092b75) heading_pane_cp08

0xa13b,	// (0x00092b89) heading_pane_cp07_ParamLimits

0xa13b,	// (0x00092b89) heading_pane_cp07

0xdf1d,	// (0x0009696b) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x000987f9) cell_tport_appsw_pane_g

0x4f50,	// (0x0008d99e) input_candi_list_open_g1

0x4033,	// (0x0008ca81) list_cale_time_pane_g6_ParamLimits

0x4033,	// (0x0008ca81) list_cale_time_pane_g6

0x6775,	// (0x0008f1c3) aid_size_touch_calib_1_ParamLimits

0x6775,	// (0x0008f1c3) aid_size_touch_calib_1

0x6781,	// (0x0008f1cf) aid_size_touch_calib_2_ParamLimits

0x6781,	// (0x0008f1cf) aid_size_touch_calib_2

0x6797,	// (0x0008f1e5) aid_size_touch_calib_3_ParamLimits

0x6797,	// (0x0008f1e5) aid_size_touch_calib_3

0x67b5,	// (0x0008f203) aid_size_touch_calib_4_ParamLimits

0x67b5,	// (0x0008f203) aid_size_touch_calib_4

0x67cb,	// (0x0008f219) main_touch_calib_button_group_pane_ParamLimits

0x67cb,	// (0x0008f219) main_touch_calib_button_group_pane

0x67e2,	// (0x0008f230) main_touch_calib_pane_g1_ParamLimits

0x67ee,	// (0x0008f23c) main_touch_calib_pane_g2_ParamLimits

0x67fa,	// (0x0008f248) main_touch_calib_pane_g3_ParamLimits

0x6806,	// (0x0008f254) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000981d2) main_touch_calib_pane_g_ParamLimits

0x6812,	// (0x0008f260) main_touch_calib_pane_t1_ParamLimits

0x682c,	// (0x0008f27a) main_touch_calib_pane_t2_ParamLimits

0x6846,	// (0x0008f294) main_touch_calib_pane_t3_ParamLimits

0x685a,	// (0x0008f2a8) main_touch_calib_pane_t4_ParamLimits

0x686e,	// (0x0008f2bc) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000981db) main_touch_calib_pane_t_ParamLimits

0xce07,	// (0x00095855) list_single_fp_cale_pane_g3_ParamLimits

0xce07,	// (0x00095855) list_single_fp_cale_pane_g3

0xefcc,	// (0x00097a1a) bg_button_pane_cp012_ParamLimits

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp03_ParamLimits

0x8907,	// (0x00091355) cell_vitu2_function_top_pane_g1_ParamLimits

0xefcc,	// (0x00097a1a) bg_vkb2_func_pane_cp04_ParamLimits

0x95c3,	// (0x00092011) main_ncimui_button_group_pane_ParamLimits

0x95c3,	// (0x00092011) main_ncimui_button_group_pane

0x95fd,	// (0x0009204b) main_ncimui_pane_t3_ParamLimits

0x95fd,	// (0x0009204b) main_ncimui_pane_t3

0xe049,	// (0x00096a97) phacti_button_group_pane

0xe335,	// (0x00096d83) aid_size_list_single_double_ParamLimits

0xa616,	// (0x00093064) popup_ezdial_listscroll_window_ParamLimits

0xa632,	// (0x00093080) popup_number_entry_window_cp01_ParamLimits

0xa6dd,	// (0x0009312b) phacti_button_pane_ParamLimits

0xa6dd,	// (0x0009312b) phacti_button_pane

0x022c,	// (0x00088c7a) bg_button_pane_cp14

0xe419,	// (0x00096e67) phacti_button_pane_t1

0xa6ee,	// (0x0009313c) main_touch_calib_button_pane_ParamLimits

0xa6ee,	// (0x0009313c) main_touch_calib_button_pane

0x0a07,	// (0x00089455) bg_button_pane_cp18_ParamLimits

0x0a07,	// (0x00089455) bg_button_pane_cp18

0xe427,	// (0x00096e75) main_touch_calib_button_pane_t1_ParamLimits

0xe427,	// (0x00096e75) main_touch_calib_button_pane_t1

0xe43d,	// (0x00096e8b) main_touch_calib_button_pane_t2_ParamLimits

0xe43d,	// (0x00096e8b) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x000988b2) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x000988b2) main_touch_calib_button_pane_t

0x022c,	// (0x00088c7a) cell_ncimui_button_pane

0x022c,	// (0x00088c7a) bg_button_pane_cp032

0xe45b,	// (0x00096ea9) cell_ncimui_button_pane_t1

0xeef5,	// (0x00097943) image3_infobar_pane_ParamLimits

0xeef5,	// (0x00097943) image3_infobar_pane

0x9994,	// (0x000923e2) fs_bigclock_status_pane_ParamLimits

0x9994,	// (0x000923e2) fs_bigclock_status_pane

0x99a1,	// (0x000923ef) main_fs_bigclock_clock_pane_ParamLimits

0x99a1,	// (0x000923ef) main_fs_bigclock_clock_pane

0x99b4,	// (0x00092402) main_fs_bigclock_indi_pane_ParamLimits

0x99b4,	// (0x00092402) main_fs_bigclock_indi_pane

0x99cc,	// (0x0009241a) main_fs_bigclock_swipe_pane_ParamLimits

0x99cc,	// (0x0009241a) main_fs_bigclock_swipe_pane

0x022c,	// (0x00088c7a) main_fs_clock_dumped_data

0xd942,	// (0x00096390) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd942,	// (0x00096390) list_single_fs_bigclock_indicator_pane_g1

0xd960,	// (0x000963ae) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd960,	// (0x000963ae) list_single_fs_bigclock_indicator_pane_g2

0xd97a,	// (0x000963c8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd97a,	// (0x000963c8) list_single_fs_bigclock_indicator_pane_g3

0xd994,	// (0x000963e2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd994,	// (0x000963e2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x000986e5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x000986e5) list_single_fs_bigclock_indicator_pane_g

0xd9ba,	// (0x00096408) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd9ba,	// (0x00096408) list_single_fs_bigclock_indicator_pane_t1

0xd9e2,	// (0x00096430) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd9e2,	// (0x00096430) list_single_fs_bigclock_indicator_pane_t2

0xda0a,	// (0x00096458) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xda0a,	// (0x00096458) list_single_fs_bigclock_indicator_pane_t3

0xda32,	// (0x00096480) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xda32,	// (0x00096480) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x000986f0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x000986f0) list_single_fs_bigclock_indicator_pane_t

0xe469,	// (0x00096eb7) image3_infobar_fav_pane_ParamLimits

0xe469,	// (0x00096eb7) image3_infobar_fav_pane

0xe479,	// (0x00096ec7) image3_infobar_loc_pane_ParamLimits

0xe479,	// (0x00096ec7) image3_infobar_loc_pane

0xe48d,	// (0x00096edb) image3_infobar_time_pane_ParamLimits

0xe48d,	// (0x00096edb) image3_infobar_time_pane

0xca62,	// (0x000954b0) image3_infobar_time_pane_g1

0xe49d,	// (0x00096eeb) image3_infobar_time_pane_t1

0xca62,	// (0x000954b0) image3_infobar_loc_pane_g1

0xe4ab,	// (0x00096ef9) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x000988b7) image3_infobar_loc_pane_g

0xe4b3,	// (0x00096f01) image3_infobar_loc_pane_t1

0xca62,	// (0x000954b0) image3_infobar_fav_pane_g1

0xe4c1,	// (0x00096f0f) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x000988bc) image3_infobar_fav_pane_g

0xe4c9,	// (0x00096f17) fs_bigclock_status_battery_pane

0xe4d2,	// (0x00096f20) fs_bigclock_status_signal_pane

0xe4db,	// (0x00096f29) fs_bigclock_status_title_pane

0xe4e4,	// (0x00096f32) fs_bigclock_status_signal_pane_g1

0xe4ed,	// (0x00096f3b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x000988c1) fs_bigclock_status_signal_pane_g

0xe4f5,	// (0x00096f43) fs_bigclock_status_battery_pane_g1

0xe4fe,	// (0x00096f4c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x000988c6) fs_bigclock_status_battery_pane_g

0xe506,	// (0x00096f54) fs_bigclock_status_title_pane_t1

0xca62,	// (0x000954b0) main_fs_bigclock_clock_pane_g1

0xe514,	// (0x00096f62) main_fs_bigclock_clock_pane_g2

0xe514,	// (0x00096f62) main_fs_bigclock_clock_pane_g3

0xe514,	// (0x00096f62) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x000988cb) main_fs_bigclock_clock_pane_g

0xe51c,	// (0x00096f6a) main_fs_bigclock_clock_pane_t1

0xe52a,	// (0x00096f78) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x000988d4) main_fs_bigclock_clock_pane_t

0xe539,	// (0x00096f87) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe539,	// (0x00096f87) list_single_fs_bigclock_indicator_pane

0xa703,	// (0x00093151) list_single_fs_bigclock_pane_ParamLimits

0xa703,	// (0x00093151) list_single_fs_bigclock_pane

0xe553,	// (0x00096fa1) main_fs_bigclock_indicator_pane_t1

0xe562,	// (0x00096fb0) list_single_fs_bigclock_pane_g1

0xe56a,	// (0x00096fb8) list_single_fs_bigclock_pane_t1

0xca62,	// (0x000954b0) main_fs_bigclock_swipe_pane_g1

0xe5a8,	// (0x00096ff6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x000988e5) main_fs_bigclock_swipe_pane_g

0xe5b0,	// (0x00096ffe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe5b0,	// (0x00096ffe) main_fs_bigclock_swipe_pane_t1

0x43e4,	// (0x0008ce32) call_type_pane_ParamLimits

0x022c,	// (0x00088c7a) main_btmg_pane

0xe21e,	// (0x00096c6c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe21e,	// (0x00096c6c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00098858) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00098858) list_single_cale_mrui_row_pane_g

0xe36f,	// (0x00096dbd) list_recal_vselct_arw_lo_pane

0xe377,	// (0x00096dc5) list_recal_vselct_arw_up_pane

0xe37f,	// (0x00096dcd) list_recal_vselct_pane

0xe5cd,	// (0x0009701b) btmg_button_pane

0xa769,	// (0x000931b7) main_btmg_pane_g1

0x022c,	// (0x00088c7a) bg_button_pane_cp044

0xe5d7,	// (0x00097025) btmg_button_pane_t1

0xc552,	// (0x00094fa0) aid_listscroll_gen

0x2659,	// (0x0008b0a7) main_cntbar_detail_pane

0xdf3b,	// (0x00096989) list_cmail_folder_pane

0xdf4b,	// (0x00096999) sp_fs_scroll_pane_cp03_ParamLimits

0xa773,	// (0x000931c1) list_single_fs_dyc_pane_cp01_ParamLimits

0xa773,	// (0x000931c1) list_single_fs_dyc_pane_cp01

0xe5e5,	// (0x00097033) aid_size_cmail_indent

0xe5ee,	// (0x0009703c) list_single_dyc_row_pane_cp01

0xa7bc,	// (0x0009320a) cntbar_detail_list_pane_ParamLimits

0xa7bc,	// (0x0009320a) cntbar_detail_list_pane

0xa808,	// (0x00093256) main_cntbar_detail_cont_pane_ParamLimits

0xa808,	// (0x00093256) main_cntbar_detail_cont_pane

0x41f9,	// (0x0008cc47) scroll_pane_cp032_ParamLimits

0x41f9,	// (0x0008cc47) scroll_pane_cp032

0xa81c,	// (0x0009326a) cntbar_detail_list_event_pane_ParamLimits

0xa81c,	// (0x0009326a) cntbar_detail_list_event_pane

0xa7cc,	// (0x0009321a) cntbar_detail_list_shct_pane

0x0e6d,	// (0x000898bb) aid_list_gen

0xe5f7,	// (0x00097045) aid_scroll

0xe600,	// (0x0009704e) aid_size_touch_scroll_bar

0x01df,	// (0x00088c2d) aid_list_double

0xe609,	// (0x00097057) aid_list_single

0xe612,	// (0x00097060) aid_list_single_lg

0xe61b,	// (0x00097069) aid_list_z_g_a_sm

0xe623,	// (0x00097071) aid_list_z_g_d

0xe62b,	// (0x00097079) aid_txt_z_prm

0xa82c,	// (0x0009327a) aid_txt_z_prm_cp01

0xa83a,	// (0x00093288) aid_txt_z_sec

0xa848,	// (0x00093296) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa848,	// (0x00093296) main_cntbar_detail_cont_pane_g1

0xa85c,	// (0x000932aa) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa85c,	// (0x000932aa) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x000988ea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x000988ea) main_cntbar_detail_cont_pane_g

0xe639,	// (0x00097087) main_cntbar_detail_cont_pane_t1

0xe647,	// (0x00097095) main_cntbar_detail_cont_pane_t2

0xe655,	// (0x000970a3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x000988ef) main_cntbar_detail_cont_pane_t

0xa86c,	// (0x000932ba) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa86c,	// (0x000932ba) cell_cntbar_detail_list_shct_pane

0xe663,	// (0x000970b1) cntbar_detail_list_shct_pane_g1

0xe66c,	// (0x000970ba) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x000988f6) cntbar_detail_list_shct_pane_g

0xa880,	// (0x000932ce) cntbar_detail_list_event_pane_g1_ParamLimits

0xa880,	// (0x000932ce) cntbar_detail_list_event_pane_g1

0xa88c,	// (0x000932da) cntbar_detail_list_event_pane_g2_ParamLimits

0xa88c,	// (0x000932da) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x000988fb) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x000988fb) cntbar_detail_list_event_pane_g

0xa8f8,	// (0x00093346) cntbar_detail_list_event_pane_t1_ParamLimits

0xa8f8,	// (0x00093346) cntbar_detail_list_event_pane_t1

0xa90d,	// (0x0009335b) cntbar_detail_list_event_pane_t2_ParamLimits

0xa90d,	// (0x0009335b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00098908) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00098908) cntbar_detail_list_event_pane_t

0xca62,	// (0x000954b0) cell_cntbar_detail_list_shct_pane_g1

0x49eb,	// (0x0008d439) navi_pane_mv_g3

0x2659,	// (0x0008b0a7) main_cntbar_detail_pane_ParamLimits

0x022c,	// (0x00088c7a) main_notif_wgt_pane

0xed0b,	// (0x00097759) aid_tch_main_mp4_pane_g4

0xeeed,	// (0x0009793b) popup_slider_window_cp02

0xe366,	// (0x00096db4) list_recal_day_event_pane

0xa790,	// (0x000931de) cntbar_detail_btn_pane_ParamLimits

0xa790,	// (0x000931de) cntbar_detail_btn_pane

0xa7a6,	// (0x000931f4) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7a6,	// (0x000931f4) cntbar_detail_btn_pane_cp01

0xa7cc,	// (0x0009321a) cntbar_detail_list_shct_pane_ParamLimits

0xa7dc,	// (0x0009322a) cntbar_detail_pane_g1_ParamLimits

0xa7dc,	// (0x0009322a) cntbar_detail_pane_g1

0xa7ec,	// (0x0009323a) cntbar_detail_pane_t1_ParamLimits

0xa7ec,	// (0x0009323a) cntbar_detail_pane_t1

0xa898,	// (0x000932e6) cntbar_detail_list_event_pane_g3_ParamLimits

0xa898,	// (0x000932e6) cntbar_detail_list_event_pane_g3

0xa8b0,	// (0x000932fe) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8b0,	// (0x000932fe) cntbar_detail_list_event_pane_g4

0xa8c8,	// (0x00093316) cntbar_detail_list_event_pane_g5_ParamLimits

0xa8c8,	// (0x00093316) cntbar_detail_list_event_pane_g5

0xa8e0,	// (0x0009332e) cntbar_detail_list_event_pane_g6_ParamLimits

0xa8e0,	// (0x0009332e) cntbar_detail_list_event_pane_g6

0xa922,	// (0x00093370) cntbar_detail_list_event_pane_t3_ParamLimits

0xa922,	// (0x00093370) cntbar_detail_list_event_pane_t3

0xa934,	// (0x00093382) popup_notif_wgt_window_ParamLimits

0xa934,	// (0x00093382) popup_notif_wgt_window

0xa94d,	// (0x0009339b) popup_submenu_window_cp01_ParamLimits

0xa94d,	// (0x0009339b) popup_submenu_window_cp01

0x4a6d,	// (0x0008d4bb) bg_popup_window_pane_cp10

0xe675,	// (0x000970c3) listscroll_notif_wgt_pane

0xe67f,	// (0x000970cd) list_notif_wgt_window

0xe688,	// (0x000970d6) scroll_pane_cp033

0xe691,	// (0x000970df) list_notif_wgt_row_pane_ParamLimits

0xe691,	// (0x000970df) list_notif_wgt_row_pane

0xe6a5,	// (0x000970f3) aid_size_list_notif_wgt_del

0xe6ae,	// (0x000970fc) list_notif_wgt_row_pane_g1

0xe6b6,	// (0x00097104) list_notif_wgt_row_pane_g2

0xe6be,	// (0x0009710c) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0009890f) list_notif_wgt_row_pane_g

0xe6c7,	// (0x00097115) list_notif_wgt_row_pane_t1

0xe6d5,	// (0x00097123) list_notif_wgt_row_pane_t2

0xe6e3,	// (0x00097131) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00098916) list_notif_wgt_row_pane_t

0x12ca,	// (0x00089d18) list_recal_day_event_pane_g1

0xe6f1,	// (0x0009713f) list_recal_day_event_pane_t1

0x022c,	// (0x00088c7a) bg_button_pane_cp045

0xe700,	// (0x0009714e) cntbar_detail_btn_pane_t1

0xc55a,	// (0x00094fa8) main_callh_pane_ParamLimits

0xc55a,	// (0x00094fa8) main_callh_pane

0x022c,	// (0x00088c7a) main_coverflow0_pane

0x022c,	// (0x00088c7a) main_wgtman_pane

0x99da,	// (0x00092428) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x99da,	// (0x00092428) main_fs_bigclock_unlock_btn_pane

0xdf15,	// (0x00096963) bg_button_pane_cp16

0xdf25,	// (0x00096973) cell_tport_appsw_pane_g3

0xa95f,	// (0x000933ad) cf0_flow_pane_ParamLimits

0xa95f,	// (0x000933ad) cf0_flow_pane

0xe70e,	// (0x0009715c) listscroll_cf0_pane

0xe717,	// (0x00097165) main_cf0_pane_g1

0xa974,	// (0x000933c2) main_cf0_pane_t1_ParamLimits

0xa974,	// (0x000933c2) main_cf0_pane_t1

0xa98c,	// (0x000933da) main_cf0_pane_t2_ParamLimits

0xa98c,	// (0x000933da) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0009891d) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0009891d) main_cf0_pane_t

0xe721,	// (0x0009716f) scroll_pane_cp11

0xa9a4,	// (0x000933f2) cf0_flow_pane_g1

0xa9ac,	// (0x000933fa) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00098922) cf0_flow_pane_g

0xa9b4,	// (0x00093402) cf0_flow_pane_t1

0x022c,	// (0x00088c7a) main_call6_pane

0x022c,	// (0x00088c7a) main_calllock_pane

0xa9c2,	// (0x00093410) call6_btn_grp_pane_ParamLimits

0xa9c2,	// (0x00093410) call6_btn_grp_pane

0xa9dc,	// (0x0009342a) call6_pane_g1_ParamLimits

0xa9dc,	// (0x0009342a) call6_pane_g1

0xa9f1,	// (0x0009343f) popup_call6_1st_window_ParamLimits

0xa9f1,	// (0x0009343f) popup_call6_1st_window

0xaa02,	// (0x00093450) popup_call6_2nd_window_ParamLimits

0xaa02,	// (0x00093450) popup_call6_2nd_window

0xaa13,	// (0x00093461) cell_call6_btn_pane_ParamLimits

0xaa13,	// (0x00093461) cell_call6_btn_pane

0x4a6d,	// (0x0008d4bb) bg_popup_call2_in_pane_cp03

0xe72c,	// (0x0009717a) popup_call6_1st_window_g1

0xe734,	// (0x00097182) popup_call6_1st_window_g2

0xe73c,	// (0x0009718a) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00098927) popup_call6_1st_window_g

0xe744,	// (0x00097192) popup_call6_1st_window_t1

0xe753,	// (0x000971a1) popup_call6_1st_window_t2

0xe763,	// (0x000971b1) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0009892e) popup_call6_1st_window_t

0x4a6d,	// (0x0008d4bb) bg_popup_call2_in_pane_cp04

0xe72c,	// (0x0009717a) popup_call6_2nd_window_g1

0xe734,	// (0x00097182) popup_call6_2nd_window_g2

0xe73c,	// (0x0009718a) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00098927) popup_call6_2nd_window_g

0xe744,	// (0x00097192) popup_call6_2nd_window_t1

0x022c,	// (0x00088c7a) bg_button_pane_cp15

0xe773,	// (0x000971c1) cell_call6_btn_pane_g1

0xe77c,	// (0x000971ca) cell_call6_btn_pane_t1

0xaa27,	// (0x00093475) listscroll_wgtman_pane_ParamLimits

0xaa27,	// (0x00093475) listscroll_wgtman_pane

0xaa4a,	// (0x00093498) wgtman_btn_pane_ParamLimits

0xaa4a,	// (0x00093498) wgtman_btn_pane

0x4634,	// (0x0008d082) aid_scroll_copy1

0xe78b,	// (0x000971d9) list_wgtman_pane

0xaa8d,	// (0x000934db) wgtman_btn_pane_g1_ParamLimits

0xaa8d,	// (0x000934db) wgtman_btn_pane_g1

0xaab9,	// (0x00093507) wgtman_btn_pane_t1_ParamLimits

0xaab9,	// (0x00093507) wgtman_btn_pane_t1

0xe795,	// (0x000971e3) wgtman_btn_pane_t2_ParamLimits

0xe795,	// (0x000971e3) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00098935) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00098935) wgtman_btn_pane_t

0xaaf6,	// (0x00093544) listrow_wgtman_pane_ParamLimits

0xaaf6,	// (0x00093544) listrow_wgtman_pane

0xab09,	// (0x00093557) listrow_wgtman_pane_g1

0xab12,	// (0x00093560) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0009893a) listrow_wgtman_pane_g

0xab1c,	// (0x0009356a) listrow_wgtman_pane_t1

0xab2a,	// (0x00093578) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0009893f) listrow_wgtman_pane_t

0xab38,	// (0x00093586) wait_bar_pane_cp09

0xe7ac,	// (0x000971fa) main_calllock_btn_pane

0xe7b6,	// (0x00097204) main_calllock_pane_g1

0x022c,	// (0x00088c7a) bg_button_pane_cp17

0xe7c1,	// (0x0009720f) main_calllock_btn_pane_g1

0xe7ca,	// (0x00097218) main_calllock_btn_pane_t1

0x022c,	// (0x00088c7a) main_dialer3_pane

0x022c,	// (0x00088c7a) main_fmrd2_pane

0xca62,	// (0x000954b0) main_fs_bigclock_unlock_btn_pane_g1

0xe7e1,	// (0x0009722f) main_fs_bigclock_unlock_btn_pane_t1

0xab40,	// (0x0009358e) area_fmrd2_info_pane_ParamLimits

0xab40,	// (0x0009358e) area_fmrd2_info_pane

0xab51,	// (0x0009359f) area_fmrd2_visual_pane_ParamLimits

0xab51,	// (0x0009359f) area_fmrd2_visual_pane

0xab5f,	// (0x000935ad) fmrd2_indi_pane_ParamLimits

0xab5f,	// (0x000935ad) fmrd2_indi_pane

0xab6c,	// (0x000935ba) area_fmrd2_visual_pane_g1

0xab74,	// (0x000935c2) area_fmrd2_visual_pane_t1

0xab84,	// (0x000935d2) area_fmrd2_visual_pane_t2

0xab94,	// (0x000935e2) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00098949) area_fmrd2_visual_pane_t

0xaba4,	// (0x000935f2) area_fmrd2_info_pane_g1

0xabac,	// (0x000935fa) area_fmrd2_info_pane_t1

0xabbc,	// (0x0009360a) area_fmrd2_info_pane_t2

0xabcc,	// (0x0009361a) area_fmrd2_info_pane_t3

0xabdc,	// (0x0009362a) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00098950) area_fmrd2_info_pane_t

0xabea,	// (0x00093638) fmrd2_indi_pane_t1

0xabfa,	// (0x00093648) fmrd2_indi_pane_t2

0xac0a,	// (0x00093658) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00098959) fmrd2_indi_pane_t

0xd9a3,	// (0x000963f1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd9a3,	// (0x000963f1) list_single_fs_bigclock_indicator_pane_g5

0xda47,	// (0x00096495) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xda47,	// (0x00096495) list_single_fs_bigclock_indicator_pane_t5

0xa38d,	// (0x00092ddb) aid_cell_bcale_month_pane_ParamLimits

0xa38d,	// (0x00092ddb) aid_cell_bcale_month_pane

0xa39f,	// (0x00092ded) bcale_month_pane_ParamLimits

0xa39f,	// (0x00092ded) bcale_month_pane

0xa3b9,	// (0x00092e07) bcale_preview_pane_ParamLimits

0xa3b9,	// (0x00092e07) bcale_preview_pane

0xe56a,	// (0x00096fb8) list_single_fs_bigclock_pane_t1_ParamLimits

0xe584,	// (0x00096fd2) list_single_fs_bigclock_pane_t2_ParamLimits

0xe584,	// (0x00096fd2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x000988e0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x000988e0) list_single_fs_bigclock_pane_t

0xe7d9,	// (0x00097227) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00098944) main_fs_bigclock_unlock_btn_pane_g

0xac1a,	// (0x00093668) aid_dia3_key_size_ParamLimits

0xac1a,	// (0x00093668) aid_dia3_key_size

0xac29,	// (0x00093677) aid_dia3_listrow_size_ParamLimits

0xac29,	// (0x00093677) aid_dia3_listrow_size

0xac3e,	// (0x0009368c) dia3_keypad_fun_pane_ParamLimits

0xac3e,	// (0x0009368c) dia3_keypad_fun_pane

0xac5a,	// (0x000936a8) dia3_keypad_num_pane_ParamLimits

0xac5a,	// (0x000936a8) dia3_keypad_num_pane

0xac75,	// (0x000936c3) dia3_listscroll_pane_ParamLimits

0xac75,	// (0x000936c3) dia3_listscroll_pane

0xac88,	// (0x000936d6) dia3_numentry_pane_ParamLimits

0xac88,	// (0x000936d6) dia3_numentry_pane

0xe7ef,	// (0x0009723d) dia3_list_pane

0xe7fa,	// (0x00097248) scroll_pane_cp12

0x022c,	// (0x00088c7a) bg_dia3_numentry_pane

0xac9c,	// (0x000936ea) dia3_numentry_pane_t1

0xacab,	// (0x000936f9) cell_dia3_key_num_pane

0xacb3,	// (0x00093701) cell_dia3_key0_fun_pane_ParamLimits

0xacb3,	// (0x00093701) cell_dia3_key0_fun_pane

0xacc7,	// (0x00093715) cell_dia3_key1_fun_pane_ParamLimits

0xacc7,	// (0x00093715) cell_dia3_key1_fun_pane

0xacdf,	// (0x0009372d) dia3_listrow_pane

0xd6c1,	// (0x0009610f) bg_dia3_numentry_pane_g1

0x022c,	// (0x00088c7a) bg_button_pane_cp21

0xe805,	// (0x00097253) cell_dia3_key_num_pane_t1

0xe813,	// (0x00097261) cell_dia3_key_num_pane_t2

0xe822,	// (0x00097270) cell_dia3_key_num_pane_t3

0xe831,	// (0x0009727f) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00098960) cell_dia3_key_num_pane_t

0x022c,	// (0x00088c7a) bg_button_pane_cp19

0xacf1,	// (0x0009373f) cell_dia3_key0_fun_pane_g1

0x022c,	// (0x00088c7a) bg_button_pane_cp20

0xacf9,	// (0x00093747) cell_dia3_key1_fun_pane_g1

0xad01,	// (0x0009374f) area_left_week_number_pane

0xad0a,	// (0x00093758) area_top_day_name_pane

0xad13,	// (0x00093761) frame_month_view_pane

0xad1f,	// (0x0009376d) grid_month_view_pane

0xad29,	// (0x00093777) cell_top_day_name_pane_ParamLimits

0xad29,	// (0x00093777) cell_top_day_name_pane

0xad41,	// (0x0009378f) cell_area_left_week_number_pane_ParamLimits

0xad41,	// (0x0009378f) cell_area_left_week_number_pane

0xad55,	// (0x000937a3) cell_month_view_pane_ParamLimits

0xad55,	// (0x000937a3) cell_month_view_pane

0xe840,	// (0x0009728e) frm_month_g1

0xad70,	// (0x000937be) frm_month_g2

0xad7a,	// (0x000937c8) frm_month_g3

0xad84,	// (0x000937d2) frm_month_g4

0xad8e,	// (0x000937dc) frm_month_g5

0xad98,	// (0x000937e6) frm_month_g6

0xada2,	// (0x000937f0) frm_month_g7

0xe849,	// (0x00097297) frm_month_g8

0xadae,	// (0x000937fc) frm_month_g9

0xadb7,	// (0x00093805) frm_month_g10

0xadc0,	// (0x0009380e) frm_month_g11

0xadc9,	// (0x00093817) frm_month_g12

0xadd2,	// (0x00093820) frm_month_g13

0xaddb,	// (0x00093829) frm_month_g14

0xe852,	// (0x000972a0) frm_month_g15

0xade4,	// (0x00093832) frm_month_g16

0x000f,

0xff1b,	// (0x00098969) frm_month_g

0xadef,	// (0x0009383d) cell_top_day_name_pane_t1

0xadfe,	// (0x0009384c) cell_area_left_week_number_pane_g1

0xadef,	// (0x0009383d) cell_area_left_week_number_pane_t1

0xca62,	// (0x000954b0) cell_month_view_pane_g1

0xae06,	// (0x00093854) cell_month_view_pane_t1

0x022c,	// (0x00088c7a) main_fps_pane

0xdc76,	// (0x000966c4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdc76,	// (0x000966c4) cmail_ddmenu_btn02_pane_cp1

0xdc92,	// (0x000966e0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc92,	// (0x000966e0) cmail_ddmenu_btn02_pane_cp2

0xa664,	// (0x000930b2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa664,	// (0x000930b2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00098891) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00098891) cmail_ddmenu_btn02_pane_g

0xa682,	// (0x000930d0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa682,	// (0x000930d0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00098896) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00098896) cmail_ddmenu_btn02_pane_t

0xae15,	// (0x00093863) fps_text_pane_ParamLimits

0xae15,	// (0x00093863) fps_text_pane

0xae2c,	// (0x0009387a) main_fps_pane_g1_ParamLimits

0xae2c,	// (0x0009387a) main_fps_pane_g1

0xae46,	// (0x00093894) wait_bar_pane_cp010_ParamLimits

0xae46,	// (0x00093894) wait_bar_pane_cp010

0xae57,	// (0x000938a5) fps_text_pane_t1_ParamLimits

0xae57,	// (0x000938a5) fps_text_pane_t1

0x7d7f,	// (0x000907cd) cam4_image_uncrop_pane_g1

0x7d88,	// (0x000907d6) cam4_image_uncrop_pane_g2

0x7d91,	// (0x000907df) cam4_image_uncrop_pane_g3

0x7d9a,	// (0x000907e8) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0009836a) cam4_image_uncrop_pane_g

0xacdf,	// (0x0009372d) dia3_listrow_pane_ParamLimits

0x022c,	// (0x00088c7a) main_phob2_pane

0xa1a6,	// (0x00092bf4) cell_tport_appsw_pane_cp02_ParamLimits

0xa1a6,	// (0x00092bf4) cell_tport_appsw_pane_cp02

0xa1ba,	// (0x00092c08) cell_tport_appsw_pane_cp03_ParamLimits

0xa1ba,	// (0x00092c08) cell_tport_appsw_pane_cp03

0x022c,	// (0x00088c7a) phob2_contact_card_pane

0x022c,	// (0x00088c7a) phob2_listscroll_pane

0xf0eb,	// (0x00097b39) phob2_list_pane

0xf0f3,	// (0x00097b41) scroll_pane_cp034

0xae6f,	// (0x000938bd) phob2_cc_data_pane_ParamLimits

0xae6f,	// (0x000938bd) phob2_cc_data_pane

0xae8e,	// (0x000938dc) phob2_cc_listscroll_pane_ParamLimits

0xae8e,	// (0x000938dc) phob2_cc_listscroll_pane

0x10cc,	// (0x00089b1a) list_double_large_graphic_phob2_pane_ParamLimits

0x10cc,	// (0x00089b1a) list_double_large_graphic_phob2_pane

0xaeac,	// (0x000938fa) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaeac,	// (0x000938fa) list_double_large_graphic_phob2_pane_g1

0xaeb9,	// (0x00093907) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaeb9,	// (0x00093907) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0009898a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0009898a) list_double_large_graphic_phob2_pane_g

0xaec5,	// (0x00093913) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaec5,	// (0x00093913) list_double_large_graphic_phob2_pane_t1

0xaeda,	// (0x00093928) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaeda,	// (0x00093928) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0009898f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0009898f) list_double_large_graphic_phob2_pane_t

0x022c,	// (0x00088c7a) list_highlight_pane_cp024

0x0056,	// (0x00088aa4) phob2_cc_button_pane

0xaeec,	// (0x0009393a) phob2_cc_data_pane_g1_ParamLimits

0xaeec,	// (0x0009393a) phob2_cc_data_pane_g1

0xaf01,	// (0x0009394f) phob2_cc_data_pane_g2_ParamLimits

0xaf01,	// (0x0009394f) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00098994) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00098994) phob2_cc_data_pane_g

0xaf13,	// (0x00093961) phob2_cc_data_pane_t1_ParamLimits

0xaf13,	// (0x00093961) phob2_cc_data_pane_t1

0xaf2b,	// (0x00093979) phob2_cc_data_pane_t2_ParamLimits

0xaf2b,	// (0x00093979) phob2_cc_data_pane_t2

0xaf43,	// (0x00093991) phob2_cc_data_pane_t3_ParamLimits

0xaf43,	// (0x00093991) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00098999) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00098999) phob2_cc_data_pane_t

0x00ac,	// (0x00088afa) phob2_cc_list_pane_ParamLimits

0x00ac,	// (0x00088afa) phob2_cc_list_pane

0x00b8,	// (0x00088b06) scroll_pane_cp035_ParamLimits

0x00b8,	// (0x00088b06) scroll_pane_cp035

0x2659,	// (0x0008b0a7) bg_button_pane_cp033

0x00c4,	// (0x00088b12) phob2_cc_button_pane_g1

0x00d0,	// (0x00088b1e) phob2_cc_button_pane_t1

0x00e5,	// (0x00088b33) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000989a0) phob2_cc_button_pane_t

0xaf5d,	// (0x000939ab) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf5d,	// (0x000939ab) list_double_large_graphic_phob2_cc_pane

0xaf71,	// (0x000939bf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf71,	// (0x000939bf) list_double_large_graphic_phob2_cc_pane_g1

0xaf7d,	// (0x000939cb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf7d,	// (0x000939cb) list_double_large_graphic_phob2_cc_pane_g2

0xaf89,	// (0x000939d7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf89,	// (0x000939d7) list_double_large_graphic_phob2_cc_pane_g3

0xaf95,	// (0x000939e3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf95,	// (0x000939e3) list_double_large_graphic_phob2_cc_pane_g4

0xafa1,	// (0x000939ef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xafa1,	// (0x000939ef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000989a5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000989a5) list_double_large_graphic_phob2_cc_pane_g

0xafad,	// (0x000939fb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xafad,	// (0x000939fb) list_double_large_graphic_phob2_cc_pane_t1

0xafd6,	// (0x00093a24) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xafd6,	// (0x00093a24) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000989b0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000989b0) list_double_large_graphic_phob2_cc_pane_t

0x01c8,	// (0x00088c16) list_highlight_pane_cp025_ParamLimits

0x01c8,	// (0x00088c16) list_highlight_pane_cp025

0x2659,	// (0x0008b0a7) bg_button_pane_cp033_ParamLimits

0x00c4,	// (0x00088b12) phob2_cc_button_pane_g1_ParamLimits

0x00d0,	// (0x00088b1e) phob2_cc_button_pane_t1_ParamLimits

0x00e5,	// (0x00088b33) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000989a0) phob2_cc_button_pane_t_ParamLimits

0x2667,	// (0x0008b0b5) popup_wgtman_window

0x11ae,	// (0x00089bfc) scroll_pane_cp038

0xaa6f,	// (0x000934bd) wgtman_btn_pane_cp_01_ParamLimits

0xaa6f,	// (0x000934bd) wgtman_btn_pane_cp_01

0x01d6,	// (0x00088c24) wgtman_content_pane

0x01df,	// (0x00088c2d) wgtman_heading_pane

0x022c,	// (0x00088c7a) bg_heading_pane_cp02

0x01e8,	// (0x00088c36) wgtman_heading_pane_g1

0x01f0,	// (0x00088c3e) wgtman_heading_pane_t1

0x01fe,	// (0x00088c4c) scroll_pane_cp036

0x0206,	// (0x00088c54) wgtman_list_pane

0x020e,	// (0x00088c5c) wgtman_list_pane_t1_ParamLimits

0x020e,	// (0x00088c5c) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
