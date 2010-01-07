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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007ae28 };

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
0x5321,	// (0x00080149) Screen

0x532d,	// (0x00080155) application_window

0x536d,	// (0x00080195) area_bottom_pane_ParamLimits

0x536d,	// (0x00080195) area_bottom_pane

0x53a2,	// (0x000801ca) area_top_pane_ParamLimits

0x53a2,	// (0x000801ca) area_top_pane

0xde94,	// (0x00088cbc) call_video_uplink_pane_ParamLimits

0xde94,	// (0x00088cbc) call_video_uplink_pane

0x5430,	// (0x00080258) main_pane_ParamLimits

0x5430,	// (0x00080258) main_pane

0x232b,	// (0x0007d153) context_pane

0x83de,	// (0x00083206) navi_pane

0x83fe,	// (0x00083226) popup_cale_events_window_ParamLimits

0x83fe,	// (0x00083226) popup_cale_events_window

0x233e,	// (0x0007d166) popup_mup_playback_window

0x8416,	// (0x0008323e) signal_pane

0xe62d,	// (0x00089455) main_browser_pane

0x0e7d,	// (0x0007bca5) main_burst_pane

0x82b4,	// (0x000830dc) main_calc_pane

0x0e7d,	// (0x0007bca5) main_cale_day_pane

0xe62d,	// (0x00089455) main_cale_month_pane

0x0e7d,	// (0x0007bca5) main_cale_week_pane

0x0e7d,	// (0x0007bca5) main_call_pane

0xe2c3,	// (0x000890eb) main_call_poc_pane

0x0e7d,	// (0x0007bca5) main_camera_pane

0x0e7d,	// (0x0007bca5) main_chi_dic_pane

0x0d0c,	// (0x0007bb34) main_clock_pane

0xe2c3,	// (0x000890eb) main_fmradio_pane

0x0e7d,	// (0x0007bca5) main_graph_messa_pane

0xe2c3,	// (0x000890eb) main_help_pane

0xe62d,	// (0x00089455) main_im_pane

0xe51e,	// (0x00089346) main_image_pane_ParamLimits

0xe51e,	// (0x00089346) main_image_pane

0xe2c3,	// (0x000890eb) main_location2_pane

0x0e7d,	// (0x0007bca5) main_location_pane

0xe2c3,	// (0x000890eb) main_messa_pane

0xe2c3,	// (0x000890eb) main_mp2_pane

0x0e7d,	// (0x0007bca5) main_mp_pane

0xe2c3,	// (0x000890eb) main_msg_pane

0xe2c3,	// (0x000890eb) main_mup_eq_pane

0xe2c3,	// (0x000890eb) main_mup_pane

0x0e7d,	// (0x0007bca5) main_notes_pane

0xe2c3,	// (0x000890eb) main_pec_pane

0xe2c3,	// (0x000890eb) main_phob_pane

0xe2c3,	// (0x000890eb) main_pinb_pane

0xe2c3,	// (0x000890eb) main_postcard_pane

0xe2c3,	// (0x000890eb) main_qdial_pane

0x0e7d,	// (0x0007bca5) main_skin_pane

0xe2c3,	// (0x000890eb) main_smil2_pane

0x0e7d,	// (0x0007bca5) main_smil_pane

0x0e7d,	// (0x0007bca5) main_video_pane

0x0e7d,	// (0x0007bca5) main_video_tele_pane

0xe51e,	// (0x00089346) main_viewer_pane_ParamLimits

0xe51e,	// (0x00089346) main_viewer_pane

0x0e7d,	// (0x0007bca5) main_vorec_pane

0x82ea,	// (0x00083112) popup_blid_sat_info_window_ParamLimits

0x82ea,	// (0x00083112) popup_blid_sat_info_window

0x8300,	// (0x00083128) popup_dyc_status_message_window_ParamLimits

0x8300,	// (0x00083128) popup_dyc_status_message_window

0x830e,	// (0x00083136) popup_grid_large_graphic_window_ParamLimits

0x830e,	// (0x00083136) popup_grid_large_graphic_window

0x8382,	// (0x000831aa) popup_loc_request_window_ParamLimits

0x8382,	// (0x000831aa) popup_loc_request_window

0x83b6,	// (0x000831de) popup_wml_address_window_ParamLimits

0x83b6,	// (0x000831de) popup_wml_address_window

0x818c,	// (0x00082fb4) call_muted_g1

0x7e43,	// (0x00082c6b) popup_call_audio_conf_window_ParamLimits

0x7e43,	// (0x00082c6b) popup_call_audio_conf_window

0x819c,	// (0x00082fc4) popup_call_audio_first_window_ParamLimits

0x819c,	// (0x00082fc4) popup_call_audio_first_window

0x81dc,	// (0x00083004) popup_call_audio_in_window_ParamLimits

0x81dc,	// (0x00083004) popup_call_audio_in_window

0x8200,	// (0x00083028) popup_call_audio_out_window_ParamLimits

0x8200,	// (0x00083028) popup_call_audio_out_window

0x8222,	// (0x0008304a) popup_call_audio_second_window_ParamLimits

0x8222,	// (0x0008304a) popup_call_audio_second_window

0x8252,	// (0x0008307a) popup_call_audio_wait_window_ParamLimits

0x8252,	// (0x0008307a) popup_call_audio_wait_window

0x8273,	// (0x0008309b) popup_number_entry_window_ParamLimits

0x8273,	// (0x0008309b) popup_number_entry_window

0xdeb2,	// (0x00088cda) bg_popup_call_pane_cp05_ParamLimits

0xdeb2,	// (0x00088cda) bg_popup_call_pane_cp05

0xded2,	// (0x00088cfa) popup_number_entry_window_t1

0xdee5,	// (0x00088d0d) popup_number_entry_window_t2

0xdef7,	// (0x00088d1f) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00089f23) popup_number_entry_window_t

0xdf09,	// (0x00088d31) text_title_cp2

0xdf1c,	// (0x00088d44) bg_popup_call_pane_cp_ParamLimits

0xdf1c,	// (0x00088d44) bg_popup_call_pane_cp

0xdf2a,	// (0x00088d52) call_thumbnail_pane

0xdf32,	// (0x00088d5a) popup_call_audio_in_window_g1_ParamLimits

0xdf32,	// (0x00088d5a) popup_call_audio_in_window_g1

0xdf3e,	// (0x00088d66) popup_call_audio_in_window_g2_ParamLimits

0xdf3e,	// (0x00088d66) popup_call_audio_in_window_g2

0xdf4a,	// (0x00088d72) popup_call_audio_in_window_g3_ParamLimits

0xdf4a,	// (0x00088d72) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00089f2c) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00089f2c) popup_call_audio_in_window_g

0xdf56,	// (0x00088d7e) popup_call_audio_in_window_t1_ParamLimits

0xdf56,	// (0x00088d7e) popup_call_audio_in_window_t1

0xdf71,	// (0x00088d99) popup_call_audio_in_window_t2_ParamLimits

0xdf71,	// (0x00088d99) popup_call_audio_in_window_t2

0xdf8c,	// (0x00088db4) popup_call_audio_in_window_t3_ParamLimits

0xdf8c,	// (0x00088db4) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00089f33) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00089f33) popup_call_audio_in_window_t

0xdf1c,	// (0x00088d44) bg_popup_call_pane_cp01_ParamLimits

0xdf1c,	// (0x00088d44) bg_popup_call_pane_cp01

0xdf2a,	// (0x00088d52) call_thumbnail_pane_cp02

0xdf9f,	// (0x00088dc7) call_type_pane_cp022

0xdfa7,	// (0x00088dcf) popup_call_audio_out_window_g1_ParamLimits

0xdfa7,	// (0x00088dcf) popup_call_audio_out_window_g1

0xdfb9,	// (0x00088de1) popup_call_audio_out_window_g2_ParamLimits

0xdfb9,	// (0x00088de1) popup_call_audio_out_window_g2

0xdfc5,	// (0x00088ded) popup_call_audio_out_window_g3_ParamLimits

0xdfc5,	// (0x00088ded) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00089f3a) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00089f3a) popup_call_audio_out_window_g

0xdfd7,	// (0x00088dff) popup_call_audio_out_window_t1_ParamLimits

0xdfd7,	// (0x00088dff) popup_call_audio_out_window_t1

0xdfef,	// (0x00088e17) popup_call_audio_out_window_t2_ParamLimits

0xdfef,	// (0x00088e17) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00089f41) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00089f41) popup_call_audio_out_window_t

0xe004,	// (0x00088e2c) bg_popup_call_pane_ParamLimits

0xe004,	// (0x00088e2c) bg_popup_call_pane

0x5628,	// (0x00080450) call_thumbnail_pane_cp_ParamLimits

0x5628,	// (0x00080450) call_thumbnail_pane_cp

0xe088,	// (0x00088eb0) call_type_pane_cp01_ParamLimits

0xe088,	// (0x00088eb0) call_type_pane_cp01

0xe0cc,	// (0x00088ef4) popup_call_audio_first_window_g1_ParamLimits

0xe0cc,	// (0x00088ef4) popup_call_audio_first_window_g1

0xe118,	// (0x00088f40) popup_call_audio_first_window_g2_ParamLimits

0xe118,	// (0x00088f40) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00089f46) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00089f46) popup_call_audio_first_window_g

0xe15c,	// (0x00088f84) popup_call_audio_first_window_t1_ParamLimits

0xe15c,	// (0x00088f84) popup_call_audio_first_window_t1

0xe208,	// (0x00089030) popup_call_audio_first_window_t4_ParamLimits

0xe208,	// (0x00089030) popup_call_audio_first_window_t4

0xe294,	// (0x000890bc) popup_call_audio_first_window_t5_ParamLimits

0xe294,	// (0x000890bc) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00089f4b) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00089f4b) popup_call_audio_first_window_t

0xe2c3,	// (0x000890eb) bg_popup_call_pane_cp02

0xe2cd,	// (0x000890f5) call_type_pane_cp023

0xe2d5,	// (0x000890fd) popup_call_audio_wait_window_g1

0xe2dd,	// (0x00089105) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00089f52) popup_call_audio_wait_window_g

0xe2e5,	// (0x0008910d) popup_call_audio_wait_window_t3

0xe2f3,	// (0x0008911b) bg_popup_call_pane_cp03_ParamLimits

0xe2f3,	// (0x0008911b) bg_popup_call_pane_cp03

0xe353,	// (0x0008917b) call_thumbnail_pane_cp011_ParamLimits

0xe353,	// (0x0008917b) call_thumbnail_pane_cp011

0xe35f,	// (0x00089187) call_type_pane_cp034_ParamLimits

0xe35f,	// (0x00089187) call_type_pane_cp034

0xe39b,	// (0x000891c3) popup_call_audio_second_window_g1_ParamLimits

0xe39b,	// (0x000891c3) popup_call_audio_second_window_g1

0xe3d7,	// (0x000891ff) popup_call_audio_second_window_g2_ParamLimits

0xe3d7,	// (0x000891ff) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00089f57) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00089f57) popup_call_audio_second_window_g

0xe413,	// (0x0008923b) popup_call_audio_second_window_t1_ParamLimits

0xe413,	// (0x0008923b) popup_call_audio_second_window_t1

0xe494,	// (0x000892bc) popup_call_audio_second_window_t2_ParamLimits

0xe494,	// (0x000892bc) popup_call_audio_second_window_t2

0xe4ca,	// (0x000892f2) popup_call_audio_second_window_t3_ParamLimits

0xe4ca,	// (0x000892f2) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00089f5c) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00089f5c) popup_call_audio_second_window_t

0xe2c3,	// (0x000890eb) bg_popup_call_pane_cp04

0xe500,	// (0x00089328) list_conf_pane

0xe508,	// (0x00089330) popup_call_audio_conf_window_t1

0xe516,	// (0x0008933e) call_thumbnail_pane_g1

0xe51e,	// (0x00089346) bg_pinb_pane_ParamLimits

0xe51e,	// (0x00089346) bg_pinb_pane

0xe52c,	// (0x00089354) find_pinb_pane

0xe535,	// (0x0008935d) listscroll_pinb_pane_ParamLimits

0xe535,	// (0x0008935d) listscroll_pinb_pane

0xe544,	// (0x0008936c) pinb_bg_pane_g1

0x564c,	// (0x00080474) pinb_bg_pane_g2

0x5658,	// (0x00080480) pinb_bg_pane_g3

0x5664,	// (0x0008048c) pinb_bg_pane_g4

0x5670,	// (0x00080498) pinb_bg_pane_g5

0x567c,	// (0x000804a4) pinb_bg_pane_g6

0x5687,	// (0x000804af) pinb_bg_pane_g7

0x5692,	// (0x000804ba) pinb_bg_pane_g8

0x569d,	// (0x000804c5) pinb_bg_pane_g9

0x56a7,	// (0x000804cf) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00089f63) pinb_bg_pane_g

0x56bc,	// (0x000804e4) grid_pinb_pane

0x56c7,	// (0x000804ef) list_pinb_pane

0x56d2,	// (0x000804fa) scroll_pane_cp01_ParamLimits

0x56d2,	// (0x000804fa) scroll_pane_cp01

0xe556,	// (0x0008937e) find_pinb_pane_g1_ParamLimits

0xe556,	// (0x0008937e) find_pinb_pane_g1

0xe56e,	// (0x00089396) find_pinb_pane_t1

0xe580,	// (0x000893a8) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00089f7d) find_pinb_pane_t

0xe595,	// (0x000893bd) input_focus_pane_cp01_ParamLimits

0xe595,	// (0x000893bd) input_focus_pane_cp01

0x56e4,	// (0x0008050c) cell_pinb_pane_ParamLimits

0x56e4,	// (0x0008050c) cell_pinb_pane

0x5712,	// (0x0008053a) cell_pinb_pane_g1_ParamLimits

0x5712,	// (0x0008053a) cell_pinb_pane_g1

0x5727,	// (0x0008054f) cell_pinb_pane_g2_ParamLimits

0x5727,	// (0x0008054f) cell_pinb_pane_g2

0xe5a1,	// (0x000893c9) cell_pinb_pane_g3_ParamLimits

0xe5a1,	// (0x000893c9) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00089f82) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00089f82) cell_pinb_pane_g

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp01

0x5733,	// (0x0008055b) list_pinb_item_pane_ParamLimits

0x5733,	// (0x0008055b) list_pinb_item_pane

0xe2c3,	// (0x000890eb) list_highlight_pane_cp02

0xe5ad,	// (0x000893d5) list_pinb_item_pane_g1_ParamLimits

0xe5ad,	// (0x000893d5) list_pinb_item_pane_g1

0xe5ba,	// (0x000893e2) list_pinb_item_pane_g2_ParamLimits

0xe5ba,	// (0x000893e2) list_pinb_item_pane_g2

0x575d,	// (0x00080585) list_pinb_item_pane_g3_ParamLimits

0x575d,	// (0x00080585) list_pinb_item_pane_g3

0xe5c6,	// (0x000893ee) list_pinb_item_pane_g4_ParamLimits

0xe5c6,	// (0x000893ee) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00089f89) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00089f89) list_pinb_item_pane_g

0xe5d2,	// (0x000893fa) list_pinb_item_pane_t1_ParamLimits

0xe5d2,	// (0x000893fa) list_pinb_item_pane_t1

0x5788,	// (0x000805b0) calc_display_pane

0x57a6,	// (0x000805ce) calc_paper_pane

0x57c2,	// (0x000805ea) grid_calc_pane

0xe2c3,	// (0x000890eb) bg_list_pane_cp01

0x57ee,	// (0x00080616) clock_g1

0x57f6,	// (0x0008061e) clock_g2

0x0001,

0xf16a,	// (0x00089f92) clock_g

0x5800,	// (0x00080628) clock_t1_ParamLimits

0x5800,	// (0x00080628) clock_t1

0x5815,	// (0x0008063d) clock_t2_ParamLimits

0x5815,	// (0x0008063d) clock_t2

0x5827,	// (0x0008064f) clock_t3_ParamLimits

0x5827,	// (0x0008064f) clock_t3

0x5839,	// (0x00080661) clock_t4_ParamLimits

0x5839,	// (0x00080661) clock_t4

0x584b,	// (0x00080673) clock_t5_ParamLimits

0x584b,	// (0x00080673) clock_t5

0x5860,	// (0x00080688) clock_t6_ParamLimits

0x5860,	// (0x00080688) clock_t6

0x5872,	// (0x0008069a) clock_t7_ParamLimits

0x5872,	// (0x0008069a) clock_t7

0x5884,	// (0x000806ac) clock_t8_ParamLimits

0x5884,	// (0x000806ac) clock_t8

0x589a,	// (0x000806c2) clock_t9_ParamLimits

0x589a,	// (0x000806c2) clock_t9

0x0008,

0xf16f,	// (0x00089f97) clock_t_ParamLimits

0xf16f,	// (0x00089f97) clock_t

0xe5e9,	// (0x00089411) popup_clock_analogue_window_cp02

0xe5e9,	// (0x00089411) popup_clock_digital_window_cp01

0xe5f1,	// (0x00089419) listscroll_help_pane

0xe2c3,	// (0x000890eb) phob_pre_status_pane

0xe5fb,	// (0x00089423) grid_qdial_pane

0xe2c3,	// (0x000890eb) listscroll_mce_pane

0xe605,	// (0x0008942d) bg_notes_pane

0xe60f,	// (0x00089437) list_notes_pane

0x58b0,	// (0x000806d8) scroll_pane_cp06

0xe619,	// (0x00089441) bg_calc_paper_pane

0x58c5,	// (0x000806ed) list_calc_pane

0xe62d,	// (0x00089455) bg_calc_display_pane

0x58df,	// (0x00080707) calc_display_pane_t1

0x58f4,	// (0x0008071c) calc_display_pane_t2

0x5909,	// (0x00080731) calc_display_pane_t3

0x0002,

0xf182,	// (0x00089faa) calc_display_pane_t

0x591b,	// (0x00080743) cell_calc_pane_ParamLimits

0x591b,	// (0x00080743) cell_calc_pane

0xe639,	// (0x00089461) bg_calc_paper_pane_g1

0xe645,	// (0x0008946d) bg_calc_paper_pane_g2

0xe651,	// (0x00089479) bg_calc_paper_pane_g3

0xe65d,	// (0x00089485) bg_calc_paper_pane_g4

0xe669,	// (0x00089491) bg_calc_paper_pane_g5

0x5948,	// (0x00080770) bg_calc_paper_pane_g6

0x5959,	// (0x00080781) bg_calc_paper_pane_g7

0x596a,	// (0x00080792) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00089fb1) bg_calc_paper_pane_g

0x597b,	// (0x000807a3) calc_bg_paper_pane_g9

0x598c,	// (0x000807b4) list_calc_item_pane_ParamLimits

0x598c,	// (0x000807b4) list_calc_item_pane

0xe675,	// (0x0008949d) list_calc_item_pane_g1

0x59c6,	// (0x000807ee) list_calc_item_pane_t1_ParamLimits

0x59c6,	// (0x000807ee) list_calc_item_pane_t1

0x59d8,	// (0x00080800) list_calc_item_pane_t2_ParamLimits

0x59d8,	// (0x00080800) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00089fc2) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00089fc2) list_calc_item_pane_t

0xe682,	// (0x000894aa) cell_calc_pane_g1

0xe68c,	// (0x000894b4) grid_highlight_pane_cp02

0xe6ae,	// (0x000894d6) bg_calc_display_pane_g1

0x5a08,	// (0x00080830) bg_calc_display_pane_g2

0xe6b7,	// (0x000894df) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00089fcc) bg_calc_display_pane_g

0x5a12,	// (0x0008083a) cell_qdial_pane_ParamLimits

0x5a12,	// (0x0008083a) cell_qdial_pane

0x5a26,	// (0x0008084e) cell_qdial_pane_g1_ParamLimits

0x5a26,	// (0x0008084e) cell_qdial_pane_g1

0x5a33,	// (0x0008085b) cell_qdial_pane_g2_ParamLimits

0x5a33,	// (0x0008085b) cell_qdial_pane_g2

0xe6c0,	// (0x000894e8) cell_qdial_pane_g3_ParamLimits

0xe6c0,	// (0x000894e8) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00089fd3) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00089fd3) cell_qdial_pane_g

0x5a51,	// (0x00080879) cell_qdial_pane_t1_ParamLimits

0x5a51,	// (0x00080879) cell_qdial_pane_t1

0x5a69,	// (0x00080891) cell_qdial_pane_t2_ParamLimits

0x5a69,	// (0x00080891) cell_qdial_pane_t2

0x5a7c,	// (0x000808a4) cell_qdial_pane_t3_ParamLimits

0x5a7c,	// (0x000808a4) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00089fdc) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00089fdc) cell_qdial_pane_t

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp04

0xe6cc,	// (0x000894f4) thumbnail_qdial_pane_ParamLimits

0xe6cc,	// (0x000894f4) thumbnail_qdial_pane

0xe728,	// (0x00089550) list_help_pane

0xe731,	// (0x00089559) scroll_pane_cp02

0x5a8f,	// (0x000808b7) help_list_pane_t1_ParamLimits

0x5a8f,	// (0x000808b7) help_list_pane_t1

0x5acd,	// (0x000808f5) bg_notes_pane_g2

0x5ad5,	// (0x000808fd) bg_notes_pane_g3

0x5add,	// (0x00080905) notes_bg_pane_g1

0x5ae5,	// (0x0008090d) notes_bg_pane_g4

0x5aed,	// (0x00080915) notes_bg_pane_g5

0x5af5,	// (0x0008091d) notes_bg_pane_g6

0x5afd,	// (0x00080925) notes_bg_pane_g7

0x5b05,	// (0x0008092d) notes_bg_pane_g8

0x5b0d,	// (0x00080935) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00089ffa) notes_bg_pane_g

0x5b15,	// (0x0008093d) list_notes_text_pane_ParamLimits

0x5b15,	// (0x0008093d) list_notes_text_pane

0xe73a,	// (0x00089562) list_notes_text_pane_g1

0x5b45,	// (0x0008096d) list_notes_text_pane_t1

0xe62d,	// (0x00089455) listscroll_cale_week_pane

0x5b70,	// (0x00080998) bg_cale_heading_pane

0xe754,	// (0x0008957c) bg_cale_pane_cp01

0x5b84,	// (0x000809ac) cale_week_corner_pane

0x5b95,	// (0x000809bd) cale_week_day_heading_pane

0x5ba9,	// (0x000809d1) cale_week_scroll_pane_g1

0x5bba,	// (0x000809e2) cale_week_scroll_pane_g2

0x5bcb,	// (0x000809f3) cale_week_scroll_pane_g3

0x5bdc,	// (0x00080a04) cale_week_scroll_pane_g4

0x5bed,	// (0x00080a15) cale_week_scroll_pane_g5

0x5bfe,	// (0x00080a26) cale_week_scroll_pane_g6

0x5c0f,	// (0x00080a37) cale_week_scroll_pane_g7

0x5c22,	// (0x00080a4a) cale_week_scroll_pane_g8

0x5c35,	// (0x00080a5d) cale_week_scroll_pane_g9

0x5c46,	// (0x00080a6e) cale_week_scroll_pane_g10

0x5c57,	// (0x00080a7f) cale_week_scroll_pane_g11

0x5c68,	// (0x00080a90) cale_week_scroll_pane_g12

0x5c79,	// (0x00080aa1) cale_week_scroll_pane_g13

0x5c8a,	// (0x00080ab2) cale_week_scroll_pane_g14

0x5c9b,	// (0x00080ac3) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0008a009) cale_week_scroll_pane_g

0x5cac,	// (0x00080ad4) cale_week_time_pane

0x5cbf,	// (0x00080ae7) grid_cale_week_pane

0x5cd4,	// (0x00080afc) scroll_pane_cp08

0x5cee,	// (0x00080b16) cell_cale_week_pane_ParamLimits

0x5cee,	// (0x00080b16) cell_cale_week_pane

0x5d2a,	// (0x00080b52) cale_week_day_heading_pane_t1

0x5d3e,	// (0x00080b66) cale_week_day_heading_pane_t2

0x5d52,	// (0x00080b7a) cale_week_day_heading_pane_t3

0x5d66,	// (0x00080b8e) cale_week_day_heading_pane_t4

0x5d7a,	// (0x00080ba2) cale_week_day_heading_pane_t5

0x5d8e,	// (0x00080bb6) cale_week_day_heading_pane_t6

0x5da2,	// (0x00080bca) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0008a028) cale_week_day_heading_pane_t

0xe77f,	// (0x000895a7) bg_cale_side_pane

0x5db6,	// (0x00080bde) cale_week_time_pane_t1

0x5dce,	// (0x00080bf6) cale_week_time_pane_t2

0x5de6,	// (0x00080c0e) cale_week_time_pane_t3

0x5dfe,	// (0x00080c26) cale_week_time_pane_t4

0x5e16,	// (0x00080c3e) cale_week_time_pane_t5

0x5e2e,	// (0x00080c56) cale_week_time_pane_t6

0x5e46,	// (0x00080c6e) cale_week_time_pane_t7

0x5e5e,	// (0x00080c86) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0008a037) cale_week_time_pane_t

0x5e76,	// (0x00080c9e) cell_cale_week_pane_g2

0x5e8f,	// (0x00080cb7) cell_cale_week_pane_g3_ParamLimits

0x5e8f,	// (0x00080cb7) cell_cale_week_pane_g3

0xe78d,	// (0x000895b5) grid_highlight_pane_cp07

0xe795,	// (0x000895bd) listscroll_gms_pane

0xe79f,	// (0x000895c7) grid_gms_pane

0xe7a8,	// (0x000895d0) listscroll_gms_pane_g1

0xe7b0,	// (0x000895d8) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0008a048) listscroll_gms_pane_g

0x5ea7,	// (0x00080ccf) scroll_pane_cp010

0x5eb2,	// (0x00080cda) cell_gms_pane_ParamLimits

0x5eb2,	// (0x00080cda) cell_gms_pane

0x5ec4,	// (0x00080cec) cell_gms_pane_g1

0xe7b8,	// (0x000895e0) cell_gms_pane_g2

0xe73a,	// (0x00089562) cell_gms_pane_g3

0xe7c0,	// (0x000895e8) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0008a04d) cell_gms_pane_g

0xe7c9,	// (0x000895f1) grid_highlight_pane_cp09

0x8134,	// (0x00082f5c) phob_pre_status_pane_g1

0x813c,	// (0x00082f64) phob_pre_status_pane_g2

0x8144,	// (0x00082f6c) phob_pre_status_pane_g3

0x814c,	// (0x00082f74) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0008a43c) phob_pre_status_pane_g

0x815c,	// (0x00082f84) phob_pre_status_pane_t1

0x816c,	// (0x00082f94) phob_pre_status_pane_t2

0x817c,	// (0x00082fa4) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0008a447) phob_pre_status_pane_t

0xe2c3,	// (0x000890eb) bg_list_pane_cp05

0x5ed4,	// (0x00080cfc) grid_vorec_pane

0x5edc,	// (0x00080d04) vorec_t1

0x5eea,	// (0x00080d12) vorec_t2

0x5ef8,	// (0x00080d20) vorec_t3

0x5f06,	// (0x00080d2e) vorec_t4

0x5f14,	// (0x00080d3c) vorec_t5

0x5f22,	// (0x00080d4a) vorec_t6

0x0006,

0xf22e,	// (0x0008a056) vorec_t

0x5f3e,	// (0x00080d66) wait_bar_pane_cp01

0xe7d1,	// (0x000895f9) cell_vorec_pane_ParamLimits

0xe7d1,	// (0x000895f9) cell_vorec_pane

0xe7e4,	// (0x0008960c) cell_vorec_pane_g1

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp05

0x5f56,	// (0x00080d7e) cams_zoom_pane

0x5f62,	// (0x00080d8a) image_vga_pane

0x5f71,	// (0x00080d99) main_camera_pane_g1

0x5f7f,	// (0x00080da7) main_camera_pane_g2

0x5f8d,	// (0x00080db5) main_camera_pane_g3

0x5f99,	// (0x00080dc1) main_camera_pane_g4

0x5fa5,	// (0x00080dcd) main_camera_pane_g5

0x5fb1,	// (0x00080dd9) main_camera_pane_g6

0x5fbd,	// (0x00080de5) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0008a065) main_camera_pane_g

0x5fc9,	// (0x00080df1) main_camera_pane_t1

0x5fdb,	// (0x00080e03) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0008a076) main_camera_pane_t

0x5ffc,	// (0x00080e24) cams_zoom_pane_cp_ParamLimits

0x5ffc,	// (0x00080e24) cams_zoom_pane_cp

0x6020,	// (0x00080e48) image_cif_pane_ParamLimits

0x6020,	// (0x00080e48) image_cif_pane

0x603e,	// (0x00080e66) image_subqcif_pane

0x6046,	// (0x00080e6e) main_video_pane_g1_ParamLimits

0x6046,	// (0x00080e6e) main_video_pane_g1

0x6066,	// (0x00080e8e) main_video_pane_g2_ParamLimits

0x6066,	// (0x00080e8e) main_video_pane_g2

0x6098,	// (0x00080ec0) main_video_pane_g3_ParamLimits

0x6098,	// (0x00080ec0) main_video_pane_g3

0x60c3,	// (0x00080eeb) main_video_pane_g4_ParamLimits

0x60c3,	// (0x00080eeb) main_video_pane_g4

0x60ee,	// (0x00080f16) main_video_pane_g5_ParamLimits

0x60ee,	// (0x00080f16) main_video_pane_g5

0xe7fa,	// (0x00089622) main_video_pane_g6_ParamLimits

0xe7fa,	// (0x00089622) main_video_pane_g6

0x0006,

0xf253,	// (0x0008a07b) main_video_pane_g_ParamLimits

0xf253,	// (0x0008a07b) main_video_pane_g

0x6112,	// (0x00080f3a) main_video_pane_t1_ParamLimits

0x6112,	// (0x00080f3a) main_video_pane_t1

0xe814,	// (0x0008963c) cams_zoom_pane_g1

0xe81d,	// (0x00089645) cams_zoom_pane_g2

0xe826,	// (0x0008964e) cams_zoom_pane_g3

0xe82f,	// (0x00089657) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0008a08a) cams_zoom_pane_g

0x615c,	// (0x00080f84) grid_cams_pane

0x616a,	// (0x00080f92) linegrid_cams_pane

0x6178,	// (0x00080fa0) cell_cams_pane_ParamLimits

0x6178,	// (0x00080fa0) cell_cams_pane

0xe838,	// (0x00089660) cams_burst_image_pane

0xe840,	// (0x00089668) cell_cams_pane_g1

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp03

0xe682,	// (0x000894aa) mp_bg_pane_g1

0xe2c3,	// (0x000890eb) bg_list_pane_cp03

0x2203,	// (0x0007d02b) bg_mp_pane

0x220b,	// (0x0007d033) grid_mp_pane

0x2213,	// (0x0007d03b) media_player_g1

0x221b,	// (0x0007d043) media_player_t1

0x2229,	// (0x0007d051) media_player_t2

0x2237,	// (0x0007d05f) media_player_t3

0x2245,	// (0x0007d06d) media_player_t4

0x2253,	// (0x0007d07b) media_player_t5

0x2261,	// (0x0007d089) media_player_t6

0x226f,	// (0x0007d097) media_player_t7

0x0006,

0xf5fe,	// (0x0008a426) media_player_t

0x227d,	// (0x0007d0a5) wait_bar_pane_cp02

0xf5e3,	// (0x0008a40b) main_usb_pane_t

0x812b,	// (0x00082f53) cell_mp_pane

0xe682,	// (0x000894aa) cell_mp_pane_g1

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp06

0xe848,	// (0x00089670) grid_skin_colour_pane

0xe850,	// (0x00089678) list_highlight_pane_cp03

0x61db,	// (0x00081003) skin_g1

0xe858,	// (0x00089680) skin_t1

0xe867,	// (0x0008968f) skin_t2

0x0001,

0xf297,	// (0x0008a0bf) skin_t

0x61e5,	// (0x0008100d) cell_skin_colour_pane_ParamLimits

0x61e5,	// (0x0008100d) cell_skin_colour_pane

0xe875,	// (0x0008969d) cell_skin_colour_pane_g1

0x6234,	// (0x0008105c) call_video_g1_ParamLimits

0x6234,	// (0x0008105c) call_video_g1

0x6244,	// (0x0008106c) call_video_g2_ParamLimits

0x6244,	// (0x0008106c) call_video_g2

0x0001,

0xf29c,	// (0x0008a0c4) call_video_g_ParamLimits

0xf29c,	// (0x0008a0c4) call_video_g

0x6282,	// (0x000810aa) call_video_uplink_pane_cp1_ParamLimits

0x6282,	// (0x000810aa) call_video_uplink_pane_cp1

0xe88f,	// (0x000896b7) call_video_uplink_pane_cp2

0x632e,	// (0x00081156) video_down_crop_pane_ParamLimits

0x632e,	// (0x00081156) video_down_crop_pane

0x6406,	// (0x0008122e) video_down_pane_ParamLimits

0x6406,	// (0x0008122e) video_down_pane

0xe897,	// (0x000896bf) video_down_subqcif_pane_ParamLimits

0xe897,	// (0x000896bf) video_down_subqcif_pane

0xe8af,	// (0x000896d7) video_down_subqcif_pane_cp_ParamLimits

0xe8af,	// (0x000896d7) video_down_subqcif_pane_cp

0xe8d3,	// (0x000896fb) im_reading_pane_ParamLimits

0xe8d3,	// (0x000896fb) im_reading_pane

0x64e8,	// (0x00081310) im_writing_pane_ParamLimits

0x64e8,	// (0x00081310) im_writing_pane

0x6506,	// (0x0008132e) im_reading_pane_t1

0xe8ed,	// (0x00089715) list_im_pane

0xe8fe,	// (0x00089726) scroll_pane_cp07

0x6566,	// (0x0008138e) im_writing_pane_t1_ParamLimits

0x6566,	// (0x0008138e) im_writing_pane_t1

0xe917,	// (0x0008973f) im_writing_pane_t2_ParamLimits

0xe917,	// (0x0008973f) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0008a0ce) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0008a0ce) im_writing_pane_t

0xe2c3,	// (0x000890eb) input_focus_pane_cp04

0xe2c3,	// (0x000890eb) input_focus_pane_cp05

0x6578,	// (0x000813a0) list_im_single_pane_ParamLimits

0x6578,	// (0x000813a0) list_im_single_pane

0x65a4,	// (0x000813cc) list_single_im_pane_t1

0x80ef,	// (0x00082f17) blid_accuracy_pane

0x80f7,	// (0x00082f1f) blid_compass_pane

0x8101,	// (0x00082f29) main_location_t1

0x810f,	// (0x00082f37) main_location_t2

0x811d,	// (0x00082f45) main_location_t3

0x0002,

0xf60d,	// (0x0008a435) main_location_t

0xe2c3,	// (0x000890eb) aid_levels_location

0xe682,	// (0x000894aa) blid_accuracy_pane_g1

0xe682,	// (0x000894aa) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0008a130) blid_accuracy_pane_g

0xe95f,	// (0x00089787) wml_content_pane

0xe99d,	// (0x000897c5) wml_button_pane_ParamLimits

0xe99d,	// (0x000897c5) wml_button_pane

0x65b3,	// (0x000813db) wml_list_single_large_pane_ParamLimits

0x65b3,	// (0x000813db) wml_list_single_large_pane

0x65e5,	// (0x0008140d) wml_list_single_medium_pane_ParamLimits

0x65e5,	// (0x0008140d) wml_list_single_medium_pane

0x661e,	// (0x00081446) wml_list_single_small_pane_ParamLimits

0x661e,	// (0x00081446) wml_list_single_small_pane

0xe9b1,	// (0x000897d9) wml_selection_box_pane_ParamLimits

0xe9b1,	// (0x000897d9) wml_selection_box_pane

0xe9c4,	// (0x000897ec) wml_list_single_pane_t1

0xe9d3,	// (0x000897fb) wml_list_single_medium_pane_t1

0xe9e2,	// (0x0008980a) wml_list_single_large_pane_t1

0xe9f1,	// (0x00089819) input_focus_pane_cp02_ParamLimits

0xe9f1,	// (0x00089819) input_focus_pane_cp02

0xea04,	// (0x0008982c) wml_selection_box_pane_g1

0xea0d,	// (0x00089835) wml_selection_box_pane_t1_ParamLimits

0xea0d,	// (0x00089835) wml_selection_box_pane_t1

0xe51e,	// (0x00089346) bg_wml_button_pane_ParamLimits

0xe51e,	// (0x00089346) bg_wml_button_pane

0xea25,	// (0x0008984d) wml_button_pane_g1

0xea2d,	// (0x00089855) wml_button_pane_t1

0xea25,	// (0x0008984d) wml_button_bg_pane_g1

0xea3d,	// (0x00089865) wml_button_bg_pane_g2

0xea45,	// (0x0008986d) wml_button_bg_pane_g3

0xea4d,	// (0x00089875) wml_button_bg_pane_g4

0xea55,	// (0x0008987d) wml_button_bg_pane_g5

0xea5d,	// (0x00089885) wml_button_bg_pane_g6

0xea65,	// (0x0008988d) wml_button_bg_pane_g7

0xea6d,	// (0x00089895) wml_button_bg_pane_g8

0xea75,	// (0x0008989d) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0008a0d3) wml_button_bg_pane_g

0x6666,	// (0x0008148e) bg_list_pane_cp02

0xea7d,	// (0x000898a5) mce_header_pane_ParamLimits

0xea7d,	// (0x000898a5) mce_header_pane

0xea93,	// (0x000898bb) mce_icon_pane

0xea93,	// (0x000898bb) mce_image_pane

0xea9c,	// (0x000898c4) mce_text_pane_ParamLimits

0xea9c,	// (0x000898c4) mce_text_pane

0x6670,	// (0x00081498) scroll_pane_cp03

0xe995,	// (0x000897bd) scroll_pane_cp04

0x073f,	// (0x0007b567) scroll_pane_cp05_ParamLimits

0x073f,	// (0x0007b567) scroll_pane_cp05

0x667a,	// (0x000814a2) mce_header_field_pane_ParamLimits

0x667a,	// (0x000814a2) mce_header_field_pane

0x669a,	// (0x000814c2) mce_header_field_pane_2_ParamLimits

0x669a,	// (0x000814c2) mce_header_field_pane_2

0x66b0,	// (0x000814d8) mce_header_field_pane_3

0x66b8,	// (0x000814e0) list_single_mce_message_pane_ParamLimits

0x66b8,	// (0x000814e0) list_single_mce_message_pane

0x66e8,	// (0x00081510) list_single_mce_smart_pane_ParamLimits

0x66e8,	// (0x00081510) list_single_mce_smart_pane

0x074b,	// (0x0007b573) input_focus_pane_cp03

0x0754,	// (0x0007b57c) list_header_data_pane

0x6723,	// (0x0008154b) mce_header_field_pane_t1

0x6733,	// (0x0008155b) list_single_mce_header_pane_ParamLimits

0x6733,	// (0x0008155b) list_single_mce_header_pane

0x075c,	// (0x0007b584) list_single_mce_header_pane_t1

0x076b,	// (0x0007b593) list_single_mce_message_pane_g1

0x0773,	// (0x0007b59b) list_single_mce_message_pane_t1

0x6785,	// (0x000815ad) bg_cale_heading_pane_cp01_ParamLimits

0x6785,	// (0x000815ad) bg_cale_heading_pane_cp01

0x0781,	// (0x0007b5a9) bg_cale_pane_cp02_ParamLimits

0x0781,	// (0x0007b5a9) bg_cale_pane_cp02

0x67a8,	// (0x000815d0) cale_month_corner_pane

0x67be,	// (0x000815e6) cale_month_day_heading_pane_ParamLimits

0x67be,	// (0x000815e6) cale_month_day_heading_pane

0x67f1,	// (0x00081619) cale_month_pane_g1_ParamLimits

0x67f1,	// (0x00081619) cale_month_pane_g1

0x680d,	// (0x00081635) cale_month_pane_g2_ParamLimits

0x680d,	// (0x00081635) cale_month_pane_g2

0x6828,	// (0x00081650) cale_month_pane_g3_ParamLimits

0x6828,	// (0x00081650) cale_month_pane_g3

0x6854,	// (0x0008167c) cale_month_pane_g4_ParamLimits

0x6854,	// (0x0008167c) cale_month_pane_g4

0x6880,	// (0x000816a8) cale_month_pane_g5_ParamLimits

0x6880,	// (0x000816a8) cale_month_pane_g5

0x68ac,	// (0x000816d4) cale_month_pane_g6_ParamLimits

0x68ac,	// (0x000816d4) cale_month_pane_g6

0x68d8,	// (0x00081700) cale_month_pane_g7_ParamLimits

0x68d8,	// (0x00081700) cale_month_pane_g7

0x6914,	// (0x0008173c) cale_month_pane_g8_ParamLimits

0x6914,	// (0x0008173c) cale_month_pane_g8

0x6950,	// (0x00081778) cale_month_pane_g9_ParamLimits

0x6950,	// (0x00081778) cale_month_pane_g9

0x698a,	// (0x000817b2) cale_month_pane_g10_ParamLimits

0x698a,	// (0x000817b2) cale_month_pane_g10

0x69c4,	// (0x000817ec) cale_month_pane_g11_ParamLimits

0x69c4,	// (0x000817ec) cale_month_pane_g11

0x69fe,	// (0x00081826) cale_month_pane_g12_ParamLimits

0x69fe,	// (0x00081826) cale_month_pane_g12

0x6a38,	// (0x00081860) cale_month_pane_g13_ParamLimits

0x6a38,	// (0x00081860) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0008a0e6) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0008a0e6) cale_month_pane_g

0x6a72,	// (0x0008189a) cale_month_week_pane

0x6a85,	// (0x000818ad) grid_cale_month_pane_ParamLimits

0x6a85,	// (0x000818ad) grid_cale_month_pane

0x6ab3,	// (0x000818db) cale_month_day_heading_pane_t1

0x6b11,	// (0x00081939) cale_month_day_heading_pane_t2

0x6b76,	// (0x0008199e) cale_month_day_heading_pane_t3

0x6bdb,	// (0x00081a03) cale_month_day_heading_pane_t4

0x6c40,	// (0x00081a68) cale_month_day_heading_pane_t5

0x6ca5,	// (0x00081acd) cale_month_day_heading_pane_t6

0x6d12,	// (0x00081b3a) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0008a101) cale_month_day_heading_pane_t

0xe77f,	// (0x000895a7) bg_cale_side_pane_cp01

0x6d87,	// (0x00081baf) cale_month_week_pane_t1

0x6d9e,	// (0x00081bc6) cale_month_week_pane_t2

0x6db5,	// (0x00081bdd) cale_month_week_pane_t3

0x6dcc,	// (0x00081bf4) cale_month_week_pane_t4

0x6de3,	// (0x00081c0b) cale_month_week_pane_t5

0x6dfa,	// (0x00081c22) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0008a110) cale_month_week_pane_t

0x6e11,	// (0x00081c39) cell_cale_month_pane_ParamLimits

0x6e11,	// (0x00081c39) cell_cale_month_pane

0x6ec7,	// (0x00081cef) cell_cale_month_pane_g1

0x6ed3,	// (0x00081cfb) cell_cale_month_pane_t1_ParamLimits

0x6ed3,	// (0x00081cfb) cell_cale_month_pane_t1

0xe78d,	// (0x000895b5) grid_highlight_pane_cp08

0xe682,	// (0x000894aa) main_smil_g1

0x6eef,	// (0x00081d17) smil_status_pane

0x07ec,	// (0x0007b614) smil_text_pane

0x2123,	// (0x0007cf4b) bg_popup_call3_rect_pane_g8

0x212b,	// (0x0007cf53) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008a3c9) bg_popup_call3_rect_pane_g

0x23b8,	// (0x0007d1e0) smil_status_volume_pane_g1

0x07f6,	// (0x0007b61e) smil_status_pane_t1

0x84d3,	// (0x000832fb) volume_smil_pane

0x080d,	// (0x0007b635) list_smil_text_pane

0x6f02,	// (0x00081d2a) scroll_pane_cp011

0x6f0d,	// (0x00081d35) smil_text_list_pane_t1_ParamLimits

0x6f0d,	// (0x00081d35) smil_text_list_pane_t1

0x6fb8,	// (0x00081de0) aid_volume_smil_ParamLimits

0x6fb8,	// (0x00081de0) aid_volume_smil

0xe682,	// (0x000894aa) smil_volume_pane_g1

0xe682,	// (0x000894aa) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0008a130) smil_volume_pane_g

0xe62d,	// (0x00089455) listscroll_cale_day_pane

0x0839,	// (0x0007b661) bg_cale_pane

0x0851,	// (0x0007b679) list_cale_pane

0x0862,	// (0x0007b68a) scroll_pane_cp09

0x0873,	// (0x0007b69b) cale_bg_pane_g1

0x087b,	// (0x0007b6a3) cale_bg_pane_g2

0x0883,	// (0x0007b6ab) cale_bg_pane_g3

0x088b,	// (0x0007b6b3) cale_bg_pane_g4

0x0893,	// (0x0007b6bb) cale_bg_pane_g5

0x089b,	// (0x0007b6c3) cale_bg_pane_g6

0x08a3,	// (0x0007b6cb) cale_bg_pane_g7

0x08ab,	// (0x0007b6d3) cale_bg_pane_g8

0x08b3,	// (0x0007b6db) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0008a135) cale_bg_pane_g

0x6fda,	// (0x00081e02) list_cale_time_pane_ParamLimits

0x6fda,	// (0x00081e02) list_cale_time_pane

0x6ffb,	// (0x00081e23) list_cale_time_pane_g1_ParamLimits

0x6ffb,	// (0x00081e23) list_cale_time_pane_g1

0x08bb,	// (0x0007b6e3) list_cale_time_pane_g2_ParamLimits

0x08bb,	// (0x0007b6e3) list_cale_time_pane_g2

0x7007,	// (0x00081e2f) list_cale_time_pane_g3_ParamLimits

0x7007,	// (0x00081e2f) list_cale_time_pane_g3

0x7023,	// (0x00081e4b) list_cale_time_pane_g4_ParamLimits

0x7023,	// (0x00081e4b) list_cale_time_pane_g4

0x7031,	// (0x00081e59) list_cale_time_pane_g5_ParamLimits

0x7031,	// (0x00081e59) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0008a148) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0008a148) list_cale_time_pane_g

0x703f,	// (0x00081e67) list_cale_time_pane_t1_ParamLimits

0x703f,	// (0x00081e67) list_cale_time_pane_t1

0x7067,	// (0x00081e8f) list_cale_time_pane_t2_ParamLimits

0x7067,	// (0x00081e8f) list_cale_time_pane_t2

0x73b5,	// (0x000821dd) aid_blid_cardinal_pane

0x73f7,	// (0x0008221f) compass_pane_t4

0x708f,	// (0x00081eb7) list_cale_time_pane_t4_ParamLimits

0x708f,	// (0x00081eb7) list_cale_time_pane_t4

0x7405,	// (0x0008222d) compass_pane_t5

0x7415,	// (0x0008223d) compass_pane_t6

0x7423,	// (0x0008224b) compass_pane_t7

0x0dcf,	// (0x0007bbf7) navi_pane_cc_t1

0x0f36,	// (0x0007bd5e) aid_phob_thumbnail_center_pane

0x7bdd,	// (0x00082a05) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0008a155) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0008a155) list_cale_time_pane_t

0xdf1c,	// (0x00088d44) bg_popup_window_pane_cp02_ParamLimits

0xdf1c,	// (0x00088d44) bg_popup_window_pane_cp02

0x08d5,	// (0x0007b6fd) heading_pane_cp01_ParamLimits

0x08d5,	// (0x0007b6fd) heading_pane_cp01

0x08e1,	// (0x0007b709) loc_req_pane_ParamLimits

0x08e1,	// (0x0007b709) loc_req_pane

0x08f1,	// (0x0007b719) loc_type_pane_ParamLimits

0x08f1,	// (0x0007b719) loc_type_pane

0x0903,	// (0x0007b72b) loc_type_pane_t1_ParamLimits

0x0903,	// (0x0007b72b) loc_type_pane_t1

0x0915,	// (0x0007b73d) loc_type_pane_t2_ParamLimits

0x0915,	// (0x0007b73d) loc_type_pane_t2

0x0927,	// (0x0007b74f) loc_type_pane_t3_ParamLimits

0x0927,	// (0x0007b74f) loc_type_pane_t3

0x0002,

0xf334,	// (0x0008a15c) loc_type_pane_t_ParamLimits

0xf334,	// (0x0008a15c) loc_type_pane_t

0x0939,	// (0x0007b761) list_loc_req_pane

0x0943,	// (0x0007b76b) scroll_pane_cp012

0x70b7,	// (0x00081edf) list_single_loc_request_popup_menu_pane_ParamLimits

0x70b7,	// (0x00081edf) list_single_loc_request_popup_menu_pane

0x094e,	// (0x0007b776) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x094e,	// (0x0007b776) list_single_loc_request_popup_menu_pane_g1

0x095a,	// (0x0007b782) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x095a,	// (0x0007b782) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0008a163) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0008a163) list_single_loc_request_popup_menu_pane_g

0x0966,	// (0x0007b78e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0966,	// (0x0007b78e) list_single_loc_request_popup_menu_pane_t1

0x70c9,	// (0x00081ef1) bg_popup_window_pane_cp03_ParamLimits

0x70c9,	// (0x00081ef1) bg_popup_window_pane_cp03

0x70d7,	// (0x00081eff) heading_loc_req_pane_ParamLimits

0x70d7,	// (0x00081eff) heading_loc_req_pane

0x70e3,	// (0x00081f0b) popup_dyc_status_message_window_g1_ParamLimits

0x70e3,	// (0x00081f0b) popup_dyc_status_message_window_g1

0x70ef,	// (0x00081f17) popup_dyc_status_message_window_t1_ParamLimits

0x70ef,	// (0x00081f17) popup_dyc_status_message_window_t1

0x7101,	// (0x00081f29) popup_dyc_status_message_window_t2_ParamLimits

0x7101,	// (0x00081f29) popup_dyc_status_message_window_t2

0x7113,	// (0x00081f3b) popup_dyc_status_message_window_t3_ParamLimits

0x7113,	// (0x00081f3b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0008a168) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0008a168) popup_dyc_status_message_window_t

0xe2c3,	// (0x000890eb) bg_heading_pane_cp01

0x097c,	// (0x0007b7a4) heading_loc_req_pane_g1

0x0984,	// (0x0007b7ac) heading_loc_req_pane_g2

0x098c,	// (0x0007b7b4) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0008a16f) heading_loc_req_pane_g

0x0994,	// (0x0007b7bc) heading_loc_req_pane_t1

0x0a1a,	// (0x0007b842) bg_popup_sub_pane_cp01_ParamLimits

0x0a1a,	// (0x0007b842) bg_popup_sub_pane_cp01

0x0a28,	// (0x0007b850) popup_cale_events_window_g1_ParamLimits

0x0a28,	// (0x0007b850) popup_cale_events_window_g1

0x0a48,	// (0x0007b870) popup_cale_events_window_g2_ParamLimits

0x0a48,	// (0x0007b870) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0008a1a3) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0008a1a3) popup_cale_events_window_g

0x0a68,	// (0x0007b890) popup_cale_events_window_t1_ParamLimits

0x0a68,	// (0x0007b890) popup_cale_events_window_t1

0x0a7a,	// (0x0007b8a2) popup_cale_events_window_t2_ParamLimits

0x0a7a,	// (0x0007b8a2) popup_cale_events_window_t2

0x0ab8,	// (0x0007b8e0) popup_cale_events_window_t3_ParamLimits

0x0ab8,	// (0x0007b8e0) popup_cale_events_window_t3

0x0af2,	// (0x0007b91a) popup_cale_events_window_t4_ParamLimits

0x0af2,	// (0x0007b91a) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0008a1a8) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0008a1a8) popup_cale_events_window_t

0x7197,	// (0x00081fbf) call_type_pane

0x0f4e,	// (0x0007bd76) popup_call_status_window_g1

0x71a3,	// (0x00081fcb) popup_call_status_window_g2

0x71af,	// (0x00081fd7) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0008a1b1) popup_call_status_window_g

0x0b28,	// (0x0007b950) call_type_pane_g1

0x0b31,	// (0x0007b959) call_type_pane_g2

0x0001,

0xf390,	// (0x0008a1b8) call_type_pane_g

0xe2c3,	// (0x000890eb) bg_popup_sub_pane_cp02

0x0b3a,	// (0x0007b962) listscroll_popup_wml_pane

0x0b42,	// (0x0007b96a) list_wml_pane

0x0b4c,	// (0x0007b974) scroll_pane_cp013

0x0b57,	// (0x0007b97f) list_single_graphic_popup_wml_pane_ParamLimits

0x0b57,	// (0x0007b97f) list_single_graphic_popup_wml_pane

0xe682,	// (0x000894aa) list_single_graphic_popup_wml_pane_g1

0x0b6b,	// (0x0007b993) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0008a1bd) list_single_graphic_popup_wml_pane_g

0x0b73,	// (0x0007b99b) list_single_graphic_popup_wml_pane_t1

0x0b81,	// (0x0007b9a9) aid_call_pane

0xe516,	// (0x0008933e) popup_clock_analogue_window_g1

0xe516,	// (0x0008933e) popup_clock_analogue_window_g2

0x71bb,	// (0x00081fe3) popup_clock_analogue_window_g3

0x71bb,	// (0x00081fe3) popup_clock_analogue_window_g4

0xe682,	// (0x000894aa) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0008a1c2) popup_clock_analogue_window_g

0x71c3,	// (0x00081feb) popup_clock_analogue_window_t1

0x71d1,	// (0x00081ff9) clock_digital_number_pane_ParamLimits

0x71d1,	// (0x00081ff9) clock_digital_number_pane

0x71dd,	// (0x00082005) clock_digital_number_pane_cp02_ParamLimits

0x71dd,	// (0x00082005) clock_digital_number_pane_cp02

0x71e9,	// (0x00082011) clock_digital_number_pane_cp03_ParamLimits

0x71e9,	// (0x00082011) clock_digital_number_pane_cp03

0x71f5,	// (0x0008201d) clock_digital_number_pane_cp04_ParamLimits

0x71f5,	// (0x0008201d) clock_digital_number_pane_cp04

0x7201,	// (0x00082029) clock_digital_separator_pane_ParamLimits

0x7201,	// (0x00082029) clock_digital_separator_pane

0x720d,	// (0x00082035) popup_clock_digital_window_t1

0xe682,	// (0x000894aa) clock_digital_number_pane_g1

0xe682,	// (0x000894aa) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0008a130) clock_digital_number_pane_g

0xe682,	// (0x000894aa) clock_digital_separator_pane_g1

0xe682,	// (0x000894aa) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0008a130) clock_digital_separator_pane_g

0xe2c3,	// (0x000890eb) bg_popup_window_pane_cp04

0x0c00,	// (0x0007ba28) heading_pane_cp03

0x0c08,	// (0x0007ba30) listscroll_popup_gms_pane

0x0c10,	// (0x0007ba38) grid_large_graphic_popup_pane

0x0c1a,	// (0x0007ba42) listscroll_popup_gms_pane_g1

0x0c22,	// (0x0007ba4a) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0008a1cd) listscroll_popup_gms_pane_g

0xe995,	// (0x000897bd) scroll_pane_cp014

0x0c2a,	// (0x0007ba52) cell_large_graphic_popup_pane_ParamLimits

0x0c2a,	// (0x0007ba52) cell_large_graphic_popup_pane

0x0c42,	// (0x0007ba6a) cell_large_graphic_popup_pane_g1_ParamLimits

0x0c42,	// (0x0007ba6a) cell_large_graphic_popup_pane_g1

0x0c4e,	// (0x0007ba76) cell_large_graphic_popup_pane_g2_ParamLimits

0x0c4e,	// (0x0007ba76) cell_large_graphic_popup_pane_g2

0x0c5a,	// (0x0007ba82) cell_large_graphic_popup_pane_g3_ParamLimits

0x0c5a,	// (0x0007ba82) cell_large_graphic_popup_pane_g3

0x0c67,	// (0x0007ba8f) cell_large_graphic_popup_pane_g4_ParamLimits

0x0c67,	// (0x0007ba8f) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0008a1d2) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0008a1d2) cell_large_graphic_popup_pane_g

0x0c77,	// (0x0007ba9f) grid_highlight_pane_cp010

0xe682,	// (0x000894aa) bg_popup_call_pane_g1

0x0c81,	// (0x0007baa9) list_single_graphic_popup_conf_pane_ParamLimits

0x0c81,	// (0x0007baa9) list_single_graphic_popup_conf_pane

0x0c93,	// (0x0007babb) list_highlight_pane_cp01

0x0c9c,	// (0x0007bac4) list_single_graphic_popup_conf_pane_g1

0x0ca4,	// (0x0007bacc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0008a1db) list_single_graphic_popup_conf_pane_g

0x0cac,	// (0x0007bad4) list_single_graphic_popup_conf_pane_t1

0x0cba,	// (0x0007bae2) linegrid_cams_pane_g1

0x722a,	// (0x00082052) linegrid_cams_pane_g2

0xe73a,	// (0x00089562) linegrid_cams_pane_g3

0x0cc3,	// (0x0007baeb) linegrid_cams_pane_g4

0x7233,	// (0x0008205b) linegrid_cams_pane_g5

0x723c,	// (0x00082064) linegrid_cams_pane_g6

0xe7c0,	// (0x000895e8) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0008a1e0) linegrid_cams_pane_g

0x0ccc,	// (0x0007baf4) popup_clock_analogue_window

0x0ccc,	// (0x0007baf4) popup_clock_digital_window

0xe2c3,	// (0x000890eb) popup_phob_thumbnail_window

0xe682,	// (0x000894aa) call_video_uplink_pane_g1

0x0cd5,	// (0x0007bafd) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0008a1ef) call_video_uplink_pane_g

0xe78d,	// (0x000895b5) video_uplink_pane

0x0cdd,	// (0x0007bb05) mce_image_pane_g1

0x7245,	// (0x0008206d) mce_image_pane_g2

0x724d,	// (0x00082075) mce_image_pane_g3

0x7255,	// (0x0008207d) mce_image_pane_g4

0x725d,	// (0x00082085) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0008a1f4) mce_image_pane_g

0x0ce7,	// (0x0007bb0f) control_top_pane_stacon_cp01_ParamLimits

0x0ce7,	// (0x0007bb0f) control_top_pane_stacon_cp01

0x0cfb,	// (0x0007bb23) uni_indicator_pane_stacon_cp01_ParamLimits

0x0cfb,	// (0x0007bb23) uni_indicator_pane_stacon_cp01

0x0d0c,	// (0x0007bb34) bg_popup_sub_pane_cp03

0x7265,	// (0x0008208d) chi_dic_find_pane

0x726d,	// (0x00082095) listscroll_chi_dic_pane

0x7276,	// (0x0008209e) main_pane_chidic_g1

0x7289,	// (0x000820b1) chi_dic_find_pane_t1

0x0d16,	// (0x0007bb3e) find_chidic_pane

0x0d1f,	// (0x0007bb47) chi_dic_list_pane_ParamLimits

0x0d1f,	// (0x0007bb47) chi_dic_list_pane

0x0d30,	// (0x0007bb58) scroll_pane_cp020

0x7297,	// (0x000820bf) find_chidic_pane_t1

0xe2c3,	// (0x000890eb) input_focus_pane_cp06

0x72a6,	// (0x000820ce) list_chi_dic_pane_ParamLimits

0x72a6,	// (0x000820ce) list_chi_dic_pane

0x0d38,	// (0x0007bb60) list_chi_dic_pane_t1_ParamLimits

0x0d38,	// (0x0007bb60) list_chi_dic_pane_t1

0xe2c3,	// (0x000890eb) list_highlight_pane_cp020

0x0d4b,	// (0x0007bb73) bg_cale_heading_pane_g1

0x72c7,	// (0x000820ef) bg_cale_heading_pane_g2

0x72cf,	// (0x000820f7) bg_cale_heading_pane_g3

0x72d7,	// (0x000820ff) bg_cale_heading_pane_g4

0x72e1,	// (0x00082109) bg_cale_heading_pane_g5

0x72eb,	// (0x00082113) bg_cale_heading_pane_g6

0x72f3,	// (0x0008211b) bg_cale_heading_pane_g7

0x72fb,	// (0x00082123) bg_cale_heading_pane_g8

0x7305,	// (0x0008212d) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0008a1ff) bg_cale_heading_pane_g

0x0d4b,	// (0x0007bb73) bg_cale_side_pane_g1

0x730f,	// (0x00082137) bg_cale_side_pane_g2

0x7317,	// (0x0008213f) bg_cale_side_pane_g3

0x731f,	// (0x00082147) bg_cale_side_pane_g4

0x7327,	// (0x0008214f) bg_cale_side_pane_g5

0x732f,	// (0x00082157) bg_cale_side_pane_g6

0x7337,	// (0x0008215f) bg_cale_side_pane_g7

0x733f,	// (0x00082167) bg_cale_side_pane_g8

0x7347,	// (0x0008216f) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0008a212) bg_cale_side_pane_g

0x734f,	// (0x00082177) popup_call_status_window_ParamLimits

0x734f,	// (0x00082177) popup_call_status_window

0x0d53,	// (0x0007bb7b) stacon_top_pane

0x0d5b,	// (0x0007bb83) status_pane_ParamLimits

0x0d5b,	// (0x0007bb83) status_pane

0x0d70,	// (0x0007bb98) status_small_pane

0x0d78,	// (0x0007bba0) control_pane

0xe2c3,	// (0x000890eb) stacon_bottom_pane

0x0d80,	// (0x0007bba8) list_single_mce_smart_pane_t1_ParamLimits

0x0d80,	// (0x0007bba8) list_single_mce_smart_pane_t1

0x0d93,	// (0x0007bbbb) list_single_mce_smart_pane_t2_ParamLimits

0x0d93,	// (0x0007bbbb) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0008a225) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0008a225) list_single_mce_smart_pane_t

0x735b,	// (0x00082183) compass_pane

0x7367,	// (0x0008218f) main_location2_pane_t1

0x737b,	// (0x000821a3) main_location2_pane_t2

0x738f,	// (0x000821b7) main_location2_pane_t3

0x0003,

0xf402,	// (0x0008a22a) main_location2_pane_t

0x0db2,	// (0x0007bbda) compass_pane_g1_ParamLimits

0x0db2,	// (0x0007bbda) compass_pane_g1

0x73d9,	// (0x00082201) compass_pane_t1

0x73e8,	// (0x00082210) compass_pane_t2

0x0005,

0xf40b,	// (0x0008a233) compass_pane_t

0x7433,	// (0x0008225b) text_secondary_cp61

0x0dc6,	// (0x0007bbee) navi_pane_cams_g5

0x0de9,	// (0x0007bc11) navi_pane_im_t1

0x0df7,	// (0x0007bc1f) navi_pane_mp_g1_ParamLimits

0x0df7,	// (0x0007bc1f) navi_pane_mp_g1

0x0e0b,	// (0x0007bc33) navi_pane_mp_g2_ParamLimits

0x0e0b,	// (0x0007bc33) navi_pane_mp_g2

0x0e17,	// (0x0007bc3f) navi_pane_mp_g3_ParamLimits

0x0e17,	// (0x0007bc3f) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0008a247) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0008a247) navi_pane_mp_g

0x0e23,	// (0x0007bc4b) navi_pane_mp_t1

0x0e31,	// (0x0007bc59) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0008a24e) navi_pane_mp_t

0x0e6d,	// (0x0007bc95) navi_pane_vt_g1

0x0e23,	// (0x0007bc4b) navi_pane_vt_t1

0x0e75,	// (0x0007bc9d) navi_slider_pane

0x0e7d,	// (0x0007bca5) zooming_pane

0x0e85,	// (0x0007bcad) navi_slider_pane_g1

0x754a,	// (0x00082372) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0008a255) navi_slider_pane_g

0x0ebb,	// (0x0007bce3) aid_levels_zoom

0x0ec3,	// (0x0007bceb) zooming_pane_g1

0x0ecb,	// (0x0007bcf3) zooming_pane_g2

0x0ecb,	// (0x0007bcf3) zooming_pane_g3

0x0002,

0xf43c,	// (0x0008a264) zooming_pane_g

0x0ed3,	// (0x0007bcfb) level_10_zoom

0x0edc,	// (0x0007bd04) level_11_zoom

0x0ee5,	// (0x0007bd0d) level_1_zoom

0x0eee,	// (0x0007bd16) level_2_zoom

0x0ef7,	// (0x0007bd1f) level_3_zoom

0x0f00,	// (0x0007bd28) level_4_zoom

0x0f09,	// (0x0007bd31) level_5_zoom

0x0f12,	// (0x0007bd3a) level_6_zoom

0x0f1b,	// (0x0007bd43) level_7_zoom

0x0f24,	// (0x0007bd4c) level_8_zoom

0x0f2d,	// (0x0007bd55) level_9_zoom

0x0f3e,	// (0x0007bd66) popup_phob_thumbnail_window_g1

0x0f46,	// (0x0007bd6e) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0008a26b) popup_phob_thumbnail_window_g

0x2285,	// (0x0007d0ad) level_1_location

0x228d,	// (0x0007d0b5) level_2_location

0x2295,	// (0x0007d0bd) level_3_location

0x229d,	// (0x0007d0c5) level_4_location

0x0e7d,	// (0x0007bca5) level_5_location

0x755c,	// (0x00082384) mce_icon_pane_g1

0x7564,	// (0x0008238c) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0008a270) mce_icon_pane_g

0x756c,	// (0x00082394) main_mup_pane_g1_ParamLimits

0x756c,	// (0x00082394) main_mup_pane_g1

0x7584,	// (0x000823ac) main_mup_pane_g2_ParamLimits

0x7584,	// (0x000823ac) main_mup_pane_g2

0x75a0,	// (0x000823c8) main_mup_pane_g3_ParamLimits

0x75a0,	// (0x000823c8) main_mup_pane_g3

0x75bc,	// (0x000823e4) main_mup_pane_g4_ParamLimits

0x75bc,	// (0x000823e4) main_mup_pane_g4

0x75d8,	// (0x00082400) main_mup_pane_g5_ParamLimits

0x75d8,	// (0x00082400) main_mup_pane_g5

0x75f9,	// (0x00082421) main_mup_pane_g6_ParamLimits

0x75f9,	// (0x00082421) main_mup_pane_g6

0x7615,	// (0x0008243d) main_mup_pane_g7_ParamLimits

0x7615,	// (0x0008243d) main_mup_pane_g7

0x7631,	// (0x00082459) main_mup_pane_g8_ParamLimits

0x7631,	// (0x00082459) main_mup_pane_g8

0x764d,	// (0x00082475) main_mup_pane_g9_ParamLimits

0x764d,	// (0x00082475) main_mup_pane_g9

0x766c,	// (0x00082494) main_mup_pane_g10_ParamLimits

0x766c,	// (0x00082494) main_mup_pane_g10

0x768b,	// (0x000824b3) main_mup_pane_g11_ParamLimits

0x768b,	// (0x000824b3) main_mup_pane_g11

0x76a3,	// (0x000824cb) main_mup_pane_g12_ParamLimits

0x76a3,	// (0x000824cb) main_mup_pane_g12

0x76b1,	// (0x000824d9) main_mup_pane_g13_ParamLimits

0x76b1,	// (0x000824d9) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0008a275) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0008a275) main_mup_pane_g

0x76c7,	// (0x000824ef) main_mup_pane_t1_ParamLimits

0x76c7,	// (0x000824ef) main_mup_pane_t1

0x76e4,	// (0x0008250c) main_mup_pane_t2_ParamLimits

0x76e4,	// (0x0008250c) main_mup_pane_t2

0x76fe,	// (0x00082526) main_mup_pane_t3_ParamLimits

0x76fe,	// (0x00082526) main_mup_pane_t3

0x7718,	// (0x00082540) main_mup_pane_t4_ParamLimits

0x7718,	// (0x00082540) main_mup_pane_t4

0x772a,	// (0x00082552) main_mup_pane_t5_ParamLimits

0x772a,	// (0x00082552) main_mup_pane_t5

0x773c,	// (0x00082564) main_mup_pane_t6_ParamLimits

0x773c,	// (0x00082564) main_mup_pane_t6

0x0005,

0xf468,	// (0x0008a290) main_mup_pane_t_ParamLimits

0xf468,	// (0x0008a290) main_mup_pane_t

0x7752,	// (0x0008257a) mup_progress_pane_ParamLimits

0x7752,	// (0x0008257a) mup_progress_pane

0x775e,	// (0x00082586) mup_visualizer_pane_ParamLimits

0x775e,	// (0x00082586) mup_visualizer_pane

0x779c,	// (0x000825c4) mup_volume_pane_ParamLimits

0x779c,	// (0x000825c4) mup_volume_pane

0x0f4e,	// (0x0007bd76) mup_visualizer_pane_g1_ParamLimits

0x0f4e,	// (0x0007bd76) mup_visualizer_pane_g1

0x0f4e,	// (0x0007bd76) mup_visualizer_pane_g2_ParamLimits

0x0f4e,	// (0x0007bd76) mup_visualizer_pane_g2

0x0db2,	// (0x0007bbda) mup_visualizer_pane_g3_ParamLimits

0x0db2,	// (0x0007bbda) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0008a29d) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0008a29d) mup_visualizer_pane_g

0xe682,	// (0x000894aa) mup_volume_pane_g1

0x0f64,	// (0x0007bd8c) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0008a2a4) mup_volume_pane_g

0xe682,	// (0x000894aa) mup_progress_pane_g1

0x0f6d,	// (0x0007bd95) mup_progress_pane_g2

0x0f76,	// (0x0007bd9e) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0008a2a9) mup_progress_pane_g

0xe2c3,	// (0x000890eb) bg_popup_window_pane_cp05

0x0f7f,	// (0x0007bda7) heading_pane_cp02_ParamLimits

0x0f7f,	// (0x0007bda7) heading_pane_cp02

0x0f99,	// (0x0007bdc1) list_popup_blid_pane

0x0fa1,	// (0x0007bdc9) list_blid_sat_info_pane_ParamLimits

0x0fa1,	// (0x0007bdc9) list_blid_sat_info_pane

0x0fb4,	// (0x0007bddc) list_blid_sat_info_pane_g1

0x0fbc,	// (0x0007bde4) list_blid_sat_info_pane_t1

0x78a7,	// (0x000826cf) mup_equalizer_pane_ParamLimits

0x78a7,	// (0x000826cf) mup_equalizer_pane

0x78c8,	// (0x000826f0) mup_equalizer_pane_cp1_ParamLimits

0x78c8,	// (0x000826f0) mup_equalizer_pane_cp1

0x78e9,	// (0x00082711) mup_equalizer_pane_cp2_ParamLimits

0x78e9,	// (0x00082711) mup_equalizer_pane_cp2

0x790a,	// (0x00082732) mup_equalizer_pane_cp3_ParamLimits

0x790a,	// (0x00082732) mup_equalizer_pane_cp3

0x792b,	// (0x00082753) mup_equalizer_pane_cp4_ParamLimits

0x792b,	// (0x00082753) mup_equalizer_pane_cp4

0x794c,	// (0x00082774) mup_equalizer_pane_cp5

0x7962,	// (0x0008278a) mup_equalizer_pane_cp6

0x797a,	// (0x000827a2) mup_equalizer_pane_cp7

0x21a3,	// (0x0007cfcb) bg_popup_call_poc_act_pane_g9

0x21ab,	// (0x0007cfd3) bg_popup_call_poc_act_pane_g10

0x21b3,	// (0x0007cfdb) bg_popup_call_poc_act_pane_g11

0x000a,

0xe51e,	// (0x00089346) mup_scale_pane

0xe682,	// (0x000894aa) mup_scale_pane_g1

0x0fca,	// (0x0007bdf2) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0008a2c5) mup_scale_pane_g

0x0fee,	// (0x0007be16) msg_data_pane

0x0ff6,	// (0x0007be1e) scroll_pane_cp017

0x79a4,	// (0x000827cc) bg_list_pane_cp04_ParamLimits

0x79a4,	// (0x000827cc) bg_list_pane_cp04

0x0ffe,	// (0x0007be26) msg_data_pane_g1

0x79c4,	// (0x000827ec) msg_data_pane_g2

0x724d,	// (0x00082075) msg_data_pane_g3

0x79cc,	// (0x000827f4) msg_data_pane_g4

0x79d4,	// (0x000827fc) msg_data_pane_g5

0x79dc,	// (0x00082804) msg_data_pane_g6

0x79e4,	// (0x0008280c) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0008a2d4) msg_data_pane_g

0x79ec,	// (0x00082814) msg_text_pane_ParamLimits

0x79ec,	// (0x00082814) msg_text_pane

0x7a36,	// (0x0008285e) qrid_highlight_pane_cp011_ParamLimits

0x7a36,	// (0x0008285e) qrid_highlight_pane_cp011

0xe2c3,	// (0x000890eb) msg_body_pane

0xe2c3,	// (0x000890eb) msg_header_pane

0x100f,	// (0x0007be37) input_focus_pane_cp07

0x7a60,	// (0x00082888) msg_header_pane_t1_ParamLimits

0x7a60,	// (0x00082888) msg_header_pane_t1

0x7a74,	// (0x0008289c) msg_header_pane_t2_ParamLimits

0x7a74,	// (0x0008289c) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0008a2e8) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0008a2e8) msg_header_pane_t

0x1024,	// (0x0007be4c) msg_body_pane_g1

0x7a86,	// (0x000828ae) msg_body_pane_t1_ParamLimits

0x7a86,	// (0x000828ae) msg_body_pane_t1

0x7ab7,	// (0x000828df) msg_body_pane_t2_ParamLimits

0x7ab7,	// (0x000828df) msg_body_pane_t2

0x7ac9,	// (0x000828f1) msg_body_pane_t3_ParamLimits

0x7ac9,	// (0x000828f1) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0008a2ed) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0008a2ed) msg_body_pane_t

0x7b2d,	// (0x00082955) main_viewer_pane_g1_ParamLimits

0x7b2d,	// (0x00082955) main_viewer_pane_g1

0x7b39,	// (0x00082961) main_viewer_pane_g2_ParamLimits

0x7b39,	// (0x00082961) main_viewer_pane_g2

0x7b45,	// (0x0008296d) main_viewer_pane_g3_ParamLimits

0x7b45,	// (0x0008296d) main_viewer_pane_g3

0x7b56,	// (0x0008297e) main_viewer_pane_g4_ParamLimits

0x7b56,	// (0x0008297e) main_viewer_pane_g4

0x7b67,	// (0x0008298f) main_viewer_pane_g5_ParamLimits

0x7b67,	// (0x0008298f) main_viewer_pane_g5

0x7b67,	// (0x0008298f) main_viewer_pane_g7_ParamLimits

0x7b67,	// (0x0008298f) main_viewer_pane_g7

0x7b79,	// (0x000829a1) main_viewer_pane_g8_ParamLimits

0x7b79,	// (0x000829a1) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0008a2fd) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0008a2fd) main_viewer_pane_g

0x106e,	// (0x0007be96) viewer_content_pane_ParamLimits

0x106e,	// (0x0007be96) viewer_content_pane

0x7bb1,	// (0x000829d9) main_postcard_pane_g1_ParamLimits

0x7bb1,	// (0x000829d9) main_postcard_pane_g1

0x7bbf,	// (0x000829e7) main_postcard_pane_g2_ParamLimits

0x7bbf,	// (0x000829e7) main_postcard_pane_g2

0x7bcd,	// (0x000829f5) main_postcard_pane_g3_ParamLimits

0x7bcd,	// (0x000829f5) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0008a30e) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0008a30e) main_postcard_pane_g

0x7bdd,	// (0x00082a05) main_postcard_pane_g4

0x23a5,	// (0x0007d1cd) smil_status_volume_pane_g2

0x7c09,	// (0x00082a31) postcard_pane_ParamLimits

0x7c09,	// (0x00082a31) postcard_pane

0x0f4e,	// (0x0007bd76) postcard_pane_g1_ParamLimits

0x0f4e,	// (0x0007bd76) postcard_pane_g1

0x7c3b,	// (0x00082a63) postcard_pane_g2_ParamLimits

0x7c3b,	// (0x00082a63) postcard_pane_g2

0x7c47,	// (0x00082a6f) postcard_pane_g3_ParamLimits

0x7c47,	// (0x00082a6f) postcard_pane_g3

0x108a,	// (0x0007beb2) postcard_pane_g4_ParamLimits

0x108a,	// (0x0007beb2) postcard_pane_g4

0x7c53,	// (0x00082a7b) postcard_pane_g5_ParamLimits

0x7c53,	// (0x00082a7b) postcard_pane_g5

0x7c5f,	// (0x00082a87) postcard_pane_g6_ParamLimits

0x7c5f,	// (0x00082a87) postcard_pane_g6

0x107c,	// (0x0007bea4) postcard_pane_g7_ParamLimits

0x107c,	// (0x0007bea4) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0008a31b) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0008a31b) postcard_pane_g

0x7c6b,	// (0x00082a93) main_mp2_pane_g1_ParamLimits

0x7c6b,	// (0x00082a93) main_mp2_pane_g1

0x7c77,	// (0x00082a9f) main_mp2_pane_g2_ParamLimits

0x7c77,	// (0x00082a9f) main_mp2_pane_g2

0x7c83,	// (0x00082aab) main_mp2_pane_g3_ParamLimits

0x7c83,	// (0x00082aab) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0008a32a) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0008a32a) main_mp2_pane_g

0x7c8f,	// (0x00082ab7) main_mp2_pane_t1_ParamLimits

0x7c8f,	// (0x00082ab7) main_mp2_pane_t1

0x7ca6,	// (0x00082ace) main_mp2_pane_t2_ParamLimits

0x7ca6,	// (0x00082ace) main_mp2_pane_t2

0x7cb8,	// (0x00082ae0) main_mp2_pane_t3_ParamLimits

0x7cb8,	// (0x00082ae0) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0008a331) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0008a331) main_mp2_pane_t

0x1098,	// (0x0007bec0) pec_content_pane_ParamLimits

0x1098,	// (0x0007bec0) pec_content_pane

0xe995,	// (0x000897bd) scroll_pane_cp015

0x10aa,	// (0x0007bed2) pec_attribute_pane_ParamLimits

0x10aa,	// (0x0007bed2) pec_attribute_pane

0x7cca,	// (0x00082af2) pec_content_pane_g1_ParamLimits

0x7cca,	// (0x00082af2) pec_content_pane_g1

0x10ba,	// (0x0007bee2) pec_content_pane_t1_ParamLimits

0x10ba,	// (0x0007bee2) pec_content_pane_t1

0x10cc,	// (0x0007bef4) pec_content_pane_t2_ParamLimits

0x10cc,	// (0x0007bef4) pec_content_pane_t2

0x0001,

0xf510,	// (0x0008a338) pec_content_pane_t_ParamLimits

0xf510,	// (0x0008a338) pec_content_pane_t

0x7cd6,	// (0x00082afe) list_single_graphic_pane_cp01_ParamLimits

0x7cd6,	// (0x00082afe) list_single_graphic_pane_cp01

0xe51e,	// (0x00089346) bg_popup_sub_pane_cp04

0x10de,	// (0x0007bf06) popup_mup_playback_window_g1

0x10ea,	// (0x0007bf12) popup_mup_playback_window_t1

0x10ff,	// (0x0007bf27) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0008a33d) popup_mup_playback_window_t

0x1136,	// (0x0007bf5e) main_image_pane_g1_ParamLimits

0x1136,	// (0x0007bf5e) main_image_pane_g1

0x1179,	// (0x0007bfa1) scroll_pane_cp018_ParamLimits

0x1179,	// (0x0007bfa1) scroll_pane_cp018

0x1191,	// (0x0007bfb9) scroll_pane_cp016_ParamLimits

0x1191,	// (0x0007bfb9) scroll_pane_cp016

0x7d7a,	// (0x00082ba2) smil2_image_pane_ParamLimits

0x7d7a,	// (0x00082ba2) smil2_image_pane

0x7dae,	// (0x00082bd6) smil2_root_pane_ParamLimits

0x7dae,	// (0x00082bd6) smil2_root_pane

0x7dda,	// (0x00082c02) smil2_text_pane_ParamLimits

0x7dda,	// (0x00082c02) smil2_text_pane

0xe2c3,	// (0x000890eb) bg_list_pane_cp06

0x11cd,	// (0x0007bff5) grid_radio_pane

0xe2c3,	// (0x000890eb) bg_popup_window_pane_cp06

0x11d5,	// (0x0007bffd) main_fmradio_pane_t1

0x0c00,	// (0x0007ba28) heading_pane_cp04

0x11e3,	// (0x0007c00b) main_fmradio_pane_t2

0x21bb,	// (0x0007cfe3) popup_cale_lunar_info_window_g1

0x11f1,	// (0x0007c019) main_fmradio_pane_t3

0x21c3,	// (0x0007cfeb) popup_cale_lunar_info_window_g2

0x11ff,	// (0x0007c027) main_fmradio_pane_t4

0x0001,

0x120d,	// (0x0007c035) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0008a418) popup_cale_lunar_info_window_g

0xf52a,	// (0x0008a352) main_fmradio_pane_t

0x121b,	// (0x0007c043) wait_bar_pane_cp03

0x1223,	// (0x0007c04b) cell_fmradio_pane_ParamLimits

0x1223,	// (0x0007c04b) cell_fmradio_pane

0x107c,	// (0x0007bea4) cell_fmradio_pane_g1_ParamLimits

0x107c,	// (0x0007bea4) cell_fmradio_pane_g1

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp011

0x1236,	// (0x0007c05e) poc_content_pane_ParamLimits

0x1236,	// (0x0007c05e) poc_content_pane

0x1248,	// (0x0007c070) scroll_pane_cp019

0x7e1a,	// (0x00082c42) popup_call_poc_act_window_ParamLimits

0x7e1a,	// (0x00082c42) popup_call_poc_act_window

0x7e27,	// (0x00082c4f) popup_call_poc_inact_window_ParamLimits

0x7e27,	// (0x00082c4f) popup_call_poc_inact_window

0xf5c7,	// (0x0008a3ef) bg_popup_call_poc_act_pane_g

0x2133,	// (0x0007cf5b) bg_popup_call_poc_inact_pane_g1

0x213b,	// (0x0007cf63) bg_popup_call_poc_inact_pane_g2

0x1250,	// (0x0007c078) popup_call_poc_act_window_g2

0x2143,	// (0x0007cf6b) bg_popup_call_poc_inact_pane_g3

0x214b,	// (0x0007cf73) bg_popup_call_poc_inact_pane_g4

0x2153,	// (0x0007cf7b) bg_popup_call_poc_inact_pane_g5

0x1258,	// (0x0007c080) popup_call_poc_act_window_t1_ParamLimits

0x1258,	// (0x0007c080) popup_call_poc_act_window_t1

0x1280,	// (0x0007c0a8) popup_call_poc_act_window_t2_ParamLimits

0x1280,	// (0x0007c0a8) popup_call_poc_act_window_t2

0x12a8,	// (0x0007c0d0) popup_call_poc_act_window_t3_ParamLimits

0x12a8,	// (0x0007c0d0) popup_call_poc_act_window_t3

0x12d0,	// (0x0007c0f8) popup_call_poc_act_window_t4_ParamLimits

0x12d0,	// (0x0007c0f8) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0008a35d) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0008a35d) popup_call_poc_act_window_t

0x215b,	// (0x0007cf83) bg_popup_call_poc_inact_pane_g6

0x2163,	// (0x0007cf8b) bg_popup_call_poc_inact_pane_g7

0x216b,	// (0x0007cf93) bg_popup_call_poc_inact_pane_g8

0x12e2,	// (0x0007c10a) popup_call_poc_inact_window_g2

0x2173,	// (0x0007cf9b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0008a3dc) bg_popup_call_poc_inact_pane_g

0x12ea,	// (0x0007c112) popup_call_poc_inact_window_t1_ParamLimits

0x12ea,	// (0x0007c112) popup_call_poc_inact_window_t1

0x12ff,	// (0x0007c127) popup_call_poc_inact_window_t2_ParamLimits

0x12ff,	// (0x0007c127) popup_call_poc_inact_window_t2

0x1314,	// (0x0007c13c) popup_call_poc_inact_window_t3_ParamLimits

0x1314,	// (0x0007c13c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0008a366) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0008a366) popup_call_poc_inact_window_t

0x232b,	// (0x0007d153) context_pane_ParamLimits

0x8416,	// (0x0008323e) signal_pane_ParamLimits

0x0e7d,	// (0x0007bca5) main_call2_pane

0x2319,	// (0x0007d141) popup_phob_thumbnail2_window_ParamLimits

0x2319,	// (0x0007d141) popup_phob_thumbnail2_window

0x7adb,	// (0x00082903) aid_hotspot_pointer_arrow_pane

0x7ae3,	// (0x0008290b) aid_hotspot_pointer_hand_pane

0x8154,	// (0x00082f7c) phob_pre_status_pane_g5

0x5f56,	// (0x00080d7e) cams_zoom_pane_ParamLimits

0x5f62,	// (0x00080d8a) image_vga_pane_ParamLimits

0x5f71,	// (0x00080d99) main_camera_pane_g1_ParamLimits

0x5f7f,	// (0x00080da7) main_camera_pane_g2_ParamLimits

0x5f8d,	// (0x00080db5) main_camera_pane_g3_ParamLimits

0x5f99,	// (0x00080dc1) main_camera_pane_g4_ParamLimits

0x5fa5,	// (0x00080dcd) main_camera_pane_g5_ParamLimits

0x5fb1,	// (0x00080dd9) main_camera_pane_g6_ParamLimits

0x5fbd,	// (0x00080de5) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0008a065) main_camera_pane_g_ParamLimits

0x5fc9,	// (0x00080df1) main_camera_pane_t1_ParamLimits

0x5fdb,	// (0x00080e03) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0008a076) main_camera_pane_t_ParamLimits

0xe51e,	// (0x00089346) bg_popup_preview_window_pane_cp01_ParamLimits

0xe51e,	// (0x00089346) bg_popup_preview_window_pane_cp01

0x1329,	// (0x0007c151) popup_phob_thumbnail2_window_g1_ParamLimits

0x1329,	// (0x0007c151) popup_phob_thumbnail2_window_g1

0xe2c3,	// (0x000890eb) call2_cli_visual_pane

0x7e43,	// (0x00082c6b) popup_call2_audio_conf_window_ParamLimits

0x7e43,	// (0x00082c6b) popup_call2_audio_conf_window

0x7e58,	// (0x00082c80) popup_call2_audio_first_window_ParamLimits

0x7e58,	// (0x00082c80) popup_call2_audio_first_window

0x7ef6,	// (0x00082d1e) popup_call2_audio_in_window_ParamLimits

0x7ef6,	// (0x00082d1e) popup_call2_audio_in_window

0x7f38,	// (0x00082d60) popup_call2_audio_out_window_ParamLimits

0x7f38,	// (0x00082d60) popup_call2_audio_out_window

0x7f9a,	// (0x00082dc2) popup_call2_audio_second_window_ParamLimits

0x7f9a,	// (0x00082dc2) popup_call2_audio_second_window

0x7ff8,	// (0x00082e20) popup_call2_audio_wait_window_ParamLimits

0x7ff8,	// (0x00082e20) popup_call2_audio_wait_window

0xe2c3,	// (0x000890eb) bg_popup_call2_act_pane_cp03

0xe500,	// (0x00089328) list_conf_pane_cp

0x1335,	// (0x0007c15d) popup_call2_audio_conf_window_t1

0x1343,	// (0x0007c16b) list_single_graphic_popup_conf2_pane_ParamLimits

0x1343,	// (0x0007c16b) list_single_graphic_popup_conf2_pane

0x0c93,	// (0x0007babb) list_highlight_pane_cp04

0x1356,	// (0x0007c17e) list_single_graphic_popup_conf2_pane_g1

0x0ca4,	// (0x0007bacc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0008a36d) list_single_graphic_popup_conf2_pane_g

0x1360,	// (0x0007c188) list_single_graphic_popup_conf2_pane_t1

0x136e,	// (0x0007c196) bg_popup_call2_act_pane_cp01_ParamLimits

0x136e,	// (0x0007c196) bg_popup_call2_act_pane_cp01

0x13f8,	// (0x0007c220) call_type_pane_cp05_ParamLimits

0x13f8,	// (0x0007c220) call_type_pane_cp05

0x144c,	// (0x0007c274) popup_call2_audio_second_window_g1_ParamLimits

0x144c,	// (0x0007c274) popup_call2_audio_second_window_g1

0x14a0,	// (0x0007c2c8) popup_call2_audio_second_window_g2_ParamLimits

0x14a0,	// (0x0007c2c8) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0008a372) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0008a372) popup_call2_audio_second_window_g

0x1505,	// (0x0007c32d) popup_call2_audio_second_window_t1_ParamLimits

0x1505,	// (0x0007c32d) popup_call2_audio_second_window_t1

0x15c0,	// (0x0007c3e8) popup_call2_audio_second_window_t2_ParamLimits

0x15c0,	// (0x0007c3e8) popup_call2_audio_second_window_t2

0x1613,	// (0x0007c43b) popup_call2_audio_second_window_t3_ParamLimits

0x1613,	// (0x0007c43b) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0008a379) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0008a379) popup_call2_audio_second_window_t

0xe2c3,	// (0x000890eb) bg_popup_call2_in_pane_cp02

0xe2cd,	// (0x000890f5) call_type_pane_cp04

0xe2d5,	// (0x000890fd) popup_call2_audio_wait_window_g1

0xe2dd,	// (0x00089105) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00089f52) popup_call2_audio_wait_window_g

0xe2e5,	// (0x0008910d) popup_call2_audio_wait_window_t3

0x1706,	// (0x0007c52e) bg_popup_call2_act_pane_ParamLimits

0x1706,	// (0x0007c52e) bg_popup_call2_act_pane

0x17c6,	// (0x0007c5ee) call_type_pane_cp03_ParamLimits

0x17c6,	// (0x0007c5ee) call_type_pane_cp03

0x182a,	// (0x0007c652) popup_call2_audio_first_window_g1_ParamLimits

0x182a,	// (0x0007c652) popup_call2_audio_first_window_g1

0x189a,	// (0x0007c6c2) popup_call2_audio_first_window_g2_ParamLimits

0x189a,	// (0x0007c6c2) popup_call2_audio_first_window_g2

0x0f4e,	// (0x0007bd76) popup_call2_audio_first_window_g3_ParamLimits

0x0f4e,	// (0x0007bd76) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0008a382) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0008a382) popup_call2_audio_first_window_g

0x1978,	// (0x0007c7a0) popup_call2_audio_first_window_t1_ParamLimits

0x1978,	// (0x0007c7a0) popup_call2_audio_first_window_t1

0x1a7b,	// (0x0007c8a3) popup_call2_audio_first_window_t4_ParamLimits

0x1a7b,	// (0x0007c8a3) popup_call2_audio_first_window_t4

0x1b5e,	// (0x0007c986) popup_call2_audio_first_window_t5_ParamLimits

0x1b5e,	// (0x0007c986) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0008a38d) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0008a38d) popup_call2_audio_first_window_t

0xe516,	// (0x0008933e) bg_popup_call2_act_pane_g1

0x21cb,	// (0x0007cff3) popup_cale_lunar_info_window_t1

0x21d9,	// (0x0007d001) popup_cale_lunar_info_window_t2

0x21e7,	// (0x0007d00f) popup_cale_lunar_info_window_t3

0xe2c3,	// (0x000890eb) bg_popup_call2_bubble_pane

0x1c5f,	// (0x0007ca87) bg_popup_call2_in_pane_cp01_ParamLimits

0x1c5f,	// (0x0007ca87) bg_popup_call2_in_pane_cp01

0xdf9f,	// (0x00088dc7) call_type_pane_cp02

0x1ca7,	// (0x0007cacf) popup_call2_audio_out_window_g1_ParamLimits

0x1ca7,	// (0x0007cacf) popup_call2_audio_out_window_g1

0x1cd3,	// (0x0007cafb) popup_call2_audio_out_window_g2_ParamLimits

0x1cd3,	// (0x0007cafb) popup_call2_audio_out_window_g2

0x1cfb,	// (0x0007cb23) popup_call2_audio_out_window_g3_ParamLimits

0x1cfb,	// (0x0007cb23) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0008a396) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0008a396) popup_call2_audio_out_window_g

0x1d36,	// (0x0007cb5e) popup_call2_audio_out_window_t1_ParamLimits

0x1d36,	// (0x0007cb5e) popup_call2_audio_out_window_t1

0x1d95,	// (0x0007cbbd) popup_call2_audio_out_window_t2_ParamLimits

0x1d95,	// (0x0007cbbd) popup_call2_audio_out_window_t2

0x1de9,	// (0x0007cc11) popup_call2_audio_out_window_t3_ParamLimits

0x1de9,	// (0x0007cc11) popup_call2_audio_out_window_t3

0x1dff,	// (0x0007cc27) popup_call2_audio_out_window_t4_ParamLimits

0x1dff,	// (0x0007cc27) popup_call2_audio_out_window_t4

0x1e15,	// (0x0007cc3d) popup_call2_audio_out_window_t5_ParamLimits

0x1e15,	// (0x0007cc3d) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0008a39f) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0008a39f) popup_call2_audio_out_window_t

0x1e79,	// (0x0007cca1) bg_popup_call2_in_pane_ParamLimits

0x1e79,	// (0x0007cca1) bg_popup_call2_in_pane

0x1ed5,	// (0x0007ccfd) popup_call2_audio_in_window_g1_ParamLimits

0x1ed5,	// (0x0007ccfd) popup_call2_audio_in_window_g1

0x1f0d,	// (0x0007cd35) popup_call2_audio_in_window_g2_ParamLimits

0x1f0d,	// (0x0007cd35) popup_call2_audio_in_window_g2

0x1f45,	// (0x0007cd6d) popup_call2_audio_in_window_g3_ParamLimits

0x1f45,	// (0x0007cd6d) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0008a3ac) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0008a3ac) popup_call2_audio_in_window_g

0x1f9d,	// (0x0007cdc5) popup_call2_audio_in_window_t1_ParamLimits

0x1f9d,	// (0x0007cdc5) popup_call2_audio_in_window_t1

0x201d,	// (0x0007ce45) popup_call2_audio_in_window_t2_ParamLimits

0x201d,	// (0x0007ce45) popup_call2_audio_in_window_t2

0x209d,	// (0x0007cec5) popup_call2_audio_in_window_t3_ParamLimits

0x209d,	// (0x0007cec5) popup_call2_audio_in_window_t3

0x20b7,	// (0x0007cedf) popup_call2_audio_in_window_t4_ParamLimits

0x20b7,	// (0x0007cedf) popup_call2_audio_in_window_t4

0x20c9,	// (0x0007cef1) popup_call2_audio_in_window_t5_ParamLimits

0x20c9,	// (0x0007cef1) popup_call2_audio_in_window_t5

0x20de,	// (0x0007cf06) popup_call2_audio_in_window_t6_ParamLimits

0x20de,	// (0x0007cf06) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0008a3b5) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0008a3b5) popup_call2_audio_in_window_t

0xe516,	// (0x0008933e) bg_popup_call2_in_pane_g1

0x21f5,	// (0x0007d01d) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0008a41d) popup_cale_lunar_info_window_t

0xe51e,	// (0x00089346) bg_popup_call2_rect_pane_ParamLimits

0xe51e,	// (0x00089346) bg_popup_call2_rect_pane

0xe2c3,	// (0x000890eb) call2_cli_visual_graphic_pane

0xe2c3,	// (0x000890eb) call2_cli_visual_text_pane

0x84c6,	// (0x000832ee) smil_status_volume_pane_g3

0x0002,

0xe682,	// (0x000894aa) call2_cli_visual_graphic_pane_g1

0xe682,	// (0x000894aa) call2_cli_visual_graphic_pane_g2

0xe682,	// (0x000894aa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0008a3c2) call2_cli_visual_graphic_pane_g

0x20f3,	// (0x0007cf1b) bg_popup_call2_rect_pane_g1

0xe720,	// (0x00089548) bg_popup_call2_rect_pane_g2

0x20fb,	// (0x0007cf23) bg_popup_call2_rect_pane_g3

0x2103,	// (0x0007cf2b) bg_popup_call2_rect_pane_g4

0x210b,	// (0x0007cf33) bg_popup_call2_rect_pane_g5

0x2113,	// (0x0007cf3b) bg_popup_call2_rect_pane_g6

0x211b,	// (0x0007cf43) bg_popup_call2_rect_pane_g7

0x2123,	// (0x0007cf4b) bg_popup_call2_rect_pane_g8

0x212b,	// (0x0007cf53) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008a3c9) bg_popup_call2_rect_pane_g

0x2133,	// (0x0007cf5b) bg_popup_call2_bubble_pane_g1

0x213b,	// (0x0007cf63) bg_popup_call2_bubble_pane_g2

0x2143,	// (0x0007cf6b) bg_popup_call2_bubble_pane_g3

0x214b,	// (0x0007cf73) bg_popup_call2_bubble_pane_g4

0x2153,	// (0x0007cf7b) bg_popup_call2_bubble_pane_g5

0x215b,	// (0x0007cf83) bg_popup_call2_bubble_pane_g6

0x2163,	// (0x0007cf8b) bg_popup_call2_bubble_pane_g7

0x216b,	// (0x0007cf93) bg_popup_call2_bubble_pane_g8

0x2173,	// (0x0007cf9b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0008a3dc) bg_popup_call2_bubble_pane_g

0x5b5d,	// (0x00080985) aid_cale_week_size_cell_pane

0x5fed,	// (0x00080e15) aid_cams_cif_uncrop_pane_ParamLimits

0x5fed,	// (0x00080e15) aid_cams_cif_uncrop_pane

0x6150,	// (0x00080f78) aid_cams_size_cell_ParamLimits

0x6150,	// (0x00080f78) aid_cams_size_cell

0x615c,	// (0x00080f84) grid_cams_pane_ParamLimits

0x616a,	// (0x00080f92) linegrid_cams_pane_ParamLimits

0x6250,	// (0x00081078) call_video_pane_t1

0x6269,	// (0x00081091) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0008a0c9) call_video_pane_t

0x6767,	// (0x0008158f) aid_cale_month_size_cell_pane_ParamLimits

0x6767,	// (0x0008158f) aid_cale_month_size_cell_pane

0xf63e,	// (0x0008a466) smil_status_volume_pane_g

0x84d3,	// (0x000832fb) volume_smil_pane_ParamLimits

0xde64,	// (0x00088c8c) aid_popup2_width_pane

0x5a44,	// (0x0008086c) cell_qdial_pane_g4_ParamLimits

0x5a44,	// (0x0008086c) cell_qdial_pane_g4

0x73b5,	// (0x000821dd) aid_blid_cardinal_pane_ParamLimits

0x73c5,	// (0x000821ed) aid_blid_destination_pane_ParamLimits

0x73c5,	// (0x000821ed) aid_blid_destination_pane

0xe51e,	// (0x00089346) bg_popup_call_poc_act_pane_ParamLimits

0xe51e,	// (0x00089346) bg_popup_call_poc_act_pane

0xe51e,	// (0x00089346) bg_popup_call_poc_inact_pane_ParamLimits

0xe51e,	// (0x00089346) bg_popup_call_poc_inact_pane

0x217b,	// (0x0007cfa3) bg_popup_call_poc_act_pane_g1

0x2183,	// (0x0007cfab) bg_popup_call_poc_act_pane_g2

0x218b,	// (0x0007cfb3) bg_popup_call_poc_act_pane_g3

0x214b,	// (0x0007cf73) bg_popup_call_poc_act_pane_g4

0x2153,	// (0x0007cf7b) bg_popup_call_poc_act_pane_g5

0x2193,	// (0x0007cfbb) bg_popup_call_poc_act_pane_g6

0x2163,	// (0x0007cf8b) bg_popup_call_poc_act_pane_g7

0x219b,	// (0x0007cfc3) bg_popup_call_poc_act_pane_g8

0xe2c3,	// (0x000890eb) main_usb_pane

0x22f4,	// (0x0007d11c) popup_cale_lunar_info_window

0x6506,	// (0x0008132e) im_reading_pane_t1_ParamLimits

0xe8ed,	// (0x00089715) list_im_pane_ParamLimits

0xe8fe,	// (0x00089726) scroll_pane_cp07_ParamLimits

0xe2c3,	// (0x000890eb) grid_highlight_pane_cp012

0xe51e,	// (0x00089346) mup_scale_pane_ParamLimits

0x0f4e,	// (0x0007bd76) main_usb_pane_g1_ParamLimits

0x0f4e,	// (0x0007bd76) main_usb_pane_g1

0x8077,	// (0x00082e9f) main_usb_pane_g2_ParamLimits

0x8077,	// (0x00082e9f) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0008a406) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0008a406) main_usb_pane_g

0x8083,	// (0x00082eab) main_usb_pane_t1_ParamLimits

0x8083,	// (0x00082eab) main_usb_pane_t1

0x8095,	// (0x00082ebd) main_usb_pane_t2_ParamLimits

0x8095,	// (0x00082ebd) main_usb_pane_t2

0x80a7,	// (0x00082ecf) main_usb_pane_t3_ParamLimits

0x80a7,	// (0x00082ecf) main_usb_pane_t3

0x80b9,	// (0x00082ee1) main_usb_pane_t4_ParamLimits

0x80b9,	// (0x00082ee1) main_usb_pane_t4

0x80cb,	// (0x00082ef3) main_usb_pane_t5_ParamLimits

0x80cb,	// (0x00082ef3) main_usb_pane_t5

0x80dd,	// (0x00082f05) main_usb_pane_t6_ParamLimits

0x80dd,	// (0x00082f05) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0008a40b) main_usb_pane_t_ParamLimits

0x735b,	// (0x00082183) aid_text_placing

0x7367,	// (0x0008218f) main_location2_pane_t1_ParamLimits

0x737b,	// (0x000821a3) main_location2_pane_t2_ParamLimits

0x738f,	// (0x000821b7) main_location2_pane_t3_ParamLimits

0x73a3,	// (0x000821cb) main_location2_pane_t4_ParamLimits

0x73a3,	// (0x000821cb) main_location2_pane_t4

0xf402,	// (0x0008a22a) main_location2_pane_t_ParamLimits

0xe562,	// (0x0008938a) find_pinb_pane_g2_ParamLimits

0xe562,	// (0x0008938a) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00089f78) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00089f78) find_pinb_pane_g

0xe56e,	// (0x00089396) find_pinb_pane_t1_ParamLimits

0xe580,	// (0x000893a8) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00089f7d) find_pinb_pane_t_ParamLimits

0xe2c3,	// (0x000890eb) main_call3_pane

0x6ab3,	// (0x000818db) cale_month_day_heading_pane_t1_ParamLimits

0x6b11,	// (0x00081939) cale_month_day_heading_pane_t2_ParamLimits

0x6b76,	// (0x0008199e) cale_month_day_heading_pane_t3_ParamLimits

0x6bdb,	// (0x00081a03) cale_month_day_heading_pane_t4_ParamLimits

0x6c40,	// (0x00081a68) cale_month_day_heading_pane_t5_ParamLimits

0x6ca5,	// (0x00081acd) cale_month_day_heading_pane_t6_ParamLimits

0x6d12,	// (0x00081b3a) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0008a101) cale_month_day_heading_pane_t_ParamLimits

0x0804,	// (0x0007b62c) smil_status_volume_pane

0x7c23,	// (0x00082a4b) postcard_address_pane_ParamLimits

0x7c23,	// (0x00082a4b) postcard_address_pane

0x7c2f,	// (0x00082a57) postcard_message_pane_ParamLimits

0x7c2f,	// (0x00082a57) postcard_message_pane

0x8037,	// (0x00082e5f) call2_cli_visual_pane_t1_ParamLimits

0x8037,	// (0x00082e5f) call2_cli_visual_pane_t1

0x8626,	// (0x0008344e) postcard_message_pane_t1_ParamLimits

0x8626,	// (0x0008344e) postcard_message_pane_t1

0x860f,	// (0x00083437) postcard_address_pane_t1_ParamLimits

0x860f,	// (0x00083437) postcard_address_pane_t1

0x8600,	// (0x00083428) popup_call3_audio_in_window_ParamLimits

0x8600,	// (0x00083428) popup_call3_audio_in_window

0x84e8,	// (0x00083310) bg_popup_call3_in_pane_ParamLimits

0x84e8,	// (0x00083310) bg_popup_call3_in_pane

0x8546,	// (0x0008336e) popup_call3_audio_in_window_g1_ParamLimits

0x8546,	// (0x0008336e) popup_call3_audio_in_window_g1

0x855e,	// (0x00083386) popup_call3_audio_in_window_g2_ParamLimits

0x855e,	// (0x00083386) popup_call3_audio_in_window_g2

0x8576,	// (0x0008339e) popup_call3_audio_in_window_g3_ParamLimits

0x8576,	// (0x0008339e) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0008a46d) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0008a46d) popup_call3_audio_in_window_g

0x859e,	// (0x000833c6) popup_call3_audio_in_window_t1_ParamLimits

0x859e,	// (0x000833c6) popup_call3_audio_in_window_t1

0x85c6,	// (0x000833ee) popup_call3_audio_in_window_t2_ParamLimits

0x85c6,	// (0x000833ee) popup_call3_audio_in_window_t2

0x85ee,	// (0x00083416) popup_call3_audio_in_window_t3_ParamLimits

0x85ee,	// (0x00083416) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0008a476) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0008a476) popup_call3_audio_in_window_t

0x0e7d,	// (0x0007bca5) bg_popup_call3_rect_pane

0x20f3,	// (0x0007cf1b) bg_popup_call3_rect_pane_g1

0xe720,	// (0x00089548) bg_popup_call3_rect_pane_g2

0x20fb,	// (0x0007cf23) bg_popup_call3_rect_pane_g3

0x2103,	// (0x0007cf2b) bg_popup_call3_rect_pane_g4

0x210b,	// (0x0007cf33) bg_popup_call3_rect_pane_g5

0x2113,	// (0x0007cf3b) bg_popup_call3_rect_pane_g6

0x211b,	// (0x0007cf43) bg_popup_call3_rect_pane_g7

0x77b7,	// (0x000825df) mup_visualizer_osc_pane

0x0f5c,	// (0x0007bd84) mup_visualizer_spec_pane

0x8508,	// (0x00083330) call3_video_qcif_pane_ParamLimits

0x8508,	// (0x00083330) call3_video_qcif_pane

0x8518,	// (0x00083340) call3_video_qcif_uncrop_pane_ParamLimits

0x8518,	// (0x00083340) call3_video_qcif_uncrop_pane

0x8524,	// (0x0008334c) call3_video_subqcif_pane_ParamLimits

0x8524,	// (0x0008334c) call3_video_subqcif_pane

0x8536,	// (0x0008335e) call3_video_subqcif_uncrop_pane_ParamLimits

0x8536,	// (0x0008335e) call3_video_subqcif_uncrop_pane

0x858e,	// (0x000833b6) popup_call3_audio_in_window_g4_ParamLimits

0x858e,	// (0x000833b6) popup_call3_audio_in_window_g4

0x84b5,	// (0x000832dd) mup_spec_half_pane

0x84be,	// (0x000832e6) mup_spec_half_pane_cp

0x238b,	// (0x0007d1b3) mup_osc_middle_pane

0x2394,	// (0x0007d1bc) mup_visualizer_osc_pane_g1

0x8496,	// (0x000832be) mup_spec_bar_pane_ParamLimits

0x8496,	// (0x000832be) mup_spec_bar_pane

0x2378,	// (0x0007d1a0) mup_spec_bar_pane_g1

0x2382,	// (0x0007d1aa) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0008a461) mup_spec_bar_pane_g

0x5b5d,	// (0x00080985) aid_cale_week_size_cell_pane_ParamLimits

0x5b70,	// (0x00080998) bg_cale_heading_pane_ParamLimits

0xe754,	// (0x0008957c) bg_cale_pane_cp01_ParamLimits

0x5b84,	// (0x000809ac) cale_week_corner_pane_ParamLimits

0x5b95,	// (0x000809bd) cale_week_day_heading_pane_ParamLimits

0x5ba9,	// (0x000809d1) cale_week_scroll_pane_g1_ParamLimits

0x5bba,	// (0x000809e2) cale_week_scroll_pane_g2_ParamLimits

0x5bcb,	// (0x000809f3) cale_week_scroll_pane_g3_ParamLimits

0x5bdc,	// (0x00080a04) cale_week_scroll_pane_g4_ParamLimits

0x5bed,	// (0x00080a15) cale_week_scroll_pane_g5_ParamLimits

0x5bfe,	// (0x00080a26) cale_week_scroll_pane_g6_ParamLimits

0x5c0f,	// (0x00080a37) cale_week_scroll_pane_g7_ParamLimits

0x5c22,	// (0x00080a4a) cale_week_scroll_pane_g8_ParamLimits

0x5c35,	// (0x00080a5d) cale_week_scroll_pane_g9_ParamLimits

0x5c46,	// (0x00080a6e) cale_week_scroll_pane_g10_ParamLimits

0x5c57,	// (0x00080a7f) cale_week_scroll_pane_g11_ParamLimits

0x5c68,	// (0x00080a90) cale_week_scroll_pane_g12_ParamLimits

0x5c79,	// (0x00080aa1) cale_week_scroll_pane_g13_ParamLimits

0x5c8a,	// (0x00080ab2) cale_week_scroll_pane_g14_ParamLimits

0x5c9b,	// (0x00080ac3) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0008a009) cale_week_scroll_pane_g_ParamLimits

0x5cac,	// (0x00080ad4) cale_week_time_pane_ParamLimits

0x5cbf,	// (0x00080ae7) grid_cale_week_pane_ParamLimits

0xe76d,	// (0x00089595) listscroll_cale_week_pane_t1

0x5cd4,	// (0x00080afc) scroll_pane_cp08_ParamLimits

0x67a8,	// (0x000815d0) cale_month_corner_pane_ParamLimits

0x07a4,	// (0x0007b5cc) cale_month_pane_t1

0x6a72,	// (0x0008189a) cale_month_week_pane_ParamLimits

0x0f4e,	// (0x0007bd76) popup_call_status_window_g1_ParamLimits

0x71a3,	// (0x00081fcb) popup_call_status_window_g2_ParamLimits

0x71af,	// (0x00081fd7) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0008a1b1) popup_call_status_window_g_ParamLimits

0x0b89,	// (0x0007b9b1) aid_call2_pane

0x7a52,	// (0x0008287a) msg_header_pane_g1

0x7c23,	// (0x00082a4b) postcard_address2_pane_ParamLimits

0x7c23,	// (0x00082a4b) postcard_address2_pane

0x7c2f,	// (0x00082a57) postcard_message2_pane_ParamLimits

0x7c2f,	// (0x00082a57) postcard_message2_pane

0x8424,	// (0x0008324c) message2_row_pane_ParamLimits

0x8424,	// (0x0008324c) message2_row_pane

0x8441,	// (0x00083269) address2_row_pane_ParamLimits

0x8441,	// (0x00083269) address2_row_pane

0x2346,	// (0x0007d16e) postcard_message2_row_pane_g1

0x234e,	// (0x0007d176) postcard_message2_row_pane_t1

0x2346,	// (0x0007d16e) address2_row_pane_g1

0x234e,	// (0x0007d176) address2_row_pane_t1

0x5ecc,	// (0x00080cf4) aid_size_cell_vorec

0xe2c3,	// (0x000890eb) main_rss_pane

0x8454,	// (0x0008327c) rss_list_single_pane_ParamLimits

0x8454,	// (0x0008327c) rss_list_single_pane

0x235c,	// (0x0007d184) rss_list_single_pane_t1

0x236a,	// (0x0007d192) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0008a45c) rss_list_single_pane_t

0xe2c3,	// (0x000890eb) main_camera2_pane

0xe2c3,	// (0x000890eb) main_video2_pane

0x868a,	// (0x000834b2) cams_zoom_pane_cp2_ParamLimits

0x868a,	// (0x000834b2) cams_zoom_pane_cp2

0x8696,	// (0x000834be) image2_vga_pane_ParamLimits

0x8696,	// (0x000834be) image2_vga_pane

0x86a5,	// (0x000834cd) main_camera2_pane_g1_ParamLimits

0x86a5,	// (0x000834cd) main_camera2_pane_g1

0x86b1,	// (0x000834d9) main_camera2_pane_g2_ParamLimits

0x86b1,	// (0x000834d9) main_camera2_pane_g2

0x86bd,	// (0x000834e5) main_camera2_pane_g3_ParamLimits

0x86bd,	// (0x000834e5) main_camera2_pane_g3

0x86c9,	// (0x000834f1) main_camera2_pane_g4_ParamLimits

0x86c9,	// (0x000834f1) main_camera2_pane_g4

0x86d5,	// (0x000834fd) main_camera2_pane_g5_ParamLimits

0x86d5,	// (0x000834fd) main_camera2_pane_g5

0x86e1,	// (0x00083509) main_camera2_pane_g6_ParamLimits

0x86e1,	// (0x00083509) main_camera2_pane_g6

0x86ed,	// (0x00083515) main_camera2_pane_g7_ParamLimits

0x86ed,	// (0x00083515) main_camera2_pane_g7

0x86f9,	// (0x00083521) main_camera2_pane_g8_ParamLimits

0x86f9,	// (0x00083521) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0008a47d) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0008a47d) main_camera2_pane_g

0x8711,	// (0x00083539) main_camera2_pane_t1_ParamLimits

0x8711,	// (0x00083539) main_camera2_pane_t1

0x8723,	// (0x0008354b) main_camera2_pane_t2_ParamLimits

0x8723,	// (0x0008354b) main_camera2_pane_t2

0x8735,	// (0x0008355d) main_camera2_pane_t3_ParamLimits

0x8735,	// (0x0008355d) main_camera2_pane_t3

0x8747,	// (0x0008356f) main_camera2_pane_t4_ParamLimits

0x8747,	// (0x0008356f) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0008a490) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0008a490) main_camera2_pane_t

0x87a9,	// (0x000835d1) cams_zoom_pane_cp4_ParamLimits

0x87a9,	// (0x000835d1) cams_zoom_pane_cp4

0x87b9,	// (0x000835e1) image2_cif_pane_ParamLimits

0x87b9,	// (0x000835e1) image2_cif_pane

0x87ce,	// (0x000835f6) image2_subqcif_pane_ParamLimits

0x87ce,	// (0x000835f6) image2_subqcif_pane

0x87dd,	// (0x00083605) main_video2_pane_g1_ParamLimits

0x87dd,	// (0x00083605) main_video2_pane_g1

0x87ef,	// (0x00083617) main_video2_pane_g2_ParamLimits

0x87ef,	// (0x00083617) main_video2_pane_g2

0x87ff,	// (0x00083627) main_video2_pane_g3_ParamLimits

0x87ff,	// (0x00083627) main_video2_pane_g3

0x880f,	// (0x00083637) main_video2_pane_g4_ParamLimits

0x880f,	// (0x00083637) main_video2_pane_g4

0x881f,	// (0x00083647) main_video2_pane_g5_ParamLimits

0x881f,	// (0x00083647) main_video2_pane_g5

0x882f,	// (0x00083657) main_video2_pane_g6_ParamLimits

0x882f,	// (0x00083657) main_video2_pane_g6

0x0005,

0xf677,	// (0x0008a49f) main_video2_pane_g_ParamLimits

0xf677,	// (0x0008a49f) main_video2_pane_g

0x8841,	// (0x00083669) main_video2_pane_t1_ParamLimits

0x8841,	// (0x00083669) main_video2_pane_t1

0x885b,	// (0x00083683) main_video2_pane_t2_ParamLimits

0x885b,	// (0x00083683) main_video2_pane_t2

0x8881,	// (0x000836a9) main_video2_pane_t3_ParamLimits

0x8881,	// (0x000836a9) main_video2_pane_t3

0x0002,

0xf684,	// (0x0008a4ac) main_video2_pane_t_ParamLimits

0xf684,	// (0x0008a4ac) main_video2_pane_t

0x8194,	// (0x00082fbc) call_muted_g2

0x0001,

0xf626,	// (0x0008a44e) call_muted_g

0xe2c3,	// (0x000890eb) main_mup2_pane

0x244b,	// (0x0007d273) main_mup2_pane_g1_ParamLimits

0x244b,	// (0x0007d273) main_mup2_pane_g1

0x88a7,	// (0x000836cf) main_mup2_pane_g2_ParamLimits

0x88a7,	// (0x000836cf) main_mup2_pane_g2

0x8b29,	// (0x00083951) main_mup_pane_g13_cp1

0x8b31,	// (0x00083959) mup_volume_pane_cp1

0x88c7,	// (0x000836ef) main_mup2_pane_g4_ParamLimits

0x88c7,	// (0x000836ef) main_mup2_pane_g4

0x88dc,	// (0x00083704) main_mup2_pane_g5_ParamLimits

0x88dc,	// (0x00083704) main_mup2_pane_g5

0x88f1,	// (0x00083719) main_mup2_pane_g6_ParamLimits

0x88f1,	// (0x00083719) main_mup2_pane_g6

0x8906,	// (0x0008372e) main_mup2_pane_g7_ParamLimits

0x8906,	// (0x0008372e) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0008a4b3) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0008a4b3) main_mup2_pane_g

0x8922,	// (0x0008374a) main_mup2_pane_t1_ParamLimits

0x8922,	// (0x0008374a) main_mup2_pane_t1

0x8939,	// (0x00083761) main_mup2_pane_t2_ParamLimits

0x8939,	// (0x00083761) main_mup2_pane_t2

0x8950,	// (0x00083778) main_mup2_pane_t3_ParamLimits

0x8950,	// (0x00083778) main_mup2_pane_t3

0x8967,	// (0x0008378f) main_mup2_pane_t4_ParamLimits

0x8967,	// (0x0008378f) main_mup2_pane_t4

0x8981,	// (0x000837a9) main_mup2_pane_t5_ParamLimits

0x8981,	// (0x000837a9) main_mup2_pane_t5

0x899b,	// (0x000837c3) main_mup2_pane_t6_ParamLimits

0x899b,	// (0x000837c3) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0008a4c2) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0008a4c2) main_mup2_pane_t

0x89d3,	// (0x000837fb) mup2_visualizer_pane_ParamLimits

0x89d3,	// (0x000837fb) mup2_visualizer_pane

0x8a09,	// (0x00083831) mup_progress_pane_cp_ParamLimits

0x8a09,	// (0x00083831) mup_progress_pane_cp

0x8b14,	// (0x0008393c) mup_volume_pane_cp_ParamLimits

0x8b14,	// (0x0008393c) mup_volume_pane_cp

0x8a20,	// (0x00083848) mup2_visualizer_pane_g1_ParamLimits

0x8a20,	// (0x00083848) mup2_visualizer_pane_g1

0x241d,	// (0x0007d245) mup2_visualizer_pane_g2_ParamLimits

0x241d,	// (0x0007d245) mup2_visualizer_pane_g2

0x8a35,	// (0x0008385d) mup2_visualizer_pane_g3_ParamLimits

0x8a35,	// (0x0008385d) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0008a4cf) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0008a4cf) mup2_visualizer_pane_g

0x11c5,	// (0x0007bfed) aid_size_cell_fmradio

0x82aa,	// (0x000830d2) aid_height_parent_landcape

0xe97c,	// (0x000897a4) wml_content_pane_cp

0xe984,	// (0x000897ac) wml_tabs_pane

0xe98d,	// (0x000897b5) popup_wml_miniature_window

0xe995,	// (0x000897bd) scroll_pane_cp021

0xe9a9,	// (0x000897d1) wml_content_pane_comp8

0xe2c3,	// (0x000890eb) bg_popup_sub_pane_cp05

0x243b,	// (0x0007d263) popup_wml_miniature_window_g1

0x2443,	// (0x0007d26b) wml_miniature_view_pane

0x8a43,	// (0x0008386b) aid_size_wml_view

0x8a4b,	// (0x00083873) wml_miniature_view_pane_g1

0x8a54,	// (0x0008387c) wml_miniature_view_pane_g2

0x8a5d,	// (0x00083885) wml_miniature_view_pane_g3

0x8a65,	// (0x0008388d) wml_miniature_view_pane_g4

0x8a6d,	// (0x00083895) wml_miniature_view_pane_g5

0x8a75,	// (0x0008389d) wml_miniature_view_pane_g6

0x8a7d,	// (0x000838a5) wml_miniature_view_pane_g7

0x8a85,	// (0x000838ad) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0008a4d6) wml_miniature_view_pane_g

0x244b,	// (0x0007d273) background_graphic_ParamLimits

0x244b,	// (0x0007d273) background_graphic

0x2457,	// (0x0007d27f) wml_tabs_2_pane

0x2460,	// (0x0007d288) wml_tabs_3_pane_ParamLimits

0x2460,	// (0x0007d288) wml_tabs_3_pane

0x2472,	// (0x0007d29a) wml_tabs_4_pane_ParamLimits

0x2472,	// (0x0007d29a) wml_tabs_4_pane

0x2488,	// (0x0007d2b0) wml_tabs_5_pane_ParamLimits

0x2488,	// (0x0007d2b0) wml_tabs_5_pane

0x24a2,	// (0x0007d2ca) wml_tabs_pane_g2_ParamLimits

0x24a2,	// (0x0007d2ca) wml_tabs_pane_g2

0x24b6,	// (0x0007d2de) wml_tabs_pane_g3_ParamLimits

0x24b6,	// (0x0007d2de) wml_tabs_pane_g3

0x8a8d,	// (0x000838b5) wml_tabs_2_active_pane_ParamLimits

0x8a8d,	// (0x000838b5) wml_tabs_2_active_pane

0x8a9d,	// (0x000838c5) wml_tabs_2_passive_pane_ParamLimits

0x8a9d,	// (0x000838c5) wml_tabs_2_passive_pane

0x8aad,	// (0x000838d5) wml_tabs_3_active_pane_cp_ParamLimits

0x8aad,	// (0x000838d5) wml_tabs_3_active_pane_cp

0x8abe,	// (0x000838e6) wml_tabs_3_passive_pane_ParamLimits

0x8abe,	// (0x000838e6) wml_tabs_3_passive_pane

0x8acf,	// (0x000838f7) wml_tabs_3_passive_pane_cp_ParamLimits

0x8acf,	// (0x000838f7) wml_tabs_3_passive_pane_cp

0x8ae0,	// (0x00083908) tabs_4_active_pane

0x8ae8,	// (0x00083910) tabs_4_passive_pane

0x8af0,	// (0x00083918) tabs_4_passive_pane_cp

0x8af8,	// (0x00083920) tabs_4_passive_pane_cp2

0x806f,	// (0x00082e97) aid_height_text

0x7780,	// (0x000825a8) mup_volume_cont_pane_ParamLimits

0x7780,	// (0x000825a8) mup_volume_cont_pane

0x56b2,	// (0x000804da) aid_size_cell_pinb

0xe54e,	// (0x00089376) aid_size_list_pinb

0x89f2,	// (0x0008381a) mup2_volume_cont_pane_ParamLimits

0x89f2,	// (0x0008381a) mup2_volume_cont_pane

0x8b00,	// (0x00083928) mup2_volume_cont_pane_g1_ParamLimits

0x8b00,	// (0x00083928) mup2_volume_cont_pane_g1

0x5339,	// (0x00080161) aid_size_cell_touch_ParamLimits

0x5339,	// (0x00080161) aid_size_cell_touch

0x5592,	// (0x000803ba) touch_pane_ParamLimits

0x5592,	// (0x000803ba) touch_pane

0xde52,	// (0x00088c7a) main_rss2_pane

0x250c,	// (0x0007d334) listscroll_rss2_pane

0x2515,	// (0x0007d33d) rss2_navigation_pane

0x251d,	// (0x0007d345) list_rss2_pane

0x0d30,	// (0x0007bb58) scroll_pane_cp22

0x2525,	// (0x0007d34d) rss2_navigation_pane_g1

0x252e,	// (0x0007d356) rss2_navigation_pane_g2

0x2536,	// (0x0007d35e) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0008a4e7) rss2_navigation_pane_g

0x253e,	// (0x0007d366) rss2_navigation_pane_t1

0x8b39,	// (0x00083961) rss2_list_single_pane_ParamLimits

0x8b39,	// (0x00083961) rss2_list_single_pane

0x254c,	// (0x0007d374) rss2_list_single_pane_t2

0x255a,	// (0x0007d382) rss2_list_single_pane_t3_ParamLimits

0x255a,	// (0x0007d382) rss2_list_single_pane_t3

0x3f69,	// (0x0007ed91) rss2_list_single_pane_t4

0x6efa,	// (0x00081d22) smil_status_pane_g1

0x0561,	// (0x0007b389) main_image2_pane_ParamLimits

0x0561,	// (0x0007b389) main_image2_pane

0x8705,	// (0x0008352d) main_camera2_pane_g9_ParamLimits

0x8705,	// (0x0008352d) main_camera2_pane_g9

0x8759,	// (0x00083581) main_camera2_pane_t5_ParamLimits

0x8759,	// (0x00083581) main_camera2_pane_t5

0x876b,	// (0x00083593) main_camera2_pane_t6_ParamLimits

0x876b,	// (0x00083593) main_camera2_pane_t6

0x8b75,	// (0x0008399d) main_image2_pane_g1_ParamLimits

0x8b75,	// (0x0008399d) main_image2_pane_g1

0x7e04,	// (0x00082c2c) smil2_video_pane_ParamLimits

0x7e04,	// (0x00082c2c) smil2_video_pane

0x0559,	// (0x0007b381) aid_zoom_text_primary_cp

0xdea8,	// (0x00088cd0) popup_preview_fixed_window

0xe8e5,	// (0x0008970d) im_reading_pane_g1

0x864f,	// (0x00083477) cams2_bc_adjust_pane_cp_ParamLimits

0x864f,	// (0x00083477) cams2_bc_adjust_pane_cp

0x879b,	// (0x000835c3) cams2_bc_adjust_pane_ParamLimits

0x879b,	// (0x000835c3) cams2_bc_adjust_pane

0x8b81,	// (0x000839a9) cams2_bc_adjust_pane_g1

0x8b89,	// (0x000839b1) cams2_slider_pane

0x8b92,	// (0x000839ba) cams2_slider_pane_g1

0x8b9b,	// (0x000839c3) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0008a4ee) cams2_slider_pane_g

0x5788,	// (0x000805b0) calc_display_pane_ParamLimits

0x57a6,	// (0x000805ce) calc_paper_pane_ParamLimits

0x57c2,	// (0x000805ea) grid_calc_pane_ParamLimits

0x720d,	// (0x00082035) popup_clock_digital_window_t1_ParamLimits

0x1162,	// (0x0007bf8a) main_image_pane_t1

0x576e,	// (0x00080596) aid_size_cell_calc_ParamLimits

0x576e,	// (0x00080596) aid_size_cell_calc

0x82dc,	// (0x00083104) popup_blid_sat_info2_window_ParamLimits

0x82dc,	// (0x00083104) popup_blid_sat_info2_window

0x3fb3,	// (0x0007eddb) aid_size_cell_blid

0x3fbb,	// (0x0007ede3) bg_popup_window_pane_cp07

0x3fde,	// (0x0007ee06) grid_popup_blid_pane

0x8bb5,	// (0x000839dd) heading_pane_cp05_ParamLimits

0x8bb5,	// (0x000839dd) heading_pane_cp05

0x8c7f,	// (0x00083aa7) cell_popup_blid_pane_ParamLimits

0x8c7f,	// (0x00083aa7) cell_popup_blid_pane

0x8ca5,	// (0x00083acd) cell_popup_blid_pane_g1

0x8cad,	// (0x00083ad5) cell_popup_blid_pane_t1

0x89b8,	// (0x000837e0) mup2_indicator_pane_ParamLimits

0x89b8,	// (0x000837e0) mup2_indicator_pane

0x0e7d,	// (0x0007bca5) mup2_visualizer_osc_pane

0x2429,	// (0x0007d251) mup2_visualizer_spec_pane_ParamLimits

0x2429,	// (0x0007d251) mup2_visualizer_spec_pane

0x8cbb,	// (0x00083ae3) mup2_spec_half_pane

0x8cc4,	// (0x00083aec) mup2_spec_half_pane_cp

0x8cce,	// (0x00083af6) mup2_spec_bar_pane_ParamLimits

0x8cce,	// (0x00083af6) mup2_spec_bar_pane

0x2378,	// (0x0007d1a0) mup2_spec_bar_pane_g1

0x2382,	// (0x0007d1aa) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0008a461) mup2_spec_bar_pane_g

0x8ced,	// (0x00083b15) mup2_osc_middle_pane

0x2394,	// (0x0007d1bc) mup2_visualizer_osc_pane_g1

0xded2,	// (0x00088cfa) popup_number_entry_window_t1_ParamLimits

0xdee5,	// (0x00088d0d) popup_number_entry_window_t2_ParamLimits

0xdef7,	// (0x00088d1f) popup_number_entry_window_t3_ParamLimits

0x55e9,	// (0x00080411) popup_number_entry_window_t5_ParamLimits

0x55e9,	// (0x00080411) popup_number_entry_window_t5

0xf0fb,	// (0x00089f23) popup_number_entry_window_t_ParamLimits

0xdf09,	// (0x00088d31) text_title_cp2_ParamLimits

0x7aeb,	// (0x00082913) aid_hotspot_pointer_text2_pane

0x7b85,	// (0x000829ad) main_viewer_pane_g9_ParamLimits

0x7b85,	// (0x000829ad) main_viewer_pane_g9

0x07a4,	// (0x0007b5cc) cale_month_pane_t1_ParamLimits

0x0839,	// (0x0007b661) bg_cale_pane_ParamLimits

0x0851,	// (0x0007b679) list_cale_pane_ParamLimits

0xe76d,	// (0x00089595) listscroll_cale_day_pane_t1

0x0862,	// (0x0007b68a) scroll_pane_cp09_ParamLimits

0x77bf,	// (0x000825e7) main_mup_eq_pane_t1_ParamLimits

0x77bf,	// (0x000825e7) main_mup_eq_pane_t1

0x77d9,	// (0x00082601) main_mup_eq_pane_t2_ParamLimits

0x77d9,	// (0x00082601) main_mup_eq_pane_t2

0x77f1,	// (0x00082619) main_mup_eq_pane_t3_ParamLimits

0x77f1,	// (0x00082619) main_mup_eq_pane_t3

0x7809,	// (0x00082631) main_mup_eq_pane_t4_ParamLimits

0x7809,	// (0x00082631) main_mup_eq_pane_t4

0x7821,	// (0x00082649) main_mup_eq_pane_t5_ParamLimits

0x7821,	// (0x00082649) main_mup_eq_pane_t5

0x7839,	// (0x00082661) main_mup_eq_pane_t6_ParamLimits

0x7839,	// (0x00082661) main_mup_eq_pane_t6

0x784d,	// (0x00082675) main_mup_eq_pane_t7_ParamLimits

0x784d,	// (0x00082675) main_mup_eq_pane_t7

0x7861,	// (0x00082689) main_mup_eq_pane_t8_ParamLimits

0x7861,	// (0x00082689) main_mup_eq_pane_t8

0x7877,	// (0x0008269f) main_mup_eq_pane_t9_ParamLimits

0x7877,	// (0x0008269f) main_mup_eq_pane_t9

0x788f,	// (0x000826b7) main_mup_eq_pane_t10_ParamLimits

0x788f,	// (0x000826b7) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0008a2b0) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0008a2b0) main_mup_eq_pane_t

0x794c,	// (0x00082774) mup_equalizer_pane_cp5_ParamLimits

0x7962,	// (0x0008278a) mup_equalizer_pane_cp6_ParamLimits

0x797a,	// (0x000827a2) mup_equalizer_pane_cp7_ParamLimits

0xde52,	// (0x00088c7a) main_gallery_pane

0x239d,	// (0x0007d1c5) smil2_volume_pane

0x23b8,	// (0x0007d1e0) smil_status_volume_pane_g1_ParamLimits

0x23a5,	// (0x0007d1cd) smil_status_volume_pane_g2_ParamLimits

0x84c6,	// (0x000832ee) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0008a466) smil_status_volume_pane_g_ParamLimits

0x3fbb,	// (0x0007ede3) bg_popup_window_pane_cp07_ParamLimits

0x3fc9,	// (0x0007edf1) blid_firmament_pane

0x8cf6,	// (0x00083b1e) aid_size_cell_gallery_ParamLimits

0x8cf6,	// (0x00083b1e) aid_size_cell_gallery

0x8d04,	// (0x00083b2c) grid_gallery_pane_ParamLimits

0x8d04,	// (0x00083b2c) grid_gallery_pane

0x8d14,	// (0x00083b3c) cell_gallery_pane_ParamLimits

0x8d14,	// (0x00083b3c) cell_gallery_pane

0x8d62,	// (0x00083b8a) bg_cell_gallery_focus_pane_ParamLimits

0x8d62,	// (0x00083b8a) bg_cell_gallery_focus_pane

0x8d74,	// (0x00083b9c) cell_gallery_pane_g1_ParamLimits

0x8d74,	// (0x00083b9c) cell_gallery_pane_g1

0x8d80,	// (0x00083ba8) cell_gallery_pane_g2_ParamLimits

0x8d80,	// (0x00083ba8) cell_gallery_pane_g2

0x8d8d,	// (0x00083bb5) cell_gallery_pane_g3_ParamLimits

0x8d8d,	// (0x00083bb5) cell_gallery_pane_g3

0x8d9a,	// (0x00083bc2) cell_gallery_pane_g4_ParamLimits

0x8d9a,	// (0x00083bc2) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0008a514) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0008a514) cell_gallery_pane_g

0x8da6,	// (0x00083bce) bg_cell_gallery_focus_pane_g1

0x8dae,	// (0x00083bd6) bg_cell_gallery_focus_pane_g2

0x8db6,	// (0x00083bde) bg_cell_gallery_focus_pane_g3

0x8dbe,	// (0x00083be6) bg_cell_gallery_focus_pane_g4

0x8dc6,	// (0x00083bee) bg_cell_gallery_focus_pane_g5

0x8dce,	// (0x00083bf6) bg_cell_gallery_focus_pane_g6

0x8dd6,	// (0x00083bfe) bg_cell_gallery_focus_pane_g7

0x8dde,	// (0x00083c06) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0008a51d) bg_cell_gallery_focus_pane_g

0x8de6,	// (0x00083c0e) aid_firma_cardinal

0x8dfa,	// (0x00083c22) blid_firmament_pane_t1

0x8e11,	// (0x00083c39) blid_firmament_pane_t2

0x8e28,	// (0x00083c50) blid_firmament_pane_t3

0x8e3f,	// (0x00083c67) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0008a52e) blid_firmament_pane_t

0x8e56,	// (0x00083c7e) blid_sat_info_pane

0x8e66,	// (0x00083c8e) blid_sat_info_pane_g1

0x8e66,	// (0x00083c8e) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0008a537) blid_sat_info_pane_g

0x8e70,	// (0x00083c98) blid_sat_info_pane_t1

0x8e7e,	// (0x00083ca6) smil2_volume_content_pane

0x8e87,	// (0x00083caf) smil2_volume_pane_g1

0x8e8f,	// (0x00083cb7) smil2_volume_content_pane_g1

0x8e98,	// (0x00083cc0) smil2_volume_content_pane_g2

0x8ea1,	// (0x00083cc9) smil2_volume_content_pane_g3

0x8eaa,	// (0x00083cd2) smil2_volume_content_pane_g4

0x8eb3,	// (0x00083cdb) smil2_volume_content_pane_g5

0x8ebc,	// (0x00083ce4) smil2_volume_content_pane_g6

0x8ec5,	// (0x00083ced) smil2_volume_content_pane_g7

0x8ece,	// (0x00083cf6) smil2_volume_content_pane_g8

0x8ed7,	// (0x00083cff) smil2_volume_content_pane_g9

0x8ee0,	// (0x00083d08) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0008a53c) smil2_volume_content_pane_g

0x5d2a,	// (0x00080b52) cale_week_day_heading_pane_t1_ParamLimits

0x5d3e,	// (0x00080b66) cale_week_day_heading_pane_t2_ParamLimits

0x5d52,	// (0x00080b7a) cale_week_day_heading_pane_t3_ParamLimits

0x5d66,	// (0x00080b8e) cale_week_day_heading_pane_t4_ParamLimits

0x5d7a,	// (0x00080ba2) cale_week_day_heading_pane_t5_ParamLimits

0x5d8e,	// (0x00080bb6) cale_week_day_heading_pane_t6_ParamLimits

0x5da2,	// (0x00080bca) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0008a028) cale_week_day_heading_pane_t_ParamLimits

0xe77f,	// (0x000895a7) bg_cale_side_pane_ParamLimits

0x5db6,	// (0x00080bde) cale_week_time_pane_t1_ParamLimits

0x5dce,	// (0x00080bf6) cale_week_time_pane_t2_ParamLimits

0x5de6,	// (0x00080c0e) cale_week_time_pane_t3_ParamLimits

0x5dfe,	// (0x00080c26) cale_week_time_pane_t4_ParamLimits

0x5e16,	// (0x00080c3e) cale_week_time_pane_t5_ParamLimits

0x5e2e,	// (0x00080c56) cale_week_time_pane_t6_ParamLimits

0x5e46,	// (0x00080c6e) cale_week_time_pane_t7_ParamLimits

0x5e5e,	// (0x00080c86) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0008a037) cale_week_time_pane_t_ParamLimits

0x5e76,	// (0x00080c9e) cell_cale_week_pane_g2_ParamLimits

0xe77f,	// (0x000895a7) bg_cale_side_pane_cp01_ParamLimits

0x6d87,	// (0x00081baf) cale_month_week_pane_t1_ParamLimits

0x6d9e,	// (0x00081bc6) cale_month_week_pane_t2_ParamLimits

0x6db5,	// (0x00081bdd) cale_month_week_pane_t3_ParamLimits

0x6dcc,	// (0x00081bf4) cale_month_week_pane_t4_ParamLimits

0x6de3,	// (0x00081c0b) cale_month_week_pane_t5_ParamLimits

0x6dfa,	// (0x00081c22) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0008a110) cale_month_week_pane_t_ParamLimits

0x6ec7,	// (0x00081cef) cell_cale_month_pane_g1_ParamLimits

0xde52,	// (0x00088c7a) main_cale_event_viewer_pane

0xde52,	// (0x00088c7a) listscroll_cale_event_viewer_pane

0x8ee9,	// (0x00083d11) list_cale_ev_pane

0x8ef1,	// (0x00083d19) scroll_pane_cp023

0x8efd,	// (0x00083d25) field_cale_ev_pane_ParamLimits

0x8efd,	// (0x00083d25) field_cale_ev_pane

0x8f17,	// (0x00083d3f) field_cale_ev_content_pane_ParamLimits

0x8f17,	// (0x00083d3f) field_cale_ev_content_pane

0x8f23,	// (0x00083d4b) field_cale_ev_pane_g1_ParamLimits

0x8f23,	// (0x00083d4b) field_cale_ev_pane_g1

0x8f2f,	// (0x00083d57) field_cale_ev_pane_g2_ParamLimits

0x8f2f,	// (0x00083d57) field_cale_ev_pane_g2

0x8f47,	// (0x00083d6f) field_cale_ev_pane_g3_ParamLimits

0x8f47,	// (0x00083d6f) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0008a551) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0008a551) field_cale_ev_pane_g

0x8f5f,	// (0x00083d87) field_cale_ev_pane_t1_ParamLimits

0x8f5f,	// (0x00083d87) field_cale_ev_pane_t1

0x8f76,	// (0x00083d9e) field_cale_ev_content_pane_t1_ParamLimits

0x8f76,	// (0x00083d9e) field_cale_ev_content_pane_t1

0x1006,	// (0x0007be2e) bg_button_pane_cp01

0xe62d,	// (0x00089455) listscroll_cale_week_pane_ParamLimits

0x5b53,	// (0x0008097b) popup_toolbar_window_cp01

0xe76d,	// (0x00089595) listscroll_cale_week_pane_t1_ParamLimits

0xe62d,	// (0x00089455) listscroll_cale_day_pane_ParamLimits

0x5b53,	// (0x0008097b) popup_toolbar_window_cp02

0xe76d,	// (0x00089595) listscroll_cale_day_pane_t1_ParamLimits

0xe62d,	// (0x00089455) main_cale_month_pane_ParamLimits

0x83a0,	// (0x000831c8) popup_toolbar_window_cp03_ParamLimits

0x83a0,	// (0x000831c8) popup_toolbar_window_cp03

0x7d16,	// (0x00082b3e) main_image_pane_g2_ParamLimits

0x7d16,	// (0x00082b3e) main_image_pane_g2

0x7d22,	// (0x00082b4a) main_image_pane_g3_ParamLimits

0x7d22,	// (0x00082b4a) main_image_pane_g3

0x0002,

0xf51a,	// (0x0008a342) main_image_pane_g_ParamLimits

0xf51a,	// (0x0008a342) main_image_pane_g

0x1162,	// (0x0007bf8a) main_image_pane_t1_ParamLimits

0x7d2e,	// (0x00082b56) main_image_pane_t2_ParamLimits

0x7d2e,	// (0x00082b56) main_image_pane_t2

0x7d40,	// (0x00082b68) main_image_pane_t3_ParamLimits

0x7d40,	// (0x00082b68) main_image_pane_t3

0x7d52,	// (0x00082b7a) main_image_pane_t4_ParamLimits

0x7d52,	// (0x00082b7a) main_image_pane_t4

0x0003,

0xf521,	// (0x0008a349) main_image_pane_t_ParamLimits

0xf521,	// (0x0008a349) main_image_pane_t

0x7d64,	// (0x00082b8c) popup_image_details_window_cp01

0x7d6e,	// (0x00082b96) popup_toobar_trans_pane_cp01_ParamLimits

0x7d6e,	// (0x00082b96) popup_toobar_trans_pane_cp01

0x8325,	// (0x0008314d) popup_image_details_window_ParamLimits

0x8325,	// (0x0008314d) popup_image_details_window

0x22fe,	// (0x0007d126) popup_image_focus_window

0x8641,	// (0x00083469) camera2_autofocus_pane_ParamLimits

0x8641,	// (0x00083469) camera2_autofocus_pane

0xde52,	// (0x00088c7a) bg_popup_sub_pane_cp06

0x8f93,	// (0x00083dbb) popup_image_focus_window_g1

0x8f9b,	// (0x00083dc3) popup_image_focus_window_g2

0x8fa3,	// (0x00083dcb) popup_image_focus_window_g3

0x8fab,	// (0x00083dd3) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0008a558) popup_image_focus_window_g

0x8fb3,	// (0x00083ddb) popup_image_focus_window_t1

0x8fc1,	// (0x00083de9) popup_image_focus_window_t2

0x8fd1,	// (0x00083df9) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0008a561) popup_image_focus_window_t

0x8fdf,	// (0x00083e07) camera2_autofocus_pane_g1

0x0561,	// (0x0007b389) bg_tb_trans_pane_cp01

0x901d,	// (0x00083e45) popup_image_details_window_g1

0x9030,	// (0x00083e58) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0008a573) popup_image_details_window_g

0x9059,	// (0x00083e81) popup_image_details_window_t1

0x906b,	// (0x00083e93) popup_image_details_window_t2

0x9084,	// (0x00083eac) popup_image_details_window_t3

0x9098,	// (0x00083ec0) popup_image_details_window_t4

0x90b3,	// (0x00083edb) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0008a57a) popup_image_details_window_t

0xe619,	// (0x00089441) bg_calc_paper_pane_ParamLimits

0x58bb,	// (0x000806e3) grid_highlight_pane_cp013

0x58c5,	// (0x000806ed) list_calc_pane_ParamLimits

0x58d7,	// (0x000806ff) scroll_pane_cp024

0xe62d,	// (0x00089455) bg_calc_display_pane_ParamLimits

0x58df,	// (0x00080707) calc_display_pane_t1_ParamLimits

0x58f4,	// (0x0008071c) calc_display_pane_t2_ParamLimits

0x5909,	// (0x00080731) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00089faa) calc_display_pane_t_ParamLimits

0x59f0,	// (0x00080818) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00089fc7) cell_calc_pane_g

0x59f9,	// (0x00080821) cell_calc_pane_t1

0xe68c,	// (0x000894b4) grid_highlight_pane_cp02_ParamLimits

0xe6a2,	// (0x000894ca) toolbar_button_pane_cp01_ParamLimits

0xe6a2,	// (0x000894ca) toolbar_button_pane_cp01

0x11a7,	// (0x0007bfcf) temp_image_control_pane_ParamLimits

0x11a7,	// (0x0007bfcf) temp_image_control_pane

0x0561,	// (0x0007b389) main_mp3_pane

0x90cd,	// (0x00083ef5) temp_image_control_pane_g1_ParamLimits

0x90cd,	// (0x00083ef5) temp_image_control_pane_g1

0x90db,	// (0x00083f03) temp_image_control_pane_g2_ParamLimits

0x90db,	// (0x00083f03) temp_image_control_pane_g2

0x90ed,	// (0x00083f15) temp_image_control_pane_g3_ParamLimits

0x90ed,	// (0x00083f15) temp_image_control_pane_g3

0x90fd,	// (0x00083f25) temp_image_control_pane_g4_ParamLimits

0x90fd,	// (0x00083f25) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0008a585) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0008a585) temp_image_control_pane_g

0x90cd,	// (0x00083ef5) main_mp3_pane_g1

0x910e,	// (0x00083f36) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0008a58e) main_mp3_pane_g

0x9165,	// (0x00083f8d) main_mp3_pane_t1

0xe7ee,	// (0x00089616) main_camera_pane_g8_ParamLimits

0xe7ee,	// (0x00089616) main_camera_pane_g8

0x6106,	// (0x00080f2e) main_video_pane_g7_ParamLimits

0x6106,	// (0x00080f2e) main_video_pane_g7

0x8789,	// (0x000835b1) main_camera2_pane_t7_ParamLimits

0x8789,	// (0x000835b1) main_camera2_pane_t7

0xe93c,	// (0x00089764) scroll_pane_cp025_ParamLimits

0xe93c,	// (0x00089764) scroll_pane_cp025

0xe950,	// (0x00089778) scroll_pane_cp026_ParamLimits

0xe950,	// (0x00089778) scroll_pane_cp026

0xe95f,	// (0x00089787) wml_content_pane_ParamLimits

0xde52,	// (0x00088c7a) main_touch_calib_pane

0x9217,	// (0x0008403f) main_touch_calib_pane_g1

0x9223,	// (0x0008404b) main_touch_calib_pane_g2

0x922f,	// (0x00084057) main_touch_calib_pane_g3

0x923b,	// (0x00084063) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0008a5ac) main_touch_calib_pane_g

0x9247,	// (0x0008406f) main_touch_calib_pane_t1

0x925e,	// (0x00084086) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0008a5b5) main_touch_calib_pane_t

0x0dbe,	// (0x0007bbe6) mup_progress_pane_cp02

0x0ddd,	// (0x0007bc05) navi_pane_g1

0x0e3f,	// (0x0007bc67) navi_pane_mp_t3

0x0561,	// (0x0007b389) main_mp3_pane_ParamLimits

0x83de,	// (0x00083206) navi_pane_ParamLimits

0x90cd,	// (0x00083ef5) main_mp3_pane_g1_ParamLimits

0x910e,	// (0x00083f36) main_mp3_pane_g2_ParamLimits

0x911a,	// (0x00083f42) main_mp3_pane_g3_ParamLimits

0x911a,	// (0x00083f42) main_mp3_pane_g3

0x9126,	// (0x00083f4e) main_mp3_pane_g4_ParamLimits

0x9126,	// (0x00083f4e) main_mp3_pane_g4

0x9132,	// (0x00083f5a) main_mp3_pane_g5_ParamLimits

0x9132,	// (0x00083f5a) main_mp3_pane_g5

0x9140,	// (0x00083f68) main_mp3_pane_g6_ParamLimits

0x9140,	// (0x00083f68) main_mp3_pane_g6

0x914d,	// (0x00083f75) main_mp3_pane_g7_ParamLimits

0x914d,	// (0x00083f75) main_mp3_pane_g7

0x9159,	// (0x00083f81) main_mp3_pane_g8_ParamLimits

0x9159,	// (0x00083f81) main_mp3_pane_g8

0xf766,	// (0x0008a58e) main_mp3_pane_g_ParamLimits

0x9173,	// (0x00083f9b) main_mp3_pane_t2

0x9183,	// (0x00083fab) main_mp3_pane_t3

0x9193,	// (0x00083fbb) main_mp3_pane_t4

0x91a1,	// (0x00083fc9) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0008a59f) main_mp3_pane_t

0x91bf,	// (0x00083fe7) mup_progress_pane_cp01

0x0559,	// (0x0007b381) aid_zoom_text_secondary2

0x8ee9,	// (0x00083d11) list_cale_ev2_pane

0x8ef1,	// (0x00083d19) scroll_pane_cp023_ParamLimits

0x92b1,	// (0x000840d9) field_cale_ev2_pane_ParamLimits

0x92b1,	// (0x000840d9) field_cale_ev2_pane

0x92e5,	// (0x0008410d) field_cale_ev2_pane_g1_ParamLimits

0x92e5,	// (0x0008410d) field_cale_ev2_pane_g1

0x92f1,	// (0x00084119) field_cale_ev2_pane_g2_ParamLimits

0x92f1,	// (0x00084119) field_cale_ev2_pane_g2

0x9309,	// (0x00084131) field_cale_ev2_pane_g3_ParamLimits

0x9309,	// (0x00084131) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0008a5c0) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0008a5c0) field_cale_ev2_pane_g

0x2577,	// (0x0007d39f) field_cale_ev2_pane_t1_ParamLimits

0x2577,	// (0x0007d39f) field_cale_ev2_pane_t1

0x258e,	// (0x0007d3b6) field_cale_ev2_pane_t2_ParamLimits

0x258e,	// (0x0007d3b6) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0008a5c9) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0008a5c9) field_cale_ev2_pane_t

0x7bed,	// (0x00082a15) main_postcard_pane_g5_ParamLimits

0x7bed,	// (0x00082a15) main_postcard_pane_g5

0x7bfb,	// (0x00082a23) main_postcard_pane_g6_ParamLimits

0x7bfb,	// (0x00082a23) main_postcard_pane_g6

0x5f46,	// (0x00080d6e) camera2_autofocus_pane_cp_ParamLimits

0x5f46,	// (0x00080d6e) camera2_autofocus_pane_cp

0x0561,	// (0x0007b389) main_mup3_pane

0x9341,	// (0x00084169) main_mup3_pane_g1_ParamLimits

0x9341,	// (0x00084169) main_mup3_pane_g1

0x9362,	// (0x0008418a) main_mup3_pane_g2_ParamLimits

0x9362,	// (0x0008418a) main_mup3_pane_g2

0x93dd,	// (0x00084205) main_mup3_pane_g3_ParamLimits

0x93dd,	// (0x00084205) main_mup3_pane_g3

0x941c,	// (0x00084244) main_mup3_pane_g4_ParamLimits

0x941c,	// (0x00084244) main_mup3_pane_g4

0x945b,	// (0x00084283) main_mup3_pane_g5_ParamLimits

0x945b,	// (0x00084283) main_mup3_pane_g5

0x949c,	// (0x000842c4) main_mup3_pane_g6_ParamLimits

0x949c,	// (0x000842c4) main_mup3_pane_g6

0x94aa,	// (0x000842d2) main_mup3_pane_g7_ParamLimits

0x94aa,	// (0x000842d2) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0008a5d9) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0008a5d9) main_mup3_pane_g

0x951c,	// (0x00084344) main_mup3_pane_t1_ParamLimits

0x951c,	// (0x00084344) main_mup3_pane_t1

0x958b,	// (0x000843b3) main_mup3_pane_t2_ParamLimits

0x958b,	// (0x000843b3) main_mup3_pane_t2

0x9654,	// (0x0008447c) main_mup3_pane_t4_ParamLimits

0x9654,	// (0x0008447c) main_mup3_pane_t4

0x96a6,	// (0x000844ce) main_mup3_pane_t5_ParamLimits

0x96a6,	// (0x000844ce) main_mup3_pane_t5

0x974e,	// (0x00084576) main_mup3_pane_t6_ParamLimits

0x974e,	// (0x00084576) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0008a5ea) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0008a5ea) main_mup3_pane_t

0x97f6,	// (0x0008461e) mup3_progress_pane_ParamLimits

0x97f6,	// (0x0008461e) mup3_progress_pane

0x985b,	// (0x00084683) popup_mup3_control_window_ParamLimits

0x985b,	// (0x00084683) popup_mup3_control_window

0x9867,	// (0x0008468f) popup_mup3_text_window

0x987c,	// (0x000846a4) mup3_progress_pane_t1

0x9893,	// (0x000846bb) mup3_progress_pane_t2

0x98aa,	// (0x000846d2) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0008a5f7) mup3_progress_pane_t

0x98c1,	// (0x000846e9) mup_progress_pane_cp03

0xde52,	// (0x00088c7a) bg_tb_trans_pane_cp04

0x98d1,	// (0x000846f9) mup3_volume_pane

0x98d9,	// (0x00084701) popup_mup3_control_window_g1

0x98e2,	// (0x0008470a) mup3_volume_pane_g1

0x98eb,	// (0x00084713) mup3_volume_pane_g2

0x98f4,	// (0x0008471c) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0008a5fe) mup3_volume_pane_g

0xde52,	// (0x00088c7a) bg_tb_trans_pane_cp03

0x98fd,	// (0x00084725) popup_mup3_text_window_g1

0x9905,	// (0x0008472d) popup_mup3_text_window_t1

0xe675,	// (0x0008949d) list_calc_item_pane_g1_ParamLimits

0x24f3,	// (0x0007d31b) mup_volume_pane_cp_g1

0x9275,	// (0x0008409d) main_touch_calib_pane_t3

0x9289,	// (0x000840b1) main_touch_calib_pane_t4

0x929d,	// (0x000840c5) main_touch_calib_pane_t5

0xde5c,	// (0x00088c84) aid_cell_size_toolbar2

0xde64,	// (0x00088c8c) aid_popup3_width_pane

0x0549,	// (0x0007b371) aid_zoom_text_msg_primary

0x5f30,	// (0x00080d58) vorec_t7

0xe639,	// (0x00089461) bg_calc_paper_pane_g1_ParamLimits

0xe645,	// (0x0008946d) bg_calc_paper_pane_g2_ParamLimits

0xe651,	// (0x00089479) bg_calc_paper_pane_g3_ParamLimits

0xe65d,	// (0x00089485) bg_calc_paper_pane_g4_ParamLimits

0xe669,	// (0x00089491) bg_calc_paper_pane_g5_ParamLimits

0x5948,	// (0x00080770) bg_calc_paper_pane_g6_ParamLimits

0x5959,	// (0x00080781) bg_calc_paper_pane_g7_ParamLimits

0x596a,	// (0x00080792) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00089fb1) bg_calc_paper_pane_g_ParamLimits

0x597b,	// (0x000807a3) calc_bg_paper_pane_g9_ParamLimits

0x602f,	// (0x00080e57) image_qvga_pane_ParamLimits

0x602f,	// (0x00080e57) image_qvga_pane

0xe51e,	// (0x00089346) bg_popup_sub_pane_cp04_ParamLimits

0x10de,	// (0x0007bf06) popup_mup_playback_window_g1_ParamLimits

0x10ea,	// (0x0007bf12) popup_mup_playback_window_t1_ParamLimits

0x10ff,	// (0x0007bf27) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0008a33d) popup_mup_playback_window_t_ParamLimits

0x88b8,	// (0x000836e0) main_mup2_pane_g3_ParamLimits

0x88b8,	// (0x000836e0) main_mup2_pane_g3

0x62ce,	// (0x000810f6) popup_toolbar_window_cp04

0x14f4,	// (0x0007c31c) popup_call2_audio_second_window_g3_ParamLimits

0x14f4,	// (0x0007c31c) popup_call2_audio_second_window_g3

0x18fe,	// (0x0007c726) popup_call2_audio_first_window_g4_ParamLimits

0x18fe,	// (0x0007c726) popup_call2_audio_first_window_g4

0x1f7d,	// (0x0007cda5) popup_call2_audio_in_window_g4_ParamLimits

0x1f7d,	// (0x0007cda5) popup_call2_audio_in_window_g4

0x7d09,	// (0x00082b31) aid_area_sk_bg_cut_ParamLimits

0x7d09,	// (0x00082b31) aid_area_sk_bg_cut

0x1114,	// (0x0007bf3c) aid_area_sk_bg_cut_2_ParamLimits

0x1114,	// (0x0007bf3c) aid_area_sk_bg_cut_2

0x8d52,	// (0x00083b7a) aid_placing_details_win

0x8d5a,	// (0x00083b82) aid_placing_details_win_2

0x8fdf,	// (0x00083e07) camera2_autofocus_pane_g1_ParamLimits

0x5540,	// (0x00080368) popup_fixed_preview_cale_window_ParamLimits

0x5540,	// (0x00080368) popup_fixed_preview_cale_window

0x0ea9,	// (0x0007bcd1) navi_slider_pane_g3

0x0ea0,	// (0x0007bcc8) navi_slider_pane_g4

0x0e97,	// (0x0007bcbf) navi_slider_pane_g5

0x0ea9,	// (0x0007bcd1) navi_slider_pane_g6

0x7553,	// (0x0008237b) navi_slider_pane_g7

0x0fd3,	// (0x0007bdfb) mup_scale_pane_g3

0x0fdc,	// (0x0007be04) mup_scale_pane_g4

0x0fe5,	// (0x0007be0d) mup_scale_pane_g5

0x7992,	// (0x000827ba) mup_scale_pane_g6

0x799b,	// (0x000827c3) mup_scale_pane_g7

0x0ea9,	// (0x0007bcd1) cams2_slider_pane_g3

0x3f9a,	// (0x0007edc2) cams2_slider_pane_g4

0x8ba4,	// (0x000839cc) cams2_slider_pane_g5

0x0ea9,	// (0x0007bcd1) cams2_slider_pane_g6

0x8bac,	// (0x000839d4) cams2_slider_pane_g7

0x8e66,	// (0x00083c8e) camera2_autofocus_pane_cp_g1

0x9913,	// (0x0008473b) bg_popup_preview_window_pane_cp02_ParamLimits

0x9913,	// (0x0008473b) bg_popup_preview_window_pane_cp02

0x991f,	// (0x00084747) list_fp_cale_pane_ParamLimits

0x991f,	// (0x00084747) list_fp_cale_pane

0x992b,	// (0x00084753) popup_fixed_preview_cale_window_t1_ParamLimits

0x992b,	// (0x00084753) popup_fixed_preview_cale_window_t1

0x993d,	// (0x00084765) popup_fixed_preview_cale_window_t2_ParamLimits

0x993d,	// (0x00084765) popup_fixed_preview_cale_window_t2

0x9952,	// (0x0008477a) popup_fixed_preview_cale_window_t3_ParamLimits

0x9952,	// (0x0008477a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0008a605) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0008a605) popup_fixed_preview_cale_window_t

0x9973,	// (0x0008479b) list_single_fp_cale_pane_ParamLimits

0x9973,	// (0x0008479b) list_single_fp_cale_pane

0x9987,	// (0x000847af) list_single_fp_cale_pane_g1_ParamLimits

0x9987,	// (0x000847af) list_single_fp_cale_pane_g1

0x9993,	// (0x000847bb) list_single_fp_cale_pane_g2_ParamLimits

0x9993,	// (0x000847bb) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0008a60c) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0008a60c) list_single_fp_cale_pane_g

0x99ac,	// (0x000847d4) list_single_fp_cale_pane_t1_ParamLimits

0x99ac,	// (0x000847d4) list_single_fp_cale_pane_t1

0x99be,	// (0x000847e6) list_single_fp_cale_pane_t2_ParamLimits

0x99be,	// (0x000847e6) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0008a613) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0008a613) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xde52,	// (0x00088c7a) main_dialer_pane

0x99f1,	// (0x00084819) aid_cell_size_keypad

0x99fb,	// (0x00084823) dialer_ne_pane

0x9a05,	// (0x0008482d) grid_dialer_command_1_pane

0x9a0d,	// (0x00084835) grid_dialer_command_2_pane

0x9a15,	// (0x0008483d) grid_dialer_keypad_pane

0x9a29,	// (0x00084851) bg_popup_call_pane_cp06_ParamLimits

0x9a29,	// (0x00084851) bg_popup_call_pane_cp06

0x9a35,	// (0x0008485d) dialer_ne_clear_pane_ParamLimits

0x9a35,	// (0x0008485d) dialer_ne_clear_pane

0x9a41,	// (0x00084869) dialer_ne_pane_g1

0x9a49,	// (0x00084871) dialer_ne_pane_t1_ParamLimits

0x9a49,	// (0x00084871) dialer_ne_pane_t1

0x9a5b,	// (0x00084883) dialer_ne_pane_t2_ParamLimits

0x9a5b,	// (0x00084883) dialer_ne_pane_t2

0x9a78,	// (0x000848a0) dialer_ne_pane_t3_ParamLimits

0x9a78,	// (0x000848a0) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0008a618) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0008a618) dialer_ne_pane_t

0x9a9c,	// (0x000848c4) dialer_ne_pane_t3_copy1_ParamLimits

0x9a9c,	// (0x000848c4) dialer_ne_pane_t3_copy1

0x9ac0,	// (0x000848e8) cell_dialer_keypad_pane_ParamLimits

0x9ac0,	// (0x000848e8) cell_dialer_keypad_pane

0x9ad7,	// (0x000848ff) cell_dialer_command_1_pane_ParamLimits

0x9ad7,	// (0x000848ff) cell_dialer_command_1_pane

0x9aed,	// (0x00084915) cell_dialer_command_2_pane_ParamLimits

0x9aed,	// (0x00084915) cell_dialer_command_2_pane

0x9afc,	// (0x00084924) bg_button_pane_cp02_ParamLimits

0x9afc,	// (0x00084924) bg_button_pane_cp02

0x9b08,	// (0x00084930) cell_dialer_keypad_pane_g1_ParamLimits

0x9b08,	// (0x00084930) cell_dialer_keypad_pane_g1

0x9afc,	// (0x00084924) bg_button_pane_cp03_ParamLimits

0x9afc,	// (0x00084924) bg_button_pane_cp03

0x9b1d,	// (0x00084945) cell_dialer_command_1_pane_g1_ParamLimits

0x9b1d,	// (0x00084945) cell_dialer_command_1_pane_g1

0x9b30,	// (0x00084958) bg_button_pane_cp04

0x9b38,	// (0x00084960) cell_dialer_command_2_pane_g1

0x0e7d,	// (0x0007bca5) bg_button_pane_cp06

0x9b40,	// (0x00084968) dialer_ne_clear_pane_g1

0x7496,	// (0x000822be) navi_pane_g2

0x74c4,	// (0x000822ec) navi_pane_g3

0x0002,

0xf418,	// (0x0008a240) navi_pane_g

0x74ef,	// (0x00082317) navi_pane_mv_g2

0x7516,	// (0x0008233e) navi_pane_mv_g5

0x751e,	// (0x00082346) navi_pane_mv_t1

0xe62d,	// (0x00089455) main_clock2_pane

0x9b6e,	// (0x00084996) main_clock2_list_pane_ParamLimits

0x9b6e,	// (0x00084996) main_clock2_list_pane

0x9b96,	// (0x000849be) main_clock2_pane_t1_ParamLimits

0x9b96,	// (0x000849be) main_clock2_pane_t1

0x9bc6,	// (0x000849ee) main_clock2_pane_t2_ParamLimits

0x9bc6,	// (0x000849ee) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0008a61f) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0008a61f) main_clock2_pane_t

0x9c2d,	// (0x00084a55) popup_clock_analogue_window_cp03_ParamLimits

0x9c2d,	// (0x00084a55) popup_clock_analogue_window_cp03

0x9c4d,	// (0x00084a75) popup_clock_digital_window_cp02_ParamLimits

0x9c4d,	// (0x00084a75) popup_clock_digital_window_cp02

0x9cc2,	// (0x00084aea) main_clock2_list_single_pane_ParamLimits

0x9cc2,	// (0x00084aea) main_clock2_list_single_pane

0x0e7d,	// (0x0007bca5) list_highlight_pane_cp05

0x9cd4,	// (0x00084afc) main_clock2_list_single_pane_t1

0x62ce,	// (0x000810f6) popup_toolbar_window_cp04_ParamLimits

0x8fed,	// (0x00083e15) camera2_autofocus_pane_g2_ParamLimits

0x8fed,	// (0x00083e15) camera2_autofocus_pane_g2

0x8ff9,	// (0x00083e21) camera2_autofocus_pane_g3_ParamLimits

0x8ff9,	// (0x00083e21) camera2_autofocus_pane_g3

0x9005,	// (0x00083e2d) camera2_autofocus_pane_g4_ParamLimits

0x9005,	// (0x00083e2d) camera2_autofocus_pane_g4

0x9011,	// (0x00083e39) camera2_autofocus_pane_g5_ParamLimits

0x9011,	// (0x00083e39) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0008a568) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0008a568) camera2_autofocus_pane_g

0x9321,	// (0x00084149) camera2_autofocus_pane_cp_g2

0x9329,	// (0x00084151) camera2_autofocus_pane_cp_g3

0x9331,	// (0x00084159) camera2_autofocus_pane_cp_g4

0x9339,	// (0x00084161) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0008a5ce) camera2_autofocus_pane_cp_g

0x9a21,	// (0x00084849) popup_dialer_spcha_window

0xde52,	// (0x00088c7a) bg_popup_sub_pane_cp07

0x9d7a,	// (0x00084ba2) list_spcha_pane

0x9d82,	// (0x00084baa) list_single_spcha_pane_ParamLimits

0x9d82,	// (0x00084baa) list_single_spcha_pane

0xde52,	// (0x00088c7a) list_highlight_pane_cp06

0x9d93,	// (0x00084bbb) list_single_spcha_pane_t1

0x1d27,	// (0x0007cb4f) popup_call2_audio_out_window_g4_ParamLimits

0x1d27,	// (0x0007cb4f) popup_call2_audio_out_window_g4

0xde52,	// (0x00088c7a) main_imed2_pane

0x2306,	// (0x0007d12e) popup_imed_adjust2_window

0x8333,	// (0x0008315b) popup_imed_trans_window_ParamLimits

0x8333,	// (0x0008315b) popup_imed_trans_window

0x8be1,	// (0x00083a09) popup_blid_sat_info2_window_t1

0x8bef,	// (0x00083a17) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0008a4fd) popup_blid_sat_info2_window_t

0x9da1,	// (0x00084bc9) aid_size_cell_colour_35

0x9dbb,	// (0x00084be3) aid_size_cell_colour_112

0x9dd2,	// (0x00084bfa) aid_size_cell_effect

0x0561,	// (0x0007b389) bg_tb_trans_pane_cp02

0x9dec,	// (0x00084c14) heading_imed_pane

0x9df8,	// (0x00084c20) listscroll_imed_pane

0x9e04,	// (0x00084c2c) heading_imed_pane_g1

0x9e0c,	// (0x00084c34) heading_imed_pane_t1

0x9e1a,	// (0x00084c42) grid_imed_colour_35_pane_ParamLimits

0x9e1a,	// (0x00084c42) grid_imed_colour_35_pane

0x9e35,	// (0x00084c5d) grid_imed_effect_pane

0x9e45,	// (0x00084c6d) list_imed_aspect_pane

0x9e4d,	// (0x00084c75) scroll_pane_cp027_ParamLimits

0x9e4d,	// (0x00084c75) scroll_pane_cp027

0x9e59,	// (0x00084c81) cell_imed_effect_pane_ParamLimits

0x9e59,	// (0x00084c81) cell_imed_effect_pane

0x9e71,	// (0x00084c99) cell_imed_colour_pane_ParamLimits

0x9e71,	// (0x00084c99) cell_imed_colour_pane

0x9eb3,	// (0x00084cdb) cell_imed_colour_pane_g1_ParamLimits

0x9eb3,	// (0x00084cdb) cell_imed_colour_pane_g1

0x9ec4,	// (0x00084cec) hgihlgiht_grid_pane_cp016_ParamLimits

0x9ec4,	// (0x00084cec) hgihlgiht_grid_pane_cp016

0x9ed5,	// (0x00084cfd) cell_imed_effect_pane_g1

0x9edd,	// (0x00084d05) grid_highlight_pane_cp017

0x9ee6,	// (0x00084d0e) list_imed_single_pane_ParamLimits

0x9ee6,	// (0x00084d0e) list_imed_single_pane

0xde52,	// (0x00088c7a) list_highlight_pane_cp07

0x9efd,	// (0x00084d25) list_imed_aspect_pane_comp1_t1

0x22de,	// (0x0007d106) bg_tb_trans_pane_cp05

0x9f1f,	// (0x00084d47) popup_imed_adjust2_window_g1

0x9f46,	// (0x00084d6e) popup_imed_adjust2_window_t1

0x9f5e,	// (0x00084d86) slider_imed_adjust_pane

0x9f72,	// (0x00084d9a) slider_imed_adjust_pane_g1

0x9f82,	// (0x00084daa) slider_imed_adjust_pane_g2

0x9f92,	// (0x00084dba) slider_imed_adjust_pane_g3

0x9fa3,	// (0x00084dcb) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0008a63c) slider_imed_adjust_pane_g

0x9fb4,	// (0x00084ddc) aid_size_cell_clipart2

0x9fc0,	// (0x00084de8) grid_imed_clipart_pane

0x9fca,	// (0x00084df2) scroll_pane_cp031

0x9fd2,	// (0x00084dfa) cell_imed_clipart_pane_ParamLimits

0x9fd2,	// (0x00084dfa) cell_imed_clipart_pane

0x9ff9,	// (0x00084e21) cell_imed_clipart_pane_g1

0xde52,	// (0x00088c7a) grid_highlight_pane_cp014

0x9b7a,	// (0x000849a2) main_clock2_pane_g1_ParamLimits

0x9b7a,	// (0x000849a2) main_clock2_pane_g1

0x9c69,	// (0x00084a91) aid_call2_pane_cp10

0x9c7b,	// (0x00084aa3) aid_call_pane_cp10

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g1

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g2

0x9c8d,	// (0x00084ab5) popup_clock_analogue_window_cp10_g3

0x9c8d,	// (0x00084ab5) popup_clock_analogue_window_cp10_g4

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0008a62a) popup_clock_analogue_window_cp10_g

0x9ca3,	// (0x00084acb) popup_clock_analogue_window_cp10_t1

0x9ce2,	// (0x00084b0a) clock_digital_number_pane_cp10_ParamLimits

0x9ce2,	// (0x00084b0a) clock_digital_number_pane_cp10

0x9cfa,	// (0x00084b22) clock_digital_number_pane_cp11_ParamLimits

0x9cfa,	// (0x00084b22) clock_digital_number_pane_cp11

0x9d12,	// (0x00084b3a) clock_digital_number_pane_cp12_ParamLimits

0x9d12,	// (0x00084b3a) clock_digital_number_pane_cp12

0x9d2a,	// (0x00084b52) clock_digital_number_pane_cp13_ParamLimits

0x9d2a,	// (0x00084b52) clock_digital_number_pane_cp13

0x9d42,	// (0x00084b6a) clock_digital_separator_pane_cp10_ParamLimits

0x9d42,	// (0x00084b6a) clock_digital_separator_pane_cp10

0x9d5a,	// (0x00084b82) popup_clock_digital_window_cp02_t1_ParamLimits

0x9d5a,	// (0x00084b82) popup_clock_digital_window_cp02_t1

0xe516,	// (0x0008933e) clock_digital_number_pane_cp10_g1

0xe516,	// (0x0008933e) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0008a645) clock_digital_number_pane_cp10_g

0xe516,	// (0x0008933e) clock_digital_separator_pane_cp10_g1

0xe516,	// (0x0008933e) clock_digital_separator_pane_g2_cp10

0x0e4d,	// (0x0007bc75) navi_pane_vded_g4

0x0e56,	// (0x0007bc7e) navi_pane_vded_g5

0x0e5f,	// (0x0007bc87) navi_pane_vded_t1

0xde52,	// (0x00088c7a) main_vded_pane

0xa002,	// (0x00084e2a) main_vded_pane_g1

0xa00e,	// (0x00084e36) main_vded_pane_g2

0xa018,	// (0x00084e40) main_vded_pane_g3

0x0002,

0xf822,	// (0x0008a64a) main_vded_pane_g

0xa022,	// (0x00084e4a) main_vded_pane_t1

0xa030,	// (0x00084e58) main_vded_pane_t2

0x0001,

0xf829,	// (0x0008a651) main_vded_pane_t

0xa03e,	// (0x00084e66) vded_slider_pane

0xa048,	// (0x00084e70) vded_video_pane

0xa052,	// (0x00084e7a) vded_video_pane_g1

0xa05c,	// (0x00084e84) vded_video_pane_g2

0x8e66,	// (0x00083c8e) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0008a656) vded_video_pane_g

0xa065,	// (0x00084e8d) vded_slider_pane_g1

0x24f3,	// (0x0007d31b) vded_slider_pane_g2

0xa06e,	// (0x00084e96) vded_slider_pane_g3

0xa077,	// (0x00084e9f) vded_slider_pane_g4

0xa080,	// (0x00084ea8) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0008a65d) vded_slider_pane_g

0x984d,	// (0x00084675) mup3_rocker_pane_ParamLimits

0x984d,	// (0x00084675) mup3_rocker_pane

0xa089,	// (0x00084eb1) mup3_control_keys_pane_g1

0xa091,	// (0x00084eb9) mup3_control_keys_pane_g2

0xa099,	// (0x00084ec1) mup3_control_keys_pane_g3

0xa0a1,	// (0x00084ec9) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0008a668) mup3_control_keys_pane_g

0x555e,	// (0x00080386) popup_toolbar2_fixed_window_cp01_ParamLimits

0x555e,	// (0x00080386) popup_toolbar2_fixed_window_cp01

0x986f,	// (0x00084697) popup_toolbar2_fixed_window_cp02_ParamLimits

0x986f,	// (0x00084697) popup_toolbar2_fixed_window_cp02

0x1666,	// (0x0007c48e) popup_call2_audio_second_window_t4_ParamLimits

0x1666,	// (0x0007c48e) popup_call2_audio_second_window_t4

0x1b94,	// (0x0007c9bc) popup_call2_audio_first_window_t6_ParamLimits

0x1b94,	// (0x0007c9bc) popup_call2_audio_first_window_t6

0x1e2a,	// (0x0007cc52) popup_call2_audio_out_window_t6_ParamLimits

0x1e2a,	// (0x0007cc52) popup_call2_audio_out_window_t6

0xde52,	// (0x00088c7a) main_vitu_pane

0xa0b1,	// (0x00084ed9) aid_size_cell_itu_ParamLimits

0xa0b1,	// (0x00084ed9) aid_size_cell_itu

0x25a3,	// (0x0007d3cb) bg_popup_window_pane_cp08_ParamLimits

0x25a3,	// (0x0007d3cb) bg_popup_window_pane_cp08

0xa0bf,	// (0x00084ee7) field_vitu_entry_pane_ParamLimits

0xa0bf,	// (0x00084ee7) field_vitu_entry_pane

0xa0ce,	// (0x00084ef6) grid_vitu_function_pane_ParamLimits

0xa0ce,	// (0x00084ef6) grid_vitu_function_pane

0xa0de,	// (0x00084f06) grid_vitu_itu_pane_ParamLimits

0xa0de,	// (0x00084f06) grid_vitu_itu_pane

0xa0ee,	// (0x00084f16) cell_vitu_itu_pane_ParamLimits

0xa0ee,	// (0x00084f16) cell_vitu_itu_pane

0xa103,	// (0x00084f2b) cell_vitu_function_pane_ParamLimits

0xa103,	// (0x00084f2b) cell_vitu_function_pane

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp08_ParamLimits

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp08

0xa12f,	// (0x00084f57) field_vitu_entry_pane_t1_ParamLimits

0xa12f,	// (0x00084f57) field_vitu_entry_pane_t1

0xa14c,	// (0x00084f74) field_vitu_entry_pane_t2_ParamLimits

0xa14c,	// (0x00084f74) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0008a676) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0008a676) field_vitu_entry_pane_t

0xa169,	// (0x00084f91) bg_button_pane_cp05_ParamLimits

0xa169,	// (0x00084f91) bg_button_pane_cp05

0xa177,	// (0x00084f9f) cell_vitu_itu_pane_g1

0xa18f,	// (0x00084fb7) cell_vitu_itu_pane_t1_ParamLimits

0xa18f,	// (0x00084fb7) cell_vitu_itu_pane_t1

0xa1a1,	// (0x00084fc9) cell_vitu_itu_pane_t2_ParamLimits

0xa1a1,	// (0x00084fc9) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0008a67b) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0008a67b) cell_vitu_itu_pane_t

0xa1d6,	// (0x00084ffe) bg_button_pane_cp07

0xa1e0,	// (0x00085008) cell_vitu_function_pane_g1

0x57e6,	// (0x0008060e) main_calc_pane_g1

0x5361,	// (0x00080189) aid_visual_content_pane

0xde52,	// (0x00088c7a) main_vradio_pane

0xa1e9,	// (0x00085011) main_vradio_pane_g1_ParamLimits

0xa1e9,	// (0x00085011) main_vradio_pane_g1

0xa1f9,	// (0x00085021) main_vradio_pane_g2_ParamLimits

0xa1f9,	// (0x00085021) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0008a682) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0008a682) main_vradio_pane_g

0xa206,	// (0x0008502e) main_vradio_pane_t1_ParamLimits

0xa206,	// (0x0008502e) main_vradio_pane_t1

0xa218,	// (0x00085040) main_vradio_pane_t2_ParamLimits

0xa218,	// (0x00085040) main_vradio_pane_t2

0xa22a,	// (0x00085052) main_vradio_pane_t3_ParamLimits

0xa22a,	// (0x00085052) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0008a687) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0008a687) main_vradio_pane_t

0xa23e,	// (0x00085066) vradio_rocker_control_pane_ParamLimits

0xa23e,	// (0x00085066) vradio_rocker_control_pane

0xa24a,	// (0x00085072) vradio_station_info_pane_ParamLimits

0xa24a,	// (0x00085072) vradio_station_info_pane

0xa259,	// (0x00085081) vradio_frequency_info_pane_ParamLimits

0xa259,	// (0x00085081) vradio_frequency_info_pane

0x8e66,	// (0x00083c8e) vradio_station_info_pane_g1

0xa268,	// (0x00085090) vradio_station_info_pane_t1_ParamLimits

0xa268,	// (0x00085090) vradio_station_info_pane_t1

0xa28a,	// (0x000850b2) vradio_station_info_pane_t2_ParamLimits

0xa28a,	// (0x000850b2) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0008a68e) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0008a68e) vradio_station_info_pane_t

0xa29c,	// (0x000850c4) vradio_tuning_pane

0xa2a4,	// (0x000850cc) vradio_rocker_control_pane_g1

0xa2ac,	// (0x000850d4) vradio_rocker_control_pane_g2

0xa2b4,	// (0x000850dc) vradio_rocker_control_pane_g3

0xa2bc,	// (0x000850e4) vradio_rocker_control_pane_g4

0xa2c4,	// (0x000850ec) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0008a693) vradio_rocker_control_pane_g

0xa2cc,	// (0x000850f4) vradio_frequency_info_pane_g1

0xa2d6,	// (0x000850fe) vradio_frequency_info_pane_t1_ParamLimits

0xa2d6,	// (0x000850fe) vradio_frequency_info_pane_t1

0xa2ea,	// (0x00085112) vradio_tuning_pane_g1

0xa2f3,	// (0x0008511b) vradio_tuning_pane_t1

0xde70,	// (0x00088c98) area_side_right_pane_ParamLimits

0xde70,	// (0x00088c98) area_side_right_pane

0x22a5,	// (0x0007d0cd) status_small_pane_g1

0x22ad,	// (0x0007d0d5) status_small_pane_g2

0x22b6,	// (0x0007d0de) status_small_pane_g3

0x22bf,	// (0x0007d0e7) status_small_pane_g4

0x0003,

0xf62b,	// (0x0008a453) status_small_pane_g

0x22c8,	// (0x0007d0f0) status_small_pane_t1

0xde52,	// (0x00088c7a) main_video3_pane

0xa302,	// (0x0008512a) cams_zoom_vslider_pane

0xa30a,	// (0x00085132) image3_wide_pane_ParamLimits

0xa30a,	// (0x00085132) image3_wide_pane

0xa324,	// (0x0008514c) image3_wide_small_pane

0xa330,	// (0x00085158) main_video3_pane_g1_ParamLimits

0xa330,	// (0x00085158) main_video3_pane_g1

0xa34c,	// (0x00085174) main_video3_pane_g2_ParamLimits

0xa34c,	// (0x00085174) main_video3_pane_g2

0x0001,

0xf876,	// (0x0008a69e) main_video3_pane_g_ParamLimits

0xf876,	// (0x0008a69e) main_video3_pane_g

0xa368,	// (0x00085190) main_video3_pane_t1_ParamLimits

0xa368,	// (0x00085190) main_video3_pane_t1

0xa393,	// (0x000851bb) main_video3_pane_t2_ParamLimits

0xa393,	// (0x000851bb) main_video3_pane_t2

0xa3be,	// (0x000851e6) main_video3_pane_t3_ParamLimits

0xa3be,	// (0x000851e6) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0008a6a3) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0008a6a3) main_video3_pane_t

0xa3eb,	// (0x00085213) cams_zoom_vslider_pane_g1

0xa3f4,	// (0x0008521c) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0008a6aa) cams_zoom_vslider_pane_g

0xa3fc,	// (0x00085224) small_slider_vertical_pane

0x8e66,	// (0x00083c8e) small_slider_vertical_pane_g1

0x8e66,	// (0x00083c8e) small_slider_vertical_pane_g2

0xa404,	// (0x0008522c) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0008a6af) small_slider_vertical_pane_g

0xde52,	// (0x00088c7a) main_hwr_training_pane

0xa40d,	// (0x00085235) hwr_training_instruct_pane_ParamLimits

0xa40d,	// (0x00085235) hwr_training_instruct_pane

0xa42f,	// (0x00085257) hwr_training_navi_pane_ParamLimits

0xa42f,	// (0x00085257) hwr_training_navi_pane

0xa449,	// (0x00085271) hwr_training_write_pane_ParamLimits

0xa449,	// (0x00085271) hwr_training_write_pane

0xde52,	// (0x00088c7a) bg_frame_shadow_pane

0xa496,	// (0x000852be) hwr_training_write_pane_g1

0xa49e,	// (0x000852c6) hwr_training_write_pane_g2

0xa4a6,	// (0x000852ce) hwr_training_write_pane_g3

0xa4ae,	// (0x000852d6) hwr_training_write_pane_g4

0xa4b6,	// (0x000852de) hwr_training_write_pane_g5

0xa4be,	// (0x000852e6) hwr_training_write_pane_g6

0xa4c6,	// (0x000852ee) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0008a6b6) hwr_training_write_pane_g

0xa4ce,	// (0x000852f6) hwr_training_navi_pane_g1_ParamLimits

0xa4ce,	// (0x000852f6) hwr_training_navi_pane_g1

0xa4e0,	// (0x00085308) hwr_training_navi_pane_g2_ParamLimits

0xa4e0,	// (0x00085308) hwr_training_navi_pane_g2

0xa4f2,	// (0x0008531a) hwr_training_navi_pane_g3_ParamLimits

0xa4f2,	// (0x0008531a) hwr_training_navi_pane_g3

0xa502,	// (0x0008532a) hwr_training_navi_pane_g4_ParamLimits

0xa502,	// (0x0008532a) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0008a6c5) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0008a6c5) hwr_training_navi_pane_g

0xa51c,	// (0x00085344) hwr_training_navi_pane_t1

0xa52a,	// (0x00085352) list_single_hwr_training_instruct_pane_ParamLimits

0xa52a,	// (0x00085352) list_single_hwr_training_instruct_pane

0xeaaf,	// (0x000898d7) list_single_hwr_training_instruct_pane_t1

0x8da6,	// (0x00083bce) bg_frame_shadow_pane_g1

0xeabe,	// (0x000898e6) bg_frame_shadow_pane_g2

0xeac6,	// (0x000898ee) bg_frame_shadow_pane_g3

0xeace,	// (0x000898f6) bg_frame_shadow_pane_g4

0xead6,	// (0x000898fe) bg_frame_shadow_pane_g5

0xeade,	// (0x00089906) bg_frame_shadow_pane_g6

0xeae6,	// (0x0008990e) bg_frame_shadow_pane_g7

0xe6f8,	// (0x00089520) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0008a6d0) bg_frame_shadow_pane_g

0xde52,	// (0x00088c7a) main_video_tele_dialer_pane

0xa560,	// (0x00085388) aid_size_cell_video_keypad_ParamLimits

0xa560,	// (0x00085388) aid_size_cell_video_keypad

0xa570,	// (0x00085398) grid_video_dialer_keypad_pane_ParamLimits

0xa570,	// (0x00085398) grid_video_dialer_keypad_pane

0xa5a4,	// (0x000853cc) video_down_pane_cp_ParamLimits

0xa5a4,	// (0x000853cc) video_down_pane_cp

0xa5ce,	// (0x000853f6) cell_video_dialer_keypad_pane_ParamLimits

0xa5ce,	// (0x000853f6) cell_video_dialer_keypad_pane

0xeaee,	// (0x00089916) bg_button_pane_cp08_ParamLimits

0xeaee,	// (0x00089916) bg_button_pane_cp08

0xa5e3,	// (0x0008540b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa5e3,	// (0x0008540b) cell_video_dialer_keypad_pane_g1

0x9841,	// (0x00084669) mup3_rocker2_pane_ParamLimits

0x9841,	// (0x00084669) mup3_rocker2_pane

0x8e66,	// (0x00083c8e) mup3_rocker2_pane_g1

0x82c1,	// (0x000830e9) main_dialer2_pane

0xde52,	// (0x00088c7a) main_mp4_pane

0xa622,	// (0x0008544a) main_mp4_pane_g1_ParamLimits

0xa622,	// (0x0008544a) main_mp4_pane_g1

0xa630,	// (0x00085458) main_mp4_pane_g2_ParamLimits

0xa630,	// (0x00085458) main_mp4_pane_g2

0xa63e,	// (0x00085466) main_mp4_pane_g3_ParamLimits

0xa63e,	// (0x00085466) main_mp4_pane_g3

0xa683,	// (0x000854ab) main_mp4_pane_g4_ParamLimits

0xa683,	// (0x000854ab) main_mp4_pane_g4

0xa6ab,	// (0x000854d3) main_mp4_pane_g5_ParamLimits

0xa6ab,	// (0x000854d3) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0008a6f0) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0008a6f0) main_mp4_pane_g

0xa6fb,	// (0x00085523) main_mp4_pane_t1_ParamLimits

0xa6fb,	// (0x00085523) main_mp4_pane_t1

0xa757,	// (0x0008557f) main_mp4_pane_t2_ParamLimits

0xa757,	// (0x0008557f) main_mp4_pane_t2

0xeafa,	// (0x00089922) main_mp4_pane_t3_ParamLimits

0xeafa,	// (0x00089922) main_mp4_pane_t3

0xa7a9,	// (0x000855d1) main_mp4_pane_t4_ParamLimits

0xa7a9,	// (0x000855d1) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0008a6fd) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0008a6fd) main_mp4_pane_t

0xa7ed,	// (0x00085615) mp4_progress_pane_ParamLimits

0xa7ed,	// (0x00085615) mp4_progress_pane

0xa837,	// (0x0008565f) mp4_rocker_pane_ParamLimits

0xa837,	// (0x0008565f) mp4_rocker_pane

0xeb22,	// (0x0008994a) mp4_progress_pane_t1

0xeb3b,	// (0x00089963) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0008a706) mp4_progress_pane_t

0xeb54,	// (0x0008997c) mup_progress_pane_cp04

0xeb60,	// (0x00089988) mp4_rocker_pane_g1

0xa857,	// (0x0008567f) aid_cell_size_keypad2_ParamLimits

0xa857,	// (0x0008567f) aid_cell_size_keypad2

0xa867,	// (0x0008568f) dialer2_ne_pane_ParamLimits

0xa867,	// (0x0008568f) dialer2_ne_pane

0xa875,	// (0x0008569d) grid_dialer2_keypad_pane_ParamLimits

0xa875,	// (0x0008569d) grid_dialer2_keypad_pane

0x28da,	// (0x0007d702) bg_popup_call_pane_cp07_ParamLimits

0x28da,	// (0x0007d702) bg_popup_call_pane_cp07

0xa885,	// (0x000856ad) dialer2_ne_pane_t1_ParamLimits

0xa885,	// (0x000856ad) dialer2_ne_pane_t1

0xa8aa,	// (0x000856d2) cell_dialer2_keypad_pane_ParamLimits

0xa8aa,	// (0x000856d2) cell_dialer2_keypad_pane

0xeb7c,	// (0x000899a4) bg_button_pane_pane_cp04_ParamLimits

0xeb7c,	// (0x000899a4) bg_button_pane_pane_cp04

0xa8c1,	// (0x000856e9) cell_dialer2_keypad_pane_g1_ParamLimits

0xa8c1,	// (0x000856e9) cell_dialer2_keypad_pane_g1

0x6201,	// (0x00081029) aid_placing_vt_set_content_ParamLimits

0x6201,	// (0x00081029) aid_placing_vt_set_content

0x621d,	// (0x00081045) aid_placing_vt_set_title_ParamLimits

0x621d,	// (0x00081045) aid_placing_vt_set_title

0xde52,	// (0x00088c7a) main_image3_pane

0xa95b,	// (0x00085783) area_side_right_pane_cp01_ParamLimits

0xa95b,	// (0x00085783) area_side_right_pane_cp01

0xa988,	// (0x000857b0) main_image3_pane_g1_ParamLimits

0xa988,	// (0x000857b0) main_image3_pane_g1

0xa996,	// (0x000857be) main_image3_pane_g2_ParamLimits

0xa996,	// (0x000857be) main_image3_pane_g2

0xa9af,	// (0x000857d7) main_image3_pane_g3_ParamLimits

0xa9af,	// (0x000857d7) main_image3_pane_g3

0xa9c8,	// (0x000857f0) main_image3_pane_g4_ParamLimits

0xa9c8,	// (0x000857f0) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0008a715) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0008a715) main_image3_pane_g

0xa9e1,	// (0x00085809) main_image3_pane_t1_ParamLimits

0xa9e1,	// (0x00085809) main_image3_pane_t1

0xaa06,	// (0x0008582e) main_image3_pane_t2_ParamLimits

0xaa06,	// (0x0008582e) main_image3_pane_t2

0xaa25,	// (0x0008584d) main_image3_pane_t3_ParamLimits

0xaa25,	// (0x0008584d) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0008a71e) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0008a71e) main_image3_pane_t

0x25a3,	// (0x0007d3cb) grid_sctrl_middle_pane_cp01_ParamLimits

0x25a3,	// (0x0007d3cb) grid_sctrl_middle_pane_cp01

0xaa86,	// (0x000858ae) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa86,	// (0x000858ae) cell_sctrl_middle_pane_cp01

0xaa97,	// (0x000858bf) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa97,	// (0x000858bf) cell_sctrl_middle_pane_cp01_g1

0xde52,	// (0x00088c7a) main_call4_pane

0xaaa4,	// (0x000858cc) aid_size_button_call4_ParamLimits

0xaaa4,	// (0x000858cc) aid_size_button_call4

0xaad4,	// (0x000858fc) call4_windows_pane_ParamLimits

0xaad4,	// (0x000858fc) call4_windows_pane

0xaaee,	// (0x00085916) grid_call4_button_pane_ParamLimits

0xaaee,	// (0x00085916) grid_call4_button_pane

0xeb88,	// (0x000899b0) call4_windows_conf_pane

0xeb9d,	// (0x000899c5) popup_call4_audio_first_window_ParamLimits

0xeb9d,	// (0x000899c5) popup_call4_audio_first_window

0xebe9,	// (0x00089a11) popup_call4_audio_second_window_ParamLimits

0xebe9,	// (0x00089a11) popup_call4_audio_second_window

0xebfd,	// (0x00089a25) popup_call4_audio_wait_window_ParamLimits

0xebfd,	// (0x00089a25) popup_call4_audio_wait_window

0xab12,	// (0x0008593a) cell_call4_button_pane_ParamLimits

0xab12,	// (0x0008593a) cell_call4_button_pane

0xab37,	// (0x0008595f) bg_button_pane_cp09_ParamLimits

0xab37,	// (0x0008595f) bg_button_pane_cp09

0xab43,	// (0x0008596b) cell_call4_button_pane_g1_ParamLimits

0xab43,	// (0x0008596b) cell_call4_button_pane_g1

0xab50,	// (0x00085978) cell_call4_button_pane_t1_ParamLimits

0xab50,	// (0x00085978) cell_call4_button_pane_t1

0xec45,	// (0x00089a6d) popup_call4_audio_conf_window_ParamLimits

0xec45,	// (0x00089a6d) popup_call4_audio_conf_window

0x987c,	// (0x000846a4) mup3_progress_pane_t1_ParamLimits

0x9893,	// (0x000846bb) mup3_progress_pane_t2_ParamLimits

0x98aa,	// (0x000846d2) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0008a5f7) mup3_progress_pane_t_ParamLimits

0x98c1,	// (0x000846e9) mup_progress_pane_cp03_ParamLimits

0xa0a9,	// (0x00084ed1) mup3_control_keys_pane_g4_copy1

0xa81b,	// (0x00085643) mp4_rocker2_pane_ParamLimits

0xa81b,	// (0x00085643) mp4_rocker2_pane

0xec59,	// (0x00089a81) mp4_rocker2_pane_g1

0xec61,	// (0x00089a89) mp4_rocker2_pane_g2

0xab62,	// (0x0008598a) mp4_rocker2_pane_g3

0xab6a,	// (0x00085992) mp4_rocker2_pane_g4

0xab72,	// (0x0008599a) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0008a727) mp4_rocker2_pane_g

0xde52,	// (0x00088c7a) main_camera4_pane

0xde52,	// (0x00088c7a) main_video4_pane

0xa580,	// (0x000853a8) main_video_tele_dialer_pane_t1_ParamLimits

0xa580,	// (0x000853a8) main_video_tele_dialer_pane_t1

0xa592,	// (0x000853ba) main_video_tele_dialer_pane_t2_ParamLimits

0xa592,	// (0x000853ba) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0008a6e1) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0008a6e1) main_video_tele_dialer_pane_t

0xab92,	// (0x000859ba) cam4_autofocus_pane_ParamLimits

0xab92,	// (0x000859ba) cam4_autofocus_pane

0xaba0,	// (0x000859c8) cam4_image_uncrop_pane_ParamLimits

0xaba0,	// (0x000859c8) cam4_image_uncrop_pane

0xabb7,	// (0x000859df) cam4_indicators_pane_ParamLimits

0xabb7,	// (0x000859df) cam4_indicators_pane

0xabd3,	// (0x000859fb) main_camera4_pane_g1_ParamLimits

0xabd3,	// (0x000859fb) main_camera4_pane_g1

0xabdf,	// (0x00085a07) main_camera4_pane_g2_ParamLimits

0xabdf,	// (0x00085a07) main_camera4_pane_g2

0xabdf,	// (0x00085a07) main_camera4_pane_g3_ParamLimits

0xabdf,	// (0x00085a07) main_camera4_pane_g3

0xabeb,	// (0x00085a13) main_camera4_pane_g4_ParamLimits

0xabeb,	// (0x00085a13) main_camera4_pane_g4

0xabf7,	// (0x00085a1f) main_camera4_pane_g5_ParamLimits

0xabf7,	// (0x00085a1f) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0008a732) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0008a732) main_camera4_pane_g

0xac11,	// (0x00085a39) main_camera4_pane_t1_ParamLimits

0xac11,	// (0x00085a39) main_camera4_pane_t1

0xac50,	// (0x00085a78) bg_tb_trans_pane_cp06

0xac66,	// (0x00085a8e) cam4_indicators_pane_g1

0xac77,	// (0x00085a9f) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0008a74d) cam4_indicators_pane_g

0xac95,	// (0x00085abd) cam4_indicators_pane_t1

0xacbf,	// (0x00085ae7) main_video4_pane_g1_ParamLimits

0xacbf,	// (0x00085ae7) main_video4_pane_g1

0xaccb,	// (0x00085af3) main_video4_pane_g2_ParamLimits

0xaccb,	// (0x00085af3) main_video4_pane_g2

0xacd7,	// (0x00085aff) main_video4_pane_g3_ParamLimits

0xacd7,	// (0x00085aff) main_video4_pane_g3

0xace3,	// (0x00085b0b) main_video4_pane_g4_ParamLimits

0xace3,	// (0x00085b0b) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0008a754) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0008a754) main_video4_pane_g

0xad03,	// (0x00085b2b) vid4_indicators_pane_ParamLimits

0xad03,	// (0x00085b2b) vid4_indicators_pane

0xad21,	// (0x00085b49) video4_image_uncrop_cif_pane_ParamLimits

0xad21,	// (0x00085b49) video4_image_uncrop_cif_pane

0xad30,	// (0x00085b58) video4_image_uncrop_nhd_pane_ParamLimits

0xad30,	// (0x00085b58) video4_image_uncrop_nhd_pane

0xaba0,	// (0x000859c8) video4_image_uncrop_vga_pane_ParamLimits

0xaba0,	// (0x000859c8) video4_image_uncrop_vga_pane

0xad3d,	// (0x00085b65) bg_tb_trans_pane_cp07

0xac66,	// (0x00085a8e) vid4_indicators_pane_g1

0xad53,	// (0x00085b7b) vid4_indicators_pane_g2

0xad64,	// (0x00085b8c) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0008a75f) vid4_indicators_pane_g

0xad91,	// (0x00085bb9) vid4_indicators_pane_t1

0xadaa,	// (0x00085bd2) cam4_autofocus_pane_g1

0xadb2,	// (0x00085bda) cam4_autofocus_pane_g2

0xadba,	// (0x00085be2) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0008a76a) cam4_autofocus_pane_g

0xadc2,	// (0x00085bea) cam4_autofocus_pane_g3_copy1

0xa5b2,	// (0x000853da) video_down_pane_cp_t1

0xa5c0,	// (0x000853e8) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0008a6e6) video_down_pane_cp_t

0x25a3,	// (0x0007d3cb) popup_vitu2_window_ParamLimits

0x25a3,	// (0x0007d3cb) popup_vitu2_window

0xadca,	// (0x00085bf2) aid_size_cell2_itu2_ParamLimits

0xadca,	// (0x00085bf2) aid_size_cell2_itu2

0xadec,	// (0x00085c14) aid_size_cell_itu2_ParamLimits

0xadec,	// (0x00085c14) aid_size_cell_itu2

0xae30,	// (0x00085c58) bg_popup_window_pane_cp09_ParamLimits

0xae30,	// (0x00085c58) bg_popup_window_pane_cp09

0xae3e,	// (0x00085c66) field_vitu2_entry_pane_ParamLimits

0xae3e,	// (0x00085c66) field_vitu2_entry_pane

0xae5e,	// (0x00085c86) grid_vitu2_function_pane_ParamLimits

0xae5e,	// (0x00085c86) grid_vitu2_function_pane

0xaea2,	// (0x00085cca) grid_vitu2_itu_pane_ParamLimits

0xaea2,	// (0x00085cca) grid_vitu2_itu_pane

0xaf18,	// (0x00085d40) cell_vitu2_itu_pane_ParamLimits

0xaf18,	// (0x00085d40) cell_vitu2_itu_pane

0xaf2d,	// (0x00085d55) cell_vitu2_function_pane_ParamLimits

0xaf2d,	// (0x00085d55) cell_vitu2_function_pane

0xec69,	// (0x00089a91) bg_popup_call_pane_cp08_ParamLimits

0xec69,	// (0x00089a91) bg_popup_call_pane_cp08

0xec82,	// (0x00089aaa) field_vitu2_entry_pane_g1

0xec8e,	// (0x00089ab6) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0008a771) field_vitu2_entry_pane_g

0xaf6e,	// (0x00085d96) field_vitu2_entry_pane_t1_ParamLimits

0xaf6e,	// (0x00085d96) field_vitu2_entry_pane_t1

0x25b1,	// (0x0007d3d9) field_vitu2_entry_pane_t2_ParamLimits

0x25b1,	// (0x0007d3d9) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0008a778) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0008a778) field_vitu2_entry_pane_t

0xaf9e,	// (0x00085dc6) bg_button_pane_cp010_ParamLimits

0xaf9e,	// (0x00085dc6) bg_button_pane_cp010

0xafac,	// (0x00085dd4) cell_vitu2_itu_pane_g1

0xafca,	// (0x00085df2) cell_vitu2_itu_pane_t1_ParamLimits

0xafca,	// (0x00085df2) cell_vitu2_itu_pane_t1

0x5266,	// (0x0008008e) cell_vitu2_itu_pane_t2_ParamLimits

0x5266,	// (0x0008008e) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0008a782) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0008a782) cell_vitu2_itu_pane_t

0xad3d,	// (0x00085b65) bg_button_pane_cp011

0xb01c,	// (0x00085e44) cell_vitu2_function_pane_g1

0xde52,	// (0x00088c7a) main_myfav_hc_pane

0xaa67,	// (0x0008588f) popup_image3_note_pane_ParamLimits

0xaa67,	// (0x0008588f) popup_image3_note_pane

0xaa75,	// (0x0008589d) popup_image3_tool_bar_pane_ParamLimits

0xaa75,	// (0x0008589d) popup_image3_tool_bar_pane

0x52d4,	// (0x000800fc) cell_vitu2_itu_pane_t3_ParamLimits

0x52d4,	// (0x000800fc) cell_vitu2_itu_pane_t3

0xde52,	// (0x00088c7a) bg_popup_trans_pane

0xecb0,	// (0x00089ad8) grid_image3_tool_bar_pane

0xecba,	// (0x00089ae2) bg_popup_trans_pane_g1

0xea45,	// (0x0008986d) bg_popup_trans_pane_g2

0xecc2,	// (0x00089aea) bg_popup_trans_pane_g3

0xecca,	// (0x00089af2) bg_popup_trans_pane_g4

0xecd2,	// (0x00089afa) bg_popup_trans_pane_g5

0xecda,	// (0x00089b02) bg_popup_trans_pane_g6

0xece2,	// (0x00089b0a) bg_popup_trans_pane_g7

0xecea,	// (0x00089b12) bg_popup_trans_pane_g8

0xea25,	// (0x0008984d) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0008a789) bg_popup_trans_pane_g

0xecf2,	// (0x00089b1a) cell_image3_tool_bar_pane_ParamLimits

0xecf2,	// (0x00089b1a) cell_image3_tool_bar_pane

0x8e66,	// (0x00083c8e) cell_image3_tool_bar_pane_g1

0xde52,	// (0x00088c7a) bg_popup_trans_pane_cp1

0xed06,	// (0x00089b2e) popup_image3_note_pane_t1

0xed14,	// (0x00089b3c) popup_image3_note_pane_t2

0xed22,	// (0x00089b4a) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0008a79c) popup_image3_note_pane_t

0xed30,	// (0x00089b58) popup_image3_note_pane_t3_copy1

0xb030,	// (0x00085e58) bg_myfav_hc_instruction_pane_ParamLimits

0xb030,	// (0x00085e58) bg_myfav_hc_instruction_pane

0xb048,	// (0x00085e70) cell_myfav_contact_pane_ParamLimits

0xb048,	// (0x00085e70) cell_myfav_contact_pane

0xb062,	// (0x00085e8a) cell_myfav_contact_pane_cp1_ParamLimits

0xb062,	// (0x00085e8a) cell_myfav_contact_pane_cp1

0xb07a,	// (0x00085ea2) cell_myfav_contact_pane_cp2_ParamLimits

0xb07a,	// (0x00085ea2) cell_myfav_contact_pane_cp2

0xb092,	// (0x00085eba) cell_myfav_contact_pane_cp3_ParamLimits

0xb092,	// (0x00085eba) cell_myfav_contact_pane_cp3

0xb0a9,	// (0x00085ed1) cell_myfav_contact_pane_cp4_ParamLimits

0xb0a9,	// (0x00085ed1) cell_myfav_contact_pane_cp4

0xb0bf,	// (0x00085ee7) cell_myfav_contact_pane_cp5_ParamLimits

0xb0bf,	// (0x00085ee7) cell_myfav_contact_pane_cp5

0xb0d3,	// (0x00085efb) cell_myfav_contact_pane_cp6_ParamLimits

0xb0d3,	// (0x00085efb) cell_myfav_contact_pane_cp6

0xb0e7,	// (0x00085f0f) cell_myfav_contact_pane_cp7_ParamLimits

0xb0e7,	// (0x00085f0f) cell_myfav_contact_pane_cp7

0xed3e,	// (0x00089b66) listscroll_gen_pane_cp05

0xb0ff,	// (0x00085f27) main_myfav_hc_pane_g1_ParamLimits

0xb0ff,	// (0x00085f27) main_myfav_hc_pane_g1

0xb117,	// (0x00085f3f) main_myfav_hc_pane_g2_ParamLimits

0xb117,	// (0x00085f3f) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0008a7a3) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0008a7a3) main_myfav_hc_pane_g

0xb147,	// (0x00085f6f) main_myfav_hc_pane_t1_ParamLimits

0xb147,	// (0x00085f6f) main_myfav_hc_pane_t1

0xed47,	// (0x00089b6f) main_myfav_hc_pane_t2_ParamLimits

0xed47,	// (0x00089b6f) main_myfav_hc_pane_t2

0xed59,	// (0x00089b81) main_myfav_hc_pane_t3_ParamLimits

0xed59,	// (0x00089b81) main_myfav_hc_pane_t3

0xb15e,	// (0x00085f86) main_myfav_hc_pane_t4_ParamLimits

0xb15e,	// (0x00085f86) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0008a7aa) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0008a7aa) main_myfav_hc_pane_t

0x8e66,	// (0x00083c8e) bg_myfav_hc_instruction_pane_g1

0xed6b,	// (0x00089b93) cell_myfav_contact_pane_g1_ParamLimits

0xed6b,	// (0x00089b93) cell_myfav_contact_pane_g1

0xed6b,	// (0x00089b93) cell_myfav_contact_pane_g2_ParamLimits

0xed6b,	// (0x00089b93) cell_myfav_contact_pane_g2

0xed77,	// (0x00089b9f) cell_myfav_contact_pane_g3_ParamLimits

0xed77,	// (0x00089b9f) cell_myfav_contact_pane_g3

0x94aa,	// (0x000842d2) cell_myfav_contact_pane_g4_ParamLimits

0x94aa,	// (0x000842d2) cell_myfav_contact_pane_g4

0xed84,	// (0x00089bac) cell_myfav_contact_pane_g5_ParamLimits

0xed84,	// (0x00089bac) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0008a7b5) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0008a7b5) cell_myfav_contact_pane_g

0xb12f,	// (0x00085f57) main_myfav_hc_pane_g3_ParamLimits

0xb12f,	// (0x00085f57) main_myfav_hc_pane_g3

0x54a2,	// (0x000802ca) popup_adpt_find_window

0xb188,	// (0x00085fb0) afind_page_pane_ParamLimits

0xb188,	// (0x00085fb0) afind_page_pane

0xb195,	// (0x00085fbd) aid_size_cell_afind_ParamLimits

0xb195,	// (0x00085fbd) aid_size_cell_afind

0xb1af,	// (0x00085fd7) bg_popup_sub_pane_cp09_ParamLimits

0xb1af,	// (0x00085fd7) bg_popup_sub_pane_cp09

0xb1bc,	// (0x00085fe4) find_pane_cp01_ParamLimits

0xb1bc,	// (0x00085fe4) find_pane_cp01

0xed90,	// (0x00089bb8) grid_afind_control_pane_ParamLimits

0xed90,	// (0x00089bb8) grid_afind_control_pane

0xb1c9,	// (0x00085ff1) grid_afind_pane_ParamLimits

0xb1c9,	// (0x00085ff1) grid_afind_pane

0xb1e5,	// (0x0008600d) cell_afind_pane_ParamLimits

0xb1e5,	// (0x0008600d) cell_afind_pane

0x8e66,	// (0x00083c8e) afind_page_pane_g1

0xb22d,	// (0x00086055) afind_page_pane_g2

0xb236,	// (0x0008605e) afind_page_pane_g3

0x0002,

0xf998,	// (0x0008a7c0) afind_page_pane_g

0xb23f,	// (0x00086067) afind_page_pane_t1

0xeda4,	// (0x00089bcc) cell_afind_grid_control_pane_ParamLimits

0xeda4,	// (0x00089bcc) cell_afind_grid_control_pane

0xeb7c,	// (0x000899a4) bg_button_pane_cp69_ParamLimits

0xeb7c,	// (0x000899a4) bg_button_pane_cp69

0xb256,	// (0x0008607e) cell_afind_pane_g1_ParamLimits

0xb256,	// (0x0008607e) cell_afind_pane_g1

0xb263,	// (0x0008608b) cell_afind_pane_t1_ParamLimits

0xb263,	// (0x0008608b) cell_afind_pane_t1

0xe838,	// (0x00089660) bg_button_pane_cp72

0xedb3,	// (0x00089bdb) cell_afind_grid_control_pane_g1

0x7e34,	// (0x00082c5c) aid_image_placing_area_ParamLimits

0x7e34,	// (0x00082c5c) aid_image_placing_area

0xa117,	// (0x00084f3f) field_vitu_entry_pane_g1_ParamLimits

0xa117,	// (0x00084f3f) field_vitu_entry_pane_g1

0xa123,	// (0x00084f4b) field_vitu_entry_pane_g2_ParamLimits

0xa123,	// (0x00084f4b) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0008a671) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0008a671) field_vitu_entry_pane_g

0xa177,	// (0x00084f9f) cell_vitu_itu_pane_g1_ParamLimits

0xa1b9,	// (0x00084fe1) cell_vitu_itu_pane_t3_ParamLimits

0xa1b9,	// (0x00084fe1) cell_vitu_itu_pane_t3

0xeb22,	// (0x0008994a) mp4_progress_pane_t1_ParamLimits

0xeb3b,	// (0x00089963) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0008a706) mp4_progress_pane_t_ParamLimits

0xeb54,	// (0x0008997c) mup_progress_pane_cp04_ParamLimits

0xb172,	// (0x00085f9a) main_myfav_hc_pane_t5_ParamLimits

0xb172,	// (0x00085f9a) main_myfav_hc_pane_t5

0x0551,	// (0x0007b379) aid_zoom_text_primary

0x54a2,	// (0x000802ca) popup_adpt_find_window_ParamLimits

0x0561,	// (0x0007b389) main_cam_set_pane

0xabc5,	// (0x000859ed) cam4_zoom_pane_ParamLimits

0xabc5,	// (0x000859ed) cam4_zoom_pane

0xb275,	// (0x0008609d) main_cam_set_pane_g1_ParamLimits

0xb275,	// (0x0008609d) main_cam_set_pane_g1

0xb283,	// (0x000860ab) main_cam_set_pane_g2_ParamLimits

0xb283,	// (0x000860ab) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0008a7c7) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0008a7c7) main_cam_set_pane_g

0xb28f,	// (0x000860b7) main_cam_set_pane_t1_ParamLimits

0xb28f,	// (0x000860b7) main_cam_set_pane_t1

0xb2ab,	// (0x000860d3) main_cset_listscroll_pane_ParamLimits

0xb2ab,	// (0x000860d3) main_cset_listscroll_pane

0xb2d6,	// (0x000860fe) main_cset_slider_pane_ParamLimits

0xb2d6,	// (0x000860fe) main_cset_slider_pane

0xedc4,	// (0x00089bec) main_cset_list_pane_ParamLimits

0xedc4,	// (0x00089bec) main_cset_list_pane

0xedd4,	// (0x00089bfc) scroll_pane_cp028

0xb2f5,	// (0x0008611d) aid_area_touch_slider

0xb311,	// (0x00086139) cset_slider_pane

0xb33b,	// (0x00086163) main_cset_slider_pane_g1

0xb350,	// (0x00086178) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0008a7cc) main_cset_slider_pane_g

0xee0d,	// (0x00089c35) main_cset_slider_pane_t1

0xb418,	// (0x00086240) main_cset_slider_pane_t2

0xb432,	// (0x0008625a) main_cset_slider_pane_t3

0xb44c,	// (0x00086274) main_cset_slider_pane_t4

0xb46a,	// (0x00086292) main_cset_slider_pane_t5

0xb48c,	// (0x000862b4) main_cset_slider_pane_t6

0xb4a3,	// (0x000862cb) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0008a7f1) main_cset_slider_pane_t

0xb5b1,	// (0x000863d9) cset_list_set_pane_ParamLimits

0xb5b1,	// (0x000863d9) cset_list_set_pane

0xb5ce,	// (0x000863f6) aid_position_infowindow_above

0xb5d6,	// (0x000863fe) aid_position_infowindow_below

0xb5de,	// (0x00086406) cset_list_set_pane_g1_ParamLimits

0xb5de,	// (0x00086406) cset_list_set_pane_g1

0xb5ea,	// (0x00086412) cset_list_set_pane_g3_ParamLimits

0xb5ea,	// (0x00086412) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0008a810) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0008a810) cset_list_set_pane_g

0xb5f9,	// (0x00086421) cset_list_set_pane_t1_ParamLimits

0xb5f9,	// (0x00086421) cset_list_set_pane_t1

0x0561,	// (0x0007b389) list_highlight_pane_cp021_ParamLimits

0x0561,	// (0x0007b389) list_highlight_pane_cp021

0x0fd3,	// (0x0007bdfb) cset_slider_pane_g1

0x0fe5,	// (0x0007be0d) cset_slider_pane_g2

0x0fdc,	// (0x0007be04) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0008a815) cset_slider_pane_g

0xb60e,	// (0x00086436) aid_area_touch_cam4_zoom

0xb616,	// (0x0008643e) cam4_zoom_cont_pane

0xb61e,	// (0x00086446) cam4_zoom_pane_g1

0xb626,	// (0x0008644e) cam4_zoom_pane_g2

0xb62e,	// (0x00086456) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0008a81c) cam4_zoom_pane_g

0xb636,	// (0x0008645e) cam4_zoom_cont_pane_g1

0xb63f,	// (0x00086467) cam4_zoom_cont_pane_g2

0xb648,	// (0x00086470) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0008a823) cam4_zoom_cont_pane_g

0xaabe,	// (0x000858e6) call4_image_pane_ParamLimits

0xaabe,	// (0x000858e6) call4_image_pane

0xeb88,	// (0x000899b0) call4_windows_conf_pane_ParamLimits

0xebc7,	// (0x000899ef) popup_call4_audio_in_window_ParamLimits

0xebc7,	// (0x000899ef) popup_call4_audio_in_window

0xde52,	// (0x00088c7a) bg_popup_call2_act_pane_cp02

0xec3d,	// (0x00089a65) call4_list_conf_pane

0x8e66,	// (0x00083c8e) call4_image_pane_g1

0x8e66,	// (0x00083c8e) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0008a537) call4_image_pane_g

0xeead,	// (0x00089cd5) list_single_graphic_popup_conf4_pane_ParamLimits

0xeead,	// (0x00089cd5) list_single_graphic_popup_conf4_pane

0xde52,	// (0x00088c7a) list_highlight_pane_cp022

0xeec0,	// (0x00089ce8) list_single_graphic_popup_conf4_pane_g1

0x0ca4,	// (0x0007bacc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0008a82a) list_single_graphic_popup_conf4_pane_g

0xeec8,	// (0x00089cf0) list_single_graphic_popup_conf4_pane_t1

0x6320,	// (0x00081148) popup_vtel_slider_window_ParamLimits

0x6320,	// (0x00081148) popup_vtel_slider_window

0xeb6a,	// (0x00089992) dialer2_ne_pane_t2_ParamLimits

0xeb6a,	// (0x00089992) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0008a70b) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0008a70b) dialer2_ne_pane_t

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp010_ParamLimits

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp010

0xb651,	// (0x00086479) popup_vtel_slider_window_g1_ParamLimits

0xb651,	// (0x00086479) popup_vtel_slider_window_g1

0xb65d,	// (0x00086485) popup_vtel_slider_window_g2_ParamLimits

0xb65d,	// (0x00086485) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0008a82f) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0008a82f) popup_vtel_slider_window_g

0xb6a5,	// (0x000864cd) vtel_slider_pane_ParamLimits

0xb6a5,	// (0x000864cd) vtel_slider_pane

0xb6b4,	// (0x000864dc) vtel_slider_pane_g1_ParamLimits

0xb6b4,	// (0x000864dc) vtel_slider_pane_g1

0xb6c1,	// (0x000864e9) vtel_slider_pane_g2_ParamLimits

0xb6c1,	// (0x000864e9) vtel_slider_pane_g2

0xb6ce,	// (0x000864f6) vtel_slider_pane_g3_ParamLimits

0xb6ce,	// (0x000864f6) vtel_slider_pane_g3

0xb6b4,	// (0x000864dc) vtel_slider_pane_g4_ParamLimits

0xb6b4,	// (0x000864dc) vtel_slider_pane_g4

0xb6db,	// (0x00086503) vtel_slider_pane_g5_ParamLimits

0xb6db,	// (0x00086503) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0008a838) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0008a838) vtel_slider_pane_g

0xde52,	// (0x00088c7a) main_gallery2_pane

0xae12,	// (0x00085c3a) aid_size_row_itut2_dropdow_list_ParamLimits

0xae12,	// (0x00085c3a) aid_size_row_itut2_dropdow_list

0xae80,	// (0x00085ca8) grid_vitu2_function_top_pane_ParamLimits

0xae80,	// (0x00085ca8) grid_vitu2_function_top_pane

0xaed6,	// (0x00085cfe) popup_vitu2_dropdown_list_window_ParamLimits

0xaed6,	// (0x00085cfe) popup_vitu2_dropdown_list_window

0xaef6,	// (0x00085d1e) popup_vitu2_match_list_window

0xb6e8,	// (0x00086510) cell_vitu2_function_top_pane_ParamLimits

0xb6e8,	// (0x00086510) cell_vitu2_function_top_pane

0xb708,	// (0x00086530) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb708,	// (0x00086530) cell_vitu2_function_top_pane_cp01

0xb726,	// (0x0008654e) cell_vitu2_function_top_wide_pane_ParamLimits

0xb726,	// (0x0008654e) cell_vitu2_function_top_wide_pane

0xad3d,	// (0x00085b65) bg_button_pane_cp012

0xb744,	// (0x0008656c) cell_vitu2_function_top_pane_g1

0xb753,	// (0x0008657b) bg_button_pane_cp013_ParamLimits

0xb753,	// (0x0008657b) bg_button_pane_cp013

0xb76f,	// (0x00086597) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb76f,	// (0x00086597) cell_vitu2_function_top_wide_pane_g1

0xb787,	// (0x000865af) bg_popup_sub_pane_cp20

0xb795,	// (0x000865bd) list_vitu2_match_list_pane

0xecba,	// (0x00089ae2) bg_popup_sub_pane_cp20_g1

0xecc2,	// (0x00089aea) bg_popup_sub_pane_cp20_g2

0xea45,	// (0x0008986d) bg_popup_sub_pane_cp20_g3

0xecca,	// (0x00089af2) bg_popup_sub_pane_cp20_g4

0xea25,	// (0x0008984d) bg_popup_sub_pane_cp20_g5

0xeed6,	// (0x00089cfe) bg_popup_sub_pane_cp20_g6

0xecda,	// (0x00089b02) bg_popup_sub_pane_cp20_g7

0xece2,	// (0x00089b0a) bg_popup_sub_pane_cp20_g8

0xecea,	// (0x00089b12) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0008a843) bg_popup_sub_pane_cp20_g

0xb7ad,	// (0x000865d5) list_vitu2_match_list_item_pane_ParamLimits

0xb7ad,	// (0x000865d5) list_vitu2_match_list_item_pane

0xb7bf,	// (0x000865e7) list_vitu2_match_list_item_pane_t1

0x58bb,	// (0x000806e3) bg_popup_sub_pane_cp21

0xb7fc,	// (0x00086624) grid_vitu2_dropdown_list_pane

0xb804,	// (0x0008662c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb804,	// (0x0008662c) cell_vitu2_dropdown_list_char_pane

0xb825,	// (0x0008664d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb825,	// (0x0008664d) cell_vitu2_dropdown_list_ctrl_pane

0xeede,	// (0x00089d06) cell_vitu2_dropdown_list_char_pane_g1

0xeee7,	// (0x00089d0f) cell_vitu2_dropdown_list_char_pane_g2

0xeef0,	// (0x00089d18) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0008a860) cell_vitu2_dropdown_list_char_pane_g

0xb851,	// (0x00086679) cell_vitu2_dropdown_list_char_pane_t1

0xb85f,	// (0x00086687) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb85f,	// (0x00086687) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb86f,	// (0x00086697) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb86f,	// (0x00086697) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb880,	// (0x000866a8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb880,	// (0x000866a8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb890,	// (0x000866b8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb890,	// (0x000866b8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac50,	// (0x00085a78) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac50,	// (0x00085a78) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0008a867) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0008a867) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8ac,	// (0x000866d4) aid_size_cell_gallery2_ParamLimits

0xb8ac,	// (0x000866d4) aid_size_cell_gallery2

0xb8ba,	// (0x000866e2) grid_gallery2_pane_ParamLimits

0xb8ba,	// (0x000866e2) grid_gallery2_pane

0xb8c9,	// (0x000866f1) scroll_pane_cp029_ParamLimits

0xb8c9,	// (0x000866f1) scroll_pane_cp029

0xb8d5,	// (0x000866fd) cell_gallery2_pane_ParamLimits

0xb8d5,	// (0x000866fd) cell_gallery2_pane

0xeef9,	// (0x00089d21) cell_gallery2_pane_g2

0xb906,	// (0x0008672e) cell_gallery2_pane_g3

0xef03,	// (0x00089d2b) cell_gallery2_pane_g4

0xef0b,	// (0x00089d33) cell_gallery2_pane_g5

0x0e7d,	// (0x0007bca5) grid_highlight_pane_cp10

0xaef6,	// (0x00085d1e) popup_vitu2_match_list_window_ParamLimits

0xaf08,	// (0x00085d30) popup_vitu2_query_window_ParamLimits

0xaf08,	// (0x00085d30) popup_vitu2_query_window

0x58bb,	// (0x000806e3) bg_vitu2_candi_button_pane

0xeede,	// (0x00089d06) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xeee7,	// (0x00089d0f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xeef0,	// (0x00089d18) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb90e,	// (0x00086736) bg_button_pane_cp015

0xb918,	// (0x00086740) bg_button_pane_cp016

0xb922,	// (0x0008674a) bg_button_pane_cp017

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp22

0xef13,	// (0x00089d3b) popup_vitu2_query_window_g1

0xb94a,	// (0x00086772) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0008a872) popup_vitu2_query_window_g

0xb958,	// (0x00086780) popup_vitu2_query_window_t1_ParamLimits

0xb958,	// (0x00086780) popup_vitu2_query_window_t1

0xb980,	// (0x000867a8) popup_vitu2_query_window_t2_ParamLimits

0xb980,	// (0x000867a8) popup_vitu2_query_window_t2

0xb992,	// (0x000867ba) popup_vitu2_query_window_t3_ParamLimits

0xb992,	// (0x000867ba) popup_vitu2_query_window_t3

0xb9ba,	// (0x000867e2) popup_vitu2_query_window_t4_ParamLimits

0xb9ba,	// (0x000867e2) popup_vitu2_query_window_t4

0xb9ce,	// (0x000867f6) popup_vitu2_query_window_t5_ParamLimits

0xb9ce,	// (0x000867f6) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0008a877) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0008a877) popup_vitu2_query_window_t

0xedbc,	// (0x00089be4) main_cset_text_pane

0xb2f5,	// (0x0008611d) aid_area_touch_slider_ParamLimits

0xb311,	// (0x00086139) cset_slider_pane_ParamLimits

0xb33b,	// (0x00086163) main_cset_slider_pane_g1_ParamLimits

0xb350,	// (0x00086178) main_cset_slider_pane_g2_ParamLimits

0xeddd,	// (0x00089c05) main_cset_slider_pane_g3_ParamLimits

0xeddd,	// (0x00089c05) main_cset_slider_pane_g3

0xb365,	// (0x0008618d) main_cset_slider_pane_g4_ParamLimits

0xb365,	// (0x0008618d) main_cset_slider_pane_g4

0xb374,	// (0x0008619c) main_cset_slider_pane_g5_ParamLimits

0xb374,	// (0x0008619c) main_cset_slider_pane_g5

0xb382,	// (0x000861aa) main_cset_slider_pane_g6_ParamLimits

0xb382,	// (0x000861aa) main_cset_slider_pane_g6

0xf9a4,	// (0x0008a7cc) main_cset_slider_pane_g_ParamLimits

0xee0d,	// (0x00089c35) main_cset_slider_pane_t1_ParamLimits

0xb418,	// (0x00086240) main_cset_slider_pane_t2_ParamLimits

0xb432,	// (0x0008625a) main_cset_slider_pane_t3_ParamLimits

0xb44c,	// (0x00086274) main_cset_slider_pane_t4_ParamLimits

0xb46a,	// (0x00086292) main_cset_slider_pane_t5_ParamLimits

0xb48c,	// (0x000862b4) main_cset_slider_pane_t6_ParamLimits

0xb4a3,	// (0x000862cb) main_cset_slider_pane_t7_ParamLimits

0xb4d1,	// (0x000862f9) main_cset_slider_pane_t8_ParamLimits

0xb4d1,	// (0x000862f9) main_cset_slider_pane_t8

0xb4f9,	// (0x00086321) main_cset_slider_pane_t9_ParamLimits

0xb4f9,	// (0x00086321) main_cset_slider_pane_t9

0xb521,	// (0x00086349) main_cset_slider_pane_t10_ParamLimits

0xb521,	// (0x00086349) main_cset_slider_pane_t10

0xb549,	// (0x00086371) main_cset_slider_pane_t11_ParamLimits

0xb549,	// (0x00086371) main_cset_slider_pane_t11

0xb573,	// (0x0008639b) main_cset_slider_pane_t12_ParamLimits

0xb573,	// (0x0008639b) main_cset_slider_pane_t12

0xb592,	// (0x000863ba) main_cset_slider_pane_t13_ParamLimits

0xb592,	// (0x000863ba) main_cset_slider_pane_t13

0xf9c9,	// (0x0008a7f1) main_cset_slider_pane_t_ParamLimits

0xde52,	// (0x00088c7a) bg_popup_sub_pane_cp011

0xef1f,	// (0x00089d47) main_cset_text_pane_g1

0xef27,	// (0x00089d4f) main_cset_text_pane_t1

0xef35,	// (0x00089d5d) main_cset_text_pane_t2

0xef43,	// (0x00089d6b) main_cset_text_pane_t3

0xef51,	// (0x00089d79) main_cset_text_pane_t4

0xef5f,	// (0x00089d87) main_cset_text_pane_t5

0xef6d,	// (0x00089d95) main_cset_text_pane_t6

0xef7b,	// (0x00089da3) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0008a882) main_cset_text_pane_t

0xde52,	// (0x00088c7a) main_cam4_burst_pane

0xde52,	// (0x00088c7a) main_cam5_pane

0x0804,	// (0x0007b62c) bg_button_pane_cp019

0xb24d,	// (0x00086075) bg_button_pane_cp020

0xede9,	// (0x00089c11) main_cset_slider_pane_g7_ParamLimits

0xede9,	// (0x00089c11) main_cset_slider_pane_g7

0xedf5,	// (0x00089c1d) main_cset_slider_pane_g8_ParamLimits

0xedf5,	// (0x00089c1d) main_cset_slider_pane_g8

0xb398,	// (0x000861c0) main_cset_slider_pane_g9_ParamLimits

0xb398,	// (0x000861c0) main_cset_slider_pane_g9

0xb3a4,	// (0x000861cc) main_cset_slider_pane_g10_ParamLimits

0xb3a4,	// (0x000861cc) main_cset_slider_pane_g10

0xb3b0,	// (0x000861d8) main_cset_slider_pane_g11_ParamLimits

0xb3b0,	// (0x000861d8) main_cset_slider_pane_g11

0xb3bc,	// (0x000861e4) main_cset_slider_pane_g12_ParamLimits

0xb3bc,	// (0x000861e4) main_cset_slider_pane_g12

0xb3c8,	// (0x000861f0) main_cset_slider_pane_g13_ParamLimits

0xb3c8,	// (0x000861f0) main_cset_slider_pane_g13

0xb3d6,	// (0x000861fe) main_cset_slider_pane_g14_ParamLimits

0xb3d6,	// (0x000861fe) main_cset_slider_pane_g14

0xb3e4,	// (0x0008620c) main_cset_slider_pane_g15_ParamLimits

0xb3e4,	// (0x0008620c) main_cset_slider_pane_g15

0xee3b,	// (0x00089c63) main_cset_slider_pane_t14_ParamLimits

0xee3b,	// (0x00089c63) main_cset_slider_pane_t14

0xee74,	// (0x00089c9c) main_cset_slider_pane_t15_ParamLimits

0xee74,	// (0x00089c9c) main_cset_slider_pane_t15

0xb9e2,	// (0x0008680a) aid_cam4_burst_size_cell_ParamLimits

0xb9e2,	// (0x0008680a) aid_cam4_burst_size_cell

0xb9fe,	// (0x00086826) grid_cam4_burst_pane_ParamLimits

0xb9fe,	// (0x00086826) grid_cam4_burst_pane

0xba2e,	// (0x00086856) linegrid_cam4_burst_pane_ParamLimits

0xba2e,	// (0x00086856) linegrid_cam4_burst_pane

0xba50,	// (0x00086878) scroll_pane_cp30_ParamLimits

0xba50,	// (0x00086878) scroll_pane_cp30

0xba5c,	// (0x00086884) cell_cam4_burst_pane_ParamLimits

0xba5c,	// (0x00086884) cell_cam4_burst_pane

0xef89,	// (0x00089db1) linegrid_cam4_burst_pane_g1_ParamLimits

0xef89,	// (0x00089db1) linegrid_cam4_burst_pane_g1

0xba98,	// (0x000868c0) linegrid_cam4_burst_pane_g2_ParamLimits

0xba98,	// (0x000868c0) linegrid_cam4_burst_pane_g2

0xef96,	// (0x00089dbe) linegrid_cam4_burst_pane_g3_ParamLimits

0xef96,	// (0x00089dbe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0008a891) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0008a891) linegrid_cam4_burst_pane_g

0xbaa9,	// (0x000868d1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbaa9,	// (0x000868d1) linegrid_cam4_burst_pane_g3_copy1

0xefa3,	// (0x00089dcb) linegrid_cam4_burst_pane_g4_ParamLimits

0xefa3,	// (0x00089dcb) linegrid_cam4_burst_pane_g4

0xbac3,	// (0x000868eb) linegrid_cam4_burst_pane_g5_ParamLimits

0xbac3,	// (0x000868eb) linegrid_cam4_burst_pane_g5

0xbad4,	// (0x000868fc) linegrid_cam4_burst_pane_g6_ParamLimits

0xbad4,	// (0x000868fc) linegrid_cam4_burst_pane_g6

0xefb0,	// (0x00089dd8) linegrid_cam4_burst_pane_g7_ParamLimits

0xefb0,	// (0x00089dd8) linegrid_cam4_burst_pane_g7

0xbae5,	// (0x0008690d) cell_cam4_burst_pane_g1

0xefc9,	// (0x00089df1) main_cam5_pane_t1_ParamLimits

0xefc9,	// (0x00089df1) main_cam5_pane_t1

0xefdb,	// (0x00089e03) main_cam5_pane_t2_ParamLimits

0xefdb,	// (0x00089e03) main_cam5_pane_t2

0xefed,	// (0x00089e15) main_cam5_pane_t3_ParamLimits

0xefed,	// (0x00089e15) main_cam5_pane_t3

0xefff,	// (0x00089e27) main_cam5_pane_t4_ParamLimits

0xefff,	// (0x00089e27) main_cam5_pane_t4

0xf015,	// (0x00089e3d) main_cam5_pane_t5_ParamLimits

0xf015,	// (0x00089e3d) main_cam5_pane_t5

0xf027,	// (0x00089e4f) main_cam5_pane_t6_ParamLimits

0xf027,	// (0x00089e4f) main_cam5_pane_t6

0xf03b,	// (0x00089e63) main_cam5_pane_t7_ParamLimits

0xf03b,	// (0x00089e63) main_cam5_pane_t7

0xf04d,	// (0x00089e75) main_cam5_pane_t8_ParamLimits

0xf04d,	// (0x00089e75) main_cam5_pane_t8

0xf069,	// (0x00089e91) main_cam5_pane_t9_ParamLimits

0xf069,	// (0x00089e91) main_cam5_pane_t9

0xf07b,	// (0x00089ea3) main_cam5_pane_t10_ParamLimits

0xf07b,	// (0x00089ea3) main_cam5_pane_t10

0xf08d,	// (0x00089eb5) main_cam5_pane_t11_ParamLimits

0xf08d,	// (0x00089eb5) main_cam5_pane_t11

0xf09f,	// (0x00089ec7) main_cam5_pane_t12_ParamLimits

0xf09f,	// (0x00089ec7) main_cam5_pane_t12

0xf0b4,	// (0x00089edc) main_cam5_pane_t13_ParamLimits

0xf0b4,	// (0x00089edc) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0008a89d) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0008a89d) main_cam5_pane_t

0x554f,	// (0x00080377) popup_scut_keymap_window_ParamLimits

0x554f,	// (0x00080377) popup_scut_keymap_window

0xbaf8,	// (0x00086920) aid_size_cell_brow_shortcut

0x0e7d,	// (0x0007bca5) bg_popup_window_pane_cp010

0xbb04,	// (0x0008692c) grid_scut_pane

0xbb10,	// (0x00086938) cell_scut_pane_ParamLimits

0xbb10,	// (0x00086938) cell_scut_pane

0xbb27,	// (0x0008694f) cell_scut_pane_g1

0xf0d1,	// (0x00089ef9) cell_scut_pane_t1

0xf0e0,	// (0x00089f08) cell_scut_pane_t2

0xbb30,	// (0x00086958) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0008a8b8) cell_scut_pane_t

0x94b8,	// (0x000842e0) main_mup3_pane_g8_ParamLimits

0x94b8,	// (0x000842e0) main_mup3_pane_g8

0xae20,	// (0x00085c48) area_vitu2_query_pane_ParamLimits

0xae20,	// (0x00085c48) area_vitu2_query_pane

0xb92c,	// (0x00086754) input_focus_pane_cp08

0xf0ef,	// (0x00089f17) area_vitu2_query_pane_g1

0xbb3e,	// (0x00086966) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0008a8bf) area_vitu2_query_pane_g

0xbb4f,	// (0x00086977) area_vitu2_query_pane_t1_ParamLimits

0xbb4f,	// (0x00086977) area_vitu2_query_pane_t1

0xbb63,	// (0x0008698b) area_vitu2_query_pane_t2_ParamLimits

0xbb63,	// (0x0008698b) area_vitu2_query_pane_t2

0xbb77,	// (0x0008699f) area_vitu2_query_pane_t3_ParamLimits

0xbb77,	// (0x0008699f) area_vitu2_query_pane_t3

0x260f,	// (0x0007d437) area_vitu2_query_pane_t4_ParamLimits

0x260f,	// (0x0007d437) area_vitu2_query_pane_t4

0x2637,	// (0x0007d45f) area_vitu2_query_pane_t5_ParamLimits

0x2637,	// (0x0007d45f) area_vitu2_query_pane_t5

0x265f,	// (0x0007d487) area_vitu2_query_pane_t6_ParamLimits

0x265f,	// (0x0007d487) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0008a8c4) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0008a8c4) area_vitu2_query_pane_t

0xbb9f,	// (0x000869c7) bg_button_pane_cp018

0xbbad,	// (0x000869d5) bg_button_pane_cp021

0xbbb9,	// (0x000869e1) bg_button_pane_cp022

0xbbca,	// (0x000869f2) input_focus_pane_cp09

0x7442,	// (0x0008226a) aid_size_touch_mv_arrow_left

0x746d,	// (0x00082295) aid_size_touch_mv_arrow_right

0xb3fc,	// (0x00086224) main_cset_slider_pane_g16_ParamLimits

0xb3fc,	// (0x00086224) main_cset_slider_pane_g16

0xb40a,	// (0x00086232) main_cset_slider_pane_g17_ParamLimits

0xb40a,	// (0x00086232) main_cset_slider_pane_g17

0xbae5,	// (0x0008690d) cell_cam4_burst_pane_g1_ParamLimits

0xde52,	// (0x00088c7a) compa_mode_pane

0xb669,	// (0x00086491) popup_vtel_slider_window_g3_ParamLimits

0xb669,	// (0x00086491) popup_vtel_slider_window_g3

0xb67d,	// (0x000864a5) popup_vtel_slider_window_g4_ParamLimits

0xb67d,	// (0x000864a5) popup_vtel_slider_window_g4

0xb691,	// (0x000864b9) popup_vtel_slider_window_t1_ParamLimits

0xb691,	// (0x000864b9) popup_vtel_slider_window_t1

0xde52,	// (0x00088c7a) main_cl_pane

0x2306,	// (0x0007d12e) popup_imed_adjust2_window_ParamLimits

0x22de,	// (0x0007d106) bg_tb_trans_pane_cp05_ParamLimits

0x9f1f,	// (0x00084d47) popup_imed_adjust2_window_g1_ParamLimits

0x9f2e,	// (0x00084d56) popup_imed_adjust2_window_g2_ParamLimits

0x9f2e,	// (0x00084d56) popup_imed_adjust2_window_g2

0x9f3a,	// (0x00084d62) popup_imed_adjust2_window_g3_ParamLimits

0x9f3a,	// (0x00084d62) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0008a635) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0008a635) popup_imed_adjust2_window_g

0x9f46,	// (0x00084d6e) popup_imed_adjust2_window_t1_ParamLimits

0x9f5e,	// (0x00084d86) slider_imed_adjust_pane_ParamLimits

0x9f72,	// (0x00084d9a) slider_imed_adjust_pane_g1_ParamLimits

0x9f82,	// (0x00084daa) slider_imed_adjust_pane_g2_ParamLimits

0x9f92,	// (0x00084dba) slider_imed_adjust_pane_g3_ParamLimits

0x9fa3,	// (0x00084dcb) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0008a63c) slider_imed_adjust_pane_g_ParamLimits

0xab7a,	// (0x000859a2) aid_touch_area_cam4_ParamLimits

0xab7a,	// (0x000859a2) aid_touch_area_cam4

0xab8a,	// (0x000859b2) battery_pane_cp01

0xac05,	// (0x00085a2d) main_camera4_pane_g6_ParamLimits

0xac05,	// (0x00085a2d) main_camera4_pane_g6

0xac23,	// (0x00085a4b) main_camera4_pane_t2_ParamLimits

0xac23,	// (0x00085a4b) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0008a73f) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0008a73f) main_camera4_pane_t

0xacaf,	// (0x00085ad7) aid_touch_area_vid4_ParamLimits

0xacaf,	// (0x00085ad7) aid_touch_area_vid4

0xacef,	// (0x00085b17) main_video4_pane_g5_ParamLimits

0xacef,	// (0x00085b17) main_video4_pane_g5

0xad11,	// (0x00085b39) vid4_progress_pane_ParamLimits

0xad11,	// (0x00085b39) vid4_progress_pane

0xee01,	// (0x00089c29) main_cset_slider_pane_g18_ParamLimits

0xee01,	// (0x00089c29) main_cset_slider_pane_g18

0xefbd,	// (0x00089de5) cell_cam4_burst_pane_g2_ParamLimits

0xefbd,	// (0x00089de5) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0008a898) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0008a898) cell_cam4_burst_pane_g

0xbbdb,	// (0x00086a03) bg_cl_pane_ParamLimits

0xbbdb,	// (0x00086a03) bg_cl_pane

0xbbe7,	// (0x00086a0f) cl_header_pane_ParamLimits

0xbbe7,	// (0x00086a0f) cl_header_pane

0xbbf3,	// (0x00086a1b) cl_listscroll_pane_ParamLimits

0xbbf3,	// (0x00086a1b) cl_listscroll_pane

0x26ab,	// (0x0007d4d3) bg_cl_pane_g1

0x26b3,	// (0x0007d4db) bg_cl_pane_g2

0x26bb,	// (0x0007d4e3) bg_cl_pane_g3

0x26c3,	// (0x0007d4eb) bg_cl_pane_g4

0x26cb,	// (0x0007d4f3) bg_cl_pane_g5

0x26d3,	// (0x0007d4fb) bg_cl_pane_g6

0x26db,	// (0x0007d503) bg_cl_pane_g7

0x26e3,	// (0x0007d50b) bg_cl_pane_g8

0x26eb,	// (0x0007d513) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0008a8d3) bg_cl_pane_g

0xbbff,	// (0x00086a27) aid_height_cl_leading_ParamLimits

0xbbff,	// (0x00086a27) aid_height_cl_leading

0xbc0b,	// (0x00086a33) aid_height_cl_text_ParamLimits

0xbc0b,	// (0x00086a33) aid_height_cl_text

0x25a3,	// (0x0007d3cb) bg_cl_header_pane_ParamLimits

0x25a3,	// (0x0007d3cb) bg_cl_header_pane

0xbc23,	// (0x00086a4b) cl_header_pane_g1_ParamLimits

0xbc23,	// (0x00086a4b) cl_header_pane_g1

0xbc30,	// (0x00086a58) cl_header_pane_t1_ParamLimits

0xbc30,	// (0x00086a58) cl_header_pane_t1

0x26f3,	// (0x0007d51b) cl_list_pane

0xedd4,	// (0x00089bfc) hc_scroll_pane_cp01

0xea25,	// (0x0008984d) bg_cl_header_pane_g1

0xecba,	// (0x00089ae2) bg_cl_header_pane_g2

0xea45,	// (0x0008986d) bg_cl_header_pane_g3

0xecca,	// (0x00089af2) bg_cl_header_pane_g4

0xecc2,	// (0x00089aea) bg_cl_header_pane_g5

0xeed6,	// (0x00089cfe) bg_cl_header_pane_g6

0xece2,	// (0x00089b0a) bg_cl_header_pane_g7

0xecea,	// (0x00089b12) bg_cl_header_pane_g8

0xecda,	// (0x00089b02) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0008a8e6) bg_cl_header_pane_g

0xbc42,	// (0x00086a6a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc42,	// (0x00086a6a) hc_cl_list_double_graphic_heading_pane

0xbc59,	// (0x00086a81) hc_cl_list_single_graphic_pane_ParamLimits

0xbc59,	// (0x00086a81) hc_cl_list_single_graphic_pane

0xbc79,	// (0x00086aa1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbc79,	// (0x00086aa1) hc_cl_list_single_graphic_pane_g1

0xbc85,	// (0x00086aad) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc85,	// (0x00086aad) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0008a8f9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0008a8f9) hc_cl_list_single_graphic_pane_g

0xbc99,	// (0x00086ac1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc99,	// (0x00086ac1) hc_cl_list_single_graphic_pane_t1

0xbc79,	// (0x00086aa1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbc79,	// (0x00086aa1) hc_cl_list_double_graphic_heading_pane_g1

0xbcae,	// (0x00086ad6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbcae,	// (0x00086ad6) hc_cl_list_double_graphic_heading_pane_g2

0xbcc2,	// (0x00086aea) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbcc2,	// (0x00086aea) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0008a8fe) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0008a8fe) hc_cl_list_double_graphic_heading_pane_g

0xbcd6,	// (0x00086afe) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbcd6,	// (0x00086afe) hc_cl_list_double_graphic_heading_pane_t1

0xbceb,	// (0x00086b13) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbceb,	// (0x00086b13) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0008a905) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0008a905) hc_cl_list_double_graphic_heading_pane_t

0xbd08,	// (0x00086b30) vid4_progress_pane_g1

0xbd18,	// (0x00086b40) vid4_progress_pane_g2

0x094e,	// (0x0007b776) vid4_progress_pane_g3

0xac77,	// (0x00085a9f) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0008a90a) vid4_progress_pane_g

0xbd28,	// (0x00086b50) vid4_progress_pane_t1

0xbd3d,	// (0x00086b65) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0008a915) vid4_progress_pane_t

0xbd68,	// (0x00086b90) wait_bar_pane_cp07

0x3fc9,	// (0x0007edf1) blid_firmament_pane_ParamLimits

0x8bd9,	// (0x00083a01) popup_blid_sat_info2_window_g1

0x8bfd,	// (0x00083a25) popup_blid_sat_info2_window_t3

0x8c0b,	// (0x00083a33) popup_blid_sat_info2_window_t4

0x8c19,	// (0x00083a41) popup_blid_sat_info2_window_t5

0x8c27,	// (0x00083a4f) popup_blid_sat_info2_window_t6

0x8c37,	// (0x00083a5f) popup_blid_sat_info2_window_t7

0x8c45,	// (0x00083a6d) popup_blid_sat_info2_window_t8

0x8c53,	// (0x00083a7b) popup_blid_sat_info2_window_t9

0x8c61,	// (0x00083a89) popup_blid_sat_info2_window_t10

0x8de6,	// (0x00083c0e) aid_firma_cardinal_ParamLimits

0x8dfa,	// (0x00083c22) blid_firmament_pane_t1_ParamLimits

0x8e11,	// (0x00083c39) blid_firmament_pane_t2_ParamLimits

0x8e28,	// (0x00083c50) blid_firmament_pane_t3_ParamLimits

0x8e3f,	// (0x00083c67) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0008a52e) blid_firmament_pane_t_ParamLimits

0x8e56,	// (0x00083c7e) blid_sat_info_pane_ParamLimits

0x0561,	// (0x0007b389) main_cam_set_pane_ParamLimits

0x9da1,	// (0x00084bc9) aid_size_cell_colour_35_ParamLimits

0x9dbb,	// (0x00084be3) aid_size_cell_colour_112_ParamLimits

0x9dd2,	// (0x00084bfa) aid_size_cell_effect_ParamLimits

0x0561,	// (0x0007b389) bg_tb_trans_pane_cp02_ParamLimits

0x9dec,	// (0x00084c14) heading_imed_pane_ParamLimits

0x9df8,	// (0x00084c20) listscroll_imed_pane_ParamLimits

0x1910,	// (0x0007c738) popup_call2_audio_first_window_g5_ParamLimits

0x1910,	// (0x0007c738) popup_call2_audio_first_window_g5

0xa929,	// (0x00085751) aid_size_touch_image3_arrow_left_ParamLimits

0xa929,	// (0x00085751) aid_size_touch_image3_arrow_left

0xa93f,	// (0x00085767) aid_size_touch_image3_arrow_right_ParamLimits

0xa93f,	// (0x00085767) aid_size_touch_image3_arrow_right

0xbd53,	// (0x00086b7b) vid4_progress_pane_t3

0xa461,	// (0x00085289) main_hwr_training_symbol_option_pane_ParamLimits

0xa461,	// (0x00085289) main_hwr_training_symbol_option_pane

0xa481,	// (0x000852a9) popup_hwr_training_preview_window_ParamLimits

0xa481,	// (0x000852a9) popup_hwr_training_preview_window

0xa50f,	// (0x00085337) hwr_training_navi_pane_g5_ParamLimits

0xa50f,	// (0x00085337) hwr_training_navi_pane_g5

0xeca8,	// (0x00089ad0) popup_char_count_window

0xb787,	// (0x000865af) bg_popup_sub_pane_cp20_ParamLimits

0xb795,	// (0x000865bd) list_vitu2_match_list_pane_ParamLimits

0xb7a1,	// (0x000865c9) vitu2_page_scroll_pane_ParamLimits

0xb7a1,	// (0x000865c9) vitu2_page_scroll_pane

0x274e,	// (0x0007d576) list_single_hwr_training_symbol_option_pane_ParamLimits

0x274e,	// (0x0007d576) list_single_hwr_training_symbol_option_pane

0x2761,	// (0x0007d589) list_single_hwr_training_symbol_option_pane_g1

0x2769,	// (0x0007d591) list_single_hwr_training_symbol_option_pane_t1

0x2777,	// (0x0007d59f) bg_button_pane_cp023

0x2780,	// (0x0007d5a8) bg_button_pane_cp024

0xbd78,	// (0x00086ba0) vitu2_page_scroll_pane_g1

0xbd80,	// (0x00086ba8) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0008a91c) vitu2_page_scroll_pane_g

0xbd88,	// (0x00086bb0) vitu2_page_scroll_pane_t1

0x24f3,	// (0x0007d31b) popup_char_count_window_g1

0x27b3,	// (0x0007d5db) popup_char_count_window_g2

0x27bc,	// (0x0007d5e4) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0008a921) popup_char_count_window_g

0x27c5,	// (0x0007d5ed) popup_char_count_window_t1

0xde52,	// (0x00088c7a) main_vded2_pane

0x9f0b,	// (0x00084d33) aid_size_cell_imed_line

0x9f15,	// (0x00084d3d) grid_imed_line_width_pane

0xad75,	// (0x00085b9d) vid4_indicators_pane_g4

0x27d3,	// (0x0007d5fb) cell_imed_line_width_pane_ParamLimits

0x27d3,	// (0x0007d5fb) cell_imed_line_width_pane

0x27e7,	// (0x0007d60f) cell_imed_line_width_pane_g1

0x8b81,	// (0x000839a9) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0008a928) cell_imed_line_width_pane_g

0xbd97,	// (0x00086bbf) main_vded2_pane_g1_ParamLimits

0xbd97,	// (0x00086bbf) main_vded2_pane_g1

0xbda4,	// (0x00086bcc) main_vded2_pane_g2_ParamLimits

0xbda4,	// (0x00086bcc) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0008a92d) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0008a92d) main_vded2_pane_g

0xbdb2,	// (0x00086bda) vded2_slider_pane_ParamLimits

0xbdb2,	// (0x00086bda) vded2_slider_pane

0xbdbf,	// (0x00086be7) aid_size_touch_vded2_end

0xbdc9,	// (0x00086bf1) aid_size_touch_vded2_playhead

0x27f0,	// (0x0007d618) aid_size_touch_vded2_start

0x27f8,	// (0x0007d620) vded2_slider_bg_pane

0x2801,	// (0x0007d629) vded2_slider_pane_g1

0x280a,	// (0x0007d632) vded2_slider_pane_g2

0xbdd1,	// (0x00086bf9) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0008a932) vded2_slider_pane_g

0x2812,	// (0x0007d63a) vded2_slider_bg_pane_g1

0x281b,	// (0x0007d643) vded2_slider_bg_pane_g2

0x2824,	// (0x0007d64c) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0008a939) vded2_slider_bg_pane_g

0x7b91,	// (0x000829b9) aid_postcard_touch_down_pane_ParamLimits

0x7b91,	// (0x000829b9) aid_postcard_touch_down_pane

0x7ba1,	// (0x000829c9) aid_postcard_touch_up_pane_ParamLimits

0x7ba1,	// (0x000829c9) aid_postcard_touch_up_pane

0xde52,	// (0x00088c7a) main_blid2_pane

0x22ec,	// (0x0007d114) popup_blid2_search_window

0xde52,	// (0x00088c7a) blid2_gps_pane

0xde52,	// (0x00088c7a) blid2_navig_pane

0xde52,	// (0x00088c7a) blid2_search_pane

0xde52,	// (0x00088c7a) blid2_tripm_pane

0xbdda,	// (0x00086c02) blid2_search_pane_g1_ParamLimits

0xbdda,	// (0x00086c02) blid2_search_pane_g1

0xbdea,	// (0x00086c12) blid2_search_pane_t1_ParamLimits

0xbdea,	// (0x00086c12) blid2_search_pane_t1

0xbdfc,	// (0x00086c24) aid_size_cell_blid2_gps_ParamLimits

0xbdfc,	// (0x00086c24) aid_size_cell_blid2_gps

0xbe0c,	// (0x00086c34) blid2_gps_pane_g1_ParamLimits

0xbe0c,	// (0x00086c34) blid2_gps_pane_g1

0xbe18,	// (0x00086c40) grid_blid2_satellite_pane_ParamLimits

0xbe18,	// (0x00086c40) grid_blid2_satellite_pane

0xbe28,	// (0x00086c50) blid2_navig_pane_g1_ParamLimits

0xbe28,	// (0x00086c50) blid2_navig_pane_g1

0xbe34,	// (0x00086c5c) blid2_navig_pane_t1_ParamLimits

0xbe34,	// (0x00086c5c) blid2_navig_pane_t1

0xbe46,	// (0x00086c6e) blid2_navig_pane_t2_ParamLimits

0xbe46,	// (0x00086c6e) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0008a940) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0008a940) blid2_navig_pane_t

0xbe58,	// (0x00086c80) blid2_navig_ring_pane_ParamLimits

0xbe58,	// (0x00086c80) blid2_navig_ring_pane

0xbe68,	// (0x00086c90) blid2_speed_pane_ParamLimits

0xbe68,	// (0x00086c90) blid2_speed_pane

0xbe74,	// (0x00086c9c) blid2_tripm_pane_g1_ParamLimits

0xbe74,	// (0x00086c9c) blid2_tripm_pane_g1

0xbe84,	// (0x00086cac) blid2_tripm_pane_g2_ParamLimits

0xbe84,	// (0x00086cac) blid2_tripm_pane_g2

0xbe90,	// (0x00086cb8) blid2_tripm_pane_g3_ParamLimits

0xbe90,	// (0x00086cb8) blid2_tripm_pane_g3

0xbe9c,	// (0x00086cc4) blid2_tripm_pane_g4_ParamLimits

0xbe9c,	// (0x00086cc4) blid2_tripm_pane_g4

0xbea8,	// (0x00086cd0) blid2_tripm_pane_g5_ParamLimits

0xbea8,	// (0x00086cd0) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0008a945) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0008a945) blid2_tripm_pane_g

0xbec4,	// (0x00086cec) blid2_tripm_pane_t1_ParamLimits

0xbec4,	// (0x00086cec) blid2_tripm_pane_t1

0xbed8,	// (0x00086d00) blid2_tripm_pane_t2_ParamLimits

0xbed8,	// (0x00086d00) blid2_tripm_pane_t2

0xbeec,	// (0x00086d14) blid2_tripm_pane_t3_ParamLimits

0xbeec,	// (0x00086d14) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0008a952) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0008a952) blid2_tripm_pane_t

0xbf1e,	// (0x00086d46) cell_blid2_satellite_pane_ParamLimits

0xbf1e,	// (0x00086d46) cell_blid2_satellite_pane

0xbf38,	// (0x00086d60) cell_blid2_satellite_pane_g1

0x282d,	// (0x0007d655) cell_blid2_satellite_pane_t1

0x8e66,	// (0x00083c8e) blid2_speed_pane_g1

0x283b,	// (0x0007d663) blid2_speed_pane_t1

0x2849,	// (0x0007d671) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0008a95b) blid2_speed_pane_t

0x8e66,	// (0x00083c8e) blid2_navig_ring_pane_g1

0xbf41,	// (0x00086d69) blid2_navig_ring_pane_g2

0xbf49,	// (0x00086d71) blid2_navig_ring_pane_g3

0xbf51,	// (0x00086d79) blid2_navig_ring_pane_g4

0xbf59,	// (0x00086d81) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0008a960) blid2_navig_ring_pane_g

0xde52,	// (0x00088c7a) bg_popup_window_pane_cp011

0x2857,	// (0x0007d67f) popup_blid2_search_window_g1

0x285f,	// (0x0007d687) popup_blid2_search_window_t1

0x286d,	// (0x0007d695) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0008a96b) popup_blid2_search_window_t

0xe934,	// (0x0008975c) main_browser_pane_g1

0xe62d,	// (0x00089455) main_browser_pane_ParamLimits

0xad3d,	// (0x00085b65) bg_button_pane_cp011_ParamLimits

0xb01c,	// (0x00085e44) cell_vitu2_function_pane_g1_ParamLimits

0x0561,	// (0x0007b389) bg_popup_sub_pane_cp22_ParamLimits

0xb92c,	// (0x00086754) input_focus_pane_cp08_ParamLimits

0xb939,	// (0x00086761) popup_vitu2_query_button_pane_ParamLimits

0xb939,	// (0x00086761) popup_vitu2_query_button_pane

0xb90e,	// (0x00086736) popup_vitu2_query_input_button_pane

0xef13,	// (0x00089d3b) popup_vitu2_query_window_g1_ParamLimits

0xb94a,	// (0x00086772) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0008a872) popup_vitu2_query_window_g_ParamLimits

0xde52,	// (0x00088c7a) bg_button_pane_cp026

0xbf61,	// (0x00086d89) popup_vitu2_query_input_button_pane_g1

0xde52,	// (0x00088c7a) bg_button_pane_cp025

0x287b,	// (0x0007d6a3) popup_vitu2_query_button_pane_t1

0x91af,	// (0x00083fd7) main_mp3_pane_t6

0x91c7,	// (0x00083fef) popup_slider_window_cp01

0xac5e,	// (0x00085a86) cam4_battery_pane

0xad4b,	// (0x00085b73) cam4_battery_pane_cp02

0xbd00,	// (0x00086b28) cam4_battery_pane_cp01

0xbd00,	// (0x00086b28) cam4_battery_pane_cp03

0xeb60,	// (0x00089988) cam4_battery_pane_g1

0x8e66,	// (0x00083c8e) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0008a970) cam4_battery_pane_g

0x8c6f,	// (0x00083a97) popup_blid_sat_info2_window_t11

0x7442,	// (0x0008226a) aid_size_touch_mv_arrow_left_ParamLimits

0x746d,	// (0x00082295) aid_size_touch_mv_arrow_right_ParamLimits

0x0ddd,	// (0x0007bc05) navi_pane_g1_ParamLimits

0x7496,	// (0x000822be) navi_pane_g2_ParamLimits

0x74c4,	// (0x000822ec) navi_pane_g3_ParamLimits

0xf418,	// (0x0008a240) navi_pane_g_ParamLimits

0x751e,	// (0x00082346) navi_pane_mv_t1_ParamLimits

0x9e35,	// (0x00084c5d) grid_imed_effect_pane_ParamLimits

0xe87d,	// (0x000896a5) aid_placing_vt_slider_lsc

0xe885,	// (0x000896ad) aid_placing_vt_slider_prt

0x0561,	// (0x0007b389) bg_tb_trans_pane_cp01_ParamLimits

0x901d,	// (0x00083e45) popup_image_details_window_g1_ParamLimits

0x9030,	// (0x00083e58) popup_image_details_window_g2_ParamLimits

0x9045,	// (0x00083e6d) popup_image_details_window_g3_ParamLimits

0x9045,	// (0x00083e6d) popup_image_details_window_g3

0xf74b,	// (0x0008a573) popup_image_details_window_g_ParamLimits

0x9059,	// (0x00083e81) popup_image_details_window_t1_ParamLimits

0x906b,	// (0x00083e93) popup_image_details_window_t2_ParamLimits

0x9084,	// (0x00083eac) popup_image_details_window_t3_ParamLimits

0x9098,	// (0x00083ec0) popup_image_details_window_t4_ParamLimits

0x90b3,	// (0x00083edb) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0008a57a) popup_image_details_window_t_ParamLimits

0xbc17,	// (0x00086a3f) cl_header_name_pane_ParamLimits

0xbc17,	// (0x00086a3f) cl_header_name_pane

0xbf69,	// (0x00086d91) cl_header_name_pane_t1_ParamLimits

0xbf69,	// (0x00086d91) cl_header_name_pane_t1

0xbf80,	// (0x00086da8) cl_header_name_pane_t2_ParamLimits

0xbf80,	// (0x00086da8) cl_header_name_pane_t2

0xbfaa,	// (0x00086dd2) cl_header_name_pane_t3_ParamLimits

0xbfaa,	// (0x00086dd2) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0008a975) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0008a975) cl_header_name_pane_t

0x74ef,	// (0x00082317) navi_pane_mv_g2_ParamLimits

0xec82,	// (0x00089aaa) field_vitu2_entry_pane_g1_ParamLimits

0xec8e,	// (0x00089ab6) field_vitu2_entry_pane_g2_ParamLimits

0xec9a,	// (0x00089ac2) field_vitu2_entry_pane_g3_ParamLimits

0xec9a,	// (0x00089ac2) field_vitu2_entry_pane_g3

0xf949,	// (0x0008a771) field_vitu2_entry_pane_g_ParamLimits

0xafac,	// (0x00085dd4) cell_vitu2_itu_pane_g1_ParamLimits

0xafbc,	// (0x00085de4) cell_vitu2_itu_pane_g2_ParamLimits

0xafbc,	// (0x00085de4) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0008a77d) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0008a77d) cell_vitu2_itu_pane_g

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp05_ParamLimits

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp05

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp03

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp04

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp10_ParamLimits

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp10

0xbbb9,	// (0x000869e1) bg_vkb2_func_pane_cp08

0xbb9f,	// (0x000869c7) bg_vkb2_func_pane_cp06

0xbbad,	// (0x000869d5) bg_vkb2_func_pane_cp07

0x2789,	// (0x0007d5b1) bg_vkb2_func_pane_cp11_ParamLimits

0x2789,	// (0x0007d5b1) bg_vkb2_func_pane_cp11

0x279e,	// (0x0007d5c6) bg_vkb2_func_pane_cp12_ParamLimits

0x279e,	// (0x0007d5c6) bg_vkb2_func_pane_cp12

0xde52,	// (0x00088c7a) bg_vkb2_func_pane_cp09

0xecba,	// (0x00089ae2) bg_vkb2_func_pane_g1

0xea45,	// (0x0008986d) bg_vkb2_func_pane_g2

0xecc2,	// (0x00089aea) bg_vkb2_func_pane_g3

0xecca,	// (0x00089af2) bg_vkb2_func_pane_g4

0xeed6,	// (0x00089cfe) bg_vkb2_func_pane_g5

0xece2,	// (0x00089b0a) bg_vkb2_func_pane_g6

0xecea,	// (0x00089b12) bg_vkb2_func_pane_g7

0xecda,	// (0x00089b02) bg_vkb2_func_pane_g8

0xea25,	// (0x0008984d) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0008a97c) bg_vkb2_func_pane_g

0xbeb6,	// (0x00086cde) blid2_tripm_pane_g6_ParamLimits

0xbeb6,	// (0x00086cde) blid2_tripm_pane_g6

0xeb1a,	// (0x00089942) mp4_progress_pane_g1

0xbf12,	// (0x00086d3a) blid2_tripm_values_pane_ParamLimits

0xbf12,	// (0x00086d3a) blid2_tripm_values_pane

0xbfcf,	// (0x00086df7) blid2_tripm_values_pane_t1

0xbfdd,	// (0x00086e05) blid2_tripm_values_pane_t2

0xbfeb,	// (0x00086e13) blid2_tripm_values_pane_t3

0xbff9,	// (0x00086e21) blid2_tripm_values_pane_t4

0xc007,	// (0x00086e2f) blid2_tripm_values_pane_t5

0xc015,	// (0x00086e3d) blid2_tripm_values_pane_t6

0xc023,	// (0x00086e4b) blid2_tripm_values_pane_t7

0xc031,	// (0x00086e59) blid2_tripm_values_pane_t8

0xc03f,	// (0x00086e67) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0008a98f) blid2_tripm_values_pane_t

0x6250,	// (0x00081078) call_video_pane_t1_ParamLimits

0x6269,	// (0x00081091) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0008a0c9) call_video_pane_t_ParamLimits

0x7a52,	// (0x0008287a) msg_header_pane_g1_ParamLimits

0x1018,	// (0x0007be40) msg_header_pane_g2_ParamLimits

0x1018,	// (0x0007be40) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0008a2e3) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0008a2e3) msg_header_pane_g

0xe62d,	// (0x00089455) main_clock2_pane_ParamLimits

0x9b48,	// (0x00084970) grid_clock2_toolbar_pane_ParamLimits

0x9b48,	// (0x00084970) grid_clock2_toolbar_pane

0x9b48,	// (0x00084970) listscroll_clock2_pane_ParamLimits

0x9b48,	// (0x00084970) listscroll_clock2_pane

0x9bf6,	// (0x00084a1e) main_clock2_pane_t3_ParamLimits

0x9bf6,	// (0x00084a1e) main_clock2_pane_t3

0x9c08,	// (0x00084a30) main_clock2_pane_t4_ParamLimits

0x9c08,	// (0x00084a30) main_clock2_pane_t4

0x2889,	// (0x0007d6b1) cell_clock2_toolbar_pane

0x2891,	// (0x0007d6b9) cell_clock2_toolbar_pane_cp01

0x2891,	// (0x0007d6b9) cell_clock2_toolbar_pane_cp02

0x2899,	// (0x0007d6c1) cell_clock2_toolbar_pane_cp03

0x28a1,	// (0x0007d6c9) list_clock2_pane

0x0d30,	// (0x0007bb58) scroll_pane_cp10

0x28a9,	// (0x0007d6d1) list_single_clock2_pane_ParamLimits

0x28a9,	// (0x0007d6d1) list_single_clock2_pane

0x0e7d,	// (0x0007bca5) list_highlight_pane_cp08

0x28b6,	// (0x0007d6de) list_single_clock2_pane_t1

0x28c4,	// (0x0007d6ec) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0008a9a2) list_single_clock2_pane_t

0xde52,	// (0x00088c7a) bg_button_pane_cp10

0x28d2,	// (0x0007d6fa) cell_clock2_toolbar_pane_g1

0x7af3,	// (0x0008291b) aid_main_viewer_pane_g1_ParamLimits

0x7af3,	// (0x0008291b) aid_main_viewer_pane_g1

0x7aff,	// (0x00082927) aid_main_viewer_pane_g2_ParamLimits

0x7aff,	// (0x00082927) aid_main_viewer_pane_g2

0x7b0b,	// (0x00082933) aid_main_viewer_pane_g3_ParamLimits

0x7b0b,	// (0x00082933) aid_main_viewer_pane_g3

0x7b1c,	// (0x00082944) aid_main_viewer_pane_g4_ParamLimits

0x7b1c,	// (0x00082944) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0008a2f4) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0008a2f4) aid_main_viewer_pane_g

0x82b4,	// (0x000830dc) main_calc_pane_ParamLimits

0x82c1,	// (0x000830e9) main_dialer2_pane_ParamLimits

0xde52,	// (0x00088c7a) main_cam6_pane

0xde52,	// (0x00088c7a) main_vid6_pane

0x9b54,	// (0x0008497c) listscroll_gen_pane_cp06_ParamLimits

0x9b54,	// (0x0008497c) listscroll_gen_pane_cp06

0x9c1a,	// (0x00084a42) main_clock2_pane_t5_ParamLimits

0x9c1a,	// (0x00084a42) main_clock2_pane_t5

0x9c69,	// (0x00084a91) aid_call2_pane_cp10_ParamLimits

0x9c7b,	// (0x00084aa3) aid_call_pane_cp10_ParamLimits

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9c8d,	// (0x00084ab5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9c8d,	// (0x00084ab5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0db2,	// (0x0007bbda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0008a62a) popup_clock_analogue_window_cp10_g_ParamLimits

0x9ca3,	// (0x00084acb) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa8d6,	// (0x000856fe) cell_dialer2_keypad_pane_g2_ParamLimits

0xa8d6,	// (0x000856fe) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0008a710) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0008a710) cell_dialer2_keypad_pane_g

0xa8f2,	// (0x0008571a) cell_dialer2_keypad_pane_t1

0xb2e2,	// (0x0008610a) main_cset_text2_pane_ParamLimits

0xb2e2,	// (0x0008610a) main_cset_text2_pane

0xf0ef,	// (0x00089f17) area_vitu2_query_pane_g1_ParamLimits

0xbb3e,	// (0x00086966) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0008a8bf) area_vitu2_query_pane_g_ParamLimits

0x2687,	// (0x0007d4af) area_vitu2_query_pane_t7_ParamLimits

0x2687,	// (0x0007d4af) area_vitu2_query_pane_t7

0xbb9f,	// (0x000869c7) bg_button_pane_cp018_ParamLimits

0xbbad,	// (0x000869d5) bg_button_pane_cp021_ParamLimits

0xbbb9,	// (0x000869e1) bg_button_pane_cp022_ParamLimits

0xbbb9,	// (0x000869e1) bg_vkb2_func_pane_cp08_ParamLimits

0xbb9f,	// (0x000869c7) bg_vkb2_func_pane_cp06_ParamLimits

0xbbad,	// (0x000869d5) bg_vkb2_func_pane_cp07_ParamLimits

0xbbca,	// (0x000869f2) input_focus_pane_cp09_ParamLimits

0xc04d,	// (0x00086e75) cam6_autofocus_pane_ParamLimits

0xc04d,	// (0x00086e75) cam6_autofocus_pane

0xc06f,	// (0x00086e97) cam6_image_uncrop_pane_ParamLimits

0xc06f,	// (0x00086e97) cam6_image_uncrop_pane

0xc09c,	// (0x00086ec4) cam6_indi_pane_ParamLimits

0xc09c,	// (0x00086ec4) cam6_indi_pane

0xc0b6,	// (0x00086ede) cam6_mode_pane_ParamLimits

0xc0b6,	// (0x00086ede) cam6_mode_pane

0xc0ca,	// (0x00086ef2) cam6_timer_pane_ParamLimits

0xc0ca,	// (0x00086ef2) cam6_timer_pane

0xc0d6,	// (0x00086efe) cam6_zoom_pane_ParamLimits

0xc0d6,	// (0x00086efe) cam6_zoom_pane

0xc0ee,	// (0x00086f16) cam6_mode_pane_g1_ParamLimits

0xc0ee,	// (0x00086f16) cam6_mode_pane_g1

0xc0fa,	// (0x00086f22) cam6_mode_pane_g2_ParamLimits

0xc0fa,	// (0x00086f22) cam6_mode_pane_g2

0xc106,	// (0x00086f2e) cam6_mode_pane_g3_ParamLimits

0xc106,	// (0x00086f2e) cam6_mode_pane_g3

0xc112,	// (0x00086f3a) cam6_mode_pane_g4_ParamLimits

0xc112,	// (0x00086f3a) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0008a9a7) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0008a9a7) cam6_mode_pane_g

0x28da,	// (0x0007d702) bg_tb_trans_pane_cp08_ParamLimits

0x28da,	// (0x0007d702) bg_tb_trans_pane_cp08

0x28e8,	// (0x0007d710) cam6_battery_pane_ParamLimits

0x28e8,	// (0x0007d710) cam6_battery_pane

0x28fe,	// (0x0007d726) cam6_indi_pane_g1_ParamLimits

0x28fe,	// (0x0007d726) cam6_indi_pane_g1

0x2910,	// (0x0007d738) cam6_indi_pane_g2_ParamLimits

0x2910,	// (0x0007d738) cam6_indi_pane_g2

0x2922,	// (0x0007d74a) cam6_indi_pane_g3_ParamLimits

0x2922,	// (0x0007d74a) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0008a9b0) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0008a9b0) cam6_indi_pane_g

0x2934,	// (0x0007d75c) cam6_indi_pane_t1_ParamLimits

0x2934,	// (0x0007d75c) cam6_indi_pane_t1

0xadb2,	// (0x00085bda) cam6_autofocus_pane_g1

0xadaa,	// (0x00085bd2) cam6_autofocus_pane_g2

0xadc2,	// (0x00085bea) cam6_autofocus_pane_g3

0xadba,	// (0x00085be2) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0008a9b7) cam6_autofocus_pane_g

0x295a,	// (0x0007d782) cam6_timer_pane_g1

0x2962,	// (0x0007d78a) cam6_timer_pane_t1

0x2970,	// (0x0007d798) cam6_zoom_cont_pane

0x2978,	// (0x0007d7a0) cam6_zoom_pane_g1

0x2980,	// (0x0007d7a8) cam6_zoom_pane_g2

0xc11e,	// (0x00086f46) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0008a9c0) cam6_zoom_pane_g

0x8e66,	// (0x00083c8e) cam6_battery_pane_g1

0x8e66,	// (0x00083c8e) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0008a537) cam6_battery_pane_g

0x2988,	// (0x0007d7b0) cam6_zoom_cont_pane_g1

0x2991,	// (0x0007d7b9) cam6_zoom_cont_pane_g2

0x299a,	// (0x0007d7c2) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0008a9c7) cam6_zoom_cont_pane_g

0xc138,	// (0x00086f60) cam6_mode_pane_cp_ParamLimits

0xc138,	// (0x00086f60) cam6_mode_pane_cp

0xc14c,	// (0x00086f74) cam6_zoom_pane_cp_ParamLimits

0xc14c,	// (0x00086f74) cam6_zoom_pane_cp

0xc164,	// (0x00086f8c) vid6_image_uncrop_cif_pane_ParamLimits

0xc164,	// (0x00086f8c) vid6_image_uncrop_cif_pane

0xc190,	// (0x00086fb8) vid6_image_uncrop_nhd_pane_ParamLimits

0xc190,	// (0x00086fb8) vid6_image_uncrop_nhd_pane

0xc1ad,	// (0x00086fd5) vid6_image_uncrop_vga_pane_ParamLimits

0xc1ad,	// (0x00086fd5) vid6_image_uncrop_vga_pane

0xc1cc,	// (0x00086ff4) vid6_image_uncrop_wvga_pane_ParamLimits

0xc1cc,	// (0x00086ff4) vid6_image_uncrop_wvga_pane

0xc1e9,	// (0x00087011) vid6_indi_pane_ParamLimits

0xc1e9,	// (0x00087011) vid6_indi_pane

0x28da,	// (0x0007d702) bg_tb_trans_pane_cp09_ParamLimits

0x28da,	// (0x0007d702) bg_tb_trans_pane_cp09

0x29b2,	// (0x0007d7da) cam6_battery_pane_cp_ParamLimits

0x29b2,	// (0x0007d7da) cam6_battery_pane_cp

0x29be,	// (0x0007d7e6) vid6_indi_pane_g1_ParamLimits

0x29be,	// (0x0007d7e6) vid6_indi_pane_g1

0x29d0,	// (0x0007d7f8) vid6_indi_pane_g2_ParamLimits

0x29d0,	// (0x0007d7f8) vid6_indi_pane_g2

0x29e2,	// (0x0007d80a) vid6_indi_pane_g3_ParamLimits

0x29e2,	// (0x0007d80a) vid6_indi_pane_g3

0x29f7,	// (0x0007d81f) vid6_indi_pane_g4_ParamLimits

0x29f7,	// (0x0007d81f) vid6_indi_pane_g4

0x2a0c,	// (0x0007d834) vid6_indi_pane_g5_ParamLimits

0x2a0c,	// (0x0007d834) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0008a9ce) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0008a9ce) vid6_indi_pane_g

0x2a26,	// (0x0007d84e) vid6_indi_pane_t1_ParamLimits

0x2a26,	// (0x0007d84e) vid6_indi_pane_t1

0x2a3c,	// (0x0007d864) vid6_indi_pane_t2_ParamLimits

0x2a3c,	// (0x0007d864) vid6_indi_pane_t2

0x2a64,	// (0x0007d88c) vid6_indi_pane_t3_ParamLimits

0x2a64,	// (0x0007d88c) vid6_indi_pane_t3

0x2a8c,	// (0x0007d8b4) vid6_indi_pane_t4_ParamLimits

0x2a8c,	// (0x0007d8b4) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0008a9d9) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0008a9d9) vid6_indi_pane_t

0x2ab0,	// (0x0007d8d8) wait_bar_pane_cp08

0xc20c,	// (0x00087034) main_cset_text2_pane_t1_ParamLimits

0xc20c,	// (0x00087034) main_cset_text2_pane_t1

0xc126,	// (0x00086f4e) listscroll_gen_pane_cp06_t1_ParamLimits

0xc126,	// (0x00086f4e) listscroll_gen_pane_cp06_t1

0xde52,	// (0x00088c7a) main_cam6_set_pane

0xac50,	// (0x00085a78) bg_tb_trans_pane_cp06_ParamLimits

0xac66,	// (0x00085a8e) cam4_indicators_pane_g1_ParamLimits

0xac77,	// (0x00085a9f) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0008a74d) cam4_indicators_pane_g_ParamLimits

0xac95,	// (0x00085abd) cam4_indicators_pane_t1_ParamLimits

0xad3d,	// (0x00085b65) bg_tb_trans_pane_cp07_ParamLimits

0xac66,	// (0x00085a8e) vid4_indicators_pane_g1_ParamLimits

0xad53,	// (0x00085b7b) vid4_indicators_pane_g2_ParamLimits

0xad64,	// (0x00085b8c) vid4_indicators_pane_g3_ParamLimits

0xad75,	// (0x00085b9d) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0008a75f) vid4_indicators_pane_g_ParamLimits

0xad91,	// (0x00085bb9) vid4_indicators_pane_t1_ParamLimits

0xbd08,	// (0x00086b30) vid4_progress_pane_g1_ParamLimits

0xbd18,	// (0x00086b40) vid4_progress_pane_g2_ParamLimits

0x094e,	// (0x0007b776) vid4_progress_pane_g3_ParamLimits

0xac77,	// (0x00085a9f) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0008a90a) vid4_progress_pane_g_ParamLimits

0xbd28,	// (0x00086b50) vid4_progress_pane_t1_ParamLimits

0xbd3d,	// (0x00086b65) vid4_progress_pane_t2_ParamLimits

0xbd53,	// (0x00086b7b) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0008a915) vid4_progress_pane_t_ParamLimits

0xbd68,	// (0x00086b90) wait_bar_pane_cp07_ParamLimits

0xc24a,	// (0x00087072) main_cam6_set_pane_g2_ParamLimits

0xc24a,	// (0x00087072) main_cam6_set_pane_g2

0xc256,	// (0x0008707e) main_cset6_listscroll_pane_ParamLimits

0xc256,	// (0x0008707e) main_cset6_listscroll_pane

0xc281,	// (0x000870a9) main_cset6_slider_pane_ParamLimits

0xc281,	// (0x000870a9) main_cset6_slider_pane

0xc28d,	// (0x000870b5) main_cset6_text2_pane_ParamLimits

0xc28d,	// (0x000870b5) main_cset6_text2_pane

0x2abf,	// (0x0007d8e7) main_cset6_text_pane

0x2ac7,	// (0x0007d8ef) main_cset_list_pane_copy1_ParamLimits

0x2ac7,	// (0x0007d8ef) main_cset_list_pane_copy1

0x2ad7,	// (0x0007d8ff) scroll_pane_cp028_copy1

0xc2a0,	// (0x000870c8) cset_list_set_pane_copy1

0xc2ba,	// (0x000870e2) aid_position_infowindow_above_copy1

0xc2c2,	// (0x000870ea) aid_position_infowindow_below_copy1

0x43de,	// (0x0007f206) cset_list_set_pane_g1_copy1

0xb5ea,	// (0x00086412) cset_list_set_pane_g3_copy1_ParamLimits

0xb5ea,	// (0x00086412) cset_list_set_pane_g3_copy1

0xb5f9,	// (0x00086421) cset_list_set_pane_t1_copy1_ParamLimits

0xb5f9,	// (0x00086421) cset_list_set_pane_t1_copy1

0x0561,	// (0x0007b389) list_highlight_pane_cp021_copy1_ParamLimits

0x0561,	// (0x0007b389) list_highlight_pane_cp021_copy1

0x2ae0,	// (0x0007d908) cset6_slider_pane_ParamLimits

0x2ae0,	// (0x0007d908) cset6_slider_pane

0x2b0c,	// (0x0007d934) main_cset6_slider_pane_g1_ParamLimits

0x2b0c,	// (0x0007d934) main_cset6_slider_pane_g1

0xc2ca,	// (0x000870f2) main_cset6_slider_pane_g2_ParamLimits

0xc2ca,	// (0x000870f2) main_cset6_slider_pane_g2

0xede9,	// (0x00089c11) main_cset6_slider_pane_g3_ParamLimits

0xede9,	// (0x00089c11) main_cset6_slider_pane_g3

0xc2f2,	// (0x0008711a) main_cset6_slider_pane_g4_ParamLimits

0xc2f2,	// (0x0008711a) main_cset6_slider_pane_g4

0xc2fe,	// (0x00087126) main_cset6_slider_pane_g5_ParamLimits

0xc2fe,	// (0x00087126) main_cset6_slider_pane_g5

0xede9,	// (0x00089c11) main_cset6_slider_pane_g7_ParamLimits

0xede9,	// (0x00089c11) main_cset6_slider_pane_g7

0xedf5,	// (0x00089c1d) main_cset6_slider_pane_g8_ParamLimits

0xedf5,	// (0x00089c1d) main_cset6_slider_pane_g8

0xc30c,	// (0x00087134) main_cset6_slider_pane_g9_ParamLimits

0xc30c,	// (0x00087134) main_cset6_slider_pane_g9

0xc318,	// (0x00087140) main_cset6_slider_pane_g10_ParamLimits

0xc318,	// (0x00087140) main_cset6_slider_pane_g10

0xc2f2,	// (0x0008711a) main_cset6_slider_pane_g11_ParamLimits

0xc2f2,	// (0x0008711a) main_cset6_slider_pane_g11

0xc324,	// (0x0008714c) main_cset6_slider_pane_g12_ParamLimits

0xc324,	// (0x0008714c) main_cset6_slider_pane_g12

0xc330,	// (0x00087158) main_cset6_slider_pane_g13_ParamLimits

0xc330,	// (0x00087158) main_cset6_slider_pane_g13

0xc33e,	// (0x00087166) main_cset6_slider_pane_g14_ParamLimits

0xc33e,	// (0x00087166) main_cset6_slider_pane_g14

0xc34c,	// (0x00087174) main_cset6_slider_pane_g15_ParamLimits

0xc34c,	// (0x00087174) main_cset6_slider_pane_g15

0xc2fe,	// (0x00087126) main_cset6_slider_pane_g16_ParamLimits

0xc2fe,	// (0x00087126) main_cset6_slider_pane_g16

0xc364,	// (0x0008718c) main_cset6_slider_pane_g17_ParamLimits

0xc364,	// (0x0008718c) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0008a9e2) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0008a9e2) main_cset6_slider_pane_g

0x2b34,	// (0x0007d95c) main_cset6_slider_pane_t1_ParamLimits

0x2b34,	// (0x0007d95c) main_cset6_slider_pane_t1

0xc372,	// (0x0008719a) main_cset6_slider_pane_t2_ParamLimits

0xc372,	// (0x0008719a) main_cset6_slider_pane_t2

0xc39d,	// (0x000871c5) main_cset6_slider_pane_t3_ParamLimits

0xc39d,	// (0x000871c5) main_cset6_slider_pane_t3

0xc3c8,	// (0x000871f0) main_cset6_slider_pane_t4_ParamLimits

0xc3c8,	// (0x000871f0) main_cset6_slider_pane_t4

0xc3f5,	// (0x0008721d) main_cset6_slider_pane_t5_ParamLimits

0xc3f5,	// (0x0008721d) main_cset6_slider_pane_t5

0x2b75,	// (0x0007d99d) main_cset6_slider_pane_t7_ParamLimits

0x2b75,	// (0x0007d99d) main_cset6_slider_pane_t7

0xc422,	// (0x0008724a) main_cset6_slider_pane_t8_ParamLimits

0xc422,	// (0x0008724a) main_cset6_slider_pane_t8

0xc446,	// (0x0008726e) main_cset6_slider_pane_t9_ParamLimits

0xc446,	// (0x0008726e) main_cset6_slider_pane_t9

0xc46a,	// (0x00087292) main_cset6_slider_pane_t10_ParamLimits

0xc46a,	// (0x00087292) main_cset6_slider_pane_t10

0xc48e,	// (0x000872b6) main_cset6_slider_pane_t11_ParamLimits

0xc48e,	// (0x000872b6) main_cset6_slider_pane_t11

0x2bab,	// (0x0007d9d3) main_cset6_slider_pane_t14_ParamLimits

0x2bab,	// (0x0007d9d3) main_cset6_slider_pane_t14

0x2be4,	// (0x0007da0c) main_cset6_slider_pane_t15_ParamLimits

0x2be4,	// (0x0007da0c) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0008aa07) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0008aa07) main_cset6_slider_pane_t

0x25ce,	// (0x0007d3f6) cset_slider_pane_g1_copy1

0x25d7,	// (0x0007d3ff) cset_slider_pane_g2_copy1

0x25e0,	// (0x0007d408) cset_slider_pane_g3_copy1

0xde52,	// (0x00088c7a) bg_popup_sub_pane_cp011_copy1

0xef1f,	// (0x00089d47) main_cset_text_pane_g1_copy1

0xef27,	// (0x00089d4f) main_cset_text_pane_t1_copy1

0xef35,	// (0x00089d5d) main_cset_text_pane_t2_copy1

0xef43,	// (0x00089d6b) main_cset_text_pane_t3_copy1

0xef51,	// (0x00089d79) main_cset_text_pane_t4_copy1

0xef5f,	// (0x00089d87) main_cset_text_pane_t5_copy1

0xef6d,	// (0x00089d95) main_cset_text_pane_t6_copy1

0xef7b,	// (0x00089da3) main_cset_text_pane_t7_copy1

0xc4b4,	// (0x000872dc) main_cset_text2_pane_t1_copy1

0xde52,	// (0x00088c7a) main_ncimui_pane

0x8300,	// (0x00083128) popup_query_ncimui_window_ParamLimits

0x8300,	// (0x00083128) popup_query_ncimui_window

0x3fe8,	// (0x0007ee10) field_cale_ev2_pane_g4_ParamLimits

0x3fe8,	// (0x0007ee10) field_cale_ev2_pane_g4

0xa5f4,	// (0x0008541c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa5f4,	// (0x0008541c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0008a6eb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0008a6eb) cell_video_dialer_keypad_pane_g

0xa60c,	// (0x00085434) cell_video_dialer_keypad_pane_t1

0xde52,	// (0x00088c7a) bg_popup_window_pane_cp012

0x0c00,	// (0x0007ba28) heading_pane_cp06

0x2d0c,	// (0x0007db34) ncim_query_content_pane

0xde52,	// (0x00088c7a) bg_popup_heading_pane_cp01

0x2d14,	// (0x0007db3c) ncim_heading_pane_t1

0x2d22,	// (0x0007db4a) ncim_indicator_popup_pane

0x2d34,	// (0x0007db5c) ncim_query_button_pane

0x2d48,	// (0x0007db70) ncim_query_content_pane_t1

0x2d5a,	// (0x0007db82) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0008aa46) ncim_query_content_pane_t

0x2d94,	// (0x0007dbbc) ncim_query_list_pane

0x2da6,	// (0x0007dbce) ncim_query_popup_pane

0x2d22,	// (0x0007db4a) ncim_indicator_popup_pane_ParamLimits

0xc5af,	// (0x000873d7) ncim_query_content_pane_g1_ParamLimits

0xc5af,	// (0x000873d7) ncim_query_content_pane_g1

0x2d48,	// (0x0007db70) ncim_query_content_pane_t1_ParamLimits

0x2d5a,	// (0x0007db82) ncim_query_content_pane_t2_ParamLimits

0xc5bb,	// (0x000873e3) ncim_query_content_pane_t3_ParamLimits

0xc5bb,	// (0x000873e3) ncim_query_content_pane_t3

0xc5d8,	// (0x00087400) ncim_query_content_pane_t4_ParamLimits

0xc5d8,	// (0x00087400) ncim_query_content_pane_t4

0xc5f5,	// (0x0008741d) ncim_query_content_pane_t5_ParamLimits

0xc5f5,	// (0x0008741d) ncim_query_content_pane_t5

0x2d6c,	// (0x0007db94) ncim_query_content_pane_t6_ParamLimits

0x2d6c,	// (0x0007db94) ncim_query_content_pane_t6

0xfc1e,	// (0x0008aa46) ncim_query_content_pane_t_ParamLimits

0x2d94,	// (0x0007dbbc) ncim_query_list_pane_ParamLimits

0x2da6,	// (0x0007dbce) ncim_query_popup_pane_ParamLimits

0x2dba,	// (0x0007dbe2) wait_bar_pane_cp04

0xde52,	// (0x00088c7a) input_focus_pane_cp011

0x2dc2,	// (0x0007dbea) ncim_query_popup_pane_t1

0x2dd0,	// (0x0007dbf8) ncim_list_query_list_pane_ParamLimits

0x2dd0,	// (0x0007dbf8) ncim_list_query_list_pane

0xde52,	// (0x00088c7a) bg_button_pane_cp027

0x2de3,	// (0x0007dc0b) ncim_query_button_pane_g1

0xde52,	// (0x00088c7a) list_highlight_pane_cp012

0x2ded,	// (0x0007dc15) ncim_list_query_list_pane_g1

0x2df5,	// (0x0007dc1d) ncim_list_query_list_pane_t1

0xac86,	// (0x00085aae) cam4_indicators_pane_g3_ParamLimits

0xac86,	// (0x00085aae) cam4_indicators_pane_g3

0xad81,	// (0x00085ba9) vid4_indicators_pane_g5_ParamLimits

0xad81,	// (0x00085ba9) vid4_indicators_pane_g5

0xac86,	// (0x00085aae) vid4_progress_pane_g5_ParamLimits

0xac86,	// (0x00085aae) vid4_progress_pane_g5

0xc4f7,	// (0x0008731f) main_ncimui_pane_g1

0xc53d,	// (0x00087365) ncimui_group_query_pane_ParamLimits

0xc53d,	// (0x00087365) ncimui_group_query_pane

0xc571,	// (0x00087399) ncimui_list_pane_ParamLimits

0xc571,	// (0x00087399) ncimui_list_pane

0xc58b,	// (0x000873b3) ncimui_text_pane_ParamLimits

0xc58b,	// (0x000873b3) ncimui_text_pane

0xc612,	// (0x0008743a) ncimui_text_pane_t1_ParamLimits

0xc612,	// (0x0008743a) ncimui_text_pane_t1

0x2e03,	// (0x0007dc2b) ncimui_list_single_graphic_pane_ParamLimits

0x2e03,	// (0x0007dc2b) ncimui_list_single_graphic_pane

0xc631,	// (0x00087459) ncimui_query_pane_ParamLimits

0xc631,	// (0x00087459) ncimui_query_pane

0xde52,	// (0x00088c7a) list_highlight_pane_cp013

0x2e13,	// (0x0007dc3b) ncim_list_query_list_pane_t1_copy1

0x2ded,	// (0x0007dc15) ncim_list_single_graphic_pane_g1

0x2e21,	// (0x0007dc49) ncim_query_button_pane_cp01

0x2e29,	// (0x0007dc51) ncim_query_entry_pane_ParamLimits

0x2e29,	// (0x0007dc51) ncim_query_entry_pane

0x2e39,	// (0x0007dc61) ncimui_query_pane_g1

0x2e41,	// (0x0007dc69) ncimui_query_pane_t1_ParamLimits

0x2e41,	// (0x0007dc69) ncimui_query_pane_t1

0xde52,	// (0x00088c7a) input_focus_pane_cp012

0x2dc2,	// (0x0007dbea) ncim_query_entry_pane_t1

0xe62d,	// (0x00089455) main_im_pane_ParamLimits

0x0561,	// (0x0007b389) main_mobtv_pane_ParamLimits

0x0561,	// (0x0007b389) main_mobtv_pane

0xc30c,	// (0x00087134) main_cset6_slider_pane_g18_ParamLimits

0xc30c,	// (0x00087134) main_cset6_slider_pane_g18

0xc330,	// (0x00087158) main_cset6_slider_pane_g19_ParamLimits

0xc330,	// (0x00087158) main_cset6_slider_pane_g19

0xec9a,	// (0x00089ac2) bg_main_mobtv_pane_ParamLimits

0xec9a,	// (0x00089ac2) bg_main_mobtv_pane

0xc641,	// (0x00087469) main_mobtv_info_pane

0xc64c,	// (0x00087474) main_mobtv_loading_pane_ParamLimits

0xc64c,	// (0x00087474) main_mobtv_loading_pane

0x2e65,	// (0x0007dc8d) main_mobtv_pg_channel_list_pane

0x2e6f,	// (0x0007dc97) main_mobtv_pg_hdr_pane

0xc659,	// (0x00087481) main_mobtv_programe_curr_pane_ParamLimits

0xc659,	// (0x00087481) main_mobtv_programe_curr_pane

0xc666,	// (0x0008748e) main_mobtv_programe_next_pane_ParamLimits

0xc666,	// (0x0008748e) main_mobtv_programe_next_pane

0x2e78,	// (0x0007dca0) popup_mobtv_noti_window

0x8e66,	// (0x00083c8e) main_tv_pg_hdr_pane_g1

0x2e80,	// (0x0007dca8) main_tv_pg_hdr_pane_g2

0x2e88,	// (0x0007dcb0) main_tv_pg_hdr_pane_g3

0x2e90,	// (0x0007dcb8) main_tv_pg_hdr_pane_g4

0x2e98,	// (0x0007dcc0) main_tv_pg_hdr_pane_g5

0x2ea2,	// (0x0007dcca) main_tv_pg_hdr_pane_g6

0x2eac,	// (0x0007dcd4) main_tv_pg_hdr_pane_g7

0x2eb6,	// (0x0007dcde) main_tv_pg_hdr_pane_g8

0x2ec0,	// (0x0007dce8) main_tv_pg_hdr_pane_g9

0x2eca,	// (0x0007dcf2) main_tv_pg_hdr_pane_g10

0x2ed4,	// (0x0007dcfc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0008aa53) main_tv_pg_hdr_pane_g

0x2ede,	// (0x0007dd06) main_tv_pg_hdr_pane_t1

0x2eec,	// (0x0007dd14) main_tv_pg_hdr_pane_t2

0x2efa,	// (0x0007dd22) main_tv_pg_hdr_pane_t3

0x2f0a,	// (0x0007dd32) main_tv_pg_hdr_pane_t4

0x2f1a,	// (0x0007dd42) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0008aa6a) main_tv_pg_hdr_pane_t

0x2f2a,	// (0x0007dd52) single_mobtv_pg_channel_pane_ParamLimits

0x2f2a,	// (0x0007dd52) single_mobtv_pg_channel_pane

0x2f3c,	// (0x0007dd64) single_mobtv_pg_channel_table_pane

0x2f45,	// (0x0007dd6d) single_mobtv_pg_channel_thumb_pane

0x2f4e,	// (0x0007dd76) single_tv_pg_channel_pane_g1

0x2f57,	// (0x0007dd7f) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0008aa75) single_tv_pg_channel_pane_g

0x9132,	// (0x00083f5a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9132,	// (0x00083f5a) bg_single_mobtv_pg_channel_thumb_pane

0x2f60,	// (0x0007dd88) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f60,	// (0x0007dd88) single_mobtv_pg_channel_thumb_pane_g1

0x2f6e,	// (0x0007dd96) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f6e,	// (0x0007dd96) single_mobtv_pg_channel_thumb_pane_g2

0x2f7a,	// (0x0007dda2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f7a,	// (0x0007dda2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0008aa7a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0008aa7a) single_mobtv_pg_channel_thumb_pane_g

0x2f86,	// (0x0007ddae) single_mobtv_pg_channel_thumb_pane_t1

0x2f94,	// (0x0007ddbc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0008aa81) single_mobtv_pg_channel_thumb_pane_t

0x8e66,	// (0x00083c8e) bg_single_mobtv_pg_channel_table_pane_g1

0x8e66,	// (0x00083c8e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0008a537) bg_single_mobtv_pg_channel_table_pane_g

0x2fa2,	// (0x0007ddca) single_mobtv_pg_channel_table_pane_t1

0x2fb0,	// (0x0007ddd8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0008aa86) single_mobtv_pg_channel_table_pane_t

0xc67b,	// (0x000874a3) main_mobtv_info_pane_g1_ParamLimits

0xc67b,	// (0x000874a3) main_mobtv_info_pane_g1

0xc697,	// (0x000874bf) main_mobtv_info_pane_t1_ParamLimits

0xc697,	// (0x000874bf) main_mobtv_info_pane_t1

0xc70f,	// (0x00087537) main_mobtv_info_pane_t2_ParamLimits

0xc70f,	// (0x00087537) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0008aa90) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0008aa90) main_mobtv_info_pane_t

0xc79e,	// (0x000875c6) wait_bar_pane_cp05

0xc7b0,	// (0x000875d8) main_mobtv_loading_pane_g1_ParamLimits

0xc7b0,	// (0x000875d8) main_mobtv_loading_pane_g1

0xc7be,	// (0x000875e6) main_mobtv_loading_pane_g2_ParamLimits

0xc7be,	// (0x000875e6) main_mobtv_loading_pane_g2

0xc7ca,	// (0x000875f2) main_mobtv_loading_pane_g3_ParamLimits

0xc7ca,	// (0x000875f2) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0008aa97) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0008aa97) main_mobtv_loading_pane_g

0x2fbe,	// (0x0007dde6) main_mobtv_loading_pane_t1_ParamLimits

0x2fbe,	// (0x0007dde6) main_mobtv_loading_pane_t1

0x2fd6,	// (0x0007ddfe) main_mobtv_loading_pane_t2_ParamLimits

0x2fd6,	// (0x0007ddfe) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0008aa9e) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0008aa9e) main_mobtv_loading_pane_t

0xc7d8,	// (0x00087600) wait_bar_pane_cp06_ParamLimits

0xc7d8,	// (0x00087600) wait_bar_pane_cp06

0x2ffa,	// (0x0007de22) main_mobtv_programe_curr_pane_t1

0x3008,	// (0x0007de30) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0008aaa3) main_mobtv_programe_curr_pane_t

0x3016,	// (0x0007de3e) main_mobtv_programe_next_pane_t1

0x3024,	// (0x0007de4c) main_mobtv_programe_next_pane_t2

0x3032,	// (0x0007de5a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0008aaa8) main_mobtv_programe_next_pane_t

0xde52,	// (0x00088c7a) bg_popup_mobtv_noti_window_pane

0x3040,	// (0x0007de68) popup_mobtv_noti_window_g1

0x3048,	// (0x0007de70) popup_mobtv_noti_window_t1

0x3056,	// (0x0007de7e) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0008aaaf) popup_mobtv_noti_window_t

0x8e66,	// (0x00083c8e) bg_popup_mobtv_noti_window_pane_g1

0xde52,	// (0x00088c7a) sc_clock_pane

0xde52,	// (0x00088c7a) main_fs_bigclock_pane

0xbf00,	// (0x00086d28) blid2_tripm_pane_t4_ParamLimits

0xbf00,	// (0x00086d28) blid2_tripm_pane_t4

0xc7e4,	// (0x0008760c) sc_clock_pane_g1_ParamLimits

0xc7e4,	// (0x0008760c) sc_clock_pane_g1

0xc7f2,	// (0x0008761a) sc_clock_pane_t1_ParamLimits

0xc7f2,	// (0x0008761a) sc_clock_pane_t1

0xc805,	// (0x0008762d) sc_clock_pane_t2_ParamLimits

0xc805,	// (0x0008762d) sc_clock_pane_t2

0xc817,	// (0x0008763f) sc_clock_pane_t3_ParamLimits

0xc817,	// (0x0008763f) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0008aab4) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0008aab4) sc_clock_pane_t

0xd547,	// (0x0008836f) main_fs_bigclock_indicator_pane_ParamLimits

0xd547,	// (0x0008836f) main_fs_bigclock_indicator_pane

0xc89f,	// (0x000876c7) main_fs_bigclock_pane_g1_ParamLimits

0xc89f,	// (0x000876c7) main_fs_bigclock_pane_g1

0xd553,	// (0x0008837b) main_fs_bigclock_pane_t1_ParamLimits

0xd553,	// (0x0008837b) main_fs_bigclock_pane_t1

0xd565,	// (0x0008838d) main_fs_bigclock_pane_t2_ParamLimits

0xd565,	// (0x0008838d) main_fs_bigclock_pane_t2

0xd577,	// (0x0008839f) main_fs_bigclock_pane_t3_ParamLimits

0xd577,	// (0x0008839f) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0008acb3) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0008acb3) main_fs_bigclock_pane_t

0x3c60,	// (0x0007ea88) main_fs_bigclock_indicator_pane_g1

0x2d3c,	// (0x0007db64) ncim_query_content_pane_g2_ParamLimits

0x2d3c,	// (0x0007db64) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0008aa41) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0008aa41) ncim_query_content_pane_g

0xc82b,	// (0x00087653) sc_clock_pane_t4_ParamLimits

0xc82b,	// (0x00087653) sc_clock_pane_t4

0x0561,	// (0x0007b389) main_radioblah_pane

0xec0b,	// (0x00089a33) cell_call4_button_pane_t1_copy1_ParamLimits

0xec0b,	// (0x00089a33) cell_call4_button_pane_t1_copy1

0xc4ff,	// (0x00087327) main_ncimui_pane_t1_ParamLimits

0xc4ff,	// (0x00087327) main_ncimui_pane_t1

0xc511,	// (0x00087339) main_ncimui_pane_t2_ParamLimits

0xc511,	// (0x00087339) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0008aa3a) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0008aa3a) main_ncimui_pane_t

0x3186,	// (0x0007dfae) main_radioblah_anim_pane_ParamLimits

0x3186,	// (0x0007dfae) main_radioblah_anim_pane

0x3197,	// (0x0007dfbf) main_radioblah_info_pane_ParamLimits

0x3197,	// (0x0007dfbf) main_radioblah_info_pane

0x31ab,	// (0x0007dfd3) main_radioblah_pane_t1_ParamLimits

0x31ab,	// (0x0007dfd3) main_radioblah_pane_t1

0x31c7,	// (0x0007dfef) main_radioblah_pane_t2_ParamLimits

0x31c7,	// (0x0007dfef) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0008aad5) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0008aad5) main_radioblah_pane_t

0xc8f1,	// (0x00087719) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc8f1,	// (0x00087719) main_radioblah_rocker_ctrl_pane

0x320f,	// (0x0007e037) main_radioblah_info_pane_t1_ParamLimits

0x320f,	// (0x0007e037) main_radioblah_info_pane_t1

0xc936,	// (0x0008775e) main_radioblah_info_pane_t2_ParamLimits

0xc936,	// (0x0008775e) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0008aade) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0008aade) main_radioblah_info_pane_t

0x8e66,	// (0x00083c8e) main_radioblah_rocker_ctrl_pane_g1

0xc9e6,	// (0x0008780e) main_radioblah_rocker_ctrl_pane_g2

0xc9ee,	// (0x00087816) main_radioblah_rocker_ctrl_pane_g3

0xc9f6,	// (0x0008781e) main_radioblah_rocker_ctrl_pane_g4

0xc9fe,	// (0x00087826) main_radioblah_rocker_ctrl_pane_g5

0xca06,	// (0x0008782e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0008aae7) main_radioblah_rocker_ctrl_pane_g

0xc4b4,	// (0x000872dc) main_cset_text2_pane_t1_copy1_ParamLimits

0xabaf,	// (0x000859d7) cam4_image_uncrop_qvga_pane

0xacfb,	// (0x00085b23) vid4_image_uncrop_qcif_pane

0xc08e,	// (0x00086eb6) cam6_image_uncrop_qvga_pane_ParamLimits

0xc08e,	// (0x00086eb6) cam6_image_uncrop_qvga_pane

0x29a2,	// (0x0007d7ca) vid6_image_uncrop_qcif_pane_ParamLimits

0x29a2,	// (0x0007d7ca) vid6_image_uncrop_qcif_pane

0xde52,	// (0x00088c7a) bg_popup_preview_window_pane_cp03

0x2cee,	// (0x0007db16) list_cset_text2_pane

0x2cf6,	// (0x0007db1e) main_cset6_text2_pane_g1

0x2cfe,	// (0x0007db26) main_cset6_text2_pane_t1

0xca0e,	// (0x00087836) list_cset_text2_pane_t1_ParamLimits

0xca0e,	// (0x00087836) list_cset_text2_pane_t1

0x0561,	// (0x0007b389) main_radioblah_pane_ParamLimits

0xc78a,	// (0x000875b2) main_mobtv_info_pane_t3_ParamLimits

0xc78a,	// (0x000875b2) main_mobtv_info_pane_t3

0xc8df,	// (0x00087707) main_radioblah_pane_g1

0xc90a,	// (0x00087732) main_radioblah_info_pane_g1

0xc98b,	// (0x000877b3) main_radioblah_info_pane_t3_ParamLimits

0xc98b,	// (0x000877b3) main_radioblah_info_pane_t3

0x6ea9,	// (0x00081cd1) highlight_cell_cale_month_pane_ParamLimits

0x6ea9,	// (0x00081cd1) highlight_cell_cale_month_pane

0xde52,	// (0x00088c7a) main_phob_fisheye_pane

0x9967,	// (0x0008478f) scroll_pane_cp0031_ParamLimits

0x9967,	// (0x0008478f) scroll_pane_cp0031

0x2ab0,	// (0x0007d8d8) wait_bar_pane_cp08_ParamLimits

0xc2a0,	// (0x000870c8) cset_list_set_pane_copy1_ParamLimits

0x3249,	// (0x0007e071) highlight_cell_cale_month_pane_g1

0xca39,	// (0x00087861) highlight_cell_cale_month_pane_t1

0x26f3,	// (0x0007d51b) list_gen_pane_cp01

0xedd4,	// (0x00089bfc) scroll_pane_01

0xca47,	// (0x0008786f) list_single_double_fisheye_pane

0xca50,	// (0x00087878) list_double_fisheye_pane_g1_ParamLimits

0xca50,	// (0x00087878) list_double_fisheye_pane_g1

0xca5c,	// (0x00087884) list_double_fisheye_pane_g2_ParamLimits

0xca5c,	// (0x00087884) list_double_fisheye_pane_g2

0xca70,	// (0x00087898) list_double_fisheye_pane_g3_ParamLimits

0xca70,	// (0x00087898) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0008aaf4) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0008aaf4) list_double_fisheye_pane_g

0xca99,	// (0x000878c1) list_double_fisheye_pane_t1_ParamLimits

0xca99,	// (0x000878c1) list_double_fisheye_pane_t1

0xcab4,	// (0x000878dc) list_double_fisheye_pane_t2_ParamLimits

0xcab4,	// (0x000878dc) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0008aaff) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0008aaff) list_double_fisheye_pane_t

0xde52,	// (0x00088c7a) main_call5_pane

0xc851,	// (0x00087679) sc_swipe_pane_ParamLimits

0xc851,	// (0x00087679) sc_swipe_pane

0xcae2,	// (0x0008790a) call5_image_pane_ParamLimits

0xcae2,	// (0x0008790a) call5_image_pane

0xcaf2,	// (0x0008791a) call5_swipe_1_pane_ParamLimits

0xcaf2,	// (0x0008791a) call5_swipe_1_pane

0xcafe,	// (0x00087926) call5_swipe_2_pane_ParamLimits

0xcafe,	// (0x00087926) call5_swipe_2_pane

0xcb18,	// (0x00087940) popup_call5_audio_first_window_ParamLimits

0xcb18,	// (0x00087940) popup_call5_audio_first_window

0x9132,	// (0x00083f5a) call5_swipe_1_pane_g1_ParamLimits

0x9132,	// (0x00083f5a) call5_swipe_1_pane_g1

0x3251,	// (0x0007e079) call5_swipe_1_pane_g2_ParamLimits

0x3251,	// (0x0007e079) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0008ab04) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0008ab04) call5_swipe_1_pane_g

0x325d,	// (0x0007e085) call5_swipe_1_pane_t1_ParamLimits

0x325d,	// (0x0007e085) call5_swipe_1_pane_t1

0x9132,	// (0x00083f5a) call5_swipe_2_pane_g1_ParamLimits

0x9132,	// (0x00083f5a) call5_swipe_2_pane_g1

0x3272,	// (0x0007e09a) call5_swipe_2_pane_g2_ParamLimits

0x3272,	// (0x0007e09a) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0008ab09) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0008ab09) call5_swipe_2_pane_g

0x327e,	// (0x0007e0a6) call5_swipe_2_pane_t1_ParamLimits

0x327e,	// (0x0007e0a6) call5_swipe_2_pane_t1

0x3293,	// (0x0007e0bb) sc_swipe_pane_g1_ParamLimits

0x3293,	// (0x0007e0bb) sc_swipe_pane_g1

0x32a0,	// (0x0007e0c8) sc_swipe_pane_g2_ParamLimits

0x32a0,	// (0x0007e0c8) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0008ab0e) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0008ab0e) sc_swipe_pane_g

0x32ac,	// (0x0007e0d4) sc_swipe_pane_t1_ParamLimits

0x32ac,	// (0x0007e0d4) sc_swipe_pane_t1

0xde52,	// (0x00088c7a) main_cmail_launcher_pane

0xcb26,	// (0x0008794e) aid_size_cell_cmail_l_ParamLimits

0xcb26,	// (0x0008794e) aid_size_cell_cmail_l

0xcb36,	// (0x0008795e) grid_cmail_l_pane_ParamLimits

0xcb36,	// (0x0008795e) grid_cmail_l_pane

0xcb46,	// (0x0008796e) cell_cmail_l_pane_ParamLimits

0xcb46,	// (0x0008796e) cell_cmail_l_pane

0xcb5a,	// (0x00087982) cell_cmail_l_pane_g1_ParamLimits

0xcb5a,	// (0x00087982) cell_cmail_l_pane_g1

0xcb66,	// (0x0008798e) cell_cmail_l_pane_t1_ParamLimits

0xcb66,	// (0x0008798e) cell_cmail_l_pane_t1

0x32c1,	// (0x0007e0e9) cell_cmail_l_pane_t2_ParamLimits

0x32c1,	// (0x0007e0e9) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0008ab13) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0008ab13) cell_cmail_l_pane_t

0x0561,	// (0x0007b389) grid_highlight_pane_cp018_ParamLimits

0x0561,	// (0x0007b389) grid_highlight_pane_cp018

0x5406,	// (0x0008022e) main2_pane_ParamLimits

0x5406,	// (0x0008022e) main2_pane

0xe6d8,	// (0x00089500) popup_sp_fs_action_menu_bg_pane_g1

0xe6e0,	// (0x00089508) popup_sp_fs_action_menu_bg_pane_g2

0xe6e8,	// (0x00089510) popup_sp_fs_action_menu_bg_pane_g3

0xe6f0,	// (0x00089518) popup_sp_fs_action_menu_bg_pane_g4

0xe6f8,	// (0x00089520) popup_sp_fs_action_menu_bg_pane_g5

0xe700,	// (0x00089528) popup_sp_fs_action_menu_bg_pane_g6

0xe708,	// (0x00089530) popup_sp_fs_action_menu_bg_pane_g7

0xe710,	// (0x00089538) popup_sp_fs_action_menu_bg_pane_g8

0xe718,	// (0x00089540) popup_sp_fs_action_menu_bg_pane_g9

0xe720,	// (0x00089548) popup_sp_fs_action_menu_bg_pane_g10

0xe720,	// (0x00089548) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00089fe3) popup_sp_fs_action_menu_bg_pane_g

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g3_g1

0x068d,	// (0x0007b4b5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_t3_g3_g2

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0008a093) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0008a093) list_medium_line_x2_t3_g3_g

0x06a5,	// (0x0007b4cd) list_medium_line_x2_t3_g3_t1_ParamLimits

0x06a5,	// (0x0007b4cd) list_medium_line_x2_t3_g3_t1

0x618b,	// (0x00080fb3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x618b,	// (0x00080fb3) list_medium_line_x2_t3_g3_t2

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0008a09a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0008a09a) list_medium_line_x2_t3_g3_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g2_g1

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0008a0a1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0008a0a1) list_medium_line_x2_t3_g2_g

0x06cf,	// (0x0007b4f7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x06cf,	// (0x0007b4f7) list_medium_line_x2_t3_g2_t1

0x06e5,	// (0x0007b50d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x06e5,	// (0x0007b50d) list_medium_line_x2_t3_g2_t2

0x06f7,	// (0x0007b51f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x06f7,	// (0x0007b51f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0008a0a6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0008a0a6) list_medium_line_x2_t3_g2_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t4_g4_g1

0x0715,	// (0x0007b53d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0715,	// (0x0007b53d) list_medium_line_x2_t4_g4_g2

0x068d,	// (0x0007b4b5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_t4_g4_g3

0x0721,	// (0x0007b549) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0721,	// (0x0007b549) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0008a0ad) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0008a0ad) list_medium_line_x2_t4_g4_g

0x619d,	// (0x00080fc5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x619d,	// (0x00080fc5) list_medium_line_x2_t4_g4_t1

0x61b4,	// (0x00080fdc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x61b4,	// (0x00080fdc) list_medium_line_x2_t4_g4_t2

0x61c9,	// (0x00080ff1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x61c9,	// (0x00080ff1) list_medium_line_x2_t4_g4_t3

0x072d,	// (0x0007b555) list_medium_line_x2_t4_g4_t4_ParamLimits

0x072d,	// (0x0007b555) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0008a0b6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0008a0b6) list_medium_line_x2_t4_g4_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g4_g1

0x0715,	// (0x0007b53d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0715,	// (0x0007b53d) list_medium_line_x2_t2_g4_g2

0x068d,	// (0x0007b4b5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_t2_g4_g3

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0008a11d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0008a11d) list_medium_line_x2_t2_g4_g

0x07b6,	// (0x0007b5de) list_medium_line_x2_t2_g4_t1_ParamLimits

0x07b6,	// (0x0007b5de) list_medium_line_x2_t2_g4_t1

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0008a126) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0008a126) list_medium_line_x2_t2_g4_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g3_g1

0x068d,	// (0x0007b4b5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_t2_g3_g2

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0008a093) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0008a093) list_medium_line_x2_t2_g3_g

0x07cb,	// (0x0007b5f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x07cb,	// (0x0007b5f3) list_medium_line_x2_t2_g3_t1

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0008a12b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0008a12b) list_medium_line_x2_t2_g3_t

0x7125,	// (0x00081f4d) main_sp_fs_list_pane_ParamLimits

0x7125,	// (0x00081f4d) main_sp_fs_list_pane

0x7131,	// (0x00081f59) sp_fs_scroll_pane_ParamLimits

0x7131,	// (0x00081f59) sp_fs_scroll_pane

0x713d,	// (0x00081f65) list_medium_line_x2_t3_t1

0x714d,	// (0x00081f75) list_medium_line_x2_t3_t2

0x09a3,	// (0x0007b7cb) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0008a176) list_medium_line_x2_t3_t

0x715b,	// (0x00081f83) list_medium_line_x3_t4_t1

0x716b,	// (0x00081f93) list_medium_line_x3_t4_t2

0x09b1,	// (0x0007b7d9) list_medium_line_x3_t4_t3

0x09a3,	// (0x0007b7cb) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0008a17d) list_medium_line_x3_t4_t

0x7179,	// (0x00081fa1) list_medium_line_x4_t5_t1

0x7189,	// (0x00081fb1) list_medium_line_x4_t5_t2

0x09b1,	// (0x0007b7d9) list_medium_line_x4_t5_t3

0x09bf,	// (0x0007b7e7) list_medium_line_x4_t5_t4

0x09a3,	// (0x0007b7cb) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0008a186) list_medium_line_x4_t5_t

0x0681,	// (0x0007b4a9) list_medium_line_t4_g4_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_t4_g4_g1

0x0721,	// (0x0007b549) list_medium_line_t4_g4_g2_ParamLimits

0x0721,	// (0x0007b549) list_medium_line_t4_g4_g2

0x09cd,	// (0x0007b7f5) list_medium_line_t4_g4_g3_ParamLimits

0x09cd,	// (0x0007b7f5) list_medium_line_t4_g4_g3

0x0699,	// (0x0007b4c1) list_medium_line_t4_g4_g4_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0008a191) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0008a191) list_medium_line_t4_g4_g

0x09d9,	// (0x0007b801) list_medium_line_t4_g4_t1_ParamLimits

0x09d9,	// (0x0007b801) list_medium_line_t4_g4_t1

0x09ee,	// (0x0007b816) list_medium_line_t4_g4_t2_ParamLimits

0x09ee,	// (0x0007b816) list_medium_line_t4_g4_t2

0x0a04,	// (0x0007b82c) list_medium_line_t4_g4_t3_ParamLimits

0x0a04,	// (0x0007b82c) list_medium_line_t4_g4_t3

0x06ba,	// (0x0007b4e2) list_medium_line_t4_g4_t4_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0008a19a) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0008a19a) list_medium_line_t4_g4_t

0x727e,	// (0x000820a6) chi_dic_find_pane_g1

0x82cf,	// (0x000830f7) main_tport_pane

0x25e9,	// (0x0007d411) list_medium_line_plain_t1

0x25f7,	// (0x0007d41f) list_medium_line_t2_g2_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t2_g2_g1

0x2603,	// (0x0007d42b) list_medium_line_t2_g2_g2_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0008a856) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0008a856) list_medium_line_t2_g2_g

0xb7cd,	// (0x000865f5) list_medium_line_t2_g2_t1_ParamLimits

0xb7cd,	// (0x000865f5) list_medium_line_t2_g2_t1

0xb7e7,	// (0x0008660f) list_medium_line_t2_g2_t2_ParamLimits

0xb7e7,	// (0x0008660f) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0008a85b) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0008a85b) list_medium_line_t2_g2_t

0x26fc,	// (0x0007d524) aid_sp_fs_list_icon_a_sm

0x43c8,	// (0x0007f1f0) aid_sp_fs_list_icon_d

0x2704,	// (0x0007d52c) aid_sp_fs_text_primary

0x270d,	// (0x0007d535) aid_sp_fs_text_secondary

0x2716,	// (0x0007d53e) list_medium_line

0x2716,	// (0x0007d53e) list_medium_line_g2

0x2716,	// (0x0007d53e) list_medium_line_g3

0x2716,	// (0x0007d53e) list_medium_line_plain

0x2716,	// (0x0007d53e) list_medium_line_plain_t2

0x2716,	// (0x0007d53e) list_medium_line_plain_t3

0x2716,	// (0x0007d53e) list_medium_line_right_icon

0x2716,	// (0x0007d53e) list_medium_line_right_iconx2

0x2716,	// (0x0007d53e) list_medium_line_t2

0x2716,	// (0x0007d53e) list_medium_line_t2_g2

0x2716,	// (0x0007d53e) list_medium_line_t2_g3

0x2716,	// (0x0007d53e) list_medium_line_t2_right_icon

0x2716,	// (0x0007d53e) list_medium_line_t2_right_iconx2

0x2716,	// (0x0007d53e) list_medium_line_t3

0x2716,	// (0x0007d53e) list_medium_line_t3_g2

0x2716,	// (0x0007d53e) list_medium_line_t3_g3

0x2716,	// (0x0007d53e) list_medium_line_t3_right_iconx2

0x271f,	// (0x0007d547) list_medium_line_t4_g4

0x2728,	// (0x0007d550) list_medium_line_x2

0x2728,	// (0x0007d550) list_medium_line_x2_t2_g2

0x2728,	// (0x0007d550) list_medium_line_x2_t2_g3

0x2728,	// (0x0007d550) list_medium_line_x2_t2_g4

0x2728,	// (0x0007d550) list_medium_line_x2_t3

0x2728,	// (0x0007d550) list_medium_line_x2_t3_g2

0x2728,	// (0x0007d550) list_medium_line_x2_t3_g3

0x2728,	// (0x0007d550) list_medium_line_x2_t3_g4

0x2728,	// (0x0007d550) list_medium_line_x2_t4_g2

0x2728,	// (0x0007d550) list_medium_line_x2_t4_g4

0x2731,	// (0x0007d559) list_medium_line_x3

0x2731,	// (0x0007d559) list_medium_line_x3_t4

0x2731,	// (0x0007d559) list_medium_line_x3_t4_g4

0x271f,	// (0x0007d547) list_medium_line_x4_t4

0x271f,	// (0x0007d547) list_medium_line_x4_t4_g7

0x271f,	// (0x0007d547) list_medium_line_x4_t5

0x273a,	// (0x0007d562) list_single_fs_dyc_pane_ParamLimits

0x273a,	// (0x0007d562) list_single_fs_dyc_pane

0x0681,	// (0x0007b4a9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x4_t4_g7_g1

0x2c1d,	// (0x0007da45) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2c1d,	// (0x0007da45) list_medium_line_x4_t4_g7_g2

0x2c29,	// (0x0007da51) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2c29,	// (0x0007da51) list_medium_line_x4_t4_g7_g3

0x2c38,	// (0x0007da60) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2c38,	// (0x0007da60) list_medium_line_x4_t4_g7_g4

0x2c44,	// (0x0007da6c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2c44,	// (0x0007da6c) list_medium_line_x4_t4_g7_g5

0x2c53,	// (0x0007da7b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2c53,	// (0x0007da7b) list_medium_line_x4_t4_g7_g6

0x2c62,	// (0x0007da8a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2c62,	// (0x0007da8a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0008aa20) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0008aa20) list_medium_line_x4_t4_g7_g

0x2c6e,	// (0x0007da96) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2c6e,	// (0x0007da96) list_medium_line_x4_t4_g7_t1

0x2c83,	// (0x0007daab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2c83,	// (0x0007daab) list_medium_line_x4_t4_g7_t2

0x2c98,	// (0x0007dac0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2c98,	// (0x0007dac0) list_medium_line_x4_t4_g7_t3

0x2cad,	// (0x0007dad5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2cad,	// (0x0007dad5) list_medium_line_x4_t4_g7_t4

0x2cbf,	// (0x0007dae7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2cbf,	// (0x0007dae7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0008aa2f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0008aa2f) list_medium_line_x4_t4_g7_t

0x2cd1,	// (0x0007daf9) list_single_dyc_row_pane_ParamLimits

0x2cd1,	// (0x0007daf9) list_single_dyc_row_pane

0xcad6,	// (0x000878fe) call5_gesture_pane_ParamLimits

0xcad6,	// (0x000878fe) call5_gesture_pane

0xcb0a,	// (0x00087932) call5_windows_pane_ParamLimits

0xcb0a,	// (0x00087932) call5_windows_pane

0xcb7c,	// (0x000879a4) call5_swipe_1_pane_cp_ParamLimits

0xcb7c,	// (0x000879a4) call5_swipe_1_pane_cp

0xcb88,	// (0x000879b0) call5_swipe_2_pane_cp_ParamLimits

0xcb88,	// (0x000879b0) call5_swipe_2_pane_cp

0x0e7d,	// (0x0007bca5) call5_image_pane_cp

0xcb94,	// (0x000879bc) popup_call5_audio_first_window_cp_ParamLimits

0xcb94,	// (0x000879bc) popup_call5_audio_first_window_cp

0x3293,	// (0x0007e0bb) call5_swipe_1_pane_g1_cp_ParamLimits

0x3293,	// (0x0007e0bb) call5_swipe_1_pane_g1_cp

0x32d3,	// (0x0007e0fb) call5_swipe_1_pane_g2_cp

0x32ac,	// (0x0007e0d4) call5_swipe_1_pane_t1_cp_ParamLimits

0x32ac,	// (0x0007e0d4) call5_swipe_1_pane_t1_cp

0x3293,	// (0x0007e0bb) call5_swipe_2_pane_g1_cp_ParamLimits

0x3293,	// (0x0007e0bb) call5_swipe_2_pane_g1_cp

0x32db,	// (0x0007e103) call5_swipe_2_pane_g2_cp

0x32e3,	// (0x0007e10b) call5_swipe_2_pane_t1_cp_ParamLimits

0x32e3,	// (0x0007e10b) call5_swipe_2_pane_t1_cp

0x0561,	// (0x0007b389) main_sp_fs_email_pane

0x32f8,	// (0x0007e120) main_sp_fs_listscroll_pane_te

0x3301,	// (0x0007e129) popup_sp_fs_action_menu_pane_ParamLimits

0x3301,	// (0x0007e129) popup_sp_fs_action_menu_pane

0x8e66,	// (0x00083c8e) bg_sp_fs_ctrlbar_pane_g1

0x3343,	// (0x0007e16b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x334c,	// (0x0007e174) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3355,	// (0x0007e17d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x8e66,	// (0x00083c8e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0008ab18) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3fbb,	// (0x0007ede3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3fbb,	// (0x0007ede3) bg_sp_fs_ctrlbar_ddmenu_pane

0x335e,	// (0x0007e186) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x335e,	// (0x0007e186) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x336a,	// (0x0007e192) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x336a,	// (0x0007e192) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0008ab21) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0008ab21) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3376,	// (0x0007e19e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3376,	// (0x0007e19e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3390,	// (0x0007e1b8) list_medium_line_t2_right_icon_g1

0xcba0,	// (0x000879c8) list_medium_line_t2_right_icon_t1

0xcbb0,	// (0x000879d8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0008ab26) list_medium_line_t2_right_icon_t

0x22de,	// (0x0007d106) bg_sp_fs_ctrlbar_pane_ParamLimits

0x22de,	// (0x0007d106) bg_sp_fs_ctrlbar_pane

0xcc15,	// (0x00087a3d) main_sp_fs_ctrlbar_button_pane_cp01

0xcc1d,	// (0x00087a45) main_sp_fs_ctrlbar_ddmenu_pane

0xcc27,	// (0x00087a4f) main_sp_fs_ctrlbar_pane_g1

0x33d0,	// (0x0007e1f8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0008ab2b) main_sp_fs_ctrlbar_pane_g

0x33dc,	// (0x0007e204) main_sp_fs_ctrlbar_pane_t1

0xcc33,	// (0x00087a5b) main_sp_fs_ctrlbar_pane

0xcc4f,	// (0x00087a77) main_sp_fs_listscroll_pane_te_cp01

0xcc60,	// (0x00087a88) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcc60,	// (0x00087a88) popup_sp_fs_action_menu_pane_cp01

0x0561,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0561,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp01

0x33f1,	// (0x0007e219) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x33f1,	// (0x0007e219) sp_fs_action_menu_list_gene_pane_g1

0x3400,	// (0x0007e228) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3400,	// (0x0007e228) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0008ab30) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0008ab30) sp_fs_action_menu_list_gene_pane_g

0x340d,	// (0x0007e235) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x340d,	// (0x0007e235) sp_fs_action_menu_list_gene_pane_t1

0x3425,	// (0x0007e24d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3425,	// (0x0007e24d) sp_fs_action_menu_list_gene_pane

0x3444,	// (0x0007e26c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3444,	// (0x0007e26c) popup_sp_fs_action_menu_bg_pane

0x3452,	// (0x0007e27a) sp_fs_action_menu_list_pane_ParamLimits

0x3452,	// (0x0007e27a) sp_fs_action_menu_list_pane

0x3472,	// (0x0007e29a) sp_fs_scroll_pane_cp01_ParamLimits

0x3472,	// (0x0007e29a) sp_fs_scroll_pane_cp01

0xcc78,	// (0x00087aa0) list_medium_line_plain_t2_t1

0xcc88,	// (0x00087ab0) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0008ab35) list_medium_line_plain_t2_t

0xcc96,	// (0x00087abe) list_medium_line_plain_t3_t1

0xcca6,	// (0x00087ace) list_medium_line_plain_t3_t2

0xccb4,	// (0x00087adc) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0008ab3a) list_medium_line_plain_t3_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t2_g2_g1

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0008a0a1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0008a0a1) list_medium_line_x2_t2_g2_g

0x09d9,	// (0x0007b801) list_medium_line_x2_t2_g2_t1_ParamLimits

0x09d9,	// (0x0007b801) list_medium_line_x2_t2_g2_t1

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0008ab41) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0008ab41) list_medium_line_x2_t2_g2_t

0x0681,	// (0x0007b4a9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t4_g2_g1

0x3498,	// (0x0007e2c0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3498,	// (0x0007e2c0) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0008ab46) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0008ab46) list_medium_line_x2_t4_g2_g

0xccc2,	// (0x00087aea) list_medium_line_x2_t4_g2_t1_ParamLimits

0xccc2,	// (0x00087aea) list_medium_line_x2_t4_g2_t1

0xccd9,	// (0x00087b01) list_medium_line_x2_t4_g2_t2_ParamLimits

0xccd9,	// (0x00087b01) list_medium_line_x2_t4_g2_t2

0xccee,	// (0x00087b16) list_medium_line_x2_t4_g2_t3_ParamLimits

0xccee,	// (0x00087b16) list_medium_line_x2_t4_g2_t3

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0008ab4b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0008ab4b) list_medium_line_x2_t4_g2_t

0x34aa,	// (0x0007e2d2) list_medium_line_t3_right_iconx2_g1

0x3390,	// (0x0007e1b8) list_medium_line_t3_right_iconx2_g2

0xcd00,	// (0x00087b28) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0008ab54) list_medium_line_t3_right_iconx2_g

0xcd08,	// (0x00087b30) list_medium_line_t3_right_iconx2_t1

0xcd18,	// (0x00087b40) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0008ab5b) list_medium_line_t3_right_iconx2_t

0x0681,	// (0x0007b4a9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x3_t4_g4_g1

0x068d,	// (0x0007b4b5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x3_t4_g4_g2

0x0721,	// (0x0007b549) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0721,	// (0x0007b549) list_medium_line_x3_t4_g4_g3

0x34b2,	// (0x0007e2da) list_medium_line_x3_t4_g4_g4_ParamLimits

0x34b2,	// (0x0007e2da) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0008ab60) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0008ab60) list_medium_line_x3_t4_g4_g

0xcd26,	// (0x00087b4e) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcd26,	// (0x00087b4e) list_medium_line_x3_t4_g4_t1

0xcd3d,	// (0x00087b65) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcd3d,	// (0x00087b65) list_medium_line_x3_t4_g4_t2

0x34be,	// (0x0007e2e6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34be,	// (0x0007e2e6) list_medium_line_x3_t4_g4_t3

0x34d3,	// (0x0007e2fb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x34d3,	// (0x0007e2fb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0008ab69) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0008ab69) list_medium_line_x3_t4_g4_t

0xcd52,	// (0x00087b7a) list_single_dyc_row_text_pane_t1_ParamLimits

0xcd52,	// (0x00087b7a) list_single_dyc_row_text_pane_t1

0xcd89,	// (0x00087bb1) list_single_dyc_row_text_pane_t2_ParamLimits

0xcd89,	// (0x00087bb1) list_single_dyc_row_text_pane_t2

0x34f0,	// (0x0007e318) list_single_dyc_row_text_pane_t3_ParamLimits

0x34f0,	// (0x0007e318) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0008ab72) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0008ab72) list_single_dyc_row_text_pane_t

0x3502,	// (0x0007e32a) list_single_dyc_row_pane_g1_ParamLimits

0x3502,	// (0x0007e32a) list_single_dyc_row_pane_g1

0x350e,	// (0x0007e336) list_single_dyc_row_pane_g2_ParamLimits

0x350e,	// (0x0007e336) list_single_dyc_row_pane_g2

0x351a,	// (0x0007e342) list_single_dyc_row_pane_g3_ParamLimits

0x351a,	// (0x0007e342) list_single_dyc_row_pane_g3

0x3526,	// (0x0007e34e) list_single_dyc_row_pane_g4_ParamLimits

0x3526,	// (0x0007e34e) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0008ab79) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0008ab79) list_single_dyc_row_pane_g

0x3532,	// (0x0007e35a) list_single_dyc_row_text_pane_ParamLimits

0x3532,	// (0x0007e35a) list_single_dyc_row_text_pane

0xde52,	// (0x00088c7a) bg_sp_fs_scroll_pane

0x3551,	// (0x0007e379) thumb_sp_fs_scroll_pane

0x25f7,	// (0x0007d41f) list_medium_line_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_g1

0x355a,	// (0x0007e382) list_medium_line_t1_ParamLimits

0x355a,	// (0x0007e382) list_medium_line_t1

0x0681,	// (0x0007b4a9) list_medium_line_x2_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_g1

0x068d,	// (0x0007b4b5) list_medium_line_x2_g2_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0008ab82) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0008ab82) list_medium_line_x2_g

0x356f,	// (0x0007e397) list_medium_line_x2_t1_ParamLimits

0x356f,	// (0x0007e397) list_medium_line_x2_t1

0x0681,	// (0x0007b4a9) list_medium_line_x3_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x3_g1

0x068d,	// (0x0007b4b5) list_medium_line_x3_g2_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0008ab82) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0008ab82) list_medium_line_x3_g

0x356f,	// (0x0007e397) list_medium_line_x3_t1_ParamLimits

0x356f,	// (0x0007e397) list_medium_line_x3_t1

0x3585,	// (0x0007e3ad) thumb_sp_fs_scroll_pane_g1

0x358e,	// (0x0007e3b6) thumb_sp_fs_scroll_pane_g2

0x3597,	// (0x0007e3bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0008ab87) thumb_sp_fs_scroll_pane_g

0x3585,	// (0x0007e3ad) bg_sp_fs_scroll_pane_g1

0x358e,	// (0x0007e3b6) bg_sp_fs_scroll_pane_g2

0x3597,	// (0x0007e3bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0008ab87) bg_sp_fs_scroll_pane_g

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0681,	// (0x0007b4a9) list_medium_line_x2_t3_g4_g1

0x0715,	// (0x0007b53d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0715,	// (0x0007b53d) list_medium_line_x2_t3_g4_g2

0x068d,	// (0x0007b4b5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x068d,	// (0x0007b4b5) list_medium_line_x2_t3_g4_g3

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0699,	// (0x0007b4c1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0008a11d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0008a11d) list_medium_line_x2_t3_g4_g

0xcde3,	// (0x00087c0b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcde3,	// (0x00087c0b) list_medium_line_x2_t3_g4_t1

0xcdf9,	// (0x00087c21) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcdf9,	// (0x00087c21) list_medium_line_x2_t3_g4_t2

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x06ba,	// (0x0007b4e2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0008ab8e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0008ab8e) list_medium_line_x2_t3_g4_t

0x25f7,	// (0x0007d41f) list_medium_line_g2_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_g2_g1

0x2603,	// (0x0007d42b) list_medium_line_g2_g2_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0008a856) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0008a856) list_medium_line_g2_g

0x35a0,	// (0x0007e3c8) list_medium_line_g2_t1_ParamLimits

0x35a0,	// (0x0007e3c8) list_medium_line_g2_t1

0x25f7,	// (0x0007d41f) list_medium_line_t3_g2_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t3_g2_g1

0x2603,	// (0x0007d42b) list_medium_line_t3_g2_g2_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0008a856) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0008a856) list_medium_line_t3_g2_g

0xce12,	// (0x00087c3a) list_medium_line_t3_g2_t1_ParamLimits

0xce12,	// (0x00087c3a) list_medium_line_t3_g2_t1

0xce2c,	// (0x00087c54) list_medium_line_t3_g2_t2_ParamLimits

0xce2c,	// (0x00087c54) list_medium_line_t3_g2_t2

0xce41,	// (0x00087c69) list_medium_line_t3_g2_t3_ParamLimits

0xce41,	// (0x00087c69) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0008ab95) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0008ab95) list_medium_line_t3_g2_t

0x3390,	// (0x0007e1b8) list_medium_line_right_icon_g1

0x35b5,	// (0x0007e3dd) list_medium_line_right_icon_t1

0x25f7,	// (0x0007d41f) list_medium_line_t2_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t2_g1

0xce57,	// (0x00087c7f) list_medium_line_t2_t1_ParamLimits

0xce57,	// (0x00087c7f) list_medium_line_t2_t1

0xce71,	// (0x00087c99) list_medium_line_t2_t2_ParamLimits

0xce71,	// (0x00087c99) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0008ab9c) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0008ab9c) list_medium_line_t2_t

0x25f7,	// (0x0007d41f) list_medium_line_t3_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t3_g1

0xce86,	// (0x00087cae) list_medium_line_t3_t1_ParamLimits

0xce86,	// (0x00087cae) list_medium_line_t3_t1

0xce9d,	// (0x00087cc5) list_medium_line_t3_t2_ParamLimits

0xce9d,	// (0x00087cc5) list_medium_line_t3_t2

0xceb2,	// (0x00087cda) list_medium_line_t3_t3_ParamLimits

0xceb2,	// (0x00087cda) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0008aba1) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0008aba1) list_medium_line_t3_t

0x25f7,	// (0x0007d41f) list_medium_line_g3_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_g3_g1

0x35c3,	// (0x0007e3eb) list_medium_line_g3_g2_ParamLimits

0x35c3,	// (0x0007e3eb) list_medium_line_g3_g2

0x2603,	// (0x0007d42b) list_medium_line_g3_g3_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0008aba8) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0008aba8) list_medium_line_g3_g

0x35cf,	// (0x0007e3f7) list_medium_line_g3_t1_ParamLimits

0x35cf,	// (0x0007e3f7) list_medium_line_g3_t1

0x25f7,	// (0x0007d41f) list_medium_line_t2_g3_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t2_g3_g1

0x35c3,	// (0x0007e3eb) list_medium_line_t2_g3_g2_ParamLimits

0x35c3,	// (0x0007e3eb) list_medium_line_t2_g3_g2

0x2603,	// (0x0007d42b) list_medium_line_t2_g3_g3_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0008aba8) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0008aba8) list_medium_line_t2_g3_g

0xcec4,	// (0x00087cec) list_medium_line_t2_g3_t1_ParamLimits

0xcec4,	// (0x00087cec) list_medium_line_t2_g3_t1

0xcedb,	// (0x00087d03) list_medium_line_t2_g3_t2_ParamLimits

0xcedb,	// (0x00087d03) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0008abaf) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0008abaf) list_medium_line_t2_g3_t

0x25f7,	// (0x0007d41f) list_medium_line_t3_g3_g1_ParamLimits

0x25f7,	// (0x0007d41f) list_medium_line_t3_g3_g1

0x35c3,	// (0x0007e3eb) list_medium_line_t3_g3_g2_ParamLimits

0x35c3,	// (0x0007e3eb) list_medium_line_t3_g3_g2

0x2603,	// (0x0007d42b) list_medium_line_t3_g3_g3_ParamLimits

0x2603,	// (0x0007d42b) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0008aba8) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0008aba8) list_medium_line_t3_g3_g

0xcef0,	// (0x00087d18) list_medium_line_t3_g3_t1_ParamLimits

0xcef0,	// (0x00087d18) list_medium_line_t3_g3_t1

0xcf04,	// (0x00087d2c) list_medium_line_t3_g3_t2_ParamLimits

0xcf04,	// (0x00087d2c) list_medium_line_t3_g3_t2

0xcf16,	// (0x00087d3e) list_medium_line_t3_g3_t3_ParamLimits

0xcf16,	// (0x00087d3e) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0008abb4) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0008abb4) list_medium_line_t3_g3_t

0x34aa,	// (0x0007e2d2) list_medium_line_right_iconx2_g1

0x3390,	// (0x0007e1b8) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0008abbb) list_medium_line_right_iconx2_g

0x35e4,	// (0x0007e40c) list_medium_line_right_iconx2_t1

0x34aa,	// (0x0007e2d2) list_medium_line_t2_right_iconx2_g1

0x3390,	// (0x0007e1b8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0008abbb) list_medium_line_t2_right_iconx2_g

0xcf28,	// (0x00087d50) list_medium_line_t2_right_iconx2_t1

0xcf38,	// (0x00087d60) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0008abc0) list_medium_line_t2_right_iconx2_t

0x35f2,	// (0x0007e41a) list_medium_line_x4_t4_t1

0xcf46,	// (0x00087d6e) list_medium_line_x4_t4_t2

0xcf56,	// (0x00087d7e) list_medium_line_x4_t4_t3

0xcf66,	// (0x00087d8e) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0008abc5) list_medium_line_x4_t4_t

0xcf9f,	// (0x00087dc7) tport_appsw_pane_ParamLimits

0xcf9f,	// (0x00087dc7) tport_appsw_pane

0xcfab,	// (0x00087dd3) tport_contact_pane_ParamLimits

0xcfab,	// (0x00087dd3) tport_contact_pane

0xcfbb,	// (0x00087de3) tport_listscroll_pane_ParamLimits

0xcfbb,	// (0x00087de3) tport_listscroll_pane

0xcfcb,	// (0x00087df3) cell_tport_appsw_pane_ParamLimits

0xcfcb,	// (0x00087df3) cell_tport_appsw_pane

0x94aa,	// (0x000842d2) tport_appsw_pane_g1_ParamLimits

0x94aa,	// (0x000842d2) tport_appsw_pane_g1

0x3600,	// (0x0007e428) tport_contact_pane_g1

0x3609,	// (0x0007e431) tport_contact_pane_t1

0x3617,	// (0x0007e43f) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0008abce) tport_contact_pane_t

0x3625,	// (0x0007e44d) list_tport_pane

0x362e,	// (0x0007e456) scroll_pane_cp_030

0x363f,	// (0x0007e467) cell_tport_appsw_pane_g1

0x364f,	// (0x0007e477) cell_tport_appsw_pane_t1

0xde52,	// (0x00088c7a) grid_highlight_pane_cp019

0xcff6,	// (0x00087e1e) list_tport_double_graphic_pane_ParamLimits

0xcff6,	// (0x00087e1e) list_tport_double_graphic_pane

0x0561,	// (0x0007b389) list_highlight_pane_cp023_ParamLimits

0x0561,	// (0x0007b389) list_highlight_pane_cp023

0xd009,	// (0x00087e31) list_tport_double_graphic_pane_g1_ParamLimits

0xd009,	// (0x00087e31) list_tport_double_graphic_pane_g1

0xd016,	// (0x00087e3e) list_tport_double_graphic_pane_t1_ParamLimits

0xd016,	// (0x00087e3e) list_tport_double_graphic_pane_t1

0xd02b,	// (0x00087e53) list_tport_double_graphic_pane_t2_ParamLimits

0xd02b,	// (0x00087e53) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0008abda) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0008abda) list_tport_double_graphic_pane_t

0xde52,	// (0x00088c7a) main_cale_note_pane

0xaf54,	// (0x00085d7c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf54,	// (0x00085d7c) cell_vitu2_function_top_wide_pane_cp01

0xc79e,	// (0x000875c6) wait_bar_pane_cp05_ParamLimits

0xde52,	// (0x00088c7a) listscroll_cmail_pane

0x3665,	// (0x0007e48d) list_cmail_pane

0xd047,	// (0x00087e6f) list_cmail_body_pane

0xd06b,	// (0x00087e93) list_single_cmail_header_caption_pane

0xd099,	// (0x00087ec1) list_single_cmail_header_detail_pane_ParamLimits

0xd099,	// (0x00087ec1) list_single_cmail_header_detail_pane

0xd0d1,	// (0x00087ef9) list_single_cmail_header_caption_pane_t1

0xd0e1,	// (0x00087f09) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd0e1,	// (0x00087f09) list_single_cmail_header_detail_pane_g1

0x43e6,	// (0x0007f20e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x43e6,	// (0x0007f20e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0008abdf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0008abdf) list_single_cmail_header_detail_pane_g

0x3692,	// (0x0007e4ba) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3692,	// (0x0007e4ba) list_single_cmail_header_detail_pane_t1

0x36c4,	// (0x0007e4ec) list_single_cmail_header_editor_pane_bg_ParamLimits

0x36c4,	// (0x0007e4ec) list_single_cmail_header_editor_pane_bg

0x36d6,	// (0x0007e4fe) list_cmail_body_pane_g1

0x36df,	// (0x0007e507) list_cmail_body_pane_t1

0xecba,	// (0x00089ae2) list_single_cmail_header_editor_pane_bg_g1

0xea45,	// (0x0008986d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xecca,	// (0x00089af2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xecc2,	// (0x00089aea) list_single_cmail_header_editor_pane_bg_g1_copy3

0xeed6,	// (0x00089cfe) list_single_cmail_header_editor_pane_bg_g1_copy4

0xecea,	// (0x00089b12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xecda,	// (0x00089b02) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xece2,	// (0x00089b0a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xea25,	// (0x0008984d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd11f,	// (0x00087f47) calenote_gesture_pane_ParamLimits

0xd11f,	// (0x00087f47) calenote_gesture_pane

0xd139,	// (0x00087f61) calenote_window_pane_ParamLimits

0xd139,	// (0x00087f61) calenote_window_pane

0x36ed,	// (0x0007e515) popup_note_window_cp01

0xd151,	// (0x00087f79) calenote_swipe_1_pane_ParamLimits

0xd151,	// (0x00087f79) calenote_swipe_1_pane

0xcb88,	// (0x000879b0) calenote_swipe_2_pane_ParamLimits

0xcb88,	// (0x000879b0) calenote_swipe_2_pane

0x3293,	// (0x0007e0bb) calenote_swipe_1_pane_g1_ParamLimits

0x3293,	// (0x0007e0bb) calenote_swipe_1_pane_g1

0x32a0,	// (0x0007e0c8) calenote_swipe_1_pane_g2_ParamLimits

0x32a0,	// (0x0007e0c8) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0008ab0e) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0008ab0e) calenote_swipe_1_pane_g

0x36ff,	// (0x0007e527) calenote_swipe_1_pane_t1_ParamLimits

0x36ff,	// (0x0007e527) calenote_swipe_1_pane_t1

0x3293,	// (0x0007e0bb) calenote_swipe_2_pane_g1_ParamLimits

0x3293,	// (0x0007e0bb) calenote_swipe_2_pane_g1

0x371e,	// (0x0007e546) calenote_swipe_2_pane_g2_ParamLimits

0x371e,	// (0x0007e546) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0008abeb) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0008abeb) calenote_swipe_2_pane_g

0x372a,	// (0x0007e552) calenote_swipe_2_pane_t1_ParamLimits

0x372a,	// (0x0007e552) calenote_swipe_2_pane_t1

0xde52,	// (0x00088c7a) main_mup_navstr_pane

0x9760,	// (0x00084588) main_mup3_pane_t7_ParamLimits

0x9760,	// (0x00084588) main_mup3_pane_t7

0xa6d3,	// (0x000854fb) main_mp4_pane_g6_ParamLimits

0xa6d3,	// (0x000854fb) main_mp4_pane_g6

0xaa55,	// (0x0008587d) main_image3_pane_t4_ParamLimits

0xaa55,	// (0x0008587d) main_image3_pane_t4

0xd164,	// (0x00087f8c) popup_navstr_preview_pane_ParamLimits

0xd164,	// (0x00087f8c) popup_navstr_preview_pane

0xd170,	// (0x00087f98) scroll_navstr_pane_ParamLimits

0xd170,	// (0x00087f98) scroll_navstr_pane

0xde52,	// (0x00088c7a) bg_popup_preview_window_pane_cp04

0x3751,	// (0x0007e579) popup_navstr_preview_pane_t1

0xd17c,	// (0x00087fa4) scroll_navstr_pane_g1_ParamLimits

0xd17c,	// (0x00087fa4) scroll_navstr_pane_g1

0xd189,	// (0x00087fb1) scroll_navstr_pane_t1_ParamLimits

0xd189,	// (0x00087fb1) scroll_navstr_pane_t1

0x36f6,	// (0x0007e51e) bg_button_pane_cp014

0x36f6,	// (0x0007e51e) bg_button_pane_cp030

0xca7c,	// (0x000878a4) list_double_fisheye_pane_g4_ParamLimits

0xca7c,	// (0x000878a4) list_double_fisheye_pane_g4

0xca88,	// (0x000878b0) list_double_fisheye_pane_g5_ParamLimits

0xca88,	// (0x000878b0) list_double_fisheye_pane_g5

0x366d,	// (0x0007e495) sp_fs_scroll_pane_cp03

0xcc27,	// (0x00087a4f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33d0,	// (0x0007e1f8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0008ab2b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x33dc,	// (0x0007e204) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd03d,	// (0x00087e65) sp_fs_scroll_pane_cp02

0xe743,	// (0x0008956b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe743,	// (0x0008956b) popup_sp_fs_calendar_preview_list_single_pane

0xde52,	// (0x00088c7a) main_cam6_pano_pane

0x0561,	// (0x0007b389) main_mup3_pane_ParamLimits

0xde52,	// (0x00088c7a) main_phacti_pane

0xc673,	// (0x0008749b) bg_button_pane_cp11

0xc68b,	// (0x000874b3) main_mobtv_info_pane_g2_ParamLimits

0xc68b,	// (0x000874b3) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0008aa8b) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0008aa8b) main_mobtv_info_pane_g

0xc83d,	// (0x00087665) sc_clock_pane_t5_ParamLimits

0xc83d,	// (0x00087665) sc_clock_pane_t5

0xc8df,	// (0x00087707) main_radioblah_pane_g1_ParamLimits

0x31df,	// (0x0007e007) main_radioblah_pane_t3_ParamLimits

0x31df,	// (0x0007e007) main_radioblah_pane_t3

0x31f7,	// (0x0007e01f) main_radioblah_pane_t4_ParamLimits

0x31f7,	// (0x0007e01f) main_radioblah_pane_t4

0xc8fd,	// (0x00087725) main_radioblah_text_pane_ParamLimits

0xc8fd,	// (0x00087725) main_radioblah_text_pane

0xc90a,	// (0x00087732) main_radioblah_info_pane_g1_ParamLimits

0xc99f,	// (0x000877c7) main_radioblah_info_pane_t4_ParamLimits

0xc99f,	// (0x000877c7) main_radioblah_info_pane_t4

0x0561,	// (0x0007b389) main_sp_fs_calendar_pane

0xd19b,	// (0x00087fc3) main_phacti_pane_g1

0xd1a3,	// (0x00087fcb) phacti_note_pane_ParamLimits

0xd1a3,	// (0x00087fcb) phacti_note_pane

0x3768,	// (0x0007e590) phacti_term_pane_ParamLimits

0x3768,	// (0x0007e590) phacti_term_pane

0x377d,	// (0x0007e5a5) phacti_note_pane_t1_ParamLimits

0x377d,	// (0x0007e5a5) phacti_note_pane_t1

0x3794,	// (0x0007e5bc) phacti_term_pane_g1

0x379c,	// (0x0007e5c4) phacti_term_pane_t1_ParamLimits

0x379c,	// (0x0007e5c4) phacti_term_pane_t1

0x37c6,	// (0x0007e5ee) popup_sp_fs_calendar_preview_list_single_pane_g1

0x37ce,	// (0x0007e5f6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0008abf5) popup_sp_fs_calendar_preview_list_single_pane_g

0x37d6,	// (0x0007e5fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x37d6,	// (0x0007e5fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0x37ec,	// (0x0007e614) aid_popup_sp_fs_bg_corner_pane

0x8e66,	// (0x00083c8e) popup_sp_fs_calendar_preview_bg_pane_g1

0xde52,	// (0x00088c7a) popup_sp_fs_calendar_preview_bg_pane

0x37f4,	// (0x0007e61c) popup_sp_fs_calendar_preview_list_pane

0x0561,	// (0x0007b389) bg_main_sp_fs_cale_pane_ParamLimits

0x0561,	// (0x0007b389) bg_main_sp_fs_cale_pane

0x3805,	// (0x0007e62d) listscroll_cale_mrui_pane_ParamLimits

0x3805,	// (0x0007e62d) listscroll_cale_mrui_pane

0x3819,	// (0x0007e641) listscroll_sp_fs_schedule_track_pane

0x3822,	// (0x0007e64a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3822,	// (0x0007e64a) main_sp_fs_ctrlbar_pane_cp01

0x3833,	// (0x0007e65b) main_sp_fs_ribbon_pane

0x383b,	// (0x0007e663) popup_sp_fs_cale_preview_window

0xd1e6,	// (0x0008800e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd1e6,	// (0x0008800e) list_single_sp_fs_schedule_track_pane

0x25a3,	// (0x0007d3cb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x25a3,	// (0x0007d3cb) bg_sp_fs_highlight_list_pane_cp03

0xd208,	// (0x00088030) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd208,	// (0x00088030) list_single_sp_fs_schedule_track_pane_g1

0xd214,	// (0x0008803c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd214,	// (0x0008803c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0008abfa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0008abfa) list_single_sp_fs_schedule_track_pane_g

0xd220,	// (0x00088048) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd220,	// (0x00088048) list_single_sp_fs_schedule_track_pane_t1

0xd238,	// (0x00088060) sp_fs_schedule_track_pane_ParamLimits

0xd238,	// (0x00088060) sp_fs_schedule_track_pane

0x384d,	// (0x0007e675) sp_fs_schedule_track_pane_g1

0x3855,	// (0x0007e67d) sp_fs_schedule_track_pane_g2

0x385d,	// (0x0007e685) sp_fs_schedule_track_pane_g3

0x3865,	// (0x0007e68d) sp_fs_schedule_track_pane_g4

0x386d,	// (0x0007e695) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0008abff) sp_fs_schedule_track_pane_g

0xecba,	// (0x00089ae2) bg_sp_fs_schedule_viewer_highlight_g1

0xea45,	// (0x0008986d) bg_sp_fs_schedule_viewer_highlight_g2

0xecc2,	// (0x00089aea) bg_sp_fs_schedule_viewer_highlight_g3

0xecca,	// (0x00089af2) bg_sp_fs_schedule_viewer_highlight_g4

0xeed6,	// (0x00089cfe) bg_sp_fs_schedule_viewer_highlight_g5

0xecda,	// (0x00089b02) bg_sp_fs_schedule_viewer_highlight_g6

0xece2,	// (0x00089b0a) bg_sp_fs_schedule_viewer_highlight_g7

0xecea,	// (0x00089b12) bg_sp_fs_schedule_viewer_highlight_g8

0xea25,	// (0x0008984d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0008ac0a) bg_sp_fs_schedule_viewer_highlight_g

0xde52,	// (0x00088c7a) bg_main_sp_fs_ribbon_pane

0xd248,	// (0x00088070) main_sp_fs_ribbon_pane_g1

0x3875,	// (0x0007e69d) main_sp_fs_ribbon_pane_t1

0xd251,	// (0x00088079) main_sp_fs_ribbon_pane_t2

0x3884,	// (0x0007e6ac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0008ac1d) main_sp_fs_ribbon_pane_t

0x3893,	// (0x0007e6bb) main_sp_fs_ribbon_scheduler_pane

0x389b,	// (0x0007e6c3) bg_main_sp_fs_ribbon_pane_g1

0x38a4,	// (0x0007e6cc) bg_main_sp_fs_ribbon_pane_g2

0x38ad,	// (0x0007e6d5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0008ac24) bg_main_sp_fs_ribbon_pane_g

0x38b5,	// (0x0007e6dd) main_sp_fs_ribbon_scheduler_pane_g1

0x38be,	// (0x0007e6e6) main_sp_fs_ribbon_scheduler_pane_g2

0x38c7,	// (0x0007e6ef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0008ac2b) main_sp_fs_ribbon_scheduler_pane_g

0x38d0,	// (0x0007e6f8) list_cale_mrui_pane

0xd260,	// (0x00088088) sp_fs_scroll_pane_cp07_ParamLimits

0xd260,	// (0x00088088) sp_fs_scroll_pane_cp07

0xd276,	// (0x0008809e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd276,	// (0x0008809e) bg_sp_fs_schedule_viewer_highlight

0x38d9,	// (0x0007e701) list_single_sp_fs_schedule_track_pane_cp01

0x38e1,	// (0x0007e709) list_sp_fs_schedule_track_pane

0x38e9,	// (0x0007e711) sp_fs_scroll_pane_cp06_ParamLimits

0x38e9,	// (0x0007e711) sp_fs_scroll_pane_cp06

0x8e66,	// (0x00083c8e) bgmain_sp_fs_calendar_pane_g1

0xd283,	// (0x000880ab) list_single_cale_mrui_pane_ParamLimits

0xd283,	// (0x000880ab) list_single_cale_mrui_pane

0x38fb,	// (0x0007e723) list_single_cale_mrui_row_pane_ParamLimits

0x38fb,	// (0x0007e723) list_single_cale_mrui_row_pane

0x3908,	// (0x0007e730) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3908,	// (0x0007e730) list_single_cale_mrui_row_pane_g1

0x3940,	// (0x0007e768) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3940,	// (0x0007e768) list_single_cale_mrui_row_pane_t1

0xd2af,	// (0x000880d7) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd2af,	// (0x000880d7) list_single_cale_mrui_row_pane_t2

0x3952,	// (0x0007e77a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3952,	// (0x0007e77a) list_single_cale_mrui_row_pane_t3

0x3981,	// (0x0007e7a9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3981,	// (0x0007e7a9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0008ac37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0008ac37) list_single_cale_mrui_row_pane_t

0xd315,	// (0x0008813d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd315,	// (0x0008813d) list_single_cmail_header_editor_pane_bg_cp01

0xd337,	// (0x0008815f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd337,	// (0x0008815f) list_single_cmail_header_editor_pane_bg_cp02

0xd353,	// (0x0008817b) main_radioblah_text_pane_t1_ParamLimits

0xd353,	// (0x0008817b) main_radioblah_text_pane_t1

0x39b0,	// (0x0007e7d8) cam6_indi_pane_cp01

0x39b8,	// (0x0007e7e0) cam6_mode_pane_cp01

0x39c0,	// (0x0007e7e8) cam6_pano_pane

0x39c9,	// (0x0007e7f1) cam6_zoom_pane_cp01

0x39d1,	// (0x0007e7f9) cam6_pano_image_pane

0x39dc,	// (0x0007e804) cam6_pano_pane_g1

0x2f57,	// (0x0007dd7f) cam6_pano_pane_g2

0x39e5,	// (0x0007e80d) cam6_pano_pane_g3

0x39ee,	// (0x0007e816) cam6_pano_pane_g4

0xa052,	// (0x00084e7a) cam6_pano_pane_g5

0x39f7,	// (0x0007e81f) cam6_pano_pane_g6

0x3a01,	// (0x0007e829) cam6_pano_pane_g7

0x3a09,	// (0x0007e831) cam6_pano_pane_g8

0x3a12,	// (0x0007e83a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0008ac40) cam6_pano_pane_g

0xde52,	// (0x00088c7a) main_browser_tag_pane

0x3749,	// (0x0007e571) grid_navstr_albumart_pane

0x3a1d,	// (0x0007e845) cell_navstr_albumart_pane_ParamLimits

0x3a1d,	// (0x0007e845) cell_navstr_albumart_pane

0x0ffe,	// (0x0007be26) cell_navstr_albumart_pane_g1

0x20fb,	// (0x0007cf23) cell_navstr_albumart_pane_g2

0x210b,	// (0x0007cf33) cell_navstr_albumart_pane_g3

0x2103,	// (0x0007cf2b) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0008ac53) cell_navstr_albumart_pane_g

0xd370,	// (0x00088198) bt_list_pane_ParamLimits

0xd370,	// (0x00088198) bt_list_pane

0xd397,	// (0x000881bf) bt_list_pane_t1

0xd3a6,	// (0x000881ce) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0008ac5c) bt_list_pane_t

0xde52,	// (0x00088c7a) main_cale_prevew_pane

0xd3b5,	// (0x000881dd) popup_cale_preview_window_ParamLimits

0xd3b5,	// (0x000881dd) popup_cale_preview_window

0x0561,	// (0x0007b389) bg_popup_preview_window_pane_cp05_ParamLimits

0x0561,	// (0x0007b389) bg_popup_preview_window_pane_cp05

0x3a3f,	// (0x0007e867) list_cale_preview_pane_ParamLimits

0x3a3f,	// (0x0007e867) list_cale_preview_pane

0xd3cc,	// (0x000881f4) list_double_cale_preview_pane_ParamLimits

0xd3cc,	// (0x000881f4) list_double_cale_preview_pane

0xd3de,	// (0x00088206) list_single_cale_preview_pane_ParamLimits

0xd3de,	// (0x00088206) list_single_cale_preview_pane

0xd3f2,	// (0x0008821a) list_single_cale_preview_pane_g1

0xd3fa,	// (0x00088222) list_single_cale_preview_pane_t1_ParamLimits

0xd3fa,	// (0x00088222) list_single_cale_preview_pane_t1

0xd40f,	// (0x00088237) list_double_cale_preview_pane_g1

0xd417,	// (0x0008823f) list_double_cale_preview_pane_t1_ParamLimits

0xd417,	// (0x0008823f) list_double_cale_preview_pane_t1

0xd42c,	// (0x00088254) list_double_cale_preview_pane_t2_ParamLimits

0xd42c,	// (0x00088254) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0008ac61) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0008ac61) list_double_cale_preview_pane_t

0xde52,	// (0x00088c7a) main_ezdial_pane

0x0561,	// (0x0007b389) main_sp_fs_email_pane_ParamLimits

0xcbbe,	// (0x000879e6) cmail_ddmenu_btn01_pane_ParamLimits

0xcbbe,	// (0x000879e6) cmail_ddmenu_btn01_pane

0xcbdb,	// (0x00087a03) cmail_ddmenu_btn02_pane_ParamLimits

0xcbdb,	// (0x00087a03) cmail_ddmenu_btn02_pane

0xcbf9,	// (0x00087a21) cmail_ddmenu_btn03_pane_ParamLimits

0xcbf9,	// (0x00087a21) cmail_ddmenu_btn03_pane

0xcc33,	// (0x00087a5b) main_sp_fs_ctrlbar_pane_ParamLimits

0xcc4f,	// (0x00087a77) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd047,	// (0x00087e6f) list_cmail_body_pane_ParamLimits

0x367c,	// (0x0007e4a4) bg_button_pane_cp12

0x3685,	// (0x0007e4ad) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3685,	// (0x0007e4ad) list_single_cmail_header_detail_pane_g3

0xd0f9,	// (0x00087f21) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd0f9,	// (0x00087f21) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0008abe6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0008abe6) list_single_cmail_header_detail_pane_t

0x37b1,	// (0x0007e5d9) phacti_term_pane_t2_ParamLimits

0x37b1,	// (0x0007e5d9) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0008abf0) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0008abf0) phacti_term_pane_t

0x3a4b,	// (0x0007e873) aid_size_list_single_double

0xd444,	// (0x0008826c) popup_ezdial_listscroll_window

0xd465,	// (0x0008828d) popup_number_entry_window_cp01

0x0e7d,	// (0x0007bca5) bg_popup_call_pane_cp09

0x3a57,	// (0x0007e87f) ezdial_list_pane

0x3a5f,	// (0x0007e887) scroll_pane_cp23

0x3fbb,	// (0x0007ede3) bg_button_pane_cp028_ParamLimits

0x3fbb,	// (0x0007ede3) bg_button_pane_cp028

0xd473,	// (0x0008829b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd473,	// (0x0008829b) cmail_ddmenu_btn01_pane_g1

0xd485,	// (0x000882ad) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd485,	// (0x000882ad) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0008ac66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0008ac66) cmail_ddmenu_btn01_pane_g

0x3a67,	// (0x0007e88f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a67,	// (0x0007e88f) cmail_ddmenu_btn01_pane_t1

0x22de,	// (0x0007d106) bg_button_pane_cp029_ParamLimits

0x22de,	// (0x0007d106) bg_button_pane_cp029

0xd485,	// (0x000882ad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd485,	// (0x000882ad) cmail_ddmenu_btn02_pane_g1

0xd49d,	// (0x000882c5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd49d,	// (0x000882c5) cmail_ddmenu_btn02_pane_t1

0x25a3,	// (0x0007d3cb) bg_button_pane_cp031_ParamLimits

0x25a3,	// (0x0007d3cb) bg_button_pane_cp031

0xd485,	// (0x000882ad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd485,	// (0x000882ad) cmail_ddmenu_btn03_pane_g1

0xd49d,	// (0x000882c5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd49d,	// (0x000882c5) cmail_ddmenu_btn03_pane_t1

0xa8f2,	// (0x0008571a) cell_dialer2_keypad_pane_t1_ParamLimits

0xa90c,	// (0x00085734) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa90c,	// (0x00085734) cell_dialer2_keypad_pane_t1_copy1

0xc535,	// (0x0008735d) ncimui_group_button_pane

0x0561,	// (0x0007b389) main_sp_fs_calendar_pane_ParamLimits

0xd06b,	// (0x00087e93) list_single_cmail_header_caption_pane_ParamLimits

0x37fc,	// (0x0007e624) aid_recal_txt_sm_pane

0xde52,	// (0x00088c7a) mian_recal_day_pane

0x383b,	// (0x0007e663) popup_sp_fs_cale_preview_window_ParamLimits

0xde52,	// (0x00088c7a) list_recal_day_pane

0x3a9e,	// (0x0007e8c6) list_single_recal_day_pane_ParamLimits

0x3a9e,	// (0x0007e8c6) list_single_recal_day_pane

0x3ab0,	// (0x0007e8d8) list_single_recal_day_pane_g1_ParamLimits

0x3ab0,	// (0x0007e8d8) list_single_recal_day_pane_g1

0x3abc,	// (0x0007e8e4) list_single_recal_day_pane_g2_ParamLimits

0x3abc,	// (0x0007e8e4) list_single_recal_day_pane_g2

0x3acb,	// (0x0007e8f3) list_single_recal_day_pane_g3_ParamLimits

0x3acb,	// (0x0007e8f3) list_single_recal_day_pane_g3

0xd4c1,	// (0x000882e9) list_single_recal_day_pane_g4_ParamLimits

0xd4c1,	// (0x000882e9) list_single_recal_day_pane_g4

0x3ad7,	// (0x0007e8ff) list_single_recal_day_pane_g5_ParamLimits

0x3ad7,	// (0x0007e8ff) list_single_recal_day_pane_g5

0x3ae6,	// (0x0007e90e) list_single_recal_day_pane_g6_ParamLimits

0x3ae6,	// (0x0007e90e) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0008ac75) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0008ac75) list_single_recal_day_pane_g

0x3af2,	// (0x0007e91a) list_single_recal_day_pane_t1

0x3b00,	// (0x0007e928) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0008ac82) list_single_recal_day_pane_t

0xd4d4,	// (0x000882fc) ncimui_query_button_pane_ParamLimits

0xd4d4,	// (0x000882fc) ncimui_query_button_pane

0xd4e4,	// (0x0008830c) ncimui_query_button_pane_t1_ParamLimits

0xd4e4,	// (0x0008830c) ncimui_query_button_pane_t1

0x3b0e,	// (0x0007e936) ncimui_query_button_pane_t2_ParamLimits

0x3b0e,	// (0x0007e936) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0008ac87) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0008ac87) ncimui_query_button_pane_t

0xd4f7,	// (0x0008831f) query_button_pane_ParamLimits

0xd4f7,	// (0x0008831f) query_button_pane

0xde52,	// (0x00088c7a) bg_button_pane_cp0028

0x3b21,	// (0x0007e949) query_button_pane_t1

0x82cf,	// (0x000830f7) main_tport_pane_ParamLimits

0xcf76,	// (0x00087d9e) bg_popup_window_pane_cp01_ParamLimits

0xcf76,	// (0x00087d9e) bg_popup_window_pane_cp01

0xcf83,	// (0x00087dab) heading_pane_cp08_ParamLimits

0xcf83,	// (0x00087dab) heading_pane_cp08

0xcf91,	// (0x00087db9) heading_pane_cp07_ParamLimits

0xcf91,	// (0x00087db9) heading_pane_cp07

0x363f,	// (0x0007e467) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0008abd3) cell_tport_appsw_pane_g

0x79bc,	// (0x000827e4) input_candi_list_open_g1

0x08c8,	// (0x0007b6f0) list_cale_time_pane_g6_ParamLimits

0x08c8,	// (0x0007b6f0) list_cale_time_pane_g6

0x91d1,	// (0x00083ff9) aid_size_touch_calib_1_ParamLimits

0x91d1,	// (0x00083ff9) aid_size_touch_calib_1

0x91dd,	// (0x00084005) aid_size_touch_calib_2_ParamLimits

0x91dd,	// (0x00084005) aid_size_touch_calib_2

0x91eb,	// (0x00084013) aid_size_touch_calib_3_ParamLimits

0x91eb,	// (0x00084013) aid_size_touch_calib_3

0x91fb,	// (0x00084023) aid_size_touch_calib_4_ParamLimits

0x91fb,	// (0x00084023) aid_size_touch_calib_4

0x9209,	// (0x00084031) main_touch_calib_button_group_pane_ParamLimits

0x9209,	// (0x00084031) main_touch_calib_button_group_pane

0x9217,	// (0x0008403f) main_touch_calib_pane_g1_ParamLimits

0x9223,	// (0x0008404b) main_touch_calib_pane_g2_ParamLimits

0x922f,	// (0x00084057) main_touch_calib_pane_g3_ParamLimits

0x923b,	// (0x00084063) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0008a5ac) main_touch_calib_pane_g_ParamLimits

0x9247,	// (0x0008406f) main_touch_calib_pane_t1_ParamLimits

0x925e,	// (0x00084086) main_touch_calib_pane_t2_ParamLimits

0x9275,	// (0x0008409d) main_touch_calib_pane_t3_ParamLimits

0x9289,	// (0x000840b1) main_touch_calib_pane_t4_ParamLimits

0x929d,	// (0x000840c5) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0008a5b5) main_touch_calib_pane_t_ParamLimits

0x999f,	// (0x000847c7) list_single_fp_cale_pane_g3_ParamLimits

0x999f,	// (0x000847c7) list_single_fp_cale_pane_g3

0xad3d,	// (0x00085b65) bg_button_pane_cp012_ParamLimits

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp03_ParamLimits

0xb744,	// (0x0008656c) cell_vitu2_function_top_pane_g1_ParamLimits

0xad3d,	// (0x00085b65) bg_vkb2_func_pane_cp04_ParamLimits

0xc4e6,	// (0x0008730e) main_ncimui_button_group_pane_ParamLimits

0xc4e6,	// (0x0008730e) main_ncimui_button_group_pane

0xc523,	// (0x0008734b) main_ncimui_pane_t3_ParamLimits

0xc523,	// (0x0008734b) main_ncimui_pane_t3

0x375f,	// (0x0007e587) phacti_button_group_pane

0x3a4b,	// (0x0007e873) aid_size_list_single_double_ParamLimits

0xd444,	// (0x0008826c) popup_ezdial_listscroll_window_ParamLimits

0xd465,	// (0x0008828d) popup_number_entry_window_cp01_ParamLimits

0xd504,	// (0x0008832c) phacti_button_pane_ParamLimits

0xd504,	// (0x0008832c) phacti_button_pane

0xde52,	// (0x00088c7a) bg_button_pane_cp14

0x3b2f,	// (0x0007e957) phacti_button_pane_t1

0xd515,	// (0x0008833d) main_touch_calib_button_pane_ParamLimits

0xd515,	// (0x0008833d) main_touch_calib_button_pane

0xe62d,	// (0x00089455) bg_button_pane_cp18_ParamLimits

0xe62d,	// (0x00089455) bg_button_pane_cp18

0x3b3d,	// (0x0007e965) main_touch_calib_button_pane_t1_ParamLimits

0x3b3d,	// (0x0007e965) main_touch_calib_button_pane_t1

0x3b53,	// (0x0007e97b) main_touch_calib_button_pane_t2_ParamLimits

0x3b53,	// (0x0007e97b) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0008ac8c) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0008ac8c) main_touch_calib_button_pane_t

0xde52,	// (0x00088c7a) cell_ncimui_button_pane

0xde52,	// (0x00088c7a) bg_button_pane_cp032

0x3b71,	// (0x0007e999) cell_ncimui_button_pane_t1

0xa968,	// (0x00085790) image3_infobar_pane_ParamLimits

0xa968,	// (0x00085790) image3_infobar_pane

0xc85f,	// (0x00087687) fs_bigclock_status_pane_ParamLimits

0xc85f,	// (0x00087687) fs_bigclock_status_pane

0xc86c,	// (0x00087694) main_fs_bigclock_clock_pane_ParamLimits

0xc86c,	// (0x00087694) main_fs_bigclock_clock_pane

0xc880,	// (0x000876a8) main_fs_bigclock_indi_pane_ParamLimits

0xc880,	// (0x000876a8) main_fs_bigclock_indi_pane

0xc8ad,	// (0x000876d5) main_fs_bigclock_swipe_pane_ParamLimits

0xc8ad,	// (0x000876d5) main_fs_bigclock_swipe_pane

0xde52,	// (0x00088c7a) main_fs_clock_dumped_data

0x3064,	// (0x0007de8c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3064,	// (0x0007de8c) list_single_fs_bigclock_indicator_pane_g1

0x3082,	// (0x0007deaa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3082,	// (0x0007deaa) list_single_fs_bigclock_indicator_pane_g2

0x309c,	// (0x0007dec4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x309c,	// (0x0007dec4) list_single_fs_bigclock_indicator_pane_g3

0x30b6,	// (0x0007dede) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x30b6,	// (0x0007dede) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0008aabf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0008aabf) list_single_fs_bigclock_indicator_pane_g

0x30dc,	// (0x0007df04) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x30dc,	// (0x0007df04) list_single_fs_bigclock_indicator_pane_t1

0x3104,	// (0x0007df2c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3104,	// (0x0007df2c) list_single_fs_bigclock_indicator_pane_t2

0x312c,	// (0x0007df54) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x312c,	// (0x0007df54) list_single_fs_bigclock_indicator_pane_t3

0x3154,	// (0x0007df7c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3154,	// (0x0007df7c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0008aaca) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0008aaca) list_single_fs_bigclock_indicator_pane_t

0x3b7f,	// (0x0007e9a7) image3_infobar_fav_pane_ParamLimits

0x3b7f,	// (0x0007e9a7) image3_infobar_fav_pane

0x3b8f,	// (0x0007e9b7) image3_infobar_loc_pane_ParamLimits

0x3b8f,	// (0x0007e9b7) image3_infobar_loc_pane

0x3ba3,	// (0x0007e9cb) image3_infobar_time_pane_ParamLimits

0x3ba3,	// (0x0007e9cb) image3_infobar_time_pane

0x8e66,	// (0x00083c8e) image3_infobar_time_pane_g1

0x3bb3,	// (0x0007e9db) image3_infobar_time_pane_t1

0x8e66,	// (0x00083c8e) image3_infobar_loc_pane_g1

0x3bc1,	// (0x0007e9e9) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0008ac91) image3_infobar_loc_pane_g

0x3bc9,	// (0x0007e9f1) image3_infobar_loc_pane_t1

0x8e66,	// (0x00083c8e) image3_infobar_fav_pane_g1

0x3bd7,	// (0x0007e9ff) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0008ac96) image3_infobar_fav_pane_g

0x3bdf,	// (0x0007ea07) fs_bigclock_status_battery_pane

0x3be8,	// (0x0007ea10) fs_bigclock_status_signal_pane

0x3bf1,	// (0x0007ea19) fs_bigclock_status_title_pane

0x3bfa,	// (0x0007ea22) fs_bigclock_status_signal_pane_g1

0x3c03,	// (0x0007ea2b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0008ac9b) fs_bigclock_status_signal_pane_g

0x3c0b,	// (0x0007ea33) fs_bigclock_status_battery_pane_g1

0x3c14,	// (0x0007ea3c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0008aca0) fs_bigclock_status_battery_pane_g

0x3c1c,	// (0x0007ea44) fs_bigclock_status_title_pane_t1

0x8e66,	// (0x00083c8e) main_fs_bigclock_clock_pane_g1

0x3c2a,	// (0x0007ea52) main_fs_bigclock_clock_pane_g2

0x3c2a,	// (0x0007ea52) main_fs_bigclock_clock_pane_g3

0x3c2a,	// (0x0007ea52) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0008aca5) main_fs_bigclock_clock_pane_g

0x3c32,	// (0x0007ea5a) main_fs_bigclock_clock_pane_t1

0x3c40,	// (0x0007ea68) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0008acae) main_fs_bigclock_clock_pane_t

0x3c4f,	// (0x0007ea77) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c4f,	// (0x0007ea77) list_single_fs_bigclock_indicator_pane

0xd525,	// (0x0008834d) list_single_fs_bigclock_pane_ParamLimits

0xd525,	// (0x0008834d) list_single_fs_bigclock_pane

0x3c69,	// (0x0007ea91) main_fs_bigclock_indicator_pane_t1

0x3c78,	// (0x0007eaa0) list_single_fs_bigclock_pane_g1

0x3c80,	// (0x0007eaa8) list_single_fs_bigclock_pane_t1

0x8e66,	// (0x00083c8e) main_fs_bigclock_swipe_pane_g1

0x3cbe,	// (0x0007eae6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0008acbf) main_fs_bigclock_swipe_pane_g

0x3cc6,	// (0x0007eaee) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3cc6,	// (0x0007eaee) main_fs_bigclock_swipe_pane_t1

0x7197,	// (0x00081fbf) call_type_pane_ParamLimits

0xde52,	// (0x00088c7a) main_btmg_pane

0x3934,	// (0x0007e75c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3934,	// (0x0007e75c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0008ac32) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0008ac32) list_single_cale_mrui_row_pane_g

0x3a85,	// (0x0007e8ad) list_recal_vselct_arw_lo_pane

0x3a8d,	// (0x0007e8b5) list_recal_vselct_arw_up_pane

0x3a95,	// (0x0007e8bd) list_recal_vselct_pane

0x3ce3,	// (0x0007eb0b) btmg_button_pane

0xd589,	// (0x000883b1) main_btmg_pane_g1

0xde52,	// (0x00088c7a) bg_button_pane_cp044

0x3ced,	// (0x0007eb15) btmg_button_pane_t1

0x22d6,	// (0x0007d0fe) aid_listscroll_gen

0x0561,	// (0x0007b389) main_cntbar_detail_pane

0x365d,	// (0x0007e485) list_cmail_folder_pane

0x366d,	// (0x0007e495) sp_fs_scroll_pane_cp03_ParamLimits

0xd591,	// (0x000883b9) list_single_fs_dyc_pane_cp01_ParamLimits

0xd591,	// (0x000883b9) list_single_fs_dyc_pane_cp01

0x3cfb,	// (0x0007eb23) aid_size_cmail_indent

0x3d04,	// (0x0007eb2c) list_single_dyc_row_pane_cp01

0xd5dd,	// (0x00088405) cntbar_detail_list_pane_ParamLimits

0xd5dd,	// (0x00088405) cntbar_detail_list_pane

0xd617,	// (0x0008843f) main_cntbar_detail_cont_pane_ParamLimits

0xd617,	// (0x0008843f) main_cntbar_detail_cont_pane

0x7131,	// (0x00081f59) scroll_pane_cp032_ParamLimits

0x7131,	// (0x00081f59) scroll_pane_cp032

0xd623,	// (0x0008844b) cntbar_detail_list_event_pane_ParamLimits

0xd623,	// (0x0008844b) cntbar_detail_list_event_pane

0xd5e9,	// (0x00088411) cntbar_detail_list_shct_pane

0xea93,	// (0x000898bb) aid_list_gen

0x3d0d,	// (0x0007eb35) aid_scroll

0x3d16,	// (0x0007eb3e) aid_size_touch_scroll_bar

0x2728,	// (0x0007d550) aid_list_double

0x3d1f,	// (0x0007eb47) aid_list_single

0x3d28,	// (0x0007eb50) aid_list_single_lg

0x3d31,	// (0x0007eb59) aid_list_z_g_a_sm

0x43f2,	// (0x0007f21a) aid_list_z_g_d

0x3d39,	// (0x0007eb61) aid_txt_z_prm

0xd637,	// (0x0008845f) aid_txt_z_prm_cp01

0xd645,	// (0x0008846d) aid_txt_z_sec

0xd653,	// (0x0008847b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd653,	// (0x0008847b) main_cntbar_detail_cont_pane_g1

0xd660,	// (0x00088488) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd660,	// (0x00088488) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0008acc4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0008acc4) main_cntbar_detail_cont_pane_g

0x3d47,	// (0x0007eb6f) main_cntbar_detail_cont_pane_t1

0x3d55,	// (0x0007eb7d) main_cntbar_detail_cont_pane_t2

0x3d63,	// (0x0007eb8b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0008acc9) main_cntbar_detail_cont_pane_t

0xd66c,	// (0x00088494) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd66c,	// (0x00088494) cell_cntbar_detail_list_shct_pane

0x3d71,	// (0x0007eb99) cntbar_detail_list_shct_pane_g1

0x3d7a,	// (0x0007eba2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0008acd0) cntbar_detail_list_shct_pane_g

0xd680,	// (0x000884a8) cntbar_detail_list_event_pane_g1_ParamLimits

0xd680,	// (0x000884a8) cntbar_detail_list_event_pane_g1

0xd68c,	// (0x000884b4) cntbar_detail_list_event_pane_g2_ParamLimits

0xd68c,	// (0x000884b4) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0008acd5) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0008acd5) cntbar_detail_list_event_pane_g

0xd6f8,	// (0x00088520) cntbar_detail_list_event_pane_t1_ParamLimits

0xd6f8,	// (0x00088520) cntbar_detail_list_event_pane_t1

0xd70d,	// (0x00088535) cntbar_detail_list_event_pane_t2_ParamLimits

0xd70d,	// (0x00088535) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0008ace2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0008ace2) cntbar_detail_list_event_pane_t

0x8e66,	// (0x00083c8e) cell_cntbar_detail_list_shct_pane_g1

0x750e,	// (0x00082336) navi_pane_mv_g3

0x0561,	// (0x0007b389) main_cntbar_detail_pane_ParamLimits

0xde52,	// (0x00088c7a) main_notif_wgt_pane

0xa61a,	// (0x00085442) aid_tch_main_mp4_pane_g4

0xa84f,	// (0x00085677) popup_slider_window_cp02

0x3a7c,	// (0x0007e8a4) list_recal_day_event_pane

0xd5bd,	// (0x000883e5) cntbar_detail_btn_pane_ParamLimits

0xd5bd,	// (0x000883e5) cntbar_detail_btn_pane

0xd5cd,	// (0x000883f5) cntbar_detail_btn_pane_cp01_ParamLimits

0xd5cd,	// (0x000883f5) cntbar_detail_btn_pane_cp01

0xd5e9,	// (0x00088411) cntbar_detail_list_shct_pane_ParamLimits

0xd5f5,	// (0x0008841d) cntbar_detail_pane_g1_ParamLimits

0xd5f5,	// (0x0008841d) cntbar_detail_pane_g1

0xd601,	// (0x00088429) cntbar_detail_pane_t1_ParamLimits

0xd601,	// (0x00088429) cntbar_detail_pane_t1

0xd698,	// (0x000884c0) cntbar_detail_list_event_pane_g3_ParamLimits

0xd698,	// (0x000884c0) cntbar_detail_list_event_pane_g3

0xd6b0,	// (0x000884d8) cntbar_detail_list_event_pane_g4_ParamLimits

0xd6b0,	// (0x000884d8) cntbar_detail_list_event_pane_g4

0xd6c8,	// (0x000884f0) cntbar_detail_list_event_pane_g5_ParamLimits

0xd6c8,	// (0x000884f0) cntbar_detail_list_event_pane_g5

0xd6e0,	// (0x00088508) cntbar_detail_list_event_pane_g6_ParamLimits

0xd6e0,	// (0x00088508) cntbar_detail_list_event_pane_g6

0xd722,	// (0x0008854a) cntbar_detail_list_event_pane_t3_ParamLimits

0xd722,	// (0x0008854a) cntbar_detail_list_event_pane_t3

0xd734,	// (0x0008855c) popup_notif_wgt_window_ParamLimits

0xd734,	// (0x0008855c) popup_notif_wgt_window

0xd744,	// (0x0008856c) popup_submenu_window_cp01_ParamLimits

0xd744,	// (0x0008856c) popup_submenu_window_cp01

0x0e7d,	// (0x0007bca5) bg_popup_window_pane_cp10

0x3d83,	// (0x0007ebab) listscroll_notif_wgt_pane

0x3d8d,	// (0x0007ebb5) list_notif_wgt_window

0x3d96,	// (0x0007ebbe) scroll_pane_cp033

0x3d9f,	// (0x0007ebc7) list_notif_wgt_row_pane_ParamLimits

0x3d9f,	// (0x0007ebc7) list_notif_wgt_row_pane

0x3db3,	// (0x0007ebdb) aid_size_list_notif_wgt_del

0x3dbc,	// (0x0007ebe4) list_notif_wgt_row_pane_g1

0x3dc4,	// (0x0007ebec) list_notif_wgt_row_pane_g2

0x3dcc,	// (0x0007ebf4) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0008ace9) list_notif_wgt_row_pane_g

0x3dd5,	// (0x0007ebfd) list_notif_wgt_row_pane_t1

0x3de3,	// (0x0007ec0b) list_notif_wgt_row_pane_t2

0x3df1,	// (0x0007ec19) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0008acf0) list_notif_wgt_row_pane_t

0xeef0,	// (0x00089d18) list_recal_day_event_pane_g1

0x3dff,	// (0x0007ec27) list_recal_day_event_pane_t1

0xde52,	// (0x00088c7a) bg_button_pane_cp045

0x3e0e,	// (0x0007ec36) cntbar_detail_btn_pane_t1

0x22de,	// (0x0007d106) main_callh_pane_ParamLimits

0x22de,	// (0x0007d106) main_callh_pane

0xde52,	// (0x00088c7a) main_coverflow0_pane

0xde52,	// (0x00088c7a) main_wgtman_pane

0xc8c5,	// (0x000876ed) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc8c5,	// (0x000876ed) main_fs_bigclock_unlock_btn_pane

0x3637,	// (0x0007e45f) bg_button_pane_cp16

0x3647,	// (0x0007e46f) cell_tport_appsw_pane_g3

0xd752,	// (0x0008857a) cf0_flow_pane_ParamLimits

0xd752,	// (0x0008857a) cf0_flow_pane

0x3e1c,	// (0x0007ec44) listscroll_cf0_pane

0x3e25,	// (0x0007ec4d) main_cf0_pane_g1

0xd761,	// (0x00088589) main_cf0_pane_t1_ParamLimits

0xd761,	// (0x00088589) main_cf0_pane_t1

0xd775,	// (0x0008859d) main_cf0_pane_t2_ParamLimits

0xd775,	// (0x0008859d) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0008acf7) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0008acf7) main_cf0_pane_t

0x3e2f,	// (0x0007ec57) scroll_pane_cp11

0xd789,	// (0x000885b1) cf0_flow_pane_g1

0xd791,	// (0x000885b9) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0008acfc) cf0_flow_pane_g

0xd799,	// (0x000885c1) cf0_flow_pane_t1

0xde52,	// (0x00088c7a) main_call6_pane

0xde52,	// (0x00088c7a) main_calllock_pane

0xd7a7,	// (0x000885cf) call6_btn_grp_pane_ParamLimits

0xd7a7,	// (0x000885cf) call6_btn_grp_pane

0xd7b6,	// (0x000885de) call6_pane_g1_ParamLimits

0xd7b6,	// (0x000885de) call6_pane_g1

0xd7c5,	// (0x000885ed) popup_call6_1st_window_ParamLimits

0xd7c5,	// (0x000885ed) popup_call6_1st_window

0xd7d3,	// (0x000885fb) popup_call6_2nd_window_ParamLimits

0xd7d3,	// (0x000885fb) popup_call6_2nd_window

0xd7e1,	// (0x00088609) cell_call6_btn_pane_ParamLimits

0xd7e1,	// (0x00088609) cell_call6_btn_pane

0x0e7d,	// (0x0007bca5) bg_popup_call2_in_pane_cp03

0x3e3a,	// (0x0007ec62) popup_call6_1st_window_g1

0x3e42,	// (0x0007ec6a) popup_call6_1st_window_g2

0x3e4a,	// (0x0007ec72) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0008ad01) popup_call6_1st_window_g

0x3e52,	// (0x0007ec7a) popup_call6_1st_window_t1

0x3e61,	// (0x0007ec89) popup_call6_1st_window_t2

0x3e71,	// (0x0007ec99) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0008ad08) popup_call6_1st_window_t

0x0e7d,	// (0x0007bca5) bg_popup_call2_in_pane_cp04

0x3e3a,	// (0x0007ec62) popup_call6_2nd_window_g1

0x3e42,	// (0x0007ec6a) popup_call6_2nd_window_g2

0x3e4a,	// (0x0007ec72) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0008ad01) popup_call6_2nd_window_g

0x3e52,	// (0x0007ec7a) popup_call6_2nd_window_t1

0xde52,	// (0x00088c7a) bg_button_pane_cp15

0x3e81,	// (0x0007eca9) cell_call6_btn_pane_g1

0x3e8a,	// (0x0007ecb2) cell_call6_btn_pane_t1

0xd7f0,	// (0x00088618) listscroll_wgtman_pane_ParamLimits

0xd7f0,	// (0x00088618) listscroll_wgtman_pane

0xd80e,	// (0x00088636) wgtman_btn_pane_ParamLimits

0xd80e,	// (0x00088636) wgtman_btn_pane

0x0d30,	// (0x0007bb58) aid_scroll_copy1

0x3e99,	// (0x0007ecc1) list_wgtman_pane

0xd843,	// (0x0008866b) wgtman_btn_pane_g1_ParamLimits

0xd843,	// (0x0008866b) wgtman_btn_pane_g1

0xd86b,	// (0x00088693) wgtman_btn_pane_t1_ParamLimits

0xd86b,	// (0x00088693) wgtman_btn_pane_t1

0x3ea3,	// (0x0007eccb) wgtman_btn_pane_t2_ParamLimits

0x3ea3,	// (0x0007eccb) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0008ad0f) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0008ad0f) wgtman_btn_pane_t

0xd8a2,	// (0x000886ca) listrow_wgtman_pane_ParamLimits

0xd8a2,	// (0x000886ca) listrow_wgtman_pane

0xd8be,	// (0x000886e6) listrow_wgtman_pane_g1

0xd8c7,	// (0x000886ef) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0008ad14) listrow_wgtman_pane_g

0xd8d1,	// (0x000886f9) listrow_wgtman_pane_t1

0xd8df,	// (0x00088707) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0008ad19) listrow_wgtman_pane_t

0xd8ed,	// (0x00088715) wait_bar_pane_cp09

0x3eba,	// (0x0007ece2) main_calllock_btn_pane

0x3ec4,	// (0x0007ecec) main_calllock_pane_g1

0xde52,	// (0x00088c7a) bg_button_pane_cp17

0x3ecf,	// (0x0007ecf7) main_calllock_btn_pane_g1

0x3ed8,	// (0x0007ed00) main_calllock_btn_pane_t1

0xde52,	// (0x00088c7a) main_dialer3_pane

0xde52,	// (0x00088c7a) main_fmrd2_pane

0x8e66,	// (0x00083c8e) main_fs_bigclock_unlock_btn_pane_g1

0x3eef,	// (0x0007ed17) main_fs_bigclock_unlock_btn_pane_t1

0xd8f5,	// (0x0008871d) area_fmrd2_info_pane_ParamLimits

0xd8f5,	// (0x0008871d) area_fmrd2_info_pane

0xd903,	// (0x0008872b) area_fmrd2_visual_pane_ParamLimits

0xd903,	// (0x0008872b) area_fmrd2_visual_pane

0xd911,	// (0x00088739) fmrd2_indi_pane_ParamLimits

0xd911,	// (0x00088739) fmrd2_indi_pane

0xd91e,	// (0x00088746) area_fmrd2_visual_pane_g1

0xd926,	// (0x0008874e) area_fmrd2_visual_pane_t1

0xd936,	// (0x0008875e) area_fmrd2_visual_pane_t2

0xd946,	// (0x0008876e) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0008ad23) area_fmrd2_visual_pane_t

0xd956,	// (0x0008877e) area_fmrd2_info_pane_g1

0xd95e,	// (0x00088786) area_fmrd2_info_pane_t1

0xd96e,	// (0x00088796) area_fmrd2_info_pane_t2

0xd97e,	// (0x000887a6) area_fmrd2_info_pane_t3

0xd98e,	// (0x000887b6) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0008ad2a) area_fmrd2_info_pane_t

0xd99c,	// (0x000887c4) fmrd2_indi_pane_t1

0xd9ac,	// (0x000887d4) fmrd2_indi_pane_t2

0xd9bc,	// (0x000887e4) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0008ad33) fmrd2_indi_pane_t

0x30c5,	// (0x0007deed) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30c5,	// (0x0007deed) list_single_fs_bigclock_indicator_pane_g5

0x3169,	// (0x0007df91) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3169,	// (0x0007df91) list_single_fs_bigclock_indicator_pane_t5

0xd1b9,	// (0x00087fe1) aid_cell_bcale_month_pane_ParamLimits

0xd1b9,	// (0x00087fe1) aid_cell_bcale_month_pane

0xd1c5,	// (0x00087fed) bcale_month_pane_ParamLimits

0xd1c5,	// (0x00087fed) bcale_month_pane

0xd1d5,	// (0x00087ffd) bcale_preview_pane_ParamLimits

0xd1d5,	// (0x00087ffd) bcale_preview_pane

0x3c80,	// (0x0007eaa8) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c9a,	// (0x0007eac2) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c9a,	// (0x0007eac2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0008acba) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0008acba) list_single_fs_bigclock_pane_t

0x3ee7,	// (0x0007ed0f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0008ad1e) main_fs_bigclock_unlock_btn_pane_g

0xd9cc,	// (0x000887f4) aid_dia3_key_size_ParamLimits

0xd9cc,	// (0x000887f4) aid_dia3_key_size

0xd9d8,	// (0x00088800) aid_dia3_listrow_size_ParamLimits

0xd9d8,	// (0x00088800) aid_dia3_listrow_size

0xd9e8,	// (0x00088810) dia3_keypad_fun_pane_ParamLimits

0xd9e8,	// (0x00088810) dia3_keypad_fun_pane

0xd9fa,	// (0x00088822) dia3_keypad_num_pane_ParamLimits

0xd9fa,	// (0x00088822) dia3_keypad_num_pane

0xda0c,	// (0x00088834) dia3_listscroll_pane_ParamLimits

0xda0c,	// (0x00088834) dia3_listscroll_pane

0xda1a,	// (0x00088842) dia3_numentry_pane_ParamLimits

0xda1a,	// (0x00088842) dia3_numentry_pane

0x3efd,	// (0x0007ed25) dia3_list_pane

0x3f08,	// (0x0007ed30) scroll_pane_cp12

0xde52,	// (0x00088c7a) bg_dia3_numentry_pane

0xda28,	// (0x00088850) dia3_numentry_pane_t1

0xda37,	// (0x0008885f) cell_dia3_key_num_pane

0xda3f,	// (0x00088867) cell_dia3_key0_fun_pane_ParamLimits

0xda3f,	// (0x00088867) cell_dia3_key0_fun_pane

0xda4c,	// (0x00088874) cell_dia3_key1_fun_pane_ParamLimits

0xda4c,	// (0x00088874) cell_dia3_key1_fun_pane

0xda59,	// (0x00088881) dia3_listrow_pane

0x2de3,	// (0x0007dc0b) bg_dia3_numentry_pane_g1

0xde52,	// (0x00088c7a) bg_button_pane_cp21

0x3f13,	// (0x0007ed3b) cell_dia3_key_num_pane_t1

0x3f21,	// (0x0007ed49) cell_dia3_key_num_pane_t2

0x3f30,	// (0x0007ed58) cell_dia3_key_num_pane_t3

0x3f3f,	// (0x0007ed67) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0008ad3a) cell_dia3_key_num_pane_t

0xde52,	// (0x00088c7a) bg_button_pane_cp19

0xda66,	// (0x0008888e) cell_dia3_key0_fun_pane_g1

0xde52,	// (0x00088c7a) bg_button_pane_cp20

0xda6e,	// (0x00088896) cell_dia3_key1_fun_pane_g1

0xda76,	// (0x0008889e) area_left_week_number_pane

0xda7f,	// (0x000888a7) area_top_day_name_pane

0xda88,	// (0x000888b0) frame_month_view_pane

0xda92,	// (0x000888ba) grid_month_view_pane

0xda9c,	// (0x000888c4) cell_top_day_name_pane_ParamLimits

0xda9c,	// (0x000888c4) cell_top_day_name_pane

0xdab6,	// (0x000888de) cell_area_left_week_number_pane_ParamLimits

0xdab6,	// (0x000888de) cell_area_left_week_number_pane

0xdaca,	// (0x000888f2) cell_month_view_pane_ParamLimits

0xdaca,	// (0x000888f2) cell_month_view_pane

0x3f4e,	// (0x0007ed76) frm_month_g1

0xdae7,	// (0x0008890f) frm_month_g2

0xdaf1,	// (0x00088919) frm_month_g3

0xdafb,	// (0x00088923) frm_month_g4

0xdb05,	// (0x0008892d) frm_month_g5

0xdb0f,	// (0x00088937) frm_month_g6

0xdb19,	// (0x00088941) frm_month_g7

0x3f57,	// (0x0007ed7f) frm_month_g8

0xdb23,	// (0x0008894b) frm_month_g9

0xdb2c,	// (0x00088954) frm_month_g10

0xdb35,	// (0x0008895d) frm_month_g11

0xdb3e,	// (0x00088966) frm_month_g12

0xdb47,	// (0x0008896f) frm_month_g13

0xdb50,	// (0x00088978) frm_month_g14

0xdb59,	// (0x00088981) frm_month_g15

0xdb64,	// (0x0008898c) frm_month_g16

0x000f,

0xff1b,	// (0x0008ad43) frm_month_g

0xdb6f,	// (0x00088997) cell_top_day_name_pane_t1

0xdb7e,	// (0x000889a6) cell_area_left_week_number_pane_g1

0xdb6f,	// (0x00088997) cell_area_left_week_number_pane_t1

0x8e66,	// (0x00083c8e) cell_month_view_pane_g1

0xdb86,	// (0x000889ae) cell_month_view_pane_t1

0xde52,	// (0x00088c7a) main_fps_pane

0x3398,	// (0x0007e1c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3398,	// (0x0007e1c0) cmail_ddmenu_btn02_pane_cp1

0x33b4,	// (0x0007e1dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x33b4,	// (0x0007e1dc) cmail_ddmenu_btn02_pane_cp2

0xd491,	// (0x000882b9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd491,	// (0x000882b9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0008ac6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0008ac6b) cmail_ddmenu_btn02_pane_g

0xd4af,	// (0x000882d7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd4af,	// (0x000882d7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0008ac70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0008ac70) cmail_ddmenu_btn02_pane_t

0xdb95,	// (0x000889bd) fps_text_pane_ParamLimits

0xdb95,	// (0x000889bd) fps_text_pane

0xdba2,	// (0x000889ca) main_fps_pane_g1_ParamLimits

0xdba2,	// (0x000889ca) main_fps_pane_g1

0xdbb0,	// (0x000889d8) wait_bar_pane_cp010_ParamLimits

0xdbb0,	// (0x000889d8) wait_bar_pane_cp010

0xdbbc,	// (0x000889e4) fps_text_pane_t1_ParamLimits

0xdbbc,	// (0x000889e4) fps_text_pane_t1

0xac35,	// (0x00085a5d) cam4_image_uncrop_pane_g1

0xac3e,	// (0x00085a66) cam4_image_uncrop_pane_g2

0xac47,	// (0x00085a6f) cam4_image_uncrop_pane_g3

0x3f60,	// (0x0007ed88) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0008a744) cam4_image_uncrop_pane_g

0xda59,	// (0x00088881) dia3_listrow_pane_ParamLimits

0xde52,	// (0x00088c7a) main_phob2_pane

0xcfd8,	// (0x00087e00) cell_tport_appsw_pane_cp02_ParamLimits

0xcfd8,	// (0x00087e00) cell_tport_appsw_pane_cp02

0xcfe7,	// (0x00087e0f) cell_tport_appsw_pane_cp03_ParamLimits

0xcfe7,	// (0x00087e0f) cell_tport_appsw_pane_cp03

0xde52,	// (0x00088c7a) phob2_contact_card_pane

0xde52,	// (0x00088c7a) phob2_listscroll_pane

0xdbd5,	// (0x000889fd) phob2_list_pane

0xdbdd,	// (0x00088a05) scroll_pane_cp034

0xdbe5,	// (0x00088a0d) phob2_cc_data_pane_ParamLimits

0xdbe5,	// (0x00088a0d) phob2_cc_data_pane

0xdbff,	// (0x00088a27) phob2_cc_listscroll_pane_ParamLimits

0xdbff,	// (0x00088a27) phob2_cc_listscroll_pane

0xdc19,	// (0x00088a41) list_double_large_graphic_phob2_pane_ParamLimits

0xdc19,	// (0x00088a41) list_double_large_graphic_phob2_pane

0xdc3c,	// (0x00088a64) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdc3c,	// (0x00088a64) list_double_large_graphic_phob2_pane_g1

0xdc49,	// (0x00088a71) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdc49,	// (0x00088a71) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0008ad64) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0008ad64) list_double_large_graphic_phob2_pane_g

0xdc55,	// (0x00088a7d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdc55,	// (0x00088a7d) list_double_large_graphic_phob2_pane_t1

0xdc6a,	// (0x00088a92) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdc6a,	// (0x00088a92) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0008ad69) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0008ad69) list_double_large_graphic_phob2_pane_t

0xde52,	// (0x00088c7a) list_highlight_pane_cp024

0xdc7c,	// (0x00088aa4) phob2_cc_button_pane

0xdc84,	// (0x00088aac) phob2_cc_data_pane_g1_ParamLimits

0xdc84,	// (0x00088aac) phob2_cc_data_pane_g1

0xdc90,	// (0x00088ab8) phob2_cc_data_pane_g2_ParamLimits

0xdc90,	// (0x00088ab8) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0008ad6e) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0008ad6e) phob2_cc_data_pane_g

0xdc9c,	// (0x00088ac4) phob2_cc_data_pane_t1_ParamLimits

0xdc9c,	// (0x00088ac4) phob2_cc_data_pane_t1

0xdcae,	// (0x00088ad6) phob2_cc_data_pane_t2_ParamLimits

0xdcae,	// (0x00088ad6) phob2_cc_data_pane_t2

0xdcc0,	// (0x00088ae8) phob2_cc_data_pane_t3_ParamLimits

0xdcc0,	// (0x00088ae8) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0008ad73) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0008ad73) phob2_cc_data_pane_t

0xdcd2,	// (0x00088afa) phob2_cc_list_pane_ParamLimits

0xdcd2,	// (0x00088afa) phob2_cc_list_pane

0xdcde,	// (0x00088b06) scroll_pane_cp035_ParamLimits

0xdcde,	// (0x00088b06) scroll_pane_cp035

0x0561,	// (0x0007b389) bg_button_pane_cp033

0xdcea,	// (0x00088b12) phob2_cc_button_pane_g1

0xdcf6,	// (0x00088b1e) phob2_cc_button_pane_t1

0xdd0b,	// (0x00088b33) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0008ad7a) phob2_cc_button_pane_t

0xdd1d,	// (0x00088b45) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdd1d,	// (0x00088b45) list_double_large_graphic_phob2_cc_pane

0xdd4d,	// (0x00088b75) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd4d,	// (0x00088b75) list_double_large_graphic_phob2_cc_pane_g1

0xdd5e,	// (0x00088b86) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdd5e,	// (0x00088b86) list_double_large_graphic_phob2_cc_pane_g2

0xdd6d,	// (0x00088b95) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdd6d,	// (0x00088b95) list_double_large_graphic_phob2_cc_pane_g3

0xdd7c,	// (0x00088ba4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdd7c,	// (0x00088ba4) list_double_large_graphic_phob2_cc_pane_g4

0xdd8d,	// (0x00088bb5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdd8d,	// (0x00088bb5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0008ad7f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0008ad7f) list_double_large_graphic_phob2_cc_pane_g

0xdd9c,	// (0x00088bc4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdd9c,	// (0x00088bc4) list_double_large_graphic_phob2_cc_pane_t1

0xddc5,	// (0x00088bed) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xddc5,	// (0x00088bed) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0008ad8a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0008ad8a) list_double_large_graphic_phob2_cc_pane_t

0xddee,	// (0x00088c16) list_highlight_pane_cp025_ParamLimits

0xddee,	// (0x00088c16) list_highlight_pane_cp025

0x0561,	// (0x0007b389) bg_button_pane_cp033_ParamLimits

0xdcea,	// (0x00088b12) phob2_cc_button_pane_g1_ParamLimits

0xdcf6,	// (0x00088b1e) phob2_cc_button_pane_t1_ParamLimits

0xdd0b,	// (0x00088b33) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0008ad7a) phob2_cc_button_pane_t_ParamLimits

0x5586,	// (0x000803ae) popup_wgtman_window

0xedd4,	// (0x00089bfc) scroll_pane_cp038

0xd82b,	// (0x00088653) wgtman_btn_pane_cp_01_ParamLimits

0xd82b,	// (0x00088653) wgtman_btn_pane_cp_01

0xddfc,	// (0x00088c24) wgtman_content_pane

0xde05,	// (0x00088c2d) wgtman_heading_pane

0xde52,	// (0x00088c7a) bg_heading_pane_cp02

0xde0e,	// (0x00088c36) wgtman_heading_pane_g1

0xde16,	// (0x00088c3e) wgtman_heading_pane_t1

0xde24,	// (0x00088c4c) scroll_pane_cp036

0xde2c,	// (0x00088c54) wgtman_list_pane

0xde34,	// (0x00088c5c) wgtman_list_pane_t1_ParamLimits

0xde34,	// (0x00088c5c) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
