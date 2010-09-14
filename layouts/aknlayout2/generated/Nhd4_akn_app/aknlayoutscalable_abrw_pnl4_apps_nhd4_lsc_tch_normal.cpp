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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00025863 };

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
0x244e,	// (0x00027cb1) Screen

0x245a,	// (0x00027cbd) application_window

0x2470,	// (0x00027cd3) area_bottom_pane_ParamLimits

0x2470,	// (0x00027cd3) area_bottom_pane

0x1005,	// (0x00026868) area_top_pane_ParamLimits

0x1005,	// (0x00026868) area_top_pane

0xb454,	// (0x00030cb7) call_video_uplink_pane_ParamLimits

0xb454,	// (0x00030cb7) call_video_uplink_pane

0x1093,	// (0x000268f6) main_pane_ParamLimits

0x1093,	// (0x000268f6) main_pane

0xbd53,	// (0x000315b6) context_pane

0x6b37,	// (0x0002c39a) navi_pane

0x6b69,	// (0x0002c3cc) popup_cale_events_window_ParamLimits

0x6b69,	// (0x0002c3cc) popup_cale_events_window

0xbd66,	// (0x000315c9) popup_mup_playback_window

0x6b81,	// (0x0002c3e4) signal_pane

0x2d61,	// (0x000285c4) main_browser_pane

0x34bd,	// (0x00028d20) main_burst_pane

0x1490,	// (0x00026cf3) main_calc_pane

0xbcf3,	// (0x00031556) main_cale_day_pane

0x14a4,	// (0x00026d07) main_cale_month_pane

0xbcf3,	// (0x00031556) main_cale_week_pane

0x34bd,	// (0x00028d20) main_call_pane

0x2921,	// (0x00028184) main_call_poc_pane

0x34bd,	// (0x00028d20) main_camera_pane

0x34bd,	// (0x00028d20) main_chi_dic_pane

0x4d9d,	// (0x0002a600) main_clock_pane

0x2921,	// (0x00028184) main_fmradio_pane

0x34bd,	// (0x00028d20) main_graph_messa_pane

0x2921,	// (0x00028184) main_help_pane

0x2d61,	// (0x000285c4) main_im_pane

0x2b7c,	// (0x000283df) main_image_pane_ParamLimits

0x2b7c,	// (0x000283df) main_image_pane

0x2921,	// (0x00028184) main_location2_pane

0x34bd,	// (0x00028d20) main_location_pane

0x2b7c,	// (0x000283df) main_messa_pane

0x2921,	// (0x00028184) main_mp2_pane

0x34bd,	// (0x00028d20) main_mp_pane

0x2921,	// (0x00028184) main_msg_pane

0x2921,	// (0x00028184) main_mup_eq_pane

0x2921,	// (0x00028184) main_mup_pane

0x2d61,	// (0x000285c4) main_notes_pane

0x2921,	// (0x00028184) main_pec_pane

0x2921,	// (0x00028184) main_phob_pane

0x2921,	// (0x00028184) main_pinb_pane

0x2921,	// (0x00028184) main_postcard_pane

0x2921,	// (0x00028184) main_qdial_pane

0x34bd,	// (0x00028d20) main_skin_pane

0x2921,	// (0x00028184) main_smil2_pane

0x34bd,	// (0x00028d20) main_smil_pane

0x34bd,	// (0x00028d20) main_video_pane

0x34bd,	// (0x00028d20) main_video_tele_pane

0x2b7c,	// (0x000283df) main_viewer_pane_ParamLimits

0x2b7c,	// (0x000283df) main_viewer_pane

0x34bd,	// (0x00028d20) main_vorec_pane

0x14f6,	// (0x00026d59) popup_blid_sat_info_window_ParamLimits

0x14f6,	// (0x00026d59) popup_blid_sat_info_window

0x154e,	// (0x00026db1) popup_dyc_status_message_window_ParamLimits

0x154e,	// (0x00026db1) popup_dyc_status_message_window

0x1566,	// (0x00026dc9) popup_grid_large_graphic_window_ParamLimits

0x1566,	// (0x00026dc9) popup_grid_large_graphic_window

0x1616,	// (0x00026e79) popup_loc_request_window_ParamLimits

0x1616,	// (0x00026e79) popup_loc_request_window

0x1712,	// (0x00026f75) popup_wml_address_window_ParamLimits

0x1712,	// (0x00026f75) popup_wml_address_window

0x697b,	// (0x0002c1de) call_muted_g1

0x5db7,	// (0x0002b61a) popup_call_audio_conf_window_ParamLimits

0x5db7,	// (0x0002b61a) popup_call_audio_conf_window

0x698f,	// (0x0002c1f2) popup_call_audio_first_window_ParamLimits

0x698f,	// (0x0002c1f2) popup_call_audio_first_window

0x6a05,	// (0x0002c268) popup_call_audio_in_window_ParamLimits

0x6a05,	// (0x0002c268) popup_call_audio_in_window

0x6a41,	// (0x0002c2a4) popup_call_audio_out_window_ParamLimits

0x6a41,	// (0x0002c2a4) popup_call_audio_out_window

0x6a7b,	// (0x0002c2de) popup_call_audio_second_window_ParamLimits

0x6a7b,	// (0x0002c2de) popup_call_audio_second_window

0x6ad1,	// (0x0002c334) popup_call_audio_wait_window_ParamLimits

0x6ad1,	// (0x0002c334) popup_call_audio_wait_window

0x6b06,	// (0x0002c369) popup_number_entry_window_ParamLimits

0x6b06,	// (0x0002c369) popup_number_entry_window

0x24b5,	// (0x00027d18) bg_popup_call_pane_cp05_ParamLimits

0x24b5,	// (0x00027d18) bg_popup_call_pane_cp05

0x24d5,	// (0x00027d38) popup_number_entry_window_t1

0x24e8,	// (0x00027d4b) popup_number_entry_window_t2

0x24fa,	// (0x00027d5d) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000348ce) popup_number_entry_window_t

0x2541,	// (0x00027da4) text_title_cp2

0x2554,	// (0x00027db7) bg_popup_call_pane_cp_ParamLimits

0x2554,	// (0x00027db7) bg_popup_call_pane_cp

0x2562,	// (0x00027dc5) call_thumbnail_pane

0x256a,	// (0x00027dcd) popup_call_audio_in_window_g1_ParamLimits

0x256a,	// (0x00027dcd) popup_call_audio_in_window_g1

0x2576,	// (0x00027dd9) popup_call_audio_in_window_g2_ParamLimits

0x2576,	// (0x00027dd9) popup_call_audio_in_window_g2

0x2582,	// (0x00027de5) popup_call_audio_in_window_g3_ParamLimits

0x2582,	// (0x00027de5) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000348d7) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000348d7) popup_call_audio_in_window_g

0x258e,	// (0x00027df1) popup_call_audio_in_window_t1_ParamLimits

0x258e,	// (0x00027df1) popup_call_audio_in_window_t1

0x25aa,	// (0x00027e0d) popup_call_audio_in_window_t2_ParamLimits

0x25aa,	// (0x00027e0d) popup_call_audio_in_window_t2

0x25c6,	// (0x00027e29) popup_call_audio_in_window_t3_ParamLimits

0x25c6,	// (0x00027e29) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000348de) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000348de) popup_call_audio_in_window_t

0x2554,	// (0x00027db7) bg_popup_call_pane_cp01_ParamLimits

0x2554,	// (0x00027db7) bg_popup_call_pane_cp01

0x2562,	// (0x00027dc5) call_thumbnail_pane_cp02

0x25d9,	// (0x00027e3c) call_type_pane_cp022

0x25e1,	// (0x00027e44) popup_call_audio_out_window_g1_ParamLimits

0x25e1,	// (0x00027e44) popup_call_audio_out_window_g1

0x25f3,	// (0x00027e56) popup_call_audio_out_window_g2_ParamLimits

0x25f3,	// (0x00027e56) popup_call_audio_out_window_g2

0x25ff,	// (0x00027e62) popup_call_audio_out_window_g3_ParamLimits

0x25ff,	// (0x00027e62) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000348e5) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000348e5) popup_call_audio_out_window_g

0x2611,	// (0x00027e74) popup_call_audio_out_window_t1_ParamLimits

0x2611,	// (0x00027e74) popup_call_audio_out_window_t1

0x2629,	// (0x00027e8c) popup_call_audio_out_window_t2_ParamLimits

0x2629,	// (0x00027e8c) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000348ec) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000348ec) popup_call_audio_out_window_t

0x263e,	// (0x00027ea1) bg_popup_call_pane_ParamLimits

0x263e,	// (0x00027ea1) bg_popup_call_pane

0x26c2,	// (0x00027f25) call_thumbnail_pane_cp_ParamLimits

0x26c2,	// (0x00027f25) call_thumbnail_pane_cp

0x26e6,	// (0x00027f49) call_type_pane_cp01_ParamLimits

0x26e6,	// (0x00027f49) call_type_pane_cp01

0x272a,	// (0x00027f8d) popup_call_audio_first_window_g1_ParamLimits

0x272a,	// (0x00027f8d) popup_call_audio_first_window_g1

0x2776,	// (0x00027fd9) popup_call_audio_first_window_g2_ParamLimits

0x2776,	// (0x00027fd9) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000348f1) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000348f1) popup_call_audio_first_window_g

0x27ba,	// (0x0002801d) popup_call_audio_first_window_t1_ParamLimits

0x27ba,	// (0x0002801d) popup_call_audio_first_window_t1

0x2866,	// (0x000280c9) popup_call_audio_first_window_t4_ParamLimits

0x2866,	// (0x000280c9) popup_call_audio_first_window_t4

0x28f2,	// (0x00028155) popup_call_audio_first_window_t5_ParamLimits

0x28f2,	// (0x00028155) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000348f6) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000348f6) popup_call_audio_first_window_t

0x2921,	// (0x00028184) bg_popup_call_pane_cp02

0x292b,	// (0x0002818e) call_type_pane_cp023

0x2933,	// (0x00028196) popup_call_audio_wait_window_g1

0x293b,	// (0x0002819e) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000348fd) popup_call_audio_wait_window_g

0x2943,	// (0x000281a6) popup_call_audio_wait_window_t3

0x2951,	// (0x000281b4) bg_popup_call_pane_cp03_ParamLimits

0x2951,	// (0x000281b4) bg_popup_call_pane_cp03

0x29b1,	// (0x00028214) call_thumbnail_pane_cp011_ParamLimits

0x29b1,	// (0x00028214) call_thumbnail_pane_cp011

0x29bd,	// (0x00028220) call_type_pane_cp034_ParamLimits

0x29bd,	// (0x00028220) call_type_pane_cp034

0x29f9,	// (0x0002825c) popup_call_audio_second_window_g1_ParamLimits

0x29f9,	// (0x0002825c) popup_call_audio_second_window_g1

0x2a35,	// (0x00028298) popup_call_audio_second_window_g2_ParamLimits

0x2a35,	// (0x00028298) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00034902) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00034902) popup_call_audio_second_window_g

0x2a71,	// (0x000282d4) popup_call_audio_second_window_t1_ParamLimits

0x2a71,	// (0x000282d4) popup_call_audio_second_window_t1

0x2af2,	// (0x00028355) popup_call_audio_second_window_t2_ParamLimits

0x2af2,	// (0x00028355) popup_call_audio_second_window_t2

0x2b28,	// (0x0002838b) popup_call_audio_second_window_t3_ParamLimits

0x2b28,	// (0x0002838b) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00034907) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00034907) popup_call_audio_second_window_t

0x2921,	// (0x00028184) bg_popup_call_pane_cp04

0x2b5e,	// (0x000283c1) list_conf_pane

0x2b66,	// (0x000283c9) popup_call_audio_conf_window_t1

0x2b74,	// (0x000283d7) call_thumbnail_pane_g1

0x2b7c,	// (0x000283df) bg_pinb_pane_ParamLimits

0x2b7c,	// (0x000283df) bg_pinb_pane

0x2b8a,	// (0x000283ed) find_pinb_pane

0x2b7c,	// (0x000283df) listscroll_pinb_pane_ParamLimits

0x2b7c,	// (0x000283df) listscroll_pinb_pane

0x2b94,	// (0x000283f7) pinb_bg_pane_g1

0x2b94,	// (0x000283f7) pinb_bg_pane_g2

0x2b94,	// (0x000283f7) pinb_bg_pane_g3

0x2b94,	// (0x000283f7) pinb_bg_pane_g4

0x2b94,	// (0x000283f7) pinb_bg_pane_g5

0x2b94,	// (0x000283f7) pinb_bg_pane_g6

0x2b94,	// (0x000283f7) pinb_bg_pane_g7

0x2b94,	// (0x000283f7) pinb_bg_pane_g8

0x2b94,	// (0x000283f7) pinb_bg_pane_g9

0x2b94,	// (0x000283f7) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0003490e) pinb_bg_pane_g

0x2466,	// (0x00027cc9) grid_pinb_pane

0x2466,	// (0x00027cc9) list_pinb_pane

0x2b9e,	// (0x00028401) scroll_pane_cp01_ParamLimits

0x2b9e,	// (0x00028401) scroll_pane_cp01

0x2bac,	// (0x0002840f) find_pinb_pane_g1_ParamLimits

0x2bac,	// (0x0002840f) find_pinb_pane_g1

0x2bc4,	// (0x00028427) find_pinb_pane_t1

0x2bd6,	// (0x00028439) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00034928) find_pinb_pane_t

0x2beb,	// (0x0002844e) input_focus_pane_cp01_ParamLimits

0x2beb,	// (0x0002844e) input_focus_pane_cp01

0x2bf7,	// (0x0002845a) cell_pinb_pane_ParamLimits

0x2bf7,	// (0x0002845a) cell_pinb_pane

0x2c05,	// (0x00028468) cell_pinb_pane_g1_ParamLimits

0x2c05,	// (0x00028468) cell_pinb_pane_g1

0x2c13,	// (0x00028476) cell_pinb_pane_g2_ParamLimits

0x2c13,	// (0x00028476) cell_pinb_pane_g2

0x2c13,	// (0x00028476) cell_pinb_pane_g3_ParamLimits

0x2c13,	// (0x00028476) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0003492d) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0003492d) cell_pinb_pane_g

0x2921,	// (0x00028184) grid_highlight_pane_cp01

0x2bf7,	// (0x0002845a) list_pinb_item_pane_ParamLimits

0x2bf7,	// (0x0002845a) list_pinb_item_pane

0x2466,	// (0x00027cc9) list_highlight_pane_cp02

0x2c21,	// (0x00028484) list_pinb_item_pane_g1_ParamLimits

0x2c21,	// (0x00028484) list_pinb_item_pane_g1

0x2c13,	// (0x00028476) list_pinb_item_pane_g2_ParamLimits

0x2c13,	// (0x00028476) list_pinb_item_pane_g2

0x2c05,	// (0x00028468) list_pinb_item_pane_g3_ParamLimits

0x2c05,	// (0x00028468) list_pinb_item_pane_g3

0x2c13,	// (0x00028476) list_pinb_item_pane_g4_ParamLimits

0x2c13,	// (0x00028476) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00034934) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00034934) list_pinb_item_pane_g

0x2c2f,	// (0x00028492) list_pinb_item_pane_t1_ParamLimits

0x2c2f,	// (0x00028492) list_pinb_item_pane_t1

0x122d,	// (0x00026a90) calc_display_pane

0x1252,	// (0x00026ab5) calc_paper_pane

0x1275,	// (0x00026ad8) grid_calc_pane

0x2921,	// (0x00028184) bg_list_pane_cp01

0x2c43,	// (0x000284a6) clock_g1

0x2c4b,	// (0x000284ae) clock_g2

0x0001,

0xf0da,	// (0x0003493d) clock_g

0x2c53,	// (0x000284b6) clock_t1_ParamLimits

0x2c53,	// (0x000284b6) clock_t1

0x2c68,	// (0x000284cb) clock_t2_ParamLimits

0x2c68,	// (0x000284cb) clock_t2

0x2c7a,	// (0x000284dd) clock_t3_ParamLimits

0x2c7a,	// (0x000284dd) clock_t3

0x2c8c,	// (0x000284ef) clock_t4_ParamLimits

0x2c8c,	// (0x000284ef) clock_t4

0x2c9e,	// (0x00028501) clock_t5_ParamLimits

0x2c9e,	// (0x00028501) clock_t5

0x2cb3,	// (0x00028516) clock_t6_ParamLimits

0x2cb3,	// (0x00028516) clock_t6

0x2cc5,	// (0x00028528) clock_t7_ParamLimits

0x2cc5,	// (0x00028528) clock_t7

0x2cd7,	// (0x0002853a) clock_t8_ParamLimits

0x2cd7,	// (0x0002853a) clock_t8

0x2ceb,	// (0x0002854e) clock_t9_ParamLimits

0x2ceb,	// (0x0002854e) clock_t9

0x0008,

0xf0df,	// (0x00034942) clock_t_ParamLimits

0xf0df,	// (0x00034942) clock_t

0x2cff,	// (0x00028562) popup_clock_analogue_window_cp02

0x2cff,	// (0x00028562) popup_clock_digital_window_cp01

0x2921,	// (0x00028184) listscroll_help_pane

0x2921,	// (0x00028184) phob_pre_status_pane

0x2d07,	// (0x0002856a) grid_qdial_pane

0x2d11,	// (0x00028574) listscroll_mce_pane

0x2b7c,	// (0x000283df) bg_notes_pane

0x2d2b,	// (0x0002858e) list_notes_pane

0x2d39,	// (0x0002859c) scroll_pane_cp06

0x2d4d,	// (0x000285b0) bg_calc_paper_pane

0xb492,	// (0x00030cf5) list_calc_pane

0x2d61,	// (0x000285c4) bg_calc_display_pane

0x12a3,	// (0x00026b06) calc_display_pane_t1

0x12b5,	// (0x00026b18) calc_display_pane_t2

0xb4ac,	// (0x00030d0f) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00034955) calc_display_pane_t

0x12c7,	// (0x00026b2a) cell_calc_pane_ParamLimits

0x12c7,	// (0x00026b2a) cell_calc_pane

0x2d6d,	// (0x000285d0) bg_calc_paper_pane_g1

0x2d79,	// (0x000285dc) bg_calc_paper_pane_g2

0x2d85,	// (0x000285e8) bg_calc_paper_pane_g3

0x2d91,	// (0x000285f4) bg_calc_paper_pane_g4

0x2d9d,	// (0x00028600) bg_calc_paper_pane_g5

0x2da9,	// (0x0002860c) bg_calc_paper_pane_g6

0x2db8,	// (0x0002861b) bg_calc_paper_pane_g7

0x2dc7,	// (0x0002862a) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0003495c) bg_calc_paper_pane_g

0x2dda,	// (0x0002863d) calc_bg_paper_pane_g9

0x2ded,	// (0x00028650) list_calc_item_pane_ParamLimits

0x2ded,	// (0x00028650) list_calc_item_pane

0x2e02,	// (0x00028665) list_calc_item_pane_g1

0xb4be,	// (0x00030d21) list_calc_item_pane_t1_ParamLimits

0xb4be,	// (0x00030d21) list_calc_item_pane_t1

0x12fc,	// (0x00026b5f) list_calc_item_pane_t2_ParamLimits

0x12fc,	// (0x00026b5f) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0003496d) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0003496d) list_calc_item_pane_t

0x2b94,	// (0x000283f7) cell_calc_pane_g1

0x2e0f,	// (0x00028672) grid_highlight_pane_cp02

0xb4d0,	// (0x00030d33) bg_calc_display_pane_g1

0x132e,	// (0x00026b91) bg_calc_display_pane_g2

0x2e31,	// (0x00028694) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00034977) bg_calc_display_pane_g

0x1338,	// (0x00026b9b) cell_qdial_pane_ParamLimits

0x1338,	// (0x00026b9b) cell_qdial_pane

0x2e3a,	// (0x0002869d) cell_qdial_pane_g1_ParamLimits

0x2e3a,	// (0x0002869d) cell_qdial_pane_g1

0x2e50,	// (0x000286b3) cell_qdial_pane_g2_ParamLimits

0x2e50,	// (0x000286b3) cell_qdial_pane_g2

0x2e60,	// (0x000286c3) cell_qdial_pane_g3_ParamLimits

0x2e60,	// (0x000286c3) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0003497e) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0003497e) cell_qdial_pane_g

0x2e82,	// (0x000286e5) cell_qdial_pane_t1_ParamLimits

0x2e82,	// (0x000286e5) cell_qdial_pane_t1

0x2e9a,	// (0x000286fd) cell_qdial_pane_t2_ParamLimits

0x2e9a,	// (0x000286fd) cell_qdial_pane_t2

0x2ead,	// (0x00028710) cell_qdial_pane_t3_ParamLimits

0x2ead,	// (0x00028710) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00034987) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00034987) cell_qdial_pane_t

0x2921,	// (0x00028184) grid_highlight_pane_cp04

0x2ec0,	// (0x00028723) thumbnail_qdial_pane_ParamLimits

0x2ec0,	// (0x00028723) thumbnail_qdial_pane

0x2f1c,	// (0x0002877f) list_help_pane

0x2f25,	// (0x00028788) scroll_pane_cp02

0x2f2e,	// (0x00028791) help_list_pane_t1_ParamLimits

0x2f2e,	// (0x00028791) help_list_pane_t1

0xb4d9,	// (0x00030d3c) bg_notes_pane_g2

0xb4e1,	// (0x00030d44) bg_notes_pane_g3

0xb4e9,	// (0x00030d4c) notes_bg_pane_g1

0xb4f1,	// (0x00030d54) notes_bg_pane_g4

0xb4f9,	// (0x00030d5c) notes_bg_pane_g5

0xb501,	// (0x00030d64) notes_bg_pane_g6

0xb509,	// (0x00030d6c) notes_bg_pane_g7

0xb511,	// (0x00030d74) notes_bg_pane_g8

0xb519,	// (0x00030d7c) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000349a5) notes_bg_pane_g

0x2f4d,	// (0x000287b0) list_notes_text_pane_ParamLimits

0x2f4d,	// (0x000287b0) list_notes_text_pane

0x2f63,	// (0x000287c6) list_notes_text_pane_g1

0x2f6c,	// (0x000287cf) list_notes_text_pane_t1

0x2f8b,	// (0x000287ee) listscroll_cale_week_pane

0x2fc0,	// (0x00028823) bg_cale_heading_pane

0x2fd8,	// (0x0002883b) bg_cale_pane_cp01

0x2ff5,	// (0x00028858) cale_week_corner_pane

0x3014,	// (0x00028877) cale_week_day_heading_pane

0x3031,	// (0x00028894) cale_week_scroll_pane_g1

0x3044,	// (0x000288a7) cale_week_scroll_pane_g2

0x305c,	// (0x000288bf) cale_week_scroll_pane_g3

0x3074,	// (0x000288d7) cale_week_scroll_pane_g4

0x308c,	// (0x000288ef) cale_week_scroll_pane_g5

0x30ac,	// (0x0002890f) cale_week_scroll_pane_g6

0x30cc,	// (0x0002892f) cale_week_scroll_pane_g7

0x30ec,	// (0x0002894f) cale_week_scroll_pane_g8

0x3110,	// (0x00028973) cale_week_scroll_pane_g9

0x3128,	// (0x0002898b) cale_week_scroll_pane_g10

0x3140,	// (0x000289a3) cale_week_scroll_pane_g11

0x3158,	// (0x000289bb) cale_week_scroll_pane_g12

0x3170,	// (0x000289d3) cale_week_scroll_pane_g13

0x3170,	// (0x000289d3) cale_week_scroll_pane_g14

0x3170,	// (0x000289d3) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000349b4) cale_week_scroll_pane_g

0x31ac,	// (0x00028a0f) cale_week_time_pane

0x31d0,	// (0x00028a33) grid_cale_week_pane

0x3208,	// (0x00028a6b) scroll_pane_cp08

0x3225,	// (0x00028a88) cell_cale_week_pane_ParamLimits

0x3225,	// (0x00028a88) cell_cale_week_pane

0x32b3,	// (0x00028b16) cale_week_day_heading_pane_t1

0x32dd,	// (0x00028b40) cale_week_day_heading_pane_t2

0x330c,	// (0x00028b6f) cale_week_day_heading_pane_t3

0x333b,	// (0x00028b9e) cale_week_day_heading_pane_t4

0x336a,	// (0x00028bcd) cale_week_day_heading_pane_t5

0x33a1,	// (0x00028c04) cale_week_day_heading_pane_t6

0x33d8,	// (0x00028c3b) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000349d5) cale_week_day_heading_pane_t

0x3402,	// (0x00028c65) bg_cale_side_pane

0x134c,	// (0x00026baf) cale_week_time_pane_t1

0x1366,	// (0x00026bc9) cale_week_time_pane_t2

0x1380,	// (0x00026be3) cale_week_time_pane_t3

0x139a,	// (0x00026bfd) cale_week_time_pane_t4

0x13b4,	// (0x00026c17) cale_week_time_pane_t5

0x13ce,	// (0x00026c31) cale_week_time_pane_t6

0x13e8,	// (0x00026c4b) cale_week_time_pane_t7

0x1402,	// (0x00026c65) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000349e4) cale_week_time_pane_t

0x3410,	// (0x00028c73) cell_cale_week_pane_g2

0x3434,	// (0x00028c97) cell_cale_week_pane_g3_ParamLimits

0x3434,	// (0x00028c97) cell_cale_week_pane_g3

0x344c,	// (0x00028caf) grid_highlight_pane_cp07

0x3454,	// (0x00028cb7) listscroll_gms_pane

0x345e,	// (0x00028cc1) grid_gms_pane

0x3467,	// (0x00028cca) listscroll_gms_pane_g1

0x346f,	// (0x00028cd2) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x000349f5) listscroll_gms_pane_g

0x3477,	// (0x00028cda) scroll_pane_cp010

0x3482,	// (0x00028ce5) cell_gms_pane_ParamLimits

0x3482,	// (0x00028ce5) cell_gms_pane

0x3494,	// (0x00028cf7) cell_gms_pane_g1

0x349c,	// (0x00028cff) cell_gms_pane_g2

0x2f63,	// (0x000287c6) cell_gms_pane_g3

0x34a4,	// (0x00028d07) cell_gms_pane_g4

0x0003,

0xf197,	// (0x000349fa) cell_gms_pane_g

0x34ad,	// (0x00028d10) grid_highlight_pane_cp09

0x6903,	// (0x0002c166) phob_pre_status_pane_g1

0x690b,	// (0x0002c16e) phob_pre_status_pane_g2

0x6913,	// (0x0002c176) phob_pre_status_pane_g3

0x691b,	// (0x0002c17e) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x00034dd1) phob_pre_status_pane_g

0x692b,	// (0x0002c18e) phob_pre_status_pane_t1

0x6939,	// (0x0002c19c) phob_pre_status_pane_t2

0x6949,	// (0x0002c1ac) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x00034ddc) phob_pre_status_pane_t

0x34bd,	// (0x00028d20) bg_list_pane_cp05

0x34c5,	// (0x00028d28) grid_vorec_pane

0x34cd,	// (0x00028d30) vorec_t1

0x34db,	// (0x00028d3e) vorec_t2

0x34e9,	// (0x00028d4c) vorec_t3

0x34f7,	// (0x00028d5a) vorec_t4

0x2428,	// (0x00027c8b) vorec_t5

0x2436,	// (0x00027c99) vorec_t6

0x0004,

0xf1a0,	// (0x00034a03) vorec_t

0x2444,	// (0x00027ca7) wait_bar_pane_cp01

0x3513,	// (0x00028d76) cell_vorec_pane_ParamLimits

0x3513,	// (0x00028d76) cell_vorec_pane

0xb521,	// (0x00030d84) cell_vorec_pane_g1

0x2921,	// (0x00028184) grid_highlight_pane_cp05

0x2b9e,	// (0x00028401) cams_zoom_pane

0x2b9e,	// (0x00028401) image_vga_pane

0x2c05,	// (0x00028468) main_camera_pane_g1

0x2c05,	// (0x00028468) main_camera_pane_g2

0x2c05,	// (0x00028468) main_camera_pane_g3

0x2c05,	// (0x00028468) main_camera_pane_g4

0x2c05,	// (0x00028468) main_camera_pane_g5

0x2c05,	// (0x00028468) main_camera_pane_g6

0x2c05,	// (0x00028468) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00034a0e) main_camera_pane_g

0x3526,	// (0x00028d89) main_camera_pane_t1

0x3526,	// (0x00028d89) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00034a1f) main_camera_pane_t

0x354e,	// (0x00028db1) cams_zoom_pane_cp_ParamLimits

0x354e,	// (0x00028db1) cams_zoom_pane_cp

0x3582,	// (0x00028de5) image_cif_pane_ParamLimits

0x3582,	// (0x00028de5) image_cif_pane

0x2466,	// (0x00027cc9) image_subqcif_pane

0x3594,	// (0x00028df7) main_video_pane_g1_ParamLimits

0x3594,	// (0x00028df7) main_video_pane_g1

0x35c2,	// (0x00028e25) main_video_pane_g2_ParamLimits

0x35c2,	// (0x00028e25) main_video_pane_g2

0x35fc,	// (0x00028e5f) main_video_pane_g3_ParamLimits

0x35fc,	// (0x00028e5f) main_video_pane_g3

0x35fc,	// (0x00028e5f) main_video_pane_g4_ParamLimits

0x35fc,	// (0x00028e5f) main_video_pane_g4

0x3630,	// (0x00028e93) main_video_pane_g5_ParamLimits

0x3630,	// (0x00028e93) main_video_pane_g5

0x363e,	// (0x00028ea1) main_video_pane_g6_ParamLimits

0x363e,	// (0x00028ea1) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00034a24) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00034a24) main_video_pane_g

0x3666,	// (0x00028ec9) main_video_pane_t1_ParamLimits

0x3666,	// (0x00028ec9) main_video_pane_t1

0x36aa,	// (0x00028f0d) cams_zoom_pane_g1

0x36aa,	// (0x00028f0d) cams_zoom_pane_g2

0x36aa,	// (0x00028f0d) cams_zoom_pane_g3

0x36aa,	// (0x00028f0d) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00034a33) cams_zoom_pane_g

0x36c8,	// (0x00028f2b) grid_cams_pane

0x36e2,	// (0x00028f45) linegrid_cams_pane

0x36f5,	// (0x00028f58) cell_cams_pane_ParamLimits

0x36f5,	// (0x00028f58) cell_cams_pane

0x3715,	// (0x00028f78) cams_burst_image_pane

0x371d,	// (0x00028f80) cell_cams_pane_g1

0x2921,	// (0x00028184) grid_highlight_pane_cp03

0x2b94,	// (0x000283f7) mp_bg_pane_g1

0x2466,	// (0x00027cc9) bg_list_pane_cp03

0x2466,	// (0x00027cc9) bg_mp_pane

0x2466,	// (0x00027cc9) grid_mp_pane

0x36aa,	// (0x00028f0d) media_player_g1

0x4aad,	// (0x0002a310) media_player_t1

0x4aad,	// (0x0002a310) media_player_t2

0x4aad,	// (0x0002a310) media_player_t3

0x4aad,	// (0x0002a310) media_player_t4

0x4aad,	// (0x0002a310) media_player_t5

0x4aad,	// (0x0002a310) media_player_t6

0x4aad,	// (0x0002a310) media_player_t7

0x0006,

0xf558,	// (0x00034dbb) media_player_t

0x2466,	// (0x00027cc9) wait_bar_pane_cp02

0xf53d,	// (0x00034da0) main_usb_pane_t

0x4d9d,	// (0x0002a600) cell_mp_pane

0x2b94,	// (0x000283f7) cell_mp_pane_g1

0x2921,	// (0x00028184) grid_highlight_pane_cp06

0x3725,	// (0x00028f88) grid_skin_colour_pane

0x372d,	// (0x00028f90) list_highlight_pane_cp03

0x3735,	// (0x00028f98) skin_g1

0x373d,	// (0x00028fa0) skin_t1

0x374c,	// (0x00028faf) skin_t2

0x0001,

0xf1fe,	// (0x00034a61) skin_t

0x375a,	// (0x00028fbd) cell_skin_colour_pane_ParamLimits

0x375a,	// (0x00028fbd) cell_skin_colour_pane

0x377a,	// (0x00028fdd) cell_skin_colour_pane_g1

0x37e5,	// (0x00029048) call_video_g1_ParamLimits

0x37e5,	// (0x00029048) call_video_g1

0x3801,	// (0x00029064) call_video_g2_ParamLimits

0x3801,	// (0x00029064) call_video_g2

0x0001,

0xf203,	// (0x00034a66) call_video_g_ParamLimits

0xf203,	// (0x00034a66) call_video_g

0x3853,	// (0x000290b6) call_video_uplink_pane_cp1_ParamLimits

0x3853,	// (0x000290b6) call_video_uplink_pane_cp1

0x38b8,	// (0x0002911b) call_video_uplink_pane_cp2

0x38fa,	// (0x0002915d) video_down_crop_pane_ParamLimits

0x38fa,	// (0x0002915d) video_down_crop_pane

0x39e3,	// (0x00029246) video_down_pane_ParamLimits

0x39e3,	// (0x00029246) video_down_pane

0x3ada,	// (0x0002933d) video_down_subqcif_pane_ParamLimits

0x3ada,	// (0x0002933d) video_down_subqcif_pane

0x3af2,	// (0x00029355) video_down_subqcif_pane_cp_ParamLimits

0x3af2,	// (0x00029355) video_down_subqcif_pane_cp

0x3b31,	// (0x00029394) im_reading_pane_ParamLimits

0x3b31,	// (0x00029394) im_reading_pane

0x3b43,	// (0x000293a6) im_writing_pane_ParamLimits

0x3b43,	// (0x000293a6) im_writing_pane

0x3b61,	// (0x000293c4) im_reading_pane_t1

0x3b9b,	// (0x000293fe) list_im_pane

0x3bac,	// (0x0002940f) scroll_pane_cp07

0x3bc5,	// (0x00029428) im_writing_pane_t1_ParamLimits

0x3bc5,	// (0x00029428) im_writing_pane_t1

0x3bda,	// (0x0002943d) im_writing_pane_t2_ParamLimits

0x3bda,	// (0x0002943d) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00034a70) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00034a70) im_writing_pane_t

0x2921,	// (0x00028184) input_focus_pane_cp04

0x2921,	// (0x00028184) input_focus_pane_cp05

0x3bf7,	// (0x0002945a) list_im_single_pane_ParamLimits

0x3bf7,	// (0x0002945a) list_im_single_pane

0x3c0c,	// (0x0002946f) list_single_im_pane_t1

0x34bd,	// (0x00028d20) blid_accuracy_pane

0x34bd,	// (0x00028d20) blid_compass_pane

0xbcab,	// (0x0003150e) main_location_t1

0xbcab,	// (0x0003150e) main_location_t2

0xbcab,	// (0x0003150e) main_location_t3

0x0002,

0xf567,	// (0x00034dca) main_location_t

0x2921,	// (0x00028184) aid_levels_location

0x2b94,	// (0x000283f7) blid_accuracy_pane_g1

0x2b94,	// (0x000283f7) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00034abf) blid_accuracy_pane_g

0x3c46,	// (0x000294a9) wml_content_pane

0x3c84,	// (0x000294e7) wml_button_pane_ParamLimits

0x3c84,	// (0x000294e7) wml_button_pane

0x3c98,	// (0x000294fb) wml_list_single_large_pane_ParamLimits

0x3c98,	// (0x000294fb) wml_list_single_large_pane

0x3cad,	// (0x00029510) wml_list_single_medium_pane_ParamLimits

0x3cad,	// (0x00029510) wml_list_single_medium_pane

0x3cc4,	// (0x00029527) wml_list_single_small_pane_ParamLimits

0x3cc4,	// (0x00029527) wml_list_single_small_pane

0x3cdd,	// (0x00029540) wml_selection_box_pane_ParamLimits

0x3cdd,	// (0x00029540) wml_selection_box_pane

0x3cf0,	// (0x00029553) wml_list_single_pane_t1

0x3cff,	// (0x00029562) wml_list_single_medium_pane_t1

0x3d0e,	// (0x00029571) wml_list_single_large_pane_t1

0x3d1d,	// (0x00029580) input_focus_pane_cp02_ParamLimits

0x3d1d,	// (0x00029580) input_focus_pane_cp02

0x3d30,	// (0x00029593) wml_selection_box_pane_g1

0x3d39,	// (0x0002959c) wml_selection_box_pane_t1_ParamLimits

0x3d39,	// (0x0002959c) wml_selection_box_pane_t1

0x2b7c,	// (0x000283df) bg_wml_button_pane_ParamLimits

0x2b7c,	// (0x000283df) bg_wml_button_pane

0x3d51,	// (0x000295b4) wml_button_pane_g1

0x3d59,	// (0x000295bc) wml_button_pane_t1

0x3d51,	// (0x000295b4) wml_button_bg_pane_g1

0x3d69,	// (0x000295cc) wml_button_bg_pane_g2

0x3d71,	// (0x000295d4) wml_button_bg_pane_g3

0x3d79,	// (0x000295dc) wml_button_bg_pane_g4

0x3d81,	// (0x000295e4) wml_button_bg_pane_g5

0x3d89,	// (0x000295ec) wml_button_bg_pane_g6

0x3d91,	// (0x000295f4) wml_button_bg_pane_g7

0x3d99,	// (0x000295fc) wml_button_bg_pane_g8

0x3da1,	// (0x00029604) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00034a75) wml_button_bg_pane_g

0x3da9,	// (0x0002960c) bg_list_pane_cp02

0x3db1,	// (0x00029614) mce_header_pane_ParamLimits

0x3db1,	// (0x00029614) mce_header_pane

0x3dc7,	// (0x0002962a) mce_icon_pane

0x3dc7,	// (0x0002962a) mce_image_pane

0x3dd0,	// (0x00029633) mce_text_pane_ParamLimits

0x3dd0,	// (0x00029633) mce_text_pane

0x3de3,	// (0x00029646) scroll_pane_cp03

0x3c7c,	// (0x000294df) scroll_pane_cp04

0x3deb,	// (0x0002964e) scroll_pane_cp05_ParamLimits

0x3deb,	// (0x0002964e) scroll_pane_cp05

0x3df7,	// (0x0002965a) mce_header_field_pane_ParamLimits

0x3df7,	// (0x0002965a) mce_header_field_pane

0x3e0e,	// (0x00029671) mce_header_field_pane_2_ParamLimits

0x3e0e,	// (0x00029671) mce_header_field_pane_2

0x3e24,	// (0x00029687) mce_header_field_pane_3

0x3e2c,	// (0x0002968f) list_single_mce_message_pane_ParamLimits

0x3e2c,	// (0x0002968f) list_single_mce_message_pane

0x3e3b,	// (0x0002969e) list_single_mce_smart_pane_ParamLimits

0x3e3b,	// (0x0002969e) list_single_mce_smart_pane

0x3e55,	// (0x000296b8) input_focus_pane_cp03

0x3e5e,	// (0x000296c1) list_header_data_pane

0x3e66,	// (0x000296c9) mce_header_field_pane_t1

0x3e74,	// (0x000296d7) list_single_mce_header_pane_ParamLimits

0x3e74,	// (0x000296d7) list_single_mce_header_pane

0x3e88,	// (0x000296eb) list_single_mce_header_pane_t1

0x3e97,	// (0x000296fa) list_single_mce_message_pane_g1

0x3e9f,	// (0x00029702) list_single_mce_message_pane_t1

0x3ed3,	// (0x00029736) bg_cale_heading_pane_cp01_ParamLimits

0x3ed3,	// (0x00029736) bg_cale_heading_pane_cp01

0x3f0d,	// (0x00029770) bg_cale_pane_cp02_ParamLimits

0x3f0d,	// (0x00029770) bg_cale_pane_cp02

0x3f3a,	// (0x0002979d) cale_month_corner_pane

0x3f59,	// (0x000297bc) cale_month_day_heading_pane_ParamLimits

0x3f59,	// (0x000297bc) cale_month_day_heading_pane

0x3fab,	// (0x0002980e) cale_month_pane_g1_ParamLimits

0x3fab,	// (0x0002980e) cale_month_pane_g1

0x3fda,	// (0x0002983d) cale_month_pane_g2_ParamLimits

0x3fda,	// (0x0002983d) cale_month_pane_g2

0x400a,	// (0x0002986d) cale_month_pane_g3_ParamLimits

0x400a,	// (0x0002986d) cale_month_pane_g3

0x4046,	// (0x000298a9) cale_month_pane_g4_ParamLimits

0x4046,	// (0x000298a9) cale_month_pane_g4

0x4082,	// (0x000298e5) cale_month_pane_g5_ParamLimits

0x4082,	// (0x000298e5) cale_month_pane_g5

0x40ca,	// (0x0002992d) cale_month_pane_g6_ParamLimits

0x40ca,	// (0x0002992d) cale_month_pane_g6

0x4116,	// (0x00029979) cale_month_pane_g7_ParamLimits

0x4116,	// (0x00029979) cale_month_pane_g7

0x4166,	// (0x000299c9) cale_month_pane_g8_ParamLimits

0x4166,	// (0x000299c9) cale_month_pane_g8

0x41ba,	// (0x00029a1d) cale_month_pane_g9_ParamLimits

0x41ba,	// (0x00029a1d) cale_month_pane_g9

0x420c,	// (0x00029a6f) cale_month_pane_g10_ParamLimits

0x420c,	// (0x00029a6f) cale_month_pane_g10

0x425e,	// (0x00029ac1) cale_month_pane_g11_ParamLimits

0x425e,	// (0x00029ac1) cale_month_pane_g11

0x42b0,	// (0x00029b13) cale_month_pane_g12_ParamLimits

0x42b0,	// (0x00029b13) cale_month_pane_g12

0x4302,	// (0x00029b65) cale_month_pane_g13_ParamLimits

0x4302,	// (0x00029b65) cale_month_pane_g13

0x000c,

0xf225,	// (0x00034a88) cale_month_pane_g_ParamLimits

0xf225,	// (0x00034a88) cale_month_pane_g

0x4366,	// (0x00029bc9) cale_month_week_pane

0x438a,	// (0x00029bed) grid_cale_month_pane_ParamLimits

0x438a,	// (0x00029bed) grid_cale_month_pane

0x43d3,	// (0x00029c36) cale_month_day_heading_pane_t1

0x4415,	// (0x00029c78) cale_month_day_heading_pane_t2

0x444a,	// (0x00029cad) cale_month_day_heading_pane_t3

0x447f,	// (0x00029ce2) cale_month_day_heading_pane_t4

0x44bc,	// (0x00029d1f) cale_month_day_heading_pane_t5

0x4501,	// (0x00029d64) cale_month_day_heading_pane_t6

0x4546,	// (0x00029da9) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00034aa3) cale_month_day_heading_pane_t

0x3402,	// (0x00028c65) bg_cale_side_pane_cp01

0x4593,	// (0x00029df6) cale_month_week_pane_t1

0x45ac,	// (0x00029e0f) cale_month_week_pane_t2

0x45c5,	// (0x00029e28) cale_month_week_pane_t3

0x45de,	// (0x00029e41) cale_month_week_pane_t4

0x45f7,	// (0x00029e5a) cale_month_week_pane_t5

0x4610,	// (0x00029e73) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00034ab2) cale_month_week_pane_t

0x4629,	// (0x00029e8c) cell_cale_month_pane_ParamLimits

0x4629,	// (0x00029e8c) cell_cale_month_pane

0xb52b,	// (0x00030d8e) cell_cale_month_pane_g1

0x1422,	// (0x00026c85) cell_cale_month_pane_t1_ParamLimits

0x1422,	// (0x00026c85) cell_cale_month_pane_t1

0x344c,	// (0x00028caf) grid_highlight_pane_cp08

0x2b94,	// (0x000283f7) main_smil_g1

0x4757,	// (0x00029fba) smil_status_pane

0x4762,	// (0x00029fc5) smil_text_pane

0xbb83,	// (0x000313e6) bg_popup_call3_rect_pane_g8

0xbb8b,	// (0x000313ee) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00034d4b) bg_popup_call3_rect_pane_g

0xbdc8,	// (0x0003162b) smil_status_volume_pane_g1

0x4776,	// (0x00029fd9) smil_status_pane_t1

0xbdfb,	// (0x0003165e) volume_smil_pane

0x478d,	// (0x00029ff0) list_smil_text_pane

0x4797,	// (0x00029ffa) scroll_pane_cp011

0x47a2,	// (0x0002a005) smil_text_list_pane_t1_ParamLimits

0x47a2,	// (0x0002a005) smil_text_list_pane_t1

0xb537,	// (0x00030d9a) aid_volume_smil_ParamLimits

0xb537,	// (0x00030d9a) aid_volume_smil

0x2b94,	// (0x000283f7) smil_volume_pane_g1

0x2b94,	// (0x000283f7) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00034abf) smil_volume_pane_g

0x2f8b,	// (0x000287ee) listscroll_cale_day_pane

0x47e6,	// (0x0002a049) bg_cale_pane

0x47fe,	// (0x0002a061) list_cale_pane

0x4821,	// (0x0002a084) scroll_pane_cp09

0x4832,	// (0x0002a095) cale_bg_pane_g1

0x483a,	// (0x0002a09d) cale_bg_pane_g2

0x4842,	// (0x0002a0a5) cale_bg_pane_g3

0x484a,	// (0x0002a0ad) cale_bg_pane_g4

0x4852,	// (0x0002a0b5) cale_bg_pane_g5

0x485a,	// (0x0002a0bd) cale_bg_pane_g6

0x4862,	// (0x0002a0c5) cale_bg_pane_g7

0x486a,	// (0x0002a0cd) cale_bg_pane_g8

0x4872,	// (0x0002a0d5) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00034ac4) cale_bg_pane_g

0x4882,	// (0x0002a0e5) list_cale_time_pane_ParamLimits

0x4882,	// (0x0002a0e5) list_cale_time_pane

0x4898,	// (0x0002a0fb) list_cale_time_pane_g1_ParamLimits

0x4898,	// (0x0002a0fb) list_cale_time_pane_g1

0x48a4,	// (0x0002a107) list_cale_time_pane_g2_ParamLimits

0x48a4,	// (0x0002a107) list_cale_time_pane_g2

0x48b1,	// (0x0002a114) list_cale_time_pane_g3_ParamLimits

0x48b1,	// (0x0002a114) list_cale_time_pane_g3

0x48bf,	// (0x0002a122) list_cale_time_pane_g4_ParamLimits

0x48bf,	// (0x0002a122) list_cale_time_pane_g4

0x48cd,	// (0x0002a130) list_cale_time_pane_g5_ParamLimits

0x48cd,	// (0x0002a130) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00034ad7) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00034ad7) list_cale_time_pane_g

0x48e8,	// (0x0002a14b) list_cale_time_pane_t1_ParamLimits

0x48e8,	// (0x0002a14b) list_cale_time_pane_t1

0x4910,	// (0x0002a173) list_cale_time_pane_t2_ParamLimits

0x4910,	// (0x0002a173) list_cale_time_pane_t2

0x4fb6,	// (0x0002a819) aid_blid_cardinal_pane

0x5000,	// (0x0002a863) compass_pane_t4

0x4938,	// (0x0002a19b) list_cale_time_pane_t4_ParamLimits

0x4938,	// (0x0002a19b) list_cale_time_pane_t4

0x500e,	// (0x0002a871) compass_pane_t5

0x501c,	// (0x0002a87f) compass_pane_t6

0x502a,	// (0x0002a88d) compass_pane_t7

0x50c2,	// (0x0002a925) navi_pane_cc_t1

0x52e1,	// (0x0002ab44) aid_phob_thumbnail_center_pane

0x57c1,	// (0x0002b024) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00034ae4) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00034ae4) list_cale_time_pane_t

0x2554,	// (0x00027db7) bg_popup_window_pane_cp02_ParamLimits

0x2554,	// (0x00027db7) bg_popup_window_pane_cp02

0x4960,	// (0x0002a1c3) heading_pane_cp01_ParamLimits

0x4960,	// (0x0002a1c3) heading_pane_cp01

0x496c,	// (0x0002a1cf) loc_req_pane_ParamLimits

0x496c,	// (0x0002a1cf) loc_req_pane

0x497c,	// (0x0002a1df) loc_type_pane_ParamLimits

0x497c,	// (0x0002a1df) loc_type_pane

0x498e,	// (0x0002a1f1) loc_type_pane_t1_ParamLimits

0x498e,	// (0x0002a1f1) loc_type_pane_t1

0x49a0,	// (0x0002a203) loc_type_pane_t2_ParamLimits

0x49a0,	// (0x0002a203) loc_type_pane_t2

0x49b2,	// (0x0002a215) loc_type_pane_t3_ParamLimits

0x49b2,	// (0x0002a215) loc_type_pane_t3

0x0002,

0xf288,	// (0x00034aeb) loc_type_pane_t_ParamLimits

0xf288,	// (0x00034aeb) loc_type_pane_t

0x49c4,	// (0x0002a227) list_loc_req_pane

0x49ce,	// (0x0002a231) scroll_pane_cp012

0x49d9,	// (0x0002a23c) list_single_loc_request_popup_menu_pane_ParamLimits

0x49d9,	// (0x0002a23c) list_single_loc_request_popup_menu_pane

0x49e6,	// (0x0002a249) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x49e6,	// (0x0002a249) list_single_loc_request_popup_menu_pane_g1

0x49f2,	// (0x0002a255) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x49f2,	// (0x0002a255) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00034af2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00034af2) list_single_loc_request_popup_menu_pane_g

0x49fe,	// (0x0002a261) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x49fe,	// (0x0002a261) list_single_loc_request_popup_menu_pane_t1

0x2b7c,	// (0x000283df) bg_popup_window_pane_cp03_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_window_pane_cp03

0x4a14,	// (0x0002a277) heading_loc_req_pane_ParamLimits

0x4a14,	// (0x0002a277) heading_loc_req_pane

0x4a20,	// (0x0002a283) popup_dyc_status_message_window_g1_ParamLimits

0x4a20,	// (0x0002a283) popup_dyc_status_message_window_g1

0x4a34,	// (0x0002a297) popup_dyc_status_message_window_t1_ParamLimits

0x4a34,	// (0x0002a297) popup_dyc_status_message_window_t1

0x4a49,	// (0x0002a2ac) popup_dyc_status_message_window_t2_ParamLimits

0x4a49,	// (0x0002a2ac) popup_dyc_status_message_window_t2

0x4a5e,	// (0x0002a2c1) popup_dyc_status_message_window_t3_ParamLimits

0x4a5e,	// (0x0002a2c1) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00034af7) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00034af7) popup_dyc_status_message_window_t

0x2921,	// (0x00028184) bg_heading_pane_cp01

0x4a7a,	// (0x0002a2dd) heading_loc_req_pane_g1

0x4a82,	// (0x0002a2e5) heading_loc_req_pane_g2

0x4a8a,	// (0x0002a2ed) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00034afe) heading_loc_req_pane_g

0x4a92,	// (0x0002a2f5) heading_loc_req_pane_t1

0x4abd,	// (0x0002a320) bg_popup_sub_pane_cp01_ParamLimits

0x4abd,	// (0x0002a320) bg_popup_sub_pane_cp01

0x4acb,	// (0x0002a32e) popup_cale_events_window_g1_ParamLimits

0x4acb,	// (0x0002a32e) popup_cale_events_window_g1

0x4aeb,	// (0x0002a34e) popup_cale_events_window_g2_ParamLimits

0x4aeb,	// (0x0002a34e) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00034b20) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00034b20) popup_cale_events_window_g

0x4b0b,	// (0x0002a36e) popup_cale_events_window_t1_ParamLimits

0x4b0b,	// (0x0002a36e) popup_cale_events_window_t1

0x4b1d,	// (0x0002a380) popup_cale_events_window_t2_ParamLimits

0x4b1d,	// (0x0002a380) popup_cale_events_window_t2

0x4b5b,	// (0x0002a3be) popup_cale_events_window_t3_ParamLimits

0x4b5b,	// (0x0002a3be) popup_cale_events_window_t3

0x4b95,	// (0x0002a3f8) popup_cale_events_window_t4_ParamLimits

0x4b95,	// (0x0002a3f8) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00034b25) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00034b25) popup_cale_events_window_t

0x4bcb,	// (0x0002a42e) call_type_pane

0x4bdb,	// (0x0002a43e) popup_call_status_window_g1

0x4bef,	// (0x0002a452) popup_call_status_window_g2

0x4c03,	// (0x0002a466) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00034b2e) popup_call_status_window_g

0x4c12,	// (0x0002a475) call_type_pane_g1

0x4c1b,	// (0x0002a47e) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00034b35) call_type_pane_g

0x2921,	// (0x00028184) bg_popup_sub_pane_cp02

0x4c24,	// (0x0002a487) listscroll_popup_wml_pane

0x4c2c,	// (0x0002a48f) list_wml_pane

0x4c36,	// (0x0002a499) scroll_pane_cp013

0x4c41,	// (0x0002a4a4) list_single_graphic_popup_wml_pane_ParamLimits

0x4c41,	// (0x0002a4a4) list_single_graphic_popup_wml_pane

0x2b94,	// (0x000283f7) list_single_graphic_popup_wml_pane_g1

0x4c55,	// (0x0002a4b8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00034b3a) list_single_graphic_popup_wml_pane_g

0x4c5d,	// (0x0002a4c0) list_single_graphic_popup_wml_pane_t1

0x4c73,	// (0x0002a4d6) aid_call_pane

0x2b74,	// (0x000283d7) popup_clock_analogue_window_g1

0x2b74,	// (0x000283d7) popup_clock_analogue_window_g2

0xb565,	// (0x00030dc8) popup_clock_analogue_window_g3

0xb565,	// (0x00030dc8) popup_clock_analogue_window_g4

0x2b94,	// (0x000283f7) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00034b3f) popup_clock_analogue_window_g

0xb56d,	// (0x00030dd0) popup_clock_analogue_window_t1

0xb57b,	// (0x00030dde) clock_digital_number_pane_ParamLimits

0xb57b,	// (0x00030dde) clock_digital_number_pane

0xb587,	// (0x00030dea) clock_digital_number_pane_cp02_ParamLimits

0xb587,	// (0x00030dea) clock_digital_number_pane_cp02

0xb593,	// (0x00030df6) clock_digital_number_pane_cp03_ParamLimits

0xb593,	// (0x00030df6) clock_digital_number_pane_cp03

0xb59f,	// (0x00030e02) clock_digital_number_pane_cp04_ParamLimits

0xb59f,	// (0x00030e02) clock_digital_number_pane_cp04

0xb5ab,	// (0x00030e0e) clock_digital_separator_pane_ParamLimits

0xb5ab,	// (0x00030e0e) clock_digital_separator_pane

0xb5b7,	// (0x00030e1a) popup_clock_digital_window_t1

0x2b94,	// (0x000283f7) clock_digital_number_pane_g1

0x2b94,	// (0x000283f7) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00034abf) clock_digital_number_pane_g

0x2b94,	// (0x000283f7) clock_digital_separator_pane_g1

0x2b94,	// (0x000283f7) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00034abf) clock_digital_separator_pane_g

0x2921,	// (0x00028184) bg_popup_window_pane_cp04

0x4c7b,	// (0x0002a4de) heading_pane_cp03

0x34bd,	// (0x00028d20) listscroll_popup_gms_pane

0x2921,	// (0x00028184) grid_large_graphic_popup_pane

0x4c84,	// (0x0002a4e7) listscroll_popup_gms_pane_g1

0x4c8d,	// (0x0002a4f0) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00034b4a) listscroll_popup_gms_pane_g

0x4c96,	// (0x0002a4f9) scroll_pane_cp014

0x2bf7,	// (0x0002845a) cell_large_graphic_popup_pane_ParamLimits

0x2bf7,	// (0x0002845a) cell_large_graphic_popup_pane

0x2c05,	// (0x00028468) cell_large_graphic_popup_pane_g1_ParamLimits

0x2c05,	// (0x00028468) cell_large_graphic_popup_pane_g1

0x4c9f,	// (0x0002a502) cell_large_graphic_popup_pane_g2_ParamLimits

0x4c9f,	// (0x0002a502) cell_large_graphic_popup_pane_g2

0x4cad,	// (0x0002a510) cell_large_graphic_popup_pane_g3_ParamLimits

0x4cad,	// (0x0002a510) cell_large_graphic_popup_pane_g3

0x4cbb,	// (0x0002a51e) cell_large_graphic_popup_pane_g4_ParamLimits

0x4cbb,	// (0x0002a51e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00034b4f) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00034b4f) cell_large_graphic_popup_pane_g

0x2921,	// (0x00028184) grid_highlight_pane_cp010

0x2b94,	// (0x000283f7) bg_popup_call_pane_g1

0x4ccc,	// (0x0002a52f) list_single_graphic_popup_conf_pane_ParamLimits

0x4ccc,	// (0x0002a52f) list_single_graphic_popup_conf_pane

0x4cdf,	// (0x0002a542) list_highlight_pane_cp01

0x4ce8,	// (0x0002a54b) list_single_graphic_popup_conf_pane_g1

0x4cf0,	// (0x0002a553) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00034b58) list_single_graphic_popup_conf_pane_g

0x4cf8,	// (0x0002a55b) list_single_graphic_popup_conf_pane_t1

0x4d06,	// (0x0002a569) linegrid_cams_pane_g1

0x4d0f,	// (0x0002a572) linegrid_cams_pane_g2

0x2f63,	// (0x000287c6) linegrid_cams_pane_g3

0x4d18,	// (0x0002a57b) linegrid_cams_pane_g4

0x4d21,	// (0x0002a584) linegrid_cams_pane_g5

0x4d2a,	// (0x0002a58d) linegrid_cams_pane_g6

0x34a4,	// (0x00028d07) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00034b5d) linegrid_cams_pane_g

0x4d35,	// (0x0002a598) popup_clock_analogue_window

0x4d35,	// (0x0002a598) popup_clock_digital_window

0x2921,	// (0x00028184) popup_phob_thumbnail_window

0x2b94,	// (0x000283f7) call_video_uplink_pane_g1

0x4d3e,	// (0x0002a5a1) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00034b6c) call_video_uplink_pane_g

0x4d46,	// (0x0002a5a9) video_uplink_pane

0x4d4e,	// (0x0002a5b1) mce_image_pane_g1

0x4d58,	// (0x0002a5bb) mce_image_pane_g2

0x4d60,	// (0x0002a5c3) mce_image_pane_g3

0x4d68,	// (0x0002a5cb) mce_image_pane_g4

0x4d70,	// (0x0002a5d3) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00034b71) mce_image_pane_g

0x4d78,	// (0x0002a5db) control_top_pane_stacon_cp01_ParamLimits

0x4d78,	// (0x0002a5db) control_top_pane_stacon_cp01

0x4d8c,	// (0x0002a5ef) uni_indicator_pane_stacon_cp01_ParamLimits

0x4d8c,	// (0x0002a5ef) uni_indicator_pane_stacon_cp01

0x4d9d,	// (0x0002a600) bg_popup_sub_pane_cp03

0x4da7,	// (0x0002a60a) chi_dic_find_pane

0x4daf,	// (0x0002a612) listscroll_chi_dic_pane

0x4db8,	// (0x0002a61b) main_pane_chidic_g1

0x4dcb,	// (0x0002a62e) chi_dic_find_pane_t1

0x4dd9,	// (0x0002a63c) find_chidic_pane

0x4de2,	// (0x0002a645) chi_dic_list_pane_ParamLimits

0x4de2,	// (0x0002a645) chi_dic_list_pane

0x4df3,	// (0x0002a656) scroll_pane_cp020

0x4dfb,	// (0x0002a65e) find_chidic_pane_t1

0x2921,	// (0x00028184) input_focus_pane_cp06

0x4e0a,	// (0x0002a66d) list_chi_dic_pane_ParamLimits

0x4e0a,	// (0x0002a66d) list_chi_dic_pane

0x4e1c,	// (0x0002a67f) list_chi_dic_pane_t1_ParamLimits

0x4e1c,	// (0x0002a67f) list_chi_dic_pane_t1

0x2921,	// (0x00028184) list_highlight_pane_cp020

0x4e2f,	// (0x0002a692) bg_cale_heading_pane_g1

0x4e37,	// (0x0002a69a) bg_cale_heading_pane_g2

0x4e3f,	// (0x0002a6a2) bg_cale_heading_pane_g3

0x4e47,	// (0x0002a6aa) bg_cale_heading_pane_g4

0x4e51,	// (0x0002a6b4) bg_cale_heading_pane_g5

0x4e5b,	// (0x0002a6be) bg_cale_heading_pane_g6

0x4e63,	// (0x0002a6c6) bg_cale_heading_pane_g7

0x4e6b,	// (0x0002a6ce) bg_cale_heading_pane_g8

0x4e75,	// (0x0002a6d8) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00034b7c) bg_cale_heading_pane_g

0x4e2f,	// (0x0002a692) bg_cale_side_pane_g1

0x4e7f,	// (0x0002a6e2) bg_cale_side_pane_g2

0x4e87,	// (0x0002a6ea) bg_cale_side_pane_g3

0x4e8f,	// (0x0002a6f2) bg_cale_side_pane_g4

0x4e97,	// (0x0002a6fa) bg_cale_side_pane_g5

0x4e9f,	// (0x0002a702) bg_cale_side_pane_g6

0x4ea7,	// (0x0002a70a) bg_cale_side_pane_g7

0x4eaf,	// (0x0002a712) bg_cale_side_pane_g8

0x4eb7,	// (0x0002a71a) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00034b8f) bg_cale_side_pane_g

0x4ebf,	// (0x0002a722) popup_call_status_window_ParamLimits

0x4ebf,	// (0x0002a722) popup_call_status_window

0x4f06,	// (0x0002a769) stacon_top_pane

0x4f0e,	// (0x0002a771) status_pane_ParamLimits

0x4f0e,	// (0x0002a771) status_pane

0x4f23,	// (0x0002a786) status_small_pane

0x4f2b,	// (0x0002a78e) control_pane

0x2921,	// (0x00028184) stacon_bottom_pane

0x4f33,	// (0x0002a796) list_single_mce_smart_pane_t1_ParamLimits

0x4f33,	// (0x0002a796) list_single_mce_smart_pane_t1

0x4f46,	// (0x0002a7a9) list_single_mce_smart_pane_t2_ParamLimits

0x4f46,	// (0x0002a7a9) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00034ba2) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00034ba2) list_single_mce_smart_pane_t

0x4f65,	// (0x0002a7c8) compass_pane

0x4f6e,	// (0x0002a7d1) main_location2_pane_t1

0x4f80,	// (0x0002a7e3) main_location2_pane_t2

0x4f92,	// (0x0002a7f5) main_location2_pane_t3

0x0003,

0xf344,	// (0x00034ba7) main_location2_pane_t

0x4fd6,	// (0x0002a839) compass_pane_g1_ParamLimits

0x4fd6,	// (0x0002a839) compass_pane_g1

0x4fe2,	// (0x0002a845) compass_pane_t1

0x4ff1,	// (0x0002a854) compass_pane_t2

0x0005,

0xf34d,	// (0x00034bb0) compass_pane_t

0x5038,	// (0x0002a89b) text_secondary_cp61

0x50b9,	// (0x0002a91c) navi_pane_cams_g5

0x5135,	// (0x0002a998) navi_pane_im_t1

0x5143,	// (0x0002a9a6) navi_pane_mp_g1_ParamLimits

0x5143,	// (0x0002a9a6) navi_pane_mp_g1

0x5157,	// (0x0002a9ba) navi_pane_mp_g2_ParamLimits

0x5157,	// (0x0002a9ba) navi_pane_mp_g2

0x5163,	// (0x0002a9c6) navi_pane_mp_g3_ParamLimits

0x5163,	// (0x0002a9c6) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00034bc4) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00034bc4) navi_pane_mp_g

0x516f,	// (0x0002a9d2) navi_pane_mp_t1

0x517d,	// (0x0002a9e0) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00034bcb) navi_pane_mp_t

0x522a,	// (0x0002aa8d) navi_pane_vt_g1

0x516f,	// (0x0002a9d2) navi_pane_vt_t1

0x5232,	// (0x0002aa95) navi_slider_pane

0x34bd,	// (0x00028d20) zooming_pane

0x5242,	// (0x0002aaa5) navi_slider_pane_g1

0xb5d4,	// (0x00030e37) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00034bd2) navi_slider_pane_g

0x5266,	// (0x0002aac9) aid_levels_zoom

0x526e,	// (0x0002aad1) zooming_pane_g1

0x5276,	// (0x0002aad9) zooming_pane_g2

0x5276,	// (0x0002aad9) zooming_pane_g3

0x0002,

0xf37e,	// (0x00034be1) zooming_pane_g

0x527e,	// (0x0002aae1) level_10_zoom

0x5287,	// (0x0002aaea) level_11_zoom

0x5290,	// (0x0002aaf3) level_1_zoom

0x5299,	// (0x0002aafc) level_2_zoom

0x52a2,	// (0x0002ab05) level_3_zoom

0x52ab,	// (0x0002ab0e) level_4_zoom

0x52b4,	// (0x0002ab17) level_5_zoom

0x52bd,	// (0x0002ab20) level_6_zoom

0x52c6,	// (0x0002ab29) level_7_zoom

0x52cf,	// (0x0002ab32) level_8_zoom

0x52d8,	// (0x0002ab3b) level_9_zoom

0x52e9,	// (0x0002ab4c) popup_phob_thumbnail_window_g1

0x52f1,	// (0x0002ab54) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00034be8) popup_phob_thumbnail_window_g

0x6959,	// (0x0002c1bc) level_1_location

0x6961,	// (0x0002c1c4) level_2_location

0x6969,	// (0x0002c1cc) level_3_location

0x6971,	// (0x0002c1d4) level_4_location

0x34bd,	// (0x00028d20) level_5_location

0x52f9,	// (0x0002ab5c) mce_icon_pane_g1

0x5301,	// (0x0002ab64) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00034bed) mce_icon_pane_g

0x5309,	// (0x0002ab6c) main_mup_pane_g1_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g1

0x5309,	// (0x0002ab6c) main_mup_pane_g2_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g2

0x5309,	// (0x0002ab6c) main_mup_pane_g3_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g3

0x5309,	// (0x0002ab6c) main_mup_pane_g4_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g4

0x5309,	// (0x0002ab6c) main_mup_pane_g5_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g5

0x5309,	// (0x0002ab6c) main_mup_pane_g6_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g6

0x5309,	// (0x0002ab6c) main_mup_pane_g7_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g7

0x5309,	// (0x0002ab6c) main_mup_pane_g8_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g8

0x5309,	// (0x0002ab6c) main_mup_pane_g9_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g9

0x5309,	// (0x0002ab6c) main_mup_pane_g10_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g10

0x5309,	// (0x0002ab6c) main_mup_pane_g11_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g11

0x2c05,	// (0x00028468) main_mup_pane_g12_ParamLimits

0x2c05,	// (0x00028468) main_mup_pane_g12

0x5309,	// (0x0002ab6c) main_mup_pane_g13_ParamLimits

0x5309,	// (0x0002ab6c) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00034bf2) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00034bf2) main_mup_pane_g

0x5317,	// (0x0002ab7a) main_mup_pane_t1_ParamLimits

0x5317,	// (0x0002ab7a) main_mup_pane_t1

0x5317,	// (0x0002ab7a) main_mup_pane_t2_ParamLimits

0x5317,	// (0x0002ab7a) main_mup_pane_t2

0x5317,	// (0x0002ab7a) main_mup_pane_t3_ParamLimits

0x5317,	// (0x0002ab7a) main_mup_pane_t3

0x3526,	// (0x00028d89) main_mup_pane_t4_ParamLimits

0x3526,	// (0x00028d89) main_mup_pane_t4

0x3526,	// (0x00028d89) main_mup_pane_t5_ParamLimits

0x3526,	// (0x00028d89) main_mup_pane_t5

0x532b,	// (0x0002ab8e) main_mup_pane_t6_ParamLimits

0x532b,	// (0x0002ab8e) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00034c0d) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00034c0d) main_mup_pane_t

0x2bf7,	// (0x0002845a) mup_progress_pane_ParamLimits

0x2bf7,	// (0x0002845a) mup_progress_pane

0x533f,	// (0x0002aba2) mup_visualizer_pane_ParamLimits

0x533f,	// (0x0002aba2) mup_visualizer_pane

0x533f,	// (0x0002aba2) mup_volume_pane_ParamLimits

0x533f,	// (0x0002aba2) mup_volume_pane

0x2c13,	// (0x00028476) mup_visualizer_pane_g1_ParamLimits

0x2c13,	// (0x00028476) mup_visualizer_pane_g1

0x534d,	// (0x0002abb0) mup_visualizer_pane_g2_ParamLimits

0x534d,	// (0x0002abb0) mup_visualizer_pane_g2

0x2c05,	// (0x00028468) mup_visualizer_pane_g3_ParamLimits

0x2c05,	// (0x00028468) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00034c1a) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00034c1a) mup_visualizer_pane_g

0x36aa,	// (0x00028f0d) mup_volume_pane_g1

0x36aa,	// (0x00028f0d) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00034c21) mup_volume_pane_g

0x36aa,	// (0x00028f0d) mup_progress_pane_g1

0x36aa,	// (0x00028f0d) mup_progress_pane_g2

0x36aa,	// (0x00028f0d) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00034c26) mup_progress_pane_g

0x2921,	// (0x00028184) bg_popup_window_pane_cp05

0x535b,	// (0x0002abbe) heading_pane_cp02_ParamLimits

0x535b,	// (0x0002abbe) heading_pane_cp02

0x5375,	// (0x0002abd8) list_popup_blid_pane

0x537d,	// (0x0002abe0) list_blid_sat_info_pane_ParamLimits

0x537d,	// (0x0002abe0) list_blid_sat_info_pane

0x5390,	// (0x0002abf3) list_blid_sat_info_pane_g1

0x5398,	// (0x0002abfb) list_blid_sat_info_pane_t1

0x549e,	// (0x0002ad01) mup_equalizer_pane_ParamLimits

0x549e,	// (0x0002ad01) mup_equalizer_pane

0x54b7,	// (0x0002ad1a) mup_equalizer_pane_cp1_ParamLimits

0x54b7,	// (0x0002ad1a) mup_equalizer_pane_cp1

0x54d4,	// (0x0002ad37) mup_equalizer_pane_cp2_ParamLimits

0x54d4,	// (0x0002ad37) mup_equalizer_pane_cp2

0x54f1,	// (0x0002ad54) mup_equalizer_pane_cp3_ParamLimits

0x54f1,	// (0x0002ad54) mup_equalizer_pane_cp3

0x5512,	// (0x0002ad75) mup_equalizer_pane_cp4_ParamLimits

0x5512,	// (0x0002ad75) mup_equalizer_pane_cp4

0x5533,	// (0x0002ad96) mup_equalizer_pane_cp5

0x5547,	// (0x0002adaa) mup_equalizer_pane_cp6

0x555b,	// (0x0002adbe) mup_equalizer_pane_cp7

0xbc03,	// (0x00031466) bg_popup_call_poc_act_pane_g9

0xbc0b,	// (0x0003146e) bg_popup_call_poc_act_pane_g10

0xbc13,	// (0x00031476) bg_popup_call_poc_act_pane_g11

0x000a,

0x2b7c,	// (0x000283df) mup_scale_pane

0x2b94,	// (0x000283f7) mup_scale_pane_g1

0x556f,	// (0x0002add2) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00034c42) mup_scale_pane_g

0x55a5,	// (0x0002ae08) msg_data_pane

0x55ad,	// (0x0002ae10) scroll_pane_cp017

0x55b5,	// (0x0002ae18) bg_list_pane_cp04_ParamLimits

0x55b5,	// (0x0002ae18) bg_list_pane_cp04

0x55d5,	// (0x0002ae38) msg_data_pane_g1

0x55dd,	// (0x0002ae40) msg_data_pane_g2

0x55e5,	// (0x0002ae48) msg_data_pane_g3

0x55ed,	// (0x0002ae50) msg_data_pane_g4

0x55f5,	// (0x0002ae58) msg_data_pane_g5

0x55fd,	// (0x0002ae60) msg_data_pane_g6

0x5605,	// (0x0002ae68) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00034c51) msg_data_pane_g

0x560d,	// (0x0002ae70) msg_text_pane_ParamLimits

0x560d,	// (0x0002ae70) msg_text_pane

0x563b,	// (0x0002ae9e) qrid_highlight_pane_cp011_ParamLimits

0x563b,	// (0x0002ae9e) qrid_highlight_pane_cp011

0x2921,	// (0x00028184) msg_body_pane

0x2921,	// (0x00028184) msg_header_pane

0x565a,	// (0x0002aebd) input_focus_pane_cp07

0x567d,	// (0x0002aee0) msg_header_pane_t1_ParamLimits

0x567d,	// (0x0002aee0) msg_header_pane_t1

0x5693,	// (0x0002aef6) msg_header_pane_t2_ParamLimits

0x5693,	// (0x0002aef6) msg_header_pane_t2

0x0001,

0xf402,	// (0x00034c65) msg_header_pane_t_ParamLimits

0xf402,	// (0x00034c65) msg_header_pane_t

0x56aa,	// (0x0002af0d) msg_body_pane_g1

0x56b2,	// (0x0002af15) msg_body_pane_t1_ParamLimits

0x56b2,	// (0x0002af15) msg_body_pane_t1

0x56e3,	// (0x0002af46) msg_body_pane_t2_ParamLimits

0x56e3,	// (0x0002af46) msg_body_pane_t2

0x56f5,	// (0x0002af58) msg_body_pane_t3_ParamLimits

0x56f5,	// (0x0002af58) msg_body_pane_t3

0x0002,

0xf407,	// (0x00034c6a) msg_body_pane_t_ParamLimits

0xf407,	// (0x00034c6a) msg_body_pane_t

0x146a,	// (0x00026ccd) main_viewer_pane_g1_ParamLimits

0x146a,	// (0x00026ccd) main_viewer_pane_g1

0x1478,	// (0x00026cdb) main_viewer_pane_g2_ParamLimits

0x1478,	// (0x00026cdb) main_viewer_pane_g2

0x5725,	// (0x0002af88) main_viewer_pane_g3_ParamLimits

0x5725,	// (0x0002af88) main_viewer_pane_g3

0x5734,	// (0x0002af97) main_viewer_pane_g4_ParamLimits

0x5734,	// (0x0002af97) main_viewer_pane_g4

0xb5fe,	// (0x00030e61) main_viewer_pane_g5_ParamLimits

0xb5fe,	// (0x00030e61) main_viewer_pane_g5

0xb5fe,	// (0x00030e61) main_viewer_pane_g7_ParamLimits

0xb5fe,	// (0x00030e61) main_viewer_pane_g7

0x49e6,	// (0x0002a249) main_viewer_pane_g8_ParamLimits

0x49e6,	// (0x0002a249) main_viewer_pane_g8

0x0007,

0xf417,	// (0x00034c7a) main_viewer_pane_g_ParamLimits

0xf417,	// (0x00034c7a) main_viewer_pane_g

0x5743,	// (0x0002afa6) viewer_content_pane_ParamLimits

0x5743,	// (0x0002afa6) viewer_content_pane

0x577e,	// (0x0002afe1) main_postcard_pane_g1_ParamLimits

0x577e,	// (0x0002afe1) main_postcard_pane_g1

0x5794,	// (0x0002aff7) main_postcard_pane_g2_ParamLimits

0x5794,	// (0x0002aff7) main_postcard_pane_g2

0x57aa,	// (0x0002b00d) main_postcard_pane_g3_ParamLimits

0x57aa,	// (0x0002b00d) main_postcard_pane_g3

0x0005,

0xf428,	// (0x00034c8b) main_postcard_pane_g_ParamLimits

0xf428,	// (0x00034c8b) main_postcard_pane_g

0x57c1,	// (0x0002b024) main_postcard_pane_g4

0xbddb,	// (0x0003163e) smil_status_volume_pane_g2

0x5804,	// (0x0002b067) postcard_pane_ParamLimits

0x5804,	// (0x0002b067) postcard_pane

0x5846,	// (0x0002b0a9) postcard_pane_g1_ParamLimits

0x5846,	// (0x0002b0a9) postcard_pane_g1

0x5854,	// (0x0002b0b7) postcard_pane_g2_ParamLimits

0x5854,	// (0x0002b0b7) postcard_pane_g2

0x5860,	// (0x0002b0c3) postcard_pane_g3_ParamLimits

0x5860,	// (0x0002b0c3) postcard_pane_g3

0x586c,	// (0x0002b0cf) postcard_pane_g4_ParamLimits

0x586c,	// (0x0002b0cf) postcard_pane_g4

0x587a,	// (0x0002b0dd) postcard_pane_g5_ParamLimits

0x587a,	// (0x0002b0dd) postcard_pane_g5

0x588f,	// (0x0002b0f2) postcard_pane_g6_ParamLimits

0x588f,	// (0x0002b0f2) postcard_pane_g6

0x5846,	// (0x0002b0a9) postcard_pane_g7_ParamLimits

0x5846,	// (0x0002b0a9) postcard_pane_g7

0x0006,

0xf435,	// (0x00034c98) postcard_pane_g_ParamLimits

0xf435,	// (0x00034c98) postcard_pane_g

0x58a3,	// (0x0002b106) main_mp2_pane_g1_ParamLimits

0x58a3,	// (0x0002b106) main_mp2_pane_g1

0x58af,	// (0x0002b112) main_mp2_pane_g2_ParamLimits

0x58af,	// (0x0002b112) main_mp2_pane_g2

0x58bb,	// (0x0002b11e) main_mp2_pane_g3_ParamLimits

0x58bb,	// (0x0002b11e) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00034ca7) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00034ca7) main_mp2_pane_g

0x58c7,	// (0x0002b12a) main_mp2_pane_t1_ParamLimits

0x58c7,	// (0x0002b12a) main_mp2_pane_t1

0x58dc,	// (0x0002b13f) main_mp2_pane_t2_ParamLimits

0x58dc,	// (0x0002b13f) main_mp2_pane_t2

0x58ee,	// (0x0002b151) main_mp2_pane_t3_ParamLimits

0x58ee,	// (0x0002b151) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x00034cae) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x00034cae) main_mp2_pane_t

0x5900,	// (0x0002b163) pec_content_pane_ParamLimits

0x5900,	// (0x0002b163) pec_content_pane

0x3c7c,	// (0x000294df) scroll_pane_cp015

0x5912,	// (0x0002b175) pec_attribute_pane_ParamLimits

0x5912,	// (0x0002b175) pec_attribute_pane

0x5922,	// (0x0002b185) pec_content_pane_g1_ParamLimits

0x5922,	// (0x0002b185) pec_content_pane_g1

0x592e,	// (0x0002b191) pec_content_pane_t1_ParamLimits

0x592e,	// (0x0002b191) pec_content_pane_t1

0x5940,	// (0x0002b1a3) pec_content_pane_t2_ParamLimits

0x5940,	// (0x0002b1a3) pec_content_pane_t2

0x0001,

0xf452,	// (0x00034cb5) pec_content_pane_t_ParamLimits

0xf452,	// (0x00034cb5) pec_content_pane_t

0x5952,	// (0x0002b1b5) list_single_graphic_pane_cp01_ParamLimits

0x5952,	// (0x0002b1b5) list_single_graphic_pane_cp01

0x2b7c,	// (0x000283df) bg_popup_sub_pane_cp04

0x5968,	// (0x0002b1cb) popup_mup_playback_window_g1

0x5974,	// (0x0002b1d7) popup_mup_playback_window_t1

0x5989,	// (0x0002b1ec) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x00034cba) popup_mup_playback_window_t

0x59de,	// (0x0002b241) main_image_pane_g1_ParamLimits

0x59de,	// (0x0002b241) main_image_pane_g1

0x5abb,	// (0x0002b31e) scroll_pane_cp018_ParamLimits

0x5abb,	// (0x0002b31e) scroll_pane_cp018

0x5ad3,	// (0x0002b336) scroll_pane_cp016_ParamLimits

0x5ad3,	// (0x0002b336) scroll_pane_cp016

0x5b07,	// (0x0002b36a) smil2_image_pane_ParamLimits

0x5b07,	// (0x0002b36a) smil2_image_pane

0x5b37,	// (0x0002b39a) smil2_root_pane_ParamLimits

0x5b37,	// (0x0002b39a) smil2_root_pane

0x5b6f,	// (0x0002b3d2) smil2_text_pane_ParamLimits

0x5b6f,	// (0x0002b3d2) smil2_text_pane

0x2921,	// (0x00028184) bg_list_pane_cp06

0x5bf7,	// (0x0002b45a) grid_radio_pane

0x2921,	// (0x00028184) bg_popup_window_pane_cp06

0x5bff,	// (0x0002b462) main_fmradio_pane_t1

0xbc5b,	// (0x000314be) heading_pane_cp04

0x5c0d,	// (0x0002b470) main_fmradio_pane_t2

0xbc63,	// (0x000314c6) popup_cale_lunar_info_window_g1

0x5c1b,	// (0x0002b47e) main_fmradio_pane_t3

0xbc6b,	// (0x000314ce) popup_cale_lunar_info_window_g2

0x5c29,	// (0x0002b48c) main_fmradio_pane_t4

0x0001,

0x5c37,	// (0x0002b49a) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x00034dad) popup_cale_lunar_info_window_g

0xf46c,	// (0x00034ccf) main_fmradio_pane_t

0x5c45,	// (0x0002b4a8) wait_bar_pane_cp03

0x5c4d,	// (0x0002b4b0) cell_fmradio_pane_ParamLimits

0x5c4d,	// (0x0002b4b0) cell_fmradio_pane

0x5846,	// (0x0002b0a9) cell_fmradio_pane_g1_ParamLimits

0x5846,	// (0x0002b0a9) cell_fmradio_pane_g1

0x2921,	// (0x00028184) grid_highlight_pane_cp011

0x5c60,	// (0x0002b4c3) poc_content_pane_ParamLimits

0x5c60,	// (0x0002b4c3) poc_content_pane

0x5c72,	// (0x0002b4d5) scroll_pane_cp019

0x5c7a,	// (0x0002b4dd) popup_call_poc_act_window_ParamLimits

0x5c7a,	// (0x0002b4dd) popup_call_poc_act_window

0x5c9e,	// (0x0002b501) popup_call_poc_inact_window_ParamLimits

0x5c9e,	// (0x0002b501) popup_call_poc_inact_window

0xf50e,	// (0x00034d71) bg_popup_call_poc_act_pane_g

0xbc1b,	// (0x0003147e) bg_popup_call_poc_inact_pane_g1

0xbc23,	// (0x00031486) bg_popup_call_poc_inact_pane_g2

0x5cb7,	// (0x0002b51a) popup_call_poc_act_window_g2

0xbc2b,	// (0x0003148e) bg_popup_call_poc_inact_pane_g3

0xbbab,	// (0x0003140e) bg_popup_call_poc_inact_pane_g4

0xbc33,	// (0x00031496) bg_popup_call_poc_inact_pane_g5

0x5cbf,	// (0x0002b522) popup_call_poc_act_window_t1_ParamLimits

0x5cbf,	// (0x0002b522) popup_call_poc_act_window_t1

0x5ce7,	// (0x0002b54a) popup_call_poc_act_window_t2_ParamLimits

0x5ce7,	// (0x0002b54a) popup_call_poc_act_window_t2

0x5d0f,	// (0x0002b572) popup_call_poc_act_window_t3_ParamLimits

0x5d0f,	// (0x0002b572) popup_call_poc_act_window_t3

0x5d37,	// (0x0002b59a) popup_call_poc_act_window_t4_ParamLimits

0x5d37,	// (0x0002b59a) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x00034cda) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x00034cda) popup_call_poc_act_window_t

0xbc3b,	// (0x0003149e) bg_popup_call_poc_inact_pane_g6

0xbc43,	// (0x000314a6) bg_popup_call_poc_inact_pane_g7

0xbc4b,	// (0x000314ae) bg_popup_call_poc_inact_pane_g8

0x5d49,	// (0x0002b5ac) popup_call_poc_inact_window_g2

0xbc53,	// (0x000314b6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x00034d88) bg_popup_call_poc_inact_pane_g

0x5d51,	// (0x0002b5b4) popup_call_poc_inact_window_t1_ParamLimits

0x5d51,	// (0x0002b5b4) popup_call_poc_inact_window_t1

0x5d66,	// (0x0002b5c9) popup_call_poc_inact_window_t2_ParamLimits

0x5d66,	// (0x0002b5c9) popup_call_poc_inact_window_t2

0x5d7b,	// (0x0002b5de) popup_call_poc_inact_window_t3_ParamLimits

0x5d7b,	// (0x0002b5de) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00034ce3) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00034ce3) popup_call_poc_inact_window_t

0xbd53,	// (0x000315b6) context_pane_ParamLimits

0x6b81,	// (0x0002c3e4) signal_pane_ParamLimits

0x34bd,	// (0x00028d20) main_call2_pane

0xbd2c,	// (0x0003158f) popup_phob_thumbnail2_window_ParamLimits

0xbd2c,	// (0x0003158f) popup_phob_thumbnail2_window

0xb5e6,	// (0x00030e49) aid_hotspot_pointer_arrow_pane

0xb5ee,	// (0x00030e51) aid_hotspot_pointer_hand_pane

0x6923,	// (0x0002c186) phob_pre_status_pane_g5

0x2b9e,	// (0x00028401) cams_zoom_pane_ParamLimits

0x2b9e,	// (0x00028401) image_vga_pane_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g1_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g2_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g3_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g4_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g5_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g6_ParamLimits

0x2c05,	// (0x00028468) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00034a0e) main_camera_pane_g_ParamLimits

0x3526,	// (0x00028d89) main_camera_pane_t1_ParamLimits

0x3526,	// (0x00028d89) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00034a1f) main_camera_pane_t_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_preview_window_pane_cp01_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_preview_window_pane_cp01

0x5d90,	// (0x0002b5f3) popup_phob_thumbnail2_window_g1_ParamLimits

0x5d90,	// (0x0002b5f3) popup_phob_thumbnail2_window_g1

0x2921,	// (0x00028184) call2_cli_visual_pane

0x5db7,	// (0x0002b61a) popup_call2_audio_conf_window_ParamLimits

0x5db7,	// (0x0002b61a) popup_call2_audio_conf_window

0x5dd7,	// (0x0002b63a) popup_call2_audio_first_window_ParamLimits

0x5dd7,	// (0x0002b63a) popup_call2_audio_first_window

0x5e6d,	// (0x0002b6d0) popup_call2_audio_in_window_ParamLimits

0x5e6d,	// (0x0002b6d0) popup_call2_audio_in_window

0x5eb5,	// (0x0002b718) popup_call2_audio_out_window_ParamLimits

0x5eb5,	// (0x0002b718) popup_call2_audio_out_window

0x5f1f,	// (0x0002b782) popup_call2_audio_second_window_ParamLimits

0x5f1f,	// (0x0002b782) popup_call2_audio_second_window

0x5f85,	// (0x0002b7e8) popup_call2_audio_wait_window_ParamLimits

0x5f85,	// (0x0002b7e8) popup_call2_audio_wait_window

0x2921,	// (0x00028184) bg_popup_call2_act_pane_cp03

0x2b5e,	// (0x000283c1) list_conf_pane_cp

0x5fbf,	// (0x0002b822) popup_call2_audio_conf_window_t1

0x5fcd,	// (0x0002b830) list_single_graphic_popup_conf2_pane_ParamLimits

0x5fcd,	// (0x0002b830) list_single_graphic_popup_conf2_pane

0x4cdf,	// (0x0002a542) list_highlight_pane_cp04

0x5fe0,	// (0x0002b843) list_single_graphic_popup_conf2_pane_g1

0x4cf0,	// (0x0002a553) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x00034cea) list_single_graphic_popup_conf2_pane_g

0x5fea,	// (0x0002b84d) list_single_graphic_popup_conf2_pane_t1

0x5ff8,	// (0x0002b85b) bg_popup_call2_act_pane_cp01_ParamLimits

0x5ff8,	// (0x0002b85b) bg_popup_call2_act_pane_cp01

0x6082,	// (0x0002b8e5) call_type_pane_cp05_ParamLimits

0x6082,	// (0x0002b8e5) call_type_pane_cp05

0x60d6,	// (0x0002b939) popup_call2_audio_second_window_g1_ParamLimits

0x60d6,	// (0x0002b939) popup_call2_audio_second_window_g1

0x612a,	// (0x0002b98d) popup_call2_audio_second_window_g2_ParamLimits

0x612a,	// (0x0002b98d) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00034cef) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00034cef) popup_call2_audio_second_window_g

0x618f,	// (0x0002b9f2) popup_call2_audio_second_window_t1_ParamLimits

0x618f,	// (0x0002b9f2) popup_call2_audio_second_window_t1

0x624a,	// (0x0002baad) popup_call2_audio_second_window_t2_ParamLimits

0x624a,	// (0x0002baad) popup_call2_audio_second_window_t2

0x629d,	// (0x0002bb00) popup_call2_audio_second_window_t3_ParamLimits

0x629d,	// (0x0002bb00) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00034cf6) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00034cf6) popup_call2_audio_second_window_t

0x2921,	// (0x00028184) bg_popup_call2_in_pane_cp02

0x292b,	// (0x0002818e) call_type_pane_cp04

0x6390,	// (0x0002bbf3) popup_call2_audio_wait_window_g1

0x6398,	// (0x0002bbfb) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00034cff) popup_call2_audio_wait_window_g

0x2943,	// (0x000281a6) popup_call2_audio_wait_window_t3

0x63a0,	// (0x0002bc03) bg_popup_call2_act_pane_ParamLimits

0x63a0,	// (0x0002bc03) bg_popup_call2_act_pane

0x6460,	// (0x0002bcc3) call_type_pane_cp03_ParamLimits

0x6460,	// (0x0002bcc3) call_type_pane_cp03

0x64c4,	// (0x0002bd27) popup_call2_audio_first_window_g1_ParamLimits

0x64c4,	// (0x0002bd27) popup_call2_audio_first_window_g1

0x6534,	// (0x0002bd97) popup_call2_audio_first_window_g2_ParamLimits

0x6534,	// (0x0002bd97) popup_call2_audio_first_window_g2

0x6598,	// (0x0002bdfb) popup_call2_audio_first_window_g3_ParamLimits

0x6598,	// (0x0002bdfb) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00034d04) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00034d04) popup_call2_audio_first_window_g

0x6620,	// (0x0002be83) popup_call2_audio_first_window_t1_ParamLimits

0x6620,	// (0x0002be83) popup_call2_audio_first_window_t1

0x6723,	// (0x0002bf86) popup_call2_audio_first_window_t4_ParamLimits

0x6723,	// (0x0002bf86) popup_call2_audio_first_window_t4

0xb61c,	// (0x00030e7f) popup_call2_audio_first_window_t5_ParamLimits

0xb61c,	// (0x00030e7f) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00034d0f) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00034d0f) popup_call2_audio_first_window_t

0x2b74,	// (0x000283d7) bg_popup_call2_act_pane_g1

0xbc73,	// (0x000314d6) popup_cale_lunar_info_window_t1

0xbc81,	// (0x000314e4) popup_cale_lunar_info_window_t2

0xbc8f,	// (0x000314f2) popup_cale_lunar_info_window_t3

0x2921,	// (0x00028184) bg_popup_call2_bubble_pane

0xb71d,	// (0x00030f80) bg_popup_call2_in_pane_cp01_ParamLimits

0xb71d,	// (0x00030f80) bg_popup_call2_in_pane_cp01

0x25d9,	// (0x00027e3c) call_type_pane_cp02

0x6806,	// (0x0002c069) popup_call2_audio_out_window_g1_ParamLimits

0x6806,	// (0x0002c069) popup_call2_audio_out_window_g1

0xb765,	// (0x00030fc8) popup_call2_audio_out_window_g2_ParamLimits

0xb765,	// (0x00030fc8) popup_call2_audio_out_window_g2

0x6832,	// (0x0002c095) popup_call2_audio_out_window_g3_ParamLimits

0x6832,	// (0x0002c095) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x00034d18) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x00034d18) popup_call2_audio_out_window_g

0xb79c,	// (0x00030fff) popup_call2_audio_out_window_t1_ParamLimits

0xb79c,	// (0x00030fff) popup_call2_audio_out_window_t1

0xb7fb,	// (0x0003105e) popup_call2_audio_out_window_t2_ParamLimits

0xb7fb,	// (0x0003105e) popup_call2_audio_out_window_t2

0xb84f,	// (0x000310b2) popup_call2_audio_out_window_t3_ParamLimits

0xb84f,	// (0x000310b2) popup_call2_audio_out_window_t3

0xb865,	// (0x000310c8) popup_call2_audio_out_window_t4_ParamLimits

0xb865,	// (0x000310c8) popup_call2_audio_out_window_t4

0xb87b,	// (0x000310de) popup_call2_audio_out_window_t5_ParamLimits

0xb87b,	// (0x000310de) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00034d21) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00034d21) popup_call2_audio_out_window_t

0xb8df,	// (0x00031142) bg_popup_call2_in_pane_ParamLimits

0xb8df,	// (0x00031142) bg_popup_call2_in_pane

0xb93b,	// (0x0003119e) popup_call2_audio_in_window_g1_ParamLimits

0xb93b,	// (0x0003119e) popup_call2_audio_in_window_g1

0xb973,	// (0x000311d6) popup_call2_audio_in_window_g2_ParamLimits

0xb973,	// (0x000311d6) popup_call2_audio_in_window_g2

0xb9ab,	// (0x0003120e) popup_call2_audio_in_window_g3_ParamLimits

0xb9ab,	// (0x0003120e) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00034d2e) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00034d2e) popup_call2_audio_in_window_g

0xba03,	// (0x00031266) popup_call2_audio_in_window_t1_ParamLimits

0xba03,	// (0x00031266) popup_call2_audio_in_window_t1

0xba83,	// (0x000312e6) popup_call2_audio_in_window_t2_ParamLimits

0xba83,	// (0x000312e6) popup_call2_audio_in_window_t2

0xbb03,	// (0x00031366) popup_call2_audio_in_window_t3_ParamLimits

0xbb03,	// (0x00031366) popup_call2_audio_in_window_t3

0xbb1d,	// (0x00031380) popup_call2_audio_in_window_t4_ParamLimits

0xbb1d,	// (0x00031380) popup_call2_audio_in_window_t4

0xbb2f,	// (0x00031392) popup_call2_audio_in_window_t5_ParamLimits

0xbb2f,	// (0x00031392) popup_call2_audio_in_window_t5

0xbb41,	// (0x000313a4) popup_call2_audio_in_window_t6_ParamLimits

0xbb41,	// (0x000313a4) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00034d37) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00034d37) popup_call2_audio_in_window_t

0x2b74,	// (0x000283d7) bg_popup_call2_in_pane_g1

0xbc9d,	// (0x00031500) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x00034db2) popup_cale_lunar_info_window_t

0x2b7c,	// (0x000283df) bg_popup_call2_rect_pane_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_call2_rect_pane

0x2921,	// (0x00028184) call2_cli_visual_graphic_pane

0x2921,	// (0x00028184) call2_cli_visual_text_pane

0xbdee,	// (0x00031651) smil_status_volume_pane_g3

0x0002,

0x2b94,	// (0x000283f7) call2_cli_visual_graphic_pane_g1

0x2b94,	// (0x000283f7) call2_cli_visual_graphic_pane_g2

0x2b94,	// (0x000283f7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00034d44) call2_cli_visual_graphic_pane_g

0xbb53,	// (0x000313b6) bg_popup_call2_rect_pane_g1

0x2f14,	// (0x00028777) bg_popup_call2_rect_pane_g2

0xbb5b,	// (0x000313be) bg_popup_call2_rect_pane_g3

0xbb63,	// (0x000313c6) bg_popup_call2_rect_pane_g4

0xbb6b,	// (0x000313ce) bg_popup_call2_rect_pane_g5

0xbb73,	// (0x000313d6) bg_popup_call2_rect_pane_g6

0xbb7b,	// (0x000313de) bg_popup_call2_rect_pane_g7

0xbb83,	// (0x000313e6) bg_popup_call2_rect_pane_g8

0xbb8b,	// (0x000313ee) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00034d4b) bg_popup_call2_rect_pane_g

0xbb93,	// (0x000313f6) bg_popup_call2_bubble_pane_g1

0xbb9b,	// (0x000313fe) bg_popup_call2_bubble_pane_g2

0xbba3,	// (0x00031406) bg_popup_call2_bubble_pane_g3

0xbbab,	// (0x0003140e) bg_popup_call2_bubble_pane_g4

0xbbb3,	// (0x00031416) bg_popup_call2_bubble_pane_g5

0xbbbb,	// (0x0003141e) bg_popup_call2_bubble_pane_g6

0xbbc3,	// (0x00031426) bg_popup_call2_bubble_pane_g7

0xbbcb,	// (0x0003142e) bg_popup_call2_bubble_pane_g8

0xbbd3,	// (0x00031436) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00034d5e) bg_popup_call2_bubble_pane_g

0x2fa6,	// (0x00028809) aid_cale_week_size_cell_pane

0x353a,	// (0x00028d9d) aid_cams_cif_uncrop_pane_ParamLimits

0x353a,	// (0x00028d9d) aid_cams_cif_uncrop_pane

0x36b4,	// (0x00028f17) aid_cams_size_cell_ParamLimits

0x36b4,	// (0x00028f17) aid_cams_size_cell

0x36c8,	// (0x00028f2b) grid_cams_pane_ParamLimits

0x36e2,	// (0x00028f45) linegrid_cams_pane_ParamLimits

0x3817,	// (0x0002907a) call_video_pane_t1

0x3835,	// (0x00029098) call_video_pane_t2

0x0001,

0xf208,	// (0x00034a6b) call_video_pane_t

0x3ead,	// (0x00029710) aid_cale_month_size_cell_pane_ParamLimits

0x3ead,	// (0x00029710) aid_cale_month_size_cell_pane

0xf593,	// (0x00034df6) smil_status_volume_pane_g

0xbdfb,	// (0x0003165e) volume_smil_pane_ParamLimits

0xb415,	// (0x00030c78) aid_popup2_width_pane

0x2e6c,	// (0x000286cf) cell_qdial_pane_g4_ParamLimits

0x2e6c,	// (0x000286cf) cell_qdial_pane_g4

0x4fb6,	// (0x0002a819) aid_blid_cardinal_pane_ParamLimits

0x4fc2,	// (0x0002a825) aid_blid_destination_pane_ParamLimits

0x4fc2,	// (0x0002a825) aid_blid_destination_pane

0x2b7c,	// (0x000283df) bg_popup_call_poc_act_pane_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_call_poc_act_pane

0x2b7c,	// (0x000283df) bg_popup_call_poc_inact_pane_ParamLimits

0x2b7c,	// (0x000283df) bg_popup_call_poc_inact_pane

0xbbdb,	// (0x0003143e) bg_popup_call_poc_act_pane_g1

0xbbe3,	// (0x00031446) bg_popup_call_poc_act_pane_g2

0xbbeb,	// (0x0003144e) bg_popup_call_poc_act_pane_g3

0xbbab,	// (0x0003140e) bg_popup_call_poc_act_pane_g4

0xbbb3,	// (0x00031416) bg_popup_call_poc_act_pane_g5

0xbbf3,	// (0x00031456) bg_popup_call_poc_act_pane_g6

0xbbc3,	// (0x00031426) bg_popup_call_poc_act_pane_g7

0xbbfb,	// (0x0003145e) bg_popup_call_poc_act_pane_g8

0x2921,	// (0x00028184) main_usb_pane

0xbd07,	// (0x0003156a) popup_cale_lunar_info_window

0x3b61,	// (0x000293c4) im_reading_pane_t1_ParamLimits

0x3b9b,	// (0x000293fe) list_im_pane_ParamLimits

0x3bac,	// (0x0002940f) scroll_pane_cp07_ParamLimits

0x2921,	// (0x00028184) grid_highlight_pane_cp012

0x2b7c,	// (0x000283df) mup_scale_pane_ParamLimits

0x5846,	// (0x0002b0a9) main_usb_pane_g1_ParamLimits

0x5846,	// (0x0002b0a9) main_usb_pane_g1

0x6881,	// (0x0002c0e4) main_usb_pane_g2_ParamLimits

0x6881,	// (0x0002c0e4) main_usb_pane_g2

0x0001,

0xf538,	// (0x00034d9b) main_usb_pane_g_ParamLimits

0xf538,	// (0x00034d9b) main_usb_pane_g

0x6897,	// (0x0002c0fa) main_usb_pane_t1_ParamLimits

0x6897,	// (0x0002c0fa) main_usb_pane_t1

0x68a9,	// (0x0002c10c) main_usb_pane_t2_ParamLimits

0x68a9,	// (0x0002c10c) main_usb_pane_t2

0x68bb,	// (0x0002c11e) main_usb_pane_t3_ParamLimits

0x68bb,	// (0x0002c11e) main_usb_pane_t3

0x68cd,	// (0x0002c130) main_usb_pane_t4_ParamLimits

0x68cd,	// (0x0002c130) main_usb_pane_t4

0x68df,	// (0x0002c142) main_usb_pane_t5_ParamLimits

0x68df,	// (0x0002c142) main_usb_pane_t5

0x68f1,	// (0x0002c154) main_usb_pane_t6_ParamLimits

0x68f1,	// (0x0002c154) main_usb_pane_t6

0x0005,

0xf53d,	// (0x00034da0) main_usb_pane_t_ParamLimits

0x4f65,	// (0x0002a7c8) aid_text_placing

0x4f6e,	// (0x0002a7d1) main_location2_pane_t1_ParamLimits

0x4f80,	// (0x0002a7e3) main_location2_pane_t2_ParamLimits

0x4f92,	// (0x0002a7f5) main_location2_pane_t3_ParamLimits

0x4fa4,	// (0x0002a807) main_location2_pane_t4_ParamLimits

0x4fa4,	// (0x0002a807) main_location2_pane_t4

0xf344,	// (0x00034ba7) main_location2_pane_t_ParamLimits

0x2bb8,	// (0x0002841b) find_pinb_pane_g2_ParamLimits

0x2bb8,	// (0x0002841b) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00034923) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00034923) find_pinb_pane_g

0x2bc4,	// (0x00028427) find_pinb_pane_t1_ParamLimits

0x2bd6,	// (0x00028439) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00034928) find_pinb_pane_t_ParamLimits

0x2921,	// (0x00028184) main_call3_pane

0x43d3,	// (0x00029c36) cale_month_day_heading_pane_t1_ParamLimits

0x4415,	// (0x00029c78) cale_month_day_heading_pane_t2_ParamLimits

0x444a,	// (0x00029cad) cale_month_day_heading_pane_t3_ParamLimits

0x447f,	// (0x00029ce2) cale_month_day_heading_pane_t4_ParamLimits

0x44bc,	// (0x00029d1f) cale_month_day_heading_pane_t5_ParamLimits

0x4501,	// (0x00029d64) cale_month_day_heading_pane_t6_ParamLimits

0x4546,	// (0x00029da9) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00034aa3) cale_month_day_heading_pane_t_ParamLimits

0x4784,	// (0x00029fe7) smil_status_volume_pane

0x5822,	// (0x0002b085) postcard_address_pane_ParamLimits

0x5822,	// (0x0002b085) postcard_address_pane

0x5834,	// (0x0002b097) postcard_message_pane_ParamLimits

0x5834,	// (0x0002b097) postcard_message_pane

0x685e,	// (0x0002c0c1) call2_cli_visual_pane_t1_ParamLimits

0x685e,	// (0x0002c0c1) call2_cli_visual_pane_t1

0xbe28,	// (0x0003168b) postcard_message_pane_t1_ParamLimits

0xbe28,	// (0x0003168b) postcard_message_pane_t1

0xbe10,	// (0x00031673) postcard_address_pane_t1_ParamLimits

0xbe10,	// (0x00031673) postcard_address_pane_t1

0x6d34,	// (0x0002c597) popup_call3_audio_in_window_ParamLimits

0x6d34,	// (0x0002c597) popup_call3_audio_in_window

0x6bbf,	// (0x0002c422) bg_popup_call3_in_pane_ParamLimits

0x6bbf,	// (0x0002c422) bg_popup_call3_in_pane

0x6c35,	// (0x0002c498) popup_call3_audio_in_window_g1_ParamLimits

0x6c35,	// (0x0002c498) popup_call3_audio_in_window_g1

0x6c55,	// (0x0002c4b8) popup_call3_audio_in_window_g2_ParamLimits

0x6c55,	// (0x0002c4b8) popup_call3_audio_in_window_g2

0x6c75,	// (0x0002c4d8) popup_call3_audio_in_window_g3_ParamLimits

0x6c75,	// (0x0002c4d8) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x00034dfd) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x00034dfd) popup_call3_audio_in_window_g

0x6ca6,	// (0x0002c509) popup_call3_audio_in_window_t1_ParamLimits

0x6ca6,	// (0x0002c509) popup_call3_audio_in_window_t1

0x6ce4,	// (0x0002c547) popup_call3_audio_in_window_t2_ParamLimits

0x6ce4,	// (0x0002c547) popup_call3_audio_in_window_t2

0x6d22,	// (0x0002c585) popup_call3_audio_in_window_t3_ParamLimits

0x6d22,	// (0x0002c585) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x00034e06) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x00034e06) popup_call3_audio_in_window_t

0x34bd,	// (0x00028d20) bg_popup_call3_rect_pane

0xbb53,	// (0x000313b6) bg_popup_call3_rect_pane_g1

0x2f14,	// (0x00028777) bg_popup_call3_rect_pane_g2

0xbb5b,	// (0x000313be) bg_popup_call3_rect_pane_g3

0xbb63,	// (0x000313c6) bg_popup_call3_rect_pane_g4

0xbb6b,	// (0x000313ce) bg_popup_call3_rect_pane_g5

0xbb73,	// (0x000313d6) bg_popup_call3_rect_pane_g6

0xbb7b,	// (0x000313de) bg_popup_call3_rect_pane_g7

0x2466,	// (0x00027cc9) mup_visualizer_osc_pane

0x2466,	// (0x00027cc9) mup_visualizer_spec_pane

0x6bef,	// (0x0002c452) call3_video_qcif_pane_ParamLimits

0x6bef,	// (0x0002c452) call3_video_qcif_pane

0x6c02,	// (0x0002c465) call3_video_qcif_uncrop_pane_ParamLimits

0x6c02,	// (0x0002c465) call3_video_qcif_uncrop_pane

0x6c10,	// (0x0002c473) call3_video_subqcif_pane_ParamLimits

0x6c10,	// (0x0002c473) call3_video_subqcif_pane

0x6c24,	// (0x0002c487) call3_video_subqcif_uncrop_pane_ParamLimits

0x6c24,	// (0x0002c487) call3_video_subqcif_uncrop_pane

0x6c95,	// (0x0002c4f8) popup_call3_audio_in_window_g4_ParamLimits

0x6c95,	// (0x0002c4f8) popup_call3_audio_in_window_g4

0x2466,	// (0x00027cc9) mup_spec_half_pane

0x2466,	// (0x00027cc9) mup_spec_half_pane_cp

0x2466,	// (0x00027cc9) mup_osc_middle_pane

0x36aa,	// (0x00028f0d) mup_visualizer_osc_pane_g1

0xbda1,	// (0x00031604) mup_spec_bar_pane_ParamLimits

0xbda1,	// (0x00031604) mup_spec_bar_pane

0x36aa,	// (0x00028f0d) mup_spec_bar_pane_g1

0x36aa,	// (0x00028f0d) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00034c21) mup_spec_bar_pane_g

0x2fa6,	// (0x00028809) aid_cale_week_size_cell_pane_ParamLimits

0x2fc0,	// (0x00028823) bg_cale_heading_pane_ParamLimits

0x2fd8,	// (0x0002883b) bg_cale_pane_cp01_ParamLimits

0x2ff5,	// (0x00028858) cale_week_corner_pane_ParamLimits

0x3014,	// (0x00028877) cale_week_day_heading_pane_ParamLimits

0x3031,	// (0x00028894) cale_week_scroll_pane_g1_ParamLimits

0x3044,	// (0x000288a7) cale_week_scroll_pane_g2_ParamLimits

0x305c,	// (0x000288bf) cale_week_scroll_pane_g3_ParamLimits

0x3074,	// (0x000288d7) cale_week_scroll_pane_g4_ParamLimits

0x308c,	// (0x000288ef) cale_week_scroll_pane_g5_ParamLimits

0x30ac,	// (0x0002890f) cale_week_scroll_pane_g6_ParamLimits

0x30cc,	// (0x0002892f) cale_week_scroll_pane_g7_ParamLimits

0x30ec,	// (0x0002894f) cale_week_scroll_pane_g8_ParamLimits

0x3110,	// (0x00028973) cale_week_scroll_pane_g9_ParamLimits

0x3128,	// (0x0002898b) cale_week_scroll_pane_g10_ParamLimits

0x3140,	// (0x000289a3) cale_week_scroll_pane_g11_ParamLimits

0x3158,	// (0x000289bb) cale_week_scroll_pane_g12_ParamLimits

0x3170,	// (0x000289d3) cale_week_scroll_pane_g13_ParamLimits

0x3170,	// (0x000289d3) cale_week_scroll_pane_g14_ParamLimits

0x3170,	// (0x000289d3) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000349b4) cale_week_scroll_pane_g_ParamLimits

0x31ac,	// (0x00028a0f) cale_week_time_pane_ParamLimits

0x31d0,	// (0x00028a33) grid_cale_week_pane_ParamLimits

0x31f6,	// (0x00028a59) listscroll_cale_week_pane_t1

0x3208,	// (0x00028a6b) scroll_pane_cp08_ParamLimits

0x3f3a,	// (0x0002979d) cale_month_corner_pane_ParamLimits

0x4354,	// (0x00029bb7) cale_month_pane_t1

0x4366,	// (0x00029bc9) cale_month_week_pane_ParamLimits

0x4bdb,	// (0x0002a43e) popup_call_status_window_g1_ParamLimits

0x4bef,	// (0x0002a452) popup_call_status_window_g2_ParamLimits

0x4c03,	// (0x0002a466) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00034b2e) popup_call_status_window_g_ParamLimits

0x4c6b,	// (0x0002a4ce) aid_call2_pane

0x5663,	// (0x0002aec6) msg_header_pane_g1

0x5822,	// (0x0002b085) postcard_address2_pane_ParamLimits

0x5822,	// (0x0002b085) postcard_address2_pane

0x5834,	// (0x0002b097) postcard_message2_pane_ParamLimits

0x5834,	// (0x0002b097) postcard_message2_pane

0x6b8f,	// (0x0002c3f2) message2_row_pane_ParamLimits

0x6b8f,	// (0x0002c3f2) message2_row_pane

0x6bac,	// (0x0002c40f) address2_row_pane_ParamLimits

0x6bac,	// (0x0002c40f) address2_row_pane

0xbd6e,	// (0x000315d1) postcard_message2_row_pane_g1

0xbd76,	// (0x000315d9) postcard_message2_row_pane_t1

0xbd6e,	// (0x000315d1) address2_row_pane_g1

0xbd76,	// (0x000315d9) address2_row_pane_t1

0x34b5,	// (0x00028d18) aid_size_cell_vorec

0x2921,	// (0x00028184) main_rss_pane

0xbd84,	// (0x000315e7) rss_list_single_pane_ParamLimits

0xbd84,	// (0x000315e7) rss_list_single_pane

0xbd92,	// (0x000315f5) rss_list_single_pane_t1

0xbd92,	// (0x000315f5) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x00034df1) rss_list_single_pane_t

0x2921,	// (0x00028184) main_camera2_pane

0x2921,	// (0x00028184) main_video2_pane

0xbe44,	// (0x000316a7) cams_zoom_pane_cp2_ParamLimits

0xbe44,	// (0x000316a7) cams_zoom_pane_cp2

0xbe44,	// (0x000316a7) image2_vga_pane_ParamLimits

0xbe44,	// (0x000316a7) image2_vga_pane

0xbe52,	// (0x000316b5) main_camera2_pane_g1_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g1

0xbe52,	// (0x000316b5) main_camera2_pane_g2_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g2

0xbe52,	// (0x000316b5) main_camera2_pane_g3_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g3

0xbe52,	// (0x000316b5) main_camera2_pane_g4_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g4

0xbe52,	// (0x000316b5) main_camera2_pane_g5_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g5

0xbe52,	// (0x000316b5) main_camera2_pane_g6_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g6

0xbe52,	// (0x000316b5) main_camera2_pane_g7_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g7

0xbe52,	// (0x000316b5) main_camera2_pane_g8_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x00034e0d) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x00034e0d) main_camera2_pane_g

0x1748,	// (0x00026fab) main_camera2_pane_t1_ParamLimits

0x1748,	// (0x00026fab) main_camera2_pane_t1

0x1748,	// (0x00026fab) main_camera2_pane_t2_ParamLimits

0x1748,	// (0x00026fab) main_camera2_pane_t2

0x1748,	// (0x00026fab) main_camera2_pane_t3_ParamLimits

0x1748,	// (0x00026fab) main_camera2_pane_t3

0x1748,	// (0x00026fab) main_camera2_pane_t4_ParamLimits

0x1748,	// (0x00026fab) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x00034e20) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x00034e20) main_camera2_pane_t

0xbe96,	// (0x000316f9) cams_zoom_pane_cp4_ParamLimits

0xbe96,	// (0x000316f9) cams_zoom_pane_cp4

0x175c,	// (0x00026fbf) image2_cif_pane_ParamLimits

0x175c,	// (0x00026fbf) image2_cif_pane

0xb472,	// (0x00030cd5) image2_subqcif_pane_ParamLimits

0xb472,	// (0x00030cd5) image2_subqcif_pane

0x176a,	// (0x00026fcd) main_video2_pane_g1_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g1

0x176a,	// (0x00026fcd) main_video2_pane_g2_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g2

0x176a,	// (0x00026fcd) main_video2_pane_g3_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g3

0x176a,	// (0x00026fcd) main_video2_pane_g4_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g4

0x176a,	// (0x00026fcd) main_video2_pane_g5_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g5

0x176a,	// (0x00026fcd) main_video2_pane_g6_ParamLimits

0x176a,	// (0x00026fcd) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x00034e2f) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x00034e2f) main_video2_pane_g

0x1778,	// (0x00026fdb) main_video2_pane_t1_ParamLimits

0x1778,	// (0x00026fdb) main_video2_pane_t1

0x1778,	// (0x00026fdb) main_video2_pane_t2_ParamLimits

0x1778,	// (0x00026fdb) main_video2_pane_t2

0x1778,	// (0x00026fdb) main_video2_pane_t3_ParamLimits

0x1778,	// (0x00026fdb) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x00034e3c) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x00034e3c) main_video2_pane_t

0x6985,	// (0x0002c1e8) call_muted_g2

0x0001,

0xf580,	// (0x00034de3) call_muted_g

0x2921,	// (0x00028184) main_mup2_pane

0x5309,	// (0x0002ab6c) main_mup2_pane_g1_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g1

0x5309,	// (0x0002ab6c) main_mup2_pane_g2_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g2

0xbf8e,	// (0x000317f1) main_mup_pane_g13_cp1

0xb480,	// (0x00030ce3) mup_volume_pane_cp1

0x5309,	// (0x0002ab6c) main_mup2_pane_g4_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g4

0x5309,	// (0x0002ab6c) main_mup2_pane_g5_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g5

0x5309,	// (0x0002ab6c) main_mup2_pane_g6_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g6

0x5309,	// (0x0002ab6c) main_mup2_pane_g7_ParamLimits

0x5309,	// (0x0002ab6c) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x00034e43) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x00034e43) main_mup2_pane_g

0x5317,	// (0x0002ab7a) main_mup2_pane_t1_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t1

0x5317,	// (0x0002ab7a) main_mup2_pane_t2_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t2

0x5317,	// (0x0002ab7a) main_mup2_pane_t3_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t3

0x5317,	// (0x0002ab7a) main_mup2_pane_t4_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t4

0x5317,	// (0x0002ab7a) main_mup2_pane_t5_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t5

0x5317,	// (0x0002ab7a) main_mup2_pane_t6_ParamLimits

0x5317,	// (0x0002ab7a) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x00034e52) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x00034e52) main_mup2_pane_t

0x533f,	// (0x0002aba2) mup2_visualizer_pane_ParamLimits

0x533f,	// (0x0002aba2) mup2_visualizer_pane

0x533f,	// (0x0002aba2) mup_progress_pane_cp_ParamLimits

0x533f,	// (0x0002aba2) mup_progress_pane_cp

0xbf6f,	// (0x000317d2) mup_volume_pane_cp_ParamLimits

0xbf6f,	// (0x000317d2) mup_volume_pane_cp

0x2c05,	// (0x00028468) mup2_visualizer_pane_g1_ParamLimits

0x2c05,	// (0x00028468) mup2_visualizer_pane_g1

0x2c13,	// (0x00028476) mup2_visualizer_pane_g2_ParamLimits

0x2c13,	// (0x00028476) mup2_visualizer_pane_g2

0x2c13,	// (0x00028476) mup2_visualizer_pane_g3_ParamLimits

0x2c13,	// (0x00028476) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0003492d) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0003492d) mup2_visualizer_pane_g

0x5bef,	// (0x0002b452) aid_size_cell_fmradio

0x1486,	// (0x00026ce9) aid_height_parent_landcape

0x3c63,	// (0x000294c6) wml_content_pane_cp

0x3c6b,	// (0x000294ce) wml_tabs_pane

0x3c74,	// (0x000294d7) popup_wml_miniature_window

0x3c7c,	// (0x000294df) scroll_pane_cp021

0x3c90,	// (0x000294f3) wml_content_pane_comp8

0x2921,	// (0x00028184) bg_popup_sub_pane_cp05

0xbeba,	// (0x0003171d) popup_wml_miniature_window_g1

0xbec2,	// (0x00031725) wml_miniature_view_pane

0x6d48,	// (0x0002c5ab) aid_size_wml_view

0x6d50,	// (0x0002c5b3) wml_miniature_view_pane_g1

0x6d59,	// (0x0002c5bc) wml_miniature_view_pane_g2

0x6d62,	// (0x0002c5c5) wml_miniature_view_pane_g3

0x6d6a,	// (0x0002c5cd) wml_miniature_view_pane_g4

0x6d72,	// (0x0002c5d5) wml_miniature_view_pane_g5

0x6d7a,	// (0x0002c5dd) wml_miniature_view_pane_g6

0x6d82,	// (0x0002c5e5) wml_miniature_view_pane_g7

0x6d8a,	// (0x0002c5ed) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x00034e5f) wml_miniature_view_pane_g

0xbeca,	// (0x0003172d) background_graphic_ParamLimits

0xbeca,	// (0x0003172d) background_graphic

0xbed6,	// (0x00031739) wml_tabs_2_pane

0xbedf,	// (0x00031742) wml_tabs_3_pane_ParamLimits

0xbedf,	// (0x00031742) wml_tabs_3_pane

0xbef1,	// (0x00031754) wml_tabs_4_pane_ParamLimits

0xbef1,	// (0x00031754) wml_tabs_4_pane

0xbf07,	// (0x0003176a) wml_tabs_5_pane_ParamLimits

0xbf07,	// (0x0003176a) wml_tabs_5_pane

0xbf21,	// (0x00031784) wml_tabs_pane_g2_ParamLimits

0xbf21,	// (0x00031784) wml_tabs_pane_g2

0xbf36,	// (0x00031799) wml_tabs_pane_g3_ParamLimits

0xbf36,	// (0x00031799) wml_tabs_pane_g3

0xbf4b,	// (0x000317ae) wml_tabs_2_active_pane_ParamLimits

0xbf4b,	// (0x000317ae) wml_tabs_2_active_pane

0xbf4b,	// (0x000317ae) wml_tabs_2_passive_pane_ParamLimits

0xbf4b,	// (0x000317ae) wml_tabs_2_passive_pane

0x6d92,	// (0x0002c5f5) wml_tabs_3_active_pane_cp_ParamLimits

0x6d92,	// (0x0002c5f5) wml_tabs_3_active_pane_cp

0x6da7,	// (0x0002c60a) wml_tabs_3_passive_pane_ParamLimits

0x6da7,	// (0x0002c60a) wml_tabs_3_passive_pane

0x6dba,	// (0x0002c61d) wml_tabs_3_passive_pane_cp_ParamLimits

0x6dba,	// (0x0002c61d) wml_tabs_3_passive_pane_cp

0x6dd1,	// (0x0002c634) tabs_4_active_pane

0x6dd9,	// (0x0002c63c) tabs_4_passive_pane

0x6de3,	// (0x0002c646) tabs_4_passive_pane_cp

0x6deb,	// (0x0002c64e) tabs_4_passive_pane_cp2

0x6879,	// (0x0002c0dc) aid_height_text

0x533f,	// (0x0002aba2) mup_volume_cont_pane_ParamLimits

0x533f,	// (0x0002aba2) mup_volume_cont_pane

0x2466,	// (0x00027cc9) aid_size_cell_pinb

0x2466,	// (0x00027cc9) aid_size_list_pinb

0x533f,	// (0x0002aba2) mup2_volume_cont_pane_ParamLimits

0x533f,	// (0x0002aba2) mup2_volume_cont_pane

0xbf59,	// (0x000317bc) mup2_volume_cont_pane_g1_ParamLimits

0xbf59,	// (0x000317bc) mup2_volume_cont_pane_g1

0x0fd5,	// (0x00026838) aid_size_cell_touch_ParamLimits

0x0fd5,	// (0x00026838) aid_size_cell_touch

0x11bd,	// (0x00026a20) touch_pane_ParamLimits

0x11bd,	// (0x00026a20) touch_pane

0xb480,	// (0x00030ce3) main_rss2_pane

0xbf98,	// (0x000317fb) listscroll_rss2_pane

0xbfa1,	// (0x00031804) rss2_navigation_pane

0xbfa9,	// (0x0003180c) list_rss2_pane

0x4df3,	// (0x0002a656) scroll_pane_cp22

0xbfb1,	// (0x00031814) rss2_navigation_pane_g1

0xbfba,	// (0x0003181d) rss2_navigation_pane_g2

0xbfc2,	// (0x00031825) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x00034e70) rss2_navigation_pane_g

0xbfca,	// (0x0003182d) rss2_navigation_pane_t1

0x6df5,	// (0x0002c658) rss2_list_single_pane_ParamLimits

0x6df5,	// (0x0002c658) rss2_list_single_pane

0xbfd8,	// (0x0003183b) rss2_list_single_pane_t2

0xbfe6,	// (0x00031849) rss2_list_single_pane_t3_ParamLimits

0xbfe6,	// (0x00031849) rss2_list_single_pane_t3

0xc003,	// (0x00031866) rss2_list_single_pane_t4

0x476c,	// (0x00029fcf) smil_status_pane_g1

0xb472,	// (0x00030cd5) main_image2_pane_ParamLimits

0xb472,	// (0x00030cd5) main_image2_pane

0xbe52,	// (0x000316b5) main_camera2_pane_g9_ParamLimits

0xbe52,	// (0x000316b5) main_camera2_pane_g9

0x1748,	// (0x00026fab) main_camera2_pane_t5_ParamLimits

0x1748,	// (0x00026fab) main_camera2_pane_t5

0xbe60,	// (0x000316c3) main_camera2_pane_t6_ParamLimits

0xbe60,	// (0x000316c3) main_camera2_pane_t6

0x6e0b,	// (0x0002c66e) main_image2_pane_g1_ParamLimits

0x6e0b,	// (0x0002c66e) main_image2_pane_g1

0x5ba5,	// (0x0002b408) smil2_video_pane_ParamLimits

0x5ba5,	// (0x0002b408) smil2_video_pane

0xb421,	// (0x00030c84) aid_zoom_text_primary_cp

0xb468,	// (0x00030ccb) popup_preview_fixed_window

0x3b59,	// (0x000293bc) im_reading_pane_g1

0x173a,	// (0x00026f9d) cams2_bc_adjust_pane_cp_ParamLimits

0x173a,	// (0x00026f9d) cams2_bc_adjust_pane_cp

0xbe88,	// (0x000316eb) cams2_bc_adjust_pane_ParamLimits

0xbe88,	// (0x000316eb) cams2_bc_adjust_pane

0xbf8e,	// (0x000317f1) cams2_bc_adjust_pane_g1

0xb480,	// (0x00030ce3) cams2_slider_pane

0xbf8e,	// (0x000317f1) cams2_slider_pane_g1

0xbf8e,	// (0x000317f1) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x00034e77) cams2_slider_pane_g

0x122d,	// (0x00026a90) calc_display_pane_ParamLimits

0x1252,	// (0x00026ab5) calc_paper_pane_ParamLimits

0x1275,	// (0x00026ad8) grid_calc_pane_ParamLimits

0xb5b7,	// (0x00030e1a) popup_clock_digital_window_t1_ParamLimits

0x5a2c,	// (0x0002b28f) main_image_pane_t1

0x120f,	// (0x00026a72) aid_size_cell_calc_ParamLimits

0x120f,	// (0x00026a72) aid_size_cell_calc

0x14de,	// (0x00026d41) popup_blid_sat_info2_window_ParamLimits

0x14de,	// (0x00026d41) popup_blid_sat_info2_window

0xc011,	// (0x00031874) aid_size_cell_blid

0xc019,	// (0x0003187c) bg_popup_window_pane_cp07

0xc03c,	// (0x0003189f) grid_popup_blid_pane

0xc046,	// (0x000318a9) heading_pane_cp05_ParamLimits

0xc046,	// (0x000318a9) heading_pane_cp05

0xc110,	// (0x00031973) cell_popup_blid_pane_ParamLimits

0xc110,	// (0x00031973) cell_popup_blid_pane

0xc134,	// (0x00031997) cell_popup_blid_pane_g1

0xc13c,	// (0x0003199f) cell_popup_blid_pane_t1

0x533f,	// (0x0002aba2) mup2_indicator_pane_ParamLimits

0x533f,	// (0x0002aba2) mup2_indicator_pane

0x2466,	// (0x00027cc9) mup2_visualizer_osc_pane

0xbea4,	// (0x00031707) mup2_visualizer_spec_pane_ParamLimits

0xbea4,	// (0x00031707) mup2_visualizer_spec_pane

0x2466,	// (0x00027cc9) mup2_spec_half_pane

0x2466,	// (0x00027cc9) mup2_spec_half_pane_cp

0xc14a,	// (0x000319ad) mup2_spec_bar_pane_ParamLimits

0xc14a,	// (0x000319ad) mup2_spec_bar_pane

0x36aa,	// (0x00028f0d) mup2_spec_bar_pane_g1

0xc169,	// (0x000319cc) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x00034e9d) mup2_spec_bar_pane_g

0x2466,	// (0x00027cc9) mup2_osc_middle_pane

0x36aa,	// (0x00028f0d) mup2_visualizer_osc_pane_g1

0x24d5,	// (0x00027d38) popup_number_entry_window_t1_ParamLimits

0x24e8,	// (0x00027d4b) popup_number_entry_window_t2_ParamLimits

0x24fa,	// (0x00027d5d) popup_number_entry_window_t3_ParamLimits

0x250c,	// (0x00027d6f) popup_number_entry_window_t5_ParamLimits

0x250c,	// (0x00027d6f) popup_number_entry_window_t5

0xf06b,	// (0x000348ce) popup_number_entry_window_t_ParamLimits

0x2541,	// (0x00027da4) text_title_cp2_ParamLimits

0xb5f6,	// (0x00030e59) aid_hotspot_pointer_text2_pane

0xb610,	// (0x00030e73) main_viewer_pane_g9_ParamLimits

0xb610,	// (0x00030e73) main_viewer_pane_g9

0x4354,	// (0x00029bb7) cale_month_pane_t1_ParamLimits

0x47e6,	// (0x0002a049) bg_cale_pane_ParamLimits

0x47fe,	// (0x0002a061) list_cale_pane_ParamLimits

0x480f,	// (0x0002a072) listscroll_cale_day_pane_t1

0x4821,	// (0x0002a084) scroll_pane_cp09_ParamLimits

0x53a6,	// (0x0002ac09) main_mup_eq_pane_t1_ParamLimits

0x53a6,	// (0x0002ac09) main_mup_eq_pane_t1

0x53c0,	// (0x0002ac23) main_mup_eq_pane_t2_ParamLimits

0x53c0,	// (0x0002ac23) main_mup_eq_pane_t2

0x53da,	// (0x0002ac3d) main_mup_eq_pane_t3_ParamLimits

0x53da,	// (0x0002ac3d) main_mup_eq_pane_t3

0x53f6,	// (0x0002ac59) main_mup_eq_pane_t4_ParamLimits

0x53f6,	// (0x0002ac59) main_mup_eq_pane_t4

0x5412,	// (0x0002ac75) main_mup_eq_pane_t5_ParamLimits

0x5412,	// (0x0002ac75) main_mup_eq_pane_t5

0x542e,	// (0x0002ac91) main_mup_eq_pane_t6_ParamLimits

0x542e,	// (0x0002ac91) main_mup_eq_pane_t6

0x5442,	// (0x0002aca5) main_mup_eq_pane_t7_ParamLimits

0x5442,	// (0x0002aca5) main_mup_eq_pane_t7

0x5456,	// (0x0002acb9) main_mup_eq_pane_t8_ParamLimits

0x5456,	// (0x0002acb9) main_mup_eq_pane_t8

0x546a,	// (0x0002accd) main_mup_eq_pane_t9_ParamLimits

0x546a,	// (0x0002accd) main_mup_eq_pane_t9

0x5484,	// (0x0002ace7) main_mup_eq_pane_t10_ParamLimits

0x5484,	// (0x0002ace7) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00034c2d) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00034c2d) main_mup_eq_pane_t

0x5533,	// (0x0002ad96) mup_equalizer_pane_cp5_ParamLimits

0x5547,	// (0x0002adaa) mup_equalizer_pane_cp6_ParamLimits

0x555b,	// (0x0002adbe) mup_equalizer_pane_cp7_ParamLimits

0xb480,	// (0x00030ce3) main_gallery_pane

0xbdc0,	// (0x00031623) smil2_volume_pane

0xbdc8,	// (0x0003162b) smil_status_volume_pane_g1_ParamLimits

0xbddb,	// (0x0003163e) smil_status_volume_pane_g2_ParamLimits

0xbdee,	// (0x00031651) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x00034df6) smil_status_volume_pane_g_ParamLimits

0xc019,	// (0x0003187c) bg_popup_window_pane_cp07_ParamLimits

0xc027,	// (0x0003188a) blid_firmament_pane

0x2b9e,	// (0x00028401) aid_size_cell_gallery_ParamLimits

0x2b9e,	// (0x00028401) aid_size_cell_gallery

0x2b9e,	// (0x00028401) grid_gallery_pane_ParamLimits

0x2b9e,	// (0x00028401) grid_gallery_pane

0xc019,	// (0x0003187c) cell_gallery_pane_ParamLimits

0xc019,	// (0x0003187c) cell_gallery_pane

0x2b9e,	// (0x00028401) bg_cell_gallery_focus_pane_ParamLimits

0x2b9e,	// (0x00028401) bg_cell_gallery_focus_pane

0x2c05,	// (0x00028468) cell_gallery_pane_g1_ParamLimits

0x2c05,	// (0x00028468) cell_gallery_pane_g1

0x2c05,	// (0x00028468) cell_gallery_pane_g2_ParamLimits

0x2c05,	// (0x00028468) cell_gallery_pane_g2

0x2c05,	// (0x00028468) cell_gallery_pane_g3_ParamLimits

0x2c05,	// (0x00028468) cell_gallery_pane_g3

0x2c13,	// (0x00028476) cell_gallery_pane_g4_ParamLimits

0x2c13,	// (0x00028476) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x00034ea2) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x00034ea2) cell_gallery_pane_g

0xc173,	// (0x000319d6) bg_cell_gallery_focus_pane_g1

0xc17b,	// (0x000319de) bg_cell_gallery_focus_pane_g2

0xc183,	// (0x000319e6) bg_cell_gallery_focus_pane_g3

0xc18b,	// (0x000319ee) bg_cell_gallery_focus_pane_g4

0xc193,	// (0x000319f6) bg_cell_gallery_focus_pane_g5

0xc19b,	// (0x000319fe) bg_cell_gallery_focus_pane_g6

0xc1a3,	// (0x00031a06) bg_cell_gallery_focus_pane_g7

0xc1ab,	// (0x00031a0e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x00034eab) bg_cell_gallery_focus_pane_g

0xc1b3,	// (0x00031a16) aid_firma_cardinal

0xc1c7,	// (0x00031a2a) blid_firmament_pane_t1

0xc1de,	// (0x00031a41) blid_firmament_pane_t2

0xc1f5,	// (0x00031a58) blid_firmament_pane_t3

0xc20c,	// (0x00031a6f) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x00034ebc) blid_firmament_pane_t

0xc223,	// (0x00031a86) blid_sat_info_pane

0x36aa,	// (0x00028f0d) blid_sat_info_pane_g1

0x36aa,	// (0x00028f0d) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00034c21) blid_sat_info_pane_g

0xc233,	// (0x00031a96) blid_sat_info_pane_t1

0xc241,	// (0x00031aa4) smil2_volume_content_pane

0xc24a,	// (0x00031aad) smil2_volume_pane_g1

0x2e31,	// (0x00028694) smil2_volume_content_pane_g1

0xc252,	// (0x00031ab5) smil2_volume_content_pane_g2

0xc25b,	// (0x00031abe) smil2_volume_content_pane_g3

0xc264,	// (0x00031ac7) smil2_volume_content_pane_g4

0xc26d,	// (0x00031ad0) smil2_volume_content_pane_g5

0xc276,	// (0x00031ad9) smil2_volume_content_pane_g6

0xc27f,	// (0x00031ae2) smil2_volume_content_pane_g7

0xc288,	// (0x00031aeb) smil2_volume_content_pane_g8

0xc291,	// (0x00031af4) smil2_volume_content_pane_g9

0xc29a,	// (0x00031afd) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x00034ec5) smil2_volume_content_pane_g

0x32b3,	// (0x00028b16) cale_week_day_heading_pane_t1_ParamLimits

0x32dd,	// (0x00028b40) cale_week_day_heading_pane_t2_ParamLimits

0x330c,	// (0x00028b6f) cale_week_day_heading_pane_t3_ParamLimits

0x333b,	// (0x00028b9e) cale_week_day_heading_pane_t4_ParamLimits

0x336a,	// (0x00028bcd) cale_week_day_heading_pane_t5_ParamLimits

0x33a1,	// (0x00028c04) cale_week_day_heading_pane_t6_ParamLimits

0x33d8,	// (0x00028c3b) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000349d5) cale_week_day_heading_pane_t_ParamLimits

0x3402,	// (0x00028c65) bg_cale_side_pane_ParamLimits

0x134c,	// (0x00026baf) cale_week_time_pane_t1_ParamLimits

0x1366,	// (0x00026bc9) cale_week_time_pane_t2_ParamLimits

0x1380,	// (0x00026be3) cale_week_time_pane_t3_ParamLimits

0x139a,	// (0x00026bfd) cale_week_time_pane_t4_ParamLimits

0x13b4,	// (0x00026c17) cale_week_time_pane_t5_ParamLimits

0x13ce,	// (0x00026c31) cale_week_time_pane_t6_ParamLimits

0x13e8,	// (0x00026c4b) cale_week_time_pane_t7_ParamLimits

0x1402,	// (0x00026c65) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000349e4) cale_week_time_pane_t_ParamLimits

0x3410,	// (0x00028c73) cell_cale_week_pane_g2_ParamLimits

0x3402,	// (0x00028c65) bg_cale_side_pane_cp01_ParamLimits

0x4593,	// (0x00029df6) cale_month_week_pane_t1_ParamLimits

0x45ac,	// (0x00029e0f) cale_month_week_pane_t2_ParamLimits

0x45c5,	// (0x00029e28) cale_month_week_pane_t3_ParamLimits

0x45de,	// (0x00029e41) cale_month_week_pane_t4_ParamLimits

0x45f7,	// (0x00029e5a) cale_month_week_pane_t5_ParamLimits

0x4610,	// (0x00029e73) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00034ab2) cale_month_week_pane_t_ParamLimits

0xb52b,	// (0x00030d8e) cell_cale_month_pane_g1_ParamLimits

0xb480,	// (0x00030ce3) main_cale_event_viewer_pane

0x2466,	// (0x00027cc9) listscroll_cale_event_viewer_pane

0xc2a3,	// (0x00031b06) list_cale_ev_pane

0xc2ab,	// (0x00031b0e) scroll_pane_cp023

0xc2b7,	// (0x00031b1a) field_cale_ev_pane_ParamLimits

0xc2b7,	// (0x00031b1a) field_cale_ev_pane

0xc2d5,	// (0x00031b38) field_cale_ev_content_pane_ParamLimits

0xc2d5,	// (0x00031b38) field_cale_ev_content_pane

0xc2e1,	// (0x00031b44) field_cale_ev_pane_g1_ParamLimits

0xc2e1,	// (0x00031b44) field_cale_ev_pane_g1

0xc2ed,	// (0x00031b50) field_cale_ev_pane_g2_ParamLimits

0xc2ed,	// (0x00031b50) field_cale_ev_pane_g2

0xc305,	// (0x00031b68) field_cale_ev_pane_g3_ParamLimits

0xc305,	// (0x00031b68) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x00034eda) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x00034eda) field_cale_ev_pane_g

0xc31d,	// (0x00031b80) field_cale_ev_pane_t1_ParamLimits

0xc31d,	// (0x00031b80) field_cale_ev_pane_t1

0xc334,	// (0x00031b97) field_cale_ev_content_pane_t1_ParamLimits

0xc334,	// (0x00031b97) field_cale_ev_content_pane_t1

0x5651,	// (0x0002aeb4) bg_button_pane_cp01

0x2f8b,	// (0x000287ee) listscroll_cale_week_pane_ParamLimits

0x2f9d,	// (0x00028800) popup_toolbar_window_cp01

0x31f6,	// (0x00028a59) listscroll_cale_week_pane_t1_ParamLimits

0x2f8b,	// (0x000287ee) listscroll_cale_day_pane_ParamLimits

0x2f9d,	// (0x00028800) popup_toolbar_window_cp02

0x480f,	// (0x0002a072) listscroll_cale_day_pane_t1_ParamLimits

0x14a4,	// (0x00026d07) main_cale_month_pane_ParamLimits

0xbd3e,	// (0x000315a1) popup_toolbar_window_cp03_ParamLimits

0xbd3e,	// (0x000315a1) popup_toolbar_window_cp03

0x5a0a,	// (0x0002b26d) main_image_pane_g2_ParamLimits

0x5a0a,	// (0x0002b26d) main_image_pane_g2

0x5a1b,	// (0x0002b27e) main_image_pane_g3_ParamLimits

0x5a1b,	// (0x0002b27e) main_image_pane_g3

0x0002,

0xf45c,	// (0x00034cbf) main_image_pane_g_ParamLimits

0xf45c,	// (0x00034cbf) main_image_pane_g

0x5a2c,	// (0x0002b28f) main_image_pane_t1_ParamLimits

0x5a43,	// (0x0002b2a6) main_image_pane_t2_ParamLimits

0x5a43,	// (0x0002b2a6) main_image_pane_t2

0x5a55,	// (0x0002b2b8) main_image_pane_t3_ParamLimits

0x5a55,	// (0x0002b2b8) main_image_pane_t3

0x5a7d,	// (0x0002b2e0) main_image_pane_t4_ParamLimits

0x5a7d,	// (0x0002b2e0) main_image_pane_t4

0x0003,

0xf463,	// (0x00034cc6) main_image_pane_t_ParamLimits

0xf463,	// (0x00034cc6) main_image_pane_t

0x5a9d,	// (0x0002b300) popup_image_details_window_cp01

0x5aa7,	// (0x0002b30a) popup_toobar_trans_pane_cp01_ParamLimits

0x5aa7,	// (0x0002b30a) popup_toobar_trans_pane_cp01

0x15af,	// (0x00026e12) popup_image_details_window_ParamLimits

0x15af,	// (0x00026e12) popup_image_details_window

0xbd11,	// (0x00031574) popup_image_focus_window

0xbe44,	// (0x000316a7) camera2_autofocus_pane_ParamLimits

0xbe44,	// (0x000316a7) camera2_autofocus_pane

0x2466,	// (0x00027cc9) bg_popup_sub_pane_cp06

0xc352,	// (0x00031bb5) popup_image_focus_window_g1

0xc35a,	// (0x00031bbd) popup_image_focus_window_g2

0xc362,	// (0x00031bc5) popup_image_focus_window_g3

0xc36a,	// (0x00031bcd) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x00034ee1) popup_image_focus_window_g

0xc372,	// (0x00031bd5) popup_image_focus_window_t1

0xc380,	// (0x00031be3) popup_image_focus_window_t2

0xc390,	// (0x00031bf3) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x00034eea) popup_image_focus_window_t

0x2c05,	// (0x00028468) camera2_autofocus_pane_g1

0x2b9e,	// (0x00028401) bg_tb_trans_pane_cp01

0xc39e,	// (0x00031c01) popup_image_details_window_g1

0xc3b1,	// (0x00031c14) popup_image_details_window_g2

0x0002,

0xf699,	// (0x00034efc) popup_image_details_window_g

0xc3da,	// (0x00031c3d) popup_image_details_window_t1

0xc3ec,	// (0x00031c4f) popup_image_details_window_t2

0xc405,	// (0x00031c68) popup_image_details_window_t3

0xc419,	// (0x00031c7c) popup_image_details_window_t4

0xc434,	// (0x00031c97) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x00034f03) popup_image_details_window_t

0x2d4d,	// (0x000285b0) bg_calc_paper_pane_ParamLimits

0xb480,	// (0x00030ce3) grid_highlight_pane_cp013

0xb492,	// (0x00030cf5) list_calc_pane_ParamLimits

0xb4a4,	// (0x00030d07) scroll_pane_cp024

0x2d61,	// (0x000285c4) bg_calc_display_pane_ParamLimits

0x12a3,	// (0x00026b06) calc_display_pane_t1_ParamLimits

0x12b5,	// (0x00026b18) calc_display_pane_t2_ParamLimits

0xb4ac,	// (0x00030d0f) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00034955) calc_display_pane_t_ParamLimits

0x1316,	// (0x00026b79) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00034972) cell_calc_pane_g

0x131f,	// (0x00026b82) cell_calc_pane_t1

0x2e0f,	// (0x00028672) grid_highlight_pane_cp02_ParamLimits

0x2e25,	// (0x00028688) toolbar_button_pane_cp01_ParamLimits

0x2e25,	// (0x00028688) toolbar_button_pane_cp01

0x5ae9,	// (0x0002b34c) temp_image_control_pane_ParamLimits

0x5ae9,	// (0x0002b34c) temp_image_control_pane

0xb472,	// (0x00030cd5) main_mp3_pane

0xc44e,	// (0x00031cb1) temp_image_control_pane_g1_ParamLimits

0xc44e,	// (0x00031cb1) temp_image_control_pane_g1

0xc45c,	// (0x00031cbf) temp_image_control_pane_g2_ParamLimits

0xc45c,	// (0x00031cbf) temp_image_control_pane_g2

0xc46e,	// (0x00031cd1) temp_image_control_pane_g3_ParamLimits

0xc46e,	// (0x00031cd1) temp_image_control_pane_g3

0x6e21,	// (0x0002c684) temp_image_control_pane_g4_ParamLimits

0x6e21,	// (0x0002c684) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x00034f0e) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x00034f0e) temp_image_control_pane_g

0xc44e,	// (0x00031cb1) main_mp3_pane_g1

0x6e34,	// (0x0002c697) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x00034f17) main_mp3_pane_g

0xc4a3,	// (0x00031d06) main_mp3_pane_t1

0x2c13,	// (0x00028476) main_camera_pane_g8_ParamLimits

0x2c13,	// (0x00028476) main_camera_pane_g8

0x3658,	// (0x00028ebb) main_video_pane_g7_ParamLimits

0x3658,	// (0x00028ebb) main_video_pane_g7

0xbe74,	// (0x000316d7) main_camera2_pane_t7_ParamLimits

0xbe74,	// (0x000316d7) main_camera2_pane_t7

0x3c23,	// (0x00029486) scroll_pane_cp025_ParamLimits

0x3c23,	// (0x00029486) scroll_pane_cp025

0x3c37,	// (0x0002949a) scroll_pane_cp026_ParamLimits

0x3c37,	// (0x0002949a) scroll_pane_cp026

0x3c46,	// (0x000294a9) wml_content_pane_ParamLimits

0xb480,	// (0x00030ce3) main_touch_calib_pane

0x6f08,	// (0x0002c76b) main_touch_calib_pane_g1

0x6f1a,	// (0x0002c77d) main_touch_calib_pane_g2

0x6f2c,	// (0x0002c78f) main_touch_calib_pane_g3

0x6f3e,	// (0x0002c7a1) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x00034f35) main_touch_calib_pane_g

0x6f50,	// (0x0002c7b3) main_touch_calib_pane_t1

0x6f6a,	// (0x0002c7cd) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x00034f3e) main_touch_calib_pane_t

0x509b,	// (0x0002a8fe) mup_progress_pane_cp02

0x50d0,	// (0x0002a933) navi_pane_g1

0x518b,	// (0x0002a9ee) navi_pane_mp_t3

0xb472,	// (0x00030cd5) main_mp3_pane_ParamLimits

0x6b37,	// (0x0002c39a) navi_pane_ParamLimits

0xc44e,	// (0x00031cb1) main_mp3_pane_g1_ParamLimits

0x6e34,	// (0x0002c697) main_mp3_pane_g2_ParamLimits

0x6e42,	// (0x0002c6a5) main_mp3_pane_g3_ParamLimits

0x6e42,	// (0x0002c6a5) main_mp3_pane_g3

0x6e50,	// (0x0002c6b3) main_mp3_pane_g4_ParamLimits

0x6e50,	// (0x0002c6b3) main_mp3_pane_g4

0x2c05,	// (0x00028468) main_mp3_pane_g5_ParamLimits

0x2c05,	// (0x00028468) main_mp3_pane_g5

0xc47e,	// (0x00031ce1) main_mp3_pane_g6_ParamLimits

0xc47e,	// (0x00031ce1) main_mp3_pane_g6

0xc48b,	// (0x00031cee) main_mp3_pane_g7_ParamLimits

0xc48b,	// (0x00031cee) main_mp3_pane_g7

0xc497,	// (0x00031cfa) main_mp3_pane_g8_ParamLimits

0xc497,	// (0x00031cfa) main_mp3_pane_g8

0xf6b4,	// (0x00034f17) main_mp3_pane_g_ParamLimits

0x6e5c,	// (0x0002c6bf) main_mp3_pane_t2

0x6e6a,	// (0x0002c6cd) main_mp3_pane_t3

0xc4b1,	// (0x00031d14) main_mp3_pane_t4

0xc4bf,	// (0x00031d22) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x00034f28) main_mp3_pane_t

0xc4cd,	// (0x00031d30) mup_progress_pane_cp01

0xb421,	// (0x00030c84) aid_zoom_text_secondary2

0xc2a3,	// (0x00031b06) list_cale_ev2_pane

0xc2ab,	// (0x00031b0e) scroll_pane_cp023_ParamLimits

0x6fc0,	// (0x0002c823) field_cale_ev2_pane_ParamLimits

0x6fc0,	// (0x0002c823) field_cale_ev2_pane

0xc4d5,	// (0x00031d38) field_cale_ev2_pane_g1_ParamLimits

0xc4d5,	// (0x00031d38) field_cale_ev2_pane_g1

0xc4e1,	// (0x00031d44) field_cale_ev2_pane_g2_ParamLimits

0xc4e1,	// (0x00031d44) field_cale_ev2_pane_g2

0xc4f9,	// (0x00031d5c) field_cale_ev2_pane_g3_ParamLimits

0xc4f9,	// (0x00031d5c) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x00034f49) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x00034f49) field_cale_ev2_pane_g

0xc51d,	// (0x00031d80) field_cale_ev2_pane_t1_ParamLimits

0xc51d,	// (0x00031d80) field_cale_ev2_pane_t1

0xc534,	// (0x00031d97) field_cale_ev2_pane_t2_ParamLimits

0xc534,	// (0x00031d97) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x00034f52) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x00034f52) field_cale_ev2_pane_t

0x57d8,	// (0x0002b03b) main_postcard_pane_g5_ParamLimits

0x57d8,	// (0x0002b03b) main_postcard_pane_g5

0x57ee,	// (0x0002b051) main_postcard_pane_g6_ParamLimits

0x57ee,	// (0x0002b051) main_postcard_pane_g6

0x2b9e,	// (0x00028401) camera2_autofocus_pane_cp_ParamLimits

0x2b9e,	// (0x00028401) camera2_autofocus_pane_cp

0xb472,	// (0x00030cd5) main_mup3_pane

0x7025,	// (0x0002c888) main_mup3_pane_g1_ParamLimits

0x7025,	// (0x0002c888) main_mup3_pane_g1

0x7047,	// (0x0002c8aa) main_mup3_pane_g2_ParamLimits

0x7047,	// (0x0002c8aa) main_mup3_pane_g2

0x70c7,	// (0x0002c92a) main_mup3_pane_g3_ParamLimits

0x70c7,	// (0x0002c92a) main_mup3_pane_g3

0x710d,	// (0x0002c970) main_mup3_pane_g4_ParamLimits

0x710d,	// (0x0002c970) main_mup3_pane_g4

0x7153,	// (0x0002c9b6) main_mup3_pane_g5_ParamLimits

0x7153,	// (0x0002c9b6) main_mup3_pane_g5

0x7199,	// (0x0002c9fc) main_mup3_pane_g6_ParamLimits

0x7199,	// (0x0002c9fc) main_mup3_pane_g6

0x2c13,	// (0x00028476) main_mup3_pane_g7_ParamLimits

0x2c13,	// (0x00028476) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x00034f62) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x00034f62) main_mup3_pane_g

0x7217,	// (0x0002ca7a) main_mup3_pane_t1_ParamLimits

0x7217,	// (0x0002ca7a) main_mup3_pane_t1

0x728b,	// (0x0002caee) main_mup3_pane_t2_ParamLimits

0x728b,	// (0x0002caee) main_mup3_pane_t2

0x735f,	// (0x0002cbc2) main_mup3_pane_t4_ParamLimits

0x735f,	// (0x0002cbc2) main_mup3_pane_t4

0x73b5,	// (0x0002cc18) main_mup3_pane_t5_ParamLimits

0x73b5,	// (0x0002cc18) main_mup3_pane_t5

0x7471,	// (0x0002ccd4) main_mup3_pane_t6_ParamLimits

0x7471,	// (0x0002ccd4) main_mup3_pane_t6

0x0005,

0xf710,	// (0x00034f73) main_mup3_pane_t_ParamLimits

0xf710,	// (0x00034f73) main_mup3_pane_t

0x7529,	// (0x0002cd8c) mup3_progress_pane_ParamLimits

0x7529,	// (0x0002cd8c) mup3_progress_pane

0x75b5,	// (0x0002ce18) popup_mup3_control_window_ParamLimits

0x75b5,	// (0x0002ce18) popup_mup3_control_window

0xc549,	// (0x00031dac) popup_mup3_text_window

0x75e7,	// (0x0002ce4a) mup3_progress_pane_t1

0x7606,	// (0x0002ce69) mup3_progress_pane_t2

0xc551,	// (0x00031db4) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x00034f80) mup3_progress_pane_t

0xc56e,	// (0x00031dd1) mup_progress_pane_cp03

0x2466,	// (0x00027cc9) bg_tb_trans_pane_cp04

0x7625,	// (0x0002ce88) mup3_volume_pane

0x762d,	// (0x0002ce90) popup_mup3_control_window_g1

0x7636,	// (0x0002ce99) mup3_volume_pane_g1

0x763f,	// (0x0002cea2) mup3_volume_pane_g2

0x7648,	// (0x0002ceab) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x00034f87) mup3_volume_pane_g

0x2466,	// (0x00027cc9) bg_tb_trans_pane_cp03

0xc57e,	// (0x00031de1) popup_mup3_text_window_g1

0xc586,	// (0x00031de9) popup_mup3_text_window_t1

0x2e02,	// (0x00028665) list_calc_item_pane_g1_ParamLimits

0xbf85,	// (0x000317e8) mup_volume_pane_cp_g1

0x6f84,	// (0x0002c7e7) main_touch_calib_pane_t3

0x6f98,	// (0x0002c7fb) main_touch_calib_pane_t4

0x6fac,	// (0x0002c80f) main_touch_calib_pane_t5

0xb40d,	// (0x00030c70) aid_cell_size_toolbar2

0xb415,	// (0x00030c78) aid_popup3_width_pane

0xb421,	// (0x00030c84) aid_zoom_text_msg_primary

0x3505,	// (0x00028d68) vorec_t7

0x2d6d,	// (0x000285d0) bg_calc_paper_pane_g1_ParamLimits

0x2d79,	// (0x000285dc) bg_calc_paper_pane_g2_ParamLimits

0x2d85,	// (0x000285e8) bg_calc_paper_pane_g3_ParamLimits

0x2d91,	// (0x000285f4) bg_calc_paper_pane_g4_ParamLimits

0x2d9d,	// (0x00028600) bg_calc_paper_pane_g5_ParamLimits

0x2da9,	// (0x0002860c) bg_calc_paper_pane_g6_ParamLimits

0x2db8,	// (0x0002861b) bg_calc_paper_pane_g7_ParamLimits

0x2dc7,	// (0x0002862a) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0003495c) bg_calc_paper_pane_g_ParamLimits

0x2dda,	// (0x0002863d) calc_bg_paper_pane_g9_ParamLimits

0x2b9e,	// (0x00028401) image_qvga_pane_ParamLimits

0x2b9e,	// (0x00028401) image_qvga_pane

0x2b7c,	// (0x000283df) bg_popup_sub_pane_cp04_ParamLimits

0x5968,	// (0x0002b1cb) popup_mup_playback_window_g1_ParamLimits

0x5974,	// (0x0002b1d7) popup_mup_playback_window_t1_ParamLimits

0x5989,	// (0x0002b1ec) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x00034cba) popup_mup_playback_window_t_ParamLimits

0x2c13,	// (0x00028476) main_mup2_pane_g3_ParamLimits

0x2c13,	// (0x00028476) main_mup2_pane_g3

0x38c0,	// (0x00029123) popup_toolbar_window_cp04

0x617e,	// (0x0002b9e1) popup_call2_audio_second_window_g3_ParamLimits

0x617e,	// (0x0002b9e1) popup_call2_audio_second_window_g3

0x65a6,	// (0x0002be09) popup_call2_audio_first_window_g4_ParamLimits

0x65a6,	// (0x0002be09) popup_call2_audio_first_window_g4

0xb9e3,	// (0x00031246) popup_call2_audio_in_window_g4_ParamLimits

0xb9e3,	// (0x00031246) popup_call2_audio_in_window_g4

0x599e,	// (0x0002b201) aid_area_sk_bg_cut_ParamLimits

0x599e,	// (0x0002b201) aid_area_sk_bg_cut

0x59bc,	// (0x0002b21f) aid_area_sk_bg_cut_2_ParamLimits

0x59bc,	// (0x0002b21f) aid_area_sk_bg_cut_2

0x2466,	// (0x00027cc9) aid_placing_details_win

0x2466,	// (0x00027cc9) aid_placing_details_win_2

0x2c05,	// (0x00028468) camera2_autofocus_pane_g1_ParamLimits

0x1162,	// (0x000269c5) popup_fixed_preview_cale_window_ParamLimits

0x1162,	// (0x000269c5) popup_fixed_preview_cale_window

0x524b,	// (0x0002aaae) navi_slider_pane_g3

0x5254,	// (0x0002aab7) navi_slider_pane_g4

0x525d,	// (0x0002aac0) navi_slider_pane_g5

0x524b,	// (0x0002aaae) navi_slider_pane_g6

0xb5dd,	// (0x00030e40) navi_slider_pane_g7

0x5578,	// (0x0002addb) mup_scale_pane_g3

0x5581,	// (0x0002ade4) mup_scale_pane_g4

0x558a,	// (0x0002aded) mup_scale_pane_g5

0x5593,	// (0x0002adf6) mup_scale_pane_g6

0x559c,	// (0x0002adff) mup_scale_pane_g7

0xbf8e,	// (0x000317f1) cams2_slider_pane_g3

0xbf8e,	// (0x000317f1) cams2_slider_pane_g4

0xbf8e,	// (0x000317f1) cams2_slider_pane_g5

0xbf8e,	// (0x000317f1) cams2_slider_pane_g6

0xbf8e,	// (0x000317f1) cams2_slider_pane_g7

0x36aa,	// (0x00028f0d) camera2_autofocus_pane_cp_g1

0xbcf3,	// (0x00031556) bg_popup_preview_window_pane_cp02_ParamLimits

0xbcf3,	// (0x00031556) bg_popup_preview_window_pane_cp02

0xc594,	// (0x00031df7) list_fp_cale_pane_ParamLimits

0xc594,	// (0x00031df7) list_fp_cale_pane

0xc5a0,	// (0x00031e03) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5a0,	// (0x00031e03) popup_fixed_preview_cale_window_t1

0x7651,	// (0x0002ceb4) popup_fixed_preview_cale_window_t2_ParamLimits

0x7651,	// (0x0002ceb4) popup_fixed_preview_cale_window_t2

0x7666,	// (0x0002cec9) popup_fixed_preview_cale_window_t3_ParamLimits

0x7666,	// (0x0002cec9) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x00034f8e) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x00034f8e) popup_fixed_preview_cale_window_t

0x767b,	// (0x0002cede) list_single_fp_cale_pane_ParamLimits

0x767b,	// (0x0002cede) list_single_fp_cale_pane

0xc5be,	// (0x00031e21) list_single_fp_cale_pane_g1_ParamLimits

0xc5be,	// (0x00031e21) list_single_fp_cale_pane_g1

0xc5ca,	// (0x00031e2d) list_single_fp_cale_pane_g2_ParamLimits

0xc5ca,	// (0x00031e2d) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x00034f95) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x00034f95) list_single_fp_cale_pane_g

0xc5e3,	// (0x00031e46) list_single_fp_cale_pane_t1_ParamLimits

0xc5e3,	// (0x00031e46) list_single_fp_cale_pane_t1

0xc5f5,	// (0x00031e58) list_single_fp_cale_pane_t2_ParamLimits

0xc5f5,	// (0x00031e58) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x00034f9c) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x00034f9c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb480,	// (0x00030ce3) main_dialer_pane

0x2466,	// (0x00027cc9) aid_cell_size_keypad

0x2466,	// (0x00027cc9) dialer_ne_pane

0x2466,	// (0x00027cc9) grid_dialer_command_1_pane

0x2466,	// (0x00027cc9) grid_dialer_command_2_pane

0x2466,	// (0x00027cc9) grid_dialer_keypad_pane

0x7691,	// (0x0002cef4) bg_popup_call_pane_cp06_ParamLimits

0x7691,	// (0x0002cef4) bg_popup_call_pane_cp06

0x7691,	// (0x0002cef4) dialer_ne_clear_pane_ParamLimits

0x7691,	// (0x0002cef4) dialer_ne_clear_pane

0x36aa,	// (0x00028f0d) dialer_ne_pane_g1

0x532b,	// (0x0002ab8e) dialer_ne_pane_t1_ParamLimits

0x532b,	// (0x0002ab8e) dialer_ne_pane_t1

0x769f,	// (0x0002cf02) dialer_ne_pane_t2_ParamLimits

0x769f,	// (0x0002cf02) dialer_ne_pane_t2

0x76c7,	// (0x0002cf2a) dialer_ne_pane_t3_ParamLimits

0x76c7,	// (0x0002cf2a) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x00034fa1) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x00034fa1) dialer_ne_pane_t

0x76c7,	// (0x0002cf2a) dialer_ne_pane_t3_copy1_ParamLimits

0x76c7,	// (0x0002cf2a) dialer_ne_pane_t3_copy1

0xc628,	// (0x00031e8b) cell_dialer_keypad_pane_ParamLimits

0xc628,	// (0x00031e8b) cell_dialer_keypad_pane

0x2b9e,	// (0x00028401) cell_dialer_command_1_pane_ParamLimits

0x2b9e,	// (0x00028401) cell_dialer_command_1_pane

0xc63f,	// (0x00031ea2) cell_dialer_command_2_pane_ParamLimits

0xc63f,	// (0x00031ea2) cell_dialer_command_2_pane

0x2b9e,	// (0x00028401) bg_button_pane_cp02_ParamLimits

0x2b9e,	// (0x00028401) bg_button_pane_cp02

0x2c05,	// (0x00028468) cell_dialer_keypad_pane_g1_ParamLimits

0x2c05,	// (0x00028468) cell_dialer_keypad_pane_g1

0x2b9e,	// (0x00028401) bg_button_pane_cp03_ParamLimits

0x2b9e,	// (0x00028401) bg_button_pane_cp03

0x2c05,	// (0x00028468) cell_dialer_command_1_pane_g1_ParamLimits

0x2c05,	// (0x00028468) cell_dialer_command_1_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp04

0x36aa,	// (0x00028f0d) cell_dialer_command_2_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp06

0x36aa,	// (0x00028f0d) dialer_ne_clear_pane_g1

0x50dc,	// (0x0002a93f) navi_pane_g2

0x510a,	// (0x0002a96d) navi_pane_g3

0x0002,

0xf35a,	// (0x00034bbd) navi_pane_g

0x5199,	// (0x0002a9fc) navi_pane_mv_g2

0x51c0,	// (0x0002aa23) navi_pane_mv_g5

0x51c8,	// (0x0002aa2b) navi_pane_mv_t1

0x2d61,	// (0x000285c4) main_clock2_pane

0x2b9e,	// (0x00028401) main_clock2_list_pane_ParamLimits

0x2b9e,	// (0x00028401) main_clock2_list_pane

0x775d,	// (0x0002cfc0) main_clock2_pane_t1_ParamLimits

0x775d,	// (0x0002cfc0) main_clock2_pane_t1

0x7798,	// (0x0002cffb) main_clock2_pane_t2_ParamLimits

0x7798,	// (0x0002cffb) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x00034fad) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x00034fad) main_clock2_pane_t

0x7838,	// (0x0002d09b) popup_clock_analogue_window_cp03_ParamLimits

0x7838,	// (0x0002d09b) popup_clock_analogue_window_cp03

0x785d,	// (0x0002d0c0) popup_clock_digital_window_cp02_ParamLimits

0x785d,	// (0x0002d0c0) popup_clock_digital_window_cp02

0x78a1,	// (0x0002d104) main_clock2_list_single_pane_ParamLimits

0x78a1,	// (0x0002d104) main_clock2_list_single_pane

0x34bd,	// (0x00028d20) list_highlight_pane_cp05

0xc682,	// (0x00031ee5) main_clock2_list_single_pane_t1

0x38c0,	// (0x00029123) popup_toolbar_window_cp04_ParamLimits

0x2c13,	// (0x00028476) camera2_autofocus_pane_g2_ParamLimits

0x2c13,	// (0x00028476) camera2_autofocus_pane_g2

0x2c13,	// (0x00028476) camera2_autofocus_pane_g3_ParamLimits

0x2c13,	// (0x00028476) camera2_autofocus_pane_g3

0x2c13,	// (0x00028476) camera2_autofocus_pane_g4_ParamLimits

0x2c13,	// (0x00028476) camera2_autofocus_pane_g4

0x2c13,	// (0x00028476) camera2_autofocus_pane_g5_ParamLimits

0x2c13,	// (0x00028476) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x00034ef1) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x00034ef1) camera2_autofocus_pane_g

0x6fe1,	// (0x0002c844) camera2_autofocus_pane_cp_g2

0x6fe9,	// (0x0002c84c) camera2_autofocus_pane_cp_g3

0x6ff1,	// (0x0002c854) camera2_autofocus_pane_cp_g4

0x6ff9,	// (0x0002c85c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x00034f57) camera2_autofocus_pane_cp_g

0x2466,	// (0x00027cc9) popup_dialer_spcha_window

0x2466,	// (0x00027cc9) bg_popup_sub_pane_cp07

0x2466,	// (0x00027cc9) list_spcha_pane

0xc690,	// (0x00031ef3) list_single_spcha_pane_ParamLimits

0xc690,	// (0x00031ef3) list_single_spcha_pane

0x2466,	// (0x00027cc9) list_highlight_pane_cp06

0x4aad,	// (0x0002a310) list_single_spcha_pane_t1

0xb78d,	// (0x00030ff0) popup_call2_audio_out_window_g4_ParamLimits

0xb78d,	// (0x00030ff0) popup_call2_audio_out_window_g4

0xb480,	// (0x00030ce3) main_imed2_pane

0xbd19,	// (0x0003157c) popup_imed_adjust2_window

0x15c7,	// (0x00026e2a) popup_imed_trans_window_ParamLimits

0x15c7,	// (0x00026e2a) popup_imed_trans_window

0xc072,	// (0x000318d5) popup_blid_sat_info2_window_t1

0xc080,	// (0x000318e3) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x00034e86) popup_blid_sat_info2_window_t

0x78b3,	// (0x0002d116) aid_size_cell_colour_35

0x78d3,	// (0x0002d136) aid_size_cell_colour_112

0x78f3,	// (0x0002d156) aid_size_cell_effect

0x533f,	// (0x0002aba2) bg_tb_trans_pane_cp02

0x4960,	// (0x0002a1c3) heading_imed_pane

0x7913,	// (0x0002d176) listscroll_imed_pane

0xc6a2,	// (0x00031f05) heading_imed_pane_g1

0xc6aa,	// (0x00031f0d) heading_imed_pane_t1

0xc6b8,	// (0x00031f1b) grid_imed_colour_35_pane_ParamLimits

0xc6b8,	// (0x00031f1b) grid_imed_colour_35_pane

0x791f,	// (0x0002d182) grid_imed_effect_pane

0xc6d0,	// (0x00031f33) list_imed_aspect_pane

0x7935,	// (0x0002d198) scroll_pane_cp027_ParamLimits

0x7935,	// (0x0002d198) scroll_pane_cp027

0x7946,	// (0x0002d1a9) cell_imed_effect_pane_ParamLimits

0x7946,	// (0x0002d1a9) cell_imed_effect_pane

0xc6d8,	// (0x00031f3b) cell_imed_colour_pane_ParamLimits

0xc6d8,	// (0x00031f3b) cell_imed_colour_pane

0xc71a,	// (0x00031f7d) cell_imed_colour_pane_g1_ParamLimits

0xc71a,	// (0x00031f7d) cell_imed_colour_pane_g1

0xc72b,	// (0x00031f8e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc72b,	// (0x00031f8e) hgihlgiht_grid_pane_cp016

0x796d,	// (0x0002d1d0) cell_imed_effect_pane_g1

0x7975,	// (0x0002d1d8) grid_highlight_pane_cp017

0xc73c,	// (0x00031f9f) list_imed_single_pane_ParamLimits

0xc73c,	// (0x00031f9f) list_imed_single_pane

0x2466,	// (0x00027cc9) list_highlight_pane_cp07

0xc751,	// (0x00031fb4) list_imed_aspect_pane_comp1_t1

0x533f,	// (0x0002aba2) bg_tb_trans_pane_cp05

0xc773,	// (0x00031fd6) popup_imed_adjust2_window_g1

0xc79a,	// (0x00031ffd) popup_imed_adjust2_window_t1

0xc7b2,	// (0x00032015) slider_imed_adjust_pane

0xc7c6,	// (0x00032029) slider_imed_adjust_pane_g1

0xc7d6,	// (0x00032039) slider_imed_adjust_pane_g2

0xc7e6,	// (0x00032049) slider_imed_adjust_pane_g3

0xc7f7,	// (0x0003205a) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x00034fca) slider_imed_adjust_pane_g

0x797e,	// (0x0002d1e1) aid_size_cell_clipart2

0x798a,	// (0x0002d1ed) grid_imed_clipart_pane

0xc808,	// (0x0003206b) scroll_pane_cp031

0x7994,	// (0x0002d1f7) cell_imed_clipart_pane_ParamLimits

0x7994,	// (0x0002d1f7) cell_imed_clipart_pane

0x79b6,	// (0x0002d219) cell_imed_clipart_pane_g1

0x2466,	// (0x00027cc9) grid_highlight_pane_cp014

0x7739,	// (0x0002cf9c) main_clock2_pane_g1_ParamLimits

0x7739,	// (0x0002cf9c) main_clock2_pane_g1

0x787d,	// (0x0002d0e0) aid_call2_pane_cp10

0x788f,	// (0x0002d0f2) aid_call_pane_cp10

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g1

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g2

0x178c,	// (0x00026fef) popup_clock_analogue_window_cp10_g3

0x178c,	// (0x00026fef) popup_clock_analogue_window_cp10_g4

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x00034fb8) popup_clock_analogue_window_cp10_g

0x17a2,	// (0x00027005) popup_clock_analogue_window_cp10_t1

0x17c1,	// (0x00027024) clock_digital_number_pane_cp10_ParamLimits

0x17c1,	// (0x00027024) clock_digital_number_pane_cp10

0x17d9,	// (0x0002703c) clock_digital_number_pane_cp11_ParamLimits

0x17d9,	// (0x0002703c) clock_digital_number_pane_cp11

0x17f1,	// (0x00027054) clock_digital_number_pane_cp12_ParamLimits

0x17f1,	// (0x00027054) clock_digital_number_pane_cp12

0x180b,	// (0x0002706e) clock_digital_number_pane_cp13_ParamLimits

0x180b,	// (0x0002706e) clock_digital_number_pane_cp13

0x1825,	// (0x00027088) clock_digital_separator_pane_cp10_ParamLimits

0x1825,	// (0x00027088) clock_digital_separator_pane_cp10

0x183f,	// (0x000270a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x183f,	// (0x000270a2) popup_clock_digital_window_cp02_t1

0x2b74,	// (0x000283d7) clock_digital_number_pane_cp10_g1

0x2b74,	// (0x000283d7) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x00034fd3) clock_digital_number_pane_cp10_g

0x2b74,	// (0x000283d7) clock_digital_separator_pane_cp10_g1

0x2b74,	// (0x000283d7) clock_digital_separator_pane_g2_cp10

0x520a,	// (0x0002aa6d) navi_pane_vded_g4

0x5213,	// (0x0002aa76) navi_pane_vded_g5

0x521c,	// (0x0002aa7f) navi_pane_vded_t1

0xb480,	// (0x00030ce3) main_vded_pane

0x79bf,	// (0x0002d222) main_vded_pane_g1

0x79c9,	// (0x0002d22c) main_vded_pane_g2

0x79d3,	// (0x0002d236) main_vded_pane_g3

0x0002,

0xf775,	// (0x00034fd8) main_vded_pane_g

0x79dd,	// (0x0002d240) main_vded_pane_t1

0x79eb,	// (0x0002d24e) main_vded_pane_t2

0x0001,

0xf77c,	// (0x00034fdf) main_vded_pane_t

0x79f9,	// (0x0002d25c) vded_slider_pane

0x7a01,	// (0x0002d264) vded_video_pane

0xc810,	// (0x00032073) vded_video_pane_g1

0x7a09,	// (0x0002d26c) vded_video_pane_g2

0x36aa,	// (0x00028f0d) vded_video_pane_g3

0x0002,

0xf781,	// (0x00034fe4) vded_video_pane_g

0xc81a,	// (0x0003207d) vded_slider_pane_g1

0xbf85,	// (0x000317e8) vded_slider_pane_g2

0xc823,	// (0x00032086) vded_slider_pane_g3

0xc82c,	// (0x0003208f) vded_slider_pane_g4

0xc835,	// (0x00032098) vded_slider_pane_g5

0x0004,

0xf788,	// (0x00034feb) vded_slider_pane_g

0x759d,	// (0x0002ce00) mup3_rocker_pane_ParamLimits

0x759d,	// (0x0002ce00) mup3_rocker_pane

0x7a12,	// (0x0002d275) mup3_control_keys_pane_g1

0x7a1a,	// (0x0002d27d) mup3_control_keys_pane_g2

0x7a22,	// (0x0002d285) mup3_control_keys_pane_g3

0x7a2a,	// (0x0002d28d) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x00034ff6) mup3_control_keys_pane_g

0x1199,	// (0x000269fc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1199,	// (0x000269fc) popup_toolbar2_fixed_window_cp01

0x75d1,	// (0x0002ce34) popup_toolbar2_fixed_window_cp02_ParamLimits

0x75d1,	// (0x0002ce34) popup_toolbar2_fixed_window_cp02

0x62f0,	// (0x0002bb53) popup_call2_audio_second_window_t4_ParamLimits

0x62f0,	// (0x0002bb53) popup_call2_audio_second_window_t4

0xb652,	// (0x00030eb5) popup_call2_audio_first_window_t6_ParamLimits

0xb652,	// (0x00030eb5) popup_call2_audio_first_window_t6

0xb890,	// (0x000310f3) popup_call2_audio_out_window_t6_ParamLimits

0xb890,	// (0x000310f3) popup_call2_audio_out_window_t6

0xb480,	// (0x00030ce3) main_vitu_pane

0x2b9e,	// (0x00028401) aid_size_cell_itu_ParamLimits

0x2b9e,	// (0x00028401) aid_size_cell_itu

0x2b9e,	// (0x00028401) bg_popup_window_pane_cp08_ParamLimits

0x2b9e,	// (0x00028401) bg_popup_window_pane_cp08

0x2b9e,	// (0x00028401) field_vitu_entry_pane_ParamLimits

0x2b9e,	// (0x00028401) field_vitu_entry_pane

0x2b9e,	// (0x00028401) grid_vitu_function_pane_ParamLimits

0x2b9e,	// (0x00028401) grid_vitu_function_pane

0x2b9e,	// (0x00028401) grid_vitu_itu_pane_ParamLimits

0x2b9e,	// (0x00028401) grid_vitu_itu_pane

0x2b9e,	// (0x00028401) cell_vitu_itu_pane_ParamLimits

0x2b9e,	// (0x00028401) cell_vitu_itu_pane

0x2b9e,	// (0x00028401) cell_vitu_function_pane_ParamLimits

0x2b9e,	// (0x00028401) cell_vitu_function_pane

0x2b9e,	// (0x00028401) bg_popup_sub_pane_cp08_ParamLimits

0x2b9e,	// (0x00028401) bg_popup_sub_pane_cp08

0x3526,	// (0x00028d89) field_vitu_entry_pane_t1_ParamLimits

0x3526,	// (0x00028d89) field_vitu_entry_pane_t1

0xc83e,	// (0x000320a1) field_vitu_entry_pane_t2_ParamLimits

0xc83e,	// (0x000320a1) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x00034fff) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x00034fff) field_vitu_entry_pane_t

0xc019,	// (0x0003187c) bg_button_pane_cp05_ParamLimits

0xc019,	// (0x0003187c) bg_button_pane_cp05

0xc85b,	// (0x000320be) cell_vitu_itu_pane_g1

0x5317,	// (0x0002ab7a) cell_vitu_itu_pane_t1_ParamLimits

0x5317,	// (0x0002ab7a) cell_vitu_itu_pane_t1

0x5317,	// (0x0002ab7a) cell_vitu_itu_pane_t2_ParamLimits

0x5317,	// (0x0002ab7a) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x00035004) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x00035004) cell_vitu_itu_pane_t

0x2466,	// (0x00027cc9) bg_button_pane_cp07

0x36aa,	// (0x00028f0d) cell_vitu_function_pane_g1

0xb48a,	// (0x00030ced) main_calc_pane_g1

0x0ff9,	// (0x0002685c) aid_visual_content_pane

0xb480,	// (0x00030ce3) main_vradio_pane

0x2c05,	// (0x00028468) main_vradio_pane_g1_ParamLimits

0x2c05,	// (0x00028468) main_vradio_pane_g1

0x2c13,	// (0x00028476) main_vradio_pane_g2_ParamLimits

0x2c13,	// (0x00028476) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0003500b) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0003500b) main_vradio_pane_g

0x3526,	// (0x00028d89) main_vradio_pane_t1_ParamLimits

0x3526,	// (0x00028d89) main_vradio_pane_t1

0x3526,	// (0x00028d89) main_vradio_pane_t2_ParamLimits

0x3526,	// (0x00028d89) main_vradio_pane_t2

0x532b,	// (0x0002ab8e) main_vradio_pane_t3_ParamLimits

0x532b,	// (0x0002ab8e) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x00035010) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x00035010) main_vradio_pane_t

0x2b9e,	// (0x00028401) vradio_rocker_control_pane_ParamLimits

0x2b9e,	// (0x00028401) vradio_rocker_control_pane

0x2b9e,	// (0x00028401) vradio_station_info_pane_ParamLimits

0x2b9e,	// (0x00028401) vradio_station_info_pane

0x2b9e,	// (0x00028401) vradio_frequency_info_pane_ParamLimits

0x2b9e,	// (0x00028401) vradio_frequency_info_pane

0x36aa,	// (0x00028f0d) vradio_station_info_pane_g1

0x5317,	// (0x0002ab7a) vradio_station_info_pane_t1_ParamLimits

0x5317,	// (0x0002ab7a) vradio_station_info_pane_t1

0x532b,	// (0x0002ab8e) vradio_station_info_pane_t2_ParamLimits

0x532b,	// (0x0002ab8e) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x00035017) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x00035017) vradio_station_info_pane_t

0x2466,	// (0x00027cc9) vradio_tuning_pane

0x7a3a,	// (0x0002d29d) vradio_rocker_control_pane_g1

0xc877,	// (0x000320da) vradio_rocker_control_pane_g2

0x7a44,	// (0x0002d2a7) vradio_rocker_control_pane_g3

0x7a4e,	// (0x0002d2b1) vradio_rocker_control_pane_g4

0x7a58,	// (0x0002d2bb) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x0003501c) vradio_rocker_control_pane_g

0x36aa,	// (0x00028f0d) vradio_frequency_info_pane_g1

0x3526,	// (0x00028d89) vradio_frequency_info_pane_t1_ParamLimits

0x3526,	// (0x00028d89) vradio_frequency_info_pane_t1

0x7a62,	// (0x0002d2c5) vradio_tuning_pane_g1

0x7a6d,	// (0x0002d2d0) vradio_tuning_pane_t1

0xb431,	// (0x00030c94) area_side_right_pane_ParamLimits

0xb431,	// (0x00030c94) area_side_right_pane

0xbcba,	// (0x0003151d) status_small_pane_g1

0xbcc2,	// (0x00031525) status_small_pane_g2

0xbccb,	// (0x0003152e) status_small_pane_g3

0xbcd4,	// (0x00031537) status_small_pane_g4

0x0003,

0xf585,	// (0x00034de8) status_small_pane_g

0xbcdd,	// (0x00031540) status_small_pane_t1

0xb480,	// (0x00030ce3) main_video3_pane

0xc87f,	// (0x000320e2) cams_zoom_vslider_pane

0xc887,	// (0x000320ea) image3_wide_pane_ParamLimits

0xc887,	// (0x000320ea) image3_wide_pane

0xc8a1,	// (0x00032104) image3_wide_small_pane

0xc8ad,	// (0x00032110) main_video3_pane_g1_ParamLimits

0xc8ad,	// (0x00032110) main_video3_pane_g1

0xc8c9,	// (0x0003212c) main_video3_pane_g2_ParamLimits

0xc8c9,	// (0x0003212c) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x00035027) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x00035027) main_video3_pane_g

0xc8e5,	// (0x00032148) main_video3_pane_t1_ParamLimits

0xc8e5,	// (0x00032148) main_video3_pane_t1

0xc910,	// (0x00032173) main_video3_pane_t2_ParamLimits

0xc910,	// (0x00032173) main_video3_pane_t2

0xc93b,	// (0x0003219e) main_video3_pane_t3_ParamLimits

0xc93b,	// (0x0003219e) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x0003502c) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x0003502c) main_video3_pane_t

0xc968,	// (0x000321cb) cams_zoom_vslider_pane_g1

0xc971,	// (0x000321d4) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x00035033) cams_zoom_vslider_pane_g

0xc979,	// (0x000321dc) small_slider_vertical_pane

0x36aa,	// (0x00028f0d) small_slider_vertical_pane_g1

0x36aa,	// (0x00028f0d) small_slider_vertical_pane_g2

0xc981,	// (0x000321e4) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x00035038) small_slider_vertical_pane_g

0xb480,	// (0x00030ce3) main_hwr_training_pane

0xc98a,	// (0x000321ed) hwr_training_instruct_pane_ParamLimits

0xc98a,	// (0x000321ed) hwr_training_instruct_pane

0x7a7c,	// (0x0002d2df) hwr_training_navi_pane_ParamLimits

0x7a7c,	// (0x0002d2df) hwr_training_navi_pane

0x7a9b,	// (0x0002d2fe) hwr_training_write_pane_ParamLimits

0x7a9b,	// (0x0002d2fe) hwr_training_write_pane

0x2466,	// (0x00027cc9) bg_frame_shadow_pane

0xc9c1,	// (0x00032224) hwr_training_write_pane_g1

0xc9c9,	// (0x0003222c) hwr_training_write_pane_g2

0xc9d1,	// (0x00032234) hwr_training_write_pane_g3

0xc9d9,	// (0x0003223c) hwr_training_write_pane_g4

0xc9e1,	// (0x00032244) hwr_training_write_pane_g5

0xc9e9,	// (0x0003224c) hwr_training_write_pane_g6

0xc9f1,	// (0x00032254) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x0003503f) hwr_training_write_pane_g

0xc9f9,	// (0x0003225c) hwr_training_navi_pane_g1_ParamLimits

0xc9f9,	// (0x0003225c) hwr_training_navi_pane_g1

0xca0b,	// (0x0003226e) hwr_training_navi_pane_g2_ParamLimits

0xca0b,	// (0x0003226e) hwr_training_navi_pane_g2

0xca1d,	// (0x00032280) hwr_training_navi_pane_g3_ParamLimits

0xca1d,	// (0x00032280) hwr_training_navi_pane_g3

0xca2d,	// (0x00032290) hwr_training_navi_pane_g4_ParamLimits

0xca2d,	// (0x00032290) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x0003504e) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x0003504e) hwr_training_navi_pane_g

0xca3a,	// (0x0003229d) hwr_training_navi_pane_t1

0x7ad6,	// (0x0002d339) list_single_hwr_training_instruct_pane_ParamLimits

0x7ad6,	// (0x0002d339) list_single_hwr_training_instruct_pane

0xca48,	// (0x000322ab) list_single_hwr_training_instruct_pane_t1

0xc173,	// (0x000319d6) bg_frame_shadow_pane_g1

0xca57,	// (0x000322ba) bg_frame_shadow_pane_g2

0xca5f,	// (0x000322c2) bg_frame_shadow_pane_g3

0xca67,	// (0x000322ca) bg_frame_shadow_pane_g4

0xca6f,	// (0x000322d2) bg_frame_shadow_pane_g5

0xca77,	// (0x000322da) bg_frame_shadow_pane_g6

0xca7f,	// (0x000322e2) bg_frame_shadow_pane_g7

0x2eec,	// (0x0002874f) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x00035059) bg_frame_shadow_pane_g

0xb480,	// (0x00030ce3) main_video_tele_dialer_pane

0x186f,	// (0x000270d2) aid_size_cell_video_keypad_ParamLimits

0x186f,	// (0x000270d2) aid_size_cell_video_keypad

0x1889,	// (0x000270ec) grid_video_dialer_keypad_pane_ParamLimits

0x1889,	// (0x000270ec) grid_video_dialer_keypad_pane

0x18d7,	// (0x0002713a) video_down_pane_cp_ParamLimits

0x18d7,	// (0x0002713a) video_down_pane_cp

0x18ed,	// (0x00027150) cell_video_dialer_keypad_pane_ParamLimits

0x18ed,	// (0x00027150) cell_video_dialer_keypad_pane

0xca87,	// (0x000322ea) bg_button_pane_cp08_ParamLimits

0xca87,	// (0x000322ea) bg_button_pane_cp08

0x7b08,	// (0x0002d36b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7b08,	// (0x0002d36b) cell_video_dialer_keypad_pane_g1

0x7587,	// (0x0002cdea) mup3_rocker2_pane_ParamLimits

0x7587,	// (0x0002cdea) mup3_rocker2_pane

0x36aa,	// (0x00028f0d) mup3_rocker2_pane_g1

0x14b6,	// (0x00026d19) main_dialer2_pane

0xb480,	// (0x00030ce3) main_mp4_pane

0xcab1,	// (0x00032314) main_mp4_pane_g1_ParamLimits

0xcab1,	// (0x00032314) main_mp4_pane_g1

0xcab1,	// (0x00032314) main_mp4_pane_g2_ParamLimits

0xcab1,	// (0x00032314) main_mp4_pane_g2

0x190f,	// (0x00027172) main_mp4_pane_g3_ParamLimits

0x190f,	// (0x00027172) main_mp4_pane_g3

0xcabf,	// (0x00032322) main_mp4_pane_g4_ParamLimits

0xcabf,	// (0x00032322) main_mp4_pane_g4

0xcaed,	// (0x00032350) main_mp4_pane_g5_ParamLimits

0xcaed,	// (0x00032350) main_mp4_pane_g5

0x0007,

0xf816,	// (0x00035079) main_mp4_pane_g_ParamLimits

0xf816,	// (0x00035079) main_mp4_pane_g

0xcb61,	// (0x000323c4) main_mp4_pane_t1_ParamLimits

0xcb61,	// (0x000323c4) main_mp4_pane_t1

0xcbbd,	// (0x00032420) main_mp4_pane_t2_ParamLimits

0xcbbd,	// (0x00032420) main_mp4_pane_t2

0xcc0f,	// (0x00032472) main_mp4_pane_t3_ParamLimits

0xcc0f,	// (0x00032472) main_mp4_pane_t3

0xcc35,	// (0x00032498) main_mp4_pane_t4_ParamLimits

0xcc35,	// (0x00032498) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0003508a) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0003508a) main_mp4_pane_t

0xcc79,	// (0x000324dc) mp4_progress_pane_ParamLimits

0xcc79,	// (0x000324dc) mp4_progress_pane

0xccc3,	// (0x00032526) mp4_rocker_pane_ParamLimits

0xccc3,	// (0x00032526) mp4_rocker_pane

0xcceb,	// (0x0003254e) mp4_progress_pane_t1

0xcd04,	// (0x00032567) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x00035093) mp4_progress_pane_t

0xcd1d,	// (0x00032580) mup_progress_pane_cp04

0xbf8e,	// (0x000317f1) mp4_rocker_pane_g1

0x194b,	// (0x000271ae) aid_cell_size_keypad2_ParamLimits

0x194b,	// (0x000271ae) aid_cell_size_keypad2

0x1961,	// (0x000271c4) dialer2_ne_pane_ParamLimits

0x1961,	// (0x000271c4) dialer2_ne_pane

0x197b,	// (0x000271de) grid_dialer2_keypad_pane_ParamLimits

0x197b,	// (0x000271de) grid_dialer2_keypad_pane

0xc019,	// (0x0003187c) bg_popup_call_pane_cp07_ParamLimits

0xc019,	// (0x0003187c) bg_popup_call_pane_cp07

0x7b42,	// (0x0002d3a5) dialer2_ne_pane_t1_ParamLimits

0x7b42,	// (0x0002d3a5) dialer2_ne_pane_t1

0x1997,	// (0x000271fa) cell_dialer2_keypad_pane_ParamLimits

0x1997,	// (0x000271fa) cell_dialer2_keypad_pane

0xcd42,	// (0x000325a5) bg_button_pane_pane_cp04_ParamLimits

0xcd42,	// (0x000325a5) bg_button_pane_pane_cp04

0x7b7e,	// (0x0002d3e1) cell_dialer2_keypad_pane_g1_ParamLimits

0x7b7e,	// (0x0002d3e1) cell_dialer2_keypad_pane_g1

0x3782,	// (0x00028fe5) aid_placing_vt_set_content_ParamLimits

0x3782,	// (0x00028fe5) aid_placing_vt_set_content

0x37aa,	// (0x0002900d) aid_placing_vt_set_title_ParamLimits

0x37aa,	// (0x0002900d) aid_placing_vt_set_title

0xb480,	// (0x00030ce3) main_image3_pane

0x1a17,	// (0x0002727a) area_side_right_pane_cp01_ParamLimits

0x1a17,	// (0x0002727a) area_side_right_pane_cp01

0xcab1,	// (0x00032314) main_image3_pane_g1_ParamLimits

0xcab1,	// (0x00032314) main_image3_pane_g1

0x1a2e,	// (0x00027291) main_image3_pane_g2_ParamLimits

0x1a2e,	// (0x00027291) main_image3_pane_g2

0x1a56,	// (0x000272b9) main_image3_pane_g3_ParamLimits

0x1a56,	// (0x000272b9) main_image3_pane_g3

0x1a80,	// (0x000272e3) main_image3_pane_g4_ParamLimits

0x1a80,	// (0x000272e3) main_image3_pane_g4

0x0003,

0xf83f,	// (0x000350a2) main_image3_pane_g_ParamLimits

0xf83f,	// (0x000350a2) main_image3_pane_g

0x1aaa,	// (0x0002730d) main_image3_pane_t1_ParamLimits

0x1aaa,	// (0x0002730d) main_image3_pane_t1

0x1b02,	// (0x00027365) main_image3_pane_t2_ParamLimits

0x1b02,	// (0x00027365) main_image3_pane_t2

0x1b54,	// (0x000273b7) main_image3_pane_t3_ParamLimits

0x1b54,	// (0x000273b7) main_image3_pane_t3

0x0003,

0xf848,	// (0x000350ab) main_image3_pane_t_ParamLimits

0xf848,	// (0x000350ab) main_image3_pane_t

0x2b9e,	// (0x00028401) grid_sctrl_middle_pane_cp01_ParamLimits

0x2b9e,	// (0x00028401) grid_sctrl_middle_pane_cp01

0x7be6,	// (0x0002d449) cell_sctrl_middle_pane_cp01_ParamLimits

0x7be6,	// (0x0002d449) cell_sctrl_middle_pane_cp01

0x7c03,	// (0x0002d466) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7c03,	// (0x0002d466) cell_sctrl_middle_pane_cp01_g1

0xb480,	// (0x00030ce3) main_call4_pane

0x1bdc,	// (0x0002743f) aid_size_button_call4_ParamLimits

0x1bdc,	// (0x0002743f) aid_size_button_call4

0x1c0f,	// (0x00027472) call4_windows_pane_ParamLimits

0x1c0f,	// (0x00027472) call4_windows_pane

0x1c2e,	// (0x00027491) grid_call4_button_pane_ParamLimits

0x1c2e,	// (0x00027491) grid_call4_button_pane

0x7c23,	// (0x0002d486) call4_windows_conf_pane

0x7c38,	// (0x0002d49b) popup_call4_audio_first_window_ParamLimits

0x7c38,	// (0x0002d49b) popup_call4_audio_first_window

0x7c88,	// (0x0002d4eb) popup_call4_audio_second_window_ParamLimits

0x7c88,	// (0x0002d4eb) popup_call4_audio_second_window

0x7c9f,	// (0x0002d502) popup_call4_audio_wait_window_ParamLimits

0x7c9f,	// (0x0002d502) popup_call4_audio_wait_window

0x1c57,	// (0x000274ba) cell_call4_button_pane_ParamLimits

0x1c57,	// (0x000274ba) cell_call4_button_pane

0x7cad,	// (0x0002d510) bg_button_pane_cp09_ParamLimits

0x7cad,	// (0x0002d510) bg_button_pane_cp09

0x1c7c,	// (0x000274df) cell_call4_button_pane_g1_ParamLimits

0x1c7c,	// (0x000274df) cell_call4_button_pane_g1

0x1ca2,	// (0x00027505) cell_call4_button_pane_t1_ParamLimits

0x1ca2,	// (0x00027505) cell_call4_button_pane_t1

0xcdba,	// (0x0003261d) popup_call4_audio_conf_window_ParamLimits

0xcdba,	// (0x0003261d) popup_call4_audio_conf_window

0x75e7,	// (0x0002ce4a) mup3_progress_pane_t1_ParamLimits

0x7606,	// (0x0002ce69) mup3_progress_pane_t2_ParamLimits

0xc551,	// (0x00031db4) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x00034f80) mup3_progress_pane_t_ParamLimits

0xc56e,	// (0x00031dd1) mup_progress_pane_cp03_ParamLimits

0x7a32,	// (0x0002d295) mup3_control_keys_pane_g4_copy1

0xcca7,	// (0x0003250a) mp4_rocker2_pane_ParamLimits

0xcca7,	// (0x0003250a) mp4_rocker2_pane

0xcdce,	// (0x00032631) mp4_rocker2_pane_g1

0xcdd6,	// (0x00032639) mp4_rocker2_pane_g2

0xcdde,	// (0x00032641) mp4_rocker2_pane_g3

0xcde6,	// (0x00032649) mp4_rocker2_pane_g4

0xcdee,	// (0x00032651) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x000350b4) mp4_rocker2_pane_g

0xb480,	// (0x00030ce3) main_camera4_pane

0xb480,	// (0x00030ce3) main_video4_pane

0x18a5,	// (0x00027108) main_video_tele_dialer_pane_t1_ParamLimits

0x18a5,	// (0x00027108) main_video_tele_dialer_pane_t1

0x18be,	// (0x00027121) main_video_tele_dialer_pane_t2_ParamLimits

0x18be,	// (0x00027121) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x0003506a) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x0003506a) main_video_tele_dialer_pane_t

0x1ce4,	// (0x00027547) cam4_autofocus_pane_ParamLimits

0x1ce4,	// (0x00027547) cam4_autofocus_pane

0x1cfa,	// (0x0002755d) cam4_image_uncrop_pane_ParamLimits

0x1cfa,	// (0x0002755d) cam4_image_uncrop_pane

0x1d14,	// (0x00027577) cam4_indicators_pane_ParamLimits

0x1d14,	// (0x00027577) cam4_indicators_pane

0x1d3f,	// (0x000275a2) main_camera4_pane_g1_ParamLimits

0x1d3f,	// (0x000275a2) main_camera4_pane_g1

0x1d51,	// (0x000275b4) main_camera4_pane_g2_ParamLimits

0x1d51,	// (0x000275b4) main_camera4_pane_g2

0x1d64,	// (0x000275c7) main_camera4_pane_g3_ParamLimits

0x1d64,	// (0x000275c7) main_camera4_pane_g3

0x1d77,	// (0x000275da) main_camera4_pane_g4_ParamLimits

0x1d77,	// (0x000275da) main_camera4_pane_g4

0x1d8a,	// (0x000275ed) main_camera4_pane_g5_ParamLimits

0x1d8a,	// (0x000275ed) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x000350bf) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x000350bf) main_camera4_pane_g

0x1dae,	// (0x00027611) main_camera4_pane_t1_ParamLimits

0x1dae,	// (0x00027611) main_camera4_pane_t1

0xce24,	// (0x00032687) bg_tb_trans_pane_cp06

0xce3a,	// (0x0003269d) cam4_indicators_pane_g1

0xce4b,	// (0x000326ae) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x000350da) cam4_indicators_pane_g

0xce63,	// (0x000326c6) cam4_indicators_pane_t1

0x1dfe,	// (0x00027661) main_video4_pane_g1_ParamLimits

0x1dfe,	// (0x00027661) main_video4_pane_g1

0x1e0d,	// (0x00027670) main_video4_pane_g2_ParamLimits

0x1e0d,	// (0x00027670) main_video4_pane_g2

0x1e1c,	// (0x0002767f) main_video4_pane_g3_ParamLimits

0x1e1c,	// (0x0002767f) main_video4_pane_g3

0x1e2b,	// (0x0002768e) main_video4_pane_g4_ParamLimits

0x1e2b,	// (0x0002768e) main_video4_pane_g4

0x0004,

0xf87e,	// (0x000350e1) main_video4_pane_g_ParamLimits

0xf87e,	// (0x000350e1) main_video4_pane_g

0x1e49,	// (0x000276ac) vid4_indicators_pane_ParamLimits

0x1e49,	// (0x000276ac) vid4_indicators_pane

0x1e77,	// (0x000276da) video4_image_uncrop_cif_pane_ParamLimits

0x1e77,	// (0x000276da) video4_image_uncrop_cif_pane

0x1e91,	// (0x000276f4) video4_image_uncrop_nhd_pane_ParamLimits

0x1e91,	// (0x000276f4) video4_image_uncrop_nhd_pane

0x1cfa,	// (0x0002755d) video4_image_uncrop_vga_pane_ParamLimits

0x1cfa,	// (0x0002755d) video4_image_uncrop_vga_pane

0xb472,	// (0x00030cd5) bg_tb_trans_pane_cp07

0xce8d,	// (0x000326f0) vid4_indicators_pane_g1

0xcea1,	// (0x00032704) vid4_indicators_pane_g2

0xceb5,	// (0x00032718) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x000350ec) vid4_indicators_pane_g

0xcee2,	// (0x00032745) vid4_indicators_pane_t1

0x7ccd,	// (0x0002d530) cam4_autofocus_pane_g1

0x7cd5,	// (0x0002d538) cam4_autofocus_pane_g2

0x7cdd,	// (0x0002d540) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x000350f7) cam4_autofocus_pane_g

0x7ce5,	// (0x0002d548) cam4_autofocus_pane_g3_copy1

0x7aec,	// (0x0002d34f) video_down_pane_cp_t1

0x7afa,	// (0x0002d35d) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x0003506f) video_down_pane_cp_t

0xb472,	// (0x00030cd5) popup_vitu2_window_ParamLimits

0xb472,	// (0x00030cd5) popup_vitu2_window

0x1ea5,	// (0x00027708) aid_size_cell2_itu2_ParamLimits

0x1ea5,	// (0x00027708) aid_size_cell2_itu2

0x1ecb,	// (0x0002772e) aid_size_cell_itu2_ParamLimits

0x1ecb,	// (0x0002772e) aid_size_cell_itu2

0x1f27,	// (0x0002778a) bg_popup_window_pane_cp09_ParamLimits

0x1f27,	// (0x0002778a) bg_popup_window_pane_cp09

0x1f35,	// (0x00027798) field_vitu2_entry_pane_ParamLimits

0x1f35,	// (0x00027798) field_vitu2_entry_pane

0x1f5b,	// (0x000277be) grid_vitu2_function_pane_ParamLimits

0x1f5b,	// (0x000277be) grid_vitu2_function_pane

0x1fac,	// (0x0002780f) grid_vitu2_itu_pane_ParamLimits

0x1fac,	// (0x0002780f) grid_vitu2_itu_pane

0x2042,	// (0x000278a5) cell_vitu2_itu_pane_ParamLimits

0x2042,	// (0x000278a5) cell_vitu2_itu_pane

0x206e,	// (0x000278d1) cell_vitu2_function_pane_ParamLimits

0x206e,	// (0x000278d1) cell_vitu2_function_pane

0xcef9,	// (0x0003275c) bg_popup_call_pane_cp08_ParamLimits

0xcef9,	// (0x0003275c) bg_popup_call_pane_cp08

0xcf10,	// (0x00032773) field_vitu2_entry_pane_g1

0xcf1c,	// (0x0003277f) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x000350fe) field_vitu2_entry_pane_g

0x7ced,	// (0x0002d550) field_vitu2_entry_pane_t1_ParamLimits

0x7ced,	// (0x0002d550) field_vitu2_entry_pane_t1

0xcf28,	// (0x0003278b) field_vitu2_entry_pane_t2_ParamLimits

0xcf28,	// (0x0003278b) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x00035105) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x00035105) field_vitu2_entry_pane_t

0x20ad,	// (0x00027910) bg_button_pane_cp010_ParamLimits

0x20ad,	// (0x00027910) bg_button_pane_cp010

0x20bb,	// (0x0002791e) cell_vitu2_itu_pane_g1

0x20e1,	// (0x00027944) cell_vitu2_itu_pane_t1_ParamLimits

0x20e1,	// (0x00027944) cell_vitu2_itu_pane_t1

0x213f,	// (0x000279a2) cell_vitu2_itu_pane_t2_ParamLimits

0x213f,	// (0x000279a2) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x0003510f) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x0003510f) cell_vitu2_itu_pane_t

0xb472,	// (0x00030cd5) bg_button_pane_cp011

0x222b,	// (0x00027a8e) cell_vitu2_function_pane_g1

0xb480,	// (0x00030ce3) main_myfav_hc_pane

0x1ba4,	// (0x00027407) popup_image3_note_pane_ParamLimits

0x1ba4,	// (0x00027407) popup_image3_note_pane

0x1bc0,	// (0x00027423) popup_image3_tool_bar_pane_ParamLimits

0x1bc0,	// (0x00027423) popup_image3_tool_bar_pane

0x21cd,	// (0x00027a30) cell_vitu2_itu_pane_t3_ParamLimits

0x21cd,	// (0x00027a30) cell_vitu2_itu_pane_t3

0x2466,	// (0x00027cc9) bg_popup_trans_pane

0xcf4d,	// (0x000327b0) grid_image3_tool_bar_pane

0xcf57,	// (0x000327ba) bg_popup_trans_pane_g1

0x3d71,	// (0x000295d4) bg_popup_trans_pane_g2

0xcf5f,	// (0x000327c2) bg_popup_trans_pane_g3

0xcf67,	// (0x000327ca) bg_popup_trans_pane_g4

0xcf6f,	// (0x000327d2) bg_popup_trans_pane_g5

0xcf77,	// (0x000327da) bg_popup_trans_pane_g6

0xcf7f,	// (0x000327e2) bg_popup_trans_pane_g7

0xcf87,	// (0x000327ea) bg_popup_trans_pane_g8

0x3d51,	// (0x000295b4) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x00035116) bg_popup_trans_pane_g

0xcf8f,	// (0x000327f2) cell_image3_tool_bar_pane_ParamLimits

0xcf8f,	// (0x000327f2) cell_image3_tool_bar_pane

0x36aa,	// (0x00028f0d) cell_image3_tool_bar_pane_g1

0x2466,	// (0x00027cc9) bg_popup_trans_pane_cp1

0xcfa3,	// (0x00032806) popup_image3_note_pane_t1

0xcfb1,	// (0x00032814) popup_image3_note_pane_t2

0xcfbf,	// (0x00032822) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x00035129) popup_image3_note_pane_t

0xcfcd,	// (0x00032830) popup_image3_note_pane_t3_copy1

0x7d1d,	// (0x0002d580) bg_myfav_hc_instruction_pane_ParamLimits

0x7d1d,	// (0x0002d580) bg_myfav_hc_instruction_pane

0x7d31,	// (0x0002d594) cell_myfav_contact_pane_ParamLimits

0x7d31,	// (0x0002d594) cell_myfav_contact_pane

0x7d4f,	// (0x0002d5b2) cell_myfav_contact_pane_cp1_ParamLimits

0x7d4f,	// (0x0002d5b2) cell_myfav_contact_pane_cp1

0x7d67,	// (0x0002d5ca) cell_myfav_contact_pane_cp2_ParamLimits

0x7d67,	// (0x0002d5ca) cell_myfav_contact_pane_cp2

0x7d7f,	// (0x0002d5e2) cell_myfav_contact_pane_cp3_ParamLimits

0x7d7f,	// (0x0002d5e2) cell_myfav_contact_pane_cp3

0x7d96,	// (0x0002d5f9) cell_myfav_contact_pane_cp4_ParamLimits

0x7d96,	// (0x0002d5f9) cell_myfav_contact_pane_cp4

0x7dae,	// (0x0002d611) cell_myfav_contact_pane_cp5_ParamLimits

0x7dae,	// (0x0002d611) cell_myfav_contact_pane_cp5

0x7dc2,	// (0x0002d625) cell_myfav_contact_pane_cp6_ParamLimits

0x7dc2,	// (0x0002d625) cell_myfav_contact_pane_cp6

0x7dd8,	// (0x0002d63b) cell_myfav_contact_pane_cp7_ParamLimits

0x7dd8,	// (0x0002d63b) cell_myfav_contact_pane_cp7

0xcfdb,	// (0x0003283e) listscroll_gen_pane_cp05

0x7df2,	// (0x0002d655) main_myfav_hc_pane_g1_ParamLimits

0x7df2,	// (0x0002d655) main_myfav_hc_pane_g1

0x7e0c,	// (0x0002d66f) main_myfav_hc_pane_g2_ParamLimits

0x7e0c,	// (0x0002d66f) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x00035130) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x00035130) main_myfav_hc_pane_g

0x7e3e,	// (0x0002d6a1) main_myfav_hc_pane_t1_ParamLimits

0x7e3e,	// (0x0002d6a1) main_myfav_hc_pane_t1

0xcfe4,	// (0x00032847) main_myfav_hc_pane_t2_ParamLimits

0xcfe4,	// (0x00032847) main_myfav_hc_pane_t2

0xcff6,	// (0x00032859) main_myfav_hc_pane_t3_ParamLimits

0xcff6,	// (0x00032859) main_myfav_hc_pane_t3

0x7e55,	// (0x0002d6b8) main_myfav_hc_pane_t4_ParamLimits

0x7e55,	// (0x0002d6b8) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x00035137) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x00035137) main_myfav_hc_pane_t

0x36aa,	// (0x00028f0d) bg_myfav_hc_instruction_pane_g1

0xd008,	// (0x0003286b) cell_myfav_contact_pane_g1_ParamLimits

0xd008,	// (0x0003286b) cell_myfav_contact_pane_g1

0xd008,	// (0x0003286b) cell_myfav_contact_pane_g2_ParamLimits

0xd008,	// (0x0003286b) cell_myfav_contact_pane_g2

0xd014,	// (0x00032877) cell_myfav_contact_pane_g3_ParamLimits

0xd014,	// (0x00032877) cell_myfav_contact_pane_g3

0x2c13,	// (0x00028476) cell_myfav_contact_pane_g4_ParamLimits

0x2c13,	// (0x00028476) cell_myfav_contact_pane_g4

0xd021,	// (0x00032884) cell_myfav_contact_pane_g5_ParamLimits

0xd021,	// (0x00032884) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x00035142) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x00035142) cell_myfav_contact_pane_g

0x7e26,	// (0x0002d689) main_myfav_hc_pane_g3_ParamLimits

0x7e26,	// (0x0002d689) main_myfav_hc_pane_g3

0x10fb,	// (0x0002695e) popup_adpt_find_window

0x7e7d,	// (0x0002d6e0) afind_page_pane_ParamLimits

0x7e7d,	// (0x0002d6e0) afind_page_pane

0x7e92,	// (0x0002d6f5) aid_size_cell_afind_ParamLimits

0x7e92,	// (0x0002d6f5) aid_size_cell_afind

0x7eb0,	// (0x0002d713) bg_popup_sub_pane_cp09_ParamLimits

0x7eb0,	// (0x0002d713) bg_popup_sub_pane_cp09

0x7ebd,	// (0x0002d720) find_pane_cp01_ParamLimits

0x7ebd,	// (0x0002d720) find_pane_cp01

0xd02d,	// (0x00032890) grid_afind_control_pane_ParamLimits

0xd02d,	// (0x00032890) grid_afind_control_pane

0x7eca,	// (0x0002d72d) grid_afind_pane_ParamLimits

0x7eca,	// (0x0002d72d) grid_afind_pane

0x7ee9,	// (0x0002d74c) cell_afind_pane_ParamLimits

0x7ee9,	// (0x0002d74c) cell_afind_pane

0x36aa,	// (0x00028f0d) afind_page_pane_g1

0x7f50,	// (0x0002d7b3) afind_page_pane_g2

0x7f59,	// (0x0002d7bc) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x0003514d) afind_page_pane_g

0x7f62,	// (0x0002d7c5) afind_page_pane_t1

0xd041,	// (0x000328a4) cell_afind_grid_control_pane_ParamLimits

0xd041,	// (0x000328a4) cell_afind_grid_control_pane

0xcd42,	// (0x000325a5) bg_button_pane_cp69_ParamLimits

0xcd42,	// (0x000325a5) bg_button_pane_cp69

0x7f82,	// (0x0002d7e5) cell_afind_pane_g1_ParamLimits

0x7f82,	// (0x0002d7e5) cell_afind_pane_g1

0x7f8f,	// (0x0002d7f2) cell_afind_pane_t1_ParamLimits

0x7f8f,	// (0x0002d7f2) cell_afind_pane_t1

0x3715,	// (0x00028f78) bg_button_pane_cp72

0xd050,	// (0x000328b3) cell_afind_grid_control_pane_g1

0x5d9c,	// (0x0002b5ff) aid_image_placing_area_ParamLimits

0x5d9c,	// (0x0002b5ff) aid_image_placing_area

0x2c05,	// (0x00028468) field_vitu_entry_pane_g1_ParamLimits

0x2c05,	// (0x00028468) field_vitu_entry_pane_g1

0x2c05,	// (0x00028468) field_vitu_entry_pane_g2_ParamLimits

0x2c05,	// (0x00028468) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00034a4a) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00034a4a) field_vitu_entry_pane_g

0xc85b,	// (0x000320be) cell_vitu_itu_pane_g1_ParamLimits

0xc83e,	// (0x000320a1) cell_vitu_itu_pane_t3_ParamLimits

0xc83e,	// (0x000320a1) cell_vitu_itu_pane_t3

0xcceb,	// (0x0003254e) mp4_progress_pane_t1_ParamLimits

0xcd04,	// (0x00032567) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x00035093) mp4_progress_pane_t_ParamLimits

0xcd1d,	// (0x00032580) mup_progress_pane_cp04_ParamLimits

0x7e69,	// (0x0002d6cc) main_myfav_hc_pane_t5_ParamLimits

0x7e69,	// (0x0002d6cc) main_myfav_hc_pane_t5

0xb429,	// (0x00030c8c) aid_zoom_text_primary

0x10fb,	// (0x0002695e) popup_adpt_find_window_ParamLimits

0xb472,	// (0x00030cd5) main_cam_set_pane

0x1d2b,	// (0x0002758e) cam4_zoom_pane_ParamLimits

0x1d2b,	// (0x0002758e) cam4_zoom_pane

0x7fa1,	// (0x0002d804) main_cam_set_pane_g1_ParamLimits

0x7fa1,	// (0x0002d804) main_cam_set_pane_g1

0x7faf,	// (0x0002d812) main_cam_set_pane_g2_ParamLimits

0x7faf,	// (0x0002d812) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x00035154) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x00035154) main_cam_set_pane_g

0x7fd0,	// (0x0002d833) main_cam_set_pane_t1_ParamLimits

0x7fd0,	// (0x0002d833) main_cam_set_pane_t1

0x7feb,	// (0x0002d84e) main_cset_listscroll_pane_ParamLimits

0x7feb,	// (0x0002d84e) main_cset_listscroll_pane

0x8011,	// (0x0002d874) main_cset_slider_pane_ParamLimits

0x8011,	// (0x0002d874) main_cset_slider_pane

0xd061,	// (0x000328c4) main_cset_list_pane_ParamLimits

0xd061,	// (0x000328c4) main_cset_list_pane

0xd071,	// (0x000328d4) scroll_pane_cp028

0x8037,	// (0x0002d89a) aid_area_touch_slider

0x8053,	// (0x0002d8b6) cset_slider_pane

0x8076,	// (0x0002d8d9) main_cset_slider_pane_g1

0x808b,	// (0x0002d8ee) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x00035159) main_cset_slider_pane_g

0xd0c2,	// (0x00032925) main_cset_slider_pane_t1

0x812f,	// (0x0002d992) main_cset_slider_pane_t2

0x8149,	// (0x0002d9ac) main_cset_slider_pane_t3

0x8163,	// (0x0002d9c6) main_cset_slider_pane_t4

0x817d,	// (0x0002d9e0) main_cset_slider_pane_t5

0x8197,	// (0x0002d9fa) main_cset_slider_pane_t6

0x81ac,	// (0x0002da0f) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x0003517e) main_cset_slider_pane_t

0x82b0,	// (0x0002db13) cset_list_set_pane_ParamLimits

0x82b0,	// (0x0002db13) cset_list_set_pane

0xd15c,	// (0x000329bf) aid_position_infowindow_above

0xd164,	// (0x000329c7) aid_position_infowindow_below

0x82c2,	// (0x0002db25) cset_list_set_pane_g1_ParamLimits

0x82c2,	// (0x0002db25) cset_list_set_pane_g1

0x82ce,	// (0x0002db31) cset_list_set_pane_g3_ParamLimits

0x82ce,	// (0x0002db31) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x0003519d) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x0003519d) cset_list_set_pane_g

0x82dd,	// (0x0002db40) cset_list_set_pane_t1_ParamLimits

0x82dd,	// (0x0002db40) cset_list_set_pane_t1

0x2b9e,	// (0x00028401) list_highlight_pane_cp021_ParamLimits

0x2b9e,	// (0x00028401) list_highlight_pane_cp021

0x5578,	// (0x0002addb) cset_slider_pane_g1

0x558a,	// (0x0002aded) cset_slider_pane_g2

0x5581,	// (0x0002ade4) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x000351a2) cset_slider_pane_g

0xd16c,	// (0x000329cf) aid_area_touch_cam4_zoom

0xd174,	// (0x000329d7) cam4_zoom_cont_pane

0xd17c,	// (0x000329df) cam4_zoom_pane_g1

0xd184,	// (0x000329e7) cam4_zoom_pane_g2

0x223e,	// (0x00027aa1) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x000351a9) cam4_zoom_pane_g

0xd18c,	// (0x000329ef) cam4_zoom_cont_pane_g1

0xd195,	// (0x000329f8) cam4_zoom_cont_pane_g2

0xd19e,	// (0x00032a01) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x000351b0) cam4_zoom_cont_pane_g

0x1bfa,	// (0x0002745d) call4_image_pane_ParamLimits

0x1bfa,	// (0x0002745d) call4_image_pane

0x7c23,	// (0x0002d486) call4_windows_conf_pane_ParamLimits

0x7c66,	// (0x0002d4c9) popup_call4_audio_in_window_ParamLimits

0x7c66,	// (0x0002d4c9) popup_call4_audio_in_window

0x2466,	// (0x00027cc9) bg_popup_call2_act_pane_cp02

0xcdb2,	// (0x00032615) call4_list_conf_pane

0x36aa,	// (0x00028f0d) call4_image_pane_g1

0x36aa,	// (0x00028f0d) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00034c21) call4_image_pane_g

0xd1a7,	// (0x00032a0a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1a7,	// (0x00032a0a) list_single_graphic_popup_conf4_pane

0x2466,	// (0x00027cc9) list_highlight_pane_cp022

0xd1ba,	// (0x00032a1d) list_single_graphic_popup_conf4_pane_g1

0x4cf0,	// (0x0002a553) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x000351b7) list_single_graphic_popup_conf4_pane_g

0xd1c2,	// (0x00032a25) list_single_graphic_popup_conf4_pane_t1

0x38e0,	// (0x00029143) popup_vtel_slider_window_ParamLimits

0x38e0,	// (0x00029143) popup_vtel_slider_window

0xcd30,	// (0x00032593) dialer2_ne_pane_t2_ParamLimits

0xcd30,	// (0x00032593) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x00035098) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x00035098) dialer2_ne_pane_t

0xc019,	// (0x0003187c) bg_popup_sub_pane_cp010_ParamLimits

0xc019,	// (0x0003187c) bg_popup_sub_pane_cp010

0x82f2,	// (0x0002db55) popup_vtel_slider_window_g1_ParamLimits

0x82f2,	// (0x0002db55) popup_vtel_slider_window_g1

0x8305,	// (0x0002db68) popup_vtel_slider_window_g2_ParamLimits

0x8305,	// (0x0002db68) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x000351bc) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x000351bc) popup_vtel_slider_window_g

0x835b,	// (0x0002dbbe) vtel_slider_pane_ParamLimits

0x835b,	// (0x0002dbbe) vtel_slider_pane

0x837d,	// (0x0002dbe0) vtel_slider_pane_g1_ParamLimits

0x837d,	// (0x0002dbe0) vtel_slider_pane_g1

0x8391,	// (0x0002dbf4) vtel_slider_pane_g2_ParamLimits

0x8391,	// (0x0002dbf4) vtel_slider_pane_g2

0x83a9,	// (0x0002dc0c) vtel_slider_pane_g3_ParamLimits

0x83a9,	// (0x0002dc0c) vtel_slider_pane_g3

0x837d,	// (0x0002dbe0) vtel_slider_pane_g4_ParamLimits

0x837d,	// (0x0002dbe0) vtel_slider_pane_g4

0x83bf,	// (0x0002dc22) vtel_slider_pane_g5_ParamLimits

0x83bf,	// (0x0002dc22) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x000351c5) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x000351c5) vtel_slider_pane_g

0xb472,	// (0x00030cd5) main_gallery2_pane

0x1ef7,	// (0x0002775a) aid_size_row_itut2_dropdow_list_ParamLimits

0x1ef7,	// (0x0002775a) aid_size_row_itut2_dropdow_list

0x1f83,	// (0x000277e6) grid_vitu2_function_top_pane_ParamLimits

0x1f83,	// (0x000277e6) grid_vitu2_function_top_pane

0x1fed,	// (0x00027850) popup_vitu2_dropdown_list_window_ParamLimits

0x1fed,	// (0x00027850) popup_vitu2_dropdown_list_window

0x2014,	// (0x00027877) popup_vitu2_match_list_window

0x2246,	// (0x00027aa9) cell_vitu2_function_top_pane_ParamLimits

0x2246,	// (0x00027aa9) cell_vitu2_function_top_pane

0x225e,	// (0x00027ac1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x225e,	// (0x00027ac1) cell_vitu2_function_top_pane_cp01

0x227a,	// (0x00027add) cell_vitu2_function_top_wide_pane_ParamLimits

0x227a,	// (0x00027add) cell_vitu2_function_top_wide_pane

0xb472,	// (0x00030cd5) bg_button_pane_cp012

0x2298,	// (0x00027afb) cell_vitu2_function_top_pane_g1

0xd1d8,	// (0x00032a3b) bg_button_pane_cp013_ParamLimits

0xd1d8,	// (0x00032a3b) bg_button_pane_cp013

0x83d5,	// (0x0002dc38) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x83d5,	// (0x0002dc38) cell_vitu2_function_top_wide_pane_g1

0xb472,	// (0x00030cd5) bg_popup_sub_pane_cp20

0x22ac,	// (0x00027b0f) list_vitu2_match_list_pane

0xcf57,	// (0x000327ba) bg_popup_sub_pane_cp20_g1

0xcf5f,	// (0x000327c2) bg_popup_sub_pane_cp20_g2

0x3d71,	// (0x000295d4) bg_popup_sub_pane_cp20_g3

0xcf67,	// (0x000327ca) bg_popup_sub_pane_cp20_g4

0x3d51,	// (0x000295b4) bg_popup_sub_pane_cp20_g5

0xd1f4,	// (0x00032a57) bg_popup_sub_pane_cp20_g6

0xcf77,	// (0x000327da) bg_popup_sub_pane_cp20_g7

0xcf7f,	// (0x000327e2) bg_popup_sub_pane_cp20_g8

0xcf87,	// (0x000327ea) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x000351d0) bg_popup_sub_pane_cp20_g

0xd1fc,	// (0x00032a5f) list_vitu2_match_list_item_pane_ParamLimits

0xd1fc,	// (0x00032a5f) list_vitu2_match_list_item_pane

0xd20e,	// (0x00032a71) list_vitu2_match_list_item_pane_t1

0xb480,	// (0x00030ce3) bg_popup_sub_pane_cp21

0x34bd,	// (0x00028d20) grid_vitu2_dropdown_list_pane

0x22c4,	// (0x00027b27) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x22c4,	// (0x00027b27) cell_vitu2_dropdown_list_char_pane

0x22e4,	// (0x00027b47) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x22e4,	// (0x00027b47) cell_vitu2_dropdown_list_ctrl_pane

0xd21c,	// (0x00032a7f) cell_vitu2_dropdown_list_char_pane_g1

0xd225,	// (0x00032a88) cell_vitu2_dropdown_list_char_pane_g2

0xd22e,	// (0x00032a91) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x000351e3) cell_vitu2_dropdown_list_char_pane_g

0x230c,	// (0x00027b6f) cell_vitu2_dropdown_list_char_pane_t1

0x83ed,	// (0x0002dc50) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x83ed,	// (0x0002dc50) cell_vitu2_dropdown_list_ctrl_pane_g1

0x83fa,	// (0x0002dc5d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x83fa,	// (0x0002dc5d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8407,	// (0x0002dc6a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8407,	// (0x0002dc6a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x231a,	// (0x00027b7d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x231a,	// (0x00027b7d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce24,	// (0x00032687) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce24,	// (0x00032687) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x000351ea) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x000351ea) cell_vitu2_dropdown_list_ctrl_pane_g

0x8414,	// (0x0002dc77) aid_size_cell_gallery2_ParamLimits

0x8414,	// (0x0002dc77) aid_size_cell_gallery2

0x8432,	// (0x0002dc95) grid_gallery2_pane_ParamLimits

0x8432,	// (0x0002dc95) grid_gallery2_pane

0x844c,	// (0x0002dcaf) scroll_pane_cp029_ParamLimits

0x844c,	// (0x0002dcaf) scroll_pane_cp029

0x845d,	// (0x0002dcc0) cell_gallery2_pane_ParamLimits

0x845d,	// (0x0002dcc0) cell_gallery2_pane

0xd237,	// (0x00032a9a) cell_gallery2_pane_g2

0x84bc,	// (0x0002dd1f) cell_gallery2_pane_g3

0xd23f,	// (0x00032aa2) cell_gallery2_pane_g4

0xd247,	// (0x00032aaa) cell_gallery2_pane_g5

0x34bd,	// (0x00028d20) grid_highlight_pane_cp10

0x2014,	// (0x00027877) popup_vitu2_match_list_window_ParamLimits

0x2029,	// (0x0002788c) popup_vitu2_query_window_ParamLimits

0x2029,	// (0x0002788c) popup_vitu2_query_window

0xb480,	// (0x00030ce3) bg_vitu2_candi_button_pane

0xd21c,	// (0x00032a7f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd225,	// (0x00032a88) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd22e,	// (0x00032a91) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x84c4,	// (0x0002dd27) bg_button_pane_cp015

0x84d5,	// (0x0002dd38) bg_button_pane_cp016

0x84e1,	// (0x0002dd44) bg_button_pane_cp017

0x533f,	// (0x0002aba2) bg_popup_sub_pane_cp22

0xd24f,	// (0x00032ab2) popup_vitu2_query_window_g1

0x851f,	// (0x0002dd82) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x000351f5) popup_vitu2_query_window_g

0x8541,	// (0x0002dda4) popup_vitu2_query_window_t1_ParamLimits

0x8541,	// (0x0002dda4) popup_vitu2_query_window_t1

0x8574,	// (0x0002ddd7) popup_vitu2_query_window_t2_ParamLimits

0x8574,	// (0x0002ddd7) popup_vitu2_query_window_t2

0x8586,	// (0x0002dde9) popup_vitu2_query_window_t3_ParamLimits

0x8586,	// (0x0002dde9) popup_vitu2_query_window_t3

0x85ae,	// (0x0002de11) popup_vitu2_query_window_t4_ParamLimits

0x85ae,	// (0x0002de11) popup_vitu2_query_window_t4

0x85c2,	// (0x0002de25) popup_vitu2_query_window_t5_ParamLimits

0x85c2,	// (0x0002de25) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x000351fc) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x000351fc) popup_vitu2_query_window_t

0xd059,	// (0x000328bc) main_cset_text_pane

0x8037,	// (0x0002d89a) aid_area_touch_slider_ParamLimits

0x8053,	// (0x0002d8b6) cset_slider_pane_ParamLimits

0x8076,	// (0x0002d8d9) main_cset_slider_pane_g1_ParamLimits

0x808b,	// (0x0002d8ee) main_cset_slider_pane_g2_ParamLimits

0xd07a,	// (0x000328dd) main_cset_slider_pane_g3_ParamLimits

0xd07a,	// (0x000328dd) main_cset_slider_pane_g3

0x80a0,	// (0x0002d903) main_cset_slider_pane_g4_ParamLimits

0x80a0,	// (0x0002d903) main_cset_slider_pane_g4

0x80af,	// (0x0002d912) main_cset_slider_pane_g5_ParamLimits

0x80af,	// (0x0002d912) main_cset_slider_pane_g5

0x80bb,	// (0x0002d91e) main_cset_slider_pane_g6_ParamLimits

0x80bb,	// (0x0002d91e) main_cset_slider_pane_g6

0xf8f6,	// (0x00035159) main_cset_slider_pane_g_ParamLimits

0xd0c2,	// (0x00032925) main_cset_slider_pane_t1_ParamLimits

0x812f,	// (0x0002d992) main_cset_slider_pane_t2_ParamLimits

0x8149,	// (0x0002d9ac) main_cset_slider_pane_t3_ParamLimits

0x8163,	// (0x0002d9c6) main_cset_slider_pane_t4_ParamLimits

0x817d,	// (0x0002d9e0) main_cset_slider_pane_t5_ParamLimits

0x8197,	// (0x0002d9fa) main_cset_slider_pane_t6_ParamLimits

0x81ac,	// (0x0002da0f) main_cset_slider_pane_t7_ParamLimits

0x81d6,	// (0x0002da39) main_cset_slider_pane_t8_ParamLimits

0x81d6,	// (0x0002da39) main_cset_slider_pane_t8

0x81fe,	// (0x0002da61) main_cset_slider_pane_t9_ParamLimits

0x81fe,	// (0x0002da61) main_cset_slider_pane_t9

0x8226,	// (0x0002da89) main_cset_slider_pane_t10_ParamLimits

0x8226,	// (0x0002da89) main_cset_slider_pane_t10

0x824e,	// (0x0002dab1) main_cset_slider_pane_t11_ParamLimits

0x824e,	// (0x0002dab1) main_cset_slider_pane_t11

0x8276,	// (0x0002dad9) main_cset_slider_pane_t12_ParamLimits

0x8276,	// (0x0002dad9) main_cset_slider_pane_t12

0x8293,	// (0x0002daf6) main_cset_slider_pane_t13_ParamLimits

0x8293,	// (0x0002daf6) main_cset_slider_pane_t13

0xf91b,	// (0x0003517e) main_cset_slider_pane_t_ParamLimits

0x2466,	// (0x00027cc9) bg_popup_sub_pane_cp011

0xd25b,	// (0x00032abe) main_cset_text_pane_g1

0xd263,	// (0x00032ac6) main_cset_text_pane_t1

0xd271,	// (0x00032ad4) main_cset_text_pane_t2

0xd27f,	// (0x00032ae2) main_cset_text_pane_t3

0xd28d,	// (0x00032af0) main_cset_text_pane_t4

0xd29b,	// (0x00032afe) main_cset_text_pane_t5

0xd2a9,	// (0x00032b0c) main_cset_text_pane_t6

0xd2b7,	// (0x00032b1a) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0003520b) main_cset_text_pane_t

0xb480,	// (0x00030ce3) main_cam4_burst_pane

0xb480,	// (0x00030ce3) main_cam5_pane

0x7f70,	// (0x0002d7d3) bg_button_pane_cp019

0x7f79,	// (0x0002d7dc) bg_button_pane_cp020

0xd086,	// (0x000328e9) main_cset_slider_pane_g7_ParamLimits

0xd086,	// (0x000328e9) main_cset_slider_pane_g7

0xd092,	// (0x000328f5) main_cset_slider_pane_g8_ParamLimits

0xd092,	// (0x000328f5) main_cset_slider_pane_g8

0x80cf,	// (0x0002d932) main_cset_slider_pane_g9_ParamLimits

0x80cf,	// (0x0002d932) main_cset_slider_pane_g9

0x80db,	// (0x0002d93e) main_cset_slider_pane_g10_ParamLimits

0x80db,	// (0x0002d93e) main_cset_slider_pane_g10

0x80e7,	// (0x0002d94a) main_cset_slider_pane_g11_ParamLimits

0x80e7,	// (0x0002d94a) main_cset_slider_pane_g11

0x80f3,	// (0x0002d956) main_cset_slider_pane_g12_ParamLimits

0x80f3,	// (0x0002d956) main_cset_slider_pane_g12

0x80ff,	// (0x0002d962) main_cset_slider_pane_g13_ParamLimits

0x80ff,	// (0x0002d962) main_cset_slider_pane_g13

0x810b,	// (0x0002d96e) main_cset_slider_pane_g14_ParamLimits

0x810b,	// (0x0002d96e) main_cset_slider_pane_g14

0x8117,	// (0x0002d97a) main_cset_slider_pane_g15_ParamLimits

0x8117,	// (0x0002d97a) main_cset_slider_pane_g15

0xd0ea,	// (0x0003294d) main_cset_slider_pane_t14_ParamLimits

0xd0ea,	// (0x0003294d) main_cset_slider_pane_t14

0xd123,	// (0x00032986) main_cset_slider_pane_t15_ParamLimits

0xd123,	// (0x00032986) main_cset_slider_pane_t15

0x862c,	// (0x0002de8f) aid_cam4_burst_size_cell_ParamLimits

0x862c,	// (0x0002de8f) aid_cam4_burst_size_cell

0x864c,	// (0x0002deaf) grid_cam4_burst_pane_ParamLimits

0x864c,	// (0x0002deaf) grid_cam4_burst_pane

0x8684,	// (0x0002dee7) linegrid_cam4_burst_pane_ParamLimits

0x8684,	// (0x0002dee7) linegrid_cam4_burst_pane

0xd2c5,	// (0x00032b28) scroll_pane_cp30_ParamLimits

0xd2c5,	// (0x00032b28) scroll_pane_cp30

0x86a8,	// (0x0002df0b) cell_cam4_burst_pane_ParamLimits

0x86a8,	// (0x0002df0b) cell_cam4_burst_pane

0xd2d1,	// (0x00032b34) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2d1,	// (0x00032b34) linegrid_cam4_burst_pane_g1

0x86f5,	// (0x0002df58) linegrid_cam4_burst_pane_g2_ParamLimits

0x86f5,	// (0x0002df58) linegrid_cam4_burst_pane_g2

0xd2de,	// (0x00032b41) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2de,	// (0x00032b41) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x0003521a) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x0003521a) linegrid_cam4_burst_pane_g

0x8706,	// (0x0002df69) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8706,	// (0x0002df69) linegrid_cam4_burst_pane_g3_copy1

0xd2eb,	// (0x00032b4e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2eb,	// (0x00032b4e) linegrid_cam4_burst_pane_g4

0x8720,	// (0x0002df83) linegrid_cam4_burst_pane_g5_ParamLimits

0x8720,	// (0x0002df83) linegrid_cam4_burst_pane_g5

0x8731,	// (0x0002df94) linegrid_cam4_burst_pane_g6_ParamLimits

0x8731,	// (0x0002df94) linegrid_cam4_burst_pane_g6

0xd2f8,	// (0x00032b5b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2f8,	// (0x00032b5b) linegrid_cam4_burst_pane_g7

0x8748,	// (0x0002dfab) cell_cam4_burst_pane_g1

0xd311,	// (0x00032b74) main_cam5_pane_t1_ParamLimits

0xd311,	// (0x00032b74) main_cam5_pane_t1

0xd323,	// (0x00032b86) main_cam5_pane_t2_ParamLimits

0xd323,	// (0x00032b86) main_cam5_pane_t2

0xd335,	// (0x00032b98) main_cam5_pane_t3_ParamLimits

0xd335,	// (0x00032b98) main_cam5_pane_t3

0xd347,	// (0x00032baa) main_cam5_pane_t4_ParamLimits

0xd347,	// (0x00032baa) main_cam5_pane_t4

0xd35f,	// (0x00032bc2) main_cam5_pane_t5_ParamLimits

0xd35f,	// (0x00032bc2) main_cam5_pane_t5

0xd373,	// (0x00032bd6) main_cam5_pane_t6_ParamLimits

0xd373,	// (0x00032bd6) main_cam5_pane_t6

0xd387,	// (0x00032bea) main_cam5_pane_t7_ParamLimits

0xd387,	// (0x00032bea) main_cam5_pane_t7

0xd399,	// (0x00032bfc) main_cam5_pane_t8_ParamLimits

0xd399,	// (0x00032bfc) main_cam5_pane_t8

0xd3b5,	// (0x00032c18) main_cam5_pane_t9_ParamLimits

0xd3b5,	// (0x00032c18) main_cam5_pane_t9

0xd3c7,	// (0x00032c2a) main_cam5_pane_t10_ParamLimits

0xd3c7,	// (0x00032c2a) main_cam5_pane_t10

0xd3d9,	// (0x00032c3c) main_cam5_pane_t11_ParamLimits

0xd3d9,	// (0x00032c3c) main_cam5_pane_t11

0xd3eb,	// (0x00032c4e) main_cam5_pane_t12_ParamLimits

0xd3eb,	// (0x00032c4e) main_cam5_pane_t12

0xd400,	// (0x00032c63) main_cam5_pane_t13_ParamLimits

0xd400,	// (0x00032c63) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x00035226) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x00035226) main_cam5_pane_t

0x117d,	// (0x000269e0) popup_scut_keymap_window_ParamLimits

0x117d,	// (0x000269e0) popup_scut_keymap_window

0x875b,	// (0x0002dfbe) aid_size_cell_brow_shortcut

0x34bd,	// (0x00028d20) bg_popup_window_pane_cp010

0x8767,	// (0x0002dfca) grid_scut_pane

0x8773,	// (0x0002dfd6) cell_scut_pane_ParamLimits

0x8773,	// (0x0002dfd6) cell_scut_pane

0x878a,	// (0x0002dfed) cell_scut_pane_g1

0xd41d,	// (0x00032c80) cell_scut_pane_t1

0xd42c,	// (0x00032c8f) cell_scut_pane_t2

0x8793,	// (0x0002dff6) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x00035241) cell_scut_pane_t

0x71aa,	// (0x0002ca0d) main_mup3_pane_g8_ParamLimits

0x71aa,	// (0x0002ca0d) main_mup3_pane_g8

0x1f0f,	// (0x00027772) area_vitu2_query_pane_ParamLimits

0x1f0f,	// (0x00027772) area_vitu2_query_pane

0x84ed,	// (0x0002dd50) input_focus_pane_cp08

0xd43b,	// (0x00032c9e) area_vitu2_query_pane_g1

0x87a1,	// (0x0002e004) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x00035248) area_vitu2_query_pane_g

0x87b0,	// (0x0002e013) area_vitu2_query_pane_t1_ParamLimits

0x87b0,	// (0x0002e013) area_vitu2_query_pane_t1

0x87c4,	// (0x0002e027) area_vitu2_query_pane_t2_ParamLimits

0x87c4,	// (0x0002e027) area_vitu2_query_pane_t2

0x87d8,	// (0x0002e03b) area_vitu2_query_pane_t3_ParamLimits

0x87d8,	// (0x0002e03b) area_vitu2_query_pane_t3

0xd447,	// (0x00032caa) area_vitu2_query_pane_t4_ParamLimits

0xd447,	// (0x00032caa) area_vitu2_query_pane_t4

0xd46f,	// (0x00032cd2) area_vitu2_query_pane_t5_ParamLimits

0xd46f,	// (0x00032cd2) area_vitu2_query_pane_t5

0xd497,	// (0x00032cfa) area_vitu2_query_pane_t6_ParamLimits

0xd497,	// (0x00032cfa) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x0003524d) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x0003524d) area_vitu2_query_pane_t

0x8800,	// (0x0002e063) bg_button_pane_cp018

0x880c,	// (0x0002e06f) bg_button_pane_cp021

0x8818,	// (0x0002e07b) bg_button_pane_cp022

0x8837,	// (0x0002e09a) input_focus_pane_cp09

0x5047,	// (0x0002a8aa) aid_size_touch_mv_arrow_left

0x5072,	// (0x0002a8d5) aid_size_touch_mv_arrow_right

0xd09e,	// (0x00032901) main_cset_slider_pane_g16_ParamLimits

0xd09e,	// (0x00032901) main_cset_slider_pane_g16

0xd0aa,	// (0x0003290d) main_cset_slider_pane_g17_ParamLimits

0xd0aa,	// (0x0003290d) main_cset_slider_pane_g17

0x8748,	// (0x0002dfab) cell_cam4_burst_pane_g1_ParamLimits

0x2466,	// (0x00027cc9) compa_mode_pane

0x8315,	// (0x0002db78) popup_vtel_slider_window_g3_ParamLimits

0x8315,	// (0x0002db78) popup_vtel_slider_window_g3

0x832c,	// (0x0002db8f) popup_vtel_slider_window_g4_ParamLimits

0x832c,	// (0x0002db8f) popup_vtel_slider_window_g4

0x8343,	// (0x0002dba6) popup_vtel_slider_window_t1_ParamLimits

0x8343,	// (0x0002dba6) popup_vtel_slider_window_t1

0xb480,	// (0x00030ce3) main_cl_pane

0xbd19,	// (0x0003157c) popup_imed_adjust2_window_ParamLimits

0x533f,	// (0x0002aba2) bg_tb_trans_pane_cp05_ParamLimits

0xc773,	// (0x00031fd6) popup_imed_adjust2_window_g1_ParamLimits

0xc782,	// (0x00031fe5) popup_imed_adjust2_window_g2_ParamLimits

0xc782,	// (0x00031fe5) popup_imed_adjust2_window_g2

0xc78e,	// (0x00031ff1) popup_imed_adjust2_window_g3_ParamLimits

0xc78e,	// (0x00031ff1) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x00034fc3) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x00034fc3) popup_imed_adjust2_window_g

0xc79a,	// (0x00031ffd) popup_imed_adjust2_window_t1_ParamLimits

0xc7b2,	// (0x00032015) slider_imed_adjust_pane_ParamLimits

0xc7c6,	// (0x00032029) slider_imed_adjust_pane_g1_ParamLimits

0xc7d6,	// (0x00032039) slider_imed_adjust_pane_g2_ParamLimits

0xc7e6,	// (0x00032049) slider_imed_adjust_pane_g3_ParamLimits

0xc7f7,	// (0x0003205a) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x00034fca) slider_imed_adjust_pane_g_ParamLimits

0x1ccc,	// (0x0002752f) aid_touch_area_cam4_ParamLimits

0x1ccc,	// (0x0002752f) aid_touch_area_cam4

0xcdf6,	// (0x00032659) battery_pane_cp01

0x1d9b,	// (0x000275fe) main_camera4_pane_g6_ParamLimits

0x1d9b,	// (0x000275fe) main_camera4_pane_g6

0x1dc5,	// (0x00027628) main_camera4_pane_t2_ParamLimits

0x1dc5,	// (0x00027628) main_camera4_pane_t2

0x0001,

0xf869,	// (0x000350cc) main_camera4_pane_t_ParamLimits

0xf869,	// (0x000350cc) main_camera4_pane_t

0x1de6,	// (0x00027649) aid_touch_area_vid4_ParamLimits

0x1de6,	// (0x00027649) aid_touch_area_vid4

0x1e3a,	// (0x0002769d) main_video4_pane_g5_ParamLimits

0x1e3a,	// (0x0002769d) main_video4_pane_g5

0x1e5f,	// (0x000276c2) vid4_progress_pane_ParamLimits

0x1e5f,	// (0x000276c2) vid4_progress_pane

0xd0b6,	// (0x00032919) main_cset_slider_pane_g18_ParamLimits

0xd0b6,	// (0x00032919) main_cset_slider_pane_g18

0xd305,	// (0x00032b68) cell_cam4_burst_pane_g2_ParamLimits

0xd305,	// (0x00032b68) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x00035221) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x00035221) cell_cam4_burst_pane_g

0x2d61,	// (0x000285c4) bg_cl_pane_ParamLimits

0x2d61,	// (0x000285c4) bg_cl_pane

0x8847,	// (0x0002e0aa) cl_header_pane_ParamLimits

0x8847,	// (0x0002e0aa) cl_header_pane

0x885b,	// (0x0002e0be) cl_listscroll_pane_ParamLimits

0x885b,	// (0x0002e0be) cl_listscroll_pane

0xd4e3,	// (0x00032d46) bg_cl_pane_g1

0xd4eb,	// (0x00032d4e) bg_cl_pane_g2

0xd4f3,	// (0x00032d56) bg_cl_pane_g3

0xd4fb,	// (0x00032d5e) bg_cl_pane_g4

0xd503,	// (0x00032d66) bg_cl_pane_g5

0xd50b,	// (0x00032d6e) bg_cl_pane_g6

0xd513,	// (0x00032d76) bg_cl_pane_g7

0xd51b,	// (0x00032d7e) bg_cl_pane_g8

0xd523,	// (0x00032d86) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x0003525c) bg_cl_pane_g

0x886b,	// (0x0002e0ce) aid_height_cl_leading_ParamLimits

0x886b,	// (0x0002e0ce) aid_height_cl_leading

0x8877,	// (0x0002e0da) aid_height_cl_text_ParamLimits

0x8877,	// (0x0002e0da) aid_height_cl_text

0x2b9e,	// (0x00028401) bg_cl_header_pane_ParamLimits

0x2b9e,	// (0x00028401) bg_cl_header_pane

0x8896,	// (0x0002e0f9) cl_header_pane_g1_ParamLimits

0x8896,	// (0x0002e0f9) cl_header_pane_g1

0x88ac,	// (0x0002e10f) cl_header_pane_t1_ParamLimits

0x88ac,	// (0x0002e10f) cl_header_pane_t1

0xd52b,	// (0x00032d8e) cl_list_pane

0xd071,	// (0x000328d4) hc_scroll_pane_cp01

0x3d51,	// (0x000295b4) bg_cl_header_pane_g1

0xcf57,	// (0x000327ba) bg_cl_header_pane_g2

0x3d71,	// (0x000295d4) bg_cl_header_pane_g3

0xcf67,	// (0x000327ca) bg_cl_header_pane_g4

0xcf5f,	// (0x000327c2) bg_cl_header_pane_g5

0xd1f4,	// (0x00032a57) bg_cl_header_pane_g6

0xcf7f,	// (0x000327e2) bg_cl_header_pane_g7

0xcf87,	// (0x000327ea) bg_cl_header_pane_g8

0xcf77,	// (0x000327da) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x0003526f) bg_cl_header_pane_g

0x88c5,	// (0x0002e128) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x88c5,	// (0x0002e128) hc_cl_list_double_graphic_heading_pane

0x88d6,	// (0x0002e139) hc_cl_list_single_graphic_pane_ParamLimits

0x88d6,	// (0x0002e139) hc_cl_list_single_graphic_pane

0x88ef,	// (0x0002e152) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x88ef,	// (0x0002e152) hc_cl_list_single_graphic_pane_g1

0x88fb,	// (0x0002e15e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x88fb,	// (0x0002e15e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x00035282) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x00035282) hc_cl_list_single_graphic_pane_g

0x890f,	// (0x0002e172) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x890f,	// (0x0002e172) hc_cl_list_single_graphic_pane_t1

0x88ef,	// (0x0002e152) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x88ef,	// (0x0002e152) hc_cl_list_double_graphic_heading_pane_g1

0x8924,	// (0x0002e187) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8924,	// (0x0002e187) hc_cl_list_double_graphic_heading_pane_g2

0x8938,	// (0x0002e19b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8938,	// (0x0002e19b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x00035287) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x00035287) hc_cl_list_double_graphic_heading_pane_g

0x894c,	// (0x0002e1af) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x894c,	// (0x0002e1af) hc_cl_list_double_graphic_heading_pane_t1

0x8961,	// (0x0002e1c4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8961,	// (0x0002e1c4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x0003528e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x0003528e) hc_cl_list_double_graphic_heading_pane_t

0xd53c,	// (0x00032d9f) vid4_progress_pane_g1

0xd54c,	// (0x00032daf) vid4_progress_pane_g2

0x2336,	// (0x00027b99) vid4_progress_pane_g3

0xd55c,	// (0x00032dbf) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x00035293) vid4_progress_pane_g

0x2348,	// (0x00027bab) vid4_progress_pane_t1

0xd574,	// (0x00032dd7) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x0003529e) vid4_progress_pane_t

0x235e,	// (0x00027bc1) wait_bar_pane_cp07

0xc027,	// (0x0003188a) blid_firmament_pane_ParamLimits

0xc06a,	// (0x000318cd) popup_blid_sat_info2_window_g1

0xc08e,	// (0x000318f1) popup_blid_sat_info2_window_t3

0xc09c,	// (0x000318ff) popup_blid_sat_info2_window_t4

0xc0aa,	// (0x0003190d) popup_blid_sat_info2_window_t5

0xc0b8,	// (0x0003191b) popup_blid_sat_info2_window_t6

0xc0c8,	// (0x0003192b) popup_blid_sat_info2_window_t7

0xc0d6,	// (0x00031939) popup_blid_sat_info2_window_t8

0xc0e4,	// (0x00031947) popup_blid_sat_info2_window_t9

0xc0f2,	// (0x00031955) popup_blid_sat_info2_window_t10

0xc1b3,	// (0x00031a16) aid_firma_cardinal_ParamLimits

0xc1c7,	// (0x00031a2a) blid_firmament_pane_t1_ParamLimits

0xc1de,	// (0x00031a41) blid_firmament_pane_t2_ParamLimits

0xc1f5,	// (0x00031a58) blid_firmament_pane_t3_ParamLimits

0xc20c,	// (0x00031a6f) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x00034ebc) blid_firmament_pane_t_ParamLimits

0xc223,	// (0x00031a86) blid_sat_info_pane_ParamLimits

0xb472,	// (0x00030cd5) main_cam_set_pane_ParamLimits

0x78b3,	// (0x0002d116) aid_size_cell_colour_35_ParamLimits

0x78d3,	// (0x0002d136) aid_size_cell_colour_112_ParamLimits

0x78f3,	// (0x0002d156) aid_size_cell_effect_ParamLimits

0x533f,	// (0x0002aba2) bg_tb_trans_pane_cp02_ParamLimits

0x4960,	// (0x0002a1c3) heading_imed_pane_ParamLimits

0x7913,	// (0x0002d176) listscroll_imed_pane_ParamLimits

0x65b8,	// (0x0002be1b) popup_call2_audio_first_window_g5_ParamLimits

0x65b8,	// (0x0002be1b) popup_call2_audio_first_window_g5

0x19b9,	// (0x0002721c) aid_size_touch_image3_arrow_left_ParamLimits

0x19b9,	// (0x0002721c) aid_size_touch_image3_arrow_left

0x19e5,	// (0x00027248) aid_size_touch_image3_arrow_right_ParamLimits

0x19e5,	// (0x00027248) aid_size_touch_image3_arrow_right

0xd589,	// (0x00032dec) vid4_progress_pane_t3

0x7ab6,	// (0x0002d319) main_hwr_training_symbol_option_pane_ParamLimits

0x7ab6,	// (0x0002d319) main_hwr_training_symbol_option_pane

0xc9ac,	// (0x0003220f) popup_hwr_training_preview_window_ParamLimits

0xc9ac,	// (0x0003220f) popup_hwr_training_preview_window

0x1860,	// (0x000270c3) hwr_training_navi_pane_g5_ParamLimits

0x1860,	// (0x000270c3) hwr_training_navi_pane_g5

0xcf45,	// (0x000327a8) popup_char_count_window

0xb472,	// (0x00030cd5) bg_popup_sub_pane_cp20_ParamLimits

0x22ac,	// (0x00027b0f) list_vitu2_match_list_pane_ParamLimits

0x22b8,	// (0x00027b1b) vitu2_page_scroll_pane_ParamLimits

0x22b8,	// (0x00027b1b) vitu2_page_scroll_pane

0xd5c1,	// (0x00032e24) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd5c1,	// (0x00032e24) list_single_hwr_training_symbol_option_pane

0xd5d4,	// (0x00032e37) list_single_hwr_training_symbol_option_pane_g1

0xd5dc,	// (0x00032e3f) list_single_hwr_training_symbol_option_pane_t1

0xd5ea,	// (0x00032e4d) bg_button_pane_cp023

0xd5f3,	// (0x00032e56) bg_button_pane_cp024

0xd626,	// (0x00032e89) vitu2_page_scroll_pane_g1

0xd62e,	// (0x00032e91) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x000352a5) vitu2_page_scroll_pane_g

0xd636,	// (0x00032e99) vitu2_page_scroll_pane_t1

0x2e31,	// (0x00028694) popup_char_count_window_g1

0xd645,	// (0x00032ea8) popup_char_count_window_g2

0xb4d0,	// (0x00030d33) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x000352aa) popup_char_count_window_g

0xd64e,	// (0x00032eb1) popup_char_count_window_t1

0xb480,	// (0x00030ce3) main_vded2_pane

0xc75f,	// (0x00031fc2) aid_size_cell_imed_line

0xc769,	// (0x00031fcc) grid_imed_line_width_pane

0xcec6,	// (0x00032729) vid4_indicators_pane_g4

0xd65c,	// (0x00032ebf) cell_imed_line_width_pane_ParamLimits

0xd65c,	// (0x00032ebf) cell_imed_line_width_pane

0xd670,	// (0x00032ed3) cell_imed_line_width_pane_g1

0xd679,	// (0x00032edc) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x000352b1) cell_imed_line_width_pane_g

0x898a,	// (0x0002e1ed) main_vded2_pane_g1_ParamLimits

0x898a,	// (0x0002e1ed) main_vded2_pane_g1

0x89a0,	// (0x0002e203) main_vded2_pane_g2_ParamLimits

0x89a0,	// (0x0002e203) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x000352b6) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x000352b6) main_vded2_pane_g

0x89b2,	// (0x0002e215) vded2_slider_pane_ParamLimits

0x89b2,	// (0x0002e215) vded2_slider_pane

0x89c2,	// (0x0002e225) aid_size_touch_vded2_end

0x89cc,	// (0x0002e22f) aid_size_touch_vded2_playhead

0xd681,	// (0x00032ee4) aid_size_touch_vded2_start

0xd689,	// (0x00032eec) vded2_slider_bg_pane

0xd692,	// (0x00032ef5) vded2_slider_pane_g1

0xd69b,	// (0x00032efe) vded2_slider_pane_g2

0x89d6,	// (0x0002e239) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x000352bb) vded2_slider_pane_g

0xd6a3,	// (0x00032f06) vded2_slider_bg_pane_g1

0xd6ac,	// (0x00032f0f) vded2_slider_bg_pane_g2

0xd6b5,	// (0x00032f18) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x000352c2) vded2_slider_bg_pane_g

0x5751,	// (0x0002afb4) aid_postcard_touch_down_pane_ParamLimits

0x5751,	// (0x0002afb4) aid_postcard_touch_down_pane

0x5767,	// (0x0002afca) aid_postcard_touch_up_pane_ParamLimits

0x5767,	// (0x0002afca) aid_postcard_touch_up_pane

0xb480,	// (0x00030ce3) main_blid2_pane

0xbcff,	// (0x00031562) popup_blid2_search_window

0x2466,	// (0x00027cc9) blid2_gps_pane

0x2466,	// (0x00027cc9) blid2_navig_pane

0x2466,	// (0x00027cc9) blid2_search_pane

0x2466,	// (0x00027cc9) blid2_tripm_pane

0x89e1,	// (0x0002e244) blid2_search_pane_g1_ParamLimits

0x89e1,	// (0x0002e244) blid2_search_pane_g1

0x89f9,	// (0x0002e25c) blid2_search_pane_t1_ParamLimits

0x89f9,	// (0x0002e25c) blid2_search_pane_t1

0x8a0b,	// (0x0002e26e) aid_size_cell_blid2_gps_ParamLimits

0x8a0b,	// (0x0002e26e) aid_size_cell_blid2_gps

0x8a23,	// (0x0002e286) blid2_gps_pane_g1_ParamLimits

0x8a23,	// (0x0002e286) blid2_gps_pane_g1

0x8a37,	// (0x0002e29a) grid_blid2_satellite_pane_ParamLimits

0x8a37,	// (0x0002e29a) grid_blid2_satellite_pane

0x8a51,	// (0x0002e2b4) blid2_navig_pane_g1_ParamLimits

0x8a51,	// (0x0002e2b4) blid2_navig_pane_g1

0x8a5d,	// (0x0002e2c0) blid2_navig_pane_t1_ParamLimits

0x8a5d,	// (0x0002e2c0) blid2_navig_pane_t1

0x8a78,	// (0x0002e2db) blid2_navig_pane_t2_ParamLimits

0x8a78,	// (0x0002e2db) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x000352c9) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x000352c9) blid2_navig_pane_t

0x8a93,	// (0x0002e2f6) blid2_navig_ring_pane_ParamLimits

0x8a93,	// (0x0002e2f6) blid2_navig_ring_pane

0x8aac,	// (0x0002e30f) blid2_speed_pane_ParamLimits

0x8aac,	// (0x0002e30f) blid2_speed_pane

0x8ab8,	// (0x0002e31b) blid2_tripm_pane_g1_ParamLimits

0x8ab8,	// (0x0002e31b) blid2_tripm_pane_g1

0x8ad3,	// (0x0002e336) blid2_tripm_pane_g2_ParamLimits

0x8ad3,	// (0x0002e336) blid2_tripm_pane_g2

0x8ae7,	// (0x0002e34a) blid2_tripm_pane_g3_ParamLimits

0x8ae7,	// (0x0002e34a) blid2_tripm_pane_g3

0x8afb,	// (0x0002e35e) blid2_tripm_pane_g4_ParamLimits

0x8afb,	// (0x0002e35e) blid2_tripm_pane_g4

0x8b0f,	// (0x0002e372) blid2_tripm_pane_g5_ParamLimits

0x8b0f,	// (0x0002e372) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x000352ce) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x000352ce) blid2_tripm_pane_g

0x8b35,	// (0x0002e398) blid2_tripm_pane_t1_ParamLimits

0x8b35,	// (0x0002e398) blid2_tripm_pane_t1

0x8b50,	// (0x0002e3b3) blid2_tripm_pane_t2_ParamLimits

0x8b50,	// (0x0002e3b3) blid2_tripm_pane_t2

0x8b69,	// (0x0002e3cc) blid2_tripm_pane_t3_ParamLimits

0x8b69,	// (0x0002e3cc) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x000352db) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x000352db) blid2_tripm_pane_t

0x8bb0,	// (0x0002e413) cell_blid2_satellite_pane_ParamLimits

0x8bb0,	// (0x0002e413) cell_blid2_satellite_pane

0x8bce,	// (0x0002e431) cell_blid2_satellite_pane_g1

0xd6be,	// (0x00032f21) cell_blid2_satellite_pane_t1

0x36aa,	// (0x00028f0d) blid2_speed_pane_g1

0xd6cc,	// (0x00032f2f) blid2_speed_pane_t1

0xd6da,	// (0x00032f3d) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x000352e4) blid2_speed_pane_t

0x36aa,	// (0x00028f0d) blid2_navig_ring_pane_g1

0x8bd7,	// (0x0002e43a) blid2_navig_ring_pane_g2

0x8bdf,	// (0x0002e442) blid2_navig_ring_pane_g3

0x8be7,	// (0x0002e44a) blid2_navig_ring_pane_g4

0x8bef,	// (0x0002e452) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x000352e9) blid2_navig_ring_pane_g

0x2466,	// (0x00027cc9) bg_popup_window_pane_cp011

0xd6e8,	// (0x00032f4b) popup_blid2_search_window_g1

0xd6f0,	// (0x00032f53) popup_blid2_search_window_t1

0xd6fe,	// (0x00032f61) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x000352f4) popup_blid2_search_window_t

0x3c1b,	// (0x0002947e) main_browser_pane_g1

0x2d61,	// (0x000285c4) main_browser_pane_ParamLimits

0xb472,	// (0x00030cd5) bg_button_pane_cp011_ParamLimits

0x222b,	// (0x00027a8e) cell_vitu2_function_pane_g1_ParamLimits

0x533f,	// (0x0002aba2) bg_popup_sub_pane_cp22_ParamLimits

0x84ed,	// (0x0002dd50) input_focus_pane_cp08_ParamLimits

0x8508,	// (0x0002dd6b) popup_vitu2_query_button_pane_ParamLimits

0x8508,	// (0x0002dd6b) popup_vitu2_query_button_pane

0x8517,	// (0x0002dd7a) popup_vitu2_query_input_button_pane

0xd24f,	// (0x00032ab2) popup_vitu2_query_window_g1_ParamLimits

0x851f,	// (0x0002dd82) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x000351f5) popup_vitu2_query_window_g_ParamLimits

0x2466,	// (0x00027cc9) bg_button_pane_cp026

0x8bf7,	// (0x0002e45a) popup_vitu2_query_input_button_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp025

0xd70c,	// (0x00032f6f) popup_vitu2_query_button_pane_t1

0x6e78,	// (0x0002c6db) main_mp3_pane_t6

0x6e86,	// (0x0002c6e9) popup_slider_window_cp01

0xce32,	// (0x00032695) cam4_battery_pane

0xce85,	// (0x000326e8) cam4_battery_pane_cp02

0xd534,	// (0x00032d97) cam4_battery_pane_cp01

0xd534,	// (0x00032d97) cam4_battery_pane_cp03

0xbf8e,	// (0x000317f1) cam4_battery_pane_g1

0x36aa,	// (0x00028f0d) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x000352f9) cam4_battery_pane_g

0xc100,	// (0x00031963) popup_blid_sat_info2_window_t11

0x5047,	// (0x0002a8aa) aid_size_touch_mv_arrow_left_ParamLimits

0x5072,	// (0x0002a8d5) aid_size_touch_mv_arrow_right_ParamLimits

0x50d0,	// (0x0002a933) navi_pane_g1_ParamLimits

0x50dc,	// (0x0002a93f) navi_pane_g2_ParamLimits

0x510a,	// (0x0002a96d) navi_pane_g3_ParamLimits

0xf35a,	// (0x00034bbd) navi_pane_g_ParamLimits

0x51c8,	// (0x0002aa2b) navi_pane_mv_t1_ParamLimits

0x791f,	// (0x0002d182) grid_imed_effect_pane_ParamLimits

0x37cb,	// (0x0002902e) aid_placing_vt_slider_lsc

0x37db,	// (0x0002903e) aid_placing_vt_slider_prt

0x2b9e,	// (0x00028401) bg_tb_trans_pane_cp01_ParamLimits

0xc39e,	// (0x00031c01) popup_image_details_window_g1_ParamLimits

0xc3b1,	// (0x00031c14) popup_image_details_window_g2_ParamLimits

0xc3c6,	// (0x00031c29) popup_image_details_window_g3_ParamLimits

0xc3c6,	// (0x00031c29) popup_image_details_window_g3

0xf699,	// (0x00034efc) popup_image_details_window_g_ParamLimits

0xc3da,	// (0x00031c3d) popup_image_details_window_t1_ParamLimits

0xc3ec,	// (0x00031c4f) popup_image_details_window_t2_ParamLimits

0xc405,	// (0x00031c68) popup_image_details_window_t3_ParamLimits

0xc419,	// (0x00031c7c) popup_image_details_window_t4_ParamLimits

0xc434,	// (0x00031c97) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x00034f03) popup_image_details_window_t_ParamLimits

0x8883,	// (0x0002e0e6) cl_header_name_pane_ParamLimits

0x8883,	// (0x0002e0e6) cl_header_name_pane

0x8bff,	// (0x0002e462) cl_header_name_pane_t1_ParamLimits

0x8bff,	// (0x0002e462) cl_header_name_pane_t1

0x8c20,	// (0x0002e483) cl_header_name_pane_t2_ParamLimits

0x8c20,	// (0x0002e483) cl_header_name_pane_t2

0x8c62,	// (0x0002e4c5) cl_header_name_pane_t3_ParamLimits

0x8c62,	// (0x0002e4c5) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x000352fe) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x000352fe) cl_header_name_pane_t

0x5199,	// (0x0002a9fc) navi_pane_mv_g2_ParamLimits

0xcf10,	// (0x00032773) field_vitu2_entry_pane_g1_ParamLimits

0xcf1c,	// (0x0003277f) field_vitu2_entry_pane_g2_ParamLimits

0x5309,	// (0x0002ab6c) field_vitu2_entry_pane_g3_ParamLimits

0x5309,	// (0x0002ab6c) field_vitu2_entry_pane_g3

0xf89b,	// (0x000350fe) field_vitu2_entry_pane_g_ParamLimits

0x20bb,	// (0x0002791e) cell_vitu2_itu_pane_g1_ParamLimits

0x20d3,	// (0x00027936) cell_vitu2_itu_pane_g2_ParamLimits

0x20d3,	// (0x00027936) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0003510a) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0003510a) cell_vitu2_itu_pane_g

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp05_ParamLimits

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp05

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp03

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp04

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp10_ParamLimits

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp10

0x8827,	// (0x0002e08a) bg_vkb2_func_pane_cp08

0x8800,	// (0x0002e063) bg_vkb2_func_pane_cp06

0x880c,	// (0x0002e06f) bg_vkb2_func_pane_cp07

0xd5fc,	// (0x00032e5f) bg_vkb2_func_pane_cp11_ParamLimits

0xd5fc,	// (0x00032e5f) bg_vkb2_func_pane_cp11

0xd611,	// (0x00032e74) bg_vkb2_func_pane_cp12_ParamLimits

0xd611,	// (0x00032e74) bg_vkb2_func_pane_cp12

0x2466,	// (0x00027cc9) bg_vkb2_func_pane_cp09

0xcf57,	// (0x000327ba) bg_vkb2_func_pane_g1

0x3d71,	// (0x000295d4) bg_vkb2_func_pane_g2

0xcf5f,	// (0x000327c2) bg_vkb2_func_pane_g3

0xcf67,	// (0x000327ca) bg_vkb2_func_pane_g4

0xd1f4,	// (0x00032a57) bg_vkb2_func_pane_g5

0xcf7f,	// (0x000327e2) bg_vkb2_func_pane_g6

0xcf87,	// (0x000327ea) bg_vkb2_func_pane_g7

0xcf77,	// (0x000327da) bg_vkb2_func_pane_g8

0x3d51,	// (0x000295b4) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x00035305) bg_vkb2_func_pane_g

0x8b23,	// (0x0002e386) blid2_tripm_pane_g6_ParamLimits

0x8b23,	// (0x0002e386) blid2_tripm_pane_g6

0xcce3,	// (0x00032546) mp4_progress_pane_g1

0x8b9c,	// (0x0002e3ff) blid2_tripm_values_pane_ParamLimits

0x8b9c,	// (0x0002e3ff) blid2_tripm_values_pane

0x8c93,	// (0x0002e4f6) blid2_tripm_values_pane_t1

0x8ca1,	// (0x0002e504) blid2_tripm_values_pane_t2

0x8caf,	// (0x0002e512) blid2_tripm_values_pane_t3

0x8cbd,	// (0x0002e520) blid2_tripm_values_pane_t4

0x8ccb,	// (0x0002e52e) blid2_tripm_values_pane_t5

0x8cd9,	// (0x0002e53c) blid2_tripm_values_pane_t6

0x8ce7,	// (0x0002e54a) blid2_tripm_values_pane_t7

0x8cf5,	// (0x0002e558) blid2_tripm_values_pane_t8

0x8d03,	// (0x0002e566) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x00035318) blid2_tripm_values_pane_t

0x3817,	// (0x0002907a) call_video_pane_t1_ParamLimits

0x3835,	// (0x00029098) call_video_pane_t2_ParamLimits

0xf208,	// (0x00034a6b) call_video_pane_t_ParamLimits

0x5663,	// (0x0002aec6) msg_header_pane_g1_ParamLimits

0x5671,	// (0x0002aed4) msg_header_pane_g2_ParamLimits

0x5671,	// (0x0002aed4) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00034c60) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00034c60) msg_header_pane_g

0x2d61,	// (0x000285c4) main_clock2_pane_ParamLimits

0x76f4,	// (0x0002cf57) grid_clock2_toolbar_pane_ParamLimits

0x76f4,	// (0x0002cf57) grid_clock2_toolbar_pane

0x76f4,	// (0x0002cf57) listscroll_clock2_pane_ParamLimits

0x76f4,	// (0x0002cf57) listscroll_clock2_pane

0x77d8,	// (0x0002d03b) main_clock2_pane_t3_ParamLimits

0x77d8,	// (0x0002d03b) main_clock2_pane_t3

0x77fc,	// (0x0002d05f) main_clock2_pane_t4_ParamLimits

0x77fc,	// (0x0002d05f) main_clock2_pane_t4

0xd71a,	// (0x00032f7d) cell_clock2_toolbar_pane

0xd722,	// (0x00032f85) cell_clock2_toolbar_pane_cp01

0xd722,	// (0x00032f85) cell_clock2_toolbar_pane_cp02

0xd72a,	// (0x00032f8d) cell_clock2_toolbar_pane_cp03

0xd732,	// (0x00032f95) list_clock2_pane

0x4df3,	// (0x0002a656) scroll_pane_cp10

0xd73a,	// (0x00032f9d) list_single_clock2_pane_ParamLimits

0xd73a,	// (0x00032f9d) list_single_clock2_pane

0x34bd,	// (0x00028d20) list_highlight_pane_cp08

0xd747,	// (0x00032faa) list_single_clock2_pane_t1

0xd755,	// (0x00032fb8) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x0003532b) list_single_clock2_pane_t

0x2466,	// (0x00027cc9) bg_button_pane_cp10

0xd763,	// (0x00032fc6) cell_clock2_toolbar_pane_g1

0x144e,	// (0x00026cb1) aid_main_viewer_pane_g1_ParamLimits

0x144e,	// (0x00026cb1) aid_main_viewer_pane_g1

0x145c,	// (0x00026cbf) aid_main_viewer_pane_g2_ParamLimits

0x145c,	// (0x00026cbf) aid_main_viewer_pane_g2

0x5707,	// (0x0002af6a) aid_main_viewer_pane_g3_ParamLimits

0x5707,	// (0x0002af6a) aid_main_viewer_pane_g3

0x5716,	// (0x0002af79) aid_main_viewer_pane_g4_ParamLimits

0x5716,	// (0x0002af79) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00034c71) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00034c71) aid_main_viewer_pane_g

0x1490,	// (0x00026cf3) main_calc_pane_ParamLimits

0x14b6,	// (0x00026d19) main_dialer2_pane_ParamLimits

0xb480,	// (0x00030ce3) main_cam6_pane

0xb480,	// (0x00030ce3) main_vid6_pane

0x7700,	// (0x0002cf63) listscroll_gen_pane_cp06_ParamLimits

0x7700,	// (0x0002cf63) listscroll_gen_pane_cp06

0x781f,	// (0x0002d082) main_clock2_pane_t5_ParamLimits

0x781f,	// (0x0002d082) main_clock2_pane_t5

0x787d,	// (0x0002d0e0) aid_call2_pane_cp10_ParamLimits

0x788f,	// (0x0002d0f2) aid_call_pane_cp10_ParamLimits

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g2_ParamLimits

0x178c,	// (0x00026fef) popup_clock_analogue_window_cp10_g3_ParamLimits

0x178c,	// (0x00026fef) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4fd6,	// (0x0002a839) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x00034fb8) popup_clock_analogue_window_cp10_g_ParamLimits

0x17a2,	// (0x00027005) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7b93,	// (0x0002d3f6) cell_dialer2_keypad_pane_g2_ParamLimits

0x7b93,	// (0x0002d3f6) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x0003509d) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x0003509d) cell_dialer2_keypad_pane_g

0x7baf,	// (0x0002d412) cell_dialer2_keypad_pane_t1

0x8029,	// (0x0002d88c) main_cset_text2_pane_ParamLimits

0x8029,	// (0x0002d88c) main_cset_text2_pane

0xd43b,	// (0x00032c9e) area_vitu2_query_pane_g1_ParamLimits

0x87a1,	// (0x0002e004) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x00035248) area_vitu2_query_pane_g_ParamLimits

0xd4bf,	// (0x00032d22) area_vitu2_query_pane_t7_ParamLimits

0xd4bf,	// (0x00032d22) area_vitu2_query_pane_t7

0x8800,	// (0x0002e063) bg_button_pane_cp018_ParamLimits

0x880c,	// (0x0002e06f) bg_button_pane_cp021_ParamLimits

0x8818,	// (0x0002e07b) bg_button_pane_cp022_ParamLimits

0x8827,	// (0x0002e08a) bg_vkb2_func_pane_cp08_ParamLimits

0x8800,	// (0x0002e063) bg_vkb2_func_pane_cp06_ParamLimits

0x880c,	// (0x0002e06f) bg_vkb2_func_pane_cp07_ParamLimits

0x8837,	// (0x0002e09a) input_focus_pane_cp09_ParamLimits

0xd76b,	// (0x00032fce) cam6_autofocus_pane_ParamLimits

0xd76b,	// (0x00032fce) cam6_autofocus_pane

0x236f,	// (0x00027bd2) cam6_image_uncrop_pane_ParamLimits

0x236f,	// (0x00027bd2) cam6_image_uncrop_pane

0x237e,	// (0x00027be1) cam6_indi_pane_ParamLimits

0x237e,	// (0x00027be1) cam6_indi_pane

0x2394,	// (0x00027bf7) cam6_mode_pane_ParamLimits

0x2394,	// (0x00027bf7) cam6_mode_pane

0x23a6,	// (0x00027c09) cam6_timer_pane_ParamLimits

0x23a6,	// (0x00027c09) cam6_timer_pane

0x23b6,	// (0x00027c19) cam6_zoom_pane_ParamLimits

0x23b6,	// (0x00027c19) cam6_zoom_pane

0x8d11,	// (0x0002e574) cam6_mode_pane_g1_ParamLimits

0x8d11,	// (0x0002e574) cam6_mode_pane_g1

0x8d21,	// (0x0002e584) cam6_mode_pane_g2_ParamLimits

0x8d21,	// (0x0002e584) cam6_mode_pane_g2

0x8d31,	// (0x0002e594) cam6_mode_pane_g3_ParamLimits

0x8d31,	// (0x0002e594) cam6_mode_pane_g3

0x8d41,	// (0x0002e5a4) cam6_mode_pane_g4_ParamLimits

0x8d41,	// (0x0002e5a4) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x00035330) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x00035330) cam6_mode_pane_g

0xd779,	// (0x00032fdc) bg_tb_trans_pane_cp08_ParamLimits

0xd779,	// (0x00032fdc) bg_tb_trans_pane_cp08

0xd787,	// (0x00032fea) cam6_battery_pane_ParamLimits

0xd787,	// (0x00032fea) cam6_battery_pane

0xd79d,	// (0x00033000) cam6_indi_pane_g1_ParamLimits

0xd79d,	// (0x00033000) cam6_indi_pane_g1

0xd7af,	// (0x00033012) cam6_indi_pane_g2_ParamLimits

0xd7af,	// (0x00033012) cam6_indi_pane_g2

0xd7c1,	// (0x00033024) cam6_indi_pane_g3_ParamLimits

0xd7c1,	// (0x00033024) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x00035339) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x00035339) cam6_indi_pane_g

0xd7d3,	// (0x00033036) cam6_indi_pane_t1_ParamLimits

0xd7d3,	// (0x00033036) cam6_indi_pane_t1

0x8d51,	// (0x0002e5b4) cam6_autofocus_pane_g1

0x8d59,	// (0x0002e5bc) cam6_autofocus_pane_g2

0x8d61,	// (0x0002e5c4) cam6_autofocus_pane_g3

0x8d69,	// (0x0002e5cc) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x00035340) cam6_autofocus_pane_g

0xd7f9,	// (0x0003305c) cam6_timer_pane_g1

0xd801,	// (0x00033064) cam6_timer_pane_t1

0xd80f,	// (0x00033072) cam6_zoom_cont_pane

0xd817,	// (0x0003307a) cam6_zoom_pane_g1

0xd81f,	// (0x00033082) cam6_zoom_pane_g2

0x8d71,	// (0x0002e5d4) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x00035349) cam6_zoom_pane_g

0x36aa,	// (0x00028f0d) cam6_battery_pane_g1

0x36aa,	// (0x00028f0d) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00034c21) cam6_battery_pane_g

0xd827,	// (0x0003308a) cam6_zoom_cont_pane_g1

0xd830,	// (0x00033093) cam6_zoom_cont_pane_g2

0xd839,	// (0x0003309c) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x00035350) cam6_zoom_cont_pane_g

0x8d8e,	// (0x0002e5f1) cam6_mode_pane_cp_ParamLimits

0x8d8e,	// (0x0002e5f1) cam6_mode_pane_cp

0x8da0,	// (0x0002e603) cam6_zoom_pane_cp_ParamLimits

0x8da0,	// (0x0002e603) cam6_zoom_pane_cp

0x8dac,	// (0x0002e60f) vid6_image_uncrop_cif_pane_ParamLimits

0x8dac,	// (0x0002e60f) vid6_image_uncrop_cif_pane

0x8dbc,	// (0x0002e61f) vid6_image_uncrop_nhd_pane_ParamLimits

0x8dbc,	// (0x0002e61f) vid6_image_uncrop_nhd_pane

0x8dcb,	// (0x0002e62e) vid6_image_uncrop_vga_pane_ParamLimits

0x8dcb,	// (0x0002e62e) vid6_image_uncrop_vga_pane

0x8dda,	// (0x0002e63d) vid6_image_uncrop_wvga_pane_ParamLimits

0x8dda,	// (0x0002e63d) vid6_image_uncrop_wvga_pane

0x8de9,	// (0x0002e64c) vid6_indi_pane_ParamLimits

0x8de9,	// (0x0002e64c) vid6_indi_pane

0xd779,	// (0x00032fdc) bg_tb_trans_pane_cp09_ParamLimits

0xd779,	// (0x00032fdc) bg_tb_trans_pane_cp09

0xd851,	// (0x000330b4) cam6_battery_pane_cp_ParamLimits

0xd851,	// (0x000330b4) cam6_battery_pane_cp

0xd85d,	// (0x000330c0) vid6_indi_pane_g1_ParamLimits

0xd85d,	// (0x000330c0) vid6_indi_pane_g1

0xd86f,	// (0x000330d2) vid6_indi_pane_g2_ParamLimits

0xd86f,	// (0x000330d2) vid6_indi_pane_g2

0xd881,	// (0x000330e4) vid6_indi_pane_g3_ParamLimits

0xd881,	// (0x000330e4) vid6_indi_pane_g3

0xd896,	// (0x000330f9) vid6_indi_pane_g4_ParamLimits

0xd896,	// (0x000330f9) vid6_indi_pane_g4

0xd8ab,	// (0x0003310e) vid6_indi_pane_g5_ParamLimits

0xd8ab,	// (0x0003310e) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x00035357) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x00035357) vid6_indi_pane_g

0xd8c5,	// (0x00033128) vid6_indi_pane_t1_ParamLimits

0xd8c5,	// (0x00033128) vid6_indi_pane_t1

0xd8db,	// (0x0003313e) vid6_indi_pane_t2_ParamLimits

0xd8db,	// (0x0003313e) vid6_indi_pane_t2

0xd903,	// (0x00033166) vid6_indi_pane_t3_ParamLimits

0xd903,	// (0x00033166) vid6_indi_pane_t3

0xd92b,	// (0x0003318e) vid6_indi_pane_t4_ParamLimits

0xd92b,	// (0x0003318e) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x00035362) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x00035362) vid6_indi_pane_t

0xd94f,	// (0x000331b2) wait_bar_pane_cp08

0x8e01,	// (0x0002e664) main_cset_text2_pane_t1_ParamLimits

0x8e01,	// (0x0002e664) main_cset_text2_pane_t1

0x8d79,	// (0x0002e5dc) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d79,	// (0x0002e5dc) listscroll_gen_pane_cp06_t1

0xb480,	// (0x00030ce3) main_cam6_set_pane

0xce24,	// (0x00032687) bg_tb_trans_pane_cp06_ParamLimits

0xce3a,	// (0x0003269d) cam4_indicators_pane_g1_ParamLimits

0xce4b,	// (0x000326ae) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x000350da) cam4_indicators_pane_g_ParamLimits

0xce63,	// (0x000326c6) cam4_indicators_pane_t1_ParamLimits

0xb472,	// (0x00030cd5) bg_tb_trans_pane_cp07_ParamLimits

0xce8d,	// (0x000326f0) vid4_indicators_pane_g1_ParamLimits

0xcea1,	// (0x00032704) vid4_indicators_pane_g2_ParamLimits

0xceb5,	// (0x00032718) vid4_indicators_pane_g3_ParamLimits

0xcec6,	// (0x00032729) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x000350ec) vid4_indicators_pane_g_ParamLimits

0xcee2,	// (0x00032745) vid4_indicators_pane_t1_ParamLimits

0xd53c,	// (0x00032d9f) vid4_progress_pane_g1_ParamLimits

0xd54c,	// (0x00032daf) vid4_progress_pane_g2_ParamLimits

0x2336,	// (0x00027b99) vid4_progress_pane_g3_ParamLimits

0xd55c,	// (0x00032dbf) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x00035293) vid4_progress_pane_g_ParamLimits

0x2348,	// (0x00027bab) vid4_progress_pane_t1_ParamLimits

0xd574,	// (0x00032dd7) vid4_progress_pane_t2_ParamLimits

0xd589,	// (0x00032dec) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x0003529e) vid4_progress_pane_t_ParamLimits

0x235e,	// (0x00027bc1) wait_bar_pane_cp07_ParamLimits

0x8e1f,	// (0x0002e682) main_cam6_set_pane_g2_ParamLimits

0x8e1f,	// (0x0002e682) main_cam6_set_pane_g2

0x8e43,	// (0x0002e6a6) main_cset6_listscroll_pane_ParamLimits

0x8e43,	// (0x0002e6a6) main_cset6_listscroll_pane

0x8e5f,	// (0x0002e6c2) main_cset6_slider_pane_ParamLimits

0x8e5f,	// (0x0002e6c2) main_cset6_slider_pane

0x8e75,	// (0x0002e6d8) main_cset6_text2_pane_ParamLimits

0x8e75,	// (0x0002e6d8) main_cset6_text2_pane

0xd95e,	// (0x000331c1) main_cset6_text_pane

0xd966,	// (0x000331c9) main_cset_list_pane_copy1_ParamLimits

0xd966,	// (0x000331c9) main_cset_list_pane_copy1

0xd976,	// (0x000331d9) scroll_pane_cp028_copy1

0x8e83,	// (0x0002e6e6) cset_list_set_pane_copy1

0x8e95,	// (0x0002e6f8) aid_position_infowindow_above_copy1

0x8e9d,	// (0x0002e700) aid_position_infowindow_below_copy1

0xd97f,	// (0x000331e2) cset_list_set_pane_g1_copy1

0xd987,	// (0x000331ea) cset_list_set_pane_g3_copy1_ParamLimits

0xd987,	// (0x000331ea) cset_list_set_pane_g3_copy1

0xd996,	// (0x000331f9) cset_list_set_pane_t1_copy1_ParamLimits

0xd996,	// (0x000331f9) cset_list_set_pane_t1_copy1

0x2b9e,	// (0x00028401) list_highlight_pane_cp021_copy1_ParamLimits

0x2b9e,	// (0x00028401) list_highlight_pane_cp021_copy1

0xd9ab,	// (0x0003320e) cset6_slider_pane_ParamLimits

0xd9ab,	// (0x0003320e) cset6_slider_pane

0xd9d7,	// (0x0003323a) main_cset6_slider_pane_g1_ParamLimits

0xd9d7,	// (0x0003323a) main_cset6_slider_pane_g1

0x8ea5,	// (0x0002e708) main_cset6_slider_pane_g2_ParamLimits

0x8ea5,	// (0x0002e708) main_cset6_slider_pane_g2

0xd9ff,	// (0x00033262) main_cset6_slider_pane_g3_ParamLimits

0xd9ff,	// (0x00033262) main_cset6_slider_pane_g3

0x8ecd,	// (0x0002e730) main_cset6_slider_pane_g4_ParamLimits

0x8ecd,	// (0x0002e730) main_cset6_slider_pane_g4

0xda0b,	// (0x0003326e) main_cset6_slider_pane_g5_ParamLimits

0xda0b,	// (0x0003326e) main_cset6_slider_pane_g5

0xd086,	// (0x000328e9) main_cset6_slider_pane_g7_ParamLimits

0xd086,	// (0x000328e9) main_cset6_slider_pane_g7

0xd092,	// (0x000328f5) main_cset6_slider_pane_g8_ParamLimits

0xd092,	// (0x000328f5) main_cset6_slider_pane_g8

0x80cf,	// (0x0002d932) main_cset6_slider_pane_g9_ParamLimits

0x80cf,	// (0x0002d932) main_cset6_slider_pane_g9

0x80db,	// (0x0002d93e) main_cset6_slider_pane_g10_ParamLimits

0x80db,	// (0x0002d93e) main_cset6_slider_pane_g10

0x80e7,	// (0x0002d94a) main_cset6_slider_pane_g11_ParamLimits

0x80e7,	// (0x0002d94a) main_cset6_slider_pane_g11

0x80f3,	// (0x0002d956) main_cset6_slider_pane_g12_ParamLimits

0x80f3,	// (0x0002d956) main_cset6_slider_pane_g12

0x80ff,	// (0x0002d962) main_cset6_slider_pane_g13_ParamLimits

0x80ff,	// (0x0002d962) main_cset6_slider_pane_g13

0x810b,	// (0x0002d96e) main_cset6_slider_pane_g14_ParamLimits

0x810b,	// (0x0002d96e) main_cset6_slider_pane_g14

0x8ed9,	// (0x0002e73c) main_cset6_slider_pane_g15_ParamLimits

0x8ed9,	// (0x0002e73c) main_cset6_slider_pane_g15

0xd09e,	// (0x00032901) main_cset6_slider_pane_g16_ParamLimits

0xd09e,	// (0x00032901) main_cset6_slider_pane_g16

0xd0aa,	// (0x0003290d) main_cset6_slider_pane_g17_ParamLimits

0xd0aa,	// (0x0003290d) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x0003536b) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x0003536b) main_cset6_slider_pane_g

0xda17,	// (0x0003327a) main_cset6_slider_pane_t1_ParamLimits

0xda17,	// (0x0003327a) main_cset6_slider_pane_t1

0x8f09,	// (0x0002e76c) main_cset6_slider_pane_t2_ParamLimits

0x8f09,	// (0x0002e76c) main_cset6_slider_pane_t2

0x8f34,	// (0x0002e797) main_cset6_slider_pane_t3_ParamLimits

0x8f34,	// (0x0002e797) main_cset6_slider_pane_t3

0x8f5f,	// (0x0002e7c2) main_cset6_slider_pane_t4_ParamLimits

0x8f5f,	// (0x0002e7c2) main_cset6_slider_pane_t4

0x8f8a,	// (0x0002e7ed) main_cset6_slider_pane_t5_ParamLimits

0x8f8a,	// (0x0002e7ed) main_cset6_slider_pane_t5

0xda58,	// (0x000332bb) main_cset6_slider_pane_t7_ParamLimits

0xda58,	// (0x000332bb) main_cset6_slider_pane_t7

0x8fb5,	// (0x0002e818) main_cset6_slider_pane_t8_ParamLimits

0x8fb5,	// (0x0002e818) main_cset6_slider_pane_t8

0x8fd9,	// (0x0002e83c) main_cset6_slider_pane_t9_ParamLimits

0x8fd9,	// (0x0002e83c) main_cset6_slider_pane_t9

0x8ffd,	// (0x0002e860) main_cset6_slider_pane_t10_ParamLimits

0x8ffd,	// (0x0002e860) main_cset6_slider_pane_t10

0x9021,	// (0x0002e884) main_cset6_slider_pane_t11_ParamLimits

0x9021,	// (0x0002e884) main_cset6_slider_pane_t11

0xda8e,	// (0x000332f1) main_cset6_slider_pane_t14_ParamLimits

0xda8e,	// (0x000332f1) main_cset6_slider_pane_t14

0xdac7,	// (0x0003332a) main_cset6_slider_pane_t15_ParamLimits

0xdac7,	// (0x0003332a) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x00035390) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x00035390) main_cset6_slider_pane_t

0xc981,	// (0x000321e4) cset_slider_pane_g1_copy1

0xdb00,	// (0x00033363) cset_slider_pane_g2_copy1

0xdb09,	// (0x0003336c) cset_slider_pane_g3_copy1

0x2466,	// (0x00027cc9) bg_popup_sub_pane_cp011_copy1

0xdb1b,	// (0x0003337e) main_cset_text_pane_g1_copy1

0xd263,	// (0x00032ac6) main_cset_text_pane_t1_copy1

0xd271,	// (0x00032ad4) main_cset_text_pane_t2_copy1

0xd27f,	// (0x00032ae2) main_cset_text_pane_t3_copy1

0xd28d,	// (0x00032af0) main_cset_text_pane_t4_copy1

0xd29b,	// (0x00032afe) main_cset_text_pane_t5_copy1

0xdb23,	// (0x00033386) main_cset_text_pane_t6_copy1

0xdb31,	// (0x00033394) main_cset_text_pane_t7_copy1

0x8e01,	// (0x0002e664) main_cset_text2_pane_t1_copy1

0xb472,	// (0x00030cd5) main_ncimui_pane

0x16fa,	// (0x00026f5d) popup_query_ncimui_window_ParamLimits

0x16fa,	// (0x00026f5d) popup_query_ncimui_window

0xc511,	// (0x00031d74) field_cale_ev2_pane_g4_ParamLimits

0xc511,	// (0x00031d74) field_cale_ev2_pane_g4

0x7b1c,	// (0x0002d37f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7b1c,	// (0x0002d37f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x00035074) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x00035074) cell_video_dialer_keypad_pane_g

0x7b34,	// (0x0002d397) cell_video_dialer_keypad_pane_t1

0x2466,	// (0x00027cc9) bg_popup_window_pane_cp012

0xbc5b,	// (0x000314be) heading_pane_cp06

0xdb5d,	// (0x000333c0) ncim_query_content_pane

0x2466,	// (0x00027cc9) bg_popup_heading_pane_cp01

0xdb65,	// (0x000333c8) ncim_heading_pane_t1

0xdb73,	// (0x000333d6) ncim_indicator_popup_pane

0xdb85,	// (0x000333e8) ncim_query_button_pane

0xdb99,	// (0x000333fc) ncim_query_content_pane_t1

0xdbab,	// (0x0003340e) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x000353d4) ncim_query_content_pane_t

0xdbe5,	// (0x00033448) ncim_query_list_pane

0xdbf7,	// (0x0003345a) ncim_query_popup_pane

0xdb73,	// (0x000333d6) ncim_indicator_popup_pane_ParamLimits

0x918b,	// (0x0002e9ee) ncim_query_content_pane_g1_ParamLimits

0x918b,	// (0x0002e9ee) ncim_query_content_pane_g1

0xdb99,	// (0x000333fc) ncim_query_content_pane_t1_ParamLimits

0xdbab,	// (0x0003340e) ncim_query_content_pane_t2_ParamLimits

0x9197,	// (0x0002e9fa) ncim_query_content_pane_t3_ParamLimits

0x9197,	// (0x0002e9fa) ncim_query_content_pane_t3

0x91bf,	// (0x0002ea22) ncim_query_content_pane_t4_ParamLimits

0x91bf,	// (0x0002ea22) ncim_query_content_pane_t4

0x91e7,	// (0x0002ea4a) ncim_query_content_pane_t5_ParamLimits

0x91e7,	// (0x0002ea4a) ncim_query_content_pane_t5

0xdbbd,	// (0x00033420) ncim_query_content_pane_t6_ParamLimits

0xdbbd,	// (0x00033420) ncim_query_content_pane_t6

0xfb71,	// (0x000353d4) ncim_query_content_pane_t_ParamLimits

0xdbe5,	// (0x00033448) ncim_query_list_pane_ParamLimits

0xdbf7,	// (0x0003345a) ncim_query_popup_pane_ParamLimits

0xdc0b,	// (0x0003346e) wait_bar_pane_cp04

0x2466,	// (0x00027cc9) input_focus_pane_cp011

0xdc13,	// (0x00033476) ncim_query_popup_pane_t1

0xdc21,	// (0x00033484) ncim_list_query_list_pane_ParamLimits

0xdc21,	// (0x00033484) ncim_list_query_list_pane

0x2466,	// (0x00027cc9) bg_button_pane_cp027

0xdc2e,	// (0x00033491) ncim_query_button_pane_g1

0x2466,	// (0x00027cc9) list_highlight_pane_cp012

0xdc38,	// (0x0003349b) ncim_list_query_list_pane_g1

0xdc40,	// (0x000334a3) ncim_list_query_list_pane_t1

0xce57,	// (0x000326ba) cam4_indicators_pane_g3_ParamLimits

0xce57,	// (0x000326ba) cam4_indicators_pane_g3

0xced2,	// (0x00032735) vid4_indicators_pane_g5_ParamLimits

0xced2,	// (0x00032735) vid4_indicators_pane_g5

0xd568,	// (0x00032dcb) vid4_progress_pane_g5_ParamLimits

0xd568,	// (0x00032dcb) vid4_progress_pane_g5

0x9076,	// (0x0002e8d9) main_ncimui_pane_g1

0x90df,	// (0x0002e942) ncimui_group_query_pane_ParamLimits

0x90df,	// (0x0002e942) ncimui_group_query_pane

0x9127,	// (0x0002e98a) ncimui_list_pane_ParamLimits

0x9127,	// (0x0002e98a) ncimui_list_pane

0x914e,	// (0x0002e9b1) ncimui_text_pane_ParamLimits

0x914e,	// (0x0002e9b1) ncimui_text_pane

0x920f,	// (0x0002ea72) ncimui_text_pane_t1_ParamLimits

0x920f,	// (0x0002ea72) ncimui_text_pane_t1

0xdc4e,	// (0x000334b1) ncimui_list_single_graphic_pane_ParamLimits

0xdc4e,	// (0x000334b1) ncimui_list_single_graphic_pane

0x922d,	// (0x0002ea90) ncimui_query_pane_ParamLimits

0x922d,	// (0x0002ea90) ncimui_query_pane

0x2466,	// (0x00027cc9) list_highlight_pane_cp013

0xdc5e,	// (0x000334c1) ncim_list_query_list_pane_t1_copy1

0xdc6c,	// (0x000334cf) ncim_list_single_graphic_pane_g1

0x9240,	// (0x0002eaa3) ncim_query_button_pane_cp01

0x924c,	// (0x0002eaaf) ncim_query_entry_pane_ParamLimits

0x924c,	// (0x0002eaaf) ncim_query_entry_pane

0x925f,	// (0x0002eac2) ncimui_query_pane_g1

0x926b,	// (0x0002eace) ncimui_query_pane_t1_ParamLimits

0x926b,	// (0x0002eace) ncimui_query_pane_t1

0x2b9e,	// (0x00028401) input_focus_pane_cp012

0xdc74,	// (0x000334d7) ncim_query_entry_pane_t1

0x2d61,	// (0x000285c4) main_im_pane_ParamLimits

0xb472,	// (0x00030cd5) main_mobtv_pane_ParamLimits

0xb472,	// (0x00030cd5) main_mobtv_pane

0x8ef1,	// (0x0002e754) main_cset6_slider_pane_g18_ParamLimits

0x8ef1,	// (0x0002e754) main_cset6_slider_pane_g18

0x8efd,	// (0x0002e760) main_cset6_slider_pane_g19_ParamLimits

0x8efd,	// (0x0002e760) main_cset6_slider_pane_g19

0x2c21,	// (0x00028484) bg_main_mobtv_pane_ParamLimits

0x2c21,	// (0x00028484) bg_main_mobtv_pane

0x9284,	// (0x0002eae7) main_mobtv_info_pane

0x928d,	// (0x0002eaf0) main_mobtv_loading_pane_ParamLimits

0x928d,	// (0x0002eaf0) main_mobtv_loading_pane

0xdc86,	// (0x000334e9) main_mobtv_pg_channel_list_pane

0xdc90,	// (0x000334f3) main_mobtv_pg_hdr_pane

0x929a,	// (0x0002eafd) main_mobtv_programe_curr_pane_ParamLimits

0x929a,	// (0x0002eafd) main_mobtv_programe_curr_pane

0x92a7,	// (0x0002eb0a) main_mobtv_programe_next_pane_ParamLimits

0x92a7,	// (0x0002eb0a) main_mobtv_programe_next_pane

0xdc99,	// (0x000334fc) popup_mobtv_noti_window

0x36aa,	// (0x00028f0d) main_tv_pg_hdr_pane_g1

0xdca1,	// (0x00033504) main_tv_pg_hdr_pane_g2

0xdca9,	// (0x0003350c) main_tv_pg_hdr_pane_g3

0xdcb1,	// (0x00033514) main_tv_pg_hdr_pane_g4

0xdcb9,	// (0x0003351c) main_tv_pg_hdr_pane_g5

0xdcc3,	// (0x00033526) main_tv_pg_hdr_pane_g6

0xdccd,	// (0x00033530) main_tv_pg_hdr_pane_g7

0xdcd7,	// (0x0003353a) main_tv_pg_hdr_pane_g8

0xdce1,	// (0x00033544) main_tv_pg_hdr_pane_g9

0xdceb,	// (0x0003354e) main_tv_pg_hdr_pane_g10

0xdcf5,	// (0x00033558) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x000353e1) main_tv_pg_hdr_pane_g

0xdcff,	// (0x00033562) main_tv_pg_hdr_pane_t1

0xdd0d,	// (0x00033570) main_tv_pg_hdr_pane_t2

0xdd1b,	// (0x0003357e) main_tv_pg_hdr_pane_t3

0xdd2b,	// (0x0003358e) main_tv_pg_hdr_pane_t4

0xdd3b,	// (0x0003359e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x000353f8) main_tv_pg_hdr_pane_t

0xdd4b,	// (0x000335ae) single_mobtv_pg_channel_pane_ParamLimits

0xdd4b,	// (0x000335ae) single_mobtv_pg_channel_pane

0xdd5d,	// (0x000335c0) single_mobtv_pg_channel_table_pane

0x4784,	// (0x00029fe7) single_mobtv_pg_channel_thumb_pane

0xdd66,	// (0x000335c9) single_tv_pg_channel_pane_g1

0xdd6f,	// (0x000335d2) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x00035403) single_tv_pg_channel_pane_g

0x2c05,	// (0x00028468) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2c05,	// (0x00028468) bg_single_mobtv_pg_channel_thumb_pane

0xdd78,	// (0x000335db) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdd78,	// (0x000335db) single_mobtv_pg_channel_thumb_pane_g1

0xdd86,	// (0x000335e9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdd86,	// (0x000335e9) single_mobtv_pg_channel_thumb_pane_g2

0xdd92,	// (0x000335f5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdd92,	// (0x000335f5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x00035408) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x00035408) single_mobtv_pg_channel_thumb_pane_g

0xdd9e,	// (0x00033601) single_mobtv_pg_channel_thumb_pane_t1

0xddac,	// (0x0003360f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x0003540f) single_mobtv_pg_channel_thumb_pane_t

0x36aa,	// (0x00028f0d) bg_single_mobtv_pg_channel_table_pane_g1

0x36aa,	// (0x00028f0d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00034c21) bg_single_mobtv_pg_channel_table_pane_g

0xddba,	// (0x0003361d) single_mobtv_pg_channel_table_pane_t1

0xddc8,	// (0x0003362b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x00035414) single_mobtv_pg_channel_table_pane_t

0x92bc,	// (0x0002eb1f) main_mobtv_info_pane_g1_ParamLimits

0x92bc,	// (0x0002eb1f) main_mobtv_info_pane_g1

0x92da,	// (0x0002eb3d) main_mobtv_info_pane_t1_ParamLimits

0x92da,	// (0x0002eb3d) main_mobtv_info_pane_t1

0x9352,	// (0x0002ebb5) main_mobtv_info_pane_t2_ParamLimits

0x9352,	// (0x0002ebb5) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x0003541e) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x0003541e) main_mobtv_info_pane_t

0x93e1,	// (0x0002ec44) wait_bar_pane_cp05

0x93f3,	// (0x0002ec56) main_mobtv_loading_pane_g1_ParamLimits

0x93f3,	// (0x0002ec56) main_mobtv_loading_pane_g1

0x9406,	// (0x0002ec69) main_mobtv_loading_pane_g2_ParamLimits

0x9406,	// (0x0002ec69) main_mobtv_loading_pane_g2

0x9412,	// (0x0002ec75) main_mobtv_loading_pane_g3_ParamLimits

0x9412,	// (0x0002ec75) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x00035425) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x00035425) main_mobtv_loading_pane_g

0xddd6,	// (0x00033639) main_mobtv_loading_pane_t1_ParamLimits

0xddd6,	// (0x00033639) main_mobtv_loading_pane_t1

0xddee,	// (0x00033651) main_mobtv_loading_pane_t2_ParamLimits

0xddee,	// (0x00033651) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x0003542c) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x0003542c) main_mobtv_loading_pane_t

0x9425,	// (0x0002ec88) wait_bar_pane_cp06_ParamLimits

0x9425,	// (0x0002ec88) wait_bar_pane_cp06

0xde12,	// (0x00033675) main_mobtv_programe_curr_pane_t1

0xde20,	// (0x00033683) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x00035431) main_mobtv_programe_curr_pane_t

0xde2e,	// (0x00033691) main_mobtv_programe_next_pane_t1

0xde3c,	// (0x0003369f) main_mobtv_programe_next_pane_t2

0xde4a,	// (0x000336ad) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x00035436) main_mobtv_programe_next_pane_t

0x2466,	// (0x00027cc9) bg_popup_mobtv_noti_window_pane

0xde58,	// (0x000336bb) popup_mobtv_noti_window_g1

0xde60,	// (0x000336c3) popup_mobtv_noti_window_t1

0xde6e,	// (0x000336d1) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x0003543d) popup_mobtv_noti_window_t

0x36aa,	// (0x00028f0d) bg_popup_mobtv_noti_window_pane_g1

0xb480,	// (0x00030ce3) sc_clock_pane

0xb480,	// (0x00030ce3) main_fs_bigclock_pane

0x8b86,	// (0x0002e3e9) blid2_tripm_pane_t4_ParamLimits

0x8b86,	// (0x0002e3e9) blid2_tripm_pane_t4

0x9434,	// (0x0002ec97) sc_clock_pane_g1_ParamLimits

0x9434,	// (0x0002ec97) sc_clock_pane_g1

0x9446,	// (0x0002eca9) sc_clock_pane_t1_ParamLimits

0x9446,	// (0x0002eca9) sc_clock_pane_t1

0x9468,	// (0x0002eccb) sc_clock_pane_t2_ParamLimits

0x9468,	// (0x0002eccb) sc_clock_pane_t2

0x9480,	// (0x0002ece3) sc_clock_pane_t3_ParamLimits

0x9480,	// (0x0002ece3) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x00035442) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x00035442) sc_clock_pane_t

0xa199,	// (0x0002f9fc) main_fs_bigclock_indicator_pane_ParamLimits

0xa199,	// (0x0002f9fc) main_fs_bigclock_indicator_pane

0x9526,	// (0x0002ed89) main_fs_bigclock_pane_g1_ParamLimits

0x9526,	// (0x0002ed89) main_fs_bigclock_pane_g1

0xa1a5,	// (0x0002fa08) main_fs_bigclock_pane_t1_ParamLimits

0xa1a5,	// (0x0002fa08) main_fs_bigclock_pane_t1

0xa1b7,	// (0x0002fa1a) main_fs_bigclock_pane_t2_ParamLimits

0xa1b7,	// (0x0002fa1a) main_fs_bigclock_pane_t2

0xa1cb,	// (0x0002fa2e) main_fs_bigclock_pane_t3_ParamLimits

0xa1cb,	// (0x0002fa2e) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x000355d3) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x000355d3) main_fs_bigclock_pane_t

0xe9fd,	// (0x00034260) main_fs_bigclock_indicator_pane_g1

0xdb8d,	// (0x000333f0) ncim_query_content_pane_g2_ParamLimits

0xdb8d,	// (0x000333f0) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x000353cf) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x000353cf) ncim_query_content_pane_g

0x9499,	// (0x0002ecfc) sc_clock_pane_t4_ParamLimits

0x9499,	// (0x0002ecfc) sc_clock_pane_t4

0xb472,	// (0x00030cd5) main_radioblah_pane

0xcd80,	// (0x000325e3) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd80,	// (0x000325e3) cell_call4_button_pane_t1_copy1

0x908e,	// (0x0002e8f1) main_ncimui_pane_t1_ParamLimits

0x908e,	// (0x0002e8f1) main_ncimui_pane_t1

0x90a8,	// (0x0002e90b) main_ncimui_pane_t2_ParamLimits

0x90a8,	// (0x0002e90b) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x000353c8) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x000353c8) main_ncimui_pane_t

0xdfb4,	// (0x00033817) main_radioblah_anim_pane_ParamLimits

0xdfb4,	// (0x00033817) main_radioblah_anim_pane

0xdfc5,	// (0x00033828) main_radioblah_info_pane_ParamLimits

0xdfc5,	// (0x00033828) main_radioblah_info_pane

0xdfd9,	// (0x0003383c) main_radioblah_pane_t1_ParamLimits

0xdfd9,	// (0x0003383c) main_radioblah_pane_t1

0xdff5,	// (0x00033858) main_radioblah_pane_t2_ParamLimits

0xdff5,	// (0x00033858) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x00035463) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x00035463) main_radioblah_pane_t

0x9585,	// (0x0002ede8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9585,	// (0x0002ede8) main_radioblah_rocker_ctrl_pane

0xe03d,	// (0x000338a0) main_radioblah_info_pane_t1_ParamLimits

0xe03d,	// (0x000338a0) main_radioblah_info_pane_t1

0x95dd,	// (0x0002ee40) main_radioblah_info_pane_t2_ParamLimits

0x95dd,	// (0x0002ee40) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x0003546c) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x0003546c) main_radioblah_info_pane_t

0x36aa,	// (0x00028f0d) main_radioblah_rocker_ctrl_pane_g1

0x968d,	// (0x0002eef0) main_radioblah_rocker_ctrl_pane_g2

0x9695,	// (0x0002eef8) main_radioblah_rocker_ctrl_pane_g3

0x969d,	// (0x0002ef00) main_radioblah_rocker_ctrl_pane_g4

0x96a5,	// (0x0002ef08) main_radioblah_rocker_ctrl_pane_g5

0x96ad,	// (0x0002ef10) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x00035475) main_radioblah_rocker_ctrl_pane_g

0x8e01,	// (0x0002e664) main_cset_text2_pane_t1_copy1_ParamLimits

0xce0a,	// (0x0003266d) cam4_image_uncrop_qvga_pane

0xce7d,	// (0x000326e0) vid4_image_uncrop_qcif_pane

0xd76b,	// (0x00032fce) cam6_image_uncrop_qvga_pane_ParamLimits

0xd76b,	// (0x00032fce) cam6_image_uncrop_qvga_pane

0xd841,	// (0x000330a4) vid6_image_uncrop_qcif_pane_ParamLimits

0xd841,	// (0x000330a4) vid6_image_uncrop_qcif_pane

0x2466,	// (0x00027cc9) bg_popup_preview_window_pane_cp03

0xdb3f,	// (0x000333a2) list_cset_text2_pane

0xdb47,	// (0x000333aa) main_cset6_text2_pane_g1

0xdb4f,	// (0x000333b2) main_cset6_text2_pane_t1

0xe077,	// (0x000338da) list_cset_text2_pane_t1_ParamLimits

0xe077,	// (0x000338da) list_cset_text2_pane_t1

0xb472,	// (0x00030cd5) main_radioblah_pane_ParamLimits

0x93cd,	// (0x0002ec30) main_mobtv_info_pane_t3_ParamLimits

0x93cd,	// (0x0002ec30) main_mobtv_info_pane_t3

0x9573,	// (0x0002edd6) main_radioblah_pane_g1

0x95ad,	// (0x0002ee10) main_radioblah_info_pane_g1

0x9632,	// (0x0002ee95) main_radioblah_info_pane_t3_ParamLimits

0x9632,	// (0x0002ee95) main_radioblah_info_pane_t3

0x4731,	// (0x00029f94) highlight_cell_cale_month_pane_ParamLimits

0x4731,	// (0x00029f94) highlight_cell_cale_month_pane

0xb480,	// (0x00030ce3) main_phob_fisheye_pane

0xc5b2,	// (0x00031e15) scroll_pane_cp0031_ParamLimits

0xc5b2,	// (0x00031e15) scroll_pane_cp0031

0xd94f,	// (0x000331b2) wait_bar_pane_cp08_ParamLimits

0x8e83,	// (0x0002e6e6) cset_list_set_pane_copy1_ParamLimits

0xe092,	// (0x000338f5) highlight_cell_cale_month_pane_g1

0x96b5,	// (0x0002ef18) highlight_cell_cale_month_pane_t1

0xd52b,	// (0x00032d8e) list_gen_pane_cp01

0xd071,	// (0x000328d4) scroll_pane_01

0x96c3,	// (0x0002ef26) list_single_double_fisheye_pane

0x96cc,	// (0x0002ef2f) list_double_fisheye_pane_g1_ParamLimits

0x96cc,	// (0x0002ef2f) list_double_fisheye_pane_g1

0x96d8,	// (0x0002ef3b) list_double_fisheye_pane_g2_ParamLimits

0x96d8,	// (0x0002ef3b) list_double_fisheye_pane_g2

0x96ec,	// (0x0002ef4f) list_double_fisheye_pane_g3_ParamLimits

0x96ec,	// (0x0002ef4f) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x00035482) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x00035482) list_double_fisheye_pane_g

0x9715,	// (0x0002ef78) list_double_fisheye_pane_t1_ParamLimits

0x9715,	// (0x0002ef78) list_double_fisheye_pane_t1

0x9730,	// (0x0002ef93) list_double_fisheye_pane_t2_ParamLimits

0x9730,	// (0x0002ef93) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0003548d) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0003548d) list_double_fisheye_pane_t

0xb480,	// (0x00030ce3) main_call5_pane

0x94c4,	// (0x0002ed27) sc_swipe_pane_ParamLimits

0x94c4,	// (0x0002ed27) sc_swipe_pane

0x9765,	// (0x0002efc8) call5_image_pane_ParamLimits

0x9765,	// (0x0002efc8) call5_image_pane

0x9782,	// (0x0002efe5) call5_swipe_1_pane_ParamLimits

0x9782,	// (0x0002efe5) call5_swipe_1_pane

0x9795,	// (0x0002eff8) call5_swipe_2_pane_ParamLimits

0x9795,	// (0x0002eff8) call5_swipe_2_pane

0x97c0,	// (0x0002f023) popup_call5_audio_first_window_ParamLimits

0x97c0,	// (0x0002f023) popup_call5_audio_first_window

0x2c05,	// (0x00028468) call5_swipe_1_pane_g1_ParamLimits

0x2c05,	// (0x00028468) call5_swipe_1_pane_g1

0xe09a,	// (0x000338fd) call5_swipe_1_pane_g2_ParamLimits

0xe09a,	// (0x000338fd) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x00035492) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x00035492) call5_swipe_1_pane_g

0xe0a6,	// (0x00033909) call5_swipe_1_pane_t1_ParamLimits

0xe0a6,	// (0x00033909) call5_swipe_1_pane_t1

0x2c05,	// (0x00028468) call5_swipe_2_pane_g1_ParamLimits

0x2c05,	// (0x00028468) call5_swipe_2_pane_g1

0xe0bb,	// (0x0003391e) call5_swipe_2_pane_g2_ParamLimits

0xe0bb,	// (0x0003391e) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x00035497) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x00035497) call5_swipe_2_pane_g

0xe0c7,	// (0x0003392a) call5_swipe_2_pane_t1_ParamLimits

0xe0c7,	// (0x0003392a) call5_swipe_2_pane_t1

0xe0dc,	// (0x0003393f) sc_swipe_pane_g1_ParamLimits

0xe0dc,	// (0x0003393f) sc_swipe_pane_g1

0xe0e9,	// (0x0003394c) sc_swipe_pane_g2_ParamLimits

0xe0e9,	// (0x0003394c) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x0003549c) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x0003549c) sc_swipe_pane_g

0xe0f5,	// (0x00033958) sc_swipe_pane_t1_ParamLimits

0xe0f5,	// (0x00033958) sc_swipe_pane_t1

0xb480,	// (0x00030ce3) main_cmail_launcher_pane

0x97d1,	// (0x0002f034) aid_size_cell_cmail_l_ParamLimits

0x97d1,	// (0x0002f034) aid_size_cell_cmail_l

0x97df,	// (0x0002f042) grid_cmail_l_pane_ParamLimits

0x97df,	// (0x0002f042) grid_cmail_l_pane

0x97f9,	// (0x0002f05c) cell_cmail_l_pane_ParamLimits

0x97f9,	// (0x0002f05c) cell_cmail_l_pane

0xe10a,	// (0x0003396d) cell_cmail_l_pane_g1_ParamLimits

0xe10a,	// (0x0003396d) cell_cmail_l_pane_g1

0xe116,	// (0x00033979) cell_cmail_l_pane_t1_ParamLimits

0xe116,	// (0x00033979) cell_cmail_l_pane_t1

0xe12c,	// (0x0003398f) cell_cmail_l_pane_t2_ParamLimits

0xe12c,	// (0x0003398f) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x000354a1) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x000354a1) cell_cmail_l_pane_t

0x2b9e,	// (0x00028401) grid_highlight_pane_cp018_ParamLimits

0x2b9e,	// (0x00028401) grid_highlight_pane_cp018

0x1062,	// (0x000268c5) main2_pane_ParamLimits

0x1062,	// (0x000268c5) main2_pane

0x2ecc,	// (0x0002872f) popup_sp_fs_action_menu_bg_pane_g1

0x2ed4,	// (0x00028737) popup_sp_fs_action_menu_bg_pane_g2

0x2edc,	// (0x0002873f) popup_sp_fs_action_menu_bg_pane_g3

0x2ee4,	// (0x00028747) popup_sp_fs_action_menu_bg_pane_g4

0x2eec,	// (0x0002874f) popup_sp_fs_action_menu_bg_pane_g5

0x2ef4,	// (0x00028757) popup_sp_fs_action_menu_bg_pane_g6

0x2efc,	// (0x0002875f) popup_sp_fs_action_menu_bg_pane_g7

0x2f04,	// (0x00028767) popup_sp_fs_action_menu_bg_pane_g8

0x2f0c,	// (0x0002876f) popup_sp_fs_action_menu_bg_pane_g9

0x2f14,	// (0x00028777) popup_sp_fs_action_menu_bg_pane_g10

0x2f14,	// (0x00028777) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0003498e) popup_sp_fs_action_menu_bg_pane_g

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g2

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00034a3c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00034a3c) list_medium_line_x2_t3_g3_g

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t2

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g3_t

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g2_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t3_g2_g

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t2

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g2_t

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g2

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g3

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t4_g4_g

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t2

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t3

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034a58) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034a58) list_medium_line_x2_t4_g4_t

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g2

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g3

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t2_g4_g

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g4_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g4_t

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g2

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00034a3c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00034a3c) list_medium_line_x2_t2_g3_g

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g3_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g3_t

0x4aa1,	// (0x0002a304) main_sp_fs_list_pane_ParamLimits

0x4aa1,	// (0x0002a304) main_sp_fs_list_pane

0xb559,	// (0x00030dbc) sp_fs_scroll_pane_ParamLimits

0xb559,	// (0x00030dbc) sp_fs_scroll_pane

0x4aad,	// (0x0002a310) list_medium_line_x2_t3_t1

0x4aad,	// (0x0002a310) list_medium_line_x2_t3_t2

0x4aad,	// (0x0002a310) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00034b05) list_medium_line_x2_t3_t

0x4aad,	// (0x0002a310) list_medium_line_x3_t4_t1

0x4aad,	// (0x0002a310) list_medium_line_x3_t4_t2

0x4aad,	// (0x0002a310) list_medium_line_x3_t4_t3

0x4aad,	// (0x0002a310) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00034b0c) list_medium_line_x3_t4_t

0x4aad,	// (0x0002a310) list_medium_line_x4_t5_t1

0x4aad,	// (0x0002a310) list_medium_line_x4_t5_t2

0x4aad,	// (0x0002a310) list_medium_line_x4_t5_t3

0x4aad,	// (0x0002a310) list_medium_line_x4_t5_t4

0x4aad,	// (0x0002a310) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00034b15) list_medium_line_x4_t5_t

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g1

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g2

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g3

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034a4f) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034a4f) list_medium_line_t4_g4_g

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t1

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t2

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t3

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t4_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034a58) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034a58) list_medium_line_t4_g4_t

0x4dc0,	// (0x0002a623) chi_dic_find_pane_g1

0x14ca,	// (0x00026d2d) main_tport_pane

0x4aad,	// (0x0002a310) list_medium_line_plain_t1

0x2c05,	// (0x00028468) list_medium_line_t2_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g2_g1

0x2c05,	// (0x00028468) list_medium_line_t2_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_t2_g2_g

0x3526,	// (0x00028d89) list_medium_line_t2_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_g2_t1

0x3526,	// (0x00028d89) list_medium_line_t2_g2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_t2_g2_t

0xd59f,	// (0x00032e02) aid_sp_fs_list_icon_a_sm

0xd5a7,	// (0x00032e0a) aid_sp_fs_list_icon_d

0xd5af,	// (0x00032e12) aid_sp_fs_text_primary

0xd5b8,	// (0x00032e1b) aid_sp_fs_text_secondary

0x2466,	// (0x00027cc9) list_medium_line

0x2466,	// (0x00027cc9) list_medium_line_g2

0x2466,	// (0x00027cc9) list_medium_line_g3

0x2466,	// (0x00027cc9) list_medium_line_plain

0x2466,	// (0x00027cc9) list_medium_line_plain_t2

0x2466,	// (0x00027cc9) list_medium_line_plain_t3

0x2466,	// (0x00027cc9) list_medium_line_right_icon

0x2466,	// (0x00027cc9) list_medium_line_right_iconx2

0x2466,	// (0x00027cc9) list_medium_line_t2

0x2466,	// (0x00027cc9) list_medium_line_t2_g2

0x2466,	// (0x00027cc9) list_medium_line_t2_g3

0x2466,	// (0x00027cc9) list_medium_line_t2_right_icon

0x2466,	// (0x00027cc9) list_medium_line_t2_right_iconx2

0x2466,	// (0x00027cc9) list_medium_line_t3

0x2466,	// (0x00027cc9) list_medium_line_t3_g2

0x2466,	// (0x00027cc9) list_medium_line_t3_g3

0x2466,	// (0x00027cc9) list_medium_line_t3_right_iconx2

0x2466,	// (0x00027cc9) list_medium_line_t4_g4

0x2466,	// (0x00027cc9) list_medium_line_x2

0x2466,	// (0x00027cc9) list_medium_line_x2_t2_g2

0x2466,	// (0x00027cc9) list_medium_line_x2_t2_g3

0x2466,	// (0x00027cc9) list_medium_line_x2_t2_g4

0x2466,	// (0x00027cc9) list_medium_line_x2_t3

0x2466,	// (0x00027cc9) list_medium_line_x2_t3_g2

0x2466,	// (0x00027cc9) list_medium_line_x2_t3_g3

0x2466,	// (0x00027cc9) list_medium_line_x2_t3_g4

0x2466,	// (0x00027cc9) list_medium_line_x2_t4_g2

0x2466,	// (0x00027cc9) list_medium_line_x2_t4_g4

0x2466,	// (0x00027cc9) list_medium_line_x3

0x2466,	// (0x00027cc9) list_medium_line_x3_t4

0x2466,	// (0x00027cc9) list_medium_line_x3_t4_g4

0x2466,	// (0x00027cc9) list_medium_line_x4_t4

0x2466,	// (0x00027cc9) list_medium_line_x4_t4_g7

0x2466,	// (0x00027cc9) list_medium_line_x4_t5

0x8976,	// (0x0002e1d9) list_single_fs_dyc_pane_ParamLimits

0x8976,	// (0x0002e1d9) list_single_fs_dyc_pane

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g1

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g2

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g3

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g4

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g5

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x4_t4_g7_g6

0x2c13,	// (0x00028476) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2c13,	// (0x00028476) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x000353a9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x000353a9) list_medium_line_x4_t4_g7_g

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t1

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t2

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x4_t4_g7_t3

0x532b,	// (0x0002ab8e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x532b,	// (0x0002ab8e) list_medium_line_x4_t4_g7_t4

0x532b,	// (0x0002ab8e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x532b,	// (0x0002ab8e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x000353b8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x000353b8) list_medium_line_x4_t4_g7_t

0x9045,	// (0x0002e8a8) list_single_dyc_row_pane_ParamLimits

0x9045,	// (0x0002e8a8) list_single_dyc_row_pane

0x9752,	// (0x0002efb5) call5_gesture_pane_ParamLimits

0x9752,	// (0x0002efb5) call5_gesture_pane

0x97a8,	// (0x0002f00b) call5_windows_pane_ParamLimits

0x97a8,	// (0x0002f00b) call5_windows_pane

0x9813,	// (0x0002f076) call5_swipe_1_pane_cp_ParamLimits

0x9813,	// (0x0002f076) call5_swipe_1_pane_cp

0x981f,	// (0x0002f082) call5_swipe_2_pane_cp_ParamLimits

0x981f,	// (0x0002f082) call5_swipe_2_pane_cp

0x34bd,	// (0x00028d20) call5_image_pane_cp

0x982b,	// (0x0002f08e) popup_call5_audio_first_window_cp_ParamLimits

0x982b,	// (0x0002f08e) popup_call5_audio_first_window_cp

0xe0dc,	// (0x0003393f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe0dc,	// (0x0003393f) call5_swipe_1_pane_g1_cp

0xe149,	// (0x000339ac) call5_swipe_1_pane_g2_cp

0xe0f5,	// (0x00033958) call5_swipe_1_pane_t1_cp_ParamLimits

0xe0f5,	// (0x00033958) call5_swipe_1_pane_t1_cp

0xe0dc,	// (0x0003393f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe0dc,	// (0x0003393f) call5_swipe_2_pane_g1_cp

0xe151,	// (0x000339b4) call5_swipe_2_pane_g2_cp

0xe159,	// (0x000339bc) call5_swipe_2_pane_t1_cp_ParamLimits

0xe159,	// (0x000339bc) call5_swipe_2_pane_t1_cp

0x2b9e,	// (0x00028401) main_sp_fs_email_pane

0xe16e,	// (0x000339d1) main_sp_fs_listscroll_pane_te

0x9839,	// (0x0002f09c) popup_sp_fs_action_menu_pane_ParamLimits

0x9839,	// (0x0002f09c) popup_sp_fs_action_menu_pane

0x36aa,	// (0x00028f0d) bg_sp_fs_ctrlbar_pane_g1

0xe177,	// (0x000339da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe180,	// (0x000339e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbcd4,	// (0x00031537) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x36aa,	// (0x00028f0d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x000354a6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc019,	// (0x0003187c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc019,	// (0x0003187c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe189,	// (0x000339ec) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe189,	// (0x000339ec) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe195,	// (0x000339f8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe195,	// (0x000339f8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x000354af) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x000354af) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1a1,	// (0x00033a04) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1a1,	// (0x00033a04) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x36aa,	// (0x00028f0d) list_medium_line_t2_right_icon_g1

0x4aad,	// (0x0002a310) list_medium_line_t2_right_icon_t1

0x4aad,	// (0x0002a310) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x000354b4) list_medium_line_t2_right_icon_t

0x533f,	// (0x0002aba2) bg_sp_fs_ctrlbar_pane_ParamLimits

0x533f,	// (0x0002aba2) bg_sp_fs_ctrlbar_pane

0x98c3,	// (0x0002f126) main_sp_fs_ctrlbar_button_pane_cp01

0x98cd,	// (0x0002f130) main_sp_fs_ctrlbar_ddmenu_pane

0xe1f3,	// (0x00033a56) main_sp_fs_ctrlbar_pane_g1

0xe1ff,	// (0x00033a62) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x000354b9) main_sp_fs_ctrlbar_pane_g

0x990b,	// (0x0002f16e) main_sp_fs_ctrlbar_pane_t1

0x994a,	// (0x0002f1ad) main_sp_fs_ctrlbar_pane

0x996e,	// (0x0002f1d1) main_sp_fs_listscroll_pane_te_cp01

0x998e,	// (0x0002f1f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x998e,	// (0x0002f1f1) popup_sp_fs_action_menu_pane_cp01

0x2b9e,	// (0x00028401) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2b9e,	// (0x00028401) bg_sp_fs_highlight_list_pane_cp01

0xe226,	// (0x00033a89) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe226,	// (0x00033a89) sp_fs_action_menu_list_gene_pane_g1

0xe235,	// (0x00033a98) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe235,	// (0x00033a98) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x000354c7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x000354c7) sp_fs_action_menu_list_gene_pane_g

0xe242,	// (0x00033aa5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe242,	// (0x00033aa5) sp_fs_action_menu_list_gene_pane_t1

0xe25a,	// (0x00033abd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe25a,	// (0x00033abd) sp_fs_action_menu_list_gene_pane

0xe279,	// (0x00033adc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe279,	// (0x00033adc) popup_sp_fs_action_menu_bg_pane

0xe287,	// (0x00033aea) sp_fs_action_menu_list_pane_ParamLimits

0xe287,	// (0x00033aea) sp_fs_action_menu_list_pane

0x99b3,	// (0x0002f216) sp_fs_scroll_pane_cp01_ParamLimits

0x99b3,	// (0x0002f216) sp_fs_scroll_pane_cp01

0x4aad,	// (0x0002a310) list_medium_line_plain_t2_t1

0x4aad,	// (0x0002a310) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x000354b4) list_medium_line_plain_t2_t

0x4aad,	// (0x0002a310) list_medium_line_plain_t3_t1

0x4aad,	// (0x0002a310) list_medium_line_plain_t3_t2

0x4aad,	// (0x0002a310) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00034b05) list_medium_line_plain_t3_t

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g2_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t2_g2_g

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g2_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_x2_t2_g2_t

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g2_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_x2_t4_g2_g

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t2

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t3

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00034a58) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00034a58) list_medium_line_x2_t4_g2_t

0x36aa,	// (0x00028f0d) list_medium_line_t3_right_iconx2_g1

0x36aa,	// (0x00028f0d) list_medium_line_t3_right_iconx2_g2

0x36aa,	// (0x00028f0d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00034c26) list_medium_line_t3_right_iconx2_g

0x4aad,	// (0x0002a310) list_medium_line_t3_right_iconx2_t1

0x4aad,	// (0x0002a310) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x000354b4) list_medium_line_t3_right_iconx2_t

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g1

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g2

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g3

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00034a4f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00034a4f) list_medium_line_x3_t4_g4_g

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t1

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t2

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t3

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00034a58) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00034a58) list_medium_line_x3_t4_g4_t

0x99d9,	// (0x0002f23c) list_single_dyc_row_text_pane_t1_ParamLimits

0x99d9,	// (0x0002f23c) list_single_dyc_row_text_pane_t1

0x9a22,	// (0x0002f285) list_single_dyc_row_text_pane_t2_ParamLimits

0x9a22,	// (0x0002f285) list_single_dyc_row_text_pane_t2

0xe2a7,	// (0x00033b0a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe2a7,	// (0x00033b0a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x000354cc) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x000354cc) list_single_dyc_row_text_pane_t

0xe2cb,	// (0x00033b2e) list_single_dyc_row_pane_g1_ParamLimits

0xe2cb,	// (0x00033b2e) list_single_dyc_row_pane_g1

0xe2d7,	// (0x00033b3a) list_single_dyc_row_pane_g2_ParamLimits

0xe2d7,	// (0x00033b3a) list_single_dyc_row_pane_g2

0xe2e3,	// (0x00033b46) list_single_dyc_row_pane_g3_ParamLimits

0xe2e3,	// (0x00033b46) list_single_dyc_row_pane_g3

0xe2ef,	// (0x00033b52) list_single_dyc_row_pane_g4_ParamLimits

0xe2ef,	// (0x00033b52) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x000354d9) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x000354d9) list_single_dyc_row_pane_g

0xe2fb,	// (0x00033b5e) list_single_dyc_row_text_pane_ParamLimits

0xe2fb,	// (0x00033b5e) list_single_dyc_row_text_pane

0x2466,	// (0x00027cc9) bg_sp_fs_scroll_pane

0xe31a,	// (0x00033b7d) thumb_sp_fs_scroll_pane

0x2c05,	// (0x00028468) list_medium_line_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g1

0x3526,	// (0x00028d89) list_medium_line_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t1

0x2c05,	// (0x00028468) list_medium_line_x2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_g1

0x2c05,	// (0x00028468) list_medium_line_x2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_x2_g

0x3526,	// (0x00028d89) list_medium_line_x2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t1

0x2c05,	// (0x00028468) list_medium_line_x3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x3_g1

0xce24,	// (0x00032687) list_medium_line_x3_g2_ParamLimits

0xce24,	// (0x00032687) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x000354e2) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x000354e2) list_medium_line_x3_g

0xe323,	// (0x00033b86) list_medium_line_x3_t1_ParamLimits

0xe323,	// (0x00033b86) list_medium_line_x3_t1

0xe337,	// (0x00033b9a) thumb_sp_fs_scroll_pane_g1

0xe340,	// (0x00033ba3) thumb_sp_fs_scroll_pane_g2

0xe349,	// (0x00033bac) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000354e7) thumb_sp_fs_scroll_pane_g

0xe337,	// (0x00033b9a) bg_sp_fs_scroll_pane_g1

0xe340,	// (0x00033ba3) bg_sp_fs_scroll_pane_g2

0xe349,	// (0x00033bac) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000354e7) bg_sp_fs_scroll_pane_g

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g1

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g2

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g3

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00034a4f) list_medium_line_x2_t3_g4_g

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t1

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t2

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_x2_t3_g4_t

0x2c05,	// (0x00028468) list_medium_line_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g2_g1

0x2c05,	// (0x00028468) list_medium_line_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_g2_g

0x3526,	// (0x00028d89) list_medium_line_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_g2_t1

0x2c05,	// (0x00028468) list_medium_line_t3_g2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g2_g1

0x2c05,	// (0x00028468) list_medium_line_t3_g2_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00034a4a) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00034a4a) list_medium_line_t3_g2_g

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t1

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t2

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_t3_g2_t

0x36aa,	// (0x00028f0d) list_medium_line_right_icon_g1

0x4aad,	// (0x0002a310) list_medium_line_right_icon_t1

0x2c05,	// (0x00028468) list_medium_line_t2_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g1

0x3526,	// (0x00028d89) list_medium_line_t2_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_t1

0x3526,	// (0x00028d89) list_medium_line_t2_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_t2_t

0x2c05,	// (0x00028468) list_medium_line_t3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g1

0x3526,	// (0x00028d89) list_medium_line_t3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_t1

0x3526,	// (0x00028d89) list_medium_line_t3_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_t2

0x3526,	// (0x00028d89) list_medium_line_t3_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_t3_t

0x2c05,	// (0x00028468) list_medium_line_g3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g3_g1

0x2c05,	// (0x00028468) list_medium_line_g3_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g3_g2

0x2c05,	// (0x00028468) list_medium_line_g3_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00034a3c) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00034a3c) list_medium_line_g3_g

0x3526,	// (0x00028d89) list_medium_line_g3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_g3_t1

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g1

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g2

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00034a3c) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00034a3c) list_medium_line_t2_g3_g

0x3526,	// (0x00028d89) list_medium_line_t2_g3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_g3_t1

0x3526,	// (0x00028d89) list_medium_line_t2_g3_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00034a1f) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00034a1f) list_medium_line_t2_g3_t

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g1_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g1

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g2_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g2

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g3_ParamLimits

0x2c05,	// (0x00028468) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00034a3c) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00034a3c) list_medium_line_t3_g3_g

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t1_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t1

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t2_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t2

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t3_ParamLimits

0x3526,	// (0x00028d89) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00034a43) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00034a43) list_medium_line_t3_g3_t

0x36aa,	// (0x00028f0d) list_medium_line_right_iconx2_g1

0x36aa,	// (0x00028f0d) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00034c21) list_medium_line_right_iconx2_g

0x4aad,	// (0x0002a310) list_medium_line_right_iconx2_t1

0x36aa,	// (0x00028f0d) list_medium_line_t2_right_iconx2_g1

0x36aa,	// (0x00028f0d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00034c21) list_medium_line_t2_right_iconx2_g

0x4aad,	// (0x0002a310) list_medium_line_t2_right_iconx2_t1

0x4aad,	// (0x0002a310) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x000354b4) list_medium_line_t2_right_iconx2_t

0x4aad,	// (0x0002a310) list_medium_line_x4_t4_t1

0x4aad,	// (0x0002a310) list_medium_line_x4_t4_t2

0x4aad,	// (0x0002a310) list_medium_line_x4_t4_t3

0x4aad,	// (0x0002a310) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00034b0c) list_medium_line_x4_t4_t

0x9b9a,	// (0x0002f3fd) tport_appsw_pane_ParamLimits

0x9b9a,	// (0x0002f3fd) tport_appsw_pane

0x9bb2,	// (0x0002f415) tport_contact_pane_ParamLimits

0x9bb2,	// (0x0002f415) tport_contact_pane

0x9bca,	// (0x0002f42d) tport_listscroll_pane_ParamLimits

0x9bca,	// (0x0002f42d) tport_listscroll_pane

0x9be4,	// (0x0002f447) cell_tport_appsw_pane_ParamLimits

0x9be4,	// (0x0002f447) cell_tport_appsw_pane

0x5309,	// (0x0002ab6c) tport_appsw_pane_g1_ParamLimits

0x5309,	// (0x0002ab6c) tport_appsw_pane_g1

0xe352,	// (0x00033bb5) tport_contact_pane_g1

0xe35b,	// (0x00033bbe) tport_contact_pane_t1

0xe369,	// (0x00033bcc) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x000354ee) tport_contact_pane_t

0xe377,	// (0x00033bda) list_tport_pane

0xe380,	// (0x00033be3) scroll_pane_cp_030

0x9c2c,	// (0x0002f48f) cell_tport_appsw_pane_g1

0x9c3c,	// (0x0002f49f) cell_tport_appsw_pane_t1

0x9c4a,	// (0x0002f4ad) grid_highlight_pane_cp019

0x9c52,	// (0x0002f4b5) list_tport_double_graphic_pane_ParamLimits

0x9c52,	// (0x0002f4b5) list_tport_double_graphic_pane

0x2b9e,	// (0x00028401) list_highlight_pane_cp023_ParamLimits

0x2b9e,	// (0x00028401) list_highlight_pane_cp023

0x9c5f,	// (0x0002f4c2) list_tport_double_graphic_pane_g1_ParamLimits

0x9c5f,	// (0x0002f4c2) list_tport_double_graphic_pane_g1

0x9c6c,	// (0x0002f4cf) list_tport_double_graphic_pane_t1_ParamLimits

0x9c6c,	// (0x0002f4cf) list_tport_double_graphic_pane_t1

0x9c81,	// (0x0002f4e4) list_tport_double_graphic_pane_t2_ParamLimits

0x9c81,	// (0x0002f4e4) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x000354fa) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x000354fa) list_tport_double_graphic_pane_t

0x2466,	// (0x00027cc9) main_cale_note_pane

0x2093,	// (0x000278f6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2093,	// (0x000278f6) cell_vitu2_function_top_wide_pane_cp01

0x93e1,	// (0x0002ec44) wait_bar_pane_cp05_ParamLimits

0x2b9e,	// (0x00028401) listscroll_cmail_pane

0xe389,	// (0x00033bec) list_cmail_pane

0x9c93,	// (0x0002f4f6) list_cmail_body_pane

0x9ca9,	// (0x0002f50c) list_single_cmail_header_caption_pane

0x9cc0,	// (0x0002f523) list_single_cmail_header_detail_pane_ParamLimits

0x9cc0,	// (0x0002f523) list_single_cmail_header_detail_pane

0xe399,	// (0x00033bfc) list_single_cmail_header_caption_pane_t1

0x9cea,	// (0x0002f54d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9cea,	// (0x0002f54d) list_single_cmail_header_detail_pane_g1

0xe3b0,	// (0x00033c13) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe3b0,	// (0x00033c13) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x000354ff) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x000354ff) list_single_cmail_header_detail_pane_g

0xe3c9,	// (0x00033c2c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe3c9,	// (0x00033c2c) list_single_cmail_header_detail_pane_t1

0xe429,	// (0x00033c8c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe429,	// (0x00033c8c) list_single_cmail_header_editor_pane_bg

0xdd6f,	// (0x000335d2) list_cmail_body_pane_g1

0xe440,	// (0x00033ca3) list_cmail_body_pane_t1

0xcf57,	// (0x000327ba) list_single_cmail_header_editor_pane_bg_g1

0x3d71,	// (0x000295d4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf67,	// (0x000327ca) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf5f,	// (0x000327c2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1f4,	// (0x00032a57) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf87,	// (0x000327ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf77,	// (0x000327da) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf7f,	// (0x000327e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3d51,	// (0x000295b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9d02,	// (0x0002f565) calenote_gesture_pane_ParamLimits

0x9d02,	// (0x0002f565) calenote_gesture_pane

0x9d22,	// (0x0002f585) calenote_window_pane_ParamLimits

0x9d22,	// (0x0002f585) calenote_window_pane

0xe44e,	// (0x00033cb1) popup_note_window_cp01

0x9d3e,	// (0x0002f5a1) calenote_swipe_1_pane_ParamLimits

0x9d3e,	// (0x0002f5a1) calenote_swipe_1_pane

0x981f,	// (0x0002f082) calenote_swipe_2_pane_ParamLimits

0x981f,	// (0x0002f082) calenote_swipe_2_pane

0xe0dc,	// (0x0003393f) calenote_swipe_1_pane_g1_ParamLimits

0xe0dc,	// (0x0003393f) calenote_swipe_1_pane_g1

0xe0e9,	// (0x0003394c) calenote_swipe_1_pane_g2_ParamLimits

0xe0e9,	// (0x0003394c) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x0003549c) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x0003549c) calenote_swipe_1_pane_g

0xe460,	// (0x00033cc3) calenote_swipe_1_pane_t1_ParamLimits

0xe460,	// (0x00033cc3) calenote_swipe_1_pane_t1

0xe0dc,	// (0x0003393f) calenote_swipe_2_pane_g1_ParamLimits

0xe0dc,	// (0x0003393f) calenote_swipe_2_pane_g1

0xe47f,	// (0x00033ce2) calenote_swipe_2_pane_g2_ParamLimits

0xe47f,	// (0x00033ce2) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0003550b) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0003550b) calenote_swipe_2_pane_g

0xe48b,	// (0x00033cee) calenote_swipe_2_pane_t1_ParamLimits

0xe48b,	// (0x00033cee) calenote_swipe_2_pane_t1

0x2466,	// (0x00027cc9) main_mup_navstr_pane

0x7483,	// (0x0002cce6) main_mup3_pane_t7_ParamLimits

0x7483,	// (0x0002cce6) main_mup3_pane_t7

0xcb1b,	// (0x0003237e) main_mp4_pane_g6_ParamLimits

0xcb1b,	// (0x0003237e) main_mp4_pane_g6

0xcd6e,	// (0x000325d1) main_image3_pane_t4_ParamLimits

0xcd6e,	// (0x000325d1) main_image3_pane_t4

0x9d53,	// (0x0002f5b6) popup_navstr_preview_pane_ParamLimits

0x9d53,	// (0x0002f5b6) popup_navstr_preview_pane

0x9d67,	// (0x0002f5ca) scroll_navstr_pane_ParamLimits

0x9d67,	// (0x0002f5ca) scroll_navstr_pane

0x2466,	// (0x00027cc9) bg_popup_preview_window_pane_cp04

0xe4b2,	// (0x00033d15) popup_navstr_preview_pane_t1

0x9d7b,	// (0x0002f5de) scroll_navstr_pane_g1_ParamLimits

0x9d7b,	// (0x0002f5de) scroll_navstr_pane_g1

0x9d8f,	// (0x0002f5f2) scroll_navstr_pane_t1_ParamLimits

0x9d8f,	// (0x0002f5f2) scroll_navstr_pane_t1

0xe457,	// (0x00033cba) bg_button_pane_cp014

0xe457,	// (0x00033cba) bg_button_pane_cp030

0x96f8,	// (0x0002ef5b) list_double_fisheye_pane_g4_ParamLimits

0x96f8,	// (0x0002ef5b) list_double_fisheye_pane_g4

0x9704,	// (0x0002ef67) list_double_fisheye_pane_g5_ParamLimits

0x9704,	// (0x0002ef67) list_double_fisheye_pane_g5

0xb559,	// (0x00030dbc) sp_fs_scroll_pane_cp03

0xe1f3,	// (0x00033a56) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe1ff,	// (0x00033a62) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x000354b9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x990b,	// (0x0002f16e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe391,	// (0x00033bf4) sp_fs_scroll_pane_cp02

0x2f7a,	// (0x000287dd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2f7a,	// (0x000287dd) popup_sp_fs_calendar_preview_list_single_pane

0x2466,	// (0x00027cc9) main_cam6_pano_pane

0xb472,	// (0x00030cd5) main_mup3_pane_ParamLimits

0x2466,	// (0x00027cc9) main_phacti_pane

0x92b4,	// (0x0002eb17) bg_button_pane_cp11

0x92ce,	// (0x0002eb31) main_mobtv_info_pane_g2_ParamLimits

0x92ce,	// (0x0002eb31) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x00035419) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x00035419) main_mobtv_info_pane_g

0x94ab,	// (0x0002ed0e) sc_clock_pane_t5_ParamLimits

0x94ab,	// (0x0002ed0e) sc_clock_pane_t5

0x9573,	// (0x0002edd6) main_radioblah_pane_g1_ParamLimits

0xe00d,	// (0x00033870) main_radioblah_pane_t3_ParamLimits

0xe00d,	// (0x00033870) main_radioblah_pane_t3

0xe025,	// (0x00033888) main_radioblah_pane_t4_ParamLimits

0xe025,	// (0x00033888) main_radioblah_pane_t4

0x959b,	// (0x0002edfe) main_radioblah_text_pane_ParamLimits

0x959b,	// (0x0002edfe) main_radioblah_text_pane

0x95ad,	// (0x0002ee10) main_radioblah_info_pane_g1_ParamLimits

0x9646,	// (0x0002eea9) main_radioblah_info_pane_t4_ParamLimits

0x9646,	// (0x0002eea9) main_radioblah_info_pane_t4

0x2b9e,	// (0x00028401) main_sp_fs_calendar_pane

0x9da6,	// (0x0002f609) main_phacti_pane_g1

0x9dae,	// (0x0002f611) phacti_note_pane_ParamLimits

0x9dae,	// (0x0002f611) phacti_note_pane

0xe4c9,	// (0x00033d2c) phacti_term_pane_ParamLimits

0xe4c9,	// (0x00033d2c) phacti_term_pane

0xe4de,	// (0x00033d41) phacti_note_pane_t1_ParamLimits

0xe4de,	// (0x00033d41) phacti_note_pane_t1

0xe4f5,	// (0x00033d58) phacti_term_pane_g1

0xe4fd,	// (0x00033d60) phacti_term_pane_t1_ParamLimits

0xe4fd,	// (0x00033d60) phacti_term_pane_t1

0xe527,	// (0x00033d8a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe52f,	// (0x00033d92) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x00035515) popup_sp_fs_calendar_preview_list_single_pane_g

0xe537,	// (0x00033d9a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe537,	// (0x00033d9a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe54d,	// (0x00033db0) aid_popup_sp_fs_bg_corner_pane

0x36aa,	// (0x00028f0d) popup_sp_fs_calendar_preview_bg_pane_g1

0x2466,	// (0x00027cc9) popup_sp_fs_calendar_preview_bg_pane

0xe555,	// (0x00033db8) popup_sp_fs_calendar_preview_list_pane

0x533f,	// (0x0002aba2) bg_main_sp_fs_cale_pane_ParamLimits

0x533f,	// (0x0002aba2) bg_main_sp_fs_cale_pane

0xe566,	// (0x00033dc9) listscroll_cale_mrui_pane_ParamLimits

0xe566,	// (0x00033dc9) listscroll_cale_mrui_pane

0xe57b,	// (0x00033dde) listscroll_sp_fs_schedule_track_pane

0xe584,	// (0x00033de7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe584,	// (0x00033de7) main_sp_fs_ctrlbar_pane_cp01

0xe597,	// (0x00033dfa) main_sp_fs_ribbon_pane

0xe59f,	// (0x00033e02) popup_sp_fs_cale_preview_window

0x9e23,	// (0x0002f686) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9e23,	// (0x0002f686) list_single_sp_fs_schedule_track_pane

0x2b9e,	// (0x00028401) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2b9e,	// (0x00028401) bg_sp_fs_highlight_list_pane_cp03

0x9e37,	// (0x0002f69a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9e37,	// (0x0002f69a) list_single_sp_fs_schedule_track_pane_g1

0x9e43,	// (0x0002f6a6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9e43,	// (0x0002f6a6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x0003551a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x0003551a) list_single_sp_fs_schedule_track_pane_g

0x9e4f,	// (0x0002f6b2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9e4f,	// (0x0002f6b2) list_single_sp_fs_schedule_track_pane_t1

0x9e69,	// (0x0002f6cc) sp_fs_schedule_track_pane_ParamLimits

0x9e69,	// (0x0002f6cc) sp_fs_schedule_track_pane

0xe5b1,	// (0x00033e14) sp_fs_schedule_track_pane_g1

0xe5b9,	// (0x00033e1c) sp_fs_schedule_track_pane_g2

0xe5c1,	// (0x00033e24) sp_fs_schedule_track_pane_g3

0xe5c9,	// (0x00033e2c) sp_fs_schedule_track_pane_g4

0xe5d1,	// (0x00033e34) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x0003551f) sp_fs_schedule_track_pane_g

0xcf57,	// (0x000327ba) bg_sp_fs_schedule_viewer_highlight_g1

0x3d71,	// (0x000295d4) bg_sp_fs_schedule_viewer_highlight_g2

0xcf5f,	// (0x000327c2) bg_sp_fs_schedule_viewer_highlight_g3

0xcf67,	// (0x000327ca) bg_sp_fs_schedule_viewer_highlight_g4

0xd1f4,	// (0x00032a57) bg_sp_fs_schedule_viewer_highlight_g5

0xcf77,	// (0x000327da) bg_sp_fs_schedule_viewer_highlight_g6

0xcf7f,	// (0x000327e2) bg_sp_fs_schedule_viewer_highlight_g7

0xcf87,	// (0x000327ea) bg_sp_fs_schedule_viewer_highlight_g8

0x3d51,	// (0x000295b4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x0003552a) bg_sp_fs_schedule_viewer_highlight_g

0x2466,	// (0x00027cc9) bg_main_sp_fs_ribbon_pane

0x9e7a,	// (0x0002f6dd) main_sp_fs_ribbon_pane_g1

0xe5d9,	// (0x00033e3c) main_sp_fs_ribbon_pane_t1

0x9e83,	// (0x0002f6e6) main_sp_fs_ribbon_pane_t2

0xe5e8,	// (0x00033e4b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x0003553d) main_sp_fs_ribbon_pane_t

0xe5f7,	// (0x00033e5a) main_sp_fs_ribbon_scheduler_pane

0xe5ff,	// (0x00033e62) bg_main_sp_fs_ribbon_pane_g1

0xe608,	// (0x00033e6b) bg_main_sp_fs_ribbon_pane_g2

0xe611,	// (0x00033e74) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x00035544) bg_main_sp_fs_ribbon_pane_g

0xe619,	// (0x00033e7c) main_sp_fs_ribbon_scheduler_pane_g1

0xe622,	// (0x00033e85) main_sp_fs_ribbon_scheduler_pane_g2

0xe62b,	// (0x00033e8e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x0003554b) main_sp_fs_ribbon_scheduler_pane_g

0xe634,	// (0x00033e97) list_cale_mrui_pane

0x9e92,	// (0x0002f6f5) sp_fs_scroll_pane_cp07_ParamLimits

0x9e92,	// (0x0002f6f5) sp_fs_scroll_pane_cp07

0x9eae,	// (0x0002f711) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9eae,	// (0x0002f711) bg_sp_fs_schedule_viewer_highlight

0xe641,	// (0x00033ea4) list_single_sp_fs_schedule_track_pane_cp01

0xe649,	// (0x00033eac) list_sp_fs_schedule_track_pane

0xe651,	// (0x00033eb4) sp_fs_scroll_pane_cp06_ParamLimits

0xe651,	// (0x00033eb4) sp_fs_scroll_pane_cp06

0x36aa,	// (0x00028f0d) bgmain_sp_fs_calendar_pane_g1

0x9ebe,	// (0x0002f721) list_single_cale_mrui_pane_ParamLimits

0x9ebe,	// (0x0002f721) list_single_cale_mrui_pane

0xe663,	// (0x00033ec6) list_single_cale_mrui_row_pane_ParamLimits

0xe663,	// (0x00033ec6) list_single_cale_mrui_row_pane

0xe670,	// (0x00033ed3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe670,	// (0x00033ed3) list_single_cale_mrui_row_pane_g1

0xe6b5,	// (0x00033f18) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe6b5,	// (0x00033f18) list_single_cale_mrui_row_pane_t1

0x9edf,	// (0x0002f742) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9edf,	// (0x0002f742) list_single_cale_mrui_row_pane_t2

0xe6c7,	// (0x00033f2a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe6c7,	// (0x00033f2a) list_single_cale_mrui_row_pane_t3

0xe6f6,	// (0x00033f59) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe6f6,	// (0x00033f59) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x00035559) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x00035559) list_single_cale_mrui_row_pane_t

0x9f47,	// (0x0002f7aa) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9f47,	// (0x0002f7aa) list_single_cmail_header_editor_pane_bg_cp01

0x9f6d,	// (0x0002f7d0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9f6d,	// (0x0002f7d0) list_single_cmail_header_editor_pane_bg_cp02

0x9f8d,	// (0x0002f7f0) main_radioblah_text_pane_t1_ParamLimits

0x9f8d,	// (0x0002f7f0) main_radioblah_text_pane_t1

0xe725,	// (0x00033f88) cam6_indi_pane_cp01

0xe72d,	// (0x00033f90) cam6_mode_pane_cp01

0xe735,	// (0x00033f98) cam6_pano_pane

0xe73e,	// (0x00033fa1) cam6_zoom_pane_cp01

0xe746,	// (0x00033fa9) cam6_pano_image_pane

0xe751,	// (0x00033fb4) cam6_pano_pane_g1

0xdd6f,	// (0x000335d2) cam6_pano_pane_g2

0xe75a,	// (0x00033fbd) cam6_pano_pane_g3

0xe763,	// (0x00033fc6) cam6_pano_pane_g4

0xc810,	// (0x00032073) cam6_pano_pane_g5

0xe76c,	// (0x00033fcf) cam6_pano_pane_g6

0xe776,	// (0x00033fd9) cam6_pano_pane_g7

0xe77e,	// (0x00033fe1) cam6_pano_pane_g8

0xe787,	// (0x00033fea) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x00035562) cam6_pano_pane_g

0x2466,	// (0x00027cc9) main_browser_tag_pane

0xe4aa,	// (0x00033d0d) grid_navstr_albumart_pane

0xe792,	// (0x00033ff5) cell_navstr_albumart_pane_ParamLimits

0xe792,	// (0x00033ff5) cell_navstr_albumart_pane

0xe7b2,	// (0x00034015) cell_navstr_albumart_pane_g1

0xbb5b,	// (0x000313be) cell_navstr_albumart_pane_g2

0xbb6b,	// (0x000313ce) cell_navstr_albumart_pane_g3

0xbb63,	// (0x000313c6) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x00035575) cell_navstr_albumart_pane_g

0x9fa8,	// (0x0002f80b) bt_list_pane_ParamLimits

0x9fa8,	// (0x0002f80b) bt_list_pane

0x9fbc,	// (0x0002f81f) bt_list_pane_t1

0x9fcb,	// (0x0002f82e) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x0003557e) bt_list_pane_t

0x2466,	// (0x00027cc9) main_cale_prevew_pane

0x9fda,	// (0x0002f83d) popup_cale_preview_window_ParamLimits

0x9fda,	// (0x0002f83d) popup_cale_preview_window

0x2b9e,	// (0x00028401) bg_popup_preview_window_pane_cp05_ParamLimits

0x2b9e,	// (0x00028401) bg_popup_preview_window_pane_cp05

0xe7ba,	// (0x0003401d) list_cale_preview_pane_ParamLimits

0xe7ba,	// (0x0003401d) list_cale_preview_pane

0x9ff3,	// (0x0002f856) list_double_cale_preview_pane_ParamLimits

0x9ff3,	// (0x0002f856) list_double_cale_preview_pane

0xcf8f,	// (0x000327f2) list_single_cale_preview_pane_ParamLimits

0xcf8f,	// (0x000327f2) list_single_cale_preview_pane

0xa005,	// (0x0002f868) list_single_cale_preview_pane_g1

0xa00d,	// (0x0002f870) list_single_cale_preview_pane_t1_ParamLimits

0xa00d,	// (0x0002f870) list_single_cale_preview_pane_t1

0xa022,	// (0x0002f885) list_double_cale_preview_pane_g1

0xa02a,	// (0x0002f88d) list_double_cale_preview_pane_t1_ParamLimits

0xa02a,	// (0x0002f88d) list_double_cale_preview_pane_t1

0xa03f,	// (0x0002f8a2) list_double_cale_preview_pane_t2_ParamLimits

0xa03f,	// (0x0002f8a2) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x00035583) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x00035583) list_double_cale_preview_pane_t

0x2466,	// (0x00027cc9) main_ezdial_pane

0x2b9e,	// (0x00028401) main_sp_fs_email_pane_ParamLimits

0x987b,	// (0x0002f0de) cmail_ddmenu_btn01_pane_ParamLimits

0x987b,	// (0x0002f0de) cmail_ddmenu_btn01_pane

0x988e,	// (0x0002f0f1) cmail_ddmenu_btn02_pane_ParamLimits

0x988e,	// (0x0002f0f1) cmail_ddmenu_btn02_pane

0x98b1,	// (0x0002f114) cmail_ddmenu_btn03_pane_ParamLimits

0x98b1,	// (0x0002f114) cmail_ddmenu_btn03_pane

0x994a,	// (0x0002f1ad) main_sp_fs_ctrlbar_pane_ParamLimits

0x996e,	// (0x0002f1d1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9c93,	// (0x0002f4f6) list_cmail_body_pane_ParamLimits

0xe3a7,	// (0x00033c0a) bg_button_pane_cp12

0xe3bc,	// (0x00033c1f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe3bc,	// (0x00033c1f) list_single_cmail_header_detail_pane_g3

0xe405,	// (0x00033c68) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe405,	// (0x00033c68) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x00035506) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x00035506) list_single_cmail_header_detail_pane_t

0xe512,	// (0x00033d75) phacti_term_pane_t2_ParamLimits

0xe512,	// (0x00033d75) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x00035510) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x00035510) phacti_term_pane_t

0xe7c6,	// (0x00034029) aid_size_list_single_double

0xa057,	// (0x0002f8ba) popup_ezdial_listscroll_window

0xa073,	// (0x0002f8d6) popup_number_entry_window_cp01

0x34bd,	// (0x00028d20) bg_popup_call_pane_cp09

0xe7d2,	// (0x00034035) ezdial_list_pane

0xe7da,	// (0x0003403d) scroll_pane_cp23

0x533f,	// (0x0002aba2) bg_button_pane_cp028_ParamLimits

0x533f,	// (0x0002aba2) bg_button_pane_cp028

0xa081,	// (0x0002f8e4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa081,	// (0x0002f8e4) cmail_ddmenu_btn01_pane_g1

0xa08d,	// (0x0002f8f0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa08d,	// (0x0002f8f0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x00035588) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x00035588) cmail_ddmenu_btn01_pane_g

0xe7e2,	// (0x00034045) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe7e2,	// (0x00034045) cmail_ddmenu_btn01_pane_t1

0x533f,	// (0x0002aba2) bg_button_pane_cp029_ParamLimits

0x533f,	// (0x0002aba2) bg_button_pane_cp029

0xa099,	// (0x0002f8fc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa099,	// (0x0002f8fc) cmail_ddmenu_btn02_pane_g1

0xa0b1,	// (0x0002f914) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa0b1,	// (0x0002f914) cmail_ddmenu_btn02_pane_t1

0x2b9e,	// (0x00028401) bg_button_pane_cp031_ParamLimits

0x2b9e,	// (0x00028401) bg_button_pane_cp031

0xa099,	// (0x0002f8fc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa099,	// (0x0002f8fc) cmail_ddmenu_btn03_pane_g1

0xa0b1,	// (0x0002f914) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa0b1,	// (0x0002f914) cmail_ddmenu_btn03_pane_t1

0x7baf,	// (0x0002d412) cell_dialer2_keypad_pane_t1_ParamLimits

0x7bc9,	// (0x0002d42c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7bc9,	// (0x0002d42c) cell_dialer2_keypad_pane_t1_copy1

0x90d7,	// (0x0002e93a) ncimui_group_button_pane

0x2b9e,	// (0x00028401) main_sp_fs_calendar_pane_ParamLimits

0x9ca9,	// (0x0002f50c) list_single_cmail_header_caption_pane_ParamLimits

0xe55d,	// (0x00033dc0) aid_recal_txt_sm_pane

0x2466,	// (0x00027cc9) mian_recal_day_pane

0xe59f,	// (0x00033e02) popup_sp_fs_cale_preview_window_ParamLimits

0xe7f7,	// (0x0003405a) list_recal_day_pane

0xe839,	// (0x0003409c) list_single_recal_day_pane_ParamLimits

0xe839,	// (0x0003409c) list_single_recal_day_pane

0xe84b,	// (0x000340ae) list_single_recal_day_pane_g1_ParamLimits

0xe84b,	// (0x000340ae) list_single_recal_day_pane_g1

0xe857,	// (0x000340ba) list_single_recal_day_pane_g2_ParamLimits

0xe857,	// (0x000340ba) list_single_recal_day_pane_g2

0xe863,	// (0x000340c6) list_single_recal_day_pane_g3_ParamLimits

0xe863,	// (0x000340c6) list_single_recal_day_pane_g3

0xa0d5,	// (0x0002f938) list_single_recal_day_pane_g4_ParamLimits

0xa0d5,	// (0x0002f938) list_single_recal_day_pane_g4

0xe86f,	// (0x000340d2) list_single_recal_day_pane_g5_ParamLimits

0xe86f,	// (0x000340d2) list_single_recal_day_pane_g5

0xe87b,	// (0x000340de) list_single_recal_day_pane_g6_ParamLimits

0xe87b,	// (0x000340de) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x00035597) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x00035597) list_single_recal_day_pane_g

0xe88f,	// (0x000340f2) list_single_recal_day_pane_t1

0xe8a1,	// (0x00034104) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x000355a2) list_single_recal_day_pane_t

0xa0ed,	// (0x0002f950) ncimui_query_button_pane_ParamLimits

0xa0ed,	// (0x0002f950) ncimui_query_button_pane

0xa0fd,	// (0x0002f960) ncimui_query_button_pane_t1_ParamLimits

0xa0fd,	// (0x0002f960) ncimui_query_button_pane_t1

0xe8b3,	// (0x00034116) ncimui_query_button_pane_t2_ParamLimits

0xe8b3,	// (0x00034116) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x000355a7) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x000355a7) ncimui_query_button_pane_t

0xa110,	// (0x0002f973) query_button_pane_ParamLimits

0xa110,	// (0x0002f973) query_button_pane

0x2466,	// (0x00027cc9) bg_button_pane_cp0028

0xe8c6,	// (0x00034129) query_button_pane_t1

0x14ca,	// (0x00026d2d) main_tport_pane_ParamLimits

0x9b57,	// (0x0002f3ba) bg_popup_window_pane_cp01_ParamLimits

0x9b57,	// (0x0002f3ba) bg_popup_window_pane_cp01

0x9b72,	// (0x0002f3d5) heading_pane_cp08_ParamLimits

0x9b72,	// (0x0002f3d5) heading_pane_cp08

0x9b85,	// (0x0002f3e8) heading_pane_cp07_ParamLimits

0x9b85,	// (0x0002f3e8) heading_pane_cp07

0x9c2c,	// (0x0002f48f) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x000354f3) cell_tport_appsw_pane_g

0x55cd,	// (0x0002ae30) input_candi_list_open_g1

0x48db,	// (0x0002a13e) list_cale_time_pane_g6_ParamLimits

0x48db,	// (0x0002a13e) list_cale_time_pane_g6

0x6e90,	// (0x0002c6f3) aid_size_touch_calib_1_ParamLimits

0x6e90,	// (0x0002c6f3) aid_size_touch_calib_1

0x6ea2,	// (0x0002c705) aid_size_touch_calib_2_ParamLimits

0x6ea2,	// (0x0002c705) aid_size_touch_calib_2

0x6eba,	// (0x0002c71d) aid_size_touch_calib_3_ParamLimits

0x6eba,	// (0x0002c71d) aid_size_touch_calib_3

0x6ed8,	// (0x0002c73b) aid_size_touch_calib_4_ParamLimits

0x6ed8,	// (0x0002c73b) aid_size_touch_calib_4

0x6ef0,	// (0x0002c753) main_touch_calib_button_group_pane_ParamLimits

0x6ef0,	// (0x0002c753) main_touch_calib_button_group_pane

0x6f08,	// (0x0002c76b) main_touch_calib_pane_g1_ParamLimits

0x6f1a,	// (0x0002c77d) main_touch_calib_pane_g2_ParamLimits

0x6f2c,	// (0x0002c78f) main_touch_calib_pane_g3_ParamLimits

0x6f3e,	// (0x0002c7a1) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x00034f35) main_touch_calib_pane_g_ParamLimits

0x6f50,	// (0x0002c7b3) main_touch_calib_pane_t1_ParamLimits

0x6f6a,	// (0x0002c7cd) main_touch_calib_pane_t2_ParamLimits

0x6f84,	// (0x0002c7e7) main_touch_calib_pane_t3_ParamLimits

0x6f98,	// (0x0002c7fb) main_touch_calib_pane_t4_ParamLimits

0x6fac,	// (0x0002c80f) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x00034f3e) main_touch_calib_pane_t_ParamLimits

0xc5d6,	// (0x00031e39) list_single_fp_cale_pane_g3_ParamLimits

0xc5d6,	// (0x00031e39) list_single_fp_cale_pane_g3

0xb472,	// (0x00030cd5) bg_button_pane_cp012_ParamLimits

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp03_ParamLimits

0x2298,	// (0x00027afb) cell_vitu2_function_top_pane_g1_ParamLimits

0xb472,	// (0x00030cd5) bg_vkb2_func_pane_cp04_ParamLimits

0x9062,	// (0x0002e8c5) main_ncimui_button_group_pane_ParamLimits

0x9062,	// (0x0002e8c5) main_ncimui_button_group_pane

0x90c2,	// (0x0002e925) main_ncimui_pane_t3_ParamLimits

0x90c2,	// (0x0002e925) main_ncimui_pane_t3

0xe4c0,	// (0x00033d23) phacti_button_group_pane

0xe7c6,	// (0x00034029) aid_size_list_single_double_ParamLimits

0xa057,	// (0x0002f8ba) popup_ezdial_listscroll_window_ParamLimits

0xa073,	// (0x0002f8d6) popup_number_entry_window_cp01_ParamLimits

0xa123,	// (0x0002f986) phacti_button_pane_ParamLimits

0xa123,	// (0x0002f986) phacti_button_pane

0x2466,	// (0x00027cc9) bg_button_pane_cp14

0xe8d4,	// (0x00034137) phacti_button_pane_t1

0xa134,	// (0x0002f997) main_touch_calib_button_pane_ParamLimits

0xa134,	// (0x0002f997) main_touch_calib_button_pane

0x2d61,	// (0x000285c4) bg_button_pane_cp18_ParamLimits

0x2d61,	// (0x000285c4) bg_button_pane_cp18

0xe8e2,	// (0x00034145) main_touch_calib_button_pane_t1_ParamLimits

0xe8e2,	// (0x00034145) main_touch_calib_button_pane_t1

0xe8f8,	// (0x0003415b) main_touch_calib_button_pane_t2_ParamLimits

0xe8f8,	// (0x0003415b) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x000355ac) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x000355ac) main_touch_calib_button_pane_t

0x2466,	// (0x00027cc9) cell_ncimui_button_pane

0x2466,	// (0x00027cc9) bg_button_pane_cp032

0xe916,	// (0x00034179) cell_ncimui_button_pane_t1

0xcd4e,	// (0x000325b1) image3_infobar_pane_ParamLimits

0xcd4e,	// (0x000325b1) image3_infobar_pane

0x94d7,	// (0x0002ed3a) fs_bigclock_status_pane_ParamLimits

0x94d7,	// (0x0002ed3a) fs_bigclock_status_pane

0x94e4,	// (0x0002ed47) main_fs_bigclock_clock_pane_ParamLimits

0x94e4,	// (0x0002ed47) main_fs_bigclock_clock_pane

0x9502,	// (0x0002ed65) main_fs_bigclock_indi_pane_ParamLimits

0x9502,	// (0x0002ed65) main_fs_bigclock_indi_pane

0x9534,	// (0x0002ed97) main_fs_bigclock_swipe_pane_ParamLimits

0x9534,	// (0x0002ed97) main_fs_bigclock_swipe_pane

0x2466,	// (0x00027cc9) main_fs_clock_dumped_data

0xde7c,	// (0x000336df) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xde7c,	// (0x000336df) list_single_fs_bigclock_indicator_pane_g1

0xde98,	// (0x000336fb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xde98,	// (0x000336fb) list_single_fs_bigclock_indicator_pane_g2

0xdeb2,	// (0x00033715) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdeb2,	// (0x00033715) list_single_fs_bigclock_indicator_pane_g3

0xdecc,	// (0x0003372f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdecc,	// (0x0003372f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x0003544d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x0003544d) list_single_fs_bigclock_indicator_pane_g

0xdef7,	// (0x0003375a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdef7,	// (0x0003375a) list_single_fs_bigclock_indicator_pane_t1

0xdf1f,	// (0x00033782) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf1f,	// (0x00033782) list_single_fs_bigclock_indicator_pane_t2

0xdf47,	// (0x000337aa) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf47,	// (0x000337aa) list_single_fs_bigclock_indicator_pane_t3

0xdf6f,	// (0x000337d2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf6f,	// (0x000337d2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x00035458) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x00035458) list_single_fs_bigclock_indicator_pane_t

0xe924,	// (0x00034187) image3_infobar_fav_pane_ParamLimits

0xe924,	// (0x00034187) image3_infobar_fav_pane

0xe934,	// (0x00034197) image3_infobar_loc_pane_ParamLimits

0xe934,	// (0x00034197) image3_infobar_loc_pane

0xe948,	// (0x000341ab) image3_infobar_time_pane_ParamLimits

0xe948,	// (0x000341ab) image3_infobar_time_pane

0x36aa,	// (0x00028f0d) image3_infobar_time_pane_g1

0xe958,	// (0x000341bb) image3_infobar_time_pane_t1

0x36aa,	// (0x00028f0d) image3_infobar_loc_pane_g1

0xe966,	// (0x000341c9) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x000355b1) image3_infobar_loc_pane_g

0xe96e,	// (0x000341d1) image3_infobar_loc_pane_t1

0x36aa,	// (0x00028f0d) image3_infobar_fav_pane_g1

0xe97c,	// (0x000341df) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x000355b6) image3_infobar_fav_pane_g

0xe984,	// (0x000341e7) fs_bigclock_status_battery_pane

0xe98d,	// (0x000341f0) fs_bigclock_status_signal_pane

0xe996,	// (0x000341f9) fs_bigclock_status_title_pane

0xe99f,	// (0x00034202) fs_bigclock_status_signal_pane_g1

0xe9a8,	// (0x0003420b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x000355bb) fs_bigclock_status_signal_pane_g

0xe9b0,	// (0x00034213) fs_bigclock_status_battery_pane_g1

0xe9b9,	// (0x0003421c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x000355c0) fs_bigclock_status_battery_pane_g

0xe9c1,	// (0x00034224) fs_bigclock_status_title_pane_t1

0xa149,	// (0x0002f9ac) main_fs_bigclock_clock_pane_g1

0xa149,	// (0x0002f9ac) main_fs_bigclock_clock_pane_g2

0xa15a,	// (0x0002f9bd) main_fs_bigclock_clock_pane_g3

0xa15a,	// (0x0002f9bd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x000355c5) main_fs_bigclock_clock_pane_g

0xa16d,	// (0x0002f9d0) main_fs_bigclock_clock_pane_t1

0xa183,	// (0x0002f9e6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x000355ce) main_fs_bigclock_clock_pane_t

0xe9cf,	// (0x00034232) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe9cf,	// (0x00034232) list_single_fs_bigclock_indicator_pane

0xe9e0,	// (0x00034243) list_single_fs_bigclock_pane_ParamLimits

0xe9e0,	// (0x00034243) list_single_fs_bigclock_pane

0xea06,	// (0x00034269) main_fs_bigclock_indicator_pane_t1

0xea15,	// (0x00034278) list_single_fs_bigclock_pane_g1

0xea1d,	// (0x00034280) list_single_fs_bigclock_pane_t1

0x36aa,	// (0x00028f0d) main_fs_bigclock_swipe_pane_g1

0xea60,	// (0x000342c3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x000355df) main_fs_bigclock_swipe_pane_g

0xea68,	// (0x000342cb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xea68,	// (0x000342cb) main_fs_bigclock_swipe_pane_t1

0x4bcb,	// (0x0002a42e) call_type_pane_ParamLimits

0x2466,	// (0x00027cc9) main_btmg_pane

0xe69c,	// (0x00033eff) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe69c,	// (0x00033eff) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x00035552) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x00035552) list_single_cale_mrui_row_pane_g

0xe820,	// (0x00034083) list_recal_vselct_arw_lo_pane

0xe828,	// (0x0003408b) list_recal_vselct_arw_up_pane

0xe830,	// (0x00034093) list_recal_vselct_pane

0xa1dd,	// (0x0002fa40) btmg_button_pane

0xa1e7,	// (0x0002fa4a) main_btmg_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp044

0xea85,	// (0x000342e8) btmg_button_pane_t1

0xbceb,	// (0x0003154e) aid_listscroll_gen

0x2b9e,	// (0x00028401) main_cntbar_detail_pane

0xe389,	// (0x00033bec) list_cmail_folder_pane

0xb559,	// (0x00030dbc) sp_fs_scroll_pane_cp03_ParamLimits

0xa1f1,	// (0x0002fa54) list_single_fs_dyc_pane_cp01_ParamLimits

0xa1f1,	// (0x0002fa54) list_single_fs_dyc_pane_cp01

0xea93,	// (0x000342f6) aid_size_cmail_indent

0xea9c,	// (0x000342ff) list_single_dyc_row_pane_cp01

0xa23a,	// (0x0002fa9d) cntbar_detail_list_pane_ParamLimits

0xa23a,	// (0x0002fa9d) cntbar_detail_list_pane

0xa286,	// (0x0002fae9) main_cntbar_detail_cont_pane_ParamLimits

0xa286,	// (0x0002fae9) main_cntbar_detail_cont_pane

0xb559,	// (0x00030dbc) scroll_pane_cp032_ParamLimits

0xb559,	// (0x00030dbc) scroll_pane_cp032

0xa29a,	// (0x0002fafd) cntbar_detail_list_event_pane_ParamLimits

0xa29a,	// (0x0002fafd) cntbar_detail_list_event_pane

0xa24a,	// (0x0002faad) cntbar_detail_list_shct_pane

0x3dc7,	// (0x0002962a) aid_list_gen

0xeaa5,	// (0x00034308) aid_scroll

0xeaae,	// (0x00034311) aid_size_touch_scroll_bar

0xa2aa,	// (0x0002fb0d) aid_list_double

0xa2b3,	// (0x0002fb16) aid_list_single

0xa2aa,	// (0x0002fb0d) aid_list_single_lg

0xa2bc,	// (0x0002fb1f) aid_list_z_g_a_sm

0xa2c4,	// (0x0002fb27) aid_list_z_g_d

0xa2cc,	// (0x0002fb2f) aid_txt_z_prm

0xa2da,	// (0x0002fb3d) aid_txt_z_prm_cp01

0xa2e8,	// (0x0002fb4b) aid_txt_z_sec

0xa2f6,	// (0x0002fb59) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa2f6,	// (0x0002fb59) main_cntbar_detail_cont_pane_g1

0xa30a,	// (0x0002fb6d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa30a,	// (0x0002fb6d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x000355e4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x000355e4) main_cntbar_detail_cont_pane_g

0xeab7,	// (0x0003431a) main_cntbar_detail_cont_pane_t1

0xeac5,	// (0x00034328) main_cntbar_detail_cont_pane_t2

0xead3,	// (0x00034336) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x000355e9) main_cntbar_detail_cont_pane_t

0xa31a,	// (0x0002fb7d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa31a,	// (0x0002fb7d) cell_cntbar_detail_list_shct_pane

0xeae1,	// (0x00034344) cntbar_detail_list_shct_pane_g1

0xeaea,	// (0x0003434d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x000355f0) cntbar_detail_list_shct_pane_g

0xa32e,	// (0x0002fb91) cntbar_detail_list_event_pane_g1_ParamLimits

0xa32e,	// (0x0002fb91) cntbar_detail_list_event_pane_g1

0xa33a,	// (0x0002fb9d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa33a,	// (0x0002fb9d) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x000355f5) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x000355f5) cntbar_detail_list_event_pane_g

0xa3a6,	// (0x0002fc09) cntbar_detail_list_event_pane_t1_ParamLimits

0xa3a6,	// (0x0002fc09) cntbar_detail_list_event_pane_t1

0xa3bb,	// (0x0002fc1e) cntbar_detail_list_event_pane_t2_ParamLimits

0xa3bb,	// (0x0002fc1e) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x00035602) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x00035602) cntbar_detail_list_event_pane_t

0x36aa,	// (0x00028f0d) cell_cntbar_detail_list_shct_pane_g1

0x51b8,	// (0x0002aa1b) navi_pane_mv_g3

0x2b9e,	// (0x00028401) main_cntbar_detail_pane_ParamLimits

0x2466,	// (0x00027cc9) main_notif_wgt_pane

0xcaa9,	// (0x0003230c) aid_tch_main_mp4_pane_g4

0xccdb,	// (0x0003253e) popup_slider_window_cp02

0xe816,	// (0x00034079) list_recal_day_event_pane

0xa208,	// (0x0002fa6b) cntbar_detail_btn_pane_ParamLimits

0xa208,	// (0x0002fa6b) cntbar_detail_btn_pane

0xa221,	// (0x0002fa84) cntbar_detail_btn_pane_cp01_ParamLimits

0xa221,	// (0x0002fa84) cntbar_detail_btn_pane_cp01

0xa24a,	// (0x0002faad) cntbar_detail_list_shct_pane_ParamLimits

0xa25a,	// (0x0002fabd) cntbar_detail_pane_g1_ParamLimits

0xa25a,	// (0x0002fabd) cntbar_detail_pane_g1

0xa26a,	// (0x0002facd) cntbar_detail_pane_t1_ParamLimits

0xa26a,	// (0x0002facd) cntbar_detail_pane_t1

0xa346,	// (0x0002fba9) cntbar_detail_list_event_pane_g3_ParamLimits

0xa346,	// (0x0002fba9) cntbar_detail_list_event_pane_g3

0xa35e,	// (0x0002fbc1) cntbar_detail_list_event_pane_g4_ParamLimits

0xa35e,	// (0x0002fbc1) cntbar_detail_list_event_pane_g4

0xa376,	// (0x0002fbd9) cntbar_detail_list_event_pane_g5_ParamLimits

0xa376,	// (0x0002fbd9) cntbar_detail_list_event_pane_g5

0xa38e,	// (0x0002fbf1) cntbar_detail_list_event_pane_g6_ParamLimits

0xa38e,	// (0x0002fbf1) cntbar_detail_list_event_pane_g6

0xa3d0,	// (0x0002fc33) cntbar_detail_list_event_pane_t3_ParamLimits

0xa3d0,	// (0x0002fc33) cntbar_detail_list_event_pane_t3

0xa3e2,	// (0x0002fc45) popup_notif_wgt_window_ParamLimits

0xa3e2,	// (0x0002fc45) popup_notif_wgt_window

0xa3fb,	// (0x0002fc5e) popup_submenu_window_cp01_ParamLimits

0xa3fb,	// (0x0002fc5e) popup_submenu_window_cp01

0x34bd,	// (0x00028d20) bg_popup_window_pane_cp10

0xeaf3,	// (0x00034356) listscroll_notif_wgt_pane

0xeb05,	// (0x00034368) list_notif_wgt_window

0xeb0e,	// (0x00034371) scroll_pane_cp033

0xa40d,	// (0x0002fc70) list_notif_wgt_row_pane_ParamLimits

0xa40d,	// (0x0002fc70) list_notif_wgt_row_pane

0xeb17,	// (0x0003437a) aid_size_list_notif_wgt_del

0xeb24,	// (0x00034387) list_notif_wgt_row_pane_g1

0xeb30,	// (0x00034393) list_notif_wgt_row_pane_g2

0xeb3f,	// (0x000343a2) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x00035609) list_notif_wgt_row_pane_g

0xeb4c,	// (0x000343af) list_notif_wgt_row_pane_t1

0xeb62,	// (0x000343c5) list_notif_wgt_row_pane_t2

0xeb74,	// (0x000343d7) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x00035610) list_notif_wgt_row_pane_t

0xd22e,	// (0x00032a91) list_recal_day_event_pane_g1

0xeb86,	// (0x000343e9) list_recal_day_event_pane_t1

0x2466,	// (0x00027cc9) bg_button_pane_cp045

0xa41d,	// (0x0002fc80) cntbar_detail_btn_pane_t1

0x533f,	// (0x0002aba2) main_callh_pane_ParamLimits

0x533f,	// (0x0002aba2) main_callh_pane

0x2466,	// (0x00027cc9) main_coverflow0_pane

0x2466,	// (0x00027cc9) main_wgtman_pane

0x954c,	// (0x0002edaf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x954c,	// (0x0002edaf) main_fs_bigclock_unlock_btn_pane

0x9c24,	// (0x0002f487) bg_button_pane_cp16

0x9c34,	// (0x0002f497) cell_tport_appsw_pane_g3

0xa42b,	// (0x0002fc8e) cf0_flow_pane_ParamLimits

0xa42b,	// (0x0002fc8e) cf0_flow_pane

0xeb95,	// (0x000343f8) listscroll_cf0_pane

0xeba0,	// (0x00034403) main_cf0_pane_g1

0xa440,	// (0x0002fca3) main_cf0_pane_t1_ParamLimits

0xa440,	// (0x0002fca3) main_cf0_pane_t1

0xa457,	// (0x0002fcba) main_cf0_pane_t2_ParamLimits

0xa457,	// (0x0002fcba) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x0003561c) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x0003561c) main_cf0_pane_t

0xebb2,	// (0x00034415) scroll_pane_cp11

0xa46e,	// (0x0002fcd1) cf0_flow_pane_g1

0xa476,	// (0x0002fcd9) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x00035621) cf0_flow_pane_g

0xa47e,	// (0x0002fce1) cf0_flow_pane_t1

0x2466,	// (0x00027cc9) main_call6_pane

0x2466,	// (0x00027cc9) main_calllock_pane

0x23c2,	// (0x00027c25) call6_btn_grp_pane_ParamLimits

0x23c2,	// (0x00027c25) call6_btn_grp_pane

0x23dc,	// (0x00027c3f) call6_pane_g1_ParamLimits

0x23dc,	// (0x00027c3f) call6_pane_g1

0x23f2,	// (0x00027c55) popup_call6_1st_window_ParamLimits

0x23f2,	// (0x00027c55) popup_call6_1st_window

0x2403,	// (0x00027c66) popup_call6_2nd_window_ParamLimits

0x2403,	// (0x00027c66) popup_call6_2nd_window

0x2414,	// (0x00027c77) cell_call6_btn_pane_ParamLimits

0x2414,	// (0x00027c77) cell_call6_btn_pane

0x34bd,	// (0x00028d20) bg_popup_call2_in_pane_cp03

0xebbd,	// (0x00034420) popup_call6_1st_window_g1

0xebc5,	// (0x00034428) popup_call6_1st_window_g2

0xebcd,	// (0x00034430) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x00035626) popup_call6_1st_window_g

0xebd5,	// (0x00034438) popup_call6_1st_window_t1

0xebe4,	// (0x00034447) popup_call6_1st_window_t2

0xebf2,	// (0x00034455) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x0003562d) popup_call6_1st_window_t

0x34bd,	// (0x00028d20) bg_popup_call2_in_pane_cp04

0xec00,	// (0x00034463) popup_call6_2nd_window_g1

0xec08,	// (0x0003446b) popup_call6_2nd_window_g2

0xec10,	// (0x00034473) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x00035634) popup_call6_2nd_window_g

0xec18,	// (0x0003447b) popup_call6_2nd_window_t1

0xb480,	// (0x00030ce3) bg_button_pane_cp15

0xec27,	// (0x0003448a) cell_call6_btn_pane_g1

0xec30,	// (0x00034493) cell_call6_btn_pane_t1

0xa48c,	// (0x0002fcef) listscroll_wgtman_pane_ParamLimits

0xa48c,	// (0x0002fcef) listscroll_wgtman_pane

0xa4ad,	// (0x0002fd10) wgtman_btn_pane_ParamLimits

0xa4ad,	// (0x0002fd10) wgtman_btn_pane

0x4df3,	// (0x0002a656) aid_scroll_copy1

0xec3f,	// (0x000344a2) list_wgtman_pane

0xa4f0,	// (0x0002fd53) wgtman_btn_pane_g1_ParamLimits

0xa4f0,	// (0x0002fd53) wgtman_btn_pane_g1

0xa51c,	// (0x0002fd7f) wgtman_btn_pane_t1_ParamLimits

0xa51c,	// (0x0002fd7f) wgtman_btn_pane_t1

0xec49,	// (0x000344ac) wgtman_btn_pane_t2_ParamLimits

0xec49,	// (0x000344ac) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x0003563b) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x0003563b) wgtman_btn_pane_t

0xa559,	// (0x0002fdbc) listrow_wgtman_pane_ParamLimits

0xa559,	// (0x0002fdbc) listrow_wgtman_pane

0xa56c,	// (0x0002fdcf) listrow_wgtman_pane_g1

0xa579,	// (0x0002fddc) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x00035640) listrow_wgtman_pane_g

0xa597,	// (0x0002fdfa) listrow_wgtman_pane_t1

0xa5af,	// (0x0002fe12) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x00035645) listrow_wgtman_pane_t

0xa5d5,	// (0x0002fe38) wait_bar_pane_cp09

0xec60,	// (0x000344c3) main_calllock_btn_pane

0xec6a,	// (0x000344cd) main_calllock_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp17

0xec72,	// (0x000344d5) main_calllock_btn_pane_g1

0xec7b,	// (0x000344de) main_calllock_btn_pane_t1

0x2466,	// (0x00027cc9) main_dialer3_pane

0x2466,	// (0x00027cc9) main_fmrd2_pane

0x36aa,	// (0x00028f0d) main_fs_bigclock_unlock_btn_pane_g1

0xa5ef,	// (0x0002fe52) main_fs_bigclock_unlock_btn_pane_t1

0xa5fd,	// (0x0002fe60) area_fmrd2_info_pane_ParamLimits

0xa5fd,	// (0x0002fe60) area_fmrd2_info_pane

0xa60e,	// (0x0002fe71) area_fmrd2_visual_pane_ParamLimits

0xa60e,	// (0x0002fe71) area_fmrd2_visual_pane

0xa61c,	// (0x0002fe7f) fmrd2_indi_pane_ParamLimits

0xa61c,	// (0x0002fe7f) fmrd2_indi_pane

0xa629,	// (0x0002fe8c) area_fmrd2_visual_pane_g1

0xa631,	// (0x0002fe94) area_fmrd2_visual_pane_t1

0xa641,	// (0x0002fea4) area_fmrd2_visual_pane_t2

0xa651,	// (0x0002feb4) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x0003564f) area_fmrd2_visual_pane_t

0xa661,	// (0x0002fec4) area_fmrd2_info_pane_g1

0xa669,	// (0x0002fecc) area_fmrd2_info_pane_t1

0xa679,	// (0x0002fedc) area_fmrd2_info_pane_t2

0xa689,	// (0x0002feec) area_fmrd2_info_pane_t3

0xa699,	// (0x0002fefc) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x00035656) area_fmrd2_info_pane_t

0xa6a7,	// (0x0002ff0a) fmrd2_indi_pane_t1

0xa6b7,	// (0x0002ff1a) fmrd2_indi_pane_t2

0xa6c7,	// (0x0002ff2a) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x0003565f) fmrd2_indi_pane_t

0xdedb,	// (0x0003373e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdedb,	// (0x0003373e) list_single_fs_bigclock_indicator_pane_g5

0xdf8c,	// (0x000337ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdf8c,	// (0x000337ef) list_single_fs_bigclock_indicator_pane_t5

0x9dc2,	// (0x0002f625) aid_cell_bcale_month_pane_ParamLimits

0x9dc2,	// (0x0002f625) aid_cell_bcale_month_pane

0x9de0,	// (0x0002f643) bcale_month_pane_ParamLimits

0x9de0,	// (0x0002f643) bcale_month_pane

0x9e04,	// (0x0002f667) bcale_preview_pane_ParamLimits

0x9e04,	// (0x0002f667) bcale_preview_pane

0xea1d,	// (0x00034280) list_single_fs_bigclock_pane_t1_ParamLimits

0xea3c,	// (0x0003429f) list_single_fs_bigclock_pane_t2_ParamLimits

0xea3c,	// (0x0003429f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x000355da) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x000355da) list_single_fs_bigclock_pane_t

0xa5e7,	// (0x0002fe4a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x0003564a) main_fs_bigclock_unlock_btn_pane_g

0xa6d7,	// (0x0002ff3a) aid_dia3_key_size_ParamLimits

0xa6d7,	// (0x0002ff3a) aid_dia3_key_size

0xa6e6,	// (0x0002ff49) aid_dia3_listrow_size_ParamLimits

0xa6e6,	// (0x0002ff49) aid_dia3_listrow_size

0xa6fb,	// (0x0002ff5e) dia3_keypad_fun_pane_ParamLimits

0xa6fb,	// (0x0002ff5e) dia3_keypad_fun_pane

0xa717,	// (0x0002ff7a) dia3_keypad_num_pane_ParamLimits

0xa717,	// (0x0002ff7a) dia3_keypad_num_pane

0xa732,	// (0x0002ff95) dia3_listscroll_pane_ParamLimits

0xa732,	// (0x0002ff95) dia3_listscroll_pane

0xa745,	// (0x0002ffa8) dia3_numentry_pane_ParamLimits

0xa745,	// (0x0002ffa8) dia3_numentry_pane

0xec8a,	// (0x000344ed) dia3_list_pane

0xec95,	// (0x000344f8) scroll_pane_cp12

0x2466,	// (0x00027cc9) bg_dia3_numentry_pane

0xa75d,	// (0x0002ffc0) dia3_numentry_pane_t1

0xa76c,	// (0x0002ffcf) cell_dia3_key_num_pane

0xa774,	// (0x0002ffd7) cell_dia3_key0_fun_pane_ParamLimits

0xa774,	// (0x0002ffd7) cell_dia3_key0_fun_pane

0xa788,	// (0x0002ffeb) cell_dia3_key1_fun_pane_ParamLimits

0xa788,	// (0x0002ffeb) cell_dia3_key1_fun_pane

0xa7a0,	// (0x00030003) dia3_listrow_pane

0xdc2e,	// (0x00033491) bg_dia3_numentry_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp21

0xeca0,	// (0x00034503) cell_dia3_key_num_pane_t1

0xecae,	// (0x00034511) cell_dia3_key_num_pane_t2

0xecbd,	// (0x00034520) cell_dia3_key_num_pane_t3

0xeccc,	// (0x0003452f) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x00035666) cell_dia3_key_num_pane_t

0x2466,	// (0x00027cc9) bg_button_pane_cp19

0xa7b2,	// (0x00030015) cell_dia3_key0_fun_pane_g1

0x2466,	// (0x00027cc9) bg_button_pane_cp20

0xa7ba,	// (0x0003001d) cell_dia3_key1_fun_pane_g1

0xa7c2,	// (0x00030025) area_left_week_number_pane

0xa7ce,	// (0x00030031) area_top_day_name_pane

0xa7e1,	// (0x00030044) frame_month_view_pane

0xecdb,	// (0x0003453e) grid_month_view_pane

0xa7f4,	// (0x00030057) cell_top_day_name_pane_ParamLimits

0xa7f4,	// (0x00030057) cell_top_day_name_pane

0xa821,	// (0x00030084) cell_area_left_week_number_pane_ParamLimits

0xa821,	// (0x00030084) cell_area_left_week_number_pane

0xa835,	// (0x00030098) cell_month_view_pane_ParamLimits

0xa835,	// (0x00030098) cell_month_view_pane

0xece9,	// (0x0003454c) frm_month_g1

0xa862,	// (0x000300c5) frm_month_g2

0xa875,	// (0x000300d8) frm_month_g3

0xa888,	// (0x000300eb) frm_month_g4

0xa89b,	// (0x000300fe) frm_month_g5

0xa8ae,	// (0x00030111) frm_month_g6

0xa8c1,	// (0x00030124) frm_month_g7

0xecf6,	// (0x00034559) frm_month_g8

0xa8d4,	// (0x00030137) frm_month_g9

0xa8e4,	// (0x00030147) frm_month_g10

0xa8f4,	// (0x00030157) frm_month_g11

0xa904,	// (0x00030167) frm_month_g12

0xa916,	// (0x00030179) frm_month_g13

0xa928,	// (0x0003018b) frm_month_g14

0xa93c,	// (0x0003019f) frm_month_g15

0xa950,	// (0x000301b3) frm_month_g16

0x000f,

0xfe0c,	// (0x0003566f) frm_month_g

0xed03,	// (0x00034566) cell_top_day_name_pane_t1

0xa964,	// (0x000301c7) cell_area_left_week_number_pane_g1

0xa970,	// (0x000301d3) cell_area_left_week_number_pane_t1

0x2c05,	// (0x00028468) cell_month_view_pane_g1

0xa983,	// (0x000301e6) cell_month_view_pane_t1

0x2466,	// (0x00027cc9) main_fps_pane

0xe1bb,	// (0x00033a1e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1bb,	// (0x00033a1e) cmail_ddmenu_btn02_pane_cp1

0xe1d7,	// (0x00033a3a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe1d7,	// (0x00033a3a) cmail_ddmenu_btn02_pane_cp2

0xa0a5,	// (0x0002f908) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa0a5,	// (0x0002f908) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0003558d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0003558d) cmail_ddmenu_btn02_pane_g

0xa0c3,	// (0x0002f926) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa0c3,	// (0x0002f926) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x00035592) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x00035592) cmail_ddmenu_btn02_pane_t

0xa996,	// (0x000301f9) fps_text_pane_ParamLimits

0xa996,	// (0x000301f9) fps_text_pane

0xa9ad,	// (0x00030210) main_fps_pane_g1_ParamLimits

0xa9ad,	// (0x00030210) main_fps_pane_g1

0xa9c7,	// (0x0003022a) wait_bar_pane_cp010_ParamLimits

0xa9c7,	// (0x0003022a) wait_bar_pane_cp010

0xa9d8,	// (0x0003023b) fps_text_pane_t1_ParamLimits

0xa9d8,	// (0x0003023b) fps_text_pane_t1

0xce12,	// (0x00032675) cam4_image_uncrop_pane_g1

0xce1b,	// (0x0003267e) cam4_image_uncrop_pane_g2

0x7cb9,	// (0x0002d51c) cam4_image_uncrop_pane_g3

0x7cc2,	// (0x0002d525) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x000350d1) cam4_image_uncrop_pane_g

0xa7a0,	// (0x00030003) dia3_listrow_pane_ParamLimits

0x2466,	// (0x00027cc9) main_phob2_pane

0x9bf5,	// (0x0002f458) cell_tport_appsw_pane_cp02_ParamLimits

0x9bf5,	// (0x0002f458) cell_tport_appsw_pane_cp02

0x9c09,	// (0x0002f46c) cell_tport_appsw_pane_cp03_ParamLimits

0x9c09,	// (0x0002f46c) cell_tport_appsw_pane_cp03

0x2466,	// (0x00027cc9) phob2_contact_card_pane

0x2466,	// (0x00027cc9) phob2_listscroll_pane

0xed16,	// (0x00034579) phob2_list_pane

0xed1e,	// (0x00034581) scroll_pane_cp034

0xa9f0,	// (0x00030253) phob2_cc_data_pane_ParamLimits

0xa9f0,	// (0x00030253) phob2_cc_data_pane

0xaa0f,	// (0x00030272) phob2_cc_listscroll_pane_ParamLimits

0xaa0f,	// (0x00030272) phob2_cc_listscroll_pane

0xa559,	// (0x0002fdbc) list_double_large_graphic_phob2_pane_ParamLimits

0xa559,	// (0x0002fdbc) list_double_large_graphic_phob2_pane

0xaa2d,	// (0x00030290) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaa2d,	// (0x00030290) list_double_large_graphic_phob2_pane_g1

0xaa3a,	// (0x0003029d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaa3a,	// (0x0003029d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x00035690) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x00035690) list_double_large_graphic_phob2_pane_g

0xaa60,	// (0x000302c3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaa60,	// (0x000302c3) list_double_large_graphic_phob2_pane_t1

0xaa75,	// (0x000302d8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaa75,	// (0x000302d8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x00035699) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x00035699) list_double_large_graphic_phob2_pane_t

0x2466,	// (0x00027cc9) list_highlight_pane_cp024

0xed26,	// (0x00034589) phob2_cc_button_pane

0xaa8a,	// (0x000302ed) phob2_cc_data_pane_g1_ParamLimits

0xaa8a,	// (0x000302ed) phob2_cc_data_pane_g1

0xaaa1,	// (0x00030304) phob2_cc_data_pane_g2_ParamLimits

0xaaa1,	// (0x00030304) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x0003569e) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x0003569e) phob2_cc_data_pane_g

0xaab3,	// (0x00030316) phob2_cc_data_pane_t1_ParamLimits

0xaab3,	// (0x00030316) phob2_cc_data_pane_t1

0xaacb,	// (0x0003032e) phob2_cc_data_pane_t2_ParamLimits

0xaacb,	// (0x0003032e) phob2_cc_data_pane_t2

0xaae3,	// (0x00030346) phob2_cc_data_pane_t3_ParamLimits

0xaae3,	// (0x00030346) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x000356a3) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x000356a3) phob2_cc_data_pane_t

0xed2e,	// (0x00034591) phob2_cc_list_pane_ParamLimits

0xed2e,	// (0x00034591) phob2_cc_list_pane

0xd2c5,	// (0x00032b28) scroll_pane_cp035_ParamLimits

0xd2c5,	// (0x00032b28) scroll_pane_cp035

0x2b9e,	// (0x00028401) bg_button_pane_cp033

0xed3a,	// (0x0003459d) phob2_cc_button_pane_g1

0xed46,	// (0x000345a9) phob2_cc_button_pane_t1

0xed5b,	// (0x000345be) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x000356aa) phob2_cc_button_pane_t

0xaafb,	// (0x0003035e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaafb,	// (0x0003035e) list_double_large_graphic_phob2_cc_pane

0xab2d,	// (0x00030390) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xab2d,	// (0x00030390) list_double_large_graphic_phob2_cc_pane_g1

0xed6d,	// (0x000345d0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xed6d,	// (0x000345d0) list_double_large_graphic_phob2_cc_pane_g2

0xab39,	// (0x0003039c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xab39,	// (0x0003039c) list_double_large_graphic_phob2_cc_pane_g3

0xab45,	// (0x000303a8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xab45,	// (0x000303a8) list_double_large_graphic_phob2_cc_pane_g4

0xab51,	// (0x000303b4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xab51,	// (0x000303b4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x000356af) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x000356af) list_double_large_graphic_phob2_cc_pane_g

0xab5d,	// (0x000303c0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xab5d,	// (0x000303c0) list_double_large_graphic_phob2_cc_pane_t1

0xab86,	// (0x000303e9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xab86,	// (0x000303e9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x000356ba) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x000356ba) list_double_large_graphic_phob2_cc_pane_t

0xed79,	// (0x000345dc) list_highlight_pane_cp025_ParamLimits

0xed79,	// (0x000345dc) list_highlight_pane_cp025

0x2b9e,	// (0x00028401) bg_button_pane_cp033_ParamLimits

0xed3a,	// (0x0003459d) phob2_cc_button_pane_g1_ParamLimits

0xed46,	// (0x000345a9) phob2_cc_button_pane_t1_ParamLimits

0xed5b,	// (0x000345be) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x000356aa) phob2_cc_button_pane_t_ParamLimits

0x24a9,	// (0x00027d0c) popup_wgtman_window

0xd071,	// (0x000328d4) scroll_pane_cp038

0xa4d2,	// (0x0002fd35) wgtman_btn_pane_cp_01_ParamLimits

0xa4d2,	// (0x0002fd35) wgtman_btn_pane_cp_01

0xed87,	// (0x000345ea) wgtman_content_pane

0xed90,	// (0x000345f3) wgtman_heading_pane

0x2466,	// (0x00027cc9) bg_heading_pane_cp02

0xed99,	// (0x000345fc) wgtman_heading_pane_g1

0xeda1,	// (0x00034604) wgtman_heading_pane_t1

0xedaf,	// (0x00034612) scroll_pane_cp036

0xedb7,	// (0x0003461a) wgtman_list_pane

0xe077,	// (0x000338da) wgtman_list_pane_t1_ParamLimits

0xe077,	// (0x000338da) wgtman_list_pane_t1

0xcdfe,	// (0x00032661) cam4_grid_pane

0x84c4,	// (0x0002dd27) bg_button_pane_cp015_ParamLimits

0x84d5,	// (0x0002dd38) bg_button_pane_cp016_ParamLimits

0x84e1,	// (0x0002dd44) bg_button_pane_cp017_ParamLimits

0x8535,	// (0x0002dd98) popup_vitu2_query_window_g3_ParamLimits

0x8535,	// (0x0002dd98) popup_vitu2_query_window_g3

0x85d6,	// (0x0002de39) popup_vitu2_query_window_t6_ParamLimits

0x85d6,	// (0x0002de39) popup_vitu2_query_window_t6

0x8601,	// (0x0002de64) popup_vitu2_query_window_t7_ParamLimits

0x8601,	// (0x0002de64) popup_vitu2_query_window_t7

0xce12,	// (0x00032675) cam4_grid_pane_g1

0xce1b,	// (0x0003267e) cam4_grid_pane_g2

0xedbf,	// (0x00034622) cam4_grid_pane_g3

0xedc8,	// (0x0003462b) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x000356bf) cam4_grid_pane_g

0x37cb,	// (0x0002902e) aid_placing_vt_slider_lsc_ParamLimits

0x3b18,	// (0x0002937b) vidtel_button_pane_ParamLimits

0x3b18,	// (0x0002937b) vidtel_button_pane

0x2466,	// (0x00027cc9) bg_button_pane_cp034

0xedd3,	// (0x00034636) vidtel_button_pane_g1

0xeddb,	// (0x0003463e) vidtel_button_pane_t1

0xd1d0,	// (0x00032a33) aid_size_vtel_slider_touch

0xd2c5,	// (0x00032b28) scroll_pane_cp039

0x9240,	// (0x0002eaa3) ncim_query_button_pane_cp01_ParamLimits

0x925f,	// (0x0002eac2) ncimui_query_pane_g1_ParamLimits

0x2b9e,	// (0x00028401) input_focus_pane_cp012_ParamLimits

0xdc74,	// (0x000334d7) ncim_query_entry_pane_t1_ParamLimits

0xd2c5,	// (0x00032b28) scroll_pane_cp039_ParamLimits

0x50a3,	// (0x0002a906) navi_pane_bcale_mc_g1

0x50ab,	// (0x0002a90e) navi_pane_bcale_mc_t1

0xe20b,	// (0x00033a6e) main_sp_fs_email_pane_g1

0xe217,	// (0x00033a7a) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x000354c2) main_sp_fs_email_pane_g

0xe6a8,	// (0x00033f0b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe6a8,	// (0x00033f0b) list_single_cale_mrui_row_pane_g3

0xa0e3,	// (0x0002f946) list_single_recal_day_pane_g5_event_pane

0xe887,	// (0x000340ea) list_single_recal_day_pane_g7

0xedf1,	// (0x00034654) list_recal_day_event_pane_cp01

0xedfa,	// (0x0003465d) list_recal_vselct_arw_lo_pane_cp01

0xee02,	// (0x00034665) list_recal_vselct_arw_up_pane_cp01

0xee0a,	// (0x0003466d) list_recal_vselct_pane_cp01

0xd22e,	// (0x00032a91) list_recal_day_event_pane_cp01_g1

0xee14,	// (0x00034677) list_recal_day_event_pane_cp01_t1

0xe88f,	// (0x000340f2) list_single_recal_day_pane_t1_ParamLimits

0xe8a1,	// (0x00034104) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x000355a2) list_single_recal_day_pane_t_ParamLimits

0x2b7c,	// (0x000283df) bg_notes_pane_ParamLimits

0x2d2b,	// (0x0002858e) list_notes_pane_ParamLimits

0x2d39,	// (0x0002859c) scroll_pane_cp06_ParamLimits

0x2d61,	// (0x000285c4) main_notes_pane_ParamLimits

0x2b9e,	// (0x00028401) main_welc_pane

0xabde,	// (0x00030441) main_welc_body_pane_ParamLimits

0xabde,	// (0x00030441) main_welc_body_pane

0xabfb,	// (0x0003045e) main_welc_opti_pane_ParamLimits

0xabfb,	// (0x0003045e) main_welc_opti_pane

0xac71,	// (0x000304d4) main_welc_pane_t1_ParamLimits

0xac71,	// (0x000304d4) main_welc_pane_t1

0xae54,	// (0x000306b7) main_welc_body_row_pane_ParamLimits

0xae54,	// (0x000306b7) main_welc_body_row_pane

0x2bf7,	// (0x0002845a) main_welc_opti_row_pane_ParamLimits

0x2bf7,	// (0x0002845a) main_welc_opti_row_pane

0xee32,	// (0x00034695) main_welc_opti_row_pane_g1

0xae69,	// (0x000306cc) main_welc_opti_row_pane_t1

0xee3a,	// (0x0003469d) main_welc_body_row_pane_t1

0xeafd,	// (0x00034360) popup_notif_wgt_heading_pane

0xeb17,	// (0x0003437a) aid_size_list_notif_wgt_del_ParamLimits

0xeb24,	// (0x00034387) list_notif_wgt_row_pane_g1_ParamLimits

0xeb30,	// (0x00034393) list_notif_wgt_row_pane_g2_ParamLimits

0xeb3f,	// (0x000343a2) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x00035609) list_notif_wgt_row_pane_g_ParamLimits

0xeb4c,	// (0x000343af) list_notif_wgt_row_pane_t1_ParamLimits

0xeb62,	// (0x000343c5) list_notif_wgt_row_pane_t2_ParamLimits

0xeb74,	// (0x000343d7) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x00035610) list_notif_wgt_row_pane_t_ParamLimits

0xa56c,	// (0x0002fdcf) listrow_wgtman_pane_g1_ParamLimits

0xa579,	// (0x0002fddc) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x00035640) listrow_wgtman_pane_g_ParamLimits

0xa597,	// (0x0002fdfa) listrow_wgtman_pane_t1_ParamLimits

0xa5af,	// (0x0002fe12) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x00035645) listrow_wgtman_pane_t_ParamLimits

0xa5d5,	// (0x0002fe38) wait_bar_pane_cp09_ParamLimits

0x2466,	// (0x00027cc9) bg_popup_heading_pane_cp02

0xee49,	// (0x000346ac) popup_notif_wgt_heading_pane_g1

0xee51,	// (0x000346b4) popup_notif_wgt_heading_pane_t1

0x2466,	// (0x00027cc9) main_vids_pane

0x2466,	// (0x00027cc9) vids_listscroll_pane

0xae78,	// (0x000306db) scroll_pane_cp040

0x2466,	// (0x00027cc9) vids_list_pane

0xae83,	// (0x000306e6) vids_list_double_pane_ParamLimits

0xae83,	// (0x000306e6) vids_list_double_pane

0xae94,	// (0x000306f7) vids_list_double_pane_g1

0xae9d,	// (0x00030700) vids_list_double_pane_t1

0xaeac,	// (0x0003070f) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x000356de) vids_list_double_pane_t

0xb472,	// (0x00030cd5) main_ncimui_pane_ParamLimits

0x9076,	// (0x0002e8d9) main_ncimui_pane_g1_ParamLimits

0x9082,	// (0x0002e8e5) main_ncimui_pane_g2_ParamLimits

0x9082,	// (0x0002e8e5) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x000353c3) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x000353c3) main_ncimui_pane_g

0xac16,	// (0x00030479) main_welc_pane_g1_ParamLimits

0xac16,	// (0x00030479) main_welc_pane_g1

0xac2b,	// (0x0003048e) main_welc_pane_g2_ParamLimits

0xac2b,	// (0x0003048e) main_welc_pane_g2

0x0003,

0xfe65,	// (0x000356c8) main_welc_pane_g_ParamLimits

0xfe65,	// (0x000356c8) main_welc_pane_g

0x2d11,	// (0x00028574) listscroll_mce_pane_ParamLimits

0x523a,	// (0x0002aa9d) wait_bar_pane_cp10

0xbcf3,	// (0x00031556) main_cale_day_pane_ParamLimits

0xbcf3,	// (0x00031556) main_cale_week_pane_ParamLimits

0x2b7c,	// (0x000283df) main_messa_pane_ParamLimits

0x7725,	// (0x0002cf88) main_clock2_btn_pane_ParamLimits

0x7725,	// (0x0002cf88) main_clock2_btn_pane

0xc650,	// (0x00031eb3) main_clock2_btn_pane_cp01_ParamLimits

0xc650,	// (0x00031eb3) main_clock2_btn_pane_cp01

0xe634,	// (0x00033e97) list_cale_mrui_pane_ParamLimits

0xebaa,	// (0x0003440d) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x00035617) main_cf0_pane_g

0xa7c2,	// (0x00030025) area_left_week_number_pane_ParamLimits

0xa7ce,	// (0x00030031) area_top_day_name_pane_ParamLimits

0xa7e1,	// (0x00030044) frame_month_view_pane_ParamLimits

0xecdb,	// (0x0003453e) grid_month_view_pane_ParamLimits

0xece9,	// (0x0003454c) frm_month_g1_ParamLimits

0xa862,	// (0x000300c5) frm_month_g2_ParamLimits

0xa875,	// (0x000300d8) frm_month_g3_ParamLimits

0xa888,	// (0x000300eb) frm_month_g4_ParamLimits

0xa89b,	// (0x000300fe) frm_month_g5_ParamLimits

0xa8ae,	// (0x00030111) frm_month_g6_ParamLimits

0xa8c1,	// (0x00030124) frm_month_g7_ParamLimits

0xecf6,	// (0x00034559) frm_month_g8_ParamLimits

0xa8d4,	// (0x00030137) frm_month_g9_ParamLimits

0xa8e4,	// (0x00030147) frm_month_g10_ParamLimits

0xa8f4,	// (0x00030157) frm_month_g11_ParamLimits

0xa904,	// (0x00030167) frm_month_g12_ParamLimits

0xa916,	// (0x00030179) frm_month_g13_ParamLimits

0xa928,	// (0x0003018b) frm_month_g14_ParamLimits

0xa93c,	// (0x0003019f) frm_month_g15_ParamLimits

0xa950,	// (0x000301b3) frm_month_g16_ParamLimits

0xfe0c,	// (0x0003566f) frm_month_g_ParamLimits

0xed03,	// (0x00034566) cell_top_day_name_pane_t1_ParamLimits

0xa964,	// (0x000301c7) cell_area_left_week_number_pane_g1_ParamLimits

0xa970,	// (0x000301d3) cell_area_left_week_number_pane_t1_ParamLimits

0x2c05,	// (0x00028468) cell_month_view_pane_g1_ParamLimits

0xa983,	// (0x000301e6) cell_month_view_pane_t1_ParamLimits

0x2b74,	// (0x000283d7) main_clock2_btn_pane_g1

0xee5f,	// (0x000346c2) main_clock2_btn_pane_t1

0x2b9e,	// (0x00028401) listscroll_cmail_pane_ParamLimits

0xe20b,	// (0x00033a6e) main_sp_fs_email_pane_g1_ParamLimits

0xe217,	// (0x00033a7a) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x000354c2) main_sp_fs_email_pane_g_ParamLimits

0xe7f7,	// (0x0003405a) list_recal_day_pane_ParamLimits

0xe808,	// (0x0003406b) mian_recal_day_pane_t1

0x9a98,	// (0x0002f2fb) list_single_dyc_row_text_pane_t4_ParamLimits

0x9a98,	// (0x0002f2fb) list_single_dyc_row_text_pane_t4

0x9ae1,	// (0x0002f344) list_single_dyc_row_text_pane_t5_ParamLimits

0x9ae1,	// (0x0002f344) list_single_dyc_row_text_pane_t5

0xe2b9,	// (0x00033b1c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe2b9,	// (0x00033b1c) list_single_dyc_row_text_pane_t6

0x487a,	// (0x0002a0dd) aid_mgn_list_cale_time_pane

0xb472,	// (0x00030cd5) main_gallery2_pane_ParamLimits

0xc666,	// (0x00031ec9) main_clock2_pane_cp01_t1

0xc674,	// (0x00031ed7) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x00034fa8) main_clock2_pane_cp01_t

0x3188,	// (0x000289eb) cale_week_scroll_pane_g16_ParamLimits

0x3188,	// (0x000289eb) cale_week_scroll_pane_g16

0x34bd,	// (0x00028d20) vorec_slider_pane

0xeddb,	// (0x0003463e) vidtel_button_pane_t1_ParamLimits

0xa149,	// (0x0002f9ac) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa149,	// (0x0002f9ac) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa15a,	// (0x0002f9bd) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa15a,	// (0x0002f9bd) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x000355c5) main_fs_bigclock_clock_pane_g_ParamLimits

0xa16d,	// (0x0002f9d0) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa183,	// (0x0002f9e6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x000355ce) main_fs_bigclock_clock_pane_t_ParamLimits

0x7001,	// (0x0002c864) main_mup3_lyrics_pane_ParamLimits

0x7001,	// (0x0002c864) main_mup3_lyrics_pane

0xaebc,	// (0x0003071f) main_mup3_lyrics_pane_t1_ParamLimits

0xaebc,	// (0x0003071f) main_mup3_lyrics_pane_t1

0xca93,	// (0x000322f6) aid_main_mp4_pane_t1_area

0xca9d,	// (0x00032300) aid_main_mp4_pane_t2_area

0xcb49,	// (0x000323ac) main_mp4_pane_g7_ParamLimits

0xcb49,	// (0x000323ac) main_mp4_pane_g7

0xcb55,	// (0x000323b8) main_mp4_pane_g8_ParamLimits

0xcb55,	// (0x000323b8) main_mp4_pane_g8

0x7c19,	// (0x0002d47c) aid_call6_pane_g1_size

0xab16,	// (0x00030379) list_double_large_graphic_phob2_other_pane_ParamLimits

0xab16,	// (0x00030379) list_double_large_graphic_phob2_other_pane

0x4e2f,	// (0x0002a692) list_double_large_graphic_phob2_other_pane_g1

0x2466,	// (0x00027cc9) list_highlight_pane_cp026

0x2b9e,	// (0x00028401) main_welc_pane_ParamLimits

0x98d7,	// (0x0002f13a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x98d7,	// (0x0002f13a) main_sp_fs_ctrlbar_pane_g3

0x98f1,	// (0x0002f154) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x98f1,	// (0x0002f154) main_sp_fs_ctrlbar_pane_g4

0x9925,	// (0x0002f188) toolbar2_fixed_button_pane_cp01

0x9930,	// (0x0002f193) toolbar2_fixed_button_pane_cp02

0x993d,	// (0x0002f1a0) toolbar2_fixed_button_pane_cp03

0xabc2,	// (0x00030425) list_welc_entry_pane_ParamLimits

0xabc2,	// (0x00030425) list_welc_entry_pane

0xac40,	// (0x000304a3) main_welc_pane_g3_ParamLimits

0xac40,	// (0x000304a3) main_welc_pane_g3

0xac8f,	// (0x000304f2) main_welc_pane_t2_ParamLimits

0xac8f,	// (0x000304f2) main_welc_pane_t2

0xaca9,	// (0x0003050c) main_welc_pane_t3_ParamLimits

0xaca9,	// (0x0003050c) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x000356d1) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x000356d1) main_welc_pane_t

0xadd8,	// (0x0003063b) welc_button_pane_ParamLimits

0xadd8,	// (0x0003063b) welc_button_pane

0xae40,	// (0x000306a3) welc_service_logo_pane_ParamLimits

0xae40,	// (0x000306a3) welc_service_logo_pane

0xaed8,	// (0x0003073b) list_single_welc_entry_pane_ParamLimits

0xaed8,	// (0x0003073b) list_single_welc_entry_pane

0xaee9,	// (0x0003074c) list_single_welc_entry_pane_g1

0xaef1,	// (0x00030754) list_single_welc_entry_pane_t1

0xaeff,	// (0x00030762) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x000356e3) list_single_welc_entry_pane_t

0x2466,	// (0x00027cc9) bg_button_pane_cp035

0xee6d,	// (0x000346d0) welc_button_pane_t1

0xee7b,	// (0x000346de) welc_service_logo_pane_g1

0xee84,	// (0x000346e7) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x000356e8) welc_service_logo_pane_g

0xb480,	// (0x00030ce3) main_int_radio_pane

0xdb12,	// (0x00033375) list_single_fs_dyc_pane_g1

0xaa46,	// (0x000302a9) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xaa46,	// (0x000302a9) list_double_large_graphic_phob2_pane_g3

0xaa52,	// (0x000302b5) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xaa52,	// (0x000302b5) list_double_large_graphic_phob2_pane_g4

0xaf0d,	// (0x00030770) main_int_radio1_pane_ParamLimits

0xaf0d,	// (0x00030770) main_int_radio1_pane

0xee8d,	// (0x000346f0) find_pane_cp02

0xaf2a,	// (0x0003078d) input_focus_pane_cp12_ParamLimits

0xaf2a,	// (0x0003078d) input_focus_pane_cp12

0xaf3a,	// (0x0003079d) input_focus_pane_cp13_ParamLimits

0xaf3a,	// (0x0003079d) input_focus_pane_cp13

0xaf4e,	// (0x000307b1) input_focus_pane_cp14_ParamLimits

0xaf4e,	// (0x000307b1) input_focus_pane_cp14

0xee96,	// (0x000346f9) int_radio1_listscroll_pane

0xaf62,	// (0x000307c5) main_int_radio1_pane_g1_ParamLimits

0xaf62,	// (0x000307c5) main_int_radio1_pane_g1

0xaf7a,	// (0x000307dd) main_int_radio1_pane_t1_ParamLimits

0xaf7a,	// (0x000307dd) main_int_radio1_pane_t1

0xaf95,	// (0x000307f8) main_int_radio1_pane_t2_ParamLimits

0xaf95,	// (0x000307f8) main_int_radio1_pane_t2

0xafb0,	// (0x00030813) main_int_radio1_pane_t3_ParamLimits

0xafb0,	// (0x00030813) main_int_radio1_pane_t3

0xafcb,	// (0x0003082e) main_int_radio1_pane_t4_ParamLimits

0xafcb,	// (0x0003082e) main_int_radio1_pane_t4

0xeea0,	// (0x00034703) main_int_radio1_pane_t5_ParamLimits

0xeea0,	// (0x00034703) main_int_radio1_pane_t5

0xafdd,	// (0x00030840) main_int_radio1_pane_t6_ParamLimits

0xafdd,	// (0x00030840) main_int_radio1_pane_t6

0xaff2,	// (0x00030855) main_int_radio1_pane_t7_ParamLimits

0xaff2,	// (0x00030855) main_int_radio1_pane_t7

0xb007,	// (0x0003086a) main_int_radio1_pane_t8_ParamLimits

0xb007,	// (0x0003086a) main_int_radio1_pane_t8

0xb026,	// (0x00030889) main_int_radio1_pane_t9_ParamLimits

0xb026,	// (0x00030889) main_int_radio1_pane_t9

0xb038,	// (0x0003089b) main_int_radio1_pane_t10_ParamLimits

0xb038,	// (0x0003089b) main_int_radio1_pane_t10

0xb05e,	// (0x000308c1) main_int_radio1_pane_t11_ParamLimits

0xb05e,	// (0x000308c1) main_int_radio1_pane_t11

0xb084,	// (0x000308e7) main_int_radio1_pane_t12_ParamLimits

0xb084,	// (0x000308e7) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x000356ed) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x000356ed) main_int_radio1_pane_t

0xeeb2,	// (0x00034715) int_radio_list_pane

0xed1e,	// (0x00034581) scroll_pane_cp037

0xeeba,	// (0x0003471d) list_double_large_graphic_int_radio_pane_ParamLimits

0xeeba,	// (0x0003471d) list_double_large_graphic_int_radio_pane

0xeed3,	// (0x00034736) list_double_large_graphic_int_radio_pane_g1

0xeedc,	// (0x0003473f) list_double_large_graphic_int_radio_pane_t1

0xeeea,	// (0x0003474d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x00035706) list_double_large_graphic_int_radio_pane_t

0x2466,	// (0x00027cc9) list_highlight_pane_cp027

0xee22,	// (0x00034685) main_button_pane_4

0xac50,	// (0x000304b3) main_welc_pane_g4_ParamLimits

0xac50,	// (0x000304b3) main_welc_pane_g4

0xacc1,	// (0x00030524) main_welc_pane_t4_ParamLimits

0xacc1,	// (0x00030524) main_welc_pane_t4

0xacd8,	// (0x0003053b) main_welc_pane_t5_ParamLimits

0xacd8,	// (0x0003053b) main_welc_pane_t5

0xad15,	// (0x00030578) main_welc_pane_t6_ParamLimits

0xad15,	// (0x00030578) main_welc_pane_t6

0xadef,	// (0x00030652) welc_button_pane_2_ParamLimits

0xadef,	// (0x00030652) welc_button_pane_2

0xae0b,	// (0x0003066e) welc_button_pane_3_ParamLimits

0xae0b,	// (0x0003066e) welc_button_pane_3

0xee2a,	// (0x0003468d) welc_button_pane_4

0xae2a,	// (0x0003068d) welc_button_pane_5_ParamLimits

0xae2a,	// (0x0003068d) welc_button_pane_5

0x0ff9,	// (0x0002685c) main_popup_welc_pane

0xef07,	// (0x0003476a) main_welc_sk_g3

0xef11,	// (0x00034774) main_welc_sk_g4

0xef1b,	// (0x0003477e) main_welc_sk_t3

0xef2b,	// (0x0003478e) main_welc_sk_t4

0xef3b,	// (0x0003479e) popup_welc_pane_t4

0xef49,	// (0x000347ac) popup_welc_pane_t5

0xef59,	// (0x000347bc) popup_welc_pane_t6

0xb480,	// (0x00030ce3) main_acti_pane

0x2466,	// (0x00027cc9) main_sso_pane

0xb096,	// (0x000308f9) sso_body_pane_ParamLimits

0xb096,	// (0x000308f9) sso_body_pane

0xb0aa,	// (0x0003090d) sso_logo_pane_ParamLimits

0xb0aa,	// (0x0003090d) sso_logo_pane

0xb0d6,	// (0x00030939) sso_sk_pane_ParamLimits

0xb0d6,	// (0x00030939) sso_sk_pane

0x36aa,	// (0x00028f0d) main_sso_logo_pane_g1

0xb0e8,	// (0x0003094b) sso_sk_pane_t1_ParamLimits

0xb0e8,	// (0x0003094b) sso_sk_pane_t1

0xb102,	// (0x00030965) sso_sk_pane_t2_ParamLimits

0xb102,	// (0x00030965) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x0003570b) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x0003570b) sso_sk_pane_t

0xef97,	// (0x000347fa) aid_sso_gap

0xefa0,	// (0x00034803) aid_sso_txt1

0xefaa,	// (0x0003480d) aid_sso_txt2

0xefb4,	// (0x00034817) aid_sso_txt3

0x0002,

0xfead,	// (0x00035710) aid_sso_txt

0xefbe,	// (0x00034821) aid_sso_widget

0xb16c,	// (0x000309cf) sso_btn_pane_ParamLimits

0xb16c,	// (0x000309cf) sso_btn_pane

0xb1f4,	// (0x00030a57) sso_option_pane_ParamLimits

0xb1f4,	// (0x00030a57) sso_option_pane

0xb274,	// (0x00030ad7) sso_query_pane_ParamLimits

0xb274,	// (0x00030ad7) sso_query_pane

0xb2ca,	// (0x00030b2d) sso_query_pane_cp01_ParamLimits

0xb2ca,	// (0x00030b2d) sso_query_pane_cp01

0xb324,	// (0x00030b87) sso_t_hdr_pane_ParamLimits

0xb324,	// (0x00030b87) sso_t_hdr_pane

0xb348,	// (0x00030bab) sso_t_nml_pane_ParamLimits

0xb348,	// (0x00030bab) sso_t_nml_pane

0xefb4,	// (0x00034817) sso_t_sub_pane

0xb0b7,	// (0x0003091a) sso_popup_window_ParamLimits

0xb0b7,	// (0x0003091a) sso_popup_window

0xb118,	// (0x0003097b) sso_apps_pane_ParamLimits

0xb118,	// (0x0003097b) sso_apps_pane

0xb142,	// (0x000309a5) sso_body_pane_g1

0xb14c,	// (0x000309af) sso_body_pane_t1

0xb15c,	// (0x000309bf) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x00035717) sso_body_pane_t

0xb1be,	// (0x00030a21) sso_btn_pane_cp01_ParamLimits

0xb1be,	// (0x00030a21) sso_btn_pane_cp01

0xb248,	// (0x00030aab) sso_prog_pane_ParamLimits

0xb248,	// (0x00030aab) sso_prog_pane

0xefc8,	// (0x0003482b) sso_t_hdr_pane_t1_ParamLimits

0xefc8,	// (0x0003482b) sso_t_hdr_pane_t1

0xefdb,	// (0x0003483e) input_focus_pane_cp10_ParamLimits

0xefdb,	// (0x0003483e) input_focus_pane_cp10

0xeff1,	// (0x00034854) sso_query_pane_t1_ParamLimits

0xeff1,	// (0x00034854) sso_query_pane_t1

0xf004,	// (0x00034867) sso_query_pane_t2_ParamLimits

0xf004,	// (0x00034867) sso_query_pane_t2

0xf01d,	// (0x00034880) sso_query_pane_t3_ParamLimits

0xf01d,	// (0x00034880) sso_query_pane_t3

0xf047,	// (0x000348aa) sso_query_pane_t4_ParamLimits

0xf047,	// (0x000348aa) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x0003571c) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x0003571c) sso_query_pane_t

0x2466,	// (0x00027cc9) bg_button_pane_cp22

0xeef8,	// (0x0003475b) sso_btn_pane_t1

0xb39e,	// (0x00030c01) sso_t_nml_pane_t1_ParamLimits

0xb39e,	// (0x00030c01) sso_t_nml_pane_t1

0x0018,	// (0x0002587b) sso_option_row_pane_ParamLimits

0x0018,	// (0x0002587b) sso_option_row_pane

0x0025,	// (0x00025888) sso_t_sub_pane_t1_ParamLimits

0x0025,	// (0x00025888) sso_t_sub_pane_t1

0x2b9e,	// (0x00028401) bg_popup_window_pane_cp11_ParamLimits

0x2b9e,	// (0x00028401) bg_popup_window_pane_cp11

0x0038,	// (0x0002589b) popup_sk_window_cp01_ParamLimits

0x0038,	// (0x0002589b) popup_sk_window_cp01

0x0045,	// (0x000258a8) sso_popup_body_pane_ParamLimits

0x0045,	// (0x000258a8) sso_popup_body_pane

0x0052,	// (0x000258b5) scroll_pane_cp21_ParamLimits

0x0052,	// (0x000258b5) scroll_pane_cp21

0x005f,	// (0x000258c2) sso_popup_body_t_pane_ParamLimits

0x005f,	// (0x000258c2) sso_popup_body_t_pane

0x006c,	// (0x000258cf) sso_popup_body_t_hdr_pane_ParamLimits

0x006c,	// (0x000258cf) sso_popup_body_t_hdr_pane

0x007a,	// (0x000258dd) sso_popup_body_t_nml_pane_ParamLimits

0x007a,	// (0x000258dd) sso_popup_body_t_nml_pane

0x0095,	// (0x000258f8) sso_popup_body_t_sub_pane_ParamLimits

0x0095,	// (0x000258f8) sso_popup_body_t_sub_pane

0x00b8,	// (0x0002591b) sso_popup_body_t_hdr_pane_t1

0xb3b9,	// (0x00030c1c) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb3b9,	// (0x00030c1c) sso_popup_body_t_nml_pane_t1

0x010c,	// (0x0002596f) sso_popup_body_t_sub_pane_t1_ParamLimits

0x010c,	// (0x0002596f) sso_popup_body_t_sub_pane_t1

0x36aa,	// (0x00028f0d) sso_prog_pane_g1

0xb3f3,	// (0x00030c56) sso_apps_pane_comp1_ParamLimits

0xb3f3,	// (0x00030c56) sso_apps_pane_comp1

0x014d,	// (0x000259b0) sso_apps_pane_comp1_g1

0x0155,	// (0x000259b8) sso_apps_pane_comp1_t1

0x0163,	// (0x000259c6) sso_option_row_pane_g1

0x016b,	// (0x000259ce) sso_option_row_pane_t1

0xabaf,	// (0x00030412) bg_welc_area_ParamLimits

0xabaf,	// (0x00030412) bg_welc_area

0xad53,	// (0x000305b6) sso_t_hdr_pane_a_t1_ParamLimits

0xad53,	// (0x000305b6) sso_t_hdr_pane_a_t1

0xad6e,	// (0x000305d1) sso_t_nml_pane_a_t1_ParamLimits

0xad6e,	// (0x000305d1) sso_t_nml_pane_a_t1

0xad9d,	// (0x00030600) sso_t_sub_pane_a_t1_ParamLimits

0xad9d,	// (0x00030600) sso_t_sub_pane_a_t1

0xeef8,	// (0x0003475b) sso_btn_pane_t1_copy1

0x2466,	// (0x00027cc9) welc_button_pane_2_comp1

0xef67,	// (0x000347ca) sso_t_hdr_pane_p_t1

0xef77,	// (0x000347da) sso_t_nml_pane_p_t1

0xef87,	// (0x000347ea) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
