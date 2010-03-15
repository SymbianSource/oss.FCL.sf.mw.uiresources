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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000ab74e };

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
0xfdf0,	// (0x000ab53e) Screen

0xfdfc,	// (0x000ab54a) application_window

0xfe50,	// (0x000ab59e) area_bottom_pane_ParamLimits

0xfe50,	// (0x000ab59e) area_bottom_pane

0xfe89,	// (0x000ab5d7) area_top_pane_ParamLimits

0xfe89,	// (0x000ab5d7) area_top_pane

0x9623,	// (0x000b4d71) call_video_uplink_pane_ParamLimits

0x9623,	// (0x000b4d71) call_video_uplink_pane

0xff17,	// (0x000ab665) main_pane_ParamLimits

0xff17,	// (0x000ab665) main_pane

0xc880,	// (0x000b7fce) context_pane

0x3ab7,	// (0x000af205) navi_pane

0x3ae7,	// (0x000af235) popup_cale_events_window_ParamLimits

0x3ae7,	// (0x000af235) popup_cale_events_window

0xc893,	// (0x000b7fe1) popup_mup_playback_window

0x3aff,	// (0x000af24d) signal_pane

0xa7cd,	// (0x000b5f1b) main_browser_pane

0xb2e6,	// (0x000b6a34) main_burst_pane

0x37b9,	// (0x000aef07) main_calc_pane

0xc823,	// (0x000b7f71) main_cale_day_pane

0x0561,	// (0x000abcaf) main_cale_month_pane

0xc823,	// (0x000b7f71) main_cale_week_pane

0xb2e6,	// (0x000b6a34) main_call_pane

0x9a62,	// (0x000b51b0) main_call_poc_pane

0xb2e6,	// (0x000b6a34) main_camera_pane

0xb2e6,	// (0x000b6a34) main_chi_dic_pane

0xb188,	// (0x000b68d6) main_clock_pane

0x9a62,	// (0x000b51b0) main_fmradio_pane

0xb2e6,	// (0x000b6a34) main_graph_messa_pane

0x9a62,	// (0x000b51b0) main_help_pane

0xa7cd,	// (0x000b5f1b) main_im_pane

0x9cbd,	// (0x000b540b) main_image_pane_ParamLimits

0x9cbd,	// (0x000b540b) main_image_pane

0x9a62,	// (0x000b51b0) main_location2_pane

0xb2e6,	// (0x000b6a34) main_location_pane

0x9cbd,	// (0x000b540b) main_messa_pane

0x9a62,	// (0x000b51b0) main_mp2_pane

0xb2e6,	// (0x000b6a34) main_mp_pane

0x9a62,	// (0x000b51b0) main_msg_pane

0x9a62,	// (0x000b51b0) main_mup_eq_pane

0x9a62,	// (0x000b51b0) main_mup_pane

0xa7cd,	// (0x000b5f1b) main_notes_pane

0x9a62,	// (0x000b51b0) main_pec_pane

0x9a62,	// (0x000b51b0) main_phob_pane

0x9a62,	// (0x000b51b0) main_pinb_pane

0x9a62,	// (0x000b51b0) main_postcard_pane

0x9a62,	// (0x000b51b0) main_qdial_pane

0xb2e6,	// (0x000b6a34) main_skin_pane

0x9a62,	// (0x000b51b0) main_smil2_pane

0xb2e6,	// (0x000b6a34) main_smil_pane

0xb2e6,	// (0x000b6a34) main_video_pane

0xb2e6,	// (0x000b6a34) main_video_tele_pane

0x9cbd,	// (0x000b540b) main_viewer_pane_ParamLimits

0x9cbd,	// (0x000b540b) main_viewer_pane

0xb2e6,	// (0x000b6a34) main_vorec_pane

0x380f,	// (0x000aef5d) popup_blid_sat_info_window_ParamLimits

0x380f,	// (0x000aef5d) popup_blid_sat_info_window

0x3873,	// (0x000aefc1) popup_dyc_status_message_window_ParamLimits

0x3873,	// (0x000aefc1) popup_dyc_status_message_window

0x388d,	// (0x000aefdb) popup_grid_large_graphic_window_ParamLimits

0x388d,	// (0x000aefdb) popup_grid_large_graphic_window

0x394f,	// (0x000af09d) popup_loc_request_window_ParamLimits

0x394f,	// (0x000af09d) popup_loc_request_window

0x3a8b,	// (0x000af1d9) popup_wml_address_window_ParamLimits

0x3a8b,	// (0x000af1d9) popup_wml_address_window

0x35f7,	// (0x000aed45) call_muted_g1

0x328b,	// (0x000ae9d9) popup_call_audio_conf_window_ParamLimits

0x328b,	// (0x000ae9d9) popup_call_audio_conf_window

0x3607,	// (0x000aed55) popup_call_audio_first_window_ParamLimits

0x3607,	// (0x000aed55) popup_call_audio_first_window

0x367d,	// (0x000aedcb) popup_call_audio_in_window_ParamLimits

0x367d,	// (0x000aedcb) popup_call_audio_in_window

0x36b9,	// (0x000aee07) popup_call_audio_out_window_ParamLimits

0x36b9,	// (0x000aee07) popup_call_audio_out_window

0x36f3,	// (0x000aee41) popup_call_audio_second_window_ParamLimits

0x36f3,	// (0x000aee41) popup_call_audio_second_window

0x3749,	// (0x000aee97) popup_call_audio_wait_window_ParamLimits

0x3749,	// (0x000aee97) popup_call_audio_wait_window

0x377e,	// (0x000aeecc) popup_number_entry_window_ParamLimits

0x377e,	// (0x000aeecc) popup_number_entry_window

0x964f,	// (0x000b4d9d) bg_popup_call_pane_cp05_ParamLimits

0x964f,	// (0x000b4d9d) bg_popup_call_pane_cp05

0x966f,	// (0x000b4dbd) popup_number_entry_window_t1

0x9682,	// (0x000b4dd0) popup_number_entry_window_t2

0x9694,	// (0x000b4de2) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000ba821) popup_number_entry_window_t

0x96a6,	// (0x000b4df4) text_title_cp2

0x96b9,	// (0x000b4e07) bg_popup_call_pane_cp_ParamLimits

0x96b9,	// (0x000b4e07) bg_popup_call_pane_cp

0x96c7,	// (0x000b4e15) call_thumbnail_pane

0x96cf,	// (0x000b4e1d) popup_call_audio_in_window_g1_ParamLimits

0x96cf,	// (0x000b4e1d) popup_call_audio_in_window_g1

0x96db,	// (0x000b4e29) popup_call_audio_in_window_g2_ParamLimits

0x96db,	// (0x000b4e29) popup_call_audio_in_window_g2

0x96e7,	// (0x000b4e35) popup_call_audio_in_window_g3_ParamLimits

0x96e7,	// (0x000b4e35) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000ba82a) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000ba82a) popup_call_audio_in_window_g

0x96f3,	// (0x000b4e41) popup_call_audio_in_window_t1_ParamLimits

0x96f3,	// (0x000b4e41) popup_call_audio_in_window_t1

0x970f,	// (0x000b4e5d) popup_call_audio_in_window_t2_ParamLimits

0x970f,	// (0x000b4e5d) popup_call_audio_in_window_t2

0x972b,	// (0x000b4e79) popup_call_audio_in_window_t3_ParamLimits

0x972b,	// (0x000b4e79) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000ba831) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000ba831) popup_call_audio_in_window_t

0x96b9,	// (0x000b4e07) bg_popup_call_pane_cp01_ParamLimits

0x96b9,	// (0x000b4e07) bg_popup_call_pane_cp01

0x96c7,	// (0x000b4e15) call_thumbnail_pane_cp02

0x973e,	// (0x000b4e8c) call_type_pane_cp022

0x9746,	// (0x000b4e94) popup_call_audio_out_window_g1_ParamLimits

0x9746,	// (0x000b4e94) popup_call_audio_out_window_g1

0x9758,	// (0x000b4ea6) popup_call_audio_out_window_g2_ParamLimits

0x9758,	// (0x000b4ea6) popup_call_audio_out_window_g2

0x9764,	// (0x000b4eb2) popup_call_audio_out_window_g3_ParamLimits

0x9764,	// (0x000b4eb2) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000ba838) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000ba838) popup_call_audio_out_window_g

0x9776,	// (0x000b4ec4) popup_call_audio_out_window_t1_ParamLimits

0x9776,	// (0x000b4ec4) popup_call_audio_out_window_t1

0x978e,	// (0x000b4edc) popup_call_audio_out_window_t2_ParamLimits

0x978e,	// (0x000b4edc) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000ba83f) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000ba83f) popup_call_audio_out_window_t

0x97a3,	// (0x000b4ef1) bg_popup_call_pane_ParamLimits

0x97a3,	// (0x000b4ef1) bg_popup_call_pane

0x00d0,	// (0x000ab81e) call_thumbnail_pane_cp_ParamLimits

0x00d0,	// (0x000ab81e) call_thumbnail_pane_cp

0x9827,	// (0x000b4f75) call_type_pane_cp01_ParamLimits

0x9827,	// (0x000b4f75) call_type_pane_cp01

0x986b,	// (0x000b4fb9) popup_call_audio_first_window_g1_ParamLimits

0x986b,	// (0x000b4fb9) popup_call_audio_first_window_g1

0x98b7,	// (0x000b5005) popup_call_audio_first_window_g2_ParamLimits

0x98b7,	// (0x000b5005) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000ba844) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000ba844) popup_call_audio_first_window_g

0x98fb,	// (0x000b5049) popup_call_audio_first_window_t1_ParamLimits

0x98fb,	// (0x000b5049) popup_call_audio_first_window_t1

0x99a7,	// (0x000b50f5) popup_call_audio_first_window_t4_ParamLimits

0x99a7,	// (0x000b50f5) popup_call_audio_first_window_t4

0x9a33,	// (0x000b5181) popup_call_audio_first_window_t5_ParamLimits

0x9a33,	// (0x000b5181) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000ba849) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000ba849) popup_call_audio_first_window_t

0x9a62,	// (0x000b51b0) bg_popup_call_pane_cp02

0x9a6c,	// (0x000b51ba) call_type_pane_cp023

0x9a74,	// (0x000b51c2) popup_call_audio_wait_window_g1

0x9a7c,	// (0x000b51ca) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000ba850) popup_call_audio_wait_window_g

0x9a84,	// (0x000b51d2) popup_call_audio_wait_window_t3

0x9a92,	// (0x000b51e0) bg_popup_call_pane_cp03_ParamLimits

0x9a92,	// (0x000b51e0) bg_popup_call_pane_cp03

0x9af2,	// (0x000b5240) call_thumbnail_pane_cp011_ParamLimits

0x9af2,	// (0x000b5240) call_thumbnail_pane_cp011

0x9afe,	// (0x000b524c) call_type_pane_cp034_ParamLimits

0x9afe,	// (0x000b524c) call_type_pane_cp034

0x9b3a,	// (0x000b5288) popup_call_audio_second_window_g1_ParamLimits

0x9b3a,	// (0x000b5288) popup_call_audio_second_window_g1

0x9b76,	// (0x000b52c4) popup_call_audio_second_window_g2_ParamLimits

0x9b76,	// (0x000b52c4) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000ba855) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000ba855) popup_call_audio_second_window_g

0x9bb2,	// (0x000b5300) popup_call_audio_second_window_t1_ParamLimits

0x9bb2,	// (0x000b5300) popup_call_audio_second_window_t1

0x9c33,	// (0x000b5381) popup_call_audio_second_window_t2_ParamLimits

0x9c33,	// (0x000b5381) popup_call_audio_second_window_t2

0x9c69,	// (0x000b53b7) popup_call_audio_second_window_t3_ParamLimits

0x9c69,	// (0x000b53b7) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000ba85a) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000ba85a) popup_call_audio_second_window_t

0x9a62,	// (0x000b51b0) bg_popup_call_pane_cp04

0x9c9f,	// (0x000b53ed) list_conf_pane

0x9ca7,	// (0x000b53f5) popup_call_audio_conf_window_t1

0x9cb5,	// (0x000b5403) call_thumbnail_pane_g1

0x9cbd,	// (0x000b540b) bg_pinb_pane_ParamLimits

0x9cbd,	// (0x000b540b) bg_pinb_pane

0x9ccb,	// (0x000b5419) find_pinb_pane

0x9cd4,	// (0x000b5422) listscroll_pinb_pane_ParamLimits

0x9cd4,	// (0x000b5422) listscroll_pinb_pane

0x9ce3,	// (0x000b5431) pinb_bg_pane_g1

0x00f4,	// (0x000ab842) pinb_bg_pane_g2

0x0100,	// (0x000ab84e) pinb_bg_pane_g3

0x010c,	// (0x000ab85a) pinb_bg_pane_g4

0x0118,	// (0x000ab866) pinb_bg_pane_g5

0x0124,	// (0x000ab872) pinb_bg_pane_g6

0x012f,	// (0x000ab87d) pinb_bg_pane_g7

0x013a,	// (0x000ab888) pinb_bg_pane_g8

0x0145,	// (0x000ab893) pinb_bg_pane_g9

0x014f,	// (0x000ab89d) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000ba861) pinb_bg_pane_g

0x016c,	// (0x000ab8ba) grid_pinb_pane

0x0177,	// (0x000ab8c5) list_pinb_pane

0x0182,	// (0x000ab8d0) scroll_pane_cp01_ParamLimits

0x0182,	// (0x000ab8d0) scroll_pane_cp01

0x9ced,	// (0x000b543b) find_pinb_pane_g1_ParamLimits

0x9ced,	// (0x000b543b) find_pinb_pane_g1

0x9d05,	// (0x000b5453) find_pinb_pane_t1

0xa762,	// (0x000b5eb0) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000ba87b) find_pinb_pane_t

0xa777,	// (0x000b5ec5) input_focus_pane_cp01_ParamLimits

0xa777,	// (0x000b5ec5) input_focus_pane_cp01

0x0194,	// (0x000ab8e2) cell_pinb_pane_ParamLimits

0x0194,	// (0x000ab8e2) cell_pinb_pane

0x01b6,	// (0x000ab904) cell_pinb_pane_g1_ParamLimits

0x01b6,	// (0x000ab904) cell_pinb_pane_g1

0x01cb,	// (0x000ab919) cell_pinb_pane_g2_ParamLimits

0x01cb,	// (0x000ab919) cell_pinb_pane_g2

0xa783,	// (0x000b5ed1) cell_pinb_pane_g3_ParamLimits

0xa783,	// (0x000b5ed1) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000ba880) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000ba880) cell_pinb_pane_g

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp01

0x01d7,	// (0x000ab925) list_pinb_item_pane_ParamLimits

0x01d7,	// (0x000ab925) list_pinb_item_pane

0x9a62,	// (0x000b51b0) list_highlight_pane_cp02

0x01e9,	// (0x000ab937) list_pinb_item_pane_g1_ParamLimits

0x01e9,	// (0x000ab937) list_pinb_item_pane_g1

0x01f6,	// (0x000ab944) list_pinb_item_pane_g2_ParamLimits

0x01f6,	// (0x000ab944) list_pinb_item_pane_g2

0x0202,	// (0x000ab950) list_pinb_item_pane_g3_ParamLimits

0x0202,	// (0x000ab950) list_pinb_item_pane_g3

0x0213,	// (0x000ab961) list_pinb_item_pane_g4_ParamLimits

0x0213,	// (0x000ab961) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000ba887) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000ba887) list_pinb_item_pane_g

0x021f,	// (0x000ab96d) list_pinb_item_pane_t1_ParamLimits

0x021f,	// (0x000ab96d) list_pinb_item_pane_t1

0x0254,	// (0x000ab9a2) calc_display_pane

0x027c,	// (0x000ab9ca) calc_paper_pane

0x029f,	// (0x000ab9ed) grid_calc_pane

0x9a62,	// (0x000b51b0) bg_list_pane_cp01

0x02cd,	// (0x000aba1b) clock_g1

0x02d5,	// (0x000aba23) clock_g2

0x0001,

0xf142,	// (0x000ba890) clock_g

0x02dd,	// (0x000aba2b) clock_t1_ParamLimits

0x02dd,	// (0x000aba2b) clock_t1

0x02f2,	// (0x000aba40) clock_t2_ParamLimits

0x02f2,	// (0x000aba40) clock_t2

0x0304,	// (0x000aba52) clock_t3_ParamLimits

0x0304,	// (0x000aba52) clock_t3

0x0316,	// (0x000aba64) clock_t4_ParamLimits

0x0316,	// (0x000aba64) clock_t4

0x0328,	// (0x000aba76) clock_t5_ParamLimits

0x0328,	// (0x000aba76) clock_t5

0x033d,	// (0x000aba8b) clock_t6_ParamLimits

0x033d,	// (0x000aba8b) clock_t6

0x034f,	// (0x000aba9d) clock_t7_ParamLimits

0x034f,	// (0x000aba9d) clock_t7

0x0361,	// (0x000abaaf) clock_t8_ParamLimits

0x0361,	// (0x000abaaf) clock_t8

0x0375,	// (0x000abac3) clock_t9_ParamLimits

0x0375,	// (0x000abac3) clock_t9

0x0008,

0xf147,	// (0x000ba895) clock_t_ParamLimits

0xf147,	// (0x000ba895) clock_t

0xa78f,	// (0x000b5edd) popup_clock_analogue_window_cp02

0xa78f,	// (0x000b5edd) popup_clock_digital_window_cp01

0xa797,	// (0x000b5ee5) listscroll_help_pane

0x9a62,	// (0x000b51b0) phob_pre_status_pane

0xa7a1,	// (0x000b5eef) grid_qdial_pane

0x9cbd,	// (0x000b540b) listscroll_mce_pane

0x9cbd,	// (0x000b540b) bg_notes_pane

0xa7ab,	// (0x000b5ef9) list_notes_pane

0x038b,	// (0x000abad9) scroll_pane_cp06

0xa7b9,	// (0x000b5f07) bg_calc_paper_pane

0x9d29,	// (0x000b5477) list_calc_pane

0xa7cd,	// (0x000b5f1b) bg_calc_display_pane

0x039f,	// (0x000abaed) calc_display_pane_t1

0x03b1,	// (0x000abaff) calc_display_pane_t2

0x9d43,	// (0x000b5491) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000ba8a8) calc_display_pane_t

0x03c3,	// (0x000abb11) cell_calc_pane_ParamLimits

0x03c3,	// (0x000abb11) cell_calc_pane

0xa7d9,	// (0x000b5f27) bg_calc_paper_pane_g1

0xa7e5,	// (0x000b5f33) bg_calc_paper_pane_g2

0xa7f1,	// (0x000b5f3f) bg_calc_paper_pane_g3

0xa7fd,	// (0x000b5f4b) bg_calc_paper_pane_g4

0xa809,	// (0x000b5f57) bg_calc_paper_pane_g5

0x0400,	// (0x000abb4e) bg_calc_paper_pane_g6

0x0413,	// (0x000abb61) bg_calc_paper_pane_g7

0x0426,	// (0x000abb74) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000ba8af) bg_calc_paper_pane_g

0x0437,	// (0x000abb85) calc_bg_paper_pane_g9

0x0448,	// (0x000abb96) list_calc_item_pane_ParamLimits

0x0448,	// (0x000abb96) list_calc_item_pane

0xa815,	// (0x000b5f63) list_calc_item_pane_g1

0x9d55,	// (0x000b54a3) list_calc_item_pane_t1_ParamLimits

0x9d55,	// (0x000b54a3) list_calc_item_pane_t1

0x0460,	// (0x000abbae) list_calc_item_pane_t2_ParamLimits

0x0460,	// (0x000abbae) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000ba8c0) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000ba8c0) list_calc_item_pane_t

0xa822,	// (0x000b5f70) cell_calc_pane_g1

0xa82c,	// (0x000b5f7a) grid_highlight_pane_cp02

0xa84e,	// (0x000b5f9c) bg_calc_display_pane_g1

0x9d67,	// (0x000b54b5) bg_calc_display_pane_g2

0xa857,	// (0x000b5fa5) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000ba8ca) bg_calc_display_pane_g

0x0492,	// (0x000abbe0) cell_qdial_pane_ParamLimits

0x0492,	// (0x000abbe0) cell_qdial_pane

0x04a6,	// (0x000abbf4) cell_qdial_pane_g1_ParamLimits

0x04a6,	// (0x000abbf4) cell_qdial_pane_g1

0x04bc,	// (0x000abc0a) cell_qdial_pane_g2_ParamLimits

0x04bc,	// (0x000abc0a) cell_qdial_pane_g2

0xa860,	// (0x000b5fae) cell_qdial_pane_g3_ParamLimits

0xa860,	// (0x000b5fae) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000ba8d1) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000ba8d1) cell_qdial_pane_g

0x04e3,	// (0x000abc31) cell_qdial_pane_t1_ParamLimits

0x04e3,	// (0x000abc31) cell_qdial_pane_t1

0x04fb,	// (0x000abc49) cell_qdial_pane_t2_ParamLimits

0x04fb,	// (0x000abc49) cell_qdial_pane_t2

0x050e,	// (0x000abc5c) cell_qdial_pane_t3_ParamLimits

0x050e,	// (0x000abc5c) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000ba8da) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000ba8da) cell_qdial_pane_t

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp04

0xa86c,	// (0x000b5fba) thumbnail_qdial_pane_ParamLimits

0xa86c,	// (0x000b5fba) thumbnail_qdial_pane

0xa8c8,	// (0x000b6016) list_help_pane

0xa8d1,	// (0x000b601f) scroll_pane_cp02

0x0521,	// (0x000abc6f) help_list_pane_t1_ParamLimits

0x0521,	// (0x000abc6f) help_list_pane_t1

0x9d71,	// (0x000b54bf) bg_notes_pane_g2

0x9d79,	// (0x000b54c7) bg_notes_pane_g3

0x9d81,	// (0x000b54cf) notes_bg_pane_g1

0x9d89,	// (0x000b54d7) notes_bg_pane_g4

0x9d91,	// (0x000b54df) notes_bg_pane_g5

0x9d99,	// (0x000b54e7) notes_bg_pane_g6

0x9da1,	// (0x000b54ef) notes_bg_pane_g7

0x9da9,	// (0x000b54f7) notes_bg_pane_g8

0x9db1,	// (0x000b54ff) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000ba8f8) notes_bg_pane_g

0x053f,	// (0x000abc8d) list_notes_text_pane_ParamLimits

0x053f,	// (0x000abc8d) list_notes_text_pane

0xa8da,	// (0x000b6028) list_notes_text_pane_g1

0x0553,	// (0x000abca1) list_notes_text_pane_t1

0x0561,	// (0x000abcaf) listscroll_cale_week_pane

0x059b,	// (0x000abce9) bg_cale_heading_pane

0xa8f4,	// (0x000b6042) bg_cale_pane_cp01

0x05c0,	// (0x000abd0e) cale_week_corner_pane

0x05df,	// (0x000abd2d) cale_week_day_heading_pane

0x0609,	// (0x000abd57) cale_week_scroll_pane_g1

0x0629,	// (0x000abd77) cale_week_scroll_pane_g2

0x0641,	// (0x000abd8f) cale_week_scroll_pane_g3

0x0659,	// (0x000abda7) cale_week_scroll_pane_g4

0x0671,	// (0x000abdbf) cale_week_scroll_pane_g5

0x068d,	// (0x000abddb) cale_week_scroll_pane_g6

0x06a9,	// (0x000abdf7) cale_week_scroll_pane_g7

0x06c9,	// (0x000abe17) cale_week_scroll_pane_g8

0x06e9,	// (0x000abe37) cale_week_scroll_pane_g9

0x0706,	// (0x000abe54) cale_week_scroll_pane_g10

0x0723,	// (0x000abe71) cale_week_scroll_pane_g11

0x0740,	// (0x000abe8e) cale_week_scroll_pane_g12

0x075d,	// (0x000abeab) cale_week_scroll_pane_g13

0x077a,	// (0x000abec8) cale_week_scroll_pane_g14

0x079f,	// (0x000abeed) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000ba907) cale_week_scroll_pane_g

0x07c4,	// (0x000abf12) cale_week_time_pane

0x07e4,	// (0x000abf32) grid_cale_week_pane

0xa924,	// (0x000b6072) scroll_pane_cp08

0x0813,	// (0x000abf61) cell_cale_week_pane_ParamLimits

0x0813,	// (0x000abf61) cell_cale_week_pane

0x0895,	// (0x000abfe3) cale_week_day_heading_pane_t1

0x08df,	// (0x000ac02d) cale_week_day_heading_pane_t2

0x092e,	// (0x000ac07c) cale_week_day_heading_pane_t3

0x097d,	// (0x000ac0cb) cale_week_day_heading_pane_t4

0x09cc,	// (0x000ac11a) cale_week_day_heading_pane_t5

0x0a1b,	// (0x000ac169) cale_week_day_heading_pane_t6

0x0a6e,	// (0x000ac1bc) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000ba926) cale_week_day_heading_pane_t

0xa946,	// (0x000b6094) bg_cale_side_pane

0x0ab8,	// (0x000ac206) cale_week_time_pane_t1

0x0af2,	// (0x000ac240) cale_week_time_pane_t2

0x0b2c,	// (0x000ac27a) cale_week_time_pane_t3

0x0b66,	// (0x000ac2b4) cale_week_time_pane_t4

0x0ba0,	// (0x000ac2ee) cale_week_time_pane_t5

0x0bda,	// (0x000ac328) cale_week_time_pane_t6

0x0c14,	// (0x000ac362) cale_week_time_pane_t7

0x0c4e,	// (0x000ac39c) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000ba935) cale_week_time_pane_t

0x0c8c,	// (0x000ac3da) cell_cale_week_pane_g2

0x0cab,	// (0x000ac3f9) cell_cale_week_pane_g3_ParamLimits

0x0cab,	// (0x000ac3f9) cell_cale_week_pane_g3

0xa954,	// (0x000b60a2) grid_highlight_pane_cp07

0xa95c,	// (0x000b60aa) listscroll_gms_pane

0xa966,	// (0x000b60b4) grid_gms_pane

0xa96f,	// (0x000b60bd) listscroll_gms_pane_g1

0xa977,	// (0x000b60c5) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000ba946) listscroll_gms_pane_g

0x0cc3,	// (0x000ac411) scroll_pane_cp010

0x0cce,	// (0x000ac41c) cell_gms_pane_ParamLimits

0x0cce,	// (0x000ac41c) cell_gms_pane

0x0ce8,	// (0x000ac436) cell_gms_pane_g1

0xa97f,	// (0x000b60cd) cell_gms_pane_g2

0xa987,	// (0x000b60d5) cell_gms_pane_g3

0xa990,	// (0x000b60de) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000ba94b) cell_gms_pane_g

0xa999,	// (0x000b60e7) grid_highlight_pane_cp09

0x359f,	// (0x000aeced) phob_pre_status_pane_g1

0x35a7,	// (0x000aecf5) phob_pre_status_pane_g2

0x35af,	// (0x000aecfd) phob_pre_status_pane_g3

0x35b7,	// (0x000aed05) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000bad3a) phob_pre_status_pane_g

0x35c7,	// (0x000aed15) phob_pre_status_pane_t1

0x35d7,	// (0x000aed25) phob_pre_status_pane_t2

0x35e7,	// (0x000aed35) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000bad45) phob_pre_status_pane_t

0x9a62,	// (0x000b51b0) bg_list_pane_cp05

0x0cf8,	// (0x000ac446) grid_vorec_pane

0x0d04,	// (0x000ac452) vorec_t1

0x0d12,	// (0x000ac460) vorec_t2

0x0d20,	// (0x000ac46e) vorec_t3

0x0d2e,	// (0x000ac47c) vorec_t4

0x0d3c,	// (0x000ac48a) vorec_t5

0x9db9,	// (0x000b5507) vorec_t6

0x0006,

0xf206,	// (0x000ba954) vorec_t

0x0d58,	// (0x000ac4a6) wait_bar_pane_cp01

0x0d60,	// (0x000ac4ae) cell_vorec_pane_ParamLimits

0x0d60,	// (0x000ac4ae) cell_vorec_pane

0xa9a1,	// (0x000b60ef) cell_vorec_pane_g1

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp05

0x0d8b,	// (0x000ac4d9) cams_zoom_pane

0x0d9a,	// (0x000ac4e8) image_vga_pane

0x0db4,	// (0x000ac502) main_camera_pane_g1

0x0dc6,	// (0x000ac514) main_camera_pane_g2

0x0dd6,	// (0x000ac524) main_camera_pane_g3

0x0dea,	// (0x000ac538) main_camera_pane_g4

0x0dfe,	// (0x000ac54c) main_camera_pane_g5

0x0e12,	// (0x000ac560) main_camera_pane_g6

0x0e26,	// (0x000ac574) main_camera_pane_g7

0x0007,

0xf215,	// (0x000ba963) main_camera_pane_g

0x0e3a,	// (0x000ac588) main_camera_pane_t1

0x0e50,	// (0x000ac59e) main_camera_pane_t2

0x0001,

0xf226,	// (0x000ba974) main_camera_pane_t

0x0e8e,	// (0x000ac5dc) cams_zoom_pane_cp_ParamLimits

0x0e8e,	// (0x000ac5dc) cams_zoom_pane_cp

0x0eb6,	// (0x000ac604) image_cif_pane_ParamLimits

0x0eb6,	// (0x000ac604) image_cif_pane

0x0ef1,	// (0x000ac63f) image_subqcif_pane

0x0efb,	// (0x000ac649) main_video_pane_g1_ParamLimits

0x0efb,	// (0x000ac649) main_video_pane_g1

0x0f1f,	// (0x000ac66d) main_video_pane_g2_ParamLimits

0x0f1f,	// (0x000ac66d) main_video_pane_g2

0x0f55,	// (0x000ac6a3) main_video_pane_g3_ParamLimits

0x0f55,	// (0x000ac6a3) main_video_pane_g3

0x0f83,	// (0x000ac6d1) main_video_pane_g4_ParamLimits

0x0f83,	// (0x000ac6d1) main_video_pane_g4

0x0fb1,	// (0x000ac6ff) main_video_pane_g5_ParamLimits

0x0fb1,	// (0x000ac6ff) main_video_pane_g5

0xa9b7,	// (0x000b6105) main_video_pane_g6_ParamLimits

0xa9b7,	// (0x000b6105) main_video_pane_g6

0x0006,

0xf22b,	// (0x000ba979) main_video_pane_g_ParamLimits

0xf22b,	// (0x000ba979) main_video_pane_g

0x0fda,	// (0x000ac728) main_video_pane_t1_ParamLimits

0x0fda,	// (0x000ac728) main_video_pane_t1

0xa9d1,	// (0x000b611f) cams_zoom_pane_g1

0xa9da,	// (0x000b6128) cams_zoom_pane_g2

0xa9e3,	// (0x000b6131) cams_zoom_pane_g3

0xa9ec,	// (0x000b613a) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000ba988) cams_zoom_pane_g

0x1037,	// (0x000ac785) grid_cams_pane

0x1051,	// (0x000ac79f) linegrid_cams_pane

0x1063,	// (0x000ac7b1) cell_cams_pane_ParamLimits

0x1063,	// (0x000ac7b1) cell_cams_pane

0xa9f5,	// (0x000b6143) cams_burst_image_pane

0xa9fd,	// (0x000b614b) cell_cams_pane_g1

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp03

0xa822,	// (0x000b5f70) mp_bg_pane_g1

0x9a62,	// (0x000b51b0) bg_list_pane_cp03

0xc746,	// (0x000b7e94) bg_mp_pane

0xc74e,	// (0x000b7e9c) grid_mp_pane

0xc756,	// (0x000b7ea4) media_player_g1

0xc760,	// (0x000b7eae) media_player_t1

0xc76e,	// (0x000b7ebc) media_player_t2

0xc77c,	// (0x000b7eca) media_player_t3

0xc78a,	// (0x000b7ed8) media_player_t4

0xc798,	// (0x000b7ee6) media_player_t5

0xc7a6,	// (0x000b7ef4) media_player_t6

0xc7b4,	// (0x000b7f02) media_player_t7

0x0006,

0xf5d6,	// (0x000bad24) media_player_t

0xc7c2,	// (0x000b7f10) wait_bar_pane_cp02

0xf5bb,	// (0x000bad09) main_usb_pane_t

0x3596,	// (0x000aece4) cell_mp_pane

0xa822,	// (0x000b5f70) cell_mp_pane_g1

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp06

0xaa05,	// (0x000b6153) grid_skin_colour_pane

0xaa0d,	// (0x000b615b) list_highlight_pane_cp03

0x119c,	// (0x000ac8ea) skin_g1

0xaa15,	// (0x000b6163) skin_t1

0xaa24,	// (0x000b6172) skin_t2

0x0001,

0xf26f,	// (0x000ba9bd) skin_t

0x11a4,	// (0x000ac8f2) cell_skin_colour_pane_ParamLimits

0x11a4,	// (0x000ac8f2) cell_skin_colour_pane

0xaa32,	// (0x000b6180) cell_skin_colour_pane_g1

0x1217,	// (0x000ac965) call_video_g1_ParamLimits

0x1217,	// (0x000ac965) call_video_g1

0x1233,	// (0x000ac981) call_video_g2_ParamLimits

0x1233,	// (0x000ac981) call_video_g2

0x0001,

0xf274,	// (0x000ba9c2) call_video_g_ParamLimits

0xf274,	// (0x000ba9c2) call_video_g

0x1278,	// (0x000ac9c6) call_video_uplink_pane_cp1_ParamLimits

0x1278,	// (0x000ac9c6) call_video_uplink_pane_cp1

0xaa44,	// (0x000b6192) call_video_uplink_pane_cp2

0x1319,	// (0x000aca67) video_down_crop_pane_ParamLimits

0x1319,	// (0x000aca67) video_down_crop_pane

0x1402,	// (0x000acb50) video_down_pane_ParamLimits

0x1402,	// (0x000acb50) video_down_pane

0xaa4c,	// (0x000b619a) video_down_subqcif_pane_ParamLimits

0xaa4c,	// (0x000b619a) video_down_subqcif_pane

0xaa66,	// (0x000b61b4) video_down_subqcif_pane_cp_ParamLimits

0xaa66,	// (0x000b61b4) video_down_subqcif_pane_cp

0xaa8e,	// (0x000b61dc) im_reading_pane_ParamLimits

0xaa8e,	// (0x000b61dc) im_reading_pane

0x150b,	// (0x000acc59) im_writing_pane_ParamLimits

0x150b,	// (0x000acc59) im_writing_pane

0x1527,	// (0x000acc75) im_reading_pane_t1

0xaaa8,	// (0x000b61f6) list_im_pane

0xaab9,	// (0x000b6207) scroll_pane_cp07

0x1563,	// (0x000accb1) im_writing_pane_t1_ParamLimits

0x1563,	// (0x000accb1) im_writing_pane_t1

0xaad2,	// (0x000b6220) im_writing_pane_t2_ParamLimits

0xaad2,	// (0x000b6220) im_writing_pane_t2

0x0001,

0xf27e,	// (0x000ba9cc) im_writing_pane_t_ParamLimits

0xf27e,	// (0x000ba9cc) im_writing_pane_t

0x9a62,	// (0x000b51b0) input_focus_pane_cp04

0x9a62,	// (0x000b51b0) input_focus_pane_cp05

0x1578,	// (0x000accc6) list_im_single_pane_ParamLimits

0x1578,	// (0x000accc6) list_im_single_pane

0x158e,	// (0x000accdc) list_single_im_pane_t1

0x3556,	// (0x000aeca4) blid_accuracy_pane

0x355e,	// (0x000aecac) blid_compass_pane

0x3568,	// (0x000aecb6) main_location_t1

0x3578,	// (0x000aecc6) main_location_t2

0x3588,	// (0x000aecd6) main_location_t3

0x0002,

0xf5e5,	// (0x000bad33) main_location_t

0x9a62,	// (0x000b51b0) aid_levels_location

0xa822,	// (0x000b5f70) blid_accuracy_pane_g1

0xa822,	// (0x000b5f70) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000baa2e) blid_accuracy_pane_g

0xab1a,	// (0x000b6268) wml_content_pane

0xab58,	// (0x000b62a6) wml_button_pane_ParamLimits

0xab58,	// (0x000b62a6) wml_button_pane

0x159d,	// (0x000acceb) wml_list_single_large_pane_ParamLimits

0x159d,	// (0x000acceb) wml_list_single_large_pane

0x15b3,	// (0x000acd01) wml_list_single_medium_pane_ParamLimits

0x15b3,	// (0x000acd01) wml_list_single_medium_pane

0x15ca,	// (0x000acd18) wml_list_single_small_pane_ParamLimits

0x15ca,	// (0x000acd18) wml_list_single_small_pane

0xab6c,	// (0x000b62ba) wml_selection_box_pane_ParamLimits

0xab6c,	// (0x000b62ba) wml_selection_box_pane

0xab7f,	// (0x000b62cd) wml_list_single_pane_t1

0xab8e,	// (0x000b62dc) wml_list_single_medium_pane_t1

0xab9d,	// (0x000b62eb) wml_list_single_large_pane_t1

0xabac,	// (0x000b62fa) input_focus_pane_cp02_ParamLimits

0xabac,	// (0x000b62fa) input_focus_pane_cp02

0xabbf,	// (0x000b630d) wml_selection_box_pane_g1

0xabc8,	// (0x000b6316) wml_selection_box_pane_t1_ParamLimits

0xabc8,	// (0x000b6316) wml_selection_box_pane_t1

0x9cbd,	// (0x000b540b) bg_wml_button_pane_ParamLimits

0x9cbd,	// (0x000b540b) bg_wml_button_pane

0xabe0,	// (0x000b632e) wml_button_pane_g1

0xabe8,	// (0x000b6336) wml_button_pane_t1

0xabe0,	// (0x000b632e) wml_button_bg_pane_g1

0xabf8,	// (0x000b6346) wml_button_bg_pane_g2

0xac00,	// (0x000b634e) wml_button_bg_pane_g3

0xac08,	// (0x000b6356) wml_button_bg_pane_g4

0xac10,	// (0x000b635e) wml_button_bg_pane_g5

0xac18,	// (0x000b6366) wml_button_bg_pane_g6

0xac20,	// (0x000b636e) wml_button_bg_pane_g7

0xac28,	// (0x000b6376) wml_button_bg_pane_g8

0xac30,	// (0x000b637e) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x000ba9d1) wml_button_bg_pane_g

0x15e6,	// (0x000acd34) bg_list_pane_cp02

0xac38,	// (0x000b6386) mce_header_pane_ParamLimits

0xac38,	// (0x000b6386) mce_header_pane

0xac4e,	// (0x000b639c) mce_icon_pane

0xac4e,	// (0x000b639c) mce_image_pane

0xac57,	// (0x000b63a5) mce_text_pane_ParamLimits

0xac57,	// (0x000b63a5) mce_text_pane

0x15f0,	// (0x000acd3e) scroll_pane_cp03

0xab50,	// (0x000b629e) scroll_pane_cp04

0xac6a,	// (0x000b63b8) scroll_pane_cp05_ParamLimits

0xac6a,	// (0x000b63b8) scroll_pane_cp05

0x15fa,	// (0x000acd48) mce_header_field_pane_ParamLimits

0x15fa,	// (0x000acd48) mce_header_field_pane

0x1613,	// (0x000acd61) mce_header_field_pane_2_ParamLimits

0x1613,	// (0x000acd61) mce_header_field_pane_2

0x1629,	// (0x000acd77) mce_header_field_pane_3

0x1631,	// (0x000acd7f) list_single_mce_message_pane_ParamLimits

0x1631,	// (0x000acd7f) list_single_mce_message_pane

0x164a,	// (0x000acd98) list_single_mce_smart_pane_ParamLimits

0x164a,	// (0x000acd98) list_single_mce_smart_pane

0xac76,	// (0x000b63c4) input_focus_pane_cp03

0xac7f,	// (0x000b63cd) list_header_data_pane

0x166e,	// (0x000acdbc) mce_header_field_pane_t1

0x167e,	// (0x000acdcc) list_single_mce_header_pane_ParamLimits

0x167e,	// (0x000acdcc) list_single_mce_header_pane

0xac87,	// (0x000b63d5) list_single_mce_header_pane_t1

0xac96,	// (0x000b63e4) list_single_mce_message_pane_g1

0xac9e,	// (0x000b63ec) list_single_mce_message_pane_t1

0x16b8,	// (0x000ace06) bg_cale_heading_pane_cp01_ParamLimits

0x16b8,	// (0x000ace06) bg_cale_heading_pane_cp01

0xacac,	// (0x000b63fa) bg_cale_pane_cp02_ParamLimits

0xacac,	// (0x000b63fa) bg_cale_pane_cp02

0x16f7,	// (0x000ace45) cale_month_corner_pane

0x1716,	// (0x000ace64) cale_month_day_heading_pane_ParamLimits

0x1716,	// (0x000ace64) cale_month_day_heading_pane

0x176d,	// (0x000acebb) cale_month_pane_g1_ParamLimits

0x176d,	// (0x000acebb) cale_month_pane_g1

0x17a1,	// (0x000aceef) cale_month_pane_g2_ParamLimits

0x17a1,	// (0x000aceef) cale_month_pane_g2

0x17d9,	// (0x000acf27) cale_month_pane_g3_ParamLimits

0x17d9,	// (0x000acf27) cale_month_pane_g3

0x1825,	// (0x000acf73) cale_month_pane_g4_ParamLimits

0x1825,	// (0x000acf73) cale_month_pane_g4

0x1871,	// (0x000acfbf) cale_month_pane_g5_ParamLimits

0x1871,	// (0x000acfbf) cale_month_pane_g5

0x18c1,	// (0x000ad00f) cale_month_pane_g6_ParamLimits

0x18c1,	// (0x000ad00f) cale_month_pane_g6

0x1919,	// (0x000ad067) cale_month_pane_g7_ParamLimits

0x1919,	// (0x000ad067) cale_month_pane_g7

0x197d,	// (0x000ad0cb) cale_month_pane_g8_ParamLimits

0x197d,	// (0x000ad0cb) cale_month_pane_g8

0x19e1,	// (0x000ad12f) cale_month_pane_g9_ParamLimits

0x19e1,	// (0x000ad12f) cale_month_pane_g9

0x1a3b,	// (0x000ad189) cale_month_pane_g10_ParamLimits

0x1a3b,	// (0x000ad189) cale_month_pane_g10

0x1a8d,	// (0x000ad1db) cale_month_pane_g11_ParamLimits

0x1a8d,	// (0x000ad1db) cale_month_pane_g11

0x1adf,	// (0x000ad22d) cale_month_pane_g12_ParamLimits

0x1adf,	// (0x000ad22d) cale_month_pane_g12

0x1b35,	// (0x000ad283) cale_month_pane_g13_ParamLimits

0x1b35,	// (0x000ad283) cale_month_pane_g13

0x000c,

0xf296,	// (0x000ba9e4) cale_month_pane_g_ParamLimits

0xf296,	// (0x000ba9e4) cale_month_pane_g

0x1b8b,	// (0x000ad2d9) cale_month_week_pane

0x1baf,	// (0x000ad2fd) grid_cale_month_pane_ParamLimits

0x1baf,	// (0x000ad2fd) grid_cale_month_pane

0x1bfd,	// (0x000ad34b) cale_month_day_heading_pane_t1

0x1c83,	// (0x000ad3d1) cale_month_day_heading_pane_t2

0x1d14,	// (0x000ad462) cale_month_day_heading_pane_t3

0x1da5,	// (0x000ad4f3) cale_month_day_heading_pane_t4

0x1e36,	// (0x000ad584) cale_month_day_heading_pane_t5

0x1ecf,	// (0x000ad61d) cale_month_day_heading_pane_t6

0x1f70,	// (0x000ad6be) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000ba9ff) cale_month_day_heading_pane_t

0xa946,	// (0x000b6094) bg_cale_side_pane_cp01

0x2019,	// (0x000ad767) cale_month_week_pane_t1

0x2052,	// (0x000ad7a0) cale_month_week_pane_t2

0x208b,	// (0x000ad7d9) cale_month_week_pane_t3

0x20c4,	// (0x000ad812) cale_month_week_pane_t4

0x20fd,	// (0x000ad84b) cale_month_week_pane_t5

0x2136,	// (0x000ad884) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000baa0e) cale_month_week_pane_t

0x2173,	// (0x000ad8c1) cell_cale_month_pane_ParamLimits

0x2173,	// (0x000ad8c1) cell_cale_month_pane

0x9dc7,	// (0x000b5515) cell_cale_month_pane_g1

0x22bb,	// (0x000ada09) cell_cale_month_pane_t1_ParamLimits

0x22bb,	// (0x000ada09) cell_cale_month_pane_t1

0xa954,	// (0x000b60a2) grid_highlight_pane_cp08

0xa822,	// (0x000b5f70) main_smil_g1

0x22db,	// (0x000ada29) smil_status_pane

0xaceb,	// (0x000b6439) smil_text_pane

0xc664,	// (0x000b7db2) bg_popup_call3_rect_pane_g8

0xc66c,	// (0x000b7dba) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x000bacc7) bg_popup_call3_rect_pane_g

0xc8fa,	// (0x000b8048) smil_status_volume_pane_g1

0x22ee,	// (0x000ada3c) smil_status_pane_t1

0x9f15,	// (0x000b5663) volume_smil_pane

0xacf5,	// (0x000b6443) list_smil_text_pane

0x2307,	// (0x000ada55) scroll_pane_cp011

0x2312,	// (0x000ada60) smil_text_list_pane_t1_ParamLimits

0x2312,	// (0x000ada60) smil_text_list_pane_t1

0x9dd3,	// (0x000b5521) aid_volume_smil_ParamLimits

0x9dd3,	// (0x000b5521) aid_volume_smil

0xa822,	// (0x000b5f70) smil_volume_pane_g1

0xa822,	// (0x000b5f70) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000baa2e) smil_volume_pane_g

0x234b,	// (0x000ada99) listscroll_cale_day_pane

0xacff,	// (0x000b644d) bg_cale_pane

0xad17,	// (0x000b6465) list_cale_pane

0xad3a,	// (0x000b6488) scroll_pane_cp09

0xad4b,	// (0x000b6499) cale_bg_pane_g1

0xad53,	// (0x000b64a1) cale_bg_pane_g2

0xad5b,	// (0x000b64a9) cale_bg_pane_g3

0xad63,	// (0x000b64b1) cale_bg_pane_g4

0xad6b,	// (0x000b64b9) cale_bg_pane_g5

0xad73,	// (0x000b64c1) cale_bg_pane_g6

0xad7b,	// (0x000b64c9) cale_bg_pane_g7

0xad83,	// (0x000b64d1) cale_bg_pane_g8

0xad8b,	// (0x000b64d9) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000baa33) cale_bg_pane_g

0xad93,	// (0x000b64e1) list_cale_time_pane_ParamLimits

0xad93,	// (0x000b64e1) list_cale_time_pane

0xada8,	// (0x000b64f6) list_cale_time_pane_g1_ParamLimits

0xada8,	// (0x000b64f6) list_cale_time_pane_g1

0xadb4,	// (0x000b6502) list_cale_time_pane_g2_ParamLimits

0xadb4,	// (0x000b6502) list_cale_time_pane_g2

0x236d,	// (0x000adabb) list_cale_time_pane_g3_ParamLimits

0x236d,	// (0x000adabb) list_cale_time_pane_g3

0x237b,	// (0x000adac9) list_cale_time_pane_g4_ParamLimits

0x237b,	// (0x000adac9) list_cale_time_pane_g4

0x2389,	// (0x000adad7) list_cale_time_pane_g5_ParamLimits

0x2389,	// (0x000adad7) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000baa46) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000baa46) list_cale_time_pane_g

0xadce,	// (0x000b651c) list_cale_time_pane_t1_ParamLimits

0xadce,	// (0x000b651c) list_cale_time_pane_t1

0xadf6,	// (0x000b6544) list_cale_time_pane_t2_ParamLimits

0xadf6,	// (0x000b6544) list_cale_time_pane_t2

0x2734,	// (0x000ade82) aid_blid_cardinal_pane

0x2772,	// (0x000adec0) compass_pane_t4

0xae1e,	// (0x000b656c) list_cale_time_pane_t4_ParamLimits

0xae1e,	// (0x000b656c) list_cale_time_pane_t4

0x2780,	// (0x000adece) compass_pane_t5

0x278e,	// (0x000adedc) compass_pane_t6

0x279c,	// (0x000adeea) compass_pane_t7

0xb238,	// (0x000b6986) navi_pane_cc_t1

0xb38d,	// (0x000b6adb) aid_phob_thumbnail_center_pane

0x2f21,	// (0x000ae66f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000baa53) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000baa53) list_cale_time_pane_t

0x96b9,	// (0x000b4e07) bg_popup_window_pane_cp02_ParamLimits

0x96b9,	// (0x000b4e07) bg_popup_window_pane_cp02

0xae46,	// (0x000b6594) heading_pane_cp01_ParamLimits

0xae46,	// (0x000b6594) heading_pane_cp01

0xae52,	// (0x000b65a0) loc_req_pane_ParamLimits

0xae52,	// (0x000b65a0) loc_req_pane

0xae62,	// (0x000b65b0) loc_type_pane_ParamLimits

0xae62,	// (0x000b65b0) loc_type_pane

0xae74,	// (0x000b65c2) loc_type_pane_t1_ParamLimits

0xae74,	// (0x000b65c2) loc_type_pane_t1

0xae86,	// (0x000b65d4) loc_type_pane_t2_ParamLimits

0xae86,	// (0x000b65d4) loc_type_pane_t2

0xae98,	// (0x000b65e6) loc_type_pane_t3_ParamLimits

0xae98,	// (0x000b65e6) loc_type_pane_t3

0x0002,

0xf30c,	// (0x000baa5a) loc_type_pane_t_ParamLimits

0xf30c,	// (0x000baa5a) loc_type_pane_t

0xaeaa,	// (0x000b65f8) list_loc_req_pane

0xaeb4,	// (0x000b6602) scroll_pane_cp012

0x2397,	// (0x000adae5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2397,	// (0x000adae5) list_single_loc_request_popup_menu_pane

0xaebf,	// (0x000b660d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaebf,	// (0x000b660d) list_single_loc_request_popup_menu_pane_g1

0xaecb,	// (0x000b6619) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaecb,	// (0x000b6619) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x000baa61) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x000baa61) list_single_loc_request_popup_menu_pane_g

0xaed7,	// (0x000b6625) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaed7,	// (0x000b6625) list_single_loc_request_popup_menu_pane_t1

0x9cbd,	// (0x000b540b) bg_popup_window_pane_cp03_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_window_pane_cp03

0xaeed,	// (0x000b663b) heading_loc_req_pane_ParamLimits

0xaeed,	// (0x000b663b) heading_loc_req_pane

0x23a4,	// (0x000adaf2) popup_dyc_status_message_window_g1_ParamLimits

0x23a4,	// (0x000adaf2) popup_dyc_status_message_window_g1

0x23b8,	// (0x000adb06) popup_dyc_status_message_window_t1_ParamLimits

0x23b8,	// (0x000adb06) popup_dyc_status_message_window_t1

0x23cd,	// (0x000adb1b) popup_dyc_status_message_window_t2_ParamLimits

0x23cd,	// (0x000adb1b) popup_dyc_status_message_window_t2

0x23e2,	// (0x000adb30) popup_dyc_status_message_window_t3_ParamLimits

0x23e2,	// (0x000adb30) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x000baa66) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x000baa66) popup_dyc_status_message_window_t

0x9a62,	// (0x000b51b0) bg_heading_pane_cp01

0xaef9,	// (0x000b6647) heading_loc_req_pane_g1

0xaf01,	// (0x000b664f) heading_loc_req_pane_g2

0xaf09,	// (0x000b6657) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x000baa6d) heading_loc_req_pane_g

0xaf11,	// (0x000b665f) heading_loc_req_pane_t1

0xaf21,	// (0x000b666f) bg_popup_sub_pane_cp01_ParamLimits

0xaf21,	// (0x000b666f) bg_popup_sub_pane_cp01

0xaf2f,	// (0x000b667d) popup_cale_events_window_g1_ParamLimits

0xaf2f,	// (0x000b667d) popup_cale_events_window_g1

0xaf4f,	// (0x000b669d) popup_cale_events_window_g2_ParamLimits

0xaf4f,	// (0x000b669d) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x000baaa1) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x000baaa1) popup_cale_events_window_g

0xaf6f,	// (0x000b66bd) popup_cale_events_window_t1_ParamLimits

0xaf6f,	// (0x000b66bd) popup_cale_events_window_t1

0xaf81,	// (0x000b66cf) popup_cale_events_window_t2_ParamLimits

0xaf81,	// (0x000b66cf) popup_cale_events_window_t2

0xafbf,	// (0x000b670d) popup_cale_events_window_t3_ParamLimits

0xafbf,	// (0x000b670d) popup_cale_events_window_t3

0xaff9,	// (0x000b6747) popup_cale_events_window_t4_ParamLimits

0xaff9,	// (0x000b6747) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x000baaa6) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x000baaa6) popup_cale_events_window_t

0x24f3,	// (0x000adc41) call_type_pane

0x2503,	// (0x000adc51) popup_call_status_window_g1

0x2517,	// (0x000adc65) popup_call_status_window_g2

0x252b,	// (0x000adc79) popup_call_status_window_g3

0x0002,

0xf361,	// (0x000baaaf) popup_call_status_window_g

0xb02f,	// (0x000b677d) call_type_pane_g1

0xb038,	// (0x000b6786) call_type_pane_g2

0x0001,

0xf368,	// (0x000baab6) call_type_pane_g

0x9a62,	// (0x000b51b0) bg_popup_sub_pane_cp02

0xb041,	// (0x000b678f) listscroll_popup_wml_pane

0xb049,	// (0x000b6797) list_wml_pane

0xb053,	// (0x000b67a1) scroll_pane_cp013

0xb05e,	// (0x000b67ac) list_single_graphic_popup_wml_pane_ParamLimits

0xb05e,	// (0x000b67ac) list_single_graphic_popup_wml_pane

0xa822,	// (0x000b5f70) list_single_graphic_popup_wml_pane_g1

0xb072,	// (0x000b67c0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x000baabb) list_single_graphic_popup_wml_pane_g

0xb07a,	// (0x000b67c8) list_single_graphic_popup_wml_pane_t1

0xb090,	// (0x000b67de) aid_call_pane

0x9cb5,	// (0x000b5403) popup_clock_analogue_window_g1

0x9cb5,	// (0x000b5403) popup_clock_analogue_window_g2

0x9df5,	// (0x000b5543) popup_clock_analogue_window_g3

0x9df5,	// (0x000b5543) popup_clock_analogue_window_g4

0xa822,	// (0x000b5f70) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x000baac0) popup_clock_analogue_window_g

0x9dfd,	// (0x000b554b) popup_clock_analogue_window_t1

0x9e0b,	// (0x000b5559) clock_digital_number_pane_ParamLimits

0x9e0b,	// (0x000b5559) clock_digital_number_pane

0x9e17,	// (0x000b5565) clock_digital_number_pane_cp02_ParamLimits

0x9e17,	// (0x000b5565) clock_digital_number_pane_cp02

0x9e23,	// (0x000b5571) clock_digital_number_pane_cp03_ParamLimits

0x9e23,	// (0x000b5571) clock_digital_number_pane_cp03

0x9e2f,	// (0x000b557d) clock_digital_number_pane_cp04_ParamLimits

0x9e2f,	// (0x000b557d) clock_digital_number_pane_cp04

0x9e3b,	// (0x000b5589) clock_digital_separator_pane_ParamLimits

0x9e3b,	// (0x000b5589) clock_digital_separator_pane

0x9e47,	// (0x000b5595) popup_clock_digital_window_t1

0xa822,	// (0x000b5f70) clock_digital_number_pane_g1

0xa822,	// (0x000b5f70) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000baa2e) clock_digital_number_pane_g

0xa822,	// (0x000b5f70) clock_digital_separator_pane_g1

0xa822,	// (0x000b5f70) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000baa2e) clock_digital_separator_pane_g

0x9a62,	// (0x000b51b0) bg_popup_window_pane_cp04

0xb098,	// (0x000b67e6) heading_pane_cp03

0xb0a0,	// (0x000b67ee) listscroll_popup_gms_pane

0xb0a8,	// (0x000b67f6) grid_large_graphic_popup_pane

0xb0b2,	// (0x000b6800) listscroll_popup_gms_pane_g1

0xb0ba,	// (0x000b6808) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x000baacb) listscroll_popup_gms_pane_g

0xab50,	// (0x000b629e) scroll_pane_cp014

0x253b,	// (0x000adc89) cell_large_graphic_popup_pane_ParamLimits

0x253b,	// (0x000adc89) cell_large_graphic_popup_pane

0x2553,	// (0x000adca1) cell_large_graphic_popup_pane_g1_ParamLimits

0x2553,	// (0x000adca1) cell_large_graphic_popup_pane_g1

0xb0c2,	// (0x000b6810) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0c2,	// (0x000b6810) cell_large_graphic_popup_pane_g2

0xb0ce,	// (0x000b681c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0ce,	// (0x000b681c) cell_large_graphic_popup_pane_g3

0xb0db,	// (0x000b6829) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0db,	// (0x000b6829) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x000baad0) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x000baad0) cell_large_graphic_popup_pane_g

0xb0eb,	// (0x000b6839) grid_highlight_pane_cp010

0xa822,	// (0x000b5f70) bg_popup_call_pane_g1

0xb0f5,	// (0x000b6843) list_single_graphic_popup_conf_pane_ParamLimits

0xb0f5,	// (0x000b6843) list_single_graphic_popup_conf_pane

0xb107,	// (0x000b6855) list_highlight_pane_cp01

0xb110,	// (0x000b685e) list_single_graphic_popup_conf_pane_g1

0xb118,	// (0x000b6866) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000baad9) list_single_graphic_popup_conf_pane_g

0xb120,	// (0x000b686e) list_single_graphic_popup_conf_pane_t1

0xb12e,	// (0x000b687c) linegrid_cams_pane_g1

0x255f,	// (0x000adcad) linegrid_cams_pane_g2

0xa987,	// (0x000b60d5) linegrid_cams_pane_g3

0xb137,	// (0x000b6885) linegrid_cams_pane_g4

0x2568,	// (0x000adcb6) linegrid_cams_pane_g5

0x2571,	// (0x000adcbf) linegrid_cams_pane_g6

0xa990,	// (0x000b60de) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000baade) linegrid_cams_pane_g

0xb140,	// (0x000b688e) popup_clock_analogue_window

0xb140,	// (0x000b688e) popup_clock_digital_window

0x9a62,	// (0x000b51b0) popup_phob_thumbnail_window

0xa822,	// (0x000b5f70) call_video_uplink_pane_g1

0xb149,	// (0x000b6897) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000baaed) call_video_uplink_pane_g

0xb151,	// (0x000b689f) video_uplink_pane

0xb159,	// (0x000b68a7) mce_image_pane_g1

0x257c,	// (0x000adcca) mce_image_pane_g2

0x2586,	// (0x000adcd4) mce_image_pane_g3

0x2590,	// (0x000adcde) mce_image_pane_g4

0x2598,	// (0x000adce6) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000baaf2) mce_image_pane_g

0xb163,	// (0x000b68b1) control_top_pane_stacon_cp01_ParamLimits

0xb163,	// (0x000b68b1) control_top_pane_stacon_cp01

0xb177,	// (0x000b68c5) uni_indicator_pane_stacon_cp01_ParamLimits

0xb177,	// (0x000b68c5) uni_indicator_pane_stacon_cp01

0xb188,	// (0x000b68d6) bg_popup_sub_pane_cp03

0x25a0,	// (0x000adcee) chi_dic_find_pane

0x25a8,	// (0x000adcf6) listscroll_chi_dic_pane

0x25b1,	// (0x000adcff) main_pane_chidic_g1

0x25c4,	// (0x000add12) chi_dic_find_pane_t1

0xb192,	// (0x000b68e0) find_chidic_pane

0xb19b,	// (0x000b68e9) chi_dic_list_pane_ParamLimits

0xb19b,	// (0x000b68e9) chi_dic_list_pane

0xb1ac,	// (0x000b68fa) scroll_pane_cp020

0x25d2,	// (0x000add20) find_chidic_pane_t1

0x9a62,	// (0x000b51b0) input_focus_pane_cp06

0x01d7,	// (0x000ab925) list_chi_dic_pane_ParamLimits

0x01d7,	// (0x000ab925) list_chi_dic_pane

0x25e1,	// (0x000add2f) list_chi_dic_pane_t1_ParamLimits

0x25e1,	// (0x000add2f) list_chi_dic_pane_t1

0x9a62,	// (0x000b51b0) list_highlight_pane_cp020

0xb1b4,	// (0x000b6902) bg_cale_heading_pane_g1

0x25f4,	// (0x000add42) bg_cale_heading_pane_g2

0x25fc,	// (0x000add4a) bg_cale_heading_pane_g3

0x2604,	// (0x000add52) bg_cale_heading_pane_g4

0x260e,	// (0x000add5c) bg_cale_heading_pane_g5

0x2618,	// (0x000add66) bg_cale_heading_pane_g6

0x2620,	// (0x000add6e) bg_cale_heading_pane_g7

0x2628,	// (0x000add76) bg_cale_heading_pane_g8

0x2632,	// (0x000add80) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000baafd) bg_cale_heading_pane_g

0xb1b4,	// (0x000b6902) bg_cale_side_pane_g1

0x263c,	// (0x000add8a) bg_cale_side_pane_g2

0x2646,	// (0x000add94) bg_cale_side_pane_g3

0x2650,	// (0x000add9e) bg_cale_side_pane_g4

0x265a,	// (0x000adda8) bg_cale_side_pane_g5

0x2664,	// (0x000addb2) bg_cale_side_pane_g6

0x266e,	// (0x000addbc) bg_cale_side_pane_g7

0x2678,	// (0x000addc6) bg_cale_side_pane_g8

0x2680,	// (0x000addce) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000bab10) bg_cale_side_pane_g

0x2688,	// (0x000addd6) popup_call_status_window_ParamLimits

0x2688,	// (0x000addd6) popup_call_status_window

0xb1bc,	// (0x000b690a) stacon_top_pane

0xb1c4,	// (0x000b6912) status_pane_ParamLimits

0xb1c4,	// (0x000b6912) status_pane

0xb1d9,	// (0x000b6927) status_small_pane

0xb1e1,	// (0x000b692f) control_pane

0x9a62,	// (0x000b51b0) stacon_bottom_pane

0xb1e9,	// (0x000b6937) list_single_mce_smart_pane_t1_ParamLimits

0xb1e9,	// (0x000b6937) list_single_mce_smart_pane_t1

0xb1fc,	// (0x000b694a) list_single_mce_smart_pane_t2_ParamLimits

0xb1fc,	// (0x000b694a) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000bab23) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000bab23) list_single_mce_smart_pane_t

0x26d5,	// (0x000ade23) compass_pane

0x26e0,	// (0x000ade2e) main_location2_pane_t1

0x26f4,	// (0x000ade42) main_location2_pane_t2

0x270a,	// (0x000ade58) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000bab28) main_location2_pane_t

0xb21b,	// (0x000b6969) compass_pane_g1_ParamLimits

0xb21b,	// (0x000b6969) compass_pane_g1

0x2754,	// (0x000adea2) compass_pane_t1

0x2763,	// (0x000adeb1) compass_pane_t2

0x0005,

0xf3e3,	// (0x000bab31) compass_pane_t

0x27aa,	// (0x000adef8) text_secondary_cp61

0xb22f,	// (0x000b697d) navi_pane_cams_g5

0xb252,	// (0x000b69a0) navi_pane_im_t1

0xb260,	// (0x000b69ae) navi_pane_mp_g1_ParamLimits

0xb260,	// (0x000b69ae) navi_pane_mp_g1

0xb274,	// (0x000b69c2) navi_pane_mp_g2_ParamLimits

0xb274,	// (0x000b69c2) navi_pane_mp_g2

0xb280,	// (0x000b69ce) navi_pane_mp_g3_ParamLimits

0xb280,	// (0x000b69ce) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000bab45) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000bab45) navi_pane_mp_g

0xb28c,	// (0x000b69da) navi_pane_mp_t1

0xb29a,	// (0x000b69e8) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000bab4c) navi_pane_mp_t

0xb2d6,	// (0x000b6a24) navi_pane_vt_g1

0xb28c,	// (0x000b69da) navi_pane_vt_t1

0xb2de,	// (0x000b6a2c) navi_slider_pane

0xb2e6,	// (0x000b6a34) zooming_pane

0xb2ee,	// (0x000b6a3c) navi_slider_pane_g1

0x9e64,	// (0x000b55b2) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000bab53) navi_slider_pane_g

0xb312,	// (0x000b6a60) aid_levels_zoom

0xb31a,	// (0x000b6a68) zooming_pane_g1

0xb322,	// (0x000b6a70) zooming_pane_g2

0xb322,	// (0x000b6a70) zooming_pane_g3

0x0002,

0xf414,	// (0x000bab62) zooming_pane_g

0xb32a,	// (0x000b6a78) level_10_zoom

0xb333,	// (0x000b6a81) level_11_zoom

0xb33c,	// (0x000b6a8a) level_1_zoom

0xb345,	// (0x000b6a93) level_2_zoom

0xb34e,	// (0x000b6a9c) level_3_zoom

0xb357,	// (0x000b6aa5) level_4_zoom

0xb360,	// (0x000b6aae) level_5_zoom

0xb369,	// (0x000b6ab7) level_6_zoom

0xb372,	// (0x000b6ac0) level_7_zoom

0xb37b,	// (0x000b6ac9) level_8_zoom

0xb384,	// (0x000b6ad2) level_9_zoom

0xb395,	// (0x000b6ae3) popup_phob_thumbnail_window_g1

0xb39d,	// (0x000b6aeb) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x000bab69) popup_phob_thumbnail_window_g

0xc7ca,	// (0x000b7f18) level_1_location

0xc7d2,	// (0x000b7f20) level_2_location

0xc7da,	// (0x000b7f28) level_3_location

0xc7e2,	// (0x000b7f30) level_4_location

0xb2e6,	// (0x000b6a34) level_5_location

0x28f3,	// (0x000ae041) mce_icon_pane_g1

0x28fd,	// (0x000ae04b) mce_icon_pane_g2

0x0001,

0xf420,	// (0x000bab6e) mce_icon_pane_g

0x2905,	// (0x000ae053) main_mup_pane_g1_ParamLimits

0x2905,	// (0x000ae053) main_mup_pane_g1

0x291b,	// (0x000ae069) main_mup_pane_g2_ParamLimits

0x291b,	// (0x000ae069) main_mup_pane_g2

0x2933,	// (0x000ae081) main_mup_pane_g3_ParamLimits

0x2933,	// (0x000ae081) main_mup_pane_g3

0x294b,	// (0x000ae099) main_mup_pane_g4_ParamLimits

0x294b,	// (0x000ae099) main_mup_pane_g4

0x2963,	// (0x000ae0b1) main_mup_pane_g5_ParamLimits

0x2963,	// (0x000ae0b1) main_mup_pane_g5

0x297f,	// (0x000ae0cd) main_mup_pane_g6_ParamLimits

0x297f,	// (0x000ae0cd) main_mup_pane_g6

0x2999,	// (0x000ae0e7) main_mup_pane_g7_ParamLimits

0x2999,	// (0x000ae0e7) main_mup_pane_g7

0x29b7,	// (0x000ae105) main_mup_pane_g8_ParamLimits

0x29b7,	// (0x000ae105) main_mup_pane_g8

0x29d5,	// (0x000ae123) main_mup_pane_g9_ParamLimits

0x29d5,	// (0x000ae123) main_mup_pane_g9

0x29f1,	// (0x000ae13f) main_mup_pane_g10_ParamLimits

0x29f1,	// (0x000ae13f) main_mup_pane_g10

0x2a0f,	// (0x000ae15d) main_mup_pane_g11_ParamLimits

0x2a0f,	// (0x000ae15d) main_mup_pane_g11

0x2a29,	// (0x000ae177) main_mup_pane_g12_ParamLimits

0x2a29,	// (0x000ae177) main_mup_pane_g12

0x2a3f,	// (0x000ae18d) main_mup_pane_g13_ParamLimits

0x2a3f,	// (0x000ae18d) main_mup_pane_g13

0x000c,

0xf425,	// (0x000bab73) main_mup_pane_g_ParamLimits

0xf425,	// (0x000bab73) main_mup_pane_g

0x2a53,	// (0x000ae1a1) main_mup_pane_t1_ParamLimits

0x2a53,	// (0x000ae1a1) main_mup_pane_t1

0x2a6f,	// (0x000ae1bd) main_mup_pane_t2_ParamLimits

0x2a6f,	// (0x000ae1bd) main_mup_pane_t2

0x2a87,	// (0x000ae1d5) main_mup_pane_t3_ParamLimits

0x2a87,	// (0x000ae1d5) main_mup_pane_t3

0x2a9f,	// (0x000ae1ed) main_mup_pane_t4_ParamLimits

0x2a9f,	// (0x000ae1ed) main_mup_pane_t4

0x2abd,	// (0x000ae20b) main_mup_pane_t5_ParamLimits

0x2abd,	// (0x000ae20b) main_mup_pane_t5

0x2ad2,	// (0x000ae220) main_mup_pane_t6_ParamLimits

0x2ad2,	// (0x000ae220) main_mup_pane_t6

0x0005,

0xf440,	// (0x000bab8e) main_mup_pane_t_ParamLimits

0xf440,	// (0x000bab8e) main_mup_pane_t

0x2ae4,	// (0x000ae232) mup_progress_pane_ParamLimits

0x2ae4,	// (0x000ae232) mup_progress_pane

0x2af0,	// (0x000ae23e) mup_visualizer_pane_ParamLimits

0x2af0,	// (0x000ae23e) mup_visualizer_pane

0x2b24,	// (0x000ae272) mup_volume_pane_ParamLimits

0x2b24,	// (0x000ae272) mup_volume_pane

0xb3a5,	// (0x000b6af3) mup_visualizer_pane_g1_ParamLimits

0xb3a5,	// (0x000b6af3) mup_visualizer_pane_g1

0xb3a5,	// (0x000b6af3) mup_visualizer_pane_g2_ParamLimits

0xb3a5,	// (0x000b6af3) mup_visualizer_pane_g2

0xb21b,	// (0x000b6969) mup_visualizer_pane_g3_ParamLimits

0xb21b,	// (0x000b6969) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x000bab9b) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x000bab9b) mup_visualizer_pane_g

0xa822,	// (0x000b5f70) mup_volume_pane_g1

0xb3bb,	// (0x000b6b09) mup_volume_pane_g2

0x0001,

0xf454,	// (0x000baba2) mup_volume_pane_g

0xa822,	// (0x000b5f70) mup_progress_pane_g1

0xb3c4,	// (0x000b6b12) mup_progress_pane_g2

0xb3cd,	// (0x000b6b1b) mup_progress_pane_g3

0x0002,

0xf459,	// (0x000baba7) mup_progress_pane_g

0x9a62,	// (0x000b51b0) bg_popup_window_pane_cp05

0xb3d6,	// (0x000b6b24) heading_pane_cp02_ParamLimits

0xb3d6,	// (0x000b6b24) heading_pane_cp02

0xb3f2,	// (0x000b6b40) list_popup_blid_pane

0xb3fa,	// (0x000b6b48) list_blid_sat_info_pane_ParamLimits

0xb3fa,	// (0x000b6b48) list_blid_sat_info_pane

0xb40d,	// (0x000b6b5b) list_blid_sat_info_pane_g1

0xb415,	// (0x000b6b63) list_blid_sat_info_pane_t1

0x2c4e,	// (0x000ae39c) mup_equalizer_pane_ParamLimits

0x2c4e,	// (0x000ae39c) mup_equalizer_pane

0x2c6f,	// (0x000ae3bd) mup_equalizer_pane_cp1_ParamLimits

0x2c6f,	// (0x000ae3bd) mup_equalizer_pane_cp1

0x2c90,	// (0x000ae3de) mup_equalizer_pane_cp2_ParamLimits

0x2c90,	// (0x000ae3de) mup_equalizer_pane_cp2

0x2cb5,	// (0x000ae403) mup_equalizer_pane_cp3_ParamLimits

0x2cb5,	// (0x000ae403) mup_equalizer_pane_cp3

0x2cde,	// (0x000ae42c) mup_equalizer_pane_cp4_ParamLimits

0x2cde,	// (0x000ae42c) mup_equalizer_pane_cp4

0x2d07,	// (0x000ae455) mup_equalizer_pane_cp5

0x2d1f,	// (0x000ae46d) mup_equalizer_pane_cp6

0x2d37,	// (0x000ae485) mup_equalizer_pane_cp7

0xc6e4,	// (0x000b7e32) bg_popup_call_poc_act_pane_g9

0xc6ec,	// (0x000b7e3a) bg_popup_call_poc_act_pane_g10

0xc6f4,	// (0x000b7e42) bg_popup_call_poc_act_pane_g11

0x000a,

0x9cbd,	// (0x000b540b) mup_scale_pane

0xa822,	// (0x000b5f70) mup_scale_pane_g1

0xb423,	// (0x000b6b71) mup_scale_pane_g2

0x0006,

0xf475,	// (0x000babc3) mup_scale_pane_g

0xb447,	// (0x000b6b95) msg_data_pane

0xb44f,	// (0x000b6b9d) scroll_pane_cp017

0x2d61,	// (0x000ae4af) bg_list_pane_cp04_ParamLimits

0x2d61,	// (0x000ae4af) bg_list_pane_cp04

0xb457,	// (0x000b6ba5) msg_data_pane_g1

0x2d81,	// (0x000ae4cf) msg_data_pane_g2

0x2d8b,	// (0x000ae4d9) msg_data_pane_g3

0x2d95,	// (0x000ae4e3) msg_data_pane_g4

0x2d9d,	// (0x000ae4eb) msg_data_pane_g5

0x2da5,	// (0x000ae4f3) msg_data_pane_g6

0x2dad,	// (0x000ae4fb) msg_data_pane_g7

0x0006,

0xf484,	// (0x000babd2) msg_data_pane_g

0x2db5,	// (0x000ae503) msg_text_pane_ParamLimits

0x2db5,	// (0x000ae503) msg_text_pane

0x2ddb,	// (0x000ae529) qrid_highlight_pane_cp011_ParamLimits

0x2ddb,	// (0x000ae529) qrid_highlight_pane_cp011

0x9a62,	// (0x000b51b0) msg_body_pane

0x9a62,	// (0x000b51b0) msg_header_pane

0xb45f,	// (0x000b6bad) input_focus_pane_cp07

0x9e7e,	// (0x000b55cc) msg_header_pane_t1_ParamLimits

0x9e7e,	// (0x000b55cc) msg_header_pane_t1

0x9e90,	// (0x000b55de) msg_header_pane_t2_ParamLimits

0x9e90,	// (0x000b55de) msg_header_pane_t2

0x0001,

0xf498,	// (0x000babe6) msg_header_pane_t_ParamLimits

0xf498,	// (0x000babe6) msg_header_pane_t

0xb474,	// (0x000b6bc2) msg_body_pane_g1

0x2e0a,	// (0x000ae558) msg_body_pane_t1_ParamLimits

0x2e0a,	// (0x000ae558) msg_body_pane_t1

0x9ea2,	// (0x000b55f0) msg_body_pane_t2_ParamLimits

0x9ea2,	// (0x000b55f0) msg_body_pane_t2

0x9eb4,	// (0x000b5602) msg_body_pane_t3_ParamLimits

0x9eb4,	// (0x000b5602) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000babeb) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000babeb) msg_body_pane_t

0x2e75,	// (0x000ae5c3) main_viewer_pane_g1_ParamLimits

0x2e75,	// (0x000ae5c3) main_viewer_pane_g1

0x2e83,	// (0x000ae5d1) main_viewer_pane_g2_ParamLimits

0x2e83,	// (0x000ae5d1) main_viewer_pane_g2

0x2e91,	// (0x000ae5df) main_viewer_pane_g3_ParamLimits

0x2e91,	// (0x000ae5df) main_viewer_pane_g3

0x2ea0,	// (0x000ae5ee) main_viewer_pane_g4_ParamLimits

0x2ea0,	// (0x000ae5ee) main_viewer_pane_g4

0x9ede,	// (0x000b562c) main_viewer_pane_g5_ParamLimits

0x9ede,	// (0x000b562c) main_viewer_pane_g5

0x9ede,	// (0x000b562c) main_viewer_pane_g7_ParamLimits

0x9ede,	// (0x000b562c) main_viewer_pane_g7

0x9ef0,	// (0x000b563e) main_viewer_pane_g8_ParamLimits

0x9ef0,	// (0x000b563e) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000babfb) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000babfb) main_viewer_pane_g

0xb47c,	// (0x000b6bca) viewer_content_pane_ParamLimits

0xb47c,	// (0x000b6bca) viewer_content_pane

0x2ede,	// (0x000ae62c) main_postcard_pane_g1_ParamLimits

0x2ede,	// (0x000ae62c) main_postcard_pane_g1

0x2ef4,	// (0x000ae642) main_postcard_pane_g2_ParamLimits

0x2ef4,	// (0x000ae642) main_postcard_pane_g2

0x2f0a,	// (0x000ae658) main_postcard_pane_g3_ParamLimits

0x2f0a,	// (0x000ae658) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000bac0c) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000bac0c) main_postcard_pane_g

0x2f21,	// (0x000ae66f) main_postcard_pane_g4

0xc90d,	// (0x000b805b) smil_status_volume_pane_g2

0x2f64,	// (0x000ae6b2) postcard_pane_ParamLimits

0x2f64,	// (0x000ae6b2) postcard_pane

0xb48a,	// (0x000b6bd8) postcard_pane_g1_ParamLimits

0xb48a,	// (0x000b6bd8) postcard_pane_g1

0x2fb4,	// (0x000ae702) postcard_pane_g2_ParamLimits

0x2fb4,	// (0x000ae702) postcard_pane_g2

0x2fc0,	// (0x000ae70e) postcard_pane_g3_ParamLimits

0x2fc0,	// (0x000ae70e) postcard_pane_g3

0xb498,	// (0x000b6be6) postcard_pane_g4_ParamLimits

0xb498,	// (0x000b6be6) postcard_pane_g4

0x2fcc,	// (0x000ae71a) postcard_pane_g5_ParamLimits

0x2fcc,	// (0x000ae71a) postcard_pane_g5

0x2fe1,	// (0x000ae72f) postcard_pane_g6_ParamLimits

0x2fe1,	// (0x000ae72f) postcard_pane_g6

0xb48a,	// (0x000b6bd8) postcard_pane_g7_ParamLimits

0xb48a,	// (0x000b6bd8) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000bac19) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000bac19) postcard_pane_g

0x2ff9,	// (0x000ae747) main_mp2_pane_g1_ParamLimits

0x2ff9,	// (0x000ae747) main_mp2_pane_g1

0x3007,	// (0x000ae755) main_mp2_pane_g2_ParamLimits

0x3007,	// (0x000ae755) main_mp2_pane_g2

0x3013,	// (0x000ae761) main_mp2_pane_g3_ParamLimits

0x3013,	// (0x000ae761) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000bac28) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000bac28) main_mp2_pane_g

0x301f,	// (0x000ae76d) main_mp2_pane_t1_ParamLimits

0x301f,	// (0x000ae76d) main_mp2_pane_t1

0x3036,	// (0x000ae784) main_mp2_pane_t2_ParamLimits

0x3036,	// (0x000ae784) main_mp2_pane_t2

0x3048,	// (0x000ae796) main_mp2_pane_t3_ParamLimits

0x3048,	// (0x000ae796) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000bac2f) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000bac2f) main_mp2_pane_t

0xb4a6,	// (0x000b6bf4) pec_content_pane_ParamLimits

0xb4a6,	// (0x000b6bf4) pec_content_pane

0xab50,	// (0x000b629e) scroll_pane_cp015

0xb4b8,	// (0x000b6c06) pec_attribute_pane_ParamLimits

0xb4b8,	// (0x000b6c06) pec_attribute_pane

0x305a,	// (0x000ae7a8) pec_content_pane_g1_ParamLimits

0x305a,	// (0x000ae7a8) pec_content_pane_g1

0xb4c8,	// (0x000b6c16) pec_content_pane_t1_ParamLimits

0xb4c8,	// (0x000b6c16) pec_content_pane_t1

0xb4da,	// (0x000b6c28) pec_content_pane_t2_ParamLimits

0xb4da,	// (0x000b6c28) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000bac36) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000bac36) pec_content_pane_t

0x3066,	// (0x000ae7b4) list_single_graphic_pane_cp01_ParamLimits

0x3066,	// (0x000ae7b4) list_single_graphic_pane_cp01

0x9cbd,	// (0x000b540b) bg_popup_sub_pane_cp04

0xb4ec,	// (0x000b6c3a) popup_mup_playback_window_g1

0xb4f8,	// (0x000b6c46) popup_mup_playback_window_t1

0xb50d,	// (0x000b6c5b) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000bac3b) popup_mup_playback_window_t

0xb544,	// (0x000b6c92) main_image_pane_g1_ParamLimits

0xb544,	// (0x000b6c92) main_image_pane_g1

0xb587,	// (0x000b6cd5) scroll_pane_cp018_ParamLimits

0xb587,	// (0x000b6cd5) scroll_pane_cp018

0xb59f,	// (0x000b6ced) scroll_pane_cp016_ParamLimits

0xb59f,	// (0x000b6ced) scroll_pane_cp016

0x3135,	// (0x000ae883) smil2_image_pane_ParamLimits

0x3135,	// (0x000ae883) smil2_image_pane

0x316b,	// (0x000ae8b9) smil2_root_pane_ParamLimits

0x316b,	// (0x000ae8b9) smil2_root_pane

0x31a3,	// (0x000ae8f1) smil2_text_pane_ParamLimits

0x31a3,	// (0x000ae8f1) smil2_text_pane

0x9a62,	// (0x000b51b0) bg_list_pane_cp06

0xb5db,	// (0x000b6d29) grid_radio_pane

0x9a62,	// (0x000b51b0) bg_popup_window_pane_cp06

0xb5e5,	// (0x000b6d33) main_fmradio_pane_t1

0xb098,	// (0x000b67e6) heading_pane_cp04

0xb5f3,	// (0x000b6d41) main_fmradio_pane_t2

0xc6fc,	// (0x000b7e4a) popup_cale_lunar_info_window_g1

0xb601,	// (0x000b6d4f) main_fmradio_pane_t3

0xc704,	// (0x000b7e52) popup_cale_lunar_info_window_g2

0xb611,	// (0x000b6d5f) main_fmradio_pane_t4

0x0001,

0xb61f,	// (0x000b6d6d) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000bad16) popup_cale_lunar_info_window_g

0xf502,	// (0x000bac50) main_fmradio_pane_t

0xb62d,	// (0x000b6d7b) wait_bar_pane_cp03

0xad93,	// (0x000b64e1) cell_fmradio_pane_ParamLimits

0xad93,	// (0x000b64e1) cell_fmradio_pane

0xb48a,	// (0x000b6bd8) cell_fmradio_pane_g1_ParamLimits

0xb48a,	// (0x000b6bd8) cell_fmradio_pane_g1

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp011

0xb635,	// (0x000b6d83) poc_content_pane_ParamLimits

0xb635,	// (0x000b6d83) poc_content_pane

0xb647,	// (0x000b6d95) scroll_pane_cp019

0x3233,	// (0x000ae981) popup_call_poc_act_window_ParamLimits

0x3233,	// (0x000ae981) popup_call_poc_act_window

0x3257,	// (0x000ae9a5) popup_call_poc_inact_window_ParamLimits

0x3257,	// (0x000ae9a5) popup_call_poc_inact_window

0xf59f,	// (0x000baced) bg_popup_call_poc_act_pane_g

0xc674,	// (0x000b7dc2) bg_popup_call_poc_inact_pane_g1

0xc67c,	// (0x000b7dca) bg_popup_call_poc_inact_pane_g2

0xb64f,	// (0x000b6d9d) popup_call_poc_act_window_g2

0xc684,	// (0x000b7dd2) bg_popup_call_poc_inact_pane_g3

0xc68c,	// (0x000b7dda) bg_popup_call_poc_inact_pane_g4

0xc694,	// (0x000b7de2) bg_popup_call_poc_inact_pane_g5

0xb657,	// (0x000b6da5) popup_call_poc_act_window_t1_ParamLimits

0xb657,	// (0x000b6da5) popup_call_poc_act_window_t1

0xb67f,	// (0x000b6dcd) popup_call_poc_act_window_t2_ParamLimits

0xb67f,	// (0x000b6dcd) popup_call_poc_act_window_t2

0xb6a7,	// (0x000b6df5) popup_call_poc_act_window_t3_ParamLimits

0xb6a7,	// (0x000b6df5) popup_call_poc_act_window_t3

0xb6cf,	// (0x000b6e1d) popup_call_poc_act_window_t4_ParamLimits

0xb6cf,	// (0x000b6e1d) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x000bac5b) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x000bac5b) popup_call_poc_act_window_t

0xc69c,	// (0x000b7dea) bg_popup_call_poc_inact_pane_g6

0xc6a4,	// (0x000b7df2) bg_popup_call_poc_inact_pane_g7

0xc6ac,	// (0x000b7dfa) bg_popup_call_poc_inact_pane_g8

0xb6e1,	// (0x000b6e2f) popup_call_poc_inact_window_g2

0xc6b4,	// (0x000b7e02) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000bacda) bg_popup_call_poc_inact_pane_g

0xb6e9,	// (0x000b6e37) popup_call_poc_inact_window_t1_ParamLimits

0xb6e9,	// (0x000b6e37) popup_call_poc_inact_window_t1

0xb6fe,	// (0x000b6e4c) popup_call_poc_inact_window_t2_ParamLimits

0xb6fe,	// (0x000b6e4c) popup_call_poc_inact_window_t2

0xb713,	// (0x000b6e61) popup_call_poc_inact_window_t3_ParamLimits

0xb713,	// (0x000b6e61) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x000bac64) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x000bac64) popup_call_poc_inact_window_t

0xc880,	// (0x000b7fce) context_pane_ParamLimits

0x3aff,	// (0x000af24d) signal_pane_ParamLimits

0xb2e6,	// (0x000b6a34) main_call2_pane

0xc86e,	// (0x000b7fbc) popup_phob_thumbnail2_window_ParamLimits

0xc86e,	// (0x000b7fbc) popup_phob_thumbnail2_window

0x9ec6,	// (0x000b5614) aid_hotspot_pointer_arrow_pane

0x9ece,	// (0x000b561c) aid_hotspot_pointer_hand_pane

0x35bf,	// (0x000aed0d) phob_pre_status_pane_g5

0x0d8b,	// (0x000ac4d9) cams_zoom_pane_ParamLimits

0x0d9a,	// (0x000ac4e8) image_vga_pane_ParamLimits

0x0db4,	// (0x000ac502) main_camera_pane_g1_ParamLimits

0x0dc6,	// (0x000ac514) main_camera_pane_g2_ParamLimits

0x0dd6,	// (0x000ac524) main_camera_pane_g3_ParamLimits

0x0dea,	// (0x000ac538) main_camera_pane_g4_ParamLimits

0x0dfe,	// (0x000ac54c) main_camera_pane_g5_ParamLimits

0x0e12,	// (0x000ac560) main_camera_pane_g6_ParamLimits

0x0e26,	// (0x000ac574) main_camera_pane_g7_ParamLimits

0xf215,	// (0x000ba963) main_camera_pane_g_ParamLimits

0x0e3a,	// (0x000ac588) main_camera_pane_t1_ParamLimits

0x0e50,	// (0x000ac59e) main_camera_pane_t2_ParamLimits

0xf226,	// (0x000ba974) main_camera_pane_t_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_preview_window_pane_cp01_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_preview_window_pane_cp01

0xb728,	// (0x000b6e76) popup_phob_thumbnail2_window_g1_ParamLimits

0xb728,	// (0x000b6e76) popup_phob_thumbnail2_window_g1

0x9a62,	// (0x000b51b0) call2_cli_visual_pane

0x328b,	// (0x000ae9d9) popup_call2_audio_conf_window_ParamLimits

0x328b,	// (0x000ae9d9) popup_call2_audio_conf_window

0x32b3,	// (0x000aea01) popup_call2_audio_first_window_ParamLimits

0x32b3,	// (0x000aea01) popup_call2_audio_first_window

0x3349,	// (0x000aea97) popup_call2_audio_in_window_ParamLimits

0x3349,	// (0x000aea97) popup_call2_audio_in_window

0x3395,	// (0x000aeae3) popup_call2_audio_out_window_ParamLimits

0x3395,	// (0x000aeae3) popup_call2_audio_out_window

0x3407,	// (0x000aeb55) popup_call2_audio_second_window_ParamLimits

0x3407,	// (0x000aeb55) popup_call2_audio_second_window

0x346d,	// (0x000aebbb) popup_call2_audio_wait_window_ParamLimits

0x346d,	// (0x000aebbb) popup_call2_audio_wait_window

0x9a62,	// (0x000b51b0) bg_popup_call2_act_pane_cp03

0x9c9f,	// (0x000b53ed) list_conf_pane_cp

0xb734,	// (0x000b6e82) popup_call2_audio_conf_window_t1

0xb742,	// (0x000b6e90) list_single_graphic_popup_conf2_pane_ParamLimits

0xb742,	// (0x000b6e90) list_single_graphic_popup_conf2_pane

0xb107,	// (0x000b6855) list_highlight_pane_cp04

0xb755,	// (0x000b6ea3) list_single_graphic_popup_conf2_pane_g1

0xb118,	// (0x000b6866) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x000bac6b) list_single_graphic_popup_conf2_pane_g

0xb75f,	// (0x000b6ead) list_single_graphic_popup_conf2_pane_t1

0xb76d,	// (0x000b6ebb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb76d,	// (0x000b6ebb) bg_popup_call2_act_pane_cp01

0xb939,	// (0x000b7087) call_type_pane_cp05_ParamLimits

0xb939,	// (0x000b7087) call_type_pane_cp05

0xb98d,	// (0x000b70db) popup_call2_audio_second_window_g1_ParamLimits

0xb98d,	// (0x000b70db) popup_call2_audio_second_window_g1

0xb9e1,	// (0x000b712f) popup_call2_audio_second_window_g2_ParamLimits

0xb9e1,	// (0x000b712f) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x000bac70) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x000bac70) popup_call2_audio_second_window_g

0xba46,	// (0x000b7194) popup_call2_audio_second_window_t1_ParamLimits

0xba46,	// (0x000b7194) popup_call2_audio_second_window_t1

0xbb01,	// (0x000b724f) popup_call2_audio_second_window_t2_ParamLimits

0xbb01,	// (0x000b724f) popup_call2_audio_second_window_t2

0xbb54,	// (0x000b72a2) popup_call2_audio_second_window_t3_ParamLimits

0xbb54,	// (0x000b72a2) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x000bac77) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x000bac77) popup_call2_audio_second_window_t

0x9a62,	// (0x000b51b0) bg_popup_call2_in_pane_cp02

0x9a6c,	// (0x000b51ba) call_type_pane_cp04

0x9a74,	// (0x000b51c2) popup_call2_audio_wait_window_g1

0x9a7c,	// (0x000b51ca) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000ba850) popup_call2_audio_wait_window_g

0x9a84,	// (0x000b51d2) popup_call2_audio_wait_window_t3

0xbc47,	// (0x000b7395) bg_popup_call2_act_pane_ParamLimits

0xbc47,	// (0x000b7395) bg_popup_call2_act_pane

0xbd07,	// (0x000b7455) call_type_pane_cp03_ParamLimits

0xbd07,	// (0x000b7455) call_type_pane_cp03

0xbd6b,	// (0x000b74b9) popup_call2_audio_first_window_g1_ParamLimits

0xbd6b,	// (0x000b74b9) popup_call2_audio_first_window_g1

0xbddb,	// (0x000b7529) popup_call2_audio_first_window_g2_ParamLimits

0xbddb,	// (0x000b7529) popup_call2_audio_first_window_g2

0xb3a5,	// (0x000b6af3) popup_call2_audio_first_window_g3_ParamLimits

0xb3a5,	// (0x000b6af3) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x000bac80) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x000bac80) popup_call2_audio_first_window_g

0xbeb9,	// (0x000b7607) popup_call2_audio_first_window_t1_ParamLimits

0xbeb9,	// (0x000b7607) popup_call2_audio_first_window_t1

0xbfbc,	// (0x000b770a) popup_call2_audio_first_window_t4_ParamLimits

0xbfbc,	// (0x000b770a) popup_call2_audio_first_window_t4

0xc09f,	// (0x000b77ed) popup_call2_audio_first_window_t5_ParamLimits

0xc09f,	// (0x000b77ed) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x000bac8b) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x000bac8b) popup_call2_audio_first_window_t

0x9cb5,	// (0x000b5403) bg_popup_call2_act_pane_g1

0xc70e,	// (0x000b7e5c) popup_cale_lunar_info_window_t1

0xc71c,	// (0x000b7e6a) popup_cale_lunar_info_window_t2

0xc72a,	// (0x000b7e78) popup_cale_lunar_info_window_t3

0x9a62,	// (0x000b51b0) bg_popup_call2_bubble_pane

0xc1a0,	// (0x000b78ee) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a0,	// (0x000b78ee) bg_popup_call2_in_pane_cp01

0x973e,	// (0x000b4e8c) call_type_pane_cp02

0xc1e8,	// (0x000b7936) popup_call2_audio_out_window_g1_ParamLimits

0xc1e8,	// (0x000b7936) popup_call2_audio_out_window_g1

0xc214,	// (0x000b7962) popup_call2_audio_out_window_g2_ParamLimits

0xc214,	// (0x000b7962) popup_call2_audio_out_window_g2

0xc23c,	// (0x000b798a) popup_call2_audio_out_window_g3_ParamLimits

0xc23c,	// (0x000b798a) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x000bac94) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x000bac94) popup_call2_audio_out_window_g

0xc277,	// (0x000b79c5) popup_call2_audio_out_window_t1_ParamLimits

0xc277,	// (0x000b79c5) popup_call2_audio_out_window_t1

0xc2d6,	// (0x000b7a24) popup_call2_audio_out_window_t2_ParamLimits

0xc2d6,	// (0x000b7a24) popup_call2_audio_out_window_t2

0xc32a,	// (0x000b7a78) popup_call2_audio_out_window_t3_ParamLimits

0xc32a,	// (0x000b7a78) popup_call2_audio_out_window_t3

0xc340,	// (0x000b7a8e) popup_call2_audio_out_window_t4_ParamLimits

0xc340,	// (0x000b7a8e) popup_call2_audio_out_window_t4

0xc356,	// (0x000b7aa4) popup_call2_audio_out_window_t5_ParamLimits

0xc356,	// (0x000b7aa4) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x000bac9d) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x000bac9d) popup_call2_audio_out_window_t

0xc3ba,	// (0x000b7b08) bg_popup_call2_in_pane_ParamLimits

0xc3ba,	// (0x000b7b08) bg_popup_call2_in_pane

0xc416,	// (0x000b7b64) popup_call2_audio_in_window_g1_ParamLimits

0xc416,	// (0x000b7b64) popup_call2_audio_in_window_g1

0xc44e,	// (0x000b7b9c) popup_call2_audio_in_window_g2_ParamLimits

0xc44e,	// (0x000b7b9c) popup_call2_audio_in_window_g2

0xc486,	// (0x000b7bd4) popup_call2_audio_in_window_g3_ParamLimits

0xc486,	// (0x000b7bd4) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x000bacaa) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x000bacaa) popup_call2_audio_in_window_g

0xc4de,	// (0x000b7c2c) popup_call2_audio_in_window_t1_ParamLimits

0xc4de,	// (0x000b7c2c) popup_call2_audio_in_window_t1

0xc55e,	// (0x000b7cac) popup_call2_audio_in_window_t2_ParamLimits

0xc55e,	// (0x000b7cac) popup_call2_audio_in_window_t2

0xc5de,	// (0x000b7d2c) popup_call2_audio_in_window_t3_ParamLimits

0xc5de,	// (0x000b7d2c) popup_call2_audio_in_window_t3

0xc5f8,	// (0x000b7d46) popup_call2_audio_in_window_t4_ParamLimits

0xc5f8,	// (0x000b7d46) popup_call2_audio_in_window_t4

0xc60a,	// (0x000b7d58) popup_call2_audio_in_window_t5_ParamLimits

0xc60a,	// (0x000b7d58) popup_call2_audio_in_window_t5

0xc61f,	// (0x000b7d6d) popup_call2_audio_in_window_t6_ParamLimits

0xc61f,	// (0x000b7d6d) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x000bacb3) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x000bacb3) popup_call2_audio_in_window_t

0x9cb5,	// (0x000b5403) bg_popup_call2_in_pane_g1

0xc738,	// (0x000b7e86) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000bad1b) popup_cale_lunar_info_window_t

0x9cbd,	// (0x000b540b) bg_popup_call2_rect_pane_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_call2_rect_pane

0x9a62,	// (0x000b51b0) call2_cli_visual_graphic_pane

0x9a62,	// (0x000b51b0) call2_cli_visual_text_pane

0x9f08,	// (0x000b5656) smil_status_volume_pane_g3

0x0002,

0xa822,	// (0x000b5f70) call2_cli_visual_graphic_pane_g1

0xa822,	// (0x000b5f70) call2_cli_visual_graphic_pane_g2

0xa822,	// (0x000b5f70) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x000bacc0) call2_cli_visual_graphic_pane_g

0xc634,	// (0x000b7d82) bg_popup_call2_rect_pane_g1

0xa8c0,	// (0x000b600e) bg_popup_call2_rect_pane_g2

0xc63c,	// (0x000b7d8a) bg_popup_call2_rect_pane_g3

0xc644,	// (0x000b7d92) bg_popup_call2_rect_pane_g4

0xc64c,	// (0x000b7d9a) bg_popup_call2_rect_pane_g5

0xc654,	// (0x000b7da2) bg_popup_call2_rect_pane_g6

0xc65c,	// (0x000b7daa) bg_popup_call2_rect_pane_g7

0xc664,	// (0x000b7db2) bg_popup_call2_rect_pane_g8

0xc66c,	// (0x000b7dba) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x000bacc7) bg_popup_call2_rect_pane_g

0xc674,	// (0x000b7dc2) bg_popup_call2_bubble_pane_g1

0xc67c,	// (0x000b7dca) bg_popup_call2_bubble_pane_g2

0xc684,	// (0x000b7dd2) bg_popup_call2_bubble_pane_g3

0xc68c,	// (0x000b7dda) bg_popup_call2_bubble_pane_g4

0xc694,	// (0x000b7de2) bg_popup_call2_bubble_pane_g5

0xc69c,	// (0x000b7dea) bg_popup_call2_bubble_pane_g6

0xc6a4,	// (0x000b7df2) bg_popup_call2_bubble_pane_g7

0xc6ac,	// (0x000b7dfa) bg_popup_call2_bubble_pane_g8

0xc6b4,	// (0x000b7e02) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000bacda) bg_popup_call2_bubble_pane_g

0x0581,	// (0x000abccf) aid_cale_week_size_cell_pane

0x0e6a,	// (0x000ac5b8) aid_cams_cif_uncrop_pane_ParamLimits

0x0e6a,	// (0x000ac5b8) aid_cams_cif_uncrop_pane

0x1023,	// (0x000ac771) aid_cams_size_cell_ParamLimits

0x1023,	// (0x000ac771) aid_cams_size_cell

0x1037,	// (0x000ac785) grid_cams_pane_ParamLimits

0x1051,	// (0x000ac79f) linegrid_cams_pane_ParamLimits

0x1244,	// (0x000ac992) call_video_pane_t1

0x125e,	// (0x000ac9ac) call_video_pane_t2

0x0001,

0xf279,	// (0x000ba9c7) call_video_pane_t

0x1692,	// (0x000acde0) aid_cale_month_size_cell_pane_ParamLimits

0x1692,	// (0x000acde0) aid_cale_month_size_cell_pane

0xf616,	// (0x000bad64) smil_status_volume_pane_g

0x9f15,	// (0x000b5663) volume_smil_pane_ParamLimits

0x9602,	// (0x000b4d50) aid_popup2_width_pane

0x04cd,	// (0x000abc1b) cell_qdial_pane_g4_ParamLimits

0x04cd,	// (0x000abc1b) cell_qdial_pane_g4

0x2734,	// (0x000ade82) aid_blid_cardinal_pane_ParamLimits

0x2740,	// (0x000ade8e) aid_blid_destination_pane_ParamLimits

0x2740,	// (0x000ade8e) aid_blid_destination_pane

0x9cbd,	// (0x000b540b) bg_popup_call_poc_act_pane_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_call_poc_act_pane

0x9cbd,	// (0x000b540b) bg_popup_call_poc_inact_pane_ParamLimits

0x9cbd,	// (0x000b540b) bg_popup_call_poc_inact_pane

0xc6bc,	// (0x000b7e0a) bg_popup_call_poc_act_pane_g1

0xc6c4,	// (0x000b7e12) bg_popup_call_poc_act_pane_g2

0xc6cc,	// (0x000b7e1a) bg_popup_call_poc_act_pane_g3

0xc68c,	// (0x000b7dda) bg_popup_call_poc_act_pane_g4

0xc694,	// (0x000b7de2) bg_popup_call_poc_act_pane_g5

0xc6d4,	// (0x000b7e22) bg_popup_call_poc_act_pane_g6

0xc6a4,	// (0x000b7df2) bg_popup_call_poc_act_pane_g7

0xc6dc,	// (0x000b7e2a) bg_popup_call_poc_act_pane_g8

0x9a62,	// (0x000b51b0) main_usb_pane

0xc845,	// (0x000b7f93) popup_cale_lunar_info_window

0x1527,	// (0x000acc75) im_reading_pane_t1_ParamLimits

0xaaa8,	// (0x000b61f6) list_im_pane_ParamLimits

0xaab9,	// (0x000b6207) scroll_pane_cp07_ParamLimits

0x9a62,	// (0x000b51b0) grid_highlight_pane_cp012

0x9cbd,	// (0x000b540b) mup_scale_pane_ParamLimits

0xb48a,	// (0x000b6bd8) main_usb_pane_g1_ParamLimits

0xb48a,	// (0x000b6bd8) main_usb_pane_g1

0x34cb,	// (0x000aec19) main_usb_pane_g2_ParamLimits

0x34cb,	// (0x000aec19) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000bad04) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000bad04) main_usb_pane_g

0x34e1,	// (0x000aec2f) main_usb_pane_t1_ParamLimits

0x34e1,	// (0x000aec2f) main_usb_pane_t1

0x34f3,	// (0x000aec41) main_usb_pane_t2_ParamLimits

0x34f3,	// (0x000aec41) main_usb_pane_t2

0x3505,	// (0x000aec53) main_usb_pane_t3_ParamLimits

0x3505,	// (0x000aec53) main_usb_pane_t3

0x3517,	// (0x000aec65) main_usb_pane_t4_ParamLimits

0x3517,	// (0x000aec65) main_usb_pane_t4

0x352c,	// (0x000aec7a) main_usb_pane_t5_ParamLimits

0x352c,	// (0x000aec7a) main_usb_pane_t5

0x3541,	// (0x000aec8f) main_usb_pane_t6_ParamLimits

0x3541,	// (0x000aec8f) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000bad09) main_usb_pane_t_ParamLimits

0x26d5,	// (0x000ade23) aid_text_placing

0x26e0,	// (0x000ade2e) main_location2_pane_t1_ParamLimits

0x26f4,	// (0x000ade42) main_location2_pane_t2_ParamLimits

0x270a,	// (0x000ade58) main_location2_pane_t3_ParamLimits

0x2720,	// (0x000ade6e) main_location2_pane_t4_ParamLimits

0x2720,	// (0x000ade6e) main_location2_pane_t4

0xf3da,	// (0x000bab28) main_location2_pane_t_ParamLimits

0x9cf9,	// (0x000b5447) find_pinb_pane_g2_ParamLimits

0x9cf9,	// (0x000b5447) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000ba876) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000ba876) find_pinb_pane_g

0x9d05,	// (0x000b5453) find_pinb_pane_t1_ParamLimits

0xa762,	// (0x000b5eb0) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000ba87b) find_pinb_pane_t_ParamLimits

0x9a62,	// (0x000b51b0) main_call3_pane

0x1bfd,	// (0x000ad34b) cale_month_day_heading_pane_t1_ParamLimits

0x1c83,	// (0x000ad3d1) cale_month_day_heading_pane_t2_ParamLimits

0x1d14,	// (0x000ad462) cale_month_day_heading_pane_t3_ParamLimits

0x1da5,	// (0x000ad4f3) cale_month_day_heading_pane_t4_ParamLimits

0x1e36,	// (0x000ad584) cale_month_day_heading_pane_t5_ParamLimits

0x1ecf,	// (0x000ad61d) cale_month_day_heading_pane_t6_ParamLimits

0x1f70,	// (0x000ad6be) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000ba9ff) cale_month_day_heading_pane_t_ParamLimits

0x22fe,	// (0x000ada4c) smil_status_volume_pane

0x2f88,	// (0x000ae6d6) postcard_address_pane_ParamLimits

0x2f88,	// (0x000ae6d6) postcard_address_pane

0x2f9e,	// (0x000ae6ec) postcard_message_pane_ParamLimits

0x2f9e,	// (0x000ae6ec) postcard_message_pane

0x34a7,	// (0x000aebf5) call2_cli_visual_pane_t1_ParamLimits

0x34a7,	// (0x000aebf5) call2_cli_visual_pane_t1

0x3d34,	// (0x000af482) postcard_message_pane_t1_ParamLimits

0x3d34,	// (0x000af482) postcard_message_pane_t1

0x3d1d,	// (0x000af46b) postcard_address_pane_t1_ParamLimits

0x3d1d,	// (0x000af46b) postcard_address_pane_t1

0x3d09,	// (0x000af457) popup_call3_audio_in_window_ParamLimits

0x3d09,	// (0x000af457) popup_call3_audio_in_window

0x3b8e,	// (0x000af2dc) bg_popup_call3_in_pane_ParamLimits

0x3b8e,	// (0x000af2dc) bg_popup_call3_in_pane

0x3c0a,	// (0x000af358) popup_call3_audio_in_window_g1_ParamLimits

0x3c0a,	// (0x000af358) popup_call3_audio_in_window_g1

0x3c2a,	// (0x000af378) popup_call3_audio_in_window_g2_ParamLimits

0x3c2a,	// (0x000af378) popup_call3_audio_in_window_g2

0x3c4a,	// (0x000af398) popup_call3_audio_in_window_g3_ParamLimits

0x3c4a,	// (0x000af398) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x000bad6b) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x000bad6b) popup_call3_audio_in_window_g

0x3c7b,	// (0x000af3c9) popup_call3_audio_in_window_t1_ParamLimits

0x3c7b,	// (0x000af3c9) popup_call3_audio_in_window_t1

0x3cb9,	// (0x000af407) popup_call3_audio_in_window_t2_ParamLimits

0x3cb9,	// (0x000af407) popup_call3_audio_in_window_t2

0x3cf7,	// (0x000af445) popup_call3_audio_in_window_t3_ParamLimits

0x3cf7,	// (0x000af445) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x000bad74) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x000bad74) popup_call3_audio_in_window_t

0xb2e6,	// (0x000b6a34) bg_popup_call3_rect_pane

0xc634,	// (0x000b7d82) bg_popup_call3_rect_pane_g1

0xa8c0,	// (0x000b600e) bg_popup_call3_rect_pane_g2

0xc63c,	// (0x000b7d8a) bg_popup_call3_rect_pane_g3

0xc644,	// (0x000b7d92) bg_popup_call3_rect_pane_g4

0xc64c,	// (0x000b7d9a) bg_popup_call3_rect_pane_g5

0xc654,	// (0x000b7da2) bg_popup_call3_rect_pane_g6

0xc65c,	// (0x000b7daa) bg_popup_call3_rect_pane_g7

0x2b3a,	// (0x000ae288) mup_visualizer_osc_pane

0xb3b3,	// (0x000b6b01) mup_visualizer_spec_pane

0x3bbe,	// (0x000af30c) call3_video_qcif_pane_ParamLimits

0x3bbe,	// (0x000af30c) call3_video_qcif_pane

0x3bd1,	// (0x000af31f) call3_video_qcif_uncrop_pane_ParamLimits

0x3bd1,	// (0x000af31f) call3_video_qcif_uncrop_pane

0x3be1,	// (0x000af32f) call3_video_subqcif_pane_ParamLimits

0x3be1,	// (0x000af32f) call3_video_subqcif_pane

0x3bf7,	// (0x000af345) call3_video_subqcif_uncrop_pane_ParamLimits

0x3bf7,	// (0x000af345) call3_video_subqcif_uncrop_pane

0x3c6a,	// (0x000af3b8) popup_call3_audio_in_window_g4_ParamLimits

0x3c6a,	// (0x000af3b8) popup_call3_audio_in_window_g4

0x3b7d,	// (0x000af2cb) mup_spec_half_pane

0x3b86,	// (0x000af2d4) mup_spec_half_pane_cp

0xc8e0,	// (0x000b802e) mup_osc_middle_pane

0xc8e9,	// (0x000b8037) mup_visualizer_osc_pane_g1

0x3b5d,	// (0x000af2ab) mup_spec_bar_pane_ParamLimits

0x3b5d,	// (0x000af2ab) mup_spec_bar_pane

0xc8cd,	// (0x000b801b) mup_spec_bar_pane_g1

0xc8d7,	// (0x000b8025) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000bad5f) mup_spec_bar_pane_g

0x0581,	// (0x000abccf) aid_cale_week_size_cell_pane_ParamLimits

0x059b,	// (0x000abce9) bg_cale_heading_pane_ParamLimits

0xa8f4,	// (0x000b6042) bg_cale_pane_cp01_ParamLimits

0x05c0,	// (0x000abd0e) cale_week_corner_pane_ParamLimits

0x05df,	// (0x000abd2d) cale_week_day_heading_pane_ParamLimits

0x0609,	// (0x000abd57) cale_week_scroll_pane_g1_ParamLimits

0x0629,	// (0x000abd77) cale_week_scroll_pane_g2_ParamLimits

0x0641,	// (0x000abd8f) cale_week_scroll_pane_g3_ParamLimits

0x0659,	// (0x000abda7) cale_week_scroll_pane_g4_ParamLimits

0x0671,	// (0x000abdbf) cale_week_scroll_pane_g5_ParamLimits

0x068d,	// (0x000abddb) cale_week_scroll_pane_g6_ParamLimits

0x06a9,	// (0x000abdf7) cale_week_scroll_pane_g7_ParamLimits

0x06c9,	// (0x000abe17) cale_week_scroll_pane_g8_ParamLimits

0x06e9,	// (0x000abe37) cale_week_scroll_pane_g9_ParamLimits

0x0706,	// (0x000abe54) cale_week_scroll_pane_g10_ParamLimits

0x0723,	// (0x000abe71) cale_week_scroll_pane_g11_ParamLimits

0x0740,	// (0x000abe8e) cale_week_scroll_pane_g12_ParamLimits

0x075d,	// (0x000abeab) cale_week_scroll_pane_g13_ParamLimits

0x077a,	// (0x000abec8) cale_week_scroll_pane_g14_ParamLimits

0x079f,	// (0x000abeed) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000ba907) cale_week_scroll_pane_g_ParamLimits

0x07c4,	// (0x000abf12) cale_week_time_pane_ParamLimits

0x07e4,	// (0x000abf32) grid_cale_week_pane_ParamLimits

0xa912,	// (0x000b6060) listscroll_cale_week_pane_t1

0xa924,	// (0x000b6072) scroll_pane_cp08_ParamLimits

0x16f7,	// (0x000ace45) cale_month_corner_pane_ParamLimits

0xacd9,	// (0x000b6427) cale_month_pane_t1

0x1b8b,	// (0x000ad2d9) cale_month_week_pane_ParamLimits

0x2503,	// (0x000adc51) popup_call_status_window_g1_ParamLimits

0x2517,	// (0x000adc65) popup_call_status_window_g2_ParamLimits

0x252b,	// (0x000adc79) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x000baaaf) popup_call_status_window_g_ParamLimits

0xb088,	// (0x000b67d6) aid_call2_pane

0x2dfc,	// (0x000ae54a) msg_header_pane_g1

0x2f88,	// (0x000ae6d6) postcard_address2_pane_ParamLimits

0x2f88,	// (0x000ae6d6) postcard_address2_pane

0x2f9e,	// (0x000ae6ec) postcard_message2_pane_ParamLimits

0x2f9e,	// (0x000ae6ec) postcard_message2_pane

0x3b0d,	// (0x000af25b) message2_row_pane_ParamLimits

0x3b0d,	// (0x000af25b) message2_row_pane

0x3b2a,	// (0x000af278) address2_row_pane_ParamLimits

0x3b2a,	// (0x000af278) address2_row_pane

0xc89b,	// (0x000b7fe9) postcard_message2_row_pane_g1

0xc8a3,	// (0x000b7ff1) postcard_message2_row_pane_t1

0xc89b,	// (0x000b7fe9) address2_row_pane_g1

0xc8a3,	// (0x000b7ff1) address2_row_pane_t1

0x0cf0,	// (0x000ac43e) aid_size_cell_vorec

0x9a62,	// (0x000b51b0) main_rss_pane

0x3b3d,	// (0x000af28b) rss_list_single_pane_ParamLimits

0x3b3d,	// (0x000af28b) rss_list_single_pane

0xc8b1,	// (0x000b7fff) rss_list_single_pane_t1

0xc8bf,	// (0x000b800d) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x000bad5a) rss_list_single_pane_t

0x9a62,	// (0x000b51b0) main_camera2_pane

0x9a62,	// (0x000b51b0) main_video2_pane

0x3da3,	// (0x000af4f1) cams_zoom_pane_cp2_ParamLimits

0x3da3,	// (0x000af4f1) cams_zoom_pane_cp2

0x3dba,	// (0x000af508) image2_vga_pane_ParamLimits

0x3dba,	// (0x000af508) image2_vga_pane

0x3e02,	// (0x000af550) main_camera2_pane_g1_ParamLimits

0x3e02,	// (0x000af550) main_camera2_pane_g1

0x3e22,	// (0x000af570) main_camera2_pane_g2_ParamLimits

0x3e22,	// (0x000af570) main_camera2_pane_g2

0x3e39,	// (0x000af587) main_camera2_pane_g3_ParamLimits

0x3e39,	// (0x000af587) main_camera2_pane_g3

0x3e50,	// (0x000af59e) main_camera2_pane_g4_ParamLimits

0x3e50,	// (0x000af59e) main_camera2_pane_g4

0x3e67,	// (0x000af5b5) main_camera2_pane_g5_ParamLimits

0x3e67,	// (0x000af5b5) main_camera2_pane_g5

0x3e7e,	// (0x000af5cc) main_camera2_pane_g6_ParamLimits

0x3e7e,	// (0x000af5cc) main_camera2_pane_g6

0x3e95,	// (0x000af5e3) main_camera2_pane_g7_ParamLimits

0x3e95,	// (0x000af5e3) main_camera2_pane_g7

0x3eac,	// (0x000af5fa) main_camera2_pane_g8_ParamLimits

0x3eac,	// (0x000af5fa) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x000bad7b) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x000bad7b) main_camera2_pane_g

0x3eda,	// (0x000af628) main_camera2_pane_t1_ParamLimits

0x3eda,	// (0x000af628) main_camera2_pane_t1

0x3f0f,	// (0x000af65d) main_camera2_pane_t2_ParamLimits

0x3f0f,	// (0x000af65d) main_camera2_pane_t2

0x3f2c,	// (0x000af67a) main_camera2_pane_t3_ParamLimits

0x3f2c,	// (0x000af67a) main_camera2_pane_t3

0x3f8a,	// (0x000af6d8) main_camera2_pane_t4_ParamLimits

0x3f8a,	// (0x000af6d8) main_camera2_pane_t4

0x0006,

0xf640,	// (0x000bad8e) main_camera2_pane_t_ParamLimits

0xf640,	// (0x000bad8e) main_camera2_pane_t

0x4013,	// (0x000af761) cams_zoom_pane_cp4_ParamLimits

0x4013,	// (0x000af761) cams_zoom_pane_cp4

0x4029,	// (0x000af777) image2_cif_pane_ParamLimits

0x4029,	// (0x000af777) image2_cif_pane

0x4054,	// (0x000af7a2) image2_subqcif_pane_ParamLimits

0x4054,	// (0x000af7a2) image2_subqcif_pane

0x406f,	// (0x000af7bd) main_video2_pane_g1_ParamLimits

0x406f,	// (0x000af7bd) main_video2_pane_g1

0x4089,	// (0x000af7d7) main_video2_pane_g2_ParamLimits

0x4089,	// (0x000af7d7) main_video2_pane_g2

0x409f,	// (0x000af7ed) main_video2_pane_g3_ParamLimits

0x409f,	// (0x000af7ed) main_video2_pane_g3

0x40b5,	// (0x000af803) main_video2_pane_g4_ParamLimits

0x40b5,	// (0x000af803) main_video2_pane_g4

0x40cb,	// (0x000af819) main_video2_pane_g5_ParamLimits

0x40cb,	// (0x000af819) main_video2_pane_g5

0x40e1,	// (0x000af82f) main_video2_pane_g6_ParamLimits

0x40e1,	// (0x000af82f) main_video2_pane_g6

0x0005,

0xf64f,	// (0x000bad9d) main_video2_pane_g_ParamLimits

0xf64f,	// (0x000bad9d) main_video2_pane_g

0x40fb,	// (0x000af849) main_video2_pane_t1_ParamLimits

0x40fb,	// (0x000af849) main_video2_pane_t1

0x411f,	// (0x000af86d) main_video2_pane_t2_ParamLimits

0x411f,	// (0x000af86d) main_video2_pane_t2

0x416f,	// (0x000af8bd) main_video2_pane_t3_ParamLimits

0x416f,	// (0x000af8bd) main_video2_pane_t3

0x0002,

0xf65c,	// (0x000badaa) main_video2_pane_t_ParamLimits

0xf65c,	// (0x000badaa) main_video2_pane_t

0x35ff,	// (0x000aed4d) call_muted_g2

0x0001,

0xf5fe,	// (0x000bad4c) call_muted_g

0x9a62,	// (0x000b51b0) main_mup2_pane

0x41b7,	// (0x000af905) main_mup2_pane_g1_ParamLimits

0x41b7,	// (0x000af905) main_mup2_pane_g1

0x41c3,	// (0x000af911) main_mup2_pane_g2_ParamLimits

0x41c3,	// (0x000af911) main_mup2_pane_g2

0x9f80,	// (0x000b56ce) main_mup_pane_g13_cp1

0x9f88,	// (0x000b56d6) mup_volume_pane_cp1

0x41e1,	// (0x000af92f) main_mup2_pane_g4_ParamLimits

0x41e1,	// (0x000af92f) main_mup2_pane_g4

0x41f3,	// (0x000af941) main_mup2_pane_g5_ParamLimits

0x41f3,	// (0x000af941) main_mup2_pane_g5

0x4205,	// (0x000af953) main_mup2_pane_g6_ParamLimits

0x4205,	// (0x000af953) main_mup2_pane_g6

0x4217,	// (0x000af965) main_mup2_pane_g7_ParamLimits

0x4217,	// (0x000af965) main_mup2_pane_g7

0x0006,

0xf663,	// (0x000badb1) main_mup2_pane_g_ParamLimits

0xf663,	// (0x000badb1) main_mup2_pane_g

0x422f,	// (0x000af97d) main_mup2_pane_t1_ParamLimits

0x422f,	// (0x000af97d) main_mup2_pane_t1

0x4245,	// (0x000af993) main_mup2_pane_t2_ParamLimits

0x4245,	// (0x000af993) main_mup2_pane_t2

0x425b,	// (0x000af9a9) main_mup2_pane_t3_ParamLimits

0x425b,	// (0x000af9a9) main_mup2_pane_t3

0x4271,	// (0x000af9bf) main_mup2_pane_t4_ParamLimits

0x4271,	// (0x000af9bf) main_mup2_pane_t4

0x4289,	// (0x000af9d7) main_mup2_pane_t5_ParamLimits

0x4289,	// (0x000af9d7) main_mup2_pane_t5

0x42a1,	// (0x000af9ef) main_mup2_pane_t6_ParamLimits

0x42a1,	// (0x000af9ef) main_mup2_pane_t6

0x0005,

0xf672,	// (0x000badc0) main_mup2_pane_t_ParamLimits

0xf672,	// (0x000badc0) main_mup2_pane_t

0x42d1,	// (0x000afa1f) mup2_visualizer_pane_ParamLimits

0x42d1,	// (0x000afa1f) mup2_visualizer_pane

0x42ff,	// (0x000afa4d) mup_progress_pane_cp_ParamLimits

0x42ff,	// (0x000afa4d) mup_progress_pane_cp

0x9f6b,	// (0x000b56b9) mup_volume_pane_cp_ParamLimits

0x9f6b,	// (0x000b56b9) mup_volume_pane_cp

0x4315,	// (0x000afa63) mup2_visualizer_pane_g1_ParamLimits

0x4315,	// (0x000afa63) mup2_visualizer_pane_g1

0xc920,	// (0x000b806e) mup2_visualizer_pane_g2_ParamLimits

0xc920,	// (0x000b806e) mup2_visualizer_pane_g2

0x432c,	// (0x000afa7a) mup2_visualizer_pane_g3_ParamLimits

0x432c,	// (0x000afa7a) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x000badcd) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x000badcd) mup2_visualizer_pane_g

0xb5d3,	// (0x000b6d21) aid_size_cell_fmradio

0x37af,	// (0x000aeefd) aid_height_parent_landcape

0xab37,	// (0x000b6285) wml_content_pane_cp

0xab3f,	// (0x000b628d) wml_tabs_pane

0xab48,	// (0x000b6296) popup_wml_miniature_window

0xab50,	// (0x000b629e) scroll_pane_cp021

0xab64,	// (0x000b62b2) wml_content_pane_comp8

0x9a62,	// (0x000b51b0) bg_popup_sub_pane_cp05

0xc93e,	// (0x000b808c) popup_wml_miniature_window_g1

0xc946,	// (0x000b8094) wml_miniature_view_pane

0x4338,	// (0x000afa86) aid_size_wml_view

0x4340,	// (0x000afa8e) wml_miniature_view_pane_g1

0x4349,	// (0x000afa97) wml_miniature_view_pane_g2

0x4352,	// (0x000afaa0) wml_miniature_view_pane_g3

0x435a,	// (0x000afaa8) wml_miniature_view_pane_g4

0x4362,	// (0x000afab0) wml_miniature_view_pane_g5

0x436a,	// (0x000afab8) wml_miniature_view_pane_g6

0x4372,	// (0x000afac0) wml_miniature_view_pane_g7

0x437a,	// (0x000afac8) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x000badd4) wml_miniature_view_pane_g

0xc94e,	// (0x000b809c) background_graphic_ParamLimits

0xc94e,	// (0x000b809c) background_graphic

0xc95a,	// (0x000b80a8) wml_tabs_2_pane

0xc963,	// (0x000b80b1) wml_tabs_3_pane_ParamLimits

0xc963,	// (0x000b80b1) wml_tabs_3_pane

0xc975,	// (0x000b80c3) wml_tabs_4_pane_ParamLimits

0xc975,	// (0x000b80c3) wml_tabs_4_pane

0xc98b,	// (0x000b80d9) wml_tabs_5_pane_ParamLimits

0xc98b,	// (0x000b80d9) wml_tabs_5_pane

0xc9a5,	// (0x000b80f3) wml_tabs_pane_g2_ParamLimits

0xc9a5,	// (0x000b80f3) wml_tabs_pane_g2

0xc9b9,	// (0x000b8107) wml_tabs_pane_g3_ParamLimits

0xc9b9,	// (0x000b8107) wml_tabs_pane_g3

0x4382,	// (0x000afad0) wml_tabs_2_active_pane_ParamLimits

0x4382,	// (0x000afad0) wml_tabs_2_active_pane

0x4396,	// (0x000afae4) wml_tabs_2_passive_pane_ParamLimits

0x4396,	// (0x000afae4) wml_tabs_2_passive_pane

0x43aa,	// (0x000afaf8) wml_tabs_3_active_pane_cp_ParamLimits

0x43aa,	// (0x000afaf8) wml_tabs_3_active_pane_cp

0x43bf,	// (0x000afb0d) wml_tabs_3_passive_pane_ParamLimits

0x43bf,	// (0x000afb0d) wml_tabs_3_passive_pane

0x43d2,	// (0x000afb20) wml_tabs_3_passive_pane_cp_ParamLimits

0x43d2,	// (0x000afb20) wml_tabs_3_passive_pane_cp

0x43e9,	// (0x000afb37) tabs_4_active_pane

0x43f1,	// (0x000afb3f) tabs_4_passive_pane

0x43fb,	// (0x000afb49) tabs_4_passive_pane_cp

0x4403,	// (0x000afb51) tabs_4_passive_pane_cp2

0x34c3,	// (0x000aec11) aid_height_text

0x2b0c,	// (0x000ae25a) mup_volume_cont_pane_ParamLimits

0x2b0c,	// (0x000ae25a) mup_volume_cont_pane

0x015a,	// (0x000ab8a8) aid_size_cell_pinb

0x0164,	// (0x000ab8b2) aid_size_list_pinb

0x42eb,	// (0x000afa39) mup2_volume_cont_pane_ParamLimits

0x42eb,	// (0x000afa39) mup2_volume_cont_pane

0x9f57,	// (0x000b56a5) mup2_volume_cont_pane_g1_ParamLimits

0x9f57,	// (0x000b56a5) mup2_volume_cont_pane_g1

0xfe08,	// (0x000ab556) aid_size_cell_touch_ParamLimits

0xfe08,	// (0x000ab556) aid_size_cell_touch

0x004a,	// (0x000ab798) touch_pane_ParamLimits

0x004a,	// (0x000ab798) touch_pane

0x95f0,	// (0x000b4d3e) main_rss2_pane

0xc9d6,	// (0x000b8124) listscroll_rss2_pane

0xc9df,	// (0x000b812d) rss2_navigation_pane

0xc9e7,	// (0x000b8135) list_rss2_pane

0xb1ac,	// (0x000b68fa) scroll_pane_cp22

0xc9ef,	// (0x000b813d) rss2_navigation_pane_g1

0xc9f8,	// (0x000b8146) rss2_navigation_pane_g2

0xca00,	// (0x000b814e) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000bade5) rss2_navigation_pane_g

0xca08,	// (0x000b8156) rss2_navigation_pane_t1

0x440d,	// (0x000afb5b) rss2_list_single_pane_ParamLimits

0x440d,	// (0x000afb5b) rss2_list_single_pane

0xca16,	// (0x000b8164) rss2_list_single_pane_t2

0xca24,	// (0x000b8172) rss2_list_single_pane_t3_ParamLimits

0xca24,	// (0x000b8172) rss2_list_single_pane_t3

0xca41,	// (0x000b818f) rss2_list_single_pane_t4

0x22e6,	// (0x000ada34) smil_status_pane_g1

0x9641,	// (0x000b4d8f) main_image2_pane_ParamLimits

0x9641,	// (0x000b4d8f) main_image2_pane

0x3ec3,	// (0x000af611) main_camera2_pane_g9_ParamLimits

0x3ec3,	// (0x000af611) main_camera2_pane_g9

0x3fdf,	// (0x000af72d) main_camera2_pane_t5_ParamLimits

0x3fdf,	// (0x000af72d) main_camera2_pane_t5

0x9f2c,	// (0x000b567a) main_camera2_pane_t6_ParamLimits

0x9f2c,	// (0x000b567a) main_camera2_pane_t6

0x4423,	// (0x000afb71) main_image2_pane_g1_ParamLimits

0x4423,	// (0x000afb71) main_image2_pane_g1

0x31dd,	// (0x000ae92b) smil2_video_pane_ParamLimits

0x31dd,	// (0x000ae92b) smil2_video_pane

0xfe48,	// (0x000ab596) aid_zoom_text_primary_cp

0x9637,	// (0x000b4d85) popup_preview_fixed_window

0xaaa0,	// (0x000b61ee) im_reading_pane_g1

0x3d95,	// (0x000af4e3) cams2_bc_adjust_pane_cp_ParamLimits

0x3d95,	// (0x000af4e3) cams2_bc_adjust_pane_cp

0x4005,	// (0x000af753) cams2_bc_adjust_pane_ParamLimits

0x4005,	// (0x000af753) cams2_bc_adjust_pane

0xcac2,	// (0x000b8210) cams2_bc_adjust_pane_g1

0x9f90,	// (0x000b56de) cams2_slider_pane

0x9f99,	// (0x000b56e7) cams2_slider_pane_g1

0x9fa2,	// (0x000b56f0) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000badec) cams2_slider_pane_g

0x0254,	// (0x000ab9a2) calc_display_pane_ParamLimits

0x027c,	// (0x000ab9ca) calc_paper_pane_ParamLimits

0x029f,	// (0x000ab9ed) grid_calc_pane_ParamLimits

0x9e47,	// (0x000b5595) popup_clock_digital_window_t1_ParamLimits

0xb570,	// (0x000b6cbe) main_image_pane_t1

0x0236,	// (0x000ab984) aid_size_cell_calc_ParamLimits

0x0236,	// (0x000ab984) aid_size_cell_calc

0x37f5,	// (0x000aef43) popup_blid_sat_info2_window_ParamLimits

0x37f5,	// (0x000aef43) popup_blid_sat_info2_window

0xca57,	// (0x000b81a5) aid_size_cell_blid

0xca5f,	// (0x000b81ad) bg_popup_window_pane_cp07

0xca82,	// (0x000b81d0) grid_popup_blid_pane

0xca8c,	// (0x000b81da) heading_pane_cp05_ParamLimits

0xca8c,	// (0x000b81da) heading_pane_cp05

0xcb70,	// (0x000b82be) cell_popup_blid_pane_ParamLimits

0xcb70,	// (0x000b82be) cell_popup_blid_pane

0xcb9a,	// (0x000b82e8) cell_popup_blid_pane_g1

0xcba2,	// (0x000b82f0) cell_popup_blid_pane_t1

0x42bb,	// (0x000afa09) mup2_indicator_pane_ParamLimits

0x42bb,	// (0x000afa09) mup2_indicator_pane

0xb2e6,	// (0x000b6a34) mup2_visualizer_osc_pane

0xc92c,	// (0x000b807a) mup2_visualizer_spec_pane_ParamLimits

0xc92c,	// (0x000b807a) mup2_visualizer_spec_pane

0x4439,	// (0x000afb87) mup2_spec_half_pane

0x4442,	// (0x000afb90) mup2_spec_half_pane_cp

0x444a,	// (0x000afb98) mup2_spec_bar_pane_ParamLimits

0x444a,	// (0x000afb98) mup2_spec_bar_pane

0xc8cd,	// (0x000b801b) mup2_spec_bar_pane_g1

0xc8d7,	// (0x000b8025) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000bad5f) mup2_spec_bar_pane_g

0x446a,	// (0x000afbb8) mup2_osc_middle_pane

0xc8e9,	// (0x000b8037) mup2_visualizer_osc_pane_g1

0x966f,	// (0x000b4dbd) popup_number_entry_window_t1_ParamLimits

0x9682,	// (0x000b4dd0) popup_number_entry_window_t2_ParamLimits

0x9694,	// (0x000b4de2) popup_number_entry_window_t3_ParamLimits

0x009c,	// (0x000ab7ea) popup_number_entry_window_t5_ParamLimits

0x009c,	// (0x000ab7ea) popup_number_entry_window_t5

0xf0d3,	// (0x000ba821) popup_number_entry_window_t_ParamLimits

0x96a6,	// (0x000b4df4) text_title_cp2_ParamLimits

0x9ed6,	// (0x000b5624) aid_hotspot_pointer_text2_pane

0x9efc,	// (0x000b564a) main_viewer_pane_g9_ParamLimits

0x9efc,	// (0x000b564a) main_viewer_pane_g9

0xacd9,	// (0x000b6427) cale_month_pane_t1_ParamLimits

0xacff,	// (0x000b644d) bg_cale_pane_ParamLimits

0xad17,	// (0x000b6465) list_cale_pane_ParamLimits

0xad28,	// (0x000b6476) listscroll_cale_day_pane_t1

0xad3a,	// (0x000b6488) scroll_pane_cp09_ParamLimits

0x2b42,	// (0x000ae290) main_mup_eq_pane_t1_ParamLimits

0x2b42,	// (0x000ae290) main_mup_eq_pane_t1

0x2b5e,	// (0x000ae2ac) main_mup_eq_pane_t2_ParamLimits

0x2b5e,	// (0x000ae2ac) main_mup_eq_pane_t2

0x2b7a,	// (0x000ae2c8) main_mup_eq_pane_t3_ParamLimits

0x2b7a,	// (0x000ae2c8) main_mup_eq_pane_t3

0x2b98,	// (0x000ae2e6) main_mup_eq_pane_t4_ParamLimits

0x2b98,	// (0x000ae2e6) main_mup_eq_pane_t4

0x2bb6,	// (0x000ae304) main_mup_eq_pane_t5_ParamLimits

0x2bb6,	// (0x000ae304) main_mup_eq_pane_t5

0x2bd4,	// (0x000ae322) main_mup_eq_pane_t6_ParamLimits

0x2bd4,	// (0x000ae322) main_mup_eq_pane_t6

0x2bea,	// (0x000ae338) main_mup_eq_pane_t7_ParamLimits

0x2bea,	// (0x000ae338) main_mup_eq_pane_t7

0x2c00,	// (0x000ae34e) main_mup_eq_pane_t8_ParamLimits

0x2c00,	// (0x000ae34e) main_mup_eq_pane_t8

0x2c16,	// (0x000ae364) main_mup_eq_pane_t9_ParamLimits

0x2c16,	// (0x000ae364) main_mup_eq_pane_t9

0x2c32,	// (0x000ae380) main_mup_eq_pane_t10_ParamLimits

0x2c32,	// (0x000ae380) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x000babae) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x000babae) main_mup_eq_pane_t

0x2d07,	// (0x000ae455) mup_equalizer_pane_cp5_ParamLimits

0x2d1f,	// (0x000ae46d) mup_equalizer_pane_cp6_ParamLimits

0x2d37,	// (0x000ae485) mup_equalizer_pane_cp7_ParamLimits

0x95f0,	// (0x000b4d3e) main_gallery_pane

0xc8f2,	// (0x000b8040) smil2_volume_pane

0xc8fa,	// (0x000b8048) smil_status_volume_pane_g1_ParamLimits

0xc90d,	// (0x000b805b) smil_status_volume_pane_g2_ParamLimits

0x9f08,	// (0x000b5656) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x000bad64) smil_status_volume_pane_g_ParamLimits

0xca5f,	// (0x000b81ad) bg_popup_window_pane_cp07_ParamLimits

0xca6d,	// (0x000b81bb) blid_firmament_pane

0x4473,	// (0x000afbc1) aid_size_cell_gallery_ParamLimits

0x4473,	// (0x000afbc1) aid_size_cell_gallery

0x4489,	// (0x000afbd7) grid_gallery_pane_ParamLimits

0x4489,	// (0x000afbd7) grid_gallery_pane

0x44a4,	// (0x000afbf2) cell_gallery_pane_ParamLimits

0x44a4,	// (0x000afbf2) cell_gallery_pane

0xcbb0,	// (0x000b82fe) bg_cell_gallery_focus_pane_ParamLimits

0xcbb0,	// (0x000b82fe) bg_cell_gallery_focus_pane

0xcbc2,	// (0x000b8310) cell_gallery_pane_g1_ParamLimits

0xcbc2,	// (0x000b8310) cell_gallery_pane_g1

0x44ef,	// (0x000afc3d) cell_gallery_pane_g2_ParamLimits

0x44ef,	// (0x000afc3d) cell_gallery_pane_g2

0x44fc,	// (0x000afc4a) cell_gallery_pane_g3_ParamLimits

0x44fc,	// (0x000afc4a) cell_gallery_pane_g3

0xcbce,	// (0x000b831c) cell_gallery_pane_g4_ParamLimits

0xcbce,	// (0x000b831c) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000bae12) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000bae12) cell_gallery_pane_g

0xcbda,	// (0x000b8328) bg_cell_gallery_focus_pane_g1

0xcbe2,	// (0x000b8330) bg_cell_gallery_focus_pane_g2

0xcbea,	// (0x000b8338) bg_cell_gallery_focus_pane_g3

0xcbf2,	// (0x000b8340) bg_cell_gallery_focus_pane_g4

0xcbfa,	// (0x000b8348) bg_cell_gallery_focus_pane_g5

0xcc02,	// (0x000b8350) bg_cell_gallery_focus_pane_g6

0xcc0a,	// (0x000b8358) bg_cell_gallery_focus_pane_g7

0xcc12,	// (0x000b8360) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000bae1b) bg_cell_gallery_focus_pane_g

0xcc1a,	// (0x000b8368) aid_firma_cardinal

0xcc2e,	// (0x000b837c) blid_firmament_pane_t1

0xcc45,	// (0x000b8393) blid_firmament_pane_t2

0xcc5c,	// (0x000b83aa) blid_firmament_pane_t3

0xcc73,	// (0x000b83c1) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000bae2c) blid_firmament_pane_t

0xcc8a,	// (0x000b83d8) blid_sat_info_pane

0xcc9a,	// (0x000b83e8) blid_sat_info_pane_g1

0xcc9a,	// (0x000b83e8) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000bae35) blid_sat_info_pane_g

0xcca4,	// (0x000b83f2) blid_sat_info_pane_t1

0xccb2,	// (0x000b8400) smil2_volume_content_pane

0xccbb,	// (0x000b8409) smil2_volume_pane_g1

0xccc3,	// (0x000b8411) smil2_volume_content_pane_g1

0xcccc,	// (0x000b841a) smil2_volume_content_pane_g2

0xccd5,	// (0x000b8423) smil2_volume_content_pane_g3

0xccde,	// (0x000b842c) smil2_volume_content_pane_g4

0xcce7,	// (0x000b8435) smil2_volume_content_pane_g5

0xccf0,	// (0x000b843e) smil2_volume_content_pane_g6

0xccf9,	// (0x000b8447) smil2_volume_content_pane_g7

0xcd02,	// (0x000b8450) smil2_volume_content_pane_g8

0xcd0b,	// (0x000b8459) smil2_volume_content_pane_g9

0xcd14,	// (0x000b8462) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000bae3a) smil2_volume_content_pane_g

0x0895,	// (0x000abfe3) cale_week_day_heading_pane_t1_ParamLimits

0x08df,	// (0x000ac02d) cale_week_day_heading_pane_t2_ParamLimits

0x092e,	// (0x000ac07c) cale_week_day_heading_pane_t3_ParamLimits

0x097d,	// (0x000ac0cb) cale_week_day_heading_pane_t4_ParamLimits

0x09cc,	// (0x000ac11a) cale_week_day_heading_pane_t5_ParamLimits

0x0a1b,	// (0x000ac169) cale_week_day_heading_pane_t6_ParamLimits

0x0a6e,	// (0x000ac1bc) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000ba926) cale_week_day_heading_pane_t_ParamLimits

0xa946,	// (0x000b6094) bg_cale_side_pane_ParamLimits

0x0ab8,	// (0x000ac206) cale_week_time_pane_t1_ParamLimits

0x0af2,	// (0x000ac240) cale_week_time_pane_t2_ParamLimits

0x0b2c,	// (0x000ac27a) cale_week_time_pane_t3_ParamLimits

0x0b66,	// (0x000ac2b4) cale_week_time_pane_t4_ParamLimits

0x0ba0,	// (0x000ac2ee) cale_week_time_pane_t5_ParamLimits

0x0bda,	// (0x000ac328) cale_week_time_pane_t6_ParamLimits

0x0c14,	// (0x000ac362) cale_week_time_pane_t7_ParamLimits

0x0c4e,	// (0x000ac39c) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000ba935) cale_week_time_pane_t_ParamLimits

0x0c8c,	// (0x000ac3da) cell_cale_week_pane_g2_ParamLimits

0xa946,	// (0x000b6094) bg_cale_side_pane_cp01_ParamLimits

0x2019,	// (0x000ad767) cale_month_week_pane_t1_ParamLimits

0x2052,	// (0x000ad7a0) cale_month_week_pane_t2_ParamLimits

0x208b,	// (0x000ad7d9) cale_month_week_pane_t3_ParamLimits

0x20c4,	// (0x000ad812) cale_month_week_pane_t4_ParamLimits

0x20fd,	// (0x000ad84b) cale_month_week_pane_t5_ParamLimits

0x2136,	// (0x000ad884) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000baa0e) cale_month_week_pane_t_ParamLimits

0x9dc7,	// (0x000b5515) cell_cale_month_pane_g1_ParamLimits

0x95f0,	// (0x000b4d3e) main_cale_event_viewer_pane

0x95f0,	// (0x000b4d3e) listscroll_cale_event_viewer_pane

0xcd1d,	// (0x000b846b) list_cale_ev_pane

0xcd25,	// (0x000b8473) scroll_pane_cp023

0x4509,	// (0x000afc57) field_cale_ev_pane_ParamLimits

0x4509,	// (0x000afc57) field_cale_ev_pane

0xcd31,	// (0x000b847f) field_cale_ev_content_pane_ParamLimits

0xcd31,	// (0x000b847f) field_cale_ev_content_pane

0xcd3d,	// (0x000b848b) field_cale_ev_pane_g1_ParamLimits

0xcd3d,	// (0x000b848b) field_cale_ev_pane_g1

0xcd49,	// (0x000b8497) field_cale_ev_pane_g2_ParamLimits

0xcd49,	// (0x000b8497) field_cale_ev_pane_g2

0xcd61,	// (0x000b84af) field_cale_ev_pane_g3_ParamLimits

0xcd61,	// (0x000b84af) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000bae4f) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000bae4f) field_cale_ev_pane_g

0xcd79,	// (0x000b84c7) field_cale_ev_pane_t1_ParamLimits

0xcd79,	// (0x000b84c7) field_cale_ev_pane_t1

0x452d,	// (0x000afc7b) field_cale_ev_content_pane_t1_ParamLimits

0x452d,	// (0x000afc7b) field_cale_ev_content_pane_t1

0x2df1,	// (0x000ae53f) bg_button_pane_cp01

0x0561,	// (0x000abcaf) listscroll_cale_week_pane_ParamLimits

0x0577,	// (0x000abcc5) popup_toolbar_window_cp01

0xa912,	// (0x000b6060) listscroll_cale_week_pane_t1_ParamLimits

0x234b,	// (0x000ada99) listscroll_cale_day_pane_ParamLimits

0x2363,	// (0x000adab1) popup_toolbar_window_cp02

0xad28,	// (0x000b6476) listscroll_cale_day_pane_t1_ParamLimits

0x0561,	// (0x000abcaf) main_cale_month_pane_ParamLimits

0x3a75,	// (0x000af1c3) popup_toolbar_window_cp03_ParamLimits

0x3a75,	// (0x000af1c3) popup_toolbar_window_cp03

0x309b,	// (0x000ae7e9) main_image_pane_g2_ParamLimits

0x309b,	// (0x000ae7e9) main_image_pane_g2

0x30ac,	// (0x000ae7fa) main_image_pane_g3_ParamLimits

0x30ac,	// (0x000ae7fa) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000bac40) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000bac40) main_image_pane_g

0xb570,	// (0x000b6cbe) main_image_pane_t1_ParamLimits

0x30bd,	// (0x000ae80b) main_image_pane_t2_ParamLimits

0x30bd,	// (0x000ae80b) main_image_pane_t2

0x30cf,	// (0x000ae81d) main_image_pane_t3_ParamLimits

0x30cf,	// (0x000ae81d) main_image_pane_t3

0x30f7,	// (0x000ae845) main_image_pane_t4_ParamLimits

0x30f7,	// (0x000ae845) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000bac47) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000bac47) main_image_pane_t

0x3117,	// (0x000ae865) popup_image_details_window_cp01

0x3121,	// (0x000ae86f) popup_toobar_trans_pane_cp01_ParamLimits

0x3121,	// (0x000ae86f) popup_toobar_trans_pane_cp01

0x38e8,	// (0x000af036) popup_image_details_window_ParamLimits

0x38e8,	// (0x000af036) popup_image_details_window

0xc851,	// (0x000b7f9f) popup_image_focus_window

0x3d4f,	// (0x000af49d) camera2_autofocus_pane_ParamLimits

0x3d4f,	// (0x000af49d) camera2_autofocus_pane

0x95f0,	// (0x000b4d3e) bg_popup_sub_pane_cp06

0xcd90,	// (0x000b84de) popup_image_focus_window_g1

0xcd98,	// (0x000b84e6) popup_image_focus_window_g2

0xcda0,	// (0x000b84ee) popup_image_focus_window_g3

0xcda8,	// (0x000b84f6) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000bae56) popup_image_focus_window_g

0xcdb0,	// (0x000b84fe) popup_image_focus_window_t1

0xcdbe,	// (0x000b850c) popup_image_focus_window_t2

0xcdce,	// (0x000b851c) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x000bae5f) popup_image_focus_window_t

0xcddc,	// (0x000b852a) camera2_autofocus_pane_g1

0x9641,	// (0x000b4d8f) bg_tb_trans_pane_cp01

0xcdea,	// (0x000b8538) popup_image_details_window_g1

0xcdfd,	// (0x000b854b) popup_image_details_window_g2

0x0002,

0xf723,	// (0x000bae71) popup_image_details_window_g

0xce26,	// (0x000b8574) popup_image_details_window_t1

0xce38,	// (0x000b8586) popup_image_details_window_t2

0xce51,	// (0x000b859f) popup_image_details_window_t3

0xce65,	// (0x000b85b3) popup_image_details_window_t4

0xce80,	// (0x000b85ce) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x000bae78) popup_image_details_window_t

0xa7b9,	// (0x000b5f07) bg_calc_paper_pane_ParamLimits

0x9d1f,	// (0x000b546d) grid_highlight_pane_cp013

0x9d29,	// (0x000b5477) list_calc_pane_ParamLimits

0x9d3b,	// (0x000b5489) scroll_pane_cp024

0xa7cd,	// (0x000b5f1b) bg_calc_display_pane_ParamLimits

0x039f,	// (0x000abaed) calc_display_pane_t1_ParamLimits

0x03b1,	// (0x000abaff) calc_display_pane_t2_ParamLimits

0x9d43,	// (0x000b5491) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000ba8a8) calc_display_pane_t_ParamLimits

0x047a,	// (0x000abbc8) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000ba8c5) cell_calc_pane_g

0x0483,	// (0x000abbd1) cell_calc_pane_t1

0xa82c,	// (0x000b5f7a) grid_highlight_pane_cp02_ParamLimits

0xa842,	// (0x000b5f90) toolbar_button_pane_cp01_ParamLimits

0xa842,	// (0x000b5f90) toolbar_button_pane_cp01

0xb5b5,	// (0x000b6d03) temp_image_control_pane_ParamLimits

0xb5b5,	// (0x000b6d03) temp_image_control_pane

0x9641,	// (0x000b4d8f) main_mp3_pane

0xce9a,	// (0x000b85e8) temp_image_control_pane_g1_ParamLimits

0xce9a,	// (0x000b85e8) temp_image_control_pane_g1

0xcea8,	// (0x000b85f6) temp_image_control_pane_g2_ParamLimits

0xcea8,	// (0x000b85f6) temp_image_control_pane_g2

0xceba,	// (0x000b8608) temp_image_control_pane_g3_ParamLimits

0xceba,	// (0x000b8608) temp_image_control_pane_g3

0x457e,	// (0x000afccc) temp_image_control_pane_g4_ParamLimits

0x457e,	// (0x000afccc) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x000bae83) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x000bae83) temp_image_control_pane_g

0xce9a,	// (0x000b85e8) main_mp3_pane_g1

0x4591,	// (0x000afcdf) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x000bae8c) main_mp3_pane_g

0xcefd,	// (0x000b864b) main_mp3_pane_t1

0xa9ab,	// (0x000b60f9) main_camera_pane_g8_ParamLimits

0xa9ab,	// (0x000b60f9) main_camera_pane_g8

0x0fc9,	// (0x000ac717) main_video_pane_g7_ParamLimits

0x0fc9,	// (0x000ac717) main_video_pane_g7

0x9f45,	// (0x000b5693) main_camera2_pane_t7_ParamLimits

0x9f45,	// (0x000b5693) main_camera2_pane_t7

0xaaf7,	// (0x000b6245) scroll_pane_cp025_ParamLimits

0xaaf7,	// (0x000b6245) scroll_pane_cp025

0xab0b,	// (0x000b6259) scroll_pane_cp026_ParamLimits

0xab0b,	// (0x000b6259) scroll_pane_cp026

0xab1a,	// (0x000b6268) wml_content_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_touch_calib_pane

0x4663,	// (0x000afdb1) main_touch_calib_pane_g1

0x4675,	// (0x000afdc3) main_touch_calib_pane_g2

0x4687,	// (0x000afdd5) main_touch_calib_pane_g3

0x4699,	// (0x000afde7) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x000baeaa) main_touch_calib_pane_g

0x46ab,	// (0x000afdf9) main_touch_calib_pane_t1

0x46c5,	// (0x000afe13) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x000baeb3) main_touch_calib_pane_t

0xb227,	// (0x000b6975) mup_progress_pane_cp02

0xb246,	// (0x000b6994) navi_pane_g1

0xb2a8,	// (0x000b69f6) navi_pane_mp_t3

0x9641,	// (0x000b4d8f) main_mp3_pane_ParamLimits

0x3ab7,	// (0x000af205) navi_pane_ParamLimits

0xce9a,	// (0x000b85e8) main_mp3_pane_g1_ParamLimits

0x4591,	// (0x000afcdf) main_mp3_pane_g2_ParamLimits

0x459d,	// (0x000afceb) main_mp3_pane_g3_ParamLimits

0x459d,	// (0x000afceb) main_mp3_pane_g3

0x45ab,	// (0x000afcf9) main_mp3_pane_g4_ParamLimits

0x45ab,	// (0x000afcf9) main_mp3_pane_g4

0xceca,	// (0x000b8618) main_mp3_pane_g5_ParamLimits

0xceca,	// (0x000b8618) main_mp3_pane_g5

0xced8,	// (0x000b8626) main_mp3_pane_g6_ParamLimits

0xced8,	// (0x000b8626) main_mp3_pane_g6

0xcee5,	// (0x000b8633) main_mp3_pane_g7_ParamLimits

0xcee5,	// (0x000b8633) main_mp3_pane_g7

0xcef1,	// (0x000b863f) main_mp3_pane_g8_ParamLimits

0xcef1,	// (0x000b863f) main_mp3_pane_g8

0xf73e,	// (0x000bae8c) main_mp3_pane_g_ParamLimits

0x45b7,	// (0x000afd05) main_mp3_pane_t2

0x45c5,	// (0x000afd13) main_mp3_pane_t3

0xcf0b,	// (0x000b8659) main_mp3_pane_t4

0xcf19,	// (0x000b8667) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x000bae9d) main_mp3_pane_t

0xcf27,	// (0x000b8675) mup_progress_pane_cp01

0xf0cb,	// (0x000ba819) aid_zoom_text_secondary2

0xcd1d,	// (0x000b846b) list_cale_ev2_pane

0xcd25,	// (0x000b8473) scroll_pane_cp023_ParamLimits

0x471f,	// (0x000afe6d) field_cale_ev2_pane_ParamLimits

0x471f,	// (0x000afe6d) field_cale_ev2_pane

0x4743,	// (0x000afe91) field_cale_ev2_pane_g1_ParamLimits

0x4743,	// (0x000afe91) field_cale_ev2_pane_g1

0x474f,	// (0x000afe9d) field_cale_ev2_pane_g2_ParamLimits

0x474f,	// (0x000afe9d) field_cale_ev2_pane_g2

0x4767,	// (0x000afeb5) field_cale_ev2_pane_g3_ParamLimits

0x4767,	// (0x000afeb5) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x000baebe) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x000baebe) field_cale_ev2_pane_g

0x477f,	// (0x000afecd) field_cale_ev2_pane_t1_ParamLimits

0x477f,	// (0x000afecd) field_cale_ev2_pane_t1

0x4796,	// (0x000afee4) field_cale_ev2_pane_t2_ParamLimits

0x4796,	// (0x000afee4) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x000baec7) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x000baec7) field_cale_ev2_pane_t

0x2f38,	// (0x000ae686) main_postcard_pane_g5_ParamLimits

0x2f38,	// (0x000ae686) main_postcard_pane_g5

0x2f4e,	// (0x000ae69c) main_postcard_pane_g6_ParamLimits

0x2f4e,	// (0x000ae69c) main_postcard_pane_g6

0x0d75,	// (0x000ac4c3) camera2_autofocus_pane_cp_ParamLimits

0x0d75,	// (0x000ac4c3) camera2_autofocus_pane_cp

0x9641,	// (0x000b4d8f) main_mup3_pane

0x47cb,	// (0x000aff19) main_mup3_pane_g1_ParamLimits

0x47cb,	// (0x000aff19) main_mup3_pane_g1

0x47ed,	// (0x000aff3b) main_mup3_pane_g2_ParamLimits

0x47ed,	// (0x000aff3b) main_mup3_pane_g2

0x4870,	// (0x000affbe) main_mup3_pane_g3_ParamLimits

0x4870,	// (0x000affbe) main_mup3_pane_g3

0x48b8,	// (0x000b0006) main_mup3_pane_g4_ParamLimits

0x48b8,	// (0x000b0006) main_mup3_pane_g4

0x48fe,	// (0x000b004c) main_mup3_pane_g5_ParamLimits

0x48fe,	// (0x000b004c) main_mup3_pane_g5

0x4946,	// (0x000b0094) main_mup3_pane_g6_ParamLimits

0x4946,	// (0x000b0094) main_mup3_pane_g6

0xcf2f,	// (0x000b867d) main_mup3_pane_g7_ParamLimits

0xcf2f,	// (0x000b867d) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000baed7) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000baed7) main_mup3_pane_g

0x49c6,	// (0x000b0114) main_mup3_pane_t1_ParamLimits

0x49c6,	// (0x000b0114) main_mup3_pane_t1

0x4a34,	// (0x000b0182) main_mup3_pane_t2_ParamLimits

0x4a34,	// (0x000b0182) main_mup3_pane_t2

0x4b0a,	// (0x000b0258) main_mup3_pane_t4_ParamLimits

0x4b0a,	// (0x000b0258) main_mup3_pane_t4

0x4b68,	// (0x000b02b6) main_mup3_pane_t5_ParamLimits

0x4b68,	// (0x000b02b6) main_mup3_pane_t5

0x4c22,	// (0x000b0370) main_mup3_pane_t6_ParamLimits

0x4c22,	// (0x000b0370) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x000baee8) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x000baee8) main_mup3_pane_t

0x4cda,	// (0x000b0428) mup3_progress_pane_ParamLimits

0x4cda,	// (0x000b0428) mup3_progress_pane

0x4d6c,	// (0x000b04ba) popup_mup3_control_window_ParamLimits

0x4d6c,	// (0x000b04ba) popup_mup3_control_window

0xcf3d,	// (0x000b868b) popup_mup3_text_window

0x4da2,	// (0x000b04f0) mup3_progress_pane_t1

0x4dc0,	// (0x000b050e) mup3_progress_pane_t2

0xcf45,	// (0x000b8693) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000baef5) mup3_progress_pane_t

0xcf62,	// (0x000b86b0) mup_progress_pane_cp03

0x95f0,	// (0x000b4d3e) bg_tb_trans_pane_cp04

0x4dde,	// (0x000b052c) mup3_volume_pane

0x4de6,	// (0x000b0534) popup_mup3_control_window_g1

0x4def,	// (0x000b053d) mup3_volume_pane_g1

0x4df8,	// (0x000b0546) mup3_volume_pane_g2

0x4e01,	// (0x000b054f) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000baefc) mup3_volume_pane_g

0x95f0,	// (0x000b4d3e) bg_tb_trans_pane_cp03

0xcf72,	// (0x000b86c0) popup_mup3_text_window_g1

0xcf7a,	// (0x000b86c8) popup_mup3_text_window_t1

0xa815,	// (0x000b5f63) list_calc_item_pane_g1_ParamLimits

0xc9cd,	// (0x000b811b) mup_volume_pane_cp_g1

0x46df,	// (0x000afe2d) main_touch_calib_pane_t3

0x46f3,	// (0x000afe41) main_touch_calib_pane_t4

0x4709,	// (0x000afe57) main_touch_calib_pane_t5

0x95fa,	// (0x000b4d48) aid_cell_size_toolbar2

0x9602,	// (0x000b4d50) aid_popup3_width_pane

0xfe38,	// (0x000ab586) aid_zoom_text_msg_primary

0x0d4a,	// (0x000ac498) vorec_t7

0xa7d9,	// (0x000b5f27) bg_calc_paper_pane_g1_ParamLimits

0xa7e5,	// (0x000b5f33) bg_calc_paper_pane_g2_ParamLimits

0xa7f1,	// (0x000b5f3f) bg_calc_paper_pane_g3_ParamLimits

0xa7fd,	// (0x000b5f4b) bg_calc_paper_pane_g4_ParamLimits

0xa809,	// (0x000b5f57) bg_calc_paper_pane_g5_ParamLimits

0x0400,	// (0x000abb4e) bg_calc_paper_pane_g6_ParamLimits

0x0413,	// (0x000abb61) bg_calc_paper_pane_g7_ParamLimits

0x0426,	// (0x000abb74) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000ba8af) bg_calc_paper_pane_g_ParamLimits

0x0437,	// (0x000abb85) calc_bg_paper_pane_g9_ParamLimits

0x0ed7,	// (0x000ac625) image_qvga_pane_ParamLimits

0x0ed7,	// (0x000ac625) image_qvga_pane

0x9cbd,	// (0x000b540b) bg_popup_sub_pane_cp04_ParamLimits

0xb4ec,	// (0x000b6c3a) popup_mup_playback_window_g1_ParamLimits

0xb4f8,	// (0x000b6c46) popup_mup_playback_window_t1_ParamLimits

0xb50d,	// (0x000b6c5b) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000bac3b) popup_mup_playback_window_t_ParamLimits

0x41d3,	// (0x000af921) main_mup2_pane_g3_ParamLimits

0x41d3,	// (0x000af921) main_mup2_pane_g3

0x12dd,	// (0x000aca2b) popup_toolbar_window_cp04

0xba35,	// (0x000b7183) popup_call2_audio_second_window_g3_ParamLimits

0xba35,	// (0x000b7183) popup_call2_audio_second_window_g3

0xbe3f,	// (0x000b758d) popup_call2_audio_first_window_g4_ParamLimits

0xbe3f,	// (0x000b758d) popup_call2_audio_first_window_g4

0xc4be,	// (0x000b7c0c) popup_call2_audio_in_window_g4_ParamLimits

0xc4be,	// (0x000b7c0c) popup_call2_audio_in_window_g4

0x307d,	// (0x000ae7cb) aid_area_sk_bg_cut_ParamLimits

0x307d,	// (0x000ae7cb) aid_area_sk_bg_cut

0xb522,	// (0x000b6c70) aid_area_sk_bg_cut_2_ParamLimits

0xb522,	// (0x000b6c70) aid_area_sk_bg_cut_2

0x44df,	// (0x000afc2d) aid_placing_details_win

0x44e7,	// (0x000afc35) aid_placing_details_win_2

0xcddc,	// (0x000b852a) camera2_autofocus_pane_g1_ParamLimits

0xffe9,	// (0x000ab737) popup_fixed_preview_cale_window_ParamLimits

0xffe9,	// (0x000ab737) popup_fixed_preview_cale_window

0xb2f7,	// (0x000b6a45) navi_slider_pane_g3

0xb300,	// (0x000b6a4e) navi_slider_pane_g4

0xb309,	// (0x000b6a57) navi_slider_pane_g5

0xb2f7,	// (0x000b6a45) navi_slider_pane_g6

0x9e6d,	// (0x000b55bb) navi_slider_pane_g7

0xb42c,	// (0x000b6b7a) mup_scale_pane_g3

0xb435,	// (0x000b6b83) mup_scale_pane_g4

0xb43e,	// (0x000b6b8c) mup_scale_pane_g5

0x2d4f,	// (0x000ae49d) mup_scale_pane_g6

0x2d58,	// (0x000ae4a6) mup_scale_pane_g7

0xb2f7,	// (0x000b6a45) cams2_slider_pane_g3

0xca4f,	// (0x000b819d) cams2_slider_pane_g4

0x9fab,	// (0x000b56f9) cams2_slider_pane_g5

0xb2f7,	// (0x000b6a45) cams2_slider_pane_g6

0x9fb3,	// (0x000b5701) cams2_slider_pane_g7

0xcc9a,	// (0x000b83e8) camera2_autofocus_pane_cp_g1

0xc823,	// (0x000b7f71) bg_popup_preview_window_pane_cp02_ParamLimits

0xc823,	// (0x000b7f71) bg_popup_preview_window_pane_cp02

0xcf88,	// (0x000b86d6) list_fp_cale_pane_ParamLimits

0xcf88,	// (0x000b86d6) list_fp_cale_pane

0xcf94,	// (0x000b86e2) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf94,	// (0x000b86e2) popup_fixed_preview_cale_window_t1

0x4e0a,	// (0x000b0558) popup_fixed_preview_cale_window_t2_ParamLimits

0x4e0a,	// (0x000b0558) popup_fixed_preview_cale_window_t2

0x4e1f,	// (0x000b056d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4e1f,	// (0x000b056d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000baf03) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000baf03) popup_fixed_preview_cale_window_t

0x4e34,	// (0x000b0582) list_single_fp_cale_pane_ParamLimits

0x4e34,	// (0x000b0582) list_single_fp_cale_pane

0xcfb2,	// (0x000b8700) list_single_fp_cale_pane_g1_ParamLimits

0xcfb2,	// (0x000b8700) list_single_fp_cale_pane_g1

0xcfbe,	// (0x000b870c) list_single_fp_cale_pane_g2_ParamLimits

0xcfbe,	// (0x000b870c) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000baf0a) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000baf0a) list_single_fp_cale_pane_g

0xcfd7,	// (0x000b8725) list_single_fp_cale_pane_t1_ParamLimits

0xcfd7,	// (0x000b8725) list_single_fp_cale_pane_t1

0xcfe9,	// (0x000b8737) list_single_fp_cale_pane_t2_ParamLimits

0xcfe9,	// (0x000b8737) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000baf11) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000baf11) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95f0,	// (0x000b4d3e) main_dialer_pane

0x4e49,	// (0x000b0597) aid_cell_size_keypad

0x4e53,	// (0x000b05a1) dialer_ne_pane

0x4e5d,	// (0x000b05ab) grid_dialer_command_1_pane

0x4e65,	// (0x000b05b3) grid_dialer_command_2_pane

0x4e6d,	// (0x000b05bb) grid_dialer_keypad_pane

0x4e7f,	// (0x000b05cd) bg_popup_call_pane_cp06_ParamLimits

0x4e7f,	// (0x000b05cd) bg_popup_call_pane_cp06

0x4e8b,	// (0x000b05d9) dialer_ne_clear_pane_ParamLimits

0x4e8b,	// (0x000b05d9) dialer_ne_clear_pane

0xd01c,	// (0x000b876a) dialer_ne_pane_g1

0xd024,	// (0x000b8772) dialer_ne_pane_t1_ParamLimits

0xd024,	// (0x000b8772) dialer_ne_pane_t1

0x4e97,	// (0x000b05e5) dialer_ne_pane_t2_ParamLimits

0x4e97,	// (0x000b05e5) dialer_ne_pane_t2

0x4ec1,	// (0x000b060f) dialer_ne_pane_t3_ParamLimits

0x4ec1,	// (0x000b060f) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000baf16) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000baf16) dialer_ne_pane_t

0x4ef1,	// (0x000b063f) dialer_ne_pane_t3_copy1_ParamLimits

0x4ef1,	// (0x000b063f) dialer_ne_pane_t3_copy1

0x4f20,	// (0x000b066e) cell_dialer_keypad_pane_ParamLimits

0x4f20,	// (0x000b066e) cell_dialer_keypad_pane

0x4f37,	// (0x000b0685) cell_dialer_command_1_pane_ParamLimits

0x4f37,	// (0x000b0685) cell_dialer_command_1_pane

0x4f4d,	// (0x000b069b) cell_dialer_command_2_pane_ParamLimits

0x4f4d,	// (0x000b069b) cell_dialer_command_2_pane

0xd036,	// (0x000b8784) bg_button_pane_cp02_ParamLimits

0xd036,	// (0x000b8784) bg_button_pane_cp02

0x4f5c,	// (0x000b06aa) cell_dialer_keypad_pane_g1_ParamLimits

0x4f5c,	// (0x000b06aa) cell_dialer_keypad_pane_g1

0xd036,	// (0x000b8784) bg_button_pane_cp03_ParamLimits

0xd036,	// (0x000b8784) bg_button_pane_cp03

0x4f71,	// (0x000b06bf) cell_dialer_command_1_pane_g1_ParamLimits

0x4f71,	// (0x000b06bf) cell_dialer_command_1_pane_g1

0xd042,	// (0x000b8790) bg_button_pane_cp04

0x4f85,	// (0x000b06d3) cell_dialer_command_2_pane_g1

0xb2e6,	// (0x000b6a34) bg_button_pane_cp06

0xd04a,	// (0x000b8798) dialer_ne_clear_pane_g1

0x2821,	// (0x000adf6f) navi_pane_g2

0x284f,	// (0x000adf9d) navi_pane_g3

0x0002,

0xf3f0,	// (0x000bab3e) navi_pane_g

0x287a,	// (0x000adfc8) navi_pane_mv_g2

0x28a1,	// (0x000adfef) navi_pane_mv_g5

0x28a9,	// (0x000adff7) navi_pane_mv_t1

0xa7cd,	// (0x000b5f1b) main_clock2_pane

0x4fd0,	// (0x000b071e) main_clock2_list_pane_ParamLimits

0x4fd0,	// (0x000b071e) main_clock2_list_pane

0x5008,	// (0x000b0756) main_clock2_pane_t1_ParamLimits

0x5008,	// (0x000b0756) main_clock2_pane_t1

0x5044,	// (0x000b0792) main_clock2_pane_t2_ParamLimits

0x5044,	// (0x000b0792) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000baf1d) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000baf1d) main_clock2_pane_t

0x50e4,	// (0x000b0832) popup_clock_analogue_window_cp03_ParamLimits

0x50e4,	// (0x000b0832) popup_clock_analogue_window_cp03

0x510b,	// (0x000b0859) popup_clock_digital_window_cp02_ParamLimits

0x510b,	// (0x000b0859) popup_clock_digital_window_cp02

0x5184,	// (0x000b08d2) main_clock2_list_single_pane_ParamLimits

0x5184,	// (0x000b08d2) main_clock2_list_single_pane

0xb2e6,	// (0x000b6a34) list_highlight_pane_cp05

0xd066,	// (0x000b87b4) main_clock2_list_single_pane_t1

0x12dd,	// (0x000aca2b) popup_toolbar_window_cp04_ParamLimits

0x454e,	// (0x000afc9c) camera2_autofocus_pane_g2_ParamLimits

0x454e,	// (0x000afc9c) camera2_autofocus_pane_g2

0x455a,	// (0x000afca8) camera2_autofocus_pane_g3_ParamLimits

0x455a,	// (0x000afca8) camera2_autofocus_pane_g3

0x4566,	// (0x000afcb4) camera2_autofocus_pane_g4_ParamLimits

0x4566,	// (0x000afcb4) camera2_autofocus_pane_g4

0x4572,	// (0x000afcc0) camera2_autofocus_pane_g5_ParamLimits

0x4572,	// (0x000afcc0) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x000bae66) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x000bae66) camera2_autofocus_pane_g

0x47ab,	// (0x000afef9) camera2_autofocus_pane_cp_g2

0x47b3,	// (0x000aff01) camera2_autofocus_pane_cp_g3

0x47bb,	// (0x000aff09) camera2_autofocus_pane_cp_g4

0x47c3,	// (0x000aff11) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x000baecc) camera2_autofocus_pane_cp_g

0x4e77,	// (0x000b05c5) popup_dialer_spcha_window

0x95f0,	// (0x000b4d3e) bg_popup_sub_pane_cp07

0xd074,	// (0x000b87c2) list_spcha_pane

0xd07c,	// (0x000b87ca) list_single_spcha_pane_ParamLimits

0xd07c,	// (0x000b87ca) list_single_spcha_pane

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp06

0xd08d,	// (0x000b87db) list_single_spcha_pane_t1

0xc268,	// (0x000b79b6) popup_call2_audio_out_window_g4_ParamLimits

0xc268,	// (0x000b79b6) popup_call2_audio_out_window_g4

0x95f0,	// (0x000b4d3e) main_imed2_pane

0xc85b,	// (0x000b7fa9) popup_imed_adjust2_window

0x3900,	// (0x000af04e) popup_imed_trans_window_ParamLimits

0x3900,	// (0x000af04e) popup_imed_trans_window

0xcad2,	// (0x000b8220) popup_blid_sat_info2_window_t1

0xcae0,	// (0x000b822e) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000badfb) popup_blid_sat_info2_window_t

0x523a,	// (0x000b0988) aid_size_cell_colour_35

0x525a,	// (0x000b09a8) aid_size_cell_colour_112

0x527a,	// (0x000b09c8) aid_size_cell_effect

0xc82f,	// (0x000b7f7d) bg_tb_trans_pane_cp02

0xae46,	// (0x000b6594) heading_imed_pane

0x529a,	// (0x000b09e8) listscroll_imed_pane

0xd09b,	// (0x000b87e9) heading_imed_pane_g1

0xd0a3,	// (0x000b87f1) heading_imed_pane_t1

0xd0b1,	// (0x000b87ff) grid_imed_colour_35_pane_ParamLimits

0xd0b1,	// (0x000b87ff) grid_imed_colour_35_pane

0x52a6,	// (0x000b09f4) grid_imed_effect_pane

0xd0cd,	// (0x000b881b) list_imed_aspect_pane

0x52bb,	// (0x000b0a09) scroll_pane_cp027_ParamLimits

0x52bb,	// (0x000b0a09) scroll_pane_cp027

0x52cc,	// (0x000b0a1a) cell_imed_effect_pane_ParamLimits

0x52cc,	// (0x000b0a1a) cell_imed_effect_pane

0xd0d5,	// (0x000b8823) cell_imed_colour_pane_ParamLimits

0xd0d5,	// (0x000b8823) cell_imed_colour_pane

0xd11f,	// (0x000b886d) cell_imed_colour_pane_g1_ParamLimits

0xd11f,	// (0x000b886d) cell_imed_colour_pane_g1

0xd130,	// (0x000b887e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd130,	// (0x000b887e) hgihlgiht_grid_pane_cp016

0x52f7,	// (0x000b0a45) cell_imed_effect_pane_g1

0x52ff,	// (0x000b0a4d) grid_highlight_pane_cp017

0xd141,	// (0x000b888f) list_imed_single_pane_ParamLimits

0xd141,	// (0x000b888f) list_imed_single_pane

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp07

0xd155,	// (0x000b88a3) list_imed_aspect_pane_comp1_t1

0xc82f,	// (0x000b7f7d) bg_tb_trans_pane_cp05

0xd177,	// (0x000b88c5) popup_imed_adjust2_window_g1

0xd19e,	// (0x000b88ec) popup_imed_adjust2_window_t1

0xd1b6,	// (0x000b8904) slider_imed_adjust_pane

0xd1ca,	// (0x000b8918) slider_imed_adjust_pane_g1

0xd1da,	// (0x000b8928) slider_imed_adjust_pane_g2

0xd1ea,	// (0x000b8938) slider_imed_adjust_pane_g3

0xd1fb,	// (0x000b8949) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000baf3a) slider_imed_adjust_pane_g

0x5308,	// (0x000b0a56) aid_size_cell_clipart2

0x5314,	// (0x000b0a62) grid_imed_clipart_pane

0xd20c,	// (0x000b895a) scroll_pane_cp031

0x531e,	// (0x000b0a6c) cell_imed_clipart_pane_ParamLimits

0x531e,	// (0x000b0a6c) cell_imed_clipart_pane

0x533b,	// (0x000b0a89) cell_imed_clipart_pane_g1

0x95f0,	// (0x000b4d3e) grid_highlight_pane_cp014

0x4fe5,	// (0x000b0733) main_clock2_pane_g1_ParamLimits

0x4fe5,	// (0x000b0733) main_clock2_pane_g1

0x512b,	// (0x000b0879) aid_call2_pane_cp10

0x513d,	// (0x000b088b) aid_call_pane_cp10

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g1

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g2

0x514f,	// (0x000b089d) popup_clock_analogue_window_cp10_g3

0x514f,	// (0x000b089d) popup_clock_analogue_window_cp10_g4

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000baf28) popup_clock_analogue_window_cp10_g

0x5165,	// (0x000b08b3) popup_clock_analogue_window_cp10_t1

0x5196,	// (0x000b08e4) clock_digital_number_pane_cp10_ParamLimits

0x5196,	// (0x000b08e4) clock_digital_number_pane_cp10

0x51b0,	// (0x000b08fe) clock_digital_number_pane_cp11_ParamLimits

0x51b0,	// (0x000b08fe) clock_digital_number_pane_cp11

0x51ca,	// (0x000b0918) clock_digital_number_pane_cp12_ParamLimits

0x51ca,	// (0x000b0918) clock_digital_number_pane_cp12

0x51e4,	// (0x000b0932) clock_digital_number_pane_cp13_ParamLimits

0x51e4,	// (0x000b0932) clock_digital_number_pane_cp13

0x51fe,	// (0x000b094c) clock_digital_separator_pane_cp10_ParamLimits

0x51fe,	// (0x000b094c) clock_digital_separator_pane_cp10

0x5218,	// (0x000b0966) popup_clock_digital_window_cp02_t1_ParamLimits

0x5218,	// (0x000b0966) popup_clock_digital_window_cp02_t1

0x9cb5,	// (0x000b5403) clock_digital_number_pane_cp10_g1

0x9cb5,	// (0x000b5403) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000baf43) clock_digital_number_pane_cp10_g

0x9cb5,	// (0x000b5403) clock_digital_separator_pane_cp10_g1

0x9cb5,	// (0x000b5403) clock_digital_separator_pane_g2_cp10

0xb2b6,	// (0x000b6a04) navi_pane_vded_g4

0xb2bf,	// (0x000b6a0d) navi_pane_vded_g5

0xb2c8,	// (0x000b6a16) navi_pane_vded_t1

0x95f0,	// (0x000b4d3e) main_vded_pane

0x5344,	// (0x000b0a92) main_vded_pane_g1

0x5350,	// (0x000b0a9e) main_vded_pane_g2

0x535c,	// (0x000b0aaa) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000baf48) main_vded_pane_g

0x5368,	// (0x000b0ab6) main_vded_pane_t1

0x5376,	// (0x000b0ac4) main_vded_pane_t2

0x0001,

0xf801,	// (0x000baf4f) main_vded_pane_t

0x5384,	// (0x000b0ad2) vded_slider_pane

0x538e,	// (0x000b0adc) vded_video_pane

0xd214,	// (0x000b8962) vded_video_pane_g1

0x5398,	// (0x000b0ae6) vded_video_pane_g2

0xcc9a,	// (0x000b83e8) vded_video_pane_g3

0x0002,

0xf806,	// (0x000baf54) vded_video_pane_g

0xd21e,	// (0x000b896c) vded_slider_pane_g1

0xc9cd,	// (0x000b811b) vded_slider_pane_g2

0xd227,	// (0x000b8975) vded_slider_pane_g3

0xd230,	// (0x000b897e) vded_slider_pane_g4

0xd239,	// (0x000b8987) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000baf5b) vded_slider_pane_g

0x4d56,	// (0x000b04a4) mup3_rocker_pane_ParamLimits

0x4d56,	// (0x000b04a4) mup3_rocker_pane

0x53a1,	// (0x000b0aef) mup3_control_keys_pane_g1

0x53a9,	// (0x000b0af7) mup3_control_keys_pane_g2

0x53b1,	// (0x000b0aff) mup3_control_keys_pane_g3

0x53b9,	// (0x000b0b07) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000baf66) mup3_control_keys_pane_g

0x0020,	// (0x000ab76e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0020,	// (0x000ab76e) popup_toolbar2_fixed_window_cp01

0x4d8c,	// (0x000b04da) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d8c,	// (0x000b04da) popup_toolbar2_fixed_window_cp02

0xbba7,	// (0x000b72f5) popup_call2_audio_second_window_t4_ParamLimits

0xbba7,	// (0x000b72f5) popup_call2_audio_second_window_t4

0xc0d5,	// (0x000b7823) popup_call2_audio_first_window_t6_ParamLimits

0xc0d5,	// (0x000b7823) popup_call2_audio_first_window_t6

0xc36b,	// (0x000b7ab9) popup_call2_audio_out_window_t6_ParamLimits

0xc36b,	// (0x000b7ab9) popup_call2_audio_out_window_t6

0x95f0,	// (0x000b4d3e) main_vitu_pane

0x53c9,	// (0x000b0b17) aid_size_cell_itu_ParamLimits

0x53c9,	// (0x000b0b17) aid_size_cell_itu

0x9641,	// (0x000b4d8f) bg_popup_window_pane_cp08_ParamLimits

0x9641,	// (0x000b4d8f) bg_popup_window_pane_cp08

0x53df,	// (0x000b0b2d) field_vitu_entry_pane_ParamLimits

0x53df,	// (0x000b0b2d) field_vitu_entry_pane

0x53f6,	// (0x000b0b44) grid_vitu_function_pane_ParamLimits

0x53f6,	// (0x000b0b44) grid_vitu_function_pane

0x5411,	// (0x000b0b5f) grid_vitu_itu_pane_ParamLimits

0x5411,	// (0x000b0b5f) grid_vitu_itu_pane

0x542f,	// (0x000b0b7d) cell_vitu_itu_pane_ParamLimits

0x542f,	// (0x000b0b7d) cell_vitu_itu_pane

0x5455,	// (0x000b0ba3) cell_vitu_function_pane_ParamLimits

0x5455,	// (0x000b0ba3) cell_vitu_function_pane

0x9641,	// (0x000b4d8f) bg_popup_sub_pane_cp08_ParamLimits

0x9641,	// (0x000b4d8f) bg_popup_sub_pane_cp08

0x5470,	// (0x000b0bbe) field_vitu_entry_pane_t1_ParamLimits

0x5470,	// (0x000b0bbe) field_vitu_entry_pane_t1

0xd25a,	// (0x000b89a8) field_vitu_entry_pane_t2_ParamLimits

0xd25a,	// (0x000b89a8) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000baf74) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000baf74) field_vitu_entry_pane_t

0xd277,	// (0x000b89c5) bg_button_pane_cp05_ParamLimits

0xd277,	// (0x000b89c5) bg_button_pane_cp05

0x5490,	// (0x000b0bde) cell_vitu_itu_pane_g1

0x54a8,	// (0x000b0bf6) cell_vitu_itu_pane_t1_ParamLimits

0x54a8,	// (0x000b0bf6) cell_vitu_itu_pane_t1

0x54ba,	// (0x000b0c08) cell_vitu_itu_pane_t2_ParamLimits

0x54ba,	// (0x000b0c08) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000baf79) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000baf79) cell_vitu_itu_pane_t

0xd285,	// (0x000b89d3) bg_button_pane_cp07

0x54ef,	// (0x000b0c3d) cell_vitu_function_pane_g1

0x9d17,	// (0x000b5465) main_calc_pane_g1

0xfe2c,	// (0x000ab57a) aid_visual_content_pane

0x95f0,	// (0x000b4d3e) main_vradio_pane

0x54f8,	// (0x000b0c46) main_vradio_pane_g1_ParamLimits

0x54f8,	// (0x000b0c46) main_vradio_pane_g1

0xd28f,	// (0x000b89dd) main_vradio_pane_g2_ParamLimits

0xd28f,	// (0x000b89dd) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000baf80) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000baf80) main_vradio_pane_g

0x550f,	// (0x000b0c5d) main_vradio_pane_t1_ParamLimits

0x550f,	// (0x000b0c5d) main_vradio_pane_t1

0x5524,	// (0x000b0c72) main_vradio_pane_t2_ParamLimits

0x5524,	// (0x000b0c72) main_vradio_pane_t2

0xd29c,	// (0x000b89ea) main_vradio_pane_t3_ParamLimits

0xd29c,	// (0x000b89ea) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000baf85) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000baf85) main_vradio_pane_t

0x5539,	// (0x000b0c87) vradio_rocker_control_pane_ParamLimits

0x5539,	// (0x000b0c87) vradio_rocker_control_pane

0x554b,	// (0x000b0c99) vradio_station_info_pane_ParamLimits

0x554b,	// (0x000b0c99) vradio_station_info_pane

0xd2b0,	// (0x000b89fe) vradio_frequency_info_pane_ParamLimits

0xd2b0,	// (0x000b89fe) vradio_frequency_info_pane

0xcc9a,	// (0x000b83e8) vradio_station_info_pane_g1

0xd2bf,	// (0x000b8a0d) vradio_station_info_pane_t1_ParamLimits

0xd2bf,	// (0x000b8a0d) vradio_station_info_pane_t1

0xd2e1,	// (0x000b8a2f) vradio_station_info_pane_t2_ParamLimits

0xd2e1,	// (0x000b8a2f) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000baf8c) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000baf8c) vradio_station_info_pane_t

0xd2f3,	// (0x000b8a41) vradio_tuning_pane

0xd2fb,	// (0x000b8a49) vradio_rocker_control_pane_g1

0xd303,	// (0x000b8a51) vradio_rocker_control_pane_g2

0xd30b,	// (0x000b8a59) vradio_rocker_control_pane_g3

0xd313,	// (0x000b8a61) vradio_rocker_control_pane_g4

0xd31b,	// (0x000b8a69) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000baf91) vradio_rocker_control_pane_g

0x555b,	// (0x000b0ca9) vradio_frequency_info_pane_g1

0xd323,	// (0x000b8a71) vradio_frequency_info_pane_t1_ParamLimits

0xd323,	// (0x000b8a71) vradio_frequency_info_pane_t1

0x5565,	// (0x000b0cb3) vradio_tuning_pane_g1

0x5570,	// (0x000b0cbe) vradio_tuning_pane_t1

0x960e,	// (0x000b4d5c) area_side_right_pane_ParamLimits

0x960e,	// (0x000b4d5c) area_side_right_pane

0xc7ea,	// (0x000b7f38) status_small_pane_g1

0xc7f2,	// (0x000b7f40) status_small_pane_g2

0xc7fb,	// (0x000b7f49) status_small_pane_g3

0xc804,	// (0x000b7f52) status_small_pane_g4

0x0003,

0xf603,	// (0x000bad51) status_small_pane_g

0xc80d,	// (0x000b7f5b) status_small_pane_t1

0x95f0,	// (0x000b4d3e) main_video3_pane

0xd337,	// (0x000b8a85) cams_zoom_vslider_pane

0xd33f,	// (0x000b8a8d) image3_wide_pane_ParamLimits

0xd33f,	// (0x000b8a8d) image3_wide_pane

0xd359,	// (0x000b8aa7) image3_wide_small_pane

0xd365,	// (0x000b8ab3) main_video3_pane_g1_ParamLimits

0xd365,	// (0x000b8ab3) main_video3_pane_g1

0xd381,	// (0x000b8acf) main_video3_pane_g2_ParamLimits

0xd381,	// (0x000b8acf) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000baf9c) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000baf9c) main_video3_pane_g

0xd39d,	// (0x000b8aeb) main_video3_pane_t1_ParamLimits

0xd39d,	// (0x000b8aeb) main_video3_pane_t1

0xd3c8,	// (0x000b8b16) main_video3_pane_t2_ParamLimits

0xd3c8,	// (0x000b8b16) main_video3_pane_t2

0xd3f5,	// (0x000b8b43) main_video3_pane_t3_ParamLimits

0xd3f5,	// (0x000b8b43) main_video3_pane_t3

0x0002,

0xf853,	// (0x000bafa1) main_video3_pane_t_ParamLimits

0xf853,	// (0x000bafa1) main_video3_pane_t

0xd422,	// (0x000b8b70) cams_zoom_vslider_pane_g1

0xd42b,	// (0x000b8b79) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000bafa8) cams_zoom_vslider_pane_g

0xd433,	// (0x000b8b81) small_slider_vertical_pane

0xcc9a,	// (0x000b83e8) small_slider_vertical_pane_g1

0xcc9a,	// (0x000b83e8) small_slider_vertical_pane_g2

0xd43b,	// (0x000b8b89) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000bafad) small_slider_vertical_pane_g

0x95f0,	// (0x000b4d3e) main_hwr_training_pane

0xd444,	// (0x000b8b92) hwr_training_instruct_pane_ParamLimits

0xd444,	// (0x000b8b92) hwr_training_instruct_pane

0x557f,	// (0x000b0ccd) hwr_training_navi_pane_ParamLimits

0x557f,	// (0x000b0ccd) hwr_training_navi_pane

0x559e,	// (0x000b0cec) hwr_training_write_pane_ParamLimits

0x559e,	// (0x000b0cec) hwr_training_write_pane

0x95f0,	// (0x000b4d3e) bg_frame_shadow_pane

0xd47b,	// (0x000b8bc9) hwr_training_write_pane_g1

0xd483,	// (0x000b8bd1) hwr_training_write_pane_g2

0xd48b,	// (0x000b8bd9) hwr_training_write_pane_g3

0xd493,	// (0x000b8be1) hwr_training_write_pane_g4

0xd49b,	// (0x000b8be9) hwr_training_write_pane_g5

0xd4a3,	// (0x000b8bf1) hwr_training_write_pane_g6

0xd4ab,	// (0x000b8bf9) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000bafb4) hwr_training_write_pane_g

0x9fbc,	// (0x000b570a) hwr_training_navi_pane_g1_ParamLimits

0x9fbc,	// (0x000b570a) hwr_training_navi_pane_g1

0x9fce,	// (0x000b571c) hwr_training_navi_pane_g2_ParamLimits

0x9fce,	// (0x000b571c) hwr_training_navi_pane_g2

0x9fe0,	// (0x000b572e) hwr_training_navi_pane_g3_ParamLimits

0x9fe0,	// (0x000b572e) hwr_training_navi_pane_g3

0x9ff0,	// (0x000b573e) hwr_training_navi_pane_g4_ParamLimits

0x9ff0,	// (0x000b573e) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000bafc3) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000bafc3) hwr_training_navi_pane_g

0x9ffd,	// (0x000b574b) hwr_training_navi_pane_t1

0x55e6,	// (0x000b0d34) list_single_hwr_training_instruct_pane_ParamLimits

0x55e6,	// (0x000b0d34) list_single_hwr_training_instruct_pane

0xd4b3,	// (0x000b8c01) list_single_hwr_training_instruct_pane_t1

0xcbda,	// (0x000b8328) bg_frame_shadow_pane_g1

0xd4c2,	// (0x000b8c10) bg_frame_shadow_pane_g2

0xd4ca,	// (0x000b8c18) bg_frame_shadow_pane_g3

0xd4d2,	// (0x000b8c20) bg_frame_shadow_pane_g4

0xd4da,	// (0x000b8c28) bg_frame_shadow_pane_g5

0xd4e2,	// (0x000b8c30) bg_frame_shadow_pane_g6

0xd4ea,	// (0x000b8c38) bg_frame_shadow_pane_g7

0xa898,	// (0x000b5fe6) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000bafce) bg_frame_shadow_pane_g

0x95f0,	// (0x000b4d3e) main_video_tele_dialer_pane

0x55fb,	// (0x000b0d49) aid_size_cell_video_keypad_ParamLimits

0x55fb,	// (0x000b0d49) aid_size_cell_video_keypad

0x5615,	// (0x000b0d63) grid_video_dialer_keypad_pane_ParamLimits

0x5615,	// (0x000b0d63) grid_video_dialer_keypad_pane

0x5661,	// (0x000b0daf) video_down_pane_cp_ParamLimits

0x5661,	// (0x000b0daf) video_down_pane_cp

0x5691,	// (0x000b0ddf) cell_video_dialer_keypad_pane_ParamLimits

0x5691,	// (0x000b0ddf) cell_video_dialer_keypad_pane

0xd4f2,	// (0x000b8c40) bg_button_pane_cp08_ParamLimits

0xd4f2,	// (0x000b8c40) bg_button_pane_cp08

0x56b5,	// (0x000b0e03) cell_video_dialer_keypad_pane_g1_ParamLimits

0x56b5,	// (0x000b0e03) cell_video_dialer_keypad_pane_g1

0x4d40,	// (0x000b048e) mup3_rocker2_pane_ParamLimits

0x4d40,	// (0x000b048e) mup3_rocker2_pane

0xcc9a,	// (0x000b83e8) mup3_rocker2_pane_g1

0x37cd,	// (0x000aef1b) main_dialer2_pane

0x95f0,	// (0x000b4d3e) main_mp4_pane

0xa013,	// (0x000b5761) main_mp4_pane_g1_ParamLimits

0xa013,	// (0x000b5761) main_mp4_pane_g1

0xa013,	// (0x000b5761) main_mp4_pane_g2_ParamLimits

0xa013,	// (0x000b5761) main_mp4_pane_g2

0x56f0,	// (0x000b0e3e) main_mp4_pane_g3_ParamLimits

0x56f0,	// (0x000b0e3e) main_mp4_pane_g3

0xa021,	// (0x000b576f) main_mp4_pane_g4_ParamLimits

0xa021,	// (0x000b576f) main_mp4_pane_g4

0xa049,	// (0x000b5797) main_mp4_pane_g5_ParamLimits

0xa049,	// (0x000b5797) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000bafee) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000bafee) main_mp4_pane_g

0xa099,	// (0x000b57e7) main_mp4_pane_t1_ParamLimits

0xa099,	// (0x000b57e7) main_mp4_pane_t1

0xa0f5,	// (0x000b5843) main_mp4_pane_t2_ParamLimits

0xa0f5,	// (0x000b5843) main_mp4_pane_t2

0xd4fe,	// (0x000b8c4c) main_mp4_pane_t3_ParamLimits

0xd4fe,	// (0x000b8c4c) main_mp4_pane_t3

0xa147,	// (0x000b5895) main_mp4_pane_t4_ParamLimits

0xa147,	// (0x000b5895) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000baffb) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000baffb) main_mp4_pane_t

0xa187,	// (0x000b58d5) mp4_progress_pane_ParamLimits

0xa187,	// (0x000b58d5) mp4_progress_pane

0xa1d1,	// (0x000b591f) mp4_rocker_pane_ParamLimits

0xa1d1,	// (0x000b591f) mp4_rocker_pane

0xd526,	// (0x000b8c74) mp4_progress_pane_t1

0xd53f,	// (0x000b8c8d) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000bb004) mp4_progress_pane_t

0xd558,	// (0x000b8ca6) mup_progress_pane_cp04

0xd564,	// (0x000b8cb2) mp4_rocker_pane_g1

0x573a,	// (0x000b0e88) aid_cell_size_keypad2_ParamLimits

0x573a,	// (0x000b0e88) aid_cell_size_keypad2

0x5750,	// (0x000b0e9e) dialer2_ne_pane_ParamLimits

0x5750,	// (0x000b0e9e) dialer2_ne_pane

0x5768,	// (0x000b0eb6) grid_dialer2_keypad_pane_ParamLimits

0x5768,	// (0x000b0eb6) grid_dialer2_keypad_pane

0xca5f,	// (0x000b81ad) bg_popup_call_pane_cp07_ParamLimits

0xca5f,	// (0x000b81ad) bg_popup_call_pane_cp07

0x5784,	// (0x000b0ed2) dialer2_ne_pane_t1_ParamLimits

0x5784,	// (0x000b0ed2) dialer2_ne_pane_t1

0x57bf,	// (0x000b0f0d) cell_dialer2_keypad_pane_ParamLimits

0x57bf,	// (0x000b0f0d) cell_dialer2_keypad_pane

0xd580,	// (0x000b8cce) bg_button_pane_pane_cp04_ParamLimits

0xd580,	// (0x000b8cce) bg_button_pane_pane_cp04

0x57e3,	// (0x000b0f31) cell_dialer2_keypad_pane_g1_ParamLimits

0x57e3,	// (0x000b0f31) cell_dialer2_keypad_pane_g1

0x11c4,	// (0x000ac912) aid_placing_vt_set_content_ParamLimits

0x11c4,	// (0x000ac912) aid_placing_vt_set_content

0x11e8,	// (0x000ac936) aid_placing_vt_set_title_ParamLimits

0x11e8,	// (0x000ac936) aid_placing_vt_set_title

0x95f0,	// (0x000b4d3e) main_image3_pane

0x58a9,	// (0x000b0ff7) area_side_right_pane_cp01_ParamLimits

0x58a9,	// (0x000b0ff7) area_side_right_pane_cp01

0xa013,	// (0x000b5761) main_image3_pane_g1_ParamLimits

0xa013,	// (0x000b5761) main_image3_pane_g1

0x58c2,	// (0x000b1010) main_image3_pane_g2_ParamLimits

0x58c2,	// (0x000b1010) main_image3_pane_g2

0x58ea,	// (0x000b1038) main_image3_pane_g3_ParamLimits

0x58ea,	// (0x000b1038) main_image3_pane_g3

0x5914,	// (0x000b1062) main_image3_pane_g4_ParamLimits

0x5914,	// (0x000b1062) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000bb013) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000bb013) main_image3_pane_g

0x593e,	// (0x000b108c) main_image3_pane_t1_ParamLimits

0x593e,	// (0x000b108c) main_image3_pane_t1

0x5996,	// (0x000b10e4) main_image3_pane_t2_ParamLimits

0x5996,	// (0x000b10e4) main_image3_pane_t2

0x59e8,	// (0x000b1136) main_image3_pane_t3_ParamLimits

0x59e8,	// (0x000b1136) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000bb01c) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000bb01c) main_image3_pane_t

0x9641,	// (0x000b4d8f) grid_sctrl_middle_pane_cp01_ParamLimits

0x9641,	// (0x000b4d8f) grid_sctrl_middle_pane_cp01

0x5a70,	// (0x000b11be) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a70,	// (0x000b11be) cell_sctrl_middle_pane_cp01

0x5a8d,	// (0x000b11db) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a8d,	// (0x000b11db) cell_sctrl_middle_pane_cp01_g1

0x95f0,	// (0x000b4d3e) main_call4_pane

0x5aa2,	// (0x000b11f0) aid_size_button_call4_ParamLimits

0x5aa2,	// (0x000b11f0) aid_size_button_call4

0x5ad5,	// (0x000b1223) call4_windows_pane_ParamLimits

0x5ad5,	// (0x000b1223) call4_windows_pane

0x5af7,	// (0x000b1245) grid_call4_button_pane_ParamLimits

0x5af7,	// (0x000b1245) grid_call4_button_pane

0xd58c,	// (0x000b8cda) call4_windows_conf_pane

0x5b22,	// (0x000b1270) popup_call4_audio_first_window_ParamLimits

0x5b22,	// (0x000b1270) popup_call4_audio_first_window

0x5b4e,	// (0x000b129c) popup_call4_audio_second_window_ParamLimits

0x5b4e,	// (0x000b129c) popup_call4_audio_second_window

0xd5c9,	// (0x000b8d17) popup_call4_audio_wait_window_ParamLimits

0xd5c9,	// (0x000b8d17) popup_call4_audio_wait_window

0x5b64,	// (0x000b12b2) cell_call4_button_pane_ParamLimits

0x5b64,	// (0x000b12b2) cell_call4_button_pane

0x5b8b,	// (0x000b12d9) bg_button_pane_cp09_ParamLimits

0x5b8b,	// (0x000b12d9) bg_button_pane_cp09

0x5b97,	// (0x000b12e5) cell_call4_button_pane_g1_ParamLimits

0x5b97,	// (0x000b12e5) cell_call4_button_pane_g1

0x5bbd,	// (0x000b130b) cell_call4_button_pane_t1_ParamLimits

0x5bbd,	// (0x000b130b) cell_call4_button_pane_t1

0xd611,	// (0x000b8d5f) popup_call4_audio_conf_window_ParamLimits

0xd611,	// (0x000b8d5f) popup_call4_audio_conf_window

0x4da2,	// (0x000b04f0) mup3_progress_pane_t1_ParamLimits

0x4dc0,	// (0x000b050e) mup3_progress_pane_t2_ParamLimits

0xcf45,	// (0x000b8693) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000baef5) mup3_progress_pane_t_ParamLimits

0xcf62,	// (0x000b86b0) mup_progress_pane_cp03_ParamLimits

0x53c1,	// (0x000b0b0f) mup3_control_keys_pane_g4_copy1

0xa1b5,	// (0x000b5903) mp4_rocker2_pane_ParamLimits

0xa1b5,	// (0x000b5903) mp4_rocker2_pane

0xd62b,	// (0x000b8d79) mp4_rocker2_pane_g1

0xd633,	// (0x000b8d81) mp4_rocker2_pane_g2

0xa227,	// (0x000b5975) mp4_rocker2_pane_g3

0xa22f,	// (0x000b597d) mp4_rocker2_pane_g4

0xa237,	// (0x000b5985) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000bb025) mp4_rocker2_pane_g

0x95f0,	// (0x000b4d3e) main_camera4_pane

0x95f0,	// (0x000b4d3e) main_video4_pane

0x562f,	// (0x000b0d7d) main_video_tele_dialer_pane_t1_ParamLimits

0x562f,	// (0x000b0d7d) main_video_tele_dialer_pane_t1

0x5648,	// (0x000b0d96) main_video_tele_dialer_pane_t2_ParamLimits

0x5648,	// (0x000b0d96) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000bafdf) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000bafdf) main_video_tele_dialer_pane_t

0x5bfb,	// (0x000b1349) cam4_autofocus_pane_ParamLimits

0x5bfb,	// (0x000b1349) cam4_autofocus_pane

0x5c11,	// (0x000b135f) cam4_image_uncrop_pane_ParamLimits

0x5c11,	// (0x000b135f) cam4_image_uncrop_pane

0x5c2a,	// (0x000b1378) cam4_indicators_pane_ParamLimits

0x5c2a,	// (0x000b1378) cam4_indicators_pane

0x5c59,	// (0x000b13a7) main_camera4_pane_g1_ParamLimits

0x5c59,	// (0x000b13a7) main_camera4_pane_g1

0x5c6b,	// (0x000b13b9) main_camera4_pane_g2_ParamLimits

0x5c6b,	// (0x000b13b9) main_camera4_pane_g2

0x5c7e,	// (0x000b13cc) main_camera4_pane_g3_ParamLimits

0x5c7e,	// (0x000b13cc) main_camera4_pane_g3

0x5c91,	// (0x000b13df) main_camera4_pane_g4_ParamLimits

0x5c91,	// (0x000b13df) main_camera4_pane_g4

0x5ca4,	// (0x000b13f2) main_camera4_pane_g5_ParamLimits

0x5ca4,	// (0x000b13f2) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000bb030) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000bb030) main_camera4_pane_g

0x5cc8,	// (0x000b1416) main_camera4_pane_t1_ParamLimits

0x5cc8,	// (0x000b1416) main_camera4_pane_t1

0xa25d,	// (0x000b59ab) bg_tb_trans_pane_cp06

0xa273,	// (0x000b59c1) cam4_indicators_pane_g1

0xa284,	// (0x000b59d2) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000bb04b) cam4_indicators_pane_g

0xa29c,	// (0x000b59ea) cam4_indicators_pane_t1

0x5d2c,	// (0x000b147a) main_video4_pane_g1_ParamLimits

0x5d2c,	// (0x000b147a) main_video4_pane_g1

0x5d3b,	// (0x000b1489) main_video4_pane_g2_ParamLimits

0x5d3b,	// (0x000b1489) main_video4_pane_g2

0x5d4a,	// (0x000b1498) main_video4_pane_g3_ParamLimits

0x5d4a,	// (0x000b1498) main_video4_pane_g3

0x5d59,	// (0x000b14a7) main_video4_pane_g4_ParamLimits

0x5d59,	// (0x000b14a7) main_video4_pane_g4

0x0004,

0xf904,	// (0x000bb052) main_video4_pane_g_ParamLimits

0xf904,	// (0x000bb052) main_video4_pane_g

0x5d77,	// (0x000b14c5) vid4_indicators_pane_ParamLimits

0x5d77,	// (0x000b14c5) vid4_indicators_pane

0x5da5,	// (0x000b14f3) video4_image_uncrop_cif_pane_ParamLimits

0x5da5,	// (0x000b14f3) video4_image_uncrop_cif_pane

0x5dbf,	// (0x000b150d) video4_image_uncrop_nhd_pane_ParamLimits

0x5dbf,	// (0x000b150d) video4_image_uncrop_nhd_pane

0x5c11,	// (0x000b135f) video4_image_uncrop_vga_pane_ParamLimits

0x5c11,	// (0x000b135f) video4_image_uncrop_vga_pane

0xa2c0,	// (0x000b5a0e) bg_tb_trans_pane_cp07

0xa2d8,	// (0x000b5a26) vid4_indicators_pane_g1

0xa2ee,	// (0x000b5a3c) vid4_indicators_pane_g2

0xa302,	// (0x000b5a50) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000bb05d) vid4_indicators_pane_g

0xa333,	// (0x000b5a81) vid4_indicators_pane_t1

0x5dd5,	// (0x000b1523) cam4_autofocus_pane_g1

0x5ddd,	// (0x000b152b) cam4_autofocus_pane_g2

0x5de5,	// (0x000b1533) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000bb068) cam4_autofocus_pane_g

0x5ded,	// (0x000b153b) cam4_autofocus_pane_g3_copy1

0x5675,	// (0x000b0dc3) video_down_pane_cp_t1

0x5683,	// (0x000b0dd1) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000bafe4) video_down_pane_cp_t

0x9641,	// (0x000b4d8f) popup_vitu2_window_ParamLimits

0x9641,	// (0x000b4d8f) popup_vitu2_window

0x5df5,	// (0x000b1543) aid_size_cell2_itu2_ParamLimits

0x5df5,	// (0x000b1543) aid_size_cell2_itu2

0x5e1b,	// (0x000b1569) aid_size_cell_itu2_ParamLimits

0x5e1b,	// (0x000b1569) aid_size_cell_itu2

0x5e79,	// (0x000b15c7) bg_popup_window_pane_cp09_ParamLimits

0x5e79,	// (0x000b15c7) bg_popup_window_pane_cp09

0x5e87,	// (0x000b15d5) field_vitu2_entry_pane_ParamLimits

0x5e87,	// (0x000b15d5) field_vitu2_entry_pane

0x5eaf,	// (0x000b15fd) grid_vitu2_function_pane_ParamLimits

0x5eaf,	// (0x000b15fd) grid_vitu2_function_pane

0x5f00,	// (0x000b164e) grid_vitu2_itu_pane_ParamLimits

0x5f00,	// (0x000b164e) grid_vitu2_itu_pane

0x5f8b,	// (0x000b16d9) cell_vitu2_itu_pane_ParamLimits

0x5f8b,	// (0x000b16d9) cell_vitu2_itu_pane

0x5fb1,	// (0x000b16ff) cell_vitu2_function_pane_ParamLimits

0x5fb1,	// (0x000b16ff) cell_vitu2_function_pane

0xd64f,	// (0x000b8d9d) bg_popup_call_pane_cp08_ParamLimits

0xd64f,	// (0x000b8d9d) bg_popup_call_pane_cp08

0xd668,	// (0x000b8db6) field_vitu2_entry_pane_g1

0xd674,	// (0x000b8dc2) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x000bb06f) field_vitu2_entry_pane_g

0x5ff5,	// (0x000b1743) field_vitu2_entry_pane_t1_ParamLimits

0x5ff5,	// (0x000b1743) field_vitu2_entry_pane_t1

0xa34a,	// (0x000b5a98) field_vitu2_entry_pane_t2_ParamLimits

0xa34a,	// (0x000b5a98) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x000bb076) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x000bb076) field_vitu2_entry_pane_t

0x6023,	// (0x000b1771) bg_button_pane_cp010_ParamLimits

0x6023,	// (0x000b1771) bg_button_pane_cp010

0x6031,	// (0x000b177f) cell_vitu2_itu_pane_g1

0x604f,	// (0x000b179d) cell_vitu2_itu_pane_t1_ParamLimits

0x604f,	// (0x000b179d) cell_vitu2_itu_pane_t1

0xfd14,	// (0x000ab462) cell_vitu2_itu_pane_t2_ParamLimits

0xfd14,	// (0x000ab462) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x000bb080) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x000bb080) cell_vitu2_itu_pane_t

0xa2c0,	// (0x000b5a0e) bg_button_pane_cp011

0x60b5,	// (0x000b1803) cell_vitu2_function_pane_g1

0x95f0,	// (0x000b4d3e) main_myfav_hc_pane

0x5a38,	// (0x000b1186) popup_image3_note_pane_ParamLimits

0x5a38,	// (0x000b1186) popup_image3_note_pane

0x5a54,	// (0x000b11a2) popup_image3_tool_bar_pane_ParamLimits

0x5a54,	// (0x000b11a2) popup_image3_tool_bar_pane

0xfd98,	// (0x000ab4e6) cell_vitu2_itu_pane_t3_ParamLimits

0xfd98,	// (0x000ab4e6) cell_vitu2_itu_pane_t3

0x95f0,	// (0x000b4d3e) bg_popup_trans_pane

0xd696,	// (0x000b8de4) grid_image3_tool_bar_pane

0xd6a0,	// (0x000b8dee) bg_popup_trans_pane_g1

0xac00,	// (0x000b634e) bg_popup_trans_pane_g2

0xd6a8,	// (0x000b8df6) bg_popup_trans_pane_g3

0xd6b0,	// (0x000b8dfe) bg_popup_trans_pane_g4

0xd6b8,	// (0x000b8e06) bg_popup_trans_pane_g5

0xd6c0,	// (0x000b8e0e) bg_popup_trans_pane_g6

0xd6c8,	// (0x000b8e16) bg_popup_trans_pane_g7

0xd6d0,	// (0x000b8e1e) bg_popup_trans_pane_g8

0xabe0,	// (0x000b632e) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x000bb087) bg_popup_trans_pane_g

0xd6d8,	// (0x000b8e26) cell_image3_tool_bar_pane_ParamLimits

0xd6d8,	// (0x000b8e26) cell_image3_tool_bar_pane

0xcc9a,	// (0x000b83e8) cell_image3_tool_bar_pane_g1

0x95f0,	// (0x000b4d3e) bg_popup_trans_pane_cp1

0xd6ee,	// (0x000b8e3c) popup_image3_note_pane_t1

0xd6fc,	// (0x000b8e4a) popup_image3_note_pane_t2

0xd70a,	// (0x000b8e58) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x000bb09a) popup_image3_note_pane_t

0xd71a,	// (0x000b8e68) popup_image3_note_pane_t3_copy1

0x60c9,	// (0x000b1817) bg_myfav_hc_instruction_pane_ParamLimits

0x60c9,	// (0x000b1817) bg_myfav_hc_instruction_pane

0x60e1,	// (0x000b182f) cell_myfav_contact_pane_ParamLimits

0x60e1,	// (0x000b182f) cell_myfav_contact_pane

0x60fd,	// (0x000b184b) cell_myfav_contact_pane_cp1_ParamLimits

0x60fd,	// (0x000b184b) cell_myfav_contact_pane_cp1

0x6115,	// (0x000b1863) cell_myfav_contact_pane_cp2_ParamLimits

0x6115,	// (0x000b1863) cell_myfav_contact_pane_cp2

0x612d,	// (0x000b187b) cell_myfav_contact_pane_cp3_ParamLimits

0x612d,	// (0x000b187b) cell_myfav_contact_pane_cp3

0x6144,	// (0x000b1892) cell_myfav_contact_pane_cp4_ParamLimits

0x6144,	// (0x000b1892) cell_myfav_contact_pane_cp4

0x615c,	// (0x000b18aa) cell_myfav_contact_pane_cp5_ParamLimits

0x615c,	// (0x000b18aa) cell_myfav_contact_pane_cp5

0x6170,	// (0x000b18be) cell_myfav_contact_pane_cp6_ParamLimits

0x6170,	// (0x000b18be) cell_myfav_contact_pane_cp6

0x6186,	// (0x000b18d4) cell_myfav_contact_pane_cp7_ParamLimits

0x6186,	// (0x000b18d4) cell_myfav_contact_pane_cp7

0xd728,	// (0x000b8e76) listscroll_gen_pane_cp05

0x619e,	// (0x000b18ec) main_myfav_hc_pane_g1_ParamLimits

0x619e,	// (0x000b18ec) main_myfav_hc_pane_g1

0x61b8,	// (0x000b1906) main_myfav_hc_pane_g2_ParamLimits

0x61b8,	// (0x000b1906) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x000bb0a1) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x000bb0a1) main_myfav_hc_pane_g

0x61ec,	// (0x000b193a) main_myfav_hc_pane_t1_ParamLimits

0x61ec,	// (0x000b193a) main_myfav_hc_pane_t1

0xd731,	// (0x000b8e7f) main_myfav_hc_pane_t2_ParamLimits

0xd731,	// (0x000b8e7f) main_myfav_hc_pane_t2

0xd743,	// (0x000b8e91) main_myfav_hc_pane_t3_ParamLimits

0xd743,	// (0x000b8e91) main_myfav_hc_pane_t3

0x6203,	// (0x000b1951) main_myfav_hc_pane_t4_ParamLimits

0x6203,	// (0x000b1951) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x000bb0a8) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x000bb0a8) main_myfav_hc_pane_t

0xcc9a,	// (0x000b83e8) bg_myfav_hc_instruction_pane_g1

0xd755,	// (0x000b8ea3) cell_myfav_contact_pane_g1_ParamLimits

0xd755,	// (0x000b8ea3) cell_myfav_contact_pane_g1

0xd755,	// (0x000b8ea3) cell_myfav_contact_pane_g2_ParamLimits

0xd755,	// (0x000b8ea3) cell_myfav_contact_pane_g2

0xd761,	// (0x000b8eaf) cell_myfav_contact_pane_g3_ParamLimits

0xd761,	// (0x000b8eaf) cell_myfav_contact_pane_g3

0xcf2f,	// (0x000b867d) cell_myfav_contact_pane_g4_ParamLimits

0xcf2f,	// (0x000b867d) cell_myfav_contact_pane_g4

0xd76e,	// (0x000b8ebc) cell_myfav_contact_pane_g5_ParamLimits

0xd76e,	// (0x000b8ebc) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000bb0b3) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000bb0b3) cell_myfav_contact_pane_g

0x61d2,	// (0x000b1920) main_myfav_hc_pane_g3_ParamLimits

0x61d2,	// (0x000b1920) main_myfav_hc_pane_g3

0xff81,	// (0x000ab6cf) popup_adpt_find_window

0x622d,	// (0x000b197b) afind_page_pane_ParamLimits

0x622d,	// (0x000b197b) afind_page_pane

0x6242,	// (0x000b1990) aid_size_cell_afind_ParamLimits

0x6242,	// (0x000b1990) aid_size_cell_afind

0x6260,	// (0x000b19ae) bg_popup_sub_pane_cp09_ParamLimits

0x6260,	// (0x000b19ae) bg_popup_sub_pane_cp09

0x626d,	// (0x000b19bb) find_pane_cp01_ParamLimits

0x626d,	// (0x000b19bb) find_pane_cp01

0xd77a,	// (0x000b8ec8) grid_afind_control_pane_ParamLimits

0xd77a,	// (0x000b8ec8) grid_afind_control_pane

0x627a,	// (0x000b19c8) grid_afind_pane_ParamLimits

0x627a,	// (0x000b19c8) grid_afind_pane

0x629c,	// (0x000b19ea) cell_afind_pane_ParamLimits

0x629c,	// (0x000b19ea) cell_afind_pane

0xcc9a,	// (0x000b83e8) afind_page_pane_g1

0x6303,	// (0x000b1a51) afind_page_pane_g2

0x630c,	// (0x000b1a5a) afind_page_pane_g3

0x0002,

0xf970,	// (0x000bb0be) afind_page_pane_g

0x6315,	// (0x000b1a63) afind_page_pane_t1

0xd78e,	// (0x000b8edc) cell_afind_grid_control_pane_ParamLimits

0xd78e,	// (0x000b8edc) cell_afind_grid_control_pane

0xd580,	// (0x000b8cce) bg_button_pane_cp69_ParamLimits

0xd580,	// (0x000b8cce) bg_button_pane_cp69

0x6335,	// (0x000b1a83) cell_afind_pane_g1_ParamLimits

0x6335,	// (0x000b1a83) cell_afind_pane_g1

0x6342,	// (0x000b1a90) cell_afind_pane_t1_ParamLimits

0x6342,	// (0x000b1a90) cell_afind_pane_t1

0xa9f5,	// (0x000b6143) bg_button_pane_cp72

0xd79d,	// (0x000b8eeb) cell_afind_grid_control_pane_g1

0x3270,	// (0x000ae9be) aid_image_placing_area_ParamLimits

0x3270,	// (0x000ae9be) aid_image_placing_area

0xd242,	// (0x000b8990) field_vitu_entry_pane_g1_ParamLimits

0xd242,	// (0x000b8990) field_vitu_entry_pane_g1

0xd24e,	// (0x000b899c) field_vitu_entry_pane_g2_ParamLimits

0xd24e,	// (0x000b899c) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000baf6f) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000baf6f) field_vitu_entry_pane_g

0x5490,	// (0x000b0bde) cell_vitu_itu_pane_g1_ParamLimits

0x54d2,	// (0x000b0c20) cell_vitu_itu_pane_t3_ParamLimits

0x54d2,	// (0x000b0c20) cell_vitu_itu_pane_t3

0xd526,	// (0x000b8c74) mp4_progress_pane_t1_ParamLimits

0xd53f,	// (0x000b8c8d) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000bb004) mp4_progress_pane_t_ParamLimits

0xd558,	// (0x000b8ca6) mup_progress_pane_cp04_ParamLimits

0x6217,	// (0x000b1965) main_myfav_hc_pane_t5_ParamLimits

0x6217,	// (0x000b1965) main_myfav_hc_pane_t5

0xfe40,	// (0x000ab58e) aid_zoom_text_primary

0xff81,	// (0x000ab6cf) popup_adpt_find_window_ParamLimits

0x9641,	// (0x000b4d8f) main_cam_set_pane

0x5c43,	// (0x000b1391) cam4_zoom_pane_ParamLimits

0x5c43,	// (0x000b1391) cam4_zoom_pane

0x6354,	// (0x000b1aa2) main_cam_set_pane_g1_ParamLimits

0x6354,	// (0x000b1aa2) main_cam_set_pane_g1

0x6362,	// (0x000b1ab0) main_cam_set_pane_g2_ParamLimits

0x6362,	// (0x000b1ab0) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000bb0c5) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000bb0c5) main_cam_set_pane_g

0x6383,	// (0x000b1ad1) main_cam_set_pane_t1_ParamLimits

0x6383,	// (0x000b1ad1) main_cam_set_pane_t1

0x639e,	// (0x000b1aec) main_cset_listscroll_pane_ParamLimits

0x639e,	// (0x000b1aec) main_cset_listscroll_pane

0x63c2,	// (0x000b1b10) main_cset_slider_pane_ParamLimits

0x63c2,	// (0x000b1b10) main_cset_slider_pane

0xd7ae,	// (0x000b8efc) main_cset_list_pane_ParamLimits

0xd7ae,	// (0x000b8efc) main_cset_list_pane

0xd7be,	// (0x000b8f0c) scroll_pane_cp028

0x63ec,	// (0x000b1b3a) aid_area_touch_slider

0x6408,	// (0x000b1b56) cset_slider_pane

0x6432,	// (0x000b1b80) main_cset_slider_pane_g1

0x6447,	// (0x000b1b95) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000bb0ca) main_cset_slider_pane_g

0xd7f7,	// (0x000b8f45) main_cset_slider_pane_t1

0x6509,	// (0x000b1c57) main_cset_slider_pane_t2

0x6523,	// (0x000b1c71) main_cset_slider_pane_t3

0x653d,	// (0x000b1c8b) main_cset_slider_pane_t4

0x6557,	// (0x000b1ca5) main_cset_slider_pane_t5

0x6575,	// (0x000b1cc3) main_cset_slider_pane_t6

0x658a,	// (0x000b1cd8) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000bb0ef) main_cset_slider_pane_t

0x6696,	// (0x000b1de4) cset_list_set_pane_ParamLimits

0x6696,	// (0x000b1de4) cset_list_set_pane

0x66aa,	// (0x000b1df8) aid_position_infowindow_above

0x66b2,	// (0x000b1e00) aid_position_infowindow_below

0x66ba,	// (0x000b1e08) cset_list_set_pane_g1_ParamLimits

0x66ba,	// (0x000b1e08) cset_list_set_pane_g1

0x66c6,	// (0x000b1e14) cset_list_set_pane_g3_ParamLimits

0x66c6,	// (0x000b1e14) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000bb10e) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000bb10e) cset_list_set_pane_g

0x66d5,	// (0x000b1e23) cset_list_set_pane_t1_ParamLimits

0x66d5,	// (0x000b1e23) cset_list_set_pane_t1

0x9641,	// (0x000b4d8f) list_highlight_pane_cp021_ParamLimits

0x9641,	// (0x000b4d8f) list_highlight_pane_cp021

0xb42c,	// (0x000b6b7a) cset_slider_pane_g1

0xb43e,	// (0x000b6b8c) cset_slider_pane_g2

0xb435,	// (0x000b6b83) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000bb113) cset_slider_pane_g

0xa367,	// (0x000b5ab5) aid_area_touch_cam4_zoom

0xa36f,	// (0x000b5abd) cam4_zoom_cont_pane

0xa377,	// (0x000b5ac5) cam4_zoom_pane_g1

0xa37f,	// (0x000b5acd) cam4_zoom_pane_g2

0x66ea,	// (0x000b1e38) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000bb11a) cam4_zoom_pane_g

0xa387,	// (0x000b5ad5) cam4_zoom_cont_pane_g1

0xa390,	// (0x000b5ade) cam4_zoom_cont_pane_g2

0xa399,	// (0x000b5ae7) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000bb121) cam4_zoom_cont_pane_g

0x5ac0,	// (0x000b120e) call4_image_pane_ParamLimits

0x5ac0,	// (0x000b120e) call4_image_pane

0xd58c,	// (0x000b8cda) call4_windows_conf_pane_ParamLimits

0xd5a7,	// (0x000b8cf5) popup_call4_audio_in_window_ParamLimits

0xd5a7,	// (0x000b8cf5) popup_call4_audio_in_window

0x95f0,	// (0x000b4d3e) bg_popup_call2_act_pane_cp02

0xd609,	// (0x000b8d57) call4_list_conf_pane

0xcc9a,	// (0x000b83e8) call4_image_pane_g1

0xcc9a,	// (0x000b83e8) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000bae35) call4_image_pane_g

0xd897,	// (0x000b8fe5) list_single_graphic_popup_conf4_pane_ParamLimits

0xd897,	// (0x000b8fe5) list_single_graphic_popup_conf4_pane

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp022

0xd8ac,	// (0x000b8ffa) list_single_graphic_popup_conf4_pane_g1

0xb118,	// (0x000b6866) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000bb128) list_single_graphic_popup_conf4_pane_g

0xd8b4,	// (0x000b9002) list_single_graphic_popup_conf4_pane_t1

0x12ff,	// (0x000aca4d) popup_vtel_slider_window_ParamLimits

0x12ff,	// (0x000aca4d) popup_vtel_slider_window

0xd56e,	// (0x000b8cbc) dialer2_ne_pane_t2_ParamLimits

0xd56e,	// (0x000b8cbc) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000bb009) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000bb009) dialer2_ne_pane_t

0xca5f,	// (0x000b81ad) bg_popup_sub_pane_cp010_ParamLimits

0xca5f,	// (0x000b81ad) bg_popup_sub_pane_cp010

0x66f2,	// (0x000b1e40) popup_vtel_slider_window_g1_ParamLimits

0x66f2,	// (0x000b1e40) popup_vtel_slider_window_g1

0x6705,	// (0x000b1e53) popup_vtel_slider_window_g2_ParamLimits

0x6705,	// (0x000b1e53) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000bb12d) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000bb12d) popup_vtel_slider_window_g

0x675b,	// (0x000b1ea9) vtel_slider_pane_ParamLimits

0x675b,	// (0x000b1ea9) vtel_slider_pane

0x677d,	// (0x000b1ecb) vtel_slider_pane_g1_ParamLimits

0x677d,	// (0x000b1ecb) vtel_slider_pane_g1

0x6791,	// (0x000b1edf) vtel_slider_pane_g2_ParamLimits

0x6791,	// (0x000b1edf) vtel_slider_pane_g2

0x67a9,	// (0x000b1ef7) vtel_slider_pane_g3_ParamLimits

0x67a9,	// (0x000b1ef7) vtel_slider_pane_g3

0x677d,	// (0x000b1ecb) vtel_slider_pane_g4_ParamLimits

0x677d,	// (0x000b1ecb) vtel_slider_pane_g4

0x67bf,	// (0x000b1f0d) vtel_slider_pane_g5_ParamLimits

0x67bf,	// (0x000b1f0d) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x000bb136) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x000bb136) vtel_slider_pane_g

0x95f0,	// (0x000b4d3e) main_gallery2_pane

0x5e47,	// (0x000b1595) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e47,	// (0x000b1595) aid_size_row_itut2_dropdow_list

0x5ed7,	// (0x000b1625) grid_vitu2_function_top_pane_ParamLimits

0x5ed7,	// (0x000b1625) grid_vitu2_function_top_pane

0x5f36,	// (0x000b1684) popup_vitu2_dropdown_list_window_ParamLimits

0x5f36,	// (0x000b1684) popup_vitu2_dropdown_list_window

0x5f5f,	// (0x000b16ad) popup_vitu2_match_list_window

0x67e3,	// (0x000b1f31) cell_vitu2_function_top_pane_ParamLimits

0x67e3,	// (0x000b1f31) cell_vitu2_function_top_pane

0x6803,	// (0x000b1f51) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6803,	// (0x000b1f51) cell_vitu2_function_top_pane_cp01

0x6821,	// (0x000b1f6f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6821,	// (0x000b1f6f) cell_vitu2_function_top_wide_pane

0xa2c0,	// (0x000b5a0e) bg_button_pane_cp012

0x683f,	// (0x000b1f8d) cell_vitu2_function_top_pane_g1

0xa3a2,	// (0x000b5af0) bg_button_pane_cp013_ParamLimits

0xa3a2,	// (0x000b5af0) bg_button_pane_cp013

0x6853,	// (0x000b1fa1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6853,	// (0x000b1fa1) cell_vitu2_function_top_wide_pane_g1

0xa2c0,	// (0x000b5a0e) bg_popup_sub_pane_cp20

0x686b,	// (0x000b1fb9) list_vitu2_match_list_pane

0xd6a0,	// (0x000b8dee) bg_popup_sub_pane_cp20_g1

0xd6a8,	// (0x000b8df6) bg_popup_sub_pane_cp20_g2

0xac00,	// (0x000b634e) bg_popup_sub_pane_cp20_g3

0xd6b0,	// (0x000b8dfe) bg_popup_sub_pane_cp20_g4

0xabe0,	// (0x000b632e) bg_popup_sub_pane_cp20_g5

0xd8ca,	// (0x000b9018) bg_popup_sub_pane_cp20_g6

0xd6c0,	// (0x000b8e0e) bg_popup_sub_pane_cp20_g7

0xd6c8,	// (0x000b8e16) bg_popup_sub_pane_cp20_g8

0xd6d0,	// (0x000b8e1e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x000bb141) bg_popup_sub_pane_cp20_g

0xa3be,	// (0x000b5b0c) list_vitu2_match_list_item_pane_ParamLimits

0xa3be,	// (0x000b5b0c) list_vitu2_match_list_item_pane

0xa3d0,	// (0x000b5b1e) list_vitu2_match_list_item_pane_t1

0x9d1f,	// (0x000b546d) bg_popup_sub_pane_cp21

0xa3de,	// (0x000b5b2c) grid_vitu2_dropdown_list_pane

0x68c7,	// (0x000b2015) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x68c7,	// (0x000b2015) cell_vitu2_dropdown_list_char_pane

0x68ea,	// (0x000b2038) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x68ea,	// (0x000b2038) cell_vitu2_dropdown_list_ctrl_pane

0xd8d2,	// (0x000b9020) cell_vitu2_dropdown_list_char_pane_g1

0xd8db,	// (0x000b9029) cell_vitu2_dropdown_list_char_pane_g2

0xd8e4,	// (0x000b9032) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x000bb15e) cell_vitu2_dropdown_list_char_pane_g

0x6918,	// (0x000b2066) cell_vitu2_dropdown_list_char_pane_t1

0x6926,	// (0x000b2074) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6926,	// (0x000b2074) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6936,	// (0x000b2084) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6936,	// (0x000b2084) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6947,	// (0x000b2095) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6947,	// (0x000b2095) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6957,	// (0x000b20a5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6957,	// (0x000b20a5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa25d,	// (0x000b59ab) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa25d,	// (0x000b59ab) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x000bb165) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x000bb165) cell_vitu2_dropdown_list_ctrl_pane_g

0x6973,	// (0x000b20c1) aid_size_cell_gallery2_ParamLimits

0x6973,	// (0x000b20c1) aid_size_cell_gallery2

0x6989,	// (0x000b20d7) grid_gallery2_pane_ParamLimits

0x6989,	// (0x000b20d7) grid_gallery2_pane

0x699d,	// (0x000b20eb) scroll_pane_cp029_ParamLimits

0x699d,	// (0x000b20eb) scroll_pane_cp029

0x69a9,	// (0x000b20f7) cell_gallery2_pane_ParamLimits

0x69a9,	// (0x000b20f7) cell_gallery2_pane

0xd8ed,	// (0x000b903b) cell_gallery2_pane_g2

0x69e2,	// (0x000b2130) cell_gallery2_pane_g3

0xd8f7,	// (0x000b9045) cell_gallery2_pane_g4

0xd8ff,	// (0x000b904d) cell_gallery2_pane_g5

0xb2e6,	// (0x000b6a34) grid_highlight_pane_cp10

0x5f5f,	// (0x000b16ad) popup_vitu2_match_list_window_ParamLimits

0x5f76,	// (0x000b16c4) popup_vitu2_query_window_ParamLimits

0x5f76,	// (0x000b16c4) popup_vitu2_query_window

0x9d1f,	// (0x000b546d) bg_vitu2_candi_button_pane

0xd8d2,	// (0x000b9020) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8db,	// (0x000b9029) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e4,	// (0x000b9032) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x69ea,	// (0x000b2138) bg_button_pane_cp015

0x69fe,	// (0x000b214c) bg_button_pane_cp016

0x6a11,	// (0x000b215f) bg_button_pane_cp017

0xc82f,	// (0x000b7f7d) bg_popup_sub_pane_cp22

0xd907,	// (0x000b9055) popup_vitu2_query_window_g1

0x6a56,	// (0x000b21a4) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x000bb170) popup_vitu2_query_window_g

0x6a75,	// (0x000b21c3) popup_vitu2_query_window_t1_ParamLimits

0x6a75,	// (0x000b21c3) popup_vitu2_query_window_t1

0x6aaa,	// (0x000b21f8) popup_vitu2_query_window_t2_ParamLimits

0x6aaa,	// (0x000b21f8) popup_vitu2_query_window_t2

0x6abc,	// (0x000b220a) popup_vitu2_query_window_t3_ParamLimits

0x6abc,	// (0x000b220a) popup_vitu2_query_window_t3

0x6ae4,	// (0x000b2232) popup_vitu2_query_window_t4_ParamLimits

0x6ae4,	// (0x000b2232) popup_vitu2_query_window_t4

0x6b05,	// (0x000b2253) popup_vitu2_query_window_t5_ParamLimits

0x6b05,	// (0x000b2253) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x000bb177) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x000bb177) popup_vitu2_query_window_t

0xd7a6,	// (0x000b8ef4) main_cset_text_pane

0x63ec,	// (0x000b1b3a) aid_area_touch_slider_ParamLimits

0x6408,	// (0x000b1b56) cset_slider_pane_ParamLimits

0x6432,	// (0x000b1b80) main_cset_slider_pane_g1_ParamLimits

0x6447,	// (0x000b1b95) main_cset_slider_pane_g2_ParamLimits

0xd7c7,	// (0x000b8f15) main_cset_slider_pane_g3_ParamLimits

0xd7c7,	// (0x000b8f15) main_cset_slider_pane_g3

0x645c,	// (0x000b1baa) main_cset_slider_pane_g4_ParamLimits

0x645c,	// (0x000b1baa) main_cset_slider_pane_g4

0x646b,	// (0x000b1bb9) main_cset_slider_pane_g5_ParamLimits

0x646b,	// (0x000b1bb9) main_cset_slider_pane_g5

0x6479,	// (0x000b1bc7) main_cset_slider_pane_g6_ParamLimits

0x6479,	// (0x000b1bc7) main_cset_slider_pane_g6

0xf97c,	// (0x000bb0ca) main_cset_slider_pane_g_ParamLimits

0xd7f7,	// (0x000b8f45) main_cset_slider_pane_t1_ParamLimits

0x6509,	// (0x000b1c57) main_cset_slider_pane_t2_ParamLimits

0x6523,	// (0x000b1c71) main_cset_slider_pane_t3_ParamLimits

0x653d,	// (0x000b1c8b) main_cset_slider_pane_t4_ParamLimits

0x6557,	// (0x000b1ca5) main_cset_slider_pane_t5_ParamLimits

0x6575,	// (0x000b1cc3) main_cset_slider_pane_t6_ParamLimits

0x658a,	// (0x000b1cd8) main_cset_slider_pane_t7_ParamLimits

0x65b8,	// (0x000b1d06) main_cset_slider_pane_t8_ParamLimits

0x65b8,	// (0x000b1d06) main_cset_slider_pane_t8

0x65e0,	// (0x000b1d2e) main_cset_slider_pane_t9_ParamLimits

0x65e0,	// (0x000b1d2e) main_cset_slider_pane_t9

0x6608,	// (0x000b1d56) main_cset_slider_pane_t10_ParamLimits

0x6608,	// (0x000b1d56) main_cset_slider_pane_t10

0x6630,	// (0x000b1d7e) main_cset_slider_pane_t11_ParamLimits

0x6630,	// (0x000b1d7e) main_cset_slider_pane_t11

0x665a,	// (0x000b1da8) main_cset_slider_pane_t12_ParamLimits

0x665a,	// (0x000b1da8) main_cset_slider_pane_t12

0x6677,	// (0x000b1dc5) main_cset_slider_pane_t13_ParamLimits

0x6677,	// (0x000b1dc5) main_cset_slider_pane_t13

0xf9a1,	// (0x000bb0ef) main_cset_slider_pane_t_ParamLimits

0x95f0,	// (0x000b4d3e) bg_popup_sub_pane_cp011

0xd913,	// (0x000b9061) main_cset_text_pane_g1

0xd91b,	// (0x000b9069) main_cset_text_pane_t1

0xd929,	// (0x000b9077) main_cset_text_pane_t2

0xd937,	// (0x000b9085) main_cset_text_pane_t3

0xd945,	// (0x000b9093) main_cset_text_pane_t4

0xd953,	// (0x000b90a1) main_cset_text_pane_t5

0xd961,	// (0x000b90af) main_cset_text_pane_t6

0xd96f,	// (0x000b90bd) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x000bb186) main_cset_text_pane_t

0x95f0,	// (0x000b4d3e) main_cam4_burst_pane

0x95f0,	// (0x000b4d3e) main_cam5_pane

0x6323,	// (0x000b1a71) bg_button_pane_cp019

0x632c,	// (0x000b1a7a) bg_button_pane_cp020

0xd7d3,	// (0x000b8f21) main_cset_slider_pane_g7_ParamLimits

0xd7d3,	// (0x000b8f21) main_cset_slider_pane_g7

0xd7df,	// (0x000b8f2d) main_cset_slider_pane_g8_ParamLimits

0xd7df,	// (0x000b8f2d) main_cset_slider_pane_g8

0x648d,	// (0x000b1bdb) main_cset_slider_pane_g9_ParamLimits

0x648d,	// (0x000b1bdb) main_cset_slider_pane_g9

0x6499,	// (0x000b1be7) main_cset_slider_pane_g10_ParamLimits

0x6499,	// (0x000b1be7) main_cset_slider_pane_g10

0x64a5,	// (0x000b1bf3) main_cset_slider_pane_g11_ParamLimits

0x64a5,	// (0x000b1bf3) main_cset_slider_pane_g11

0x64b1,	// (0x000b1bff) main_cset_slider_pane_g12_ParamLimits

0x64b1,	// (0x000b1bff) main_cset_slider_pane_g12

0x64bd,	// (0x000b1c0b) main_cset_slider_pane_g13_ParamLimits

0x64bd,	// (0x000b1c0b) main_cset_slider_pane_g13

0x64c9,	// (0x000b1c17) main_cset_slider_pane_g14_ParamLimits

0x64c9,	// (0x000b1c17) main_cset_slider_pane_g14

0x64d5,	// (0x000b1c23) main_cset_slider_pane_g15_ParamLimits

0x64d5,	// (0x000b1c23) main_cset_slider_pane_g15

0xd825,	// (0x000b8f73) main_cset_slider_pane_t14_ParamLimits

0xd825,	// (0x000b8f73) main_cset_slider_pane_t14

0xd85e,	// (0x000b8fac) main_cset_slider_pane_t15_ParamLimits

0xd85e,	// (0x000b8fac) main_cset_slider_pane_t15

0x6b7c,	// (0x000b22ca) aid_cam4_burst_size_cell_ParamLimits

0x6b7c,	// (0x000b22ca) aid_cam4_burst_size_cell

0x6b9c,	// (0x000b22ea) grid_cam4_burst_pane_ParamLimits

0x6b9c,	// (0x000b22ea) grid_cam4_burst_pane

0x6bd6,	// (0x000b2324) linegrid_cam4_burst_pane_ParamLimits

0x6bd6,	// (0x000b2324) linegrid_cam4_burst_pane

0xd97d,	// (0x000b90cb) scroll_pane_cp30_ParamLimits

0xd97d,	// (0x000b90cb) scroll_pane_cp30

0x6bf8,	// (0x000b2346) cell_cam4_burst_pane_ParamLimits

0x6bf8,	// (0x000b2346) cell_cam4_burst_pane

0xd989,	// (0x000b90d7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd989,	// (0x000b90d7) linegrid_cam4_burst_pane_g1

0x6c4d,	// (0x000b239b) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c4d,	// (0x000b239b) linegrid_cam4_burst_pane_g2

0xd996,	// (0x000b90e4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd996,	// (0x000b90e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x000bb195) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x000bb195) linegrid_cam4_burst_pane_g

0x6c5e,	// (0x000b23ac) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6c5e,	// (0x000b23ac) linegrid_cam4_burst_pane_g3_copy1

0xd9a3,	// (0x000b90f1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9a3,	// (0x000b90f1) linegrid_cam4_burst_pane_g4

0x6c7c,	// (0x000b23ca) linegrid_cam4_burst_pane_g5_ParamLimits

0x6c7c,	// (0x000b23ca) linegrid_cam4_burst_pane_g5

0x6c8d,	// (0x000b23db) linegrid_cam4_burst_pane_g6_ParamLimits

0x6c8d,	// (0x000b23db) linegrid_cam4_burst_pane_g6

0xd9b0,	// (0x000b90fe) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9b0,	// (0x000b90fe) linegrid_cam4_burst_pane_g7

0x6ca4,	// (0x000b23f2) cell_cam4_burst_pane_g1

0xd9c9,	// (0x000b9117) main_cam5_pane_t1_ParamLimits

0xd9c9,	// (0x000b9117) main_cam5_pane_t1

0xd9db,	// (0x000b9129) main_cam5_pane_t2_ParamLimits

0xd9db,	// (0x000b9129) main_cam5_pane_t2

0xd9ed,	// (0x000b913b) main_cam5_pane_t3_ParamLimits

0xd9ed,	// (0x000b913b) main_cam5_pane_t3

0xd9ff,	// (0x000b914d) main_cam5_pane_t4_ParamLimits

0xd9ff,	// (0x000b914d) main_cam5_pane_t4

0xda17,	// (0x000b9165) main_cam5_pane_t5_ParamLimits

0xda17,	// (0x000b9165) main_cam5_pane_t5

0xda2b,	// (0x000b9179) main_cam5_pane_t6_ParamLimits

0xda2b,	// (0x000b9179) main_cam5_pane_t6

0xda3f,	// (0x000b918d) main_cam5_pane_t7_ParamLimits

0xda3f,	// (0x000b918d) main_cam5_pane_t7

0xda51,	// (0x000b919f) main_cam5_pane_t8_ParamLimits

0xda51,	// (0x000b919f) main_cam5_pane_t8

0xda6f,	// (0x000b91bd) main_cam5_pane_t9_ParamLimits

0xda6f,	// (0x000b91bd) main_cam5_pane_t9

0xda81,	// (0x000b91cf) main_cam5_pane_t10_ParamLimits

0xda81,	// (0x000b91cf) main_cam5_pane_t10

0xda93,	// (0x000b91e1) main_cam5_pane_t11_ParamLimits

0xda93,	// (0x000b91e1) main_cam5_pane_t11

0xdaa7,	// (0x000b91f5) main_cam5_pane_t12_ParamLimits

0xdaa7,	// (0x000b91f5) main_cam5_pane_t12

0xdabe,	// (0x000b920c) main_cam5_pane_t13_ParamLimits

0xdabe,	// (0x000b920c) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x000bb1a1) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x000bb1a1) main_cam5_pane_t

0x0004,	// (0x000ab752) popup_scut_keymap_window_ParamLimits

0x0004,	// (0x000ab752) popup_scut_keymap_window

0x6cb7,	// (0x000b2405) aid_size_cell_brow_shortcut

0xb2e6,	// (0x000b6a34) bg_popup_window_pane_cp010

0x6cc3,	// (0x000b2411) grid_scut_pane

0x6ccf,	// (0x000b241d) cell_scut_pane_ParamLimits

0x6ccf,	// (0x000b241d) cell_scut_pane

0x6ce8,	// (0x000b2436) cell_scut_pane_g1

0xdae1,	// (0x000b922f) cell_scut_pane_t1

0xdaf0,	// (0x000b923e) cell_scut_pane_t2

0x6cf1,	// (0x000b243f) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x000bb1bc) cell_scut_pane_t

0x4959,	// (0x000b00a7) main_mup3_pane_g8_ParamLimits

0x4959,	// (0x000b00a7) main_mup3_pane_g8

0x5e61,	// (0x000b15af) area_vitu2_query_pane_ParamLimits

0x5e61,	// (0x000b15af) area_vitu2_query_pane

0x6a24,	// (0x000b2172) input_focus_pane_cp08

0xdaff,	// (0x000b924d) area_vitu2_query_pane_g1

0x6cff,	// (0x000b244d) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x000bb1c3) area_vitu2_query_pane_g

0x6d12,	// (0x000b2460) area_vitu2_query_pane_t1_ParamLimits

0x6d12,	// (0x000b2460) area_vitu2_query_pane_t1

0x6d26,	// (0x000b2474) area_vitu2_query_pane_t2_ParamLimits

0x6d26,	// (0x000b2474) area_vitu2_query_pane_t2

0x6d3a,	// (0x000b2488) area_vitu2_query_pane_t3_ParamLimits

0x6d3a,	// (0x000b2488) area_vitu2_query_pane_t3

0xa3e6,	// (0x000b5b34) area_vitu2_query_pane_t4_ParamLimits

0xa3e6,	// (0x000b5b34) area_vitu2_query_pane_t4

0xa40e,	// (0x000b5b5c) area_vitu2_query_pane_t5_ParamLimits

0xa40e,	// (0x000b5b5c) area_vitu2_query_pane_t5

0xa436,	// (0x000b5b84) area_vitu2_query_pane_t6_ParamLimits

0xa436,	// (0x000b5b84) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x000bb1c8) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x000bb1c8) area_vitu2_query_pane_t

0x6d62,	// (0x000b24b0) bg_button_pane_cp018

0x6d70,	// (0x000b24be) bg_button_pane_cp021

0x6d7c,	// (0x000b24ca) bg_button_pane_cp022

0x6d8d,	// (0x000b24db) input_focus_pane_cp09

0x27b9,	// (0x000adf07) aid_size_touch_mv_arrow_left

0x27e2,	// (0x000adf30) aid_size_touch_mv_arrow_right

0x64ed,	// (0x000b1c3b) main_cset_slider_pane_g16_ParamLimits

0x64ed,	// (0x000b1c3b) main_cset_slider_pane_g16

0x64fb,	// (0x000b1c49) main_cset_slider_pane_g17_ParamLimits

0x64fb,	// (0x000b1c49) main_cset_slider_pane_g17

0x6ca4,	// (0x000b23f2) cell_cam4_burst_pane_g1_ParamLimits

0x95f0,	// (0x000b4d3e) compa_mode_pane

0x6715,	// (0x000b1e63) popup_vtel_slider_window_g3_ParamLimits

0x6715,	// (0x000b1e63) popup_vtel_slider_window_g3

0x672c,	// (0x000b1e7a) popup_vtel_slider_window_g4_ParamLimits

0x672c,	// (0x000b1e7a) popup_vtel_slider_window_g4

0x6743,	// (0x000b1e91) popup_vtel_slider_window_t1_ParamLimits

0x6743,	// (0x000b1e91) popup_vtel_slider_window_t1

0x95f0,	// (0x000b4d3e) main_cl_pane

0xc85b,	// (0x000b7fa9) popup_imed_adjust2_window_ParamLimits

0xc82f,	// (0x000b7f7d) bg_tb_trans_pane_cp05_ParamLimits

0xd177,	// (0x000b88c5) popup_imed_adjust2_window_g1_ParamLimits

0xd186,	// (0x000b88d4) popup_imed_adjust2_window_g2_ParamLimits

0xd186,	// (0x000b88d4) popup_imed_adjust2_window_g2

0xd192,	// (0x000b88e0) popup_imed_adjust2_window_g3_ParamLimits

0xd192,	// (0x000b88e0) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000baf33) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000baf33) popup_imed_adjust2_window_g

0xd19e,	// (0x000b88ec) popup_imed_adjust2_window_t1_ParamLimits

0xd1b6,	// (0x000b8904) slider_imed_adjust_pane_ParamLimits

0xd1ca,	// (0x000b8918) slider_imed_adjust_pane_g1_ParamLimits

0xd1da,	// (0x000b8928) slider_imed_adjust_pane_g2_ParamLimits

0xd1ea,	// (0x000b8938) slider_imed_adjust_pane_g3_ParamLimits

0xd1fb,	// (0x000b8949) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000baf3a) slider_imed_adjust_pane_g_ParamLimits

0x5be3,	// (0x000b1331) aid_touch_area_cam4_ParamLimits

0x5be3,	// (0x000b1331) aid_touch_area_cam4

0xa23f,	// (0x000b598d) battery_pane_cp01

0x5cb5,	// (0x000b1403) main_camera4_pane_g6_ParamLimits

0x5cb5,	// (0x000b1403) main_camera4_pane_g6

0x5cdf,	// (0x000b142d) main_camera4_pane_t2_ParamLimits

0x5cdf,	// (0x000b142d) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000bb03d) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000bb03d) main_camera4_pane_t

0x5d14,	// (0x000b1462) aid_touch_area_vid4_ParamLimits

0x5d14,	// (0x000b1462) aid_touch_area_vid4

0x5d68,	// (0x000b14b6) main_video4_pane_g5_ParamLimits

0x5d68,	// (0x000b14b6) main_video4_pane_g5

0x5d8d,	// (0x000b14db) vid4_progress_pane_ParamLimits

0x5d8d,	// (0x000b14db) vid4_progress_pane

0xd7eb,	// (0x000b8f39) main_cset_slider_pane_g18_ParamLimits

0xd7eb,	// (0x000b8f39) main_cset_slider_pane_g18

0xd9bd,	// (0x000b910b) cell_cam4_burst_pane_g2_ParamLimits

0xd9bd,	// (0x000b910b) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x000bb19c) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x000bb19c) cell_cam4_burst_pane_g

0xa7cd,	// (0x000b5f1b) bg_cl_pane_ParamLimits

0xa7cd,	// (0x000b5f1b) bg_cl_pane

0x6d9e,	// (0x000b24ec) cl_header_pane_ParamLimits

0x6d9e,	// (0x000b24ec) cl_header_pane

0x6db2,	// (0x000b2500) cl_listscroll_pane_ParamLimits

0x6db2,	// (0x000b2500) cl_listscroll_pane

0xdb0b,	// (0x000b9259) bg_cl_pane_g1

0xdb13,	// (0x000b9261) bg_cl_pane_g2

0xdb1b,	// (0x000b9269) bg_cl_pane_g3

0xdb23,	// (0x000b9271) bg_cl_pane_g4

0xdb2b,	// (0x000b9279) bg_cl_pane_g5

0xdb33,	// (0x000b9281) bg_cl_pane_g6

0xdb3b,	// (0x000b9289) bg_cl_pane_g7

0xdb43,	// (0x000b9291) bg_cl_pane_g8

0xdb4b,	// (0x000b9299) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000bb1d7) bg_cl_pane_g

0x6dc2,	// (0x000b2510) aid_height_cl_leading_ParamLimits

0x6dc2,	// (0x000b2510) aid_height_cl_leading

0x6dce,	// (0x000b251c) aid_height_cl_text_ParamLimits

0x6dce,	// (0x000b251c) aid_height_cl_text

0x9641,	// (0x000b4d8f) bg_cl_header_pane_ParamLimits

0x9641,	// (0x000b4d8f) bg_cl_header_pane

0x6ded,	// (0x000b253b) cl_header_pane_g1_ParamLimits

0x6ded,	// (0x000b253b) cl_header_pane_g1

0x6e03,	// (0x000b2551) cl_header_pane_t1_ParamLimits

0x6e03,	// (0x000b2551) cl_header_pane_t1

0xdb53,	// (0x000b92a1) cl_list_pane

0xd7be,	// (0x000b8f0c) hc_scroll_pane_cp01

0xabe0,	// (0x000b632e) bg_cl_header_pane_g1

0xd6a0,	// (0x000b8dee) bg_cl_header_pane_g2

0xac00,	// (0x000b634e) bg_cl_header_pane_g3

0xd6b0,	// (0x000b8dfe) bg_cl_header_pane_g4

0xd6a8,	// (0x000b8df6) bg_cl_header_pane_g5

0xd8ca,	// (0x000b9018) bg_cl_header_pane_g6

0xd6c8,	// (0x000b8e16) bg_cl_header_pane_g7

0xd6d0,	// (0x000b8e1e) bg_cl_header_pane_g8

0xd6c0,	// (0x000b8e0e) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000bb1ea) bg_cl_header_pane_g

0x6e1c,	// (0x000b256a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e1c,	// (0x000b256a) hc_cl_list_double_graphic_heading_pane

0x6e2f,	// (0x000b257d) hc_cl_list_single_graphic_pane_ParamLimits

0x6e2f,	// (0x000b257d) hc_cl_list_single_graphic_pane

0x6e47,	// (0x000b2595) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e47,	// (0x000b2595) hc_cl_list_single_graphic_pane_g1

0x6e53,	// (0x000b25a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e53,	// (0x000b25a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000bb1fd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000bb1fd) hc_cl_list_single_graphic_pane_g

0x6e67,	// (0x000b25b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6e67,	// (0x000b25b5) hc_cl_list_single_graphic_pane_t1

0x6e47,	// (0x000b2595) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e47,	// (0x000b2595) hc_cl_list_double_graphic_heading_pane_g1

0x6e7c,	// (0x000b25ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6e7c,	// (0x000b25ca) hc_cl_list_double_graphic_heading_pane_g2

0x6e90,	// (0x000b25de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6e90,	// (0x000b25de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000bb202) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000bb202) hc_cl_list_double_graphic_heading_pane_g

0x6ea4,	// (0x000b25f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ea4,	// (0x000b25f2) hc_cl_list_double_graphic_heading_pane_t1

0x6eb9,	// (0x000b2607) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6eb9,	// (0x000b2607) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000bb209) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000bb209) hc_cl_list_double_graphic_heading_pane_t

0x6ece,	// (0x000b261c) vid4_progress_pane_g1

0x6ee0,	// (0x000b262e) vid4_progress_pane_g2

0x9ef0,	// (0x000b563e) vid4_progress_pane_g3

0xa48a,	// (0x000b5bd8) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000bb20e) vid4_progress_pane_g

0xa4a8,	// (0x000b5bf6) vid4_progress_pane_t1

0xa4bd,	// (0x000b5c0b) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000bb219) vid4_progress_pane_t

0xa4e8,	// (0x000b5c36) wait_bar_pane_cp07

0xca6d,	// (0x000b81bb) blid_firmament_pane_ParamLimits

0xcaca,	// (0x000b8218) popup_blid_sat_info2_window_g1

0xcaee,	// (0x000b823c) popup_blid_sat_info2_window_t3

0xcafc,	// (0x000b824a) popup_blid_sat_info2_window_t4

0xcb0a,	// (0x000b8258) popup_blid_sat_info2_window_t5

0xcb18,	// (0x000b8266) popup_blid_sat_info2_window_t6

0xcb28,	// (0x000b8276) popup_blid_sat_info2_window_t7

0xcb36,	// (0x000b8284) popup_blid_sat_info2_window_t8

0xcb44,	// (0x000b8292) popup_blid_sat_info2_window_t9

0xcb52,	// (0x000b82a0) popup_blid_sat_info2_window_t10

0xcc1a,	// (0x000b8368) aid_firma_cardinal_ParamLimits

0xcc2e,	// (0x000b837c) blid_firmament_pane_t1_ParamLimits

0xcc45,	// (0x000b8393) blid_firmament_pane_t2_ParamLimits

0xcc5c,	// (0x000b83aa) blid_firmament_pane_t3_ParamLimits

0xcc73,	// (0x000b83c1) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000bae2c) blid_firmament_pane_t_ParamLimits

0xcc8a,	// (0x000b83d8) blid_sat_info_pane_ParamLimits

0x9641,	// (0x000b4d8f) main_cam_set_pane_ParamLimits

0x523a,	// (0x000b0988) aid_size_cell_colour_35_ParamLimits

0x525a,	// (0x000b09a8) aid_size_cell_colour_112_ParamLimits

0x527a,	// (0x000b09c8) aid_size_cell_effect_ParamLimits

0xc82f,	// (0x000b7f7d) bg_tb_trans_pane_cp02_ParamLimits

0xae46,	// (0x000b6594) heading_imed_pane_ParamLimits

0x529a,	// (0x000b09e8) listscroll_imed_pane_ParamLimits

0xbe51,	// (0x000b759f) popup_call2_audio_first_window_g5_ParamLimits

0xbe51,	// (0x000b759f) popup_call2_audio_first_window_g5

0x584b,	// (0x000b0f99) aid_size_touch_image3_arrow_left_ParamLimits

0x584b,	// (0x000b0f99) aid_size_touch_image3_arrow_left

0x5877,	// (0x000b0fc5) aid_size_touch_image3_arrow_right_ParamLimits

0x5877,	// (0x000b0fc5) aid_size_touch_image3_arrow_right

0xa4d3,	// (0x000b5c21) vid4_progress_pane_t3

0x55b9,	// (0x000b0d07) main_hwr_training_symbol_option_pane_ParamLimits

0x55b9,	// (0x000b0d07) main_hwr_training_symbol_option_pane

0xd466,	// (0x000b8bb4) popup_hwr_training_preview_window_ParamLimits

0xd466,	// (0x000b8bb4) popup_hwr_training_preview_window

0x55d9,	// (0x000b0d27) hwr_training_navi_pane_g5_ParamLimits

0x55d9,	// (0x000b0d27) hwr_training_navi_pane_g5

0xd68e,	// (0x000b8ddc) popup_char_count_window

0xa2c0,	// (0x000b5a0e) bg_popup_sub_pane_cp20_ParamLimits

0x686b,	// (0x000b1fb9) list_vitu2_match_list_pane_ParamLimits

0x687a,	// (0x000b1fc8) vitu2_page_scroll_pane_ParamLimits

0x687a,	// (0x000b1fc8) vitu2_page_scroll_pane

0xdb5c,	// (0x000b92aa) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb5c,	// (0x000b92aa) list_single_hwr_training_symbol_option_pane

0xdb6f,	// (0x000b92bd) list_single_hwr_training_symbol_option_pane_g1

0xdb77,	// (0x000b92c5) list_single_hwr_training_symbol_option_pane_t1

0xdb85,	// (0x000b92d3) bg_button_pane_cp023

0xdb8e,	// (0x000b92dc) bg_button_pane_cp024

0x6f2a,	// (0x000b2678) vitu2_page_scroll_pane_g1

0x6f32,	// (0x000b2680) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000bb220) vitu2_page_scroll_pane_g

0x6f3c,	// (0x000b268a) vitu2_page_scroll_pane_t1

0xc9cd,	// (0x000b811b) popup_char_count_window_g1

0xdbc1,	// (0x000b930f) popup_char_count_window_g2

0xdbca,	// (0x000b9318) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000bb225) popup_char_count_window_g

0xdbd3,	// (0x000b9321) popup_char_count_window_t1

0x95f0,	// (0x000b4d3e) main_vded2_pane

0xd163,	// (0x000b88b1) aid_size_cell_imed_line

0xd16d,	// (0x000b88bb) grid_imed_line_width_pane

0xa315,	// (0x000b5a63) vid4_indicators_pane_g4

0xdbe1,	// (0x000b932f) cell_imed_line_width_pane_ParamLimits

0xdbe1,	// (0x000b932f) cell_imed_line_width_pane

0xdbf7,	// (0x000b9345) cell_imed_line_width_pane_g1

0xcac2,	// (0x000b8210) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000bb22c) cell_imed_line_width_pane_g

0x6f4b,	// (0x000b2699) main_vded2_pane_g1_ParamLimits

0x6f4b,	// (0x000b2699) main_vded2_pane_g1

0x6f66,	// (0x000b26b4) main_vded2_pane_g2_ParamLimits

0x6f66,	// (0x000b26b4) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000bb231) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000bb231) main_vded2_pane_g

0x6f78,	// (0x000b26c6) vded2_slider_pane_ParamLimits

0x6f78,	// (0x000b26c6) vded2_slider_pane

0x6f88,	// (0x000b26d6) aid_size_touch_vded2_end

0x6f92,	// (0x000b26e0) aid_size_touch_vded2_playhead

0xdc00,	// (0x000b934e) aid_size_touch_vded2_start

0xdc08,	// (0x000b9356) vded2_slider_bg_pane

0xdc3a,	// (0x000b9388) vded2_slider_pane_g1

0xdc43,	// (0x000b9391) vded2_slider_pane_g2

0x6f9c,	// (0x000b26ea) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x000bb236) vded2_slider_pane_g

0xdc11,	// (0x000b935f) vded2_slider_bg_pane_g1

0xdc1a,	// (0x000b9368) vded2_slider_bg_pane_g2

0xdc23,	// (0x000b9371) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x000bb23d) vded2_slider_bg_pane_g

0x2eaf,	// (0x000ae5fd) aid_postcard_touch_down_pane_ParamLimits

0x2eaf,	// (0x000ae5fd) aid_postcard_touch_down_pane

0x2ec7,	// (0x000ae615) aid_postcard_touch_up_pane_ParamLimits

0x2ec7,	// (0x000ae615) aid_postcard_touch_up_pane

0x95f0,	// (0x000b4d3e) main_blid2_pane

0xc83d,	// (0x000b7f8b) popup_blid2_search_window

0x95f0,	// (0x000b4d3e) blid2_gps_pane

0x95f0,	// (0x000b4d3e) blid2_navig_pane

0x95f0,	// (0x000b4d3e) blid2_search_pane

0x95f0,	// (0x000b4d3e) blid2_tripm_pane

0x6fa7,	// (0x000b26f5) blid2_search_pane_g1_ParamLimits

0x6fa7,	// (0x000b26f5) blid2_search_pane_g1

0x6fba,	// (0x000b2708) blid2_search_pane_t1_ParamLimits

0x6fba,	// (0x000b2708) blid2_search_pane_t1

0x6fcc,	// (0x000b271a) aid_size_cell_blid2_gps_ParamLimits

0x6fcc,	// (0x000b271a) aid_size_cell_blid2_gps

0x6fe4,	// (0x000b2732) blid2_gps_pane_g1_ParamLimits

0x6fe4,	// (0x000b2732) blid2_gps_pane_g1

0x6ff8,	// (0x000b2746) grid_blid2_satellite_pane_ParamLimits

0x6ff8,	// (0x000b2746) grid_blid2_satellite_pane

0x7010,	// (0x000b275e) blid2_navig_pane_g1_ParamLimits

0x7010,	// (0x000b275e) blid2_navig_pane_g1

0x701c,	// (0x000b276a) blid2_navig_pane_t1_ParamLimits

0x701c,	// (0x000b276a) blid2_navig_pane_t1

0x7037,	// (0x000b2785) blid2_navig_pane_t2_ParamLimits

0x7037,	// (0x000b2785) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x000bb244) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x000bb244) blid2_navig_pane_t

0x7052,	// (0x000b27a0) blid2_navig_ring_pane_ParamLimits

0x7052,	// (0x000b27a0) blid2_navig_ring_pane

0x706d,	// (0x000b27bb) blid2_speed_pane_ParamLimits

0x706d,	// (0x000b27bb) blid2_speed_pane

0x7079,	// (0x000b27c7) blid2_tripm_pane_g1_ParamLimits

0x7079,	// (0x000b27c7) blid2_tripm_pane_g1

0x7094,	// (0x000b27e2) blid2_tripm_pane_g2_ParamLimits

0x7094,	// (0x000b27e2) blid2_tripm_pane_g2

0x70a8,	// (0x000b27f6) blid2_tripm_pane_g3_ParamLimits

0x70a8,	// (0x000b27f6) blid2_tripm_pane_g3

0x70bc,	// (0x000b280a) blid2_tripm_pane_g4_ParamLimits

0x70bc,	// (0x000b280a) blid2_tripm_pane_g4

0x70d0,	// (0x000b281e) blid2_tripm_pane_g5_ParamLimits

0x70d0,	// (0x000b281e) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x000bb249) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x000bb249) blid2_tripm_pane_g

0x70f6,	// (0x000b2844) blid2_tripm_pane_t1_ParamLimits

0x70f6,	// (0x000b2844) blid2_tripm_pane_t1

0x710f,	// (0x000b285d) blid2_tripm_pane_t2_ParamLimits

0x710f,	// (0x000b285d) blid2_tripm_pane_t2

0x7128,	// (0x000b2876) blid2_tripm_pane_t3_ParamLimits

0x7128,	// (0x000b2876) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x000bb256) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x000bb256) blid2_tripm_pane_t

0x716f,	// (0x000b28bd) cell_blid2_satellite_pane_ParamLimits

0x716f,	// (0x000b28bd) cell_blid2_satellite_pane

0x718d,	// (0x000b28db) cell_blid2_satellite_pane_g1

0xdc4b,	// (0x000b9399) cell_blid2_satellite_pane_t1

0xcc9a,	// (0x000b83e8) blid2_speed_pane_g1

0xdc59,	// (0x000b93a7) blid2_speed_pane_t1

0xdc67,	// (0x000b93b5) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x000bb25f) blid2_speed_pane_t

0xcc9a,	// (0x000b83e8) blid2_navig_ring_pane_g1

0x7196,	// (0x000b28e4) blid2_navig_ring_pane_g2

0x719e,	// (0x000b28ec) blid2_navig_ring_pane_g3

0x71a6,	// (0x000b28f4) blid2_navig_ring_pane_g4

0x71ae,	// (0x000b28fc) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x000bb264) blid2_navig_ring_pane_g

0x95f0,	// (0x000b4d3e) bg_popup_window_pane_cp011

0xdc75,	// (0x000b93c3) popup_blid2_search_window_g1

0xdc7d,	// (0x000b93cb) popup_blid2_search_window_t1

0xdc8b,	// (0x000b93d9) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x000bb26f) popup_blid2_search_window_t

0xaaef,	// (0x000b623d) main_browser_pane_g1

0xa7cd,	// (0x000b5f1b) main_browser_pane_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_button_pane_cp011_ParamLimits

0x60b5,	// (0x000b1803) cell_vitu2_function_pane_g1_ParamLimits

0xc82f,	// (0x000b7f7d) bg_popup_sub_pane_cp22_ParamLimits

0x6a24,	// (0x000b2172) input_focus_pane_cp08_ParamLimits

0x6a3b,	// (0x000b2189) popup_vitu2_query_button_pane_ParamLimits

0x6a3b,	// (0x000b2189) popup_vitu2_query_button_pane

0x6a4c,	// (0x000b219a) popup_vitu2_query_input_button_pane

0xd907,	// (0x000b9055) popup_vitu2_query_window_g1_ParamLimits

0x6a56,	// (0x000b21a4) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x000bb170) popup_vitu2_query_window_g_ParamLimits

0x95f0,	// (0x000b4d3e) bg_button_pane_cp026

0x71b6,	// (0x000b2904) popup_vitu2_query_input_button_pane_g1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp025

0xdc99,	// (0x000b93e7) popup_vitu2_query_button_pane_t1

0x45d3,	// (0x000afd21) main_mp3_pane_t6

0x45e1,	// (0x000afd2f) popup_slider_window_cp01

0xa26b,	// (0x000b59b9) cam4_battery_pane

0xa2ce,	// (0x000b5a1c) cam4_battery_pane_cp02

0xa482,	// (0x000b5bd0) cam4_battery_pane_cp01

0xa482,	// (0x000b5bd0) cam4_battery_pane_cp03

0xd564,	// (0x000b8cb2) cam4_battery_pane_g1

0xcc9a,	// (0x000b83e8) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x000bb274) cam4_battery_pane_g

0xcb60,	// (0x000b82ae) popup_blid_sat_info2_window_t11

0x27b9,	// (0x000adf07) aid_size_touch_mv_arrow_left_ParamLimits

0x27e2,	// (0x000adf30) aid_size_touch_mv_arrow_right_ParamLimits

0xb246,	// (0x000b6994) navi_pane_g1_ParamLimits

0x2821,	// (0x000adf6f) navi_pane_g2_ParamLimits

0x284f,	// (0x000adf9d) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000bab3e) navi_pane_g_ParamLimits

0x28a9,	// (0x000adff7) navi_pane_mv_t1_ParamLimits

0x52a6,	// (0x000b09f4) grid_imed_effect_pane_ParamLimits

0x1207,	// (0x000ac955) aid_placing_vt_slider_lsc

0xaa3a,	// (0x000b6188) aid_placing_vt_slider_prt

0x9641,	// (0x000b4d8f) bg_tb_trans_pane_cp01_ParamLimits

0xcdea,	// (0x000b8538) popup_image_details_window_g1_ParamLimits

0xcdfd,	// (0x000b854b) popup_image_details_window_g2_ParamLimits

0xce12,	// (0x000b8560) popup_image_details_window_g3_ParamLimits

0xce12,	// (0x000b8560) popup_image_details_window_g3

0xf723,	// (0x000bae71) popup_image_details_window_g_ParamLimits

0xce26,	// (0x000b8574) popup_image_details_window_t1_ParamLimits

0xce38,	// (0x000b8586) popup_image_details_window_t2_ParamLimits

0xce51,	// (0x000b859f) popup_image_details_window_t3_ParamLimits

0xce65,	// (0x000b85b3) popup_image_details_window_t4_ParamLimits

0xce80,	// (0x000b85ce) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x000bae78) popup_image_details_window_t_ParamLimits

0x6dda,	// (0x000b2528) cl_header_name_pane_ParamLimits

0x6dda,	// (0x000b2528) cl_header_name_pane

0x71be,	// (0x000b290c) cl_header_name_pane_t1_ParamLimits

0x71be,	// (0x000b290c) cl_header_name_pane_t1

0x71df,	// (0x000b292d) cl_header_name_pane_t2_ParamLimits

0x71df,	// (0x000b292d) cl_header_name_pane_t2

0x7221,	// (0x000b296f) cl_header_name_pane_t3_ParamLimits

0x7221,	// (0x000b296f) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x000bb279) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x000bb279) cl_header_name_pane_t

0x287a,	// (0x000adfc8) navi_pane_mv_g2_ParamLimits

0xd668,	// (0x000b8db6) field_vitu2_entry_pane_g1_ParamLimits

0xd674,	// (0x000b8dc2) field_vitu2_entry_pane_g2_ParamLimits

0xd680,	// (0x000b8dce) field_vitu2_entry_pane_g3_ParamLimits

0xd680,	// (0x000b8dce) field_vitu2_entry_pane_g3

0xf921,	// (0x000bb06f) field_vitu2_entry_pane_g_ParamLimits

0x6031,	// (0x000b177f) cell_vitu2_itu_pane_g1_ParamLimits

0x6041,	// (0x000b178f) cell_vitu2_itu_pane_g2_ParamLimits

0x6041,	// (0x000b178f) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x000bb07b) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x000bb07b) cell_vitu2_itu_pane_g

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp05_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp05

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp03

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp04

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp10_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp10

0x6d7c,	// (0x000b24ca) bg_vkb2_func_pane_cp08

0x6d62,	// (0x000b24b0) bg_vkb2_func_pane_cp06

0x6d70,	// (0x000b24be) bg_vkb2_func_pane_cp07

0xdb97,	// (0x000b92e5) bg_vkb2_func_pane_cp11_ParamLimits

0xdb97,	// (0x000b92e5) bg_vkb2_func_pane_cp11

0xdbac,	// (0x000b92fa) bg_vkb2_func_pane_cp12_ParamLimits

0xdbac,	// (0x000b92fa) bg_vkb2_func_pane_cp12

0x95f0,	// (0x000b4d3e) bg_vkb2_func_pane_cp09

0xd6a0,	// (0x000b8dee) bg_vkb2_func_pane_g1

0xac00,	// (0x000b634e) bg_vkb2_func_pane_g2

0xd6a8,	// (0x000b8df6) bg_vkb2_func_pane_g3

0xd6b0,	// (0x000b8dfe) bg_vkb2_func_pane_g4

0xd8ca,	// (0x000b9018) bg_vkb2_func_pane_g5

0xd6c8,	// (0x000b8e16) bg_vkb2_func_pane_g6

0xd6d0,	// (0x000b8e1e) bg_vkb2_func_pane_g7

0xd6c0,	// (0x000b8e0e) bg_vkb2_func_pane_g8

0xabe0,	// (0x000b632e) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x000bb280) bg_vkb2_func_pane_g

0x70e4,	// (0x000b2832) blid2_tripm_pane_g6_ParamLimits

0x70e4,	// (0x000b2832) blid2_tripm_pane_g6

0xd51e,	// (0x000b8c6c) mp4_progress_pane_g1

0x715b,	// (0x000b28a9) blid2_tripm_values_pane_ParamLimits

0x715b,	// (0x000b28a9) blid2_tripm_values_pane

0x7252,	// (0x000b29a0) blid2_tripm_values_pane_t1

0x7260,	// (0x000b29ae) blid2_tripm_values_pane_t2

0x726e,	// (0x000b29bc) blid2_tripm_values_pane_t3

0x727c,	// (0x000b29ca) blid2_tripm_values_pane_t4

0x728a,	// (0x000b29d8) blid2_tripm_values_pane_t5

0x7298,	// (0x000b29e6) blid2_tripm_values_pane_t6

0x72a6,	// (0x000b29f4) blid2_tripm_values_pane_t7

0x72b4,	// (0x000b2a02) blid2_tripm_values_pane_t8

0x72c2,	// (0x000b2a10) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x000bb293) blid2_tripm_values_pane_t

0x1244,	// (0x000ac992) call_video_pane_t1_ParamLimits

0x125e,	// (0x000ac9ac) call_video_pane_t2_ParamLimits

0xf279,	// (0x000ba9c7) call_video_pane_t_ParamLimits

0x2dfc,	// (0x000ae54a) msg_header_pane_g1_ParamLimits

0xb468,	// (0x000b6bb6) msg_header_pane_g2_ParamLimits

0xb468,	// (0x000b6bb6) msg_header_pane_g2

0x0001,

0xf493,	// (0x000babe1) msg_header_pane_g_ParamLimits

0xf493,	// (0x000babe1) msg_header_pane_g

0xa7cd,	// (0x000b5f1b) main_clock2_pane_ParamLimits

0x4f8d,	// (0x000b06db) grid_clock2_toolbar_pane_ParamLimits

0x4f8d,	// (0x000b06db) grid_clock2_toolbar_pane

0x4f8d,	// (0x000b06db) listscroll_clock2_pane_ParamLimits

0x4f8d,	// (0x000b06db) listscroll_clock2_pane

0x5084,	// (0x000b07d2) main_clock2_pane_t3_ParamLimits

0x5084,	// (0x000b07d2) main_clock2_pane_t3

0x50a8,	// (0x000b07f6) main_clock2_pane_t4_ParamLimits

0x50a8,	// (0x000b07f6) main_clock2_pane_t4

0xdca7,	// (0x000b93f5) cell_clock2_toolbar_pane

0xdcaf,	// (0x000b93fd) cell_clock2_toolbar_pane_cp01

0xdcaf,	// (0x000b93fd) cell_clock2_toolbar_pane_cp02

0xdcb7,	// (0x000b9405) cell_clock2_toolbar_pane_cp03

0xdcbf,	// (0x000b940d) list_clock2_pane

0xb1ac,	// (0x000b68fa) scroll_pane_cp10

0xdcc7,	// (0x000b9415) list_single_clock2_pane_ParamLimits

0xdcc7,	// (0x000b9415) list_single_clock2_pane

0xb2e6,	// (0x000b6a34) list_highlight_pane_cp08

0xdcd4,	// (0x000b9422) list_single_clock2_pane_t1

0xdce2,	// (0x000b9430) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x000bb2a6) list_single_clock2_pane_t

0x95f0,	// (0x000b4d3e) bg_button_pane_cp10

0xdcf0,	// (0x000b943e) cell_clock2_toolbar_pane_g1

0x2e3b,	// (0x000ae589) aid_main_viewer_pane_g1_ParamLimits

0x2e3b,	// (0x000ae589) aid_main_viewer_pane_g1

0x2e49,	// (0x000ae597) aid_main_viewer_pane_g2_ParamLimits

0x2e49,	// (0x000ae597) aid_main_viewer_pane_g2

0x2e57,	// (0x000ae5a5) aid_main_viewer_pane_g3_ParamLimits

0x2e57,	// (0x000ae5a5) aid_main_viewer_pane_g3

0x2e66,	// (0x000ae5b4) aid_main_viewer_pane_g4_ParamLimits

0x2e66,	// (0x000ae5b4) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000babf2) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000babf2) aid_main_viewer_pane_g

0x37b9,	// (0x000aef07) main_calc_pane_ParamLimits

0x37cd,	// (0x000aef1b) main_dialer2_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_cam6_pane

0x95f0,	// (0x000b4d3e) main_vid6_pane

0x4f99,	// (0x000b06e7) listscroll_gen_pane_cp06_ParamLimits

0x4f99,	// (0x000b06e7) listscroll_gen_pane_cp06

0x50cb,	// (0x000b0819) main_clock2_pane_t5_ParamLimits

0x50cb,	// (0x000b0819) main_clock2_pane_t5

0x512b,	// (0x000b0879) aid_call2_pane_cp10_ParamLimits

0x513d,	// (0x000b088b) aid_call_pane_cp10_ParamLimits

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g2_ParamLimits

0x514f,	// (0x000b089d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x514f,	// (0x000b089d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb21b,	// (0x000b6969) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000baf28) popup_clock_analogue_window_cp10_g_ParamLimits

0x5165,	// (0x000b08b3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x57f8,	// (0x000b0f46) cell_dialer2_keypad_pane_g2_ParamLimits

0x57f8,	// (0x000b0f46) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000bb00e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000bb00e) cell_dialer2_keypad_pane_g

0x5814,	// (0x000b0f62) cell_dialer2_keypad_pane_t1

0x63de,	// (0x000b1b2c) main_cset_text2_pane_ParamLimits

0x63de,	// (0x000b1b2c) main_cset_text2_pane

0xdaff,	// (0x000b924d) area_vitu2_query_pane_g1_ParamLimits

0x6cff,	// (0x000b244d) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x000bb1c3) area_vitu2_query_pane_g_ParamLimits

0xa45e,	// (0x000b5bac) area_vitu2_query_pane_t7_ParamLimits

0xa45e,	// (0x000b5bac) area_vitu2_query_pane_t7

0x6d62,	// (0x000b24b0) bg_button_pane_cp018_ParamLimits

0x6d70,	// (0x000b24be) bg_button_pane_cp021_ParamLimits

0x6d7c,	// (0x000b24ca) bg_button_pane_cp022_ParamLimits

0x6d7c,	// (0x000b24ca) bg_vkb2_func_pane_cp08_ParamLimits

0x6d62,	// (0x000b24b0) bg_vkb2_func_pane_cp06_ParamLimits

0x6d70,	// (0x000b24be) bg_vkb2_func_pane_cp07_ParamLimits

0x6d8d,	// (0x000b24db) input_focus_pane_cp09_ParamLimits

0xa504,	// (0x000b5c52) cam6_autofocus_pane_ParamLimits

0xa504,	// (0x000b5c52) cam6_autofocus_pane

0x72d0,	// (0x000b2a1e) cam6_image_uncrop_pane_ParamLimits

0x72d0,	// (0x000b2a1e) cam6_image_uncrop_pane

0x72df,	// (0x000b2a2d) cam6_indi_pane_ParamLimits

0x72df,	// (0x000b2a2d) cam6_indi_pane

0x72f5,	// (0x000b2a43) cam6_mode_pane_ParamLimits

0x72f5,	// (0x000b2a43) cam6_mode_pane

0x7307,	// (0x000b2a55) cam6_timer_pane_ParamLimits

0x7307,	// (0x000b2a55) cam6_timer_pane

0x7313,	// (0x000b2a61) cam6_zoom_pane_ParamLimits

0x7313,	// (0x000b2a61) cam6_zoom_pane

0x7321,	// (0x000b2a6f) cam6_mode_pane_g1_ParamLimits

0x7321,	// (0x000b2a6f) cam6_mode_pane_g1

0x7331,	// (0x000b2a7f) cam6_mode_pane_g2_ParamLimits

0x7331,	// (0x000b2a7f) cam6_mode_pane_g2

0x7341,	// (0x000b2a8f) cam6_mode_pane_g3_ParamLimits

0x7341,	// (0x000b2a8f) cam6_mode_pane_g3

0x7351,	// (0x000b2a9f) cam6_mode_pane_g4_ParamLimits

0x7351,	// (0x000b2a9f) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x000bb2ab) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x000bb2ab) cam6_mode_pane_g

0xdc2c,	// (0x000b937a) bg_tb_trans_pane_cp08_ParamLimits

0xdc2c,	// (0x000b937a) bg_tb_trans_pane_cp08

0xdcf8,	// (0x000b9446) cam6_battery_pane_ParamLimits

0xdcf8,	// (0x000b9446) cam6_battery_pane

0xdd0e,	// (0x000b945c) cam6_indi_pane_g1_ParamLimits

0xdd0e,	// (0x000b945c) cam6_indi_pane_g1

0xdd20,	// (0x000b946e) cam6_indi_pane_g2_ParamLimits

0xdd20,	// (0x000b946e) cam6_indi_pane_g2

0xdd32,	// (0x000b9480) cam6_indi_pane_g3_ParamLimits

0xdd32,	// (0x000b9480) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x000bb2b4) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x000bb2b4) cam6_indi_pane_g

0xdd44,	// (0x000b9492) cam6_indi_pane_t1_ParamLimits

0xdd44,	// (0x000b9492) cam6_indi_pane_t1

0x5ddd,	// (0x000b152b) cam6_autofocus_pane_g1

0x5dd5,	// (0x000b1523) cam6_autofocus_pane_g2

0x5ded,	// (0x000b153b) cam6_autofocus_pane_g3

0x5de5,	// (0x000b1533) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x000bb2bb) cam6_autofocus_pane_g

0xdd6a,	// (0x000b94b8) cam6_timer_pane_g1

0xdd72,	// (0x000b94c0) cam6_timer_pane_t1

0xdd80,	// (0x000b94ce) cam6_zoom_cont_pane

0xdd88,	// (0x000b94d6) cam6_zoom_pane_g1

0xdd90,	// (0x000b94de) cam6_zoom_pane_g2

0x7361,	// (0x000b2aaf) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x000bb2c4) cam6_zoom_pane_g

0xcc9a,	// (0x000b83e8) cam6_battery_pane_g1

0xcc9a,	// (0x000b83e8) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000bae35) cam6_battery_pane_g

0xdd98,	// (0x000b94e6) cam6_zoom_cont_pane_g1

0xdda1,	// (0x000b94ef) cam6_zoom_cont_pane_g2

0xddaa,	// (0x000b94f8) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x000bb2cb) cam6_zoom_cont_pane_g

0x737e,	// (0x000b2acc) cam6_mode_pane_cp_ParamLimits

0x737e,	// (0x000b2acc) cam6_mode_pane_cp

0x7390,	// (0x000b2ade) cam6_zoom_pane_cp_ParamLimits

0x7390,	// (0x000b2ade) cam6_zoom_pane_cp

0x739e,	// (0x000b2aec) vid6_image_uncrop_cif_pane_ParamLimits

0x739e,	// (0x000b2aec) vid6_image_uncrop_cif_pane

0x73ae,	// (0x000b2afc) vid6_image_uncrop_nhd_pane_ParamLimits

0x73ae,	// (0x000b2afc) vid6_image_uncrop_nhd_pane

0x73bd,	// (0x000b2b0b) vid6_image_uncrop_vga_pane_ParamLimits

0x73bd,	// (0x000b2b0b) vid6_image_uncrop_vga_pane

0x73cc,	// (0x000b2b1a) vid6_image_uncrop_wvga_pane_ParamLimits

0x73cc,	// (0x000b2b1a) vid6_image_uncrop_wvga_pane

0x73db,	// (0x000b2b29) vid6_indi_pane_ParamLimits

0x73db,	// (0x000b2b29) vid6_indi_pane

0xdc2c,	// (0x000b937a) bg_tb_trans_pane_cp09_ParamLimits

0xdc2c,	// (0x000b937a) bg_tb_trans_pane_cp09

0xddc2,	// (0x000b9510) cam6_battery_pane_cp_ParamLimits

0xddc2,	// (0x000b9510) cam6_battery_pane_cp

0xddce,	// (0x000b951c) vid6_indi_pane_g1_ParamLimits

0xddce,	// (0x000b951c) vid6_indi_pane_g1

0xdde0,	// (0x000b952e) vid6_indi_pane_g2_ParamLimits

0xdde0,	// (0x000b952e) vid6_indi_pane_g2

0xddf2,	// (0x000b9540) vid6_indi_pane_g3_ParamLimits

0xddf2,	// (0x000b9540) vid6_indi_pane_g3

0xde09,	// (0x000b9557) vid6_indi_pane_g4_ParamLimits

0xde09,	// (0x000b9557) vid6_indi_pane_g4

0xde20,	// (0x000b956e) vid6_indi_pane_g5_ParamLimits

0xde20,	// (0x000b956e) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x000bb2d2) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x000bb2d2) vid6_indi_pane_g

0xde3a,	// (0x000b9588) vid6_indi_pane_t1_ParamLimits

0xde3a,	// (0x000b9588) vid6_indi_pane_t1

0xde50,	// (0x000b959e) vid6_indi_pane_t2_ParamLimits

0xde50,	// (0x000b959e) vid6_indi_pane_t2

0xde78,	// (0x000b95c6) vid6_indi_pane_t3_ParamLimits

0xde78,	// (0x000b95c6) vid6_indi_pane_t3

0xdea0,	// (0x000b95ee) vid6_indi_pane_t4_ParamLimits

0xdea0,	// (0x000b95ee) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x000bb2dd) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x000bb2dd) vid6_indi_pane_t

0xdec4,	// (0x000b9612) wait_bar_pane_cp08

0x73f3,	// (0x000b2b41) main_cset_text2_pane_t1_ParamLimits

0x73f3,	// (0x000b2b41) main_cset_text2_pane_t1

0x7369,	// (0x000b2ab7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7369,	// (0x000b2ab7) listscroll_gen_pane_cp06_t1

0x95f0,	// (0x000b4d3e) main_cam6_set_pane

0xa25d,	// (0x000b59ab) bg_tb_trans_pane_cp06_ParamLimits

0xa273,	// (0x000b59c1) cam4_indicators_pane_g1_ParamLimits

0xa284,	// (0x000b59d2) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000bb04b) cam4_indicators_pane_g_ParamLimits

0xa29c,	// (0x000b59ea) cam4_indicators_pane_t1_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_tb_trans_pane_cp07_ParamLimits

0xa2d8,	// (0x000b5a26) vid4_indicators_pane_g1_ParamLimits

0xa2ee,	// (0x000b5a3c) vid4_indicators_pane_g2_ParamLimits

0xa302,	// (0x000b5a50) vid4_indicators_pane_g3_ParamLimits

0xa315,	// (0x000b5a63) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000bb05d) vid4_indicators_pane_g_ParamLimits

0xa333,	// (0x000b5a81) vid4_indicators_pane_t1_ParamLimits

0x6ece,	// (0x000b261c) vid4_progress_pane_g1_ParamLimits

0x6ee0,	// (0x000b262e) vid4_progress_pane_g2_ParamLimits

0x9ef0,	// (0x000b563e) vid4_progress_pane_g3_ParamLimits

0xa48a,	// (0x000b5bd8) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000bb20e) vid4_progress_pane_g_ParamLimits

0xa4a8,	// (0x000b5bf6) vid4_progress_pane_t1_ParamLimits

0xa4bd,	// (0x000b5c0b) vid4_progress_pane_t2_ParamLimits

0xa4d3,	// (0x000b5c21) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000bb219) vid4_progress_pane_t_ParamLimits

0xa4e8,	// (0x000b5c36) wait_bar_pane_cp07_ParamLimits

0x7411,	// (0x000b2b5f) main_cam6_set_pane_g2_ParamLimits

0x7411,	// (0x000b2b5f) main_cam6_set_pane_g2

0x7437,	// (0x000b2b85) main_cset6_listscroll_pane_ParamLimits

0x7437,	// (0x000b2b85) main_cset6_listscroll_pane

0x7455,	// (0x000b2ba3) main_cset6_slider_pane_ParamLimits

0x7455,	// (0x000b2ba3) main_cset6_slider_pane

0x746b,	// (0x000b2bb9) main_cset6_text2_pane_ParamLimits

0x746b,	// (0x000b2bb9) main_cset6_text2_pane

0xded3,	// (0x000b9621) main_cset6_text_pane

0xdedb,	// (0x000b9629) main_cset_list_pane_copy1_ParamLimits

0xdedb,	// (0x000b9629) main_cset_list_pane_copy1

0xdeeb,	// (0x000b9639) scroll_pane_cp028_copy1

0x7479,	// (0x000b2bc7) cset_list_set_pane_copy1

0x748d,	// (0x000b2bdb) aid_position_infowindow_above_copy1

0x7495,	// (0x000b2be3) aid_position_infowindow_below_copy1

0x749d,	// (0x000b2beb) cset_list_set_pane_g1_copy1

0x74a5,	// (0x000b2bf3) cset_list_set_pane_g3_copy1_ParamLimits

0x74a5,	// (0x000b2bf3) cset_list_set_pane_g3_copy1

0x74b4,	// (0x000b2c02) cset_list_set_pane_t1_copy1_ParamLimits

0x74b4,	// (0x000b2c02) cset_list_set_pane_t1_copy1

0x9641,	// (0x000b4d8f) list_highlight_pane_cp021_copy1_ParamLimits

0x9641,	// (0x000b4d8f) list_highlight_pane_cp021_copy1

0xdef4,	// (0x000b9642) cset6_slider_pane_ParamLimits

0xdef4,	// (0x000b9642) cset6_slider_pane

0xdf20,	// (0x000b966e) main_cset6_slider_pane_g1_ParamLimits

0xdf20,	// (0x000b966e) main_cset6_slider_pane_g1

0x74c9,	// (0x000b2c17) main_cset6_slider_pane_g2_ParamLimits

0x74c9,	// (0x000b2c17) main_cset6_slider_pane_g2

0xdf48,	// (0x000b9696) main_cset6_slider_pane_g3_ParamLimits

0xdf48,	// (0x000b9696) main_cset6_slider_pane_g3

0x74f1,	// (0x000b2c3f) main_cset6_slider_pane_g4_ParamLimits

0x74f1,	// (0x000b2c3f) main_cset6_slider_pane_g4

0x74fd,	// (0x000b2c4b) main_cset6_slider_pane_g5_ParamLimits

0x74fd,	// (0x000b2c4b) main_cset6_slider_pane_g5

0xd7d3,	// (0x000b8f21) main_cset6_slider_pane_g7_ParamLimits

0xd7d3,	// (0x000b8f21) main_cset6_slider_pane_g7

0xd7df,	// (0x000b8f2d) main_cset6_slider_pane_g8_ParamLimits

0xd7df,	// (0x000b8f2d) main_cset6_slider_pane_g8

0x648d,	// (0x000b1bdb) main_cset6_slider_pane_g9_ParamLimits

0x648d,	// (0x000b1bdb) main_cset6_slider_pane_g9

0x6499,	// (0x000b1be7) main_cset6_slider_pane_g10_ParamLimits

0x6499,	// (0x000b1be7) main_cset6_slider_pane_g10

0x64a5,	// (0x000b1bf3) main_cset6_slider_pane_g11_ParamLimits

0x64a5,	// (0x000b1bf3) main_cset6_slider_pane_g11

0x64b1,	// (0x000b1bff) main_cset6_slider_pane_g12_ParamLimits

0x64b1,	// (0x000b1bff) main_cset6_slider_pane_g12

0x64bd,	// (0x000b1c0b) main_cset6_slider_pane_g13_ParamLimits

0x64bd,	// (0x000b1c0b) main_cset6_slider_pane_g13

0x64c9,	// (0x000b1c17) main_cset6_slider_pane_g14_ParamLimits

0x64c9,	// (0x000b1c17) main_cset6_slider_pane_g14

0x750b,	// (0x000b2c59) main_cset6_slider_pane_g15_ParamLimits

0x750b,	// (0x000b2c59) main_cset6_slider_pane_g15

0x64ed,	// (0x000b1c3b) main_cset6_slider_pane_g16_ParamLimits

0x64ed,	// (0x000b1c3b) main_cset6_slider_pane_g16

0x64fb,	// (0x000b1c49) main_cset6_slider_pane_g17_ParamLimits

0x64fb,	// (0x000b1c49) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x000bb2e6) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x000bb2e6) main_cset6_slider_pane_g

0xdf54,	// (0x000b96a2) main_cset6_slider_pane_t1_ParamLimits

0xdf54,	// (0x000b96a2) main_cset6_slider_pane_t1

0x753b,	// (0x000b2c89) main_cset6_slider_pane_t2_ParamLimits

0x753b,	// (0x000b2c89) main_cset6_slider_pane_t2

0x7566,	// (0x000b2cb4) main_cset6_slider_pane_t3_ParamLimits

0x7566,	// (0x000b2cb4) main_cset6_slider_pane_t3

0x7591,	// (0x000b2cdf) main_cset6_slider_pane_t4_ParamLimits

0x7591,	// (0x000b2cdf) main_cset6_slider_pane_t4

0x75bc,	// (0x000b2d0a) main_cset6_slider_pane_t5_ParamLimits

0x75bc,	// (0x000b2d0a) main_cset6_slider_pane_t5

0xdf95,	// (0x000b96e3) main_cset6_slider_pane_t7_ParamLimits

0xdf95,	// (0x000b96e3) main_cset6_slider_pane_t7

0x75e9,	// (0x000b2d37) main_cset6_slider_pane_t8_ParamLimits

0x75e9,	// (0x000b2d37) main_cset6_slider_pane_t8

0x760d,	// (0x000b2d5b) main_cset6_slider_pane_t9_ParamLimits

0x760d,	// (0x000b2d5b) main_cset6_slider_pane_t9

0x7631,	// (0x000b2d7f) main_cset6_slider_pane_t10_ParamLimits

0x7631,	// (0x000b2d7f) main_cset6_slider_pane_t10

0x7655,	// (0x000b2da3) main_cset6_slider_pane_t11_ParamLimits

0x7655,	// (0x000b2da3) main_cset6_slider_pane_t11

0xdfcb,	// (0x000b9719) main_cset6_slider_pane_t14_ParamLimits

0xdfcb,	// (0x000b9719) main_cset6_slider_pane_t14

0xe004,	// (0x000b9752) main_cset6_slider_pane_t15_ParamLimits

0xe004,	// (0x000b9752) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x000bb30b) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x000bb30b) main_cset6_slider_pane_t

0xe03d,	// (0x000b978b) cset_slider_pane_g1_copy1

0xe046,	// (0x000b9794) cset_slider_pane_g2_copy1

0xe04f,	// (0x000b979d) cset_slider_pane_g3_copy1

0x95f0,	// (0x000b4d3e) bg_popup_sub_pane_cp011_copy1

0xe058,	// (0x000b97a6) main_cset_text_pane_g1_copy1

0xd91b,	// (0x000b9069) main_cset_text_pane_t1_copy1

0xd929,	// (0x000b9077) main_cset_text_pane_t2_copy1

0xd937,	// (0x000b9085) main_cset_text_pane_t3_copy1

0xd945,	// (0x000b9093) main_cset_text_pane_t4_copy1

0xd953,	// (0x000b90a1) main_cset_text_pane_t5_copy1

0xe060,	// (0x000b97ae) main_cset_text_pane_t6_copy1

0xe06e,	// (0x000b97bc) main_cset_text_pane_t7_copy1

0x73f3,	// (0x000b2b41) main_cset_text2_pane_t1_copy1

0x9641,	// (0x000b4d8f) main_ncimui_pane

0x3a5b,	// (0x000af1a9) popup_query_ncimui_window_ParamLimits

0x3a5b,	// (0x000af1a9) popup_query_ncimui_window

0xb7f7,	// (0x000b6f45) field_cale_ev2_pane_g4_ParamLimits

0xb7f7,	// (0x000b6f45) field_cale_ev2_pane_g4

0x56ca,	// (0x000b0e18) cell_video_dialer_keypad_pane_g2_ParamLimits

0x56ca,	// (0x000b0e18) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x000bafe9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x000bafe9) cell_video_dialer_keypad_pane_g

0x56e2,	// (0x000b0e30) cell_video_dialer_keypad_pane_t1

0x95f0,	// (0x000b4d3e) bg_popup_window_pane_cp012

0xb098,	// (0x000b67e6) heading_pane_cp06

0xe09a,	// (0x000b97e8) ncim_query_content_pane

0x95f0,	// (0x000b4d3e) bg_popup_heading_pane_cp01

0xe0a2,	// (0x000b97f0) ncim_heading_pane_t1

0xe0b0,	// (0x000b97fe) ncim_indicator_popup_pane

0xe0c2,	// (0x000b9810) ncim_query_button_pane

0xe0d8,	// (0x000b9826) ncim_query_content_pane_t1

0xe0ea,	// (0x000b9838) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x000bb34f) ncim_query_content_pane_t

0xe124,	// (0x000b9872) ncim_query_list_pane

0xe136,	// (0x000b9884) ncim_query_popup_pane

0xe0b0,	// (0x000b97fe) ncim_indicator_popup_pane_ParamLimits

0x7872,	// (0x000b2fc0) ncim_query_content_pane_g1_ParamLimits

0x7872,	// (0x000b2fc0) ncim_query_content_pane_g1

0xe0d8,	// (0x000b9826) ncim_query_content_pane_t1_ParamLimits

0xe0ea,	// (0x000b9838) ncim_query_content_pane_t2_ParamLimits

0x787e,	// (0x000b2fcc) ncim_query_content_pane_t3_ParamLimits

0x787e,	// (0x000b2fcc) ncim_query_content_pane_t3

0x78a6,	// (0x000b2ff4) ncim_query_content_pane_t4_ParamLimits

0x78a6,	// (0x000b2ff4) ncim_query_content_pane_t4

0x78ce,	// (0x000b301c) ncim_query_content_pane_t5_ParamLimits

0x78ce,	// (0x000b301c) ncim_query_content_pane_t5

0xe0fc,	// (0x000b984a) ncim_query_content_pane_t6_ParamLimits

0xe0fc,	// (0x000b984a) ncim_query_content_pane_t6

0xfc01,	// (0x000bb34f) ncim_query_content_pane_t_ParamLimits

0xe124,	// (0x000b9872) ncim_query_list_pane_ParamLimits

0xe136,	// (0x000b9884) ncim_query_popup_pane_ParamLimits

0xe14a,	// (0x000b9898) wait_bar_pane_cp04

0x95f0,	// (0x000b4d3e) input_focus_pane_cp011

0xe152,	// (0x000b98a0) ncim_query_popup_pane_t1

0xe160,	// (0x000b98ae) ncim_list_query_list_pane_ParamLimits

0xe160,	// (0x000b98ae) ncim_list_query_list_pane

0x95f0,	// (0x000b4d3e) bg_button_pane_cp027

0xe173,	// (0x000b98c1) ncim_query_button_pane_g1

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp012

0xe17d,	// (0x000b98cb) ncim_list_query_list_pane_g1

0xe185,	// (0x000b98d3) ncim_list_query_list_pane_t1

0xa290,	// (0x000b59de) cam4_indicators_pane_g3_ParamLimits

0xa290,	// (0x000b59de) cam4_indicators_pane_g3

0xa321,	// (0x000b5a6f) vid4_indicators_pane_g5_ParamLimits

0xa321,	// (0x000b5a6f) vid4_indicators_pane_g5

0xa499,	// (0x000b5be7) vid4_progress_pane_g5_ParamLimits

0xa499,	// (0x000b5be7) vid4_progress_pane_g5

0x7760,	// (0x000b2eae) main_ncimui_pane_g1

0x77c6,	// (0x000b2f14) ncimui_group_query_pane_ParamLimits

0x77c6,	// (0x000b2f14) ncimui_group_query_pane

0x780e,	// (0x000b2f5c) ncimui_list_pane_ParamLimits

0x780e,	// (0x000b2f5c) ncimui_list_pane

0x7835,	// (0x000b2f83) ncimui_text_pane_ParamLimits

0x7835,	// (0x000b2f83) ncimui_text_pane

0x78f6,	// (0x000b3044) ncimui_text_pane_t1_ParamLimits

0x78f6,	// (0x000b3044) ncimui_text_pane_t1

0xe193,	// (0x000b98e1) ncimui_list_single_graphic_pane_ParamLimits

0xe193,	// (0x000b98e1) ncimui_list_single_graphic_pane

0x7914,	// (0x000b3062) ncimui_query_pane_ParamLimits

0x7914,	// (0x000b3062) ncimui_query_pane

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp013

0xe1a3,	// (0x000b98f1) ncim_list_query_list_pane_t1_copy1

0xe17d,	// (0x000b98cb) ncim_list_single_graphic_pane_g1

0xe1b1,	// (0x000b98ff) ncim_query_button_pane_cp01

0xe1bd,	// (0x000b990b) ncim_query_entry_pane_ParamLimits

0xe1bd,	// (0x000b990b) ncim_query_entry_pane

0xe1d0,	// (0x000b991e) ncimui_query_pane_g1

0xe1dc,	// (0x000b992a) ncimui_query_pane_t1_ParamLimits

0xe1dc,	// (0x000b992a) ncimui_query_pane_t1

0x9641,	// (0x000b4d8f) input_focus_pane_cp012

0xe1f5,	// (0x000b9943) ncim_query_entry_pane_t1

0xa7cd,	// (0x000b5f1b) main_im_pane_ParamLimits

0x9641,	// (0x000b4d8f) main_mobtv_pane_ParamLimits

0x9641,	// (0x000b4d8f) main_mobtv_pane

0x7523,	// (0x000b2c71) main_cset6_slider_pane_g18_ParamLimits

0x7523,	// (0x000b2c71) main_cset6_slider_pane_g18

0x752f,	// (0x000b2c7d) main_cset6_slider_pane_g19_ParamLimits

0x752f,	// (0x000b2c7d) main_cset6_slider_pane_g19

0x7927,	// (0x000b3075) bg_main_mobtv_pane_ParamLimits

0x7927,	// (0x000b3075) bg_main_mobtv_pane

0x7935,	// (0x000b3083) main_mobtv_info_pane

0x7940,	// (0x000b308e) main_mobtv_loading_pane_ParamLimits

0x7940,	// (0x000b308e) main_mobtv_loading_pane

0xe207,	// (0x000b9955) main_mobtv_pg_channel_list_pane

0xe211,	// (0x000b995f) main_mobtv_pg_hdr_pane

0x794d,	// (0x000b309b) main_mobtv_programe_curr_pane_ParamLimits

0x794d,	// (0x000b309b) main_mobtv_programe_curr_pane

0x795a,	// (0x000b30a8) main_mobtv_programe_next_pane_ParamLimits

0x795a,	// (0x000b30a8) main_mobtv_programe_next_pane

0xe21a,	// (0x000b9968) popup_mobtv_noti_window

0xcc9a,	// (0x000b83e8) main_tv_pg_hdr_pane_g1

0xe224,	// (0x000b9972) main_tv_pg_hdr_pane_g2

0xe22c,	// (0x000b997a) main_tv_pg_hdr_pane_g3

0xe234,	// (0x000b9982) main_tv_pg_hdr_pane_g4

0xe23c,	// (0x000b998a) main_tv_pg_hdr_pane_g5

0xe246,	// (0x000b9994) main_tv_pg_hdr_pane_g6

0xe250,	// (0x000b999e) main_tv_pg_hdr_pane_g7

0xe25a,	// (0x000b99a8) main_tv_pg_hdr_pane_g8

0xe264,	// (0x000b99b2) main_tv_pg_hdr_pane_g9

0xe26e,	// (0x000b99bc) main_tv_pg_hdr_pane_g10

0xe278,	// (0x000b99c6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x000bb35c) main_tv_pg_hdr_pane_g

0xe282,	// (0x000b99d0) main_tv_pg_hdr_pane_t1

0xe290,	// (0x000b99de) main_tv_pg_hdr_pane_t2

0xe29e,	// (0x000b99ec) main_tv_pg_hdr_pane_t3

0xe2ae,	// (0x000b99fc) main_tv_pg_hdr_pane_t4

0xe2be,	// (0x000b9a0c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x000bb373) main_tv_pg_hdr_pane_t

0xe2ce,	// (0x000b9a1c) single_mobtv_pg_channel_pane_ParamLimits

0xe2ce,	// (0x000b9a1c) single_mobtv_pg_channel_pane

0xe2e0,	// (0x000b9a2e) single_mobtv_pg_channel_table_pane

0xe2e9,	// (0x000b9a37) single_mobtv_pg_channel_thumb_pane

0xe2f2,	// (0x000b9a40) single_tv_pg_channel_pane_g1

0xe2fb,	// (0x000b9a49) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x000bb37e) single_tv_pg_channel_pane_g

0xceca,	// (0x000b8618) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceca,	// (0x000b8618) bg_single_mobtv_pg_channel_thumb_pane

0xe304,	// (0x000b9a52) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe304,	// (0x000b9a52) single_mobtv_pg_channel_thumb_pane_g1

0xe312,	// (0x000b9a60) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe312,	// (0x000b9a60) single_mobtv_pg_channel_thumb_pane_g2

0xe31e,	// (0x000b9a6c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe31e,	// (0x000b9a6c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x000bb383) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x000bb383) single_mobtv_pg_channel_thumb_pane_g

0xe32a,	// (0x000b9a78) single_mobtv_pg_channel_thumb_pane_t1

0xe338,	// (0x000b9a86) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x000bb38a) single_mobtv_pg_channel_thumb_pane_t

0xcc9a,	// (0x000b83e8) bg_single_mobtv_pg_channel_table_pane_g1

0xcc9a,	// (0x000b83e8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000bae35) bg_single_mobtv_pg_channel_table_pane_g

0xe346,	// (0x000b9a94) single_mobtv_pg_channel_table_pane_t1

0xe354,	// (0x000b9aa2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x000bb38f) single_mobtv_pg_channel_table_pane_t

0x796f,	// (0x000b30bd) main_mobtv_info_pane_g1_ParamLimits

0x796f,	// (0x000b30bd) main_mobtv_info_pane_g1

0x798d,	// (0x000b30db) main_mobtv_info_pane_t1_ParamLimits

0x798d,	// (0x000b30db) main_mobtv_info_pane_t1

0x7a05,	// (0x000b3153) main_mobtv_info_pane_t2_ParamLimits

0x7a05,	// (0x000b3153) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x000bb399) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x000bb399) main_mobtv_info_pane_t

0x7a94,	// (0x000b31e2) wait_bar_pane_cp05

0x7aa6,	// (0x000b31f4) main_mobtv_loading_pane_g1_ParamLimits

0x7aa6,	// (0x000b31f4) main_mobtv_loading_pane_g1

0x7ab7,	// (0x000b3205) main_mobtv_loading_pane_g2_ParamLimits

0x7ab7,	// (0x000b3205) main_mobtv_loading_pane_g2

0x7ac3,	// (0x000b3211) main_mobtv_loading_pane_g3_ParamLimits

0x7ac3,	// (0x000b3211) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x000bb3a0) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x000bb3a0) main_mobtv_loading_pane_g

0xe362,	// (0x000b9ab0) main_mobtv_loading_pane_t1_ParamLimits

0xe362,	// (0x000b9ab0) main_mobtv_loading_pane_t1

0xe37a,	// (0x000b9ac8) main_mobtv_loading_pane_t2_ParamLimits

0xe37a,	// (0x000b9ac8) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x000bb3a7) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x000bb3a7) main_mobtv_loading_pane_t

0x7ad6,	// (0x000b3224) wait_bar_pane_cp06_ParamLimits

0x7ad6,	// (0x000b3224) wait_bar_pane_cp06

0xe39e,	// (0x000b9aec) main_mobtv_programe_curr_pane_t1

0xe3ac,	// (0x000b9afa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x000bb3ac) main_mobtv_programe_curr_pane_t

0xe3ba,	// (0x000b9b08) main_mobtv_programe_next_pane_t1

0xe3c8,	// (0x000b9b16) main_mobtv_programe_next_pane_t2

0xe3d6,	// (0x000b9b24) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x000bb3b1) main_mobtv_programe_next_pane_t

0x95f0,	// (0x000b4d3e) bg_popup_mobtv_noti_window_pane

0xe3e4,	// (0x000b9b32) popup_mobtv_noti_window_g1

0xe3ec,	// (0x000b9b3a) popup_mobtv_noti_window_t1

0xe3fa,	// (0x000b9b48) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x000bb3b8) popup_mobtv_noti_window_t

0xcc9a,	// (0x000b83e8) bg_popup_mobtv_noti_window_pane_g1

0x95f0,	// (0x000b4d3e) sc_clock_pane

0x95f0,	// (0x000b4d3e) main_fs_bigclock_pane

0x7145,	// (0x000b2893) blid2_tripm_pane_t4_ParamLimits

0x7145,	// (0x000b2893) blid2_tripm_pane_t4

0x7ae5,	// (0x000b3233) sc_clock_pane_g1_ParamLimits

0x7ae5,	// (0x000b3233) sc_clock_pane_g1

0x7af7,	// (0x000b3245) sc_clock_pane_t1_ParamLimits

0x7af7,	// (0x000b3245) sc_clock_pane_t1

0x7b1b,	// (0x000b3269) sc_clock_pane_t2_ParamLimits

0x7b1b,	// (0x000b3269) sc_clock_pane_t2

0x7b33,	// (0x000b3281) sc_clock_pane_t3_ParamLimits

0x7b33,	// (0x000b3281) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x000bb3bd) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x000bb3bd) sc_clock_pane_t

0x8ac3,	// (0x000b4211) main_fs_bigclock_indicator_pane_ParamLimits

0x8ac3,	// (0x000b4211) main_fs_bigclock_indicator_pane

0xce9a,	// (0x000b85e8) main_fs_bigclock_pane_g1_ParamLimits

0xce9a,	// (0x000b85e8) main_fs_bigclock_pane_g1

0x8acf,	// (0x000b421d) main_fs_bigclock_pane_t1_ParamLimits

0x8acf,	// (0x000b421d) main_fs_bigclock_pane_t1

0x8ae1,	// (0x000b422f) main_fs_bigclock_pane_t2_ParamLimits

0x8ae1,	// (0x000b422f) main_fs_bigclock_pane_t2

0x8af5,	// (0x000b4243) main_fs_bigclock_pane_t3_ParamLimits

0x8af5,	// (0x000b4243) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bb5c1) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bb5c1) main_fs_bigclock_pane_t

0xec4d,	// (0x000ba39b) main_fs_bigclock_indicator_pane_g1

0xe0ca,	// (0x000b9818) ncim_query_content_pane_g2_ParamLimits

0xe0ca,	// (0x000b9818) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x000bb34a) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x000bb34a) ncim_query_content_pane_g

0x7b4a,	// (0x000b3298) sc_clock_pane_t4_ParamLimits

0x7b4a,	// (0x000b3298) sc_clock_pane_t4

0x9641,	// (0x000b4d8f) main_radioblah_pane

0xd5d7,	// (0x000b8d25) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d7,	// (0x000b8d25) cell_call4_button_pane_t1_copy1

0x7778,	// (0x000b2ec6) main_ncimui_pane_t1_ParamLimits

0x7778,	// (0x000b2ec6) main_ncimui_pane_t1

0x7792,	// (0x000b2ee0) main_ncimui_pane_t2_ParamLimits

0x7792,	// (0x000b2ee0) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x000bb343) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x000bb343) main_ncimui_pane_t

0xe546,	// (0x000b9c94) main_radioblah_anim_pane_ParamLimits

0xe546,	// (0x000b9c94) main_radioblah_anim_pane

0xe557,	// (0x000b9ca5) main_radioblah_info_pane_ParamLimits

0xe557,	// (0x000b9ca5) main_radioblah_info_pane

0xe56b,	// (0x000b9cb9) main_radioblah_pane_t1_ParamLimits

0xe56b,	// (0x000b9cb9) main_radioblah_pane_t1

0xe587,	// (0x000b9cd5) main_radioblah_pane_t2_ParamLimits

0xe587,	// (0x000b9cd5) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x000bb3de) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x000bb3de) main_radioblah_pane_t

0x7bfa,	// (0x000b3348) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7bfa,	// (0x000b3348) main_radioblah_rocker_ctrl_pane

0xe5cf,	// (0x000b9d1d) main_radioblah_info_pane_t1_ParamLimits

0xe5cf,	// (0x000b9d1d) main_radioblah_info_pane_t1

0x7c52,	// (0x000b33a0) main_radioblah_info_pane_t2_ParamLimits

0x7c52,	// (0x000b33a0) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x000bb3e7) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x000bb3e7) main_radioblah_info_pane_t

0xcc9a,	// (0x000b83e8) main_radioblah_rocker_ctrl_pane_g1

0x7d02,	// (0x000b3450) main_radioblah_rocker_ctrl_pane_g2

0x7d0a,	// (0x000b3458) main_radioblah_rocker_ctrl_pane_g3

0x7d12,	// (0x000b3460) main_radioblah_rocker_ctrl_pane_g4

0x7d1a,	// (0x000b3468) main_radioblah_rocker_ctrl_pane_g5

0x7d22,	// (0x000b3470) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x000bb3f0) main_radioblah_rocker_ctrl_pane_g

0x73f3,	// (0x000b2b41) main_cset_text2_pane_t1_copy1_ParamLimits

0xa253,	// (0x000b59a1) cam4_image_uncrop_qvga_pane

0xa2b6,	// (0x000b5a04) vid4_image_uncrop_qcif_pane

0xa504,	// (0x000b5c52) cam6_image_uncrop_qvga_pane_ParamLimits

0xa504,	// (0x000b5c52) cam6_image_uncrop_qvga_pane

0xddb2,	// (0x000b9500) vid6_image_uncrop_qcif_pane_ParamLimits

0xddb2,	// (0x000b9500) vid6_image_uncrop_qcif_pane

0x95f0,	// (0x000b4d3e) bg_popup_preview_window_pane_cp03

0xe07c,	// (0x000b97ca) list_cset_text2_pane

0xe084,	// (0x000b97d2) main_cset6_text2_pane_g1

0xe08c,	// (0x000b97da) main_cset6_text2_pane_t1

0x7d2a,	// (0x000b3478) list_cset_text2_pane_t1_ParamLimits

0x7d2a,	// (0x000b3478) list_cset_text2_pane_t1

0x9641,	// (0x000b4d8f) main_radioblah_pane_ParamLimits

0x7a80,	// (0x000b31ce) main_mobtv_info_pane_t3_ParamLimits

0x7a80,	// (0x000b31ce) main_mobtv_info_pane_t3

0x7be8,	// (0x000b3336) main_radioblah_pane_g1

0x7c22,	// (0x000b3370) main_radioblah_info_pane_g1

0x7ca7,	// (0x000b33f5) main_radioblah_info_pane_t3_ParamLimits

0x7ca7,	// (0x000b33f5) main_radioblah_info_pane_t3

0x226b,	// (0x000ad9b9) highlight_cell_cale_month_pane_ParamLimits

0x226b,	// (0x000ad9b9) highlight_cell_cale_month_pane

0x95f0,	// (0x000b4d3e) main_phob_fisheye_pane

0xcfa6,	// (0x000b86f4) scroll_pane_cp0031_ParamLimits

0xcfa6,	// (0x000b86f4) scroll_pane_cp0031

0xdec4,	// (0x000b9612) wait_bar_pane_cp08_ParamLimits

0x7479,	// (0x000b2bc7) cset_list_set_pane_copy1_ParamLimits

0xe609,	// (0x000b9d57) highlight_cell_cale_month_pane_g1

0x7d43,	// (0x000b3491) highlight_cell_cale_month_pane_t1

0xdb53,	// (0x000b92a1) list_gen_pane_cp01

0xd7be,	// (0x000b8f0c) scroll_pane_01

0x7d51,	// (0x000b349f) list_single_double_fisheye_pane

0x7d5a,	// (0x000b34a8) list_double_fisheye_pane_g1_ParamLimits

0x7d5a,	// (0x000b34a8) list_double_fisheye_pane_g1

0x7d66,	// (0x000b34b4) list_double_fisheye_pane_g2_ParamLimits

0x7d66,	// (0x000b34b4) list_double_fisheye_pane_g2

0x7d7a,	// (0x000b34c8) list_double_fisheye_pane_g3_ParamLimits

0x7d7a,	// (0x000b34c8) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x000bb3fd) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x000bb3fd) list_double_fisheye_pane_g

0x7da3,	// (0x000b34f1) list_double_fisheye_pane_t1_ParamLimits

0x7da3,	// (0x000b34f1) list_double_fisheye_pane_t1

0x7dbe,	// (0x000b350c) list_double_fisheye_pane_t2_ParamLimits

0x7dbe,	// (0x000b350c) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x000bb408) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x000bb408) list_double_fisheye_pane_t

0x95f0,	// (0x000b4d3e) main_call5_pane

0x7b75,	// (0x000b32c3) sc_swipe_pane_ParamLimits

0x7b75,	// (0x000b32c3) sc_swipe_pane

0x7df3,	// (0x000b3541) call5_image_pane_ParamLimits

0x7df3,	// (0x000b3541) call5_image_pane

0x7e10,	// (0x000b355e) call5_swipe_1_pane_ParamLimits

0x7e10,	// (0x000b355e) call5_swipe_1_pane

0x7e23,	// (0x000b3571) call5_swipe_2_pane_ParamLimits

0x7e23,	// (0x000b3571) call5_swipe_2_pane

0x7e50,	// (0x000b359e) popup_call5_audio_first_window_ParamLimits

0x7e50,	// (0x000b359e) popup_call5_audio_first_window

0xceca,	// (0x000b8618) call5_swipe_1_pane_g1_ParamLimits

0xceca,	// (0x000b8618) call5_swipe_1_pane_g1

0xe611,	// (0x000b9d5f) call5_swipe_1_pane_g2_ParamLimits

0xe611,	// (0x000b9d5f) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x000bb40d) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x000bb40d) call5_swipe_1_pane_g

0xe61d,	// (0x000b9d6b) call5_swipe_1_pane_t1_ParamLimits

0xe61d,	// (0x000b9d6b) call5_swipe_1_pane_t1

0xceca,	// (0x000b8618) call5_swipe_2_pane_g1_ParamLimits

0xceca,	// (0x000b8618) call5_swipe_2_pane_g1

0xe632,	// (0x000b9d80) call5_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x000b9d80) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x000bb412) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x000bb412) call5_swipe_2_pane_g

0xe63e,	// (0x000b9d8c) call5_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x000b9d8c) call5_swipe_2_pane_t1

0xe653,	// (0x000b9da1) sc_swipe_pane_g1_ParamLimits

0xe653,	// (0x000b9da1) sc_swipe_pane_g1

0xe660,	// (0x000b9dae) sc_swipe_pane_g2_ParamLimits

0xe660,	// (0x000b9dae) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x000bb417) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x000bb417) sc_swipe_pane_g

0xe66c,	// (0x000b9dba) sc_swipe_pane_t1_ParamLimits

0xe66c,	// (0x000b9dba) sc_swipe_pane_t1

0x95f0,	// (0x000b4d3e) main_cmail_launcher_pane

0x7e65,	// (0x000b35b3) aid_size_cell_cmail_l_ParamLimits

0x7e65,	// (0x000b35b3) aid_size_cell_cmail_l

0x7e7f,	// (0x000b35cd) grid_cmail_l_pane_ParamLimits

0x7e7f,	// (0x000b35cd) grid_cmail_l_pane

0x7e9a,	// (0x000b35e8) cell_cmail_l_pane_ParamLimits

0x7e9a,	// (0x000b35e8) cell_cmail_l_pane

0x7ec2,	// (0x000b3610) cell_cmail_l_pane_g1_ParamLimits

0x7ec2,	// (0x000b3610) cell_cmail_l_pane_g1

0x7ece,	// (0x000b361c) cell_cmail_l_pane_t1_ParamLimits

0x7ece,	// (0x000b361c) cell_cmail_l_pane_t1

0xe681,	// (0x000b9dcf) cell_cmail_l_pane_t2_ParamLimits

0xe681,	// (0x000b9dcf) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x000bb41c) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x000bb41c) cell_cmail_l_pane_t

0x9641,	// (0x000b4d8f) grid_highlight_pane_cp018_ParamLimits

0x9641,	// (0x000b4d8f) grid_highlight_pane_cp018

0xfee6,	// (0x000ab634) main2_pane_ParamLimits

0xfee6,	// (0x000ab634) main2_pane

0xa878,	// (0x000b5fc6) popup_sp_fs_action_menu_bg_pane_g1

0xa880,	// (0x000b5fce) popup_sp_fs_action_menu_bg_pane_g2

0xa888,	// (0x000b5fd6) popup_sp_fs_action_menu_bg_pane_g3

0xa890,	// (0x000b5fde) popup_sp_fs_action_menu_bg_pane_g4

0xa898,	// (0x000b5fe6) popup_sp_fs_action_menu_bg_pane_g5

0xa8a0,	// (0x000b5fee) popup_sp_fs_action_menu_bg_pane_g6

0xa8a8,	// (0x000b5ff6) popup_sp_fs_action_menu_bg_pane_g7

0xa8b0,	// (0x000b5ffe) popup_sp_fs_action_menu_bg_pane_g8

0xa8b8,	// (0x000b6006) popup_sp_fs_action_menu_bg_pane_g9

0xa8c0,	// (0x000b600e) popup_sp_fs_action_menu_bg_pane_g10

0xa8c0,	// (0x000b600e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000ba8e1) popup_sp_fs_action_menu_bg_pane_g

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g3_g1

0x1091,	// (0x000ac7df) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_t3_g3_g2

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x000ba991) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x000ba991) list_medium_line_x2_t3_g3_g

0x10a9,	// (0x000ac7f7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x10a9,	// (0x000ac7f7) list_medium_line_x2_t3_g3_t1

0x10be,	// (0x000ac80c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x10be,	// (0x000ac80c) list_medium_line_x2_t3_g3_t2

0x10d2,	// (0x000ac820) list_medium_line_x2_t3_g3_t3_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x000ba998) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x000ba998) list_medium_line_x2_t3_g3_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g2_g1

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x000ba99f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x000ba99f) list_medium_line_x2_t3_g2_g

0x10e7,	// (0x000ac835) list_medium_line_x2_t3_g2_t1_ParamLimits

0x10e7,	// (0x000ac835) list_medium_line_x2_t3_g2_t1

0x10fd,	// (0x000ac84b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x10fd,	// (0x000ac84b) list_medium_line_x2_t3_g2_t2

0x110f,	// (0x000ac85d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x110f,	// (0x000ac85d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x000ba9a4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x000ba9a4) list_medium_line_x2_t3_g2_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t4_g4_g1

0x112d,	// (0x000ac87b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x112d,	// (0x000ac87b) list_medium_line_x2_t4_g4_g2

0x1091,	// (0x000ac7df) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_t4_g4_g3

0x1139,	// (0x000ac887) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1139,	// (0x000ac887) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x000ba9ab) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x000ba9ab) list_medium_line_x2_t4_g4_g

0x1145,	// (0x000ac893) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1145,	// (0x000ac893) list_medium_line_x2_t4_g4_t1

0x115f,	// (0x000ac8ad) list_medium_line_x2_t4_g4_t2_ParamLimits

0x115f,	// (0x000ac8ad) list_medium_line_x2_t4_g4_t2

0x1175,	// (0x000ac8c3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1175,	// (0x000ac8c3) list_medium_line_x2_t4_g4_t3

0x118a,	// (0x000ac8d8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x118a,	// (0x000ac8d8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x000ba9b4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x000ba9b4) list_medium_line_x2_t4_g4_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g4_g1

0x112d,	// (0x000ac87b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x112d,	// (0x000ac87b) list_medium_line_x2_t2_g4_g2

0x1091,	// (0x000ac7df) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_t2_g4_g3

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000baa1b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000baa1b) list_medium_line_x2_t2_g4_g

0x2291,	// (0x000ad9df) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2291,	// (0x000ad9df) list_medium_line_x2_t2_g4_t1

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g4_t2_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000baa24) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000baa24) list_medium_line_x2_t2_g4_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g3_g1

0x1091,	// (0x000ac7df) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_t2_g3_g2

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x000ba991) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x000ba991) list_medium_line_x2_t2_g3_g

0x22a6,	// (0x000ad9f4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22a6,	// (0x000ad9f4) list_medium_line_x2_t2_g3_t1

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g3_t2_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000baa29) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000baa29) list_medium_line_x2_t2_g3_t

0x23fe,	// (0x000adb4c) main_sp_fs_list_pane_ParamLimits

0x23fe,	// (0x000adb4c) main_sp_fs_list_pane

0x240a,	// (0x000adb58) sp_fs_scroll_pane_ParamLimits

0x240a,	// (0x000adb58) sp_fs_scroll_pane

0x2416,	// (0x000adb64) list_medium_line_x2_t3_t1

0x2426,	// (0x000adb74) list_medium_line_x2_t3_t2

0x2434,	// (0x000adb82) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x000baa74) list_medium_line_x2_t3_t

0x2442,	// (0x000adb90) list_medium_line_x3_t4_t1

0x2452,	// (0x000adba0) list_medium_line_x3_t4_t2

0x2460,	// (0x000adbae) list_medium_line_x3_t4_t3

0x2434,	// (0x000adb82) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x000baa7b) list_medium_line_x3_t4_t

0x246e,	// (0x000adbbc) list_medium_line_x4_t5_t1

0x247e,	// (0x000adbcc) list_medium_line_x4_t5_t2

0x2460,	// (0x000adbae) list_medium_line_x4_t5_t3

0x248c,	// (0x000adbda) list_medium_line_x4_t5_t4

0x2434,	// (0x000adb82) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x000baa84) list_medium_line_x4_t5_t

0x1085,	// (0x000ac7d3) list_medium_line_t4_g4_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_t4_g4_g1

0x249a,	// (0x000adbe8) list_medium_line_t4_g4_g2_ParamLimits

0x249a,	// (0x000adbe8) list_medium_line_t4_g4_g2

0x24a6,	// (0x000adbf4) list_medium_line_t4_g4_g3_ParamLimits

0x24a6,	// (0x000adbf4) list_medium_line_t4_g4_g3

0x109d,	// (0x000ac7eb) list_medium_line_t4_g4_g4_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x000baa8f) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x000baa8f) list_medium_line_t4_g4_g

0x24b2,	// (0x000adc00) list_medium_line_t4_g4_t1_ParamLimits

0x24b2,	// (0x000adc00) list_medium_line_t4_g4_t1

0x24c7,	// (0x000adc15) list_medium_line_t4_g4_t2_ParamLimits

0x24c7,	// (0x000adc15) list_medium_line_t4_g4_t2

0x24dd,	// (0x000adc2b) list_medium_line_t4_g4_t3_ParamLimits

0x24dd,	// (0x000adc2b) list_medium_line_t4_g4_t3

0x10d2,	// (0x000ac820) list_medium_line_t4_g4_t4_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x000baa98) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x000baa98) list_medium_line_t4_g4_t

0x25b9,	// (0x000add07) chi_dic_find_pane_g1

0x37e1,	// (0x000aef2f) main_tport_pane

0x67d5,	// (0x000b1f23) list_medium_line_plain_t1

0x6889,	// (0x000b1fd7) list_medium_line_t2_g2_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t2_g2_g1

0xb803,	// (0x000b6f51) list_medium_line_t2_g2_g2_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x000bb154) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x000bb154) list_medium_line_t2_g2_g

0x6895,	// (0x000b1fe3) list_medium_line_t2_g2_t1_ParamLimits

0x6895,	// (0x000b1fe3) list_medium_line_t2_g2_t1

0x68ac,	// (0x000b1ffa) list_medium_line_t2_g2_t2_ParamLimits

0x68ac,	// (0x000b1ffa) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x000bb159) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x000bb159) list_medium_line_t2_g2_t

0xa4fc,	// (0x000b5c4a) aid_sp_fs_list_icon_a_sm

0xb80f,	// (0x000b6f5d) aid_sp_fs_list_icon_d

0xcab0,	// (0x000b81fe) aid_sp_fs_text_primary

0xcab9,	// (0x000b8207) aid_sp_fs_text_secondary

0x6ef2,	// (0x000b2640) list_medium_line

0x6ef2,	// (0x000b2640) list_medium_line_g2

0x6ef2,	// (0x000b2640) list_medium_line_g3

0x6ef2,	// (0x000b2640) list_medium_line_plain

0x6ef2,	// (0x000b2640) list_medium_line_plain_t2

0x6ef2,	// (0x000b2640) list_medium_line_plain_t3

0x6ef2,	// (0x000b2640) list_medium_line_right_icon

0x6ef2,	// (0x000b2640) list_medium_line_right_iconx2

0x6ef2,	// (0x000b2640) list_medium_line_t2

0x6ef2,	// (0x000b2640) list_medium_line_t2_g2

0x6ef2,	// (0x000b2640) list_medium_line_t2_g3

0x6ef2,	// (0x000b2640) list_medium_line_t2_right_icon

0x6ef2,	// (0x000b2640) list_medium_line_t2_right_iconx2

0x6ef2,	// (0x000b2640) list_medium_line_t3

0x6ef2,	// (0x000b2640) list_medium_line_t3_g2

0x6ef2,	// (0x000b2640) list_medium_line_t3_g3

0x6ef2,	// (0x000b2640) list_medium_line_t3_right_iconx2

0x6efb,	// (0x000b2649) list_medium_line_t4_g4

0x6f04,	// (0x000b2652) list_medium_line_x2

0x6f04,	// (0x000b2652) list_medium_line_x2_t2_g2

0x6f04,	// (0x000b2652) list_medium_line_x2_t2_g3

0x6f04,	// (0x000b2652) list_medium_line_x2_t2_g4

0x6f04,	// (0x000b2652) list_medium_line_x2_t3

0x6f04,	// (0x000b2652) list_medium_line_x2_t3_g2

0x6f04,	// (0x000b2652) list_medium_line_x2_t3_g3

0x6f04,	// (0x000b2652) list_medium_line_x2_t3_g4

0x6f04,	// (0x000b2652) list_medium_line_x2_t4_g2

0x6f04,	// (0x000b2652) list_medium_line_x2_t4_g4

0x6f0d,	// (0x000b265b) list_medium_line_x3

0x6f0d,	// (0x000b265b) list_medium_line_x3_t4

0x6f0d,	// (0x000b265b) list_medium_line_x3_t4_g4

0x6efb,	// (0x000b2649) list_medium_line_x4_t4

0x6efb,	// (0x000b2649) list_medium_line_x4_t4_g7

0x6efb,	// (0x000b2649) list_medium_line_x4_t5

0x6f16,	// (0x000b2664) list_single_fs_dyc_pane_ParamLimits

0x6f16,	// (0x000b2664) list_single_fs_dyc_pane

0x1085,	// (0x000ac7d3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x4_t4_g7_g1

0x767b,	// (0x000b2dc9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x767b,	// (0x000b2dc9) list_medium_line_x4_t4_g7_g2

0x7687,	// (0x000b2dd5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7687,	// (0x000b2dd5) list_medium_line_x4_t4_g7_g3

0x7696,	// (0x000b2de4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7696,	// (0x000b2de4) list_medium_line_x4_t4_g7_g4

0x76a2,	// (0x000b2df0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x76a2,	// (0x000b2df0) list_medium_line_x4_t4_g7_g5

0x76b1,	// (0x000b2dff) list_medium_line_x4_t4_g7_g6_ParamLimits

0x76b1,	// (0x000b2dff) list_medium_line_x4_t4_g7_g6

0x76c0,	// (0x000b2e0e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x76c0,	// (0x000b2e0e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x000bb324) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x000bb324) list_medium_line_x4_t4_g7_g

0x76cc,	// (0x000b2e1a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x76cc,	// (0x000b2e1a) list_medium_line_x4_t4_g7_t1

0x76e1,	// (0x000b2e2f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x76e1,	// (0x000b2e2f) list_medium_line_x4_t4_g7_t2

0x76f6,	// (0x000b2e44) list_medium_line_x4_t4_g7_t3_ParamLimits

0x76f6,	// (0x000b2e44) list_medium_line_x4_t4_g7_t3

0x770b,	// (0x000b2e59) list_medium_line_x4_t4_g7_t4_ParamLimits

0x770b,	// (0x000b2e59) list_medium_line_x4_t4_g7_t4

0x771d,	// (0x000b2e6b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x771d,	// (0x000b2e6b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x000bb333) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x000bb333) list_medium_line_x4_t4_g7_t

0x772f,	// (0x000b2e7d) list_single_dyc_row_pane_ParamLimits

0x772f,	// (0x000b2e7d) list_single_dyc_row_pane

0x7de0,	// (0x000b352e) call5_gesture_pane_ParamLimits

0x7de0,	// (0x000b352e) call5_gesture_pane

0x7e36,	// (0x000b3584) call5_windows_pane_ParamLimits

0x7e36,	// (0x000b3584) call5_windows_pane

0x7ee4,	// (0x000b3632) call5_swipe_1_pane_cp_ParamLimits

0x7ee4,	// (0x000b3632) call5_swipe_1_pane_cp

0x7ef0,	// (0x000b363e) call5_swipe_2_pane_cp_ParamLimits

0x7ef0,	// (0x000b363e) call5_swipe_2_pane_cp

0xb2e6,	// (0x000b6a34) call5_image_pane_cp

0x7efc,	// (0x000b364a) popup_call5_audio_first_window_cp_ParamLimits

0x7efc,	// (0x000b364a) popup_call5_audio_first_window_cp

0xe653,	// (0x000b9da1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe653,	// (0x000b9da1) call5_swipe_1_pane_g1_cp

0xe693,	// (0x000b9de1) call5_swipe_1_pane_g2_cp

0xe66c,	// (0x000b9dba) call5_swipe_1_pane_t1_cp_ParamLimits

0xe66c,	// (0x000b9dba) call5_swipe_1_pane_t1_cp

0xe653,	// (0x000b9da1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe653,	// (0x000b9da1) call5_swipe_2_pane_g1_cp

0xe69b,	// (0x000b9de9) call5_swipe_2_pane_g2_cp

0xe6a3,	// (0x000b9df1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6a3,	// (0x000b9df1) call5_swipe_2_pane_t1_cp

0x9641,	// (0x000b4d8f) main_sp_fs_email_pane

0xe6b8,	// (0x000b9e06) main_sp_fs_listscroll_pane_te

0xa512,	// (0x000b5c60) popup_sp_fs_action_menu_pane_ParamLimits

0xa512,	// (0x000b5c60) popup_sp_fs_action_menu_pane

0xcc9a,	// (0x000b83e8) bg_sp_fs_ctrlbar_pane_g1

0xe6c1,	// (0x000b9e0f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ca,	// (0x000b9e18) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6d3,	// (0x000b9e21) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc9a,	// (0x000b83e8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x000bb421) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca5f,	// (0x000b81ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca5f,	// (0x000b81ad) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6dc,	// (0x000b9e2a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6dc,	// (0x000b9e2a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e8,	// (0x000b9e36) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e8,	// (0x000b9e36) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x000bb42a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x000bb42a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f4,	// (0x000b9e42) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f4,	// (0x000b9e42) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb817,	// (0x000b6f65) list_medium_line_t2_right_icon_g1

0x7f0a,	// (0x000b3658) list_medium_line_t2_right_icon_t1

0x7f1a,	// (0x000b3668) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x000bb42f) list_medium_line_t2_right_icon_t

0xc82f,	// (0x000b7f7d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc82f,	// (0x000b7f7d) bg_sp_fs_ctrlbar_pane

0x7f79,	// (0x000b36c7) main_sp_fs_ctrlbar_button_pane_cp01

0x7f83,	// (0x000b36d1) main_sp_fs_ctrlbar_ddmenu_pane

0xe746,	// (0x000b9e94) main_sp_fs_ctrlbar_pane_g1

0xe752,	// (0x000b9ea0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x000bb434) main_sp_fs_ctrlbar_pane_g

0xe75e,	// (0x000b9eac) main_sp_fs_ctrlbar_pane_t1

0x7f8d,	// (0x000b36db) main_sp_fs_ctrlbar_pane

0x7fb1,	// (0x000b36ff) main_sp_fs_listscroll_pane_te_cp01

0x7fd1,	// (0x000b371f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7fd1,	// (0x000b371f) popup_sp_fs_action_menu_pane_cp01

0x9641,	// (0x000b4d8f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9641,	// (0x000b4d8f) bg_sp_fs_highlight_list_pane_cp01

0xa558,	// (0x000b5ca6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa558,	// (0x000b5ca6) sp_fs_action_menu_list_gene_pane_g1

0xe78e,	// (0x000b9edc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe78e,	// (0x000b9edc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x000bb43e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x000bb43e) sp_fs_action_menu_list_gene_pane_g

0xa567,	// (0x000b5cb5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa567,	// (0x000b5cb5) sp_fs_action_menu_list_gene_pane_t1

0xa57f,	// (0x000b5ccd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa57f,	// (0x000b5ccd) sp_fs_action_menu_list_gene_pane

0xe79b,	// (0x000b9ee9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79b,	// (0x000b9ee9) popup_sp_fs_action_menu_bg_pane

0xa5a2,	// (0x000b5cf0) sp_fs_action_menu_list_pane_ParamLimits

0xa5a2,	// (0x000b5cf0) sp_fs_action_menu_list_pane

0xe7a9,	// (0x000b9ef7) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a9,	// (0x000b9ef7) sp_fs_scroll_pane_cp01

0x8007,	// (0x000b3755) list_medium_line_plain_t2_t1

0x8017,	// (0x000b3765) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x000bb443) list_medium_line_plain_t2_t

0x8027,	// (0x000b3775) list_medium_line_plain_t3_t1

0x8037,	// (0x000b3785) list_medium_line_plain_t3_t2

0x8045,	// (0x000b3793) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x000bb448) list_medium_line_plain_t3_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t2_g2_g1

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x000ba99f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x000ba99f) list_medium_line_x2_t2_g2_g

0x24b2,	// (0x000adc00) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24b2,	// (0x000adc00) list_medium_line_x2_t2_g2_t1

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g2_t2_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x000bb44f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x000bb44f) list_medium_line_x2_t2_g2_t

0x1085,	// (0x000ac7d3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t4_g2_g1

0x8053,	// (0x000b37a1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8053,	// (0x000b37a1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x000bb454) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x000bb454) list_medium_line_x2_t4_g2_g

0x8065,	// (0x000b37b3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8065,	// (0x000b37b3) list_medium_line_x2_t4_g2_t1

0x807f,	// (0x000b37cd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x807f,	// (0x000b37cd) list_medium_line_x2_t4_g2_t2

0x8095,	// (0x000b37e3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8095,	// (0x000b37e3) list_medium_line_x2_t4_g2_t3

0x10d2,	// (0x000ac820) list_medium_line_x2_t4_g2_t4_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x000bb459) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x000bb459) list_medium_line_x2_t4_g2_t

0xb81f,	// (0x000b6f6d) list_medium_line_t3_right_iconx2_g1

0xb817,	// (0x000b6f65) list_medium_line_t3_right_iconx2_g2

0x80aa,	// (0x000b37f8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x000bb462) list_medium_line_t3_right_iconx2_g

0x80b4,	// (0x000b3802) list_medium_line_t3_right_iconx2_t1

0x80c4,	// (0x000b3812) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x000bb469) list_medium_line_t3_right_iconx2_t

0x1085,	// (0x000ac7d3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x3_t4_g4_g1

0x1091,	// (0x000ac7df) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x3_t4_g4_g2

0x249a,	// (0x000adbe8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x249a,	// (0x000adbe8) list_medium_line_x3_t4_g4_g3

0x80d2,	// (0x000b3820) list_medium_line_x3_t4_g4_g4_ParamLimits

0x80d2,	// (0x000b3820) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x000bb46e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x000bb46e) list_medium_line_x3_t4_g4_g

0x80de,	// (0x000b382c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x80de,	// (0x000b382c) list_medium_line_x3_t4_g4_t1

0x80f5,	// (0x000b3843) list_medium_line_x3_t4_g4_t2_ParamLimits

0x80f5,	// (0x000b3843) list_medium_line_x3_t4_g4_t2

0x8110,	// (0x000b385e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8110,	// (0x000b385e) list_medium_line_x3_t4_g4_t3

0x8125,	// (0x000b3873) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8125,	// (0x000b3873) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x000bb477) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x000bb477) list_medium_line_x3_t4_g4_t

0x8142,	// (0x000b3890) list_single_dyc_row_text_pane_t1_ParamLimits

0x8142,	// (0x000b3890) list_single_dyc_row_text_pane_t1

0x818b,	// (0x000b38d9) list_single_dyc_row_text_pane_t2_ParamLimits

0x818b,	// (0x000b38d9) list_single_dyc_row_text_pane_t2

0xa5c6,	// (0x000b5d14) list_single_dyc_row_text_pane_t3_ParamLimits

0xa5c6,	// (0x000b5d14) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x000bb480) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x000bb480) list_single_dyc_row_text_pane_t

0xa5d8,	// (0x000b5d26) list_single_dyc_row_pane_g1_ParamLimits

0xa5d8,	// (0x000b5d26) list_single_dyc_row_pane_g1

0xa5e4,	// (0x000b5d32) list_single_dyc_row_pane_g2_ParamLimits

0xa5e4,	// (0x000b5d32) list_single_dyc_row_pane_g2

0xa5f0,	// (0x000b5d3e) list_single_dyc_row_pane_g3_ParamLimits

0xa5f0,	// (0x000b5d3e) list_single_dyc_row_pane_g3

0xa5fc,	// (0x000b5d4a) list_single_dyc_row_pane_g4_ParamLimits

0xa5fc,	// (0x000b5d4a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bb487) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bb487) list_single_dyc_row_pane_g

0xa608,	// (0x000b5d56) list_single_dyc_row_text_pane_ParamLimits

0xa608,	// (0x000b5d56) list_single_dyc_row_text_pane

0x95f0,	// (0x000b4d3e) bg_sp_fs_scroll_pane

0xe7cf,	// (0x000b9f1d) thumb_sp_fs_scroll_pane

0x6889,	// (0x000b1fd7) list_medium_line_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_g1

0x81e5,	// (0x000b3933) list_medium_line_t1_ParamLimits

0x81e5,	// (0x000b3933) list_medium_line_t1

0x1085,	// (0x000ac7d3) list_medium_line_x2_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_g1

0x1091,	// (0x000ac7df) list_medium_line_x2_g2_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bb490) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bb490) list_medium_line_x2_g

0xa627,	// (0x000b5d75) list_medium_line_x2_t1_ParamLimits

0xa627,	// (0x000b5d75) list_medium_line_x2_t1

0x1085,	// (0x000ac7d3) list_medium_line_x3_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x3_g1

0x1091,	// (0x000ac7df) list_medium_line_x3_g2_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bb490) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bb490) list_medium_line_x3_g

0xa627,	// (0x000b5d75) list_medium_line_x3_t1_ParamLimits

0xa627,	// (0x000b5d75) list_medium_line_x3_t1

0xe7d8,	// (0x000b9f26) thumb_sp_fs_scroll_pane_g1

0xe7e1,	// (0x000b9f2f) thumb_sp_fs_scroll_pane_g2

0xe7ea,	// (0x000b9f38) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bb495) thumb_sp_fs_scroll_pane_g

0xe7d8,	// (0x000b9f26) bg_sp_fs_scroll_pane_g1

0xe7e1,	// (0x000b9f2f) bg_sp_fs_scroll_pane_g2

0xe7ea,	// (0x000b9f38) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bb495) bg_sp_fs_scroll_pane_g

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1085,	// (0x000ac7d3) list_medium_line_x2_t3_g4_g1

0x112d,	// (0x000ac87b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x112d,	// (0x000ac87b) list_medium_line_x2_t3_g4_g2

0x1091,	// (0x000ac7df) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1091,	// (0x000ac7df) list_medium_line_x2_t3_g4_g3

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x109d,	// (0x000ac7eb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000baa1b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000baa1b) list_medium_line_x2_t3_g4_g

0x81fa,	// (0x000b3948) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81fa,	// (0x000b3948) list_medium_line_x2_t3_g4_t1

0x8210,	// (0x000b395e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8210,	// (0x000b395e) list_medium_line_x2_t3_g4_t2

0x10d2,	// (0x000ac820) list_medium_line_x2_t3_g4_t3_ParamLimits

0x10d2,	// (0x000ac820) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bb49c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bb49c) list_medium_line_x2_t3_g4_t

0x6889,	// (0x000b1fd7) list_medium_line_g2_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_g2_g1

0xb803,	// (0x000b6f51) list_medium_line_g2_g2_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x000bb154) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x000bb154) list_medium_line_g2_g

0x8229,	// (0x000b3977) list_medium_line_g2_t1_ParamLimits

0x8229,	// (0x000b3977) list_medium_line_g2_t1

0x6889,	// (0x000b1fd7) list_medium_line_t3_g2_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t3_g2_g1

0xb803,	// (0x000b6f51) list_medium_line_t3_g2_g2_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x000bb154) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x000bb154) list_medium_line_t3_g2_g

0x823e,	// (0x000b398c) list_medium_line_t3_g2_t1_ParamLimits

0x823e,	// (0x000b398c) list_medium_line_t3_g2_t1

0x8255,	// (0x000b39a3) list_medium_line_t3_g2_t2_ParamLimits

0x8255,	// (0x000b39a3) list_medium_line_t3_g2_t2

0x826a,	// (0x000b39b8) list_medium_line_t3_g2_t3_ParamLimits

0x826a,	// (0x000b39b8) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bb4a3) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bb4a3) list_medium_line_t3_g2_t

0xb817,	// (0x000b6f65) list_medium_line_right_icon_g1

0x8283,	// (0x000b39d1) list_medium_line_right_icon_t1

0x6889,	// (0x000b1fd7) list_medium_line_t2_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t2_g1

0x8291,	// (0x000b39df) list_medium_line_t2_t1_ParamLimits

0x8291,	// (0x000b39df) list_medium_line_t2_t1

0x82ab,	// (0x000b39f9) list_medium_line_t2_t2_ParamLimits

0x82ab,	// (0x000b39f9) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bb4aa) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bb4aa) list_medium_line_t2_t

0x6889,	// (0x000b1fd7) list_medium_line_t3_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t3_g1

0x82c4,	// (0x000b3a12) list_medium_line_t3_t1_ParamLimits

0x82c4,	// (0x000b3a12) list_medium_line_t3_t1

0x82db,	// (0x000b3a29) list_medium_line_t3_t2_ParamLimits

0x82db,	// (0x000b3a29) list_medium_line_t3_t2

0x82f0,	// (0x000b3a3e) list_medium_line_t3_t3_ParamLimits

0x82f0,	// (0x000b3a3e) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bb4af) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bb4af) list_medium_line_t3_t

0x6889,	// (0x000b1fd7) list_medium_line_g3_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_g3_g1

0xb827,	// (0x000b6f75) list_medium_line_g3_g2_ParamLimits

0xb827,	// (0x000b6f75) list_medium_line_g3_g2

0xb803,	// (0x000b6f51) list_medium_line_g3_g3_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bb4b6) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bb4b6) list_medium_line_g3_g

0x8302,	// (0x000b3a50) list_medium_line_g3_t1_ParamLimits

0x8302,	// (0x000b3a50) list_medium_line_g3_t1

0x6889,	// (0x000b1fd7) list_medium_line_t2_g3_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t2_g3_g1

0xb827,	// (0x000b6f75) list_medium_line_t2_g3_g2_ParamLimits

0xb827,	// (0x000b6f75) list_medium_line_t2_g3_g2

0xb803,	// (0x000b6f51) list_medium_line_t2_g3_g3_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bb4b6) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bb4b6) list_medium_line_t2_g3_g

0x8317,	// (0x000b3a65) list_medium_line_t2_g3_t1_ParamLimits

0x8317,	// (0x000b3a65) list_medium_line_t2_g3_t1

0x832e,	// (0x000b3a7c) list_medium_line_t2_g3_t2_ParamLimits

0x832e,	// (0x000b3a7c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bb4bd) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bb4bd) list_medium_line_t2_g3_t

0x6889,	// (0x000b1fd7) list_medium_line_t3_g3_g1_ParamLimits

0x6889,	// (0x000b1fd7) list_medium_line_t3_g3_g1

0xb827,	// (0x000b6f75) list_medium_line_t3_g3_g2_ParamLimits

0xb827,	// (0x000b6f75) list_medium_line_t3_g3_g2

0xb803,	// (0x000b6f51) list_medium_line_t3_g3_g3_ParamLimits

0xb803,	// (0x000b6f51) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bb4b6) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bb4b6) list_medium_line_t3_g3_g

0x8347,	// (0x000b3a95) list_medium_line_t3_g3_t1_ParamLimits

0x8347,	// (0x000b3a95) list_medium_line_t3_g3_t1

0x8360,	// (0x000b3aae) list_medium_line_t3_g3_t2_ParamLimits

0x8360,	// (0x000b3aae) list_medium_line_t3_g3_t2

0x8376,	// (0x000b3ac4) list_medium_line_t3_g3_t3_ParamLimits

0x8376,	// (0x000b3ac4) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bb4c2) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bb4c2) list_medium_line_t3_g3_t

0xb81f,	// (0x000b6f6d) list_medium_line_right_iconx2_g1

0xb817,	// (0x000b6f65) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bb4c9) list_medium_line_right_iconx2_g

0xb833,	// (0x000b6f81) list_medium_line_right_iconx2_t1

0xb81f,	// (0x000b6f6d) list_medium_line_t2_right_iconx2_g1

0xb817,	// (0x000b6f65) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bb4c9) list_medium_line_t2_right_iconx2_g

0x8390,	// (0x000b3ade) list_medium_line_t2_right_iconx2_t1

0x83a0,	// (0x000b3aee) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bb4ce) list_medium_line_t2_right_iconx2_t

0x83b2,	// (0x000b3b00) list_medium_line_x4_t4_t1

0x83c0,	// (0x000b3b0e) list_medium_line_x4_t4_t2

0x83d0,	// (0x000b3b1e) list_medium_line_x4_t4_t3

0x83e0,	// (0x000b3b2e) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bb4d3) list_medium_line_x4_t4_t

0x8433,	// (0x000b3b81) tport_appsw_pane_ParamLimits

0x8433,	// (0x000b3b81) tport_appsw_pane

0x844b,	// (0x000b3b99) tport_contact_pane_ParamLimits

0x844b,	// (0x000b3b99) tport_contact_pane

0x8463,	// (0x000b3bb1) tport_listscroll_pane_ParamLimits

0x8463,	// (0x000b3bb1) tport_listscroll_pane

0x847d,	// (0x000b3bcb) cell_tport_appsw_pane_ParamLimits

0x847d,	// (0x000b3bcb) cell_tport_appsw_pane

0xd680,	// (0x000b8dce) tport_appsw_pane_g1_ParamLimits

0xd680,	// (0x000b8dce) tport_appsw_pane_g1

0xe7f3,	// (0x000b9f41) tport_contact_pane_g1

0xe7fc,	// (0x000b9f4a) tport_contact_pane_t1

0xe80a,	// (0x000b9f58) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bb4dc) tport_contact_pane_t

0xe818,	// (0x000b9f66) list_tport_pane

0xe821,	// (0x000b9f6f) scroll_pane_cp_030

0x84c9,	// (0x000b3c17) cell_tport_appsw_pane_g1

0x84d9,	// (0x000b3c27) cell_tport_appsw_pane_t1

0x95f0,	// (0x000b4d3e) grid_highlight_pane_cp019

0x84e7,	// (0x000b3c35) list_tport_double_graphic_pane_ParamLimits

0x84e7,	// (0x000b3c35) list_tport_double_graphic_pane

0x9641,	// (0x000b4d8f) list_highlight_pane_cp023_ParamLimits

0x9641,	// (0x000b4d8f) list_highlight_pane_cp023

0x84f4,	// (0x000b3c42) list_tport_double_graphic_pane_g1_ParamLimits

0x84f4,	// (0x000b3c42) list_tport_double_graphic_pane_g1

0x8501,	// (0x000b3c4f) list_tport_double_graphic_pane_t1_ParamLimits

0x8501,	// (0x000b3c4f) list_tport_double_graphic_pane_t1

0x8516,	// (0x000b3c64) list_tport_double_graphic_pane_t2_ParamLimits

0x8516,	// (0x000b3c64) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bb4e8) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bb4e8) list_tport_double_graphic_pane_t

0x95f0,	// (0x000b4d3e) main_cale_note_pane

0x5fda,	// (0x000b1728) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5fda,	// (0x000b1728) cell_vitu2_function_top_wide_pane_cp01

0x7a94,	// (0x000b31e2) wait_bar_pane_cp05_ParamLimits

0x9641,	// (0x000b4d8f) listscroll_cmail_pane

0xe832,	// (0x000b9f80) list_cmail_pane

0x8532,	// (0x000b3c80) list_cmail_body_pane

0x8547,	// (0x000b3c95) list_single_cmail_header_caption_pane

0x8561,	// (0x000b3caf) list_single_cmail_header_detail_pane_ParamLimits

0x8561,	// (0x000b3caf) list_single_cmail_header_detail_pane

0x8590,	// (0x000b3cde) list_single_cmail_header_caption_pane_t1

0x85ab,	// (0x000b3cf9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85ab,	// (0x000b3cf9) list_single_cmail_header_detail_pane_g1

0xb841,	// (0x000b6f8f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb841,	// (0x000b6f8f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bb4ed) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bb4ed) list_single_cmail_header_detail_pane_g

0x85c3,	// (0x000b3d11) list_single_cmail_header_detail_pane_t1_ParamLimits

0x85c3,	// (0x000b3d11) list_single_cmail_header_detail_pane_t1

0x8613,	// (0x000b3d61) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8613,	// (0x000b3d61) list_single_cmail_header_editor_pane_bg

0xe2fb,	// (0x000b9a49) list_cmail_body_pane_g1

0xe856,	// (0x000b9fa4) list_cmail_body_pane_t1

0xd6a0,	// (0x000b8dee) list_single_cmail_header_editor_pane_bg_g1

0xac00,	// (0x000b634e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b0,	// (0x000b8dfe) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6a8,	// (0x000b8df6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8ca,	// (0x000b9018) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d0,	// (0x000b8e1e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c0,	// (0x000b8e0e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6c8,	// (0x000b8e16) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabe0,	// (0x000b632e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x862c,	// (0x000b3d7a) calenote_gesture_pane_ParamLimits

0x862c,	// (0x000b3d7a) calenote_gesture_pane

0x864c,	// (0x000b3d9a) calenote_window_pane_ParamLimits

0x864c,	// (0x000b3d9a) calenote_window_pane

0xe864,	// (0x000b9fb2) popup_note_window_cp01

0x8668,	// (0x000b3db6) calenote_swipe_1_pane_ParamLimits

0x8668,	// (0x000b3db6) calenote_swipe_1_pane

0x7ef0,	// (0x000b363e) calenote_swipe_2_pane_ParamLimits

0x7ef0,	// (0x000b363e) calenote_swipe_2_pane

0xe653,	// (0x000b9da1) calenote_swipe_1_pane_g1_ParamLimits

0xe653,	// (0x000b9da1) calenote_swipe_1_pane_g1

0xe660,	// (0x000b9dae) calenote_swipe_1_pane_g2_ParamLimits

0xe660,	// (0x000b9dae) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x000bb417) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x000bb417) calenote_swipe_1_pane_g

0xe876,	// (0x000b9fc4) calenote_swipe_1_pane_t1_ParamLimits

0xe876,	// (0x000b9fc4) calenote_swipe_1_pane_t1

0xe653,	// (0x000b9da1) calenote_swipe_2_pane_g1_ParamLimits

0xe653,	// (0x000b9da1) calenote_swipe_2_pane_g1

0xe895,	// (0x000b9fe3) calenote_swipe_2_pane_g2_ParamLimits

0xe895,	// (0x000b9fe3) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bb4f9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bb4f9) calenote_swipe_2_pane_g

0xe8a1,	// (0x000b9fef) calenote_swipe_2_pane_t1_ParamLimits

0xe8a1,	// (0x000b9fef) calenote_swipe_2_pane_t1

0x95f0,	// (0x000b4d3e) main_mup_navstr_pane

0x4c34,	// (0x000b0382) main_mup3_pane_t7_ParamLimits

0x4c34,	// (0x000b0382) main_mup3_pane_t7

0xa071,	// (0x000b57bf) main_mp4_pane_g6_ParamLimits

0xa071,	// (0x000b57bf) main_mp4_pane_g6

0xa215,	// (0x000b5963) main_image3_pane_t4_ParamLimits

0xa215,	// (0x000b5963) main_image3_pane_t4

0x867d,	// (0x000b3dcb) popup_navstr_preview_pane_ParamLimits

0x867d,	// (0x000b3dcb) popup_navstr_preview_pane

0x868d,	// (0x000b3ddb) scroll_navstr_pane_ParamLimits

0x868d,	// (0x000b3ddb) scroll_navstr_pane

0x95f0,	// (0x000b4d3e) bg_popup_preview_window_pane_cp04

0xe8c8,	// (0x000ba016) popup_navstr_preview_pane_t1

0x86a1,	// (0x000b3def) scroll_navstr_pane_g1_ParamLimits

0x86a1,	// (0x000b3def) scroll_navstr_pane_g1

0x86b5,	// (0x000b3e03) scroll_navstr_pane_t1_ParamLimits

0x86b5,	// (0x000b3e03) scroll_navstr_pane_t1

0xe86d,	// (0x000b9fbb) bg_button_pane_cp014

0xe86d,	// (0x000b9fbb) bg_button_pane_cp030

0x7d86,	// (0x000b34d4) list_double_fisheye_pane_g4_ParamLimits

0x7d86,	// (0x000b34d4) list_double_fisheye_pane_g4

0x7d92,	// (0x000b34e0) list_double_fisheye_pane_g5_ParamLimits

0x7d92,	// (0x000b34e0) list_double_fisheye_pane_g5

0xe83a,	// (0x000b9f88) sp_fs_scroll_pane_cp03

0xe746,	// (0x000b9e94) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe752,	// (0x000b9ea0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x000bb434) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe75e,	// (0x000b9eac) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8528,	// (0x000b3c76) sp_fs_scroll_pane_cp02

0xa8e3,	// (0x000b6031) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8e3,	// (0x000b6031) popup_sp_fs_calendar_preview_list_single_pane

0x95f0,	// (0x000b4d3e) main_cam6_pano_pane

0x9641,	// (0x000b4d8f) main_mup3_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_phacti_pane

0x7967,	// (0x000b30b5) bg_button_pane_cp11

0x7981,	// (0x000b30cf) main_mobtv_info_pane_g2_ParamLimits

0x7981,	// (0x000b30cf) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x000bb394) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x000bb394) main_mobtv_info_pane_g

0x7b5c,	// (0x000b32aa) sc_clock_pane_t5_ParamLimits

0x7b5c,	// (0x000b32aa) sc_clock_pane_t5

0x7be8,	// (0x000b3336) main_radioblah_pane_g1_ParamLimits

0xe59f,	// (0x000b9ced) main_radioblah_pane_t3_ParamLimits

0xe59f,	// (0x000b9ced) main_radioblah_pane_t3

0xe5b7,	// (0x000b9d05) main_radioblah_pane_t4_ParamLimits

0xe5b7,	// (0x000b9d05) main_radioblah_pane_t4

0x7c10,	// (0x000b335e) main_radioblah_text_pane_ParamLimits

0x7c10,	// (0x000b335e) main_radioblah_text_pane

0x7c22,	// (0x000b3370) main_radioblah_info_pane_g1_ParamLimits

0x7cbb,	// (0x000b3409) main_radioblah_info_pane_t4_ParamLimits

0x7cbb,	// (0x000b3409) main_radioblah_info_pane_t4

0x9641,	// (0x000b4d8f) main_sp_fs_calendar_pane

0x86cc,	// (0x000b3e1a) main_phacti_pane_g1

0x86d4,	// (0x000b3e22) phacti_note_pane_ParamLimits

0x86d4,	// (0x000b3e22) phacti_note_pane

0xe8df,	// (0x000ba02d) phacti_term_pane_ParamLimits

0xe8df,	// (0x000ba02d) phacti_term_pane

0xe8f4,	// (0x000ba042) phacti_note_pane_t1_ParamLimits

0xe8f4,	// (0x000ba042) phacti_note_pane_t1

0xa661,	// (0x000b5daf) phacti_term_pane_g1

0xa669,	// (0x000b5db7) phacti_term_pane_t1_ParamLimits

0xa669,	// (0x000b5db7) phacti_term_pane_t1

0xe90b,	// (0x000ba059) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe913,	// (0x000ba061) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bb503) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91b,	// (0x000ba069) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91b,	// (0x000ba069) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe931,	// (0x000ba07f) aid_popup_sp_fs_bg_corner_pane

0xcc9a,	// (0x000b83e8) popup_sp_fs_calendar_preview_bg_pane_g1

0x95f0,	// (0x000b4d3e) popup_sp_fs_calendar_preview_bg_pane

0xe939,	// (0x000ba087) popup_sp_fs_calendar_preview_list_pane

0xc82f,	// (0x000b7f7d) bg_main_sp_fs_cale_pane_ParamLimits

0xc82f,	// (0x000b7f7d) bg_main_sp_fs_cale_pane

0xa69c,	// (0x000b5dea) listscroll_cale_mrui_pane_ParamLimits

0xa69c,	// (0x000b5dea) listscroll_cale_mrui_pane

0xa6b1,	// (0x000b5dff) listscroll_sp_fs_schedule_track_pane

0xa6ba,	// (0x000b5e08) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa6ba,	// (0x000b5e08) main_sp_fs_ctrlbar_pane_cp01

0xe941,	// (0x000ba08f) main_sp_fs_ribbon_pane

0xa6cd,	// (0x000b5e1b) popup_sp_fs_cale_preview_window

0x8745,	// (0x000b3e93) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8745,	// (0x000b3e93) list_single_sp_fs_schedule_track_pane

0x9641,	// (0x000b4d8f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9641,	// (0x000b4d8f) bg_sp_fs_highlight_list_pane_cp03

0x8758,	// (0x000b3ea6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8758,	// (0x000b3ea6) list_single_sp_fs_schedule_track_pane_g1

0x8764,	// (0x000b3eb2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8764,	// (0x000b3eb2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bb508) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bb508) list_single_sp_fs_schedule_track_pane_g

0x8770,	// (0x000b3ebe) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8770,	// (0x000b3ebe) list_single_sp_fs_schedule_track_pane_t1

0x8792,	// (0x000b3ee0) sp_fs_schedule_track_pane_ParamLimits

0x8792,	// (0x000b3ee0) sp_fs_schedule_track_pane

0xe949,	// (0x000ba097) sp_fs_schedule_track_pane_g1

0xe951,	// (0x000ba09f) sp_fs_schedule_track_pane_g2

0xe959,	// (0x000ba0a7) sp_fs_schedule_track_pane_g3

0xe961,	// (0x000ba0af) sp_fs_schedule_track_pane_g4

0xe969,	// (0x000ba0b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bb50d) sp_fs_schedule_track_pane_g

0xd6a0,	// (0x000b8dee) bg_sp_fs_schedule_viewer_highlight_g1

0xac00,	// (0x000b634e) bg_sp_fs_schedule_viewer_highlight_g2

0xd6a8,	// (0x000b8df6) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b0,	// (0x000b8dfe) bg_sp_fs_schedule_viewer_highlight_g4

0xd8ca,	// (0x000b9018) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c0,	// (0x000b8e0e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6c8,	// (0x000b8e16) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d0,	// (0x000b8e1e) bg_sp_fs_schedule_viewer_highlight_g8

0xabe0,	// (0x000b632e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bb518) bg_sp_fs_schedule_viewer_highlight_g

0x95f0,	// (0x000b4d3e) bg_main_sp_fs_ribbon_pane

0x87a7,	// (0x000b3ef5) main_sp_fs_ribbon_pane_g1

0xe971,	// (0x000ba0bf) main_sp_fs_ribbon_pane_t1

0x87b0,	// (0x000b3efe) main_sp_fs_ribbon_pane_t2

0xe980,	// (0x000ba0ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bb52b) main_sp_fs_ribbon_pane_t

0xe98f,	// (0x000ba0dd) main_sp_fs_ribbon_scheduler_pane

0xe997,	// (0x000ba0e5) bg_main_sp_fs_ribbon_pane_g1

0xe9a0,	// (0x000ba0ee) bg_main_sp_fs_ribbon_pane_g2

0xe9a9,	// (0x000ba0f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bb532) bg_main_sp_fs_ribbon_pane_g

0xe9b1,	// (0x000ba0ff) main_sp_fs_ribbon_scheduler_pane_g1

0xe9ba,	// (0x000ba108) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c3,	// (0x000ba111) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bb539) main_sp_fs_ribbon_scheduler_pane_g

0xe9cc,	// (0x000ba11a) list_cale_mrui_pane

0x87bf,	// (0x000b3f0d) sp_fs_scroll_pane_cp07_ParamLimits

0x87bf,	// (0x000b3f0d) sp_fs_scroll_pane_cp07

0x87db,	// (0x000b3f29) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x87db,	// (0x000b3f29) bg_sp_fs_schedule_viewer_highlight

0xe9d9,	// (0x000ba127) list_single_sp_fs_schedule_track_pane_cp01

0xe9e1,	// (0x000ba12f) list_sp_fs_schedule_track_pane

0xe9e9,	// (0x000ba137) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e9,	// (0x000ba137) sp_fs_scroll_pane_cp06

0xcc9a,	// (0x000b83e8) bgmain_sp_fs_calendar_pane_g1

0x87ed,	// (0x000b3f3b) list_single_cale_mrui_pane_ParamLimits

0x87ed,	// (0x000b3f3b) list_single_cale_mrui_pane

0xa6df,	// (0x000b5e2d) list_single_cale_mrui_row_pane_ParamLimits

0xa6df,	// (0x000b5e2d) list_single_cale_mrui_row_pane

0xa6f5,	// (0x000b5e43) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa6f5,	// (0x000b5e43) list_single_cale_mrui_row_pane_g1

0xa721,	// (0x000b5e6f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa721,	// (0x000b5e6f) list_single_cale_mrui_row_pane_t1

0x8802,	// (0x000b3f50) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8802,	// (0x000b3f50) list_single_cale_mrui_row_pane_t2

0xa733,	// (0x000b5e81) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa733,	// (0x000b5e81) list_single_cale_mrui_row_pane_t3

0xb859,	// (0x000b6fa7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb859,	// (0x000b6fa7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bb547) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bb547) list_single_cale_mrui_row_pane_t

0x8868,	// (0x000b3fb6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8868,	// (0x000b3fb6) list_single_cmail_header_editor_pane_bg_cp01

0x888c,	// (0x000b3fda) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x888c,	// (0x000b3fda) list_single_cmail_header_editor_pane_bg_cp02

0x88aa,	// (0x000b3ff8) main_radioblah_text_pane_t1_ParamLimits

0x88aa,	// (0x000b3ff8) main_radioblah_text_pane_t1

0xea08,	// (0x000ba156) cam6_indi_pane_cp01

0xea10,	// (0x000ba15e) cam6_mode_pane_cp01

0xea18,	// (0x000ba166) cam6_pano_pane

0xea21,	// (0x000ba16f) cam6_zoom_pane_cp01

0xea2b,	// (0x000ba179) cam6_pano_image_pane

0xea34,	// (0x000ba182) cam6_pano_pane_g1

0xe2fb,	// (0x000b9a49) cam6_pano_pane_g2

0xea3d,	// (0x000ba18b) cam6_pano_pane_g3

0xea46,	// (0x000ba194) cam6_pano_pane_g4

0xd214,	// (0x000b8962) cam6_pano_pane_g5

0xea4f,	// (0x000ba19d) cam6_pano_pane_g6

0xea57,	// (0x000ba1a5) cam6_pano_pane_g7

0xea5f,	// (0x000ba1ad) cam6_pano_pane_g8

0xea68,	// (0x000ba1b6) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bb550) cam6_pano_pane_g

0x95f0,	// (0x000b4d3e) main_browser_tag_pane

0xe8c0,	// (0x000ba00e) grid_navstr_albumart_pane

0xea73,	// (0x000ba1c1) cell_navstr_albumart_pane_ParamLimits

0xea73,	// (0x000ba1c1) cell_navstr_albumart_pane

0xea92,	// (0x000ba1e0) cell_navstr_albumart_pane_g1

0xc63c,	// (0x000b7d8a) cell_navstr_albumart_pane_g2

0xc64c,	// (0x000b7d9a) cell_navstr_albumart_pane_g3

0xc644,	// (0x000b7d92) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bb563) cell_navstr_albumart_pane_g

0x88c5,	// (0x000b4013) bt_list_pane_ParamLimits

0x88c5,	// (0x000b4013) bt_list_pane

0x88db,	// (0x000b4029) bt_list_pane_t1

0x88ea,	// (0x000b4038) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bb56c) bt_list_pane_t

0x95f0,	// (0x000b4d3e) main_cale_prevew_pane

0x88f9,	// (0x000b4047) popup_cale_preview_window_ParamLimits

0x88f9,	// (0x000b4047) popup_cale_preview_window

0x9641,	// (0x000b4d8f) bg_popup_preview_window_pane_cp05_ParamLimits

0x9641,	// (0x000b4d8f) bg_popup_preview_window_pane_cp05

0xea9a,	// (0x000ba1e8) list_cale_preview_pane_ParamLimits

0xea9a,	// (0x000ba1e8) list_cale_preview_pane

0x8916,	// (0x000b4064) list_double_cale_preview_pane_ParamLimits

0x8916,	// (0x000b4064) list_double_cale_preview_pane

0x892a,	// (0x000b4078) list_single_cale_preview_pane_ParamLimits

0x892a,	// (0x000b4078) list_single_cale_preview_pane

0x8942,	// (0x000b4090) list_single_cale_preview_pane_g1

0x894a,	// (0x000b4098) list_single_cale_preview_pane_t1_ParamLimits

0x894a,	// (0x000b4098) list_single_cale_preview_pane_t1

0x895f,	// (0x000b40ad) list_double_cale_preview_pane_g1

0x8967,	// (0x000b40b5) list_double_cale_preview_pane_t1_ParamLimits

0x8967,	// (0x000b40b5) list_double_cale_preview_pane_t1

0x897c,	// (0x000b40ca) list_double_cale_preview_pane_t2_ParamLimits

0x897c,	// (0x000b40ca) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bb571) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bb571) list_double_cale_preview_pane_t

0x95f0,	// (0x000b4d3e) main_ezdial_pane

0x9641,	// (0x000b4d8f) main_sp_fs_email_pane_ParamLimits

0x7f2c,	// (0x000b367a) cmail_ddmenu_btn01_pane_ParamLimits

0x7f2c,	// (0x000b367a) cmail_ddmenu_btn01_pane

0x7f3f,	// (0x000b368d) cmail_ddmenu_btn02_pane_ParamLimits

0x7f3f,	// (0x000b368d) cmail_ddmenu_btn02_pane

0x7f62,	// (0x000b36b0) cmail_ddmenu_btn03_pane_ParamLimits

0x7f62,	// (0x000b36b0) cmail_ddmenu_btn03_pane

0x7f8d,	// (0x000b36db) main_sp_fs_ctrlbar_pane_ParamLimits

0x7fb1,	// (0x000b36ff) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8532,	// (0x000b3c80) list_cmail_body_pane_ParamLimits

0x85a0,	// (0x000b3cee) bg_button_pane_cp12

0xe849,	// (0x000b9f97) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe849,	// (0x000b9f97) list_single_cmail_header_detail_pane_g3

0xa63d,	// (0x000b5d8b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa63d,	// (0x000b5d8b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bb4f4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bb4f4) list_single_cmail_header_detail_pane_t

0xa67e,	// (0x000b5dcc) phacti_term_pane_t2_ParamLimits

0xa67e,	// (0x000b5dcc) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bb4fe) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bb4fe) phacti_term_pane_t

0xeaa6,	// (0x000ba1f4) aid_size_list_single_double

0x8994,	// (0x000b40e2) popup_ezdial_listscroll_window

0x89b0,	// (0x000b40fe) popup_number_entry_window_cp01

0xb2e6,	// (0x000b6a34) bg_popup_call_pane_cp09

0xeab2,	// (0x000ba200) ezdial_list_pane

0xeaba,	// (0x000ba208) scroll_pane_cp23

0xc82f,	// (0x000b7f7d) bg_button_pane_cp028_ParamLimits

0xc82f,	// (0x000b7f7d) bg_button_pane_cp028

0x89be,	// (0x000b410c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x89be,	// (0x000b410c) cmail_ddmenu_btn01_pane_g1

0x89cd,	// (0x000b411b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x89cd,	// (0x000b411b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bb576) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bb576) cmail_ddmenu_btn01_pane_g

0xeac2,	// (0x000ba210) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac2,	// (0x000ba210) cmail_ddmenu_btn01_pane_t1

0xc82f,	// (0x000b7f7d) bg_button_pane_cp029_ParamLimits

0xc82f,	// (0x000b7f7d) bg_button_pane_cp029

0x89dd,	// (0x000b412b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x89dd,	// (0x000b412b) cmail_ddmenu_btn02_pane_g1

0x89f8,	// (0x000b4146) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89f8,	// (0x000b4146) cmail_ddmenu_btn02_pane_t1

0x9641,	// (0x000b4d8f) bg_button_pane_cp031_ParamLimits

0x9641,	// (0x000b4d8f) bg_button_pane_cp031

0x89dd,	// (0x000b412b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x89dd,	// (0x000b412b) cmail_ddmenu_btn03_pane_g1

0x89f8,	// (0x000b4146) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89f8,	// (0x000b4146) cmail_ddmenu_btn03_pane_t1

0x5814,	// (0x000b0f62) cell_dialer2_keypad_pane_t1_ParamLimits

0x582e,	// (0x000b0f7c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x582e,	// (0x000b0f7c) cell_dialer2_keypad_pane_t1_copy1

0x77be,	// (0x000b2f0c) ncimui_group_button_pane

0x9641,	// (0x000b4d8f) main_sp_fs_calendar_pane_ParamLimits

0x8547,	// (0x000b3c95) list_single_cmail_header_caption_pane_ParamLimits

0xa693,	// (0x000b5de1) aid_recal_txt_sm_pane

0x95f0,	// (0x000b4d3e) mian_recal_day_pane

0xa6cd,	// (0x000b5e1b) popup_sp_fs_cale_preview_window_ParamLimits

0xead7,	// (0x000ba225) list_recal_day_pane

0xb8a4,	// (0x000b6ff2) list_single_recal_day_pane_ParamLimits

0xb8a4,	// (0x000b6ff2) list_single_recal_day_pane

0xeafe,	// (0x000ba24c) list_single_recal_day_pane_g1_ParamLimits

0xeafe,	// (0x000ba24c) list_single_recal_day_pane_g1

0xb8b6,	// (0x000b7004) list_single_recal_day_pane_g2_ParamLimits

0xb8b6,	// (0x000b7004) list_single_recal_day_pane_g2

0xb8c2,	// (0x000b7010) list_single_recal_day_pane_g3_ParamLimits

0xb8c2,	// (0x000b7010) list_single_recal_day_pane_g3

0x8a1f,	// (0x000b416d) list_single_recal_day_pane_g4_ParamLimits

0x8a1f,	// (0x000b416d) list_single_recal_day_pane_g4

0xb8ce,	// (0x000b701c) list_single_recal_day_pane_g5_ParamLimits

0xb8ce,	// (0x000b701c) list_single_recal_day_pane_g5

0xb8da,	// (0x000b7028) list_single_recal_day_pane_g6_ParamLimits

0xb8da,	// (0x000b7028) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bb585) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bb585) list_single_recal_day_pane_g

0xb8ee,	// (0x000b703c) list_single_recal_day_pane_t1

0xb900,	// (0x000b704e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bb590) list_single_recal_day_pane_t

0x8a37,	// (0x000b4185) ncimui_query_button_pane_ParamLimits

0x8a37,	// (0x000b4185) ncimui_query_button_pane

0x8a47,	// (0x000b4195) ncimui_query_button_pane_t1_ParamLimits

0x8a47,	// (0x000b4195) ncimui_query_button_pane_t1

0xeb0a,	// (0x000ba258) ncimui_query_button_pane_t2_ParamLimits

0xeb0a,	// (0x000ba258) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bb595) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bb595) ncimui_query_button_pane_t

0x8a5a,	// (0x000b41a8) query_button_pane_ParamLimits

0x8a5a,	// (0x000b41a8) query_button_pane

0x95f0,	// (0x000b4d3e) bg_button_pane_cp0028

0xeb1d,	// (0x000ba26b) query_button_pane_t1

0x37e1,	// (0x000aef2f) main_tport_pane_ParamLimits

0x83f0,	// (0x000b3b3e) bg_popup_window_pane_cp01_ParamLimits

0x83f0,	// (0x000b3b3e) bg_popup_window_pane_cp01

0x840b,	// (0x000b3b59) heading_pane_cp08_ParamLimits

0x840b,	// (0x000b3b59) heading_pane_cp08

0x841e,	// (0x000b3b6c) heading_pane_cp07_ParamLimits

0x841e,	// (0x000b3b6c) heading_pane_cp07

0x84c9,	// (0x000b3c17) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bb4e1) cell_tport_appsw_pane_g

0x9e76,	// (0x000b55c4) input_candi_list_open_g1

0xadc1,	// (0x000b650f) list_cale_time_pane_g6_ParamLimits

0xadc1,	// (0x000b650f) list_cale_time_pane_g6

0x45eb,	// (0x000afd39) aid_size_touch_calib_1_ParamLimits

0x45eb,	// (0x000afd39) aid_size_touch_calib_1

0x45fd,	// (0x000afd4b) aid_size_touch_calib_2_ParamLimits

0x45fd,	// (0x000afd4b) aid_size_touch_calib_2

0x4615,	// (0x000afd63) aid_size_touch_calib_3_ParamLimits

0x4615,	// (0x000afd63) aid_size_touch_calib_3

0x4633,	// (0x000afd81) aid_size_touch_calib_4_ParamLimits

0x4633,	// (0x000afd81) aid_size_touch_calib_4

0x464b,	// (0x000afd99) main_touch_calib_button_group_pane_ParamLimits

0x464b,	// (0x000afd99) main_touch_calib_button_group_pane

0x4663,	// (0x000afdb1) main_touch_calib_pane_g1_ParamLimits

0x4675,	// (0x000afdc3) main_touch_calib_pane_g2_ParamLimits

0x4687,	// (0x000afdd5) main_touch_calib_pane_g3_ParamLimits

0x4699,	// (0x000afde7) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x000baeaa) main_touch_calib_pane_g_ParamLimits

0x46ab,	// (0x000afdf9) main_touch_calib_pane_t1_ParamLimits

0x46c5,	// (0x000afe13) main_touch_calib_pane_t2_ParamLimits

0x46df,	// (0x000afe2d) main_touch_calib_pane_t3_ParamLimits

0x46f3,	// (0x000afe41) main_touch_calib_pane_t4_ParamLimits

0x4709,	// (0x000afe57) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x000baeb3) main_touch_calib_pane_t_ParamLimits

0xcfca,	// (0x000b8718) list_single_fp_cale_pane_g3_ParamLimits

0xcfca,	// (0x000b8718) list_single_fp_cale_pane_g3

0xa2c0,	// (0x000b5a0e) bg_button_pane_cp012_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp03_ParamLimits

0x683f,	// (0x000b1f8d) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2c0,	// (0x000b5a0e) bg_vkb2_func_pane_cp04_ParamLimits

0x774c,	// (0x000b2e9a) main_ncimui_button_group_pane_ParamLimits

0x774c,	// (0x000b2e9a) main_ncimui_button_group_pane

0x77ac,	// (0x000b2efa) main_ncimui_pane_t3_ParamLimits

0x77ac,	// (0x000b2efa) main_ncimui_pane_t3

0xe8d6,	// (0x000ba024) phacti_button_group_pane

0xeaa6,	// (0x000ba1f4) aid_size_list_single_double_ParamLimits

0x8994,	// (0x000b40e2) popup_ezdial_listscroll_window_ParamLimits

0x89b0,	// (0x000b40fe) popup_number_entry_window_cp01_ParamLimits

0x8a6d,	// (0x000b41bb) phacti_button_pane_ParamLimits

0x8a6d,	// (0x000b41bb) phacti_button_pane

0x95f0,	// (0x000b4d3e) bg_button_pane_cp14

0xeb2b,	// (0x000ba279) phacti_button_pane_t1

0x8a7e,	// (0x000b41cc) main_touch_calib_button_pane_ParamLimits

0x8a7e,	// (0x000b41cc) main_touch_calib_button_pane

0xa7cd,	// (0x000b5f1b) bg_button_pane_cp18_ParamLimits

0xa7cd,	// (0x000b5f1b) bg_button_pane_cp18

0xeb39,	// (0x000ba287) main_touch_calib_button_pane_t1_ParamLimits

0xeb39,	// (0x000ba287) main_touch_calib_button_pane_t1

0xeb4f,	// (0x000ba29d) main_touch_calib_button_pane_t2_ParamLimits

0xeb4f,	// (0x000ba29d) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bb59a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bb59a) main_touch_calib_button_pane_t

0x95f0,	// (0x000b4d3e) cell_ncimui_button_pane

0x95f0,	// (0x000b4d3e) bg_button_pane_cp032

0xeb6d,	// (0x000ba2bb) cell_ncimui_button_pane_t1

0xa1f3,	// (0x000b5941) image3_infobar_pane_ParamLimits

0xa1f3,	// (0x000b5941) image3_infobar_pane

0x7b88,	// (0x000b32d6) fs_bigclock_status_pane_ParamLimits

0x7b88,	// (0x000b32d6) fs_bigclock_status_pane

0x7b95,	// (0x000b32e3) main_fs_bigclock_clock_pane_ParamLimits

0x7b95,	// (0x000b32e3) main_fs_bigclock_clock_pane

0x7ba9,	// (0x000b32f7) main_fs_bigclock_indi_pane_ParamLimits

0x7ba9,	// (0x000b32f7) main_fs_bigclock_indi_pane

0x7bc4,	// (0x000b3312) main_fs_bigclock_swipe_pane_ParamLimits

0x7bc4,	// (0x000b3312) main_fs_bigclock_swipe_pane

0x95f0,	// (0x000b4d3e) main_fs_clock_dumped_data

0xe408,	// (0x000b9b56) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe408,	// (0x000b9b56) list_single_fs_bigclock_indicator_pane_g1

0xe432,	// (0x000b9b80) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe432,	// (0x000b9b80) list_single_fs_bigclock_indicator_pane_g2

0xe44c,	// (0x000b9b9a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe44c,	// (0x000b9b9a) list_single_fs_bigclock_indicator_pane_g3

0xe466,	// (0x000b9bb4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe466,	// (0x000b9bb4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x000bb3c8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x000bb3c8) list_single_fs_bigclock_indicator_pane_g

0xe491,	// (0x000b9bdf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe491,	// (0x000b9bdf) list_single_fs_bigclock_indicator_pane_t1

0xe4b9,	// (0x000b9c07) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4b9,	// (0x000b9c07) list_single_fs_bigclock_indicator_pane_t2

0xe4e1,	// (0x000b9c2f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e1,	// (0x000b9c2f) list_single_fs_bigclock_indicator_pane_t3

0xe509,	// (0x000b9c57) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe509,	// (0x000b9c57) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x000bb3d3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x000bb3d3) list_single_fs_bigclock_indicator_pane_t

0xeb7b,	// (0x000ba2c9) image3_infobar_fav_pane_ParamLimits

0xeb7b,	// (0x000ba2c9) image3_infobar_fav_pane

0xeb8b,	// (0x000ba2d9) image3_infobar_loc_pane_ParamLimits

0xeb8b,	// (0x000ba2d9) image3_infobar_loc_pane

0xeba1,	// (0x000ba2ef) image3_infobar_time_pane_ParamLimits

0xeba1,	// (0x000ba2ef) image3_infobar_time_pane

0xcc9a,	// (0x000b83e8) image3_infobar_time_pane_g1

0xebb1,	// (0x000ba2ff) image3_infobar_time_pane_t1

0xcc9a,	// (0x000b83e8) image3_infobar_loc_pane_g1

0xebbf,	// (0x000ba30d) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bb59f) image3_infobar_loc_pane_g

0xebc7,	// (0x000ba315) image3_infobar_loc_pane_t1

0xcc9a,	// (0x000b83e8) image3_infobar_fav_pane_g1

0xebd5,	// (0x000ba323) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bb5a4) image3_infobar_fav_pane_g

0xebdd,	// (0x000ba32b) fs_bigclock_status_battery_pane

0xebe6,	// (0x000ba334) fs_bigclock_status_signal_pane

0xebef,	// (0x000ba33d) fs_bigclock_status_title_pane

0xebf8,	// (0x000ba346) fs_bigclock_status_signal_pane_g1

0xec01,	// (0x000ba34f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bb5a9) fs_bigclock_status_signal_pane_g

0xec09,	// (0x000ba357) fs_bigclock_status_battery_pane_g1

0xec12,	// (0x000ba360) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bb5ae) fs_bigclock_status_battery_pane_g

0xec1a,	// (0x000ba368) fs_bigclock_status_title_pane_t1

0xcc9a,	// (0x000b83e8) main_fs_bigclock_clock_pane_g1

0xec28,	// (0x000ba376) main_fs_bigclock_clock_pane_g2

0xec28,	// (0x000ba376) main_fs_bigclock_clock_pane_g3

0xec28,	// (0x000ba376) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bb5b3) main_fs_bigclock_clock_pane_g

0xec30,	// (0x000ba37e) main_fs_bigclock_clock_pane_t1

0xec3e,	// (0x000ba38c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bb5bc) main_fs_bigclock_clock_pane_t

0x8a93,	// (0x000b41e1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a93,	// (0x000b41e1) list_single_fs_bigclock_indicator_pane

0x8aa4,	// (0x000b41f2) list_single_fs_bigclock_pane_ParamLimits

0x8aa4,	// (0x000b41f2) list_single_fs_bigclock_pane

0xec56,	// (0x000ba3a4) main_fs_bigclock_indicator_pane_t1

0xec65,	// (0x000ba3b3) list_single_fs_bigclock_pane_g1

0xec6d,	// (0x000ba3bb) list_single_fs_bigclock_pane_t1

0xcc9a,	// (0x000b83e8) main_fs_bigclock_swipe_pane_g1

0xecb0,	// (0x000ba3fe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bb5cd) main_fs_bigclock_swipe_pane_g

0xecb8,	// (0x000ba406) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb8,	// (0x000ba406) main_fs_bigclock_swipe_pane_t1

0x24f3,	// (0x000adc41) call_type_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_btmg_pane

0xb84d,	// (0x000b6f9b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb84d,	// (0x000b6f9b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bb540) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bb540) list_single_cale_mrui_row_pane_g

0xb892,	// (0x000b6fe0) list_recal_vselct_arw_lo_pane

0xeaf6,	// (0x000ba244) list_recal_vselct_arw_up_pane

0xb89a,	// (0x000b6fe8) list_recal_vselct_pane

0x8b07,	// (0x000b4255) btmg_button_pane

0x8b11,	// (0x000b425f) main_btmg_pane_g1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp044

0xecd5,	// (0x000ba423) btmg_button_pane_t1

0xc81b,	// (0x000b7f69) aid_listscroll_gen

0x9641,	// (0x000b4d8f) main_cntbar_detail_pane

0xe82a,	// (0x000b9f78) list_cmail_folder_pane

0xe83a,	// (0x000b9f88) sp_fs_scroll_pane_cp03_ParamLimits

0x8b1b,	// (0x000b4269) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b1b,	// (0x000b4269) list_single_fs_dyc_pane_cp01

0xece3,	// (0x000ba431) aid_size_cmail_indent

0xb912,	// (0x000b7060) list_single_dyc_row_pane_cp01

0x8b62,	// (0x000b42b0) cntbar_detail_list_pane_ParamLimits

0x8b62,	// (0x000b42b0) cntbar_detail_list_pane

0x8bb4,	// (0x000b4302) main_cntbar_detail_cont_pane_ParamLimits

0x8bb4,	// (0x000b4302) main_cntbar_detail_cont_pane

0x240a,	// (0x000adb58) scroll_pane_cp032_ParamLimits

0x240a,	// (0x000adb58) scroll_pane_cp032

0x8bc8,	// (0x000b4316) cntbar_detail_list_event_pane_ParamLimits

0x8bc8,	// (0x000b4316) cntbar_detail_list_event_pane

0x8b74,	// (0x000b42c2) cntbar_detail_list_shct_pane

0xac4e,	// (0x000b639c) aid_list_gen

0xecec,	// (0x000ba43a) aid_scroll

0xecf5,	// (0x000ba443) aid_size_touch_scroll_bar

0x6f04,	// (0x000b2652) aid_list_double

0xecfe,	// (0x000ba44c) aid_list_single

0x6ef2,	// (0x000b2640) aid_list_single_lg

0xb91b,	// (0x000b7069) aid_list_z_g_a_sm

0xb923,	// (0x000b7071) aid_list_z_g_d

0x8bd8,	// (0x000b4326) aid_txt_z_prm

0x8be6,	// (0x000b4334) aid_txt_z_prm_cp01

0x8bf4,	// (0x000b4342) aid_txt_z_sec

0x8c02,	// (0x000b4350) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c02,	// (0x000b4350) main_cntbar_detail_cont_pane_g1

0x8c16,	// (0x000b4364) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c16,	// (0x000b4364) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bb5d2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bb5d2) main_cntbar_detail_cont_pane_g

0xed07,	// (0x000ba455) main_cntbar_detail_cont_pane_t1

0xed15,	// (0x000ba463) main_cntbar_detail_cont_pane_t2

0xed23,	// (0x000ba471) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bb5d7) main_cntbar_detail_cont_pane_t

0x8c26,	// (0x000b4374) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c26,	// (0x000b4374) cell_cntbar_detail_list_shct_pane

0xed31,	// (0x000ba47f) cntbar_detail_list_shct_pane_g1

0xed3a,	// (0x000ba488) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bb5de) cntbar_detail_list_shct_pane_g

0x8c38,	// (0x000b4386) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c38,	// (0x000b4386) cntbar_detail_list_event_pane_g1

0x8c44,	// (0x000b4392) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c44,	// (0x000b4392) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bb5e3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bb5e3) cntbar_detail_list_event_pane_g

0x8cb2,	// (0x000b4400) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cb2,	// (0x000b4400) cntbar_detail_list_event_pane_t1

0x8cc7,	// (0x000b4415) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cc7,	// (0x000b4415) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bb5f0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bb5f0) cntbar_detail_list_event_pane_t

0xcc9a,	// (0x000b83e8) cell_cntbar_detail_list_shct_pane_g1

0x2899,	// (0x000adfe7) navi_pane_mv_g3

0x9641,	// (0x000b4d8f) main_cntbar_detail_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_notif_wgt_pane

0xa00b,	// (0x000b5759) aid_tch_main_mp4_pane_g4

0xa1e9,	// (0x000b5937) popup_slider_window_cp02

0xb888,	// (0x000b6fd6) list_recal_day_event_pane

0x8b32,	// (0x000b4280) cntbar_detail_btn_pane_ParamLimits

0x8b32,	// (0x000b4280) cntbar_detail_btn_pane

0x8b4a,	// (0x000b4298) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b4a,	// (0x000b4298) cntbar_detail_btn_pane_cp01

0x8b74,	// (0x000b42c2) cntbar_detail_list_shct_pane_ParamLimits

0x8b84,	// (0x000b42d2) cntbar_detail_pane_g1_ParamLimits

0x8b84,	// (0x000b42d2) cntbar_detail_pane_g1

0x8b98,	// (0x000b42e6) cntbar_detail_pane_t1_ParamLimits

0x8b98,	// (0x000b42e6) cntbar_detail_pane_t1

0x8c50,	// (0x000b439e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c50,	// (0x000b439e) cntbar_detail_list_event_pane_g3

0x8c68,	// (0x000b43b6) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c68,	// (0x000b43b6) cntbar_detail_list_event_pane_g4

0x8c80,	// (0x000b43ce) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c80,	// (0x000b43ce) cntbar_detail_list_event_pane_g5

0x8c98,	// (0x000b43e6) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c98,	// (0x000b43e6) cntbar_detail_list_event_pane_g6

0x8cdc,	// (0x000b442a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cdc,	// (0x000b442a) cntbar_detail_list_event_pane_t3

0x8cee,	// (0x000b443c) popup_notif_wgt_window_ParamLimits

0x8cee,	// (0x000b443c) popup_notif_wgt_window

0x8d07,	// (0x000b4455) popup_submenu_window_cp01_ParamLimits

0x8d07,	// (0x000b4455) popup_submenu_window_cp01

0xb2e6,	// (0x000b6a34) bg_popup_window_pane_cp10

0xed43,	// (0x000ba491) listscroll_notif_wgt_pane

0xed55,	// (0x000ba4a3) list_notif_wgt_window

0xed5e,	// (0x000ba4ac) scroll_pane_cp033

0x8d1b,	// (0x000b4469) list_notif_wgt_row_pane_ParamLimits

0x8d1b,	// (0x000b4469) list_notif_wgt_row_pane

0xed67,	// (0x000ba4b5) aid_size_list_notif_wgt_del

0xed74,	// (0x000ba4c2) list_notif_wgt_row_pane_g1

0xed80,	// (0x000ba4ce) list_notif_wgt_row_pane_g2

0xed8c,	// (0x000ba4da) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bb5f7) list_notif_wgt_row_pane_g

0xed99,	// (0x000ba4e7) list_notif_wgt_row_pane_t1

0xedae,	// (0x000ba4fc) list_notif_wgt_row_pane_t2

0xedc0,	// (0x000ba50e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bb5fe) list_notif_wgt_row_pane_t

0xd8e4,	// (0x000b9032) list_recal_day_event_pane_g1

0xedd2,	// (0x000ba520) list_recal_day_event_pane_t1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp045

0xede1,	// (0x000ba52f) cntbar_detail_btn_pane_t1

0xc82f,	// (0x000b7f7d) main_callh_pane_ParamLimits

0xc82f,	// (0x000b7f7d) main_callh_pane

0x95f0,	// (0x000b4d3e) main_coverflow0_pane

0x95f0,	// (0x000b4d3e) main_wgtman_pane

0x7bd2,	// (0x000b3320) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7bd2,	// (0x000b3320) main_fs_bigclock_unlock_btn_pane

0x84c1,	// (0x000b3c0f) bg_button_pane_cp16

0x84d1,	// (0x000b3c1f) cell_tport_appsw_pane_g3

0x8d2b,	// (0x000b4479) cf0_flow_pane_ParamLimits

0x8d2b,	// (0x000b4479) cf0_flow_pane

0xedef,	// (0x000ba53d) listscroll_cf0_pane

0xedfa,	// (0x000ba548) main_cf0_pane_g1

0x8d40,	// (0x000b448e) main_cf0_pane_t1_ParamLimits

0x8d40,	// (0x000b448e) main_cf0_pane_t1

0x8d57,	// (0x000b44a5) main_cf0_pane_t2_ParamLimits

0x8d57,	// (0x000b44a5) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bb60a) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bb60a) main_cf0_pane_t

0xee0c,	// (0x000ba55a) scroll_pane_cp11

0x8d6e,	// (0x000b44bc) cf0_flow_pane_g1

0x8d7a,	// (0x000b44c8) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bb60f) cf0_flow_pane_g

0x8d86,	// (0x000b44d4) cf0_flow_pane_t1

0x95f0,	// (0x000b4d3e) main_call6_pane

0x95f0,	// (0x000b4d3e) main_calllock_pane

0x8d98,	// (0x000b44e6) call6_btn_grp_pane_ParamLimits

0x8d98,	// (0x000b44e6) call6_btn_grp_pane

0x8db2,	// (0x000b4500) call6_pane_g1_ParamLimits

0x8db2,	// (0x000b4500) call6_pane_g1

0x8dc8,	// (0x000b4516) popup_call6_1st_window_ParamLimits

0x8dc8,	// (0x000b4516) popup_call6_1st_window

0x8dd9,	// (0x000b4527) popup_call6_2nd_window_ParamLimits

0x8dd9,	// (0x000b4527) popup_call6_2nd_window

0x8dea,	// (0x000b4538) cell_call6_btn_pane_ParamLimits

0x8dea,	// (0x000b4538) cell_call6_btn_pane

0xb2e6,	// (0x000b6a34) bg_popup_call2_in_pane_cp03

0xee17,	// (0x000ba565) popup_call6_1st_window_g1

0xee1f,	// (0x000ba56d) popup_call6_1st_window_g2

0xee27,	// (0x000ba575) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bb614) popup_call6_1st_window_g

0xee2f,	// (0x000ba57d) popup_call6_1st_window_t1

0xee3e,	// (0x000ba58c) popup_call6_1st_window_t2

0xee4e,	// (0x000ba59c) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bb61b) popup_call6_1st_window_t

0xb2e6,	// (0x000b6a34) bg_popup_call2_in_pane_cp04

0xee17,	// (0x000ba565) popup_call6_2nd_window_g1

0xee1f,	// (0x000ba56d) popup_call6_2nd_window_g2

0xee27,	// (0x000ba575) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bb614) popup_call6_2nd_window_g

0xee2f,	// (0x000ba57d) popup_call6_2nd_window_t1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp15

0xee5e,	// (0x000ba5ac) cell_call6_btn_pane_g1

0xee67,	// (0x000ba5b5) cell_call6_btn_pane_t1

0x8dfe,	// (0x000b454c) listscroll_wgtman_pane_ParamLimits

0x8dfe,	// (0x000b454c) listscroll_wgtman_pane

0x8e21,	// (0x000b456f) wgtman_btn_pane_ParamLimits

0x8e21,	// (0x000b456f) wgtman_btn_pane

0xb1ac,	// (0x000b68fa) aid_scroll_copy1

0xee76,	// (0x000ba5c4) list_wgtman_pane

0x8e64,	// (0x000b45b2) wgtman_btn_pane_g1_ParamLimits

0x8e64,	// (0x000b45b2) wgtman_btn_pane_g1

0x8e90,	// (0x000b45de) wgtman_btn_pane_t1_ParamLimits

0x8e90,	// (0x000b45de) wgtman_btn_pane_t1

0xee80,	// (0x000ba5ce) wgtman_btn_pane_t2_ParamLimits

0xee80,	// (0x000ba5ce) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bb622) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bb622) wgtman_btn_pane_t

0x8ecd,	// (0x000b461b) listrow_wgtman_pane_ParamLimits

0x8ecd,	// (0x000b461b) listrow_wgtman_pane

0x8edf,	// (0x000b462d) listrow_wgtman_pane_g1

0x8eec,	// (0x000b463a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bb627) listrow_wgtman_pane_g

0x8f0a,	// (0x000b4658) listrow_wgtman_pane_t1

0x8f22,	// (0x000b4670) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bb62c) listrow_wgtman_pane_t

0x8f48,	// (0x000b4696) wait_bar_pane_cp09

0xee97,	// (0x000ba5e5) main_calllock_btn_pane

0xeea1,	// (0x000ba5ef) main_calllock_pane_g1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp17

0xeead,	// (0x000ba5fb) main_calllock_btn_pane_g1

0xeeb6,	// (0x000ba604) main_calllock_btn_pane_t1

0x95f0,	// (0x000b4d3e) main_dialer3_pane

0x95f0,	// (0x000b4d3e) main_fmrd2_pane

0xcc9a,	// (0x000b83e8) main_fs_bigclock_unlock_btn_pane_g1

0xeecd,	// (0x000ba61b) main_fs_bigclock_unlock_btn_pane_t1

0x8f5a,	// (0x000b46a8) area_fmrd2_info_pane_ParamLimits

0x8f5a,	// (0x000b46a8) area_fmrd2_info_pane

0x8f69,	// (0x000b46b7) area_fmrd2_visual_pane_ParamLimits

0x8f69,	// (0x000b46b7) area_fmrd2_visual_pane

0x8f77,	// (0x000b46c5) fmrd2_indi_pane_ParamLimits

0x8f77,	// (0x000b46c5) fmrd2_indi_pane

0x8f84,	// (0x000b46d2) area_fmrd2_visual_pane_g1

0x8f8c,	// (0x000b46da) area_fmrd2_visual_pane_t1

0x8f9c,	// (0x000b46ea) area_fmrd2_visual_pane_t2

0x8fac,	// (0x000b46fa) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bb636) area_fmrd2_visual_pane_t

0x8fbc,	// (0x000b470a) area_fmrd2_info_pane_g1

0x8fc4,	// (0x000b4712) area_fmrd2_info_pane_t1

0x8fd4,	// (0x000b4722) area_fmrd2_info_pane_t2

0x8fe4,	// (0x000b4732) area_fmrd2_info_pane_t3

0x8ff4,	// (0x000b4742) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bb63d) area_fmrd2_info_pane_t

0x9004,	// (0x000b4752) fmrd2_indi_pane_t1

0x9014,	// (0x000b4762) fmrd2_indi_pane_t2

0x9024,	// (0x000b4772) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bb646) fmrd2_indi_pane_t

0xe475,	// (0x000b9bc3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe475,	// (0x000b9bc3) list_single_fs_bigclock_indicator_pane_g5

0xe51e,	// (0x000b9c6c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51e,	// (0x000b9c6c) list_single_fs_bigclock_indicator_pane_t5

0x86e8,	// (0x000b3e36) aid_cell_bcale_month_pane_ParamLimits

0x86e8,	// (0x000b3e36) aid_cell_bcale_month_pane

0x8706,	// (0x000b3e54) bcale_month_pane_ParamLimits

0x8706,	// (0x000b3e54) bcale_month_pane

0x8728,	// (0x000b3e76) bcale_preview_pane_ParamLimits

0x8728,	// (0x000b3e76) bcale_preview_pane

0xec6d,	// (0x000ba3bb) list_single_fs_bigclock_pane_t1_ParamLimits

0xec8c,	// (0x000ba3da) list_single_fs_bigclock_pane_t2_ParamLimits

0xec8c,	// (0x000ba3da) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bb5c8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bb5c8) list_single_fs_bigclock_pane_t

0xeec5,	// (0x000ba613) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bb631) main_fs_bigclock_unlock_btn_pane_g

0x9034,	// (0x000b4782) aid_dia3_key_size_ParamLimits

0x9034,	// (0x000b4782) aid_dia3_key_size

0x9043,	// (0x000b4791) aid_dia3_listrow_size_ParamLimits

0x9043,	// (0x000b4791) aid_dia3_listrow_size

0x9058,	// (0x000b47a6) dia3_keypad_fun_pane_ParamLimits

0x9058,	// (0x000b47a6) dia3_keypad_fun_pane

0x9074,	// (0x000b47c2) dia3_keypad_num_pane_ParamLimits

0x9074,	// (0x000b47c2) dia3_keypad_num_pane

0x908d,	// (0x000b47db) dia3_listscroll_pane_ParamLimits

0x908d,	// (0x000b47db) dia3_listscroll_pane

0x90a0,	// (0x000b47ee) dia3_numentry_pane_ParamLimits

0x90a0,	// (0x000b47ee) dia3_numentry_pane

0xeedb,	// (0x000ba629) dia3_list_pane

0xeee6,	// (0x000ba634) scroll_pane_cp12

0x95f0,	// (0x000b4d3e) bg_dia3_numentry_pane

0x90b4,	// (0x000b4802) dia3_numentry_pane_t1

0x90c3,	// (0x000b4811) cell_dia3_key_num_pane

0x90cb,	// (0x000b4819) cell_dia3_key0_fun_pane_ParamLimits

0x90cb,	// (0x000b4819) cell_dia3_key0_fun_pane

0x90df,	// (0x000b482d) cell_dia3_key1_fun_pane_ParamLimits

0x90df,	// (0x000b482d) cell_dia3_key1_fun_pane

0x90f7,	// (0x000b4845) dia3_listrow_pane

0xe173,	// (0x000b98c1) bg_dia3_numentry_pane_g1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp21

0xeef1,	// (0x000ba63f) cell_dia3_key_num_pane_t1

0xeeff,	// (0x000ba64d) cell_dia3_key_num_pane_t2

0xef0e,	// (0x000ba65c) cell_dia3_key_num_pane_t3

0xef1d,	// (0x000ba66b) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bb64d) cell_dia3_key_num_pane_t

0x95f0,	// (0x000b4d3e) bg_button_pane_cp19

0x9109,	// (0x000b4857) cell_dia3_key0_fun_pane_g1

0x95f0,	// (0x000b4d3e) bg_button_pane_cp20

0x9111,	// (0x000b485f) cell_dia3_key1_fun_pane_g1

0x9119,	// (0x000b4867) area_left_week_number_pane

0x9127,	// (0x000b4875) area_top_day_name_pane

0x913a,	// (0x000b4888) frame_month_view_pane

0xef2c,	// (0x000ba67a) grid_month_view_pane

0x914f,	// (0x000b489d) cell_top_day_name_pane_ParamLimits

0x914f,	// (0x000b489d) cell_top_day_name_pane

0x917e,	// (0x000b48cc) cell_area_left_week_number_pane_ParamLimits

0x917e,	// (0x000b48cc) cell_area_left_week_number_pane

0x9192,	// (0x000b48e0) cell_month_view_pane_ParamLimits

0x9192,	// (0x000b48e0) cell_month_view_pane

0xef3a,	// (0x000ba688) frm_month_g1

0x91c1,	// (0x000b490f) frm_month_g2

0x91d4,	// (0x000b4922) frm_month_g3

0x91e7,	// (0x000b4935) frm_month_g4

0x91fa,	// (0x000b4948) frm_month_g5

0x920d,	// (0x000b495b) frm_month_g6

0x9220,	// (0x000b496e) frm_month_g7

0xef47,	// (0x000ba695) frm_month_g8

0x9235,	// (0x000b4983) frm_month_g9

0x9245,	// (0x000b4993) frm_month_g10

0x9255,	// (0x000b49a3) frm_month_g11

0x9265,	// (0x000b49b3) frm_month_g12

0x9277,	// (0x000b49c5) frm_month_g13

0x928b,	// (0x000b49d9) frm_month_g14

0x929f,	// (0x000b49ed) frm_month_g15

0x92b3,	// (0x000b4a01) frm_month_g16

0x000f,

0xff08,	// (0x000bb656) frm_month_g

0xef54,	// (0x000ba6a2) cell_top_day_name_pane_t1

0x92c7,	// (0x000b4a15) cell_area_left_week_number_pane_g1

0x92d3,	// (0x000b4a21) cell_area_left_week_number_pane_t1

0xceca,	// (0x000b8618) cell_month_view_pane_g1

0x92e6,	// (0x000b4a34) cell_month_view_pane_t1

0x95f0,	// (0x000b4d3e) main_fps_pane

0xe70e,	// (0x000b9e5c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70e,	// (0x000b9e5c) cmail_ddmenu_btn02_pane_cp1

0xe72a,	// (0x000b9e78) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72a,	// (0x000b9e78) cmail_ddmenu_btn02_pane_cp2

0x89ec,	// (0x000b413a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x89ec,	// (0x000b413a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bb57b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bb57b) cmail_ddmenu_btn02_pane_g

0x8a0d,	// (0x000b415b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a0d,	// (0x000b415b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bb580) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bb580) cmail_ddmenu_btn02_pane_t

0x92f9,	// (0x000b4a47) fps_text_pane_ParamLimits

0x92f9,	// (0x000b4a47) fps_text_pane

0x9310,	// (0x000b4a5e) main_fps_pane_g1_ParamLimits

0x9310,	// (0x000b4a5e) main_fps_pane_g1

0x9328,	// (0x000b4a76) wait_bar_pane_cp010_ParamLimits

0x9328,	// (0x000b4a76) wait_bar_pane_cp010

0x933b,	// (0x000b4a89) fps_text_pane_t1_ParamLimits

0x933b,	// (0x000b4a89) fps_text_pane_t1

0xd63b,	// (0x000b8d89) cam4_image_uncrop_pane_g1

0xd644,	// (0x000b8d92) cam4_image_uncrop_pane_g2

0x5d00,	// (0x000b144e) cam4_image_uncrop_pane_g3

0x5d09,	// (0x000b1457) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000bb042) cam4_image_uncrop_pane_g

0x90f7,	// (0x000b4845) dia3_listrow_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_phob2_pane

0x8490,	// (0x000b3bde) cell_tport_appsw_pane_cp02_ParamLimits

0x8490,	// (0x000b3bde) cell_tport_appsw_pane_cp02

0x84a4,	// (0x000b3bf2) cell_tport_appsw_pane_cp03_ParamLimits

0x84a4,	// (0x000b3bf2) cell_tport_appsw_pane_cp03

0x95f0,	// (0x000b4d3e) phob2_contact_card_pane

0x95f0,	// (0x000b4d3e) phob2_listscroll_pane

0xef67,	// (0x000ba6b5) phob2_list_pane

0xef6f,	// (0x000ba6bd) scroll_pane_cp034

0x9353,	// (0x000b4aa1) phob2_cc_data_pane_ParamLimits

0x9353,	// (0x000b4aa1) phob2_cc_data_pane

0x9374,	// (0x000b4ac2) phob2_cc_listscroll_pane_ParamLimits

0x9374,	// (0x000b4ac2) phob2_cc_listscroll_pane

0x9396,	// (0x000b4ae4) list_double_large_graphic_phob2_pane_ParamLimits

0x9396,	// (0x000b4ae4) list_double_large_graphic_phob2_pane

0x93aa,	// (0x000b4af8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x93aa,	// (0x000b4af8) list_double_large_graphic_phob2_pane_g1

0x93c0,	// (0x000b4b0e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x93c0,	// (0x000b4b0e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bb677) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bb677) list_double_large_graphic_phob2_pane_g

0x93cc,	// (0x000b4b1a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x93cc,	// (0x000b4b1a) list_double_large_graphic_phob2_pane_t1

0x93e1,	// (0x000b4b2f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x93e1,	// (0x000b4b2f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bb67c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bb67c) list_double_large_graphic_phob2_pane_t

0x95f0,	// (0x000b4d3e) list_highlight_pane_cp024

0xef77,	// (0x000ba6c5) phob2_cc_button_pane

0x93f3,	// (0x000b4b41) phob2_cc_data_pane_g1_ParamLimits

0x93f3,	// (0x000b4b41) phob2_cc_data_pane_g1

0x9409,	// (0x000b4b57) phob2_cc_data_pane_g2_ParamLimits

0x9409,	// (0x000b4b57) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bb681) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bb681) phob2_cc_data_pane_g

0x941b,	// (0x000b4b69) phob2_cc_data_pane_t1_ParamLimits

0x941b,	// (0x000b4b69) phob2_cc_data_pane_t1

0x9433,	// (0x000b4b81) phob2_cc_data_pane_t2_ParamLimits

0x9433,	// (0x000b4b81) phob2_cc_data_pane_t2

0x944d,	// (0x000b4b9b) phob2_cc_data_pane_t3_ParamLimits

0x944d,	// (0x000b4b9b) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bb686) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bb686) phob2_cc_data_pane_t

0xef7f,	// (0x000ba6cd) phob2_cc_list_pane_ParamLimits

0xef7f,	// (0x000ba6cd) phob2_cc_list_pane

0xd97d,	// (0x000b90cb) scroll_pane_cp035_ParamLimits

0xd97d,	// (0x000b90cb) scroll_pane_cp035

0x9641,	// (0x000b4d8f) bg_button_pane_cp033

0xef8b,	// (0x000ba6d9) phob2_cc_button_pane_g1

0xef97,	// (0x000ba6e5) phob2_cc_button_pane_t1

0xefac,	// (0x000ba6fa) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bb68d) phob2_cc_button_pane_t

0x9467,	// (0x000b4bb5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9467,	// (0x000b4bb5) list_double_large_graphic_phob2_cc_pane

0x947b,	// (0x000b4bc9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x947b,	// (0x000b4bc9) list_double_large_graphic_phob2_cc_pane_g1

0x9487,	// (0x000b4bd5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9487,	// (0x000b4bd5) list_double_large_graphic_phob2_cc_pane_g2

0x9493,	// (0x000b4be1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9493,	// (0x000b4be1) list_double_large_graphic_phob2_cc_pane_g3

0x949f,	// (0x000b4bed) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x949f,	// (0x000b4bed) list_double_large_graphic_phob2_cc_pane_g4

0x94ab,	// (0x000b4bf9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x94ab,	// (0x000b4bf9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bb692) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bb692) list_double_large_graphic_phob2_cc_pane_g

0x94b7,	// (0x000b4c05) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x94b7,	// (0x000b4c05) list_double_large_graphic_phob2_cc_pane_t1

0x94e0,	// (0x000b4c2e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94e0,	// (0x000b4c2e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bb69d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bb69d) list_double_large_graphic_phob2_cc_pane_t

0xefbe,	// (0x000ba70c) list_highlight_pane_cp025_ParamLimits

0xefbe,	// (0x000ba70c) list_highlight_pane_cp025

0x9641,	// (0x000b4d8f) bg_button_pane_cp033_ParamLimits

0xef8b,	// (0x000ba6d9) phob2_cc_button_pane_g1_ParamLimits

0xef97,	// (0x000ba6e5) phob2_cc_button_pane_t1_ParamLimits

0xefac,	// (0x000ba6fa) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bb68d) phob2_cc_button_pane_t_ParamLimits

0x003e,	// (0x000ab78c) popup_wgtman_window

0xd7be,	// (0x000b8f0c) scroll_pane_cp038

0x8e46,	// (0x000b4594) wgtman_btn_pane_cp_01_ParamLimits

0x8e46,	// (0x000b4594) wgtman_btn_pane_cp_01

0xefcc,	// (0x000ba71a) wgtman_content_pane

0xefd5,	// (0x000ba723) wgtman_heading_pane

0x95f0,	// (0x000b4d3e) bg_heading_pane_cp02

0xefde,	// (0x000ba72c) wgtman_heading_pane_g1

0xefe6,	// (0x000ba734) wgtman_heading_pane_t1

0xeff4,	// (0x000ba742) scroll_pane_cp036

0xeffc,	// (0x000ba74a) wgtman_list_pane

0xf004,	// (0x000ba752) wgtman_list_pane_t1_ParamLimits

0xf004,	// (0x000ba752) wgtman_list_pane_t1

0xa247,	// (0x000b5995) cam4_grid_pane

0x69ea,	// (0x000b2138) bg_button_pane_cp015_ParamLimits

0x69fe,	// (0x000b214c) bg_button_pane_cp016_ParamLimits

0x6a11,	// (0x000b215f) bg_button_pane_cp017_ParamLimits

0x6a69,	// (0x000b21b7) popup_vitu2_query_window_g3_ParamLimits

0x6a69,	// (0x000b21b7) popup_vitu2_query_window_g3

0x6b26,	// (0x000b2274) popup_vitu2_query_window_t6_ParamLimits

0x6b26,	// (0x000b2274) popup_vitu2_query_window_t6

0x6b51,	// (0x000b229f) popup_vitu2_query_window_t7_ParamLimits

0x6b51,	// (0x000b229f) popup_vitu2_query_window_t7

0xd63b,	// (0x000b8d89) cam4_grid_pane_g1

0xd644,	// (0x000b8d92) cam4_grid_pane_g2

0xf01e,	// (0x000ba76c) cam4_grid_pane_g3

0xf027,	// (0x000ba775) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bb6a2) cam4_grid_pane_g

0x1207,	// (0x000ac955) aid_placing_vt_slider_lsc_ParamLimits

0x14f4,	// (0x000acc42) vidtel_button_pane_ParamLimits

0x14f4,	// (0x000acc42) vidtel_button_pane

0xf032,	// (0x000ba780) bg_button_pane_cp034

0x9509,	// (0x000b4c57) vidtel_button_pane_g1

0xf03c,	// (0x000ba78a) vidtel_button_pane_t1

0xd8c2,	// (0x000b9010) aid_size_vtel_slider_touch

0xd97d,	// (0x000b90cb) scroll_pane_cp039

0xe1b1,	// (0x000b98ff) ncim_query_button_pane_cp01_ParamLimits

0xe1d0,	// (0x000b991e) ncimui_query_pane_g1_ParamLimits

0x9641,	// (0x000b4d8f) input_focus_pane_cp012_ParamLimits

0xe1f5,	// (0x000b9943) ncim_query_entry_pane_t1_ParamLimits

0xd97d,	// (0x000b90cb) scroll_pane_cp039_ParamLimits

0x280b,	// (0x000adf59) navi_pane_bcale_mc_g1

0x2813,	// (0x000adf61) navi_pane_bcale_mc_t1

0xe773,	// (0x000b9ec1) main_sp_fs_email_pane_g1

0xe77f,	// (0x000b9ecd) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x000bb439) main_sp_fs_email_pane_g

0xe9fb,	// (0x000ba149) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9fb,	// (0x000ba149) list_single_cale_mrui_row_pane_g3

0x8a2d,	// (0x000b417b) list_single_recal_day_pane_g5_event_pane

0xb8e6,	// (0x000b7034) list_single_recal_day_pane_g7

0xf04a,	// (0x000ba798) list_recal_day_event_pane_cp01

0xf053,	// (0x000ba7a1) list_recal_vselct_arw_lo_pane_cp01

0xf05b,	// (0x000ba7a9) list_recal_vselct_arw_up_pane_cp01

0xf063,	// (0x000ba7b1) list_recal_vselct_pane_cp01

0xd8e4,	// (0x000b9032) list_recal_day_event_pane_cp01_g1

0xb92b,	// (0x000b7079) list_recal_day_event_pane_cp01_t1

0xb8ee,	// (0x000b703c) list_single_recal_day_pane_t1_ParamLimits

0xb900,	// (0x000b704e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bb590) list_single_recal_day_pane_t_ParamLimits

0x9cbd,	// (0x000b540b) bg_notes_pane_ParamLimits

0xa7ab,	// (0x000b5ef9) list_notes_pane_ParamLimits

0x038b,	// (0x000abad9) scroll_pane_cp06_ParamLimits

0xa7cd,	// (0x000b5f1b) main_notes_pane_ParamLimits

0x95f0,	// (0x000b4d3e) main_welc_pane

0x9511,	// (0x000b4c5f) main_welc_body_pane_ParamLimits

0x9511,	// (0x000b4c5f) main_welc_body_pane

0x9530,	// (0x000b4c7e) main_welc_opti_pane_ParamLimits

0x9530,	// (0x000b4c7e) main_welc_opti_pane

0x9579,	// (0x000b4cc7) main_welc_pane_t1_ParamLimits

0x9579,	// (0x000b4cc7) main_welc_pane_t1

0xf06d,	// (0x000ba7bb) main_welc_body_row_pane_ParamLimits

0xf06d,	// (0x000ba7bb) main_welc_body_row_pane

0x959b,	// (0x000b4ce9) main_welc_opti_row_pane_ParamLimits

0x959b,	// (0x000b4ce9) main_welc_opti_row_pane

0xf081,	// (0x000ba7cf) main_welc_opti_row_pane_g1

0xf089,	// (0x000ba7d7) main_welc_opti_row_pane_t1

0xf098,	// (0x000ba7e6) main_welc_body_row_pane_t1

0xed4d,	// (0x000ba49b) popup_notif_wgt_heading_pane

0xed67,	// (0x000ba4b5) aid_size_list_notif_wgt_del_ParamLimits

0xed74,	// (0x000ba4c2) list_notif_wgt_row_pane_g1_ParamLimits

0xed80,	// (0x000ba4ce) list_notif_wgt_row_pane_g2_ParamLimits

0xed8c,	// (0x000ba4da) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bb5f7) list_notif_wgt_row_pane_g_ParamLimits

0xed99,	// (0x000ba4e7) list_notif_wgt_row_pane_t1_ParamLimits

0xedae,	// (0x000ba4fc) list_notif_wgt_row_pane_t2_ParamLimits

0xedc0,	// (0x000ba50e) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bb5fe) list_notif_wgt_row_pane_t_ParamLimits

0x8edf,	// (0x000b462d) listrow_wgtman_pane_g1_ParamLimits

0x8eec,	// (0x000b463a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bb627) listrow_wgtman_pane_g_ParamLimits

0x8f0a,	// (0x000b4658) listrow_wgtman_pane_t1_ParamLimits

0x8f22,	// (0x000b4670) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bb62c) listrow_wgtman_pane_t_ParamLimits

0x8f48,	// (0x000b4696) wait_bar_pane_cp09_ParamLimits

0x95f0,	// (0x000b4d3e) bg_popup_heading_pane_cp02

0xf0a7,	// (0x000ba7f5) popup_notif_wgt_heading_pane_g1

0xf0af,	// (0x000ba7fd) popup_notif_wgt_heading_pane_t1

0x95f0,	// (0x000b4d3e) main_vids_pane

0x95f0,	// (0x000b4d3e) vids_listscroll_pane

0x95ab,	// (0x000b4cf9) scroll_pane_cp040

0x95f0,	// (0x000b4d3e) vids_list_pane

0x95b6,	// (0x000b4d04) vids_list_double_pane_ParamLimits

0x95b6,	// (0x000b4d04) vids_list_double_pane

0x95c7,	// (0x000b4d15) vids_list_double_pane_g1

0x95d0,	// (0x000b4d1e) vids_list_double_pane_t1

0x95e0,	// (0x000b4d2e) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bb6b0) vids_list_double_pane_t

0x9641,	// (0x000b4d8f) main_ncimui_pane_ParamLimits

0x7760,	// (0x000b2eae) main_ncimui_pane_g1_ParamLimits

0x776c,	// (0x000b2eba) main_ncimui_pane_g2_ParamLimits

0x776c,	// (0x000b2eba) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x000bb33e) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x000bb33e) main_ncimui_pane_g

0x954f,	// (0x000b4c9d) main_welc_pane_g1_ParamLimits

0x954f,	// (0x000b4c9d) main_welc_pane_g1

0x9564,	// (0x000b4cb2) main_welc_pane_g2_ParamLimits

0x9564,	// (0x000b4cb2) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bb6ab) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bb6ab) main_welc_pane_g

0x9cbd,	// (0x000b540b) listscroll_mce_pane_ParamLimits

0x28eb,	// (0x000ae039) wait_bar_pane_cp10

0xc823,	// (0x000b7f71) main_cale_day_pane_ParamLimits

0xc823,	// (0x000b7f71) main_cale_week_pane_ParamLimits

0x9cbd,	// (0x000b540b) main_messa_pane_ParamLimits

0x4fbe,	// (0x000b070c) main_clock2_btn_pane_ParamLimits

0x4fbe,	// (0x000b070c) main_clock2_btn_pane

0xd052,	// (0x000b87a0) main_clock2_btn_pane_cp01_ParamLimits

0xd052,	// (0x000b87a0) main_clock2_btn_pane_cp01

0xe9cc,	// (0x000ba11a) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x000ba552) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bb605) main_cf0_pane_g

0x9119,	// (0x000b4867) area_left_week_number_pane_ParamLimits

0x9127,	// (0x000b4875) area_top_day_name_pane_ParamLimits

0x913a,	// (0x000b4888) frame_month_view_pane_ParamLimits

0xef2c,	// (0x000ba67a) grid_month_view_pane_ParamLimits

0xef3a,	// (0x000ba688) frm_month_g1_ParamLimits

0x91c1,	// (0x000b490f) frm_month_g2_ParamLimits

0x91d4,	// (0x000b4922) frm_month_g3_ParamLimits

0x91e7,	// (0x000b4935) frm_month_g4_ParamLimits

0x91fa,	// (0x000b4948) frm_month_g5_ParamLimits

0x920d,	// (0x000b495b) frm_month_g6_ParamLimits

0x9220,	// (0x000b496e) frm_month_g7_ParamLimits

0xef47,	// (0x000ba695) frm_month_g8_ParamLimits

0x9235,	// (0x000b4983) frm_month_g9_ParamLimits

0x9245,	// (0x000b4993) frm_month_g10_ParamLimits

0x9255,	// (0x000b49a3) frm_month_g11_ParamLimits

0x9265,	// (0x000b49b3) frm_month_g12_ParamLimits

0x9277,	// (0x000b49c5) frm_month_g13_ParamLimits

0x928b,	// (0x000b49d9) frm_month_g14_ParamLimits

0x929f,	// (0x000b49ed) frm_month_g15_ParamLimits

0x92b3,	// (0x000b4a01) frm_month_g16_ParamLimits

0xff08,	// (0x000bb656) frm_month_g_ParamLimits

0xef54,	// (0x000ba6a2) cell_top_day_name_pane_t1_ParamLimits

0x92c7,	// (0x000b4a15) cell_area_left_week_number_pane_g1_ParamLimits

0x92d3,	// (0x000b4a21) cell_area_left_week_number_pane_t1_ParamLimits

0xceca,	// (0x000b8618) cell_month_view_pane_g1_ParamLimits

0x92e6,	// (0x000b4a34) cell_month_view_pane_t1_ParamLimits

0x9cb5,	// (0x000b5403) main_clock2_btn_pane_g1

0xf0bd,	// (0x000ba80b) main_clock2_btn_pane_t1

0x9641,	// (0x000b4d8f) listscroll_cmail_pane_ParamLimits

0xe773,	// (0x000b9ec1) main_sp_fs_email_pane_g1_ParamLimits

0xe77f,	// (0x000b9ecd) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x000bb439) main_sp_fs_email_pane_g_ParamLimits

0xead7,	// (0x000ba225) list_recal_day_pane_ParamLimits

0xeae8,	// (0x000ba236) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
