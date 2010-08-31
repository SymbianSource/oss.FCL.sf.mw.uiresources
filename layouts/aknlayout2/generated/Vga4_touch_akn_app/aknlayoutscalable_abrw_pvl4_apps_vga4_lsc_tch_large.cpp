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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008f3a9 };

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
0x0b4f,	// (0x0008fef8) Screen

0x0b5b,	// (0x0008ff04) application_window

0x0bcd,	// (0x0008ff76) area_bottom_pane_ParamLimits

0x0bcd,	// (0x0008ff76) area_bottom_pane

0x0c2b,	// (0x0008ffd4) area_top_pane_ParamLimits

0x0c2b,	// (0x0008ffd4) area_top_pane

0x0c88,	// (0x00090031) call_video_uplink_pane_ParamLimits

0x0c88,	// (0x00090031) call_video_uplink_pane

0x0cb4,	// (0x0009005d) main_pane_ParamLimits

0x0cb4,	// (0x0009005d) main_pane

0xf022,	// (0x0009e3cb) context_pane

0x4142,	// (0x000934eb) navi_pane

0x4172,	// (0x0009351b) popup_cale_events_window_ParamLimits

0x4172,	// (0x0009351b) popup_cale_events_window

0xf035,	// (0x0009e3de) popup_mup_playback_window

0x418a,	// (0x00093533) signal_pane

0xa3ce,	// (0x00099777) main_browser_pane

0xdbc6,	// (0x0009cf6f) main_burst_pane

0x3e44,	// (0x000931ed) main_calc_pane

0xdbc6,	// (0x0009cf6f) main_cale_day_pane

0xa3ce,	// (0x00099777) main_cale_month_pane

0xdbc6,	// (0x0009cf6f) main_cale_week_pane

0xdbc6,	// (0x0009cf6f) main_call_pane

0xa07c,	// (0x00099425) main_call_poc_pane

0xdbc6,	// (0x0009cf6f) main_camera_pane

0xdbc6,	// (0x0009cf6f) main_chi_dic_pane

0xda68,	// (0x0009ce11) main_clock_pane

0xa07c,	// (0x00099425) main_fmradio_pane

0xdbc6,	// (0x0009cf6f) main_graph_messa_pane

0xa07c,	// (0x00099425) main_help_pane

0xa3ce,	// (0x00099777) main_im_pane

0xa2d7,	// (0x00099680) main_image_pane_ParamLimits

0xa2d7,	// (0x00099680) main_image_pane

0xa07c,	// (0x00099425) main_location2_pane

0xdbc6,	// (0x0009cf6f) main_location_pane

0xa07c,	// (0x00099425) main_messa_pane

0xa07c,	// (0x00099425) main_mp2_pane

0xdbc6,	// (0x0009cf6f) main_mp_pane

0xa07c,	// (0x00099425) main_msg_pane

0xa07c,	// (0x00099425) main_mup_eq_pane

0xa07c,	// (0x00099425) main_mup_pane

0xdbc6,	// (0x0009cf6f) main_notes_pane

0xa07c,	// (0x00099425) main_pec_pane

0xa07c,	// (0x00099425) main_phob_pane

0xa07c,	// (0x00099425) main_pinb_pane

0xa07c,	// (0x00099425) main_postcard_pane

0xa07c,	// (0x00099425) main_qdial_pane

0xdbc6,	// (0x0009cf6f) main_skin_pane

0xa07c,	// (0x00099425) main_smil2_pane

0xdbc6,	// (0x0009cf6f) main_smil_pane

0xdbc6,	// (0x0009cf6f) main_video_pane

0xdbc6,	// (0x0009cf6f) main_video_tele_pane

0xa2d7,	// (0x00099680) main_viewer_pane_ParamLimits

0xa2d7,	// (0x00099680) main_viewer_pane

0xdbc6,	// (0x0009cf6f) main_vorec_pane

0x3e9a,	// (0x00093243) popup_blid_sat_info_window_ParamLimits

0x3e9a,	// (0x00093243) popup_blid_sat_info_window

0x3efe,	// (0x000932a7) popup_dyc_status_message_window_ParamLimits

0x3efe,	// (0x000932a7) popup_dyc_status_message_window

0x3f18,	// (0x000932c1) popup_grid_large_graphic_window_ParamLimits

0x3f18,	// (0x000932c1) popup_grid_large_graphic_window

0x3fda,	// (0x00093383) popup_loc_request_window_ParamLimits

0x3fda,	// (0x00093383) popup_loc_request_window

0x4116,	// (0x000934bf) popup_wml_address_window_ParamLimits

0x4116,	// (0x000934bf) popup_wml_address_window

0x3c82,	// (0x0009302b) call_muted_g1

0x3913,	// (0x00092cbc) popup_call_audio_conf_window_ParamLimits

0x3913,	// (0x00092cbc) popup_call_audio_conf_window

0x3c92,	// (0x0009303b) popup_call_audio_first_window_ParamLimits

0x3c92,	// (0x0009303b) popup_call_audio_first_window

0x3d08,	// (0x000930b1) popup_call_audio_in_window_ParamLimits

0x3d08,	// (0x000930b1) popup_call_audio_in_window

0x3d44,	// (0x000930ed) popup_call_audio_out_window_ParamLimits

0x3d44,	// (0x000930ed) popup_call_audio_out_window

0x3d7e,	// (0x00093127) popup_call_audio_second_window_ParamLimits

0x3d7e,	// (0x00093127) popup_call_audio_second_window

0x3dd4,	// (0x0009317d) popup_call_audio_wait_window_ParamLimits

0x3dd4,	// (0x0009317d) popup_call_audio_wait_window

0x3e09,	// (0x000931b2) popup_number_entry_window_ParamLimits

0x3e09,	// (0x000931b2) popup_number_entry_window

0x0e56,	// (0x000901ff) bg_popup_call_pane_cp05_ParamLimits

0x0e56,	// (0x000901ff) bg_popup_call_pane_cp05

0x0e76,	// (0x0009021f) popup_number_entry_window_t1

0x0e89,	// (0x00090232) popup_number_entry_window_t2

0x0e9b,	// (0x00090244) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009e495) popup_number_entry_window_t

0x0ee2,	// (0x0009028b) text_title_cp2

0x0ef5,	// (0x0009029e) bg_popup_call_pane_cp_ParamLimits

0x0ef5,	// (0x0009029e) bg_popup_call_pane_cp

0x0f03,	// (0x000902ac) call_thumbnail_pane

0x0f0b,	// (0x000902b4) popup_call_audio_in_window_g1_ParamLimits

0x0f0b,	// (0x000902b4) popup_call_audio_in_window_g1

0x0f17,	// (0x000902c0) popup_call_audio_in_window_g2_ParamLimits

0x0f17,	// (0x000902c0) popup_call_audio_in_window_g2

0x0f23,	// (0x000902cc) popup_call_audio_in_window_g3_ParamLimits

0x0f23,	// (0x000902cc) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009e49e) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009e49e) popup_call_audio_in_window_g

0x0f2f,	// (0x000902d8) popup_call_audio_in_window_t1_ParamLimits

0x0f2f,	// (0x000902d8) popup_call_audio_in_window_t1

0x0f4b,	// (0x000902f4) popup_call_audio_in_window_t2_ParamLimits

0x0f4b,	// (0x000902f4) popup_call_audio_in_window_t2

0x9d45,	// (0x000990ee) popup_call_audio_in_window_t3_ParamLimits

0x9d45,	// (0x000990ee) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009e4a5) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009e4a5) popup_call_audio_in_window_t

0x0ef5,	// (0x0009029e) bg_popup_call_pane_cp01_ParamLimits

0x0ef5,	// (0x0009029e) bg_popup_call_pane_cp01

0x0f03,	// (0x000902ac) call_thumbnail_pane_cp02

0x9d58,	// (0x00099101) call_type_pane_cp022

0x9d60,	// (0x00099109) popup_call_audio_out_window_g1_ParamLimits

0x9d60,	// (0x00099109) popup_call_audio_out_window_g1

0x9d72,	// (0x0009911b) popup_call_audio_out_window_g2_ParamLimits

0x9d72,	// (0x0009911b) popup_call_audio_out_window_g2

0x9d7e,	// (0x00099127) popup_call_audio_out_window_g3_ParamLimits

0x9d7e,	// (0x00099127) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009e4ac) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009e4ac) popup_call_audio_out_window_g

0x9d90,	// (0x00099139) popup_call_audio_out_window_t1_ParamLimits

0x9d90,	// (0x00099139) popup_call_audio_out_window_t1

0x9da8,	// (0x00099151) popup_call_audio_out_window_t2_ParamLimits

0x9da8,	// (0x00099151) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009e4b3) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009e4b3) popup_call_audio_out_window_t

0x9dbd,	// (0x00099166) bg_popup_call_pane_ParamLimits

0x9dbd,	// (0x00099166) bg_popup_call_pane

0x0f67,	// (0x00090310) call_thumbnail_pane_cp_ParamLimits

0x0f67,	// (0x00090310) call_thumbnail_pane_cp

0x9e41,	// (0x000991ea) call_type_pane_cp01_ParamLimits

0x9e41,	// (0x000991ea) call_type_pane_cp01

0x9e85,	// (0x0009922e) popup_call_audio_first_window_g1_ParamLimits

0x9e85,	// (0x0009922e) popup_call_audio_first_window_g1

0x9ed1,	// (0x0009927a) popup_call_audio_first_window_g2_ParamLimits

0x9ed1,	// (0x0009927a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009e4b8) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009e4b8) popup_call_audio_first_window_g

0x9f15,	// (0x000992be) popup_call_audio_first_window_t1_ParamLimits

0x9f15,	// (0x000992be) popup_call_audio_first_window_t1

0x9fc1,	// (0x0009936a) popup_call_audio_first_window_t4_ParamLimits

0x9fc1,	// (0x0009936a) popup_call_audio_first_window_t4

0xa04d,	// (0x000993f6) popup_call_audio_first_window_t5_ParamLimits

0xa04d,	// (0x000993f6) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009e4bd) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009e4bd) popup_call_audio_first_window_t

0xa07c,	// (0x00099425) bg_popup_call_pane_cp02

0xa086,	// (0x0009942f) call_type_pane_cp023

0xa08e,	// (0x00099437) popup_call_audio_wait_window_g1

0xa096,	// (0x0009943f) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009e4c4) popup_call_audio_wait_window_g

0xa09e,	// (0x00099447) popup_call_audio_wait_window_t3

0xa0ac,	// (0x00099455) bg_popup_call_pane_cp03_ParamLimits

0xa0ac,	// (0x00099455) bg_popup_call_pane_cp03

0xa10c,	// (0x000994b5) call_thumbnail_pane_cp011_ParamLimits

0xa10c,	// (0x000994b5) call_thumbnail_pane_cp011

0xa118,	// (0x000994c1) call_type_pane_cp034_ParamLimits

0xa118,	// (0x000994c1) call_type_pane_cp034

0xa154,	// (0x000994fd) popup_call_audio_second_window_g1_ParamLimits

0xa154,	// (0x000994fd) popup_call_audio_second_window_g1

0xa190,	// (0x00099539) popup_call_audio_second_window_g2_ParamLimits

0xa190,	// (0x00099539) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009e4c9) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009e4c9) popup_call_audio_second_window_g

0xa1cc,	// (0x00099575) popup_call_audio_second_window_t1_ParamLimits

0xa1cc,	// (0x00099575) popup_call_audio_second_window_t1

0xa24d,	// (0x000995f6) popup_call_audio_second_window_t2_ParamLimits

0xa24d,	// (0x000995f6) popup_call_audio_second_window_t2

0xa283,	// (0x0009962c) popup_call_audio_second_window_t3_ParamLimits

0xa283,	// (0x0009962c) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009e4ce) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009e4ce) popup_call_audio_second_window_t

0xa07c,	// (0x00099425) bg_popup_call_pane_cp04

0xa2b9,	// (0x00099662) list_conf_pane

0xa2c1,	// (0x0009966a) popup_call_audio_conf_window_t1

0xa2cf,	// (0x00099678) call_thumbnail_pane_g1

0xa2d7,	// (0x00099680) bg_pinb_pane_ParamLimits

0xa2d7,	// (0x00099680) bg_pinb_pane

0xa2e5,	// (0x0009968e) find_pinb_pane

0xa2ee,	// (0x00099697) listscroll_pinb_pane_ParamLimits

0xa2ee,	// (0x00099697) listscroll_pinb_pane

0xa2fd,	// (0x000996a6) pinb_bg_pane_g1

0x0f8b,	// (0x00090334) pinb_bg_pane_g2

0x0f97,	// (0x00090340) pinb_bg_pane_g3

0x0fa3,	// (0x0009034c) pinb_bg_pane_g4

0x0faf,	// (0x00090358) pinb_bg_pane_g5

0x0fbb,	// (0x00090364) pinb_bg_pane_g6

0x0fc6,	// (0x0009036f) pinb_bg_pane_g7

0x0fd1,	// (0x0009037a) pinb_bg_pane_g8

0x0fdc,	// (0x00090385) pinb_bg_pane_g9

0x0fe6,	// (0x0009038f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009e4d5) pinb_bg_pane_g

0x1003,	// (0x000903ac) grid_pinb_pane

0x100e,	// (0x000903b7) list_pinb_pane

0x1019,	// (0x000903c2) scroll_pane_cp01_ParamLimits

0x1019,	// (0x000903c2) scroll_pane_cp01

0xa307,	// (0x000996b0) find_pinb_pane_g1_ParamLimits

0xa307,	// (0x000996b0) find_pinb_pane_g1

0xa31f,	// (0x000996c8) find_pinb_pane_t1

0xa331,	// (0x000996da) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009e4ef) find_pinb_pane_t

0xa346,	// (0x000996ef) input_focus_pane_cp01_ParamLimits

0xa346,	// (0x000996ef) input_focus_pane_cp01

0x102b,	// (0x000903d4) cell_pinb_pane_ParamLimits

0x102b,	// (0x000903d4) cell_pinb_pane

0x104d,	// (0x000903f6) cell_pinb_pane_g1_ParamLimits

0x104d,	// (0x000903f6) cell_pinb_pane_g1

0x1061,	// (0x0009040a) cell_pinb_pane_g2_ParamLimits

0x1061,	// (0x0009040a) cell_pinb_pane_g2

0xa352,	// (0x000996fb) cell_pinb_pane_g3_ParamLimits

0xa352,	// (0x000996fb) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009e4f4) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009e4f4) cell_pinb_pane_g

0xa07c,	// (0x00099425) grid_highlight_pane_cp01

0x106d,	// (0x00090416) list_pinb_item_pane_ParamLimits

0x106d,	// (0x00090416) list_pinb_item_pane

0xa07c,	// (0x00099425) list_highlight_pane_cp02

0x1080,	// (0x00090429) list_pinb_item_pane_g1_ParamLimits

0x1080,	// (0x00090429) list_pinb_item_pane_g1

0x108d,	// (0x00090436) list_pinb_item_pane_g2_ParamLimits

0x108d,	// (0x00090436) list_pinb_item_pane_g2

0x1099,	// (0x00090442) list_pinb_item_pane_g3_ParamLimits

0x1099,	// (0x00090442) list_pinb_item_pane_g3

0x10aa,	// (0x00090453) list_pinb_item_pane_g4_ParamLimits

0x10aa,	// (0x00090453) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009e4fb) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009e4fb) list_pinb_item_pane_g

0x10b6,	// (0x0009045f) list_pinb_item_pane_t1_ParamLimits

0x10b6,	// (0x0009045f) list_pinb_item_pane_t1

0x10eb,	// (0x00090494) calc_display_pane

0x1111,	// (0x000904ba) calc_paper_pane

0x1134,	// (0x000904dd) grid_calc_pane

0xa07c,	// (0x00099425) bg_list_pane_cp01

0x1162,	// (0x0009050b) clock_g1

0x116a,	// (0x00090513) clock_g2

0x0001,

0xf15b,	// (0x0009e504) clock_g

0x1172,	// (0x0009051b) clock_t1_ParamLimits

0x1172,	// (0x0009051b) clock_t1

0x1187,	// (0x00090530) clock_t2_ParamLimits

0x1187,	// (0x00090530) clock_t2

0x1199,	// (0x00090542) clock_t3_ParamLimits

0x1199,	// (0x00090542) clock_t3

0x11ab,	// (0x00090554) clock_t4_ParamLimits

0x11ab,	// (0x00090554) clock_t4

0x11bd,	// (0x00090566) clock_t5_ParamLimits

0x11bd,	// (0x00090566) clock_t5

0x11d2,	// (0x0009057b) clock_t6_ParamLimits

0x11d2,	// (0x0009057b) clock_t6

0x11e4,	// (0x0009058d) clock_t7_ParamLimits

0x11e4,	// (0x0009058d) clock_t7

0x11f6,	// (0x0009059f) clock_t8_ParamLimits

0x11f6,	// (0x0009059f) clock_t8

0x120a,	// (0x000905b3) clock_t9_ParamLimits

0x120a,	// (0x000905b3) clock_t9

0x0008,

0xf160,	// (0x0009e509) clock_t_ParamLimits

0xf160,	// (0x0009e509) clock_t

0xa366,	// (0x0009970f) popup_clock_analogue_window_cp02

0xa366,	// (0x0009970f) popup_clock_digital_window_cp01

0xa36e,	// (0x00099717) listscroll_help_pane

0xa07c,	// (0x00099425) phob_pre_status_pane

0xa378,	// (0x00099721) grid_qdial_pane

0xa07c,	// (0x00099425) listscroll_mce_pane

0xa382,	// (0x0009972b) bg_notes_pane

0xa38c,	// (0x00099735) list_notes_pane

0x1220,	// (0x000905c9) scroll_pane_cp06

0xa396,	// (0x0009973f) bg_calc_paper_pane

0xa3b4,	// (0x0009975d) list_calc_pane

0xa3ce,	// (0x00099777) bg_calc_display_pane

0x122b,	// (0x000905d4) calc_display_pane_t1

0x123d,	// (0x000905e6) calc_display_pane_t2

0xa3da,	// (0x00099783) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009e51c) calc_display_pane_t

0x124f,	// (0x000905f8) cell_calc_pane_ParamLimits

0x124f,	// (0x000905f8) cell_calc_pane

0xa3ec,	// (0x00099795) bg_calc_paper_pane_g1

0xa3f8,	// (0x000997a1) bg_calc_paper_pane_g2

0xa404,	// (0x000997ad) bg_calc_paper_pane_g3

0xa410,	// (0x000997b9) bg_calc_paper_pane_g4

0xa41c,	// (0x000997c5) bg_calc_paper_pane_g5

0x128a,	// (0x00090633) bg_calc_paper_pane_g6

0x129d,	// (0x00090646) bg_calc_paper_pane_g7

0x12b0,	// (0x00090659) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009e523) bg_calc_paper_pane_g

0x12c1,	// (0x0009066a) calc_bg_paper_pane_g9

0x12d2,	// (0x0009067b) list_calc_item_pane_ParamLimits

0x12d2,	// (0x0009067b) list_calc_item_pane

0xa428,	// (0x000997d1) list_calc_item_pane_g1

0xa435,	// (0x000997de) list_calc_item_pane_t1_ParamLimits

0xa435,	// (0x000997de) list_calc_item_pane_t1

0x12e6,	// (0x0009068f) list_calc_item_pane_t2_ParamLimits

0x12e6,	// (0x0009068f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009e534) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009e534) list_calc_item_pane_t

0xa447,	// (0x000997f0) cell_calc_pane_g1

0xa451,	// (0x000997fa) grid_highlight_pane_cp02

0xa473,	// (0x0009981c) bg_calc_display_pane_g1

0xa47c,	// (0x00099825) bg_calc_display_pane_g2

0xa486,	// (0x0009982f) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009e53e) bg_calc_display_pane_g

0x1318,	// (0x000906c1) cell_qdial_pane_ParamLimits

0x1318,	// (0x000906c1) cell_qdial_pane

0x132e,	// (0x000906d7) cell_qdial_pane_g1_ParamLimits

0x132e,	// (0x000906d7) cell_qdial_pane_g1

0x1344,	// (0x000906ed) cell_qdial_pane_g2_ParamLimits

0x1344,	// (0x000906ed) cell_qdial_pane_g2

0xa48f,	// (0x00099838) cell_qdial_pane_g3_ParamLimits

0xa48f,	// (0x00099838) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009e545) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009e545) cell_qdial_pane_g

0x136a,	// (0x00090713) cell_qdial_pane_t1_ParamLimits

0x136a,	// (0x00090713) cell_qdial_pane_t1

0x1382,	// (0x0009072b) cell_qdial_pane_t2_ParamLimits

0x1382,	// (0x0009072b) cell_qdial_pane_t2

0x1395,	// (0x0009073e) cell_qdial_pane_t3_ParamLimits

0x1395,	// (0x0009073e) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009e54e) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009e54e) cell_qdial_pane_t

0xa07c,	// (0x00099425) grid_highlight_pane_cp04

0xa49b,	// (0x00099844) thumbnail_qdial_pane_ParamLimits

0xa49b,	// (0x00099844) thumbnail_qdial_pane

0xa4f7,	// (0x000998a0) list_help_pane

0xa500,	// (0x000998a9) scroll_pane_cp02

0x13a8,	// (0x00090751) help_list_pane_t1_ParamLimits

0x13a8,	// (0x00090751) help_list_pane_t1

0xa509,	// (0x000998b2) bg_notes_pane_g2

0xa511,	// (0x000998ba) bg_notes_pane_g3

0xa519,	// (0x000998c2) notes_bg_pane_g1

0xa521,	// (0x000998ca) notes_bg_pane_g4

0xa529,	// (0x000998d2) notes_bg_pane_g5

0xa531,	// (0x000998da) notes_bg_pane_g6

0xa539,	// (0x000998e2) notes_bg_pane_g7

0xa541,	// (0x000998ea) notes_bg_pane_g8

0xa549,	// (0x000998f2) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009e56c) notes_bg_pane_g

0xa551,	// (0x000998fa) list_notes_text_pane_ParamLimits

0xa551,	// (0x000998fa) list_notes_text_pane

0xa568,	// (0x00099911) list_notes_text_pane_g1

0x13cc,	// (0x00090775) list_notes_text_pane_t1

0xa3ce,	// (0x00099777) listscroll_cale_week_pane

0x13f7,	// (0x000907a0) bg_cale_heading_pane

0xa582,	// (0x0009992b) bg_cale_pane_cp01

0x1413,	// (0x000907bc) cale_week_corner_pane

0x1429,	// (0x000907d2) cale_week_day_heading_pane

0x1445,	// (0x000907ee) cale_week_scroll_pane_g1

0x145e,	// (0x00090807) cale_week_scroll_pane_g2

0x146f,	// (0x00090818) cale_week_scroll_pane_g3

0x1480,	// (0x00090829) cale_week_scroll_pane_g4

0x1491,	// (0x0009083a) cale_week_scroll_pane_g5

0x14a2,	// (0x0009084b) cale_week_scroll_pane_g6

0x14b3,	// (0x0009085c) cale_week_scroll_pane_g7

0x14c4,	// (0x0009086d) cale_week_scroll_pane_g8

0x14d5,	// (0x0009087e) cale_week_scroll_pane_g9

0x14e6,	// (0x0009088f) cale_week_scroll_pane_g10

0x14f7,	// (0x000908a0) cale_week_scroll_pane_g11

0x1508,	// (0x000908b1) cale_week_scroll_pane_g12

0x1519,	// (0x000908c2) cale_week_scroll_pane_g13

0x1532,	// (0x000908db) cale_week_scroll_pane_g14

0x154b,	// (0x000908f4) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009e57b) cale_week_scroll_pane_g

0x1564,	// (0x0009090d) cale_week_time_pane

0x1575,	// (0x0009091e) grid_cale_week_pane

0x1590,	// (0x00090939) scroll_pane_cp08

0x15a8,	// (0x00090951) cell_cale_week_pane_ParamLimits

0x15a8,	// (0x00090951) cell_cale_week_pane

0x15f0,	// (0x00090999) cale_week_day_heading_pane_t1

0x1604,	// (0x000909ad) cale_week_day_heading_pane_t2

0x1618,	// (0x000909c1) cale_week_day_heading_pane_t3

0x162c,	// (0x000909d5) cale_week_day_heading_pane_t4

0x1640,	// (0x000909e9) cale_week_day_heading_pane_t5

0x1654,	// (0x000909fd) cale_week_day_heading_pane_t6

0x1668,	// (0x00090a11) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009e59a) cale_week_day_heading_pane_t

0xa5ad,	// (0x00099956) bg_cale_side_pane

0x167c,	// (0x00090a25) cale_week_time_pane_t1

0x1694,	// (0x00090a3d) cale_week_time_pane_t2

0x16ac,	// (0x00090a55) cale_week_time_pane_t3

0x16c4,	// (0x00090a6d) cale_week_time_pane_t4

0x16dc,	// (0x00090a85) cale_week_time_pane_t5

0x16f4,	// (0x00090a9d) cale_week_time_pane_t6

0x170c,	// (0x00090ab5) cale_week_time_pane_t7

0x1728,	// (0x00090ad1) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009e5a9) cale_week_time_pane_t

0x1748,	// (0x00090af1) cell_cale_week_pane_g2

0x1759,	// (0x00090b02) cell_cale_week_pane_g3_ParamLimits

0x1759,	// (0x00090b02) cell_cale_week_pane_g3

0xa5bb,	// (0x00099964) grid_highlight_pane_cp07

0xa5c3,	// (0x0009996c) listscroll_gms_pane

0xa5cd,	// (0x00099976) grid_gms_pane

0xa5d6,	// (0x0009997f) listscroll_gms_pane_g1

0xa5de,	// (0x00099987) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009e5ba) listscroll_gms_pane_g

0x1771,	// (0x00090b1a) scroll_pane_cp010

0x177c,	// (0x00090b25) cell_gms_pane_ParamLimits

0x177c,	// (0x00090b25) cell_gms_pane

0x1796,	// (0x00090b3f) cell_gms_pane_g1

0xa5e6,	// (0x0009998f) cell_gms_pane_g2

0xa5ee,	// (0x00099997) cell_gms_pane_g3

0xa5f7,	// (0x000999a0) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009e5bf) cell_gms_pane_g

0xa600,	// (0x000999a9) grid_highlight_pane_cp09

0x3c2a,	// (0x00092fd3) phob_pre_status_pane_g1

0x3c32,	// (0x00092fdb) phob_pre_status_pane_g2

0x3c3a,	// (0x00092fe3) phob_pre_status_pane_g3

0x3c42,	// (0x00092feb) phob_pre_status_pane_g4

0x0004,

0xf54f,	// (0x0009e8f8) phob_pre_status_pane_g

0x3c52,	// (0x00092ffb) phob_pre_status_pane_t1

0x3c62,	// (0x0009300b) phob_pre_status_pane_t2

0x3c72,	// (0x0009301b) phob_pre_status_pane_t3

0x0002,

0xf55a,	// (0x0009e903) phob_pre_status_pane_t

0xa07c,	// (0x00099425) bg_list_pane_cp05

0x17a6,	// (0x00090b4f) grid_vorec_pane

0xa608,	// (0x000999b1) vorec_t1

0xa616,	// (0x000999bf) vorec_t2

0xa624,	// (0x000999cd) vorec_t3

0xa632,	// (0x000999db) vorec_t4

0xa640,	// (0x000999e9) vorec_t5

0xa64e,	// (0x000999f7) vorec_t6

0x0006,

0xf21f,	// (0x0009e5c8) vorec_t

0xa66a,	// (0x00099a13) wait_bar_pane_cp01

0x17b0,	// (0x00090b59) cell_vorec_pane_ParamLimits

0x17b0,	// (0x00090b59) cell_vorec_pane

0xa672,	// (0x00099a1b) cell_vorec_pane_g1

0xa07c,	// (0x00099425) grid_highlight_pane_cp05

0x17db,	// (0x00090b84) cams_zoom_pane

0x17ea,	// (0x00090b93) image_vga_pane

0x1804,	// (0x00090bad) main_camera_pane_g1

0x1816,	// (0x00090bbf) main_camera_pane_g2

0x1826,	// (0x00090bcf) main_camera_pane_g3

0x183a,	// (0x00090be3) main_camera_pane_g4

0x184e,	// (0x00090bf7) main_camera_pane_g5

0x1862,	// (0x00090c0b) main_camera_pane_g6

0x1876,	// (0x00090c1f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009e5d7) main_camera_pane_g

0x188a,	// (0x00090c33) main_camera_pane_t1

0x18a0,	// (0x00090c49) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009e5e8) main_camera_pane_t

0x18de,	// (0x00090c87) cams_zoom_pane_cp_ParamLimits

0x18de,	// (0x00090c87) cams_zoom_pane_cp

0x1906,	// (0x00090caf) image_cif_pane_ParamLimits

0x1906,	// (0x00090caf) image_cif_pane

0x1941,	// (0x00090cea) image_subqcif_pane

0x194b,	// (0x00090cf4) main_video_pane_g1_ParamLimits

0x194b,	// (0x00090cf4) main_video_pane_g1

0x196f,	// (0x00090d18) main_video_pane_g2_ParamLimits

0x196f,	// (0x00090d18) main_video_pane_g2

0x19a5,	// (0x00090d4e) main_video_pane_g3_ParamLimits

0x19a5,	// (0x00090d4e) main_video_pane_g3

0x19d3,	// (0x00090d7c) main_video_pane_g4_ParamLimits

0x19d3,	// (0x00090d7c) main_video_pane_g4

0x1a01,	// (0x00090daa) main_video_pane_g5_ParamLimits

0x1a01,	// (0x00090daa) main_video_pane_g5

0xa688,	// (0x00099a31) main_video_pane_g6_ParamLimits

0xa688,	// (0x00099a31) main_video_pane_g6

0x0006,

0xf244,	// (0x0009e5ed) main_video_pane_g_ParamLimits

0xf244,	// (0x0009e5ed) main_video_pane_g

0x1a2a,	// (0x00090dd3) main_video_pane_t1_ParamLimits

0x1a2a,	// (0x00090dd3) main_video_pane_t1

0xa6a2,	// (0x00099a4b) cams_zoom_pane_g1

0xa6ab,	// (0x00099a54) cams_zoom_pane_g2

0xa6b4,	// (0x00099a5d) cams_zoom_pane_g3

0xa6bd,	// (0x00099a66) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0009e5fc) cams_zoom_pane_g

0x1a87,	// (0x00090e30) grid_cams_pane

0x1aa1,	// (0x00090e4a) linegrid_cams_pane

0x1ab5,	// (0x00090e5e) cell_cams_pane_ParamLimits

0x1ab5,	// (0x00090e5e) cell_cams_pane

0xa6c6,	// (0x00099a6f) cams_burst_image_pane

0xa6ce,	// (0x00099a77) cell_cams_pane_g1

0xa07c,	// (0x00099425) grid_highlight_pane_cp03

0xa447,	// (0x000997f0) mp_bg_pane_g1

0xa07c,	// (0x00099425) bg_list_pane_cp03

0xeef4,	// (0x0009e29d) bg_mp_pane

0xeefc,	// (0x0009e2a5) grid_mp_pane

0xef04,	// (0x0009e2ad) media_player_g1

0xef0e,	// (0x0009e2b7) media_player_t1

0xef1c,	// (0x0009e2c5) media_player_t2

0xef2a,	// (0x0009e2d3) media_player_t3

0xef38,	// (0x0009e2e1) media_player_t4

0xef46,	// (0x0009e2ef) media_player_t5

0xef54,	// (0x0009e2fd) media_player_t6

0xef62,	// (0x0009e30b) media_player_t7

0x0006,

0x0102,	// (0x0008f4ab) media_player_t

0xef70,	// (0x0009e319) wait_bar_pane_cp02

0xf53b,	// (0x0009e8e4) main_usb_pane_t

0x3c21,	// (0x00092fca) cell_mp_pane

0xa447,	// (0x000997f0) cell_mp_pane_g1

0xa07c,	// (0x00099425) grid_highlight_pane_cp06

0xa6d6,	// (0x00099a7f) grid_skin_colour_pane

0xa6de,	// (0x00099a87) list_highlight_pane_cp03

0x1bee,	// (0x00090f97) skin_g1

0xa6e6,	// (0x00099a8f) skin_t1

0xa6f5,	// (0x00099a9e) skin_t2

0x0001,

0xf288,	// (0x0009e631) skin_t

0x1bf8,	// (0x00090fa1) cell_skin_colour_pane_ParamLimits

0x1bf8,	// (0x00090fa1) cell_skin_colour_pane

0xa703,	// (0x00099aac) cell_skin_colour_pane_g1

0x1c6b,	// (0x00091014) call_video_g1_ParamLimits

0x1c6b,	// (0x00091014) call_video_g1

0x1c87,	// (0x00091030) call_video_g2_ParamLimits

0x1c87,	// (0x00091030) call_video_g2

0x0001,

0xf28d,	// (0x0009e636) call_video_g_ParamLimits

0xf28d,	// (0x0009e636) call_video_g

0x1ccf,	// (0x00091078) call_video_uplink_pane_cp1_ParamLimits

0x1ccf,	// (0x00091078) call_video_uplink_pane_cp1

0xa715,	// (0x00099abe) call_video_uplink_pane_cp2

0x1d70,	// (0x00091119) video_down_crop_pane_ParamLimits

0x1d70,	// (0x00091119) video_down_crop_pane

0x1e59,	// (0x00091202) video_down_pane_ParamLimits

0x1e59,	// (0x00091202) video_down_pane

0xa71d,	// (0x00099ac6) video_down_subqcif_pane_ParamLimits

0xa71d,	// (0x00099ac6) video_down_subqcif_pane

0xa737,	// (0x00099ae0) video_down_subqcif_pane_cp_ParamLimits

0xa737,	// (0x00099ae0) video_down_subqcif_pane_cp

0xa75d,	// (0x00099b06) im_reading_pane_ParamLimits

0xa75d,	// (0x00099b06) im_reading_pane

0x1f62,	// (0x0009130b) im_writing_pane_ParamLimits

0x1f62,	// (0x0009130b) im_writing_pane

0x1f80,	// (0x00091329) im_reading_pane_t1

0xa777,	// (0x00099b20) list_im_pane

0xa788,	// (0x00099b31) scroll_pane_cp07

0x1fbf,	// (0x00091368) im_writing_pane_t1_ParamLimits

0x1fbf,	// (0x00091368) im_writing_pane_t1

0xa7a1,	// (0x00099b4a) im_writing_pane_t2_ParamLimits

0xa7a1,	// (0x00099b4a) im_writing_pane_t2

0x0001,

0xf297,	// (0x0009e640) im_writing_pane_t_ParamLimits

0xf297,	// (0x0009e640) im_writing_pane_t

0xa07c,	// (0x00099425) input_focus_pane_cp04

0xa07c,	// (0x00099425) input_focus_pane_cp05

0x1fd4,	// (0x0009137d) list_im_single_pane_ParamLimits

0x1fd4,	// (0x0009137d) list_im_single_pane

0x1fed,	// (0x00091396) list_single_im_pane_t1

0x3be1,	// (0x00092f8a) blid_accuracy_pane

0x3be9,	// (0x00092f92) blid_compass_pane

0x3bf3,	// (0x00092f9c) main_location_t1

0x3c03,	// (0x00092fac) main_location_t2

0x3c13,	// (0x00092fbc) main_location_t3

0x0002,

0xf548,	// (0x0009e8f1) main_location_t

0xa07c,	// (0x00099425) aid_levels_location

0xa447,	// (0x000997f0) blid_accuracy_pane_g1

0xa447,	// (0x000997f0) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0009e6a2) blid_accuracy_pane_g

0xa7e9,	// (0x00099b92) wml_content_pane

0xa827,	// (0x00099bd0) wml_button_pane_ParamLimits

0xa827,	// (0x00099bd0) wml_button_pane

0x1ffc,	// (0x000913a5) wml_list_single_large_pane_ParamLimits

0x1ffc,	// (0x000913a5) wml_list_single_large_pane

0x2015,	// (0x000913be) wml_list_single_medium_pane_ParamLimits

0x2015,	// (0x000913be) wml_list_single_medium_pane

0x202f,	// (0x000913d8) wml_list_single_small_pane_ParamLimits

0x202f,	// (0x000913d8) wml_list_single_small_pane

0xa83b,	// (0x00099be4) wml_selection_box_pane_ParamLimits

0xa83b,	// (0x00099be4) wml_selection_box_pane

0xa84e,	// (0x00099bf7) wml_list_single_pane_t1

0xa85d,	// (0x00099c06) wml_list_single_medium_pane_t1

0xa86c,	// (0x00099c15) wml_list_single_large_pane_t1

0xa87b,	// (0x00099c24) input_focus_pane_cp02_ParamLimits

0xa87b,	// (0x00099c24) input_focus_pane_cp02

0xa88e,	// (0x00099c37) wml_selection_box_pane_g1

0xa897,	// (0x00099c40) wml_selection_box_pane_t1_ParamLimits

0xa897,	// (0x00099c40) wml_selection_box_pane_t1

0xa2d7,	// (0x00099680) bg_wml_button_pane_ParamLimits

0xa2d7,	// (0x00099680) bg_wml_button_pane

0xa8af,	// (0x00099c58) wml_button_pane_g1

0xa8b7,	// (0x00099c60) wml_button_pane_t1

0xa8af,	// (0x00099c58) wml_button_bg_pane_g1

0xa8c7,	// (0x00099c70) wml_button_bg_pane_g2

0xa8cf,	// (0x00099c78) wml_button_bg_pane_g3

0xa8d7,	// (0x00099c80) wml_button_bg_pane_g4

0xa8df,	// (0x00099c88) wml_button_bg_pane_g5

0xa8e7,	// (0x00099c90) wml_button_bg_pane_g6

0xa8ef,	// (0x00099c98) wml_button_bg_pane_g7

0xa8f7,	// (0x00099ca0) wml_button_bg_pane_g8

0xa8ff,	// (0x00099ca8) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0009e645) wml_button_bg_pane_g

0x204e,	// (0x000913f7) bg_list_pane_cp02

0xa907,	// (0x00099cb0) mce_header_pane_ParamLimits

0xa907,	// (0x00099cb0) mce_header_pane

0xa91d,	// (0x00099cc6) mce_icon_pane

0xa91d,	// (0x00099cc6) mce_image_pane

0xa926,	// (0x00099ccf) mce_text_pane_ParamLimits

0xa926,	// (0x00099ccf) mce_text_pane

0x2058,	// (0x00091401) scroll_pane_cp03

0xa81f,	// (0x00099bc8) scroll_pane_cp04

0xa939,	// (0x00099ce2) scroll_pane_cp05_ParamLimits

0xa939,	// (0x00099ce2) scroll_pane_cp05

0x2062,	// (0x0009140b) mce_header_field_pane_ParamLimits

0x2062,	// (0x0009140b) mce_header_field_pane

0x207b,	// (0x00091424) mce_header_field_pane_2_ParamLimits

0x207b,	// (0x00091424) mce_header_field_pane_2

0x2091,	// (0x0009143a) mce_header_field_pane_3

0x2099,	// (0x00091442) list_single_mce_message_pane_ParamLimits

0x2099,	// (0x00091442) list_single_mce_message_pane

0x20b5,	// (0x0009145e) list_single_mce_smart_pane_ParamLimits

0x20b5,	// (0x0009145e) list_single_mce_smart_pane

0xa945,	// (0x00099cee) input_focus_pane_cp03

0xa94e,	// (0x00099cf7) list_header_data_pane

0x20dc,	// (0x00091485) mce_header_field_pane_t1

0x20ec,	// (0x00091495) list_single_mce_header_pane_ParamLimits

0x20ec,	// (0x00091495) list_single_mce_header_pane

0xa956,	// (0x00099cff) list_single_mce_header_pane_t1

0xa965,	// (0x00099d0e) list_single_mce_message_pane_g1

0xa96d,	// (0x00099d16) list_single_mce_message_pane_t1

0x211e,	// (0x000914c7) bg_cale_heading_pane_cp01_ParamLimits

0x211e,	// (0x000914c7) bg_cale_heading_pane_cp01

0xa97b,	// (0x00099d24) bg_cale_pane_cp02_ParamLimits

0xa97b,	// (0x00099d24) bg_cale_pane_cp02

0x2151,	// (0x000914fa) cale_month_corner_pane

0x2167,	// (0x00091510) cale_month_day_heading_pane_ParamLimits

0x2167,	// (0x00091510) cale_month_day_heading_pane

0x219a,	// (0x00091543) cale_month_pane_g1_ParamLimits

0x219a,	// (0x00091543) cale_month_pane_g1

0x21c6,	// (0x0009156f) cale_month_pane_g2_ParamLimits

0x21c6,	// (0x0009156f) cale_month_pane_g2

0x21e7,	// (0x00091590) cale_month_pane_g3_ParamLimits

0x21e7,	// (0x00091590) cale_month_pane_g3

0x2223,	// (0x000915cc) cale_month_pane_g4_ParamLimits

0x2223,	// (0x000915cc) cale_month_pane_g4

0x225f,	// (0x00091608) cale_month_pane_g5_ParamLimits

0x225f,	// (0x00091608) cale_month_pane_g5

0x229b,	// (0x00091644) cale_month_pane_g6_ParamLimits

0x229b,	// (0x00091644) cale_month_pane_g6

0x22d7,	// (0x00091680) cale_month_pane_g7_ParamLimits

0x22d7,	// (0x00091680) cale_month_pane_g7

0x2313,	// (0x000916bc) cale_month_pane_g8_ParamLimits

0x2313,	// (0x000916bc) cale_month_pane_g8

0x234f,	// (0x000916f8) cale_month_pane_g9_ParamLimits

0x234f,	// (0x000916f8) cale_month_pane_g9

0x2385,	// (0x0009172e) cale_month_pane_g10_ParamLimits

0x2385,	// (0x0009172e) cale_month_pane_g10

0x23af,	// (0x00091758) cale_month_pane_g11_ParamLimits

0x23af,	// (0x00091758) cale_month_pane_g11

0x23d9,	// (0x00091782) cale_month_pane_g12_ParamLimits

0x23d9,	// (0x00091782) cale_month_pane_g12

0x2407,	// (0x000917b0) cale_month_pane_g13_ParamLimits

0x2407,	// (0x000917b0) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0009e658) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0009e658) cale_month_pane_g

0x2435,	// (0x000917de) cale_month_week_pane

0x2446,	// (0x000917ef) grid_cale_month_pane_ParamLimits

0x2446,	// (0x000917ef) grid_cale_month_pane

0x2474,	// (0x0009181d) cale_month_day_heading_pane_t1

0x24d2,	// (0x0009187b) cale_month_day_heading_pane_t2

0x2537,	// (0x000918e0) cale_month_day_heading_pane_t3

0x259c,	// (0x00091945) cale_month_day_heading_pane_t4

0x2601,	// (0x000919aa) cale_month_day_heading_pane_t5

0x2666,	// (0x00091a0f) cale_month_day_heading_pane_t6

0x26cb,	// (0x00091a74) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0009e673) cale_month_day_heading_pane_t

0xa5ad,	// (0x00099956) bg_cale_side_pane_cp01

0x2730,	// (0x00091ad9) cale_month_week_pane_t1

0x2747,	// (0x00091af0) cale_month_week_pane_t2

0x275e,	// (0x00091b07) cale_month_week_pane_t3

0x2775,	// (0x00091b1e) cale_month_week_pane_t4

0x278c,	// (0x00091b35) cale_month_week_pane_t5

0x27a3,	// (0x00091b4c) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0009e682) cale_month_week_pane_t

0x27c2,	// (0x00091b6b) cell_cale_month_pane_ParamLimits

0x27c2,	// (0x00091b6b) cell_cale_month_pane

0xa9b0,	// (0x00099d59) cell_cale_month_pane_g1

0x289a,	// (0x00091c43) cell_cale_month_pane_t1_ParamLimits

0x289a,	// (0x00091c43) cell_cale_month_pane_t1

0xa5bb,	// (0x00099964) grid_highlight_pane_cp08

0xa447,	// (0x000997f0) main_smil_g1

0x28b6,	// (0x00091c5f) smil_status_pane

0xa9bc,	// (0x00099d65) smil_text_pane

0xee12,	// (0x0009e1bb) bg_popup_call3_rect_pane_g8

0xee1a,	// (0x0009e1c3) bg_popup_call3_rect_pane_g9

0x0008,

0xf523,	// (0x0009e8cc) bg_popup_call3_rect_pane_g

0xf0af,	// (0x0009e458) smil_status_volume_pane_g1

0xa9c6,	// (0x00099d6f) smil_status_pane_t1

0xadc7,	// (0x0009a170) volume_smil_pane

0xa9dd,	// (0x00099d86) list_smil_text_pane

0x28cb,	// (0x00091c74) scroll_pane_cp011

0x28d6,	// (0x00091c7f) smil_text_list_pane_t1_ParamLimits

0x28d6,	// (0x00091c7f) smil_text_list_pane_t1

0xa9e7,	// (0x00099d90) aid_volume_smil_ParamLimits

0xa9e7,	// (0x00099d90) aid_volume_smil

0xa447,	// (0x000997f0) smil_volume_pane_g1

0xa447,	// (0x000997f0) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0009e6a2) smil_volume_pane_g

0xa3ce,	// (0x00099777) listscroll_cale_day_pane

0xaa09,	// (0x00099db2) bg_cale_pane

0xaa21,	// (0x00099dca) list_cale_pane

0xaa32,	// (0x00099ddb) scroll_pane_cp09

0xaa43,	// (0x00099dec) cale_bg_pane_g1

0xaa4b,	// (0x00099df4) cale_bg_pane_g2

0xaa53,	// (0x00099dfc) cale_bg_pane_g3

0xaa5b,	// (0x00099e04) cale_bg_pane_g4

0xaa63,	// (0x00099e0c) cale_bg_pane_g5

0xaa6b,	// (0x00099e14) cale_bg_pane_g6

0xaa73,	// (0x00099e1c) cale_bg_pane_g7

0xaa7b,	// (0x00099e24) cale_bg_pane_g8

0xaa83,	// (0x00099e2c) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0009e6a7) cale_bg_pane_g

0x292b,	// (0x00091cd4) list_cale_time_pane_ParamLimits

0x292b,	// (0x00091cd4) list_cale_time_pane

0x2940,	// (0x00091ce9) list_cale_time_pane_g1_ParamLimits

0x2940,	// (0x00091ce9) list_cale_time_pane_g1

0xaa8b,	// (0x00099e34) list_cale_time_pane_g2_ParamLimits

0xaa8b,	// (0x00099e34) list_cale_time_pane_g2

0x294c,	// (0x00091cf5) list_cale_time_pane_g3_ParamLimits

0x294c,	// (0x00091cf5) list_cale_time_pane_g3

0x295a,	// (0x00091d03) list_cale_time_pane_g4_ParamLimits

0x295a,	// (0x00091d03) list_cale_time_pane_g4

0x2968,	// (0x00091d11) list_cale_time_pane_g5_ParamLimits

0x2968,	// (0x00091d11) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0009e6ba) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0009e6ba) list_cale_time_pane_g

0x2976,	// (0x00091d1f) list_cale_time_pane_t1_ParamLimits

0x2976,	// (0x00091d1f) list_cale_time_pane_t1

0x299e,	// (0x00091d47) list_cale_time_pane_t2_ParamLimits

0x299e,	// (0x00091d47) list_cale_time_pane_t2

0x2d8b,	// (0x00092134) aid_blid_cardinal_pane

0x2dcd,	// (0x00092176) compass_pane_t4

0x29c6,	// (0x00091d6f) list_cale_time_pane_t4_ParamLimits

0x29c6,	// (0x00091d6f) list_cale_time_pane_t4

0x2ddb,	// (0x00092184) compass_pane_t5

0x2deb,	// (0x00092194) compass_pane_t6

0x2df9,	// (0x000921a2) compass_pane_t7

0xdb18,	// (0x0009cec1) navi_pane_cc_t1

0xdc6d,	// (0x0009d016) aid_phob_thumbnail_center_pane

0x35a7,	// (0x00092950) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0009e6c7) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0009e6c7) list_cale_time_pane_t

0x0ef5,	// (0x0009029e) bg_popup_window_pane_cp02_ParamLimits

0x0ef5,	// (0x0009029e) bg_popup_window_pane_cp02

0xaaa5,	// (0x00099e4e) heading_pane_cp01_ParamLimits

0xaaa5,	// (0x00099e4e) heading_pane_cp01

0xaab1,	// (0x00099e5a) loc_req_pane_ParamLimits

0xaab1,	// (0x00099e5a) loc_req_pane

0xaac1,	// (0x00099e6a) loc_type_pane_ParamLimits

0xaac1,	// (0x00099e6a) loc_type_pane

0xaad3,	// (0x00099e7c) loc_type_pane_t1_ParamLimits

0xaad3,	// (0x00099e7c) loc_type_pane_t1

0xaae5,	// (0x00099e8e) loc_type_pane_t2_ParamLimits

0xaae5,	// (0x00099e8e) loc_type_pane_t2

0xaaf7,	// (0x00099ea0) loc_type_pane_t3_ParamLimits

0xaaf7,	// (0x00099ea0) loc_type_pane_t3

0x0002,

0xf325,	// (0x0009e6ce) loc_type_pane_t_ParamLimits

0xf325,	// (0x0009e6ce) loc_type_pane_t

0xab09,	// (0x00099eb2) list_loc_req_pane

0xab13,	// (0x00099ebc) scroll_pane_cp012

0x29ee,	// (0x00091d97) list_single_loc_request_popup_menu_pane_ParamLimits

0x29ee,	// (0x00091d97) list_single_loc_request_popup_menu_pane

0xab1e,	// (0x00099ec7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xab1e,	// (0x00099ec7) list_single_loc_request_popup_menu_pane_g1

0xab2a,	// (0x00099ed3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xab2a,	// (0x00099ed3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0009e6d5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0009e6d5) list_single_loc_request_popup_menu_pane_g

0xab36,	// (0x00099edf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab36,	// (0x00099edf) list_single_loc_request_popup_menu_pane_t1

0xa2d7,	// (0x00099680) bg_popup_window_pane_cp03_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_window_pane_cp03

0xab4c,	// (0x00099ef5) heading_loc_req_pane_ParamLimits

0xab4c,	// (0x00099ef5) heading_loc_req_pane

0x29fb,	// (0x00091da4) popup_dyc_status_message_window_g1_ParamLimits

0x29fb,	// (0x00091da4) popup_dyc_status_message_window_g1

0x2a0f,	// (0x00091db8) popup_dyc_status_message_window_t1_ParamLimits

0x2a0f,	// (0x00091db8) popup_dyc_status_message_window_t1

0x2a24,	// (0x00091dcd) popup_dyc_status_message_window_t2_ParamLimits

0x2a24,	// (0x00091dcd) popup_dyc_status_message_window_t2

0x2a39,	// (0x00091de2) popup_dyc_status_message_window_t3_ParamLimits

0x2a39,	// (0x00091de2) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0009e6da) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0009e6da) popup_dyc_status_message_window_t

0xa07c,	// (0x00099425) bg_heading_pane_cp01

0xab58,	// (0x00099f01) heading_loc_req_pane_g1

0xab60,	// (0x00099f09) heading_loc_req_pane_g2

0xab68,	// (0x00099f11) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0009e6e1) heading_loc_req_pane_g

0xab70,	// (0x00099f19) heading_loc_req_pane_t1

0xab80,	// (0x00099f29) bg_popup_sub_pane_cp01_ParamLimits

0xab80,	// (0x00099f29) bg_popup_sub_pane_cp01

0xab8e,	// (0x00099f37) popup_cale_events_window_g1_ParamLimits

0xab8e,	// (0x00099f37) popup_cale_events_window_g1

0xabae,	// (0x00099f57) popup_cale_events_window_g2_ParamLimits

0xabae,	// (0x00099f57) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0009e715) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0009e715) popup_cale_events_window_g

0xabce,	// (0x00099f77) popup_cale_events_window_t1_ParamLimits

0xabce,	// (0x00099f77) popup_cale_events_window_t1

0xabe0,	// (0x00099f89) popup_cale_events_window_t2_ParamLimits

0xabe0,	// (0x00099f89) popup_cale_events_window_t2

0xac1e,	// (0x00099fc7) popup_cale_events_window_t3_ParamLimits

0xac1e,	// (0x00099fc7) popup_cale_events_window_t3

0xac58,	// (0x0009a001) popup_cale_events_window_t4_ParamLimits

0xac58,	// (0x0009a001) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0009e71a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0009e71a) popup_cale_events_window_t

0x2b3e,	// (0x00091ee7) call_type_pane

0x2b4e,	// (0x00091ef7) popup_call_status_window_g1

0x2b62,	// (0x00091f0b) popup_call_status_window_g2

0x2b76,	// (0x00091f1f) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0009e723) popup_call_status_window_g

0xac8e,	// (0x0009a037) call_type_pane_g1

0xac97,	// (0x0009a040) call_type_pane_g2

0x0001,

0xf381,	// (0x0009e72a) call_type_pane_g

0xa07c,	// (0x00099425) bg_popup_sub_pane_cp02

0xaca0,	// (0x0009a049) listscroll_popup_wml_pane

0xaca8,	// (0x0009a051) list_wml_pane

0xacb2,	// (0x0009a05b) scroll_pane_cp013

0xacbd,	// (0x0009a066) list_single_graphic_popup_wml_pane_ParamLimits

0xacbd,	// (0x0009a066) list_single_graphic_popup_wml_pane

0xa447,	// (0x000997f0) list_single_graphic_popup_wml_pane_g1

0xacd1,	// (0x0009a07a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0009e72f) list_single_graphic_popup_wml_pane_g

0xacd9,	// (0x0009a082) list_single_graphic_popup_wml_pane_t1

0xacef,	// (0x0009a098) aid_call_pane

0xa2cf,	// (0x00099678) popup_clock_analogue_window_g1

0xa2cf,	// (0x00099678) popup_clock_analogue_window_g2

0xacf7,	// (0x0009a0a0) popup_clock_analogue_window_g3

0xacf7,	// (0x0009a0a0) popup_clock_analogue_window_g4

0xa447,	// (0x000997f0) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0009e734) popup_clock_analogue_window_g

0xacff,	// (0x0009a0a8) popup_clock_analogue_window_t1

0xad0d,	// (0x0009a0b6) clock_digital_number_pane_ParamLimits

0xad0d,	// (0x0009a0b6) clock_digital_number_pane

0xad19,	// (0x0009a0c2) clock_digital_number_pane_cp02_ParamLimits

0xad19,	// (0x0009a0c2) clock_digital_number_pane_cp02

0xad25,	// (0x0009a0ce) clock_digital_number_pane_cp03_ParamLimits

0xad25,	// (0x0009a0ce) clock_digital_number_pane_cp03

0xad31,	// (0x0009a0da) clock_digital_number_pane_cp04_ParamLimits

0xad31,	// (0x0009a0da) clock_digital_number_pane_cp04

0xad3d,	// (0x0009a0e6) clock_digital_separator_pane_ParamLimits

0xad3d,	// (0x0009a0e6) clock_digital_separator_pane

0xad49,	// (0x0009a0f2) popup_clock_digital_window_t1

0xa447,	// (0x000997f0) clock_digital_number_pane_g1

0xa447,	// (0x000997f0) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0009e6a2) clock_digital_number_pane_g

0xa447,	// (0x000997f0) clock_digital_separator_pane_g1

0xa447,	// (0x000997f0) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0009e6a2) clock_digital_separator_pane_g

0xa07c,	// (0x00099425) bg_popup_window_pane_cp04

0xd57a,	// (0x0009c923) heading_pane_cp03

0xd980,	// (0x0009cd29) listscroll_popup_gms_pane

0xd988,	// (0x0009cd31) grid_large_graphic_popup_pane

0xd992,	// (0x0009cd3b) listscroll_popup_gms_pane_g1

0xd99a,	// (0x0009cd43) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0009e73f) listscroll_popup_gms_pane_g

0xa81f,	// (0x00099bc8) scroll_pane_cp014

0x2b86,	// (0x00091f2f) cell_large_graphic_popup_pane_ParamLimits

0x2b86,	// (0x00091f2f) cell_large_graphic_popup_pane

0x2b9e,	// (0x00091f47) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b9e,	// (0x00091f47) cell_large_graphic_popup_pane_g1

0xd9a2,	// (0x0009cd4b) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9a2,	// (0x0009cd4b) cell_large_graphic_popup_pane_g2

0xd9ae,	// (0x0009cd57) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9ae,	// (0x0009cd57) cell_large_graphic_popup_pane_g3

0xd9bb,	// (0x0009cd64) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9bb,	// (0x0009cd64) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0009e744) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0009e744) cell_large_graphic_popup_pane_g

0xd9cb,	// (0x0009cd74) grid_highlight_pane_cp010

0xa447,	// (0x000997f0) bg_popup_call_pane_g1

0xd9d5,	// (0x0009cd7e) list_single_graphic_popup_conf_pane_ParamLimits

0xd9d5,	// (0x0009cd7e) list_single_graphic_popup_conf_pane

0xd9e7,	// (0x0009cd90) list_highlight_pane_cp01

0xd9f0,	// (0x0009cd99) list_single_graphic_popup_conf_pane_g1

0xd9f8,	// (0x0009cda1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0009e74d) list_single_graphic_popup_conf_pane_g

0xda00,	// (0x0009cda9) list_single_graphic_popup_conf_pane_t1

0xda0e,	// (0x0009cdb7) linegrid_cams_pane_g1

0x2baa,	// (0x00091f53) linegrid_cams_pane_g2

0xa5ee,	// (0x00099997) linegrid_cams_pane_g3

0xda17,	// (0x0009cdc0) linegrid_cams_pane_g4

0x2bb3,	// (0x00091f5c) linegrid_cams_pane_g5

0x2bbc,	// (0x00091f65) linegrid_cams_pane_g6

0xa5f7,	// (0x000999a0) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0009e752) linegrid_cams_pane_g

0xda20,	// (0x0009cdc9) popup_clock_analogue_window

0xda20,	// (0x0009cdc9) popup_clock_digital_window

0xa07c,	// (0x00099425) popup_phob_thumbnail_window

0xa447,	// (0x000997f0) call_video_uplink_pane_g1

0xda29,	// (0x0009cdd2) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0009e761) call_video_uplink_pane_g

0xda31,	// (0x0009cdda) video_uplink_pane

0xda39,	// (0x0009cde2) mce_image_pane_g1

0x2bc7,	// (0x00091f70) mce_image_pane_g2

0x2bd1,	// (0x00091f7a) mce_image_pane_g3

0x2bdb,	// (0x00091f84) mce_image_pane_g4

0x2be3,	// (0x00091f8c) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0009e766) mce_image_pane_g

0xda43,	// (0x0009cdec) control_top_pane_stacon_cp01_ParamLimits

0xda43,	// (0x0009cdec) control_top_pane_stacon_cp01

0xda57,	// (0x0009ce00) uni_indicator_pane_stacon_cp01_ParamLimits

0xda57,	// (0x0009ce00) uni_indicator_pane_stacon_cp01

0xda68,	// (0x0009ce11) bg_popup_sub_pane_cp03

0x2beb,	// (0x00091f94) chi_dic_find_pane

0x2bf3,	// (0x00091f9c) listscroll_chi_dic_pane

0x2bfc,	// (0x00091fa5) main_pane_chidic_g1

0x2c0f,	// (0x00091fb8) chi_dic_find_pane_t1

0xda72,	// (0x0009ce1b) find_chidic_pane

0xda7b,	// (0x0009ce24) chi_dic_list_pane_ParamLimits

0xda7b,	// (0x0009ce24) chi_dic_list_pane

0xda8c,	// (0x0009ce35) scroll_pane_cp020

0x2c1d,	// (0x00091fc6) find_chidic_pane_t1

0xa07c,	// (0x00099425) input_focus_pane_cp06

0x2c2c,	// (0x00091fd5) list_chi_dic_pane_ParamLimits

0x2c2c,	// (0x00091fd5) list_chi_dic_pane

0x2c3e,	// (0x00091fe7) list_chi_dic_pane_t1_ParamLimits

0x2c3e,	// (0x00091fe7) list_chi_dic_pane_t1

0xa07c,	// (0x00099425) list_highlight_pane_cp020

0xda94,	// (0x0009ce3d) bg_cale_heading_pane_g1

0x2c51,	// (0x00091ffa) bg_cale_heading_pane_g2

0x2c59,	// (0x00092002) bg_cale_heading_pane_g3

0x2c61,	// (0x0009200a) bg_cale_heading_pane_g4

0x2c69,	// (0x00092012) bg_cale_heading_pane_g5

0x2c71,	// (0x0009201a) bg_cale_heading_pane_g6

0x2c79,	// (0x00092022) bg_cale_heading_pane_g7

0x2c81,	// (0x0009202a) bg_cale_heading_pane_g8

0x2c89,	// (0x00092032) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0009e771) bg_cale_heading_pane_g

0xda94,	// (0x0009ce3d) bg_cale_side_pane_g1

0x2c91,	// (0x0009203a) bg_cale_side_pane_g2

0x2c9b,	// (0x00092044) bg_cale_side_pane_g3

0x2ca5,	// (0x0009204e) bg_cale_side_pane_g4

0x2caf,	// (0x00092058) bg_cale_side_pane_g5

0x2cb9,	// (0x00092062) bg_cale_side_pane_g6

0x2cc3,	// (0x0009206c) bg_cale_side_pane_g7

0x2ccd,	// (0x00092076) bg_cale_side_pane_g8

0x2cd5,	// (0x0009207e) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0009e784) bg_cale_side_pane_g

0x2cdd,	// (0x00092086) popup_call_status_window_ParamLimits

0x2cdd,	// (0x00092086) popup_call_status_window

0xda9c,	// (0x0009ce45) stacon_top_pane

0xdaa4,	// (0x0009ce4d) status_pane_ParamLimits

0xdaa4,	// (0x0009ce4d) status_pane

0xdab9,	// (0x0009ce62) status_small_pane

0xdac1,	// (0x0009ce6a) control_pane

0xa07c,	// (0x00099425) stacon_bottom_pane

0xdac9,	// (0x0009ce72) list_single_mce_smart_pane_t1_ParamLimits

0xdac9,	// (0x0009ce72) list_single_mce_smart_pane_t1

0xdadc,	// (0x0009ce85) list_single_mce_smart_pane_t2_ParamLimits

0xdadc,	// (0x0009ce85) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0009e797) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0009e797) list_single_mce_smart_pane_t

0x2d2a,	// (0x000920d3) compass_pane

0x2d35,	// (0x000920de) main_location2_pane_t1

0x2d4b,	// (0x000920f4) main_location2_pane_t2

0x2d61,	// (0x0009210a) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0009e79c) main_location2_pane_t

0xdafb,	// (0x0009cea4) compass_pane_g1_ParamLimits

0xdafb,	// (0x0009cea4) compass_pane_g1

0x2daf,	// (0x00092158) compass_pane_t1

0x2dbe,	// (0x00092167) compass_pane_t2

0x0005,

0xf3fc,	// (0x0009e7a5) compass_pane_t

0x2e09,	// (0x000921b2) text_secondary_cp61

0xdb0f,	// (0x0009ceb8) navi_pane_cams_g5

0xdb32,	// (0x0009cedb) navi_pane_im_t1

0xdb40,	// (0x0009cee9) navi_pane_mp_g1_ParamLimits

0xdb40,	// (0x0009cee9) navi_pane_mp_g1

0xdb54,	// (0x0009cefd) navi_pane_mp_g2_ParamLimits

0xdb54,	// (0x0009cefd) navi_pane_mp_g2

0xdb60,	// (0x0009cf09) navi_pane_mp_g3_ParamLimits

0xdb60,	// (0x0009cf09) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0009e7b9) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0009e7b9) navi_pane_mp_g

0xdb6c,	// (0x0009cf15) navi_pane_mp_t1

0xdb7a,	// (0x0009cf23) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0009e7c0) navi_pane_mp_t

0xdbb6,	// (0x0009cf5f) navi_pane_vt_g1

0xdb6c,	// (0x0009cf15) navi_pane_vt_t1

0xdbbe,	// (0x0009cf67) navi_slider_pane

0xdbc6,	// (0x0009cf6f) zooming_pane

0xdbce,	// (0x0009cf77) navi_slider_pane_g1

0xad66,	// (0x0009a10f) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0009e7c7) navi_slider_pane_g

0xdbf2,	// (0x0009cf9b) aid_levels_zoom

0xdbfa,	// (0x0009cfa3) zooming_pane_g1

0xdc02,	// (0x0009cfab) zooming_pane_g2

0xdc02,	// (0x0009cfab) zooming_pane_g3

0x0002,

0xf42d,	// (0x0009e7d6) zooming_pane_g

0xdc0a,	// (0x0009cfb3) level_10_zoom

0xdc13,	// (0x0009cfbc) level_11_zoom

0xdc1c,	// (0x0009cfc5) level_1_zoom

0xdc25,	// (0x0009cfce) level_2_zoom

0xdc2e,	// (0x0009cfd7) level_3_zoom

0xdc37,	// (0x0009cfe0) level_4_zoom

0xdc40,	// (0x0009cfe9) level_5_zoom

0xdc49,	// (0x0009cff2) level_6_zoom

0xdc52,	// (0x0009cffb) level_7_zoom

0xdc5b,	// (0x0009d004) level_8_zoom

0xdc64,	// (0x0009d00d) level_9_zoom

0xdc75,	// (0x0009d01e) popup_phob_thumbnail_window_g1

0xdc7d,	// (0x0009d026) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0009e7dd) popup_phob_thumbnail_window_g

0xef78,	// (0x0009e321) level_1_location

0xef80,	// (0x0009e329) level_2_location

0xef88,	// (0x0009e331) level_3_location

0xef90,	// (0x0009e339) level_4_location

0xdbc6,	// (0x0009cf6f) level_5_location

0x2f34,	// (0x000922dd) mce_icon_pane_g1

0x2f3c,	// (0x000922e5) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0009e7e2) mce_icon_pane_g

0x2f44,	// (0x000922ed) main_mup_pane_g1_ParamLimits

0x2f44,	// (0x000922ed) main_mup_pane_g1

0x2f5a,	// (0x00092303) main_mup_pane_g2_ParamLimits

0x2f5a,	// (0x00092303) main_mup_pane_g2

0x2f72,	// (0x0009231b) main_mup_pane_g3_ParamLimits

0x2f72,	// (0x0009231b) main_mup_pane_g3

0x2f8a,	// (0x00092333) main_mup_pane_g4_ParamLimits

0x2f8a,	// (0x00092333) main_mup_pane_g4

0x2f9c,	// (0x00092345) main_mup_pane_g5_ParamLimits

0x2f9c,	// (0x00092345) main_mup_pane_g5

0x2fb8,	// (0x00092361) main_mup_pane_g6_ParamLimits

0x2fb8,	// (0x00092361) main_mup_pane_g6

0x2fd2,	// (0x0009237b) main_mup_pane_g7_ParamLimits

0x2fd2,	// (0x0009237b) main_mup_pane_g7

0x2ff0,	// (0x00092399) main_mup_pane_g8_ParamLimits

0x2ff0,	// (0x00092399) main_mup_pane_g8

0x300e,	// (0x000923b7) main_mup_pane_g9_ParamLimits

0x300e,	// (0x000923b7) main_mup_pane_g9

0x302a,	// (0x000923d3) main_mup_pane_g10_ParamLimits

0x302a,	// (0x000923d3) main_mup_pane_g10

0x3048,	// (0x000923f1) main_mup_pane_g11_ParamLimits

0x3048,	// (0x000923f1) main_mup_pane_g11

0x3062,	// (0x0009240b) main_mup_pane_g12_ParamLimits

0x3062,	// (0x0009240b) main_mup_pane_g12

0x3078,	// (0x00092421) main_mup_pane_g13_ParamLimits

0x3078,	// (0x00092421) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0009e7e7) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0009e7e7) main_mup_pane_g

0x308c,	// (0x00092435) main_mup_pane_t1_ParamLimits

0x308c,	// (0x00092435) main_mup_pane_t1

0x30a8,	// (0x00092451) main_mup_pane_t2_ParamLimits

0x30a8,	// (0x00092451) main_mup_pane_t2

0x30c0,	// (0x00092469) main_mup_pane_t3_ParamLimits

0x30c0,	// (0x00092469) main_mup_pane_t3

0x30d8,	// (0x00092481) main_mup_pane_t4_ParamLimits

0x30d8,	// (0x00092481) main_mup_pane_t4

0x30f6,	// (0x0009249f) main_mup_pane_t5_ParamLimits

0x30f6,	// (0x0009249f) main_mup_pane_t5

0x310b,	// (0x000924b4) main_mup_pane_t6_ParamLimits

0x310b,	// (0x000924b4) main_mup_pane_t6

0x0005,

0xf459,	// (0x0009e802) main_mup_pane_t_ParamLimits

0xf459,	// (0x0009e802) main_mup_pane_t

0x311d,	// (0x000924c6) mup_progress_pane_ParamLimits

0x311d,	// (0x000924c6) mup_progress_pane

0x3129,	// (0x000924d2) mup_visualizer_pane_ParamLimits

0x3129,	// (0x000924d2) mup_visualizer_pane

0x315d,	// (0x00092506) mup_volume_pane_ParamLimits

0x315d,	// (0x00092506) mup_volume_pane

0xd582,	// (0x0009c92b) mup_visualizer_pane_g1_ParamLimits

0xd582,	// (0x0009c92b) mup_visualizer_pane_g1

0xd582,	// (0x0009c92b) mup_visualizer_pane_g2_ParamLimits

0xd582,	// (0x0009c92b) mup_visualizer_pane_g2

0xdafb,	// (0x0009cea4) mup_visualizer_pane_g3_ParamLimits

0xdafb,	// (0x0009cea4) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0009e80f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0009e80f) mup_visualizer_pane_g

0xa447,	// (0x000997f0) mup_volume_pane_g1

0xdc8d,	// (0x0009d036) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0009e816) mup_volume_pane_g

0xa447,	// (0x000997f0) mup_progress_pane_g1

0xdc96,	// (0x0009d03f) mup_progress_pane_g2

0xdc9f,	// (0x0009d048) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0009e81b) mup_progress_pane_g

0xa07c,	// (0x00099425) bg_popup_window_pane_cp05

0xdca8,	// (0x0009d051) heading_pane_cp02_ParamLimits

0xdca8,	// (0x0009d051) heading_pane_cp02

0xdcc4,	// (0x0009d06d) list_popup_blid_pane

0xdccc,	// (0x0009d075) list_blid_sat_info_pane_ParamLimits

0xdccc,	// (0x0009d075) list_blid_sat_info_pane

0xdcdf,	// (0x0009d088) list_blid_sat_info_pane_g1

0xdce7,	// (0x0009d090) list_blid_sat_info_pane_t1

0x3287,	// (0x00092630) mup_equalizer_pane_ParamLimits

0x3287,	// (0x00092630) mup_equalizer_pane

0x32a8,	// (0x00092651) mup_equalizer_pane_cp1_ParamLimits

0x32a8,	// (0x00092651) mup_equalizer_pane_cp1

0x32c9,	// (0x00092672) mup_equalizer_pane_cp2_ParamLimits

0x32c9,	// (0x00092672) mup_equalizer_pane_cp2

0x32ee,	// (0x00092697) mup_equalizer_pane_cp3_ParamLimits

0x32ee,	// (0x00092697) mup_equalizer_pane_cp3

0x3317,	// (0x000926c0) mup_equalizer_pane_cp4_ParamLimits

0x3317,	// (0x000926c0) mup_equalizer_pane_cp4

0x3340,	// (0x000926e9) mup_equalizer_pane_cp5

0x3358,	// (0x00092701) mup_equalizer_pane_cp6

0x3370,	// (0x00092719) mup_equalizer_pane_cp7

0xee92,	// (0x0009e23b) bg_popup_call_poc_act_pane_g9

0xee9a,	// (0x0009e243) bg_popup_call_poc_act_pane_g10

0xeea2,	// (0x0009e24b) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2d7,	// (0x00099680) mup_scale_pane

0xa447,	// (0x000997f0) mup_scale_pane_g1

0xdcf5,	// (0x0009d09e) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0009e837) mup_scale_pane_g

0xdd19,	// (0x0009d0c2) msg_data_pane

0xdd21,	// (0x0009d0ca) scroll_pane_cp017

0x339a,	// (0x00092743) bg_list_pane_cp04_ParamLimits

0x339a,	// (0x00092743) bg_list_pane_cp04

0xdd29,	// (0x0009d0d2) msg_data_pane_g1

0x33c2,	// (0x0009276b) msg_data_pane_g2

0x33cc,	// (0x00092775) msg_data_pane_g3

0x33d6,	// (0x0009277f) msg_data_pane_g4

0x33de,	// (0x00092787) msg_data_pane_g5

0x33e6,	// (0x0009278f) msg_data_pane_g6

0x33ee,	// (0x00092797) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0009e846) msg_data_pane_g

0x33f6,	// (0x0009279f) msg_text_pane_ParamLimits

0x33f6,	// (0x0009279f) msg_text_pane

0x3422,	// (0x000927cb) qrid_highlight_pane_cp011_ParamLimits

0x3422,	// (0x000927cb) qrid_highlight_pane_cp011

0xa07c,	// (0x00099425) msg_body_pane

0xa07c,	// (0x00099425) msg_header_pane

0xdd3a,	// (0x0009d0e3) input_focus_pane_cp07

0x3446,	// (0x000927ef) msg_header_pane_t1_ParamLimits

0x3446,	// (0x000927ef) msg_header_pane_t1

0x345a,	// (0x00092803) msg_header_pane_t2_ParamLimits

0x345a,	// (0x00092803) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0009e85a) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0009e85a) msg_header_pane_t

0xdd4f,	// (0x0009d0f8) msg_body_pane_g1

0x346c,	// (0x00092815) msg_body_pane_t1_ParamLimits

0x346c,	// (0x00092815) msg_body_pane_t1

0x349d,	// (0x00092846) msg_body_pane_t2_ParamLimits

0x349d,	// (0x00092846) msg_body_pane_t2

0x34af,	// (0x00092858) msg_body_pane_t3_ParamLimits

0x34af,	// (0x00092858) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0009e85f) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0009e85f) msg_body_pane_t

0x34fb,	// (0x000928a4) main_viewer_pane_g1_ParamLimits

0x34fb,	// (0x000928a4) main_viewer_pane_g1

0x3509,	// (0x000928b2) main_viewer_pane_g2_ParamLimits

0x3509,	// (0x000928b2) main_viewer_pane_g2

0x3517,	// (0x000928c0) main_viewer_pane_g3_ParamLimits

0x3517,	// (0x000928c0) main_viewer_pane_g3

0x3526,	// (0x000928cf) main_viewer_pane_g4_ParamLimits

0x3526,	// (0x000928cf) main_viewer_pane_g4

0xad90,	// (0x0009a139) main_viewer_pane_g5_ParamLimits

0xad90,	// (0x0009a139) main_viewer_pane_g5

0xad90,	// (0x0009a139) main_viewer_pane_g7_ParamLimits

0xad90,	// (0x0009a139) main_viewer_pane_g7

0xada2,	// (0x0009a14b) main_viewer_pane_g8_ParamLimits

0xada2,	// (0x0009a14b) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0009e86f) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0009e86f) main_viewer_pane_g

0xdd57,	// (0x0009d100) viewer_content_pane_ParamLimits

0xdd57,	// (0x0009d100) viewer_content_pane

0x3564,	// (0x0009290d) main_postcard_pane_g1_ParamLimits

0x3564,	// (0x0009290d) main_postcard_pane_g1

0x357a,	// (0x00092923) main_postcard_pane_g2_ParamLimits

0x357a,	// (0x00092923) main_postcard_pane_g2

0x3590,	// (0x00092939) main_postcard_pane_g3_ParamLimits

0x3590,	// (0x00092939) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0009e880) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0009e880) main_postcard_pane_g

0x35a7,	// (0x00092950) main_postcard_pane_g4

0xf0c2,	// (0x0009e46b) smil_status_volume_pane_g2

0x35ea,	// (0x00092993) postcard_pane_ParamLimits

0x35ea,	// (0x00092993) postcard_pane

0xdd65,	// (0x0009d10e) postcard_pane_g1_ParamLimits

0xdd65,	// (0x0009d10e) postcard_pane_g1

0x363a,	// (0x000929e3) postcard_pane_g2_ParamLimits

0x363a,	// (0x000929e3) postcard_pane_g2

0x3646,	// (0x000929ef) postcard_pane_g3_ParamLimits

0x3646,	// (0x000929ef) postcard_pane_g3

0xdd73,	// (0x0009d11c) postcard_pane_g4_ParamLimits

0xdd73,	// (0x0009d11c) postcard_pane_g4

0x3652,	// (0x000929fb) postcard_pane_g5_ParamLimits

0x3652,	// (0x000929fb) postcard_pane_g5

0x3664,	// (0x00092a0d) postcard_pane_g6_ParamLimits

0x3664,	// (0x00092a0d) postcard_pane_g6

0xdd65,	// (0x0009d10e) postcard_pane_g7_ParamLimits

0xdd65,	// (0x0009d10e) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0009e88d) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0009e88d) postcard_pane_g

0x367c,	// (0x00092a25) main_mp2_pane_g1_ParamLimits

0x367c,	// (0x00092a25) main_mp2_pane_g1

0x368a,	// (0x00092a33) main_mp2_pane_g2_ParamLimits

0x368a,	// (0x00092a33) main_mp2_pane_g2

0x3696,	// (0x00092a3f) main_mp2_pane_g3_ParamLimits

0x3696,	// (0x00092a3f) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0009e89c) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0009e89c) main_mp2_pane_g

0x36a2,	// (0x00092a4b) main_mp2_pane_t1_ParamLimits

0x36a2,	// (0x00092a4b) main_mp2_pane_t1

0x36b9,	// (0x00092a62) main_mp2_pane_t2_ParamLimits

0x36b9,	// (0x00092a62) main_mp2_pane_t2

0x36cd,	// (0x00092a76) main_mp2_pane_t3_ParamLimits

0x36cd,	// (0x00092a76) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0009e8a3) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0009e8a3) main_mp2_pane_t

0xdd81,	// (0x0009d12a) pec_content_pane_ParamLimits

0xdd81,	// (0x0009d12a) pec_content_pane

0xa81f,	// (0x00099bc8) scroll_pane_cp015

0xdd93,	// (0x0009d13c) pec_attribute_pane_ParamLimits

0xdd93,	// (0x0009d13c) pec_attribute_pane

0x36df,	// (0x00092a88) pec_content_pane_g1_ParamLimits

0x36df,	// (0x00092a88) pec_content_pane_g1

0xdda3,	// (0x0009d14c) pec_content_pane_t1_ParamLimits

0xdda3,	// (0x0009d14c) pec_content_pane_t1

0xddb5,	// (0x0009d15e) pec_content_pane_t2_ParamLimits

0xddb5,	// (0x0009d15e) pec_content_pane_t2

0x0001,

0x0014,	// (0x0008f3bd) pec_content_pane_t_ParamLimits

0x0014,	// (0x0008f3bd) pec_content_pane_t

0x36eb,	// (0x00092a94) list_single_graphic_pane_cp01_ParamLimits

0x36eb,	// (0x00092a94) list_single_graphic_pane_cp01

0xa2d7,	// (0x00099680) bg_popup_sub_pane_cp04

0xddc7,	// (0x0009d170) popup_mup_playback_window_g1

0xddd3,	// (0x0009d17c) popup_mup_playback_window_t1

0xdde8,	// (0x0009d191) popup_mup_playback_window_t2

0x0001,

0x0019,	// (0x0008f3c2) popup_mup_playback_window_t

0xde1f,	// (0x0009d1c8) main_image_pane_g1_ParamLimits

0xde1f,	// (0x0009d1c8) main_image_pane_g1

0xde62,	// (0x0009d20b) scroll_pane_cp018_ParamLimits

0xde62,	// (0x0009d20b) scroll_pane_cp018

0xde7a,	// (0x0009d223) scroll_pane_cp016_ParamLimits

0xde7a,	// (0x0009d223) scroll_pane_cp016

0x37bd,	// (0x00092b66) smil2_image_pane_ParamLimits

0x37bd,	// (0x00092b66) smil2_image_pane

0x37f3,	// (0x00092b9c) smil2_root_pane_ParamLimits

0x37f3,	// (0x00092b9c) smil2_root_pane

0x382b,	// (0x00092bd4) smil2_text_pane_ParamLimits

0x382b,	// (0x00092bd4) smil2_text_pane

0xa07c,	// (0x00099425) bg_list_pane_cp06

0xdeb6,	// (0x0009d25f) grid_radio_pane

0xa07c,	// (0x00099425) bg_popup_window_pane_cp06

0xdec0,	// (0x0009d269) main_fmradio_pane_t1

0xd57a,	// (0x0009c923) heading_pane_cp04

0xdece,	// (0x0009d277) main_fmradio_pane_t2

0xeeaa,	// (0x0009e253) popup_cale_lunar_info_window_g1

0xdedc,	// (0x0009d285) main_fmradio_pane_t3

0xeeb2,	// (0x0009e25b) popup_cale_lunar_info_window_g2

0xdeec,	// (0x0009d295) main_fmradio_pane_t4

0x0001,

0xdefa,	// (0x0009d2a3) main_fmradio_pane_t5

0x0004,

0x00f4,	// (0x0008f49d) popup_cale_lunar_info_window_g

0x002e,	// (0x0008f3d7) main_fmradio_pane_t

0xdf08,	// (0x0009d2b1) wait_bar_pane_cp03

0xdf10,	// (0x0009d2b9) cell_fmradio_pane_ParamLimits

0xdf10,	// (0x0009d2b9) cell_fmradio_pane

0xdd65,	// (0x0009d10e) cell_fmradio_pane_g1_ParamLimits

0xdd65,	// (0x0009d10e) cell_fmradio_pane_g1

0xa07c,	// (0x00099425) grid_highlight_pane_cp011

0xdf25,	// (0x0009d2ce) poc_content_pane_ParamLimits

0xdf25,	// (0x0009d2ce) poc_content_pane

0xdf37,	// (0x0009d2e0) scroll_pane_cp019

0x38bb,	// (0x00092c64) popup_call_poc_act_window_ParamLimits

0x38bb,	// (0x00092c64) popup_call_poc_act_window

0x38df,	// (0x00092c88) popup_call_poc_inact_window_ParamLimits

0x38df,	// (0x00092c88) popup_call_poc_inact_window

0x00cb,	// (0x0008f474) bg_popup_call_poc_act_pane_g

0xee22,	// (0x0009e1cb) bg_popup_call_poc_inact_pane_g1

0xee2a,	// (0x0009e1d3) bg_popup_call_poc_inact_pane_g2

0xdf3f,	// (0x0009d2e8) popup_call_poc_act_window_g2

0xee32,	// (0x0009e1db) bg_popup_call_poc_inact_pane_g3

0xee3a,	// (0x0009e1e3) bg_popup_call_poc_inact_pane_g4

0xee42,	// (0x0009e1eb) bg_popup_call_poc_inact_pane_g5

0xdf47,	// (0x0009d2f0) popup_call_poc_act_window_t1_ParamLimits

0xdf47,	// (0x0009d2f0) popup_call_poc_act_window_t1

0xdf6f,	// (0x0009d318) popup_call_poc_act_window_t2_ParamLimits

0xdf6f,	// (0x0009d318) popup_call_poc_act_window_t2

0xdf97,	// (0x0009d340) popup_call_poc_act_window_t3_ParamLimits

0xdf97,	// (0x0009d340) popup_call_poc_act_window_t3

0xdfbf,	// (0x0009d368) popup_call_poc_act_window_t4_ParamLimits

0xdfbf,	// (0x0009d368) popup_call_poc_act_window_t4

0x0003,

0x0039,	// (0x0008f3e2) popup_call_poc_act_window_t_ParamLimits

0x0039,	// (0x0008f3e2) popup_call_poc_act_window_t

0xee4a,	// (0x0009e1f3) bg_popup_call_poc_inact_pane_g6

0xee52,	// (0x0009e1fb) bg_popup_call_poc_inact_pane_g7

0xee5a,	// (0x0009e203) bg_popup_call_poc_inact_pane_g8

0xdfd1,	// (0x0009d37a) popup_call_poc_inact_window_g2

0xee62,	// (0x0009e20b) bg_popup_call_poc_inact_pane_g9

0x0008,

0x00b8,	// (0x0008f461) bg_popup_call_poc_inact_pane_g

0xdfd9,	// (0x0009d382) popup_call_poc_inact_window_t1_ParamLimits

0xdfd9,	// (0x0009d382) popup_call_poc_inact_window_t1

0xdfee,	// (0x0009d397) popup_call_poc_inact_window_t2_ParamLimits

0xdfee,	// (0x0009d397) popup_call_poc_inact_window_t2

0xe003,	// (0x0009d3ac) popup_call_poc_inact_window_t3_ParamLimits

0xe003,	// (0x0009d3ac) popup_call_poc_inact_window_t3

0x0002,

0x0042,	// (0x0008f3eb) popup_call_poc_inact_window_t_ParamLimits

0x0042,	// (0x0008f3eb) popup_call_poc_inact_window_t

0xf022,	// (0x0009e3cb) context_pane_ParamLimits

0x418a,	// (0x00093533) signal_pane_ParamLimits

0xdbc6,	// (0x0009cf6f) main_call2_pane

0xf010,	// (0x0009e3b9) popup_phob_thumbnail2_window_ParamLimits

0xf010,	// (0x0009e3b9) popup_phob_thumbnail2_window

0xad78,	// (0x0009a121) aid_hotspot_pointer_arrow_pane

0xad80,	// (0x0009a129) aid_hotspot_pointer_hand_pane

0x3c4a,	// (0x00092ff3) phob_pre_status_pane_g5

0x17db,	// (0x00090b84) cams_zoom_pane_ParamLimits

0x17ea,	// (0x00090b93) image_vga_pane_ParamLimits

0x1804,	// (0x00090bad) main_camera_pane_g1_ParamLimits

0x1816,	// (0x00090bbf) main_camera_pane_g2_ParamLimits

0x1826,	// (0x00090bcf) main_camera_pane_g3_ParamLimits

0x183a,	// (0x00090be3) main_camera_pane_g4_ParamLimits

0x184e,	// (0x00090bf7) main_camera_pane_g5_ParamLimits

0x1862,	// (0x00090c0b) main_camera_pane_g6_ParamLimits

0x1876,	// (0x00090c1f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009e5d7) main_camera_pane_g_ParamLimits

0x188a,	// (0x00090c33) main_camera_pane_t1_ParamLimits

0x18a0,	// (0x00090c49) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009e5e8) main_camera_pane_t_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_preview_window_pane_cp01

0xe018,	// (0x0009d3c1) popup_phob_thumbnail2_window_g1_ParamLimits

0xe018,	// (0x0009d3c1) popup_phob_thumbnail2_window_g1

0xa07c,	// (0x00099425) call2_cli_visual_pane

0x3913,	// (0x00092cbc) popup_call2_audio_conf_window_ParamLimits

0x3913,	// (0x00092cbc) popup_call2_audio_conf_window

0x393b,	// (0x00092ce4) popup_call2_audio_first_window_ParamLimits

0x393b,	// (0x00092ce4) popup_call2_audio_first_window

0x39d1,	// (0x00092d7a) popup_call2_audio_in_window_ParamLimits

0x39d1,	// (0x00092d7a) popup_call2_audio_in_window

0x3a1d,	// (0x00092dc6) popup_call2_audio_out_window_ParamLimits

0x3a1d,	// (0x00092dc6) popup_call2_audio_out_window

0x3a8f,	// (0x00092e38) popup_call2_audio_second_window_ParamLimits

0x3a8f,	// (0x00092e38) popup_call2_audio_second_window

0x3af5,	// (0x00092e9e) popup_call2_audio_wait_window_ParamLimits

0x3af5,	// (0x00092e9e) popup_call2_audio_wait_window

0xa07c,	// (0x00099425) bg_popup_call2_act_pane_cp03

0xa2b9,	// (0x00099662) list_conf_pane_cp

0xe024,	// (0x0009d3cd) popup_call2_audio_conf_window_t1

0xe032,	// (0x0009d3db) list_single_graphic_popup_conf2_pane_ParamLimits

0xe032,	// (0x0009d3db) list_single_graphic_popup_conf2_pane

0xd9e7,	// (0x0009cd90) list_highlight_pane_cp04

0xe045,	// (0x0009d3ee) list_single_graphic_popup_conf2_pane_g1

0xd9f8,	// (0x0009cda1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0049,	// (0x0008f3f2) list_single_graphic_popup_conf2_pane_g

0xe04f,	// (0x0009d3f8) list_single_graphic_popup_conf2_pane_t1

0xe05d,	// (0x0009d406) bg_popup_call2_act_pane_cp01_ParamLimits

0xe05d,	// (0x0009d406) bg_popup_call2_act_pane_cp01

0xe0e7,	// (0x0009d490) call_type_pane_cp05_ParamLimits

0xe0e7,	// (0x0009d490) call_type_pane_cp05

0xe13b,	// (0x0009d4e4) popup_call2_audio_second_window_g1_ParamLimits

0xe13b,	// (0x0009d4e4) popup_call2_audio_second_window_g1

0xe18f,	// (0x0009d538) popup_call2_audio_second_window_g2_ParamLimits

0xe18f,	// (0x0009d538) popup_call2_audio_second_window_g2

0x0002,

0x004e,	// (0x0008f3f7) popup_call2_audio_second_window_g_ParamLimits

0x004e,	// (0x0008f3f7) popup_call2_audio_second_window_g

0xe1f4,	// (0x0009d59d) popup_call2_audio_second_window_t1_ParamLimits

0xe1f4,	// (0x0009d59d) popup_call2_audio_second_window_t1

0xe2af,	// (0x0009d658) popup_call2_audio_second_window_t2_ParamLimits

0xe2af,	// (0x0009d658) popup_call2_audio_second_window_t2

0xe302,	// (0x0009d6ab) popup_call2_audio_second_window_t3_ParamLimits

0xe302,	// (0x0009d6ab) popup_call2_audio_second_window_t3

0x0003,

0x0055,	// (0x0008f3fe) popup_call2_audio_second_window_t_ParamLimits

0x0055,	// (0x0008f3fe) popup_call2_audio_second_window_t

0xa07c,	// (0x00099425) bg_popup_call2_in_pane_cp02

0xa086,	// (0x0009942f) call_type_pane_cp04

0xa08e,	// (0x00099437) popup_call2_audio_wait_window_g1

0xa096,	// (0x0009943f) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009e4c4) popup_call2_audio_wait_window_g

0xa09e,	// (0x00099447) popup_call2_audio_wait_window_t3

0xe3f5,	// (0x0009d79e) bg_popup_call2_act_pane_ParamLimits

0xe3f5,	// (0x0009d79e) bg_popup_call2_act_pane

0xe4b5,	// (0x0009d85e) call_type_pane_cp03_ParamLimits

0xe4b5,	// (0x0009d85e) call_type_pane_cp03

0xe519,	// (0x0009d8c2) popup_call2_audio_first_window_g1_ParamLimits

0xe519,	// (0x0009d8c2) popup_call2_audio_first_window_g1

0xe589,	// (0x0009d932) popup_call2_audio_first_window_g2_ParamLimits

0xe589,	// (0x0009d932) popup_call2_audio_first_window_g2

0xd582,	// (0x0009c92b) popup_call2_audio_first_window_g3_ParamLimits

0xd582,	// (0x0009c92b) popup_call2_audio_first_window_g3

0x0004,

0xf511,	// (0x0009e8ba) popup_call2_audio_first_window_g_ParamLimits

0xf511,	// (0x0009e8ba) popup_call2_audio_first_window_g

0xe667,	// (0x0009da10) popup_call2_audio_first_window_t1_ParamLimits

0xe667,	// (0x0009da10) popup_call2_audio_first_window_t1

0xe76a,	// (0x0009db13) popup_call2_audio_first_window_t4_ParamLimits

0xe76a,	// (0x0009db13) popup_call2_audio_first_window_t4

0xe84d,	// (0x0009dbf6) popup_call2_audio_first_window_t5_ParamLimits

0xe84d,	// (0x0009dbf6) popup_call2_audio_first_window_t5

0x0003,

0x0069,	// (0x0008f412) popup_call2_audio_first_window_t_ParamLimits

0x0069,	// (0x0008f412) popup_call2_audio_first_window_t

0xa2cf,	// (0x00099678) bg_popup_call2_act_pane_g1

0xeebc,	// (0x0009e265) popup_cale_lunar_info_window_t1

0xeeca,	// (0x0009e273) popup_cale_lunar_info_window_t2

0xeed8,	// (0x0009e281) popup_cale_lunar_info_window_t3

0xa07c,	// (0x00099425) bg_popup_call2_bubble_pane

0xe94e,	// (0x0009dcf7) bg_popup_call2_in_pane_cp01_ParamLimits

0xe94e,	// (0x0009dcf7) bg_popup_call2_in_pane_cp01

0x9d58,	// (0x00099101) call_type_pane_cp02

0xe996,	// (0x0009dd3f) popup_call2_audio_out_window_g1_ParamLimits

0xe996,	// (0x0009dd3f) popup_call2_audio_out_window_g1

0xe9c2,	// (0x0009dd6b) popup_call2_audio_out_window_g2_ParamLimits

0xe9c2,	// (0x0009dd6b) popup_call2_audio_out_window_g2

0xe9ea,	// (0x0009dd93) popup_call2_audio_out_window_g3_ParamLimits

0xe9ea,	// (0x0009dd93) popup_call2_audio_out_window_g3

0x0003,

0x0072,	// (0x0008f41b) popup_call2_audio_out_window_g_ParamLimits

0x0072,	// (0x0008f41b) popup_call2_audio_out_window_g

0xea25,	// (0x0009ddce) popup_call2_audio_out_window_t1_ParamLimits

0xea25,	// (0x0009ddce) popup_call2_audio_out_window_t1

0xea84,	// (0x0009de2d) popup_call2_audio_out_window_t2_ParamLimits

0xea84,	// (0x0009de2d) popup_call2_audio_out_window_t2

0xead8,	// (0x0009de81) popup_call2_audio_out_window_t3_ParamLimits

0xead8,	// (0x0009de81) popup_call2_audio_out_window_t3

0xeaee,	// (0x0009de97) popup_call2_audio_out_window_t4_ParamLimits

0xeaee,	// (0x0009de97) popup_call2_audio_out_window_t4

0xeb04,	// (0x0009dead) popup_call2_audio_out_window_t5_ParamLimits

0xeb04,	// (0x0009dead) popup_call2_audio_out_window_t5

0x0005,

0x007b,	// (0x0008f424) popup_call2_audio_out_window_t_ParamLimits

0x007b,	// (0x0008f424) popup_call2_audio_out_window_t

0xeb68,	// (0x0009df11) bg_popup_call2_in_pane_ParamLimits

0xeb68,	// (0x0009df11) bg_popup_call2_in_pane

0xebc4,	// (0x0009df6d) popup_call2_audio_in_window_g1_ParamLimits

0xebc4,	// (0x0009df6d) popup_call2_audio_in_window_g1

0xebfc,	// (0x0009dfa5) popup_call2_audio_in_window_g2_ParamLimits

0xebfc,	// (0x0009dfa5) popup_call2_audio_in_window_g2

0xec34,	// (0x0009dfdd) popup_call2_audio_in_window_g3_ParamLimits

0xec34,	// (0x0009dfdd) popup_call2_audio_in_window_g3

0x0003,

0x0088,	// (0x0008f431) popup_call2_audio_in_window_g_ParamLimits

0x0088,	// (0x0008f431) popup_call2_audio_in_window_g

0xec8c,	// (0x0009e035) popup_call2_audio_in_window_t1_ParamLimits

0xec8c,	// (0x0009e035) popup_call2_audio_in_window_t1

0xed0c,	// (0x0009e0b5) popup_call2_audio_in_window_t2_ParamLimits

0xed0c,	// (0x0009e0b5) popup_call2_audio_in_window_t2

0xed8c,	// (0x0009e135) popup_call2_audio_in_window_t3_ParamLimits

0xed8c,	// (0x0009e135) popup_call2_audio_in_window_t3

0xeda6,	// (0x0009e14f) popup_call2_audio_in_window_t4_ParamLimits

0xeda6,	// (0x0009e14f) popup_call2_audio_in_window_t4

0xedb8,	// (0x0009e161) popup_call2_audio_in_window_t5_ParamLimits

0xedb8,	// (0x0009e161) popup_call2_audio_in_window_t5

0xedcd,	// (0x0009e176) popup_call2_audio_in_window_t6_ParamLimits

0xedcd,	// (0x0009e176) popup_call2_audio_in_window_t6

0x0005,

0x0091,	// (0x0008f43a) popup_call2_audio_in_window_t_ParamLimits

0x0091,	// (0x0008f43a) popup_call2_audio_in_window_t

0xa2cf,	// (0x00099678) bg_popup_call2_in_pane_g1

0xeee6,	// (0x0009e28f) popup_cale_lunar_info_window_t4

0x0003,

0x00f9,	// (0x0008f4a2) popup_cale_lunar_info_window_t

0xa2d7,	// (0x00099680) bg_popup_call2_rect_pane_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_call2_rect_pane

0xa07c,	// (0x00099425) call2_cli_visual_graphic_pane

0xa07c,	// (0x00099425) call2_cli_visual_text_pane

0xadba,	// (0x0009a163) smil_status_volume_pane_g3

0x0002,

0xa447,	// (0x000997f0) call2_cli_visual_graphic_pane_g1

0xa447,	// (0x000997f0) call2_cli_visual_graphic_pane_g2

0xa447,	// (0x000997f0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf51c,	// (0x0009e8c5) call2_cli_visual_graphic_pane_g

0xede2,	// (0x0009e18b) bg_popup_call2_rect_pane_g1

0xa4ef,	// (0x00099898) bg_popup_call2_rect_pane_g2

0xedea,	// (0x0009e193) bg_popup_call2_rect_pane_g3

0xedf2,	// (0x0009e19b) bg_popup_call2_rect_pane_g4

0xedfa,	// (0x0009e1a3) bg_popup_call2_rect_pane_g5

0xee02,	// (0x0009e1ab) bg_popup_call2_rect_pane_g6

0xee0a,	// (0x0009e1b3) bg_popup_call2_rect_pane_g7

0xee12,	// (0x0009e1bb) bg_popup_call2_rect_pane_g8

0xee1a,	// (0x0009e1c3) bg_popup_call2_rect_pane_g9

0x0008,

0xf523,	// (0x0009e8cc) bg_popup_call2_rect_pane_g

0xee22,	// (0x0009e1cb) bg_popup_call2_bubble_pane_g1

0xee2a,	// (0x0009e1d3) bg_popup_call2_bubble_pane_g2

0xee32,	// (0x0009e1db) bg_popup_call2_bubble_pane_g3

0xee3a,	// (0x0009e1e3) bg_popup_call2_bubble_pane_g4

0xee42,	// (0x0009e1eb) bg_popup_call2_bubble_pane_g5

0xee4a,	// (0x0009e1f3) bg_popup_call2_bubble_pane_g6

0xee52,	// (0x0009e1fb) bg_popup_call2_bubble_pane_g7

0xee5a,	// (0x0009e203) bg_popup_call2_bubble_pane_g8

0xee62,	// (0x0009e20b) bg_popup_call2_bubble_pane_g9

0x0008,

0x00b8,	// (0x0008f461) bg_popup_call2_bubble_pane_g

0x13e4,	// (0x0009078d) aid_cale_week_size_cell_pane

0x18ba,	// (0x00090c63) aid_cams_cif_uncrop_pane_ParamLimits

0x18ba,	// (0x00090c63) aid_cams_cif_uncrop_pane

0x1a73,	// (0x00090e1c) aid_cams_size_cell_ParamLimits

0x1a73,	// (0x00090e1c) aid_cams_size_cell

0x1a87,	// (0x00090e30) grid_cams_pane_ParamLimits

0x1aa1,	// (0x00090e4a) linegrid_cams_pane_ParamLimits

0x1c9b,	// (0x00091044) call_video_pane_t1

0x1cb5,	// (0x0009105e) call_video_pane_t2

0x0001,

0xf292,	// (0x0009e63b) call_video_pane_t

0x2100,	// (0x000914a9) aid_cale_month_size_cell_pane_ParamLimits

0x2100,	// (0x000914a9) aid_cale_month_size_cell_pane

0xf566,	// (0x0009e90f) smil_status_volume_pane_g

0xadc7,	// (0x0009a170) volume_smil_pane_ParamLimits

0x0b79,	// (0x0008ff22) aid_popup2_width_pane

0x1355,	// (0x000906fe) cell_qdial_pane_g4_ParamLimits

0x1355,	// (0x000906fe) cell_qdial_pane_g4

0x2d8b,	// (0x00092134) aid_blid_cardinal_pane_ParamLimits

0x2d9b,	// (0x00092144) aid_blid_destination_pane_ParamLimits

0x2d9b,	// (0x00092144) aid_blid_destination_pane

0xa2d7,	// (0x00099680) bg_popup_call_poc_act_pane_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_call_poc_act_pane

0xa2d7,	// (0x00099680) bg_popup_call_poc_inact_pane_ParamLimits

0xa2d7,	// (0x00099680) bg_popup_call_poc_inact_pane

0xee6a,	// (0x0009e213) bg_popup_call_poc_act_pane_g1

0xee72,	// (0x0009e21b) bg_popup_call_poc_act_pane_g2

0xee7a,	// (0x0009e223) bg_popup_call_poc_act_pane_g3

0xee3a,	// (0x0009e1e3) bg_popup_call_poc_act_pane_g4

0xee42,	// (0x0009e1eb) bg_popup_call_poc_act_pane_g5

0xee82,	// (0x0009e22b) bg_popup_call_poc_act_pane_g6

0xee52,	// (0x0009e1fb) bg_popup_call_poc_act_pane_g7

0xee8a,	// (0x0009e233) bg_popup_call_poc_act_pane_g8

0xa07c,	// (0x00099425) main_usb_pane

0xefe7,	// (0x0009e390) popup_cale_lunar_info_window

0x1f80,	// (0x00091329) im_reading_pane_t1_ParamLimits

0xa777,	// (0x00099b20) list_im_pane_ParamLimits

0xa788,	// (0x00099b31) scroll_pane_cp07_ParamLimits

0xa07c,	// (0x00099425) grid_highlight_pane_cp012

0xa2d7,	// (0x00099680) mup_scale_pane_ParamLimits

0xdd65,	// (0x0009d10e) main_usb_pane_g1_ParamLimits

0xdd65,	// (0x0009d10e) main_usb_pane_g1

0x3b56,	// (0x00092eff) main_usb_pane_g2_ParamLimits

0x3b56,	// (0x00092eff) main_usb_pane_g2

0x0001,

0xf536,	// (0x0009e8df) main_usb_pane_g_ParamLimits

0xf536,	// (0x0009e8df) main_usb_pane_g

0x3b6c,	// (0x00092f15) main_usb_pane_t1_ParamLimits

0x3b6c,	// (0x00092f15) main_usb_pane_t1

0x3b7e,	// (0x00092f27) main_usb_pane_t2_ParamLimits

0x3b7e,	// (0x00092f27) main_usb_pane_t2

0x3b90,	// (0x00092f39) main_usb_pane_t3_ParamLimits

0x3b90,	// (0x00092f39) main_usb_pane_t3

0x3ba2,	// (0x00092f4b) main_usb_pane_t4_ParamLimits

0x3ba2,	// (0x00092f4b) main_usb_pane_t4

0x3bb7,	// (0x00092f60) main_usb_pane_t5_ParamLimits

0x3bb7,	// (0x00092f60) main_usb_pane_t5

0x3bcc,	// (0x00092f75) main_usb_pane_t6_ParamLimits

0x3bcc,	// (0x00092f75) main_usb_pane_t6

0x0005,

0xf53b,	// (0x0009e8e4) main_usb_pane_t_ParamLimits

0x2d2a,	// (0x000920d3) aid_text_placing

0x2d35,	// (0x000920de) main_location2_pane_t1_ParamLimits

0x2d4b,	// (0x000920f4) main_location2_pane_t2_ParamLimits

0x2d61,	// (0x0009210a) main_location2_pane_t3_ParamLimits

0x2d77,	// (0x00092120) main_location2_pane_t4_ParamLimits

0x2d77,	// (0x00092120) main_location2_pane_t4

0xf3f3,	// (0x0009e79c) main_location2_pane_t_ParamLimits

0xa313,	// (0x000996bc) find_pinb_pane_g2_ParamLimits

0xa313,	// (0x000996bc) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009e4ea) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009e4ea) find_pinb_pane_g

0xa31f,	// (0x000996c8) find_pinb_pane_t1_ParamLimits

0xa331,	// (0x000996da) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009e4ef) find_pinb_pane_t_ParamLimits

0xa07c,	// (0x00099425) main_call3_pane

0x2474,	// (0x0009181d) cale_month_day_heading_pane_t1_ParamLimits

0x24d2,	// (0x0009187b) cale_month_day_heading_pane_t2_ParamLimits

0x2537,	// (0x000918e0) cale_month_day_heading_pane_t3_ParamLimits

0x259c,	// (0x00091945) cale_month_day_heading_pane_t4_ParamLimits

0x2601,	// (0x000919aa) cale_month_day_heading_pane_t5_ParamLimits

0x2666,	// (0x00091a0f) cale_month_day_heading_pane_t6_ParamLimits

0x26cb,	// (0x00091a74) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0009e673) cale_month_day_heading_pane_t_ParamLimits

0xa9d4,	// (0x00099d7d) smil_status_volume_pane

0x360e,	// (0x000929b7) postcard_address_pane_ParamLimits

0x360e,	// (0x000929b7) postcard_address_pane

0x3624,	// (0x000929cd) postcard_message_pane_ParamLimits

0x3624,	// (0x000929cd) postcard_message_pane

0x3b2f,	// (0x00092ed8) call2_cli_visual_pane_t1_ParamLimits

0x3b2f,	// (0x00092ed8) call2_cli_visual_pane_t1

0x439b,	// (0x00093744) postcard_message_pane_t1_ParamLimits

0x439b,	// (0x00093744) postcard_message_pane_t1

0xf0d5,	// (0x0009e47e) postcard_address_pane_t1_ParamLimits

0xf0d5,	// (0x0009e47e) postcard_address_pane_t1

0x4387,	// (0x00093730) popup_call3_audio_in_window_ParamLimits

0x4387,	// (0x00093730) popup_call3_audio_in_window

0x420c,	// (0x000935b5) bg_popup_call3_in_pane_ParamLimits

0x420c,	// (0x000935b5) bg_popup_call3_in_pane

0x4288,	// (0x00093631) popup_call3_audio_in_window_g1_ParamLimits

0x4288,	// (0x00093631) popup_call3_audio_in_window_g1

0x42a8,	// (0x00093651) popup_call3_audio_in_window_g2_ParamLimits

0x42a8,	// (0x00093651) popup_call3_audio_in_window_g2

0x42c8,	// (0x00093671) popup_call3_audio_in_window_g3_ParamLimits

0x42c8,	// (0x00093671) popup_call3_audio_in_window_g3

0x0003,

0xf56d,	// (0x0009e916) popup_call3_audio_in_window_g_ParamLimits

0xf56d,	// (0x0009e916) popup_call3_audio_in_window_g

0x42f9,	// (0x000936a2) popup_call3_audio_in_window_t1_ParamLimits

0x42f9,	// (0x000936a2) popup_call3_audio_in_window_t1

0x4337,	// (0x000936e0) popup_call3_audio_in_window_t2_ParamLimits

0x4337,	// (0x000936e0) popup_call3_audio_in_window_t2

0x4375,	// (0x0009371e) popup_call3_audio_in_window_t3_ParamLimits

0x4375,	// (0x0009371e) popup_call3_audio_in_window_t3

0x0002,

0xf576,	// (0x0009e91f) popup_call3_audio_in_window_t_ParamLimits

0xf576,	// (0x0009e91f) popup_call3_audio_in_window_t

0xdbc6,	// (0x0009cf6f) bg_popup_call3_rect_pane

0xede2,	// (0x0009e18b) bg_popup_call3_rect_pane_g1

0xa4ef,	// (0x00099898) bg_popup_call3_rect_pane_g2

0xedea,	// (0x0009e193) bg_popup_call3_rect_pane_g3

0xedf2,	// (0x0009e19b) bg_popup_call3_rect_pane_g4

0xedfa,	// (0x0009e1a3) bg_popup_call3_rect_pane_g5

0xee02,	// (0x0009e1ab) bg_popup_call3_rect_pane_g6

0xee0a,	// (0x0009e1b3) bg_popup_call3_rect_pane_g7

0x3173,	// (0x0009251c) mup_visualizer_osc_pane

0xdc85,	// (0x0009d02e) mup_visualizer_spec_pane

0x423c,	// (0x000935e5) call3_video_qcif_pane_ParamLimits

0x423c,	// (0x000935e5) call3_video_qcif_pane

0x424f,	// (0x000935f8) call3_video_qcif_uncrop_pane_ParamLimits

0x424f,	// (0x000935f8) call3_video_qcif_uncrop_pane

0x425f,	// (0x00093608) call3_video_subqcif_pane_ParamLimits

0x425f,	// (0x00093608) call3_video_subqcif_pane

0x4275,	// (0x0009361e) call3_video_subqcif_uncrop_pane_ParamLimits

0x4275,	// (0x0009361e) call3_video_subqcif_uncrop_pane

0x42e8,	// (0x00093691) popup_call3_audio_in_window_g4_ParamLimits

0x42e8,	// (0x00093691) popup_call3_audio_in_window_g4

0x41fb,	// (0x000935a4) mup_spec_half_pane

0x4204,	// (0x000935ad) mup_spec_half_pane_cp

0xf095,	// (0x0009e43e) mup_osc_middle_pane

0xf09e,	// (0x0009e447) mup_visualizer_osc_pane_g1

0x41db,	// (0x00093584) mup_spec_bar_pane_ParamLimits

0x41db,	// (0x00093584) mup_spec_bar_pane

0xf082,	// (0x0009e42b) mup_spec_bar_pane_g1

0xf08c,	// (0x0009e435) mup_spec_bar_pane_g2

0x0001,

0x013d,	// (0x0008f4e6) mup_spec_bar_pane_g

0x13e4,	// (0x0009078d) aid_cale_week_size_cell_pane_ParamLimits

0x13f7,	// (0x000907a0) bg_cale_heading_pane_ParamLimits

0xa582,	// (0x0009992b) bg_cale_pane_cp01_ParamLimits

0x1413,	// (0x000907bc) cale_week_corner_pane_ParamLimits

0x1429,	// (0x000907d2) cale_week_day_heading_pane_ParamLimits

0x1445,	// (0x000907ee) cale_week_scroll_pane_g1_ParamLimits

0x145e,	// (0x00090807) cale_week_scroll_pane_g2_ParamLimits

0x146f,	// (0x00090818) cale_week_scroll_pane_g3_ParamLimits

0x1480,	// (0x00090829) cale_week_scroll_pane_g4_ParamLimits

0x1491,	// (0x0009083a) cale_week_scroll_pane_g5_ParamLimits

0x14a2,	// (0x0009084b) cale_week_scroll_pane_g6_ParamLimits

0x14b3,	// (0x0009085c) cale_week_scroll_pane_g7_ParamLimits

0x14c4,	// (0x0009086d) cale_week_scroll_pane_g8_ParamLimits

0x14d5,	// (0x0009087e) cale_week_scroll_pane_g9_ParamLimits

0x14e6,	// (0x0009088f) cale_week_scroll_pane_g10_ParamLimits

0x14f7,	// (0x000908a0) cale_week_scroll_pane_g11_ParamLimits

0x1508,	// (0x000908b1) cale_week_scroll_pane_g12_ParamLimits

0x1519,	// (0x000908c2) cale_week_scroll_pane_g13_ParamLimits

0x1532,	// (0x000908db) cale_week_scroll_pane_g14_ParamLimits

0x154b,	// (0x000908f4) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009e57b) cale_week_scroll_pane_g_ParamLimits

0x1564,	// (0x0009090d) cale_week_time_pane_ParamLimits

0x1575,	// (0x0009091e) grid_cale_week_pane_ParamLimits

0xa59b,	// (0x00099944) listscroll_cale_week_pane_t1

0x1590,	// (0x00090939) scroll_pane_cp08_ParamLimits

0x2151,	// (0x000914fa) cale_month_corner_pane_ParamLimits

0xa99e,	// (0x00099d47) cale_month_pane_t1

0x2435,	// (0x000917de) cale_month_week_pane_ParamLimits

0x2b4e,	// (0x00091ef7) popup_call_status_window_g1_ParamLimits

0x2b62,	// (0x00091f0b) popup_call_status_window_g2_ParamLimits

0x2b76,	// (0x00091f1f) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0009e723) popup_call_status_window_g_ParamLimits

0xace7,	// (0x0009a090) aid_call2_pane

0x3438,	// (0x000927e1) msg_header_pane_g1

0x360e,	// (0x000929b7) postcard_address2_pane_ParamLimits

0x360e,	// (0x000929b7) postcard_address2_pane

0x3624,	// (0x000929cd) postcard_message2_pane_ParamLimits

0x3624,	// (0x000929cd) postcard_message2_pane

0x4198,	// (0x00093541) message2_row_pane_ParamLimits

0x4198,	// (0x00093541) message2_row_pane

0xf03d,	// (0x0009e3e6) address2_row_pane_ParamLimits

0xf03d,	// (0x0009e3e6) address2_row_pane

0xf050,	// (0x0009e3f9) postcard_message2_row_pane_g1

0xf058,	// (0x0009e401) postcard_message2_row_pane_t1

0xf050,	// (0x0009e3f9) address2_row_pane_g1

0xf058,	// (0x0009e401) address2_row_pane_t1

0x179e,	// (0x00090b47) aid_size_cell_vorec

0xa07c,	// (0x00099425) main_rss_pane

0x41bb,	// (0x00093564) rss_list_single_pane_ParamLimits

0x41bb,	// (0x00093564) rss_list_single_pane

0xf066,	// (0x0009e40f) rss_list_single_pane_t1

0xf074,	// (0x0009e41d) rss_list_single_pane_t2

0x0001,

0x0138,	// (0x0008f4e1) rss_list_single_pane_t

0xa07c,	// (0x00099425) main_camera2_pane

0xa07c,	// (0x00099425) main_video2_pane

0x440a,	// (0x000937b3) cams_zoom_pane_cp2_ParamLimits

0x440a,	// (0x000937b3) cams_zoom_pane_cp2

0x4421,	// (0x000937ca) image2_vga_pane_ParamLimits

0x4421,	// (0x000937ca) image2_vga_pane

0x4469,	// (0x00093812) main_camera2_pane_g1_ParamLimits

0x4469,	// (0x00093812) main_camera2_pane_g1

0x4489,	// (0x00093832) main_camera2_pane_g2_ParamLimits

0x4489,	// (0x00093832) main_camera2_pane_g2

0x44a0,	// (0x00093849) main_camera2_pane_g3_ParamLimits

0x44a0,	// (0x00093849) main_camera2_pane_g3

0x44b7,	// (0x00093860) main_camera2_pane_g4_ParamLimits

0x44b7,	// (0x00093860) main_camera2_pane_g4

0x44ce,	// (0x00093877) main_camera2_pane_g5_ParamLimits

0x44ce,	// (0x00093877) main_camera2_pane_g5

0x44e5,	// (0x0009388e) main_camera2_pane_g6_ParamLimits

0x44e5,	// (0x0009388e) main_camera2_pane_g6

0x44fc,	// (0x000938a5) main_camera2_pane_g7_ParamLimits

0x44fc,	// (0x000938a5) main_camera2_pane_g7

0x4513,	// (0x000938bc) main_camera2_pane_g8_ParamLimits

0x4513,	// (0x000938bc) main_camera2_pane_g8

0x0008,

0xf57d,	// (0x0009e926) main_camera2_pane_g_ParamLimits

0xf57d,	// (0x0009e926) main_camera2_pane_g

0x4541,	// (0x000938ea) main_camera2_pane_t1_ParamLimits

0x4541,	// (0x000938ea) main_camera2_pane_t1

0x4576,	// (0x0009391f) main_camera2_pane_t2_ParamLimits

0x4576,	// (0x0009391f) main_camera2_pane_t2

0x4593,	// (0x0009393c) main_camera2_pane_t3_ParamLimits

0x4593,	// (0x0009393c) main_camera2_pane_t3

0x45f1,	// (0x0009399a) main_camera2_pane_t4_ParamLimits

0x45f1,	// (0x0009399a) main_camera2_pane_t4

0x0006,

0xf590,	// (0x0009e939) main_camera2_pane_t_ParamLimits

0xf590,	// (0x0009e939) main_camera2_pane_t

0x467a,	// (0x00093a23) cams_zoom_pane_cp4_ParamLimits

0x467a,	// (0x00093a23) cams_zoom_pane_cp4

0x4690,	// (0x00093a39) image2_cif_pane_ParamLimits

0x4690,	// (0x00093a39) image2_cif_pane

0x46bb,	// (0x00093a64) image2_subqcif_pane_ParamLimits

0x46bb,	// (0x00093a64) image2_subqcif_pane

0x46d6,	// (0x00093a7f) main_video2_pane_g1_ParamLimits

0x46d6,	// (0x00093a7f) main_video2_pane_g1

0x46f0,	// (0x00093a99) main_video2_pane_g2_ParamLimits

0x46f0,	// (0x00093a99) main_video2_pane_g2

0x4706,	// (0x00093aaf) main_video2_pane_g3_ParamLimits

0x4706,	// (0x00093aaf) main_video2_pane_g3

0x471c,	// (0x00093ac5) main_video2_pane_g4_ParamLimits

0x471c,	// (0x00093ac5) main_video2_pane_g4

0x4732,	// (0x00093adb) main_video2_pane_g5_ParamLimits

0x4732,	// (0x00093adb) main_video2_pane_g5

0x4748,	// (0x00093af1) main_video2_pane_g6_ParamLimits

0x4748,	// (0x00093af1) main_video2_pane_g6

0x0005,

0xf59f,	// (0x0009e948) main_video2_pane_g_ParamLimits

0xf59f,	// (0x0009e948) main_video2_pane_g

0x4762,	// (0x00093b0b) main_video2_pane_t1_ParamLimits

0x4762,	// (0x00093b0b) main_video2_pane_t1

0x4786,	// (0x00093b2f) main_video2_pane_t2_ParamLimits

0x4786,	// (0x00093b2f) main_video2_pane_t2

0x47d6,	// (0x00093b7f) main_video2_pane_t3_ParamLimits

0x47d6,	// (0x00093b7f) main_video2_pane_t3

0x0002,

0xf5ac,	// (0x0009e955) main_video2_pane_t_ParamLimits

0xf5ac,	// (0x0009e955) main_video2_pane_t

0x3c8a,	// (0x00093033) call_muted_g2

0x0001,

0xf561,	// (0x0009e90a) call_muted_g

0xa07c,	// (0x00099425) main_mup2_pane

0x481e,	// (0x00093bc7) main_mup2_pane_g1_ParamLimits

0x481e,	// (0x00093bc7) main_mup2_pane_g1

0x482a,	// (0x00093bd3) main_mup2_pane_g2_ParamLimits

0x482a,	// (0x00093bd3) main_mup2_pane_g2

0xae30,	// (0x0009a1d9) main_mup_pane_g13_cp1

0xae38,	// (0x0009a1e1) mup_volume_pane_cp1

0x4848,	// (0x00093bf1) main_mup2_pane_g4_ParamLimits

0x4848,	// (0x00093bf1) main_mup2_pane_g4

0x485a,	// (0x00093c03) main_mup2_pane_g5_ParamLimits

0x485a,	// (0x00093c03) main_mup2_pane_g5

0x486c,	// (0x00093c15) main_mup2_pane_g6_ParamLimits

0x486c,	// (0x00093c15) main_mup2_pane_g6

0x487e,	// (0x00093c27) main_mup2_pane_g7_ParamLimits

0x487e,	// (0x00093c27) main_mup2_pane_g7

0x0006,

0xf5b3,	// (0x0009e95c) main_mup2_pane_g_ParamLimits

0xf5b3,	// (0x0009e95c) main_mup2_pane_g

0x4896,	// (0x00093c3f) main_mup2_pane_t1_ParamLimits

0x4896,	// (0x00093c3f) main_mup2_pane_t1

0x48ac,	// (0x00093c55) main_mup2_pane_t2_ParamLimits

0x48ac,	// (0x00093c55) main_mup2_pane_t2

0x48c2,	// (0x00093c6b) main_mup2_pane_t3_ParamLimits

0x48c2,	// (0x00093c6b) main_mup2_pane_t3

0x48d8,	// (0x00093c81) main_mup2_pane_t4_ParamLimits

0x48d8,	// (0x00093c81) main_mup2_pane_t4

0x48f0,	// (0x00093c99) main_mup2_pane_t5_ParamLimits

0x48f0,	// (0x00093c99) main_mup2_pane_t5

0x4908,	// (0x00093cb1) main_mup2_pane_t6_ParamLimits

0x4908,	// (0x00093cb1) main_mup2_pane_t6

0x0005,

0xf5c2,	// (0x0009e96b) main_mup2_pane_t_ParamLimits

0xf5c2,	// (0x0009e96b) main_mup2_pane_t

0x4938,	// (0x00093ce1) mup2_visualizer_pane_ParamLimits

0x4938,	// (0x00093ce1) mup2_visualizer_pane

0x4966,	// (0x00093d0f) mup_progress_pane_cp_ParamLimits

0x4966,	// (0x00093d0f) mup_progress_pane_cp

0xae1b,	// (0x0009a1c4) mup_volume_pane_cp_ParamLimits

0xae1b,	// (0x0009a1c4) mup_volume_pane_cp

0x497c,	// (0x00093d25) mup2_visualizer_pane_g1_ParamLimits

0x497c,	// (0x00093d25) mup2_visualizer_pane_g1

0x4991,	// (0x00093d3a) mup2_visualizer_pane_g2_ParamLimits

0x4991,	// (0x00093d3a) mup2_visualizer_pane_g2

0x499d,	// (0x00093d46) mup2_visualizer_pane_g3_ParamLimits

0x499d,	// (0x00093d46) mup2_visualizer_pane_g3

0x0002,

0xf5cf,	// (0x0009e978) mup2_visualizer_pane_g_ParamLimits

0xf5cf,	// (0x0009e978) mup2_visualizer_pane_g

0xdeae,	// (0x0009d257) aid_size_cell_fmradio

0x3e3a,	// (0x000931e3) aid_height_parent_landcape

0xa806,	// (0x00099baf) wml_content_pane_cp

0xa80e,	// (0x00099bb7) wml_tabs_pane

0xa817,	// (0x00099bc0) popup_wml_miniature_window

0xa81f,	// (0x00099bc8) scroll_pane_cp021

0xa833,	// (0x00099bdc) wml_content_pane_comp8

0xa07c,	// (0x00099425) bg_popup_sub_pane_cp05

0x49bb,	// (0x00093d64) popup_wml_miniature_window_g1

0x49c3,	// (0x00093d6c) wml_miniature_view_pane

0x49cb,	// (0x00093d74) aid_size_wml_view

0x49d3,	// (0x00093d7c) wml_miniature_view_pane_g1

0x49dc,	// (0x00093d85) wml_miniature_view_pane_g2

0x49e5,	// (0x00093d8e) wml_miniature_view_pane_g3

0x49ed,	// (0x00093d96) wml_miniature_view_pane_g4

0x49f5,	// (0x00093d9e) wml_miniature_view_pane_g5

0x49fd,	// (0x00093da6) wml_miniature_view_pane_g6

0x4a05,	// (0x00093dae) wml_miniature_view_pane_g7

0x4a0d,	// (0x00093db6) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x0009e97f) wml_miniature_view_pane_g

0x4a15,	// (0x00093dbe) background_graphic_ParamLimits

0x4a15,	// (0x00093dbe) background_graphic

0x4a21,	// (0x00093dca) wml_tabs_2_pane

0x4a2a,	// (0x00093dd3) wml_tabs_3_pane_ParamLimits

0x4a2a,	// (0x00093dd3) wml_tabs_3_pane

0x4a3c,	// (0x00093de5) wml_tabs_4_pane_ParamLimits

0x4a3c,	// (0x00093de5) wml_tabs_4_pane

0x4a52,	// (0x00093dfb) wml_tabs_5_pane_ParamLimits

0x4a52,	// (0x00093dfb) wml_tabs_5_pane

0x4a6c,	// (0x00093e15) wml_tabs_pane_g2_ParamLimits

0x4a6c,	// (0x00093e15) wml_tabs_pane_g2

0x4a80,	// (0x00093e29) wml_tabs_pane_g3_ParamLimits

0x4a80,	// (0x00093e29) wml_tabs_pane_g3

0x4a94,	// (0x00093e3d) wml_tabs_2_active_pane_ParamLimits

0x4a94,	// (0x00093e3d) wml_tabs_2_active_pane

0x4aa8,	// (0x00093e51) wml_tabs_2_passive_pane_ParamLimits

0x4aa8,	// (0x00093e51) wml_tabs_2_passive_pane

0x4abc,	// (0x00093e65) wml_tabs_3_active_pane_cp_ParamLimits

0x4abc,	// (0x00093e65) wml_tabs_3_active_pane_cp

0x4ad1,	// (0x00093e7a) wml_tabs_3_passive_pane_ParamLimits

0x4ad1,	// (0x00093e7a) wml_tabs_3_passive_pane

0x4ae4,	// (0x00093e8d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ae4,	// (0x00093e8d) wml_tabs_3_passive_pane_cp

0x4afb,	// (0x00093ea4) tabs_4_active_pane

0x4b03,	// (0x00093eac) tabs_4_passive_pane

0x4b0d,	// (0x00093eb6) tabs_4_passive_pane_cp

0x4b15,	// (0x00093ebe) tabs_4_passive_pane_cp2

0x3b4e,	// (0x00092ef7) aid_height_text

0x3145,	// (0x000924ee) mup_volume_cont_pane_ParamLimits

0x3145,	// (0x000924ee) mup_volume_cont_pane

0x0ff1,	// (0x0009039a) aid_size_cell_pinb

0x0ffb,	// (0x000903a4) aid_size_list_pinb

0x4952,	// (0x00093cfb) mup2_volume_cont_pane_ParamLimits

0x4952,	// (0x00093cfb) mup2_volume_cont_pane

0xae07,	// (0x0009a1b0) mup2_volume_cont_pane_g1_ParamLimits

0xae07,	// (0x0009a1b0) mup2_volume_cont_pane_g1

0x0b85,	// (0x0008ff2e) aid_size_cell_touch_ParamLimits

0x0b85,	// (0x0008ff2e) aid_size_cell_touch

0x0e04,	// (0x000901ad) touch_pane_ParamLimits

0x0e04,	// (0x000901ad) touch_pane

0x0b67,	// (0x0008ff10) main_rss2_pane

0x4b28,	// (0x00093ed1) listscroll_rss2_pane

0x4b31,	// (0x00093eda) rss2_navigation_pane

0x4b39,	// (0x00093ee2) list_rss2_pane

0xda8c,	// (0x0009ce35) scroll_pane_cp22

0x4b41,	// (0x00093eea) rss2_navigation_pane_g1

0x4b4a,	// (0x00093ef3) rss2_navigation_pane_g2

0x4b52,	// (0x00093efb) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x0009e990) rss2_navigation_pane_g

0x4b5a,	// (0x00093f03) rss2_navigation_pane_t1

0x4b68,	// (0x00093f11) rss2_list_single_pane_ParamLimits

0x4b68,	// (0x00093f11) rss2_list_single_pane

0x4b82,	// (0x00093f2b) rss2_list_single_pane_t2

0x4b90,	// (0x00093f39) rss2_list_single_pane_t3_ParamLimits

0x4b90,	// (0x00093f39) rss2_list_single_pane_t3

0x4bad,	// (0x00093f56) rss2_list_single_pane_t4

0x28c1,	// (0x00091c6a) smil_status_pane_g1

0x0dea,	// (0x00090193) main_image2_pane_ParamLimits

0x0dea,	// (0x00090193) main_image2_pane

0x452a,	// (0x000938d3) main_camera2_pane_g9_ParamLimits

0x452a,	// (0x000938d3) main_camera2_pane_g9

0x4646,	// (0x000939ef) main_camera2_pane_t5_ParamLimits

0x4646,	// (0x000939ef) main_camera2_pane_t5

0xaddc,	// (0x0009a185) main_camera2_pane_t6_ParamLimits

0xaddc,	// (0x0009a185) main_camera2_pane_t6

0x4bbb,	// (0x00093f64) main_image2_pane_g1_ParamLimits

0x4bbb,	// (0x00093f64) main_image2_pane_g1

0x3865,	// (0x00092c0e) smil2_video_pane_ParamLimits

0x3865,	// (0x00092c0e) smil2_video_pane

0x0bc5,	// (0x0008ff6e) aid_zoom_text_primary_cp

0x0da6,	// (0x0009014f) popup_preview_fixed_window

0xa76f,	// (0x00099b18) im_reading_pane_g1

0x43fc,	// (0x000937a5) cams2_bc_adjust_pane_cp_ParamLimits

0x43fc,	// (0x000937a5) cams2_bc_adjust_pane_cp

0x466c,	// (0x00093a15) cams2_bc_adjust_pane_ParamLimits

0x466c,	// (0x00093a15) cams2_bc_adjust_pane

0xae40,	// (0x0009a1e9) cams2_bc_adjust_pane_g1

0xae48,	// (0x0009a1f1) cams2_slider_pane

0xae51,	// (0x0009a1fa) cams2_slider_pane_g1

0xae5a,	// (0x0009a203) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x0009e997) cams2_slider_pane_g

0x10eb,	// (0x00090494) calc_display_pane_ParamLimits

0x1111,	// (0x000904ba) calc_paper_pane_ParamLimits

0x1134,	// (0x000904dd) grid_calc_pane_ParamLimits

0xad49,	// (0x0009a0f2) popup_clock_digital_window_t1_ParamLimits

0xde4b,	// (0x0009d1f4) main_image_pane_t1

0x10cd,	// (0x00090476) aid_size_cell_calc_ParamLimits

0x10cd,	// (0x00090476) aid_size_cell_calc

0x3e80,	// (0x00093229) popup_blid_sat_info2_window_ParamLimits

0x3e80,	// (0x00093229) popup_blid_sat_info2_window

0x4bd9,	// (0x00093f82) aid_size_cell_blid

0x4be1,	// (0x00093f8a) bg_popup_window_pane_cp07

0x4c04,	// (0x00093fad) grid_popup_blid_pane

0x4c0e,	// (0x00093fb7) heading_pane_cp05_ParamLimits

0x4c0e,	// (0x00093fb7) heading_pane_cp05

0x4cd8,	// (0x00094081) cell_popup_blid_pane_ParamLimits

0x4cd8,	// (0x00094081) cell_popup_blid_pane

0x4d02,	// (0x000940ab) cell_popup_blid_pane_g1

0x4d0a,	// (0x000940b3) cell_popup_blid_pane_t1

0x4922,	// (0x00093ccb) mup2_indicator_pane_ParamLimits

0x4922,	// (0x00093ccb) mup2_indicator_pane

0xdbc6,	// (0x0009cf6f) mup2_visualizer_osc_pane

0x49a9,	// (0x00093d52) mup2_visualizer_spec_pane_ParamLimits

0x49a9,	// (0x00093d52) mup2_visualizer_spec_pane

0x4d18,	// (0x000940c1) mup2_spec_half_pane

0x4d21,	// (0x000940ca) mup2_spec_half_pane_cp

0x4d29,	// (0x000940d2) mup2_spec_bar_pane_ParamLimits

0x4d29,	// (0x000940d2) mup2_spec_bar_pane

0xf082,	// (0x0009e42b) mup2_spec_bar_pane_g1

0xf08c,	// (0x0009e435) mup2_spec_bar_pane_g2

0x0001,

0x013d,	// (0x0008f4e6) mup2_spec_bar_pane_g

0x4d49,	// (0x000940f2) mup2_osc_middle_pane

0xf09e,	// (0x0009e447) mup2_visualizer_osc_pane_g1

0x0e76,	// (0x0009021f) popup_number_entry_window_t1_ParamLimits

0x0e89,	// (0x00090232) popup_number_entry_window_t2_ParamLimits

0x0e9b,	// (0x00090244) popup_number_entry_window_t3_ParamLimits

0x0ead,	// (0x00090256) popup_number_entry_window_t5_ParamLimits

0x0ead,	// (0x00090256) popup_number_entry_window_t5

0xf0ec,	// (0x0009e495) popup_number_entry_window_t_ParamLimits

0x0ee2,	// (0x0009028b) text_title_cp2_ParamLimits

0xad88,	// (0x0009a131) aid_hotspot_pointer_text2_pane

0xadae,	// (0x0009a157) main_viewer_pane_g9_ParamLimits

0xadae,	// (0x0009a157) main_viewer_pane_g9

0xa99e,	// (0x00099d47) cale_month_pane_t1_ParamLimits

0xaa09,	// (0x00099db2) bg_cale_pane_ParamLimits

0xaa21,	// (0x00099dca) list_cale_pane_ParamLimits

0xa59b,	// (0x00099944) listscroll_cale_day_pane_t1

0xaa32,	// (0x00099ddb) scroll_pane_cp09_ParamLimits

0x317b,	// (0x00092524) main_mup_eq_pane_t1_ParamLimits

0x317b,	// (0x00092524) main_mup_eq_pane_t1

0x3197,	// (0x00092540) main_mup_eq_pane_t2_ParamLimits

0x3197,	// (0x00092540) main_mup_eq_pane_t2

0x31b3,	// (0x0009255c) main_mup_eq_pane_t3_ParamLimits

0x31b3,	// (0x0009255c) main_mup_eq_pane_t3

0x31d1,	// (0x0009257a) main_mup_eq_pane_t4_ParamLimits

0x31d1,	// (0x0009257a) main_mup_eq_pane_t4

0x31ef,	// (0x00092598) main_mup_eq_pane_t5_ParamLimits

0x31ef,	// (0x00092598) main_mup_eq_pane_t5

0x320d,	// (0x000925b6) main_mup_eq_pane_t6_ParamLimits

0x320d,	// (0x000925b6) main_mup_eq_pane_t6

0x3223,	// (0x000925cc) main_mup_eq_pane_t7_ParamLimits

0x3223,	// (0x000925cc) main_mup_eq_pane_t7

0x3239,	// (0x000925e2) main_mup_eq_pane_t8_ParamLimits

0x3239,	// (0x000925e2) main_mup_eq_pane_t8

0x324f,	// (0x000925f8) main_mup_eq_pane_t9_ParamLimits

0x324f,	// (0x000925f8) main_mup_eq_pane_t9

0x326b,	// (0x00092614) main_mup_eq_pane_t10_ParamLimits

0x326b,	// (0x00092614) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0009e822) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0009e822) main_mup_eq_pane_t

0x3340,	// (0x000926e9) mup_equalizer_pane_cp5_ParamLimits

0x3358,	// (0x00092701) mup_equalizer_pane_cp6_ParamLimits

0x3370,	// (0x00092719) mup_equalizer_pane_cp7_ParamLimits

0x0b67,	// (0x0008ff10) main_gallery_pane

0xf0a7,	// (0x0009e450) smil2_volume_pane

0xf0af,	// (0x0009e458) smil_status_volume_pane_g1_ParamLimits

0xf0c2,	// (0x0009e46b) smil_status_volume_pane_g2_ParamLimits

0xadba,	// (0x0009a163) smil_status_volume_pane_g3_ParamLimits

0xf566,	// (0x0009e90f) smil_status_volume_pane_g_ParamLimits

0x4be1,	// (0x00093f8a) bg_popup_window_pane_cp07_ParamLimits

0x4bef,	// (0x00093f98) blid_firmament_pane

0x4d52,	// (0x000940fb) aid_size_cell_gallery_ParamLimits

0x4d52,	// (0x000940fb) aid_size_cell_gallery

0x4d68,	// (0x00094111) grid_gallery_pane_ParamLimits

0x4d68,	// (0x00094111) grid_gallery_pane

0x4d83,	// (0x0009412c) cell_gallery_pane_ParamLimits

0x4d83,	// (0x0009412c) cell_gallery_pane

0x4dd4,	// (0x0009417d) bg_cell_gallery_focus_pane_ParamLimits

0x4dd4,	// (0x0009417d) bg_cell_gallery_focus_pane

0x4de6,	// (0x0009418f) cell_gallery_pane_g1_ParamLimits

0x4de6,	// (0x0009418f) cell_gallery_pane_g1

0x4df2,	// (0x0009419b) cell_gallery_pane_g2_ParamLimits

0x4df2,	// (0x0009419b) cell_gallery_pane_g2

0x4dff,	// (0x000941a8) cell_gallery_pane_g3_ParamLimits

0x4dff,	// (0x000941a8) cell_gallery_pane_g3

0x4e0c,	// (0x000941b5) cell_gallery_pane_g4_ParamLimits

0x4e0c,	// (0x000941b5) cell_gallery_pane_g4

0x0003,

0xf614,	// (0x0009e9bd) cell_gallery_pane_g_ParamLimits

0xf614,	// (0x0009e9bd) cell_gallery_pane_g

0x4e18,	// (0x000941c1) bg_cell_gallery_focus_pane_g1

0x4e20,	// (0x000941c9) bg_cell_gallery_focus_pane_g2

0x4e28,	// (0x000941d1) bg_cell_gallery_focus_pane_g3

0x4e30,	// (0x000941d9) bg_cell_gallery_focus_pane_g4

0x4e38,	// (0x000941e1) bg_cell_gallery_focus_pane_g5

0x4e40,	// (0x000941e9) bg_cell_gallery_focus_pane_g6

0x4e48,	// (0x000941f1) bg_cell_gallery_focus_pane_g7

0x4e50,	// (0x000941f9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf61d,	// (0x0009e9c6) bg_cell_gallery_focus_pane_g

0x4e58,	// (0x00094201) aid_firma_cardinal

0x4e6c,	// (0x00094215) blid_firmament_pane_t1

0x4e83,	// (0x0009422c) blid_firmament_pane_t2

0x4e9a,	// (0x00094243) blid_firmament_pane_t3

0x4eb1,	// (0x0009425a) blid_firmament_pane_t4

0x0003,

0xf62e,	// (0x0009e9d7) blid_firmament_pane_t

0x4ec8,	// (0x00094271) blid_sat_info_pane

0x4ed8,	// (0x00094281) blid_sat_info_pane_g1

0x4ed8,	// (0x00094281) blid_sat_info_pane_g2

0x0001,

0xf637,	// (0x0009e9e0) blid_sat_info_pane_g

0x4ee2,	// (0x0009428b) blid_sat_info_pane_t1

0x4ef0,	// (0x00094299) smil2_volume_content_pane

0x4ef9,	// (0x000942a2) smil2_volume_pane_g1

0x4f01,	// (0x000942aa) smil2_volume_content_pane_g1

0x4f0a,	// (0x000942b3) smil2_volume_content_pane_g2

0x4f13,	// (0x000942bc) smil2_volume_content_pane_g3

0x4f1c,	// (0x000942c5) smil2_volume_content_pane_g4

0x4f25,	// (0x000942ce) smil2_volume_content_pane_g5

0x4f2e,	// (0x000942d7) smil2_volume_content_pane_g6

0x4f37,	// (0x000942e0) smil2_volume_content_pane_g7

0x4f40,	// (0x000942e9) smil2_volume_content_pane_g8

0x4f49,	// (0x000942f2) smil2_volume_content_pane_g9

0x4f52,	// (0x000942fb) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x0009e9e5) smil2_volume_content_pane_g

0x15f0,	// (0x00090999) cale_week_day_heading_pane_t1_ParamLimits

0x1604,	// (0x000909ad) cale_week_day_heading_pane_t2_ParamLimits

0x1618,	// (0x000909c1) cale_week_day_heading_pane_t3_ParamLimits

0x162c,	// (0x000909d5) cale_week_day_heading_pane_t4_ParamLimits

0x1640,	// (0x000909e9) cale_week_day_heading_pane_t5_ParamLimits

0x1654,	// (0x000909fd) cale_week_day_heading_pane_t6_ParamLimits

0x1668,	// (0x00090a11) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009e59a) cale_week_day_heading_pane_t_ParamLimits

0xa5ad,	// (0x00099956) bg_cale_side_pane_ParamLimits

0x167c,	// (0x00090a25) cale_week_time_pane_t1_ParamLimits

0x1694,	// (0x00090a3d) cale_week_time_pane_t2_ParamLimits

0x16ac,	// (0x00090a55) cale_week_time_pane_t3_ParamLimits

0x16c4,	// (0x00090a6d) cale_week_time_pane_t4_ParamLimits

0x16dc,	// (0x00090a85) cale_week_time_pane_t5_ParamLimits

0x16f4,	// (0x00090a9d) cale_week_time_pane_t6_ParamLimits

0x170c,	// (0x00090ab5) cale_week_time_pane_t7_ParamLimits

0x1728,	// (0x00090ad1) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009e5a9) cale_week_time_pane_t_ParamLimits

0x1748,	// (0x00090af1) cell_cale_week_pane_g2_ParamLimits

0xa5ad,	// (0x00099956) bg_cale_side_pane_cp01_ParamLimits

0x2730,	// (0x00091ad9) cale_month_week_pane_t1_ParamLimits

0x2747,	// (0x00091af0) cale_month_week_pane_t2_ParamLimits

0x275e,	// (0x00091b07) cale_month_week_pane_t3_ParamLimits

0x2775,	// (0x00091b1e) cale_month_week_pane_t4_ParamLimits

0x278c,	// (0x00091b35) cale_month_week_pane_t5_ParamLimits

0x27a3,	// (0x00091b4c) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0009e682) cale_month_week_pane_t_ParamLimits

0xa9b0,	// (0x00099d59) cell_cale_month_pane_g1_ParamLimits

0x0b67,	// (0x0008ff10) main_cale_event_viewer_pane

0x0b67,	// (0x0008ff10) listscroll_cale_event_viewer_pane

0x4f5b,	// (0x00094304) list_cale_ev_pane

0x4f63,	// (0x0009430c) scroll_pane_cp023

0x4f6f,	// (0x00094318) field_cale_ev_pane_ParamLimits

0x4f6f,	// (0x00094318) field_cale_ev_pane

0x4f93,	// (0x0009433c) field_cale_ev_content_pane_ParamLimits

0x4f93,	// (0x0009433c) field_cale_ev_content_pane

0x4f9f,	// (0x00094348) field_cale_ev_pane_g1_ParamLimits

0x4f9f,	// (0x00094348) field_cale_ev_pane_g1

0x4fab,	// (0x00094354) field_cale_ev_pane_g2_ParamLimits

0x4fab,	// (0x00094354) field_cale_ev_pane_g2

0x4fc3,	// (0x0009436c) field_cale_ev_pane_g3_ParamLimits

0x4fc3,	// (0x0009436c) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x0009e9fa) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x0009e9fa) field_cale_ev_pane_g

0x4fdb,	// (0x00094384) field_cale_ev_pane_t1_ParamLimits

0x4fdb,	// (0x00094384) field_cale_ev_pane_t1

0x4ff2,	// (0x0009439b) field_cale_ev_content_pane_t1_ParamLimits

0x4ff2,	// (0x0009439b) field_cale_ev_content_pane_t1

0xdd31,	// (0x0009d0da) bg_button_pane_cp01

0xa3ce,	// (0x00099777) listscroll_cale_week_pane_ParamLimits

0x13da,	// (0x00090783) popup_toolbar_window_cp01

0xa59b,	// (0x00099944) listscroll_cale_week_pane_t1_ParamLimits

0xa3ce,	// (0x00099777) listscroll_cale_day_pane_ParamLimits

0x2921,	// (0x00091cca) popup_toolbar_window_cp02

0xa59b,	// (0x00099944) listscroll_cale_day_pane_t1_ParamLimits

0xa3ce,	// (0x00099777) main_cale_month_pane_ParamLimits

0x4100,	// (0x000934a9) popup_toolbar_window_cp03_ParamLimits

0x4100,	// (0x000934a9) popup_toolbar_window_cp03

0x3723,	// (0x00092acc) main_image_pane_g2_ParamLimits

0x3723,	// (0x00092acc) main_image_pane_g2

0x3734,	// (0x00092add) main_image_pane_g3_ParamLimits

0x3734,	// (0x00092add) main_image_pane_g3

0x0002,

0xf501,	// (0x0009e8aa) main_image_pane_g_ParamLimits

0xf501,	// (0x0009e8aa) main_image_pane_g

0xde4b,	// (0x0009d1f4) main_image_pane_t1_ParamLimits

0x3745,	// (0x00092aee) main_image_pane_t2_ParamLimits

0x3745,	// (0x00092aee) main_image_pane_t2

0x3757,	// (0x00092b00) main_image_pane_t3_ParamLimits

0x3757,	// (0x00092b00) main_image_pane_t3

0x377f,	// (0x00092b28) main_image_pane_t4_ParamLimits

0x377f,	// (0x00092b28) main_image_pane_t4

0x0003,

0xf508,	// (0x0009e8b1) main_image_pane_t_ParamLimits

0xf508,	// (0x0009e8b1) main_image_pane_t

0x379f,	// (0x00092b48) popup_image_details_window_cp01

0x37a9,	// (0x00092b52) popup_toobar_trans_pane_cp01_ParamLimits

0x37a9,	// (0x00092b52) popup_toobar_trans_pane_cp01

0x3f73,	// (0x0009331c) popup_image_details_window_ParamLimits

0x3f73,	// (0x0009331c) popup_image_details_window

0xeff3,	// (0x0009e39c) popup_image_focus_window

0x43b6,	// (0x0009375f) camera2_autofocus_pane_ParamLimits

0x43b6,	// (0x0009375f) camera2_autofocus_pane

0x0b67,	// (0x0008ff10) bg_popup_sub_pane_cp06

0x5013,	// (0x000943bc) popup_image_focus_window_g1

0x501b,	// (0x000943c4) popup_image_focus_window_g2

0x5023,	// (0x000943cc) popup_image_focus_window_g3

0x502b,	// (0x000943d4) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x0009ea01) popup_image_focus_window_g

0x5033,	// (0x000943dc) popup_image_focus_window_t1

0x5041,	// (0x000943ea) popup_image_focus_window_t2

0x5051,	// (0x000943fa) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x0009ea0a) popup_image_focus_window_t

0x505f,	// (0x00094408) camera2_autofocus_pane_g1

0x0dea,	// (0x00090193) bg_tb_trans_pane_cp01

0x509d,	// (0x00094446) popup_image_details_window_g1

0x50b0,	// (0x00094459) popup_image_details_window_g2

0x0002,

0xf673,	// (0x0009ea1c) popup_image_details_window_g

0x50d9,	// (0x00094482) popup_image_details_window_t1

0x50eb,	// (0x00094494) popup_image_details_window_t2

0x5104,	// (0x000944ad) popup_image_details_window_t3

0x5118,	// (0x000944c1) popup_image_details_window_t4

0x5133,	// (0x000944dc) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x0009ea23) popup_image_details_window_t

0xa396,	// (0x0009973f) bg_calc_paper_pane_ParamLimits

0xa3aa,	// (0x00099753) grid_highlight_pane_cp013

0xa3b4,	// (0x0009975d) list_calc_pane_ParamLimits

0xa3c6,	// (0x0009976f) scroll_pane_cp024

0xa3ce,	// (0x00099777) bg_calc_display_pane_ParamLimits

0x122b,	// (0x000905d4) calc_display_pane_t1_ParamLimits

0x123d,	// (0x000905e6) calc_display_pane_t2_ParamLimits

0xa3da,	// (0x00099783) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009e51c) calc_display_pane_t_ParamLimits

0x1300,	// (0x000906a9) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009e539) cell_calc_pane_g

0x1309,	// (0x000906b2) cell_calc_pane_t1

0xa451,	// (0x000997fa) grid_highlight_pane_cp02_ParamLimits

0xa467,	// (0x00099810) toolbar_button_pane_cp01_ParamLimits

0xa467,	// (0x00099810) toolbar_button_pane_cp01

0xde90,	// (0x0009d239) temp_image_control_pane_ParamLimits

0xde90,	// (0x0009d239) temp_image_control_pane

0x0dea,	// (0x00090193) main_mp3_pane

0x514d,	// (0x000944f6) temp_image_control_pane_g1_ParamLimits

0x514d,	// (0x000944f6) temp_image_control_pane_g1

0x515b,	// (0x00094504) temp_image_control_pane_g2_ParamLimits

0x515b,	// (0x00094504) temp_image_control_pane_g2

0x516d,	// (0x00094516) temp_image_control_pane_g3_ParamLimits

0x516d,	// (0x00094516) temp_image_control_pane_g3

0x517d,	// (0x00094526) temp_image_control_pane_g4_ParamLimits

0x517d,	// (0x00094526) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x0009ea2e) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x0009ea2e) temp_image_control_pane_g

0x514d,	// (0x000944f6) main_mp3_pane_g1

0x5190,	// (0x00094539) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x0009ea37) main_mp3_pane_g

0x51e9,	// (0x00094592) main_mp3_pane_t1

0xa67c,	// (0x00099a25) main_camera_pane_g8_ParamLimits

0xa67c,	// (0x00099a25) main_camera_pane_g8

0x1a19,	// (0x00090dc2) main_video_pane_g7_ParamLimits

0x1a19,	// (0x00090dc2) main_video_pane_g7

0xadf5,	// (0x0009a19e) main_camera2_pane_t7_ParamLimits

0xadf5,	// (0x0009a19e) main_camera2_pane_t7

0xa7c6,	// (0x00099b6f) scroll_pane_cp025_ParamLimits

0xa7c6,	// (0x00099b6f) scroll_pane_cp025

0xa7da,	// (0x00099b83) scroll_pane_cp026_ParamLimits

0xa7da,	// (0x00099b83) scroll_pane_cp026

0xa7e9,	// (0x00099b92) wml_content_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_touch_calib_pane

0x52bd,	// (0x00094666) main_touch_calib_pane_g1

0x52c9,	// (0x00094672) main_touch_calib_pane_g2

0x52d5,	// (0x0009467e) main_touch_calib_pane_g3

0x52e1,	// (0x0009468a) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x0009ea55) main_touch_calib_pane_g

0x52ed,	// (0x00094696) main_touch_calib_pane_t1

0x5307,	// (0x000946b0) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x0009ea5e) main_touch_calib_pane_t

0xdb07,	// (0x0009ceb0) mup_progress_pane_cp02

0xdb26,	// (0x0009cecf) navi_pane_g1

0xdb88,	// (0x0009cf31) navi_pane_mp_t3

0x0dea,	// (0x00090193) main_mp3_pane_ParamLimits

0x4142,	// (0x000934eb) navi_pane_ParamLimits

0x514d,	// (0x000944f6) main_mp3_pane_g1_ParamLimits

0x5190,	// (0x00094539) main_mp3_pane_g2_ParamLimits

0x519c,	// (0x00094545) main_mp3_pane_g3_ParamLimits

0x519c,	// (0x00094545) main_mp3_pane_g3

0x51aa,	// (0x00094553) main_mp3_pane_g4_ParamLimits

0x51aa,	// (0x00094553) main_mp3_pane_g4

0x51b6,	// (0x0009455f) main_mp3_pane_g5_ParamLimits

0x51b6,	// (0x0009455f) main_mp3_pane_g5

0x51c4,	// (0x0009456d) main_mp3_pane_g6_ParamLimits

0x51c4,	// (0x0009456d) main_mp3_pane_g6

0x51d1,	// (0x0009457a) main_mp3_pane_g7_ParamLimits

0x51d1,	// (0x0009457a) main_mp3_pane_g7

0x51dd,	// (0x00094586) main_mp3_pane_g8_ParamLimits

0x51dd,	// (0x00094586) main_mp3_pane_g8

0xf68e,	// (0x0009ea37) main_mp3_pane_g_ParamLimits

0x51f7,	// (0x000945a0) main_mp3_pane_t2

0x5205,	// (0x000945ae) main_mp3_pane_t3

0x5213,	// (0x000945bc) main_mp3_pane_t4

0x5221,	// (0x000945ca) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x0009ea48) main_mp3_pane_t

0x523d,	// (0x000945e6) mup_progress_pane_cp01

0x0bc5,	// (0x0008ff6e) aid_zoom_text_secondary2

0x4f5b,	// (0x00094304) list_cale_ev2_pane

0x4f63,	// (0x0009430c) scroll_pane_cp023_ParamLimits

0x535f,	// (0x00094708) field_cale_ev2_pane_ParamLimits

0x535f,	// (0x00094708) field_cale_ev2_pane

0x5383,	// (0x0009472c) field_cale_ev2_pane_g1_ParamLimits

0x5383,	// (0x0009472c) field_cale_ev2_pane_g1

0x538f,	// (0x00094738) field_cale_ev2_pane_g2_ParamLimits

0x538f,	// (0x00094738) field_cale_ev2_pane_g2

0x53a7,	// (0x00094750) field_cale_ev2_pane_g3_ParamLimits

0x53a7,	// (0x00094750) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x0009ea69) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x0009ea69) field_cale_ev2_pane_g

0x53cb,	// (0x00094774) field_cale_ev2_pane_t1_ParamLimits

0x53cb,	// (0x00094774) field_cale_ev2_pane_t1

0x53e2,	// (0x0009478b) field_cale_ev2_pane_t2_ParamLimits

0x53e2,	// (0x0009478b) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x0009ea72) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x0009ea72) field_cale_ev2_pane_t

0x35be,	// (0x00092967) main_postcard_pane_g5_ParamLimits

0x35be,	// (0x00092967) main_postcard_pane_g5

0x35d4,	// (0x0009297d) main_postcard_pane_g6_ParamLimits

0x35d4,	// (0x0009297d) main_postcard_pane_g6

0x17c5,	// (0x00090b6e) camera2_autofocus_pane_cp_ParamLimits

0x17c5,	// (0x00090b6e) camera2_autofocus_pane_cp

0x0dea,	// (0x00090193) main_mup3_pane

0x5417,	// (0x000947c0) main_mup3_pane_g1_ParamLimits

0x5417,	// (0x000947c0) main_mup3_pane_g1

0x5439,	// (0x000947e2) main_mup3_pane_g2_ParamLimits

0x5439,	// (0x000947e2) main_mup3_pane_g2

0x54bc,	// (0x00094865) main_mup3_pane_g3_ParamLimits

0x54bc,	// (0x00094865) main_mup3_pane_g3

0x5500,	// (0x000948a9) main_mup3_pane_g4_ParamLimits

0x5500,	// (0x000948a9) main_mup3_pane_g4

0x5544,	// (0x000948ed) main_mup3_pane_g5_ParamLimits

0x5544,	// (0x000948ed) main_mup3_pane_g5

0x5588,	// (0x00094931) main_mup3_pane_g6_ParamLimits

0x5588,	// (0x00094931) main_mup3_pane_g6

0x559b,	// (0x00094944) main_mup3_pane_g7_ParamLimits

0x559b,	// (0x00094944) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x0009ea82) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x0009ea82) main_mup3_pane_g

0x5612,	// (0x000949bb) main_mup3_pane_t1_ParamLimits

0x5612,	// (0x000949bb) main_mup3_pane_t1

0x568c,	// (0x00094a35) main_mup3_pane_t2_ParamLimits

0x568c,	// (0x00094a35) main_mup3_pane_t2

0x5766,	// (0x00094b0f) main_mup3_pane_t4_ParamLimits

0x5766,	// (0x00094b0f) main_mup3_pane_t4

0x57c4,	// (0x00094b6d) main_mup3_pane_t5_ParamLimits

0x57c4,	// (0x00094b6d) main_mup3_pane_t5

0x587c,	// (0x00094c25) main_mup3_pane_t6_ParamLimits

0x587c,	// (0x00094c25) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x0009ea93) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x0009ea93) main_mup3_pane_t

0x5932,	// (0x00094cdb) mup3_progress_pane_ParamLimits

0x5932,	// (0x00094cdb) mup3_progress_pane

0x59b6,	// (0x00094d5f) popup_mup3_control_window_ParamLimits

0x59b6,	// (0x00094d5f) popup_mup3_control_window

0x59d6,	// (0x00094d7f) popup_mup3_text_window

0x59f4,	// (0x00094d9d) mup3_progress_pane_t1

0x5a0b,	// (0x00094db4) mup3_progress_pane_t2

0x5a22,	// (0x00094dcb) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x0009eaa0) mup3_progress_pane_t

0x5a39,	// (0x00094de2) mup_progress_pane_cp03

0x0b67,	// (0x0008ff10) bg_tb_trans_pane_cp04

0x5a49,	// (0x00094df2) mup3_volume_pane

0x5a51,	// (0x00094dfa) popup_mup3_control_window_g1

0x5a5a,	// (0x00094e03) mup3_volume_pane_g1

0x5a63,	// (0x00094e0c) mup3_volume_pane_g2

0x5a6c,	// (0x00094e15) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x0009eaa7) mup3_volume_pane_g

0x0b67,	// (0x0008ff10) bg_tb_trans_pane_cp03

0x5a75,	// (0x00094e1e) popup_mup3_text_window_g1

0x5a7d,	// (0x00094e26) popup_mup3_text_window_t1

0xa428,	// (0x000997d1) list_calc_item_pane_g1_ParamLimits

0x4b1f,	// (0x00093ec8) mup_volume_pane_cp_g1

0x5321,	// (0x000946ca) main_touch_calib_pane_t3

0x5335,	// (0x000946de) main_touch_calib_pane_t4

0x5349,	// (0x000946f2) main_touch_calib_pane_t5

0x0b71,	// (0x0008ff1a) aid_cell_size_toolbar2

0x0b79,	// (0x0008ff22) aid_popup3_width_pane

0x0bb5,	// (0x0008ff5e) aid_zoom_text_msg_primary

0xa65c,	// (0x00099a05) vorec_t7

0xa3ec,	// (0x00099795) bg_calc_paper_pane_g1_ParamLimits

0xa3f8,	// (0x000997a1) bg_calc_paper_pane_g2_ParamLimits

0xa404,	// (0x000997ad) bg_calc_paper_pane_g3_ParamLimits

0xa410,	// (0x000997b9) bg_calc_paper_pane_g4_ParamLimits

0xa41c,	// (0x000997c5) bg_calc_paper_pane_g5_ParamLimits

0x128a,	// (0x00090633) bg_calc_paper_pane_g6_ParamLimits

0x129d,	// (0x00090646) bg_calc_paper_pane_g7_ParamLimits

0x12b0,	// (0x00090659) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009e523) bg_calc_paper_pane_g_ParamLimits

0x12c1,	// (0x0009066a) calc_bg_paper_pane_g9_ParamLimits

0x1927,	// (0x00090cd0) image_qvga_pane_ParamLimits

0x1927,	// (0x00090cd0) image_qvga_pane

0xa2d7,	// (0x00099680) bg_popup_sub_pane_cp04_ParamLimits

0xddc7,	// (0x0009d170) popup_mup_playback_window_g1_ParamLimits

0xddd3,	// (0x0009d17c) popup_mup_playback_window_t1_ParamLimits

0xdde8,	// (0x0009d191) popup_mup_playback_window_t2_ParamLimits

0x0019,	// (0x0008f3c2) popup_mup_playback_window_t_ParamLimits

0x483a,	// (0x00093be3) main_mup2_pane_g3_ParamLimits

0x483a,	// (0x00093be3) main_mup2_pane_g3

0x1d34,	// (0x000910dd) popup_toolbar_window_cp04

0xe1e3,	// (0x0009d58c) popup_call2_audio_second_window_g3_ParamLimits

0xe1e3,	// (0x0009d58c) popup_call2_audio_second_window_g3

0xe5ed,	// (0x0009d996) popup_call2_audio_first_window_g4_ParamLimits

0xe5ed,	// (0x0009d996) popup_call2_audio_first_window_g4

0xec6c,	// (0x0009e015) popup_call2_audio_in_window_g4_ParamLimits

0xec6c,	// (0x0009e015) popup_call2_audio_in_window_g4

0x3705,	// (0x00092aae) aid_area_sk_bg_cut_ParamLimits

0x3705,	// (0x00092aae) aid_area_sk_bg_cut

0xddfd,	// (0x0009d1a6) aid_area_sk_bg_cut_2_ParamLimits

0xddfd,	// (0x0009d1a6) aid_area_sk_bg_cut_2

0x4dc4,	// (0x0009416d) aid_placing_details_win

0x4dcc,	// (0x00094175) aid_placing_details_win_2

0x505f,	// (0x00094408) camera2_autofocus_pane_g1_ParamLimits

0x0d8b,	// (0x00090134) popup_fixed_preview_cale_window_ParamLimits

0x0d8b,	// (0x00090134) popup_fixed_preview_cale_window

0xdbd7,	// (0x0009cf80) navi_slider_pane_g3

0xdbe0,	// (0x0009cf89) navi_slider_pane_g4

0xdbe9,	// (0x0009cf92) navi_slider_pane_g5

0xdbd7,	// (0x0009cf80) navi_slider_pane_g6

0xad6f,	// (0x0009a118) navi_slider_pane_g7

0xdcfe,	// (0x0009d0a7) mup_scale_pane_g3

0xdd07,	// (0x0009d0b0) mup_scale_pane_g4

0xdd10,	// (0x0009d0b9) mup_scale_pane_g5

0x3388,	// (0x00092731) mup_scale_pane_g6

0x3391,	// (0x0009273a) mup_scale_pane_g7

0xdbd7,	// (0x0009cf80) cams2_slider_pane_g3

0x4bd1,	// (0x00093f7a) cams2_slider_pane_g4

0xae63,	// (0x0009a20c) cams2_slider_pane_g5

0xdbd7,	// (0x0009cf80) cams2_slider_pane_g6

0xae6b,	// (0x0009a214) cams2_slider_pane_g7

0x4ed8,	// (0x00094281) camera2_autofocus_pane_cp_g1

0x5a8b,	// (0x00094e34) bg_popup_preview_window_pane_cp02_ParamLimits

0x5a8b,	// (0x00094e34) bg_popup_preview_window_pane_cp02

0x5a97,	// (0x00094e40) list_fp_cale_pane_ParamLimits

0x5a97,	// (0x00094e40) list_fp_cale_pane

0x5aa3,	// (0x00094e4c) popup_fixed_preview_cale_window_t1_ParamLimits

0x5aa3,	// (0x00094e4c) popup_fixed_preview_cale_window_t1

0x5ab5,	// (0x00094e5e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5ab5,	// (0x00094e5e) popup_fixed_preview_cale_window_t2

0x5aca,	// (0x00094e73) popup_fixed_preview_cale_window_t3_ParamLimits

0x5aca,	// (0x00094e73) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x0009eaae) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x0009eaae) popup_fixed_preview_cale_window_t

0x5aed,	// (0x00094e96) list_single_fp_cale_pane_ParamLimits

0x5aed,	// (0x00094e96) list_single_fp_cale_pane

0x5b05,	// (0x00094eae) list_single_fp_cale_pane_g1_ParamLimits

0x5b05,	// (0x00094eae) list_single_fp_cale_pane_g1

0x5b11,	// (0x00094eba) list_single_fp_cale_pane_g2_ParamLimits

0x5b11,	// (0x00094eba) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x0009eab5) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x0009eab5) list_single_fp_cale_pane_g

0x5b2a,	// (0x00094ed3) list_single_fp_cale_pane_t1_ParamLimits

0x5b2a,	// (0x00094ed3) list_single_fp_cale_pane_t1

0x5b3c,	// (0x00094ee5) list_single_fp_cale_pane_t2_ParamLimits

0x5b3c,	// (0x00094ee5) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x0009eabc) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x0009eabc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b67,	// (0x0008ff10) main_dialer_pane

0x5b6f,	// (0x00094f18) aid_cell_size_keypad

0x5b79,	// (0x00094f22) dialer_ne_pane

0x5b83,	// (0x00094f2c) grid_dialer_command_1_pane

0x5b8b,	// (0x00094f34) grid_dialer_command_2_pane

0x5b93,	// (0x00094f3c) grid_dialer_keypad_pane

0x5ba7,	// (0x00094f50) bg_popup_call_pane_cp06_ParamLimits

0x5ba7,	// (0x00094f50) bg_popup_call_pane_cp06

0x5bb3,	// (0x00094f5c) dialer_ne_clear_pane_ParamLimits

0x5bb3,	// (0x00094f5c) dialer_ne_clear_pane

0x5bbf,	// (0x00094f68) dialer_ne_pane_g1

0x5bc7,	// (0x00094f70) dialer_ne_pane_t1_ParamLimits

0x5bc7,	// (0x00094f70) dialer_ne_pane_t1

0x5bd9,	// (0x00094f82) dialer_ne_pane_t2_ParamLimits

0x5bd9,	// (0x00094f82) dialer_ne_pane_t2

0x5c03,	// (0x00094fac) dialer_ne_pane_t3_ParamLimits

0x5c03,	// (0x00094fac) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x0009eac1) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x0009eac1) dialer_ne_pane_t

0x5c33,	// (0x00094fdc) dialer_ne_pane_t3_copy1_ParamLimits

0x5c33,	// (0x00094fdc) dialer_ne_pane_t3_copy1

0x5c62,	// (0x0009500b) cell_dialer_keypad_pane_ParamLimits

0x5c62,	// (0x0009500b) cell_dialer_keypad_pane

0x5c79,	// (0x00095022) cell_dialer_command_1_pane_ParamLimits

0x5c79,	// (0x00095022) cell_dialer_command_1_pane

0x5c8f,	// (0x00095038) cell_dialer_command_2_pane_ParamLimits

0x5c8f,	// (0x00095038) cell_dialer_command_2_pane

0x5c9e,	// (0x00095047) bg_button_pane_cp02_ParamLimits

0x5c9e,	// (0x00095047) bg_button_pane_cp02

0x5caa,	// (0x00095053) cell_dialer_keypad_pane_g1_ParamLimits

0x5caa,	// (0x00095053) cell_dialer_keypad_pane_g1

0x5c9e,	// (0x00095047) bg_button_pane_cp03_ParamLimits

0x5c9e,	// (0x00095047) bg_button_pane_cp03

0x5cbf,	// (0x00095068) cell_dialer_command_1_pane_g1_ParamLimits

0x5cbf,	// (0x00095068) cell_dialer_command_1_pane_g1

0x5cd3,	// (0x0009507c) bg_button_pane_cp04

0x5cdb,	// (0x00095084) cell_dialer_command_2_pane_g1

0xdbc6,	// (0x0009cf6f) bg_button_pane_cp06

0x5ce3,	// (0x0009508c) dialer_ne_clear_pane_g1

0x2e6a,	// (0x00092213) navi_pane_g2

0x2e98,	// (0x00092241) navi_pane_g3

0x0002,

0xf409,	// (0x0009e7b2) navi_pane_g

0x2ec3,	// (0x0009226c) navi_pane_mv_g2

0x2eea,	// (0x00092293) navi_pane_mv_g5

0x2ef2,	// (0x0009229b) navi_pane_mv_t1

0xa3ce,	// (0x00099777) main_clock2_pane

0x5d20,	// (0x000950c9) main_clock2_list_pane_ParamLimits

0x5d20,	// (0x000950c9) main_clock2_list_pane

0x5d58,	// (0x00095101) main_clock2_pane_t1_ParamLimits

0x5d58,	// (0x00095101) main_clock2_pane_t1

0x5d94,	// (0x0009513d) main_clock2_pane_t2_ParamLimits

0x5d94,	// (0x0009513d) main_clock2_pane_t2

0x0004,

0xf71f,	// (0x0009eac8) main_clock2_pane_t_ParamLimits

0xf71f,	// (0x0009eac8) main_clock2_pane_t

0x5e20,	// (0x000951c9) popup_clock_analogue_window_cp03_ParamLimits

0x5e20,	// (0x000951c9) popup_clock_analogue_window_cp03

0x5e47,	// (0x000951f0) popup_clock_digital_window_cp02_ParamLimits

0x5e47,	// (0x000951f0) popup_clock_digital_window_cp02

0x5ec0,	// (0x00095269) main_clock2_list_single_pane_ParamLimits

0x5ec0,	// (0x00095269) main_clock2_list_single_pane

0xdbc6,	// (0x0009cf6f) list_highlight_pane_cp05

0x5ed2,	// (0x0009527b) main_clock2_list_single_pane_t1

0x1d34,	// (0x000910dd) popup_toolbar_window_cp04_ParamLimits

0x506d,	// (0x00094416) camera2_autofocus_pane_g2_ParamLimits

0x506d,	// (0x00094416) camera2_autofocus_pane_g2

0x5079,	// (0x00094422) camera2_autofocus_pane_g3_ParamLimits

0x5079,	// (0x00094422) camera2_autofocus_pane_g3

0x5085,	// (0x0009442e) camera2_autofocus_pane_g4_ParamLimits

0x5085,	// (0x0009442e) camera2_autofocus_pane_g4

0x5091,	// (0x0009443a) camera2_autofocus_pane_g5_ParamLimits

0x5091,	// (0x0009443a) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x0009ea11) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x0009ea11) camera2_autofocus_pane_g

0x53f7,	// (0x000947a0) camera2_autofocus_pane_cp_g2

0x53ff,	// (0x000947a8) camera2_autofocus_pane_cp_g3

0x5407,	// (0x000947b0) camera2_autofocus_pane_cp_g4

0x540f,	// (0x000947b8) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x0009ea77) camera2_autofocus_pane_cp_g

0x5b9f,	// (0x00094f48) popup_dialer_spcha_window

0x0b67,	// (0x0008ff10) bg_popup_sub_pane_cp07

0xae74,	// (0x0009a21d) list_spcha_pane

0xae7c,	// (0x0009a225) list_single_spcha_pane_ParamLimits

0xae7c,	// (0x0009a225) list_single_spcha_pane

0x0b67,	// (0x0008ff10) list_highlight_pane_cp06

0xae8d,	// (0x0009a236) list_single_spcha_pane_t1

0xea16,	// (0x0009ddbf) popup_call2_audio_out_window_g4_ParamLimits

0xea16,	// (0x0009ddbf) popup_call2_audio_out_window_g4

0x0b67,	// (0x0008ff10) main_imed2_pane

0xeffd,	// (0x0009e3a6) popup_imed_adjust2_window

0x3f8b,	// (0x00093334) popup_imed_trans_window_ParamLimits

0x3f8b,	// (0x00093334) popup_imed_trans_window

0x4c3a,	// (0x00093fe3) popup_blid_sat_info2_window_t1

0x4c48,	// (0x00093ff1) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x0009e9a6) popup_blid_sat_info2_window_t

0x5f84,	// (0x0009532d) aid_size_cell_colour_35

0x5fa4,	// (0x0009534d) aid_size_cell_colour_112

0x5fc4,	// (0x0009536d) aid_size_cell_effect

0xefd1,	// (0x0009e37a) bg_tb_trans_pane_cp02

0xaaa5,	// (0x00099e4e) heading_imed_pane

0x5fe4,	// (0x0009538d) listscroll_imed_pane

0xae9b,	// (0x0009a244) heading_imed_pane_g1

0xaea3,	// (0x0009a24c) heading_imed_pane_t1

0xaeb1,	// (0x0009a25a) grid_imed_colour_35_pane_ParamLimits

0xaeb1,	// (0x0009a25a) grid_imed_colour_35_pane

0x5ff0,	// (0x00095399) grid_imed_effect_pane

0xaecd,	// (0x0009a276) list_imed_aspect_pane

0x6007,	// (0x000953b0) scroll_pane_cp027_ParamLimits

0x6007,	// (0x000953b0) scroll_pane_cp027

0x6018,	// (0x000953c1) cell_imed_effect_pane_ParamLimits

0x6018,	// (0x000953c1) cell_imed_effect_pane

0xaed5,	// (0x0009a27e) cell_imed_colour_pane_ParamLimits

0xaed5,	// (0x0009a27e) cell_imed_colour_pane

0xaf1f,	// (0x0009a2c8) cell_imed_colour_pane_g1_ParamLimits

0xaf1f,	// (0x0009a2c8) cell_imed_colour_pane_g1

0xaf30,	// (0x0009a2d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xaf30,	// (0x0009a2d9) hgihlgiht_grid_pane_cp016

0x603d,	// (0x000953e6) cell_imed_effect_pane_g1

0x6045,	// (0x000953ee) grid_highlight_pane_cp017

0xaf41,	// (0x0009a2ea) list_imed_single_pane_ParamLimits

0xaf41,	// (0x0009a2ea) list_imed_single_pane

0x0b67,	// (0x0008ff10) list_highlight_pane_cp07

0xaf55,	// (0x0009a2fe) list_imed_aspect_pane_comp1_t1

0xefd1,	// (0x0009e37a) bg_tb_trans_pane_cp05

0xaf77,	// (0x0009a320) popup_imed_adjust2_window_g1

0xaf9e,	// (0x0009a347) popup_imed_adjust2_window_t1

0xafb6,	// (0x0009a35f) slider_imed_adjust_pane

0xafca,	// (0x0009a373) slider_imed_adjust_pane_g1

0xafda,	// (0x0009a383) slider_imed_adjust_pane_g2

0xafea,	// (0x0009a393) slider_imed_adjust_pane_g3

0xaffb,	// (0x0009a3a4) slider_imed_adjust_pane_g4

0x0003,

0xf73c,	// (0x0009eae5) slider_imed_adjust_pane_g

0x604e,	// (0x000953f7) aid_size_cell_clipart2

0x605a,	// (0x00095403) grid_imed_clipart_pane

0xb00c,	// (0x0009a3b5) scroll_pane_cp031

0x6064,	// (0x0009540d) cell_imed_clipart_pane_ParamLimits

0x6064,	// (0x0009540d) cell_imed_clipart_pane

0x6081,	// (0x0009542a) cell_imed_clipart_pane_g1

0x0b67,	// (0x0008ff10) grid_highlight_pane_cp014

0x5d35,	// (0x000950de) main_clock2_pane_g1_ParamLimits

0x5d35,	// (0x000950de) main_clock2_pane_g1

0x5e67,	// (0x00095210) aid_call2_pane_cp10

0x5e79,	// (0x00095222) aid_call_pane_cp10

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g1

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g2

0x5e8b,	// (0x00095234) popup_clock_analogue_window_cp10_g3

0x5e8b,	// (0x00095234) popup_clock_analogue_window_cp10_g4

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72a,	// (0x0009ead3) popup_clock_analogue_window_cp10_g

0x5ea1,	// (0x0009524a) popup_clock_analogue_window_cp10_t1

0x5ee0,	// (0x00095289) clock_digital_number_pane_cp10_ParamLimits

0x5ee0,	// (0x00095289) clock_digital_number_pane_cp10

0x5efa,	// (0x000952a3) clock_digital_number_pane_cp11_ParamLimits

0x5efa,	// (0x000952a3) clock_digital_number_pane_cp11

0x5f14,	// (0x000952bd) clock_digital_number_pane_cp12_ParamLimits

0x5f14,	// (0x000952bd) clock_digital_number_pane_cp12

0x5f2e,	// (0x000952d7) clock_digital_number_pane_cp13_ParamLimits

0x5f2e,	// (0x000952d7) clock_digital_number_pane_cp13

0x5f48,	// (0x000952f1) clock_digital_separator_pane_cp10_ParamLimits

0x5f48,	// (0x000952f1) clock_digital_separator_pane_cp10

0x5f62,	// (0x0009530b) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f62,	// (0x0009530b) popup_clock_digital_window_cp02_t1

0xa2cf,	// (0x00099678) clock_digital_number_pane_cp10_g1

0xa2cf,	// (0x00099678) clock_digital_number_pane_cp10_g2

0x0001,

0xf745,	// (0x0009eaee) clock_digital_number_pane_cp10_g

0xa2cf,	// (0x00099678) clock_digital_separator_pane_cp10_g1

0xa2cf,	// (0x00099678) clock_digital_separator_pane_g2_cp10

0xdb96,	// (0x0009cf3f) navi_pane_vded_g4

0xdb9f,	// (0x0009cf48) navi_pane_vded_g5

0xdba8,	// (0x0009cf51) navi_pane_vded_t1

0x0b67,	// (0x0008ff10) main_vded_pane

0x608a,	// (0x00095433) main_vded_pane_g1

0x6096,	// (0x0009543f) main_vded_pane_g2

0x60a2,	// (0x0009544b) main_vded_pane_g3

0x0002,

0xf74a,	// (0x0009eaf3) main_vded_pane_g

0x60ae,	// (0x00095457) main_vded_pane_t1

0x60bc,	// (0x00095465) main_vded_pane_t2

0x0001,

0xf751,	// (0x0009eafa) main_vded_pane_t

0x60ca,	// (0x00095473) vded_slider_pane

0x60d4,	// (0x0009547d) vded_video_pane

0xb014,	// (0x0009a3bd) vded_video_pane_g1

0x60e0,	// (0x00095489) vded_video_pane_g2

0x4ed8,	// (0x00094281) vded_video_pane_g3

0x0002,

0xf756,	// (0x0009eaff) vded_video_pane_g

0xb01e,	// (0x0009a3c7) vded_slider_pane_g1

0x4b1f,	// (0x00093ec8) vded_slider_pane_g2

0xb027,	// (0x0009a3d0) vded_slider_pane_g3

0xb030,	// (0x0009a3d9) vded_slider_pane_g4

0xb039,	// (0x0009a3e2) vded_slider_pane_g5

0x0004,

0xf75d,	// (0x0009eb06) vded_slider_pane_g

0x59a0,	// (0x00094d49) mup3_rocker_pane_ParamLimits

0x59a0,	// (0x00094d49) mup3_rocker_pane

0x60e9,	// (0x00095492) mup3_control_keys_pane_g1

0x60f1,	// (0x0009549a) mup3_control_keys_pane_g2

0x60f9,	// (0x000954a2) mup3_control_keys_pane_g3

0x6101,	// (0x000954aa) mup3_control_keys_pane_g4

0x0003,

0xf768,	// (0x0009eb11) mup3_control_keys_pane_g

0x0dcc,	// (0x00090175) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dcc,	// (0x00090175) popup_toolbar2_fixed_window_cp01

0x59de,	// (0x00094d87) popup_toolbar2_fixed_window_cp02_ParamLimits

0x59de,	// (0x00094d87) popup_toolbar2_fixed_window_cp02

0xe355,	// (0x0009d6fe) popup_call2_audio_second_window_t4_ParamLimits

0xe355,	// (0x0009d6fe) popup_call2_audio_second_window_t4

0xe883,	// (0x0009dc2c) popup_call2_audio_first_window_t6_ParamLimits

0xe883,	// (0x0009dc2c) popup_call2_audio_first_window_t6

0xeb19,	// (0x0009dec2) popup_call2_audio_out_window_t6_ParamLimits

0xeb19,	// (0x0009dec2) popup_call2_audio_out_window_t6

0x0b67,	// (0x0008ff10) main_vitu_pane

0x6111,	// (0x000954ba) aid_size_cell_itu_ParamLimits

0x6111,	// (0x000954ba) aid_size_cell_itu

0x0dea,	// (0x00090193) bg_popup_window_pane_cp08_ParamLimits

0x0dea,	// (0x00090193) bg_popup_window_pane_cp08

0x6127,	// (0x000954d0) field_vitu_entry_pane_ParamLimits

0x6127,	// (0x000954d0) field_vitu_entry_pane

0x613e,	// (0x000954e7) grid_vitu_function_pane_ParamLimits

0x613e,	// (0x000954e7) grid_vitu_function_pane

0x6159,	// (0x00095502) grid_vitu_itu_pane_ParamLimits

0x6159,	// (0x00095502) grid_vitu_itu_pane

0x6177,	// (0x00095520) cell_vitu_itu_pane_ParamLimits

0x6177,	// (0x00095520) cell_vitu_itu_pane

0x619d,	// (0x00095546) cell_vitu_function_pane_ParamLimits

0x619d,	// (0x00095546) cell_vitu_function_pane

0x0dea,	// (0x00090193) bg_popup_sub_pane_cp08_ParamLimits

0x0dea,	// (0x00090193) bg_popup_sub_pane_cp08

0x61b8,	// (0x00095561) field_vitu_entry_pane_t1_ParamLimits

0x61b8,	// (0x00095561) field_vitu_entry_pane_t1

0xb05a,	// (0x0009a403) field_vitu_entry_pane_t2_ParamLimits

0xb05a,	// (0x0009a403) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x0009eb1f) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x0009eb1f) field_vitu_entry_pane_t

0xb077,	// (0x0009a420) bg_button_pane_cp05_ParamLimits

0xb077,	// (0x0009a420) bg_button_pane_cp05

0x61d8,	// (0x00095581) cell_vitu_itu_pane_g1

0x61f0,	// (0x00095599) cell_vitu_itu_pane_t1_ParamLimits

0x61f0,	// (0x00095599) cell_vitu_itu_pane_t1

0x6202,	// (0x000955ab) cell_vitu_itu_pane_t2_ParamLimits

0x6202,	// (0x000955ab) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x0009eb24) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x0009eb24) cell_vitu_itu_pane_t

0xb085,	// (0x0009a42e) bg_button_pane_cp07

0x6237,	// (0x000955e0) cell_vitu_function_pane_g1

0xa35e,	// (0x00099707) main_calc_pane_g1

0x0ba9,	// (0x0008ff52) aid_visual_content_pane

0x0b67,	// (0x0008ff10) main_vradio_pane

0x6240,	// (0x000955e9) main_vradio_pane_g1_ParamLimits

0x6240,	// (0x000955e9) main_vradio_pane_g1

0xb08f,	// (0x0009a438) main_vradio_pane_g2_ParamLimits

0xb08f,	// (0x0009a438) main_vradio_pane_g2

0x0001,

0xf782,	// (0x0009eb2b) main_vradio_pane_g_ParamLimits

0xf782,	// (0x0009eb2b) main_vradio_pane_g

0x6257,	// (0x00095600) main_vradio_pane_t1_ParamLimits

0x6257,	// (0x00095600) main_vradio_pane_t1

0x626c,	// (0x00095615) main_vradio_pane_t2_ParamLimits

0x626c,	// (0x00095615) main_vradio_pane_t2

0xb09c,	// (0x0009a445) main_vradio_pane_t3_ParamLimits

0xb09c,	// (0x0009a445) main_vradio_pane_t3

0x0002,

0xf787,	// (0x0009eb30) main_vradio_pane_t_ParamLimits

0xf787,	// (0x0009eb30) main_vradio_pane_t

0x6281,	// (0x0009562a) vradio_rocker_control_pane_ParamLimits

0x6281,	// (0x0009562a) vradio_rocker_control_pane

0x6293,	// (0x0009563c) vradio_station_info_pane_ParamLimits

0x6293,	// (0x0009563c) vradio_station_info_pane

0xb0b0,	// (0x0009a459) vradio_frequency_info_pane_ParamLimits

0xb0b0,	// (0x0009a459) vradio_frequency_info_pane

0x4ed8,	// (0x00094281) vradio_station_info_pane_g1

0xb0bf,	// (0x0009a468) vradio_station_info_pane_t1_ParamLimits

0xb0bf,	// (0x0009a468) vradio_station_info_pane_t1

0xb0e1,	// (0x0009a48a) vradio_station_info_pane_t2_ParamLimits

0xb0e1,	// (0x0009a48a) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x0009eb37) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x0009eb37) vradio_station_info_pane_t

0xb0f3,	// (0x0009a49c) vradio_tuning_pane

0xb0fb,	// (0x0009a4a4) vradio_rocker_control_pane_g1

0xb103,	// (0x0009a4ac) vradio_rocker_control_pane_g2

0xb10b,	// (0x0009a4b4) vradio_rocker_control_pane_g3

0xb113,	// (0x0009a4bc) vradio_rocker_control_pane_g4

0xb11b,	// (0x0009a4c4) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x0009eb3c) vradio_rocker_control_pane_g

0x62a3,	// (0x0009564c) vradio_frequency_info_pane_g1

0xb123,	// (0x0009a4cc) vradio_frequency_info_pane_t1_ParamLimits

0xb123,	// (0x0009a4cc) vradio_frequency_info_pane_t1

0x62ad,	// (0x00095656) vradio_tuning_pane_g1

0x62b8,	// (0x00095661) vradio_tuning_pane_t1

0x0c06,	// (0x0008ffaf) area_side_right_pane_ParamLimits

0x0c06,	// (0x0008ffaf) area_side_right_pane

0xef98,	// (0x0009e341) status_small_pane_g1

0xefa0,	// (0x0009e349) status_small_pane_g2

0xefa9,	// (0x0009e352) status_small_pane_g3

0xefb2,	// (0x0009e35b) status_small_pane_g4

0x0003,

0x012f,	// (0x0008f4d8) status_small_pane_g

0xefbb,	// (0x0009e364) status_small_pane_t1

0x0b67,	// (0x0008ff10) main_video3_pane

0xb137,	// (0x0009a4e0) cams_zoom_vslider_pane

0xb13f,	// (0x0009a4e8) image3_wide_pane_ParamLimits

0xb13f,	// (0x0009a4e8) image3_wide_pane

0xb159,	// (0x0009a502) image3_wide_small_pane

0xb165,	// (0x0009a50e) main_video3_pane_g1_ParamLimits

0xb165,	// (0x0009a50e) main_video3_pane_g1

0xb181,	// (0x0009a52a) main_video3_pane_g2_ParamLimits

0xb181,	// (0x0009a52a) main_video3_pane_g2

0x0001,

0xf79e,	// (0x0009eb47) main_video3_pane_g_ParamLimits

0xf79e,	// (0x0009eb47) main_video3_pane_g

0xb19d,	// (0x0009a546) main_video3_pane_t1_ParamLimits

0xb19d,	// (0x0009a546) main_video3_pane_t1

0xb1c8,	// (0x0009a571) main_video3_pane_t2_ParamLimits

0xb1c8,	// (0x0009a571) main_video3_pane_t2

0xb1f5,	// (0x0009a59e) main_video3_pane_t3_ParamLimits

0xb1f5,	// (0x0009a59e) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x0009eb4c) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x0009eb4c) main_video3_pane_t

0xb222,	// (0x0009a5cb) cams_zoom_vslider_pane_g1

0xb22b,	// (0x0009a5d4) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x0009eb53) cams_zoom_vslider_pane_g

0xb233,	// (0x0009a5dc) small_slider_vertical_pane

0x4ed8,	// (0x00094281) small_slider_vertical_pane_g1

0x4ed8,	// (0x00094281) small_slider_vertical_pane_g2

0xb23b,	// (0x0009a5e4) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x0009eb58) small_slider_vertical_pane_g

0x0b67,	// (0x0008ff10) main_hwr_training_pane

0xb244,	// (0x0009a5ed) hwr_training_instruct_pane_ParamLimits

0xb244,	// (0x0009a5ed) hwr_training_instruct_pane

0x62c7,	// (0x00095670) hwr_training_navi_pane_ParamLimits

0x62c7,	// (0x00095670) hwr_training_navi_pane

0x62e6,	// (0x0009568f) hwr_training_write_pane_ParamLimits

0x62e6,	// (0x0009568f) hwr_training_write_pane

0x0b67,	// (0x0008ff10) bg_frame_shadow_pane

0xb27b,	// (0x0009a624) hwr_training_write_pane_g1

0xb283,	// (0x0009a62c) hwr_training_write_pane_g2

0xb28b,	// (0x0009a634) hwr_training_write_pane_g3

0xb293,	// (0x0009a63c) hwr_training_write_pane_g4

0xb29b,	// (0x0009a644) hwr_training_write_pane_g5

0xb2a3,	// (0x0009a64c) hwr_training_write_pane_g6

0xb2ab,	// (0x0009a654) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x0009eb5f) hwr_training_write_pane_g

0xb2b3,	// (0x0009a65c) hwr_training_navi_pane_g1_ParamLimits

0xb2b3,	// (0x0009a65c) hwr_training_navi_pane_g1

0xb2c5,	// (0x0009a66e) hwr_training_navi_pane_g2_ParamLimits

0xb2c5,	// (0x0009a66e) hwr_training_navi_pane_g2

0xb2d7,	// (0x0009a680) hwr_training_navi_pane_g3_ParamLimits

0xb2d7,	// (0x0009a680) hwr_training_navi_pane_g3

0xb2e7,	// (0x0009a690) hwr_training_navi_pane_g4_ParamLimits

0xb2e7,	// (0x0009a690) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x0009eb6e) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x0009eb6e) hwr_training_navi_pane_g

0xd590,	// (0x0009c939) hwr_training_navi_pane_t1

0x632e,	// (0x000956d7) list_single_hwr_training_instruct_pane_ParamLimits

0x632e,	// (0x000956d7) list_single_hwr_training_instruct_pane

0xb2f4,	// (0x0009a69d) list_single_hwr_training_instruct_pane_t1

0x4e18,	// (0x000941c1) bg_frame_shadow_pane_g1

0xb303,	// (0x0009a6ac) bg_frame_shadow_pane_g2

0xb30b,	// (0x0009a6b4) bg_frame_shadow_pane_g3

0xb313,	// (0x0009a6bc) bg_frame_shadow_pane_g4

0xb31b,	// (0x0009a6c4) bg_frame_shadow_pane_g5

0xb323,	// (0x0009a6cc) bg_frame_shadow_pane_g6

0xb32b,	// (0x0009a6d4) bg_frame_shadow_pane_g7

0xa4c7,	// (0x00099870) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x0009eb79) bg_frame_shadow_pane_g

0x0b67,	// (0x0008ff10) main_video_tele_dialer_pane

0x634a,	// (0x000956f3) aid_size_cell_video_keypad_ParamLimits

0x634a,	// (0x000956f3) aid_size_cell_video_keypad

0x6364,	// (0x0009570d) grid_video_dialer_keypad_pane_ParamLimits

0x6364,	// (0x0009570d) grid_video_dialer_keypad_pane

0x63b2,	// (0x0009575b) video_down_pane_cp_ParamLimits

0x63b2,	// (0x0009575b) video_down_pane_cp

0x63e6,	// (0x0009578f) cell_video_dialer_keypad_pane_ParamLimits

0x63e6,	// (0x0009578f) cell_video_dialer_keypad_pane

0xb333,	// (0x0009a6dc) bg_button_pane_cp08_ParamLimits

0xb333,	// (0x0009a6dc) bg_button_pane_cp08

0x640c,	// (0x000957b5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x640c,	// (0x000957b5) cell_video_dialer_keypad_pane_g1

0x598a,	// (0x00094d33) mup3_rocker2_pane_ParamLimits

0x598a,	// (0x00094d33) mup3_rocker2_pane

0x4ed8,	// (0x00094281) mup3_rocker2_pane_g1

0x3e58,	// (0x00093201) main_dialer2_pane

0x0b67,	// (0x0008ff10) main_mp4_pane

0xd5a6,	// (0x0009c94f) main_mp4_pane_g1_ParamLimits

0xd5a6,	// (0x0009c94f) main_mp4_pane_g1

0xd5a6,	// (0x0009c94f) main_mp4_pane_g2_ParamLimits

0xd5a6,	// (0x0009c94f) main_mp4_pane_g2

0x6447,	// (0x000957f0) main_mp4_pane_g3_ParamLimits

0x6447,	// (0x000957f0) main_mp4_pane_g3

0xd5b4,	// (0x0009c95d) main_mp4_pane_g4_ParamLimits

0xd5b4,	// (0x0009c95d) main_mp4_pane_g4

0xd5ce,	// (0x0009c977) main_mp4_pane_g5_ParamLimits

0xd5ce,	// (0x0009c977) main_mp4_pane_g5

0x0005,

0xf7f0,	// (0x0009eb99) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x0009eb99) main_mp4_pane_g

0xd602,	// (0x0009c9ab) main_mp4_pane_t1_ParamLimits

0xd602,	// (0x0009c9ab) main_mp4_pane_t1

0xd65e,	// (0x0009ca07) main_mp4_pane_t2_ParamLimits

0xd65e,	// (0x0009ca07) main_mp4_pane_t2

0xb33f,	// (0x0009a6e8) main_mp4_pane_t3_ParamLimits

0xb33f,	// (0x0009a6e8) main_mp4_pane_t3

0xd6b0,	// (0x0009ca59) main_mp4_pane_t4_ParamLimits

0xd6b0,	// (0x0009ca59) main_mp4_pane_t4

0x0003,

0xf7fd,	// (0x0009eba6) main_mp4_pane_t_ParamLimits

0xf7fd,	// (0x0009eba6) main_mp4_pane_t

0xd6f0,	// (0x0009ca99) mp4_progress_pane_ParamLimits

0xd6f0,	// (0x0009ca99) mp4_progress_pane

0xd73a,	// (0x0009cae3) mp4_rocker_pane_ParamLimits

0xd73a,	// (0x0009cae3) mp4_rocker_pane

0xb367,	// (0x0009a710) mp4_progress_pane_t1

0xb380,	// (0x0009a729) mp4_progress_pane_t2

0x0001,

0xf806,	// (0x0009ebaf) mp4_progress_pane_t

0xb399,	// (0x0009a742) mup_progress_pane_cp04

0xb3a5,	// (0x0009a74e) mp4_rocker_pane_g1

0x6491,	// (0x0009583a) aid_cell_size_keypad2_ParamLimits

0x6491,	// (0x0009583a) aid_cell_size_keypad2

0x64a7,	// (0x00095850) dialer2_ne_pane_ParamLimits

0x64a7,	// (0x00095850) dialer2_ne_pane

0x64bf,	// (0x00095868) grid_dialer2_keypad_pane_ParamLimits

0x64bf,	// (0x00095868) grid_dialer2_keypad_pane

0x4be1,	// (0x00093f8a) bg_popup_call_pane_cp07_ParamLimits

0x4be1,	// (0x00093f8a) bg_popup_call_pane_cp07

0x64db,	// (0x00095884) dialer2_ne_pane_t1_ParamLimits

0x64db,	// (0x00095884) dialer2_ne_pane_t1

0x651b,	// (0x000958c4) cell_dialer2_keypad_pane_ParamLimits

0x651b,	// (0x000958c4) cell_dialer2_keypad_pane

0xb3c1,	// (0x0009a76a) bg_button_pane_pane_cp04_ParamLimits

0xb3c1,	// (0x0009a76a) bg_button_pane_pane_cp04

0x6541,	// (0x000958ea) cell_dialer2_keypad_pane_g1_ParamLimits

0x6541,	// (0x000958ea) cell_dialer2_keypad_pane_g1

0x1c18,	// (0x00090fc1) aid_placing_vt_set_content_ParamLimits

0x1c18,	// (0x00090fc1) aid_placing_vt_set_content

0x1c3c,	// (0x00090fe5) aid_placing_vt_set_title_ParamLimits

0x1c3c,	// (0x00090fe5) aid_placing_vt_set_title

0x0b67,	// (0x0008ff10) main_image3_pane

0x6607,	// (0x000959b0) area_side_right_pane_cp01_ParamLimits

0x6607,	// (0x000959b0) area_side_right_pane_cp01

0xd5a6,	// (0x0009c94f) main_image3_pane_g1_ParamLimits

0xd5a6,	// (0x0009c94f) main_image3_pane_g1

0x6620,	// (0x000959c9) main_image3_pane_g2_ParamLimits

0x6620,	// (0x000959c9) main_image3_pane_g2

0x6648,	// (0x000959f1) main_image3_pane_g3_ParamLimits

0x6648,	// (0x000959f1) main_image3_pane_g3

0x6672,	// (0x00095a1b) main_image3_pane_g4_ParamLimits

0x6672,	// (0x00095a1b) main_image3_pane_g4

0x0003,

0xf815,	// (0x0009ebbe) main_image3_pane_g_ParamLimits

0xf815,	// (0x0009ebbe) main_image3_pane_g

0x669c,	// (0x00095a45) main_image3_pane_t1_ParamLimits

0x669c,	// (0x00095a45) main_image3_pane_t1

0x66f4,	// (0x00095a9d) main_image3_pane_t2_ParamLimits

0x66f4,	// (0x00095a9d) main_image3_pane_t2

0x6746,	// (0x00095aef) main_image3_pane_t3_ParamLimits

0x6746,	// (0x00095aef) main_image3_pane_t3

0x0003,

0xf81e,	// (0x0009ebc7) main_image3_pane_t_ParamLimits

0xf81e,	// (0x0009ebc7) main_image3_pane_t

0x0dea,	// (0x00090193) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dea,	// (0x00090193) grid_sctrl_middle_pane_cp01

0x67ce,	// (0x00095b77) cell_sctrl_middle_pane_cp01_ParamLimits

0x67ce,	// (0x00095b77) cell_sctrl_middle_pane_cp01

0x67eb,	// (0x00095b94) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x67eb,	// (0x00095b94) cell_sctrl_middle_pane_cp01_g1

0x0b67,	// (0x0008ff10) main_call4_pane

0x6800,	// (0x00095ba9) aid_size_button_call4_ParamLimits

0x6800,	// (0x00095ba9) aid_size_button_call4

0x6833,	// (0x00095bdc) call4_windows_pane_ParamLimits

0x6833,	// (0x00095bdc) call4_windows_pane

0x6855,	// (0x00095bfe) grid_call4_button_pane_ParamLimits

0x6855,	// (0x00095bfe) grid_call4_button_pane

0xb3cd,	// (0x0009a776) call4_windows_conf_pane

0xb3e8,	// (0x0009a791) popup_call4_audio_first_window_ParamLimits

0xb3e8,	// (0x0009a791) popup_call4_audio_first_window

0xb436,	// (0x0009a7df) popup_call4_audio_second_window_ParamLimits

0xb436,	// (0x0009a7df) popup_call4_audio_second_window

0xb44c,	// (0x0009a7f5) popup_call4_audio_wait_window_ParamLimits

0xb44c,	// (0x0009a7f5) popup_call4_audio_wait_window

0x6880,	// (0x00095c29) cell_call4_button_pane_ParamLimits

0x6880,	// (0x00095c29) cell_call4_button_pane

0x68a7,	// (0x00095c50) bg_button_pane_cp09_ParamLimits

0x68a7,	// (0x00095c50) bg_button_pane_cp09

0x68b3,	// (0x00095c5c) cell_call4_button_pane_g1_ParamLimits

0x68b3,	// (0x00095c5c) cell_call4_button_pane_g1

0x68d9,	// (0x00095c82) cell_call4_button_pane_t1_ParamLimits

0x68d9,	// (0x00095c82) cell_call4_button_pane_t1

0xb494,	// (0x0009a83d) popup_call4_audio_conf_window_ParamLimits

0xb494,	// (0x0009a83d) popup_call4_audio_conf_window

0x59f4,	// (0x00094d9d) mup3_progress_pane_t1_ParamLimits

0x5a0b,	// (0x00094db4) mup3_progress_pane_t2_ParamLimits

0x5a22,	// (0x00094dcb) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x0009eaa0) mup3_progress_pane_t_ParamLimits

0x5a39,	// (0x00094de2) mup_progress_pane_cp03_ParamLimits

0x6109,	// (0x000954b2) mup3_control_keys_pane_g4_copy1

0xd71e,	// (0x0009cac7) mp4_rocker2_pane_ParamLimits

0xd71e,	// (0x0009cac7) mp4_rocker2_pane

0xb4ae,	// (0x0009a857) mp4_rocker2_pane_g1

0xb4b6,	// (0x0009a85f) mp4_rocker2_pane_g2

0xd790,	// (0x0009cb39) mp4_rocker2_pane_g3

0xd798,	// (0x0009cb41) mp4_rocker2_pane_g4

0xd7a0,	// (0x0009cb49) mp4_rocker2_pane_g5

0x0004,

0xf827,	// (0x0009ebd0) mp4_rocker2_pane_g

0x0b67,	// (0x0008ff10) main_camera4_pane

0x0b67,	// (0x0008ff10) main_video4_pane

0x6380,	// (0x00095729) main_video_tele_dialer_pane_t1_ParamLimits

0x6380,	// (0x00095729) main_video_tele_dialer_pane_t1

0x6399,	// (0x00095742) main_video_tele_dialer_pane_t2_ParamLimits

0x6399,	// (0x00095742) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x0009eb8a) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x0009eb8a) main_video_tele_dialer_pane_t

0x6917,	// (0x00095cc0) cam4_autofocus_pane_ParamLimits

0x6917,	// (0x00095cc0) cam4_autofocus_pane

0x692d,	// (0x00095cd6) cam4_image_uncrop_pane_ParamLimits

0x692d,	// (0x00095cd6) cam4_image_uncrop_pane

0x6946,	// (0x00095cef) cam4_indicators_pane_ParamLimits

0x6946,	// (0x00095cef) cam4_indicators_pane

0x6975,	// (0x00095d1e) main_camera4_pane_g1_ParamLimits

0x6975,	// (0x00095d1e) main_camera4_pane_g1

0x6981,	// (0x00095d2a) main_camera4_pane_g2_ParamLimits

0x6981,	// (0x00095d2a) main_camera4_pane_g2

0x6981,	// (0x00095d2a) main_camera4_pane_g3_ParamLimits

0x6981,	// (0x00095d2a) main_camera4_pane_g3

0x698d,	// (0x00095d36) main_camera4_pane_g4_ParamLimits

0x698d,	// (0x00095d36) main_camera4_pane_g4

0x6999,	// (0x00095d42) main_camera4_pane_g5_ParamLimits

0x6999,	// (0x00095d42) main_camera4_pane_g5

0x0005,

0xf832,	// (0x0009ebdb) main_camera4_pane_g_ParamLimits

0xf832,	// (0x0009ebdb) main_camera4_pane_g

0x69b6,	// (0x00095d5f) main_camera4_pane_t1_ParamLimits

0x69b6,	// (0x00095d5f) main_camera4_pane_t1

0xd7c6,	// (0x0009cb6f) bg_tb_trans_pane_cp06

0xd7dc,	// (0x0009cb85) cam4_indicators_pane_g1

0xd7e9,	// (0x0009cb92) cam4_indicators_pane_g2

0x0002,

0xf84d,	// (0x0009ebf6) cam4_indicators_pane_g

0xd809,	// (0x0009cbb2) cam4_indicators_pane_t1

0x6a1a,	// (0x00095dc3) main_video4_pane_g1_ParamLimits

0x6a1a,	// (0x00095dc3) main_video4_pane_g1

0x6a2c,	// (0x00095dd5) main_video4_pane_g2_ParamLimits

0x6a2c,	// (0x00095dd5) main_video4_pane_g2

0x6a40,	// (0x00095de9) main_video4_pane_g3_ParamLimits

0x6a40,	// (0x00095de9) main_video4_pane_g3

0x6a50,	// (0x00095df9) main_video4_pane_g4_ParamLimits

0x6a50,	// (0x00095df9) main_video4_pane_g4

0x0004,

0xf854,	// (0x0009ebfd) main_video4_pane_g_ParamLimits

0xf854,	// (0x0009ebfd) main_video4_pane_g

0x6a70,	// (0x00095e19) vid4_indicators_pane_ParamLimits

0x6a70,	// (0x00095e19) vid4_indicators_pane

0x6aa0,	// (0x00095e49) video4_image_uncrop_cif_pane_ParamLimits

0x6aa0,	// (0x00095e49) video4_image_uncrop_cif_pane

0x6aba,	// (0x00095e63) video4_image_uncrop_nhd_pane_ParamLimits

0x6aba,	// (0x00095e63) video4_image_uncrop_nhd_pane

0x692d,	// (0x00095cd6) video4_image_uncrop_vga_pane_ParamLimits

0x692d,	// (0x00095cd6) video4_image_uncrop_vga_pane

0xd82d,	// (0x0009cbd6) bg_tb_trans_pane_cp07

0x6ad0,	// (0x00095e79) vid4_indicators_pane_g1

0x6add,	// (0x00095e86) vid4_indicators_pane_g2

0x6aea,	// (0x00095e93) vid4_indicators_pane_g3

0x0004,

0xf85f,	// (0x0009ec08) vid4_indicators_pane_g

0x6b0f,	// (0x00095eb8) vid4_indicators_pane_t1

0x6b21,	// (0x00095eca) cam4_autofocus_pane_g1

0x6b29,	// (0x00095ed2) cam4_autofocus_pane_g2

0x6b31,	// (0x00095eda) cam4_autofocus_pane_g3

0x0002,

0xf86a,	// (0x0009ec13) cam4_autofocus_pane_g

0x6b39,	// (0x00095ee2) cam4_autofocus_pane_g3_copy1

0x63ca,	// (0x00095773) video_down_pane_cp_t1

0x63d8,	// (0x00095781) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x0009eb8f) video_down_pane_cp_t

0x0dea,	// (0x00090193) popup_vitu2_window_ParamLimits

0x0dea,	// (0x00090193) popup_vitu2_window

0x6b41,	// (0x00095eea) aid_size_cell2_itu2_ParamLimits

0x6b41,	// (0x00095eea) aid_size_cell2_itu2

0x6b67,	// (0x00095f10) aid_size_cell_itu2_ParamLimits

0x6b67,	// (0x00095f10) aid_size_cell_itu2

0x6bc5,	// (0x00095f6e) bg_popup_window_pane_cp09_ParamLimits

0x6bc5,	// (0x00095f6e) bg_popup_window_pane_cp09

0x6bd3,	// (0x00095f7c) field_vitu2_entry_pane_ParamLimits

0x6bd3,	// (0x00095f7c) field_vitu2_entry_pane

0x6bfb,	// (0x00095fa4) grid_vitu2_function_pane_ParamLimits

0x6bfb,	// (0x00095fa4) grid_vitu2_function_pane

0x6c4c,	// (0x00095ff5) grid_vitu2_itu_pane_ParamLimits

0x6c4c,	// (0x00095ff5) grid_vitu2_itu_pane

0x6cd7,	// (0x00096080) cell_vitu2_itu_pane_ParamLimits

0x6cd7,	// (0x00096080) cell_vitu2_itu_pane

0x6cfd,	// (0x000960a6) cell_vitu2_function_pane_ParamLimits

0x6cfd,	// (0x000960a6) cell_vitu2_function_pane

0xb4d2,	// (0x0009a87b) bg_popup_call_pane_cp08_ParamLimits

0xb4d2,	// (0x0009a87b) bg_popup_call_pane_cp08

0xb4eb,	// (0x0009a894) field_vitu2_entry_pane_g1

0xb4f7,	// (0x0009a8a0) field_vitu2_entry_pane_g2

0x0002,

0xf871,	// (0x0009ec1a) field_vitu2_entry_pane_g

0x6d41,	// (0x000960ea) field_vitu2_entry_pane_t1_ParamLimits

0x6d41,	// (0x000960ea) field_vitu2_entry_pane_t1

0xb511,	// (0x0009a8ba) field_vitu2_entry_pane_t2_ParamLimits

0xb511,	// (0x0009a8ba) field_vitu2_entry_pane_t2

0x0001,

0xf878,	// (0x0009ec21) field_vitu2_entry_pane_t_ParamLimits

0xf878,	// (0x0009ec21) field_vitu2_entry_pane_t

0x6d5e,	// (0x00096107) bg_button_pane_cp010_ParamLimits

0x6d5e,	// (0x00096107) bg_button_pane_cp010

0x6d6c,	// (0x00096115) cell_vitu2_itu_pane_g1

0x6d8a,	// (0x00096133) cell_vitu2_itu_pane_t1_ParamLimits

0x6d8a,	// (0x00096133) cell_vitu2_itu_pane_t1

0x0a73,	// (0x0008fe1c) cell_vitu2_itu_pane_t2_ParamLimits

0x0a73,	// (0x0008fe1c) cell_vitu2_itu_pane_t2

0x0002,

0xf882,	// (0x0009ec2b) cell_vitu2_itu_pane_t_ParamLimits

0xf882,	// (0x0009ec2b) cell_vitu2_itu_pane_t

0xd845,	// (0x0009cbee) bg_button_pane_cp011

0x6df0,	// (0x00096199) cell_vitu2_function_pane_g1

0x0b67,	// (0x0008ff10) main_myfav_hc_pane

0x6796,	// (0x00095b3f) popup_image3_note_pane_ParamLimits

0x6796,	// (0x00095b3f) popup_image3_note_pane

0x67b2,	// (0x00095b5b) popup_image3_tool_bar_pane_ParamLimits

0x67b2,	// (0x00095b5b) popup_image3_tool_bar_pane

0x0af7,	// (0x0008fea0) cell_vitu2_itu_pane_t3_ParamLimits

0x0af7,	// (0x0008fea0) cell_vitu2_itu_pane_t3

0x0b67,	// (0x0008ff10) bg_popup_trans_pane

0xb536,	// (0x0009a8df) grid_image3_tool_bar_pane

0xb540,	// (0x0009a8e9) bg_popup_trans_pane_g1

0xa8cf,	// (0x00099c78) bg_popup_trans_pane_g2

0xb548,	// (0x0009a8f1) bg_popup_trans_pane_g3

0xb550,	// (0x0009a8f9) bg_popup_trans_pane_g4

0xb558,	// (0x0009a901) bg_popup_trans_pane_g5

0xb560,	// (0x0009a909) bg_popup_trans_pane_g6

0xb568,	// (0x0009a911) bg_popup_trans_pane_g7

0xb570,	// (0x0009a919) bg_popup_trans_pane_g8

0xa8af,	// (0x00099c58) bg_popup_trans_pane_g9

0x0008,

0xf889,	// (0x0009ec32) bg_popup_trans_pane_g

0xb578,	// (0x0009a921) cell_image3_tool_bar_pane_ParamLimits

0xb578,	// (0x0009a921) cell_image3_tool_bar_pane

0x4ed8,	// (0x00094281) cell_image3_tool_bar_pane_g1

0x0b67,	// (0x0008ff10) bg_popup_trans_pane_cp1

0xb58e,	// (0x0009a937) popup_image3_note_pane_t1

0xb59c,	// (0x0009a945) popup_image3_note_pane_t2

0xb5aa,	// (0x0009a953) popup_image3_note_pane_t3

0x0002,

0xf89c,	// (0x0009ec45) popup_image3_note_pane_t

0xb5ba,	// (0x0009a963) popup_image3_note_pane_t3_copy1

0x6e04,	// (0x000961ad) bg_myfav_hc_instruction_pane_ParamLimits

0x6e04,	// (0x000961ad) bg_myfav_hc_instruction_pane

0x6e1c,	// (0x000961c5) cell_myfav_contact_pane_ParamLimits

0x6e1c,	// (0x000961c5) cell_myfav_contact_pane

0x6e38,	// (0x000961e1) cell_myfav_contact_pane_cp1_ParamLimits

0x6e38,	// (0x000961e1) cell_myfav_contact_pane_cp1

0x6e50,	// (0x000961f9) cell_myfav_contact_pane_cp2_ParamLimits

0x6e50,	// (0x000961f9) cell_myfav_contact_pane_cp2

0x6e68,	// (0x00096211) cell_myfav_contact_pane_cp3_ParamLimits

0x6e68,	// (0x00096211) cell_myfav_contact_pane_cp3

0x6e7f,	// (0x00096228) cell_myfav_contact_pane_cp4_ParamLimits

0x6e7f,	// (0x00096228) cell_myfav_contact_pane_cp4

0x6e97,	// (0x00096240) cell_myfav_contact_pane_cp5_ParamLimits

0x6e97,	// (0x00096240) cell_myfav_contact_pane_cp5

0x6eab,	// (0x00096254) cell_myfav_contact_pane_cp6_ParamLimits

0x6eab,	// (0x00096254) cell_myfav_contact_pane_cp6

0x6ec1,	// (0x0009626a) cell_myfav_contact_pane_cp7_ParamLimits

0x6ec1,	// (0x0009626a) cell_myfav_contact_pane_cp7

0xb5c8,	// (0x0009a971) listscroll_gen_pane_cp05

0x6ed9,	// (0x00096282) main_myfav_hc_pane_g1_ParamLimits

0x6ed9,	// (0x00096282) main_myfav_hc_pane_g1

0x6ef3,	// (0x0009629c) main_myfav_hc_pane_g2_ParamLimits

0x6ef3,	// (0x0009629c) main_myfav_hc_pane_g2

0x0002,

0xf8a3,	// (0x0009ec4c) main_myfav_hc_pane_g_ParamLimits

0xf8a3,	// (0x0009ec4c) main_myfav_hc_pane_g

0x6f27,	// (0x000962d0) main_myfav_hc_pane_t1_ParamLimits

0x6f27,	// (0x000962d0) main_myfav_hc_pane_t1

0xb5d1,	// (0x0009a97a) main_myfav_hc_pane_t2_ParamLimits

0xb5d1,	// (0x0009a97a) main_myfav_hc_pane_t2

0xb5e3,	// (0x0009a98c) main_myfav_hc_pane_t3_ParamLimits

0xb5e3,	// (0x0009a98c) main_myfav_hc_pane_t3

0x6f3e,	// (0x000962e7) main_myfav_hc_pane_t4_ParamLimits

0x6f3e,	// (0x000962e7) main_myfav_hc_pane_t4

0x0004,

0xf8aa,	// (0x0009ec53) main_myfav_hc_pane_t_ParamLimits

0xf8aa,	// (0x0009ec53) main_myfav_hc_pane_t

0x4ed8,	// (0x00094281) bg_myfav_hc_instruction_pane_g1

0xb5f5,	// (0x0009a99e) cell_myfav_contact_pane_g1_ParamLimits

0xb5f5,	// (0x0009a99e) cell_myfav_contact_pane_g1

0xb5f5,	// (0x0009a99e) cell_myfav_contact_pane_g2_ParamLimits

0xb5f5,	// (0x0009a99e) cell_myfav_contact_pane_g2

0xb601,	// (0x0009a9aa) cell_myfav_contact_pane_g3_ParamLimits

0xb601,	// (0x0009a9aa) cell_myfav_contact_pane_g3

0x559b,	// (0x00094944) cell_myfav_contact_pane_g4_ParamLimits

0x559b,	// (0x00094944) cell_myfav_contact_pane_g4

0xb60e,	// (0x0009a9b7) cell_myfav_contact_pane_g5_ParamLimits

0xb60e,	// (0x0009a9b7) cell_myfav_contact_pane_g5

0x0004,

0xf8b5,	// (0x0009ec5e) cell_myfav_contact_pane_g_ParamLimits

0xf8b5,	// (0x0009ec5e) cell_myfav_contact_pane_g

0x6f0d,	// (0x000962b6) main_myfav_hc_pane_g3_ParamLimits

0x6f0d,	// (0x000962b6) main_myfav_hc_pane_g3

0x0d22,	// (0x000900cb) popup_adpt_find_window

0x6f68,	// (0x00096311) afind_page_pane_ParamLimits

0x6f68,	// (0x00096311) afind_page_pane

0x6f7d,	// (0x00096326) aid_size_cell_afind_ParamLimits

0x6f7d,	// (0x00096326) aid_size_cell_afind

0x6f9b,	// (0x00096344) bg_popup_sub_pane_cp09_ParamLimits

0x6f9b,	// (0x00096344) bg_popup_sub_pane_cp09

0x6fa8,	// (0x00096351) find_pane_cp01_ParamLimits

0x6fa8,	// (0x00096351) find_pane_cp01

0xb61a,	// (0x0009a9c3) grid_afind_control_pane_ParamLimits

0xb61a,	// (0x0009a9c3) grid_afind_control_pane

0x6fb5,	// (0x0009635e) grid_afind_pane_ParamLimits

0x6fb5,	// (0x0009635e) grid_afind_pane

0x6fd7,	// (0x00096380) cell_afind_pane_ParamLimits

0x6fd7,	// (0x00096380) cell_afind_pane

0x4ed8,	// (0x00094281) afind_page_pane_g1

0x703e,	// (0x000963e7) afind_page_pane_g2

0x7047,	// (0x000963f0) afind_page_pane_g3

0x0002,

0xf8c0,	// (0x0009ec69) afind_page_pane_g

0x7050,	// (0x000963f9) afind_page_pane_t1

0xb62e,	// (0x0009a9d7) cell_afind_grid_control_pane_ParamLimits

0xb62e,	// (0x0009a9d7) cell_afind_grid_control_pane

0xb3c1,	// (0x0009a76a) bg_button_pane_cp69_ParamLimits

0xb3c1,	// (0x0009a76a) bg_button_pane_cp69

0x7070,	// (0x00096419) cell_afind_pane_g1_ParamLimits

0x7070,	// (0x00096419) cell_afind_pane_g1

0x707d,	// (0x00096426) cell_afind_pane_t1_ParamLimits

0x707d,	// (0x00096426) cell_afind_pane_t1

0xa6c6,	// (0x00099a6f) bg_button_pane_cp72

0xb63d,	// (0x0009a9e6) cell_afind_grid_control_pane_g1

0x38f8,	// (0x00092ca1) aid_image_placing_area_ParamLimits

0x38f8,	// (0x00092ca1) aid_image_placing_area

0xb042,	// (0x0009a3eb) field_vitu_entry_pane_g1_ParamLimits

0xb042,	// (0x0009a3eb) field_vitu_entry_pane_g1

0xb04e,	// (0x0009a3f7) field_vitu_entry_pane_g2_ParamLimits

0xb04e,	// (0x0009a3f7) field_vitu_entry_pane_g2

0x0001,

0xf771,	// (0x0009eb1a) field_vitu_entry_pane_g_ParamLimits

0xf771,	// (0x0009eb1a) field_vitu_entry_pane_g

0x61d8,	// (0x00095581) cell_vitu_itu_pane_g1_ParamLimits

0x621a,	// (0x000955c3) cell_vitu_itu_pane_t3_ParamLimits

0x621a,	// (0x000955c3) cell_vitu_itu_pane_t3

0xb367,	// (0x0009a710) mp4_progress_pane_t1_ParamLimits

0xb380,	// (0x0009a729) mp4_progress_pane_t2_ParamLimits

0xf806,	// (0x0009ebaf) mp4_progress_pane_t_ParamLimits

0xb399,	// (0x0009a742) mup_progress_pane_cp04_ParamLimits

0x6f52,	// (0x000962fb) main_myfav_hc_pane_t5_ParamLimits

0x6f52,	// (0x000962fb) main_myfav_hc_pane_t5

0x0bbd,	// (0x0008ff66) aid_zoom_text_primary

0x0d22,	// (0x000900cb) popup_adpt_find_window_ParamLimits

0x0dea,	// (0x00090193) main_cam_set_pane

0x695f,	// (0x00095d08) cam4_zoom_pane_ParamLimits

0x695f,	// (0x00095d08) cam4_zoom_pane

0x708f,	// (0x00096438) main_cam_set_pane_g1_ParamLimits

0x708f,	// (0x00096438) main_cam_set_pane_g1

0x709d,	// (0x00096446) main_cam_set_pane_g2_ParamLimits

0x709d,	// (0x00096446) main_cam_set_pane_g2

0x0001,

0xf8c7,	// (0x0009ec70) main_cam_set_pane_g_ParamLimits

0xf8c7,	// (0x0009ec70) main_cam_set_pane_g

0x70c0,	// (0x00096469) main_cam_set_pane_t1_ParamLimits

0x70c0,	// (0x00096469) main_cam_set_pane_t1

0x70db,	// (0x00096484) main_cset_listscroll_pane_ParamLimits

0x70db,	// (0x00096484) main_cset_listscroll_pane

0x70ff,	// (0x000964a8) main_cset_slider_pane_ParamLimits

0x70ff,	// (0x000964a8) main_cset_slider_pane

0xb64e,	// (0x0009a9f7) main_cset_list_pane_ParamLimits

0xb64e,	// (0x0009a9f7) main_cset_list_pane

0xb65e,	// (0x0009aa07) scroll_pane_cp028

0x7129,	// (0x000964d2) aid_area_touch_slider

0x7145,	// (0x000964ee) cset_slider_pane

0x716f,	// (0x00096518) main_cset_slider_pane_g1

0x7184,	// (0x0009652d) main_cset_slider_pane_g2

0x0011,

0xf8cc,	// (0x0009ec75) main_cset_slider_pane_g

0xb697,	// (0x0009aa40) main_cset_slider_pane_t1

0x7246,	// (0x000965ef) main_cset_slider_pane_t2

0x7260,	// (0x00096609) main_cset_slider_pane_t3

0x727a,	// (0x00096623) main_cset_slider_pane_t4

0x7294,	// (0x0009663d) main_cset_slider_pane_t5

0x72b2,	// (0x0009665b) main_cset_slider_pane_t6

0x72c9,	// (0x00096672) main_cset_slider_pane_t7

0x000e,

0xf8f1,	// (0x0009ec9a) main_cset_slider_pane_t

0x73d5,	// (0x0009677e) cset_list_set_pane_ParamLimits

0x73d5,	// (0x0009677e) cset_list_set_pane

0x73e9,	// (0x00096792) aid_position_infowindow_above

0x73f1,	// (0x0009679a) aid_position_infowindow_below

0xb737,	// (0x0009aae0) cset_list_set_pane_g1_ParamLimits

0xb737,	// (0x0009aae0) cset_list_set_pane_g1

0x73f9,	// (0x000967a2) cset_list_set_pane_g3_ParamLimits

0x73f9,	// (0x000967a2) cset_list_set_pane_g3

0x0001,

0xf910,	// (0x0009ecb9) cset_list_set_pane_g_ParamLimits

0xf910,	// (0x0009ecb9) cset_list_set_pane_g

0x7408,	// (0x000967b1) cset_list_set_pane_t1_ParamLimits

0x7408,	// (0x000967b1) cset_list_set_pane_t1

0x0dea,	// (0x00090193) list_highlight_pane_cp021_ParamLimits

0x0dea,	// (0x00090193) list_highlight_pane_cp021

0xdcfe,	// (0x0009d0a7) cset_slider_pane_g1

0xdd10,	// (0x0009d0b9) cset_slider_pane_g2

0xdd07,	// (0x0009d0b0) cset_slider_pane_g3

0x0002,

0x04f1,	// (0x0008f89a) cset_slider_pane_g

0xd853,	// (0x0009cbfc) aid_area_touch_cam4_zoom

0xd85b,	// (0x0009cc04) cam4_zoom_cont_pane

0xd863,	// (0x0009cc0c) cam4_zoom_pane_g1

0xd86b,	// (0x0009cc14) cam4_zoom_pane_g2

0x741d,	// (0x000967c6) cam4_zoom_pane_g3

0x0002,

0xf915,	// (0x0009ecbe) cam4_zoom_pane_g

0xd873,	// (0x0009cc1c) cam4_zoom_cont_pane_g1

0xd87c,	// (0x0009cc25) cam4_zoom_cont_pane_g2

0xd885,	// (0x0009cc2e) cam4_zoom_cont_pane_g3

0x0002,

0xf91c,	// (0x0009ecc5) cam4_zoom_cont_pane_g

0x681e,	// (0x00095bc7) call4_image_pane_ParamLimits

0x681e,	// (0x00095bc7) call4_image_pane

0xb3cd,	// (0x0009a776) call4_windows_conf_pane_ParamLimits

0xb414,	// (0x0009a7bd) popup_call4_audio_in_window_ParamLimits

0xb414,	// (0x0009a7bd) popup_call4_audio_in_window

0x0b67,	// (0x0008ff10) bg_popup_call2_act_pane_cp02

0xb48c,	// (0x0009a835) call4_list_conf_pane

0x4ed8,	// (0x00094281) call4_image_pane_g1

0x4ed8,	// (0x00094281) call4_image_pane_g2

0x0001,

0xf637,	// (0x0009e9e0) call4_image_pane_g

0xb743,	// (0x0009aaec) list_single_graphic_popup_conf4_pane_ParamLimits

0xb743,	// (0x0009aaec) list_single_graphic_popup_conf4_pane

0x0b67,	// (0x0008ff10) list_highlight_pane_cp022

0xb758,	// (0x0009ab01) list_single_graphic_popup_conf4_pane_g1

0xd9f8,	// (0x0009cda1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf923,	// (0x0009eccc) list_single_graphic_popup_conf4_pane_g

0xb760,	// (0x0009ab09) list_single_graphic_popup_conf4_pane_t1

0x1d56,	// (0x000910ff) popup_vtel_slider_window_ParamLimits

0x1d56,	// (0x000910ff) popup_vtel_slider_window

0xb3af,	// (0x0009a758) dialer2_ne_pane_t2_ParamLimits

0xb3af,	// (0x0009a758) dialer2_ne_pane_t2

0x0001,

0xf80b,	// (0x0009ebb4) dialer2_ne_pane_t_ParamLimits

0xf80b,	// (0x0009ebb4) dialer2_ne_pane_t

0x4be1,	// (0x00093f8a) bg_popup_sub_pane_cp010_ParamLimits

0x4be1,	// (0x00093f8a) bg_popup_sub_pane_cp010

0x7425,	// (0x000967ce) popup_vtel_slider_window_g1_ParamLimits

0x7425,	// (0x000967ce) popup_vtel_slider_window_g1

0x7438,	// (0x000967e1) popup_vtel_slider_window_g2_ParamLimits

0x7438,	// (0x000967e1) popup_vtel_slider_window_g2

0x0003,

0xf928,	// (0x0009ecd1) popup_vtel_slider_window_g_ParamLimits

0xf928,	// (0x0009ecd1) popup_vtel_slider_window_g

0x748e,	// (0x00096837) vtel_slider_pane_ParamLimits

0x748e,	// (0x00096837) vtel_slider_pane

0x74b0,	// (0x00096859) vtel_slider_pane_g1_ParamLimits

0x74b0,	// (0x00096859) vtel_slider_pane_g1

0x74c4,	// (0x0009686d) vtel_slider_pane_g2_ParamLimits

0x74c4,	// (0x0009686d) vtel_slider_pane_g2

0x74dc,	// (0x00096885) vtel_slider_pane_g3_ParamLimits

0x74dc,	// (0x00096885) vtel_slider_pane_g3

0x74b0,	// (0x00096859) vtel_slider_pane_g4_ParamLimits

0x74b0,	// (0x00096859) vtel_slider_pane_g4

0x74f2,	// (0x0009689b) vtel_slider_pane_g5_ParamLimits

0x74f2,	// (0x0009689b) vtel_slider_pane_g5

0x0004,

0xf931,	// (0x0009ecda) vtel_slider_pane_g_ParamLimits

0xf931,	// (0x0009ecda) vtel_slider_pane_g

0x0b67,	// (0x0008ff10) main_gallery2_pane

0x6b93,	// (0x00095f3c) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b93,	// (0x00095f3c) aid_size_row_itut2_dropdow_list

0x6c23,	// (0x00095fcc) grid_vitu2_function_top_pane_ParamLimits

0x6c23,	// (0x00095fcc) grid_vitu2_function_top_pane

0x6c82,	// (0x0009602b) popup_vitu2_dropdown_list_window_ParamLimits

0x6c82,	// (0x0009602b) popup_vitu2_dropdown_list_window

0x6cab,	// (0x00096054) popup_vitu2_match_list_window

0x7508,	// (0x000968b1) cell_vitu2_function_top_pane_ParamLimits

0x7508,	// (0x000968b1) cell_vitu2_function_top_pane

0x7528,	// (0x000968d1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7528,	// (0x000968d1) cell_vitu2_function_top_pane_cp01

0x7546,	// (0x000968ef) cell_vitu2_function_top_wide_pane_ParamLimits

0x7546,	// (0x000968ef) cell_vitu2_function_top_wide_pane

0xd845,	// (0x0009cbee) bg_button_pane_cp012

0x7564,	// (0x0009690d) cell_vitu2_function_top_pane_g1

0xd88e,	// (0x0009cc37) bg_button_pane_cp013_ParamLimits

0xd88e,	// (0x0009cc37) bg_button_pane_cp013

0x7578,	// (0x00096921) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7578,	// (0x00096921) cell_vitu2_function_top_wide_pane_g1

0xd845,	// (0x0009cbee) bg_popup_sub_pane_cp20

0x7590,	// (0x00096939) list_vitu2_match_list_pane

0xb540,	// (0x0009a8e9) bg_popup_sub_pane_cp20_g1

0xb548,	// (0x0009a8f1) bg_popup_sub_pane_cp20_g2

0xa8cf,	// (0x00099c78) bg_popup_sub_pane_cp20_g3

0xb550,	// (0x0009a8f9) bg_popup_sub_pane_cp20_g4

0xa8af,	// (0x00099c58) bg_popup_sub_pane_cp20_g5

0xb784,	// (0x0009ab2d) bg_popup_sub_pane_cp20_g6

0xb560,	// (0x0009a909) bg_popup_sub_pane_cp20_g7

0xb568,	// (0x0009a911) bg_popup_sub_pane_cp20_g8

0xb570,	// (0x0009a919) bg_popup_sub_pane_cp20_g9

0x0008,

0xf93c,	// (0x0009ece5) bg_popup_sub_pane_cp20_g

0xd8aa,	// (0x0009cc53) list_vitu2_match_list_item_pane_ParamLimits

0xd8aa,	// (0x0009cc53) list_vitu2_match_list_item_pane

0xd8bc,	// (0x0009cc65) list_vitu2_match_list_item_pane_t1

0xa3aa,	// (0x00099753) bg_popup_sub_pane_cp21

0xd8ca,	// (0x0009cc73) grid_vitu2_dropdown_list_pane

0x75e0,	// (0x00096989) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75e0,	// (0x00096989) cell_vitu2_dropdown_list_char_pane

0x7603,	// (0x000969ac) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7603,	// (0x000969ac) cell_vitu2_dropdown_list_ctrl_pane

0xb7a4,	// (0x0009ab4d) cell_vitu2_dropdown_list_char_pane_g1

0xb7ad,	// (0x0009ab56) cell_vitu2_dropdown_list_char_pane_g2

0xb7b6,	// (0x0009ab5f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf959,	// (0x0009ed02) cell_vitu2_dropdown_list_char_pane_g

0x7631,	// (0x000969da) cell_vitu2_dropdown_list_char_pane_t1

0x763f,	// (0x000969e8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x763f,	// (0x000969e8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x764f,	// (0x000969f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x764f,	// (0x000969f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7660,	// (0x00096a09) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7660,	// (0x00096a09) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7670,	// (0x00096a19) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7670,	// (0x00096a19) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd7c6,	// (0x0009cb6f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd7c6,	// (0x0009cb6f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf960,	// (0x0009ed09) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf960,	// (0x0009ed09) cell_vitu2_dropdown_list_ctrl_pane_g

0x768c,	// (0x00096a35) aid_size_cell_gallery2_ParamLimits

0x768c,	// (0x00096a35) aid_size_cell_gallery2

0x76a2,	// (0x00096a4b) grid_gallery2_pane_ParamLimits

0x76a2,	// (0x00096a4b) grid_gallery2_pane

0x76b6,	// (0x00096a5f) scroll_pane_cp029_ParamLimits

0x76b6,	// (0x00096a5f) scroll_pane_cp029

0x76c2,	// (0x00096a6b) cell_gallery2_pane_ParamLimits

0x76c2,	// (0x00096a6b) cell_gallery2_pane

0xb7bf,	// (0x0009ab68) cell_gallery2_pane_g2

0x76fc,	// (0x00096aa5) cell_gallery2_pane_g3

0xb7c9,	// (0x0009ab72) cell_gallery2_pane_g4

0xb7d1,	// (0x0009ab7a) cell_gallery2_pane_g5

0xdbc6,	// (0x0009cf6f) grid_highlight_pane_cp10

0x6cab,	// (0x00096054) popup_vitu2_match_list_window_ParamLimits

0x6cc2,	// (0x0009606b) popup_vitu2_query_window_ParamLimits

0x6cc2,	// (0x0009606b) popup_vitu2_query_window

0xa3aa,	// (0x00099753) bg_vitu2_candi_button_pane

0xb7a4,	// (0x0009ab4d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb7ad,	// (0x0009ab56) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb7b6,	// (0x0009ab5f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7704,	// (0x00096aad) bg_button_pane_cp015

0x7718,	// (0x00096ac1) bg_button_pane_cp016

0x772b,	// (0x00096ad4) bg_button_pane_cp017

0xefd1,	// (0x0009e37a) bg_popup_sub_pane_cp22

0xb7d9,	// (0x0009ab82) popup_vitu2_query_window_g1

0x7770,	// (0x00096b19) popup_vitu2_query_window_g2

0x0002,

0xf96b,	// (0x0009ed14) popup_vitu2_query_window_g

0x778f,	// (0x00096b38) popup_vitu2_query_window_t1_ParamLimits

0x778f,	// (0x00096b38) popup_vitu2_query_window_t1

0x77c4,	// (0x00096b6d) popup_vitu2_query_window_t2_ParamLimits

0x77c4,	// (0x00096b6d) popup_vitu2_query_window_t2

0x77d6,	// (0x00096b7f) popup_vitu2_query_window_t3_ParamLimits

0x77d6,	// (0x00096b7f) popup_vitu2_query_window_t3

0x77fe,	// (0x00096ba7) popup_vitu2_query_window_t4_ParamLimits

0x77fe,	// (0x00096ba7) popup_vitu2_query_window_t4

0x781f,	// (0x00096bc8) popup_vitu2_query_window_t5_ParamLimits

0x781f,	// (0x00096bc8) popup_vitu2_query_window_t5

0x0006,

0xf972,	// (0x0009ed1b) popup_vitu2_query_window_t_ParamLimits

0xf972,	// (0x0009ed1b) popup_vitu2_query_window_t

0xb646,	// (0x0009a9ef) main_cset_text_pane

0x7129,	// (0x000964d2) aid_area_touch_slider_ParamLimits

0x7145,	// (0x000964ee) cset_slider_pane_ParamLimits

0x716f,	// (0x00096518) main_cset_slider_pane_g1_ParamLimits

0x7184,	// (0x0009652d) main_cset_slider_pane_g2_ParamLimits

0xb667,	// (0x0009aa10) main_cset_slider_pane_g3_ParamLimits

0xb667,	// (0x0009aa10) main_cset_slider_pane_g3

0x7199,	// (0x00096542) main_cset_slider_pane_g4_ParamLimits

0x7199,	// (0x00096542) main_cset_slider_pane_g4

0x71a8,	// (0x00096551) main_cset_slider_pane_g5_ParamLimits

0x71a8,	// (0x00096551) main_cset_slider_pane_g5

0x71b6,	// (0x0009655f) main_cset_slider_pane_g6_ParamLimits

0x71b6,	// (0x0009655f) main_cset_slider_pane_g6

0xf8cc,	// (0x0009ec75) main_cset_slider_pane_g_ParamLimits

0xb697,	// (0x0009aa40) main_cset_slider_pane_t1_ParamLimits

0x7246,	// (0x000965ef) main_cset_slider_pane_t2_ParamLimits

0x7260,	// (0x00096609) main_cset_slider_pane_t3_ParamLimits

0x727a,	// (0x00096623) main_cset_slider_pane_t4_ParamLimits

0x7294,	// (0x0009663d) main_cset_slider_pane_t5_ParamLimits

0x72b2,	// (0x0009665b) main_cset_slider_pane_t6_ParamLimits

0x72c9,	// (0x00096672) main_cset_slider_pane_t7_ParamLimits

0x72f7,	// (0x000966a0) main_cset_slider_pane_t8_ParamLimits

0x72f7,	// (0x000966a0) main_cset_slider_pane_t8

0x731f,	// (0x000966c8) main_cset_slider_pane_t9_ParamLimits

0x731f,	// (0x000966c8) main_cset_slider_pane_t9

0x7347,	// (0x000966f0) main_cset_slider_pane_t10_ParamLimits

0x7347,	// (0x000966f0) main_cset_slider_pane_t10

0x736f,	// (0x00096718) main_cset_slider_pane_t11_ParamLimits

0x736f,	// (0x00096718) main_cset_slider_pane_t11

0x7399,	// (0x00096742) main_cset_slider_pane_t12_ParamLimits

0x7399,	// (0x00096742) main_cset_slider_pane_t12

0x73b6,	// (0x0009675f) main_cset_slider_pane_t13_ParamLimits

0x73b6,	// (0x0009675f) main_cset_slider_pane_t13

0xf8f1,	// (0x0009ec9a) main_cset_slider_pane_t_ParamLimits

0x0b67,	// (0x0008ff10) bg_popup_sub_pane_cp011

0xb7e5,	// (0x0009ab8e) main_cset_text_pane_g1

0xb7ed,	// (0x0009ab96) main_cset_text_pane_t1

0xb7fb,	// (0x0009aba4) main_cset_text_pane_t2

0xb809,	// (0x0009abb2) main_cset_text_pane_t3

0xb817,	// (0x0009abc0) main_cset_text_pane_t4

0xb825,	// (0x0009abce) main_cset_text_pane_t5

0xb833,	// (0x0009abdc) main_cset_text_pane_t6

0xb841,	// (0x0009abea) main_cset_text_pane_t7

0x0006,

0xf981,	// (0x0009ed2a) main_cset_text_pane_t

0x0b67,	// (0x0008ff10) main_cam4_burst_pane

0x0b67,	// (0x0008ff10) main_cam5_pane

0x705e,	// (0x00096407) bg_button_pane_cp019

0x7067,	// (0x00096410) bg_button_pane_cp020

0xb673,	// (0x0009aa1c) main_cset_slider_pane_g7_ParamLimits

0xb673,	// (0x0009aa1c) main_cset_slider_pane_g7

0xb67f,	// (0x0009aa28) main_cset_slider_pane_g8_ParamLimits

0xb67f,	// (0x0009aa28) main_cset_slider_pane_g8

0x71ca,	// (0x00096573) main_cset_slider_pane_g9_ParamLimits

0x71ca,	// (0x00096573) main_cset_slider_pane_g9

0x71d6,	// (0x0009657f) main_cset_slider_pane_g10_ParamLimits

0x71d6,	// (0x0009657f) main_cset_slider_pane_g10

0x71e2,	// (0x0009658b) main_cset_slider_pane_g11_ParamLimits

0x71e2,	// (0x0009658b) main_cset_slider_pane_g11

0x71ee,	// (0x00096597) main_cset_slider_pane_g12_ParamLimits

0x71ee,	// (0x00096597) main_cset_slider_pane_g12

0x71fa,	// (0x000965a3) main_cset_slider_pane_g13_ParamLimits

0x71fa,	// (0x000965a3) main_cset_slider_pane_g13

0x7206,	// (0x000965af) main_cset_slider_pane_g14_ParamLimits

0x7206,	// (0x000965af) main_cset_slider_pane_g14

0x7212,	// (0x000965bb) main_cset_slider_pane_g15_ParamLimits

0x7212,	// (0x000965bb) main_cset_slider_pane_g15

0xb6c5,	// (0x0009aa6e) main_cset_slider_pane_t14_ParamLimits

0xb6c5,	// (0x0009aa6e) main_cset_slider_pane_t14

0xb6fe,	// (0x0009aaa7) main_cset_slider_pane_t15_ParamLimits

0xb6fe,	// (0x0009aaa7) main_cset_slider_pane_t15

0x7896,	// (0x00096c3f) aid_cam4_burst_size_cell_ParamLimits

0x7896,	// (0x00096c3f) aid_cam4_burst_size_cell

0x78b6,	// (0x00096c5f) grid_cam4_burst_pane_ParamLimits

0x78b6,	// (0x00096c5f) grid_cam4_burst_pane

0x78f0,	// (0x00096c99) linegrid_cam4_burst_pane_ParamLimits

0x78f0,	// (0x00096c99) linegrid_cam4_burst_pane

0xb84f,	// (0x0009abf8) scroll_pane_cp30_ParamLimits

0xb84f,	// (0x0009abf8) scroll_pane_cp30

0x7914,	// (0x00096cbd) cell_cam4_burst_pane_ParamLimits

0x7914,	// (0x00096cbd) cell_cam4_burst_pane

0xb85b,	// (0x0009ac04) linegrid_cam4_burst_pane_g1_ParamLimits

0xb85b,	// (0x0009ac04) linegrid_cam4_burst_pane_g1

0x7969,	// (0x00096d12) linegrid_cam4_burst_pane_g2_ParamLimits

0x7969,	// (0x00096d12) linegrid_cam4_burst_pane_g2

0xb868,	// (0x0009ac11) linegrid_cam4_burst_pane_g3_ParamLimits

0xb868,	// (0x0009ac11) linegrid_cam4_burst_pane_g3

0x0002,

0xf990,	// (0x0009ed39) linegrid_cam4_burst_pane_g_ParamLimits

0xf990,	// (0x0009ed39) linegrid_cam4_burst_pane_g

0x797a,	// (0x00096d23) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x797a,	// (0x00096d23) linegrid_cam4_burst_pane_g3_copy1

0xb875,	// (0x0009ac1e) linegrid_cam4_burst_pane_g4_ParamLimits

0xb875,	// (0x0009ac1e) linegrid_cam4_burst_pane_g4

0x7998,	// (0x00096d41) linegrid_cam4_burst_pane_g5_ParamLimits

0x7998,	// (0x00096d41) linegrid_cam4_burst_pane_g5

0x79a9,	// (0x00096d52) linegrid_cam4_burst_pane_g6_ParamLimits

0x79a9,	// (0x00096d52) linegrid_cam4_burst_pane_g6

0xb882,	// (0x0009ac2b) linegrid_cam4_burst_pane_g7_ParamLimits

0xb882,	// (0x0009ac2b) linegrid_cam4_burst_pane_g7

0x79c0,	// (0x00096d69) cell_cam4_burst_pane_g1

0xb89b,	// (0x0009ac44) main_cam5_pane_t1_ParamLimits

0xb89b,	// (0x0009ac44) main_cam5_pane_t1

0xb8ad,	// (0x0009ac56) main_cam5_pane_t2_ParamLimits

0xb8ad,	// (0x0009ac56) main_cam5_pane_t2

0xb8bf,	// (0x0009ac68) main_cam5_pane_t3_ParamLimits

0xb8bf,	// (0x0009ac68) main_cam5_pane_t3

0xb8d1,	// (0x0009ac7a) main_cam5_pane_t4_ParamLimits

0xb8d1,	// (0x0009ac7a) main_cam5_pane_t4

0xb8e9,	// (0x0009ac92) main_cam5_pane_t5_ParamLimits

0xb8e9,	// (0x0009ac92) main_cam5_pane_t5

0xb8fd,	// (0x0009aca6) main_cam5_pane_t6_ParamLimits

0xb8fd,	// (0x0009aca6) main_cam5_pane_t6

0xb911,	// (0x0009acba) main_cam5_pane_t7_ParamLimits

0xb911,	// (0x0009acba) main_cam5_pane_t7

0xb923,	// (0x0009accc) main_cam5_pane_t8_ParamLimits

0xb923,	// (0x0009accc) main_cam5_pane_t8

0xb941,	// (0x0009acea) main_cam5_pane_t9_ParamLimits

0xb941,	// (0x0009acea) main_cam5_pane_t9

0xb953,	// (0x0009acfc) main_cam5_pane_t10_ParamLimits

0xb953,	// (0x0009acfc) main_cam5_pane_t10

0xb965,	// (0x0009ad0e) main_cam5_pane_t11_ParamLimits

0xb965,	// (0x0009ad0e) main_cam5_pane_t11

0xb979,	// (0x0009ad22) main_cam5_pane_t12_ParamLimits

0xb979,	// (0x0009ad22) main_cam5_pane_t12

0xb990,	// (0x0009ad39) main_cam5_pane_t13_ParamLimits

0xb990,	// (0x0009ad39) main_cam5_pane_t13

0x000c,

0xf99c,	// (0x0009ed45) main_cam5_pane_t_ParamLimits

0xf99c,	// (0x0009ed45) main_cam5_pane_t

0x0db0,	// (0x00090159) popup_scut_keymap_window_ParamLimits

0x0db0,	// (0x00090159) popup_scut_keymap_window

0x79d3,	// (0x00096d7c) aid_size_cell_brow_shortcut

0xdbc6,	// (0x0009cf6f) bg_popup_window_pane_cp010

0x79df,	// (0x00096d88) grid_scut_pane

0x79eb,	// (0x00096d94) cell_scut_pane_ParamLimits

0x79eb,	// (0x00096d94) cell_scut_pane

0x7a04,	// (0x00096dad) cell_scut_pane_g1

0xb9b3,	// (0x0009ad5c) cell_scut_pane_t1

0xb9c2,	// (0x0009ad6b) cell_scut_pane_t2

0x7a0d,	// (0x00096db6) cell_scut_pane_t3

0x0002,

0xf9b7,	// (0x0009ed60) cell_scut_pane_t

0x55a9,	// (0x00094952) main_mup3_pane_g8_ParamLimits

0x55a9,	// (0x00094952) main_mup3_pane_g8

0x6bad,	// (0x00095f56) area_vitu2_query_pane_ParamLimits

0x6bad,	// (0x00095f56) area_vitu2_query_pane

0x773e,	// (0x00096ae7) input_focus_pane_cp08

0xb9d1,	// (0x0009ad7a) area_vitu2_query_pane_g1

0x7a1b,	// (0x00096dc4) area_vitu2_query_pane_g2

0x0001,

0xf9be,	// (0x0009ed67) area_vitu2_query_pane_g

0x7a2e,	// (0x00096dd7) area_vitu2_query_pane_t1_ParamLimits

0x7a2e,	// (0x00096dd7) area_vitu2_query_pane_t1

0x7a42,	// (0x00096deb) area_vitu2_query_pane_t2_ParamLimits

0x7a42,	// (0x00096deb) area_vitu2_query_pane_t2

0x7a56,	// (0x00096dff) area_vitu2_query_pane_t3_ParamLimits

0x7a56,	// (0x00096dff) area_vitu2_query_pane_t3

0xb9dd,	// (0x0009ad86) area_vitu2_query_pane_t4_ParamLimits

0xb9dd,	// (0x0009ad86) area_vitu2_query_pane_t4

0xba05,	// (0x0009adae) area_vitu2_query_pane_t5_ParamLimits

0xba05,	// (0x0009adae) area_vitu2_query_pane_t5

0xba2d,	// (0x0009add6) area_vitu2_query_pane_t6_ParamLimits

0xba2d,	// (0x0009add6) area_vitu2_query_pane_t6

0x0006,

0xf9c3,	// (0x0009ed6c) area_vitu2_query_pane_t_ParamLimits

0xf9c3,	// (0x0009ed6c) area_vitu2_query_pane_t

0x7a7e,	// (0x00096e27) bg_button_pane_cp018

0x7a8c,	// (0x00096e35) bg_button_pane_cp021

0x7a98,	// (0x00096e41) bg_button_pane_cp022

0x7aa9,	// (0x00096e52) input_focus_pane_cp09

0x2e18,	// (0x000921c1) aid_size_touch_mv_arrow_left

0x2e41,	// (0x000921ea) aid_size_touch_mv_arrow_right

0x722a,	// (0x000965d3) main_cset_slider_pane_g16_ParamLimits

0x722a,	// (0x000965d3) main_cset_slider_pane_g16

0x7238,	// (0x000965e1) main_cset_slider_pane_g17_ParamLimits

0x7238,	// (0x000965e1) main_cset_slider_pane_g17

0x79c0,	// (0x00096d69) cell_cam4_burst_pane_g1_ParamLimits

0x0b67,	// (0x0008ff10) compa_mode_pane

0x7448,	// (0x000967f1) popup_vtel_slider_window_g3_ParamLimits

0x7448,	// (0x000967f1) popup_vtel_slider_window_g3

0x745f,	// (0x00096808) popup_vtel_slider_window_g4_ParamLimits

0x745f,	// (0x00096808) popup_vtel_slider_window_g4

0x7476,	// (0x0009681f) popup_vtel_slider_window_t1_ParamLimits

0x7476,	// (0x0009681f) popup_vtel_slider_window_t1

0x0b67,	// (0x0008ff10) main_cl_pane

0xeffd,	// (0x0009e3a6) popup_imed_adjust2_window_ParamLimits

0xefd1,	// (0x0009e37a) bg_tb_trans_pane_cp05_ParamLimits

0xaf77,	// (0x0009a320) popup_imed_adjust2_window_g1_ParamLimits

0xaf86,	// (0x0009a32f) popup_imed_adjust2_window_g2_ParamLimits

0xaf86,	// (0x0009a32f) popup_imed_adjust2_window_g2

0xaf92,	// (0x0009a33b) popup_imed_adjust2_window_g3_ParamLimits

0xaf92,	// (0x0009a33b) popup_imed_adjust2_window_g3

0x0002,

0xf735,	// (0x0009eade) popup_imed_adjust2_window_g_ParamLimits

0xf735,	// (0x0009eade) popup_imed_adjust2_window_g

0xaf9e,	// (0x0009a347) popup_imed_adjust2_window_t1_ParamLimits

0xafb6,	// (0x0009a35f) slider_imed_adjust_pane_ParamLimits

0xafca,	// (0x0009a373) slider_imed_adjust_pane_g1_ParamLimits

0xafda,	// (0x0009a383) slider_imed_adjust_pane_g2_ParamLimits

0xafea,	// (0x0009a393) slider_imed_adjust_pane_g3_ParamLimits

0xaffb,	// (0x0009a3a4) slider_imed_adjust_pane_g4_ParamLimits

0xf73c,	// (0x0009eae5) slider_imed_adjust_pane_g_ParamLimits

0x68ff,	// (0x00095ca8) aid_touch_area_cam4_ParamLimits

0x68ff,	// (0x00095ca8) aid_touch_area_cam4

0xd7a8,	// (0x0009cb51) battery_pane_cp01

0x69aa,	// (0x00095d53) main_camera4_pane_g6_ParamLimits

0x69aa,	// (0x00095d53) main_camera4_pane_g6

0x69cd,	// (0x00095d76) main_camera4_pane_t2_ParamLimits

0x69cd,	// (0x00095d76) main_camera4_pane_t2

0x0001,

0xf83f,	// (0x0009ebe8) main_camera4_pane_t_ParamLimits

0xf83f,	// (0x0009ebe8) main_camera4_pane_t

0x6a02,	// (0x00095dab) aid_touch_area_vid4_ParamLimits

0x6a02,	// (0x00095dab) aid_touch_area_vid4

0x6a60,	// (0x00095e09) main_video4_pane_g5_ParamLimits

0x6a60,	// (0x00095e09) main_video4_pane_g5

0x6a87,	// (0x00095e30) vid4_progress_pane_ParamLimits

0x6a87,	// (0x00095e30) vid4_progress_pane

0xb68b,	// (0x0009aa34) main_cset_slider_pane_g18_ParamLimits

0xb68b,	// (0x0009aa34) main_cset_slider_pane_g18

0xb88f,	// (0x0009ac38) cell_cam4_burst_pane_g2_ParamLimits

0xb88f,	// (0x0009ac38) cell_cam4_burst_pane_g2

0x0001,

0xf997,	// (0x0009ed40) cell_cam4_burst_pane_g_ParamLimits

0xf997,	// (0x0009ed40) cell_cam4_burst_pane_g

0xa3ce,	// (0x00099777) bg_cl_pane_ParamLimits

0xa3ce,	// (0x00099777) bg_cl_pane

0x7aba,	// (0x00096e63) cl_header_pane_ParamLimits

0x7aba,	// (0x00096e63) cl_header_pane

0x7ace,	// (0x00096e77) cl_listscroll_pane_ParamLimits

0x7ace,	// (0x00096e77) cl_listscroll_pane

0xba79,	// (0x0009ae22) bg_cl_pane_g1

0xba81,	// (0x0009ae2a) bg_cl_pane_g2

0xba89,	// (0x0009ae32) bg_cl_pane_g3

0xba91,	// (0x0009ae3a) bg_cl_pane_g4

0xba99,	// (0x0009ae42) bg_cl_pane_g5

0xbaa1,	// (0x0009ae4a) bg_cl_pane_g6

0xbaa9,	// (0x0009ae52) bg_cl_pane_g7

0xbab1,	// (0x0009ae5a) bg_cl_pane_g8

0xbab9,	// (0x0009ae62) bg_cl_pane_g9

0x0008,

0xf9d2,	// (0x0009ed7b) bg_cl_pane_g

0x7ade,	// (0x00096e87) aid_height_cl_leading_ParamLimits

0x7ade,	// (0x00096e87) aid_height_cl_leading

0x7aea,	// (0x00096e93) aid_height_cl_text_ParamLimits

0x7aea,	// (0x00096e93) aid_height_cl_text

0x0dea,	// (0x00090193) bg_cl_header_pane_ParamLimits

0x0dea,	// (0x00090193) bg_cl_header_pane

0x7b09,	// (0x00096eb2) cl_header_pane_g1_ParamLimits

0x7b09,	// (0x00096eb2) cl_header_pane_g1

0x7b1f,	// (0x00096ec8) cl_header_pane_t1_ParamLimits

0x7b1f,	// (0x00096ec8) cl_header_pane_t1

0xbac1,	// (0x0009ae6a) cl_list_pane

0xb65e,	// (0x0009aa07) hc_scroll_pane_cp01

0xa8af,	// (0x00099c58) bg_cl_header_pane_g1

0xb540,	// (0x0009a8e9) bg_cl_header_pane_g2

0xa8cf,	// (0x00099c78) bg_cl_header_pane_g3

0xb550,	// (0x0009a8f9) bg_cl_header_pane_g4

0xb548,	// (0x0009a8f1) bg_cl_header_pane_g5

0xb784,	// (0x0009ab2d) bg_cl_header_pane_g6

0xb568,	// (0x0009a911) bg_cl_header_pane_g7

0xb570,	// (0x0009a919) bg_cl_header_pane_g8

0xb560,	// (0x0009a909) bg_cl_header_pane_g9

0x0008,

0xf9e5,	// (0x0009ed8e) bg_cl_header_pane_g

0x7b38,	// (0x00096ee1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b38,	// (0x00096ee1) hc_cl_list_double_graphic_heading_pane

0x7b4b,	// (0x00096ef4) hc_cl_list_single_graphic_pane_ParamLimits

0x7b4b,	// (0x00096ef4) hc_cl_list_single_graphic_pane

0x7b63,	// (0x00096f0c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b63,	// (0x00096f0c) hc_cl_list_single_graphic_pane_g1

0x7b6f,	// (0x00096f18) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b6f,	// (0x00096f18) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f8,	// (0x0009eda1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f8,	// (0x0009eda1) hc_cl_list_single_graphic_pane_g

0x7b83,	// (0x00096f2c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b83,	// (0x00096f2c) hc_cl_list_single_graphic_pane_t1

0x7b63,	// (0x00096f0c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b63,	// (0x00096f0c) hc_cl_list_double_graphic_heading_pane_g1

0x7b98,	// (0x00096f41) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b98,	// (0x00096f41) hc_cl_list_double_graphic_heading_pane_g2

0x7bac,	// (0x00096f55) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7bac,	// (0x00096f55) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fd,	// (0x0009eda6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fd,	// (0x0009eda6) hc_cl_list_double_graphic_heading_pane_g

0x7bc0,	// (0x00096f69) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7bc0,	// (0x00096f69) hc_cl_list_double_graphic_heading_pane_t1

0x7bd5,	// (0x00096f7e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7bd5,	// (0x00096f7e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa04,	// (0x0009edad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa04,	// (0x0009edad) hc_cl_list_double_graphic_heading_pane_t

0xd8da,	// (0x0009cc83) vid4_progress_pane_g1

0xd8e6,	// (0x0009cc8f) vid4_progress_pane_g2

0xd8f2,	// (0x0009cc9b) vid4_progress_pane_g3

0xd901,	// (0x0009ccaa) vid4_progress_pane_g4

0x0004,

0xfa09,	// (0x0009edb2) vid4_progress_pane_g

0xd91f,	// (0x0009ccc8) vid4_progress_pane_t1

0xd935,	// (0x0009ccde) vid4_progress_pane_t2

0x0002,

0xfa14,	// (0x0009edbd) vid4_progress_pane_t

0xd960,	// (0x0009cd09) wait_bar_pane_cp07

0x4bef,	// (0x00093f98) blid_firmament_pane_ParamLimits

0x4c32,	// (0x00093fdb) popup_blid_sat_info2_window_g1

0x4c56,	// (0x00093fff) popup_blid_sat_info2_window_t3

0x4c64,	// (0x0009400d) popup_blid_sat_info2_window_t4

0x4c72,	// (0x0009401b) popup_blid_sat_info2_window_t5

0x4c80,	// (0x00094029) popup_blid_sat_info2_window_t6

0x4c90,	// (0x00094039) popup_blid_sat_info2_window_t7

0x4c9e,	// (0x00094047) popup_blid_sat_info2_window_t8

0x4cac,	// (0x00094055) popup_blid_sat_info2_window_t9

0x4cba,	// (0x00094063) popup_blid_sat_info2_window_t10

0x4e58,	// (0x00094201) aid_firma_cardinal_ParamLimits

0x4e6c,	// (0x00094215) blid_firmament_pane_t1_ParamLimits

0x4e83,	// (0x0009422c) blid_firmament_pane_t2_ParamLimits

0x4e9a,	// (0x00094243) blid_firmament_pane_t3_ParamLimits

0x4eb1,	// (0x0009425a) blid_firmament_pane_t4_ParamLimits

0xf62e,	// (0x0009e9d7) blid_firmament_pane_t_ParamLimits

0x4ec8,	// (0x00094271) blid_sat_info_pane_ParamLimits

0x0dea,	// (0x00090193) main_cam_set_pane_ParamLimits

0x5f84,	// (0x0009532d) aid_size_cell_colour_35_ParamLimits

0x5fa4,	// (0x0009534d) aid_size_cell_colour_112_ParamLimits

0x5fc4,	// (0x0009536d) aid_size_cell_effect_ParamLimits

0xefd1,	// (0x0009e37a) bg_tb_trans_pane_cp02_ParamLimits

0xaaa5,	// (0x00099e4e) heading_imed_pane_ParamLimits

0x5fe4,	// (0x0009538d) listscroll_imed_pane_ParamLimits

0xe5ff,	// (0x0009d9a8) popup_call2_audio_first_window_g5_ParamLimits

0xe5ff,	// (0x0009d9a8) popup_call2_audio_first_window_g5

0x65a9,	// (0x00095952) aid_size_touch_image3_arrow_left_ParamLimits

0x65a9,	// (0x00095952) aid_size_touch_image3_arrow_left

0x65d5,	// (0x0009597e) aid_size_touch_image3_arrow_right_ParamLimits

0x65d5,	// (0x0009597e) aid_size_touch_image3_arrow_right

0xd94b,	// (0x0009ccf4) vid4_progress_pane_t3

0x6301,	// (0x000956aa) main_hwr_training_symbol_option_pane_ParamLimits

0x6301,	// (0x000956aa) main_hwr_training_symbol_option_pane

0xb266,	// (0x0009a60f) popup_hwr_training_preview_window_ParamLimits

0xb266,	// (0x0009a60f) popup_hwr_training_preview_window

0x6321,	// (0x000956ca) hwr_training_navi_pane_g5_ParamLimits

0x6321,	// (0x000956ca) hwr_training_navi_pane_g5

0xb52e,	// (0x0009a8d7) popup_char_count_window

0xd845,	// (0x0009cbee) bg_popup_sub_pane_cp20_ParamLimits

0x7590,	// (0x00096939) list_vitu2_match_list_pane_ParamLimits

0x759f,	// (0x00096948) vitu2_page_scroll_pane_ParamLimits

0x759f,	// (0x00096948) vitu2_page_scroll_pane

0xbb24,	// (0x0009aecd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbb24,	// (0x0009aecd) list_single_hwr_training_symbol_option_pane

0xbb37,	// (0x0009aee0) list_single_hwr_training_symbol_option_pane_g1

0xbb3f,	// (0x0009aee8) list_single_hwr_training_symbol_option_pane_t1

0xbb4d,	// (0x0009aef6) bg_button_pane_cp023

0xbb56,	// (0x0009aeff) bg_button_pane_cp024

0x7bf4,	// (0x00096f9d) vitu2_page_scroll_pane_g1

0x7bfc,	// (0x00096fa5) vitu2_page_scroll_pane_g2

0x0001,

0xfa1b,	// (0x0009edc4) vitu2_page_scroll_pane_g

0x7c06,	// (0x00096faf) vitu2_page_scroll_pane_t1

0x4b1f,	// (0x00093ec8) popup_char_count_window_g1

0xbb89,	// (0x0009af32) popup_char_count_window_g2

0xbb92,	// (0x0009af3b) popup_char_count_window_g3

0x0002,

0xfa20,	// (0x0009edc9) popup_char_count_window_g

0xbb9b,	// (0x0009af44) popup_char_count_window_t1

0x0b67,	// (0x0008ff10) main_vded2_pane

0xaf63,	// (0x0009a30c) aid_size_cell_imed_line

0xaf6d,	// (0x0009a316) grid_imed_line_width_pane

0x6af7,	// (0x00095ea0) vid4_indicators_pane_g4

0xbba9,	// (0x0009af52) cell_imed_line_width_pane_ParamLimits

0xbba9,	// (0x0009af52) cell_imed_line_width_pane

0xbbbf,	// (0x0009af68) cell_imed_line_width_pane_g1

0xae40,	// (0x0009a1e9) cell_imed_line_width_pane_g2

0x0001,

0xfa27,	// (0x0009edd0) cell_imed_line_width_pane_g

0x7c15,	// (0x00096fbe) main_vded2_pane_g1_ParamLimits

0x7c15,	// (0x00096fbe) main_vded2_pane_g1

0x7c30,	// (0x00096fd9) main_vded2_pane_g2_ParamLimits

0x7c30,	// (0x00096fd9) main_vded2_pane_g2

0x0001,

0xfa2c,	// (0x0009edd5) main_vded2_pane_g_ParamLimits

0xfa2c,	// (0x0009edd5) main_vded2_pane_g

0x7c42,	// (0x00096feb) vded2_slider_pane_ParamLimits

0x7c42,	// (0x00096feb) vded2_slider_pane

0x7c52,	// (0x00096ffb) aid_size_touch_vded2_end

0x7c5c,	// (0x00097005) aid_size_touch_vded2_playhead

0xbbc8,	// (0x0009af71) aid_size_touch_vded2_start

0xbbd0,	// (0x0009af79) vded2_slider_bg_pane

0xbbd9,	// (0x0009af82) vded2_slider_pane_g1

0xbbe2,	// (0x0009af8b) vded2_slider_pane_g2

0x7c66,	// (0x0009700f) vded2_slider_pane_g3

0x0002,

0xfa31,	// (0x0009edda) vded2_slider_pane_g

0xbbea,	// (0x0009af93) vded2_slider_bg_pane_g1

0xbbf3,	// (0x0009af9c) vded2_slider_bg_pane_g2

0xbbfc,	// (0x0009afa5) vded2_slider_bg_pane_g3

0x0002,

0xfa38,	// (0x0009ede1) vded2_slider_bg_pane_g

0x3535,	// (0x000928de) aid_postcard_touch_down_pane_ParamLimits

0x3535,	// (0x000928de) aid_postcard_touch_down_pane

0x354d,	// (0x000928f6) aid_postcard_touch_up_pane_ParamLimits

0x354d,	// (0x000928f6) aid_postcard_touch_up_pane

0x0b67,	// (0x0008ff10) main_blid2_pane

0xefdf,	// (0x0009e388) popup_blid2_search_window

0x0b67,	// (0x0008ff10) blid2_gps_pane

0x0b67,	// (0x0008ff10) blid2_navig_pane

0x0b67,	// (0x0008ff10) blid2_search_pane

0x0b67,	// (0x0008ff10) blid2_tripm_pane

0x7c71,	// (0x0009701a) blid2_search_pane_g1_ParamLimits

0x7c71,	// (0x0009701a) blid2_search_pane_g1

0x7c89,	// (0x00097032) blid2_search_pane_t1_ParamLimits

0x7c89,	// (0x00097032) blid2_search_pane_t1

0x7c9b,	// (0x00097044) aid_size_cell_blid2_gps_ParamLimits

0x7c9b,	// (0x00097044) aid_size_cell_blid2_gps

0x7cb3,	// (0x0009705c) blid2_gps_pane_g1_ParamLimits

0x7cb3,	// (0x0009705c) blid2_gps_pane_g1

0x7cc7,	// (0x00097070) grid_blid2_satellite_pane_ParamLimits

0x7cc7,	// (0x00097070) grid_blid2_satellite_pane

0x7cdf,	// (0x00097088) blid2_navig_pane_g1_ParamLimits

0x7cdf,	// (0x00097088) blid2_navig_pane_g1

0x7ceb,	// (0x00097094) blid2_navig_pane_t1_ParamLimits

0x7ceb,	// (0x00097094) blid2_navig_pane_t1

0x7d06,	// (0x000970af) blid2_navig_pane_t2_ParamLimits

0x7d06,	// (0x000970af) blid2_navig_pane_t2

0x0001,

0xfa3f,	// (0x0009ede8) blid2_navig_pane_t_ParamLimits

0xfa3f,	// (0x0009ede8) blid2_navig_pane_t

0x7d21,	// (0x000970ca) blid2_navig_ring_pane_ParamLimits

0x7d21,	// (0x000970ca) blid2_navig_ring_pane

0x7d3c,	// (0x000970e5) blid2_speed_pane_ParamLimits

0x7d3c,	// (0x000970e5) blid2_speed_pane

0x7d48,	// (0x000970f1) blid2_tripm_pane_g1_ParamLimits

0x7d48,	// (0x000970f1) blid2_tripm_pane_g1

0x7d63,	// (0x0009710c) blid2_tripm_pane_g2_ParamLimits

0x7d63,	// (0x0009710c) blid2_tripm_pane_g2

0x7d77,	// (0x00097120) blid2_tripm_pane_g3_ParamLimits

0x7d77,	// (0x00097120) blid2_tripm_pane_g3

0x7d8b,	// (0x00097134) blid2_tripm_pane_g4_ParamLimits

0x7d8b,	// (0x00097134) blid2_tripm_pane_g4

0x7d9f,	// (0x00097148) blid2_tripm_pane_g5_ParamLimits

0x7d9f,	// (0x00097148) blid2_tripm_pane_g5

0x0005,

0xfa44,	// (0x0009eded) blid2_tripm_pane_g_ParamLimits

0xfa44,	// (0x0009eded) blid2_tripm_pane_g

0x7dc5,	// (0x0009716e) blid2_tripm_pane_t1_ParamLimits

0x7dc5,	// (0x0009716e) blid2_tripm_pane_t1

0x7de0,	// (0x00097189) blid2_tripm_pane_t2_ParamLimits

0x7de0,	// (0x00097189) blid2_tripm_pane_t2

0x7df9,	// (0x000971a2) blid2_tripm_pane_t3_ParamLimits

0x7df9,	// (0x000971a2) blid2_tripm_pane_t3

0x0003,

0xfa51,	// (0x0009edfa) blid2_tripm_pane_t_ParamLimits

0xfa51,	// (0x0009edfa) blid2_tripm_pane_t

0x7e40,	// (0x000971e9) cell_blid2_satellite_pane_ParamLimits

0x7e40,	// (0x000971e9) cell_blid2_satellite_pane

0x7e5c,	// (0x00097205) cell_blid2_satellite_pane_g1

0xbc05,	// (0x0009afae) cell_blid2_satellite_pane_t1

0x4ed8,	// (0x00094281) blid2_speed_pane_g1

0xbc13,	// (0x0009afbc) blid2_speed_pane_t1

0xbc21,	// (0x0009afca) blid2_speed_pane_t2

0x0001,

0xfa5a,	// (0x0009ee03) blid2_speed_pane_t

0x4ed8,	// (0x00094281) blid2_navig_ring_pane_g1

0x7e65,	// (0x0009720e) blid2_navig_ring_pane_g2

0x7e6d,	// (0x00097216) blid2_navig_ring_pane_g3

0x7e75,	// (0x0009721e) blid2_navig_ring_pane_g4

0x7e7d,	// (0x00097226) blid2_navig_ring_pane_g5

0x0004,

0xfa5f,	// (0x0009ee08) blid2_navig_ring_pane_g

0x0b67,	// (0x0008ff10) bg_popup_window_pane_cp011

0xbc2f,	// (0x0009afd8) popup_blid2_search_window_g1

0xbc37,	// (0x0009afe0) popup_blid2_search_window_t1

0xbc45,	// (0x0009afee) popup_blid2_search_window_t2

0x0001,

0xfa6a,	// (0x0009ee13) popup_blid2_search_window_t

0xa7be,	// (0x00099b67) main_browser_pane_g1

0xa3ce,	// (0x00099777) main_browser_pane_ParamLimits

0xd845,	// (0x0009cbee) bg_button_pane_cp011_ParamLimits

0x6df0,	// (0x00096199) cell_vitu2_function_pane_g1_ParamLimits

0xefd1,	// (0x0009e37a) bg_popup_sub_pane_cp22_ParamLimits

0x773e,	// (0x00096ae7) input_focus_pane_cp08_ParamLimits

0x7755,	// (0x00096afe) popup_vitu2_query_button_pane_ParamLimits

0x7755,	// (0x00096afe) popup_vitu2_query_button_pane

0x7766,	// (0x00096b0f) popup_vitu2_query_input_button_pane

0xb7d9,	// (0x0009ab82) popup_vitu2_query_window_g1_ParamLimits

0x7770,	// (0x00096b19) popup_vitu2_query_window_g2_ParamLimits

0xf96b,	// (0x0009ed14) popup_vitu2_query_window_g_ParamLimits

0x0b67,	// (0x0008ff10) bg_button_pane_cp026

0x7e85,	// (0x0009722e) popup_vitu2_query_input_button_pane_g1

0x0b67,	// (0x0008ff10) bg_button_pane_cp025

0xbc53,	// (0x0009affc) popup_vitu2_query_button_pane_t1

0x522f,	// (0x000945d8) main_mp3_pane_t6

0x5245,	// (0x000945ee) popup_slider_window_cp01

0xd7d4,	// (0x0009cb7d) cam4_battery_pane

0xd83b,	// (0x0009cbe4) cam4_battery_pane_cp02

0x7bea,	// (0x00096f93) cam4_battery_pane_cp01

0xd8d2,	// (0x0009cc7b) cam4_battery_pane_cp03

0xb3a5,	// (0x0009a74e) cam4_battery_pane_g1

0x4ed8,	// (0x00094281) cam4_battery_pane_g2

0x0001,

0xfa6f,	// (0x0009ee18) cam4_battery_pane_g

0x4cc8,	// (0x00094071) popup_blid_sat_info2_window_t11

0x2e18,	// (0x000921c1) aid_size_touch_mv_arrow_left_ParamLimits

0x2e41,	// (0x000921ea) aid_size_touch_mv_arrow_right_ParamLimits

0xdb26,	// (0x0009cecf) navi_pane_g1_ParamLimits

0x2e6a,	// (0x00092213) navi_pane_g2_ParamLimits

0x2e98,	// (0x00092241) navi_pane_g3_ParamLimits

0xf409,	// (0x0009e7b2) navi_pane_g_ParamLimits

0x2ef2,	// (0x0009229b) navi_pane_mv_t1_ParamLimits

0x5ff0,	// (0x00095399) grid_imed_effect_pane_ParamLimits

0x1c5b,	// (0x00091004) aid_placing_vt_slider_lsc

0xa70b,	// (0x00099ab4) aid_placing_vt_slider_prt

0x0dea,	// (0x00090193) bg_tb_trans_pane_cp01_ParamLimits

0x509d,	// (0x00094446) popup_image_details_window_g1_ParamLimits

0x50b0,	// (0x00094459) popup_image_details_window_g2_ParamLimits

0x50c5,	// (0x0009446e) popup_image_details_window_g3_ParamLimits

0x50c5,	// (0x0009446e) popup_image_details_window_g3

0xf673,	// (0x0009ea1c) popup_image_details_window_g_ParamLimits

0x50d9,	// (0x00094482) popup_image_details_window_t1_ParamLimits

0x50eb,	// (0x00094494) popup_image_details_window_t2_ParamLimits

0x5104,	// (0x000944ad) popup_image_details_window_t3_ParamLimits

0x5118,	// (0x000944c1) popup_image_details_window_t4_ParamLimits

0x5133,	// (0x000944dc) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x0009ea23) popup_image_details_window_t_ParamLimits

0x7af6,	// (0x00096e9f) cl_header_name_pane_ParamLimits

0x7af6,	// (0x00096e9f) cl_header_name_pane

0x7e8d,	// (0x00097236) cl_header_name_pane_t1_ParamLimits

0x7e8d,	// (0x00097236) cl_header_name_pane_t1

0x7eae,	// (0x00097257) cl_header_name_pane_t2_ParamLimits

0x7eae,	// (0x00097257) cl_header_name_pane_t2

0x7ef0,	// (0x00097299) cl_header_name_pane_t3_ParamLimits

0x7ef0,	// (0x00097299) cl_header_name_pane_t3

0x0002,

0xfa74,	// (0x0009ee1d) cl_header_name_pane_t_ParamLimits

0xfa74,	// (0x0009ee1d) cl_header_name_pane_t

0x2ec3,	// (0x0009226c) navi_pane_mv_g2_ParamLimits

0xb4eb,	// (0x0009a894) field_vitu2_entry_pane_g1_ParamLimits

0xb4f7,	// (0x0009a8a0) field_vitu2_entry_pane_g2_ParamLimits

0xb503,	// (0x0009a8ac) field_vitu2_entry_pane_g3_ParamLimits

0xb503,	// (0x0009a8ac) field_vitu2_entry_pane_g3

0xf871,	// (0x0009ec1a) field_vitu2_entry_pane_g_ParamLimits

0x6d6c,	// (0x00096115) cell_vitu2_itu_pane_g1_ParamLimits

0x6d7c,	// (0x00096125) cell_vitu2_itu_pane_g2_ParamLimits

0x6d7c,	// (0x00096125) cell_vitu2_itu_pane_g2

0x0001,

0xf87d,	// (0x0009ec26) cell_vitu2_itu_pane_g_ParamLimits

0xf87d,	// (0x0009ec26) cell_vitu2_itu_pane_g

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp05_ParamLimits

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp05

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp03

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp04

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp10_ParamLimits

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp10

0x7a98,	// (0x00096e41) bg_vkb2_func_pane_cp08

0x7a7e,	// (0x00096e27) bg_vkb2_func_pane_cp06

0x7a8c,	// (0x00096e35) bg_vkb2_func_pane_cp07

0xbb5f,	// (0x0009af08) bg_vkb2_func_pane_cp11_ParamLimits

0xbb5f,	// (0x0009af08) bg_vkb2_func_pane_cp11

0xbb74,	// (0x0009af1d) bg_vkb2_func_pane_cp12_ParamLimits

0xbb74,	// (0x0009af1d) bg_vkb2_func_pane_cp12

0x0b67,	// (0x0008ff10) bg_vkb2_func_pane_cp09

0xb540,	// (0x0009a8e9) bg_vkb2_func_pane_g1

0xa8cf,	// (0x00099c78) bg_vkb2_func_pane_g2

0xb548,	// (0x0009a8f1) bg_vkb2_func_pane_g3

0xb550,	// (0x0009a8f9) bg_vkb2_func_pane_g4

0xb784,	// (0x0009ab2d) bg_vkb2_func_pane_g5

0xb568,	// (0x0009a911) bg_vkb2_func_pane_g6

0xb570,	// (0x0009a919) bg_vkb2_func_pane_g7

0xb560,	// (0x0009a909) bg_vkb2_func_pane_g8

0xa8af,	// (0x00099c58) bg_vkb2_func_pane_g9

0x0008,

0xfa7b,	// (0x0009ee24) bg_vkb2_func_pane_g

0x7db3,	// (0x0009715c) blid2_tripm_pane_g6_ParamLimits

0x7db3,	// (0x0009715c) blid2_tripm_pane_g6

0xb35f,	// (0x0009a708) mp4_progress_pane_g1

0x7e2c,	// (0x000971d5) blid2_tripm_values_pane_ParamLimits

0x7e2c,	// (0x000971d5) blid2_tripm_values_pane

0x7f21,	// (0x000972ca) blid2_tripm_values_pane_t1

0x7f2f,	// (0x000972d8) blid2_tripm_values_pane_t2

0x7f3d,	// (0x000972e6) blid2_tripm_values_pane_t3

0x7f4b,	// (0x000972f4) blid2_tripm_values_pane_t4

0x7f59,	// (0x00097302) blid2_tripm_values_pane_t5

0x7f67,	// (0x00097310) blid2_tripm_values_pane_t6

0x7f75,	// (0x0009731e) blid2_tripm_values_pane_t7

0x7f83,	// (0x0009732c) blid2_tripm_values_pane_t8

0x7f91,	// (0x0009733a) blid2_tripm_values_pane_t9

0x0008,

0xfa8e,	// (0x0009ee37) blid2_tripm_values_pane_t

0x1c9b,	// (0x00091044) call_video_pane_t1_ParamLimits

0x1cb5,	// (0x0009105e) call_video_pane_t2_ParamLimits

0xf292,	// (0x0009e63b) call_video_pane_t_ParamLimits

0x3438,	// (0x000927e1) msg_header_pane_g1_ParamLimits

0xdd43,	// (0x0009d0ec) msg_header_pane_g2_ParamLimits

0xdd43,	// (0x0009d0ec) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0009e855) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0009e855) msg_header_pane_g

0xa3ce,	// (0x00099777) main_clock2_pane_ParamLimits

0x5ceb,	// (0x00095094) grid_clock2_toolbar_pane_ParamLimits

0x5ceb,	// (0x00095094) grid_clock2_toolbar_pane

0x5ceb,	// (0x00095094) listscroll_clock2_pane_ParamLimits

0x5ceb,	// (0x00095094) listscroll_clock2_pane

0x5dd4,	// (0x0009517d) main_clock2_pane_t3_ParamLimits

0x5dd4,	// (0x0009517d) main_clock2_pane_t3

0x5def,	// (0x00095198) main_clock2_pane_t4_ParamLimits

0x5def,	// (0x00095198) main_clock2_pane_t4

0xbc61,	// (0x0009b00a) cell_clock2_toolbar_pane

0xbc69,	// (0x0009b012) cell_clock2_toolbar_pane_cp01

0xbc69,	// (0x0009b012) cell_clock2_toolbar_pane_cp02

0xbc71,	// (0x0009b01a) cell_clock2_toolbar_pane_cp03

0xbc79,	// (0x0009b022) list_clock2_pane

0xda8c,	// (0x0009ce35) scroll_pane_cp10

0xbc81,	// (0x0009b02a) list_single_clock2_pane_ParamLimits

0xbc81,	// (0x0009b02a) list_single_clock2_pane

0xdbc6,	// (0x0009cf6f) list_highlight_pane_cp08

0xbc8e,	// (0x0009b037) list_single_clock2_pane_t1

0xbc9c,	// (0x0009b045) list_single_clock2_pane_t2

0x0001,

0xfaa1,	// (0x0009ee4a) list_single_clock2_pane_t

0x0b67,	// (0x0008ff10) bg_button_pane_cp10

0xbcaa,	// (0x0009b053) cell_clock2_toolbar_pane_g1

0x34c1,	// (0x0009286a) aid_main_viewer_pane_g1_ParamLimits

0x34c1,	// (0x0009286a) aid_main_viewer_pane_g1

0x34cf,	// (0x00092878) aid_main_viewer_pane_g2_ParamLimits

0x34cf,	// (0x00092878) aid_main_viewer_pane_g2

0x34dd,	// (0x00092886) aid_main_viewer_pane_g3_ParamLimits

0x34dd,	// (0x00092886) aid_main_viewer_pane_g3

0x34ec,	// (0x00092895) aid_main_viewer_pane_g4_ParamLimits

0x34ec,	// (0x00092895) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0009e866) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0009e866) aid_main_viewer_pane_g

0x3e44,	// (0x000931ed) main_calc_pane_ParamLimits

0x3e58,	// (0x00093201) main_dialer2_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_cam6_pane

0x0b67,	// (0x0008ff10) main_vid6_pane

0x5cf7,	// (0x000950a0) listscroll_gen_pane_cp06_ParamLimits

0x5cf7,	// (0x000950a0) listscroll_gen_pane_cp06

0x5e0a,	// (0x000951b3) main_clock2_pane_t5_ParamLimits

0x5e0a,	// (0x000951b3) main_clock2_pane_t5

0x5e67,	// (0x00095210) aid_call2_pane_cp10_ParamLimits

0x5e79,	// (0x00095222) aid_call_pane_cp10_ParamLimits

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5e8b,	// (0x00095234) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5e8b,	// (0x00095234) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdafb,	// (0x0009cea4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72a,	// (0x0009ead3) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ea1,	// (0x0009524a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6556,	// (0x000958ff) cell_dialer2_keypad_pane_g2_ParamLimits

0x6556,	// (0x000958ff) cell_dialer2_keypad_pane_g2

0x0001,

0xf810,	// (0x0009ebb9) cell_dialer2_keypad_pane_g_ParamLimits

0xf810,	// (0x0009ebb9) cell_dialer2_keypad_pane_g

0x6572,	// (0x0009591b) cell_dialer2_keypad_pane_t1

0x711b,	// (0x000964c4) main_cset_text2_pane_ParamLimits

0x711b,	// (0x000964c4) main_cset_text2_pane

0xb9d1,	// (0x0009ad7a) area_vitu2_query_pane_g1_ParamLimits

0x7a1b,	// (0x00096dc4) area_vitu2_query_pane_g2_ParamLimits

0xf9be,	// (0x0009ed67) area_vitu2_query_pane_g_ParamLimits

0xba55,	// (0x0009adfe) area_vitu2_query_pane_t7_ParamLimits

0xba55,	// (0x0009adfe) area_vitu2_query_pane_t7

0x7a7e,	// (0x00096e27) bg_button_pane_cp018_ParamLimits

0x7a8c,	// (0x00096e35) bg_button_pane_cp021_ParamLimits

0x7a98,	// (0x00096e41) bg_button_pane_cp022_ParamLimits

0x7a98,	// (0x00096e41) bg_vkb2_func_pane_cp08_ParamLimits

0x7a7e,	// (0x00096e27) bg_vkb2_func_pane_cp06_ParamLimits

0x7a8c,	// (0x00096e35) bg_vkb2_func_pane_cp07_ParamLimits

0x7aa9,	// (0x00096e52) input_focus_pane_cp09_ParamLimits

0xd972,	// (0x0009cd1b) cam6_autofocus_pane_ParamLimits

0xd972,	// (0x0009cd1b) cam6_autofocus_pane

0x7f9f,	// (0x00097348) cam6_image_uncrop_pane_ParamLimits

0x7f9f,	// (0x00097348) cam6_image_uncrop_pane

0x7fae,	// (0x00097357) cam6_indi_pane_ParamLimits

0x7fae,	// (0x00097357) cam6_indi_pane

0x7fc4,	// (0x0009736d) cam6_mode_pane_ParamLimits

0x7fc4,	// (0x0009736d) cam6_mode_pane

0x7fd6,	// (0x0009737f) cam6_timer_pane_ParamLimits

0x7fd6,	// (0x0009737f) cam6_timer_pane

0x7fe2,	// (0x0009738b) cam6_zoom_pane_ParamLimits

0x7fe2,	// (0x0009738b) cam6_zoom_pane

0x7ff0,	// (0x00097399) cam6_mode_pane_g1_ParamLimits

0x7ff0,	// (0x00097399) cam6_mode_pane_g1

0x8000,	// (0x000973a9) cam6_mode_pane_g2_ParamLimits

0x8000,	// (0x000973a9) cam6_mode_pane_g2

0x8010,	// (0x000973b9) cam6_mode_pane_g3_ParamLimits

0x8010,	// (0x000973b9) cam6_mode_pane_g3

0x8020,	// (0x000973c9) cam6_mode_pane_g4_ParamLimits

0x8020,	// (0x000973c9) cam6_mode_pane_g4

0x0003,

0xfaa6,	// (0x0009ee4f) cam6_mode_pane_g_ParamLimits

0xfaa6,	// (0x0009ee4f) cam6_mode_pane_g

0xbcb2,	// (0x0009b05b) bg_tb_trans_pane_cp08_ParamLimits

0xbcb2,	// (0x0009b05b) bg_tb_trans_pane_cp08

0xbcc0,	// (0x0009b069) cam6_battery_pane_ParamLimits

0xbcc0,	// (0x0009b069) cam6_battery_pane

0xbcd6,	// (0x0009b07f) cam6_indi_pane_g1_ParamLimits

0xbcd6,	// (0x0009b07f) cam6_indi_pane_g1

0xbce8,	// (0x0009b091) cam6_indi_pane_g2_ParamLimits

0xbce8,	// (0x0009b091) cam6_indi_pane_g2

0xbcfa,	// (0x0009b0a3) cam6_indi_pane_g3_ParamLimits

0xbcfa,	// (0x0009b0a3) cam6_indi_pane_g3

0x0002,

0xfaaf,	// (0x0009ee58) cam6_indi_pane_g_ParamLimits

0xfaaf,	// (0x0009ee58) cam6_indi_pane_g

0xbd0c,	// (0x0009b0b5) cam6_indi_pane_t1_ParamLimits

0xbd0c,	// (0x0009b0b5) cam6_indi_pane_t1

0x6b29,	// (0x00095ed2) cam6_autofocus_pane_g1

0x6b21,	// (0x00095eca) cam6_autofocus_pane_g2

0x6b39,	// (0x00095ee2) cam6_autofocus_pane_g3

0x6b31,	// (0x00095eda) cam6_autofocus_pane_g4

0x0003,

0xfab6,	// (0x0009ee5f) cam6_autofocus_pane_g

0xbd32,	// (0x0009b0db) cam6_timer_pane_g1

0xbd3a,	// (0x0009b0e3) cam6_timer_pane_t1

0xbd48,	// (0x0009b0f1) cam6_zoom_cont_pane

0xbd50,	// (0x0009b0f9) cam6_zoom_pane_g1

0xbd58,	// (0x0009b101) cam6_zoom_pane_g2

0x8030,	// (0x000973d9) cam6_zoom_pane_g3

0x0002,

0xfabf,	// (0x0009ee68) cam6_zoom_pane_g

0x4ed8,	// (0x00094281) cam6_battery_pane_g1

0x4ed8,	// (0x00094281) cam6_battery_pane_g2

0x0001,

0xf637,	// (0x0009e9e0) cam6_battery_pane_g

0xbd60,	// (0x0009b109) cam6_zoom_cont_pane_g1

0xbd69,	// (0x0009b112) cam6_zoom_cont_pane_g2

0xbd72,	// (0x0009b11b) cam6_zoom_cont_pane_g3

0x0002,

0xfac6,	// (0x0009ee6f) cam6_zoom_cont_pane_g

0x804d,	// (0x000973f6) cam6_mode_pane_cp_ParamLimits

0x804d,	// (0x000973f6) cam6_mode_pane_cp

0x805f,	// (0x00097408) cam6_zoom_pane_cp_ParamLimits

0x805f,	// (0x00097408) cam6_zoom_pane_cp

0x806d,	// (0x00097416) vid6_image_uncrop_cif_pane_ParamLimits

0x806d,	// (0x00097416) vid6_image_uncrop_cif_pane

0x807d,	// (0x00097426) vid6_image_uncrop_nhd_pane_ParamLimits

0x807d,	// (0x00097426) vid6_image_uncrop_nhd_pane

0x808c,	// (0x00097435) vid6_image_uncrop_vga_pane_ParamLimits

0x808c,	// (0x00097435) vid6_image_uncrop_vga_pane

0x809b,	// (0x00097444) vid6_image_uncrop_wvga_pane_ParamLimits

0x809b,	// (0x00097444) vid6_image_uncrop_wvga_pane

0x80aa,	// (0x00097453) vid6_indi_pane_ParamLimits

0x80aa,	// (0x00097453) vid6_indi_pane

0xbcb2,	// (0x0009b05b) bg_tb_trans_pane_cp09_ParamLimits

0xbcb2,	// (0x0009b05b) bg_tb_trans_pane_cp09

0xbd8a,	// (0x0009b133) cam6_battery_pane_cp_ParamLimits

0xbd8a,	// (0x0009b133) cam6_battery_pane_cp

0xbd96,	// (0x0009b13f) vid6_indi_pane_g1_ParamLimits

0xbd96,	// (0x0009b13f) vid6_indi_pane_g1

0xbda8,	// (0x0009b151) vid6_indi_pane_g2_ParamLimits

0xbda8,	// (0x0009b151) vid6_indi_pane_g2

0xbdba,	// (0x0009b163) vid6_indi_pane_g3_ParamLimits

0xbdba,	// (0x0009b163) vid6_indi_pane_g3

0xbdd1,	// (0x0009b17a) vid6_indi_pane_g4_ParamLimits

0xbdd1,	// (0x0009b17a) vid6_indi_pane_g4

0xbde8,	// (0x0009b191) vid6_indi_pane_g5_ParamLimits

0xbde8,	// (0x0009b191) vid6_indi_pane_g5

0x0004,

0xfacd,	// (0x0009ee76) vid6_indi_pane_g_ParamLimits

0xfacd,	// (0x0009ee76) vid6_indi_pane_g

0xbe02,	// (0x0009b1ab) vid6_indi_pane_t1_ParamLimits

0xbe02,	// (0x0009b1ab) vid6_indi_pane_t1

0xbe18,	// (0x0009b1c1) vid6_indi_pane_t2_ParamLimits

0xbe18,	// (0x0009b1c1) vid6_indi_pane_t2

0xbe40,	// (0x0009b1e9) vid6_indi_pane_t3_ParamLimits

0xbe40,	// (0x0009b1e9) vid6_indi_pane_t3

0xbe68,	// (0x0009b211) vid6_indi_pane_t4_ParamLimits

0xbe68,	// (0x0009b211) vid6_indi_pane_t4

0x0003,

0xfad8,	// (0x0009ee81) vid6_indi_pane_t_ParamLimits

0xfad8,	// (0x0009ee81) vid6_indi_pane_t

0xbe8c,	// (0x0009b235) wait_bar_pane_cp08

0x80c2,	// (0x0009746b) main_cset_text2_pane_t1_ParamLimits

0x80c2,	// (0x0009746b) main_cset_text2_pane_t1

0x8038,	// (0x000973e1) listscroll_gen_pane_cp06_t1_ParamLimits

0x8038,	// (0x000973e1) listscroll_gen_pane_cp06_t1

0x0b67,	// (0x0008ff10) main_cam6_set_pane

0xd7c6,	// (0x0009cb6f) bg_tb_trans_pane_cp06_ParamLimits

0xd7dc,	// (0x0009cb85) cam4_indicators_pane_g1_ParamLimits

0xd7e9,	// (0x0009cb92) cam4_indicators_pane_g2_ParamLimits

0xf84d,	// (0x0009ebf6) cam4_indicators_pane_g_ParamLimits

0xd809,	// (0x0009cbb2) cam4_indicators_pane_t1_ParamLimits

0xd82d,	// (0x0009cbd6) bg_tb_trans_pane_cp07_ParamLimits

0x6ad0,	// (0x00095e79) vid4_indicators_pane_g1_ParamLimits

0x6add,	// (0x00095e86) vid4_indicators_pane_g2_ParamLimits

0x6aea,	// (0x00095e93) vid4_indicators_pane_g3_ParamLimits

0x6af7,	// (0x00095ea0) vid4_indicators_pane_g4_ParamLimits

0xf85f,	// (0x0009ec08) vid4_indicators_pane_g_ParamLimits

0x6b0f,	// (0x00095eb8) vid4_indicators_pane_t1_ParamLimits

0xd8da,	// (0x0009cc83) vid4_progress_pane_g1_ParamLimits

0xd8e6,	// (0x0009cc8f) vid4_progress_pane_g2_ParamLimits

0xd8f2,	// (0x0009cc9b) vid4_progress_pane_g3_ParamLimits

0xd901,	// (0x0009ccaa) vid4_progress_pane_g4_ParamLimits

0xfa09,	// (0x0009edb2) vid4_progress_pane_g_ParamLimits

0xd91f,	// (0x0009ccc8) vid4_progress_pane_t1_ParamLimits

0xd935,	// (0x0009ccde) vid4_progress_pane_t2_ParamLimits

0xd94b,	// (0x0009ccf4) vid4_progress_pane_t3_ParamLimits

0xfa14,	// (0x0009edbd) vid4_progress_pane_t_ParamLimits

0xd960,	// (0x0009cd09) wait_bar_pane_cp07_ParamLimits

0x80e3,	// (0x0009748c) main_cam6_set_pane_g2_ParamLimits

0x80e3,	// (0x0009748c) main_cam6_set_pane_g2

0x8109,	// (0x000974b2) main_cset6_listscroll_pane_ParamLimits

0x8109,	// (0x000974b2) main_cset6_listscroll_pane

0x8127,	// (0x000974d0) main_cset6_slider_pane_ParamLimits

0x8127,	// (0x000974d0) main_cset6_slider_pane

0x813d,	// (0x000974e6) main_cset6_text2_pane_ParamLimits

0x813d,	// (0x000974e6) main_cset6_text2_pane

0xbe9b,	// (0x0009b244) main_cset6_text_pane

0xbea3,	// (0x0009b24c) main_cset_list_pane_copy1_ParamLimits

0xbea3,	// (0x0009b24c) main_cset_list_pane_copy1

0xbeb3,	// (0x0009b25c) scroll_pane_cp028_copy1

0x814b,	// (0x000974f4) cset_list_set_pane_copy1

0x815f,	// (0x00097508) aid_position_infowindow_above_copy1

0x8167,	// (0x00097510) aid_position_infowindow_below_copy1

0x816f,	// (0x00097518) cset_list_set_pane_g1_copy1

0xbebc,	// (0x0009b265) cset_list_set_pane_g3_copy1_ParamLimits

0xbebc,	// (0x0009b265) cset_list_set_pane_g3_copy1

0xbecb,	// (0x0009b274) cset_list_set_pane_t1_copy1_ParamLimits

0xbecb,	// (0x0009b274) cset_list_set_pane_t1_copy1

0x0dea,	// (0x00090193) list_highlight_pane_cp021_copy1_ParamLimits

0x0dea,	// (0x00090193) list_highlight_pane_cp021_copy1

0xbee0,	// (0x0009b289) cset6_slider_pane_ParamLimits

0xbee0,	// (0x0009b289) cset6_slider_pane

0xbf0c,	// (0x0009b2b5) main_cset6_slider_pane_g1_ParamLimits

0xbf0c,	// (0x0009b2b5) main_cset6_slider_pane_g1

0x8177,	// (0x00097520) main_cset6_slider_pane_g2_ParamLimits

0x8177,	// (0x00097520) main_cset6_slider_pane_g2

0xbf34,	// (0x0009b2dd) main_cset6_slider_pane_g3_ParamLimits

0xbf34,	// (0x0009b2dd) main_cset6_slider_pane_g3

0x819f,	// (0x00097548) main_cset6_slider_pane_g4_ParamLimits

0x819f,	// (0x00097548) main_cset6_slider_pane_g4

0x81ab,	// (0x00097554) main_cset6_slider_pane_g5_ParamLimits

0x81ab,	// (0x00097554) main_cset6_slider_pane_g5

0xb673,	// (0x0009aa1c) main_cset6_slider_pane_g7_ParamLimits

0xb673,	// (0x0009aa1c) main_cset6_slider_pane_g7

0xb67f,	// (0x0009aa28) main_cset6_slider_pane_g8_ParamLimits

0xb67f,	// (0x0009aa28) main_cset6_slider_pane_g8

0x71ca,	// (0x00096573) main_cset6_slider_pane_g9_ParamLimits

0x71ca,	// (0x00096573) main_cset6_slider_pane_g9

0x71d6,	// (0x0009657f) main_cset6_slider_pane_g10_ParamLimits

0x71d6,	// (0x0009657f) main_cset6_slider_pane_g10

0x71e2,	// (0x0009658b) main_cset6_slider_pane_g11_ParamLimits

0x71e2,	// (0x0009658b) main_cset6_slider_pane_g11

0x71ee,	// (0x00096597) main_cset6_slider_pane_g12_ParamLimits

0x71ee,	// (0x00096597) main_cset6_slider_pane_g12

0x71fa,	// (0x000965a3) main_cset6_slider_pane_g13_ParamLimits

0x71fa,	// (0x000965a3) main_cset6_slider_pane_g13

0x7206,	// (0x000965af) main_cset6_slider_pane_g14_ParamLimits

0x7206,	// (0x000965af) main_cset6_slider_pane_g14

0x81b9,	// (0x00097562) main_cset6_slider_pane_g15_ParamLimits

0x81b9,	// (0x00097562) main_cset6_slider_pane_g15

0x722a,	// (0x000965d3) main_cset6_slider_pane_g16_ParamLimits

0x722a,	// (0x000965d3) main_cset6_slider_pane_g16

0x7238,	// (0x000965e1) main_cset6_slider_pane_g17_ParamLimits

0x7238,	// (0x000965e1) main_cset6_slider_pane_g17

0x0011,

0xfae1,	// (0x0009ee8a) main_cset6_slider_pane_g_ParamLimits

0xfae1,	// (0x0009ee8a) main_cset6_slider_pane_g

0xbf40,	// (0x0009b2e9) main_cset6_slider_pane_t1_ParamLimits

0xbf40,	// (0x0009b2e9) main_cset6_slider_pane_t1

0x81e9,	// (0x00097592) main_cset6_slider_pane_t2_ParamLimits

0x81e9,	// (0x00097592) main_cset6_slider_pane_t2

0x8214,	// (0x000975bd) main_cset6_slider_pane_t3_ParamLimits

0x8214,	// (0x000975bd) main_cset6_slider_pane_t3

0x823f,	// (0x000975e8) main_cset6_slider_pane_t4_ParamLimits

0x823f,	// (0x000975e8) main_cset6_slider_pane_t4

0x826c,	// (0x00097615) main_cset6_slider_pane_t5_ParamLimits

0x826c,	// (0x00097615) main_cset6_slider_pane_t5

0xbf81,	// (0x0009b32a) main_cset6_slider_pane_t7_ParamLimits

0xbf81,	// (0x0009b32a) main_cset6_slider_pane_t7

0x8299,	// (0x00097642) main_cset6_slider_pane_t8_ParamLimits

0x8299,	// (0x00097642) main_cset6_slider_pane_t8

0x82bd,	// (0x00097666) main_cset6_slider_pane_t9_ParamLimits

0x82bd,	// (0x00097666) main_cset6_slider_pane_t9

0x82e1,	// (0x0009768a) main_cset6_slider_pane_t10_ParamLimits

0x82e1,	// (0x0009768a) main_cset6_slider_pane_t10

0x8305,	// (0x000976ae) main_cset6_slider_pane_t11_ParamLimits

0x8305,	// (0x000976ae) main_cset6_slider_pane_t11

0xbfb7,	// (0x0009b360) main_cset6_slider_pane_t14_ParamLimits

0xbfb7,	// (0x0009b360) main_cset6_slider_pane_t14

0xbff0,	// (0x0009b399) main_cset6_slider_pane_t15_ParamLimits

0xbff0,	// (0x0009b399) main_cset6_slider_pane_t15

0x000b,

0xfb06,	// (0x0009eeaf) main_cset6_slider_pane_t_ParamLimits

0xfb06,	// (0x0009eeaf) main_cset6_slider_pane_t

0xc029,	// (0x0009b3d2) cset_slider_pane_g1_copy1

0xc032,	// (0x0009b3db) cset_slider_pane_g2_copy1

0xc03b,	// (0x0009b3e4) cset_slider_pane_g3_copy1

0x0b67,	// (0x0008ff10) bg_popup_sub_pane_cp011_copy1

0xb7e5,	// (0x0009ab8e) main_cset_text_pane_g1_copy1

0xb7ed,	// (0x0009ab96) main_cset_text_pane_t1_copy1

0xb7fb,	// (0x0009aba4) main_cset_text_pane_t2_copy1

0xb809,	// (0x0009abb2) main_cset_text_pane_t3_copy1

0xb817,	// (0x0009abc0) main_cset_text_pane_t4_copy1

0xb825,	// (0x0009abce) main_cset_text_pane_t5_copy1

0xb833,	// (0x0009abdc) main_cset_text_pane_t6_copy1

0xb841,	// (0x0009abea) main_cset_text_pane_t7_copy1

0x80c2,	// (0x0009746b) main_cset_text2_pane_t1_copy1

0x0b67,	// (0x0008ff10) main_ncimui_pane

0x40e6,	// (0x0009348f) popup_query_ncimui_window_ParamLimits

0x40e6,	// (0x0009348f) popup_query_ncimui_window

0x53bf,	// (0x00094768) field_cale_ev2_pane_g4_ParamLimits

0x53bf,	// (0x00094768) field_cale_ev2_pane_g4

0x6421,	// (0x000957ca) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6421,	// (0x000957ca) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x0009eb94) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x0009eb94) cell_video_dialer_keypad_pane_g

0x6439,	// (0x000957e2) cell_video_dialer_keypad_pane_t1

0x0b67,	// (0x0008ff10) bg_popup_window_pane_cp012

0xd57a,	// (0x0009c923) heading_pane_cp06

0xc133,	// (0x0009b4dc) ncim_query_content_pane

0x0b67,	// (0x0008ff10) bg_popup_heading_pane_cp01

0xc13b,	// (0x0009b4e4) ncim_heading_pane_t1

0xc149,	// (0x0009b4f2) ncim_indicator_popup_pane

0xc15b,	// (0x0009b504) ncim_query_button_pane

0xc171,	// (0x0009b51a) ncim_query_content_pane_t1

0xc183,	// (0x0009b52c) ncim_query_content_pane_t2

0x0005,

0xfb45,	// (0x0009eeee) ncim_query_content_pane_t

0xc1bd,	// (0x0009b566) ncim_query_list_pane

0xc1cf,	// (0x0009b578) ncim_query_popup_pane

0xc149,	// (0x0009b4f2) ncim_indicator_popup_pane_ParamLimits

0x8424,	// (0x000977cd) ncim_query_content_pane_g1_ParamLimits

0x8424,	// (0x000977cd) ncim_query_content_pane_g1

0xc171,	// (0x0009b51a) ncim_query_content_pane_t1_ParamLimits

0xc183,	// (0x0009b52c) ncim_query_content_pane_t2_ParamLimits

0x8430,	// (0x000977d9) ncim_query_content_pane_t3_ParamLimits

0x8430,	// (0x000977d9) ncim_query_content_pane_t3

0x8458,	// (0x00097801) ncim_query_content_pane_t4_ParamLimits

0x8458,	// (0x00097801) ncim_query_content_pane_t4

0x8480,	// (0x00097829) ncim_query_content_pane_t5_ParamLimits

0x8480,	// (0x00097829) ncim_query_content_pane_t5

0xc195,	// (0x0009b53e) ncim_query_content_pane_t6_ParamLimits

0xc195,	// (0x0009b53e) ncim_query_content_pane_t6

0xfb45,	// (0x0009eeee) ncim_query_content_pane_t_ParamLimits

0xc1bd,	// (0x0009b566) ncim_query_list_pane_ParamLimits

0xc1cf,	// (0x0009b578) ncim_query_popup_pane_ParamLimits

0xc1e3,	// (0x0009b58c) wait_bar_pane_cp04

0x0b67,	// (0x0008ff10) input_focus_pane_cp011

0xc1eb,	// (0x0009b594) ncim_query_popup_pane_t1

0xc1f9,	// (0x0009b5a2) ncim_list_query_list_pane_ParamLimits

0xc1f9,	// (0x0009b5a2) ncim_list_query_list_pane

0x0b67,	// (0x0008ff10) bg_button_pane_cp027

0xc20c,	// (0x0009b5b5) ncim_query_button_pane_g1

0x0b67,	// (0x0008ff10) list_highlight_pane_cp012

0xc216,	// (0x0009b5bf) ncim_list_query_list_pane_g1

0xc21e,	// (0x0009b5c7) ncim_list_query_list_pane_t1

0xd7f9,	// (0x0009cba2) cam4_indicators_pane_g3_ParamLimits

0xd7f9,	// (0x0009cba2) cam4_indicators_pane_g3

0x6b03,	// (0x00095eac) vid4_indicators_pane_g5_ParamLimits

0x6b03,	// (0x00095eac) vid4_indicators_pane_g5

0xd910,	// (0x0009ccb9) vid4_progress_pane_g5_ParamLimits

0xd910,	// (0x0009ccb9) vid4_progress_pane_g5

0x833d,	// (0x000976e6) main_ncimui_pane_g1

0x8393,	// (0x0009773c) ncimui_group_query_pane_ParamLimits

0x8393,	// (0x0009773c) ncimui_group_query_pane

0x83cf,	// (0x00097778) ncimui_list_pane_ParamLimits

0x83cf,	// (0x00097778) ncimui_list_pane

0x83f0,	// (0x00097799) ncimui_text_pane_ParamLimits

0x83f0,	// (0x00097799) ncimui_text_pane

0x84a8,	// (0x00097851) ncimui_text_pane_t1_ParamLimits

0x84a8,	// (0x00097851) ncimui_text_pane_t1

0xc22c,	// (0x0009b5d5) ncimui_list_single_graphic_pane_ParamLimits

0xc22c,	// (0x0009b5d5) ncimui_list_single_graphic_pane

0x84c6,	// (0x0009786f) ncimui_query_pane_ParamLimits

0x84c6,	// (0x0009786f) ncimui_query_pane

0x0b67,	// (0x0008ff10) list_highlight_pane_cp013

0xc23c,	// (0x0009b5e5) ncim_list_query_list_pane_t1_copy1

0xc216,	// (0x0009b5bf) ncim_list_single_graphic_pane_g1

0xc24a,	// (0x0009b5f3) ncim_query_button_pane_cp01

0xc256,	// (0x0009b5ff) ncim_query_entry_pane_ParamLimits

0xc256,	// (0x0009b5ff) ncim_query_entry_pane

0xc269,	// (0x0009b612) ncimui_query_pane_g1

0xc275,	// (0x0009b61e) ncimui_query_pane_t1_ParamLimits

0xc275,	// (0x0009b61e) ncimui_query_pane_t1

0x0dea,	// (0x00090193) input_focus_pane_cp012

0xc28e,	// (0x0009b637) ncim_query_entry_pane_t1

0xa3ce,	// (0x00099777) main_im_pane_ParamLimits

0x0dea,	// (0x00090193) main_mobtv_pane_ParamLimits

0x0dea,	// (0x00090193) main_mobtv_pane

0x81d1,	// (0x0009757a) main_cset6_slider_pane_g18_ParamLimits

0x81d1,	// (0x0009757a) main_cset6_slider_pane_g18

0x81dd,	// (0x00097586) main_cset6_slider_pane_g19_ParamLimits

0x81dd,	// (0x00097586) main_cset6_slider_pane_g19

0xc2a0,	// (0x0009b649) bg_main_mobtv_pane_ParamLimits

0xc2a0,	// (0x0009b649) bg_main_mobtv_pane

0x84d9,	// (0x00097882) main_mobtv_info_pane

0x84e4,	// (0x0009788d) main_mobtv_loading_pane_ParamLimits

0x84e4,	// (0x0009788d) main_mobtv_loading_pane

0xc2ae,	// (0x0009b657) main_mobtv_pg_channel_list_pane

0xc2b8,	// (0x0009b661) main_mobtv_pg_hdr_pane

0x84f1,	// (0x0009789a) main_mobtv_programe_curr_pane_ParamLimits

0x84f1,	// (0x0009789a) main_mobtv_programe_curr_pane

0x84fe,	// (0x000978a7) main_mobtv_programe_next_pane_ParamLimits

0x84fe,	// (0x000978a7) main_mobtv_programe_next_pane

0xc2c1,	// (0x0009b66a) popup_mobtv_noti_window

0x4ed8,	// (0x00094281) main_tv_pg_hdr_pane_g1

0xc2cb,	// (0x0009b674) main_tv_pg_hdr_pane_g2

0xc2d3,	// (0x0009b67c) main_tv_pg_hdr_pane_g3

0xc2db,	// (0x0009b684) main_tv_pg_hdr_pane_g4

0xc2e3,	// (0x0009b68c) main_tv_pg_hdr_pane_g5

0xc2ed,	// (0x0009b696) main_tv_pg_hdr_pane_g6

0xc2f7,	// (0x0009b6a0) main_tv_pg_hdr_pane_g7

0xc301,	// (0x0009b6aa) main_tv_pg_hdr_pane_g8

0xc30b,	// (0x0009b6b4) main_tv_pg_hdr_pane_g9

0xc315,	// (0x0009b6be) main_tv_pg_hdr_pane_g10

0xc31f,	// (0x0009b6c8) main_tv_pg_hdr_pane_g11

0x000a,

0xfb52,	// (0x0009eefb) main_tv_pg_hdr_pane_g

0xc329,	// (0x0009b6d2) main_tv_pg_hdr_pane_t1

0xc337,	// (0x0009b6e0) main_tv_pg_hdr_pane_t2

0xc345,	// (0x0009b6ee) main_tv_pg_hdr_pane_t3

0xc355,	// (0x0009b6fe) main_tv_pg_hdr_pane_t4

0xc365,	// (0x0009b70e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb69,	// (0x0009ef12) main_tv_pg_hdr_pane_t

0xc375,	// (0x0009b71e) single_mobtv_pg_channel_pane_ParamLimits

0xc375,	// (0x0009b71e) single_mobtv_pg_channel_pane

0xc387,	// (0x0009b730) single_mobtv_pg_channel_table_pane

0xc390,	// (0x0009b739) single_mobtv_pg_channel_thumb_pane

0xc399,	// (0x0009b742) single_tv_pg_channel_pane_g1

0xc3a2,	// (0x0009b74b) single_tv_pg_channel_pane_g2

0x0001,

0xfb74,	// (0x0009ef1d) single_tv_pg_channel_pane_g

0x51b6,	// (0x0009455f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x51b6,	// (0x0009455f) bg_single_mobtv_pg_channel_thumb_pane

0xc3ab,	// (0x0009b754) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc3ab,	// (0x0009b754) single_mobtv_pg_channel_thumb_pane_g1

0xc3b9,	// (0x0009b762) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc3b9,	// (0x0009b762) single_mobtv_pg_channel_thumb_pane_g2

0xc3c5,	// (0x0009b76e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc3c5,	// (0x0009b76e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb79,	// (0x0009ef22) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb79,	// (0x0009ef22) single_mobtv_pg_channel_thumb_pane_g

0xc3d1,	// (0x0009b77a) single_mobtv_pg_channel_thumb_pane_t1

0xc3df,	// (0x0009b788) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb80,	// (0x0009ef29) single_mobtv_pg_channel_thumb_pane_t

0x4ed8,	// (0x00094281) bg_single_mobtv_pg_channel_table_pane_g1

0x4ed8,	// (0x00094281) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf637,	// (0x0009e9e0) bg_single_mobtv_pg_channel_table_pane_g

0xc3ed,	// (0x0009b796) single_mobtv_pg_channel_table_pane_t1

0xc3fb,	// (0x0009b7a4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb85,	// (0x0009ef2e) single_mobtv_pg_channel_table_pane_t

0x8513,	// (0x000978bc) main_mobtv_info_pane_g1_ParamLimits

0x8513,	// (0x000978bc) main_mobtv_info_pane_g1

0x8531,	// (0x000978da) main_mobtv_info_pane_t1_ParamLimits

0x8531,	// (0x000978da) main_mobtv_info_pane_t1

0x85a9,	// (0x00097952) main_mobtv_info_pane_t2_ParamLimits

0x85a9,	// (0x00097952) main_mobtv_info_pane_t2

0x0002,

0xfb8f,	// (0x0009ef38) main_mobtv_info_pane_t_ParamLimits

0xfb8f,	// (0x0009ef38) main_mobtv_info_pane_t

0x863a,	// (0x000979e3) wait_bar_pane_cp05

0x864c,	// (0x000979f5) main_mobtv_loading_pane_g1_ParamLimits

0x864c,	// (0x000979f5) main_mobtv_loading_pane_g1

0x865d,	// (0x00097a06) main_mobtv_loading_pane_g2_ParamLimits

0x865d,	// (0x00097a06) main_mobtv_loading_pane_g2

0x8669,	// (0x00097a12) main_mobtv_loading_pane_g3_ParamLimits

0x8669,	// (0x00097a12) main_mobtv_loading_pane_g3

0x0002,

0xfb96,	// (0x0009ef3f) main_mobtv_loading_pane_g_ParamLimits

0xfb96,	// (0x0009ef3f) main_mobtv_loading_pane_g

0xc409,	// (0x0009b7b2) main_mobtv_loading_pane_t1_ParamLimits

0xc409,	// (0x0009b7b2) main_mobtv_loading_pane_t1

0xc421,	// (0x0009b7ca) main_mobtv_loading_pane_t2_ParamLimits

0xc421,	// (0x0009b7ca) main_mobtv_loading_pane_t2

0x0001,

0xfb9d,	// (0x0009ef46) main_mobtv_loading_pane_t_ParamLimits

0xfb9d,	// (0x0009ef46) main_mobtv_loading_pane_t

0x867c,	// (0x00097a25) wait_bar_pane_cp06_ParamLimits

0x867c,	// (0x00097a25) wait_bar_pane_cp06

0xc445,	// (0x0009b7ee) main_mobtv_programe_curr_pane_t1

0xc453,	// (0x0009b7fc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba2,	// (0x0009ef4b) main_mobtv_programe_curr_pane_t

0xc461,	// (0x0009b80a) main_mobtv_programe_next_pane_t1

0xc46f,	// (0x0009b818) main_mobtv_programe_next_pane_t2

0xc47d,	// (0x0009b826) main_mobtv_programe_next_pane_t3

0x0002,

0xfba7,	// (0x0009ef50) main_mobtv_programe_next_pane_t

0x0b67,	// (0x0008ff10) bg_popup_mobtv_noti_window_pane

0xc48b,	// (0x0009b834) popup_mobtv_noti_window_g1

0xc493,	// (0x0009b83c) popup_mobtv_noti_window_t1

0xc4a1,	// (0x0009b84a) popup_mobtv_noti_window_t2

0x0001,

0xfbae,	// (0x0009ef57) popup_mobtv_noti_window_t

0x4ed8,	// (0x00094281) bg_popup_mobtv_noti_window_pane_g1

0x0b67,	// (0x0008ff10) sc_clock_pane

0x0b67,	// (0x0008ff10) main_fs_bigclock_pane

0x7e16,	// (0x000971bf) blid2_tripm_pane_t4_ParamLimits

0x7e16,	// (0x000971bf) blid2_tripm_pane_t4

0x868b,	// (0x00097a34) sc_clock_pane_g1_ParamLimits

0x868b,	// (0x00097a34) sc_clock_pane_g1

0x869d,	// (0x00097a46) sc_clock_pane_t1_ParamLimits

0x869d,	// (0x00097a46) sc_clock_pane_t1

0x86c1,	// (0x00097a6a) sc_clock_pane_t2_ParamLimits

0x86c1,	// (0x00097a6a) sc_clock_pane_t2

0x86d9,	// (0x00097a82) sc_clock_pane_t3_ParamLimits

0x86d9,	// (0x00097a82) sc_clock_pane_t3

0x0004,

0xfbb3,	// (0x0009ef5c) sc_clock_pane_t_ParamLimits

0xfbb3,	// (0x0009ef5c) sc_clock_pane_t

0x947d,	// (0x00098826) main_fs_bigclock_indicator_pane_ParamLimits

0x947d,	// (0x00098826) main_fs_bigclock_indicator_pane

0x514d,	// (0x000944f6) main_fs_bigclock_pane_g1_ParamLimits

0x514d,	// (0x000944f6) main_fs_bigclock_pane_g1

0x9489,	// (0x00098832) main_fs_bigclock_pane_t1_ParamLimits

0x9489,	// (0x00098832) main_fs_bigclock_pane_t1

0x949b,	// (0x00098844) main_fs_bigclock_pane_t2_ParamLimits

0x949b,	// (0x00098844) main_fs_bigclock_pane_t2

0x94af,	// (0x00098858) main_fs_bigclock_pane_t3_ParamLimits

0x94af,	// (0x00098858) main_fs_bigclock_pane_t3

0x0002,

0xfdb2,	// (0x0009f15b) main_fs_bigclock_pane_t_ParamLimits

0xfdb2,	// (0x0009f15b) main_fs_bigclock_pane_t

0xd146,	// (0x0009c4ef) main_fs_bigclock_indicator_pane_g1

0xc163,	// (0x0009b50c) ncim_query_content_pane_g2_ParamLimits

0xc163,	// (0x0009b50c) ncim_query_content_pane_g2

0x0001,

0xfb40,	// (0x0009eee9) ncim_query_content_pane_g_ParamLimits

0xfb40,	// (0x0009eee9) ncim_query_content_pane_g

0x86ee,	// (0x00097a97) sc_clock_pane_t4_ParamLimits

0x86ee,	// (0x00097a97) sc_clock_pane_t4

0x0dea,	// (0x00090193) main_radioblah_pane

0xb45a,	// (0x0009a803) cell_call4_button_pane_t1_copy1_ParamLimits

0xb45a,	// (0x0009a803) cell_call4_button_pane_t1_copy1

0x8345,	// (0x000976ee) main_ncimui_pane_t1_ParamLimits

0x8345,	// (0x000976ee) main_ncimui_pane_t1

0x835f,	// (0x00097708) main_ncimui_pane_t2_ParamLimits

0x835f,	// (0x00097708) main_ncimui_pane_t2

0x0002,

0xfb39,	// (0x0009eee2) main_ncimui_pane_t_ParamLimits

0xfb39,	// (0x0009eee2) main_ncimui_pane_t

0xc5d9,	// (0x0009b982) main_radioblah_anim_pane_ParamLimits

0xc5d9,	// (0x0009b982) main_radioblah_anim_pane

0xc5ea,	// (0x0009b993) main_radioblah_info_pane_ParamLimits

0xc5ea,	// (0x0009b993) main_radioblah_info_pane

0xc5fe,	// (0x0009b9a7) main_radioblah_pane_t1_ParamLimits

0xc5fe,	// (0x0009b9a7) main_radioblah_pane_t1

0xc61a,	// (0x0009b9c3) main_radioblah_pane_t2_ParamLimits

0xc61a,	// (0x0009b9c3) main_radioblah_pane_t2

0x0003,

0xfbd4,	// (0x0009ef7d) main_radioblah_pane_t_ParamLimits

0xfbd4,	// (0x0009ef7d) main_radioblah_pane_t

0x879c,	// (0x00097b45) main_radioblah_rocker_ctrl_pane_ParamLimits

0x879c,	// (0x00097b45) main_radioblah_rocker_ctrl_pane

0xc662,	// (0x0009ba0b) main_radioblah_info_pane_t1_ParamLimits

0xc662,	// (0x0009ba0b) main_radioblah_info_pane_t1

0x87f4,	// (0x00097b9d) main_radioblah_info_pane_t2_ParamLimits

0x87f4,	// (0x00097b9d) main_radioblah_info_pane_t2

0x0003,

0xfbdd,	// (0x0009ef86) main_radioblah_info_pane_t_ParamLimits

0xfbdd,	// (0x0009ef86) main_radioblah_info_pane_t

0x4ed8,	// (0x00094281) main_radioblah_rocker_ctrl_pane_g1

0x88a4,	// (0x00097c4d) main_radioblah_rocker_ctrl_pane_g2

0x88ac,	// (0x00097c55) main_radioblah_rocker_ctrl_pane_g3

0x88b4,	// (0x00097c5d) main_radioblah_rocker_ctrl_pane_g4

0x88bc,	// (0x00097c65) main_radioblah_rocker_ctrl_pane_g5

0x88c4,	// (0x00097c6d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbe6,	// (0x0009ef8f) main_radioblah_rocker_ctrl_pane_g

0x80c2,	// (0x0009746b) main_cset_text2_pane_t1_copy1_ParamLimits

0xd7bc,	// (0x0009cb65) cam4_image_uncrop_qvga_pane

0xd823,	// (0x0009cbcc) vid4_image_uncrop_qcif_pane

0xd972,	// (0x0009cd1b) cam6_image_uncrop_qvga_pane_ParamLimits

0xd972,	// (0x0009cd1b) cam6_image_uncrop_qvga_pane

0xbd7a,	// (0x0009b123) vid6_image_uncrop_qcif_pane_ParamLimits

0xbd7a,	// (0x0009b123) vid6_image_uncrop_qcif_pane

0x0b67,	// (0x0008ff10) bg_popup_preview_window_pane_cp03

0xc115,	// (0x0009b4be) list_cset_text2_pane

0xc11d,	// (0x0009b4c6) main_cset6_text2_pane_g1

0xc125,	// (0x0009b4ce) main_cset6_text2_pane_t1

0xc69c,	// (0x0009ba45) list_cset_text2_pane_t1_ParamLimits

0xc69c,	// (0x0009ba45) list_cset_text2_pane_t1

0x0dea,	// (0x00090193) main_radioblah_pane_ParamLimits

0x8626,	// (0x000979cf) main_mobtv_info_pane_t3_ParamLimits

0x8626,	// (0x000979cf) main_mobtv_info_pane_t3

0x878a,	// (0x00097b33) main_radioblah_pane_g1

0x87c4,	// (0x00097b6d) main_radioblah_info_pane_g1

0x8849,	// (0x00097bf2) main_radioblah_info_pane_t3_ParamLimits

0x8849,	// (0x00097bf2) main_radioblah_info_pane_t3

0x2852,	// (0x00091bfb) highlight_cell_cale_month_pane_ParamLimits

0x2852,	// (0x00091bfb) highlight_cell_cale_month_pane

0x0b67,	// (0x0008ff10) main_phob_fisheye_pane

0x5ae1,	// (0x00094e8a) scroll_pane_cp0031_ParamLimits

0x5ae1,	// (0x00094e8a) scroll_pane_cp0031

0xbe8c,	// (0x0009b235) wait_bar_pane_cp08_ParamLimits

0x814b,	// (0x000974f4) cset_list_set_pane_copy1_ParamLimits

0xc6b6,	// (0x0009ba5f) highlight_cell_cale_month_pane_g1

0x88cc,	// (0x00097c75) highlight_cell_cale_month_pane_t1

0xbac1,	// (0x0009ae6a) list_gen_pane_cp01

0xb65e,	// (0x0009aa07) scroll_pane_01

0x88da,	// (0x00097c83) list_single_double_fisheye_pane

0xc6be,	// (0x0009ba67) list_double_fisheye_pane_g1_ParamLimits

0xc6be,	// (0x0009ba67) list_double_fisheye_pane_g1

0xc6ca,	// (0x0009ba73) list_double_fisheye_pane_g2_ParamLimits

0xc6ca,	// (0x0009ba73) list_double_fisheye_pane_g2

0x88e3,	// (0x00097c8c) list_double_fisheye_pane_g3_ParamLimits

0x88e3,	// (0x00097c8c) list_double_fisheye_pane_g3

0x0004,

0xfbf3,	// (0x0009ef9c) list_double_fisheye_pane_g_ParamLimits

0xfbf3,	// (0x0009ef9c) list_double_fisheye_pane_g

0x88ef,	// (0x00097c98) list_double_fisheye_pane_t1_ParamLimits

0x88ef,	// (0x00097c98) list_double_fisheye_pane_t1

0x890a,	// (0x00097cb3) list_double_fisheye_pane_t2_ParamLimits

0x890a,	// (0x00097cb3) list_double_fisheye_pane_t2

0x0001,

0xfbfe,	// (0x0009efa7) list_double_fisheye_pane_t_ParamLimits

0xfbfe,	// (0x0009efa7) list_double_fisheye_pane_t

0x0b67,	// (0x0008ff10) main_call5_pane

0x8719,	// (0x00097ac2) sc_swipe_pane_ParamLimits

0x8719,	// (0x00097ac2) sc_swipe_pane

0x893f,	// (0x00097ce8) call5_image_pane_ParamLimits

0x893f,	// (0x00097ce8) call5_image_pane

0x895c,	// (0x00097d05) call5_swipe_1_pane_ParamLimits

0x895c,	// (0x00097d05) call5_swipe_1_pane

0x896f,	// (0x00097d18) call5_swipe_2_pane_ParamLimits

0x896f,	// (0x00097d18) call5_swipe_2_pane

0x899c,	// (0x00097d45) popup_call5_audio_first_window_ParamLimits

0x899c,	// (0x00097d45) popup_call5_audio_first_window

0x51b6,	// (0x0009455f) call5_swipe_1_pane_g1_ParamLimits

0x51b6,	// (0x0009455f) call5_swipe_1_pane_g1

0xc6fb,	// (0x0009baa4) call5_swipe_1_pane_g2_ParamLimits

0xc6fb,	// (0x0009baa4) call5_swipe_1_pane_g2

0x0001,

0xfc03,	// (0x0009efac) call5_swipe_1_pane_g_ParamLimits

0xfc03,	// (0x0009efac) call5_swipe_1_pane_g

0xc707,	// (0x0009bab0) call5_swipe_1_pane_t1_ParamLimits

0xc707,	// (0x0009bab0) call5_swipe_1_pane_t1

0x51b6,	// (0x0009455f) call5_swipe_2_pane_g1_ParamLimits

0x51b6,	// (0x0009455f) call5_swipe_2_pane_g1

0xc71c,	// (0x0009bac5) call5_swipe_2_pane_g2_ParamLimits

0xc71c,	// (0x0009bac5) call5_swipe_2_pane_g2

0x0001,

0xfc08,	// (0x0009efb1) call5_swipe_2_pane_g_ParamLimits

0xfc08,	// (0x0009efb1) call5_swipe_2_pane_g

0xc728,	// (0x0009bad1) call5_swipe_2_pane_t1_ParamLimits

0xc728,	// (0x0009bad1) call5_swipe_2_pane_t1

0xc73d,	// (0x0009bae6) sc_swipe_pane_g1_ParamLimits

0xc73d,	// (0x0009bae6) sc_swipe_pane_g1

0xc74a,	// (0x0009baf3) sc_swipe_pane_g2_ParamLimits

0xc74a,	// (0x0009baf3) sc_swipe_pane_g2

0x0001,

0xfc0d,	// (0x0009efb6) sc_swipe_pane_g_ParamLimits

0xfc0d,	// (0x0009efb6) sc_swipe_pane_g

0xc756,	// (0x0009baff) sc_swipe_pane_t1_ParamLimits

0xc756,	// (0x0009baff) sc_swipe_pane_t1

0x0b67,	// (0x0008ff10) main_cmail_launcher_pane

0x89b1,	// (0x00097d5a) aid_size_cell_cmail_l_ParamLimits

0x89b1,	// (0x00097d5a) aid_size_cell_cmail_l

0x89cb,	// (0x00097d74) grid_cmail_l_pane_ParamLimits

0x89cb,	// (0x00097d74) grid_cmail_l_pane

0x89e7,	// (0x00097d90) cell_cmail_l_pane_ParamLimits

0x89e7,	// (0x00097d90) cell_cmail_l_pane

0x8a0f,	// (0x00097db8) cell_cmail_l_pane_g1_ParamLimits

0x8a0f,	// (0x00097db8) cell_cmail_l_pane_g1

0x8a1b,	// (0x00097dc4) cell_cmail_l_pane_t1_ParamLimits

0x8a1b,	// (0x00097dc4) cell_cmail_l_pane_t1

0xc76b,	// (0x0009bb14) cell_cmail_l_pane_t2_ParamLimits

0xc76b,	// (0x0009bb14) cell_cmail_l_pane_t2

0x0001,

0xfc12,	// (0x0009efbb) cell_cmail_l_pane_t_ParamLimits

0xfc12,	// (0x0009efbb) cell_cmail_l_pane_t

0x0dea,	// (0x00090193) grid_highlight_pane_cp018_ParamLimits

0x0dea,	// (0x00090193) grid_highlight_pane_cp018

0x0c9c,	// (0x00090045) main2_pane_ParamLimits

0x0c9c,	// (0x00090045) main2_pane

0xa4a7,	// (0x00099850) popup_sp_fs_action_menu_bg_pane_g1

0xa4af,	// (0x00099858) popup_sp_fs_action_menu_bg_pane_g2

0xa4b7,	// (0x00099860) popup_sp_fs_action_menu_bg_pane_g3

0xa4bf,	// (0x00099868) popup_sp_fs_action_menu_bg_pane_g4

0xa4c7,	// (0x00099870) popup_sp_fs_action_menu_bg_pane_g5

0xa4cf,	// (0x00099878) popup_sp_fs_action_menu_bg_pane_g6

0xa4d7,	// (0x00099880) popup_sp_fs_action_menu_bg_pane_g7

0xa4df,	// (0x00099888) popup_sp_fs_action_menu_bg_pane_g8

0xa4e7,	// (0x00099890) popup_sp_fs_action_menu_bg_pane_g9

0xa4ef,	// (0x00099898) popup_sp_fs_action_menu_bg_pane_g10

0xa4ef,	// (0x00099898) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009e555) popup_sp_fs_action_menu_bg_pane_g

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g3_g1

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t3_g3_g2

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0009e605) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0009e605) list_medium_line_x2_t3_g3_g

0x1afb,	// (0x00090ea4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1afb,	// (0x00090ea4) list_medium_line_x2_t3_g3_t1

0x1b10,	// (0x00090eb9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b10,	// (0x00090eb9) list_medium_line_x2_t3_g3_t2

0x1b24,	// (0x00090ecd) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0009e60c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0009e60c) list_medium_line_x2_t3_g3_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g2_g1

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0009e613) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0009e613) list_medium_line_x2_t3_g2_g

0x1b39,	// (0x00090ee2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b39,	// (0x00090ee2) list_medium_line_x2_t3_g2_t1

0x1b4f,	// (0x00090ef8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b4f,	// (0x00090ef8) list_medium_line_x2_t3_g2_t2

0x1b61,	// (0x00090f0a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b61,	// (0x00090f0a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0009e618) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0009e618) list_medium_line_x2_t3_g2_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t4_g4_g1

0x1b7f,	// (0x00090f28) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b7f,	// (0x00090f28) list_medium_line_x2_t4_g4_g2

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t4_g4_g3

0x1b8b,	// (0x00090f34) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b8b,	// (0x00090f34) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0009e61f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0009e61f) list_medium_line_x2_t4_g4_g

0x1b97,	// (0x00090f40) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b97,	// (0x00090f40) list_medium_line_x2_t4_g4_t1

0x1bb1,	// (0x00090f5a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bb1,	// (0x00090f5a) list_medium_line_x2_t4_g4_t2

0x1bc7,	// (0x00090f70) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bc7,	// (0x00090f70) list_medium_line_x2_t4_g4_t3

0x1bdc,	// (0x00090f85) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bdc,	// (0x00090f85) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0009e628) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0009e628) list_medium_line_x2_t4_g4_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g4_g1

0x1b7f,	// (0x00090f28) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b7f,	// (0x00090f28) list_medium_line_x2_t2_g4_g2

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t2_g4_g3

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0009e68f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0009e68f) list_medium_line_x2_t2_g4_g

0x2870,	// (0x00091c19) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2870,	// (0x00091c19) list_medium_line_x2_t2_g4_t1

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0009e698) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0009e698) list_medium_line_x2_t2_g4_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g3_g1

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t2_g3_g2

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0009e605) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0009e605) list_medium_line_x2_t2_g3_g

0x2885,	// (0x00091c2e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2885,	// (0x00091c2e) list_medium_line_x2_t2_g3_t1

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0009e69d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0009e69d) list_medium_line_x2_t2_g3_t

0x2a55,	// (0x00091dfe) main_sp_fs_list_pane_ParamLimits

0x2a55,	// (0x00091dfe) main_sp_fs_list_pane

0x2a61,	// (0x00091e0a) sp_fs_scroll_pane_ParamLimits

0x2a61,	// (0x00091e0a) sp_fs_scroll_pane

0x2a6d,	// (0x00091e16) list_medium_line_x2_t3_t1

0x2a7d,	// (0x00091e26) list_medium_line_x2_t3_t2

0x2a8b,	// (0x00091e34) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0009e6e8) list_medium_line_x2_t3_t

0x2a99,	// (0x00091e42) list_medium_line_x3_t4_t1

0x2aa9,	// (0x00091e52) list_medium_line_x3_t4_t2

0x2ab7,	// (0x00091e60) list_medium_line_x3_t4_t3

0x2a8b,	// (0x00091e34) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0009e6ef) list_medium_line_x3_t4_t

0x2ac5,	// (0x00091e6e) list_medium_line_x4_t5_t1

0x2ad5,	// (0x00091e7e) list_medium_line_x4_t5_t2

0x2ab7,	// (0x00091e60) list_medium_line_x4_t5_t3

0x2ae3,	// (0x00091e8c) list_medium_line_x4_t5_t4

0x2a8b,	// (0x00091e34) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0009e6f8) list_medium_line_x4_t5_t

0x1ad7,	// (0x00090e80) list_medium_line_t4_g4_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_t4_g4_g1

0x1b8b,	// (0x00090f34) list_medium_line_t4_g4_g2_ParamLimits

0x1b8b,	// (0x00090f34) list_medium_line_t4_g4_g2

0x2af1,	// (0x00091e9a) list_medium_line_t4_g4_g3_ParamLimits

0x2af1,	// (0x00091e9a) list_medium_line_t4_g4_g3

0x1aef,	// (0x00090e98) list_medium_line_t4_g4_g4_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0009e703) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0009e703) list_medium_line_t4_g4_g

0x2afd,	// (0x00091ea6) list_medium_line_t4_g4_t1_ParamLimits

0x2afd,	// (0x00091ea6) list_medium_line_t4_g4_t1

0x2b12,	// (0x00091ebb) list_medium_line_t4_g4_t2_ParamLimits

0x2b12,	// (0x00091ebb) list_medium_line_t4_g4_t2

0x2b28,	// (0x00091ed1) list_medium_line_t4_g4_t3_ParamLimits

0x2b28,	// (0x00091ed1) list_medium_line_t4_g4_t3

0x1b24,	// (0x00090ecd) list_medium_line_t4_g4_t4_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0009e70c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0009e70c) list_medium_line_t4_g4_t

0x2c04,	// (0x00091fad) chi_dic_find_pane_g1

0x3e6c,	// (0x00093215) main_tport_pane

0xb776,	// (0x0009ab1f) list_medium_line_plain_t1

0xb78c,	// (0x0009ab35) list_medium_line_t2_g2_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t2_g2_g1

0xb798,	// (0x0009ab41) list_medium_line_t2_g2_g2_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_t2_g2_g2

0x0001,

0xf94f,	// (0x0009ecf8) list_medium_line_t2_g2_g_ParamLimits

0xf94f,	// (0x0009ecf8) list_medium_line_t2_g2_g

0x75ae,	// (0x00096957) list_medium_line_t2_g2_t1_ParamLimits

0x75ae,	// (0x00096957) list_medium_line_t2_g2_t1

0x75c5,	// (0x0009696e) list_medium_line_t2_g2_t2_ParamLimits

0x75c5,	// (0x0009696e) list_medium_line_t2_g2_t2

0x0001,

0xf954,	// (0x0009ecfd) list_medium_line_t2_g2_t_ParamLimits

0xf954,	// (0x0009ecfd) list_medium_line_t2_g2_t

0xbaca,	// (0x0009ae73) aid_sp_fs_list_icon_a_sm

0xbad2,	// (0x0009ae7b) aid_sp_fs_list_icon_d

0xbada,	// (0x0009ae83) aid_sp_fs_text_primary

0xbae3,	// (0x0009ae8c) aid_sp_fs_text_secondary

0xbaec,	// (0x0009ae95) list_medium_line

0xbaec,	// (0x0009ae95) list_medium_line_g2

0xbaec,	// (0x0009ae95) list_medium_line_g3

0xbaec,	// (0x0009ae95) list_medium_line_plain

0xbaec,	// (0x0009ae95) list_medium_line_plain_t2

0xbaec,	// (0x0009ae95) list_medium_line_plain_t3

0xbaec,	// (0x0009ae95) list_medium_line_right_icon

0xbaec,	// (0x0009ae95) list_medium_line_right_iconx2

0xbaec,	// (0x0009ae95) list_medium_line_t2

0xbaec,	// (0x0009ae95) list_medium_line_t2_g2

0xbaec,	// (0x0009ae95) list_medium_line_t2_g3

0xbaec,	// (0x0009ae95) list_medium_line_t2_right_icon

0xbaec,	// (0x0009ae95) list_medium_line_t2_right_iconx2

0xbaec,	// (0x0009ae95) list_medium_line_t3

0xbaec,	// (0x0009ae95) list_medium_line_t3_g2

0xbaec,	// (0x0009ae95) list_medium_line_t3_g3

0xbaec,	// (0x0009ae95) list_medium_line_t3_right_iconx2

0xbaf5,	// (0x0009ae9e) list_medium_line_t4_g4

0xbafe,	// (0x0009aea7) list_medium_line_x2

0xbafe,	// (0x0009aea7) list_medium_line_x2_t2_g2

0xbafe,	// (0x0009aea7) list_medium_line_x2_t2_g3

0xbafe,	// (0x0009aea7) list_medium_line_x2_t2_g4

0xbafe,	// (0x0009aea7) list_medium_line_x2_t3

0xbafe,	// (0x0009aea7) list_medium_line_x2_t3_g2

0xbafe,	// (0x0009aea7) list_medium_line_x2_t3_g3

0xbafe,	// (0x0009aea7) list_medium_line_x2_t3_g4

0xbafe,	// (0x0009aea7) list_medium_line_x2_t4_g2

0xbafe,	// (0x0009aea7) list_medium_line_x2_t4_g4

0xbb07,	// (0x0009aeb0) list_medium_line_x3

0xbb07,	// (0x0009aeb0) list_medium_line_x3_t4

0xbb07,	// (0x0009aeb0) list_medium_line_x3_t4_g4

0xbaf5,	// (0x0009ae9e) list_medium_line_x4_t4

0xbaf5,	// (0x0009ae9e) list_medium_line_x4_t4_g7

0xbaf5,	// (0x0009ae9e) list_medium_line_x4_t5

0xbb10,	// (0x0009aeb9) list_single_fs_dyc_pane_ParamLimits

0xbb10,	// (0x0009aeb9) list_single_fs_dyc_pane

0x1ad7,	// (0x00090e80) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x4_t4_g7_g1

0xc044,	// (0x0009b3ed) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc044,	// (0x0009b3ed) list_medium_line_x4_t4_g7_g2

0xc050,	// (0x0009b3f9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc050,	// (0x0009b3f9) list_medium_line_x4_t4_g7_g3

0xc05f,	// (0x0009b408) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc05f,	// (0x0009b408) list_medium_line_x4_t4_g7_g4

0xc06b,	// (0x0009b414) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc06b,	// (0x0009b414) list_medium_line_x4_t4_g7_g5

0xc07a,	// (0x0009b423) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc07a,	// (0x0009b423) list_medium_line_x4_t4_g7_g6

0xc089,	// (0x0009b432) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc089,	// (0x0009b432) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb1f,	// (0x0009eec8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb1f,	// (0x0009eec8) list_medium_line_x4_t4_g7_g

0xc095,	// (0x0009b43e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc095,	// (0x0009b43e) list_medium_line_x4_t4_g7_t1

0xc0aa,	// (0x0009b453) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc0aa,	// (0x0009b453) list_medium_line_x4_t4_g7_t2

0xc0bf,	// (0x0009b468) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc0bf,	// (0x0009b468) list_medium_line_x4_t4_g7_t3

0xc0d4,	// (0x0009b47d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc0d4,	// (0x0009b47d) list_medium_line_x4_t4_g7_t4

0xc0e6,	// (0x0009b48f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc0e6,	// (0x0009b48f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb2e,	// (0x0009eed7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb2e,	// (0x0009eed7) list_medium_line_x4_t4_g7_t

0xc0f8,	// (0x0009b4a1) list_single_dyc_row_pane_ParamLimits

0xc0f8,	// (0x0009b4a1) list_single_dyc_row_pane

0x892c,	// (0x00097cd5) call5_gesture_pane_ParamLimits

0x892c,	// (0x00097cd5) call5_gesture_pane

0x8982,	// (0x00097d2b) call5_windows_pane_ParamLimits

0x8982,	// (0x00097d2b) call5_windows_pane

0x8a31,	// (0x00097dda) call5_swipe_1_pane_cp_ParamLimits

0x8a31,	// (0x00097dda) call5_swipe_1_pane_cp

0x8a3d,	// (0x00097de6) call5_swipe_2_pane_cp_ParamLimits

0x8a3d,	// (0x00097de6) call5_swipe_2_pane_cp

0xdbc6,	// (0x0009cf6f) call5_image_pane_cp

0x8a49,	// (0x00097df2) popup_call5_audio_first_window_cp_ParamLimits

0x8a49,	// (0x00097df2) popup_call5_audio_first_window_cp

0xc73d,	// (0x0009bae6) call5_swipe_1_pane_g1_cp_ParamLimits

0xc73d,	// (0x0009bae6) call5_swipe_1_pane_g1_cp

0xc77d,	// (0x0009bb26) call5_swipe_1_pane_g2_cp

0xc756,	// (0x0009baff) call5_swipe_1_pane_t1_cp_ParamLimits

0xc756,	// (0x0009baff) call5_swipe_1_pane_t1_cp

0xc73d,	// (0x0009bae6) call5_swipe_2_pane_g1_cp_ParamLimits

0xc73d,	// (0x0009bae6) call5_swipe_2_pane_g1_cp

0xc785,	// (0x0009bb2e) call5_swipe_2_pane_g2_cp

0xc78d,	// (0x0009bb36) call5_swipe_2_pane_t1_cp_ParamLimits

0xc78d,	// (0x0009bb36) call5_swipe_2_pane_t1_cp

0x0dea,	// (0x00090193) main_sp_fs_email_pane

0xc7a2,	// (0x0009bb4b) main_sp_fs_listscroll_pane_te

0xc7ab,	// (0x0009bb54) popup_sp_fs_action_menu_pane_ParamLimits

0xc7ab,	// (0x0009bb54) popup_sp_fs_action_menu_pane

0x4ed8,	// (0x00094281) bg_sp_fs_ctrlbar_pane_g1

0xc7f1,	// (0x0009bb9a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc7fa,	// (0x0009bba3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc803,	// (0x0009bbac) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4ed8,	// (0x00094281) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc17,	// (0x0009efc0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4be1,	// (0x00093f8a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4be1,	// (0x00093f8a) bg_sp_fs_ctrlbar_ddmenu_pane

0xc80c,	// (0x0009bbb5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc80c,	// (0x0009bbb5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc818,	// (0x0009bbc1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc818,	// (0x0009bbc1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc20,	// (0x0009efc9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc20,	// (0x0009efc9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc824,	// (0x0009bbcd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc824,	// (0x0009bbcd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc83e,	// (0x0009bbe7) list_medium_line_t2_right_icon_g1

0x8a57,	// (0x00097e00) list_medium_line_t2_right_icon_t1

0x8a67,	// (0x00097e10) list_medium_line_t2_right_icon_t2

0x0001,

0xfc25,	// (0x0009efce) list_medium_line_t2_right_icon_t

0xefd1,	// (0x0009e37a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xefd1,	// (0x0009e37a) bg_sp_fs_ctrlbar_pane

0x8ac1,	// (0x00097e6a) main_sp_fs_ctrlbar_button_pane_cp01

0x8acb,	// (0x00097e74) main_sp_fs_ctrlbar_ddmenu_pane

0xc880,	// (0x0009bc29) main_sp_fs_ctrlbar_pane_g1

0xc88c,	// (0x0009bc35) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc2a,	// (0x0009efd3) main_sp_fs_ctrlbar_pane_g

0xc898,	// (0x0009bc41) main_sp_fs_ctrlbar_pane_t1

0x8ad5,	// (0x00097e7e) main_sp_fs_ctrlbar_pane

0x8af9,	// (0x00097ea2) main_sp_fs_listscroll_pane_te_cp01

0x8b19,	// (0x00097ec2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8b19,	// (0x00097ec2) popup_sp_fs_action_menu_pane_cp01

0x0dea,	// (0x00090193) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0dea,	// (0x00090193) bg_sp_fs_highlight_list_pane_cp01

0xc8ad,	// (0x0009bc56) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc8ad,	// (0x0009bc56) sp_fs_action_menu_list_gene_pane_g1

0xc8bc,	// (0x0009bc65) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc8bc,	// (0x0009bc65) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2f,	// (0x0009efd8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2f,	// (0x0009efd8) sp_fs_action_menu_list_gene_pane_g

0xc8c9,	// (0x0009bc72) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc8c9,	// (0x0009bc72) sp_fs_action_menu_list_gene_pane_t1

0xc8e1,	// (0x0009bc8a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc8e1,	// (0x0009bc8a) sp_fs_action_menu_list_gene_pane

0xc904,	// (0x0009bcad) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc904,	// (0x0009bcad) popup_sp_fs_action_menu_bg_pane

0xc912,	// (0x0009bcbb) sp_fs_action_menu_list_pane_ParamLimits

0xc912,	// (0x0009bcbb) sp_fs_action_menu_list_pane

0xc936,	// (0x0009bcdf) sp_fs_scroll_pane_cp01_ParamLimits

0xc936,	// (0x0009bcdf) sp_fs_scroll_pane_cp01

0x8b35,	// (0x00097ede) list_medium_line_plain_t2_t1

0x8b45,	// (0x00097eee) list_medium_line_plain_t2_t2

0x0001,

0xfc34,	// (0x0009efdd) list_medium_line_plain_t2_t

0x8b55,	// (0x00097efe) list_medium_line_plain_t3_t1

0x8b65,	// (0x00097f0e) list_medium_line_plain_t3_t2

0x8b73,	// (0x00097f1c) list_medium_line_plain_t3_t3

0x0002,

0xfc39,	// (0x0009efe2) list_medium_line_plain_t3_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t2_g2_g1

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0009e613) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0009e613) list_medium_line_x2_t2_g2_g

0x2afd,	// (0x00091ea6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2afd,	// (0x00091ea6) list_medium_line_x2_t2_g2_t1

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc40,	// (0x0009efe9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc40,	// (0x0009efe9) list_medium_line_x2_t2_g2_t

0x1ad7,	// (0x00090e80) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t4_g2_g1

0xc95c,	// (0x0009bd05) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc95c,	// (0x0009bd05) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc45,	// (0x0009efee) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc45,	// (0x0009efee) list_medium_line_x2_t4_g2_g

0x8b81,	// (0x00097f2a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8b81,	// (0x00097f2a) list_medium_line_x2_t4_g2_t1

0x8b9b,	// (0x00097f44) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8b9b,	// (0x00097f44) list_medium_line_x2_t4_g2_t2

0x8bb1,	// (0x00097f5a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8bb1,	// (0x00097f5a) list_medium_line_x2_t4_g2_t3

0x1b24,	// (0x00090ecd) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc4a,	// (0x0009eff3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc4a,	// (0x0009eff3) list_medium_line_x2_t4_g2_t

0xc96e,	// (0x0009bd17) list_medium_line_t3_right_iconx2_g1

0xc83e,	// (0x0009bbe7) list_medium_line_t3_right_iconx2_g2

0x8bc6,	// (0x00097f6f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc53,	// (0x0009effc) list_medium_line_t3_right_iconx2_g

0x8bd0,	// (0x00097f79) list_medium_line_t3_right_iconx2_t1

0x8be0,	// (0x00097f89) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5a,	// (0x0009f003) list_medium_line_t3_right_iconx2_t

0x1ad7,	// (0x00090e80) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x3_t4_g4_g1

0x1ae3,	// (0x00090e8c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x3_t4_g4_g2

0x1b8b,	// (0x00090f34) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b8b,	// (0x00090f34) list_medium_line_x3_t4_g4_g3

0xc976,	// (0x0009bd1f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc976,	// (0x0009bd1f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc5f,	// (0x0009f008) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc5f,	// (0x0009f008) list_medium_line_x3_t4_g4_g

0x8bee,	// (0x00097f97) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8bee,	// (0x00097f97) list_medium_line_x3_t4_g4_t1

0x8c05,	// (0x00097fae) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8c05,	// (0x00097fae) list_medium_line_x3_t4_g4_t2

0xc982,	// (0x0009bd2b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc982,	// (0x0009bd2b) list_medium_line_x3_t4_g4_t3

0xc997,	// (0x0009bd40) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc997,	// (0x0009bd40) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc68,	// (0x0009f011) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc68,	// (0x0009f011) list_medium_line_x3_t4_g4_t

0x8c20,	// (0x00097fc9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8c20,	// (0x00097fc9) list_single_dyc_row_text_pane_t1

0x8c69,	// (0x00098012) list_single_dyc_row_text_pane_t2_ParamLimits

0x8c69,	// (0x00098012) list_single_dyc_row_text_pane_t2

0xc9b4,	// (0x0009bd5d) list_single_dyc_row_text_pane_t3_ParamLimits

0xc9b4,	// (0x0009bd5d) list_single_dyc_row_text_pane_t3

0x0002,

0xfc71,	// (0x0009f01a) list_single_dyc_row_text_pane_t_ParamLimits

0xfc71,	// (0x0009f01a) list_single_dyc_row_text_pane_t

0xc9c6,	// (0x0009bd6f) list_single_dyc_row_pane_g1_ParamLimits

0xc9c6,	// (0x0009bd6f) list_single_dyc_row_pane_g1

0xc9d2,	// (0x0009bd7b) list_single_dyc_row_pane_g2_ParamLimits

0xc9d2,	// (0x0009bd7b) list_single_dyc_row_pane_g2

0xc9de,	// (0x0009bd87) list_single_dyc_row_pane_g3_ParamLimits

0xc9de,	// (0x0009bd87) list_single_dyc_row_pane_g3

0xc9ea,	// (0x0009bd93) list_single_dyc_row_pane_g4_ParamLimits

0xc9ea,	// (0x0009bd93) list_single_dyc_row_pane_g4

0x0003,

0xfc78,	// (0x0009f021) list_single_dyc_row_pane_g_ParamLimits

0xfc78,	// (0x0009f021) list_single_dyc_row_pane_g

0xc9f6,	// (0x0009bd9f) list_single_dyc_row_text_pane_ParamLimits

0xc9f6,	// (0x0009bd9f) list_single_dyc_row_text_pane

0x0b67,	// (0x0008ff10) bg_sp_fs_scroll_pane

0xca15,	// (0x0009bdbe) thumb_sp_fs_scroll_pane

0xb78c,	// (0x0009ab35) list_medium_line_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_g1

0xca1e,	// (0x0009bdc7) list_medium_line_t1_ParamLimits

0xca1e,	// (0x0009bdc7) list_medium_line_t1

0x1ad7,	// (0x00090e80) list_medium_line_x2_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_g1

0x1ae3,	// (0x00090e8c) list_medium_line_x2_g2_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_g2

0x0001,

0xfc81,	// (0x0009f02a) list_medium_line_x2_g_ParamLimits

0xfc81,	// (0x0009f02a) list_medium_line_x2_g

0xca33,	// (0x0009bddc) list_medium_line_x2_t1_ParamLimits

0xca33,	// (0x0009bddc) list_medium_line_x2_t1

0x1ad7,	// (0x00090e80) list_medium_line_x3_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x3_g1

0x1ae3,	// (0x00090e8c) list_medium_line_x3_g2_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x3_g2

0x0001,

0xfc81,	// (0x0009f02a) list_medium_line_x3_g_ParamLimits

0xfc81,	// (0x0009f02a) list_medium_line_x3_g

0xca33,	// (0x0009bddc) list_medium_line_x3_t1_ParamLimits

0xca33,	// (0x0009bddc) list_medium_line_x3_t1

0xca49,	// (0x0009bdf2) thumb_sp_fs_scroll_pane_g1

0xca52,	// (0x0009bdfb) thumb_sp_fs_scroll_pane_g2

0xca5b,	// (0x0009be04) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc86,	// (0x0009f02f) thumb_sp_fs_scroll_pane_g

0xca49,	// (0x0009bdf2) bg_sp_fs_scroll_pane_g1

0xca52,	// (0x0009bdfb) bg_sp_fs_scroll_pane_g2

0xca5b,	// (0x0009be04) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc86,	// (0x0009f02f) bg_sp_fs_scroll_pane_g

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ad7,	// (0x00090e80) list_medium_line_x2_t3_g4_g1

0x1b7f,	// (0x00090f28) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b7f,	// (0x00090f28) list_medium_line_x2_t3_g4_g2

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ae3,	// (0x00090e8c) list_medium_line_x2_t3_g4_g3

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1aef,	// (0x00090e98) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0009e68f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0009e68f) list_medium_line_x2_t3_g4_g

0x8cc3,	// (0x0009806c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8cc3,	// (0x0009806c) list_medium_line_x2_t3_g4_t1

0x8cd9,	// (0x00098082) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8cd9,	// (0x00098082) list_medium_line_x2_t3_g4_t2

0x1b24,	// (0x00090ecd) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b24,	// (0x00090ecd) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc8d,	// (0x0009f036) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc8d,	// (0x0009f036) list_medium_line_x2_t3_g4_t

0xb78c,	// (0x0009ab35) list_medium_line_g2_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_g2_g1

0xb798,	// (0x0009ab41) list_medium_line_g2_g2_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_g2_g2

0x0001,

0xf94f,	// (0x0009ecf8) list_medium_line_g2_g_ParamLimits

0xf94f,	// (0x0009ecf8) list_medium_line_g2_g

0xca64,	// (0x0009be0d) list_medium_line_g2_t1_ParamLimits

0xca64,	// (0x0009be0d) list_medium_line_g2_t1

0xb78c,	// (0x0009ab35) list_medium_line_t3_g2_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t3_g2_g1

0xb798,	// (0x0009ab41) list_medium_line_t3_g2_g2_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_t3_g2_g2

0x0001,

0xf94f,	// (0x0009ecf8) list_medium_line_t3_g2_g_ParamLimits

0xf94f,	// (0x0009ecf8) list_medium_line_t3_g2_g

0x8cf2,	// (0x0009809b) list_medium_line_t3_g2_t1_ParamLimits

0x8cf2,	// (0x0009809b) list_medium_line_t3_g2_t1

0x8d09,	// (0x000980b2) list_medium_line_t3_g2_t2_ParamLimits

0x8d09,	// (0x000980b2) list_medium_line_t3_g2_t2

0x8d1e,	// (0x000980c7) list_medium_line_t3_g2_t3_ParamLimits

0x8d1e,	// (0x000980c7) list_medium_line_t3_g2_t3

0x0002,

0xfc94,	// (0x0009f03d) list_medium_line_t3_g2_t_ParamLimits

0xfc94,	// (0x0009f03d) list_medium_line_t3_g2_t

0xc83e,	// (0x0009bbe7) list_medium_line_right_icon_g1

0xca79,	// (0x0009be22) list_medium_line_right_icon_t1

0xb78c,	// (0x0009ab35) list_medium_line_t2_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t2_g1

0x8d37,	// (0x000980e0) list_medium_line_t2_t1_ParamLimits

0x8d37,	// (0x000980e0) list_medium_line_t2_t1

0x8d51,	// (0x000980fa) list_medium_line_t2_t2_ParamLimits

0x8d51,	// (0x000980fa) list_medium_line_t2_t2

0x0001,

0xfc9b,	// (0x0009f044) list_medium_line_t2_t_ParamLimits

0xfc9b,	// (0x0009f044) list_medium_line_t2_t

0xb78c,	// (0x0009ab35) list_medium_line_t3_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t3_g1

0x8d6a,	// (0x00098113) list_medium_line_t3_t1_ParamLimits

0x8d6a,	// (0x00098113) list_medium_line_t3_t1

0x8d81,	// (0x0009812a) list_medium_line_t3_t2_ParamLimits

0x8d81,	// (0x0009812a) list_medium_line_t3_t2

0x8d96,	// (0x0009813f) list_medium_line_t3_t3_ParamLimits

0x8d96,	// (0x0009813f) list_medium_line_t3_t3

0x0002,

0xfca0,	// (0x0009f049) list_medium_line_t3_t_ParamLimits

0xfca0,	// (0x0009f049) list_medium_line_t3_t

0xb78c,	// (0x0009ab35) list_medium_line_g3_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_g3_g1

0xca87,	// (0x0009be30) list_medium_line_g3_g2_ParamLimits

0xca87,	// (0x0009be30) list_medium_line_g3_g2

0xb798,	// (0x0009ab41) list_medium_line_g3_g3_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_g3_g3

0x0002,

0xfca7,	// (0x0009f050) list_medium_line_g3_g_ParamLimits

0xfca7,	// (0x0009f050) list_medium_line_g3_g

0xca93,	// (0x0009be3c) list_medium_line_g3_t1_ParamLimits

0xca93,	// (0x0009be3c) list_medium_line_g3_t1

0xb78c,	// (0x0009ab35) list_medium_line_t2_g3_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t2_g3_g1

0xca87,	// (0x0009be30) list_medium_line_t2_g3_g2_ParamLimits

0xca87,	// (0x0009be30) list_medium_line_t2_g3_g2

0xb798,	// (0x0009ab41) list_medium_line_t2_g3_g3_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_t2_g3_g3

0x0002,

0xfca7,	// (0x0009f050) list_medium_line_t2_g3_g_ParamLimits

0xfca7,	// (0x0009f050) list_medium_line_t2_g3_g

0x8da8,	// (0x00098151) list_medium_line_t2_g3_t1_ParamLimits

0x8da8,	// (0x00098151) list_medium_line_t2_g3_t1

0x8dbf,	// (0x00098168) list_medium_line_t2_g3_t2_ParamLimits

0x8dbf,	// (0x00098168) list_medium_line_t2_g3_t2

0x0001,

0xfcae,	// (0x0009f057) list_medium_line_t2_g3_t_ParamLimits

0xfcae,	// (0x0009f057) list_medium_line_t2_g3_t

0xb78c,	// (0x0009ab35) list_medium_line_t3_g3_g1_ParamLimits

0xb78c,	// (0x0009ab35) list_medium_line_t3_g3_g1

0xca87,	// (0x0009be30) list_medium_line_t3_g3_g2_ParamLimits

0xca87,	// (0x0009be30) list_medium_line_t3_g3_g2

0xb798,	// (0x0009ab41) list_medium_line_t3_g3_g3_ParamLimits

0xb798,	// (0x0009ab41) list_medium_line_t3_g3_g3

0x0002,

0xfca7,	// (0x0009f050) list_medium_line_t3_g3_g_ParamLimits

0xfca7,	// (0x0009f050) list_medium_line_t3_g3_g

0x8dd8,	// (0x00098181) list_medium_line_t3_g3_t1_ParamLimits

0x8dd8,	// (0x00098181) list_medium_line_t3_g3_t1

0x8df1,	// (0x0009819a) list_medium_line_t3_g3_t2_ParamLimits

0x8df1,	// (0x0009819a) list_medium_line_t3_g3_t2

0x8e07,	// (0x000981b0) list_medium_line_t3_g3_t3_ParamLimits

0x8e07,	// (0x000981b0) list_medium_line_t3_g3_t3

0x0002,

0xfcb3,	// (0x0009f05c) list_medium_line_t3_g3_t_ParamLimits

0xfcb3,	// (0x0009f05c) list_medium_line_t3_g3_t

0xc96e,	// (0x0009bd17) list_medium_line_right_iconx2_g1

0xc83e,	// (0x0009bbe7) list_medium_line_right_iconx2_g2

0x0001,

0xfcba,	// (0x0009f063) list_medium_line_right_iconx2_g

0xcaa8,	// (0x0009be51) list_medium_line_right_iconx2_t1

0xc96e,	// (0x0009bd17) list_medium_line_t2_right_iconx2_g1

0xc83e,	// (0x0009bbe7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcba,	// (0x0009f063) list_medium_line_t2_right_iconx2_g

0x8e21,	// (0x000981ca) list_medium_line_t2_right_iconx2_t1

0x8e31,	// (0x000981da) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcbf,	// (0x0009f068) list_medium_line_t2_right_iconx2_t

0xcab6,	// (0x0009be5f) list_medium_line_x4_t4_t1

0x8e43,	// (0x000981ec) list_medium_line_x4_t4_t2

0x8e53,	// (0x000981fc) list_medium_line_x4_t4_t3

0x8e63,	// (0x0009820c) list_medium_line_x4_t4_t4

0x0003,

0xfcc4,	// (0x0009f06d) list_medium_line_x4_t4_t

0x8ead,	// (0x00098256) tport_appsw_pane_ParamLimits

0x8ead,	// (0x00098256) tport_appsw_pane

0x8ec0,	// (0x00098269) tport_contact_pane_ParamLimits

0x8ec0,	// (0x00098269) tport_contact_pane

0x8ed3,	// (0x0009827c) tport_listscroll_pane_ParamLimits

0x8ed3,	// (0x0009827c) tport_listscroll_pane

0x8ee9,	// (0x00098292) cell_tport_appsw_pane_ParamLimits

0x8ee9,	// (0x00098292) cell_tport_appsw_pane

0xb503,	// (0x0009a8ac) tport_appsw_pane_g1_ParamLimits

0xb503,	// (0x0009a8ac) tport_appsw_pane_g1

0xcac4,	// (0x0009be6d) tport_contact_pane_g1

0xcacd,	// (0x0009be76) tport_contact_pane_t1

0xcadb,	// (0x0009be84) tport_contact_pane_t2

0x0001,

0xfccd,	// (0x0009f076) tport_contact_pane_t

0xcae9,	// (0x0009be92) list_tport_pane

0xcaf2,	// (0x0009be9b) scroll_pane_cp_030

0x8f2f,	// (0x000982d8) cell_tport_appsw_pane_g1

0xcb0b,	// (0x0009beb4) cell_tport_appsw_pane_t1

0x0b67,	// (0x0008ff10) grid_highlight_pane_cp019

0x8f3f,	// (0x000982e8) list_tport_double_graphic_pane_ParamLimits

0x8f3f,	// (0x000982e8) list_tport_double_graphic_pane

0x0dea,	// (0x00090193) list_highlight_pane_cp023_ParamLimits

0x0dea,	// (0x00090193) list_highlight_pane_cp023

0x8f4f,	// (0x000982f8) list_tport_double_graphic_pane_g1_ParamLimits

0x8f4f,	// (0x000982f8) list_tport_double_graphic_pane_g1

0x8f5c,	// (0x00098305) list_tport_double_graphic_pane_t1_ParamLimits

0x8f5c,	// (0x00098305) list_tport_double_graphic_pane_t1

0x8f71,	// (0x0009831a) list_tport_double_graphic_pane_t2_ParamLimits

0x8f71,	// (0x0009831a) list_tport_double_graphic_pane_t2

0x0001,

0xfcd9,	// (0x0009f082) list_tport_double_graphic_pane_t_ParamLimits

0xfcd9,	// (0x0009f082) list_tport_double_graphic_pane_t

0x0b67,	// (0x0008ff10) main_cale_note_pane

0x6d26,	// (0x000960cf) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d26,	// (0x000960cf) cell_vitu2_function_top_wide_pane_cp01

0x863a,	// (0x000979e3) wait_bar_pane_cp05_ParamLimits

0x0b67,	// (0x0008ff10) listscroll_cmail_pane

0xcb21,	// (0x0009beca) list_cmail_pane

0x8f8d,	// (0x00098336) list_cmail_body_pane

0x8fa5,	// (0x0009834e) list_single_cmail_header_caption_pane

0x8fc2,	// (0x0009836b) list_single_cmail_header_detail_pane_ParamLimits

0x8fc2,	// (0x0009836b) list_single_cmail_header_detail_pane

0x8ff4,	// (0x0009839d) list_single_cmail_header_caption_pane_t1

0x9004,	// (0x000983ad) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9004,	// (0x000983ad) list_single_cmail_header_detail_pane_g1

0xcb41,	// (0x0009beea) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcb41,	// (0x0009beea) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcde,	// (0x0009f087) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcde,	// (0x0009f087) list_single_cmail_header_detail_pane_g

0xcb5a,	// (0x0009bf03) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcb5a,	// (0x0009bf03) list_single_cmail_header_detail_pane_t1

0xcb98,	// (0x0009bf41) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcb98,	// (0x0009bf41) list_single_cmail_header_editor_pane_bg

0xc3a2,	// (0x0009b74b) list_cmail_body_pane_g1

0xcbaa,	// (0x0009bf53) list_cmail_body_pane_t1

0xb540,	// (0x0009a8e9) list_single_cmail_header_editor_pane_bg_g1

0xa8cf,	// (0x00099c78) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb550,	// (0x0009a8f9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb548,	// (0x0009a8f1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb784,	// (0x0009ab2d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb570,	// (0x0009a919) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb560,	// (0x0009a909) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb568,	// (0x0009a911) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa8af,	// (0x00099c58) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9042,	// (0x000983eb) calenote_gesture_pane_ParamLimits

0x9042,	// (0x000983eb) calenote_gesture_pane

0x9062,	// (0x0009840b) calenote_window_pane_ParamLimits

0x9062,	// (0x0009840b) calenote_window_pane

0xcbb8,	// (0x0009bf61) popup_note_window_cp01

0x907e,	// (0x00098427) calenote_swipe_1_pane_ParamLimits

0x907e,	// (0x00098427) calenote_swipe_1_pane

0x8a3d,	// (0x00097de6) calenote_swipe_2_pane_ParamLimits

0x8a3d,	// (0x00097de6) calenote_swipe_2_pane

0xc73d,	// (0x0009bae6) calenote_swipe_1_pane_g1_ParamLimits

0xc73d,	// (0x0009bae6) calenote_swipe_1_pane_g1

0xc74a,	// (0x0009baf3) calenote_swipe_1_pane_g2_ParamLimits

0xc74a,	// (0x0009baf3) calenote_swipe_1_pane_g2

0x0001,

0xfc0d,	// (0x0009efb6) calenote_swipe_1_pane_g_ParamLimits

0xfc0d,	// (0x0009efb6) calenote_swipe_1_pane_g

0xcbca,	// (0x0009bf73) calenote_swipe_1_pane_t1_ParamLimits

0xcbca,	// (0x0009bf73) calenote_swipe_1_pane_t1

0xc73d,	// (0x0009bae6) calenote_swipe_2_pane_g1_ParamLimits

0xc73d,	// (0x0009bae6) calenote_swipe_2_pane_g1

0xcbe9,	// (0x0009bf92) calenote_swipe_2_pane_g2_ParamLimits

0xcbe9,	// (0x0009bf92) calenote_swipe_2_pane_g2

0x0001,

0xfcea,	// (0x0009f093) calenote_swipe_2_pane_g_ParamLimits

0xfcea,	// (0x0009f093) calenote_swipe_2_pane_g

0xcbf5,	// (0x0009bf9e) calenote_swipe_2_pane_t1_ParamLimits

0xcbf5,	// (0x0009bf9e) calenote_swipe_2_pane_t1

0x0b67,	// (0x0008ff10) main_mup_navstr_pane

0x588e,	// (0x00094c37) main_mup3_pane_t7_ParamLimits

0x588e,	// (0x00094c37) main_mup3_pane_t7

0xd5e8,	// (0x0009c991) main_mp4_pane_g6_ParamLimits

0xd5e8,	// (0x0009c991) main_mp4_pane_g6

0xd77e,	// (0x0009cb27) main_image3_pane_t4_ParamLimits

0xd77e,	// (0x0009cb27) main_image3_pane_t4

0x9093,	// (0x0009843c) popup_navstr_preview_pane_ParamLimits

0x9093,	// (0x0009843c) popup_navstr_preview_pane

0x90a3,	// (0x0009844c) scroll_navstr_pane_ParamLimits

0x90a3,	// (0x0009844c) scroll_navstr_pane

0x0b67,	// (0x0008ff10) bg_popup_preview_window_pane_cp04

0xcc1c,	// (0x0009bfc5) popup_navstr_preview_pane_t1

0x90b7,	// (0x00098460) scroll_navstr_pane_g1_ParamLimits

0x90b7,	// (0x00098460) scroll_navstr_pane_g1

0x90cb,	// (0x00098474) scroll_navstr_pane_t1_ParamLimits

0x90cb,	// (0x00098474) scroll_navstr_pane_t1

0xcbc1,	// (0x0009bf6a) bg_button_pane_cp014

0xcbc1,	// (0x0009bf6a) bg_button_pane_cp030

0xc6de,	// (0x0009ba87) list_double_fisheye_pane_g4_ParamLimits

0xc6de,	// (0x0009ba87) list_double_fisheye_pane_g4

0xc6ea,	// (0x0009ba93) list_double_fisheye_pane_g5_ParamLimits

0xc6ea,	// (0x0009ba93) list_double_fisheye_pane_g5

0xcb29,	// (0x0009bed2) sp_fs_scroll_pane_cp03

0xc880,	// (0x0009bc29) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc88c,	// (0x0009bc35) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc2a,	// (0x0009efd3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc898,	// (0x0009bc41) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8f83,	// (0x0009832c) sp_fs_scroll_pane_cp02

0xa571,	// (0x0009991a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa571,	// (0x0009991a) popup_sp_fs_calendar_preview_list_single_pane

0x0b67,	// (0x0008ff10) main_cam6_pano_pane

0x0dea,	// (0x00090193) main_mup3_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_phacti_pane

0x850b,	// (0x000978b4) bg_button_pane_cp11

0x8525,	// (0x000978ce) main_mobtv_info_pane_g2_ParamLimits

0x8525,	// (0x000978ce) main_mobtv_info_pane_g2

0x0001,

0xfb8a,	// (0x0009ef33) main_mobtv_info_pane_g_ParamLimits

0xfb8a,	// (0x0009ef33) main_mobtv_info_pane_g

0x8700,	// (0x00097aa9) sc_clock_pane_t5_ParamLimits

0x8700,	// (0x00097aa9) sc_clock_pane_t5

0x878a,	// (0x00097b33) main_radioblah_pane_g1_ParamLimits

0xc632,	// (0x0009b9db) main_radioblah_pane_t3_ParamLimits

0xc632,	// (0x0009b9db) main_radioblah_pane_t3

0xc64a,	// (0x0009b9f3) main_radioblah_pane_t4_ParamLimits

0xc64a,	// (0x0009b9f3) main_radioblah_pane_t4

0x87b2,	// (0x00097b5b) main_radioblah_text_pane_ParamLimits

0x87b2,	// (0x00097b5b) main_radioblah_text_pane

0x87c4,	// (0x00097b6d) main_radioblah_info_pane_g1_ParamLimits

0x885d,	// (0x00097c06) main_radioblah_info_pane_t4_ParamLimits

0x885d,	// (0x00097c06) main_radioblah_info_pane_t4

0x0dea,	// (0x00090193) main_sp_fs_calendar_pane

0x90e2,	// (0x0009848b) main_phacti_pane_g1

0x90ea,	// (0x00098493) phacti_note_pane_ParamLimits

0x90ea,	// (0x00098493) phacti_note_pane

0xcc33,	// (0x0009bfdc) phacti_term_pane_ParamLimits

0xcc33,	// (0x0009bfdc) phacti_term_pane

0xcc48,	// (0x0009bff1) phacti_note_pane_t1_ParamLimits

0xcc48,	// (0x0009bff1) phacti_note_pane_t1

0xcc5f,	// (0x0009c008) phacti_term_pane_g1

0xcc67,	// (0x0009c010) phacti_term_pane_t1_ParamLimits

0xcc67,	// (0x0009c010) phacti_term_pane_t1

0xcc91,	// (0x0009c03a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcc99,	// (0x0009c042) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcf4,	// (0x0009f09d) popup_sp_fs_calendar_preview_list_single_pane_g

0xcca1,	// (0x0009c04a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcca1,	// (0x0009c04a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xccb7,	// (0x0009c060) aid_popup_sp_fs_bg_corner_pane

0x4ed8,	// (0x00094281) popup_sp_fs_calendar_preview_bg_pane_g1

0x0b67,	// (0x0008ff10) popup_sp_fs_calendar_preview_bg_pane

0xccbf,	// (0x0009c068) popup_sp_fs_calendar_preview_list_pane

0x0dea,	// (0x00090193) bg_main_sp_fs_cale_pane_ParamLimits

0x0dea,	// (0x00090193) bg_main_sp_fs_cale_pane

0xccd0,	// (0x0009c079) listscroll_cale_mrui_pane_ParamLimits

0xccd0,	// (0x0009c079) listscroll_cale_mrui_pane

0xcce4,	// (0x0009c08d) listscroll_sp_fs_schedule_track_pane

0xcced,	// (0x0009c096) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcced,	// (0x0009c096) main_sp_fs_ctrlbar_pane_cp01

0xccfe,	// (0x0009c0a7) main_sp_fs_ribbon_pane

0xcd06,	// (0x0009c0af) popup_sp_fs_cale_preview_window

0x9141,	// (0x000984ea) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9141,	// (0x000984ea) list_single_sp_fs_schedule_track_pane

0x0dea,	// (0x00090193) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dea,	// (0x00090193) bg_sp_fs_highlight_list_pane_cp03

0x9154,	// (0x000984fd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9154,	// (0x000984fd) list_single_sp_fs_schedule_track_pane_g1

0x9160,	// (0x00098509) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9160,	// (0x00098509) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcf9,	// (0x0009f0a2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcf9,	// (0x0009f0a2) list_single_sp_fs_schedule_track_pane_g

0x916c,	// (0x00098515) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x916c,	// (0x00098515) list_single_sp_fs_schedule_track_pane_t1

0x918e,	// (0x00098537) sp_fs_schedule_track_pane_ParamLimits

0x918e,	// (0x00098537) sp_fs_schedule_track_pane

0xcd18,	// (0x0009c0c1) sp_fs_schedule_track_pane_g1

0xcd20,	// (0x0009c0c9) sp_fs_schedule_track_pane_g2

0xcd28,	// (0x0009c0d1) sp_fs_schedule_track_pane_g3

0xcd30,	// (0x0009c0d9) sp_fs_schedule_track_pane_g4

0xcd38,	// (0x0009c0e1) sp_fs_schedule_track_pane_g5

0x0004,

0xfcfe,	// (0x0009f0a7) sp_fs_schedule_track_pane_g

0xb540,	// (0x0009a8e9) bg_sp_fs_schedule_viewer_highlight_g1

0xa8cf,	// (0x00099c78) bg_sp_fs_schedule_viewer_highlight_g2

0xb548,	// (0x0009a8f1) bg_sp_fs_schedule_viewer_highlight_g3

0xb550,	// (0x0009a8f9) bg_sp_fs_schedule_viewer_highlight_g4

0xb784,	// (0x0009ab2d) bg_sp_fs_schedule_viewer_highlight_g5

0xb560,	// (0x0009a909) bg_sp_fs_schedule_viewer_highlight_g6

0xb568,	// (0x0009a911) bg_sp_fs_schedule_viewer_highlight_g7

0xb570,	// (0x0009a919) bg_sp_fs_schedule_viewer_highlight_g8

0xa8af,	// (0x00099c58) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd09,	// (0x0009f0b2) bg_sp_fs_schedule_viewer_highlight_g

0x0b67,	// (0x0008ff10) bg_main_sp_fs_ribbon_pane

0x91a3,	// (0x0009854c) main_sp_fs_ribbon_pane_g1

0xcd40,	// (0x0009c0e9) main_sp_fs_ribbon_pane_t1

0x91ac,	// (0x00098555) main_sp_fs_ribbon_pane_t2

0xcd4f,	// (0x0009c0f8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1c,	// (0x0009f0c5) main_sp_fs_ribbon_pane_t

0xcd5e,	// (0x0009c107) main_sp_fs_ribbon_scheduler_pane

0xcd66,	// (0x0009c10f) bg_main_sp_fs_ribbon_pane_g1

0xcd6f,	// (0x0009c118) bg_main_sp_fs_ribbon_pane_g2

0xcd78,	// (0x0009c121) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd23,	// (0x0009f0cc) bg_main_sp_fs_ribbon_pane_g

0xcd80,	// (0x0009c129) main_sp_fs_ribbon_scheduler_pane_g1

0xcd89,	// (0x0009c132) main_sp_fs_ribbon_scheduler_pane_g2

0xcd92,	// (0x0009c13b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd2a,	// (0x0009f0d3) main_sp_fs_ribbon_scheduler_pane_g

0xcd9b,	// (0x0009c144) list_cale_mrui_pane

0x91bb,	// (0x00098564) sp_fs_scroll_pane_cp07_ParamLimits

0x91bb,	// (0x00098564) sp_fs_scroll_pane_cp07

0x91d1,	// (0x0009857a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x91d1,	// (0x0009857a) bg_sp_fs_schedule_viewer_highlight

0xcda4,	// (0x0009c14d) list_single_sp_fs_schedule_track_pane_cp01

0xcdac,	// (0x0009c155) list_sp_fs_schedule_track_pane

0xcdb4,	// (0x0009c15d) sp_fs_scroll_pane_cp06_ParamLimits

0xcdb4,	// (0x0009c15d) sp_fs_scroll_pane_cp06

0x4ed8,	// (0x00094281) bgmain_sp_fs_calendar_pane_g1

0xcdc6,	// (0x0009c16f) list_single_cale_mrui_pane_ParamLimits

0xcdc6,	// (0x0009c16f) list_single_cale_mrui_pane

0xcdea,	// (0x0009c193) list_single_cale_mrui_row_pane_ParamLimits

0xcdea,	// (0x0009c193) list_single_cale_mrui_row_pane

0xcdf7,	// (0x0009c1a0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcdf7,	// (0x0009c1a0) list_single_cale_mrui_row_pane_g1

0xce2f,	// (0x0009c1d8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xce2f,	// (0x0009c1d8) list_single_cale_mrui_row_pane_t1

0x91e3,	// (0x0009858c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x91e3,	// (0x0009858c) list_single_cale_mrui_row_pane_t2

0xce41,	// (0x0009c1ea) list_single_cale_mrui_row_pane_t3_ParamLimits

0xce41,	// (0x0009c1ea) list_single_cale_mrui_row_pane_t3

0xce70,	// (0x0009c219) list_single_cale_mrui_row_pane_t4_ParamLimits

0xce70,	// (0x0009c219) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd36,	// (0x0009f0df) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd36,	// (0x0009f0df) list_single_cale_mrui_row_pane_t

0x9249,	// (0x000985f2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9249,	// (0x000985f2) list_single_cmail_header_editor_pane_bg_cp01

0x926d,	// (0x00098616) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x926d,	// (0x00098616) list_single_cmail_header_editor_pane_bg_cp02

0x928b,	// (0x00098634) main_radioblah_text_pane_t1_ParamLimits

0x928b,	// (0x00098634) main_radioblah_text_pane_t1

0xce9f,	// (0x0009c248) cam6_indi_pane_cp01

0xcea7,	// (0x0009c250) cam6_mode_pane_cp01

0xceaf,	// (0x0009c258) cam6_pano_pane

0xceb8,	// (0x0009c261) cam6_zoom_pane_cp01

0xcec2,	// (0x0009c26b) cam6_pano_image_pane

0xcecb,	// (0x0009c274) cam6_pano_pane_g1

0xc3a2,	// (0x0009b74b) cam6_pano_pane_g2

0xced4,	// (0x0009c27d) cam6_pano_pane_g3

0xcedd,	// (0x0009c286) cam6_pano_pane_g4

0xb014,	// (0x0009a3bd) cam6_pano_pane_g5

0xcee6,	// (0x0009c28f) cam6_pano_pane_g6

0xceee,	// (0x0009c297) cam6_pano_pane_g7

0xcef6,	// (0x0009c29f) cam6_pano_pane_g8

0xceff,	// (0x0009c2a8) cam6_pano_pane_g9

0x0008,

0xfd3f,	// (0x0009f0e8) cam6_pano_pane_g

0x0b67,	// (0x0008ff10) main_browser_tag_pane

0xcc14,	// (0x0009bfbd) grid_navstr_albumart_pane

0xcf0a,	// (0x0009c2b3) cell_navstr_albumart_pane_ParamLimits

0xcf0a,	// (0x0009c2b3) cell_navstr_albumart_pane

0xcf26,	// (0x0009c2cf) cell_navstr_albumart_pane_g1

0xedea,	// (0x0009e193) cell_navstr_albumart_pane_g2

0xedfa,	// (0x0009e1a3) cell_navstr_albumart_pane_g3

0xedf2,	// (0x0009e19b) cell_navstr_albumart_pane_g4

0x0003,

0xfd52,	// (0x0009f0fb) cell_navstr_albumart_pane_g

0x92a6,	// (0x0009864f) bt_list_pane_ParamLimits

0x92a6,	// (0x0009864f) bt_list_pane

0x92bc,	// (0x00098665) bt_list_pane_t1

0x92cb,	// (0x00098674) bt_list_pane_t2

0x0001,

0xfd5b,	// (0x0009f104) bt_list_pane_t

0x0b67,	// (0x0008ff10) main_cale_prevew_pane

0x92da,	// (0x00098683) popup_cale_preview_window_ParamLimits

0x92da,	// (0x00098683) popup_cale_preview_window

0x0dea,	// (0x00090193) bg_popup_preview_window_pane_cp05_ParamLimits

0x0dea,	// (0x00090193) bg_popup_preview_window_pane_cp05

0xcf2e,	// (0x0009c2d7) list_cale_preview_pane_ParamLimits

0xcf2e,	// (0x0009c2d7) list_cale_preview_pane

0x92f5,	// (0x0009869e) list_double_cale_preview_pane_ParamLimits

0x92f5,	// (0x0009869e) list_double_cale_preview_pane

0x9309,	// (0x000986b2) list_single_cale_preview_pane_ParamLimits

0x9309,	// (0x000986b2) list_single_cale_preview_pane

0x9321,	// (0x000986ca) list_single_cale_preview_pane_g1

0x9329,	// (0x000986d2) list_single_cale_preview_pane_t1_ParamLimits

0x9329,	// (0x000986d2) list_single_cale_preview_pane_t1

0x933e,	// (0x000986e7) list_double_cale_preview_pane_g1

0x9346,	// (0x000986ef) list_double_cale_preview_pane_t1_ParamLimits

0x9346,	// (0x000986ef) list_double_cale_preview_pane_t1

0x935b,	// (0x00098704) list_double_cale_preview_pane_t2_ParamLimits

0x935b,	// (0x00098704) list_double_cale_preview_pane_t2

0x0001,

0xfd60,	// (0x0009f109) list_double_cale_preview_pane_t_ParamLimits

0xfd60,	// (0x0009f109) list_double_cale_preview_pane_t

0x0b67,	// (0x0008ff10) main_ezdial_pane

0x0dea,	// (0x00090193) main_sp_fs_email_pane_ParamLimits

0x8a79,	// (0x00097e22) cmail_ddmenu_btn01_pane_ParamLimits

0x8a79,	// (0x00097e22) cmail_ddmenu_btn01_pane

0x8a8c,	// (0x00097e35) cmail_ddmenu_btn02_pane_ParamLimits

0x8a8c,	// (0x00097e35) cmail_ddmenu_btn02_pane

0x8aaf,	// (0x00097e58) cmail_ddmenu_btn03_pane_ParamLimits

0x8aaf,	// (0x00097e58) cmail_ddmenu_btn03_pane

0x8ad5,	// (0x00097e7e) main_sp_fs_ctrlbar_pane_ParamLimits

0x8af9,	// (0x00097ea2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8f8d,	// (0x00098336) list_cmail_body_pane_ParamLimits

0xcb38,	// (0x0009bee1) bg_button_pane_cp12

0xcb4d,	// (0x0009bef6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcb4d,	// (0x0009bef6) list_single_cmail_header_detail_pane_g3

0x901c,	// (0x000983c5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x901c,	// (0x000983c5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfce5,	// (0x0009f08e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfce5,	// (0x0009f08e) list_single_cmail_header_detail_pane_t

0xcc7c,	// (0x0009c025) phacti_term_pane_t2_ParamLimits

0xcc7c,	// (0x0009c025) phacti_term_pane_t2

0x0001,

0xfcef,	// (0x0009f098) phacti_term_pane_t_ParamLimits

0xfcef,	// (0x0009f098) phacti_term_pane_t

0xcf3a,	// (0x0009c2e3) aid_size_list_single_double

0x9373,	// (0x0009871c) popup_ezdial_listscroll_window

0x938f,	// (0x00098738) popup_number_entry_window_cp01

0xdbc6,	// (0x0009cf6f) bg_popup_call_pane_cp09

0xcf46,	// (0x0009c2ef) ezdial_list_pane

0xcf4e,	// (0x0009c2f7) scroll_pane_cp23

0xefd1,	// (0x0009e37a) bg_button_pane_cp028_ParamLimits

0xefd1,	// (0x0009e37a) bg_button_pane_cp028

0x939d,	// (0x00098746) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x939d,	// (0x00098746) cmail_ddmenu_btn01_pane_g1

0x93a9,	// (0x00098752) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x93a9,	// (0x00098752) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd65,	// (0x0009f10e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd65,	// (0x0009f10e) cmail_ddmenu_btn01_pane_g

0xcf56,	// (0x0009c2ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcf56,	// (0x0009c2ff) cmail_ddmenu_btn01_pane_t1

0xefd1,	// (0x0009e37a) bg_button_pane_cp029_ParamLimits

0xefd1,	// (0x0009e37a) bg_button_pane_cp029

0x93b5,	// (0x0009875e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x93b5,	// (0x0009875e) cmail_ddmenu_btn02_pane_g1

0x93cd,	// (0x00098776) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x93cd,	// (0x00098776) cmail_ddmenu_btn02_pane_t1

0x0dea,	// (0x00090193) bg_button_pane_cp031_ParamLimits

0x0dea,	// (0x00090193) bg_button_pane_cp031

0x93b5,	// (0x0009875e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x93b5,	// (0x0009875e) cmail_ddmenu_btn03_pane_g1

0x93cd,	// (0x00098776) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x93cd,	// (0x00098776) cmail_ddmenu_btn03_pane_t1

0x6572,	// (0x0009591b) cell_dialer2_keypad_pane_t1_ParamLimits

0x658c,	// (0x00095935) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x658c,	// (0x00095935) cell_dialer2_keypad_pane_t1_copy1

0x838b,	// (0x00097734) ncimui_group_button_pane

0x0dea,	// (0x00090193) main_sp_fs_calendar_pane_ParamLimits

0x8fa5,	// (0x0009834e) list_single_cmail_header_caption_pane_ParamLimits

0xccc7,	// (0x0009c070) aid_recal_txt_sm_pane

0x0b67,	// (0x0008ff10) mian_recal_day_pane

0xcd06,	// (0x0009c0af) popup_sp_fs_cale_preview_window_ParamLimits

0x0b67,	// (0x0008ff10) list_recal_day_pane

0xcf84,	// (0x0009c32d) list_single_recal_day_pane_ParamLimits

0xcf84,	// (0x0009c32d) list_single_recal_day_pane

0xcf96,	// (0x0009c33f) list_single_recal_day_pane_g1_ParamLimits

0xcf96,	// (0x0009c33f) list_single_recal_day_pane_g1

0xcfa2,	// (0x0009c34b) list_single_recal_day_pane_g2_ParamLimits

0xcfa2,	// (0x0009c34b) list_single_recal_day_pane_g2

0xcfae,	// (0x0009c357) list_single_recal_day_pane_g3_ParamLimits

0xcfae,	// (0x0009c357) list_single_recal_day_pane_g3

0x93f1,	// (0x0009879a) list_single_recal_day_pane_g4_ParamLimits

0x93f1,	// (0x0009879a) list_single_recal_day_pane_g4

0xcfba,	// (0x0009c363) list_single_recal_day_pane_g5_ParamLimits

0xcfba,	// (0x0009c363) list_single_recal_day_pane_g5

0xcfc6,	// (0x0009c36f) list_single_recal_day_pane_g6_ParamLimits

0xcfc6,	// (0x0009c36f) list_single_recal_day_pane_g6

0x0005,

0xfd74,	// (0x0009f11d) list_single_recal_day_pane_g_ParamLimits

0xfd74,	// (0x0009f11d) list_single_recal_day_pane_g

0xcfd2,	// (0x0009c37b) list_single_recal_day_pane_t1

0xcfe0,	// (0x0009c389) list_single_recal_day_pane_t2

0x0001,

0xfd81,	// (0x0009f12a) list_single_recal_day_pane_t

0x93ff,	// (0x000987a8) ncimui_query_button_pane_ParamLimits

0x93ff,	// (0x000987a8) ncimui_query_button_pane

0x940f,	// (0x000987b8) ncimui_query_button_pane_t1_ParamLimits

0x940f,	// (0x000987b8) ncimui_query_button_pane_t1

0xcfee,	// (0x0009c397) ncimui_query_button_pane_t2_ParamLimits

0xcfee,	// (0x0009c397) ncimui_query_button_pane_t2

0x0001,

0xfd86,	// (0x0009f12f) ncimui_query_button_pane_t_ParamLimits

0xfd86,	// (0x0009f12f) ncimui_query_button_pane_t

0x9422,	// (0x000987cb) query_button_pane_ParamLimits

0x9422,	// (0x000987cb) query_button_pane

0x0b67,	// (0x0008ff10) bg_button_pane_cp0028

0xd001,	// (0x0009c3aa) query_button_pane_t1

0x3e6c,	// (0x00093215) main_tport_pane_ParamLimits

0x8e73,	// (0x0009821c) bg_popup_window_pane_cp01_ParamLimits

0x8e73,	// (0x0009821c) bg_popup_window_pane_cp01

0x8e89,	// (0x00098232) heading_pane_cp08_ParamLimits

0x8e89,	// (0x00098232) heading_pane_cp08

0x8e9a,	// (0x00098243) heading_pane_cp07_ParamLimits

0x8e9a,	// (0x00098243) heading_pane_cp07

0xcb03,	// (0x0009beac) cell_tport_appsw_pane_g2

0x0002,

0xfcd2,	// (0x0009f07b) cell_tport_appsw_pane_g

0x33ba,	// (0x00092763) input_candi_list_open_g1

0xaa98,	// (0x00099e41) list_cale_time_pane_g6_ParamLimits

0xaa98,	// (0x00099e41) list_cale_time_pane_g6

0x524f,	// (0x000945f8) aid_size_touch_calib_1_ParamLimits

0x524f,	// (0x000945f8) aid_size_touch_calib_1

0x525b,	// (0x00094604) aid_size_touch_calib_2_ParamLimits

0x525b,	// (0x00094604) aid_size_touch_calib_2

0x5271,	// (0x0009461a) aid_size_touch_calib_3_ParamLimits

0x5271,	// (0x0009461a) aid_size_touch_calib_3

0x528f,	// (0x00094638) aid_size_touch_calib_4_ParamLimits

0x528f,	// (0x00094638) aid_size_touch_calib_4

0x52a5,	// (0x0009464e) main_touch_calib_button_group_pane_ParamLimits

0x52a5,	// (0x0009464e) main_touch_calib_button_group_pane

0x52bd,	// (0x00094666) main_touch_calib_pane_g1_ParamLimits

0x52c9,	// (0x00094672) main_touch_calib_pane_g2_ParamLimits

0x52d5,	// (0x0009467e) main_touch_calib_pane_g3_ParamLimits

0x52e1,	// (0x0009468a) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x0009ea55) main_touch_calib_pane_g_ParamLimits

0x52ed,	// (0x00094696) main_touch_calib_pane_t1_ParamLimits

0x5307,	// (0x000946b0) main_touch_calib_pane_t2_ParamLimits

0x5321,	// (0x000946ca) main_touch_calib_pane_t3_ParamLimits

0x5335,	// (0x000946de) main_touch_calib_pane_t4_ParamLimits

0x5349,	// (0x000946f2) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x0009ea5e) main_touch_calib_pane_t_ParamLimits

0x5b1d,	// (0x00094ec6) list_single_fp_cale_pane_g3_ParamLimits

0x5b1d,	// (0x00094ec6) list_single_fp_cale_pane_g3

0xd845,	// (0x0009cbee) bg_button_pane_cp012_ParamLimits

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp03_ParamLimits

0x7564,	// (0x0009690d) cell_vitu2_function_top_pane_g1_ParamLimits

0xd845,	// (0x0009cbee) bg_vkb2_func_pane_cp04_ParamLimits

0x832b,	// (0x000976d4) main_ncimui_button_group_pane_ParamLimits

0x832b,	// (0x000976d4) main_ncimui_button_group_pane

0x8379,	// (0x00097722) main_ncimui_pane_t3_ParamLimits

0x8379,	// (0x00097722) main_ncimui_pane_t3

0xcc2a,	// (0x0009bfd3) phacti_button_group_pane

0xcf3a,	// (0x0009c2e3) aid_size_list_single_double_ParamLimits

0x9373,	// (0x0009871c) popup_ezdial_listscroll_window_ParamLimits

0x938f,	// (0x00098738) popup_number_entry_window_cp01_ParamLimits

0x9435,	// (0x000987de) phacti_button_pane_ParamLimits

0x9435,	// (0x000987de) phacti_button_pane

0x0b67,	// (0x0008ff10) bg_button_pane_cp14

0xd00f,	// (0x0009c3b8) phacti_button_pane_t1

0x9446,	// (0x000987ef) main_touch_calib_button_pane_ParamLimits

0x9446,	// (0x000987ef) main_touch_calib_button_pane

0xa3ce,	// (0x00099777) bg_button_pane_cp18_ParamLimits

0xa3ce,	// (0x00099777) bg_button_pane_cp18

0xd01d,	// (0x0009c3c6) main_touch_calib_button_pane_t1_ParamLimits

0xd01d,	// (0x0009c3c6) main_touch_calib_button_pane_t1

0xd033,	// (0x0009c3dc) main_touch_calib_button_pane_t2_ParamLimits

0xd033,	// (0x0009c3dc) main_touch_calib_button_pane_t2

0x0001,

0xfd8b,	// (0x0009f134) main_touch_calib_button_pane_t_ParamLimits

0xfd8b,	// (0x0009f134) main_touch_calib_button_pane_t

0x0b67,	// (0x0008ff10) cell_ncimui_button_pane

0x0b67,	// (0x0008ff10) bg_button_pane_cp032

0xd051,	// (0x0009c3fa) cell_ncimui_button_pane_t1

0xd75c,	// (0x0009cb05) image3_infobar_pane_ParamLimits

0xd75c,	// (0x0009cb05) image3_infobar_pane

0x872c,	// (0x00097ad5) fs_bigclock_status_pane_ParamLimits

0x872c,	// (0x00097ad5) fs_bigclock_status_pane

0x8739,	// (0x00097ae2) main_fs_bigclock_clock_pane_ParamLimits

0x8739,	// (0x00097ae2) main_fs_bigclock_clock_pane

0x874c,	// (0x00097af5) main_fs_bigclock_indi_pane_ParamLimits

0x874c,	// (0x00097af5) main_fs_bigclock_indi_pane

0x8767,	// (0x00097b10) main_fs_bigclock_swipe_pane_ParamLimits

0x8767,	// (0x00097b10) main_fs_bigclock_swipe_pane

0x0b67,	// (0x0008ff10) main_fs_clock_dumped_data

0xc4af,	// (0x0009b858) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc4af,	// (0x0009b858) list_single_fs_bigclock_indicator_pane_g1

0xc4cf,	// (0x0009b878) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc4cf,	// (0x0009b878) list_single_fs_bigclock_indicator_pane_g2

0xc4e9,	// (0x0009b892) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc4e9,	// (0x0009b892) list_single_fs_bigclock_indicator_pane_g3

0xc505,	// (0x0009b8ae) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc505,	// (0x0009b8ae) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbbe,	// (0x0009ef67) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbbe,	// (0x0009ef67) list_single_fs_bigclock_indicator_pane_g

0xc52b,	// (0x0009b8d4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc52b,	// (0x0009b8d4) list_single_fs_bigclock_indicator_pane_t1

0xc553,	// (0x0009b8fc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc553,	// (0x0009b8fc) list_single_fs_bigclock_indicator_pane_t2

0xc57b,	// (0x0009b924) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc57b,	// (0x0009b924) list_single_fs_bigclock_indicator_pane_t3

0xc5a5,	// (0x0009b94e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc5a5,	// (0x0009b94e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc9,	// (0x0009ef72) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc9,	// (0x0009ef72) list_single_fs_bigclock_indicator_pane_t

0xd05f,	// (0x0009c408) image3_infobar_fav_pane_ParamLimits

0xd05f,	// (0x0009c408) image3_infobar_fav_pane

0xd06f,	// (0x0009c418) image3_infobar_loc_pane_ParamLimits

0xd06f,	// (0x0009c418) image3_infobar_loc_pane

0xd085,	// (0x0009c42e) image3_infobar_time_pane_ParamLimits

0xd085,	// (0x0009c42e) image3_infobar_time_pane

0x4ed8,	// (0x00094281) image3_infobar_time_pane_g1

0xd095,	// (0x0009c43e) image3_infobar_time_pane_t1

0x4ed8,	// (0x00094281) image3_infobar_loc_pane_g1

0xd0a3,	// (0x0009c44c) image3_infobar_loc_pane_g2

0x0001,

0xfd90,	// (0x0009f139) image3_infobar_loc_pane_g

0xd0ab,	// (0x0009c454) image3_infobar_loc_pane_t1

0x4ed8,	// (0x00094281) image3_infobar_fav_pane_g1

0xd0b9,	// (0x0009c462) image3_infobar_fav_pane_g2

0x0001,

0xfd95,	// (0x0009f13e) image3_infobar_fav_pane_g

0xd0c1,	// (0x0009c46a) fs_bigclock_status_battery_pane

0xd0ca,	// (0x0009c473) fs_bigclock_status_signal_pane

0xd0d3,	// (0x0009c47c) fs_bigclock_status_title_pane

0xd0dc,	// (0x0009c485) fs_bigclock_status_signal_pane_g1

0xd0e5,	// (0x0009c48e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd9a,	// (0x0009f143) fs_bigclock_status_signal_pane_g

0xd0ed,	// (0x0009c496) fs_bigclock_status_battery_pane_g1

0xd0f6,	// (0x0009c49f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd9f,	// (0x0009f148) fs_bigclock_status_battery_pane_g

0xd0fe,	// (0x0009c4a7) fs_bigclock_status_title_pane_t1

0x4ed8,	// (0x00094281) main_fs_bigclock_clock_pane_g1

0xd10c,	// (0x0009c4b5) main_fs_bigclock_clock_pane_g2

0xd10c,	// (0x0009c4b5) main_fs_bigclock_clock_pane_g3

0xd10c,	// (0x0009c4b5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda4,	// (0x0009f14d) main_fs_bigclock_clock_pane_g

0xd118,	// (0x0009c4c1) main_fs_bigclock_clock_pane_t1

0xd126,	// (0x0009c4cf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdad,	// (0x0009f156) main_fs_bigclock_clock_pane_t

0xd135,	// (0x0009c4de) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd135,	// (0x0009c4de) list_single_fs_bigclock_indicator_pane

0x945b,	// (0x00098804) list_single_fs_bigclock_pane_ParamLimits

0x945b,	// (0x00098804) list_single_fs_bigclock_pane

0xd14f,	// (0x0009c4f8) main_fs_bigclock_indicator_pane_t1

0xd15e,	// (0x0009c507) list_single_fs_bigclock_pane_g1

0xd166,	// (0x0009c50f) list_single_fs_bigclock_pane_t1

0x4ed8,	// (0x00094281) main_fs_bigclock_swipe_pane_g1

0xd1a4,	// (0x0009c54d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdbe,	// (0x0009f167) main_fs_bigclock_swipe_pane_g

0xd1ac,	// (0x0009c555) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd1ac,	// (0x0009c555) main_fs_bigclock_swipe_pane_t1

0x2b3e,	// (0x00091ee7) call_type_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_btmg_pane

0xce23,	// (0x0009c1cc) list_single_cale_mrui_row_pane_g2_ParamLimits

0xce23,	// (0x0009c1cc) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd31,	// (0x0009f0da) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd31,	// (0x0009f0da) list_single_cale_mrui_row_pane_g

0xcf74,	// (0x0009c31d) list_recal_vselct_arw_lo_pane

0xcf7c,	// (0x0009c325) list_recal_vselct_arw_up_pane

0xbae3,	// (0x0009ae8c) list_recal_vselct_pane

0xd1c9,	// (0x0009c572) btmg_button_pane

0x94c1,	// (0x0009886a) main_btmg_pane_g1

0x0b67,	// (0x0008ff10) bg_button_pane_cp044

0xd1d3,	// (0x0009c57c) btmg_button_pane_t1

0xefc9,	// (0x0009e372) aid_listscroll_gen

0x0dea,	// (0x00090193) main_cntbar_detail_pane

0xcb19,	// (0x0009bec2) list_cmail_folder_pane

0xcb29,	// (0x0009bed2) sp_fs_scroll_pane_cp03_ParamLimits

0x94cb,	// (0x00098874) list_single_fs_dyc_pane_cp01_ParamLimits

0x94cb,	// (0x00098874) list_single_fs_dyc_pane_cp01

0xd1e1,	// (0x0009c58a) aid_size_cmail_indent

0xd1ea,	// (0x0009c593) list_single_dyc_row_pane_cp01

0x9515,	// (0x000988be) cntbar_detail_list_pane_ParamLimits

0x9515,	// (0x000988be) cntbar_detail_list_pane

0x9567,	// (0x00098910) main_cntbar_detail_cont_pane_ParamLimits

0x9567,	// (0x00098910) main_cntbar_detail_cont_pane

0x2a61,	// (0x00091e0a) scroll_pane_cp032_ParamLimits

0x2a61,	// (0x00091e0a) scroll_pane_cp032

0x957b,	// (0x00098924) cntbar_detail_list_event_pane_ParamLimits

0x957b,	// (0x00098924) cntbar_detail_list_event_pane

0x9527,	// (0x000988d0) cntbar_detail_list_shct_pane

0xa91d,	// (0x00099cc6) aid_list_gen

0xd1f3,	// (0x0009c59c) aid_scroll

0xd1fc,	// (0x0009c5a5) aid_size_touch_scroll_bar

0xd205,	// (0x0009c5ae) aid_list_double

0xd20e,	// (0x0009c5b7) aid_list_single

0x958b,	// (0x00098934) aid_list_single_lg

0xd217,	// (0x0009c5c0) aid_list_z_g_a_sm

0xd21f,	// (0x0009c5c8) aid_list_z_g_d

0xd227,	// (0x0009c5d0) aid_txt_z_prm

0xd235,	// (0x0009c5de) aid_txt_z_prm_cp01

0xd243,	// (0x0009c5ec) aid_txt_z_sec

0x9594,	// (0x0009893d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9594,	// (0x0009893d) main_cntbar_detail_cont_pane_g1

0x95a8,	// (0x00098951) main_cntbar_detail_cont_pane_g2_ParamLimits

0x95a8,	// (0x00098951) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc3,	// (0x0009f16c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc3,	// (0x0009f16c) main_cntbar_detail_cont_pane_g

0xd251,	// (0x0009c5fa) main_cntbar_detail_cont_pane_t1

0xd25f,	// (0x0009c608) main_cntbar_detail_cont_pane_t2

0xd26d,	// (0x0009c616) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc8,	// (0x0009f171) main_cntbar_detail_cont_pane_t

0x95b8,	// (0x00098961) cell_cntbar_detail_list_shct_pane_ParamLimits

0x95b8,	// (0x00098961) cell_cntbar_detail_list_shct_pane

0xd27b,	// (0x0009c624) cntbar_detail_list_shct_pane_g1

0xd284,	// (0x0009c62d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdcf,	// (0x0009f178) cntbar_detail_list_shct_pane_g

0x95ca,	// (0x00098973) cntbar_detail_list_event_pane_g1_ParamLimits

0x95ca,	// (0x00098973) cntbar_detail_list_event_pane_g1

0x95d6,	// (0x0009897f) cntbar_detail_list_event_pane_g2_ParamLimits

0x95d6,	// (0x0009897f) cntbar_detail_list_event_pane_g2

0x0005,

0xfdd4,	// (0x0009f17d) cntbar_detail_list_event_pane_g_ParamLimits

0xfdd4,	// (0x0009f17d) cntbar_detail_list_event_pane_g

0x9644,	// (0x000989ed) cntbar_detail_list_event_pane_t1_ParamLimits

0x9644,	// (0x000989ed) cntbar_detail_list_event_pane_t1

0x9659,	// (0x00098a02) cntbar_detail_list_event_pane_t2_ParamLimits

0x9659,	// (0x00098a02) cntbar_detail_list_event_pane_t2

0x0002,

0xfde1,	// (0x0009f18a) cntbar_detail_list_event_pane_t_ParamLimits

0xfde1,	// (0x0009f18a) cntbar_detail_list_event_pane_t

0x4ed8,	// (0x00094281) cell_cntbar_detail_list_shct_pane_g1

0x2ee2,	// (0x0009228b) navi_pane_mv_g3

0x0dea,	// (0x00090193) main_cntbar_detail_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_notif_wgt_pane

0xd59e,	// (0x0009c947) aid_tch_main_mp4_pane_g4

0xd752,	// (0x0009cafb) popup_slider_window_cp02

0xcf6b,	// (0x0009c314) list_recal_day_event_pane

0x94e5,	// (0x0009888e) cntbar_detail_btn_pane_ParamLimits

0x94e5,	// (0x0009888e) cntbar_detail_btn_pane

0x94fd,	// (0x000988a6) cntbar_detail_btn_pane_cp01_ParamLimits

0x94fd,	// (0x000988a6) cntbar_detail_btn_pane_cp01

0x9527,	// (0x000988d0) cntbar_detail_list_shct_pane_ParamLimits

0x9537,	// (0x000988e0) cntbar_detail_pane_g1_ParamLimits

0x9537,	// (0x000988e0) cntbar_detail_pane_g1

0x954b,	// (0x000988f4) cntbar_detail_pane_t1_ParamLimits

0x954b,	// (0x000988f4) cntbar_detail_pane_t1

0x95e2,	// (0x0009898b) cntbar_detail_list_event_pane_g3_ParamLimits

0x95e2,	// (0x0009898b) cntbar_detail_list_event_pane_g3

0x95fa,	// (0x000989a3) cntbar_detail_list_event_pane_g4_ParamLimits

0x95fa,	// (0x000989a3) cntbar_detail_list_event_pane_g4

0x9612,	// (0x000989bb) cntbar_detail_list_event_pane_g5_ParamLimits

0x9612,	// (0x000989bb) cntbar_detail_list_event_pane_g5

0x962a,	// (0x000989d3) cntbar_detail_list_event_pane_g6_ParamLimits

0x962a,	// (0x000989d3) cntbar_detail_list_event_pane_g6

0x966e,	// (0x00098a17) cntbar_detail_list_event_pane_t3_ParamLimits

0x966e,	// (0x00098a17) cntbar_detail_list_event_pane_t3

0x9680,	// (0x00098a29) popup_notif_wgt_window_ParamLimits

0x9680,	// (0x00098a29) popup_notif_wgt_window

0x9699,	// (0x00098a42) popup_submenu_window_cp01_ParamLimits

0x9699,	// (0x00098a42) popup_submenu_window_cp01

0xdbc6,	// (0x0009cf6f) bg_popup_window_pane_cp10

0xd28d,	// (0x0009c636) listscroll_notif_wgt_pane

0xd297,	// (0x0009c640) list_notif_wgt_window

0xd2a0,	// (0x0009c649) scroll_pane_cp033

0xd2a9,	// (0x0009c652) list_notif_wgt_row_pane_ParamLimits

0xd2a9,	// (0x0009c652) list_notif_wgt_row_pane

0xd2bd,	// (0x0009c666) aid_size_list_notif_wgt_del

0xd2c6,	// (0x0009c66f) list_notif_wgt_row_pane_g1

0xd2ce,	// (0x0009c677) list_notif_wgt_row_pane_g2

0xd2d6,	// (0x0009c67f) list_notif_wgt_row_pane_g3

0x0002,

0xfde8,	// (0x0009f191) list_notif_wgt_row_pane_g

0xd2df,	// (0x0009c688) list_notif_wgt_row_pane_t1

0xd2ed,	// (0x0009c696) list_notif_wgt_row_pane_t2

0xd2fb,	// (0x0009c6a4) list_notif_wgt_row_pane_t3

0x0002,

0xfdef,	// (0x0009f198) list_notif_wgt_row_pane_t

0xb7b6,	// (0x0009ab5f) list_recal_day_event_pane_g1

0xd309,	// (0x0009c6b2) list_recal_day_event_pane_t1

0x0b67,	// (0x0008ff10) bg_button_pane_cp045

0xd318,	// (0x0009c6c1) cntbar_detail_btn_pane_t1

0xefd1,	// (0x0009e37a) main_callh_pane_ParamLimits

0xefd1,	// (0x0009e37a) main_callh_pane

0x0b67,	// (0x0008ff10) main_coverflow0_pane

0x0b67,	// (0x0008ff10) main_wgtman_pane

0x8775,	// (0x00097b1e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8775,	// (0x00097b1e) main_fs_bigclock_unlock_btn_pane

0xcafb,	// (0x0009bea4) bg_button_pane_cp16

0x8f37,	// (0x000982e0) cell_tport_appsw_pane_g3

0x96ab,	// (0x00098a54) cf0_flow_pane_ParamLimits

0x96ab,	// (0x00098a54) cf0_flow_pane

0xd326,	// (0x0009c6cf) listscroll_cf0_pane

0xd32f,	// (0x0009c6d8) main_cf0_pane_g1

0x96c0,	// (0x00098a69) main_cf0_pane_t1_ParamLimits

0x96c0,	// (0x00098a69) main_cf0_pane_t1

0x96d7,	// (0x00098a80) main_cf0_pane_t2_ParamLimits

0x96d7,	// (0x00098a80) main_cf0_pane_t2

0x0001,

0xfdf6,	// (0x0009f19f) main_cf0_pane_t_ParamLimits

0xfdf6,	// (0x0009f19f) main_cf0_pane_t

0xd339,	// (0x0009c6e2) scroll_pane_cp11

0x96ee,	// (0x00098a97) cf0_flow_pane_g1

0x96fa,	// (0x00098aa3) cf0_flow_pane_g2

0x0001,

0xfdfb,	// (0x0009f1a4) cf0_flow_pane_g

0x9706,	// (0x00098aaf) cf0_flow_pane_t1

0x0b67,	// (0x0008ff10) main_call6_pane

0x0b67,	// (0x0008ff10) main_calllock_pane

0x9718,	// (0x00098ac1) call6_btn_grp_pane_ParamLimits

0x9718,	// (0x00098ac1) call6_btn_grp_pane

0x9734,	// (0x00098add) call6_pane_g1_ParamLimits

0x9734,	// (0x00098add) call6_pane_g1

0x974a,	// (0x00098af3) popup_call6_1st_window_ParamLimits

0x974a,	// (0x00098af3) popup_call6_1st_window

0x975b,	// (0x00098b04) popup_call6_2nd_window_ParamLimits

0x975b,	// (0x00098b04) popup_call6_2nd_window

0x976c,	// (0x00098b15) cell_call6_btn_pane_ParamLimits

0x976c,	// (0x00098b15) cell_call6_btn_pane

0xdbc6,	// (0x0009cf6f) bg_popup_call2_in_pane_cp03

0xd344,	// (0x0009c6ed) popup_call6_1st_window_g1

0xd34c,	// (0x0009c6f5) popup_call6_1st_window_g2

0xd354,	// (0x0009c6fd) popup_call6_1st_window_g3

0x0002,

0xfe00,	// (0x0009f1a9) popup_call6_1st_window_g

0xd35c,	// (0x0009c705) popup_call6_1st_window_t1

0xd36b,	// (0x0009c714) popup_call6_1st_window_t2

0xd37b,	// (0x0009c724) popup_call6_1st_window_t3

0x0002,

0xfe07,	// (0x0009f1b0) popup_call6_1st_window_t

0xdbc6,	// (0x0009cf6f) bg_popup_call2_in_pane_cp04

0xd344,	// (0x0009c6ed) popup_call6_2nd_window_g1

0xd34c,	// (0x0009c6f5) popup_call6_2nd_window_g2

0xd354,	// (0x0009c6fd) popup_call6_2nd_window_g3

0x0002,

0xfe00,	// (0x0009f1a9) popup_call6_2nd_window_g

0xd35c,	// (0x0009c705) popup_call6_2nd_window_t1

0x0b67,	// (0x0008ff10) bg_button_pane_cp15

0xd38b,	// (0x0009c734) cell_call6_btn_pane_g1

0xd394,	// (0x0009c73d) cell_call6_btn_pane_t1

0x9780,	// (0x00098b29) listscroll_wgtman_pane_ParamLimits

0x9780,	// (0x00098b29) listscroll_wgtman_pane

0x97a3,	// (0x00098b4c) wgtman_btn_pane_ParamLimits

0x97a3,	// (0x00098b4c) wgtman_btn_pane

0xda8c,	// (0x0009ce35) aid_scroll_copy1

0xd3a3,	// (0x0009c74c) list_wgtman_pane

0x97e6,	// (0x00098b8f) wgtman_btn_pane_g1_ParamLimits

0x97e6,	// (0x00098b8f) wgtman_btn_pane_g1

0x9812,	// (0x00098bbb) wgtman_btn_pane_t1_ParamLimits

0x9812,	// (0x00098bbb) wgtman_btn_pane_t1

0xd3ad,	// (0x0009c756) wgtman_btn_pane_t2_ParamLimits

0xd3ad,	// (0x0009c756) wgtman_btn_pane_t2

0x0001,

0xfe0e,	// (0x0009f1b7) wgtman_btn_pane_t_ParamLimits

0xfe0e,	// (0x0009f1b7) wgtman_btn_pane_t

0xd3c4,	// (0x0009c76d) listrow_wgtman_pane_ParamLimits

0xd3c4,	// (0x0009c76d) listrow_wgtman_pane

0xd3d8,	// (0x0009c781) listrow_wgtman_pane_g1

0x984f,	// (0x00098bf8) listrow_wgtman_pane_g2

0x0001,

0xfe13,	// (0x0009f1bc) listrow_wgtman_pane_g

0xd3e1,	// (0x0009c78a) listrow_wgtman_pane_t1

0xd3ef,	// (0x0009c798) listrow_wgtman_pane_t2

0x0001,

0xfe18,	// (0x0009f1c1) listrow_wgtman_pane_t

0xd3fd,	// (0x0009c7a6) wait_bar_pane_cp09

0xd405,	// (0x0009c7ae) main_calllock_btn_pane

0xd40f,	// (0x0009c7b8) main_calllock_pane_g1

0x0b67,	// (0x0008ff10) bg_button_pane_cp17

0xd41b,	// (0x0009c7c4) main_calllock_btn_pane_g1

0xd424,	// (0x0009c7cd) main_calllock_btn_pane_t1

0x0b67,	// (0x0008ff10) main_dialer3_pane

0x0b67,	// (0x0008ff10) main_fmrd2_pane

0x4ed8,	// (0x00094281) main_fs_bigclock_unlock_btn_pane_g1

0xd43b,	// (0x0009c7e4) main_fs_bigclock_unlock_btn_pane_t1

0x9859,	// (0x00098c02) area_fmrd2_info_pane_ParamLimits

0x9859,	// (0x00098c02) area_fmrd2_info_pane

0x986c,	// (0x00098c15) area_fmrd2_visual_pane_ParamLimits

0x986c,	// (0x00098c15) area_fmrd2_visual_pane

0x987a,	// (0x00098c23) fmrd2_indi_pane_ParamLimits

0x987a,	// (0x00098c23) fmrd2_indi_pane

0x9887,	// (0x00098c30) area_fmrd2_visual_pane_g1

0x988f,	// (0x00098c38) area_fmrd2_visual_pane_t1

0x989f,	// (0x00098c48) area_fmrd2_visual_pane_t2

0x98af,	// (0x00098c58) area_fmrd2_visual_pane_t3

0x0002,

0xfe22,	// (0x0009f1cb) area_fmrd2_visual_pane_t

0x98bf,	// (0x00098c68) area_fmrd2_info_pane_g1

0x98c7,	// (0x00098c70) area_fmrd2_info_pane_t1

0x98d7,	// (0x00098c80) area_fmrd2_info_pane_t2

0x98e7,	// (0x00098c90) area_fmrd2_info_pane_t3

0x98f7,	// (0x00098ca0) area_fmrd2_info_pane_t4

0x0003,

0xfe29,	// (0x0009f1d2) area_fmrd2_info_pane_t

0x9907,	// (0x00098cb0) fmrd2_indi_pane_t1

0x9917,	// (0x00098cc0) fmrd2_indi_pane_t2

0x9927,	// (0x00098cd0) fmrd2_indi_pane_t3

0x0002,

0xfe32,	// (0x0009f1db) fmrd2_indi_pane_t

0xc514,	// (0x0009b8bd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc514,	// (0x0009b8bd) list_single_fs_bigclock_indicator_pane_g5

0xc5ba,	// (0x0009b963) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc5ba,	// (0x0009b963) list_single_fs_bigclock_indicator_pane_t5

0x90fe,	// (0x000984a7) aid_cell_bcale_month_pane_ParamLimits

0x90fe,	// (0x000984a7) aid_cell_bcale_month_pane

0x9110,	// (0x000984b9) bcale_month_pane_ParamLimits

0x9110,	// (0x000984b9) bcale_month_pane

0x9128,	// (0x000984d1) bcale_preview_pane_ParamLimits

0x9128,	// (0x000984d1) bcale_preview_pane

0xd166,	// (0x0009c50f) list_single_fs_bigclock_pane_t1_ParamLimits

0xd180,	// (0x0009c529) list_single_fs_bigclock_pane_t2_ParamLimits

0xd180,	// (0x0009c529) list_single_fs_bigclock_pane_t2

0x0001,

0xfdb9,	// (0x0009f162) list_single_fs_bigclock_pane_t_ParamLimits

0xfdb9,	// (0x0009f162) list_single_fs_bigclock_pane_t

0xd433,	// (0x0009c7dc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe1d,	// (0x0009f1c6) main_fs_bigclock_unlock_btn_pane_g

0x9937,	// (0x00098ce0) aid_dia3_key_size_ParamLimits

0x9937,	// (0x00098ce0) aid_dia3_key_size

0x9946,	// (0x00098cef) aid_dia3_listrow_size_ParamLimits

0x9946,	// (0x00098cef) aid_dia3_listrow_size

0x9954,	// (0x00098cfd) dia3_keypad_fun_pane_ParamLimits

0x9954,	// (0x00098cfd) dia3_keypad_fun_pane

0x9970,	// (0x00098d19) dia3_keypad_num_pane_ParamLimits

0x9970,	// (0x00098d19) dia3_keypad_num_pane

0x9989,	// (0x00098d32) dia3_listscroll_pane_ParamLimits

0x9989,	// (0x00098d32) dia3_listscroll_pane

0x999e,	// (0x00098d47) dia3_numentry_pane_ParamLimits

0x999e,	// (0x00098d47) dia3_numentry_pane

0xd449,	// (0x0009c7f2) dia3_list_pane

0xd454,	// (0x0009c7fd) scroll_pane_cp12

0x0b67,	// (0x0008ff10) bg_dia3_numentry_pane

0xd45f,	// (0x0009c808) dia3_numentry_pane_t1

0x99b1,	// (0x00098d5a) cell_dia3_key_num_pane

0x99b9,	// (0x00098d62) cell_dia3_key0_fun_pane_ParamLimits

0x99b9,	// (0x00098d62) cell_dia3_key0_fun_pane

0x99cd,	// (0x00098d76) cell_dia3_key1_fun_pane_ParamLimits

0x99cd,	// (0x00098d76) cell_dia3_key1_fun_pane

0x99e5,	// (0x00098d8e) dia3_listrow_pane

0xc20c,	// (0x0009b5b5) bg_dia3_numentry_pane_g1

0x0b67,	// (0x0008ff10) bg_button_pane_cp21

0xd46e,	// (0x0009c817) cell_dia3_key_num_pane_t1

0xd47c,	// (0x0009c825) cell_dia3_key_num_pane_t2

0xd48b,	// (0x0009c834) cell_dia3_key_num_pane_t3

0xd49a,	// (0x0009c843) cell_dia3_key_num_pane_t4

0x0003,

0xfe39,	// (0x0009f1e2) cell_dia3_key_num_pane_t

0x0b67,	// (0x0008ff10) bg_button_pane_cp19

0x99f7,	// (0x00098da0) cell_dia3_key0_fun_pane_g1

0x0b67,	// (0x0008ff10) bg_button_pane_cp20

0x99ff,	// (0x00098da8) cell_dia3_key1_fun_pane_g1

0x9a07,	// (0x00098db0) area_left_week_number_pane

0x9a10,	// (0x00098db9) area_top_day_name_pane

0x9a19,	// (0x00098dc2) frame_month_view_pane

0x9a25,	// (0x00098dce) grid_month_view_pane

0x9a2f,	// (0x00098dd8) cell_top_day_name_pane_ParamLimits

0x9a2f,	// (0x00098dd8) cell_top_day_name_pane

0x9a49,	// (0x00098df2) cell_area_left_week_number_pane_ParamLimits

0x9a49,	// (0x00098df2) cell_area_left_week_number_pane

0x9a5f,	// (0x00098e08) cell_month_view_pane_ParamLimits

0x9a5f,	// (0x00098e08) cell_month_view_pane

0xd4a9,	// (0x0009c852) frm_month_g1

0x9a7e,	// (0x00098e27) frm_month_g2

0x9a88,	// (0x00098e31) frm_month_g3

0x9a92,	// (0x00098e3b) frm_month_g4

0x9a9c,	// (0x00098e45) frm_month_g5

0x9aa6,	// (0x00098e4f) frm_month_g6

0x9ab2,	// (0x00098e5b) frm_month_g7

0xd4b2,	// (0x0009c85b) frm_month_g8

0x9abe,	// (0x00098e67) frm_month_g9

0x9ac7,	// (0x00098e70) frm_month_g10

0x9ad0,	// (0x00098e79) frm_month_g11

0x9ad9,	// (0x00098e82) frm_month_g12

0x9ae2,	// (0x00098e8b) frm_month_g13

0x9aeb,	// (0x00098e94) frm_month_g14

0x9af4,	// (0x00098e9d) frm_month_g15

0x9aff,	// (0x00098ea8) frm_month_g16

0x000f,

0xfe42,	// (0x0009f1eb) frm_month_g

0x9b0a,	// (0x00098eb3) cell_top_day_name_pane_t1

0x9b19,	// (0x00098ec2) cell_area_left_week_number_pane_g1

0x9b0a,	// (0x00098eb3) cell_area_left_week_number_pane_t1

0x4ed8,	// (0x00094281) cell_month_view_pane_g1

0x9b21,	// (0x00098eca) cell_month_view_pane_t1

0x0b67,	// (0x0008ff10) main_fps_pane

0xc846,	// (0x0009bbef) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc846,	// (0x0009bbef) cmail_ddmenu_btn02_pane_cp1

0xc862,	// (0x0009bc0b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc862,	// (0x0009bc0b) cmail_ddmenu_btn02_pane_cp2

0x93c1,	// (0x0009876a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x93c1,	// (0x0009876a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6a,	// (0x0009f113) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6a,	// (0x0009f113) cmail_ddmenu_btn02_pane_g

0x93df,	// (0x00098788) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x93df,	// (0x00098788) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd6f,	// (0x0009f118) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd6f,	// (0x0009f118) cmail_ddmenu_btn02_pane_t

0x9b30,	// (0x00098ed9) fps_text_pane_ParamLimits

0x9b30,	// (0x00098ed9) fps_text_pane

0x9b47,	// (0x00098ef0) main_fps_pane_g1_ParamLimits

0x9b47,	// (0x00098ef0) main_fps_pane_g1

0x9b5f,	// (0x00098f08) wait_bar_pane_cp010_ParamLimits

0x9b5f,	// (0x00098f08) wait_bar_pane_cp010

0x9b72,	// (0x00098f1b) fps_text_pane_t1_ParamLimits

0x9b72,	// (0x00098f1b) fps_text_pane_t1

0xb4be,	// (0x0009a867) cam4_image_uncrop_pane_g1

0xb4c7,	// (0x0009a870) cam4_image_uncrop_pane_g2

0x69ee,	// (0x00095d97) cam4_image_uncrop_pane_g3

0x69f7,	// (0x00095da0) cam4_image_uncrop_pane_g4

0x0003,

0xf844,	// (0x0009ebed) cam4_image_uncrop_pane_g

0x99e5,	// (0x00098d8e) dia3_listrow_pane_ParamLimits

0x0b67,	// (0x0008ff10) main_phob2_pane

0x8efe,	// (0x000982a7) cell_tport_appsw_pane_cp02_ParamLimits

0x8efe,	// (0x000982a7) cell_tport_appsw_pane_cp02

0x8f12,	// (0x000982bb) cell_tport_appsw_pane_cp03_ParamLimits

0x8f12,	// (0x000982bb) cell_tport_appsw_pane_cp03

0x0b67,	// (0x0008ff10) phob2_contact_card_pane

0x0b67,	// (0x0008ff10) phob2_listscroll_pane

0xd4bb,	// (0x0009c864) phob2_list_pane

0xd4c3,	// (0x0009c86c) scroll_pane_cp034

0x9b8a,	// (0x00098f33) phob2_cc_data_pane_ParamLimits

0x9b8a,	// (0x00098f33) phob2_cc_data_pane

0x9bab,	// (0x00098f54) phob2_cc_listscroll_pane_ParamLimits

0x9bab,	// (0x00098f54) phob2_cc_listscroll_pane

0x9bcd,	// (0x00098f76) list_double_large_graphic_phob2_pane_ParamLimits

0x9bcd,	// (0x00098f76) list_double_large_graphic_phob2_pane

0x9be2,	// (0x00098f8b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9be2,	// (0x00098f8b) list_double_large_graphic_phob2_pane_g1

0x9bef,	// (0x00098f98) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9bef,	// (0x00098f98) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe63,	// (0x0009f20c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe63,	// (0x0009f20c) list_double_large_graphic_phob2_pane_g

0x9bfb,	// (0x00098fa4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9bfb,	// (0x00098fa4) list_double_large_graphic_phob2_pane_t1

0x9c10,	// (0x00098fb9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9c10,	// (0x00098fb9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe68,	// (0x0009f211) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe68,	// (0x0009f211) list_double_large_graphic_phob2_pane_t

0x0b67,	// (0x0008ff10) list_highlight_pane_cp024

0xd4cb,	// (0x0009c874) phob2_cc_button_pane

0x9c22,	// (0x00098fcb) phob2_cc_data_pane_g1_ParamLimits

0x9c22,	// (0x00098fcb) phob2_cc_data_pane_g1

0x9c38,	// (0x00098fe1) phob2_cc_data_pane_g2_ParamLimits

0x9c38,	// (0x00098fe1) phob2_cc_data_pane_g2

0x0001,

0xfe6d,	// (0x0009f216) phob2_cc_data_pane_g_ParamLimits

0xfe6d,	// (0x0009f216) phob2_cc_data_pane_g

0x9c4c,	// (0x00098ff5) phob2_cc_data_pane_t1_ParamLimits

0x9c4c,	// (0x00098ff5) phob2_cc_data_pane_t1

0x9c66,	// (0x0009900f) phob2_cc_data_pane_t2_ParamLimits

0x9c66,	// (0x0009900f) phob2_cc_data_pane_t2

0x9c80,	// (0x00099029) phob2_cc_data_pane_t3_ParamLimits

0x9c80,	// (0x00099029) phob2_cc_data_pane_t3

0x0002,

0xfe72,	// (0x0009f21b) phob2_cc_data_pane_t_ParamLimits

0xfe72,	// (0x0009f21b) phob2_cc_data_pane_t

0xd4d3,	// (0x0009c87c) phob2_cc_list_pane_ParamLimits

0xd4d3,	// (0x0009c87c) phob2_cc_list_pane

0xb84f,	// (0x0009abf8) scroll_pane_cp035_ParamLimits

0xb84f,	// (0x0009abf8) scroll_pane_cp035

0x0dea,	// (0x00090193) bg_button_pane_cp033

0xd4df,	// (0x0009c888) phob2_cc_button_pane_g1

0xd4eb,	// (0x0009c894) phob2_cc_button_pane_t1

0xd500,	// (0x0009c8a9) phob2_cc_button_pane_t2

0x0001,

0xfe79,	// (0x0009f222) phob2_cc_button_pane_t

0x9c9a,	// (0x00099043) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c9a,	// (0x00099043) list_double_large_graphic_phob2_cc_pane

0x9caf,	// (0x00099058) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9caf,	// (0x00099058) list_double_large_graphic_phob2_cc_pane_g1

0x9cbb,	// (0x00099064) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9cbb,	// (0x00099064) list_double_large_graphic_phob2_cc_pane_g2

0x9cc7,	// (0x00099070) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9cc7,	// (0x00099070) list_double_large_graphic_phob2_cc_pane_g3

0x9cd3,	// (0x0009907c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9cd3,	// (0x0009907c) list_double_large_graphic_phob2_cc_pane_g4

0x9cdf,	// (0x00099088) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9cdf,	// (0x00099088) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe7e,	// (0x0009f227) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe7e,	// (0x0009f227) list_double_large_graphic_phob2_cc_pane_g

0x9ceb,	// (0x00099094) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ceb,	// (0x00099094) list_double_large_graphic_phob2_cc_pane_t1

0x9d14,	// (0x000990bd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d14,	// (0x000990bd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe89,	// (0x0009f232) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe89,	// (0x0009f232) list_double_large_graphic_phob2_cc_pane_t

0xd512,	// (0x0009c8bb) list_highlight_pane_cp025_ParamLimits

0xd512,	// (0x0009c8bb) list_highlight_pane_cp025

0x0dea,	// (0x00090193) bg_button_pane_cp033_ParamLimits

0xd4df,	// (0x0009c888) phob2_cc_button_pane_g1_ParamLimits

0xd4eb,	// (0x0009c894) phob2_cc_button_pane_t1_ParamLimits

0xd500,	// (0x0009c8a9) phob2_cc_button_pane_t2_ParamLimits

0xfe79,	// (0x0009f222) phob2_cc_button_pane_t_ParamLimits

0x0df8,	// (0x000901a1) popup_wgtman_window

0xb65e,	// (0x0009aa07) scroll_pane_cp038

0x97c8,	// (0x00098b71) wgtman_btn_pane_cp_01_ParamLimits

0x97c8,	// (0x00098b71) wgtman_btn_pane_cp_01

0xd520,	// (0x0009c8c9) wgtman_content_pane

0xd529,	// (0x0009c8d2) wgtman_heading_pane

0x0b67,	// (0x0008ff10) bg_heading_pane_cp02

0xd532,	// (0x0009c8db) wgtman_heading_pane_g1

0xd53a,	// (0x0009c8e3) wgtman_heading_pane_t1

0xd548,	// (0x0009c8f1) scroll_pane_cp036

0xd550,	// (0x0009c8f9) wgtman_list_pane

0xc69c,	// (0x0009ba45) wgtman_list_pane_t1_ParamLimits

0xc69c,	// (0x0009ba45) wgtman_list_pane_t1

0xd7b0,	// (0x0009cb59) cam4_grid_pane

0x7704,	// (0x00096aad) bg_button_pane_cp015_ParamLimits

0x7718,	// (0x00096ac1) bg_button_pane_cp016_ParamLimits

0x772b,	// (0x00096ad4) bg_button_pane_cp017_ParamLimits

0x7783,	// (0x00096b2c) popup_vitu2_query_window_g3_ParamLimits

0x7783,	// (0x00096b2c) popup_vitu2_query_window_g3

0x7840,	// (0x00096be9) popup_vitu2_query_window_t6_ParamLimits

0x7840,	// (0x00096be9) popup_vitu2_query_window_t6

0x786b,	// (0x00096c14) popup_vitu2_query_window_t7_ParamLimits

0x786b,	// (0x00096c14) popup_vitu2_query_window_t7

0xb4be,	// (0x0009a867) cam4_grid_pane_g1

0xb4c7,	// (0x0009a870) cam4_grid_pane_g2

0xd558,	// (0x0009c901) cam4_grid_pane_g3

0xd561,	// (0x0009c90a) cam4_grid_pane_g4

0x0003,

0xfe8e,	// (0x0009f237) cam4_grid_pane_g

0x1c5b,	// (0x00091004) aid_placing_vt_slider_lsc_ParamLimits

0x1f4b,	// (0x000912f4) vidtel_button_pane_ParamLimits

0x1f4b,	// (0x000912f4) vidtel_button_pane

0x0b67,	// (0x0008ff10) bg_button_pane_cp034

0x9d3d,	// (0x000990e6) vidtel_button_pane_g1

0xd56c,	// (0x0009c915) vidtel_button_pane_t1

0xb76e,	// (0x0009ab17) aid_size_vtel_slider_touch

0xb84f,	// (0x0009abf8) scroll_pane_cp039

0xc24a,	// (0x0009b5f3) ncim_query_button_pane_cp01_ParamLimits

0xc269,	// (0x0009b612) ncimui_query_pane_g1_ParamLimits

0x0dea,	// (0x00090193) input_focus_pane_cp012_ParamLimits

0xc28e,	// (0x0009b637) ncim_query_entry_pane_t1_ParamLimits

0xb84f,	// (0x0009abf8) scroll_pane_cp039_ParamLimits
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
