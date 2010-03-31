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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005b49b };

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
0x0f2c,	// (0x0005c3c7) Screen

0x0f38,	// (0x0005c3d3) application_window

0x0f94,	// (0x0005c42f) area_bottom_pane_ParamLimits

0x0f94,	// (0x0005c42f) area_bottom_pane

0x0fed,	// (0x0005c488) area_top_pane_ParamLimits

0x0fed,	// (0x0005c488) area_top_pane

0x1051,	// (0x0005c4ec) call_video_uplink_pane_ParamLimits

0x1051,	// (0x0005c4ec) call_video_uplink_pane

0x1090,	// (0x0005c52b) main_pane_ParamLimits

0x1090,	// (0x0005c52b) main_pane

0xce4f,	// (0x000682ea) context_pane

0x467e,	// (0x0005fb19) navi_pane

0x46a4,	// (0x0005fb3f) popup_cale_events_window_ParamLimits

0x46a4,	// (0x0005fb3f) popup_cale_events_window

0xce62,	// (0x000682fd) popup_mup_playback_window

0x46bc,	// (0x0005fb57) signal_pane

0xae20,	// (0x000662bb) main_browser_pane

0xba44,	// (0x00066edf) main_burst_pane

0x44fc,	// (0x0005f997) main_calc_pane

0xce35,	// (0x000682d0) main_cale_day_pane

0x17f3,	// (0x0005cc8e) main_cale_month_pane

0xce35,	// (0x000682d0) main_cale_week_pane

0xba44,	// (0x00066edf) main_call_pane

0xab00,	// (0x00065f9b) main_call_poc_pane

0xba44,	// (0x00066edf) main_camera_pane

0xba44,	// (0x00066edf) main_chi_dic_pane

0xb7c1,	// (0x00066c5c) main_clock_pane

0xab00,	// (0x00065f9b) main_fmradio_pane

0xba44,	// (0x00066edf) main_graph_messa_pane

0xab00,	// (0x00065f9b) main_help_pane

0xae20,	// (0x000662bb) main_im_pane

0xad5b,	// (0x000661f6) main_image_pane_ParamLimits

0xad5b,	// (0x000661f6) main_image_pane

0xab00,	// (0x00065f9b) main_location2_pane

0xba44,	// (0x00066edf) main_location_pane

0xad5b,	// (0x000661f6) main_messa_pane

0xab00,	// (0x00065f9b) main_mp2_pane

0xba44,	// (0x00066edf) main_mp_pane

0xab00,	// (0x00065f9b) main_msg_pane

0xab00,	// (0x00065f9b) main_mup_eq_pane

0xab00,	// (0x00065f9b) main_mup_pane

0xae20,	// (0x000662bb) main_notes_pane

0xab00,	// (0x00065f9b) main_pec_pane

0xab00,	// (0x00065f9b) main_phob_pane

0xab00,	// (0x00065f9b) main_pinb_pane

0xab00,	// (0x00065f9b) main_postcard_pane

0xab00,	// (0x00065f9b) main_qdial_pane

0xba44,	// (0x00066edf) main_skin_pane

0xab00,	// (0x00065f9b) main_smil2_pane

0xba44,	// (0x00066edf) main_smil_pane

0xba44,	// (0x00066edf) main_video_pane

0xba44,	// (0x00066edf) main_video_tele_pane

0xad5b,	// (0x000661f6) main_viewer_pane_ParamLimits

0xad5b,	// (0x000661f6) main_viewer_pane

0xba44,	// (0x00066edf) main_vorec_pane

0x4548,	// (0x0005f9e3) popup_blid_sat_info_window_ParamLimits

0x4548,	// (0x0005f9e3) popup_blid_sat_info_window

0x4568,	// (0x0005fa03) popup_dyc_status_message_window_ParamLimits

0x4568,	// (0x0005fa03) popup_dyc_status_message_window

0x4578,	// (0x0005fa13) popup_grid_large_graphic_window_ParamLimits

0x4578,	// (0x0005fa13) popup_grid_large_graphic_window

0x4609,	// (0x0005faa4) popup_loc_request_window_ParamLimits

0x4609,	// (0x0005faa4) popup_loc_request_window

0x4656,	// (0x0005faf1) popup_wml_address_window_ParamLimits

0x4656,	// (0x0005faf1) popup_wml_address_window

0x43d4,	// (0x0005f86f) call_muted_g1

0x4096,	// (0x0005f531) popup_call_audio_conf_window_ParamLimits

0x4096,	// (0x0005f531) popup_call_audio_conf_window

0x43e4,	// (0x0005f87f) popup_call_audio_first_window_ParamLimits

0x43e4,	// (0x0005f87f) popup_call_audio_first_window

0x4424,	// (0x0005f8bf) popup_call_audio_in_window_ParamLimits

0x4424,	// (0x0005f8bf) popup_call_audio_in_window

0x4448,	// (0x0005f8e3) popup_call_audio_out_window_ParamLimits

0x4448,	// (0x0005f8e3) popup_call_audio_out_window

0x446a,	// (0x0005f905) popup_call_audio_second_window_ParamLimits

0x446a,	// (0x0005f905) popup_call_audio_second_window

0x449a,	// (0x0005f935) popup_call_audio_wait_window_ParamLimits

0x449a,	// (0x0005f935) popup_call_audio_wait_window

0x44bb,	// (0x0005f956) popup_number_entry_window_ParamLimits

0x44bb,	// (0x0005f956) popup_number_entry_window

0xa41f,	// (0x000658ba) bg_popup_call_pane_cp05_ParamLimits

0xa41f,	// (0x000658ba) bg_popup_call_pane_cp05

0xa43f,	// (0x000658da) popup_number_entry_window_t1

0xa452,	// (0x000658ed) popup_number_entry_window_t2

0xa464,	// (0x000658ff) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0006a568) popup_number_entry_window_t

0xa476,	// (0x00065911) text_title_cp2

0xa489,	// (0x00065924) bg_popup_call_pane_cp_ParamLimits

0xa489,	// (0x00065924) bg_popup_call_pane_cp

0xa497,	// (0x00065932) call_thumbnail_pane

0xa49f,	// (0x0006593a) popup_call_audio_in_window_g1_ParamLimits

0xa49f,	// (0x0006593a) popup_call_audio_in_window_g1

0xa4ab,	// (0x00065946) popup_call_audio_in_window_g2_ParamLimits

0xa4ab,	// (0x00065946) popup_call_audio_in_window_g2

0xa4b7,	// (0x00065952) popup_call_audio_in_window_g3_ParamLimits

0xa4b7,	// (0x00065952) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0006a571) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0006a571) popup_call_audio_in_window_g

0xa4c3,	// (0x0006595e) popup_call_audio_in_window_t1_ParamLimits

0xa4c3,	// (0x0006595e) popup_call_audio_in_window_t1

0xa4df,	// (0x0006597a) popup_call_audio_in_window_t2_ParamLimits

0xa4df,	// (0x0006597a) popup_call_audio_in_window_t2

0xa4fb,	// (0x00065996) popup_call_audio_in_window_t3_ParamLimits

0xa4fb,	// (0x00065996) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0006a578) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0006a578) popup_call_audio_in_window_t

0xa489,	// (0x00065924) bg_popup_call_pane_cp01_ParamLimits

0xa489,	// (0x00065924) bg_popup_call_pane_cp01

0xa497,	// (0x00065932) call_thumbnail_pane_cp02

0xa50e,	// (0x000659a9) call_type_pane_cp022

0xa516,	// (0x000659b1) popup_call_audio_out_window_g1_ParamLimits

0xa516,	// (0x000659b1) popup_call_audio_out_window_g1

0xa528,	// (0x000659c3) popup_call_audio_out_window_g2_ParamLimits

0xa528,	// (0x000659c3) popup_call_audio_out_window_g2

0xa534,	// (0x000659cf) popup_call_audio_out_window_g3_ParamLimits

0xa534,	// (0x000659cf) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0006a57f) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0006a57f) popup_call_audio_out_window_g

0xa546,	// (0x000659e1) popup_call_audio_out_window_t1_ParamLimits

0xa546,	// (0x000659e1) popup_call_audio_out_window_t1

0xa55e,	// (0x000659f9) popup_call_audio_out_window_t2_ParamLimits

0xa55e,	// (0x000659f9) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0006a586) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0006a586) popup_call_audio_out_window_t

0xa573,	// (0x00065a0e) bg_popup_call_pane_ParamLimits

0xa573,	// (0x00065a0e) bg_popup_call_pane

0x12a9,	// (0x0005c744) call_thumbnail_pane_cp_ParamLimits

0x12a9,	// (0x0005c744) call_thumbnail_pane_cp

0xa5f7,	// (0x00065a92) call_type_pane_cp01_ParamLimits

0xa5f7,	// (0x00065a92) call_type_pane_cp01

0xa63b,	// (0x00065ad6) popup_call_audio_first_window_g1_ParamLimits

0xa63b,	// (0x00065ad6) popup_call_audio_first_window_g1

0xa939,	// (0x00065dd4) popup_call_audio_first_window_g2_ParamLimits

0xa939,	// (0x00065dd4) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0006a58b) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0006a58b) popup_call_audio_first_window_g

0xa999,	// (0x00065e34) popup_call_audio_first_window_t1_ParamLimits

0xa999,	// (0x00065e34) popup_call_audio_first_window_t1

0xaa45,	// (0x00065ee0) popup_call_audio_first_window_t4_ParamLimits

0xaa45,	// (0x00065ee0) popup_call_audio_first_window_t4

0xaad1,	// (0x00065f6c) popup_call_audio_first_window_t5_ParamLimits

0xaad1,	// (0x00065f6c) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0006a590) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0006a590) popup_call_audio_first_window_t

0xab00,	// (0x00065f9b) bg_popup_call_pane_cp02

0xab0a,	// (0x00065fa5) call_type_pane_cp023

0xab12,	// (0x00065fad) popup_call_audio_wait_window_g1

0xab1a,	// (0x00065fb5) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006a597) popup_call_audio_wait_window_g

0xab22,	// (0x00065fbd) popup_call_audio_wait_window_t3

0xab30,	// (0x00065fcb) bg_popup_call_pane_cp03_ParamLimits

0xab30,	// (0x00065fcb) bg_popup_call_pane_cp03

0xab90,	// (0x0006602b) call_thumbnail_pane_cp011_ParamLimits

0xab90,	// (0x0006602b) call_thumbnail_pane_cp011

0xab9c,	// (0x00066037) call_type_pane_cp034_ParamLimits

0xab9c,	// (0x00066037) call_type_pane_cp034

0xabd8,	// (0x00066073) popup_call_audio_second_window_g1_ParamLimits

0xabd8,	// (0x00066073) popup_call_audio_second_window_g1

0xac14,	// (0x000660af) popup_call_audio_second_window_g2_ParamLimits

0xac14,	// (0x000660af) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0006a59c) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0006a59c) popup_call_audio_second_window_g

0xac50,	// (0x000660eb) popup_call_audio_second_window_t1_ParamLimits

0xac50,	// (0x000660eb) popup_call_audio_second_window_t1

0xacd1,	// (0x0006616c) popup_call_audio_second_window_t2_ParamLimits

0xacd1,	// (0x0006616c) popup_call_audio_second_window_t2

0xad07,	// (0x000661a2) popup_call_audio_second_window_t3_ParamLimits

0xad07,	// (0x000661a2) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0006a5a1) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0006a5a1) popup_call_audio_second_window_t

0xab00,	// (0x00065f9b) bg_popup_call_pane_cp04

0xad3d,	// (0x000661d8) list_conf_pane

0xad45,	// (0x000661e0) popup_call_audio_conf_window_t1

0xad53,	// (0x000661ee) call_thumbnail_pane_g1

0xad5b,	// (0x000661f6) bg_pinb_pane_ParamLimits

0xad5b,	// (0x000661f6) bg_pinb_pane

0xad69,	// (0x00066204) find_pinb_pane

0xad72,	// (0x0006620d) listscroll_pinb_pane_ParamLimits

0xad72,	// (0x0006620d) listscroll_pinb_pane

0xad81,	// (0x0006621c) pinb_bg_pane_g1

0x12cd,	// (0x0005c768) pinb_bg_pane_g2

0x12d9,	// (0x0005c774) pinb_bg_pane_g3

0x12e5,	// (0x0005c780) pinb_bg_pane_g4

0x12f1,	// (0x0005c78c) pinb_bg_pane_g5

0x12fd,	// (0x0005c798) pinb_bg_pane_g6

0x1308,	// (0x0005c7a3) pinb_bg_pane_g7

0x1313,	// (0x0005c7ae) pinb_bg_pane_g8

0x131e,	// (0x0005c7b9) pinb_bg_pane_g9

0x1328,	// (0x0005c7c3) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0006a5a8) pinb_bg_pane_g

0x1345,	// (0x0005c7e0) grid_pinb_pane

0x1350,	// (0x0005c7eb) list_pinb_pane

0x135b,	// (0x0005c7f6) scroll_pane_cp01_ParamLimits

0x135b,	// (0x0005c7f6) scroll_pane_cp01

0xad8b,	// (0x00066226) find_pinb_pane_g1_ParamLimits

0xad8b,	// (0x00066226) find_pinb_pane_g1

0xada3,	// (0x0006623e) find_pinb_pane_t1

0xadb5,	// (0x00066250) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0006a5c2) find_pinb_pane_t

0xadca,	// (0x00066265) input_focus_pane_cp01_ParamLimits

0xadca,	// (0x00066265) input_focus_pane_cp01

0x136d,	// (0x0005c808) cell_pinb_pane_ParamLimits

0x136d,	// (0x0005c808) cell_pinb_pane

0x1395,	// (0x0005c830) cell_pinb_pane_g1_ParamLimits

0x1395,	// (0x0005c830) cell_pinb_pane_g1

0x13aa,	// (0x0005c845) cell_pinb_pane_g2_ParamLimits

0x13aa,	// (0x0005c845) cell_pinb_pane_g2

0xadd6,	// (0x00066271) cell_pinb_pane_g3_ParamLimits

0xadd6,	// (0x00066271) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0006a5c7) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0006a5c7) cell_pinb_pane_g

0xab00,	// (0x00065f9b) grid_highlight_pane_cp01

0x13b6,	// (0x0005c851) list_pinb_item_pane_ParamLimits

0x13b6,	// (0x0005c851) list_pinb_item_pane

0xab00,	// (0x00065f9b) list_highlight_pane_cp02

0x13dc,	// (0x0005c877) list_pinb_item_pane_g1_ParamLimits

0x13dc,	// (0x0005c877) list_pinb_item_pane_g1

0x13e9,	// (0x0005c884) list_pinb_item_pane_g2_ParamLimits

0x13e9,	// (0x0005c884) list_pinb_item_pane_g2

0x13f5,	// (0x0005c890) list_pinb_item_pane_g3_ParamLimits

0x13f5,	// (0x0005c890) list_pinb_item_pane_g3

0x1406,	// (0x0005c8a1) list_pinb_item_pane_g4_ParamLimits

0x1406,	// (0x0005c8a1) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0006a5ce) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0006a5ce) list_pinb_item_pane_g

0x1412,	// (0x0005c8ad) list_pinb_item_pane_t1_ParamLimits

0x1412,	// (0x0005c8ad) list_pinb_item_pane_t1

0x1443,	// (0x0005c8de) calc_display_pane

0x1461,	// (0x0005c8fc) calc_paper_pane

0x147d,	// (0x0005c918) grid_calc_pane

0xab00,	// (0x00065f9b) bg_list_pane_cp01

0x14a9,	// (0x0005c944) clock_g1

0x14b1,	// (0x0005c94c) clock_g2

0x0001,

0xf13c,	// (0x0006a5d7) clock_g

0x14bb,	// (0x0005c956) clock_t1_ParamLimits

0x14bb,	// (0x0005c956) clock_t1

0x14d0,	// (0x0005c96b) clock_t2_ParamLimits

0x14d0,	// (0x0005c96b) clock_t2

0x14e2,	// (0x0005c97d) clock_t3_ParamLimits

0x14e2,	// (0x0005c97d) clock_t3

0x14f4,	// (0x0005c98f) clock_t4_ParamLimits

0x14f4,	// (0x0005c98f) clock_t4

0x1506,	// (0x0005c9a1) clock_t5_ParamLimits

0x1506,	// (0x0005c9a1) clock_t5

0x151b,	// (0x0005c9b6) clock_t6_ParamLimits

0x151b,	// (0x0005c9b6) clock_t6

0x152d,	// (0x0005c9c8) clock_t7_ParamLimits

0x152d,	// (0x0005c9c8) clock_t7

0x153f,	// (0x0005c9da) clock_t8_ParamLimits

0x153f,	// (0x0005c9da) clock_t8

0x1555,	// (0x0005c9f0) clock_t9_ParamLimits

0x1555,	// (0x0005c9f0) clock_t9

0x0008,

0xf141,	// (0x0006a5dc) clock_t_ParamLimits

0xf141,	// (0x0006a5dc) clock_t

0xade2,	// (0x0006627d) popup_clock_analogue_window_cp02

0xade2,	// (0x0006627d) popup_clock_digital_window_cp01

0xadea,	// (0x00066285) listscroll_help_pane

0xab00,	// (0x00065f9b) phob_pre_status_pane

0xadf4,	// (0x0006628f) grid_qdial_pane

0xad5b,	// (0x000661f6) listscroll_mce_pane

0xad5b,	// (0x000661f6) bg_notes_pane

0xadfe,	// (0x00066299) list_notes_pane

0x156b,	// (0x0005ca06) scroll_pane_cp06

0xae0c,	// (0x000662a7) bg_calc_paper_pane

0x157a,	// (0x0005ca15) list_calc_pane

0xae20,	// (0x000662bb) bg_calc_display_pane

0x1594,	// (0x0005ca2f) calc_display_pane_t1

0x15a9,	// (0x0005ca44) calc_display_pane_t2

0x15be,	// (0x0005ca59) calc_display_pane_t3

0x0002,

0xf154,	// (0x0006a5ef) calc_display_pane_t

0x15d0,	// (0x0005ca6b) cell_calc_pane_ParamLimits

0x15d0,	// (0x0005ca6b) cell_calc_pane

0xae2c,	// (0x000662c7) bg_calc_paper_pane_g1

0xae44,	// (0x000662df) bg_calc_paper_pane_g2

0xae38,	// (0x000662d3) bg_calc_paper_pane_g3

0xae50,	// (0x000662eb) bg_calc_paper_pane_g4

0xae5c,	// (0x000662f7) bg_calc_paper_pane_g5

0x15fd,	// (0x0005ca98) bg_calc_paper_pane_g6

0x160e,	// (0x0005caa9) bg_calc_paper_pane_g7

0x161f,	// (0x0005caba) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0006a5f6) bg_calc_paper_pane_g

0x1630,	// (0x0005cacb) calc_bg_paper_pane_g9

0x1641,	// (0x0005cadc) list_calc_item_pane_ParamLimits

0x1641,	// (0x0005cadc) list_calc_item_pane

0xae68,	// (0x00066303) list_calc_item_pane_g1

0x1670,	// (0x0005cb0b) list_calc_item_pane_t1_ParamLimits

0x1670,	// (0x0005cb0b) list_calc_item_pane_t1

0x1682,	// (0x0005cb1d) list_calc_item_pane_t2_ParamLimits

0x1682,	// (0x0005cb1d) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0006a607) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0006a607) list_calc_item_pane_t

0xae75,	// (0x00066310) cell_calc_pane_g1

0xae7f,	// (0x0006631a) grid_highlight_pane_cp02

0x16b2,	// (0x0005cb4d) bg_calc_display_pane_g1

0x16bb,	// (0x0005cb56) bg_calc_display_pane_g2

0xd276,	// (0x00068711) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0006a611) bg_calc_display_pane_g

0x16c5,	// (0x0005cb60) cell_qdial_pane_ParamLimits

0x16c5,	// (0x0005cb60) cell_qdial_pane

0x16d9,	// (0x0005cb74) cell_qdial_pane_g1_ParamLimits

0x16d9,	// (0x0005cb74) cell_qdial_pane_g1

0x16e6,	// (0x0005cb81) cell_qdial_pane_g2_ParamLimits

0x16e6,	// (0x0005cb81) cell_qdial_pane_g2

0xaea1,	// (0x0006633c) cell_qdial_pane_g3_ParamLimits

0xaea1,	// (0x0006633c) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0006a618) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0006a618) cell_qdial_pane_g

0x1704,	// (0x0005cb9f) cell_qdial_pane_t1_ParamLimits

0x1704,	// (0x0005cb9f) cell_qdial_pane_t1

0x171c,	// (0x0005cbb7) cell_qdial_pane_t2_ParamLimits

0x171c,	// (0x0005cbb7) cell_qdial_pane_t2

0x172f,	// (0x0005cbca) cell_qdial_pane_t3_ParamLimits

0x172f,	// (0x0005cbca) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0006a621) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0006a621) cell_qdial_pane_t

0xab00,	// (0x00065f9b) grid_highlight_pane_cp04

0xaead,	// (0x00066348) thumbnail_qdial_pane_ParamLimits

0xaead,	// (0x00066348) thumbnail_qdial_pane

0xaf09,	// (0x000663a4) list_help_pane

0xaf12,	// (0x000663ad) scroll_pane_cp02

0x1742,	// (0x0005cbdd) help_list_pane_t1_ParamLimits

0x1742,	// (0x0005cbdd) help_list_pane_t1

0x1775,	// (0x0005cc10) bg_notes_pane_g2

0x177d,	// (0x0005cc18) bg_notes_pane_g3

0x1785,	// (0x0005cc20) notes_bg_pane_g1

0x178d,	// (0x0005cc28) notes_bg_pane_g4

0x1795,	// (0x0005cc30) notes_bg_pane_g5

0x179d,	// (0x0005cc38) notes_bg_pane_g6

0x17a5,	// (0x0005cc40) notes_bg_pane_g7

0x17ad,	// (0x0005cc48) notes_bg_pane_g8

0x17b5,	// (0x0005cc50) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0006a63f) notes_bg_pane_g

0x17bd,	// (0x0005cc58) list_notes_text_pane_ParamLimits

0x17bd,	// (0x0005cc58) list_notes_text_pane

0xaf1b,	// (0x000663b6) list_notes_text_pane_g1

0x17e5,	// (0x0005cc80) list_notes_text_pane_t1

0x17f3,	// (0x0005cc8e) listscroll_cale_week_pane

0x1818,	// (0x0005ccb3) bg_cale_heading_pane

0xaf3e,	// (0x000663d9) bg_cale_pane_cp01

0x183a,	// (0x0005ccd5) cale_week_corner_pane

0x1854,	// (0x0005ccef) cale_week_day_heading_pane

0x1876,	// (0x0005cd11) cale_week_scroll_pane_g1

0x1893,	// (0x0005cd2e) cale_week_scroll_pane_g2

0x18a6,	// (0x0005cd41) cale_week_scroll_pane_g3

0x18b9,	// (0x0005cd54) cale_week_scroll_pane_g4

0x18cc,	// (0x0005cd67) cale_week_scroll_pane_g5

0x18df,	// (0x0005cd7a) cale_week_scroll_pane_g6

0x18f2,	// (0x0005cd8d) cale_week_scroll_pane_g7

0x1905,	// (0x0005cda0) cale_week_scroll_pane_g8

0x191a,	// (0x0005cdb5) cale_week_scroll_pane_g9

0x192d,	// (0x0005cdc8) cale_week_scroll_pane_g10

0x1940,	// (0x0005cddb) cale_week_scroll_pane_g11

0x1953,	// (0x0005cdee) cale_week_scroll_pane_g12

0x196a,	// (0x0005ce05) cale_week_scroll_pane_g13

0x1985,	// (0x0005ce20) cale_week_scroll_pane_g14

0x19a0,	// (0x0005ce3b) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0006a64e) cale_week_scroll_pane_g

0x19bb,	// (0x0005ce56) cale_week_time_pane

0x19d0,	// (0x0005ce6b) grid_cale_week_pane

0xaf6e,	// (0x00066409) scroll_pane_cp08

0x19ef,	// (0x0005ce8a) cell_cale_week_pane_ParamLimits

0x19ef,	// (0x0005ce8a) cell_cale_week_pane

0x1a51,	// (0x0005ceec) cale_week_day_heading_pane_t1

0x1a8c,	// (0x0005cf27) cale_week_day_heading_pane_t2

0x1ac7,	// (0x0005cf62) cale_week_day_heading_pane_t3

0x1b02,	// (0x0005cf9d) cale_week_day_heading_pane_t4

0x1b3d,	// (0x0005cfd8) cale_week_day_heading_pane_t5

0x1b78,	// (0x0005d013) cale_week_day_heading_pane_t6

0x1bb3,	// (0x0005d04e) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0006a66d) cale_week_day_heading_pane_t

0xaf8b,	// (0x00066426) bg_cale_side_pane

0x1bee,	// (0x0005d089) cale_week_time_pane_t1

0x1c08,	// (0x0005d0a3) cale_week_time_pane_t2

0x1c22,	// (0x0005d0bd) cale_week_time_pane_t3

0x1c3c,	// (0x0005d0d7) cale_week_time_pane_t4

0x1c56,	// (0x0005d0f1) cale_week_time_pane_t5

0x1c70,	// (0x0005d10b) cale_week_time_pane_t6

0x1c90,	// (0x0005d12b) cale_week_time_pane_t7

0x1cb2,	// (0x0005d14d) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0006a67c) cale_week_time_pane_t

0x1cd6,	// (0x0005d171) cell_cale_week_pane_g2

0x1ce9,	// (0x0005d184) cell_cale_week_pane_g3_ParamLimits

0x1ce9,	// (0x0005d184) cell_cale_week_pane_g3

0xaf99,	// (0x00066434) grid_highlight_pane_cp07

0xafa1,	// (0x0006643c) listscroll_gms_pane

0xafab,	// (0x00066446) grid_gms_pane

0xafb4,	// (0x0006644f) listscroll_gms_pane_g1

0xafbc,	// (0x00066457) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0006a68d) listscroll_gms_pane_g

0x1d01,	// (0x0005d19c) scroll_pane_cp010

0x1d0c,	// (0x0005d1a7) cell_gms_pane_ParamLimits

0x1d0c,	// (0x0005d1a7) cell_gms_pane

0x1d1f,	// (0x0005d1ba) cell_gms_pane_g1

0xafc4,	// (0x0006645f) cell_gms_pane_g2

0xafcc,	// (0x00066467) cell_gms_pane_g3

0xafd5,	// (0x00066470) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0006a692) cell_gms_pane_g

0xafde,	// (0x00066479) grid_highlight_pane_cp09

0x437c,	// (0x0005f817) phob_pre_status_pane_g1

0x4384,	// (0x0005f81f) phob_pre_status_pane_g2

0x438c,	// (0x0005f827) phob_pre_status_pane_g3

0x4394,	// (0x0005f82f) phob_pre_status_pane_g4

0x0004,

0xf500,	// (0x0006a99b) phob_pre_status_pane_g

0x43a4,	// (0x0005f83f) phob_pre_status_pane_t1

0x43b4,	// (0x0005f84f) phob_pre_status_pane_t2

0x43c4,	// (0x0005f85f) phob_pre_status_pane_t3

0x0002,

0xf50b,	// (0x0006a9a6) phob_pre_status_pane_t

0xab00,	// (0x00065f9b) bg_list_pane_cp05

0x1d2f,	// (0x0005d1ca) grid_vorec_pane

0x1d39,	// (0x0005d1d4) vorec_t1

0x1d47,	// (0x0005d1e2) vorec_t2

0x1d55,	// (0x0005d1f0) vorec_t3

0x1d63,	// (0x0005d1fe) vorec_t4

0x1d71,	// (0x0005d20c) vorec_t5

0x1d7f,	// (0x0005d21a) vorec_t6

0x0006,

0xf200,	// (0x0006a69b) vorec_t

0x1d9b,	// (0x0005d236) wait_bar_pane_cp01

0x1da3,	// (0x0005d23e) cell_vorec_pane_ParamLimits

0x1da3,	// (0x0005d23e) cell_vorec_pane

0x1db6,	// (0x0005d251) cell_vorec_pane_g1

0xab00,	// (0x00065f9b) grid_highlight_pane_cp05

0x1dd0,	// (0x0005d26b) cams_zoom_pane

0x1ddc,	// (0x0005d277) image_vga_pane

0x1deb,	// (0x0005d286) main_camera_pane_g1

0x1df9,	// (0x0005d294) main_camera_pane_g2

0x1e05,	// (0x0005d2a0) main_camera_pane_g3

0x1e11,	// (0x0005d2ac) main_camera_pane_g4

0x1e1d,	// (0x0005d2b8) main_camera_pane_g5

0x1e29,	// (0x0005d2c4) main_camera_pane_g6

0x1e35,	// (0x0005d2d0) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0006a6aa) main_camera_pane_g

0x1e41,	// (0x0005d2dc) main_camera_pane_t1

0x1e53,	// (0x0005d2ee) main_camera_pane_t2

0x0001,

0xf220,	// (0x0006a6bb) main_camera_pane_t

0x1e74,	// (0x0005d30f) cams_zoom_pane_cp_ParamLimits

0x1e74,	// (0x0005d30f) cams_zoom_pane_cp

0x1e98,	// (0x0005d333) image_cif_pane_ParamLimits

0x1e98,	// (0x0005d333) image_cif_pane

0x1eb6,	// (0x0005d351) image_subqcif_pane

0x1ebe,	// (0x0005d359) main_video_pane_g1_ParamLimits

0x1ebe,	// (0x0005d359) main_video_pane_g1

0x1ede,	// (0x0005d379) main_video_pane_g2_ParamLimits

0x1ede,	// (0x0005d379) main_video_pane_g2

0x1f0e,	// (0x0005d3a9) main_video_pane_g3_ParamLimits

0x1f0e,	// (0x0005d3a9) main_video_pane_g3

0x1f37,	// (0x0005d3d2) main_video_pane_g4_ParamLimits

0x1f37,	// (0x0005d3d2) main_video_pane_g4

0x1f60,	// (0x0005d3fb) main_video_pane_g5_ParamLimits

0x1f60,	// (0x0005d3fb) main_video_pane_g5

0xaff2,	// (0x0006648d) main_video_pane_g6_ParamLimits

0xaff2,	// (0x0006648d) main_video_pane_g6

0x0006,

0xf225,	// (0x0006a6c0) main_video_pane_g_ParamLimits

0xf225,	// (0x0006a6c0) main_video_pane_g

0x1f82,	// (0x0005d41d) main_video_pane_t1_ParamLimits

0x1f82,	// (0x0005d41d) main_video_pane_t1

0xb00c,	// (0x000664a7) cams_zoom_pane_g1

0xb015,	// (0x000664b0) cams_zoom_pane_g2

0xb01e,	// (0x000664b9) cams_zoom_pane_g3

0xb027,	// (0x000664c2) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0006a6cf) cams_zoom_pane_g

0x1fcc,	// (0x0005d467) grid_cams_pane

0x1fda,	// (0x0005d475) linegrid_cams_pane

0x1fe8,	// (0x0005d483) cell_cams_pane_ParamLimits

0x1fe8,	// (0x0005d483) cell_cams_pane

0xb030,	// (0x000664cb) cams_burst_image_pane

0xb038,	// (0x000664d3) cell_cams_pane_g1

0xab00,	// (0x00065f9b) grid_highlight_pane_cp03

0xae75,	// (0x00066310) mp_bg_pane_g1

0xab00,	// (0x00065f9b) bg_list_pane_cp03

0xcd5a,	// (0x000681f5) bg_mp_pane

0xcd62,	// (0x000681fd) grid_mp_pane

0xcd6a,	// (0x00068205) media_player_g1

0xcd72,	// (0x0006820d) media_player_t1

0xcd80,	// (0x0006821b) media_player_t2

0xcd8e,	// (0x00068229) media_player_t3

0xcd9c,	// (0x00068237) media_player_t4

0xcdaa,	// (0x00068245) media_player_t5

0xcdb8,	// (0x00068253) media_player_t6

0xcdc6,	// (0x00068261) media_player_t7

0x0006,

0x04ee,	// (0x0005b989) media_player_t

0xcdd4,	// (0x0006826f) wait_bar_pane_cp02

0xf4ec,	// (0x0006a987) main_usb_pane_t

0x4373,	// (0x0005f80e) cell_mp_pane

0xae75,	// (0x00066310) cell_mp_pane_g1

0xab00,	// (0x00065f9b) grid_highlight_pane_cp06

0xb040,	// (0x000664db) grid_skin_colour_pane

0xb048,	// (0x000664e3) list_highlight_pane_cp03

0x2108,	// (0x0005d5a3) skin_g1

0xb050,	// (0x000664eb) skin_t1

0xb05f,	// (0x000664fa) skin_t2

0x0001,

0xf269,	// (0x0006a704) skin_t

0x2112,	// (0x0005d5ad) cell_skin_colour_pane_ParamLimits

0x2112,	// (0x0005d5ad) cell_skin_colour_pane

0xb06d,	// (0x00066508) cell_skin_colour_pane_g1

0x2196,	// (0x0005d631) call_video_g1_ParamLimits

0x2196,	// (0x0005d631) call_video_g1

0x21a6,	// (0x0005d641) call_video_g2_ParamLimits

0x21a6,	// (0x0005d641) call_video_g2

0x0001,

0xf26e,	// (0x0006a709) call_video_g_ParamLimits

0xf26e,	// (0x0006a709) call_video_g

0x2200,	// (0x0005d69b) call_video_uplink_pane_cp1_ParamLimits

0x2200,	// (0x0005d69b) call_video_uplink_pane_cp1

0xb07f,	// (0x0006651a) call_video_uplink_pane_cp2

0x22cc,	// (0x0005d767) video_down_crop_pane_ParamLimits

0x22cc,	// (0x0005d767) video_down_crop_pane

0x23ca,	// (0x0005d865) video_down_pane_ParamLimits

0x23ca,	// (0x0005d865) video_down_pane

0xb087,	// (0x00066522) video_down_subqcif_pane_ParamLimits

0xb087,	// (0x00066522) video_down_subqcif_pane

0xb09f,	// (0x0006653a) video_down_subqcif_pane_cp_ParamLimits

0xb09f,	// (0x0006653a) video_down_subqcif_pane_cp

0xb0c5,	// (0x00066560) im_reading_pane_ParamLimits

0xb0c5,	// (0x00066560) im_reading_pane

0x24ec,	// (0x0005d987) im_writing_pane_ParamLimits

0x24ec,	// (0x0005d987) im_writing_pane

0x250a,	// (0x0005d9a5) im_reading_pane_t1

0xb0df,	// (0x0006657a) list_im_pane

0xb0f0,	// (0x0006658b) scroll_pane_cp07

0x255e,	// (0x0005d9f9) im_writing_pane_t1_ParamLimits

0x255e,	// (0x0005d9f9) im_writing_pane_t1

0xb109,	// (0x000665a4) im_writing_pane_t2_ParamLimits

0xb109,	// (0x000665a4) im_writing_pane_t2

0x0001,

0xf278,	// (0x0006a713) im_writing_pane_t_ParamLimits

0xf278,	// (0x0006a713) im_writing_pane_t

0xab00,	// (0x00065f9b) input_focus_pane_cp04

0xab00,	// (0x00065f9b) input_focus_pane_cp05

0x2573,	// (0x0005da0e) list_im_single_pane_ParamLimits

0x2573,	// (0x0005da0e) list_im_single_pane

0x2597,	// (0x0005da32) list_single_im_pane_t1

0x4337,	// (0x0005f7d2) blid_accuracy_pane

0x433f,	// (0x0005f7da) blid_compass_pane

0x4349,	// (0x0005f7e4) main_location_t1

0x4357,	// (0x0005f7f2) main_location_t2

0x4365,	// (0x0005f800) main_location_t3

0x0002,

0xf4f9,	// (0x0006a994) main_location_t

0xab00,	// (0x00065f9b) aid_levels_location

0xae75,	// (0x00066310) blid_accuracy_pane_g1

0xae75,	// (0x00066310) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0006a775) blid_accuracy_pane_g

0xb151,	// (0x000665ec) wml_content_pane

0xb18f,	// (0x0006662a) wml_button_pane_ParamLimits

0xb18f,	// (0x0006662a) wml_button_pane

0x25a6,	// (0x0005da41) wml_list_single_large_pane_ParamLimits

0x25a6,	// (0x0005da41) wml_list_single_large_pane

0x25d0,	// (0x0005da6b) wml_list_single_medium_pane_ParamLimits

0x25d0,	// (0x0005da6b) wml_list_single_medium_pane

0x2601,	// (0x0005da9c) wml_list_single_small_pane_ParamLimits

0x2601,	// (0x0005da9c) wml_list_single_small_pane

0xb1a3,	// (0x0006663e) wml_selection_box_pane_ParamLimits

0xb1a3,	// (0x0006663e) wml_selection_box_pane

0xb1b6,	// (0x00066651) wml_list_single_pane_t1

0xb1c5,	// (0x00066660) wml_list_single_medium_pane_t1

0xb1d4,	// (0x0006666f) wml_list_single_large_pane_t1

0xb1e3,	// (0x0006667e) input_focus_pane_cp02_ParamLimits

0xb1e3,	// (0x0006667e) input_focus_pane_cp02

0xb1f6,	// (0x00066691) wml_selection_box_pane_g1

0xb1ff,	// (0x0006669a) wml_selection_box_pane_t1_ParamLimits

0xb1ff,	// (0x0006669a) wml_selection_box_pane_t1

0xad5b,	// (0x000661f6) bg_wml_button_pane_ParamLimits

0xad5b,	// (0x000661f6) bg_wml_button_pane

0xb217,	// (0x000666b2) wml_button_pane_g1

0xb21f,	// (0x000666ba) wml_button_pane_t1

0xb217,	// (0x000666b2) wml_button_bg_pane_g1

0xb22f,	// (0x000666ca) wml_button_bg_pane_g2

0xb237,	// (0x000666d2) wml_button_bg_pane_g3

0xb23f,	// (0x000666da) wml_button_bg_pane_g4

0xb247,	// (0x000666e2) wml_button_bg_pane_g5

0xb24f,	// (0x000666ea) wml_button_bg_pane_g6

0xb257,	// (0x000666f2) wml_button_bg_pane_g7

0xb25f,	// (0x000666fa) wml_button_bg_pane_g8

0xb267,	// (0x00066702) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0006a718) wml_button_bg_pane_g

0x263b,	// (0x0005dad6) bg_list_pane_cp02

0xb26f,	// (0x0006670a) mce_header_pane_ParamLimits

0xb26f,	// (0x0006670a) mce_header_pane

0xb285,	// (0x00066720) mce_icon_pane

0xb285,	// (0x00066720) mce_image_pane

0xb28e,	// (0x00066729) mce_text_pane_ParamLimits

0xb28e,	// (0x00066729) mce_text_pane

0x2645,	// (0x0005dae0) scroll_pane_cp03

0xb187,	// (0x00066622) scroll_pane_cp04

0xb2a1,	// (0x0006673c) scroll_pane_cp05_ParamLimits

0xb2a1,	// (0x0006673c) scroll_pane_cp05

0x264f,	// (0x0005daea) mce_header_field_pane_ParamLimits

0x264f,	// (0x0005daea) mce_header_field_pane

0x266f,	// (0x0005db0a) mce_header_field_pane_2_ParamLimits

0x266f,	// (0x0005db0a) mce_header_field_pane_2

0x2685,	// (0x0005db20) mce_header_field_pane_3

0x268d,	// (0x0005db28) list_single_mce_message_pane_ParamLimits

0x268d,	// (0x0005db28) list_single_mce_message_pane

0x26b8,	// (0x0005db53) list_single_mce_smart_pane_ParamLimits

0x26b8,	// (0x0005db53) list_single_mce_smart_pane

0xb2ad,	// (0x00066748) input_focus_pane_cp03

0xb2b6,	// (0x00066751) list_header_data_pane

0x26ee,	// (0x0005db89) mce_header_field_pane_t1

0x26fc,	// (0x0005db97) list_single_mce_header_pane_ParamLimits

0x26fc,	// (0x0005db97) list_single_mce_header_pane

0xb2be,	// (0x00066759) list_single_mce_header_pane_t1

0xb2cd,	// (0x00066768) list_single_mce_message_pane_g1

0xb2d5,	// (0x00066770) list_single_mce_message_pane_t1

0x274e,	// (0x0005dbe9) bg_cale_heading_pane_cp01_ParamLimits

0x274e,	// (0x0005dbe9) bg_cale_heading_pane_cp01

0xb2e3,	// (0x0006677e) bg_cale_pane_cp02_ParamLimits

0xb2e3,	// (0x0006677e) bg_cale_pane_cp02

0x2791,	// (0x0005dc2c) cale_month_corner_pane

0x27ab,	// (0x0005dc46) cale_month_day_heading_pane_ParamLimits

0x27ab,	// (0x0005dc46) cale_month_day_heading_pane

0x2806,	// (0x0005dca1) cale_month_pane_g1_ParamLimits

0x2806,	// (0x0005dca1) cale_month_pane_g1

0x283e,	// (0x0005dcd9) cale_month_pane_g2_ParamLimits

0x283e,	// (0x0005dcd9) cale_month_pane_g2

0x2867,	// (0x0005dd02) cale_month_pane_g3_ParamLimits

0x2867,	// (0x0005dd02) cale_month_pane_g3

0x28b3,	// (0x0005dd4e) cale_month_pane_g4_ParamLimits

0x28b3,	// (0x0005dd4e) cale_month_pane_g4

0x28ff,	// (0x0005dd9a) cale_month_pane_g5_ParamLimits

0x28ff,	// (0x0005dd9a) cale_month_pane_g5

0x294b,	// (0x0005dde6) cale_month_pane_g6_ParamLimits

0x294b,	// (0x0005dde6) cale_month_pane_g6

0x2997,	// (0x0005de32) cale_month_pane_g7_ParamLimits

0x2997,	// (0x0005de32) cale_month_pane_g7

0x29fb,	// (0x0005de96) cale_month_pane_g8_ParamLimits

0x29fb,	// (0x0005de96) cale_month_pane_g8

0x2a5f,	// (0x0005defa) cale_month_pane_g9_ParamLimits

0x2a5f,	// (0x0005defa) cale_month_pane_g9

0x2abd,	// (0x0005df58) cale_month_pane_g10_ParamLimits

0x2abd,	// (0x0005df58) cale_month_pane_g10

0x2b19,	// (0x0005dfb4) cale_month_pane_g11_ParamLimits

0x2b19,	// (0x0005dfb4) cale_month_pane_g11

0x2b6d,	// (0x0005e008) cale_month_pane_g12_ParamLimits

0x2b6d,	// (0x0005e008) cale_month_pane_g12

0x2bc3,	// (0x0005e05e) cale_month_pane_g13_ParamLimits

0x2bc3,	// (0x0005e05e) cale_month_pane_g13

0x000c,

0xf290,	// (0x0006a72b) cale_month_pane_g_ParamLimits

0xf290,	// (0x0006a72b) cale_month_pane_g

0x2c19,	// (0x0005e0b4) cale_month_week_pane

0x2c2e,	// (0x0005e0c9) grid_cale_month_pane_ParamLimits

0x2c2e,	// (0x0005e0c9) grid_cale_month_pane

0x2c7c,	// (0x0005e117) cale_month_day_heading_pane_t1

0x2d02,	// (0x0005e19d) cale_month_day_heading_pane_t2

0x2d93,	// (0x0005e22e) cale_month_day_heading_pane_t3

0x2e24,	// (0x0005e2bf) cale_month_day_heading_pane_t4

0x2eb5,	// (0x0005e350) cale_month_day_heading_pane_t5

0x2f46,	// (0x0005e3e1) cale_month_day_heading_pane_t6

0x2fd7,	// (0x0005e472) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0006a746) cale_month_day_heading_pane_t

0xaf8b,	// (0x00066426) bg_cale_side_pane_cp01

0x3080,	// (0x0005e51b) cale_month_week_pane_t1

0x3099,	// (0x0005e534) cale_month_week_pane_t2

0x30b2,	// (0x0005e54d) cale_month_week_pane_t3

0x30cb,	// (0x0005e566) cale_month_week_pane_t4

0x30e4,	// (0x0005e57f) cale_month_week_pane_t5

0x3105,	// (0x0005e5a0) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0006a755) cale_month_week_pane_t

0x3126,	// (0x0005e5c1) cell_cale_month_pane_ParamLimits

0x3126,	// (0x0005e5c1) cell_cale_month_pane

0x3272,	// (0x0005e70d) cell_cale_month_pane_g1

0x327e,	// (0x0005e719) cell_cale_month_pane_t1_ParamLimits

0x327e,	// (0x0005e719) cell_cale_month_pane_t1

0xaf99,	// (0x00066434) grid_highlight_pane_cp08

0xae75,	// (0x00066310) main_smil_g1

0x329e,	// (0x0005e739) smil_status_pane

0xb322,	// (0x000667bd) smil_text_pane

0xcc7a,	// (0x00068115) bg_popup_call3_rect_pane_g8

0xcc82,	// (0x0006811d) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d4,	// (0x0006a96f) bg_popup_call3_rect_pane_g

0xcedc,	// (0x00068377) smil_status_volume_pane_g1

0xb32c,	// (0x000667c7) smil_status_pane_t1

0x476f,	// (0x0005fc0a) volume_smil_pane

0xb343,	// (0x000667de) list_smil_text_pane

0x32b1,	// (0x0005e74c) scroll_pane_cp011

0x32bc,	// (0x0005e757) smil_text_list_pane_t1_ParamLimits

0x32bc,	// (0x0005e757) smil_text_list_pane_t1

0x3334,	// (0x0005e7cf) aid_volume_smil_ParamLimits

0x3334,	// (0x0005e7cf) aid_volume_smil

0xae75,	// (0x00066310) smil_volume_pane_g1

0xae75,	// (0x00066310) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0006a775) smil_volume_pane_g

0x17f3,	// (0x0005cc8e) listscroll_cale_day_pane

0xb34d,	// (0x000667e8) bg_cale_pane

0xb365,	// (0x00066800) list_cale_pane

0xb388,	// (0x00066823) scroll_pane_cp09

0xb399,	// (0x00066834) cale_bg_pane_g1

0xb3a1,	// (0x0006683c) cale_bg_pane_g2

0xb3a9,	// (0x00066844) cale_bg_pane_g3

0xb3b1,	// (0x0006684c) cale_bg_pane_g4

0xb3b9,	// (0x00066854) cale_bg_pane_g5

0xb3c1,	// (0x0006685c) cale_bg_pane_g6

0xb3c9,	// (0x00066864) cale_bg_pane_g7

0xb3d1,	// (0x0006686c) cale_bg_pane_g8

0xb3d9,	// (0x00066874) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0006a77a) cale_bg_pane_g

0x335e,	// (0x0005e7f9) list_cale_time_pane_ParamLimits

0x335e,	// (0x0005e7f9) list_cale_time_pane

0xb3e1,	// (0x0006687c) list_cale_time_pane_g1_ParamLimits

0xb3e1,	// (0x0006687c) list_cale_time_pane_g1

0xb3ed,	// (0x00066888) list_cale_time_pane_g2_ParamLimits

0xb3ed,	// (0x00066888) list_cale_time_pane_g2

0x3380,	// (0x0005e81b) list_cale_time_pane_g3_ParamLimits

0x3380,	// (0x0005e81b) list_cale_time_pane_g3

0x338e,	// (0x0005e829) list_cale_time_pane_g4_ParamLimits

0x338e,	// (0x0005e829) list_cale_time_pane_g4

0x339c,	// (0x0005e837) list_cale_time_pane_g5_ParamLimits

0x339c,	// (0x0005e837) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0006a78d) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0006a78d) list_cale_time_pane_g

0xb407,	// (0x000668a2) list_cale_time_pane_t1_ParamLimits

0xb407,	// (0x000668a2) list_cale_time_pane_t1

0xb42f,	// (0x000668ca) list_cale_time_pane_t2_ParamLimits

0xb42f,	// (0x000668ca) list_cale_time_pane_t2

0x3732,	// (0x0005ebcd) aid_blid_cardinal_pane

0x3774,	// (0x0005ec0f) compass_pane_t4

0xb457,	// (0x000668f2) list_cale_time_pane_t4_ParamLimits

0xb457,	// (0x000668f2) list_cale_time_pane_t4

0x3782,	// (0x0005ec1d) compass_pane_t5

0x3792,	// (0x0005ec2d) compass_pane_t6

0x37a0,	// (0x0005ec3b) compass_pane_t7

0xb906,	// (0x00066da1) navi_pane_cc_t1

0xbaeb,	// (0x00066f86) aid_phob_thumbnail_center_pane

0x3e3d,	// (0x0005f2d8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0006a79a) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0006a79a) list_cale_time_pane_t

0xa489,	// (0x00065924) bg_popup_window_pane_cp02_ParamLimits

0xa489,	// (0x00065924) bg_popup_window_pane_cp02

0xb47f,	// (0x0006691a) heading_pane_cp01_ParamLimits

0xb47f,	// (0x0006691a) heading_pane_cp01

0xb48b,	// (0x00066926) loc_req_pane_ParamLimits

0xb48b,	// (0x00066926) loc_req_pane

0xb49b,	// (0x00066936) loc_type_pane_ParamLimits

0xb49b,	// (0x00066936) loc_type_pane

0xb4ad,	// (0x00066948) loc_type_pane_t1_ParamLimits

0xb4ad,	// (0x00066948) loc_type_pane_t1

0xb4bf,	// (0x0006695a) loc_type_pane_t2_ParamLimits

0xb4bf,	// (0x0006695a) loc_type_pane_t2

0xb4d1,	// (0x0006696c) loc_type_pane_t3_ParamLimits

0xb4d1,	// (0x0006696c) loc_type_pane_t3

0x0002,

0xf306,	// (0x0006a7a1) loc_type_pane_t_ParamLimits

0xf306,	// (0x0006a7a1) loc_type_pane_t

0xb4e3,	// (0x0006697e) list_loc_req_pane

0xb4ed,	// (0x00066988) scroll_pane_cp012

0x33aa,	// (0x0005e845) list_single_loc_request_popup_menu_pane_ParamLimits

0x33aa,	// (0x0005e845) list_single_loc_request_popup_menu_pane

0xb4f8,	// (0x00066993) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb4f8,	// (0x00066993) list_single_loc_request_popup_menu_pane_g1

0xb504,	// (0x0006699f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb504,	// (0x0006699f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0006a7a8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0006a7a8) list_single_loc_request_popup_menu_pane_g

0xb510,	// (0x000669ab) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb510,	// (0x000669ab) list_single_loc_request_popup_menu_pane_t1

0x33bc,	// (0x0005e857) bg_popup_window_pane_cp03_ParamLimits

0x33bc,	// (0x0005e857) bg_popup_window_pane_cp03

0x33ca,	// (0x0005e865) heading_loc_req_pane_ParamLimits

0x33ca,	// (0x0005e865) heading_loc_req_pane

0x33d6,	// (0x0005e871) popup_dyc_status_message_window_g1_ParamLimits

0x33d6,	// (0x0005e871) popup_dyc_status_message_window_g1

0x33e2,	// (0x0005e87d) popup_dyc_status_message_window_t1_ParamLimits

0x33e2,	// (0x0005e87d) popup_dyc_status_message_window_t1

0x33f4,	// (0x0005e88f) popup_dyc_status_message_window_t2_ParamLimits

0x33f4,	// (0x0005e88f) popup_dyc_status_message_window_t2

0x3406,	// (0x0005e8a1) popup_dyc_status_message_window_t3_ParamLimits

0x3406,	// (0x0005e8a1) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0006a7ad) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0006a7ad) popup_dyc_status_message_window_t

0xab00,	// (0x00065f9b) bg_heading_pane_cp01

0xb526,	// (0x000669c1) heading_loc_req_pane_g1

0xb52e,	// (0x000669c9) heading_loc_req_pane_g2

0xb536,	// (0x000669d1) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0006a7b4) heading_loc_req_pane_g

0xb54a,	// (0x000669e5) heading_loc_req_pane_t1

0xb559,	// (0x000669f4) bg_popup_sub_pane_cp01_ParamLimits

0xb559,	// (0x000669f4) bg_popup_sub_pane_cp01

0xb567,	// (0x00066a02) popup_cale_events_window_g1_ParamLimits

0xb567,	// (0x00066a02) popup_cale_events_window_g1

0xb587,	// (0x00066a22) popup_cale_events_window_g2_ParamLimits

0xb587,	// (0x00066a22) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0006a7e8) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0006a7e8) popup_cale_events_window_g

0xb5a7,	// (0x00066a42) popup_cale_events_window_t1_ParamLimits

0xb5a7,	// (0x00066a42) popup_cale_events_window_t1

0xb5b9,	// (0x00066a54) popup_cale_events_window_t2_ParamLimits

0xb5b9,	// (0x00066a54) popup_cale_events_window_t2

0xb5f7,	// (0x00066a92) popup_cale_events_window_t3_ParamLimits

0xb5f7,	// (0x00066a92) popup_cale_events_window_t3

0xb631,	// (0x00066acc) popup_cale_events_window_t4_ParamLimits

0xb631,	// (0x00066acc) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0006a7ed) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0006a7ed) popup_cale_events_window_t

0x34ff,	// (0x0005e99a) call_type_pane

0xbafb,	// (0x00066f96) popup_call_status_window_g1

0x350b,	// (0x0005e9a6) popup_call_status_window_g2

0x3517,	// (0x0005e9b2) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0006a7f6) popup_call_status_window_g

0xb667,	// (0x00066b02) call_type_pane_g1

0xb670,	// (0x00066b0b) call_type_pane_g2

0x0001,

0x0280,	// (0x0005b71b) call_type_pane_g

0xab00,	// (0x00065f9b) bg_popup_sub_pane_cp02

0xb679,	// (0x00066b14) listscroll_popup_wml_pane

0xb681,	// (0x00066b1c) list_wml_pane

0xb68b,	// (0x00066b26) scroll_pane_cp013

0xb696,	// (0x00066b31) list_single_graphic_popup_wml_pane_ParamLimits

0xb696,	// (0x00066b31) list_single_graphic_popup_wml_pane

0xae75,	// (0x00066310) list_single_graphic_popup_wml_pane_g1

0xb6aa,	// (0x00066b45) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006a7fd) list_single_graphic_popup_wml_pane_g

0xb6b2,	// (0x00066b4d) list_single_graphic_popup_wml_pane_t1

0xb6c0,	// (0x00066b5b) aid_call_pane

0xad53,	// (0x000661ee) popup_clock_analogue_window_g1

0xad53,	// (0x000661ee) popup_clock_analogue_window_g2

0x3523,	// (0x0005e9be) popup_clock_analogue_window_g3

0x3523,	// (0x0005e9be) popup_clock_analogue_window_g4

0xae75,	// (0x00066310) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006a802) popup_clock_analogue_window_g

0x352b,	// (0x0005e9c6) popup_clock_analogue_window_t1

0x3539,	// (0x0005e9d4) clock_digital_number_pane_ParamLimits

0x3539,	// (0x0005e9d4) clock_digital_number_pane

0x3545,	// (0x0005e9e0) clock_digital_number_pane_cp02_ParamLimits

0x3545,	// (0x0005e9e0) clock_digital_number_pane_cp02

0x3551,	// (0x0005e9ec) clock_digital_number_pane_cp03_ParamLimits

0x3551,	// (0x0005e9ec) clock_digital_number_pane_cp03

0x355d,	// (0x0005e9f8) clock_digital_number_pane_cp04_ParamLimits

0x355d,	// (0x0005e9f8) clock_digital_number_pane_cp04

0x356d,	// (0x0005ea08) clock_digital_separator_pane_ParamLimits

0x356d,	// (0x0005ea08) clock_digital_separator_pane

0x3579,	// (0x0005ea14) popup_clock_digital_window_t1

0xae75,	// (0x00066310) clock_digital_number_pane_g1

0xae75,	// (0x00066310) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0006a775) clock_digital_number_pane_g

0xae75,	// (0x00066310) clock_digital_separator_pane_g1

0xae75,	// (0x00066310) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0006a775) clock_digital_separator_pane_g

0xab00,	// (0x00065f9b) bg_popup_window_pane_cp04

0xb6d0,	// (0x00066b6b) heading_pane_cp03

0xb6d8,	// (0x00066b73) listscroll_popup_gms_pane

0xb6e0,	// (0x00066b7b) grid_large_graphic_popup_pane

0xb6ea,	// (0x00066b85) listscroll_popup_gms_pane_g1

0xb6f2,	// (0x00066b8d) listscroll_popup_gms_pane_g2

0x0001,

0x0295,	// (0x0005b730) listscroll_popup_gms_pane_g

0xb187,	// (0x00066622) scroll_pane_cp014

0x3596,	// (0x0005ea31) cell_large_graphic_popup_pane_ParamLimits

0x3596,	// (0x0005ea31) cell_large_graphic_popup_pane

0x35ae,	// (0x0005ea49) cell_large_graphic_popup_pane_g1_ParamLimits

0x35ae,	// (0x0005ea49) cell_large_graphic_popup_pane_g1

0xb6fa,	// (0x00066b95) cell_large_graphic_popup_pane_g2_ParamLimits

0xb6fa,	// (0x00066b95) cell_large_graphic_popup_pane_g2

0xb706,	// (0x00066ba1) cell_large_graphic_popup_pane_g3_ParamLimits

0xb706,	// (0x00066ba1) cell_large_graphic_popup_pane_g3

0xb713,	// (0x00066bae) cell_large_graphic_popup_pane_g4_ParamLimits

0xb713,	// (0x00066bae) cell_large_graphic_popup_pane_g4

0x0003,

0xf372,	// (0x0006a80d) cell_large_graphic_popup_pane_g_ParamLimits

0xf372,	// (0x0006a80d) cell_large_graphic_popup_pane_g

0xb723,	// (0x00066bbe) grid_highlight_pane_cp010

0xae75,	// (0x00066310) bg_popup_call_pane_g1

0xb72d,	// (0x00066bc8) list_single_graphic_popup_conf_pane_ParamLimits

0xb72d,	// (0x00066bc8) list_single_graphic_popup_conf_pane

0xb740,	// (0x00066bdb) list_highlight_pane_cp01

0xb749,	// (0x00066be4) list_single_graphic_popup_conf_pane_g1

0xb751,	// (0x00066bec) list_single_graphic_popup_conf_pane_g2

0x0001,

0x02a3,	// (0x0005b73e) list_single_graphic_popup_conf_pane_g

0xb759,	// (0x00066bf4) list_single_graphic_popup_conf_pane_t1

0xb767,	// (0x00066c02) linegrid_cams_pane_g1

0x35ba,	// (0x0005ea55) linegrid_cams_pane_g2

0xafcc,	// (0x00066467) linegrid_cams_pane_g3

0xb770,	// (0x00066c0b) linegrid_cams_pane_g4

0x35c3,	// (0x0005ea5e) linegrid_cams_pane_g5

0x35cc,	// (0x0005ea67) linegrid_cams_pane_g6

0xafd5,	// (0x00066470) linegrid_cams_pane_g7

0x0006,

0xf37b,	// (0x0006a816) linegrid_cams_pane_g

0xb779,	// (0x00066c14) popup_clock_analogue_window

0xb779,	// (0x00066c14) popup_clock_digital_window

0xab00,	// (0x00065f9b) popup_phob_thumbnail_window

0xae75,	// (0x00066310) call_video_uplink_pane_g1

0xb782,	// (0x00066c1d) call_video_uplink_pane_g2

0x0001,

0xf38a,	// (0x0006a825) call_video_uplink_pane_g

0xb78a,	// (0x00066c25) video_uplink_pane

0xb792,	// (0x00066c2d) mce_image_pane_g1

0x35d5,	// (0x0005ea70) mce_image_pane_g2

0x35df,	// (0x0005ea7a) mce_image_pane_g3

0x35e7,	// (0x0005ea82) mce_image_pane_g4

0x35ef,	// (0x0005ea8a) mce_image_pane_g5

0x0004,

0xf38f,	// (0x0006a82a) mce_image_pane_g

0xb79c,	// (0x00066c37) control_top_pane_stacon_cp01_ParamLimits

0xb79c,	// (0x00066c37) control_top_pane_stacon_cp01

0xb7b0,	// (0x00066c4b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb7b0,	// (0x00066c4b) uni_indicator_pane_stacon_cp01

0xb7c1,	// (0x00066c5c) bg_popup_sub_pane_cp03

0xb7cb,	// (0x00066c66) chi_dic_find_pane

0x35f7,	// (0x0005ea92) listscroll_chi_dic_pane

0xb7d3,	// (0x00066c6e) main_pane_chidic_g1

0xb7db,	// (0x00066c76) chi_dic_find_pane_t1

0xb7e9,	// (0x00066c84) find_chidic_pane

0xb7f2,	// (0x00066c8d) chi_dic_list_pane_ParamLimits

0xb7f2,	// (0x00066c8d) chi_dic_list_pane

0xb803,	// (0x00066c9e) scroll_pane_cp020

0xb80b,	// (0x00066ca6) find_chidic_pane_t1

0xab00,	// (0x00065f9b) input_focus_pane_cp06

0x360b,	// (0x0005eaa6) list_chi_dic_pane_ParamLimits

0x360b,	// (0x0005eaa6) list_chi_dic_pane

0x3625,	// (0x0005eac0) list_chi_dic_pane_t1_ParamLimits

0x3625,	// (0x0005eac0) list_chi_dic_pane_t1

0xab00,	// (0x00065f9b) list_highlight_pane_cp020

0xb81a,	// (0x00066cb5) bg_cale_heading_pane_g1

0x3638,	// (0x0005ead3) bg_cale_heading_pane_g2

0x3640,	// (0x0005eadb) bg_cale_heading_pane_g3

0x3648,	// (0x0005eae3) bg_cale_heading_pane_g4

0x3652,	// (0x0005eaed) bg_cale_heading_pane_g5

0x365c,	// (0x0005eaf7) bg_cale_heading_pane_g6

0x3664,	// (0x0005eaff) bg_cale_heading_pane_g7

0x366c,	// (0x0005eb07) bg_cale_heading_pane_g8

0x3676,	// (0x0005eb11) bg_cale_heading_pane_g9

0x0008,

0xf39a,	// (0x0006a835) bg_cale_heading_pane_g

0xb81a,	// (0x00066cb5) bg_cale_side_pane_g1

0x3680,	// (0x0005eb1b) bg_cale_side_pane_g2

0x368a,	// (0x0005eb25) bg_cale_side_pane_g3

0x3694,	// (0x0005eb2f) bg_cale_side_pane_g4

0x369e,	// (0x0005eb39) bg_cale_side_pane_g5

0x36a8,	// (0x0005eb43) bg_cale_side_pane_g6

0x36b2,	// (0x0005eb4d) bg_cale_side_pane_g7

0x36bc,	// (0x0005eb57) bg_cale_side_pane_g8

0x36c4,	// (0x0005eb5f) bg_cale_side_pane_g9

0x0008,

0xf3ad,	// (0x0006a848) bg_cale_side_pane_g

0x36cc,	// (0x0005eb67) popup_call_status_window_ParamLimits

0x36cc,	// (0x0005eb67) popup_call_status_window

0xb822,	// (0x00066cbd) stacon_top_pane

0xb82a,	// (0x00066cc5) status_pane_ParamLimits

0xb82a,	// (0x00066cc5) status_pane

0xb83f,	// (0x00066cda) status_small_pane

0xb847,	// (0x00066ce2) control_pane

0xab00,	// (0x00065f9b) stacon_bottom_pane

0xb84f,	// (0x00066cea) list_single_mce_smart_pane_t1_ParamLimits

0xb84f,	// (0x00066cea) list_single_mce_smart_pane_t1

0xb862,	// (0x00066cfd) list_single_mce_smart_pane_t2_ParamLimits

0xb862,	// (0x00066cfd) list_single_mce_smart_pane_t2

0x0001,

0x02ed,	// (0x0005b788) list_single_mce_smart_pane_t_ParamLimits

0x02ed,	// (0x0005b788) list_single_mce_smart_pane_t

0x36d8,	// (0x0005eb73) compass_pane

0x36e4,	// (0x0005eb7f) main_location2_pane_t1

0x36f8,	// (0x0005eb93) main_location2_pane_t2

0x370c,	// (0x0005eba7) main_location2_pane_t3

0x0003,

0xf3c0,	// (0x0006a85b) main_location2_pane_t

0xb881,	// (0x00066d1c) compass_pane_g1_ParamLimits

0xb881,	// (0x00066d1c) compass_pane_g1

0x3756,	// (0x0005ebf1) compass_pane_t1

0x3765,	// (0x0005ec00) compass_pane_t2

0x0005,

0xf3c9,	// (0x0006a864) compass_pane_t

0x37b0,	// (0x0005ec4b) text_secondary_cp61

0xb8fd,	// (0x00066d98) navi_pane_cams_g5

0xb979,	// (0x00066e14) navi_pane_im_t1

0xb987,	// (0x00066e22) navi_pane_mp_g1_ParamLimits

0xb987,	// (0x00066e22) navi_pane_mp_g1

0xb99b,	// (0x00066e36) navi_pane_mp_g2_ParamLimits

0xb99b,	// (0x00066e36) navi_pane_mp_g2

0xb9a7,	// (0x00066e42) navi_pane_mp_g3_ParamLimits

0xb9a7,	// (0x00066e42) navi_pane_mp_g3

0x0002,

0x030f,	// (0x0005b7aa) navi_pane_mp_g_ParamLimits

0x030f,	// (0x0005b7aa) navi_pane_mp_g

0xb9b3,	// (0x00066e4e) navi_pane_mp_t1

0xb9c1,	// (0x00066e5c) navi_pane_mp_t2

0x0002,

0x0316,	// (0x0005b7b1) navi_pane_mp_t

0xba2c,	// (0x00066ec7) navi_pane_vt_g1

0xb9b3,	// (0x00066e4e) navi_pane_vt_t1

0xba34,	// (0x00066ecf) navi_slider_pane

0xba44,	// (0x00066edf) zooming_pane

0xba4c,	// (0x00066ee7) navi_slider_pane_g1

0x37eb,	// (0x0005ec86) navi_slider_pane_g2

0x0006,

0xf3d6,	// (0x0006a871) navi_slider_pane_g

0xba70,	// (0x00066f0b) aid_levels_zoom

0xba78,	// (0x00066f13) zooming_pane_g1

0xba80,	// (0x00066f1b) zooming_pane_g2

0xba80,	// (0x00066f1b) zooming_pane_g3

0x0002,

0x032c,	// (0x0005b7c7) zooming_pane_g

0xba88,	// (0x00066f23) level_10_zoom

0xba91,	// (0x00066f2c) level_11_zoom

0xba9a,	// (0x00066f35) level_1_zoom

0xbaa3,	// (0x00066f3e) level_2_zoom

0xbaac,	// (0x00066f47) level_3_zoom

0xbab5,	// (0x00066f50) level_4_zoom

0xbabe,	// (0x00066f59) level_5_zoom

0xbac7,	// (0x00066f62) level_6_zoom

0xbad0,	// (0x00066f6b) level_7_zoom

0xbad9,	// (0x00066f74) level_8_zoom

0xbae2,	// (0x00066f7d) level_9_zoom

0xbaf3,	// (0x00066f8e) popup_phob_thumbnail_window_g1

0xbb09,	// (0x00066fa4) popup_phob_thumbnail_window_g2

0x0001,

0xf3e5,	// (0x0006a880) popup_phob_thumbnail_window_g

0xcddc,	// (0x00068277) level_1_location

0xcde4,	// (0x0006827f) level_2_location

0xcdec,	// (0x00068287) level_3_location

0xcdf4,	// (0x0006828f) level_4_location

0xba44,	// (0x00066edf) level_5_location

0x37fd,	// (0x0005ec98) mce_icon_pane_g1

0x3805,	// (0x0005eca0) mce_icon_pane_g2

0x0001,

0xf3ea,	// (0x0006a885) mce_icon_pane_g

0x380d,	// (0x0005eca8) main_mup_pane_g1_ParamLimits

0x380d,	// (0x0005eca8) main_mup_pane_g1

0x3825,	// (0x0005ecc0) main_mup_pane_g2_ParamLimits

0x3825,	// (0x0005ecc0) main_mup_pane_g2

0x3841,	// (0x0005ecdc) main_mup_pane_g3_ParamLimits

0x3841,	// (0x0005ecdc) main_mup_pane_g3

0x385d,	// (0x0005ecf8) main_mup_pane_g4_ParamLimits

0x385d,	// (0x0005ecf8) main_mup_pane_g4

0x3879,	// (0x0005ed14) main_mup_pane_g5_ParamLimits

0x3879,	// (0x0005ed14) main_mup_pane_g5

0x389a,	// (0x0005ed35) main_mup_pane_g6_ParamLimits

0x389a,	// (0x0005ed35) main_mup_pane_g6

0x38b6,	// (0x0005ed51) main_mup_pane_g7_ParamLimits

0x38b6,	// (0x0005ed51) main_mup_pane_g7

0x38d2,	// (0x0005ed6d) main_mup_pane_g8_ParamLimits

0x38d2,	// (0x0005ed6d) main_mup_pane_g8

0x38f2,	// (0x0005ed8d) main_mup_pane_g9_ParamLimits

0x38f2,	// (0x0005ed8d) main_mup_pane_g9

0x3911,	// (0x0005edac) main_mup_pane_g10_ParamLimits

0x3911,	// (0x0005edac) main_mup_pane_g10

0x3930,	// (0x0005edcb) main_mup_pane_g11_ParamLimits

0x3930,	// (0x0005edcb) main_mup_pane_g11

0x3948,	// (0x0005ede3) main_mup_pane_g12_ParamLimits

0x3948,	// (0x0005ede3) main_mup_pane_g12

0x3956,	// (0x0005edf1) main_mup_pane_g13_ParamLimits

0x3956,	// (0x0005edf1) main_mup_pane_g13

0x000c,

0xf3ef,	// (0x0006a88a) main_mup_pane_g_ParamLimits

0xf3ef,	// (0x0006a88a) main_mup_pane_g

0x396c,	// (0x0005ee07) main_mup_pane_t1_ParamLimits

0x396c,	// (0x0005ee07) main_mup_pane_t1

0x3989,	// (0x0005ee24) main_mup_pane_t2_ParamLimits

0x3989,	// (0x0005ee24) main_mup_pane_t2

0x39a3,	// (0x0005ee3e) main_mup_pane_t3_ParamLimits

0x39a3,	// (0x0005ee3e) main_mup_pane_t3

0x39bd,	// (0x0005ee58) main_mup_pane_t4_ParamLimits

0x39bd,	// (0x0005ee58) main_mup_pane_t4

0x39cf,	// (0x0005ee6a) main_mup_pane_t5_ParamLimits

0x39cf,	// (0x0005ee6a) main_mup_pane_t5

0x39e1,	// (0x0005ee7c) main_mup_pane_t6_ParamLimits

0x39e1,	// (0x0005ee7c) main_mup_pane_t6

0x0005,

0xf40a,	// (0x0006a8a5) main_mup_pane_t_ParamLimits

0xf40a,	// (0x0006a8a5) main_mup_pane_t

0x39f7,	// (0x0005ee92) mup_progress_pane_ParamLimits

0x39f7,	// (0x0005ee92) mup_progress_pane

0x3a03,	// (0x0005ee9e) mup_visualizer_pane_ParamLimits

0x3a03,	// (0x0005ee9e) mup_visualizer_pane

0x3a3d,	// (0x0005eed8) mup_volume_pane_ParamLimits

0x3a3d,	// (0x0005eed8) mup_volume_pane

0xbafb,	// (0x00066f96) mup_visualizer_pane_g1_ParamLimits

0xbafb,	// (0x00066f96) mup_visualizer_pane_g1

0xbafb,	// (0x00066f96) mup_visualizer_pane_g2_ParamLimits

0xbafb,	// (0x00066f96) mup_visualizer_pane_g2

0xb881,	// (0x00066d1c) mup_visualizer_pane_g3_ParamLimits

0xb881,	// (0x00066d1c) mup_visualizer_pane_g3

0x0002,

0xf417,	// (0x0006a8b2) mup_visualizer_pane_g_ParamLimits

0xf417,	// (0x0006a8b2) mup_visualizer_pane_g

0xae75,	// (0x00066310) mup_volume_pane_g1

0xbb19,	// (0x00066fb4) mup_volume_pane_g2

0x0001,

0xf41e,	// (0x0006a8b9) mup_volume_pane_g

0xae75,	// (0x00066310) mup_progress_pane_g1

0xbb22,	// (0x00066fbd) mup_progress_pane_g2

0xbb2b,	// (0x00066fc6) mup_progress_pane_g3

0x0002,

0xf423,	// (0x0006a8be) mup_progress_pane_g

0xab00,	// (0x00065f9b) bg_popup_window_pane_cp05

0xbb34,	// (0x00066fcf) heading_pane_cp02_ParamLimits

0xbb34,	// (0x00066fcf) heading_pane_cp02

0xbb4e,	// (0x00066fe9) list_popup_blid_pane

0xbb56,	// (0x00066ff1) list_blid_sat_info_pane_ParamLimits

0xbb56,	// (0x00066ff1) list_blid_sat_info_pane

0xbb69,	// (0x00067004) list_blid_sat_info_pane_g1

0xbb71,	// (0x0006700c) list_blid_sat_info_pane_t1

0x3b4a,	// (0x0005efe5) mup_equalizer_pane_ParamLimits

0x3b4a,	// (0x0005efe5) mup_equalizer_pane

0x3b6b,	// (0x0005f006) mup_equalizer_pane_cp1_ParamLimits

0x3b6b,	// (0x0005f006) mup_equalizer_pane_cp1

0x3b8c,	// (0x0005f027) mup_equalizer_pane_cp2_ParamLimits

0x3b8c,	// (0x0005f027) mup_equalizer_pane_cp2

0x3bad,	// (0x0005f048) mup_equalizer_pane_cp3_ParamLimits

0x3bad,	// (0x0005f048) mup_equalizer_pane_cp3

0x3bce,	// (0x0005f069) mup_equalizer_pane_cp4_ParamLimits

0x3bce,	// (0x0005f069) mup_equalizer_pane_cp4

0x3bef,	// (0x0005f08a) mup_equalizer_pane_cp5

0x3c05,	// (0x0005f0a0) mup_equalizer_pane_cp6

0x3c1d,	// (0x0005f0b8) mup_equalizer_pane_cp7

0xccfa,	// (0x00068195) bg_popup_call_poc_act_pane_g9

0xcd02,	// (0x0006819d) bg_popup_call_poc_act_pane_g10

0xcd0a,	// (0x000681a5) bg_popup_call_poc_act_pane_g11

0x000a,

0xad5b,	// (0x000661f6) mup_scale_pane

0xae75,	// (0x00066310) mup_scale_pane_g1

0xbb7f,	// (0x0006701a) mup_scale_pane_g2

0x0006,

0xf43f,	// (0x0006a8da) mup_scale_pane_g

0xbba3,	// (0x0006703e) msg_data_pane

0xbbab,	// (0x00067046) scroll_pane_cp017

0x3c47,	// (0x0005f0e2) bg_list_pane_cp04_ParamLimits

0x3c47,	// (0x0005f0e2) bg_list_pane_cp04

0xbbb3,	// (0x0006704e) msg_data_pane_g1

0x3c63,	// (0x0005f0fe) msg_data_pane_g2

0x3c6d,	// (0x0005f108) msg_data_pane_g3

0x3c75,	// (0x0005f110) msg_data_pane_g4

0x3c7d,	// (0x0005f118) msg_data_pane_g5

0x3c85,	// (0x0005f120) msg_data_pane_g6

0x3c8d,	// (0x0005f128) msg_data_pane_g7

0x0006,

0xf44e,	// (0x0006a8e9) msg_data_pane_g

0x3c95,	// (0x0005f130) msg_text_pane_ParamLimits

0x3c95,	// (0x0005f130) msg_text_pane

0x3cd5,	// (0x0005f170) qrid_highlight_pane_cp011_ParamLimits

0x3cd5,	// (0x0005f170) qrid_highlight_pane_cp011

0xab00,	// (0x00065f9b) msg_body_pane

0xab00,	// (0x00065f9b) msg_header_pane

0xbbbb,	// (0x00067056) input_focus_pane_cp07

0x3d04,	// (0x0005f19f) msg_header_pane_t1_ParamLimits

0x3d04,	// (0x0005f19f) msg_header_pane_t1

0x9cd7,	// (0x00065172) msg_header_pane_t2_ParamLimits

0x9cd7,	// (0x00065172) msg_header_pane_t2

0x0001,

0xf462,	// (0x0006a8fd) msg_header_pane_t_ParamLimits

0xf462,	// (0x0006a8fd) msg_header_pane_t

0xbbd0,	// (0x0006706b) msg_body_pane_g1

0x3d16,	// (0x0005f1b1) msg_body_pane_t1_ParamLimits

0x3d16,	// (0x0005f1b1) msg_body_pane_t1

0x9ce9,	// (0x00065184) msg_body_pane_t2_ParamLimits

0x9ce9,	// (0x00065184) msg_body_pane_t2

0x9cfb,	// (0x00065196) msg_body_pane_t3_ParamLimits

0x9cfb,	// (0x00065196) msg_body_pane_t3

0x0002,

0xf467,	// (0x0006a902) msg_body_pane_t_ParamLimits

0xf467,	// (0x0006a902) msg_body_pane_t

0x3d99,	// (0x0005f234) main_viewer_pane_g1_ParamLimits

0x3d99,	// (0x0005f234) main_viewer_pane_g1

0x3da5,	// (0x0005f240) main_viewer_pane_g2_ParamLimits

0x3da5,	// (0x0005f240) main_viewer_pane_g2

0x3db1,	// (0x0005f24c) main_viewer_pane_g3_ParamLimits

0x3db1,	// (0x0005f24c) main_viewer_pane_g3

0x3dc2,	// (0x0005f25d) main_viewer_pane_g4_ParamLimits

0x3dc2,	// (0x0005f25d) main_viewer_pane_g4

0x3dd3,	// (0x0005f26e) main_viewer_pane_g5_ParamLimits

0x3dd3,	// (0x0005f26e) main_viewer_pane_g5

0x3dd3,	// (0x0005f26e) main_viewer_pane_g7_ParamLimits

0x3dd3,	// (0x0005f26e) main_viewer_pane_g7

0xb4f8,	// (0x00066993) main_viewer_pane_g8_ParamLimits

0xb4f8,	// (0x00066993) main_viewer_pane_g8

0x0007,

0xf477,	// (0x0006a912) main_viewer_pane_g_ParamLimits

0xf477,	// (0x0006a912) main_viewer_pane_g

0xbbd8,	// (0x00067073) viewer_content_pane_ParamLimits

0xbbd8,	// (0x00067073) viewer_content_pane

0x3e11,	// (0x0005f2ac) main_postcard_pane_g1_ParamLimits

0x3e11,	// (0x0005f2ac) main_postcard_pane_g1

0x3e1f,	// (0x0005f2ba) main_postcard_pane_g2_ParamLimits

0x3e1f,	// (0x0005f2ba) main_postcard_pane_g2

0x3e2d,	// (0x0005f2c8) main_postcard_pane_g3_ParamLimits

0x3e2d,	// (0x0005f2c8) main_postcard_pane_g3

0x0005,

0xf488,	// (0x0006a923) main_postcard_pane_g_ParamLimits

0xf488,	// (0x0006a923) main_postcard_pane_g

0x3e3d,	// (0x0005f2d8) main_postcard_pane_g4

0xcec9,	// (0x00068364) smil_status_volume_pane_g2

0x3e69,	// (0x0005f304) postcard_pane_ParamLimits

0x3e69,	// (0x0005f304) postcard_pane

0xbafb,	// (0x00066f96) postcard_pane_g1_ParamLimits

0xbafb,	// (0x00066f96) postcard_pane_g1

0x3e9b,	// (0x0005f336) postcard_pane_g2_ParamLimits

0x3e9b,	// (0x0005f336) postcard_pane_g2

0x3ea7,	// (0x0005f342) postcard_pane_g3_ParamLimits

0x3ea7,	// (0x0005f342) postcard_pane_g3

0xbbe6,	// (0x00067081) postcard_pane_g4_ParamLimits

0xbbe6,	// (0x00067081) postcard_pane_g4

0x3eb3,	// (0x0005f34e) postcard_pane_g5_ParamLimits

0x3eb3,	// (0x0005f34e) postcard_pane_g5

0x3ebf,	// (0x0005f35a) postcard_pane_g6_ParamLimits

0x3ebf,	// (0x0005f35a) postcard_pane_g6

0xbbf4,	// (0x0006708f) postcard_pane_g7_ParamLimits

0xbbf4,	// (0x0006708f) postcard_pane_g7

0x0006,

0xf495,	// (0x0006a930) postcard_pane_g_ParamLimits

0xf495,	// (0x0006a930) postcard_pane_g

0x3ecb,	// (0x0005f366) main_mp2_pane_g1_ParamLimits

0x3ecb,	// (0x0005f366) main_mp2_pane_g1

0x3ed7,	// (0x0005f372) main_mp2_pane_g2_ParamLimits

0x3ed7,	// (0x0005f372) main_mp2_pane_g2

0x3ee3,	// (0x0005f37e) main_mp2_pane_g3_ParamLimits

0x3ee3,	// (0x0005f37e) main_mp2_pane_g3

0x0002,

0xf4a4,	// (0x0006a93f) main_mp2_pane_g_ParamLimits

0xf4a4,	// (0x0006a93f) main_mp2_pane_g

0x3eef,	// (0x0005f38a) main_mp2_pane_t1_ParamLimits

0x3eef,	// (0x0005f38a) main_mp2_pane_t1

0x3f06,	// (0x0005f3a1) main_mp2_pane_t2_ParamLimits

0x3f06,	// (0x0005f3a1) main_mp2_pane_t2

0x3f1a,	// (0x0005f3b5) main_mp2_pane_t3_ParamLimits

0x3f1a,	// (0x0005f3b5) main_mp2_pane_t3

0x0002,

0xf4ab,	// (0x0006a946) main_mp2_pane_t_ParamLimits

0xf4ab,	// (0x0006a946) main_mp2_pane_t

0xbc02,	// (0x0006709d) pec_content_pane_ParamLimits

0xbc02,	// (0x0006709d) pec_content_pane

0xb187,	// (0x00066622) scroll_pane_cp015

0xbc14,	// (0x000670af) pec_attribute_pane_ParamLimits

0xbc14,	// (0x000670af) pec_attribute_pane

0x3f2c,	// (0x0005f3c7) pec_content_pane_g1_ParamLimits

0x3f2c,	// (0x0005f3c7) pec_content_pane_g1

0xbc24,	// (0x000670bf) pec_content_pane_t1_ParamLimits

0xbc24,	// (0x000670bf) pec_content_pane_t1

0xbc36,	// (0x000670d1) pec_content_pane_t2_ParamLimits

0xbc36,	// (0x000670d1) pec_content_pane_t2

0x0001,

0x0400,	// (0x0005b89b) pec_content_pane_t_ParamLimits

0x0400,	// (0x0005b89b) pec_content_pane_t

0x3f38,	// (0x0005f3d3) list_single_graphic_pane_cp01_ParamLimits

0x3f38,	// (0x0005f3d3) list_single_graphic_pane_cp01

0xad5b,	// (0x000661f6) bg_popup_sub_pane_cp04

0xbc48,	// (0x000670e3) popup_mup_playback_window_g1

0xbc54,	// (0x000670ef) popup_mup_playback_window_t1

0xbc69,	// (0x00067104) popup_mup_playback_window_t2

0x0001,

0x0405,	// (0x0005b8a0) popup_mup_playback_window_t

0xbca0,	// (0x0006713b) main_image_pane_g1_ParamLimits

0xbca0,	// (0x0006713b) main_image_pane_g1

0xbce3,	// (0x0006717e) scroll_pane_cp018_ParamLimits

0xbce3,	// (0x0006717e) scroll_pane_cp018

0xbcfb,	// (0x00067196) scroll_pane_cp016_ParamLimits

0xbcfb,	// (0x00067196) scroll_pane_cp016

0x3fd1,	// (0x0005f46c) smil2_image_pane_ParamLimits

0x3fd1,	// (0x0005f46c) smil2_image_pane

0x4001,	// (0x0005f49c) smil2_root_pane_ParamLimits

0x4001,	// (0x0005f49c) smil2_root_pane

0x402d,	// (0x0005f4c8) smil2_text_pane_ParamLimits

0x402d,	// (0x0005f4c8) smil2_text_pane

0xab00,	// (0x00065f9b) bg_list_pane_cp06

0xbd37,	// (0x000671d2) grid_radio_pane

0xab00,	// (0x00065f9b) bg_popup_window_pane_cp06

0xbd3f,	// (0x000671da) main_fmradio_pane_t1

0xb6d0,	// (0x00066b6b) heading_pane_cp04

0xbd4d,	// (0x000671e8) main_fmradio_pane_t2

0xcd12,	// (0x000681ad) popup_cale_lunar_info_window_g1

0xbd5b,	// (0x000671f6) main_fmradio_pane_t3

0xcd1a,	// (0x000681b5) popup_cale_lunar_info_window_g2

0xbd69,	// (0x00067204) main_fmradio_pane_t4

0x0001,

0xbd77,	// (0x00067212) main_fmradio_pane_t5

0x0004,

0x04e0,	// (0x0005b97b) popup_cale_lunar_info_window_g

0x041a,	// (0x0005b8b5) main_fmradio_pane_t

0xbd85,	// (0x00067220) wait_bar_pane_cp03

0xbd8d,	// (0x00067228) cell_fmradio_pane_ParamLimits

0xbd8d,	// (0x00067228) cell_fmradio_pane

0xbbf4,	// (0x0006708f) cell_fmradio_pane_g1_ParamLimits

0xbbf4,	// (0x0006708f) cell_fmradio_pane_g1

0xab00,	// (0x00065f9b) grid_highlight_pane_cp011

0xbda0,	// (0x0006723b) poc_content_pane_ParamLimits

0xbda0,	// (0x0006723b) poc_content_pane

0xbdb2,	// (0x0006724d) scroll_pane_cp019

0x406d,	// (0x0005f508) popup_call_poc_act_window_ParamLimits

0x406d,	// (0x0005f508) popup_call_poc_act_window

0x407a,	// (0x0005f515) popup_call_poc_inact_window_ParamLimits

0x407a,	// (0x0005f515) popup_call_poc_inact_window

0x04b7,	// (0x0005b952) bg_popup_call_poc_act_pane_g

0xcc8a,	// (0x00068125) bg_popup_call_poc_inact_pane_g1

0xcc92,	// (0x0006812d) bg_popup_call_poc_inact_pane_g2

0xbdba,	// (0x00067255) popup_call_poc_act_window_g2

0xcc9a,	// (0x00068135) bg_popup_call_poc_inact_pane_g3

0xcca2,	// (0x0006813d) bg_popup_call_poc_inact_pane_g4

0xccaa,	// (0x00068145) bg_popup_call_poc_inact_pane_g5

0xbdc2,	// (0x0006725d) popup_call_poc_act_window_t1_ParamLimits

0xbdc2,	// (0x0006725d) popup_call_poc_act_window_t1

0xbdea,	// (0x00067285) popup_call_poc_act_window_t2_ParamLimits

0xbdea,	// (0x00067285) popup_call_poc_act_window_t2

0xbe12,	// (0x000672ad) popup_call_poc_act_window_t3_ParamLimits

0xbe12,	// (0x000672ad) popup_call_poc_act_window_t3

0xbe3a,	// (0x000672d5) popup_call_poc_act_window_t4_ParamLimits

0xbe3a,	// (0x000672d5) popup_call_poc_act_window_t4

0x0003,

0x0425,	// (0x0005b8c0) popup_call_poc_act_window_t_ParamLimits

0x0425,	// (0x0005b8c0) popup_call_poc_act_window_t

0xccb2,	// (0x0006814d) bg_popup_call_poc_inact_pane_g6

0xccba,	// (0x00068155) bg_popup_call_poc_inact_pane_g7

0xccc2,	// (0x0006815d) bg_popup_call_poc_inact_pane_g8

0xbe4c,	// (0x000672e7) popup_call_poc_inact_window_g2

0xccca,	// (0x00068165) bg_popup_call_poc_inact_pane_g9

0x0008,

0x04a4,	// (0x0005b93f) bg_popup_call_poc_inact_pane_g

0xbe54,	// (0x000672ef) popup_call_poc_inact_window_t1_ParamLimits

0xbe54,	// (0x000672ef) popup_call_poc_inact_window_t1

0xbe69,	// (0x00067304) popup_call_poc_inact_window_t2_ParamLimits

0xbe69,	// (0x00067304) popup_call_poc_inact_window_t2

0xbe7e,	// (0x00067319) popup_call_poc_inact_window_t3_ParamLimits

0xbe7e,	// (0x00067319) popup_call_poc_inact_window_t3

0x0002,

0x042e,	// (0x0005b8c9) popup_call_poc_inact_window_t_ParamLimits

0x042e,	// (0x0005b8c9) popup_call_poc_inact_window_t

0xce4f,	// (0x000682ea) context_pane_ParamLimits

0x46bc,	// (0x0005fb57) signal_pane_ParamLimits

0xba44,	// (0x00066edf) main_call2_pane

0x462f,	// (0x0005faca) popup_phob_thumbnail2_window_ParamLimits

0x462f,	// (0x0005faca) popup_phob_thumbnail2_window

0x3d47,	// (0x0005f1e2) aid_hotspot_pointer_arrow_pane

0x3d4f,	// (0x0005f1ea) aid_hotspot_pointer_hand_pane

0x439c,	// (0x0005f837) phob_pre_status_pane_g5

0x1dd0,	// (0x0005d26b) cams_zoom_pane_ParamLimits

0x1ddc,	// (0x0005d277) image_vga_pane_ParamLimits

0x1deb,	// (0x0005d286) main_camera_pane_g1_ParamLimits

0x1df9,	// (0x0005d294) main_camera_pane_g2_ParamLimits

0x1e05,	// (0x0005d2a0) main_camera_pane_g3_ParamLimits

0x1e11,	// (0x0005d2ac) main_camera_pane_g4_ParamLimits

0x1e1d,	// (0x0005d2b8) main_camera_pane_g5_ParamLimits

0x1e29,	// (0x0005d2c4) main_camera_pane_g6_ParamLimits

0x1e35,	// (0x0005d2d0) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0006a6aa) main_camera_pane_g_ParamLimits

0x1e41,	// (0x0005d2dc) main_camera_pane_t1_ParamLimits

0x1e53,	// (0x0005d2ee) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0006a6bb) main_camera_pane_t_ParamLimits

0xad5b,	// (0x000661f6) bg_popup_preview_window_pane_cp01_ParamLimits

0xad5b,	// (0x000661f6) bg_popup_preview_window_pane_cp01

0xbe93,	// (0x0006732e) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe93,	// (0x0006732e) popup_phob_thumbnail2_window_g1

0xab00,	// (0x00065f9b) call2_cli_visual_pane

0x4096,	// (0x0005f531) popup_call2_audio_conf_window_ParamLimits

0x4096,	// (0x0005f531) popup_call2_audio_conf_window

0x40ab,	// (0x0005f546) popup_call2_audio_first_window_ParamLimits

0x40ab,	// (0x0005f546) popup_call2_audio_first_window

0x4149,	// (0x0005f5e4) popup_call2_audio_in_window_ParamLimits

0x4149,	// (0x0005f5e4) popup_call2_audio_in_window

0x418b,	// (0x0005f626) popup_call2_audio_out_window_ParamLimits

0x418b,	// (0x0005f626) popup_call2_audio_out_window

0x41ed,	// (0x0005f688) popup_call2_audio_second_window_ParamLimits

0x41ed,	// (0x0005f688) popup_call2_audio_second_window

0x424b,	// (0x0005f6e6) popup_call2_audio_wait_window_ParamLimits

0x424b,	// (0x0005f6e6) popup_call2_audio_wait_window

0xab00,	// (0x00065f9b) bg_popup_call2_act_pane_cp03

0xad3d,	// (0x000661d8) list_conf_pane_cp

0xbe9f,	// (0x0006733a) popup_call2_audio_conf_window_t1

0xb72d,	// (0x00066bc8) list_single_graphic_popup_conf2_pane_ParamLimits

0xb72d,	// (0x00066bc8) list_single_graphic_popup_conf2_pane

0xb740,	// (0x00066bdb) list_highlight_pane_cp04

0xbead,	// (0x00067348) list_single_graphic_popup_conf2_pane_g1

0xb751,	// (0x00066bec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0435,	// (0x0005b8d0) list_single_graphic_popup_conf2_pane_g

0xbeb7,	// (0x00067352) list_single_graphic_popup_conf2_pane_t1

0xbec5,	// (0x00067360) bg_popup_call2_act_pane_cp01_ParamLimits

0xbec5,	// (0x00067360) bg_popup_call2_act_pane_cp01

0xbf4f,	// (0x000673ea) call_type_pane_cp05_ParamLimits

0xbf4f,	// (0x000673ea) call_type_pane_cp05

0xbfa3,	// (0x0006743e) popup_call2_audio_second_window_g1_ParamLimits

0xbfa3,	// (0x0006743e) popup_call2_audio_second_window_g1

0xbff7,	// (0x00067492) popup_call2_audio_second_window_g2_ParamLimits

0xbff7,	// (0x00067492) popup_call2_audio_second_window_g2

0x0002,

0x043a,	// (0x0005b8d5) popup_call2_audio_second_window_g_ParamLimits

0x043a,	// (0x0005b8d5) popup_call2_audio_second_window_g

0xc05c,	// (0x000674f7) popup_call2_audio_second_window_t1_ParamLimits

0xc05c,	// (0x000674f7) popup_call2_audio_second_window_t1

0xc117,	// (0x000675b2) popup_call2_audio_second_window_t2_ParamLimits

0xc117,	// (0x000675b2) popup_call2_audio_second_window_t2

0xc16a,	// (0x00067605) popup_call2_audio_second_window_t3_ParamLimits

0xc16a,	// (0x00067605) popup_call2_audio_second_window_t3

0x0003,

0x0441,	// (0x0005b8dc) popup_call2_audio_second_window_t_ParamLimits

0x0441,	// (0x0005b8dc) popup_call2_audio_second_window_t

0xab00,	// (0x00065f9b) bg_popup_call2_in_pane_cp02

0xab0a,	// (0x00065fa5) call_type_pane_cp04

0xab12,	// (0x00065fad) popup_call2_audio_wait_window_g1

0xab1a,	// (0x00065fb5) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006a597) popup_call2_audio_wait_window_g

0xab22,	// (0x00065fbd) popup_call2_audio_wait_window_t3

0xc25d,	// (0x000676f8) bg_popup_call2_act_pane_ParamLimits

0xc25d,	// (0x000676f8) bg_popup_call2_act_pane

0xc31d,	// (0x000677b8) call_type_pane_cp03_ParamLimits

0xc31d,	// (0x000677b8) call_type_pane_cp03

0xc381,	// (0x0006781c) popup_call2_audio_first_window_g1_ParamLimits

0xc381,	// (0x0006781c) popup_call2_audio_first_window_g1

0xc3f1,	// (0x0006788c) popup_call2_audio_first_window_g2_ParamLimits

0xc3f1,	// (0x0006788c) popup_call2_audio_first_window_g2

0xbafb,	// (0x00066f96) popup_call2_audio_first_window_g3_ParamLimits

0xbafb,	// (0x00066f96) popup_call2_audio_first_window_g3

0x0004,

0xf4c2,	// (0x0006a95d) popup_call2_audio_first_window_g_ParamLimits

0xf4c2,	// (0x0006a95d) popup_call2_audio_first_window_g

0xc4cf,	// (0x0006796a) popup_call2_audio_first_window_t1_ParamLimits

0xc4cf,	// (0x0006796a) popup_call2_audio_first_window_t1

0xc5d2,	// (0x00067a6d) popup_call2_audio_first_window_t4_ParamLimits

0xc5d2,	// (0x00067a6d) popup_call2_audio_first_window_t4

0xc6b5,	// (0x00067b50) popup_call2_audio_first_window_t5_ParamLimits

0xc6b5,	// (0x00067b50) popup_call2_audio_first_window_t5

0x0003,

0x0455,	// (0x0005b8f0) popup_call2_audio_first_window_t_ParamLimits

0x0455,	// (0x0005b8f0) popup_call2_audio_first_window_t

0xad53,	// (0x000661ee) bg_popup_call2_act_pane_g1

0xcd22,	// (0x000681bd) popup_cale_lunar_info_window_t1

0xcd30,	// (0x000681cb) popup_cale_lunar_info_window_t2

0xcd3e,	// (0x000681d9) popup_cale_lunar_info_window_t3

0xab00,	// (0x00065f9b) bg_popup_call2_bubble_pane

0xc7b6,	// (0x00067c51) bg_popup_call2_in_pane_cp01_ParamLimits

0xc7b6,	// (0x00067c51) bg_popup_call2_in_pane_cp01

0xa50e,	// (0x000659a9) call_type_pane_cp02

0xc7fe,	// (0x00067c99) popup_call2_audio_out_window_g1_ParamLimits

0xc7fe,	// (0x00067c99) popup_call2_audio_out_window_g1

0xc82a,	// (0x00067cc5) popup_call2_audio_out_window_g2_ParamLimits

0xc82a,	// (0x00067cc5) popup_call2_audio_out_window_g2

0xc852,	// (0x00067ced) popup_call2_audio_out_window_g3_ParamLimits

0xc852,	// (0x00067ced) popup_call2_audio_out_window_g3

0x0003,

0x045e,	// (0x0005b8f9) popup_call2_audio_out_window_g_ParamLimits

0x045e,	// (0x0005b8f9) popup_call2_audio_out_window_g

0xc88d,	// (0x00067d28) popup_call2_audio_out_window_t1_ParamLimits

0xc88d,	// (0x00067d28) popup_call2_audio_out_window_t1

0xc8ec,	// (0x00067d87) popup_call2_audio_out_window_t2_ParamLimits

0xc8ec,	// (0x00067d87) popup_call2_audio_out_window_t2

0xc940,	// (0x00067ddb) popup_call2_audio_out_window_t3_ParamLimits

0xc940,	// (0x00067ddb) popup_call2_audio_out_window_t3

0xc956,	// (0x00067df1) popup_call2_audio_out_window_t4_ParamLimits

0xc956,	// (0x00067df1) popup_call2_audio_out_window_t4

0xc96c,	// (0x00067e07) popup_call2_audio_out_window_t5_ParamLimits

0xc96c,	// (0x00067e07) popup_call2_audio_out_window_t5

0x0005,

0x0467,	// (0x0005b902) popup_call2_audio_out_window_t_ParamLimits

0x0467,	// (0x0005b902) popup_call2_audio_out_window_t

0xc9d0,	// (0x00067e6b) bg_popup_call2_in_pane_ParamLimits

0xc9d0,	// (0x00067e6b) bg_popup_call2_in_pane

0xca2c,	// (0x00067ec7) popup_call2_audio_in_window_g1_ParamLimits

0xca2c,	// (0x00067ec7) popup_call2_audio_in_window_g1

0xca64,	// (0x00067eff) popup_call2_audio_in_window_g2_ParamLimits

0xca64,	// (0x00067eff) popup_call2_audio_in_window_g2

0xca9c,	// (0x00067f37) popup_call2_audio_in_window_g3_ParamLimits

0xca9c,	// (0x00067f37) popup_call2_audio_in_window_g3

0x0003,

0x0474,	// (0x0005b90f) popup_call2_audio_in_window_g_ParamLimits

0x0474,	// (0x0005b90f) popup_call2_audio_in_window_g

0xcaf4,	// (0x00067f8f) popup_call2_audio_in_window_t1_ParamLimits

0xcaf4,	// (0x00067f8f) popup_call2_audio_in_window_t1

0xcb74,	// (0x0006800f) popup_call2_audio_in_window_t2_ParamLimits

0xcb74,	// (0x0006800f) popup_call2_audio_in_window_t2

0xcbf4,	// (0x0006808f) popup_call2_audio_in_window_t3_ParamLimits

0xcbf4,	// (0x0006808f) popup_call2_audio_in_window_t3

0xcc0e,	// (0x000680a9) popup_call2_audio_in_window_t4_ParamLimits

0xcc0e,	// (0x000680a9) popup_call2_audio_in_window_t4

0xcc20,	// (0x000680bb) popup_call2_audio_in_window_t5_ParamLimits

0xcc20,	// (0x000680bb) popup_call2_audio_in_window_t5

0xcc35,	// (0x000680d0) popup_call2_audio_in_window_t6_ParamLimits

0xcc35,	// (0x000680d0) popup_call2_audio_in_window_t6

0x0005,

0x047d,	// (0x0005b918) popup_call2_audio_in_window_t_ParamLimits

0x047d,	// (0x0005b918) popup_call2_audio_in_window_t

0xad53,	// (0x000661ee) bg_popup_call2_in_pane_g1

0xcd4c,	// (0x000681e7) popup_cale_lunar_info_window_t4

0x0003,

0x04e5,	// (0x0005b980) popup_cale_lunar_info_window_t

0xad5b,	// (0x000661f6) bg_popup_call2_rect_pane_ParamLimits

0xad5b,	// (0x000661f6) bg_popup_call2_rect_pane

0xab00,	// (0x00065f9b) call2_cli_visual_graphic_pane

0xab00,	// (0x00065f9b) call2_cli_visual_text_pane

0x4762,	// (0x0005fbfd) smil_status_volume_pane_g3

0x0002,

0xae75,	// (0x00066310) call2_cli_visual_graphic_pane_g1

0xae75,	// (0x00066310) call2_cli_visual_graphic_pane_g2

0xae75,	// (0x00066310) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4cd,	// (0x0006a968) call2_cli_visual_graphic_pane_g

0xcc4a,	// (0x000680e5) bg_popup_call2_rect_pane_g1

0xaf01,	// (0x0006639c) bg_popup_call2_rect_pane_g2

0xcc52,	// (0x000680ed) bg_popup_call2_rect_pane_g3

0xcc5a,	// (0x000680f5) bg_popup_call2_rect_pane_g4

0xcc62,	// (0x000680fd) bg_popup_call2_rect_pane_g5

0xcc6a,	// (0x00068105) bg_popup_call2_rect_pane_g6

0xcc72,	// (0x0006810d) bg_popup_call2_rect_pane_g7

0xcc7a,	// (0x00068115) bg_popup_call2_rect_pane_g8

0xcc82,	// (0x0006811d) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d4,	// (0x0006a96f) bg_popup_call2_rect_pane_g

0xcc8a,	// (0x00068125) bg_popup_call2_bubble_pane_g1

0xcc92,	// (0x0006812d) bg_popup_call2_bubble_pane_g2

0xcc9a,	// (0x00068135) bg_popup_call2_bubble_pane_g3

0xcca2,	// (0x0006813d) bg_popup_call2_bubble_pane_g4

0xccaa,	// (0x00068145) bg_popup_call2_bubble_pane_g5

0xccb2,	// (0x0006814d) bg_popup_call2_bubble_pane_g6

0xccba,	// (0x00068155) bg_popup_call2_bubble_pane_g7

0xccc2,	// (0x0006815d) bg_popup_call2_bubble_pane_g8

0xccca,	// (0x00068165) bg_popup_call2_bubble_pane_g9

0x0008,

0x04a4,	// (0x0005b93f) bg_popup_call2_bubble_pane_g

0x1803,	// (0x0005cc9e) aid_cale_week_size_cell_pane

0x1e65,	// (0x0005d300) aid_cams_cif_uncrop_pane_ParamLimits

0x1e65,	// (0x0005d300) aid_cams_cif_uncrop_pane

0x1fc0,	// (0x0005d45b) aid_cams_size_cell_ParamLimits

0x1fc0,	// (0x0005d45b) aid_cams_size_cell

0x1fcc,	// (0x0005d467) grid_cams_pane_ParamLimits

0x1fda,	// (0x0005d475) linegrid_cams_pane_ParamLimits

0x21be,	// (0x0005d659) call_video_pane_t1

0x21df,	// (0x0005d67a) call_video_pane_t2

0x0001,

0xf273,	// (0x0006a70e) call_video_pane_t

0x2728,	// (0x0005dbc3) aid_cale_month_size_cell_pane_ParamLimits

0x2728,	// (0x0005dbc3) aid_cale_month_size_cell_pane

0xf517,	// (0x0006a9b2) smil_status_volume_pane_g

0x476f,	// (0x0005fc0a) volume_smil_pane_ParamLimits

0x0f4c,	// (0x0005c3e7) aid_popup2_width_pane

0x16f7,	// (0x0005cb92) cell_qdial_pane_g4_ParamLimits

0x16f7,	// (0x0005cb92) cell_qdial_pane_g4

0x3732,	// (0x0005ebcd) aid_blid_cardinal_pane_ParamLimits

0x3742,	// (0x0005ebdd) aid_blid_destination_pane_ParamLimits

0x3742,	// (0x0005ebdd) aid_blid_destination_pane

0xad5b,	// (0x000661f6) bg_popup_call_poc_act_pane_ParamLimits

0xad5b,	// (0x000661f6) bg_popup_call_poc_act_pane

0xad5b,	// (0x000661f6) bg_popup_call_poc_inact_pane_ParamLimits

0xad5b,	// (0x000661f6) bg_popup_call_poc_inact_pane

0xccd2,	// (0x0006816d) bg_popup_call_poc_act_pane_g1

0xccda,	// (0x00068175) bg_popup_call_poc_act_pane_g2

0xcce2,	// (0x0006817d) bg_popup_call_poc_act_pane_g3

0xcca2,	// (0x0006813d) bg_popup_call_poc_act_pane_g4

0xccaa,	// (0x00068145) bg_popup_call_poc_act_pane_g5

0xccea,	// (0x00068185) bg_popup_call_poc_act_pane_g6

0xccba,	// (0x00068155) bg_popup_call_poc_act_pane_g7

0xccf2,	// (0x0006818d) bg_popup_call_poc_act_pane_g8

0xab00,	// (0x00065f9b) main_usb_pane

0x455e,	// (0x0005f9f9) popup_cale_lunar_info_window

0x250a,	// (0x0005d9a5) im_reading_pane_t1_ParamLimits

0xb0df,	// (0x0006657a) list_im_pane_ParamLimits

0xb0f0,	// (0x0006658b) scroll_pane_cp07_ParamLimits

0xab00,	// (0x00065f9b) grid_highlight_pane_cp012

0xad5b,	// (0x000661f6) mup_scale_pane_ParamLimits

0xbafb,	// (0x00066f96) main_usb_pane_g1_ParamLimits

0xbafb,	// (0x00066f96) main_usb_pane_g1

0x42bf,	// (0x0005f75a) main_usb_pane_g2_ParamLimits

0x42bf,	// (0x0005f75a) main_usb_pane_g2

0x0001,

0xf4e7,	// (0x0006a982) main_usb_pane_g_ParamLimits

0xf4e7,	// (0x0006a982) main_usb_pane_g

0x42cb,	// (0x0005f766) main_usb_pane_t1_ParamLimits

0x42cb,	// (0x0005f766) main_usb_pane_t1

0x42dd,	// (0x0005f778) main_usb_pane_t2_ParamLimits

0x42dd,	// (0x0005f778) main_usb_pane_t2

0x42ef,	// (0x0005f78a) main_usb_pane_t3_ParamLimits

0x42ef,	// (0x0005f78a) main_usb_pane_t3

0x4301,	// (0x0005f79c) main_usb_pane_t4_ParamLimits

0x4301,	// (0x0005f79c) main_usb_pane_t4

0x4313,	// (0x0005f7ae) main_usb_pane_t5_ParamLimits

0x4313,	// (0x0005f7ae) main_usb_pane_t5

0x4325,	// (0x0005f7c0) main_usb_pane_t6_ParamLimits

0x4325,	// (0x0005f7c0) main_usb_pane_t6

0x0005,

0xf4ec,	// (0x0006a987) main_usb_pane_t_ParamLimits

0x36d8,	// (0x0005eb73) aid_text_placing

0x36e4,	// (0x0005eb7f) main_location2_pane_t1_ParamLimits

0x36f8,	// (0x0005eb93) main_location2_pane_t2_ParamLimits

0x370c,	// (0x0005eba7) main_location2_pane_t3_ParamLimits

0x3720,	// (0x0005ebbb) main_location2_pane_t4_ParamLimits

0x3720,	// (0x0005ebbb) main_location2_pane_t4

0xf3c0,	// (0x0006a85b) main_location2_pane_t_ParamLimits

0xad97,	// (0x00066232) find_pinb_pane_g2_ParamLimits

0xad97,	// (0x00066232) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0006a5bd) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0006a5bd) find_pinb_pane_g

0xada3,	// (0x0006623e) find_pinb_pane_t1_ParamLimits

0xadb5,	// (0x00066250) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0006a5c2) find_pinb_pane_t_ParamLimits

0xab00,	// (0x00065f9b) main_call3_pane

0x2c7c,	// (0x0005e117) cale_month_day_heading_pane_t1_ParamLimits

0x2d02,	// (0x0005e19d) cale_month_day_heading_pane_t2_ParamLimits

0x2d93,	// (0x0005e22e) cale_month_day_heading_pane_t3_ParamLimits

0x2e24,	// (0x0005e2bf) cale_month_day_heading_pane_t4_ParamLimits

0x2eb5,	// (0x0005e350) cale_month_day_heading_pane_t5_ParamLimits

0x2f46,	// (0x0005e3e1) cale_month_day_heading_pane_t6_ParamLimits

0x2fd7,	// (0x0005e472) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0006a746) cale_month_day_heading_pane_t_ParamLimits

0xb33a,	// (0x000667d5) smil_status_volume_pane

0x3e83,	// (0x0005f31e) postcard_address_pane_ParamLimits

0x3e83,	// (0x0005f31e) postcard_address_pane

0x3e8f,	// (0x0005f32a) postcard_message_pane_ParamLimits

0x3e8f,	// (0x0005f32a) postcard_message_pane

0x428a,	// (0x0005f725) call2_cli_visual_pane_t1_ParamLimits

0x428a,	// (0x0005f725) call2_cli_visual_pane_t1

0x48c6,	// (0x0005fd61) postcard_message_pane_t1_ParamLimits

0x48c6,	// (0x0005fd61) postcard_message_pane_t1

0x48af,	// (0x0005fd4a) postcard_address_pane_t1_ParamLimits

0x48af,	// (0x0005fd4a) postcard_address_pane_t1

0x48a0,	// (0x0005fd3b) popup_call3_audio_in_window_ParamLimits

0x48a0,	// (0x0005fd3b) popup_call3_audio_in_window

0x4784,	// (0x0005fc1f) bg_popup_call3_in_pane_ParamLimits

0x4784,	// (0x0005fc1f) bg_popup_call3_in_pane

0x47e6,	// (0x0005fc81) popup_call3_audio_in_window_g1_ParamLimits

0x47e6,	// (0x0005fc81) popup_call3_audio_in_window_g1

0x47fe,	// (0x0005fc99) popup_call3_audio_in_window_g2_ParamLimits

0x47fe,	// (0x0005fc99) popup_call3_audio_in_window_g2

0x4816,	// (0x0005fcb1) popup_call3_audio_in_window_g3_ParamLimits

0x4816,	// (0x0005fcb1) popup_call3_audio_in_window_g3

0x0003,

0xf51e,	// (0x0006a9b9) popup_call3_audio_in_window_g_ParamLimits

0xf51e,	// (0x0006a9b9) popup_call3_audio_in_window_g

0x483e,	// (0x0005fcd9) popup_call3_audio_in_window_t1_ParamLimits

0x483e,	// (0x0005fcd9) popup_call3_audio_in_window_t1

0x4866,	// (0x0005fd01) popup_call3_audio_in_window_t2_ParamLimits

0x4866,	// (0x0005fd01) popup_call3_audio_in_window_t2

0x488e,	// (0x0005fd29) popup_call3_audio_in_window_t3_ParamLimits

0x488e,	// (0x0005fd29) popup_call3_audio_in_window_t3

0x0002,

0xf527,	// (0x0006a9c2) popup_call3_audio_in_window_t_ParamLimits

0xf527,	// (0x0006a9c2) popup_call3_audio_in_window_t

0xba44,	// (0x00066edf) bg_popup_call3_rect_pane

0xcc4a,	// (0x000680e5) bg_popup_call3_rect_pane_g1

0xaf01,	// (0x0006639c) bg_popup_call3_rect_pane_g2

0xcc52,	// (0x000680ed) bg_popup_call3_rect_pane_g3

0xcc5a,	// (0x000680f5) bg_popup_call3_rect_pane_g4

0xcc62,	// (0x000680fd) bg_popup_call3_rect_pane_g5

0xcc6a,	// (0x00068105) bg_popup_call3_rect_pane_g6

0xcc72,	// (0x0006810d) bg_popup_call3_rect_pane_g7

0x3a58,	// (0x0005eef3) mup_visualizer_osc_pane

0xbb11,	// (0x00066fac) mup_visualizer_spec_pane

0x47a4,	// (0x0005fc3f) call3_video_qcif_pane_ParamLimits

0x47a4,	// (0x0005fc3f) call3_video_qcif_pane

0x47b6,	// (0x0005fc51) call3_video_qcif_uncrop_pane_ParamLimits

0x47b6,	// (0x0005fc51) call3_video_qcif_uncrop_pane

0x47c4,	// (0x0005fc5f) call3_video_subqcif_pane_ParamLimits

0x47c4,	// (0x0005fc5f) call3_video_subqcif_pane

0x47d6,	// (0x0005fc71) call3_video_subqcif_uncrop_pane_ParamLimits

0x47d6,	// (0x0005fc71) call3_video_subqcif_uncrop_pane

0x482e,	// (0x0005fcc9) popup_call3_audio_in_window_g4_ParamLimits

0x482e,	// (0x0005fcc9) popup_call3_audio_in_window_g4

0x4751,	// (0x0005fbec) mup_spec_half_pane

0x475a,	// (0x0005fbf5) mup_spec_half_pane_cp

0xceaf,	// (0x0006834a) mup_osc_middle_pane

0xceb8,	// (0x00068353) mup_visualizer_osc_pane_g1

0x4732,	// (0x0005fbcd) mup_spec_bar_pane_ParamLimits

0x4732,	// (0x0005fbcd) mup_spec_bar_pane

0xce9c,	// (0x00068337) mup_spec_bar_pane_g1

0xcea6,	// (0x00068341) mup_spec_bar_pane_g2

0x0001,

0x0529,	// (0x0005b9c4) mup_spec_bar_pane_g

0x1803,	// (0x0005cc9e) aid_cale_week_size_cell_pane_ParamLimits

0x1818,	// (0x0005ccb3) bg_cale_heading_pane_ParamLimits

0xaf3e,	// (0x000663d9) bg_cale_pane_cp01_ParamLimits

0x183a,	// (0x0005ccd5) cale_week_corner_pane_ParamLimits

0x1854,	// (0x0005ccef) cale_week_day_heading_pane_ParamLimits

0x1876,	// (0x0005cd11) cale_week_scroll_pane_g1_ParamLimits

0x1893,	// (0x0005cd2e) cale_week_scroll_pane_g2_ParamLimits

0x18a6,	// (0x0005cd41) cale_week_scroll_pane_g3_ParamLimits

0x18b9,	// (0x0005cd54) cale_week_scroll_pane_g4_ParamLimits

0x18cc,	// (0x0005cd67) cale_week_scroll_pane_g5_ParamLimits

0x18df,	// (0x0005cd7a) cale_week_scroll_pane_g6_ParamLimits

0x18f2,	// (0x0005cd8d) cale_week_scroll_pane_g7_ParamLimits

0x1905,	// (0x0005cda0) cale_week_scroll_pane_g8_ParamLimits

0x191a,	// (0x0005cdb5) cale_week_scroll_pane_g9_ParamLimits

0x192d,	// (0x0005cdc8) cale_week_scroll_pane_g10_ParamLimits

0x1940,	// (0x0005cddb) cale_week_scroll_pane_g11_ParamLimits

0x1953,	// (0x0005cdee) cale_week_scroll_pane_g12_ParamLimits

0x196a,	// (0x0005ce05) cale_week_scroll_pane_g13_ParamLimits

0x1985,	// (0x0005ce20) cale_week_scroll_pane_g14_ParamLimits

0x19a0,	// (0x0005ce3b) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0006a64e) cale_week_scroll_pane_g_ParamLimits

0x19bb,	// (0x0005ce56) cale_week_time_pane_ParamLimits

0x19d0,	// (0x0005ce6b) grid_cale_week_pane_ParamLimits

0xaf5c,	// (0x000663f7) listscroll_cale_week_pane_t1

0xaf6e,	// (0x00066409) scroll_pane_cp08_ParamLimits

0x2791,	// (0x0005dc2c) cale_month_corner_pane_ParamLimits

0xb310,	// (0x000667ab) cale_month_pane_t1

0x2c19,	// (0x0005e0b4) cale_month_week_pane_ParamLimits

0xbafb,	// (0x00066f96) popup_call_status_window_g1_ParamLimits

0x350b,	// (0x0005e9a6) popup_call_status_window_g2_ParamLimits

0x3517,	// (0x0005e9b2) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0006a7f6) popup_call_status_window_g_ParamLimits

0xb6c8,	// (0x00066b63) aid_call2_pane

0x3cf8,	// (0x0005f193) msg_header_pane_g1

0x3e83,	// (0x0005f31e) postcard_address2_pane_ParamLimits

0x3e83,	// (0x0005f31e) postcard_address2_pane

0x3e8f,	// (0x0005f32a) postcard_message2_pane_ParamLimits

0x3e8f,	// (0x0005f32a) postcard_message2_pane

0x46ca,	// (0x0005fb65) message2_row_pane_ParamLimits

0x46ca,	// (0x0005fb65) message2_row_pane

0x46e5,	// (0x0005fb80) address2_row_pane_ParamLimits

0x46e5,	// (0x0005fb80) address2_row_pane

0xce6a,	// (0x00068305) postcard_message2_row_pane_g1

0xce72,	// (0x0006830d) postcard_message2_row_pane_t1

0xce6a,	// (0x00068305) address2_row_pane_g1

0xce72,	// (0x0006830d) address2_row_pane_t1

0x1d27,	// (0x0005d1c2) aid_size_cell_vorec

0xab00,	// (0x00065f9b) main_rss_pane

0x46f8,	// (0x0005fb93) rss_list_single_pane_ParamLimits

0x46f8,	// (0x0005fb93) rss_list_single_pane

0xce80,	// (0x0006831b) rss_list_single_pane_t1

0xce8e,	// (0x00068329) rss_list_single_pane_t2

0x0001,

0x0524,	// (0x0005b9bf) rss_list_single_pane_t

0xab00,	// (0x00065f9b) main_camera2_pane

0xab00,	// (0x00065f9b) main_video2_pane

0x492a,	// (0x0005fdc5) cams_zoom_pane_cp2_ParamLimits

0x492a,	// (0x0005fdc5) cams_zoom_pane_cp2

0x4936,	// (0x0005fdd1) image2_vga_pane_ParamLimits

0x4936,	// (0x0005fdd1) image2_vga_pane

0x4945,	// (0x0005fde0) main_camera2_pane_g1_ParamLimits

0x4945,	// (0x0005fde0) main_camera2_pane_g1

0x4951,	// (0x0005fdec) main_camera2_pane_g2_ParamLimits

0x4951,	// (0x0005fdec) main_camera2_pane_g2

0x495d,	// (0x0005fdf8) main_camera2_pane_g3_ParamLimits

0x495d,	// (0x0005fdf8) main_camera2_pane_g3

0x4969,	// (0x0005fe04) main_camera2_pane_g4_ParamLimits

0x4969,	// (0x0005fe04) main_camera2_pane_g4

0x4975,	// (0x0005fe10) main_camera2_pane_g5_ParamLimits

0x4975,	// (0x0005fe10) main_camera2_pane_g5

0x4981,	// (0x0005fe1c) main_camera2_pane_g6_ParamLimits

0x4981,	// (0x0005fe1c) main_camera2_pane_g6

0x498d,	// (0x0005fe28) main_camera2_pane_g7_ParamLimits

0x498d,	// (0x0005fe28) main_camera2_pane_g7

0x4999,	// (0x0005fe34) main_camera2_pane_g8_ParamLimits

0x4999,	// (0x0005fe34) main_camera2_pane_g8

0x0008,

0xf52e,	// (0x0006a9c9) main_camera2_pane_g_ParamLimits

0xf52e,	// (0x0006a9c9) main_camera2_pane_g

0x49b1,	// (0x0005fe4c) main_camera2_pane_t1_ParamLimits

0x49b1,	// (0x0005fe4c) main_camera2_pane_t1

0x49c3,	// (0x0005fe5e) main_camera2_pane_t2_ParamLimits

0x49c3,	// (0x0005fe5e) main_camera2_pane_t2

0x49d5,	// (0x0005fe70) main_camera2_pane_t3_ParamLimits

0x49d5,	// (0x0005fe70) main_camera2_pane_t3

0x49e7,	// (0x0005fe82) main_camera2_pane_t4_ParamLimits

0x49e7,	// (0x0005fe82) main_camera2_pane_t4

0x0006,

0xf541,	// (0x0006a9dc) main_camera2_pane_t_ParamLimits

0xf541,	// (0x0006a9dc) main_camera2_pane_t

0x4a49,	// (0x0005fee4) cams_zoom_pane_cp4_ParamLimits

0x4a49,	// (0x0005fee4) cams_zoom_pane_cp4

0x4a59,	// (0x0005fef4) image2_cif_pane_ParamLimits

0x4a59,	// (0x0005fef4) image2_cif_pane

0x4a6e,	// (0x0005ff09) image2_subqcif_pane_ParamLimits

0x4a6e,	// (0x0005ff09) image2_subqcif_pane

0x4a7d,	// (0x0005ff18) main_video2_pane_g1_ParamLimits

0x4a7d,	// (0x0005ff18) main_video2_pane_g1

0x4a8f,	// (0x0005ff2a) main_video2_pane_g2_ParamLimits

0x4a8f,	// (0x0005ff2a) main_video2_pane_g2

0x4a9f,	// (0x0005ff3a) main_video2_pane_g3_ParamLimits

0x4a9f,	// (0x0005ff3a) main_video2_pane_g3

0x4aaf,	// (0x0005ff4a) main_video2_pane_g4_ParamLimits

0x4aaf,	// (0x0005ff4a) main_video2_pane_g4

0x4abf,	// (0x0005ff5a) main_video2_pane_g5_ParamLimits

0x4abf,	// (0x0005ff5a) main_video2_pane_g5

0x4acf,	// (0x0005ff6a) main_video2_pane_g6_ParamLimits

0x4acf,	// (0x0005ff6a) main_video2_pane_g6

0x0005,

0xf550,	// (0x0006a9eb) main_video2_pane_g_ParamLimits

0xf550,	// (0x0006a9eb) main_video2_pane_g

0x4ae1,	// (0x0005ff7c) main_video2_pane_t1_ParamLimits

0x4ae1,	// (0x0005ff7c) main_video2_pane_t1

0x4afb,	// (0x0005ff96) main_video2_pane_t2_ParamLimits

0x4afb,	// (0x0005ff96) main_video2_pane_t2

0x4b21,	// (0x0005ffbc) main_video2_pane_t3_ParamLimits

0x4b21,	// (0x0005ffbc) main_video2_pane_t3

0x0002,

0xf55d,	// (0x0006a9f8) main_video2_pane_t_ParamLimits

0xf55d,	// (0x0006a9f8) main_video2_pane_t

0x43dc,	// (0x0005f877) call_muted_g2

0x0001,

0xf512,	// (0x0006a9ad) call_muted_g

0xab00,	// (0x00065f9b) main_mup2_pane

0xcf15,	// (0x000683b0) main_mup2_pane_g1_ParamLimits

0xcf15,	// (0x000683b0) main_mup2_pane_g1

0x4b47,	// (0x0005ffe2) main_mup2_pane_g2_ParamLimits

0x4b47,	// (0x0005ffe2) main_mup2_pane_g2

0x4dc9,	// (0x00060264) main_mup_pane_g13_cp1

0x4dd1,	// (0x0006026c) mup_volume_pane_cp1

0x4b67,	// (0x00060002) main_mup2_pane_g4_ParamLimits

0x4b67,	// (0x00060002) main_mup2_pane_g4

0x4b7c,	// (0x00060017) main_mup2_pane_g5_ParamLimits

0x4b7c,	// (0x00060017) main_mup2_pane_g5

0x4b91,	// (0x0006002c) main_mup2_pane_g6_ParamLimits

0x4b91,	// (0x0006002c) main_mup2_pane_g6

0x4ba6,	// (0x00060041) main_mup2_pane_g7_ParamLimits

0x4ba6,	// (0x00060041) main_mup2_pane_g7

0x0006,

0xf564,	// (0x0006a9ff) main_mup2_pane_g_ParamLimits

0xf564,	// (0x0006a9ff) main_mup2_pane_g

0x4bc2,	// (0x0006005d) main_mup2_pane_t1_ParamLimits

0x4bc2,	// (0x0006005d) main_mup2_pane_t1

0x4bd9,	// (0x00060074) main_mup2_pane_t2_ParamLimits

0x4bd9,	// (0x00060074) main_mup2_pane_t2

0x4bf0,	// (0x0006008b) main_mup2_pane_t3_ParamLimits

0x4bf0,	// (0x0006008b) main_mup2_pane_t3

0x4c07,	// (0x000600a2) main_mup2_pane_t4_ParamLimits

0x4c07,	// (0x000600a2) main_mup2_pane_t4

0x4c21,	// (0x000600bc) main_mup2_pane_t5_ParamLimits

0x4c21,	// (0x000600bc) main_mup2_pane_t5

0x4c3b,	// (0x000600d6) main_mup2_pane_t6_ParamLimits

0x4c3b,	// (0x000600d6) main_mup2_pane_t6

0x0005,

0xf573,	// (0x0006aa0e) main_mup2_pane_t_ParamLimits

0xf573,	// (0x0006aa0e) main_mup2_pane_t

0x4c73,	// (0x0006010e) mup2_visualizer_pane_ParamLimits

0x4c73,	// (0x0006010e) mup2_visualizer_pane

0x4ca9,	// (0x00060144) mup_progress_pane_cp_ParamLimits

0x4ca9,	// (0x00060144) mup_progress_pane_cp

0x4db4,	// (0x0006024f) mup_volume_pane_cp_ParamLimits

0x4db4,	// (0x0006024f) mup_volume_pane_cp

0x4cc0,	// (0x0006015b) mup2_visualizer_pane_g1_ParamLimits

0x4cc0,	// (0x0006015b) mup2_visualizer_pane_g1

0xceef,	// (0x0006838a) mup2_visualizer_pane_g2_ParamLimits

0xceef,	// (0x0006838a) mup2_visualizer_pane_g2

0x4cd5,	// (0x00060170) mup2_visualizer_pane_g3_ParamLimits

0x4cd5,	// (0x00060170) mup2_visualizer_pane_g3

0x0002,

0xf580,	// (0x0006aa1b) mup2_visualizer_pane_g_ParamLimits

0xf580,	// (0x0006aa1b) mup2_visualizer_pane_g

0xbd2f,	// (0x000671ca) aid_size_cell_fmradio

0x44f2,	// (0x0005f98d) aid_height_parent_landcape

0xb16e,	// (0x00066609) wml_content_pane_cp

0xb176,	// (0x00066611) wml_tabs_pane

0xb17f,	// (0x0006661a) popup_wml_miniature_window

0xb187,	// (0x00066622) scroll_pane_cp021

0xb19b,	// (0x00066636) wml_content_pane_comp8

0xab00,	// (0x00065f9b) bg_popup_sub_pane_cp05

0xcf0d,	// (0x000683a8) popup_wml_miniature_window_g1

0xcf21,	// (0x000683bc) wml_miniature_view_pane

0x4ce3,	// (0x0006017e) aid_size_wml_view

0x4ceb,	// (0x00060186) wml_miniature_view_pane_g1

0x4cf4,	// (0x0006018f) wml_miniature_view_pane_g2

0x4cfd,	// (0x00060198) wml_miniature_view_pane_g3

0x4d05,	// (0x000601a0) wml_miniature_view_pane_g4

0x4d0d,	// (0x000601a8) wml_miniature_view_pane_g5

0x4d15,	// (0x000601b0) wml_miniature_view_pane_g6

0x4d1d,	// (0x000601b8) wml_miniature_view_pane_g7

0x4d25,	// (0x000601c0) wml_miniature_view_pane_g8

0x0007,

0xf587,	// (0x0006aa22) wml_miniature_view_pane_g

0xcf15,	// (0x000683b0) background_graphic_ParamLimits

0xcf15,	// (0x000683b0) background_graphic

0xcf29,	// (0x000683c4) wml_tabs_2_pane

0xcf32,	// (0x000683cd) wml_tabs_3_pane_ParamLimits

0xcf32,	// (0x000683cd) wml_tabs_3_pane

0xcf44,	// (0x000683df) wml_tabs_4_pane_ParamLimits

0xcf44,	// (0x000683df) wml_tabs_4_pane

0xcf5a,	// (0x000683f5) wml_tabs_5_pane_ParamLimits

0xcf5a,	// (0x000683f5) wml_tabs_5_pane

0xcf74,	// (0x0006840f) wml_tabs_pane_g2_ParamLimits

0xcf74,	// (0x0006840f) wml_tabs_pane_g2

0xcf88,	// (0x00068423) wml_tabs_pane_g3_ParamLimits

0xcf88,	// (0x00068423) wml_tabs_pane_g3

0x4d2d,	// (0x000601c8) wml_tabs_2_active_pane_ParamLimits

0x4d2d,	// (0x000601c8) wml_tabs_2_active_pane

0x4d3d,	// (0x000601d8) wml_tabs_2_passive_pane_ParamLimits

0x4d3d,	// (0x000601d8) wml_tabs_2_passive_pane

0x4d4d,	// (0x000601e8) wml_tabs_3_active_pane_cp_ParamLimits

0x4d4d,	// (0x000601e8) wml_tabs_3_active_pane_cp

0x4d5e,	// (0x000601f9) wml_tabs_3_passive_pane_ParamLimits

0x4d5e,	// (0x000601f9) wml_tabs_3_passive_pane

0x4d6f,	// (0x0006020a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d6f,	// (0x0006020a) wml_tabs_3_passive_pane_cp

0x4d80,	// (0x0006021b) tabs_4_active_pane

0x4d88,	// (0x00060223) tabs_4_passive_pane

0x4d90,	// (0x0006022b) tabs_4_passive_pane_cp

0x4d98,	// (0x00060233) tabs_4_passive_pane_cp2

0x42b7,	// (0x0005f752) aid_height_text

0x3a25,	// (0x0005eec0) mup_volume_cont_pane_ParamLimits

0x3a25,	// (0x0005eec0) mup_volume_cont_pane

0x1333,	// (0x0005c7ce) aid_size_cell_pinb

0x133d,	// (0x0005c7d8) aid_size_list_pinb

0x4c92,	// (0x0006012d) mup2_volume_cont_pane_ParamLimits

0x4c92,	// (0x0006012d) mup2_volume_cont_pane

0x4da0,	// (0x0006023b) mup2_volume_cont_pane_g1_ParamLimits

0x4da0,	// (0x0006023b) mup2_volume_cont_pane_g1

0x0f58,	// (0x0005c3f3) aid_size_cell_touch_ParamLimits

0x0f58,	// (0x0005c3f3) aid_size_cell_touch

0x1219,	// (0x0005c6b4) touch_pane_ParamLimits

0x1219,	// (0x0005c6b4) touch_pane

0x120f,	// (0x0005c6aa) main_rss2_pane

0xcfa5,	// (0x00068440) listscroll_rss2_pane

0xcfba,	// (0x00068455) rss2_navigation_pane

0xcfc2,	// (0x0006845d) list_rss2_pane

0xb803,	// (0x00066c9e) scroll_pane_cp22

0xcfca,	// (0x00068465) rss2_navigation_pane_g1

0xcfd3,	// (0x0006846e) rss2_navigation_pane_g2

0xcfdb,	// (0x00068476) rss2_navigation_pane_g3

0x0002,

0x05af,	// (0x0005ba4a) rss2_navigation_pane_g

0xcfe3,	// (0x0006847e) rss2_navigation_pane_t1

0x4dd9,	// (0x00060274) rss2_list_single_pane_ParamLimits

0x4dd9,	// (0x00060274) rss2_list_single_pane

0xcff1,	// (0x0006848c) rss2_list_single_pane_t2

0xcfff,	// (0x0006849a) rss2_list_single_pane_t3_ParamLimits

0xcfff,	// (0x0006849a) rss2_list_single_pane_t3

0xd01c,	// (0x000684b7) rss2_list_single_pane_t4

0x32a9,	// (0x0005e744) smil_status_pane_g1

0x4509,	// (0x0005f9a4) main_image2_pane_ParamLimits

0x4509,	// (0x0005f9a4) main_image2_pane

0x49a5,	// (0x0005fe40) main_camera2_pane_g9_ParamLimits

0x49a5,	// (0x0005fe40) main_camera2_pane_g9

0x49f9,	// (0x0005fe94) main_camera2_pane_t5_ParamLimits

0x49f9,	// (0x0005fe94) main_camera2_pane_t5

0x4a0b,	// (0x0005fea6) main_camera2_pane_t6_ParamLimits

0x4a0b,	// (0x0005fea6) main_camera2_pane_t6

0x4e0a,	// (0x000602a5) main_image2_pane_g1_ParamLimits

0x4e0a,	// (0x000602a5) main_image2_pane_g1

0x4057,	// (0x0005f4f2) smil2_video_pane_ParamLimits

0x4057,	// (0x0005f4f2) smil2_video_pane

0x0e61,	// (0x0005c2fc) aid_zoom_text_primary_cp

0x11aa,	// (0x0005c645) popup_preview_fixed_window

0xb0d7,	// (0x00066572) im_reading_pane_g1

0x48ef,	// (0x0005fd8a) cams2_bc_adjust_pane_cp_ParamLimits

0x48ef,	// (0x0005fd8a) cams2_bc_adjust_pane_cp

0x4a3b,	// (0x0005fed6) cams2_bc_adjust_pane_ParamLimits

0x4a3b,	// (0x0005fed6) cams2_bc_adjust_pane

0xe226,	// (0x000696c1) cams2_bc_adjust_pane_g1

0x4e16,	// (0x000602b1) cams2_slider_pane

0x4e1f,	// (0x000602ba) cams2_slider_pane_g1

0x4e28,	// (0x000602c3) cams2_slider_pane_g2

0x0006,

0xf598,	// (0x0006aa33) cams2_slider_pane_g

0x1443,	// (0x0005c8de) calc_display_pane_ParamLimits

0x1461,	// (0x0005c8fc) calc_paper_pane_ParamLimits

0x147d,	// (0x0005c918) grid_calc_pane_ParamLimits

0x3579,	// (0x0005ea14) popup_clock_digital_window_t1_ParamLimits

0xbccc,	// (0x00067167) main_image_pane_t1

0x1429,	// (0x0005c8c4) aid_size_cell_calc_ParamLimits

0x1429,	// (0x0005c8c4) aid_size_cell_calc

0x453a,	// (0x0005f9d5) popup_blid_sat_info2_window_ParamLimits

0x453a,	// (0x0005f9d5) popup_blid_sat_info2_window

0xd032,	// (0x000684cd) aid_size_cell_blid

0xd03a,	// (0x000684d5) bg_popup_window_pane_cp07

0xd05d,	// (0x000684f8) grid_popup_blid_pane

0xd067,	// (0x00068502) heading_pane_cp05_ParamLimits

0xd067,	// (0x00068502) heading_pane_cp05

0xd131,	// (0x000685cc) cell_popup_blid_pane_ParamLimits

0xd131,	// (0x000685cc) cell_popup_blid_pane

0xd155,	// (0x000685f0) cell_popup_blid_pane_g1

0xd15d,	// (0x000685f8) cell_popup_blid_pane_t1

0x4c58,	// (0x000600f3) mup2_indicator_pane_ParamLimits

0x4c58,	// (0x000600f3) mup2_indicator_pane

0xba44,	// (0x00066edf) mup2_visualizer_osc_pane

0xcefb,	// (0x00068396) mup2_visualizer_spec_pane_ParamLimits

0xcefb,	// (0x00068396) mup2_visualizer_spec_pane

0x4e42,	// (0x000602dd) mup2_spec_half_pane

0x4e4b,	// (0x000602e6) mup2_spec_half_pane_cp

0x4e55,	// (0x000602f0) mup2_spec_bar_pane_ParamLimits

0x4e55,	// (0x000602f0) mup2_spec_bar_pane

0xce9c,	// (0x00068337) mup2_spec_bar_pane_g1

0xcea6,	// (0x00068341) mup2_spec_bar_pane_g2

0x0001,

0x0529,	// (0x0005b9c4) mup2_spec_bar_pane_g

0x4e74,	// (0x0006030f) mup2_osc_middle_pane

0xceb8,	// (0x00068353) mup2_visualizer_osc_pane_g1

0xa43f,	// (0x000658da) popup_number_entry_window_t1_ParamLimits

0xa452,	// (0x000658ed) popup_number_entry_window_t2_ParamLimits

0xa464,	// (0x000658ff) popup_number_entry_window_t3_ParamLimits

0x1270,	// (0x0005c70b) popup_number_entry_window_t5_ParamLimits

0x1270,	// (0x0005c70b) popup_number_entry_window_t5

0xf0cd,	// (0x0006a568) popup_number_entry_window_t_ParamLimits

0xa476,	// (0x00065911) text_title_cp2_ParamLimits

0x3d57,	// (0x0005f1f2) aid_hotspot_pointer_text2_pane

0x3de5,	// (0x0005f280) main_viewer_pane_g9_ParamLimits

0x3de5,	// (0x0005f280) main_viewer_pane_g9

0xb310,	// (0x000667ab) cale_month_pane_t1_ParamLimits

0xb34d,	// (0x000667e8) bg_cale_pane_ParamLimits

0xb365,	// (0x00066800) list_cale_pane_ParamLimits

0xb376,	// (0x00066811) listscroll_cale_day_pane_t1

0xb388,	// (0x00066823) scroll_pane_cp09_ParamLimits

0x3a60,	// (0x0005eefb) main_mup_eq_pane_t1_ParamLimits

0x3a60,	// (0x0005eefb) main_mup_eq_pane_t1

0x3a7a,	// (0x0005ef15) main_mup_eq_pane_t2_ParamLimits

0x3a7a,	// (0x0005ef15) main_mup_eq_pane_t2

0x3a94,	// (0x0005ef2f) main_mup_eq_pane_t3_ParamLimits

0x3a94,	// (0x0005ef2f) main_mup_eq_pane_t3

0x3aac,	// (0x0005ef47) main_mup_eq_pane_t4_ParamLimits

0x3aac,	// (0x0005ef47) main_mup_eq_pane_t4

0x3ac4,	// (0x0005ef5f) main_mup_eq_pane_t5_ParamLimits

0x3ac4,	// (0x0005ef5f) main_mup_eq_pane_t5

0x3adc,	// (0x0005ef77) main_mup_eq_pane_t6_ParamLimits

0x3adc,	// (0x0005ef77) main_mup_eq_pane_t6

0x3af0,	// (0x0005ef8b) main_mup_eq_pane_t7_ParamLimits

0x3af0,	// (0x0005ef8b) main_mup_eq_pane_t7

0x3b04,	// (0x0005ef9f) main_mup_eq_pane_t8_ParamLimits

0x3b04,	// (0x0005ef9f) main_mup_eq_pane_t8

0x3b1a,	// (0x0005efb5) main_mup_eq_pane_t9_ParamLimits

0x3b1a,	// (0x0005efb5) main_mup_eq_pane_t9

0x3b32,	// (0x0005efcd) main_mup_eq_pane_t10_ParamLimits

0x3b32,	// (0x0005efcd) main_mup_eq_pane_t10

0x0009,

0xf42a,	// (0x0006a8c5) main_mup_eq_pane_t_ParamLimits

0xf42a,	// (0x0006a8c5) main_mup_eq_pane_t

0x3bef,	// (0x0005f08a) mup_equalizer_pane_cp5_ParamLimits

0x3c05,	// (0x0005f0a0) mup_equalizer_pane_cp6_ParamLimits

0x3c1d,	// (0x0005f0b8) mup_equalizer_pane_cp7_ParamLimits

0x120f,	// (0x0005c6aa) main_gallery_pane

0xcec1,	// (0x0006835c) smil2_volume_pane

0xcedc,	// (0x00068377) smil_status_volume_pane_g1_ParamLimits

0xcec9,	// (0x00068364) smil_status_volume_pane_g2_ParamLimits

0x4762,	// (0x0005fbfd) smil_status_volume_pane_g3_ParamLimits

0xf517,	// (0x0006a9b2) smil_status_volume_pane_g_ParamLimits

0xd03a,	// (0x000684d5) bg_popup_window_pane_cp07_ParamLimits

0xd048,	// (0x000684e3) blid_firmament_pane

0x4e7d,	// (0x00060318) aid_size_cell_gallery_ParamLimits

0x4e7d,	// (0x00060318) aid_size_cell_gallery

0x4e8b,	// (0x00060326) grid_gallery_pane_ParamLimits

0x4e8b,	// (0x00060326) grid_gallery_pane

0x4e9b,	// (0x00060336) cell_gallery_pane_ParamLimits

0x4e9b,	// (0x00060336) cell_gallery_pane

0xd16b,	// (0x00068606) bg_cell_gallery_focus_pane_ParamLimits

0xd16b,	// (0x00068606) bg_cell_gallery_focus_pane

0xd17d,	// (0x00068618) cell_gallery_pane_g1_ParamLimits

0xd17d,	// (0x00068618) cell_gallery_pane_g1

0x4ee9,	// (0x00060384) cell_gallery_pane_g2_ParamLimits

0x4ee9,	// (0x00060384) cell_gallery_pane_g2

0x4ef6,	// (0x00060391) cell_gallery_pane_g3_ParamLimits

0x4ef6,	// (0x00060391) cell_gallery_pane_g3

0xd189,	// (0x00068624) cell_gallery_pane_g4_ParamLimits

0xd189,	// (0x00068624) cell_gallery_pane_g4

0x0003,

0xf5a7,	// (0x0006aa42) cell_gallery_pane_g_ParamLimits

0xf5a7,	// (0x0006aa42) cell_gallery_pane_g

0xd195,	// (0x00068630) bg_cell_gallery_focus_pane_g1

0xd19d,	// (0x00068638) bg_cell_gallery_focus_pane_g2

0xd1a5,	// (0x00068640) bg_cell_gallery_focus_pane_g3

0xd1ad,	// (0x00068648) bg_cell_gallery_focus_pane_g4

0xd1b5,	// (0x00068650) bg_cell_gallery_focus_pane_g5

0xd1bd,	// (0x00068658) bg_cell_gallery_focus_pane_g6

0xd1c5,	// (0x00068660) bg_cell_gallery_focus_pane_g7

0xd1cd,	// (0x00068668) bg_cell_gallery_focus_pane_g8

0x0007,

0x05e5,	// (0x0005ba80) bg_cell_gallery_focus_pane_g

0xd1d5,	// (0x00068670) aid_firma_cardinal

0xd1e9,	// (0x00068684) blid_firmament_pane_t1

0xd200,	// (0x0006869b) blid_firmament_pane_t2

0xd217,	// (0x000686b2) blid_firmament_pane_t3

0xd22e,	// (0x000686c9) blid_firmament_pane_t4

0x0003,

0x05f6,	// (0x0005ba91) blid_firmament_pane_t

0xd245,	// (0x000686e0) blid_sat_info_pane

0xd255,	// (0x000686f0) blid_sat_info_pane_g1

0xd255,	// (0x000686f0) blid_sat_info_pane_g2

0x0001,

0x05ff,	// (0x0005ba9a) blid_sat_info_pane_g

0xd25f,	// (0x000686fa) blid_sat_info_pane_t1

0xd26d,	// (0x00068708) smil2_volume_content_pane

0xd27f,	// (0x0006871a) smil2_volume_pane_g1

0xd276,	// (0x00068711) smil2_volume_content_pane_g1

0xd287,	// (0x00068722) smil2_volume_content_pane_g2

0xd290,	// (0x0006872b) smil2_volume_content_pane_g3

0xd299,	// (0x00068734) smil2_volume_content_pane_g4

0xd2a2,	// (0x0006873d) smil2_volume_content_pane_g5

0xd2ab,	// (0x00068746) smil2_volume_content_pane_g6

0xd2b4,	// (0x0006874f) smil2_volume_content_pane_g7

0xd2bd,	// (0x00068758) smil2_volume_content_pane_g8

0xd2c6,	// (0x00068761) smil2_volume_content_pane_g9

0xd2cf,	// (0x0006876a) smil2_volume_content_pane_g10

0x0009,

0xf5b0,	// (0x0006aa4b) smil2_volume_content_pane_g

0x1a51,	// (0x0005ceec) cale_week_day_heading_pane_t1_ParamLimits

0x1a8c,	// (0x0005cf27) cale_week_day_heading_pane_t2_ParamLimits

0x1ac7,	// (0x0005cf62) cale_week_day_heading_pane_t3_ParamLimits

0x1b02,	// (0x0005cf9d) cale_week_day_heading_pane_t4_ParamLimits

0x1b3d,	// (0x0005cfd8) cale_week_day_heading_pane_t5_ParamLimits

0x1b78,	// (0x0005d013) cale_week_day_heading_pane_t6_ParamLimits

0x1bb3,	// (0x0005d04e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0006a66d) cale_week_day_heading_pane_t_ParamLimits

0xaf8b,	// (0x00066426) bg_cale_side_pane_ParamLimits

0x1bee,	// (0x0005d089) cale_week_time_pane_t1_ParamLimits

0x1c08,	// (0x0005d0a3) cale_week_time_pane_t2_ParamLimits

0x1c22,	// (0x0005d0bd) cale_week_time_pane_t3_ParamLimits

0x1c3c,	// (0x0005d0d7) cale_week_time_pane_t4_ParamLimits

0x1c56,	// (0x0005d0f1) cale_week_time_pane_t5_ParamLimits

0x1c70,	// (0x0005d10b) cale_week_time_pane_t6_ParamLimits

0x1c90,	// (0x0005d12b) cale_week_time_pane_t7_ParamLimits

0x1cb2,	// (0x0005d14d) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0006a67c) cale_week_time_pane_t_ParamLimits

0x1cd6,	// (0x0005d171) cell_cale_week_pane_g2_ParamLimits

0xaf8b,	// (0x00066426) bg_cale_side_pane_cp01_ParamLimits

0x3080,	// (0x0005e51b) cale_month_week_pane_t1_ParamLimits

0x3099,	// (0x0005e534) cale_month_week_pane_t2_ParamLimits

0x30b2,	// (0x0005e54d) cale_month_week_pane_t3_ParamLimits

0x30cb,	// (0x0005e566) cale_month_week_pane_t4_ParamLimits

0x30e4,	// (0x0005e57f) cale_month_week_pane_t5_ParamLimits

0x3105,	// (0x0005e5a0) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0006a755) cale_month_week_pane_t_ParamLimits

0x3272,	// (0x0005e70d) cell_cale_month_pane_g1_ParamLimits

0x120f,	// (0x0005c6aa) main_cale_event_viewer_pane

0x9cc5,	// (0x00065160) listscroll_cale_event_viewer_pane

0xd2d8,	// (0x00068773) list_cale_ev_pane

0xd2e0,	// (0x0006877b) scroll_pane_cp023

0xd2ec,	// (0x00068787) field_cale_ev_pane_ParamLimits

0xd2ec,	// (0x00068787) field_cale_ev_pane

0xd30a,	// (0x000687a5) field_cale_ev_content_pane_ParamLimits

0xd30a,	// (0x000687a5) field_cale_ev_content_pane

0xd316,	// (0x000687b1) field_cale_ev_pane_g1_ParamLimits

0xd316,	// (0x000687b1) field_cale_ev_pane_g1

0xd322,	// (0x000687bd) field_cale_ev_pane_g2_ParamLimits

0xd322,	// (0x000687bd) field_cale_ev_pane_g2

0xd33a,	// (0x000687d5) field_cale_ev_pane_g3_ParamLimits

0xd33a,	// (0x000687d5) field_cale_ev_pane_g3

0x0002,

0x0619,	// (0x0005bab4) field_cale_ev_pane_g_ParamLimits

0x0619,	// (0x0005bab4) field_cale_ev_pane_g

0xd352,	// (0x000687ed) field_cale_ev_pane_t1_ParamLimits

0xd352,	// (0x000687ed) field_cale_ev_pane_t1

0xd369,	// (0x00068804) field_cale_ev_content_pane_t1_ParamLimits

0xd369,	// (0x00068804) field_cale_ev_content_pane_t1

0x3cef,	// (0x0005f18a) bg_button_pane_cp01

0x17f3,	// (0x0005cc8e) listscroll_cale_week_pane_ParamLimits

0xaf35,	// (0x000663d0) popup_toolbar_window_cp01

0xaf5c,	// (0x000663f7) listscroll_cale_week_pane_t1_ParamLimits

0x17f3,	// (0x0005cc8e) listscroll_cale_day_pane_ParamLimits

0xaf35,	// (0x000663d0) popup_toolbar_window_cp02

0xb376,	// (0x00066811) listscroll_cale_day_pane_t1_ParamLimits

0x17f3,	// (0x0005cc8e) main_cale_month_pane_ParamLimits

0x4641,	// (0x0005fadc) popup_toolbar_window_cp03_ParamLimits

0x4641,	// (0x0005fadc) popup_toolbar_window_cp03

0x3f6d,	// (0x0005f408) main_image_pane_g2_ParamLimits

0x3f6d,	// (0x0005f408) main_image_pane_g2

0x3f79,	// (0x0005f414) main_image_pane_g3_ParamLimits

0x3f79,	// (0x0005f414) main_image_pane_g3

0x0002,

0xf4b2,	// (0x0006a94d) main_image_pane_g_ParamLimits

0xf4b2,	// (0x0006a94d) main_image_pane_g

0xbccc,	// (0x00067167) main_image_pane_t1_ParamLimits

0x3f85,	// (0x0005f420) main_image_pane_t2_ParamLimits

0x3f85,	// (0x0005f420) main_image_pane_t2

0x3f97,	// (0x0005f432) main_image_pane_t3_ParamLimits

0x3f97,	// (0x0005f432) main_image_pane_t3

0x3fa9,	// (0x0005f444) main_image_pane_t4_ParamLimits

0x3fa9,	// (0x0005f444) main_image_pane_t4

0x0003,

0xf4b9,	// (0x0006a954) main_image_pane_t_ParamLimits

0xf4b9,	// (0x0006a954) main_image_pane_t

0x3fbb,	// (0x0005f456) popup_image_details_window_cp01

0x3fc5,	// (0x0005f460) popup_toobar_trans_pane_cp01_ParamLimits

0x3fc5,	// (0x0005f460) popup_toobar_trans_pane_cp01

0x4591,	// (0x0005fa2c) popup_image_details_window_ParamLimits

0x4591,	// (0x0005fa2c) popup_image_details_window

0x459f,	// (0x0005fa3a) popup_image_focus_window

0x48e1,	// (0x0005fd7c) camera2_autofocus_pane_ParamLimits

0x48e1,	// (0x0005fd7c) camera2_autofocus_pane

0x9cc5,	// (0x00065160) bg_popup_sub_pane_cp06

0xd387,	// (0x00068822) popup_image_focus_window_g1

0xd38f,	// (0x0006882a) popup_image_focus_window_g2

0xd397,	// (0x00068832) popup_image_focus_window_g3

0xd39f,	// (0x0006883a) popup_image_focus_window_g4

0x0003,

0x0620,	// (0x0005babb) popup_image_focus_window_g

0xd3a7,	// (0x00068842) popup_image_focus_window_t1

0xd3b5,	// (0x00068850) popup_image_focus_window_t2

0xd3c5,	// (0x00068860) popup_image_focus_window_t3

0x0002,

0x0629,	// (0x0005bac4) popup_image_focus_window_t

0xd3d3,	// (0x0006886e) camera2_autofocus_pane_g1

0xa97d,	// (0x00065e18) bg_tb_trans_pane_cp01

0xd3e1,	// (0x0006887c) popup_image_details_window_g1

0xd3f4,	// (0x0006888f) popup_image_details_window_g2

0x0002,

0x063b,	// (0x0005bad6) popup_image_details_window_g

0xd41d,	// (0x000688b8) popup_image_details_window_t1

0xd42f,	// (0x000688ca) popup_image_details_window_t2

0xd448,	// (0x000688e3) popup_image_details_window_t3

0xd45c,	// (0x000688f7) popup_image_details_window_t4

0xd477,	// (0x00068912) popup_image_details_window_t5

0x0004,

0x0642,	// (0x0005badd) popup_image_details_window_t

0xae0c,	// (0x000662a7) bg_calc_paper_pane_ParamLimits

0x120f,	// (0x0005c6aa) grid_highlight_pane_cp013

0x157a,	// (0x0005ca15) list_calc_pane_ParamLimits

0x158c,	// (0x0005ca27) scroll_pane_cp024

0xae20,	// (0x000662bb) bg_calc_display_pane_ParamLimits

0x1594,	// (0x0005ca2f) calc_display_pane_t1_ParamLimits

0x15a9,	// (0x0005ca44) calc_display_pane_t2_ParamLimits

0x15be,	// (0x0005ca59) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0006a5ef) calc_display_pane_t_ParamLimits

0x169a,	// (0x0005cb35) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0006a60c) cell_calc_pane_g

0x16a3,	// (0x0005cb3e) cell_calc_pane_t1

0xae7f,	// (0x0006631a) grid_highlight_pane_cp02_ParamLimits

0xae95,	// (0x00066330) toolbar_button_pane_cp01_ParamLimits

0xae95,	// (0x00066330) toolbar_button_pane_cp01

0xbd11,	// (0x000671ac) temp_image_control_pane_ParamLimits

0xbd11,	// (0x000671ac) temp_image_control_pane

0x4509,	// (0x0005f9a4) main_mp3_pane

0xd491,	// (0x0006892c) temp_image_control_pane_g1_ParamLimits

0xd491,	// (0x0006892c) temp_image_control_pane_g1

0xd49f,	// (0x0006893a) temp_image_control_pane_g2_ParamLimits

0xd49f,	// (0x0006893a) temp_image_control_pane_g2

0xd4b1,	// (0x0006894c) temp_image_control_pane_g3_ParamLimits

0xd4b1,	// (0x0006894c) temp_image_control_pane_g3

0x4f33,	// (0x000603ce) temp_image_control_pane_g4_ParamLimits

0x4f33,	// (0x000603ce) temp_image_control_pane_g4

0x0003,

0xf5d0,	// (0x0006aa6b) temp_image_control_pane_g_ParamLimits

0xf5d0,	// (0x0006aa6b) temp_image_control_pane_g

0xd491,	// (0x0006892c) main_mp3_pane_g1

0x4f44,	// (0x000603df) main_mp3_pane_g2

0x0007,

0xf5d9,	// (0x0006aa74) main_mp3_pane_g

0xd4f4,	// (0x0006898f) main_mp3_pane_t1

0xafe6,	// (0x00066481) main_camera_pane_g8_ParamLimits

0xafe6,	// (0x00066481) main_camera_pane_g8

0x1f76,	// (0x0005d411) main_video_pane_g7_ParamLimits

0x1f76,	// (0x0005d411) main_video_pane_g7

0x4a29,	// (0x0005fec4) main_camera2_pane_t7_ParamLimits

0x4a29,	// (0x0005fec4) main_camera2_pane_t7

0xb12e,	// (0x000665c9) scroll_pane_cp025_ParamLimits

0xb12e,	// (0x000665c9) scroll_pane_cp025

0xb142,	// (0x000665dd) scroll_pane_cp026_ParamLimits

0xb142,	// (0x000665dd) scroll_pane_cp026

0xb151,	// (0x000665ec) wml_content_pane_ParamLimits

0x120f,	// (0x0005c6aa) main_touch_calib_pane

0x4fe8,	// (0x00060483) main_touch_calib_pane_g1

0x4ff4,	// (0x0006048f) main_touch_calib_pane_g2

0x5000,	// (0x0006049b) main_touch_calib_pane_g3

0x500c,	// (0x000604a7) main_touch_calib_pane_g4

0x0003,

0xf5f7,	// (0x0006aa92) main_touch_calib_pane_g

0x5018,	// (0x000604b3) main_touch_calib_pane_t1

0x5031,	// (0x000604cc) main_touch_calib_pane_t2

0x0004,

0xf600,	// (0x0006aa9b) main_touch_calib_pane_t

0xb8df,	// (0x00066d7a) mup_progress_pane_cp02

0xb914,	// (0x00066daf) navi_pane_g1

0xb9cf,	// (0x00066e6a) navi_pane_mp_t3

0x4509,	// (0x0005f9a4) main_mp3_pane_ParamLimits

0x467e,	// (0x0005fb19) navi_pane_ParamLimits

0xd491,	// (0x0006892c) main_mp3_pane_g1_ParamLimits

0x4f44,	// (0x000603df) main_mp3_pane_g2_ParamLimits

0x4f50,	// (0x000603eb) main_mp3_pane_g3_ParamLimits

0x4f50,	// (0x000603eb) main_mp3_pane_g3

0x4f5c,	// (0x000603f7) main_mp3_pane_g4_ParamLimits

0x4f5c,	// (0x000603f7) main_mp3_pane_g4

0xd4c1,	// (0x0006895c) main_mp3_pane_g5_ParamLimits

0xd4c1,	// (0x0006895c) main_mp3_pane_g5

0xd4cf,	// (0x0006896a) main_mp3_pane_g6_ParamLimits

0xd4cf,	// (0x0006896a) main_mp3_pane_g6

0xd4dc,	// (0x00068977) main_mp3_pane_g7_ParamLimits

0xd4dc,	// (0x00068977) main_mp3_pane_g7

0xd4e8,	// (0x00068983) main_mp3_pane_g8_ParamLimits

0xd4e8,	// (0x00068983) main_mp3_pane_g8

0xf5d9,	// (0x0006aa74) main_mp3_pane_g_ParamLimits

0x4f68,	// (0x00060403) main_mp3_pane_t2

0x4f78,	// (0x00060413) main_mp3_pane_t3

0xd502,	// (0x0006899d) main_mp3_pane_t4

0xd510,	// (0x000689ab) main_mp3_pane_t5

0x0005,

0xf5ea,	// (0x0006aa85) main_mp3_pane_t

0xd51e,	// (0x000689b9) mup_progress_pane_cp01

0x0e61,	// (0x0005c2fc) aid_zoom_text_secondary2

0xd2d8,	// (0x00068773) list_cale_ev2_pane

0xd2e0,	// (0x0006877b) scroll_pane_cp023_ParamLimits

0x508c,	// (0x00060527) field_cale_ev2_pane_ParamLimits

0x508c,	// (0x00060527) field_cale_ev2_pane

0x9d0d,	// (0x000651a8) field_cale_ev2_pane_g1_ParamLimits

0x9d0d,	// (0x000651a8) field_cale_ev2_pane_g1

0x9d19,	// (0x000651b4) field_cale_ev2_pane_g2_ParamLimits

0x9d19,	// (0x000651b4) field_cale_ev2_pane_g2

0x9d31,	// (0x000651cc) field_cale_ev2_pane_g3_ParamLimits

0x9d31,	// (0x000651cc) field_cale_ev2_pane_g3

0x0003,

0xf60b,	// (0x0006aaa6) field_cale_ev2_pane_g_ParamLimits

0xf60b,	// (0x0006aaa6) field_cale_ev2_pane_g

0x50b5,	// (0x00060550) field_cale_ev2_pane_t1_ParamLimits

0x50b5,	// (0x00060550) field_cale_ev2_pane_t1

0x50cc,	// (0x00060567) field_cale_ev2_pane_t2_ParamLimits

0x50cc,	// (0x00060567) field_cale_ev2_pane_t2

0x0001,

0xf614,	// (0x0006aaaf) field_cale_ev2_pane_t_ParamLimits

0xf614,	// (0x0006aaaf) field_cale_ev2_pane_t

0x3e4d,	// (0x0005f2e8) main_postcard_pane_g5_ParamLimits

0x3e4d,	// (0x0005f2e8) main_postcard_pane_g5

0x3e5b,	// (0x0005f2f6) main_postcard_pane_g6_ParamLimits

0x3e5b,	// (0x0005f2f6) main_postcard_pane_g6

0x1dc0,	// (0x0005d25b) camera2_autofocus_pane_cp_ParamLimits

0x1dc0,	// (0x0005d25b) camera2_autofocus_pane_cp

0x4509,	// (0x0005f9a4) main_mup3_pane

0x50e1,	// (0x0006057c) main_mup3_pane_g1_ParamLimits

0x50e1,	// (0x0006057c) main_mup3_pane_g1

0x5102,	// (0x0006059d) main_mup3_pane_g2_ParamLimits

0x5102,	// (0x0006059d) main_mup3_pane_g2

0x517a,	// (0x00060615) main_mup3_pane_g3_ParamLimits

0x517a,	// (0x00060615) main_mup3_pane_g3

0x51bd,	// (0x00060658) main_mup3_pane_g4_ParamLimits

0x51bd,	// (0x00060658) main_mup3_pane_g4

0x5200,	// (0x0006069b) main_mup3_pane_g5_ParamLimits

0x5200,	// (0x0006069b) main_mup3_pane_g5

0x5243,	// (0x000606de) main_mup3_pane_g6_ParamLimits

0x5243,	// (0x000606de) main_mup3_pane_g6

0xd546,	// (0x000689e1) main_mup3_pane_g7_ParamLimits

0xd546,	// (0x000689e1) main_mup3_pane_g7

0x0007,

0xf619,	// (0x0006aab4) main_mup3_pane_g_ParamLimits

0xf619,	// (0x0006aab4) main_mup3_pane_g

0x52b9,	// (0x00060754) main_mup3_pane_t1_ParamLimits

0x52b9,	// (0x00060754) main_mup3_pane_t1

0x5328,	// (0x000607c3) main_mup3_pane_t2_ParamLimits

0x5328,	// (0x000607c3) main_mup3_pane_t2

0x53f1,	// (0x0006088c) main_mup3_pane_t4_ParamLimits

0x53f1,	// (0x0006088c) main_mup3_pane_t4

0x543f,	// (0x000608da) main_mup3_pane_t5_ParamLimits

0x543f,	// (0x000608da) main_mup3_pane_t5

0x54ef,	// (0x0006098a) main_mup3_pane_t6_ParamLimits

0x54ef,	// (0x0006098a) main_mup3_pane_t6

0x0005,

0xf62a,	// (0x0006aac5) main_mup3_pane_t_ParamLimits

0xf62a,	// (0x0006aac5) main_mup3_pane_t

0x559b,	// (0x00060a36) mup3_progress_pane_ParamLimits

0x559b,	// (0x00060a36) mup3_progress_pane

0x5619,	// (0x00060ab4) popup_mup3_control_window_ParamLimits

0x5619,	// (0x00060ab4) popup_mup3_control_window

0xd554,	// (0x000689ef) popup_mup3_text_window

0x5632,	// (0x00060acd) mup3_progress_pane_t1

0x5651,	// (0x00060aec) mup3_progress_pane_t2

0xd55c,	// (0x000689f7) mup3_progress_pane_t3

0x0002,

0xf637,	// (0x0006aad2) mup3_progress_pane_t

0xd579,	// (0x00068a14) mup_progress_pane_cp03

0x9cc5,	// (0x00065160) bg_tb_trans_pane_cp04

0x5670,	// (0x00060b0b) mup3_volume_pane

0x5678,	// (0x00060b13) popup_mup3_control_window_g1

0x5681,	// (0x00060b1c) mup3_volume_pane_g1

0x568a,	// (0x00060b25) mup3_volume_pane_g2

0x5693,	// (0x00060b2e) mup3_volume_pane_g3

0x0002,

0xf63e,	// (0x0006aad9) mup3_volume_pane_g

0x9cc5,	// (0x00065160) bg_tb_trans_pane_cp03

0xd589,	// (0x00068a24) popup_mup3_text_window_g1

0xd591,	// (0x00068a2c) popup_mup3_text_window_t1

0xae68,	// (0x00066303) list_calc_item_pane_g1_ParamLimits

0xcf9c,	// (0x00068437) mup_volume_pane_cp_g1

0x504a,	// (0x000604e5) main_touch_calib_pane_t3

0x5060,	// (0x000604fb) main_touch_calib_pane_t4

0x5076,	// (0x00060511) main_touch_calib_pane_t5

0x0f44,	// (0x0005c3df) aid_cell_size_toolbar2

0x0f4c,	// (0x0005c3e7) aid_popup3_width_pane

0x0e59,	// (0x0005c2f4) aid_zoom_text_msg_primary

0x1d8d,	// (0x0005d228) vorec_t7

0xae2c,	// (0x000662c7) bg_calc_paper_pane_g1_ParamLimits

0xae44,	// (0x000662df) bg_calc_paper_pane_g2_ParamLimits

0xae38,	// (0x000662d3) bg_calc_paper_pane_g3_ParamLimits

0xae50,	// (0x000662eb) bg_calc_paper_pane_g4_ParamLimits

0xae5c,	// (0x000662f7) bg_calc_paper_pane_g5_ParamLimits

0x15fd,	// (0x0005ca98) bg_calc_paper_pane_g6_ParamLimits

0x160e,	// (0x0005caa9) bg_calc_paper_pane_g7_ParamLimits

0x161f,	// (0x0005caba) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0006a5f6) bg_calc_paper_pane_g_ParamLimits

0x1630,	// (0x0005cacb) calc_bg_paper_pane_g9_ParamLimits

0x1ea7,	// (0x0005d342) image_qvga_pane_ParamLimits

0x1ea7,	// (0x0005d342) image_qvga_pane

0xad5b,	// (0x000661f6) bg_popup_sub_pane_cp04_ParamLimits

0xbc48,	// (0x000670e3) popup_mup_playback_window_g1_ParamLimits

0xbc54,	// (0x000670ef) popup_mup_playback_window_t1_ParamLimits

0xbc69,	// (0x00067104) popup_mup_playback_window_t2_ParamLimits

0x0405,	// (0x0005b8a0) popup_mup_playback_window_t_ParamLimits

0x4b58,	// (0x0005fff3) main_mup2_pane_g3_ParamLimits

0x4b58,	// (0x0005fff3) main_mup2_pane_g3

0x226c,	// (0x0005d707) popup_toolbar_window_cp04

0xc04b,	// (0x000674e6) popup_call2_audio_second_window_g3_ParamLimits

0xc04b,	// (0x000674e6) popup_call2_audio_second_window_g3

0xc455,	// (0x000678f0) popup_call2_audio_first_window_g4_ParamLimits

0xc455,	// (0x000678f0) popup_call2_audio_first_window_g4

0xcad4,	// (0x00067f6f) popup_call2_audio_in_window_g4_ParamLimits

0xcad4,	// (0x00067f6f) popup_call2_audio_in_window_g4

0x3f60,	// (0x0005f3fb) aid_area_sk_bg_cut_ParamLimits

0x3f60,	// (0x0005f3fb) aid_area_sk_bg_cut

0xbc7e,	// (0x00067119) aid_area_sk_bg_cut_2_ParamLimits

0xbc7e,	// (0x00067119) aid_area_sk_bg_cut_2

0x4ed9,	// (0x00060374) aid_placing_details_win

0x4ee1,	// (0x0006037c) aid_placing_details_win_2

0xd3d3,	// (0x0006886e) camera2_autofocus_pane_g1_ParamLimits

0x119b,	// (0x0005c636) popup_fixed_preview_cale_window_ParamLimits

0x119b,	// (0x0005c636) popup_fixed_preview_cale_window

0xba5e,	// (0x00066ef9) navi_slider_pane_g3

0xba67,	// (0x00066f02) navi_slider_pane_g4

0xba55,	// (0x00066ef0) navi_slider_pane_g5

0xba5e,	// (0x00066ef9) navi_slider_pane_g6

0x37f4,	// (0x0005ec8f) navi_slider_pane_g7

0xbb88,	// (0x00067023) mup_scale_pane_g3

0xbb91,	// (0x0006702c) mup_scale_pane_g4

0xbb9a,	// (0x00067035) mup_scale_pane_g5

0x3c35,	// (0x0005f0d0) mup_scale_pane_g6

0x3c3e,	// (0x0005f0d9) mup_scale_pane_g7

0xba5e,	// (0x00066ef9) cams2_slider_pane_g3

0xd02a,	// (0x000684c5) cams2_slider_pane_g4

0x4e31,	// (0x000602cc) cams2_slider_pane_g5

0xba5e,	// (0x00066ef9) cams2_slider_pane_g6

0x4e39,	// (0x000602d4) cams2_slider_pane_g7

0xd255,	// (0x000686f0) camera2_autofocus_pane_cp_g1

0xce35,	// (0x000682d0) bg_popup_preview_window_pane_cp02_ParamLimits

0xce35,	// (0x000682d0) bg_popup_preview_window_pane_cp02

0xd59f,	// (0x00068a3a) list_fp_cale_pane_ParamLimits

0xd59f,	// (0x00068a3a) list_fp_cale_pane

0xd5ab,	// (0x00068a46) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ab,	// (0x00068a46) popup_fixed_preview_cale_window_t1

0x569c,	// (0x00060b37) popup_fixed_preview_cale_window_t2_ParamLimits

0x569c,	// (0x00060b37) popup_fixed_preview_cale_window_t2

0x56b1,	// (0x00060b4c) popup_fixed_preview_cale_window_t3_ParamLimits

0x56b1,	// (0x00060b4c) popup_fixed_preview_cale_window_t3

0x0002,

0xf645,	// (0x0006aae0) popup_fixed_preview_cale_window_t_ParamLimits

0xf645,	// (0x0006aae0) popup_fixed_preview_cale_window_t

0x56c6,	// (0x00060b61) list_single_fp_cale_pane_ParamLimits

0x56c6,	// (0x00060b61) list_single_fp_cale_pane

0xd5c9,	// (0x00068a64) list_single_fp_cale_pane_g1_ParamLimits

0xd5c9,	// (0x00068a64) list_single_fp_cale_pane_g1

0xd5d5,	// (0x00068a70) list_single_fp_cale_pane_g2_ParamLimits

0xd5d5,	// (0x00068a70) list_single_fp_cale_pane_g2

0x0002,

0x06d4,	// (0x0005bb6f) list_single_fp_cale_pane_g_ParamLimits

0x06d4,	// (0x0005bb6f) list_single_fp_cale_pane_g

0xd5ee,	// (0x00068a89) list_single_fp_cale_pane_t1_ParamLimits

0xd5ee,	// (0x00068a89) list_single_fp_cale_pane_t1

0xd600,	// (0x00068a9b) list_single_fp_cale_pane_t2_ParamLimits

0xd600,	// (0x00068a9b) list_single_fp_cale_pane_t2

0x0001,

0x06db,	// (0x0005bb76) list_single_fp_cale_pane_t_ParamLimits

0x06db,	// (0x0005bb76) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x120f,	// (0x0005c6aa) main_dialer_pane

0x56d9,	// (0x00060b74) aid_cell_size_keypad

0x56e3,	// (0x00060b7e) dialer_ne_pane

0x56ed,	// (0x00060b88) grid_dialer_command_1_pane

0x56f5,	// (0x00060b90) grid_dialer_command_2_pane

0x56fd,	// (0x00060b98) grid_dialer_keypad_pane

0x570f,	// (0x00060baa) bg_popup_call_pane_cp06_ParamLimits

0x570f,	// (0x00060baa) bg_popup_call_pane_cp06

0x571b,	// (0x00060bb6) dialer_ne_clear_pane_ParamLimits

0x571b,	// (0x00060bb6) dialer_ne_clear_pane

0xd633,	// (0x00068ace) dialer_ne_pane_g1

0xd63b,	// (0x00068ad6) dialer_ne_pane_t1_ParamLimits

0xd63b,	// (0x00068ad6) dialer_ne_pane_t1

0x5727,	// (0x00060bc2) dialer_ne_pane_t2_ParamLimits

0x5727,	// (0x00060bc2) dialer_ne_pane_t2

0x5744,	// (0x00060bdf) dialer_ne_pane_t3_ParamLimits

0x5744,	// (0x00060bdf) dialer_ne_pane_t3

0x0002,

0xf64c,	// (0x0006aae7) dialer_ne_pane_t_ParamLimits

0xf64c,	// (0x0006aae7) dialer_ne_pane_t

0x5768,	// (0x00060c03) dialer_ne_pane_t3_copy1_ParamLimits

0x5768,	// (0x00060c03) dialer_ne_pane_t3_copy1

0x578c,	// (0x00060c27) cell_dialer_keypad_pane_ParamLimits

0x578c,	// (0x00060c27) cell_dialer_keypad_pane

0x57a3,	// (0x00060c3e) cell_dialer_command_1_pane_ParamLimits

0x57a3,	// (0x00060c3e) cell_dialer_command_1_pane

0x57b9,	// (0x00060c54) cell_dialer_command_2_pane_ParamLimits

0x57b9,	// (0x00060c54) cell_dialer_command_2_pane

0xd64d,	// (0x00068ae8) bg_button_pane_cp02_ParamLimits

0xd64d,	// (0x00068ae8) bg_button_pane_cp02

0x57c8,	// (0x00060c63) cell_dialer_keypad_pane_g1_ParamLimits

0x57c8,	// (0x00060c63) cell_dialer_keypad_pane_g1

0xd64d,	// (0x00068ae8) bg_button_pane_cp03_ParamLimits

0xd64d,	// (0x00068ae8) bg_button_pane_cp03

0x57dd,	// (0x00060c78) cell_dialer_command_1_pane_g1_ParamLimits

0x57dd,	// (0x00060c78) cell_dialer_command_1_pane_g1

0xd659,	// (0x00068af4) bg_button_pane_cp04

0x57f1,	// (0x00060c8c) cell_dialer_command_2_pane_g1

0xba44,	// (0x00066edf) bg_button_pane_cp06

0xd661,	// (0x00068afc) dialer_ne_clear_pane_g1

0xb920,	// (0x00066dbb) navi_pane_g2

0xb94e,	// (0x00066de9) navi_pane_g3

0x0002,

0x0308,	// (0x0005b7a3) navi_pane_g

0xb9dd,	// (0x00066e78) navi_pane_mv_g2

0xba04,	// (0x00066e9f) navi_pane_mv_g5

0x37bf,	// (0x0005ec5a) navi_pane_mv_t1

0xae20,	// (0x000662bb) main_clock2_pane

0x582f,	// (0x00060cca) main_clock2_list_pane_ParamLimits

0x582f,	// (0x00060cca) main_clock2_list_pane

0x5857,	// (0x00060cf2) main_clock2_pane_t1_ParamLimits

0x5857,	// (0x00060cf2) main_clock2_pane_t1

0x5879,	// (0x00060d14) main_clock2_pane_t2_ParamLimits

0x5879,	// (0x00060d14) main_clock2_pane_t2

0x0004,

0xf653,	// (0x0006aaee) main_clock2_pane_t_ParamLimits

0xf653,	// (0x0006aaee) main_clock2_pane_t

0x58d4,	// (0x00060d6f) popup_clock_analogue_window_cp03_ParamLimits

0x58d4,	// (0x00060d6f) popup_clock_analogue_window_cp03

0x58f2,	// (0x00060d8d) popup_clock_digital_window_cp02_ParamLimits

0x58f2,	// (0x00060d8d) popup_clock_digital_window_cp02

0x595f,	// (0x00060dfa) main_clock2_list_single_pane_ParamLimits

0x595f,	// (0x00060dfa) main_clock2_list_single_pane

0xba44,	// (0x00066edf) list_highlight_pane_cp05

0xd67f,	// (0x00068b1a) main_clock2_list_single_pane_t1

0x226c,	// (0x0005d707) popup_toolbar_window_cp04_ParamLimits

0x4f03,	// (0x0006039e) camera2_autofocus_pane_g2_ParamLimits

0x4f03,	// (0x0006039e) camera2_autofocus_pane_g2

0x4f0f,	// (0x000603aa) camera2_autofocus_pane_g3_ParamLimits

0x4f0f,	// (0x000603aa) camera2_autofocus_pane_g3

0x4f1b,	// (0x000603b6) camera2_autofocus_pane_g4_ParamLimits

0x4f1b,	// (0x000603b6) camera2_autofocus_pane_g4

0x4f27,	// (0x000603c2) camera2_autofocus_pane_g5_ParamLimits

0x4f27,	// (0x000603c2) camera2_autofocus_pane_g5

0x0004,

0xf5c5,	// (0x0006aa60) camera2_autofocus_pane_g_ParamLimits

0xf5c5,	// (0x0006aa60) camera2_autofocus_pane_g

0xd526,	// (0x000689c1) camera2_autofocus_pane_cp_g2

0xd52e,	// (0x000689c9) camera2_autofocus_pane_cp_g3

0xd536,	// (0x000689d1) camera2_autofocus_pane_cp_g4

0xd53e,	// (0x000689d9) camera2_autofocus_pane_cp_g5

0x0004,

0x0696,	// (0x0005bb31) camera2_autofocus_pane_cp_g

0x5707,	// (0x00060ba2) popup_dialer_spcha_window

0x9cc5,	// (0x00065160) bg_popup_sub_pane_cp07

0xd68d,	// (0x00068b28) list_spcha_pane

0xd695,	// (0x00068b30) list_single_spcha_pane_ParamLimits

0xd695,	// (0x00068b30) list_single_spcha_pane

0x9cc5,	// (0x00065160) list_highlight_pane_cp06

0xd6a6,	// (0x00068b41) list_single_spcha_pane_t1

0xc87e,	// (0x00067d19) popup_call2_audio_out_window_g4_ParamLimits

0xc87e,	// (0x00067d19) popup_call2_audio_out_window_g4

0x120f,	// (0x0005c6aa) main_imed2_pane

0x45a7,	// (0x0005fa42) popup_imed_adjust2_window

0x45ba,	// (0x0005fa55) popup_imed_trans_window_ParamLimits

0x45ba,	// (0x0005fa55) popup_imed_trans_window

0xd093,	// (0x0006852e) popup_blid_sat_info2_window_t1

0xd0a1,	// (0x0006853c) popup_blid_sat_info2_window_t2

0x000a,

0x05c5,	// (0x0005ba60) popup_blid_sat_info2_window_t

0x5a09,	// (0x00060ea4) aid_size_cell_colour_35

0x5a23,	// (0x00060ebe) aid_size_cell_colour_112

0x5a3a,	// (0x00060ed5) aid_size_cell_effect

0xa97d,	// (0x00065e18) bg_tb_trans_pane_cp02

0xb53e,	// (0x000669d9) heading_imed_pane

0x5a54,	// (0x00060eef) listscroll_imed_pane

0xd6b4,	// (0x00068b4f) heading_imed_pane_g1

0xd6bc,	// (0x00068b57) heading_imed_pane_t1

0xd6ca,	// (0x00068b65) grid_imed_colour_35_pane_ParamLimits

0xd6ca,	// (0x00068b65) grid_imed_colour_35_pane

0x5a60,	// (0x00060efb) grid_imed_effect_pane

0xd6e1,	// (0x00068b7c) list_imed_aspect_pane

0x5a70,	// (0x00060f0b) scroll_pane_cp027_ParamLimits

0x5a70,	// (0x00060f0b) scroll_pane_cp027

0x5a7c,	// (0x00060f17) cell_imed_effect_pane_ParamLimits

0x5a7c,	// (0x00060f17) cell_imed_effect_pane

0xd6e9,	// (0x00068b84) cell_imed_colour_pane_ParamLimits

0xd6e9,	// (0x00068b84) cell_imed_colour_pane

0xd72b,	// (0x00068bc6) cell_imed_colour_pane_g1_ParamLimits

0xd72b,	// (0x00068bc6) cell_imed_colour_pane_g1

0xd73c,	// (0x00068bd7) hgihlgiht_grid_pane_cp016_ParamLimits

0xd73c,	// (0x00068bd7) hgihlgiht_grid_pane_cp016

0x5a94,	// (0x00060f2f) cell_imed_effect_pane_g1

0x5a9c,	// (0x00060f37) grid_highlight_pane_cp017

0xd74d,	// (0x00068be8) list_imed_single_pane_ParamLimits

0xd74d,	// (0x00068be8) list_imed_single_pane

0x9cc5,	// (0x00065160) list_highlight_pane_cp07

0xd762,	// (0x00068bfd) list_imed_aspect_pane_comp1_t1

0xce41,	// (0x000682dc) bg_tb_trans_pane_cp05

0xd784,	// (0x00068c1f) popup_imed_adjust2_window_g1

0xd7ab,	// (0x00068c46) popup_imed_adjust2_window_t1

0xd7c3,	// (0x00068c5e) slider_imed_adjust_pane

0xd7d7,	// (0x00068c72) slider_imed_adjust_pane_g1

0xd7e7,	// (0x00068c82) slider_imed_adjust_pane_g2

0xd7f7,	// (0x00068c92) slider_imed_adjust_pane_g3

0xd808,	// (0x00068ca3) slider_imed_adjust_pane_g4

0x0003,

0x0704,	// (0x0005bb9f) slider_imed_adjust_pane_g

0x5aa5,	// (0x00060f40) aid_size_cell_clipart2

0x5ab1,	// (0x00060f4c) grid_imed_clipart_pane

0xd819,	// (0x00068cb4) scroll_pane_cp031

0x5abb,	// (0x00060f56) cell_imed_clipart_pane_ParamLimits

0x5abb,	// (0x00060f56) cell_imed_clipart_pane

0x5add,	// (0x00060f78) cell_imed_clipart_pane_g1

0x9cc5,	// (0x00065160) grid_highlight_pane_cp014

0x583b,	// (0x00060cd6) main_clock2_pane_g1_ParamLimits

0x583b,	// (0x00060cd6) main_clock2_pane_g1

0x590a,	// (0x00060da5) aid_call2_pane_cp10

0x591c,	// (0x00060db7) aid_call_pane_cp10

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g1

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g2

0x592e,	// (0x00060dc9) popup_clock_analogue_window_cp10_g3

0x592e,	// (0x00060dc9) popup_clock_analogue_window_cp10_g4

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf65e,	// (0x0006aaf9) popup_clock_analogue_window_cp10_g

0x5940,	// (0x00060ddb) popup_clock_analogue_window_cp10_t1

0x5971,	// (0x00060e0c) clock_digital_number_pane_cp10_ParamLimits

0x5971,	// (0x00060e0c) clock_digital_number_pane_cp10

0x5989,	// (0x00060e24) clock_digital_number_pane_cp11_ParamLimits

0x5989,	// (0x00060e24) clock_digital_number_pane_cp11

0x59a1,	// (0x00060e3c) clock_digital_number_pane_cp12_ParamLimits

0x59a1,	// (0x00060e3c) clock_digital_number_pane_cp12

0x59b9,	// (0x00060e54) clock_digital_number_pane_cp13_ParamLimits

0x59b9,	// (0x00060e54) clock_digital_number_pane_cp13

0x59d1,	// (0x00060e6c) clock_digital_separator_pane_cp10_ParamLimits

0x59d1,	// (0x00060e6c) clock_digital_separator_pane_cp10

0x59e9,	// (0x00060e84) popup_clock_digital_window_cp02_t1_ParamLimits

0x59e9,	// (0x00060e84) popup_clock_digital_window_cp02_t1

0xad53,	// (0x000661ee) clock_digital_number_pane_cp10_g1

0xad53,	// (0x000661ee) clock_digital_number_pane_cp10_g2

0x0001,

0xf669,	// (0x0006ab04) clock_digital_number_pane_cp10_g

0xad53,	// (0x000661ee) clock_digital_separator_pane_cp10_g1

0xad53,	// (0x000661ee) clock_digital_separator_pane_g2_cp10

0xba0c,	// (0x00066ea7) navi_pane_vded_g4

0xba15,	// (0x00066eb0) navi_pane_vded_g5

0xba1e,	// (0x00066eb9) navi_pane_vded_t1

0x120f,	// (0x0005c6aa) main_vded_pane

0x5ae6,	// (0x00060f81) main_vded_pane_g1

0x5af2,	// (0x00060f8d) main_vded_pane_g2

0x5afc,	// (0x00060f97) main_vded_pane_g3

0x0002,

0xf66e,	// (0x0006ab09) main_vded_pane_g

0x5b06,	// (0x00060fa1) main_vded_pane_t1

0x5b14,	// (0x00060faf) main_vded_pane_t2

0x0001,

0xf675,	// (0x0006ab10) main_vded_pane_t

0x5b22,	// (0x00060fbd) vded_slider_pane

0x5b2c,	// (0x00060fc7) vded_video_pane

0xd821,	// (0x00068cbc) vded_video_pane_g1

0x5b36,	// (0x00060fd1) vded_video_pane_g2

0xd255,	// (0x000686f0) vded_video_pane_g3

0x0002,

0xf67a,	// (0x0006ab15) vded_video_pane_g

0xd82b,	// (0x00068cc6) vded_slider_pane_g1

0xcf9c,	// (0x00068437) vded_slider_pane_g2

0xd834,	// (0x00068ccf) vded_slider_pane_g3

0xd83d,	// (0x00068cd8) vded_slider_pane_g4

0xd846,	// (0x00068ce1) vded_slider_pane_g5

0x0004,

0x0725,	// (0x0005bbc0) vded_slider_pane_g

0x560b,	// (0x00060aa6) mup3_rocker_pane_ParamLimits

0x560b,	// (0x00060aa6) mup3_rocker_pane

0x5b3f,	// (0x00060fda) mup3_control_keys_pane_g1

0x5b47,	// (0x00060fe2) mup3_control_keys_pane_g2

0x5b4f,	// (0x00060fea) mup3_control_keys_pane_g3

0x5b57,	// (0x00060ff2) mup3_control_keys_pane_g4

0x0003,

0xf681,	// (0x0006ab1c) mup3_control_keys_pane_g

0x11c3,	// (0x0005c65e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11c3,	// (0x0005c65e) popup_toolbar2_fixed_window_cp01

0x5625,	// (0x00060ac0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5625,	// (0x00060ac0) popup_toolbar2_fixed_window_cp02

0xc1bd,	// (0x00067658) popup_call2_audio_second_window_t4_ParamLimits

0xc1bd,	// (0x00067658) popup_call2_audio_second_window_t4

0xc6eb,	// (0x00067b86) popup_call2_audio_first_window_t6_ParamLimits

0xc6eb,	// (0x00067b86) popup_call2_audio_first_window_t6

0xc981,	// (0x00067e1c) popup_call2_audio_out_window_t6_ParamLimits

0xc981,	// (0x00067e1c) popup_call2_audio_out_window_t6

0x120f,	// (0x0005c6aa) main_vitu_pane

0x5b67,	// (0x00061002) aid_size_cell_itu_ParamLimits

0x5b67,	// (0x00061002) aid_size_cell_itu

0xe8c8,	// (0x00069d63) bg_popup_window_pane_cp08_ParamLimits

0xe8c8,	// (0x00069d63) bg_popup_window_pane_cp08

0x5b75,	// (0x00061010) field_vitu_entry_pane_ParamLimits

0x5b75,	// (0x00061010) field_vitu_entry_pane

0x5b84,	// (0x0006101f) grid_vitu_function_pane_ParamLimits

0x5b84,	// (0x0006101f) grid_vitu_function_pane

0x5b94,	// (0x0006102f) grid_vitu_itu_pane_ParamLimits

0x5b94,	// (0x0006102f) grid_vitu_itu_pane

0x5ba4,	// (0x0006103f) cell_vitu_itu_pane_ParamLimits

0x5ba4,	// (0x0006103f) cell_vitu_itu_pane

0x5bb9,	// (0x00061054) cell_vitu_function_pane_ParamLimits

0x5bb9,	// (0x00061054) cell_vitu_function_pane

0xa97d,	// (0x00065e18) bg_popup_sub_pane_cp08_ParamLimits

0xa97d,	// (0x00065e18) bg_popup_sub_pane_cp08

0x5bcb,	// (0x00061066) field_vitu_entry_pane_t1_ParamLimits

0x5bcb,	// (0x00061066) field_vitu_entry_pane_t1

0xd867,	// (0x00068d02) field_vitu_entry_pane_t2_ParamLimits

0xd867,	// (0x00068d02) field_vitu_entry_pane_t2

0x0001,

0xf68a,	// (0x0006ab25) field_vitu_entry_pane_t_ParamLimits

0xf68a,	// (0x0006ab25) field_vitu_entry_pane_t

0xd884,	// (0x00068d1f) bg_button_pane_cp05_ParamLimits

0xd884,	// (0x00068d1f) bg_button_pane_cp05

0x5be7,	// (0x00061082) cell_vitu_itu_pane_g1

0x5bff,	// (0x0006109a) cell_vitu_itu_pane_t1_ParamLimits

0x5bff,	// (0x0006109a) cell_vitu_itu_pane_t1

0x5c11,	// (0x000610ac) cell_vitu_itu_pane_t2_ParamLimits

0x5c11,	// (0x000610ac) cell_vitu_itu_pane_t2

0x0002,

0xf68f,	// (0x0006ab2a) cell_vitu_itu_pane_t_ParamLimits

0xf68f,	// (0x0006ab2a) cell_vitu_itu_pane_t

0xd892,	// (0x00068d2d) bg_button_pane_cp07

0x5c46,	// (0x000610e1) cell_vitu_function_pane_g1

0x14a1,	// (0x0005c93c) main_calc_pane_g1

0x0f80,	// (0x0005c41b) aid_visual_content_pane

0x120f,	// (0x0005c6aa) main_vradio_pane

0x5c4f,	// (0x000610ea) main_vradio_pane_g1_ParamLimits

0x5c4f,	// (0x000610ea) main_vradio_pane_g1

0xd89c,	// (0x00068d37) main_vradio_pane_g2_ParamLimits

0xd89c,	// (0x00068d37) main_vradio_pane_g2

0x0001,

0xf696,	// (0x0006ab31) main_vradio_pane_g_ParamLimits

0xf696,	// (0x0006ab31) main_vradio_pane_g

0x5c5f,	// (0x000610fa) main_vradio_pane_t1_ParamLimits

0x5c5f,	// (0x000610fa) main_vradio_pane_t1

0x5c71,	// (0x0006110c) main_vradio_pane_t2_ParamLimits

0x5c71,	// (0x0006110c) main_vradio_pane_t2

0xd8a9,	// (0x00068d44) main_vradio_pane_t3_ParamLimits

0xd8a9,	// (0x00068d44) main_vradio_pane_t3

0x0002,

0xf69b,	// (0x0006ab36) main_vradio_pane_t_ParamLimits

0xf69b,	// (0x0006ab36) main_vradio_pane_t

0x5c83,	// (0x0006111e) vradio_rocker_control_pane_ParamLimits

0x5c83,	// (0x0006111e) vradio_rocker_control_pane

0x5c8f,	// (0x0006112a) vradio_station_info_pane_ParamLimits

0x5c8f,	// (0x0006112a) vradio_station_info_pane

0xd8bd,	// (0x00068d58) vradio_frequency_info_pane_ParamLimits

0xd8bd,	// (0x00068d58) vradio_frequency_info_pane

0xd255,	// (0x000686f0) vradio_station_info_pane_g1

0xd8cc,	// (0x00068d67) vradio_station_info_pane_t1_ParamLimits

0xd8cc,	// (0x00068d67) vradio_station_info_pane_t1

0xd8ee,	// (0x00068d89) vradio_station_info_pane_t2_ParamLimits

0xd8ee,	// (0x00068d89) vradio_station_info_pane_t2

0x0001,

0x0756,	// (0x0005bbf1) vradio_station_info_pane_t_ParamLimits

0x0756,	// (0x0005bbf1) vradio_station_info_pane_t

0xd900,	// (0x00068d9b) vradio_tuning_pane

0xd908,	// (0x00068da3) vradio_rocker_control_pane_g1

0xd910,	// (0x00068dab) vradio_rocker_control_pane_g2

0xd918,	// (0x00068db3) vradio_rocker_control_pane_g3

0xd920,	// (0x00068dbb) vradio_rocker_control_pane_g4

0xd928,	// (0x00068dc3) vradio_rocker_control_pane_g5

0x0004,

0x075b,	// (0x0005bbf6) vradio_rocker_control_pane_g

0x5c9e,	// (0x00061139) vradio_frequency_info_pane_g1

0xd930,	// (0x00068dcb) vradio_frequency_info_pane_t1_ParamLimits

0xd930,	// (0x00068dcb) vradio_frequency_info_pane_t1

0x5ca8,	// (0x00061143) vradio_tuning_pane_g1

0x5cb1,	// (0x0006114c) vradio_tuning_pane_t1

0x0fc9,	// (0x0005c464) area_side_right_pane_ParamLimits

0x0fc9,	// (0x0005c464) area_side_right_pane

0xcdfc,	// (0x00068297) status_small_pane_g1

0xce04,	// (0x0006829f) status_small_pane_g2

0xce0d,	// (0x000682a8) status_small_pane_g3

0xce16,	// (0x000682b1) status_small_pane_g4

0x0003,

0x051b,	// (0x0005b9b6) status_small_pane_g

0xce1f,	// (0x000682ba) status_small_pane_t1

0x120f,	// (0x0005c6aa) main_video3_pane

0xd944,	// (0x00068ddf) cams_zoom_vslider_pane

0xd94c,	// (0x00068de7) image3_wide_pane_ParamLimits

0xd94c,	// (0x00068de7) image3_wide_pane

0xd966,	// (0x00068e01) image3_wide_small_pane

0xd972,	// (0x00068e0d) main_video3_pane_g1_ParamLimits

0xd972,	// (0x00068e0d) main_video3_pane_g1

0xd98e,	// (0x00068e29) main_video3_pane_g2_ParamLimits

0xd98e,	// (0x00068e29) main_video3_pane_g2

0x0001,

0x0766,	// (0x0005bc01) main_video3_pane_g_ParamLimits

0x0766,	// (0x0005bc01) main_video3_pane_g

0xd9aa,	// (0x00068e45) main_video3_pane_t1_ParamLimits

0xd9aa,	// (0x00068e45) main_video3_pane_t1

0xd9d5,	// (0x00068e70) main_video3_pane_t2_ParamLimits

0xd9d5,	// (0x00068e70) main_video3_pane_t2

0xda00,	// (0x00068e9b) main_video3_pane_t3_ParamLimits

0xda00,	// (0x00068e9b) main_video3_pane_t3

0x0002,

0x076b,	// (0x0005bc06) main_video3_pane_t_ParamLimits

0x076b,	// (0x0005bc06) main_video3_pane_t

0xda2d,	// (0x00068ec8) cams_zoom_vslider_pane_g1

0xda36,	// (0x00068ed1) cams_zoom_vslider_pane_g2

0x0001,

0x0772,	// (0x0005bc0d) cams_zoom_vslider_pane_g

0xda3e,	// (0x00068ed9) small_slider_vertical_pane

0xd255,	// (0x000686f0) small_slider_vertical_pane_g1

0xd255,	// (0x000686f0) small_slider_vertical_pane_g2

0xda46,	// (0x00068ee1) small_slider_vertical_pane_g3

0x0002,

0x0777,	// (0x0005bc12) small_slider_vertical_pane_g

0x120f,	// (0x0005c6aa) main_hwr_training_pane

0xda4f,	// (0x00068eea) hwr_training_instruct_pane_ParamLimits

0xda4f,	// (0x00068eea) hwr_training_instruct_pane

0x5cc0,	// (0x0006115b) hwr_training_navi_pane_ParamLimits

0x5cc0,	// (0x0006115b) hwr_training_navi_pane

0x5cda,	// (0x00061175) hwr_training_write_pane_ParamLimits

0x5cda,	// (0x00061175) hwr_training_write_pane

0x9cc5,	// (0x00065160) bg_frame_shadow_pane

0xda86,	// (0x00068f21) hwr_training_write_pane_g1

0xda8e,	// (0x00068f29) hwr_training_write_pane_g2

0xda96,	// (0x00068f31) hwr_training_write_pane_g3

0xda9e,	// (0x00068f39) hwr_training_write_pane_g4

0xdaa6,	// (0x00068f41) hwr_training_write_pane_g5

0xdaae,	// (0x00068f49) hwr_training_write_pane_g6

0xdab6,	// (0x00068f51) hwr_training_write_pane_g7

0x0006,

0x077e,	// (0x0005bc19) hwr_training_write_pane_g

0x5d12,	// (0x000611ad) hwr_training_navi_pane_g1_ParamLimits

0x5d12,	// (0x000611ad) hwr_training_navi_pane_g1

0x5d24,	// (0x000611bf) hwr_training_navi_pane_g2_ParamLimits

0x5d24,	// (0x000611bf) hwr_training_navi_pane_g2

0x5d36,	// (0x000611d1) hwr_training_navi_pane_g3_ParamLimits

0x5d36,	// (0x000611d1) hwr_training_navi_pane_g3

0x5d46,	// (0x000611e1) hwr_training_navi_pane_g4_ParamLimits

0x5d46,	// (0x000611e1) hwr_training_navi_pane_g4

0x0004,

0xf6a2,	// (0x0006ab3d) hwr_training_navi_pane_g_ParamLimits

0xf6a2,	// (0x0006ab3d) hwr_training_navi_pane_g

0x5d60,	// (0x000611fb) hwr_training_navi_pane_t1

0x5d6e,	// (0x00061209) list_single_hwr_training_instruct_pane_ParamLimits

0x5d6e,	// (0x00061209) list_single_hwr_training_instruct_pane

0xdabe,	// (0x00068f59) list_single_hwr_training_instruct_pane_t1

0xd195,	// (0x00068630) bg_frame_shadow_pane_g1

0xdacd,	// (0x00068f68) bg_frame_shadow_pane_g2

0xdad5,	// (0x00068f70) bg_frame_shadow_pane_g3

0xdadd,	// (0x00068f78) bg_frame_shadow_pane_g4

0xdae5,	// (0x00068f80) bg_frame_shadow_pane_g5

0xdaed,	// (0x00068f88) bg_frame_shadow_pane_g6

0xdaf5,	// (0x00068f90) bg_frame_shadow_pane_g7

0xaed9,	// (0x00066374) bg_frame_shadow_pane_g8

0x0007,

0xf6ad,	// (0x0006ab48) bg_frame_shadow_pane_g

0x120f,	// (0x0005c6aa) main_video_tele_dialer_pane

0x5d93,	// (0x0006122e) aid_size_cell_video_keypad_ParamLimits

0x5d93,	// (0x0006122e) aid_size_cell_video_keypad

0x5da3,	// (0x0006123e) grid_video_dialer_keypad_pane_ParamLimits

0x5da3,	// (0x0006123e) grid_video_dialer_keypad_pane

0x5dd7,	// (0x00061272) video_down_pane_cp_ParamLimits

0x5dd7,	// (0x00061272) video_down_pane_cp

0x5e01,	// (0x0006129c) cell_video_dialer_keypad_pane_ParamLimits

0x5e01,	// (0x0006129c) cell_video_dialer_keypad_pane

0xdafd,	// (0x00068f98) bg_button_pane_cp08_ParamLimits

0xdafd,	// (0x00068f98) bg_button_pane_cp08

0x5e16,	// (0x000612b1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e16,	// (0x000612b1) cell_video_dialer_keypad_pane_g1

0x55ff,	// (0x00060a9a) mup3_rocker2_pane_ParamLimits

0x55ff,	// (0x00060a9a) mup3_rocker2_pane

0xd255,	// (0x000686f0) mup3_rocker2_pane_g1

0x4517,	// (0x0005f9b2) main_dialer2_pane

0x120f,	// (0x0005c6aa) main_mp4_pane

0x5e55,	// (0x000612f0) main_mp4_pane_g1_ParamLimits

0x5e55,	// (0x000612f0) main_mp4_pane_g1

0x5e63,	// (0x000612fe) main_mp4_pane_g2_ParamLimits

0x5e63,	// (0x000612fe) main_mp4_pane_g2

0x5e71,	// (0x0006130c) main_mp4_pane_g3_ParamLimits

0x5e71,	// (0x0006130c) main_mp4_pane_g3

0x5eb6,	// (0x00061351) main_mp4_pane_g4_ParamLimits

0x5eb6,	// (0x00061351) main_mp4_pane_g4

0x5ede,	// (0x00061379) main_mp4_pane_g5_ParamLimits

0x5ede,	// (0x00061379) main_mp4_pane_g5

0x0005,

0xf6cd,	// (0x0006ab68) main_mp4_pane_g_ParamLimits

0xf6cd,	// (0x0006ab68) main_mp4_pane_g

0x5f2e,	// (0x000613c9) main_mp4_pane_t1_ParamLimits

0x5f2e,	// (0x000613c9) main_mp4_pane_t1

0x5f8a,	// (0x00061425) main_mp4_pane_t2_ParamLimits

0x5f8a,	// (0x00061425) main_mp4_pane_t2

0xdb09,	// (0x00068fa4) main_mp4_pane_t3_ParamLimits

0xdb09,	// (0x00068fa4) main_mp4_pane_t3

0x5fdc,	// (0x00061477) main_mp4_pane_t4_ParamLimits

0x5fdc,	// (0x00061477) main_mp4_pane_t4

0x0003,

0xf6da,	// (0x0006ab75) main_mp4_pane_t_ParamLimits

0xf6da,	// (0x0006ab75) main_mp4_pane_t

0x6020,	// (0x000614bb) mp4_progress_pane_ParamLimits

0x6020,	// (0x000614bb) mp4_progress_pane

0x606a,	// (0x00061505) mp4_rocker_pane_ParamLimits

0x606a,	// (0x00061505) mp4_rocker_pane

0xdb31,	// (0x00068fcc) mp4_progress_pane_t1

0xdb4a,	// (0x00068fe5) mp4_progress_pane_t2

0x0001,

0x07ce,	// (0x0005bc69) mp4_progress_pane_t

0xdb63,	// (0x00068ffe) mup_progress_pane_cp04

0xe2c2,	// (0x0006975d) mp4_rocker_pane_g1

0x608a,	// (0x00061525) aid_cell_size_keypad2_ParamLimits

0x608a,	// (0x00061525) aid_cell_size_keypad2

0x609a,	// (0x00061535) dialer2_ne_pane_ParamLimits

0x609a,	// (0x00061535) dialer2_ne_pane

0x60a8,	// (0x00061543) grid_dialer2_keypad_pane_ParamLimits

0x60a8,	// (0x00061543) grid_dialer2_keypad_pane

0xe323,	// (0x000697be) bg_popup_call_pane_cp07_ParamLimits

0xe323,	// (0x000697be) bg_popup_call_pane_cp07

0x60b8,	// (0x00061553) dialer2_ne_pane_t1_ParamLimits

0x60b8,	// (0x00061553) dialer2_ne_pane_t1

0x60dd,	// (0x00061578) cell_dialer2_keypad_pane_ParamLimits

0x60dd,	// (0x00061578) cell_dialer2_keypad_pane

0xdb81,	// (0x0006901c) bg_button_pane_pane_cp04_ParamLimits

0xdb81,	// (0x0006901c) bg_button_pane_pane_cp04

0x60f2,	// (0x0006158d) cell_dialer2_keypad_pane_g1_ParamLimits

0x60f2,	// (0x0006158d) cell_dialer2_keypad_pane_g1

0x212e,	// (0x0005d5c9) aid_placing_vt_set_content_ParamLimits

0x212e,	// (0x0005d5c9) aid_placing_vt_set_content

0x215a,	// (0x0005d5f5) aid_placing_vt_set_title_ParamLimits

0x215a,	// (0x0005d5f5) aid_placing_vt_set_title

0x120f,	// (0x0005c6aa) main_image3_pane

0x618c,	// (0x00061627) area_side_right_pane_cp01_ParamLimits

0x618c,	// (0x00061627) area_side_right_pane_cp01

0x61b9,	// (0x00061654) main_image3_pane_g1_ParamLimits

0x61b9,	// (0x00061654) main_image3_pane_g1

0x61c7,	// (0x00061662) main_image3_pane_g2_ParamLimits

0x61c7,	// (0x00061662) main_image3_pane_g2

0x61e0,	// (0x0006167b) main_image3_pane_g3_ParamLimits

0x61e0,	// (0x0006167b) main_image3_pane_g3

0x61f9,	// (0x00061694) main_image3_pane_g4_ParamLimits

0x61f9,	// (0x00061694) main_image3_pane_g4

0x0003,

0xf6ed,	// (0x0006ab88) main_image3_pane_g_ParamLimits

0xf6ed,	// (0x0006ab88) main_image3_pane_g

0x6212,	// (0x000616ad) main_image3_pane_t1_ParamLimits

0x6212,	// (0x000616ad) main_image3_pane_t1

0x6237,	// (0x000616d2) main_image3_pane_t2_ParamLimits

0x6237,	// (0x000616d2) main_image3_pane_t2

0x6256,	// (0x000616f1) main_image3_pane_t3_ParamLimits

0x6256,	// (0x000616f1) main_image3_pane_t3

0x0003,

0xf6f6,	// (0x0006ab91) main_image3_pane_t_ParamLimits

0xf6f6,	// (0x0006ab91) main_image3_pane_t

0xe8c8,	// (0x00069d63) grid_sctrl_middle_pane_cp01_ParamLimits

0xe8c8,	// (0x00069d63) grid_sctrl_middle_pane_cp01

0x62b7,	// (0x00061752) cell_sctrl_middle_pane_cp01_ParamLimits

0x62b7,	// (0x00061752) cell_sctrl_middle_pane_cp01

0x62c8,	// (0x00061763) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62c8,	// (0x00061763) cell_sctrl_middle_pane_cp01_g1

0x120f,	// (0x0005c6aa) main_call4_pane

0x62d5,	// (0x00061770) aid_size_button_call4_ParamLimits

0x62d5,	// (0x00061770) aid_size_button_call4

0x6305,	// (0x000617a0) call4_windows_pane_ParamLimits

0x6305,	// (0x000617a0) call4_windows_pane

0x631f,	// (0x000617ba) grid_call4_button_pane_ParamLimits

0x631f,	// (0x000617ba) grid_call4_button_pane

0xdb8d,	// (0x00069028) call4_windows_conf_pane

0xdba4,	// (0x0006903f) popup_call4_audio_first_window_ParamLimits

0xdba4,	// (0x0006903f) popup_call4_audio_first_window

0xdbf0,	// (0x0006908b) popup_call4_audio_second_window_ParamLimits

0xdbf0,	// (0x0006908b) popup_call4_audio_second_window

0xdc04,	// (0x0006909f) popup_call4_audio_wait_window_ParamLimits

0xdc04,	// (0x0006909f) popup_call4_audio_wait_window

0x6343,	// (0x000617de) cell_call4_button_pane_ParamLimits

0x6343,	// (0x000617de) cell_call4_button_pane

0x6368,	// (0x00061803) bg_button_pane_cp09_ParamLimits

0x6368,	// (0x00061803) bg_button_pane_cp09

0x6374,	// (0x0006180f) cell_call4_button_pane_g1_ParamLimits

0x6374,	// (0x0006180f) cell_call4_button_pane_g1

0x6381,	// (0x0006181c) cell_call4_button_pane_t1_ParamLimits

0x6381,	// (0x0006181c) cell_call4_button_pane_t1

0xdc4c,	// (0x000690e7) popup_call4_audio_conf_window_ParamLimits

0xdc4c,	// (0x000690e7) popup_call4_audio_conf_window

0x5632,	// (0x00060acd) mup3_progress_pane_t1_ParamLimits

0x5651,	// (0x00060aec) mup3_progress_pane_t2_ParamLimits

0xd55c,	// (0x000689f7) mup3_progress_pane_t3_ParamLimits

0xf637,	// (0x0006aad2) mup3_progress_pane_t_ParamLimits

0xd579,	// (0x00068a14) mup_progress_pane_cp03_ParamLimits

0x5b5f,	// (0x00060ffa) mup3_control_keys_pane_g4_copy1

0x604e,	// (0x000614e9) mp4_rocker2_pane_ParamLimits

0x604e,	// (0x000614e9) mp4_rocker2_pane

0xdc60,	// (0x000690fb) mp4_rocker2_pane_g1

0xdc68,	// (0x00069103) mp4_rocker2_pane_g2

0x6393,	// (0x0006182e) mp4_rocker2_pane_g3

0x639b,	// (0x00061836) mp4_rocker2_pane_g4

0x63a3,	// (0x0006183e) mp4_rocker2_pane_g5

0x0004,

0xf6ff,	// (0x0006ab9a) mp4_rocker2_pane_g

0x120f,	// (0x0005c6aa) main_camera4_pane

0x120f,	// (0x0005c6aa) main_video4_pane

0x5db3,	// (0x0006124e) main_video_tele_dialer_pane_t1_ParamLimits

0x5db3,	// (0x0006124e) main_video_tele_dialer_pane_t1

0x5dc5,	// (0x00061260) main_video_tele_dialer_pane_t2_ParamLimits

0x5dc5,	// (0x00061260) main_video_tele_dialer_pane_t2

0x0001,

0xf6be,	// (0x0006ab59) main_video_tele_dialer_pane_t_ParamLimits

0xf6be,	// (0x0006ab59) main_video_tele_dialer_pane_t

0x63c3,	// (0x0006185e) cam4_autofocus_pane_ParamLimits

0x63c3,	// (0x0006185e) cam4_autofocus_pane

0x63dd,	// (0x00061878) cam4_image_uncrop_pane_ParamLimits

0x63dd,	// (0x00061878) cam4_image_uncrop_pane

0x63f4,	// (0x0006188f) cam4_indicators_pane_ParamLimits

0x63f4,	// (0x0006188f) cam4_indicators_pane

0x6410,	// (0x000618ab) main_camera4_pane_g1_ParamLimits

0x6410,	// (0x000618ab) main_camera4_pane_g1

0x641c,	// (0x000618b7) main_camera4_pane_g2_ParamLimits

0x641c,	// (0x000618b7) main_camera4_pane_g2

0x641c,	// (0x000618b7) main_camera4_pane_g3_ParamLimits

0x641c,	// (0x000618b7) main_camera4_pane_g3

0x6428,	// (0x000618c3) main_camera4_pane_g4_ParamLimits

0x6428,	// (0x000618c3) main_camera4_pane_g4

0x6434,	// (0x000618cf) main_camera4_pane_g5_ParamLimits

0x6434,	// (0x000618cf) main_camera4_pane_g5

0x0005,

0xf70a,	// (0x0006aba5) main_camera4_pane_g_ParamLimits

0xf70a,	// (0x0006aba5) main_camera4_pane_g

0x644e,	// (0x000618e9) main_camera4_pane_t1_ParamLimits

0x644e,	// (0x000618e9) main_camera4_pane_t1

0x6496,	// (0x00061931) bg_tb_trans_pane_cp06

0x64ac,	// (0x00061947) cam4_indicators_pane_g1

0x64bd,	// (0x00061958) cam4_indicators_pane_g2

0x0002,

0xf725,	// (0x0006abc0) cam4_indicators_pane_g

0x64db,	// (0x00061976) cam4_indicators_pane_t1

0x6505,	// (0x000619a0) main_video4_pane_g1_ParamLimits

0x6505,	// (0x000619a0) main_video4_pane_g1

0x6511,	// (0x000619ac) main_video4_pane_g2_ParamLimits

0x6511,	// (0x000619ac) main_video4_pane_g2

0x651d,	// (0x000619b8) main_video4_pane_g3_ParamLimits

0x651d,	// (0x000619b8) main_video4_pane_g3

0x6529,	// (0x000619c4) main_video4_pane_g4_ParamLimits

0x6529,	// (0x000619c4) main_video4_pane_g4

0x0004,

0xf72c,	// (0x0006abc7) main_video4_pane_g_ParamLimits

0xf72c,	// (0x0006abc7) main_video4_pane_g

0x6549,	// (0x000619e4) vid4_indicators_pane_ParamLimits

0x6549,	// (0x000619e4) vid4_indicators_pane

0x6568,	// (0x00061a03) video4_image_uncrop_cif_pane_ParamLimits

0x6568,	// (0x00061a03) video4_image_uncrop_cif_pane

0x6577,	// (0x00061a12) video4_image_uncrop_nhd_pane_ParamLimits

0x6577,	// (0x00061a12) video4_image_uncrop_nhd_pane

0x63dd,	// (0x00061878) video4_image_uncrop_vga_pane_ParamLimits

0x63dd,	// (0x00061878) video4_image_uncrop_vga_pane

0x4509,	// (0x0005f9a4) bg_tb_trans_pane_cp07

0x658e,	// (0x00061a29) vid4_indicators_pane_g1

0x65a2,	// (0x00061a3d) vid4_indicators_pane_g2

0x65b6,	// (0x00061a51) vid4_indicators_pane_g3

0x0004,

0xf737,	// (0x0006abd2) vid4_indicators_pane_g

0x65e5,	// (0x00061a80) vid4_indicators_pane_t1

0x65fc,	// (0x00061a97) cam4_autofocus_pane_g1

0x6604,	// (0x00061a9f) cam4_autofocus_pane_g2

0x660c,	// (0x00061aa7) cam4_autofocus_pane_g3

0x0002,

0xf742,	// (0x0006abdd) cam4_autofocus_pane_g

0x6614,	// (0x00061aaf) cam4_autofocus_pane_g3_copy1

0x5de5,	// (0x00061280) video_down_pane_cp_t1

0x5df3,	// (0x0006128e) video_down_pane_cp_t2

0x0001,

0xf6c3,	// (0x0006ab5e) video_down_pane_cp_t

0x11f5,	// (0x0005c690) popup_vitu2_window_ParamLimits

0x11f5,	// (0x0005c690) popup_vitu2_window

0x661c,	// (0x00061ab7) aid_size_cell2_itu2_ParamLimits

0x661c,	// (0x00061ab7) aid_size_cell2_itu2

0x663e,	// (0x00061ad9) aid_size_cell_itu2_ParamLimits

0x663e,	// (0x00061ad9) aid_size_cell_itu2

0x6682,	// (0x00061b1d) bg_popup_window_pane_cp09_ParamLimits

0x6682,	// (0x00061b1d) bg_popup_window_pane_cp09

0x6690,	// (0x00061b2b) field_vitu2_entry_pane_ParamLimits

0x6690,	// (0x00061b2b) field_vitu2_entry_pane

0x66b0,	// (0x00061b4b) grid_vitu2_function_pane_ParamLimits

0x66b0,	// (0x00061b4b) grid_vitu2_function_pane

0x66f4,	// (0x00061b8f) grid_vitu2_itu_pane_ParamLimits

0x66f4,	// (0x00061b8f) grid_vitu2_itu_pane

0x676c,	// (0x00061c07) cell_vitu2_itu_pane_ParamLimits

0x676c,	// (0x00061c07) cell_vitu2_itu_pane

0x6781,	// (0x00061c1c) cell_vitu2_function_pane_ParamLimits

0x6781,	// (0x00061c1c) cell_vitu2_function_pane

0xdc70,	// (0x0006910b) bg_popup_call_pane_cp08_ParamLimits

0xdc70,	// (0x0006910b) bg_popup_call_pane_cp08

0xdc89,	// (0x00069124) field_vitu2_entry_pane_g1

0xdc95,	// (0x00069130) field_vitu2_entry_pane_g2

0x0002,

0x0839,	// (0x0005bcd4) field_vitu2_entry_pane_g

0x67c0,	// (0x00061c5b) field_vitu2_entry_pane_t1_ParamLimits

0x67c0,	// (0x00061c5b) field_vitu2_entry_pane_t1

0x9d55,	// (0x000651f0) field_vitu2_entry_pane_t2_ParamLimits

0x9d55,	// (0x000651f0) field_vitu2_entry_pane_t2

0x0001,

0xf749,	// (0x0006abe4) field_vitu2_entry_pane_t_ParamLimits

0xf749,	// (0x0006abe4) field_vitu2_entry_pane_t

0x67f2,	// (0x00061c8d) bg_button_pane_cp010_ParamLimits

0x67f2,	// (0x00061c8d) bg_button_pane_cp010

0x6800,	// (0x00061c9b) cell_vitu2_itu_pane_g1

0x6829,	// (0x00061cc4) cell_vitu2_itu_pane_t1_ParamLimits

0x6829,	// (0x00061cc4) cell_vitu2_itu_pane_t1

0x0e69,	// (0x0005c304) cell_vitu2_itu_pane_t2_ParamLimits

0x0e69,	// (0x0005c304) cell_vitu2_itu_pane_t2

0x0002,

0xf753,	// (0x0006abee) cell_vitu2_itu_pane_t_ParamLimits

0xf753,	// (0x0006abee) cell_vitu2_itu_pane_t

0x4509,	// (0x0005f9a4) bg_button_pane_cp011

0x6875,	// (0x00061d10) cell_vitu2_function_pane_g1

0x120f,	// (0x0005c6aa) main_myfav_hc_pane

0x6298,	// (0x00061733) popup_image3_note_pane_ParamLimits

0x6298,	// (0x00061733) popup_image3_note_pane

0x62a6,	// (0x00061741) popup_image3_tool_bar_pane_ParamLimits

0x62a6,	// (0x00061741) popup_image3_tool_bar_pane

0x0edf,	// (0x0005c37a) cell_vitu2_itu_pane_t3_ParamLimits

0x0edf,	// (0x0005c37a) cell_vitu2_itu_pane_t3

0x9cc5,	// (0x00065160) bg_popup_trans_pane

0xdcb7,	// (0x00069152) grid_image3_tool_bar_pane

0xdcc1,	// (0x0006915c) bg_popup_trans_pane_g1

0xb237,	// (0x000666d2) bg_popup_trans_pane_g2

0xdcc9,	// (0x00069164) bg_popup_trans_pane_g3

0xdcd1,	// (0x0006916c) bg_popup_trans_pane_g4

0xdcd9,	// (0x00069174) bg_popup_trans_pane_g5

0xdce1,	// (0x0006917c) bg_popup_trans_pane_g6

0xdce9,	// (0x00069184) bg_popup_trans_pane_g7

0xdcf1,	// (0x0006918c) bg_popup_trans_pane_g8

0xb217,	// (0x000666b2) bg_popup_trans_pane_g9

0x0008,

0xf75a,	// (0x0006abf5) bg_popup_trans_pane_g

0xdcf9,	// (0x00069194) cell_image3_tool_bar_pane_ParamLimits

0xdcf9,	// (0x00069194) cell_image3_tool_bar_pane

0xd255,	// (0x000686f0) cell_image3_tool_bar_pane_g1

0x9cc5,	// (0x00065160) bg_popup_trans_pane_cp1

0xdd0d,	// (0x000691a8) popup_image3_note_pane_t1

0xdd1b,	// (0x000691b6) popup_image3_note_pane_t2

0xdd29,	// (0x000691c4) popup_image3_note_pane_t3

0x0002,

0x0864,	// (0x0005bcff) popup_image3_note_pane_t

0xdd37,	// (0x000691d2) popup_image3_note_pane_t3_copy1

0x6889,	// (0x00061d24) bg_myfav_hc_instruction_pane_ParamLimits

0x6889,	// (0x00061d24) bg_myfav_hc_instruction_pane

0x68a1,	// (0x00061d3c) cell_myfav_contact_pane_ParamLimits

0x68a1,	// (0x00061d3c) cell_myfav_contact_pane

0x68bb,	// (0x00061d56) cell_myfav_contact_pane_cp1_ParamLimits

0x68bb,	// (0x00061d56) cell_myfav_contact_pane_cp1

0x68d3,	// (0x00061d6e) cell_myfav_contact_pane_cp2_ParamLimits

0x68d3,	// (0x00061d6e) cell_myfav_contact_pane_cp2

0x68eb,	// (0x00061d86) cell_myfav_contact_pane_cp3_ParamLimits

0x68eb,	// (0x00061d86) cell_myfav_contact_pane_cp3

0x6902,	// (0x00061d9d) cell_myfav_contact_pane_cp4_ParamLimits

0x6902,	// (0x00061d9d) cell_myfav_contact_pane_cp4

0x6918,	// (0x00061db3) cell_myfav_contact_pane_cp5_ParamLimits

0x6918,	// (0x00061db3) cell_myfav_contact_pane_cp5

0x692c,	// (0x00061dc7) cell_myfav_contact_pane_cp6_ParamLimits

0x692c,	// (0x00061dc7) cell_myfav_contact_pane_cp6

0x6940,	// (0x00061ddb) cell_myfav_contact_pane_cp7_ParamLimits

0x6940,	// (0x00061ddb) cell_myfav_contact_pane_cp7

0xdd45,	// (0x000691e0) listscroll_gen_pane_cp05

0x6958,	// (0x00061df3) main_myfav_hc_pane_g1_ParamLimits

0x6958,	// (0x00061df3) main_myfav_hc_pane_g1

0x696e,	// (0x00061e09) main_myfav_hc_pane_g2_ParamLimits

0x696e,	// (0x00061e09) main_myfav_hc_pane_g2

0x0002,

0xf76d,	// (0x0006ac08) main_myfav_hc_pane_g_ParamLimits

0xf76d,	// (0x0006ac08) main_myfav_hc_pane_g

0x699c,	// (0x00061e37) main_myfav_hc_pane_t1_ParamLimits

0x699c,	// (0x00061e37) main_myfav_hc_pane_t1

0xdd4e,	// (0x000691e9) main_myfav_hc_pane_t2_ParamLimits

0xdd4e,	// (0x000691e9) main_myfav_hc_pane_t2

0xdd60,	// (0x000691fb) main_myfav_hc_pane_t3_ParamLimits

0xdd60,	// (0x000691fb) main_myfav_hc_pane_t3

0x69b3,	// (0x00061e4e) main_myfav_hc_pane_t4_ParamLimits

0x69b3,	// (0x00061e4e) main_myfav_hc_pane_t4

0x0004,

0xf774,	// (0x0006ac0f) main_myfav_hc_pane_t_ParamLimits

0xf774,	// (0x0006ac0f) main_myfav_hc_pane_t

0xd255,	// (0x000686f0) bg_myfav_hc_instruction_pane_g1

0xdd72,	// (0x0006920d) cell_myfav_contact_pane_g1_ParamLimits

0xdd72,	// (0x0006920d) cell_myfav_contact_pane_g1

0xdd72,	// (0x0006920d) cell_myfav_contact_pane_g2_ParamLimits

0xdd72,	// (0x0006920d) cell_myfav_contact_pane_g2

0xdd7e,	// (0x00069219) cell_myfav_contact_pane_g3_ParamLimits

0xdd7e,	// (0x00069219) cell_myfav_contact_pane_g3

0xd546,	// (0x000689e1) cell_myfav_contact_pane_g4_ParamLimits

0xd546,	// (0x000689e1) cell_myfav_contact_pane_g4

0xdd8b,	// (0x00069226) cell_myfav_contact_pane_g5_ParamLimits

0xdd8b,	// (0x00069226) cell_myfav_contact_pane_g5

0x0004,

0x087d,	// (0x0005bd18) cell_myfav_contact_pane_g_ParamLimits

0x087d,	// (0x0005bd18) cell_myfav_contact_pane_g

0x6984,	// (0x00061e1f) main_myfav_hc_pane_g3_ParamLimits

0x6984,	// (0x00061e1f) main_myfav_hc_pane_g3

0x10fe,	// (0x0005c599) popup_adpt_find_window

0x69dd,	// (0x00061e78) afind_page_pane_ParamLimits

0x69dd,	// (0x00061e78) afind_page_pane

0x69ea,	// (0x00061e85) aid_size_cell_afind_ParamLimits

0x69ea,	// (0x00061e85) aid_size_cell_afind

0x6a04,	// (0x00061e9f) bg_popup_sub_pane_cp09_ParamLimits

0x6a04,	// (0x00061e9f) bg_popup_sub_pane_cp09

0x6a11,	// (0x00061eac) find_pane_cp01_ParamLimits

0x6a11,	// (0x00061eac) find_pane_cp01

0xdd97,	// (0x00069232) grid_afind_control_pane_ParamLimits

0xdd97,	// (0x00069232) grid_afind_control_pane

0x6a1e,	// (0x00061eb9) grid_afind_pane_ParamLimits

0x6a1e,	// (0x00061eb9) grid_afind_pane

0x6a3a,	// (0x00061ed5) cell_afind_pane_ParamLimits

0x6a3a,	// (0x00061ed5) cell_afind_pane

0xd255,	// (0x000686f0) afind_page_pane_g1

0x6a82,	// (0x00061f1d) afind_page_pane_g2

0x6a8b,	// (0x00061f26) afind_page_pane_g3

0x0002,

0xf77f,	// (0x0006ac1a) afind_page_pane_g

0x6a94,	// (0x00061f2f) afind_page_pane_t1

0xddab,	// (0x00069246) cell_afind_grid_control_pane_ParamLimits

0xddab,	// (0x00069246) cell_afind_grid_control_pane

0xdb81,	// (0x0006901c) bg_button_pane_cp69_ParamLimits

0xdb81,	// (0x0006901c) bg_button_pane_cp69

0x6ab4,	// (0x00061f4f) cell_afind_pane_g1_ParamLimits

0x6ab4,	// (0x00061f4f) cell_afind_pane_g1

0x6ac1,	// (0x00061f5c) cell_afind_pane_t1_ParamLimits

0x6ac1,	// (0x00061f5c) cell_afind_pane_t1

0xb030,	// (0x000664cb) bg_button_pane_cp72

0xddba,	// (0x00069255) cell_afind_grid_control_pane_g1

0x4087,	// (0x0005f522) aid_image_placing_area_ParamLimits

0x4087,	// (0x0005f522) aid_image_placing_area

0xd84f,	// (0x00068cea) field_vitu_entry_pane_g1_ParamLimits

0xd84f,	// (0x00068cea) field_vitu_entry_pane_g1

0xd85b,	// (0x00068cf6) field_vitu_entry_pane_g2_ParamLimits

0xd85b,	// (0x00068cf6) field_vitu_entry_pane_g2

0x0001,

0x0739,	// (0x0005bbd4) field_vitu_entry_pane_g_ParamLimits

0x0739,	// (0x0005bbd4) field_vitu_entry_pane_g

0x5be7,	// (0x00061082) cell_vitu_itu_pane_g1_ParamLimits

0x5c29,	// (0x000610c4) cell_vitu_itu_pane_t3_ParamLimits

0x5c29,	// (0x000610c4) cell_vitu_itu_pane_t3

0xdb31,	// (0x00068fcc) mp4_progress_pane_t1_ParamLimits

0xdb4a,	// (0x00068fe5) mp4_progress_pane_t2_ParamLimits

0x07ce,	// (0x0005bc69) mp4_progress_pane_t_ParamLimits

0xdb63,	// (0x00068ffe) mup_progress_pane_cp04_ParamLimits

0x69c7,	// (0x00061e62) main_myfav_hc_pane_t5_ParamLimits

0x69c7,	// (0x00061e62) main_myfav_hc_pane_t5

0x0f8c,	// (0x0005c427) aid_zoom_text_primary

0x10fe,	// (0x0005c599) popup_adpt_find_window_ParamLimits

0x4509,	// (0x0005f9a4) main_cam_set_pane

0x6402,	// (0x0006189d) cam4_zoom_pane_ParamLimits

0x6402,	// (0x0006189d) cam4_zoom_pane

0x6ad3,	// (0x00061f6e) main_cam_set_pane_g1_ParamLimits

0x6ad3,	// (0x00061f6e) main_cam_set_pane_g1

0x6ae1,	// (0x00061f7c) main_cam_set_pane_g2_ParamLimits

0x6ae1,	// (0x00061f7c) main_cam_set_pane_g2

0x0001,

0xf786,	// (0x0006ac21) main_cam_set_pane_g_ParamLimits

0xf786,	// (0x0006ac21) main_cam_set_pane_g

0x6aed,	// (0x00061f88) main_cam_set_pane_t1_ParamLimits

0x6aed,	// (0x00061f88) main_cam_set_pane_t1

0x6b09,	// (0x00061fa4) main_cset_listscroll_pane_ParamLimits

0x6b09,	// (0x00061fa4) main_cset_listscroll_pane

0x6b34,	// (0x00061fcf) main_cset_slider_pane_ParamLimits

0x6b34,	// (0x00061fcf) main_cset_slider_pane

0xddcb,	// (0x00069266) main_cset_list_pane_ParamLimits

0xddcb,	// (0x00069266) main_cset_list_pane

0xdddb,	// (0x00069276) scroll_pane_cp028

0x6b53,	// (0x00061fee) aid_area_touch_slider

0x6b6f,	// (0x0006200a) cset_slider_pane

0x6b99,	// (0x00062034) main_cset_slider_pane_g1

0x6bae,	// (0x00062049) main_cset_slider_pane_g2

0x0011,

0xf78b,	// (0x0006ac26) main_cset_slider_pane_g

0xde14,	// (0x000692af) main_cset_slider_pane_t1

0x6c70,	// (0x0006210b) main_cset_slider_pane_t2

0x6c8a,	// (0x00062125) main_cset_slider_pane_t3

0x6ca4,	// (0x0006213f) main_cset_slider_pane_t4

0x6cbe,	// (0x00062159) main_cset_slider_pane_t5

0x6cdc,	// (0x00062177) main_cset_slider_pane_t6

0x6cf3,	// (0x0006218e) main_cset_slider_pane_t7

0x000e,

0xf7b0,	// (0x0006ac4b) main_cset_slider_pane_t

0x6dff,	// (0x0006229a) cset_list_set_pane_ParamLimits

0x6dff,	// (0x0006229a) cset_list_set_pane

0x6e15,	// (0x000622b0) aid_position_infowindow_above

0x6e1d,	// (0x000622b8) aid_position_infowindow_below

0x9d72,	// (0x0006520d) cset_list_set_pane_g1_ParamLimits

0x9d72,	// (0x0006520d) cset_list_set_pane_g1

0x9d7e,	// (0x00065219) cset_list_set_pane_g3_ParamLimits

0x9d7e,	// (0x00065219) cset_list_set_pane_g3

0x0001,

0xf7cf,	// (0x0006ac6a) cset_list_set_pane_g_ParamLimits

0xf7cf,	// (0x0006ac6a) cset_list_set_pane_g

0x9d8d,	// (0x00065228) cset_list_set_pane_t1_ParamLimits

0x9d8d,	// (0x00065228) cset_list_set_pane_t1

0xa97d,	// (0x00065e18) list_highlight_pane_cp021_ParamLimits

0xa97d,	// (0x00065e18) list_highlight_pane_cp021

0xbb88,	// (0x00067023) cset_slider_pane_g1

0xbb9a,	// (0x00067035) cset_slider_pane_g2

0xbb91,	// (0x0006702c) cset_slider_pane_g3

0x0002,

0x08dd,	// (0x0005bd78) cset_slider_pane_g

0x6e25,	// (0x000622c0) aid_area_touch_cam4_zoom

0x6e2d,	// (0x000622c8) cam4_zoom_cont_pane

0x6e35,	// (0x000622d0) cam4_zoom_pane_g1

0x6e3d,	// (0x000622d8) cam4_zoom_pane_g2

0x6e45,	// (0x000622e0) cam4_zoom_pane_g3

0x0002,

0xf7d4,	// (0x0006ac6f) cam4_zoom_pane_g

0x6e4d,	// (0x000622e8) cam4_zoom_cont_pane_g1

0x6e56,	// (0x000622f1) cam4_zoom_cont_pane_g2

0x6e5f,	// (0x000622fa) cam4_zoom_cont_pane_g3

0x0002,

0xf7db,	// (0x0006ac76) cam4_zoom_cont_pane_g

0x62ef,	// (0x0006178a) call4_image_pane_ParamLimits

0x62ef,	// (0x0006178a) call4_image_pane

0xdb8d,	// (0x00069028) call4_windows_conf_pane_ParamLimits

0xdbce,	// (0x00069069) popup_call4_audio_in_window_ParamLimits

0xdbce,	// (0x00069069) popup_call4_audio_in_window

0x9cc5,	// (0x00065160) bg_popup_call2_act_pane_cp02

0xdc44,	// (0x000690df) call4_list_conf_pane

0xd255,	// (0x000686f0) call4_image_pane_g1

0xd255,	// (0x000686f0) call4_image_pane_g2

0x0001,

0x05ff,	// (0x0005ba9a) call4_image_pane_g

0xdecf,	// (0x0006936a) list_single_graphic_popup_conf4_pane_ParamLimits

0xdecf,	// (0x0006936a) list_single_graphic_popup_conf4_pane

0x9cc5,	// (0x00065160) list_highlight_pane_cp022

0xdee2,	// (0x0006937d) list_single_graphic_popup_conf4_pane_g1

0xb751,	// (0x00066bec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x08f2,	// (0x0005bd8d) list_single_graphic_popup_conf4_pane_g

0xdeea,	// (0x00069385) list_single_graphic_popup_conf4_pane_t1

0x22be,	// (0x0005d759) popup_vtel_slider_window_ParamLimits

0x22be,	// (0x0005d759) popup_vtel_slider_window

0xdb6f,	// (0x0006900a) dialer2_ne_pane_t2_ParamLimits

0xdb6f,	// (0x0006900a) dialer2_ne_pane_t2

0x0001,

0xf6e3,	// (0x0006ab7e) dialer2_ne_pane_t_ParamLimits

0xf6e3,	// (0x0006ab7e) dialer2_ne_pane_t

0xa97d,	// (0x00065e18) bg_popup_sub_pane_cp010_ParamLimits

0xa97d,	// (0x00065e18) bg_popup_sub_pane_cp010

0x6e68,	// (0x00062303) popup_vtel_slider_window_g1_ParamLimits

0x6e68,	// (0x00062303) popup_vtel_slider_window_g1

0x6e74,	// (0x0006230f) popup_vtel_slider_window_g2_ParamLimits

0x6e74,	// (0x0006230f) popup_vtel_slider_window_g2

0x0003,

0xf7e2,	// (0x0006ac7d) popup_vtel_slider_window_g_ParamLimits

0xf7e2,	// (0x0006ac7d) popup_vtel_slider_window_g

0x6ebc,	// (0x00062357) vtel_slider_pane_ParamLimits

0x6ebc,	// (0x00062357) vtel_slider_pane

0x6ecb,	// (0x00062366) vtel_slider_pane_g1_ParamLimits

0x6ecb,	// (0x00062366) vtel_slider_pane_g1

0x6ed8,	// (0x00062373) vtel_slider_pane_g2_ParamLimits

0x6ed8,	// (0x00062373) vtel_slider_pane_g2

0x6ee5,	// (0x00062380) vtel_slider_pane_g3_ParamLimits

0x6ee5,	// (0x00062380) vtel_slider_pane_g3

0x6ecb,	// (0x00062366) vtel_slider_pane_g4_ParamLimits

0x6ecb,	// (0x00062366) vtel_slider_pane_g4

0x6ef2,	// (0x0006238d) vtel_slider_pane_g5_ParamLimits

0x6ef2,	// (0x0006238d) vtel_slider_pane_g5

0x0004,

0xf7eb,	// (0x0006ac86) vtel_slider_pane_g_ParamLimits

0xf7eb,	// (0x0006ac86) vtel_slider_pane_g

0x4509,	// (0x0005f9a4) main_gallery2_pane

0x6664,	// (0x00061aff) aid_size_row_itut2_dropdow_list_ParamLimits

0x6664,	// (0x00061aff) aid_size_row_itut2_dropdow_list

0x66d2,	// (0x00061b6d) grid_vitu2_function_top_pane_ParamLimits

0x66d2,	// (0x00061b6d) grid_vitu2_function_top_pane

0x6728,	// (0x00061bc3) popup_vitu2_dropdown_list_window_ParamLimits

0x6728,	// (0x00061bc3) popup_vitu2_dropdown_list_window

0x6748,	// (0x00061be3) popup_vitu2_match_list_window

0x6f0d,	// (0x000623a8) cell_vitu2_function_top_pane_ParamLimits

0x6f0d,	// (0x000623a8) cell_vitu2_function_top_pane

0x6f2d,	// (0x000623c8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f2d,	// (0x000623c8) cell_vitu2_function_top_pane_cp01

0x6f4b,	// (0x000623e6) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f4b,	// (0x000623e6) cell_vitu2_function_top_wide_pane

0x4509,	// (0x0005f9a4) bg_button_pane_cp012

0x6f69,	// (0x00062404) cell_vitu2_function_top_pane_g1

0x6f7d,	// (0x00062418) bg_button_pane_cp013_ParamLimits

0x6f7d,	// (0x00062418) bg_button_pane_cp013

0x6f99,	// (0x00062434) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f99,	// (0x00062434) cell_vitu2_function_top_wide_pane_g1

0x11f5,	// (0x0005c690) bg_popup_sub_pane_cp20

0x6fb1,	// (0x0006244c) list_vitu2_match_list_pane

0xdcc1,	// (0x0006915c) bg_popup_sub_pane_cp20_g1

0xdcc9,	// (0x00069164) bg_popup_sub_pane_cp20_g2

0xb237,	// (0x000666d2) bg_popup_sub_pane_cp20_g3

0xdcd1,	// (0x0006916c) bg_popup_sub_pane_cp20_g4

0xb217,	// (0x000666b2) bg_popup_sub_pane_cp20_g5

0xdf00,	// (0x0006939b) bg_popup_sub_pane_cp20_g6

0xdce1,	// (0x0006917c) bg_popup_sub_pane_cp20_g7

0xdce9,	// (0x00069184) bg_popup_sub_pane_cp20_g8

0xdcf1,	// (0x0006918c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f6,	// (0x0006ac91) bg_popup_sub_pane_cp20_g

0x6fc9,	// (0x00062464) list_vitu2_match_list_item_pane_ParamLimits

0x6fc9,	// (0x00062464) list_vitu2_match_list_item_pane

0x6fdb,	// (0x00062476) list_vitu2_match_list_item_pane_t1

0x120f,	// (0x0005c6aa) bg_popup_sub_pane_cp21

0x702d,	// (0x000624c8) grid_vitu2_dropdown_list_pane

0x7035,	// (0x000624d0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7035,	// (0x000624d0) cell_vitu2_dropdown_list_char_pane

0x7056,	// (0x000624f1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7056,	// (0x000624f1) cell_vitu2_dropdown_list_ctrl_pane

0xdf1a,	// (0x000693b5) cell_vitu2_dropdown_list_char_pane_g1

0xdf08,	// (0x000693a3) cell_vitu2_dropdown_list_char_pane_g2

0xdf11,	// (0x000693ac) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf813,	// (0x0006acae) cell_vitu2_dropdown_list_char_pane_g

0x7082,	// (0x0006251d) cell_vitu2_dropdown_list_char_pane_t1

0x7090,	// (0x0006252b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7090,	// (0x0006252b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x709d,	// (0x00062538) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x709d,	// (0x00062538) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70aa,	// (0x00062545) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70aa,	// (0x00062545) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70b7,	// (0x00062552) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70b7,	// (0x00062552) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6496,	// (0x00061931) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6496,	// (0x00061931) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf81a,	// (0x0006acb5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf81a,	// (0x0006acb5) cell_vitu2_dropdown_list_ctrl_pane_g

0x70d3,	// (0x0006256e) aid_size_cell_gallery2_ParamLimits

0x70d3,	// (0x0006256e) aid_size_cell_gallery2

0x70ed,	// (0x00062588) grid_gallery2_pane_ParamLimits

0x70ed,	// (0x00062588) grid_gallery2_pane

0x5a70,	// (0x00060f0b) scroll_pane_cp029_ParamLimits

0x5a70,	// (0x00060f0b) scroll_pane_cp029

0x7104,	// (0x0006259f) cell_gallery2_pane_ParamLimits

0x7104,	// (0x0006259f) cell_gallery2_pane

0xdf23,	// (0x000693be) cell_gallery2_pane_g2

0xf005,	// (0x0006a4a0) cell_gallery2_pane_g3

0xdf2b,	// (0x000693c6) cell_gallery2_pane_g4

0xdf33,	// (0x000693ce) cell_gallery2_pane_g5

0xba44,	// (0x00066edf) grid_highlight_pane_cp10

0x6748,	// (0x00061be3) popup_vitu2_match_list_window_ParamLimits

0x675c,	// (0x00061bf7) popup_vitu2_query_window_ParamLimits

0x675c,	// (0x00061bf7) popup_vitu2_query_window

0x120f,	// (0x0005c6aa) bg_vitu2_candi_button_pane

0xdf1a,	// (0x000693b5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdf08,	// (0x000693a3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdf11,	// (0x000693ac) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7155,	// (0x000625f0) bg_button_pane_cp015

0x7167,	// (0x00062602) bg_button_pane_cp016

0x717a,	// (0x00062615) bg_button_pane_cp017

0xce41,	// (0x000682dc) bg_popup_sub_pane_cp22

0xdf3b,	// (0x000693d6) popup_vitu2_query_window_g1

0x71bf,	// (0x0006265a) popup_vitu2_query_window_g2

0x0002,

0xf825,	// (0x0006acc0) popup_vitu2_query_window_g

0x71dc,	// (0x00062677) popup_vitu2_query_window_t1_ParamLimits

0x71dc,	// (0x00062677) popup_vitu2_query_window_t1

0x720f,	// (0x000626aa) popup_vitu2_query_window_t2_ParamLimits

0x720f,	// (0x000626aa) popup_vitu2_query_window_t2

0x7221,	// (0x000626bc) popup_vitu2_query_window_t3_ParamLimits

0x7221,	// (0x000626bc) popup_vitu2_query_window_t3

0x7249,	// (0x000626e4) popup_vitu2_query_window_t4_ParamLimits

0x7249,	// (0x000626e4) popup_vitu2_query_window_t4

0x726a,	// (0x00062705) popup_vitu2_query_window_t5_ParamLimits

0x726a,	// (0x00062705) popup_vitu2_query_window_t5

0x0006,

0xf82c,	// (0x0006acc7) popup_vitu2_query_window_t_ParamLimits

0xf82c,	// (0x0006acc7) popup_vitu2_query_window_t

0xddc3,	// (0x0006925e) main_cset_text_pane

0x6b53,	// (0x00061fee) aid_area_touch_slider_ParamLimits

0x6b6f,	// (0x0006200a) cset_slider_pane_ParamLimits

0x6b99,	// (0x00062034) main_cset_slider_pane_g1_ParamLimits

0x6bae,	// (0x00062049) main_cset_slider_pane_g2_ParamLimits

0xdde4,	// (0x0006927f) main_cset_slider_pane_g3_ParamLimits

0xdde4,	// (0x0006927f) main_cset_slider_pane_g3

0x6bc3,	// (0x0006205e) main_cset_slider_pane_g4_ParamLimits

0x6bc3,	// (0x0006205e) main_cset_slider_pane_g4

0x6bd2,	// (0x0006206d) main_cset_slider_pane_g5_ParamLimits

0x6bd2,	// (0x0006206d) main_cset_slider_pane_g5

0x6be0,	// (0x0006207b) main_cset_slider_pane_g6_ParamLimits

0x6be0,	// (0x0006207b) main_cset_slider_pane_g6

0xf78b,	// (0x0006ac26) main_cset_slider_pane_g_ParamLimits

0xde14,	// (0x000692af) main_cset_slider_pane_t1_ParamLimits

0x6c70,	// (0x0006210b) main_cset_slider_pane_t2_ParamLimits

0x6c8a,	// (0x00062125) main_cset_slider_pane_t3_ParamLimits

0x6ca4,	// (0x0006213f) main_cset_slider_pane_t4_ParamLimits

0x6cbe,	// (0x00062159) main_cset_slider_pane_t5_ParamLimits

0x6cdc,	// (0x00062177) main_cset_slider_pane_t6_ParamLimits

0x6cf3,	// (0x0006218e) main_cset_slider_pane_t7_ParamLimits

0x6d21,	// (0x000621bc) main_cset_slider_pane_t8_ParamLimits

0x6d21,	// (0x000621bc) main_cset_slider_pane_t8

0x6d49,	// (0x000621e4) main_cset_slider_pane_t9_ParamLimits

0x6d49,	// (0x000621e4) main_cset_slider_pane_t9

0x6d71,	// (0x0006220c) main_cset_slider_pane_t10_ParamLimits

0x6d71,	// (0x0006220c) main_cset_slider_pane_t10

0x6d99,	// (0x00062234) main_cset_slider_pane_t11_ParamLimits

0x6d99,	// (0x00062234) main_cset_slider_pane_t11

0x6dc3,	// (0x0006225e) main_cset_slider_pane_t12_ParamLimits

0x6dc3,	// (0x0006225e) main_cset_slider_pane_t12

0x6de0,	// (0x0006227b) main_cset_slider_pane_t13_ParamLimits

0x6de0,	// (0x0006227b) main_cset_slider_pane_t13

0xf7b0,	// (0x0006ac4b) main_cset_slider_pane_t_ParamLimits

0x9cc5,	// (0x00065160) bg_popup_sub_pane_cp011

0xdf47,	// (0x000693e2) main_cset_text_pane_g1

0xdf4f,	// (0x000693ea) main_cset_text_pane_t1

0xdf5d,	// (0x000693f8) main_cset_text_pane_t2

0xdf6b,	// (0x00069406) main_cset_text_pane_t3

0xdf79,	// (0x00069414) main_cset_text_pane_t4

0xdf87,	// (0x00069422) main_cset_text_pane_t5

0xdf95,	// (0x00069430) main_cset_text_pane_t6

0xdfa3,	// (0x0006943e) main_cset_text_pane_t7

0x0006,

0x0950,	// (0x0005bdeb) main_cset_text_pane_t

0x120f,	// (0x0005c6aa) main_cam4_burst_pane

0x120f,	// (0x0005c6aa) main_cam5_pane

0x6aa2,	// (0x00061f3d) bg_button_pane_cp019

0x6aab,	// (0x00061f46) bg_button_pane_cp020

0xddf0,	// (0x0006928b) main_cset_slider_pane_g7_ParamLimits

0xddf0,	// (0x0006928b) main_cset_slider_pane_g7

0xddfc,	// (0x00069297) main_cset_slider_pane_g8_ParamLimits

0xddfc,	// (0x00069297) main_cset_slider_pane_g8

0x6bf4,	// (0x0006208f) main_cset_slider_pane_g9_ParamLimits

0x6bf4,	// (0x0006208f) main_cset_slider_pane_g9

0x6c00,	// (0x0006209b) main_cset_slider_pane_g10_ParamLimits

0x6c00,	// (0x0006209b) main_cset_slider_pane_g10

0x6c0c,	// (0x000620a7) main_cset_slider_pane_g11_ParamLimits

0x6c0c,	// (0x000620a7) main_cset_slider_pane_g11

0x6c18,	// (0x000620b3) main_cset_slider_pane_g12_ParamLimits

0x6c18,	// (0x000620b3) main_cset_slider_pane_g12

0x6c24,	// (0x000620bf) main_cset_slider_pane_g13_ParamLimits

0x6c24,	// (0x000620bf) main_cset_slider_pane_g13

0x6c30,	// (0x000620cb) main_cset_slider_pane_g14_ParamLimits

0x6c30,	// (0x000620cb) main_cset_slider_pane_g14

0x6c3c,	// (0x000620d7) main_cset_slider_pane_g15_ParamLimits

0x6c3c,	// (0x000620d7) main_cset_slider_pane_g15

0xde42,	// (0x000692dd) main_cset_slider_pane_t14_ParamLimits

0xde42,	// (0x000692dd) main_cset_slider_pane_t14

0xde7b,	// (0x00069316) main_cset_slider_pane_t15_ParamLimits

0xde7b,	// (0x00069316) main_cset_slider_pane_t15

0x72e1,	// (0x0006277c) aid_cam4_burst_size_cell_ParamLimits

0x72e1,	// (0x0006277c) aid_cam4_burst_size_cell

0x72fd,	// (0x00062798) grid_cam4_burst_pane_ParamLimits

0x72fd,	// (0x00062798) grid_cam4_burst_pane

0x732d,	// (0x000627c8) linegrid_cam4_burst_pane_ParamLimits

0x732d,	// (0x000627c8) linegrid_cam4_burst_pane

0x734d,	// (0x000627e8) scroll_pane_cp30_ParamLimits

0x734d,	// (0x000627e8) scroll_pane_cp30

0x7359,	// (0x000627f4) cell_cam4_burst_pane_ParamLimits

0x7359,	// (0x000627f4) cell_cam4_burst_pane

0xdfbd,	// (0x00069458) linegrid_cam4_burst_pane_g1_ParamLimits

0xdfbd,	// (0x00069458) linegrid_cam4_burst_pane_g1

0x7395,	// (0x00062830) linegrid_cam4_burst_pane_g2_ParamLimits

0x7395,	// (0x00062830) linegrid_cam4_burst_pane_g2

0xdfca,	// (0x00069465) linegrid_cam4_burst_pane_g3_ParamLimits

0xdfca,	// (0x00069465) linegrid_cam4_burst_pane_g3

0x0002,

0xf83b,	// (0x0006acd6) linegrid_cam4_burst_pane_g_ParamLimits

0xf83b,	// (0x0006acd6) linegrid_cam4_burst_pane_g

0x73a6,	// (0x00062841) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73a6,	// (0x00062841) linegrid_cam4_burst_pane_g3_copy1

0xdfd7,	// (0x00069472) linegrid_cam4_burst_pane_g4_ParamLimits

0xdfd7,	// (0x00069472) linegrid_cam4_burst_pane_g4

0x73c0,	// (0x0006285b) linegrid_cam4_burst_pane_g5_ParamLimits

0x73c0,	// (0x0006285b) linegrid_cam4_burst_pane_g5

0x73d1,	// (0x0006286c) linegrid_cam4_burst_pane_g6_ParamLimits

0x73d1,	// (0x0006286c) linegrid_cam4_burst_pane_g6

0xdfe4,	// (0x0006947f) linegrid_cam4_burst_pane_g7_ParamLimits

0xdfe4,	// (0x0006947f) linegrid_cam4_burst_pane_g7

0x73e2,	// (0x0006287d) cell_cam4_burst_pane_g1

0xdffd,	// (0x00069498) main_cam5_pane_t1_ParamLimits

0xdffd,	// (0x00069498) main_cam5_pane_t1

0xe00f,	// (0x000694aa) main_cam5_pane_t2_ParamLimits

0xe00f,	// (0x000694aa) main_cam5_pane_t2

0xe021,	// (0x000694bc) main_cam5_pane_t3_ParamLimits

0xe021,	// (0x000694bc) main_cam5_pane_t3

0xe033,	// (0x000694ce) main_cam5_pane_t4_ParamLimits

0xe033,	// (0x000694ce) main_cam5_pane_t4

0xe04b,	// (0x000694e6) main_cam5_pane_t5_ParamLimits

0xe04b,	// (0x000694e6) main_cam5_pane_t5

0xe05f,	// (0x000694fa) main_cam5_pane_t6_ParamLimits

0xe05f,	// (0x000694fa) main_cam5_pane_t6

0xe073,	// (0x0006950e) main_cam5_pane_t7_ParamLimits

0xe073,	// (0x0006950e) main_cam5_pane_t7

0xe085,	// (0x00069520) main_cam5_pane_t8_ParamLimits

0xe085,	// (0x00069520) main_cam5_pane_t8

0xe0a1,	// (0x0006953c) main_cam5_pane_t9_ParamLimits

0xe0a1,	// (0x0006953c) main_cam5_pane_t9

0xe0b3,	// (0x0006954e) main_cam5_pane_t10_ParamLimits

0xe0b3,	// (0x0006954e) main_cam5_pane_t10

0xe0c5,	// (0x00069560) main_cam5_pane_t11_ParamLimits

0xe0c5,	// (0x00069560) main_cam5_pane_t11

0xe0d7,	// (0x00069572) main_cam5_pane_t12_ParamLimits

0xe0d7,	// (0x00069572) main_cam5_pane_t12

0xe0ec,	// (0x00069587) main_cam5_pane_t13_ParamLimits

0xe0ec,	// (0x00069587) main_cam5_pane_t13

0x000c,

0x096b,	// (0x0005be06) main_cam5_pane_t_ParamLimits

0x096b,	// (0x0005be06) main_cam5_pane_t

0x11b4,	// (0x0005c64f) popup_scut_keymap_window_ParamLimits

0x11b4,	// (0x0005c64f) popup_scut_keymap_window

0x73f5,	// (0x00062890) aid_size_cell_brow_shortcut

0xba44,	// (0x00066edf) bg_popup_window_pane_cp010

0x7401,	// (0x0006289c) grid_scut_pane

0x740d,	// (0x000628a8) cell_scut_pane_ParamLimits

0x740d,	// (0x000628a8) cell_scut_pane

0x7424,	// (0x000628bf) cell_scut_pane_g1

0xe109,	// (0x000695a4) cell_scut_pane_t1

0xe118,	// (0x000695b3) cell_scut_pane_t2

0x742d,	// (0x000628c8) cell_scut_pane_t3

0x0002,

0xf847,	// (0x0006ace2) cell_scut_pane_t

0x5251,	// (0x000606ec) main_mup3_pane_g8_ParamLimits

0x5251,	// (0x000606ec) main_mup3_pane_g8

0x6672,	// (0x00061b0d) area_vitu2_query_pane_ParamLimits

0x6672,	// (0x00061b0d) area_vitu2_query_pane

0x718d,	// (0x00062628) input_focus_pane_cp08

0xe127,	// (0x000695c2) area_vitu2_query_pane_g1

0x743b,	// (0x000628d6) area_vitu2_query_pane_g2

0x0001,

0xf84e,	// (0x0006ace9) area_vitu2_query_pane_g

0x744c,	// (0x000628e7) area_vitu2_query_pane_t1_ParamLimits

0x744c,	// (0x000628e7) area_vitu2_query_pane_t1

0x7460,	// (0x000628fb) area_vitu2_query_pane_t2_ParamLimits

0x7460,	// (0x000628fb) area_vitu2_query_pane_t2

0x7474,	// (0x0006290f) area_vitu2_query_pane_t3_ParamLimits

0x7474,	// (0x0006290f) area_vitu2_query_pane_t3

0x9da2,	// (0x0006523d) area_vitu2_query_pane_t4_ParamLimits

0x9da2,	// (0x0006523d) area_vitu2_query_pane_t4

0x9dca,	// (0x00065265) area_vitu2_query_pane_t5_ParamLimits

0x9dca,	// (0x00065265) area_vitu2_query_pane_t5

0x9df2,	// (0x0006528d) area_vitu2_query_pane_t6_ParamLimits

0x9df2,	// (0x0006528d) area_vitu2_query_pane_t6

0x0006,

0xf853,	// (0x0006acee) area_vitu2_query_pane_t_ParamLimits

0xf853,	// (0x0006acee) area_vitu2_query_pane_t

0x749c,	// (0x00062937) bg_button_pane_cp018

0x74aa,	// (0x00062945) bg_button_pane_cp021

0x74b6,	// (0x00062951) bg_button_pane_cp022

0x74c7,	// (0x00062962) input_focus_pane_cp09

0xb88d,	// (0x00066d28) aid_size_touch_mv_arrow_left

0xb8b6,	// (0x00066d51) aid_size_touch_mv_arrow_right

0x6c54,	// (0x000620ef) main_cset_slider_pane_g16_ParamLimits

0x6c54,	// (0x000620ef) main_cset_slider_pane_g16

0x6c62,	// (0x000620fd) main_cset_slider_pane_g17_ParamLimits

0x6c62,	// (0x000620fd) main_cset_slider_pane_g17

0x73e2,	// (0x0006287d) cell_cam4_burst_pane_g1_ParamLimits

0x9cc5,	// (0x00065160) compa_mode_pane

0x6e80,	// (0x0006231b) popup_vtel_slider_window_g3_ParamLimits

0x6e80,	// (0x0006231b) popup_vtel_slider_window_g3

0x6e94,	// (0x0006232f) popup_vtel_slider_window_g4_ParamLimits

0x6e94,	// (0x0006232f) popup_vtel_slider_window_g4

0x6ea8,	// (0x00062343) popup_vtel_slider_window_t1_ParamLimits

0x6ea8,	// (0x00062343) popup_vtel_slider_window_t1

0x120f,	// (0x0005c6aa) main_cl_pane

0x45a7,	// (0x0005fa42) popup_imed_adjust2_window_ParamLimits

0xce41,	// (0x000682dc) bg_tb_trans_pane_cp05_ParamLimits

0xd784,	// (0x00068c1f) popup_imed_adjust2_window_g1_ParamLimits

0xd793,	// (0x00068c2e) popup_imed_adjust2_window_g2_ParamLimits

0xd793,	// (0x00068c2e) popup_imed_adjust2_window_g2

0xd79f,	// (0x00068c3a) popup_imed_adjust2_window_g3_ParamLimits

0xd79f,	// (0x00068c3a) popup_imed_adjust2_window_g3

0x0002,

0x06fd,	// (0x0005bb98) popup_imed_adjust2_window_g_ParamLimits

0x06fd,	// (0x0005bb98) popup_imed_adjust2_window_g

0xd7ab,	// (0x00068c46) popup_imed_adjust2_window_t1_ParamLimits

0xd7c3,	// (0x00068c5e) slider_imed_adjust_pane_ParamLimits

0xd7d7,	// (0x00068c72) slider_imed_adjust_pane_g1_ParamLimits

0xd7e7,	// (0x00068c82) slider_imed_adjust_pane_g2_ParamLimits

0xd7f7,	// (0x00068c92) slider_imed_adjust_pane_g3_ParamLimits

0xd808,	// (0x00068ca3) slider_imed_adjust_pane_g4_ParamLimits

0x0704,	// (0x0005bb9f) slider_imed_adjust_pane_g_ParamLimits

0x63ab,	// (0x00061846) aid_touch_area_cam4_ParamLimits

0x63ab,	// (0x00061846) aid_touch_area_cam4

0x63bb,	// (0x00061856) battery_pane_cp01

0x6442,	// (0x000618dd) main_camera4_pane_g6_ParamLimits

0x6442,	// (0x000618dd) main_camera4_pane_g6

0x6460,	// (0x000618fb) main_camera4_pane_t2_ParamLimits

0x6460,	// (0x000618fb) main_camera4_pane_t2

0x0001,

0xf717,	// (0x0006abb2) main_camera4_pane_t_ParamLimits

0xf717,	// (0x0006abb2) main_camera4_pane_t

0x64f5,	// (0x00061990) aid_touch_area_vid4_ParamLimits

0x64f5,	// (0x00061990) aid_touch_area_vid4

0x6535,	// (0x000619d0) main_video4_pane_g5_ParamLimits

0x6535,	// (0x000619d0) main_video4_pane_g5

0x6559,	// (0x000619f4) vid4_progress_pane_ParamLimits

0x6559,	// (0x000619f4) vid4_progress_pane

0xde08,	// (0x000692a3) main_cset_slider_pane_g18_ParamLimits

0xde08,	// (0x000692a3) main_cset_slider_pane_g18

0xdff1,	// (0x0006948c) cell_cam4_burst_pane_g2_ParamLimits

0xdff1,	// (0x0006948c) cell_cam4_burst_pane_g2

0x0001,

0xf842,	// (0x0006acdd) cell_cam4_burst_pane_g_ParamLimits

0xf842,	// (0x0006acdd) cell_cam4_burst_pane_g

0x74d8,	// (0x00062973) bg_cl_pane_ParamLimits

0x74d8,	// (0x00062973) bg_cl_pane

0x74e4,	// (0x0006297f) cl_header_pane_ParamLimits

0x74e4,	// (0x0006297f) cl_header_pane

0x74f0,	// (0x0006298b) cl_listscroll_pane_ParamLimits

0x74f0,	// (0x0006298b) cl_listscroll_pane

0xe133,	// (0x000695ce) bg_cl_pane_g1

0xe13b,	// (0x000695d6) bg_cl_pane_g2

0xe143,	// (0x000695de) bg_cl_pane_g3

0xe14b,	// (0x000695e6) bg_cl_pane_g4

0xe153,	// (0x000695ee) bg_cl_pane_g5

0xe15b,	// (0x000695f6) bg_cl_pane_g6

0xe163,	// (0x000695fe) bg_cl_pane_g7

0xe16b,	// (0x00069606) bg_cl_pane_g8

0xe173,	// (0x0006960e) bg_cl_pane_g9

0x0008,

0x09a1,	// (0x0005be3c) bg_cl_pane_g

0x74fc,	// (0x00062997) aid_height_cl_leading_ParamLimits

0x74fc,	// (0x00062997) aid_height_cl_leading

0x7508,	// (0x000629a3) aid_height_cl_text_ParamLimits

0x7508,	// (0x000629a3) aid_height_cl_text

0xe8c8,	// (0x00069d63) bg_cl_header_pane_ParamLimits

0xe8c8,	// (0x00069d63) bg_cl_header_pane

0x7520,	// (0x000629bb) cl_header_pane_g1_ParamLimits

0x7520,	// (0x000629bb) cl_header_pane_g1

0x752d,	// (0x000629c8) cl_header_pane_t1_ParamLimits

0x752d,	// (0x000629c8) cl_header_pane_t1

0xe17b,	// (0x00069616) cl_list_pane

0xdddb,	// (0x00069276) hc_scroll_pane_cp01

0xb217,	// (0x000666b2) bg_cl_header_pane_g1

0xdcc1,	// (0x0006915c) bg_cl_header_pane_g2

0xb237,	// (0x000666d2) bg_cl_header_pane_g3

0xdcd1,	// (0x0006916c) bg_cl_header_pane_g4

0xdcc9,	// (0x00069164) bg_cl_header_pane_g5

0xdf00,	// (0x0006939b) bg_cl_header_pane_g6

0xdce9,	// (0x00069184) bg_cl_header_pane_g7

0xdcf1,	// (0x0006918c) bg_cl_header_pane_g8

0xdce1,	// (0x0006917c) bg_cl_header_pane_g9

0x0008,

0xf862,	// (0x0006acfd) bg_cl_header_pane_g

0x753f,	// (0x000629da) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x753f,	// (0x000629da) hc_cl_list_double_graphic_heading_pane

0x7550,	// (0x000629eb) hc_cl_list_single_graphic_pane_ParamLimits

0x7550,	// (0x000629eb) hc_cl_list_single_graphic_pane

0x7569,	// (0x00062a04) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7569,	// (0x00062a04) hc_cl_list_single_graphic_pane_g1

0x7575,	// (0x00062a10) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7575,	// (0x00062a10) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf875,	// (0x0006ad10) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf875,	// (0x0006ad10) hc_cl_list_single_graphic_pane_g

0x7589,	// (0x00062a24) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7589,	// (0x00062a24) hc_cl_list_single_graphic_pane_t1

0x7569,	// (0x00062a04) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7569,	// (0x00062a04) hc_cl_list_double_graphic_heading_pane_g1

0x759e,	// (0x00062a39) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x759e,	// (0x00062a39) hc_cl_list_double_graphic_heading_pane_g2

0x75b2,	// (0x00062a4d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75b2,	// (0x00062a4d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf87a,	// (0x0006ad15) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf87a,	// (0x0006ad15) hc_cl_list_double_graphic_heading_pane_g

0x75c6,	// (0x00062a61) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75c6,	// (0x00062a61) hc_cl_list_double_graphic_heading_pane_t1

0x75db,	// (0x00062a76) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75db,	// (0x00062a76) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf881,	// (0x0006ad1c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf881,	// (0x0006ad1c) hc_cl_list_double_graphic_heading_pane_t

0x75f8,	// (0x00062a93) vid4_progress_pane_g1

0x760a,	// (0x00062aa5) vid4_progress_pane_g2

0xb4f8,	// (0x00066993) vid4_progress_pane_g3

0x761a,	// (0x00062ab5) vid4_progress_pane_g4

0x0004,

0xf886,	// (0x0006ad21) vid4_progress_pane_g

0x7638,	// (0x00062ad3) vid4_progress_pane_t1

0x764d,	// (0x00062ae8) vid4_progress_pane_t2

0x0002,

0xf891,	// (0x0006ad2c) vid4_progress_pane_t

0x7678,	// (0x00062b13) wait_bar_pane_cp07

0xd048,	// (0x000684e3) blid_firmament_pane_ParamLimits

0xd08b,	// (0x00068526) popup_blid_sat_info2_window_g1

0xd0af,	// (0x0006854a) popup_blid_sat_info2_window_t3

0xd0bd,	// (0x00068558) popup_blid_sat_info2_window_t4

0xd0cb,	// (0x00068566) popup_blid_sat_info2_window_t5

0xd0d9,	// (0x00068574) popup_blid_sat_info2_window_t6

0xd0e9,	// (0x00068584) popup_blid_sat_info2_window_t7

0xd0f7,	// (0x00068592) popup_blid_sat_info2_window_t8

0xd105,	// (0x000685a0) popup_blid_sat_info2_window_t9

0xd113,	// (0x000685ae) popup_blid_sat_info2_window_t10

0xd1d5,	// (0x00068670) aid_firma_cardinal_ParamLimits

0xd1e9,	// (0x00068684) blid_firmament_pane_t1_ParamLimits

0xd200,	// (0x0006869b) blid_firmament_pane_t2_ParamLimits

0xd217,	// (0x000686b2) blid_firmament_pane_t3_ParamLimits

0xd22e,	// (0x000686c9) blid_firmament_pane_t4_ParamLimits

0x05f6,	// (0x0005ba91) blid_firmament_pane_t_ParamLimits

0xd245,	// (0x000686e0) blid_sat_info_pane_ParamLimits

0x4509,	// (0x0005f9a4) main_cam_set_pane_ParamLimits

0x5a09,	// (0x00060ea4) aid_size_cell_colour_35_ParamLimits

0x5a23,	// (0x00060ebe) aid_size_cell_colour_112_ParamLimits

0x5a3a,	// (0x00060ed5) aid_size_cell_effect_ParamLimits

0xa97d,	// (0x00065e18) bg_tb_trans_pane_cp02_ParamLimits

0xb53e,	// (0x000669d9) heading_imed_pane_ParamLimits

0x5a54,	// (0x00060eef) listscroll_imed_pane_ParamLimits

0xc467,	// (0x00067902) popup_call2_audio_first_window_g5_ParamLimits

0xc467,	// (0x00067902) popup_call2_audio_first_window_g5

0x615a,	// (0x000615f5) aid_size_touch_image3_arrow_left_ParamLimits

0x615a,	// (0x000615f5) aid_size_touch_image3_arrow_left

0x6170,	// (0x0006160b) aid_size_touch_image3_arrow_right_ParamLimits

0x6170,	// (0x0006160b) aid_size_touch_image3_arrow_right

0x7663,	// (0x00062afe) vid4_progress_pane_t3

0x5cf2,	// (0x0006118d) main_hwr_training_symbol_option_pane_ParamLimits

0x5cf2,	// (0x0006118d) main_hwr_training_symbol_option_pane

0xda71,	// (0x00068f0c) popup_hwr_training_preview_window_ParamLimits

0xda71,	// (0x00068f0c) popup_hwr_training_preview_window

0x5d53,	// (0x000611ee) hwr_training_navi_pane_g5_ParamLimits

0x5d53,	// (0x000611ee) hwr_training_navi_pane_g5

0xdcaf,	// (0x0006914a) popup_char_count_window

0x11f5,	// (0x0005c690) bg_popup_sub_pane_cp20_ParamLimits

0x6fb1,	// (0x0006244c) list_vitu2_match_list_pane_ParamLimits

0x6fbd,	// (0x00062458) vitu2_page_scroll_pane_ParamLimits

0x6fbd,	// (0x00062458) vitu2_page_scroll_pane

0xe184,	// (0x0006961f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe184,	// (0x0006961f) list_single_hwr_training_symbol_option_pane

0xe197,	// (0x00069632) list_single_hwr_training_symbol_option_pane_g1

0xe19f,	// (0x0006963a) list_single_hwr_training_symbol_option_pane_t1

0xe1ad,	// (0x00069648) bg_button_pane_cp023

0xe1b6,	// (0x00069651) bg_button_pane_cp024

0x76c2,	// (0x00062b5d) vitu2_page_scroll_pane_g1

0x76ca,	// (0x00062b65) vitu2_page_scroll_pane_g2

0x0001,

0xf898,	// (0x0006ad33) vitu2_page_scroll_pane_g

0x76d2,	// (0x00062b6d) vitu2_page_scroll_pane_t1

0xe1e9,	// (0x00069684) popup_char_count_window_g1

0xe1f2,	// (0x0006968d) popup_char_count_window_g2

0xe1fb,	// (0x00069696) popup_char_count_window_g3

0x0002,

0x09ef,	// (0x0005be8a) popup_char_count_window_g

0xe204,	// (0x0006969f) popup_char_count_window_t1

0x120f,	// (0x0005c6aa) main_vded2_pane

0xd770,	// (0x00068c0b) aid_size_cell_imed_line

0xd77a,	// (0x00068c15) grid_imed_line_width_pane

0x65c7,	// (0x00061a62) vid4_indicators_pane_g4

0xe212,	// (0x000696ad) cell_imed_line_width_pane_ParamLimits

0xe212,	// (0x000696ad) cell_imed_line_width_pane

0xe22e,	// (0x000696c9) cell_imed_line_width_pane_g1

0xe226,	// (0x000696c1) cell_imed_line_width_pane_g2

0x0001,

0xf89d,	// (0x0006ad38) cell_imed_line_width_pane_g

0x76e1,	// (0x00062b7c) main_vded2_pane_g1_ParamLimits

0x76e1,	// (0x00062b7c) main_vded2_pane_g1

0x76ee,	// (0x00062b89) main_vded2_pane_g2_ParamLimits

0x76ee,	// (0x00062b89) main_vded2_pane_g2

0x0001,

0xf8a2,	// (0x0006ad3d) main_vded2_pane_g_ParamLimits

0xf8a2,	// (0x0006ad3d) main_vded2_pane_g

0x76fc,	// (0x00062b97) vded2_slider_pane_ParamLimits

0x76fc,	// (0x00062b97) vded2_slider_pane

0x7709,	// (0x00062ba4) aid_size_touch_vded2_end

0x7713,	// (0x00062bae) aid_size_touch_vded2_playhead

0xe237,	// (0x000696d2) aid_size_touch_vded2_start

0xe23f,	// (0x000696da) vded2_slider_bg_pane

0xe248,	// (0x000696e3) vded2_slider_pane_g1

0xe251,	// (0x000696ec) vded2_slider_pane_g2

0x771b,	// (0x00062bb6) vded2_slider_pane_g3

0x0002,

0xf8a7,	// (0x0006ad42) vded2_slider_pane_g

0xe259,	// (0x000696f4) vded2_slider_bg_pane_g1

0xe262,	// (0x000696fd) vded2_slider_bg_pane_g2

0xe26b,	// (0x00069706) vded2_slider_bg_pane_g3

0x0002,

0x0a07,	// (0x0005bea2) vded2_slider_bg_pane_g

0x3df1,	// (0x0005f28c) aid_postcard_touch_down_pane_ParamLimits

0x3df1,	// (0x0005f28c) aid_postcard_touch_down_pane

0x3e01,	// (0x0005f29c) aid_postcard_touch_up_pane_ParamLimits

0x3e01,	// (0x0005f29c) aid_postcard_touch_up_pane

0x120f,	// (0x0005c6aa) main_blid2_pane

0x4532,	// (0x0005f9cd) popup_blid2_search_window

0x9cc5,	// (0x00065160) blid2_gps_pane

0x9cc5,	// (0x00065160) blid2_navig_pane

0x9cc5,	// (0x00065160) blid2_search_pane

0x9cc5,	// (0x00065160) blid2_tripm_pane

0x7724,	// (0x00062bbf) blid2_search_pane_g1_ParamLimits

0x7724,	// (0x00062bbf) blid2_search_pane_g1

0x7734,	// (0x00062bcf) blid2_search_pane_t1_ParamLimits

0x7734,	// (0x00062bcf) blid2_search_pane_t1

0x7746,	// (0x00062be1) aid_size_cell_blid2_gps_ParamLimits

0x7746,	// (0x00062be1) aid_size_cell_blid2_gps

0x7756,	// (0x00062bf1) blid2_gps_pane_g1_ParamLimits

0x7756,	// (0x00062bf1) blid2_gps_pane_g1

0x7762,	// (0x00062bfd) grid_blid2_satellite_pane_ParamLimits

0x7762,	// (0x00062bfd) grid_blid2_satellite_pane

0x7772,	// (0x00062c0d) blid2_navig_pane_g1_ParamLimits

0x7772,	// (0x00062c0d) blid2_navig_pane_g1

0x777e,	// (0x00062c19) blid2_navig_pane_t1_ParamLimits

0x777e,	// (0x00062c19) blid2_navig_pane_t1

0x7790,	// (0x00062c2b) blid2_navig_pane_t2_ParamLimits

0x7790,	// (0x00062c2b) blid2_navig_pane_t2

0x0001,

0xf8ae,	// (0x0006ad49) blid2_navig_pane_t_ParamLimits

0xf8ae,	// (0x0006ad49) blid2_navig_pane_t

0x77a2,	// (0x00062c3d) blid2_navig_ring_pane_ParamLimits

0x77a2,	// (0x00062c3d) blid2_navig_ring_pane

0x77b2,	// (0x00062c4d) blid2_speed_pane_ParamLimits

0x77b2,	// (0x00062c4d) blid2_speed_pane

0x77be,	// (0x00062c59) blid2_tripm_pane_g1_ParamLimits

0x77be,	// (0x00062c59) blid2_tripm_pane_g1

0x77ce,	// (0x00062c69) blid2_tripm_pane_g2_ParamLimits

0x77ce,	// (0x00062c69) blid2_tripm_pane_g2

0x77da,	// (0x00062c75) blid2_tripm_pane_g3_ParamLimits

0x77da,	// (0x00062c75) blid2_tripm_pane_g3

0x77e6,	// (0x00062c81) blid2_tripm_pane_g4_ParamLimits

0x77e6,	// (0x00062c81) blid2_tripm_pane_g4

0x77f2,	// (0x00062c8d) blid2_tripm_pane_g5_ParamLimits

0x77f2,	// (0x00062c8d) blid2_tripm_pane_g5

0x0005,

0xf8b3,	// (0x0006ad4e) blid2_tripm_pane_g_ParamLimits

0xf8b3,	// (0x0006ad4e) blid2_tripm_pane_g

0x780e,	// (0x00062ca9) blid2_tripm_pane_t1_ParamLimits

0x780e,	// (0x00062ca9) blid2_tripm_pane_t1

0x7822,	// (0x00062cbd) blid2_tripm_pane_t2_ParamLimits

0x7822,	// (0x00062cbd) blid2_tripm_pane_t2

0x7834,	// (0x00062ccf) blid2_tripm_pane_t3_ParamLimits

0x7834,	// (0x00062ccf) blid2_tripm_pane_t3

0x0003,

0xf8c0,	// (0x0006ad5b) blid2_tripm_pane_t_ParamLimits

0xf8c0,	// (0x0006ad5b) blid2_tripm_pane_t

0x7866,	// (0x00062d01) cell_blid2_satellite_pane_ParamLimits

0x7866,	// (0x00062d01) cell_blid2_satellite_pane

0x7880,	// (0x00062d1b) cell_blid2_satellite_pane_g1

0xe274,	// (0x0006970f) cell_blid2_satellite_pane_t1

0xd255,	// (0x000686f0) blid2_speed_pane_g1

0xe282,	// (0x0006971d) blid2_speed_pane_t1

0xe290,	// (0x0006972b) blid2_speed_pane_t2

0x0001,

0x0a29,	// (0x0005bec4) blid2_speed_pane_t

0xd255,	// (0x000686f0) blid2_navig_ring_pane_g1

0x7889,	// (0x00062d24) blid2_navig_ring_pane_g2

0x7891,	// (0x00062d2c) blid2_navig_ring_pane_g3

0x7899,	// (0x00062d34) blid2_navig_ring_pane_g4

0x78a1,	// (0x00062d3c) blid2_navig_ring_pane_g5

0x0004,

0xf8c9,	// (0x0006ad64) blid2_navig_ring_pane_g

0x9cc5,	// (0x00065160) bg_popup_window_pane_cp011

0xe29e,	// (0x00069739) popup_blid2_search_window_g1

0xe2a6,	// (0x00069741) popup_blid2_search_window_t1

0xe2b4,	// (0x0006974f) popup_blid2_search_window_t2

0x0001,

0x0a39,	// (0x0005bed4) popup_blid2_search_window_t

0xb126,	// (0x000665c1) main_browser_pane_g1

0xae20,	// (0x000662bb) main_browser_pane_ParamLimits

0x4509,	// (0x0005f9a4) bg_button_pane_cp011_ParamLimits

0x6875,	// (0x00061d10) cell_vitu2_function_pane_g1_ParamLimits

0xce41,	// (0x000682dc) bg_popup_sub_pane_cp22_ParamLimits

0x718d,	// (0x00062628) input_focus_pane_cp08_ParamLimits

0x71a4,	// (0x0006263f) popup_vitu2_query_button_pane_ParamLimits

0x71a4,	// (0x0006263f) popup_vitu2_query_button_pane

0x71b5,	// (0x00062650) popup_vitu2_query_input_button_pane

0xdf3b,	// (0x000693d6) popup_vitu2_query_window_g1_ParamLimits

0x71bf,	// (0x0006265a) popup_vitu2_query_window_g2_ParamLimits

0xf825,	// (0x0006acc0) popup_vitu2_query_window_g_ParamLimits

0x9cc5,	// (0x00065160) bg_button_pane_cp026

0x78a9,	// (0x00062d44) popup_vitu2_query_input_button_pane_g1

0x9cc5,	// (0x00065160) bg_button_pane_cp025

0xe2cc,	// (0x00069767) popup_vitu2_query_button_pane_t1

0x4f88,	// (0x00060423) main_mp3_pane_t6

0x4f98,	// (0x00060433) popup_slider_window_cp01

0x64a4,	// (0x0006193f) cam4_battery_pane

0x6584,	// (0x00061a1f) cam4_battery_pane_cp02

0x75f0,	// (0x00062a8b) cam4_battery_pane_cp01

0x75f0,	// (0x00062a8b) cam4_battery_pane_cp03

0xe2c2,	// (0x0006975d) cam4_battery_pane_g1

0xd255,	// (0x000686f0) cam4_battery_pane_g2

0x0001,

0xf8d4,	// (0x0006ad6f) cam4_battery_pane_g

0xd121,	// (0x000685bc) popup_blid_sat_info2_window_t11

0xb88d,	// (0x00066d28) aid_size_touch_mv_arrow_left_ParamLimits

0xb8b6,	// (0x00066d51) aid_size_touch_mv_arrow_right_ParamLimits

0xb914,	// (0x00066daf) navi_pane_g1_ParamLimits

0xb920,	// (0x00066dbb) navi_pane_g2_ParamLimits

0xb94e,	// (0x00066de9) navi_pane_g3_ParamLimits

0x0308,	// (0x0005b7a3) navi_pane_g_ParamLimits

0x37bf,	// (0x0005ec5a) navi_pane_mv_t1_ParamLimits

0x5a60,	// (0x00060efb) grid_imed_effect_pane_ParamLimits

0x217e,	// (0x0005d619) aid_placing_vt_slider_lsc

0xb075,	// (0x00066510) aid_placing_vt_slider_prt

0xa97d,	// (0x00065e18) bg_tb_trans_pane_cp01_ParamLimits

0xd3e1,	// (0x0006887c) popup_image_details_window_g1_ParamLimits

0xd3f4,	// (0x0006888f) popup_image_details_window_g2_ParamLimits

0xd409,	// (0x000688a4) popup_image_details_window_g3_ParamLimits

0xd409,	// (0x000688a4) popup_image_details_window_g3

0x063b,	// (0x0005bad6) popup_image_details_window_g_ParamLimits

0xd41d,	// (0x000688b8) popup_image_details_window_t1_ParamLimits

0xd42f,	// (0x000688ca) popup_image_details_window_t2_ParamLimits

0xd448,	// (0x000688e3) popup_image_details_window_t3_ParamLimits

0xd45c,	// (0x000688f7) popup_image_details_window_t4_ParamLimits

0xd477,	// (0x00068912) popup_image_details_window_t5_ParamLimits

0x0642,	// (0x0005badd) popup_image_details_window_t_ParamLimits

0x7514,	// (0x000629af) cl_header_name_pane_ParamLimits

0x7514,	// (0x000629af) cl_header_name_pane

0x78b1,	// (0x00062d4c) cl_header_name_pane_t1_ParamLimits

0x78b1,	// (0x00062d4c) cl_header_name_pane_t1

0x78c8,	// (0x00062d63) cl_header_name_pane_t2_ParamLimits

0x78c8,	// (0x00062d63) cl_header_name_pane_t2

0x78f2,	// (0x00062d8d) cl_header_name_pane_t3_ParamLimits

0x78f2,	// (0x00062d8d) cl_header_name_pane_t3

0x0002,

0xf8d9,	// (0x0006ad74) cl_header_name_pane_t_ParamLimits

0xf8d9,	// (0x0006ad74) cl_header_name_pane_t

0xb9dd,	// (0x00066e78) navi_pane_mv_g2_ParamLimits

0xdc89,	// (0x00069124) field_vitu2_entry_pane_g1_ParamLimits

0xdc95,	// (0x00069130) field_vitu2_entry_pane_g2_ParamLimits

0xdca1,	// (0x0006913c) field_vitu2_entry_pane_g3_ParamLimits

0xdca1,	// (0x0006913c) field_vitu2_entry_pane_g3

0x0839,	// (0x0005bcd4) field_vitu2_entry_pane_g_ParamLimits

0x6800,	// (0x00061c9b) cell_vitu2_itu_pane_g1_ParamLimits

0x6810,	// (0x00061cab) cell_vitu2_itu_pane_g2_ParamLimits

0x6810,	// (0x00061cab) cell_vitu2_itu_pane_g2

0x0001,

0xf74e,	// (0x0006abe9) cell_vitu2_itu_pane_g_ParamLimits

0xf74e,	// (0x0006abe9) cell_vitu2_itu_pane_g

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp05_ParamLimits

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp05

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp03

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp04

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp10_ParamLimits

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp10

0x74b6,	// (0x00062951) bg_vkb2_func_pane_cp08

0x749c,	// (0x00062937) bg_vkb2_func_pane_cp06

0x74aa,	// (0x00062945) bg_vkb2_func_pane_cp07

0xe1bf,	// (0x0006965a) bg_vkb2_func_pane_cp11_ParamLimits

0xe1bf,	// (0x0006965a) bg_vkb2_func_pane_cp11

0xe1d4,	// (0x0006966f) bg_vkb2_func_pane_cp12_ParamLimits

0xe1d4,	// (0x0006966f) bg_vkb2_func_pane_cp12

0x9cc5,	// (0x00065160) bg_vkb2_func_pane_cp09

0xdcc1,	// (0x0006915c) bg_vkb2_func_pane_g1

0xb237,	// (0x000666d2) bg_vkb2_func_pane_g2

0xdcc9,	// (0x00069164) bg_vkb2_func_pane_g3

0xdcd1,	// (0x0006916c) bg_vkb2_func_pane_g4

0xdf00,	// (0x0006939b) bg_vkb2_func_pane_g5

0xdce9,	// (0x00069184) bg_vkb2_func_pane_g6

0xdcf1,	// (0x0006918c) bg_vkb2_func_pane_g7

0xdce1,	// (0x0006917c) bg_vkb2_func_pane_g8

0xb217,	// (0x000666b2) bg_vkb2_func_pane_g9

0x0008,

0xf8e0,	// (0x0006ad7b) bg_vkb2_func_pane_g

0x7800,	// (0x00062c9b) blid2_tripm_pane_g6_ParamLimits

0x7800,	// (0x00062c9b) blid2_tripm_pane_g6

0xdb29,	// (0x00068fc4) mp4_progress_pane_g1

0x785a,	// (0x00062cf5) blid2_tripm_values_pane_ParamLimits

0x785a,	// (0x00062cf5) blid2_tripm_values_pane

0x7917,	// (0x00062db2) blid2_tripm_values_pane_t1

0x7925,	// (0x00062dc0) blid2_tripm_values_pane_t2

0x7933,	// (0x00062dce) blid2_tripm_values_pane_t3

0x7941,	// (0x00062ddc) blid2_tripm_values_pane_t4

0x794f,	// (0x00062dea) blid2_tripm_values_pane_t5

0x795d,	// (0x00062df8) blid2_tripm_values_pane_t6

0x796b,	// (0x00062e06) blid2_tripm_values_pane_t7

0x7979,	// (0x00062e14) blid2_tripm_values_pane_t8

0x7987,	// (0x00062e22) blid2_tripm_values_pane_t9

0x0008,

0xf8f3,	// (0x0006ad8e) blid2_tripm_values_pane_t

0x21be,	// (0x0005d659) call_video_pane_t1_ParamLimits

0x21df,	// (0x0005d67a) call_video_pane_t2_ParamLimits

0xf273,	// (0x0006a70e) call_video_pane_t_ParamLimits

0x3cf8,	// (0x0005f193) msg_header_pane_g1_ParamLimits

0xbbc4,	// (0x0006705f) msg_header_pane_g2_ParamLimits

0xbbc4,	// (0x0006705f) msg_header_pane_g2

0x0001,

0xf45d,	// (0x0006a8f8) msg_header_pane_g_ParamLimits

0xf45d,	// (0x0006a8f8) msg_header_pane_g

0xae20,	// (0x000662bb) main_clock2_pane_ParamLimits

0x57f9,	// (0x00060c94) grid_clock2_toolbar_pane_ParamLimits

0x57f9,	// (0x00060c94) grid_clock2_toolbar_pane

0x57f9,	// (0x00060c94) listscroll_clock2_pane_ParamLimits

0x57f9,	// (0x00060c94) listscroll_clock2_pane

0x589d,	// (0x00060d38) main_clock2_pane_t3_ParamLimits

0x589d,	// (0x00060d38) main_clock2_pane_t3

0x58af,	// (0x00060d4a) main_clock2_pane_t4_ParamLimits

0x58af,	// (0x00060d4a) main_clock2_pane_t4

0xe2da,	// (0x00069775) cell_clock2_toolbar_pane

0xe2e2,	// (0x0006977d) cell_clock2_toolbar_pane_cp01

0xe2e2,	// (0x0006977d) cell_clock2_toolbar_pane_cp02

0xe2ea,	// (0x00069785) cell_clock2_toolbar_pane_cp03

0xe2f2,	// (0x0006978d) list_clock2_pane

0xb803,	// (0x00066c9e) scroll_pane_cp10

0xe2fa,	// (0x00069795) list_single_clock2_pane_ParamLimits

0xe2fa,	// (0x00069795) list_single_clock2_pane

0xba44,	// (0x00066edf) list_highlight_pane_cp08

0xe307,	// (0x000697a2) list_single_clock2_pane_t1

0xe315,	// (0x000697b0) list_single_clock2_pane_t2

0x0001,

0x0a70,	// (0x0005bf0b) list_single_clock2_pane_t

0x9cc5,	// (0x00065160) bg_button_pane_cp10

0xe331,	// (0x000697cc) cell_clock2_toolbar_pane_g1

0x3d5f,	// (0x0005f1fa) aid_main_viewer_pane_g1_ParamLimits

0x3d5f,	// (0x0005f1fa) aid_main_viewer_pane_g1

0x3d6b,	// (0x0005f206) aid_main_viewer_pane_g2_ParamLimits

0x3d6b,	// (0x0005f206) aid_main_viewer_pane_g2

0x3d77,	// (0x0005f212) aid_main_viewer_pane_g3_ParamLimits

0x3d77,	// (0x0005f212) aid_main_viewer_pane_g3

0x3d88,	// (0x0005f223) aid_main_viewer_pane_g4_ParamLimits

0x3d88,	// (0x0005f223) aid_main_viewer_pane_g4

0x0003,

0xf46e,	// (0x0006a909) aid_main_viewer_pane_g_ParamLimits

0xf46e,	// (0x0006a909) aid_main_viewer_pane_g

0x44fc,	// (0x0005f997) main_calc_pane_ParamLimits

0x4517,	// (0x0005f9b2) main_dialer2_pane_ParamLimits

0x120f,	// (0x0005c6aa) main_cam6_pane

0x120f,	// (0x0005c6aa) main_vid6_pane

0x5805,	// (0x00060ca0) listscroll_gen_pane_cp06_ParamLimits

0x5805,	// (0x00060ca0) listscroll_gen_pane_cp06

0x58c1,	// (0x00060d5c) main_clock2_pane_t5_ParamLimits

0x58c1,	// (0x00060d5c) main_clock2_pane_t5

0x590a,	// (0x00060da5) aid_call2_pane_cp10_ParamLimits

0x591c,	// (0x00060db7) aid_call_pane_cp10_ParamLimits

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x592e,	// (0x00060dc9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x592e,	// (0x00060dc9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb881,	// (0x00066d1c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf65e,	// (0x0006aaf9) popup_clock_analogue_window_cp10_g_ParamLimits

0x5940,	// (0x00060ddb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6107,	// (0x000615a2) cell_dialer2_keypad_pane_g2_ParamLimits

0x6107,	// (0x000615a2) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e8,	// (0x0006ab83) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e8,	// (0x0006ab83) cell_dialer2_keypad_pane_g

0x6123,	// (0x000615be) cell_dialer2_keypad_pane_t1

0x6b40,	// (0x00061fdb) main_cset_text2_pane_ParamLimits

0x6b40,	// (0x00061fdb) main_cset_text2_pane

0xe127,	// (0x000695c2) area_vitu2_query_pane_g1_ParamLimits

0x743b,	// (0x000628d6) area_vitu2_query_pane_g2_ParamLimits

0xf84e,	// (0x0006ace9) area_vitu2_query_pane_g_ParamLimits

0x9e1a,	// (0x000652b5) area_vitu2_query_pane_t7_ParamLimits

0x9e1a,	// (0x000652b5) area_vitu2_query_pane_t7

0x749c,	// (0x00062937) bg_button_pane_cp018_ParamLimits

0x74aa,	// (0x00062945) bg_button_pane_cp021_ParamLimits

0x74b6,	// (0x00062951) bg_button_pane_cp022_ParamLimits

0x74b6,	// (0x00062951) bg_vkb2_func_pane_cp08_ParamLimits

0x749c,	// (0x00062937) bg_vkb2_func_pane_cp06_ParamLimits

0x74aa,	// (0x00062945) bg_vkb2_func_pane_cp07_ParamLimits

0x74c7,	// (0x00062962) input_focus_pane_cp09_ParamLimits

0x7995,	// (0x00062e30) cam6_autofocus_pane_ParamLimits

0x7995,	// (0x00062e30) cam6_autofocus_pane

0x79b7,	// (0x00062e52) cam6_image_uncrop_pane_ParamLimits

0x79b7,	// (0x00062e52) cam6_image_uncrop_pane

0x79e4,	// (0x00062e7f) cam6_indi_pane_ParamLimits

0x79e4,	// (0x00062e7f) cam6_indi_pane

0x79fe,	// (0x00062e99) cam6_mode_pane_ParamLimits

0x79fe,	// (0x00062e99) cam6_mode_pane

0x7a12,	// (0x00062ead) cam6_timer_pane_ParamLimits

0x7a12,	// (0x00062ead) cam6_timer_pane

0x7a1e,	// (0x00062eb9) cam6_zoom_pane_ParamLimits

0x7a1e,	// (0x00062eb9) cam6_zoom_pane

0x7a36,	// (0x00062ed1) cam6_mode_pane_g1_ParamLimits

0x7a36,	// (0x00062ed1) cam6_mode_pane_g1

0x7a42,	// (0x00062edd) cam6_mode_pane_g2_ParamLimits

0x7a42,	// (0x00062edd) cam6_mode_pane_g2

0x7a4e,	// (0x00062ee9) cam6_mode_pane_g3_ParamLimits

0x7a4e,	// (0x00062ee9) cam6_mode_pane_g3

0x7a5a,	// (0x00062ef5) cam6_mode_pane_g4_ParamLimits

0x7a5a,	// (0x00062ef5) cam6_mode_pane_g4

0x0003,

0xf906,	// (0x0006ada1) cam6_mode_pane_g_ParamLimits

0xf906,	// (0x0006ada1) cam6_mode_pane_g

0xe323,	// (0x000697be) bg_tb_trans_pane_cp08_ParamLimits

0xe323,	// (0x000697be) bg_tb_trans_pane_cp08

0xe339,	// (0x000697d4) cam6_battery_pane_ParamLimits

0xe339,	// (0x000697d4) cam6_battery_pane

0xe34f,	// (0x000697ea) cam6_indi_pane_g1_ParamLimits

0xe34f,	// (0x000697ea) cam6_indi_pane_g1

0xe361,	// (0x000697fc) cam6_indi_pane_g2_ParamLimits

0xe361,	// (0x000697fc) cam6_indi_pane_g2

0xe373,	// (0x0006980e) cam6_indi_pane_g3_ParamLimits

0xe373,	// (0x0006980e) cam6_indi_pane_g3

0x0002,

0x0a7e,	// (0x0005bf19) cam6_indi_pane_g_ParamLimits

0x0a7e,	// (0x0005bf19) cam6_indi_pane_g

0xe385,	// (0x00069820) cam6_indi_pane_t1_ParamLimits

0xe385,	// (0x00069820) cam6_indi_pane_t1

0x6604,	// (0x00061a9f) cam6_autofocus_pane_g1

0x65fc,	// (0x00061a97) cam6_autofocus_pane_g2

0x6614,	// (0x00061aaf) cam6_autofocus_pane_g3

0x660c,	// (0x00061aa7) cam6_autofocus_pane_g4

0x0003,

0xf90f,	// (0x0006adaa) cam6_autofocus_pane_g

0xe3ab,	// (0x00069846) cam6_timer_pane_g1

0xe3b3,	// (0x0006984e) cam6_timer_pane_t1

0xe3c1,	// (0x0006985c) cam6_zoom_cont_pane

0xe3c9,	// (0x00069864) cam6_zoom_pane_g1

0xe3d1,	// (0x0006986c) cam6_zoom_pane_g2

0x7a66,	// (0x00062f01) cam6_zoom_pane_g3

0x0002,

0xf918,	// (0x0006adb3) cam6_zoom_pane_g

0xd255,	// (0x000686f0) cam6_battery_pane_g1

0xd255,	// (0x000686f0) cam6_battery_pane_g2

0x0001,

0x05ff,	// (0x0005ba9a) cam6_battery_pane_g

0xe3d9,	// (0x00069874) cam6_zoom_cont_pane_g1

0xe3e2,	// (0x0006987d) cam6_zoom_cont_pane_g2

0xe3eb,	// (0x00069886) cam6_zoom_cont_pane_g3

0x0002,

0x0a95,	// (0x0005bf30) cam6_zoom_cont_pane_g

0x7a83,	// (0x00062f1e) cam6_mode_pane_cp_ParamLimits

0x7a83,	// (0x00062f1e) cam6_mode_pane_cp

0x7a97,	// (0x00062f32) cam6_zoom_pane_cp_ParamLimits

0x7a97,	// (0x00062f32) cam6_zoom_pane_cp

0x7aaf,	// (0x00062f4a) vid6_image_uncrop_cif_pane_ParamLimits

0x7aaf,	// (0x00062f4a) vid6_image_uncrop_cif_pane

0x7adb,	// (0x00062f76) vid6_image_uncrop_nhd_pane_ParamLimits

0x7adb,	// (0x00062f76) vid6_image_uncrop_nhd_pane

0x7af8,	// (0x00062f93) vid6_image_uncrop_vga_pane_ParamLimits

0x7af8,	// (0x00062f93) vid6_image_uncrop_vga_pane

0x7b17,	// (0x00062fb2) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b17,	// (0x00062fb2) vid6_image_uncrop_wvga_pane

0x7b34,	// (0x00062fcf) vid6_indi_pane_ParamLimits

0x7b34,	// (0x00062fcf) vid6_indi_pane

0xe323,	// (0x000697be) bg_tb_trans_pane_cp09_ParamLimits

0xe323,	// (0x000697be) bg_tb_trans_pane_cp09

0xe403,	// (0x0006989e) cam6_battery_pane_cp_ParamLimits

0xe403,	// (0x0006989e) cam6_battery_pane_cp

0xe40f,	// (0x000698aa) vid6_indi_pane_g1_ParamLimits

0xe40f,	// (0x000698aa) vid6_indi_pane_g1

0xe421,	// (0x000698bc) vid6_indi_pane_g2_ParamLimits

0xe421,	// (0x000698bc) vid6_indi_pane_g2

0xe433,	// (0x000698ce) vid6_indi_pane_g3_ParamLimits

0xe433,	// (0x000698ce) vid6_indi_pane_g3

0xe448,	// (0x000698e3) vid6_indi_pane_g4_ParamLimits

0xe448,	// (0x000698e3) vid6_indi_pane_g4

0xe45d,	// (0x000698f8) vid6_indi_pane_g5_ParamLimits

0xe45d,	// (0x000698f8) vid6_indi_pane_g5

0x0004,

0x0a9c,	// (0x0005bf37) vid6_indi_pane_g_ParamLimits

0x0a9c,	// (0x0005bf37) vid6_indi_pane_g

0xe477,	// (0x00069912) vid6_indi_pane_t1_ParamLimits

0xe477,	// (0x00069912) vid6_indi_pane_t1

0xe48d,	// (0x00069928) vid6_indi_pane_t2_ParamLimits

0xe48d,	// (0x00069928) vid6_indi_pane_t2

0xe4b5,	// (0x00069950) vid6_indi_pane_t3_ParamLimits

0xe4b5,	// (0x00069950) vid6_indi_pane_t3

0xe4dd,	// (0x00069978) vid6_indi_pane_t4_ParamLimits

0xe4dd,	// (0x00069978) vid6_indi_pane_t4

0x0003,

0x0aa7,	// (0x0005bf42) vid6_indi_pane_t_ParamLimits

0x0aa7,	// (0x0005bf42) vid6_indi_pane_t

0xe501,	// (0x0006999c) wait_bar_pane_cp08

0x7b59,	// (0x00062ff4) main_cset_text2_pane_t1_ParamLimits

0x7b59,	// (0x00062ff4) main_cset_text2_pane_t1

0x7a6e,	// (0x00062f09) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a6e,	// (0x00062f09) listscroll_gen_pane_cp06_t1

0x120f,	// (0x0005c6aa) main_cam6_set_pane

0x6496,	// (0x00061931) bg_tb_trans_pane_cp06_ParamLimits

0x64ac,	// (0x00061947) cam4_indicators_pane_g1_ParamLimits

0x64bd,	// (0x00061958) cam4_indicators_pane_g2_ParamLimits

0xf725,	// (0x0006abc0) cam4_indicators_pane_g_ParamLimits

0x64db,	// (0x00061976) cam4_indicators_pane_t1_ParamLimits

0x4509,	// (0x0005f9a4) bg_tb_trans_pane_cp07_ParamLimits

0x658e,	// (0x00061a29) vid4_indicators_pane_g1_ParamLimits

0x65a2,	// (0x00061a3d) vid4_indicators_pane_g2_ParamLimits

0x65b6,	// (0x00061a51) vid4_indicators_pane_g3_ParamLimits

0x65c7,	// (0x00061a62) vid4_indicators_pane_g4_ParamLimits

0xf737,	// (0x0006abd2) vid4_indicators_pane_g_ParamLimits

0x65e5,	// (0x00061a80) vid4_indicators_pane_t1_ParamLimits

0x75f8,	// (0x00062a93) vid4_progress_pane_g1_ParamLimits

0x760a,	// (0x00062aa5) vid4_progress_pane_g2_ParamLimits

0xb4f8,	// (0x00066993) vid4_progress_pane_g3_ParamLimits

0x761a,	// (0x00062ab5) vid4_progress_pane_g4_ParamLimits

0xf886,	// (0x0006ad21) vid4_progress_pane_g_ParamLimits

0x7638,	// (0x00062ad3) vid4_progress_pane_t1_ParamLimits

0x764d,	// (0x00062ae8) vid4_progress_pane_t2_ParamLimits

0x7663,	// (0x00062afe) vid4_progress_pane_t3_ParamLimits

0xf891,	// (0x0006ad2c) vid4_progress_pane_t_ParamLimits

0x7678,	// (0x00062b13) wait_bar_pane_cp07_ParamLimits

0x7b8c,	// (0x00063027) main_cam6_set_pane_g2_ParamLimits

0x7b8c,	// (0x00063027) main_cam6_set_pane_g2

0x7b98,	// (0x00063033) main_cset6_listscroll_pane_ParamLimits

0x7b98,	// (0x00063033) main_cset6_listscroll_pane

0x7bc3,	// (0x0006305e) main_cset6_slider_pane_ParamLimits

0x7bc3,	// (0x0006305e) main_cset6_slider_pane

0x7bcf,	// (0x0006306a) main_cset6_text2_pane_ParamLimits

0x7bcf,	// (0x0006306a) main_cset6_text2_pane

0xe510,	// (0x000699ab) main_cset6_text_pane

0xe518,	// (0x000699b3) main_cset_list_pane_copy1_ParamLimits

0xe518,	// (0x000699b3) main_cset_list_pane_copy1

0xe528,	// (0x000699c3) scroll_pane_cp028_copy1

0x7be2,	// (0x0006307d) cset_list_set_pane_copy1

0x7bf5,	// (0x00063090) aid_position_infowindow_above_copy1

0x7bfd,	// (0x00063098) aid_position_infowindow_below_copy1

0x7c05,	// (0x000630a0) cset_list_set_pane_g1_copy1

0x9d7e,	// (0x00065219) cset_list_set_pane_g3_copy1_ParamLimits

0x9d7e,	// (0x00065219) cset_list_set_pane_g3_copy1

0x9d8d,	// (0x00065228) cset_list_set_pane_t1_copy1_ParamLimits

0x9d8d,	// (0x00065228) cset_list_set_pane_t1_copy1

0xa97d,	// (0x00065e18) list_highlight_pane_cp021_copy1_ParamLimits

0xa97d,	// (0x00065e18) list_highlight_pane_cp021_copy1

0xe531,	// (0x000699cc) cset6_slider_pane_ParamLimits

0xe531,	// (0x000699cc) cset6_slider_pane

0xe55d,	// (0x000699f8) main_cset6_slider_pane_g1_ParamLimits

0xe55d,	// (0x000699f8) main_cset6_slider_pane_g1

0x7c0d,	// (0x000630a8) main_cset6_slider_pane_g2_ParamLimits

0x7c0d,	// (0x000630a8) main_cset6_slider_pane_g2

0xe585,	// (0x00069a20) main_cset6_slider_pane_g3_ParamLimits

0xe585,	// (0x00069a20) main_cset6_slider_pane_g3

0x7c35,	// (0x000630d0) main_cset6_slider_pane_g4_ParamLimits

0x7c35,	// (0x000630d0) main_cset6_slider_pane_g4

0x7c41,	// (0x000630dc) main_cset6_slider_pane_g5_ParamLimits

0x7c41,	// (0x000630dc) main_cset6_slider_pane_g5

0xddf0,	// (0x0006928b) main_cset6_slider_pane_g7_ParamLimits

0xddf0,	// (0x0006928b) main_cset6_slider_pane_g7

0xddfc,	// (0x00069297) main_cset6_slider_pane_g8_ParamLimits

0xddfc,	// (0x00069297) main_cset6_slider_pane_g8

0x7c4f,	// (0x000630ea) main_cset6_slider_pane_g9_ParamLimits

0x7c4f,	// (0x000630ea) main_cset6_slider_pane_g9

0x7c5b,	// (0x000630f6) main_cset6_slider_pane_g10_ParamLimits

0x7c5b,	// (0x000630f6) main_cset6_slider_pane_g10

0x7c67,	// (0x00063102) main_cset6_slider_pane_g11_ParamLimits

0x7c67,	// (0x00063102) main_cset6_slider_pane_g11

0x7c73,	// (0x0006310e) main_cset6_slider_pane_g12_ParamLimits

0x7c73,	// (0x0006310e) main_cset6_slider_pane_g12

0x7c7f,	// (0x0006311a) main_cset6_slider_pane_g13_ParamLimits

0x7c7f,	// (0x0006311a) main_cset6_slider_pane_g13

0x7c8b,	// (0x00063126) main_cset6_slider_pane_g14_ParamLimits

0x7c8b,	// (0x00063126) main_cset6_slider_pane_g14

0x7c97,	// (0x00063132) main_cset6_slider_pane_g15_ParamLimits

0x7c97,	// (0x00063132) main_cset6_slider_pane_g15

0x7caf,	// (0x0006314a) main_cset6_slider_pane_g16_ParamLimits

0x7caf,	// (0x0006314a) main_cset6_slider_pane_g16

0x7cbd,	// (0x00063158) main_cset6_slider_pane_g17_ParamLimits

0x7cbd,	// (0x00063158) main_cset6_slider_pane_g17

0x0011,

0xf91f,	// (0x0006adba) main_cset6_slider_pane_g_ParamLimits

0xf91f,	// (0x0006adba) main_cset6_slider_pane_g

0xe591,	// (0x00069a2c) main_cset6_slider_pane_t1_ParamLimits

0xe591,	// (0x00069a2c) main_cset6_slider_pane_t1

0x7ce3,	// (0x0006317e) main_cset6_slider_pane_t2_ParamLimits

0x7ce3,	// (0x0006317e) main_cset6_slider_pane_t2

0x7d0e,	// (0x000631a9) main_cset6_slider_pane_t3_ParamLimits

0x7d0e,	// (0x000631a9) main_cset6_slider_pane_t3

0x7d39,	// (0x000631d4) main_cset6_slider_pane_t4_ParamLimits

0x7d39,	// (0x000631d4) main_cset6_slider_pane_t4

0x7d64,	// (0x000631ff) main_cset6_slider_pane_t5_ParamLimits

0x7d64,	// (0x000631ff) main_cset6_slider_pane_t5

0xe5d2,	// (0x00069a6d) main_cset6_slider_pane_t7_ParamLimits

0xe5d2,	// (0x00069a6d) main_cset6_slider_pane_t7

0x7d91,	// (0x0006322c) main_cset6_slider_pane_t8_ParamLimits

0x7d91,	// (0x0006322c) main_cset6_slider_pane_t8

0x7db5,	// (0x00063250) main_cset6_slider_pane_t9_ParamLimits

0x7db5,	// (0x00063250) main_cset6_slider_pane_t9

0x7dd9,	// (0x00063274) main_cset6_slider_pane_t10_ParamLimits

0x7dd9,	// (0x00063274) main_cset6_slider_pane_t10

0x7dfd,	// (0x00063298) main_cset6_slider_pane_t11_ParamLimits

0x7dfd,	// (0x00063298) main_cset6_slider_pane_t11

0xe608,	// (0x00069aa3) main_cset6_slider_pane_t14_ParamLimits

0xe608,	// (0x00069aa3) main_cset6_slider_pane_t14

0xe641,	// (0x00069adc) main_cset6_slider_pane_t15_ParamLimits

0xe641,	// (0x00069adc) main_cset6_slider_pane_t15

0x000b,

0xf944,	// (0x0006addf) main_cset6_slider_pane_t_ParamLimits

0xf944,	// (0x0006addf) main_cset6_slider_pane_t

0xdeb4,	// (0x0006934f) cset_slider_pane_g1_copy1

0xdebd,	// (0x00069358) cset_slider_pane_g2_copy1

0xdec6,	// (0x00069361) cset_slider_pane_g3_copy1

0x9cc5,	// (0x00065160) bg_popup_sub_pane_cp011_copy1

0xe67a,	// (0x00069b15) main_cset_text_pane_g1_copy1

0xdf4f,	// (0x000693ea) main_cset_text_pane_t1_copy1

0xdf5d,	// (0x000693f8) main_cset_text_pane_t2_copy1

0xdf6b,	// (0x00069406) main_cset_text_pane_t3_copy1

0xdf79,	// (0x00069414) main_cset_text_pane_t4_copy1

0xdf87,	// (0x00069422) main_cset_text_pane_t5_copy1

0xe682,	// (0x00069b1d) main_cset_text_pane_t6_copy1

0xdfa3,	// (0x0006943e) main_cset_text_pane_t7_copy1

0x7ef2,	// (0x0006338d) main_cset_text2_pane_t1_copy1

0x4509,	// (0x0005f9a4) main_ncimui_pane

0x4568,	// (0x0005fa03) popup_query_ncimui_window_ParamLimits

0x4568,	// (0x0005fa03) popup_query_ncimui_window

0x9d49,	// (0x000651e4) field_cale_ev2_pane_g4_ParamLimits

0x9d49,	// (0x000651e4) field_cale_ev2_pane_g4

0x5e27,	// (0x000612c2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e27,	// (0x000612c2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c8,	// (0x0006ab63) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c8,	// (0x0006ab63) cell_video_dialer_keypad_pane_g

0x5e3f,	// (0x000612da) cell_video_dialer_keypad_pane_t1

0x9cc5,	// (0x00065160) bg_popup_window_pane_cp012

0xb6d0,	// (0x00066b6b) heading_pane_cp06

0xe6ae,	// (0x00069b49) ncim_query_content_pane

0x9cc5,	// (0x00065160) bg_popup_heading_pane_cp01

0xe6b6,	// (0x00069b51) ncim_heading_pane_t1

0xe6c4,	// (0x00069b5f) ncim_indicator_popup_pane

0xe6d6,	// (0x00069b71) ncim_query_button_pane

0xe6ea,	// (0x00069b85) ncim_query_content_pane_t1

0xe6fc,	// (0x00069b97) ncim_query_content_pane_t2

0x0005,

0xf988,	// (0x0006ae23) ncim_query_content_pane_t

0xe736,	// (0x00069bd1) ncim_query_list_pane

0xe748,	// (0x00069be3) ncim_query_popup_pane

0xe6c4,	// (0x00069b5f) ncim_indicator_popup_pane_ParamLimits

0x8045,	// (0x000634e0) ncim_query_content_pane_g1_ParamLimits

0x8045,	// (0x000634e0) ncim_query_content_pane_g1

0xe6ea,	// (0x00069b85) ncim_query_content_pane_t1_ParamLimits

0xe6fc,	// (0x00069b97) ncim_query_content_pane_t2_ParamLimits

0x8051,	// (0x000634ec) ncim_query_content_pane_t3_ParamLimits

0x8051,	// (0x000634ec) ncim_query_content_pane_t3

0x806e,	// (0x00063509) ncim_query_content_pane_t4_ParamLimits

0x806e,	// (0x00063509) ncim_query_content_pane_t4

0x808b,	// (0x00063526) ncim_query_content_pane_t5_ParamLimits

0x808b,	// (0x00063526) ncim_query_content_pane_t5

0xe70e,	// (0x00069ba9) ncim_query_content_pane_t6_ParamLimits

0xe70e,	// (0x00069ba9) ncim_query_content_pane_t6

0xf988,	// (0x0006ae23) ncim_query_content_pane_t_ParamLimits

0xe736,	// (0x00069bd1) ncim_query_list_pane_ParamLimits

0xe748,	// (0x00069be3) ncim_query_popup_pane_ParamLimits

0xe75c,	// (0x00069bf7) wait_bar_pane_cp04

0x9cc5,	// (0x00065160) input_focus_pane_cp011

0xe764,	// (0x00069bff) ncim_query_popup_pane_t1

0xe772,	// (0x00069c0d) ncim_list_query_list_pane_ParamLimits

0xe772,	// (0x00069c0d) ncim_list_query_list_pane

0x9cc5,	// (0x00065160) bg_button_pane_cp027

0xe77f,	// (0x00069c1a) ncim_query_button_pane_g1

0x9cc5,	// (0x00065160) list_highlight_pane_cp012

0xe789,	// (0x00069c24) ncim_list_query_list_pane_g1

0xe791,	// (0x00069c2c) ncim_list_query_list_pane_t1

0x64cc,	// (0x00061967) cam4_indicators_pane_g3_ParamLimits

0x64cc,	// (0x00061967) cam4_indicators_pane_g3

0x65d3,	// (0x00061a6e) vid4_indicators_pane_g5_ParamLimits

0x65d3,	// (0x00061a6e) vid4_indicators_pane_g5

0x7629,	// (0x00062ac4) vid4_progress_pane_g5_ParamLimits

0x7629,	// (0x00062ac4) vid4_progress_pane_g5

0x7f31,	// (0x000633cc) main_ncimui_pane_g1

0x7f99,	// (0x00063434) ncimui_group_query_pane_ParamLimits

0x7f99,	// (0x00063434) ncimui_group_query_pane

0x7fe1,	// (0x0006347c) ncimui_list_pane_ParamLimits

0x7fe1,	// (0x0006347c) ncimui_list_pane

0x8008,	// (0x000634a3) ncimui_text_pane_ParamLimits

0x8008,	// (0x000634a3) ncimui_text_pane

0x80a8,	// (0x00063543) ncimui_text_pane_t1_ParamLimits

0x80a8,	// (0x00063543) ncimui_text_pane_t1

0xe79f,	// (0x00069c3a) ncimui_list_single_graphic_pane_ParamLimits

0xe79f,	// (0x00069c3a) ncimui_list_single_graphic_pane

0x80c7,	// (0x00063562) ncimui_query_pane_ParamLimits

0x80c7,	// (0x00063562) ncimui_query_pane

0x9cc5,	// (0x00065160) list_highlight_pane_cp013

0xe7af,	// (0x00069c4a) ncim_list_query_list_pane_t1_copy1

0xe789,	// (0x00069c24) ncim_list_single_graphic_pane_g1

0xe7bd,	// (0x00069c58) ncim_query_button_pane_cp01

0xe7c9,	// (0x00069c64) ncim_query_entry_pane_ParamLimits

0xe7c9,	// (0x00069c64) ncim_query_entry_pane

0xe7dc,	// (0x00069c77) ncimui_query_pane_g1

0xe7e8,	// (0x00069c83) ncimui_query_pane_t1_ParamLimits

0xe7e8,	// (0x00069c83) ncimui_query_pane_t1

0xa97d,	// (0x00065e18) input_focus_pane_cp012

0xe801,	// (0x00069c9c) ncim_query_entry_pane_t1

0xae20,	// (0x000662bb) main_im_pane_ParamLimits

0x4509,	// (0x0005f9a4) main_mobtv_pane_ParamLimits

0x4509,	// (0x0005f9a4) main_mobtv_pane

0x7ccb,	// (0x00063166) main_cset6_slider_pane_g18_ParamLimits

0x7ccb,	// (0x00063166) main_cset6_slider_pane_g18

0x7cd7,	// (0x00063172) main_cset6_slider_pane_g19_ParamLimits

0x7cd7,	// (0x00063172) main_cset6_slider_pane_g19

0xdca1,	// (0x0006913c) bg_main_mobtv_pane_ParamLimits

0xdca1,	// (0x0006913c) bg_main_mobtv_pane

0x80da,	// (0x00063575) main_mobtv_info_pane

0x80e5,	// (0x00063580) main_mobtv_loading_pane_ParamLimits

0x80e5,	// (0x00063580) main_mobtv_loading_pane

0xe813,	// (0x00069cae) main_mobtv_pg_channel_list_pane

0xe81d,	// (0x00069cb8) main_mobtv_pg_hdr_pane

0x80f2,	// (0x0006358d) main_mobtv_programe_curr_pane_ParamLimits

0x80f2,	// (0x0006358d) main_mobtv_programe_curr_pane

0x80ff,	// (0x0006359a) main_mobtv_programe_next_pane_ParamLimits

0x80ff,	// (0x0006359a) main_mobtv_programe_next_pane

0xe826,	// (0x00069cc1) popup_mobtv_noti_window

0xd255,	// (0x000686f0) main_tv_pg_hdr_pane_g1

0xe82e,	// (0x00069cc9) main_tv_pg_hdr_pane_g2

0xe836,	// (0x00069cd1) main_tv_pg_hdr_pane_g3

0xe83e,	// (0x00069cd9) main_tv_pg_hdr_pane_g4

0xe846,	// (0x00069ce1) main_tv_pg_hdr_pane_g5

0xe850,	// (0x00069ceb) main_tv_pg_hdr_pane_g6

0xe85a,	// (0x00069cf5) main_tv_pg_hdr_pane_g7

0xe864,	// (0x00069cff) main_tv_pg_hdr_pane_g8

0xe86e,	// (0x00069d09) main_tv_pg_hdr_pane_g9

0xe878,	// (0x00069d13) main_tv_pg_hdr_pane_g10

0xe882,	// (0x00069d1d) main_tv_pg_hdr_pane_g11

0x000a,

0x0b26,	// (0x0005bfc1) main_tv_pg_hdr_pane_g

0xe88c,	// (0x00069d27) main_tv_pg_hdr_pane_t1

0xe89a,	// (0x00069d35) main_tv_pg_hdr_pane_t2

0xe8a8,	// (0x00069d43) main_tv_pg_hdr_pane_t3

0xe8b8,	// (0x00069d53) main_tv_pg_hdr_pane_t4

0xe8df,	// (0x00069d7a) main_tv_pg_hdr_pane_t5

0x0004,

0xf995,	// (0x0006ae30) main_tv_pg_hdr_pane_t

0xe8f8,	// (0x00069d93) single_mobtv_pg_channel_pane_ParamLimits

0xe8f8,	// (0x00069d93) single_mobtv_pg_channel_pane

0xe90a,	// (0x00069da5) single_mobtv_pg_channel_table_pane

0xe913,	// (0x00069dae) single_mobtv_pg_channel_thumb_pane

0xe91c,	// (0x00069db7) single_tv_pg_channel_pane_g1

0xe925,	// (0x00069dc0) single_tv_pg_channel_pane_g2

0x0001,

0x0b48,	// (0x0005bfe3) single_tv_pg_channel_pane_g

0xd4c1,	// (0x0006895c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4c1,	// (0x0006895c) bg_single_mobtv_pg_channel_thumb_pane

0xe92e,	// (0x00069dc9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe92e,	// (0x00069dc9) single_mobtv_pg_channel_thumb_pane_g1

0xe93c,	// (0x00069dd7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe93c,	// (0x00069dd7) single_mobtv_pg_channel_thumb_pane_g2

0xe948,	// (0x00069de3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe948,	// (0x00069de3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b4d,	// (0x0005bfe8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b4d,	// (0x0005bfe8) single_mobtv_pg_channel_thumb_pane_g

0xe954,	// (0x00069def) single_mobtv_pg_channel_thumb_pane_t1

0xe962,	// (0x00069dfd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b54,	// (0x0005bfef) single_mobtv_pg_channel_thumb_pane_t

0xd255,	// (0x000686f0) bg_single_mobtv_pg_channel_table_pane_g1

0xd255,	// (0x000686f0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x05ff,	// (0x0005ba9a) bg_single_mobtv_pg_channel_table_pane_g

0xe970,	// (0x00069e0b) single_mobtv_pg_channel_table_pane_t1

0xe97e,	// (0x00069e19) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b59,	// (0x0005bff4) single_mobtv_pg_channel_table_pane_t

0x8114,	// (0x000635af) main_mobtv_info_pane_g1_ParamLimits

0x8114,	// (0x000635af) main_mobtv_info_pane_g1

0x8130,	// (0x000635cb) main_mobtv_info_pane_t1_ParamLimits

0x8130,	// (0x000635cb) main_mobtv_info_pane_t1

0x81a8,	// (0x00063643) main_mobtv_info_pane_t2_ParamLimits

0x81a8,	// (0x00063643) main_mobtv_info_pane_t2

0x0002,

0xf9a5,	// (0x0006ae40) main_mobtv_info_pane_t_ParamLimits

0xf9a5,	// (0x0006ae40) main_mobtv_info_pane_t

0x8237,	// (0x000636d2) wait_bar_pane_cp05

0x8249,	// (0x000636e4) main_mobtv_loading_pane_g1_ParamLimits

0x8249,	// (0x000636e4) main_mobtv_loading_pane_g1

0x8257,	// (0x000636f2) main_mobtv_loading_pane_g2_ParamLimits

0x8257,	// (0x000636f2) main_mobtv_loading_pane_g2

0x8263,	// (0x000636fe) main_mobtv_loading_pane_g3_ParamLimits

0x8263,	// (0x000636fe) main_mobtv_loading_pane_g3

0x0002,

0xf9ac,	// (0x0006ae47) main_mobtv_loading_pane_g_ParamLimits

0xf9ac,	// (0x0006ae47) main_mobtv_loading_pane_g

0xe98c,	// (0x00069e27) main_mobtv_loading_pane_t1_ParamLimits

0xe98c,	// (0x00069e27) main_mobtv_loading_pane_t1

0xe9a4,	// (0x00069e3f) main_mobtv_loading_pane_t2_ParamLimits

0xe9a4,	// (0x00069e3f) main_mobtv_loading_pane_t2

0x0001,

0x0b71,	// (0x0005c00c) main_mobtv_loading_pane_t_ParamLimits

0x0b71,	// (0x0005c00c) main_mobtv_loading_pane_t

0x8271,	// (0x0006370c) wait_bar_pane_cp06_ParamLimits

0x8271,	// (0x0006370c) wait_bar_pane_cp06

0xe9c8,	// (0x00069e63) main_mobtv_programe_curr_pane_t1

0xe9d6,	// (0x00069e71) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b76,	// (0x0005c011) main_mobtv_programe_curr_pane_t

0xe9e4,	// (0x00069e7f) main_mobtv_programe_next_pane_t1

0xe9f2,	// (0x00069e8d) main_mobtv_programe_next_pane_t2

0xea00,	// (0x00069e9b) main_mobtv_programe_next_pane_t3

0x0002,

0x0b7b,	// (0x0005c016) main_mobtv_programe_next_pane_t

0x9cc5,	// (0x00065160) bg_popup_mobtv_noti_window_pane

0xea0e,	// (0x00069ea9) popup_mobtv_noti_window_g1

0xea16,	// (0x00069eb1) popup_mobtv_noti_window_t1

0xea24,	// (0x00069ebf) popup_mobtv_noti_window_t2

0x0001,

0x0b82,	// (0x0005c01d) popup_mobtv_noti_window_t

0xd255,	// (0x000686f0) bg_popup_mobtv_noti_window_pane_g1

0x120f,	// (0x0005c6aa) sc_clock_pane

0x120f,	// (0x0005c6aa) main_fs_bigclock_pane

0x7848,	// (0x00062ce3) blid2_tripm_pane_t4_ParamLimits

0x7848,	// (0x00062ce3) blid2_tripm_pane_t4

0x827d,	// (0x00063718) sc_clock_pane_g1_ParamLimits

0x827d,	// (0x00063718) sc_clock_pane_g1

0x828b,	// (0x00063726) sc_clock_pane_t1_ParamLimits

0x828b,	// (0x00063726) sc_clock_pane_t1

0x829e,	// (0x00063739) sc_clock_pane_t2_ParamLimits

0x829e,	// (0x00063739) sc_clock_pane_t2

0x82b0,	// (0x0006374b) sc_clock_pane_t3_ParamLimits

0x82b0,	// (0x0006374b) sc_clock_pane_t3

0x0004,

0xf9b3,	// (0x0006ae4e) sc_clock_pane_t_ParamLimits

0xf9b3,	// (0x0006ae4e) sc_clock_pane_t

0x9288,	// (0x00064723) main_fs_bigclock_indicator_pane_ParamLimits

0x9288,	// (0x00064723) main_fs_bigclock_indicator_pane

0x834b,	// (0x000637e6) main_fs_bigclock_pane_g1_ParamLimits

0x834b,	// (0x000637e6) main_fs_bigclock_pane_g1

0x9294,	// (0x0006472f) main_fs_bigclock_pane_t1_ParamLimits

0x9294,	// (0x0006472f) main_fs_bigclock_pane_t1

0x92a6,	// (0x00064741) main_fs_bigclock_pane_t2_ParamLimits

0x92a6,	// (0x00064741) main_fs_bigclock_pane_t2

0x92ba,	// (0x00064755) main_fs_bigclock_pane_t3_ParamLimits

0x92ba,	// (0x00064755) main_fs_bigclock_pane_t3

0x0002,

0xfb6b,	// (0x0006b006) main_fs_bigclock_pane_t_ParamLimits

0xfb6b,	// (0x0006b006) main_fs_bigclock_pane_t

0x9fd3,	// (0x0006546e) main_fs_bigclock_indicator_pane_g1

0xe6de,	// (0x00069b79) ncim_query_content_pane_g2_ParamLimits

0xe6de,	// (0x00069b79) ncim_query_content_pane_g2

0x0001,

0xf983,	// (0x0006ae1e) ncim_query_content_pane_g_ParamLimits

0xf983,	// (0x0006ae1e) ncim_query_content_pane_g

0x82c4,	// (0x0006375f) sc_clock_pane_t4_ParamLimits

0x82c4,	// (0x0006375f) sc_clock_pane_t4

0x4509,	// (0x0005f9a4) main_radioblah_pane

0xdc12,	// (0x000690ad) cell_call4_button_pane_t1_copy1_ParamLimits

0xdc12,	// (0x000690ad) cell_call4_button_pane_t1_copy1

0x7f4b,	// (0x000633e6) main_ncimui_pane_t1_ParamLimits

0x7f4b,	// (0x000633e6) main_ncimui_pane_t1

0x7f65,	// (0x00063400) main_ncimui_pane_t2_ParamLimits

0x7f65,	// (0x00063400) main_ncimui_pane_t2

0x0002,

0xf97c,	// (0x0006ae17) main_ncimui_pane_t_ParamLimits

0xf97c,	// (0x0006ae17) main_ncimui_pane_t

0xeb5e,	// (0x00069ff9) main_radioblah_anim_pane_ParamLimits

0xeb5e,	// (0x00069ff9) main_radioblah_anim_pane

0xeb6f,	// (0x0006a00a) main_radioblah_info_pane_ParamLimits

0xeb6f,	// (0x0006a00a) main_radioblah_info_pane

0xeb83,	// (0x0006a01e) main_radioblah_pane_t1_ParamLimits

0xeb83,	// (0x0006a01e) main_radioblah_pane_t1

0xeb9f,	// (0x0006a03a) main_radioblah_pane_t2_ParamLimits

0xeb9f,	// (0x0006a03a) main_radioblah_pane_t2

0x0003,

0x0ba8,	// (0x0005c043) main_radioblah_pane_t_ParamLimits

0x0ba8,	// (0x0005c043) main_radioblah_pane_t

0x839d,	// (0x00063838) main_radioblah_rocker_ctrl_pane_ParamLimits

0x839d,	// (0x00063838) main_radioblah_rocker_ctrl_pane

0xebe7,	// (0x0006a082) main_radioblah_info_pane_t1_ParamLimits

0xebe7,	// (0x0006a082) main_radioblah_info_pane_t1

0x83e2,	// (0x0006387d) main_radioblah_info_pane_t2_ParamLimits

0x83e2,	// (0x0006387d) main_radioblah_info_pane_t2

0x0003,

0xf9be,	// (0x0006ae59) main_radioblah_info_pane_t_ParamLimits

0xf9be,	// (0x0006ae59) main_radioblah_info_pane_t

0xd255,	// (0x000686f0) main_radioblah_rocker_ctrl_pane_g1

0x8492,	// (0x0006392d) main_radioblah_rocker_ctrl_pane_g2

0x849a,	// (0x00063935) main_radioblah_rocker_ctrl_pane_g3

0x84a2,	// (0x0006393d) main_radioblah_rocker_ctrl_pane_g4

0x84aa,	// (0x00063945) main_radioblah_rocker_ctrl_pane_g5

0x84b2,	// (0x0006394d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9c7,	// (0x0006ae62) main_radioblah_rocker_ctrl_pane_g

0x7ef2,	// (0x0006338d) main_cset_text2_pane_t1_copy1_ParamLimits

0x63ec,	// (0x00061887) cam4_image_uncrop_qvga_pane

0x6541,	// (0x000619dc) vid4_image_uncrop_qcif_pane

0x79d6,	// (0x00062e71) cam6_image_uncrop_qvga_pane_ParamLimits

0x79d6,	// (0x00062e71) cam6_image_uncrop_qvga_pane

0xe3f3,	// (0x0006988e) vid6_image_uncrop_qcif_pane_ParamLimits

0xe3f3,	// (0x0006988e) vid6_image_uncrop_qcif_pane

0x9cc5,	// (0x00065160) bg_popup_preview_window_pane_cp03

0xe690,	// (0x00069b2b) list_cset_text2_pane

0xe698,	// (0x00069b33) main_cset6_text2_pane_g1

0xe6a0,	// (0x00069b3b) main_cset6_text2_pane_t1

0x84ba,	// (0x00063955) list_cset_text2_pane_t1_ParamLimits

0x84ba,	// (0x00063955) list_cset_text2_pane_t1

0x4509,	// (0x0005f9a4) main_radioblah_pane_ParamLimits

0x8223,	// (0x000636be) main_mobtv_info_pane_t3_ParamLimits

0x8223,	// (0x000636be) main_mobtv_info_pane_t3

0x838b,	// (0x00063826) main_radioblah_pane_g1

0x83b6,	// (0x00063851) main_radioblah_info_pane_g1

0x8437,	// (0x000638d2) main_radioblah_info_pane_t3_ParamLimits

0x8437,	// (0x000638d2) main_radioblah_info_pane_t3

0x3222,	// (0x0005e6bd) highlight_cell_cale_month_pane_ParamLimits

0x3222,	// (0x0005e6bd) highlight_cell_cale_month_pane

0x120f,	// (0x0005c6aa) main_phob_fisheye_pane

0xd5bd,	// (0x00068a58) scroll_pane_cp0031_ParamLimits

0xd5bd,	// (0x00068a58) scroll_pane_cp0031

0xe501,	// (0x0006999c) wait_bar_pane_cp08_ParamLimits

0x7be2,	// (0x0006307d) cset_list_set_pane_copy1_ParamLimits

0xec21,	// (0x0006a0bc) highlight_cell_cale_month_pane_g1

0x84d7,	// (0x00063972) highlight_cell_cale_month_pane_t1

0xe17b,	// (0x00069616) list_gen_pane_cp01

0xdddb,	// (0x00069276) scroll_pane_01

0x84e5,	// (0x00063980) list_single_double_fisheye_pane

0x84ee,	// (0x00063989) list_double_fisheye_pane_g1_ParamLimits

0x84ee,	// (0x00063989) list_double_fisheye_pane_g1

0x84fa,	// (0x00063995) list_double_fisheye_pane_g2_ParamLimits

0x84fa,	// (0x00063995) list_double_fisheye_pane_g2

0x850e,	// (0x000639a9) list_double_fisheye_pane_g3_ParamLimits

0x850e,	// (0x000639a9) list_double_fisheye_pane_g3

0x0004,

0xf9d4,	// (0x0006ae6f) list_double_fisheye_pane_g_ParamLimits

0xf9d4,	// (0x0006ae6f) list_double_fisheye_pane_g

0x8537,	// (0x000639d2) list_double_fisheye_pane_t1_ParamLimits

0x8537,	// (0x000639d2) list_double_fisheye_pane_t1

0x8552,	// (0x000639ed) list_double_fisheye_pane_t2_ParamLimits

0x8552,	// (0x000639ed) list_double_fisheye_pane_t2

0x0001,

0xf9df,	// (0x0006ae7a) list_double_fisheye_pane_t_ParamLimits

0xf9df,	// (0x0006ae7a) list_double_fisheye_pane_t

0x120f,	// (0x0005c6aa) main_call5_pane

0x82ea,	// (0x00063785) sc_swipe_pane_ParamLimits

0x82ea,	// (0x00063785) sc_swipe_pane

0x8580,	// (0x00063a1b) call5_image_pane_ParamLimits

0x8580,	// (0x00063a1b) call5_image_pane

0x8590,	// (0x00063a2b) call5_swipe_1_pane_ParamLimits

0x8590,	// (0x00063a2b) call5_swipe_1_pane

0x859c,	// (0x00063a37) call5_swipe_2_pane_ParamLimits

0x859c,	// (0x00063a37) call5_swipe_2_pane

0x85b6,	// (0x00063a51) popup_call5_audio_first_window_ParamLimits

0x85b6,	// (0x00063a51) popup_call5_audio_first_window

0xd4c1,	// (0x0006895c) call5_swipe_1_pane_g1_ParamLimits

0xd4c1,	// (0x0006895c) call5_swipe_1_pane_g1

0xec29,	// (0x0006a0c4) call5_swipe_1_pane_g2_ParamLimits

0xec29,	// (0x0006a0c4) call5_swipe_1_pane_g2

0x0001,

0x0bd7,	// (0x0005c072) call5_swipe_1_pane_g_ParamLimits

0x0bd7,	// (0x0005c072) call5_swipe_1_pane_g

0xec35,	// (0x0006a0d0) call5_swipe_1_pane_t1_ParamLimits

0xec35,	// (0x0006a0d0) call5_swipe_1_pane_t1

0xd4c1,	// (0x0006895c) call5_swipe_2_pane_g1_ParamLimits

0xd4c1,	// (0x0006895c) call5_swipe_2_pane_g1

0xec4a,	// (0x0006a0e5) call5_swipe_2_pane_g2_ParamLimits

0xec4a,	// (0x0006a0e5) call5_swipe_2_pane_g2

0x0001,

0x0bdc,	// (0x0005c077) call5_swipe_2_pane_g_ParamLimits

0x0bdc,	// (0x0005c077) call5_swipe_2_pane_g

0xec56,	// (0x0006a0f1) call5_swipe_2_pane_t1_ParamLimits

0xec56,	// (0x0006a0f1) call5_swipe_2_pane_t1

0xec6b,	// (0x0006a106) sc_swipe_pane_g1_ParamLimits

0xec6b,	// (0x0006a106) sc_swipe_pane_g1

0xec78,	// (0x0006a113) sc_swipe_pane_g2_ParamLimits

0xec78,	// (0x0006a113) sc_swipe_pane_g2

0x0001,

0x0be1,	// (0x0005c07c) sc_swipe_pane_g_ParamLimits

0x0be1,	// (0x0005c07c) sc_swipe_pane_g

0xec84,	// (0x0006a11f) sc_swipe_pane_t1_ParamLimits

0xec84,	// (0x0006a11f) sc_swipe_pane_t1

0x120f,	// (0x0005c6aa) main_cmail_launcher_pane

0x85c4,	// (0x00063a5f) aid_size_cell_cmail_l_ParamLimits

0x85c4,	// (0x00063a5f) aid_size_cell_cmail_l

0x85d4,	// (0x00063a6f) grid_cmail_l_pane_ParamLimits

0x85d4,	// (0x00063a6f) grid_cmail_l_pane

0x85e4,	// (0x00063a7f) cell_cmail_l_pane_ParamLimits

0x85e4,	// (0x00063a7f) cell_cmail_l_pane

0x85f8,	// (0x00063a93) cell_cmail_l_pane_g1_ParamLimits

0x85f8,	// (0x00063a93) cell_cmail_l_pane_g1

0x8604,	// (0x00063a9f) cell_cmail_l_pane_t1_ParamLimits

0x8604,	// (0x00063a9f) cell_cmail_l_pane_t1

0xec99,	// (0x0006a134) cell_cmail_l_pane_t2_ParamLimits

0xec99,	// (0x0006a134) cell_cmail_l_pane_t2

0x0001,

0xf9e4,	// (0x0006ae7f) cell_cmail_l_pane_t_ParamLimits

0xf9e4,	// (0x0006ae7f) cell_cmail_l_pane_t

0xa97d,	// (0x00065e18) grid_highlight_pane_cp018_ParamLimits

0xa97d,	// (0x00065e18) grid_highlight_pane_cp018

0x1065,	// (0x0005c500) main2_pane_ParamLimits

0x1065,	// (0x0005c500) main2_pane

0xaeb9,	// (0x00066354) popup_sp_fs_action_menu_bg_pane_g1

0xaec1,	// (0x0006635c) popup_sp_fs_action_menu_bg_pane_g2

0xaec9,	// (0x00066364) popup_sp_fs_action_menu_bg_pane_g3

0xaed1,	// (0x0006636c) popup_sp_fs_action_menu_bg_pane_g4

0xaed9,	// (0x00066374) popup_sp_fs_action_menu_bg_pane_g5

0xaee1,	// (0x0006637c) popup_sp_fs_action_menu_bg_pane_g6

0xaee9,	// (0x00066384) popup_sp_fs_action_menu_bg_pane_g7

0xaef1,	// (0x0006638c) popup_sp_fs_action_menu_bg_pane_g8

0xaef9,	// (0x00066394) popup_sp_fs_action_menu_bg_pane_g9

0xaf01,	// (0x0006639c) popup_sp_fs_action_menu_bg_pane_g10

0xaf01,	// (0x0006639c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0006a628) popup_sp_fs_action_menu_bg_pane_g

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g3_g1

0x2007,	// (0x0005d4a2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_t3_g3_g2

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0006a6d8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0006a6d8) list_medium_line_x2_t3_g3_g

0x201f,	// (0x0005d4ba) list_medium_line_x2_t3_g3_t1_ParamLimits

0x201f,	// (0x0005d4ba) list_medium_line_x2_t3_g3_t1

0x2034,	// (0x0005d4cf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2034,	// (0x0005d4cf) list_medium_line_x2_t3_g3_t2

0x2046,	// (0x0005d4e1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0006a6df) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0006a6df) list_medium_line_x2_t3_g3_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g2_g1

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0006a6e6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0006a6e6) list_medium_line_x2_t3_g2_g

0x205b,	// (0x0005d4f6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x205b,	// (0x0005d4f6) list_medium_line_x2_t3_g2_t1

0x2071,	// (0x0005d50c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2071,	// (0x0005d50c) list_medium_line_x2_t3_g2_t2

0x2083,	// (0x0005d51e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2083,	// (0x0005d51e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0006a6eb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0006a6eb) list_medium_line_x2_t3_g2_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t4_g4_g1

0x20a0,	// (0x0005d53b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x20a0,	// (0x0005d53b) list_medium_line_x2_t4_g4_g2

0x2007,	// (0x0005d4a2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_t4_g4_g3

0x20ac,	// (0x0005d547) list_medium_line_x2_t4_g4_g4_ParamLimits

0x20ac,	// (0x0005d547) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0006a6f2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0006a6f2) list_medium_line_x2_t4_g4_g

0x20b8,	// (0x0005d553) list_medium_line_x2_t4_g4_t1_ParamLimits

0x20b8,	// (0x0005d553) list_medium_line_x2_t4_g4_t1

0x20cf,	// (0x0005d56a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x20cf,	// (0x0005d56a) list_medium_line_x2_t4_g4_t2

0x20e4,	// (0x0005d57f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x20e4,	// (0x0005d57f) list_medium_line_x2_t4_g4_t3

0x20f6,	// (0x0005d591) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20f6,	// (0x0005d591) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0006a6fb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0006a6fb) list_medium_line_x2_t4_g4_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g4_g1

0x20a0,	// (0x0005d53b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x20a0,	// (0x0005d53b) list_medium_line_x2_t2_g4_g2

0x2007,	// (0x0005d4a2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_t2_g4_g3

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0006a762) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0006a762) list_medium_line_x2_t2_g4_g

0x3248,	// (0x0005e6e3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3248,	// (0x0005e6e3) list_medium_line_x2_t2_g4_t1

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0006a76b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0006a76b) list_medium_line_x2_t2_g4_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g3_g1

0x2007,	// (0x0005d4a2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_t2_g3_g2

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0006a6d8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0006a6d8) list_medium_line_x2_t2_g3_g

0x325d,	// (0x0005e6f8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x325d,	// (0x0005e6f8) list_medium_line_x2_t2_g3_t1

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0006a770) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0006a770) list_medium_line_x2_t2_g3_t

0x3418,	// (0x0005e8b3) main_sp_fs_list_pane_ParamLimits

0x3418,	// (0x0005e8b3) main_sp_fs_list_pane

0x3424,	// (0x0005e8bf) sp_fs_scroll_pane_ParamLimits

0x3424,	// (0x0005e8bf) sp_fs_scroll_pane

0x3430,	// (0x0005e8cb) list_medium_line_x2_t3_t1

0x3440,	// (0x0005e8db) list_medium_line_x2_t3_t2

0x344e,	// (0x0005e8e9) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0006a7bb) list_medium_line_x2_t3_t

0x345c,	// (0x0005e8f7) list_medium_line_x3_t4_t1

0x346c,	// (0x0005e907) list_medium_line_x3_t4_t2

0x347a,	// (0x0005e915) list_medium_line_x3_t4_t3

0x344e,	// (0x0005e8e9) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0006a7c2) list_medium_line_x3_t4_t

0x3488,	// (0x0005e923) list_medium_line_x4_t5_t1

0x3498,	// (0x0005e933) list_medium_line_x4_t5_t2

0x347a,	// (0x0005e915) list_medium_line_x4_t5_t3

0x34a6,	// (0x0005e941) list_medium_line_x4_t5_t4

0x344e,	// (0x0005e8e9) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0006a7cb) list_medium_line_x4_t5_t

0x1ffb,	// (0x0005d496) list_medium_line_t4_g4_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_t4_g4_g1

0x20ac,	// (0x0005d547) list_medium_line_t4_g4_g2_ParamLimits

0x20ac,	// (0x0005d547) list_medium_line_t4_g4_g2

0x34b4,	// (0x0005e94f) list_medium_line_t4_g4_g3_ParamLimits

0x34b4,	// (0x0005e94f) list_medium_line_t4_g4_g3

0x2013,	// (0x0005d4ae) list_medium_line_t4_g4_g4_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0006a7d6) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0006a7d6) list_medium_line_t4_g4_g

0x34c0,	// (0x0005e95b) list_medium_line_t4_g4_t1_ParamLimits

0x34c0,	// (0x0005e95b) list_medium_line_t4_g4_t1

0x34d5,	// (0x0005e970) list_medium_line_t4_g4_t2_ParamLimits

0x34d5,	// (0x0005e970) list_medium_line_t4_g4_t2

0x34ea,	// (0x0005e985) list_medium_line_t4_g4_t3_ParamLimits

0x34ea,	// (0x0005e985) list_medium_line_t4_g4_t3

0x2046,	// (0x0005d4e1) list_medium_line_t4_g4_t4_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0006a7df) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0006a7df) list_medium_line_t4_g4_t

0x3600,	// (0x0005ea9b) chi_dic_find_pane_g1

0x4525,	// (0x0005f9c0) main_tport_pane

0x6eff,	// (0x0006239a) list_medium_line_plain_t1

0x6fe9,	// (0x00062484) list_medium_line_t2_g2_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t2_g2_g1

0x6ff5,	// (0x00062490) list_medium_line_t2_g2_g2_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_t2_g2_g2

0x0001,

0xf809,	// (0x0006aca4) list_medium_line_t2_g2_g_ParamLimits

0xf809,	// (0x0006aca4) list_medium_line_t2_g2_g

0x7001,	// (0x0006249c) list_medium_line_t2_g2_t1_ParamLimits

0x7001,	// (0x0006249c) list_medium_line_t2_g2_t1

0x7018,	// (0x000624b3) list_medium_line_t2_g2_t2_ParamLimits

0x7018,	// (0x000624b3) list_medium_line_t2_g2_t2

0x0001,

0xf80e,	// (0x0006aca9) list_medium_line_t2_g2_t_ParamLimits

0xf80e,	// (0x0006aca9) list_medium_line_t2_g2_t

0x9e3e,	// (0x000652d9) aid_sp_fs_list_icon_a_sm

0x9e46,	// (0x000652e1) aid_sp_fs_list_icon_d

0x9e4e,	// (0x000652e9) aid_sp_fs_text_primary

0x9e57,	// (0x000652f2) aid_sp_fs_text_secondary

0x768a,	// (0x00062b25) list_medium_line

0x768a,	// (0x00062b25) list_medium_line_g2

0x768a,	// (0x00062b25) list_medium_line_g3

0x768a,	// (0x00062b25) list_medium_line_plain

0x768a,	// (0x00062b25) list_medium_line_plain_t2

0x768a,	// (0x00062b25) list_medium_line_plain_t3

0x768a,	// (0x00062b25) list_medium_line_right_icon

0x768a,	// (0x00062b25) list_medium_line_right_iconx2

0x768a,	// (0x00062b25) list_medium_line_t2

0x768a,	// (0x00062b25) list_medium_line_t2_g2

0x768a,	// (0x00062b25) list_medium_line_t2_g3

0x768a,	// (0x00062b25) list_medium_line_t2_right_icon

0x768a,	// (0x00062b25) list_medium_line_t2_right_iconx2

0x768a,	// (0x00062b25) list_medium_line_t3

0x768a,	// (0x00062b25) list_medium_line_t3_g2

0x768a,	// (0x00062b25) list_medium_line_t3_g3

0x768a,	// (0x00062b25) list_medium_line_t3_right_iconx2

0x7693,	// (0x00062b2e) list_medium_line_t4_g4

0x769c,	// (0x00062b37) list_medium_line_x2

0x769c,	// (0x00062b37) list_medium_line_x2_t2_g2

0x769c,	// (0x00062b37) list_medium_line_x2_t2_g3

0x769c,	// (0x00062b37) list_medium_line_x2_t2_g4

0x769c,	// (0x00062b37) list_medium_line_x2_t3

0x769c,	// (0x00062b37) list_medium_line_x2_t3_g2

0x769c,	// (0x00062b37) list_medium_line_x2_t3_g3

0x769c,	// (0x00062b37) list_medium_line_x2_t3_g4

0x769c,	// (0x00062b37) list_medium_line_x2_t4_g2

0x769c,	// (0x00062b37) list_medium_line_x2_t4_g4

0x76a5,	// (0x00062b40) list_medium_line_x3

0x76a5,	// (0x00062b40) list_medium_line_x3_t4

0x76a5,	// (0x00062b40) list_medium_line_x3_t4_g4

0x7693,	// (0x00062b2e) list_medium_line_x4_t4

0x7693,	// (0x00062b2e) list_medium_line_x4_t4_g7

0x7693,	// (0x00062b2e) list_medium_line_x4_t5

0x76ae,	// (0x00062b49) list_single_fs_dyc_pane_ParamLimits

0x76ae,	// (0x00062b49) list_single_fs_dyc_pane

0x1ffb,	// (0x0005d496) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x4_t4_g7_g1

0x7e21,	// (0x000632bc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e21,	// (0x000632bc) list_medium_line_x4_t4_g7_g2

0x7e2d,	// (0x000632c8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e2d,	// (0x000632c8) list_medium_line_x4_t4_g7_g3

0x7e3c,	// (0x000632d7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e3c,	// (0x000632d7) list_medium_line_x4_t4_g7_g4

0x7e48,	// (0x000632e3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e48,	// (0x000632e3) list_medium_line_x4_t4_g7_g5

0x7e57,	// (0x000632f2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e57,	// (0x000632f2) list_medium_line_x4_t4_g7_g6

0x7e66,	// (0x00063301) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e66,	// (0x00063301) list_medium_line_x4_t4_g7_g7

0x0006,

0xf95d,	// (0x0006adf8) list_medium_line_x4_t4_g7_g_ParamLimits

0xf95d,	// (0x0006adf8) list_medium_line_x4_t4_g7_g

0x7e72,	// (0x0006330d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e72,	// (0x0006330d) list_medium_line_x4_t4_g7_t1

0x7e87,	// (0x00063322) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e87,	// (0x00063322) list_medium_line_x4_t4_g7_t2

0x7e9c,	// (0x00063337) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e9c,	// (0x00063337) list_medium_line_x4_t4_g7_t3

0x7eb1,	// (0x0006334c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7eb1,	// (0x0006334c) list_medium_line_x4_t4_g7_t4

0x7ec3,	// (0x0006335e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ec3,	// (0x0006335e) list_medium_line_x4_t4_g7_t5

0x0004,

0xf96c,	// (0x0006ae07) list_medium_line_x4_t4_g7_t_ParamLimits

0xf96c,	// (0x0006ae07) list_medium_line_x4_t4_g7_t

0x7ed5,	// (0x00063370) list_single_dyc_row_pane_ParamLimits

0x7ed5,	// (0x00063370) list_single_dyc_row_pane

0x8574,	// (0x00063a0f) call5_gesture_pane_ParamLimits

0x8574,	// (0x00063a0f) call5_gesture_pane

0x85a8,	// (0x00063a43) call5_windows_pane_ParamLimits

0x85a8,	// (0x00063a43) call5_windows_pane

0x861a,	// (0x00063ab5) call5_swipe_1_pane_cp_ParamLimits

0x861a,	// (0x00063ab5) call5_swipe_1_pane_cp

0x8626,	// (0x00063ac1) call5_swipe_2_pane_cp_ParamLimits

0x8626,	// (0x00063ac1) call5_swipe_2_pane_cp

0xba44,	// (0x00066edf) call5_image_pane_cp

0x8632,	// (0x00063acd) popup_call5_audio_first_window_cp_ParamLimits

0x8632,	// (0x00063acd) popup_call5_audio_first_window_cp

0xec6b,	// (0x0006a106) call5_swipe_1_pane_g1_cp_ParamLimits

0xec6b,	// (0x0006a106) call5_swipe_1_pane_g1_cp

0xecab,	// (0x0006a146) call5_swipe_1_pane_g2_cp

0xec84,	// (0x0006a11f) call5_swipe_1_pane_t1_cp_ParamLimits

0xec84,	// (0x0006a11f) call5_swipe_1_pane_t1_cp

0xec6b,	// (0x0006a106) call5_swipe_2_pane_g1_cp_ParamLimits

0xec6b,	// (0x0006a106) call5_swipe_2_pane_g1_cp

0xecb3,	// (0x0006a14e) call5_swipe_2_pane_g2_cp

0xecbb,	// (0x0006a156) call5_swipe_2_pane_t1_cp_ParamLimits

0xecbb,	// (0x0006a156) call5_swipe_2_pane_t1_cp

0xa97d,	// (0x00065e18) main_sp_fs_email_pane

0xecd0,	// (0x0006a16b) main_sp_fs_listscroll_pane_te

0x8640,	// (0x00063adb) popup_sp_fs_action_menu_pane_ParamLimits

0x8640,	// (0x00063adb) popup_sp_fs_action_menu_pane

0xd255,	// (0x000686f0) bg_sp_fs_ctrlbar_pane_g1

0xd834,	// (0x00068ccf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd846,	// (0x00068ce1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd83d,	// (0x00068cd8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd255,	// (0x000686f0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0beb,	// (0x0005c086) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd03a,	// (0x000684d5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd03a,	// (0x000684d5) bg_sp_fs_ctrlbar_ddmenu_pane

0xecd9,	// (0x0006a174) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xecd9,	// (0x0006a174) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xece5,	// (0x0006a180) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xece5,	// (0x0006a180) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bf4,	// (0x0005c08f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bf4,	// (0x0005c08f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xecf1,	// (0x0006a18c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xecf1,	// (0x0006a18c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8682,	// (0x00063b1d) list_medium_line_t2_right_icon_g1

0x868a,	// (0x00063b25) list_medium_line_t2_right_icon_t1

0x869a,	// (0x00063b35) list_medium_line_t2_right_icon_t2

0x0001,

0xf9e9,	// (0x0006ae84) list_medium_line_t2_right_icon_t

0xce41,	// (0x000682dc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xce41,	// (0x000682dc) bg_sp_fs_ctrlbar_pane

0x86ff,	// (0x00063b9a) main_sp_fs_ctrlbar_button_pane_cp01

0x8707,	// (0x00063ba2) main_sp_fs_ctrlbar_ddmenu_pane

0xed43,	// (0x0006a1de) main_sp_fs_ctrlbar_pane_g1

0xed4f,	// (0x0006a1ea) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bfe,	// (0x0005c099) main_sp_fs_ctrlbar_pane_g

0xed5b,	// (0x0006a1f6) main_sp_fs_ctrlbar_pane_t1

0x8711,	// (0x00063bac) main_sp_fs_ctrlbar_pane

0x8727,	// (0x00063bc2) main_sp_fs_listscroll_pane_te_cp01

0x8738,	// (0x00063bd3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8738,	// (0x00063bd3) popup_sp_fs_action_menu_pane_cp01

0xa97d,	// (0x00065e18) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa97d,	// (0x00065e18) bg_sp_fs_highlight_list_pane_cp01

0x9e60,	// (0x000652fb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9e60,	// (0x000652fb) sp_fs_action_menu_list_gene_pane_g1

0xed8b,	// (0x0006a226) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xed8b,	// (0x0006a226) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf9ee,	// (0x0006ae89) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf9ee,	// (0x0006ae89) sp_fs_action_menu_list_gene_pane_g

0x9e6f,	// (0x0006530a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9e6f,	// (0x0006530a) sp_fs_action_menu_list_gene_pane_t1

0x9e87,	// (0x00065322) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9e87,	// (0x00065322) sp_fs_action_menu_list_gene_pane

0xed98,	// (0x0006a233) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xed98,	// (0x0006a233) popup_sp_fs_action_menu_bg_pane

0xa687,	// (0x00065b22) sp_fs_action_menu_list_pane_ParamLimits

0xa687,	// (0x00065b22) sp_fs_action_menu_list_pane

0x8762,	// (0x00063bfd) sp_fs_scroll_pane_cp01_ParamLimits

0x8762,	// (0x00063bfd) sp_fs_scroll_pane_cp01

0x8788,	// (0x00063c23) list_medium_line_plain_t2_t1

0x8798,	// (0x00063c33) list_medium_line_plain_t2_t2

0x0001,

0xf9f3,	// (0x0006ae8e) list_medium_line_plain_t2_t

0x87a6,	// (0x00063c41) list_medium_line_plain_t3_t1

0x87b6,	// (0x00063c51) list_medium_line_plain_t3_t2

0x87c4,	// (0x00063c5f) list_medium_line_plain_t3_t3

0x0002,

0xf9f8,	// (0x0006ae93) list_medium_line_plain_t3_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t2_g2_g1

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0006a6e6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0006a6e6) list_medium_line_x2_t2_g2_g

0x34c0,	// (0x0005e95b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x34c0,	// (0x0005e95b) list_medium_line_x2_t2_g2_t1

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf9ff,	// (0x0006ae9a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf9ff,	// (0x0006ae9a) list_medium_line_x2_t2_g2_t

0x1ffb,	// (0x0005d496) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t4_g2_g1

0x87d2,	// (0x00063c6d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87d2,	// (0x00063c6d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa04,	// (0x0006ae9f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa04,	// (0x0006ae9f) list_medium_line_x2_t4_g2_g

0x87e3,	// (0x00063c7e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87e3,	// (0x00063c7e) list_medium_line_x2_t4_g2_t1

0x87fd,	// (0x00063c98) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87fd,	// (0x00063c98) list_medium_line_x2_t4_g2_t2

0x8812,	// (0x00063cad) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8812,	// (0x00063cad) list_medium_line_x2_t4_g2_t3

0x2046,	// (0x0005d4e1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa09,	// (0x0006aea4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa09,	// (0x0006aea4) list_medium_line_x2_t4_g2_t

0x8827,	// (0x00063cc2) list_medium_line_t3_right_iconx2_g1

0x8682,	// (0x00063b1d) list_medium_line_t3_right_iconx2_g2

0x882f,	// (0x00063cca) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa12,	// (0x0006aead) list_medium_line_t3_right_iconx2_g

0x8837,	// (0x00063cd2) list_medium_line_t3_right_iconx2_t1

0x8847,	// (0x00063ce2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa19,	// (0x0006aeb4) list_medium_line_t3_right_iconx2_t

0x1ffb,	// (0x0005d496) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x3_t4_g4_g1

0x2007,	// (0x0005d4a2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x3_t4_g4_g2

0x20ac,	// (0x0005d547) list_medium_line_x3_t4_g4_g3_ParamLimits

0x20ac,	// (0x0005d547) list_medium_line_x3_t4_g4_g3

0x8855,	// (0x00063cf0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8855,	// (0x00063cf0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa1e,	// (0x0006aeb9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa1e,	// (0x0006aeb9) list_medium_line_x3_t4_g4_g

0x8861,	// (0x00063cfc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8861,	// (0x00063cfc) list_medium_line_x3_t4_g4_t1

0x8878,	// (0x00063d13) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8878,	// (0x00063d13) list_medium_line_x3_t4_g4_t2

0x34d5,	// (0x0005e970) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34d5,	// (0x0005e970) list_medium_line_x3_t4_g4_t3

0x888d,	// (0x00063d28) list_medium_line_x3_t4_g4_t4_ParamLimits

0x888d,	// (0x00063d28) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa27,	// (0x0006aec2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa27,	// (0x0006aec2) list_medium_line_x3_t4_g4_t

0x88aa,	// (0x00063d45) list_single_dyc_row_text_pane_t1_ParamLimits

0x88aa,	// (0x00063d45) list_single_dyc_row_text_pane_t1

0x88e1,	// (0x00063d7c) list_single_dyc_row_text_pane_t2_ParamLimits

0x88e1,	// (0x00063d7c) list_single_dyc_row_text_pane_t2

0xa6a7,	// (0x00065b42) list_single_dyc_row_text_pane_t3_ParamLimits

0xa6a7,	// (0x00065b42) list_single_dyc_row_text_pane_t3

0x0005,

0xfa30,	// (0x0006aecb) list_single_dyc_row_text_pane_t_ParamLimits

0xfa30,	// (0x0006aecb) list_single_dyc_row_text_pane_t

0xa6cb,	// (0x00065b66) list_single_dyc_row_pane_g1_ParamLimits

0xa6cb,	// (0x00065b66) list_single_dyc_row_pane_g1

0xa6d7,	// (0x00065b72) list_single_dyc_row_pane_g2_ParamLimits

0xa6d7,	// (0x00065b72) list_single_dyc_row_pane_g2

0xa6e3,	// (0x00065b7e) list_single_dyc_row_pane_g3_ParamLimits

0xa6e3,	// (0x00065b7e) list_single_dyc_row_pane_g3

0xa6ef,	// (0x00065b8a) list_single_dyc_row_pane_g4_ParamLimits

0xa6ef,	// (0x00065b8a) list_single_dyc_row_pane_g4

0x0003,

0xfa3d,	// (0x0006aed8) list_single_dyc_row_pane_g_ParamLimits

0xfa3d,	// (0x0006aed8) list_single_dyc_row_pane_g

0xa6fb,	// (0x00065b96) list_single_dyc_row_text_pane_ParamLimits

0xa6fb,	// (0x00065b96) list_single_dyc_row_text_pane

0x9cc5,	// (0x00065160) bg_sp_fs_scroll_pane

0xeda6,	// (0x0006a241) thumb_sp_fs_scroll_pane

0x6fe9,	// (0x00062484) list_medium_line_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_g1

0x8a04,	// (0x00063e9f) list_medium_line_t1_ParamLimits

0x8a04,	// (0x00063e9f) list_medium_line_t1

0x1ffb,	// (0x0005d496) list_medium_line_x2_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_g1

0x2007,	// (0x0005d4a2) list_medium_line_x2_g2_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_g2

0x0001,

0xfa46,	// (0x0006aee1) list_medium_line_x2_g_ParamLimits

0xfa46,	// (0x0006aee1) list_medium_line_x2_g

0xa71a,	// (0x00065bb5) list_medium_line_x2_t1_ParamLimits

0xa71a,	// (0x00065bb5) list_medium_line_x2_t1

0x1ffb,	// (0x0005d496) list_medium_line_x3_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x3_g1

0x2007,	// (0x0005d4a2) list_medium_line_x3_g2_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x3_g2

0x0001,

0xfa46,	// (0x0006aee1) list_medium_line_x3_g_ParamLimits

0xfa46,	// (0x0006aee1) list_medium_line_x3_g

0xa71a,	// (0x00065bb5) list_medium_line_x3_t1_ParamLimits

0xa71a,	// (0x00065bb5) list_medium_line_x3_t1

0xedaf,	// (0x0006a24a) thumb_sp_fs_scroll_pane_g1

0xedb8,	// (0x0006a253) thumb_sp_fs_scroll_pane_g2

0xedc1,	// (0x0006a25c) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c65,	// (0x0005c100) thumb_sp_fs_scroll_pane_g

0xedaf,	// (0x0006a24a) bg_sp_fs_scroll_pane_g1

0xedb8,	// (0x0006a253) bg_sp_fs_scroll_pane_g2

0xedc1,	// (0x0006a25c) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c65,	// (0x0005c100) bg_sp_fs_scroll_pane_g

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ffb,	// (0x0005d496) list_medium_line_x2_t3_g4_g1

0x20a0,	// (0x0005d53b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x20a0,	// (0x0005d53b) list_medium_line_x2_t3_g4_g2

0x2007,	// (0x0005d4a2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2007,	// (0x0005d4a2) list_medium_line_x2_t3_g4_g3

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2013,	// (0x0005d4ae) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0006a762) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0006a762) list_medium_line_x2_t3_g4_g

0x8a19,	// (0x00063eb4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a19,	// (0x00063eb4) list_medium_line_x2_t3_g4_t1

0x8a2f,	// (0x00063eca) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a2f,	// (0x00063eca) list_medium_line_x2_t3_g4_t2

0x2046,	// (0x0005d4e1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2046,	// (0x0005d4e1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa4b,	// (0x0006aee6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa4b,	// (0x0006aee6) list_medium_line_x2_t3_g4_t

0x6fe9,	// (0x00062484) list_medium_line_g2_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_g2_g1

0x6ff5,	// (0x00062490) list_medium_line_g2_g2_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_g2_g2

0x0001,

0xf809,	// (0x0006aca4) list_medium_line_g2_g_ParamLimits

0xf809,	// (0x0006aca4) list_medium_line_g2_g

0x8a49,	// (0x00063ee4) list_medium_line_g2_t1_ParamLimits

0x8a49,	// (0x00063ee4) list_medium_line_g2_t1

0x6fe9,	// (0x00062484) list_medium_line_t3_g2_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t3_g2_g1

0x6ff5,	// (0x00062490) list_medium_line_t3_g2_g2_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_t3_g2_g2

0x0001,

0xf809,	// (0x0006aca4) list_medium_line_t3_g2_g_ParamLimits

0xf809,	// (0x0006aca4) list_medium_line_t3_g2_g

0x8a5e,	// (0x00063ef9) list_medium_line_t3_g2_t1_ParamLimits

0x8a5e,	// (0x00063ef9) list_medium_line_t3_g2_t1

0x8a78,	// (0x00063f13) list_medium_line_t3_g2_t2_ParamLimits

0x8a78,	// (0x00063f13) list_medium_line_t3_g2_t2

0x8a8d,	// (0x00063f28) list_medium_line_t3_g2_t3_ParamLimits

0x8a8d,	// (0x00063f28) list_medium_line_t3_g2_t3

0x0002,

0xfa52,	// (0x0006aeed) list_medium_line_t3_g2_t_ParamLimits

0xfa52,	// (0x0006aeed) list_medium_line_t3_g2_t

0x8682,	// (0x00063b1d) list_medium_line_right_icon_g1

0x8aa3,	// (0x00063f3e) list_medium_line_right_icon_t1

0x6fe9,	// (0x00062484) list_medium_line_t2_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t2_g1

0x8ab1,	// (0x00063f4c) list_medium_line_t2_t1_ParamLimits

0x8ab1,	// (0x00063f4c) list_medium_line_t2_t1

0x8acb,	// (0x00063f66) list_medium_line_t2_t2_ParamLimits

0x8acb,	// (0x00063f66) list_medium_line_t2_t2

0x0001,

0xfa59,	// (0x0006aef4) list_medium_line_t2_t_ParamLimits

0xfa59,	// (0x0006aef4) list_medium_line_t2_t

0x6fe9,	// (0x00062484) list_medium_line_t3_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t3_g1

0x8ae0,	// (0x00063f7b) list_medium_line_t3_t1_ParamLimits

0x8ae0,	// (0x00063f7b) list_medium_line_t3_t1

0x8af7,	// (0x00063f92) list_medium_line_t3_t2_ParamLimits

0x8af7,	// (0x00063f92) list_medium_line_t3_t2

0x8b0c,	// (0x00063fa7) list_medium_line_t3_t3_ParamLimits

0x8b0c,	// (0x00063fa7) list_medium_line_t3_t3

0x0002,

0xfa5e,	// (0x0006aef9) list_medium_line_t3_t_ParamLimits

0xfa5e,	// (0x0006aef9) list_medium_line_t3_t

0x6fe9,	// (0x00062484) list_medium_line_g3_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_g3_g1

0x8b1e,	// (0x00063fb9) list_medium_line_g3_g2_ParamLimits

0x8b1e,	// (0x00063fb9) list_medium_line_g3_g2

0x6ff5,	// (0x00062490) list_medium_line_g3_g3_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_g3_g3

0x0002,

0xfa65,	// (0x0006af00) list_medium_line_g3_g_ParamLimits

0xfa65,	// (0x0006af00) list_medium_line_g3_g

0x8b2a,	// (0x00063fc5) list_medium_line_g3_t1_ParamLimits

0x8b2a,	// (0x00063fc5) list_medium_line_g3_t1

0x6fe9,	// (0x00062484) list_medium_line_t2_g3_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t2_g3_g1

0x8b1e,	// (0x00063fb9) list_medium_line_t2_g3_g2_ParamLimits

0x8b1e,	// (0x00063fb9) list_medium_line_t2_g3_g2

0x6ff5,	// (0x00062490) list_medium_line_t2_g3_g3_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_t2_g3_g3

0x0002,

0xfa65,	// (0x0006af00) list_medium_line_t2_g3_g_ParamLimits

0xfa65,	// (0x0006af00) list_medium_line_t2_g3_g

0x8b3f,	// (0x00063fda) list_medium_line_t2_g3_t1_ParamLimits

0x8b3f,	// (0x00063fda) list_medium_line_t2_g3_t1

0x8b59,	// (0x00063ff4) list_medium_line_t2_g3_t2_ParamLimits

0x8b59,	// (0x00063ff4) list_medium_line_t2_g3_t2

0x0001,

0xfa6c,	// (0x0006af07) list_medium_line_t2_g3_t_ParamLimits

0xfa6c,	// (0x0006af07) list_medium_line_t2_g3_t

0x6fe9,	// (0x00062484) list_medium_line_t3_g3_g1_ParamLimits

0x6fe9,	// (0x00062484) list_medium_line_t3_g3_g1

0x8b1e,	// (0x00063fb9) list_medium_line_t3_g3_g2_ParamLimits

0x8b1e,	// (0x00063fb9) list_medium_line_t3_g3_g2

0x6ff5,	// (0x00062490) list_medium_line_t3_g3_g3_ParamLimits

0x6ff5,	// (0x00062490) list_medium_line_t3_g3_g3

0x0002,

0xfa65,	// (0x0006af00) list_medium_line_t3_g3_g_ParamLimits

0xfa65,	// (0x0006af00) list_medium_line_t3_g3_g

0x8b6e,	// (0x00064009) list_medium_line_t3_g3_t1_ParamLimits

0x8b6e,	// (0x00064009) list_medium_line_t3_g3_t1

0x8b87,	// (0x00064022) list_medium_line_t3_g3_t2_ParamLimits

0x8b87,	// (0x00064022) list_medium_line_t3_g3_t2

0x8b9d,	// (0x00064038) list_medium_line_t3_g3_t3_ParamLimits

0x8b9d,	// (0x00064038) list_medium_line_t3_g3_t3

0x0002,

0xfa71,	// (0x0006af0c) list_medium_line_t3_g3_t_ParamLimits

0xfa71,	// (0x0006af0c) list_medium_line_t3_g3_t

0x8827,	// (0x00063cc2) list_medium_line_right_iconx2_g1

0x8682,	// (0x00063b1d) list_medium_line_right_iconx2_g2

0x0001,

0xfa78,	// (0x0006af13) list_medium_line_right_iconx2_g

0x8bb3,	// (0x0006404e) list_medium_line_right_iconx2_t1

0x8827,	// (0x00063cc2) list_medium_line_t2_right_iconx2_g1

0x8682,	// (0x00063b1d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa78,	// (0x0006af13) list_medium_line_t2_right_iconx2_g

0x8bc1,	// (0x0006405c) list_medium_line_t2_right_iconx2_t1

0x8bd1,	// (0x0006406c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa7d,	// (0x0006af18) list_medium_line_t2_right_iconx2_t

0x8bdf,	// (0x0006407a) list_medium_line_x4_t4_t1

0x8bed,	// (0x00064088) list_medium_line_x4_t4_t2

0x8bfd,	// (0x00064098) list_medium_line_x4_t4_t3

0x8c0d,	// (0x000640a8) list_medium_line_x4_t4_t4

0x0003,

0xfa82,	// (0x0006af1d) list_medium_line_x4_t4_t

0x8c47,	// (0x000640e2) tport_appsw_pane_ParamLimits

0x8c47,	// (0x000640e2) tport_appsw_pane

0x8c55,	// (0x000640f0) tport_contact_pane_ParamLimits

0x8c55,	// (0x000640f0) tport_contact_pane

0x8c65,	// (0x00064100) tport_listscroll_pane_ParamLimits

0x8c65,	// (0x00064100) tport_listscroll_pane

0x8c75,	// (0x00064110) cell_tport_appsw_pane_ParamLimits

0x8c75,	// (0x00064110) cell_tport_appsw_pane

0xd546,	// (0x000689e1) tport_appsw_pane_g1_ParamLimits

0xd546,	// (0x000689e1) tport_appsw_pane_g1

0xedca,	// (0x0006a265) tport_contact_pane_g1

0xe764,	// (0x00069bff) tport_contact_pane_t1

0xedd3,	// (0x0006a26e) tport_contact_pane_t2

0x0001,

0x0cac,	// (0x0005c147) tport_contact_pane_t

0xede1,	// (0x0006a27c) list_tport_pane

0xedea,	// (0x0006a285) scroll_pane_cp_030

0x8ca8,	// (0x00064143) cell_tport_appsw_pane_g1

0x8cb8,	// (0x00064153) cell_tport_appsw_pane_t1

0x8cc6,	// (0x00064161) grid_highlight_pane_cp019

0x8cce,	// (0x00064169) list_tport_double_graphic_pane_ParamLimits

0x8cce,	// (0x00064169) list_tport_double_graphic_pane

0xa97d,	// (0x00065e18) list_highlight_pane_cp023_ParamLimits

0xa97d,	// (0x00065e18) list_highlight_pane_cp023

0x8cdf,	// (0x0006417a) list_tport_double_graphic_pane_g1_ParamLimits

0x8cdf,	// (0x0006417a) list_tport_double_graphic_pane_g1

0x8cec,	// (0x00064187) list_tport_double_graphic_pane_t1_ParamLimits

0x8cec,	// (0x00064187) list_tport_double_graphic_pane_t1

0x8d01,	// (0x0006419c) list_tport_double_graphic_pane_t2_ParamLimits

0x8d01,	// (0x0006419c) list_tport_double_graphic_pane_t2

0x0001,

0xfa92,	// (0x0006af2d) list_tport_double_graphic_pane_t_ParamLimits

0xfa92,	// (0x0006af2d) list_tport_double_graphic_pane_t

0x9cc5,	// (0x00065160) main_cale_note_pane

0x67a6,	// (0x00061c41) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67a6,	// (0x00061c41) cell_vitu2_function_top_wide_pane_cp01

0x8237,	// (0x000636d2) wait_bar_pane_cp05_ParamLimits

0xa97d,	// (0x00065e18) listscroll_cmail_pane

0xedf3,	// (0x0006a28e) list_cmail_pane

0x8d13,	// (0x000641ae) list_cmail_body_pane

0x8d33,	// (0x000641ce) list_single_cmail_header_caption_pane

0x8d5f,	// (0x000641fa) list_single_cmail_header_detail_pane_ParamLimits

0x8d5f,	// (0x000641fa) list_single_cmail_header_detail_pane

0xee03,	// (0x0006a29e) list_single_cmail_header_caption_pane_t1

0x8d9e,	// (0x00064239) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d9e,	// (0x00064239) list_single_cmail_header_detail_pane_g1

0xa730,	// (0x00065bcb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa730,	// (0x00065bcb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa97,	// (0x0006af32) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa97,	// (0x0006af32) list_single_cmail_header_detail_pane_g

0x8db4,	// (0x0006424f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8db4,	// (0x0006424f) list_single_cmail_header_detail_pane_t1

0x8df0,	// (0x0006428b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8df0,	// (0x0006428b) list_single_cmail_header_editor_pane_bg

0xe925,	// (0x00069dc0) list_cmail_body_pane_g1

0xee1e,	// (0x0006a2b9) list_cmail_body_pane_t1

0xdcc1,	// (0x0006915c) list_single_cmail_header_editor_pane_bg_g1

0xb237,	// (0x000666d2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdcd1,	// (0x0006916c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdcc9,	// (0x00069164) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdf00,	// (0x0006939b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdcf1,	// (0x0006918c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdce1,	// (0x0006917c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdce9,	// (0x00069184) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb217,	// (0x000666b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e07,	// (0x000642a2) calenote_gesture_pane_ParamLimits

0x8e07,	// (0x000642a2) calenote_gesture_pane

0x8e21,	// (0x000642bc) calenote_window_pane_ParamLimits

0x8e21,	// (0x000642bc) calenote_window_pane

0xee2c,	// (0x0006a2c7) popup_note_window_cp01

0x8e39,	// (0x000642d4) calenote_swipe_1_pane_ParamLimits

0x8e39,	// (0x000642d4) calenote_swipe_1_pane

0x8626,	// (0x00063ac1) calenote_swipe_2_pane_ParamLimits

0x8626,	// (0x00063ac1) calenote_swipe_2_pane

0xec6b,	// (0x0006a106) calenote_swipe_1_pane_g1_ParamLimits

0xec6b,	// (0x0006a106) calenote_swipe_1_pane_g1

0xec78,	// (0x0006a113) calenote_swipe_1_pane_g2_ParamLimits

0xec78,	// (0x0006a113) calenote_swipe_1_pane_g2

0x0001,

0x0be1,	// (0x0005c07c) calenote_swipe_1_pane_g_ParamLimits

0x0be1,	// (0x0005c07c) calenote_swipe_1_pane_g

0xee3e,	// (0x0006a2d9) calenote_swipe_1_pane_t1_ParamLimits

0xee3e,	// (0x0006a2d9) calenote_swipe_1_pane_t1

0xec6b,	// (0x0006a106) calenote_swipe_2_pane_g1_ParamLimits

0xec6b,	// (0x0006a106) calenote_swipe_2_pane_g1

0xee5d,	// (0x0006a2f8) calenote_swipe_2_pane_g2_ParamLimits

0xee5d,	// (0x0006a2f8) calenote_swipe_2_pane_g2

0x0001,

0xfaa3,	// (0x0006af3e) calenote_swipe_2_pane_g_ParamLimits

0xfaa3,	// (0x0006af3e) calenote_swipe_2_pane_g

0xee69,	// (0x0006a304) calenote_swipe_2_pane_t1_ParamLimits

0xee69,	// (0x0006a304) calenote_swipe_2_pane_t1

0x9cc5,	// (0x00065160) main_mup_navstr_pane

0x5501,	// (0x0006099c) main_mup3_pane_t7_ParamLimits

0x5501,	// (0x0006099c) main_mup3_pane_t7

0x5f06,	// (0x000613a1) main_mp4_pane_g6_ParamLimits

0x5f06,	// (0x000613a1) main_mp4_pane_g6

0x6286,	// (0x00061721) main_image3_pane_t4_ParamLimits

0x6286,	// (0x00061721) main_image3_pane_t4

0x8e4c,	// (0x000642e7) popup_navstr_preview_pane_ParamLimits

0x8e4c,	// (0x000642e7) popup_navstr_preview_pane

0x8e58,	// (0x000642f3) scroll_navstr_pane_ParamLimits

0x8e58,	// (0x000642f3) scroll_navstr_pane

0x9cc5,	// (0x00065160) bg_popup_preview_window_pane_cp04

0xee90,	// (0x0006a32b) popup_navstr_preview_pane_t1

0x8e64,	// (0x000642ff) scroll_navstr_pane_g1_ParamLimits

0x8e64,	// (0x000642ff) scroll_navstr_pane_g1

0x8e71,	// (0x0006430c) scroll_navstr_pane_t1_ParamLimits

0x8e71,	// (0x0006430c) scroll_navstr_pane_t1

0xee35,	// (0x0006a2d0) bg_button_pane_cp014

0xee35,	// (0x0006a2d0) bg_button_pane_cp030

0x851a,	// (0x000639b5) list_double_fisheye_pane_g4_ParamLimits

0x851a,	// (0x000639b5) list_double_fisheye_pane_g4

0x8526,	// (0x000639c1) list_double_fisheye_pane_g5_ParamLimits

0x8526,	// (0x000639c1) list_double_fisheye_pane_g5

0xcfae,	// (0x00068449) sp_fs_scroll_pane_cp03

0xed43,	// (0x0006a1de) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xed4f,	// (0x0006a1ea) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bfe,	// (0x0005c099) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xed5b,	// (0x0006a1f6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xedfb,	// (0x0006a296) sp_fs_scroll_pane_cp02

0xaf24,	// (0x000663bf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaf24,	// (0x000663bf) popup_sp_fs_calendar_preview_list_single_pane

0x9cc5,	// (0x00065160) main_cam6_pano_pane

0x4509,	// (0x0005f9a4) main_mup3_pane_ParamLimits

0x9cc5,	// (0x00065160) main_phacti_pane

0x810c,	// (0x000635a7) bg_button_pane_cp11

0x8124,	// (0x000635bf) main_mobtv_info_pane_g2_ParamLimits

0x8124,	// (0x000635bf) main_mobtv_info_pane_g2

0x0001,

0xf9a0,	// (0x0006ae3b) main_mobtv_info_pane_g_ParamLimits

0xf9a0,	// (0x0006ae3b) main_mobtv_info_pane_g

0x82d6,	// (0x00063771) sc_clock_pane_t5_ParamLimits

0x82d6,	// (0x00063771) sc_clock_pane_t5

0x838b,	// (0x00063826) main_radioblah_pane_g1_ParamLimits

0xebb7,	// (0x0006a052) main_radioblah_pane_t3_ParamLimits

0xebb7,	// (0x0006a052) main_radioblah_pane_t3

0xebcf,	// (0x0006a06a) main_radioblah_pane_t4_ParamLimits

0xebcf,	// (0x0006a06a) main_radioblah_pane_t4

0x83a9,	// (0x00063844) main_radioblah_text_pane_ParamLimits

0x83a9,	// (0x00063844) main_radioblah_text_pane

0x83b6,	// (0x00063851) main_radioblah_info_pane_g1_ParamLimits

0x844b,	// (0x000638e6) main_radioblah_info_pane_t4_ParamLimits

0x844b,	// (0x000638e6) main_radioblah_info_pane_t4

0xa97d,	// (0x00065e18) main_sp_fs_calendar_pane

0x8e83,	// (0x0006431e) main_phacti_pane_g1

0x8e8b,	// (0x00064326) phacti_note_pane_ParamLimits

0x8e8b,	// (0x00064326) phacti_note_pane

0xeea7,	// (0x0006a342) phacti_term_pane_ParamLimits

0xeea7,	// (0x0006a342) phacti_term_pane

0xeebc,	// (0x0006a357) phacti_note_pane_t1_ParamLimits

0xeebc,	// (0x0006a357) phacti_note_pane_t1

0xa760,	// (0x00065bfb) phacti_term_pane_g1

0xa768,	// (0x00065c03) phacti_term_pane_t1_ParamLimits

0xa768,	// (0x00065c03) phacti_term_pane_t1

0xeed3,	// (0x0006a36e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb038,	// (0x000664d3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfaad,	// (0x0006af48) popup_sp_fs_calendar_preview_list_single_pane_g

0xeedb,	// (0x0006a376) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeedb,	// (0x0006a376) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeef0,	// (0x0006a38b) aid_popup_sp_fs_bg_corner_pane

0xd255,	// (0x000686f0) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cc5,	// (0x00065160) popup_sp_fs_calendar_preview_bg_pane

0xeef8,	// (0x0006a393) popup_sp_fs_calendar_preview_list_pane

0xce41,	// (0x000682dc) bg_main_sp_fs_cale_pane_ParamLimits

0xce41,	// (0x000682dc) bg_main_sp_fs_cale_pane

0xa79b,	// (0x00065c36) listscroll_cale_mrui_pane_ParamLimits

0xa79b,	// (0x00065c36) listscroll_cale_mrui_pane

0xa7b0,	// (0x00065c4b) listscroll_sp_fs_schedule_track_pane

0xa7b9,	// (0x00065c54) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7b9,	// (0x00065c54) main_sp_fs_ctrlbar_pane_cp01

0xef00,	// (0x0006a39b) main_sp_fs_ribbon_pane

0xa7cc,	// (0x00065c67) popup_sp_fs_cale_preview_window

0x8eee,	// (0x00064389) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8eee,	// (0x00064389) list_single_sp_fs_schedule_track_pane

0xe8c8,	// (0x00069d63) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe8c8,	// (0x00069d63) bg_sp_fs_highlight_list_pane_cp03

0x8f11,	// (0x000643ac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f11,	// (0x000643ac) list_single_sp_fs_schedule_track_pane_g1

0x8f1d,	// (0x000643b8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f1d,	// (0x000643b8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfab2,	// (0x0006af4d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfab2,	// (0x0006af4d) list_single_sp_fs_schedule_track_pane_g

0x8f29,	// (0x000643c4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f29,	// (0x000643c4) list_single_sp_fs_schedule_track_pane_t1

0x8f41,	// (0x000643dc) sp_fs_schedule_track_pane_ParamLimits

0x8f41,	// (0x000643dc) sp_fs_schedule_track_pane

0xef08,	// (0x0006a3a3) sp_fs_schedule_track_pane_g1

0xef10,	// (0x0006a3ab) sp_fs_schedule_track_pane_g2

0xef18,	// (0x0006a3b3) sp_fs_schedule_track_pane_g3

0xef20,	// (0x0006a3bb) sp_fs_schedule_track_pane_g4

0xef28,	// (0x0006a3c3) sp_fs_schedule_track_pane_g5

0x0004,

0xfab7,	// (0x0006af52) sp_fs_schedule_track_pane_g

0xdcc1,	// (0x0006915c) bg_sp_fs_schedule_viewer_highlight_g1

0xb237,	// (0x000666d2) bg_sp_fs_schedule_viewer_highlight_g2

0xdcc9,	// (0x00069164) bg_sp_fs_schedule_viewer_highlight_g3

0xdcd1,	// (0x0006916c) bg_sp_fs_schedule_viewer_highlight_g4

0xdf00,	// (0x0006939b) bg_sp_fs_schedule_viewer_highlight_g5

0xdce1,	// (0x0006917c) bg_sp_fs_schedule_viewer_highlight_g6

0xdce9,	// (0x00069184) bg_sp_fs_schedule_viewer_highlight_g7

0xdcf1,	// (0x0006918c) bg_sp_fs_schedule_viewer_highlight_g8

0xb217,	// (0x000666b2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfac2,	// (0x0006af5d) bg_sp_fs_schedule_viewer_highlight_g

0x9cc5,	// (0x00065160) bg_main_sp_fs_ribbon_pane

0x8f51,	// (0x000643ec) main_sp_fs_ribbon_pane_g1

0xef30,	// (0x0006a3cb) main_sp_fs_ribbon_pane_t1

0x8f5a,	// (0x000643f5) main_sp_fs_ribbon_pane_t2

0xef3f,	// (0x0006a3da) main_sp_fs_ribbon_pane_t3

0x0002,

0xfad5,	// (0x0006af70) main_sp_fs_ribbon_pane_t

0xef4e,	// (0x0006a3e9) main_sp_fs_ribbon_scheduler_pane

0xef56,	// (0x0006a3f1) bg_main_sp_fs_ribbon_pane_g1

0xef5f,	// (0x0006a3fa) bg_main_sp_fs_ribbon_pane_g2

0xef68,	// (0x0006a403) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfadc,	// (0x0006af77) bg_main_sp_fs_ribbon_pane_g

0xef70,	// (0x0006a40b) main_sp_fs_ribbon_scheduler_pane_g1

0xef79,	// (0x0006a414) main_sp_fs_ribbon_scheduler_pane_g2

0xef82,	// (0x0006a41d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfae3,	// (0x0006af7e) main_sp_fs_ribbon_scheduler_pane_g

0xef8b,	// (0x0006a426) list_cale_mrui_pane

0x8f69,	// (0x00064404) sp_fs_scroll_pane_cp07_ParamLimits

0x8f69,	// (0x00064404) sp_fs_scroll_pane_cp07

0x8f85,	// (0x00064420) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f85,	// (0x00064420) bg_sp_fs_schedule_viewer_highlight

0xef98,	// (0x0006a433) list_single_sp_fs_schedule_track_pane_cp01

0xefa0,	// (0x0006a43b) list_sp_fs_schedule_track_pane

0xefa8,	// (0x0006a443) sp_fs_scroll_pane_cp06_ParamLimits

0xefa8,	// (0x0006a443) sp_fs_scroll_pane_cp06

0xd255,	// (0x000686f0) bgmain_sp_fs_calendar_pane_g1

0x8f92,	// (0x0006442d) list_single_cale_mrui_pane_ParamLimits

0x8f92,	// (0x0006442d) list_single_cale_mrui_pane

0xa7de,	// (0x00065c79) list_single_cale_mrui_row_pane_ParamLimits

0xa7de,	// (0x00065c79) list_single_cale_mrui_row_pane

0xa7eb,	// (0x00065c86) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa7eb,	// (0x00065c86) list_single_cale_mrui_row_pane_g1

0xa823,	// (0x00065cbe) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa823,	// (0x00065cbe) list_single_cale_mrui_row_pane_t1

0x8fc0,	// (0x0006445b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fc0,	// (0x0006445b) list_single_cale_mrui_row_pane_t2

0xa835,	// (0x00065cd0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa835,	// (0x00065cd0) list_single_cale_mrui_row_pane_t3

0xa864,	// (0x00065cff) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa864,	// (0x00065cff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfaf1,	// (0x0006af8c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfaf1,	// (0x0006af8c) list_single_cale_mrui_row_pane_t

0x9026,	// (0x000644c1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9026,	// (0x000644c1) list_single_cmail_header_editor_pane_bg_cp01

0x9046,	// (0x000644e1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9046,	// (0x000644e1) list_single_cmail_header_editor_pane_bg_cp02

0x9062,	// (0x000644fd) main_radioblah_text_pane_t1_ParamLimits

0x9062,	// (0x000644fd) main_radioblah_text_pane_t1

0xefc7,	// (0x0006a462) cam6_indi_pane_cp01

0xefcf,	// (0x0006a46a) cam6_mode_pane_cp01

0xefd7,	// (0x0006a472) cam6_pano_pane

0xefe0,	// (0x0006a47b) cam6_zoom_pane_cp01

0xefe8,	// (0x0006a483) cam6_pano_image_pane

0xeff3,	// (0x0006a48e) cam6_pano_pane_g1

0xe925,	// (0x00069dc0) cam6_pano_pane_g2

0xeffc,	// (0x0006a497) cam6_pano_pane_g3

0xf00d,	// (0x0006a4a8) cam6_pano_pane_g4

0xd821,	// (0x00068cbc) cam6_pano_pane_g5

0xf016,	// (0x0006a4b1) cam6_pano_pane_g6

0xf005,	// (0x0006a4a0) cam6_pano_pane_g7

0xf020,	// (0x0006a4bb) cam6_pano_pane_g8

0xf029,	// (0x0006a4c4) cam6_pano_pane_g9

0x0008,

0xfafa,	// (0x0006af95) cam6_pano_pane_g

0x9cc5,	// (0x00065160) main_browser_tag_pane

0xee88,	// (0x0006a323) grid_navstr_albumart_pane

0xf034,	// (0x0006a4cf) cell_navstr_albumart_pane_ParamLimits

0xf034,	// (0x0006a4cf) cell_navstr_albumart_pane

0xf054,	// (0x0006a4ef) cell_navstr_albumart_pane_g1

0xcc52,	// (0x000680ed) cell_navstr_albumart_pane_g2

0xcc62,	// (0x000680fd) cell_navstr_albumart_pane_g3

0xcc5a,	// (0x000680f5) cell_navstr_albumart_pane_g4

0x0003,

0xfb0d,	// (0x0006afa8) cell_navstr_albumart_pane_g

0x907d,	// (0x00064518) bt_list_pane_ParamLimits

0x907d,	// (0x00064518) bt_list_pane

0x909d,	// (0x00064538) bt_list_pane_t1

0x90ac,	// (0x00064547) bt_list_pane_t2

0x0001,

0xfb16,	// (0x0006afb1) bt_list_pane_t

0x9cc5,	// (0x00065160) main_cale_prevew_pane

0x90bb,	// (0x00064556) popup_cale_preview_window_ParamLimits

0x90bb,	// (0x00064556) popup_cale_preview_window

0xa97d,	// (0x00065e18) bg_popup_preview_window_pane_cp05_ParamLimits

0xa97d,	// (0x00065e18) bg_popup_preview_window_pane_cp05

0xf05c,	// (0x0006a4f7) list_cale_preview_pane_ParamLimits

0xf05c,	// (0x0006a4f7) list_cale_preview_pane

0x90d4,	// (0x0006456f) list_double_cale_preview_pane_ParamLimits

0x90d4,	// (0x0006456f) list_double_cale_preview_pane

0x90e6,	// (0x00064581) list_single_cale_preview_pane_ParamLimits

0x90e6,	// (0x00064581) list_single_cale_preview_pane

0x90fc,	// (0x00064597) list_single_cale_preview_pane_g1

0x9104,	// (0x0006459f) list_single_cale_preview_pane_t1_ParamLimits

0x9104,	// (0x0006459f) list_single_cale_preview_pane_t1

0x9119,	// (0x000645b4) list_double_cale_preview_pane_g1

0x9121,	// (0x000645bc) list_double_cale_preview_pane_t1_ParamLimits

0x9121,	// (0x000645bc) list_double_cale_preview_pane_t1

0x9136,	// (0x000645d1) list_double_cale_preview_pane_t2_ParamLimits

0x9136,	// (0x000645d1) list_double_cale_preview_pane_t2

0x0001,

0xfb1b,	// (0x0006afb6) list_double_cale_preview_pane_t_ParamLimits

0xfb1b,	// (0x0006afb6) list_double_cale_preview_pane_t

0x9cc5,	// (0x00065160) main_ezdial_pane

0xa97d,	// (0x00065e18) main_sp_fs_email_pane_ParamLimits

0x86a8,	// (0x00063b43) cmail_ddmenu_btn01_pane_ParamLimits

0x86a8,	// (0x00063b43) cmail_ddmenu_btn01_pane

0x86c5,	// (0x00063b60) cmail_ddmenu_btn02_pane_ParamLimits

0x86c5,	// (0x00063b60) cmail_ddmenu_btn02_pane

0x86e3,	// (0x00063b7e) cmail_ddmenu_btn03_pane_ParamLimits

0x86e3,	// (0x00063b7e) cmail_ddmenu_btn03_pane

0x8711,	// (0x00063bac) main_sp_fs_ctrlbar_pane_ParamLimits

0x8727,	// (0x00063bc2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d13,	// (0x000641ae) list_cmail_body_pane_ParamLimits

0x8d95,	// (0x00064230) bg_button_pane_cp12

0xee11,	// (0x0006a2ac) list_single_cmail_header_detail_pane_g3_ParamLimits

0xee11,	// (0x0006a2ac) list_single_cmail_header_detail_pane_g3

0xa73c,	// (0x00065bd7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa73c,	// (0x00065bd7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa9e,	// (0x0006af39) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa9e,	// (0x0006af39) list_single_cmail_header_detail_pane_t

0xa77d,	// (0x00065c18) phacti_term_pane_t2_ParamLimits

0xa77d,	// (0x00065c18) phacti_term_pane_t2

0x0001,

0xfaa8,	// (0x0006af43) phacti_term_pane_t_ParamLimits

0xfaa8,	// (0x0006af43) phacti_term_pane_t

0xf068,	// (0x0006a503) aid_size_list_single_double

0x914e,	// (0x000645e9) popup_ezdial_listscroll_window

0x916f,	// (0x0006460a) popup_number_entry_window_cp01

0xba44,	// (0x00066edf) bg_popup_call_pane_cp09

0xf074,	// (0x0006a50f) ezdial_list_pane

0xf07c,	// (0x0006a517) scroll_pane_cp23

0xd03a,	// (0x000684d5) bg_button_pane_cp028_ParamLimits

0xd03a,	// (0x000684d5) bg_button_pane_cp028

0x917d,	// (0x00064618) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x917d,	// (0x00064618) cmail_ddmenu_btn01_pane_g1

0x918d,	// (0x00064628) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x918d,	// (0x00064628) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb20,	// (0x0006afbb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb20,	// (0x0006afbb) cmail_ddmenu_btn01_pane_g

0xf084,	// (0x0006a51f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xf084,	// (0x0006a51f) cmail_ddmenu_btn01_pane_t1

0xce41,	// (0x000682dc) bg_button_pane_cp029_ParamLimits

0xce41,	// (0x000682dc) bg_button_pane_cp029

0x9199,	// (0x00064634) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9199,	// (0x00064634) cmail_ddmenu_btn02_pane_g1

0x91b1,	// (0x0006464c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91b1,	// (0x0006464c) cmail_ddmenu_btn02_pane_t1

0xe8c8,	// (0x00069d63) bg_button_pane_cp031_ParamLimits

0xe8c8,	// (0x00069d63) bg_button_pane_cp031

0x9199,	// (0x00064634) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9199,	// (0x00064634) cmail_ddmenu_btn03_pane_g1

0x91b1,	// (0x0006464c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91b1,	// (0x0006464c) cmail_ddmenu_btn03_pane_t1

0x6123,	// (0x000615be) cell_dialer2_keypad_pane_t1_ParamLimits

0x613d,	// (0x000615d8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x613d,	// (0x000615d8) cell_dialer2_keypad_pane_t1_copy1

0x7f91,	// (0x0006342c) ncimui_group_button_pane

0xa97d,	// (0x00065e18) main_sp_fs_calendar_pane_ParamLimits

0x8d33,	// (0x000641ce) list_single_cmail_header_caption_pane_ParamLimits

0xa792,	// (0x00065c2d) aid_recal_txt_sm_pane

0x9cc5,	// (0x00065160) mian_recal_day_pane

0xa7cc,	// (0x00065c67) popup_sp_fs_cale_preview_window_ParamLimits

0xf09a,	// (0x0006a535) list_recal_day_pane

0xa8ae,	// (0x00065d49) list_single_recal_day_pane_ParamLimits

0xa8ae,	// (0x00065d49) list_single_recal_day_pane

0xf0c1,	// (0x0006a55c) list_single_recal_day_pane_g1_ParamLimits

0xf0c1,	// (0x0006a55c) list_single_recal_day_pane_g1

0xa8c0,	// (0x00065d5b) list_single_recal_day_pane_g2_ParamLimits

0xa8c0,	// (0x00065d5b) list_single_recal_day_pane_g2

0xa8d0,	// (0x00065d6b) list_single_recal_day_pane_g3_ParamLimits

0xa8d0,	// (0x00065d6b) list_single_recal_day_pane_g3

0x91d5,	// (0x00064670) list_single_recal_day_pane_g4_ParamLimits

0x91d5,	// (0x00064670) list_single_recal_day_pane_g4

0xa8dc,	// (0x00065d77) list_single_recal_day_pane_g5_ParamLimits

0xa8dc,	// (0x00065d77) list_single_recal_day_pane_g5

0xa8ec,	// (0x00065d87) list_single_recal_day_pane_g6_ParamLimits

0xa8ec,	// (0x00065d87) list_single_recal_day_pane_g6

0x0004,

0xfb2f,	// (0x0006afca) list_single_recal_day_pane_g_ParamLimits

0xfb2f,	// (0x0006afca) list_single_recal_day_pane_g

0xa900,	// (0x00065d9b) list_single_recal_day_pane_t1

0xa912,	// (0x00065dad) list_single_recal_day_pane_t2

0x0001,

0xfb3a,	// (0x0006afd5) list_single_recal_day_pane_t

0x91f5,	// (0x00064690) ncimui_query_button_pane_ParamLimits

0x91f5,	// (0x00064690) ncimui_query_button_pane

0x9205,	// (0x000646a0) ncimui_query_button_pane_t1_ParamLimits

0x9205,	// (0x000646a0) ncimui_query_button_pane_t1

0x9ea6,	// (0x00065341) ncimui_query_button_pane_t2_ParamLimits

0x9ea6,	// (0x00065341) ncimui_query_button_pane_t2

0x0001,

0xfb3f,	// (0x0006afda) ncimui_query_button_pane_t_ParamLimits

0xfb3f,	// (0x0006afda) ncimui_query_button_pane_t

0x9218,	// (0x000646b3) query_button_pane_ParamLimits

0x9218,	// (0x000646b3) query_button_pane

0x9cc5,	// (0x00065160) bg_button_pane_cp0028

0x9eb9,	// (0x00065354) query_button_pane_t1

0x4525,	// (0x0005f9c0) main_tport_pane_ParamLimits

0x8c1d,	// (0x000640b8) bg_popup_window_pane_cp01_ParamLimits

0x8c1d,	// (0x000640b8) bg_popup_window_pane_cp01

0x8c2b,	// (0x000640c6) heading_pane_cp08_ParamLimits

0x8c2b,	// (0x000640c6) heading_pane_cp08

0x8c39,	// (0x000640d4) heading_pane_cp07_ParamLimits

0x8c39,	// (0x000640d4) heading_pane_cp07

0x8ca8,	// (0x00064143) cell_tport_appsw_pane_g2

0x0002,

0xfa8b,	// (0x0006af26) cell_tport_appsw_pane_g

0x9ccf,	// (0x0006516a) input_candi_list_open_g1

0xb3fa,	// (0x00066895) list_cale_time_pane_g6_ParamLimits

0xb3fa,	// (0x00066895) list_cale_time_pane_g6

0x4fa2,	// (0x0006043d) aid_size_touch_calib_1_ParamLimits

0x4fa2,	// (0x0006043d) aid_size_touch_calib_1

0x4fae,	// (0x00060449) aid_size_touch_calib_2_ParamLimits

0x4fae,	// (0x00060449) aid_size_touch_calib_2

0x4fbc,	// (0x00060457) aid_size_touch_calib_3_ParamLimits

0x4fbc,	// (0x00060457) aid_size_touch_calib_3

0x4fcc,	// (0x00060467) aid_size_touch_calib_4_ParamLimits

0x4fcc,	// (0x00060467) aid_size_touch_calib_4

0x4fda,	// (0x00060475) main_touch_calib_button_group_pane_ParamLimits

0x4fda,	// (0x00060475) main_touch_calib_button_group_pane

0x4fe8,	// (0x00060483) main_touch_calib_pane_g1_ParamLimits

0x4ff4,	// (0x0006048f) main_touch_calib_pane_g2_ParamLimits

0x5000,	// (0x0006049b) main_touch_calib_pane_g3_ParamLimits

0x500c,	// (0x000604a7) main_touch_calib_pane_g4_ParamLimits

0xf5f7,	// (0x0006aa92) main_touch_calib_pane_g_ParamLimits

0x5018,	// (0x000604b3) main_touch_calib_pane_t1_ParamLimits

0x5031,	// (0x000604cc) main_touch_calib_pane_t2_ParamLimits

0x504a,	// (0x000604e5) main_touch_calib_pane_t3_ParamLimits

0x5060,	// (0x000604fb) main_touch_calib_pane_t4_ParamLimits

0x5076,	// (0x00060511) main_touch_calib_pane_t5_ParamLimits

0xf600,	// (0x0006aa9b) main_touch_calib_pane_t_ParamLimits

0xd5e1,	// (0x00068a7c) list_single_fp_cale_pane_g3_ParamLimits

0xd5e1,	// (0x00068a7c) list_single_fp_cale_pane_g3

0x4509,	// (0x0005f9a4) bg_button_pane_cp012_ParamLimits

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp03_ParamLimits

0x6f69,	// (0x00062404) cell_vitu2_function_top_pane_g1_ParamLimits

0x4509,	// (0x0005f9a4) bg_vkb2_func_pane_cp04_ParamLimits

0x7f19,	// (0x000633b4) main_ncimui_button_group_pane_ParamLimits

0x7f19,	// (0x000633b4) main_ncimui_button_group_pane

0x7f7f,	// (0x0006341a) main_ncimui_pane_t3_ParamLimits

0x7f7f,	// (0x0006341a) main_ncimui_pane_t3

0xee9e,	// (0x0006a339) phacti_button_group_pane

0xf068,	// (0x0006a503) aid_size_list_single_double_ParamLimits

0x914e,	// (0x000645e9) popup_ezdial_listscroll_window_ParamLimits

0x916f,	// (0x0006460a) popup_number_entry_window_cp01_ParamLimits

0x9225,	// (0x000646c0) phacti_button_pane_ParamLimits

0x9225,	// (0x000646c0) phacti_button_pane

0x9cc5,	// (0x00065160) bg_button_pane_cp14

0x9ec7,	// (0x00065362) phacti_button_pane_t1

0x9236,	// (0x000646d1) main_touch_calib_button_pane_ParamLimits

0x9236,	// (0x000646d1) main_touch_calib_button_pane

0xae20,	// (0x000662bb) bg_button_pane_cp18_ParamLimits

0xae20,	// (0x000662bb) bg_button_pane_cp18

0x9ed5,	// (0x00065370) main_touch_calib_button_pane_t1_ParamLimits

0x9ed5,	// (0x00065370) main_touch_calib_button_pane_t1

0x9eeb,	// (0x00065386) main_touch_calib_button_pane_t2_ParamLimits

0x9eeb,	// (0x00065386) main_touch_calib_button_pane_t2

0x0001,

0xfb44,	// (0x0006afdf) main_touch_calib_button_pane_t_ParamLimits

0xfb44,	// (0x0006afdf) main_touch_calib_button_pane_t

0x9cc5,	// (0x00065160) cell_ncimui_button_pane

0x9cc5,	// (0x00065160) bg_button_pane_cp032

0x9f09,	// (0x000653a4) cell_ncimui_button_pane_t1

0x6199,	// (0x00061634) image3_infobar_pane_ParamLimits

0x6199,	// (0x00061634) image3_infobar_pane

0x82f8,	// (0x00063793) fs_bigclock_status_pane_ParamLimits

0x82f8,	// (0x00063793) fs_bigclock_status_pane

0x8305,	// (0x000637a0) main_fs_bigclock_clock_pane_ParamLimits

0x8305,	// (0x000637a0) main_fs_bigclock_clock_pane

0x8329,	// (0x000637c4) main_fs_bigclock_indi_pane_ParamLimits

0x8329,	// (0x000637c4) main_fs_bigclock_indi_pane

0x8359,	// (0x000637f4) main_fs_bigclock_swipe_pane_ParamLimits

0x8359,	// (0x000637f4) main_fs_bigclock_swipe_pane

0x9cc5,	// (0x00065160) main_fs_clock_dumped_data

0xea32,	// (0x00069ecd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xea32,	// (0x00069ecd) list_single_fs_bigclock_indicator_pane_g1

0xea4c,	// (0x00069ee7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xea4c,	// (0x00069ee7) list_single_fs_bigclock_indicator_pane_g2

0xea66,	// (0x00069f01) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xea66,	// (0x00069f01) list_single_fs_bigclock_indicator_pane_g3

0xea80,	// (0x00069f1b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xea80,	// (0x00069f1b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b92,	// (0x0005c02d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b92,	// (0x0005c02d) list_single_fs_bigclock_indicator_pane_g

0xeaa9,	// (0x00069f44) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xeaa9,	// (0x00069f44) list_single_fs_bigclock_indicator_pane_t1

0xead1,	// (0x00069f6c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xead1,	// (0x00069f6c) list_single_fs_bigclock_indicator_pane_t2

0xeaf9,	// (0x00069f94) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xeaf9,	// (0x00069f94) list_single_fs_bigclock_indicator_pane_t3

0xeb21,	// (0x00069fbc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xeb21,	// (0x00069fbc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b9d,	// (0x0005c038) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b9d,	// (0x0005c038) list_single_fs_bigclock_indicator_pane_t

0x9f17,	// (0x000653b2) image3_infobar_fav_pane_ParamLimits

0x9f17,	// (0x000653b2) image3_infobar_fav_pane

0x9f27,	// (0x000653c2) image3_infobar_loc_pane_ParamLimits

0x9f27,	// (0x000653c2) image3_infobar_loc_pane

0x9f3b,	// (0x000653d6) image3_infobar_time_pane_ParamLimits

0x9f3b,	// (0x000653d6) image3_infobar_time_pane

0xd255,	// (0x000686f0) image3_infobar_time_pane_g1

0x9f4b,	// (0x000653e6) image3_infobar_time_pane_t1

0xd255,	// (0x000686f0) image3_infobar_loc_pane_g1

0x9f59,	// (0x000653f4) image3_infobar_loc_pane_g2

0x0001,

0xfb49,	// (0x0006afe4) image3_infobar_loc_pane_g

0x9f61,	// (0x000653fc) image3_infobar_loc_pane_t1

0xd255,	// (0x000686f0) image3_infobar_fav_pane_g1

0x9f6f,	// (0x0006540a) image3_infobar_fav_pane_g2

0x0001,

0xfb4e,	// (0x0006afe9) image3_infobar_fav_pane_g

0x9f77,	// (0x00065412) fs_bigclock_status_battery_pane

0x9f80,	// (0x0006541b) fs_bigclock_status_signal_pane

0x9f89,	// (0x00065424) fs_bigclock_status_title_pane

0x9f92,	// (0x0006542d) fs_bigclock_status_signal_pane_g1

0x9f9b,	// (0x00065436) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb53,	// (0x0006afee) fs_bigclock_status_signal_pane_g

0x9fa3,	// (0x0006543e) fs_bigclock_status_battery_pane_g1

0x9fac,	// (0x00065447) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb58,	// (0x0006aff3) fs_bigclock_status_battery_pane_g

0x9fb4,	// (0x0006544f) fs_bigclock_status_title_pane_t1

0xd255,	// (0x000686f0) main_fs_bigclock_clock_pane_g1

0x9246,	// (0x000646e1) main_fs_bigclock_clock_pane_g2

0x9246,	// (0x000646e1) main_fs_bigclock_clock_pane_g3

0x9246,	// (0x000646e1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb5d,	// (0x0006aff8) main_fs_bigclock_clock_pane_g

0x924e,	// (0x000646e9) main_fs_bigclock_clock_pane_t1

0x925c,	// (0x000646f7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb66,	// (0x0006b001) main_fs_bigclock_clock_pane_t

0x9fc2,	// (0x0006545d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9fc2,	// (0x0006545d) list_single_fs_bigclock_indicator_pane

0x926b,	// (0x00064706) list_single_fs_bigclock_pane_ParamLimits

0x926b,	// (0x00064706) list_single_fs_bigclock_pane

0x9fdc,	// (0x00065477) main_fs_bigclock_indicator_pane_t1

0x9feb,	// (0x00065486) list_single_fs_bigclock_pane_g1

0x9ff3,	// (0x0006548e) list_single_fs_bigclock_pane_t1

0xd255,	// (0x000686f0) main_fs_bigclock_swipe_pane_g1

0xa036,	// (0x000654d1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb77,	// (0x0006b012) main_fs_bigclock_swipe_pane_g

0xa03e,	// (0x000654d9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa03e,	// (0x000654d9) main_fs_bigclock_swipe_pane_t1

0x34ff,	// (0x0005e99a) call_type_pane_ParamLimits

0x9cc5,	// (0x00065160) main_btmg_pane

0xa817,	// (0x00065cb2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa817,	// (0x00065cb2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfaea,	// (0x0006af85) list_single_cale_mrui_row_pane_g_ParamLimits

0xfaea,	// (0x0006af85) list_single_cale_mrui_row_pane_g

0xa89d,	// (0x00065d38) list_recal_vselct_arw_lo_pane

0xf0b9,	// (0x0006a554) list_recal_vselct_arw_up_pane

0xa8a5,	// (0x00065d40) list_recal_vselct_pane

0x92cc,	// (0x00064767) btmg_button_pane

0x92d8,	// (0x00064773) main_btmg_pane_g1

0x9cc5,	// (0x00065160) bg_button_pane_cp044

0xa05b,	// (0x000654f6) btmg_button_pane_t1

0xce2d,	// (0x000682c8) aid_listscroll_gen

0xa97d,	// (0x00065e18) main_cntbar_detail_pane

0xedf3,	// (0x0006a28e) list_cmail_folder_pane

0xcfae,	// (0x00068449) sp_fs_scroll_pane_cp03_ParamLimits

0x92e0,	// (0x0006477b) list_single_fs_dyc_pane_cp01_ParamLimits

0x92e0,	// (0x0006477b) list_single_fs_dyc_pane_cp01

0xa069,	// (0x00065504) aid_size_cmail_indent

0xa924,	// (0x00065dbf) list_single_dyc_row_pane_cp01

0x932f,	// (0x000647ca) cntbar_detail_list_pane_ParamLimits

0x932f,	// (0x000647ca) cntbar_detail_list_pane

0x9369,	// (0x00064804) main_cntbar_detail_cont_pane_ParamLimits

0x9369,	// (0x00064804) main_cntbar_detail_cont_pane

0x3424,	// (0x0005e8bf) scroll_pane_cp032_ParamLimits

0x3424,	// (0x0005e8bf) scroll_pane_cp032

0x9375,	// (0x00064810) cntbar_detail_list_event_pane_ParamLimits

0x9375,	// (0x00064810) cntbar_detail_list_event_pane

0x933b,	// (0x000647d6) cntbar_detail_list_shct_pane

0xb285,	// (0x00066720) aid_list_gen

0xa072,	// (0x0006550d) aid_scroll

0xa07b,	// (0x00065516) aid_size_touch_scroll_bar

0x769c,	// (0x00062b37) aid_list_double

0x9389,	// (0x00064824) aid_list_single

0x768a,	// (0x00062b25) aid_list_single_lg

0x9392,	// (0x0006482d) aid_list_z_g_a_sm

0x939a,	// (0x00064835) aid_list_z_g_d

0x93a2,	// (0x0006483d) aid_txt_z_prm

0x93b0,	// (0x0006484b) aid_txt_z_prm_cp01

0x93be,	// (0x00064859) aid_txt_z_sec

0x93cc,	// (0x00064867) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93cc,	// (0x00064867) main_cntbar_detail_cont_pane_g1

0x93d9,	// (0x00064874) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93d9,	// (0x00064874) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb7c,	// (0x0006b017) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb7c,	// (0x0006b017) main_cntbar_detail_cont_pane_g

0xa084,	// (0x0006551f) main_cntbar_detail_cont_pane_t1

0xa092,	// (0x0006552d) main_cntbar_detail_cont_pane_t2

0xa0a0,	// (0x0006553b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb81,	// (0x0006b01c) main_cntbar_detail_cont_pane_t

0x93e5,	// (0x00064880) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93e5,	// (0x00064880) cell_cntbar_detail_list_shct_pane

0xa0ae,	// (0x00065549) cntbar_detail_list_shct_pane_g1

0xa0b7,	// (0x00065552) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb88,	// (0x0006b023) cntbar_detail_list_shct_pane_g

0x93f9,	// (0x00064894) cntbar_detail_list_event_pane_g1_ParamLimits

0x93f9,	// (0x00064894) cntbar_detail_list_event_pane_g1

0x9405,	// (0x000648a0) cntbar_detail_list_event_pane_g2_ParamLimits

0x9405,	// (0x000648a0) cntbar_detail_list_event_pane_g2

0x0005,

0xfb8d,	// (0x0006b028) cntbar_detail_list_event_pane_g_ParamLimits

0xfb8d,	// (0x0006b028) cntbar_detail_list_event_pane_g

0x9471,	// (0x0006490c) cntbar_detail_list_event_pane_t1_ParamLimits

0x9471,	// (0x0006490c) cntbar_detail_list_event_pane_t1

0x9486,	// (0x00064921) cntbar_detail_list_event_pane_t2_ParamLimits

0x9486,	// (0x00064921) cntbar_detail_list_event_pane_t2

0x0002,

0xfb9a,	// (0x0006b035) cntbar_detail_list_event_pane_t_ParamLimits

0xfb9a,	// (0x0006b035) cntbar_detail_list_event_pane_t

0xd255,	// (0x000686f0) cell_cntbar_detail_list_shct_pane_g1

0xb9fc,	// (0x00066e97) navi_pane_mv_g3

0xa97d,	// (0x00065e18) main_cntbar_detail_pane_ParamLimits

0x9cc5,	// (0x00065160) main_notif_wgt_pane

0x5e4d,	// (0x000612e8) aid_tch_main_mp4_pane_g4

0x6082,	// (0x0006151d) popup_slider_window_cp02

0xa893,	// (0x00065d2e) list_recal_day_event_pane

0x930f,	// (0x000647aa) cntbar_detail_btn_pane_ParamLimits

0x930f,	// (0x000647aa) cntbar_detail_btn_pane

0x931f,	// (0x000647ba) cntbar_detail_btn_pane_cp01_ParamLimits

0x931f,	// (0x000647ba) cntbar_detail_btn_pane_cp01

0x933b,	// (0x000647d6) cntbar_detail_list_shct_pane_ParamLimits

0x9347,	// (0x000647e2) cntbar_detail_pane_g1_ParamLimits

0x9347,	// (0x000647e2) cntbar_detail_pane_g1

0x9353,	// (0x000647ee) cntbar_detail_pane_t1_ParamLimits

0x9353,	// (0x000647ee) cntbar_detail_pane_t1

0x9411,	// (0x000648ac) cntbar_detail_list_event_pane_g3_ParamLimits

0x9411,	// (0x000648ac) cntbar_detail_list_event_pane_g3

0x9429,	// (0x000648c4) cntbar_detail_list_event_pane_g4_ParamLimits

0x9429,	// (0x000648c4) cntbar_detail_list_event_pane_g4

0x9441,	// (0x000648dc) cntbar_detail_list_event_pane_g5_ParamLimits

0x9441,	// (0x000648dc) cntbar_detail_list_event_pane_g5

0x9459,	// (0x000648f4) cntbar_detail_list_event_pane_g6_ParamLimits

0x9459,	// (0x000648f4) cntbar_detail_list_event_pane_g6

0x949b,	// (0x00064936) cntbar_detail_list_event_pane_t3_ParamLimits

0x949b,	// (0x00064936) cntbar_detail_list_event_pane_t3

0x94ad,	// (0x00064948) popup_notif_wgt_window_ParamLimits

0x94ad,	// (0x00064948) popup_notif_wgt_window

0x94bd,	// (0x00064958) popup_submenu_window_cp01_ParamLimits

0x94bd,	// (0x00064958) popup_submenu_window_cp01

0xba44,	// (0x00066edf) bg_popup_window_pane_cp10

0xa0c0,	// (0x0006555b) listscroll_notif_wgt_pane

0xa0d2,	// (0x0006556d) list_notif_wgt_window

0xa0db,	// (0x00065576) scroll_pane_cp033

0x94cf,	// (0x0006496a) list_notif_wgt_row_pane_ParamLimits

0x94cf,	// (0x0006496a) list_notif_wgt_row_pane

0xa0e4,	// (0x0006557f) aid_size_list_notif_wgt_del

0xa0f1,	// (0x0006558c) list_notif_wgt_row_pane_g1

0xa0fd,	// (0x00065598) list_notif_wgt_row_pane_g2

0xa109,	// (0x000655a4) list_notif_wgt_row_pane_g3

0x0002,

0xfba1,	// (0x0006b03c) list_notif_wgt_row_pane_g

0xa116,	// (0x000655b1) list_notif_wgt_row_pane_t1

0xa12b,	// (0x000655c6) list_notif_wgt_row_pane_t2

0xa13d,	// (0x000655d8) list_notif_wgt_row_pane_t3

0x0002,

0xfba8,	// (0x0006b043) list_notif_wgt_row_pane_t

0xdf11,	// (0x000693ac) list_recal_day_event_pane_g1

0xa14f,	// (0x000655ea) list_recal_day_event_pane_t1

0x9cc5,	// (0x00065160) bg_button_pane_cp045

0x94e1,	// (0x0006497c) cntbar_detail_btn_pane_t1

0xce41,	// (0x000682dc) main_callh_pane_ParamLimits

0xce41,	// (0x000682dc) main_callh_pane

0x9cc5,	// (0x00065160) main_coverflow0_pane

0x9cc5,	// (0x00065160) main_wgtman_pane

0x8371,	// (0x0006380c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8371,	// (0x0006380c) main_fs_bigclock_unlock_btn_pane

0x8ca0,	// (0x0006413b) bg_button_pane_cp16

0x8cb0,	// (0x0006414b) cell_tport_appsw_pane_g3

0x94ef,	// (0x0006498a) cf0_flow_pane_ParamLimits

0x94ef,	// (0x0006498a) cf0_flow_pane

0xa15e,	// (0x000655f9) listscroll_cf0_pane

0xa169,	// (0x00065604) main_cf0_pane_g1

0x94fe,	// (0x00064999) main_cf0_pane_t1_ParamLimits

0x94fe,	// (0x00064999) main_cf0_pane_t1

0x9512,	// (0x000649ad) main_cf0_pane_t2_ParamLimits

0x9512,	// (0x000649ad) main_cf0_pane_t2

0x0001,

0xfbb4,	// (0x0006b04f) main_cf0_pane_t_ParamLimits

0xfbb4,	// (0x0006b04f) main_cf0_pane_t

0xa17b,	// (0x00065616) scroll_pane_cp11

0x9526,	// (0x000649c1) cf0_flow_pane_g1

0x952e,	// (0x000649c9) cf0_flow_pane_g2

0x0001,

0xfbb9,	// (0x0006b054) cf0_flow_pane_g

0x9536,	// (0x000649d1) cf0_flow_pane_t1

0x9cc5,	// (0x00065160) main_call6_pane

0x9cc5,	// (0x00065160) main_calllock_pane

0x9544,	// (0x000649df) call6_btn_grp_pane_ParamLimits

0x9544,	// (0x000649df) call6_btn_grp_pane

0x9553,	// (0x000649ee) call6_pane_g1_ParamLimits

0x9553,	// (0x000649ee) call6_pane_g1

0x9562,	// (0x000649fd) popup_call6_1st_window_ParamLimits

0x9562,	// (0x000649fd) popup_call6_1st_window

0x9570,	// (0x00064a0b) popup_call6_2nd_window_ParamLimits

0x9570,	// (0x00064a0b) popup_call6_2nd_window

0x957e,	// (0x00064a19) cell_call6_btn_pane_ParamLimits

0x957e,	// (0x00064a19) cell_call6_btn_pane

0xba44,	// (0x00066edf) bg_popup_call2_in_pane_cp03

0xa186,	// (0x00065621) popup_call6_1st_window_g1

0xa18e,	// (0x00065629) popup_call6_1st_window_g2

0xa196,	// (0x00065631) popup_call6_1st_window_g3

0x0002,

0xfbbe,	// (0x0006b059) popup_call6_1st_window_g

0xa19e,	// (0x00065639) popup_call6_1st_window_t1

0xa1ad,	// (0x00065648) popup_call6_1st_window_t2

0xa1bd,	// (0x00065658) popup_call6_1st_window_t3

0x0002,

0xfbc5,	// (0x0006b060) popup_call6_1st_window_t

0xba44,	// (0x00066edf) bg_popup_call2_in_pane_cp04

0xa186,	// (0x00065621) popup_call6_2nd_window_g1

0xa18e,	// (0x00065629) popup_call6_2nd_window_g2

0xa196,	// (0x00065631) popup_call6_2nd_window_g3

0x0002,

0xfbbe,	// (0x0006b059) popup_call6_2nd_window_g

0xa19e,	// (0x00065639) popup_call6_2nd_window_t1

0x9cc5,	// (0x00065160) bg_button_pane_cp15

0xa1cd,	// (0x00065668) cell_call6_btn_pane_g1

0xa1d6,	// (0x00065671) cell_call6_btn_pane_t1

0x958d,	// (0x00064a28) listscroll_wgtman_pane_ParamLimits

0x958d,	// (0x00064a28) listscroll_wgtman_pane

0x95a9,	// (0x00064a44) wgtman_btn_pane_ParamLimits

0x95a9,	// (0x00064a44) wgtman_btn_pane

0xb803,	// (0x00066c9e) aid_scroll_copy1

0xa1e5,	// (0x00065680) list_wgtman_pane

0x95de,	// (0x00064a79) wgtman_btn_pane_g1_ParamLimits

0x95de,	// (0x00064a79) wgtman_btn_pane_g1

0x9606,	// (0x00064aa1) wgtman_btn_pane_t1_ParamLimits

0x9606,	// (0x00064aa1) wgtman_btn_pane_t1

0xa1ef,	// (0x0006568a) wgtman_btn_pane_t2_ParamLimits

0xa1ef,	// (0x0006568a) wgtman_btn_pane_t2

0x0001,

0xfbcc,	// (0x0006b067) wgtman_btn_pane_t_ParamLimits

0xfbcc,	// (0x0006b067) wgtman_btn_pane_t

0x963d,	// (0x00064ad8) listrow_wgtman_pane_ParamLimits

0x963d,	// (0x00064ad8) listrow_wgtman_pane

0x9658,	// (0x00064af3) listrow_wgtman_pane_g1

0x9665,	// (0x00064b00) listrow_wgtman_pane_g2

0x0001,

0xfbd1,	// (0x0006b06c) listrow_wgtman_pane_g

0x9683,	// (0x00064b1e) listrow_wgtman_pane_t1

0x969b,	// (0x00064b36) listrow_wgtman_pane_t2

0x0001,

0xfbd6,	// (0x0006b071) listrow_wgtman_pane_t

0x96c1,	// (0x00064b5c) wait_bar_pane_cp09

0xa206,	// (0x000656a1) main_calllock_btn_pane

0xa210,	// (0x000656ab) main_calllock_pane_g1

0x9cc5,	// (0x00065160) bg_button_pane_cp17

0xa21c,	// (0x000656b7) main_calllock_btn_pane_g1

0xa225,	// (0x000656c0) main_calllock_btn_pane_t1

0x9cc5,	// (0x00065160) main_dialer3_pane

0x9cc5,	// (0x00065160) main_fmrd2_pane

0xd255,	// (0x000686f0) main_fs_bigclock_unlock_btn_pane_g1

0xa23c,	// (0x000656d7) main_fs_bigclock_unlock_btn_pane_t1

0x96d3,	// (0x00064b6e) area_fmrd2_info_pane_ParamLimits

0x96d3,	// (0x00064b6e) area_fmrd2_info_pane

0x96e1,	// (0x00064b7c) area_fmrd2_visual_pane_ParamLimits

0x96e1,	// (0x00064b7c) area_fmrd2_visual_pane

0x96ef,	// (0x00064b8a) fmrd2_indi_pane_ParamLimits

0x96ef,	// (0x00064b8a) fmrd2_indi_pane

0x96fc,	// (0x00064b97) area_fmrd2_visual_pane_g1

0x9704,	// (0x00064b9f) area_fmrd2_visual_pane_t1

0x9714,	// (0x00064baf) area_fmrd2_visual_pane_t2

0x9724,	// (0x00064bbf) area_fmrd2_visual_pane_t3

0x0002,

0xfbe0,	// (0x0006b07b) area_fmrd2_visual_pane_t

0x9734,	// (0x00064bcf) area_fmrd2_info_pane_g1

0x973c,	// (0x00064bd7) area_fmrd2_info_pane_t1

0x974c,	// (0x00064be7) area_fmrd2_info_pane_t2

0x975c,	// (0x00064bf7) area_fmrd2_info_pane_t3

0x976c,	// (0x00064c07) area_fmrd2_info_pane_t4

0x0003,

0xfbe7,	// (0x0006b082) area_fmrd2_info_pane_t

0x977a,	// (0x00064c15) fmrd2_indi_pane_t1

0x978a,	// (0x00064c25) fmrd2_indi_pane_t2

0x979a,	// (0x00064c35) fmrd2_indi_pane_t3

0x0002,

0xfbf0,	// (0x0006b08b) fmrd2_indi_pane_t

0xea8f,	// (0x00069f2a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xea8f,	// (0x00069f2a) list_single_fs_bigclock_indicator_pane_g5

0xeb36,	// (0x00069fd1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeb36,	// (0x00069fd1) list_single_fs_bigclock_indicator_pane_t5

0x8ea1,	// (0x0006433c) aid_cell_bcale_month_pane_ParamLimits

0x8ea1,	// (0x0006433c) aid_cell_bcale_month_pane

0x8ebf,	// (0x0006435a) bcale_month_pane_ParamLimits

0x8ebf,	// (0x0006435a) bcale_month_pane

0x8edd,	// (0x00064378) bcale_preview_pane_ParamLimits

0x8edd,	// (0x00064378) bcale_preview_pane

0x9ff3,	// (0x0006548e) list_single_fs_bigclock_pane_t1_ParamLimits

0xa012,	// (0x000654ad) list_single_fs_bigclock_pane_t2_ParamLimits

0xa012,	// (0x000654ad) list_single_fs_bigclock_pane_t2

0x0001,

0xfb72,	// (0x0006b00d) list_single_fs_bigclock_pane_t_ParamLimits

0xfb72,	// (0x0006b00d) list_single_fs_bigclock_pane_t

0xa234,	// (0x000656cf) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbdb,	// (0x0006b076) main_fs_bigclock_unlock_btn_pane_g

0x97a8,	// (0x00064c43) aid_dia3_key_size_ParamLimits

0x97a8,	// (0x00064c43) aid_dia3_key_size

0x97b4,	// (0x00064c4f) aid_dia3_listrow_size_ParamLimits

0x97b4,	// (0x00064c4f) aid_dia3_listrow_size

0x97c4,	// (0x00064c5f) dia3_keypad_fun_pane_ParamLimits

0x97c4,	// (0x00064c5f) dia3_keypad_fun_pane

0x97d6,	// (0x00064c71) dia3_keypad_num_pane_ParamLimits

0x97d6,	// (0x00064c71) dia3_keypad_num_pane

0x97e8,	// (0x00064c83) dia3_listscroll_pane_ParamLimits

0x97e8,	// (0x00064c83) dia3_listscroll_pane

0x97f6,	// (0x00064c91) dia3_numentry_pane_ParamLimits

0x97f6,	// (0x00064c91) dia3_numentry_pane

0xa24a,	// (0x000656e5) dia3_list_pane

0xa255,	// (0x000656f0) scroll_pane_cp12

0x9cc5,	// (0x00065160) bg_dia3_numentry_pane

0x9804,	// (0x00064c9f) dia3_numentry_pane_t1

0x9813,	// (0x00064cae) cell_dia3_key_num_pane

0x981b,	// (0x00064cb6) cell_dia3_key0_fun_pane_ParamLimits

0x981b,	// (0x00064cb6) cell_dia3_key0_fun_pane

0x9828,	// (0x00064cc3) cell_dia3_key1_fun_pane_ParamLimits

0x9828,	// (0x00064cc3) cell_dia3_key1_fun_pane

0x9835,	// (0x00064cd0) dia3_listrow_pane

0xe77f,	// (0x00069c1a) bg_dia3_numentry_pane_g1

0x9cc5,	// (0x00065160) bg_button_pane_cp21

0xa260,	// (0x000656fb) cell_dia3_key_num_pane_t1

0xa26e,	// (0x00065709) cell_dia3_key_num_pane_t2

0xa27d,	// (0x00065718) cell_dia3_key_num_pane_t3

0xa28c,	// (0x00065727) cell_dia3_key_num_pane_t4

0x0003,

0xfbf7,	// (0x0006b092) cell_dia3_key_num_pane_t

0x9cc5,	// (0x00065160) bg_button_pane_cp19

0x9842,	// (0x00064cdd) cell_dia3_key0_fun_pane_g1

0x9cc5,	// (0x00065160) bg_button_pane_cp20

0x984a,	// (0x00064ce5) cell_dia3_key1_fun_pane_g1

0x9852,	// (0x00064ced) area_left_week_number_pane

0x9865,	// (0x00064d00) area_top_day_name_pane

0x9873,	// (0x00064d0e) frame_month_view_pane

0xa29b,	// (0x00065736) grid_month_view_pane

0x9888,	// (0x00064d23) cell_top_day_name_pane_ParamLimits

0x9888,	// (0x00064d23) cell_top_day_name_pane

0x98a2,	// (0x00064d3d) cell_area_left_week_number_pane_ParamLimits

0x98a2,	// (0x00064d3d) cell_area_left_week_number_pane

0x98c5,	// (0x00064d60) cell_month_view_pane_ParamLimits

0x98c5,	// (0x00064d60) cell_month_view_pane

0xa2a9,	// (0x00065744) frm_month_g1

0x98f1,	// (0x00064d8c) frm_month_g2

0x9902,	// (0x00064d9d) frm_month_g3

0x9913,	// (0x00064dae) frm_month_g4

0x9924,	// (0x00064dbf) frm_month_g5

0x9937,	// (0x00064dd2) frm_month_g6

0x994a,	// (0x00064de5) frm_month_g7

0xa2b6,	// (0x00065751) frm_month_g8

0x995d,	// (0x00064df8) frm_month_g9

0x996a,	// (0x00064e05) frm_month_g10

0x9977,	// (0x00064e12) frm_month_g11

0x9984,	// (0x00064e1f) frm_month_g12

0x9991,	// (0x00064e2c) frm_month_g13

0x999e,	// (0x00064e39) frm_month_g14

0x99ad,	// (0x00064e48) frm_month_g15

0x99bc,	// (0x00064e57) frm_month_g16

0x000f,

0xfc00,	// (0x0006b09b) frm_month_g

0xa2c3,	// (0x0006575e) cell_top_day_name_pane_t1

0x99cb,	// (0x00064e66) cell_area_left_week_number_pane_g1

0x99da,	// (0x00064e75) cell_area_left_week_number_pane_t1

0xd4c1,	// (0x0006895c) cell_month_view_pane_g1

0x99f0,	// (0x00064e8b) cell_month_view_pane_t1

0x9cc5,	// (0x00065160) main_fps_pane

0xed0b,	// (0x0006a1a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xed0b,	// (0x0006a1a6) cmail_ddmenu_btn02_pane_cp1

0xed27,	// (0x0006a1c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xed27,	// (0x0006a1c2) cmail_ddmenu_btn02_pane_cp2

0x91a5,	// (0x00064640) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91a5,	// (0x00064640) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb25,	// (0x0006afc0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb25,	// (0x0006afc0) cmail_ddmenu_btn02_pane_g

0x91c3,	// (0x0006465e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91c3,	// (0x0006465e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb2a,	// (0x0006afc5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb2a,	// (0x0006afc5) cmail_ddmenu_btn02_pane_t

0x9a06,	// (0x00064ea1) fps_text_pane_ParamLimits

0x9a06,	// (0x00064ea1) fps_text_pane

0x9a13,	// (0x00064eae) main_fps_pane_g1_ParamLimits

0x9a13,	// (0x00064eae) main_fps_pane_g1

0x9a21,	// (0x00064ebc) wait_bar_pane_cp010_ParamLimits

0x9a21,	// (0x00064ebc) wait_bar_pane_cp010

0x9a2d,	// (0x00064ec8) fps_text_pane_t1_ParamLimits

0x9a2d,	// (0x00064ec8) fps_text_pane_t1

0x6472,	// (0x0006190d) cam4_image_uncrop_pane_g1

0x647b,	// (0x00061916) cam4_image_uncrop_pane_g2

0x6484,	// (0x0006191f) cam4_image_uncrop_pane_g3

0x648d,	// (0x00061928) cam4_image_uncrop_pane_g4

0x0003,

0xf71c,	// (0x0006abb7) cam4_image_uncrop_pane_g

0x9835,	// (0x00064cd0) dia3_listrow_pane_ParamLimits

0x9cc5,	// (0x00065160) main_phob2_pane

0x8c82,	// (0x0006411d) cell_tport_appsw_pane_cp02_ParamLimits

0x8c82,	// (0x0006411d) cell_tport_appsw_pane_cp02

0x8c91,	// (0x0006412c) cell_tport_appsw_pane_cp03_ParamLimits

0x8c91,	// (0x0006412c) cell_tport_appsw_pane_cp03

0x9cc5,	// (0x00065160) phob2_contact_card_pane

0x9cc5,	// (0x00065160) phob2_listscroll_pane

0xa2d6,	// (0x00065771) phob2_list_pane

0xa2de,	// (0x00065779) scroll_pane_cp034

0x9a46,	// (0x00064ee1) phob2_cc_data_pane_ParamLimits

0x9a46,	// (0x00064ee1) phob2_cc_data_pane

0x9a60,	// (0x00064efb) phob2_cc_listscroll_pane_ParamLimits

0x9a60,	// (0x00064efb) phob2_cc_listscroll_pane

0x9a7a,	// (0x00064f15) list_double_large_graphic_phob2_pane_ParamLimits

0x9a7a,	// (0x00064f15) list_double_large_graphic_phob2_pane

0x9a98,	// (0x00064f33) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a98,	// (0x00064f33) list_double_large_graphic_phob2_pane_g1

0x9aae,	// (0x00064f49) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9aae,	// (0x00064f49) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc21,	// (0x0006b0bc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc21,	// (0x0006b0bc) list_double_large_graphic_phob2_pane_g

0x9aba,	// (0x00064f55) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9aba,	// (0x00064f55) list_double_large_graphic_phob2_pane_t1

0x9acf,	// (0x00064f6a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9acf,	// (0x00064f6a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc26,	// (0x0006b0c1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc26,	// (0x0006b0c1) list_double_large_graphic_phob2_pane_t

0x9cc5,	// (0x00065160) list_highlight_pane_cp024

0x9ae1,	// (0x00064f7c) phob2_cc_button_pane

0x9ae9,	// (0x00064f84) phob2_cc_data_pane_g1_ParamLimits

0x9ae9,	// (0x00064f84) phob2_cc_data_pane_g1

0x9af5,	// (0x00064f90) phob2_cc_data_pane_g2_ParamLimits

0x9af5,	// (0x00064f90) phob2_cc_data_pane_g2

0x0001,

0xfc2b,	// (0x0006b0c6) phob2_cc_data_pane_g_ParamLimits

0xfc2b,	// (0x0006b0c6) phob2_cc_data_pane_g

0x9b01,	// (0x00064f9c) phob2_cc_data_pane_t1_ParamLimits

0x9b01,	// (0x00064f9c) phob2_cc_data_pane_t1

0x9b13,	// (0x00064fae) phob2_cc_data_pane_t2_ParamLimits

0x9b13,	// (0x00064fae) phob2_cc_data_pane_t2

0x9b25,	// (0x00064fc0) phob2_cc_data_pane_t3_ParamLimits

0x9b25,	// (0x00064fc0) phob2_cc_data_pane_t3

0x0002,

0xfc30,	// (0x0006b0cb) phob2_cc_data_pane_t_ParamLimits

0xfc30,	// (0x0006b0cb) phob2_cc_data_pane_t

0xa2e6,	// (0x00065781) phob2_cc_list_pane_ParamLimits

0xa2e6,	// (0x00065781) phob2_cc_list_pane

0xdfb1,	// (0x0006944c) scroll_pane_cp035_ParamLimits

0xdfb1,	// (0x0006944c) scroll_pane_cp035

0xa97d,	// (0x00065e18) bg_button_pane_cp033

0xa2f2,	// (0x0006578d) phob2_cc_button_pane_g1

0xa2fe,	// (0x00065799) phob2_cc_button_pane_t1

0xa313,	// (0x000657ae) phob2_cc_button_pane_t2

0x0001,

0xfc37,	// (0x0006b0d2) phob2_cc_button_pane_t

0x9b37,	// (0x00064fd2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b37,	// (0x00064fd2) list_double_large_graphic_phob2_cc_pane

0x9b5e,	// (0x00064ff9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b5e,	// (0x00064ff9) list_double_large_graphic_phob2_cc_pane_g1

0xa92d,	// (0x00065dc8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa92d,	// (0x00065dc8) list_double_large_graphic_phob2_cc_pane_g2

0x9b6f,	// (0x0006500a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b6f,	// (0x0006500a) list_double_large_graphic_phob2_cc_pane_g3

0x9b7b,	// (0x00065016) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b7b,	// (0x00065016) list_double_large_graphic_phob2_cc_pane_g4

0x9b87,	// (0x00065022) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b87,	// (0x00065022) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc3c,	// (0x0006b0d7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc3c,	// (0x0006b0d7) list_double_large_graphic_phob2_cc_pane_g

0x9b93,	// (0x0006502e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b93,	// (0x0006502e) list_double_large_graphic_phob2_cc_pane_t1

0x9bbc,	// (0x00065057) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bbc,	// (0x00065057) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc47,	// (0x0006b0e2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc47,	// (0x0006b0e2) list_double_large_graphic_phob2_cc_pane_t

0xa325,	// (0x000657c0) list_highlight_pane_cp025_ParamLimits

0xa325,	// (0x000657c0) list_highlight_pane_cp025

0xa97d,	// (0x00065e18) bg_button_pane_cp033_ParamLimits

0xa2f2,	// (0x0006578d) phob2_cc_button_pane_g1_ParamLimits

0xa2fe,	// (0x00065799) phob2_cc_button_pane_t1_ParamLimits

0xa313,	// (0x000657ae) phob2_cc_button_pane_t2_ParamLimits

0xfc37,	// (0x0006b0d2) phob2_cc_button_pane_t_ParamLimits

0x1203,	// (0x0005c69e) popup_wgtman_window

0xdddb,	// (0x00069276) scroll_pane_cp038

0x95c6,	// (0x00064a61) wgtman_btn_pane_cp_01_ParamLimits

0x95c6,	// (0x00064a61) wgtman_btn_pane_cp_01

0xa333,	// (0x000657ce) wgtman_content_pane

0xa33c,	// (0x000657d7) wgtman_heading_pane

0x9cc5,	// (0x00065160) bg_heading_pane_cp02

0xa345,	// (0x000657e0) wgtman_heading_pane_g1

0xa34d,	// (0x000657e8) wgtman_heading_pane_t1

0xa35b,	// (0x000657f6) scroll_pane_cp036

0xa363,	// (0x000657fe) wgtman_list_pane

0xa36b,	// (0x00065806) wgtman_list_pane_t1_ParamLimits

0xa36b,	// (0x00065806) wgtman_list_pane_t1

0x63d1,	// (0x0006186c) cam4_grid_pane

0x7155,	// (0x000625f0) bg_button_pane_cp015_ParamLimits

0x7167,	// (0x00062602) bg_button_pane_cp016_ParamLimits

0x717a,	// (0x00062615) bg_button_pane_cp017_ParamLimits

0x71d0,	// (0x0006266b) popup_vitu2_query_window_g3_ParamLimits

0x71d0,	// (0x0006266b) popup_vitu2_query_window_g3

0x728b,	// (0x00062726) popup_vitu2_query_window_t6_ParamLimits

0x728b,	// (0x00062726) popup_vitu2_query_window_t6

0x72b6,	// (0x00062751) popup_vitu2_query_window_t7_ParamLimits

0x72b6,	// (0x00062751) popup_vitu2_query_window_t7

0xe8d6,	// (0x00069d71) cam4_grid_pane_g1

0xe8ef,	// (0x00069d8a) cam4_grid_pane_g2

0xa385,	// (0x00065820) cam4_grid_pane_g3

0xa38e,	// (0x00065829) cam4_grid_pane_g4

0x0003,

0xfc4c,	// (0x0006b0e7) cam4_grid_pane_g

0x217e,	// (0x0005d619) aid_placing_vt_slider_lsc_ParamLimits

0x24ca,	// (0x0005d965) vidtel_button_pane_ParamLimits

0x24ca,	// (0x0005d965) vidtel_button_pane

0xa399,	// (0x00065834) bg_button_pane_cp034

0x9be5,	// (0x00065080) vidtel_button_pane_g1

0xa3a3,	// (0x0006583e) vidtel_button_pane_t1

0xdef8,	// (0x00069393) aid_size_vtel_slider_touch

0xdfb1,	// (0x0006944c) scroll_pane_cp039

0xe7bd,	// (0x00069c58) ncim_query_button_pane_cp01_ParamLimits

0xe7dc,	// (0x00069c77) ncimui_query_pane_g1_ParamLimits

0xa97d,	// (0x00065e18) input_focus_pane_cp012_ParamLimits

0xe801,	// (0x00069c9c) ncim_query_entry_pane_t1_ParamLimits

0xdfb1,	// (0x0006944c) scroll_pane_cp039_ParamLimits

0xb8e7,	// (0x00066d82) navi_pane_bcale_mc_g1

0xb8ef,	// (0x00066d8a) navi_pane_bcale_mc_t1

0xed70,	// (0x0006a20b) main_sp_fs_email_pane_g1

0xed7c,	// (0x0006a217) main_sp_fs_email_pane_g2

0x0001,

0x0c03,	// (0x0005c09e) main_sp_fs_email_pane_g

0xefba,	// (0x0006a455) list_single_cale_mrui_row_pane_g3_ParamLimits

0xefba,	// (0x0006a455) list_single_cale_mrui_row_pane_g3

0x91eb,	// (0x00064686) list_single_recal_day_pane_g5_event_pane

0xa8f8,	// (0x00065d93) list_single_recal_day_pane_g7

0xa3b1,	// (0x0006584c) list_recal_day_event_pane_cp01

0xa3ba,	// (0x00065855) list_recal_vselct_arw_lo_pane_cp01

0xa3c2,	// (0x0006585d) list_recal_vselct_arw_up_pane_cp01

0xa3ca,	// (0x00065865) list_recal_vselct_pane_cp01

0xdf11,	// (0x000693ac) list_recal_day_event_pane_cp01_g1

0xa98b,	// (0x00065e26) list_recal_day_event_pane_cp01_t1

0xa900,	// (0x00065d9b) list_single_recal_day_pane_t1_ParamLimits

0xa912,	// (0x00065dad) list_single_recal_day_pane_t2_ParamLimits

0xfb3a,	// (0x0006afd5) list_single_recal_day_pane_t_ParamLimits

0xad5b,	// (0x000661f6) bg_notes_pane_ParamLimits

0xadfe,	// (0x00066299) list_notes_pane_ParamLimits

0x156b,	// (0x0005ca06) scroll_pane_cp06_ParamLimits

0xae20,	// (0x000662bb) main_notes_pane_ParamLimits

0x9cc5,	// (0x00065160) main_welc_pane

0x9bed,	// (0x00065088) main_welc_body_pane_ParamLimits

0x9bed,	// (0x00065088) main_welc_body_pane

0x9c07,	// (0x000650a2) main_welc_opti_pane_ParamLimits

0x9c07,	// (0x000650a2) main_welc_opti_pane

0x9c3a,	// (0x000650d5) main_welc_pane_t1_ParamLimits

0x9c3a,	// (0x000650d5) main_welc_pane_t1

0x9c54,	// (0x000650ef) main_welc_body_row_pane_ParamLimits

0x9c54,	// (0x000650ef) main_welc_body_row_pane

0xe8c8,	// (0x00069d63) main_welc_opti_row_pane_ParamLimits

0xe8c8,	// (0x00069d63) main_welc_opti_row_pane

0xa3d4,	// (0x0006586f) main_welc_opti_row_pane_g1

0xa3dc,	// (0x00065877) main_welc_opti_row_pane_t1

0xa3ec,	// (0x00065887) main_welc_body_row_pane_t1

0xa0ca,	// (0x00065565) popup_notif_wgt_heading_pane

0xa0e4,	// (0x0006557f) aid_size_list_notif_wgt_del_ParamLimits

0xa0f1,	// (0x0006558c) list_notif_wgt_row_pane_g1_ParamLimits

0xa0fd,	// (0x00065598) list_notif_wgt_row_pane_g2_ParamLimits

0xa109,	// (0x000655a4) list_notif_wgt_row_pane_g3_ParamLimits

0xfba1,	// (0x0006b03c) list_notif_wgt_row_pane_g_ParamLimits

0xa116,	// (0x000655b1) list_notif_wgt_row_pane_t1_ParamLimits

0xa12b,	// (0x000655c6) list_notif_wgt_row_pane_t2_ParamLimits

0xa13d,	// (0x000655d8) list_notif_wgt_row_pane_t3_ParamLimits

0xfba8,	// (0x0006b043) list_notif_wgt_row_pane_t_ParamLimits

0x9658,	// (0x00064af3) listrow_wgtman_pane_g1_ParamLimits

0x9665,	// (0x00064b00) listrow_wgtman_pane_g2_ParamLimits

0xfbd1,	// (0x0006b06c) listrow_wgtman_pane_g_ParamLimits

0x9683,	// (0x00064b1e) listrow_wgtman_pane_t1_ParamLimits

0x969b,	// (0x00064b36) listrow_wgtman_pane_t2_ParamLimits

0xfbd6,	// (0x0006b071) listrow_wgtman_pane_t_ParamLimits

0x96c1,	// (0x00064b5c) wait_bar_pane_cp09_ParamLimits

0x9cc5,	// (0x00065160) bg_popup_heading_pane_cp02

0xa3fb,	// (0x00065896) popup_notif_wgt_heading_pane_g1

0xa403,	// (0x0006589e) popup_notif_wgt_heading_pane_t1

0x9cc5,	// (0x00065160) main_vids_pane

0x9cc5,	// (0x00065160) vids_listscroll_pane

0x9c79,	// (0x00065114) scroll_pane_cp040

0x9cc5,	// (0x00065160) vids_list_pane

0x9c84,	// (0x0006511f) vids_list_double_pane_ParamLimits

0x9c84,	// (0x0006511f) vids_list_double_pane

0x9c9e,	// (0x00065139) vids_list_double_pane_g1

0x9ca7,	// (0x00065142) vids_list_double_pane_t1

0x9cb7,	// (0x00065152) vids_list_double_pane_t2

0x0001,

0xfc5a,	// (0x0006b0f5) vids_list_double_pane_t

0x4509,	// (0x0005f9a4) main_ncimui_pane_ParamLimits

0x7f31,	// (0x000633cc) main_ncimui_pane_g1_ParamLimits

0x7f3d,	// (0x000633d8) main_ncimui_pane_g2_ParamLimits

0x7f3d,	// (0x000633d8) main_ncimui_pane_g2

0x0001,

0xf977,	// (0x0006ae12) main_ncimui_pane_g_ParamLimits

0xf977,	// (0x0006ae12) main_ncimui_pane_g

0x9c20,	// (0x000650bb) main_welc_pane_g1_ParamLimits

0x9c20,	// (0x000650bb) main_welc_pane_g1

0x9c2c,	// (0x000650c7) main_welc_pane_g2_ParamLimits

0x9c2c,	// (0x000650c7) main_welc_pane_g2

0x0001,

0xfc55,	// (0x0006b0f0) main_welc_pane_g_ParamLimits

0xfc55,	// (0x0006b0f0) main_welc_pane_g

0xad5b,	// (0x000661f6) listscroll_mce_pane_ParamLimits

0xba3c,	// (0x00066ed7) wait_bar_pane_cp10

0xce35,	// (0x000682d0) main_cale_day_pane_ParamLimits

0xce35,	// (0x000682d0) main_cale_week_pane_ParamLimits

0xad5b,	// (0x000661f6) main_messa_pane_ParamLimits

0x5823,	// (0x00060cbe) main_clock2_btn_pane_ParamLimits

0x5823,	// (0x00060cbe) main_clock2_btn_pane

0xd669,	// (0x00068b04) main_clock2_btn_pane_cp01_ParamLimits

0xd669,	// (0x00068b04) main_clock2_btn_pane_cp01

0xef8b,	// (0x0006a426) list_cale_mrui_pane_ParamLimits

0xa173,	// (0x0006560e) main_cf0_pane_g2

0x0001,

0xfbaf,	// (0x0006b04a) main_cf0_pane_g

0x9852,	// (0x00064ced) area_left_week_number_pane_ParamLimits

0x9865,	// (0x00064d00) area_top_day_name_pane_ParamLimits

0x9873,	// (0x00064d0e) frame_month_view_pane_ParamLimits

0xa29b,	// (0x00065736) grid_month_view_pane_ParamLimits

0xa2a9,	// (0x00065744) frm_month_g1_ParamLimits

0x98f1,	// (0x00064d8c) frm_month_g2_ParamLimits

0x9902,	// (0x00064d9d) frm_month_g3_ParamLimits

0x9913,	// (0x00064dae) frm_month_g4_ParamLimits

0x9924,	// (0x00064dbf) frm_month_g5_ParamLimits

0x9937,	// (0x00064dd2) frm_month_g6_ParamLimits

0x994a,	// (0x00064de5) frm_month_g7_ParamLimits

0xa2b6,	// (0x00065751) frm_month_g8_ParamLimits

0x995d,	// (0x00064df8) frm_month_g9_ParamLimits

0x996a,	// (0x00064e05) frm_month_g10_ParamLimits

0x9977,	// (0x00064e12) frm_month_g11_ParamLimits

0x9984,	// (0x00064e1f) frm_month_g12_ParamLimits

0x9991,	// (0x00064e2c) frm_month_g13_ParamLimits

0x999e,	// (0x00064e39) frm_month_g14_ParamLimits

0x99ad,	// (0x00064e48) frm_month_g15_ParamLimits

0x99bc,	// (0x00064e57) frm_month_g16_ParamLimits

0xfc00,	// (0x0006b09b) frm_month_g_ParamLimits

0xa2c3,	// (0x0006575e) cell_top_day_name_pane_t1_ParamLimits

0x99cb,	// (0x00064e66) cell_area_left_week_number_pane_g1_ParamLimits

0x99da,	// (0x00064e75) cell_area_left_week_number_pane_t1_ParamLimits

0xd4c1,	// (0x0006895c) cell_month_view_pane_g1_ParamLimits

0x99f0,	// (0x00064e8b) cell_month_view_pane_t1_ParamLimits

0xad53,	// (0x000661ee) main_clock2_btn_pane_g1

0xa411,	// (0x000658ac) main_clock2_btn_pane_t1

0xa97d,	// (0x00065e18) listscroll_cmail_pane_ParamLimits

0xed70,	// (0x0006a20b) main_sp_fs_email_pane_g1_ParamLimits

0xed7c,	// (0x0006a217) main_sp_fs_email_pane_g2_ParamLimits

0x0c03,	// (0x0005c09e) main_sp_fs_email_pane_g_ParamLimits

0xf09a,	// (0x0006a535) list_recal_day_pane_ParamLimits

0xf0ab,	// (0x0006a546) mian_recal_day_pane_t1

0x8957,	// (0x00063df2) list_single_dyc_row_text_pane_t4_ParamLimits

0x8957,	// (0x00063df2) list_single_dyc_row_text_pane_t4

0x898e,	// (0x00063e29) list_single_dyc_row_text_pane_t5_ParamLimits

0x898e,	// (0x00063e29) list_single_dyc_row_text_pane_t5

0xa6b9,	// (0x00065b54) list_single_dyc_row_text_pane_t6_ParamLimits

0xa6b9,	// (0x00065b54) list_single_dyc_row_text_pane_t6

0x3356,	// (0x0005e7f1) aid_mgn_list_cale_time_pane

0x4509,	// (0x0005f9a4) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
