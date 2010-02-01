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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008f953 };

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
0x0b55,	// (0x000904a8) Screen

0x0b61,	// (0x000904b4) application_window

0x0bd3,	// (0x00090526) area_bottom_pane_ParamLimits

0x0bd3,	// (0x00090526) area_bottom_pane

0x0c31,	// (0x00090584) area_top_pane_ParamLimits

0x0c31,	// (0x00090584) area_top_pane

0x0c8e,	// (0x000905e1) call_video_uplink_pane_ParamLimits

0x0c8e,	// (0x000905e1) call_video_uplink_pane

0x0cba,	// (0x0009060d) main_pane_ParamLimits

0x0cba,	// (0x0009060d) main_pane

0xefe8,	// (0x0009e93b) context_pane

0x413c,	// (0x00093a8f) navi_pane

0x416c,	// (0x00093abf) popup_cale_events_window_ParamLimits

0x416c,	// (0x00093abf) popup_cale_events_window

0xeffb,	// (0x0009e94e) popup_mup_playback_window

0x4184,	// (0x00093ad7) signal_pane

0xa524,	// (0x00099e77) main_browser_pane

0xdb8c,	// (0x0009d4df) main_burst_pane

0x3e3e,	// (0x00093791) main_calc_pane

0xdb8c,	// (0x0009d4df) main_cale_day_pane

0xa524,	// (0x00099e77) main_cale_month_pane

0xdb8c,	// (0x0009d4df) main_cale_week_pane

0xdb8c,	// (0x0009d4df) main_call_pane

0xa1d2,	// (0x00099b25) main_call_poc_pane

0xdb8c,	// (0x0009d4df) main_camera_pane

0xdb8c,	// (0x0009d4df) main_chi_dic_pane

0xd7da,	// (0x0009d12d) main_clock_pane

0xa1d2,	// (0x00099b25) main_fmradio_pane

0xdb8c,	// (0x0009d4df) main_graph_messa_pane

0xa1d2,	// (0x00099b25) main_help_pane

0xa524,	// (0x00099e77) main_im_pane

0xa42d,	// (0x00099d80) main_image_pane_ParamLimits

0xa42d,	// (0x00099d80) main_image_pane

0xa1d2,	// (0x00099b25) main_location2_pane

0xdb8c,	// (0x0009d4df) main_location_pane

0xa1d2,	// (0x00099b25) main_messa_pane

0xa1d2,	// (0x00099b25) main_mp2_pane

0xdb8c,	// (0x0009d4df) main_mp_pane

0xa1d2,	// (0x00099b25) main_msg_pane

0xa1d2,	// (0x00099b25) main_mup_eq_pane

0xa1d2,	// (0x00099b25) main_mup_pane

0xdb8c,	// (0x0009d4df) main_notes_pane

0xa1d2,	// (0x00099b25) main_pec_pane

0xa1d2,	// (0x00099b25) main_phob_pane

0xa1d2,	// (0x00099b25) main_pinb_pane

0xa1d2,	// (0x00099b25) main_postcard_pane

0xa1d2,	// (0x00099b25) main_qdial_pane

0xdb8c,	// (0x0009d4df) main_skin_pane

0xa1d2,	// (0x00099b25) main_smil2_pane

0xdb8c,	// (0x0009d4df) main_smil_pane

0xdb8c,	// (0x0009d4df) main_video_pane

0xdb8c,	// (0x0009d4df) main_video_tele_pane

0xa42d,	// (0x00099d80) main_viewer_pane_ParamLimits

0xa42d,	// (0x00099d80) main_viewer_pane

0xdb8c,	// (0x0009d4df) main_vorec_pane

0x3e94,	// (0x000937e7) popup_blid_sat_info_window_ParamLimits

0x3e94,	// (0x000937e7) popup_blid_sat_info_window

0x3ef8,	// (0x0009384b) popup_dyc_status_message_window_ParamLimits

0x3ef8,	// (0x0009384b) popup_dyc_status_message_window

0x3f12,	// (0x00093865) popup_grid_large_graphic_window_ParamLimits

0x3f12,	// (0x00093865) popup_grid_large_graphic_window

0x3fd4,	// (0x00093927) popup_loc_request_window_ParamLimits

0x3fd4,	// (0x00093927) popup_loc_request_window

0x4110,	// (0x00093a63) popup_wml_address_window_ParamLimits

0x4110,	// (0x00093a63) popup_wml_address_window

0x3c7c,	// (0x000935cf) call_muted_g1

0x390d,	// (0x00093260) popup_call_audio_conf_window_ParamLimits

0x390d,	// (0x00093260) popup_call_audio_conf_window

0x3c8c,	// (0x000935df) popup_call_audio_first_window_ParamLimits

0x3c8c,	// (0x000935df) popup_call_audio_first_window

0x3d02,	// (0x00093655) popup_call_audio_in_window_ParamLimits

0x3d02,	// (0x00093655) popup_call_audio_in_window

0x3d3e,	// (0x00093691) popup_call_audio_out_window_ParamLimits

0x3d3e,	// (0x00093691) popup_call_audio_out_window

0x3d78,	// (0x000936cb) popup_call_audio_second_window_ParamLimits

0x3d78,	// (0x000936cb) popup_call_audio_second_window

0x3dce,	// (0x00093721) popup_call_audio_wait_window_ParamLimits

0x3dce,	// (0x00093721) popup_call_audio_wait_window

0x3e03,	// (0x00093756) popup_number_entry_window_ParamLimits

0x3e03,	// (0x00093756) popup_number_entry_window

0x0e50,	// (0x000907a3) bg_popup_call_pane_cp05_ParamLimits

0x0e50,	// (0x000907a3) bg_popup_call_pane_cp05

0x0e70,	// (0x000907c3) popup_number_entry_window_t1

0x0e83,	// (0x000907d6) popup_number_entry_window_t2

0x0e95,	// (0x000907e8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009ea3f) popup_number_entry_window_t

0x0edc,	// (0x0009082f) text_title_cp2

0x0eef,	// (0x00090842) bg_popup_call_pane_cp_ParamLimits

0x0eef,	// (0x00090842) bg_popup_call_pane_cp

0x0efd,	// (0x00090850) call_thumbnail_pane

0x0f05,	// (0x00090858) popup_call_audio_in_window_g1_ParamLimits

0x0f05,	// (0x00090858) popup_call_audio_in_window_g1

0x0f11,	// (0x00090864) popup_call_audio_in_window_g2_ParamLimits

0x0f11,	// (0x00090864) popup_call_audio_in_window_g2

0x0f1d,	// (0x00090870) popup_call_audio_in_window_g3_ParamLimits

0x0f1d,	// (0x00090870) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009ea48) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009ea48) popup_call_audio_in_window_g

0x0f29,	// (0x0009087c) popup_call_audio_in_window_t1_ParamLimits

0x0f29,	// (0x0009087c) popup_call_audio_in_window_t1

0x0f45,	// (0x00090898) popup_call_audio_in_window_t2_ParamLimits

0x0f45,	// (0x00090898) popup_call_audio_in_window_t2

0x9e9b,	// (0x000997ee) popup_call_audio_in_window_t3_ParamLimits

0x9e9b,	// (0x000997ee) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009ea4f) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009ea4f) popup_call_audio_in_window_t

0x0eef,	// (0x00090842) bg_popup_call_pane_cp01_ParamLimits

0x0eef,	// (0x00090842) bg_popup_call_pane_cp01

0x0efd,	// (0x00090850) call_thumbnail_pane_cp02

0x9eae,	// (0x00099801) call_type_pane_cp022

0x9eb6,	// (0x00099809) popup_call_audio_out_window_g1_ParamLimits

0x9eb6,	// (0x00099809) popup_call_audio_out_window_g1

0x9ec8,	// (0x0009981b) popup_call_audio_out_window_g2_ParamLimits

0x9ec8,	// (0x0009981b) popup_call_audio_out_window_g2

0x9ed4,	// (0x00099827) popup_call_audio_out_window_g3_ParamLimits

0x9ed4,	// (0x00099827) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009ea56) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009ea56) popup_call_audio_out_window_g

0x9ee6,	// (0x00099839) popup_call_audio_out_window_t1_ParamLimits

0x9ee6,	// (0x00099839) popup_call_audio_out_window_t1

0x9efe,	// (0x00099851) popup_call_audio_out_window_t2_ParamLimits

0x9efe,	// (0x00099851) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009ea5d) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009ea5d) popup_call_audio_out_window_t

0x9f13,	// (0x00099866) bg_popup_call_pane_ParamLimits

0x9f13,	// (0x00099866) bg_popup_call_pane

0x0f61,	// (0x000908b4) call_thumbnail_pane_cp_ParamLimits

0x0f61,	// (0x000908b4) call_thumbnail_pane_cp

0x9f97,	// (0x000998ea) call_type_pane_cp01_ParamLimits

0x9f97,	// (0x000998ea) call_type_pane_cp01

0x9fdb,	// (0x0009992e) popup_call_audio_first_window_g1_ParamLimits

0x9fdb,	// (0x0009992e) popup_call_audio_first_window_g1

0xa027,	// (0x0009997a) popup_call_audio_first_window_g2_ParamLimits

0xa027,	// (0x0009997a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009ea62) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009ea62) popup_call_audio_first_window_g

0xa06b,	// (0x000999be) popup_call_audio_first_window_t1_ParamLimits

0xa06b,	// (0x000999be) popup_call_audio_first_window_t1

0xa117,	// (0x00099a6a) popup_call_audio_first_window_t4_ParamLimits

0xa117,	// (0x00099a6a) popup_call_audio_first_window_t4

0xa1a3,	// (0x00099af6) popup_call_audio_first_window_t5_ParamLimits

0xa1a3,	// (0x00099af6) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009ea67) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009ea67) popup_call_audio_first_window_t

0xa1d2,	// (0x00099b25) bg_popup_call_pane_cp02

0xa1dc,	// (0x00099b2f) call_type_pane_cp023

0xa1e4,	// (0x00099b37) popup_call_audio_wait_window_g1

0xa1ec,	// (0x00099b3f) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009ea6e) popup_call_audio_wait_window_g

0xa1f4,	// (0x00099b47) popup_call_audio_wait_window_t3

0xa202,	// (0x00099b55) bg_popup_call_pane_cp03_ParamLimits

0xa202,	// (0x00099b55) bg_popup_call_pane_cp03

0xa262,	// (0x00099bb5) call_thumbnail_pane_cp011_ParamLimits

0xa262,	// (0x00099bb5) call_thumbnail_pane_cp011

0xa26e,	// (0x00099bc1) call_type_pane_cp034_ParamLimits

0xa26e,	// (0x00099bc1) call_type_pane_cp034

0xa2aa,	// (0x00099bfd) popup_call_audio_second_window_g1_ParamLimits

0xa2aa,	// (0x00099bfd) popup_call_audio_second_window_g1

0xa2e6,	// (0x00099c39) popup_call_audio_second_window_g2_ParamLimits

0xa2e6,	// (0x00099c39) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009ea73) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009ea73) popup_call_audio_second_window_g

0xa322,	// (0x00099c75) popup_call_audio_second_window_t1_ParamLimits

0xa322,	// (0x00099c75) popup_call_audio_second_window_t1

0xa3a3,	// (0x00099cf6) popup_call_audio_second_window_t2_ParamLimits

0xa3a3,	// (0x00099cf6) popup_call_audio_second_window_t2

0xa3d9,	// (0x00099d2c) popup_call_audio_second_window_t3_ParamLimits

0xa3d9,	// (0x00099d2c) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009ea78) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009ea78) popup_call_audio_second_window_t

0xa1d2,	// (0x00099b25) bg_popup_call_pane_cp04

0xa40f,	// (0x00099d62) list_conf_pane

0xa417,	// (0x00099d6a) popup_call_audio_conf_window_t1

0xa425,	// (0x00099d78) call_thumbnail_pane_g1

0xa42d,	// (0x00099d80) bg_pinb_pane_ParamLimits

0xa42d,	// (0x00099d80) bg_pinb_pane

0xa43b,	// (0x00099d8e) find_pinb_pane

0xa444,	// (0x00099d97) listscroll_pinb_pane_ParamLimits

0xa444,	// (0x00099d97) listscroll_pinb_pane

0xa453,	// (0x00099da6) pinb_bg_pane_g1

0x0f85,	// (0x000908d8) pinb_bg_pane_g2

0x0f91,	// (0x000908e4) pinb_bg_pane_g3

0x0f9d,	// (0x000908f0) pinb_bg_pane_g4

0x0fa9,	// (0x000908fc) pinb_bg_pane_g5

0x0fb5,	// (0x00090908) pinb_bg_pane_g6

0x0fc0,	// (0x00090913) pinb_bg_pane_g7

0x0fcb,	// (0x0009091e) pinb_bg_pane_g8

0x0fd6,	// (0x00090929) pinb_bg_pane_g9

0x0fe0,	// (0x00090933) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009ea7f) pinb_bg_pane_g

0x0ffd,	// (0x00090950) grid_pinb_pane

0x1008,	// (0x0009095b) list_pinb_pane

0x1013,	// (0x00090966) scroll_pane_cp01_ParamLimits

0x1013,	// (0x00090966) scroll_pane_cp01

0xa45d,	// (0x00099db0) find_pinb_pane_g1_ParamLimits

0xa45d,	// (0x00099db0) find_pinb_pane_g1

0xa475,	// (0x00099dc8) find_pinb_pane_t1

0xa487,	// (0x00099dda) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009ea99) find_pinb_pane_t

0xa49c,	// (0x00099def) input_focus_pane_cp01_ParamLimits

0xa49c,	// (0x00099def) input_focus_pane_cp01

0x1025,	// (0x00090978) cell_pinb_pane_ParamLimits

0x1025,	// (0x00090978) cell_pinb_pane

0x1047,	// (0x0009099a) cell_pinb_pane_g1_ParamLimits

0x1047,	// (0x0009099a) cell_pinb_pane_g1

0x105b,	// (0x000909ae) cell_pinb_pane_g2_ParamLimits

0x105b,	// (0x000909ae) cell_pinb_pane_g2

0xa4a8,	// (0x00099dfb) cell_pinb_pane_g3_ParamLimits

0xa4a8,	// (0x00099dfb) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009ea9e) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009ea9e) cell_pinb_pane_g

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp01

0x1067,	// (0x000909ba) list_pinb_item_pane_ParamLimits

0x1067,	// (0x000909ba) list_pinb_item_pane

0xa1d2,	// (0x00099b25) list_highlight_pane_cp02

0x107a,	// (0x000909cd) list_pinb_item_pane_g1_ParamLimits

0x107a,	// (0x000909cd) list_pinb_item_pane_g1

0x1087,	// (0x000909da) list_pinb_item_pane_g2_ParamLimits

0x1087,	// (0x000909da) list_pinb_item_pane_g2

0x1093,	// (0x000909e6) list_pinb_item_pane_g3_ParamLimits

0x1093,	// (0x000909e6) list_pinb_item_pane_g3

0x10a4,	// (0x000909f7) list_pinb_item_pane_g4_ParamLimits

0x10a4,	// (0x000909f7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009eaa5) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009eaa5) list_pinb_item_pane_g

0x10b0,	// (0x00090a03) list_pinb_item_pane_t1_ParamLimits

0x10b0,	// (0x00090a03) list_pinb_item_pane_t1

0x10e5,	// (0x00090a38) calc_display_pane

0x110b,	// (0x00090a5e) calc_paper_pane

0x112e,	// (0x00090a81) grid_calc_pane

0xa1d2,	// (0x00099b25) bg_list_pane_cp01

0x115c,	// (0x00090aaf) clock_g1

0x1164,	// (0x00090ab7) clock_g2

0x0001,

0xf15b,	// (0x0009eaae) clock_g

0x116c,	// (0x00090abf) clock_t1_ParamLimits

0x116c,	// (0x00090abf) clock_t1

0x1181,	// (0x00090ad4) clock_t2_ParamLimits

0x1181,	// (0x00090ad4) clock_t2

0x1193,	// (0x00090ae6) clock_t3_ParamLimits

0x1193,	// (0x00090ae6) clock_t3

0x11a5,	// (0x00090af8) clock_t4_ParamLimits

0x11a5,	// (0x00090af8) clock_t4

0x11b7,	// (0x00090b0a) clock_t5_ParamLimits

0x11b7,	// (0x00090b0a) clock_t5

0x11cc,	// (0x00090b1f) clock_t6_ParamLimits

0x11cc,	// (0x00090b1f) clock_t6

0x11de,	// (0x00090b31) clock_t7_ParamLimits

0x11de,	// (0x00090b31) clock_t7

0x11f0,	// (0x00090b43) clock_t8_ParamLimits

0x11f0,	// (0x00090b43) clock_t8

0x1204,	// (0x00090b57) clock_t9_ParamLimits

0x1204,	// (0x00090b57) clock_t9

0x0008,

0xf160,	// (0x0009eab3) clock_t_ParamLimits

0xf160,	// (0x0009eab3) clock_t

0xa4bc,	// (0x00099e0f) popup_clock_analogue_window_cp02

0xa4bc,	// (0x00099e0f) popup_clock_digital_window_cp01

0xa4c4,	// (0x00099e17) listscroll_help_pane

0xa1d2,	// (0x00099b25) phob_pre_status_pane

0xa4ce,	// (0x00099e21) grid_qdial_pane

0xa1d2,	// (0x00099b25) listscroll_mce_pane

0xa4d8,	// (0x00099e2b) bg_notes_pane

0xa4e2,	// (0x00099e35) list_notes_pane

0x121a,	// (0x00090b6d) scroll_pane_cp06

0xa4ec,	// (0x00099e3f) bg_calc_paper_pane

0xa50a,	// (0x00099e5d) list_calc_pane

0xa524,	// (0x00099e77) bg_calc_display_pane

0x1225,	// (0x00090b78) calc_display_pane_t1

0x1237,	// (0x00090b8a) calc_display_pane_t2

0xa530,	// (0x00099e83) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009eac6) calc_display_pane_t

0x1249,	// (0x00090b9c) cell_calc_pane_ParamLimits

0x1249,	// (0x00090b9c) cell_calc_pane

0xa542,	// (0x00099e95) bg_calc_paper_pane_g1

0xa54e,	// (0x00099ea1) bg_calc_paper_pane_g2

0xa55a,	// (0x00099ead) bg_calc_paper_pane_g3

0xa566,	// (0x00099eb9) bg_calc_paper_pane_g4

0xa572,	// (0x00099ec5) bg_calc_paper_pane_g5

0x1284,	// (0x00090bd7) bg_calc_paper_pane_g6

0x1297,	// (0x00090bea) bg_calc_paper_pane_g7

0x12aa,	// (0x00090bfd) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009eacd) bg_calc_paper_pane_g

0x12bb,	// (0x00090c0e) calc_bg_paper_pane_g9

0x12cc,	// (0x00090c1f) list_calc_item_pane_ParamLimits

0x12cc,	// (0x00090c1f) list_calc_item_pane

0xa57e,	// (0x00099ed1) list_calc_item_pane_g1

0xa58b,	// (0x00099ede) list_calc_item_pane_t1_ParamLimits

0xa58b,	// (0x00099ede) list_calc_item_pane_t1

0x12e0,	// (0x00090c33) list_calc_item_pane_t2_ParamLimits

0x12e0,	// (0x00090c33) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009eade) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009eade) list_calc_item_pane_t

0xa59d,	// (0x00099ef0) cell_calc_pane_g1

0xa5a7,	// (0x00099efa) grid_highlight_pane_cp02

0xa5c9,	// (0x00099f1c) bg_calc_display_pane_g1

0xa5d2,	// (0x00099f25) bg_calc_display_pane_g2

0xa5dc,	// (0x00099f2f) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009eae8) bg_calc_display_pane_g

0x1312,	// (0x00090c65) cell_qdial_pane_ParamLimits

0x1312,	// (0x00090c65) cell_qdial_pane

0x1328,	// (0x00090c7b) cell_qdial_pane_g1_ParamLimits

0x1328,	// (0x00090c7b) cell_qdial_pane_g1

0x133e,	// (0x00090c91) cell_qdial_pane_g2_ParamLimits

0x133e,	// (0x00090c91) cell_qdial_pane_g2

0xa5e5,	// (0x00099f38) cell_qdial_pane_g3_ParamLimits

0xa5e5,	// (0x00099f38) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009eaef) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009eaef) cell_qdial_pane_g

0x1364,	// (0x00090cb7) cell_qdial_pane_t1_ParamLimits

0x1364,	// (0x00090cb7) cell_qdial_pane_t1

0x137c,	// (0x00090ccf) cell_qdial_pane_t2_ParamLimits

0x137c,	// (0x00090ccf) cell_qdial_pane_t2

0x138f,	// (0x00090ce2) cell_qdial_pane_t3_ParamLimits

0x138f,	// (0x00090ce2) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009eaf8) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009eaf8) cell_qdial_pane_t

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp04

0xa5f1,	// (0x00099f44) thumbnail_qdial_pane_ParamLimits

0xa5f1,	// (0x00099f44) thumbnail_qdial_pane

0xa64d,	// (0x00099fa0) list_help_pane

0xa656,	// (0x00099fa9) scroll_pane_cp02

0x13a2,	// (0x00090cf5) help_list_pane_t1_ParamLimits

0x13a2,	// (0x00090cf5) help_list_pane_t1

0xa65f,	// (0x00099fb2) bg_notes_pane_g2

0xa667,	// (0x00099fba) bg_notes_pane_g3

0xa66f,	// (0x00099fc2) notes_bg_pane_g1

0xa677,	// (0x00099fca) notes_bg_pane_g4

0xa67f,	// (0x00099fd2) notes_bg_pane_g5

0xa687,	// (0x00099fda) notes_bg_pane_g6

0xa68f,	// (0x00099fe2) notes_bg_pane_g7

0xa697,	// (0x00099fea) notes_bg_pane_g8

0xa69f,	// (0x00099ff2) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009eb16) notes_bg_pane_g

0xa6a7,	// (0x00099ffa) list_notes_text_pane_ParamLimits

0xa6a7,	// (0x00099ffa) list_notes_text_pane

0xa6be,	// (0x0009a011) list_notes_text_pane_g1

0x13c6,	// (0x00090d19) list_notes_text_pane_t1

0xa524,	// (0x00099e77) listscroll_cale_week_pane

0x13f1,	// (0x00090d44) bg_cale_heading_pane

0xa6d8,	// (0x0009a02b) bg_cale_pane_cp01

0x140d,	// (0x00090d60) cale_week_corner_pane

0x1423,	// (0x00090d76) cale_week_day_heading_pane

0x143f,	// (0x00090d92) cale_week_scroll_pane_g1

0x1458,	// (0x00090dab) cale_week_scroll_pane_g2

0x1469,	// (0x00090dbc) cale_week_scroll_pane_g3

0x147a,	// (0x00090dcd) cale_week_scroll_pane_g4

0x148b,	// (0x00090dde) cale_week_scroll_pane_g5

0x149c,	// (0x00090def) cale_week_scroll_pane_g6

0x14ad,	// (0x00090e00) cale_week_scroll_pane_g7

0x14be,	// (0x00090e11) cale_week_scroll_pane_g8

0x14cf,	// (0x00090e22) cale_week_scroll_pane_g9

0x14e0,	// (0x00090e33) cale_week_scroll_pane_g10

0x14f1,	// (0x00090e44) cale_week_scroll_pane_g11

0x1502,	// (0x00090e55) cale_week_scroll_pane_g12

0x1513,	// (0x00090e66) cale_week_scroll_pane_g13

0x152c,	// (0x00090e7f) cale_week_scroll_pane_g14

0x1545,	// (0x00090e98) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009eb25) cale_week_scroll_pane_g

0x155e,	// (0x00090eb1) cale_week_time_pane

0x156f,	// (0x00090ec2) grid_cale_week_pane

0x158a,	// (0x00090edd) scroll_pane_cp08

0x15a2,	// (0x00090ef5) cell_cale_week_pane_ParamLimits

0x15a2,	// (0x00090ef5) cell_cale_week_pane

0x15ea,	// (0x00090f3d) cale_week_day_heading_pane_t1

0x15fe,	// (0x00090f51) cale_week_day_heading_pane_t2

0x1612,	// (0x00090f65) cale_week_day_heading_pane_t3

0x1626,	// (0x00090f79) cale_week_day_heading_pane_t4

0x163a,	// (0x00090f8d) cale_week_day_heading_pane_t5

0x164e,	// (0x00090fa1) cale_week_day_heading_pane_t6

0x1662,	// (0x00090fb5) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009eb44) cale_week_day_heading_pane_t

0xa703,	// (0x0009a056) bg_cale_side_pane

0x1676,	// (0x00090fc9) cale_week_time_pane_t1

0x168e,	// (0x00090fe1) cale_week_time_pane_t2

0x16a6,	// (0x00090ff9) cale_week_time_pane_t3

0x16be,	// (0x00091011) cale_week_time_pane_t4

0x16d6,	// (0x00091029) cale_week_time_pane_t5

0x16ee,	// (0x00091041) cale_week_time_pane_t6

0x1706,	// (0x00091059) cale_week_time_pane_t7

0x1722,	// (0x00091075) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009eb53) cale_week_time_pane_t

0x1742,	// (0x00091095) cell_cale_week_pane_g2

0x1753,	// (0x000910a6) cell_cale_week_pane_g3_ParamLimits

0x1753,	// (0x000910a6) cell_cale_week_pane_g3

0xa711,	// (0x0009a064) grid_highlight_pane_cp07

0xa719,	// (0x0009a06c) listscroll_gms_pane

0xa723,	// (0x0009a076) grid_gms_pane

0xa72c,	// (0x0009a07f) listscroll_gms_pane_g1

0xa734,	// (0x0009a087) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009eb64) listscroll_gms_pane_g

0x176b,	// (0x000910be) scroll_pane_cp010

0x1776,	// (0x000910c9) cell_gms_pane_ParamLimits

0x1776,	// (0x000910c9) cell_gms_pane

0x1790,	// (0x000910e3) cell_gms_pane_g1

0xa73c,	// (0x0009a08f) cell_gms_pane_g2

0xa744,	// (0x0009a097) cell_gms_pane_g3

0xa74d,	// (0x0009a0a0) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009eb69) cell_gms_pane_g

0xa756,	// (0x0009a0a9) grid_highlight_pane_cp09

0x3c24,	// (0x00093577) phob_pre_status_pane_g1

0x3c2c,	// (0x0009357f) phob_pre_status_pane_g2

0x3c34,	// (0x00093587) phob_pre_status_pane_g3

0x3c3c,	// (0x0009358f) phob_pre_status_pane_g4

0x0004,

0xf554,	// (0x0009eea7) phob_pre_status_pane_g

0x3c4c,	// (0x0009359f) phob_pre_status_pane_t1

0x3c5c,	// (0x000935af) phob_pre_status_pane_t2

0x3c6c,	// (0x000935bf) phob_pre_status_pane_t3

0x0002,

0xf55f,	// (0x0009eeb2) phob_pre_status_pane_t

0xa1d2,	// (0x00099b25) bg_list_pane_cp05

0x17a0,	// (0x000910f3) grid_vorec_pane

0xa75e,	// (0x0009a0b1) vorec_t1

0xa76c,	// (0x0009a0bf) vorec_t2

0xa77a,	// (0x0009a0cd) vorec_t3

0xa788,	// (0x0009a0db) vorec_t4

0xa796,	// (0x0009a0e9) vorec_t5

0xa7a4,	// (0x0009a0f7) vorec_t6

0x0006,

0xf21f,	// (0x0009eb72) vorec_t

0xa7c0,	// (0x0009a113) wait_bar_pane_cp01

0x17aa,	// (0x000910fd) cell_vorec_pane_ParamLimits

0x17aa,	// (0x000910fd) cell_vorec_pane

0xa7c8,	// (0x0009a11b) cell_vorec_pane_g1

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp05

0x17d5,	// (0x00091128) cams_zoom_pane

0x17e4,	// (0x00091137) image_vga_pane

0x17fe,	// (0x00091151) main_camera_pane_g1

0x1810,	// (0x00091163) main_camera_pane_g2

0x1820,	// (0x00091173) main_camera_pane_g3

0x1834,	// (0x00091187) main_camera_pane_g4

0x1848,	// (0x0009119b) main_camera_pane_g5

0x185c,	// (0x000911af) main_camera_pane_g6

0x1870,	// (0x000911c3) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009eb81) main_camera_pane_g

0x1884,	// (0x000911d7) main_camera_pane_t1

0x189a,	// (0x000911ed) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009eb92) main_camera_pane_t

0x18d8,	// (0x0009122b) cams_zoom_pane_cp_ParamLimits

0x18d8,	// (0x0009122b) cams_zoom_pane_cp

0x1900,	// (0x00091253) image_cif_pane_ParamLimits

0x1900,	// (0x00091253) image_cif_pane

0x193b,	// (0x0009128e) image_subqcif_pane

0x1945,	// (0x00091298) main_video_pane_g1_ParamLimits

0x1945,	// (0x00091298) main_video_pane_g1

0x1969,	// (0x000912bc) main_video_pane_g2_ParamLimits

0x1969,	// (0x000912bc) main_video_pane_g2

0x199f,	// (0x000912f2) main_video_pane_g3_ParamLimits

0x199f,	// (0x000912f2) main_video_pane_g3

0x19cd,	// (0x00091320) main_video_pane_g4_ParamLimits

0x19cd,	// (0x00091320) main_video_pane_g4

0x19fb,	// (0x0009134e) main_video_pane_g5_ParamLimits

0x19fb,	// (0x0009134e) main_video_pane_g5

0xa7de,	// (0x0009a131) main_video_pane_g6_ParamLimits

0xa7de,	// (0x0009a131) main_video_pane_g6

0x0006,

0xf244,	// (0x0009eb97) main_video_pane_g_ParamLimits

0xf244,	// (0x0009eb97) main_video_pane_g

0x1a24,	// (0x00091377) main_video_pane_t1_ParamLimits

0x1a24,	// (0x00091377) main_video_pane_t1

0xa7f8,	// (0x0009a14b) cams_zoom_pane_g1

0xa801,	// (0x0009a154) cams_zoom_pane_g2

0xa80a,	// (0x0009a15d) cams_zoom_pane_g3

0xa813,	// (0x0009a166) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0009eba6) cams_zoom_pane_g

0x1a81,	// (0x000913d4) grid_cams_pane

0x1a9b,	// (0x000913ee) linegrid_cams_pane

0x1aaf,	// (0x00091402) cell_cams_pane_ParamLimits

0x1aaf,	// (0x00091402) cell_cams_pane

0xa81c,	// (0x0009a16f) cams_burst_image_pane

0xa824,	// (0x0009a177) cell_cams_pane_g1

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp03

0xa59d,	// (0x00099ef0) mp_bg_pane_g1

0xa1d2,	// (0x00099b25) bg_list_pane_cp03

0xeeba,	// (0x0009e80d) bg_mp_pane

0xeec2,	// (0x0009e815) grid_mp_pane

0xeeca,	// (0x0009e81d) media_player_g1

0xeed4,	// (0x0009e827) media_player_t1

0xeee2,	// (0x0009e835) media_player_t2

0xeef0,	// (0x0009e843) media_player_t3

0xeefe,	// (0x0009e851) media_player_t4

0xef0c,	// (0x0009e85f) media_player_t5

0xef1a,	// (0x0009e86d) media_player_t6

0xef28,	// (0x0009e87b) media_player_t7

0x0006,

0x0108,	// (0x0008fa5b) media_player_t

0xef36,	// (0x0009e889) wait_bar_pane_cp02

0xf540,	// (0x0009ee93) main_usb_pane_t

0x3c1b,	// (0x0009356e) cell_mp_pane

0xa59d,	// (0x00099ef0) cell_mp_pane_g1

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp06

0xa82c,	// (0x0009a17f) grid_skin_colour_pane

0xa834,	// (0x0009a187) list_highlight_pane_cp03

0x1be8,	// (0x0009153b) skin_g1

0xa83c,	// (0x0009a18f) skin_t1

0xa84b,	// (0x0009a19e) skin_t2

0x0001,

0xf288,	// (0x0009ebdb) skin_t

0x1bf2,	// (0x00091545) cell_skin_colour_pane_ParamLimits

0x1bf2,	// (0x00091545) cell_skin_colour_pane

0xa859,	// (0x0009a1ac) cell_skin_colour_pane_g1

0x1c65,	// (0x000915b8) call_video_g1_ParamLimits

0x1c65,	// (0x000915b8) call_video_g1

0x1c81,	// (0x000915d4) call_video_g2_ParamLimits

0x1c81,	// (0x000915d4) call_video_g2

0x0001,

0xf28d,	// (0x0009ebe0) call_video_g_ParamLimits

0xf28d,	// (0x0009ebe0) call_video_g

0x1cc9,	// (0x0009161c) call_video_uplink_pane_cp1_ParamLimits

0x1cc9,	// (0x0009161c) call_video_uplink_pane_cp1

0xa86b,	// (0x0009a1be) call_video_uplink_pane_cp2

0x1d6a,	// (0x000916bd) video_down_crop_pane_ParamLimits

0x1d6a,	// (0x000916bd) video_down_crop_pane

0x1e53,	// (0x000917a6) video_down_pane_ParamLimits

0x1e53,	// (0x000917a6) video_down_pane

0xa873,	// (0x0009a1c6) video_down_subqcif_pane_ParamLimits

0xa873,	// (0x0009a1c6) video_down_subqcif_pane

0xa88d,	// (0x0009a1e0) video_down_subqcif_pane_cp_ParamLimits

0xa88d,	// (0x0009a1e0) video_down_subqcif_pane_cp

0xa8b3,	// (0x0009a206) im_reading_pane_ParamLimits

0xa8b3,	// (0x0009a206) im_reading_pane

0x1f5c,	// (0x000918af) im_writing_pane_ParamLimits

0x1f5c,	// (0x000918af) im_writing_pane

0x1f7a,	// (0x000918cd) im_reading_pane_t1

0xa8cd,	// (0x0009a220) list_im_pane

0xa8de,	// (0x0009a231) scroll_pane_cp07

0x1fb9,	// (0x0009190c) im_writing_pane_t1_ParamLimits

0x1fb9,	// (0x0009190c) im_writing_pane_t1

0xa8f7,	// (0x0009a24a) im_writing_pane_t2_ParamLimits

0xa8f7,	// (0x0009a24a) im_writing_pane_t2

0x0001,

0xf297,	// (0x0009ebea) im_writing_pane_t_ParamLimits

0xf297,	// (0x0009ebea) im_writing_pane_t

0xa1d2,	// (0x00099b25) input_focus_pane_cp04

0xa1d2,	// (0x00099b25) input_focus_pane_cp05

0x1fce,	// (0x00091921) list_im_single_pane_ParamLimits

0x1fce,	// (0x00091921) list_im_single_pane

0x1fe7,	// (0x0009193a) list_single_im_pane_t1

0x3bdb,	// (0x0009352e) blid_accuracy_pane

0x3be3,	// (0x00093536) blid_compass_pane

0x3bed,	// (0x00093540) main_location_t1

0x3bfd,	// (0x00093550) main_location_t2

0x3c0d,	// (0x00093560) main_location_t3

0x0002,

0xf54d,	// (0x0009eea0) main_location_t

0xa1d2,	// (0x00099b25) aid_levels_location

0xa59d,	// (0x00099ef0) blid_accuracy_pane_g1

0xa59d,	// (0x00099ef0) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0009ec4c) blid_accuracy_pane_g

0xa93f,	// (0x0009a292) wml_content_pane

0xa97d,	// (0x0009a2d0) wml_button_pane_ParamLimits

0xa97d,	// (0x0009a2d0) wml_button_pane

0x1ff6,	// (0x00091949) wml_list_single_large_pane_ParamLimits

0x1ff6,	// (0x00091949) wml_list_single_large_pane

0x200f,	// (0x00091962) wml_list_single_medium_pane_ParamLimits

0x200f,	// (0x00091962) wml_list_single_medium_pane

0x2029,	// (0x0009197c) wml_list_single_small_pane_ParamLimits

0x2029,	// (0x0009197c) wml_list_single_small_pane

0xa991,	// (0x0009a2e4) wml_selection_box_pane_ParamLimits

0xa991,	// (0x0009a2e4) wml_selection_box_pane

0xa9a4,	// (0x0009a2f7) wml_list_single_pane_t1

0xa9b3,	// (0x0009a306) wml_list_single_medium_pane_t1

0xa9c2,	// (0x0009a315) wml_list_single_large_pane_t1

0xa9d1,	// (0x0009a324) input_focus_pane_cp02_ParamLimits

0xa9d1,	// (0x0009a324) input_focus_pane_cp02

0xa9e4,	// (0x0009a337) wml_selection_box_pane_g1

0xa9ed,	// (0x0009a340) wml_selection_box_pane_t1_ParamLimits

0xa9ed,	// (0x0009a340) wml_selection_box_pane_t1

0xa42d,	// (0x00099d80) bg_wml_button_pane_ParamLimits

0xa42d,	// (0x00099d80) bg_wml_button_pane

0xaa05,	// (0x0009a358) wml_button_pane_g1

0xaa0d,	// (0x0009a360) wml_button_pane_t1

0xaa05,	// (0x0009a358) wml_button_bg_pane_g1

0xaa1d,	// (0x0009a370) wml_button_bg_pane_g2

0xaa25,	// (0x0009a378) wml_button_bg_pane_g3

0xaa2d,	// (0x0009a380) wml_button_bg_pane_g4

0xaa35,	// (0x0009a388) wml_button_bg_pane_g5

0xaa3d,	// (0x0009a390) wml_button_bg_pane_g6

0xaa45,	// (0x0009a398) wml_button_bg_pane_g7

0xaa4d,	// (0x0009a3a0) wml_button_bg_pane_g8

0xaa55,	// (0x0009a3a8) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0009ebef) wml_button_bg_pane_g

0x2048,	// (0x0009199b) bg_list_pane_cp02

0xaa5d,	// (0x0009a3b0) mce_header_pane_ParamLimits

0xaa5d,	// (0x0009a3b0) mce_header_pane

0xaa73,	// (0x0009a3c6) mce_icon_pane

0xaa73,	// (0x0009a3c6) mce_image_pane

0xaa7c,	// (0x0009a3cf) mce_text_pane_ParamLimits

0xaa7c,	// (0x0009a3cf) mce_text_pane

0x2052,	// (0x000919a5) scroll_pane_cp03

0xa975,	// (0x0009a2c8) scroll_pane_cp04

0xaa8f,	// (0x0009a3e2) scroll_pane_cp05_ParamLimits

0xaa8f,	// (0x0009a3e2) scroll_pane_cp05

0x205c,	// (0x000919af) mce_header_field_pane_ParamLimits

0x205c,	// (0x000919af) mce_header_field_pane

0x2075,	// (0x000919c8) mce_header_field_pane_2_ParamLimits

0x2075,	// (0x000919c8) mce_header_field_pane_2

0x208b,	// (0x000919de) mce_header_field_pane_3

0x2093,	// (0x000919e6) list_single_mce_message_pane_ParamLimits

0x2093,	// (0x000919e6) list_single_mce_message_pane

0x20af,	// (0x00091a02) list_single_mce_smart_pane_ParamLimits

0x20af,	// (0x00091a02) list_single_mce_smart_pane

0xaa9b,	// (0x0009a3ee) input_focus_pane_cp03

0xaaa4,	// (0x0009a3f7) list_header_data_pane

0x20d6,	// (0x00091a29) mce_header_field_pane_t1

0x20e6,	// (0x00091a39) list_single_mce_header_pane_ParamLimits

0x20e6,	// (0x00091a39) list_single_mce_header_pane

0xaaac,	// (0x0009a3ff) list_single_mce_header_pane_t1

0xaabb,	// (0x0009a40e) list_single_mce_message_pane_g1

0xaac3,	// (0x0009a416) list_single_mce_message_pane_t1

0x2118,	// (0x00091a6b) bg_cale_heading_pane_cp01_ParamLimits

0x2118,	// (0x00091a6b) bg_cale_heading_pane_cp01

0xaad1,	// (0x0009a424) bg_cale_pane_cp02_ParamLimits

0xaad1,	// (0x0009a424) bg_cale_pane_cp02

0x214b,	// (0x00091a9e) cale_month_corner_pane

0x2161,	// (0x00091ab4) cale_month_day_heading_pane_ParamLimits

0x2161,	// (0x00091ab4) cale_month_day_heading_pane

0x2194,	// (0x00091ae7) cale_month_pane_g1_ParamLimits

0x2194,	// (0x00091ae7) cale_month_pane_g1

0x21c0,	// (0x00091b13) cale_month_pane_g2_ParamLimits

0x21c0,	// (0x00091b13) cale_month_pane_g2

0x21e1,	// (0x00091b34) cale_month_pane_g3_ParamLimits

0x21e1,	// (0x00091b34) cale_month_pane_g3

0x221d,	// (0x00091b70) cale_month_pane_g4_ParamLimits

0x221d,	// (0x00091b70) cale_month_pane_g4

0x2259,	// (0x00091bac) cale_month_pane_g5_ParamLimits

0x2259,	// (0x00091bac) cale_month_pane_g5

0x2295,	// (0x00091be8) cale_month_pane_g6_ParamLimits

0x2295,	// (0x00091be8) cale_month_pane_g6

0x22d1,	// (0x00091c24) cale_month_pane_g7_ParamLimits

0x22d1,	// (0x00091c24) cale_month_pane_g7

0x230d,	// (0x00091c60) cale_month_pane_g8_ParamLimits

0x230d,	// (0x00091c60) cale_month_pane_g8

0x2349,	// (0x00091c9c) cale_month_pane_g9_ParamLimits

0x2349,	// (0x00091c9c) cale_month_pane_g9

0x237f,	// (0x00091cd2) cale_month_pane_g10_ParamLimits

0x237f,	// (0x00091cd2) cale_month_pane_g10

0x23a9,	// (0x00091cfc) cale_month_pane_g11_ParamLimits

0x23a9,	// (0x00091cfc) cale_month_pane_g11

0x23d3,	// (0x00091d26) cale_month_pane_g12_ParamLimits

0x23d3,	// (0x00091d26) cale_month_pane_g12

0x2401,	// (0x00091d54) cale_month_pane_g13_ParamLimits

0x2401,	// (0x00091d54) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0009ec02) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0009ec02) cale_month_pane_g

0x242f,	// (0x00091d82) cale_month_week_pane

0x2440,	// (0x00091d93) grid_cale_month_pane_ParamLimits

0x2440,	// (0x00091d93) grid_cale_month_pane

0x246e,	// (0x00091dc1) cale_month_day_heading_pane_t1

0x24cc,	// (0x00091e1f) cale_month_day_heading_pane_t2

0x2531,	// (0x00091e84) cale_month_day_heading_pane_t3

0x2596,	// (0x00091ee9) cale_month_day_heading_pane_t4

0x25fb,	// (0x00091f4e) cale_month_day_heading_pane_t5

0x2660,	// (0x00091fb3) cale_month_day_heading_pane_t6

0x26c5,	// (0x00092018) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0009ec1d) cale_month_day_heading_pane_t

0xa703,	// (0x0009a056) bg_cale_side_pane_cp01

0x272a,	// (0x0009207d) cale_month_week_pane_t1

0x2741,	// (0x00092094) cale_month_week_pane_t2

0x2758,	// (0x000920ab) cale_month_week_pane_t3

0x276f,	// (0x000920c2) cale_month_week_pane_t4

0x2786,	// (0x000920d9) cale_month_week_pane_t5

0x279d,	// (0x000920f0) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0009ec2c) cale_month_week_pane_t

0x27bc,	// (0x0009210f) cell_cale_month_pane_ParamLimits

0x27bc,	// (0x0009210f) cell_cale_month_pane

0xab06,	// (0x0009a459) cell_cale_month_pane_g1

0x2894,	// (0x000921e7) cell_cale_month_pane_t1_ParamLimits

0x2894,	// (0x000921e7) cell_cale_month_pane_t1

0xa711,	// (0x0009a064) grid_highlight_pane_cp08

0xa59d,	// (0x00099ef0) main_smil_g1

0x28b0,	// (0x00092203) smil_status_pane

0xab12,	// (0x0009a465) smil_text_pane

0xedd8,	// (0x0009e72b) bg_popup_call3_rect_pane_g8

0xede0,	// (0x0009e733) bg_popup_call3_rect_pane_g9

0x0008,

0xf528,	// (0x0009ee7b) bg_popup_call3_rect_pane_g

0xf075,	// (0x0009e9c8) smil_status_volume_pane_g1

0xab1c,	// (0x0009a46f) smil_status_pane_t1

0xaf1d,	// (0x0009a870) volume_smil_pane

0xab33,	// (0x0009a486) list_smil_text_pane

0x28c5,	// (0x00092218) scroll_pane_cp011

0x28d0,	// (0x00092223) smil_text_list_pane_t1_ParamLimits

0x28d0,	// (0x00092223) smil_text_list_pane_t1

0xab3d,	// (0x0009a490) aid_volume_smil_ParamLimits

0xab3d,	// (0x0009a490) aid_volume_smil

0xa59d,	// (0x00099ef0) smil_volume_pane_g1

0xa59d,	// (0x00099ef0) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0009ec4c) smil_volume_pane_g

0xa524,	// (0x00099e77) listscroll_cale_day_pane

0xab5f,	// (0x0009a4b2) bg_cale_pane

0xab77,	// (0x0009a4ca) list_cale_pane

0xab88,	// (0x0009a4db) scroll_pane_cp09

0xab99,	// (0x0009a4ec) cale_bg_pane_g1

0xaba1,	// (0x0009a4f4) cale_bg_pane_g2

0xaba9,	// (0x0009a4fc) cale_bg_pane_g3

0xabb1,	// (0x0009a504) cale_bg_pane_g4

0xabb9,	// (0x0009a50c) cale_bg_pane_g5

0xabc1,	// (0x0009a514) cale_bg_pane_g6

0xabc9,	// (0x0009a51c) cale_bg_pane_g7

0xabd1,	// (0x0009a524) cale_bg_pane_g8

0xabd9,	// (0x0009a52c) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0009ec51) cale_bg_pane_g

0x2925,	// (0x00092278) list_cale_time_pane_ParamLimits

0x2925,	// (0x00092278) list_cale_time_pane

0x293a,	// (0x0009228d) list_cale_time_pane_g1_ParamLimits

0x293a,	// (0x0009228d) list_cale_time_pane_g1

0xabe1,	// (0x0009a534) list_cale_time_pane_g2_ParamLimits

0xabe1,	// (0x0009a534) list_cale_time_pane_g2

0x2946,	// (0x00092299) list_cale_time_pane_g3_ParamLimits

0x2946,	// (0x00092299) list_cale_time_pane_g3

0x2954,	// (0x000922a7) list_cale_time_pane_g4_ParamLimits

0x2954,	// (0x000922a7) list_cale_time_pane_g4

0x2962,	// (0x000922b5) list_cale_time_pane_g5_ParamLimits

0x2962,	// (0x000922b5) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0009ec64) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0009ec64) list_cale_time_pane_g

0x2970,	// (0x000922c3) list_cale_time_pane_t1_ParamLimits

0x2970,	// (0x000922c3) list_cale_time_pane_t1

0x2998,	// (0x000922eb) list_cale_time_pane_t2_ParamLimits

0x2998,	// (0x000922eb) list_cale_time_pane_t2

0x2d85,	// (0x000926d8) aid_blid_cardinal_pane

0x2dc7,	// (0x0009271a) compass_pane_t4

0x29c0,	// (0x00092313) list_cale_time_pane_t4_ParamLimits

0x29c0,	// (0x00092313) list_cale_time_pane_t4

0x2dd5,	// (0x00092728) compass_pane_t5

0x2de5,	// (0x00092738) compass_pane_t6

0x2df3,	// (0x00092746) compass_pane_t7

0xd88a,	// (0x0009d1dd) navi_pane_cc_t1

0xdc33,	// (0x0009d586) aid_phob_thumbnail_center_pane

0x35a1,	// (0x00092ef4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0009ec71) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0009ec71) list_cale_time_pane_t

0x0eef,	// (0x00090842) bg_popup_window_pane_cp02_ParamLimits

0x0eef,	// (0x00090842) bg_popup_window_pane_cp02

0xabfb,	// (0x0009a54e) heading_pane_cp01_ParamLimits

0xabfb,	// (0x0009a54e) heading_pane_cp01

0xac07,	// (0x0009a55a) loc_req_pane_ParamLimits

0xac07,	// (0x0009a55a) loc_req_pane

0xac17,	// (0x0009a56a) loc_type_pane_ParamLimits

0xac17,	// (0x0009a56a) loc_type_pane

0xac29,	// (0x0009a57c) loc_type_pane_t1_ParamLimits

0xac29,	// (0x0009a57c) loc_type_pane_t1

0xac3b,	// (0x0009a58e) loc_type_pane_t2_ParamLimits

0xac3b,	// (0x0009a58e) loc_type_pane_t2

0xac4d,	// (0x0009a5a0) loc_type_pane_t3_ParamLimits

0xac4d,	// (0x0009a5a0) loc_type_pane_t3

0x0002,

0xf325,	// (0x0009ec78) loc_type_pane_t_ParamLimits

0xf325,	// (0x0009ec78) loc_type_pane_t

0xac5f,	// (0x0009a5b2) list_loc_req_pane

0xac69,	// (0x0009a5bc) scroll_pane_cp012

0x29e8,	// (0x0009233b) list_single_loc_request_popup_menu_pane_ParamLimits

0x29e8,	// (0x0009233b) list_single_loc_request_popup_menu_pane

0xac74,	// (0x0009a5c7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac74,	// (0x0009a5c7) list_single_loc_request_popup_menu_pane_g1

0xac80,	// (0x0009a5d3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac80,	// (0x0009a5d3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0009ec7f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0009ec7f) list_single_loc_request_popup_menu_pane_g

0xac8c,	// (0x0009a5df) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac8c,	// (0x0009a5df) list_single_loc_request_popup_menu_pane_t1

0xa42d,	// (0x00099d80) bg_popup_window_pane_cp03_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_window_pane_cp03

0xaca2,	// (0x0009a5f5) heading_loc_req_pane_ParamLimits

0xaca2,	// (0x0009a5f5) heading_loc_req_pane

0x29f5,	// (0x00092348) popup_dyc_status_message_window_g1_ParamLimits

0x29f5,	// (0x00092348) popup_dyc_status_message_window_g1

0x2a09,	// (0x0009235c) popup_dyc_status_message_window_t1_ParamLimits

0x2a09,	// (0x0009235c) popup_dyc_status_message_window_t1

0x2a1e,	// (0x00092371) popup_dyc_status_message_window_t2_ParamLimits

0x2a1e,	// (0x00092371) popup_dyc_status_message_window_t2

0x2a33,	// (0x00092386) popup_dyc_status_message_window_t3_ParamLimits

0x2a33,	// (0x00092386) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0009ec84) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0009ec84) popup_dyc_status_message_window_t

0xa1d2,	// (0x00099b25) bg_heading_pane_cp01

0xacae,	// (0x0009a601) heading_loc_req_pane_g1

0xacb6,	// (0x0009a609) heading_loc_req_pane_g2

0xacbe,	// (0x0009a611) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0009ec8b) heading_loc_req_pane_g

0xacc6,	// (0x0009a619) heading_loc_req_pane_t1

0xacd6,	// (0x0009a629) bg_popup_sub_pane_cp01_ParamLimits

0xacd6,	// (0x0009a629) bg_popup_sub_pane_cp01

0xace4,	// (0x0009a637) popup_cale_events_window_g1_ParamLimits

0xace4,	// (0x0009a637) popup_cale_events_window_g1

0xad04,	// (0x0009a657) popup_cale_events_window_g2_ParamLimits

0xad04,	// (0x0009a657) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0009ecbf) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0009ecbf) popup_cale_events_window_g

0xad24,	// (0x0009a677) popup_cale_events_window_t1_ParamLimits

0xad24,	// (0x0009a677) popup_cale_events_window_t1

0xad36,	// (0x0009a689) popup_cale_events_window_t2_ParamLimits

0xad36,	// (0x0009a689) popup_cale_events_window_t2

0xad74,	// (0x0009a6c7) popup_cale_events_window_t3_ParamLimits

0xad74,	// (0x0009a6c7) popup_cale_events_window_t3

0xadae,	// (0x0009a701) popup_cale_events_window_t4_ParamLimits

0xadae,	// (0x0009a701) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0009ecc4) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0009ecc4) popup_cale_events_window_t

0x2b38,	// (0x0009248b) call_type_pane

0x2b48,	// (0x0009249b) popup_call_status_window_g1

0x2b5c,	// (0x000924af) popup_call_status_window_g2

0x2b70,	// (0x000924c3) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0009eccd) popup_call_status_window_g

0xade4,	// (0x0009a737) call_type_pane_g1

0xaded,	// (0x0009a740) call_type_pane_g2

0x0001,

0xf381,	// (0x0009ecd4) call_type_pane_g

0xa1d2,	// (0x00099b25) bg_popup_sub_pane_cp02

0xadf6,	// (0x0009a749) listscroll_popup_wml_pane

0xadfe,	// (0x0009a751) list_wml_pane

0xae08,	// (0x0009a75b) scroll_pane_cp013

0xae13,	// (0x0009a766) list_single_graphic_popup_wml_pane_ParamLimits

0xae13,	// (0x0009a766) list_single_graphic_popup_wml_pane

0xa59d,	// (0x00099ef0) list_single_graphic_popup_wml_pane_g1

0xae27,	// (0x0009a77a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0009ecd9) list_single_graphic_popup_wml_pane_g

0xae2f,	// (0x0009a782) list_single_graphic_popup_wml_pane_t1

0xae45,	// (0x0009a798) aid_call_pane

0xa425,	// (0x00099d78) popup_clock_analogue_window_g1

0xa425,	// (0x00099d78) popup_clock_analogue_window_g2

0xae4d,	// (0x0009a7a0) popup_clock_analogue_window_g3

0xae4d,	// (0x0009a7a0) popup_clock_analogue_window_g4

0xa59d,	// (0x00099ef0) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0009ecde) popup_clock_analogue_window_g

0xae55,	// (0x0009a7a8) popup_clock_analogue_window_t1

0xae63,	// (0x0009a7b6) clock_digital_number_pane_ParamLimits

0xae63,	// (0x0009a7b6) clock_digital_number_pane

0xae6f,	// (0x0009a7c2) clock_digital_number_pane_cp02_ParamLimits

0xae6f,	// (0x0009a7c2) clock_digital_number_pane_cp02

0xae7b,	// (0x0009a7ce) clock_digital_number_pane_cp03_ParamLimits

0xae7b,	// (0x0009a7ce) clock_digital_number_pane_cp03

0xae87,	// (0x0009a7da) clock_digital_number_pane_cp04_ParamLimits

0xae87,	// (0x0009a7da) clock_digital_number_pane_cp04

0xae93,	// (0x0009a7e6) clock_digital_separator_pane_ParamLimits

0xae93,	// (0x0009a7e6) clock_digital_separator_pane

0xae9f,	// (0x0009a7f2) popup_clock_digital_window_t1

0xa59d,	// (0x00099ef0) clock_digital_number_pane_g1

0xa59d,	// (0x00099ef0) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0009ec4c) clock_digital_number_pane_g

0xa59d,	// (0x00099ef0) clock_digital_separator_pane_g1

0xa59d,	// (0x00099ef0) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0009ec4c) clock_digital_separator_pane_g

0xa1d2,	// (0x00099b25) bg_popup_window_pane_cp04

0xd6ea,	// (0x0009d03d) heading_pane_cp03

0xd6f2,	// (0x0009d045) listscroll_popup_gms_pane

0xd6fa,	// (0x0009d04d) grid_large_graphic_popup_pane

0xd704,	// (0x0009d057) listscroll_popup_gms_pane_g1

0xd70c,	// (0x0009d05f) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0009ece9) listscroll_popup_gms_pane_g

0xa975,	// (0x0009a2c8) scroll_pane_cp014

0x2b80,	// (0x000924d3) cell_large_graphic_popup_pane_ParamLimits

0x2b80,	// (0x000924d3) cell_large_graphic_popup_pane

0x2b98,	// (0x000924eb) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b98,	// (0x000924eb) cell_large_graphic_popup_pane_g1

0xd714,	// (0x0009d067) cell_large_graphic_popup_pane_g2_ParamLimits

0xd714,	// (0x0009d067) cell_large_graphic_popup_pane_g2

0xd720,	// (0x0009d073) cell_large_graphic_popup_pane_g3_ParamLimits

0xd720,	// (0x0009d073) cell_large_graphic_popup_pane_g3

0xd72d,	// (0x0009d080) cell_large_graphic_popup_pane_g4_ParamLimits

0xd72d,	// (0x0009d080) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0009ecee) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0009ecee) cell_large_graphic_popup_pane_g

0xd73d,	// (0x0009d090) grid_highlight_pane_cp010

0xa59d,	// (0x00099ef0) bg_popup_call_pane_g1

0xd747,	// (0x0009d09a) list_single_graphic_popup_conf_pane_ParamLimits

0xd747,	// (0x0009d09a) list_single_graphic_popup_conf_pane

0xd759,	// (0x0009d0ac) list_highlight_pane_cp01

0xd762,	// (0x0009d0b5) list_single_graphic_popup_conf_pane_g1

0xd76a,	// (0x0009d0bd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0009ecf7) list_single_graphic_popup_conf_pane_g

0xd772,	// (0x0009d0c5) list_single_graphic_popup_conf_pane_t1

0xd780,	// (0x0009d0d3) linegrid_cams_pane_g1

0x2ba4,	// (0x000924f7) linegrid_cams_pane_g2

0xa744,	// (0x0009a097) linegrid_cams_pane_g3

0xd789,	// (0x0009d0dc) linegrid_cams_pane_g4

0x2bad,	// (0x00092500) linegrid_cams_pane_g5

0x2bb6,	// (0x00092509) linegrid_cams_pane_g6

0xa74d,	// (0x0009a0a0) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0009ecfc) linegrid_cams_pane_g

0xd792,	// (0x0009d0e5) popup_clock_analogue_window

0xd792,	// (0x0009d0e5) popup_clock_digital_window

0xa1d2,	// (0x00099b25) popup_phob_thumbnail_window

0xa59d,	// (0x00099ef0) call_video_uplink_pane_g1

0xd79b,	// (0x0009d0ee) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0009ed0b) call_video_uplink_pane_g

0xd7a3,	// (0x0009d0f6) video_uplink_pane

0xd7ab,	// (0x0009d0fe) mce_image_pane_g1

0x2bc1,	// (0x00092514) mce_image_pane_g2

0x2bcb,	// (0x0009251e) mce_image_pane_g3

0x2bd5,	// (0x00092528) mce_image_pane_g4

0x2bdd,	// (0x00092530) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0009ed10) mce_image_pane_g

0xd7b5,	// (0x0009d108) control_top_pane_stacon_cp01_ParamLimits

0xd7b5,	// (0x0009d108) control_top_pane_stacon_cp01

0xd7c9,	// (0x0009d11c) uni_indicator_pane_stacon_cp01_ParamLimits

0xd7c9,	// (0x0009d11c) uni_indicator_pane_stacon_cp01

0xd7da,	// (0x0009d12d) bg_popup_sub_pane_cp03

0x2be5,	// (0x00092538) chi_dic_find_pane

0x2bed,	// (0x00092540) listscroll_chi_dic_pane

0x2bf6,	// (0x00092549) main_pane_chidic_g1

0x2c09,	// (0x0009255c) chi_dic_find_pane_t1

0xd7e4,	// (0x0009d137) find_chidic_pane

0xd7ed,	// (0x0009d140) chi_dic_list_pane_ParamLimits

0xd7ed,	// (0x0009d140) chi_dic_list_pane

0xd7fe,	// (0x0009d151) scroll_pane_cp020

0x2c17,	// (0x0009256a) find_chidic_pane_t1

0xa1d2,	// (0x00099b25) input_focus_pane_cp06

0x2c26,	// (0x00092579) list_chi_dic_pane_ParamLimits

0x2c26,	// (0x00092579) list_chi_dic_pane

0x2c38,	// (0x0009258b) list_chi_dic_pane_t1_ParamLimits

0x2c38,	// (0x0009258b) list_chi_dic_pane_t1

0xa1d2,	// (0x00099b25) list_highlight_pane_cp020

0xd806,	// (0x0009d159) bg_cale_heading_pane_g1

0x2c4b,	// (0x0009259e) bg_cale_heading_pane_g2

0x2c53,	// (0x000925a6) bg_cale_heading_pane_g3

0x2c5b,	// (0x000925ae) bg_cale_heading_pane_g4

0x2c63,	// (0x000925b6) bg_cale_heading_pane_g5

0x2c6b,	// (0x000925be) bg_cale_heading_pane_g6

0x2c73,	// (0x000925c6) bg_cale_heading_pane_g7

0x2c7b,	// (0x000925ce) bg_cale_heading_pane_g8

0x2c83,	// (0x000925d6) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0009ed1b) bg_cale_heading_pane_g

0xd806,	// (0x0009d159) bg_cale_side_pane_g1

0x2c8b,	// (0x000925de) bg_cale_side_pane_g2

0x2c95,	// (0x000925e8) bg_cale_side_pane_g3

0x2c9f,	// (0x000925f2) bg_cale_side_pane_g4

0x2ca9,	// (0x000925fc) bg_cale_side_pane_g5

0x2cb3,	// (0x00092606) bg_cale_side_pane_g6

0x2cbd,	// (0x00092610) bg_cale_side_pane_g7

0x2cc7,	// (0x0009261a) bg_cale_side_pane_g8

0x2ccf,	// (0x00092622) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0009ed2e) bg_cale_side_pane_g

0x2cd7,	// (0x0009262a) popup_call_status_window_ParamLimits

0x2cd7,	// (0x0009262a) popup_call_status_window

0xd80e,	// (0x0009d161) stacon_top_pane

0xd816,	// (0x0009d169) status_pane_ParamLimits

0xd816,	// (0x0009d169) status_pane

0xd82b,	// (0x0009d17e) status_small_pane

0xd833,	// (0x0009d186) control_pane

0xa1d2,	// (0x00099b25) stacon_bottom_pane

0xd83b,	// (0x0009d18e) list_single_mce_smart_pane_t1_ParamLimits

0xd83b,	// (0x0009d18e) list_single_mce_smart_pane_t1

0xd84e,	// (0x0009d1a1) list_single_mce_smart_pane_t2_ParamLimits

0xd84e,	// (0x0009d1a1) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0009ed41) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0009ed41) list_single_mce_smart_pane_t

0x2d24,	// (0x00092677) compass_pane

0x2d2f,	// (0x00092682) main_location2_pane_t1

0x2d45,	// (0x00092698) main_location2_pane_t2

0x2d5b,	// (0x000926ae) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0009ed46) main_location2_pane_t

0xd86d,	// (0x0009d1c0) compass_pane_g1_ParamLimits

0xd86d,	// (0x0009d1c0) compass_pane_g1

0x2da9,	// (0x000926fc) compass_pane_t1

0x2db8,	// (0x0009270b) compass_pane_t2

0x0005,

0xf3fc,	// (0x0009ed4f) compass_pane_t

0x2e03,	// (0x00092756) text_secondary_cp61

0xd881,	// (0x0009d1d4) navi_pane_cams_g5

0xdaf8,	// (0x0009d44b) navi_pane_im_t1

0xdb06,	// (0x0009d459) navi_pane_mp_g1_ParamLimits

0xdb06,	// (0x0009d459) navi_pane_mp_g1

0xdb1a,	// (0x0009d46d) navi_pane_mp_g2_ParamLimits

0xdb1a,	// (0x0009d46d) navi_pane_mp_g2

0xdb26,	// (0x0009d479) navi_pane_mp_g3_ParamLimits

0xdb26,	// (0x0009d479) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0009ed63) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0009ed63) navi_pane_mp_g

0xdb32,	// (0x0009d485) navi_pane_mp_t1

0xdb40,	// (0x0009d493) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0009ed6a) navi_pane_mp_t

0xdb7c,	// (0x0009d4cf) navi_pane_vt_g1

0xdb32,	// (0x0009d485) navi_pane_vt_t1

0xdb84,	// (0x0009d4d7) navi_slider_pane

0xdb8c,	// (0x0009d4df) zooming_pane

0xdb94,	// (0x0009d4e7) navi_slider_pane_g1

0xaebc,	// (0x0009a80f) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0009ed71) navi_slider_pane_g

0xdbb8,	// (0x0009d50b) aid_levels_zoom

0xdbc0,	// (0x0009d513) zooming_pane_g1

0xdbc8,	// (0x0009d51b) zooming_pane_g2

0xdbc8,	// (0x0009d51b) zooming_pane_g3

0x0002,

0xf42d,	// (0x0009ed80) zooming_pane_g

0xdbd0,	// (0x0009d523) level_10_zoom

0xdbd9,	// (0x0009d52c) level_11_zoom

0xdbe2,	// (0x0009d535) level_1_zoom

0xdbeb,	// (0x0009d53e) level_2_zoom

0xdbf4,	// (0x0009d547) level_3_zoom

0xdbfd,	// (0x0009d550) level_4_zoom

0xdc06,	// (0x0009d559) level_5_zoom

0xdc0f,	// (0x0009d562) level_6_zoom

0xdc18,	// (0x0009d56b) level_7_zoom

0xdc21,	// (0x0009d574) level_8_zoom

0xdc2a,	// (0x0009d57d) level_9_zoom

0xdc3b,	// (0x0009d58e) popup_phob_thumbnail_window_g1

0xdc43,	// (0x0009d596) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0009ed87) popup_phob_thumbnail_window_g

0xef3e,	// (0x0009e891) level_1_location

0xef46,	// (0x0009e899) level_2_location

0xef4e,	// (0x0009e8a1) level_3_location

0xef56,	// (0x0009e8a9) level_4_location

0xdb8c,	// (0x0009d4df) level_5_location

0x2f2e,	// (0x00092881) mce_icon_pane_g1

0x2f36,	// (0x00092889) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0009ed8c) mce_icon_pane_g

0x2f3e,	// (0x00092891) main_mup_pane_g1_ParamLimits

0x2f3e,	// (0x00092891) main_mup_pane_g1

0x2f54,	// (0x000928a7) main_mup_pane_g2_ParamLimits

0x2f54,	// (0x000928a7) main_mup_pane_g2

0x2f6c,	// (0x000928bf) main_mup_pane_g3_ParamLimits

0x2f6c,	// (0x000928bf) main_mup_pane_g3

0x2f84,	// (0x000928d7) main_mup_pane_g4_ParamLimits

0x2f84,	// (0x000928d7) main_mup_pane_g4

0x2f96,	// (0x000928e9) main_mup_pane_g5_ParamLimits

0x2f96,	// (0x000928e9) main_mup_pane_g5

0x2fb2,	// (0x00092905) main_mup_pane_g6_ParamLimits

0x2fb2,	// (0x00092905) main_mup_pane_g6

0x2fcc,	// (0x0009291f) main_mup_pane_g7_ParamLimits

0x2fcc,	// (0x0009291f) main_mup_pane_g7

0x2fea,	// (0x0009293d) main_mup_pane_g8_ParamLimits

0x2fea,	// (0x0009293d) main_mup_pane_g8

0x3008,	// (0x0009295b) main_mup_pane_g9_ParamLimits

0x3008,	// (0x0009295b) main_mup_pane_g9

0x3024,	// (0x00092977) main_mup_pane_g10_ParamLimits

0x3024,	// (0x00092977) main_mup_pane_g10

0x3042,	// (0x00092995) main_mup_pane_g11_ParamLimits

0x3042,	// (0x00092995) main_mup_pane_g11

0x305c,	// (0x000929af) main_mup_pane_g12_ParamLimits

0x305c,	// (0x000929af) main_mup_pane_g12

0x3072,	// (0x000929c5) main_mup_pane_g13_ParamLimits

0x3072,	// (0x000929c5) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0009ed91) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0009ed91) main_mup_pane_g

0x3086,	// (0x000929d9) main_mup_pane_t1_ParamLimits

0x3086,	// (0x000929d9) main_mup_pane_t1

0x30a2,	// (0x000929f5) main_mup_pane_t2_ParamLimits

0x30a2,	// (0x000929f5) main_mup_pane_t2

0x30ba,	// (0x00092a0d) main_mup_pane_t3_ParamLimits

0x30ba,	// (0x00092a0d) main_mup_pane_t3

0x30d2,	// (0x00092a25) main_mup_pane_t4_ParamLimits

0x30d2,	// (0x00092a25) main_mup_pane_t4

0x30f0,	// (0x00092a43) main_mup_pane_t5_ParamLimits

0x30f0,	// (0x00092a43) main_mup_pane_t5

0x3105,	// (0x00092a58) main_mup_pane_t6_ParamLimits

0x3105,	// (0x00092a58) main_mup_pane_t6

0x0005,

0xf459,	// (0x0009edac) main_mup_pane_t_ParamLimits

0xf459,	// (0x0009edac) main_mup_pane_t

0x3117,	// (0x00092a6a) mup_progress_pane_ParamLimits

0x3117,	// (0x00092a6a) mup_progress_pane

0x3123,	// (0x00092a76) mup_visualizer_pane_ParamLimits

0x3123,	// (0x00092a76) mup_visualizer_pane

0x3157,	// (0x00092aaa) mup_volume_pane_ParamLimits

0x3157,	// (0x00092aaa) mup_volume_pane

0xd898,	// (0x0009d1eb) mup_visualizer_pane_g1_ParamLimits

0xd898,	// (0x0009d1eb) mup_visualizer_pane_g1

0xd898,	// (0x0009d1eb) mup_visualizer_pane_g2_ParamLimits

0xd898,	// (0x0009d1eb) mup_visualizer_pane_g2

0xd86d,	// (0x0009d1c0) mup_visualizer_pane_g3_ParamLimits

0xd86d,	// (0x0009d1c0) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0009edb9) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0009edb9) mup_visualizer_pane_g

0xa59d,	// (0x00099ef0) mup_volume_pane_g1

0xdc53,	// (0x0009d5a6) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0009edc0) mup_volume_pane_g

0xa59d,	// (0x00099ef0) mup_progress_pane_g1

0xdc5c,	// (0x0009d5af) mup_progress_pane_g2

0xdc65,	// (0x0009d5b8) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0009edc5) mup_progress_pane_g

0xa1d2,	// (0x00099b25) bg_popup_window_pane_cp05

0xdc6e,	// (0x0009d5c1) heading_pane_cp02_ParamLimits

0xdc6e,	// (0x0009d5c1) heading_pane_cp02

0xdc8a,	// (0x0009d5dd) list_popup_blid_pane

0xdc92,	// (0x0009d5e5) list_blid_sat_info_pane_ParamLimits

0xdc92,	// (0x0009d5e5) list_blid_sat_info_pane

0xdca5,	// (0x0009d5f8) list_blid_sat_info_pane_g1

0xdcad,	// (0x0009d600) list_blid_sat_info_pane_t1

0x3281,	// (0x00092bd4) mup_equalizer_pane_ParamLimits

0x3281,	// (0x00092bd4) mup_equalizer_pane

0x32a2,	// (0x00092bf5) mup_equalizer_pane_cp1_ParamLimits

0x32a2,	// (0x00092bf5) mup_equalizer_pane_cp1

0x32c3,	// (0x00092c16) mup_equalizer_pane_cp2_ParamLimits

0x32c3,	// (0x00092c16) mup_equalizer_pane_cp2

0x32e8,	// (0x00092c3b) mup_equalizer_pane_cp3_ParamLimits

0x32e8,	// (0x00092c3b) mup_equalizer_pane_cp3

0x3311,	// (0x00092c64) mup_equalizer_pane_cp4_ParamLimits

0x3311,	// (0x00092c64) mup_equalizer_pane_cp4

0x333a,	// (0x00092c8d) mup_equalizer_pane_cp5

0x3352,	// (0x00092ca5) mup_equalizer_pane_cp6

0x336a,	// (0x00092cbd) mup_equalizer_pane_cp7

0xee58,	// (0x0009e7ab) bg_popup_call_poc_act_pane_g9

0xee60,	// (0x0009e7b3) bg_popup_call_poc_act_pane_g10

0xee68,	// (0x0009e7bb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa42d,	// (0x00099d80) mup_scale_pane

0xa59d,	// (0x00099ef0) mup_scale_pane_g1

0xdcbb,	// (0x0009d60e) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0009ede1) mup_scale_pane_g

0xdcdf,	// (0x0009d632) msg_data_pane

0xdce7,	// (0x0009d63a) scroll_pane_cp017

0x3394,	// (0x00092ce7) bg_list_pane_cp04_ParamLimits

0x3394,	// (0x00092ce7) bg_list_pane_cp04

0xdcef,	// (0x0009d642) msg_data_pane_g1

0x33bc,	// (0x00092d0f) msg_data_pane_g2

0x33c6,	// (0x00092d19) msg_data_pane_g3

0x33d0,	// (0x00092d23) msg_data_pane_g4

0x33d8,	// (0x00092d2b) msg_data_pane_g5

0x33e0,	// (0x00092d33) msg_data_pane_g6

0x33e8,	// (0x00092d3b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0009edf0) msg_data_pane_g

0x33f0,	// (0x00092d43) msg_text_pane_ParamLimits

0x33f0,	// (0x00092d43) msg_text_pane

0x341c,	// (0x00092d6f) qrid_highlight_pane_cp011_ParamLimits

0x341c,	// (0x00092d6f) qrid_highlight_pane_cp011

0xa1d2,	// (0x00099b25) msg_body_pane

0xa1d2,	// (0x00099b25) msg_header_pane

0xdd00,	// (0x0009d653) input_focus_pane_cp07

0x3440,	// (0x00092d93) msg_header_pane_t1_ParamLimits

0x3440,	// (0x00092d93) msg_header_pane_t1

0x3454,	// (0x00092da7) msg_header_pane_t2_ParamLimits

0x3454,	// (0x00092da7) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0009ee04) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0009ee04) msg_header_pane_t

0xdd15,	// (0x0009d668) msg_body_pane_g1

0x3466,	// (0x00092db9) msg_body_pane_t1_ParamLimits

0x3466,	// (0x00092db9) msg_body_pane_t1

0x3497,	// (0x00092dea) msg_body_pane_t2_ParamLimits

0x3497,	// (0x00092dea) msg_body_pane_t2

0x34a9,	// (0x00092dfc) msg_body_pane_t3_ParamLimits

0x34a9,	// (0x00092dfc) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0009ee09) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0009ee09) msg_body_pane_t

0x34f5,	// (0x00092e48) main_viewer_pane_g1_ParamLimits

0x34f5,	// (0x00092e48) main_viewer_pane_g1

0x3503,	// (0x00092e56) main_viewer_pane_g2_ParamLimits

0x3503,	// (0x00092e56) main_viewer_pane_g2

0x3511,	// (0x00092e64) main_viewer_pane_g3_ParamLimits

0x3511,	// (0x00092e64) main_viewer_pane_g3

0x3520,	// (0x00092e73) main_viewer_pane_g4_ParamLimits

0x3520,	// (0x00092e73) main_viewer_pane_g4

0xaee6,	// (0x0009a839) main_viewer_pane_g5_ParamLimits

0xaee6,	// (0x0009a839) main_viewer_pane_g5

0xaee6,	// (0x0009a839) main_viewer_pane_g7_ParamLimits

0xaee6,	// (0x0009a839) main_viewer_pane_g7

0xaef8,	// (0x0009a84b) main_viewer_pane_g8_ParamLimits

0xaef8,	// (0x0009a84b) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0009ee19) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0009ee19) main_viewer_pane_g

0xdd1d,	// (0x0009d670) viewer_content_pane_ParamLimits

0xdd1d,	// (0x0009d670) viewer_content_pane

0x355e,	// (0x00092eb1) main_postcard_pane_g1_ParamLimits

0x355e,	// (0x00092eb1) main_postcard_pane_g1

0x3574,	// (0x00092ec7) main_postcard_pane_g2_ParamLimits

0x3574,	// (0x00092ec7) main_postcard_pane_g2

0x358a,	// (0x00092edd) main_postcard_pane_g3_ParamLimits

0x358a,	// (0x00092edd) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0009ee2a) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0009ee2a) main_postcard_pane_g

0x35a1,	// (0x00092ef4) main_postcard_pane_g4

0xf088,	// (0x0009e9db) smil_status_volume_pane_g2

0x35e4,	// (0x00092f37) postcard_pane_ParamLimits

0x35e4,	// (0x00092f37) postcard_pane

0xdd2b,	// (0x0009d67e) postcard_pane_g1_ParamLimits

0xdd2b,	// (0x0009d67e) postcard_pane_g1

0x3634,	// (0x00092f87) postcard_pane_g2_ParamLimits

0x3634,	// (0x00092f87) postcard_pane_g2

0x3640,	// (0x00092f93) postcard_pane_g3_ParamLimits

0x3640,	// (0x00092f93) postcard_pane_g3

0xdd39,	// (0x0009d68c) postcard_pane_g4_ParamLimits

0xdd39,	// (0x0009d68c) postcard_pane_g4

0x364c,	// (0x00092f9f) postcard_pane_g5_ParamLimits

0x364c,	// (0x00092f9f) postcard_pane_g5

0x365e,	// (0x00092fb1) postcard_pane_g6_ParamLimits

0x365e,	// (0x00092fb1) postcard_pane_g6

0xdd2b,	// (0x0009d67e) postcard_pane_g7_ParamLimits

0xdd2b,	// (0x0009d67e) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0009ee37) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0009ee37) postcard_pane_g

0x3676,	// (0x00092fc9) main_mp2_pane_g1_ParamLimits

0x3676,	// (0x00092fc9) main_mp2_pane_g1

0x3684,	// (0x00092fd7) main_mp2_pane_g2_ParamLimits

0x3684,	// (0x00092fd7) main_mp2_pane_g2

0x3690,	// (0x00092fe3) main_mp2_pane_g3_ParamLimits

0x3690,	// (0x00092fe3) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0009ee46) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0009ee46) main_mp2_pane_g

0x369c,	// (0x00092fef) main_mp2_pane_t1_ParamLimits

0x369c,	// (0x00092fef) main_mp2_pane_t1

0x36b3,	// (0x00093006) main_mp2_pane_t2_ParamLimits

0x36b3,	// (0x00093006) main_mp2_pane_t2

0x36c7,	// (0x0009301a) main_mp2_pane_t3_ParamLimits

0x36c7,	// (0x0009301a) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0009ee4d) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0009ee4d) main_mp2_pane_t

0xdd47,	// (0x0009d69a) pec_content_pane_ParamLimits

0xdd47,	// (0x0009d69a) pec_content_pane

0xa975,	// (0x0009a2c8) scroll_pane_cp015

0xdd59,	// (0x0009d6ac) pec_attribute_pane_ParamLimits

0xdd59,	// (0x0009d6ac) pec_attribute_pane

0x36d9,	// (0x0009302c) pec_content_pane_g1_ParamLimits

0x36d9,	// (0x0009302c) pec_content_pane_g1

0xdd69,	// (0x0009d6bc) pec_content_pane_t1_ParamLimits

0xdd69,	// (0x0009d6bc) pec_content_pane_t1

0xdd7b,	// (0x0009d6ce) pec_content_pane_t2_ParamLimits

0xdd7b,	// (0x0009d6ce) pec_content_pane_t2

0x0001,

0x001a,	// (0x0008f96d) pec_content_pane_t_ParamLimits

0x001a,	// (0x0008f96d) pec_content_pane_t

0x36e5,	// (0x00093038) list_single_graphic_pane_cp01_ParamLimits

0x36e5,	// (0x00093038) list_single_graphic_pane_cp01

0xa42d,	// (0x00099d80) bg_popup_sub_pane_cp04

0xdd8d,	// (0x0009d6e0) popup_mup_playback_window_g1

0xdd99,	// (0x0009d6ec) popup_mup_playback_window_t1

0xddae,	// (0x0009d701) popup_mup_playback_window_t2

0x0001,

0x001f,	// (0x0008f972) popup_mup_playback_window_t

0xdde5,	// (0x0009d738) main_image_pane_g1_ParamLimits

0xdde5,	// (0x0009d738) main_image_pane_g1

0xde28,	// (0x0009d77b) scroll_pane_cp018_ParamLimits

0xde28,	// (0x0009d77b) scroll_pane_cp018

0xde40,	// (0x0009d793) scroll_pane_cp016_ParamLimits

0xde40,	// (0x0009d793) scroll_pane_cp016

0x37b7,	// (0x0009310a) smil2_image_pane_ParamLimits

0x37b7,	// (0x0009310a) smil2_image_pane

0x37ed,	// (0x00093140) smil2_root_pane_ParamLimits

0x37ed,	// (0x00093140) smil2_root_pane

0x3825,	// (0x00093178) smil2_text_pane_ParamLimits

0x3825,	// (0x00093178) smil2_text_pane

0xa1d2,	// (0x00099b25) bg_list_pane_cp06

0xde7c,	// (0x0009d7cf) grid_radio_pane

0xa1d2,	// (0x00099b25) bg_popup_window_pane_cp06

0xde86,	// (0x0009d7d9) main_fmradio_pane_t1

0xd6ea,	// (0x0009d03d) heading_pane_cp04

0xde94,	// (0x0009d7e7) main_fmradio_pane_t2

0xee70,	// (0x0009e7c3) popup_cale_lunar_info_window_g1

0xdea2,	// (0x0009d7f5) main_fmradio_pane_t3

0xee78,	// (0x0009e7cb) popup_cale_lunar_info_window_g2

0xdeb2,	// (0x0009d805) main_fmradio_pane_t4

0x0001,

0xdec0,	// (0x0009d813) main_fmradio_pane_t5

0x0004,

0x00fa,	// (0x0008fa4d) popup_cale_lunar_info_window_g

0x0034,	// (0x0008f987) main_fmradio_pane_t

0xdece,	// (0x0009d821) wait_bar_pane_cp03

0xded6,	// (0x0009d829) cell_fmradio_pane_ParamLimits

0xded6,	// (0x0009d829) cell_fmradio_pane

0xdd2b,	// (0x0009d67e) cell_fmradio_pane_g1_ParamLimits

0xdd2b,	// (0x0009d67e) cell_fmradio_pane_g1

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp011

0xdeeb,	// (0x0009d83e) poc_content_pane_ParamLimits

0xdeeb,	// (0x0009d83e) poc_content_pane

0xdefd,	// (0x0009d850) scroll_pane_cp019

0x38b5,	// (0x00093208) popup_call_poc_act_window_ParamLimits

0x38b5,	// (0x00093208) popup_call_poc_act_window

0x38d9,	// (0x0009322c) popup_call_poc_inact_window_ParamLimits

0x38d9,	// (0x0009322c) popup_call_poc_inact_window

0x00d1,	// (0x0008fa24) bg_popup_call_poc_act_pane_g

0xede8,	// (0x0009e73b) bg_popup_call_poc_inact_pane_g1

0xedf0,	// (0x0009e743) bg_popup_call_poc_inact_pane_g2

0xdf05,	// (0x0009d858) popup_call_poc_act_window_g2

0xedf8,	// (0x0009e74b) bg_popup_call_poc_inact_pane_g3

0xee00,	// (0x0009e753) bg_popup_call_poc_inact_pane_g4

0xee08,	// (0x0009e75b) bg_popup_call_poc_inact_pane_g5

0xdf0d,	// (0x0009d860) popup_call_poc_act_window_t1_ParamLimits

0xdf0d,	// (0x0009d860) popup_call_poc_act_window_t1

0xdf35,	// (0x0009d888) popup_call_poc_act_window_t2_ParamLimits

0xdf35,	// (0x0009d888) popup_call_poc_act_window_t2

0xdf5d,	// (0x0009d8b0) popup_call_poc_act_window_t3_ParamLimits

0xdf5d,	// (0x0009d8b0) popup_call_poc_act_window_t3

0xdf85,	// (0x0009d8d8) popup_call_poc_act_window_t4_ParamLimits

0xdf85,	// (0x0009d8d8) popup_call_poc_act_window_t4

0x0003,

0x003f,	// (0x0008f992) popup_call_poc_act_window_t_ParamLimits

0x003f,	// (0x0008f992) popup_call_poc_act_window_t

0xee10,	// (0x0009e763) bg_popup_call_poc_inact_pane_g6

0xee18,	// (0x0009e76b) bg_popup_call_poc_inact_pane_g7

0xee20,	// (0x0009e773) bg_popup_call_poc_inact_pane_g8

0xdf97,	// (0x0009d8ea) popup_call_poc_inact_window_g2

0xee28,	// (0x0009e77b) bg_popup_call_poc_inact_pane_g9

0x0008,

0x00be,	// (0x0008fa11) bg_popup_call_poc_inact_pane_g

0xdf9f,	// (0x0009d8f2) popup_call_poc_inact_window_t1_ParamLimits

0xdf9f,	// (0x0009d8f2) popup_call_poc_inact_window_t1

0xdfb4,	// (0x0009d907) popup_call_poc_inact_window_t2_ParamLimits

0xdfb4,	// (0x0009d907) popup_call_poc_inact_window_t2

0xdfc9,	// (0x0009d91c) popup_call_poc_inact_window_t3_ParamLimits

0xdfc9,	// (0x0009d91c) popup_call_poc_inact_window_t3

0x0002,

0x0048,	// (0x0008f99b) popup_call_poc_inact_window_t_ParamLimits

0x0048,	// (0x0008f99b) popup_call_poc_inact_window_t

0xefe8,	// (0x0009e93b) context_pane_ParamLimits

0x4184,	// (0x00093ad7) signal_pane_ParamLimits

0xdb8c,	// (0x0009d4df) main_call2_pane

0xefd6,	// (0x0009e929) popup_phob_thumbnail2_window_ParamLimits

0xefd6,	// (0x0009e929) popup_phob_thumbnail2_window

0xaece,	// (0x0009a821) aid_hotspot_pointer_arrow_pane

0xaed6,	// (0x0009a829) aid_hotspot_pointer_hand_pane

0x3c44,	// (0x00093597) phob_pre_status_pane_g5

0x17d5,	// (0x00091128) cams_zoom_pane_ParamLimits

0x17e4,	// (0x00091137) image_vga_pane_ParamLimits

0x17fe,	// (0x00091151) main_camera_pane_g1_ParamLimits

0x1810,	// (0x00091163) main_camera_pane_g2_ParamLimits

0x1820,	// (0x00091173) main_camera_pane_g3_ParamLimits

0x1834,	// (0x00091187) main_camera_pane_g4_ParamLimits

0x1848,	// (0x0009119b) main_camera_pane_g5_ParamLimits

0x185c,	// (0x000911af) main_camera_pane_g6_ParamLimits

0x1870,	// (0x000911c3) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009eb81) main_camera_pane_g_ParamLimits

0x1884,	// (0x000911d7) main_camera_pane_t1_ParamLimits

0x189a,	// (0x000911ed) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009eb92) main_camera_pane_t_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_preview_window_pane_cp01_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_preview_window_pane_cp01

0xdfde,	// (0x0009d931) popup_phob_thumbnail2_window_g1_ParamLimits

0xdfde,	// (0x0009d931) popup_phob_thumbnail2_window_g1

0xa1d2,	// (0x00099b25) call2_cli_visual_pane

0x390d,	// (0x00093260) popup_call2_audio_conf_window_ParamLimits

0x390d,	// (0x00093260) popup_call2_audio_conf_window

0x3935,	// (0x00093288) popup_call2_audio_first_window_ParamLimits

0x3935,	// (0x00093288) popup_call2_audio_first_window

0x39cb,	// (0x0009331e) popup_call2_audio_in_window_ParamLimits

0x39cb,	// (0x0009331e) popup_call2_audio_in_window

0x3a17,	// (0x0009336a) popup_call2_audio_out_window_ParamLimits

0x3a17,	// (0x0009336a) popup_call2_audio_out_window

0x3a89,	// (0x000933dc) popup_call2_audio_second_window_ParamLimits

0x3a89,	// (0x000933dc) popup_call2_audio_second_window

0x3aef,	// (0x00093442) popup_call2_audio_wait_window_ParamLimits

0x3aef,	// (0x00093442) popup_call2_audio_wait_window

0xa1d2,	// (0x00099b25) bg_popup_call2_act_pane_cp03

0xa40f,	// (0x00099d62) list_conf_pane_cp

0xdfea,	// (0x0009d93d) popup_call2_audio_conf_window_t1

0xdff8,	// (0x0009d94b) list_single_graphic_popup_conf2_pane_ParamLimits

0xdff8,	// (0x0009d94b) list_single_graphic_popup_conf2_pane

0xd759,	// (0x0009d0ac) list_highlight_pane_cp04

0xe00b,	// (0x0009d95e) list_single_graphic_popup_conf2_pane_g1

0xd76a,	// (0x0009d0bd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf511,	// (0x0009ee64) list_single_graphic_popup_conf2_pane_g

0xe015,	// (0x0009d968) list_single_graphic_popup_conf2_pane_t1

0xe023,	// (0x0009d976) bg_popup_call2_act_pane_cp01_ParamLimits

0xe023,	// (0x0009d976) bg_popup_call2_act_pane_cp01

0xe0ad,	// (0x0009da00) call_type_pane_cp05_ParamLimits

0xe0ad,	// (0x0009da00) call_type_pane_cp05

0xe101,	// (0x0009da54) popup_call2_audio_second_window_g1_ParamLimits

0xe101,	// (0x0009da54) popup_call2_audio_second_window_g1

0xe155,	// (0x0009daa8) popup_call2_audio_second_window_g2_ParamLimits

0xe155,	// (0x0009daa8) popup_call2_audio_second_window_g2

0x0002,

0x0054,	// (0x0008f9a7) popup_call2_audio_second_window_g_ParamLimits

0x0054,	// (0x0008f9a7) popup_call2_audio_second_window_g

0xe1ba,	// (0x0009db0d) popup_call2_audio_second_window_t1_ParamLimits

0xe1ba,	// (0x0009db0d) popup_call2_audio_second_window_t1

0xe275,	// (0x0009dbc8) popup_call2_audio_second_window_t2_ParamLimits

0xe275,	// (0x0009dbc8) popup_call2_audio_second_window_t2

0xe2c8,	// (0x0009dc1b) popup_call2_audio_second_window_t3_ParamLimits

0xe2c8,	// (0x0009dc1b) popup_call2_audio_second_window_t3

0x0003,

0x005b,	// (0x0008f9ae) popup_call2_audio_second_window_t_ParamLimits

0x005b,	// (0x0008f9ae) popup_call2_audio_second_window_t

0xa1d2,	// (0x00099b25) bg_popup_call2_in_pane_cp02

0xa1dc,	// (0x00099b2f) call_type_pane_cp04

0xa1e4,	// (0x00099b37) popup_call2_audio_wait_window_g1

0xa1ec,	// (0x00099b3f) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009ea6e) popup_call2_audio_wait_window_g

0xa1f4,	// (0x00099b47) popup_call2_audio_wait_window_t3

0xe3bb,	// (0x0009dd0e) bg_popup_call2_act_pane_ParamLimits

0xe3bb,	// (0x0009dd0e) bg_popup_call2_act_pane

0xe47b,	// (0x0009ddce) call_type_pane_cp03_ParamLimits

0xe47b,	// (0x0009ddce) call_type_pane_cp03

0xe4df,	// (0x0009de32) popup_call2_audio_first_window_g1_ParamLimits

0xe4df,	// (0x0009de32) popup_call2_audio_first_window_g1

0xe54f,	// (0x0009dea2) popup_call2_audio_first_window_g2_ParamLimits

0xe54f,	// (0x0009dea2) popup_call2_audio_first_window_g2

0xd898,	// (0x0009d1eb) popup_call2_audio_first_window_g3_ParamLimits

0xd898,	// (0x0009d1eb) popup_call2_audio_first_window_g3

0x0004,

0xf516,	// (0x0009ee69) popup_call2_audio_first_window_g_ParamLimits

0xf516,	// (0x0009ee69) popup_call2_audio_first_window_g

0xe62d,	// (0x0009df80) popup_call2_audio_first_window_t1_ParamLimits

0xe62d,	// (0x0009df80) popup_call2_audio_first_window_t1

0xe730,	// (0x0009e083) popup_call2_audio_first_window_t4_ParamLimits

0xe730,	// (0x0009e083) popup_call2_audio_first_window_t4

0xe813,	// (0x0009e166) popup_call2_audio_first_window_t5_ParamLimits

0xe813,	// (0x0009e166) popup_call2_audio_first_window_t5

0x0003,

0x006f,	// (0x0008f9c2) popup_call2_audio_first_window_t_ParamLimits

0x006f,	// (0x0008f9c2) popup_call2_audio_first_window_t

0xa425,	// (0x00099d78) bg_popup_call2_act_pane_g1

0xee82,	// (0x0009e7d5) popup_cale_lunar_info_window_t1

0xee90,	// (0x0009e7e3) popup_cale_lunar_info_window_t2

0xee9e,	// (0x0009e7f1) popup_cale_lunar_info_window_t3

0xa1d2,	// (0x00099b25) bg_popup_call2_bubble_pane

0xe914,	// (0x0009e267) bg_popup_call2_in_pane_cp01_ParamLimits

0xe914,	// (0x0009e267) bg_popup_call2_in_pane_cp01

0x9eae,	// (0x00099801) call_type_pane_cp02

0xe95c,	// (0x0009e2af) popup_call2_audio_out_window_g1_ParamLimits

0xe95c,	// (0x0009e2af) popup_call2_audio_out_window_g1

0xe988,	// (0x0009e2db) popup_call2_audio_out_window_g2_ParamLimits

0xe988,	// (0x0009e2db) popup_call2_audio_out_window_g2

0xe9b0,	// (0x0009e303) popup_call2_audio_out_window_g3_ParamLimits

0xe9b0,	// (0x0009e303) popup_call2_audio_out_window_g3

0x0003,

0x0078,	// (0x0008f9cb) popup_call2_audio_out_window_g_ParamLimits

0x0078,	// (0x0008f9cb) popup_call2_audio_out_window_g

0xe9eb,	// (0x0009e33e) popup_call2_audio_out_window_t1_ParamLimits

0xe9eb,	// (0x0009e33e) popup_call2_audio_out_window_t1

0xea4a,	// (0x0009e39d) popup_call2_audio_out_window_t2_ParamLimits

0xea4a,	// (0x0009e39d) popup_call2_audio_out_window_t2

0xea9e,	// (0x0009e3f1) popup_call2_audio_out_window_t3_ParamLimits

0xea9e,	// (0x0009e3f1) popup_call2_audio_out_window_t3

0xeab4,	// (0x0009e407) popup_call2_audio_out_window_t4_ParamLimits

0xeab4,	// (0x0009e407) popup_call2_audio_out_window_t4

0xeaca,	// (0x0009e41d) popup_call2_audio_out_window_t5_ParamLimits

0xeaca,	// (0x0009e41d) popup_call2_audio_out_window_t5

0x0005,

0x0081,	// (0x0008f9d4) popup_call2_audio_out_window_t_ParamLimits

0x0081,	// (0x0008f9d4) popup_call2_audio_out_window_t

0xeb2e,	// (0x0009e481) bg_popup_call2_in_pane_ParamLimits

0xeb2e,	// (0x0009e481) bg_popup_call2_in_pane

0xeb8a,	// (0x0009e4dd) popup_call2_audio_in_window_g1_ParamLimits

0xeb8a,	// (0x0009e4dd) popup_call2_audio_in_window_g1

0xebc2,	// (0x0009e515) popup_call2_audio_in_window_g2_ParamLimits

0xebc2,	// (0x0009e515) popup_call2_audio_in_window_g2

0xebfa,	// (0x0009e54d) popup_call2_audio_in_window_g3_ParamLimits

0xebfa,	// (0x0009e54d) popup_call2_audio_in_window_g3

0x0003,

0x008e,	// (0x0008f9e1) popup_call2_audio_in_window_g_ParamLimits

0x008e,	// (0x0008f9e1) popup_call2_audio_in_window_g

0xec52,	// (0x0009e5a5) popup_call2_audio_in_window_t1_ParamLimits

0xec52,	// (0x0009e5a5) popup_call2_audio_in_window_t1

0xecd2,	// (0x0009e625) popup_call2_audio_in_window_t2_ParamLimits

0xecd2,	// (0x0009e625) popup_call2_audio_in_window_t2

0xed52,	// (0x0009e6a5) popup_call2_audio_in_window_t3_ParamLimits

0xed52,	// (0x0009e6a5) popup_call2_audio_in_window_t3

0xed6c,	// (0x0009e6bf) popup_call2_audio_in_window_t4_ParamLimits

0xed6c,	// (0x0009e6bf) popup_call2_audio_in_window_t4

0xed7e,	// (0x0009e6d1) popup_call2_audio_in_window_t5_ParamLimits

0xed7e,	// (0x0009e6d1) popup_call2_audio_in_window_t5

0xed93,	// (0x0009e6e6) popup_call2_audio_in_window_t6_ParamLimits

0xed93,	// (0x0009e6e6) popup_call2_audio_in_window_t6

0x0005,

0x0097,	// (0x0008f9ea) popup_call2_audio_in_window_t_ParamLimits

0x0097,	// (0x0008f9ea) popup_call2_audio_in_window_t

0xa425,	// (0x00099d78) bg_popup_call2_in_pane_g1

0xeeac,	// (0x0009e7ff) popup_cale_lunar_info_window_t4

0x0003,

0x00ff,	// (0x0008fa52) popup_cale_lunar_info_window_t

0xa42d,	// (0x00099d80) bg_popup_call2_rect_pane_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_call2_rect_pane

0xa1d2,	// (0x00099b25) call2_cli_visual_graphic_pane

0xa1d2,	// (0x00099b25) call2_cli_visual_text_pane

0xaf10,	// (0x0009a863) smil_status_volume_pane_g3

0x0002,

0xa59d,	// (0x00099ef0) call2_cli_visual_graphic_pane_g1

0xa59d,	// (0x00099ef0) call2_cli_visual_graphic_pane_g2

0xa59d,	// (0x00099ef0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf521,	// (0x0009ee74) call2_cli_visual_graphic_pane_g

0xeda8,	// (0x0009e6fb) bg_popup_call2_rect_pane_g1

0xa645,	// (0x00099f98) bg_popup_call2_rect_pane_g2

0xedb0,	// (0x0009e703) bg_popup_call2_rect_pane_g3

0xedb8,	// (0x0009e70b) bg_popup_call2_rect_pane_g4

0xedc0,	// (0x0009e713) bg_popup_call2_rect_pane_g5

0xedc8,	// (0x0009e71b) bg_popup_call2_rect_pane_g6

0xedd0,	// (0x0009e723) bg_popup_call2_rect_pane_g7

0xedd8,	// (0x0009e72b) bg_popup_call2_rect_pane_g8

0xede0,	// (0x0009e733) bg_popup_call2_rect_pane_g9

0x0008,

0xf528,	// (0x0009ee7b) bg_popup_call2_rect_pane_g

0xede8,	// (0x0009e73b) bg_popup_call2_bubble_pane_g1

0xedf0,	// (0x0009e743) bg_popup_call2_bubble_pane_g2

0xedf8,	// (0x0009e74b) bg_popup_call2_bubble_pane_g3

0xee00,	// (0x0009e753) bg_popup_call2_bubble_pane_g4

0xee08,	// (0x0009e75b) bg_popup_call2_bubble_pane_g5

0xee10,	// (0x0009e763) bg_popup_call2_bubble_pane_g6

0xee18,	// (0x0009e76b) bg_popup_call2_bubble_pane_g7

0xee20,	// (0x0009e773) bg_popup_call2_bubble_pane_g8

0xee28,	// (0x0009e77b) bg_popup_call2_bubble_pane_g9

0x0008,

0x00be,	// (0x0008fa11) bg_popup_call2_bubble_pane_g

0x13de,	// (0x00090d31) aid_cale_week_size_cell_pane

0x18b4,	// (0x00091207) aid_cams_cif_uncrop_pane_ParamLimits

0x18b4,	// (0x00091207) aid_cams_cif_uncrop_pane

0x1a6d,	// (0x000913c0) aid_cams_size_cell_ParamLimits

0x1a6d,	// (0x000913c0) aid_cams_size_cell

0x1a81,	// (0x000913d4) grid_cams_pane_ParamLimits

0x1a9b,	// (0x000913ee) linegrid_cams_pane_ParamLimits

0x1c95,	// (0x000915e8) call_video_pane_t1

0x1caf,	// (0x00091602) call_video_pane_t2

0x0001,

0xf292,	// (0x0009ebe5) call_video_pane_t

0x20fa,	// (0x00091a4d) aid_cale_month_size_cell_pane_ParamLimits

0x20fa,	// (0x00091a4d) aid_cale_month_size_cell_pane

0xf56b,	// (0x0009eebe) smil_status_volume_pane_g

0xaf1d,	// (0x0009a870) volume_smil_pane_ParamLimits

0x0b7f,	// (0x000904d2) aid_popup2_width_pane

0x134f,	// (0x00090ca2) cell_qdial_pane_g4_ParamLimits

0x134f,	// (0x00090ca2) cell_qdial_pane_g4

0x2d85,	// (0x000926d8) aid_blid_cardinal_pane_ParamLimits

0x2d95,	// (0x000926e8) aid_blid_destination_pane_ParamLimits

0x2d95,	// (0x000926e8) aid_blid_destination_pane

0xa42d,	// (0x00099d80) bg_popup_call_poc_act_pane_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_call_poc_act_pane

0xa42d,	// (0x00099d80) bg_popup_call_poc_inact_pane_ParamLimits

0xa42d,	// (0x00099d80) bg_popup_call_poc_inact_pane

0xee30,	// (0x0009e783) bg_popup_call_poc_act_pane_g1

0xee38,	// (0x0009e78b) bg_popup_call_poc_act_pane_g2

0xee40,	// (0x0009e793) bg_popup_call_poc_act_pane_g3

0xee00,	// (0x0009e753) bg_popup_call_poc_act_pane_g4

0xee08,	// (0x0009e75b) bg_popup_call_poc_act_pane_g5

0xee48,	// (0x0009e79b) bg_popup_call_poc_act_pane_g6

0xee18,	// (0x0009e76b) bg_popup_call_poc_act_pane_g7

0xee50,	// (0x0009e7a3) bg_popup_call_poc_act_pane_g8

0xa1d2,	// (0x00099b25) main_usb_pane

0xefad,	// (0x0009e900) popup_cale_lunar_info_window

0x1f7a,	// (0x000918cd) im_reading_pane_t1_ParamLimits

0xa8cd,	// (0x0009a220) list_im_pane_ParamLimits

0xa8de,	// (0x0009a231) scroll_pane_cp07_ParamLimits

0xa1d2,	// (0x00099b25) grid_highlight_pane_cp012

0xa42d,	// (0x00099d80) mup_scale_pane_ParamLimits

0xdd2b,	// (0x0009d67e) main_usb_pane_g1_ParamLimits

0xdd2b,	// (0x0009d67e) main_usb_pane_g1

0x3b50,	// (0x000934a3) main_usb_pane_g2_ParamLimits

0x3b50,	// (0x000934a3) main_usb_pane_g2

0x0001,

0xf53b,	// (0x0009ee8e) main_usb_pane_g_ParamLimits

0xf53b,	// (0x0009ee8e) main_usb_pane_g

0x3b66,	// (0x000934b9) main_usb_pane_t1_ParamLimits

0x3b66,	// (0x000934b9) main_usb_pane_t1

0x3b78,	// (0x000934cb) main_usb_pane_t2_ParamLimits

0x3b78,	// (0x000934cb) main_usb_pane_t2

0x3b8a,	// (0x000934dd) main_usb_pane_t3_ParamLimits

0x3b8a,	// (0x000934dd) main_usb_pane_t3

0x3b9c,	// (0x000934ef) main_usb_pane_t4_ParamLimits

0x3b9c,	// (0x000934ef) main_usb_pane_t4

0x3bb1,	// (0x00093504) main_usb_pane_t5_ParamLimits

0x3bb1,	// (0x00093504) main_usb_pane_t5

0x3bc6,	// (0x00093519) main_usb_pane_t6_ParamLimits

0x3bc6,	// (0x00093519) main_usb_pane_t6

0x0005,

0xf540,	// (0x0009ee93) main_usb_pane_t_ParamLimits

0x2d24,	// (0x00092677) aid_text_placing

0x2d2f,	// (0x00092682) main_location2_pane_t1_ParamLimits

0x2d45,	// (0x00092698) main_location2_pane_t2_ParamLimits

0x2d5b,	// (0x000926ae) main_location2_pane_t3_ParamLimits

0x2d71,	// (0x000926c4) main_location2_pane_t4_ParamLimits

0x2d71,	// (0x000926c4) main_location2_pane_t4

0xf3f3,	// (0x0009ed46) main_location2_pane_t_ParamLimits

0xa469,	// (0x00099dbc) find_pinb_pane_g2_ParamLimits

0xa469,	// (0x00099dbc) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009ea94) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009ea94) find_pinb_pane_g

0xa475,	// (0x00099dc8) find_pinb_pane_t1_ParamLimits

0xa487,	// (0x00099dda) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009ea99) find_pinb_pane_t_ParamLimits

0xa1d2,	// (0x00099b25) main_call3_pane

0x246e,	// (0x00091dc1) cale_month_day_heading_pane_t1_ParamLimits

0x24cc,	// (0x00091e1f) cale_month_day_heading_pane_t2_ParamLimits

0x2531,	// (0x00091e84) cale_month_day_heading_pane_t3_ParamLimits

0x2596,	// (0x00091ee9) cale_month_day_heading_pane_t4_ParamLimits

0x25fb,	// (0x00091f4e) cale_month_day_heading_pane_t5_ParamLimits

0x2660,	// (0x00091fb3) cale_month_day_heading_pane_t6_ParamLimits

0x26c5,	// (0x00092018) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0009ec1d) cale_month_day_heading_pane_t_ParamLimits

0xab2a,	// (0x0009a47d) smil_status_volume_pane

0x3608,	// (0x00092f5b) postcard_address_pane_ParamLimits

0x3608,	// (0x00092f5b) postcard_address_pane

0x361e,	// (0x00092f71) postcard_message_pane_ParamLimits

0x361e,	// (0x00092f71) postcard_message_pane

0x3b29,	// (0x0009347c) call2_cli_visual_pane_t1_ParamLimits

0x3b29,	// (0x0009347c) call2_cli_visual_pane_t1

0x4395,	// (0x00093ce8) postcard_message_pane_t1_ParamLimits

0x4395,	// (0x00093ce8) postcard_message_pane_t1

0xf09b,	// (0x0009e9ee) postcard_address_pane_t1_ParamLimits

0xf09b,	// (0x0009e9ee) postcard_address_pane_t1

0x4381,	// (0x00093cd4) popup_call3_audio_in_window_ParamLimits

0x4381,	// (0x00093cd4) popup_call3_audio_in_window

0x4206,	// (0x00093b59) bg_popup_call3_in_pane_ParamLimits

0x4206,	// (0x00093b59) bg_popup_call3_in_pane

0x4282,	// (0x00093bd5) popup_call3_audio_in_window_g1_ParamLimits

0x4282,	// (0x00093bd5) popup_call3_audio_in_window_g1

0x42a2,	// (0x00093bf5) popup_call3_audio_in_window_g2_ParamLimits

0x42a2,	// (0x00093bf5) popup_call3_audio_in_window_g2

0x42c2,	// (0x00093c15) popup_call3_audio_in_window_g3_ParamLimits

0x42c2,	// (0x00093c15) popup_call3_audio_in_window_g3

0x0003,

0xf572,	// (0x0009eec5) popup_call3_audio_in_window_g_ParamLimits

0xf572,	// (0x0009eec5) popup_call3_audio_in_window_g

0x42f3,	// (0x00093c46) popup_call3_audio_in_window_t1_ParamLimits

0x42f3,	// (0x00093c46) popup_call3_audio_in_window_t1

0x4331,	// (0x00093c84) popup_call3_audio_in_window_t2_ParamLimits

0x4331,	// (0x00093c84) popup_call3_audio_in_window_t2

0x436f,	// (0x00093cc2) popup_call3_audio_in_window_t3_ParamLimits

0x436f,	// (0x00093cc2) popup_call3_audio_in_window_t3

0x0002,

0xf57b,	// (0x0009eece) popup_call3_audio_in_window_t_ParamLimits

0xf57b,	// (0x0009eece) popup_call3_audio_in_window_t

0xdb8c,	// (0x0009d4df) bg_popup_call3_rect_pane

0xeda8,	// (0x0009e6fb) bg_popup_call3_rect_pane_g1

0xa645,	// (0x00099f98) bg_popup_call3_rect_pane_g2

0xedb0,	// (0x0009e703) bg_popup_call3_rect_pane_g3

0xedb8,	// (0x0009e70b) bg_popup_call3_rect_pane_g4

0xedc0,	// (0x0009e713) bg_popup_call3_rect_pane_g5

0xedc8,	// (0x0009e71b) bg_popup_call3_rect_pane_g6

0xedd0,	// (0x0009e723) bg_popup_call3_rect_pane_g7

0x316d,	// (0x00092ac0) mup_visualizer_osc_pane

0xdc4b,	// (0x0009d59e) mup_visualizer_spec_pane

0x4236,	// (0x00093b89) call3_video_qcif_pane_ParamLimits

0x4236,	// (0x00093b89) call3_video_qcif_pane

0x4249,	// (0x00093b9c) call3_video_qcif_uncrop_pane_ParamLimits

0x4249,	// (0x00093b9c) call3_video_qcif_uncrop_pane

0x4259,	// (0x00093bac) call3_video_subqcif_pane_ParamLimits

0x4259,	// (0x00093bac) call3_video_subqcif_pane

0x426f,	// (0x00093bc2) call3_video_subqcif_uncrop_pane_ParamLimits

0x426f,	// (0x00093bc2) call3_video_subqcif_uncrop_pane

0x42e2,	// (0x00093c35) popup_call3_audio_in_window_g4_ParamLimits

0x42e2,	// (0x00093c35) popup_call3_audio_in_window_g4

0x41f5,	// (0x00093b48) mup_spec_half_pane

0x41fe,	// (0x00093b51) mup_spec_half_pane_cp

0xf05b,	// (0x0009e9ae) mup_osc_middle_pane

0xf064,	// (0x0009e9b7) mup_visualizer_osc_pane_g1

0x41d5,	// (0x00093b28) mup_spec_bar_pane_ParamLimits

0x41d5,	// (0x00093b28) mup_spec_bar_pane

0xf048,	// (0x0009e99b) mup_spec_bar_pane_g1

0xf052,	// (0x0009e9a5) mup_spec_bar_pane_g2

0x0001,

0x0143,	// (0x0008fa96) mup_spec_bar_pane_g

0x13de,	// (0x00090d31) aid_cale_week_size_cell_pane_ParamLimits

0x13f1,	// (0x00090d44) bg_cale_heading_pane_ParamLimits

0xa6d8,	// (0x0009a02b) bg_cale_pane_cp01_ParamLimits

0x140d,	// (0x00090d60) cale_week_corner_pane_ParamLimits

0x1423,	// (0x00090d76) cale_week_day_heading_pane_ParamLimits

0x143f,	// (0x00090d92) cale_week_scroll_pane_g1_ParamLimits

0x1458,	// (0x00090dab) cale_week_scroll_pane_g2_ParamLimits

0x1469,	// (0x00090dbc) cale_week_scroll_pane_g3_ParamLimits

0x147a,	// (0x00090dcd) cale_week_scroll_pane_g4_ParamLimits

0x148b,	// (0x00090dde) cale_week_scroll_pane_g5_ParamLimits

0x149c,	// (0x00090def) cale_week_scroll_pane_g6_ParamLimits

0x14ad,	// (0x00090e00) cale_week_scroll_pane_g7_ParamLimits

0x14be,	// (0x00090e11) cale_week_scroll_pane_g8_ParamLimits

0x14cf,	// (0x00090e22) cale_week_scroll_pane_g9_ParamLimits

0x14e0,	// (0x00090e33) cale_week_scroll_pane_g10_ParamLimits

0x14f1,	// (0x00090e44) cale_week_scroll_pane_g11_ParamLimits

0x1502,	// (0x00090e55) cale_week_scroll_pane_g12_ParamLimits

0x1513,	// (0x00090e66) cale_week_scroll_pane_g13_ParamLimits

0x152c,	// (0x00090e7f) cale_week_scroll_pane_g14_ParamLimits

0x1545,	// (0x00090e98) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009eb25) cale_week_scroll_pane_g_ParamLimits

0x155e,	// (0x00090eb1) cale_week_time_pane_ParamLimits

0x156f,	// (0x00090ec2) grid_cale_week_pane_ParamLimits

0xa6f1,	// (0x0009a044) listscroll_cale_week_pane_t1

0x158a,	// (0x00090edd) scroll_pane_cp08_ParamLimits

0x214b,	// (0x00091a9e) cale_month_corner_pane_ParamLimits

0xaaf4,	// (0x0009a447) cale_month_pane_t1

0x242f,	// (0x00091d82) cale_month_week_pane_ParamLimits

0x2b48,	// (0x0009249b) popup_call_status_window_g1_ParamLimits

0x2b5c,	// (0x000924af) popup_call_status_window_g2_ParamLimits

0x2b70,	// (0x000924c3) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0009eccd) popup_call_status_window_g_ParamLimits

0xae3d,	// (0x0009a790) aid_call2_pane

0x3432,	// (0x00092d85) msg_header_pane_g1

0x3608,	// (0x00092f5b) postcard_address2_pane_ParamLimits

0x3608,	// (0x00092f5b) postcard_address2_pane

0x361e,	// (0x00092f71) postcard_message2_pane_ParamLimits

0x361e,	// (0x00092f71) postcard_message2_pane

0x4192,	// (0x00093ae5) message2_row_pane_ParamLimits

0x4192,	// (0x00093ae5) message2_row_pane

0xf003,	// (0x0009e956) address2_row_pane_ParamLimits

0xf003,	// (0x0009e956) address2_row_pane

0xf016,	// (0x0009e969) postcard_message2_row_pane_g1

0xf01e,	// (0x0009e971) postcard_message2_row_pane_t1

0xf016,	// (0x0009e969) address2_row_pane_g1

0xf01e,	// (0x0009e971) address2_row_pane_t1

0x1798,	// (0x000910eb) aid_size_cell_vorec

0xa1d2,	// (0x00099b25) main_rss_pane

0x41b5,	// (0x00093b08) rss_list_single_pane_ParamLimits

0x41b5,	// (0x00093b08) rss_list_single_pane

0xf02c,	// (0x0009e97f) rss_list_single_pane_t1

0xf03a,	// (0x0009e98d) rss_list_single_pane_t2

0x0001,

0x013e,	// (0x0008fa91) rss_list_single_pane_t

0xa1d2,	// (0x00099b25) main_camera2_pane

0xa1d2,	// (0x00099b25) main_video2_pane

0x4404,	// (0x00093d57) cams_zoom_pane_cp2_ParamLimits

0x4404,	// (0x00093d57) cams_zoom_pane_cp2

0x441b,	// (0x00093d6e) image2_vga_pane_ParamLimits

0x441b,	// (0x00093d6e) image2_vga_pane

0x4463,	// (0x00093db6) main_camera2_pane_g1_ParamLimits

0x4463,	// (0x00093db6) main_camera2_pane_g1

0x4483,	// (0x00093dd6) main_camera2_pane_g2_ParamLimits

0x4483,	// (0x00093dd6) main_camera2_pane_g2

0x449a,	// (0x00093ded) main_camera2_pane_g3_ParamLimits

0x449a,	// (0x00093ded) main_camera2_pane_g3

0x44b1,	// (0x00093e04) main_camera2_pane_g4_ParamLimits

0x44b1,	// (0x00093e04) main_camera2_pane_g4

0x44c8,	// (0x00093e1b) main_camera2_pane_g5_ParamLimits

0x44c8,	// (0x00093e1b) main_camera2_pane_g5

0x44df,	// (0x00093e32) main_camera2_pane_g6_ParamLimits

0x44df,	// (0x00093e32) main_camera2_pane_g6

0x44f6,	// (0x00093e49) main_camera2_pane_g7_ParamLimits

0x44f6,	// (0x00093e49) main_camera2_pane_g7

0x450d,	// (0x00093e60) main_camera2_pane_g8_ParamLimits

0x450d,	// (0x00093e60) main_camera2_pane_g8

0x0008,

0xf582,	// (0x0009eed5) main_camera2_pane_g_ParamLimits

0xf582,	// (0x0009eed5) main_camera2_pane_g

0x453b,	// (0x00093e8e) main_camera2_pane_t1_ParamLimits

0x453b,	// (0x00093e8e) main_camera2_pane_t1

0x4570,	// (0x00093ec3) main_camera2_pane_t2_ParamLimits

0x4570,	// (0x00093ec3) main_camera2_pane_t2

0x458d,	// (0x00093ee0) main_camera2_pane_t3_ParamLimits

0x458d,	// (0x00093ee0) main_camera2_pane_t3

0x45eb,	// (0x00093f3e) main_camera2_pane_t4_ParamLimits

0x45eb,	// (0x00093f3e) main_camera2_pane_t4

0x0006,

0xf595,	// (0x0009eee8) main_camera2_pane_t_ParamLimits

0xf595,	// (0x0009eee8) main_camera2_pane_t

0x4674,	// (0x00093fc7) cams_zoom_pane_cp4_ParamLimits

0x4674,	// (0x00093fc7) cams_zoom_pane_cp4

0x468a,	// (0x00093fdd) image2_cif_pane_ParamLimits

0x468a,	// (0x00093fdd) image2_cif_pane

0x46b5,	// (0x00094008) image2_subqcif_pane_ParamLimits

0x46b5,	// (0x00094008) image2_subqcif_pane

0x46d0,	// (0x00094023) main_video2_pane_g1_ParamLimits

0x46d0,	// (0x00094023) main_video2_pane_g1

0x46ea,	// (0x0009403d) main_video2_pane_g2_ParamLimits

0x46ea,	// (0x0009403d) main_video2_pane_g2

0x4700,	// (0x00094053) main_video2_pane_g3_ParamLimits

0x4700,	// (0x00094053) main_video2_pane_g3

0x4716,	// (0x00094069) main_video2_pane_g4_ParamLimits

0x4716,	// (0x00094069) main_video2_pane_g4

0x472c,	// (0x0009407f) main_video2_pane_g5_ParamLimits

0x472c,	// (0x0009407f) main_video2_pane_g5

0x4742,	// (0x00094095) main_video2_pane_g6_ParamLimits

0x4742,	// (0x00094095) main_video2_pane_g6

0x0005,

0xf5a4,	// (0x0009eef7) main_video2_pane_g_ParamLimits

0xf5a4,	// (0x0009eef7) main_video2_pane_g

0x475c,	// (0x000940af) main_video2_pane_t1_ParamLimits

0x475c,	// (0x000940af) main_video2_pane_t1

0x4780,	// (0x000940d3) main_video2_pane_t2_ParamLimits

0x4780,	// (0x000940d3) main_video2_pane_t2

0x47d0,	// (0x00094123) main_video2_pane_t3_ParamLimits

0x47d0,	// (0x00094123) main_video2_pane_t3

0x0002,

0xf5b1,	// (0x0009ef04) main_video2_pane_t_ParamLimits

0xf5b1,	// (0x0009ef04) main_video2_pane_t

0x3c84,	// (0x000935d7) call_muted_g2

0x0001,

0xf566,	// (0x0009eeb9) call_muted_g

0xa1d2,	// (0x00099b25) main_mup2_pane

0x4818,	// (0x0009416b) main_mup2_pane_g1_ParamLimits

0x4818,	// (0x0009416b) main_mup2_pane_g1

0x4824,	// (0x00094177) main_mup2_pane_g2_ParamLimits

0x4824,	// (0x00094177) main_mup2_pane_g2

0xaf86,	// (0x0009a8d9) main_mup_pane_g13_cp1

0xaf8e,	// (0x0009a8e1) mup_volume_pane_cp1

0x4842,	// (0x00094195) main_mup2_pane_g4_ParamLimits

0x4842,	// (0x00094195) main_mup2_pane_g4

0x4854,	// (0x000941a7) main_mup2_pane_g5_ParamLimits

0x4854,	// (0x000941a7) main_mup2_pane_g5

0x4866,	// (0x000941b9) main_mup2_pane_g6_ParamLimits

0x4866,	// (0x000941b9) main_mup2_pane_g6

0x4878,	// (0x000941cb) main_mup2_pane_g7_ParamLimits

0x4878,	// (0x000941cb) main_mup2_pane_g7

0x0006,

0xf5b8,	// (0x0009ef0b) main_mup2_pane_g_ParamLimits

0xf5b8,	// (0x0009ef0b) main_mup2_pane_g

0x4890,	// (0x000941e3) main_mup2_pane_t1_ParamLimits

0x4890,	// (0x000941e3) main_mup2_pane_t1

0x48a6,	// (0x000941f9) main_mup2_pane_t2_ParamLimits

0x48a6,	// (0x000941f9) main_mup2_pane_t2

0x48bc,	// (0x0009420f) main_mup2_pane_t3_ParamLimits

0x48bc,	// (0x0009420f) main_mup2_pane_t3

0x48d2,	// (0x00094225) main_mup2_pane_t4_ParamLimits

0x48d2,	// (0x00094225) main_mup2_pane_t4

0x48ea,	// (0x0009423d) main_mup2_pane_t5_ParamLimits

0x48ea,	// (0x0009423d) main_mup2_pane_t5

0x4902,	// (0x00094255) main_mup2_pane_t6_ParamLimits

0x4902,	// (0x00094255) main_mup2_pane_t6

0x0005,

0xf5c7,	// (0x0009ef1a) main_mup2_pane_t_ParamLimits

0xf5c7,	// (0x0009ef1a) main_mup2_pane_t

0x4932,	// (0x00094285) mup2_visualizer_pane_ParamLimits

0x4932,	// (0x00094285) mup2_visualizer_pane

0x4960,	// (0x000942b3) mup_progress_pane_cp_ParamLimits

0x4960,	// (0x000942b3) mup_progress_pane_cp

0xaf71,	// (0x0009a8c4) mup_volume_pane_cp_ParamLimits

0xaf71,	// (0x0009a8c4) mup_volume_pane_cp

0x4976,	// (0x000942c9) mup2_visualizer_pane_g1_ParamLimits

0x4976,	// (0x000942c9) mup2_visualizer_pane_g1

0xf0b2,	// (0x0009ea05) mup2_visualizer_pane_g2_ParamLimits

0xf0b2,	// (0x0009ea05) mup2_visualizer_pane_g2

0x498b,	// (0x000942de) mup2_visualizer_pane_g3_ParamLimits

0x498b,	// (0x000942de) mup2_visualizer_pane_g3

0x0002,

0xf5d4,	// (0x0009ef27) mup2_visualizer_pane_g_ParamLimits

0xf5d4,	// (0x0009ef27) mup2_visualizer_pane_g

0xde74,	// (0x0009d7c7) aid_size_cell_fmradio

0x3e34,	// (0x00093787) aid_height_parent_landcape

0xa95c,	// (0x0009a2af) wml_content_pane_cp

0xa964,	// (0x0009a2b7) wml_tabs_pane

0xa96d,	// (0x0009a2c0) popup_wml_miniature_window

0xa975,	// (0x0009a2c8) scroll_pane_cp021

0xa989,	// (0x0009a2dc) wml_content_pane_comp8

0xa1d2,	// (0x00099b25) bg_popup_sub_pane_cp05

0xf0d0,	// (0x0009ea23) popup_wml_miniature_window_g1

0xf0d8,	// (0x0009ea2b) wml_miniature_view_pane

0x4997,	// (0x000942ea) aid_size_wml_view

0x499f,	// (0x000942f2) wml_miniature_view_pane_g1

0x49a8,	// (0x000942fb) wml_miniature_view_pane_g2

0x49b1,	// (0x00094304) wml_miniature_view_pane_g3

0x49b9,	// (0x0009430c) wml_miniature_view_pane_g4

0x49c1,	// (0x00094314) wml_miniature_view_pane_g5

0x49c9,	// (0x0009431c) wml_miniature_view_pane_g6

0x49d1,	// (0x00094324) wml_miniature_view_pane_g7

0x49d9,	// (0x0009432c) wml_miniature_view_pane_g8

0x0007,

0xf5db,	// (0x0009ef2e) wml_miniature_view_pane_g

0xf0e0,	// (0x0009ea33) background_graphic_ParamLimits

0xf0e0,	// (0x0009ea33) background_graphic

0x49e1,	// (0x00094334) wml_tabs_2_pane

0x49ea,	// (0x0009433d) wml_tabs_3_pane_ParamLimits

0x49ea,	// (0x0009433d) wml_tabs_3_pane

0x49fc,	// (0x0009434f) wml_tabs_4_pane_ParamLimits

0x49fc,	// (0x0009434f) wml_tabs_4_pane

0x4a12,	// (0x00094365) wml_tabs_5_pane_ParamLimits

0x4a12,	// (0x00094365) wml_tabs_5_pane

0x4a2c,	// (0x0009437f) wml_tabs_pane_g2_ParamLimits

0x4a2c,	// (0x0009437f) wml_tabs_pane_g2

0x4a40,	// (0x00094393) wml_tabs_pane_g3_ParamLimits

0x4a40,	// (0x00094393) wml_tabs_pane_g3

0x4a54,	// (0x000943a7) wml_tabs_2_active_pane_ParamLimits

0x4a54,	// (0x000943a7) wml_tabs_2_active_pane

0x4a68,	// (0x000943bb) wml_tabs_2_passive_pane_ParamLimits

0x4a68,	// (0x000943bb) wml_tabs_2_passive_pane

0x4a7c,	// (0x000943cf) wml_tabs_3_active_pane_cp_ParamLimits

0x4a7c,	// (0x000943cf) wml_tabs_3_active_pane_cp

0x4a91,	// (0x000943e4) wml_tabs_3_passive_pane_ParamLimits

0x4a91,	// (0x000943e4) wml_tabs_3_passive_pane

0x4aa4,	// (0x000943f7) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aa4,	// (0x000943f7) wml_tabs_3_passive_pane_cp

0x4abb,	// (0x0009440e) tabs_4_active_pane

0x4ac3,	// (0x00094416) tabs_4_passive_pane

0x4acd,	// (0x00094420) tabs_4_passive_pane_cp

0x4ad5,	// (0x00094428) tabs_4_passive_pane_cp2

0x3b48,	// (0x0009349b) aid_height_text

0x313f,	// (0x00092a92) mup_volume_cont_pane_ParamLimits

0x313f,	// (0x00092a92) mup_volume_cont_pane

0x0feb,	// (0x0009093e) aid_size_cell_pinb

0x0ff5,	// (0x00090948) aid_size_list_pinb

0x494c,	// (0x0009429f) mup2_volume_cont_pane_ParamLimits

0x494c,	// (0x0009429f) mup2_volume_cont_pane

0xaf5d,	// (0x0009a8b0) mup2_volume_cont_pane_g1_ParamLimits

0xaf5d,	// (0x0009a8b0) mup2_volume_cont_pane_g1

0x0b8b,	// (0x000904de) aid_size_cell_touch_ParamLimits

0x0b8b,	// (0x000904de) aid_size_cell_touch

0x0dfe,	// (0x00090751) touch_pane_ParamLimits

0x0dfe,	// (0x00090751) touch_pane

0x0b6d,	// (0x000904c0) main_rss2_pane

0x4ae8,	// (0x0009443b) listscroll_rss2_pane

0x4af1,	// (0x00094444) rss2_navigation_pane

0x4af9,	// (0x0009444c) list_rss2_pane

0xd7fe,	// (0x0009d151) scroll_pane_cp22

0x4b01,	// (0x00094454) rss2_navigation_pane_g1

0x4b0a,	// (0x0009445d) rss2_navigation_pane_g2

0x4b12,	// (0x00094465) rss2_navigation_pane_g3

0x0002,

0xf5ec,	// (0x0009ef3f) rss2_navigation_pane_g

0x4b1a,	// (0x0009446d) rss2_navigation_pane_t1

0x4b28,	// (0x0009447b) rss2_list_single_pane_ParamLimits

0x4b28,	// (0x0009447b) rss2_list_single_pane

0x4b42,	// (0x00094495) rss2_list_single_pane_t2

0x4b50,	// (0x000944a3) rss2_list_single_pane_t3_ParamLimits

0x4b50,	// (0x000944a3) rss2_list_single_pane_t3

0x4b6d,	// (0x000944c0) rss2_list_single_pane_t4

0x28bb,	// (0x0009220e) smil_status_pane_g1

0x0df0,	// (0x00090743) main_image2_pane_ParamLimits

0x0df0,	// (0x00090743) main_image2_pane

0x4524,	// (0x00093e77) main_camera2_pane_g9_ParamLimits

0x4524,	// (0x00093e77) main_camera2_pane_g9

0x4640,	// (0x00093f93) main_camera2_pane_t5_ParamLimits

0x4640,	// (0x00093f93) main_camera2_pane_t5

0xaf32,	// (0x0009a885) main_camera2_pane_t6_ParamLimits

0xaf32,	// (0x0009a885) main_camera2_pane_t6

0x4b7b,	// (0x000944ce) main_image2_pane_g1_ParamLimits

0x4b7b,	// (0x000944ce) main_image2_pane_g1

0x385f,	// (0x000931b2) smil2_video_pane_ParamLimits

0x385f,	// (0x000931b2) smil2_video_pane

0x0bcb,	// (0x0009051e) aid_zoom_text_primary_cp

0x0dac,	// (0x000906ff) popup_preview_fixed_window

0xa8c5,	// (0x0009a218) im_reading_pane_g1

0x43f6,	// (0x00093d49) cams2_bc_adjust_pane_cp_ParamLimits

0x43f6,	// (0x00093d49) cams2_bc_adjust_pane_cp

0x4666,	// (0x00093fb9) cams2_bc_adjust_pane_ParamLimits

0x4666,	// (0x00093fb9) cams2_bc_adjust_pane

0xaf96,	// (0x0009a8e9) cams2_bc_adjust_pane_g1

0xaf9e,	// (0x0009a8f1) cams2_slider_pane

0xafa7,	// (0x0009a8fa) cams2_slider_pane_g1

0xafb0,	// (0x0009a903) cams2_slider_pane_g2

0x0006,

0xf5f3,	// (0x0009ef46) cams2_slider_pane_g

0x10e5,	// (0x00090a38) calc_display_pane_ParamLimits

0x110b,	// (0x00090a5e) calc_paper_pane_ParamLimits

0x112e,	// (0x00090a81) grid_calc_pane_ParamLimits

0xae9f,	// (0x0009a7f2) popup_clock_digital_window_t1_ParamLimits

0xde11,	// (0x0009d764) main_image_pane_t1

0x10c7,	// (0x00090a1a) aid_size_cell_calc_ParamLimits

0x10c7,	// (0x00090a1a) aid_size_cell_calc

0x3e7a,	// (0x000937cd) popup_blid_sat_info2_window_ParamLimits

0x3e7a,	// (0x000937cd) popup_blid_sat_info2_window

0x4b99,	// (0x000944ec) aid_size_cell_blid

0x4ba1,	// (0x000944f4) bg_popup_window_pane_cp07

0x4bc4,	// (0x00094517) grid_popup_blid_pane

0x4bce,	// (0x00094521) heading_pane_cp05_ParamLimits

0x4bce,	// (0x00094521) heading_pane_cp05

0x4c98,	// (0x000945eb) cell_popup_blid_pane_ParamLimits

0x4c98,	// (0x000945eb) cell_popup_blid_pane

0x4cc2,	// (0x00094615) cell_popup_blid_pane_g1

0x4cca,	// (0x0009461d) cell_popup_blid_pane_t1

0x491c,	// (0x0009426f) mup2_indicator_pane_ParamLimits

0x491c,	// (0x0009426f) mup2_indicator_pane

0xdb8c,	// (0x0009d4df) mup2_visualizer_osc_pane

0xf0be,	// (0x0009ea11) mup2_visualizer_spec_pane_ParamLimits

0xf0be,	// (0x0009ea11) mup2_visualizer_spec_pane

0x4cd8,	// (0x0009462b) mup2_spec_half_pane

0x4ce1,	// (0x00094634) mup2_spec_half_pane_cp

0x4ce9,	// (0x0009463c) mup2_spec_bar_pane_ParamLimits

0x4ce9,	// (0x0009463c) mup2_spec_bar_pane

0xf048,	// (0x0009e99b) mup2_spec_bar_pane_g1

0xf052,	// (0x0009e9a5) mup2_spec_bar_pane_g2

0x0001,

0x0143,	// (0x0008fa96) mup2_spec_bar_pane_g

0x4d09,	// (0x0009465c) mup2_osc_middle_pane

0xf064,	// (0x0009e9b7) mup2_visualizer_osc_pane_g1

0x0e70,	// (0x000907c3) popup_number_entry_window_t1_ParamLimits

0x0e83,	// (0x000907d6) popup_number_entry_window_t2_ParamLimits

0x0e95,	// (0x000907e8) popup_number_entry_window_t3_ParamLimits

0x0ea7,	// (0x000907fa) popup_number_entry_window_t5_ParamLimits

0x0ea7,	// (0x000907fa) popup_number_entry_window_t5

0xf0ec,	// (0x0009ea3f) popup_number_entry_window_t_ParamLimits

0x0edc,	// (0x0009082f) text_title_cp2_ParamLimits

0xaede,	// (0x0009a831) aid_hotspot_pointer_text2_pane

0xaf04,	// (0x0009a857) main_viewer_pane_g9_ParamLimits

0xaf04,	// (0x0009a857) main_viewer_pane_g9

0xaaf4,	// (0x0009a447) cale_month_pane_t1_ParamLimits

0xab5f,	// (0x0009a4b2) bg_cale_pane_ParamLimits

0xab77,	// (0x0009a4ca) list_cale_pane_ParamLimits

0xa6f1,	// (0x0009a044) listscroll_cale_day_pane_t1

0xab88,	// (0x0009a4db) scroll_pane_cp09_ParamLimits

0x3175,	// (0x00092ac8) main_mup_eq_pane_t1_ParamLimits

0x3175,	// (0x00092ac8) main_mup_eq_pane_t1

0x3191,	// (0x00092ae4) main_mup_eq_pane_t2_ParamLimits

0x3191,	// (0x00092ae4) main_mup_eq_pane_t2

0x31ad,	// (0x00092b00) main_mup_eq_pane_t3_ParamLimits

0x31ad,	// (0x00092b00) main_mup_eq_pane_t3

0x31cb,	// (0x00092b1e) main_mup_eq_pane_t4_ParamLimits

0x31cb,	// (0x00092b1e) main_mup_eq_pane_t4

0x31e9,	// (0x00092b3c) main_mup_eq_pane_t5_ParamLimits

0x31e9,	// (0x00092b3c) main_mup_eq_pane_t5

0x3207,	// (0x00092b5a) main_mup_eq_pane_t6_ParamLimits

0x3207,	// (0x00092b5a) main_mup_eq_pane_t6

0x321d,	// (0x00092b70) main_mup_eq_pane_t7_ParamLimits

0x321d,	// (0x00092b70) main_mup_eq_pane_t7

0x3233,	// (0x00092b86) main_mup_eq_pane_t8_ParamLimits

0x3233,	// (0x00092b86) main_mup_eq_pane_t8

0x3249,	// (0x00092b9c) main_mup_eq_pane_t9_ParamLimits

0x3249,	// (0x00092b9c) main_mup_eq_pane_t9

0x3265,	// (0x00092bb8) main_mup_eq_pane_t10_ParamLimits

0x3265,	// (0x00092bb8) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0009edcc) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0009edcc) main_mup_eq_pane_t

0x333a,	// (0x00092c8d) mup_equalizer_pane_cp5_ParamLimits

0x3352,	// (0x00092ca5) mup_equalizer_pane_cp6_ParamLimits

0x336a,	// (0x00092cbd) mup_equalizer_pane_cp7_ParamLimits

0x0b6d,	// (0x000904c0) main_gallery_pane

0xf06d,	// (0x0009e9c0) smil2_volume_pane

0xf075,	// (0x0009e9c8) smil_status_volume_pane_g1_ParamLimits

0xf088,	// (0x0009e9db) smil_status_volume_pane_g2_ParamLimits

0xaf10,	// (0x0009a863) smil_status_volume_pane_g3_ParamLimits

0xf56b,	// (0x0009eebe) smil_status_volume_pane_g_ParamLimits

0x4ba1,	// (0x000944f4) bg_popup_window_pane_cp07_ParamLimits

0x4baf,	// (0x00094502) blid_firmament_pane

0x4d12,	// (0x00094665) aid_size_cell_gallery_ParamLimits

0x4d12,	// (0x00094665) aid_size_cell_gallery

0x4d28,	// (0x0009467b) grid_gallery_pane_ParamLimits

0x4d28,	// (0x0009467b) grid_gallery_pane

0x4d43,	// (0x00094696) cell_gallery_pane_ParamLimits

0x4d43,	// (0x00094696) cell_gallery_pane

0x4d94,	// (0x000946e7) bg_cell_gallery_focus_pane_ParamLimits

0x4d94,	// (0x000946e7) bg_cell_gallery_focus_pane

0x4da6,	// (0x000946f9) cell_gallery_pane_g1_ParamLimits

0x4da6,	// (0x000946f9) cell_gallery_pane_g1

0x4db2,	// (0x00094705) cell_gallery_pane_g2_ParamLimits

0x4db2,	// (0x00094705) cell_gallery_pane_g2

0x4dbf,	// (0x00094712) cell_gallery_pane_g3_ParamLimits

0x4dbf,	// (0x00094712) cell_gallery_pane_g3

0x4dcc,	// (0x0009471f) cell_gallery_pane_g4_ParamLimits

0x4dcc,	// (0x0009471f) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x0009ef6c) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x0009ef6c) cell_gallery_pane_g

0x4dd8,	// (0x0009472b) bg_cell_gallery_focus_pane_g1

0x4de0,	// (0x00094733) bg_cell_gallery_focus_pane_g2

0x4de8,	// (0x0009473b) bg_cell_gallery_focus_pane_g3

0x4df0,	// (0x00094743) bg_cell_gallery_focus_pane_g4

0x4df8,	// (0x0009474b) bg_cell_gallery_focus_pane_g5

0x4e00,	// (0x00094753) bg_cell_gallery_focus_pane_g6

0x4e08,	// (0x0009475b) bg_cell_gallery_focus_pane_g7

0x4e10,	// (0x00094763) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x0009ef75) bg_cell_gallery_focus_pane_g

0x4e18,	// (0x0009476b) aid_firma_cardinal

0x4e2c,	// (0x0009477f) blid_firmament_pane_t1

0x4e43,	// (0x00094796) blid_firmament_pane_t2

0x4e5a,	// (0x000947ad) blid_firmament_pane_t3

0x4e71,	// (0x000947c4) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x0009ef86) blid_firmament_pane_t

0x4e88,	// (0x000947db) blid_sat_info_pane

0x4e98,	// (0x000947eb) blid_sat_info_pane_g1

0x4e98,	// (0x000947eb) blid_sat_info_pane_g2

0x0001,

0xf63c,	// (0x0009ef8f) blid_sat_info_pane_g

0x4ea2,	// (0x000947f5) blid_sat_info_pane_t1

0x4eb0,	// (0x00094803) smil2_volume_content_pane

0x4eb9,	// (0x0009480c) smil2_volume_pane_g1

0x4ec1,	// (0x00094814) smil2_volume_content_pane_g1

0x4eca,	// (0x0009481d) smil2_volume_content_pane_g2

0x4ed3,	// (0x00094826) smil2_volume_content_pane_g3

0x4edc,	// (0x0009482f) smil2_volume_content_pane_g4

0x4ee5,	// (0x00094838) smil2_volume_content_pane_g5

0x4eee,	// (0x00094841) smil2_volume_content_pane_g6

0x4ef7,	// (0x0009484a) smil2_volume_content_pane_g7

0x4f00,	// (0x00094853) smil2_volume_content_pane_g8

0x4f09,	// (0x0009485c) smil2_volume_content_pane_g9

0x4f12,	// (0x00094865) smil2_volume_content_pane_g10

0x0009,

0xf641,	// (0x0009ef94) smil2_volume_content_pane_g

0x15ea,	// (0x00090f3d) cale_week_day_heading_pane_t1_ParamLimits

0x15fe,	// (0x00090f51) cale_week_day_heading_pane_t2_ParamLimits

0x1612,	// (0x00090f65) cale_week_day_heading_pane_t3_ParamLimits

0x1626,	// (0x00090f79) cale_week_day_heading_pane_t4_ParamLimits

0x163a,	// (0x00090f8d) cale_week_day_heading_pane_t5_ParamLimits

0x164e,	// (0x00090fa1) cale_week_day_heading_pane_t6_ParamLimits

0x1662,	// (0x00090fb5) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009eb44) cale_week_day_heading_pane_t_ParamLimits

0xa703,	// (0x0009a056) bg_cale_side_pane_ParamLimits

0x1676,	// (0x00090fc9) cale_week_time_pane_t1_ParamLimits

0x168e,	// (0x00090fe1) cale_week_time_pane_t2_ParamLimits

0x16a6,	// (0x00090ff9) cale_week_time_pane_t3_ParamLimits

0x16be,	// (0x00091011) cale_week_time_pane_t4_ParamLimits

0x16d6,	// (0x00091029) cale_week_time_pane_t5_ParamLimits

0x16ee,	// (0x00091041) cale_week_time_pane_t6_ParamLimits

0x1706,	// (0x00091059) cale_week_time_pane_t7_ParamLimits

0x1722,	// (0x00091075) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009eb53) cale_week_time_pane_t_ParamLimits

0x1742,	// (0x00091095) cell_cale_week_pane_g2_ParamLimits

0xa703,	// (0x0009a056) bg_cale_side_pane_cp01_ParamLimits

0x272a,	// (0x0009207d) cale_month_week_pane_t1_ParamLimits

0x2741,	// (0x00092094) cale_month_week_pane_t2_ParamLimits

0x2758,	// (0x000920ab) cale_month_week_pane_t3_ParamLimits

0x276f,	// (0x000920c2) cale_month_week_pane_t4_ParamLimits

0x2786,	// (0x000920d9) cale_month_week_pane_t5_ParamLimits

0x279d,	// (0x000920f0) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0009ec2c) cale_month_week_pane_t_ParamLimits

0xab06,	// (0x0009a459) cell_cale_month_pane_g1_ParamLimits

0x0b6d,	// (0x000904c0) main_cale_event_viewer_pane

0x0b6d,	// (0x000904c0) listscroll_cale_event_viewer_pane

0x4f1b,	// (0x0009486e) list_cale_ev_pane

0x4f23,	// (0x00094876) scroll_pane_cp023

0x4f2f,	// (0x00094882) field_cale_ev_pane_ParamLimits

0x4f2f,	// (0x00094882) field_cale_ev_pane

0x4f53,	// (0x000948a6) field_cale_ev_content_pane_ParamLimits

0x4f53,	// (0x000948a6) field_cale_ev_content_pane

0x4f5f,	// (0x000948b2) field_cale_ev_pane_g1_ParamLimits

0x4f5f,	// (0x000948b2) field_cale_ev_pane_g1

0x4f6b,	// (0x000948be) field_cale_ev_pane_g2_ParamLimits

0x4f6b,	// (0x000948be) field_cale_ev_pane_g2

0x4f83,	// (0x000948d6) field_cale_ev_pane_g3_ParamLimits

0x4f83,	// (0x000948d6) field_cale_ev_pane_g3

0x0002,

0xf656,	// (0x0009efa9) field_cale_ev_pane_g_ParamLimits

0xf656,	// (0x0009efa9) field_cale_ev_pane_g

0x4f9b,	// (0x000948ee) field_cale_ev_pane_t1_ParamLimits

0x4f9b,	// (0x000948ee) field_cale_ev_pane_t1

0x4fb2,	// (0x00094905) field_cale_ev_content_pane_t1_ParamLimits

0x4fb2,	// (0x00094905) field_cale_ev_content_pane_t1

0xdcf7,	// (0x0009d64a) bg_button_pane_cp01

0xa524,	// (0x00099e77) listscroll_cale_week_pane_ParamLimits

0x13d4,	// (0x00090d27) popup_toolbar_window_cp01

0xa6f1,	// (0x0009a044) listscroll_cale_week_pane_t1_ParamLimits

0xa524,	// (0x00099e77) listscroll_cale_day_pane_ParamLimits

0x291b,	// (0x0009226e) popup_toolbar_window_cp02

0xa6f1,	// (0x0009a044) listscroll_cale_day_pane_t1_ParamLimits

0xa524,	// (0x00099e77) main_cale_month_pane_ParamLimits

0x40fa,	// (0x00093a4d) popup_toolbar_window_cp03_ParamLimits

0x40fa,	// (0x00093a4d) popup_toolbar_window_cp03

0x371d,	// (0x00093070) main_image_pane_g2_ParamLimits

0x371d,	// (0x00093070) main_image_pane_g2

0x372e,	// (0x00093081) main_image_pane_g3_ParamLimits

0x372e,	// (0x00093081) main_image_pane_g3

0x0002,

0xf501,	// (0x0009ee54) main_image_pane_g_ParamLimits

0xf501,	// (0x0009ee54) main_image_pane_g

0xde11,	// (0x0009d764) main_image_pane_t1_ParamLimits

0x373f,	// (0x00093092) main_image_pane_t2_ParamLimits

0x373f,	// (0x00093092) main_image_pane_t2

0x3751,	// (0x000930a4) main_image_pane_t3_ParamLimits

0x3751,	// (0x000930a4) main_image_pane_t3

0x3779,	// (0x000930cc) main_image_pane_t4_ParamLimits

0x3779,	// (0x000930cc) main_image_pane_t4

0x0003,

0xf508,	// (0x0009ee5b) main_image_pane_t_ParamLimits

0xf508,	// (0x0009ee5b) main_image_pane_t

0x3799,	// (0x000930ec) popup_image_details_window_cp01

0x37a3,	// (0x000930f6) popup_toobar_trans_pane_cp01_ParamLimits

0x37a3,	// (0x000930f6) popup_toobar_trans_pane_cp01

0x3f6d,	// (0x000938c0) popup_image_details_window_ParamLimits

0x3f6d,	// (0x000938c0) popup_image_details_window

0xefb9,	// (0x0009e90c) popup_image_focus_window

0x43b0,	// (0x00093d03) camera2_autofocus_pane_ParamLimits

0x43b0,	// (0x00093d03) camera2_autofocus_pane

0x0b6d,	// (0x000904c0) bg_popup_sub_pane_cp06

0x4fd3,	// (0x00094926) popup_image_focus_window_g1

0x4fdb,	// (0x0009492e) popup_image_focus_window_g2

0x4fe3,	// (0x00094936) popup_image_focus_window_g3

0x4feb,	// (0x0009493e) popup_image_focus_window_g4

0x0003,

0xf65d,	// (0x0009efb0) popup_image_focus_window_g

0x4ff3,	// (0x00094946) popup_image_focus_window_t1

0x5001,	// (0x00094954) popup_image_focus_window_t2

0x5011,	// (0x00094964) popup_image_focus_window_t3

0x0002,

0xf666,	// (0x0009efb9) popup_image_focus_window_t

0x501f,	// (0x00094972) camera2_autofocus_pane_g1

0x0df0,	// (0x00090743) bg_tb_trans_pane_cp01

0x505d,	// (0x000949b0) popup_image_details_window_g1

0x5070,	// (0x000949c3) popup_image_details_window_g2

0x0002,

0xf678,	// (0x0009efcb) popup_image_details_window_g

0x5099,	// (0x000949ec) popup_image_details_window_t1

0x50ab,	// (0x000949fe) popup_image_details_window_t2

0x50c4,	// (0x00094a17) popup_image_details_window_t3

0x50d8,	// (0x00094a2b) popup_image_details_window_t4

0x50f3,	// (0x00094a46) popup_image_details_window_t5

0x0004,

0xf67f,	// (0x0009efd2) popup_image_details_window_t

0xa4ec,	// (0x00099e3f) bg_calc_paper_pane_ParamLimits

0xa500,	// (0x00099e53) grid_highlight_pane_cp013

0xa50a,	// (0x00099e5d) list_calc_pane_ParamLimits

0xa51c,	// (0x00099e6f) scroll_pane_cp024

0xa524,	// (0x00099e77) bg_calc_display_pane_ParamLimits

0x1225,	// (0x00090b78) calc_display_pane_t1_ParamLimits

0x1237,	// (0x00090b8a) calc_display_pane_t2_ParamLimits

0xa530,	// (0x00099e83) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009eac6) calc_display_pane_t_ParamLimits

0x12fa,	// (0x00090c4d) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009eae3) cell_calc_pane_g

0x1303,	// (0x00090c56) cell_calc_pane_t1

0xa5a7,	// (0x00099efa) grid_highlight_pane_cp02_ParamLimits

0xa5bd,	// (0x00099f10) toolbar_button_pane_cp01_ParamLimits

0xa5bd,	// (0x00099f10) toolbar_button_pane_cp01

0xde56,	// (0x0009d7a9) temp_image_control_pane_ParamLimits

0xde56,	// (0x0009d7a9) temp_image_control_pane

0x0df0,	// (0x00090743) main_mp3_pane

0x510d,	// (0x00094a60) temp_image_control_pane_g1_ParamLimits

0x510d,	// (0x00094a60) temp_image_control_pane_g1

0x511b,	// (0x00094a6e) temp_image_control_pane_g2_ParamLimits

0x511b,	// (0x00094a6e) temp_image_control_pane_g2

0x512d,	// (0x00094a80) temp_image_control_pane_g3_ParamLimits

0x512d,	// (0x00094a80) temp_image_control_pane_g3

0x513d,	// (0x00094a90) temp_image_control_pane_g4_ParamLimits

0x513d,	// (0x00094a90) temp_image_control_pane_g4

0x0003,

0xf68a,	// (0x0009efdd) temp_image_control_pane_g_ParamLimits

0xf68a,	// (0x0009efdd) temp_image_control_pane_g

0x510d,	// (0x00094a60) main_mp3_pane_g1

0x5150,	// (0x00094aa3) main_mp3_pane_g2

0x0007,

0xf693,	// (0x0009efe6) main_mp3_pane_g

0x51a9,	// (0x00094afc) main_mp3_pane_t1

0xa7d2,	// (0x0009a125) main_camera_pane_g8_ParamLimits

0xa7d2,	// (0x0009a125) main_camera_pane_g8

0x1a13,	// (0x00091366) main_video_pane_g7_ParamLimits

0x1a13,	// (0x00091366) main_video_pane_g7

0xaf4b,	// (0x0009a89e) main_camera2_pane_t7_ParamLimits

0xaf4b,	// (0x0009a89e) main_camera2_pane_t7

0xa91c,	// (0x0009a26f) scroll_pane_cp025_ParamLimits

0xa91c,	// (0x0009a26f) scroll_pane_cp025

0xa930,	// (0x0009a283) scroll_pane_cp026_ParamLimits

0xa930,	// (0x0009a283) scroll_pane_cp026

0xa93f,	// (0x0009a292) wml_content_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_touch_calib_pane

0x527d,	// (0x00094bd0) main_touch_calib_pane_g1

0x5289,	// (0x00094bdc) main_touch_calib_pane_g2

0x5295,	// (0x00094be8) main_touch_calib_pane_g3

0x52a1,	// (0x00094bf4) main_touch_calib_pane_g4

0x0003,

0xf6b1,	// (0x0009f004) main_touch_calib_pane_g

0x52ad,	// (0x00094c00) main_touch_calib_pane_t1

0x52c7,	// (0x00094c1a) main_touch_calib_pane_t2

0x0004,

0xf6ba,	// (0x0009f00d) main_touch_calib_pane_t

0xd879,	// (0x0009d1cc) mup_progress_pane_cp02

0xdaec,	// (0x0009d43f) navi_pane_g1

0xdb4e,	// (0x0009d4a1) navi_pane_mp_t3

0x0df0,	// (0x00090743) main_mp3_pane_ParamLimits

0x413c,	// (0x00093a8f) navi_pane_ParamLimits

0x510d,	// (0x00094a60) main_mp3_pane_g1_ParamLimits

0x5150,	// (0x00094aa3) main_mp3_pane_g2_ParamLimits

0x515c,	// (0x00094aaf) main_mp3_pane_g3_ParamLimits

0x515c,	// (0x00094aaf) main_mp3_pane_g3

0x516a,	// (0x00094abd) main_mp3_pane_g4_ParamLimits

0x516a,	// (0x00094abd) main_mp3_pane_g4

0x5176,	// (0x00094ac9) main_mp3_pane_g5_ParamLimits

0x5176,	// (0x00094ac9) main_mp3_pane_g5

0x5184,	// (0x00094ad7) main_mp3_pane_g6_ParamLimits

0x5184,	// (0x00094ad7) main_mp3_pane_g6

0x5191,	// (0x00094ae4) main_mp3_pane_g7_ParamLimits

0x5191,	// (0x00094ae4) main_mp3_pane_g7

0x519d,	// (0x00094af0) main_mp3_pane_g8_ParamLimits

0x519d,	// (0x00094af0) main_mp3_pane_g8

0xf693,	// (0x0009efe6) main_mp3_pane_g_ParamLimits

0x51b7,	// (0x00094b0a) main_mp3_pane_t2

0x51c5,	// (0x00094b18) main_mp3_pane_t3

0x51d3,	// (0x00094b26) main_mp3_pane_t4

0x51e1,	// (0x00094b34) main_mp3_pane_t5

0x0005,

0xf6a4,	// (0x0009eff7) main_mp3_pane_t

0x51fd,	// (0x00094b50) mup_progress_pane_cp01

0x0bcb,	// (0x0009051e) aid_zoom_text_secondary2

0x4f1b,	// (0x0009486e) list_cale_ev2_pane

0x4f23,	// (0x00094876) scroll_pane_cp023_ParamLimits

0x531f,	// (0x00094c72) field_cale_ev2_pane_ParamLimits

0x531f,	// (0x00094c72) field_cale_ev2_pane

0x5343,	// (0x00094c96) field_cale_ev2_pane_g1_ParamLimits

0x5343,	// (0x00094c96) field_cale_ev2_pane_g1

0x534f,	// (0x00094ca2) field_cale_ev2_pane_g2_ParamLimits

0x534f,	// (0x00094ca2) field_cale_ev2_pane_g2

0x5367,	// (0x00094cba) field_cale_ev2_pane_g3_ParamLimits

0x5367,	// (0x00094cba) field_cale_ev2_pane_g3

0x0003,

0xf6c5,	// (0x0009f018) field_cale_ev2_pane_g_ParamLimits

0xf6c5,	// (0x0009f018) field_cale_ev2_pane_g

0x538b,	// (0x00094cde) field_cale_ev2_pane_t1_ParamLimits

0x538b,	// (0x00094cde) field_cale_ev2_pane_t1

0x53a2,	// (0x00094cf5) field_cale_ev2_pane_t2_ParamLimits

0x53a2,	// (0x00094cf5) field_cale_ev2_pane_t2

0x0001,

0xf6ce,	// (0x0009f021) field_cale_ev2_pane_t_ParamLimits

0xf6ce,	// (0x0009f021) field_cale_ev2_pane_t

0x35b8,	// (0x00092f0b) main_postcard_pane_g5_ParamLimits

0x35b8,	// (0x00092f0b) main_postcard_pane_g5

0x35ce,	// (0x00092f21) main_postcard_pane_g6_ParamLimits

0x35ce,	// (0x00092f21) main_postcard_pane_g6

0x17bf,	// (0x00091112) camera2_autofocus_pane_cp_ParamLimits

0x17bf,	// (0x00091112) camera2_autofocus_pane_cp

0x0df0,	// (0x00090743) main_mup3_pane

0x53d7,	// (0x00094d2a) main_mup3_pane_g1_ParamLimits

0x53d7,	// (0x00094d2a) main_mup3_pane_g1

0x53f9,	// (0x00094d4c) main_mup3_pane_g2_ParamLimits

0x53f9,	// (0x00094d4c) main_mup3_pane_g2

0x547c,	// (0x00094dcf) main_mup3_pane_g3_ParamLimits

0x547c,	// (0x00094dcf) main_mup3_pane_g3

0x54c0,	// (0x00094e13) main_mup3_pane_g4_ParamLimits

0x54c0,	// (0x00094e13) main_mup3_pane_g4

0x5504,	// (0x00094e57) main_mup3_pane_g5_ParamLimits

0x5504,	// (0x00094e57) main_mup3_pane_g5

0x5548,	// (0x00094e9b) main_mup3_pane_g6_ParamLimits

0x5548,	// (0x00094e9b) main_mup3_pane_g6

0x555b,	// (0x00094eae) main_mup3_pane_g7_ParamLimits

0x555b,	// (0x00094eae) main_mup3_pane_g7

0x0007,

0xf6de,	// (0x0009f031) main_mup3_pane_g_ParamLimits

0xf6de,	// (0x0009f031) main_mup3_pane_g

0x55d2,	// (0x00094f25) main_mup3_pane_t1_ParamLimits

0x55d2,	// (0x00094f25) main_mup3_pane_t1

0x564c,	// (0x00094f9f) main_mup3_pane_t2_ParamLimits

0x564c,	// (0x00094f9f) main_mup3_pane_t2

0x5726,	// (0x00095079) main_mup3_pane_t4_ParamLimits

0x5726,	// (0x00095079) main_mup3_pane_t4

0x5784,	// (0x000950d7) main_mup3_pane_t5_ParamLimits

0x5784,	// (0x000950d7) main_mup3_pane_t5

0x583c,	// (0x0009518f) main_mup3_pane_t6_ParamLimits

0x583c,	// (0x0009518f) main_mup3_pane_t6

0x0005,

0xf6ef,	// (0x0009f042) main_mup3_pane_t_ParamLimits

0xf6ef,	// (0x0009f042) main_mup3_pane_t

0x58f2,	// (0x00095245) mup3_progress_pane_ParamLimits

0x58f2,	// (0x00095245) mup3_progress_pane

0x5976,	// (0x000952c9) popup_mup3_control_window_ParamLimits

0x5976,	// (0x000952c9) popup_mup3_control_window

0x5996,	// (0x000952e9) popup_mup3_text_window

0x59b4,	// (0x00095307) mup3_progress_pane_t1

0x59cb,	// (0x0009531e) mup3_progress_pane_t2

0x59e2,	// (0x00095335) mup3_progress_pane_t3

0x0002,

0xf6fc,	// (0x0009f04f) mup3_progress_pane_t

0x59f9,	// (0x0009534c) mup_progress_pane_cp03

0x0b6d,	// (0x000904c0) bg_tb_trans_pane_cp04

0x5a09,	// (0x0009535c) mup3_volume_pane

0x5a11,	// (0x00095364) popup_mup3_control_window_g1

0x5a1a,	// (0x0009536d) mup3_volume_pane_g1

0x5a23,	// (0x00095376) mup3_volume_pane_g2

0x5a2c,	// (0x0009537f) mup3_volume_pane_g3

0x0002,

0xf703,	// (0x0009f056) mup3_volume_pane_g

0x0b6d,	// (0x000904c0) bg_tb_trans_pane_cp03

0x5a35,	// (0x00095388) popup_mup3_text_window_g1

0x5a3d,	// (0x00095390) popup_mup3_text_window_t1

0xa57e,	// (0x00099ed1) list_calc_item_pane_g1_ParamLimits

0x4adf,	// (0x00094432) mup_volume_pane_cp_g1

0x52e1,	// (0x00094c34) main_touch_calib_pane_t3

0x52f5,	// (0x00094c48) main_touch_calib_pane_t4

0x5309,	// (0x00094c5c) main_touch_calib_pane_t5

0x0b77,	// (0x000904ca) aid_cell_size_toolbar2

0x0b7f,	// (0x000904d2) aid_popup3_width_pane

0x0bbb,	// (0x0009050e) aid_zoom_text_msg_primary

0xa7b2,	// (0x0009a105) vorec_t7

0xa542,	// (0x00099e95) bg_calc_paper_pane_g1_ParamLimits

0xa54e,	// (0x00099ea1) bg_calc_paper_pane_g2_ParamLimits

0xa55a,	// (0x00099ead) bg_calc_paper_pane_g3_ParamLimits

0xa566,	// (0x00099eb9) bg_calc_paper_pane_g4_ParamLimits

0xa572,	// (0x00099ec5) bg_calc_paper_pane_g5_ParamLimits

0x1284,	// (0x00090bd7) bg_calc_paper_pane_g6_ParamLimits

0x1297,	// (0x00090bea) bg_calc_paper_pane_g7_ParamLimits

0x12aa,	// (0x00090bfd) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009eacd) bg_calc_paper_pane_g_ParamLimits

0x12bb,	// (0x00090c0e) calc_bg_paper_pane_g9_ParamLimits

0x1921,	// (0x00091274) image_qvga_pane_ParamLimits

0x1921,	// (0x00091274) image_qvga_pane

0xa42d,	// (0x00099d80) bg_popup_sub_pane_cp04_ParamLimits

0xdd8d,	// (0x0009d6e0) popup_mup_playback_window_g1_ParamLimits

0xdd99,	// (0x0009d6ec) popup_mup_playback_window_t1_ParamLimits

0xddae,	// (0x0009d701) popup_mup_playback_window_t2_ParamLimits

0x001f,	// (0x0008f972) popup_mup_playback_window_t_ParamLimits

0x4834,	// (0x00094187) main_mup2_pane_g3_ParamLimits

0x4834,	// (0x00094187) main_mup2_pane_g3

0x1d2e,	// (0x00091681) popup_toolbar_window_cp04

0xe1a9,	// (0x0009dafc) popup_call2_audio_second_window_g3_ParamLimits

0xe1a9,	// (0x0009dafc) popup_call2_audio_second_window_g3

0xe5b3,	// (0x0009df06) popup_call2_audio_first_window_g4_ParamLimits

0xe5b3,	// (0x0009df06) popup_call2_audio_first_window_g4

0xec32,	// (0x0009e585) popup_call2_audio_in_window_g4_ParamLimits

0xec32,	// (0x0009e585) popup_call2_audio_in_window_g4

0x36ff,	// (0x00093052) aid_area_sk_bg_cut_ParamLimits

0x36ff,	// (0x00093052) aid_area_sk_bg_cut

0xddc3,	// (0x0009d716) aid_area_sk_bg_cut_2_ParamLimits

0xddc3,	// (0x0009d716) aid_area_sk_bg_cut_2

0x4d84,	// (0x000946d7) aid_placing_details_win

0x4d8c,	// (0x000946df) aid_placing_details_win_2

0x501f,	// (0x00094972) camera2_autofocus_pane_g1_ParamLimits

0x0d91,	// (0x000906e4) popup_fixed_preview_cale_window_ParamLimits

0x0d91,	// (0x000906e4) popup_fixed_preview_cale_window

0xdb9d,	// (0x0009d4f0) navi_slider_pane_g3

0xdba6,	// (0x0009d4f9) navi_slider_pane_g4

0xdbaf,	// (0x0009d502) navi_slider_pane_g5

0xdb9d,	// (0x0009d4f0) navi_slider_pane_g6

0xaec5,	// (0x0009a818) navi_slider_pane_g7

0xdcc4,	// (0x0009d617) mup_scale_pane_g3

0xdccd,	// (0x0009d620) mup_scale_pane_g4

0xdcd6,	// (0x0009d629) mup_scale_pane_g5

0x3382,	// (0x00092cd5) mup_scale_pane_g6

0x338b,	// (0x00092cde) mup_scale_pane_g7

0xdb9d,	// (0x0009d4f0) cams2_slider_pane_g3

0x4b91,	// (0x000944e4) cams2_slider_pane_g4

0xafb9,	// (0x0009a90c) cams2_slider_pane_g5

0xdb9d,	// (0x0009d4f0) cams2_slider_pane_g6

0xafc1,	// (0x0009a914) cams2_slider_pane_g7

0x4e98,	// (0x000947eb) camera2_autofocus_pane_cp_g1

0x5a4b,	// (0x0009539e) bg_popup_preview_window_pane_cp02_ParamLimits

0x5a4b,	// (0x0009539e) bg_popup_preview_window_pane_cp02

0x5a57,	// (0x000953aa) list_fp_cale_pane_ParamLimits

0x5a57,	// (0x000953aa) list_fp_cale_pane

0x5a63,	// (0x000953b6) popup_fixed_preview_cale_window_t1_ParamLimits

0x5a63,	// (0x000953b6) popup_fixed_preview_cale_window_t1

0x5a75,	// (0x000953c8) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a75,	// (0x000953c8) popup_fixed_preview_cale_window_t2

0x5a8a,	// (0x000953dd) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a8a,	// (0x000953dd) popup_fixed_preview_cale_window_t3

0x0002,

0xf70a,	// (0x0009f05d) popup_fixed_preview_cale_window_t_ParamLimits

0xf70a,	// (0x0009f05d) popup_fixed_preview_cale_window_t

0x5aad,	// (0x00095400) list_single_fp_cale_pane_ParamLimits

0x5aad,	// (0x00095400) list_single_fp_cale_pane

0x5ac5,	// (0x00095418) list_single_fp_cale_pane_g1_ParamLimits

0x5ac5,	// (0x00095418) list_single_fp_cale_pane_g1

0x5ad1,	// (0x00095424) list_single_fp_cale_pane_g2_ParamLimits

0x5ad1,	// (0x00095424) list_single_fp_cale_pane_g2

0x0002,

0xf711,	// (0x0009f064) list_single_fp_cale_pane_g_ParamLimits

0xf711,	// (0x0009f064) list_single_fp_cale_pane_g

0x5aea,	// (0x0009543d) list_single_fp_cale_pane_t1_ParamLimits

0x5aea,	// (0x0009543d) list_single_fp_cale_pane_t1

0x5afc,	// (0x0009544f) list_single_fp_cale_pane_t2_ParamLimits

0x5afc,	// (0x0009544f) list_single_fp_cale_pane_t2

0x0001,

0xf718,	// (0x0009f06b) list_single_fp_cale_pane_t_ParamLimits

0xf718,	// (0x0009f06b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b6d,	// (0x000904c0) main_dialer_pane

0x5b2f,	// (0x00095482) aid_cell_size_keypad

0x5b39,	// (0x0009548c) dialer_ne_pane

0x5b43,	// (0x00095496) grid_dialer_command_1_pane

0x5b4b,	// (0x0009549e) grid_dialer_command_2_pane

0x5b53,	// (0x000954a6) grid_dialer_keypad_pane

0x5b67,	// (0x000954ba) bg_popup_call_pane_cp06_ParamLimits

0x5b67,	// (0x000954ba) bg_popup_call_pane_cp06

0x5b73,	// (0x000954c6) dialer_ne_clear_pane_ParamLimits

0x5b73,	// (0x000954c6) dialer_ne_clear_pane

0x5b7f,	// (0x000954d2) dialer_ne_pane_g1

0x5b87,	// (0x000954da) dialer_ne_pane_t1_ParamLimits

0x5b87,	// (0x000954da) dialer_ne_pane_t1

0x5b99,	// (0x000954ec) dialer_ne_pane_t2_ParamLimits

0x5b99,	// (0x000954ec) dialer_ne_pane_t2

0x5bc3,	// (0x00095516) dialer_ne_pane_t3_ParamLimits

0x5bc3,	// (0x00095516) dialer_ne_pane_t3

0x0002,

0xf71d,	// (0x0009f070) dialer_ne_pane_t_ParamLimits

0xf71d,	// (0x0009f070) dialer_ne_pane_t

0x5bf3,	// (0x00095546) dialer_ne_pane_t3_copy1_ParamLimits

0x5bf3,	// (0x00095546) dialer_ne_pane_t3_copy1

0x5c22,	// (0x00095575) cell_dialer_keypad_pane_ParamLimits

0x5c22,	// (0x00095575) cell_dialer_keypad_pane

0x5c39,	// (0x0009558c) cell_dialer_command_1_pane_ParamLimits

0x5c39,	// (0x0009558c) cell_dialer_command_1_pane

0x5c4f,	// (0x000955a2) cell_dialer_command_2_pane_ParamLimits

0x5c4f,	// (0x000955a2) cell_dialer_command_2_pane

0x5c5e,	// (0x000955b1) bg_button_pane_cp02_ParamLimits

0x5c5e,	// (0x000955b1) bg_button_pane_cp02

0x5c6a,	// (0x000955bd) cell_dialer_keypad_pane_g1_ParamLimits

0x5c6a,	// (0x000955bd) cell_dialer_keypad_pane_g1

0x5c5e,	// (0x000955b1) bg_button_pane_cp03_ParamLimits

0x5c5e,	// (0x000955b1) bg_button_pane_cp03

0x5c7f,	// (0x000955d2) cell_dialer_command_1_pane_g1_ParamLimits

0x5c7f,	// (0x000955d2) cell_dialer_command_1_pane_g1

0x5c93,	// (0x000955e6) bg_button_pane_cp04

0x5c9b,	// (0x000955ee) cell_dialer_command_2_pane_g1

0xdb8c,	// (0x0009d4df) bg_button_pane_cp06

0x5ca3,	// (0x000955f6) dialer_ne_clear_pane_g1

0x2e64,	// (0x000927b7) navi_pane_g2

0x2e92,	// (0x000927e5) navi_pane_g3

0x0002,

0xf409,	// (0x0009ed5c) navi_pane_g

0x2ebd,	// (0x00092810) navi_pane_mv_g2

0x2ee4,	// (0x00092837) navi_pane_mv_g5

0x2eec,	// (0x0009283f) navi_pane_mv_t1

0xa524,	// (0x00099e77) main_clock2_pane

0x5ce0,	// (0x00095633) main_clock2_list_pane_ParamLimits

0x5ce0,	// (0x00095633) main_clock2_list_pane

0x5d18,	// (0x0009566b) main_clock2_pane_t1_ParamLimits

0x5d18,	// (0x0009566b) main_clock2_pane_t1

0x5d54,	// (0x000956a7) main_clock2_pane_t2_ParamLimits

0x5d54,	// (0x000956a7) main_clock2_pane_t2

0x0004,

0xf724,	// (0x0009f077) main_clock2_pane_t_ParamLimits

0xf724,	// (0x0009f077) main_clock2_pane_t

0x5de0,	// (0x00095733) popup_clock_analogue_window_cp03_ParamLimits

0x5de0,	// (0x00095733) popup_clock_analogue_window_cp03

0x5e07,	// (0x0009575a) popup_clock_digital_window_cp02_ParamLimits

0x5e07,	// (0x0009575a) popup_clock_digital_window_cp02

0x5e80,	// (0x000957d3) main_clock2_list_single_pane_ParamLimits

0x5e80,	// (0x000957d3) main_clock2_list_single_pane

0xdb8c,	// (0x0009d4df) list_highlight_pane_cp05

0x5e92,	// (0x000957e5) main_clock2_list_single_pane_t1

0x1d2e,	// (0x00091681) popup_toolbar_window_cp04_ParamLimits

0x502d,	// (0x00094980) camera2_autofocus_pane_g2_ParamLimits

0x502d,	// (0x00094980) camera2_autofocus_pane_g2

0x5039,	// (0x0009498c) camera2_autofocus_pane_g3_ParamLimits

0x5039,	// (0x0009498c) camera2_autofocus_pane_g3

0x5045,	// (0x00094998) camera2_autofocus_pane_g4_ParamLimits

0x5045,	// (0x00094998) camera2_autofocus_pane_g4

0x5051,	// (0x000949a4) camera2_autofocus_pane_g5_ParamLimits

0x5051,	// (0x000949a4) camera2_autofocus_pane_g5

0x0004,

0xf66d,	// (0x0009efc0) camera2_autofocus_pane_g_ParamLimits

0xf66d,	// (0x0009efc0) camera2_autofocus_pane_g

0x53b7,	// (0x00094d0a) camera2_autofocus_pane_cp_g2

0x53bf,	// (0x00094d12) camera2_autofocus_pane_cp_g3

0x53c7,	// (0x00094d1a) camera2_autofocus_pane_cp_g4

0x53cf,	// (0x00094d22) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d3,	// (0x0009f026) camera2_autofocus_pane_cp_g

0x5b5f,	// (0x000954b2) popup_dialer_spcha_window

0x0b6d,	// (0x000904c0) bg_popup_sub_pane_cp07

0x5f44,	// (0x00095897) list_spcha_pane

0x5f4c,	// (0x0009589f) list_single_spcha_pane_ParamLimits

0x5f4c,	// (0x0009589f) list_single_spcha_pane

0x0b6d,	// (0x000904c0) list_highlight_pane_cp06

0x5f5d,	// (0x000958b0) list_single_spcha_pane_t1

0xe9dc,	// (0x0009e32f) popup_call2_audio_out_window_g4_ParamLimits

0xe9dc,	// (0x0009e32f) popup_call2_audio_out_window_g4

0x0b6d,	// (0x000904c0) main_imed2_pane

0xefc3,	// (0x0009e916) popup_imed_adjust2_window

0x3f85,	// (0x000938d8) popup_imed_trans_window_ParamLimits

0x3f85,	// (0x000938d8) popup_imed_trans_window

0x4bfa,	// (0x0009454d) popup_blid_sat_info2_window_t1

0x4c08,	// (0x0009455b) popup_blid_sat_info2_window_t2

0x000a,

0xf602,	// (0x0009ef55) popup_blid_sat_info2_window_t

0x5f6b,	// (0x000958be) aid_size_cell_colour_35

0x5f8b,	// (0x000958de) aid_size_cell_colour_112

0x5fab,	// (0x000958fe) aid_size_cell_effect

0xef97,	// (0x0009e8ea) bg_tb_trans_pane_cp02

0xabfb,	// (0x0009a54e) heading_imed_pane

0x5fcb,	// (0x0009591e) listscroll_imed_pane

0x5fd7,	// (0x0009592a) heading_imed_pane_g1

0x5fdf,	// (0x00095932) heading_imed_pane_t1

0x5fed,	// (0x00095940) grid_imed_colour_35_pane_ParamLimits

0x5fed,	// (0x00095940) grid_imed_colour_35_pane

0x6009,	// (0x0009595c) grid_imed_effect_pane

0xafca,	// (0x0009a91d) list_imed_aspect_pane

0x6020,	// (0x00095973) scroll_pane_cp027_ParamLimits

0x6020,	// (0x00095973) scroll_pane_cp027

0x6031,	// (0x00095984) cell_imed_effect_pane_ParamLimits

0x6031,	// (0x00095984) cell_imed_effect_pane

0xafd2,	// (0x0009a925) cell_imed_colour_pane_ParamLimits

0xafd2,	// (0x0009a925) cell_imed_colour_pane

0xb01c,	// (0x0009a96f) cell_imed_colour_pane_g1_ParamLimits

0xb01c,	// (0x0009a96f) cell_imed_colour_pane_g1

0xb02d,	// (0x0009a980) hgihlgiht_grid_pane_cp016_ParamLimits

0xb02d,	// (0x0009a980) hgihlgiht_grid_pane_cp016

0x6056,	// (0x000959a9) cell_imed_effect_pane_g1

0x605e,	// (0x000959b1) grid_highlight_pane_cp017

0xb03e,	// (0x0009a991) list_imed_single_pane_ParamLimits

0xb03e,	// (0x0009a991) list_imed_single_pane

0x0b6d,	// (0x000904c0) list_highlight_pane_cp07

0xb052,	// (0x0009a9a5) list_imed_aspect_pane_comp1_t1

0xef97,	// (0x0009e8ea) bg_tb_trans_pane_cp05

0xb074,	// (0x0009a9c7) popup_imed_adjust2_window_g1

0xb09b,	// (0x0009a9ee) popup_imed_adjust2_window_t1

0xb0b3,	// (0x0009aa06) slider_imed_adjust_pane

0xb0c7,	// (0x0009aa1a) slider_imed_adjust_pane_g1

0xb0d7,	// (0x0009aa2a) slider_imed_adjust_pane_g2

0xb0e7,	// (0x0009aa3a) slider_imed_adjust_pane_g3

0xb0f8,	// (0x0009aa4b) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x0009f094) slider_imed_adjust_pane_g

0x6067,	// (0x000959ba) aid_size_cell_clipart2

0x6073,	// (0x000959c6) grid_imed_clipart_pane

0xb109,	// (0x0009aa5c) scroll_pane_cp031

0x607d,	// (0x000959d0) cell_imed_clipart_pane_ParamLimits

0x607d,	// (0x000959d0) cell_imed_clipart_pane

0x609a,	// (0x000959ed) cell_imed_clipart_pane_g1

0x0b6d,	// (0x000904c0) grid_highlight_pane_cp014

0x5cf5,	// (0x00095648) main_clock2_pane_g1_ParamLimits

0x5cf5,	// (0x00095648) main_clock2_pane_g1

0x5e27,	// (0x0009577a) aid_call2_pane_cp10

0x5e39,	// (0x0009578c) aid_call_pane_cp10

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g1

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g2

0x5e4b,	// (0x0009579e) popup_clock_analogue_window_cp10_g3

0x5e4b,	// (0x0009579e) popup_clock_analogue_window_cp10_g4

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x0009f082) popup_clock_analogue_window_cp10_g

0x5e61,	// (0x000957b4) popup_clock_analogue_window_cp10_t1

0x5ea0,	// (0x000957f3) clock_digital_number_pane_cp10_ParamLimits

0x5ea0,	// (0x000957f3) clock_digital_number_pane_cp10

0x5eba,	// (0x0009580d) clock_digital_number_pane_cp11_ParamLimits

0x5eba,	// (0x0009580d) clock_digital_number_pane_cp11

0x5ed4,	// (0x00095827) clock_digital_number_pane_cp12_ParamLimits

0x5ed4,	// (0x00095827) clock_digital_number_pane_cp12

0x5eee,	// (0x00095841) clock_digital_number_pane_cp13_ParamLimits

0x5eee,	// (0x00095841) clock_digital_number_pane_cp13

0x5f08,	// (0x0009585b) clock_digital_separator_pane_cp10_ParamLimits

0x5f08,	// (0x0009585b) clock_digital_separator_pane_cp10

0x5f22,	// (0x00095875) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f22,	// (0x00095875) popup_clock_digital_window_cp02_t1

0xa425,	// (0x00099d78) clock_digital_number_pane_cp10_g1

0xa425,	// (0x00099d78) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x0009f09d) clock_digital_number_pane_cp10_g

0xa425,	// (0x00099d78) clock_digital_separator_pane_cp10_g1

0xa425,	// (0x00099d78) clock_digital_separator_pane_g2_cp10

0xdb5c,	// (0x0009d4af) navi_pane_vded_g4

0xdb65,	// (0x0009d4b8) navi_pane_vded_g5

0xdb6e,	// (0x0009d4c1) navi_pane_vded_t1

0x0b6d,	// (0x000904c0) main_vded_pane

0x60a3,	// (0x000959f6) main_vded_pane_g1

0x60af,	// (0x00095a02) main_vded_pane_g2

0x60bb,	// (0x00095a0e) main_vded_pane_g3

0x0002,

0xf74f,	// (0x0009f0a2) main_vded_pane_g

0x60c7,	// (0x00095a1a) main_vded_pane_t1

0x60d5,	// (0x00095a28) main_vded_pane_t2

0x0001,

0xf756,	// (0x0009f0a9) main_vded_pane_t

0x60e3,	// (0x00095a36) vded_slider_pane

0x60ed,	// (0x00095a40) vded_video_pane

0xb111,	// (0x0009aa64) vded_video_pane_g1

0x60f9,	// (0x00095a4c) vded_video_pane_g2

0x4e98,	// (0x000947eb) vded_video_pane_g3

0x0002,

0xf75b,	// (0x0009f0ae) vded_video_pane_g

0xb11b,	// (0x0009aa6e) vded_slider_pane_g1

0x4adf,	// (0x00094432) vded_slider_pane_g2

0xb124,	// (0x0009aa77) vded_slider_pane_g3

0xb12d,	// (0x0009aa80) vded_slider_pane_g4

0xb136,	// (0x0009aa89) vded_slider_pane_g5

0x0004,

0xf762,	// (0x0009f0b5) vded_slider_pane_g

0x5960,	// (0x000952b3) mup3_rocker_pane_ParamLimits

0x5960,	// (0x000952b3) mup3_rocker_pane

0x6102,	// (0x00095a55) mup3_control_keys_pane_g1

0x610a,	// (0x00095a5d) mup3_control_keys_pane_g2

0x6112,	// (0x00095a65) mup3_control_keys_pane_g3

0x611a,	// (0x00095a6d) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x0009f0c0) mup3_control_keys_pane_g

0x0dd2,	// (0x00090725) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dd2,	// (0x00090725) popup_toolbar2_fixed_window_cp01

0x599e,	// (0x000952f1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x599e,	// (0x000952f1) popup_toolbar2_fixed_window_cp02

0xe31b,	// (0x0009dc6e) popup_call2_audio_second_window_t4_ParamLimits

0xe31b,	// (0x0009dc6e) popup_call2_audio_second_window_t4

0xe849,	// (0x0009e19c) popup_call2_audio_first_window_t6_ParamLimits

0xe849,	// (0x0009e19c) popup_call2_audio_first_window_t6

0xeadf,	// (0x0009e432) popup_call2_audio_out_window_t6_ParamLimits

0xeadf,	// (0x0009e432) popup_call2_audio_out_window_t6

0x0b6d,	// (0x000904c0) main_vitu_pane

0x612a,	// (0x00095a7d) aid_size_cell_itu_ParamLimits

0x612a,	// (0x00095a7d) aid_size_cell_itu

0x0df0,	// (0x00090743) bg_popup_window_pane_cp08_ParamLimits

0x0df0,	// (0x00090743) bg_popup_window_pane_cp08

0x6140,	// (0x00095a93) field_vitu_entry_pane_ParamLimits

0x6140,	// (0x00095a93) field_vitu_entry_pane

0x6157,	// (0x00095aaa) grid_vitu_function_pane_ParamLimits

0x6157,	// (0x00095aaa) grid_vitu_function_pane

0x6172,	// (0x00095ac5) grid_vitu_itu_pane_ParamLimits

0x6172,	// (0x00095ac5) grid_vitu_itu_pane

0x6190,	// (0x00095ae3) cell_vitu_itu_pane_ParamLimits

0x6190,	// (0x00095ae3) cell_vitu_itu_pane

0x61b6,	// (0x00095b09) cell_vitu_function_pane_ParamLimits

0x61b6,	// (0x00095b09) cell_vitu_function_pane

0x0df0,	// (0x00090743) bg_popup_sub_pane_cp08_ParamLimits

0x0df0,	// (0x00090743) bg_popup_sub_pane_cp08

0x61d1,	// (0x00095b24) field_vitu_entry_pane_t1_ParamLimits

0x61d1,	// (0x00095b24) field_vitu_entry_pane_t1

0xb157,	// (0x0009aaaa) field_vitu_entry_pane_t2_ParamLimits

0xb157,	// (0x0009aaaa) field_vitu_entry_pane_t2

0x0001,

0xf77b,	// (0x0009f0ce) field_vitu_entry_pane_t_ParamLimits

0xf77b,	// (0x0009f0ce) field_vitu_entry_pane_t

0xb174,	// (0x0009aac7) bg_button_pane_cp05_ParamLimits

0xb174,	// (0x0009aac7) bg_button_pane_cp05

0x61f1,	// (0x00095b44) cell_vitu_itu_pane_g1

0x6209,	// (0x00095b5c) cell_vitu_itu_pane_t1_ParamLimits

0x6209,	// (0x00095b5c) cell_vitu_itu_pane_t1

0x621b,	// (0x00095b6e) cell_vitu_itu_pane_t2_ParamLimits

0x621b,	// (0x00095b6e) cell_vitu_itu_pane_t2

0x0002,

0xf780,	// (0x0009f0d3) cell_vitu_itu_pane_t_ParamLimits

0xf780,	// (0x0009f0d3) cell_vitu_itu_pane_t

0xb182,	// (0x0009aad5) bg_button_pane_cp07

0x6250,	// (0x00095ba3) cell_vitu_function_pane_g1

0xa4b4,	// (0x00099e07) main_calc_pane_g1

0x0baf,	// (0x00090502) aid_visual_content_pane

0x0b6d,	// (0x000904c0) main_vradio_pane

0x6259,	// (0x00095bac) main_vradio_pane_g1_ParamLimits

0x6259,	// (0x00095bac) main_vradio_pane_g1

0xb18c,	// (0x0009aadf) main_vradio_pane_g2_ParamLimits

0xb18c,	// (0x0009aadf) main_vradio_pane_g2

0x0001,

0xf787,	// (0x0009f0da) main_vradio_pane_g_ParamLimits

0xf787,	// (0x0009f0da) main_vradio_pane_g

0x6270,	// (0x00095bc3) main_vradio_pane_t1_ParamLimits

0x6270,	// (0x00095bc3) main_vradio_pane_t1

0x6285,	// (0x00095bd8) main_vradio_pane_t2_ParamLimits

0x6285,	// (0x00095bd8) main_vradio_pane_t2

0xb199,	// (0x0009aaec) main_vradio_pane_t3_ParamLimits

0xb199,	// (0x0009aaec) main_vradio_pane_t3

0x0002,

0xf78c,	// (0x0009f0df) main_vradio_pane_t_ParamLimits

0xf78c,	// (0x0009f0df) main_vradio_pane_t

0x629a,	// (0x00095bed) vradio_rocker_control_pane_ParamLimits

0x629a,	// (0x00095bed) vradio_rocker_control_pane

0x62ac,	// (0x00095bff) vradio_station_info_pane_ParamLimits

0x62ac,	// (0x00095bff) vradio_station_info_pane

0xb1ad,	// (0x0009ab00) vradio_frequency_info_pane_ParamLimits

0xb1ad,	// (0x0009ab00) vradio_frequency_info_pane

0x4e98,	// (0x000947eb) vradio_station_info_pane_g1

0xb1bc,	// (0x0009ab0f) vradio_station_info_pane_t1_ParamLimits

0xb1bc,	// (0x0009ab0f) vradio_station_info_pane_t1

0xb1de,	// (0x0009ab31) vradio_station_info_pane_t2_ParamLimits

0xb1de,	// (0x0009ab31) vradio_station_info_pane_t2

0x0001,

0xf793,	// (0x0009f0e6) vradio_station_info_pane_t_ParamLimits

0xf793,	// (0x0009f0e6) vradio_station_info_pane_t

0xb1f0,	// (0x0009ab43) vradio_tuning_pane

0xb1f8,	// (0x0009ab4b) vradio_rocker_control_pane_g1

0xb200,	// (0x0009ab53) vradio_rocker_control_pane_g2

0xb208,	// (0x0009ab5b) vradio_rocker_control_pane_g3

0xb210,	// (0x0009ab63) vradio_rocker_control_pane_g4

0xb218,	// (0x0009ab6b) vradio_rocker_control_pane_g5

0x0004,

0xf798,	// (0x0009f0eb) vradio_rocker_control_pane_g

0x62bc,	// (0x00095c0f) vradio_frequency_info_pane_g1

0xb220,	// (0x0009ab73) vradio_frequency_info_pane_t1_ParamLimits

0xb220,	// (0x0009ab73) vradio_frequency_info_pane_t1

0x62c6,	// (0x00095c19) vradio_tuning_pane_g1

0x62d1,	// (0x00095c24) vradio_tuning_pane_t1

0x0c0c,	// (0x0009055f) area_side_right_pane_ParamLimits

0x0c0c,	// (0x0009055f) area_side_right_pane

0xef5e,	// (0x0009e8b1) status_small_pane_g1

0xef66,	// (0x0009e8b9) status_small_pane_g2

0xef6f,	// (0x0009e8c2) status_small_pane_g3

0xef78,	// (0x0009e8cb) status_small_pane_g4

0x0003,

0x0135,	// (0x0008fa88) status_small_pane_g

0xef81,	// (0x0009e8d4) status_small_pane_t1

0x0b6d,	// (0x000904c0) main_video3_pane

0xb234,	// (0x0009ab87) cams_zoom_vslider_pane

0xb23c,	// (0x0009ab8f) image3_wide_pane_ParamLimits

0xb23c,	// (0x0009ab8f) image3_wide_pane

0xb256,	// (0x0009aba9) image3_wide_small_pane

0xb262,	// (0x0009abb5) main_video3_pane_g1_ParamLimits

0xb262,	// (0x0009abb5) main_video3_pane_g1

0xb27e,	// (0x0009abd1) main_video3_pane_g2_ParamLimits

0xb27e,	// (0x0009abd1) main_video3_pane_g2

0x0001,

0xf7a3,	// (0x0009f0f6) main_video3_pane_g_ParamLimits

0xf7a3,	// (0x0009f0f6) main_video3_pane_g

0xb29a,	// (0x0009abed) main_video3_pane_t1_ParamLimits

0xb29a,	// (0x0009abed) main_video3_pane_t1

0xb2c5,	// (0x0009ac18) main_video3_pane_t2_ParamLimits

0xb2c5,	// (0x0009ac18) main_video3_pane_t2

0xb2f2,	// (0x0009ac45) main_video3_pane_t3_ParamLimits

0xb2f2,	// (0x0009ac45) main_video3_pane_t3

0x0002,

0xf7a8,	// (0x0009f0fb) main_video3_pane_t_ParamLimits

0xf7a8,	// (0x0009f0fb) main_video3_pane_t

0xb31f,	// (0x0009ac72) cams_zoom_vslider_pane_g1

0xb328,	// (0x0009ac7b) cams_zoom_vslider_pane_g2

0x0001,

0xf7af,	// (0x0009f102) cams_zoom_vslider_pane_g

0xb330,	// (0x0009ac83) small_slider_vertical_pane

0x4e98,	// (0x000947eb) small_slider_vertical_pane_g1

0x4e98,	// (0x000947eb) small_slider_vertical_pane_g2

0xb338,	// (0x0009ac8b) small_slider_vertical_pane_g3

0x0002,

0xf7b4,	// (0x0009f107) small_slider_vertical_pane_g

0x0b6d,	// (0x000904c0) main_hwr_training_pane

0xb341,	// (0x0009ac94) hwr_training_instruct_pane_ParamLimits

0xb341,	// (0x0009ac94) hwr_training_instruct_pane

0x62e0,	// (0x00095c33) hwr_training_navi_pane_ParamLimits

0x62e0,	// (0x00095c33) hwr_training_navi_pane

0x62ff,	// (0x00095c52) hwr_training_write_pane_ParamLimits

0x62ff,	// (0x00095c52) hwr_training_write_pane

0x0b6d,	// (0x000904c0) bg_frame_shadow_pane

0xb378,	// (0x0009accb) hwr_training_write_pane_g1

0xb380,	// (0x0009acd3) hwr_training_write_pane_g2

0xb388,	// (0x0009acdb) hwr_training_write_pane_g3

0xb390,	// (0x0009ace3) hwr_training_write_pane_g4

0xb398,	// (0x0009aceb) hwr_training_write_pane_g5

0xb3a0,	// (0x0009acf3) hwr_training_write_pane_g6

0xb3a8,	// (0x0009acfb) hwr_training_write_pane_g7

0x0006,

0xf7bb,	// (0x0009f10e) hwr_training_write_pane_g

0xb3b0,	// (0x0009ad03) hwr_training_navi_pane_g1_ParamLimits

0xb3b0,	// (0x0009ad03) hwr_training_navi_pane_g1

0xb3c2,	// (0x0009ad15) hwr_training_navi_pane_g2_ParamLimits

0xb3c2,	// (0x0009ad15) hwr_training_navi_pane_g2

0xb3d4,	// (0x0009ad27) hwr_training_navi_pane_g3_ParamLimits

0xb3d4,	// (0x0009ad27) hwr_training_navi_pane_g3

0xb3e4,	// (0x0009ad37) hwr_training_navi_pane_g4_ParamLimits

0xb3e4,	// (0x0009ad37) hwr_training_navi_pane_g4

0x0004,

0xf7ca,	// (0x0009f11d) hwr_training_navi_pane_g_ParamLimits

0xf7ca,	// (0x0009f11d) hwr_training_navi_pane_g

0xb3f1,	// (0x0009ad44) hwr_training_navi_pane_t1

0x6347,	// (0x00095c9a) list_single_hwr_training_instruct_pane_ParamLimits

0x6347,	// (0x00095c9a) list_single_hwr_training_instruct_pane

0xb3ff,	// (0x0009ad52) list_single_hwr_training_instruct_pane_t1

0x4dd8,	// (0x0009472b) bg_frame_shadow_pane_g1

0xb40e,	// (0x0009ad61) bg_frame_shadow_pane_g2

0xb416,	// (0x0009ad69) bg_frame_shadow_pane_g3

0xb41e,	// (0x0009ad71) bg_frame_shadow_pane_g4

0xb426,	// (0x0009ad79) bg_frame_shadow_pane_g5

0xb42e,	// (0x0009ad81) bg_frame_shadow_pane_g6

0xb436,	// (0x0009ad89) bg_frame_shadow_pane_g7

0xa61d,	// (0x00099f70) bg_frame_shadow_pane_g8

0x0007,

0xf7d5,	// (0x0009f128) bg_frame_shadow_pane_g

0x0b6d,	// (0x000904c0) main_video_tele_dialer_pane

0x6363,	// (0x00095cb6) aid_size_cell_video_keypad_ParamLimits

0x6363,	// (0x00095cb6) aid_size_cell_video_keypad

0x637d,	// (0x00095cd0) grid_video_dialer_keypad_pane_ParamLimits

0x637d,	// (0x00095cd0) grid_video_dialer_keypad_pane

0x63cb,	// (0x00095d1e) video_down_pane_cp_ParamLimits

0x63cb,	// (0x00095d1e) video_down_pane_cp

0x63ff,	// (0x00095d52) cell_video_dialer_keypad_pane_ParamLimits

0x63ff,	// (0x00095d52) cell_video_dialer_keypad_pane

0xb43e,	// (0x0009ad91) bg_button_pane_cp08_ParamLimits

0xb43e,	// (0x0009ad91) bg_button_pane_cp08

0x6425,	// (0x00095d78) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6425,	// (0x00095d78) cell_video_dialer_keypad_pane_g1

0x594a,	// (0x0009529d) mup3_rocker2_pane_ParamLimits

0x594a,	// (0x0009529d) mup3_rocker2_pane

0x4e98,	// (0x000947eb) mup3_rocker2_pane_g1

0x3e52,	// (0x000937a5) main_dialer2_pane

0x0b6d,	// (0x000904c0) main_mp4_pane

0xb452,	// (0x0009ada5) main_mp4_pane_g1_ParamLimits

0xb452,	// (0x0009ada5) main_mp4_pane_g1

0xb452,	// (0x0009ada5) main_mp4_pane_g2_ParamLimits

0xb452,	// (0x0009ada5) main_mp4_pane_g2

0x6460,	// (0x00095db3) main_mp4_pane_g3_ParamLimits

0x6460,	// (0x00095db3) main_mp4_pane_g3

0xb460,	// (0x0009adb3) main_mp4_pane_g4_ParamLimits

0xb460,	// (0x0009adb3) main_mp4_pane_g4

0xb47a,	// (0x0009adcd) main_mp4_pane_g5_ParamLimits

0xb47a,	// (0x0009adcd) main_mp4_pane_g5

0x0005,

0xf7f5,	// (0x0009f148) main_mp4_pane_g_ParamLimits

0xf7f5,	// (0x0009f148) main_mp4_pane_g

0xb4ae,	// (0x0009ae01) main_mp4_pane_t1_ParamLimits

0xb4ae,	// (0x0009ae01) main_mp4_pane_t1

0xb50a,	// (0x0009ae5d) main_mp4_pane_t2_ParamLimits

0xb50a,	// (0x0009ae5d) main_mp4_pane_t2

0xb55c,	// (0x0009aeaf) main_mp4_pane_t3_ParamLimits

0xb55c,	// (0x0009aeaf) main_mp4_pane_t3

0xb57c,	// (0x0009aecf) main_mp4_pane_t4_ParamLimits

0xb57c,	// (0x0009aecf) main_mp4_pane_t4

0x0003,

0xf802,	// (0x0009f155) main_mp4_pane_t_ParamLimits

0xf802,	// (0x0009f155) main_mp4_pane_t

0xb5bc,	// (0x0009af0f) mp4_progress_pane_ParamLimits

0xb5bc,	// (0x0009af0f) mp4_progress_pane

0xd8a6,	// (0x0009d1f9) mp4_rocker_pane_ParamLimits

0xd8a6,	// (0x0009d1f9) mp4_rocker_pane

0xb60e,	// (0x0009af61) mp4_progress_pane_t1

0xb627,	// (0x0009af7a) mp4_progress_pane_t2

0x0001,

0xf80b,	// (0x0009f15e) mp4_progress_pane_t

0xb640,	// (0x0009af93) mup_progress_pane_cp04

0xb64c,	// (0x0009af9f) mp4_rocker_pane_g1

0x64aa,	// (0x00095dfd) aid_cell_size_keypad2_ParamLimits

0x64aa,	// (0x00095dfd) aid_cell_size_keypad2

0x64c0,	// (0x00095e13) dialer2_ne_pane_ParamLimits

0x64c0,	// (0x00095e13) dialer2_ne_pane

0x64d8,	// (0x00095e2b) grid_dialer2_keypad_pane_ParamLimits

0x64d8,	// (0x00095e2b) grid_dialer2_keypad_pane

0x4ba1,	// (0x000944f4) bg_popup_call_pane_cp07_ParamLimits

0x4ba1,	// (0x000944f4) bg_popup_call_pane_cp07

0x64f4,	// (0x00095e47) dialer2_ne_pane_t1_ParamLimits

0x64f4,	// (0x00095e47) dialer2_ne_pane_t1

0x6534,	// (0x00095e87) cell_dialer2_keypad_pane_ParamLimits

0x6534,	// (0x00095e87) cell_dialer2_keypad_pane

0xb668,	// (0x0009afbb) bg_button_pane_pane_cp04_ParamLimits

0xb668,	// (0x0009afbb) bg_button_pane_pane_cp04

0x655a,	// (0x00095ead) cell_dialer2_keypad_pane_g1_ParamLimits

0x655a,	// (0x00095ead) cell_dialer2_keypad_pane_g1

0x1c12,	// (0x00091565) aid_placing_vt_set_content_ParamLimits

0x1c12,	// (0x00091565) aid_placing_vt_set_content

0x1c36,	// (0x00091589) aid_placing_vt_set_title_ParamLimits

0x1c36,	// (0x00091589) aid_placing_vt_set_title

0x0b6d,	// (0x000904c0) main_image3_pane

0x6620,	// (0x00095f73) area_side_right_pane_cp01_ParamLimits

0x6620,	// (0x00095f73) area_side_right_pane_cp01

0xb452,	// (0x0009ada5) main_image3_pane_g1_ParamLimits

0xb452,	// (0x0009ada5) main_image3_pane_g1

0x6639,	// (0x00095f8c) main_image3_pane_g2_ParamLimits

0x6639,	// (0x00095f8c) main_image3_pane_g2

0x6661,	// (0x00095fb4) main_image3_pane_g3_ParamLimits

0x6661,	// (0x00095fb4) main_image3_pane_g3

0x668b,	// (0x00095fde) main_image3_pane_g4_ParamLimits

0x668b,	// (0x00095fde) main_image3_pane_g4

0x0003,

0xf81a,	// (0x0009f16d) main_image3_pane_g_ParamLimits

0xf81a,	// (0x0009f16d) main_image3_pane_g

0x66b5,	// (0x00096008) main_image3_pane_t1_ParamLimits

0x66b5,	// (0x00096008) main_image3_pane_t1

0x670d,	// (0x00096060) main_image3_pane_t2_ParamLimits

0x670d,	// (0x00096060) main_image3_pane_t2

0x675f,	// (0x000960b2) main_image3_pane_t3_ParamLimits

0x675f,	// (0x000960b2) main_image3_pane_t3

0x0003,

0xf823,	// (0x0009f176) main_image3_pane_t_ParamLimits

0xf823,	// (0x0009f176) main_image3_pane_t

0x0df0,	// (0x00090743) grid_sctrl_middle_pane_cp01_ParamLimits

0x0df0,	// (0x00090743) grid_sctrl_middle_pane_cp01

0x67e7,	// (0x0009613a) cell_sctrl_middle_pane_cp01_ParamLimits

0x67e7,	// (0x0009613a) cell_sctrl_middle_pane_cp01

0x6804,	// (0x00096157) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6804,	// (0x00096157) cell_sctrl_middle_pane_cp01_g1

0x0b6d,	// (0x000904c0) main_call4_pane

0x6819,	// (0x0009616c) aid_size_button_call4_ParamLimits

0x6819,	// (0x0009616c) aid_size_button_call4

0x684c,	// (0x0009619f) call4_windows_pane_ParamLimits

0x684c,	// (0x0009619f) call4_windows_pane

0x686e,	// (0x000961c1) grid_call4_button_pane_ParamLimits

0x686e,	// (0x000961c1) grid_call4_button_pane

0xb674,	// (0x0009afc7) call4_windows_conf_pane

0xb68f,	// (0x0009afe2) popup_call4_audio_first_window_ParamLimits

0xb68f,	// (0x0009afe2) popup_call4_audio_first_window

0xb6dd,	// (0x0009b030) popup_call4_audio_second_window_ParamLimits

0xb6dd,	// (0x0009b030) popup_call4_audio_second_window

0xb6f3,	// (0x0009b046) popup_call4_audio_wait_window_ParamLimits

0xb6f3,	// (0x0009b046) popup_call4_audio_wait_window

0x6899,	// (0x000961ec) cell_call4_button_pane_ParamLimits

0x6899,	// (0x000961ec) cell_call4_button_pane

0x68c0,	// (0x00096213) bg_button_pane_cp09_ParamLimits

0x68c0,	// (0x00096213) bg_button_pane_cp09

0x68cc,	// (0x0009621f) cell_call4_button_pane_g1_ParamLimits

0x68cc,	// (0x0009621f) cell_call4_button_pane_g1

0x68f2,	// (0x00096245) cell_call4_button_pane_t1_ParamLimits

0x68f2,	// (0x00096245) cell_call4_button_pane_t1

0xb73b,	// (0x0009b08e) popup_call4_audio_conf_window_ParamLimits

0xb73b,	// (0x0009b08e) popup_call4_audio_conf_window

0x59b4,	// (0x00095307) mup3_progress_pane_t1_ParamLimits

0x59cb,	// (0x0009531e) mup3_progress_pane_t2_ParamLimits

0x59e2,	// (0x00095335) mup3_progress_pane_t3_ParamLimits

0xf6fc,	// (0x0009f04f) mup3_progress_pane_t_ParamLimits

0x59f9,	// (0x0009534c) mup_progress_pane_cp03_ParamLimits

0x6122,	// (0x00095a75) mup3_control_keys_pane_g4_copy1

0xb5ea,	// (0x0009af3d) mp4_rocker2_pane_ParamLimits

0xb5ea,	// (0x0009af3d) mp4_rocker2_pane

0xb755,	// (0x0009b0a8) mp4_rocker2_pane_g1

0xb75d,	// (0x0009b0b0) mp4_rocker2_pane_g2

0xd8fc,	// (0x0009d24f) mp4_rocker2_pane_g3

0xd904,	// (0x0009d257) mp4_rocker2_pane_g4

0xd90c,	// (0x0009d25f) mp4_rocker2_pane_g5

0x0004,

0xf82c,	// (0x0009f17f) mp4_rocker2_pane_g

0x0b6d,	// (0x000904c0) main_camera4_pane

0x0b6d,	// (0x000904c0) main_video4_pane

0x6399,	// (0x00095cec) main_video_tele_dialer_pane_t1_ParamLimits

0x6399,	// (0x00095cec) main_video_tele_dialer_pane_t1

0x63b2,	// (0x00095d05) main_video_tele_dialer_pane_t2_ParamLimits

0x63b2,	// (0x00095d05) main_video_tele_dialer_pane_t2

0x0001,

0xf7e6,	// (0x0009f139) main_video_tele_dialer_pane_t_ParamLimits

0xf7e6,	// (0x0009f139) main_video_tele_dialer_pane_t

0x6930,	// (0x00096283) cam4_autofocus_pane_ParamLimits

0x6930,	// (0x00096283) cam4_autofocus_pane

0x6946,	// (0x00096299) cam4_image_uncrop_pane_ParamLimits

0x6946,	// (0x00096299) cam4_image_uncrop_pane

0x695f,	// (0x000962b2) cam4_indicators_pane_ParamLimits

0x695f,	// (0x000962b2) cam4_indicators_pane

0x698e,	// (0x000962e1) main_camera4_pane_g1_ParamLimits

0x698e,	// (0x000962e1) main_camera4_pane_g1

0x699a,	// (0x000962ed) main_camera4_pane_g2_ParamLimits

0x699a,	// (0x000962ed) main_camera4_pane_g2

0x699a,	// (0x000962ed) main_camera4_pane_g3_ParamLimits

0x699a,	// (0x000962ed) main_camera4_pane_g3

0x69a6,	// (0x000962f9) main_camera4_pane_g4_ParamLimits

0x69a6,	// (0x000962f9) main_camera4_pane_g4

0x69b2,	// (0x00096305) main_camera4_pane_g5_ParamLimits

0x69b2,	// (0x00096305) main_camera4_pane_g5

0x0005,

0xf837,	// (0x0009f18a) main_camera4_pane_g_ParamLimits

0xf837,	// (0x0009f18a) main_camera4_pane_g

0x69cf,	// (0x00096322) main_camera4_pane_t1_ParamLimits

0x69cf,	// (0x00096322) main_camera4_pane_t1

0xd932,	// (0x0009d285) bg_tb_trans_pane_cp06

0xd948,	// (0x0009d29b) cam4_indicators_pane_g1

0xd955,	// (0x0009d2a8) cam4_indicators_pane_g2

0x0002,

0xf852,	// (0x0009f1a5) cam4_indicators_pane_g

0xd975,	// (0x0009d2c8) cam4_indicators_pane_t1

0x6a33,	// (0x00096386) main_video4_pane_g1_ParamLimits

0x6a33,	// (0x00096386) main_video4_pane_g1

0x6a45,	// (0x00096398) main_video4_pane_g2_ParamLimits

0x6a45,	// (0x00096398) main_video4_pane_g2

0x6a59,	// (0x000963ac) main_video4_pane_g3_ParamLimits

0x6a59,	// (0x000963ac) main_video4_pane_g3

0x6a69,	// (0x000963bc) main_video4_pane_g4_ParamLimits

0x6a69,	// (0x000963bc) main_video4_pane_g4

0x0004,

0xf859,	// (0x0009f1ac) main_video4_pane_g_ParamLimits

0xf859,	// (0x0009f1ac) main_video4_pane_g

0x6a89,	// (0x000963dc) vid4_indicators_pane_ParamLimits

0x6a89,	// (0x000963dc) vid4_indicators_pane

0x6ab9,	// (0x0009640c) video4_image_uncrop_cif_pane_ParamLimits

0x6ab9,	// (0x0009640c) video4_image_uncrop_cif_pane

0x6ad3,	// (0x00096426) video4_image_uncrop_nhd_pane_ParamLimits

0x6ad3,	// (0x00096426) video4_image_uncrop_nhd_pane

0x6946,	// (0x00096299) video4_image_uncrop_vga_pane_ParamLimits

0x6946,	// (0x00096299) video4_image_uncrop_vga_pane

0xd999,	// (0x0009d2ec) bg_tb_trans_pane_cp07

0x6ae9,	// (0x0009643c) vid4_indicators_pane_g1

0x6af6,	// (0x00096449) vid4_indicators_pane_g2

0x6b03,	// (0x00096456) vid4_indicators_pane_g3

0x0004,

0xf864,	// (0x0009f1b7) vid4_indicators_pane_g

0x6b28,	// (0x0009647b) vid4_indicators_pane_t1

0x6b3a,	// (0x0009648d) cam4_autofocus_pane_g1

0x6b42,	// (0x00096495) cam4_autofocus_pane_g2

0x6b4a,	// (0x0009649d) cam4_autofocus_pane_g3

0x0002,

0xf86f,	// (0x0009f1c2) cam4_autofocus_pane_g

0x6b52,	// (0x000964a5) cam4_autofocus_pane_g3_copy1

0x63e3,	// (0x00095d36) video_down_pane_cp_t1

0x63f1,	// (0x00095d44) video_down_pane_cp_t2

0x0001,

0xf7eb,	// (0x0009f13e) video_down_pane_cp_t

0x0df0,	// (0x00090743) popup_vitu2_window_ParamLimits

0x0df0,	// (0x00090743) popup_vitu2_window

0x6b5a,	// (0x000964ad) aid_size_cell2_itu2_ParamLimits

0x6b5a,	// (0x000964ad) aid_size_cell2_itu2

0x6b80,	// (0x000964d3) aid_size_cell_itu2_ParamLimits

0x6b80,	// (0x000964d3) aid_size_cell_itu2

0x6bde,	// (0x00096531) bg_popup_window_pane_cp09_ParamLimits

0x6bde,	// (0x00096531) bg_popup_window_pane_cp09

0x6bec,	// (0x0009653f) field_vitu2_entry_pane_ParamLimits

0x6bec,	// (0x0009653f) field_vitu2_entry_pane

0x6c14,	// (0x00096567) grid_vitu2_function_pane_ParamLimits

0x6c14,	// (0x00096567) grid_vitu2_function_pane

0x6c65,	// (0x000965b8) grid_vitu2_itu_pane_ParamLimits

0x6c65,	// (0x000965b8) grid_vitu2_itu_pane

0x6cf0,	// (0x00096643) cell_vitu2_itu_pane_ParamLimits

0x6cf0,	// (0x00096643) cell_vitu2_itu_pane

0x6d16,	// (0x00096669) cell_vitu2_function_pane_ParamLimits

0x6d16,	// (0x00096669) cell_vitu2_function_pane

0xb779,	// (0x0009b0cc) bg_popup_call_pane_cp08_ParamLimits

0xb779,	// (0x0009b0cc) bg_popup_call_pane_cp08

0xb792,	// (0x0009b0e5) field_vitu2_entry_pane_g1

0xb79e,	// (0x0009b0f1) field_vitu2_entry_pane_g2

0x0002,

0xf876,	// (0x0009f1c9) field_vitu2_entry_pane_g

0x6d5a,	// (0x000966ad) field_vitu2_entry_pane_t1_ParamLimits

0x6d5a,	// (0x000966ad) field_vitu2_entry_pane_t1

0xb7b8,	// (0x0009b10b) field_vitu2_entry_pane_t2_ParamLimits

0xb7b8,	// (0x0009b10b) field_vitu2_entry_pane_t2

0x0001,

0xf87d,	// (0x0009f1d0) field_vitu2_entry_pane_t_ParamLimits

0xf87d,	// (0x0009f1d0) field_vitu2_entry_pane_t

0x6d77,	// (0x000966ca) bg_button_pane_cp010_ParamLimits

0x6d77,	// (0x000966ca) bg_button_pane_cp010

0x6d85,	// (0x000966d8) cell_vitu2_itu_pane_g1

0x6da3,	// (0x000966f6) cell_vitu2_itu_pane_t1_ParamLimits

0x6da3,	// (0x000966f6) cell_vitu2_itu_pane_t1

0x0a79,	// (0x000903cc) cell_vitu2_itu_pane_t2_ParamLimits

0x0a79,	// (0x000903cc) cell_vitu2_itu_pane_t2

0x0002,

0xf887,	// (0x0009f1da) cell_vitu2_itu_pane_t_ParamLimits

0xf887,	// (0x0009f1da) cell_vitu2_itu_pane_t

0xd9b1,	// (0x0009d304) bg_button_pane_cp011

0x6e09,	// (0x0009675c) cell_vitu2_function_pane_g1

0x0b6d,	// (0x000904c0) main_myfav_hc_pane

0x67af,	// (0x00096102) popup_image3_note_pane_ParamLimits

0x67af,	// (0x00096102) popup_image3_note_pane

0x67cb,	// (0x0009611e) popup_image3_tool_bar_pane_ParamLimits

0x67cb,	// (0x0009611e) popup_image3_tool_bar_pane

0x0afd,	// (0x00090450) cell_vitu2_itu_pane_t3_ParamLimits

0x0afd,	// (0x00090450) cell_vitu2_itu_pane_t3

0x0b6d,	// (0x000904c0) bg_popup_trans_pane

0xb7dd,	// (0x0009b130) grid_image3_tool_bar_pane

0xb7e7,	// (0x0009b13a) bg_popup_trans_pane_g1

0xaa25,	// (0x0009a378) bg_popup_trans_pane_g2

0xb7ef,	// (0x0009b142) bg_popup_trans_pane_g3

0xb7f7,	// (0x0009b14a) bg_popup_trans_pane_g4

0xb7ff,	// (0x0009b152) bg_popup_trans_pane_g5

0xb807,	// (0x0009b15a) bg_popup_trans_pane_g6

0xb80f,	// (0x0009b162) bg_popup_trans_pane_g7

0xb817,	// (0x0009b16a) bg_popup_trans_pane_g8

0xaa05,	// (0x0009a358) bg_popup_trans_pane_g9

0x0008,

0xf88e,	// (0x0009f1e1) bg_popup_trans_pane_g

0xb81f,	// (0x0009b172) cell_image3_tool_bar_pane_ParamLimits

0xb81f,	// (0x0009b172) cell_image3_tool_bar_pane

0x4e98,	// (0x000947eb) cell_image3_tool_bar_pane_g1

0x0b6d,	// (0x000904c0) bg_popup_trans_pane_cp1

0xb835,	// (0x0009b188) popup_image3_note_pane_t1

0xb843,	// (0x0009b196) popup_image3_note_pane_t2

0xb851,	// (0x0009b1a4) popup_image3_note_pane_t3

0x0002,

0xf8a1,	// (0x0009f1f4) popup_image3_note_pane_t

0xb861,	// (0x0009b1b4) popup_image3_note_pane_t3_copy1

0x6e1d,	// (0x00096770) bg_myfav_hc_instruction_pane_ParamLimits

0x6e1d,	// (0x00096770) bg_myfav_hc_instruction_pane

0x6e35,	// (0x00096788) cell_myfav_contact_pane_ParamLimits

0x6e35,	// (0x00096788) cell_myfav_contact_pane

0x6e51,	// (0x000967a4) cell_myfav_contact_pane_cp1_ParamLimits

0x6e51,	// (0x000967a4) cell_myfav_contact_pane_cp1

0x6e69,	// (0x000967bc) cell_myfav_contact_pane_cp2_ParamLimits

0x6e69,	// (0x000967bc) cell_myfav_contact_pane_cp2

0x6e81,	// (0x000967d4) cell_myfav_contact_pane_cp3_ParamLimits

0x6e81,	// (0x000967d4) cell_myfav_contact_pane_cp3

0x6e98,	// (0x000967eb) cell_myfav_contact_pane_cp4_ParamLimits

0x6e98,	// (0x000967eb) cell_myfav_contact_pane_cp4

0x6eb0,	// (0x00096803) cell_myfav_contact_pane_cp5_ParamLimits

0x6eb0,	// (0x00096803) cell_myfav_contact_pane_cp5

0x6ec4,	// (0x00096817) cell_myfav_contact_pane_cp6_ParamLimits

0x6ec4,	// (0x00096817) cell_myfav_contact_pane_cp6

0x6eda,	// (0x0009682d) cell_myfav_contact_pane_cp7_ParamLimits

0x6eda,	// (0x0009682d) cell_myfav_contact_pane_cp7

0xb86f,	// (0x0009b1c2) listscroll_gen_pane_cp05

0x6ef2,	// (0x00096845) main_myfav_hc_pane_g1_ParamLimits

0x6ef2,	// (0x00096845) main_myfav_hc_pane_g1

0x6f0c,	// (0x0009685f) main_myfav_hc_pane_g2_ParamLimits

0x6f0c,	// (0x0009685f) main_myfav_hc_pane_g2

0x0002,

0xf8a8,	// (0x0009f1fb) main_myfav_hc_pane_g_ParamLimits

0xf8a8,	// (0x0009f1fb) main_myfav_hc_pane_g

0x6f40,	// (0x00096893) main_myfav_hc_pane_t1_ParamLimits

0x6f40,	// (0x00096893) main_myfav_hc_pane_t1

0xb878,	// (0x0009b1cb) main_myfav_hc_pane_t2_ParamLimits

0xb878,	// (0x0009b1cb) main_myfav_hc_pane_t2

0xb88a,	// (0x0009b1dd) main_myfav_hc_pane_t3_ParamLimits

0xb88a,	// (0x0009b1dd) main_myfav_hc_pane_t3

0x6f57,	// (0x000968aa) main_myfav_hc_pane_t4_ParamLimits

0x6f57,	// (0x000968aa) main_myfav_hc_pane_t4

0x0004,

0xf8af,	// (0x0009f202) main_myfav_hc_pane_t_ParamLimits

0xf8af,	// (0x0009f202) main_myfav_hc_pane_t

0x4e98,	// (0x000947eb) bg_myfav_hc_instruction_pane_g1

0xb89c,	// (0x0009b1ef) cell_myfav_contact_pane_g1_ParamLimits

0xb89c,	// (0x0009b1ef) cell_myfav_contact_pane_g1

0xb89c,	// (0x0009b1ef) cell_myfav_contact_pane_g2_ParamLimits

0xb89c,	// (0x0009b1ef) cell_myfav_contact_pane_g2

0xb8a8,	// (0x0009b1fb) cell_myfav_contact_pane_g3_ParamLimits

0xb8a8,	// (0x0009b1fb) cell_myfav_contact_pane_g3

0x555b,	// (0x00094eae) cell_myfav_contact_pane_g4_ParamLimits

0x555b,	// (0x00094eae) cell_myfav_contact_pane_g4

0xb8b5,	// (0x0009b208) cell_myfav_contact_pane_g5_ParamLimits

0xb8b5,	// (0x0009b208) cell_myfav_contact_pane_g5

0x0004,

0xf8ba,	// (0x0009f20d) cell_myfav_contact_pane_g_ParamLimits

0xf8ba,	// (0x0009f20d) cell_myfav_contact_pane_g

0x6f26,	// (0x00096879) main_myfav_hc_pane_g3_ParamLimits

0x6f26,	// (0x00096879) main_myfav_hc_pane_g3

0x0d28,	// (0x0009067b) popup_adpt_find_window

0x6f81,	// (0x000968d4) afind_page_pane_ParamLimits

0x6f81,	// (0x000968d4) afind_page_pane

0x6f96,	// (0x000968e9) aid_size_cell_afind_ParamLimits

0x6f96,	// (0x000968e9) aid_size_cell_afind

0x6fb4,	// (0x00096907) bg_popup_sub_pane_cp09_ParamLimits

0x6fb4,	// (0x00096907) bg_popup_sub_pane_cp09

0x6fc1,	// (0x00096914) find_pane_cp01_ParamLimits

0x6fc1,	// (0x00096914) find_pane_cp01

0xb8c1,	// (0x0009b214) grid_afind_control_pane_ParamLimits

0xb8c1,	// (0x0009b214) grid_afind_control_pane

0x6fce,	// (0x00096921) grid_afind_pane_ParamLimits

0x6fce,	// (0x00096921) grid_afind_pane

0x6ff0,	// (0x00096943) cell_afind_pane_ParamLimits

0x6ff0,	// (0x00096943) cell_afind_pane

0x4e98,	// (0x000947eb) afind_page_pane_g1

0x7057,	// (0x000969aa) afind_page_pane_g2

0x7060,	// (0x000969b3) afind_page_pane_g3

0x0002,

0xf8c5,	// (0x0009f218) afind_page_pane_g

0x7069,	// (0x000969bc) afind_page_pane_t1

0xb8d5,	// (0x0009b228) cell_afind_grid_control_pane_ParamLimits

0xb8d5,	// (0x0009b228) cell_afind_grid_control_pane

0xb668,	// (0x0009afbb) bg_button_pane_cp69_ParamLimits

0xb668,	// (0x0009afbb) bg_button_pane_cp69

0x7089,	// (0x000969dc) cell_afind_pane_g1_ParamLimits

0x7089,	// (0x000969dc) cell_afind_pane_g1

0x7096,	// (0x000969e9) cell_afind_pane_t1_ParamLimits

0x7096,	// (0x000969e9) cell_afind_pane_t1

0xa81c,	// (0x0009a16f) bg_button_pane_cp72

0xb8e4,	// (0x0009b237) cell_afind_grid_control_pane_g1

0x38f2,	// (0x00093245) aid_image_placing_area_ParamLimits

0x38f2,	// (0x00093245) aid_image_placing_area

0xb13f,	// (0x0009aa92) field_vitu_entry_pane_g1_ParamLimits

0xb13f,	// (0x0009aa92) field_vitu_entry_pane_g1

0xb14b,	// (0x0009aa9e) field_vitu_entry_pane_g2_ParamLimits

0xb14b,	// (0x0009aa9e) field_vitu_entry_pane_g2

0x0001,

0xf776,	// (0x0009f0c9) field_vitu_entry_pane_g_ParamLimits

0xf776,	// (0x0009f0c9) field_vitu_entry_pane_g

0x61f1,	// (0x00095b44) cell_vitu_itu_pane_g1_ParamLimits

0x6233,	// (0x00095b86) cell_vitu_itu_pane_t3_ParamLimits

0x6233,	// (0x00095b86) cell_vitu_itu_pane_t3

0xb60e,	// (0x0009af61) mp4_progress_pane_t1_ParamLimits

0xb627,	// (0x0009af7a) mp4_progress_pane_t2_ParamLimits

0xf80b,	// (0x0009f15e) mp4_progress_pane_t_ParamLimits

0xb640,	// (0x0009af93) mup_progress_pane_cp04_ParamLimits

0x6f6b,	// (0x000968be) main_myfav_hc_pane_t5_ParamLimits

0x6f6b,	// (0x000968be) main_myfav_hc_pane_t5

0x0bc3,	// (0x00090516) aid_zoom_text_primary

0x0d28,	// (0x0009067b) popup_adpt_find_window_ParamLimits

0x0df0,	// (0x00090743) main_cam_set_pane

0x6978,	// (0x000962cb) cam4_zoom_pane_ParamLimits

0x6978,	// (0x000962cb) cam4_zoom_pane

0x70a8,	// (0x000969fb) main_cam_set_pane_g1_ParamLimits

0x70a8,	// (0x000969fb) main_cam_set_pane_g1

0x70b6,	// (0x00096a09) main_cam_set_pane_g2_ParamLimits

0x70b6,	// (0x00096a09) main_cam_set_pane_g2

0x0001,

0xf8cc,	// (0x0009f21f) main_cam_set_pane_g_ParamLimits

0xf8cc,	// (0x0009f21f) main_cam_set_pane_g

0x70d9,	// (0x00096a2c) main_cam_set_pane_t1_ParamLimits

0x70d9,	// (0x00096a2c) main_cam_set_pane_t1

0x70f4,	// (0x00096a47) main_cset_listscroll_pane_ParamLimits

0x70f4,	// (0x00096a47) main_cset_listscroll_pane

0x7118,	// (0x00096a6b) main_cset_slider_pane_ParamLimits

0x7118,	// (0x00096a6b) main_cset_slider_pane

0xb8f5,	// (0x0009b248) main_cset_list_pane_ParamLimits

0xb8f5,	// (0x0009b248) main_cset_list_pane

0xb905,	// (0x0009b258) scroll_pane_cp028

0x7142,	// (0x00096a95) aid_area_touch_slider

0x715e,	// (0x00096ab1) cset_slider_pane

0x7188,	// (0x00096adb) main_cset_slider_pane_g1

0x719d,	// (0x00096af0) main_cset_slider_pane_g2

0x0011,

0xf8d1,	// (0x0009f224) main_cset_slider_pane_g

0xb93e,	// (0x0009b291) main_cset_slider_pane_t1

0x725f,	// (0x00096bb2) main_cset_slider_pane_t2

0x7279,	// (0x00096bcc) main_cset_slider_pane_t3

0x7293,	// (0x00096be6) main_cset_slider_pane_t4

0x72ad,	// (0x00096c00) main_cset_slider_pane_t5

0x72cb,	// (0x00096c1e) main_cset_slider_pane_t6

0x72e2,	// (0x00096c35) main_cset_slider_pane_t7

0x000e,

0xf8f6,	// (0x0009f249) main_cset_slider_pane_t

0x73ee,	// (0x00096d41) cset_list_set_pane_ParamLimits

0x73ee,	// (0x00096d41) cset_list_set_pane

0x7402,	// (0x00096d55) aid_position_infowindow_above

0x740a,	// (0x00096d5d) aid_position_infowindow_below

0xb9de,	// (0x0009b331) cset_list_set_pane_g1_ParamLimits

0xb9de,	// (0x0009b331) cset_list_set_pane_g1

0x7412,	// (0x00096d65) cset_list_set_pane_g3_ParamLimits

0x7412,	// (0x00096d65) cset_list_set_pane_g3

0x0001,

0xf915,	// (0x0009f268) cset_list_set_pane_g_ParamLimits

0xf915,	// (0x0009f268) cset_list_set_pane_g

0x7421,	// (0x00096d74) cset_list_set_pane_t1_ParamLimits

0x7421,	// (0x00096d74) cset_list_set_pane_t1

0x0df0,	// (0x00090743) list_highlight_pane_cp021_ParamLimits

0x0df0,	// (0x00090743) list_highlight_pane_cp021

0xdcc4,	// (0x0009d617) cset_slider_pane_g1

0xdcd6,	// (0x0009d629) cset_slider_pane_g2

0xdccd,	// (0x0009d620) cset_slider_pane_g3

0x0002,

0x04f7,	// (0x0008fe4a) cset_slider_pane_g

0xd9bf,	// (0x0009d312) aid_area_touch_cam4_zoom

0xd9c7,	// (0x0009d31a) cam4_zoom_cont_pane

0xd9cf,	// (0x0009d322) cam4_zoom_pane_g1

0xd9d7,	// (0x0009d32a) cam4_zoom_pane_g2

0x7436,	// (0x00096d89) cam4_zoom_pane_g3

0x0002,

0xf91a,	// (0x0009f26d) cam4_zoom_pane_g

0xd9df,	// (0x0009d332) cam4_zoom_cont_pane_g1

0xd9e8,	// (0x0009d33b) cam4_zoom_cont_pane_g2

0xd9f1,	// (0x0009d344) cam4_zoom_cont_pane_g3

0x0002,

0xf921,	// (0x0009f274) cam4_zoom_cont_pane_g

0x6837,	// (0x0009618a) call4_image_pane_ParamLimits

0x6837,	// (0x0009618a) call4_image_pane

0xb674,	// (0x0009afc7) call4_windows_conf_pane_ParamLimits

0xb6bb,	// (0x0009b00e) popup_call4_audio_in_window_ParamLimits

0xb6bb,	// (0x0009b00e) popup_call4_audio_in_window

0x0b6d,	// (0x000904c0) bg_popup_call2_act_pane_cp02

0xb733,	// (0x0009b086) call4_list_conf_pane

0x4e98,	// (0x000947eb) call4_image_pane_g1

0x4e98,	// (0x000947eb) call4_image_pane_g2

0x0001,

0xf63c,	// (0x0009ef8f) call4_image_pane_g

0xb9ea,	// (0x0009b33d) list_single_graphic_popup_conf4_pane_ParamLimits

0xb9ea,	// (0x0009b33d) list_single_graphic_popup_conf4_pane

0x0b6d,	// (0x000904c0) list_highlight_pane_cp022

0xb9ff,	// (0x0009b352) list_single_graphic_popup_conf4_pane_g1

0xd76a,	// (0x0009d0bd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf928,	// (0x0009f27b) list_single_graphic_popup_conf4_pane_g

0xba07,	// (0x0009b35a) list_single_graphic_popup_conf4_pane_t1

0x1d50,	// (0x000916a3) popup_vtel_slider_window_ParamLimits

0x1d50,	// (0x000916a3) popup_vtel_slider_window

0xb656,	// (0x0009afa9) dialer2_ne_pane_t2_ParamLimits

0xb656,	// (0x0009afa9) dialer2_ne_pane_t2

0x0001,

0xf810,	// (0x0009f163) dialer2_ne_pane_t_ParamLimits

0xf810,	// (0x0009f163) dialer2_ne_pane_t

0x4ba1,	// (0x000944f4) bg_popup_sub_pane_cp010_ParamLimits

0x4ba1,	// (0x000944f4) bg_popup_sub_pane_cp010

0x743e,	// (0x00096d91) popup_vtel_slider_window_g1_ParamLimits

0x743e,	// (0x00096d91) popup_vtel_slider_window_g1

0x7451,	// (0x00096da4) popup_vtel_slider_window_g2_ParamLimits

0x7451,	// (0x00096da4) popup_vtel_slider_window_g2

0x0003,

0xf92d,	// (0x0009f280) popup_vtel_slider_window_g_ParamLimits

0xf92d,	// (0x0009f280) popup_vtel_slider_window_g

0x74a7,	// (0x00096dfa) vtel_slider_pane_ParamLimits

0x74a7,	// (0x00096dfa) vtel_slider_pane

0x74c9,	// (0x00096e1c) vtel_slider_pane_g1_ParamLimits

0x74c9,	// (0x00096e1c) vtel_slider_pane_g1

0x74dd,	// (0x00096e30) vtel_slider_pane_g2_ParamLimits

0x74dd,	// (0x00096e30) vtel_slider_pane_g2

0x74f5,	// (0x00096e48) vtel_slider_pane_g3_ParamLimits

0x74f5,	// (0x00096e48) vtel_slider_pane_g3

0x74c9,	// (0x00096e1c) vtel_slider_pane_g4_ParamLimits

0x74c9,	// (0x00096e1c) vtel_slider_pane_g4

0x750b,	// (0x00096e5e) vtel_slider_pane_g5_ParamLimits

0x750b,	// (0x00096e5e) vtel_slider_pane_g5

0x0004,

0xf936,	// (0x0009f289) vtel_slider_pane_g_ParamLimits

0xf936,	// (0x0009f289) vtel_slider_pane_g

0x0b6d,	// (0x000904c0) main_gallery2_pane

0x6bac,	// (0x000964ff) aid_size_row_itut2_dropdow_list_ParamLimits

0x6bac,	// (0x000964ff) aid_size_row_itut2_dropdow_list

0x6c3c,	// (0x0009658f) grid_vitu2_function_top_pane_ParamLimits

0x6c3c,	// (0x0009658f) grid_vitu2_function_top_pane

0x6c9b,	// (0x000965ee) popup_vitu2_dropdown_list_window_ParamLimits

0x6c9b,	// (0x000965ee) popup_vitu2_dropdown_list_window

0x6cc4,	// (0x00096617) popup_vitu2_match_list_window

0x7521,	// (0x00096e74) cell_vitu2_function_top_pane_ParamLimits

0x7521,	// (0x00096e74) cell_vitu2_function_top_pane

0x7541,	// (0x00096e94) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7541,	// (0x00096e94) cell_vitu2_function_top_pane_cp01

0x755f,	// (0x00096eb2) cell_vitu2_function_top_wide_pane_ParamLimits

0x755f,	// (0x00096eb2) cell_vitu2_function_top_wide_pane

0xd9b1,	// (0x0009d304) bg_button_pane_cp012

0x757d,	// (0x00096ed0) cell_vitu2_function_top_pane_g1

0xd9fa,	// (0x0009d34d) bg_button_pane_cp013_ParamLimits

0xd9fa,	// (0x0009d34d) bg_button_pane_cp013

0x7591,	// (0x00096ee4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7591,	// (0x00096ee4) cell_vitu2_function_top_wide_pane_g1

0xd9b1,	// (0x0009d304) bg_popup_sub_pane_cp20

0x75a9,	// (0x00096efc) list_vitu2_match_list_pane

0xb7e7,	// (0x0009b13a) bg_popup_sub_pane_cp20_g1

0xb7ef,	// (0x0009b142) bg_popup_sub_pane_cp20_g2

0xaa25,	// (0x0009a378) bg_popup_sub_pane_cp20_g3

0xb7f7,	// (0x0009b14a) bg_popup_sub_pane_cp20_g4

0xaa05,	// (0x0009a358) bg_popup_sub_pane_cp20_g5

0xba2b,	// (0x0009b37e) bg_popup_sub_pane_cp20_g6

0xb807,	// (0x0009b15a) bg_popup_sub_pane_cp20_g7

0xb80f,	// (0x0009b162) bg_popup_sub_pane_cp20_g8

0xb817,	// (0x0009b16a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf941,	// (0x0009f294) bg_popup_sub_pane_cp20_g

0xda16,	// (0x0009d369) list_vitu2_match_list_item_pane_ParamLimits

0xda16,	// (0x0009d369) list_vitu2_match_list_item_pane

0xda28,	// (0x0009d37b) list_vitu2_match_list_item_pane_t1

0xa500,	// (0x00099e53) bg_popup_sub_pane_cp21

0xda36,	// (0x0009d389) grid_vitu2_dropdown_list_pane

0x75f9,	// (0x00096f4c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75f9,	// (0x00096f4c) cell_vitu2_dropdown_list_char_pane

0x761c,	// (0x00096f6f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x761c,	// (0x00096f6f) cell_vitu2_dropdown_list_ctrl_pane

0xba4b,	// (0x0009b39e) cell_vitu2_dropdown_list_char_pane_g1

0xba54,	// (0x0009b3a7) cell_vitu2_dropdown_list_char_pane_g2

0xba5d,	// (0x0009b3b0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95e,	// (0x0009f2b1) cell_vitu2_dropdown_list_char_pane_g

0x764a,	// (0x00096f9d) cell_vitu2_dropdown_list_char_pane_t1

0x7658,	// (0x00096fab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7658,	// (0x00096fab) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7668,	// (0x00096fbb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7668,	// (0x00096fbb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7679,	// (0x00096fcc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7679,	// (0x00096fcc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7689,	// (0x00096fdc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7689,	// (0x00096fdc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd932,	// (0x0009d285) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd932,	// (0x0009d285) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf965,	// (0x0009f2b8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf965,	// (0x0009f2b8) cell_vitu2_dropdown_list_ctrl_pane_g

0x76a5,	// (0x00096ff8) aid_size_cell_gallery2_ParamLimits

0x76a5,	// (0x00096ff8) aid_size_cell_gallery2

0x76bb,	// (0x0009700e) grid_gallery2_pane_ParamLimits

0x76bb,	// (0x0009700e) grid_gallery2_pane

0x76cf,	// (0x00097022) scroll_pane_cp029_ParamLimits

0x76cf,	// (0x00097022) scroll_pane_cp029

0x76db,	// (0x0009702e) cell_gallery2_pane_ParamLimits

0x76db,	// (0x0009702e) cell_gallery2_pane

0xba66,	// (0x0009b3b9) cell_gallery2_pane_g2

0x7715,	// (0x00097068) cell_gallery2_pane_g3

0xba70,	// (0x0009b3c3) cell_gallery2_pane_g4

0xba78,	// (0x0009b3cb) cell_gallery2_pane_g5

0xdb8c,	// (0x0009d4df) grid_highlight_pane_cp10

0x6cc4,	// (0x00096617) popup_vitu2_match_list_window_ParamLimits

0x6cdb,	// (0x0009662e) popup_vitu2_query_window_ParamLimits

0x6cdb,	// (0x0009662e) popup_vitu2_query_window

0xa500,	// (0x00099e53) bg_vitu2_candi_button_pane

0xba4b,	// (0x0009b39e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xba54,	// (0x0009b3a7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xba5d,	// (0x0009b3b0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x771d,	// (0x00097070) bg_button_pane_cp015

0x7731,	// (0x00097084) bg_button_pane_cp016

0x7744,	// (0x00097097) bg_button_pane_cp017

0xef97,	// (0x0009e8ea) bg_popup_sub_pane_cp22

0xba80,	// (0x0009b3d3) popup_vitu2_query_window_g1

0x7789,	// (0x000970dc) popup_vitu2_query_window_g2

0x0002,

0xf970,	// (0x0009f2c3) popup_vitu2_query_window_g

0x77a8,	// (0x000970fb) popup_vitu2_query_window_t1_ParamLimits

0x77a8,	// (0x000970fb) popup_vitu2_query_window_t1

0x77dd,	// (0x00097130) popup_vitu2_query_window_t2_ParamLimits

0x77dd,	// (0x00097130) popup_vitu2_query_window_t2

0x77ef,	// (0x00097142) popup_vitu2_query_window_t3_ParamLimits

0x77ef,	// (0x00097142) popup_vitu2_query_window_t3

0x7817,	// (0x0009716a) popup_vitu2_query_window_t4_ParamLimits

0x7817,	// (0x0009716a) popup_vitu2_query_window_t4

0x7838,	// (0x0009718b) popup_vitu2_query_window_t5_ParamLimits

0x7838,	// (0x0009718b) popup_vitu2_query_window_t5

0x0006,

0xf977,	// (0x0009f2ca) popup_vitu2_query_window_t_ParamLimits

0xf977,	// (0x0009f2ca) popup_vitu2_query_window_t

0xb8ed,	// (0x0009b240) main_cset_text_pane

0x7142,	// (0x00096a95) aid_area_touch_slider_ParamLimits

0x715e,	// (0x00096ab1) cset_slider_pane_ParamLimits

0x7188,	// (0x00096adb) main_cset_slider_pane_g1_ParamLimits

0x719d,	// (0x00096af0) main_cset_slider_pane_g2_ParamLimits

0xb90e,	// (0x0009b261) main_cset_slider_pane_g3_ParamLimits

0xb90e,	// (0x0009b261) main_cset_slider_pane_g3

0x71b2,	// (0x00096b05) main_cset_slider_pane_g4_ParamLimits

0x71b2,	// (0x00096b05) main_cset_slider_pane_g4

0x71c1,	// (0x00096b14) main_cset_slider_pane_g5_ParamLimits

0x71c1,	// (0x00096b14) main_cset_slider_pane_g5

0x71cf,	// (0x00096b22) main_cset_slider_pane_g6_ParamLimits

0x71cf,	// (0x00096b22) main_cset_slider_pane_g6

0xf8d1,	// (0x0009f224) main_cset_slider_pane_g_ParamLimits

0xb93e,	// (0x0009b291) main_cset_slider_pane_t1_ParamLimits

0x725f,	// (0x00096bb2) main_cset_slider_pane_t2_ParamLimits

0x7279,	// (0x00096bcc) main_cset_slider_pane_t3_ParamLimits

0x7293,	// (0x00096be6) main_cset_slider_pane_t4_ParamLimits

0x72ad,	// (0x00096c00) main_cset_slider_pane_t5_ParamLimits

0x72cb,	// (0x00096c1e) main_cset_slider_pane_t6_ParamLimits

0x72e2,	// (0x00096c35) main_cset_slider_pane_t7_ParamLimits

0x7310,	// (0x00096c63) main_cset_slider_pane_t8_ParamLimits

0x7310,	// (0x00096c63) main_cset_slider_pane_t8

0x7338,	// (0x00096c8b) main_cset_slider_pane_t9_ParamLimits

0x7338,	// (0x00096c8b) main_cset_slider_pane_t9

0x7360,	// (0x00096cb3) main_cset_slider_pane_t10_ParamLimits

0x7360,	// (0x00096cb3) main_cset_slider_pane_t10

0x7388,	// (0x00096cdb) main_cset_slider_pane_t11_ParamLimits

0x7388,	// (0x00096cdb) main_cset_slider_pane_t11

0x73b2,	// (0x00096d05) main_cset_slider_pane_t12_ParamLimits

0x73b2,	// (0x00096d05) main_cset_slider_pane_t12

0x73cf,	// (0x00096d22) main_cset_slider_pane_t13_ParamLimits

0x73cf,	// (0x00096d22) main_cset_slider_pane_t13

0xf8f6,	// (0x0009f249) main_cset_slider_pane_t_ParamLimits

0x0b6d,	// (0x000904c0) bg_popup_sub_pane_cp011

0xba8c,	// (0x0009b3df) main_cset_text_pane_g1

0xba94,	// (0x0009b3e7) main_cset_text_pane_t1

0xbaa2,	// (0x0009b3f5) main_cset_text_pane_t2

0xbab0,	// (0x0009b403) main_cset_text_pane_t3

0xbabe,	// (0x0009b411) main_cset_text_pane_t4

0xbacc,	// (0x0009b41f) main_cset_text_pane_t5

0xbada,	// (0x0009b42d) main_cset_text_pane_t6

0xbae8,	// (0x0009b43b) main_cset_text_pane_t7

0x0006,

0xf986,	// (0x0009f2d9) main_cset_text_pane_t

0x0b6d,	// (0x000904c0) main_cam4_burst_pane

0x0b6d,	// (0x000904c0) main_cam5_pane

0x7077,	// (0x000969ca) bg_button_pane_cp019

0x7080,	// (0x000969d3) bg_button_pane_cp020

0xb91a,	// (0x0009b26d) main_cset_slider_pane_g7_ParamLimits

0xb91a,	// (0x0009b26d) main_cset_slider_pane_g7

0xb926,	// (0x0009b279) main_cset_slider_pane_g8_ParamLimits

0xb926,	// (0x0009b279) main_cset_slider_pane_g8

0x71e3,	// (0x00096b36) main_cset_slider_pane_g9_ParamLimits

0x71e3,	// (0x00096b36) main_cset_slider_pane_g9

0x71ef,	// (0x00096b42) main_cset_slider_pane_g10_ParamLimits

0x71ef,	// (0x00096b42) main_cset_slider_pane_g10

0x71fb,	// (0x00096b4e) main_cset_slider_pane_g11_ParamLimits

0x71fb,	// (0x00096b4e) main_cset_slider_pane_g11

0x7207,	// (0x00096b5a) main_cset_slider_pane_g12_ParamLimits

0x7207,	// (0x00096b5a) main_cset_slider_pane_g12

0x7213,	// (0x00096b66) main_cset_slider_pane_g13_ParamLimits

0x7213,	// (0x00096b66) main_cset_slider_pane_g13

0x721f,	// (0x00096b72) main_cset_slider_pane_g14_ParamLimits

0x721f,	// (0x00096b72) main_cset_slider_pane_g14

0x722b,	// (0x00096b7e) main_cset_slider_pane_g15_ParamLimits

0x722b,	// (0x00096b7e) main_cset_slider_pane_g15

0xb96c,	// (0x0009b2bf) main_cset_slider_pane_t14_ParamLimits

0xb96c,	// (0x0009b2bf) main_cset_slider_pane_t14

0xb9a5,	// (0x0009b2f8) main_cset_slider_pane_t15_ParamLimits

0xb9a5,	// (0x0009b2f8) main_cset_slider_pane_t15

0x78af,	// (0x00097202) aid_cam4_burst_size_cell_ParamLimits

0x78af,	// (0x00097202) aid_cam4_burst_size_cell

0x78cf,	// (0x00097222) grid_cam4_burst_pane_ParamLimits

0x78cf,	// (0x00097222) grid_cam4_burst_pane

0x7909,	// (0x0009725c) linegrid_cam4_burst_pane_ParamLimits

0x7909,	// (0x0009725c) linegrid_cam4_burst_pane

0xbaf6,	// (0x0009b449) scroll_pane_cp30_ParamLimits

0xbaf6,	// (0x0009b449) scroll_pane_cp30

0x792d,	// (0x00097280) cell_cam4_burst_pane_ParamLimits

0x792d,	// (0x00097280) cell_cam4_burst_pane

0xbb02,	// (0x0009b455) linegrid_cam4_burst_pane_g1_ParamLimits

0xbb02,	// (0x0009b455) linegrid_cam4_burst_pane_g1

0x7982,	// (0x000972d5) linegrid_cam4_burst_pane_g2_ParamLimits

0x7982,	// (0x000972d5) linegrid_cam4_burst_pane_g2

0xbb0f,	// (0x0009b462) linegrid_cam4_burst_pane_g3_ParamLimits

0xbb0f,	// (0x0009b462) linegrid_cam4_burst_pane_g3

0x0002,

0xf995,	// (0x0009f2e8) linegrid_cam4_burst_pane_g_ParamLimits

0xf995,	// (0x0009f2e8) linegrid_cam4_burst_pane_g

0x7993,	// (0x000972e6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7993,	// (0x000972e6) linegrid_cam4_burst_pane_g3_copy1

0xbb1c,	// (0x0009b46f) linegrid_cam4_burst_pane_g4_ParamLimits

0xbb1c,	// (0x0009b46f) linegrid_cam4_burst_pane_g4

0x79b1,	// (0x00097304) linegrid_cam4_burst_pane_g5_ParamLimits

0x79b1,	// (0x00097304) linegrid_cam4_burst_pane_g5

0x79c2,	// (0x00097315) linegrid_cam4_burst_pane_g6_ParamLimits

0x79c2,	// (0x00097315) linegrid_cam4_burst_pane_g6

0xbb29,	// (0x0009b47c) linegrid_cam4_burst_pane_g7_ParamLimits

0xbb29,	// (0x0009b47c) linegrid_cam4_burst_pane_g7

0x79d9,	// (0x0009732c) cell_cam4_burst_pane_g1

0xbb42,	// (0x0009b495) main_cam5_pane_t1_ParamLimits

0xbb42,	// (0x0009b495) main_cam5_pane_t1

0xbb54,	// (0x0009b4a7) main_cam5_pane_t2_ParamLimits

0xbb54,	// (0x0009b4a7) main_cam5_pane_t2

0xbb66,	// (0x0009b4b9) main_cam5_pane_t3_ParamLimits

0xbb66,	// (0x0009b4b9) main_cam5_pane_t3

0xbb78,	// (0x0009b4cb) main_cam5_pane_t4_ParamLimits

0xbb78,	// (0x0009b4cb) main_cam5_pane_t4

0xbb90,	// (0x0009b4e3) main_cam5_pane_t5_ParamLimits

0xbb90,	// (0x0009b4e3) main_cam5_pane_t5

0xbba4,	// (0x0009b4f7) main_cam5_pane_t6_ParamLimits

0xbba4,	// (0x0009b4f7) main_cam5_pane_t6

0xbbb8,	// (0x0009b50b) main_cam5_pane_t7_ParamLimits

0xbbb8,	// (0x0009b50b) main_cam5_pane_t7

0xbbca,	// (0x0009b51d) main_cam5_pane_t8_ParamLimits

0xbbca,	// (0x0009b51d) main_cam5_pane_t8

0xbbe8,	// (0x0009b53b) main_cam5_pane_t9_ParamLimits

0xbbe8,	// (0x0009b53b) main_cam5_pane_t9

0xbbfa,	// (0x0009b54d) main_cam5_pane_t10_ParamLimits

0xbbfa,	// (0x0009b54d) main_cam5_pane_t10

0xbc0c,	// (0x0009b55f) main_cam5_pane_t11_ParamLimits

0xbc0c,	// (0x0009b55f) main_cam5_pane_t11

0xbc20,	// (0x0009b573) main_cam5_pane_t12_ParamLimits

0xbc20,	// (0x0009b573) main_cam5_pane_t12

0xbc37,	// (0x0009b58a) main_cam5_pane_t13_ParamLimits

0xbc37,	// (0x0009b58a) main_cam5_pane_t13

0x000c,

0xf9a1,	// (0x0009f2f4) main_cam5_pane_t_ParamLimits

0xf9a1,	// (0x0009f2f4) main_cam5_pane_t

0x0db6,	// (0x00090709) popup_scut_keymap_window_ParamLimits

0x0db6,	// (0x00090709) popup_scut_keymap_window

0x79ec,	// (0x0009733f) aid_size_cell_brow_shortcut

0xdb8c,	// (0x0009d4df) bg_popup_window_pane_cp010

0x79f8,	// (0x0009734b) grid_scut_pane

0x7a04,	// (0x00097357) cell_scut_pane_ParamLimits

0x7a04,	// (0x00097357) cell_scut_pane

0x7a1d,	// (0x00097370) cell_scut_pane_g1

0xbc5a,	// (0x0009b5ad) cell_scut_pane_t1

0xbc69,	// (0x0009b5bc) cell_scut_pane_t2

0x7a26,	// (0x00097379) cell_scut_pane_t3

0x0002,

0xf9bc,	// (0x0009f30f) cell_scut_pane_t

0x5569,	// (0x00094ebc) main_mup3_pane_g8_ParamLimits

0x5569,	// (0x00094ebc) main_mup3_pane_g8

0x6bc6,	// (0x00096519) area_vitu2_query_pane_ParamLimits

0x6bc6,	// (0x00096519) area_vitu2_query_pane

0x7757,	// (0x000970aa) input_focus_pane_cp08

0xbc78,	// (0x0009b5cb) area_vitu2_query_pane_g1

0x7a34,	// (0x00097387) area_vitu2_query_pane_g2

0x0001,

0xf9c3,	// (0x0009f316) area_vitu2_query_pane_g

0x7a47,	// (0x0009739a) area_vitu2_query_pane_t1_ParamLimits

0x7a47,	// (0x0009739a) area_vitu2_query_pane_t1

0x7a5b,	// (0x000973ae) area_vitu2_query_pane_t2_ParamLimits

0x7a5b,	// (0x000973ae) area_vitu2_query_pane_t2

0x7a6f,	// (0x000973c2) area_vitu2_query_pane_t3_ParamLimits

0x7a6f,	// (0x000973c2) area_vitu2_query_pane_t3

0xbc84,	// (0x0009b5d7) area_vitu2_query_pane_t4_ParamLimits

0xbc84,	// (0x0009b5d7) area_vitu2_query_pane_t4

0xbcac,	// (0x0009b5ff) area_vitu2_query_pane_t5_ParamLimits

0xbcac,	// (0x0009b5ff) area_vitu2_query_pane_t5

0xbcd4,	// (0x0009b627) area_vitu2_query_pane_t6_ParamLimits

0xbcd4,	// (0x0009b627) area_vitu2_query_pane_t6

0x0006,

0xf9c8,	// (0x0009f31b) area_vitu2_query_pane_t_ParamLimits

0xf9c8,	// (0x0009f31b) area_vitu2_query_pane_t

0x7a97,	// (0x000973ea) bg_button_pane_cp018

0x7aa5,	// (0x000973f8) bg_button_pane_cp021

0x7ab1,	// (0x00097404) bg_button_pane_cp022

0x7ac2,	// (0x00097415) input_focus_pane_cp09

0x2e12,	// (0x00092765) aid_size_touch_mv_arrow_left

0x2e3b,	// (0x0009278e) aid_size_touch_mv_arrow_right

0x7243,	// (0x00096b96) main_cset_slider_pane_g16_ParamLimits

0x7243,	// (0x00096b96) main_cset_slider_pane_g16

0x7251,	// (0x00096ba4) main_cset_slider_pane_g17_ParamLimits

0x7251,	// (0x00096ba4) main_cset_slider_pane_g17

0x79d9,	// (0x0009732c) cell_cam4_burst_pane_g1_ParamLimits

0x0b6d,	// (0x000904c0) compa_mode_pane

0x7461,	// (0x00096db4) popup_vtel_slider_window_g3_ParamLimits

0x7461,	// (0x00096db4) popup_vtel_slider_window_g3

0x7478,	// (0x00096dcb) popup_vtel_slider_window_g4_ParamLimits

0x7478,	// (0x00096dcb) popup_vtel_slider_window_g4

0x748f,	// (0x00096de2) popup_vtel_slider_window_t1_ParamLimits

0x748f,	// (0x00096de2) popup_vtel_slider_window_t1

0x0b6d,	// (0x000904c0) main_cl_pane

0xefc3,	// (0x0009e916) popup_imed_adjust2_window_ParamLimits

0xef97,	// (0x0009e8ea) bg_tb_trans_pane_cp05_ParamLimits

0xb074,	// (0x0009a9c7) popup_imed_adjust2_window_g1_ParamLimits

0xb083,	// (0x0009a9d6) popup_imed_adjust2_window_g2_ParamLimits

0xb083,	// (0x0009a9d6) popup_imed_adjust2_window_g2

0xb08f,	// (0x0009a9e2) popup_imed_adjust2_window_g3_ParamLimits

0xb08f,	// (0x0009a9e2) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x0009f08d) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x0009f08d) popup_imed_adjust2_window_g

0xb09b,	// (0x0009a9ee) popup_imed_adjust2_window_t1_ParamLimits

0xb0b3,	// (0x0009aa06) slider_imed_adjust_pane_ParamLimits

0xb0c7,	// (0x0009aa1a) slider_imed_adjust_pane_g1_ParamLimits

0xb0d7,	// (0x0009aa2a) slider_imed_adjust_pane_g2_ParamLimits

0xb0e7,	// (0x0009aa3a) slider_imed_adjust_pane_g3_ParamLimits

0xb0f8,	// (0x0009aa4b) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x0009f094) slider_imed_adjust_pane_g_ParamLimits

0x6918,	// (0x0009626b) aid_touch_area_cam4_ParamLimits

0x6918,	// (0x0009626b) aid_touch_area_cam4

0xd914,	// (0x0009d267) battery_pane_cp01

0x69c3,	// (0x00096316) main_camera4_pane_g6_ParamLimits

0x69c3,	// (0x00096316) main_camera4_pane_g6

0x69e6,	// (0x00096339) main_camera4_pane_t2_ParamLimits

0x69e6,	// (0x00096339) main_camera4_pane_t2

0x0001,

0xf844,	// (0x0009f197) main_camera4_pane_t_ParamLimits

0xf844,	// (0x0009f197) main_camera4_pane_t

0x6a1b,	// (0x0009636e) aid_touch_area_vid4_ParamLimits

0x6a1b,	// (0x0009636e) aid_touch_area_vid4

0x6a79,	// (0x000963cc) main_video4_pane_g5_ParamLimits

0x6a79,	// (0x000963cc) main_video4_pane_g5

0x6aa0,	// (0x000963f3) vid4_progress_pane_ParamLimits

0x6aa0,	// (0x000963f3) vid4_progress_pane

0xb932,	// (0x0009b285) main_cset_slider_pane_g18_ParamLimits

0xb932,	// (0x0009b285) main_cset_slider_pane_g18

0xbb36,	// (0x0009b489) cell_cam4_burst_pane_g2_ParamLimits

0xbb36,	// (0x0009b489) cell_cam4_burst_pane_g2

0x0001,

0xf99c,	// (0x0009f2ef) cell_cam4_burst_pane_g_ParamLimits

0xf99c,	// (0x0009f2ef) cell_cam4_burst_pane_g

0xa524,	// (0x00099e77) bg_cl_pane_ParamLimits

0xa524,	// (0x00099e77) bg_cl_pane

0x7ad3,	// (0x00097426) cl_header_pane_ParamLimits

0x7ad3,	// (0x00097426) cl_header_pane

0x7ae7,	// (0x0009743a) cl_listscroll_pane_ParamLimits

0x7ae7,	// (0x0009743a) cl_listscroll_pane

0xbd20,	// (0x0009b673) bg_cl_pane_g1

0xbd28,	// (0x0009b67b) bg_cl_pane_g2

0xbd30,	// (0x0009b683) bg_cl_pane_g3

0xbd38,	// (0x0009b68b) bg_cl_pane_g4

0xbd40,	// (0x0009b693) bg_cl_pane_g5

0xbd48,	// (0x0009b69b) bg_cl_pane_g6

0xbd50,	// (0x0009b6a3) bg_cl_pane_g7

0xbd58,	// (0x0009b6ab) bg_cl_pane_g8

0xbd60,	// (0x0009b6b3) bg_cl_pane_g9

0x0008,

0xf9d7,	// (0x0009f32a) bg_cl_pane_g

0x7af7,	// (0x0009744a) aid_height_cl_leading_ParamLimits

0x7af7,	// (0x0009744a) aid_height_cl_leading

0x7b03,	// (0x00097456) aid_height_cl_text_ParamLimits

0x7b03,	// (0x00097456) aid_height_cl_text

0x0df0,	// (0x00090743) bg_cl_header_pane_ParamLimits

0x0df0,	// (0x00090743) bg_cl_header_pane

0x7b22,	// (0x00097475) cl_header_pane_g1_ParamLimits

0x7b22,	// (0x00097475) cl_header_pane_g1

0x7b38,	// (0x0009748b) cl_header_pane_t1_ParamLimits

0x7b38,	// (0x0009748b) cl_header_pane_t1

0xbd68,	// (0x0009b6bb) cl_list_pane

0xb905,	// (0x0009b258) hc_scroll_pane_cp01

0xaa05,	// (0x0009a358) bg_cl_header_pane_g1

0xb7e7,	// (0x0009b13a) bg_cl_header_pane_g2

0xaa25,	// (0x0009a378) bg_cl_header_pane_g3

0xb7f7,	// (0x0009b14a) bg_cl_header_pane_g4

0xb7ef,	// (0x0009b142) bg_cl_header_pane_g5

0xba2b,	// (0x0009b37e) bg_cl_header_pane_g6

0xb80f,	// (0x0009b162) bg_cl_header_pane_g7

0xb817,	// (0x0009b16a) bg_cl_header_pane_g8

0xb807,	// (0x0009b15a) bg_cl_header_pane_g9

0x0008,

0xf9ea,	// (0x0009f33d) bg_cl_header_pane_g

0x7b51,	// (0x000974a4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b51,	// (0x000974a4) hc_cl_list_double_graphic_heading_pane

0x7b64,	// (0x000974b7) hc_cl_list_single_graphic_pane_ParamLimits

0x7b64,	// (0x000974b7) hc_cl_list_single_graphic_pane

0x7b7c,	// (0x000974cf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b7c,	// (0x000974cf) hc_cl_list_single_graphic_pane_g1

0x7b88,	// (0x000974db) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b88,	// (0x000974db) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fd,	// (0x0009f350) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fd,	// (0x0009f350) hc_cl_list_single_graphic_pane_g

0x7b9c,	// (0x000974ef) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b9c,	// (0x000974ef) hc_cl_list_single_graphic_pane_t1

0x7b7c,	// (0x000974cf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b7c,	// (0x000974cf) hc_cl_list_double_graphic_heading_pane_g1

0x7bb1,	// (0x00097504) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7bb1,	// (0x00097504) hc_cl_list_double_graphic_heading_pane_g2

0x7bc5,	// (0x00097518) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7bc5,	// (0x00097518) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa02,	// (0x0009f355) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa02,	// (0x0009f355) hc_cl_list_double_graphic_heading_pane_g

0x7bd9,	// (0x0009752c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7bd9,	// (0x0009752c) hc_cl_list_double_graphic_heading_pane_t1

0x7bee,	// (0x00097541) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7bee,	// (0x00097541) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa09,	// (0x0009f35c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa09,	// (0x0009f35c) hc_cl_list_double_graphic_heading_pane_t

0xda46,	// (0x0009d399) vid4_progress_pane_g1

0xda52,	// (0x0009d3a5) vid4_progress_pane_g2

0xda5e,	// (0x0009d3b1) vid4_progress_pane_g3

0xda6d,	// (0x0009d3c0) vid4_progress_pane_g4

0x0004,

0xfa0e,	// (0x0009f361) vid4_progress_pane_g

0xda8b,	// (0x0009d3de) vid4_progress_pane_t1

0xdaa1,	// (0x0009d3f4) vid4_progress_pane_t2

0x0002,

0xfa19,	// (0x0009f36c) vid4_progress_pane_t

0xdacc,	// (0x0009d41f) wait_bar_pane_cp07

0x4baf,	// (0x00094502) blid_firmament_pane_ParamLimits

0x4bf2,	// (0x00094545) popup_blid_sat_info2_window_g1

0x4c16,	// (0x00094569) popup_blid_sat_info2_window_t3

0x4c24,	// (0x00094577) popup_blid_sat_info2_window_t4

0x4c32,	// (0x00094585) popup_blid_sat_info2_window_t5

0x4c40,	// (0x00094593) popup_blid_sat_info2_window_t6

0x4c50,	// (0x000945a3) popup_blid_sat_info2_window_t7

0x4c5e,	// (0x000945b1) popup_blid_sat_info2_window_t8

0x4c6c,	// (0x000945bf) popup_blid_sat_info2_window_t9

0x4c7a,	// (0x000945cd) popup_blid_sat_info2_window_t10

0x4e18,	// (0x0009476b) aid_firma_cardinal_ParamLimits

0x4e2c,	// (0x0009477f) blid_firmament_pane_t1_ParamLimits

0x4e43,	// (0x00094796) blid_firmament_pane_t2_ParamLimits

0x4e5a,	// (0x000947ad) blid_firmament_pane_t3_ParamLimits

0x4e71,	// (0x000947c4) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x0009ef86) blid_firmament_pane_t_ParamLimits

0x4e88,	// (0x000947db) blid_sat_info_pane_ParamLimits

0x0df0,	// (0x00090743) main_cam_set_pane_ParamLimits

0x5f6b,	// (0x000958be) aid_size_cell_colour_35_ParamLimits

0x5f8b,	// (0x000958de) aid_size_cell_colour_112_ParamLimits

0x5fab,	// (0x000958fe) aid_size_cell_effect_ParamLimits

0xef97,	// (0x0009e8ea) bg_tb_trans_pane_cp02_ParamLimits

0xabfb,	// (0x0009a54e) heading_imed_pane_ParamLimits

0x5fcb,	// (0x0009591e) listscroll_imed_pane_ParamLimits

0xe5c5,	// (0x0009df18) popup_call2_audio_first_window_g5_ParamLimits

0xe5c5,	// (0x0009df18) popup_call2_audio_first_window_g5

0x65c2,	// (0x00095f15) aid_size_touch_image3_arrow_left_ParamLimits

0x65c2,	// (0x00095f15) aid_size_touch_image3_arrow_left

0x65ee,	// (0x00095f41) aid_size_touch_image3_arrow_right_ParamLimits

0x65ee,	// (0x00095f41) aid_size_touch_image3_arrow_right

0xdab7,	// (0x0009d40a) vid4_progress_pane_t3

0x631a,	// (0x00095c6d) main_hwr_training_symbol_option_pane_ParamLimits

0x631a,	// (0x00095c6d) main_hwr_training_symbol_option_pane

0xb363,	// (0x0009acb6) popup_hwr_training_preview_window_ParamLimits

0xb363,	// (0x0009acb6) popup_hwr_training_preview_window

0x633a,	// (0x00095c8d) hwr_training_navi_pane_g5_ParamLimits

0x633a,	// (0x00095c8d) hwr_training_navi_pane_g5

0xb7d5,	// (0x0009b128) popup_char_count_window

0xd9b1,	// (0x0009d304) bg_popup_sub_pane_cp20_ParamLimits

0x75a9,	// (0x00096efc) list_vitu2_match_list_pane_ParamLimits

0x75b8,	// (0x00096f0b) vitu2_page_scroll_pane_ParamLimits

0x75b8,	// (0x00096f0b) vitu2_page_scroll_pane

0xbdcb,	// (0x0009b71e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbdcb,	// (0x0009b71e) list_single_hwr_training_symbol_option_pane

0xbdde,	// (0x0009b731) list_single_hwr_training_symbol_option_pane_g1

0xbde6,	// (0x0009b739) list_single_hwr_training_symbol_option_pane_t1

0xbdf4,	// (0x0009b747) bg_button_pane_cp023

0xbdfd,	// (0x0009b750) bg_button_pane_cp024

0x7c0d,	// (0x00097560) vitu2_page_scroll_pane_g1

0x7c15,	// (0x00097568) vitu2_page_scroll_pane_g2

0x0001,

0xfa20,	// (0x0009f373) vitu2_page_scroll_pane_g

0x7c1f,	// (0x00097572) vitu2_page_scroll_pane_t1

0x4adf,	// (0x00094432) popup_char_count_window_g1

0xbe30,	// (0x0009b783) popup_char_count_window_g2

0xbe39,	// (0x0009b78c) popup_char_count_window_g3

0x0002,

0xfa25,	// (0x0009f378) popup_char_count_window_g

0xbe42,	// (0x0009b795) popup_char_count_window_t1

0x0b6d,	// (0x000904c0) main_vded2_pane

0xb060,	// (0x0009a9b3) aid_size_cell_imed_line

0xb06a,	// (0x0009a9bd) grid_imed_line_width_pane

0x6b10,	// (0x00096463) vid4_indicators_pane_g4

0xbe50,	// (0x0009b7a3) cell_imed_line_width_pane_ParamLimits

0xbe50,	// (0x0009b7a3) cell_imed_line_width_pane

0xbe66,	// (0x0009b7b9) cell_imed_line_width_pane_g1

0xaf96,	// (0x0009a8e9) cell_imed_line_width_pane_g2

0x0001,

0xfa2c,	// (0x0009f37f) cell_imed_line_width_pane_g

0x7c2e,	// (0x00097581) main_vded2_pane_g1_ParamLimits

0x7c2e,	// (0x00097581) main_vded2_pane_g1

0x7c49,	// (0x0009759c) main_vded2_pane_g2_ParamLimits

0x7c49,	// (0x0009759c) main_vded2_pane_g2

0x0001,

0xfa31,	// (0x0009f384) main_vded2_pane_g_ParamLimits

0xfa31,	// (0x0009f384) main_vded2_pane_g

0x7c5b,	// (0x000975ae) vded2_slider_pane_ParamLimits

0x7c5b,	// (0x000975ae) vded2_slider_pane

0x7c6b,	// (0x000975be) aid_size_touch_vded2_end

0x7c75,	// (0x000975c8) aid_size_touch_vded2_playhead

0xbe6f,	// (0x0009b7c2) aid_size_touch_vded2_start

0xbe77,	// (0x0009b7ca) vded2_slider_bg_pane

0xbe80,	// (0x0009b7d3) vded2_slider_pane_g1

0xbe89,	// (0x0009b7dc) vded2_slider_pane_g2

0x7c7f,	// (0x000975d2) vded2_slider_pane_g3

0x0002,

0xfa36,	// (0x0009f389) vded2_slider_pane_g

0xbe91,	// (0x0009b7e4) vded2_slider_bg_pane_g1

0xbe9a,	// (0x0009b7ed) vded2_slider_bg_pane_g2

0xbea3,	// (0x0009b7f6) vded2_slider_bg_pane_g3

0x0002,

0xfa3d,	// (0x0009f390) vded2_slider_bg_pane_g

0x352f,	// (0x00092e82) aid_postcard_touch_down_pane_ParamLimits

0x352f,	// (0x00092e82) aid_postcard_touch_down_pane

0x3547,	// (0x00092e9a) aid_postcard_touch_up_pane_ParamLimits

0x3547,	// (0x00092e9a) aid_postcard_touch_up_pane

0x0b6d,	// (0x000904c0) main_blid2_pane

0xefa5,	// (0x0009e8f8) popup_blid2_search_window

0x0b6d,	// (0x000904c0) blid2_gps_pane

0x0b6d,	// (0x000904c0) blid2_navig_pane

0x0b6d,	// (0x000904c0) blid2_search_pane

0x0b6d,	// (0x000904c0) blid2_tripm_pane

0x7c8a,	// (0x000975dd) blid2_search_pane_g1_ParamLimits

0x7c8a,	// (0x000975dd) blid2_search_pane_g1

0x7ca2,	// (0x000975f5) blid2_search_pane_t1_ParamLimits

0x7ca2,	// (0x000975f5) blid2_search_pane_t1

0x7cb4,	// (0x00097607) aid_size_cell_blid2_gps_ParamLimits

0x7cb4,	// (0x00097607) aid_size_cell_blid2_gps

0x7ccc,	// (0x0009761f) blid2_gps_pane_g1_ParamLimits

0x7ccc,	// (0x0009761f) blid2_gps_pane_g1

0x7ce0,	// (0x00097633) grid_blid2_satellite_pane_ParamLimits

0x7ce0,	// (0x00097633) grid_blid2_satellite_pane

0x7cf8,	// (0x0009764b) blid2_navig_pane_g1_ParamLimits

0x7cf8,	// (0x0009764b) blid2_navig_pane_g1

0x7d04,	// (0x00097657) blid2_navig_pane_t1_ParamLimits

0x7d04,	// (0x00097657) blid2_navig_pane_t1

0x7d1f,	// (0x00097672) blid2_navig_pane_t2_ParamLimits

0x7d1f,	// (0x00097672) blid2_navig_pane_t2

0x0001,

0xfa44,	// (0x0009f397) blid2_navig_pane_t_ParamLimits

0xfa44,	// (0x0009f397) blid2_navig_pane_t

0x7d3a,	// (0x0009768d) blid2_navig_ring_pane_ParamLimits

0x7d3a,	// (0x0009768d) blid2_navig_ring_pane

0x7d55,	// (0x000976a8) blid2_speed_pane_ParamLimits

0x7d55,	// (0x000976a8) blid2_speed_pane

0x7d61,	// (0x000976b4) blid2_tripm_pane_g1_ParamLimits

0x7d61,	// (0x000976b4) blid2_tripm_pane_g1

0x7d7c,	// (0x000976cf) blid2_tripm_pane_g2_ParamLimits

0x7d7c,	// (0x000976cf) blid2_tripm_pane_g2

0x7d90,	// (0x000976e3) blid2_tripm_pane_g3_ParamLimits

0x7d90,	// (0x000976e3) blid2_tripm_pane_g3

0x7da4,	// (0x000976f7) blid2_tripm_pane_g4_ParamLimits

0x7da4,	// (0x000976f7) blid2_tripm_pane_g4

0x7db8,	// (0x0009770b) blid2_tripm_pane_g5_ParamLimits

0x7db8,	// (0x0009770b) blid2_tripm_pane_g5

0x0005,

0xfa49,	// (0x0009f39c) blid2_tripm_pane_g_ParamLimits

0xfa49,	// (0x0009f39c) blid2_tripm_pane_g

0x7dde,	// (0x00097731) blid2_tripm_pane_t1_ParamLimits

0x7dde,	// (0x00097731) blid2_tripm_pane_t1

0x7df9,	// (0x0009774c) blid2_tripm_pane_t2_ParamLimits

0x7df9,	// (0x0009774c) blid2_tripm_pane_t2

0x7e12,	// (0x00097765) blid2_tripm_pane_t3_ParamLimits

0x7e12,	// (0x00097765) blid2_tripm_pane_t3

0x0003,

0xfa56,	// (0x0009f3a9) blid2_tripm_pane_t_ParamLimits

0xfa56,	// (0x0009f3a9) blid2_tripm_pane_t

0x7e59,	// (0x000977ac) cell_blid2_satellite_pane_ParamLimits

0x7e59,	// (0x000977ac) cell_blid2_satellite_pane

0x7e75,	// (0x000977c8) cell_blid2_satellite_pane_g1

0xbeac,	// (0x0009b7ff) cell_blid2_satellite_pane_t1

0x4e98,	// (0x000947eb) blid2_speed_pane_g1

0xbeba,	// (0x0009b80d) blid2_speed_pane_t1

0xbec8,	// (0x0009b81b) blid2_speed_pane_t2

0x0001,

0xfa5f,	// (0x0009f3b2) blid2_speed_pane_t

0x4e98,	// (0x000947eb) blid2_navig_ring_pane_g1

0x7e7e,	// (0x000977d1) blid2_navig_ring_pane_g2

0x7e86,	// (0x000977d9) blid2_navig_ring_pane_g3

0x7e8e,	// (0x000977e1) blid2_navig_ring_pane_g4

0x7e96,	// (0x000977e9) blid2_navig_ring_pane_g5

0x0004,

0xfa64,	// (0x0009f3b7) blid2_navig_ring_pane_g

0x0b6d,	// (0x000904c0) bg_popup_window_pane_cp011

0xbed6,	// (0x0009b829) popup_blid2_search_window_g1

0xbede,	// (0x0009b831) popup_blid2_search_window_t1

0xbeec,	// (0x0009b83f) popup_blid2_search_window_t2

0x0001,

0xfa6f,	// (0x0009f3c2) popup_blid2_search_window_t

0xa914,	// (0x0009a267) main_browser_pane_g1

0xa524,	// (0x00099e77) main_browser_pane_ParamLimits

0xd9b1,	// (0x0009d304) bg_button_pane_cp011_ParamLimits

0x6e09,	// (0x0009675c) cell_vitu2_function_pane_g1_ParamLimits

0xef97,	// (0x0009e8ea) bg_popup_sub_pane_cp22_ParamLimits

0x7757,	// (0x000970aa) input_focus_pane_cp08_ParamLimits

0x776e,	// (0x000970c1) popup_vitu2_query_button_pane_ParamLimits

0x776e,	// (0x000970c1) popup_vitu2_query_button_pane

0x777f,	// (0x000970d2) popup_vitu2_query_input_button_pane

0xba80,	// (0x0009b3d3) popup_vitu2_query_window_g1_ParamLimits

0x7789,	// (0x000970dc) popup_vitu2_query_window_g2_ParamLimits

0xf970,	// (0x0009f2c3) popup_vitu2_query_window_g_ParamLimits

0x0b6d,	// (0x000904c0) bg_button_pane_cp026

0x7e9e,	// (0x000977f1) popup_vitu2_query_input_button_pane_g1

0x0b6d,	// (0x000904c0) bg_button_pane_cp025

0xbefa,	// (0x0009b84d) popup_vitu2_query_button_pane_t1

0x51ef,	// (0x00094b42) main_mp3_pane_t6

0x5205,	// (0x00094b58) popup_slider_window_cp01

0xd940,	// (0x0009d293) cam4_battery_pane

0xd9a7,	// (0x0009d2fa) cam4_battery_pane_cp02

0x7c03,	// (0x00097556) cam4_battery_pane_cp01

0xda3e,	// (0x0009d391) cam4_battery_pane_cp03

0xb64c,	// (0x0009af9f) cam4_battery_pane_g1

0x4e98,	// (0x000947eb) cam4_battery_pane_g2

0x0001,

0xfa74,	// (0x0009f3c7) cam4_battery_pane_g

0x4c88,	// (0x000945db) popup_blid_sat_info2_window_t11

0x2e12,	// (0x00092765) aid_size_touch_mv_arrow_left_ParamLimits

0x2e3b,	// (0x0009278e) aid_size_touch_mv_arrow_right_ParamLimits

0xdaec,	// (0x0009d43f) navi_pane_g1_ParamLimits

0x2e64,	// (0x000927b7) navi_pane_g2_ParamLimits

0x2e92,	// (0x000927e5) navi_pane_g3_ParamLimits

0xf409,	// (0x0009ed5c) navi_pane_g_ParamLimits

0x2eec,	// (0x0009283f) navi_pane_mv_t1_ParamLimits

0x6009,	// (0x0009595c) grid_imed_effect_pane_ParamLimits

0x1c55,	// (0x000915a8) aid_placing_vt_slider_lsc

0xa861,	// (0x0009a1b4) aid_placing_vt_slider_prt

0x0df0,	// (0x00090743) bg_tb_trans_pane_cp01_ParamLimits

0x505d,	// (0x000949b0) popup_image_details_window_g1_ParamLimits

0x5070,	// (0x000949c3) popup_image_details_window_g2_ParamLimits

0x5085,	// (0x000949d8) popup_image_details_window_g3_ParamLimits

0x5085,	// (0x000949d8) popup_image_details_window_g3

0xf678,	// (0x0009efcb) popup_image_details_window_g_ParamLimits

0x5099,	// (0x000949ec) popup_image_details_window_t1_ParamLimits

0x50ab,	// (0x000949fe) popup_image_details_window_t2_ParamLimits

0x50c4,	// (0x00094a17) popup_image_details_window_t3_ParamLimits

0x50d8,	// (0x00094a2b) popup_image_details_window_t4_ParamLimits

0x50f3,	// (0x00094a46) popup_image_details_window_t5_ParamLimits

0xf67f,	// (0x0009efd2) popup_image_details_window_t_ParamLimits

0x7b0f,	// (0x00097462) cl_header_name_pane_ParamLimits

0x7b0f,	// (0x00097462) cl_header_name_pane

0x7ea6,	// (0x000977f9) cl_header_name_pane_t1_ParamLimits

0x7ea6,	// (0x000977f9) cl_header_name_pane_t1

0x7ec7,	// (0x0009781a) cl_header_name_pane_t2_ParamLimits

0x7ec7,	// (0x0009781a) cl_header_name_pane_t2

0x7f09,	// (0x0009785c) cl_header_name_pane_t3_ParamLimits

0x7f09,	// (0x0009785c) cl_header_name_pane_t3

0x0002,

0xfa79,	// (0x0009f3cc) cl_header_name_pane_t_ParamLimits

0xfa79,	// (0x0009f3cc) cl_header_name_pane_t

0x2ebd,	// (0x00092810) navi_pane_mv_g2_ParamLimits

0xb792,	// (0x0009b0e5) field_vitu2_entry_pane_g1_ParamLimits

0xb79e,	// (0x0009b0f1) field_vitu2_entry_pane_g2_ParamLimits

0xb7aa,	// (0x0009b0fd) field_vitu2_entry_pane_g3_ParamLimits

0xb7aa,	// (0x0009b0fd) field_vitu2_entry_pane_g3

0xf876,	// (0x0009f1c9) field_vitu2_entry_pane_g_ParamLimits

0x6d85,	// (0x000966d8) cell_vitu2_itu_pane_g1_ParamLimits

0x6d95,	// (0x000966e8) cell_vitu2_itu_pane_g2_ParamLimits

0x6d95,	// (0x000966e8) cell_vitu2_itu_pane_g2

0x0001,

0xf882,	// (0x0009f1d5) cell_vitu2_itu_pane_g_ParamLimits

0xf882,	// (0x0009f1d5) cell_vitu2_itu_pane_g

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp05_ParamLimits

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp05

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp03

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp04

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp10_ParamLimits

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp10

0x7ab1,	// (0x00097404) bg_vkb2_func_pane_cp08

0x7a97,	// (0x000973ea) bg_vkb2_func_pane_cp06

0x7aa5,	// (0x000973f8) bg_vkb2_func_pane_cp07

0xbe06,	// (0x0009b759) bg_vkb2_func_pane_cp11_ParamLimits

0xbe06,	// (0x0009b759) bg_vkb2_func_pane_cp11

0xbe1b,	// (0x0009b76e) bg_vkb2_func_pane_cp12_ParamLimits

0xbe1b,	// (0x0009b76e) bg_vkb2_func_pane_cp12

0x0b6d,	// (0x000904c0) bg_vkb2_func_pane_cp09

0xb7e7,	// (0x0009b13a) bg_vkb2_func_pane_g1

0xaa25,	// (0x0009a378) bg_vkb2_func_pane_g2

0xb7ef,	// (0x0009b142) bg_vkb2_func_pane_g3

0xb7f7,	// (0x0009b14a) bg_vkb2_func_pane_g4

0xba2b,	// (0x0009b37e) bg_vkb2_func_pane_g5

0xb80f,	// (0x0009b162) bg_vkb2_func_pane_g6

0xb817,	// (0x0009b16a) bg_vkb2_func_pane_g7

0xb807,	// (0x0009b15a) bg_vkb2_func_pane_g8

0xaa05,	// (0x0009a358) bg_vkb2_func_pane_g9

0x0008,

0xfa80,	// (0x0009f3d3) bg_vkb2_func_pane_g

0x7dcc,	// (0x0009771f) blid2_tripm_pane_g6_ParamLimits

0x7dcc,	// (0x0009771f) blid2_tripm_pane_g6

0xb606,	// (0x0009af59) mp4_progress_pane_g1

0x7e45,	// (0x00097798) blid2_tripm_values_pane_ParamLimits

0x7e45,	// (0x00097798) blid2_tripm_values_pane

0x7f3a,	// (0x0009788d) blid2_tripm_values_pane_t1

0x7f48,	// (0x0009789b) blid2_tripm_values_pane_t2

0x7f56,	// (0x000978a9) blid2_tripm_values_pane_t3

0x7f64,	// (0x000978b7) blid2_tripm_values_pane_t4

0x7f72,	// (0x000978c5) blid2_tripm_values_pane_t5

0x7f80,	// (0x000978d3) blid2_tripm_values_pane_t6

0x7f8e,	// (0x000978e1) blid2_tripm_values_pane_t7

0x7f9c,	// (0x000978ef) blid2_tripm_values_pane_t8

0x7faa,	// (0x000978fd) blid2_tripm_values_pane_t9

0x0008,

0xfa93,	// (0x0009f3e6) blid2_tripm_values_pane_t

0x1c95,	// (0x000915e8) call_video_pane_t1_ParamLimits

0x1caf,	// (0x00091602) call_video_pane_t2_ParamLimits

0xf292,	// (0x0009ebe5) call_video_pane_t_ParamLimits

0x3432,	// (0x00092d85) msg_header_pane_g1_ParamLimits

0xdd09,	// (0x0009d65c) msg_header_pane_g2_ParamLimits

0xdd09,	// (0x0009d65c) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0009edff) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0009edff) msg_header_pane_g

0xa524,	// (0x00099e77) main_clock2_pane_ParamLimits

0x5cab,	// (0x000955fe) grid_clock2_toolbar_pane_ParamLimits

0x5cab,	// (0x000955fe) grid_clock2_toolbar_pane

0x5cab,	// (0x000955fe) listscroll_clock2_pane_ParamLimits

0x5cab,	// (0x000955fe) listscroll_clock2_pane

0x5d94,	// (0x000956e7) main_clock2_pane_t3_ParamLimits

0x5d94,	// (0x000956e7) main_clock2_pane_t3

0x5daf,	// (0x00095702) main_clock2_pane_t4_ParamLimits

0x5daf,	// (0x00095702) main_clock2_pane_t4

0xbf08,	// (0x0009b85b) cell_clock2_toolbar_pane

0xbf10,	// (0x0009b863) cell_clock2_toolbar_pane_cp01

0xbf10,	// (0x0009b863) cell_clock2_toolbar_pane_cp02

0xbf18,	// (0x0009b86b) cell_clock2_toolbar_pane_cp03

0xbf20,	// (0x0009b873) list_clock2_pane

0xd7fe,	// (0x0009d151) scroll_pane_cp10

0xbf28,	// (0x0009b87b) list_single_clock2_pane_ParamLimits

0xbf28,	// (0x0009b87b) list_single_clock2_pane

0xdb8c,	// (0x0009d4df) list_highlight_pane_cp08

0xbf35,	// (0x0009b888) list_single_clock2_pane_t1

0xbf43,	// (0x0009b896) list_single_clock2_pane_t2

0x0001,

0xfaa6,	// (0x0009f3f9) list_single_clock2_pane_t

0x0b6d,	// (0x000904c0) bg_button_pane_cp10

0xbf51,	// (0x0009b8a4) cell_clock2_toolbar_pane_g1

0x34bb,	// (0x00092e0e) aid_main_viewer_pane_g1_ParamLimits

0x34bb,	// (0x00092e0e) aid_main_viewer_pane_g1

0x34c9,	// (0x00092e1c) aid_main_viewer_pane_g2_ParamLimits

0x34c9,	// (0x00092e1c) aid_main_viewer_pane_g2

0x34d7,	// (0x00092e2a) aid_main_viewer_pane_g3_ParamLimits

0x34d7,	// (0x00092e2a) aid_main_viewer_pane_g3

0x34e6,	// (0x00092e39) aid_main_viewer_pane_g4_ParamLimits

0x34e6,	// (0x00092e39) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0009ee10) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0009ee10) aid_main_viewer_pane_g

0x3e3e,	// (0x00093791) main_calc_pane_ParamLimits

0x3e52,	// (0x000937a5) main_dialer2_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_cam6_pane

0x0b6d,	// (0x000904c0) main_vid6_pane

0x5cb7,	// (0x0009560a) listscroll_gen_pane_cp06_ParamLimits

0x5cb7,	// (0x0009560a) listscroll_gen_pane_cp06

0x5dca,	// (0x0009571d) main_clock2_pane_t5_ParamLimits

0x5dca,	// (0x0009571d) main_clock2_pane_t5

0x5e27,	// (0x0009577a) aid_call2_pane_cp10_ParamLimits

0x5e39,	// (0x0009578c) aid_call_pane_cp10_ParamLimits

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5e4b,	// (0x0009579e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5e4b,	// (0x0009579e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd86d,	// (0x0009d1c0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x0009f082) popup_clock_analogue_window_cp10_g_ParamLimits

0x5e61,	// (0x000957b4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x656f,	// (0x00095ec2) cell_dialer2_keypad_pane_g2_ParamLimits

0x656f,	// (0x00095ec2) cell_dialer2_keypad_pane_g2

0x0001,

0xf815,	// (0x0009f168) cell_dialer2_keypad_pane_g_ParamLimits

0xf815,	// (0x0009f168) cell_dialer2_keypad_pane_g

0x658b,	// (0x00095ede) cell_dialer2_keypad_pane_t1

0x7134,	// (0x00096a87) main_cset_text2_pane_ParamLimits

0x7134,	// (0x00096a87) main_cset_text2_pane

0xbc78,	// (0x0009b5cb) area_vitu2_query_pane_g1_ParamLimits

0x7a34,	// (0x00097387) area_vitu2_query_pane_g2_ParamLimits

0xf9c3,	// (0x0009f316) area_vitu2_query_pane_g_ParamLimits

0xbcfc,	// (0x0009b64f) area_vitu2_query_pane_t7_ParamLimits

0xbcfc,	// (0x0009b64f) area_vitu2_query_pane_t7

0x7a97,	// (0x000973ea) bg_button_pane_cp018_ParamLimits

0x7aa5,	// (0x000973f8) bg_button_pane_cp021_ParamLimits

0x7ab1,	// (0x00097404) bg_button_pane_cp022_ParamLimits

0x7ab1,	// (0x00097404) bg_vkb2_func_pane_cp08_ParamLimits

0x7a97,	// (0x000973ea) bg_vkb2_func_pane_cp06_ParamLimits

0x7aa5,	// (0x000973f8) bg_vkb2_func_pane_cp07_ParamLimits

0x7ac2,	// (0x00097415) input_focus_pane_cp09_ParamLimits

0xdade,	// (0x0009d431) cam6_autofocus_pane_ParamLimits

0xdade,	// (0x0009d431) cam6_autofocus_pane

0x7fb8,	// (0x0009790b) cam6_image_uncrop_pane_ParamLimits

0x7fb8,	// (0x0009790b) cam6_image_uncrop_pane

0x7fc7,	// (0x0009791a) cam6_indi_pane_ParamLimits

0x7fc7,	// (0x0009791a) cam6_indi_pane

0x7fdd,	// (0x00097930) cam6_mode_pane_ParamLimits

0x7fdd,	// (0x00097930) cam6_mode_pane

0x7fef,	// (0x00097942) cam6_timer_pane_ParamLimits

0x7fef,	// (0x00097942) cam6_timer_pane

0x7ffb,	// (0x0009794e) cam6_zoom_pane_ParamLimits

0x7ffb,	// (0x0009794e) cam6_zoom_pane

0x8009,	// (0x0009795c) cam6_mode_pane_g1_ParamLimits

0x8009,	// (0x0009795c) cam6_mode_pane_g1

0x8019,	// (0x0009796c) cam6_mode_pane_g2_ParamLimits

0x8019,	// (0x0009796c) cam6_mode_pane_g2

0x8029,	// (0x0009797c) cam6_mode_pane_g3_ParamLimits

0x8029,	// (0x0009797c) cam6_mode_pane_g3

0x8039,	// (0x0009798c) cam6_mode_pane_g4_ParamLimits

0x8039,	// (0x0009798c) cam6_mode_pane_g4

0x0003,

0xfaab,	// (0x0009f3fe) cam6_mode_pane_g_ParamLimits

0xfaab,	// (0x0009f3fe) cam6_mode_pane_g

0xbf59,	// (0x0009b8ac) bg_tb_trans_pane_cp08_ParamLimits

0xbf59,	// (0x0009b8ac) bg_tb_trans_pane_cp08

0xbf67,	// (0x0009b8ba) cam6_battery_pane_ParamLimits

0xbf67,	// (0x0009b8ba) cam6_battery_pane

0xbf7d,	// (0x0009b8d0) cam6_indi_pane_g1_ParamLimits

0xbf7d,	// (0x0009b8d0) cam6_indi_pane_g1

0xbf8f,	// (0x0009b8e2) cam6_indi_pane_g2_ParamLimits

0xbf8f,	// (0x0009b8e2) cam6_indi_pane_g2

0xbfa1,	// (0x0009b8f4) cam6_indi_pane_g3_ParamLimits

0xbfa1,	// (0x0009b8f4) cam6_indi_pane_g3

0x0002,

0xfab4,	// (0x0009f407) cam6_indi_pane_g_ParamLimits

0xfab4,	// (0x0009f407) cam6_indi_pane_g

0xbfb3,	// (0x0009b906) cam6_indi_pane_t1_ParamLimits

0xbfb3,	// (0x0009b906) cam6_indi_pane_t1

0x6b42,	// (0x00096495) cam6_autofocus_pane_g1

0x6b3a,	// (0x0009648d) cam6_autofocus_pane_g2

0x6b52,	// (0x000964a5) cam6_autofocus_pane_g3

0x6b4a,	// (0x0009649d) cam6_autofocus_pane_g4

0x0003,

0xfabb,	// (0x0009f40e) cam6_autofocus_pane_g

0xbfd9,	// (0x0009b92c) cam6_timer_pane_g1

0xbfe1,	// (0x0009b934) cam6_timer_pane_t1

0xbfef,	// (0x0009b942) cam6_zoom_cont_pane

0xbff7,	// (0x0009b94a) cam6_zoom_pane_g1

0xbfff,	// (0x0009b952) cam6_zoom_pane_g2

0x8049,	// (0x0009799c) cam6_zoom_pane_g3

0x0002,

0xfac4,	// (0x0009f417) cam6_zoom_pane_g

0x4e98,	// (0x000947eb) cam6_battery_pane_g1

0x4e98,	// (0x000947eb) cam6_battery_pane_g2

0x0001,

0xf63c,	// (0x0009ef8f) cam6_battery_pane_g

0xc007,	// (0x0009b95a) cam6_zoom_cont_pane_g1

0xc010,	// (0x0009b963) cam6_zoom_cont_pane_g2

0xc019,	// (0x0009b96c) cam6_zoom_cont_pane_g3

0x0002,

0xfacb,	// (0x0009f41e) cam6_zoom_cont_pane_g

0x8066,	// (0x000979b9) cam6_mode_pane_cp_ParamLimits

0x8066,	// (0x000979b9) cam6_mode_pane_cp

0x8078,	// (0x000979cb) cam6_zoom_pane_cp_ParamLimits

0x8078,	// (0x000979cb) cam6_zoom_pane_cp

0x8086,	// (0x000979d9) vid6_image_uncrop_cif_pane_ParamLimits

0x8086,	// (0x000979d9) vid6_image_uncrop_cif_pane

0x8096,	// (0x000979e9) vid6_image_uncrop_nhd_pane_ParamLimits

0x8096,	// (0x000979e9) vid6_image_uncrop_nhd_pane

0x80a5,	// (0x000979f8) vid6_image_uncrop_vga_pane_ParamLimits

0x80a5,	// (0x000979f8) vid6_image_uncrop_vga_pane

0x80b4,	// (0x00097a07) vid6_image_uncrop_wvga_pane_ParamLimits

0x80b4,	// (0x00097a07) vid6_image_uncrop_wvga_pane

0x80c3,	// (0x00097a16) vid6_indi_pane_ParamLimits

0x80c3,	// (0x00097a16) vid6_indi_pane

0xbf59,	// (0x0009b8ac) bg_tb_trans_pane_cp09_ParamLimits

0xbf59,	// (0x0009b8ac) bg_tb_trans_pane_cp09

0xc031,	// (0x0009b984) cam6_battery_pane_cp_ParamLimits

0xc031,	// (0x0009b984) cam6_battery_pane_cp

0xc03d,	// (0x0009b990) vid6_indi_pane_g1_ParamLimits

0xc03d,	// (0x0009b990) vid6_indi_pane_g1

0xc04f,	// (0x0009b9a2) vid6_indi_pane_g2_ParamLimits

0xc04f,	// (0x0009b9a2) vid6_indi_pane_g2

0xc061,	// (0x0009b9b4) vid6_indi_pane_g3_ParamLimits

0xc061,	// (0x0009b9b4) vid6_indi_pane_g3

0xc078,	// (0x0009b9cb) vid6_indi_pane_g4_ParamLimits

0xc078,	// (0x0009b9cb) vid6_indi_pane_g4

0xc08f,	// (0x0009b9e2) vid6_indi_pane_g5_ParamLimits

0xc08f,	// (0x0009b9e2) vid6_indi_pane_g5

0x0004,

0xfad2,	// (0x0009f425) vid6_indi_pane_g_ParamLimits

0xfad2,	// (0x0009f425) vid6_indi_pane_g

0xc0a9,	// (0x0009b9fc) vid6_indi_pane_t1_ParamLimits

0xc0a9,	// (0x0009b9fc) vid6_indi_pane_t1

0xc0bf,	// (0x0009ba12) vid6_indi_pane_t2_ParamLimits

0xc0bf,	// (0x0009ba12) vid6_indi_pane_t2

0xc0e7,	// (0x0009ba3a) vid6_indi_pane_t3_ParamLimits

0xc0e7,	// (0x0009ba3a) vid6_indi_pane_t3

0xc10f,	// (0x0009ba62) vid6_indi_pane_t4_ParamLimits

0xc10f,	// (0x0009ba62) vid6_indi_pane_t4

0x0003,

0xfadd,	// (0x0009f430) vid6_indi_pane_t_ParamLimits

0xfadd,	// (0x0009f430) vid6_indi_pane_t

0xc133,	// (0x0009ba86) wait_bar_pane_cp08

0x80db,	// (0x00097a2e) main_cset_text2_pane_t1_ParamLimits

0x80db,	// (0x00097a2e) main_cset_text2_pane_t1

0x8051,	// (0x000979a4) listscroll_gen_pane_cp06_t1_ParamLimits

0x8051,	// (0x000979a4) listscroll_gen_pane_cp06_t1

0x0b6d,	// (0x000904c0) main_cam6_set_pane

0xd932,	// (0x0009d285) bg_tb_trans_pane_cp06_ParamLimits

0xd948,	// (0x0009d29b) cam4_indicators_pane_g1_ParamLimits

0xd955,	// (0x0009d2a8) cam4_indicators_pane_g2_ParamLimits

0xf852,	// (0x0009f1a5) cam4_indicators_pane_g_ParamLimits

0xd975,	// (0x0009d2c8) cam4_indicators_pane_t1_ParamLimits

0xd999,	// (0x0009d2ec) bg_tb_trans_pane_cp07_ParamLimits

0x6ae9,	// (0x0009643c) vid4_indicators_pane_g1_ParamLimits

0x6af6,	// (0x00096449) vid4_indicators_pane_g2_ParamLimits

0x6b03,	// (0x00096456) vid4_indicators_pane_g3_ParamLimits

0x6b10,	// (0x00096463) vid4_indicators_pane_g4_ParamLimits

0xf864,	// (0x0009f1b7) vid4_indicators_pane_g_ParamLimits

0x6b28,	// (0x0009647b) vid4_indicators_pane_t1_ParamLimits

0xda46,	// (0x0009d399) vid4_progress_pane_g1_ParamLimits

0xda52,	// (0x0009d3a5) vid4_progress_pane_g2_ParamLimits

0xda5e,	// (0x0009d3b1) vid4_progress_pane_g3_ParamLimits

0xda6d,	// (0x0009d3c0) vid4_progress_pane_g4_ParamLimits

0xfa0e,	// (0x0009f361) vid4_progress_pane_g_ParamLimits

0xda8b,	// (0x0009d3de) vid4_progress_pane_t1_ParamLimits

0xdaa1,	// (0x0009d3f4) vid4_progress_pane_t2_ParamLimits

0xdab7,	// (0x0009d40a) vid4_progress_pane_t3_ParamLimits

0xfa19,	// (0x0009f36c) vid4_progress_pane_t_ParamLimits

0xdacc,	// (0x0009d41f) wait_bar_pane_cp07_ParamLimits

0x80fc,	// (0x00097a4f) main_cam6_set_pane_g2_ParamLimits

0x80fc,	// (0x00097a4f) main_cam6_set_pane_g2

0x8122,	// (0x00097a75) main_cset6_listscroll_pane_ParamLimits

0x8122,	// (0x00097a75) main_cset6_listscroll_pane

0x8140,	// (0x00097a93) main_cset6_slider_pane_ParamLimits

0x8140,	// (0x00097a93) main_cset6_slider_pane

0x8156,	// (0x00097aa9) main_cset6_text2_pane_ParamLimits

0x8156,	// (0x00097aa9) main_cset6_text2_pane

0xc142,	// (0x0009ba95) main_cset6_text_pane

0xc14a,	// (0x0009ba9d) main_cset_list_pane_copy1_ParamLimits

0xc14a,	// (0x0009ba9d) main_cset_list_pane_copy1

0xc15a,	// (0x0009baad) scroll_pane_cp028_copy1

0x8164,	// (0x00097ab7) cset_list_set_pane_copy1

0x8178,	// (0x00097acb) aid_position_infowindow_above_copy1

0x8180,	// (0x00097ad3) aid_position_infowindow_below_copy1

0x8188,	// (0x00097adb) cset_list_set_pane_g1_copy1

0xc163,	// (0x0009bab6) cset_list_set_pane_g3_copy1_ParamLimits

0xc163,	// (0x0009bab6) cset_list_set_pane_g3_copy1

0xc172,	// (0x0009bac5) cset_list_set_pane_t1_copy1_ParamLimits

0xc172,	// (0x0009bac5) cset_list_set_pane_t1_copy1

0x0df0,	// (0x00090743) list_highlight_pane_cp021_copy1_ParamLimits

0x0df0,	// (0x00090743) list_highlight_pane_cp021_copy1

0xc187,	// (0x0009bada) cset6_slider_pane_ParamLimits

0xc187,	// (0x0009bada) cset6_slider_pane

0xc1b3,	// (0x0009bb06) main_cset6_slider_pane_g1_ParamLimits

0xc1b3,	// (0x0009bb06) main_cset6_slider_pane_g1

0x8190,	// (0x00097ae3) main_cset6_slider_pane_g2_ParamLimits

0x8190,	// (0x00097ae3) main_cset6_slider_pane_g2

0xc1db,	// (0x0009bb2e) main_cset6_slider_pane_g3_ParamLimits

0xc1db,	// (0x0009bb2e) main_cset6_slider_pane_g3

0x81b8,	// (0x00097b0b) main_cset6_slider_pane_g4_ParamLimits

0x81b8,	// (0x00097b0b) main_cset6_slider_pane_g4

0x81c4,	// (0x00097b17) main_cset6_slider_pane_g5_ParamLimits

0x81c4,	// (0x00097b17) main_cset6_slider_pane_g5

0xb91a,	// (0x0009b26d) main_cset6_slider_pane_g7_ParamLimits

0xb91a,	// (0x0009b26d) main_cset6_slider_pane_g7

0xb926,	// (0x0009b279) main_cset6_slider_pane_g8_ParamLimits

0xb926,	// (0x0009b279) main_cset6_slider_pane_g8

0x71e3,	// (0x00096b36) main_cset6_slider_pane_g9_ParamLimits

0x71e3,	// (0x00096b36) main_cset6_slider_pane_g9

0x71ef,	// (0x00096b42) main_cset6_slider_pane_g10_ParamLimits

0x71ef,	// (0x00096b42) main_cset6_slider_pane_g10

0x71fb,	// (0x00096b4e) main_cset6_slider_pane_g11_ParamLimits

0x71fb,	// (0x00096b4e) main_cset6_slider_pane_g11

0x7207,	// (0x00096b5a) main_cset6_slider_pane_g12_ParamLimits

0x7207,	// (0x00096b5a) main_cset6_slider_pane_g12

0x7213,	// (0x00096b66) main_cset6_slider_pane_g13_ParamLimits

0x7213,	// (0x00096b66) main_cset6_slider_pane_g13

0x721f,	// (0x00096b72) main_cset6_slider_pane_g14_ParamLimits

0x721f,	// (0x00096b72) main_cset6_slider_pane_g14

0x81d2,	// (0x00097b25) main_cset6_slider_pane_g15_ParamLimits

0x81d2,	// (0x00097b25) main_cset6_slider_pane_g15

0x7243,	// (0x00096b96) main_cset6_slider_pane_g16_ParamLimits

0x7243,	// (0x00096b96) main_cset6_slider_pane_g16

0x7251,	// (0x00096ba4) main_cset6_slider_pane_g17_ParamLimits

0x7251,	// (0x00096ba4) main_cset6_slider_pane_g17

0x0011,

0xfae6,	// (0x0009f439) main_cset6_slider_pane_g_ParamLimits

0xfae6,	// (0x0009f439) main_cset6_slider_pane_g

0xc1e7,	// (0x0009bb3a) main_cset6_slider_pane_t1_ParamLimits

0xc1e7,	// (0x0009bb3a) main_cset6_slider_pane_t1

0x8202,	// (0x00097b55) main_cset6_slider_pane_t2_ParamLimits

0x8202,	// (0x00097b55) main_cset6_slider_pane_t2

0x822d,	// (0x00097b80) main_cset6_slider_pane_t3_ParamLimits

0x822d,	// (0x00097b80) main_cset6_slider_pane_t3

0x8258,	// (0x00097bab) main_cset6_slider_pane_t4_ParamLimits

0x8258,	// (0x00097bab) main_cset6_slider_pane_t4

0x8285,	// (0x00097bd8) main_cset6_slider_pane_t5_ParamLimits

0x8285,	// (0x00097bd8) main_cset6_slider_pane_t5

0xc228,	// (0x0009bb7b) main_cset6_slider_pane_t7_ParamLimits

0xc228,	// (0x0009bb7b) main_cset6_slider_pane_t7

0x82b2,	// (0x00097c05) main_cset6_slider_pane_t8_ParamLimits

0x82b2,	// (0x00097c05) main_cset6_slider_pane_t8

0x82d6,	// (0x00097c29) main_cset6_slider_pane_t9_ParamLimits

0x82d6,	// (0x00097c29) main_cset6_slider_pane_t9

0x82fa,	// (0x00097c4d) main_cset6_slider_pane_t10_ParamLimits

0x82fa,	// (0x00097c4d) main_cset6_slider_pane_t10

0x831e,	// (0x00097c71) main_cset6_slider_pane_t11_ParamLimits

0x831e,	// (0x00097c71) main_cset6_slider_pane_t11

0xc25e,	// (0x0009bbb1) main_cset6_slider_pane_t14_ParamLimits

0xc25e,	// (0x0009bbb1) main_cset6_slider_pane_t14

0xc297,	// (0x0009bbea) main_cset6_slider_pane_t15_ParamLimits

0xc297,	// (0x0009bbea) main_cset6_slider_pane_t15

0x000b,

0xfb0b,	// (0x0009f45e) main_cset6_slider_pane_t_ParamLimits

0xfb0b,	// (0x0009f45e) main_cset6_slider_pane_t

0xc2d0,	// (0x0009bc23) cset_slider_pane_g1_copy1

0xc2d9,	// (0x0009bc2c) cset_slider_pane_g2_copy1

0xc2e2,	// (0x0009bc35) cset_slider_pane_g3_copy1

0x0b6d,	// (0x000904c0) bg_popup_sub_pane_cp011_copy1

0xba8c,	// (0x0009b3df) main_cset_text_pane_g1_copy1

0xba94,	// (0x0009b3e7) main_cset_text_pane_t1_copy1

0xbaa2,	// (0x0009b3f5) main_cset_text_pane_t2_copy1

0xbab0,	// (0x0009b403) main_cset_text_pane_t3_copy1

0xbabe,	// (0x0009b411) main_cset_text_pane_t4_copy1

0xbacc,	// (0x0009b41f) main_cset_text_pane_t5_copy1

0xbada,	// (0x0009b42d) main_cset_text_pane_t6_copy1

0xbae8,	// (0x0009b43b) main_cset_text_pane_t7_copy1

0x80db,	// (0x00097a2e) main_cset_text2_pane_t1_copy1

0x0b6d,	// (0x000904c0) main_ncimui_pane

0x40e0,	// (0x00093a33) popup_query_ncimui_window_ParamLimits

0x40e0,	// (0x00093a33) popup_query_ncimui_window

0x537f,	// (0x00094cd2) field_cale_ev2_pane_g4_ParamLimits

0x537f,	// (0x00094cd2) field_cale_ev2_pane_g4

0x643a,	// (0x00095d8d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x643a,	// (0x00095d8d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f0,	// (0x0009f143) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f0,	// (0x0009f143) cell_video_dialer_keypad_pane_g

0x6452,	// (0x00095da5) cell_video_dialer_keypad_pane_t1

0x0b6d,	// (0x000904c0) bg_popup_window_pane_cp012

0xd6ea,	// (0x0009d03d) heading_pane_cp06

0xc3da,	// (0x0009bd2d) ncim_query_content_pane

0x0b6d,	// (0x000904c0) bg_popup_heading_pane_cp01

0xc3e2,	// (0x0009bd35) ncim_heading_pane_t1

0xc3f0,	// (0x0009bd43) ncim_indicator_popup_pane

0xc402,	// (0x0009bd55) ncim_query_button_pane

0xc418,	// (0x0009bd6b) ncim_query_content_pane_t1

0xc42a,	// (0x0009bd7d) ncim_query_content_pane_t2

0x0005,

0xfb4a,	// (0x0009f49d) ncim_query_content_pane_t

0xc464,	// (0x0009bdb7) ncim_query_list_pane

0xc476,	// (0x0009bdc9) ncim_query_popup_pane

0xc3f0,	// (0x0009bd43) ncim_indicator_popup_pane_ParamLimits

0x843d,	// (0x00097d90) ncim_query_content_pane_g1_ParamLimits

0x843d,	// (0x00097d90) ncim_query_content_pane_g1

0xc418,	// (0x0009bd6b) ncim_query_content_pane_t1_ParamLimits

0xc42a,	// (0x0009bd7d) ncim_query_content_pane_t2_ParamLimits

0x8449,	// (0x00097d9c) ncim_query_content_pane_t3_ParamLimits

0x8449,	// (0x00097d9c) ncim_query_content_pane_t3

0x8471,	// (0x00097dc4) ncim_query_content_pane_t4_ParamLimits

0x8471,	// (0x00097dc4) ncim_query_content_pane_t4

0x8499,	// (0x00097dec) ncim_query_content_pane_t5_ParamLimits

0x8499,	// (0x00097dec) ncim_query_content_pane_t5

0xc43c,	// (0x0009bd8f) ncim_query_content_pane_t6_ParamLimits

0xc43c,	// (0x0009bd8f) ncim_query_content_pane_t6

0xfb4a,	// (0x0009f49d) ncim_query_content_pane_t_ParamLimits

0xc464,	// (0x0009bdb7) ncim_query_list_pane_ParamLimits

0xc476,	// (0x0009bdc9) ncim_query_popup_pane_ParamLimits

0xc48a,	// (0x0009bddd) wait_bar_pane_cp04

0x0b6d,	// (0x000904c0) input_focus_pane_cp011

0xc492,	// (0x0009bde5) ncim_query_popup_pane_t1

0xc4a0,	// (0x0009bdf3) ncim_list_query_list_pane_ParamLimits

0xc4a0,	// (0x0009bdf3) ncim_list_query_list_pane

0x0b6d,	// (0x000904c0) bg_button_pane_cp027

0xc4b3,	// (0x0009be06) ncim_query_button_pane_g1

0x0b6d,	// (0x000904c0) list_highlight_pane_cp012

0xc4bd,	// (0x0009be10) ncim_list_query_list_pane_g1

0xc4c5,	// (0x0009be18) ncim_list_query_list_pane_t1

0xd965,	// (0x0009d2b8) cam4_indicators_pane_g3_ParamLimits

0xd965,	// (0x0009d2b8) cam4_indicators_pane_g3

0x6b1c,	// (0x0009646f) vid4_indicators_pane_g5_ParamLimits

0x6b1c,	// (0x0009646f) vid4_indicators_pane_g5

0xda7c,	// (0x0009d3cf) vid4_progress_pane_g5_ParamLimits

0xda7c,	// (0x0009d3cf) vid4_progress_pane_g5

0x8356,	// (0x00097ca9) main_ncimui_pane_g1

0x83ac,	// (0x00097cff) ncimui_group_query_pane_ParamLimits

0x83ac,	// (0x00097cff) ncimui_group_query_pane

0x83e8,	// (0x00097d3b) ncimui_list_pane_ParamLimits

0x83e8,	// (0x00097d3b) ncimui_list_pane

0x8409,	// (0x00097d5c) ncimui_text_pane_ParamLimits

0x8409,	// (0x00097d5c) ncimui_text_pane

0x84c1,	// (0x00097e14) ncimui_text_pane_t1_ParamLimits

0x84c1,	// (0x00097e14) ncimui_text_pane_t1

0xc4d3,	// (0x0009be26) ncimui_list_single_graphic_pane_ParamLimits

0xc4d3,	// (0x0009be26) ncimui_list_single_graphic_pane

0x84df,	// (0x00097e32) ncimui_query_pane_ParamLimits

0x84df,	// (0x00097e32) ncimui_query_pane

0x0b6d,	// (0x000904c0) list_highlight_pane_cp013

0xc4e3,	// (0x0009be36) ncim_list_query_list_pane_t1_copy1

0xc4bd,	// (0x0009be10) ncim_list_single_graphic_pane_g1

0xc4f1,	// (0x0009be44) ncim_query_button_pane_cp01

0xc4fd,	// (0x0009be50) ncim_query_entry_pane_ParamLimits

0xc4fd,	// (0x0009be50) ncim_query_entry_pane

0xc510,	// (0x0009be63) ncimui_query_pane_g1

0xc51c,	// (0x0009be6f) ncimui_query_pane_t1_ParamLimits

0xc51c,	// (0x0009be6f) ncimui_query_pane_t1

0x0df0,	// (0x00090743) input_focus_pane_cp012

0xc535,	// (0x0009be88) ncim_query_entry_pane_t1

0xa524,	// (0x00099e77) main_im_pane_ParamLimits

0x0df0,	// (0x00090743) main_mobtv_pane_ParamLimits

0x0df0,	// (0x00090743) main_mobtv_pane

0x81ea,	// (0x00097b3d) main_cset6_slider_pane_g18_ParamLimits

0x81ea,	// (0x00097b3d) main_cset6_slider_pane_g18

0x81f6,	// (0x00097b49) main_cset6_slider_pane_g19_ParamLimits

0x81f6,	// (0x00097b49) main_cset6_slider_pane_g19

0xc547,	// (0x0009be9a) bg_main_mobtv_pane_ParamLimits

0xc547,	// (0x0009be9a) bg_main_mobtv_pane

0x84f2,	// (0x00097e45) main_mobtv_info_pane

0x84fd,	// (0x00097e50) main_mobtv_loading_pane_ParamLimits

0x84fd,	// (0x00097e50) main_mobtv_loading_pane

0xc555,	// (0x0009bea8) main_mobtv_pg_channel_list_pane

0xc55f,	// (0x0009beb2) main_mobtv_pg_hdr_pane

0x850a,	// (0x00097e5d) main_mobtv_programe_curr_pane_ParamLimits

0x850a,	// (0x00097e5d) main_mobtv_programe_curr_pane

0x8517,	// (0x00097e6a) main_mobtv_programe_next_pane_ParamLimits

0x8517,	// (0x00097e6a) main_mobtv_programe_next_pane

0xc568,	// (0x0009bebb) popup_mobtv_noti_window

0x4e98,	// (0x000947eb) main_tv_pg_hdr_pane_g1

0xc572,	// (0x0009bec5) main_tv_pg_hdr_pane_g2

0xc57a,	// (0x0009becd) main_tv_pg_hdr_pane_g3

0xc582,	// (0x0009bed5) main_tv_pg_hdr_pane_g4

0xc58a,	// (0x0009bedd) main_tv_pg_hdr_pane_g5

0xc594,	// (0x0009bee7) main_tv_pg_hdr_pane_g6

0xc59e,	// (0x0009bef1) main_tv_pg_hdr_pane_g7

0xc5a8,	// (0x0009befb) main_tv_pg_hdr_pane_g8

0xc5b2,	// (0x0009bf05) main_tv_pg_hdr_pane_g9

0xc5bc,	// (0x0009bf0f) main_tv_pg_hdr_pane_g10

0xc5c6,	// (0x0009bf19) main_tv_pg_hdr_pane_g11

0x000a,

0xfb57,	// (0x0009f4aa) main_tv_pg_hdr_pane_g

0xc5d0,	// (0x0009bf23) main_tv_pg_hdr_pane_t1

0xc5de,	// (0x0009bf31) main_tv_pg_hdr_pane_t2

0xc5ec,	// (0x0009bf3f) main_tv_pg_hdr_pane_t3

0xc5fc,	// (0x0009bf4f) main_tv_pg_hdr_pane_t4

0xc60c,	// (0x0009bf5f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb6e,	// (0x0009f4c1) main_tv_pg_hdr_pane_t

0xc61c,	// (0x0009bf6f) single_mobtv_pg_channel_pane_ParamLimits

0xc61c,	// (0x0009bf6f) single_mobtv_pg_channel_pane

0xc62e,	// (0x0009bf81) single_mobtv_pg_channel_table_pane

0xc637,	// (0x0009bf8a) single_mobtv_pg_channel_thumb_pane

0xc640,	// (0x0009bf93) single_tv_pg_channel_pane_g1

0xc649,	// (0x0009bf9c) single_tv_pg_channel_pane_g2

0x0001,

0xfb79,	// (0x0009f4cc) single_tv_pg_channel_pane_g

0x5176,	// (0x00094ac9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5176,	// (0x00094ac9) bg_single_mobtv_pg_channel_thumb_pane

0xc652,	// (0x0009bfa5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc652,	// (0x0009bfa5) single_mobtv_pg_channel_thumb_pane_g1

0xc660,	// (0x0009bfb3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc660,	// (0x0009bfb3) single_mobtv_pg_channel_thumb_pane_g2

0xc66c,	// (0x0009bfbf) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc66c,	// (0x0009bfbf) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb7e,	// (0x0009f4d1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb7e,	// (0x0009f4d1) single_mobtv_pg_channel_thumb_pane_g

0xc678,	// (0x0009bfcb) single_mobtv_pg_channel_thumb_pane_t1

0xc686,	// (0x0009bfd9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb85,	// (0x0009f4d8) single_mobtv_pg_channel_thumb_pane_t

0x4e98,	// (0x000947eb) bg_single_mobtv_pg_channel_table_pane_g1

0x4e98,	// (0x000947eb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf63c,	// (0x0009ef8f) bg_single_mobtv_pg_channel_table_pane_g

0xc694,	// (0x0009bfe7) single_mobtv_pg_channel_table_pane_t1

0xc6a2,	// (0x0009bff5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8a,	// (0x0009f4dd) single_mobtv_pg_channel_table_pane_t

0x852c,	// (0x00097e7f) main_mobtv_info_pane_g1_ParamLimits

0x852c,	// (0x00097e7f) main_mobtv_info_pane_g1

0x854a,	// (0x00097e9d) main_mobtv_info_pane_t1_ParamLimits

0x854a,	// (0x00097e9d) main_mobtv_info_pane_t1

0x85c2,	// (0x00097f15) main_mobtv_info_pane_t2_ParamLimits

0x85c2,	// (0x00097f15) main_mobtv_info_pane_t2

0x0002,

0xfb94,	// (0x0009f4e7) main_mobtv_info_pane_t_ParamLimits

0xfb94,	// (0x0009f4e7) main_mobtv_info_pane_t

0x8653,	// (0x00097fa6) wait_bar_pane_cp05

0x8665,	// (0x00097fb8) main_mobtv_loading_pane_g1_ParamLimits

0x8665,	// (0x00097fb8) main_mobtv_loading_pane_g1

0x8676,	// (0x00097fc9) main_mobtv_loading_pane_g2_ParamLimits

0x8676,	// (0x00097fc9) main_mobtv_loading_pane_g2

0x8682,	// (0x00097fd5) main_mobtv_loading_pane_g3_ParamLimits

0x8682,	// (0x00097fd5) main_mobtv_loading_pane_g3

0x0002,

0xfb9b,	// (0x0009f4ee) main_mobtv_loading_pane_g_ParamLimits

0xfb9b,	// (0x0009f4ee) main_mobtv_loading_pane_g

0xc6b0,	// (0x0009c003) main_mobtv_loading_pane_t1_ParamLimits

0xc6b0,	// (0x0009c003) main_mobtv_loading_pane_t1

0xc6c8,	// (0x0009c01b) main_mobtv_loading_pane_t2_ParamLimits

0xc6c8,	// (0x0009c01b) main_mobtv_loading_pane_t2

0x0001,

0xfba2,	// (0x0009f4f5) main_mobtv_loading_pane_t_ParamLimits

0xfba2,	// (0x0009f4f5) main_mobtv_loading_pane_t

0x8695,	// (0x00097fe8) wait_bar_pane_cp06_ParamLimits

0x8695,	// (0x00097fe8) wait_bar_pane_cp06

0xc6ec,	// (0x0009c03f) main_mobtv_programe_curr_pane_t1

0xc6fa,	// (0x0009c04d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba7,	// (0x0009f4fa) main_mobtv_programe_curr_pane_t

0xc708,	// (0x0009c05b) main_mobtv_programe_next_pane_t1

0xc716,	// (0x0009c069) main_mobtv_programe_next_pane_t2

0xc724,	// (0x0009c077) main_mobtv_programe_next_pane_t3

0x0002,

0xfbac,	// (0x0009f4ff) main_mobtv_programe_next_pane_t

0x0b6d,	// (0x000904c0) bg_popup_mobtv_noti_window_pane

0xc732,	// (0x0009c085) popup_mobtv_noti_window_g1

0xc73a,	// (0x0009c08d) popup_mobtv_noti_window_t1

0xc748,	// (0x0009c09b) popup_mobtv_noti_window_t2

0x0001,

0xfbb3,	// (0x0009f506) popup_mobtv_noti_window_t

0x4e98,	// (0x000947eb) bg_popup_mobtv_noti_window_pane_g1

0x0b6d,	// (0x000904c0) sc_clock_pane

0x0b6d,	// (0x000904c0) main_fs_bigclock_pane

0x7e2f,	// (0x00097782) blid2_tripm_pane_t4_ParamLimits

0x7e2f,	// (0x00097782) blid2_tripm_pane_t4

0x86a4,	// (0x00097ff7) sc_clock_pane_g1_ParamLimits

0x86a4,	// (0x00097ff7) sc_clock_pane_g1

0x86b6,	// (0x00098009) sc_clock_pane_t1_ParamLimits

0x86b6,	// (0x00098009) sc_clock_pane_t1

0x86da,	// (0x0009802d) sc_clock_pane_t2_ParamLimits

0x86da,	// (0x0009802d) sc_clock_pane_t2

0x86f2,	// (0x00098045) sc_clock_pane_t3_ParamLimits

0x86f2,	// (0x00098045) sc_clock_pane_t3

0x0004,

0xfbb8,	// (0x0009f50b) sc_clock_pane_t_ParamLimits

0xfbb8,	// (0x0009f50b) sc_clock_pane_t

0x95d3,	// (0x00098f26) main_fs_bigclock_indicator_pane_ParamLimits

0x95d3,	// (0x00098f26) main_fs_bigclock_indicator_pane

0x510d,	// (0x00094a60) main_fs_bigclock_pane_g1_ParamLimits

0x510d,	// (0x00094a60) main_fs_bigclock_pane_g1

0x95df,	// (0x00098f32) main_fs_bigclock_pane_t1_ParamLimits

0x95df,	// (0x00098f32) main_fs_bigclock_pane_t1

0x95f1,	// (0x00098f44) main_fs_bigclock_pane_t2_ParamLimits

0x95f1,	// (0x00098f44) main_fs_bigclock_pane_t2

0x9605,	// (0x00098f58) main_fs_bigclock_pane_t3_ParamLimits

0x9605,	// (0x00098f58) main_fs_bigclock_pane_t3

0x0002,

0xfdb7,	// (0x0009f70a) main_fs_bigclock_pane_t_ParamLimits

0xfdb7,	// (0x0009f70a) main_fs_bigclock_pane_t

0xd2b4,	// (0x0009cc07) main_fs_bigclock_indicator_pane_g1

0xc40a,	// (0x0009bd5d) ncim_query_content_pane_g2_ParamLimits

0xc40a,	// (0x0009bd5d) ncim_query_content_pane_g2

0x0001,

0xfb45,	// (0x0009f498) ncim_query_content_pane_g_ParamLimits

0xfb45,	// (0x0009f498) ncim_query_content_pane_g

0x8709,	// (0x0009805c) sc_clock_pane_t4_ParamLimits

0x8709,	// (0x0009805c) sc_clock_pane_t4

0x0df0,	// (0x00090743) main_radioblah_pane

0xb701,	// (0x0009b054) cell_call4_button_pane_t1_copy1_ParamLimits

0xb701,	// (0x0009b054) cell_call4_button_pane_t1_copy1

0x835e,	// (0x00097cb1) main_ncimui_pane_t1_ParamLimits

0x835e,	// (0x00097cb1) main_ncimui_pane_t1

0x8378,	// (0x00097ccb) main_ncimui_pane_t2_ParamLimits

0x8378,	// (0x00097ccb) main_ncimui_pane_t2

0x0002,

0xfb3e,	// (0x0009f491) main_ncimui_pane_t_ParamLimits

0xfb3e,	// (0x0009f491) main_ncimui_pane_t

0xc756,	// (0x0009c0a9) main_radioblah_anim_pane_ParamLimits

0xc756,	// (0x0009c0a9) main_radioblah_anim_pane

0xc767,	// (0x0009c0ba) main_radioblah_info_pane_ParamLimits

0xc767,	// (0x0009c0ba) main_radioblah_info_pane

0xc77b,	// (0x0009c0ce) main_radioblah_pane_t1_ParamLimits

0xc77b,	// (0x0009c0ce) main_radioblah_pane_t1

0xc797,	// (0x0009c0ea) main_radioblah_pane_t2_ParamLimits

0xc797,	// (0x0009c0ea) main_radioblah_pane_t2

0x0003,

0xfbd9,	// (0x0009f52c) main_radioblah_pane_t_ParamLimits

0xfbd9,	// (0x0009f52c) main_radioblah_pane_t

0x88e2,	// (0x00098235) main_radioblah_rocker_ctrl_pane_ParamLimits

0x88e2,	// (0x00098235) main_radioblah_rocker_ctrl_pane

0xc7df,	// (0x0009c132) main_radioblah_info_pane_t1_ParamLimits

0xc7df,	// (0x0009c132) main_radioblah_info_pane_t1

0x893a,	// (0x0009828d) main_radioblah_info_pane_t2_ParamLimits

0x893a,	// (0x0009828d) main_radioblah_info_pane_t2

0x0003,

0xfbe2,	// (0x0009f535) main_radioblah_info_pane_t_ParamLimits

0xfbe2,	// (0x0009f535) main_radioblah_info_pane_t

0x4e98,	// (0x000947eb) main_radioblah_rocker_ctrl_pane_g1

0x89ea,	// (0x0009833d) main_radioblah_rocker_ctrl_pane_g2

0x89f2,	// (0x00098345) main_radioblah_rocker_ctrl_pane_g3

0x89fa,	// (0x0009834d) main_radioblah_rocker_ctrl_pane_g4

0x8a02,	// (0x00098355) main_radioblah_rocker_ctrl_pane_g5

0x8a0a,	// (0x0009835d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbeb,	// (0x0009f53e) main_radioblah_rocker_ctrl_pane_g

0x80db,	// (0x00097a2e) main_cset_text2_pane_t1_copy1_ParamLimits

0xd928,	// (0x0009d27b) cam4_image_uncrop_qvga_pane

0xd98f,	// (0x0009d2e2) vid4_image_uncrop_qcif_pane

0xdade,	// (0x0009d431) cam6_image_uncrop_qvga_pane_ParamLimits

0xdade,	// (0x0009d431) cam6_image_uncrop_qvga_pane

0xc021,	// (0x0009b974) vid6_image_uncrop_qcif_pane_ParamLimits

0xc021,	// (0x0009b974) vid6_image_uncrop_qcif_pane

0x0b6d,	// (0x000904c0) bg_popup_preview_window_pane_cp03

0xc3bc,	// (0x0009bd0f) list_cset_text2_pane

0xc3c4,	// (0x0009bd17) main_cset6_text2_pane_g1

0xc3cc,	// (0x0009bd1f) main_cset6_text2_pane_t1

0xc819,	// (0x0009c16c) list_cset_text2_pane_t1_ParamLimits

0xc819,	// (0x0009c16c) list_cset_text2_pane_t1

0x0df0,	// (0x00090743) main_radioblah_pane_ParamLimits

0x863f,	// (0x00097f92) main_mobtv_info_pane_t3_ParamLimits

0x863f,	// (0x00097f92) main_mobtv_info_pane_t3

0x88d0,	// (0x00098223) main_radioblah_pane_g1

0x890a,	// (0x0009825d) main_radioblah_info_pane_g1

0x898f,	// (0x000982e2) main_radioblah_info_pane_t3_ParamLimits

0x898f,	// (0x000982e2) main_radioblah_info_pane_t3

0x284c,	// (0x0009219f) highlight_cell_cale_month_pane_ParamLimits

0x284c,	// (0x0009219f) highlight_cell_cale_month_pane

0x0b6d,	// (0x000904c0) main_phob_fisheye_pane

0x5aa1,	// (0x000953f4) scroll_pane_cp0031_ParamLimits

0x5aa1,	// (0x000953f4) scroll_pane_cp0031

0xc133,	// (0x0009ba86) wait_bar_pane_cp08_ParamLimits

0x8164,	// (0x00097ab7) cset_list_set_pane_copy1_ParamLimits

0xc833,	// (0x0009c186) highlight_cell_cale_month_pane_g1

0x8a12,	// (0x00098365) highlight_cell_cale_month_pane_t1

0xbd68,	// (0x0009b6bb) list_gen_pane_cp01

0xb905,	// (0x0009b258) scroll_pane_01

0x8a20,	// (0x00098373) list_single_double_fisheye_pane

0xc83b,	// (0x0009c18e) list_double_fisheye_pane_g1_ParamLimits

0xc83b,	// (0x0009c18e) list_double_fisheye_pane_g1

0xc847,	// (0x0009c19a) list_double_fisheye_pane_g2_ParamLimits

0xc847,	// (0x0009c19a) list_double_fisheye_pane_g2

0x8a29,	// (0x0009837c) list_double_fisheye_pane_g3_ParamLimits

0x8a29,	// (0x0009837c) list_double_fisheye_pane_g3

0x0004,

0xfbf8,	// (0x0009f54b) list_double_fisheye_pane_g_ParamLimits

0xfbf8,	// (0x0009f54b) list_double_fisheye_pane_g

0x8a35,	// (0x00098388) list_double_fisheye_pane_t1_ParamLimits

0x8a35,	// (0x00098388) list_double_fisheye_pane_t1

0x8a50,	// (0x000983a3) list_double_fisheye_pane_t2_ParamLimits

0x8a50,	// (0x000983a3) list_double_fisheye_pane_t2

0x0001,

0xfc03,	// (0x0009f556) list_double_fisheye_pane_t_ParamLimits

0xfc03,	// (0x0009f556) list_double_fisheye_pane_t

0x0b6d,	// (0x000904c0) main_call5_pane

0x8734,	// (0x00098087) sc_swipe_pane_ParamLimits

0x8734,	// (0x00098087) sc_swipe_pane

0x8a85,	// (0x000983d8) call5_image_pane_ParamLimits

0x8a85,	// (0x000983d8) call5_image_pane

0x8aa2,	// (0x000983f5) call5_swipe_1_pane_ParamLimits

0x8aa2,	// (0x000983f5) call5_swipe_1_pane

0x8ab5,	// (0x00098408) call5_swipe_2_pane_ParamLimits

0x8ab5,	// (0x00098408) call5_swipe_2_pane

0x8ae2,	// (0x00098435) popup_call5_audio_first_window_ParamLimits

0x8ae2,	// (0x00098435) popup_call5_audio_first_window

0x5176,	// (0x00094ac9) call5_swipe_1_pane_g1_ParamLimits

0x5176,	// (0x00094ac9) call5_swipe_1_pane_g1

0xc878,	// (0x0009c1cb) call5_swipe_1_pane_g2_ParamLimits

0xc878,	// (0x0009c1cb) call5_swipe_1_pane_g2

0x0001,

0xfc08,	// (0x0009f55b) call5_swipe_1_pane_g_ParamLimits

0xfc08,	// (0x0009f55b) call5_swipe_1_pane_g

0xc884,	// (0x0009c1d7) call5_swipe_1_pane_t1_ParamLimits

0xc884,	// (0x0009c1d7) call5_swipe_1_pane_t1

0x5176,	// (0x00094ac9) call5_swipe_2_pane_g1_ParamLimits

0x5176,	// (0x00094ac9) call5_swipe_2_pane_g1

0xc899,	// (0x0009c1ec) call5_swipe_2_pane_g2_ParamLimits

0xc899,	// (0x0009c1ec) call5_swipe_2_pane_g2

0x0001,

0xfc0d,	// (0x0009f560) call5_swipe_2_pane_g_ParamLimits

0xfc0d,	// (0x0009f560) call5_swipe_2_pane_g

0xc8a5,	// (0x0009c1f8) call5_swipe_2_pane_t1_ParamLimits

0xc8a5,	// (0x0009c1f8) call5_swipe_2_pane_t1

0xc8ba,	// (0x0009c20d) sc_swipe_pane_g1_ParamLimits

0xc8ba,	// (0x0009c20d) sc_swipe_pane_g1

0xc8c7,	// (0x0009c21a) sc_swipe_pane_g2_ParamLimits

0xc8c7,	// (0x0009c21a) sc_swipe_pane_g2

0x0001,

0xfc12,	// (0x0009f565) sc_swipe_pane_g_ParamLimits

0xfc12,	// (0x0009f565) sc_swipe_pane_g

0xc8d3,	// (0x0009c226) sc_swipe_pane_t1_ParamLimits

0xc8d3,	// (0x0009c226) sc_swipe_pane_t1

0x0b6d,	// (0x000904c0) main_cmail_launcher_pane

0x8af7,	// (0x0009844a) aid_size_cell_cmail_l_ParamLimits

0x8af7,	// (0x0009844a) aid_size_cell_cmail_l

0x8b11,	// (0x00098464) grid_cmail_l_pane_ParamLimits

0x8b11,	// (0x00098464) grid_cmail_l_pane

0x8b2d,	// (0x00098480) cell_cmail_l_pane_ParamLimits

0x8b2d,	// (0x00098480) cell_cmail_l_pane

0x8b55,	// (0x000984a8) cell_cmail_l_pane_g1_ParamLimits

0x8b55,	// (0x000984a8) cell_cmail_l_pane_g1

0x8b61,	// (0x000984b4) cell_cmail_l_pane_t1_ParamLimits

0x8b61,	// (0x000984b4) cell_cmail_l_pane_t1

0xc8e8,	// (0x0009c23b) cell_cmail_l_pane_t2_ParamLimits

0xc8e8,	// (0x0009c23b) cell_cmail_l_pane_t2

0x0001,

0xfc17,	// (0x0009f56a) cell_cmail_l_pane_t_ParamLimits

0xfc17,	// (0x0009f56a) cell_cmail_l_pane_t

0x0df0,	// (0x00090743) grid_highlight_pane_cp018_ParamLimits

0x0df0,	// (0x00090743) grid_highlight_pane_cp018

0x0ca2,	// (0x000905f5) main2_pane_ParamLimits

0x0ca2,	// (0x000905f5) main2_pane

0xa5fd,	// (0x00099f50) popup_sp_fs_action_menu_bg_pane_g1

0xa605,	// (0x00099f58) popup_sp_fs_action_menu_bg_pane_g2

0xa60d,	// (0x00099f60) popup_sp_fs_action_menu_bg_pane_g3

0xa615,	// (0x00099f68) popup_sp_fs_action_menu_bg_pane_g4

0xa61d,	// (0x00099f70) popup_sp_fs_action_menu_bg_pane_g5

0xa625,	// (0x00099f78) popup_sp_fs_action_menu_bg_pane_g6

0xa62d,	// (0x00099f80) popup_sp_fs_action_menu_bg_pane_g7

0xa635,	// (0x00099f88) popup_sp_fs_action_menu_bg_pane_g8

0xa63d,	// (0x00099f90) popup_sp_fs_action_menu_bg_pane_g9

0xa645,	// (0x00099f98) popup_sp_fs_action_menu_bg_pane_g10

0xa645,	// (0x00099f98) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009eaff) popup_sp_fs_action_menu_bg_pane_g

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g3_g1

0x1add,	// (0x00091430) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_t3_g3_g2

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0009ebaf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0009ebaf) list_medium_line_x2_t3_g3_g

0x1af5,	// (0x00091448) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1af5,	// (0x00091448) list_medium_line_x2_t3_g3_t1

0x1b0a,	// (0x0009145d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b0a,	// (0x0009145d) list_medium_line_x2_t3_g3_t2

0x1b1e,	// (0x00091471) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0009ebb6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0009ebb6) list_medium_line_x2_t3_g3_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g2_g1

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0009ebbd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0009ebbd) list_medium_line_x2_t3_g2_g

0x1b33,	// (0x00091486) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b33,	// (0x00091486) list_medium_line_x2_t3_g2_t1

0x1b49,	// (0x0009149c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b49,	// (0x0009149c) list_medium_line_x2_t3_g2_t2

0x1b5b,	// (0x000914ae) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b5b,	// (0x000914ae) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0009ebc2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0009ebc2) list_medium_line_x2_t3_g2_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t4_g4_g1

0x1b79,	// (0x000914cc) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b79,	// (0x000914cc) list_medium_line_x2_t4_g4_g2

0x1add,	// (0x00091430) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_t4_g4_g3

0x1b85,	// (0x000914d8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b85,	// (0x000914d8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0009ebc9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0009ebc9) list_medium_line_x2_t4_g4_g

0x1b91,	// (0x000914e4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b91,	// (0x000914e4) list_medium_line_x2_t4_g4_t1

0x1bab,	// (0x000914fe) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bab,	// (0x000914fe) list_medium_line_x2_t4_g4_t2

0x1bc1,	// (0x00091514) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bc1,	// (0x00091514) list_medium_line_x2_t4_g4_t3

0x1bd6,	// (0x00091529) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bd6,	// (0x00091529) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0009ebd2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0009ebd2) list_medium_line_x2_t4_g4_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g4_g1

0x1b79,	// (0x000914cc) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b79,	// (0x000914cc) list_medium_line_x2_t2_g4_g2

0x1add,	// (0x00091430) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_t2_g4_g3

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0009ec39) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0009ec39) list_medium_line_x2_t2_g4_g

0x286a,	// (0x000921bd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x286a,	// (0x000921bd) list_medium_line_x2_t2_g4_t1

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0009ec42) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0009ec42) list_medium_line_x2_t2_g4_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g3_g1

0x1add,	// (0x00091430) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_t2_g3_g2

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0009ebaf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0009ebaf) list_medium_line_x2_t2_g3_g

0x287f,	// (0x000921d2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x287f,	// (0x000921d2) list_medium_line_x2_t2_g3_t1

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0009ec47) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0009ec47) list_medium_line_x2_t2_g3_t

0x2a4f,	// (0x000923a2) main_sp_fs_list_pane_ParamLimits

0x2a4f,	// (0x000923a2) main_sp_fs_list_pane

0x2a5b,	// (0x000923ae) sp_fs_scroll_pane_ParamLimits

0x2a5b,	// (0x000923ae) sp_fs_scroll_pane

0x2a67,	// (0x000923ba) list_medium_line_x2_t3_t1

0x2a77,	// (0x000923ca) list_medium_line_x2_t3_t2

0x2a85,	// (0x000923d8) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0009ec92) list_medium_line_x2_t3_t

0x2a93,	// (0x000923e6) list_medium_line_x3_t4_t1

0x2aa3,	// (0x000923f6) list_medium_line_x3_t4_t2

0x2ab1,	// (0x00092404) list_medium_line_x3_t4_t3

0x2a85,	// (0x000923d8) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0009ec99) list_medium_line_x3_t4_t

0x2abf,	// (0x00092412) list_medium_line_x4_t5_t1

0x2acf,	// (0x00092422) list_medium_line_x4_t5_t2

0x2ab1,	// (0x00092404) list_medium_line_x4_t5_t3

0x2add,	// (0x00092430) list_medium_line_x4_t5_t4

0x2a85,	// (0x000923d8) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0009eca2) list_medium_line_x4_t5_t

0x1ad1,	// (0x00091424) list_medium_line_t4_g4_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_t4_g4_g1

0x1b85,	// (0x000914d8) list_medium_line_t4_g4_g2_ParamLimits

0x1b85,	// (0x000914d8) list_medium_line_t4_g4_g2

0x2aeb,	// (0x0009243e) list_medium_line_t4_g4_g3_ParamLimits

0x2aeb,	// (0x0009243e) list_medium_line_t4_g4_g3

0x1ae9,	// (0x0009143c) list_medium_line_t4_g4_g4_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0009ecad) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0009ecad) list_medium_line_t4_g4_g

0x2af7,	// (0x0009244a) list_medium_line_t4_g4_t1_ParamLimits

0x2af7,	// (0x0009244a) list_medium_line_t4_g4_t1

0x2b0c,	// (0x0009245f) list_medium_line_t4_g4_t2_ParamLimits

0x2b0c,	// (0x0009245f) list_medium_line_t4_g4_t2

0x2b22,	// (0x00092475) list_medium_line_t4_g4_t3_ParamLimits

0x2b22,	// (0x00092475) list_medium_line_t4_g4_t3

0x1b1e,	// (0x00091471) list_medium_line_t4_g4_t4_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0009ecb6) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0009ecb6) list_medium_line_t4_g4_t

0x2bfe,	// (0x00092551) chi_dic_find_pane_g1

0x3e66,	// (0x000937b9) main_tport_pane

0xba1d,	// (0x0009b370) list_medium_line_plain_t1

0xba33,	// (0x0009b386) list_medium_line_t2_g2_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t2_g2_g1

0xba3f,	// (0x0009b392) list_medium_line_t2_g2_g2_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_t2_g2_g2

0x0001,

0xf954,	// (0x0009f2a7) list_medium_line_t2_g2_g_ParamLimits

0xf954,	// (0x0009f2a7) list_medium_line_t2_g2_g

0x75c7,	// (0x00096f1a) list_medium_line_t2_g2_t1_ParamLimits

0x75c7,	// (0x00096f1a) list_medium_line_t2_g2_t1

0x75de,	// (0x00096f31) list_medium_line_t2_g2_t2_ParamLimits

0x75de,	// (0x00096f31) list_medium_line_t2_g2_t2

0x0001,

0xf959,	// (0x0009f2ac) list_medium_line_t2_g2_t_ParamLimits

0xf959,	// (0x0009f2ac) list_medium_line_t2_g2_t

0xbd71,	// (0x0009b6c4) aid_sp_fs_list_icon_a_sm

0xbd79,	// (0x0009b6cc) aid_sp_fs_list_icon_d

0xbd81,	// (0x0009b6d4) aid_sp_fs_text_primary

0xbd8a,	// (0x0009b6dd) aid_sp_fs_text_secondary

0xbd93,	// (0x0009b6e6) list_medium_line

0xbd93,	// (0x0009b6e6) list_medium_line_g2

0xbd93,	// (0x0009b6e6) list_medium_line_g3

0xbd93,	// (0x0009b6e6) list_medium_line_plain

0xbd93,	// (0x0009b6e6) list_medium_line_plain_t2

0xbd93,	// (0x0009b6e6) list_medium_line_plain_t3

0xbd93,	// (0x0009b6e6) list_medium_line_right_icon

0xbd93,	// (0x0009b6e6) list_medium_line_right_iconx2

0xbd93,	// (0x0009b6e6) list_medium_line_t2

0xbd93,	// (0x0009b6e6) list_medium_line_t2_g2

0xbd93,	// (0x0009b6e6) list_medium_line_t2_g3

0xbd93,	// (0x0009b6e6) list_medium_line_t2_right_icon

0xbd93,	// (0x0009b6e6) list_medium_line_t2_right_iconx2

0xbd93,	// (0x0009b6e6) list_medium_line_t3

0xbd93,	// (0x0009b6e6) list_medium_line_t3_g2

0xbd93,	// (0x0009b6e6) list_medium_line_t3_g3

0xbd93,	// (0x0009b6e6) list_medium_line_t3_right_iconx2

0xbd9c,	// (0x0009b6ef) list_medium_line_t4_g4

0xbda5,	// (0x0009b6f8) list_medium_line_x2

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t2_g2

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t2_g3

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t2_g4

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t3

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t3_g2

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t3_g3

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t3_g4

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t4_g2

0xbda5,	// (0x0009b6f8) list_medium_line_x2_t4_g4

0xbdae,	// (0x0009b701) list_medium_line_x3

0xbdae,	// (0x0009b701) list_medium_line_x3_t4

0xbdae,	// (0x0009b701) list_medium_line_x3_t4_g4

0xbd9c,	// (0x0009b6ef) list_medium_line_x4_t4

0xbd9c,	// (0x0009b6ef) list_medium_line_x4_t4_g7

0xbd9c,	// (0x0009b6ef) list_medium_line_x4_t5

0xbdb7,	// (0x0009b70a) list_single_fs_dyc_pane_ParamLimits

0xbdb7,	// (0x0009b70a) list_single_fs_dyc_pane

0x1ad1,	// (0x00091424) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x4_t4_g7_g1

0xc2eb,	// (0x0009bc3e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc2eb,	// (0x0009bc3e) list_medium_line_x4_t4_g7_g2

0xc2f7,	// (0x0009bc4a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc2f7,	// (0x0009bc4a) list_medium_line_x4_t4_g7_g3

0xc306,	// (0x0009bc59) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc306,	// (0x0009bc59) list_medium_line_x4_t4_g7_g4

0xc312,	// (0x0009bc65) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc312,	// (0x0009bc65) list_medium_line_x4_t4_g7_g5

0xc321,	// (0x0009bc74) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc321,	// (0x0009bc74) list_medium_line_x4_t4_g7_g6

0xc330,	// (0x0009bc83) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc330,	// (0x0009bc83) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb24,	// (0x0009f477) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb24,	// (0x0009f477) list_medium_line_x4_t4_g7_g

0xc33c,	// (0x0009bc8f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc33c,	// (0x0009bc8f) list_medium_line_x4_t4_g7_t1

0xc351,	// (0x0009bca4) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc351,	// (0x0009bca4) list_medium_line_x4_t4_g7_t2

0xc366,	// (0x0009bcb9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc366,	// (0x0009bcb9) list_medium_line_x4_t4_g7_t3

0xc37b,	// (0x0009bcce) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc37b,	// (0x0009bcce) list_medium_line_x4_t4_g7_t4

0xc38d,	// (0x0009bce0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc38d,	// (0x0009bce0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb33,	// (0x0009f486) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb33,	// (0x0009f486) list_medium_line_x4_t4_g7_t

0xc39f,	// (0x0009bcf2) list_single_dyc_row_pane_ParamLimits

0xc39f,	// (0x0009bcf2) list_single_dyc_row_pane

0x8a72,	// (0x000983c5) call5_gesture_pane_ParamLimits

0x8a72,	// (0x000983c5) call5_gesture_pane

0x8ac8,	// (0x0009841b) call5_windows_pane_ParamLimits

0x8ac8,	// (0x0009841b) call5_windows_pane

0x8b77,	// (0x000984ca) call5_swipe_1_pane_cp_ParamLimits

0x8b77,	// (0x000984ca) call5_swipe_1_pane_cp

0x8b83,	// (0x000984d6) call5_swipe_2_pane_cp_ParamLimits

0x8b83,	// (0x000984d6) call5_swipe_2_pane_cp

0xdb8c,	// (0x0009d4df) call5_image_pane_cp

0x8b8f,	// (0x000984e2) popup_call5_audio_first_window_cp_ParamLimits

0x8b8f,	// (0x000984e2) popup_call5_audio_first_window_cp

0xc8ba,	// (0x0009c20d) call5_swipe_1_pane_g1_cp_ParamLimits

0xc8ba,	// (0x0009c20d) call5_swipe_1_pane_g1_cp

0xc8fa,	// (0x0009c24d) call5_swipe_1_pane_g2_cp

0xc8d3,	// (0x0009c226) call5_swipe_1_pane_t1_cp_ParamLimits

0xc8d3,	// (0x0009c226) call5_swipe_1_pane_t1_cp

0xc8ba,	// (0x0009c20d) call5_swipe_2_pane_g1_cp_ParamLimits

0xc8ba,	// (0x0009c20d) call5_swipe_2_pane_g1_cp

0xc902,	// (0x0009c255) call5_swipe_2_pane_g2_cp

0xc90a,	// (0x0009c25d) call5_swipe_2_pane_t1_cp_ParamLimits

0xc90a,	// (0x0009c25d) call5_swipe_2_pane_t1_cp

0x0df0,	// (0x00090743) main_sp_fs_email_pane

0xc91f,	// (0x0009c272) main_sp_fs_listscroll_pane_te

0xc928,	// (0x0009c27b) popup_sp_fs_action_menu_pane_ParamLimits

0xc928,	// (0x0009c27b) popup_sp_fs_action_menu_pane

0x4e98,	// (0x000947eb) bg_sp_fs_ctrlbar_pane_g1

0xc96e,	// (0x0009c2c1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc977,	// (0x0009c2ca) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc980,	// (0x0009c2d3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4e98,	// (0x000947eb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc1c,	// (0x0009f56f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4ba1,	// (0x000944f4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4ba1,	// (0x000944f4) bg_sp_fs_ctrlbar_ddmenu_pane

0xc989,	// (0x0009c2dc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc989,	// (0x0009c2dc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc995,	// (0x0009c2e8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc995,	// (0x0009c2e8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc25,	// (0x0009f578) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc25,	// (0x0009f578) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a1,	// (0x0009c2f4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc9a1,	// (0x0009c2f4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc9bb,	// (0x0009c30e) list_medium_line_t2_right_icon_g1

0x8b9d,	// (0x000984f0) list_medium_line_t2_right_icon_t1

0x8bad,	// (0x00098500) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2a,	// (0x0009f57d) list_medium_line_t2_right_icon_t

0xef97,	// (0x0009e8ea) bg_sp_fs_ctrlbar_pane_ParamLimits

0xef97,	// (0x0009e8ea) bg_sp_fs_ctrlbar_pane

0x8c07,	// (0x0009855a) main_sp_fs_ctrlbar_button_pane_cp01

0x8c11,	// (0x00098564) main_sp_fs_ctrlbar_ddmenu_pane

0xc9fd,	// (0x0009c350) main_sp_fs_ctrlbar_pane_g1

0xca09,	// (0x0009c35c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc2f,	// (0x0009f582) main_sp_fs_ctrlbar_pane_g

0xca15,	// (0x0009c368) main_sp_fs_ctrlbar_pane_t1

0x8c1b,	// (0x0009856e) main_sp_fs_ctrlbar_pane

0x8c3f,	// (0x00098592) main_sp_fs_listscroll_pane_te_cp01

0x8c5f,	// (0x000985b2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8c5f,	// (0x000985b2) popup_sp_fs_action_menu_pane_cp01

0x0df0,	// (0x00090743) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0df0,	// (0x00090743) bg_sp_fs_highlight_list_pane_cp01

0xca2a,	// (0x0009c37d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca2a,	// (0x0009c37d) sp_fs_action_menu_list_gene_pane_g1

0xca39,	// (0x0009c38c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca39,	// (0x0009c38c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc34,	// (0x0009f587) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc34,	// (0x0009f587) sp_fs_action_menu_list_gene_pane_g

0xca46,	// (0x0009c399) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca46,	// (0x0009c399) sp_fs_action_menu_list_gene_pane_t1

0xca5e,	// (0x0009c3b1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xca5e,	// (0x0009c3b1) sp_fs_action_menu_list_gene_pane

0xca81,	// (0x0009c3d4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca81,	// (0x0009c3d4) popup_sp_fs_action_menu_bg_pane

0xca8f,	// (0x0009c3e2) sp_fs_action_menu_list_pane_ParamLimits

0xca8f,	// (0x0009c3e2) sp_fs_action_menu_list_pane

0xcab3,	// (0x0009c406) sp_fs_scroll_pane_cp01_ParamLimits

0xcab3,	// (0x0009c406) sp_fs_scroll_pane_cp01

0x8c7b,	// (0x000985ce) list_medium_line_plain_t2_t1

0x8c8b,	// (0x000985de) list_medium_line_plain_t2_t2

0x0001,

0xfc39,	// (0x0009f58c) list_medium_line_plain_t2_t

0x8c9b,	// (0x000985ee) list_medium_line_plain_t3_t1

0x8cab,	// (0x000985fe) list_medium_line_plain_t3_t2

0x8cb9,	// (0x0009860c) list_medium_line_plain_t3_t3

0x0002,

0xfc3e,	// (0x0009f591) list_medium_line_plain_t3_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t2_g2_g1

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0009ebbd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0009ebbd) list_medium_line_x2_t2_g2_g

0x2af7,	// (0x0009244a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2af7,	// (0x0009244a) list_medium_line_x2_t2_g2_t1

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc45,	// (0x0009f598) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc45,	// (0x0009f598) list_medium_line_x2_t2_g2_t

0x1ad1,	// (0x00091424) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t4_g2_g1

0xcad9,	// (0x0009c42c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcad9,	// (0x0009c42c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc4a,	// (0x0009f59d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc4a,	// (0x0009f59d) list_medium_line_x2_t4_g2_g

0x8cc7,	// (0x0009861a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8cc7,	// (0x0009861a) list_medium_line_x2_t4_g2_t1

0x8ce1,	// (0x00098634) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8ce1,	// (0x00098634) list_medium_line_x2_t4_g2_t2

0x8cf7,	// (0x0009864a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8cf7,	// (0x0009864a) list_medium_line_x2_t4_g2_t3

0x1b1e,	// (0x00091471) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc4f,	// (0x0009f5a2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc4f,	// (0x0009f5a2) list_medium_line_x2_t4_g2_t

0xcaeb,	// (0x0009c43e) list_medium_line_t3_right_iconx2_g1

0xc9bb,	// (0x0009c30e) list_medium_line_t3_right_iconx2_g2

0x8d0c,	// (0x0009865f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc58,	// (0x0009f5ab) list_medium_line_t3_right_iconx2_g

0x8d16,	// (0x00098669) list_medium_line_t3_right_iconx2_t1

0x8d26,	// (0x00098679) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5f,	// (0x0009f5b2) list_medium_line_t3_right_iconx2_t

0x1ad1,	// (0x00091424) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x3_t4_g4_g1

0x1add,	// (0x00091430) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x3_t4_g4_g2

0x1b85,	// (0x000914d8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b85,	// (0x000914d8) list_medium_line_x3_t4_g4_g3

0xcaf3,	// (0x0009c446) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcaf3,	// (0x0009c446) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc64,	// (0x0009f5b7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc64,	// (0x0009f5b7) list_medium_line_x3_t4_g4_g

0x8d34,	// (0x00098687) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8d34,	// (0x00098687) list_medium_line_x3_t4_g4_t1

0x8d4b,	// (0x0009869e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8d4b,	// (0x0009869e) list_medium_line_x3_t4_g4_t2

0xcaff,	// (0x0009c452) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcaff,	// (0x0009c452) list_medium_line_x3_t4_g4_t3

0xcb14,	// (0x0009c467) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb14,	// (0x0009c467) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc6d,	// (0x0009f5c0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc6d,	// (0x0009f5c0) list_medium_line_x3_t4_g4_t

0x8d66,	// (0x000986b9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8d66,	// (0x000986b9) list_single_dyc_row_text_pane_t1

0x8daf,	// (0x00098702) list_single_dyc_row_text_pane_t2_ParamLimits

0x8daf,	// (0x00098702) list_single_dyc_row_text_pane_t2

0xcb31,	// (0x0009c484) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb31,	// (0x0009c484) list_single_dyc_row_text_pane_t3

0x0002,

0xfc76,	// (0x0009f5c9) list_single_dyc_row_text_pane_t_ParamLimits

0xfc76,	// (0x0009f5c9) list_single_dyc_row_text_pane_t

0xcb43,	// (0x0009c496) list_single_dyc_row_pane_g1_ParamLimits

0xcb43,	// (0x0009c496) list_single_dyc_row_pane_g1

0xcb4f,	// (0x0009c4a2) list_single_dyc_row_pane_g2_ParamLimits

0xcb4f,	// (0x0009c4a2) list_single_dyc_row_pane_g2

0xcb5b,	// (0x0009c4ae) list_single_dyc_row_pane_g3_ParamLimits

0xcb5b,	// (0x0009c4ae) list_single_dyc_row_pane_g3

0xcb67,	// (0x0009c4ba) list_single_dyc_row_pane_g4_ParamLimits

0xcb67,	// (0x0009c4ba) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0009f5d0) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0009f5d0) list_single_dyc_row_pane_g

0xcb73,	// (0x0009c4c6) list_single_dyc_row_text_pane_ParamLimits

0xcb73,	// (0x0009c4c6) list_single_dyc_row_text_pane

0x0b6d,	// (0x000904c0) bg_sp_fs_scroll_pane

0xcb92,	// (0x0009c4e5) thumb_sp_fs_scroll_pane

0xba33,	// (0x0009b386) list_medium_line_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_g1

0xcb9b,	// (0x0009c4ee) list_medium_line_t1_ParamLimits

0xcb9b,	// (0x0009c4ee) list_medium_line_t1

0x1ad1,	// (0x00091424) list_medium_line_x2_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_g1

0x1add,	// (0x00091430) list_medium_line_x2_g2_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_g2

0x0001,

0xfc86,	// (0x0009f5d9) list_medium_line_x2_g_ParamLimits

0xfc86,	// (0x0009f5d9) list_medium_line_x2_g

0xcbb0,	// (0x0009c503) list_medium_line_x2_t1_ParamLimits

0xcbb0,	// (0x0009c503) list_medium_line_x2_t1

0x1ad1,	// (0x00091424) list_medium_line_x3_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x3_g1

0x1add,	// (0x00091430) list_medium_line_x3_g2_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0009f5d9) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0009f5d9) list_medium_line_x3_g

0xcbb0,	// (0x0009c503) list_medium_line_x3_t1_ParamLimits

0xcbb0,	// (0x0009c503) list_medium_line_x3_t1

0xcbc6,	// (0x0009c519) thumb_sp_fs_scroll_pane_g1

0xcbcf,	// (0x0009c522) thumb_sp_fs_scroll_pane_g2

0xcbd8,	// (0x0009c52b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0009f5de) thumb_sp_fs_scroll_pane_g

0xcbc6,	// (0x0009c519) bg_sp_fs_scroll_pane_g1

0xcbcf,	// (0x0009c522) bg_sp_fs_scroll_pane_g2

0xcbd8,	// (0x0009c52b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0009f5de) bg_sp_fs_scroll_pane_g

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ad1,	// (0x00091424) list_medium_line_x2_t3_g4_g1

0x1b79,	// (0x000914cc) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b79,	// (0x000914cc) list_medium_line_x2_t3_g4_g2

0x1add,	// (0x00091430) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1add,	// (0x00091430) list_medium_line_x2_t3_g4_g3

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1ae9,	// (0x0009143c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0009ec39) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0009ec39) list_medium_line_x2_t3_g4_g

0x8e09,	// (0x0009875c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e09,	// (0x0009875c) list_medium_line_x2_t3_g4_t1

0x8e1f,	// (0x00098772) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8e1f,	// (0x00098772) list_medium_line_x2_t3_g4_t2

0x1b1e,	// (0x00091471) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b1e,	// (0x00091471) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc92,	// (0x0009f5e5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc92,	// (0x0009f5e5) list_medium_line_x2_t3_g4_t

0xba33,	// (0x0009b386) list_medium_line_g2_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_g2_g1

0xba3f,	// (0x0009b392) list_medium_line_g2_g2_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_g2_g2

0x0001,

0xf954,	// (0x0009f2a7) list_medium_line_g2_g_ParamLimits

0xf954,	// (0x0009f2a7) list_medium_line_g2_g

0xcbe1,	// (0x0009c534) list_medium_line_g2_t1_ParamLimits

0xcbe1,	// (0x0009c534) list_medium_line_g2_t1

0xba33,	// (0x0009b386) list_medium_line_t3_g2_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t3_g2_g1

0xba3f,	// (0x0009b392) list_medium_line_t3_g2_g2_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_t3_g2_g2

0x0001,

0xf954,	// (0x0009f2a7) list_medium_line_t3_g2_g_ParamLimits

0xf954,	// (0x0009f2a7) list_medium_line_t3_g2_g

0x8e38,	// (0x0009878b) list_medium_line_t3_g2_t1_ParamLimits

0x8e38,	// (0x0009878b) list_medium_line_t3_g2_t1

0x8e4f,	// (0x000987a2) list_medium_line_t3_g2_t2_ParamLimits

0x8e4f,	// (0x000987a2) list_medium_line_t3_g2_t2

0x8e64,	// (0x000987b7) list_medium_line_t3_g2_t3_ParamLimits

0x8e64,	// (0x000987b7) list_medium_line_t3_g2_t3

0x0002,

0xfc99,	// (0x0009f5ec) list_medium_line_t3_g2_t_ParamLimits

0xfc99,	// (0x0009f5ec) list_medium_line_t3_g2_t

0xc9bb,	// (0x0009c30e) list_medium_line_right_icon_g1

0xcbf6,	// (0x0009c549) list_medium_line_right_icon_t1

0xba33,	// (0x0009b386) list_medium_line_t2_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t2_g1

0x8e7d,	// (0x000987d0) list_medium_line_t2_t1_ParamLimits

0x8e7d,	// (0x000987d0) list_medium_line_t2_t1

0x8e97,	// (0x000987ea) list_medium_line_t2_t2_ParamLimits

0x8e97,	// (0x000987ea) list_medium_line_t2_t2

0x0001,

0xfca0,	// (0x0009f5f3) list_medium_line_t2_t_ParamLimits

0xfca0,	// (0x0009f5f3) list_medium_line_t2_t

0xba33,	// (0x0009b386) list_medium_line_t3_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t3_g1

0x8eb0,	// (0x00098803) list_medium_line_t3_t1_ParamLimits

0x8eb0,	// (0x00098803) list_medium_line_t3_t1

0x8ec7,	// (0x0009881a) list_medium_line_t3_t2_ParamLimits

0x8ec7,	// (0x0009881a) list_medium_line_t3_t2

0x8edc,	// (0x0009882f) list_medium_line_t3_t3_ParamLimits

0x8edc,	// (0x0009882f) list_medium_line_t3_t3

0x0002,

0xfca5,	// (0x0009f5f8) list_medium_line_t3_t_ParamLimits

0xfca5,	// (0x0009f5f8) list_medium_line_t3_t

0xba33,	// (0x0009b386) list_medium_line_g3_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_g3_g1

0xcc04,	// (0x0009c557) list_medium_line_g3_g2_ParamLimits

0xcc04,	// (0x0009c557) list_medium_line_g3_g2

0xba3f,	// (0x0009b392) list_medium_line_g3_g3_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_g3_g3

0x0002,

0xfcac,	// (0x0009f5ff) list_medium_line_g3_g_ParamLimits

0xfcac,	// (0x0009f5ff) list_medium_line_g3_g

0xcc10,	// (0x0009c563) list_medium_line_g3_t1_ParamLimits

0xcc10,	// (0x0009c563) list_medium_line_g3_t1

0xba33,	// (0x0009b386) list_medium_line_t2_g3_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t2_g3_g1

0xcc04,	// (0x0009c557) list_medium_line_t2_g3_g2_ParamLimits

0xcc04,	// (0x0009c557) list_medium_line_t2_g3_g2

0xba3f,	// (0x0009b392) list_medium_line_t2_g3_g3_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_t2_g3_g3

0x0002,

0xfcac,	// (0x0009f5ff) list_medium_line_t2_g3_g_ParamLimits

0xfcac,	// (0x0009f5ff) list_medium_line_t2_g3_g

0x8eee,	// (0x00098841) list_medium_line_t2_g3_t1_ParamLimits

0x8eee,	// (0x00098841) list_medium_line_t2_g3_t1

0x8f05,	// (0x00098858) list_medium_line_t2_g3_t2_ParamLimits

0x8f05,	// (0x00098858) list_medium_line_t2_g3_t2

0x0001,

0xfcb3,	// (0x0009f606) list_medium_line_t2_g3_t_ParamLimits

0xfcb3,	// (0x0009f606) list_medium_line_t2_g3_t

0xba33,	// (0x0009b386) list_medium_line_t3_g3_g1_ParamLimits

0xba33,	// (0x0009b386) list_medium_line_t3_g3_g1

0xcc04,	// (0x0009c557) list_medium_line_t3_g3_g2_ParamLimits

0xcc04,	// (0x0009c557) list_medium_line_t3_g3_g2

0xba3f,	// (0x0009b392) list_medium_line_t3_g3_g3_ParamLimits

0xba3f,	// (0x0009b392) list_medium_line_t3_g3_g3

0x0002,

0xfcac,	// (0x0009f5ff) list_medium_line_t3_g3_g_ParamLimits

0xfcac,	// (0x0009f5ff) list_medium_line_t3_g3_g

0x8f1e,	// (0x00098871) list_medium_line_t3_g3_t1_ParamLimits

0x8f1e,	// (0x00098871) list_medium_line_t3_g3_t1

0x8f37,	// (0x0009888a) list_medium_line_t3_g3_t2_ParamLimits

0x8f37,	// (0x0009888a) list_medium_line_t3_g3_t2

0x8f4d,	// (0x000988a0) list_medium_line_t3_g3_t3_ParamLimits

0x8f4d,	// (0x000988a0) list_medium_line_t3_g3_t3

0x0002,

0xfcb8,	// (0x0009f60b) list_medium_line_t3_g3_t_ParamLimits

0xfcb8,	// (0x0009f60b) list_medium_line_t3_g3_t

0xcaeb,	// (0x0009c43e) list_medium_line_right_iconx2_g1

0xc9bb,	// (0x0009c30e) list_medium_line_right_iconx2_g2

0x0001,

0xfcbf,	// (0x0009f612) list_medium_line_right_iconx2_g

0xcc25,	// (0x0009c578) list_medium_line_right_iconx2_t1

0xcaeb,	// (0x0009c43e) list_medium_line_t2_right_iconx2_g1

0xc9bb,	// (0x0009c30e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcbf,	// (0x0009f612) list_medium_line_t2_right_iconx2_g

0x8f67,	// (0x000988ba) list_medium_line_t2_right_iconx2_t1

0x8f77,	// (0x000988ca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcc4,	// (0x0009f617) list_medium_line_t2_right_iconx2_t

0xcc33,	// (0x0009c586) list_medium_line_x4_t4_t1

0x8f89,	// (0x000988dc) list_medium_line_x4_t4_t2

0x8f99,	// (0x000988ec) list_medium_line_x4_t4_t3

0x8fa9,	// (0x000988fc) list_medium_line_x4_t4_t4

0x0003,

0xfcc9,	// (0x0009f61c) list_medium_line_x4_t4_t

0x8ff3,	// (0x00098946) tport_appsw_pane_ParamLimits

0x8ff3,	// (0x00098946) tport_appsw_pane

0x9006,	// (0x00098959) tport_contact_pane_ParamLimits

0x9006,	// (0x00098959) tport_contact_pane

0x9019,	// (0x0009896c) tport_listscroll_pane_ParamLimits

0x9019,	// (0x0009896c) tport_listscroll_pane

0x902f,	// (0x00098982) cell_tport_appsw_pane_ParamLimits

0x902f,	// (0x00098982) cell_tport_appsw_pane

0xb7aa,	// (0x0009b0fd) tport_appsw_pane_g1_ParamLimits

0xb7aa,	// (0x0009b0fd) tport_appsw_pane_g1

0xcc41,	// (0x0009c594) tport_contact_pane_g1

0xcc4a,	// (0x0009c59d) tport_contact_pane_t1

0xcc58,	// (0x0009c5ab) tport_contact_pane_t2

0x0001,

0xfcd2,	// (0x0009f625) tport_contact_pane_t

0xcc66,	// (0x0009c5b9) list_tport_pane

0xcc6f,	// (0x0009c5c2) scroll_pane_cp_030

0x9075,	// (0x000989c8) cell_tport_appsw_pane_g1

0xcc88,	// (0x0009c5db) cell_tport_appsw_pane_t1

0x0b6d,	// (0x000904c0) grid_highlight_pane_cp019

0x9085,	// (0x000989d8) list_tport_double_graphic_pane_ParamLimits

0x9085,	// (0x000989d8) list_tport_double_graphic_pane

0x0df0,	// (0x00090743) list_highlight_pane_cp023_ParamLimits

0x0df0,	// (0x00090743) list_highlight_pane_cp023

0x9095,	// (0x000989e8) list_tport_double_graphic_pane_g1_ParamLimits

0x9095,	// (0x000989e8) list_tport_double_graphic_pane_g1

0x90a2,	// (0x000989f5) list_tport_double_graphic_pane_t1_ParamLimits

0x90a2,	// (0x000989f5) list_tport_double_graphic_pane_t1

0x90b7,	// (0x00098a0a) list_tport_double_graphic_pane_t2_ParamLimits

0x90b7,	// (0x00098a0a) list_tport_double_graphic_pane_t2

0x0001,

0xfcde,	// (0x0009f631) list_tport_double_graphic_pane_t_ParamLimits

0xfcde,	// (0x0009f631) list_tport_double_graphic_pane_t

0x0b6d,	// (0x000904c0) main_cale_note_pane

0x6d3f,	// (0x00096692) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d3f,	// (0x00096692) cell_vitu2_function_top_wide_pane_cp01

0x8653,	// (0x00097fa6) wait_bar_pane_cp05_ParamLimits

0x0b6d,	// (0x000904c0) listscroll_cmail_pane

0xcc9e,	// (0x0009c5f1) list_cmail_pane

0x90d3,	// (0x00098a26) list_cmail_body_pane

0x90eb,	// (0x00098a3e) list_single_cmail_header_caption_pane

0x9108,	// (0x00098a5b) list_single_cmail_header_detail_pane_ParamLimits

0x9108,	// (0x00098a5b) list_single_cmail_header_detail_pane

0x913a,	// (0x00098a8d) list_single_cmail_header_caption_pane_t1

0x914a,	// (0x00098a9d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x914a,	// (0x00098a9d) list_single_cmail_header_detail_pane_g1

0xccbe,	// (0x0009c611) list_single_cmail_header_detail_pane_g2_ParamLimits

0xccbe,	// (0x0009c611) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce3,	// (0x0009f636) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce3,	// (0x0009f636) list_single_cmail_header_detail_pane_g

0xccd7,	// (0x0009c62a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xccd7,	// (0x0009c62a) list_single_cmail_header_detail_pane_t1

0xcd15,	// (0x0009c668) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd15,	// (0x0009c668) list_single_cmail_header_editor_pane_bg

0xc649,	// (0x0009bf9c) list_cmail_body_pane_g1

0xcd27,	// (0x0009c67a) list_cmail_body_pane_t1

0xb7e7,	// (0x0009b13a) list_single_cmail_header_editor_pane_bg_g1

0xaa25,	// (0x0009a378) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb7f7,	// (0x0009b14a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb7ef,	// (0x0009b142) list_single_cmail_header_editor_pane_bg_g1_copy3

0xba2b,	// (0x0009b37e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb817,	// (0x0009b16a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb807,	// (0x0009b15a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb80f,	// (0x0009b162) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaa05,	// (0x0009a358) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9188,	// (0x00098adb) calenote_gesture_pane_ParamLimits

0x9188,	// (0x00098adb) calenote_gesture_pane

0x91a8,	// (0x00098afb) calenote_window_pane_ParamLimits

0x91a8,	// (0x00098afb) calenote_window_pane

0xcd35,	// (0x0009c688) popup_note_window_cp01

0x91c4,	// (0x00098b17) calenote_swipe_1_pane_ParamLimits

0x91c4,	// (0x00098b17) calenote_swipe_1_pane

0x8b83,	// (0x000984d6) calenote_swipe_2_pane_ParamLimits

0x8b83,	// (0x000984d6) calenote_swipe_2_pane

0xc8ba,	// (0x0009c20d) calenote_swipe_1_pane_g1_ParamLimits

0xc8ba,	// (0x0009c20d) calenote_swipe_1_pane_g1

0xc8c7,	// (0x0009c21a) calenote_swipe_1_pane_g2_ParamLimits

0xc8c7,	// (0x0009c21a) calenote_swipe_1_pane_g2

0x0001,

0xfc12,	// (0x0009f565) calenote_swipe_1_pane_g_ParamLimits

0xfc12,	// (0x0009f565) calenote_swipe_1_pane_g

0xcd47,	// (0x0009c69a) calenote_swipe_1_pane_t1_ParamLimits

0xcd47,	// (0x0009c69a) calenote_swipe_1_pane_t1

0xc8ba,	// (0x0009c20d) calenote_swipe_2_pane_g1_ParamLimits

0xc8ba,	// (0x0009c20d) calenote_swipe_2_pane_g1

0xcd66,	// (0x0009c6b9) calenote_swipe_2_pane_g2_ParamLimits

0xcd66,	// (0x0009c6b9) calenote_swipe_2_pane_g2

0x0001,

0xfcef,	// (0x0009f642) calenote_swipe_2_pane_g_ParamLimits

0xfcef,	// (0x0009f642) calenote_swipe_2_pane_g

0xcd72,	// (0x0009c6c5) calenote_swipe_2_pane_t1_ParamLimits

0xcd72,	// (0x0009c6c5) calenote_swipe_2_pane_t1

0x0b6d,	// (0x000904c0) main_mup_navstr_pane

0x584e,	// (0x000951a1) main_mup3_pane_t7_ParamLimits

0x584e,	// (0x000951a1) main_mup3_pane_t7

0xb494,	// (0x0009ade7) main_mp4_pane_g6_ParamLimits

0xb494,	// (0x0009ade7) main_mp4_pane_g6

0xd8ea,	// (0x0009d23d) main_image3_pane_t4_ParamLimits

0xd8ea,	// (0x0009d23d) main_image3_pane_t4

0x91d9,	// (0x00098b2c) popup_navstr_preview_pane_ParamLimits

0x91d9,	// (0x00098b2c) popup_navstr_preview_pane

0x91e9,	// (0x00098b3c) scroll_navstr_pane_ParamLimits

0x91e9,	// (0x00098b3c) scroll_navstr_pane

0x0b6d,	// (0x000904c0) bg_popup_preview_window_pane_cp04

0xcd99,	// (0x0009c6ec) popup_navstr_preview_pane_t1

0x91fd,	// (0x00098b50) scroll_navstr_pane_g1_ParamLimits

0x91fd,	// (0x00098b50) scroll_navstr_pane_g1

0x9211,	// (0x00098b64) scroll_navstr_pane_t1_ParamLimits

0x9211,	// (0x00098b64) scroll_navstr_pane_t1

0xcd3e,	// (0x0009c691) bg_button_pane_cp014

0xcd3e,	// (0x0009c691) bg_button_pane_cp030

0xc85b,	// (0x0009c1ae) list_double_fisheye_pane_g4_ParamLimits

0xc85b,	// (0x0009c1ae) list_double_fisheye_pane_g4

0xc867,	// (0x0009c1ba) list_double_fisheye_pane_g5_ParamLimits

0xc867,	// (0x0009c1ba) list_double_fisheye_pane_g5

0xcca6,	// (0x0009c5f9) sp_fs_scroll_pane_cp03

0xc9fd,	// (0x0009c350) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca09,	// (0x0009c35c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc2f,	// (0x0009f582) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca15,	// (0x0009c368) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x90c9,	// (0x00098a1c) sp_fs_scroll_pane_cp02

0xa6c7,	// (0x0009a01a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa6c7,	// (0x0009a01a) popup_sp_fs_calendar_preview_list_single_pane

0x0b6d,	// (0x000904c0) main_cam6_pano_pane

0x0df0,	// (0x00090743) main_mup3_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_phacti_pane

0x8524,	// (0x00097e77) bg_button_pane_cp11

0x853e,	// (0x00097e91) main_mobtv_info_pane_g2_ParamLimits

0x853e,	// (0x00097e91) main_mobtv_info_pane_g2

0x0001,

0xfb8f,	// (0x0009f4e2) main_mobtv_info_pane_g_ParamLimits

0xfb8f,	// (0x0009f4e2) main_mobtv_info_pane_g

0x871b,	// (0x0009806e) sc_clock_pane_t5_ParamLimits

0x871b,	// (0x0009806e) sc_clock_pane_t5

0x88d0,	// (0x00098223) main_radioblah_pane_g1_ParamLimits

0xc7af,	// (0x0009c102) main_radioblah_pane_t3_ParamLimits

0xc7af,	// (0x0009c102) main_radioblah_pane_t3

0xc7c7,	// (0x0009c11a) main_radioblah_pane_t4_ParamLimits

0xc7c7,	// (0x0009c11a) main_radioblah_pane_t4

0x88f8,	// (0x0009824b) main_radioblah_text_pane_ParamLimits

0x88f8,	// (0x0009824b) main_radioblah_text_pane

0x890a,	// (0x0009825d) main_radioblah_info_pane_g1_ParamLimits

0x89a3,	// (0x000982f6) main_radioblah_info_pane_t4_ParamLimits

0x89a3,	// (0x000982f6) main_radioblah_info_pane_t4

0x0df0,	// (0x00090743) main_sp_fs_calendar_pane

0x9228,	// (0x00098b7b) main_phacti_pane_g1

0x9230,	// (0x00098b83) phacti_note_pane_ParamLimits

0x9230,	// (0x00098b83) phacti_note_pane

0xcdb0,	// (0x0009c703) phacti_term_pane_ParamLimits

0xcdb0,	// (0x0009c703) phacti_term_pane

0xcdc5,	// (0x0009c718) phacti_note_pane_t1_ParamLimits

0xcdc5,	// (0x0009c718) phacti_note_pane_t1

0xcddc,	// (0x0009c72f) phacti_term_pane_g1

0xcde4,	// (0x0009c737) phacti_term_pane_t1_ParamLimits

0xcde4,	// (0x0009c737) phacti_term_pane_t1

0xce0e,	// (0x0009c761) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce16,	// (0x0009c769) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcf9,	// (0x0009f64c) popup_sp_fs_calendar_preview_list_single_pane_g

0xce1e,	// (0x0009c771) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce1e,	// (0x0009c771) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce34,	// (0x0009c787) aid_popup_sp_fs_bg_corner_pane

0x4e98,	// (0x000947eb) popup_sp_fs_calendar_preview_bg_pane_g1

0x0b6d,	// (0x000904c0) popup_sp_fs_calendar_preview_bg_pane

0xce3c,	// (0x0009c78f) popup_sp_fs_calendar_preview_list_pane

0x0df0,	// (0x00090743) bg_main_sp_fs_cale_pane_ParamLimits

0x0df0,	// (0x00090743) bg_main_sp_fs_cale_pane

0xce4d,	// (0x0009c7a0) listscroll_cale_mrui_pane_ParamLimits

0xce4d,	// (0x0009c7a0) listscroll_cale_mrui_pane

0xce61,	// (0x0009c7b4) listscroll_sp_fs_schedule_track_pane

0xce6a,	// (0x0009c7bd) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce6a,	// (0x0009c7bd) main_sp_fs_ctrlbar_pane_cp01

0xce7b,	// (0x0009c7ce) main_sp_fs_ribbon_pane

0xce83,	// (0x0009c7d6) popup_sp_fs_cale_preview_window

0x9287,	// (0x00098bda) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9287,	// (0x00098bda) list_single_sp_fs_schedule_track_pane

0x0df0,	// (0x00090743) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0df0,	// (0x00090743) bg_sp_fs_highlight_list_pane_cp03

0x929a,	// (0x00098bed) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x929a,	// (0x00098bed) list_single_sp_fs_schedule_track_pane_g1

0x92a6,	// (0x00098bf9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x92a6,	// (0x00098bf9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcfe,	// (0x0009f651) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcfe,	// (0x0009f651) list_single_sp_fs_schedule_track_pane_g

0x92b2,	// (0x00098c05) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x92b2,	// (0x00098c05) list_single_sp_fs_schedule_track_pane_t1

0x92d4,	// (0x00098c27) sp_fs_schedule_track_pane_ParamLimits

0x92d4,	// (0x00098c27) sp_fs_schedule_track_pane

0xce95,	// (0x0009c7e8) sp_fs_schedule_track_pane_g1

0xce9d,	// (0x0009c7f0) sp_fs_schedule_track_pane_g2

0xcea5,	// (0x0009c7f8) sp_fs_schedule_track_pane_g3

0xcead,	// (0x0009c800) sp_fs_schedule_track_pane_g4

0xceb5,	// (0x0009c808) sp_fs_schedule_track_pane_g5

0x0004,

0xfd03,	// (0x0009f656) sp_fs_schedule_track_pane_g

0xb7e7,	// (0x0009b13a) bg_sp_fs_schedule_viewer_highlight_g1

0xaa25,	// (0x0009a378) bg_sp_fs_schedule_viewer_highlight_g2

0xb7ef,	// (0x0009b142) bg_sp_fs_schedule_viewer_highlight_g3

0xb7f7,	// (0x0009b14a) bg_sp_fs_schedule_viewer_highlight_g4

0xba2b,	// (0x0009b37e) bg_sp_fs_schedule_viewer_highlight_g5

0xb807,	// (0x0009b15a) bg_sp_fs_schedule_viewer_highlight_g6

0xb80f,	// (0x0009b162) bg_sp_fs_schedule_viewer_highlight_g7

0xb817,	// (0x0009b16a) bg_sp_fs_schedule_viewer_highlight_g8

0xaa05,	// (0x0009a358) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0e,	// (0x0009f661) bg_sp_fs_schedule_viewer_highlight_g

0x0b6d,	// (0x000904c0) bg_main_sp_fs_ribbon_pane

0x92e9,	// (0x00098c3c) main_sp_fs_ribbon_pane_g1

0xcebd,	// (0x0009c810) main_sp_fs_ribbon_pane_t1

0x92f2,	// (0x00098c45) main_sp_fs_ribbon_pane_t2

0xcecc,	// (0x0009c81f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd21,	// (0x0009f674) main_sp_fs_ribbon_pane_t

0xcedb,	// (0x0009c82e) main_sp_fs_ribbon_scheduler_pane

0xcee3,	// (0x0009c836) bg_main_sp_fs_ribbon_pane_g1

0xceec,	// (0x0009c83f) bg_main_sp_fs_ribbon_pane_g2

0xcef5,	// (0x0009c848) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd28,	// (0x0009f67b) bg_main_sp_fs_ribbon_pane_g

0xcefd,	// (0x0009c850) main_sp_fs_ribbon_scheduler_pane_g1

0xcf06,	// (0x0009c859) main_sp_fs_ribbon_scheduler_pane_g2

0xcf0f,	// (0x0009c862) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd2f,	// (0x0009f682) main_sp_fs_ribbon_scheduler_pane_g

0xcf18,	// (0x0009c86b) list_cale_mrui_pane

0x9301,	// (0x00098c54) sp_fs_scroll_pane_cp07_ParamLimits

0x9301,	// (0x00098c54) sp_fs_scroll_pane_cp07

0x9317,	// (0x00098c6a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9317,	// (0x00098c6a) bg_sp_fs_schedule_viewer_highlight

0xcf21,	// (0x0009c874) list_single_sp_fs_schedule_track_pane_cp01

0xcf29,	// (0x0009c87c) list_sp_fs_schedule_track_pane

0xcf31,	// (0x0009c884) sp_fs_scroll_pane_cp06_ParamLimits

0xcf31,	// (0x0009c884) sp_fs_scroll_pane_cp06

0x4e98,	// (0x000947eb) bgmain_sp_fs_calendar_pane_g1

0xcf43,	// (0x0009c896) list_single_cale_mrui_pane_ParamLimits

0xcf43,	// (0x0009c896) list_single_cale_mrui_pane

0xcf67,	// (0x0009c8ba) list_single_cale_mrui_row_pane_ParamLimits

0xcf67,	// (0x0009c8ba) list_single_cale_mrui_row_pane

0xcf74,	// (0x0009c8c7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf74,	// (0x0009c8c7) list_single_cale_mrui_row_pane_g1

0xcfac,	// (0x0009c8ff) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcfac,	// (0x0009c8ff) list_single_cale_mrui_row_pane_t1

0x9329,	// (0x00098c7c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9329,	// (0x00098c7c) list_single_cale_mrui_row_pane_t2

0xcfbe,	// (0x0009c911) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcfbe,	// (0x0009c911) list_single_cale_mrui_row_pane_t3

0xcfed,	// (0x0009c940) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcfed,	// (0x0009c940) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd3b,	// (0x0009f68e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd3b,	// (0x0009f68e) list_single_cale_mrui_row_pane_t

0x938f,	// (0x00098ce2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x938f,	// (0x00098ce2) list_single_cmail_header_editor_pane_bg_cp01

0x93b3,	// (0x00098d06) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x93b3,	// (0x00098d06) list_single_cmail_header_editor_pane_bg_cp02

0x93d1,	// (0x00098d24) main_radioblah_text_pane_t1_ParamLimits

0x93d1,	// (0x00098d24) main_radioblah_text_pane_t1

0xd01c,	// (0x0009c96f) cam6_indi_pane_cp01

0xd024,	// (0x0009c977) cam6_mode_pane_cp01

0xd02c,	// (0x0009c97f) cam6_pano_pane

0xd035,	// (0x0009c988) cam6_zoom_pane_cp01

0xd03f,	// (0x0009c992) cam6_pano_image_pane

0xd048,	// (0x0009c99b) cam6_pano_pane_g1

0xc649,	// (0x0009bf9c) cam6_pano_pane_g2

0xd051,	// (0x0009c9a4) cam6_pano_pane_g3

0xd05a,	// (0x0009c9ad) cam6_pano_pane_g4

0xb111,	// (0x0009aa64) cam6_pano_pane_g5

0xd063,	// (0x0009c9b6) cam6_pano_pane_g6

0xd06b,	// (0x0009c9be) cam6_pano_pane_g7

0xd073,	// (0x0009c9c6) cam6_pano_pane_g8

0xd07c,	// (0x0009c9cf) cam6_pano_pane_g9

0x0008,

0xfd44,	// (0x0009f697) cam6_pano_pane_g

0x0b6d,	// (0x000904c0) main_browser_tag_pane

0xcd91,	// (0x0009c6e4) grid_navstr_albumart_pane

0xd087,	// (0x0009c9da) cell_navstr_albumart_pane_ParamLimits

0xd087,	// (0x0009c9da) cell_navstr_albumart_pane

0xd0a3,	// (0x0009c9f6) cell_navstr_albumart_pane_g1

0xedb0,	// (0x0009e703) cell_navstr_albumart_pane_g2

0xedc0,	// (0x0009e713) cell_navstr_albumart_pane_g3

0xedb8,	// (0x0009e70b) cell_navstr_albumart_pane_g4

0x0003,

0xfd57,	// (0x0009f6aa) cell_navstr_albumart_pane_g

0x93ec,	// (0x00098d3f) bt_list_pane_ParamLimits

0x93ec,	// (0x00098d3f) bt_list_pane

0x9402,	// (0x00098d55) bt_list_pane_t1

0x9411,	// (0x00098d64) bt_list_pane_t2

0x0001,

0xfd60,	// (0x0009f6b3) bt_list_pane_t

0x0b6d,	// (0x000904c0) main_cale_prevew_pane

0x9420,	// (0x00098d73) popup_cale_preview_window_ParamLimits

0x9420,	// (0x00098d73) popup_cale_preview_window

0x0df0,	// (0x00090743) bg_popup_preview_window_pane_cp05_ParamLimits

0x0df0,	// (0x00090743) bg_popup_preview_window_pane_cp05

0xd0ab,	// (0x0009c9fe) list_cale_preview_pane_ParamLimits

0xd0ab,	// (0x0009c9fe) list_cale_preview_pane

0x943b,	// (0x00098d8e) list_double_cale_preview_pane_ParamLimits

0x943b,	// (0x00098d8e) list_double_cale_preview_pane

0x944f,	// (0x00098da2) list_single_cale_preview_pane_ParamLimits

0x944f,	// (0x00098da2) list_single_cale_preview_pane

0x9467,	// (0x00098dba) list_single_cale_preview_pane_g1

0x946f,	// (0x00098dc2) list_single_cale_preview_pane_t1_ParamLimits

0x946f,	// (0x00098dc2) list_single_cale_preview_pane_t1

0x9484,	// (0x00098dd7) list_double_cale_preview_pane_g1

0x948c,	// (0x00098ddf) list_double_cale_preview_pane_t1_ParamLimits

0x948c,	// (0x00098ddf) list_double_cale_preview_pane_t1

0x94a1,	// (0x00098df4) list_double_cale_preview_pane_t2_ParamLimits

0x94a1,	// (0x00098df4) list_double_cale_preview_pane_t2

0x0001,

0xfd65,	// (0x0009f6b8) list_double_cale_preview_pane_t_ParamLimits

0xfd65,	// (0x0009f6b8) list_double_cale_preview_pane_t

0x0b6d,	// (0x000904c0) main_ezdial_pane

0x0df0,	// (0x00090743) main_sp_fs_email_pane_ParamLimits

0x8bbf,	// (0x00098512) cmail_ddmenu_btn01_pane_ParamLimits

0x8bbf,	// (0x00098512) cmail_ddmenu_btn01_pane

0x8bd2,	// (0x00098525) cmail_ddmenu_btn02_pane_ParamLimits

0x8bd2,	// (0x00098525) cmail_ddmenu_btn02_pane

0x8bf5,	// (0x00098548) cmail_ddmenu_btn03_pane_ParamLimits

0x8bf5,	// (0x00098548) cmail_ddmenu_btn03_pane

0x8c1b,	// (0x0009856e) main_sp_fs_ctrlbar_pane_ParamLimits

0x8c3f,	// (0x00098592) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x90d3,	// (0x00098a26) list_cmail_body_pane_ParamLimits

0xccb5,	// (0x0009c608) bg_button_pane_cp12

0xccca,	// (0x0009c61d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xccca,	// (0x0009c61d) list_single_cmail_header_detail_pane_g3

0x9162,	// (0x00098ab5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9162,	// (0x00098ab5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcea,	// (0x0009f63d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcea,	// (0x0009f63d) list_single_cmail_header_detail_pane_t

0xcdf9,	// (0x0009c74c) phacti_term_pane_t2_ParamLimits

0xcdf9,	// (0x0009c74c) phacti_term_pane_t2

0x0001,

0xfcf4,	// (0x0009f647) phacti_term_pane_t_ParamLimits

0xfcf4,	// (0x0009f647) phacti_term_pane_t

0xd0b7,	// (0x0009ca0a) aid_size_list_single_double

0x94b9,	// (0x00098e0c) popup_ezdial_listscroll_window

0x94d5,	// (0x00098e28) popup_number_entry_window_cp01

0xdb8c,	// (0x0009d4df) bg_popup_call_pane_cp09

0xd0c3,	// (0x0009ca16) ezdial_list_pane

0xd0cb,	// (0x0009ca1e) scroll_pane_cp23

0xef97,	// (0x0009e8ea) bg_button_pane_cp028_ParamLimits

0xef97,	// (0x0009e8ea) bg_button_pane_cp028

0x94e3,	// (0x00098e36) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x94e3,	// (0x00098e36) cmail_ddmenu_btn01_pane_g1

0x94ef,	// (0x00098e42) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x94ef,	// (0x00098e42) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd6a,	// (0x0009f6bd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd6a,	// (0x0009f6bd) cmail_ddmenu_btn01_pane_g

0xd0d3,	// (0x0009ca26) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd0d3,	// (0x0009ca26) cmail_ddmenu_btn01_pane_t1

0xef97,	// (0x0009e8ea) bg_button_pane_cp029_ParamLimits

0xef97,	// (0x0009e8ea) bg_button_pane_cp029

0x94fb,	// (0x00098e4e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x94fb,	// (0x00098e4e) cmail_ddmenu_btn02_pane_g1

0x9513,	// (0x00098e66) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9513,	// (0x00098e66) cmail_ddmenu_btn02_pane_t1

0x0df0,	// (0x00090743) bg_button_pane_cp031_ParamLimits

0x0df0,	// (0x00090743) bg_button_pane_cp031

0x94fb,	// (0x00098e4e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x94fb,	// (0x00098e4e) cmail_ddmenu_btn03_pane_g1

0x9513,	// (0x00098e66) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9513,	// (0x00098e66) cmail_ddmenu_btn03_pane_t1

0x658b,	// (0x00095ede) cell_dialer2_keypad_pane_t1_ParamLimits

0x65a5,	// (0x00095ef8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x65a5,	// (0x00095ef8) cell_dialer2_keypad_pane_t1_copy1

0x83a4,	// (0x00097cf7) ncimui_group_button_pane

0x0df0,	// (0x00090743) main_sp_fs_calendar_pane_ParamLimits

0x90eb,	// (0x00098a3e) list_single_cmail_header_caption_pane_ParamLimits

0xce44,	// (0x0009c797) aid_recal_txt_sm_pane

0x0b6d,	// (0x000904c0) mian_recal_day_pane

0xce83,	// (0x0009c7d6) popup_sp_fs_cale_preview_window_ParamLimits

0x0b6d,	// (0x000904c0) list_recal_day_pane

0xd101,	// (0x0009ca54) list_single_recal_day_pane_ParamLimits

0xd101,	// (0x0009ca54) list_single_recal_day_pane

0xd113,	// (0x0009ca66) list_single_recal_day_pane_g1_ParamLimits

0xd113,	// (0x0009ca66) list_single_recal_day_pane_g1

0xd11f,	// (0x0009ca72) list_single_recal_day_pane_g2_ParamLimits

0xd11f,	// (0x0009ca72) list_single_recal_day_pane_g2

0xd12b,	// (0x0009ca7e) list_single_recal_day_pane_g3_ParamLimits

0xd12b,	// (0x0009ca7e) list_single_recal_day_pane_g3

0x9537,	// (0x00098e8a) list_single_recal_day_pane_g4_ParamLimits

0x9537,	// (0x00098e8a) list_single_recal_day_pane_g4

0xd137,	// (0x0009ca8a) list_single_recal_day_pane_g5_ParamLimits

0xd137,	// (0x0009ca8a) list_single_recal_day_pane_g5

0xd143,	// (0x0009ca96) list_single_recal_day_pane_g6_ParamLimits

0xd143,	// (0x0009ca96) list_single_recal_day_pane_g6

0x0005,

0xfd79,	// (0x0009f6cc) list_single_recal_day_pane_g_ParamLimits

0xfd79,	// (0x0009f6cc) list_single_recal_day_pane_g

0xd14f,	// (0x0009caa2) list_single_recal_day_pane_t1

0xd15d,	// (0x0009cab0) list_single_recal_day_pane_t2

0x0001,

0xfd86,	// (0x0009f6d9) list_single_recal_day_pane_t

0x9545,	// (0x00098e98) ncimui_query_button_pane_ParamLimits

0x9545,	// (0x00098e98) ncimui_query_button_pane

0x9555,	// (0x00098ea8) ncimui_query_button_pane_t1_ParamLimits

0x9555,	// (0x00098ea8) ncimui_query_button_pane_t1

0xd16b,	// (0x0009cabe) ncimui_query_button_pane_t2_ParamLimits

0xd16b,	// (0x0009cabe) ncimui_query_button_pane_t2

0x0001,

0xfd8b,	// (0x0009f6de) ncimui_query_button_pane_t_ParamLimits

0xfd8b,	// (0x0009f6de) ncimui_query_button_pane_t

0x9568,	// (0x00098ebb) query_button_pane_ParamLimits

0x9568,	// (0x00098ebb) query_button_pane

0x0b6d,	// (0x000904c0) bg_button_pane_cp0028

0xd17e,	// (0x0009cad1) query_button_pane_t1

0x3e66,	// (0x000937b9) main_tport_pane_ParamLimits

0x8fb9,	// (0x0009890c) bg_popup_window_pane_cp01_ParamLimits

0x8fb9,	// (0x0009890c) bg_popup_window_pane_cp01

0x8fcf,	// (0x00098922) heading_pane_cp08_ParamLimits

0x8fcf,	// (0x00098922) heading_pane_cp08

0x8fe0,	// (0x00098933) heading_pane_cp07_ParamLimits

0x8fe0,	// (0x00098933) heading_pane_cp07

0xcc80,	// (0x0009c5d3) cell_tport_appsw_pane_g2

0x0002,

0xfcd7,	// (0x0009f62a) cell_tport_appsw_pane_g

0x33b4,	// (0x00092d07) input_candi_list_open_g1

0xabee,	// (0x0009a541) list_cale_time_pane_g6_ParamLimits

0xabee,	// (0x0009a541) list_cale_time_pane_g6

0x520f,	// (0x00094b62) aid_size_touch_calib_1_ParamLimits

0x520f,	// (0x00094b62) aid_size_touch_calib_1

0x521b,	// (0x00094b6e) aid_size_touch_calib_2_ParamLimits

0x521b,	// (0x00094b6e) aid_size_touch_calib_2

0x5231,	// (0x00094b84) aid_size_touch_calib_3_ParamLimits

0x5231,	// (0x00094b84) aid_size_touch_calib_3

0x524f,	// (0x00094ba2) aid_size_touch_calib_4_ParamLimits

0x524f,	// (0x00094ba2) aid_size_touch_calib_4

0x5265,	// (0x00094bb8) main_touch_calib_button_group_pane_ParamLimits

0x5265,	// (0x00094bb8) main_touch_calib_button_group_pane

0x527d,	// (0x00094bd0) main_touch_calib_pane_g1_ParamLimits

0x5289,	// (0x00094bdc) main_touch_calib_pane_g2_ParamLimits

0x5295,	// (0x00094be8) main_touch_calib_pane_g3_ParamLimits

0x52a1,	// (0x00094bf4) main_touch_calib_pane_g4_ParamLimits

0xf6b1,	// (0x0009f004) main_touch_calib_pane_g_ParamLimits

0x52ad,	// (0x00094c00) main_touch_calib_pane_t1_ParamLimits

0x52c7,	// (0x00094c1a) main_touch_calib_pane_t2_ParamLimits

0x52e1,	// (0x00094c34) main_touch_calib_pane_t3_ParamLimits

0x52f5,	// (0x00094c48) main_touch_calib_pane_t4_ParamLimits

0x5309,	// (0x00094c5c) main_touch_calib_pane_t5_ParamLimits

0xf6ba,	// (0x0009f00d) main_touch_calib_pane_t_ParamLimits

0x5add,	// (0x00095430) list_single_fp_cale_pane_g3_ParamLimits

0x5add,	// (0x00095430) list_single_fp_cale_pane_g3

0xd9b1,	// (0x0009d304) bg_button_pane_cp012_ParamLimits

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp03_ParamLimits

0x757d,	// (0x00096ed0) cell_vitu2_function_top_pane_g1_ParamLimits

0xd9b1,	// (0x0009d304) bg_vkb2_func_pane_cp04_ParamLimits

0x8344,	// (0x00097c97) main_ncimui_button_group_pane_ParamLimits

0x8344,	// (0x00097c97) main_ncimui_button_group_pane

0x8392,	// (0x00097ce5) main_ncimui_pane_t3_ParamLimits

0x8392,	// (0x00097ce5) main_ncimui_pane_t3

0xcda7,	// (0x0009c6fa) phacti_button_group_pane

0xd0b7,	// (0x0009ca0a) aid_size_list_single_double_ParamLimits

0x94b9,	// (0x00098e0c) popup_ezdial_listscroll_window_ParamLimits

0x94d5,	// (0x00098e28) popup_number_entry_window_cp01_ParamLimits

0x957b,	// (0x00098ece) phacti_button_pane_ParamLimits

0x957b,	// (0x00098ece) phacti_button_pane

0x0b6d,	// (0x000904c0) bg_button_pane_cp14

0xd18c,	// (0x0009cadf) phacti_button_pane_t1

0x958c,	// (0x00098edf) main_touch_calib_button_pane_ParamLimits

0x958c,	// (0x00098edf) main_touch_calib_button_pane

0xa524,	// (0x00099e77) bg_button_pane_cp18_ParamLimits

0xa524,	// (0x00099e77) bg_button_pane_cp18

0xd19a,	// (0x0009caed) main_touch_calib_button_pane_t1_ParamLimits

0xd19a,	// (0x0009caed) main_touch_calib_button_pane_t1

0xd1b0,	// (0x0009cb03) main_touch_calib_button_pane_t2_ParamLimits

0xd1b0,	// (0x0009cb03) main_touch_calib_button_pane_t2

0x0001,

0xfd90,	// (0x0009f6e3) main_touch_calib_button_pane_t_ParamLimits

0xfd90,	// (0x0009f6e3) main_touch_calib_button_pane_t

0x0b6d,	// (0x000904c0) cell_ncimui_button_pane

0x0b6d,	// (0x000904c0) bg_button_pane_cp032

0xd1ce,	// (0x0009cb21) cell_ncimui_button_pane_t1

0xd8c8,	// (0x0009d21b) image3_infobar_pane_ParamLimits

0xd8c8,	// (0x0009d21b) image3_infobar_pane

0x8747,	// (0x0009809a) fs_bigclock_status_pane_ParamLimits

0x8747,	// (0x0009809a) fs_bigclock_status_pane

0x8754,	// (0x000980a7) main_fs_bigclock_clock_pane_ParamLimits

0x8754,	// (0x000980a7) main_fs_bigclock_clock_pane

0x8767,	// (0x000980ba) main_fs_bigclock_indi_pane_ParamLimits

0x8767,	// (0x000980ba) main_fs_bigclock_indi_pane

0x8785,	// (0x000980d8) main_fs_bigclock_swipe_pane_ParamLimits

0x8785,	// (0x000980d8) main_fs_bigclock_swipe_pane

0x0b6d,	// (0x000904c0) main_fs_clock_dumped_data

0x87a6,	// (0x000980f9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x87a6,	// (0x000980f9) list_single_fs_bigclock_indicator_pane_g1

0x87c6,	// (0x00098119) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x87c6,	// (0x00098119) list_single_fs_bigclock_indicator_pane_g2

0x87e0,	// (0x00098133) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x87e0,	// (0x00098133) list_single_fs_bigclock_indicator_pane_g3

0x87fc,	// (0x0009814f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x87fc,	// (0x0009814f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc3,	// (0x0009f516) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc3,	// (0x0009f516) list_single_fs_bigclock_indicator_pane_g

0x8822,	// (0x00098175) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8822,	// (0x00098175) list_single_fs_bigclock_indicator_pane_t1

0x884a,	// (0x0009819d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x884a,	// (0x0009819d) list_single_fs_bigclock_indicator_pane_t2

0x8872,	// (0x000981c5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8872,	// (0x000981c5) list_single_fs_bigclock_indicator_pane_t3

0x889c,	// (0x000981ef) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x889c,	// (0x000981ef) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbce,	// (0x0009f521) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbce,	// (0x0009f521) list_single_fs_bigclock_indicator_pane_t

0xd1dc,	// (0x0009cb2f) image3_infobar_fav_pane_ParamLimits

0xd1dc,	// (0x0009cb2f) image3_infobar_fav_pane

0xd1ec,	// (0x0009cb3f) image3_infobar_loc_pane_ParamLimits

0xd1ec,	// (0x0009cb3f) image3_infobar_loc_pane

0xd202,	// (0x0009cb55) image3_infobar_time_pane_ParamLimits

0xd202,	// (0x0009cb55) image3_infobar_time_pane

0x4e98,	// (0x000947eb) image3_infobar_time_pane_g1

0xd212,	// (0x0009cb65) image3_infobar_time_pane_t1

0x4e98,	// (0x000947eb) image3_infobar_loc_pane_g1

0xd220,	// (0x0009cb73) image3_infobar_loc_pane_g2

0x0001,

0xfd95,	// (0x0009f6e8) image3_infobar_loc_pane_g

0xd228,	// (0x0009cb7b) image3_infobar_loc_pane_t1

0x4e98,	// (0x000947eb) image3_infobar_fav_pane_g1

0xd236,	// (0x0009cb89) image3_infobar_fav_pane_g2

0x0001,

0xfd9a,	// (0x0009f6ed) image3_infobar_fav_pane_g

0xd23e,	// (0x0009cb91) fs_bigclock_status_battery_pane

0xd247,	// (0x0009cb9a) fs_bigclock_status_signal_pane

0xd250,	// (0x0009cba3) fs_bigclock_status_title_pane

0xd259,	// (0x0009cbac) fs_bigclock_status_signal_pane_g1

0xd262,	// (0x0009cbb5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd9f,	// (0x0009f6f2) fs_bigclock_status_signal_pane_g

0xd26a,	// (0x0009cbbd) fs_bigclock_status_battery_pane_g1

0xd273,	// (0x0009cbc6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfda4,	// (0x0009f6f7) fs_bigclock_status_battery_pane_g

0xd27b,	// (0x0009cbce) fs_bigclock_status_title_pane_t1

0x4e98,	// (0x000947eb) main_fs_bigclock_clock_pane_g1

0xd289,	// (0x0009cbdc) main_fs_bigclock_clock_pane_g2

0xd289,	// (0x0009cbdc) main_fs_bigclock_clock_pane_g3

0xd289,	// (0x0009cbdc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda9,	// (0x0009f6fc) main_fs_bigclock_clock_pane_g

0xd295,	// (0x0009cbe8) main_fs_bigclock_clock_pane_t1

0x95a1,	// (0x00098ef4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb2,	// (0x0009f705) main_fs_bigclock_clock_pane_t

0xd2a3,	// (0x0009cbf6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd2a3,	// (0x0009cbf6) list_single_fs_bigclock_indicator_pane

0x95b0,	// (0x00098f03) list_single_fs_bigclock_pane_ParamLimits

0x95b0,	// (0x00098f03) list_single_fs_bigclock_pane

0xd2bd,	// (0x0009cc10) main_fs_bigclock_indicator_pane_t1

0xd2cc,	// (0x0009cc1f) list_single_fs_bigclock_pane_g1

0xd2d4,	// (0x0009cc27) list_single_fs_bigclock_pane_t1

0x4e98,	// (0x000947eb) main_fs_bigclock_swipe_pane_g1

0xd314,	// (0x0009cc67) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc3,	// (0x0009f716) main_fs_bigclock_swipe_pane_g

0xd31c,	// (0x0009cc6f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd31c,	// (0x0009cc6f) main_fs_bigclock_swipe_pane_t1

0x2b38,	// (0x0009248b) call_type_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_btmg_pane

0xcfa0,	// (0x0009c8f3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcfa0,	// (0x0009c8f3) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd36,	// (0x0009f689) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd36,	// (0x0009f689) list_single_cale_mrui_row_pane_g

0xd0f1,	// (0x0009ca44) list_recal_vselct_arw_lo_pane

0xd0f9,	// (0x0009ca4c) list_recal_vselct_arw_up_pane

0xbd8a,	// (0x0009b6dd) list_recal_vselct_pane

0xd339,	// (0x0009cc8c) btmg_button_pane

0x9617,	// (0x00098f6a) main_btmg_pane_g1

0x0b6d,	// (0x000904c0) bg_button_pane_cp044

0xd343,	// (0x0009cc96) btmg_button_pane_t1

0xef8f,	// (0x0009e8e2) aid_listscroll_gen

0x0df0,	// (0x00090743) main_cntbar_detail_pane

0xcc96,	// (0x0009c5e9) list_cmail_folder_pane

0xcca6,	// (0x0009c5f9) sp_fs_scroll_pane_cp03_ParamLimits

0x9621,	// (0x00098f74) list_single_fs_dyc_pane_cp01_ParamLimits

0x9621,	// (0x00098f74) list_single_fs_dyc_pane_cp01

0xd351,	// (0x0009cca4) aid_size_cmail_indent

0xd35a,	// (0x0009ccad) list_single_dyc_row_pane_cp01

0x966b,	// (0x00098fbe) cntbar_detail_list_pane_ParamLimits

0x966b,	// (0x00098fbe) cntbar_detail_list_pane

0x96bd,	// (0x00099010) main_cntbar_detail_cont_pane_ParamLimits

0x96bd,	// (0x00099010) main_cntbar_detail_cont_pane

0x2a5b,	// (0x000923ae) scroll_pane_cp032_ParamLimits

0x2a5b,	// (0x000923ae) scroll_pane_cp032

0x96d1,	// (0x00099024) cntbar_detail_list_event_pane_ParamLimits

0x96d1,	// (0x00099024) cntbar_detail_list_event_pane

0x967d,	// (0x00098fd0) cntbar_detail_list_shct_pane

0xaa73,	// (0x0009a3c6) aid_list_gen

0xd363,	// (0x0009ccb6) aid_scroll

0xd36c,	// (0x0009ccbf) aid_size_touch_scroll_bar

0xd375,	// (0x0009ccc8) aid_list_double

0xd37e,	// (0x0009ccd1) aid_list_single

0x96e1,	// (0x00099034) aid_list_single_lg

0xd387,	// (0x0009ccda) aid_list_z_g_a_sm

0xd38f,	// (0x0009cce2) aid_list_z_g_d

0xd397,	// (0x0009ccea) aid_txt_z_prm

0xd3a5,	// (0x0009ccf8) aid_txt_z_prm_cp01

0xd3b3,	// (0x0009cd06) aid_txt_z_sec

0x96ea,	// (0x0009903d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x96ea,	// (0x0009903d) main_cntbar_detail_cont_pane_g1

0x96fe,	// (0x00099051) main_cntbar_detail_cont_pane_g2_ParamLimits

0x96fe,	// (0x00099051) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc8,	// (0x0009f71b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc8,	// (0x0009f71b) main_cntbar_detail_cont_pane_g

0xd3c1,	// (0x0009cd14) main_cntbar_detail_cont_pane_t1

0xd3cf,	// (0x0009cd22) main_cntbar_detail_cont_pane_t2

0xd3dd,	// (0x0009cd30) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdcd,	// (0x0009f720) main_cntbar_detail_cont_pane_t

0x970e,	// (0x00099061) cell_cntbar_detail_list_shct_pane_ParamLimits

0x970e,	// (0x00099061) cell_cntbar_detail_list_shct_pane

0xd3eb,	// (0x0009cd3e) cntbar_detail_list_shct_pane_g1

0xd3f4,	// (0x0009cd47) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdd4,	// (0x0009f727) cntbar_detail_list_shct_pane_g

0x9720,	// (0x00099073) cntbar_detail_list_event_pane_g1_ParamLimits

0x9720,	// (0x00099073) cntbar_detail_list_event_pane_g1

0x972c,	// (0x0009907f) cntbar_detail_list_event_pane_g2_ParamLimits

0x972c,	// (0x0009907f) cntbar_detail_list_event_pane_g2

0x0005,

0xfdd9,	// (0x0009f72c) cntbar_detail_list_event_pane_g_ParamLimits

0xfdd9,	// (0x0009f72c) cntbar_detail_list_event_pane_g

0x979a,	// (0x000990ed) cntbar_detail_list_event_pane_t1_ParamLimits

0x979a,	// (0x000990ed) cntbar_detail_list_event_pane_t1

0x97af,	// (0x00099102) cntbar_detail_list_event_pane_t2_ParamLimits

0x97af,	// (0x00099102) cntbar_detail_list_event_pane_t2

0x0002,

0xfde6,	// (0x0009f739) cntbar_detail_list_event_pane_t_ParamLimits

0xfde6,	// (0x0009f739) cntbar_detail_list_event_pane_t

0x4e98,	// (0x000947eb) cell_cntbar_detail_list_shct_pane_g1

0x2edc,	// (0x0009282f) navi_pane_mv_g3

0x0df0,	// (0x00090743) main_cntbar_detail_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_notif_wgt_pane

0xb44a,	// (0x0009ad9d) aid_tch_main_mp4_pane_g4

0xd8be,	// (0x0009d211) popup_slider_window_cp02

0xd0e8,	// (0x0009ca3b) list_recal_day_event_pane

0x963b,	// (0x00098f8e) cntbar_detail_btn_pane_ParamLimits

0x963b,	// (0x00098f8e) cntbar_detail_btn_pane

0x9653,	// (0x00098fa6) cntbar_detail_btn_pane_cp01_ParamLimits

0x9653,	// (0x00098fa6) cntbar_detail_btn_pane_cp01

0x967d,	// (0x00098fd0) cntbar_detail_list_shct_pane_ParamLimits

0x968d,	// (0x00098fe0) cntbar_detail_pane_g1_ParamLimits

0x968d,	// (0x00098fe0) cntbar_detail_pane_g1

0x96a1,	// (0x00098ff4) cntbar_detail_pane_t1_ParamLimits

0x96a1,	// (0x00098ff4) cntbar_detail_pane_t1

0x9738,	// (0x0009908b) cntbar_detail_list_event_pane_g3_ParamLimits

0x9738,	// (0x0009908b) cntbar_detail_list_event_pane_g3

0x9750,	// (0x000990a3) cntbar_detail_list_event_pane_g4_ParamLimits

0x9750,	// (0x000990a3) cntbar_detail_list_event_pane_g4

0x9768,	// (0x000990bb) cntbar_detail_list_event_pane_g5_ParamLimits

0x9768,	// (0x000990bb) cntbar_detail_list_event_pane_g5

0x9780,	// (0x000990d3) cntbar_detail_list_event_pane_g6_ParamLimits

0x9780,	// (0x000990d3) cntbar_detail_list_event_pane_g6

0x97c4,	// (0x00099117) cntbar_detail_list_event_pane_t3_ParamLimits

0x97c4,	// (0x00099117) cntbar_detail_list_event_pane_t3

0x97d6,	// (0x00099129) popup_notif_wgt_window_ParamLimits

0x97d6,	// (0x00099129) popup_notif_wgt_window

0x97ef,	// (0x00099142) popup_submenu_window_cp01_ParamLimits

0x97ef,	// (0x00099142) popup_submenu_window_cp01

0xdb8c,	// (0x0009d4df) bg_popup_window_pane_cp10

0xd3fd,	// (0x0009cd50) listscroll_notif_wgt_pane

0xd407,	// (0x0009cd5a) list_notif_wgt_window

0xd410,	// (0x0009cd63) scroll_pane_cp033

0xd419,	// (0x0009cd6c) list_notif_wgt_row_pane_ParamLimits

0xd419,	// (0x0009cd6c) list_notif_wgt_row_pane

0xd42d,	// (0x0009cd80) aid_size_list_notif_wgt_del

0xd436,	// (0x0009cd89) list_notif_wgt_row_pane_g1

0xd43e,	// (0x0009cd91) list_notif_wgt_row_pane_g2

0xd446,	// (0x0009cd99) list_notif_wgt_row_pane_g3

0x0002,

0xfded,	// (0x0009f740) list_notif_wgt_row_pane_g

0xd44f,	// (0x0009cda2) list_notif_wgt_row_pane_t1

0xd45d,	// (0x0009cdb0) list_notif_wgt_row_pane_t2

0xd46b,	// (0x0009cdbe) list_notif_wgt_row_pane_t3

0x0002,

0xfdf4,	// (0x0009f747) list_notif_wgt_row_pane_t

0xba5d,	// (0x0009b3b0) list_recal_day_event_pane_g1

0xd479,	// (0x0009cdcc) list_recal_day_event_pane_t1

0x0b6d,	// (0x000904c0) bg_button_pane_cp045

0xd488,	// (0x0009cddb) cntbar_detail_btn_pane_t1

0xef97,	// (0x0009e8ea) main_callh_pane_ParamLimits

0xef97,	// (0x0009e8ea) main_callh_pane

0x0b6d,	// (0x000904c0) main_coverflow0_pane

0x0b6d,	// (0x000904c0) main_wgtman_pane

0x8793,	// (0x000980e6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8793,	// (0x000980e6) main_fs_bigclock_unlock_btn_pane

0xcc78,	// (0x0009c5cb) bg_button_pane_cp16

0x907d,	// (0x000989d0) cell_tport_appsw_pane_g3

0x9801,	// (0x00099154) cf0_flow_pane_ParamLimits

0x9801,	// (0x00099154) cf0_flow_pane

0xd496,	// (0x0009cde9) listscroll_cf0_pane

0xd49f,	// (0x0009cdf2) main_cf0_pane_g1

0x9816,	// (0x00099169) main_cf0_pane_t1_ParamLimits

0x9816,	// (0x00099169) main_cf0_pane_t1

0x982d,	// (0x00099180) main_cf0_pane_t2_ParamLimits

0x982d,	// (0x00099180) main_cf0_pane_t2

0x0001,

0xfdfb,	// (0x0009f74e) main_cf0_pane_t_ParamLimits

0xfdfb,	// (0x0009f74e) main_cf0_pane_t

0xd4a9,	// (0x0009cdfc) scroll_pane_cp11

0x9844,	// (0x00099197) cf0_flow_pane_g1

0x9850,	// (0x000991a3) cf0_flow_pane_g2

0x0001,

0xfe00,	// (0x0009f753) cf0_flow_pane_g

0x985c,	// (0x000991af) cf0_flow_pane_t1

0x0b6d,	// (0x000904c0) main_call6_pane

0x0b6d,	// (0x000904c0) main_calllock_pane

0x986e,	// (0x000991c1) call6_btn_grp_pane_ParamLimits

0x986e,	// (0x000991c1) call6_btn_grp_pane

0x988a,	// (0x000991dd) call6_pane_g1_ParamLimits

0x988a,	// (0x000991dd) call6_pane_g1

0x98a0,	// (0x000991f3) popup_call6_1st_window_ParamLimits

0x98a0,	// (0x000991f3) popup_call6_1st_window

0x98b1,	// (0x00099204) popup_call6_2nd_window_ParamLimits

0x98b1,	// (0x00099204) popup_call6_2nd_window

0x98c2,	// (0x00099215) cell_call6_btn_pane_ParamLimits

0x98c2,	// (0x00099215) cell_call6_btn_pane

0xdb8c,	// (0x0009d4df) bg_popup_call2_in_pane_cp03

0xd4b4,	// (0x0009ce07) popup_call6_1st_window_g1

0xd4bc,	// (0x0009ce0f) popup_call6_1st_window_g2

0xd4c4,	// (0x0009ce17) popup_call6_1st_window_g3

0x0002,

0xfe05,	// (0x0009f758) popup_call6_1st_window_g

0xd4cc,	// (0x0009ce1f) popup_call6_1st_window_t1

0xd4db,	// (0x0009ce2e) popup_call6_1st_window_t2

0xd4eb,	// (0x0009ce3e) popup_call6_1st_window_t3

0x0002,

0xfe0c,	// (0x0009f75f) popup_call6_1st_window_t

0xdb8c,	// (0x0009d4df) bg_popup_call2_in_pane_cp04

0xd4b4,	// (0x0009ce07) popup_call6_2nd_window_g1

0xd4bc,	// (0x0009ce0f) popup_call6_2nd_window_g2

0xd4c4,	// (0x0009ce17) popup_call6_2nd_window_g3

0x0002,

0xfe05,	// (0x0009f758) popup_call6_2nd_window_g

0xd4cc,	// (0x0009ce1f) popup_call6_2nd_window_t1

0x0b6d,	// (0x000904c0) bg_button_pane_cp15

0xd4fb,	// (0x0009ce4e) cell_call6_btn_pane_g1

0xd504,	// (0x0009ce57) cell_call6_btn_pane_t1

0x98d6,	// (0x00099229) listscroll_wgtman_pane_ParamLimits

0x98d6,	// (0x00099229) listscroll_wgtman_pane

0x98f9,	// (0x0009924c) wgtman_btn_pane_ParamLimits

0x98f9,	// (0x0009924c) wgtman_btn_pane

0xd7fe,	// (0x0009d151) aid_scroll_copy1

0xd513,	// (0x0009ce66) list_wgtman_pane

0x993c,	// (0x0009928f) wgtman_btn_pane_g1_ParamLimits

0x993c,	// (0x0009928f) wgtman_btn_pane_g1

0x9968,	// (0x000992bb) wgtman_btn_pane_t1_ParamLimits

0x9968,	// (0x000992bb) wgtman_btn_pane_t1

0xd51d,	// (0x0009ce70) wgtman_btn_pane_t2_ParamLimits

0xd51d,	// (0x0009ce70) wgtman_btn_pane_t2

0x0001,

0xfe13,	// (0x0009f766) wgtman_btn_pane_t_ParamLimits

0xfe13,	// (0x0009f766) wgtman_btn_pane_t

0xd534,	// (0x0009ce87) listrow_wgtman_pane_ParamLimits

0xd534,	// (0x0009ce87) listrow_wgtman_pane

0xd548,	// (0x0009ce9b) listrow_wgtman_pane_g1

0x99a5,	// (0x000992f8) listrow_wgtman_pane_g2

0x0001,

0xfe18,	// (0x0009f76b) listrow_wgtman_pane_g

0xd551,	// (0x0009cea4) listrow_wgtman_pane_t1

0xd55f,	// (0x0009ceb2) listrow_wgtman_pane_t2

0x0001,

0xfe1d,	// (0x0009f770) listrow_wgtman_pane_t

0xd56d,	// (0x0009cec0) wait_bar_pane_cp09

0xd575,	// (0x0009cec8) main_calllock_btn_pane

0xd57f,	// (0x0009ced2) main_calllock_pane_g1

0x0b6d,	// (0x000904c0) bg_button_pane_cp17

0xd58b,	// (0x0009cede) main_calllock_btn_pane_g1

0xd594,	// (0x0009cee7) main_calllock_btn_pane_t1

0x0b6d,	// (0x000904c0) main_dialer3_pane

0x0b6d,	// (0x000904c0) main_fmrd2_pane

0x4e98,	// (0x000947eb) main_fs_bigclock_unlock_btn_pane_g1

0xd5ab,	// (0x0009cefe) main_fs_bigclock_unlock_btn_pane_t1

0x99af,	// (0x00099302) area_fmrd2_info_pane_ParamLimits

0x99af,	// (0x00099302) area_fmrd2_info_pane

0x99c2,	// (0x00099315) area_fmrd2_visual_pane_ParamLimits

0x99c2,	// (0x00099315) area_fmrd2_visual_pane

0x99d0,	// (0x00099323) fmrd2_indi_pane_ParamLimits

0x99d0,	// (0x00099323) fmrd2_indi_pane

0x99dd,	// (0x00099330) area_fmrd2_visual_pane_g1

0x99e5,	// (0x00099338) area_fmrd2_visual_pane_t1

0x99f5,	// (0x00099348) area_fmrd2_visual_pane_t2

0x9a05,	// (0x00099358) area_fmrd2_visual_pane_t3

0x0002,

0xfe27,	// (0x0009f77a) area_fmrd2_visual_pane_t

0x9a15,	// (0x00099368) area_fmrd2_info_pane_g1

0x9a1d,	// (0x00099370) area_fmrd2_info_pane_t1

0x9a2d,	// (0x00099380) area_fmrd2_info_pane_t2

0x9a3d,	// (0x00099390) area_fmrd2_info_pane_t3

0x9a4d,	// (0x000993a0) area_fmrd2_info_pane_t4

0x0003,

0xfe2e,	// (0x0009f781) area_fmrd2_info_pane_t

0x9a5d,	// (0x000993b0) fmrd2_indi_pane_t1

0x9a6d,	// (0x000993c0) fmrd2_indi_pane_t2

0x9a7d,	// (0x000993d0) fmrd2_indi_pane_t3

0x0002,

0xfe37,	// (0x0009f78a) fmrd2_indi_pane_t

0x880b,	// (0x0009815e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x880b,	// (0x0009815e) list_single_fs_bigclock_indicator_pane_g5

0x88b1,	// (0x00098204) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x88b1,	// (0x00098204) list_single_fs_bigclock_indicator_pane_t5

0x9244,	// (0x00098b97) aid_cell_bcale_month_pane_ParamLimits

0x9244,	// (0x00098b97) aid_cell_bcale_month_pane

0x9256,	// (0x00098ba9) bcale_month_pane_ParamLimits

0x9256,	// (0x00098ba9) bcale_month_pane

0x926e,	// (0x00098bc1) bcale_preview_pane_ParamLimits

0x926e,	// (0x00098bc1) bcale_preview_pane

0xd2d4,	// (0x0009cc27) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2f0,	// (0x0009cc43) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2f0,	// (0x0009cc43) list_single_fs_bigclock_pane_t2

0x0001,

0xfdbe,	// (0x0009f711) list_single_fs_bigclock_pane_t_ParamLimits

0xfdbe,	// (0x0009f711) list_single_fs_bigclock_pane_t

0xd5a3,	// (0x0009cef6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe22,	// (0x0009f775) main_fs_bigclock_unlock_btn_pane_g

0x9a8d,	// (0x000993e0) aid_dia3_key_size_ParamLimits

0x9a8d,	// (0x000993e0) aid_dia3_key_size

0x9a9c,	// (0x000993ef) aid_dia3_listrow_size_ParamLimits

0x9a9c,	// (0x000993ef) aid_dia3_listrow_size

0x9aaa,	// (0x000993fd) dia3_keypad_fun_pane_ParamLimits

0x9aaa,	// (0x000993fd) dia3_keypad_fun_pane

0x9ac6,	// (0x00099419) dia3_keypad_num_pane_ParamLimits

0x9ac6,	// (0x00099419) dia3_keypad_num_pane

0x9adf,	// (0x00099432) dia3_listscroll_pane_ParamLimits

0x9adf,	// (0x00099432) dia3_listscroll_pane

0x9af4,	// (0x00099447) dia3_numentry_pane_ParamLimits

0x9af4,	// (0x00099447) dia3_numentry_pane

0xd5b9,	// (0x0009cf0c) dia3_list_pane

0xd5c4,	// (0x0009cf17) scroll_pane_cp12

0x0b6d,	// (0x000904c0) bg_dia3_numentry_pane

0xd5cf,	// (0x0009cf22) dia3_numentry_pane_t1

0x9b07,	// (0x0009945a) cell_dia3_key_num_pane

0x9b0f,	// (0x00099462) cell_dia3_key0_fun_pane_ParamLimits

0x9b0f,	// (0x00099462) cell_dia3_key0_fun_pane

0x9b23,	// (0x00099476) cell_dia3_key1_fun_pane_ParamLimits

0x9b23,	// (0x00099476) cell_dia3_key1_fun_pane

0x9b3b,	// (0x0009948e) dia3_listrow_pane

0xc4b3,	// (0x0009be06) bg_dia3_numentry_pane_g1

0x0b6d,	// (0x000904c0) bg_button_pane_cp21

0xd5de,	// (0x0009cf31) cell_dia3_key_num_pane_t1

0xd5ec,	// (0x0009cf3f) cell_dia3_key_num_pane_t2

0xd5fb,	// (0x0009cf4e) cell_dia3_key_num_pane_t3

0xd60a,	// (0x0009cf5d) cell_dia3_key_num_pane_t4

0x0003,

0xfe3e,	// (0x0009f791) cell_dia3_key_num_pane_t

0x0b6d,	// (0x000904c0) bg_button_pane_cp19

0x9b4d,	// (0x000994a0) cell_dia3_key0_fun_pane_g1

0x0b6d,	// (0x000904c0) bg_button_pane_cp20

0x9b55,	// (0x000994a8) cell_dia3_key1_fun_pane_g1

0x9b5d,	// (0x000994b0) area_left_week_number_pane

0x9b66,	// (0x000994b9) area_top_day_name_pane

0x9b6f,	// (0x000994c2) frame_month_view_pane

0x9b7b,	// (0x000994ce) grid_month_view_pane

0x9b85,	// (0x000994d8) cell_top_day_name_pane_ParamLimits

0x9b85,	// (0x000994d8) cell_top_day_name_pane

0x9b9f,	// (0x000994f2) cell_area_left_week_number_pane_ParamLimits

0x9b9f,	// (0x000994f2) cell_area_left_week_number_pane

0x9bb5,	// (0x00099508) cell_month_view_pane_ParamLimits

0x9bb5,	// (0x00099508) cell_month_view_pane

0xd619,	// (0x0009cf6c) frm_month_g1

0x9bd4,	// (0x00099527) frm_month_g2

0x9bde,	// (0x00099531) frm_month_g3

0x9be8,	// (0x0009953b) frm_month_g4

0x9bf2,	// (0x00099545) frm_month_g5

0x9bfc,	// (0x0009954f) frm_month_g6

0x9c08,	// (0x0009955b) frm_month_g7

0xd622,	// (0x0009cf75) frm_month_g8

0x9c14,	// (0x00099567) frm_month_g9

0x9c1d,	// (0x00099570) frm_month_g10

0x9c26,	// (0x00099579) frm_month_g11

0x9c2f,	// (0x00099582) frm_month_g12

0x9c38,	// (0x0009958b) frm_month_g13

0x9c41,	// (0x00099594) frm_month_g14

0x9c4a,	// (0x0009959d) frm_month_g15

0x9c55,	// (0x000995a8) frm_month_g16

0x000f,

0xfe47,	// (0x0009f79a) frm_month_g

0x9c60,	// (0x000995b3) cell_top_day_name_pane_t1

0x9c6f,	// (0x000995c2) cell_area_left_week_number_pane_g1

0x9c60,	// (0x000995b3) cell_area_left_week_number_pane_t1

0x4e98,	// (0x000947eb) cell_month_view_pane_g1

0x9c77,	// (0x000995ca) cell_month_view_pane_t1

0x0b6d,	// (0x000904c0) main_fps_pane

0xc9c3,	// (0x0009c316) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc9c3,	// (0x0009c316) cmail_ddmenu_btn02_pane_cp1

0xc9df,	// (0x0009c332) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc9df,	// (0x0009c332) cmail_ddmenu_btn02_pane_cp2

0x9507,	// (0x00098e5a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9507,	// (0x00098e5a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6f,	// (0x0009f6c2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6f,	// (0x0009f6c2) cmail_ddmenu_btn02_pane_g

0x9525,	// (0x00098e78) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9525,	// (0x00098e78) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd74,	// (0x0009f6c7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd74,	// (0x0009f6c7) cmail_ddmenu_btn02_pane_t

0x9c86,	// (0x000995d9) fps_text_pane_ParamLimits

0x9c86,	// (0x000995d9) fps_text_pane

0x9c9d,	// (0x000995f0) main_fps_pane_g1_ParamLimits

0x9c9d,	// (0x000995f0) main_fps_pane_g1

0x9cb5,	// (0x00099608) wait_bar_pane_cp010_ParamLimits

0x9cb5,	// (0x00099608) wait_bar_pane_cp010

0x9cc8,	// (0x0009961b) fps_text_pane_t1_ParamLimits

0x9cc8,	// (0x0009961b) fps_text_pane_t1

0xb765,	// (0x0009b0b8) cam4_image_uncrop_pane_g1

0xb76e,	// (0x0009b0c1) cam4_image_uncrop_pane_g2

0x6a07,	// (0x0009635a) cam4_image_uncrop_pane_g3

0x6a10,	// (0x00096363) cam4_image_uncrop_pane_g4

0x0003,

0xf849,	// (0x0009f19c) cam4_image_uncrop_pane_g

0x9b3b,	// (0x0009948e) dia3_listrow_pane_ParamLimits

0x0b6d,	// (0x000904c0) main_phob2_pane

0x9044,	// (0x00098997) cell_tport_appsw_pane_cp02_ParamLimits

0x9044,	// (0x00098997) cell_tport_appsw_pane_cp02

0x9058,	// (0x000989ab) cell_tport_appsw_pane_cp03_ParamLimits

0x9058,	// (0x000989ab) cell_tport_appsw_pane_cp03

0x0b6d,	// (0x000904c0) phob2_contact_card_pane

0x0b6d,	// (0x000904c0) phob2_listscroll_pane

0xd62b,	// (0x0009cf7e) phob2_list_pane

0xd633,	// (0x0009cf86) scroll_pane_cp034

0x9ce0,	// (0x00099633) phob2_cc_data_pane_ParamLimits

0x9ce0,	// (0x00099633) phob2_cc_data_pane

0x9d01,	// (0x00099654) phob2_cc_listscroll_pane_ParamLimits

0x9d01,	// (0x00099654) phob2_cc_listscroll_pane

0x9d23,	// (0x00099676) list_double_large_graphic_phob2_pane_ParamLimits

0x9d23,	// (0x00099676) list_double_large_graphic_phob2_pane

0x9d38,	// (0x0009968b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9d38,	// (0x0009968b) list_double_large_graphic_phob2_pane_g1

0x9d45,	// (0x00099698) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9d45,	// (0x00099698) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe68,	// (0x0009f7bb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe68,	// (0x0009f7bb) list_double_large_graphic_phob2_pane_g

0x9d51,	// (0x000996a4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9d51,	// (0x000996a4) list_double_large_graphic_phob2_pane_t1

0x9d66,	// (0x000996b9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9d66,	// (0x000996b9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe6d,	// (0x0009f7c0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe6d,	// (0x0009f7c0) list_double_large_graphic_phob2_pane_t

0x0b6d,	// (0x000904c0) list_highlight_pane_cp024

0xd63b,	// (0x0009cf8e) phob2_cc_button_pane

0x9d78,	// (0x000996cb) phob2_cc_data_pane_g1_ParamLimits

0x9d78,	// (0x000996cb) phob2_cc_data_pane_g1

0x9d8e,	// (0x000996e1) phob2_cc_data_pane_g2_ParamLimits

0x9d8e,	// (0x000996e1) phob2_cc_data_pane_g2

0x0001,

0xfe72,	// (0x0009f7c5) phob2_cc_data_pane_g_ParamLimits

0xfe72,	// (0x0009f7c5) phob2_cc_data_pane_g

0x9da2,	// (0x000996f5) phob2_cc_data_pane_t1_ParamLimits

0x9da2,	// (0x000996f5) phob2_cc_data_pane_t1

0x9dbc,	// (0x0009970f) phob2_cc_data_pane_t2_ParamLimits

0x9dbc,	// (0x0009970f) phob2_cc_data_pane_t2

0x9dd6,	// (0x00099729) phob2_cc_data_pane_t3_ParamLimits

0x9dd6,	// (0x00099729) phob2_cc_data_pane_t3

0x0002,

0xfe77,	// (0x0009f7ca) phob2_cc_data_pane_t_ParamLimits

0xfe77,	// (0x0009f7ca) phob2_cc_data_pane_t

0xd643,	// (0x0009cf96) phob2_cc_list_pane_ParamLimits

0xd643,	// (0x0009cf96) phob2_cc_list_pane

0xbaf6,	// (0x0009b449) scroll_pane_cp035_ParamLimits

0xbaf6,	// (0x0009b449) scroll_pane_cp035

0x0df0,	// (0x00090743) bg_button_pane_cp033

0xd64f,	// (0x0009cfa2) phob2_cc_button_pane_g1

0xd65b,	// (0x0009cfae) phob2_cc_button_pane_t1

0xd670,	// (0x0009cfc3) phob2_cc_button_pane_t2

0x0001,

0xfe7e,	// (0x0009f7d1) phob2_cc_button_pane_t

0x9df0,	// (0x00099743) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9df0,	// (0x00099743) list_double_large_graphic_phob2_cc_pane

0x9e05,	// (0x00099758) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e05,	// (0x00099758) list_double_large_graphic_phob2_cc_pane_g1

0x9e11,	// (0x00099764) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e11,	// (0x00099764) list_double_large_graphic_phob2_cc_pane_g2

0x9e1d,	// (0x00099770) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e1d,	// (0x00099770) list_double_large_graphic_phob2_cc_pane_g3

0x9e29,	// (0x0009977c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e29,	// (0x0009977c) list_double_large_graphic_phob2_cc_pane_g4

0x9e35,	// (0x00099788) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e35,	// (0x00099788) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe83,	// (0x0009f7d6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe83,	// (0x0009f7d6) list_double_large_graphic_phob2_cc_pane_g

0x9e41,	// (0x00099794) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e41,	// (0x00099794) list_double_large_graphic_phob2_cc_pane_t1

0x9e6a,	// (0x000997bd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9e6a,	// (0x000997bd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe8e,	// (0x0009f7e1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe8e,	// (0x0009f7e1) list_double_large_graphic_phob2_cc_pane_t

0xd682,	// (0x0009cfd5) list_highlight_pane_cp025_ParamLimits

0xd682,	// (0x0009cfd5) list_highlight_pane_cp025

0x0df0,	// (0x00090743) bg_button_pane_cp033_ParamLimits

0xd64f,	// (0x0009cfa2) phob2_cc_button_pane_g1_ParamLimits

0xd65b,	// (0x0009cfae) phob2_cc_button_pane_t1_ParamLimits

0xd670,	// (0x0009cfc3) phob2_cc_button_pane_t2_ParamLimits

0xfe7e,	// (0x0009f7d1) phob2_cc_button_pane_t_ParamLimits

0x0baf,	// (0x00090502) popup_wgtman_window

0xb905,	// (0x0009b258) scroll_pane_cp038

0x991e,	// (0x00099271) wgtman_btn_pane_cp_01_ParamLimits

0x991e,	// (0x00099271) wgtman_btn_pane_cp_01

0xd690,	// (0x0009cfe3) wgtman_content_pane

0xd699,	// (0x0009cfec) wgtman_heading_pane

0x0b6d,	// (0x000904c0) bg_heading_pane_cp02

0xd6a2,	// (0x0009cff5) wgtman_heading_pane_g1

0xd6aa,	// (0x0009cffd) wgtman_heading_pane_t1

0xd6b8,	// (0x0009d00b) scroll_pane_cp036

0xd6c0,	// (0x0009d013) wgtman_list_pane

0xc819,	// (0x0009c16c) wgtman_list_pane_t1_ParamLimits

0xc819,	// (0x0009c16c) wgtman_list_pane_t1

0xd91c,	// (0x0009d26f) cam4_grid_pane

0x771d,	// (0x00097070) bg_button_pane_cp015_ParamLimits

0x7731,	// (0x00097084) bg_button_pane_cp016_ParamLimits

0x7744,	// (0x00097097) bg_button_pane_cp017_ParamLimits

0x779c,	// (0x000970ef) popup_vitu2_query_window_g3_ParamLimits

0x779c,	// (0x000970ef) popup_vitu2_query_window_g3

0x7859,	// (0x000971ac) popup_vitu2_query_window_t6_ParamLimits

0x7859,	// (0x000971ac) popup_vitu2_query_window_t6

0x7884,	// (0x000971d7) popup_vitu2_query_window_t7_ParamLimits

0x7884,	// (0x000971d7) popup_vitu2_query_window_t7

0xb765,	// (0x0009b0b8) cam4_grid_pane_g1

0xb76e,	// (0x0009b0c1) cam4_grid_pane_g2

0xd6c8,	// (0x0009d01b) cam4_grid_pane_g3

0xd6d1,	// (0x0009d024) cam4_grid_pane_g4

0x0003,

0xfe93,	// (0x0009f7e6) cam4_grid_pane_g

0x1c55,	// (0x000915a8) aid_placing_vt_slider_lsc_ParamLimits

0x1f45,	// (0x00091898) vidtel_button_pane_ParamLimits

0x1f45,	// (0x00091898) vidtel_button_pane

0x0b6d,	// (0x000904c0) bg_button_pane_cp034

0x9e93,	// (0x000997e6) vidtel_button_pane_g1

0xd6dc,	// (0x0009d02f) vidtel_button_pane_t1

0xba15,	// (0x0009b368) aid_size_vtel_slider_touch

0xbaf6,	// (0x0009b449) scroll_pane_cp039

0xc4f1,	// (0x0009be44) ncim_query_button_pane_cp01_ParamLimits

0xc510,	// (0x0009be63) ncimui_query_pane_g1_ParamLimits

0x0df0,	// (0x00090743) input_focus_pane_cp012_ParamLimits

0xc535,	// (0x0009be88) ncim_query_entry_pane_t1_ParamLimits

0xbaf6,	// (0x0009b449) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
