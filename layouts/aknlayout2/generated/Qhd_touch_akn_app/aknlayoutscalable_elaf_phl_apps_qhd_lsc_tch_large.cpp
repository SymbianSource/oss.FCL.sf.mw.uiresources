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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007e819 };

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
0x112c,	// (0x0007f945) Screen

0x1138,	// (0x0007f951) application_window

0x1174,	// (0x0007f98d) area_bottom_pane_ParamLimits

0x1174,	// (0x0007f98d) area_bottom_pane

0x11ad,	// (0x0007f9c6) area_top_pane_ParamLimits

0x11ad,	// (0x0007f9c6) area_top_pane

0xb1d9,	// (0x000899f2) call_video_uplink_pane_ParamLimits

0xb1d9,	// (0x000899f2) call_video_uplink_pane

0x123b,	// (0x0007fa54) main_pane_ParamLimits

0x123b,	// (0x0007fa54) main_pane

0xcaa3,	// (0x0008b2bc) context_pane

0x528d,	// (0x00083aa6) navi_pane

0x52b5,	// (0x00083ace) popup_cale_events_window_ParamLimits

0x52b5,	// (0x00083ace) popup_cale_events_window

0xcab6,	// (0x0008b2cf) popup_mup_playback_window

0x52cd,	// (0x00083ae6) signal_pane

0x1a11,	// (0x0008022a) main_browser_pane

0xb5f0,	// (0x00089e09) main_burst_pane

0x4fed,	// (0x00083806) main_calc_pane

0xca35,	// (0x0008b24e) main_cale_day_pane

0x1ce7,	// (0x00080500) main_cale_month_pane

0xca35,	// (0x0008b24e) main_cale_week_pane

0xb5f0,	// (0x00089e09) main_call_pane

0x144a,	// (0x0007fc63) main_call_poc_pane

0xb5f0,	// (0x00089e09) main_camera_pane

0xb5f0,	// (0x00089e09) main_chi_dic_pane

0xb465,	// (0x00089c7e) main_clock_pane

0x144a,	// (0x0007fc63) main_fmradio_pane

0xb5f0,	// (0x00089e09) main_graph_messa_pane

0x144a,	// (0x0007fc63) main_help_pane

0x1a11,	// (0x0008022a) main_im_pane

0x16a5,	// (0x0007febe) main_image_pane_ParamLimits

0x16a5,	// (0x0007febe) main_image_pane

0x144a,	// (0x0007fc63) main_location2_pane

0xb5f0,	// (0x00089e09) main_location_pane

0x16a5,	// (0x0007febe) main_messa_pane

0x144a,	// (0x0007fc63) main_mp2_pane

0xb5f0,	// (0x00089e09) main_mp_pane

0x144a,	// (0x0007fc63) main_msg_pane

0x144a,	// (0x0007fc63) main_mup_eq_pane

0x144a,	// (0x0007fc63) main_mup_pane

0x1a11,	// (0x0008022a) main_notes_pane

0x144a,	// (0x0007fc63) main_pec_pane

0x144a,	// (0x0007fc63) main_phob_pane

0x144a,	// (0x0007fc63) main_pinb_pane

0x144a,	// (0x0007fc63) main_postcard_pane

0x144a,	// (0x0007fc63) main_qdial_pane

0xb5f0,	// (0x00089e09) main_skin_pane

0x144a,	// (0x0007fc63) main_smil2_pane

0xb5f0,	// (0x00089e09) main_smil_pane

0xb5f0,	// (0x00089e09) main_video_pane

0xb5f0,	// (0x00089e09) main_video_tele_pane

0x16a5,	// (0x0007febe) main_viewer_pane_ParamLimits

0x16a5,	// (0x0007febe) main_viewer_pane

0xb5f0,	// (0x00089e09) main_vorec_pane

0x5041,	// (0x0008385a) popup_blid_sat_info_window_ParamLimits

0x5041,	// (0x0008385a) popup_blid_sat_info_window

0x5099,	// (0x000838b2) popup_dyc_status_message_window_ParamLimits

0x5099,	// (0x000838b2) popup_dyc_status_message_window

0x50b3,	// (0x000838cc) popup_grid_large_graphic_window_ParamLimits

0x50b3,	// (0x000838cc) popup_grid_large_graphic_window

0x516f,	// (0x00083988) popup_loc_request_window_ParamLimits

0x516f,	// (0x00083988) popup_loc_request_window

0x5265,	// (0x00083a7e) popup_wml_address_window_ParamLimits

0x5265,	// (0x00083a7e) popup_wml_address_window

0x4e27,	// (0x00083640) call_muted_g1

0x4adc,	// (0x000832f5) popup_call_audio_conf_window_ParamLimits

0x4adc,	// (0x000832f5) popup_call_audio_conf_window

0x4e3b,	// (0x00083654) popup_call_audio_first_window_ParamLimits

0x4e3b,	// (0x00083654) popup_call_audio_first_window

0x4eb1,	// (0x000836ca) popup_call_audio_in_window_ParamLimits

0x4eb1,	// (0x000836ca) popup_call_audio_in_window

0x4eed,	// (0x00083706) popup_call_audio_out_window_ParamLimits

0x4eed,	// (0x00083706) popup_call_audio_out_window

0x4f27,	// (0x00083740) popup_call_audio_second_window_ParamLimits

0x4f27,	// (0x00083740) popup_call_audio_second_window

0x4f7d,	// (0x00083796) popup_call_audio_wait_window_ParamLimits

0x4f7d,	// (0x00083796) popup_call_audio_wait_window

0x4fb2,	// (0x000837cb) popup_number_entry_window_ParamLimits

0x4fb2,	// (0x000837cb) popup_number_entry_window

0xec61,	// (0x0008d47a) bg_popup_call_pane_cp05_ParamLimits

0xec61,	// (0x0008d47a) bg_popup_call_pane_cp05

0xec81,	// (0x0008d49a) popup_number_entry_window_t1

0xec94,	// (0x0008d4ad) popup_number_entry_window_t2

0xeca6,	// (0x0008d4bf) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0008d8ec) popup_number_entry_window_t

0xecb8,	// (0x0008d4d1) text_title_cp2

0xeccb,	// (0x0008d4e4) bg_popup_call_pane_cp_ParamLimits

0xeccb,	// (0x0008d4e4) bg_popup_call_pane_cp

0xecd9,	// (0x0008d4f2) call_thumbnail_pane

0xece1,	// (0x0008d4fa) popup_call_audio_in_window_g1_ParamLimits

0xece1,	// (0x0008d4fa) popup_call_audio_in_window_g1

0xeced,	// (0x0008d506) popup_call_audio_in_window_g2_ParamLimits

0xeced,	// (0x0008d506) popup_call_audio_in_window_g2

0xecf9,	// (0x0008d512) popup_call_audio_in_window_g3_ParamLimits

0xecf9,	// (0x0008d512) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0008d8f5) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0008d8f5) popup_call_audio_in_window_g

0xed05,	// (0x0008d51e) popup_call_audio_in_window_t1_ParamLimits

0xed05,	// (0x0008d51e) popup_call_audio_in_window_t1

0xed21,	// (0x0008d53a) popup_call_audio_in_window_t2_ParamLimits

0xed21,	// (0x0008d53a) popup_call_audio_in_window_t2

0xed3d,	// (0x0008d556) popup_call_audio_in_window_t3_ParamLimits

0xed3d,	// (0x0008d556) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0008d8fc) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0008d8fc) popup_call_audio_in_window_t

0xeccb,	// (0x0008d4e4) bg_popup_call_pane_cp01_ParamLimits

0xeccb,	// (0x0008d4e4) bg_popup_call_pane_cp01

0xecd9,	// (0x0008d4f2) call_thumbnail_pane_cp02

0xed50,	// (0x0008d569) call_type_pane_cp022

0xed58,	// (0x0008d571) popup_call_audio_out_window_g1_ParamLimits

0xed58,	// (0x0008d571) popup_call_audio_out_window_g1

0xed6a,	// (0x0008d583) popup_call_audio_out_window_g2_ParamLimits

0xed6a,	// (0x0008d583) popup_call_audio_out_window_g2

0xed76,	// (0x0008d58f) popup_call_audio_out_window_g3_ParamLimits

0xed76,	// (0x0008d58f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0008d903) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0008d903) popup_call_audio_out_window_g

0xed88,	// (0x0008d5a1) popup_call_audio_out_window_t1_ParamLimits

0xed88,	// (0x0008d5a1) popup_call_audio_out_window_t1

0xeda0,	// (0x0008d5b9) popup_call_audio_out_window_t2_ParamLimits

0xeda0,	// (0x0008d5b9) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0008d90a) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0008d90a) popup_call_audio_out_window_t

0xedb5,	// (0x0008d5ce) bg_popup_call_pane_ParamLimits

0xedb5,	// (0x0008d5ce) bg_popup_call_pane

0x13f7,	// (0x0007fc10) call_thumbnail_pane_cp_ParamLimits

0x13f7,	// (0x0007fc10) call_thumbnail_pane_cp

0xee39,	// (0x0008d652) call_type_pane_cp01_ParamLimits

0xee39,	// (0x0008d652) call_type_pane_cp01

0xee7d,	// (0x0008d696) popup_call_audio_first_window_g1_ParamLimits

0xee7d,	// (0x0008d696) popup_call_audio_first_window_g1

0xeec9,	// (0x0008d6e2) popup_call_audio_first_window_g2_ParamLimits

0xeec9,	// (0x0008d6e2) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0008d90f) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0008d90f) popup_call_audio_first_window_g

0xef0d,	// (0x0008d726) popup_call_audio_first_window_t1_ParamLimits

0xef0d,	// (0x0008d726) popup_call_audio_first_window_t1

0xefb9,	// (0x0008d7d2) popup_call_audio_first_window_t4_ParamLimits

0xefb9,	// (0x0008d7d2) popup_call_audio_first_window_t4

0x141b,	// (0x0007fc34) popup_call_audio_first_window_t5_ParamLimits

0x141b,	// (0x0007fc34) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0008d914) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0008d914) popup_call_audio_first_window_t

0x144a,	// (0x0007fc63) bg_popup_call_pane_cp02

0x1454,	// (0x0007fc6d) call_type_pane_cp023

0x145c,	// (0x0007fc75) popup_call_audio_wait_window_g1

0x1464,	// (0x0007fc7d) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008d91b) popup_call_audio_wait_window_g

0x146c,	// (0x0007fc85) popup_call_audio_wait_window_t3

0x147a,	// (0x0007fc93) bg_popup_call_pane_cp03_ParamLimits

0x147a,	// (0x0007fc93) bg_popup_call_pane_cp03

0x14da,	// (0x0007fcf3) call_thumbnail_pane_cp011_ParamLimits

0x14da,	// (0x0007fcf3) call_thumbnail_pane_cp011

0x14e6,	// (0x0007fcff) call_type_pane_cp034_ParamLimits

0x14e6,	// (0x0007fcff) call_type_pane_cp034

0x1522,	// (0x0007fd3b) popup_call_audio_second_window_g1_ParamLimits

0x1522,	// (0x0007fd3b) popup_call_audio_second_window_g1

0x155e,	// (0x0007fd77) popup_call_audio_second_window_g2_ParamLimits

0x155e,	// (0x0007fd77) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0008d920) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0008d920) popup_call_audio_second_window_g

0x159a,	// (0x0007fdb3) popup_call_audio_second_window_t1_ParamLimits

0x159a,	// (0x0007fdb3) popup_call_audio_second_window_t1

0x161b,	// (0x0007fe34) popup_call_audio_second_window_t2_ParamLimits

0x161b,	// (0x0007fe34) popup_call_audio_second_window_t2

0x1651,	// (0x0007fe6a) popup_call_audio_second_window_t3_ParamLimits

0x1651,	// (0x0007fe6a) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0008d925) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0008d925) popup_call_audio_second_window_t

0x144a,	// (0x0007fc63) bg_popup_call_pane_cp04

0x1687,	// (0x0007fea0) list_conf_pane

0x168f,	// (0x0007fea8) popup_call_audio_conf_window_t1

0x169d,	// (0x0007feb6) call_thumbnail_pane_g1

0x16a5,	// (0x0007febe) bg_pinb_pane_ParamLimits

0x16a5,	// (0x0007febe) bg_pinb_pane

0x16b3,	// (0x0007fecc) find_pinb_pane

0x16bc,	// (0x0007fed5) listscroll_pinb_pane_ParamLimits

0x16bc,	// (0x0007fed5) listscroll_pinb_pane

0x16cb,	// (0x0007fee4) pinb_bg_pane_g1

0x16d5,	// (0x0007feee) pinb_bg_pane_g2

0x16e1,	// (0x0007fefa) pinb_bg_pane_g3

0x16ed,	// (0x0007ff06) pinb_bg_pane_g4

0x16f9,	// (0x0007ff12) pinb_bg_pane_g5

0x1705,	// (0x0007ff1e) pinb_bg_pane_g6

0x1710,	// (0x0007ff29) pinb_bg_pane_g7

0x171b,	// (0x0007ff34) pinb_bg_pane_g8

0x1726,	// (0x0007ff3f) pinb_bg_pane_g9

0x1730,	// (0x0007ff49) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0008d92c) pinb_bg_pane_g

0x174d,	// (0x0007ff66) grid_pinb_pane

0x1756,	// (0x0007ff6f) list_pinb_pane

0x175f,	// (0x0007ff78) scroll_pane_cp01_ParamLimits

0x175f,	// (0x0007ff78) scroll_pane_cp01

0x1771,	// (0x0007ff8a) find_pinb_pane_g1_ParamLimits

0x1771,	// (0x0007ff8a) find_pinb_pane_g1

0x1789,	// (0x0007ffa2) find_pinb_pane_t1

0x179b,	// (0x0007ffb4) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0008d946) find_pinb_pane_t

0x17b0,	// (0x0007ffc9) input_focus_pane_cp01_ParamLimits

0x17b0,	// (0x0007ffc9) input_focus_pane_cp01

0x17bc,	// (0x0007ffd5) cell_pinb_pane_ParamLimits

0x17bc,	// (0x0007ffd5) cell_pinb_pane

0x17e5,	// (0x0007fffe) cell_pinb_pane_g1_ParamLimits

0x17e5,	// (0x0007fffe) cell_pinb_pane_g1

0x17f5,	// (0x0008000e) cell_pinb_pane_g2_ParamLimits

0x17f5,	// (0x0008000e) cell_pinb_pane_g2

0x1801,	// (0x0008001a) cell_pinb_pane_g3_ParamLimits

0x1801,	// (0x0008001a) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0008d94b) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0008d94b) cell_pinb_pane_g

0x144a,	// (0x0007fc63) grid_highlight_pane_cp01

0x180d,	// (0x00080026) list_pinb_item_pane_ParamLimits

0x180d,	// (0x00080026) list_pinb_item_pane

0x144a,	// (0x0007fc63) list_highlight_pane_cp02

0x181f,	// (0x00080038) list_pinb_item_pane_g1_ParamLimits

0x181f,	// (0x00080038) list_pinb_item_pane_g1

0x182c,	// (0x00080045) list_pinb_item_pane_g2_ParamLimits

0x182c,	// (0x00080045) list_pinb_item_pane_g2

0x1838,	// (0x00080051) list_pinb_item_pane_g3_ParamLimits

0x1838,	// (0x00080051) list_pinb_item_pane_g3

0x1849,	// (0x00080062) list_pinb_item_pane_g4_ParamLimits

0x1849,	// (0x00080062) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0008d952) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0008d952) list_pinb_item_pane_g

0x1855,	// (0x0008006e) list_pinb_item_pane_t1_ParamLimits

0x1855,	// (0x0008006e) list_pinb_item_pane_t1

0x188a,	// (0x000800a3) calc_display_pane

0x18b2,	// (0x000800cb) calc_paper_pane

0x18d5,	// (0x000800ee) grid_calc_pane

0x144a,	// (0x0007fc63) bg_list_pane_cp01

0x1903,	// (0x0008011c) clock_g1

0x190b,	// (0x00080124) clock_g2

0x0001,

0xf142,	// (0x0008d95b) clock_g

0x1913,	// (0x0008012c) clock_t1_ParamLimits

0x1913,	// (0x0008012c) clock_t1

0x1928,	// (0x00080141) clock_t2_ParamLimits

0x1928,	// (0x00080141) clock_t2

0x193a,	// (0x00080153) clock_t3_ParamLimits

0x193a,	// (0x00080153) clock_t3

0x194c,	// (0x00080165) clock_t4_ParamLimits

0x194c,	// (0x00080165) clock_t4

0x195e,	// (0x00080177) clock_t5_ParamLimits

0x195e,	// (0x00080177) clock_t5

0x1973,	// (0x0008018c) clock_t6_ParamLimits

0x1973,	// (0x0008018c) clock_t6

0x1985,	// (0x0008019e) clock_t7_ParamLimits

0x1985,	// (0x0008019e) clock_t7

0x1997,	// (0x000801b0) clock_t8_ParamLimits

0x1997,	// (0x000801b0) clock_t8

0x19ab,	// (0x000801c4) clock_t9_ParamLimits

0x19ab,	// (0x000801c4) clock_t9

0x0008,

0xf147,	// (0x0008d960) clock_t_ParamLimits

0xf147,	// (0x0008d960) clock_t

0x19bf,	// (0x000801d8) popup_clock_analogue_window_cp02

0x19bf,	// (0x000801d8) popup_clock_digital_window_cp01

0x19c7,	// (0x000801e0) listscroll_help_pane

0x144a,	// (0x0007fc63) phob_pre_status_pane

0x19d1,	// (0x000801ea) grid_qdial_pane

0x16a5,	// (0x0007febe) listscroll_mce_pane

0x16a5,	// (0x0007febe) bg_notes_pane

0x19db,	// (0x000801f4) list_notes_pane

0x19e9,	// (0x00080202) scroll_pane_cp06

0x19fd,	// (0x00080216) bg_calc_paper_pane

0xb20d,	// (0x00089a26) list_calc_pane

0x1a11,	// (0x0008022a) bg_calc_display_pane

0x1a1d,	// (0x00080236) calc_display_pane_t1

0x1a2f,	// (0x00080248) calc_display_pane_t2

0xb227,	// (0x00089a40) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0008d973) calc_display_pane_t

0x1a41,	// (0x0008025a) cell_calc_pane_ParamLimits

0x1a41,	// (0x0008025a) cell_calc_pane

0x1a76,	// (0x0008028f) bg_calc_paper_pane_g1

0x1a82,	// (0x0008029b) bg_calc_paper_pane_g2

0x1a8e,	// (0x000802a7) bg_calc_paper_pane_g3

0x1a9a,	// (0x000802b3) bg_calc_paper_pane_g4

0x1aa6,	// (0x000802bf) bg_calc_paper_pane_g5

0x1ab2,	// (0x000802cb) bg_calc_paper_pane_g6

0x1ac1,	// (0x000802da) bg_calc_paper_pane_g7

0x1ad0,	// (0x000802e9) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0008d97a) bg_calc_paper_pane_g

0x1ae3,	// (0x000802fc) calc_bg_paper_pane_g9

0x1af6,	// (0x0008030f) list_calc_item_pane_ParamLimits

0x1af6,	// (0x0008030f) list_calc_item_pane

0x1b0b,	// (0x00080324) list_calc_item_pane_g1

0xb239,	// (0x00089a52) list_calc_item_pane_t1_ParamLimits

0xb239,	// (0x00089a52) list_calc_item_pane_t1

0x1b18,	// (0x00080331) list_calc_item_pane_t2_ParamLimits

0x1b18,	// (0x00080331) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0008d98b) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0008d98b) list_calc_item_pane_t

0x1b32,	// (0x0008034b) cell_calc_pane_g1

0x1b54,	// (0x0008036d) grid_highlight_pane_cp02

0x1b76,	// (0x0008038f) bg_calc_display_pane_g1

0x1b7f,	// (0x00080398) bg_calc_display_pane_g2

0x1b89,	// (0x000803a2) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0008d995) bg_calc_display_pane_g

0x1b92,	// (0x000803ab) cell_qdial_pane_ParamLimits

0x1b92,	// (0x000803ab) cell_qdial_pane

0x1ba6,	// (0x000803bf) cell_qdial_pane_g1_ParamLimits

0x1ba6,	// (0x000803bf) cell_qdial_pane_g1

0x1bbc,	// (0x000803d5) cell_qdial_pane_g2_ParamLimits

0x1bbc,	// (0x000803d5) cell_qdial_pane_g2

0x1bcd,	// (0x000803e6) cell_qdial_pane_g3_ParamLimits

0x1bcd,	// (0x000803e6) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0008d99c) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0008d99c) cell_qdial_pane_g

0x1bef,	// (0x00080408) cell_qdial_pane_t1_ParamLimits

0x1bef,	// (0x00080408) cell_qdial_pane_t1

0x1c07,	// (0x00080420) cell_qdial_pane_t2_ParamLimits

0x1c07,	// (0x00080420) cell_qdial_pane_t2

0x1c1a,	// (0x00080433) cell_qdial_pane_t3_ParamLimits

0x1c1a,	// (0x00080433) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0008d9a5) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0008d9a5) cell_qdial_pane_t

0x144a,	// (0x0007fc63) grid_highlight_pane_cp04

0x1c2d,	// (0x00080446) thumbnail_qdial_pane_ParamLimits

0x1c2d,	// (0x00080446) thumbnail_qdial_pane

0x1c89,	// (0x000804a2) list_help_pane

0x1c92,	// (0x000804ab) scroll_pane_cp02

0x1c9b,	// (0x000804b4) help_list_pane_t1_ParamLimits

0x1c9b,	// (0x000804b4) help_list_pane_t1

0xb24b,	// (0x00089a64) bg_notes_pane_g2

0xb253,	// (0x00089a6c) bg_notes_pane_g3

0xb25b,	// (0x00089a74) notes_bg_pane_g1

0xb263,	// (0x00089a7c) notes_bg_pane_g4

0xb26b,	// (0x00089a84) notes_bg_pane_g5

0xb273,	// (0x00089a8c) notes_bg_pane_g6

0xb27b,	// (0x00089a94) notes_bg_pane_g7

0xb283,	// (0x00089a9c) notes_bg_pane_g8

0xb28b,	// (0x00089aa4) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0008d9c3) notes_bg_pane_g

0x1cb8,	// (0x000804d1) list_notes_text_pane_ParamLimits

0x1cb8,	// (0x000804d1) list_notes_text_pane

0x1ccd,	// (0x000804e6) list_notes_text_pane_g1

0x0364,	// (0x0007eb7d) list_notes_text_pane_t1

0x1ce7,	// (0x00080500) listscroll_cale_week_pane

0x1d1c,	// (0x00080535) bg_cale_heading_pane

0x1d34,	// (0x0008054d) bg_cale_pane_cp01

0x1d52,	// (0x0008056b) cale_week_corner_pane

0x1d71,	// (0x0008058a) cale_week_day_heading_pane

0x1d8e,	// (0x000805a7) cale_week_scroll_pane_g1

0x1da1,	// (0x000805ba) cale_week_scroll_pane_g2

0x1db9,	// (0x000805d2) cale_week_scroll_pane_g3

0x1dd1,	// (0x000805ea) cale_week_scroll_pane_g4

0x1de9,	// (0x00080602) cale_week_scroll_pane_g5

0x1e09,	// (0x00080622) cale_week_scroll_pane_g6

0x1e29,	// (0x00080642) cale_week_scroll_pane_g7

0x1e49,	// (0x00080662) cale_week_scroll_pane_g8

0x1e6d,	// (0x00080686) cale_week_scroll_pane_g9

0x1e85,	// (0x0008069e) cale_week_scroll_pane_g10

0x1e9d,	// (0x000806b6) cale_week_scroll_pane_g11

0x1eb5,	// (0x000806ce) cale_week_scroll_pane_g12

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g13

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g14

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0008d9d2) cale_week_scroll_pane_g

0x1ee5,	// (0x000806fe) cale_week_time_pane

0x1f09,	// (0x00080722) grid_cale_week_pane

0x1f41,	// (0x0008075a) scroll_pane_cp08

0x1f5e,	// (0x00080777) cell_cale_week_pane_ParamLimits

0x1f5e,	// (0x00080777) cell_cale_week_pane

0x1fec,	// (0x00080805) cale_week_day_heading_pane_t1

0x2031,	// (0x0008084a) cale_week_day_heading_pane_t2

0x207b,	// (0x00080894) cale_week_day_heading_pane_t3

0x20c5,	// (0x000808de) cale_week_day_heading_pane_t4

0x210f,	// (0x00080928) cale_week_day_heading_pane_t5

0x2161,	// (0x0008097a) cale_week_day_heading_pane_t6

0x21b3,	// (0x000809cc) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0008d9f1) cale_week_day_heading_pane_t

0x21f8,	// (0x00080a11) bg_cale_side_pane

0x2206,	// (0x00080a1f) cale_week_time_pane_t1

0x2220,	// (0x00080a39) cale_week_time_pane_t2

0x223a,	// (0x00080a53) cale_week_time_pane_t3

0x2254,	// (0x00080a6d) cale_week_time_pane_t4

0x226e,	// (0x00080a87) cale_week_time_pane_t5

0x2288,	// (0x00080aa1) cale_week_time_pane_t6

0x22a2,	// (0x00080abb) cale_week_time_pane_t7

0x22bc,	// (0x00080ad5) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0008da00) cale_week_time_pane_t

0x22dc,	// (0x00080af5) cell_cale_week_pane_g2

0x22fb,	// (0x00080b14) cell_cale_week_pane_g3_ParamLimits

0x22fb,	// (0x00080b14) cell_cale_week_pane_g3

0x2313,	// (0x00080b2c) grid_highlight_pane_cp07

0x231b,	// (0x00080b34) listscroll_gms_pane

0x2325,	// (0x00080b3e) grid_gms_pane

0x232e,	// (0x00080b47) listscroll_gms_pane_g1

0x2336,	// (0x00080b4f) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0008da11) listscroll_gms_pane_g

0x233e,	// (0x00080b57) scroll_pane_cp010

0x2349,	// (0x00080b62) cell_gms_pane_ParamLimits

0x2349,	// (0x00080b62) cell_gms_pane

0x235c,	// (0x00080b75) cell_gms_pane_g1

0x2364,	// (0x00080b7d) cell_gms_pane_g2

0x236c,	// (0x00080b85) cell_gms_pane_g3

0x2375,	// (0x00080b8e) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0008da16) cell_gms_pane_g

0x237e,	// (0x00080b97) grid_highlight_pane_cp09

0x4dd1,	// (0x000835ea) phob_pre_status_pane_g1

0x4dd9,	// (0x000835f2) phob_pre_status_pane_g2

0x4de1,	// (0x000835fa) phob_pre_status_pane_g3

0x4de9,	// (0x00083602) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0008de05) phob_pre_status_pane_g

0x4df9,	// (0x00083612) phob_pre_status_pane_t1

0x4e07,	// (0x00083620) phob_pre_status_pane_t2

0x4e17,	// (0x00083630) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0008de10) phob_pre_status_pane_t

0x144a,	// (0x0007fc63) bg_list_pane_cp05

0x238e,	// (0x00080ba7) grid_vorec_pane

0x2398,	// (0x00080bb1) vorec_t1

0x23a6,	// (0x00080bbf) vorec_t2

0x23b4,	// (0x00080bcd) vorec_t3

0x23c2,	// (0x00080bdb) vorec_t4

0x23d0,	// (0x00080be9) vorec_t5

0xb293,	// (0x00089aac) vorec_t6

0x0006,

0xf206,	// (0x0008da1f) vorec_t

0x23ec,	// (0x00080c05) wait_bar_pane_cp01

0x23f4,	// (0x00080c0d) cell_vorec_pane_ParamLimits

0x23f4,	// (0x00080c0d) cell_vorec_pane

0x2407,	// (0x00080c20) cell_vorec_pane_g1

0x144a,	// (0x0007fc63) grid_highlight_pane_cp05

0x2426,	// (0x00080c3f) cams_zoom_pane

0x2435,	// (0x00080c4e) image_vga_pane

0x244f,	// (0x00080c68) main_camera_pane_g1

0x2461,	// (0x00080c7a) main_camera_pane_g2

0x2471,	// (0x00080c8a) main_camera_pane_g3

0x2481,	// (0x00080c9a) main_camera_pane_g4

0x2491,	// (0x00080caa) main_camera_pane_g5

0x24a1,	// (0x00080cba) main_camera_pane_g6

0x24b3,	// (0x00080ccc) main_camera_pane_g7

0x0007,

0xf215,	// (0x0008da2e) main_camera_pane_g

0x24cf,	// (0x00080ce8) main_camera_pane_t1

0x24e5,	// (0x00080cfe) main_camera_pane_t2

0x0001,

0xf226,	// (0x0008da3f) main_camera_pane_t

0x251f,	// (0x00080d38) cams_zoom_pane_cp_ParamLimits

0x251f,	// (0x00080d38) cams_zoom_pane_cp

0x2547,	// (0x00080d60) image_cif_pane_ParamLimits

0x2547,	// (0x00080d60) image_cif_pane

0x257d,	// (0x00080d96) image_subqcif_pane

0x2585,	// (0x00080d9e) main_video_pane_g1_ParamLimits

0x2585,	// (0x00080d9e) main_video_pane_g1

0x25a9,	// (0x00080dc2) main_video_pane_g2_ParamLimits

0x25a9,	// (0x00080dc2) main_video_pane_g2

0x25dd,	// (0x00080df6) main_video_pane_g3_ParamLimits

0x25dd,	// (0x00080df6) main_video_pane_g3

0x260b,	// (0x00080e24) main_video_pane_g4_ParamLimits

0x260b,	// (0x00080e24) main_video_pane_g4

0x2639,	// (0x00080e52) main_video_pane_g5_ParamLimits

0x2639,	// (0x00080e52) main_video_pane_g5

0x2651,	// (0x00080e6a) main_video_pane_g6_ParamLimits

0x2651,	// (0x00080e6a) main_video_pane_g6

0x0006,

0xf22b,	// (0x0008da44) main_video_pane_g_ParamLimits

0xf22b,	// (0x0008da44) main_video_pane_g

0x267c,	// (0x00080e95) main_video_pane_t1_ParamLimits

0x267c,	// (0x00080e95) main_video_pane_t1

0x26c5,	// (0x00080ede) cams_zoom_pane_g1

0x26ce,	// (0x00080ee7) cams_zoom_pane_g2

0x26d7,	// (0x00080ef0) cams_zoom_pane_g3

0x26e0,	// (0x00080ef9) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0008da53) cams_zoom_pane_g

0x26fd,	// (0x00080f16) grid_cams_pane

0x2717,	// (0x00080f30) linegrid_cams_pane

0x272b,	// (0x00080f44) cell_cams_pane_ParamLimits

0x272b,	// (0x00080f44) cell_cams_pane

0x274b,	// (0x00080f64) cams_burst_image_pane

0x2753,	// (0x00080f6c) cell_cams_pane_g1

0x144a,	// (0x0007fc63) grid_highlight_pane_cp03

0x1b32,	// (0x0008034b) mp_bg_pane_g1

0x144a,	// (0x0007fc63) bg_list_pane_cp03

0xc95a,	// (0x0008b173) bg_mp_pane

0xc962,	// (0x0008b17b) grid_mp_pane

0xc96a,	// (0x0008b183) media_player_g1

0xc972,	// (0x0008b18b) media_player_t1

0xc980,	// (0x0008b199) media_player_t2

0xc98e,	// (0x0008b1a7) media_player_t3

0xc99c,	// (0x0008b1b5) media_player_t4

0xc9aa,	// (0x0008b1c3) media_player_t5

0xc9b8,	// (0x0008b1d1) media_player_t6

0xc9c6,	// (0x0008b1df) media_player_t7

0x0006,

0xf5d6,	// (0x0008ddef) media_player_t

0xc9d4,	// (0x0008b1ed) wait_bar_pane_cp02

0xf5bb,	// (0x0008ddd4) main_usb_pane_t

0x4dc8,	// (0x000835e1) cell_mp_pane

0x1b32,	// (0x0008034b) cell_mp_pane_g1

0x144a,	// (0x0007fc63) grid_highlight_pane_cp06

0x2773,	// (0x00080f8c) grid_skin_colour_pane

0x277b,	// (0x00080f94) list_highlight_pane_cp03

0x2783,	// (0x00080f9c) skin_g1

0x278b,	// (0x00080fa4) skin_t1

0x279a,	// (0x00080fb3) skin_t2

0x0001,

0xf26f,	// (0x0008da88) skin_t

0x27a8,	// (0x00080fc1) cell_skin_colour_pane_ParamLimits

0x27a8,	// (0x00080fc1) cell_skin_colour_pane

0x27c8,	// (0x00080fe1) cell_skin_colour_pane_g1

0x2833,	// (0x0008104c) call_video_g1_ParamLimits

0x2833,	// (0x0008104c) call_video_g1

0x284f,	// (0x00081068) call_video_g2_ParamLimits

0x284f,	// (0x00081068) call_video_g2

0x0001,

0xf274,	// (0x0008da8d) call_video_g_ParamLimits

0xf274,	// (0x0008da8d) call_video_g

0x28a1,	// (0x000810ba) call_video_uplink_pane_cp1_ParamLimits

0x28a1,	// (0x000810ba) call_video_uplink_pane_cp1

0x2906,	// (0x0008111f) call_video_uplink_pane_cp2

0x2948,	// (0x00081161) video_down_crop_pane_ParamLimits

0x2948,	// (0x00081161) video_down_crop_pane

0x2a3f,	// (0x00081258) video_down_pane_ParamLimits

0x2a3f,	// (0x00081258) video_down_pane

0x2b36,	// (0x0008134f) video_down_subqcif_pane_ParamLimits

0x2b36,	// (0x0008134f) video_down_subqcif_pane

0x2b4e,	// (0x00081367) video_down_subqcif_pane_cp_ParamLimits

0x2b4e,	// (0x00081367) video_down_subqcif_pane_cp

0x2b8b,	// (0x000813a4) im_reading_pane_ParamLimits

0x2b8b,	// (0x000813a4) im_reading_pane

0x2b9d,	// (0x000813b6) im_writing_pane_ParamLimits

0x2b9d,	// (0x000813b6) im_writing_pane

0x2bbb,	// (0x000813d4) im_reading_pane_t1

0x2bf4,	// (0x0008140d) list_im_pane

0x2c05,	// (0x0008141e) scroll_pane_cp07

0x2c1e,	// (0x00081437) im_writing_pane_t1_ParamLimits

0x2c1e,	// (0x00081437) im_writing_pane_t1

0x2c33,	// (0x0008144c) im_writing_pane_t2_ParamLimits

0x2c33,	// (0x0008144c) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0008da97) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0008da97) im_writing_pane_t

0x144a,	// (0x0007fc63) input_focus_pane_cp04

0x144a,	// (0x0007fc63) input_focus_pane_cp05

0x2c50,	// (0x00081469) list_im_single_pane_ParamLimits

0x2c50,	// (0x00081469) list_im_single_pane

0x2c64,	// (0x0008147d) list_single_im_pane_t1

0x4d88,	// (0x000835a1) blid_accuracy_pane

0x4d90,	// (0x000835a9) blid_compass_pane

0x4d9a,	// (0x000835b3) main_location_t1

0x4daa,	// (0x000835c3) main_location_t2

0x4dba,	// (0x000835d3) main_location_t3

0x0002,

0xf5e5,	// (0x0008ddfe) main_location_t

0x144a,	// (0x0007fc63) aid_levels_location

0x1b32,	// (0x0008034b) blid_accuracy_pane_g1

0x1b32,	// (0x0008034b) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0008daf9) blid_accuracy_pane_g

0x2c9e,	// (0x000814b7) wml_content_pane

0x2cdc,	// (0x000814f5) wml_button_pane_ParamLimits

0x2cdc,	// (0x000814f5) wml_button_pane

0x2cf0,	// (0x00081509) wml_list_single_large_pane_ParamLimits

0x2cf0,	// (0x00081509) wml_list_single_large_pane

0x2d05,	// (0x0008151e) wml_list_single_medium_pane_ParamLimits

0x2d05,	// (0x0008151e) wml_list_single_medium_pane

0x2d1b,	// (0x00081534) wml_list_single_small_pane_ParamLimits

0x2d1b,	// (0x00081534) wml_list_single_small_pane

0x2d33,	// (0x0008154c) wml_selection_box_pane_ParamLimits

0x2d33,	// (0x0008154c) wml_selection_box_pane

0x2d46,	// (0x0008155f) wml_list_single_pane_t1

0x2d55,	// (0x0008156e) wml_list_single_medium_pane_t1

0x2d64,	// (0x0008157d) wml_list_single_large_pane_t1

0x2d73,	// (0x0008158c) input_focus_pane_cp02_ParamLimits

0x2d73,	// (0x0008158c) input_focus_pane_cp02

0x2d86,	// (0x0008159f) wml_selection_box_pane_g1

0x2d8f,	// (0x000815a8) wml_selection_box_pane_t1_ParamLimits

0x2d8f,	// (0x000815a8) wml_selection_box_pane_t1

0x16a5,	// (0x0007febe) bg_wml_button_pane_ParamLimits

0x16a5,	// (0x0007febe) bg_wml_button_pane

0x2da7,	// (0x000815c0) wml_button_pane_g1

0x2daf,	// (0x000815c8) wml_button_pane_t1

0x2da7,	// (0x000815c0) wml_button_bg_pane_g1

0x2dbf,	// (0x000815d8) wml_button_bg_pane_g2

0x2dc7,	// (0x000815e0) wml_button_bg_pane_g3

0x2dcf,	// (0x000815e8) wml_button_bg_pane_g4

0x2dd7,	// (0x000815f0) wml_button_bg_pane_g5

0x2ddf,	// (0x000815f8) wml_button_bg_pane_g6

0x2de7,	// (0x00081600) wml_button_bg_pane_g7

0x2def,	// (0x00081608) wml_button_bg_pane_g8

0x2df7,	// (0x00081610) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0008da9c) wml_button_bg_pane_g

0x2dff,	// (0x00081618) bg_list_pane_cp02

0x2e07,	// (0x00081620) mce_header_pane_ParamLimits

0x2e07,	// (0x00081620) mce_header_pane

0x2e1d,	// (0x00081636) mce_icon_pane

0x2e1d,	// (0x00081636) mce_image_pane

0x2e26,	// (0x0008163f) mce_text_pane_ParamLimits

0x2e26,	// (0x0008163f) mce_text_pane

0x2e39,	// (0x00081652) scroll_pane_cp03

0x2cd4,	// (0x000814ed) scroll_pane_cp04

0x2e43,	// (0x0008165c) scroll_pane_cp05_ParamLimits

0x2e43,	// (0x0008165c) scroll_pane_cp05

0x2e4f,	// (0x00081668) mce_header_field_pane_ParamLimits

0x2e4f,	// (0x00081668) mce_header_field_pane

0x2e66,	// (0x0008167f) mce_header_field_pane_2_ParamLimits

0x2e66,	// (0x0008167f) mce_header_field_pane_2

0x2e7c,	// (0x00081695) mce_header_field_pane_3

0x2e84,	// (0x0008169d) list_single_mce_message_pane_ParamLimits

0x2e84,	// (0x0008169d) list_single_mce_message_pane

0x2e99,	// (0x000816b2) list_single_mce_smart_pane_ParamLimits

0x2e99,	// (0x000816b2) list_single_mce_smart_pane

0x2eb9,	// (0x000816d2) input_focus_pane_cp03

0x2ec2,	// (0x000816db) list_header_data_pane

0x2eca,	// (0x000816e3) mce_header_field_pane_t1

0x2eda,	// (0x000816f3) list_single_mce_header_pane_ParamLimits

0x2eda,	// (0x000816f3) list_single_mce_header_pane

0x2eee,	// (0x00081707) list_single_mce_header_pane_t1

0x2efd,	// (0x00081716) list_single_mce_message_pane_g1

0x2f05,	// (0x0008171e) list_single_mce_message_pane_t1

0x2f39,	// (0x00081752) bg_cale_heading_pane_cp01_ParamLimits

0x2f39,	// (0x00081752) bg_cale_heading_pane_cp01

0x2f68,	// (0x00081781) bg_cale_pane_cp02_ParamLimits

0x2f68,	// (0x00081781) bg_cale_pane_cp02

0x2f95,	// (0x000817ae) cale_month_corner_pane

0x2fb4,	// (0x000817cd) cale_month_day_heading_pane_ParamLimits

0x2fb4,	// (0x000817cd) cale_month_day_heading_pane

0x2ffb,	// (0x00081814) cale_month_pane_g1_ParamLimits

0x2ffb,	// (0x00081814) cale_month_pane_g1

0x301f,	// (0x00081838) cale_month_pane_g2_ParamLimits

0x301f,	// (0x00081838) cale_month_pane_g2

0x304f,	// (0x00081868) cale_month_pane_g3_ParamLimits

0x304f,	// (0x00081868) cale_month_pane_g3

0x308b,	// (0x000818a4) cale_month_pane_g4_ParamLimits

0x308b,	// (0x000818a4) cale_month_pane_g4

0x30c7,	// (0x000818e0) cale_month_pane_g5_ParamLimits

0x30c7,	// (0x000818e0) cale_month_pane_g5

0x310f,	// (0x00081928) cale_month_pane_g6_ParamLimits

0x310f,	// (0x00081928) cale_month_pane_g6

0x315b,	// (0x00081974) cale_month_pane_g7_ParamLimits

0x315b,	// (0x00081974) cale_month_pane_g7

0x31af,	// (0x000819c8) cale_month_pane_g8_ParamLimits

0x31af,	// (0x000819c8) cale_month_pane_g8

0x3203,	// (0x00081a1c) cale_month_pane_g9_ParamLimits

0x3203,	// (0x00081a1c) cale_month_pane_g9

0x3255,	// (0x00081a6e) cale_month_pane_g10_ParamLimits

0x3255,	// (0x00081a6e) cale_month_pane_g10

0x32a7,	// (0x00081ac0) cale_month_pane_g11_ParamLimits

0x32a7,	// (0x00081ac0) cale_month_pane_g11

0x32f9,	// (0x00081b12) cale_month_pane_g12_ParamLimits

0x32f9,	// (0x00081b12) cale_month_pane_g12

0x334b,	// (0x00081b64) cale_month_pane_g13_ParamLimits

0x334b,	// (0x00081b64) cale_month_pane_g13

0x000c,

0xf296,	// (0x0008daaf) cale_month_pane_g_ParamLimits

0xf296,	// (0x0008daaf) cale_month_pane_g

0x33af,	// (0x00081bc8) cale_month_week_pane

0x33d3,	// (0x00081bec) grid_cale_month_pane_ParamLimits

0x33d3,	// (0x00081bec) grid_cale_month_pane

0x3411,	// (0x00081c2a) cale_month_day_heading_pane_t1

0x3497,	// (0x00081cb0) cale_month_day_heading_pane_t2

0x3528,	// (0x00081d41) cale_month_day_heading_pane_t3

0x35b9,	// (0x00081dd2) cale_month_day_heading_pane_t4

0x364e,	// (0x00081e67) cale_month_day_heading_pane_t5

0x36ef,	// (0x00081f08) cale_month_day_heading_pane_t6

0x3790,	// (0x00081fa9) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0008daca) cale_month_day_heading_pane_t

0x21f8,	// (0x00080a11) bg_cale_side_pane_cp01

0x3839,	// (0x00082052) cale_month_week_pane_t1

0x3852,	// (0x0008206b) cale_month_week_pane_t2

0x386b,	// (0x00082084) cale_month_week_pane_t3

0x3884,	// (0x0008209d) cale_month_week_pane_t4

0x389d,	// (0x000820b6) cale_month_week_pane_t5

0x38b6,	// (0x000820cf) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0008dad9) cale_month_week_pane_t

0x38cf,	// (0x000820e8) cell_cale_month_pane_ParamLimits

0x38cf,	// (0x000820e8) cell_cale_month_pane

0xb2a1,	// (0x00089aba) cell_cale_month_pane_g1

0x39f9,	// (0x00082212) cell_cale_month_pane_t1_ParamLimits

0x39f9,	// (0x00082212) cell_cale_month_pane_t1

0x2313,	// (0x00080b2c) grid_highlight_pane_cp08

0x1b32,	// (0x0008034b) main_smil_g1

0x3a19,	// (0x00082232) smil_status_pane

0x3a22,	// (0x0008223b) smil_text_pane

0xc87a,	// (0x0008b093) bg_popup_call3_rect_pane_g8

0xc882,	// (0x0008b09b) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0008dd92) bg_popup_call3_rect_pane_g

0xcb1d,	// (0x0008b336) smil_status_volume_pane_g1

0x3a36,	// (0x0008224f) smil_status_pane_t1

0xcb50,	// (0x0008b369) volume_smil_pane

0x3a4d,	// (0x00082266) list_smil_text_pane

0x3a57,	// (0x00082270) scroll_pane_cp011

0x3a62,	// (0x0008227b) smil_text_list_pane_t1_ParamLimits

0x3a62,	// (0x0008227b) smil_text_list_pane_t1

0xb2ad,	// (0x00089ac6) aid_volume_smil_ParamLimits

0xb2ad,	// (0x00089ac6) aid_volume_smil

0x1b32,	// (0x0008034b) smil_volume_pane_g1

0x1b32,	// (0x0008034b) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0008daf9) smil_volume_pane_g

0x1ce7,	// (0x00080500) listscroll_cale_day_pane

0x3a9e,	// (0x000822b7) bg_cale_pane

0x3ab6,	// (0x000822cf) list_cale_pane

0x3ad9,	// (0x000822f2) scroll_pane_cp09

0x3aea,	// (0x00082303) cale_bg_pane_g1

0x3af2,	// (0x0008230b) cale_bg_pane_g2

0x3afa,	// (0x00082313) cale_bg_pane_g3

0x3b02,	// (0x0008231b) cale_bg_pane_g4

0x3b0a,	// (0x00082323) cale_bg_pane_g5

0x3b12,	// (0x0008232b) cale_bg_pane_g6

0x3b1a,	// (0x00082333) cale_bg_pane_g7

0x3b22,	// (0x0008233b) cale_bg_pane_g8

0x3b2a,	// (0x00082343) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0008dafe) cale_bg_pane_g

0x3b32,	// (0x0008234b) list_cale_time_pane_ParamLimits

0x3b32,	// (0x0008234b) list_cale_time_pane

0x3b45,	// (0x0008235e) list_cale_time_pane_g1_ParamLimits

0x3b45,	// (0x0008235e) list_cale_time_pane_g1

0x3b51,	// (0x0008236a) list_cale_time_pane_g2_ParamLimits

0x3b51,	// (0x0008236a) list_cale_time_pane_g2

0x3b5e,	// (0x00082377) list_cale_time_pane_g3_ParamLimits

0x3b5e,	// (0x00082377) list_cale_time_pane_g3

0x3b6c,	// (0x00082385) list_cale_time_pane_g4_ParamLimits

0x3b6c,	// (0x00082385) list_cale_time_pane_g4

0x3b7a,	// (0x00082393) list_cale_time_pane_g5_ParamLimits

0x3b7a,	// (0x00082393) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0008db11) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0008db11) list_cale_time_pane_g

0x3b95,	// (0x000823ae) list_cale_time_pane_t1_ParamLimits

0x3b95,	// (0x000823ae) list_cale_time_pane_t1

0x3bbd,	// (0x000823d6) list_cale_time_pane_t2_ParamLimits

0x3bbd,	// (0x000823d6) list_cale_time_pane_t2

0x40a4,	// (0x000828bd) aid_blid_cardinal_pane

0x40e2,	// (0x000828fb) compass_pane_t4

0x3be5,	// (0x000823fe) list_cale_time_pane_t4_ParamLimits

0x3be5,	// (0x000823fe) list_cale_time_pane_t4

0x40f0,	// (0x00082909) compass_pane_t5

0x40fe,	// (0x00082917) compass_pane_t6

0x410c,	// (0x00082925) compass_pane_t7

0xb542,	// (0x00089d5b) navi_pane_cc_t1

0xb6a9,	// (0x00089ec2) aid_phob_thumbnail_center_pane

0x47a0,	// (0x00082fb9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0008db1e) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0008db1e) list_cale_time_pane_t

0xeccb,	// (0x0008d4e4) bg_popup_window_pane_cp02_ParamLimits

0xeccb,	// (0x0008d4e4) bg_popup_window_pane_cp02

0x3c0d,	// (0x00082426) heading_pane_cp01_ParamLimits

0x3c0d,	// (0x00082426) heading_pane_cp01

0x3c19,	// (0x00082432) loc_req_pane_ParamLimits

0x3c19,	// (0x00082432) loc_req_pane

0x3c29,	// (0x00082442) loc_type_pane_ParamLimits

0x3c29,	// (0x00082442) loc_type_pane

0x3c3b,	// (0x00082454) loc_type_pane_t1_ParamLimits

0x3c3b,	// (0x00082454) loc_type_pane_t1

0x3c4d,	// (0x00082466) loc_type_pane_t2_ParamLimits

0x3c4d,	// (0x00082466) loc_type_pane_t2

0x3c5f,	// (0x00082478) loc_type_pane_t3_ParamLimits

0x3c5f,	// (0x00082478) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0008db25) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0008db25) loc_type_pane_t

0x3c71,	// (0x0008248a) list_loc_req_pane

0x3c7b,	// (0x00082494) scroll_pane_cp012

0x3c86,	// (0x0008249f) list_single_loc_request_popup_menu_pane_ParamLimits

0x3c86,	// (0x0008249f) list_single_loc_request_popup_menu_pane

0x3c93,	// (0x000824ac) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3c93,	// (0x000824ac) list_single_loc_request_popup_menu_pane_g1

0x3c9f,	// (0x000824b8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3c9f,	// (0x000824b8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0008db2c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0008db2c) list_single_loc_request_popup_menu_pane_g

0x3cab,	// (0x000824c4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3cab,	// (0x000824c4) list_single_loc_request_popup_menu_pane_t1

0x16a5,	// (0x0007febe) bg_popup_window_pane_cp03_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_window_pane_cp03

0xb2cf,	// (0x00089ae8) heading_loc_req_pane_ParamLimits

0xb2cf,	// (0x00089ae8) heading_loc_req_pane

0x3cc1,	// (0x000824da) popup_dyc_status_message_window_g1_ParamLimits

0x3cc1,	// (0x000824da) popup_dyc_status_message_window_g1

0x3cd5,	// (0x000824ee) popup_dyc_status_message_window_t1_ParamLimits

0x3cd5,	// (0x000824ee) popup_dyc_status_message_window_t1

0x3cea,	// (0x00082503) popup_dyc_status_message_window_t2_ParamLimits

0x3cea,	// (0x00082503) popup_dyc_status_message_window_t2

0x3cff,	// (0x00082518) popup_dyc_status_message_window_t3_ParamLimits

0x3cff,	// (0x00082518) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0008db31) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0008db31) popup_dyc_status_message_window_t

0x144a,	// (0x0007fc63) bg_heading_pane_cp01

0x3d1b,	// (0x00082534) heading_loc_req_pane_g1

0x3d23,	// (0x0008253c) heading_loc_req_pane_g2

0x3d2b,	// (0x00082544) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0008db38) heading_loc_req_pane_g

0x3d33,	// (0x0008254c) heading_loc_req_pane_t1

0x3d4e,	// (0x00082567) bg_popup_sub_pane_cp01_ParamLimits

0x3d4e,	// (0x00082567) bg_popup_sub_pane_cp01

0x3d5c,	// (0x00082575) popup_cale_events_window_g1_ParamLimits

0x3d5c,	// (0x00082575) popup_cale_events_window_g1

0x3d7c,	// (0x00082595) popup_cale_events_window_g2_ParamLimits

0x3d7c,	// (0x00082595) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0008db6c) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0008db6c) popup_cale_events_window_g

0x3d9c,	// (0x000825b5) popup_cale_events_window_t1_ParamLimits

0x3d9c,	// (0x000825b5) popup_cale_events_window_t1

0x3dae,	// (0x000825c7) popup_cale_events_window_t2_ParamLimits

0x3dae,	// (0x000825c7) popup_cale_events_window_t2

0x3dec,	// (0x00082605) popup_cale_events_window_t3_ParamLimits

0x3dec,	// (0x00082605) popup_cale_events_window_t3

0x3e26,	// (0x0008263f) popup_cale_events_window_t4_ParamLimits

0x3e26,	// (0x0008263f) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0008db71) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0008db71) popup_cale_events_window_t

0x3e5c,	// (0x00082675) call_type_pane

0x3e6c,	// (0x00082685) popup_call_status_window_g1

0x3e80,	// (0x00082699) popup_call_status_window_g2

0x3e94,	// (0x000826ad) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0008db7a) popup_call_status_window_g

0x3ea3,	// (0x000826bc) call_type_pane_g1

0x3eac,	// (0x000826c5) call_type_pane_g2

0x0001,

0xf368,	// (0x0008db81) call_type_pane_g

0x144a,	// (0x0007fc63) bg_popup_sub_pane_cp02

0x3eb5,	// (0x000826ce) listscroll_popup_wml_pane

0x3ebd,	// (0x000826d6) list_wml_pane

0x3ec7,	// (0x000826e0) scroll_pane_cp013

0x3ed2,	// (0x000826eb) list_single_graphic_popup_wml_pane_ParamLimits

0x3ed2,	// (0x000826eb) list_single_graphic_popup_wml_pane

0x1b32,	// (0x0008034b) list_single_graphic_popup_wml_pane_g1

0xb2db,	// (0x00089af4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0008db86) list_single_graphic_popup_wml_pane_g

0xb2e3,	// (0x00089afc) list_single_graphic_popup_wml_pane_t1

0xb2f9,	// (0x00089b12) aid_call_pane

0x169d,	// (0x0007feb6) popup_clock_analogue_window_g1

0x169d,	// (0x0007feb6) popup_clock_analogue_window_g2

0xb301,	// (0x00089b1a) popup_clock_analogue_window_g3

0xb301,	// (0x00089b1a) popup_clock_analogue_window_g4

0x1b32,	// (0x0008034b) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0008db8b) popup_clock_analogue_window_g

0xb309,	// (0x00089b22) popup_clock_analogue_window_t1

0xb317,	// (0x00089b30) clock_digital_number_pane_ParamLimits

0xb317,	// (0x00089b30) clock_digital_number_pane

0xb323,	// (0x00089b3c) clock_digital_number_pane_cp02_ParamLimits

0xb323,	// (0x00089b3c) clock_digital_number_pane_cp02

0xb32f,	// (0x00089b48) clock_digital_number_pane_cp03_ParamLimits

0xb32f,	// (0x00089b48) clock_digital_number_pane_cp03

0xb33b,	// (0x00089b54) clock_digital_number_pane_cp04_ParamLimits

0xb33b,	// (0x00089b54) clock_digital_number_pane_cp04

0xb34b,	// (0x00089b64) clock_digital_separator_pane_ParamLimits

0xb34b,	// (0x00089b64) clock_digital_separator_pane

0xb357,	// (0x00089b70) popup_clock_digital_window_t1

0x1b32,	// (0x0008034b) clock_digital_number_pane_g1

0x1b32,	// (0x0008034b) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0008daf9) clock_digital_number_pane_g

0x1b32,	// (0x0008034b) clock_digital_separator_pane_g1

0x1b32,	// (0x0008034b) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0008daf9) clock_digital_separator_pane_g

0x144a,	// (0x0007fc63) bg_popup_window_pane_cp04

0xb374,	// (0x00089b8d) heading_pane_cp03

0xb37c,	// (0x00089b95) listscroll_popup_gms_pane

0xb384,	// (0x00089b9d) grid_large_graphic_popup_pane

0xb38e,	// (0x00089ba7) listscroll_popup_gms_pane_g1

0xb396,	// (0x00089baf) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0008db96) listscroll_popup_gms_pane_g

0x2cd4,	// (0x000814ed) scroll_pane_cp014

0x3ee6,	// (0x000826ff) cell_large_graphic_popup_pane_ParamLimits

0x3ee6,	// (0x000826ff) cell_large_graphic_popup_pane

0x3efe,	// (0x00082717) cell_large_graphic_popup_pane_g1_ParamLimits

0x3efe,	// (0x00082717) cell_large_graphic_popup_pane_g1

0xb39e,	// (0x00089bb7) cell_large_graphic_popup_pane_g2_ParamLimits

0xb39e,	// (0x00089bb7) cell_large_graphic_popup_pane_g2

0xb3aa,	// (0x00089bc3) cell_large_graphic_popup_pane_g3_ParamLimits

0xb3aa,	// (0x00089bc3) cell_large_graphic_popup_pane_g3

0xb3b7,	// (0x00089bd0) cell_large_graphic_popup_pane_g4_ParamLimits

0xb3b7,	// (0x00089bd0) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0008db9b) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0008db9b) cell_large_graphic_popup_pane_g

0xb3c7,	// (0x00089be0) grid_highlight_pane_cp010

0x1b32,	// (0x0008034b) bg_popup_call_pane_g1

0xb3d1,	// (0x00089bea) list_single_graphic_popup_conf_pane_ParamLimits

0xb3d1,	// (0x00089bea) list_single_graphic_popup_conf_pane

0xb3e4,	// (0x00089bfd) list_highlight_pane_cp01

0xb3ed,	// (0x00089c06) list_single_graphic_popup_conf_pane_g1

0xb3f5,	// (0x00089c0e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0008dba4) list_single_graphic_popup_conf_pane_g

0xb3fd,	// (0x00089c16) list_single_graphic_popup_conf_pane_t1

0xb40b,	// (0x00089c24) linegrid_cams_pane_g1

0x3f0a,	// (0x00082723) linegrid_cams_pane_g2

0x236c,	// (0x00080b85) linegrid_cams_pane_g3

0xb414,	// (0x00089c2d) linegrid_cams_pane_g4

0x3f13,	// (0x0008272c) linegrid_cams_pane_g5

0x3f1c,	// (0x00082735) linegrid_cams_pane_g6

0x2375,	// (0x00080b8e) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0008dba9) linegrid_cams_pane_g

0xb41d,	// (0x00089c36) popup_clock_analogue_window

0xb41d,	// (0x00089c36) popup_clock_digital_window

0x144a,	// (0x0007fc63) popup_phob_thumbnail_window

0x1b32,	// (0x0008034b) call_video_uplink_pane_g1

0xb426,	// (0x00089c3f) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0008dbb8) call_video_uplink_pane_g

0xb42e,	// (0x00089c47) video_uplink_pane

0xb436,	// (0x00089c4f) mce_image_pane_g1

0x3f27,	// (0x00082740) mce_image_pane_g2

0x3f31,	// (0x0008274a) mce_image_pane_g3

0x3f39,	// (0x00082752) mce_image_pane_g4

0x3f41,	// (0x0008275a) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0008dbbd) mce_image_pane_g

0xb440,	// (0x00089c59) control_top_pane_stacon_cp01_ParamLimits

0xb440,	// (0x00089c59) control_top_pane_stacon_cp01

0xb454,	// (0x00089c6d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb454,	// (0x00089c6d) uni_indicator_pane_stacon_cp01

0xb465,	// (0x00089c7e) bg_popup_sub_pane_cp03

0xb46f,	// (0x00089c88) chi_dic_find_pane

0x3f49,	// (0x00082762) listscroll_chi_dic_pane

0xb477,	// (0x00089c90) main_pane_chidic_g1

0xb47f,	// (0x00089c98) chi_dic_find_pane_t1

0xb48d,	// (0x00089ca6) find_chidic_pane

0xb496,	// (0x00089caf) chi_dic_list_pane_ParamLimits

0xb496,	// (0x00089caf) chi_dic_list_pane

0xb4a7,	// (0x00089cc0) scroll_pane_cp020

0xb4af,	// (0x00089cc8) find_chidic_pane_t1

0x144a,	// (0x0007fc63) input_focus_pane_cp06

0x3f5d,	// (0x00082776) list_chi_dic_pane_ParamLimits

0x3f5d,	// (0x00082776) list_chi_dic_pane

0x3f6f,	// (0x00082788) list_chi_dic_pane_t1_ParamLimits

0x3f6f,	// (0x00082788) list_chi_dic_pane_t1

0x144a,	// (0x0007fc63) list_highlight_pane_cp020

0xb4be,	// (0x00089cd7) bg_cale_heading_pane_g1

0x3f82,	// (0x0008279b) bg_cale_heading_pane_g2

0x3f8a,	// (0x000827a3) bg_cale_heading_pane_g3

0x3f92,	// (0x000827ab) bg_cale_heading_pane_g4

0x3f9c,	// (0x000827b5) bg_cale_heading_pane_g5

0x3fa6,	// (0x000827bf) bg_cale_heading_pane_g6

0x3fae,	// (0x000827c7) bg_cale_heading_pane_g7

0x3fb6,	// (0x000827cf) bg_cale_heading_pane_g8

0x3fc0,	// (0x000827d9) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0008dbc8) bg_cale_heading_pane_g

0xb4be,	// (0x00089cd7) bg_cale_side_pane_g1

0x3fca,	// (0x000827e3) bg_cale_side_pane_g2

0x3fd2,	// (0x000827eb) bg_cale_side_pane_g3

0x3fda,	// (0x000827f3) bg_cale_side_pane_g4

0x3fe2,	// (0x000827fb) bg_cale_side_pane_g5

0x3fea,	// (0x00082803) bg_cale_side_pane_g6

0x3ff2,	// (0x0008280b) bg_cale_side_pane_g7

0x3ffa,	// (0x00082813) bg_cale_side_pane_g8

0x4002,	// (0x0008281b) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0008dbdb) bg_cale_side_pane_g

0x400a,	// (0x00082823) popup_call_status_window_ParamLimits

0x400a,	// (0x00082823) popup_call_status_window

0xb4c6,	// (0x00089cdf) stacon_top_pane

0xb4ce,	// (0x00089ce7) status_pane_ParamLimits

0xb4ce,	// (0x00089ce7) status_pane

0xb4e3,	// (0x00089cfc) status_small_pane

0xb4eb,	// (0x00089d04) control_pane

0x144a,	// (0x0007fc63) stacon_bottom_pane

0xb4f3,	// (0x00089d0c) list_single_mce_smart_pane_t1_ParamLimits

0xb4f3,	// (0x00089d0c) list_single_mce_smart_pane_t1

0xb506,	// (0x00089d1f) list_single_mce_smart_pane_t2_ParamLimits

0xb506,	// (0x00089d1f) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0008dbee) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0008dbee) list_single_mce_smart_pane_t

0x4053,	// (0x0008286c) compass_pane

0x405c,	// (0x00082875) main_location2_pane_t1

0x406e,	// (0x00082887) main_location2_pane_t2

0x4080,	// (0x00082899) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0008dbf3) main_location2_pane_t

0xb525,	// (0x00089d3e) compass_pane_g1_ParamLimits

0xb525,	// (0x00089d3e) compass_pane_g1

0x40c4,	// (0x000828dd) compass_pane_t1

0x40d3,	// (0x000828ec) compass_pane_t2

0x0005,

0xf3e3,	// (0x0008dbfc) compass_pane_t

0x411a,	// (0x00082933) text_secondary_cp61

0xb539,	// (0x00089d52) navi_pane_cams_g5

0xb55c,	// (0x00089d75) navi_pane_im_t1

0xb56a,	// (0x00089d83) navi_pane_mp_g1_ParamLimits

0xb56a,	// (0x00089d83) navi_pane_mp_g1

0xb57e,	// (0x00089d97) navi_pane_mp_g2_ParamLimits

0xb57e,	// (0x00089d97) navi_pane_mp_g2

0xb58a,	// (0x00089da3) navi_pane_mp_g3_ParamLimits

0xb58a,	// (0x00089da3) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0008dc10) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0008dc10) navi_pane_mp_g

0xb596,	// (0x00089daf) navi_pane_mp_t1

0xb5a4,	// (0x00089dbd) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0008dc17) navi_pane_mp_t

0xb5e0,	// (0x00089df9) navi_pane_vt_g1

0xb596,	// (0x00089daf) navi_pane_vt_t1

0xb5e8,	// (0x00089e01) navi_slider_pane

0xb5f0,	// (0x00089e09) zooming_pane

0xb5f8,	// (0x00089e11) navi_slider_pane_g1

0xb601,	// (0x00089e1a) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0008dc1e) navi_slider_pane_g

0xb62e,	// (0x00089e47) aid_levels_zoom

0xb636,	// (0x00089e4f) zooming_pane_g1

0xb63e,	// (0x00089e57) zooming_pane_g2

0xb63e,	// (0x00089e57) zooming_pane_g3

0x0002,

0xf414,	// (0x0008dc2d) zooming_pane_g

0xb646,	// (0x00089e5f) level_10_zoom

0xb64f,	// (0x00089e68) level_11_zoom

0xb658,	// (0x00089e71) level_1_zoom

0xb661,	// (0x00089e7a) level_2_zoom

0xb66a,	// (0x00089e83) level_3_zoom

0xb673,	// (0x00089e8c) level_4_zoom

0xb67c,	// (0x00089e95) level_5_zoom

0xb685,	// (0x00089e9e) level_6_zoom

0xb68e,	// (0x00089ea7) level_7_zoom

0xb697,	// (0x00089eb0) level_8_zoom

0xb6a0,	// (0x00089eb9) level_9_zoom

0xb6b1,	// (0x00089eca) popup_phob_thumbnail_window_g1

0xb6b9,	// (0x00089ed2) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0008dc34) popup_phob_thumbnail_window_g

0xc9dc,	// (0x0008b1f5) level_1_location

0xc9e4,	// (0x0008b1fd) level_2_location

0xc9ec,	// (0x0008b205) level_3_location

0xc9f4,	// (0x0008b20d) level_4_location

0xb5f0,	// (0x00089e09) level_5_location

0x425d,	// (0x00082a76) mce_icon_pane_g1

0x4267,	// (0x00082a80) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0008dc39) mce_icon_pane_g

0x426f,	// (0x00082a88) main_mup_pane_g1_ParamLimits

0x426f,	// (0x00082a88) main_mup_pane_g1

0x4285,	// (0x00082a9e) main_mup_pane_g2_ParamLimits

0x4285,	// (0x00082a9e) main_mup_pane_g2

0x429d,	// (0x00082ab6) main_mup_pane_g3_ParamLimits

0x429d,	// (0x00082ab6) main_mup_pane_g3

0x42b5,	// (0x00082ace) main_mup_pane_g4_ParamLimits

0x42b5,	// (0x00082ace) main_mup_pane_g4

0x42cd,	// (0x00082ae6) main_mup_pane_g5_ParamLimits

0x42cd,	// (0x00082ae6) main_mup_pane_g5

0x42e9,	// (0x00082b02) main_mup_pane_g6_ParamLimits

0x42e9,	// (0x00082b02) main_mup_pane_g6

0x4301,	// (0x00082b1a) main_mup_pane_g7_ParamLimits

0x4301,	// (0x00082b1a) main_mup_pane_g7

0x4319,	// (0x00082b32) main_mup_pane_g8_ParamLimits

0x4319,	// (0x00082b32) main_mup_pane_g8

0x4333,	// (0x00082b4c) main_mup_pane_g9_ParamLimits

0x4333,	// (0x00082b4c) main_mup_pane_g9

0x434d,	// (0x00082b66) main_mup_pane_g10_ParamLimits

0x434d,	// (0x00082b66) main_mup_pane_g10

0x4367,	// (0x00082b80) main_mup_pane_g11_ParamLimits

0x4367,	// (0x00082b80) main_mup_pane_g11

0x437b,	// (0x00082b94) main_mup_pane_g12_ParamLimits

0x437b,	// (0x00082b94) main_mup_pane_g12

0x4391,	// (0x00082baa) main_mup_pane_g13_ParamLimits

0x4391,	// (0x00082baa) main_mup_pane_g13

0x000c,

0xf425,	// (0x0008dc3e) main_mup_pane_g_ParamLimits

0xf425,	// (0x0008dc3e) main_mup_pane_g

0x43a5,	// (0x00082bbe) main_mup_pane_t1_ParamLimits

0x43a5,	// (0x00082bbe) main_mup_pane_t1

0x43bf,	// (0x00082bd8) main_mup_pane_t2_ParamLimits

0x43bf,	// (0x00082bd8) main_mup_pane_t2

0x43d7,	// (0x00082bf0) main_mup_pane_t3_ParamLimits

0x43d7,	// (0x00082bf0) main_mup_pane_t3

0x43ef,	// (0x00082c08) main_mup_pane_t4_ParamLimits

0x43ef,	// (0x00082c08) main_mup_pane_t4

0x440d,	// (0x00082c26) main_mup_pane_t5_ParamLimits

0x440d,	// (0x00082c26) main_mup_pane_t5

0x4422,	// (0x00082c3b) main_mup_pane_t6_ParamLimits

0x4422,	// (0x00082c3b) main_mup_pane_t6

0x0005,

0xf440,	// (0x0008dc59) main_mup_pane_t_ParamLimits

0xf440,	// (0x0008dc59) main_mup_pane_t

0x4434,	// (0x00082c4d) mup_progress_pane_ParamLimits

0x4434,	// (0x00082c4d) mup_progress_pane

0x4440,	// (0x00082c59) mup_visualizer_pane_ParamLimits

0x4440,	// (0x00082c59) mup_visualizer_pane

0x4470,	// (0x00082c89) mup_volume_pane_ParamLimits

0x4470,	// (0x00082c89) mup_volume_pane

0xb6c1,	// (0x00089eda) mup_visualizer_pane_g1_ParamLimits

0xb6c1,	// (0x00089eda) mup_visualizer_pane_g1

0xb6c1,	// (0x00089eda) mup_visualizer_pane_g2_ParamLimits

0xb6c1,	// (0x00089eda) mup_visualizer_pane_g2

0xb525,	// (0x00089d3e) mup_visualizer_pane_g3_ParamLimits

0xb525,	// (0x00089d3e) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0008dc66) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0008dc66) mup_visualizer_pane_g

0x1b32,	// (0x0008034b) mup_volume_pane_g1

0xb6d7,	// (0x00089ef0) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0008dc6d) mup_volume_pane_g

0x1b32,	// (0x0008034b) mup_progress_pane_g1

0xb6e0,	// (0x00089ef9) mup_progress_pane_g2

0xb6e9,	// (0x00089f02) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0008dc72) mup_progress_pane_g

0x144a,	// (0x0007fc63) bg_popup_window_pane_cp05

0xb6f2,	// (0x00089f0b) heading_pane_cp02_ParamLimits

0xb6f2,	// (0x00089f0b) heading_pane_cp02

0xb70c,	// (0x00089f25) list_popup_blid_pane

0xb714,	// (0x00089f2d) list_blid_sat_info_pane_ParamLimits

0xb714,	// (0x00089f2d) list_blid_sat_info_pane

0xb727,	// (0x00089f40) list_blid_sat_info_pane_g1

0xb72f,	// (0x00089f48) list_blid_sat_info_pane_t1

0x4586,	// (0x00082d9f) mup_equalizer_pane_ParamLimits

0x4586,	// (0x00082d9f) mup_equalizer_pane

0x459f,	// (0x00082db8) mup_equalizer_pane_cp1_ParamLimits

0x459f,	// (0x00082db8) mup_equalizer_pane_cp1

0x45bc,	// (0x00082dd5) mup_equalizer_pane_cp2_ParamLimits

0x45bc,	// (0x00082dd5) mup_equalizer_pane_cp2

0x45d9,	// (0x00082df2) mup_equalizer_pane_cp3_ParamLimits

0x45d9,	// (0x00082df2) mup_equalizer_pane_cp3

0x45fa,	// (0x00082e13) mup_equalizer_pane_cp4_ParamLimits

0x45fa,	// (0x00082e13) mup_equalizer_pane_cp4

0x461b,	// (0x00082e34) mup_equalizer_pane_cp5

0x462f,	// (0x00082e48) mup_equalizer_pane_cp6

0x4643,	// (0x00082e5c) mup_equalizer_pane_cp7

0xc8fa,	// (0x0008b113) bg_popup_call_poc_act_pane_g9

0xc902,	// (0x0008b11b) bg_popup_call_poc_act_pane_g10

0xc90a,	// (0x0008b123) bg_popup_call_poc_act_pane_g11

0x000a,

0x16a5,	// (0x0007febe) mup_scale_pane

0x1b32,	// (0x0008034b) mup_scale_pane_g1

0xb73d,	// (0x00089f56) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0008dc8e) mup_scale_pane_g

0xb761,	// (0x00089f7a) msg_data_pane

0xb769,	// (0x00089f82) scroll_pane_cp017

0x0569,	// (0x0007ed82) bg_list_pane_cp04_ParamLimits

0x0569,	// (0x0007ed82) bg_list_pane_cp04

0xb771,	// (0x00089f8a) msg_data_pane_g1

0x4669,	// (0x00082e82) msg_data_pane_g2

0x4673,	// (0x00082e8c) msg_data_pane_g3

0x467b,	// (0x00082e94) msg_data_pane_g4

0x4683,	// (0x00082e9c) msg_data_pane_g5

0x468b,	// (0x00082ea4) msg_data_pane_g6

0x4693,	// (0x00082eac) msg_data_pane_g7

0x0006,

0xf484,	// (0x0008dc9d) msg_data_pane_g

0x0589,	// (0x0007eda2) msg_text_pane_ParamLimits

0x0589,	// (0x0007eda2) msg_text_pane

0x469b,	// (0x00082eb4) qrid_highlight_pane_cp011_ParamLimits

0x469b,	// (0x00082eb4) qrid_highlight_pane_cp011

0x144a,	// (0x0007fc63) msg_body_pane

0x144a,	// (0x0007fc63) msg_header_pane

0xb779,	// (0x00089f92) input_focus_pane_cp07

0x05b9,	// (0x0007edd2) msg_header_pane_t1_ParamLimits

0x05b9,	// (0x0007edd2) msg_header_pane_t1

0x05cb,	// (0x0007ede4) msg_header_pane_t2_ParamLimits

0x05cb,	// (0x0007ede4) msg_header_pane_t2

0x0001,

0xf498,	// (0x0008dcb1) msg_header_pane_t_ParamLimits

0xf498,	// (0x0008dcb1) msg_header_pane_t

0xb78e,	// (0x00089fa7) msg_body_pane_g1

0x05dd,	// (0x0007edf6) msg_body_pane_t1_ParamLimits

0x05dd,	// (0x0007edf6) msg_body_pane_t1

0x060e,	// (0x0007ee27) msg_body_pane_t2_ParamLimits

0x060e,	// (0x0007ee27) msg_body_pane_t2

0x0620,	// (0x0007ee39) msg_body_pane_t3_ParamLimits

0x0620,	// (0x0007ee39) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0008dcb6) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0008dcb6) msg_body_pane_t

0x46f6,	// (0x00082f0f) main_viewer_pane_g1_ParamLimits

0x46f6,	// (0x00082f0f) main_viewer_pane_g1

0x4704,	// (0x00082f1d) main_viewer_pane_g2_ParamLimits

0x4704,	// (0x00082f1d) main_viewer_pane_g2

0x4712,	// (0x00082f2b) main_viewer_pane_g3_ParamLimits

0x4712,	// (0x00082f2b) main_viewer_pane_g3

0x4721,	// (0x00082f3a) main_viewer_pane_g4_ParamLimits

0x4721,	// (0x00082f3a) main_viewer_pane_g4

0xb7ae,	// (0x00089fc7) main_viewer_pane_g5_ParamLimits

0xb7ae,	// (0x00089fc7) main_viewer_pane_g5

0xb7ae,	// (0x00089fc7) main_viewer_pane_g7_ParamLimits

0xb7ae,	// (0x00089fc7) main_viewer_pane_g7

0xb7c0,	// (0x00089fd9) main_viewer_pane_g8_ParamLimits

0xb7c0,	// (0x00089fd9) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0008dcc6) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0008dcc6) main_viewer_pane_g

0xb7d8,	// (0x00089ff1) viewer_content_pane_ParamLimits

0xb7d8,	// (0x00089ff1) viewer_content_pane

0x475d,	// (0x00082f76) main_postcard_pane_g1_ParamLimits

0x475d,	// (0x00082f76) main_postcard_pane_g1

0x4773,	// (0x00082f8c) main_postcard_pane_g2_ParamLimits

0x4773,	// (0x00082f8c) main_postcard_pane_g2

0x4789,	// (0x00082fa2) main_postcard_pane_g3_ParamLimits

0x4789,	// (0x00082fa2) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0008dcd7) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0008dcd7) main_postcard_pane_g

0x47a0,	// (0x00082fb9) main_postcard_pane_g4

0xcb30,	// (0x0008b349) smil_status_volume_pane_g2

0x47e3,	// (0x00082ffc) postcard_pane_ParamLimits

0x47e3,	// (0x00082ffc) postcard_pane

0xb7e6,	// (0x00089fff) postcard_pane_g1_ParamLimits

0xb7e6,	// (0x00089fff) postcard_pane_g1

0x4825,	// (0x0008303e) postcard_pane_g2_ParamLimits

0x4825,	// (0x0008303e) postcard_pane_g2

0x4831,	// (0x0008304a) postcard_pane_g3_ParamLimits

0x4831,	// (0x0008304a) postcard_pane_g3

0xb7f4,	// (0x0008a00d) postcard_pane_g4_ParamLimits

0xb7f4,	// (0x0008a00d) postcard_pane_g4

0x483d,	// (0x00083056) postcard_pane_g5_ParamLimits

0x483d,	// (0x00083056) postcard_pane_g5

0x4852,	// (0x0008306b) postcard_pane_g6_ParamLimits

0x4852,	// (0x0008306b) postcard_pane_g6

0xb7e6,	// (0x00089fff) postcard_pane_g7_ParamLimits

0xb7e6,	// (0x00089fff) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0008dce4) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0008dce4) postcard_pane_g

0x4866,	// (0x0008307f) main_mp2_pane_g1_ParamLimits

0x4866,	// (0x0008307f) main_mp2_pane_g1

0x4872,	// (0x0008308b) main_mp2_pane_g2_ParamLimits

0x4872,	// (0x0008308b) main_mp2_pane_g2

0x487e,	// (0x00083097) main_mp2_pane_g3_ParamLimits

0x487e,	// (0x00083097) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0008dcf3) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0008dcf3) main_mp2_pane_g

0x488a,	// (0x000830a3) main_mp2_pane_t1_ParamLimits

0x488a,	// (0x000830a3) main_mp2_pane_t1

0x489f,	// (0x000830b8) main_mp2_pane_t2_ParamLimits

0x489f,	// (0x000830b8) main_mp2_pane_t2

0x48b1,	// (0x000830ca) main_mp2_pane_t3_ParamLimits

0x48b1,	// (0x000830ca) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0008dcfa) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0008dcfa) main_mp2_pane_t

0xb802,	// (0x0008a01b) pec_content_pane_ParamLimits

0xb802,	// (0x0008a01b) pec_content_pane

0x2cd4,	// (0x000814ed) scroll_pane_cp015

0xb814,	// (0x0008a02d) pec_attribute_pane_ParamLimits

0xb814,	// (0x0008a02d) pec_attribute_pane

0x48c3,	// (0x000830dc) pec_content_pane_g1_ParamLimits

0x48c3,	// (0x000830dc) pec_content_pane_g1

0xb824,	// (0x0008a03d) pec_content_pane_t1_ParamLimits

0xb824,	// (0x0008a03d) pec_content_pane_t1

0xb836,	// (0x0008a04f) pec_content_pane_t2_ParamLimits

0xb836,	// (0x0008a04f) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0008dd01) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0008dd01) pec_content_pane_t

0x48cf,	// (0x000830e8) list_single_graphic_pane_cp01_ParamLimits

0x48cf,	// (0x000830e8) list_single_graphic_pane_cp01

0x16a5,	// (0x0007febe) bg_popup_sub_pane_cp04

0xb848,	// (0x0008a061) popup_mup_playback_window_g1

0xb854,	// (0x0008a06d) popup_mup_playback_window_t1

0xb869,	// (0x0008a082) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0008dd06) popup_mup_playback_window_t

0xb8a0,	// (0x0008a0b9) main_image_pane_g1_ParamLimits

0xb8a0,	// (0x0008a0b9) main_image_pane_g1

0xb8e3,	// (0x0008a0fc) scroll_pane_cp018_ParamLimits

0xb8e3,	// (0x0008a0fc) scroll_pane_cp018

0xb8fb,	// (0x0008a114) scroll_pane_cp016_ParamLimits

0xb8fb,	// (0x0008a114) scroll_pane_cp016

0x499c,	// (0x000831b5) smil2_image_pane_ParamLimits

0x499c,	// (0x000831b5) smil2_image_pane

0x49cc,	// (0x000831e5) smil2_root_pane_ParamLimits

0x49cc,	// (0x000831e5) smil2_root_pane

0x4a04,	// (0x0008321d) smil2_text_pane_ParamLimits

0x4a04,	// (0x0008321d) smil2_text_pane

0x144a,	// (0x0007fc63) bg_list_pane_cp06

0xb937,	// (0x0008a150) grid_radio_pane

0x144a,	// (0x0007fc63) bg_popup_window_pane_cp06

0xb93f,	// (0x0008a158) main_fmradio_pane_t1

0xb374,	// (0x00089b8d) heading_pane_cp04

0xb94d,	// (0x0008a166) main_fmradio_pane_t2

0xc912,	// (0x0008b12b) popup_cale_lunar_info_window_g1

0xb95b,	// (0x0008a174) main_fmradio_pane_t3

0xc91a,	// (0x0008b133) popup_cale_lunar_info_window_g2

0xb969,	// (0x0008a182) main_fmradio_pane_t4

0x0001,

0xb977,	// (0x0008a190) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0008dde1) popup_cale_lunar_info_window_g

0xf502,	// (0x0008dd1b) main_fmradio_pane_t

0xb985,	// (0x0008a19e) wait_bar_pane_cp03

0xb98d,	// (0x0008a1a6) cell_fmradio_pane_ParamLimits

0xb98d,	// (0x0008a1a6) cell_fmradio_pane

0xb7e6,	// (0x00089fff) cell_fmradio_pane_g1_ParamLimits

0xb7e6,	// (0x00089fff) cell_fmradio_pane_g1

0x144a,	// (0x0007fc63) grid_highlight_pane_cp011

0xb9a0,	// (0x0008a1b9) poc_content_pane_ParamLimits

0xb9a0,	// (0x0008a1b9) poc_content_pane

0xb9b2,	// (0x0008a1cb) scroll_pane_cp019

0x4a84,	// (0x0008329d) popup_call_poc_act_window_ParamLimits

0x4a84,	// (0x0008329d) popup_call_poc_act_window

0x4aa8,	// (0x000832c1) popup_call_poc_inact_window_ParamLimits

0x4aa8,	// (0x000832c1) popup_call_poc_inact_window

0xf59f,	// (0x0008ddb8) bg_popup_call_poc_act_pane_g

0xc88a,	// (0x0008b0a3) bg_popup_call_poc_inact_pane_g1

0xc892,	// (0x0008b0ab) bg_popup_call_poc_inact_pane_g2

0xb9ba,	// (0x0008a1d3) popup_call_poc_act_window_g2

0xc89a,	// (0x0008b0b3) bg_popup_call_poc_inact_pane_g3

0xc8a2,	// (0x0008b0bb) bg_popup_call_poc_inact_pane_g4

0xc8aa,	// (0x0008b0c3) bg_popup_call_poc_inact_pane_g5

0xb9c2,	// (0x0008a1db) popup_call_poc_act_window_t1_ParamLimits

0xb9c2,	// (0x0008a1db) popup_call_poc_act_window_t1

0xb9ea,	// (0x0008a203) popup_call_poc_act_window_t2_ParamLimits

0xb9ea,	// (0x0008a203) popup_call_poc_act_window_t2

0xba12,	// (0x0008a22b) popup_call_poc_act_window_t3_ParamLimits

0xba12,	// (0x0008a22b) popup_call_poc_act_window_t3

0xba3a,	// (0x0008a253) popup_call_poc_act_window_t4_ParamLimits

0xba3a,	// (0x0008a253) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0008dd26) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0008dd26) popup_call_poc_act_window_t

0xc8b2,	// (0x0008b0cb) bg_popup_call_poc_inact_pane_g6

0xc8ba,	// (0x0008b0d3) bg_popup_call_poc_inact_pane_g7

0xc8c2,	// (0x0008b0db) bg_popup_call_poc_inact_pane_g8

0xba4c,	// (0x0008a265) popup_call_poc_inact_window_g2

0xc8ca,	// (0x0008b0e3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0008dda5) bg_popup_call_poc_inact_pane_g

0xba54,	// (0x0008a26d) popup_call_poc_inact_window_t1_ParamLimits

0xba54,	// (0x0008a26d) popup_call_poc_inact_window_t1

0xba69,	// (0x0008a282) popup_call_poc_inact_window_t2_ParamLimits

0xba69,	// (0x0008a282) popup_call_poc_inact_window_t2

0xba7e,	// (0x0008a297) popup_call_poc_inact_window_t3_ParamLimits

0xba7e,	// (0x0008a297) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0008dd2f) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0008dd2f) popup_call_poc_inact_window_t

0xcaa3,	// (0x0008b2bc) context_pane_ParamLimits

0x52cd,	// (0x00083ae6) signal_pane_ParamLimits

0xb5f0,	// (0x00089e09) main_call2_pane

0xca7c,	// (0x0008b295) popup_phob_thumbnail2_window_ParamLimits

0xca7c,	// (0x0008b295) popup_phob_thumbnail2_window

0xb796,	// (0x00089faf) aid_hotspot_pointer_arrow_pane

0xb79e,	// (0x00089fb7) aid_hotspot_pointer_hand_pane

0x4df1,	// (0x0008360a) phob_pre_status_pane_g5

0x2426,	// (0x00080c3f) cams_zoom_pane_ParamLimits

0x2435,	// (0x00080c4e) image_vga_pane_ParamLimits

0x244f,	// (0x00080c68) main_camera_pane_g1_ParamLimits

0x2461,	// (0x00080c7a) main_camera_pane_g2_ParamLimits

0x2471,	// (0x00080c8a) main_camera_pane_g3_ParamLimits

0x2481,	// (0x00080c9a) main_camera_pane_g4_ParamLimits

0x2491,	// (0x00080caa) main_camera_pane_g5_ParamLimits

0x24a1,	// (0x00080cba) main_camera_pane_g6_ParamLimits

0x24b3,	// (0x00080ccc) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0008da2e) main_camera_pane_g_ParamLimits

0x24cf,	// (0x00080ce8) main_camera_pane_t1_ParamLimits

0x24e5,	// (0x00080cfe) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0008da3f) main_camera_pane_t_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_preview_window_pane_cp01_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_preview_window_pane_cp01

0xba93,	// (0x0008a2ac) popup_phob_thumbnail2_window_g1_ParamLimits

0xba93,	// (0x0008a2ac) popup_phob_thumbnail2_window_g1

0x144a,	// (0x0007fc63) call2_cli_visual_pane

0x4adc,	// (0x000832f5) popup_call2_audio_conf_window_ParamLimits

0x4adc,	// (0x000832f5) popup_call2_audio_conf_window

0x4afc,	// (0x00083315) popup_call2_audio_first_window_ParamLimits

0x4afc,	// (0x00083315) popup_call2_audio_first_window

0x4b92,	// (0x000833ab) popup_call2_audio_in_window_ParamLimits

0x4b92,	// (0x000833ab) popup_call2_audio_in_window

0x4bda,	// (0x000833f3) popup_call2_audio_out_window_ParamLimits

0x4bda,	// (0x000833f3) popup_call2_audio_out_window

0x4c44,	// (0x0008345d) popup_call2_audio_second_window_ParamLimits

0x4c44,	// (0x0008345d) popup_call2_audio_second_window

0x4caa,	// (0x000834c3) popup_call2_audio_wait_window_ParamLimits

0x4caa,	// (0x000834c3) popup_call2_audio_wait_window

0x144a,	// (0x0007fc63) bg_popup_call2_act_pane_cp03

0x1687,	// (0x0007fea0) list_conf_pane_cp

0xba9f,	// (0x0008a2b8) popup_call2_audio_conf_window_t1

0xb3d1,	// (0x00089bea) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3d1,	// (0x00089bea) list_single_graphic_popup_conf2_pane

0xb3e4,	// (0x00089bfd) list_highlight_pane_cp04

0xbaad,	// (0x0008a2c6) list_single_graphic_popup_conf2_pane_g1

0xb3f5,	// (0x00089c0e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0008dd36) list_single_graphic_popup_conf2_pane_g

0xbab7,	// (0x0008a2d0) list_single_graphic_popup_conf2_pane_t1

0xbac5,	// (0x0008a2de) bg_popup_call2_act_pane_cp01_ParamLimits

0xbac5,	// (0x0008a2de) bg_popup_call2_act_pane_cp01

0xbb4f,	// (0x0008a368) call_type_pane_cp05_ParamLimits

0xbb4f,	// (0x0008a368) call_type_pane_cp05

0xbba3,	// (0x0008a3bc) popup_call2_audio_second_window_g1_ParamLimits

0xbba3,	// (0x0008a3bc) popup_call2_audio_second_window_g1

0xbbf7,	// (0x0008a410) popup_call2_audio_second_window_g2_ParamLimits

0xbbf7,	// (0x0008a410) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0008dd3b) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0008dd3b) popup_call2_audio_second_window_g

0xbc5c,	// (0x0008a475) popup_call2_audio_second_window_t1_ParamLimits

0xbc5c,	// (0x0008a475) popup_call2_audio_second_window_t1

0xbd17,	// (0x0008a530) popup_call2_audio_second_window_t2_ParamLimits

0xbd17,	// (0x0008a530) popup_call2_audio_second_window_t2

0xbd6a,	// (0x0008a583) popup_call2_audio_second_window_t3_ParamLimits

0xbd6a,	// (0x0008a583) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0008dd42) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0008dd42) popup_call2_audio_second_window_t

0x144a,	// (0x0007fc63) bg_popup_call2_in_pane_cp02

0x1454,	// (0x0007fc6d) call_type_pane_cp04

0x145c,	// (0x0007fc75) popup_call2_audio_wait_window_g1

0x1464,	// (0x0007fc7d) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0008d91b) popup_call2_audio_wait_window_g

0x146c,	// (0x0007fc85) popup_call2_audio_wait_window_t3

0xbe5d,	// (0x0008a676) bg_popup_call2_act_pane_ParamLimits

0xbe5d,	// (0x0008a676) bg_popup_call2_act_pane

0xbf1d,	// (0x0008a736) call_type_pane_cp03_ParamLimits

0xbf1d,	// (0x0008a736) call_type_pane_cp03

0xbf81,	// (0x0008a79a) popup_call2_audio_first_window_g1_ParamLimits

0xbf81,	// (0x0008a79a) popup_call2_audio_first_window_g1

0xbff1,	// (0x0008a80a) popup_call2_audio_first_window_g2_ParamLimits

0xbff1,	// (0x0008a80a) popup_call2_audio_first_window_g2

0xb6c1,	// (0x00089eda) popup_call2_audio_first_window_g3_ParamLimits

0xb6c1,	// (0x00089eda) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0008dd4b) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0008dd4b) popup_call2_audio_first_window_g

0xc0cf,	// (0x0008a8e8) popup_call2_audio_first_window_t1_ParamLimits

0xc0cf,	// (0x0008a8e8) popup_call2_audio_first_window_t1

0xc1d2,	// (0x0008a9eb) popup_call2_audio_first_window_t4_ParamLimits

0xc1d2,	// (0x0008a9eb) popup_call2_audio_first_window_t4

0xc2b5,	// (0x0008aace) popup_call2_audio_first_window_t5_ParamLimits

0xc2b5,	// (0x0008aace) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0008dd56) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0008dd56) popup_call2_audio_first_window_t

0x169d,	// (0x0007feb6) bg_popup_call2_act_pane_g1

0xc922,	// (0x0008b13b) popup_cale_lunar_info_window_t1

0xc930,	// (0x0008b149) popup_cale_lunar_info_window_t2

0xc93e,	// (0x0008b157) popup_cale_lunar_info_window_t3

0x144a,	// (0x0007fc63) bg_popup_call2_bubble_pane

0xc3b6,	// (0x0008abcf) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3b6,	// (0x0008abcf) bg_popup_call2_in_pane_cp01

0xed50,	// (0x0008d569) call_type_pane_cp02

0xc3fe,	// (0x0008ac17) popup_call2_audio_out_window_g1_ParamLimits

0xc3fe,	// (0x0008ac17) popup_call2_audio_out_window_g1

0xc42a,	// (0x0008ac43) popup_call2_audio_out_window_g2_ParamLimits

0xc42a,	// (0x0008ac43) popup_call2_audio_out_window_g2

0xc452,	// (0x0008ac6b) popup_call2_audio_out_window_g3_ParamLimits

0xc452,	// (0x0008ac6b) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0008dd5f) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0008dd5f) popup_call2_audio_out_window_g

0xc48d,	// (0x0008aca6) popup_call2_audio_out_window_t1_ParamLimits

0xc48d,	// (0x0008aca6) popup_call2_audio_out_window_t1

0xc4ec,	// (0x0008ad05) popup_call2_audio_out_window_t2_ParamLimits

0xc4ec,	// (0x0008ad05) popup_call2_audio_out_window_t2

0xc540,	// (0x0008ad59) popup_call2_audio_out_window_t3_ParamLimits

0xc540,	// (0x0008ad59) popup_call2_audio_out_window_t3

0xc556,	// (0x0008ad6f) popup_call2_audio_out_window_t4_ParamLimits

0xc556,	// (0x0008ad6f) popup_call2_audio_out_window_t4

0xc56c,	// (0x0008ad85) popup_call2_audio_out_window_t5_ParamLimits

0xc56c,	// (0x0008ad85) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0008dd68) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0008dd68) popup_call2_audio_out_window_t

0xc5d0,	// (0x0008ade9) bg_popup_call2_in_pane_ParamLimits

0xc5d0,	// (0x0008ade9) bg_popup_call2_in_pane

0xc62c,	// (0x0008ae45) popup_call2_audio_in_window_g1_ParamLimits

0xc62c,	// (0x0008ae45) popup_call2_audio_in_window_g1

0xc664,	// (0x0008ae7d) popup_call2_audio_in_window_g2_ParamLimits

0xc664,	// (0x0008ae7d) popup_call2_audio_in_window_g2

0xc69c,	// (0x0008aeb5) popup_call2_audio_in_window_g3_ParamLimits

0xc69c,	// (0x0008aeb5) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0008dd75) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0008dd75) popup_call2_audio_in_window_g

0xc6f4,	// (0x0008af0d) popup_call2_audio_in_window_t1_ParamLimits

0xc6f4,	// (0x0008af0d) popup_call2_audio_in_window_t1

0xc774,	// (0x0008af8d) popup_call2_audio_in_window_t2_ParamLimits

0xc774,	// (0x0008af8d) popup_call2_audio_in_window_t2

0xc7f4,	// (0x0008b00d) popup_call2_audio_in_window_t3_ParamLimits

0xc7f4,	// (0x0008b00d) popup_call2_audio_in_window_t3

0xc80e,	// (0x0008b027) popup_call2_audio_in_window_t4_ParamLimits

0xc80e,	// (0x0008b027) popup_call2_audio_in_window_t4

0xc820,	// (0x0008b039) popup_call2_audio_in_window_t5_ParamLimits

0xc820,	// (0x0008b039) popup_call2_audio_in_window_t5

0xc835,	// (0x0008b04e) popup_call2_audio_in_window_t6_ParamLimits

0xc835,	// (0x0008b04e) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0008dd7e) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0008dd7e) popup_call2_audio_in_window_t

0x169d,	// (0x0007feb6) bg_popup_call2_in_pane_g1

0xc94c,	// (0x0008b165) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0008dde6) popup_cale_lunar_info_window_t

0x16a5,	// (0x0007febe) bg_popup_call2_rect_pane_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_call2_rect_pane

0x144a,	// (0x0007fc63) call2_cli_visual_graphic_pane

0x144a,	// (0x0007fc63) call2_cli_visual_text_pane

0xcb43,	// (0x0008b35c) smil_status_volume_pane_g3

0x0002,

0x1b32,	// (0x0008034b) call2_cli_visual_graphic_pane_g1

0x1b32,	// (0x0008034b) call2_cli_visual_graphic_pane_g2

0x1b32,	// (0x0008034b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0008dd8b) call2_cli_visual_graphic_pane_g

0xc84a,	// (0x0008b063) bg_popup_call2_rect_pane_g1

0x1c81,	// (0x0008049a) bg_popup_call2_rect_pane_g2

0xc852,	// (0x0008b06b) bg_popup_call2_rect_pane_g3

0xc85a,	// (0x0008b073) bg_popup_call2_rect_pane_g4

0xc862,	// (0x0008b07b) bg_popup_call2_rect_pane_g5

0xc86a,	// (0x0008b083) bg_popup_call2_rect_pane_g6

0xc872,	// (0x0008b08b) bg_popup_call2_rect_pane_g7

0xc87a,	// (0x0008b093) bg_popup_call2_rect_pane_g8

0xc882,	// (0x0008b09b) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0008dd92) bg_popup_call2_rect_pane_g

0xc88a,	// (0x0008b0a3) bg_popup_call2_bubble_pane_g1

0xc892,	// (0x0008b0ab) bg_popup_call2_bubble_pane_g2

0xc89a,	// (0x0008b0b3) bg_popup_call2_bubble_pane_g3

0xc8a2,	// (0x0008b0bb) bg_popup_call2_bubble_pane_g4

0xc8aa,	// (0x0008b0c3) bg_popup_call2_bubble_pane_g5

0xc8b2,	// (0x0008b0cb) bg_popup_call2_bubble_pane_g6

0xc8ba,	// (0x0008b0d3) bg_popup_call2_bubble_pane_g7

0xc8c2,	// (0x0008b0db) bg_popup_call2_bubble_pane_g8

0xc8ca,	// (0x0008b0e3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0008dda5) bg_popup_call2_bubble_pane_g

0x1d02,	// (0x0008051b) aid_cale_week_size_cell_pane

0x24fb,	// (0x00080d14) aid_cams_cif_uncrop_pane_ParamLimits

0x24fb,	// (0x00080d14) aid_cams_cif_uncrop_pane

0x26e9,	// (0x00080f02) aid_cams_size_cell_ParamLimits

0x26e9,	// (0x00080f02) aid_cams_size_cell

0x26fd,	// (0x00080f16) grid_cams_pane_ParamLimits

0x2717,	// (0x00080f30) linegrid_cams_pane_ParamLimits

0x2865,	// (0x0008107e) call_video_pane_t1

0x2883,	// (0x0008109c) call_video_pane_t2

0x0001,

0xf279,	// (0x0008da92) call_video_pane_t

0x2f13,	// (0x0008172c) aid_cale_month_size_cell_pane_ParamLimits

0x2f13,	// (0x0008172c) aid_cale_month_size_cell_pane

0xf616,	// (0x0008de2f) smil_status_volume_pane_g

0xcb50,	// (0x0008b369) volume_smil_pane_ParamLimits

0xb191,	// (0x000899aa) aid_popup2_width_pane

0x1bd9,	// (0x000803f2) cell_qdial_pane_g4_ParamLimits

0x1bd9,	// (0x000803f2) cell_qdial_pane_g4

0x40a4,	// (0x000828bd) aid_blid_cardinal_pane_ParamLimits

0x40b0,	// (0x000828c9) aid_blid_destination_pane_ParamLimits

0x40b0,	// (0x000828c9) aid_blid_destination_pane

0x16a5,	// (0x0007febe) bg_popup_call_poc_act_pane_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_call_poc_act_pane

0x16a5,	// (0x0007febe) bg_popup_call_poc_inact_pane_ParamLimits

0x16a5,	// (0x0007febe) bg_popup_call_poc_inact_pane

0xc8d2,	// (0x0008b0eb) bg_popup_call_poc_act_pane_g1

0xc8da,	// (0x0008b0f3) bg_popup_call_poc_act_pane_g2

0xc8e2,	// (0x0008b0fb) bg_popup_call_poc_act_pane_g3

0xc8a2,	// (0x0008b0bb) bg_popup_call_poc_act_pane_g4

0xc8aa,	// (0x0008b0c3) bg_popup_call_poc_act_pane_g5

0xc8ea,	// (0x0008b103) bg_popup_call_poc_act_pane_g6

0xc8ba,	// (0x0008b0d3) bg_popup_call_poc_act_pane_g7

0xc8f2,	// (0x0008b10b) bg_popup_call_poc_act_pane_g8

0x144a,	// (0x0007fc63) main_usb_pane

0xca57,	// (0x0008b270) popup_cale_lunar_info_window

0x2bbb,	// (0x000813d4) im_reading_pane_t1_ParamLimits

0x2bf4,	// (0x0008140d) list_im_pane_ParamLimits

0x2c05,	// (0x0008141e) scroll_pane_cp07_ParamLimits

0x144a,	// (0x0007fc63) grid_highlight_pane_cp012

0x16a5,	// (0x0007febe) mup_scale_pane_ParamLimits

0xb7e6,	// (0x00089fff) main_usb_pane_g1_ParamLimits

0xb7e6,	// (0x00089fff) main_usb_pane_g1

0x4d06,	// (0x0008351f) main_usb_pane_g2_ParamLimits

0x4d06,	// (0x0008351f) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0008ddcf) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0008ddcf) main_usb_pane_g

0x4d1c,	// (0x00083535) main_usb_pane_t1_ParamLimits

0x4d1c,	// (0x00083535) main_usb_pane_t1

0x4d2e,	// (0x00083547) main_usb_pane_t2_ParamLimits

0x4d2e,	// (0x00083547) main_usb_pane_t2

0x4d40,	// (0x00083559) main_usb_pane_t3_ParamLimits

0x4d40,	// (0x00083559) main_usb_pane_t3

0x4d52,	// (0x0008356b) main_usb_pane_t4_ParamLimits

0x4d52,	// (0x0008356b) main_usb_pane_t4

0x4d64,	// (0x0008357d) main_usb_pane_t5_ParamLimits

0x4d64,	// (0x0008357d) main_usb_pane_t5

0x4d76,	// (0x0008358f) main_usb_pane_t6_ParamLimits

0x4d76,	// (0x0008358f) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0008ddd4) main_usb_pane_t_ParamLimits

0x4053,	// (0x0008286c) aid_text_placing

0x405c,	// (0x00082875) main_location2_pane_t1_ParamLimits

0x406e,	// (0x00082887) main_location2_pane_t2_ParamLimits

0x4080,	// (0x00082899) main_location2_pane_t3_ParamLimits

0x4092,	// (0x000828ab) main_location2_pane_t4_ParamLimits

0x4092,	// (0x000828ab) main_location2_pane_t4

0xf3da,	// (0x0008dbf3) main_location2_pane_t_ParamLimits

0x177d,	// (0x0007ff96) find_pinb_pane_g2_ParamLimits

0x177d,	// (0x0007ff96) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0008d941) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0008d941) find_pinb_pane_g

0x1789,	// (0x0007ffa2) find_pinb_pane_t1_ParamLimits

0x179b,	// (0x0007ffb4) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0008d946) find_pinb_pane_t_ParamLimits

0x144a,	// (0x0007fc63) main_call3_pane

0x3411,	// (0x00081c2a) cale_month_day_heading_pane_t1_ParamLimits

0x3497,	// (0x00081cb0) cale_month_day_heading_pane_t2_ParamLimits

0x3528,	// (0x00081d41) cale_month_day_heading_pane_t3_ParamLimits

0x35b9,	// (0x00081dd2) cale_month_day_heading_pane_t4_ParamLimits

0x364e,	// (0x00081e67) cale_month_day_heading_pane_t5_ParamLimits

0x36ef,	// (0x00081f08) cale_month_day_heading_pane_t6_ParamLimits

0x3790,	// (0x00081fa9) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0008daca) cale_month_day_heading_pane_t_ParamLimits

0x3a44,	// (0x0008225d) smil_status_volume_pane

0x4801,	// (0x0008301a) postcard_address_pane_ParamLimits

0x4801,	// (0x0008301a) postcard_address_pane

0x4813,	// (0x0008302c) postcard_message_pane_ParamLimits

0x4813,	// (0x0008302c) postcard_message_pane

0x4ce4,	// (0x000834fd) call2_cli_visual_pane_t1_ParamLimits

0x4ce4,	// (0x000834fd) call2_cli_visual_pane_t1

0x54fa,	// (0x00083d13) postcard_message_pane_t1_ParamLimits

0x54fa,	// (0x00083d13) postcard_message_pane_t1

0x54e3,	// (0x00083cfc) postcard_address_pane_t1_ParamLimits

0x54e3,	// (0x00083cfc) postcard_address_pane_t1

0x54cf,	// (0x00083ce8) popup_call3_audio_in_window_ParamLimits

0x54cf,	// (0x00083ce8) popup_call3_audio_in_window

0x535a,	// (0x00083b73) bg_popup_call3_in_pane_ParamLimits

0x535a,	// (0x00083b73) bg_popup_call3_in_pane

0x53d0,	// (0x00083be9) popup_call3_audio_in_window_g1_ParamLimits

0x53d0,	// (0x00083be9) popup_call3_audio_in_window_g1

0x53f0,	// (0x00083c09) popup_call3_audio_in_window_g2_ParamLimits

0x53f0,	// (0x00083c09) popup_call3_audio_in_window_g2

0x5410,	// (0x00083c29) popup_call3_audio_in_window_g3_ParamLimits

0x5410,	// (0x00083c29) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0008de36) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0008de36) popup_call3_audio_in_window_g

0x5441,	// (0x00083c5a) popup_call3_audio_in_window_t1_ParamLimits

0x5441,	// (0x00083c5a) popup_call3_audio_in_window_t1

0x547f,	// (0x00083c98) popup_call3_audio_in_window_t2_ParamLimits

0x547f,	// (0x00083c98) popup_call3_audio_in_window_t2

0x54bd,	// (0x00083cd6) popup_call3_audio_in_window_t3_ParamLimits

0x54bd,	// (0x00083cd6) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0008de3f) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0008de3f) popup_call3_audio_in_window_t

0xb5f0,	// (0x00089e09) bg_popup_call3_rect_pane

0xc84a,	// (0x0008b063) bg_popup_call3_rect_pane_g1

0x1c81,	// (0x0008049a) bg_popup_call3_rect_pane_g2

0xc852,	// (0x0008b06b) bg_popup_call3_rect_pane_g3

0xc85a,	// (0x0008b073) bg_popup_call3_rect_pane_g4

0xc862,	// (0x0008b07b) bg_popup_call3_rect_pane_g5

0xc86a,	// (0x0008b083) bg_popup_call3_rect_pane_g6

0xc872,	// (0x0008b08b) bg_popup_call3_rect_pane_g7

0x4486,	// (0x00082c9f) mup_visualizer_osc_pane

0xb6cf,	// (0x00089ee8) mup_visualizer_spec_pane

0x538a,	// (0x00083ba3) call3_video_qcif_pane_ParamLimits

0x538a,	// (0x00083ba3) call3_video_qcif_pane

0x539d,	// (0x00083bb6) call3_video_qcif_uncrop_pane_ParamLimits

0x539d,	// (0x00083bb6) call3_video_qcif_uncrop_pane

0x53ab,	// (0x00083bc4) call3_video_subqcif_pane_ParamLimits

0x53ab,	// (0x00083bc4) call3_video_subqcif_pane

0x53bf,	// (0x00083bd8) call3_video_subqcif_uncrop_pane_ParamLimits

0x53bf,	// (0x00083bd8) call3_video_subqcif_uncrop_pane

0x5430,	// (0x00083c49) popup_call3_audio_in_window_g4_ParamLimits

0x5430,	// (0x00083c49) popup_call3_audio_in_window_g4

0x5349,	// (0x00083b62) mup_spec_half_pane

0x5352,	// (0x00083b6b) mup_spec_half_pane_cp

0xcb03,	// (0x0008b31c) mup_osc_middle_pane

0xcb0c,	// (0x0008b325) mup_visualizer_osc_pane_g1

0x5329,	// (0x00083b42) mup_spec_bar_pane_ParamLimits

0x5329,	// (0x00083b42) mup_spec_bar_pane

0xcaf0,	// (0x0008b309) mup_spec_bar_pane_g1

0xcafa,	// (0x0008b313) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0008de2a) mup_spec_bar_pane_g

0x1d02,	// (0x0008051b) aid_cale_week_size_cell_pane_ParamLimits

0x1d1c,	// (0x00080535) bg_cale_heading_pane_ParamLimits

0x1d34,	// (0x0008054d) bg_cale_pane_cp01_ParamLimits

0x1d52,	// (0x0008056b) cale_week_corner_pane_ParamLimits

0x1d71,	// (0x0008058a) cale_week_day_heading_pane_ParamLimits

0x1d8e,	// (0x000805a7) cale_week_scroll_pane_g1_ParamLimits

0x1da1,	// (0x000805ba) cale_week_scroll_pane_g2_ParamLimits

0x1db9,	// (0x000805d2) cale_week_scroll_pane_g3_ParamLimits

0x1dd1,	// (0x000805ea) cale_week_scroll_pane_g4_ParamLimits

0x1de9,	// (0x00080602) cale_week_scroll_pane_g5_ParamLimits

0x1e09,	// (0x00080622) cale_week_scroll_pane_g6_ParamLimits

0x1e29,	// (0x00080642) cale_week_scroll_pane_g7_ParamLimits

0x1e49,	// (0x00080662) cale_week_scroll_pane_g8_ParamLimits

0x1e6d,	// (0x00080686) cale_week_scroll_pane_g9_ParamLimits

0x1e85,	// (0x0008069e) cale_week_scroll_pane_g10_ParamLimits

0x1e9d,	// (0x000806b6) cale_week_scroll_pane_g11_ParamLimits

0x1eb5,	// (0x000806ce) cale_week_scroll_pane_g12_ParamLimits

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g13_ParamLimits

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g14_ParamLimits

0x1ecd,	// (0x000806e6) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0008d9d2) cale_week_scroll_pane_g_ParamLimits

0x1ee5,	// (0x000806fe) cale_week_time_pane_ParamLimits

0x1f09,	// (0x00080722) grid_cale_week_pane_ParamLimits

0x1f2f,	// (0x00080748) listscroll_cale_week_pane_t1

0x1f41,	// (0x0008075a) scroll_pane_cp08_ParamLimits

0x2f95,	// (0x000817ae) cale_month_corner_pane_ParamLimits

0x339d,	// (0x00081bb6) cale_month_pane_t1

0x33af,	// (0x00081bc8) cale_month_week_pane_ParamLimits

0x3e6c,	// (0x00082685) popup_call_status_window_g1_ParamLimits

0x3e80,	// (0x00082699) popup_call_status_window_g2_ParamLimits

0x3e94,	// (0x000826ad) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0008db7a) popup_call_status_window_g_ParamLimits

0xb2f1,	// (0x00089b0a) aid_call2_pane

0x05ab,	// (0x0007edc4) msg_header_pane_g1

0x4801,	// (0x0008301a) postcard_address2_pane_ParamLimits

0x4801,	// (0x0008301a) postcard_address2_pane

0x4813,	// (0x0008302c) postcard_message2_pane_ParamLimits

0x4813,	// (0x0008302c) postcard_message2_pane

0x52db,	// (0x00083af4) message2_row_pane_ParamLimits

0x52db,	// (0x00083af4) message2_row_pane

0x52f7,	// (0x00083b10) address2_row_pane_ParamLimits

0x52f7,	// (0x00083b10) address2_row_pane

0xcabe,	// (0x0008b2d7) postcard_message2_row_pane_g1

0xcac6,	// (0x0008b2df) postcard_message2_row_pane_t1

0xcabe,	// (0x0008b2d7) address2_row_pane_g1

0xcac6,	// (0x0008b2df) address2_row_pane_t1

0x2386,	// (0x00080b9f) aid_size_cell_vorec

0x144a,	// (0x0007fc63) main_rss_pane

0x530a,	// (0x00083b23) rss_list_single_pane_ParamLimits

0x530a,	// (0x00083b23) rss_list_single_pane

0xcad4,	// (0x0008b2ed) rss_list_single_pane_t1

0xcae2,	// (0x0008b2fb) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0008de25) rss_list_single_pane_t

0x144a,	// (0x0007fc63) main_camera2_pane

0x144a,	// (0x0007fc63) main_video2_pane

0x5573,	// (0x00083d8c) cams_zoom_pane_cp2_ParamLimits

0x5573,	// (0x00083d8c) cams_zoom_pane_cp2

0x5593,	// (0x00083dac) image2_vga_pane_ParamLimits

0x5593,	// (0x00083dac) image2_vga_pane

0x55e4,	// (0x00083dfd) main_camera2_pane_g1_ParamLimits

0x55e4,	// (0x00083dfd) main_camera2_pane_g1

0x5604,	// (0x00083e1d) main_camera2_pane_g2_ParamLimits

0x5604,	// (0x00083e1d) main_camera2_pane_g2

0x5624,	// (0x00083e3d) main_camera2_pane_g3_ParamLimits

0x5624,	// (0x00083e3d) main_camera2_pane_g3

0x5644,	// (0x00083e5d) main_camera2_pane_g4_ParamLimits

0x5644,	// (0x00083e5d) main_camera2_pane_g4

0x5664,	// (0x00083e7d) main_camera2_pane_g5_ParamLimits

0x5664,	// (0x00083e7d) main_camera2_pane_g5

0x5684,	// (0x00083e9d) main_camera2_pane_g6_ParamLimits

0x5684,	// (0x00083e9d) main_camera2_pane_g6

0x56a4,	// (0x00083ebd) main_camera2_pane_g7_ParamLimits

0x56a4,	// (0x00083ebd) main_camera2_pane_g7

0x56c4,	// (0x00083edd) main_camera2_pane_g8_ParamLimits

0x56c4,	// (0x00083edd) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0008de46) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0008de46) main_camera2_pane_g

0x5704,	// (0x00083f1d) main_camera2_pane_t1_ParamLimits

0x5704,	// (0x00083f1d) main_camera2_pane_t1

0x5739,	// (0x00083f52) main_camera2_pane_t2_ParamLimits

0x5739,	// (0x00083f52) main_camera2_pane_t2

0x575f,	// (0x00083f78) main_camera2_pane_t3_ParamLimits

0x575f,	// (0x00083f78) main_camera2_pane_t3

0x57bd,	// (0x00083fd6) main_camera2_pane_t4_ParamLimits

0x57bd,	// (0x00083fd6) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0008de59) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0008de59) main_camera2_pane_t

0x584f,	// (0x00084068) cams_zoom_pane_cp4_ParamLimits

0x584f,	// (0x00084068) cams_zoom_pane_cp4

0x5865,	// (0x0008407e) image2_cif_pane_ParamLimits

0x5865,	// (0x0008407e) image2_cif_pane

0x5890,	// (0x000840a9) image2_subqcif_pane_ParamLimits

0x5890,	// (0x000840a9) image2_subqcif_pane

0x58aa,	// (0x000840c3) main_video2_pane_g1_ParamLimits

0x58aa,	// (0x000840c3) main_video2_pane_g1

0x58c4,	// (0x000840dd) main_video2_pane_g2_ParamLimits

0x58c4,	// (0x000840dd) main_video2_pane_g2

0x58da,	// (0x000840f3) main_video2_pane_g3_ParamLimits

0x58da,	// (0x000840f3) main_video2_pane_g3

0x58f0,	// (0x00084109) main_video2_pane_g4_ParamLimits

0x58f0,	// (0x00084109) main_video2_pane_g4

0x5906,	// (0x0008411f) main_video2_pane_g5_ParamLimits

0x5906,	// (0x0008411f) main_video2_pane_g5

0x591c,	// (0x00084135) main_video2_pane_g6_ParamLimits

0x591c,	// (0x00084135) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0008de68) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0008de68) main_video2_pane_g

0x5936,	// (0x0008414f) main_video2_pane_t1_ParamLimits

0x5936,	// (0x0008414f) main_video2_pane_t1

0x595a,	// (0x00084173) main_video2_pane_t2_ParamLimits

0x595a,	// (0x00084173) main_video2_pane_t2

0x59a8,	// (0x000841c1) main_video2_pane_t3_ParamLimits

0x59a8,	// (0x000841c1) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0008de75) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0008de75) main_video2_pane_t

0x4e31,	// (0x0008364a) call_muted_g2

0x0001,

0xf5fe,	// (0x0008de17) call_muted_g

0x144a,	// (0x0007fc63) main_mup2_pane

0x59ec,	// (0x00084205) main_mup2_pane_g1_ParamLimits

0x59ec,	// (0x00084205) main_mup2_pane_g1

0x59f8,	// (0x00084211) main_mup2_pane_g2_ParamLimits

0x59f8,	// (0x00084211) main_mup2_pane_g2

0xcc74,	// (0x0008b48d) main_mup_pane_g13_cp1

0xcc7c,	// (0x0008b495) mup_volume_pane_cp1

0x5a14,	// (0x0008422d) main_mup2_pane_g4_ParamLimits

0x5a14,	// (0x0008422d) main_mup2_pane_g4

0x5a26,	// (0x0008423f) main_mup2_pane_g5_ParamLimits

0x5a26,	// (0x0008423f) main_mup2_pane_g5

0x5a38,	// (0x00084251) main_mup2_pane_g6_ParamLimits

0x5a38,	// (0x00084251) main_mup2_pane_g6

0x5a4a,	// (0x00084263) main_mup2_pane_g7_ParamLimits

0x5a4a,	// (0x00084263) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0008de7c) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0008de7c) main_mup2_pane_g

0x5a62,	// (0x0008427b) main_mup2_pane_t1_ParamLimits

0x5a62,	// (0x0008427b) main_mup2_pane_t1

0x5a78,	// (0x00084291) main_mup2_pane_t2_ParamLimits

0x5a78,	// (0x00084291) main_mup2_pane_t2

0x5a8e,	// (0x000842a7) main_mup2_pane_t3_ParamLimits

0x5a8e,	// (0x000842a7) main_mup2_pane_t3

0x5aa4,	// (0x000842bd) main_mup2_pane_t4_ParamLimits

0x5aa4,	// (0x000842bd) main_mup2_pane_t4

0x5abc,	// (0x000842d5) main_mup2_pane_t5_ParamLimits

0x5abc,	// (0x000842d5) main_mup2_pane_t5

0x5ad4,	// (0x000842ed) main_mup2_pane_t6_ParamLimits

0x5ad4,	// (0x000842ed) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0008de8b) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0008de8b) main_mup2_pane_t

0x5b04,	// (0x0008431d) mup2_visualizer_pane_ParamLimits

0x5b04,	// (0x0008431d) mup2_visualizer_pane

0x5b32,	// (0x0008434b) mup_progress_pane_cp_ParamLimits

0x5b32,	// (0x0008434b) mup_progress_pane_cp

0xcc56,	// (0x0008b46f) mup_volume_pane_cp_ParamLimits

0xcc56,	// (0x0008b46f) mup_volume_pane_cp

0x5b46,	// (0x0008435f) mup2_visualizer_pane_g1_ParamLimits

0x5b46,	// (0x0008435f) mup2_visualizer_pane_g1

0xcb95,	// (0x0008b3ae) mup2_visualizer_pane_g2_ParamLimits

0xcb95,	// (0x0008b3ae) mup2_visualizer_pane_g2

0x5b5d,	// (0x00084376) mup2_visualizer_pane_g3_ParamLimits

0x5b5d,	// (0x00084376) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0008de98) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0008de98) mup2_visualizer_pane_g

0xb92f,	// (0x0008a148) aid_size_cell_fmradio

0x4fe3,	// (0x000837fc) aid_height_parent_landcape

0x2cbb,	// (0x000814d4) wml_content_pane_cp

0x2cc3,	// (0x000814dc) wml_tabs_pane

0x2ccc,	// (0x000814e5) popup_wml_miniature_window

0x2cd4,	// (0x000814ed) scroll_pane_cp021

0x2ce8,	// (0x00081501) wml_content_pane_comp8

0x144a,	// (0x0007fc63) bg_popup_sub_pane_cp05

0xcbb3,	// (0x0008b3cc) popup_wml_miniature_window_g1

0xcbbb,	// (0x0008b3d4) wml_miniature_view_pane

0x5b69,	// (0x00084382) aid_size_wml_view

0x5b71,	// (0x0008438a) wml_miniature_view_pane_g1

0x5b7a,	// (0x00084393) wml_miniature_view_pane_g2

0x5b83,	// (0x0008439c) wml_miniature_view_pane_g3

0x5b8b,	// (0x000843a4) wml_miniature_view_pane_g4

0x5b93,	// (0x000843ac) wml_miniature_view_pane_g5

0x5b9b,	// (0x000843b4) wml_miniature_view_pane_g6

0x5ba3,	// (0x000843bc) wml_miniature_view_pane_g7

0x5bab,	// (0x000843c4) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0008de9f) wml_miniature_view_pane_g

0xcbc3,	// (0x0008b3dc) background_graphic_ParamLimits

0xcbc3,	// (0x0008b3dc) background_graphic

0xcbcf,	// (0x0008b3e8) wml_tabs_2_pane

0xcbd8,	// (0x0008b3f1) wml_tabs_3_pane_ParamLimits

0xcbd8,	// (0x0008b3f1) wml_tabs_3_pane

0xcbea,	// (0x0008b403) wml_tabs_4_pane_ParamLimits

0xcbea,	// (0x0008b403) wml_tabs_4_pane

0xcc00,	// (0x0008b419) wml_tabs_5_pane_ParamLimits

0xcc00,	// (0x0008b419) wml_tabs_5_pane

0xcc1a,	// (0x0008b433) wml_tabs_pane_g2_ParamLimits

0xcc1a,	// (0x0008b433) wml_tabs_pane_g2

0xcc2e,	// (0x0008b447) wml_tabs_pane_g3_ParamLimits

0xcc2e,	// (0x0008b447) wml_tabs_pane_g3

0x5bb3,	// (0x000843cc) wml_tabs_2_active_pane_ParamLimits

0x5bb3,	// (0x000843cc) wml_tabs_2_active_pane

0x5bc7,	// (0x000843e0) wml_tabs_2_passive_pane_ParamLimits

0x5bc7,	// (0x000843e0) wml_tabs_2_passive_pane

0x5bdb,	// (0x000843f4) wml_tabs_3_active_pane_cp_ParamLimits

0x5bdb,	// (0x000843f4) wml_tabs_3_active_pane_cp

0x5bf0,	// (0x00084409) wml_tabs_3_passive_pane_ParamLimits

0x5bf0,	// (0x00084409) wml_tabs_3_passive_pane

0x5c03,	// (0x0008441c) wml_tabs_3_passive_pane_cp_ParamLimits

0x5c03,	// (0x0008441c) wml_tabs_3_passive_pane_cp

0x5c1a,	// (0x00084433) tabs_4_active_pane

0x5c22,	// (0x0008443b) tabs_4_passive_pane

0x5c2c,	// (0x00084445) tabs_4_passive_pane_cp

0x5c34,	// (0x0008444d) tabs_4_passive_pane_cp2

0x4cfe,	// (0x00083517) aid_height_text

0x445c,	// (0x00082c75) mup_volume_cont_pane_ParamLimits

0x445c,	// (0x00082c75) mup_volume_cont_pane

0x173b,	// (0x0007ff54) aid_size_cell_pinb

0x1745,	// (0x0007ff5e) aid_size_list_pinb

0x5b1e,	// (0x00084337) mup2_volume_cont_pane_ParamLimits

0x5b1e,	// (0x00084337) mup2_volume_cont_pane

0xcc42,	// (0x0008b45b) mup2_volume_cont_pane_g1_ParamLimits

0xcc42,	// (0x0008b45b) mup2_volume_cont_pane_g1

0x1144,	// (0x0007f95d) aid_size_cell_touch_ParamLimits

0x1144,	// (0x0007f95d) aid_size_cell_touch

0x1371,	// (0x0007fb8a) touch_pane_ParamLimits

0x1371,	// (0x0007fb8a) touch_pane

0xec57,	// (0x0008d470) main_rss2_pane

0xcc84,	// (0x0008b49d) listscroll_rss2_pane

0xcc8d,	// (0x0008b4a6) rss2_navigation_pane

0xcc95,	// (0x0008b4ae) list_rss2_pane

0xb4a7,	// (0x00089cc0) scroll_pane_cp22

0xcc9d,	// (0x0008b4b6) rss2_navigation_pane_g1

0xcca6,	// (0x0008b4bf) rss2_navigation_pane_g2

0xccae,	// (0x0008b4c7) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0008deb0) rss2_navigation_pane_g

0xccb6,	// (0x0008b4cf) rss2_navigation_pane_t1

0x5c3e,	// (0x00084457) rss2_list_single_pane_ParamLimits

0x5c3e,	// (0x00084457) rss2_list_single_pane

0xccc4,	// (0x0008b4dd) rss2_list_single_pane_t2

0xccd2,	// (0x0008b4eb) rss2_list_single_pane_t3_ParamLimits

0xccd2,	// (0x0008b4eb) rss2_list_single_pane_t3

0xccef,	// (0x0008b508) rss2_list_single_pane_t4

0x3a2c,	// (0x00082245) smil_status_pane_g1

0xb1f7,	// (0x00089a10) main_image2_pane_ParamLimits

0xb1f7,	// (0x00089a10) main_image2_pane

0x56e4,	// (0x00083efd) main_camera2_pane_g9_ParamLimits

0x56e4,	// (0x00083efd) main_camera2_pane_g9

0x5812,	// (0x0008402b) main_camera2_pane_t5_ParamLimits

0x5812,	// (0x0008402b) main_camera2_pane_t5

0xcb65,	// (0x0008b37e) main_camera2_pane_t6_ParamLimits

0xcb65,	// (0x0008b37e) main_camera2_pane_t6

0x5c53,	// (0x0008446c) main_image2_pane_g1_ParamLimits

0x5c53,	// (0x0008446c) main_image2_pane_g1

0x4a3a,	// (0x00083253) smil2_video_pane_ParamLimits

0x4a3a,	// (0x00083253) smil2_video_pane

0xb1ad,	// (0x000899c6) aid_zoom_text_primary_cp

0xb1ed,	// (0x00089a06) popup_preview_fixed_window

0x2bb3,	// (0x000813cc) im_reading_pane_g1

0x555b,	// (0x00083d74) cams2_bc_adjust_pane_cp_ParamLimits

0x555b,	// (0x00083d74) cams2_bc_adjust_pane_cp

0x5841,	// (0x0008405a) cams2_bc_adjust_pane_ParamLimits

0x5841,	// (0x0008405a) cams2_bc_adjust_pane

0xccfd,	// (0x0008b516) cams2_bc_adjust_pane_g1

0xcd05,	// (0x0008b51e) cams2_slider_pane

0xcd0e,	// (0x0008b527) cams2_slider_pane_g1

0xcd17,	// (0x0008b530) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0008deb7) cams2_slider_pane_g

0x188a,	// (0x000800a3) calc_display_pane_ParamLimits

0x18b2,	// (0x000800cb) calc_paper_pane_ParamLimits

0x18d5,	// (0x000800ee) grid_calc_pane_ParamLimits

0xb357,	// (0x00089b70) popup_clock_digital_window_t1_ParamLimits

0xb8cc,	// (0x0008a0e5) main_image_pane_t1

0x186c,	// (0x00080085) aid_size_cell_calc_ParamLimits

0x186c,	// (0x00080085) aid_size_cell_calc

0x5029,	// (0x00083842) popup_blid_sat_info2_window_ParamLimits

0x5029,	// (0x00083842) popup_blid_sat_info2_window

0xcd39,	// (0x0008b552) aid_size_cell_blid

0xcd41,	// (0x0008b55a) bg_popup_window_pane_cp07

0xcd64,	// (0x0008b57d) grid_popup_blid_pane

0xcd6e,	// (0x0008b587) heading_pane_cp05_ParamLimits

0xcd6e,	// (0x0008b587) heading_pane_cp05

0xce38,	// (0x0008b651) cell_popup_blid_pane_ParamLimits

0xce38,	// (0x0008b651) cell_popup_blid_pane

0xce5c,	// (0x0008b675) cell_popup_blid_pane_g1

0xce64,	// (0x0008b67d) cell_popup_blid_pane_t1

0x5aee,	// (0x00084307) mup2_indicator_pane_ParamLimits

0x5aee,	// (0x00084307) mup2_indicator_pane

0xb5f0,	// (0x00089e09) mup2_visualizer_osc_pane

0xcba1,	// (0x0008b3ba) mup2_visualizer_spec_pane_ParamLimits

0xcba1,	// (0x0008b3ba) mup2_visualizer_spec_pane

0x5c69,	// (0x00084482) mup2_spec_half_pane

0x5c72,	// (0x0008448b) mup2_spec_half_pane_cp

0x5c7a,	// (0x00084493) mup2_spec_bar_pane_ParamLimits

0x5c7a,	// (0x00084493) mup2_spec_bar_pane

0xcaf0,	// (0x0008b309) mup2_spec_bar_pane_g1

0xcafa,	// (0x0008b313) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0008de2a) mup2_spec_bar_pane_g

0x5c9a,	// (0x000844b3) mup2_osc_middle_pane

0xcb0c,	// (0x0008b325) mup2_visualizer_osc_pane_g1

0xec81,	// (0x0008d49a) popup_number_entry_window_t1_ParamLimits

0xec94,	// (0x0008d4ad) popup_number_entry_window_t2_ParamLimits

0xeca6,	// (0x0008d4bf) popup_number_entry_window_t3_ParamLimits

0x13c3,	// (0x0007fbdc) popup_number_entry_window_t5_ParamLimits

0x13c3,	// (0x0007fbdc) popup_number_entry_window_t5

0xf0d3,	// (0x0008d8ec) popup_number_entry_window_t_ParamLimits

0xecb8,	// (0x0008d4d1) text_title_cp2_ParamLimits

0xb7a6,	// (0x00089fbf) aid_hotspot_pointer_text2_pane

0xb7cc,	// (0x00089fe5) main_viewer_pane_g9_ParamLimits

0xb7cc,	// (0x00089fe5) main_viewer_pane_g9

0x339d,	// (0x00081bb6) cale_month_pane_t1_ParamLimits

0x3a9e,	// (0x000822b7) bg_cale_pane_ParamLimits

0x3ab6,	// (0x000822cf) list_cale_pane_ParamLimits

0x3ac7,	// (0x000822e0) listscroll_cale_day_pane_t1

0x3ad9,	// (0x000822f2) scroll_pane_cp09_ParamLimits

0x448e,	// (0x00082ca7) main_mup_eq_pane_t1_ParamLimits

0x448e,	// (0x00082ca7) main_mup_eq_pane_t1

0x44a8,	// (0x00082cc1) main_mup_eq_pane_t2_ParamLimits

0x44a8,	// (0x00082cc1) main_mup_eq_pane_t2

0x44c2,	// (0x00082cdb) main_mup_eq_pane_t3_ParamLimits

0x44c2,	// (0x00082cdb) main_mup_eq_pane_t3

0x44de,	// (0x00082cf7) main_mup_eq_pane_t4_ParamLimits

0x44de,	// (0x00082cf7) main_mup_eq_pane_t4

0x44fa,	// (0x00082d13) main_mup_eq_pane_t5_ParamLimits

0x44fa,	// (0x00082d13) main_mup_eq_pane_t5

0x4516,	// (0x00082d2f) main_mup_eq_pane_t6_ParamLimits

0x4516,	// (0x00082d2f) main_mup_eq_pane_t6

0x452a,	// (0x00082d43) main_mup_eq_pane_t7_ParamLimits

0x452a,	// (0x00082d43) main_mup_eq_pane_t7

0x453e,	// (0x00082d57) main_mup_eq_pane_t8_ParamLimits

0x453e,	// (0x00082d57) main_mup_eq_pane_t8

0x4552,	// (0x00082d6b) main_mup_eq_pane_t9_ParamLimits

0x4552,	// (0x00082d6b) main_mup_eq_pane_t9

0x456c,	// (0x00082d85) main_mup_eq_pane_t10_ParamLimits

0x456c,	// (0x00082d85) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0008dc79) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0008dc79) main_mup_eq_pane_t

0x461b,	// (0x00082e34) mup_equalizer_pane_cp5_ParamLimits

0x462f,	// (0x00082e48) mup_equalizer_pane_cp6_ParamLimits

0x4643,	// (0x00082e5c) mup_equalizer_pane_cp7_ParamLimits

0xec57,	// (0x0008d470) main_gallery_pane

0xcb15,	// (0x0008b32e) smil2_volume_pane

0xcb1d,	// (0x0008b336) smil_status_volume_pane_g1_ParamLimits

0xcb30,	// (0x0008b349) smil_status_volume_pane_g2_ParamLimits

0xcb43,	// (0x0008b35c) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0008de2f) smil_status_volume_pane_g_ParamLimits

0xcd41,	// (0x0008b55a) bg_popup_window_pane_cp07_ParamLimits

0xcd4f,	// (0x0008b568) blid_firmament_pane

0x5ca3,	// (0x000844bc) aid_size_cell_gallery_ParamLimits

0x5ca3,	// (0x000844bc) aid_size_cell_gallery

0x5cb9,	// (0x000844d2) grid_gallery_pane_ParamLimits

0x5cb9,	// (0x000844d2) grid_gallery_pane

0x5cd2,	// (0x000844eb) cell_gallery_pane_ParamLimits

0x5cd2,	// (0x000844eb) cell_gallery_pane

0xce72,	// (0x0008b68b) bg_cell_gallery_focus_pane_ParamLimits

0xce72,	// (0x0008b68b) bg_cell_gallery_focus_pane

0xce84,	// (0x0008b69d) cell_gallery_pane_g1_ParamLimits

0xce84,	// (0x0008b69d) cell_gallery_pane_g1

0x5d1b,	// (0x00084534) cell_gallery_pane_g2_ParamLimits

0x5d1b,	// (0x00084534) cell_gallery_pane_g2

0x5d28,	// (0x00084541) cell_gallery_pane_g3_ParamLimits

0x5d28,	// (0x00084541) cell_gallery_pane_g3

0xce90,	// (0x0008b6a9) cell_gallery_pane_g4_ParamLimits

0xce90,	// (0x0008b6a9) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0008dedd) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0008dedd) cell_gallery_pane_g

0xce9c,	// (0x0008b6b5) bg_cell_gallery_focus_pane_g1

0xcea4,	// (0x0008b6bd) bg_cell_gallery_focus_pane_g2

0xceac,	// (0x0008b6c5) bg_cell_gallery_focus_pane_g3

0xceb4,	// (0x0008b6cd) bg_cell_gallery_focus_pane_g4

0xcebc,	// (0x0008b6d5) bg_cell_gallery_focus_pane_g5

0xcec4,	// (0x0008b6dd) bg_cell_gallery_focus_pane_g6

0xcecc,	// (0x0008b6e5) bg_cell_gallery_focus_pane_g7

0xced4,	// (0x0008b6ed) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0008dee6) bg_cell_gallery_focus_pane_g

0xcedc,	// (0x0008b6f5) aid_firma_cardinal

0xcef0,	// (0x0008b709) blid_firmament_pane_t1

0xcf07,	// (0x0008b720) blid_firmament_pane_t2

0xcf1e,	// (0x0008b737) blid_firmament_pane_t3

0xcf35,	// (0x0008b74e) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0008def7) blid_firmament_pane_t

0xcf4c,	// (0x0008b765) blid_sat_info_pane

0xcf5c,	// (0x0008b775) blid_sat_info_pane_g1

0xcf5c,	// (0x0008b775) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0008df00) blid_sat_info_pane_g

0xcf66,	// (0x0008b77f) blid_sat_info_pane_t1

0xcf74,	// (0x0008b78d) smil2_volume_content_pane

0xcf7d,	// (0x0008b796) smil2_volume_pane_g1

0xcf85,	// (0x0008b79e) smil2_volume_content_pane_g1

0xcf8e,	// (0x0008b7a7) smil2_volume_content_pane_g2

0xcf97,	// (0x0008b7b0) smil2_volume_content_pane_g3

0xcfa0,	// (0x0008b7b9) smil2_volume_content_pane_g4

0xcfa9,	// (0x0008b7c2) smil2_volume_content_pane_g5

0xcfb2,	// (0x0008b7cb) smil2_volume_content_pane_g6

0xcfbb,	// (0x0008b7d4) smil2_volume_content_pane_g7

0xcfc4,	// (0x0008b7dd) smil2_volume_content_pane_g8

0xcfcd,	// (0x0008b7e6) smil2_volume_content_pane_g9

0xcfd6,	// (0x0008b7ef) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0008df05) smil2_volume_content_pane_g

0x1fec,	// (0x00080805) cale_week_day_heading_pane_t1_ParamLimits

0x2031,	// (0x0008084a) cale_week_day_heading_pane_t2_ParamLimits

0x207b,	// (0x00080894) cale_week_day_heading_pane_t3_ParamLimits

0x20c5,	// (0x000808de) cale_week_day_heading_pane_t4_ParamLimits

0x210f,	// (0x00080928) cale_week_day_heading_pane_t5_ParamLimits

0x2161,	// (0x0008097a) cale_week_day_heading_pane_t6_ParamLimits

0x21b3,	// (0x000809cc) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0008d9f1) cale_week_day_heading_pane_t_ParamLimits

0x21f8,	// (0x00080a11) bg_cale_side_pane_ParamLimits

0x2206,	// (0x00080a1f) cale_week_time_pane_t1_ParamLimits

0x2220,	// (0x00080a39) cale_week_time_pane_t2_ParamLimits

0x223a,	// (0x00080a53) cale_week_time_pane_t3_ParamLimits

0x2254,	// (0x00080a6d) cale_week_time_pane_t4_ParamLimits

0x226e,	// (0x00080a87) cale_week_time_pane_t5_ParamLimits

0x2288,	// (0x00080aa1) cale_week_time_pane_t6_ParamLimits

0x22a2,	// (0x00080abb) cale_week_time_pane_t7_ParamLimits

0x22bc,	// (0x00080ad5) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0008da00) cale_week_time_pane_t_ParamLimits

0x22dc,	// (0x00080af5) cell_cale_week_pane_g2_ParamLimits

0x21f8,	// (0x00080a11) bg_cale_side_pane_cp01_ParamLimits

0x3839,	// (0x00082052) cale_month_week_pane_t1_ParamLimits

0x3852,	// (0x0008206b) cale_month_week_pane_t2_ParamLimits

0x386b,	// (0x00082084) cale_month_week_pane_t3_ParamLimits

0x3884,	// (0x0008209d) cale_month_week_pane_t4_ParamLimits

0x389d,	// (0x000820b6) cale_month_week_pane_t5_ParamLimits

0x38b6,	// (0x000820cf) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0008dad9) cale_month_week_pane_t_ParamLimits

0xb2a1,	// (0x00089aba) cell_cale_month_pane_g1_ParamLimits

0xec57,	// (0x0008d470) main_cale_event_viewer_pane

0xec57,	// (0x0008d470) listscroll_cale_event_viewer_pane

0xcfdf,	// (0x0008b7f8) list_cale_ev_pane

0xcfe7,	// (0x0008b800) scroll_pane_cp023

0xcff3,	// (0x0008b80c) field_cale_ev_pane_ParamLimits

0xcff3,	// (0x0008b80c) field_cale_ev_pane

0xd011,	// (0x0008b82a) field_cale_ev_content_pane_ParamLimits

0xd011,	// (0x0008b82a) field_cale_ev_content_pane

0xd01d,	// (0x0008b836) field_cale_ev_pane_g1_ParamLimits

0xd01d,	// (0x0008b836) field_cale_ev_pane_g1

0xd029,	// (0x0008b842) field_cale_ev_pane_g2_ParamLimits

0xd029,	// (0x0008b842) field_cale_ev_pane_g2

0xd041,	// (0x0008b85a) field_cale_ev_pane_g3_ParamLimits

0xd041,	// (0x0008b85a) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0008df1a) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0008df1a) field_cale_ev_pane_g

0xd059,	// (0x0008b872) field_cale_ev_pane_t1_ParamLimits

0xd059,	// (0x0008b872) field_cale_ev_pane_t1

0xd070,	// (0x0008b889) field_cale_ev_content_pane_t1_ParamLimits

0xd070,	// (0x0008b889) field_cale_ev_content_pane_t1

0x46b1,	// (0x00082eca) bg_button_pane_cp01

0x1ce7,	// (0x00080500) listscroll_cale_week_pane_ParamLimits

0x1cf9,	// (0x00080512) popup_toolbar_window_cp01

0x1f2f,	// (0x00080748) listscroll_cale_week_pane_t1_ParamLimits

0x1ce7,	// (0x00080500) listscroll_cale_day_pane_ParamLimits

0x1cf9,	// (0x00080512) popup_toolbar_window_cp02

0x3ac7,	// (0x000822e0) listscroll_cale_day_pane_t1_ParamLimits

0x1ce7,	// (0x00080500) main_cale_month_pane_ParamLimits

0xca8e,	// (0x0008b2a7) popup_toolbar_window_cp03_ParamLimits

0xca8e,	// (0x0008b2a7) popup_toolbar_window_cp03

0x4902,	// (0x0008311b) main_image_pane_g2_ParamLimits

0x4902,	// (0x0008311b) main_image_pane_g2

0x4913,	// (0x0008312c) main_image_pane_g3_ParamLimits

0x4913,	// (0x0008312c) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0008dd0b) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0008dd0b) main_image_pane_g

0xb8cc,	// (0x0008a0e5) main_image_pane_t1_ParamLimits

0x4924,	// (0x0008313d) main_image_pane_t2_ParamLimits

0x4924,	// (0x0008313d) main_image_pane_t2

0x4936,	// (0x0008314f) main_image_pane_t3_ParamLimits

0x4936,	// (0x0008314f) main_image_pane_t3

0x495e,	// (0x00083177) main_image_pane_t4_ParamLimits

0x495e,	// (0x00083177) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0008dd12) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0008dd12) main_image_pane_t

0x497e,	// (0x00083197) popup_image_details_window_cp01

0x4988,	// (0x000831a1) popup_toobar_trans_pane_cp01_ParamLimits

0x4988,	// (0x000831a1) popup_toobar_trans_pane_cp01

0x5108,	// (0x00083921) popup_image_details_window_ParamLimits

0x5108,	// (0x00083921) popup_image_details_window

0xca61,	// (0x0008b27a) popup_image_focus_window

0x5515,	// (0x00083d2e) camera2_autofocus_pane_ParamLimits

0x5515,	// (0x00083d2e) camera2_autofocus_pane

0xec57,	// (0x0008d470) bg_popup_sub_pane_cp06

0xd08e,	// (0x0008b8a7) popup_image_focus_window_g1

0xd096,	// (0x0008b8af) popup_image_focus_window_g2

0xd09e,	// (0x0008b8b7) popup_image_focus_window_g3

0xd0a6,	// (0x0008b8bf) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0008df21) popup_image_focus_window_g

0xd0ae,	// (0x0008b8c7) popup_image_focus_window_t1

0xd0bc,	// (0x0008b8d5) popup_image_focus_window_t2

0xd0cc,	// (0x0008b8e5) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0008df2a) popup_image_focus_window_t

0xd0da,	// (0x0008b8f3) camera2_autofocus_pane_g1

0xb1f7,	// (0x00089a10) bg_tb_trans_pane_cp01

0xd0e8,	// (0x0008b901) popup_image_details_window_g1

0xd0fb,	// (0x0008b914) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0008df3c) popup_image_details_window_g

0xd124,	// (0x0008b93d) popup_image_details_window_t1

0xd136,	// (0x0008b94f) popup_image_details_window_t2

0xd14f,	// (0x0008b968) popup_image_details_window_t3

0xd163,	// (0x0008b97c) popup_image_details_window_t4

0xd17e,	// (0x0008b997) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0008df43) popup_image_details_window_t

0x19fd,	// (0x00080216) bg_calc_paper_pane_ParamLimits

0xec57,	// (0x0008d470) grid_highlight_pane_cp013

0xb20d,	// (0x00089a26) list_calc_pane_ParamLimits

0xb21f,	// (0x00089a38) scroll_pane_cp024

0x1a11,	// (0x0008022a) bg_calc_display_pane_ParamLimits

0x1a1d,	// (0x00080236) calc_display_pane_t1_ParamLimits

0x1a2f,	// (0x00080248) calc_display_pane_t2_ParamLimits

0xb227,	// (0x00089a40) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0008d973) calc_display_pane_t_ParamLimits

0x1b3c,	// (0x00080355) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0008d990) cell_calc_pane_g

0x1b45,	// (0x0008035e) cell_calc_pane_t1

0x1b54,	// (0x0008036d) grid_highlight_pane_cp02_ParamLimits

0x1b6a,	// (0x00080383) toolbar_button_pane_cp01_ParamLimits

0x1b6a,	// (0x00080383) toolbar_button_pane_cp01

0xb911,	// (0x0008a12a) temp_image_control_pane_ParamLimits

0xb911,	// (0x0008a12a) temp_image_control_pane

0xb1f7,	// (0x00089a10) main_mp3_pane

0xd198,	// (0x0008b9b1) temp_image_control_pane_g1_ParamLimits

0xd198,	// (0x0008b9b1) temp_image_control_pane_g1

0xd1a6,	// (0x0008b9bf) temp_image_control_pane_g2_ParamLimits

0xd1a6,	// (0x0008b9bf) temp_image_control_pane_g2

0xd1b8,	// (0x0008b9d1) temp_image_control_pane_g3_ParamLimits

0xd1b8,	// (0x0008b9d1) temp_image_control_pane_g3

0x5d65,	// (0x0008457e) temp_image_control_pane_g4_ParamLimits

0x5d65,	// (0x0008457e) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0008df4e) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0008df4e) temp_image_control_pane_g

0xd198,	// (0x0008b9b1) main_mp3_pane_g1

0x5d78,	// (0x00084591) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0008df57) main_mp3_pane_g

0xd1fb,	// (0x0008ba14) main_mp3_pane_t1

0x24c3,	// (0x00080cdc) main_camera_pane_g8_ParamLimits

0x24c3,	// (0x00080cdc) main_camera_pane_g8

0x266b,	// (0x00080e84) main_video_pane_g7_ParamLimits

0x266b,	// (0x00080e84) main_video_pane_g7

0xcb83,	// (0x0008b39c) main_camera2_pane_t7_ParamLimits

0xcb83,	// (0x0008b39c) main_camera2_pane_t7

0x2c7b,	// (0x00081494) scroll_pane_cp025_ParamLimits

0x2c7b,	// (0x00081494) scroll_pane_cp025

0x2c8f,	// (0x000814a8) scroll_pane_cp026_ParamLimits

0x2c8f,	// (0x000814a8) scroll_pane_cp026

0x2c9e,	// (0x000814b7) wml_content_pane_ParamLimits

0xec57,	// (0x0008d470) main_touch_calib_pane

0x5e4c,	// (0x00084665) main_touch_calib_pane_g1

0x5e5e,	// (0x00084677) main_touch_calib_pane_g2

0x5e70,	// (0x00084689) main_touch_calib_pane_g3

0x5e82,	// (0x0008469b) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0008df75) main_touch_calib_pane_g

0x5e94,	// (0x000846ad) main_touch_calib_pane_t1

0x5eae,	// (0x000846c7) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0008df7e) main_touch_calib_pane_t

0xb531,	// (0x00089d4a) mup_progress_pane_cp02

0xb550,	// (0x00089d69) navi_pane_g1

0xb5b2,	// (0x00089dcb) navi_pane_mp_t3

0xb1f7,	// (0x00089a10) main_mp3_pane_ParamLimits

0x528d,	// (0x00083aa6) navi_pane_ParamLimits

0xd198,	// (0x0008b9b1) main_mp3_pane_g1_ParamLimits

0x5d78,	// (0x00084591) main_mp3_pane_g2_ParamLimits

0x5d86,	// (0x0008459f) main_mp3_pane_g3_ParamLimits

0x5d86,	// (0x0008459f) main_mp3_pane_g3

0x5d94,	// (0x000845ad) main_mp3_pane_g4_ParamLimits

0x5d94,	// (0x000845ad) main_mp3_pane_g4

0xd1c8,	// (0x0008b9e1) main_mp3_pane_g5_ParamLimits

0xd1c8,	// (0x0008b9e1) main_mp3_pane_g5

0xd1d6,	// (0x0008b9ef) main_mp3_pane_g6_ParamLimits

0xd1d6,	// (0x0008b9ef) main_mp3_pane_g6

0xd1e3,	// (0x0008b9fc) main_mp3_pane_g7_ParamLimits

0xd1e3,	// (0x0008b9fc) main_mp3_pane_g7

0xd1ef,	// (0x0008ba08) main_mp3_pane_g8_ParamLimits

0xd1ef,	// (0x0008ba08) main_mp3_pane_g8

0xf73e,	// (0x0008df57) main_mp3_pane_g_ParamLimits

0x5da0,	// (0x000845b9) main_mp3_pane_t2

0x5dae,	// (0x000845c7) main_mp3_pane_t3

0xd209,	// (0x0008ba22) main_mp3_pane_t4

0xd217,	// (0x0008ba30) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0008df68) main_mp3_pane_t

0xd225,	// (0x0008ba3e) mup_progress_pane_cp01

0xb1ad,	// (0x000899c6) aid_zoom_text_secondary2

0xcfdf,	// (0x0008b7f8) list_cale_ev2_pane

0xcfe7,	// (0x0008b800) scroll_pane_cp023_ParamLimits

0x5f04,	// (0x0008471d) field_cale_ev2_pane_ParamLimits

0x5f04,	// (0x0008471d) field_cale_ev2_pane

0x5f24,	// (0x0008473d) field_cale_ev2_pane_g1_ParamLimits

0x5f24,	// (0x0008473d) field_cale_ev2_pane_g1

0x5f30,	// (0x00084749) field_cale_ev2_pane_g2_ParamLimits

0x5f30,	// (0x00084749) field_cale_ev2_pane_g2

0x5f48,	// (0x00084761) field_cale_ev2_pane_g3_ParamLimits

0x5f48,	// (0x00084761) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0008df89) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0008df89) field_cale_ev2_pane_g

0xd239,	// (0x0008ba52) field_cale_ev2_pane_t1_ParamLimits

0xd239,	// (0x0008ba52) field_cale_ev2_pane_t1

0xd250,	// (0x0008ba69) field_cale_ev2_pane_t2_ParamLimits

0xd250,	// (0x0008ba69) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0008df92) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0008df92) field_cale_ev2_pane_t

0x47b7,	// (0x00082fd0) main_postcard_pane_g5_ParamLimits

0x47b7,	// (0x00082fd0) main_postcard_pane_g5

0x47cd,	// (0x00082fe6) main_postcard_pane_g6_ParamLimits

0x47cd,	// (0x00082fe6) main_postcard_pane_g6

0x2411,	// (0x00080c2a) camera2_autofocus_pane_cp_ParamLimits

0x2411,	// (0x00080c2a) camera2_autofocus_pane_cp

0xb1f7,	// (0x00089a10) main_mup3_pane

0x5f60,	// (0x00084779) main_mup3_pane_g1_ParamLimits

0x5f60,	// (0x00084779) main_mup3_pane_g1

0x5f82,	// (0x0008479b) main_mup3_pane_g2_ParamLimits

0x5f82,	// (0x0008479b) main_mup3_pane_g2

0x6000,	// (0x00084819) main_mup3_pane_g3_ParamLimits

0x6000,	// (0x00084819) main_mup3_pane_g3

0x6046,	// (0x0008485f) main_mup3_pane_g4_ParamLimits

0x6046,	// (0x0008485f) main_mup3_pane_g4

0x608c,	// (0x000848a5) main_mup3_pane_g5_ParamLimits

0x608c,	// (0x000848a5) main_mup3_pane_g5

0x60d2,	// (0x000848eb) main_mup3_pane_g6_ParamLimits

0x60d2,	// (0x000848eb) main_mup3_pane_g6

0xd285,	// (0x0008ba9e) main_mup3_pane_g7_ParamLimits

0xd285,	// (0x0008ba9e) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0008dfa2) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0008dfa2) main_mup3_pane_g

0x6150,	// (0x00084969) main_mup3_pane_t1_ParamLimits

0x6150,	// (0x00084969) main_mup3_pane_t1

0x61c4,	// (0x000849dd) main_mup3_pane_t2_ParamLimits

0x61c4,	// (0x000849dd) main_mup3_pane_t2

0x6298,	// (0x00084ab1) main_mup3_pane_t4_ParamLimits

0x6298,	// (0x00084ab1) main_mup3_pane_t4

0x62ee,	// (0x00084b07) main_mup3_pane_t5_ParamLimits

0x62ee,	// (0x00084b07) main_mup3_pane_t5

0x63aa,	// (0x00084bc3) main_mup3_pane_t6_ParamLimits

0x63aa,	// (0x00084bc3) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0008dfb3) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0008dfb3) main_mup3_pane_t

0x6462,	// (0x00084c7b) mup3_progress_pane_ParamLimits

0x6462,	// (0x00084c7b) mup3_progress_pane

0x64f8,	// (0x00084d11) popup_mup3_control_window_ParamLimits

0x64f8,	// (0x00084d11) popup_mup3_control_window

0xd293,	// (0x0008baac) popup_mup3_text_window

0x652a,	// (0x00084d43) mup3_progress_pane_t1

0x6549,	// (0x00084d62) mup3_progress_pane_t2

0xd29b,	// (0x0008bab4) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0008dfc0) mup3_progress_pane_t

0xd2b8,	// (0x0008bad1) mup_progress_pane_cp03

0xec57,	// (0x0008d470) bg_tb_trans_pane_cp04

0x6568,	// (0x00084d81) mup3_volume_pane

0x6570,	// (0x00084d89) popup_mup3_control_window_g1

0x6579,	// (0x00084d92) mup3_volume_pane_g1

0x6582,	// (0x00084d9b) mup3_volume_pane_g2

0x658b,	// (0x00084da4) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0008dfc7) mup3_volume_pane_g

0xec57,	// (0x0008d470) bg_tb_trans_pane_cp03

0xd2c8,	// (0x0008bae1) popup_mup3_text_window_g1

0xd2d0,	// (0x0008bae9) popup_mup3_text_window_t1

0x1b0b,	// (0x00080324) list_calc_item_pane_g1_ParamLimits

0xcc6b,	// (0x0008b484) mup_volume_pane_cp_g1

0x5ec8,	// (0x000846e1) main_touch_calib_pane_t3

0x5edc,	// (0x000846f5) main_touch_calib_pane_t4

0x5ef0,	// (0x00084709) main_touch_calib_pane_t5

0xb189,	// (0x000899a2) aid_cell_size_toolbar2

0xb191,	// (0x000899aa) aid_popup3_width_pane

0xb19d,	// (0x000899b6) aid_zoom_text_msg_primary

0x23de,	// (0x00080bf7) vorec_t7

0x1a76,	// (0x0008028f) bg_calc_paper_pane_g1_ParamLimits

0x1a82,	// (0x0008029b) bg_calc_paper_pane_g2_ParamLimits

0x1a8e,	// (0x000802a7) bg_calc_paper_pane_g3_ParamLimits

0x1a9a,	// (0x000802b3) bg_calc_paper_pane_g4_ParamLimits

0x1aa6,	// (0x000802bf) bg_calc_paper_pane_g5_ParamLimits

0x1ab2,	// (0x000802cb) bg_calc_paper_pane_g6_ParamLimits

0x1ac1,	// (0x000802da) bg_calc_paper_pane_g7_ParamLimits

0x1ad0,	// (0x000802e9) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0008d97a) bg_calc_paper_pane_g_ParamLimits

0x1ae3,	// (0x000802fc) calc_bg_paper_pane_g9_ParamLimits

0x2568,	// (0x00080d81) image_qvga_pane_ParamLimits

0x2568,	// (0x00080d81) image_qvga_pane

0x16a5,	// (0x0007febe) bg_popup_sub_pane_cp04_ParamLimits

0xb848,	// (0x0008a061) popup_mup_playback_window_g1_ParamLimits

0xb854,	// (0x0008a06d) popup_mup_playback_window_t1_ParamLimits

0xb869,	// (0x0008a082) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0008dd06) popup_mup_playback_window_t_ParamLimits

0x5a08,	// (0x00084221) main_mup2_pane_g3_ParamLimits

0x5a08,	// (0x00084221) main_mup2_pane_g3

0x290e,	// (0x00081127) popup_toolbar_window_cp04

0xbc4b,	// (0x0008a464) popup_call2_audio_second_window_g3_ParamLimits

0xbc4b,	// (0x0008a464) popup_call2_audio_second_window_g3

0xc055,	// (0x0008a86e) popup_call2_audio_first_window_g4_ParamLimits

0xc055,	// (0x0008a86e) popup_call2_audio_first_window_g4

0xc6d4,	// (0x0008aeed) popup_call2_audio_in_window_g4_ParamLimits

0xc6d4,	// (0x0008aeed) popup_call2_audio_in_window_g4

0x48e4,	// (0x000830fd) aid_area_sk_bg_cut_ParamLimits

0x48e4,	// (0x000830fd) aid_area_sk_bg_cut

0xb87e,	// (0x0008a097) aid_area_sk_bg_cut_2_ParamLimits

0xb87e,	// (0x0008a097) aid_area_sk_bg_cut_2

0x5d0b,	// (0x00084524) aid_placing_details_win

0x5d13,	// (0x0008452c) aid_placing_details_win_2

0xd0da,	// (0x0008b8f3) camera2_autofocus_pane_g1_ParamLimits

0x130a,	// (0x0007fb23) popup_fixed_preview_cale_window_ParamLimits

0x130a,	// (0x0007fb23) popup_fixed_preview_cale_window

0xb60a,	// (0x00089e23) navi_slider_pane_g3

0xb613,	// (0x00089e2c) navi_slider_pane_g4

0xb61c,	// (0x00089e35) navi_slider_pane_g5

0xb60a,	// (0x00089e23) navi_slider_pane_g6

0xb625,	// (0x00089e3e) navi_slider_pane_g7

0xb746,	// (0x00089f5f) mup_scale_pane_g3

0xb74f,	// (0x00089f68) mup_scale_pane_g4

0xb758,	// (0x00089f71) mup_scale_pane_g5

0x4657,	// (0x00082e70) mup_scale_pane_g6

0x4660,	// (0x00082e79) mup_scale_pane_g7

0xb60a,	// (0x00089e23) cams2_slider_pane_g3

0xcd20,	// (0x0008b539) cams2_slider_pane_g4

0xcd28,	// (0x0008b541) cams2_slider_pane_g5

0xb60a,	// (0x00089e23) cams2_slider_pane_g6

0xcd30,	// (0x0008b549) cams2_slider_pane_g7

0xcf5c,	// (0x0008b775) camera2_autofocus_pane_cp_g1

0xca35,	// (0x0008b24e) bg_popup_preview_window_pane_cp02_ParamLimits

0xca35,	// (0x0008b24e) bg_popup_preview_window_pane_cp02

0xd2de,	// (0x0008baf7) list_fp_cale_pane_ParamLimits

0xd2de,	// (0x0008baf7) list_fp_cale_pane

0xd2ea,	// (0x0008bb03) popup_fixed_preview_cale_window_t1_ParamLimits

0xd2ea,	// (0x0008bb03) popup_fixed_preview_cale_window_t1

0x6594,	// (0x00084dad) popup_fixed_preview_cale_window_t2_ParamLimits

0x6594,	// (0x00084dad) popup_fixed_preview_cale_window_t2

0x65a9,	// (0x00084dc2) popup_fixed_preview_cale_window_t3_ParamLimits

0x65a9,	// (0x00084dc2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0008dfce) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0008dfce) popup_fixed_preview_cale_window_t

0x65be,	// (0x00084dd7) list_single_fp_cale_pane_ParamLimits

0x65be,	// (0x00084dd7) list_single_fp_cale_pane

0xd308,	// (0x0008bb21) list_single_fp_cale_pane_g1_ParamLimits

0xd308,	// (0x0008bb21) list_single_fp_cale_pane_g1

0xd314,	// (0x0008bb2d) list_single_fp_cale_pane_g2_ParamLimits

0xd314,	// (0x0008bb2d) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0008dfd5) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0008dfd5) list_single_fp_cale_pane_g

0xd32d,	// (0x0008bb46) list_single_fp_cale_pane_t1_ParamLimits

0xd32d,	// (0x0008bb46) list_single_fp_cale_pane_t1

0xd33f,	// (0x0008bb58) list_single_fp_cale_pane_t2_ParamLimits

0xd33f,	// (0x0008bb58) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0008dfdc) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0008dfdc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec57,	// (0x0008d470) main_dialer_pane

0x65d3,	// (0x00084dec) aid_cell_size_keypad

0x65dd,	// (0x00084df6) dialer_ne_pane

0x65e5,	// (0x00084dfe) grid_dialer_command_1_pane

0x65ed,	// (0x00084e06) grid_dialer_command_2_pane

0x65f5,	// (0x00084e0e) grid_dialer_keypad_pane

0x6607,	// (0x00084e20) bg_popup_call_pane_cp06_ParamLimits

0x6607,	// (0x00084e20) bg_popup_call_pane_cp06

0x6613,	// (0x00084e2c) dialer_ne_clear_pane_ParamLimits

0x6613,	// (0x00084e2c) dialer_ne_clear_pane

0xd372,	// (0x0008bb8b) dialer_ne_pane_g1

0xd37a,	// (0x0008bb93) dialer_ne_pane_t1_ParamLimits

0xd37a,	// (0x0008bb93) dialer_ne_pane_t1

0x661f,	// (0x00084e38) dialer_ne_pane_t2_ParamLimits

0x661f,	// (0x00084e38) dialer_ne_pane_t2

0x6649,	// (0x00084e62) dialer_ne_pane_t3_ParamLimits

0x6649,	// (0x00084e62) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0008dfe1) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0008dfe1) dialer_ne_pane_t

0x6679,	// (0x00084e92) dialer_ne_pane_t3_copy1_ParamLimits

0x6679,	// (0x00084e92) dialer_ne_pane_t3_copy1

0x66a8,	// (0x00084ec1) cell_dialer_keypad_pane_ParamLimits

0x66a8,	// (0x00084ec1) cell_dialer_keypad_pane

0x66bf,	// (0x00084ed8) cell_dialer_command_1_pane_ParamLimits

0x66bf,	// (0x00084ed8) cell_dialer_command_1_pane

0x66d5,	// (0x00084eee) cell_dialer_command_2_pane_ParamLimits

0x66d5,	// (0x00084eee) cell_dialer_command_2_pane

0xd38c,	// (0x0008bba5) bg_button_pane_cp02_ParamLimits

0xd38c,	// (0x0008bba5) bg_button_pane_cp02

0x66e4,	// (0x00084efd) cell_dialer_keypad_pane_g1_ParamLimits

0x66e4,	// (0x00084efd) cell_dialer_keypad_pane_g1

0xd38c,	// (0x0008bba5) bg_button_pane_cp03_ParamLimits

0xd38c,	// (0x0008bba5) bg_button_pane_cp03

0x66f8,	// (0x00084f11) cell_dialer_command_1_pane_g1_ParamLimits

0x66f8,	// (0x00084f11) cell_dialer_command_1_pane_g1

0xd398,	// (0x0008bbb1) bg_button_pane_cp04

0x670c,	// (0x00084f25) cell_dialer_command_2_pane_g1

0xb5f0,	// (0x00089e09) bg_button_pane_cp06

0xd3a0,	// (0x0008bbb9) dialer_ne_clear_pane_g1

0x4191,	// (0x000829aa) navi_pane_g2

0x41bf,	// (0x000829d8) navi_pane_g3

0x0002,

0xf3f0,	// (0x0008dc09) navi_pane_g

0x41e8,	// (0x00082a01) navi_pane_mv_g2

0x420f,	// (0x00082a28) navi_pane_mv_g5

0x4217,	// (0x00082a30) navi_pane_mv_t1

0x1a11,	// (0x0008022a) main_clock2_pane

0x6757,	// (0x00084f70) main_clock2_list_pane_ParamLimits

0x6757,	// (0x00084f70) main_clock2_list_pane

0x678f,	// (0x00084fa8) main_clock2_pane_t1_ParamLimits

0x678f,	// (0x00084fa8) main_clock2_pane_t1

0x67cb,	// (0x00084fe4) main_clock2_pane_t2_ParamLimits

0x67cb,	// (0x00084fe4) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0008dfe8) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0008dfe8) main_clock2_pane_t

0x6869,	// (0x00085082) popup_clock_analogue_window_cp03_ParamLimits

0x6869,	// (0x00085082) popup_clock_analogue_window_cp03

0x688e,	// (0x000850a7) popup_clock_digital_window_cp02_ParamLimits

0x688e,	// (0x000850a7) popup_clock_digital_window_cp02

0x68ff,	// (0x00085118) main_clock2_list_single_pane_ParamLimits

0x68ff,	// (0x00085118) main_clock2_list_single_pane

0xb5f0,	// (0x00089e09) list_highlight_pane_cp05

0xd3be,	// (0x0008bbd7) main_clock2_list_single_pane_t1

0x290e,	// (0x00081127) popup_toolbar_window_cp04_ParamLimits

0x5d35,	// (0x0008454e) camera2_autofocus_pane_g2_ParamLimits

0x5d35,	// (0x0008454e) camera2_autofocus_pane_g2

0x5d41,	// (0x0008455a) camera2_autofocus_pane_g3_ParamLimits

0x5d41,	// (0x0008455a) camera2_autofocus_pane_g3

0x5d4d,	// (0x00084566) camera2_autofocus_pane_g4_ParamLimits

0x5d4d,	// (0x00084566) camera2_autofocus_pane_g4

0x5d59,	// (0x00084572) camera2_autofocus_pane_g5_ParamLimits

0x5d59,	// (0x00084572) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0008df31) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0008df31) camera2_autofocus_pane_g

0xd265,	// (0x0008ba7e) camera2_autofocus_pane_cp_g2

0xd26d,	// (0x0008ba86) camera2_autofocus_pane_cp_g3

0xd275,	// (0x0008ba8e) camera2_autofocus_pane_cp_g4

0xd27d,	// (0x0008ba96) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0008df97) camera2_autofocus_pane_cp_g

0x65ff,	// (0x00084e18) popup_dialer_spcha_window

0xec57,	// (0x0008d470) bg_popup_sub_pane_cp07

0xd3cc,	// (0x0008bbe5) list_spcha_pane

0xd3d4,	// (0x0008bbed) list_single_spcha_pane_ParamLimits

0xd3d4,	// (0x0008bbed) list_single_spcha_pane

0xec57,	// (0x0008d470) list_highlight_pane_cp06

0xd3e5,	// (0x0008bbfe) list_single_spcha_pane_t1

0xc47e,	// (0x0008ac97) popup_call2_audio_out_window_g4_ParamLimits

0xc47e,	// (0x0008ac97) popup_call2_audio_out_window_g4

0xec57,	// (0x0008d470) main_imed2_pane

0xca69,	// (0x0008b282) popup_imed_adjust2_window

0x5120,	// (0x00083939) popup_imed_trans_window_ParamLimits

0x5120,	// (0x00083939) popup_imed_trans_window

0xcd9a,	// (0x0008b5b3) popup_blid_sat_info2_window_t1

0xcda8,	// (0x0008b5c1) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0008dec6) popup_blid_sat_info2_window_t

0x69a9,	// (0x000851c2) aid_size_cell_colour_35

0x69c9,	// (0x000851e2) aid_size_cell_colour_112

0x69e9,	// (0x00085202) aid_size_cell_effect

0xca41,	// (0x0008b25a) bg_tb_trans_pane_cp02

0x3c0d,	// (0x00082426) heading_imed_pane

0x6a09,	// (0x00085222) listscroll_imed_pane

0xd3f3,	// (0x0008bc0c) heading_imed_pane_g1

0xd3fb,	// (0x0008bc14) heading_imed_pane_t1

0xd409,	// (0x0008bc22) grid_imed_colour_35_pane_ParamLimits

0xd409,	// (0x0008bc22) grid_imed_colour_35_pane

0x6a15,	// (0x0008522e) grid_imed_effect_pane

0xd420,	// (0x0008bc39) list_imed_aspect_pane

0x6a2b,	// (0x00085244) scroll_pane_cp027_ParamLimits

0x6a2b,	// (0x00085244) scroll_pane_cp027

0x6a3c,	// (0x00085255) cell_imed_effect_pane_ParamLimits

0x6a3c,	// (0x00085255) cell_imed_effect_pane

0xd428,	// (0x0008bc41) cell_imed_colour_pane_ParamLimits

0xd428,	// (0x0008bc41) cell_imed_colour_pane

0xd46a,	// (0x0008bc83) cell_imed_colour_pane_g1_ParamLimits

0xd46a,	// (0x0008bc83) cell_imed_colour_pane_g1

0xd47b,	// (0x0008bc94) hgihlgiht_grid_pane_cp016_ParamLimits

0xd47b,	// (0x0008bc94) hgihlgiht_grid_pane_cp016

0x6a63,	// (0x0008527c) cell_imed_effect_pane_g1

0x6a6b,	// (0x00085284) grid_highlight_pane_cp017

0xd48c,	// (0x0008bca5) list_imed_single_pane_ParamLimits

0xd48c,	// (0x0008bca5) list_imed_single_pane

0xec57,	// (0x0008d470) list_highlight_pane_cp07

0xd4a1,	// (0x0008bcba) list_imed_aspect_pane_comp1_t1

0xca41,	// (0x0008b25a) bg_tb_trans_pane_cp05

0xd4c3,	// (0x0008bcdc) popup_imed_adjust2_window_g1

0xd4ea,	// (0x0008bd03) popup_imed_adjust2_window_t1

0xd502,	// (0x0008bd1b) slider_imed_adjust_pane

0xd516,	// (0x0008bd2f) slider_imed_adjust_pane_g1

0xd526,	// (0x0008bd3f) slider_imed_adjust_pane_g2

0xd536,	// (0x0008bd4f) slider_imed_adjust_pane_g3

0xd547,	// (0x0008bd60) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0008e005) slider_imed_adjust_pane_g

0x6a74,	// (0x0008528d) aid_size_cell_clipart2

0x6a80,	// (0x00085299) grid_imed_clipart_pane

0xd558,	// (0x0008bd71) scroll_pane_cp031

0x6a8a,	// (0x000852a3) cell_imed_clipart_pane_ParamLimits

0x6a8a,	// (0x000852a3) cell_imed_clipart_pane

0x6aac,	// (0x000852c5) cell_imed_clipart_pane_g1

0xec57,	// (0x0008d470) grid_highlight_pane_cp014

0x676c,	// (0x00084f85) main_clock2_pane_g1_ParamLimits

0x676c,	// (0x00084f85) main_clock2_pane_g1

0x68aa,	// (0x000850c3) aid_call2_pane_cp10

0x68bc,	// (0x000850d5) aid_call_pane_cp10

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g1

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g2

0x68ce,	// (0x000850e7) popup_clock_analogue_window_cp10_g3

0x68ce,	// (0x000850e7) popup_clock_analogue_window_cp10_g4

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0008dff3) popup_clock_analogue_window_cp10_g

0x68e0,	// (0x000850f9) popup_clock_analogue_window_cp10_t1

0x6911,	// (0x0008512a) clock_digital_number_pane_cp10_ParamLimits

0x6911,	// (0x0008512a) clock_digital_number_pane_cp10

0x6929,	// (0x00085142) clock_digital_number_pane_cp11_ParamLimits

0x6929,	// (0x00085142) clock_digital_number_pane_cp11

0x6941,	// (0x0008515a) clock_digital_number_pane_cp12_ParamLimits

0x6941,	// (0x0008515a) clock_digital_number_pane_cp12

0x6959,	// (0x00085172) clock_digital_number_pane_cp13_ParamLimits

0x6959,	// (0x00085172) clock_digital_number_pane_cp13

0x6971,	// (0x0008518a) clock_digital_separator_pane_cp10_ParamLimits

0x6971,	// (0x0008518a) clock_digital_separator_pane_cp10

0x6989,	// (0x000851a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x6989,	// (0x000851a2) popup_clock_digital_window_cp02_t1

0x169d,	// (0x0007feb6) clock_digital_number_pane_cp10_g1

0x169d,	// (0x0007feb6) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0008e00e) clock_digital_number_pane_cp10_g

0x169d,	// (0x0007feb6) clock_digital_separator_pane_cp10_g1

0x169d,	// (0x0007feb6) clock_digital_separator_pane_g2_cp10

0xb5c0,	// (0x00089dd9) navi_pane_vded_g4

0xb5c9,	// (0x00089de2) navi_pane_vded_g5

0xb5d2,	// (0x00089deb) navi_pane_vded_t1

0xec57,	// (0x0008d470) main_vded_pane

0x6ab5,	// (0x000852ce) main_vded_pane_g1

0x6abf,	// (0x000852d8) main_vded_pane_g2

0x6ac9,	// (0x000852e2) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0008e013) main_vded_pane_g

0x6ad3,	// (0x000852ec) main_vded_pane_t1

0x6ae1,	// (0x000852fa) main_vded_pane_t2

0x0001,

0xf801,	// (0x0008e01a) main_vded_pane_t

0x6aef,	// (0x00085308) vded_slider_pane

0x6af7,	// (0x00085310) vded_video_pane

0xd560,	// (0x0008bd79) vded_video_pane_g1

0x6aff,	// (0x00085318) vded_video_pane_g2

0xcf5c,	// (0x0008b775) vded_video_pane_g3

0x0002,

0xf806,	// (0x0008e01f) vded_video_pane_g

0xd56a,	// (0x0008bd83) vded_slider_pane_g1

0xcc6b,	// (0x0008b484) vded_slider_pane_g2

0xd573,	// (0x0008bd8c) vded_slider_pane_g3

0xd57c,	// (0x0008bd95) vded_slider_pane_g4

0xd585,	// (0x0008bd9e) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0008e026) vded_slider_pane_g

0x64e0,	// (0x00084cf9) mup3_rocker_pane_ParamLimits

0x64e0,	// (0x00084cf9) mup3_rocker_pane

0x6b08,	// (0x00085321) mup3_control_keys_pane_g1

0x6b10,	// (0x00085329) mup3_control_keys_pane_g2

0x6b18,	// (0x00085331) mup3_control_keys_pane_g3

0x6b20,	// (0x00085339) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0008e031) mup3_control_keys_pane_g

0x1341,	// (0x0007fb5a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1341,	// (0x0007fb5a) popup_toolbar2_fixed_window_cp01

0x6514,	// (0x00084d2d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6514,	// (0x00084d2d) popup_toolbar2_fixed_window_cp02

0xbdbd,	// (0x0008a5d6) popup_call2_audio_second_window_t4_ParamLimits

0xbdbd,	// (0x0008a5d6) popup_call2_audio_second_window_t4

0xc2eb,	// (0x0008ab04) popup_call2_audio_first_window_t6_ParamLimits

0xc2eb,	// (0x0008ab04) popup_call2_audio_first_window_t6

0xc581,	// (0x0008ad9a) popup_call2_audio_out_window_t6_ParamLimits

0xc581,	// (0x0008ad9a) popup_call2_audio_out_window_t6

0xec57,	// (0x0008d470) main_vitu_pane

0x6b30,	// (0x00085349) aid_size_cell_itu_ParamLimits

0x6b30,	// (0x00085349) aid_size_cell_itu

0xb1f7,	// (0x00089a10) bg_popup_window_pane_cp08_ParamLimits

0xb1f7,	// (0x00089a10) bg_popup_window_pane_cp08

0x6b46,	// (0x0008535f) field_vitu_entry_pane_ParamLimits

0x6b46,	// (0x0008535f) field_vitu_entry_pane

0x6b5d,	// (0x00085376) grid_vitu_function_pane_ParamLimits

0x6b5d,	// (0x00085376) grid_vitu_function_pane

0x6b78,	// (0x00085391) grid_vitu_itu_pane_ParamLimits

0x6b78,	// (0x00085391) grid_vitu_itu_pane

0x6b96,	// (0x000853af) cell_vitu_itu_pane_ParamLimits

0x6b96,	// (0x000853af) cell_vitu_itu_pane

0x6bb8,	// (0x000853d1) cell_vitu_function_pane_ParamLimits

0x6bb8,	// (0x000853d1) cell_vitu_function_pane

0xb1f7,	// (0x00089a10) bg_popup_sub_pane_cp08_ParamLimits

0xb1f7,	// (0x00089a10) bg_popup_sub_pane_cp08

0x6bd1,	// (0x000853ea) field_vitu_entry_pane_t1_ParamLimits

0x6bd1,	// (0x000853ea) field_vitu_entry_pane_t1

0xd5a6,	// (0x0008bdbf) field_vitu_entry_pane_t2_ParamLimits

0xd5a6,	// (0x0008bdbf) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0008e03f) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0008e03f) field_vitu_entry_pane_t

0xd5c3,	// (0x0008bddc) bg_button_pane_cp05_ParamLimits

0xd5c3,	// (0x0008bddc) bg_button_pane_cp05

0x6bef,	// (0x00085408) cell_vitu_itu_pane_g1

0x6c07,	// (0x00085420) cell_vitu_itu_pane_t1_ParamLimits

0x6c07,	// (0x00085420) cell_vitu_itu_pane_t1

0x6c19,	// (0x00085432) cell_vitu_itu_pane_t2_ParamLimits

0x6c19,	// (0x00085432) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0008e044) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0008e044) cell_vitu_itu_pane_t

0xd5d1,	// (0x0008bdea) bg_button_pane_cp07

0x6c4e,	// (0x00085467) cell_vitu_function_pane_g1

0xb205,	// (0x00089a1e) main_calc_pane_g1

0x1168,	// (0x0007f981) aid_visual_content_pane

0xec57,	// (0x0008d470) main_vradio_pane

0x6c57,	// (0x00085470) main_vradio_pane_g1_ParamLimits

0x6c57,	// (0x00085470) main_vradio_pane_g1

0xd5db,	// (0x0008bdf4) main_vradio_pane_g2_ParamLimits

0xd5db,	// (0x0008bdf4) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0008e04b) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0008e04b) main_vradio_pane_g

0x6c70,	// (0x00085489) main_vradio_pane_t1_ParamLimits

0x6c70,	// (0x00085489) main_vradio_pane_t1

0x6c85,	// (0x0008549e) main_vradio_pane_t2_ParamLimits

0x6c85,	// (0x0008549e) main_vradio_pane_t2

0xd5e8,	// (0x0008be01) main_vradio_pane_t3_ParamLimits

0xd5e8,	// (0x0008be01) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0008e050) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0008e050) main_vradio_pane_t

0x6c9a,	// (0x000854b3) vradio_rocker_control_pane_ParamLimits

0x6c9a,	// (0x000854b3) vradio_rocker_control_pane

0x6cac,	// (0x000854c5) vradio_station_info_pane_ParamLimits

0x6cac,	// (0x000854c5) vradio_station_info_pane

0xd5fc,	// (0x0008be15) vradio_frequency_info_pane_ParamLimits

0xd5fc,	// (0x0008be15) vradio_frequency_info_pane

0xcf5c,	// (0x0008b775) vradio_station_info_pane_g1

0xd60b,	// (0x0008be24) vradio_station_info_pane_t1_ParamLimits

0xd60b,	// (0x0008be24) vradio_station_info_pane_t1

0xd62d,	// (0x0008be46) vradio_station_info_pane_t2_ParamLimits

0xd62d,	// (0x0008be46) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0008e057) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0008e057) vradio_station_info_pane_t

0xd63f,	// (0x0008be58) vradio_tuning_pane

0xd647,	// (0x0008be60) vradio_rocker_control_pane_g1

0xd64f,	// (0x0008be68) vradio_rocker_control_pane_g2

0xd657,	// (0x0008be70) vradio_rocker_control_pane_g3

0xd65f,	// (0x0008be78) vradio_rocker_control_pane_g4

0xd667,	// (0x0008be80) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0008e05c) vradio_rocker_control_pane_g

0x6cbe,	// (0x000854d7) vradio_frequency_info_pane_g1

0xd66f,	// (0x0008be88) vradio_frequency_info_pane_t1_ParamLimits

0xd66f,	// (0x0008be88) vradio_frequency_info_pane_t1

0x6cc8,	// (0x000854e1) vradio_tuning_pane_g1

0x6cd3,	// (0x000854ec) vradio_tuning_pane_t1

0xb1b5,	// (0x000899ce) area_side_right_pane_ParamLimits

0xb1b5,	// (0x000899ce) area_side_right_pane

0xc9fc,	// (0x0008b215) status_small_pane_g1

0xca04,	// (0x0008b21d) status_small_pane_g2

0xca0d,	// (0x0008b226) status_small_pane_g3

0xca16,	// (0x0008b22f) status_small_pane_g4

0x0003,

0xf603,	// (0x0008de1c) status_small_pane_g

0xca1f,	// (0x0008b238) status_small_pane_t1

0xec57,	// (0x0008d470) main_video3_pane

0xd683,	// (0x0008be9c) cams_zoom_vslider_pane

0xd68b,	// (0x0008bea4) image3_wide_pane_ParamLimits

0xd68b,	// (0x0008bea4) image3_wide_pane

0xd6a5,	// (0x0008bebe) image3_wide_small_pane

0xd6b1,	// (0x0008beca) main_video3_pane_g1_ParamLimits

0xd6b1,	// (0x0008beca) main_video3_pane_g1

0xd6cd,	// (0x0008bee6) main_video3_pane_g2_ParamLimits

0xd6cd,	// (0x0008bee6) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0008e067) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0008e067) main_video3_pane_g

0xd6e9,	// (0x0008bf02) main_video3_pane_t1_ParamLimits

0xd6e9,	// (0x0008bf02) main_video3_pane_t1

0xd714,	// (0x0008bf2d) main_video3_pane_t2_ParamLimits

0xd714,	// (0x0008bf2d) main_video3_pane_t2

0xd73f,	// (0x0008bf58) main_video3_pane_t3_ParamLimits

0xd73f,	// (0x0008bf58) main_video3_pane_t3

0x0002,

0xf853,	// (0x0008e06c) main_video3_pane_t_ParamLimits

0xf853,	// (0x0008e06c) main_video3_pane_t

0xd76c,	// (0x0008bf85) cams_zoom_vslider_pane_g1

0xd775,	// (0x0008bf8e) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0008e073) cams_zoom_vslider_pane_g

0xd77d,	// (0x0008bf96) small_slider_vertical_pane

0xcf5c,	// (0x0008b775) small_slider_vertical_pane_g1

0xcf5c,	// (0x0008b775) small_slider_vertical_pane_g2

0xd785,	// (0x0008bf9e) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0008e078) small_slider_vertical_pane_g

0xec57,	// (0x0008d470) main_hwr_training_pane

0xd78e,	// (0x0008bfa7) hwr_training_instruct_pane_ParamLimits

0xd78e,	// (0x0008bfa7) hwr_training_instruct_pane

0x6ce2,	// (0x000854fb) hwr_training_navi_pane_ParamLimits

0x6ce2,	// (0x000854fb) hwr_training_navi_pane

0x6d01,	// (0x0008551a) hwr_training_write_pane_ParamLimits

0x6d01,	// (0x0008551a) hwr_training_write_pane

0xec57,	// (0x0008d470) bg_frame_shadow_pane

0xd7c5,	// (0x0008bfde) hwr_training_write_pane_g1

0xd7cd,	// (0x0008bfe6) hwr_training_write_pane_g2

0xd7d5,	// (0x0008bfee) hwr_training_write_pane_g3

0xd7dd,	// (0x0008bff6) hwr_training_write_pane_g4

0xd7e5,	// (0x0008bffe) hwr_training_write_pane_g5

0xd7ed,	// (0x0008c006) hwr_training_write_pane_g6

0xd7f5,	// (0x0008c00e) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0008e07f) hwr_training_write_pane_g

0xd7fd,	// (0x0008c016) hwr_training_navi_pane_g1_ParamLimits

0xd7fd,	// (0x0008c016) hwr_training_navi_pane_g1

0xd80f,	// (0x0008c028) hwr_training_navi_pane_g2_ParamLimits

0xd80f,	// (0x0008c028) hwr_training_navi_pane_g2

0xd821,	// (0x0008c03a) hwr_training_navi_pane_g3_ParamLimits

0xd821,	// (0x0008c03a) hwr_training_navi_pane_g3

0xd831,	// (0x0008c04a) hwr_training_navi_pane_g4_ParamLimits

0xd831,	// (0x0008c04a) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0008e08e) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0008e08e) hwr_training_navi_pane_g

0xd83e,	// (0x0008c057) hwr_training_navi_pane_t1

0x6d49,	// (0x00085562) list_single_hwr_training_instruct_pane_ParamLimits

0x6d49,	// (0x00085562) list_single_hwr_training_instruct_pane

0xd84c,	// (0x0008c065) list_single_hwr_training_instruct_pane_t1

0xce9c,	// (0x0008b6b5) bg_frame_shadow_pane_g1

0xd85b,	// (0x0008c074) bg_frame_shadow_pane_g2

0xd863,	// (0x0008c07c) bg_frame_shadow_pane_g3

0xd86b,	// (0x0008c084) bg_frame_shadow_pane_g4

0xd873,	// (0x0008c08c) bg_frame_shadow_pane_g5

0xd87b,	// (0x0008c094) bg_frame_shadow_pane_g6

0xd883,	// (0x0008c09c) bg_frame_shadow_pane_g7

0x1c59,	// (0x00080472) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0008e099) bg_frame_shadow_pane_g

0xec57,	// (0x0008d470) main_video_tele_dialer_pane

0x6d5e,	// (0x00085577) aid_size_cell_video_keypad_ParamLimits

0x6d5e,	// (0x00085577) aid_size_cell_video_keypad

0x6d78,	// (0x00085591) grid_video_dialer_keypad_pane_ParamLimits

0x6d78,	// (0x00085591) grid_video_dialer_keypad_pane

0x6dc4,	// (0x000855dd) video_down_pane_cp_ParamLimits

0x6dc4,	// (0x000855dd) video_down_pane_cp

0x6df6,	// (0x0008560f) cell_video_dialer_keypad_pane_ParamLimits

0x6df6,	// (0x0008560f) cell_video_dialer_keypad_pane

0xd88b,	// (0x0008c0a4) bg_button_pane_cp08_ParamLimits

0xd88b,	// (0x0008c0a4) bg_button_pane_cp08

0x6e18,	// (0x00085631) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e18,	// (0x00085631) cell_video_dialer_keypad_pane_g1

0x64ca,	// (0x00084ce3) mup3_rocker2_pane_ParamLimits

0x64ca,	// (0x00084ce3) mup3_rocker2_pane

0xcf5c,	// (0x0008b775) mup3_rocker2_pane_g1

0x5001,	// (0x0008381a) main_dialer2_pane

0xec57,	// (0x0008d470) main_mp4_pane

0xd89f,	// (0x0008c0b8) main_mp4_pane_g1_ParamLimits

0xd89f,	// (0x0008c0b8) main_mp4_pane_g1

0xd89f,	// (0x0008c0b8) main_mp4_pane_g2_ParamLimits

0xd89f,	// (0x0008c0b8) main_mp4_pane_g2

0x6e4f,	// (0x00085668) main_mp4_pane_g3_ParamLimits

0x6e4f,	// (0x00085668) main_mp4_pane_g3

0xd8ad,	// (0x0008c0c6) main_mp4_pane_g4_ParamLimits

0xd8ad,	// (0x0008c0c6) main_mp4_pane_g4

0xd8d5,	// (0x0008c0ee) main_mp4_pane_g5_ParamLimits

0xd8d5,	// (0x0008c0ee) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0008e0b9) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0008e0b9) main_mp4_pane_g

0xd925,	// (0x0008c13e) main_mp4_pane_t1_ParamLimits

0xd925,	// (0x0008c13e) main_mp4_pane_t1

0xd981,	// (0x0008c19a) main_mp4_pane_t2_ParamLimits

0xd981,	// (0x0008c19a) main_mp4_pane_t2

0xd9d3,	// (0x0008c1ec) main_mp4_pane_t3_ParamLimits

0xd9d3,	// (0x0008c1ec) main_mp4_pane_t3

0xd9f3,	// (0x0008c20c) main_mp4_pane_t4_ParamLimits

0xd9f3,	// (0x0008c20c) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0008e0c6) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0008e0c6) main_mp4_pane_t

0xda37,	// (0x0008c250) mp4_progress_pane_ParamLimits

0xda37,	// (0x0008c250) mp4_progress_pane

0xda81,	// (0x0008c29a) mp4_rocker_pane_ParamLimits

0xda81,	// (0x0008c29a) mp4_rocker_pane

0xdaa9,	// (0x0008c2c2) mp4_progress_pane_t1

0xdac2,	// (0x0008c2db) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0008e0cf) mp4_progress_pane_t

0xdadb,	// (0x0008c2f4) mup_progress_pane_cp04

0xcf5c,	// (0x0008b775) mp4_rocker_pane_g1

0x6e8b,	// (0x000856a4) aid_cell_size_keypad2_ParamLimits

0x6e8b,	// (0x000856a4) aid_cell_size_keypad2

0x6ea1,	// (0x000856ba) dialer2_ne_pane_ParamLimits

0x6ea1,	// (0x000856ba) dialer2_ne_pane

0x6ebb,	// (0x000856d4) grid_dialer2_keypad_pane_ParamLimits

0x6ebb,	// (0x000856d4) grid_dialer2_keypad_pane

0xcd41,	// (0x0008b55a) bg_popup_call_pane_cp07_ParamLimits

0xcd41,	// (0x0008b55a) bg_popup_call_pane_cp07

0x6ed7,	// (0x000856f0) dialer2_ne_pane_t1_ParamLimits

0x6ed7,	// (0x000856f0) dialer2_ne_pane_t1

0x6f12,	// (0x0008572b) cell_dialer2_keypad_pane_ParamLimits

0x6f12,	// (0x0008572b) cell_dialer2_keypad_pane

0xdaf9,	// (0x0008c312) bg_button_pane_pane_cp04_ParamLimits

0xdaf9,	// (0x0008c312) bg_button_pane_pane_cp04

0x6f34,	// (0x0008574d) cell_dialer2_keypad_pane_g1_ParamLimits

0x6f34,	// (0x0008574d) cell_dialer2_keypad_pane_g1

0x27d0,	// (0x00080fe9) aid_placing_vt_set_content_ParamLimits

0x27d0,	// (0x00080fe9) aid_placing_vt_set_content

0x27f8,	// (0x00081011) aid_placing_vt_set_title_ParamLimits

0x27f8,	// (0x00081011) aid_placing_vt_set_title

0xec57,	// (0x0008d470) main_image3_pane

0x6ffa,	// (0x00085813) area_side_right_pane_cp01_ParamLimits

0x6ffa,	// (0x00085813) area_side_right_pane_cp01

0xd89f,	// (0x0008c0b8) main_image3_pane_g1_ParamLimits

0xd89f,	// (0x0008c0b8) main_image3_pane_g1

0x7011,	// (0x0008582a) main_image3_pane_g2_ParamLimits

0x7011,	// (0x0008582a) main_image3_pane_g2

0x7039,	// (0x00085852) main_image3_pane_g3_ParamLimits

0x7039,	// (0x00085852) main_image3_pane_g3

0x7063,	// (0x0008587c) main_image3_pane_g4_ParamLimits

0x7063,	// (0x0008587c) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0008e0de) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0008e0de) main_image3_pane_g

0x708d,	// (0x000858a6) main_image3_pane_t1_ParamLimits

0x708d,	// (0x000858a6) main_image3_pane_t1

0x70e5,	// (0x000858fe) main_image3_pane_t2_ParamLimits

0x70e5,	// (0x000858fe) main_image3_pane_t2

0x7137,	// (0x00085950) main_image3_pane_t3_ParamLimits

0x7137,	// (0x00085950) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0008e0e7) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0008e0e7) main_image3_pane_t

0xb1f7,	// (0x00089a10) grid_sctrl_middle_pane_cp01_ParamLimits

0xb1f7,	// (0x00089a10) grid_sctrl_middle_pane_cp01

0x71bf,	// (0x000859d8) cell_sctrl_middle_pane_cp01_ParamLimits

0x71bf,	// (0x000859d8) cell_sctrl_middle_pane_cp01

0x71dc,	// (0x000859f5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x71dc,	// (0x000859f5) cell_sctrl_middle_pane_cp01_g1

0xec57,	// (0x0008d470) main_call4_pane

0x71f2,	// (0x00085a0b) aid_size_button_call4_ParamLimits

0x71f2,	// (0x00085a0b) aid_size_button_call4

0x7223,	// (0x00085a3c) call4_windows_pane_ParamLimits

0x7223,	// (0x00085a3c) call4_windows_pane

0x7243,	// (0x00085a5c) grid_call4_button_pane_ParamLimits

0x7243,	// (0x00085a5c) grid_call4_button_pane

0xdb37,	// (0x0008c350) call4_windows_conf_pane

0xdb4e,	// (0x0008c367) popup_call4_audio_first_window_ParamLimits

0xdb4e,	// (0x0008c367) popup_call4_audio_first_window

0xdb9a,	// (0x0008c3b3) popup_call4_audio_second_window_ParamLimits

0xdb9a,	// (0x0008c3b3) popup_call4_audio_second_window

0xdbae,	// (0x0008c3c7) popup_call4_audio_wait_window_ParamLimits

0xdbae,	// (0x0008c3c7) popup_call4_audio_wait_window

0x7270,	// (0x00085a89) cell_call4_button_pane_ParamLimits

0x7270,	// (0x00085a89) cell_call4_button_pane

0x7299,	// (0x00085ab2) bg_button_pane_cp09_ParamLimits

0x7299,	// (0x00085ab2) bg_button_pane_cp09

0x72a5,	// (0x00085abe) cell_call4_button_pane_g1_ParamLimits

0x72a5,	// (0x00085abe) cell_call4_button_pane_g1

0x72cb,	// (0x00085ae4) cell_call4_button_pane_t1_ParamLimits

0x72cb,	// (0x00085ae4) cell_call4_button_pane_t1

0xdbf6,	// (0x0008c40f) popup_call4_audio_conf_window_ParamLimits

0xdbf6,	// (0x0008c40f) popup_call4_audio_conf_window

0x652a,	// (0x00084d43) mup3_progress_pane_t1_ParamLimits

0x6549,	// (0x00084d62) mup3_progress_pane_t2_ParamLimits

0xd29b,	// (0x0008bab4) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0008dfc0) mup3_progress_pane_t_ParamLimits

0xd2b8,	// (0x0008bad1) mup_progress_pane_cp03_ParamLimits

0x6b28,	// (0x00085341) mup3_control_keys_pane_g4_copy1

0xda65,	// (0x0008c27e) mp4_rocker2_pane_ParamLimits

0xda65,	// (0x0008c27e) mp4_rocker2_pane

0xdc0a,	// (0x0008c423) mp4_rocker2_pane_g1

0xdc12,	// (0x0008c42b) mp4_rocker2_pane_g2

0xdc1a,	// (0x0008c433) mp4_rocker2_pane_g3

0xdc22,	// (0x0008c43b) mp4_rocker2_pane_g4

0xdc2a,	// (0x0008c443) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0008e0f0) mp4_rocker2_pane_g

0xec57,	// (0x0008d470) main_camera4_pane

0xec57,	// (0x0008d470) main_video4_pane

0x6d92,	// (0x000855ab) main_video_tele_dialer_pane_t1_ParamLimits

0x6d92,	// (0x000855ab) main_video_tele_dialer_pane_t1

0x6dab,	// (0x000855c4) main_video_tele_dialer_pane_t2_ParamLimits

0x6dab,	// (0x000855c4) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0008e0aa) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0008e0aa) main_video_tele_dialer_pane_t

0x7309,	// (0x00085b22) cam4_autofocus_pane_ParamLimits

0x7309,	// (0x00085b22) cam4_autofocus_pane

0x731f,	// (0x00085b38) cam4_image_uncrop_pane_ParamLimits

0x731f,	// (0x00085b38) cam4_image_uncrop_pane

0x7339,	// (0x00085b52) cam4_indicators_pane_ParamLimits

0x7339,	// (0x00085b52) cam4_indicators_pane

0x7364,	// (0x00085b7d) main_camera4_pane_g1_ParamLimits

0x7364,	// (0x00085b7d) main_camera4_pane_g1

0x7376,	// (0x00085b8f) main_camera4_pane_g2_ParamLimits

0x7376,	// (0x00085b8f) main_camera4_pane_g2

0x7389,	// (0x00085ba2) main_camera4_pane_g3_ParamLimits

0x7389,	// (0x00085ba2) main_camera4_pane_g3

0x739c,	// (0x00085bb5) main_camera4_pane_g4_ParamLimits

0x739c,	// (0x00085bb5) main_camera4_pane_g4

0x73af,	// (0x00085bc8) main_camera4_pane_g5_ParamLimits

0x73af,	// (0x00085bc8) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0008e0fb) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0008e0fb) main_camera4_pane_g

0x73d3,	// (0x00085bec) main_camera4_pane_t1_ParamLimits

0x73d3,	// (0x00085bec) main_camera4_pane_t1

0xd1c8,	// (0x0008b9e1) bg_tb_trans_pane_cp06

0xdc56,	// (0x0008c46f) cam4_indicators_pane_g1

0xdc67,	// (0x0008c480) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0008e116) cam4_indicators_pane_g

0xdc85,	// (0x0008c49e) cam4_indicators_pane_t1

0x7437,	// (0x00085c50) main_video4_pane_g1_ParamLimits

0x7437,	// (0x00085c50) main_video4_pane_g1

0x7446,	// (0x00085c5f) main_video4_pane_g2_ParamLimits

0x7446,	// (0x00085c5f) main_video4_pane_g2

0x7455,	// (0x00085c6e) main_video4_pane_g3_ParamLimits

0x7455,	// (0x00085c6e) main_video4_pane_g3

0x7464,	// (0x00085c7d) main_video4_pane_g4_ParamLimits

0x7464,	// (0x00085c7d) main_video4_pane_g4

0x0004,

0xf904,	// (0x0008e11d) main_video4_pane_g_ParamLimits

0xf904,	// (0x0008e11d) main_video4_pane_g

0x7482,	// (0x00085c9b) vid4_indicators_pane_ParamLimits

0x7482,	// (0x00085c9b) vid4_indicators_pane

0x74b0,	// (0x00085cc9) video4_image_uncrop_cif_pane_ParamLimits

0x74b0,	// (0x00085cc9) video4_image_uncrop_cif_pane

0x74ca,	// (0x00085ce3) video4_image_uncrop_nhd_pane_ParamLimits

0x74ca,	// (0x00085ce3) video4_image_uncrop_nhd_pane

0x731f,	// (0x00085b38) video4_image_uncrop_vga_pane_ParamLimits

0x731f,	// (0x00085b38) video4_image_uncrop_vga_pane

0xb1f7,	// (0x00089a10) bg_tb_trans_pane_cp07

0xdcb1,	// (0x0008c4ca) vid4_indicators_pane_g1

0xdcc5,	// (0x0008c4de) vid4_indicators_pane_g2

0xdcd9,	// (0x0008c4f2) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0008e128) vid4_indicators_pane_g

0xdd08,	// (0x0008c521) vid4_indicators_pane_t1

0x74de,	// (0x00085cf7) cam4_autofocus_pane_g1

0x74e6,	// (0x00085cff) cam4_autofocus_pane_g2

0x74ee,	// (0x00085d07) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0008e133) cam4_autofocus_pane_g

0x74f6,	// (0x00085d0f) cam4_autofocus_pane_g3_copy1

0x6dda,	// (0x000855f3) video_down_pane_cp_t1

0x6de8,	// (0x00085601) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0008e0af) video_down_pane_cp_t

0xb1f7,	// (0x00089a10) popup_vitu2_window_ParamLimits

0xb1f7,	// (0x00089a10) popup_vitu2_window

0x74fe,	// (0x00085d17) aid_size_cell2_itu2_ParamLimits

0x74fe,	// (0x00085d17) aid_size_cell2_itu2

0x7524,	// (0x00085d3d) aid_size_cell_itu2_ParamLimits

0x7524,	// (0x00085d3d) aid_size_cell_itu2

0x7580,	// (0x00085d99) bg_popup_window_pane_cp09_ParamLimits

0x7580,	// (0x00085d99) bg_popup_window_pane_cp09

0x758e,	// (0x00085da7) field_vitu2_entry_pane_ParamLimits

0x758e,	// (0x00085da7) field_vitu2_entry_pane

0x75b4,	// (0x00085dcd) grid_vitu2_function_pane_ParamLimits

0x75b4,	// (0x00085dcd) grid_vitu2_function_pane

0x7605,	// (0x00085e1e) grid_vitu2_itu_pane_ParamLimits

0x7605,	// (0x00085e1e) grid_vitu2_itu_pane

0x7698,	// (0x00085eb1) cell_vitu2_itu_pane_ParamLimits

0x7698,	// (0x00085eb1) cell_vitu2_itu_pane

0x76bc,	// (0x00085ed5) cell_vitu2_function_pane_ParamLimits

0x76bc,	// (0x00085ed5) cell_vitu2_function_pane

0xe114,	// (0x0008c92d) bg_popup_call_pane_cp08_ParamLimits

0xe114,	// (0x0008c92d) bg_popup_call_pane_cp08

0xe12d,	// (0x0008c946) field_vitu2_entry_pane_g1

0xe139,	// (0x0008c952) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0008e13a) field_vitu2_entry_pane_g

0xdd1f,	// (0x0008c538) field_vitu2_entry_pane_t1_ParamLimits

0xdd1f,	// (0x0008c538) field_vitu2_entry_pane_t1

0xdd4e,	// (0x0008c567) field_vitu2_entry_pane_t2_ParamLimits

0xdd4e,	// (0x0008c567) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0008e141) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0008e141) field_vitu2_entry_pane_t

0x76fb,	// (0x00085f14) bg_button_pane_cp010_ParamLimits

0x76fb,	// (0x00085f14) bg_button_pane_cp010

0x7709,	// (0x00085f22) cell_vitu2_itu_pane_g1

0x7727,	// (0x00085f40) cell_vitu2_itu_pane_t1_ParamLimits

0x7727,	// (0x00085f40) cell_vitu2_itu_pane_t1

0x0632,	// (0x0007ee4b) cell_vitu2_itu_pane_t2_ParamLimits

0x0632,	// (0x0007ee4b) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0008e14b) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0008e14b) cell_vitu2_itu_pane_t

0xb1f7,	// (0x00089a10) bg_button_pane_cp011

0x778d,	// (0x00085fa6) cell_vitu2_function_pane_g1

0xec57,	// (0x0008d470) main_myfav_hc_pane

0x7187,	// (0x000859a0) popup_image3_note_pane_ParamLimits

0x7187,	// (0x000859a0) popup_image3_note_pane

0x71a3,	// (0x000859bc) popup_image3_tool_bar_pane_ParamLimits

0x71a3,	// (0x000859bc) popup_image3_tool_bar_pane

0x06b6,	// (0x0007eecf) cell_vitu2_itu_pane_t3_ParamLimits

0x06b6,	// (0x0007eecf) cell_vitu2_itu_pane_t3

0xec57,	// (0x0008d470) bg_popup_trans_pane

0xe15b,	// (0x0008c974) grid_image3_tool_bar_pane

0xe165,	// (0x0008c97e) bg_popup_trans_pane_g1

0x2dc7,	// (0x000815e0) bg_popup_trans_pane_g2

0xe16d,	// (0x0008c986) bg_popup_trans_pane_g3

0xe175,	// (0x0008c98e) bg_popup_trans_pane_g4

0xe17d,	// (0x0008c996) bg_popup_trans_pane_g5

0xe185,	// (0x0008c99e) bg_popup_trans_pane_g6

0xe18d,	// (0x0008c9a6) bg_popup_trans_pane_g7

0xe195,	// (0x0008c9ae) bg_popup_trans_pane_g8

0x2da7,	// (0x000815c0) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0008e152) bg_popup_trans_pane_g

0xe19d,	// (0x0008c9b6) cell_image3_tool_bar_pane_ParamLimits

0xe19d,	// (0x0008c9b6) cell_image3_tool_bar_pane

0xcf5c,	// (0x0008b775) cell_image3_tool_bar_pane_g1

0xec57,	// (0x0008d470) bg_popup_trans_pane_cp1

0xe1b1,	// (0x0008c9ca) popup_image3_note_pane_t1

0xe1bf,	// (0x0008c9d8) popup_image3_note_pane_t2

0xe1cd,	// (0x0008c9e6) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0008e165) popup_image3_note_pane_t

0xe1db,	// (0x0008c9f4) popup_image3_note_pane_t3_copy1

0x77a1,	// (0x00085fba) bg_myfav_hc_instruction_pane_ParamLimits

0x77a1,	// (0x00085fba) bg_myfav_hc_instruction_pane

0x77b5,	// (0x00085fce) cell_myfav_contact_pane_ParamLimits

0x77b5,	// (0x00085fce) cell_myfav_contact_pane

0x77d3,	// (0x00085fec) cell_myfav_contact_pane_cp1_ParamLimits

0x77d3,	// (0x00085fec) cell_myfav_contact_pane_cp1

0x77eb,	// (0x00086004) cell_myfav_contact_pane_cp2_ParamLimits

0x77eb,	// (0x00086004) cell_myfav_contact_pane_cp2

0x7803,	// (0x0008601c) cell_myfav_contact_pane_cp3_ParamLimits

0x7803,	// (0x0008601c) cell_myfav_contact_pane_cp3

0x781a,	// (0x00086033) cell_myfav_contact_pane_cp4_ParamLimits

0x781a,	// (0x00086033) cell_myfav_contact_pane_cp4

0x7832,	// (0x0008604b) cell_myfav_contact_pane_cp5_ParamLimits

0x7832,	// (0x0008604b) cell_myfav_contact_pane_cp5

0x7846,	// (0x0008605f) cell_myfav_contact_pane_cp6_ParamLimits

0x7846,	// (0x0008605f) cell_myfav_contact_pane_cp6

0x785c,	// (0x00086075) cell_myfav_contact_pane_cp7_ParamLimits

0x785c,	// (0x00086075) cell_myfav_contact_pane_cp7

0xe1e9,	// (0x0008ca02) listscroll_gen_pane_cp05

0x7876,	// (0x0008608f) main_myfav_hc_pane_g1_ParamLimits

0x7876,	// (0x0008608f) main_myfav_hc_pane_g1

0x7890,	// (0x000860a9) main_myfav_hc_pane_g2_ParamLimits

0x7890,	// (0x000860a9) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0008e16c) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0008e16c) main_myfav_hc_pane_g

0x78c2,	// (0x000860db) main_myfav_hc_pane_t1_ParamLimits

0x78c2,	// (0x000860db) main_myfav_hc_pane_t1

0xe1f2,	// (0x0008ca0b) main_myfav_hc_pane_t2_ParamLimits

0xe1f2,	// (0x0008ca0b) main_myfav_hc_pane_t2

0xe204,	// (0x0008ca1d) main_myfav_hc_pane_t3_ParamLimits

0xe204,	// (0x0008ca1d) main_myfav_hc_pane_t3

0x78d9,	// (0x000860f2) main_myfav_hc_pane_t4_ParamLimits

0x78d9,	// (0x000860f2) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0008e173) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0008e173) main_myfav_hc_pane_t

0xcf5c,	// (0x0008b775) bg_myfav_hc_instruction_pane_g1

0xe216,	// (0x0008ca2f) cell_myfav_contact_pane_g1_ParamLimits

0xe216,	// (0x0008ca2f) cell_myfav_contact_pane_g1

0xe216,	// (0x0008ca2f) cell_myfav_contact_pane_g2_ParamLimits

0xe216,	// (0x0008ca2f) cell_myfav_contact_pane_g2

0xe222,	// (0x0008ca3b) cell_myfav_contact_pane_g3_ParamLimits

0xe222,	// (0x0008ca3b) cell_myfav_contact_pane_g3

0xd285,	// (0x0008ba9e) cell_myfav_contact_pane_g4_ParamLimits

0xd285,	// (0x0008ba9e) cell_myfav_contact_pane_g4

0xe22f,	// (0x0008ca48) cell_myfav_contact_pane_g5_ParamLimits

0xe22f,	// (0x0008ca48) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0008e17e) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0008e17e) cell_myfav_contact_pane_g

0x78aa,	// (0x000860c3) main_myfav_hc_pane_g3_ParamLimits

0x78aa,	// (0x000860c3) main_myfav_hc_pane_g3

0x12a3,	// (0x0007fabc) popup_adpt_find_window

0x7901,	// (0x0008611a) afind_page_pane_ParamLimits

0x7901,	// (0x0008611a) afind_page_pane

0x7916,	// (0x0008612f) aid_size_cell_afind_ParamLimits

0x7916,	// (0x0008612f) aid_size_cell_afind

0x7934,	// (0x0008614d) bg_popup_sub_pane_cp09_ParamLimits

0x7934,	// (0x0008614d) bg_popup_sub_pane_cp09

0x7941,	// (0x0008615a) find_pane_cp01_ParamLimits

0x7941,	// (0x0008615a) find_pane_cp01

0xe23b,	// (0x0008ca54) grid_afind_control_pane_ParamLimits

0xe23b,	// (0x0008ca54) grid_afind_control_pane

0x794e,	// (0x00086167) grid_afind_pane_ParamLimits

0x794e,	// (0x00086167) grid_afind_pane

0x7970,	// (0x00086189) cell_afind_pane_ParamLimits

0x7970,	// (0x00086189) cell_afind_pane

0xcf5c,	// (0x0008b775) afind_page_pane_g1

0x79d1,	// (0x000861ea) afind_page_pane_g2

0x79da,	// (0x000861f3) afind_page_pane_g3

0x0002,

0xf970,	// (0x0008e189) afind_page_pane_g

0x79e3,	// (0x000861fc) afind_page_pane_t1

0xe24f,	// (0x0008ca68) cell_afind_grid_control_pane_ParamLimits

0xe24f,	// (0x0008ca68) cell_afind_grid_control_pane

0xdaf9,	// (0x0008c312) bg_button_pane_cp69_ParamLimits

0xdaf9,	// (0x0008c312) bg_button_pane_cp69

0x7a03,	// (0x0008621c) cell_afind_pane_g1_ParamLimits

0x7a03,	// (0x0008621c) cell_afind_pane_g1

0x7a10,	// (0x00086229) cell_afind_pane_t1_ParamLimits

0x7a10,	// (0x00086229) cell_afind_pane_t1

0x274b,	// (0x00080f64) bg_button_pane_cp72

0xe25e,	// (0x0008ca77) cell_afind_grid_control_pane_g1

0x4ac1,	// (0x000832da) aid_image_placing_area_ParamLimits

0x4ac1,	// (0x000832da) aid_image_placing_area

0xd58e,	// (0x0008bda7) field_vitu_entry_pane_g1_ParamLimits

0xd58e,	// (0x0008bda7) field_vitu_entry_pane_g1

0xd59a,	// (0x0008bdb3) field_vitu_entry_pane_g2_ParamLimits

0xd59a,	// (0x0008bdb3) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0008e03a) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0008e03a) field_vitu_entry_pane_g

0x6bef,	// (0x00085408) cell_vitu_itu_pane_g1_ParamLimits

0x6c31,	// (0x0008544a) cell_vitu_itu_pane_t3_ParamLimits

0x6c31,	// (0x0008544a) cell_vitu_itu_pane_t3

0xdaa9,	// (0x0008c2c2) mp4_progress_pane_t1_ParamLimits

0xdac2,	// (0x0008c2db) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0008e0cf) mp4_progress_pane_t_ParamLimits

0xdadb,	// (0x0008c2f4) mup_progress_pane_cp04_ParamLimits

0x78ed,	// (0x00086106) main_myfav_hc_pane_t5_ParamLimits

0x78ed,	// (0x00086106) main_myfav_hc_pane_t5

0xb1a5,	// (0x000899be) aid_zoom_text_primary

0x12a3,	// (0x0007fabc) popup_adpt_find_window_ParamLimits

0xb1f7,	// (0x00089a10) main_cam_set_pane

0x7350,	// (0x00085b69) cam4_zoom_pane_ParamLimits

0x7350,	// (0x00085b69) cam4_zoom_pane

0x7a22,	// (0x0008623b) main_cam_set_pane_g1_ParamLimits

0x7a22,	// (0x0008623b) main_cam_set_pane_g1

0x7a30,	// (0x00086249) main_cam_set_pane_g2_ParamLimits

0x7a30,	// (0x00086249) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0008e190) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0008e190) main_cam_set_pane_g

0x7a51,	// (0x0008626a) main_cam_set_pane_t1_ParamLimits

0x7a51,	// (0x0008626a) main_cam_set_pane_t1

0x7a6c,	// (0x00086285) main_cset_listscroll_pane_ParamLimits

0x7a6c,	// (0x00086285) main_cset_listscroll_pane

0x7a8c,	// (0x000862a5) main_cset_slider_pane_ParamLimits

0x7a8c,	// (0x000862a5) main_cset_slider_pane

0xe26f,	// (0x0008ca88) main_cset_list_pane_ParamLimits

0xe26f,	// (0x0008ca88) main_cset_list_pane

0xe27f,	// (0x0008ca98) scroll_pane_cp028

0x7ab2,	// (0x000862cb) aid_area_touch_slider

0x7ace,	// (0x000862e7) cset_slider_pane

0x7af8,	// (0x00086311) main_cset_slider_pane_g1

0x7b0d,	// (0x00086326) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0008e195) main_cset_slider_pane_g

0xe2b8,	// (0x0008cad1) main_cset_slider_pane_t1

0x7bc9,	// (0x000863e2) main_cset_slider_pane_t2

0x7be3,	// (0x000863fc) main_cset_slider_pane_t3

0x7bfd,	// (0x00086416) main_cset_slider_pane_t4

0x7c17,	// (0x00086430) main_cset_slider_pane_t5

0x7c31,	// (0x0008644a) main_cset_slider_pane_t6

0x7c46,	// (0x0008645f) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0008e1ba) main_cset_slider_pane_t

0x7d4a,	// (0x00086563) cset_list_set_pane_ParamLimits

0x7d4a,	// (0x00086563) cset_list_set_pane

0x7d5c,	// (0x00086575) aid_position_infowindow_above

0x7d64,	// (0x0008657d) aid_position_infowindow_below

0xe358,	// (0x0008cb71) cset_list_set_pane_g1_ParamLimits

0xe358,	// (0x0008cb71) cset_list_set_pane_g1

0xdd6b,	// (0x0008c584) cset_list_set_pane_g3_ParamLimits

0xdd6b,	// (0x0008c584) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0008e1d9) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0008e1d9) cset_list_set_pane_g

0xdd7a,	// (0x0008c593) cset_list_set_pane_t1_ParamLimits

0xdd7a,	// (0x0008c593) cset_list_set_pane_t1

0xb1f7,	// (0x00089a10) list_highlight_pane_cp021_ParamLimits

0xb1f7,	// (0x00089a10) list_highlight_pane_cp021

0xb746,	// (0x00089f5f) cset_slider_pane_g1

0xb758,	// (0x00089f71) cset_slider_pane_g2

0xb74f,	// (0x00089f68) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0008e1de) cset_slider_pane_g

0xe364,	// (0x0008cb7d) aid_area_touch_cam4_zoom

0xe36c,	// (0x0008cb85) cam4_zoom_cont_pane

0xe374,	// (0x0008cb8d) cam4_zoom_pane_g1

0xe37c,	// (0x0008cb95) cam4_zoom_pane_g2

0x7d6c,	// (0x00086585) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0008e1e5) cam4_zoom_pane_g

0xe384,	// (0x0008cb9d) cam4_zoom_cont_pane_g1

0xe38d,	// (0x0008cba6) cam4_zoom_cont_pane_g2

0xe396,	// (0x0008cbaf) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0008e1ec) cam4_zoom_cont_pane_g

0x7210,	// (0x00085a29) call4_image_pane_ParamLimits

0x7210,	// (0x00085a29) call4_image_pane

0xdb37,	// (0x0008c350) call4_windows_conf_pane_ParamLimits

0xdb78,	// (0x0008c391) popup_call4_audio_in_window_ParamLimits

0xdb78,	// (0x0008c391) popup_call4_audio_in_window

0xec57,	// (0x0008d470) bg_popup_call2_act_pane_cp02

0xdbee,	// (0x0008c407) call4_list_conf_pane

0xcf5c,	// (0x0008b775) call4_image_pane_g1

0xcf5c,	// (0x0008b775) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0008df00) call4_image_pane_g

0xe39f,	// (0x0008cbb8) list_single_graphic_popup_conf4_pane_ParamLimits

0xe39f,	// (0x0008cbb8) list_single_graphic_popup_conf4_pane

0xec57,	// (0x0008d470) list_highlight_pane_cp022

0xe3b2,	// (0x0008cbcb) list_single_graphic_popup_conf4_pane_g1

0xb3f5,	// (0x00089c0e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0008e1f3) list_single_graphic_popup_conf4_pane_g

0xe3ba,	// (0x0008cbd3) list_single_graphic_popup_conf4_pane_t1

0x292e,	// (0x00081147) popup_vtel_slider_window_ParamLimits

0x292e,	// (0x00081147) popup_vtel_slider_window

0xdae7,	// (0x0008c300) dialer2_ne_pane_t2_ParamLimits

0xdae7,	// (0x0008c300) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0008e0d4) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0008e0d4) dialer2_ne_pane_t

0xcd41,	// (0x0008b55a) bg_popup_sub_pane_cp010_ParamLimits

0xcd41,	// (0x0008b55a) bg_popup_sub_pane_cp010

0x7d74,	// (0x0008658d) popup_vtel_slider_window_g1_ParamLimits

0x7d74,	// (0x0008658d) popup_vtel_slider_window_g1

0x7d87,	// (0x000865a0) popup_vtel_slider_window_g2_ParamLimits

0x7d87,	// (0x000865a0) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0008e1f8) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0008e1f8) popup_vtel_slider_window_g

0x7ddd,	// (0x000865f6) vtel_slider_pane_ParamLimits

0x7ddd,	// (0x000865f6) vtel_slider_pane

0x7dff,	// (0x00086618) vtel_slider_pane_g1_ParamLimits

0x7dff,	// (0x00086618) vtel_slider_pane_g1

0x7e13,	// (0x0008662c) vtel_slider_pane_g2_ParamLimits

0x7e13,	// (0x0008662c) vtel_slider_pane_g2

0x7e2b,	// (0x00086644) vtel_slider_pane_g3_ParamLimits

0x7e2b,	// (0x00086644) vtel_slider_pane_g3

0x7dff,	// (0x00086618) vtel_slider_pane_g4_ParamLimits

0x7dff,	// (0x00086618) vtel_slider_pane_g4

0x7e41,	// (0x0008665a) vtel_slider_pane_g5_ParamLimits

0x7e41,	// (0x0008665a) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0008e201) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0008e201) vtel_slider_pane_g

0xec57,	// (0x0008d470) main_gallery2_pane

0x7550,	// (0x00085d69) aid_size_row_itut2_dropdow_list_ParamLimits

0x7550,	// (0x00085d69) aid_size_row_itut2_dropdow_list

0x75dc,	// (0x00085df5) grid_vitu2_function_top_pane_ParamLimits

0x75dc,	// (0x00085df5) grid_vitu2_function_top_pane

0x7641,	// (0x00085e5a) popup_vitu2_dropdown_list_window_ParamLimits

0x7641,	// (0x00085e5a) popup_vitu2_dropdown_list_window

0x766a,	// (0x00085e83) popup_vitu2_match_list_window

0x7e57,	// (0x00086670) cell_vitu2_function_top_pane_ParamLimits

0x7e57,	// (0x00086670) cell_vitu2_function_top_pane

0x7e75,	// (0x0008668e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e75,	// (0x0008668e) cell_vitu2_function_top_pane_cp01

0x7e93,	// (0x000866ac) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e93,	// (0x000866ac) cell_vitu2_function_top_wide_pane

0xb1f7,	// (0x00089a10) bg_button_pane_cp012

0x7eb1,	// (0x000866ca) cell_vitu2_function_top_pane_g1

0xe3d0,	// (0x0008cbe9) bg_button_pane_cp013_ParamLimits

0xe3d0,	// (0x0008cbe9) bg_button_pane_cp013

0x7ec5,	// (0x000866de) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ec5,	// (0x000866de) cell_vitu2_function_top_wide_pane_g1

0xb1f7,	// (0x00089a10) bg_popup_sub_pane_cp20

0x7edd,	// (0x000866f6) list_vitu2_match_list_pane

0xe165,	// (0x0008c97e) bg_popup_sub_pane_cp20_g1

0xe16d,	// (0x0008c986) bg_popup_sub_pane_cp20_g2

0x2dc7,	// (0x000815e0) bg_popup_sub_pane_cp20_g3

0xe175,	// (0x0008c98e) bg_popup_sub_pane_cp20_g4

0x2da7,	// (0x000815c0) bg_popup_sub_pane_cp20_g5

0xe3ec,	// (0x0008cc05) bg_popup_sub_pane_cp20_g6

0xe185,	// (0x0008c99e) bg_popup_sub_pane_cp20_g7

0xe18d,	// (0x0008c9a6) bg_popup_sub_pane_cp20_g8

0xe195,	// (0x0008c9ae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0008e20c) bg_popup_sub_pane_cp20_g

0xe3f4,	// (0x0008cc0d) list_vitu2_match_list_item_pane_ParamLimits

0xe3f4,	// (0x0008cc0d) list_vitu2_match_list_item_pane

0xe406,	// (0x0008cc1f) list_vitu2_match_list_item_pane_t1

0xec57,	// (0x0008d470) bg_popup_sub_pane_cp21

0x3eb5,	// (0x000826ce) grid_vitu2_dropdown_list_pane

0x7efb,	// (0x00086714) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7efb,	// (0x00086714) cell_vitu2_dropdown_list_char_pane

0x7f1c,	// (0x00086735) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f1c,	// (0x00086735) cell_vitu2_dropdown_list_ctrl_pane

0xe414,	// (0x0008cc2d) cell_vitu2_dropdown_list_char_pane_g1

0xe41d,	// (0x0008cc36) cell_vitu2_dropdown_list_char_pane_g2

0xe426,	// (0x0008cc3f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0008e229) cell_vitu2_dropdown_list_char_pane_g

0x7f48,	// (0x00086761) cell_vitu2_dropdown_list_char_pane_t1

0x7f56,	// (0x0008676f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f56,	// (0x0008676f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f63,	// (0x0008677c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f63,	// (0x0008677c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f70,	// (0x00086789) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f70,	// (0x00086789) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f7d,	// (0x00086796) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f7d,	// (0x00086796) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd1c8,	// (0x0008b9e1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd1c8,	// (0x0008b9e1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0008e230) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0008e230) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f99,	// (0x000867b2) aid_size_cell_gallery2_ParamLimits

0x7f99,	// (0x000867b2) aid_size_cell_gallery2

0x7faf,	// (0x000867c8) grid_gallery2_pane_ParamLimits

0x7faf,	// (0x000867c8) grid_gallery2_pane

0x7fc3,	// (0x000867dc) scroll_pane_cp029_ParamLimits

0x7fc3,	// (0x000867dc) scroll_pane_cp029

0x7fcf,	// (0x000867e8) cell_gallery2_pane_ParamLimits

0x7fcf,	// (0x000867e8) cell_gallery2_pane

0xe42f,	// (0x0008cc48) cell_gallery2_pane_g2

0x8005,	// (0x0008681e) cell_gallery2_pane_g3

0xe439,	// (0x0008cc52) cell_gallery2_pane_g4

0xe441,	// (0x0008cc5a) cell_gallery2_pane_g5

0xb5f0,	// (0x00089e09) grid_highlight_pane_cp10

0x766a,	// (0x00085e83) popup_vitu2_match_list_window_ParamLimits

0x7681,	// (0x00085e9a) popup_vitu2_query_window_ParamLimits

0x7681,	// (0x00085e9a) popup_vitu2_query_window

0xec57,	// (0x0008d470) bg_vitu2_candi_button_pane

0xe414,	// (0x0008cc2d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe41d,	// (0x0008cc36) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe426,	// (0x0008cc3f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0769,	// (0x0007ef82) bg_button_pane_cp015

0x800d,	// (0x00086826) bg_button_pane_cp016

0x8020,	// (0x00086839) bg_button_pane_cp017

0xca41,	// (0x0008b25a) bg_popup_sub_pane_cp22

0xe449,	// (0x0008cc62) popup_vitu2_query_window_g1

0x079c,	// (0x0007efb5) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0008e23b) popup_vitu2_query_window_g

0x07bb,	// (0x0007efd4) popup_vitu2_query_window_t1_ParamLimits

0x07bb,	// (0x0007efd4) popup_vitu2_query_window_t1

0x07f0,	// (0x0007f009) popup_vitu2_query_window_t2_ParamLimits

0x07f0,	// (0x0007f009) popup_vitu2_query_window_t2

0x0802,	// (0x0007f01b) popup_vitu2_query_window_t3_ParamLimits

0x0802,	// (0x0007f01b) popup_vitu2_query_window_t3

0x8044,	// (0x0008685d) popup_vitu2_query_window_t4_ParamLimits

0x8044,	// (0x0008685d) popup_vitu2_query_window_t4

0x8065,	// (0x0008687e) popup_vitu2_query_window_t5_ParamLimits

0x8065,	// (0x0008687e) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0008e242) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0008e242) popup_vitu2_query_window_t

0xe267,	// (0x0008ca80) main_cset_text_pane

0x7ab2,	// (0x000862cb) aid_area_touch_slider_ParamLimits

0x7ace,	// (0x000862e7) cset_slider_pane_ParamLimits

0x7af8,	// (0x00086311) main_cset_slider_pane_g1_ParamLimits

0x7b0d,	// (0x00086326) main_cset_slider_pane_g2_ParamLimits

0xe288,	// (0x0008caa1) main_cset_slider_pane_g3_ParamLimits

0xe288,	// (0x0008caa1) main_cset_slider_pane_g3

0x7b22,	// (0x0008633b) main_cset_slider_pane_g4_ParamLimits

0x7b22,	// (0x0008633b) main_cset_slider_pane_g4

0x7b31,	// (0x0008634a) main_cset_slider_pane_g5_ParamLimits

0x7b31,	// (0x0008634a) main_cset_slider_pane_g5

0x7b3d,	// (0x00086356) main_cset_slider_pane_g6_ParamLimits

0x7b3d,	// (0x00086356) main_cset_slider_pane_g6

0xf97c,	// (0x0008e195) main_cset_slider_pane_g_ParamLimits

0xe2b8,	// (0x0008cad1) main_cset_slider_pane_t1_ParamLimits

0x7bc9,	// (0x000863e2) main_cset_slider_pane_t2_ParamLimits

0x7be3,	// (0x000863fc) main_cset_slider_pane_t3_ParamLimits

0x7bfd,	// (0x00086416) main_cset_slider_pane_t4_ParamLimits

0x7c17,	// (0x00086430) main_cset_slider_pane_t5_ParamLimits

0x7c31,	// (0x0008644a) main_cset_slider_pane_t6_ParamLimits

0x7c46,	// (0x0008645f) main_cset_slider_pane_t7_ParamLimits

0x7c70,	// (0x00086489) main_cset_slider_pane_t8_ParamLimits

0x7c70,	// (0x00086489) main_cset_slider_pane_t8

0x7c98,	// (0x000864b1) main_cset_slider_pane_t9_ParamLimits

0x7c98,	// (0x000864b1) main_cset_slider_pane_t9

0x7cc0,	// (0x000864d9) main_cset_slider_pane_t10_ParamLimits

0x7cc0,	// (0x000864d9) main_cset_slider_pane_t10

0x7ce8,	// (0x00086501) main_cset_slider_pane_t11_ParamLimits

0x7ce8,	// (0x00086501) main_cset_slider_pane_t11

0x7d10,	// (0x00086529) main_cset_slider_pane_t12_ParamLimits

0x7d10,	// (0x00086529) main_cset_slider_pane_t12

0x7d2d,	// (0x00086546) main_cset_slider_pane_t13_ParamLimits

0x7d2d,	// (0x00086546) main_cset_slider_pane_t13

0xf9a1,	// (0x0008e1ba) main_cset_slider_pane_t_ParamLimits

0xec57,	// (0x0008d470) bg_popup_sub_pane_cp011

0xe455,	// (0x0008cc6e) main_cset_text_pane_g1

0xe45d,	// (0x0008cc76) main_cset_text_pane_t1

0xe46b,	// (0x0008cc84) main_cset_text_pane_t2

0xe479,	// (0x0008cc92) main_cset_text_pane_t3

0xe487,	// (0x0008cca0) main_cset_text_pane_t4

0xe495,	// (0x0008ccae) main_cset_text_pane_t5

0xe4a3,	// (0x0008ccbc) main_cset_text_pane_t6

0xe4b1,	// (0x0008ccca) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0008e251) main_cset_text_pane_t

0xec57,	// (0x0008d470) main_cam4_burst_pane

0xec57,	// (0x0008d470) main_cam5_pane

0x79f1,	// (0x0008620a) bg_button_pane_cp019

0x79fa,	// (0x00086213) bg_button_pane_cp020

0xe294,	// (0x0008caad) main_cset_slider_pane_g7_ParamLimits

0xe294,	// (0x0008caad) main_cset_slider_pane_g7

0xe2a0,	// (0x0008cab9) main_cset_slider_pane_g8_ParamLimits

0xe2a0,	// (0x0008cab9) main_cset_slider_pane_g8

0x7b51,	// (0x0008636a) main_cset_slider_pane_g9_ParamLimits

0x7b51,	// (0x0008636a) main_cset_slider_pane_g9

0x7b5d,	// (0x00086376) main_cset_slider_pane_g10_ParamLimits

0x7b5d,	// (0x00086376) main_cset_slider_pane_g10

0x7b69,	// (0x00086382) main_cset_slider_pane_g11_ParamLimits

0x7b69,	// (0x00086382) main_cset_slider_pane_g11

0x7b75,	// (0x0008638e) main_cset_slider_pane_g12_ParamLimits

0x7b75,	// (0x0008638e) main_cset_slider_pane_g12

0x7b81,	// (0x0008639a) main_cset_slider_pane_g13_ParamLimits

0x7b81,	// (0x0008639a) main_cset_slider_pane_g13

0x7b8d,	// (0x000863a6) main_cset_slider_pane_g14_ParamLimits

0x7b8d,	// (0x000863a6) main_cset_slider_pane_g14

0x7b99,	// (0x000863b2) main_cset_slider_pane_g15_ParamLimits

0x7b99,	// (0x000863b2) main_cset_slider_pane_g15

0xe2e6,	// (0x0008caff) main_cset_slider_pane_t14_ParamLimits

0xe2e6,	// (0x0008caff) main_cset_slider_pane_t14

0xe31f,	// (0x0008cb38) main_cset_slider_pane_t15_ParamLimits

0xe31f,	// (0x0008cb38) main_cset_slider_pane_t15

0x8086,	// (0x0008689f) aid_cam4_burst_size_cell_ParamLimits

0x8086,	// (0x0008689f) aid_cam4_burst_size_cell

0x80a6,	// (0x000868bf) grid_cam4_burst_pane_ParamLimits

0x80a6,	// (0x000868bf) grid_cam4_burst_pane

0x80de,	// (0x000868f7) linegrid_cam4_burst_pane_ParamLimits

0x80de,	// (0x000868f7) linegrid_cam4_burst_pane

0xf063,	// (0x0008d87c) scroll_pane_cp30_ParamLimits

0xf063,	// (0x0008d87c) scroll_pane_cp30

0x8102,	// (0x0008691b) cell_cam4_burst_pane_ParamLimits

0x8102,	// (0x0008691b) cell_cam4_burst_pane

0xe4bf,	// (0x0008ccd8) linegrid_cam4_burst_pane_g1_ParamLimits

0xe4bf,	// (0x0008ccd8) linegrid_cam4_burst_pane_g1

0x814f,	// (0x00086968) linegrid_cam4_burst_pane_g2_ParamLimits

0x814f,	// (0x00086968) linegrid_cam4_burst_pane_g2

0xe4cc,	// (0x0008cce5) linegrid_cam4_burst_pane_g3_ParamLimits

0xe4cc,	// (0x0008cce5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0008e260) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0008e260) linegrid_cam4_burst_pane_g

0x8160,	// (0x00086979) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8160,	// (0x00086979) linegrid_cam4_burst_pane_g3_copy1

0xe4d9,	// (0x0008ccf2) linegrid_cam4_burst_pane_g4_ParamLimits

0xe4d9,	// (0x0008ccf2) linegrid_cam4_burst_pane_g4

0x817a,	// (0x00086993) linegrid_cam4_burst_pane_g5_ParamLimits

0x817a,	// (0x00086993) linegrid_cam4_burst_pane_g5

0x818b,	// (0x000869a4) linegrid_cam4_burst_pane_g6_ParamLimits

0x818b,	// (0x000869a4) linegrid_cam4_burst_pane_g6

0xe4e6,	// (0x0008ccff) linegrid_cam4_burst_pane_g7_ParamLimits

0xe4e6,	// (0x0008ccff) linegrid_cam4_burst_pane_g7

0x81a2,	// (0x000869bb) cell_cam4_burst_pane_g1

0xe4ff,	// (0x0008cd18) main_cam5_pane_t1_ParamLimits

0xe4ff,	// (0x0008cd18) main_cam5_pane_t1

0xe511,	// (0x0008cd2a) main_cam5_pane_t2_ParamLimits

0xe511,	// (0x0008cd2a) main_cam5_pane_t2

0xe523,	// (0x0008cd3c) main_cam5_pane_t3_ParamLimits

0xe523,	// (0x0008cd3c) main_cam5_pane_t3

0xe535,	// (0x0008cd4e) main_cam5_pane_t4_ParamLimits

0xe535,	// (0x0008cd4e) main_cam5_pane_t4

0xe54d,	// (0x0008cd66) main_cam5_pane_t5_ParamLimits

0xe54d,	// (0x0008cd66) main_cam5_pane_t5

0xe561,	// (0x0008cd7a) main_cam5_pane_t6_ParamLimits

0xe561,	// (0x0008cd7a) main_cam5_pane_t6

0xe575,	// (0x0008cd8e) main_cam5_pane_t7_ParamLimits

0xe575,	// (0x0008cd8e) main_cam5_pane_t7

0xe587,	// (0x0008cda0) main_cam5_pane_t8_ParamLimits

0xe587,	// (0x0008cda0) main_cam5_pane_t8

0xe5a3,	// (0x0008cdbc) main_cam5_pane_t9_ParamLimits

0xe5a3,	// (0x0008cdbc) main_cam5_pane_t9

0xe5b5,	// (0x0008cdce) main_cam5_pane_t10_ParamLimits

0xe5b5,	// (0x0008cdce) main_cam5_pane_t10

0xe5c7,	// (0x0008cde0) main_cam5_pane_t11_ParamLimits

0xe5c7,	// (0x0008cde0) main_cam5_pane_t11

0xe5d9,	// (0x0008cdf2) main_cam5_pane_t12_ParamLimits

0xe5d9,	// (0x0008cdf2) main_cam5_pane_t12

0xe5ee,	// (0x0008ce07) main_cam5_pane_t13_ParamLimits

0xe5ee,	// (0x0008ce07) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0008e26c) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0008e26c) main_cam5_pane_t

0x1325,	// (0x0007fb3e) popup_scut_keymap_window_ParamLimits

0x1325,	// (0x0007fb3e) popup_scut_keymap_window

0x81b5,	// (0x000869ce) aid_size_cell_brow_shortcut

0xb5f0,	// (0x00089e09) bg_popup_window_pane_cp010

0x81c1,	// (0x000869da) grid_scut_pane

0x81cd,	// (0x000869e6) cell_scut_pane_ParamLimits

0x81cd,	// (0x000869e6) cell_scut_pane

0x81e4,	// (0x000869fd) cell_scut_pane_g1

0xe60b,	// (0x0008ce24) cell_scut_pane_t1

0xe61a,	// (0x0008ce33) cell_scut_pane_t2

0x81ed,	// (0x00086a06) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0008e287) cell_scut_pane_t

0x60e3,	// (0x000848fc) main_mup3_pane_g8_ParamLimits

0x60e3,	// (0x000848fc) main_mup3_pane_g8

0x7568,	// (0x00085d81) area_vitu2_query_pane_ParamLimits

0x7568,	// (0x00085d81) area_vitu2_query_pane

0x077b,	// (0x0007ef94) input_focus_pane_cp08

0xe629,	// (0x0008ce42) area_vitu2_query_pane_g1

0x0880,	// (0x0007f099) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0008e28e) area_vitu2_query_pane_g

0x81fb,	// (0x00086a14) area_vitu2_query_pane_t1_ParamLimits

0x81fb,	// (0x00086a14) area_vitu2_query_pane_t1

0x820f,	// (0x00086a28) area_vitu2_query_pane_t2_ParamLimits

0x820f,	// (0x00086a28) area_vitu2_query_pane_t2

0x0891,	// (0x0007f0aa) area_vitu2_query_pane_t3_ParamLimits

0x0891,	// (0x0007f0aa) area_vitu2_query_pane_t3

0xdd8f,	// (0x0008c5a8) area_vitu2_query_pane_t4_ParamLimits

0xdd8f,	// (0x0008c5a8) area_vitu2_query_pane_t4

0xddb7,	// (0x0008c5d0) area_vitu2_query_pane_t5_ParamLimits

0xddb7,	// (0x0008c5d0) area_vitu2_query_pane_t5

0xdddf,	// (0x0008c5f8) area_vitu2_query_pane_t6_ParamLimits

0xdddf,	// (0x0008c5f8) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0008e293) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0008e293) area_vitu2_query_pane_t

0x8223,	// (0x00086a3c) bg_button_pane_cp018

0x8231,	// (0x00086a4a) bg_button_pane_cp021

0x08b9,	// (0x0007f0d2) bg_button_pane_cp022

0x08c8,	// (0x0007f0e1) input_focus_pane_cp09

0x4129,	// (0x00082942) aid_size_touch_mv_arrow_left

0x4152,	// (0x0008296b) aid_size_touch_mv_arrow_right

0x7bb1,	// (0x000863ca) main_cset_slider_pane_g16_ParamLimits

0x7bb1,	// (0x000863ca) main_cset_slider_pane_g16

0x7bbd,	// (0x000863d6) main_cset_slider_pane_g17_ParamLimits

0x7bbd,	// (0x000863d6) main_cset_slider_pane_g17

0x81a2,	// (0x000869bb) cell_cam4_burst_pane_g1_ParamLimits

0xec57,	// (0x0008d470) compa_mode_pane

0x7d97,	// (0x000865b0) popup_vtel_slider_window_g3_ParamLimits

0x7d97,	// (0x000865b0) popup_vtel_slider_window_g3

0x7dae,	// (0x000865c7) popup_vtel_slider_window_g4_ParamLimits

0x7dae,	// (0x000865c7) popup_vtel_slider_window_g4

0x7dc5,	// (0x000865de) popup_vtel_slider_window_t1_ParamLimits

0x7dc5,	// (0x000865de) popup_vtel_slider_window_t1

0xec57,	// (0x0008d470) main_cl_pane

0xca69,	// (0x0008b282) popup_imed_adjust2_window_ParamLimits

0xca41,	// (0x0008b25a) bg_tb_trans_pane_cp05_ParamLimits

0xd4c3,	// (0x0008bcdc) popup_imed_adjust2_window_g1_ParamLimits

0xd4d2,	// (0x0008bceb) popup_imed_adjust2_window_g2_ParamLimits

0xd4d2,	// (0x0008bceb) popup_imed_adjust2_window_g2

0xd4de,	// (0x0008bcf7) popup_imed_adjust2_window_g3_ParamLimits

0xd4de,	// (0x0008bcf7) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0008dffe) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0008dffe) popup_imed_adjust2_window_g

0xd4ea,	// (0x0008bd03) popup_imed_adjust2_window_t1_ParamLimits

0xd502,	// (0x0008bd1b) slider_imed_adjust_pane_ParamLimits

0xd516,	// (0x0008bd2f) slider_imed_adjust_pane_g1_ParamLimits

0xd526,	// (0x0008bd3f) slider_imed_adjust_pane_g2_ParamLimits

0xd536,	// (0x0008bd4f) slider_imed_adjust_pane_g3_ParamLimits

0xd547,	// (0x0008bd60) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0008e005) slider_imed_adjust_pane_g_ParamLimits

0x72f1,	// (0x00085b0a) aid_touch_area_cam4_ParamLimits

0x72f1,	// (0x00085b0a) aid_touch_area_cam4

0xdc32,	// (0x0008c44b) battery_pane_cp01

0x73c0,	// (0x00085bd9) main_camera4_pane_g6_ParamLimits

0x73c0,	// (0x00085bd9) main_camera4_pane_g6

0x73ea,	// (0x00085c03) main_camera4_pane_t2_ParamLimits

0x73ea,	// (0x00085c03) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0008e108) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0008e108) main_camera4_pane_t

0x741f,	// (0x00085c38) aid_touch_area_vid4_ParamLimits

0x741f,	// (0x00085c38) aid_touch_area_vid4

0x7473,	// (0x00085c8c) main_video4_pane_g5_ParamLimits

0x7473,	// (0x00085c8c) main_video4_pane_g5

0x7498,	// (0x00085cb1) vid4_progress_pane_ParamLimits

0x7498,	// (0x00085cb1) vid4_progress_pane

0xe2ac,	// (0x0008cac5) main_cset_slider_pane_g18_ParamLimits

0xe2ac,	// (0x0008cac5) main_cset_slider_pane_g18

0xe4f3,	// (0x0008cd0c) cell_cam4_burst_pane_g2_ParamLimits

0xe4f3,	// (0x0008cd0c) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0008e267) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0008e267) cell_cam4_burst_pane_g

0x1a11,	// (0x0008022a) bg_cl_pane_ParamLimits

0x1a11,	// (0x0008022a) bg_cl_pane

0x823d,	// (0x00086a56) cl_header_pane_ParamLimits

0x823d,	// (0x00086a56) cl_header_pane

0x8251,	// (0x00086a6a) cl_listscroll_pane_ParamLimits

0x8251,	// (0x00086a6a) cl_listscroll_pane

0xe635,	// (0x0008ce4e) bg_cl_pane_g1

0xe63d,	// (0x0008ce56) bg_cl_pane_g2

0xe645,	// (0x0008ce5e) bg_cl_pane_g3

0xe64d,	// (0x0008ce66) bg_cl_pane_g4

0xe655,	// (0x0008ce6e) bg_cl_pane_g5

0xe65d,	// (0x0008ce76) bg_cl_pane_g6

0xe665,	// (0x0008ce7e) bg_cl_pane_g7

0xe66d,	// (0x0008ce86) bg_cl_pane_g8

0xe675,	// (0x0008ce8e) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0008e2a2) bg_cl_pane_g

0x8261,	// (0x00086a7a) aid_height_cl_leading_ParamLimits

0x8261,	// (0x00086a7a) aid_height_cl_leading

0x826d,	// (0x00086a86) aid_height_cl_text_ParamLimits

0x826d,	// (0x00086a86) aid_height_cl_text

0xb1f7,	// (0x00089a10) bg_cl_header_pane_ParamLimits

0xb1f7,	// (0x00089a10) bg_cl_header_pane

0x828c,	// (0x00086aa5) cl_header_pane_g1_ParamLimits

0x828c,	// (0x00086aa5) cl_header_pane_g1

0x82a2,	// (0x00086abb) cl_header_pane_t1_ParamLimits

0x82a2,	// (0x00086abb) cl_header_pane_t1

0xe67d,	// (0x0008ce96) cl_list_pane

0xe27f,	// (0x0008ca98) hc_scroll_pane_cp01

0x2da7,	// (0x000815c0) bg_cl_header_pane_g1

0xe165,	// (0x0008c97e) bg_cl_header_pane_g2

0x2dc7,	// (0x000815e0) bg_cl_header_pane_g3

0xe175,	// (0x0008c98e) bg_cl_header_pane_g4

0xe16d,	// (0x0008c986) bg_cl_header_pane_g5

0xe3ec,	// (0x0008cc05) bg_cl_header_pane_g6

0xe18d,	// (0x0008c9a6) bg_cl_header_pane_g7

0xe195,	// (0x0008c9ae) bg_cl_header_pane_g8

0xe185,	// (0x0008c99e) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0008e2b5) bg_cl_header_pane_g

0x82bb,	// (0x00086ad4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82bb,	// (0x00086ad4) hc_cl_list_double_graphic_heading_pane

0x82cc,	// (0x00086ae5) hc_cl_list_single_graphic_pane_ParamLimits

0x82cc,	// (0x00086ae5) hc_cl_list_single_graphic_pane

0x82e2,	// (0x00086afb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82e2,	// (0x00086afb) hc_cl_list_single_graphic_pane_g1

0x82ee,	// (0x00086b07) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82ee,	// (0x00086b07) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0008e2c8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0008e2c8) hc_cl_list_single_graphic_pane_g

0x8302,	// (0x00086b1b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8302,	// (0x00086b1b) hc_cl_list_single_graphic_pane_t1

0x82e2,	// (0x00086afb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82e2,	// (0x00086afb) hc_cl_list_double_graphic_heading_pane_g1

0x8317,	// (0x00086b30) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8317,	// (0x00086b30) hc_cl_list_double_graphic_heading_pane_g2

0x832b,	// (0x00086b44) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x832b,	// (0x00086b44) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0008e2cd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0008e2cd) hc_cl_list_double_graphic_heading_pane_g

0x833f,	// (0x00086b58) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x833f,	// (0x00086b58) hc_cl_list_double_graphic_heading_pane_t1

0x8354,	// (0x00086b6d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8354,	// (0x00086b6d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0008e2d4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0008e2d4) hc_cl_list_double_graphic_heading_pane_t

0x8369,	// (0x00086b82) vid4_progress_pane_g1

0x837b,	// (0x00086b94) vid4_progress_pane_g2

0xb7c0,	// (0x00089fd9) vid4_progress_pane_g3

0xe68e,	// (0x0008cea7) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0008e2d9) vid4_progress_pane_g

0xe6ac,	// (0x0008cec5) vid4_progress_pane_t1

0xe6c1,	// (0x0008ceda) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0008e2e4) vid4_progress_pane_t

0xe6ec,	// (0x0008cf05) wait_bar_pane_cp07

0xcd4f,	// (0x0008b568) blid_firmament_pane_ParamLimits

0xcd92,	// (0x0008b5ab) popup_blid_sat_info2_window_g1

0xcdb6,	// (0x0008b5cf) popup_blid_sat_info2_window_t3

0xcdc4,	// (0x0008b5dd) popup_blid_sat_info2_window_t4

0xcdd2,	// (0x0008b5eb) popup_blid_sat_info2_window_t5

0xcde0,	// (0x0008b5f9) popup_blid_sat_info2_window_t6

0xcdf0,	// (0x0008b609) popup_blid_sat_info2_window_t7

0xcdfe,	// (0x0008b617) popup_blid_sat_info2_window_t8

0xce0c,	// (0x0008b625) popup_blid_sat_info2_window_t9

0xce1a,	// (0x0008b633) popup_blid_sat_info2_window_t10

0xcedc,	// (0x0008b6f5) aid_firma_cardinal_ParamLimits

0xcef0,	// (0x0008b709) blid_firmament_pane_t1_ParamLimits

0xcf07,	// (0x0008b720) blid_firmament_pane_t2_ParamLimits

0xcf1e,	// (0x0008b737) blid_firmament_pane_t3_ParamLimits

0xcf35,	// (0x0008b74e) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0008def7) blid_firmament_pane_t_ParamLimits

0xcf4c,	// (0x0008b765) blid_sat_info_pane_ParamLimits

0xb1f7,	// (0x00089a10) main_cam_set_pane_ParamLimits

0x69a9,	// (0x000851c2) aid_size_cell_colour_35_ParamLimits

0x69c9,	// (0x000851e2) aid_size_cell_colour_112_ParamLimits

0x69e9,	// (0x00085202) aid_size_cell_effect_ParamLimits

0xca41,	// (0x0008b25a) bg_tb_trans_pane_cp02_ParamLimits

0x3c0d,	// (0x00082426) heading_imed_pane_ParamLimits

0x6a09,	// (0x00085222) listscroll_imed_pane_ParamLimits

0xc067,	// (0x0008a880) popup_call2_audio_first_window_g5_ParamLimits

0xc067,	// (0x0008a880) popup_call2_audio_first_window_g5

0x6f9c,	// (0x000857b5) aid_size_touch_image3_arrow_left_ParamLimits

0x6f9c,	// (0x000857b5) aid_size_touch_image3_arrow_left

0x6fc8,	// (0x000857e1) aid_size_touch_image3_arrow_right_ParamLimits

0x6fc8,	// (0x000857e1) aid_size_touch_image3_arrow_right

0xe6d7,	// (0x0008cef0) vid4_progress_pane_t3

0x6d1c,	// (0x00085535) main_hwr_training_symbol_option_pane_ParamLimits

0x6d1c,	// (0x00085535) main_hwr_training_symbol_option_pane

0xd7b0,	// (0x0008bfc9) popup_hwr_training_preview_window_ParamLimits

0xd7b0,	// (0x0008bfc9) popup_hwr_training_preview_window

0x6d3c,	// (0x00085555) hwr_training_navi_pane_g5_ParamLimits

0x6d3c,	// (0x00085555) hwr_training_navi_pane_g5

0xe153,	// (0x0008c96c) popup_char_count_window

0xb1f7,	// (0x00089a10) bg_popup_sub_pane_cp20_ParamLimits

0x7edd,	// (0x000866f6) list_vitu2_match_list_pane_ParamLimits

0x7eec,	// (0x00086705) vitu2_page_scroll_pane_ParamLimits

0x7eec,	// (0x00086705) vitu2_page_scroll_pane

0xe70f,	// (0x0008cf28) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe70f,	// (0x0008cf28) list_single_hwr_training_symbol_option_pane

0xe722,	// (0x0008cf3b) list_single_hwr_training_symbol_option_pane_g1

0xe72a,	// (0x0008cf43) list_single_hwr_training_symbol_option_pane_t1

0xe738,	// (0x0008cf51) bg_button_pane_cp023

0xe741,	// (0x0008cf5a) bg_button_pane_cp024

0x83a8,	// (0x00086bc1) vitu2_page_scroll_pane_g1

0x83b0,	// (0x00086bc9) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0008e2eb) vitu2_page_scroll_pane_g

0x83b8,	// (0x00086bd1) vitu2_page_scroll_pane_t1

0xe774,	// (0x0008cf8d) popup_char_count_window_g1

0xe77d,	// (0x0008cf96) popup_char_count_window_g2

0xe786,	// (0x0008cf9f) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0008e2f0) popup_char_count_window_g

0xe78f,	// (0x0008cfa8) popup_char_count_window_t1

0xec57,	// (0x0008d470) main_vded2_pane

0xd4af,	// (0x0008bcc8) aid_size_cell_imed_line

0xd4b9,	// (0x0008bcd2) grid_imed_line_width_pane

0xdcea,	// (0x0008c503) vid4_indicators_pane_g4

0xe79d,	// (0x0008cfb6) cell_imed_line_width_pane_ParamLimits

0xe79d,	// (0x0008cfb6) cell_imed_line_width_pane

0xe7b1,	// (0x0008cfca) cell_imed_line_width_pane_g1

0xe7ba,	// (0x0008cfd3) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0008e2f7) cell_imed_line_width_pane_g

0x83c7,	// (0x00086be0) main_vded2_pane_g1_ParamLimits

0x83c7,	// (0x00086be0) main_vded2_pane_g1

0x83dd,	// (0x00086bf6) main_vded2_pane_g2_ParamLimits

0x83dd,	// (0x00086bf6) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0008e2fc) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0008e2fc) main_vded2_pane_g

0x83ef,	// (0x00086c08) vded2_slider_pane_ParamLimits

0x83ef,	// (0x00086c08) vded2_slider_pane

0x83ff,	// (0x00086c18) aid_size_touch_vded2_end

0x8409,	// (0x00086c22) aid_size_touch_vded2_playhead

0xe7c2,	// (0x0008cfdb) aid_size_touch_vded2_start

0xe7ca,	// (0x0008cfe3) vded2_slider_bg_pane

0xe7d3,	// (0x0008cfec) vded2_slider_pane_g1

0xe7dc,	// (0x0008cff5) vded2_slider_pane_g2

0x8413,	// (0x00086c2c) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0008e301) vded2_slider_pane_g

0xe7e4,	// (0x0008cffd) vded2_slider_bg_pane_g1

0xe7ed,	// (0x0008d006) vded2_slider_bg_pane_g2

0xe7f6,	// (0x0008d00f) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0008e308) vded2_slider_bg_pane_g

0x4730,	// (0x00082f49) aid_postcard_touch_down_pane_ParamLimits

0x4730,	// (0x00082f49) aid_postcard_touch_down_pane

0x4746,	// (0x00082f5f) aid_postcard_touch_up_pane_ParamLimits

0x4746,	// (0x00082f5f) aid_postcard_touch_up_pane

0xec57,	// (0x0008d470) main_blid2_pane

0xca4f,	// (0x0008b268) popup_blid2_search_window

0xec57,	// (0x0008d470) blid2_gps_pane

0xec57,	// (0x0008d470) blid2_navig_pane

0xec57,	// (0x0008d470) blid2_search_pane

0xec57,	// (0x0008d470) blid2_tripm_pane

0x841e,	// (0x00086c37) blid2_search_pane_g1_ParamLimits

0x841e,	// (0x00086c37) blid2_search_pane_g1

0x8438,	// (0x00086c51) blid2_search_pane_t1_ParamLimits

0x8438,	// (0x00086c51) blid2_search_pane_t1

0x844a,	// (0x00086c63) aid_size_cell_blid2_gps_ParamLimits

0x844a,	// (0x00086c63) aid_size_cell_blid2_gps

0x8462,	// (0x00086c7b) blid2_gps_pane_g1_ParamLimits

0x8462,	// (0x00086c7b) blid2_gps_pane_g1

0x8476,	// (0x00086c8f) grid_blid2_satellite_pane_ParamLimits

0x8476,	// (0x00086c8f) grid_blid2_satellite_pane

0x8490,	// (0x00086ca9) blid2_navig_pane_g1_ParamLimits

0x8490,	// (0x00086ca9) blid2_navig_pane_g1

0x849c,	// (0x00086cb5) blid2_navig_pane_t1_ParamLimits

0x849c,	// (0x00086cb5) blid2_navig_pane_t1

0x84b7,	// (0x00086cd0) blid2_navig_pane_t2_ParamLimits

0x84b7,	// (0x00086cd0) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0008e30f) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0008e30f) blid2_navig_pane_t

0x84d2,	// (0x00086ceb) blid2_navig_ring_pane_ParamLimits

0x84d2,	// (0x00086ceb) blid2_navig_ring_pane

0x84eb,	// (0x00086d04) blid2_speed_pane_ParamLimits

0x84eb,	// (0x00086d04) blid2_speed_pane

0x84f7,	// (0x00086d10) blid2_tripm_pane_g1_ParamLimits

0x84f7,	// (0x00086d10) blid2_tripm_pane_g1

0x8510,	// (0x00086d29) blid2_tripm_pane_g2_ParamLimits

0x8510,	// (0x00086d29) blid2_tripm_pane_g2

0x8524,	// (0x00086d3d) blid2_tripm_pane_g3_ParamLimits

0x8524,	// (0x00086d3d) blid2_tripm_pane_g3

0x8538,	// (0x00086d51) blid2_tripm_pane_g4_ParamLimits

0x8538,	// (0x00086d51) blid2_tripm_pane_g4

0x854c,	// (0x00086d65) blid2_tripm_pane_g5_ParamLimits

0x854c,	// (0x00086d65) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0008e314) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0008e314) blid2_tripm_pane_g

0x8572,	// (0x00086d8b) blid2_tripm_pane_t1_ParamLimits

0x8572,	// (0x00086d8b) blid2_tripm_pane_t1

0x858d,	// (0x00086da6) blid2_tripm_pane_t2_ParamLimits

0x858d,	// (0x00086da6) blid2_tripm_pane_t2

0x85a6,	// (0x00086dbf) blid2_tripm_pane_t3_ParamLimits

0x85a6,	// (0x00086dbf) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0008e321) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0008e321) blid2_tripm_pane_t

0x85ed,	// (0x00086e06) cell_blid2_satellite_pane_ParamLimits

0x85ed,	// (0x00086e06) cell_blid2_satellite_pane

0x860b,	// (0x00086e24) cell_blid2_satellite_pane_g1

0xe7ff,	// (0x0008d018) cell_blid2_satellite_pane_t1

0xcf5c,	// (0x0008b775) blid2_speed_pane_g1

0xe80d,	// (0x0008d026) blid2_speed_pane_t1

0xe81b,	// (0x0008d034) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0008e32a) blid2_speed_pane_t

0xcf5c,	// (0x0008b775) blid2_navig_ring_pane_g1

0x8614,	// (0x00086e2d) blid2_navig_ring_pane_g2

0x861c,	// (0x00086e35) blid2_navig_ring_pane_g3

0x8624,	// (0x00086e3d) blid2_navig_ring_pane_g4

0x862c,	// (0x00086e45) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0008e32f) blid2_navig_ring_pane_g

0xec57,	// (0x0008d470) bg_popup_window_pane_cp011

0xe829,	// (0x0008d042) popup_blid2_search_window_g1

0xe831,	// (0x0008d04a) popup_blid2_search_window_t1

0xe83f,	// (0x0008d058) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0008e33a) popup_blid2_search_window_t

0x2c73,	// (0x0008148c) main_browser_pane_g1

0x1a11,	// (0x0008022a) main_browser_pane_ParamLimits

0xb1f7,	// (0x00089a10) bg_button_pane_cp011_ParamLimits

0x778d,	// (0x00085fa6) cell_vitu2_function_pane_g1_ParamLimits

0xca41,	// (0x0008b25a) bg_popup_sub_pane_cp22_ParamLimits

0x077b,	// (0x0007ef94) input_focus_pane_cp08_ParamLimits

0x8033,	// (0x0008684c) popup_vitu2_query_button_pane_ParamLimits

0x8033,	// (0x0008684c) popup_vitu2_query_button_pane

0x0792,	// (0x0007efab) popup_vitu2_query_input_button_pane

0xe449,	// (0x0008cc62) popup_vitu2_query_window_g1_ParamLimits

0x079c,	// (0x0007efb5) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0008e23b) popup_vitu2_query_window_g_ParamLimits

0xec57,	// (0x0008d470) bg_button_pane_cp026

0x8634,	// (0x00086e4d) popup_vitu2_query_input_button_pane_g1

0xec57,	// (0x0008d470) bg_button_pane_cp025

0xe84d,	// (0x0008d066) popup_vitu2_query_button_pane_t1

0x5dbc,	// (0x000845d5) main_mp3_pane_t6

0x5dca,	// (0x000845e3) popup_slider_window_cp01

0xdc4e,	// (0x0008c467) cam4_battery_pane

0xdca7,	// (0x0008c4c0) cam4_battery_pane_cp02

0xe686,	// (0x0008ce9f) cam4_battery_pane_cp01

0xe686,	// (0x0008ce9f) cam4_battery_pane_cp03

0xcf5c,	// (0x0008b775) cam4_battery_pane_g1

0xe85b,	// (0x0008d074) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0008e33f) cam4_battery_pane_g

0xce28,	// (0x0008b641) popup_blid_sat_info2_window_t11

0x4129,	// (0x00082942) aid_size_touch_mv_arrow_left_ParamLimits

0x4152,	// (0x0008296b) aid_size_touch_mv_arrow_right_ParamLimits

0xb550,	// (0x00089d69) navi_pane_g1_ParamLimits

0x4191,	// (0x000829aa) navi_pane_g2_ParamLimits

0x41bf,	// (0x000829d8) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0008dc09) navi_pane_g_ParamLimits

0x4217,	// (0x00082a30) navi_pane_mv_t1_ParamLimits

0x6a15,	// (0x0008522e) grid_imed_effect_pane_ParamLimits

0x2819,	// (0x00081032) aid_placing_vt_slider_lsc

0x2829,	// (0x00081042) aid_placing_vt_slider_prt

0xb1f7,	// (0x00089a10) bg_tb_trans_pane_cp01_ParamLimits

0xd0e8,	// (0x0008b901) popup_image_details_window_g1_ParamLimits

0xd0fb,	// (0x0008b914) popup_image_details_window_g2_ParamLimits

0xd110,	// (0x0008b929) popup_image_details_window_g3_ParamLimits

0xd110,	// (0x0008b929) popup_image_details_window_g3

0xf723,	// (0x0008df3c) popup_image_details_window_g_ParamLimits

0xd124,	// (0x0008b93d) popup_image_details_window_t1_ParamLimits

0xd136,	// (0x0008b94f) popup_image_details_window_t2_ParamLimits

0xd14f,	// (0x0008b968) popup_image_details_window_t3_ParamLimits

0xd163,	// (0x0008b97c) popup_image_details_window_t4_ParamLimits

0xd17e,	// (0x0008b997) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0008df43) popup_image_details_window_t_ParamLimits

0x8279,	// (0x00086a92) cl_header_name_pane_ParamLimits

0x8279,	// (0x00086a92) cl_header_name_pane

0x863c,	// (0x00086e55) cl_header_name_pane_t1_ParamLimits

0x863c,	// (0x00086e55) cl_header_name_pane_t1

0x865d,	// (0x00086e76) cl_header_name_pane_t2_ParamLimits

0x865d,	// (0x00086e76) cl_header_name_pane_t2

0x869f,	// (0x00086eb8) cl_header_name_pane_t3_ParamLimits

0x869f,	// (0x00086eb8) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0008e344) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0008e344) cl_header_name_pane_t

0x41e8,	// (0x00082a01) navi_pane_mv_g2_ParamLimits

0xe12d,	// (0x0008c946) field_vitu2_entry_pane_g1_ParamLimits

0xe139,	// (0x0008c952) field_vitu2_entry_pane_g2_ParamLimits

0xe145,	// (0x0008c95e) field_vitu2_entry_pane_g3_ParamLimits

0xe145,	// (0x0008c95e) field_vitu2_entry_pane_g3

0xf921,	// (0x0008e13a) field_vitu2_entry_pane_g_ParamLimits

0x7709,	// (0x00085f22) cell_vitu2_itu_pane_g1_ParamLimits

0x7719,	// (0x00085f32) cell_vitu2_itu_pane_g2_ParamLimits

0x7719,	// (0x00085f32) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0008e146) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0008e146) cell_vitu2_itu_pane_g

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp05_ParamLimits

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp05

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp03

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp04

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp10_ParamLimits

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp10

0x08b9,	// (0x0007f0d2) bg_vkb2_func_pane_cp08

0x8223,	// (0x00086a3c) bg_vkb2_func_pane_cp06

0x8231,	// (0x00086a4a) bg_vkb2_func_pane_cp07

0xe74a,	// (0x0008cf63) bg_vkb2_func_pane_cp11_ParamLimits

0xe74a,	// (0x0008cf63) bg_vkb2_func_pane_cp11

0xe75f,	// (0x0008cf78) bg_vkb2_func_pane_cp12_ParamLimits

0xe75f,	// (0x0008cf78) bg_vkb2_func_pane_cp12

0xec57,	// (0x0008d470) bg_vkb2_func_pane_cp09

0xe165,	// (0x0008c97e) bg_vkb2_func_pane_g1

0x2dc7,	// (0x000815e0) bg_vkb2_func_pane_g2

0xe16d,	// (0x0008c986) bg_vkb2_func_pane_g3

0xe175,	// (0x0008c98e) bg_vkb2_func_pane_g4

0xe3ec,	// (0x0008cc05) bg_vkb2_func_pane_g5

0xe18d,	// (0x0008c9a6) bg_vkb2_func_pane_g6

0xe195,	// (0x0008c9ae) bg_vkb2_func_pane_g7

0xe185,	// (0x0008c99e) bg_vkb2_func_pane_g8

0x2da7,	// (0x000815c0) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0008e34b) bg_vkb2_func_pane_g

0x8560,	// (0x00086d79) blid2_tripm_pane_g6_ParamLimits

0x8560,	// (0x00086d79) blid2_tripm_pane_g6

0xdaa1,	// (0x0008c2ba) mp4_progress_pane_g1

0x85d9,	// (0x00086df2) blid2_tripm_values_pane_ParamLimits

0x85d9,	// (0x00086df2) blid2_tripm_values_pane

0x86d0,	// (0x00086ee9) blid2_tripm_values_pane_t1

0x86de,	// (0x00086ef7) blid2_tripm_values_pane_t2

0x86ec,	// (0x00086f05) blid2_tripm_values_pane_t3

0x86fa,	// (0x00086f13) blid2_tripm_values_pane_t4

0x8708,	// (0x00086f21) blid2_tripm_values_pane_t5

0x8716,	// (0x00086f2f) blid2_tripm_values_pane_t6

0x8724,	// (0x00086f3d) blid2_tripm_values_pane_t7

0x8732,	// (0x00086f4b) blid2_tripm_values_pane_t8

0x8740,	// (0x00086f59) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0008e35e) blid2_tripm_values_pane_t

0x2865,	// (0x0008107e) call_video_pane_t1_ParamLimits

0x2883,	// (0x0008109c) call_video_pane_t2_ParamLimits

0xf279,	// (0x0008da92) call_video_pane_t_ParamLimits

0x05ab,	// (0x0007edc4) msg_header_pane_g1_ParamLimits

0xb782,	// (0x00089f9b) msg_header_pane_g2_ParamLimits

0xb782,	// (0x00089f9b) msg_header_pane_g2

0x0001,

0xf493,	// (0x0008dcac) msg_header_pane_g_ParamLimits

0xf493,	// (0x0008dcac) msg_header_pane_g

0x1a11,	// (0x0008022a) main_clock2_pane_ParamLimits

0x6714,	// (0x00084f2d) grid_clock2_toolbar_pane_ParamLimits

0x6714,	// (0x00084f2d) grid_clock2_toolbar_pane

0x6714,	// (0x00084f2d) listscroll_clock2_pane_ParamLimits

0x6714,	// (0x00084f2d) listscroll_clock2_pane

0x6809,	// (0x00085022) main_clock2_pane_t3_ParamLimits

0x6809,	// (0x00085022) main_clock2_pane_t3

0x682d,	// (0x00085046) main_clock2_pane_t4_ParamLimits

0x682d,	// (0x00085046) main_clock2_pane_t4

0xe865,	// (0x0008d07e) cell_clock2_toolbar_pane

0xe86d,	// (0x0008d086) cell_clock2_toolbar_pane_cp01

0xe86d,	// (0x0008d086) cell_clock2_toolbar_pane_cp02

0xe875,	// (0x0008d08e) cell_clock2_toolbar_pane_cp03

0xe87d,	// (0x0008d096) list_clock2_pane

0xb4a7,	// (0x00089cc0) scroll_pane_cp10

0xe885,	// (0x0008d09e) list_single_clock2_pane_ParamLimits

0xe885,	// (0x0008d09e) list_single_clock2_pane

0xb5f0,	// (0x00089e09) list_highlight_pane_cp08

0xe892,	// (0x0008d0ab) list_single_clock2_pane_t1

0xe8a0,	// (0x0008d0b9) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0008e371) list_single_clock2_pane_t

0xec57,	// (0x0008d470) bg_button_pane_cp10

0xe8ae,	// (0x0008d0c7) cell_clock2_toolbar_pane_g1

0x46bc,	// (0x00082ed5) aid_main_viewer_pane_g1_ParamLimits

0x46bc,	// (0x00082ed5) aid_main_viewer_pane_g1

0x46ca,	// (0x00082ee3) aid_main_viewer_pane_g2_ParamLimits

0x46ca,	// (0x00082ee3) aid_main_viewer_pane_g2

0x46d8,	// (0x00082ef1) aid_main_viewer_pane_g3_ParamLimits

0x46d8,	// (0x00082ef1) aid_main_viewer_pane_g3

0x46e7,	// (0x00082f00) aid_main_viewer_pane_g4_ParamLimits

0x46e7,	// (0x00082f00) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0008dcbd) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0008dcbd) aid_main_viewer_pane_g

0x4fed,	// (0x00083806) main_calc_pane_ParamLimits

0x5001,	// (0x0008381a) main_dialer2_pane_ParamLimits

0xec57,	// (0x0008d470) main_cam6_pane

0xec57,	// (0x0008d470) main_vid6_pane

0x6720,	// (0x00084f39) listscroll_gen_pane_cp06_ParamLimits

0x6720,	// (0x00084f39) listscroll_gen_pane_cp06

0x6850,	// (0x00085069) main_clock2_pane_t5_ParamLimits

0x6850,	// (0x00085069) main_clock2_pane_t5

0x68aa,	// (0x000850c3) aid_call2_pane_cp10_ParamLimits

0x68bc,	// (0x000850d5) aid_call_pane_cp10_ParamLimits

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x68ce,	// (0x000850e7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x68ce,	// (0x000850e7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb525,	// (0x00089d3e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0008dff3) popup_clock_analogue_window_cp10_g_ParamLimits

0x68e0,	// (0x000850f9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6f49,	// (0x00085762) cell_dialer2_keypad_pane_g2_ParamLimits

0x6f49,	// (0x00085762) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0008e0d9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0008e0d9) cell_dialer2_keypad_pane_g

0x6f65,	// (0x0008577e) cell_dialer2_keypad_pane_t1

0x7aa4,	// (0x000862bd) main_cset_text2_pane_ParamLimits

0x7aa4,	// (0x000862bd) main_cset_text2_pane

0xe629,	// (0x0008ce42) area_vitu2_query_pane_g1_ParamLimits

0x0880,	// (0x0007f099) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0008e28e) area_vitu2_query_pane_g_ParamLimits

0xde07,	// (0x0008c620) area_vitu2_query_pane_t7_ParamLimits

0xde07,	// (0x0008c620) area_vitu2_query_pane_t7

0x8223,	// (0x00086a3c) bg_button_pane_cp018_ParamLimits

0x8231,	// (0x00086a4a) bg_button_pane_cp021_ParamLimits

0x08b9,	// (0x0007f0d2) bg_button_pane_cp022_ParamLimits

0x08b9,	// (0x0007f0d2) bg_vkb2_func_pane_cp08_ParamLimits

0x8223,	// (0x00086a3c) bg_vkb2_func_pane_cp06_ParamLimits

0x8231,	// (0x00086a4a) bg_vkb2_func_pane_cp07_ParamLimits

0x08c8,	// (0x0007f0e1) input_focus_pane_cp09_ParamLimits

0xe8b6,	// (0x0008d0cf) cam6_autofocus_pane_ParamLimits

0xe8b6,	// (0x0008d0cf) cam6_autofocus_pane

0x874e,	// (0x00086f67) cam6_image_uncrop_pane_ParamLimits

0x874e,	// (0x00086f67) cam6_image_uncrop_pane

0x875d,	// (0x00086f76) cam6_indi_pane_ParamLimits

0x875d,	// (0x00086f76) cam6_indi_pane

0x8773,	// (0x00086f8c) cam6_mode_pane_ParamLimits

0x8773,	// (0x00086f8c) cam6_mode_pane

0x8785,	// (0x00086f9e) cam6_timer_pane_ParamLimits

0x8785,	// (0x00086f9e) cam6_timer_pane

0x8791,	// (0x00086faa) cam6_zoom_pane_ParamLimits

0x8791,	// (0x00086faa) cam6_zoom_pane

0x879d,	// (0x00086fb6) cam6_mode_pane_g1_ParamLimits

0x879d,	// (0x00086fb6) cam6_mode_pane_g1

0x87ad,	// (0x00086fc6) cam6_mode_pane_g2_ParamLimits

0x87ad,	// (0x00086fc6) cam6_mode_pane_g2

0x87bd,	// (0x00086fd6) cam6_mode_pane_g3_ParamLimits

0x87bd,	// (0x00086fd6) cam6_mode_pane_g3

0x87cd,	// (0x00086fe6) cam6_mode_pane_g4_ParamLimits

0x87cd,	// (0x00086fe6) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0008e376) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0008e376) cam6_mode_pane_g

0xe8c4,	// (0x0008d0dd) bg_tb_trans_pane_cp08_ParamLimits

0xe8c4,	// (0x0008d0dd) bg_tb_trans_pane_cp08

0xe8d2,	// (0x0008d0eb) cam6_battery_pane_ParamLimits

0xe8d2,	// (0x0008d0eb) cam6_battery_pane

0xe8e8,	// (0x0008d101) cam6_indi_pane_g1_ParamLimits

0xe8e8,	// (0x0008d101) cam6_indi_pane_g1

0xe8fa,	// (0x0008d113) cam6_indi_pane_g2_ParamLimits

0xe8fa,	// (0x0008d113) cam6_indi_pane_g2

0xe90c,	// (0x0008d125) cam6_indi_pane_g3_ParamLimits

0xe90c,	// (0x0008d125) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0008e37f) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0008e37f) cam6_indi_pane_g

0xe91e,	// (0x0008d137) cam6_indi_pane_t1_ParamLimits

0xe91e,	// (0x0008d137) cam6_indi_pane_t1

0x87dd,	// (0x00086ff6) cam6_autofocus_pane_g1

0x87e5,	// (0x00086ffe) cam6_autofocus_pane_g2

0x87ed,	// (0x00087006) cam6_autofocus_pane_g3

0x87f5,	// (0x0008700e) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0008e386) cam6_autofocus_pane_g

0xe944,	// (0x0008d15d) cam6_timer_pane_g1

0xe94c,	// (0x0008d165) cam6_timer_pane_t1

0xe95a,	// (0x0008d173) cam6_zoom_cont_pane

0xe962,	// (0x0008d17b) cam6_zoom_pane_g1

0xe96a,	// (0x0008d183) cam6_zoom_pane_g2

0x87fd,	// (0x00087016) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0008e38f) cam6_zoom_pane_g

0xcf5c,	// (0x0008b775) cam6_battery_pane_g1

0xcf5c,	// (0x0008b775) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0008df00) cam6_battery_pane_g

0xe972,	// (0x0008d18b) cam6_zoom_cont_pane_g1

0xe97b,	// (0x0008d194) cam6_zoom_cont_pane_g2

0xe984,	// (0x0008d19d) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0008e396) cam6_zoom_cont_pane_g

0x881a,	// (0x00087033) cam6_mode_pane_cp_ParamLimits

0x881a,	// (0x00087033) cam6_mode_pane_cp

0x8791,	// (0x00086faa) cam6_zoom_pane_cp_ParamLimits

0x8791,	// (0x00086faa) cam6_zoom_pane_cp

0x882c,	// (0x00087045) vid6_image_uncrop_cif_pane_ParamLimits

0x882c,	// (0x00087045) vid6_image_uncrop_cif_pane

0x883c,	// (0x00087055) vid6_image_uncrop_nhd_pane_ParamLimits

0x883c,	// (0x00087055) vid6_image_uncrop_nhd_pane

0x874e,	// (0x00086f67) vid6_image_uncrop_vga_pane_ParamLimits

0x874e,	// (0x00086f67) vid6_image_uncrop_vga_pane

0x884b,	// (0x00087064) vid6_image_uncrop_wvga_pane_ParamLimits

0x884b,	// (0x00087064) vid6_image_uncrop_wvga_pane

0x885a,	// (0x00087073) vid6_indi_pane_ParamLimits

0x885a,	// (0x00087073) vid6_indi_pane

0xe8c4,	// (0x0008d0dd) bg_tb_trans_pane_cp09_ParamLimits

0xe8c4,	// (0x0008d0dd) bg_tb_trans_pane_cp09

0xe99c,	// (0x0008d1b5) cam6_battery_pane_cp_ParamLimits

0xe99c,	// (0x0008d1b5) cam6_battery_pane_cp

0xe9a8,	// (0x0008d1c1) vid6_indi_pane_g1_ParamLimits

0xe9a8,	// (0x0008d1c1) vid6_indi_pane_g1

0xe9ba,	// (0x0008d1d3) vid6_indi_pane_g2_ParamLimits

0xe9ba,	// (0x0008d1d3) vid6_indi_pane_g2

0xe9cc,	// (0x0008d1e5) vid6_indi_pane_g3_ParamLimits

0xe9cc,	// (0x0008d1e5) vid6_indi_pane_g3

0xe9e1,	// (0x0008d1fa) vid6_indi_pane_g4_ParamLimits

0xe9e1,	// (0x0008d1fa) vid6_indi_pane_g4

0xe9f6,	// (0x0008d20f) vid6_indi_pane_g5_ParamLimits

0xe9f6,	// (0x0008d20f) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0008e39d) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0008e39d) vid6_indi_pane_g

0xea10,	// (0x0008d229) vid6_indi_pane_t1_ParamLimits

0xea10,	// (0x0008d229) vid6_indi_pane_t1

0xea26,	// (0x0008d23f) vid6_indi_pane_t2_ParamLimits

0xea26,	// (0x0008d23f) vid6_indi_pane_t2

0xea4e,	// (0x0008d267) vid6_indi_pane_t3_ParamLimits

0xea4e,	// (0x0008d267) vid6_indi_pane_t3

0xea76,	// (0x0008d28f) vid6_indi_pane_t4_ParamLimits

0xea76,	// (0x0008d28f) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0008e3a8) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0008e3a8) vid6_indi_pane_t

0xea9a,	// (0x0008d2b3) wait_bar_pane_cp08

0x8872,	// (0x0008708b) main_cset_text2_pane_t1_ParamLimits

0x8872,	// (0x0008708b) main_cset_text2_pane_t1

0x8805,	// (0x0008701e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8805,	// (0x0008701e) listscroll_gen_pane_cp06_t1

0xec57,	// (0x0008d470) main_cam6_set_pane

0xd1c8,	// (0x0008b9e1) bg_tb_trans_pane_cp06_ParamLimits

0xdc56,	// (0x0008c46f) cam4_indicators_pane_g1_ParamLimits

0xdc67,	// (0x0008c480) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0008e116) cam4_indicators_pane_g_ParamLimits

0xdc85,	// (0x0008c49e) cam4_indicators_pane_t1_ParamLimits

0xb1f7,	// (0x00089a10) bg_tb_trans_pane_cp07_ParamLimits

0xdcb1,	// (0x0008c4ca) vid4_indicators_pane_g1_ParamLimits

0xdcc5,	// (0x0008c4de) vid4_indicators_pane_g2_ParamLimits

0xdcd9,	// (0x0008c4f2) vid4_indicators_pane_g3_ParamLimits

0xdcea,	// (0x0008c503) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0008e128) vid4_indicators_pane_g_ParamLimits

0xdd08,	// (0x0008c521) vid4_indicators_pane_t1_ParamLimits

0x8369,	// (0x00086b82) vid4_progress_pane_g1_ParamLimits

0x837b,	// (0x00086b94) vid4_progress_pane_g2_ParamLimits

0xb7c0,	// (0x00089fd9) vid4_progress_pane_g3_ParamLimits

0xe68e,	// (0x0008cea7) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0008e2d9) vid4_progress_pane_g_ParamLimits

0xe6ac,	// (0x0008cec5) vid4_progress_pane_t1_ParamLimits

0xe6c1,	// (0x0008ceda) vid4_progress_pane_t2_ParamLimits

0xe6d7,	// (0x0008cef0) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0008e2e4) vid4_progress_pane_t_ParamLimits

0xe6ec,	// (0x0008cf05) wait_bar_pane_cp07_ParamLimits

0x888f,	// (0x000870a8) main_cam6_set_pane_g2_ParamLimits

0x888f,	// (0x000870a8) main_cam6_set_pane_g2

0x88b3,	// (0x000870cc) main_cset6_listscroll_pane_ParamLimits

0x88b3,	// (0x000870cc) main_cset6_listscroll_pane

0x88d3,	// (0x000870ec) main_cset6_slider_pane_ParamLimits

0x88d3,	// (0x000870ec) main_cset6_slider_pane

0x88e9,	// (0x00087102) main_cset6_text2_pane_ParamLimits

0x88e9,	// (0x00087102) main_cset6_text2_pane

0xeaa9,	// (0x0008d2c2) main_cset6_text_pane

0xeab1,	// (0x0008d2ca) main_cset_list_pane_copy1_ParamLimits

0xeab1,	// (0x0008d2ca) main_cset_list_pane_copy1

0xeac1,	// (0x0008d2da) scroll_pane_cp028_copy1

0x88f7,	// (0x00087110) cset_list_set_pane_copy1

0x8908,	// (0x00087121) aid_position_infowindow_above_copy1

0x8910,	// (0x00087129) aid_position_infowindow_below_copy1

0x8918,	// (0x00087131) cset_list_set_pane_g1_copy1

0x08eb,	// (0x0007f104) cset_list_set_pane_g3_copy1_ParamLimits

0x08eb,	// (0x0007f104) cset_list_set_pane_g3_copy1

0x08fa,	// (0x0007f113) cset_list_set_pane_t1_copy1_ParamLimits

0x08fa,	// (0x0007f113) cset_list_set_pane_t1_copy1

0xb1f7,	// (0x00089a10) list_highlight_pane_cp021_copy1_ParamLimits

0xb1f7,	// (0x00089a10) list_highlight_pane_cp021_copy1

0xeaca,	// (0x0008d2e3) cset6_slider_pane_ParamLimits

0xeaca,	// (0x0008d2e3) cset6_slider_pane

0xeaf6,	// (0x0008d30f) main_cset6_slider_pane_g1_ParamLimits

0xeaf6,	// (0x0008d30f) main_cset6_slider_pane_g1

0x8920,	// (0x00087139) main_cset6_slider_pane_g2_ParamLimits

0x8920,	// (0x00087139) main_cset6_slider_pane_g2

0xeb1e,	// (0x0008d337) main_cset6_slider_pane_g3_ParamLimits

0xeb1e,	// (0x0008d337) main_cset6_slider_pane_g3

0x8948,	// (0x00087161) main_cset6_slider_pane_g4_ParamLimits

0x8948,	// (0x00087161) main_cset6_slider_pane_g4

0x8954,	// (0x0008716d) main_cset6_slider_pane_g5_ParamLimits

0x8954,	// (0x0008716d) main_cset6_slider_pane_g5

0xe294,	// (0x0008caad) main_cset6_slider_pane_g7_ParamLimits

0xe294,	// (0x0008caad) main_cset6_slider_pane_g7

0xe2a0,	// (0x0008cab9) main_cset6_slider_pane_g8_ParamLimits

0xe2a0,	// (0x0008cab9) main_cset6_slider_pane_g8

0x7b51,	// (0x0008636a) main_cset6_slider_pane_g9_ParamLimits

0x7b51,	// (0x0008636a) main_cset6_slider_pane_g9

0x7b5d,	// (0x00086376) main_cset6_slider_pane_g10_ParamLimits

0x7b5d,	// (0x00086376) main_cset6_slider_pane_g10

0x7b69,	// (0x00086382) main_cset6_slider_pane_g11_ParamLimits

0x7b69,	// (0x00086382) main_cset6_slider_pane_g11

0x7b75,	// (0x0008638e) main_cset6_slider_pane_g12_ParamLimits

0x7b75,	// (0x0008638e) main_cset6_slider_pane_g12

0x7b81,	// (0x0008639a) main_cset6_slider_pane_g13_ParamLimits

0x7b81,	// (0x0008639a) main_cset6_slider_pane_g13

0x7b8d,	// (0x000863a6) main_cset6_slider_pane_g14_ParamLimits

0x7b8d,	// (0x000863a6) main_cset6_slider_pane_g14

0x8960,	// (0x00087179) main_cset6_slider_pane_g15_ParamLimits

0x8960,	// (0x00087179) main_cset6_slider_pane_g15

0x7bb1,	// (0x000863ca) main_cset6_slider_pane_g16_ParamLimits

0x7bb1,	// (0x000863ca) main_cset6_slider_pane_g16

0x7bbd,	// (0x000863d6) main_cset6_slider_pane_g17_ParamLimits

0x7bbd,	// (0x000863d6) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0008e3b1) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0008e3b1) main_cset6_slider_pane_g

0xeb2a,	// (0x0008d343) main_cset6_slider_pane_t1_ParamLimits

0xeb2a,	// (0x0008d343) main_cset6_slider_pane_t1

0x8990,	// (0x000871a9) main_cset6_slider_pane_t2_ParamLimits

0x8990,	// (0x000871a9) main_cset6_slider_pane_t2

0x89bb,	// (0x000871d4) main_cset6_slider_pane_t3_ParamLimits

0x89bb,	// (0x000871d4) main_cset6_slider_pane_t3

0x89e6,	// (0x000871ff) main_cset6_slider_pane_t4_ParamLimits

0x89e6,	// (0x000871ff) main_cset6_slider_pane_t4

0x8a11,	// (0x0008722a) main_cset6_slider_pane_t5_ParamLimits

0x8a11,	// (0x0008722a) main_cset6_slider_pane_t5

0xeb6b,	// (0x0008d384) main_cset6_slider_pane_t7_ParamLimits

0xeb6b,	// (0x0008d384) main_cset6_slider_pane_t7

0x8a3c,	// (0x00087255) main_cset6_slider_pane_t8_ParamLimits

0x8a3c,	// (0x00087255) main_cset6_slider_pane_t8

0x8a60,	// (0x00087279) main_cset6_slider_pane_t9_ParamLimits

0x8a60,	// (0x00087279) main_cset6_slider_pane_t9

0x8a84,	// (0x0008729d) main_cset6_slider_pane_t10_ParamLimits

0x8a84,	// (0x0008729d) main_cset6_slider_pane_t10

0x8aa8,	// (0x000872c1) main_cset6_slider_pane_t11_ParamLimits

0x8aa8,	// (0x000872c1) main_cset6_slider_pane_t11

0xeba1,	// (0x0008d3ba) main_cset6_slider_pane_t14_ParamLimits

0xeba1,	// (0x0008d3ba) main_cset6_slider_pane_t14

0xebda,	// (0x0008d3f3) main_cset6_slider_pane_t15_ParamLimits

0xebda,	// (0x0008d3f3) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0008e3d6) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0008e3d6) main_cset6_slider_pane_t

0xe384,	// (0x0008cb9d) cset_slider_pane_g1_copy1

0xe38d,	// (0x0008cba6) cset_slider_pane_g2_copy1

0xe396,	// (0x0008cbaf) cset_slider_pane_g3_copy1

0xec57,	// (0x0008d470) bg_popup_sub_pane_cp011_copy1

0xf06f,	// (0x0008d888) main_cset_text_pane_g1_copy1

0xe45d,	// (0x0008cc76) main_cset_text_pane_t1_copy1

0xe46b,	// (0x0008cc84) main_cset_text_pane_t2_copy1

0xe479,	// (0x0008cc92) main_cset_text_pane_t3_copy1

0xe487,	// (0x0008cca0) main_cset_text_pane_t4_copy1

0xe495,	// (0x0008ccae) main_cset_text_pane_t5_copy1

0xf077,	// (0x0008d890) main_cset_text_pane_t6_copy1

0xe4b1,	// (0x0008ccca) main_cset_text_pane_t7_copy1

0x8872,	// (0x0008708b) main_cset_text2_pane_t1_copy1

0xb1f7,	// (0x00089a10) main_ncimui_pane

0x524b,	// (0x00083a64) popup_query_ncimui_window_ParamLimits

0x524b,	// (0x00083a64) popup_query_ncimui_window

0xd22d,	// (0x0008ba46) field_cale_ev2_pane_g4_ParamLimits

0xd22d,	// (0x0008ba46) field_cale_ev2_pane_g4

0x6e29,	// (0x00085642) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e29,	// (0x00085642) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0008e0b4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0008e0b4) cell_video_dialer_keypad_pane_g

0x6e41,	// (0x0008565a) cell_video_dialer_keypad_pane_t1

0xec57,	// (0x0008d470) bg_popup_window_pane_cp012

0xb374,	// (0x00089b8d) heading_pane_cp06

0xf0a3,	// (0x0008d8bc) ncim_query_content_pane

0xec57,	// (0x0008d470) bg_popup_heading_pane_cp01

0xf0ab,	// (0x0008d8c4) ncim_heading_pane_t1

0xf0b9,	// (0x0008d8d2) ncim_indicator_popup_pane

0xf0cb,	// (0x0008d8e4) ncim_query_button_pane

0x8c25,	// (0x0008743e) ncim_query_content_pane_t1

0x8c37,	// (0x00087450) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0008e41a) ncim_query_content_pane_t

0x8ce9,	// (0x00087502) ncim_query_list_pane

0x8cfb,	// (0x00087514) ncim_query_popup_pane

0xf0b9,	// (0x0008d8d2) ncim_indicator_popup_pane_ParamLimits

0x8c0d,	// (0x00087426) ncim_query_content_pane_g1_ParamLimits

0x8c0d,	// (0x00087426) ncim_query_content_pane_g1

0x8c25,	// (0x0008743e) ncim_query_content_pane_t1_ParamLimits

0x8c37,	// (0x00087450) ncim_query_content_pane_t2_ParamLimits

0x8c49,	// (0x00087462) ncim_query_content_pane_t3_ParamLimits

0x8c49,	// (0x00087462) ncim_query_content_pane_t3

0x8c71,	// (0x0008748a) ncim_query_content_pane_t4_ParamLimits

0x8c71,	// (0x0008748a) ncim_query_content_pane_t4

0x8c99,	// (0x000874b2) ncim_query_content_pane_t5_ParamLimits

0x8c99,	// (0x000874b2) ncim_query_content_pane_t5

0x8cc1,	// (0x000874da) ncim_query_content_pane_t6_ParamLimits

0x8cc1,	// (0x000874da) ncim_query_content_pane_t6

0xfc01,	// (0x0008e41a) ncim_query_content_pane_t_ParamLimits

0x8ce9,	// (0x00087502) ncim_query_list_pane_ParamLimits

0x8cfb,	// (0x00087514) ncim_query_popup_pane_ParamLimits

0x8d0f,	// (0x00087528) wait_bar_pane_cp04

0xec57,	// (0x0008d470) input_focus_pane_cp011

0x8d17,	// (0x00087530) ncim_query_popup_pane_t1

0x8d25,	// (0x0008753e) ncim_list_query_list_pane_ParamLimits

0x8d25,	// (0x0008753e) ncim_list_query_list_pane

0xec57,	// (0x0008d470) bg_button_pane_cp027

0x8d32,	// (0x0008754b) ncim_query_button_pane_g1

0xec57,	// (0x0008d470) list_highlight_pane_cp012

0x8d3c,	// (0x00087555) ncim_list_query_list_pane_g1

0x8d44,	// (0x0008755d) ncim_list_query_list_pane_t1

0xdc76,	// (0x0008c48f) cam4_indicators_pane_g3_ParamLimits

0xdc76,	// (0x0008c48f) cam4_indicators_pane_g3

0xdcf6,	// (0x0008c50f) vid4_indicators_pane_g5_ParamLimits

0xdcf6,	// (0x0008c50f) vid4_indicators_pane_g5

0xe69d,	// (0x0008ceb6) vid4_progress_pane_g5_ParamLimits

0xe69d,	// (0x0008ceb6) vid4_progress_pane_g5

0x8afb,	// (0x00087314) main_ncimui_pane_g1

0x8b61,	// (0x0008737a) ncimui_group_query_pane_ParamLimits

0x8b61,	// (0x0008737a) ncimui_group_query_pane

0x8ba9,	// (0x000873c2) ncimui_list_pane_ParamLimits

0x8ba9,	// (0x000873c2) ncimui_list_pane

0x8bd0,	// (0x000873e9) ncimui_text_pane_ParamLimits

0x8bd0,	// (0x000873e9) ncimui_text_pane

0x8d52,	// (0x0008756b) ncimui_text_pane_t1_ParamLimits

0x8d52,	// (0x0008756b) ncimui_text_pane_t1

0x8d70,	// (0x00087589) ncimui_list_single_graphic_pane_ParamLimits

0x8d70,	// (0x00087589) ncimui_list_single_graphic_pane

0x8d80,	// (0x00087599) ncimui_query_pane_ParamLimits

0x8d80,	// (0x00087599) ncimui_query_pane

0xec57,	// (0x0008d470) list_highlight_pane_cp013

0x8d93,	// (0x000875ac) ncim_list_query_list_pane_t1_copy1

0x8d3c,	// (0x00087555) ncim_list_single_graphic_pane_g1

0x8da1,	// (0x000875ba) ncim_query_button_pane_cp01

0x8dad,	// (0x000875c6) ncim_query_entry_pane_ParamLimits

0x8dad,	// (0x000875c6) ncim_query_entry_pane

0x8dc0,	// (0x000875d9) ncimui_query_pane_g1

0x8dcc,	// (0x000875e5) ncimui_query_pane_t1_ParamLimits

0x8dcc,	// (0x000875e5) ncimui_query_pane_t1

0xb1f7,	// (0x00089a10) input_focus_pane_cp012

0x8de5,	// (0x000875fe) ncim_query_entry_pane_t1

0x1a11,	// (0x0008022a) main_im_pane_ParamLimits

0xb1f7,	// (0x00089a10) main_mobtv_pane_ParamLimits

0xb1f7,	// (0x00089a10) main_mobtv_pane

0x8978,	// (0x00087191) main_cset6_slider_pane_g18_ParamLimits

0x8978,	// (0x00087191) main_cset6_slider_pane_g18

0x8984,	// (0x0008719d) main_cset6_slider_pane_g19_ParamLimits

0x8984,	// (0x0008719d) main_cset6_slider_pane_g19

0x8df7,	// (0x00087610) bg_main_mobtv_pane_ParamLimits

0x8df7,	// (0x00087610) bg_main_mobtv_pane

0x8e05,	// (0x0008761e) main_mobtv_info_pane

0x8e0e,	// (0x00087627) main_mobtv_loading_pane_ParamLimits

0x8e0e,	// (0x00087627) main_mobtv_loading_pane

0x8e1b,	// (0x00087634) main_mobtv_pg_channel_list_pane

0x8e25,	// (0x0008763e) main_mobtv_pg_hdr_pane

0x8e2e,	// (0x00087647) main_mobtv_programe_curr_pane_ParamLimits

0x8e2e,	// (0x00087647) main_mobtv_programe_curr_pane

0x8e3b,	// (0x00087654) main_mobtv_programe_next_pane_ParamLimits

0x8e3b,	// (0x00087654) main_mobtv_programe_next_pane

0x8e48,	// (0x00087661) popup_mobtv_noti_window

0xcf5c,	// (0x0008b775) main_tv_pg_hdr_pane_g1

0x8e50,	// (0x00087669) main_tv_pg_hdr_pane_g2

0x8e58,	// (0x00087671) main_tv_pg_hdr_pane_g3

0x8e60,	// (0x00087679) main_tv_pg_hdr_pane_g4

0x8e68,	// (0x00087681) main_tv_pg_hdr_pane_g5

0x8e72,	// (0x0008768b) main_tv_pg_hdr_pane_g6

0x8e7c,	// (0x00087695) main_tv_pg_hdr_pane_g7

0x8e86,	// (0x0008769f) main_tv_pg_hdr_pane_g8

0x8e90,	// (0x000876a9) main_tv_pg_hdr_pane_g9

0x8e9a,	// (0x000876b3) main_tv_pg_hdr_pane_g10

0x8ea4,	// (0x000876bd) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0008e427) main_tv_pg_hdr_pane_g

0x8eae,	// (0x000876c7) main_tv_pg_hdr_pane_t1

0x8ebc,	// (0x000876d5) main_tv_pg_hdr_pane_t2

0x8eca,	// (0x000876e3) main_tv_pg_hdr_pane_t3

0x8eda,	// (0x000876f3) main_tv_pg_hdr_pane_t4

0x8eea,	// (0x00087703) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0008e43e) main_tv_pg_hdr_pane_t

0x8efa,	// (0x00087713) single_mobtv_pg_channel_pane_ParamLimits

0x8efa,	// (0x00087713) single_mobtv_pg_channel_pane

0x8f0c,	// (0x00087725) single_mobtv_pg_channel_table_pane

0x8f15,	// (0x0008772e) single_mobtv_pg_channel_thumb_pane

0x8f1e,	// (0x00087737) single_tv_pg_channel_pane_g1

0x8f27,	// (0x00087740) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0008e449) single_tv_pg_channel_pane_g

0xd1c8,	// (0x0008b9e1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd1c8,	// (0x0008b9e1) bg_single_mobtv_pg_channel_thumb_pane

0x8f30,	// (0x00087749) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8f30,	// (0x00087749) single_mobtv_pg_channel_thumb_pane_g1

0x8f3e,	// (0x00087757) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8f3e,	// (0x00087757) single_mobtv_pg_channel_thumb_pane_g2

0x8f4a,	// (0x00087763) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8f4a,	// (0x00087763) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0008e44e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0008e44e) single_mobtv_pg_channel_thumb_pane_g

0x8f56,	// (0x0008776f) single_mobtv_pg_channel_thumb_pane_t1

0x8f64,	// (0x0008777d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0008e455) single_mobtv_pg_channel_thumb_pane_t

0xcf5c,	// (0x0008b775) bg_single_mobtv_pg_channel_table_pane_g1

0xcf5c,	// (0x0008b775) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0008df00) bg_single_mobtv_pg_channel_table_pane_g

0x8f72,	// (0x0008778b) single_mobtv_pg_channel_table_pane_t1

0x8f80,	// (0x00087799) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0008e45a) single_mobtv_pg_channel_table_pane_t

0x8f96,	// (0x000877af) main_mobtv_info_pane_g1_ParamLimits

0x8f96,	// (0x000877af) main_mobtv_info_pane_g1

0x8fb4,	// (0x000877cd) main_mobtv_info_pane_t1_ParamLimits

0x8fb4,	// (0x000877cd) main_mobtv_info_pane_t1

0x902c,	// (0x00087845) main_mobtv_info_pane_t2_ParamLimits

0x902c,	// (0x00087845) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0008e464) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0008e464) main_mobtv_info_pane_t

0x90bb,	// (0x000878d4) wait_bar_pane_cp05

0x90cd,	// (0x000878e6) main_mobtv_loading_pane_g1_ParamLimits

0x90cd,	// (0x000878e6) main_mobtv_loading_pane_g1

0x90e0,	// (0x000878f9) main_mobtv_loading_pane_g2_ParamLimits

0x90e0,	// (0x000878f9) main_mobtv_loading_pane_g2

0x90ec,	// (0x00087905) main_mobtv_loading_pane_g3_ParamLimits

0x90ec,	// (0x00087905) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0008e46b) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0008e46b) main_mobtv_loading_pane_g

0x90ff,	// (0x00087918) main_mobtv_loading_pane_t1_ParamLimits

0x90ff,	// (0x00087918) main_mobtv_loading_pane_t1

0x9117,	// (0x00087930) main_mobtv_loading_pane_t2_ParamLimits

0x9117,	// (0x00087930) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0008e472) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0008e472) main_mobtv_loading_pane_t

0x913b,	// (0x00087954) wait_bar_pane_cp06_ParamLimits

0x913b,	// (0x00087954) wait_bar_pane_cp06

0x914a,	// (0x00087963) main_mobtv_programe_curr_pane_t1

0x9158,	// (0x00087971) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0008e477) main_mobtv_programe_curr_pane_t

0x9166,	// (0x0008797f) main_mobtv_programe_next_pane_t1

0x9174,	// (0x0008798d) main_mobtv_programe_next_pane_t2

0x9182,	// (0x0008799b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0008e47c) main_mobtv_programe_next_pane_t

0xec57,	// (0x0008d470) bg_popup_mobtv_noti_window_pane

0x9190,	// (0x000879a9) popup_mobtv_noti_window_g1

0x9198,	// (0x000879b1) popup_mobtv_noti_window_t1

0x91a6,	// (0x000879bf) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0008e483) popup_mobtv_noti_window_t

0xcf5c,	// (0x0008b775) bg_popup_mobtv_noti_window_pane_g1

0xec57,	// (0x0008d470) sc_clock_pane

0xec57,	// (0x0008d470) main_fs_bigclock_pane

0x85c3,	// (0x00086ddc) blid2_tripm_pane_t4_ParamLimits

0x85c3,	// (0x00086ddc) blid2_tripm_pane_t4

0x91b4,	// (0x000879cd) sc_clock_pane_g1_ParamLimits

0x91b4,	// (0x000879cd) sc_clock_pane_g1

0x91c6,	// (0x000879df) sc_clock_pane_t1_ParamLimits

0x91c6,	// (0x000879df) sc_clock_pane_t1

0x91e8,	// (0x00087a01) sc_clock_pane_t2_ParamLimits

0x91e8,	// (0x00087a01) sc_clock_pane_t2

0x9200,	// (0x00087a19) sc_clock_pane_t3_ParamLimits

0x9200,	// (0x00087a19) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0008e488) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0008e488) sc_clock_pane_t

0xa35e,	// (0x00088b77) main_fs_bigclock_indicator_pane_ParamLimits

0xa35e,	// (0x00088b77) main_fs_bigclock_indicator_pane

0xd198,	// (0x0008b9b1) main_fs_bigclock_pane_g1_ParamLimits

0xd198,	// (0x0008b9b1) main_fs_bigclock_pane_g1

0xa36a,	// (0x00088b83) main_fs_bigclock_pane_t1_ParamLimits

0xa36a,	// (0x00088b83) main_fs_bigclock_pane_t1

0xa37c,	// (0x00088b95) main_fs_bigclock_pane_t2_ParamLimits

0xa37c,	// (0x00088b95) main_fs_bigclock_pane_t2

0xa390,	// (0x00088ba9) main_fs_bigclock_pane_t3_ParamLimits

0xa390,	// (0x00088ba9) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0008e68c) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008e68c) main_fs_bigclock_pane_t

0xa3a2,	// (0x00088bbb) main_fs_bigclock_indicator_pane_g1

0x8c19,	// (0x00087432) ncim_query_content_pane_g2_ParamLimits

0x8c19,	// (0x00087432) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0008e415) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0008e415) ncim_query_content_pane_g

0x9219,	// (0x00087a32) sc_clock_pane_t4_ParamLimits

0x9219,	// (0x00087a32) sc_clock_pane_t4

0xb1f7,	// (0x00089a10) main_radioblah_pane

0xdbbc,	// (0x0008c3d5) cell_call4_button_pane_t1_copy1_ParamLimits

0xdbbc,	// (0x0008c3d5) cell_call4_button_pane_t1_copy1

0x8b13,	// (0x0008732c) main_ncimui_pane_t1_ParamLimits

0x8b13,	// (0x0008732c) main_ncimui_pane_t1

0x8b2d,	// (0x00087346) main_ncimui_pane_t2_ParamLimits

0x8b2d,	// (0x00087346) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0008e40e) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0008e40e) main_ncimui_pane_t

0x93e9,	// (0x00087c02) main_radioblah_anim_pane_ParamLimits

0x93e9,	// (0x00087c02) main_radioblah_anim_pane

0x93fa,	// (0x00087c13) main_radioblah_info_pane_ParamLimits

0x93fa,	// (0x00087c13) main_radioblah_info_pane

0x9420,	// (0x00087c39) main_radioblah_pane_t1_ParamLimits

0x9420,	// (0x00087c39) main_radioblah_pane_t1

0x943c,	// (0x00087c55) main_radioblah_pane_t2_ParamLimits

0x943c,	// (0x00087c55) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0008e4a9) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0008e4a9) main_radioblah_pane_t

0x9484,	// (0x00087c9d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9484,	// (0x00087c9d) main_radioblah_rocker_ctrl_pane

0x94dc,	// (0x00087cf5) main_radioblah_info_pane_t1_ParamLimits

0x94dc,	// (0x00087cf5) main_radioblah_info_pane_t1

0x9516,	// (0x00087d2f) main_radioblah_info_pane_t2_ParamLimits

0x9516,	// (0x00087d2f) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0008e4b2) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0008e4b2) main_radioblah_info_pane_t

0xcf5c,	// (0x0008b775) main_radioblah_rocker_ctrl_pane_g1

0x95c6,	// (0x00087ddf) main_radioblah_rocker_ctrl_pane_g2

0x95ce,	// (0x00087de7) main_radioblah_rocker_ctrl_pane_g3

0x95d6,	// (0x00087def) main_radioblah_rocker_ctrl_pane_g4

0x95de,	// (0x00087df7) main_radioblah_rocker_ctrl_pane_g5

0x95e6,	// (0x00087dff) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0008e4bb) main_radioblah_rocker_ctrl_pane_g

0x8872,	// (0x0008708b) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc46,	// (0x0008c45f) cam4_image_uncrop_qvga_pane

0xdc9f,	// (0x0008c4b8) vid4_image_uncrop_qcif_pane

0xe8b6,	// (0x0008d0cf) cam6_image_uncrop_qvga_pane_ParamLimits

0xe8b6,	// (0x0008d0cf) cam6_image_uncrop_qvga_pane

0xe98c,	// (0x0008d1a5) vid6_image_uncrop_qcif_pane_ParamLimits

0xe98c,	// (0x0008d1a5) vid6_image_uncrop_qcif_pane

0xec57,	// (0x0008d470) bg_popup_preview_window_pane_cp03

0xf085,	// (0x0008d89e) list_cset_text2_pane

0xf08d,	// (0x0008d8a6) main_cset6_text2_pane_g1

0xf095,	// (0x0008d8ae) main_cset6_text2_pane_t1

0x95ee,	// (0x00087e07) list_cset_text2_pane_t1_ParamLimits

0x95ee,	// (0x00087e07) list_cset_text2_pane_t1

0xb1f7,	// (0x00089a10) main_radioblah_pane_ParamLimits

0x90a7,	// (0x000878c0) main_mobtv_info_pane_t3_ParamLimits

0x90a7,	// (0x000878c0) main_mobtv_info_pane_t3

0x940e,	// (0x00087c27) main_radioblah_pane_g1

0x94ac,	// (0x00087cc5) main_radioblah_info_pane_g1

0x956b,	// (0x00087d84) main_radioblah_info_pane_t3_ParamLimits

0x956b,	// (0x00087d84) main_radioblah_info_pane_t3

0x39d3,	// (0x000821ec) highlight_cell_cale_month_pane_ParamLimits

0x39d3,	// (0x000821ec) highlight_cell_cale_month_pane

0xec57,	// (0x0008d470) main_phob_fisheye_pane

0xd2fc,	// (0x0008bb15) scroll_pane_cp0031_ParamLimits

0xd2fc,	// (0x0008bb15) scroll_pane_cp0031

0xea9a,	// (0x0008d2b3) wait_bar_pane_cp08_ParamLimits

0x88f7,	// (0x00087110) cset_list_set_pane_copy1_ParamLimits

0x9607,	// (0x00087e20) highlight_cell_cale_month_pane_g1

0x960f,	// (0x00087e28) highlight_cell_cale_month_pane_t1

0xe67d,	// (0x0008ce96) list_gen_pane_cp01

0xe27f,	// (0x0008ca98) scroll_pane_01

0xec13,	// (0x0008d42c) list_single_double_fisheye_pane

0x09c4,	// (0x0007f1dd) list_double_fisheye_pane_g1_ParamLimits

0x09c4,	// (0x0007f1dd) list_double_fisheye_pane_g1

0x09d0,	// (0x0007f1e9) list_double_fisheye_pane_g2_ParamLimits

0x09d0,	// (0x0007f1e9) list_double_fisheye_pane_g2

0x961d,	// (0x00087e36) list_double_fisheye_pane_g3_ParamLimits

0x961d,	// (0x00087e36) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0008e4c8) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0008e4c8) list_double_fisheye_pane_g

0x0a01,	// (0x0007f21a) list_double_fisheye_pane_t1_ParamLimits

0x0a01,	// (0x0007f21a) list_double_fisheye_pane_t1

0x0a1c,	// (0x0007f235) list_double_fisheye_pane_t2_ParamLimits

0x0a1c,	// (0x0007f235) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0008e4d3) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0008e4d3) list_double_fisheye_pane_t

0xec57,	// (0x0008d470) main_call5_pane

0x9244,	// (0x00087a5d) sc_swipe_pane_ParamLimits

0x9244,	// (0x00087a5d) sc_swipe_pane

0x963c,	// (0x00087e55) call5_image_pane_ParamLimits

0x963c,	// (0x00087e55) call5_image_pane

0x9659,	// (0x00087e72) call5_swipe_1_pane_ParamLimits

0x9659,	// (0x00087e72) call5_swipe_1_pane

0x966c,	// (0x00087e85) call5_swipe_2_pane_ParamLimits

0x966c,	// (0x00087e85) call5_swipe_2_pane

0x9697,	// (0x00087eb0) popup_call5_audio_first_window_ParamLimits

0x9697,	// (0x00087eb0) popup_call5_audio_first_window

0xd1c8,	// (0x0008b9e1) call5_swipe_1_pane_g1_ParamLimits

0xd1c8,	// (0x0008b9e1) call5_swipe_1_pane_g1

0x96a8,	// (0x00087ec1) call5_swipe_1_pane_g2_ParamLimits

0x96a8,	// (0x00087ec1) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0008e4d8) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0008e4d8) call5_swipe_1_pane_g

0x96b4,	// (0x00087ecd) call5_swipe_1_pane_t1_ParamLimits

0x96b4,	// (0x00087ecd) call5_swipe_1_pane_t1

0xd1c8,	// (0x0008b9e1) call5_swipe_2_pane_g1_ParamLimits

0xd1c8,	// (0x0008b9e1) call5_swipe_2_pane_g1

0x96c9,	// (0x00087ee2) call5_swipe_2_pane_g2_ParamLimits

0x96c9,	// (0x00087ee2) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0008e4dd) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0008e4dd) call5_swipe_2_pane_g

0x96d5,	// (0x00087eee) call5_swipe_2_pane_t1_ParamLimits

0x96d5,	// (0x00087eee) call5_swipe_2_pane_t1

0x96ea,	// (0x00087f03) sc_swipe_pane_g1_ParamLimits

0x96ea,	// (0x00087f03) sc_swipe_pane_g1

0x96f7,	// (0x00087f10) sc_swipe_pane_g2_ParamLimits

0x96f7,	// (0x00087f10) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0008e4e2) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0008e4e2) sc_swipe_pane_g

0x9703,	// (0x00087f1c) sc_swipe_pane_t1_ParamLimits

0x9703,	// (0x00087f1c) sc_swipe_pane_t1

0xec57,	// (0x0008d470) main_cmail_launcher_pane

0x9718,	// (0x00087f31) aid_size_cell_cmail_l_ParamLimits

0x9718,	// (0x00087f31) aid_size_cell_cmail_l

0x9732,	// (0x00087f4b) grid_cmail_l_pane_ParamLimits

0x9732,	// (0x00087f4b) grid_cmail_l_pane

0x974d,	// (0x00087f66) cell_cmail_l_pane_ParamLimits

0x974d,	// (0x00087f66) cell_cmail_l_pane

0x9773,	// (0x00087f8c) cell_cmail_l_pane_g1_ParamLimits

0x9773,	// (0x00087f8c) cell_cmail_l_pane_g1

0x977f,	// (0x00087f98) cell_cmail_l_pane_t1_ParamLimits

0x977f,	// (0x00087f98) cell_cmail_l_pane_t1

0x9795,	// (0x00087fae) cell_cmail_l_pane_t2_ParamLimits

0x9795,	// (0x00087fae) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0008e4e7) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0008e4e7) cell_cmail_l_pane_t

0xb1f7,	// (0x00089a10) grid_highlight_pane_cp018_ParamLimits

0xb1f7,	// (0x00089a10) grid_highlight_pane_cp018

0x120a,	// (0x0007fa23) main2_pane_ParamLimits

0x120a,	// (0x0007fa23) main2_pane

0x1c39,	// (0x00080452) popup_sp_fs_action_menu_bg_pane_g1

0x1c41,	// (0x0008045a) popup_sp_fs_action_menu_bg_pane_g2

0x1c49,	// (0x00080462) popup_sp_fs_action_menu_bg_pane_g3

0x1c51,	// (0x0008046a) popup_sp_fs_action_menu_bg_pane_g4

0x1c59,	// (0x00080472) popup_sp_fs_action_menu_bg_pane_g5

0x1c61,	// (0x0008047a) popup_sp_fs_action_menu_bg_pane_g6

0x1c69,	// (0x00080482) popup_sp_fs_action_menu_bg_pane_g7

0x1c71,	// (0x0008048a) popup_sp_fs_action_menu_bg_pane_g8

0x1c79,	// (0x00080492) popup_sp_fs_action_menu_bg_pane_g9

0x1c81,	// (0x0008049a) popup_sp_fs_action_menu_bg_pane_g10

0x1c81,	// (0x0008049a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0008d9ac) popup_sp_fs_action_menu_bg_pane_g

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g3_g1

0x275b,	// (0x00080f74) list_medium_line_x2_t3_g3_g2_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_t3_g3_g2

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g3_g3_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0008da5c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0008da5c) list_medium_line_x2_t3_g3_g

0x038a,	// (0x0007eba3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x038a,	// (0x0007eba3) list_medium_line_x2_t3_g3_t1

0x039f,	// (0x0007ebb8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x039f,	// (0x0007ebb8) list_medium_line_x2_t3_g3_t2

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0008da63) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0008da63) list_medium_line_x2_t3_g3_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g2_g1

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g2_g2_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0008da6a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0008da6a) list_medium_line_x2_t3_g2_g

0x03c8,	// (0x0007ebe1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x03c8,	// (0x0007ebe1) list_medium_line_x2_t3_g2_t1

0x03de,	// (0x0007ebf7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x03de,	// (0x0007ebf7) list_medium_line_x2_t3_g2_t2

0x03f0,	// (0x0007ec09) list_medium_line_x2_t3_g2_t3_ParamLimits

0x03f0,	// (0x0007ec09) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0008da6f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0008da6f) list_medium_line_x2_t3_g2_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t4_g4_g1

0x2767,	// (0x00080f80) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2767,	// (0x00080f80) list_medium_line_x2_t4_g4_g2

0x275b,	// (0x00080f74) list_medium_line_x2_t4_g4_g3_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_t4_g4_g3

0x040d,	// (0x0007ec26) list_medium_line_x2_t4_g4_g4_ParamLimits

0x040d,	// (0x0007ec26) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0008da76) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0008da76) list_medium_line_x2_t4_g4_g

0x0419,	// (0x0007ec32) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0419,	// (0x0007ec32) list_medium_line_x2_t4_g4_t1

0x0433,	// (0x0007ec4c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0433,	// (0x0007ec4c) list_medium_line_x2_t4_g4_t2

0x0449,	// (0x0007ec62) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0449,	// (0x0007ec62) list_medium_line_x2_t4_g4_t3

0x045e,	// (0x0007ec77) list_medium_line_x2_t4_g4_t4_ParamLimits

0x045e,	// (0x0007ec77) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0008da7f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0008da7f) list_medium_line_x2_t4_g4_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g4_g1

0x2767,	// (0x00080f80) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2767,	// (0x00080f80) list_medium_line_x2_t2_g4_g2

0x275b,	// (0x00080f74) list_medium_line_x2_t2_g4_g3_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_t2_g4_g3

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g4_g4_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0008dae6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0008dae6) list_medium_line_x2_t2_g4_g

0x0470,	// (0x0007ec89) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0470,	// (0x0007ec89) list_medium_line_x2_t2_g4_t1

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0008daef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0008daef) list_medium_line_x2_t2_g4_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g3_g1

0x275b,	// (0x00080f74) list_medium_line_x2_t2_g3_g2_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_t2_g3_g2

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g3_g3_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0008da5c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0008da5c) list_medium_line_x2_t2_g3_g

0x0485,	// (0x0007ec9e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0485,	// (0x0007ec9e) list_medium_line_x2_t2_g3_t1

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0008daf4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0008daf4) list_medium_line_x2_t2_g3_t

0x3d42,	// (0x0008255b) main_sp_fs_list_pane_ParamLimits

0x3d42,	// (0x0008255b) main_sp_fs_list_pane

0xf045,	// (0x0008d85e) sp_fs_scroll_pane_ParamLimits

0xf045,	// (0x0008d85e) sp_fs_scroll_pane

0x049a,	// (0x0007ecb3) list_medium_line_x2_t3_t1

0x04aa,	// (0x0007ecc3) list_medium_line_x2_t3_t2

0x04b8,	// (0x0007ecd1) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0008db3f) list_medium_line_x2_t3_t

0x04c6,	// (0x0007ecdf) list_medium_line_x3_t4_t1

0x04d6,	// (0x0007ecef) list_medium_line_x3_t4_t2

0x04e4,	// (0x0007ecfd) list_medium_line_x3_t4_t3

0x04b8,	// (0x0007ecd1) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0008db46) list_medium_line_x3_t4_t

0x04f2,	// (0x0007ed0b) list_medium_line_x4_t5_t1

0x0502,	// (0x0007ed1b) list_medium_line_x4_t5_t2

0x04e4,	// (0x0007ecfd) list_medium_line_x4_t5_t3

0x0510,	// (0x0007ed29) list_medium_line_x4_t5_t4

0x04b8,	// (0x0007ecd1) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0008db4f) list_medium_line_x4_t5_t

0x0372,	// (0x0007eb8b) list_medium_line_t4_g4_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_t4_g4_g1

0x040d,	// (0x0007ec26) list_medium_line_t4_g4_g2_ParamLimits

0x040d,	// (0x0007ec26) list_medium_line_t4_g4_g2

0x051e,	// (0x0007ed37) list_medium_line_t4_g4_g3_ParamLimits

0x051e,	// (0x0007ed37) list_medium_line_t4_g4_g3

0x037e,	// (0x0007eb97) list_medium_line_t4_g4_g4_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0008db5a) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0008db5a) list_medium_line_t4_g4_g

0x052a,	// (0x0007ed43) list_medium_line_t4_g4_t1_ParamLimits

0x052a,	// (0x0007ed43) list_medium_line_t4_g4_t1

0x053f,	// (0x0007ed58) list_medium_line_t4_g4_t2_ParamLimits

0x053f,	// (0x0007ed58) list_medium_line_t4_g4_t2

0x0554,	// (0x0007ed6d) list_medium_line_t4_g4_t3_ParamLimits

0x0554,	// (0x0007ed6d) list_medium_line_t4_g4_t3

0x03b3,	// (0x0007ebcc) list_medium_line_t4_g4_t4_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0008db63) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0008db63) list_medium_line_t4_g4_t

0x3f52,	// (0x0008276b) chi_dic_find_pane_g1

0x5015,	// (0x0008382e) main_tport_pane

0x070e,	// (0x0007ef27) list_medium_line_plain_t1

0x071c,	// (0x0007ef35) list_medium_line_t2_g2_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t2_g2_g1

0x0728,	// (0x0007ef41) list_medium_line_t2_g2_g2_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0008e21f) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0008e21f) list_medium_line_t2_g2_g

0x0734,	// (0x0007ef4d) list_medium_line_t2_g2_t1_ParamLimits

0x0734,	// (0x0007ef4d) list_medium_line_t2_g2_t1

0x074e,	// (0x0007ef67) list_medium_line_t2_g2_t2_ParamLimits

0x074e,	// (0x0007ef67) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0008e224) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0008e224) list_medium_line_t2_g2_t

0xde2b,	// (0x0008c644) aid_sp_fs_list_icon_a_sm

0xe6fe,	// (0x0008cf17) aid_sp_fs_list_icon_d

0xe706,	// (0x0008cf1f) aid_sp_fs_text_primary

0xde33,	// (0x0008c64c) aid_sp_fs_text_secondary

0x838d,	// (0x00086ba6) list_medium_line

0x838d,	// (0x00086ba6) list_medium_line_g2

0x838d,	// (0x00086ba6) list_medium_line_g3

0x838d,	// (0x00086ba6) list_medium_line_plain

0x838d,	// (0x00086ba6) list_medium_line_plain_t2

0x838d,	// (0x00086ba6) list_medium_line_plain_t3

0x838d,	// (0x00086ba6) list_medium_line_right_icon

0x838d,	// (0x00086ba6) list_medium_line_right_iconx2

0x838d,	// (0x00086ba6) list_medium_line_t2

0x838d,	// (0x00086ba6) list_medium_line_t2_g2

0x838d,	// (0x00086ba6) list_medium_line_t2_g3

0x838d,	// (0x00086ba6) list_medium_line_t2_right_icon

0x838d,	// (0x00086ba6) list_medium_line_t2_right_iconx2

0x838d,	// (0x00086ba6) list_medium_line_t3

0x838d,	// (0x00086ba6) list_medium_line_t3_g2

0x838d,	// (0x00086ba6) list_medium_line_t3_g3

0x838d,	// (0x00086ba6) list_medium_line_t3_right_iconx2

0x8396,	// (0x00086baf) list_medium_line_t4_g4

0x838d,	// (0x00086ba6) list_medium_line_x2

0x838d,	// (0x00086ba6) list_medium_line_x2_t2_g2

0x838d,	// (0x00086ba6) list_medium_line_x2_t2_g3

0x838d,	// (0x00086ba6) list_medium_line_x2_t2_g4

0x838d,	// (0x00086ba6) list_medium_line_x2_t3

0x838d,	// (0x00086ba6) list_medium_line_x2_t3_g2

0x838d,	// (0x00086ba6) list_medium_line_x2_t3_g3

0x838d,	// (0x00086ba6) list_medium_line_x2_t3_g4

0x838d,	// (0x00086ba6) list_medium_line_x2_t4_g2

0x838d,	// (0x00086ba6) list_medium_line_x2_t4_g4

0x839f,	// (0x00086bb8) list_medium_line_x3

0x839f,	// (0x00086bb8) list_medium_line_x3_t4

0x839f,	// (0x00086bb8) list_medium_line_x3_t4_g4

0x8396,	// (0x00086baf) list_medium_line_x4_t4

0x8396,	// (0x00086baf) list_medium_line_x4_t4_g7

0x8396,	// (0x00086baf) list_medium_line_x4_t5

0x08d7,	// (0x0007f0f0) list_single_fs_dyc_pane_ParamLimits

0x08d7,	// (0x0007f0f0) list_single_fs_dyc_pane

0x0372,	// (0x0007eb8b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x4_t4_g7_g1

0x090f,	// (0x0007f128) list_medium_line_x4_t4_g7_g2_ParamLimits

0x090f,	// (0x0007f128) list_medium_line_x4_t4_g7_g2

0x8acc,	// (0x000872e5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8acc,	// (0x000872e5) list_medium_line_x4_t4_g7_g3

0x8adb,	// (0x000872f4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8adb,	// (0x000872f4) list_medium_line_x4_t4_g7_g4

0x091b,	// (0x0007f134) list_medium_line_x4_t4_g7_g5_ParamLimits

0x091b,	// (0x0007f134) list_medium_line_x4_t4_g7_g5

0x092a,	// (0x0007f143) list_medium_line_x4_t4_g7_g6_ParamLimits

0x092a,	// (0x0007f143) list_medium_line_x4_t4_g7_g6

0x0939,	// (0x0007f152) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0939,	// (0x0007f152) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0008e3ef) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0008e3ef) list_medium_line_x4_t4_g7_g

0x0945,	// (0x0007f15e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0945,	// (0x0007f15e) list_medium_line_x4_t4_g7_t1

0x095a,	// (0x0007f173) list_medium_line_x4_t4_g7_t2_ParamLimits

0x095a,	// (0x0007f173) list_medium_line_x4_t4_g7_t2

0x096f,	// (0x0007f188) list_medium_line_x4_t4_g7_t3_ParamLimits

0x096f,	// (0x0007f188) list_medium_line_x4_t4_g7_t3

0x0984,	// (0x0007f19d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0984,	// (0x0007f19d) list_medium_line_x4_t4_g7_t4

0x0996,	// (0x0007f1af) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0996,	// (0x0007f1af) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0008e3fe) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0008e3fe) list_medium_line_x4_t4_g7_t

0x09a8,	// (0x0007f1c1) list_single_dyc_row_pane_ParamLimits

0x09a8,	// (0x0007f1c1) list_single_dyc_row_pane

0x9629,	// (0x00087e42) call5_gesture_pane_ParamLimits

0x9629,	// (0x00087e42) call5_gesture_pane

0x967f,	// (0x00087e98) call5_windows_pane_ParamLimits

0x967f,	// (0x00087e98) call5_windows_pane

0x97a7,	// (0x00087fc0) call5_swipe_1_pane_cp_ParamLimits

0x97a7,	// (0x00087fc0) call5_swipe_1_pane_cp

0x97b3,	// (0x00087fcc) call5_swipe_2_pane_cp_ParamLimits

0x97b3,	// (0x00087fcc) call5_swipe_2_pane_cp

0xb5f0,	// (0x00089e09) call5_image_pane_cp

0x97bf,	// (0x00087fd8) popup_call5_audio_first_window_cp_ParamLimits

0x97bf,	// (0x00087fd8) popup_call5_audio_first_window_cp

0x96ea,	// (0x00087f03) call5_swipe_1_pane_g1_cp_ParamLimits

0x96ea,	// (0x00087f03) call5_swipe_1_pane_g1_cp

0x97cd,	// (0x00087fe6) call5_swipe_1_pane_g2_cp

0x9703,	// (0x00087f1c) call5_swipe_1_pane_t1_cp_ParamLimits

0x9703,	// (0x00087f1c) call5_swipe_1_pane_t1_cp

0x96ea,	// (0x00087f03) call5_swipe_2_pane_g1_cp_ParamLimits

0x96ea,	// (0x00087f03) call5_swipe_2_pane_g1_cp

0x97d5,	// (0x00087fee) call5_swipe_2_pane_g2_cp

0x97dd,	// (0x00087ff6) call5_swipe_2_pane_t1_cp_ParamLimits

0x97dd,	// (0x00087ff6) call5_swipe_2_pane_t1_cp

0xb1f7,	// (0x00089a10) main_sp_fs_email_pane

0x97f2,	// (0x0008800b) main_sp_fs_listscroll_pane_te

0x97fb,	// (0x00088014) popup_sp_fs_action_menu_pane_ParamLimits

0x97fb,	// (0x00088014) popup_sp_fs_action_menu_pane

0xcf5c,	// (0x0008b775) bg_sp_fs_ctrlbar_pane_g1

0x983f,	// (0x00088058) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9848,	// (0x00088061) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9851,	// (0x0008806a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcf5c,	// (0x0008b775) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0008e4ec) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcd41,	// (0x0008b55a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcd41,	// (0x0008b55a) bg_sp_fs_ctrlbar_ddmenu_pane

0x985a,	// (0x00088073) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x985a,	// (0x00088073) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9866,	// (0x0008807f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9866,	// (0x0008807f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0008e4f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0008e4f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0x9872,	// (0x0008808b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x9872,	// (0x0008808b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0a3e,	// (0x0007f257) list_medium_line_t2_right_icon_g1

0x0a46,	// (0x0007f25f) list_medium_line_t2_right_icon_t1

0x0a56,	// (0x0007f26f) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0008e4fa) list_medium_line_t2_right_icon_t

0xca41,	// (0x0008b25a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca41,	// (0x0008b25a) bg_sp_fs_ctrlbar_pane

0x990c,	// (0x00088125) main_sp_fs_ctrlbar_button_pane_cp01

0x9916,	// (0x0008812f) main_sp_fs_ctrlbar_ddmenu_pane

0x9920,	// (0x00088139) main_sp_fs_ctrlbar_pane_g1

0x992c,	// (0x00088145) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0008e4ff) main_sp_fs_ctrlbar_pane_g

0x9938,	// (0x00088151) main_sp_fs_ctrlbar_pane_t1

0x994d,	// (0x00088166) main_sp_fs_ctrlbar_pane

0x998c,	// (0x000881a5) main_sp_fs_listscroll_pane_te_cp01

0x0a68,	// (0x0007f281) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0a68,	// (0x0007f281) popup_sp_fs_action_menu_pane_cp01

0xb1f7,	// (0x00089a10) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb1f7,	// (0x00089a10) bg_sp_fs_highlight_list_pane_cp01

0xde3c,	// (0x0008c655) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde3c,	// (0x0008c655) sp_fs_action_menu_list_gene_pane_g1

0x99ac,	// (0x000881c5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x99ac,	// (0x000881c5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0008e509) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0008e509) sp_fs_action_menu_list_gene_pane_g

0xde4b,	// (0x0008c664) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xde4b,	// (0x0008c664) sp_fs_action_menu_list_gene_pane_t1

0xde63,	// (0x0008c67c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xde63,	// (0x0008c67c) sp_fs_action_menu_list_gene_pane

0x99b9,	// (0x000881d2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x99b9,	// (0x000881d2) popup_sp_fs_action_menu_bg_pane

0xde84,	// (0x0008c69d) sp_fs_action_menu_list_pane_ParamLimits

0xde84,	// (0x0008c69d) sp_fs_action_menu_list_pane

0xec1c,	// (0x0008d435) sp_fs_scroll_pane_cp01_ParamLimits

0xec1c,	// (0x0008d435) sp_fs_scroll_pane_cp01

0x0a98,	// (0x0007f2b1) list_medium_line_plain_t2_t1

0x0aa8,	// (0x0007f2c1) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0008e50e) list_medium_line_plain_t2_t

0x0ab8,	// (0x0007f2d1) list_medium_line_plain_t3_t1

0x0ac8,	// (0x0007f2e1) list_medium_line_plain_t3_t2

0x0ad6,	// (0x0007f2ef) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0008e513) list_medium_line_plain_t3_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t2_g2_g1

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g2_g2_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0008da6a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0008da6a) list_medium_line_x2_t2_g2_g

0x052a,	// (0x0007ed43) list_medium_line_x2_t2_g2_t1_ParamLimits

0x052a,	// (0x0007ed43) list_medium_line_x2_t2_g2_t1

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0008e51a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0008e51a) list_medium_line_x2_t2_g2_t

0x0372,	// (0x0007eb8b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t4_g2_g1

0x0ae4,	// (0x0007f2fd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0ae4,	// (0x0007f2fd) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0008e51f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0008e51f) list_medium_line_x2_t4_g2_g

0x0af6,	// (0x0007f30f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0af6,	// (0x0007f30f) list_medium_line_x2_t4_g2_t1

0x0b10,	// (0x0007f329) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b10,	// (0x0007f329) list_medium_line_x2_t4_g2_t2

0x0b25,	// (0x0007f33e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b25,	// (0x0007f33e) list_medium_line_x2_t4_g2_t3

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0008e524) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0008e524) list_medium_line_x2_t4_g2_t

0x0b3a,	// (0x0007f353) list_medium_line_t3_right_iconx2_g1

0x0a3e,	// (0x0007f257) list_medium_line_t3_right_iconx2_g2

0x0b42,	// (0x0007f35b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0008e52d) list_medium_line_t3_right_iconx2_g

0x0b4c,	// (0x0007f365) list_medium_line_t3_right_iconx2_t1

0x0b5c,	// (0x0007f375) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0008e534) list_medium_line_t3_right_iconx2_t

0x0372,	// (0x0007eb8b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x3_t4_g4_g1

0x275b,	// (0x00080f74) list_medium_line_x3_t4_g4_g2_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x3_t4_g4_g2

0x040d,	// (0x0007ec26) list_medium_line_x3_t4_g4_g3_ParamLimits

0x040d,	// (0x0007ec26) list_medium_line_x3_t4_g4_g3

0x99c7,	// (0x000881e0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x99c7,	// (0x000881e0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0008e539) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0008e539) list_medium_line_x3_t4_g4_g

0x0b6a,	// (0x0007f383) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0b6a,	// (0x0007f383) list_medium_line_x3_t4_g4_t1

0x0b81,	// (0x0007f39a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0b81,	// (0x0007f39a) list_medium_line_x3_t4_g4_t2

0x053f,	// (0x0007ed58) list_medium_line_x3_t4_g4_t3_ParamLimits

0x053f,	// (0x0007ed58) list_medium_line_x3_t4_g4_t3

0x0b9c,	// (0x0007f3b5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0b9c,	// (0x0007f3b5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0008e542) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0008e542) list_medium_line_x3_t4_g4_t

0x0bb9,	// (0x0007f3d2) list_single_dyc_row_text_pane_t1_ParamLimits

0x0bb9,	// (0x0007f3d2) list_single_dyc_row_text_pane_t1

0x0c02,	// (0x0007f41b) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c02,	// (0x0007f41b) list_single_dyc_row_text_pane_t2

0xdea6,	// (0x0008c6bf) list_single_dyc_row_text_pane_t3_ParamLimits

0xdea6,	// (0x0008c6bf) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0008e54b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0008e54b) list_single_dyc_row_text_pane_t

0xdeb8,	// (0x0008c6d1) list_single_dyc_row_pane_g1_ParamLimits

0xdeb8,	// (0x0008c6d1) list_single_dyc_row_pane_g1

0xdec4,	// (0x0008c6dd) list_single_dyc_row_pane_g2_ParamLimits

0xdec4,	// (0x0008c6dd) list_single_dyc_row_pane_g2

0xded0,	// (0x0008c6e9) list_single_dyc_row_pane_g3_ParamLimits

0xded0,	// (0x0008c6e9) list_single_dyc_row_pane_g3

0xdedc,	// (0x0008c6f5) list_single_dyc_row_pane_g4_ParamLimits

0xdedc,	// (0x0008c6f5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0008e552) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0008e552) list_single_dyc_row_pane_g

0xdee8,	// (0x0008c701) list_single_dyc_row_text_pane_ParamLimits

0xdee8,	// (0x0008c701) list_single_dyc_row_text_pane

0xec57,	// (0x0008d470) bg_sp_fs_scroll_pane

0x99d3,	// (0x000881ec) thumb_sp_fs_scroll_pane

0x071c,	// (0x0007ef35) list_medium_line_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_g1

0x0c5c,	// (0x0007f475) list_medium_line_t1_ParamLimits

0x0c5c,	// (0x0007f475) list_medium_line_t1

0x0372,	// (0x0007eb8b) list_medium_line_x2_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_g1

0x275b,	// (0x00080f74) list_medium_line_x2_g2_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0008e55b) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0008e55b) list_medium_line_x2_g

0xdf07,	// (0x0008c720) list_medium_line_x2_t1_ParamLimits

0xdf07,	// (0x0008c720) list_medium_line_x2_t1

0x0372,	// (0x0007eb8b) list_medium_line_x3_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x3_g1

0x275b,	// (0x00080f74) list_medium_line_x3_g2_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0008e55b) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0008e55b) list_medium_line_x3_g

0xdf07,	// (0x0008c720) list_medium_line_x3_t1_ParamLimits

0xdf07,	// (0x0008c720) list_medium_line_x3_t1

0x99dc,	// (0x000881f5) thumb_sp_fs_scroll_pane_g1

0x99e5,	// (0x000881fe) thumb_sp_fs_scroll_pane_g2

0x99ee,	// (0x00088207) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008e560) thumb_sp_fs_scroll_pane_g

0x99dc,	// (0x000881f5) bg_sp_fs_scroll_pane_g1

0x99e5,	// (0x000881fe) bg_sp_fs_scroll_pane_g2

0x99ee,	// (0x00088207) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008e560) bg_sp_fs_scroll_pane_g

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0372,	// (0x0007eb8b) list_medium_line_x2_t3_g4_g1

0x2767,	// (0x00080f80) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2767,	// (0x00080f80) list_medium_line_x2_t3_g4_g2

0x275b,	// (0x00080f74) list_medium_line_x2_t3_g4_g3_ParamLimits

0x275b,	// (0x00080f74) list_medium_line_x2_t3_g4_g3

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g4_g4_ParamLimits

0x037e,	// (0x0007eb97) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0008dae6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0008dae6) list_medium_line_x2_t3_g4_g

0x0c71,	// (0x0007f48a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c71,	// (0x0007f48a) list_medium_line_x2_t3_g4_t1

0x0c8b,	// (0x0007f4a4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c8b,	// (0x0007f4a4) list_medium_line_x2_t3_g4_t2

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x03b3,	// (0x0007ebcc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0008e567) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0008e567) list_medium_line_x2_t3_g4_t

0x071c,	// (0x0007ef35) list_medium_line_g2_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_g2_g1

0x0728,	// (0x0007ef41) list_medium_line_g2_g2_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0008e21f) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0008e21f) list_medium_line_g2_g

0x0ca5,	// (0x0007f4be) list_medium_line_g2_t1_ParamLimits

0x0ca5,	// (0x0007f4be) list_medium_line_g2_t1

0x071c,	// (0x0007ef35) list_medium_line_t3_g2_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t3_g2_g1

0x0728,	// (0x0007ef41) list_medium_line_t3_g2_g2_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0008e21f) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0008e21f) list_medium_line_t3_g2_g

0x0cba,	// (0x0007f4d3) list_medium_line_t3_g2_t1_ParamLimits

0x0cba,	// (0x0007f4d3) list_medium_line_t3_g2_t1

0x0cd1,	// (0x0007f4ea) list_medium_line_t3_g2_t2_ParamLimits

0x0cd1,	// (0x0007f4ea) list_medium_line_t3_g2_t2

0x0ce6,	// (0x0007f4ff) list_medium_line_t3_g2_t3_ParamLimits

0x0ce6,	// (0x0007f4ff) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0008e56e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0008e56e) list_medium_line_t3_g2_t

0x0a3e,	// (0x0007f257) list_medium_line_right_icon_g1

0x0cff,	// (0x0007f518) list_medium_line_right_icon_t1

0x071c,	// (0x0007ef35) list_medium_line_t2_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t2_g1

0x0d0d,	// (0x0007f526) list_medium_line_t2_t1_ParamLimits

0x0d0d,	// (0x0007f526) list_medium_line_t2_t1

0x0d27,	// (0x0007f540) list_medium_line_t2_t2_ParamLimits

0x0d27,	// (0x0007f540) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0008e575) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0008e575) list_medium_line_t2_t

0x071c,	// (0x0007ef35) list_medium_line_t3_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t3_g1

0x0d40,	// (0x0007f559) list_medium_line_t3_t1_ParamLimits

0x0d40,	// (0x0007f559) list_medium_line_t3_t1

0x0d5a,	// (0x0007f573) list_medium_line_t3_t2_ParamLimits

0x0d5a,	// (0x0007f573) list_medium_line_t3_t2

0x0d6f,	// (0x0007f588) list_medium_line_t3_t3_ParamLimits

0x0d6f,	// (0x0007f588) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0008e57a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0008e57a) list_medium_line_t3_t

0x071c,	// (0x0007ef35) list_medium_line_g3_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_g3_g1

0x0d84,	// (0x0007f59d) list_medium_line_g3_g2_ParamLimits

0x0d84,	// (0x0007f59d) list_medium_line_g3_g2

0x0728,	// (0x0007ef41) list_medium_line_g3_g3_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0008e581) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0008e581) list_medium_line_g3_g

0x0d90,	// (0x0007f5a9) list_medium_line_g3_t1_ParamLimits

0x0d90,	// (0x0007f5a9) list_medium_line_g3_t1

0x071c,	// (0x0007ef35) list_medium_line_t2_g3_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t2_g3_g1

0x0d84,	// (0x0007f59d) list_medium_line_t2_g3_g2_ParamLimits

0x0d84,	// (0x0007f59d) list_medium_line_t2_g3_g2

0x0728,	// (0x0007ef41) list_medium_line_t2_g3_g3_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0008e581) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0008e581) list_medium_line_t2_g3_g

0x0da5,	// (0x0007f5be) list_medium_line_t2_g3_t1_ParamLimits

0x0da5,	// (0x0007f5be) list_medium_line_t2_g3_t1

0x0dbf,	// (0x0007f5d8) list_medium_line_t2_g3_t2_ParamLimits

0x0dbf,	// (0x0007f5d8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0008e588) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0008e588) list_medium_line_t2_g3_t

0x071c,	// (0x0007ef35) list_medium_line_t3_g3_g1_ParamLimits

0x071c,	// (0x0007ef35) list_medium_line_t3_g3_g1

0x0d84,	// (0x0007f59d) list_medium_line_t3_g3_g2_ParamLimits

0x0d84,	// (0x0007f59d) list_medium_line_t3_g3_g2

0x0728,	// (0x0007ef41) list_medium_line_t3_g3_g3_ParamLimits

0x0728,	// (0x0007ef41) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0008e581) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0008e581) list_medium_line_t3_g3_g

0x0dda,	// (0x0007f5f3) list_medium_line_t3_g3_t1_ParamLimits

0x0dda,	// (0x0007f5f3) list_medium_line_t3_g3_t1

0x0dee,	// (0x0007f607) list_medium_line_t3_g3_t2_ParamLimits

0x0dee,	// (0x0007f607) list_medium_line_t3_g3_t2

0x0e00,	// (0x0007f619) list_medium_line_t3_g3_t3_ParamLimits

0x0e00,	// (0x0007f619) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0008e58d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0008e58d) list_medium_line_t3_g3_t

0x0b3a,	// (0x0007f353) list_medium_line_right_iconx2_g1

0x0a3e,	// (0x0007f257) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008e594) list_medium_line_right_iconx2_g

0x0e14,	// (0x0007f62d) list_medium_line_right_iconx2_t1

0x0b3a,	// (0x0007f353) list_medium_line_t2_right_iconx2_g1

0x0a3e,	// (0x0007f257) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008e594) list_medium_line_t2_right_iconx2_g

0x0e22,	// (0x0007f63b) list_medium_line_t2_right_iconx2_t1

0x0e32,	// (0x0007f64b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0008e599) list_medium_line_t2_right_iconx2_t

0x0e44,	// (0x0007f65d) list_medium_line_x4_t4_t1

0x0e52,	// (0x0007f66b) list_medium_line_x4_t4_t2

0x0e62,	// (0x0007f67b) list_medium_line_x4_t4_t3

0x0e72,	// (0x0007f68b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0008e59e) list_medium_line_x4_t4_t

0x9a3a,	// (0x00088253) tport_appsw_pane_ParamLimits

0x9a3a,	// (0x00088253) tport_appsw_pane

0x9a52,	// (0x0008826b) tport_contact_pane_ParamLimits

0x9a52,	// (0x0008826b) tport_contact_pane

0x9a6a,	// (0x00088283) tport_listscroll_pane_ParamLimits

0x9a6a,	// (0x00088283) tport_listscroll_pane

0x9a84,	// (0x0008829d) cell_tport_appsw_pane_ParamLimits

0x9a84,	// (0x0008829d) cell_tport_appsw_pane

0xe145,	// (0x0008c95e) tport_appsw_pane_g1_ParamLimits

0xe145,	// (0x0008c95e) tport_appsw_pane_g1

0x9ac4,	// (0x000882dd) tport_contact_pane_g1

0x8d17,	// (0x00087530) tport_contact_pane_t1

0x9acd,	// (0x000882e6) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0008e5a7) tport_contact_pane_t

0x9adb,	// (0x000882f4) list_tport_pane

0x9ae4,	// (0x000882fd) scroll_pane_cp_030

0x9af5,	// (0x0008830e) cell_tport_appsw_pane_g1

0x9b05,	// (0x0008831e) cell_tport_appsw_pane_t1

0xec57,	// (0x0008d470) grid_highlight_pane_cp019

0x9b13,	// (0x0008832c) list_tport_double_graphic_pane_ParamLimits

0x9b13,	// (0x0008832c) list_tport_double_graphic_pane

0xb1f7,	// (0x00089a10) list_highlight_pane_cp023_ParamLimits

0xb1f7,	// (0x00089a10) list_highlight_pane_cp023

0x9b20,	// (0x00088339) list_tport_double_graphic_pane_g1_ParamLimits

0x9b20,	// (0x00088339) list_tport_double_graphic_pane_g1

0x9b2d,	// (0x00088346) list_tport_double_graphic_pane_t1_ParamLimits

0x9b2d,	// (0x00088346) list_tport_double_graphic_pane_t1

0x9b42,	// (0x0008835b) list_tport_double_graphic_pane_t2_ParamLimits

0x9b42,	// (0x0008835b) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0008e5b3) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0008e5b3) list_tport_double_graphic_pane_t

0xec57,	// (0x0008d470) main_cale_note_pane

0x76e1,	// (0x00085efa) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x76e1,	// (0x00085efa) cell_vitu2_function_top_wide_pane_cp01

0x90bb,	// (0x000878d4) wait_bar_pane_cp05_ParamLimits

0xb1f7,	// (0x00089a10) listscroll_cmail_pane

0x9b54,	// (0x0008836d) list_cmail_pane

0xe39f,	// (0x0008cbb8) list_cmail_body_pane

0x9b64,	// (0x0008837d) list_single_cmail_header_caption_pane

0x9b7a,	// (0x00088393) list_single_cmail_header_detail_pane_ParamLimits

0x9b7a,	// (0x00088393) list_single_cmail_header_detail_pane

0x9ba3,	// (0x000883bc) list_single_cmail_header_caption_pane_t1

0x0e82,	// (0x0007f69b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e82,	// (0x0007f69b) list_single_cmail_header_detail_pane_g1

0xec42,	// (0x0008d45b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xec42,	// (0x0008d45b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0008e5b8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0008e5b8) list_single_cmail_header_detail_pane_g

0x0e9a,	// (0x0007f6b3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0e9a,	// (0x0007f6b3) list_single_cmail_header_detail_pane_t1

0x0ed8,	// (0x0007f6f1) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0ed8,	// (0x0007f6f1) list_single_cmail_header_editor_pane_bg

0x8f27,	// (0x00087740) list_cmail_body_pane_g1

0x9bc9,	// (0x000883e2) list_cmail_body_pane_t1

0xe165,	// (0x0008c97e) list_single_cmail_header_editor_pane_bg_g1

0x2dc7,	// (0x000815e0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe175,	// (0x0008c98e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe16d,	// (0x0008c986) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe3ec,	// (0x0008cc05) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe195,	// (0x0008c9ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe185,	// (0x0008c99e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe18d,	// (0x0008c9a6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2da7,	// (0x000815c0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9bd7,	// (0x000883f0) calenote_gesture_pane_ParamLimits

0x9bd7,	// (0x000883f0) calenote_gesture_pane

0x9bf7,	// (0x00088410) calenote_window_pane_ParamLimits

0x9bf7,	// (0x00088410) calenote_window_pane

0x9c13,	// (0x0008842c) popup_note_window_cp01

0x9c1c,	// (0x00088435) calenote_swipe_1_pane_ParamLimits

0x9c1c,	// (0x00088435) calenote_swipe_1_pane

0x97b3,	// (0x00087fcc) calenote_swipe_2_pane_ParamLimits

0x97b3,	// (0x00087fcc) calenote_swipe_2_pane

0x96ea,	// (0x00087f03) calenote_swipe_1_pane_g1_ParamLimits

0x96ea,	// (0x00087f03) calenote_swipe_1_pane_g1

0x96f7,	// (0x00087f10) calenote_swipe_1_pane_g2_ParamLimits

0x96f7,	// (0x00087f10) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0008e4e2) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0008e4e2) calenote_swipe_1_pane_g

0x9c3a,	// (0x00088453) calenote_swipe_1_pane_t1_ParamLimits

0x9c3a,	// (0x00088453) calenote_swipe_1_pane_t1

0x96ea,	// (0x00087f03) calenote_swipe_2_pane_g1_ParamLimits

0x96ea,	// (0x00087f03) calenote_swipe_2_pane_g1

0x9c59,	// (0x00088472) calenote_swipe_2_pane_g2_ParamLimits

0x9c59,	// (0x00088472) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0008e5c4) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0008e5c4) calenote_swipe_2_pane_g

0x9c65,	// (0x0008847e) calenote_swipe_2_pane_t1_ParamLimits

0x9c65,	// (0x0008847e) calenote_swipe_2_pane_t1

0xec57,	// (0x0008d470) main_mup_navstr_pane

0x63bc,	// (0x00084bd5) main_mup3_pane_t7_ParamLimits

0x63bc,	// (0x00084bd5) main_mup3_pane_t7

0xd8fd,	// (0x0008c116) main_mp4_pane_g6_ParamLimits

0xd8fd,	// (0x0008c116) main_mp4_pane_g6

0xdb25,	// (0x0008c33e) main_image3_pane_t4_ParamLimits

0xdb25,	// (0x0008c33e) main_image3_pane_t4

0x9c8c,	// (0x000884a5) popup_navstr_preview_pane_ParamLimits

0x9c8c,	// (0x000884a5) popup_navstr_preview_pane

0x9ca0,	// (0x000884b9) scroll_navstr_pane_ParamLimits

0x9ca0,	// (0x000884b9) scroll_navstr_pane

0xec57,	// (0x0008d470) bg_popup_preview_window_pane_cp04

0x9cb4,	// (0x000884cd) popup_navstr_preview_pane_t1

0x9cc2,	// (0x000884db) scroll_navstr_pane_g1_ParamLimits

0x9cc2,	// (0x000884db) scroll_navstr_pane_g1

0x9cd6,	// (0x000884ef) scroll_navstr_pane_t1_ParamLimits

0x9cd6,	// (0x000884ef) scroll_navstr_pane_t1

0x9c31,	// (0x0008844a) bg_button_pane_cp014

0x9c31,	// (0x0008844a) bg_button_pane_cp030

0x09e4,	// (0x0007f1fd) list_double_fisheye_pane_g4_ParamLimits

0x09e4,	// (0x0007f1fd) list_double_fisheye_pane_g4

0x09f0,	// (0x0007f209) list_double_fisheye_pane_g5_ParamLimits

0x09f0,	// (0x0007f209) list_double_fisheye_pane_g5

0xf045,	// (0x0008d85e) sp_fs_scroll_pane_cp03

0x9920,	// (0x00088139) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x992c,	// (0x00088145) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0008e4ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9938,	// (0x00088151) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9b5c,	// (0x00088375) sp_fs_scroll_pane_cp02

0x1cd6,	// (0x000804ef) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1cd6,	// (0x000804ef) popup_sp_fs_calendar_preview_list_single_pane

0xec57,	// (0x0008d470) main_cam6_pano_pane

0xb1f7,	// (0x00089a10) main_mup3_pane_ParamLimits

0xec57,	// (0x0008d470) main_phacti_pane

0x8f8e,	// (0x000877a7) bg_button_pane_cp11

0x8fa8,	// (0x000877c1) main_mobtv_info_pane_g2_ParamLimits

0x8fa8,	// (0x000877c1) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0008e45f) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0008e45f) main_mobtv_info_pane_g

0x922b,	// (0x00087a44) sc_clock_pane_t5_ParamLimits

0x922b,	// (0x00087a44) sc_clock_pane_t5

0x940e,	// (0x00087c27) main_radioblah_pane_g1_ParamLimits

0x9454,	// (0x00087c6d) main_radioblah_pane_t3_ParamLimits

0x9454,	// (0x00087c6d) main_radioblah_pane_t3

0x946c,	// (0x00087c85) main_radioblah_pane_t4_ParamLimits

0x946c,	// (0x00087c85) main_radioblah_pane_t4

0x949a,	// (0x00087cb3) main_radioblah_text_pane_ParamLimits

0x949a,	// (0x00087cb3) main_radioblah_text_pane

0x94ac,	// (0x00087cc5) main_radioblah_info_pane_g1_ParamLimits

0x957f,	// (0x00087d98) main_radioblah_info_pane_t4_ParamLimits

0x957f,	// (0x00087d98) main_radioblah_info_pane_t4

0xb1f7,	// (0x00089a10) main_sp_fs_calendar_pane

0x9ced,	// (0x00088506) main_phacti_pane_g1

0x9cfe,	// (0x00088517) phacti_note_pane_ParamLimits

0x9cfe,	// (0x00088517) phacti_note_pane

0x9d12,	// (0x0008852b) phacti_term_pane_ParamLimits

0x9d12,	// (0x0008852b) phacti_term_pane

0x9d27,	// (0x00088540) phacti_note_pane_t1_ParamLimits

0x9d27,	// (0x00088540) phacti_note_pane_t1

0xdf41,	// (0x0008c75a) phacti_term_pane_g1

0xdf49,	// (0x0008c762) phacti_term_pane_t1_ParamLimits

0xdf49,	// (0x0008c762) phacti_term_pane_t1

0x9d3e,	// (0x00088557) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2753,	// (0x00080f6c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0008e5ce) popup_sp_fs_calendar_preview_list_single_pane_g

0x9d46,	// (0x0008855f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9d46,	// (0x0008855f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9d5b,	// (0x00088574) aid_popup_sp_fs_bg_corner_pane

0xcf5c,	// (0x0008b775) popup_sp_fs_calendar_preview_bg_pane_g1

0xec57,	// (0x0008d470) popup_sp_fs_calendar_preview_bg_pane

0x9d63,	// (0x0008857c) popup_sp_fs_calendar_preview_list_pane

0xca41,	// (0x0008b25a) bg_main_sp_fs_cale_pane_ParamLimits

0xca41,	// (0x0008b25a) bg_main_sp_fs_cale_pane

0xdf73,	// (0x0008c78c) listscroll_cale_mrui_pane_ParamLimits

0xdf73,	// (0x0008c78c) listscroll_cale_mrui_pane

0xdf88,	// (0x0008c7a1) listscroll_sp_fs_schedule_track_pane

0xdf91,	// (0x0008c7aa) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdf91,	// (0x0008c7aa) main_sp_fs_ctrlbar_pane_cp01

0x9dcc,	// (0x000885e5) main_sp_fs_ribbon_pane

0xdfa4,	// (0x0008c7bd) popup_sp_fs_cale_preview_window

0x9dd4,	// (0x000885ed) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9dd4,	// (0x000885ed) list_single_sp_fs_schedule_track_pane

0xb1f7,	// (0x00089a10) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb1f7,	// (0x00089a10) bg_sp_fs_highlight_list_pane_cp03

0x9de7,	// (0x00088600) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9de7,	// (0x00088600) list_single_sp_fs_schedule_track_pane_g1

0x9df3,	// (0x0008860c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9df3,	// (0x0008860c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0008e5d3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0008e5d3) list_single_sp_fs_schedule_track_pane_g

0x9dff,	// (0x00088618) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9dff,	// (0x00088618) list_single_sp_fs_schedule_track_pane_t1

0x9e19,	// (0x00088632) sp_fs_schedule_track_pane_ParamLimits

0x9e19,	// (0x00088632) sp_fs_schedule_track_pane

0x9e2a,	// (0x00088643) sp_fs_schedule_track_pane_g1

0x9e32,	// (0x0008864b) sp_fs_schedule_track_pane_g2

0x9e3a,	// (0x00088653) sp_fs_schedule_track_pane_g3

0x9e42,	// (0x0008865b) sp_fs_schedule_track_pane_g4

0x9e4a,	// (0x00088663) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0008e5d8) sp_fs_schedule_track_pane_g

0xe165,	// (0x0008c97e) bg_sp_fs_schedule_viewer_highlight_g1

0x2dc7,	// (0x000815e0) bg_sp_fs_schedule_viewer_highlight_g2

0xe16d,	// (0x0008c986) bg_sp_fs_schedule_viewer_highlight_g3

0xe175,	// (0x0008c98e) bg_sp_fs_schedule_viewer_highlight_g4

0xe3ec,	// (0x0008cc05) bg_sp_fs_schedule_viewer_highlight_g5

0xe185,	// (0x0008c99e) bg_sp_fs_schedule_viewer_highlight_g6

0xe18d,	// (0x0008c9a6) bg_sp_fs_schedule_viewer_highlight_g7

0xe195,	// (0x0008c9ae) bg_sp_fs_schedule_viewer_highlight_g8

0x2da7,	// (0x000815c0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0008e5e3) bg_sp_fs_schedule_viewer_highlight_g

0xec57,	// (0x0008d470) bg_main_sp_fs_ribbon_pane

0x9e52,	// (0x0008866b) main_sp_fs_ribbon_pane_g1

0x9e5b,	// (0x00088674) main_sp_fs_ribbon_pane_t1

0x9e6a,	// (0x00088683) main_sp_fs_ribbon_pane_t2

0x9e79,	// (0x00088692) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0008e5f6) main_sp_fs_ribbon_pane_t

0x9e88,	// (0x000886a1) main_sp_fs_ribbon_scheduler_pane

0x9e90,	// (0x000886a9) bg_main_sp_fs_ribbon_pane_g1

0x9e99,	// (0x000886b2) bg_main_sp_fs_ribbon_pane_g2

0x9ea2,	// (0x000886bb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0008e5fd) bg_main_sp_fs_ribbon_pane_g

0x9eaa,	// (0x000886c3) main_sp_fs_ribbon_scheduler_pane_g1

0x9eb3,	// (0x000886cc) main_sp_fs_ribbon_scheduler_pane_g2

0x9ebc,	// (0x000886d5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0008e604) main_sp_fs_ribbon_scheduler_pane_g

0x9ec5,	// (0x000886de) list_cale_mrui_pane

0x9ed2,	// (0x000886eb) sp_fs_scroll_pane_cp07_ParamLimits

0x9ed2,	// (0x000886eb) sp_fs_scroll_pane_cp07

0x9eee,	// (0x00088707) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9eee,	// (0x00088707) bg_sp_fs_schedule_viewer_highlight

0x9efe,	// (0x00088717) list_single_sp_fs_schedule_track_pane_cp01

0x9f06,	// (0x0008871f) list_sp_fs_schedule_track_pane

0x9f0e,	// (0x00088727) sp_fs_scroll_pane_cp06_ParamLimits

0x9f0e,	// (0x00088727) sp_fs_scroll_pane_cp06

0xcf5c,	// (0x0008b775) bgmain_sp_fs_calendar_pane_g1

0x0ef1,	// (0x0007f70a) list_single_cale_mrui_pane_ParamLimits

0x0ef1,	// (0x0007f70a) list_single_cale_mrui_pane

0xdfb6,	// (0x0008c7cf) list_single_cale_mrui_row_pane_ParamLimits

0xdfb6,	// (0x0008c7cf) list_single_cale_mrui_row_pane

0xdfc3,	// (0x0008c7dc) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdfc3,	// (0x0008c7dc) list_single_cale_mrui_row_pane_g1

0xdffb,	// (0x0008c814) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdffb,	// (0x0008c814) list_single_cale_mrui_row_pane_t1

0x0f12,	// (0x0007f72b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f12,	// (0x0007f72b) list_single_cale_mrui_row_pane_t2

0xe00d,	// (0x0008c826) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe00d,	// (0x0008c826) list_single_cale_mrui_row_pane_t3

0xe03c,	// (0x0008c855) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe03c,	// (0x0008c855) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0008e612) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0008e612) list_single_cale_mrui_row_pane_t

0x0f7a,	// (0x0007f793) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f7a,	// (0x0007f793) list_single_cmail_header_editor_pane_bg_cp01

0x0fa0,	// (0x0007f7b9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0fa0,	// (0x0007f7b9) list_single_cmail_header_editor_pane_bg_cp02

0x9f2d,	// (0x00088746) main_radioblah_text_pane_t1_ParamLimits

0x9f2d,	// (0x00088746) main_radioblah_text_pane_t1

0x9f47,	// (0x00088760) cam6_indi_pane_cp01

0x9f4f,	// (0x00088768) cam6_mode_pane_cp01

0x9f57,	// (0x00088770) cam6_pano_pane

0x9f60,	// (0x00088779) cam6_zoom_pane_cp01

0x9f68,	// (0x00088781) cam6_pano_image_pane

0x9f73,	// (0x0008878c) cam6_pano_pane_g1

0x8f27,	// (0x00087740) cam6_pano_pane_g2

0x9f7c,	// (0x00088795) cam6_pano_pane_g3

0x9f85,	// (0x0008879e) cam6_pano_pane_g4

0xd560,	// (0x0008bd79) cam6_pano_pane_g5

0x9f8e,	// (0x000887a7) cam6_pano_pane_g6

0x9f98,	// (0x000887b1) cam6_pano_pane_g7

0x9fa0,	// (0x000887b9) cam6_pano_pane_g8

0x9fa9,	// (0x000887c2) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0008e61b) cam6_pano_pane_g

0xec57,	// (0x0008d470) main_browser_tag_pane

0x9c84,	// (0x0008849d) grid_navstr_albumart_pane

0x9fb4,	// (0x000887cd) cell_navstr_albumart_pane_ParamLimits

0x9fb4,	// (0x000887cd) cell_navstr_albumart_pane

0x9fd4,	// (0x000887ed) cell_navstr_albumart_pane_g1

0xc852,	// (0x0008b06b) cell_navstr_albumart_pane_g2

0xc862,	// (0x0008b07b) cell_navstr_albumart_pane_g3

0xc85a,	// (0x0008b073) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0008e62e) cell_navstr_albumart_pane_g

0x9fdc,	// (0x000887f5) bt_list_pane_ParamLimits

0x9fdc,	// (0x000887f5) bt_list_pane

0x9ff0,	// (0x00088809) bt_list_pane_t1

0x9fff,	// (0x00088818) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0008e637) bt_list_pane_t

0xec57,	// (0x0008d470) main_cale_prevew_pane

0xa00e,	// (0x00088827) popup_cale_preview_window_ParamLimits

0xa00e,	// (0x00088827) popup_cale_preview_window

0xb1f7,	// (0x00089a10) bg_popup_preview_window_pane_cp05_ParamLimits

0xb1f7,	// (0x00089a10) bg_popup_preview_window_pane_cp05

0xa029,	// (0x00088842) list_cale_preview_pane_ParamLimits

0xa029,	// (0x00088842) list_cale_preview_pane

0xa035,	// (0x0008884e) list_double_cale_preview_pane_ParamLimits

0xa035,	// (0x0008884e) list_double_cale_preview_pane

0xa047,	// (0x00088860) list_single_cale_preview_pane_ParamLimits

0xa047,	// (0x00088860) list_single_cale_preview_pane

0xa05d,	// (0x00088876) list_single_cale_preview_pane_g1

0xa065,	// (0x0008887e) list_single_cale_preview_pane_t1_ParamLimits

0xa065,	// (0x0008887e) list_single_cale_preview_pane_t1

0xa07a,	// (0x00088893) list_double_cale_preview_pane_g1

0xa082,	// (0x0008889b) list_double_cale_preview_pane_t1_ParamLimits

0xa082,	// (0x0008889b) list_double_cale_preview_pane_t1

0xa097,	// (0x000888b0) list_double_cale_preview_pane_t2_ParamLimits

0xa097,	// (0x000888b0) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0008e63c) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0008e63c) list_double_cale_preview_pane_t

0xec57,	// (0x0008d470) main_ezdial_pane

0xb1f7,	// (0x00089a10) main_sp_fs_email_pane_ParamLimits

0x988c,	// (0x000880a5) cmail_ddmenu_btn01_pane_ParamLimits

0x988c,	// (0x000880a5) cmail_ddmenu_btn01_pane

0x989f,	// (0x000880b8) cmail_ddmenu_btn02_pane_ParamLimits

0x989f,	// (0x000880b8) cmail_ddmenu_btn02_pane

0x98fa,	// (0x00088113) cmail_ddmenu_btn03_pane_ParamLimits

0x98fa,	// (0x00088113) cmail_ddmenu_btn03_pane

0x994d,	// (0x00088166) main_sp_fs_ctrlbar_pane_ParamLimits

0x998c,	// (0x000881a5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe39f,	// (0x0008cbb8) list_cmail_body_pane_ParamLimits

0x9bb1,	// (0x000883ca) bg_button_pane_cp12

0x9bbc,	// (0x000883d5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x9bbc,	// (0x000883d5) list_single_cmail_header_detail_pane_g3

0xdf1d,	// (0x0008c736) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdf1d,	// (0x0008c736) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0008e5bf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0008e5bf) list_single_cmail_header_detail_pane_t

0xdf5e,	// (0x0008c777) phacti_term_pane_t2_ParamLimits

0xdf5e,	// (0x0008c777) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0008e5c9) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0008e5c9) phacti_term_pane_t

0xa0af,	// (0x000888c8) aid_size_list_single_double

0xa0bb,	// (0x000888d4) popup_ezdial_listscroll_window

0xa0d7,	// (0x000888f0) popup_number_entry_window_cp01

0xb5f0,	// (0x00089e09) bg_popup_call_pane_cp09

0xa0e5,	// (0x000888fe) ezdial_list_pane

0xa0ed,	// (0x00088906) scroll_pane_cp23

0xca41,	// (0x0008b25a) bg_button_pane_cp028_ParamLimits

0xca41,	// (0x0008b25a) bg_button_pane_cp028

0xa0f5,	// (0x0008890e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa0f5,	// (0x0008890e) cmail_ddmenu_btn01_pane_g1

0xa101,	// (0x0008891a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa101,	// (0x0008891a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008e641) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008e641) cmail_ddmenu_btn01_pane_g

0xa10d,	// (0x00088926) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xa10d,	// (0x00088926) cmail_ddmenu_btn01_pane_t1

0xca41,	// (0x0008b25a) bg_button_pane_cp029_ParamLimits

0xca41,	// (0x0008b25a) bg_button_pane_cp029

0xa122,	// (0x0008893b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa122,	// (0x0008893b) cmail_ddmenu_btn02_pane_g1

0xa13a,	// (0x00088953) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa13a,	// (0x00088953) cmail_ddmenu_btn02_pane_t1

0xb1f7,	// (0x00089a10) bg_button_pane_cp031_ParamLimits

0xb1f7,	// (0x00089a10) bg_button_pane_cp031

0xa122,	// (0x0008893b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa122,	// (0x0008893b) cmail_ddmenu_btn03_pane_g1

0xa13a,	// (0x00088953) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa13a,	// (0x00088953) cmail_ddmenu_btn03_pane_t1

0x6f65,	// (0x0008577e) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f7f,	// (0x00085798) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f7f,	// (0x00085798) cell_dialer2_keypad_pane_t1_copy1

0x8b59,	// (0x00087372) ncimui_group_button_pane

0xb1f7,	// (0x00089a10) main_sp_fs_calendar_pane_ParamLimits

0x9b64,	// (0x0008837d) list_single_cmail_header_caption_pane_ParamLimits

0xec4e,	// (0x0008d467) aid_recal_txt_sm_pane

0xec57,	// (0x0008d470) mian_recal_day_pane

0xdfa4,	// (0x0008c7bd) popup_sp_fs_cale_preview_window_ParamLimits

0xa15e,	// (0x00088977) list_recal_day_pane

0xe087,	// (0x0008c8a0) list_single_recal_day_pane_ParamLimits

0xe087,	// (0x0008c8a0) list_single_recal_day_pane

0xa185,	// (0x0008899e) list_single_recal_day_pane_g1_ParamLimits

0xa185,	// (0x0008899e) list_single_recal_day_pane_g1

0xe099,	// (0x0008c8b2) list_single_recal_day_pane_g2_ParamLimits

0xe099,	// (0x0008c8b2) list_single_recal_day_pane_g2

0xe0a9,	// (0x0008c8c2) list_single_recal_day_pane_g3_ParamLimits

0xe0a9,	// (0x0008c8c2) list_single_recal_day_pane_g3

0x0fc0,	// (0x0007f7d9) list_single_recal_day_pane_g4_ParamLimits

0x0fc0,	// (0x0007f7d9) list_single_recal_day_pane_g4

0xe0b5,	// (0x0008c8ce) list_single_recal_day_pane_g5_ParamLimits

0xe0b5,	// (0x0008c8ce) list_single_recal_day_pane_g5

0xe0c5,	// (0x0008c8de) list_single_recal_day_pane_g6_ParamLimits

0xe0c5,	// (0x0008c8de) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008e650) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008e650) list_single_recal_day_pane_g

0xe0d9,	// (0x0008c8f2) list_single_recal_day_pane_t1

0xe0eb,	// (0x0008c904) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0008e65b) list_single_recal_day_pane_t

0xa191,	// (0x000889aa) ncimui_query_button_pane_ParamLimits

0xa191,	// (0x000889aa) ncimui_query_button_pane

0xa1a1,	// (0x000889ba) ncimui_query_button_pane_t1_ParamLimits

0xa1a1,	// (0x000889ba) ncimui_query_button_pane_t1

0xa1b4,	// (0x000889cd) ncimui_query_button_pane_t2_ParamLimits

0xa1b4,	// (0x000889cd) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008e660) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008e660) ncimui_query_button_pane_t

0xa1c7,	// (0x000889e0) query_button_pane_ParamLimits

0xa1c7,	// (0x000889e0) query_button_pane

0xec57,	// (0x0008d470) bg_button_pane_cp0028

0xa1da,	// (0x000889f3) query_button_pane_t1

0x5015,	// (0x0008382e) main_tport_pane_ParamLimits

0x99f7,	// (0x00088210) bg_popup_window_pane_cp01_ParamLimits

0x99f7,	// (0x00088210) bg_popup_window_pane_cp01

0x9a12,	// (0x0008822b) heading_pane_cp08_ParamLimits

0x9a12,	// (0x0008822b) heading_pane_cp08

0x9a25,	// (0x0008823e) heading_pane_cp07_ParamLimits

0x9a25,	// (0x0008823e) heading_pane_cp07

0x9af5,	// (0x0008830e) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0008e5ac) cell_tport_appsw_pane_g

0x0581,	// (0x0007ed9a) input_candi_list_open_g1

0x3b88,	// (0x000823a1) list_cale_time_pane_g6_ParamLimits

0x3b88,	// (0x000823a1) list_cale_time_pane_g6

0x5dd4,	// (0x000845ed) aid_size_touch_calib_1_ParamLimits

0x5dd4,	// (0x000845ed) aid_size_touch_calib_1

0x5de6,	// (0x000845ff) aid_size_touch_calib_2_ParamLimits

0x5de6,	// (0x000845ff) aid_size_touch_calib_2

0x5dfe,	// (0x00084617) aid_size_touch_calib_3_ParamLimits

0x5dfe,	// (0x00084617) aid_size_touch_calib_3

0x5e1c,	// (0x00084635) aid_size_touch_calib_4_ParamLimits

0x5e1c,	// (0x00084635) aid_size_touch_calib_4

0x5e34,	// (0x0008464d) main_touch_calib_button_group_pane_ParamLimits

0x5e34,	// (0x0008464d) main_touch_calib_button_group_pane

0x5e4c,	// (0x00084665) main_touch_calib_pane_g1_ParamLimits

0x5e5e,	// (0x00084677) main_touch_calib_pane_g2_ParamLimits

0x5e70,	// (0x00084689) main_touch_calib_pane_g3_ParamLimits

0x5e82,	// (0x0008469b) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0008df75) main_touch_calib_pane_g_ParamLimits

0x5e94,	// (0x000846ad) main_touch_calib_pane_t1_ParamLimits

0x5eae,	// (0x000846c7) main_touch_calib_pane_t2_ParamLimits

0x5ec8,	// (0x000846e1) main_touch_calib_pane_t3_ParamLimits

0x5edc,	// (0x000846f5) main_touch_calib_pane_t4_ParamLimits

0x5ef0,	// (0x00084709) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0008df7e) main_touch_calib_pane_t_ParamLimits

0xd320,	// (0x0008bb39) list_single_fp_cale_pane_g3_ParamLimits

0xd320,	// (0x0008bb39) list_single_fp_cale_pane_g3

0xb1f7,	// (0x00089a10) bg_button_pane_cp012_ParamLimits

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp03_ParamLimits

0x7eb1,	// (0x000866ca) cell_vitu2_function_top_pane_g1_ParamLimits

0xb1f7,	// (0x00089a10) bg_vkb2_func_pane_cp04_ParamLimits

0x8ae7,	// (0x00087300) main_ncimui_button_group_pane_ParamLimits

0x8ae7,	// (0x00087300) main_ncimui_button_group_pane

0x8b47,	// (0x00087360) main_ncimui_pane_t3_ParamLimits

0x8b47,	// (0x00087360) main_ncimui_pane_t3

0x9cf5,	// (0x0008850e) phacti_button_group_pane

0xa0af,	// (0x000888c8) aid_size_list_single_double_ParamLimits

0xa0bb,	// (0x000888d4) popup_ezdial_listscroll_window_ParamLimits

0xa0d7,	// (0x000888f0) popup_number_entry_window_cp01_ParamLimits

0xa1e8,	// (0x00088a01) phacti_button_pane_ParamLimits

0xa1e8,	// (0x00088a01) phacti_button_pane

0xec57,	// (0x0008d470) bg_button_pane_cp14

0xa1f9,	// (0x00088a12) phacti_button_pane_t1

0xa207,	// (0x00088a20) main_touch_calib_button_pane_ParamLimits

0xa207,	// (0x00088a20) main_touch_calib_button_pane

0x1a11,	// (0x0008022a) bg_button_pane_cp18_ParamLimits

0x1a11,	// (0x0008022a) bg_button_pane_cp18

0xa21c,	// (0x00088a35) main_touch_calib_button_pane_t1_ParamLimits

0xa21c,	// (0x00088a35) main_touch_calib_button_pane_t1

0xa232,	// (0x00088a4b) main_touch_calib_button_pane_t2_ParamLimits

0xa232,	// (0x00088a4b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0008e665) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0008e665) main_touch_calib_button_pane_t

0xec57,	// (0x0008d470) cell_ncimui_button_pane

0xec57,	// (0x0008d470) bg_button_pane_cp032

0xa250,	// (0x00088a69) cell_ncimui_button_pane_t1

0xdb05,	// (0x0008c31e) image3_infobar_pane_ParamLimits

0xdb05,	// (0x0008c31e) image3_infobar_pane

0x9257,	// (0x00087a70) fs_bigclock_status_pane_ParamLimits

0x9257,	// (0x00087a70) fs_bigclock_status_pane

0x9264,	// (0x00087a7d) main_fs_bigclock_clock_pane_ParamLimits

0x9264,	// (0x00087a7d) main_fs_bigclock_clock_pane

0x9280,	// (0x00087a99) main_fs_bigclock_indi_pane_ParamLimits

0x9280,	// (0x00087a99) main_fs_bigclock_indi_pane

0x9299,	// (0x00087ab2) main_fs_bigclock_swipe_pane_ParamLimits

0x9299,	// (0x00087ab2) main_fs_bigclock_swipe_pane

0xec57,	// (0x0008d470) main_fs_clock_dumped_data

0x92bd,	// (0x00087ad6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x92bd,	// (0x00087ad6) list_single_fs_bigclock_indicator_pane_g1

0x92d7,	// (0x00087af0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x92d7,	// (0x00087af0) list_single_fs_bigclock_indicator_pane_g2

0x92f1,	// (0x00087b0a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92f1,	// (0x00087b0a) list_single_fs_bigclock_indicator_pane_g3

0x930b,	// (0x00087b24) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x930b,	// (0x00087b24) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0008e493) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0008e493) list_single_fs_bigclock_indicator_pane_g

0x9334,	// (0x00087b4d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9334,	// (0x00087b4d) list_single_fs_bigclock_indicator_pane_t1

0x935c,	// (0x00087b75) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x935c,	// (0x00087b75) list_single_fs_bigclock_indicator_pane_t2

0x9384,	// (0x00087b9d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9384,	// (0x00087b9d) list_single_fs_bigclock_indicator_pane_t3

0x93ac,	// (0x00087bc5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x93ac,	// (0x00087bc5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0008e49e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0008e49e) list_single_fs_bigclock_indicator_pane_t

0xa25e,	// (0x00088a77) image3_infobar_fav_pane_ParamLimits

0xa25e,	// (0x00088a77) image3_infobar_fav_pane

0xa26e,	// (0x00088a87) image3_infobar_loc_pane_ParamLimits

0xa26e,	// (0x00088a87) image3_infobar_loc_pane

0xa282,	// (0x00088a9b) image3_infobar_time_pane_ParamLimits

0xa282,	// (0x00088a9b) image3_infobar_time_pane

0xcf5c,	// (0x0008b775) image3_infobar_time_pane_g1

0xa292,	// (0x00088aab) image3_infobar_time_pane_t1

0xcf5c,	// (0x0008b775) image3_infobar_loc_pane_g1

0xa2a0,	// (0x00088ab9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0008e66a) image3_infobar_loc_pane_g

0xa2a8,	// (0x00088ac1) image3_infobar_loc_pane_t1

0xcf5c,	// (0x0008b775) image3_infobar_fav_pane_g1

0xa2b6,	// (0x00088acf) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0008e66f) image3_infobar_fav_pane_g

0xa2be,	// (0x00088ad7) fs_bigclock_status_battery_pane

0xa2c7,	// (0x00088ae0) fs_bigclock_status_signal_pane

0xa2d0,	// (0x00088ae9) fs_bigclock_status_title_pane

0xa2d9,	// (0x00088af2) fs_bigclock_status_signal_pane_g1

0xa2e2,	// (0x00088afb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0008e674) fs_bigclock_status_signal_pane_g

0xa2ea,	// (0x00088b03) fs_bigclock_status_battery_pane_g1

0xa2f3,	// (0x00088b0c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0008e679) fs_bigclock_status_battery_pane_g

0xa2fb,	// (0x00088b14) fs_bigclock_status_title_pane_t1

0xcf5c,	// (0x0008b775) main_fs_bigclock_clock_pane_g1

0xa309,	// (0x00088b22) main_fs_bigclock_clock_pane_g2

0xa309,	// (0x00088b22) main_fs_bigclock_clock_pane_g3

0xa309,	// (0x00088b22) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0008e67e) main_fs_bigclock_clock_pane_g

0xa311,	// (0x00088b2a) main_fs_bigclock_clock_pane_t1

0xa31f,	// (0x00088b38) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0008e687) main_fs_bigclock_clock_pane_t

0xa32e,	// (0x00088b47) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa32e,	// (0x00088b47) list_single_fs_bigclock_indicator_pane

0xa33f,	// (0x00088b58) list_single_fs_bigclock_pane_ParamLimits

0xa33f,	// (0x00088b58) list_single_fs_bigclock_pane

0xa3ab,	// (0x00088bc4) main_fs_bigclock_indicator_pane_t1

0xa3ba,	// (0x00088bd3) list_single_fs_bigclock_pane_g1

0xa3c2,	// (0x00088bdb) list_single_fs_bigclock_pane_t1

0xcf5c,	// (0x0008b775) main_fs_bigclock_swipe_pane_g1

0xa405,	// (0x00088c1e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0008e698) main_fs_bigclock_swipe_pane_g

0xa40d,	// (0x00088c26) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa40d,	// (0x00088c26) main_fs_bigclock_swipe_pane_t1

0x3e5c,	// (0x00082675) call_type_pane_ParamLimits

0xec57,	// (0x0008d470) main_btmg_pane

0xdfef,	// (0x0008c808) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdfef,	// (0x0008c808) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0008e60b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0008e60b) list_single_cale_mrui_row_pane_g

0xe075,	// (0x0008c88e) list_recal_vselct_arw_lo_pane

0xa17d,	// (0x00088996) list_recal_vselct_arw_up_pane

0xe07d,	// (0x0008c896) list_recal_vselct_pane

0xa42a,	// (0x00088c43) btmg_button_pane

0xa434,	// (0x00088c4d) main_btmg_pane_g1

0xec57,	// (0x0008d470) bg_button_pane_cp044

0xa43e,	// (0x00088c57) btmg_button_pane_t1

0xca2d,	// (0x0008b246) aid_listscroll_gen

0xb1f7,	// (0x00089a10) main_cntbar_detail_pane

0x9b54,	// (0x0008836d) list_cmail_folder_pane

0xf045,	// (0x0008d85e) sp_fs_scroll_pane_cp03_ParamLimits

0x0fe0,	// (0x0007f7f9) list_single_fs_dyc_pane_cp01_ParamLimits

0x0fe0,	// (0x0007f7f9) list_single_fs_dyc_pane_cp01

0xa44c,	// (0x00088c65) aid_size_cmail_indent

0xe0fd,	// (0x0008c916) list_single_dyc_row_pane_cp01

0xa487,	// (0x00088ca0) cntbar_detail_list_pane_ParamLimits

0xa487,	// (0x00088ca0) cntbar_detail_list_pane

0xa4d3,	// (0x00088cec) main_cntbar_detail_cont_pane_ParamLimits

0xa4d3,	// (0x00088cec) main_cntbar_detail_cont_pane

0xf045,	// (0x0008d85e) scroll_pane_cp032_ParamLimits

0xf045,	// (0x0008d85e) scroll_pane_cp032

0xa4e7,	// (0x00088d00) cntbar_detail_list_event_pane_ParamLimits

0xa4e7,	// (0x00088d00) cntbar_detail_list_event_pane

0xa497,	// (0x00088cb0) cntbar_detail_list_shct_pane

0x2e1d,	// (0x00081636) aid_list_gen

0xa4f7,	// (0x00088d10) aid_scroll

0xa500,	// (0x00088d19) aid_size_touch_scroll_bar

0x838d,	// (0x00086ba6) aid_list_double

0xa509,	// (0x00088d22) aid_list_single

0x838d,	// (0x00086ba6) aid_list_single_lg

0x0ff5,	// (0x0007f80e) aid_list_z_g_a_sm

0xa512,	// (0x00088d2b) aid_list_z_g_d

0x0ffd,	// (0x0007f816) aid_txt_z_prm

0x100b,	// (0x0007f824) aid_txt_z_prm_cp01

0x1019,	// (0x0007f832) aid_txt_z_sec

0xa51a,	// (0x00088d33) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa51a,	// (0x00088d33) main_cntbar_detail_cont_pane_g1

0xa52e,	// (0x00088d47) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa52e,	// (0x00088d47) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0008e69d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0008e69d) main_cntbar_detail_cont_pane_g

0xa53e,	// (0x00088d57) main_cntbar_detail_cont_pane_t1

0xa54c,	// (0x00088d65) main_cntbar_detail_cont_pane_t2

0xa55a,	// (0x00088d73) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008e6a2) main_cntbar_detail_cont_pane_t

0xa568,	// (0x00088d81) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa568,	// (0x00088d81) cell_cntbar_detail_list_shct_pane

0xa57c,	// (0x00088d95) cntbar_detail_list_shct_pane_g1

0xa585,	// (0x00088d9e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0008e6a9) cntbar_detail_list_shct_pane_g

0xa58e,	// (0x00088da7) cntbar_detail_list_event_pane_g1_ParamLimits

0xa58e,	// (0x00088da7) cntbar_detail_list_event_pane_g1

0xa59a,	// (0x00088db3) cntbar_detail_list_event_pane_g2_ParamLimits

0xa59a,	// (0x00088db3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0008e6ae) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0008e6ae) cntbar_detail_list_event_pane_g

0xa606,	// (0x00088e1f) cntbar_detail_list_event_pane_t1_ParamLimits

0xa606,	// (0x00088e1f) cntbar_detail_list_event_pane_t1

0xa61b,	// (0x00088e34) cntbar_detail_list_event_pane_t2_ParamLimits

0xa61b,	// (0x00088e34) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0008e6bb) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0008e6bb) cntbar_detail_list_event_pane_t

0xcf5c,	// (0x0008b775) cell_cntbar_detail_list_shct_pane_g1

0x4207,	// (0x00082a20) navi_pane_mv_g3

0xb1f7,	// (0x00089a10) main_cntbar_detail_pane_ParamLimits

0xec57,	// (0x0008d470) main_notif_wgt_pane

0xd897,	// (0x0008c0b0) aid_tch_main_mp4_pane_g4

0xda99,	// (0x0008c2b2) popup_slider_window_cp02

0xe06b,	// (0x0008c884) list_recal_day_event_pane

0xa455,	// (0x00088c6e) cntbar_detail_btn_pane_ParamLimits

0xa455,	// (0x00088c6e) cntbar_detail_btn_pane

0xa46e,	// (0x00088c87) cntbar_detail_btn_pane_cp01_ParamLimits

0xa46e,	// (0x00088c87) cntbar_detail_btn_pane_cp01

0xa497,	// (0x00088cb0) cntbar_detail_list_shct_pane_ParamLimits

0xa4a7,	// (0x00088cc0) cntbar_detail_pane_g1_ParamLimits

0xa4a7,	// (0x00088cc0) cntbar_detail_pane_g1

0xa4b7,	// (0x00088cd0) cntbar_detail_pane_t1_ParamLimits

0xa4b7,	// (0x00088cd0) cntbar_detail_pane_t1

0xa5a6,	// (0x00088dbf) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5a6,	// (0x00088dbf) cntbar_detail_list_event_pane_g3

0xa5be,	// (0x00088dd7) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5be,	// (0x00088dd7) cntbar_detail_list_event_pane_g4

0xa5d6,	// (0x00088def) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5d6,	// (0x00088def) cntbar_detail_list_event_pane_g5

0xa5ee,	// (0x00088e07) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5ee,	// (0x00088e07) cntbar_detail_list_event_pane_g6

0xa630,	// (0x00088e49) cntbar_detail_list_event_pane_t3_ParamLimits

0xa630,	// (0x00088e49) cntbar_detail_list_event_pane_t3

0xa642,	// (0x00088e5b) popup_notif_wgt_window_ParamLimits

0xa642,	// (0x00088e5b) popup_notif_wgt_window

0xa65b,	// (0x00088e74) popup_submenu_window_cp01_ParamLimits

0xa65b,	// (0x00088e74) popup_submenu_window_cp01

0xb5f0,	// (0x00089e09) bg_popup_window_pane_cp10

0xa671,	// (0x00088e8a) listscroll_notif_wgt_pane

0xa683,	// (0x00088e9c) list_notif_wgt_window

0xa68c,	// (0x00088ea5) scroll_pane_cp033

0xa191,	// (0x000889aa) list_notif_wgt_row_pane_ParamLimits

0xa191,	// (0x000889aa) list_notif_wgt_row_pane

0xa695,	// (0x00088eae) aid_size_list_notif_wgt_del

0xa6a2,	// (0x00088ebb) list_notif_wgt_row_pane_g1

0xa6ae,	// (0x00088ec7) list_notif_wgt_row_pane_g2

0xa6ba,	// (0x00088ed3) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0008e6c2) list_notif_wgt_row_pane_g

0xa6c7,	// (0x00088ee0) list_notif_wgt_row_pane_t1

0xa6dc,	// (0x00088ef5) list_notif_wgt_row_pane_t2

0xa6ee,	// (0x00088f07) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0008e6c9) list_notif_wgt_row_pane_t

0xe414,	// (0x0008cc2d) list_recal_day_event_pane_g1

0xa700,	// (0x00088f19) list_recal_day_event_pane_t1

0xec57,	// (0x0008d470) bg_button_pane_cp045

0xa70f,	// (0x00088f28) cntbar_detail_btn_pane_t1

0xca41,	// (0x0008b25a) main_callh_pane_ParamLimits

0xca41,	// (0x0008b25a) main_callh_pane

0xec57,	// (0x0008d470) main_coverflow0_pane

0xec57,	// (0x0008d470) main_wgtman_pane

0x92a7,	// (0x00087ac0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x92a7,	// (0x00087ac0) main_fs_bigclock_unlock_btn_pane

0x9aed,	// (0x00088306) bg_button_pane_cp16

0x9afd,	// (0x00088316) cell_tport_appsw_pane_g3

0xa71d,	// (0x00088f36) cf0_flow_pane_ParamLimits

0xa71d,	// (0x00088f36) cf0_flow_pane

0xa732,	// (0x00088f4b) listscroll_cf0_pane

0xa73d,	// (0x00088f56) main_cf0_pane_g1

0xa74f,	// (0x00088f68) main_cf0_pane_t1_ParamLimits

0xa74f,	// (0x00088f68) main_cf0_pane_t1

0xa766,	// (0x00088f7f) main_cf0_pane_t2_ParamLimits

0xa766,	// (0x00088f7f) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0008e6d5) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0008e6d5) main_cf0_pane_t

0xa77d,	// (0x00088f96) scroll_pane_cp11

0xa788,	// (0x00088fa1) cf0_flow_pane_g1

0xa790,	// (0x00088fa9) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0008e6da) cf0_flow_pane_g

0xa798,	// (0x00088fb1) cf0_flow_pane_t1

0xec57,	// (0x0008d470) main_call6_pane

0xec57,	// (0x0008d470) main_calllock_pane

0xa7a6,	// (0x00088fbf) call6_btn_grp_pane_ParamLimits

0xa7a6,	// (0x00088fbf) call6_btn_grp_pane

0xa7c0,	// (0x00088fd9) call6_pane_g1_ParamLimits

0xa7c0,	// (0x00088fd9) call6_pane_g1

0xa7d5,	// (0x00088fee) popup_call6_1st_window_ParamLimits

0xa7d5,	// (0x00088fee) popup_call6_1st_window

0xa7e6,	// (0x00088fff) popup_call6_2nd_window_ParamLimits

0xa7e6,	// (0x00088fff) popup_call6_2nd_window

0xa7f7,	// (0x00089010) cell_call6_btn_pane_ParamLimits

0xa7f7,	// (0x00089010) cell_call6_btn_pane

0xb5f0,	// (0x00089e09) bg_popup_call2_in_pane_cp03

0xa80b,	// (0x00089024) popup_call6_1st_window_g1

0xa813,	// (0x0008902c) popup_call6_1st_window_g2

0xa81b,	// (0x00089034) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008e6df) popup_call6_1st_window_g

0xa823,	// (0x0008903c) popup_call6_1st_window_t1

0xa832,	// (0x0008904b) popup_call6_1st_window_t2

0xa842,	// (0x0008905b) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0008e6e6) popup_call6_1st_window_t

0xb5f0,	// (0x00089e09) bg_popup_call2_in_pane_cp04

0xa80b,	// (0x00089024) popup_call6_2nd_window_g1

0xa813,	// (0x0008902c) popup_call6_2nd_window_g2

0xa81b,	// (0x00089034) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008e6df) popup_call6_2nd_window_g

0xa823,	// (0x0008903c) popup_call6_2nd_window_t1

0xec57,	// (0x0008d470) bg_button_pane_cp15

0xa852,	// (0x0008906b) cell_call6_btn_pane_g1

0xa85b,	// (0x00089074) cell_call6_btn_pane_t1

0xa86a,	// (0x00089083) listscroll_wgtman_pane_ParamLimits

0xa86a,	// (0x00089083) listscroll_wgtman_pane

0xa88d,	// (0x000890a6) wgtman_btn_pane_ParamLimits

0xa88d,	// (0x000890a6) wgtman_btn_pane

0xb4a7,	// (0x00089cc0) aid_scroll_copy1

0xa8d0,	// (0x000890e9) list_wgtman_pane

0xa8da,	// (0x000890f3) wgtman_btn_pane_g1_ParamLimits

0xa8da,	// (0x000890f3) wgtman_btn_pane_g1

0xa906,	// (0x0008911f) wgtman_btn_pane_t1_ParamLimits

0xa906,	// (0x0008911f) wgtman_btn_pane_t1

0xa943,	// (0x0008915c) wgtman_btn_pane_t2_ParamLimits

0xa943,	// (0x0008915c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008e6ed) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008e6ed) wgtman_btn_pane_t

0xa95a,	// (0x00089173) listrow_wgtman_pane_ParamLimits

0xa95a,	// (0x00089173) listrow_wgtman_pane

0xa96c,	// (0x00089185) listrow_wgtman_pane_g1

0xa979,	// (0x00089192) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008e6f2) listrow_wgtman_pane_g

0x1027,	// (0x0007f840) listrow_wgtman_pane_t1

0x103f,	// (0x0007f858) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0008e6f7) listrow_wgtman_pane_t

0x1065,	// (0x0007f87e) wait_bar_pane_cp09

0xa997,	// (0x000891b0) main_calllock_btn_pane

0xa9a1,	// (0x000891ba) main_calllock_pane_g1

0xec57,	// (0x0008d470) bg_button_pane_cp17

0xa9ad,	// (0x000891c6) main_calllock_btn_pane_g1

0xa9b6,	// (0x000891cf) main_calllock_btn_pane_t1

0xec57,	// (0x0008d470) main_dialer3_pane

0xec57,	// (0x0008d470) main_fmrd2_pane

0xcf5c,	// (0x0008b775) main_fs_bigclock_unlock_btn_pane_g1

0xa9cd,	// (0x000891e6) main_fs_bigclock_unlock_btn_pane_t1

0xa9db,	// (0x000891f4) area_fmrd2_info_pane_ParamLimits

0xa9db,	// (0x000891f4) area_fmrd2_info_pane

0xa9ec,	// (0x00089205) area_fmrd2_visual_pane_ParamLimits

0xa9ec,	// (0x00089205) area_fmrd2_visual_pane

0xa9fa,	// (0x00089213) fmrd2_indi_pane_ParamLimits

0xa9fa,	// (0x00089213) fmrd2_indi_pane

0xaa07,	// (0x00089220) area_fmrd2_visual_pane_g1

0xaa0f,	// (0x00089228) area_fmrd2_visual_pane_t1

0xaa1f,	// (0x00089238) area_fmrd2_visual_pane_t2

0xaa2f,	// (0x00089248) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0008e701) area_fmrd2_visual_pane_t

0xaa3f,	// (0x00089258) area_fmrd2_info_pane_g1

0xaa47,	// (0x00089260) area_fmrd2_info_pane_t1

0xaa57,	// (0x00089270) area_fmrd2_info_pane_t2

0xaa67,	// (0x00089280) area_fmrd2_info_pane_t3

0xaa77,	// (0x00089290) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0008e708) area_fmrd2_info_pane_t

0xaa85,	// (0x0008929e) fmrd2_indi_pane_t1

0xaa95,	// (0x000892ae) fmrd2_indi_pane_t2

0xaaa5,	// (0x000892be) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008e711) fmrd2_indi_pane_t

0x931a,	// (0x00087b33) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x931a,	// (0x00087b33) list_single_fs_bigclock_indicator_pane_g5

0x93c1,	// (0x00087bda) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x93c1,	// (0x00087bda) list_single_fs_bigclock_indicator_pane_t5

0x9d6b,	// (0x00088584) aid_cell_bcale_month_pane_ParamLimits

0x9d6b,	// (0x00088584) aid_cell_bcale_month_pane

0x9d89,	// (0x000885a2) bcale_month_pane_ParamLimits

0x9d89,	// (0x000885a2) bcale_month_pane

0x9dad,	// (0x000885c6) bcale_preview_pane_ParamLimits

0x9dad,	// (0x000885c6) bcale_preview_pane

0xa3c2,	// (0x00088bdb) list_single_fs_bigclock_pane_t1_ParamLimits

0xa3e1,	// (0x00088bfa) list_single_fs_bigclock_pane_t2_ParamLimits

0xa3e1,	// (0x00088bfa) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0008e693) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0008e693) list_single_fs_bigclock_pane_t

0xa9c5,	// (0x000891de) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0008e6fc) main_fs_bigclock_unlock_btn_pane_g

0xaab5,	// (0x000892ce) aid_dia3_key_size_ParamLimits

0xaab5,	// (0x000892ce) aid_dia3_key_size

0xaac4,	// (0x000892dd) aid_dia3_listrow_size_ParamLimits

0xaac4,	// (0x000892dd) aid_dia3_listrow_size

0xaad9,	// (0x000892f2) dia3_keypad_fun_pane_ParamLimits

0xaad9,	// (0x000892f2) dia3_keypad_fun_pane

0xaaf5,	// (0x0008930e) dia3_keypad_num_pane_ParamLimits

0xaaf5,	// (0x0008930e) dia3_keypad_num_pane

0xab10,	// (0x00089329) dia3_listscroll_pane_ParamLimits

0xab10,	// (0x00089329) dia3_listscroll_pane

0xab23,	// (0x0008933c) dia3_numentry_pane_ParamLimits

0xab23,	// (0x0008933c) dia3_numentry_pane

0xab37,	// (0x00089350) dia3_list_pane

0xab42,	// (0x0008935b) scroll_pane_cp12

0xec57,	// (0x0008d470) bg_dia3_numentry_pane

0xab4d,	// (0x00089366) dia3_numentry_pane_t1

0xab5c,	// (0x00089375) cell_dia3_key_num_pane

0xab64,	// (0x0008937d) cell_dia3_key0_fun_pane_ParamLimits

0xab64,	// (0x0008937d) cell_dia3_key0_fun_pane

0xab78,	// (0x00089391) cell_dia3_key1_fun_pane_ParamLimits

0xab78,	// (0x00089391) cell_dia3_key1_fun_pane

0xab90,	// (0x000893a9) dia3_listrow_pane

0x8d32,	// (0x0008754b) bg_dia3_numentry_pane_g1

0xec57,	// (0x0008d470) bg_button_pane_cp21

0xaba2,	// (0x000893bb) cell_dia3_key_num_pane_t1

0xabb0,	// (0x000893c9) cell_dia3_key_num_pane_t2

0xabbf,	// (0x000893d8) cell_dia3_key_num_pane_t3

0xabce,	// (0x000893e7) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0008e718) cell_dia3_key_num_pane_t

0xec57,	// (0x0008d470) bg_button_pane_cp19

0xabdd,	// (0x000893f6) cell_dia3_key0_fun_pane_g1

0xec57,	// (0x0008d470) bg_button_pane_cp20

0xabe5,	// (0x000893fe) cell_dia3_key1_fun_pane_g1

0xabed,	// (0x00089406) area_left_week_number_pane

0xabf9,	// (0x00089412) area_top_day_name_pane

0xac0c,	// (0x00089425) frame_month_view_pane

0xac1f,	// (0x00089438) grid_month_view_pane

0xac2d,	// (0x00089446) cell_top_day_name_pane_ParamLimits

0xac2d,	// (0x00089446) cell_top_day_name_pane

0xac5a,	// (0x00089473) cell_area_left_week_number_pane_ParamLimits

0xac5a,	// (0x00089473) cell_area_left_week_number_pane

0xac6e,	// (0x00089487) cell_month_view_pane_ParamLimits

0xac6e,	// (0x00089487) cell_month_view_pane

0xac9b,	// (0x000894b4) frm_month_g1

0xaca8,	// (0x000894c1) frm_month_g2

0xacbb,	// (0x000894d4) frm_month_g3

0xacce,	// (0x000894e7) frm_month_g4

0xace1,	// (0x000894fa) frm_month_g5

0xacf4,	// (0x0008950d) frm_month_g6

0xad07,	// (0x00089520) frm_month_g7

0xad1a,	// (0x00089533) frm_month_g8

0xad27,	// (0x00089540) frm_month_g9

0xad37,	// (0x00089550) frm_month_g10

0xad47,	// (0x00089560) frm_month_g11

0xad57,	// (0x00089570) frm_month_g12

0xad69,	// (0x00089582) frm_month_g13

0xad7b,	// (0x00089594) frm_month_g14

0xad8f,	// (0x000895a8) frm_month_g15

0xada3,	// (0x000895bc) frm_month_g16

0x000f,

0xff08,	// (0x0008e721) frm_month_g

0xadb7,	// (0x000895d0) cell_top_day_name_pane_t1

0xadca,	// (0x000895e3) cell_area_left_week_number_pane_g1

0xadd6,	// (0x000895ef) cell_area_left_week_number_pane_t1

0xd1c8,	// (0x0008b9e1) cell_month_view_pane_g1

0xade9,	// (0x00089602) cell_month_view_pane_t1

0xec57,	// (0x0008d470) main_fps_pane

0x98c2,	// (0x000880db) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x98c2,	// (0x000880db) cmail_ddmenu_btn02_pane_cp1

0x98de,	// (0x000880f7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x98de,	// (0x000880f7) cmail_ddmenu_btn02_pane_cp2

0xa12e,	// (0x00088947) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa12e,	// (0x00088947) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0008e646) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0008e646) cmail_ddmenu_btn02_pane_g

0xa14c,	// (0x00088965) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa14c,	// (0x00088965) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0008e64b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0008e64b) cmail_ddmenu_btn02_pane_t

0xadfc,	// (0x00089615) fps_text_pane_ParamLimits

0xadfc,	// (0x00089615) fps_text_pane

0xae13,	// (0x0008962c) main_fps_pane_g1_ParamLimits

0xae13,	// (0x0008962c) main_fps_pane_g1

0xae2d,	// (0x00089646) wait_bar_pane_cp010_ParamLimits

0xae2d,	// (0x00089646) wait_bar_pane_cp010

0xae3e,	// (0x00089657) fps_text_pane_t1_ParamLimits

0xae3e,	// (0x00089657) fps_text_pane_t1

0xf051,	// (0x0008d86a) cam4_image_uncrop_pane_g1

0xf05a,	// (0x0008d873) cam4_image_uncrop_pane_g2

0x740b,	// (0x00085c24) cam4_image_uncrop_pane_g3

0x7414,	// (0x00085c2d) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0008e10d) cam4_image_uncrop_pane_g

0xab90,	// (0x000893a9) dia3_listrow_pane_ParamLimits

0xec57,	// (0x0008d470) main_phob2_pane

0x9a95,	// (0x000882ae) cell_tport_appsw_pane_cp02_ParamLimits

0x9a95,	// (0x000882ae) cell_tport_appsw_pane_cp02

0x9aa9,	// (0x000882c2) cell_tport_appsw_pane_cp03_ParamLimits

0x9aa9,	// (0x000882c2) cell_tport_appsw_pane_cp03

0xec57,	// (0x0008d470) phob2_contact_card_pane

0xec57,	// (0x0008d470) phob2_listscroll_pane

0xae56,	// (0x0008966f) phob2_list_pane

0xae5e,	// (0x00089677) scroll_pane_cp034

0xae66,	// (0x0008967f) phob2_cc_data_pane_ParamLimits

0xae66,	// (0x0008967f) phob2_cc_data_pane

0xae85,	// (0x0008969e) phob2_cc_listscroll_pane_ParamLimits

0xae85,	// (0x0008969e) phob2_cc_listscroll_pane

0xaea3,	// (0x000896bc) list_double_large_graphic_phob2_pane_ParamLimits

0xaea3,	// (0x000896bc) list_double_large_graphic_phob2_pane

0xaeb5,	// (0x000896ce) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaeb5,	// (0x000896ce) list_double_large_graphic_phob2_pane_g1

0x1077,	// (0x0007f890) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1077,	// (0x0007f890) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008e742) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008e742) list_double_large_graphic_phob2_pane_g

0x1083,	// (0x0007f89c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1083,	// (0x0007f89c) list_double_large_graphic_phob2_pane_t1

0x1098,	// (0x0007f8b1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1098,	// (0x0007f8b1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0008e747) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0008e747) list_double_large_graphic_phob2_pane_t

0xec57,	// (0x0008d470) list_highlight_pane_cp024

0xaecb,	// (0x000896e4) phob2_cc_button_pane

0xaed3,	// (0x000896ec) phob2_cc_data_pane_g1_ParamLimits

0xaed3,	// (0x000896ec) phob2_cc_data_pane_g1

0xaee8,	// (0x00089701) phob2_cc_data_pane_g2_ParamLimits

0xaee8,	// (0x00089701) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008e74c) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008e74c) phob2_cc_data_pane_g

0xaefa,	// (0x00089713) phob2_cc_data_pane_t1_ParamLimits

0xaefa,	// (0x00089713) phob2_cc_data_pane_t1

0xaf12,	// (0x0008972b) phob2_cc_data_pane_t2_ParamLimits

0xaf12,	// (0x0008972b) phob2_cc_data_pane_t2

0xaf2a,	// (0x00089743) phob2_cc_data_pane_t3_ParamLimits

0xaf2a,	// (0x00089743) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008e751) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008e751) phob2_cc_data_pane_t

0xaf42,	// (0x0008975b) phob2_cc_list_pane_ParamLimits

0xaf42,	// (0x0008975b) phob2_cc_list_pane

0xf063,	// (0x0008d87c) scroll_pane_cp035_ParamLimits

0xf063,	// (0x0008d87c) scroll_pane_cp035

0xb1f7,	// (0x00089a10) bg_button_pane_cp033

0xaf4e,	// (0x00089767) phob2_cc_button_pane_g1

0xaf5a,	// (0x00089773) phob2_cc_button_pane_t1

0xaf6f,	// (0x00089788) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0008e758) phob2_cc_button_pane_t

0xaf81,	// (0x0008979a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf81,	// (0x0008979a) list_double_large_graphic_phob2_cc_pane

0xaf93,	// (0x000897ac) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf93,	// (0x000897ac) list_double_large_graphic_phob2_cc_pane_g1

0x10aa,	// (0x0007f8c3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x10aa,	// (0x0007f8c3) list_double_large_graphic_phob2_cc_pane_g2

0x10b6,	// (0x0007f8cf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x10b6,	// (0x0007f8cf) list_double_large_graphic_phob2_cc_pane_g3

0x10c2,	// (0x0007f8db) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x10c2,	// (0x0007f8db) list_double_large_graphic_phob2_cc_pane_g4

0x10ce,	// (0x0007f8e7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x10ce,	// (0x0007f8e7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008e75d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008e75d) list_double_large_graphic_phob2_cc_pane_g

0x10da,	// (0x0007f8f3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10da,	// (0x0007f8f3) list_double_large_graphic_phob2_cc_pane_t1

0x1103,	// (0x0007f91c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1103,	// (0x0007f91c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0008e768) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0008e768) list_double_large_graphic_phob2_cc_pane_t

0xaf9f,	// (0x000897b8) list_highlight_pane_cp025_ParamLimits

0xaf9f,	// (0x000897b8) list_highlight_pane_cp025

0xb1f7,	// (0x00089a10) bg_button_pane_cp033_ParamLimits

0xaf4e,	// (0x00089767) phob2_cc_button_pane_g1_ParamLimits

0xaf5a,	// (0x00089773) phob2_cc_button_pane_t1_ParamLimits

0xaf6f,	// (0x00089788) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0008e758) phob2_cc_button_pane_t_ParamLimits

0x1365,	// (0x0007fb7e) popup_wgtman_window

0xe27f,	// (0x0008ca98) scroll_pane_cp038

0xa8b2,	// (0x000890cb) wgtman_btn_pane_cp_01_ParamLimits

0xa8b2,	// (0x000890cb) wgtman_btn_pane_cp_01

0xafad,	// (0x000897c6) wgtman_content_pane

0xafb6,	// (0x000897cf) wgtman_heading_pane

0xec57,	// (0x0008d470) bg_heading_pane_cp02

0xafbf,	// (0x000897d8) wgtman_heading_pane_g1

0xafc7,	// (0x000897e0) wgtman_heading_pane_t1

0xafd5,	// (0x000897ee) scroll_pane_cp036

0xafdd,	// (0x000897f6) wgtman_list_pane

0xafe5,	// (0x000897fe) wgtman_list_pane_t1_ParamLimits

0xafe5,	// (0x000897fe) wgtman_list_pane_t1

0xdc3a,	// (0x0008c453) cam4_grid_pane

0x0769,	// (0x0007ef82) bg_button_pane_cp015_ParamLimits

0x800d,	// (0x00086826) bg_button_pane_cp016_ParamLimits

0x8020,	// (0x00086839) bg_button_pane_cp017_ParamLimits

0x07af,	// (0x0007efc8) popup_vitu2_query_window_g3_ParamLimits

0x07af,	// (0x0007efc8) popup_vitu2_query_window_g3

0x082a,	// (0x0007f043) popup_vitu2_query_window_t6_ParamLimits

0x082a,	// (0x0007f043) popup_vitu2_query_window_t6

0x0855,	// (0x0007f06e) popup_vitu2_query_window_t7_ParamLimits

0x0855,	// (0x0007f06e) popup_vitu2_query_window_t7

0xf051,	// (0x0008d86a) cam4_grid_pane_g1

0xf05a,	// (0x0008d873) cam4_grid_pane_g2

0xafff,	// (0x00089818) cam4_grid_pane_g3

0xb008,	// (0x00089821) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008e76d) cam4_grid_pane_g

0x2819,	// (0x00081032) aid_placing_vt_slider_lsc_ParamLimits

0x2b74,	// (0x0008138d) vidtel_button_pane_ParamLimits

0x2b74,	// (0x0008138d) vidtel_button_pane

0xb013,	// (0x0008982c) bg_button_pane_cp034

0xb01d,	// (0x00089836) vidtel_button_pane_g1

0xb025,	// (0x0008983e) vidtel_button_pane_t1

0xe3c8,	// (0x0008cbe1) aid_size_vtel_slider_touch

0xf063,	// (0x0008d87c) scroll_pane_cp039

0x8da1,	// (0x000875ba) ncim_query_button_pane_cp01_ParamLimits

0x8dc0,	// (0x000875d9) ncimui_query_pane_g1_ParamLimits

0xb1f7,	// (0x00089a10) input_focus_pane_cp012_ParamLimits

0x8de5,	// (0x000875fe) ncim_query_entry_pane_t1_ParamLimits

0xf063,	// (0x0008d87c) scroll_pane_cp039_ParamLimits

0x417b,	// (0x00082994) navi_pane_bcale_mc_g1

0x4183,	// (0x0008299c) navi_pane_bcale_mc_t1

0x9971,	// (0x0008818a) main_sp_fs_email_pane_g1

0x997d,	// (0x00088196) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0008e504) main_sp_fs_email_pane_g

0x9f20,	// (0x00088739) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9f20,	// (0x00088739) list_single_cale_mrui_row_pane_g3

0x0fd6,	// (0x0007f7ef) list_single_recal_day_pane_g5_event_pane

0xe0d1,	// (0x0008c8ea) list_single_recal_day_pane_g7

0xb033,	// (0x0008984c) list_recal_day_event_pane_cp01

0xb03c,	// (0x00089855) list_recal_vselct_arw_lo_pane_cp01

0xb044,	// (0x0008985d) list_recal_vselct_arw_up_pane_cp01

0xb04c,	// (0x00089865) list_recal_vselct_pane_cp01

0xe414,	// (0x0008cc2d) list_recal_day_event_pane_cp01_g1

0xe106,	// (0x0008c91f) list_recal_day_event_pane_cp01_t1

0xe0d9,	// (0x0008c8f2) list_single_recal_day_pane_t1_ParamLimits

0xe0eb,	// (0x0008c904) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0008e65b) list_single_recal_day_pane_t_ParamLimits

0x16a5,	// (0x0007febe) bg_notes_pane_ParamLimits

0x19db,	// (0x000801f4) list_notes_pane_ParamLimits

0x19e9,	// (0x00080202) scroll_pane_cp06_ParamLimits

0x1a11,	// (0x0008022a) main_notes_pane_ParamLimits

0xec57,	// (0x0008d470) main_welc_pane

0xb056,	// (0x0008986f) main_welc_body_pane_ParamLimits

0xb056,	// (0x0008986f) main_welc_body_pane

0xb074,	// (0x0008988d) main_welc_opti_pane_ParamLimits

0xb074,	// (0x0008988d) main_welc_opti_pane

0xb0b9,	// (0x000898d2) main_welc_pane_t1_ParamLimits

0xb0b9,	// (0x000898d2) main_welc_pane_t1

0xb0d7,	// (0x000898f0) main_welc_body_row_pane_ParamLimits

0xb0d7,	// (0x000898f0) main_welc_body_row_pane

0xb0eb,	// (0x00089904) main_welc_opti_row_pane_ParamLimits

0xb0eb,	// (0x00089904) main_welc_opti_row_pane

0xb0f9,	// (0x00089912) main_welc_opti_row_pane_g1

0xb101,	// (0x0008991a) main_welc_opti_row_pane_t1

0xb111,	// (0x0008992a) main_welc_body_row_pane_t1

0xa67b,	// (0x00088e94) popup_notif_wgt_heading_pane

0xa695,	// (0x00088eae) aid_size_list_notif_wgt_del_ParamLimits

0xa6a2,	// (0x00088ebb) list_notif_wgt_row_pane_g1_ParamLimits

0xa6ae,	// (0x00088ec7) list_notif_wgt_row_pane_g2_ParamLimits

0xa6ba,	// (0x00088ed3) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0008e6c2) list_notif_wgt_row_pane_g_ParamLimits

0xa6c7,	// (0x00088ee0) list_notif_wgt_row_pane_t1_ParamLimits

0xa6dc,	// (0x00088ef5) list_notif_wgt_row_pane_t2_ParamLimits

0xa6ee,	// (0x00088f07) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0008e6c9) list_notif_wgt_row_pane_t_ParamLimits

0xa96c,	// (0x00089185) listrow_wgtman_pane_g1_ParamLimits

0xa979,	// (0x00089192) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008e6f2) listrow_wgtman_pane_g_ParamLimits

0x1027,	// (0x0007f840) listrow_wgtman_pane_t1_ParamLimits

0x103f,	// (0x0007f858) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0008e6f7) listrow_wgtman_pane_t_ParamLimits

0x1065,	// (0x0007f87e) wait_bar_pane_cp09_ParamLimits

0xec57,	// (0x0008d470) bg_popup_heading_pane_cp02

0xb120,	// (0x00089939) popup_notif_wgt_heading_pane_g1

0xb128,	// (0x00089941) popup_notif_wgt_heading_pane_t1

0xec57,	// (0x0008d470) main_vids_pane

0xec57,	// (0x0008d470) vids_listscroll_pane

0xb136,	// (0x0008994f) scroll_pane_cp040

0xec57,	// (0x0008d470) vids_list_pane

0xb141,	// (0x0008995a) vids_list_double_pane_ParamLimits

0xb141,	// (0x0008995a) vids_list_double_pane

0xb152,	// (0x0008996b) vids_list_double_pane_g1

0xb15b,	// (0x00089974) vids_list_double_pane_t1

0xb16b,	// (0x00089984) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0008e77b) vids_list_double_pane_t

0xb1f7,	// (0x00089a10) main_ncimui_pane_ParamLimits

0x8afb,	// (0x00087314) main_ncimui_pane_g1_ParamLimits

0x8b07,	// (0x00087320) main_ncimui_pane_g2_ParamLimits

0x8b07,	// (0x00087320) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0008e409) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0008e409) main_ncimui_pane_g

0xb08f,	// (0x000898a8) main_welc_pane_g1_ParamLimits

0xb08f,	// (0x000898a8) main_welc_pane_g1

0xb0a4,	// (0x000898bd) main_welc_pane_g2_ParamLimits

0xb0a4,	// (0x000898bd) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0008e776) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0008e776) main_welc_pane_g

0x16a5,	// (0x0007febe) listscroll_mce_pane_ParamLimits

0x4255,	// (0x00082a6e) wait_bar_pane_cp10

0xca35,	// (0x0008b24e) main_cale_day_pane_ParamLimits

0xca35,	// (0x0008b24e) main_cale_week_pane_ParamLimits

0x16a5,	// (0x0007febe) main_messa_pane_ParamLimits

0x6745,	// (0x00084f5e) main_clock2_btn_pane_ParamLimits

0x6745,	// (0x00084f5e) main_clock2_btn_pane

0xd3a8,	// (0x0008bbc1) main_clock2_btn_pane_cp01_ParamLimits

0xd3a8,	// (0x0008bbc1) main_clock2_btn_pane_cp01

0x9ec5,	// (0x000886de) list_cale_mrui_pane_ParamLimits

0xa747,	// (0x00088f60) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0008e6d0) main_cf0_pane_g

0xabed,	// (0x00089406) area_left_week_number_pane_ParamLimits

0xabf9,	// (0x00089412) area_top_day_name_pane_ParamLimits

0xac0c,	// (0x00089425) frame_month_view_pane_ParamLimits

0xac1f,	// (0x00089438) grid_month_view_pane_ParamLimits

0xac9b,	// (0x000894b4) frm_month_g1_ParamLimits

0xaca8,	// (0x000894c1) frm_month_g2_ParamLimits

0xacbb,	// (0x000894d4) frm_month_g3_ParamLimits

0xacce,	// (0x000894e7) frm_month_g4_ParamLimits

0xace1,	// (0x000894fa) frm_month_g5_ParamLimits

0xacf4,	// (0x0008950d) frm_month_g6_ParamLimits

0xad07,	// (0x00089520) frm_month_g7_ParamLimits

0xad1a,	// (0x00089533) frm_month_g8_ParamLimits

0xad27,	// (0x00089540) frm_month_g9_ParamLimits

0xad37,	// (0x00089550) frm_month_g10_ParamLimits

0xad47,	// (0x00089560) frm_month_g11_ParamLimits

0xad57,	// (0x00089570) frm_month_g12_ParamLimits

0xad69,	// (0x00089582) frm_month_g13_ParamLimits

0xad7b,	// (0x00089594) frm_month_g14_ParamLimits

0xad8f,	// (0x000895a8) frm_month_g15_ParamLimits

0xada3,	// (0x000895bc) frm_month_g16_ParamLimits

0xff08,	// (0x0008e721) frm_month_g_ParamLimits

0xadb7,	// (0x000895d0) cell_top_day_name_pane_t1_ParamLimits

0xadca,	// (0x000895e3) cell_area_left_week_number_pane_g1_ParamLimits

0xadd6,	// (0x000895ef) cell_area_left_week_number_pane_t1_ParamLimits

0xd1c8,	// (0x0008b9e1) cell_month_view_pane_g1_ParamLimits

0xade9,	// (0x00089602) cell_month_view_pane_t1_ParamLimits

0x169d,	// (0x0007feb6) main_clock2_btn_pane_g1

0xb17b,	// (0x00089994) main_clock2_btn_pane_t1

0xb1f7,	// (0x00089a10) listscroll_cmail_pane_ParamLimits

0x9971,	// (0x0008818a) main_sp_fs_email_pane_g1_ParamLimits

0x997d,	// (0x00088196) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0008e504) main_sp_fs_email_pane_g_ParamLimits

0xa15e,	// (0x00088977) list_recal_day_pane_ParamLimits

0xa16f,	// (0x00088988) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
