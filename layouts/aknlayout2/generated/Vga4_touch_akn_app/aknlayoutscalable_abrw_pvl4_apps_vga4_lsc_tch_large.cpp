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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000ad2ed };

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
0xfc2d,	// (0x000acf1a) Screen

0xfc39,	// (0x000acf26) application_window

0xfc8d,	// (0x000acf7a) area_bottom_pane_ParamLimits

0xfc8d,	// (0x000acf7a) area_bottom_pane

0xfcc6,	// (0x000acfb3) area_top_pane_ParamLimits

0xfcc6,	// (0x000acfb3) area_top_pane

0x9520,	// (0x000b680d) call_video_uplink_pane_ParamLimits

0x9520,	// (0x000b680d) call_video_uplink_pane

0xfd54,	// (0x000ad041) main_pane_ParamLimits

0xfd54,	// (0x000ad041) main_pane

0xc87e,	// (0x000b9b6b) context_pane

0x390b,	// (0x000b0bf8) navi_pane

0x393b,	// (0x000b0c28) popup_cale_events_window_ParamLimits

0x393b,	// (0x000b0c28) popup_cale_events_window

0xc891,	// (0x000b9b7e) popup_mup_playback_window

0x3953,	// (0x000b0c40) signal_pane

0xa892,	// (0x000b7b7f) main_browser_pane

0xaa48,	// (0x000b7d35) main_burst_pane

0x360d,	// (0x000b08fa) main_calc_pane

0xc821,	// (0x000b9b0e) main_cale_day_pane

0x03a4,	// (0x000ad691) main_cale_month_pane

0xc821,	// (0x000b9b0e) main_cale_week_pane

0xaa48,	// (0x000b7d35) main_call_pane

0x995f,	// (0x000b6c4c) main_call_poc_pane

0xaa48,	// (0x000b7d35) main_camera_pane

0xaa48,	// (0x000b7d35) main_chi_dic_pane

0xb220,	// (0x000b850d) main_clock_pane

0x995f,	// (0x000b6c4c) main_fmradio_pane

0xaa48,	// (0x000b7d35) main_graph_messa_pane

0x995f,	// (0x000b6c4c) main_help_pane

0xa892,	// (0x000b7b7f) main_im_pane

0x9bba,	// (0x000b6ea7) main_image_pane_ParamLimits

0x9bba,	// (0x000b6ea7) main_image_pane

0x995f,	// (0x000b6c4c) main_location2_pane

0xaa48,	// (0x000b7d35) main_location_pane

0x9bba,	// (0x000b6ea7) main_messa_pane

0x995f,	// (0x000b6c4c) main_mp2_pane

0xaa48,	// (0x000b7d35) main_mp_pane

0x995f,	// (0x000b6c4c) main_msg_pane

0x995f,	// (0x000b6c4c) main_mup_eq_pane

0x995f,	// (0x000b6c4c) main_mup_pane

0xa892,	// (0x000b7b7f) main_notes_pane

0x995f,	// (0x000b6c4c) main_pec_pane

0x995f,	// (0x000b6c4c) main_phob_pane

0x995f,	// (0x000b6c4c) main_pinb_pane

0x995f,	// (0x000b6c4c) main_postcard_pane

0x995f,	// (0x000b6c4c) main_qdial_pane

0xaa48,	// (0x000b7d35) main_skin_pane

0x995f,	// (0x000b6c4c) main_smil2_pane

0xaa48,	// (0x000b7d35) main_smil_pane

0xaa48,	// (0x000b7d35) main_video_pane

0xaa48,	// (0x000b7d35) main_video_tele_pane

0x9bba,	// (0x000b6ea7) main_viewer_pane_ParamLimits

0x9bba,	// (0x000b6ea7) main_viewer_pane

0xaa48,	// (0x000b7d35) main_vorec_pane

0x3663,	// (0x000b0950) popup_blid_sat_info_window_ParamLimits

0x3663,	// (0x000b0950) popup_blid_sat_info_window

0x36c7,	// (0x000b09b4) popup_dyc_status_message_window_ParamLimits

0x36c7,	// (0x000b09b4) popup_dyc_status_message_window

0x36e1,	// (0x000b09ce) popup_grid_large_graphic_window_ParamLimits

0x36e1,	// (0x000b09ce) popup_grid_large_graphic_window

0x37a3,	// (0x000b0a90) popup_loc_request_window_ParamLimits

0x37a3,	// (0x000b0a90) popup_loc_request_window

0x38df,	// (0x000b0bcc) popup_wml_address_window_ParamLimits

0x38df,	// (0x000b0bcc) popup_wml_address_window

0x344b,	// (0x000b0738) call_muted_g1

0x30df,	// (0x000b03cc) popup_call_audio_conf_window_ParamLimits

0x30df,	// (0x000b03cc) popup_call_audio_conf_window

0x345b,	// (0x000b0748) popup_call_audio_first_window_ParamLimits

0x345b,	// (0x000b0748) popup_call_audio_first_window

0x34d1,	// (0x000b07be) popup_call_audio_in_window_ParamLimits

0x34d1,	// (0x000b07be) popup_call_audio_in_window

0x350d,	// (0x000b07fa) popup_call_audio_out_window_ParamLimits

0x350d,	// (0x000b07fa) popup_call_audio_out_window

0x3547,	// (0x000b0834) popup_call_audio_second_window_ParamLimits

0x3547,	// (0x000b0834) popup_call_audio_second_window

0x359d,	// (0x000b088a) popup_call_audio_wait_window_ParamLimits

0x359d,	// (0x000b088a) popup_call_audio_wait_window

0x35d2,	// (0x000b08bf) popup_number_entry_window_ParamLimits

0x35d2,	// (0x000b08bf) popup_number_entry_window

0x954c,	// (0x000b6839) bg_popup_call_pane_cp05_ParamLimits

0x954c,	// (0x000b6839) bg_popup_call_pane_cp05

0x956c,	// (0x000b6859) popup_number_entry_window_t1

0x957f,	// (0x000b686c) popup_number_entry_window_t2

0x9591,	// (0x000b687e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000bc3b7) popup_number_entry_window_t

0x95a3,	// (0x000b6890) text_title_cp2

0x95b6,	// (0x000b68a3) bg_popup_call_pane_cp_ParamLimits

0x95b6,	// (0x000b68a3) bg_popup_call_pane_cp

0x95c4,	// (0x000b68b1) call_thumbnail_pane

0x95cc,	// (0x000b68b9) popup_call_audio_in_window_g1_ParamLimits

0x95cc,	// (0x000b68b9) popup_call_audio_in_window_g1

0x95d8,	// (0x000b68c5) popup_call_audio_in_window_g2_ParamLimits

0x95d8,	// (0x000b68c5) popup_call_audio_in_window_g2

0x95e4,	// (0x000b68d1) popup_call_audio_in_window_g3_ParamLimits

0x95e4,	// (0x000b68d1) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000bc3c0) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000bc3c0) popup_call_audio_in_window_g

0x95f0,	// (0x000b68dd) popup_call_audio_in_window_t1_ParamLimits

0x95f0,	// (0x000b68dd) popup_call_audio_in_window_t1

0x960c,	// (0x000b68f9) popup_call_audio_in_window_t2_ParamLimits

0x960c,	// (0x000b68f9) popup_call_audio_in_window_t2

0x9628,	// (0x000b6915) popup_call_audio_in_window_t3_ParamLimits

0x9628,	// (0x000b6915) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000bc3c7) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000bc3c7) popup_call_audio_in_window_t

0x95b6,	// (0x000b68a3) bg_popup_call_pane_cp01_ParamLimits

0x95b6,	// (0x000b68a3) bg_popup_call_pane_cp01

0x95c4,	// (0x000b68b1) call_thumbnail_pane_cp02

0x963b,	// (0x000b6928) call_type_pane_cp022

0x9643,	// (0x000b6930) popup_call_audio_out_window_g1_ParamLimits

0x9643,	// (0x000b6930) popup_call_audio_out_window_g1

0x9655,	// (0x000b6942) popup_call_audio_out_window_g2_ParamLimits

0x9655,	// (0x000b6942) popup_call_audio_out_window_g2

0x9661,	// (0x000b694e) popup_call_audio_out_window_g3_ParamLimits

0x9661,	// (0x000b694e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000bc3ce) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000bc3ce) popup_call_audio_out_window_g

0x9673,	// (0x000b6960) popup_call_audio_out_window_t1_ParamLimits

0x9673,	// (0x000b6960) popup_call_audio_out_window_t1

0x968b,	// (0x000b6978) popup_call_audio_out_window_t2_ParamLimits

0x968b,	// (0x000b6978) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000bc3d5) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000bc3d5) popup_call_audio_out_window_t

0x96a0,	// (0x000b698d) bg_popup_call_pane_ParamLimits

0x96a0,	// (0x000b698d) bg_popup_call_pane

0xff13,	// (0x000ad200) call_thumbnail_pane_cp_ParamLimits

0xff13,	// (0x000ad200) call_thumbnail_pane_cp

0x9724,	// (0x000b6a11) call_type_pane_cp01_ParamLimits

0x9724,	// (0x000b6a11) call_type_pane_cp01

0x9768,	// (0x000b6a55) popup_call_audio_first_window_g1_ParamLimits

0x9768,	// (0x000b6a55) popup_call_audio_first_window_g1

0x97b4,	// (0x000b6aa1) popup_call_audio_first_window_g2_ParamLimits

0x97b4,	// (0x000b6aa1) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000bc3da) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000bc3da) popup_call_audio_first_window_g

0x97f8,	// (0x000b6ae5) popup_call_audio_first_window_t1_ParamLimits

0x97f8,	// (0x000b6ae5) popup_call_audio_first_window_t1

0x98a4,	// (0x000b6b91) popup_call_audio_first_window_t4_ParamLimits

0x98a4,	// (0x000b6b91) popup_call_audio_first_window_t4

0x9930,	// (0x000b6c1d) popup_call_audio_first_window_t5_ParamLimits

0x9930,	// (0x000b6c1d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000bc3df) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000bc3df) popup_call_audio_first_window_t

0x995f,	// (0x000b6c4c) bg_popup_call_pane_cp02

0x9969,	// (0x000b6c56) call_type_pane_cp023

0x9971,	// (0x000b6c5e) popup_call_audio_wait_window_g1

0x9979,	// (0x000b6c66) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000bc3e6) popup_call_audio_wait_window_g

0x9981,	// (0x000b6c6e) popup_call_audio_wait_window_t3

0x998f,	// (0x000b6c7c) bg_popup_call_pane_cp03_ParamLimits

0x998f,	// (0x000b6c7c) bg_popup_call_pane_cp03

0x99ef,	// (0x000b6cdc) call_thumbnail_pane_cp011_ParamLimits

0x99ef,	// (0x000b6cdc) call_thumbnail_pane_cp011

0x99fb,	// (0x000b6ce8) call_type_pane_cp034_ParamLimits

0x99fb,	// (0x000b6ce8) call_type_pane_cp034

0x9a37,	// (0x000b6d24) popup_call_audio_second_window_g1_ParamLimits

0x9a37,	// (0x000b6d24) popup_call_audio_second_window_g1

0x9a73,	// (0x000b6d60) popup_call_audio_second_window_g2_ParamLimits

0x9a73,	// (0x000b6d60) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000bc3eb) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000bc3eb) popup_call_audio_second_window_g

0x9aaf,	// (0x000b6d9c) popup_call_audio_second_window_t1_ParamLimits

0x9aaf,	// (0x000b6d9c) popup_call_audio_second_window_t1

0x9b30,	// (0x000b6e1d) popup_call_audio_second_window_t2_ParamLimits

0x9b30,	// (0x000b6e1d) popup_call_audio_second_window_t2

0x9b66,	// (0x000b6e53) popup_call_audio_second_window_t3_ParamLimits

0x9b66,	// (0x000b6e53) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000bc3f0) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000bc3f0) popup_call_audio_second_window_t

0x995f,	// (0x000b6c4c) bg_popup_call_pane_cp04

0x9b9c,	// (0x000b6e89) list_conf_pane

0x9ba4,	// (0x000b6e91) popup_call_audio_conf_window_t1

0x9bb2,	// (0x000b6e9f) call_thumbnail_pane_g1

0x9bba,	// (0x000b6ea7) bg_pinb_pane_ParamLimits

0x9bba,	// (0x000b6ea7) bg_pinb_pane

0x9bc8,	// (0x000b6eb5) find_pinb_pane

0x9bd1,	// (0x000b6ebe) listscroll_pinb_pane_ParamLimits

0x9bd1,	// (0x000b6ebe) listscroll_pinb_pane

0x9be0,	// (0x000b6ecd) pinb_bg_pane_g1

0xff37,	// (0x000ad224) pinb_bg_pane_g2

0xff43,	// (0x000ad230) pinb_bg_pane_g3

0xff4f,	// (0x000ad23c) pinb_bg_pane_g4

0xff5b,	// (0x000ad248) pinb_bg_pane_g5

0xff67,	// (0x000ad254) pinb_bg_pane_g6

0xff72,	// (0x000ad25f) pinb_bg_pane_g7

0xff7d,	// (0x000ad26a) pinb_bg_pane_g8

0xff88,	// (0x000ad275) pinb_bg_pane_g9

0xff92,	// (0x000ad27f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000bc3f7) pinb_bg_pane_g

0xffaf,	// (0x000ad29c) grid_pinb_pane

0xffba,	// (0x000ad2a7) list_pinb_pane

0xffc5,	// (0x000ad2b2) scroll_pane_cp01_ParamLimits

0xffc5,	// (0x000ad2b2) scroll_pane_cp01

0x9bea,	// (0x000b6ed7) find_pinb_pane_g1_ParamLimits

0x9bea,	// (0x000b6ed7) find_pinb_pane_g1

0x9c02,	// (0x000b6eef) find_pinb_pane_t1

0x9c14,	// (0x000b6f01) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000bc411) find_pinb_pane_t

0xa83c,	// (0x000b7b29) input_focus_pane_cp01_ParamLimits

0xa83c,	// (0x000b7b29) input_focus_pane_cp01

0xffd7,	// (0x000ad2c4) cell_pinb_pane_ParamLimits

0xffd7,	// (0x000ad2c4) cell_pinb_pane

0xfff9,	// (0x000ad2e6) cell_pinb_pane_g1_ParamLimits

0xfff9,	// (0x000ad2e6) cell_pinb_pane_g1

0x000e,	// (0x000ad2fb) cell_pinb_pane_g2_ParamLimits

0x000e,	// (0x000ad2fb) cell_pinb_pane_g2

0xa848,	// (0x000b7b35) cell_pinb_pane_g3_ParamLimits

0xa848,	// (0x000b7b35) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000bc416) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000bc416) cell_pinb_pane_g

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp01

0x001a,	// (0x000ad307) list_pinb_item_pane_ParamLimits

0x001a,	// (0x000ad307) list_pinb_item_pane

0x995f,	// (0x000b6c4c) list_highlight_pane_cp02

0x002c,	// (0x000ad319) list_pinb_item_pane_g1_ParamLimits

0x002c,	// (0x000ad319) list_pinb_item_pane_g1

0x0039,	// (0x000ad326) list_pinb_item_pane_g2_ParamLimits

0x0039,	// (0x000ad326) list_pinb_item_pane_g2

0x0045,	// (0x000ad332) list_pinb_item_pane_g3_ParamLimits

0x0045,	// (0x000ad332) list_pinb_item_pane_g3

0x0056,	// (0x000ad343) list_pinb_item_pane_g4_ParamLimits

0x0056,	// (0x000ad343) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000bc41d) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000bc41d) list_pinb_item_pane_g

0x0062,	// (0x000ad34f) list_pinb_item_pane_t1_ParamLimits

0x0062,	// (0x000ad34f) list_pinb_item_pane_t1

0x0097,	// (0x000ad384) calc_display_pane

0x00bf,	// (0x000ad3ac) calc_paper_pane

0x00e2,	// (0x000ad3cf) grid_calc_pane

0x995f,	// (0x000b6c4c) bg_list_pane_cp01

0x0110,	// (0x000ad3fd) clock_g1

0x0118,	// (0x000ad405) clock_g2

0x0001,

0xf139,	// (0x000bc426) clock_g

0x0120,	// (0x000ad40d) clock_t1_ParamLimits

0x0120,	// (0x000ad40d) clock_t1

0x0135,	// (0x000ad422) clock_t2_ParamLimits

0x0135,	// (0x000ad422) clock_t2

0x0147,	// (0x000ad434) clock_t3_ParamLimits

0x0147,	// (0x000ad434) clock_t3

0x0159,	// (0x000ad446) clock_t4_ParamLimits

0x0159,	// (0x000ad446) clock_t4

0x016b,	// (0x000ad458) clock_t5_ParamLimits

0x016b,	// (0x000ad458) clock_t5

0x0180,	// (0x000ad46d) clock_t6_ParamLimits

0x0180,	// (0x000ad46d) clock_t6

0x0192,	// (0x000ad47f) clock_t7_ParamLimits

0x0192,	// (0x000ad47f) clock_t7

0x01a4,	// (0x000ad491) clock_t8_ParamLimits

0x01a4,	// (0x000ad491) clock_t8

0x01b8,	// (0x000ad4a5) clock_t9_ParamLimits

0x01b8,	// (0x000ad4a5) clock_t9

0x0008,

0xf13e,	// (0x000bc42b) clock_t_ParamLimits

0xf13e,	// (0x000bc42b) clock_t

0xa854,	// (0x000b7b41) popup_clock_analogue_window_cp02

0xa854,	// (0x000b7b41) popup_clock_digital_window_cp01

0xa85c,	// (0x000b7b49) listscroll_help_pane

0x995f,	// (0x000b6c4c) phob_pre_status_pane

0xa866,	// (0x000b7b53) grid_qdial_pane

0x9bba,	// (0x000b6ea7) listscroll_mce_pane

0x9bba,	// (0x000b6ea7) bg_notes_pane

0xa870,	// (0x000b7b5d) list_notes_pane

0x01ce,	// (0x000ad4bb) scroll_pane_cp06

0xa87e,	// (0x000b7b6b) bg_calc_paper_pane

0x9c3b,	// (0x000b6f28) list_calc_pane

0xa892,	// (0x000b7b7f) bg_calc_display_pane

0x01e2,	// (0x000ad4cf) calc_display_pane_t1

0x01f4,	// (0x000ad4e1) calc_display_pane_t2

0x9c55,	// (0x000b6f42) calc_display_pane_t3

0x0002,

0xf151,	// (0x000bc43e) calc_display_pane_t

0x0206,	// (0x000ad4f3) cell_calc_pane_ParamLimits

0x0206,	// (0x000ad4f3) cell_calc_pane

0xa89e,	// (0x000b7b8b) bg_calc_paper_pane_g1

0xa8aa,	// (0x000b7b97) bg_calc_paper_pane_g2

0xa8b6,	// (0x000b7ba3) bg_calc_paper_pane_g3

0xa8c2,	// (0x000b7baf) bg_calc_paper_pane_g4

0xa8ce,	// (0x000b7bbb) bg_calc_paper_pane_g5

0x0243,	// (0x000ad530) bg_calc_paper_pane_g6

0x0256,	// (0x000ad543) bg_calc_paper_pane_g7

0x0269,	// (0x000ad556) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000bc445) bg_calc_paper_pane_g

0x027a,	// (0x000ad567) calc_bg_paper_pane_g9

0x028b,	// (0x000ad578) list_calc_item_pane_ParamLimits

0x028b,	// (0x000ad578) list_calc_item_pane

0xa8da,	// (0x000b7bc7) list_calc_item_pane_g1

0x9c67,	// (0x000b6f54) list_calc_item_pane_t1_ParamLimits

0x9c67,	// (0x000b6f54) list_calc_item_pane_t1

0x02a3,	// (0x000ad590) list_calc_item_pane_t2_ParamLimits

0x02a3,	// (0x000ad590) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000bc456) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000bc456) list_calc_item_pane_t

0xa8e7,	// (0x000b7bd4) cell_calc_pane_g1

0xa8f1,	// (0x000b7bde) grid_highlight_pane_cp02

0xa913,	// (0x000b7c00) bg_calc_display_pane_g1

0x9c79,	// (0x000b6f66) bg_calc_display_pane_g2

0xa91c,	// (0x000b7c09) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000bc460) bg_calc_display_pane_g

0x02d5,	// (0x000ad5c2) cell_qdial_pane_ParamLimits

0x02d5,	// (0x000ad5c2) cell_qdial_pane

0x02e9,	// (0x000ad5d6) cell_qdial_pane_g1_ParamLimits

0x02e9,	// (0x000ad5d6) cell_qdial_pane_g1

0x02ff,	// (0x000ad5ec) cell_qdial_pane_g2_ParamLimits

0x02ff,	// (0x000ad5ec) cell_qdial_pane_g2

0xa925,	// (0x000b7c12) cell_qdial_pane_g3_ParamLimits

0xa925,	// (0x000b7c12) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000bc467) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000bc467) cell_qdial_pane_g

0x0326,	// (0x000ad613) cell_qdial_pane_t1_ParamLimits

0x0326,	// (0x000ad613) cell_qdial_pane_t1

0x033e,	// (0x000ad62b) cell_qdial_pane_t2_ParamLimits

0x033e,	// (0x000ad62b) cell_qdial_pane_t2

0x0351,	// (0x000ad63e) cell_qdial_pane_t3_ParamLimits

0x0351,	// (0x000ad63e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000bc470) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000bc470) cell_qdial_pane_t

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp04

0xa931,	// (0x000b7c1e) thumbnail_qdial_pane_ParamLimits

0xa931,	// (0x000b7c1e) thumbnail_qdial_pane

0xa98d,	// (0x000b7c7a) list_help_pane

0xa996,	// (0x000b7c83) scroll_pane_cp02

0x0364,	// (0x000ad651) help_list_pane_t1_ParamLimits

0x0364,	// (0x000ad651) help_list_pane_t1

0x9c83,	// (0x000b6f70) bg_notes_pane_g2

0x9c8b,	// (0x000b6f78) bg_notes_pane_g3

0x9c93,	// (0x000b6f80) notes_bg_pane_g1

0x9c9b,	// (0x000b6f88) notes_bg_pane_g4

0x9ca3,	// (0x000b6f90) notes_bg_pane_g5

0x9cab,	// (0x000b6f98) notes_bg_pane_g6

0x9cb3,	// (0x000b6fa0) notes_bg_pane_g7

0x9cbb,	// (0x000b6fa8) notes_bg_pane_g8

0x9cc3,	// (0x000b6fb0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000bc48e) notes_bg_pane_g

0x0382,	// (0x000ad66f) list_notes_text_pane_ParamLimits

0x0382,	// (0x000ad66f) list_notes_text_pane

0xa99f,	// (0x000b7c8c) list_notes_text_pane_g1

0x0396,	// (0x000ad683) list_notes_text_pane_t1

0x03a4,	// (0x000ad691) listscroll_cale_week_pane

0x03da,	// (0x000ad6c7) bg_cale_heading_pane

0x0403,	// (0x000ad6f0) bg_cale_pane_cp01

0x0425,	// (0x000ad712) cale_week_corner_pane

0x0444,	// (0x000ad731) cale_week_day_heading_pane

0x0472,	// (0x000ad75f) cale_week_scroll_pane_g1

0x0496,	// (0x000ad783) cale_week_scroll_pane_g2

0x04ae,	// (0x000ad79b) cale_week_scroll_pane_g3

0x04c6,	// (0x000ad7b3) cale_week_scroll_pane_g4

0x04e2,	// (0x000ad7cf) cale_week_scroll_pane_g5

0x0502,	// (0x000ad7ef) cale_week_scroll_pane_g6

0x0522,	// (0x000ad80f) cale_week_scroll_pane_g7

0x0546,	// (0x000ad833) cale_week_scroll_pane_g8

0x056a,	// (0x000ad857) cale_week_scroll_pane_g9

0x0587,	// (0x000ad874) cale_week_scroll_pane_g10

0x05a4,	// (0x000ad891) cale_week_scroll_pane_g11

0x05c1,	// (0x000ad8ae) cale_week_scroll_pane_g12

0x05de,	// (0x000ad8cb) cale_week_scroll_pane_g13

0x05fb,	// (0x000ad8e8) cale_week_scroll_pane_g14

0x0624,	// (0x000ad911) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000bc49d) cale_week_scroll_pane_g

0x0671,	// (0x000ad95e) cale_week_time_pane

0x0695,	// (0x000ad982) grid_cale_week_pane

0xa9cb,	// (0x000b7cb8) scroll_pane_cp08

0x06cc,	// (0x000ad9b9) cell_cale_week_pane_ParamLimits

0x06cc,	// (0x000ad9b9) cell_cale_week_pane

0x075c,	// (0x000ada49) cale_week_day_heading_pane_t1

0x07a6,	// (0x000ada93) cale_week_day_heading_pane_t2

0x07f5,	// (0x000adae2) cale_week_day_heading_pane_t3

0x0844,	// (0x000adb31) cale_week_day_heading_pane_t4

0x0893,	// (0x000adb80) cale_week_day_heading_pane_t5

0x08e6,	// (0x000adbd3) cale_week_day_heading_pane_t6

0x093d,	// (0x000adc2a) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000bc4be) cale_week_day_heading_pane_t

0xa9ed,	// (0x000b7cda) bg_cale_side_pane

0x0987,	// (0x000adc74) cale_week_time_pane_t1

0x09c1,	// (0x000adcae) cale_week_time_pane_t2

0x09fb,	// (0x000adce8) cale_week_time_pane_t3

0x0a35,	// (0x000add22) cale_week_time_pane_t4

0x0a6f,	// (0x000add5c) cale_week_time_pane_t5

0x0aa9,	// (0x000add96) cale_week_time_pane_t6

0x0ae3,	// (0x000addd0) cale_week_time_pane_t7

0x0b1d,	// (0x000ade0a) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000bc4cd) cale_week_time_pane_t

0x0b5d,	// (0x000ade4a) cell_cale_week_pane_g2

0x0b7c,	// (0x000ade69) cell_cale_week_pane_g3_ParamLimits

0x0b7c,	// (0x000ade69) cell_cale_week_pane_g3

0xa9fb,	// (0x000b7ce8) grid_highlight_pane_cp07

0xaa03,	// (0x000b7cf0) listscroll_gms_pane

0xaa0d,	// (0x000b7cfa) grid_gms_pane

0xaa16,	// (0x000b7d03) listscroll_gms_pane_g1

0xaa1e,	// (0x000b7d0b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000bc4de) listscroll_gms_pane_g

0x0b94,	// (0x000ade81) scroll_pane_cp010

0x0b9f,	// (0x000ade8c) cell_gms_pane_ParamLimits

0x0b9f,	// (0x000ade8c) cell_gms_pane

0x0bb9,	// (0x000adea6) cell_gms_pane_g1

0xaa26,	// (0x000b7d13) cell_gms_pane_g2

0xaa2e,	// (0x000b7d1b) cell_gms_pane_g3

0xaa37,	// (0x000b7d24) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000bc4e3) cell_gms_pane_g

0xaa40,	// (0x000b7d2d) grid_highlight_pane_cp09

0x33f3,	// (0x000b06e0) phob_pre_status_pane_g1

0x33fb,	// (0x000b06e8) phob_pre_status_pane_g2

0x3403,	// (0x000b06f0) phob_pre_status_pane_g3

0x340b,	// (0x000b06f8) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000bc8ce) phob_pre_status_pane_g

0x341b,	// (0x000b0708) phob_pre_status_pane_t1

0x342b,	// (0x000b0718) phob_pre_status_pane_t2

0x343b,	// (0x000b0728) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000bc8d9) phob_pre_status_pane_t

0xaa48,	// (0x000b7d35) bg_list_pane_cp05

0x0bc9,	// (0x000adeb6) grid_vorec_pane

0x0bd5,	// (0x000adec2) vorec_t1

0x0be3,	// (0x000aded0) vorec_t2

0x0bf1,	// (0x000adede) vorec_t3

0x0bff,	// (0x000adeec) vorec_t4

0x94c7,	// (0x000b67b4) vorec_t5

0x94d5,	// (0x000b67c2) vorec_t6

0x0004,

0xf1ff,	// (0x000bc4ec) vorec_t

0x94e3,	// (0x000b67d0) wait_bar_pane_cp01

0x0c1b,	// (0x000adf08) cell_vorec_pane_ParamLimits

0x0c1b,	// (0x000adf08) cell_vorec_pane

0x9ccb,	// (0x000b6fb8) cell_vorec_pane_g1

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp05

0x0c46,	// (0x000adf33) cams_zoom_pane

0x0c55,	// (0x000adf42) image_vga_pane

0x0c6f,	// (0x000adf5c) main_camera_pane_g1

0x0c81,	// (0x000adf6e) main_camera_pane_g2

0x0c91,	// (0x000adf7e) main_camera_pane_g3

0x0ca5,	// (0x000adf92) main_camera_pane_g4

0x0cb9,	// (0x000adfa6) main_camera_pane_g5

0x0ccd,	// (0x000adfba) main_camera_pane_g6

0x0ce1,	// (0x000adfce) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000bc4f7) main_camera_pane_g

0x0cf5,	// (0x000adfe2) main_camera_pane_t1

0x0d0b,	// (0x000adff8) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000bc508) main_camera_pane_t

0x0d49,	// (0x000ae036) cams_zoom_pane_cp_ParamLimits

0x0d49,	// (0x000ae036) cams_zoom_pane_cp

0x0d71,	// (0x000ae05e) image_cif_pane_ParamLimits

0x0d71,	// (0x000ae05e) image_cif_pane

0x0dac,	// (0x000ae099) image_subqcif_pane

0x0db6,	// (0x000ae0a3) main_video_pane_g1_ParamLimits

0x0db6,	// (0x000ae0a3) main_video_pane_g1

0x0dda,	// (0x000ae0c7) main_video_pane_g2_ParamLimits

0x0dda,	// (0x000ae0c7) main_video_pane_g2

0x0e10,	// (0x000ae0fd) main_video_pane_g3_ParamLimits

0x0e10,	// (0x000ae0fd) main_video_pane_g3

0x0e3e,	// (0x000ae12b) main_video_pane_g4_ParamLimits

0x0e3e,	// (0x000ae12b) main_video_pane_g4

0x0e6c,	// (0x000ae159) main_video_pane_g5_ParamLimits

0x0e6c,	// (0x000ae159) main_video_pane_g5

0xaa5c,	// (0x000b7d49) main_video_pane_g6_ParamLimits

0xaa5c,	// (0x000b7d49) main_video_pane_g6

0x0006,

0xf220,	// (0x000bc50d) main_video_pane_g_ParamLimits

0xf220,	// (0x000bc50d) main_video_pane_g

0x0e95,	// (0x000ae182) main_video_pane_t1_ParamLimits

0x0e95,	// (0x000ae182) main_video_pane_t1

0xaa76,	// (0x000b7d63) cams_zoom_pane_g1

0xaa7f,	// (0x000b7d6c) cams_zoom_pane_g2

0xaa88,	// (0x000b7d75) cams_zoom_pane_g3

0xaa91,	// (0x000b7d7e) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000bc51c) cams_zoom_pane_g

0x0ef2,	// (0x000ae1df) grid_cams_pane

0x0f0c,	// (0x000ae1f9) linegrid_cams_pane

0x0f1e,	// (0x000ae20b) cell_cams_pane_ParamLimits

0x0f1e,	// (0x000ae20b) cell_cams_pane

0xaa9a,	// (0x000b7d87) cams_burst_image_pane

0xaaa2,	// (0x000b7d8f) cell_cams_pane_g1

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp03

0xa8e7,	// (0x000b7bd4) mp_bg_pane_g1

0x995f,	// (0x000b6c4c) bg_list_pane_cp03

0xc744,	// (0x000b9a31) bg_mp_pane

0xc74c,	// (0x000b9a39) grid_mp_pane

0xc754,	// (0x000b9a41) media_player_g1

0xc75e,	// (0x000b9a4b) media_player_t1

0xc76c,	// (0x000b9a59) media_player_t2

0xc77a,	// (0x000b9a67) media_player_t3

0xc788,	// (0x000b9a75) media_player_t4

0xc796,	// (0x000b9a83) media_player_t5

0xc7a4,	// (0x000b9a91) media_player_t6

0xc7b2,	// (0x000b9a9f) media_player_t7

0x0006,

0xf5cb,	// (0x000bc8b8) media_player_t

0xc7c0,	// (0x000b9aad) wait_bar_pane_cp02

0xf5b0,	// (0x000bc89d) main_usb_pane_t

0x33ea,	// (0x000b06d7) cell_mp_pane

0xa8e7,	// (0x000b7bd4) cell_mp_pane_g1

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp06

0xaaaa,	// (0x000b7d97) grid_skin_colour_pane

0xaab2,	// (0x000b7d9f) list_highlight_pane_cp03

0x1057,	// (0x000ae344) skin_g1

0xaaba,	// (0x000b7da7) skin_t1

0xaac9,	// (0x000b7db6) skin_t2

0x0001,

0xf264,	// (0x000bc551) skin_t

0x105f,	// (0x000ae34c) cell_skin_colour_pane_ParamLimits

0x105f,	// (0x000ae34c) cell_skin_colour_pane

0xaad7,	// (0x000b7dc4) cell_skin_colour_pane_g1

0x10d2,	// (0x000ae3bf) call_video_g1_ParamLimits

0x10d2,	// (0x000ae3bf) call_video_g1

0x10ee,	// (0x000ae3db) call_video_g2_ParamLimits

0x10ee,	// (0x000ae3db) call_video_g2

0x0001,

0xf269,	// (0x000bc556) call_video_g_ParamLimits

0xf269,	// (0x000bc556) call_video_g

0x1133,	// (0x000ae420) call_video_uplink_pane_cp1_ParamLimits

0x1133,	// (0x000ae420) call_video_uplink_pane_cp1

0xaae9,	// (0x000b7dd6) call_video_uplink_pane_cp2

0x11d4,	// (0x000ae4c1) video_down_crop_pane_ParamLimits

0x11d4,	// (0x000ae4c1) video_down_crop_pane

0x12bd,	// (0x000ae5aa) video_down_pane_ParamLimits

0x12bd,	// (0x000ae5aa) video_down_pane

0xaaf1,	// (0x000b7dde) video_down_subqcif_pane_ParamLimits

0xaaf1,	// (0x000b7dde) video_down_subqcif_pane

0xab0b,	// (0x000b7df8) video_down_subqcif_pane_cp_ParamLimits

0xab0b,	// (0x000b7df8) video_down_subqcif_pane_cp

0xab33,	// (0x000b7e20) im_reading_pane_ParamLimits

0xab33,	// (0x000b7e20) im_reading_pane

0x13c6,	// (0x000ae6b3) im_writing_pane_ParamLimits

0x13c6,	// (0x000ae6b3) im_writing_pane

0x13e2,	// (0x000ae6cf) im_reading_pane_t1

0xab4d,	// (0x000b7e3a) list_im_pane

0xab5e,	// (0x000b7e4b) scroll_pane_cp07

0x141e,	// (0x000ae70b) im_writing_pane_t1_ParamLimits

0x141e,	// (0x000ae70b) im_writing_pane_t1

0xab77,	// (0x000b7e64) im_writing_pane_t2_ParamLimits

0xab77,	// (0x000b7e64) im_writing_pane_t2

0x0001,

0xf273,	// (0x000bc560) im_writing_pane_t_ParamLimits

0xf273,	// (0x000bc560) im_writing_pane_t

0x995f,	// (0x000b6c4c) input_focus_pane_cp04

0x995f,	// (0x000b6c4c) input_focus_pane_cp05

0x1433,	// (0x000ae720) list_im_single_pane_ParamLimits

0x1433,	// (0x000ae720) list_im_single_pane

0x1449,	// (0x000ae736) list_single_im_pane_t1

0x33aa,	// (0x000b0697) blid_accuracy_pane

0x33b2,	// (0x000b069f) blid_compass_pane

0x33bc,	// (0x000b06a9) main_location_t1

0x33cc,	// (0x000b06b9) main_location_t2

0x33dc,	// (0x000b06c9) main_location_t3

0x0002,

0xf5da,	// (0x000bc8c7) main_location_t

0x995f,	// (0x000b6c4c) aid_levels_location

0xa8e7,	// (0x000b7bd4) blid_accuracy_pane_g1

0xa8e7,	// (0x000b7bd4) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000bc5c2) blid_accuracy_pane_g

0xabbf,	// (0x000b7eac) wml_content_pane

0xabfd,	// (0x000b7eea) wml_button_pane_ParamLimits

0xabfd,	// (0x000b7eea) wml_button_pane

0x1458,	// (0x000ae745) wml_list_single_large_pane_ParamLimits

0x1458,	// (0x000ae745) wml_list_single_large_pane

0x146e,	// (0x000ae75b) wml_list_single_medium_pane_ParamLimits

0x146e,	// (0x000ae75b) wml_list_single_medium_pane

0x1485,	// (0x000ae772) wml_list_single_small_pane_ParamLimits

0x1485,	// (0x000ae772) wml_list_single_small_pane

0xac11,	// (0x000b7efe) wml_selection_box_pane_ParamLimits

0xac11,	// (0x000b7efe) wml_selection_box_pane

0xac24,	// (0x000b7f11) wml_list_single_pane_t1

0xac33,	// (0x000b7f20) wml_list_single_medium_pane_t1

0xac42,	// (0x000b7f2f) wml_list_single_large_pane_t1

0xac51,	// (0x000b7f3e) input_focus_pane_cp02_ParamLimits

0xac51,	// (0x000b7f3e) input_focus_pane_cp02

0xac64,	// (0x000b7f51) wml_selection_box_pane_g1

0xac6d,	// (0x000b7f5a) wml_selection_box_pane_t1_ParamLimits

0xac6d,	// (0x000b7f5a) wml_selection_box_pane_t1

0x9bba,	// (0x000b6ea7) bg_wml_button_pane_ParamLimits

0x9bba,	// (0x000b6ea7) bg_wml_button_pane

0xac85,	// (0x000b7f72) wml_button_pane_g1

0xac8d,	// (0x000b7f7a) wml_button_pane_t1

0xac85,	// (0x000b7f72) wml_button_bg_pane_g1

0xac9d,	// (0x000b7f8a) wml_button_bg_pane_g2

0xaca5,	// (0x000b7f92) wml_button_bg_pane_g3

0xacad,	// (0x000b7f9a) wml_button_bg_pane_g4

0xacb5,	// (0x000b7fa2) wml_button_bg_pane_g5

0xacbd,	// (0x000b7faa) wml_button_bg_pane_g6

0xacc5,	// (0x000b7fb2) wml_button_bg_pane_g7

0xaccd,	// (0x000b7fba) wml_button_bg_pane_g8

0xacd5,	// (0x000b7fc2) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000bc565) wml_button_bg_pane_g

0x14a1,	// (0x000ae78e) bg_list_pane_cp02

0xacdd,	// (0x000b7fca) mce_header_pane_ParamLimits

0xacdd,	// (0x000b7fca) mce_header_pane

0xacf3,	// (0x000b7fe0) mce_icon_pane

0xacf3,	// (0x000b7fe0) mce_image_pane

0xacfc,	// (0x000b7fe9) mce_text_pane_ParamLimits

0xacfc,	// (0x000b7fe9) mce_text_pane

0x14ab,	// (0x000ae798) scroll_pane_cp03

0xabf5,	// (0x000b7ee2) scroll_pane_cp04

0xad0f,	// (0x000b7ffc) scroll_pane_cp05_ParamLimits

0xad0f,	// (0x000b7ffc) scroll_pane_cp05

0x14b5,	// (0x000ae7a2) mce_header_field_pane_ParamLimits

0x14b5,	// (0x000ae7a2) mce_header_field_pane

0x14ce,	// (0x000ae7bb) mce_header_field_pane_2_ParamLimits

0x14ce,	// (0x000ae7bb) mce_header_field_pane_2

0x14e4,	// (0x000ae7d1) mce_header_field_pane_3

0x14ec,	// (0x000ae7d9) list_single_mce_message_pane_ParamLimits

0x14ec,	// (0x000ae7d9) list_single_mce_message_pane

0x1505,	// (0x000ae7f2) list_single_mce_smart_pane_ParamLimits

0x1505,	// (0x000ae7f2) list_single_mce_smart_pane

0xad1b,	// (0x000b8008) input_focus_pane_cp03

0xad24,	// (0x000b8011) list_header_data_pane

0x1529,	// (0x000ae816) mce_header_field_pane_t1

0x1539,	// (0x000ae826) list_single_mce_header_pane_ParamLimits

0x1539,	// (0x000ae826) list_single_mce_header_pane

0xad2c,	// (0x000b8019) list_single_mce_header_pane_t1

0xad3b,	// (0x000b8028) list_single_mce_message_pane_g1

0xad43,	// (0x000b8030) list_single_mce_message_pane_t1

0x1573,	// (0x000ae860) bg_cale_heading_pane_cp01_ParamLimits

0x1573,	// (0x000ae860) bg_cale_heading_pane_cp01

0xad51,	// (0x000b803e) bg_cale_pane_cp02_ParamLimits

0xad51,	// (0x000b803e) bg_cale_pane_cp02

0x15ba,	// (0x000ae8a7) cale_month_corner_pane

0x15d9,	// (0x000ae8c6) cale_month_day_heading_pane_ParamLimits

0x15d9,	// (0x000ae8c6) cale_month_day_heading_pane

0x1638,	// (0x000ae925) cale_month_pane_g1_ParamLimits

0x1638,	// (0x000ae925) cale_month_pane_g1

0x1674,	// (0x000ae961) cale_month_pane_g2_ParamLimits

0x1674,	// (0x000ae961) cale_month_pane_g2

0x16b0,	// (0x000ae99d) cale_month_pane_g3_ParamLimits

0x16b0,	// (0x000ae99d) cale_month_pane_g3

0x1704,	// (0x000ae9f1) cale_month_pane_g4_ParamLimits

0x1704,	// (0x000ae9f1) cale_month_pane_g4

0x1758,	// (0x000aea45) cale_month_pane_g5_ParamLimits

0x1758,	// (0x000aea45) cale_month_pane_g5

0x17b4,	// (0x000aeaa1) cale_month_pane_g6_ParamLimits

0x17b4,	// (0x000aeaa1) cale_month_pane_g6

0x1818,	// (0x000aeb05) cale_month_pane_g7_ParamLimits

0x1818,	// (0x000aeb05) cale_month_pane_g7

0x1884,	// (0x000aeb71) cale_month_pane_g8_ParamLimits

0x1884,	// (0x000aeb71) cale_month_pane_g8

0x18f0,	// (0x000aebdd) cale_month_pane_g9_ParamLimits

0x18f0,	// (0x000aebdd) cale_month_pane_g9

0x194e,	// (0x000aec3b) cale_month_pane_g10_ParamLimits

0x194e,	// (0x000aec3b) cale_month_pane_g10

0x19a0,	// (0x000aec8d) cale_month_pane_g11_ParamLimits

0x19a0,	// (0x000aec8d) cale_month_pane_g11

0x19f2,	// (0x000aecdf) cale_month_pane_g12_ParamLimits

0x19f2,	// (0x000aecdf) cale_month_pane_g12

0x1a4a,	// (0x000aed37) cale_month_pane_g13_ParamLimits

0x1a4a,	// (0x000aed37) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000bc578) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000bc578) cale_month_pane_g

0x1aa2,	// (0x000aed8f) cale_month_week_pane

0x1ac6,	// (0x000aedb3) grid_cale_month_pane_ParamLimits

0x1ac6,	// (0x000aedb3) grid_cale_month_pane

0x1b1c,	// (0x000aee09) cale_month_day_heading_pane_t1

0x1ba2,	// (0x000aee8f) cale_month_day_heading_pane_t2

0x1c33,	// (0x000aef20) cale_month_day_heading_pane_t3

0x1cc4,	// (0x000aefb1) cale_month_day_heading_pane_t4

0x1d55,	// (0x000af042) cale_month_day_heading_pane_t5

0x1df6,	// (0x000af0e3) cale_month_day_heading_pane_t6

0x1e9b,	// (0x000af188) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000bc593) cale_month_day_heading_pane_t

0xa9ed,	// (0x000b7cda) bg_cale_side_pane_cp01

0x1f44,	// (0x000af231) cale_month_week_pane_t1

0x1f5d,	// (0x000af24a) cale_month_week_pane_t2

0x1f76,	// (0x000af263) cale_month_week_pane_t3

0x1f8f,	// (0x000af27c) cale_month_week_pane_t4

0x1fa8,	// (0x000af295) cale_month_week_pane_t5

0x1fc1,	// (0x000af2ae) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000bc5a2) cale_month_week_pane_t

0x1fe0,	// (0x000af2cd) cell_cale_month_pane_ParamLimits

0x1fe0,	// (0x000af2cd) cell_cale_month_pane

0x9cd5,	// (0x000b6fc2) cell_cale_month_pane_g1

0x2134,	// (0x000af421) cell_cale_month_pane_t1_ParamLimits

0x2134,	// (0x000af421) cell_cale_month_pane_t1

0xa9fb,	// (0x000b7ce8) grid_highlight_pane_cp08

0xa8e7,	// (0x000b7bd4) main_smil_g1

0x2154,	// (0x000af441) smil_status_pane

0xad90,	// (0x000b807d) smil_text_pane

0xc662,	// (0x000b994f) bg_popup_call3_rect_pane_g8

0xc66a,	// (0x000b9957) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc85b) bg_popup_call3_rect_pane_g

0xc8f8,	// (0x000b9be5) smil_status_volume_pane_g1

0x2167,	// (0x000af454) smil_status_pane_t1

0x9e23,	// (0x000b7110) volume_smil_pane

0xad9a,	// (0x000b8087) list_smil_text_pane

0x2180,	// (0x000af46d) scroll_pane_cp011

0x218b,	// (0x000af478) smil_text_list_pane_t1_ParamLimits

0x218b,	// (0x000af478) smil_text_list_pane_t1

0x9ce1,	// (0x000b6fce) aid_volume_smil_ParamLimits

0x9ce1,	// (0x000b6fce) aid_volume_smil

0xa8e7,	// (0x000b7bd4) smil_volume_pane_g1

0xa8e7,	// (0x000b7bd4) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000bc5c2) smil_volume_pane_g

0x03a4,	// (0x000ad691) listscroll_cale_day_pane

0xada4,	// (0x000b8091) bg_cale_pane

0xadbc,	// (0x000b80a9) list_cale_pane

0xaddf,	// (0x000b80cc) scroll_pane_cp09

0xadf0,	// (0x000b80dd) cale_bg_pane_g1

0xadf8,	// (0x000b80e5) cale_bg_pane_g2

0xae00,	// (0x000b80ed) cale_bg_pane_g3

0xae08,	// (0x000b80f5) cale_bg_pane_g4

0xae10,	// (0x000b80fd) cale_bg_pane_g5

0xae18,	// (0x000b8105) cale_bg_pane_g6

0xae20,	// (0x000b810d) cale_bg_pane_g7

0xae28,	// (0x000b8115) cale_bg_pane_g8

0xae30,	// (0x000b811d) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000bc5c7) cale_bg_pane_g

0x21c4,	// (0x000af4b1) list_cale_time_pane_ParamLimits

0x21c4,	// (0x000af4b1) list_cale_time_pane

0xae40,	// (0x000b812d) list_cale_time_pane_g1_ParamLimits

0xae40,	// (0x000b812d) list_cale_time_pane_g1

0xae4c,	// (0x000b8139) list_cale_time_pane_g2_ParamLimits

0xae4c,	// (0x000b8139) list_cale_time_pane_g2

0x21d8,	// (0x000af4c5) list_cale_time_pane_g3_ParamLimits

0x21d8,	// (0x000af4c5) list_cale_time_pane_g3

0x21e6,	// (0x000af4d3) list_cale_time_pane_g4_ParamLimits

0x21e6,	// (0x000af4d3) list_cale_time_pane_g4

0x21f4,	// (0x000af4e1) list_cale_time_pane_g5_ParamLimits

0x21f4,	// (0x000af4e1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000bc5da) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000bc5da) list_cale_time_pane_g

0xae66,	// (0x000b8153) list_cale_time_pane_t1_ParamLimits

0xae66,	// (0x000b8153) list_cale_time_pane_t1

0xae8e,	// (0x000b817b) list_cale_time_pane_t2_ParamLimits

0xae8e,	// (0x000b817b) list_cale_time_pane_t2

0x2593,	// (0x000af880) aid_blid_cardinal_pane

0x25d1,	// (0x000af8be) compass_pane_t4

0xaeb6,	// (0x000b81a3) list_cale_time_pane_t4_ParamLimits

0xaeb6,	// (0x000b81a3) list_cale_time_pane_t4

0x25df,	// (0x000af8cc) compass_pane_t5

0x25ed,	// (0x000af8da) compass_pane_t6

0x25fb,	// (0x000af8e8) compass_pane_t7

0xb2d0,	// (0x000b85bd) navi_pane_cc_t1

0xb41d,	// (0x000b870a) aid_phob_thumbnail_center_pane

0x2d75,	// (0x000b0062) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000bc5e7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000bc5e7) list_cale_time_pane_t

0x95b6,	// (0x000b68a3) bg_popup_window_pane_cp02_ParamLimits

0x95b6,	// (0x000b68a3) bg_popup_window_pane_cp02

0xaede,	// (0x000b81cb) heading_pane_cp01_ParamLimits

0xaede,	// (0x000b81cb) heading_pane_cp01

0xaeea,	// (0x000b81d7) loc_req_pane_ParamLimits

0xaeea,	// (0x000b81d7) loc_req_pane

0xaefa,	// (0x000b81e7) loc_type_pane_ParamLimits

0xaefa,	// (0x000b81e7) loc_type_pane

0xaf0c,	// (0x000b81f9) loc_type_pane_t1_ParamLimits

0xaf0c,	// (0x000b81f9) loc_type_pane_t1

0xaf1e,	// (0x000b820b) loc_type_pane_t2_ParamLimits

0xaf1e,	// (0x000b820b) loc_type_pane_t2

0xaf30,	// (0x000b821d) loc_type_pane_t3_ParamLimits

0xaf30,	// (0x000b821d) loc_type_pane_t3

0x0002,

0xf301,	// (0x000bc5ee) loc_type_pane_t_ParamLimits

0xf301,	// (0x000bc5ee) loc_type_pane_t

0xaf42,	// (0x000b822f) list_loc_req_pane

0xaf4c,	// (0x000b8239) scroll_pane_cp012

0x2202,	// (0x000af4ef) list_single_loc_request_popup_menu_pane_ParamLimits

0x2202,	// (0x000af4ef) list_single_loc_request_popup_menu_pane

0xaf57,	// (0x000b8244) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf57,	// (0x000b8244) list_single_loc_request_popup_menu_pane_g1

0xaf63,	// (0x000b8250) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf63,	// (0x000b8250) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000bc5f5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000bc5f5) list_single_loc_request_popup_menu_pane_g

0xaf6f,	// (0x000b825c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf6f,	// (0x000b825c) list_single_loc_request_popup_menu_pane_t1

0x9bba,	// (0x000b6ea7) bg_popup_window_pane_cp03_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_window_pane_cp03

0xaf85,	// (0x000b8272) heading_loc_req_pane_ParamLimits

0xaf85,	// (0x000b8272) heading_loc_req_pane

0x220f,	// (0x000af4fc) popup_dyc_status_message_window_g1_ParamLimits

0x220f,	// (0x000af4fc) popup_dyc_status_message_window_g1

0x2223,	// (0x000af510) popup_dyc_status_message_window_t1_ParamLimits

0x2223,	// (0x000af510) popup_dyc_status_message_window_t1

0x2238,	// (0x000af525) popup_dyc_status_message_window_t2_ParamLimits

0x2238,	// (0x000af525) popup_dyc_status_message_window_t2

0x224d,	// (0x000af53a) popup_dyc_status_message_window_t3_ParamLimits

0x224d,	// (0x000af53a) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000bc5fa) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000bc5fa) popup_dyc_status_message_window_t

0x995f,	// (0x000b6c4c) bg_heading_pane_cp01

0xaf91,	// (0x000b827e) heading_loc_req_pane_g1

0xaf99,	// (0x000b8286) heading_loc_req_pane_g2

0xafa1,	// (0x000b828e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000bc601) heading_loc_req_pane_g

0xafa9,	// (0x000b8296) heading_loc_req_pane_t1

0xafb9,	// (0x000b82a6) bg_popup_sub_pane_cp01_ParamLimits

0xafb9,	// (0x000b82a6) bg_popup_sub_pane_cp01

0xafc7,	// (0x000b82b4) popup_cale_events_window_g1_ParamLimits

0xafc7,	// (0x000b82b4) popup_cale_events_window_g1

0xafe7,	// (0x000b82d4) popup_cale_events_window_g2_ParamLimits

0xafe7,	// (0x000b82d4) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000bc635) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000bc635) popup_cale_events_window_g

0xb007,	// (0x000b82f4) popup_cale_events_window_t1_ParamLimits

0xb007,	// (0x000b82f4) popup_cale_events_window_t1

0xb019,	// (0x000b8306) popup_cale_events_window_t2_ParamLimits

0xb019,	// (0x000b8306) popup_cale_events_window_t2

0xb057,	// (0x000b8344) popup_cale_events_window_t3_ParamLimits

0xb057,	// (0x000b8344) popup_cale_events_window_t3

0xb091,	// (0x000b837e) popup_cale_events_window_t4_ParamLimits

0xb091,	// (0x000b837e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000bc63a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000bc63a) popup_cale_events_window_t

0x2352,	// (0x000af63f) call_type_pane

0x2362,	// (0x000af64f) popup_call_status_window_g1

0x2376,	// (0x000af663) popup_call_status_window_g2

0x238a,	// (0x000af677) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000bc643) popup_call_status_window_g

0xb0c7,	// (0x000b83b4) call_type_pane_g1

0xb0d0,	// (0x000b83bd) call_type_pane_g2

0x0001,

0xf35d,	// (0x000bc64a) call_type_pane_g

0x995f,	// (0x000b6c4c) bg_popup_sub_pane_cp02

0xb0d9,	// (0x000b83c6) listscroll_popup_wml_pane

0xb0e1,	// (0x000b83ce) list_wml_pane

0xb0eb,	// (0x000b83d8) scroll_pane_cp013

0xb0f6,	// (0x000b83e3) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f6,	// (0x000b83e3) list_single_graphic_popup_wml_pane

0xa8e7,	// (0x000b7bd4) list_single_graphic_popup_wml_pane_g1

0xb10a,	// (0x000b83f7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000bc64f) list_single_graphic_popup_wml_pane_g

0xb112,	// (0x000b83ff) list_single_graphic_popup_wml_pane_t1

0xb128,	// (0x000b8415) aid_call_pane

0x9bb2,	// (0x000b6e9f) popup_clock_analogue_window_g1

0x9bb2,	// (0x000b6e9f) popup_clock_analogue_window_g2

0x9d03,	// (0x000b6ff0) popup_clock_analogue_window_g3

0x9d03,	// (0x000b6ff0) popup_clock_analogue_window_g4

0xa8e7,	// (0x000b7bd4) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000bc654) popup_clock_analogue_window_g

0x9d0b,	// (0x000b6ff8) popup_clock_analogue_window_t1

0x9d19,	// (0x000b7006) clock_digital_number_pane_ParamLimits

0x9d19,	// (0x000b7006) clock_digital_number_pane

0x9d25,	// (0x000b7012) clock_digital_number_pane_cp02_ParamLimits

0x9d25,	// (0x000b7012) clock_digital_number_pane_cp02

0x9d31,	// (0x000b701e) clock_digital_number_pane_cp03_ParamLimits

0x9d31,	// (0x000b701e) clock_digital_number_pane_cp03

0x9d3d,	// (0x000b702a) clock_digital_number_pane_cp04_ParamLimits

0x9d3d,	// (0x000b702a) clock_digital_number_pane_cp04

0x9d49,	// (0x000b7036) clock_digital_separator_pane_ParamLimits

0x9d49,	// (0x000b7036) clock_digital_separator_pane

0x9d55,	// (0x000b7042) popup_clock_digital_window_t1

0xa8e7,	// (0x000b7bd4) clock_digital_number_pane_g1

0xa8e7,	// (0x000b7bd4) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000bc5c2) clock_digital_number_pane_g

0xa8e7,	// (0x000b7bd4) clock_digital_separator_pane_g1

0xa8e7,	// (0x000b7bd4) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000bc5c2) clock_digital_separator_pane_g

0x995f,	// (0x000b6c4c) bg_popup_window_pane_cp04

0xb130,	// (0x000b841d) heading_pane_cp03

0xb138,	// (0x000b8425) listscroll_popup_gms_pane

0xb140,	// (0x000b842d) grid_large_graphic_popup_pane

0xb14a,	// (0x000b8437) listscroll_popup_gms_pane_g1

0xb152,	// (0x000b843f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000bc65f) listscroll_popup_gms_pane_g

0xabf5,	// (0x000b7ee2) scroll_pane_cp014

0x239a,	// (0x000af687) cell_large_graphic_popup_pane_ParamLimits

0x239a,	// (0x000af687) cell_large_graphic_popup_pane

0x23b2,	// (0x000af69f) cell_large_graphic_popup_pane_g1_ParamLimits

0x23b2,	// (0x000af69f) cell_large_graphic_popup_pane_g1

0xb15a,	// (0x000b8447) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15a,	// (0x000b8447) cell_large_graphic_popup_pane_g2

0xb166,	// (0x000b8453) cell_large_graphic_popup_pane_g3_ParamLimits

0xb166,	// (0x000b8453) cell_large_graphic_popup_pane_g3

0xb173,	// (0x000b8460) cell_large_graphic_popup_pane_g4_ParamLimits

0xb173,	// (0x000b8460) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000bc664) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000bc664) cell_large_graphic_popup_pane_g

0xb183,	// (0x000b8470) grid_highlight_pane_cp010

0xa8e7,	// (0x000b7bd4) bg_popup_call_pane_g1

0xb18d,	// (0x000b847a) list_single_graphic_popup_conf_pane_ParamLimits

0xb18d,	// (0x000b847a) list_single_graphic_popup_conf_pane

0xb19f,	// (0x000b848c) list_highlight_pane_cp01

0xb1a8,	// (0x000b8495) list_single_graphic_popup_conf_pane_g1

0xb1b0,	// (0x000b849d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000bc66d) list_single_graphic_popup_conf_pane_g

0xb1b8,	// (0x000b84a5) list_single_graphic_popup_conf_pane_t1

0xb1c6,	// (0x000b84b3) linegrid_cams_pane_g1

0x23be,	// (0x000af6ab) linegrid_cams_pane_g2

0xaa2e,	// (0x000b7d1b) linegrid_cams_pane_g3

0xb1cf,	// (0x000b84bc) linegrid_cams_pane_g4

0x23c7,	// (0x000af6b4) linegrid_cams_pane_g5

0x23d0,	// (0x000af6bd) linegrid_cams_pane_g6

0xaa37,	// (0x000b7d24) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000bc672) linegrid_cams_pane_g

0xb1d8,	// (0x000b84c5) popup_clock_analogue_window

0xb1d8,	// (0x000b84c5) popup_clock_digital_window

0x995f,	// (0x000b6c4c) popup_phob_thumbnail_window

0xa8e7,	// (0x000b7bd4) call_video_uplink_pane_g1

0xb1e1,	// (0x000b84ce) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000bc681) call_video_uplink_pane_g

0xb1e9,	// (0x000b84d6) video_uplink_pane

0xb1f1,	// (0x000b84de) mce_image_pane_g1

0x23db,	// (0x000af6c8) mce_image_pane_g2

0x23e5,	// (0x000af6d2) mce_image_pane_g3

0x23ef,	// (0x000af6dc) mce_image_pane_g4

0x23f7,	// (0x000af6e4) mce_image_pane_g5

0x0004,

0xf399,	// (0x000bc686) mce_image_pane_g

0xb1fb,	// (0x000b84e8) control_top_pane_stacon_cp01_ParamLimits

0xb1fb,	// (0x000b84e8) control_top_pane_stacon_cp01

0xb20f,	// (0x000b84fc) uni_indicator_pane_stacon_cp01_ParamLimits

0xb20f,	// (0x000b84fc) uni_indicator_pane_stacon_cp01

0xb220,	// (0x000b850d) bg_popup_sub_pane_cp03

0x23ff,	// (0x000af6ec) chi_dic_find_pane

0x2407,	// (0x000af6f4) listscroll_chi_dic_pane

0x2410,	// (0x000af6fd) main_pane_chidic_g1

0x2423,	// (0x000af710) chi_dic_find_pane_t1

0xb22a,	// (0x000b8517) find_chidic_pane

0xb233,	// (0x000b8520) chi_dic_list_pane_ParamLimits

0xb233,	// (0x000b8520) chi_dic_list_pane

0xb244,	// (0x000b8531) scroll_pane_cp020

0x2431,	// (0x000af71e) find_chidic_pane_t1

0x995f,	// (0x000b6c4c) input_focus_pane_cp06

0x001a,	// (0x000ad307) list_chi_dic_pane_ParamLimits

0x001a,	// (0x000ad307) list_chi_dic_pane

0x2440,	// (0x000af72d) list_chi_dic_pane_t1_ParamLimits

0x2440,	// (0x000af72d) list_chi_dic_pane_t1

0x995f,	// (0x000b6c4c) list_highlight_pane_cp020

0xb24c,	// (0x000b8539) bg_cale_heading_pane_g1

0x2453,	// (0x000af740) bg_cale_heading_pane_g2

0x245b,	// (0x000af748) bg_cale_heading_pane_g3

0x2463,	// (0x000af750) bg_cale_heading_pane_g4

0x246d,	// (0x000af75a) bg_cale_heading_pane_g5

0x2477,	// (0x000af764) bg_cale_heading_pane_g6

0x247f,	// (0x000af76c) bg_cale_heading_pane_g7

0x2487,	// (0x000af774) bg_cale_heading_pane_g8

0x2491,	// (0x000af77e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000bc691) bg_cale_heading_pane_g

0xb24c,	// (0x000b8539) bg_cale_side_pane_g1

0x249b,	// (0x000af788) bg_cale_side_pane_g2

0x24a5,	// (0x000af792) bg_cale_side_pane_g3

0x24af,	// (0x000af79c) bg_cale_side_pane_g4

0x24b9,	// (0x000af7a6) bg_cale_side_pane_g5

0x24c3,	// (0x000af7b0) bg_cale_side_pane_g6

0x24cd,	// (0x000af7ba) bg_cale_side_pane_g7

0x24d7,	// (0x000af7c4) bg_cale_side_pane_g8

0x24df,	// (0x000af7cc) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000bc6a4) bg_cale_side_pane_g

0x24e7,	// (0x000af7d4) popup_call_status_window_ParamLimits

0x24e7,	// (0x000af7d4) popup_call_status_window

0xb254,	// (0x000b8541) stacon_top_pane

0xb25c,	// (0x000b8549) status_pane_ParamLimits

0xb25c,	// (0x000b8549) status_pane

0xb271,	// (0x000b855e) status_small_pane

0xb279,	// (0x000b8566) control_pane

0x995f,	// (0x000b6c4c) stacon_bottom_pane

0xb281,	// (0x000b856e) list_single_mce_smart_pane_t1_ParamLimits

0xb281,	// (0x000b856e) list_single_mce_smart_pane_t1

0xb294,	// (0x000b8581) list_single_mce_smart_pane_t2_ParamLimits

0xb294,	// (0x000b8581) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000bc6b7) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000bc6b7) list_single_mce_smart_pane_t

0x2534,	// (0x000af821) compass_pane

0x253f,	// (0x000af82c) main_location2_pane_t1

0x2553,	// (0x000af840) main_location2_pane_t2

0x2569,	// (0x000af856) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000bc6bc) main_location2_pane_t

0xb2b3,	// (0x000b85a0) compass_pane_g1_ParamLimits

0xb2b3,	// (0x000b85a0) compass_pane_g1

0x25b3,	// (0x000af8a0) compass_pane_t1

0x25c2,	// (0x000af8af) compass_pane_t2

0x0005,

0xf3d8,	// (0x000bc6c5) compass_pane_t

0x2609,	// (0x000af8f6) text_secondary_cp61

0xb2c7,	// (0x000b85b4) navi_pane_cams_g5

0xb2ea,	// (0x000b85d7) navi_pane_im_t1

0xb2f8,	// (0x000b85e5) navi_pane_mp_g1_ParamLimits

0xb2f8,	// (0x000b85e5) navi_pane_mp_g1

0xb30c,	// (0x000b85f9) navi_pane_mp_g2_ParamLimits

0xb30c,	// (0x000b85f9) navi_pane_mp_g2

0xb318,	// (0x000b8605) navi_pane_mp_g3_ParamLimits

0xb318,	// (0x000b8605) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000bc6d9) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000bc6d9) navi_pane_mp_g

0xb324,	// (0x000b8611) navi_pane_mp_t1

0xb332,	// (0x000b861f) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000bc6e0) navi_pane_mp_t

0xb36e,	// (0x000b865b) navi_pane_vt_g1

0xb324,	// (0x000b8611) navi_pane_vt_t1

0xb376,	// (0x000b8663) navi_slider_pane

0xaa48,	// (0x000b7d35) zooming_pane

0xb37e,	// (0x000b866b) navi_slider_pane_g1

0x9d72,	// (0x000b705f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000bc6e7) navi_slider_pane_g

0xb3a2,	// (0x000b868f) aid_levels_zoom

0xb3aa,	// (0x000b8697) zooming_pane_g1

0xb3b2,	// (0x000b869f) zooming_pane_g2

0xb3b2,	// (0x000b869f) zooming_pane_g3

0x0002,

0xf409,	// (0x000bc6f6) zooming_pane_g

0xb3ba,	// (0x000b86a7) level_10_zoom

0xb3c3,	// (0x000b86b0) level_11_zoom

0xb3cc,	// (0x000b86b9) level_1_zoom

0xb3d5,	// (0x000b86c2) level_2_zoom

0xb3de,	// (0x000b86cb) level_3_zoom

0xb3e7,	// (0x000b86d4) level_4_zoom

0xb3f0,	// (0x000b86dd) level_5_zoom

0xb3f9,	// (0x000b86e6) level_6_zoom

0xb402,	// (0x000b86ef) level_7_zoom

0xb40b,	// (0x000b86f8) level_8_zoom

0xb414,	// (0x000b8701) level_9_zoom

0xb425,	// (0x000b8712) popup_phob_thumbnail_window_g1

0xb42d,	// (0x000b871a) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000bc6fd) popup_phob_thumbnail_window_g

0xc7c8,	// (0x000b9ab5) level_1_location

0xc7d0,	// (0x000b9abd) level_2_location

0xc7d8,	// (0x000b9ac5) level_3_location

0xc7e0,	// (0x000b9acd) level_4_location

0xaa48,	// (0x000b7d35) level_5_location

0x2752,	// (0x000afa3f) mce_icon_pane_g1

0x275c,	// (0x000afa49) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000bc702) mce_icon_pane_g

0x2764,	// (0x000afa51) main_mup_pane_g1_ParamLimits

0x2764,	// (0x000afa51) main_mup_pane_g1

0x277a,	// (0x000afa67) main_mup_pane_g2_ParamLimits

0x277a,	// (0x000afa67) main_mup_pane_g2

0x2792,	// (0x000afa7f) main_mup_pane_g3_ParamLimits

0x2792,	// (0x000afa7f) main_mup_pane_g3

0x27aa,	// (0x000afa97) main_mup_pane_g4_ParamLimits

0x27aa,	// (0x000afa97) main_mup_pane_g4

0x27c2,	// (0x000afaaf) main_mup_pane_g5_ParamLimits

0x27c2,	// (0x000afaaf) main_mup_pane_g5

0x27de,	// (0x000afacb) main_mup_pane_g6_ParamLimits

0x27de,	// (0x000afacb) main_mup_pane_g6

0x27f8,	// (0x000afae5) main_mup_pane_g7_ParamLimits

0x27f8,	// (0x000afae5) main_mup_pane_g7

0x2816,	// (0x000afb03) main_mup_pane_g8_ParamLimits

0x2816,	// (0x000afb03) main_mup_pane_g8

0x2834,	// (0x000afb21) main_mup_pane_g9_ParamLimits

0x2834,	// (0x000afb21) main_mup_pane_g9

0x2850,	// (0x000afb3d) main_mup_pane_g10_ParamLimits

0x2850,	// (0x000afb3d) main_mup_pane_g10

0x286e,	// (0x000afb5b) main_mup_pane_g11_ParamLimits

0x286e,	// (0x000afb5b) main_mup_pane_g11

0x2888,	// (0x000afb75) main_mup_pane_g12_ParamLimits

0x2888,	// (0x000afb75) main_mup_pane_g12

0x289e,	// (0x000afb8b) main_mup_pane_g13_ParamLimits

0x289e,	// (0x000afb8b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000bc707) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000bc707) main_mup_pane_g

0x28b2,	// (0x000afb9f) main_mup_pane_t1_ParamLimits

0x28b2,	// (0x000afb9f) main_mup_pane_t1

0x28ce,	// (0x000afbbb) main_mup_pane_t2_ParamLimits

0x28ce,	// (0x000afbbb) main_mup_pane_t2

0x28e6,	// (0x000afbd3) main_mup_pane_t3_ParamLimits

0x28e6,	// (0x000afbd3) main_mup_pane_t3

0x28fe,	// (0x000afbeb) main_mup_pane_t4_ParamLimits

0x28fe,	// (0x000afbeb) main_mup_pane_t4

0x291c,	// (0x000afc09) main_mup_pane_t5_ParamLimits

0x291c,	// (0x000afc09) main_mup_pane_t5

0x2931,	// (0x000afc1e) main_mup_pane_t6_ParamLimits

0x2931,	// (0x000afc1e) main_mup_pane_t6

0x0005,

0xf435,	// (0x000bc722) main_mup_pane_t_ParamLimits

0xf435,	// (0x000bc722) main_mup_pane_t

0x2943,	// (0x000afc30) mup_progress_pane_ParamLimits

0x2943,	// (0x000afc30) mup_progress_pane

0x294f,	// (0x000afc3c) mup_visualizer_pane_ParamLimits

0x294f,	// (0x000afc3c) mup_visualizer_pane

0x2983,	// (0x000afc70) mup_volume_pane_ParamLimits

0x2983,	// (0x000afc70) mup_volume_pane

0xb435,	// (0x000b8722) mup_visualizer_pane_g1_ParamLimits

0xb435,	// (0x000b8722) mup_visualizer_pane_g1

0xb435,	// (0x000b8722) mup_visualizer_pane_g2_ParamLimits

0xb435,	// (0x000b8722) mup_visualizer_pane_g2

0xb2b3,	// (0x000b85a0) mup_visualizer_pane_g3_ParamLimits

0xb2b3,	// (0x000b85a0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000bc72f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000bc72f) mup_visualizer_pane_g

0xa8e7,	// (0x000b7bd4) mup_volume_pane_g1

0xb44b,	// (0x000b8738) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000bc736) mup_volume_pane_g

0xa8e7,	// (0x000b7bd4) mup_progress_pane_g1

0xb454,	// (0x000b8741) mup_progress_pane_g2

0xb45d,	// (0x000b874a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000bc73b) mup_progress_pane_g

0x995f,	// (0x000b6c4c) bg_popup_window_pane_cp05

0xb466,	// (0x000b8753) heading_pane_cp02_ParamLimits

0xb466,	// (0x000b8753) heading_pane_cp02

0xb482,	// (0x000b876f) list_popup_blid_pane

0xb48a,	// (0x000b8777) list_blid_sat_info_pane_ParamLimits

0xb48a,	// (0x000b8777) list_blid_sat_info_pane

0xb49d,	// (0x000b878a) list_blid_sat_info_pane_g1

0xb4a5,	// (0x000b8792) list_blid_sat_info_pane_t1

0x2aad,	// (0x000afd9a) mup_equalizer_pane_ParamLimits

0x2aad,	// (0x000afd9a) mup_equalizer_pane

0x2ace,	// (0x000afdbb) mup_equalizer_pane_cp1_ParamLimits

0x2ace,	// (0x000afdbb) mup_equalizer_pane_cp1

0x2aef,	// (0x000afddc) mup_equalizer_pane_cp2_ParamLimits

0x2aef,	// (0x000afddc) mup_equalizer_pane_cp2

0x2b14,	// (0x000afe01) mup_equalizer_pane_cp3_ParamLimits

0x2b14,	// (0x000afe01) mup_equalizer_pane_cp3

0x2b3d,	// (0x000afe2a) mup_equalizer_pane_cp4_ParamLimits

0x2b3d,	// (0x000afe2a) mup_equalizer_pane_cp4

0x2b66,	// (0x000afe53) mup_equalizer_pane_cp5

0x2b7e,	// (0x000afe6b) mup_equalizer_pane_cp6

0x2b96,	// (0x000afe83) mup_equalizer_pane_cp7

0xc6e2,	// (0x000b99cf) bg_popup_call_poc_act_pane_g9

0xc6ea,	// (0x000b99d7) bg_popup_call_poc_act_pane_g10

0xc6f2,	// (0x000b99df) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bba,	// (0x000b6ea7) mup_scale_pane

0xa8e7,	// (0x000b7bd4) mup_scale_pane_g1

0xb4b3,	// (0x000b87a0) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000bc757) mup_scale_pane_g

0xb4d7,	// (0x000b87c4) msg_data_pane

0xb4df,	// (0x000b87cc) scroll_pane_cp017

0x2bc0,	// (0x000afead) bg_list_pane_cp04_ParamLimits

0x2bc0,	// (0x000afead) bg_list_pane_cp04

0xb4e7,	// (0x000b87d4) msg_data_pane_g1

0x2be0,	// (0x000afecd) msg_data_pane_g2

0x2bea,	// (0x000afed7) msg_data_pane_g3

0x2bf4,	// (0x000afee1) msg_data_pane_g4

0x2bfc,	// (0x000afee9) msg_data_pane_g5

0x2c04,	// (0x000afef1) msg_data_pane_g6

0x2c0c,	// (0x000afef9) msg_data_pane_g7

0x0006,

0xf479,	// (0x000bc766) msg_data_pane_g

0x2c14,	// (0x000aff01) msg_text_pane_ParamLimits

0x2c14,	// (0x000aff01) msg_text_pane

0x2c3a,	// (0x000aff27) qrid_highlight_pane_cp011_ParamLimits

0x2c3a,	// (0x000aff27) qrid_highlight_pane_cp011

0x995f,	// (0x000b6c4c) msg_body_pane

0x995f,	// (0x000b6c4c) msg_header_pane

0xb4f8,	// (0x000b87e5) input_focus_pane_cp07

0x9d8c,	// (0x000b7079) msg_header_pane_t1_ParamLimits

0x9d8c,	// (0x000b7079) msg_header_pane_t1

0x9d9e,	// (0x000b708b) msg_header_pane_t2_ParamLimits

0x9d9e,	// (0x000b708b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000bc77a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000bc77a) msg_header_pane_t

0xb50d,	// (0x000b87fa) msg_body_pane_g1

0x2c5e,	// (0x000aff4b) msg_body_pane_t1_ParamLimits

0x2c5e,	// (0x000aff4b) msg_body_pane_t1

0x9db0,	// (0x000b709d) msg_body_pane_t2_ParamLimits

0x9db0,	// (0x000b709d) msg_body_pane_t2

0x9dc2,	// (0x000b70af) msg_body_pane_t3_ParamLimits

0x9dc2,	// (0x000b70af) msg_body_pane_t3

0x0002,

0xf492,	// (0x000bc77f) msg_body_pane_t_ParamLimits

0xf492,	// (0x000bc77f) msg_body_pane_t

0x2cc9,	// (0x000affb6) main_viewer_pane_g1_ParamLimits

0x2cc9,	// (0x000affb6) main_viewer_pane_g1

0x2cd7,	// (0x000affc4) main_viewer_pane_g2_ParamLimits

0x2cd7,	// (0x000affc4) main_viewer_pane_g2

0x2ce5,	// (0x000affd2) main_viewer_pane_g3_ParamLimits

0x2ce5,	// (0x000affd2) main_viewer_pane_g3

0x2cf4,	// (0x000affe1) main_viewer_pane_g4_ParamLimits

0x2cf4,	// (0x000affe1) main_viewer_pane_g4

0x9dec,	// (0x000b70d9) main_viewer_pane_g5_ParamLimits

0x9dec,	// (0x000b70d9) main_viewer_pane_g5

0x9dec,	// (0x000b70d9) main_viewer_pane_g7_ParamLimits

0x9dec,	// (0x000b70d9) main_viewer_pane_g7

0x9dfe,	// (0x000b70eb) main_viewer_pane_g8_ParamLimits

0x9dfe,	// (0x000b70eb) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000bc78f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000bc78f) main_viewer_pane_g

0xb515,	// (0x000b8802) viewer_content_pane_ParamLimits

0xb515,	// (0x000b8802) viewer_content_pane

0x2d32,	// (0x000b001f) main_postcard_pane_g1_ParamLimits

0x2d32,	// (0x000b001f) main_postcard_pane_g1

0x2d48,	// (0x000b0035) main_postcard_pane_g2_ParamLimits

0x2d48,	// (0x000b0035) main_postcard_pane_g2

0x2d5e,	// (0x000b004b) main_postcard_pane_g3_ParamLimits

0x2d5e,	// (0x000b004b) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000bc7a0) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000bc7a0) main_postcard_pane_g

0x2d75,	// (0x000b0062) main_postcard_pane_g4

0xc90b,	// (0x000b9bf8) smil_status_volume_pane_g2

0x2db8,	// (0x000b00a5) postcard_pane_ParamLimits

0x2db8,	// (0x000b00a5) postcard_pane

0xb523,	// (0x000b8810) postcard_pane_g1_ParamLimits

0xb523,	// (0x000b8810) postcard_pane_g1

0x2e08,	// (0x000b00f5) postcard_pane_g2_ParamLimits

0x2e08,	// (0x000b00f5) postcard_pane_g2

0x2e14,	// (0x000b0101) postcard_pane_g3_ParamLimits

0x2e14,	// (0x000b0101) postcard_pane_g3

0xb531,	// (0x000b881e) postcard_pane_g4_ParamLimits

0xb531,	// (0x000b881e) postcard_pane_g4

0x2e20,	// (0x000b010d) postcard_pane_g5_ParamLimits

0x2e20,	// (0x000b010d) postcard_pane_g5

0x2e35,	// (0x000b0122) postcard_pane_g6_ParamLimits

0x2e35,	// (0x000b0122) postcard_pane_g6

0xb523,	// (0x000b8810) postcard_pane_g7_ParamLimits

0xb523,	// (0x000b8810) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000bc7ad) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000bc7ad) postcard_pane_g

0x2e4d,	// (0x000b013a) main_mp2_pane_g1_ParamLimits

0x2e4d,	// (0x000b013a) main_mp2_pane_g1

0x2e5b,	// (0x000b0148) main_mp2_pane_g2_ParamLimits

0x2e5b,	// (0x000b0148) main_mp2_pane_g2

0x2e67,	// (0x000b0154) main_mp2_pane_g3_ParamLimits

0x2e67,	// (0x000b0154) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000bc7bc) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000bc7bc) main_mp2_pane_g

0x2e73,	// (0x000b0160) main_mp2_pane_t1_ParamLimits

0x2e73,	// (0x000b0160) main_mp2_pane_t1

0x2e8a,	// (0x000b0177) main_mp2_pane_t2_ParamLimits

0x2e8a,	// (0x000b0177) main_mp2_pane_t2

0x2e9c,	// (0x000b0189) main_mp2_pane_t3_ParamLimits

0x2e9c,	// (0x000b0189) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000bc7c3) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000bc7c3) main_mp2_pane_t

0xb53f,	// (0x000b882c) pec_content_pane_ParamLimits

0xb53f,	// (0x000b882c) pec_content_pane

0xabf5,	// (0x000b7ee2) scroll_pane_cp015

0xb551,	// (0x000b883e) pec_attribute_pane_ParamLimits

0xb551,	// (0x000b883e) pec_attribute_pane

0x2eae,	// (0x000b019b) pec_content_pane_g1_ParamLimits

0x2eae,	// (0x000b019b) pec_content_pane_g1

0xb561,	// (0x000b884e) pec_content_pane_t1_ParamLimits

0xb561,	// (0x000b884e) pec_content_pane_t1

0xb573,	// (0x000b8860) pec_content_pane_t2_ParamLimits

0xb573,	// (0x000b8860) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000bc7ca) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000bc7ca) pec_content_pane_t

0x2eba,	// (0x000b01a7) list_single_graphic_pane_cp01_ParamLimits

0x2eba,	// (0x000b01a7) list_single_graphic_pane_cp01

0x9bba,	// (0x000b6ea7) bg_popup_sub_pane_cp04

0xb585,	// (0x000b8872) popup_mup_playback_window_g1

0xb591,	// (0x000b887e) popup_mup_playback_window_t1

0xb5a6,	// (0x000b8893) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000bc7cf) popup_mup_playback_window_t

0xb5dd,	// (0x000b88ca) main_image_pane_g1_ParamLimits

0xb5dd,	// (0x000b88ca) main_image_pane_g1

0xb620,	// (0x000b890d) scroll_pane_cp018_ParamLimits

0xb620,	// (0x000b890d) scroll_pane_cp018

0xb638,	// (0x000b8925) scroll_pane_cp016_ParamLimits

0xb638,	// (0x000b8925) scroll_pane_cp016

0x2f89,	// (0x000b0276) smil2_image_pane_ParamLimits

0x2f89,	// (0x000b0276) smil2_image_pane

0x2fbf,	// (0x000b02ac) smil2_root_pane_ParamLimits

0x2fbf,	// (0x000b02ac) smil2_root_pane

0x2ff7,	// (0x000b02e4) smil2_text_pane_ParamLimits

0x2ff7,	// (0x000b02e4) smil2_text_pane

0x995f,	// (0x000b6c4c) bg_list_pane_cp06

0xb674,	// (0x000b8961) grid_radio_pane

0x995f,	// (0x000b6c4c) bg_popup_window_pane_cp06

0xb67e,	// (0x000b896b) main_fmradio_pane_t1

0xb130,	// (0x000b841d) heading_pane_cp04

0xb68c,	// (0x000b8979) main_fmradio_pane_t2

0xc6fa,	// (0x000b99e7) popup_cale_lunar_info_window_g1

0xb69a,	// (0x000b8987) main_fmradio_pane_t3

0xc702,	// (0x000b99ef) popup_cale_lunar_info_window_g2

0xb6aa,	// (0x000b8997) main_fmradio_pane_t4

0x0001,

0xb6b8,	// (0x000b89a5) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000bc8aa) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000bc7e4) main_fmradio_pane_t

0xb6c6,	// (0x000b89b3) wait_bar_pane_cp03

0xb6ce,	// (0x000b89bb) cell_fmradio_pane_ParamLimits

0xb6ce,	// (0x000b89bb) cell_fmradio_pane

0xb523,	// (0x000b8810) cell_fmradio_pane_g1_ParamLimits

0xb523,	// (0x000b8810) cell_fmradio_pane_g1

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp011

0xb6e3,	// (0x000b89d0) poc_content_pane_ParamLimits

0xb6e3,	// (0x000b89d0) poc_content_pane

0xb6f5,	// (0x000b89e2) scroll_pane_cp019

0x3087,	// (0x000b0374) popup_call_poc_act_window_ParamLimits

0x3087,	// (0x000b0374) popup_call_poc_act_window

0x30ab,	// (0x000b0398) popup_call_poc_inact_window_ParamLimits

0x30ab,	// (0x000b0398) popup_call_poc_inact_window

0xf594,	// (0x000bc881) bg_popup_call_poc_act_pane_g

0xc672,	// (0x000b995f) bg_popup_call_poc_inact_pane_g1

0xc67a,	// (0x000b9967) bg_popup_call_poc_inact_pane_g2

0xb6fd,	// (0x000b89ea) popup_call_poc_act_window_g2

0xc682,	// (0x000b996f) bg_popup_call_poc_inact_pane_g3

0xc68a,	// (0x000b9977) bg_popup_call_poc_inact_pane_g4

0xc692,	// (0x000b997f) bg_popup_call_poc_inact_pane_g5

0xb705,	// (0x000b89f2) popup_call_poc_act_window_t1_ParamLimits

0xb705,	// (0x000b89f2) popup_call_poc_act_window_t1

0xb72d,	// (0x000b8a1a) popup_call_poc_act_window_t2_ParamLimits

0xb72d,	// (0x000b8a1a) popup_call_poc_act_window_t2

0xb755,	// (0x000b8a42) popup_call_poc_act_window_t3_ParamLimits

0xb755,	// (0x000b8a42) popup_call_poc_act_window_t3

0xb77d,	// (0x000b8a6a) popup_call_poc_act_window_t4_ParamLimits

0xb77d,	// (0x000b8a6a) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000bc7ef) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000bc7ef) popup_call_poc_act_window_t

0xc69a,	// (0x000b9987) bg_popup_call_poc_inact_pane_g6

0xc6a2,	// (0x000b998f) bg_popup_call_poc_inact_pane_g7

0xc6aa,	// (0x000b9997) bg_popup_call_poc_inact_pane_g8

0xb78f,	// (0x000b8a7c) popup_call_poc_inact_window_g2

0xc6b2,	// (0x000b999f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000bc86e) bg_popup_call_poc_inact_pane_g

0xb797,	// (0x000b8a84) popup_call_poc_inact_window_t1_ParamLimits

0xb797,	// (0x000b8a84) popup_call_poc_inact_window_t1

0xb7ac,	// (0x000b8a99) popup_call_poc_inact_window_t2_ParamLimits

0xb7ac,	// (0x000b8a99) popup_call_poc_inact_window_t2

0xb7c1,	// (0x000b8aae) popup_call_poc_inact_window_t3_ParamLimits

0xb7c1,	// (0x000b8aae) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000bc7f8) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000bc7f8) popup_call_poc_inact_window_t

0xc87e,	// (0x000b9b6b) context_pane_ParamLimits

0x3953,	// (0x000b0c40) signal_pane_ParamLimits

0xaa48,	// (0x000b7d35) main_call2_pane

0xc86c,	// (0x000b9b59) popup_phob_thumbnail2_window_ParamLimits

0xc86c,	// (0x000b9b59) popup_phob_thumbnail2_window

0x9dd4,	// (0x000b70c1) aid_hotspot_pointer_arrow_pane

0x9ddc,	// (0x000b70c9) aid_hotspot_pointer_hand_pane

0x3413,	// (0x000b0700) phob_pre_status_pane_g5

0x0c46,	// (0x000adf33) cams_zoom_pane_ParamLimits

0x0c55,	// (0x000adf42) image_vga_pane_ParamLimits

0x0c6f,	// (0x000adf5c) main_camera_pane_g1_ParamLimits

0x0c81,	// (0x000adf6e) main_camera_pane_g2_ParamLimits

0x0c91,	// (0x000adf7e) main_camera_pane_g3_ParamLimits

0x0ca5,	// (0x000adf92) main_camera_pane_g4_ParamLimits

0x0cb9,	// (0x000adfa6) main_camera_pane_g5_ParamLimits

0x0ccd,	// (0x000adfba) main_camera_pane_g6_ParamLimits

0x0ce1,	// (0x000adfce) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000bc4f7) main_camera_pane_g_ParamLimits

0x0cf5,	// (0x000adfe2) main_camera_pane_t1_ParamLimits

0x0d0b,	// (0x000adff8) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000bc508) main_camera_pane_t_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_preview_window_pane_cp01

0xb7d6,	// (0x000b8ac3) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7d6,	// (0x000b8ac3) popup_phob_thumbnail2_window_g1

0x995f,	// (0x000b6c4c) call2_cli_visual_pane

0x30df,	// (0x000b03cc) popup_call2_audio_conf_window_ParamLimits

0x30df,	// (0x000b03cc) popup_call2_audio_conf_window

0x3107,	// (0x000b03f4) popup_call2_audio_first_window_ParamLimits

0x3107,	// (0x000b03f4) popup_call2_audio_first_window

0x319d,	// (0x000b048a) popup_call2_audio_in_window_ParamLimits

0x319d,	// (0x000b048a) popup_call2_audio_in_window

0x31e9,	// (0x000b04d6) popup_call2_audio_out_window_ParamLimits

0x31e9,	// (0x000b04d6) popup_call2_audio_out_window

0x325b,	// (0x000b0548) popup_call2_audio_second_window_ParamLimits

0x325b,	// (0x000b0548) popup_call2_audio_second_window

0x32c1,	// (0x000b05ae) popup_call2_audio_wait_window_ParamLimits

0x32c1,	// (0x000b05ae) popup_call2_audio_wait_window

0x995f,	// (0x000b6c4c) bg_popup_call2_act_pane_cp03

0x9b9c,	// (0x000b6e89) list_conf_pane_cp

0xb7e2,	// (0x000b8acf) popup_call2_audio_conf_window_t1

0xb7f0,	// (0x000b8add) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7f0,	// (0x000b8add) list_single_graphic_popup_conf2_pane

0xb19f,	// (0x000b848c) list_highlight_pane_cp04

0xb803,	// (0x000b8af0) list_single_graphic_popup_conf2_pane_g1

0xb1b0,	// (0x000b849d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000bc7ff) list_single_graphic_popup_conf2_pane_g

0xb80d,	// (0x000b8afa) list_single_graphic_popup_conf2_pane_t1

0xb81b,	// (0x000b8b08) bg_popup_call2_act_pane_cp01_ParamLimits

0xb81b,	// (0x000b8b08) bg_popup_call2_act_pane_cp01

0xb8a5,	// (0x000b8b92) call_type_pane_cp05_ParamLimits

0xb8a5,	// (0x000b8b92) call_type_pane_cp05

0xb8f9,	// (0x000b8be6) popup_call2_audio_second_window_g1_ParamLimits

0xb8f9,	// (0x000b8be6) popup_call2_audio_second_window_g1

0xb94d,	// (0x000b8c3a) popup_call2_audio_second_window_g2_ParamLimits

0xb94d,	// (0x000b8c3a) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000bc804) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000bc804) popup_call2_audio_second_window_g

0xb9b2,	// (0x000b8c9f) popup_call2_audio_second_window_t1_ParamLimits

0xb9b2,	// (0x000b8c9f) popup_call2_audio_second_window_t1

0xba6d,	// (0x000b8d5a) popup_call2_audio_second_window_t2_ParamLimits

0xba6d,	// (0x000b8d5a) popup_call2_audio_second_window_t2

0xbac0,	// (0x000b8dad) popup_call2_audio_second_window_t3_ParamLimits

0xbac0,	// (0x000b8dad) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000bc80b) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000bc80b) popup_call2_audio_second_window_t

0x995f,	// (0x000b6c4c) bg_popup_call2_in_pane_cp02

0x9969,	// (0x000b6c56) call_type_pane_cp04

0x9971,	// (0x000b6c5e) popup_call2_audio_wait_window_g1

0x9979,	// (0x000b6c66) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000bc3e6) popup_call2_audio_wait_window_g

0x9981,	// (0x000b6c6e) popup_call2_audio_wait_window_t3

0xbc45,	// (0x000b8f32) bg_popup_call2_act_pane_ParamLimits

0xbc45,	// (0x000b8f32) bg_popup_call2_act_pane

0xbd05,	// (0x000b8ff2) call_type_pane_cp03_ParamLimits

0xbd05,	// (0x000b8ff2) call_type_pane_cp03

0xbd69,	// (0x000b9056) popup_call2_audio_first_window_g1_ParamLimits

0xbd69,	// (0x000b9056) popup_call2_audio_first_window_g1

0xbdd9,	// (0x000b90c6) popup_call2_audio_first_window_g2_ParamLimits

0xbdd9,	// (0x000b90c6) popup_call2_audio_first_window_g2

0xb435,	// (0x000b8722) popup_call2_audio_first_window_g3_ParamLimits

0xb435,	// (0x000b8722) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000bc814) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000bc814) popup_call2_audio_first_window_g

0xbeb7,	// (0x000b91a4) popup_call2_audio_first_window_t1_ParamLimits

0xbeb7,	// (0x000b91a4) popup_call2_audio_first_window_t1

0xbfba,	// (0x000b92a7) popup_call2_audio_first_window_t4_ParamLimits

0xbfba,	// (0x000b92a7) popup_call2_audio_first_window_t4

0xc09d,	// (0x000b938a) popup_call2_audio_first_window_t5_ParamLimits

0xc09d,	// (0x000b938a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000bc81f) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000bc81f) popup_call2_audio_first_window_t

0x9bb2,	// (0x000b6e9f) bg_popup_call2_act_pane_g1

0xc70c,	// (0x000b99f9) popup_cale_lunar_info_window_t1

0xc71a,	// (0x000b9a07) popup_cale_lunar_info_window_t2

0xc728,	// (0x000b9a15) popup_cale_lunar_info_window_t3

0x995f,	// (0x000b6c4c) bg_popup_call2_bubble_pane

0xc19e,	// (0x000b948b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc19e,	// (0x000b948b) bg_popup_call2_in_pane_cp01

0x963b,	// (0x000b6928) call_type_pane_cp02

0xc1e6,	// (0x000b94d3) popup_call2_audio_out_window_g1_ParamLimits

0xc1e6,	// (0x000b94d3) popup_call2_audio_out_window_g1

0xc212,	// (0x000b94ff) popup_call2_audio_out_window_g2_ParamLimits

0xc212,	// (0x000b94ff) popup_call2_audio_out_window_g2

0xc23a,	// (0x000b9527) popup_call2_audio_out_window_g3_ParamLimits

0xc23a,	// (0x000b9527) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000bc828) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000bc828) popup_call2_audio_out_window_g

0xc275,	// (0x000b9562) popup_call2_audio_out_window_t1_ParamLimits

0xc275,	// (0x000b9562) popup_call2_audio_out_window_t1

0xc2d4,	// (0x000b95c1) popup_call2_audio_out_window_t2_ParamLimits

0xc2d4,	// (0x000b95c1) popup_call2_audio_out_window_t2

0xc328,	// (0x000b9615) popup_call2_audio_out_window_t3_ParamLimits

0xc328,	// (0x000b9615) popup_call2_audio_out_window_t3

0xc33e,	// (0x000b962b) popup_call2_audio_out_window_t4_ParamLimits

0xc33e,	// (0x000b962b) popup_call2_audio_out_window_t4

0xc354,	// (0x000b9641) popup_call2_audio_out_window_t5_ParamLimits

0xc354,	// (0x000b9641) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000bc831) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000bc831) popup_call2_audio_out_window_t

0xc3b8,	// (0x000b96a5) bg_popup_call2_in_pane_ParamLimits

0xc3b8,	// (0x000b96a5) bg_popup_call2_in_pane

0xc414,	// (0x000b9701) popup_call2_audio_in_window_g1_ParamLimits

0xc414,	// (0x000b9701) popup_call2_audio_in_window_g1

0xc44c,	// (0x000b9739) popup_call2_audio_in_window_g2_ParamLimits

0xc44c,	// (0x000b9739) popup_call2_audio_in_window_g2

0xc484,	// (0x000b9771) popup_call2_audio_in_window_g3_ParamLimits

0xc484,	// (0x000b9771) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000bc83e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000bc83e) popup_call2_audio_in_window_g

0xc4dc,	// (0x000b97c9) popup_call2_audio_in_window_t1_ParamLimits

0xc4dc,	// (0x000b97c9) popup_call2_audio_in_window_t1

0xc55c,	// (0x000b9849) popup_call2_audio_in_window_t2_ParamLimits

0xc55c,	// (0x000b9849) popup_call2_audio_in_window_t2

0xc5dc,	// (0x000b98c9) popup_call2_audio_in_window_t3_ParamLimits

0xc5dc,	// (0x000b98c9) popup_call2_audio_in_window_t3

0xc5f6,	// (0x000b98e3) popup_call2_audio_in_window_t4_ParamLimits

0xc5f6,	// (0x000b98e3) popup_call2_audio_in_window_t4

0xc608,	// (0x000b98f5) popup_call2_audio_in_window_t5_ParamLimits

0xc608,	// (0x000b98f5) popup_call2_audio_in_window_t5

0xc61d,	// (0x000b990a) popup_call2_audio_in_window_t6_ParamLimits

0xc61d,	// (0x000b990a) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000bc847) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000bc847) popup_call2_audio_in_window_t

0x9bb2,	// (0x000b6e9f) bg_popup_call2_in_pane_g1

0xc736,	// (0x000b9a23) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000bc8af) popup_cale_lunar_info_window_t

0x9bba,	// (0x000b6ea7) bg_popup_call2_rect_pane_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_call2_rect_pane

0x995f,	// (0x000b6c4c) call2_cli_visual_graphic_pane

0x995f,	// (0x000b6c4c) call2_cli_visual_text_pane

0x9e16,	// (0x000b7103) smil_status_volume_pane_g3

0x0002,

0xa8e7,	// (0x000b7bd4) call2_cli_visual_graphic_pane_g1

0xa8e7,	// (0x000b7bd4) call2_cli_visual_graphic_pane_g2

0xa8e7,	// (0x000b7bd4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000bc854) call2_cli_visual_graphic_pane_g

0xc632,	// (0x000b991f) bg_popup_call2_rect_pane_g1

0xa985,	// (0x000b7c72) bg_popup_call2_rect_pane_g2

0xc63a,	// (0x000b9927) bg_popup_call2_rect_pane_g3

0xc642,	// (0x000b992f) bg_popup_call2_rect_pane_g4

0xc64a,	// (0x000b9937) bg_popup_call2_rect_pane_g5

0xc652,	// (0x000b993f) bg_popup_call2_rect_pane_g6

0xc65a,	// (0x000b9947) bg_popup_call2_rect_pane_g7

0xc662,	// (0x000b994f) bg_popup_call2_rect_pane_g8

0xc66a,	// (0x000b9957) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000bc85b) bg_popup_call2_rect_pane_g

0xc672,	// (0x000b995f) bg_popup_call2_bubble_pane_g1

0xc67a,	// (0x000b9967) bg_popup_call2_bubble_pane_g2

0xc682,	// (0x000b996f) bg_popup_call2_bubble_pane_g3

0xc68a,	// (0x000b9977) bg_popup_call2_bubble_pane_g4

0xc692,	// (0x000b997f) bg_popup_call2_bubble_pane_g5

0xc69a,	// (0x000b9987) bg_popup_call2_bubble_pane_g6

0xc6a2,	// (0x000b998f) bg_popup_call2_bubble_pane_g7

0xc6aa,	// (0x000b9997) bg_popup_call2_bubble_pane_g8

0xc6b2,	// (0x000b999f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000bc86e) bg_popup_call2_bubble_pane_g

0x03c0,	// (0x000ad6ad) aid_cale_week_size_cell_pane

0x0d25,	// (0x000ae012) aid_cams_cif_uncrop_pane_ParamLimits

0x0d25,	// (0x000ae012) aid_cams_cif_uncrop_pane

0x0ede,	// (0x000ae1cb) aid_cams_size_cell_ParamLimits

0x0ede,	// (0x000ae1cb) aid_cams_size_cell

0x0ef2,	// (0x000ae1df) grid_cams_pane_ParamLimits

0x0f0c,	// (0x000ae1f9) linegrid_cams_pane_ParamLimits

0x10ff,	// (0x000ae3ec) call_video_pane_t1

0x1119,	// (0x000ae406) call_video_pane_t2

0x0001,

0xf26e,	// (0x000bc55b) call_video_pane_t

0x154d,	// (0x000ae83a) aid_cale_month_size_cell_pane_ParamLimits

0x154d,	// (0x000ae83a) aid_cale_month_size_cell_pane

0xf60b,	// (0x000bc8f8) smil_status_volume_pane_g

0x9e23,	// (0x000b7110) volume_smil_pane_ParamLimits

0x94ff,	// (0x000b67ec) aid_popup2_width_pane

0x0310,	// (0x000ad5fd) cell_qdial_pane_g4_ParamLimits

0x0310,	// (0x000ad5fd) cell_qdial_pane_g4

0x2593,	// (0x000af880) aid_blid_cardinal_pane_ParamLimits

0x259f,	// (0x000af88c) aid_blid_destination_pane_ParamLimits

0x259f,	// (0x000af88c) aid_blid_destination_pane

0x9bba,	// (0x000b6ea7) bg_popup_call_poc_act_pane_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_call_poc_act_pane

0x9bba,	// (0x000b6ea7) bg_popup_call_poc_inact_pane_ParamLimits

0x9bba,	// (0x000b6ea7) bg_popup_call_poc_inact_pane

0xc6ba,	// (0x000b99a7) bg_popup_call_poc_act_pane_g1

0xc6c2,	// (0x000b99af) bg_popup_call_poc_act_pane_g2

0xc6ca,	// (0x000b99b7) bg_popup_call_poc_act_pane_g3

0xc68a,	// (0x000b9977) bg_popup_call_poc_act_pane_g4

0xc692,	// (0x000b997f) bg_popup_call_poc_act_pane_g5

0xc6d2,	// (0x000b99bf) bg_popup_call_poc_act_pane_g6

0xc6a2,	// (0x000b998f) bg_popup_call_poc_act_pane_g7

0xc6da,	// (0x000b99c7) bg_popup_call_poc_act_pane_g8

0x995f,	// (0x000b6c4c) main_usb_pane

0xc843,	// (0x000b9b30) popup_cale_lunar_info_window

0x13e2,	// (0x000ae6cf) im_reading_pane_t1_ParamLimits

0xab4d,	// (0x000b7e3a) list_im_pane_ParamLimits

0xab5e,	// (0x000b7e4b) scroll_pane_cp07_ParamLimits

0x995f,	// (0x000b6c4c) grid_highlight_pane_cp012

0x9bba,	// (0x000b6ea7) mup_scale_pane_ParamLimits

0xb523,	// (0x000b8810) main_usb_pane_g1_ParamLimits

0xb523,	// (0x000b8810) main_usb_pane_g1

0x331f,	// (0x000b060c) main_usb_pane_g2_ParamLimits

0x331f,	// (0x000b060c) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000bc898) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000bc898) main_usb_pane_g

0x3335,	// (0x000b0622) main_usb_pane_t1_ParamLimits

0x3335,	// (0x000b0622) main_usb_pane_t1

0x3347,	// (0x000b0634) main_usb_pane_t2_ParamLimits

0x3347,	// (0x000b0634) main_usb_pane_t2

0x3359,	// (0x000b0646) main_usb_pane_t3_ParamLimits

0x3359,	// (0x000b0646) main_usb_pane_t3

0x336b,	// (0x000b0658) main_usb_pane_t4_ParamLimits

0x336b,	// (0x000b0658) main_usb_pane_t4

0x3380,	// (0x000b066d) main_usb_pane_t5_ParamLimits

0x3380,	// (0x000b066d) main_usb_pane_t5

0x3395,	// (0x000b0682) main_usb_pane_t6_ParamLimits

0x3395,	// (0x000b0682) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000bc89d) main_usb_pane_t_ParamLimits

0x2534,	// (0x000af821) aid_text_placing

0x253f,	// (0x000af82c) main_location2_pane_t1_ParamLimits

0x2553,	// (0x000af840) main_location2_pane_t2_ParamLimits

0x2569,	// (0x000af856) main_location2_pane_t3_ParamLimits

0x257f,	// (0x000af86c) main_location2_pane_t4_ParamLimits

0x257f,	// (0x000af86c) main_location2_pane_t4

0xf3cf,	// (0x000bc6bc) main_location2_pane_t_ParamLimits

0x9bf6,	// (0x000b6ee3) find_pinb_pane_g2_ParamLimits

0x9bf6,	// (0x000b6ee3) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000bc40c) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000bc40c) find_pinb_pane_g

0x9c02,	// (0x000b6eef) find_pinb_pane_t1_ParamLimits

0x9c14,	// (0x000b6f01) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000bc411) find_pinb_pane_t_ParamLimits

0x995f,	// (0x000b6c4c) main_call3_pane

0x1b1c,	// (0x000aee09) cale_month_day_heading_pane_t1_ParamLimits

0x1ba2,	// (0x000aee8f) cale_month_day_heading_pane_t2_ParamLimits

0x1c33,	// (0x000aef20) cale_month_day_heading_pane_t3_ParamLimits

0x1cc4,	// (0x000aefb1) cale_month_day_heading_pane_t4_ParamLimits

0x1d55,	// (0x000af042) cale_month_day_heading_pane_t5_ParamLimits

0x1df6,	// (0x000af0e3) cale_month_day_heading_pane_t6_ParamLimits

0x1e9b,	// (0x000af188) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000bc593) cale_month_day_heading_pane_t_ParamLimits

0x2177,	// (0x000af464) smil_status_volume_pane

0x2ddc,	// (0x000b00c9) postcard_address_pane_ParamLimits

0x2ddc,	// (0x000b00c9) postcard_address_pane

0x2df2,	// (0x000b00df) postcard_message_pane_ParamLimits

0x2df2,	// (0x000b00df) postcard_message_pane

0x32fb,	// (0x000b05e8) call2_cli_visual_pane_t1_ParamLimits

0x32fb,	// (0x000b05e8) call2_cli_visual_pane_t1

0x3b88,	// (0x000b0e75) postcard_message_pane_t1_ParamLimits

0x3b88,	// (0x000b0e75) postcard_message_pane_t1

0x3b71,	// (0x000b0e5e) postcard_address_pane_t1_ParamLimits

0x3b71,	// (0x000b0e5e) postcard_address_pane_t1

0x3b5d,	// (0x000b0e4a) popup_call3_audio_in_window_ParamLimits

0x3b5d,	// (0x000b0e4a) popup_call3_audio_in_window

0x39e2,	// (0x000b0ccf) bg_popup_call3_in_pane_ParamLimits

0x39e2,	// (0x000b0ccf) bg_popup_call3_in_pane

0x3a5e,	// (0x000b0d4b) popup_call3_audio_in_window_g1_ParamLimits

0x3a5e,	// (0x000b0d4b) popup_call3_audio_in_window_g1

0x3a7e,	// (0x000b0d6b) popup_call3_audio_in_window_g2_ParamLimits

0x3a7e,	// (0x000b0d6b) popup_call3_audio_in_window_g2

0x3a9e,	// (0x000b0d8b) popup_call3_audio_in_window_g3_ParamLimits

0x3a9e,	// (0x000b0d8b) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000bc8ff) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000bc8ff) popup_call3_audio_in_window_g

0x3acf,	// (0x000b0dbc) popup_call3_audio_in_window_t1_ParamLimits

0x3acf,	// (0x000b0dbc) popup_call3_audio_in_window_t1

0x3b0d,	// (0x000b0dfa) popup_call3_audio_in_window_t2_ParamLimits

0x3b0d,	// (0x000b0dfa) popup_call3_audio_in_window_t2

0x3b4b,	// (0x000b0e38) popup_call3_audio_in_window_t3_ParamLimits

0x3b4b,	// (0x000b0e38) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000bc908) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000bc908) popup_call3_audio_in_window_t

0xaa48,	// (0x000b7d35) bg_popup_call3_rect_pane

0xc632,	// (0x000b991f) bg_popup_call3_rect_pane_g1

0xa985,	// (0x000b7c72) bg_popup_call3_rect_pane_g2

0xc63a,	// (0x000b9927) bg_popup_call3_rect_pane_g3

0xc642,	// (0x000b992f) bg_popup_call3_rect_pane_g4

0xc64a,	// (0x000b9937) bg_popup_call3_rect_pane_g5

0xc652,	// (0x000b993f) bg_popup_call3_rect_pane_g6

0xc65a,	// (0x000b9947) bg_popup_call3_rect_pane_g7

0x2999,	// (0x000afc86) mup_visualizer_osc_pane

0xb443,	// (0x000b8730) mup_visualizer_spec_pane

0x3a12,	// (0x000b0cff) call3_video_qcif_pane_ParamLimits

0x3a12,	// (0x000b0cff) call3_video_qcif_pane

0x3a25,	// (0x000b0d12) call3_video_qcif_uncrop_pane_ParamLimits

0x3a25,	// (0x000b0d12) call3_video_qcif_uncrop_pane

0x3a35,	// (0x000b0d22) call3_video_subqcif_pane_ParamLimits

0x3a35,	// (0x000b0d22) call3_video_subqcif_pane

0x3a4b,	// (0x000b0d38) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a4b,	// (0x000b0d38) call3_video_subqcif_uncrop_pane

0x3abe,	// (0x000b0dab) popup_call3_audio_in_window_g4_ParamLimits

0x3abe,	// (0x000b0dab) popup_call3_audio_in_window_g4

0x39d1,	// (0x000b0cbe) mup_spec_half_pane

0x39da,	// (0x000b0cc7) mup_spec_half_pane_cp

0xc8de,	// (0x000b9bcb) mup_osc_middle_pane

0xc8e7,	// (0x000b9bd4) mup_visualizer_osc_pane_g1

0x39b1,	// (0x000b0c9e) mup_spec_bar_pane_ParamLimits

0x39b1,	// (0x000b0c9e) mup_spec_bar_pane

0xc8cb,	// (0x000b9bb8) mup_spec_bar_pane_g1

0xc8d5,	// (0x000b9bc2) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc8f3) mup_spec_bar_pane_g

0x03c0,	// (0x000ad6ad) aid_cale_week_size_cell_pane_ParamLimits

0x03da,	// (0x000ad6c7) bg_cale_heading_pane_ParamLimits

0x0403,	// (0x000ad6f0) bg_cale_pane_cp01_ParamLimits

0x0425,	// (0x000ad712) cale_week_corner_pane_ParamLimits

0x0444,	// (0x000ad731) cale_week_day_heading_pane_ParamLimits

0x0472,	// (0x000ad75f) cale_week_scroll_pane_g1_ParamLimits

0x0496,	// (0x000ad783) cale_week_scroll_pane_g2_ParamLimits

0x04ae,	// (0x000ad79b) cale_week_scroll_pane_g3_ParamLimits

0x04c6,	// (0x000ad7b3) cale_week_scroll_pane_g4_ParamLimits

0x04e2,	// (0x000ad7cf) cale_week_scroll_pane_g5_ParamLimits

0x0502,	// (0x000ad7ef) cale_week_scroll_pane_g6_ParamLimits

0x0522,	// (0x000ad80f) cale_week_scroll_pane_g7_ParamLimits

0x0546,	// (0x000ad833) cale_week_scroll_pane_g8_ParamLimits

0x056a,	// (0x000ad857) cale_week_scroll_pane_g9_ParamLimits

0x0587,	// (0x000ad874) cale_week_scroll_pane_g10_ParamLimits

0x05a4,	// (0x000ad891) cale_week_scroll_pane_g11_ParamLimits

0x05c1,	// (0x000ad8ae) cale_week_scroll_pane_g12_ParamLimits

0x05de,	// (0x000ad8cb) cale_week_scroll_pane_g13_ParamLimits

0x05fb,	// (0x000ad8e8) cale_week_scroll_pane_g14_ParamLimits

0x0624,	// (0x000ad911) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000bc49d) cale_week_scroll_pane_g_ParamLimits

0x0671,	// (0x000ad95e) cale_week_time_pane_ParamLimits

0x0695,	// (0x000ad982) grid_cale_week_pane_ParamLimits

0xa9b9,	// (0x000b7ca6) listscroll_cale_week_pane_t1

0xa9cb,	// (0x000b7cb8) scroll_pane_cp08_ParamLimits

0x15ba,	// (0x000ae8a7) cale_month_corner_pane_ParamLimits

0xad7e,	// (0x000b806b) cale_month_pane_t1

0x1aa2,	// (0x000aed8f) cale_month_week_pane_ParamLimits

0x2362,	// (0x000af64f) popup_call_status_window_g1_ParamLimits

0x2376,	// (0x000af663) popup_call_status_window_g2_ParamLimits

0x238a,	// (0x000af677) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000bc643) popup_call_status_window_g_ParamLimits

0xb120,	// (0x000b840d) aid_call2_pane

0x2c50,	// (0x000aff3d) msg_header_pane_g1

0x2ddc,	// (0x000b00c9) postcard_address2_pane_ParamLimits

0x2ddc,	// (0x000b00c9) postcard_address2_pane

0x2df2,	// (0x000b00df) postcard_message2_pane_ParamLimits

0x2df2,	// (0x000b00df) postcard_message2_pane

0x3961,	// (0x000b0c4e) message2_row_pane_ParamLimits

0x3961,	// (0x000b0c4e) message2_row_pane

0x397e,	// (0x000b0c6b) address2_row_pane_ParamLimits

0x397e,	// (0x000b0c6b) address2_row_pane

0xc899,	// (0x000b9b86) postcard_message2_row_pane_g1

0xc8a1,	// (0x000b9b8e) postcard_message2_row_pane_t1

0xc899,	// (0x000b9b86) address2_row_pane_g1

0xc8a1,	// (0x000b9b8e) address2_row_pane_t1

0x0bc1,	// (0x000adeae) aid_size_cell_vorec

0x995f,	// (0x000b6c4c) main_rss_pane

0x3991,	// (0x000b0c7e) rss_list_single_pane_ParamLimits

0x3991,	// (0x000b0c7e) rss_list_single_pane

0xc8af,	// (0x000b9b9c) rss_list_single_pane_t1

0xc8bd,	// (0x000b9baa) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000bc8ee) rss_list_single_pane_t

0x995f,	// (0x000b6c4c) main_camera2_pane

0x995f,	// (0x000b6c4c) main_video2_pane

0x3bf7,	// (0x000b0ee4) cams_zoom_pane_cp2_ParamLimits

0x3bf7,	// (0x000b0ee4) cams_zoom_pane_cp2

0x3c0e,	// (0x000b0efb) image2_vga_pane_ParamLimits

0x3c0e,	// (0x000b0efb) image2_vga_pane

0x3c56,	// (0x000b0f43) main_camera2_pane_g1_ParamLimits

0x3c56,	// (0x000b0f43) main_camera2_pane_g1

0x3c76,	// (0x000b0f63) main_camera2_pane_g2_ParamLimits

0x3c76,	// (0x000b0f63) main_camera2_pane_g2

0x3c8d,	// (0x000b0f7a) main_camera2_pane_g3_ParamLimits

0x3c8d,	// (0x000b0f7a) main_camera2_pane_g3

0x3ca4,	// (0x000b0f91) main_camera2_pane_g4_ParamLimits

0x3ca4,	// (0x000b0f91) main_camera2_pane_g4

0x3cbb,	// (0x000b0fa8) main_camera2_pane_g5_ParamLimits

0x3cbb,	// (0x000b0fa8) main_camera2_pane_g5

0x3cd2,	// (0x000b0fbf) main_camera2_pane_g6_ParamLimits

0x3cd2,	// (0x000b0fbf) main_camera2_pane_g6

0x3ce9,	// (0x000b0fd6) main_camera2_pane_g7_ParamLimits

0x3ce9,	// (0x000b0fd6) main_camera2_pane_g7

0x3d00,	// (0x000b0fed) main_camera2_pane_g8_ParamLimits

0x3d00,	// (0x000b0fed) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000bc90f) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000bc90f) main_camera2_pane_g

0x3d2e,	// (0x000b101b) main_camera2_pane_t1_ParamLimits

0x3d2e,	// (0x000b101b) main_camera2_pane_t1

0x3d63,	// (0x000b1050) main_camera2_pane_t2_ParamLimits

0x3d63,	// (0x000b1050) main_camera2_pane_t2

0x3d80,	// (0x000b106d) main_camera2_pane_t3_ParamLimits

0x3d80,	// (0x000b106d) main_camera2_pane_t3

0x3dde,	// (0x000b10cb) main_camera2_pane_t4_ParamLimits

0x3dde,	// (0x000b10cb) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000bc922) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000bc922) main_camera2_pane_t

0x3e67,	// (0x000b1154) cams_zoom_pane_cp4_ParamLimits

0x3e67,	// (0x000b1154) cams_zoom_pane_cp4

0x3e7d,	// (0x000b116a) image2_cif_pane_ParamLimits

0x3e7d,	// (0x000b116a) image2_cif_pane

0x3ea8,	// (0x000b1195) image2_subqcif_pane_ParamLimits

0x3ea8,	// (0x000b1195) image2_subqcif_pane

0x3ec3,	// (0x000b11b0) main_video2_pane_g1_ParamLimits

0x3ec3,	// (0x000b11b0) main_video2_pane_g1

0x3edd,	// (0x000b11ca) main_video2_pane_g2_ParamLimits

0x3edd,	// (0x000b11ca) main_video2_pane_g2

0x3ef3,	// (0x000b11e0) main_video2_pane_g3_ParamLimits

0x3ef3,	// (0x000b11e0) main_video2_pane_g3

0x3f09,	// (0x000b11f6) main_video2_pane_g4_ParamLimits

0x3f09,	// (0x000b11f6) main_video2_pane_g4

0x3f1f,	// (0x000b120c) main_video2_pane_g5_ParamLimits

0x3f1f,	// (0x000b120c) main_video2_pane_g5

0x3f35,	// (0x000b1222) main_video2_pane_g6_ParamLimits

0x3f35,	// (0x000b1222) main_video2_pane_g6

0x0005,

0xf644,	// (0x000bc931) main_video2_pane_g_ParamLimits

0xf644,	// (0x000bc931) main_video2_pane_g

0x3f4f,	// (0x000b123c) main_video2_pane_t1_ParamLimits

0x3f4f,	// (0x000b123c) main_video2_pane_t1

0x3f73,	// (0x000b1260) main_video2_pane_t2_ParamLimits

0x3f73,	// (0x000b1260) main_video2_pane_t2

0x3fc3,	// (0x000b12b0) main_video2_pane_t3_ParamLimits

0x3fc3,	// (0x000b12b0) main_video2_pane_t3

0x0002,

0xf651,	// (0x000bc93e) main_video2_pane_t_ParamLimits

0xf651,	// (0x000bc93e) main_video2_pane_t

0x3453,	// (0x000b0740) call_muted_g2

0x0001,

0xf5f3,	// (0x000bc8e0) call_muted_g

0x995f,	// (0x000b6c4c) main_mup2_pane

0x400b,	// (0x000b12f8) main_mup2_pane_g1_ParamLimits

0x400b,	// (0x000b12f8) main_mup2_pane_g1

0x4017,	// (0x000b1304) main_mup2_pane_g2_ParamLimits

0x4017,	// (0x000b1304) main_mup2_pane_g2

0x9e8e,	// (0x000b717b) main_mup_pane_g13_cp1

0x9e96,	// (0x000b7183) mup_volume_pane_cp1

0x4035,	// (0x000b1322) main_mup2_pane_g4_ParamLimits

0x4035,	// (0x000b1322) main_mup2_pane_g4

0x4047,	// (0x000b1334) main_mup2_pane_g5_ParamLimits

0x4047,	// (0x000b1334) main_mup2_pane_g5

0x4059,	// (0x000b1346) main_mup2_pane_g6_ParamLimits

0x4059,	// (0x000b1346) main_mup2_pane_g6

0x406b,	// (0x000b1358) main_mup2_pane_g7_ParamLimits

0x406b,	// (0x000b1358) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000bc945) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000bc945) main_mup2_pane_g

0x4083,	// (0x000b1370) main_mup2_pane_t1_ParamLimits

0x4083,	// (0x000b1370) main_mup2_pane_t1

0x4099,	// (0x000b1386) main_mup2_pane_t2_ParamLimits

0x4099,	// (0x000b1386) main_mup2_pane_t2

0x40af,	// (0x000b139c) main_mup2_pane_t3_ParamLimits

0x40af,	// (0x000b139c) main_mup2_pane_t3

0x40c5,	// (0x000b13b2) main_mup2_pane_t4_ParamLimits

0x40c5,	// (0x000b13b2) main_mup2_pane_t4

0x40dd,	// (0x000b13ca) main_mup2_pane_t5_ParamLimits

0x40dd,	// (0x000b13ca) main_mup2_pane_t5

0x40f5,	// (0x000b13e2) main_mup2_pane_t6_ParamLimits

0x40f5,	// (0x000b13e2) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000bc954) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000bc954) main_mup2_pane_t

0x4125,	// (0x000b1412) mup2_visualizer_pane_ParamLimits

0x4125,	// (0x000b1412) mup2_visualizer_pane

0x4153,	// (0x000b1440) mup_progress_pane_cp_ParamLimits

0x4153,	// (0x000b1440) mup_progress_pane_cp

0x9e79,	// (0x000b7166) mup_volume_pane_cp_ParamLimits

0x9e79,	// (0x000b7166) mup_volume_pane_cp

0x4169,	// (0x000b1456) mup2_visualizer_pane_g1_ParamLimits

0x4169,	// (0x000b1456) mup2_visualizer_pane_g1

0xc91e,	// (0x000b9c0b) mup2_visualizer_pane_g2_ParamLimits

0xc91e,	// (0x000b9c0b) mup2_visualizer_pane_g2

0x4180,	// (0x000b146d) mup2_visualizer_pane_g3_ParamLimits

0x4180,	// (0x000b146d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000bc961) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000bc961) mup2_visualizer_pane_g

0xb66c,	// (0x000b8959) aid_size_cell_fmradio

0x3603,	// (0x000b08f0) aid_height_parent_landcape

0xabdc,	// (0x000b7ec9) wml_content_pane_cp

0xabe4,	// (0x000b7ed1) wml_tabs_pane

0xabed,	// (0x000b7eda) popup_wml_miniature_window

0xabf5,	// (0x000b7ee2) scroll_pane_cp021

0xac09,	// (0x000b7ef6) wml_content_pane_comp8

0x995f,	// (0x000b6c4c) bg_popup_sub_pane_cp05

0xc93c,	// (0x000b9c29) popup_wml_miniature_window_g1

0xc944,	// (0x000b9c31) wml_miniature_view_pane

0x418c,	// (0x000b1479) aid_size_wml_view

0x4194,	// (0x000b1481) wml_miniature_view_pane_g1

0x419d,	// (0x000b148a) wml_miniature_view_pane_g2

0x41a6,	// (0x000b1493) wml_miniature_view_pane_g3

0x41ae,	// (0x000b149b) wml_miniature_view_pane_g4

0x41b6,	// (0x000b14a3) wml_miniature_view_pane_g5

0x41be,	// (0x000b14ab) wml_miniature_view_pane_g6

0x41c6,	// (0x000b14b3) wml_miniature_view_pane_g7

0x41ce,	// (0x000b14bb) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000bc968) wml_miniature_view_pane_g

0xc94c,	// (0x000b9c39) background_graphic_ParamLimits

0xc94c,	// (0x000b9c39) background_graphic

0xc958,	// (0x000b9c45) wml_tabs_2_pane

0xc961,	// (0x000b9c4e) wml_tabs_3_pane_ParamLimits

0xc961,	// (0x000b9c4e) wml_tabs_3_pane

0xc973,	// (0x000b9c60) wml_tabs_4_pane_ParamLimits

0xc973,	// (0x000b9c60) wml_tabs_4_pane

0xc989,	// (0x000b9c76) wml_tabs_5_pane_ParamLimits

0xc989,	// (0x000b9c76) wml_tabs_5_pane

0xc9a3,	// (0x000b9c90) wml_tabs_pane_g2_ParamLimits

0xc9a3,	// (0x000b9c90) wml_tabs_pane_g2

0xc9b7,	// (0x000b9ca4) wml_tabs_pane_g3_ParamLimits

0xc9b7,	// (0x000b9ca4) wml_tabs_pane_g3

0x41d6,	// (0x000b14c3) wml_tabs_2_active_pane_ParamLimits

0x41d6,	// (0x000b14c3) wml_tabs_2_active_pane

0x41ea,	// (0x000b14d7) wml_tabs_2_passive_pane_ParamLimits

0x41ea,	// (0x000b14d7) wml_tabs_2_passive_pane

0x41fe,	// (0x000b14eb) wml_tabs_3_active_pane_cp_ParamLimits

0x41fe,	// (0x000b14eb) wml_tabs_3_active_pane_cp

0x4213,	// (0x000b1500) wml_tabs_3_passive_pane_ParamLimits

0x4213,	// (0x000b1500) wml_tabs_3_passive_pane

0x4226,	// (0x000b1513) wml_tabs_3_passive_pane_cp_ParamLimits

0x4226,	// (0x000b1513) wml_tabs_3_passive_pane_cp

0x423d,	// (0x000b152a) tabs_4_active_pane

0x4245,	// (0x000b1532) tabs_4_passive_pane

0x424f,	// (0x000b153c) tabs_4_passive_pane_cp

0x4257,	// (0x000b1544) tabs_4_passive_pane_cp2

0x3317,	// (0x000b0604) aid_height_text

0x296b,	// (0x000afc58) mup_volume_cont_pane_ParamLimits

0x296b,	// (0x000afc58) mup_volume_cont_pane

0xff9d,	// (0x000ad28a) aid_size_cell_pinb

0xffa7,	// (0x000ad294) aid_size_list_pinb

0x413f,	// (0x000b142c) mup2_volume_cont_pane_ParamLimits

0x413f,	// (0x000b142c) mup2_volume_cont_pane

0x9e65,	// (0x000b7152) mup2_volume_cont_pane_g1_ParamLimits

0x9e65,	// (0x000b7152) mup2_volume_cont_pane_g1

0xfc45,	// (0x000acf32) aid_size_cell_touch_ParamLimits

0xfc45,	// (0x000acf32) aid_size_cell_touch

0xfe8d,	// (0x000ad17a) touch_pane_ParamLimits

0xfe8d,	// (0x000ad17a) touch_pane

0x94ed,	// (0x000b67da) main_rss2_pane

0xc9d4,	// (0x000b9cc1) listscroll_rss2_pane

0xc9dd,	// (0x000b9cca) rss2_navigation_pane

0xc9e5,	// (0x000b9cd2) list_rss2_pane

0xb244,	// (0x000b8531) scroll_pane_cp22

0xc9ed,	// (0x000b9cda) rss2_navigation_pane_g1

0xc9f6,	// (0x000b9ce3) rss2_navigation_pane_g2

0xc9fe,	// (0x000b9ceb) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000bc979) rss2_navigation_pane_g

0xca06,	// (0x000b9cf3) rss2_navigation_pane_t1

0x4261,	// (0x000b154e) rss2_list_single_pane_ParamLimits

0x4261,	// (0x000b154e) rss2_list_single_pane

0xca14,	// (0x000b9d01) rss2_list_single_pane_t2

0xca22,	// (0x000b9d0f) rss2_list_single_pane_t3_ParamLimits

0xca22,	// (0x000b9d0f) rss2_list_single_pane_t3

0xca3f,	// (0x000b9d2c) rss2_list_single_pane_t4

0x215f,	// (0x000af44c) smil_status_pane_g1

0x953e,	// (0x000b682b) main_image2_pane_ParamLimits

0x953e,	// (0x000b682b) main_image2_pane

0x3d17,	// (0x000b1004) main_camera2_pane_g9_ParamLimits

0x3d17,	// (0x000b1004) main_camera2_pane_g9

0x3e33,	// (0x000b1120) main_camera2_pane_t5_ParamLimits

0x3e33,	// (0x000b1120) main_camera2_pane_t5

0x9e3a,	// (0x000b7127) main_camera2_pane_t6_ParamLimits

0x9e3a,	// (0x000b7127) main_camera2_pane_t6

0x4277,	// (0x000b1564) main_image2_pane_g1_ParamLimits

0x4277,	// (0x000b1564) main_image2_pane_g1

0x3031,	// (0x000b031e) smil2_video_pane_ParamLimits

0x3031,	// (0x000b031e) smil2_video_pane

0xfc85,	// (0x000acf72) aid_zoom_text_primary_cp

0x9534,	// (0x000b6821) popup_preview_fixed_window

0xab45,	// (0x000b7e32) im_reading_pane_g1

0x3be9,	// (0x000b0ed6) cams2_bc_adjust_pane_cp_ParamLimits

0x3be9,	// (0x000b0ed6) cams2_bc_adjust_pane_cp

0x3e59,	// (0x000b1146) cams2_bc_adjust_pane_ParamLimits

0x3e59,	// (0x000b1146) cams2_bc_adjust_pane

0xcefd,	// (0x000ba1ea) cams2_bc_adjust_pane_g1

0x9e9e,	// (0x000b718b) cams2_slider_pane

0x9ea7,	// (0x000b7194) cams2_slider_pane_g1

0x9eb0,	// (0x000b719d) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000bc980) cams2_slider_pane_g

0x0097,	// (0x000ad384) calc_display_pane_ParamLimits

0x00bf,	// (0x000ad3ac) calc_paper_pane_ParamLimits

0x00e2,	// (0x000ad3cf) grid_calc_pane_ParamLimits

0x9d55,	// (0x000b7042) popup_clock_digital_window_t1_ParamLimits

0xb609,	// (0x000b88f6) main_image_pane_t1

0x0079,	// (0x000ad366) aid_size_cell_calc_ParamLimits

0x0079,	// (0x000ad366) aid_size_cell_calc

0x3649,	// (0x000b0936) popup_blid_sat_info2_window_ParamLimits

0x3649,	// (0x000b0936) popup_blid_sat_info2_window

0xca55,	// (0x000b9d42) aid_size_cell_blid

0xca5d,	// (0x000b9d4a) bg_popup_window_pane_cp07

0xca80,	// (0x000b9d6d) grid_popup_blid_pane

0xca8a,	// (0x000b9d77) heading_pane_cp05_ParamLimits

0xca8a,	// (0x000b9d77) heading_pane_cp05

0xcb54,	// (0x000b9e41) cell_popup_blid_pane_ParamLimits

0xcb54,	// (0x000b9e41) cell_popup_blid_pane

0xcb7e,	// (0x000b9e6b) cell_popup_blid_pane_g1

0xcb86,	// (0x000b9e73) cell_popup_blid_pane_t1

0x410f,	// (0x000b13fc) mup2_indicator_pane_ParamLimits

0x410f,	// (0x000b13fc) mup2_indicator_pane

0xaa48,	// (0x000b7d35) mup2_visualizer_osc_pane

0xc92a,	// (0x000b9c17) mup2_visualizer_spec_pane_ParamLimits

0xc92a,	// (0x000b9c17) mup2_visualizer_spec_pane

0x428d,	// (0x000b157a) mup2_spec_half_pane

0x4296,	// (0x000b1583) mup2_spec_half_pane_cp

0x429e,	// (0x000b158b) mup2_spec_bar_pane_ParamLimits

0x429e,	// (0x000b158b) mup2_spec_bar_pane

0xc8cb,	// (0x000b9bb8) mup2_spec_bar_pane_g1

0xc8d5,	// (0x000b9bc2) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000bc8f3) mup2_spec_bar_pane_g

0x42be,	// (0x000b15ab) mup2_osc_middle_pane

0xc8e7,	// (0x000b9bd4) mup2_visualizer_osc_pane_g1

0x956c,	// (0x000b6859) popup_number_entry_window_t1_ParamLimits

0x957f,	// (0x000b686c) popup_number_entry_window_t2_ParamLimits

0x9591,	// (0x000b687e) popup_number_entry_window_t3_ParamLimits

0xfedf,	// (0x000ad1cc) popup_number_entry_window_t5_ParamLimits

0xfedf,	// (0x000ad1cc) popup_number_entry_window_t5

0xf0ca,	// (0x000bc3b7) popup_number_entry_window_t_ParamLimits

0x95a3,	// (0x000b6890) text_title_cp2_ParamLimits

0x9de4,	// (0x000b70d1) aid_hotspot_pointer_text2_pane

0x9e0a,	// (0x000b70f7) main_viewer_pane_g9_ParamLimits

0x9e0a,	// (0x000b70f7) main_viewer_pane_g9

0xad7e,	// (0x000b806b) cale_month_pane_t1_ParamLimits

0xada4,	// (0x000b8091) bg_cale_pane_ParamLimits

0xadbc,	// (0x000b80a9) list_cale_pane_ParamLimits

0xadcd,	// (0x000b80ba) listscroll_cale_day_pane_t1

0xaddf,	// (0x000b80cc) scroll_pane_cp09_ParamLimits

0x29a1,	// (0x000afc8e) main_mup_eq_pane_t1_ParamLimits

0x29a1,	// (0x000afc8e) main_mup_eq_pane_t1

0x29bd,	// (0x000afcaa) main_mup_eq_pane_t2_ParamLimits

0x29bd,	// (0x000afcaa) main_mup_eq_pane_t2

0x29d9,	// (0x000afcc6) main_mup_eq_pane_t3_ParamLimits

0x29d9,	// (0x000afcc6) main_mup_eq_pane_t3

0x29f7,	// (0x000afce4) main_mup_eq_pane_t4_ParamLimits

0x29f7,	// (0x000afce4) main_mup_eq_pane_t4

0x2a15,	// (0x000afd02) main_mup_eq_pane_t5_ParamLimits

0x2a15,	// (0x000afd02) main_mup_eq_pane_t5

0x2a33,	// (0x000afd20) main_mup_eq_pane_t6_ParamLimits

0x2a33,	// (0x000afd20) main_mup_eq_pane_t6

0x2a49,	// (0x000afd36) main_mup_eq_pane_t7_ParamLimits

0x2a49,	// (0x000afd36) main_mup_eq_pane_t7

0x2a5f,	// (0x000afd4c) main_mup_eq_pane_t8_ParamLimits

0x2a5f,	// (0x000afd4c) main_mup_eq_pane_t8

0x2a75,	// (0x000afd62) main_mup_eq_pane_t9_ParamLimits

0x2a75,	// (0x000afd62) main_mup_eq_pane_t9

0x2a91,	// (0x000afd7e) main_mup_eq_pane_t10_ParamLimits

0x2a91,	// (0x000afd7e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000bc742) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000bc742) main_mup_eq_pane_t

0x2b66,	// (0x000afe53) mup_equalizer_pane_cp5_ParamLimits

0x2b7e,	// (0x000afe6b) mup_equalizer_pane_cp6_ParamLimits

0x2b96,	// (0x000afe83) mup_equalizer_pane_cp7_ParamLimits

0x94ed,	// (0x000b67da) main_gallery_pane

0xc8f0,	// (0x000b9bdd) smil2_volume_pane

0xc8f8,	// (0x000b9be5) smil_status_volume_pane_g1_ParamLimits

0xc90b,	// (0x000b9bf8) smil_status_volume_pane_g2_ParamLimits

0x9e16,	// (0x000b7103) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000bc8f8) smil_status_volume_pane_g_ParamLimits

0xca5d,	// (0x000b9d4a) bg_popup_window_pane_cp07_ParamLimits

0xca6b,	// (0x000b9d58) blid_firmament_pane

0x42c7,	// (0x000b15b4) aid_size_cell_gallery_ParamLimits

0x42c7,	// (0x000b15b4) aid_size_cell_gallery

0x42dd,	// (0x000b15ca) grid_gallery_pane_ParamLimits

0x42dd,	// (0x000b15ca) grid_gallery_pane

0x42f8,	// (0x000b15e5) cell_gallery_pane_ParamLimits

0x42f8,	// (0x000b15e5) cell_gallery_pane

0xcb94,	// (0x000b9e81) bg_cell_gallery_focus_pane_ParamLimits

0xcb94,	// (0x000b9e81) bg_cell_gallery_focus_pane

0xcba6,	// (0x000b9e93) cell_gallery_pane_g1_ParamLimits

0xcba6,	// (0x000b9e93) cell_gallery_pane_g1

0x4343,	// (0x000b1630) cell_gallery_pane_g2_ParamLimits

0x4343,	// (0x000b1630) cell_gallery_pane_g2

0x4350,	// (0x000b163d) cell_gallery_pane_g3_ParamLimits

0x4350,	// (0x000b163d) cell_gallery_pane_g3

0xcbb2,	// (0x000b9e9f) cell_gallery_pane_g4_ParamLimits

0xcbb2,	// (0x000b9e9f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000bc9a6) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000bc9a6) cell_gallery_pane_g

0xcbbe,	// (0x000b9eab) bg_cell_gallery_focus_pane_g1

0xcbc6,	// (0x000b9eb3) bg_cell_gallery_focus_pane_g2

0xcbce,	// (0x000b9ebb) bg_cell_gallery_focus_pane_g3

0xcbd6,	// (0x000b9ec3) bg_cell_gallery_focus_pane_g4

0xcbde,	// (0x000b9ecb) bg_cell_gallery_focus_pane_g5

0xcbe6,	// (0x000b9ed3) bg_cell_gallery_focus_pane_g6

0xcbee,	// (0x000b9edb) bg_cell_gallery_focus_pane_g7

0xcbf6,	// (0x000b9ee3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000bc9af) bg_cell_gallery_focus_pane_g

0xcbfe,	// (0x000b9eeb) aid_firma_cardinal

0xcc12,	// (0x000b9eff) blid_firmament_pane_t1

0xcc29,	// (0x000b9f16) blid_firmament_pane_t2

0xcc40,	// (0x000b9f2d) blid_firmament_pane_t3

0xcc57,	// (0x000b9f44) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000bc9c0) blid_firmament_pane_t

0xcc6e,	// (0x000b9f5b) blid_sat_info_pane

0xcc7e,	// (0x000b9f6b) blid_sat_info_pane_g1

0xcc7e,	// (0x000b9f6b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000bc9c9) blid_sat_info_pane_g

0xcc88,	// (0x000b9f75) blid_sat_info_pane_t1

0xcc96,	// (0x000b9f83) smil2_volume_content_pane

0xcc9f,	// (0x000b9f8c) smil2_volume_pane_g1

0xcca7,	// (0x000b9f94) smil2_volume_content_pane_g1

0xccb0,	// (0x000b9f9d) smil2_volume_content_pane_g2

0xccb9,	// (0x000b9fa6) smil2_volume_content_pane_g3

0xccc2,	// (0x000b9faf) smil2_volume_content_pane_g4

0xcccb,	// (0x000b9fb8) smil2_volume_content_pane_g5

0xccd4,	// (0x000b9fc1) smil2_volume_content_pane_g6

0xccdd,	// (0x000b9fca) smil2_volume_content_pane_g7

0xcce6,	// (0x000b9fd3) smil2_volume_content_pane_g8

0xccef,	// (0x000b9fdc) smil2_volume_content_pane_g9

0xccf8,	// (0x000b9fe5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000bc9ce) smil2_volume_content_pane_g

0x075c,	// (0x000ada49) cale_week_day_heading_pane_t1_ParamLimits

0x07a6,	// (0x000ada93) cale_week_day_heading_pane_t2_ParamLimits

0x07f5,	// (0x000adae2) cale_week_day_heading_pane_t3_ParamLimits

0x0844,	// (0x000adb31) cale_week_day_heading_pane_t4_ParamLimits

0x0893,	// (0x000adb80) cale_week_day_heading_pane_t5_ParamLimits

0x08e6,	// (0x000adbd3) cale_week_day_heading_pane_t6_ParamLimits

0x093d,	// (0x000adc2a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000bc4be) cale_week_day_heading_pane_t_ParamLimits

0xa9ed,	// (0x000b7cda) bg_cale_side_pane_ParamLimits

0x0987,	// (0x000adc74) cale_week_time_pane_t1_ParamLimits

0x09c1,	// (0x000adcae) cale_week_time_pane_t2_ParamLimits

0x09fb,	// (0x000adce8) cale_week_time_pane_t3_ParamLimits

0x0a35,	// (0x000add22) cale_week_time_pane_t4_ParamLimits

0x0a6f,	// (0x000add5c) cale_week_time_pane_t5_ParamLimits

0x0aa9,	// (0x000add96) cale_week_time_pane_t6_ParamLimits

0x0ae3,	// (0x000addd0) cale_week_time_pane_t7_ParamLimits

0x0b1d,	// (0x000ade0a) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000bc4cd) cale_week_time_pane_t_ParamLimits

0x0b5d,	// (0x000ade4a) cell_cale_week_pane_g2_ParamLimits

0xa9ed,	// (0x000b7cda) bg_cale_side_pane_cp01_ParamLimits

0x1f44,	// (0x000af231) cale_month_week_pane_t1_ParamLimits

0x1f5d,	// (0x000af24a) cale_month_week_pane_t2_ParamLimits

0x1f76,	// (0x000af263) cale_month_week_pane_t3_ParamLimits

0x1f8f,	// (0x000af27c) cale_month_week_pane_t4_ParamLimits

0x1fa8,	// (0x000af295) cale_month_week_pane_t5_ParamLimits

0x1fc1,	// (0x000af2ae) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000bc5a2) cale_month_week_pane_t_ParamLimits

0x9cd5,	// (0x000b6fc2) cell_cale_month_pane_g1_ParamLimits

0x94ed,	// (0x000b67da) main_cale_event_viewer_pane

0x94ed,	// (0x000b67da) listscroll_cale_event_viewer_pane

0xcd01,	// (0x000b9fee) list_cale_ev_pane

0xcd09,	// (0x000b9ff6) scroll_pane_cp023

0x435d,	// (0x000b164a) field_cale_ev_pane_ParamLimits

0x435d,	// (0x000b164a) field_cale_ev_pane

0xcd15,	// (0x000ba002) field_cale_ev_content_pane_ParamLimits

0xcd15,	// (0x000ba002) field_cale_ev_content_pane

0xcd21,	// (0x000ba00e) field_cale_ev_pane_g1_ParamLimits

0xcd21,	// (0x000ba00e) field_cale_ev_pane_g1

0xcd2d,	// (0x000ba01a) field_cale_ev_pane_g2_ParamLimits

0xcd2d,	// (0x000ba01a) field_cale_ev_pane_g2

0xcd45,	// (0x000ba032) field_cale_ev_pane_g3_ParamLimits

0xcd45,	// (0x000ba032) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000bc9e3) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000bc9e3) field_cale_ev_pane_g

0xcd5d,	// (0x000ba04a) field_cale_ev_pane_t1_ParamLimits

0xcd5d,	// (0x000ba04a) field_cale_ev_pane_t1

0x4381,	// (0x000b166e) field_cale_ev_content_pane_t1_ParamLimits

0x4381,	// (0x000b166e) field_cale_ev_content_pane_t1

0xb4ef,	// (0x000b87dc) bg_button_pane_cp01

0x03a4,	// (0x000ad691) listscroll_cale_week_pane_ParamLimits

0x03b6,	// (0x000ad6a3) popup_toolbar_window_cp01

0xa9b9,	// (0x000b7ca6) listscroll_cale_week_pane_t1_ParamLimits

0x03a4,	// (0x000ad691) listscroll_cale_day_pane_ParamLimits

0x03b6,	// (0x000ad6a3) popup_toolbar_window_cp02

0xadcd,	// (0x000b80ba) listscroll_cale_day_pane_t1_ParamLimits

0x03a4,	// (0x000ad691) main_cale_month_pane_ParamLimits

0x38c9,	// (0x000b0bb6) popup_toolbar_window_cp03_ParamLimits

0x38c9,	// (0x000b0bb6) popup_toolbar_window_cp03

0x2eef,	// (0x000b01dc) main_image_pane_g2_ParamLimits

0x2eef,	// (0x000b01dc) main_image_pane_g2

0x2f00,	// (0x000b01ed) main_image_pane_g3_ParamLimits

0x2f00,	// (0x000b01ed) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000bc7d4) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000bc7d4) main_image_pane_g

0xb609,	// (0x000b88f6) main_image_pane_t1_ParamLimits

0x2f11,	// (0x000b01fe) main_image_pane_t2_ParamLimits

0x2f11,	// (0x000b01fe) main_image_pane_t2

0x2f23,	// (0x000b0210) main_image_pane_t3_ParamLimits

0x2f23,	// (0x000b0210) main_image_pane_t3

0x2f4b,	// (0x000b0238) main_image_pane_t4_ParamLimits

0x2f4b,	// (0x000b0238) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000bc7db) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000bc7db) main_image_pane_t

0x2f6b,	// (0x000b0258) popup_image_details_window_cp01

0x2f75,	// (0x000b0262) popup_toobar_trans_pane_cp01_ParamLimits

0x2f75,	// (0x000b0262) popup_toobar_trans_pane_cp01

0x373c,	// (0x000b0a29) popup_image_details_window_ParamLimits

0x373c,	// (0x000b0a29) popup_image_details_window

0xc84f,	// (0x000b9b3c) popup_image_focus_window

0x3ba3,	// (0x000b0e90) camera2_autofocus_pane_ParamLimits

0x3ba3,	// (0x000b0e90) camera2_autofocus_pane

0x94ed,	// (0x000b67da) bg_popup_sub_pane_cp06

0xcd74,	// (0x000ba061) popup_image_focus_window_g1

0xcd7c,	// (0x000ba069) popup_image_focus_window_g2

0xcd84,	// (0x000ba071) popup_image_focus_window_g3

0xcd8c,	// (0x000ba079) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000bc9ea) popup_image_focus_window_g

0xcd94,	// (0x000ba081) popup_image_focus_window_t1

0xcda2,	// (0x000ba08f) popup_image_focus_window_t2

0xcdb2,	// (0x000ba09f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000bc9f3) popup_image_focus_window_t

0xcdc0,	// (0x000ba0ad) camera2_autofocus_pane_g1

0x953e,	// (0x000b682b) bg_tb_trans_pane_cp01

0xcdce,	// (0x000ba0bb) popup_image_details_window_g1

0xcde1,	// (0x000ba0ce) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000bca05) popup_image_details_window_g

0xce0a,	// (0x000ba0f7) popup_image_details_window_t1

0xce1c,	// (0x000ba109) popup_image_details_window_t2

0xce35,	// (0x000ba122) popup_image_details_window_t3

0xce49,	// (0x000ba136) popup_image_details_window_t4

0xce64,	// (0x000ba151) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000bca0c) popup_image_details_window_t

0xa87e,	// (0x000b7b6b) bg_calc_paper_pane_ParamLimits

0x9c31,	// (0x000b6f1e) grid_highlight_pane_cp013

0x9c3b,	// (0x000b6f28) list_calc_pane_ParamLimits

0x9c4d,	// (0x000b6f3a) scroll_pane_cp024

0xa892,	// (0x000b7b7f) bg_calc_display_pane_ParamLimits

0x01e2,	// (0x000ad4cf) calc_display_pane_t1_ParamLimits

0x01f4,	// (0x000ad4e1) calc_display_pane_t2_ParamLimits

0x9c55,	// (0x000b6f42) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000bc43e) calc_display_pane_t_ParamLimits

0x02bd,	// (0x000ad5aa) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000bc45b) cell_calc_pane_g

0x02c6,	// (0x000ad5b3) cell_calc_pane_t1

0xa8f1,	// (0x000b7bde) grid_highlight_pane_cp02_ParamLimits

0xa907,	// (0x000b7bf4) toolbar_button_pane_cp01_ParamLimits

0xa907,	// (0x000b7bf4) toolbar_button_pane_cp01

0xb64e,	// (0x000b893b) temp_image_control_pane_ParamLimits

0xb64e,	// (0x000b893b) temp_image_control_pane

0x953e,	// (0x000b682b) main_mp3_pane

0xce7e,	// (0x000ba16b) temp_image_control_pane_g1_ParamLimits

0xce7e,	// (0x000ba16b) temp_image_control_pane_g1

0xce8c,	// (0x000ba179) temp_image_control_pane_g2_ParamLimits

0xce8c,	// (0x000ba179) temp_image_control_pane_g2

0xce9e,	// (0x000ba18b) temp_image_control_pane_g3_ParamLimits

0xce9e,	// (0x000ba18b) temp_image_control_pane_g3

0x43d2,	// (0x000b16bf) temp_image_control_pane_g4_ParamLimits

0x43d2,	// (0x000b16bf) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000bca17) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000bca17) temp_image_control_pane_g

0xce7e,	// (0x000ba16b) main_mp3_pane_g1

0x43e5,	// (0x000b16d2) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000bca20) main_mp3_pane_g

0xcee1,	// (0x000ba1ce) main_mp3_pane_t1

0xaa50,	// (0x000b7d3d) main_camera_pane_g8_ParamLimits

0xaa50,	// (0x000b7d3d) main_camera_pane_g8

0x0e84,	// (0x000ae171) main_video_pane_g7_ParamLimits

0x0e84,	// (0x000ae171) main_video_pane_g7

0x9e53,	// (0x000b7140) main_camera2_pane_t7_ParamLimits

0x9e53,	// (0x000b7140) main_camera2_pane_t7

0xab9c,	// (0x000b7e89) scroll_pane_cp025_ParamLimits

0xab9c,	// (0x000b7e89) scroll_pane_cp025

0xabb0,	// (0x000b7e9d) scroll_pane_cp026_ParamLimits

0xabb0,	// (0x000b7e9d) scroll_pane_cp026

0xabbf,	// (0x000b7eac) wml_content_pane_ParamLimits

0x94ed,	// (0x000b67da) main_touch_calib_pane

0x44b7,	// (0x000b17a4) main_touch_calib_pane_g1

0x44c9,	// (0x000b17b6) main_touch_calib_pane_g2

0x44db,	// (0x000b17c8) main_touch_calib_pane_g3

0x44ed,	// (0x000b17da) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000bca3e) main_touch_calib_pane_g

0x44ff,	// (0x000b17ec) main_touch_calib_pane_t1

0x4519,	// (0x000b1806) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000bca47) main_touch_calib_pane_t

0xb2bf,	// (0x000b85ac) mup_progress_pane_cp02

0xb2de,	// (0x000b85cb) navi_pane_g1

0xb340,	// (0x000b862d) navi_pane_mp_t3

0x953e,	// (0x000b682b) main_mp3_pane_ParamLimits

0x390b,	// (0x000b0bf8) navi_pane_ParamLimits

0xce7e,	// (0x000ba16b) main_mp3_pane_g1_ParamLimits

0x43e5,	// (0x000b16d2) main_mp3_pane_g2_ParamLimits

0x43f1,	// (0x000b16de) main_mp3_pane_g3_ParamLimits

0x43f1,	// (0x000b16de) main_mp3_pane_g3

0x43ff,	// (0x000b16ec) main_mp3_pane_g4_ParamLimits

0x43ff,	// (0x000b16ec) main_mp3_pane_g4

0xceae,	// (0x000ba19b) main_mp3_pane_g5_ParamLimits

0xceae,	// (0x000ba19b) main_mp3_pane_g5

0xcebc,	// (0x000ba1a9) main_mp3_pane_g6_ParamLimits

0xcebc,	// (0x000ba1a9) main_mp3_pane_g6

0xcec9,	// (0x000ba1b6) main_mp3_pane_g7_ParamLimits

0xcec9,	// (0x000ba1b6) main_mp3_pane_g7

0xced5,	// (0x000ba1c2) main_mp3_pane_g8_ParamLimits

0xced5,	// (0x000ba1c2) main_mp3_pane_g8

0xf733,	// (0x000bca20) main_mp3_pane_g_ParamLimits

0x440b,	// (0x000b16f8) main_mp3_pane_t2

0x4419,	// (0x000b1706) main_mp3_pane_t3

0xceef,	// (0x000ba1dc) main_mp3_pane_t4

0xcf05,	// (0x000ba1f2) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000bca31) main_mp3_pane_t

0xcf13,	// (0x000ba200) mup_progress_pane_cp01

0xf0c2,	// (0x000bc3af) aid_zoom_text_secondary2

0xcd01,	// (0x000b9fee) list_cale_ev2_pane

0xcd09,	// (0x000b9ff6) scroll_pane_cp023_ParamLimits

0x4573,	// (0x000b1860) field_cale_ev2_pane_ParamLimits

0x4573,	// (0x000b1860) field_cale_ev2_pane

0x4597,	// (0x000b1884) field_cale_ev2_pane_g1_ParamLimits

0x4597,	// (0x000b1884) field_cale_ev2_pane_g1

0x45a3,	// (0x000b1890) field_cale_ev2_pane_g2_ParamLimits

0x45a3,	// (0x000b1890) field_cale_ev2_pane_g2

0x45bb,	// (0x000b18a8) field_cale_ev2_pane_g3_ParamLimits

0x45bb,	// (0x000b18a8) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000bca52) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000bca52) field_cale_ev2_pane_g

0x45d3,	// (0x000b18c0) field_cale_ev2_pane_t1_ParamLimits

0x45d3,	// (0x000b18c0) field_cale_ev2_pane_t1

0x45ea,	// (0x000b18d7) field_cale_ev2_pane_t2_ParamLimits

0x45ea,	// (0x000b18d7) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000bca5b) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000bca5b) field_cale_ev2_pane_t

0x2d8c,	// (0x000b0079) main_postcard_pane_g5_ParamLimits

0x2d8c,	// (0x000b0079) main_postcard_pane_g5

0x2da2,	// (0x000b008f) main_postcard_pane_g6_ParamLimits

0x2da2,	// (0x000b008f) main_postcard_pane_g6

0x0c30,	// (0x000adf1d) camera2_autofocus_pane_cp_ParamLimits

0x0c30,	// (0x000adf1d) camera2_autofocus_pane_cp

0x953e,	// (0x000b682b) main_mup3_pane

0x461f,	// (0x000b190c) main_mup3_pane_g1_ParamLimits

0x461f,	// (0x000b190c) main_mup3_pane_g1

0x4641,	// (0x000b192e) main_mup3_pane_g2_ParamLimits

0x4641,	// (0x000b192e) main_mup3_pane_g2

0x46c2,	// (0x000b19af) main_mup3_pane_g3_ParamLimits

0x46c2,	// (0x000b19af) main_mup3_pane_g3

0x470a,	// (0x000b19f7) main_mup3_pane_g4_ParamLimits

0x470a,	// (0x000b19f7) main_mup3_pane_g4

0x4750,	// (0x000b1a3d) main_mup3_pane_g5_ParamLimits

0x4750,	// (0x000b1a3d) main_mup3_pane_g5

0x4798,	// (0x000b1a85) main_mup3_pane_g6_ParamLimits

0x4798,	// (0x000b1a85) main_mup3_pane_g6

0xcf1b,	// (0x000ba208) main_mup3_pane_g7_ParamLimits

0xcf1b,	// (0x000ba208) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000bca6b) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000bca6b) main_mup3_pane_g

0x4818,	// (0x000b1b05) main_mup3_pane_t1_ParamLimits

0x4818,	// (0x000b1b05) main_mup3_pane_t1

0x4886,	// (0x000b1b73) main_mup3_pane_t2_ParamLimits

0x4886,	// (0x000b1b73) main_mup3_pane_t2

0x495c,	// (0x000b1c49) main_mup3_pane_t4_ParamLimits

0x495c,	// (0x000b1c49) main_mup3_pane_t4

0x49ba,	// (0x000b1ca7) main_mup3_pane_t5_ParamLimits

0x49ba,	// (0x000b1ca7) main_mup3_pane_t5

0x4a74,	// (0x000b1d61) main_mup3_pane_t6_ParamLimits

0x4a74,	// (0x000b1d61) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000bca7c) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000bca7c) main_mup3_pane_t

0x4b2c,	// (0x000b1e19) mup3_progress_pane_ParamLimits

0x4b2c,	// (0x000b1e19) mup3_progress_pane

0x4bbe,	// (0x000b1eab) popup_mup3_control_window_ParamLimits

0x4bbe,	// (0x000b1eab) popup_mup3_control_window

0xcf29,	// (0x000ba216) popup_mup3_text_window

0x4bf4,	// (0x000b1ee1) mup3_progress_pane_t1

0x4c12,	// (0x000b1eff) mup3_progress_pane_t2

0xcf31,	// (0x000ba21e) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000bca89) mup3_progress_pane_t

0xcf4e,	// (0x000ba23b) mup_progress_pane_cp03

0x94ed,	// (0x000b67da) bg_tb_trans_pane_cp04

0x4c30,	// (0x000b1f1d) mup3_volume_pane

0x4c38,	// (0x000b1f25) popup_mup3_control_window_g1

0x4c41,	// (0x000b1f2e) mup3_volume_pane_g1

0x4c4a,	// (0x000b1f37) mup3_volume_pane_g2

0x4c53,	// (0x000b1f40) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000bca90) mup3_volume_pane_g

0x94ed,	// (0x000b67da) bg_tb_trans_pane_cp03

0xcf5e,	// (0x000ba24b) popup_mup3_text_window_g1

0xcf66,	// (0x000ba253) popup_mup3_text_window_t1

0xa8da,	// (0x000b7bc7) list_calc_item_pane_g1_ParamLimits

0xc9cb,	// (0x000b9cb8) mup_volume_pane_cp_g1

0x4533,	// (0x000b1820) main_touch_calib_pane_t3

0x4547,	// (0x000b1834) main_touch_calib_pane_t4

0x455d,	// (0x000b184a) main_touch_calib_pane_t5

0x94f7,	// (0x000b67e4) aid_cell_size_toolbar2

0x94ff,	// (0x000b67ec) aid_popup3_width_pane

0xfc75,	// (0x000acf62) aid_zoom_text_msg_primary

0x0c0d,	// (0x000adefa) vorec_t7

0xa89e,	// (0x000b7b8b) bg_calc_paper_pane_g1_ParamLimits

0xa8aa,	// (0x000b7b97) bg_calc_paper_pane_g2_ParamLimits

0xa8b6,	// (0x000b7ba3) bg_calc_paper_pane_g3_ParamLimits

0xa8c2,	// (0x000b7baf) bg_calc_paper_pane_g4_ParamLimits

0xa8ce,	// (0x000b7bbb) bg_calc_paper_pane_g5_ParamLimits

0x0243,	// (0x000ad530) bg_calc_paper_pane_g6_ParamLimits

0x0256,	// (0x000ad543) bg_calc_paper_pane_g7_ParamLimits

0x0269,	// (0x000ad556) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000bc445) bg_calc_paper_pane_g_ParamLimits

0x027a,	// (0x000ad567) calc_bg_paper_pane_g9_ParamLimits

0x0d92,	// (0x000ae07f) image_qvga_pane_ParamLimits

0x0d92,	// (0x000ae07f) image_qvga_pane

0x9bba,	// (0x000b6ea7) bg_popup_sub_pane_cp04_ParamLimits

0xb585,	// (0x000b8872) popup_mup_playback_window_g1_ParamLimits

0xb591,	// (0x000b887e) popup_mup_playback_window_t1_ParamLimits

0xb5a6,	// (0x000b8893) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000bc7cf) popup_mup_playback_window_t_ParamLimits

0x4027,	// (0x000b1314) main_mup2_pane_g3_ParamLimits

0x4027,	// (0x000b1314) main_mup2_pane_g3

0x1198,	// (0x000ae485) popup_toolbar_window_cp04

0xb9a1,	// (0x000b8c8e) popup_call2_audio_second_window_g3_ParamLimits

0xb9a1,	// (0x000b8c8e) popup_call2_audio_second_window_g3

0xbe3d,	// (0x000b912a) popup_call2_audio_first_window_g4_ParamLimits

0xbe3d,	// (0x000b912a) popup_call2_audio_first_window_g4

0xc4bc,	// (0x000b97a9) popup_call2_audio_in_window_g4_ParamLimits

0xc4bc,	// (0x000b97a9) popup_call2_audio_in_window_g4

0x2ed1,	// (0x000b01be) aid_area_sk_bg_cut_ParamLimits

0x2ed1,	// (0x000b01be) aid_area_sk_bg_cut

0xb5bb,	// (0x000b88a8) aid_area_sk_bg_cut_2_ParamLimits

0xb5bb,	// (0x000b88a8) aid_area_sk_bg_cut_2

0x4333,	// (0x000b1620) aid_placing_details_win

0x433b,	// (0x000b1628) aid_placing_details_win_2

0xcdc0,	// (0x000ba0ad) camera2_autofocus_pane_g1_ParamLimits

0xfe26,	// (0x000ad113) popup_fixed_preview_cale_window_ParamLimits

0xfe26,	// (0x000ad113) popup_fixed_preview_cale_window

0xb387,	// (0x000b8674) navi_slider_pane_g3

0xb390,	// (0x000b867d) navi_slider_pane_g4

0xb399,	// (0x000b8686) navi_slider_pane_g5

0xb387,	// (0x000b8674) navi_slider_pane_g6

0x9d7b,	// (0x000b7068) navi_slider_pane_g7

0xb4bc,	// (0x000b87a9) mup_scale_pane_g3

0xb4c5,	// (0x000b87b2) mup_scale_pane_g4

0xb4ce,	// (0x000b87bb) mup_scale_pane_g5

0x2bae,	// (0x000afe9b) mup_scale_pane_g6

0x2bb7,	// (0x000afea4) mup_scale_pane_g7

0xb387,	// (0x000b8674) cams2_slider_pane_g3

0xca4d,	// (0x000b9d3a) cams2_slider_pane_g4

0x9eb9,	// (0x000b71a6) cams2_slider_pane_g5

0xb387,	// (0x000b8674) cams2_slider_pane_g6

0x9ec1,	// (0x000b71ae) cams2_slider_pane_g7

0xcc7e,	// (0x000b9f6b) camera2_autofocus_pane_cp_g1

0xc821,	// (0x000b9b0e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc821,	// (0x000b9b0e) bg_popup_preview_window_pane_cp02

0xcf74,	// (0x000ba261) list_fp_cale_pane_ParamLimits

0xcf74,	// (0x000ba261) list_fp_cale_pane

0xcf80,	// (0x000ba26d) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf80,	// (0x000ba26d) popup_fixed_preview_cale_window_t1

0x4c5c,	// (0x000b1f49) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c5c,	// (0x000b1f49) popup_fixed_preview_cale_window_t2

0x4c71,	// (0x000b1f5e) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c71,	// (0x000b1f5e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000bca97) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000bca97) popup_fixed_preview_cale_window_t

0x4c86,	// (0x000b1f73) list_single_fp_cale_pane_ParamLimits

0x4c86,	// (0x000b1f73) list_single_fp_cale_pane

0xcf9e,	// (0x000ba28b) list_single_fp_cale_pane_g1_ParamLimits

0xcf9e,	// (0x000ba28b) list_single_fp_cale_pane_g1

0xcfaa,	// (0x000ba297) list_single_fp_cale_pane_g2_ParamLimits

0xcfaa,	// (0x000ba297) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000bca9e) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000bca9e) list_single_fp_cale_pane_g

0xcfc3,	// (0x000ba2b0) list_single_fp_cale_pane_t1_ParamLimits

0xcfc3,	// (0x000ba2b0) list_single_fp_cale_pane_t1

0xcfd5,	// (0x000ba2c2) list_single_fp_cale_pane_t2_ParamLimits

0xcfd5,	// (0x000ba2c2) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000bcaa5) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000bcaa5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94ed,	// (0x000b67da) main_dialer_pane

0x4c9b,	// (0x000b1f88) aid_cell_size_keypad

0x4ca5,	// (0x000b1f92) dialer_ne_pane

0x4caf,	// (0x000b1f9c) grid_dialer_command_1_pane

0x4cb7,	// (0x000b1fa4) grid_dialer_command_2_pane

0x4cbf,	// (0x000b1fac) grid_dialer_keypad_pane

0x4cd1,	// (0x000b1fbe) bg_popup_call_pane_cp06_ParamLimits

0x4cd1,	// (0x000b1fbe) bg_popup_call_pane_cp06

0x4cdd,	// (0x000b1fca) dialer_ne_clear_pane_ParamLimits

0x4cdd,	// (0x000b1fca) dialer_ne_clear_pane

0xd008,	// (0x000ba2f5) dialer_ne_pane_g1

0xd010,	// (0x000ba2fd) dialer_ne_pane_t1_ParamLimits

0xd010,	// (0x000ba2fd) dialer_ne_pane_t1

0x4ce9,	// (0x000b1fd6) dialer_ne_pane_t2_ParamLimits

0x4ce9,	// (0x000b1fd6) dialer_ne_pane_t2

0x4d13,	// (0x000b2000) dialer_ne_pane_t3_ParamLimits

0x4d13,	// (0x000b2000) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000bcaaa) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000bcaaa) dialer_ne_pane_t

0x4d43,	// (0x000b2030) dialer_ne_pane_t3_copy1_ParamLimits

0x4d43,	// (0x000b2030) dialer_ne_pane_t3_copy1

0x4d72,	// (0x000b205f) cell_dialer_keypad_pane_ParamLimits

0x4d72,	// (0x000b205f) cell_dialer_keypad_pane

0x4d89,	// (0x000b2076) cell_dialer_command_1_pane_ParamLimits

0x4d89,	// (0x000b2076) cell_dialer_command_1_pane

0x4d9f,	// (0x000b208c) cell_dialer_command_2_pane_ParamLimits

0x4d9f,	// (0x000b208c) cell_dialer_command_2_pane

0xd022,	// (0x000ba30f) bg_button_pane_cp02_ParamLimits

0xd022,	// (0x000ba30f) bg_button_pane_cp02

0x4dae,	// (0x000b209b) cell_dialer_keypad_pane_g1_ParamLimits

0x4dae,	// (0x000b209b) cell_dialer_keypad_pane_g1

0xd022,	// (0x000ba30f) bg_button_pane_cp03_ParamLimits

0xd022,	// (0x000ba30f) bg_button_pane_cp03

0x4dc3,	// (0x000b20b0) cell_dialer_command_1_pane_g1_ParamLimits

0x4dc3,	// (0x000b20b0) cell_dialer_command_1_pane_g1

0xd02e,	// (0x000ba31b) bg_button_pane_cp04

0x4dd7,	// (0x000b20c4) cell_dialer_command_2_pane_g1

0xaa48,	// (0x000b7d35) bg_button_pane_cp06

0xd036,	// (0x000ba323) dialer_ne_clear_pane_g1

0x2680,	// (0x000af96d) navi_pane_g2

0x26ae,	// (0x000af99b) navi_pane_g3

0x0002,

0xf3e5,	// (0x000bc6d2) navi_pane_g

0x26d9,	// (0x000af9c6) navi_pane_mv_g2

0x2700,	// (0x000af9ed) navi_pane_mv_g5

0x2708,	// (0x000af9f5) navi_pane_mv_t1

0xa892,	// (0x000b7b7f) main_clock2_pane

0x4e22,	// (0x000b210f) main_clock2_list_pane_ParamLimits

0x4e22,	// (0x000b210f) main_clock2_list_pane

0x4e5a,	// (0x000b2147) main_clock2_pane_t1_ParamLimits

0x4e5a,	// (0x000b2147) main_clock2_pane_t1

0x4e96,	// (0x000b2183) main_clock2_pane_t2_ParamLimits

0x4e96,	// (0x000b2183) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000bcab6) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000bcab6) main_clock2_pane_t

0x4f36,	// (0x000b2223) popup_clock_analogue_window_cp03_ParamLimits

0x4f36,	// (0x000b2223) popup_clock_analogue_window_cp03

0x4f5d,	// (0x000b224a) popup_clock_digital_window_cp02_ParamLimits

0x4f5d,	// (0x000b224a) popup_clock_digital_window_cp02

0x4fd6,	// (0x000b22c3) main_clock2_list_single_pane_ParamLimits

0x4fd6,	// (0x000b22c3) main_clock2_list_single_pane

0xaa48,	// (0x000b7d35) list_highlight_pane_cp05

0xd072,	// (0x000ba35f) main_clock2_list_single_pane_t1

0x1198,	// (0x000ae485) popup_toolbar_window_cp04_ParamLimits

0x43a2,	// (0x000b168f) camera2_autofocus_pane_g2_ParamLimits

0x43a2,	// (0x000b168f) camera2_autofocus_pane_g2

0x43ae,	// (0x000b169b) camera2_autofocus_pane_g3_ParamLimits

0x43ae,	// (0x000b169b) camera2_autofocus_pane_g3

0x43ba,	// (0x000b16a7) camera2_autofocus_pane_g4_ParamLimits

0x43ba,	// (0x000b16a7) camera2_autofocus_pane_g4

0x43c6,	// (0x000b16b3) camera2_autofocus_pane_g5_ParamLimits

0x43c6,	// (0x000b16b3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000bc9fa) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000bc9fa) camera2_autofocus_pane_g

0x45ff,	// (0x000b18ec) camera2_autofocus_pane_cp_g2

0x4607,	// (0x000b18f4) camera2_autofocus_pane_cp_g3

0x460f,	// (0x000b18fc) camera2_autofocus_pane_cp_g4

0x4617,	// (0x000b1904) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000bca60) camera2_autofocus_pane_cp_g

0x4cc9,	// (0x000b1fb6) popup_dialer_spcha_window

0x94ed,	// (0x000b67da) bg_popup_sub_pane_cp07

0xd080,	// (0x000ba36d) list_spcha_pane

0xd088,	// (0x000ba375) list_single_spcha_pane_ParamLimits

0xd088,	// (0x000ba375) list_single_spcha_pane

0x94ed,	// (0x000b67da) list_highlight_pane_cp06

0xd099,	// (0x000ba386) list_single_spcha_pane_t1

0xc266,	// (0x000b9553) popup_call2_audio_out_window_g4_ParamLimits

0xc266,	// (0x000b9553) popup_call2_audio_out_window_g4

0x94ed,	// (0x000b67da) main_imed2_pane

0xc859,	// (0x000b9b46) popup_imed_adjust2_window

0x3754,	// (0x000b0a41) popup_imed_trans_window_ParamLimits

0x3754,	// (0x000b0a41) popup_imed_trans_window

0xcab6,	// (0x000b9da3) popup_blid_sat_info2_window_t1

0xcac4,	// (0x000b9db1) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000bc98f) popup_blid_sat_info2_window_t

0x508c,	// (0x000b2379) aid_size_cell_colour_35

0x50ac,	// (0x000b2399) aid_size_cell_colour_112

0x50cc,	// (0x000b23b9) aid_size_cell_effect

0xc82d,	// (0x000b9b1a) bg_tb_trans_pane_cp02

0xaede,	// (0x000b81cb) heading_imed_pane

0x50ec,	// (0x000b23d9) listscroll_imed_pane

0xd0a7,	// (0x000ba394) heading_imed_pane_g1

0xd0af,	// (0x000ba39c) heading_imed_pane_t1

0xd0bd,	// (0x000ba3aa) grid_imed_colour_35_pane_ParamLimits

0xd0bd,	// (0x000ba3aa) grid_imed_colour_35_pane

0x50f8,	// (0x000b23e5) grid_imed_effect_pane

0xd0d9,	// (0x000ba3c6) list_imed_aspect_pane

0x510d,	// (0x000b23fa) scroll_pane_cp027_ParamLimits

0x510d,	// (0x000b23fa) scroll_pane_cp027

0x511e,	// (0x000b240b) cell_imed_effect_pane_ParamLimits

0x511e,	// (0x000b240b) cell_imed_effect_pane

0xd0e1,	// (0x000ba3ce) cell_imed_colour_pane_ParamLimits

0xd0e1,	// (0x000ba3ce) cell_imed_colour_pane

0xd12b,	// (0x000ba418) cell_imed_colour_pane_g1_ParamLimits

0xd12b,	// (0x000ba418) cell_imed_colour_pane_g1

0xd13c,	// (0x000ba429) hgihlgiht_grid_pane_cp016_ParamLimits

0xd13c,	// (0x000ba429) hgihlgiht_grid_pane_cp016

0x5149,	// (0x000b2436) cell_imed_effect_pane_g1

0x5151,	// (0x000b243e) grid_highlight_pane_cp017

0xd14d,	// (0x000ba43a) list_imed_single_pane_ParamLimits

0xd14d,	// (0x000ba43a) list_imed_single_pane

0x94ed,	// (0x000b67da) list_highlight_pane_cp07

0xd161,	// (0x000ba44e) list_imed_aspect_pane_comp1_t1

0xc82d,	// (0x000b9b1a) bg_tb_trans_pane_cp05

0xd183,	// (0x000ba470) popup_imed_adjust2_window_g1

0xd1aa,	// (0x000ba497) popup_imed_adjust2_window_t1

0xd1c2,	// (0x000ba4af) slider_imed_adjust_pane

0xd1d6,	// (0x000ba4c3) slider_imed_adjust_pane_g1

0xd1e6,	// (0x000ba4d3) slider_imed_adjust_pane_g2

0xd1f6,	// (0x000ba4e3) slider_imed_adjust_pane_g3

0xd207,	// (0x000ba4f4) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000bcad3) slider_imed_adjust_pane_g

0x515a,	// (0x000b2447) aid_size_cell_clipart2

0x5166,	// (0x000b2453) grid_imed_clipart_pane

0xd218,	// (0x000ba505) scroll_pane_cp031

0x5170,	// (0x000b245d) cell_imed_clipart_pane_ParamLimits

0x5170,	// (0x000b245d) cell_imed_clipart_pane

0x518d,	// (0x000b247a) cell_imed_clipart_pane_g1

0x94ed,	// (0x000b67da) grid_highlight_pane_cp014

0x4e37,	// (0x000b2124) main_clock2_pane_g1_ParamLimits

0x4e37,	// (0x000b2124) main_clock2_pane_g1

0x4f7d,	// (0x000b226a) aid_call2_pane_cp10

0x4f8f,	// (0x000b227c) aid_call_pane_cp10

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g1

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g2

0x4fa1,	// (0x000b228e) popup_clock_analogue_window_cp10_g3

0x4fa1,	// (0x000b228e) popup_clock_analogue_window_cp10_g4

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000bcac1) popup_clock_analogue_window_cp10_g

0x4fb7,	// (0x000b22a4) popup_clock_analogue_window_cp10_t1

0x4fe8,	// (0x000b22d5) clock_digital_number_pane_cp10_ParamLimits

0x4fe8,	// (0x000b22d5) clock_digital_number_pane_cp10

0x5002,	// (0x000b22ef) clock_digital_number_pane_cp11_ParamLimits

0x5002,	// (0x000b22ef) clock_digital_number_pane_cp11

0x501c,	// (0x000b2309) clock_digital_number_pane_cp12_ParamLimits

0x501c,	// (0x000b2309) clock_digital_number_pane_cp12

0x5036,	// (0x000b2323) clock_digital_number_pane_cp13_ParamLimits

0x5036,	// (0x000b2323) clock_digital_number_pane_cp13

0x5050,	// (0x000b233d) clock_digital_separator_pane_cp10_ParamLimits

0x5050,	// (0x000b233d) clock_digital_separator_pane_cp10

0x506a,	// (0x000b2357) popup_clock_digital_window_cp02_t1_ParamLimits

0x506a,	// (0x000b2357) popup_clock_digital_window_cp02_t1

0x9bb2,	// (0x000b6e9f) clock_digital_number_pane_cp10_g1

0x9bb2,	// (0x000b6e9f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000bcadc) clock_digital_number_pane_cp10_g

0x9bb2,	// (0x000b6e9f) clock_digital_separator_pane_cp10_g1

0x9bb2,	// (0x000b6e9f) clock_digital_separator_pane_g2_cp10

0xb34e,	// (0x000b863b) navi_pane_vded_g4

0xb357,	// (0x000b8644) navi_pane_vded_g5

0xb360,	// (0x000b864d) navi_pane_vded_t1

0x94ed,	// (0x000b67da) main_vded_pane

0x5196,	// (0x000b2483) main_vded_pane_g1

0x51a2,	// (0x000b248f) main_vded_pane_g2

0x51ae,	// (0x000b249b) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000bcae1) main_vded_pane_g

0x51ba,	// (0x000b24a7) main_vded_pane_t1

0x51c8,	// (0x000b24b5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000bcae8) main_vded_pane_t

0x51d6,	// (0x000b24c3) vded_slider_pane

0x51e0,	// (0x000b24cd) vded_video_pane

0xd220,	// (0x000ba50d) vded_video_pane_g1

0x51ea,	// (0x000b24d7) vded_video_pane_g2

0xcc7e,	// (0x000b9f6b) vded_video_pane_g3

0x0002,

0xf800,	// (0x000bcaed) vded_video_pane_g

0xd22a,	// (0x000ba517) vded_slider_pane_g1

0xc9cb,	// (0x000b9cb8) vded_slider_pane_g2

0xd233,	// (0x000ba520) vded_slider_pane_g3

0xd23c,	// (0x000ba529) vded_slider_pane_g4

0xd245,	// (0x000ba532) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000bcaf4) vded_slider_pane_g

0x4ba8,	// (0x000b1e95) mup3_rocker_pane_ParamLimits

0x4ba8,	// (0x000b1e95) mup3_rocker_pane

0x51f3,	// (0x000b24e0) mup3_control_keys_pane_g1

0x51fb,	// (0x000b24e8) mup3_control_keys_pane_g2

0x5203,	// (0x000b24f0) mup3_control_keys_pane_g3

0x520b,	// (0x000b24f8) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000bcaff) mup3_control_keys_pane_g

0xfe5d,	// (0x000ad14a) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe5d,	// (0x000ad14a) popup_toolbar2_fixed_window_cp01

0x4bde,	// (0x000b1ecb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bde,	// (0x000b1ecb) popup_toolbar2_fixed_window_cp02

0xbba5,	// (0x000b8e92) popup_call2_audio_second_window_t4_ParamLimits

0xbba5,	// (0x000b8e92) popup_call2_audio_second_window_t4

0xc0d3,	// (0x000b93c0) popup_call2_audio_first_window_t6_ParamLimits

0xc0d3,	// (0x000b93c0) popup_call2_audio_first_window_t6

0xc369,	// (0x000b9656) popup_call2_audio_out_window_t6_ParamLimits

0xc369,	// (0x000b9656) popup_call2_audio_out_window_t6

0x94ed,	// (0x000b67da) main_vitu_pane

0x521b,	// (0x000b2508) aid_size_cell_itu_ParamLimits

0x521b,	// (0x000b2508) aid_size_cell_itu

0x953e,	// (0x000b682b) bg_popup_window_pane_cp08_ParamLimits

0x953e,	// (0x000b682b) bg_popup_window_pane_cp08

0x5231,	// (0x000b251e) field_vitu_entry_pane_ParamLimits

0x5231,	// (0x000b251e) field_vitu_entry_pane

0x5248,	// (0x000b2535) grid_vitu_function_pane_ParamLimits

0x5248,	// (0x000b2535) grid_vitu_function_pane

0x5263,	// (0x000b2550) grid_vitu_itu_pane_ParamLimits

0x5263,	// (0x000b2550) grid_vitu_itu_pane

0x5281,	// (0x000b256e) cell_vitu_itu_pane_ParamLimits

0x5281,	// (0x000b256e) cell_vitu_itu_pane

0x52a7,	// (0x000b2594) cell_vitu_function_pane_ParamLimits

0x52a7,	// (0x000b2594) cell_vitu_function_pane

0x953e,	// (0x000b682b) bg_popup_sub_pane_cp08_ParamLimits

0x953e,	// (0x000b682b) bg_popup_sub_pane_cp08

0x52c2,	// (0x000b25af) field_vitu_entry_pane_t1_ParamLimits

0x52c2,	// (0x000b25af) field_vitu_entry_pane_t1

0xd266,	// (0x000ba553) field_vitu_entry_pane_t2_ParamLimits

0xd266,	// (0x000ba553) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000bcb0d) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000bcb0d) field_vitu_entry_pane_t

0xd283,	// (0x000ba570) bg_button_pane_cp05_ParamLimits

0xd283,	// (0x000ba570) bg_button_pane_cp05

0x52e2,	// (0x000b25cf) cell_vitu_itu_pane_g1

0x52fa,	// (0x000b25e7) cell_vitu_itu_pane_t1_ParamLimits

0x52fa,	// (0x000b25e7) cell_vitu_itu_pane_t1

0x530c,	// (0x000b25f9) cell_vitu_itu_pane_t2_ParamLimits

0x530c,	// (0x000b25f9) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000bcb12) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000bcb12) cell_vitu_itu_pane_t

0xd291,	// (0x000ba57e) bg_button_pane_cp07

0x5341,	// (0x000b262e) cell_vitu_function_pane_g1

0x9c29,	// (0x000b6f16) main_calc_pane_g1

0xfc69,	// (0x000acf56) aid_visual_content_pane

0x94ed,	// (0x000b67da) main_vradio_pane

0x534a,	// (0x000b2637) main_vradio_pane_g1_ParamLimits

0x534a,	// (0x000b2637) main_vradio_pane_g1

0xd29b,	// (0x000ba588) main_vradio_pane_g2_ParamLimits

0xd29b,	// (0x000ba588) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000bcb19) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000bcb19) main_vradio_pane_g

0x5361,	// (0x000b264e) main_vradio_pane_t1_ParamLimits

0x5361,	// (0x000b264e) main_vradio_pane_t1

0x5376,	// (0x000b2663) main_vradio_pane_t2_ParamLimits

0x5376,	// (0x000b2663) main_vradio_pane_t2

0xd2a8,	// (0x000ba595) main_vradio_pane_t3_ParamLimits

0xd2a8,	// (0x000ba595) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000bcb1e) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000bcb1e) main_vradio_pane_t

0x538b,	// (0x000b2678) vradio_rocker_control_pane_ParamLimits

0x538b,	// (0x000b2678) vradio_rocker_control_pane

0x539d,	// (0x000b268a) vradio_station_info_pane_ParamLimits

0x539d,	// (0x000b268a) vradio_station_info_pane

0xd2bc,	// (0x000ba5a9) vradio_frequency_info_pane_ParamLimits

0xd2bc,	// (0x000ba5a9) vradio_frequency_info_pane

0xcc7e,	// (0x000b9f6b) vradio_station_info_pane_g1

0xd2cb,	// (0x000ba5b8) vradio_station_info_pane_t1_ParamLimits

0xd2cb,	// (0x000ba5b8) vradio_station_info_pane_t1

0xd2ed,	// (0x000ba5da) vradio_station_info_pane_t2_ParamLimits

0xd2ed,	// (0x000ba5da) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000bcb25) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000bcb25) vradio_station_info_pane_t

0xd2ff,	// (0x000ba5ec) vradio_tuning_pane

0xd307,	// (0x000ba5f4) vradio_rocker_control_pane_g1

0xd30f,	// (0x000ba5fc) vradio_rocker_control_pane_g2

0xd317,	// (0x000ba604) vradio_rocker_control_pane_g3

0xd31f,	// (0x000ba60c) vradio_rocker_control_pane_g4

0xd327,	// (0x000ba614) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000bcb2a) vradio_rocker_control_pane_g

0x53ad,	// (0x000b269a) vradio_frequency_info_pane_g1

0xd32f,	// (0x000ba61c) vradio_frequency_info_pane_t1_ParamLimits

0xd32f,	// (0x000ba61c) vradio_frequency_info_pane_t1

0x53b7,	// (0x000b26a4) vradio_tuning_pane_g1

0x53c2,	// (0x000b26af) vradio_tuning_pane_t1

0x950b,	// (0x000b67f8) area_side_right_pane_ParamLimits

0x950b,	// (0x000b67f8) area_side_right_pane

0xc7e8,	// (0x000b9ad5) status_small_pane_g1

0xc7f0,	// (0x000b9add) status_small_pane_g2

0xc7f9,	// (0x000b9ae6) status_small_pane_g3

0xc802,	// (0x000b9aef) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000bc8e5) status_small_pane_g

0xc80b,	// (0x000b9af8) status_small_pane_t1

0x94ed,	// (0x000b67da) main_video3_pane

0xd343,	// (0x000ba630) cams_zoom_vslider_pane

0xd34b,	// (0x000ba638) image3_wide_pane_ParamLimits

0xd34b,	// (0x000ba638) image3_wide_pane

0xd365,	// (0x000ba652) image3_wide_small_pane

0xd371,	// (0x000ba65e) main_video3_pane_g1_ParamLimits

0xd371,	// (0x000ba65e) main_video3_pane_g1

0xd38d,	// (0x000ba67a) main_video3_pane_g2_ParamLimits

0xd38d,	// (0x000ba67a) main_video3_pane_g2

0x0001,

0xf848,	// (0x000bcb35) main_video3_pane_g_ParamLimits

0xf848,	// (0x000bcb35) main_video3_pane_g

0xd3a9,	// (0x000ba696) main_video3_pane_t1_ParamLimits

0xd3a9,	// (0x000ba696) main_video3_pane_t1

0xd3d4,	// (0x000ba6c1) main_video3_pane_t2_ParamLimits

0xd3d4,	// (0x000ba6c1) main_video3_pane_t2

0xd401,	// (0x000ba6ee) main_video3_pane_t3_ParamLimits

0xd401,	// (0x000ba6ee) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000bcb3a) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000bcb3a) main_video3_pane_t

0xd42e,	// (0x000ba71b) cams_zoom_vslider_pane_g1

0xd437,	// (0x000ba724) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000bcb41) cams_zoom_vslider_pane_g

0xd43f,	// (0x000ba72c) small_slider_vertical_pane

0xcc7e,	// (0x000b9f6b) small_slider_vertical_pane_g1

0xcc7e,	// (0x000b9f6b) small_slider_vertical_pane_g2

0xd447,	// (0x000ba734) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000bcb46) small_slider_vertical_pane_g

0x94ed,	// (0x000b67da) main_hwr_training_pane

0xd450,	// (0x000ba73d) hwr_training_instruct_pane_ParamLimits

0xd450,	// (0x000ba73d) hwr_training_instruct_pane

0x53d1,	// (0x000b26be) hwr_training_navi_pane_ParamLimits

0x53d1,	// (0x000b26be) hwr_training_navi_pane

0x53f0,	// (0x000b26dd) hwr_training_write_pane_ParamLimits

0x53f0,	// (0x000b26dd) hwr_training_write_pane

0x94ed,	// (0x000b67da) bg_frame_shadow_pane

0xd487,	// (0x000ba774) hwr_training_write_pane_g1

0xd48f,	// (0x000ba77c) hwr_training_write_pane_g2

0xd497,	// (0x000ba784) hwr_training_write_pane_g3

0xd49f,	// (0x000ba78c) hwr_training_write_pane_g4

0xd4a7,	// (0x000ba794) hwr_training_write_pane_g5

0xd4af,	// (0x000ba79c) hwr_training_write_pane_g6

0xd4b7,	// (0x000ba7a4) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000bcb4d) hwr_training_write_pane_g

0x9eca,	// (0x000b71b7) hwr_training_navi_pane_g1_ParamLimits

0x9eca,	// (0x000b71b7) hwr_training_navi_pane_g1

0x9edc,	// (0x000b71c9) hwr_training_navi_pane_g2_ParamLimits

0x9edc,	// (0x000b71c9) hwr_training_navi_pane_g2

0x9eee,	// (0x000b71db) hwr_training_navi_pane_g3_ParamLimits

0x9eee,	// (0x000b71db) hwr_training_navi_pane_g3

0x9efe,	// (0x000b71eb) hwr_training_navi_pane_g4_ParamLimits

0x9efe,	// (0x000b71eb) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000bcb5c) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000bcb5c) hwr_training_navi_pane_g

0x9f0b,	// (0x000b71f8) hwr_training_navi_pane_t1

0x5438,	// (0x000b2725) list_single_hwr_training_instruct_pane_ParamLimits

0x5438,	// (0x000b2725) list_single_hwr_training_instruct_pane

0xd4bf,	// (0x000ba7ac) list_single_hwr_training_instruct_pane_t1

0xcbbe,	// (0x000b9eab) bg_frame_shadow_pane_g1

0xd4ce,	// (0x000ba7bb) bg_frame_shadow_pane_g2

0xd4d6,	// (0x000ba7c3) bg_frame_shadow_pane_g3

0xd4de,	// (0x000ba7cb) bg_frame_shadow_pane_g4

0xd4e6,	// (0x000ba7d3) bg_frame_shadow_pane_g5

0xd4ee,	// (0x000ba7db) bg_frame_shadow_pane_g6

0xd4f6,	// (0x000ba7e3) bg_frame_shadow_pane_g7

0xa95d,	// (0x000b7c4a) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000bcb67) bg_frame_shadow_pane_g

0x94ed,	// (0x000b67da) main_video_tele_dialer_pane

0x544d,	// (0x000b273a) aid_size_cell_video_keypad_ParamLimits

0x544d,	// (0x000b273a) aid_size_cell_video_keypad

0x5467,	// (0x000b2754) grid_video_dialer_keypad_pane_ParamLimits

0x5467,	// (0x000b2754) grid_video_dialer_keypad_pane

0x54b3,	// (0x000b27a0) video_down_pane_cp_ParamLimits

0x54b3,	// (0x000b27a0) video_down_pane_cp

0x54e3,	// (0x000b27d0) cell_video_dialer_keypad_pane_ParamLimits

0x54e3,	// (0x000b27d0) cell_video_dialer_keypad_pane

0xd4fe,	// (0x000ba7eb) bg_button_pane_cp08_ParamLimits

0xd4fe,	// (0x000ba7eb) bg_button_pane_cp08

0x5507,	// (0x000b27f4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5507,	// (0x000b27f4) cell_video_dialer_keypad_pane_g1

0x4b92,	// (0x000b1e7f) mup3_rocker2_pane_ParamLimits

0x4b92,	// (0x000b1e7f) mup3_rocker2_pane

0xcc7e,	// (0x000b9f6b) mup3_rocker2_pane_g1

0x3621,	// (0x000b090e) main_dialer2_pane

0x94ed,	// (0x000b67da) main_mp4_pane

0x9f21,	// (0x000b720e) main_mp4_pane_g1_ParamLimits

0x9f21,	// (0x000b720e) main_mp4_pane_g1

0x9f21,	// (0x000b720e) main_mp4_pane_g2_ParamLimits

0x9f21,	// (0x000b720e) main_mp4_pane_g2

0x5542,	// (0x000b282f) main_mp4_pane_g3_ParamLimits

0x5542,	// (0x000b282f) main_mp4_pane_g3

0x9f2f,	// (0x000b721c) main_mp4_pane_g4_ParamLimits

0x9f2f,	// (0x000b721c) main_mp4_pane_g4

0x9f57,	// (0x000b7244) main_mp4_pane_g5_ParamLimits

0x9f57,	// (0x000b7244) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000bcb87) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000bcb87) main_mp4_pane_g

0x9fa7,	// (0x000b7294) main_mp4_pane_t1_ParamLimits

0x9fa7,	// (0x000b7294) main_mp4_pane_t1

0xa003,	// (0x000b72f0) main_mp4_pane_t2_ParamLimits

0xa003,	// (0x000b72f0) main_mp4_pane_t2

0xd50a,	// (0x000ba7f7) main_mp4_pane_t3_ParamLimits

0xd50a,	// (0x000ba7f7) main_mp4_pane_t3

0xa055,	// (0x000b7342) main_mp4_pane_t4_ParamLimits

0xa055,	// (0x000b7342) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000bcb94) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000bcb94) main_mp4_pane_t

0xa095,	// (0x000b7382) mp4_progress_pane_ParamLimits

0xa095,	// (0x000b7382) mp4_progress_pane

0xa0df,	// (0x000b73cc) mp4_rocker_pane_ParamLimits

0xa0df,	// (0x000b73cc) mp4_rocker_pane

0xd532,	// (0x000ba81f) mp4_progress_pane_t1

0xd54b,	// (0x000ba838) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000bcb9d) mp4_progress_pane_t

0xd564,	// (0x000ba851) mup_progress_pane_cp04

0xd570,	// (0x000ba85d) mp4_rocker_pane_g1

0x558c,	// (0x000b2879) aid_cell_size_keypad2_ParamLimits

0x558c,	// (0x000b2879) aid_cell_size_keypad2

0x55a2,	// (0x000b288f) dialer2_ne_pane_ParamLimits

0x55a2,	// (0x000b288f) dialer2_ne_pane

0x55ba,	// (0x000b28a7) grid_dialer2_keypad_pane_ParamLimits

0x55ba,	// (0x000b28a7) grid_dialer2_keypad_pane

0xca5d,	// (0x000b9d4a) bg_popup_call_pane_cp07_ParamLimits

0xca5d,	// (0x000b9d4a) bg_popup_call_pane_cp07

0x55d6,	// (0x000b28c3) dialer2_ne_pane_t1_ParamLimits

0x55d6,	// (0x000b28c3) dialer2_ne_pane_t1

0x5611,	// (0x000b28fe) cell_dialer2_keypad_pane_ParamLimits

0x5611,	// (0x000b28fe) cell_dialer2_keypad_pane

0xd58c,	// (0x000ba879) bg_button_pane_pane_cp04_ParamLimits

0xd58c,	// (0x000ba879) bg_button_pane_pane_cp04

0x5635,	// (0x000b2922) cell_dialer2_keypad_pane_g1_ParamLimits

0x5635,	// (0x000b2922) cell_dialer2_keypad_pane_g1

0x107f,	// (0x000ae36c) aid_placing_vt_set_content_ParamLimits

0x107f,	// (0x000ae36c) aid_placing_vt_set_content

0x10a3,	// (0x000ae390) aid_placing_vt_set_title_ParamLimits

0x10a3,	// (0x000ae390) aid_placing_vt_set_title

0x94ed,	// (0x000b67da) main_image3_pane

0x56fb,	// (0x000b29e8) area_side_right_pane_cp01_ParamLimits

0x56fb,	// (0x000b29e8) area_side_right_pane_cp01

0x9f21,	// (0x000b720e) main_image3_pane_g1_ParamLimits

0x9f21,	// (0x000b720e) main_image3_pane_g1

0x5714,	// (0x000b2a01) main_image3_pane_g2_ParamLimits

0x5714,	// (0x000b2a01) main_image3_pane_g2

0x573c,	// (0x000b2a29) main_image3_pane_g3_ParamLimits

0x573c,	// (0x000b2a29) main_image3_pane_g3

0x5766,	// (0x000b2a53) main_image3_pane_g4_ParamLimits

0x5766,	// (0x000b2a53) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000bcbac) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000bcbac) main_image3_pane_g

0x5790,	// (0x000b2a7d) main_image3_pane_t1_ParamLimits

0x5790,	// (0x000b2a7d) main_image3_pane_t1

0x57e8,	// (0x000b2ad5) main_image3_pane_t2_ParamLimits

0x57e8,	// (0x000b2ad5) main_image3_pane_t2

0x583a,	// (0x000b2b27) main_image3_pane_t3_ParamLimits

0x583a,	// (0x000b2b27) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000bcbb5) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000bcbb5) main_image3_pane_t

0x953e,	// (0x000b682b) grid_sctrl_middle_pane_cp01_ParamLimits

0x953e,	// (0x000b682b) grid_sctrl_middle_pane_cp01

0x58c2,	// (0x000b2baf) cell_sctrl_middle_pane_cp01_ParamLimits

0x58c2,	// (0x000b2baf) cell_sctrl_middle_pane_cp01

0x58df,	// (0x000b2bcc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58df,	// (0x000b2bcc) cell_sctrl_middle_pane_cp01_g1

0x94ed,	// (0x000b67da) main_call4_pane

0x58f4,	// (0x000b2be1) aid_size_button_call4_ParamLimits

0x58f4,	// (0x000b2be1) aid_size_button_call4

0x5927,	// (0x000b2c14) call4_windows_pane_ParamLimits

0x5927,	// (0x000b2c14) call4_windows_pane

0x5949,	// (0x000b2c36) grid_call4_button_pane_ParamLimits

0x5949,	// (0x000b2c36) grid_call4_button_pane

0xd598,	// (0x000ba885) call4_windows_conf_pane

0x5974,	// (0x000b2c61) popup_call4_audio_first_window_ParamLimits

0x5974,	// (0x000b2c61) popup_call4_audio_first_window

0x59a0,	// (0x000b2c8d) popup_call4_audio_second_window_ParamLimits

0x59a0,	// (0x000b2c8d) popup_call4_audio_second_window

0xd5d5,	// (0x000ba8c2) popup_call4_audio_wait_window_ParamLimits

0xd5d5,	// (0x000ba8c2) popup_call4_audio_wait_window

0x59b6,	// (0x000b2ca3) cell_call4_button_pane_ParamLimits

0x59b6,	// (0x000b2ca3) cell_call4_button_pane

0x59dd,	// (0x000b2cca) bg_button_pane_cp09_ParamLimits

0x59dd,	// (0x000b2cca) bg_button_pane_cp09

0x59e9,	// (0x000b2cd6) cell_call4_button_pane_g1_ParamLimits

0x59e9,	// (0x000b2cd6) cell_call4_button_pane_g1

0x5a0f,	// (0x000b2cfc) cell_call4_button_pane_t1_ParamLimits

0x5a0f,	// (0x000b2cfc) cell_call4_button_pane_t1

0xd61d,	// (0x000ba90a) popup_call4_audio_conf_window_ParamLimits

0xd61d,	// (0x000ba90a) popup_call4_audio_conf_window

0x4bf4,	// (0x000b1ee1) mup3_progress_pane_t1_ParamLimits

0x4c12,	// (0x000b1eff) mup3_progress_pane_t2_ParamLimits

0xcf31,	// (0x000ba21e) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000bca89) mup3_progress_pane_t_ParamLimits

0xcf4e,	// (0x000ba23b) mup_progress_pane_cp03_ParamLimits

0x5213,	// (0x000b2500) mup3_control_keys_pane_g4_copy1

0xa0c3,	// (0x000b73b0) mp4_rocker2_pane_ParamLimits

0xa0c3,	// (0x000b73b0) mp4_rocker2_pane

0xd637,	// (0x000ba924) mp4_rocker2_pane_g1

0xd63f,	// (0x000ba92c) mp4_rocker2_pane_g2

0xa135,	// (0x000b7422) mp4_rocker2_pane_g3

0xa13d,	// (0x000b742a) mp4_rocker2_pane_g4

0xa145,	// (0x000b7432) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000bcbbe) mp4_rocker2_pane_g

0x94ed,	// (0x000b67da) main_camera4_pane

0x94ed,	// (0x000b67da) main_video4_pane

0x5481,	// (0x000b276e) main_video_tele_dialer_pane_t1_ParamLimits

0x5481,	// (0x000b276e) main_video_tele_dialer_pane_t1

0x549a,	// (0x000b2787) main_video_tele_dialer_pane_t2_ParamLimits

0x549a,	// (0x000b2787) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000bcb78) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000bcb78) main_video_tele_dialer_pane_t

0x5a4d,	// (0x000b2d3a) cam4_autofocus_pane_ParamLimits

0x5a4d,	// (0x000b2d3a) cam4_autofocus_pane

0x5a63,	// (0x000b2d50) cam4_image_uncrop_pane_ParamLimits

0x5a63,	// (0x000b2d50) cam4_image_uncrop_pane

0x5a7c,	// (0x000b2d69) cam4_indicators_pane_ParamLimits

0x5a7c,	// (0x000b2d69) cam4_indicators_pane

0x5aab,	// (0x000b2d98) main_camera4_pane_g1_ParamLimits

0x5aab,	// (0x000b2d98) main_camera4_pane_g1

0x5abd,	// (0x000b2daa) main_camera4_pane_g2_ParamLimits

0x5abd,	// (0x000b2daa) main_camera4_pane_g2

0x5ad0,	// (0x000b2dbd) main_camera4_pane_g3_ParamLimits

0x5ad0,	// (0x000b2dbd) main_camera4_pane_g3

0x5ae3,	// (0x000b2dd0) main_camera4_pane_g4_ParamLimits

0x5ae3,	// (0x000b2dd0) main_camera4_pane_g4

0x5af6,	// (0x000b2de3) main_camera4_pane_g5_ParamLimits

0x5af6,	// (0x000b2de3) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000bcbc9) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000bcbc9) main_camera4_pane_g

0x5b1a,	// (0x000b2e07) main_camera4_pane_t1_ParamLimits

0x5b1a,	// (0x000b2e07) main_camera4_pane_t1

0xa16b,	// (0x000b7458) bg_tb_trans_pane_cp06

0xa181,	// (0x000b746e) cam4_indicators_pane_g1

0xa192,	// (0x000b747f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000bcbe4) cam4_indicators_pane_g

0xa1aa,	// (0x000b7497) cam4_indicators_pane_t1

0x5b7e,	// (0x000b2e6b) main_video4_pane_g1_ParamLimits

0x5b7e,	// (0x000b2e6b) main_video4_pane_g1

0x5b8d,	// (0x000b2e7a) main_video4_pane_g2_ParamLimits

0x5b8d,	// (0x000b2e7a) main_video4_pane_g2

0x5b9c,	// (0x000b2e89) main_video4_pane_g3_ParamLimits

0x5b9c,	// (0x000b2e89) main_video4_pane_g3

0x5bab,	// (0x000b2e98) main_video4_pane_g4_ParamLimits

0x5bab,	// (0x000b2e98) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000bcbeb) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000bcbeb) main_video4_pane_g

0x5bc9,	// (0x000b2eb6) vid4_indicators_pane_ParamLimits

0x5bc9,	// (0x000b2eb6) vid4_indicators_pane

0x5bf7,	// (0x000b2ee4) video4_image_uncrop_cif_pane_ParamLimits

0x5bf7,	// (0x000b2ee4) video4_image_uncrop_cif_pane

0x5c11,	// (0x000b2efe) video4_image_uncrop_nhd_pane_ParamLimits

0x5c11,	// (0x000b2efe) video4_image_uncrop_nhd_pane

0x5a63,	// (0x000b2d50) video4_image_uncrop_vga_pane_ParamLimits

0x5a63,	// (0x000b2d50) video4_image_uncrop_vga_pane

0xa1ce,	// (0x000b74bb) bg_tb_trans_pane_cp07

0xa1e6,	// (0x000b74d3) vid4_indicators_pane_g1

0xa1fc,	// (0x000b74e9) vid4_indicators_pane_g2

0xa210,	// (0x000b74fd) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000bcbf6) vid4_indicators_pane_g

0xa241,	// (0x000b752e) vid4_indicators_pane_t1

0x5c27,	// (0x000b2f14) cam4_autofocus_pane_g1

0x5c2f,	// (0x000b2f1c) cam4_autofocus_pane_g2

0x5c37,	// (0x000b2f24) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000bcc01) cam4_autofocus_pane_g

0x5c3f,	// (0x000b2f2c) cam4_autofocus_pane_g3_copy1

0x54c7,	// (0x000b27b4) video_down_pane_cp_t1

0x54d5,	// (0x000b27c2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000bcb7d) video_down_pane_cp_t

0x953e,	// (0x000b682b) popup_vitu2_window_ParamLimits

0x953e,	// (0x000b682b) popup_vitu2_window

0x5c47,	// (0x000b2f34) aid_size_cell2_itu2_ParamLimits

0x5c47,	// (0x000b2f34) aid_size_cell2_itu2

0x5c6d,	// (0x000b2f5a) aid_size_cell_itu2_ParamLimits

0x5c6d,	// (0x000b2f5a) aid_size_cell_itu2

0x5ccd,	// (0x000b2fba) bg_popup_window_pane_cp09_ParamLimits

0x5ccd,	// (0x000b2fba) bg_popup_window_pane_cp09

0x5cdb,	// (0x000b2fc8) field_vitu2_entry_pane_ParamLimits

0x5cdb,	// (0x000b2fc8) field_vitu2_entry_pane

0x5d03,	// (0x000b2ff0) grid_vitu2_function_pane_ParamLimits

0x5d03,	// (0x000b2ff0) grid_vitu2_function_pane

0x5d54,	// (0x000b3041) grid_vitu2_itu_pane_ParamLimits

0x5d54,	// (0x000b3041) grid_vitu2_itu_pane

0x5de8,	// (0x000b30d5) cell_vitu2_itu_pane_ParamLimits

0x5de8,	// (0x000b30d5) cell_vitu2_itu_pane

0x5e0e,	// (0x000b30fb) cell_vitu2_function_pane_ParamLimits

0x5e0e,	// (0x000b30fb) cell_vitu2_function_pane

0xd65b,	// (0x000ba948) bg_popup_call_pane_cp08_ParamLimits

0xd65b,	// (0x000ba948) bg_popup_call_pane_cp08

0xd672,	// (0x000ba95f) field_vitu2_entry_pane_g1

0xd67e,	// (0x000ba96b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000bcc08) field_vitu2_entry_pane_g

0x5e52,	// (0x000b313f) field_vitu2_entry_pane_t1_ParamLimits

0x5e52,	// (0x000b313f) field_vitu2_entry_pane_t1

0xa258,	// (0x000b7545) field_vitu2_entry_pane_t2_ParamLimits

0xa258,	// (0x000b7545) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000bcc0f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000bcc0f) field_vitu2_entry_pane_t

0x5e81,	// (0x000b316e) bg_button_pane_cp010_ParamLimits

0x5e81,	// (0x000b316e) bg_button_pane_cp010

0xa275,	// (0x000b7562) cell_vitu2_itu_pane_g1

0x5e9d,	// (0x000b318a) cell_vitu2_itu_pane_t1_ParamLimits

0x5e9d,	// (0x000b318a) cell_vitu2_itu_pane_t1

0xfb41,	// (0x000ace2e) cell_vitu2_itu_pane_t2_ParamLimits

0xfb41,	// (0x000ace2e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000bcc19) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000bcc19) cell_vitu2_itu_pane_t

0xa1ce,	// (0x000b74bb) bg_button_pane_cp011

0x5efb,	// (0x000b31e8) cell_vitu2_function_pane_g1

0x94ed,	// (0x000b67da) main_myfav_hc_pane

0x588a,	// (0x000b2b77) popup_image3_note_pane_ParamLimits

0x588a,	// (0x000b2b77) popup_image3_note_pane

0x58a6,	// (0x000b2b93) popup_image3_tool_bar_pane_ParamLimits

0x58a6,	// (0x000b2b93) popup_image3_tool_bar_pane

0xfbcf,	// (0x000acebc) cell_vitu2_itu_pane_t3_ParamLimits

0xfbcf,	// (0x000acebc) cell_vitu2_itu_pane_t3

0x94ed,	// (0x000b67da) bg_popup_trans_pane

0xd6a0,	// (0x000ba98d) grid_image3_tool_bar_pane

0xd6aa,	// (0x000ba997) bg_popup_trans_pane_g1

0xaca5,	// (0x000b7f92) bg_popup_trans_pane_g2

0xd6b2,	// (0x000ba99f) bg_popup_trans_pane_g3

0xd6ba,	// (0x000ba9a7) bg_popup_trans_pane_g4

0xd6c2,	// (0x000ba9af) bg_popup_trans_pane_g5

0xd6ca,	// (0x000ba9b7) bg_popup_trans_pane_g6

0xd6d2,	// (0x000ba9bf) bg_popup_trans_pane_g7

0xd6da,	// (0x000ba9c7) bg_popup_trans_pane_g8

0xac85,	// (0x000b7f72) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000bcc20) bg_popup_trans_pane_g

0xd6e2,	// (0x000ba9cf) cell_image3_tool_bar_pane_ParamLimits

0xd6e2,	// (0x000ba9cf) cell_image3_tool_bar_pane

0xcc7e,	// (0x000b9f6b) cell_image3_tool_bar_pane_g1

0x94ed,	// (0x000b67da) bg_popup_trans_pane_cp1

0xd6f8,	// (0x000ba9e5) popup_image3_note_pane_t1

0xd706,	// (0x000ba9f3) popup_image3_note_pane_t2

0xd714,	// (0x000baa01) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000bcc33) popup_image3_note_pane_t

0xd724,	// (0x000baa11) popup_image3_note_pane_t3_copy1

0x5f0f,	// (0x000b31fc) bg_myfav_hc_instruction_pane_ParamLimits

0x5f0f,	// (0x000b31fc) bg_myfav_hc_instruction_pane

0x5f27,	// (0x000b3214) cell_myfav_contact_pane_ParamLimits

0x5f27,	// (0x000b3214) cell_myfav_contact_pane

0x5f43,	// (0x000b3230) cell_myfav_contact_pane_cp1_ParamLimits

0x5f43,	// (0x000b3230) cell_myfav_contact_pane_cp1

0x5f5b,	// (0x000b3248) cell_myfav_contact_pane_cp2_ParamLimits

0x5f5b,	// (0x000b3248) cell_myfav_contact_pane_cp2

0x5f73,	// (0x000b3260) cell_myfav_contact_pane_cp3_ParamLimits

0x5f73,	// (0x000b3260) cell_myfav_contact_pane_cp3

0x5f8a,	// (0x000b3277) cell_myfav_contact_pane_cp4_ParamLimits

0x5f8a,	// (0x000b3277) cell_myfav_contact_pane_cp4

0x5fa2,	// (0x000b328f) cell_myfav_contact_pane_cp5_ParamLimits

0x5fa2,	// (0x000b328f) cell_myfav_contact_pane_cp5

0x5fb6,	// (0x000b32a3) cell_myfav_contact_pane_cp6_ParamLimits

0x5fb6,	// (0x000b32a3) cell_myfav_contact_pane_cp6

0x5fcc,	// (0x000b32b9) cell_myfav_contact_pane_cp7_ParamLimits

0x5fcc,	// (0x000b32b9) cell_myfav_contact_pane_cp7

0xd732,	// (0x000baa1f) listscroll_gen_pane_cp05

0x5fe4,	// (0x000b32d1) main_myfav_hc_pane_g1_ParamLimits

0x5fe4,	// (0x000b32d1) main_myfav_hc_pane_g1

0x5ffe,	// (0x000b32eb) main_myfav_hc_pane_g2_ParamLimits

0x5ffe,	// (0x000b32eb) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000bcc3a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000bcc3a) main_myfav_hc_pane_g

0x6032,	// (0x000b331f) main_myfav_hc_pane_t1_ParamLimits

0x6032,	// (0x000b331f) main_myfav_hc_pane_t1

0xd73b,	// (0x000baa28) main_myfav_hc_pane_t2_ParamLimits

0xd73b,	// (0x000baa28) main_myfav_hc_pane_t2

0xd74d,	// (0x000baa3a) main_myfav_hc_pane_t3_ParamLimits

0xd74d,	// (0x000baa3a) main_myfav_hc_pane_t3

0x6049,	// (0x000b3336) main_myfav_hc_pane_t4_ParamLimits

0x6049,	// (0x000b3336) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000bcc41) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000bcc41) main_myfav_hc_pane_t

0xcc7e,	// (0x000b9f6b) bg_myfav_hc_instruction_pane_g1

0xd75f,	// (0x000baa4c) cell_myfav_contact_pane_g1_ParamLimits

0xd75f,	// (0x000baa4c) cell_myfav_contact_pane_g1

0xd75f,	// (0x000baa4c) cell_myfav_contact_pane_g2_ParamLimits

0xd75f,	// (0x000baa4c) cell_myfav_contact_pane_g2

0xd76b,	// (0x000baa58) cell_myfav_contact_pane_g3_ParamLimits

0xd76b,	// (0x000baa58) cell_myfav_contact_pane_g3

0xcf1b,	// (0x000ba208) cell_myfav_contact_pane_g4_ParamLimits

0xcf1b,	// (0x000ba208) cell_myfav_contact_pane_g4

0xd778,	// (0x000baa65) cell_myfav_contact_pane_g5_ParamLimits

0xd778,	// (0x000baa65) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000bcc4c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000bcc4c) cell_myfav_contact_pane_g

0x6018,	// (0x000b3305) main_myfav_hc_pane_g3_ParamLimits

0x6018,	// (0x000b3305) main_myfav_hc_pane_g3

0xfdbe,	// (0x000ad0ab) popup_adpt_find_window

0x6073,	// (0x000b3360) afind_page_pane_ParamLimits

0x6073,	// (0x000b3360) afind_page_pane

0x6088,	// (0x000b3375) aid_size_cell_afind_ParamLimits

0x6088,	// (0x000b3375) aid_size_cell_afind

0x60a6,	// (0x000b3393) bg_popup_sub_pane_cp09_ParamLimits

0x60a6,	// (0x000b3393) bg_popup_sub_pane_cp09

0x60b3,	// (0x000b33a0) find_pane_cp01_ParamLimits

0x60b3,	// (0x000b33a0) find_pane_cp01

0xd784,	// (0x000baa71) grid_afind_control_pane_ParamLimits

0xd784,	// (0x000baa71) grid_afind_control_pane

0x60c0,	// (0x000b33ad) grid_afind_pane_ParamLimits

0x60c0,	// (0x000b33ad) grid_afind_pane

0x60e2,	// (0x000b33cf) cell_afind_pane_ParamLimits

0x60e2,	// (0x000b33cf) cell_afind_pane

0xcc7e,	// (0x000b9f6b) afind_page_pane_g1

0x614b,	// (0x000b3438) afind_page_pane_g2

0x6154,	// (0x000b3441) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000bcc57) afind_page_pane_g

0x615d,	// (0x000b344a) afind_page_pane_t1

0xd798,	// (0x000baa85) cell_afind_grid_control_pane_ParamLimits

0xd798,	// (0x000baa85) cell_afind_grid_control_pane

0xd58c,	// (0x000ba879) bg_button_pane_cp69_ParamLimits

0xd58c,	// (0x000ba879) bg_button_pane_cp69

0x617d,	// (0x000b346a) cell_afind_pane_g1_ParamLimits

0x617d,	// (0x000b346a) cell_afind_pane_g1

0x618a,	// (0x000b3477) cell_afind_pane_t1_ParamLimits

0x618a,	// (0x000b3477) cell_afind_pane_t1

0xaa9a,	// (0x000b7d87) bg_button_pane_cp72

0xd7a7,	// (0x000baa94) cell_afind_grid_control_pane_g1

0x30c4,	// (0x000b03b1) aid_image_placing_area_ParamLimits

0x30c4,	// (0x000b03b1) aid_image_placing_area

0xd24e,	// (0x000ba53b) field_vitu_entry_pane_g1_ParamLimits

0xd24e,	// (0x000ba53b) field_vitu_entry_pane_g1

0xd25a,	// (0x000ba547) field_vitu_entry_pane_g2_ParamLimits

0xd25a,	// (0x000ba547) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000bcb08) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000bcb08) field_vitu_entry_pane_g

0x52e2,	// (0x000b25cf) cell_vitu_itu_pane_g1_ParamLimits

0x5324,	// (0x000b2611) cell_vitu_itu_pane_t3_ParamLimits

0x5324,	// (0x000b2611) cell_vitu_itu_pane_t3

0xd532,	// (0x000ba81f) mp4_progress_pane_t1_ParamLimits

0xd54b,	// (0x000ba838) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000bcb9d) mp4_progress_pane_t_ParamLimits

0xd564,	// (0x000ba851) mup_progress_pane_cp04_ParamLimits

0x605d,	// (0x000b334a) main_myfav_hc_pane_t5_ParamLimits

0x605d,	// (0x000b334a) main_myfav_hc_pane_t5

0xfc7d,	// (0x000acf6a) aid_zoom_text_primary

0xfdbe,	// (0x000ad0ab) popup_adpt_find_window_ParamLimits

0x953e,	// (0x000b682b) main_cam_set_pane

0x5a95,	// (0x000b2d82) cam4_zoom_pane_ParamLimits

0x5a95,	// (0x000b2d82) cam4_zoom_pane

0x619c,	// (0x000b3489) main_cam_set_pane_g1_ParamLimits

0x619c,	// (0x000b3489) main_cam_set_pane_g1

0x61aa,	// (0x000b3497) main_cam_set_pane_g2_ParamLimits

0x61aa,	// (0x000b3497) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000bcc5e) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000bcc5e) main_cam_set_pane_g

0x61cb,	// (0x000b34b8) main_cam_set_pane_t1_ParamLimits

0x61cb,	// (0x000b34b8) main_cam_set_pane_t1

0x61e6,	// (0x000b34d3) main_cset_listscroll_pane_ParamLimits

0x61e6,	// (0x000b34d3) main_cset_listscroll_pane

0x620a,	// (0x000b34f7) main_cset_slider_pane_ParamLimits

0x620a,	// (0x000b34f7) main_cset_slider_pane

0xd7b8,	// (0x000baaa5) main_cset_list_pane_ParamLimits

0xd7b8,	// (0x000baaa5) main_cset_list_pane

0xd7c8,	// (0x000baab5) scroll_pane_cp028

0x6234,	// (0x000b3521) aid_area_touch_slider

0x6250,	// (0x000b353d) cset_slider_pane

0x627a,	// (0x000b3567) main_cset_slider_pane_g1

0x628f,	// (0x000b357c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000bcc63) main_cset_slider_pane_g

0xd801,	// (0x000baaee) main_cset_slider_pane_t1

0x6351,	// (0x000b363e) main_cset_slider_pane_t2

0x636b,	// (0x000b3658) main_cset_slider_pane_t3

0x6385,	// (0x000b3672) main_cset_slider_pane_t4

0x639f,	// (0x000b368c) main_cset_slider_pane_t5

0x63bd,	// (0x000b36aa) main_cset_slider_pane_t6

0x63d2,	// (0x000b36bf) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000bcc88) main_cset_slider_pane_t

0x64de,	// (0x000b37cb) cset_list_set_pane_ParamLimits

0x64de,	// (0x000b37cb) cset_list_set_pane

0x64f2,	// (0x000b37df) aid_position_infowindow_above

0x64fa,	// (0x000b37e7) aid_position_infowindow_below

0x6502,	// (0x000b37ef) cset_list_set_pane_g1_ParamLimits

0x6502,	// (0x000b37ef) cset_list_set_pane_g1

0x650e,	// (0x000b37fb) cset_list_set_pane_g3_ParamLimits

0x650e,	// (0x000b37fb) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000bcca7) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000bcca7) cset_list_set_pane_g

0x651d,	// (0x000b380a) cset_list_set_pane_t1_ParamLimits

0x651d,	// (0x000b380a) cset_list_set_pane_t1

0x953e,	// (0x000b682b) list_highlight_pane_cp021_ParamLimits

0x953e,	// (0x000b682b) list_highlight_pane_cp021

0xb4bc,	// (0x000b87a9) cset_slider_pane_g1

0xb4ce,	// (0x000b87bb) cset_slider_pane_g2

0xb4c5,	// (0x000b87b2) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000bccac) cset_slider_pane_g

0xa287,	// (0x000b7574) aid_area_touch_cam4_zoom

0xa28f,	// (0x000b757c) cam4_zoom_cont_pane

0xa297,	// (0x000b7584) cam4_zoom_pane_g1

0xa29f,	// (0x000b758c) cam4_zoom_pane_g2

0x6532,	// (0x000b381f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000bccb3) cam4_zoom_pane_g

0xa2a7,	// (0x000b7594) cam4_zoom_cont_pane_g1

0xa2b0,	// (0x000b759d) cam4_zoom_cont_pane_g2

0xa2b9,	// (0x000b75a6) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000bccba) cam4_zoom_cont_pane_g

0x5912,	// (0x000b2bff) call4_image_pane_ParamLimits

0x5912,	// (0x000b2bff) call4_image_pane

0xd598,	// (0x000ba885) call4_windows_conf_pane_ParamLimits

0xd5b3,	// (0x000ba8a0) popup_call4_audio_in_window_ParamLimits

0xd5b3,	// (0x000ba8a0) popup_call4_audio_in_window

0x94ed,	// (0x000b67da) bg_popup_call2_act_pane_cp02

0xd615,	// (0x000ba902) call4_list_conf_pane

0xcc7e,	// (0x000b9f6b) call4_image_pane_g1

0xcc7e,	// (0x000b9f6b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000bc9c9) call4_image_pane_g

0xd8a1,	// (0x000bab8e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8a1,	// (0x000bab8e) list_single_graphic_popup_conf4_pane

0x94ed,	// (0x000b67da) list_highlight_pane_cp022

0xd8b6,	// (0x000baba3) list_single_graphic_popup_conf4_pane_g1

0xb1b0,	// (0x000b849d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000bccc1) list_single_graphic_popup_conf4_pane_g

0xd8be,	// (0x000babab) list_single_graphic_popup_conf4_pane_t1

0x11ba,	// (0x000ae4a7) popup_vtel_slider_window_ParamLimits

0x11ba,	// (0x000ae4a7) popup_vtel_slider_window

0xd57a,	// (0x000ba867) dialer2_ne_pane_t2_ParamLimits

0xd57a,	// (0x000ba867) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000bcba2) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000bcba2) dialer2_ne_pane_t

0xca5d,	// (0x000b9d4a) bg_popup_sub_pane_cp010_ParamLimits

0xca5d,	// (0x000b9d4a) bg_popup_sub_pane_cp010

0x653a,	// (0x000b3827) popup_vtel_slider_window_g1_ParamLimits

0x653a,	// (0x000b3827) popup_vtel_slider_window_g1

0x654d,	// (0x000b383a) popup_vtel_slider_window_g2_ParamLimits

0x654d,	// (0x000b383a) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000bccc6) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000bccc6) popup_vtel_slider_window_g

0x65a3,	// (0x000b3890) vtel_slider_pane_ParamLimits

0x65a3,	// (0x000b3890) vtel_slider_pane

0x65c5,	// (0x000b38b2) vtel_slider_pane_g1_ParamLimits

0x65c5,	// (0x000b38b2) vtel_slider_pane_g1

0x65d9,	// (0x000b38c6) vtel_slider_pane_g2_ParamLimits

0x65d9,	// (0x000b38c6) vtel_slider_pane_g2

0x65f1,	// (0x000b38de) vtel_slider_pane_g3_ParamLimits

0x65f1,	// (0x000b38de) vtel_slider_pane_g3

0x65c5,	// (0x000b38b2) vtel_slider_pane_g4_ParamLimits

0x65c5,	// (0x000b38b2) vtel_slider_pane_g4

0x6607,	// (0x000b38f4) vtel_slider_pane_g5_ParamLimits

0x6607,	// (0x000b38f4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000bcccf) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000bcccf) vtel_slider_pane_g

0x953e,	// (0x000b682b) main_gallery2_pane

0x5c99,	// (0x000b2f86) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c99,	// (0x000b2f86) aid_size_row_itut2_dropdow_list

0x5d2b,	// (0x000b3018) grid_vitu2_function_top_pane_ParamLimits

0x5d2b,	// (0x000b3018) grid_vitu2_function_top_pane

0x5d8f,	// (0x000b307c) popup_vitu2_dropdown_list_window_ParamLimits

0x5d8f,	// (0x000b307c) popup_vitu2_dropdown_list_window

0x5dbc,	// (0x000b30a9) popup_vitu2_match_list_window

0x661d,	// (0x000b390a) cell_vitu2_function_top_pane_ParamLimits

0x661d,	// (0x000b390a) cell_vitu2_function_top_pane

0x663d,	// (0x000b392a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x663d,	// (0x000b392a) cell_vitu2_function_top_pane_cp01

0x6659,	// (0x000b3946) cell_vitu2_function_top_wide_pane_ParamLimits

0x6659,	// (0x000b3946) cell_vitu2_function_top_wide_pane

0xa1ce,	// (0x000b74bb) bg_button_pane_cp012

0x6675,	// (0x000b3962) cell_vitu2_function_top_pane_g1

0xa2d0,	// (0x000b75bd) bg_button_pane_cp013_ParamLimits

0xa2d0,	// (0x000b75bd) bg_button_pane_cp013

0x6689,	// (0x000b3976) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6689,	// (0x000b3976) cell_vitu2_function_top_wide_pane_g1

0xa1ce,	// (0x000b74bb) bg_popup_sub_pane_cp20

0x66a1,	// (0x000b398e) list_vitu2_match_list_pane

0xd6aa,	// (0x000ba997) bg_popup_sub_pane_cp20_g1

0xd6b2,	// (0x000ba99f) bg_popup_sub_pane_cp20_g2

0xaca5,	// (0x000b7f92) bg_popup_sub_pane_cp20_g3

0xd6ba,	// (0x000ba9a7) bg_popup_sub_pane_cp20_g4

0xac85,	// (0x000b7f72) bg_popup_sub_pane_cp20_g5

0xd8d4,	// (0x000babc1) bg_popup_sub_pane_cp20_g6

0xd6ca,	// (0x000ba9b7) bg_popup_sub_pane_cp20_g7

0xd6d2,	// (0x000ba9bf) bg_popup_sub_pane_cp20_g8

0xd6da,	// (0x000ba9c7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000bccda) bg_popup_sub_pane_cp20_g

0xa2ec,	// (0x000b75d9) list_vitu2_match_list_item_pane_ParamLimits

0xa2ec,	// (0x000b75d9) list_vitu2_match_list_item_pane

0xa2fe,	// (0x000b75eb) list_vitu2_match_list_item_pane_t1

0x9c31,	// (0x000b6f1e) bg_popup_sub_pane_cp21

0xa318,	// (0x000b7605) grid_vitu2_dropdown_list_pane

0x66f7,	// (0x000b39e4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66f7,	// (0x000b39e4) cell_vitu2_dropdown_list_char_pane

0x671a,	// (0x000b3a07) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x671a,	// (0x000b3a07) cell_vitu2_dropdown_list_ctrl_pane

0xd8dc,	// (0x000babc9) cell_vitu2_dropdown_list_char_pane_g1

0xd8e5,	// (0x000babd2) cell_vitu2_dropdown_list_char_pane_g2

0xd8ee,	// (0x000babdb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000bccf7) cell_vitu2_dropdown_list_char_pane_g

0x6748,	// (0x000b3a35) cell_vitu2_dropdown_list_char_pane_t1

0x6756,	// (0x000b3a43) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6756,	// (0x000b3a43) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6766,	// (0x000b3a53) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6766,	// (0x000b3a53) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6777,	// (0x000b3a64) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6777,	// (0x000b3a64) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6787,	// (0x000b3a74) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6787,	// (0x000b3a74) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa16b,	// (0x000b7458) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa16b,	// (0x000b7458) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000bccfe) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000bccfe) cell_vitu2_dropdown_list_ctrl_pane_g

0x67a3,	// (0x000b3a90) aid_size_cell_gallery2_ParamLimits

0x67a3,	// (0x000b3a90) aid_size_cell_gallery2

0x67c1,	// (0x000b3aae) grid_gallery2_pane_ParamLimits

0x67c1,	// (0x000b3aae) grid_gallery2_pane

0x67db,	// (0x000b3ac8) scroll_pane_cp029_ParamLimits

0x67db,	// (0x000b3ac8) scroll_pane_cp029

0x67e7,	// (0x000b3ad4) cell_gallery2_pane_ParamLimits

0x67e7,	// (0x000b3ad4) cell_gallery2_pane

0xd8f7,	// (0x000babe4) cell_gallery2_pane_g2

0x6848,	// (0x000b3b35) cell_gallery2_pane_g3

0xd8ff,	// (0x000babec) cell_gallery2_pane_g4

0xd907,	// (0x000babf4) cell_gallery2_pane_g5

0xaa48,	// (0x000b7d35) grid_highlight_pane_cp10

0x5dbc,	// (0x000b30a9) popup_vitu2_match_list_window_ParamLimits

0x5dd3,	// (0x000b30c0) popup_vitu2_query_window_ParamLimits

0x5dd3,	// (0x000b30c0) popup_vitu2_query_window

0x9c31,	// (0x000b6f1e) bg_vitu2_candi_button_pane

0xd8dc,	// (0x000babc9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8e5,	// (0x000babd2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ee,	// (0x000babdb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6850,	// (0x000b3b3d) bg_button_pane_cp015

0x6864,	// (0x000b3b51) bg_button_pane_cp016

0x6877,	// (0x000b3b64) bg_button_pane_cp017

0xc82d,	// (0x000b9b1a) bg_popup_sub_pane_cp22

0xd90f,	// (0x000babfc) popup_vitu2_query_window_g1

0x68bc,	// (0x000b3ba9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000bcd09) popup_vitu2_query_window_g

0x68db,	// (0x000b3bc8) popup_vitu2_query_window_t1_ParamLimits

0x68db,	// (0x000b3bc8) popup_vitu2_query_window_t1

0x6910,	// (0x000b3bfd) popup_vitu2_query_window_t2_ParamLimits

0x6910,	// (0x000b3bfd) popup_vitu2_query_window_t2

0x6922,	// (0x000b3c0f) popup_vitu2_query_window_t3_ParamLimits

0x6922,	// (0x000b3c0f) popup_vitu2_query_window_t3

0x694a,	// (0x000b3c37) popup_vitu2_query_window_t4_ParamLimits

0x694a,	// (0x000b3c37) popup_vitu2_query_window_t4

0x696b,	// (0x000b3c58) popup_vitu2_query_window_t5_ParamLimits

0x696b,	// (0x000b3c58) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000bcd10) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000bcd10) popup_vitu2_query_window_t

0xd7b0,	// (0x000baa9d) main_cset_text_pane

0x6234,	// (0x000b3521) aid_area_touch_slider_ParamLimits

0x6250,	// (0x000b353d) cset_slider_pane_ParamLimits

0x627a,	// (0x000b3567) main_cset_slider_pane_g1_ParamLimits

0x628f,	// (0x000b357c) main_cset_slider_pane_g2_ParamLimits

0xd7d1,	// (0x000baabe) main_cset_slider_pane_g3_ParamLimits

0xd7d1,	// (0x000baabe) main_cset_slider_pane_g3

0x62a4,	// (0x000b3591) main_cset_slider_pane_g4_ParamLimits

0x62a4,	// (0x000b3591) main_cset_slider_pane_g4

0x62b3,	// (0x000b35a0) main_cset_slider_pane_g5_ParamLimits

0x62b3,	// (0x000b35a0) main_cset_slider_pane_g5

0x62c1,	// (0x000b35ae) main_cset_slider_pane_g6_ParamLimits

0x62c1,	// (0x000b35ae) main_cset_slider_pane_g6

0xf976,	// (0x000bcc63) main_cset_slider_pane_g_ParamLimits

0xd801,	// (0x000baaee) main_cset_slider_pane_t1_ParamLimits

0x6351,	// (0x000b363e) main_cset_slider_pane_t2_ParamLimits

0x636b,	// (0x000b3658) main_cset_slider_pane_t3_ParamLimits

0x6385,	// (0x000b3672) main_cset_slider_pane_t4_ParamLimits

0x639f,	// (0x000b368c) main_cset_slider_pane_t5_ParamLimits

0x63bd,	// (0x000b36aa) main_cset_slider_pane_t6_ParamLimits

0x63d2,	// (0x000b36bf) main_cset_slider_pane_t7_ParamLimits

0x6400,	// (0x000b36ed) main_cset_slider_pane_t8_ParamLimits

0x6400,	// (0x000b36ed) main_cset_slider_pane_t8

0x6428,	// (0x000b3715) main_cset_slider_pane_t9_ParamLimits

0x6428,	// (0x000b3715) main_cset_slider_pane_t9

0x6450,	// (0x000b373d) main_cset_slider_pane_t10_ParamLimits

0x6450,	// (0x000b373d) main_cset_slider_pane_t10

0x6478,	// (0x000b3765) main_cset_slider_pane_t11_ParamLimits

0x6478,	// (0x000b3765) main_cset_slider_pane_t11

0x64a2,	// (0x000b378f) main_cset_slider_pane_t12_ParamLimits

0x64a2,	// (0x000b378f) main_cset_slider_pane_t12

0x64bf,	// (0x000b37ac) main_cset_slider_pane_t13_ParamLimits

0x64bf,	// (0x000b37ac) main_cset_slider_pane_t13

0xf99b,	// (0x000bcc88) main_cset_slider_pane_t_ParamLimits

0x94ed,	// (0x000b67da) bg_popup_sub_pane_cp011

0xd91b,	// (0x000bac08) main_cset_text_pane_g1

0xd923,	// (0x000bac10) main_cset_text_pane_t1

0xd931,	// (0x000bac1e) main_cset_text_pane_t2

0xd93f,	// (0x000bac2c) main_cset_text_pane_t3

0xd94d,	// (0x000bac3a) main_cset_text_pane_t4

0xd95b,	// (0x000bac48) main_cset_text_pane_t5

0xd969,	// (0x000bac56) main_cset_text_pane_t6

0xd977,	// (0x000bac64) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000bcd1f) main_cset_text_pane_t

0x94ed,	// (0x000b67da) main_cam4_burst_pane

0x94ed,	// (0x000b67da) main_cam5_pane

0x616b,	// (0x000b3458) bg_button_pane_cp019

0x6174,	// (0x000b3461) bg_button_pane_cp020

0xd7dd,	// (0x000baaca) main_cset_slider_pane_g7_ParamLimits

0xd7dd,	// (0x000baaca) main_cset_slider_pane_g7

0xd7e9,	// (0x000baad6) main_cset_slider_pane_g8_ParamLimits

0xd7e9,	// (0x000baad6) main_cset_slider_pane_g8

0x62d5,	// (0x000b35c2) main_cset_slider_pane_g9_ParamLimits

0x62d5,	// (0x000b35c2) main_cset_slider_pane_g9

0x62e1,	// (0x000b35ce) main_cset_slider_pane_g10_ParamLimits

0x62e1,	// (0x000b35ce) main_cset_slider_pane_g10

0x62ed,	// (0x000b35da) main_cset_slider_pane_g11_ParamLimits

0x62ed,	// (0x000b35da) main_cset_slider_pane_g11

0x62f9,	// (0x000b35e6) main_cset_slider_pane_g12_ParamLimits

0x62f9,	// (0x000b35e6) main_cset_slider_pane_g12

0x6305,	// (0x000b35f2) main_cset_slider_pane_g13_ParamLimits

0x6305,	// (0x000b35f2) main_cset_slider_pane_g13

0x6311,	// (0x000b35fe) main_cset_slider_pane_g14_ParamLimits

0x6311,	// (0x000b35fe) main_cset_slider_pane_g14

0x631d,	// (0x000b360a) main_cset_slider_pane_g15_ParamLimits

0x631d,	// (0x000b360a) main_cset_slider_pane_g15

0xd82f,	// (0x000bab1c) main_cset_slider_pane_t14_ParamLimits

0xd82f,	// (0x000bab1c) main_cset_slider_pane_t14

0xd868,	// (0x000bab55) main_cset_slider_pane_t15_ParamLimits

0xd868,	// (0x000bab55) main_cset_slider_pane_t15

0x69e2,	// (0x000b3ccf) aid_cam4_burst_size_cell_ParamLimits

0x69e2,	// (0x000b3ccf) aid_cam4_burst_size_cell

0x6a02,	// (0x000b3cef) grid_cam4_burst_pane_ParamLimits

0x6a02,	// (0x000b3cef) grid_cam4_burst_pane

0x6a3c,	// (0x000b3d29) linegrid_cam4_burst_pane_ParamLimits

0x6a3c,	// (0x000b3d29) linegrid_cam4_burst_pane

0xd985,	// (0x000bac72) scroll_pane_cp30_ParamLimits

0xd985,	// (0x000bac72) scroll_pane_cp30

0x6a5e,	// (0x000b3d4b) cell_cam4_burst_pane_ParamLimits

0x6a5e,	// (0x000b3d4b) cell_cam4_burst_pane

0xd991,	// (0x000bac7e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd991,	// (0x000bac7e) linegrid_cam4_burst_pane_g1

0x6ab3,	// (0x000b3da0) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ab3,	// (0x000b3da0) linegrid_cam4_burst_pane_g2

0xd99e,	// (0x000bac8b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd99e,	// (0x000bac8b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000bcd2e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000bcd2e) linegrid_cam4_burst_pane_g

0x6ac4,	// (0x000b3db1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6ac4,	// (0x000b3db1) linegrid_cam4_burst_pane_g3_copy1

0xd9ab,	// (0x000bac98) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9ab,	// (0x000bac98) linegrid_cam4_burst_pane_g4

0x6ae2,	// (0x000b3dcf) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ae2,	// (0x000b3dcf) linegrid_cam4_burst_pane_g5

0x6af3,	// (0x000b3de0) linegrid_cam4_burst_pane_g6_ParamLimits

0x6af3,	// (0x000b3de0) linegrid_cam4_burst_pane_g6

0xd9b8,	// (0x000baca5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9b8,	// (0x000baca5) linegrid_cam4_burst_pane_g7

0x6b0a,	// (0x000b3df7) cell_cam4_burst_pane_g1

0xd9d1,	// (0x000bacbe) main_cam5_pane_t1_ParamLimits

0xd9d1,	// (0x000bacbe) main_cam5_pane_t1

0xd9e3,	// (0x000bacd0) main_cam5_pane_t2_ParamLimits

0xd9e3,	// (0x000bacd0) main_cam5_pane_t2

0xd9f5,	// (0x000bace2) main_cam5_pane_t3_ParamLimits

0xd9f5,	// (0x000bace2) main_cam5_pane_t3

0xda07,	// (0x000bacf4) main_cam5_pane_t4_ParamLimits

0xda07,	// (0x000bacf4) main_cam5_pane_t4

0xda1f,	// (0x000bad0c) main_cam5_pane_t5_ParamLimits

0xda1f,	// (0x000bad0c) main_cam5_pane_t5

0xda33,	// (0x000bad20) main_cam5_pane_t6_ParamLimits

0xda33,	// (0x000bad20) main_cam5_pane_t6

0xda47,	// (0x000bad34) main_cam5_pane_t7_ParamLimits

0xda47,	// (0x000bad34) main_cam5_pane_t7

0xda59,	// (0x000bad46) main_cam5_pane_t8_ParamLimits

0xda59,	// (0x000bad46) main_cam5_pane_t8

0xda77,	// (0x000bad64) main_cam5_pane_t9_ParamLimits

0xda77,	// (0x000bad64) main_cam5_pane_t9

0xda89,	// (0x000bad76) main_cam5_pane_t10_ParamLimits

0xda89,	// (0x000bad76) main_cam5_pane_t10

0xda9b,	// (0x000bad88) main_cam5_pane_t11_ParamLimits

0xda9b,	// (0x000bad88) main_cam5_pane_t11

0xdaaf,	// (0x000bad9c) main_cam5_pane_t12_ParamLimits

0xdaaf,	// (0x000bad9c) main_cam5_pane_t12

0xdac6,	// (0x000badb3) main_cam5_pane_t13_ParamLimits

0xdac6,	// (0x000badb3) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000bcd3a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000bcd3a) main_cam5_pane_t

0xfe41,	// (0x000ad12e) popup_scut_keymap_window_ParamLimits

0xfe41,	// (0x000ad12e) popup_scut_keymap_window

0x6b1d,	// (0x000b3e0a) aid_size_cell_brow_shortcut

0xaa48,	// (0x000b7d35) bg_popup_window_pane_cp010

0x6b29,	// (0x000b3e16) grid_scut_pane

0x6b35,	// (0x000b3e22) cell_scut_pane_ParamLimits

0x6b35,	// (0x000b3e22) cell_scut_pane

0x6b4e,	// (0x000b3e3b) cell_scut_pane_g1

0xdae9,	// (0x000badd6) cell_scut_pane_t1

0xdaf8,	// (0x000bade5) cell_scut_pane_t2

0x6b57,	// (0x000b3e44) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000bcd55) cell_scut_pane_t

0x47ab,	// (0x000b1a98) main_mup3_pane_g8_ParamLimits

0x47ab,	// (0x000b1a98) main_mup3_pane_g8

0x5cb5,	// (0x000b2fa2) area_vitu2_query_pane_ParamLimits

0x5cb5,	// (0x000b2fa2) area_vitu2_query_pane

0x688a,	// (0x000b3b77) input_focus_pane_cp08

0xdb07,	// (0x000badf4) area_vitu2_query_pane_g1

0x6b65,	// (0x000b3e52) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000bcd5c) area_vitu2_query_pane_g

0x6b78,	// (0x000b3e65) area_vitu2_query_pane_t1_ParamLimits

0x6b78,	// (0x000b3e65) area_vitu2_query_pane_t1

0x6b8c,	// (0x000b3e79) area_vitu2_query_pane_t2_ParamLimits

0x6b8c,	// (0x000b3e79) area_vitu2_query_pane_t2

0x6ba0,	// (0x000b3e8d) area_vitu2_query_pane_t3_ParamLimits

0x6ba0,	// (0x000b3e8d) area_vitu2_query_pane_t3

0xa320,	// (0x000b760d) area_vitu2_query_pane_t4_ParamLimits

0xa320,	// (0x000b760d) area_vitu2_query_pane_t4

0xa348,	// (0x000b7635) area_vitu2_query_pane_t5_ParamLimits

0xa348,	// (0x000b7635) area_vitu2_query_pane_t5

0xa370,	// (0x000b765d) area_vitu2_query_pane_t6_ParamLimits

0xa370,	// (0x000b765d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000bcd61) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000bcd61) area_vitu2_query_pane_t

0x6bc8,	// (0x000b3eb5) bg_button_pane_cp018

0x6bd6,	// (0x000b3ec3) bg_button_pane_cp021

0x6be2,	// (0x000b3ecf) bg_button_pane_cp022

0x6bf3,	// (0x000b3ee0) input_focus_pane_cp09

0x2618,	// (0x000af905) aid_size_touch_mv_arrow_left

0x2641,	// (0x000af92e) aid_size_touch_mv_arrow_right

0x6335,	// (0x000b3622) main_cset_slider_pane_g16_ParamLimits

0x6335,	// (0x000b3622) main_cset_slider_pane_g16

0x6343,	// (0x000b3630) main_cset_slider_pane_g17_ParamLimits

0x6343,	// (0x000b3630) main_cset_slider_pane_g17

0x6b0a,	// (0x000b3df7) cell_cam4_burst_pane_g1_ParamLimits

0x94ed,	// (0x000b67da) compa_mode_pane

0x655d,	// (0x000b384a) popup_vtel_slider_window_g3_ParamLimits

0x655d,	// (0x000b384a) popup_vtel_slider_window_g3

0x6574,	// (0x000b3861) popup_vtel_slider_window_g4_ParamLimits

0x6574,	// (0x000b3861) popup_vtel_slider_window_g4

0x658b,	// (0x000b3878) popup_vtel_slider_window_t1_ParamLimits

0x658b,	// (0x000b3878) popup_vtel_slider_window_t1

0x94ed,	// (0x000b67da) main_cl_pane

0xc859,	// (0x000b9b46) popup_imed_adjust2_window_ParamLimits

0xc82d,	// (0x000b9b1a) bg_tb_trans_pane_cp05_ParamLimits

0xd183,	// (0x000ba470) popup_imed_adjust2_window_g1_ParamLimits

0xd192,	// (0x000ba47f) popup_imed_adjust2_window_g2_ParamLimits

0xd192,	// (0x000ba47f) popup_imed_adjust2_window_g2

0xd19e,	// (0x000ba48b) popup_imed_adjust2_window_g3_ParamLimits

0xd19e,	// (0x000ba48b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000bcacc) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000bcacc) popup_imed_adjust2_window_g

0xd1aa,	// (0x000ba497) popup_imed_adjust2_window_t1_ParamLimits

0xd1c2,	// (0x000ba4af) slider_imed_adjust_pane_ParamLimits

0xd1d6,	// (0x000ba4c3) slider_imed_adjust_pane_g1_ParamLimits

0xd1e6,	// (0x000ba4d3) slider_imed_adjust_pane_g2_ParamLimits

0xd1f6,	// (0x000ba4e3) slider_imed_adjust_pane_g3_ParamLimits

0xd207,	// (0x000ba4f4) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000bcad3) slider_imed_adjust_pane_g_ParamLimits

0x5a35,	// (0x000b2d22) aid_touch_area_cam4_ParamLimits

0x5a35,	// (0x000b2d22) aid_touch_area_cam4

0xa14d,	// (0x000b743a) battery_pane_cp01

0x5b07,	// (0x000b2df4) main_camera4_pane_g6_ParamLimits

0x5b07,	// (0x000b2df4) main_camera4_pane_g6

0x5b31,	// (0x000b2e1e) main_camera4_pane_t2_ParamLimits

0x5b31,	// (0x000b2e1e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000bcbd6) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000bcbd6) main_camera4_pane_t

0x5b66,	// (0x000b2e53) aid_touch_area_vid4_ParamLimits

0x5b66,	// (0x000b2e53) aid_touch_area_vid4

0x5bba,	// (0x000b2ea7) main_video4_pane_g5_ParamLimits

0x5bba,	// (0x000b2ea7) main_video4_pane_g5

0x5bdf,	// (0x000b2ecc) vid4_progress_pane_ParamLimits

0x5bdf,	// (0x000b2ecc) vid4_progress_pane

0xd7f5,	// (0x000baae2) main_cset_slider_pane_g18_ParamLimits

0xd7f5,	// (0x000baae2) main_cset_slider_pane_g18

0xd9c5,	// (0x000bacb2) cell_cam4_burst_pane_g2_ParamLimits

0xd9c5,	// (0x000bacb2) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000bcd35) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000bcd35) cell_cam4_burst_pane_g

0xa892,	// (0x000b7b7f) bg_cl_pane_ParamLimits

0xa892,	// (0x000b7b7f) bg_cl_pane

0x6c04,	// (0x000b3ef1) cl_header_pane_ParamLimits

0x6c04,	// (0x000b3ef1) cl_header_pane

0x6c18,	// (0x000b3f05) cl_listscroll_pane_ParamLimits

0x6c18,	// (0x000b3f05) cl_listscroll_pane

0xdb13,	// (0x000bae00) bg_cl_pane_g1

0xdb1b,	// (0x000bae08) bg_cl_pane_g2

0xdb23,	// (0x000bae10) bg_cl_pane_g3

0xdb2b,	// (0x000bae18) bg_cl_pane_g4

0xdb33,	// (0x000bae20) bg_cl_pane_g5

0xdb3b,	// (0x000bae28) bg_cl_pane_g6

0xdb43,	// (0x000bae30) bg_cl_pane_g7

0xdb4b,	// (0x000bae38) bg_cl_pane_g8

0xdb53,	// (0x000bae40) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000bcd70) bg_cl_pane_g

0x6c28,	// (0x000b3f15) aid_height_cl_leading_ParamLimits

0x6c28,	// (0x000b3f15) aid_height_cl_leading

0x6c34,	// (0x000b3f21) aid_height_cl_text_ParamLimits

0x6c34,	// (0x000b3f21) aid_height_cl_text

0x953e,	// (0x000b682b) bg_cl_header_pane_ParamLimits

0x953e,	// (0x000b682b) bg_cl_header_pane

0x6c53,	// (0x000b3f40) cl_header_pane_g1_ParamLimits

0x6c53,	// (0x000b3f40) cl_header_pane_g1

0x6c69,	// (0x000b3f56) cl_header_pane_t1_ParamLimits

0x6c69,	// (0x000b3f56) cl_header_pane_t1

0xdb5b,	// (0x000bae48) cl_list_pane

0xd7c8,	// (0x000baab5) hc_scroll_pane_cp01

0xac85,	// (0x000b7f72) bg_cl_header_pane_g1

0xd6aa,	// (0x000ba997) bg_cl_header_pane_g2

0xaca5,	// (0x000b7f92) bg_cl_header_pane_g3

0xd6ba,	// (0x000ba9a7) bg_cl_header_pane_g4

0xd6b2,	// (0x000ba99f) bg_cl_header_pane_g5

0xd8d4,	// (0x000babc1) bg_cl_header_pane_g6

0xd6d2,	// (0x000ba9bf) bg_cl_header_pane_g7

0xd6da,	// (0x000ba9c7) bg_cl_header_pane_g8

0xd6ca,	// (0x000ba9b7) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000bcd83) bg_cl_header_pane_g

0x6c82,	// (0x000b3f6f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c82,	// (0x000b3f6f) hc_cl_list_double_graphic_heading_pane

0x6c95,	// (0x000b3f82) hc_cl_list_single_graphic_pane_ParamLimits

0x6c95,	// (0x000b3f82) hc_cl_list_single_graphic_pane

0x6cad,	// (0x000b3f9a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cad,	// (0x000b3f9a) hc_cl_list_single_graphic_pane_g1

0x6cb9,	// (0x000b3fa6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cb9,	// (0x000b3fa6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000bcd96) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000bcd96) hc_cl_list_single_graphic_pane_g

0x6ccd,	// (0x000b3fba) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ccd,	// (0x000b3fba) hc_cl_list_single_graphic_pane_t1

0x6cad,	// (0x000b3f9a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cad,	// (0x000b3f9a) hc_cl_list_double_graphic_heading_pane_g1

0x6ce2,	// (0x000b3fcf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ce2,	// (0x000b3fcf) hc_cl_list_double_graphic_heading_pane_g2

0x6cf6,	// (0x000b3fe3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cf6,	// (0x000b3fe3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000bcd9b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000bcd9b) hc_cl_list_double_graphic_heading_pane_g

0x6d0a,	// (0x000b3ff7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d0a,	// (0x000b3ff7) hc_cl_list_double_graphic_heading_pane_t1

0x6d1f,	// (0x000b400c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d1f,	// (0x000b400c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000bcda2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000bcda2) hc_cl_list_double_graphic_heading_pane_t

0x6d34,	// (0x000b4021) vid4_progress_pane_g1

0x6d46,	// (0x000b4033) vid4_progress_pane_g2

0x9dfe,	// (0x000b70eb) vid4_progress_pane_g3

0xa3c4,	// (0x000b76b1) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000bcda7) vid4_progress_pane_g

0xa3e2,	// (0x000b76cf) vid4_progress_pane_t1

0xa3f7,	// (0x000b76e4) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000bcdb2) vid4_progress_pane_t

0xa422,	// (0x000b770f) wait_bar_pane_cp07

0xca6b,	// (0x000b9d58) blid_firmament_pane_ParamLimits

0xcaae,	// (0x000b9d9b) popup_blid_sat_info2_window_g1

0xcad2,	// (0x000b9dbf) popup_blid_sat_info2_window_t3

0xcae0,	// (0x000b9dcd) popup_blid_sat_info2_window_t4

0xcaee,	// (0x000b9ddb) popup_blid_sat_info2_window_t5

0xcafc,	// (0x000b9de9) popup_blid_sat_info2_window_t6

0xcb0c,	// (0x000b9df9) popup_blid_sat_info2_window_t7

0xcb1a,	// (0x000b9e07) popup_blid_sat_info2_window_t8

0xcb28,	// (0x000b9e15) popup_blid_sat_info2_window_t9

0xcb36,	// (0x000b9e23) popup_blid_sat_info2_window_t10

0xcbfe,	// (0x000b9eeb) aid_firma_cardinal_ParamLimits

0xcc12,	// (0x000b9eff) blid_firmament_pane_t1_ParamLimits

0xcc29,	// (0x000b9f16) blid_firmament_pane_t2_ParamLimits

0xcc40,	// (0x000b9f2d) blid_firmament_pane_t3_ParamLimits

0xcc57,	// (0x000b9f44) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000bc9c0) blid_firmament_pane_t_ParamLimits

0xcc6e,	// (0x000b9f5b) blid_sat_info_pane_ParamLimits

0x953e,	// (0x000b682b) main_cam_set_pane_ParamLimits

0x508c,	// (0x000b2379) aid_size_cell_colour_35_ParamLimits

0x50ac,	// (0x000b2399) aid_size_cell_colour_112_ParamLimits

0x50cc,	// (0x000b23b9) aid_size_cell_effect_ParamLimits

0xc82d,	// (0x000b9b1a) bg_tb_trans_pane_cp02_ParamLimits

0xaede,	// (0x000b81cb) heading_imed_pane_ParamLimits

0x50ec,	// (0x000b23d9) listscroll_imed_pane_ParamLimits

0xbe4f,	// (0x000b913c) popup_call2_audio_first_window_g5_ParamLimits

0xbe4f,	// (0x000b913c) popup_call2_audio_first_window_g5

0x569d,	// (0x000b298a) aid_size_touch_image3_arrow_left_ParamLimits

0x569d,	// (0x000b298a) aid_size_touch_image3_arrow_left

0x56c9,	// (0x000b29b6) aid_size_touch_image3_arrow_right_ParamLimits

0x56c9,	// (0x000b29b6) aid_size_touch_image3_arrow_right

0xa40d,	// (0x000b76fa) vid4_progress_pane_t3

0x540b,	// (0x000b26f8) main_hwr_training_symbol_option_pane_ParamLimits

0x540b,	// (0x000b26f8) main_hwr_training_symbol_option_pane

0xd472,	// (0x000ba75f) popup_hwr_training_preview_window_ParamLimits

0xd472,	// (0x000ba75f) popup_hwr_training_preview_window

0x542b,	// (0x000b2718) hwr_training_navi_pane_g5_ParamLimits

0x542b,	// (0x000b2718) hwr_training_navi_pane_g5

0xd698,	// (0x000ba985) popup_char_count_window

0xa1ce,	// (0x000b74bb) bg_popup_sub_pane_cp20_ParamLimits

0x66a1,	// (0x000b398e) list_vitu2_match_list_pane_ParamLimits

0x66b0,	// (0x000b399d) vitu2_page_scroll_pane_ParamLimits

0x66b0,	// (0x000b399d) vitu2_page_scroll_pane

0xdb64,	// (0x000bae51) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb64,	// (0x000bae51) list_single_hwr_training_symbol_option_pane

0xdb77,	// (0x000bae64) list_single_hwr_training_symbol_option_pane_g1

0xdb7f,	// (0x000bae6c) list_single_hwr_training_symbol_option_pane_t1

0xdb8d,	// (0x000bae7a) bg_button_pane_cp023

0xdb96,	// (0x000bae83) bg_button_pane_cp024

0x6d90,	// (0x000b407d) vitu2_page_scroll_pane_g1

0x6d98,	// (0x000b4085) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000bcdb9) vitu2_page_scroll_pane_g

0x6da2,	// (0x000b408f) vitu2_page_scroll_pane_t1

0xdbc9,	// (0x000baeb6) popup_char_count_window_g1

0xdbd2,	// (0x000baebf) popup_char_count_window_g2

0xdbdb,	// (0x000baec8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000bcdbe) popup_char_count_window_g

0xdbe4,	// (0x000baed1) popup_char_count_window_t1

0x94ed,	// (0x000b67da) main_vded2_pane

0xd16f,	// (0x000ba45c) aid_size_cell_imed_line

0xd179,	// (0x000ba466) grid_imed_line_width_pane

0xa223,	// (0x000b7510) vid4_indicators_pane_g4

0xdbf2,	// (0x000baedf) cell_imed_line_width_pane_ParamLimits

0xdbf2,	// (0x000baedf) cell_imed_line_width_pane

0xdc08,	// (0x000baef5) cell_imed_line_width_pane_g1

0xcefd,	// (0x000ba1ea) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000bcdc5) cell_imed_line_width_pane_g

0x6db1,	// (0x000b409e) main_vded2_pane_g1_ParamLimits

0x6db1,	// (0x000b409e) main_vded2_pane_g1

0x6dcc,	// (0x000b40b9) main_vded2_pane_g2_ParamLimits

0x6dcc,	// (0x000b40b9) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000bcdca) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000bcdca) main_vded2_pane_g

0x6dde,	// (0x000b40cb) vded2_slider_pane_ParamLimits

0x6dde,	// (0x000b40cb) vded2_slider_pane

0x6dee,	// (0x000b40db) aid_size_touch_vded2_end

0x6df8,	// (0x000b40e5) aid_size_touch_vded2_playhead

0xdc11,	// (0x000baefe) aid_size_touch_vded2_start

0xdc19,	// (0x000baf06) vded2_slider_bg_pane

0xdc22,	// (0x000baf0f) vded2_slider_pane_g1

0xdc2b,	// (0x000baf18) vded2_slider_pane_g2

0x6e02,	// (0x000b40ef) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000bcdcf) vded2_slider_pane_g

0xdc33,	// (0x000baf20) vded2_slider_bg_pane_g1

0xdc3c,	// (0x000baf29) vded2_slider_bg_pane_g2

0xdc45,	// (0x000baf32) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000bcdd6) vded2_slider_bg_pane_g

0x2d03,	// (0x000afff0) aid_postcard_touch_down_pane_ParamLimits

0x2d03,	// (0x000afff0) aid_postcard_touch_down_pane

0x2d1b,	// (0x000b0008) aid_postcard_touch_up_pane_ParamLimits

0x2d1b,	// (0x000b0008) aid_postcard_touch_up_pane

0x94ed,	// (0x000b67da) main_blid2_pane

0xc83b,	// (0x000b9b28) popup_blid2_search_window

0x94ed,	// (0x000b67da) blid2_gps_pane

0x94ed,	// (0x000b67da) blid2_navig_pane

0x94ed,	// (0x000b67da) blid2_search_pane

0x94ed,	// (0x000b67da) blid2_tripm_pane

0x6e0d,	// (0x000b40fa) blid2_search_pane_g1_ParamLimits

0x6e0d,	// (0x000b40fa) blid2_search_pane_g1

0x6e20,	// (0x000b410d) blid2_search_pane_t1_ParamLimits

0x6e20,	// (0x000b410d) blid2_search_pane_t1

0x6e32,	// (0x000b411f) aid_size_cell_blid2_gps_ParamLimits

0x6e32,	// (0x000b411f) aid_size_cell_blid2_gps

0x6e4a,	// (0x000b4137) blid2_gps_pane_g1_ParamLimits

0x6e4a,	// (0x000b4137) blid2_gps_pane_g1

0x6e5e,	// (0x000b414b) grid_blid2_satellite_pane_ParamLimits

0x6e5e,	// (0x000b414b) grid_blid2_satellite_pane

0x6e76,	// (0x000b4163) blid2_navig_pane_g1_ParamLimits

0x6e76,	// (0x000b4163) blid2_navig_pane_g1

0x6e82,	// (0x000b416f) blid2_navig_pane_t1_ParamLimits

0x6e82,	// (0x000b416f) blid2_navig_pane_t1

0x6e9d,	// (0x000b418a) blid2_navig_pane_t2_ParamLimits

0x6e9d,	// (0x000b418a) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000bcddd) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000bcddd) blid2_navig_pane_t

0x6eb8,	// (0x000b41a5) blid2_navig_ring_pane_ParamLimits

0x6eb8,	// (0x000b41a5) blid2_navig_ring_pane

0x6ed3,	// (0x000b41c0) blid2_speed_pane_ParamLimits

0x6ed3,	// (0x000b41c0) blid2_speed_pane

0x6edf,	// (0x000b41cc) blid2_tripm_pane_g1_ParamLimits

0x6edf,	// (0x000b41cc) blid2_tripm_pane_g1

0x6efa,	// (0x000b41e7) blid2_tripm_pane_g2_ParamLimits

0x6efa,	// (0x000b41e7) blid2_tripm_pane_g2

0x6f0e,	// (0x000b41fb) blid2_tripm_pane_g3_ParamLimits

0x6f0e,	// (0x000b41fb) blid2_tripm_pane_g3

0x6f22,	// (0x000b420f) blid2_tripm_pane_g4_ParamLimits

0x6f22,	// (0x000b420f) blid2_tripm_pane_g4

0x6f36,	// (0x000b4223) blid2_tripm_pane_g5_ParamLimits

0x6f36,	// (0x000b4223) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000bcde2) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000bcde2) blid2_tripm_pane_g

0x6f5c,	// (0x000b4249) blid2_tripm_pane_t1_ParamLimits

0x6f5c,	// (0x000b4249) blid2_tripm_pane_t1

0x6f75,	// (0x000b4262) blid2_tripm_pane_t2_ParamLimits

0x6f75,	// (0x000b4262) blid2_tripm_pane_t2

0x6f8e,	// (0x000b427b) blid2_tripm_pane_t3_ParamLimits

0x6f8e,	// (0x000b427b) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000bcdef) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000bcdef) blid2_tripm_pane_t

0x6fd5,	// (0x000b42c2) cell_blid2_satellite_pane_ParamLimits

0x6fd5,	// (0x000b42c2) cell_blid2_satellite_pane

0x6ff3,	// (0x000b42e0) cell_blid2_satellite_pane_g1

0xdc4e,	// (0x000baf3b) cell_blid2_satellite_pane_t1

0xcc7e,	// (0x000b9f6b) blid2_speed_pane_g1

0xdc5c,	// (0x000baf49) blid2_speed_pane_t1

0xdc6a,	// (0x000baf57) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000bcdf8) blid2_speed_pane_t

0xcc7e,	// (0x000b9f6b) blid2_navig_ring_pane_g1

0x6ffc,	// (0x000b42e9) blid2_navig_ring_pane_g2

0x7004,	// (0x000b42f1) blid2_navig_ring_pane_g3

0x700c,	// (0x000b42f9) blid2_navig_ring_pane_g4

0x7014,	// (0x000b4301) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000bcdfd) blid2_navig_ring_pane_g

0x94ed,	// (0x000b67da) bg_popup_window_pane_cp011

0xdc78,	// (0x000baf65) popup_blid2_search_window_g1

0xdc80,	// (0x000baf6d) popup_blid2_search_window_t1

0xdc8e,	// (0x000baf7b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000bce08) popup_blid2_search_window_t

0xab94,	// (0x000b7e81) main_browser_pane_g1

0xa892,	// (0x000b7b7f) main_browser_pane_ParamLimits

0xa1ce,	// (0x000b74bb) bg_button_pane_cp011_ParamLimits

0x5efb,	// (0x000b31e8) cell_vitu2_function_pane_g1_ParamLimits

0xc82d,	// (0x000b9b1a) bg_popup_sub_pane_cp22_ParamLimits

0x688a,	// (0x000b3b77) input_focus_pane_cp08_ParamLimits

0x68a1,	// (0x000b3b8e) popup_vitu2_query_button_pane_ParamLimits

0x68a1,	// (0x000b3b8e) popup_vitu2_query_button_pane

0x68b2,	// (0x000b3b9f) popup_vitu2_query_input_button_pane

0xd90f,	// (0x000babfc) popup_vitu2_query_window_g1_ParamLimits

0x68bc,	// (0x000b3ba9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000bcd09) popup_vitu2_query_window_g_ParamLimits

0x94ed,	// (0x000b67da) bg_button_pane_cp026

0x701c,	// (0x000b4309) popup_vitu2_query_input_button_pane_g1

0x94ed,	// (0x000b67da) bg_button_pane_cp025

0xdc9c,	// (0x000baf89) popup_vitu2_query_button_pane_t1

0x4427,	// (0x000b1714) main_mp3_pane_t6

0x4435,	// (0x000b1722) popup_slider_window_cp01

0xa179,	// (0x000b7466) cam4_battery_pane

0xa1dc,	// (0x000b74c9) cam4_battery_pane_cp02

0xa3bc,	// (0x000b76a9) cam4_battery_pane_cp01

0xa3bc,	// (0x000b76a9) cam4_battery_pane_cp03

0xd570,	// (0x000ba85d) cam4_battery_pane_g1

0xcc7e,	// (0x000b9f6b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000bce0d) cam4_battery_pane_g

0xcb44,	// (0x000b9e31) popup_blid_sat_info2_window_t11

0x2618,	// (0x000af905) aid_size_touch_mv_arrow_left_ParamLimits

0x2641,	// (0x000af92e) aid_size_touch_mv_arrow_right_ParamLimits

0xb2de,	// (0x000b85cb) navi_pane_g1_ParamLimits

0x2680,	// (0x000af96d) navi_pane_g2_ParamLimits

0x26ae,	// (0x000af99b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000bc6d2) navi_pane_g_ParamLimits

0x2708,	// (0x000af9f5) navi_pane_mv_t1_ParamLimits

0x50f8,	// (0x000b23e5) grid_imed_effect_pane_ParamLimits

0x10c2,	// (0x000ae3af) aid_placing_vt_slider_lsc

0xaadf,	// (0x000b7dcc) aid_placing_vt_slider_prt

0x953e,	// (0x000b682b) bg_tb_trans_pane_cp01_ParamLimits

0xcdce,	// (0x000ba0bb) popup_image_details_window_g1_ParamLimits

0xcde1,	// (0x000ba0ce) popup_image_details_window_g2_ParamLimits

0xcdf6,	// (0x000ba0e3) popup_image_details_window_g3_ParamLimits

0xcdf6,	// (0x000ba0e3) popup_image_details_window_g3

0xf718,	// (0x000bca05) popup_image_details_window_g_ParamLimits

0xce0a,	// (0x000ba0f7) popup_image_details_window_t1_ParamLimits

0xce1c,	// (0x000ba109) popup_image_details_window_t2_ParamLimits

0xce35,	// (0x000ba122) popup_image_details_window_t3_ParamLimits

0xce49,	// (0x000ba136) popup_image_details_window_t4_ParamLimits

0xce64,	// (0x000ba151) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000bca0c) popup_image_details_window_t_ParamLimits

0x6c40,	// (0x000b3f2d) cl_header_name_pane_ParamLimits

0x6c40,	// (0x000b3f2d) cl_header_name_pane

0x7024,	// (0x000b4311) cl_header_name_pane_t1_ParamLimits

0x7024,	// (0x000b4311) cl_header_name_pane_t1

0x7045,	// (0x000b4332) cl_header_name_pane_t2_ParamLimits

0x7045,	// (0x000b4332) cl_header_name_pane_t2

0x7087,	// (0x000b4374) cl_header_name_pane_t3_ParamLimits

0x7087,	// (0x000b4374) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000bce12) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000bce12) cl_header_name_pane_t

0x26d9,	// (0x000af9c6) navi_pane_mv_g2_ParamLimits

0xd672,	// (0x000ba95f) field_vitu2_entry_pane_g1_ParamLimits

0xd67e,	// (0x000ba96b) field_vitu2_entry_pane_g2_ParamLimits

0xd68a,	// (0x000ba977) field_vitu2_entry_pane_g3_ParamLimits

0xd68a,	// (0x000ba977) field_vitu2_entry_pane_g3

0xf91b,	// (0x000bcc08) field_vitu2_entry_pane_g_ParamLimits

0xa275,	// (0x000b7562) cell_vitu2_itu_pane_g1_ParamLimits

0x5e8f,	// (0x000b317c) cell_vitu2_itu_pane_g2_ParamLimits

0x5e8f,	// (0x000b317c) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000bcc14) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000bcc14) cell_vitu2_itu_pane_g

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp05_ParamLimits

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp05

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp03

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp04

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp10_ParamLimits

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp10

0x6be2,	// (0x000b3ecf) bg_vkb2_func_pane_cp08

0x6bc8,	// (0x000b3eb5) bg_vkb2_func_pane_cp06

0x6bd6,	// (0x000b3ec3) bg_vkb2_func_pane_cp07

0xdb9f,	// (0x000bae8c) bg_vkb2_func_pane_cp11_ParamLimits

0xdb9f,	// (0x000bae8c) bg_vkb2_func_pane_cp11

0xdbb4,	// (0x000baea1) bg_vkb2_func_pane_cp12_ParamLimits

0xdbb4,	// (0x000baea1) bg_vkb2_func_pane_cp12

0x94ed,	// (0x000b67da) bg_vkb2_func_pane_cp09

0xd6aa,	// (0x000ba997) bg_vkb2_func_pane_g1

0xaca5,	// (0x000b7f92) bg_vkb2_func_pane_g2

0xd6b2,	// (0x000ba99f) bg_vkb2_func_pane_g3

0xd6ba,	// (0x000ba9a7) bg_vkb2_func_pane_g4

0xd8d4,	// (0x000babc1) bg_vkb2_func_pane_g5

0xd6d2,	// (0x000ba9bf) bg_vkb2_func_pane_g6

0xd6da,	// (0x000ba9c7) bg_vkb2_func_pane_g7

0xd6ca,	// (0x000ba9b7) bg_vkb2_func_pane_g8

0xac85,	// (0x000b7f72) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000bce19) bg_vkb2_func_pane_g

0x6f4a,	// (0x000b4237) blid2_tripm_pane_g6_ParamLimits

0x6f4a,	// (0x000b4237) blid2_tripm_pane_g6

0xd52a,	// (0x000ba817) mp4_progress_pane_g1

0x6fc1,	// (0x000b42ae) blid2_tripm_values_pane_ParamLimits

0x6fc1,	// (0x000b42ae) blid2_tripm_values_pane

0x70b8,	// (0x000b43a5) blid2_tripm_values_pane_t1

0x70c6,	// (0x000b43b3) blid2_tripm_values_pane_t2

0x70d4,	// (0x000b43c1) blid2_tripm_values_pane_t3

0x70e2,	// (0x000b43cf) blid2_tripm_values_pane_t4

0x70f0,	// (0x000b43dd) blid2_tripm_values_pane_t5

0x70fe,	// (0x000b43eb) blid2_tripm_values_pane_t6

0x710c,	// (0x000b43f9) blid2_tripm_values_pane_t7

0x711a,	// (0x000b4407) blid2_tripm_values_pane_t8

0x7128,	// (0x000b4415) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000bce2c) blid2_tripm_values_pane_t

0x10ff,	// (0x000ae3ec) call_video_pane_t1_ParamLimits

0x1119,	// (0x000ae406) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000bc55b) call_video_pane_t_ParamLimits

0x2c50,	// (0x000aff3d) msg_header_pane_g1_ParamLimits

0xb501,	// (0x000b87ee) msg_header_pane_g2_ParamLimits

0xb501,	// (0x000b87ee) msg_header_pane_g2

0x0001,

0xf488,	// (0x000bc775) msg_header_pane_g_ParamLimits

0xf488,	// (0x000bc775) msg_header_pane_g

0xa892,	// (0x000b7b7f) main_clock2_pane_ParamLimits

0x4ddf,	// (0x000b20cc) grid_clock2_toolbar_pane_ParamLimits

0x4ddf,	// (0x000b20cc) grid_clock2_toolbar_pane

0x4ddf,	// (0x000b20cc) listscroll_clock2_pane_ParamLimits

0x4ddf,	// (0x000b20cc) listscroll_clock2_pane

0x4ed6,	// (0x000b21c3) main_clock2_pane_t3_ParamLimits

0x4ed6,	// (0x000b21c3) main_clock2_pane_t3

0x4efa,	// (0x000b21e7) main_clock2_pane_t4_ParamLimits

0x4efa,	// (0x000b21e7) main_clock2_pane_t4

0xdcaa,	// (0x000baf97) cell_clock2_toolbar_pane

0xdcb2,	// (0x000baf9f) cell_clock2_toolbar_pane_cp01

0xdcb2,	// (0x000baf9f) cell_clock2_toolbar_pane_cp02

0xdcba,	// (0x000bafa7) cell_clock2_toolbar_pane_cp03

0xdcc2,	// (0x000bafaf) list_clock2_pane

0xb244,	// (0x000b8531) scroll_pane_cp10

0xdcca,	// (0x000bafb7) list_single_clock2_pane_ParamLimits

0xdcca,	// (0x000bafb7) list_single_clock2_pane

0xaa48,	// (0x000b7d35) list_highlight_pane_cp08

0xdcd7,	// (0x000bafc4) list_single_clock2_pane_t1

0xdce5,	// (0x000bafd2) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000bce3f) list_single_clock2_pane_t

0x94ed,	// (0x000b67da) bg_button_pane_cp10

0xdcf3,	// (0x000bafe0) cell_clock2_toolbar_pane_g1

0x2c8f,	// (0x000aff7c) aid_main_viewer_pane_g1_ParamLimits

0x2c8f,	// (0x000aff7c) aid_main_viewer_pane_g1

0x2c9d,	// (0x000aff8a) aid_main_viewer_pane_g2_ParamLimits

0x2c9d,	// (0x000aff8a) aid_main_viewer_pane_g2

0x2cab,	// (0x000aff98) aid_main_viewer_pane_g3_ParamLimits

0x2cab,	// (0x000aff98) aid_main_viewer_pane_g3

0x2cba,	// (0x000affa7) aid_main_viewer_pane_g4_ParamLimits

0x2cba,	// (0x000affa7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000bc786) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000bc786) aid_main_viewer_pane_g

0x360d,	// (0x000b08fa) main_calc_pane_ParamLimits

0x3621,	// (0x000b090e) main_dialer2_pane_ParamLimits

0x94ed,	// (0x000b67da) main_cam6_pane

0x94ed,	// (0x000b67da) main_vid6_pane

0x4deb,	// (0x000b20d8) listscroll_gen_pane_cp06_ParamLimits

0x4deb,	// (0x000b20d8) listscroll_gen_pane_cp06

0x4f1d,	// (0x000b220a) main_clock2_pane_t5_ParamLimits

0x4f1d,	// (0x000b220a) main_clock2_pane_t5

0x4f7d,	// (0x000b226a) aid_call2_pane_cp10_ParamLimits

0x4f8f,	// (0x000b227c) aid_call_pane_cp10_ParamLimits

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4fa1,	// (0x000b228e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4fa1,	// (0x000b228e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b3,	// (0x000b85a0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000bcac1) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fb7,	// (0x000b22a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x564a,	// (0x000b2937) cell_dialer2_keypad_pane_g2_ParamLimits

0x564a,	// (0x000b2937) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000bcba7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000bcba7) cell_dialer2_keypad_pane_g

0x5666,	// (0x000b2953) cell_dialer2_keypad_pane_t1

0x6226,	// (0x000b3513) main_cset_text2_pane_ParamLimits

0x6226,	// (0x000b3513) main_cset_text2_pane

0xdb07,	// (0x000badf4) area_vitu2_query_pane_g1_ParamLimits

0x6b65,	// (0x000b3e52) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000bcd5c) area_vitu2_query_pane_g_ParamLimits

0xa398,	// (0x000b7685) area_vitu2_query_pane_t7_ParamLimits

0xa398,	// (0x000b7685) area_vitu2_query_pane_t7

0x6bc8,	// (0x000b3eb5) bg_button_pane_cp018_ParamLimits

0x6bd6,	// (0x000b3ec3) bg_button_pane_cp021_ParamLimits

0x6be2,	// (0x000b3ecf) bg_button_pane_cp022_ParamLimits

0x6be2,	// (0x000b3ecf) bg_vkb2_func_pane_cp08_ParamLimits

0x6bc8,	// (0x000b3eb5) bg_vkb2_func_pane_cp06_ParamLimits

0x6bd6,	// (0x000b3ec3) bg_vkb2_func_pane_cp07_ParamLimits

0x6bf3,	// (0x000b3ee0) input_focus_pane_cp09_ParamLimits

0xa450,	// (0x000b773d) cam6_autofocus_pane_ParamLimits

0xa450,	// (0x000b773d) cam6_autofocus_pane

0x7136,	// (0x000b4423) cam6_image_uncrop_pane_ParamLimits

0x7136,	// (0x000b4423) cam6_image_uncrop_pane

0x7145,	// (0x000b4432) cam6_indi_pane_ParamLimits

0x7145,	// (0x000b4432) cam6_indi_pane

0x715b,	// (0x000b4448) cam6_mode_pane_ParamLimits

0x715b,	// (0x000b4448) cam6_mode_pane

0x716d,	// (0x000b445a) cam6_timer_pane_ParamLimits

0x716d,	// (0x000b445a) cam6_timer_pane

0x7179,	// (0x000b4466) cam6_zoom_pane_ParamLimits

0x7179,	// (0x000b4466) cam6_zoom_pane

0x7187,	// (0x000b4474) cam6_mode_pane_g1_ParamLimits

0x7187,	// (0x000b4474) cam6_mode_pane_g1

0x7197,	// (0x000b4484) cam6_mode_pane_g2_ParamLimits

0x7197,	// (0x000b4484) cam6_mode_pane_g2

0x71a7,	// (0x000b4494) cam6_mode_pane_g3_ParamLimits

0x71a7,	// (0x000b4494) cam6_mode_pane_g3

0x71b7,	// (0x000b44a4) cam6_mode_pane_g4_ParamLimits

0x71b7,	// (0x000b44a4) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000bce44) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000bce44) cam6_mode_pane_g

0xdcfb,	// (0x000bafe8) bg_tb_trans_pane_cp08_ParamLimits

0xdcfb,	// (0x000bafe8) bg_tb_trans_pane_cp08

0xdd09,	// (0x000baff6) cam6_battery_pane_ParamLimits

0xdd09,	// (0x000baff6) cam6_battery_pane

0xdd1f,	// (0x000bb00c) cam6_indi_pane_g1_ParamLimits

0xdd1f,	// (0x000bb00c) cam6_indi_pane_g1

0xdd31,	// (0x000bb01e) cam6_indi_pane_g2_ParamLimits

0xdd31,	// (0x000bb01e) cam6_indi_pane_g2

0xdd43,	// (0x000bb030) cam6_indi_pane_g3_ParamLimits

0xdd43,	// (0x000bb030) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000bce4d) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000bce4d) cam6_indi_pane_g

0xdd55,	// (0x000bb042) cam6_indi_pane_t1_ParamLimits

0xdd55,	// (0x000bb042) cam6_indi_pane_t1

0x5c2f,	// (0x000b2f1c) cam6_autofocus_pane_g1

0x5c27,	// (0x000b2f14) cam6_autofocus_pane_g2

0x5c3f,	// (0x000b2f2c) cam6_autofocus_pane_g3

0x5c37,	// (0x000b2f24) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000bce54) cam6_autofocus_pane_g

0xdd7b,	// (0x000bb068) cam6_timer_pane_g1

0xdd83,	// (0x000bb070) cam6_timer_pane_t1

0xdd91,	// (0x000bb07e) cam6_zoom_cont_pane

0xdd99,	// (0x000bb086) cam6_zoom_pane_g1

0xdda1,	// (0x000bb08e) cam6_zoom_pane_g2

0x71c7,	// (0x000b44b4) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000bce5d) cam6_zoom_pane_g

0xcc7e,	// (0x000b9f6b) cam6_battery_pane_g1

0xcc7e,	// (0x000b9f6b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000bc9c9) cam6_battery_pane_g

0xdda9,	// (0x000bb096) cam6_zoom_cont_pane_g1

0xddb2,	// (0x000bb09f) cam6_zoom_cont_pane_g2

0xddbb,	// (0x000bb0a8) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000bce64) cam6_zoom_cont_pane_g

0x71e4,	// (0x000b44d1) cam6_mode_pane_cp_ParamLimits

0x71e4,	// (0x000b44d1) cam6_mode_pane_cp

0x71f6,	// (0x000b44e3) cam6_zoom_pane_cp_ParamLimits

0x71f6,	// (0x000b44e3) cam6_zoom_pane_cp

0x7204,	// (0x000b44f1) vid6_image_uncrop_cif_pane_ParamLimits

0x7204,	// (0x000b44f1) vid6_image_uncrop_cif_pane

0x7214,	// (0x000b4501) vid6_image_uncrop_nhd_pane_ParamLimits

0x7214,	// (0x000b4501) vid6_image_uncrop_nhd_pane

0x7223,	// (0x000b4510) vid6_image_uncrop_vga_pane_ParamLimits

0x7223,	// (0x000b4510) vid6_image_uncrop_vga_pane

0x7232,	// (0x000b451f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7232,	// (0x000b451f) vid6_image_uncrop_wvga_pane

0x7241,	// (0x000b452e) vid6_indi_pane_ParamLimits

0x7241,	// (0x000b452e) vid6_indi_pane

0xdcfb,	// (0x000bafe8) bg_tb_trans_pane_cp09_ParamLimits

0xdcfb,	// (0x000bafe8) bg_tb_trans_pane_cp09

0xddd3,	// (0x000bb0c0) cam6_battery_pane_cp_ParamLimits

0xddd3,	// (0x000bb0c0) cam6_battery_pane_cp

0xdddf,	// (0x000bb0cc) vid6_indi_pane_g1_ParamLimits

0xdddf,	// (0x000bb0cc) vid6_indi_pane_g1

0xddf1,	// (0x000bb0de) vid6_indi_pane_g2_ParamLimits

0xddf1,	// (0x000bb0de) vid6_indi_pane_g2

0xde03,	// (0x000bb0f0) vid6_indi_pane_g3_ParamLimits

0xde03,	// (0x000bb0f0) vid6_indi_pane_g3

0xde1a,	// (0x000bb107) vid6_indi_pane_g4_ParamLimits

0xde1a,	// (0x000bb107) vid6_indi_pane_g4

0xde31,	// (0x000bb11e) vid6_indi_pane_g5_ParamLimits

0xde31,	// (0x000bb11e) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000bce6b) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000bce6b) vid6_indi_pane_g

0xde4b,	// (0x000bb138) vid6_indi_pane_t1_ParamLimits

0xde4b,	// (0x000bb138) vid6_indi_pane_t1

0xde61,	// (0x000bb14e) vid6_indi_pane_t2_ParamLimits

0xde61,	// (0x000bb14e) vid6_indi_pane_t2

0xde89,	// (0x000bb176) vid6_indi_pane_t3_ParamLimits

0xde89,	// (0x000bb176) vid6_indi_pane_t3

0xdeb1,	// (0x000bb19e) vid6_indi_pane_t4_ParamLimits

0xdeb1,	// (0x000bb19e) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000bce76) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000bce76) vid6_indi_pane_t

0xded5,	// (0x000bb1c2) wait_bar_pane_cp08

0x7259,	// (0x000b4546) main_cset_text2_pane_t1_ParamLimits

0x7259,	// (0x000b4546) main_cset_text2_pane_t1

0x71cf,	// (0x000b44bc) listscroll_gen_pane_cp06_t1_ParamLimits

0x71cf,	// (0x000b44bc) listscroll_gen_pane_cp06_t1

0x94ed,	// (0x000b67da) main_cam6_set_pane

0xa16b,	// (0x000b7458) bg_tb_trans_pane_cp06_ParamLimits

0xa181,	// (0x000b746e) cam4_indicators_pane_g1_ParamLimits

0xa192,	// (0x000b747f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000bcbe4) cam4_indicators_pane_g_ParamLimits

0xa1aa,	// (0x000b7497) cam4_indicators_pane_t1_ParamLimits

0xa1ce,	// (0x000b74bb) bg_tb_trans_pane_cp07_ParamLimits

0xa1e6,	// (0x000b74d3) vid4_indicators_pane_g1_ParamLimits

0xa1fc,	// (0x000b74e9) vid4_indicators_pane_g2_ParamLimits

0xa210,	// (0x000b74fd) vid4_indicators_pane_g3_ParamLimits

0xa223,	// (0x000b7510) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000bcbf6) vid4_indicators_pane_g_ParamLimits

0xa241,	// (0x000b752e) vid4_indicators_pane_t1_ParamLimits

0x6d34,	// (0x000b4021) vid4_progress_pane_g1_ParamLimits

0x6d46,	// (0x000b4033) vid4_progress_pane_g2_ParamLimits

0x9dfe,	// (0x000b70eb) vid4_progress_pane_g3_ParamLimits

0xa3c4,	// (0x000b76b1) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000bcda7) vid4_progress_pane_g_ParamLimits

0xa3e2,	// (0x000b76cf) vid4_progress_pane_t1_ParamLimits

0xa3f7,	// (0x000b76e4) vid4_progress_pane_t2_ParamLimits

0xa40d,	// (0x000b76fa) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000bcdb2) vid4_progress_pane_t_ParamLimits

0xa422,	// (0x000b770f) wait_bar_pane_cp07_ParamLimits

0x7277,	// (0x000b4564) main_cam6_set_pane_g2_ParamLimits

0x7277,	// (0x000b4564) main_cam6_set_pane_g2

0x729d,	// (0x000b458a) main_cset6_listscroll_pane_ParamLimits

0x729d,	// (0x000b458a) main_cset6_listscroll_pane

0x72bb,	// (0x000b45a8) main_cset6_slider_pane_ParamLimits

0x72bb,	// (0x000b45a8) main_cset6_slider_pane

0x72d1,	// (0x000b45be) main_cset6_text2_pane_ParamLimits

0x72d1,	// (0x000b45be) main_cset6_text2_pane

0xdee4,	// (0x000bb1d1) main_cset6_text_pane

0xdeec,	// (0x000bb1d9) main_cset_list_pane_copy1_ParamLimits

0xdeec,	// (0x000bb1d9) main_cset_list_pane_copy1

0xdefc,	// (0x000bb1e9) scroll_pane_cp028_copy1

0x21c4,	// (0x000af4b1) cset_list_set_pane_copy1

0x72df,	// (0x000b45cc) aid_position_infowindow_above_copy1

0x72e7,	// (0x000b45d4) aid_position_infowindow_below_copy1

0x72ef,	// (0x000b45dc) cset_list_set_pane_g1_copy1

0x72f7,	// (0x000b45e4) cset_list_set_pane_g3_copy1_ParamLimits

0x72f7,	// (0x000b45e4) cset_list_set_pane_g3_copy1

0x7306,	// (0x000b45f3) cset_list_set_pane_t1_copy1_ParamLimits

0x7306,	// (0x000b45f3) cset_list_set_pane_t1_copy1

0x953e,	// (0x000b682b) list_highlight_pane_cp021_copy1_ParamLimits

0x953e,	// (0x000b682b) list_highlight_pane_cp021_copy1

0xdf05,	// (0x000bb1f2) cset6_slider_pane_ParamLimits

0xdf05,	// (0x000bb1f2) cset6_slider_pane

0xdf31,	// (0x000bb21e) main_cset6_slider_pane_g1_ParamLimits

0xdf31,	// (0x000bb21e) main_cset6_slider_pane_g1

0x731b,	// (0x000b4608) main_cset6_slider_pane_g2_ParamLimits

0x731b,	// (0x000b4608) main_cset6_slider_pane_g2

0xdf59,	// (0x000bb246) main_cset6_slider_pane_g3_ParamLimits

0xdf59,	// (0x000bb246) main_cset6_slider_pane_g3

0x7343,	// (0x000b4630) main_cset6_slider_pane_g4_ParamLimits

0x7343,	// (0x000b4630) main_cset6_slider_pane_g4

0x734f,	// (0x000b463c) main_cset6_slider_pane_g5_ParamLimits

0x734f,	// (0x000b463c) main_cset6_slider_pane_g5

0xd7dd,	// (0x000baaca) main_cset6_slider_pane_g7_ParamLimits

0xd7dd,	// (0x000baaca) main_cset6_slider_pane_g7

0xd7e9,	// (0x000baad6) main_cset6_slider_pane_g8_ParamLimits

0xd7e9,	// (0x000baad6) main_cset6_slider_pane_g8

0x62d5,	// (0x000b35c2) main_cset6_slider_pane_g9_ParamLimits

0x62d5,	// (0x000b35c2) main_cset6_slider_pane_g9

0x62e1,	// (0x000b35ce) main_cset6_slider_pane_g10_ParamLimits

0x62e1,	// (0x000b35ce) main_cset6_slider_pane_g10

0x62ed,	// (0x000b35da) main_cset6_slider_pane_g11_ParamLimits

0x62ed,	// (0x000b35da) main_cset6_slider_pane_g11

0x62f9,	// (0x000b35e6) main_cset6_slider_pane_g12_ParamLimits

0x62f9,	// (0x000b35e6) main_cset6_slider_pane_g12

0x6305,	// (0x000b35f2) main_cset6_slider_pane_g13_ParamLimits

0x6305,	// (0x000b35f2) main_cset6_slider_pane_g13

0x6311,	// (0x000b35fe) main_cset6_slider_pane_g14_ParamLimits

0x6311,	// (0x000b35fe) main_cset6_slider_pane_g14

0x735d,	// (0x000b464a) main_cset6_slider_pane_g15_ParamLimits

0x735d,	// (0x000b464a) main_cset6_slider_pane_g15

0x6335,	// (0x000b3622) main_cset6_slider_pane_g16_ParamLimits

0x6335,	// (0x000b3622) main_cset6_slider_pane_g16

0x6343,	// (0x000b3630) main_cset6_slider_pane_g17_ParamLimits

0x6343,	// (0x000b3630) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000bce7f) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000bce7f) main_cset6_slider_pane_g

0xdf65,	// (0x000bb252) main_cset6_slider_pane_t1_ParamLimits

0xdf65,	// (0x000bb252) main_cset6_slider_pane_t1

0x738d,	// (0x000b467a) main_cset6_slider_pane_t2_ParamLimits

0x738d,	// (0x000b467a) main_cset6_slider_pane_t2

0x73b8,	// (0x000b46a5) main_cset6_slider_pane_t3_ParamLimits

0x73b8,	// (0x000b46a5) main_cset6_slider_pane_t3

0x73e3,	// (0x000b46d0) main_cset6_slider_pane_t4_ParamLimits

0x73e3,	// (0x000b46d0) main_cset6_slider_pane_t4

0x740e,	// (0x000b46fb) main_cset6_slider_pane_t5_ParamLimits

0x740e,	// (0x000b46fb) main_cset6_slider_pane_t5

0xdfa6,	// (0x000bb293) main_cset6_slider_pane_t7_ParamLimits

0xdfa6,	// (0x000bb293) main_cset6_slider_pane_t7

0x743b,	// (0x000b4728) main_cset6_slider_pane_t8_ParamLimits

0x743b,	// (0x000b4728) main_cset6_slider_pane_t8

0x745f,	// (0x000b474c) main_cset6_slider_pane_t9_ParamLimits

0x745f,	// (0x000b474c) main_cset6_slider_pane_t9

0x7483,	// (0x000b4770) main_cset6_slider_pane_t10_ParamLimits

0x7483,	// (0x000b4770) main_cset6_slider_pane_t10

0x74a7,	// (0x000b4794) main_cset6_slider_pane_t11_ParamLimits

0x74a7,	// (0x000b4794) main_cset6_slider_pane_t11

0xdfdc,	// (0x000bb2c9) main_cset6_slider_pane_t14_ParamLimits

0xdfdc,	// (0x000bb2c9) main_cset6_slider_pane_t14

0xe015,	// (0x000bb302) main_cset6_slider_pane_t15_ParamLimits

0xe015,	// (0x000bb302) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000bcea4) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000bcea4) main_cset6_slider_pane_t

0xe04e,	// (0x000bb33b) cset_slider_pane_g1_copy1

0xe057,	// (0x000bb344) cset_slider_pane_g2_copy1

0xe060,	// (0x000bb34d) cset_slider_pane_g3_copy1

0x94ed,	// (0x000b67da) bg_popup_sub_pane_cp011_copy1

0xe069,	// (0x000bb356) main_cset_text_pane_g1_copy1

0xd923,	// (0x000bac10) main_cset_text_pane_t1_copy1

0xd931,	// (0x000bac1e) main_cset_text_pane_t2_copy1

0xd93f,	// (0x000bac2c) main_cset_text_pane_t3_copy1

0xd94d,	// (0x000bac3a) main_cset_text_pane_t4_copy1

0xd95b,	// (0x000bac48) main_cset_text_pane_t5_copy1

0xe071,	// (0x000bb35e) main_cset_text_pane_t6_copy1

0xe07f,	// (0x000bb36c) main_cset_text_pane_t7_copy1

0x7259,	// (0x000b4546) main_cset_text2_pane_t1_copy1

0x953e,	// (0x000b682b) main_ncimui_pane

0x38af,	// (0x000b0b9c) popup_query_ncimui_window_ParamLimits

0x38af,	// (0x000b0b9c) popup_query_ncimui_window

0xbb13,	// (0x000b8e00) field_cale_ev2_pane_g4_ParamLimits

0xbb13,	// (0x000b8e00) field_cale_ev2_pane_g4

0x551c,	// (0x000b2809) cell_video_dialer_keypad_pane_g2_ParamLimits

0x551c,	// (0x000b2809) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000bcb82) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000bcb82) cell_video_dialer_keypad_pane_g

0x5534,	// (0x000b2821) cell_video_dialer_keypad_pane_t1

0x94ed,	// (0x000b67da) bg_popup_window_pane_cp012

0xb130,	// (0x000b841d) heading_pane_cp06

0xe0ab,	// (0x000bb398) ncim_query_content_pane

0x94ed,	// (0x000b67da) bg_popup_heading_pane_cp01

0xe0b3,	// (0x000bb3a0) ncim_heading_pane_t1

0xe0c1,	// (0x000bb3ae) ncim_indicator_popup_pane

0xe0d3,	// (0x000bb3c0) ncim_query_button_pane

0xe0e9,	// (0x000bb3d6) ncim_query_content_pane_t1

0xe0fb,	// (0x000bb3e8) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000bcee8) ncim_query_content_pane_t

0xe135,	// (0x000bb422) ncim_query_list_pane

0xe147,	// (0x000bb434) ncim_query_popup_pane

0xe0c1,	// (0x000bb3ae) ncim_indicator_popup_pane_ParamLimits

0x76c2,	// (0x000b49af) ncim_query_content_pane_g1_ParamLimits

0x76c2,	// (0x000b49af) ncim_query_content_pane_g1

0xe0e9,	// (0x000bb3d6) ncim_query_content_pane_t1_ParamLimits

0xe0fb,	// (0x000bb3e8) ncim_query_content_pane_t2_ParamLimits

0x76ce,	// (0x000b49bb) ncim_query_content_pane_t3_ParamLimits

0x76ce,	// (0x000b49bb) ncim_query_content_pane_t3

0x76f6,	// (0x000b49e3) ncim_query_content_pane_t4_ParamLimits

0x76f6,	// (0x000b49e3) ncim_query_content_pane_t4

0x771e,	// (0x000b4a0b) ncim_query_content_pane_t5_ParamLimits

0x771e,	// (0x000b4a0b) ncim_query_content_pane_t5

0xe10d,	// (0x000bb3fa) ncim_query_content_pane_t6_ParamLimits

0xe10d,	// (0x000bb3fa) ncim_query_content_pane_t6

0xfbfb,	// (0x000bcee8) ncim_query_content_pane_t_ParamLimits

0xe135,	// (0x000bb422) ncim_query_list_pane_ParamLimits

0xe147,	// (0x000bb434) ncim_query_popup_pane_ParamLimits

0xe15b,	// (0x000bb448) wait_bar_pane_cp04

0x94ed,	// (0x000b67da) input_focus_pane_cp011

0xe163,	// (0x000bb450) ncim_query_popup_pane_t1

0xe171,	// (0x000bb45e) ncim_list_query_list_pane_ParamLimits

0xe171,	// (0x000bb45e) ncim_list_query_list_pane

0x94ed,	// (0x000b67da) bg_button_pane_cp027

0xe184,	// (0x000bb471) ncim_query_button_pane_g1

0x94ed,	// (0x000b67da) list_highlight_pane_cp012

0xe18e,	// (0x000bb47b) ncim_list_query_list_pane_g1

0xe196,	// (0x000bb483) ncim_list_query_list_pane_t1

0xa19e,	// (0x000b748b) cam4_indicators_pane_g3_ParamLimits

0xa19e,	// (0x000b748b) cam4_indicators_pane_g3

0xa22f,	// (0x000b751c) vid4_indicators_pane_g5_ParamLimits

0xa22f,	// (0x000b751c) vid4_indicators_pane_g5

0xa3d3,	// (0x000b76c0) vid4_progress_pane_g5_ParamLimits

0xa3d3,	// (0x000b76c0) vid4_progress_pane_g5

0x75b0,	// (0x000b489d) main_ncimui_pane_g1

0x7616,	// (0x000b4903) ncimui_group_query_pane_ParamLimits

0x7616,	// (0x000b4903) ncimui_group_query_pane

0x765e,	// (0x000b494b) ncimui_list_pane_ParamLimits

0x765e,	// (0x000b494b) ncimui_list_pane

0x7685,	// (0x000b4972) ncimui_text_pane_ParamLimits

0x7685,	// (0x000b4972) ncimui_text_pane

0x7746,	// (0x000b4a33) ncimui_text_pane_t1_ParamLimits

0x7746,	// (0x000b4a33) ncimui_text_pane_t1

0xe1a4,	// (0x000bb491) ncimui_list_single_graphic_pane_ParamLimits

0xe1a4,	// (0x000bb491) ncimui_list_single_graphic_pane

0x7764,	// (0x000b4a51) ncimui_query_pane_ParamLimits

0x7764,	// (0x000b4a51) ncimui_query_pane

0x94ed,	// (0x000b67da) list_highlight_pane_cp013

0xe1b4,	// (0x000bb4a1) ncim_list_query_list_pane_t1_copy1

0xe18e,	// (0x000bb47b) ncim_list_single_graphic_pane_g1

0xe1c2,	// (0x000bb4af) ncim_query_button_pane_cp01

0xe1ce,	// (0x000bb4bb) ncim_query_entry_pane_ParamLimits

0xe1ce,	// (0x000bb4bb) ncim_query_entry_pane

0xe1e1,	// (0x000bb4ce) ncimui_query_pane_g1

0xe1ed,	// (0x000bb4da) ncimui_query_pane_t1_ParamLimits

0xe1ed,	// (0x000bb4da) ncimui_query_pane_t1

0x953e,	// (0x000b682b) input_focus_pane_cp012

0xe206,	// (0x000bb4f3) ncim_query_entry_pane_t1

0xa892,	// (0x000b7b7f) main_im_pane_ParamLimits

0x953e,	// (0x000b682b) main_mobtv_pane_ParamLimits

0x953e,	// (0x000b682b) main_mobtv_pane

0x7375,	// (0x000b4662) main_cset6_slider_pane_g18_ParamLimits

0x7375,	// (0x000b4662) main_cset6_slider_pane_g18

0x7381,	// (0x000b466e) main_cset6_slider_pane_g19_ParamLimits

0x7381,	// (0x000b466e) main_cset6_slider_pane_g19

0x7777,	// (0x000b4a64) bg_main_mobtv_pane_ParamLimits

0x7777,	// (0x000b4a64) bg_main_mobtv_pane

0x7785,	// (0x000b4a72) main_mobtv_info_pane

0x7790,	// (0x000b4a7d) main_mobtv_loading_pane_ParamLimits

0x7790,	// (0x000b4a7d) main_mobtv_loading_pane

0xe218,	// (0x000bb505) main_mobtv_pg_channel_list_pane

0xe222,	// (0x000bb50f) main_mobtv_pg_hdr_pane

0x779d,	// (0x000b4a8a) main_mobtv_programe_curr_pane_ParamLimits

0x779d,	// (0x000b4a8a) main_mobtv_programe_curr_pane

0x77aa,	// (0x000b4a97) main_mobtv_programe_next_pane_ParamLimits

0x77aa,	// (0x000b4a97) main_mobtv_programe_next_pane

0xe22b,	// (0x000bb518) popup_mobtv_noti_window

0xcc7e,	// (0x000b9f6b) main_tv_pg_hdr_pane_g1

0xe235,	// (0x000bb522) main_tv_pg_hdr_pane_g2

0xe23d,	// (0x000bb52a) main_tv_pg_hdr_pane_g3

0xe245,	// (0x000bb532) main_tv_pg_hdr_pane_g4

0xe24d,	// (0x000bb53a) main_tv_pg_hdr_pane_g5

0xe257,	// (0x000bb544) main_tv_pg_hdr_pane_g6

0xe261,	// (0x000bb54e) main_tv_pg_hdr_pane_g7

0xe26b,	// (0x000bb558) main_tv_pg_hdr_pane_g8

0xe275,	// (0x000bb562) main_tv_pg_hdr_pane_g9

0xe27f,	// (0x000bb56c) main_tv_pg_hdr_pane_g10

0xe289,	// (0x000bb576) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000bcef5) main_tv_pg_hdr_pane_g

0xe293,	// (0x000bb580) main_tv_pg_hdr_pane_t1

0xe2a1,	// (0x000bb58e) main_tv_pg_hdr_pane_t2

0xe2af,	// (0x000bb59c) main_tv_pg_hdr_pane_t3

0xe2bf,	// (0x000bb5ac) main_tv_pg_hdr_pane_t4

0xe2cf,	// (0x000bb5bc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000bcf0c) main_tv_pg_hdr_pane_t

0xe2df,	// (0x000bb5cc) single_mobtv_pg_channel_pane_ParamLimits

0xe2df,	// (0x000bb5cc) single_mobtv_pg_channel_pane

0xe2f1,	// (0x000bb5de) single_mobtv_pg_channel_table_pane

0xe2fa,	// (0x000bb5e7) single_mobtv_pg_channel_thumb_pane

0xe303,	// (0x000bb5f0) single_tv_pg_channel_pane_g1

0xe30c,	// (0x000bb5f9) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000bcf17) single_tv_pg_channel_pane_g

0xceae,	// (0x000ba19b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceae,	// (0x000ba19b) bg_single_mobtv_pg_channel_thumb_pane

0xe315,	// (0x000bb602) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe315,	// (0x000bb602) single_mobtv_pg_channel_thumb_pane_g1

0xe323,	// (0x000bb610) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe323,	// (0x000bb610) single_mobtv_pg_channel_thumb_pane_g2

0xe32f,	// (0x000bb61c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe32f,	// (0x000bb61c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000bcf1c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000bcf1c) single_mobtv_pg_channel_thumb_pane_g

0xe33b,	// (0x000bb628) single_mobtv_pg_channel_thumb_pane_t1

0xe349,	// (0x000bb636) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000bcf23) single_mobtv_pg_channel_thumb_pane_t

0xcc7e,	// (0x000b9f6b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc7e,	// (0x000b9f6b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000bc9c9) bg_single_mobtv_pg_channel_table_pane_g

0xe357,	// (0x000bb644) single_mobtv_pg_channel_table_pane_t1

0xe365,	// (0x000bb652) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000bcf28) single_mobtv_pg_channel_table_pane_t

0x77bf,	// (0x000b4aac) main_mobtv_info_pane_g1_ParamLimits

0x77bf,	// (0x000b4aac) main_mobtv_info_pane_g1

0x77dd,	// (0x000b4aca) main_mobtv_info_pane_t1_ParamLimits

0x77dd,	// (0x000b4aca) main_mobtv_info_pane_t1

0x7855,	// (0x000b4b42) main_mobtv_info_pane_t2_ParamLimits

0x7855,	// (0x000b4b42) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000bcf32) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000bcf32) main_mobtv_info_pane_t

0x78e4,	// (0x000b4bd1) wait_bar_pane_cp05

0x78f6,	// (0x000b4be3) main_mobtv_loading_pane_g1_ParamLimits

0x78f6,	// (0x000b4be3) main_mobtv_loading_pane_g1

0x7907,	// (0x000b4bf4) main_mobtv_loading_pane_g2_ParamLimits

0x7907,	// (0x000b4bf4) main_mobtv_loading_pane_g2

0x7913,	// (0x000b4c00) main_mobtv_loading_pane_g3_ParamLimits

0x7913,	// (0x000b4c00) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000bcf39) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000bcf39) main_mobtv_loading_pane_g

0xe373,	// (0x000bb660) main_mobtv_loading_pane_t1_ParamLimits

0xe373,	// (0x000bb660) main_mobtv_loading_pane_t1

0xe38b,	// (0x000bb678) main_mobtv_loading_pane_t2_ParamLimits

0xe38b,	// (0x000bb678) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000bcf40) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000bcf40) main_mobtv_loading_pane_t

0x7926,	// (0x000b4c13) wait_bar_pane_cp06_ParamLimits

0x7926,	// (0x000b4c13) wait_bar_pane_cp06

0xe3af,	// (0x000bb69c) main_mobtv_programe_curr_pane_t1

0xe3bd,	// (0x000bb6aa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000bcf45) main_mobtv_programe_curr_pane_t

0xe3cb,	// (0x000bb6b8) main_mobtv_programe_next_pane_t1

0xe3d9,	// (0x000bb6c6) main_mobtv_programe_next_pane_t2

0xe3e7,	// (0x000bb6d4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000bcf4a) main_mobtv_programe_next_pane_t

0x94ed,	// (0x000b67da) bg_popup_mobtv_noti_window_pane

0xe3f5,	// (0x000bb6e2) popup_mobtv_noti_window_g1

0xe3fd,	// (0x000bb6ea) popup_mobtv_noti_window_t1

0xe40b,	// (0x000bb6f8) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000bcf51) popup_mobtv_noti_window_t

0xcc7e,	// (0x000b9f6b) bg_popup_mobtv_noti_window_pane_g1

0x94ed,	// (0x000b67da) sc_clock_pane

0x94ed,	// (0x000b67da) main_fs_bigclock_pane

0x6fab,	// (0x000b4298) blid2_tripm_pane_t4_ParamLimits

0x6fab,	// (0x000b4298) blid2_tripm_pane_t4

0x7935,	// (0x000b4c22) sc_clock_pane_g1_ParamLimits

0x7935,	// (0x000b4c22) sc_clock_pane_g1

0x7947,	// (0x000b4c34) sc_clock_pane_t1_ParamLimits

0x7947,	// (0x000b4c34) sc_clock_pane_t1

0x796b,	// (0x000b4c58) sc_clock_pane_t2_ParamLimits

0x796b,	// (0x000b4c58) sc_clock_pane_t2

0x7983,	// (0x000b4c70) sc_clock_pane_t3_ParamLimits

0x7983,	// (0x000b4c70) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000bcf56) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000bcf56) sc_clock_pane_t

0x8981,	// (0x000b5c6e) main_fs_bigclock_indicator_pane_ParamLimits

0x8981,	// (0x000b5c6e) main_fs_bigclock_indicator_pane

0x7a3f,	// (0x000b4d2c) main_fs_bigclock_pane_g1_ParamLimits

0x7a3f,	// (0x000b4d2c) main_fs_bigclock_pane_g1

0x898d,	// (0x000b5c7a) main_fs_bigclock_pane_t1_ParamLimits

0x898d,	// (0x000b5c7a) main_fs_bigclock_pane_t1

0x899f,	// (0x000b5c8c) main_fs_bigclock_pane_t2_ParamLimits

0x899f,	// (0x000b5c8c) main_fs_bigclock_pane_t2

0x89b3,	// (0x000b5ca0) main_fs_bigclock_pane_t3_ParamLimits

0x89b3,	// (0x000b5ca0) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000bd160) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000bd160) main_fs_bigclock_pane_t

0xec6f,	// (0x000bbf5c) main_fs_bigclock_indicator_pane_g1

0xe0db,	// (0x000bb3c8) ncim_query_content_pane_g2_ParamLimits

0xe0db,	// (0x000bb3c8) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000bcee3) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000bcee3) ncim_query_content_pane_g

0x799a,	// (0x000b4c87) sc_clock_pane_t4_ParamLimits

0x799a,	// (0x000b4c87) sc_clock_pane_t4

0x953e,	// (0x000b682b) main_radioblah_pane

0xd5e3,	// (0x000ba8d0) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e3,	// (0x000ba8d0) cell_call4_button_pane_t1_copy1

0x75c8,	// (0x000b48b5) main_ncimui_pane_t1_ParamLimits

0x75c8,	// (0x000b48b5) main_ncimui_pane_t1

0x75e2,	// (0x000b48cf) main_ncimui_pane_t2_ParamLimits

0x75e2,	// (0x000b48cf) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000bcedc) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000bcedc) main_ncimui_pane_t

0xe55e,	// (0x000bb84b) main_radioblah_anim_pane_ParamLimits

0xe55e,	// (0x000bb84b) main_radioblah_anim_pane

0xe56f,	// (0x000bb85c) main_radioblah_info_pane_ParamLimits

0xe56f,	// (0x000bb85c) main_radioblah_info_pane

0xe583,	// (0x000bb870) main_radioblah_pane_t1_ParamLimits

0xe583,	// (0x000bb870) main_radioblah_pane_t1

0xe59f,	// (0x000bb88c) main_radioblah_pane_t2_ParamLimits

0xe59f,	// (0x000bb88c) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000bcf77) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000bcf77) main_radioblah_pane_t

0x7a9c,	// (0x000b4d89) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a9c,	// (0x000b4d89) main_radioblah_rocker_ctrl_pane

0xe5e7,	// (0x000bb8d4) main_radioblah_info_pane_t1_ParamLimits

0xe5e7,	// (0x000bb8d4) main_radioblah_info_pane_t1

0x7af4,	// (0x000b4de1) main_radioblah_info_pane_t2_ParamLimits

0x7af4,	// (0x000b4de1) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000bcf80) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000bcf80) main_radioblah_info_pane_t

0xcc7e,	// (0x000b9f6b) main_radioblah_rocker_ctrl_pane_g1

0x7ba4,	// (0x000b4e91) main_radioblah_rocker_ctrl_pane_g2

0x7bac,	// (0x000b4e99) main_radioblah_rocker_ctrl_pane_g3

0x7bb4,	// (0x000b4ea1) main_radioblah_rocker_ctrl_pane_g4

0x7bbc,	// (0x000b4ea9) main_radioblah_rocker_ctrl_pane_g5

0x7bc4,	// (0x000b4eb1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000bcf89) main_radioblah_rocker_ctrl_pane_g

0x7259,	// (0x000b4546) main_cset_text2_pane_t1_copy1_ParamLimits

0xa161,	// (0x000b744e) cam4_image_uncrop_qvga_pane

0xa1c4,	// (0x000b74b1) vid4_image_uncrop_qcif_pane

0xa450,	// (0x000b773d) cam6_image_uncrop_qvga_pane_ParamLimits

0xa450,	// (0x000b773d) cam6_image_uncrop_qvga_pane

0xddc3,	// (0x000bb0b0) vid6_image_uncrop_qcif_pane_ParamLimits

0xddc3,	// (0x000bb0b0) vid6_image_uncrop_qcif_pane

0x94ed,	// (0x000b67da) bg_popup_preview_window_pane_cp03

0xe08d,	// (0x000bb37a) list_cset_text2_pane

0xe095,	// (0x000bb382) main_cset6_text2_pane_g1

0xe09d,	// (0x000bb38a) main_cset6_text2_pane_t1

0x7bcc,	// (0x000b4eb9) list_cset_text2_pane_t1_ParamLimits

0x7bcc,	// (0x000b4eb9) list_cset_text2_pane_t1

0x953e,	// (0x000b682b) main_radioblah_pane_ParamLimits

0x78d0,	// (0x000b4bbd) main_mobtv_info_pane_t3_ParamLimits

0x78d0,	// (0x000b4bbd) main_mobtv_info_pane_t3

0x7a8a,	// (0x000b4d77) main_radioblah_pane_g1

0x7ac4,	// (0x000b4db1) main_radioblah_info_pane_g1

0x7b49,	// (0x000b4e36) main_radioblah_info_pane_t3_ParamLimits

0x7b49,	// (0x000b4e36) main_radioblah_info_pane_t3

0x20e4,	// (0x000af3d1) highlight_cell_cale_month_pane_ParamLimits

0x20e4,	// (0x000af3d1) highlight_cell_cale_month_pane

0x94ed,	// (0x000b67da) main_phob_fisheye_pane

0xcf92,	// (0x000ba27f) scroll_pane_cp0031_ParamLimits

0xcf92,	// (0x000ba27f) scroll_pane_cp0031

0xded5,	// (0x000bb1c2) wait_bar_pane_cp08_ParamLimits

0x21c4,	// (0x000af4b1) cset_list_set_pane_copy1_ParamLimits

0xe621,	// (0x000bb90e) highlight_cell_cale_month_pane_g1

0x7be5,	// (0x000b4ed2) highlight_cell_cale_month_pane_t1

0xdb5b,	// (0x000bae48) list_gen_pane_cp01

0xd7c8,	// (0x000baab5) scroll_pane_01

0x7bf3,	// (0x000b4ee0) list_single_double_fisheye_pane

0x7bfc,	// (0x000b4ee9) list_double_fisheye_pane_g1_ParamLimits

0x7bfc,	// (0x000b4ee9) list_double_fisheye_pane_g1

0x7c08,	// (0x000b4ef5) list_double_fisheye_pane_g2_ParamLimits

0x7c08,	// (0x000b4ef5) list_double_fisheye_pane_g2

0x7c1c,	// (0x000b4f09) list_double_fisheye_pane_g3_ParamLimits

0x7c1c,	// (0x000b4f09) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000bcf96) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000bcf96) list_double_fisheye_pane_g

0x7c45,	// (0x000b4f32) list_double_fisheye_pane_t1_ParamLimits

0x7c45,	// (0x000b4f32) list_double_fisheye_pane_t1

0x7c60,	// (0x000b4f4d) list_double_fisheye_pane_t2_ParamLimits

0x7c60,	// (0x000b4f4d) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000bcfa1) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000bcfa1) list_double_fisheye_pane_t

0x94ed,	// (0x000b67da) main_call5_pane

0x79c5,	// (0x000b4cb2) sc_swipe_pane_ParamLimits

0x79c5,	// (0x000b4cb2) sc_swipe_pane

0x7c95,	// (0x000b4f82) call5_image_pane_ParamLimits

0x7c95,	// (0x000b4f82) call5_image_pane

0x7cb2,	// (0x000b4f9f) call5_swipe_1_pane_ParamLimits

0x7cb2,	// (0x000b4f9f) call5_swipe_1_pane

0x7cc5,	// (0x000b4fb2) call5_swipe_2_pane_ParamLimits

0x7cc5,	// (0x000b4fb2) call5_swipe_2_pane

0x7cf2,	// (0x000b4fdf) popup_call5_audio_first_window_ParamLimits

0x7cf2,	// (0x000b4fdf) popup_call5_audio_first_window

0xceae,	// (0x000ba19b) call5_swipe_1_pane_g1_ParamLimits

0xceae,	// (0x000ba19b) call5_swipe_1_pane_g1

0xe629,	// (0x000bb916) call5_swipe_1_pane_g2_ParamLimits

0xe629,	// (0x000bb916) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000bcfa6) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000bcfa6) call5_swipe_1_pane_g

0xe635,	// (0x000bb922) call5_swipe_1_pane_t1_ParamLimits

0xe635,	// (0x000bb922) call5_swipe_1_pane_t1

0xceae,	// (0x000ba19b) call5_swipe_2_pane_g1_ParamLimits

0xceae,	// (0x000ba19b) call5_swipe_2_pane_g1

0xe64a,	// (0x000bb937) call5_swipe_2_pane_g2_ParamLimits

0xe64a,	// (0x000bb937) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000bcfab) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000bcfab) call5_swipe_2_pane_g

0xe656,	// (0x000bb943) call5_swipe_2_pane_t1_ParamLimits

0xe656,	// (0x000bb943) call5_swipe_2_pane_t1

0xe66b,	// (0x000bb958) sc_swipe_pane_g1_ParamLimits

0xe66b,	// (0x000bb958) sc_swipe_pane_g1

0xe678,	// (0x000bb965) sc_swipe_pane_g2_ParamLimits

0xe678,	// (0x000bb965) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000bcfb0) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000bcfb0) sc_swipe_pane_g

0xe684,	// (0x000bb971) sc_swipe_pane_t1_ParamLimits

0xe684,	// (0x000bb971) sc_swipe_pane_t1

0x94ed,	// (0x000b67da) main_cmail_launcher_pane

0x7d07,	// (0x000b4ff4) aid_size_cell_cmail_l_ParamLimits

0x7d07,	// (0x000b4ff4) aid_size_cell_cmail_l

0x7d21,	// (0x000b500e) grid_cmail_l_pane_ParamLimits

0x7d21,	// (0x000b500e) grid_cmail_l_pane

0x7d3c,	// (0x000b5029) cell_cmail_l_pane_ParamLimits

0x7d3c,	// (0x000b5029) cell_cmail_l_pane

0x7d64,	// (0x000b5051) cell_cmail_l_pane_g1_ParamLimits

0x7d64,	// (0x000b5051) cell_cmail_l_pane_g1

0x7d70,	// (0x000b505d) cell_cmail_l_pane_t1_ParamLimits

0x7d70,	// (0x000b505d) cell_cmail_l_pane_t1

0xe699,	// (0x000bb986) cell_cmail_l_pane_t2_ParamLimits

0xe699,	// (0x000bb986) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000bcfb5) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000bcfb5) cell_cmail_l_pane_t

0x953e,	// (0x000b682b) grid_highlight_pane_cp018_ParamLimits

0x953e,	// (0x000b682b) grid_highlight_pane_cp018

0xfd23,	// (0x000ad010) main2_pane_ParamLimits

0xfd23,	// (0x000ad010) main2_pane

0xa93d,	// (0x000b7c2a) popup_sp_fs_action_menu_bg_pane_g1

0xa945,	// (0x000b7c32) popup_sp_fs_action_menu_bg_pane_g2

0xa94d,	// (0x000b7c3a) popup_sp_fs_action_menu_bg_pane_g3

0xa955,	// (0x000b7c42) popup_sp_fs_action_menu_bg_pane_g4

0xa95d,	// (0x000b7c4a) popup_sp_fs_action_menu_bg_pane_g5

0xa965,	// (0x000b7c52) popup_sp_fs_action_menu_bg_pane_g6

0xa96d,	// (0x000b7c5a) popup_sp_fs_action_menu_bg_pane_g7

0xa975,	// (0x000b7c62) popup_sp_fs_action_menu_bg_pane_g8

0xa97d,	// (0x000b7c6a) popup_sp_fs_action_menu_bg_pane_g9

0xa985,	// (0x000b7c72) popup_sp_fs_action_menu_bg_pane_g10

0xa985,	// (0x000b7c72) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000bc477) popup_sp_fs_action_menu_bg_pane_g

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g3_g1

0x0f4c,	// (0x000ae239) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_t3_g3_g2

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000bc525) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000bc525) list_medium_line_x2_t3_g3_g

0x0f64,	// (0x000ae251) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f64,	// (0x000ae251) list_medium_line_x2_t3_g3_t1

0x0f79,	// (0x000ae266) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f79,	// (0x000ae266) list_medium_line_x2_t3_g3_t2

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000bc52c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000bc52c) list_medium_line_x2_t3_g3_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g2_g1

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000bc533) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000bc533) list_medium_line_x2_t3_g2_g

0x0fa2,	// (0x000ae28f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0fa2,	// (0x000ae28f) list_medium_line_x2_t3_g2_t1

0x0fb8,	// (0x000ae2a5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fb8,	// (0x000ae2a5) list_medium_line_x2_t3_g2_t2

0x0fca,	// (0x000ae2b7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fca,	// (0x000ae2b7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000bc538) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000bc538) list_medium_line_x2_t3_g2_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t4_g4_g1

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t4_g4_g2

0x0f4c,	// (0x000ae239) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_t4_g4_g3

0x0ff4,	// (0x000ae2e1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ff4,	// (0x000ae2e1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000bc53f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000bc53f) list_medium_line_x2_t4_g4_g

0x1000,	// (0x000ae2ed) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1000,	// (0x000ae2ed) list_medium_line_x2_t4_g4_t1

0x101a,	// (0x000ae307) list_medium_line_x2_t4_g4_t2_ParamLimits

0x101a,	// (0x000ae307) list_medium_line_x2_t4_g4_t2

0x1030,	// (0x000ae31d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1030,	// (0x000ae31d) list_medium_line_x2_t4_g4_t3

0x1045,	// (0x000ae332) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1045,	// (0x000ae332) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000bc548) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000bc548) list_medium_line_x2_t4_g4_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g4_g1

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t2_g4_g2

0x0f4c,	// (0x000ae239) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_t2_g4_g3

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000bc5af) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000bc5af) list_medium_line_x2_t2_g4_g

0x210a,	// (0x000af3f7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x210a,	// (0x000af3f7) list_medium_line_x2_t2_g4_t1

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000bc5b8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000bc5b8) list_medium_line_x2_t2_g4_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g3_g1

0x0f4c,	// (0x000ae239) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_t2_g3_g2

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000bc525) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000bc525) list_medium_line_x2_t2_g3_g

0x211f,	// (0x000af40c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x211f,	// (0x000af40c) list_medium_line_x2_t2_g3_t1

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000bc5bd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000bc5bd) list_medium_line_x2_t2_g3_t

0x2269,	// (0x000af556) main_sp_fs_list_pane_ParamLimits

0x2269,	// (0x000af556) main_sp_fs_list_pane

0x2275,	// (0x000af562) sp_fs_scroll_pane_ParamLimits

0x2275,	// (0x000af562) sp_fs_scroll_pane

0x2281,	// (0x000af56e) list_medium_line_x2_t3_t1

0x2291,	// (0x000af57e) list_medium_line_x2_t3_t2

0x229f,	// (0x000af58c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000bc608) list_medium_line_x2_t3_t

0x22ad,	// (0x000af59a) list_medium_line_x3_t4_t1

0x22bd,	// (0x000af5aa) list_medium_line_x3_t4_t2

0x22cb,	// (0x000af5b8) list_medium_line_x3_t4_t3

0x229f,	// (0x000af58c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000bc60f) list_medium_line_x3_t4_t

0x22d9,	// (0x000af5c6) list_medium_line_x4_t5_t1

0x22e9,	// (0x000af5d6) list_medium_line_x4_t5_t2

0x22cb,	// (0x000af5b8) list_medium_line_x4_t5_t3

0x22f7,	// (0x000af5e4) list_medium_line_x4_t5_t4

0x229f,	// (0x000af58c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000bc618) list_medium_line_x4_t5_t

0x0f40,	// (0x000ae22d) list_medium_line_t4_g4_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_t4_g4_g1

0x0ff4,	// (0x000ae2e1) list_medium_line_t4_g4_g2_ParamLimits

0x0ff4,	// (0x000ae2e1) list_medium_line_t4_g4_g2

0x2305,	// (0x000af5f2) list_medium_line_t4_g4_g3_ParamLimits

0x2305,	// (0x000af5f2) list_medium_line_t4_g4_g3

0x0f58,	// (0x000ae245) list_medium_line_t4_g4_g4_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000bc623) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000bc623) list_medium_line_t4_g4_g

0x2311,	// (0x000af5fe) list_medium_line_t4_g4_t1_ParamLimits

0x2311,	// (0x000af5fe) list_medium_line_t4_g4_t1

0x2326,	// (0x000af613) list_medium_line_t4_g4_t2_ParamLimits

0x2326,	// (0x000af613) list_medium_line_t4_g4_t2

0x233c,	// (0x000af629) list_medium_line_t4_g4_t3_ParamLimits

0x233c,	// (0x000af629) list_medium_line_t4_g4_t3

0x0f8d,	// (0x000ae27a) list_medium_line_t4_g4_t4_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000bc62c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000bc62c) list_medium_line_t4_g4_t

0x2418,	// (0x000af705) chi_dic_find_pane_g1

0x3635,	// (0x000b0922) main_tport_pane

0xa2c2,	// (0x000b75af) list_medium_line_plain_t1

0xa30c,	// (0x000b75f9) list_medium_line_t2_g2_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t2_g2_g1

0xbb1f,	// (0x000b8e0c) list_medium_line_t2_g2_g2_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000bcced) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000bcced) list_medium_line_t2_g2_g

0x66bf,	// (0x000b39ac) list_medium_line_t2_g2_t1_ParamLimits

0x66bf,	// (0x000b39ac) list_medium_line_t2_g2_t1

0x66d9,	// (0x000b39c6) list_medium_line_t2_g2_t2_ParamLimits

0x66d9,	// (0x000b39c6) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000bccf2) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000bccf2) list_medium_line_t2_g2_t

0xa436,	// (0x000b7723) aid_sp_fs_list_icon_a_sm

0xbb2b,	// (0x000b8e18) aid_sp_fs_list_icon_d

0xa43e,	// (0x000b772b) aid_sp_fs_text_primary

0xa447,	// (0x000b7734) aid_sp_fs_text_secondary

0x6d58,	// (0x000b4045) list_medium_line

0x6d58,	// (0x000b4045) list_medium_line_g2

0x6d58,	// (0x000b4045) list_medium_line_g3

0x6d58,	// (0x000b4045) list_medium_line_plain

0x6d58,	// (0x000b4045) list_medium_line_plain_t2

0x6d58,	// (0x000b4045) list_medium_line_plain_t3

0x6d58,	// (0x000b4045) list_medium_line_right_icon

0x6d58,	// (0x000b4045) list_medium_line_right_iconx2

0x6d58,	// (0x000b4045) list_medium_line_t2

0x6d58,	// (0x000b4045) list_medium_line_t2_g2

0x6d58,	// (0x000b4045) list_medium_line_t2_g3

0x6d58,	// (0x000b4045) list_medium_line_t2_right_icon

0x6d58,	// (0x000b4045) list_medium_line_t2_right_iconx2

0x6d58,	// (0x000b4045) list_medium_line_t3

0x6d58,	// (0x000b4045) list_medium_line_t3_g2

0x6d58,	// (0x000b4045) list_medium_line_t3_g3

0x6d58,	// (0x000b4045) list_medium_line_t3_right_iconx2

0x6d61,	// (0x000b404e) list_medium_line_t4_g4

0x6d6a,	// (0x000b4057) list_medium_line_x2

0x6d6a,	// (0x000b4057) list_medium_line_x2_t2_g2

0x6d6a,	// (0x000b4057) list_medium_line_x2_t2_g3

0x6d6a,	// (0x000b4057) list_medium_line_x2_t2_g4

0x6d6a,	// (0x000b4057) list_medium_line_x2_t3

0x6d6a,	// (0x000b4057) list_medium_line_x2_t3_g2

0x6d6a,	// (0x000b4057) list_medium_line_x2_t3_g3

0x6d6a,	// (0x000b4057) list_medium_line_x2_t3_g4

0x6d6a,	// (0x000b4057) list_medium_line_x2_t4_g2

0x6d6a,	// (0x000b4057) list_medium_line_x2_t4_g4

0x6d73,	// (0x000b4060) list_medium_line_x3

0x6d73,	// (0x000b4060) list_medium_line_x3_t4

0x6d73,	// (0x000b4060) list_medium_line_x3_t4_g4

0x6d61,	// (0x000b404e) list_medium_line_x4_t4

0x6d61,	// (0x000b404e) list_medium_line_x4_t4_g7

0x6d61,	// (0x000b404e) list_medium_line_x4_t5

0x6d7c,	// (0x000b4069) list_single_fs_dyc_pane_ParamLimits

0x6d7c,	// (0x000b4069) list_single_fs_dyc_pane

0x0f40,	// (0x000ae22d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x4_t4_g7_g1

0x74cd,	// (0x000b47ba) list_medium_line_x4_t4_g7_g2_ParamLimits

0x74cd,	// (0x000b47ba) list_medium_line_x4_t4_g7_g2

0x74d9,	// (0x000b47c6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74d9,	// (0x000b47c6) list_medium_line_x4_t4_g7_g3

0x74e8,	// (0x000b47d5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74e8,	// (0x000b47d5) list_medium_line_x4_t4_g7_g4

0x74f4,	// (0x000b47e1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74f4,	// (0x000b47e1) list_medium_line_x4_t4_g7_g5

0x7503,	// (0x000b47f0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7503,	// (0x000b47f0) list_medium_line_x4_t4_g7_g6

0x7512,	// (0x000b47ff) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7512,	// (0x000b47ff) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000bcebd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000bcebd) list_medium_line_x4_t4_g7_g

0x751e,	// (0x000b480b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x751e,	// (0x000b480b) list_medium_line_x4_t4_g7_t1

0x7533,	// (0x000b4820) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7533,	// (0x000b4820) list_medium_line_x4_t4_g7_t2

0x7548,	// (0x000b4835) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7548,	// (0x000b4835) list_medium_line_x4_t4_g7_t3

0x755d,	// (0x000b484a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x755d,	// (0x000b484a) list_medium_line_x4_t4_g7_t4

0x756f,	// (0x000b485c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x756f,	// (0x000b485c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000bcecc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000bcecc) list_medium_line_x4_t4_g7_t

0x7581,	// (0x000b486e) list_single_dyc_row_pane_ParamLimits

0x7581,	// (0x000b486e) list_single_dyc_row_pane

0x7c82,	// (0x000b4f6f) call5_gesture_pane_ParamLimits

0x7c82,	// (0x000b4f6f) call5_gesture_pane

0x7cd8,	// (0x000b4fc5) call5_windows_pane_ParamLimits

0x7cd8,	// (0x000b4fc5) call5_windows_pane

0x7d86,	// (0x000b5073) call5_swipe_1_pane_cp_ParamLimits

0x7d86,	// (0x000b5073) call5_swipe_1_pane_cp

0x7d92,	// (0x000b507f) call5_swipe_2_pane_cp_ParamLimits

0x7d92,	// (0x000b507f) call5_swipe_2_pane_cp

0xaa48,	// (0x000b7d35) call5_image_pane_cp

0x7d9e,	// (0x000b508b) popup_call5_audio_first_window_cp_ParamLimits

0x7d9e,	// (0x000b508b) popup_call5_audio_first_window_cp

0xe66b,	// (0x000bb958) call5_swipe_1_pane_g1_cp_ParamLimits

0xe66b,	// (0x000bb958) call5_swipe_1_pane_g1_cp

0xe6ab,	// (0x000bb998) call5_swipe_1_pane_g2_cp

0xe684,	// (0x000bb971) call5_swipe_1_pane_t1_cp_ParamLimits

0xe684,	// (0x000bb971) call5_swipe_1_pane_t1_cp

0xe66b,	// (0x000bb958) call5_swipe_2_pane_g1_cp_ParamLimits

0xe66b,	// (0x000bb958) call5_swipe_2_pane_g1_cp

0xe6b3,	// (0x000bb9a0) call5_swipe_2_pane_g2_cp

0xe6bb,	// (0x000bb9a8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6bb,	// (0x000bb9a8) call5_swipe_2_pane_t1_cp

0x953e,	// (0x000b682b) main_sp_fs_email_pane

0xe6d0,	// (0x000bb9bd) main_sp_fs_listscroll_pane_te

0xa45e,	// (0x000b774b) popup_sp_fs_action_menu_pane_ParamLimits

0xa45e,	// (0x000b774b) popup_sp_fs_action_menu_pane

0xcc7e,	// (0x000b9f6b) bg_sp_fs_ctrlbar_pane_g1

0xd233,	// (0x000ba520) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd245,	// (0x000ba532) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd23c,	// (0x000ba529) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc7e,	// (0x000b9f6b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000bcfba) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca5d,	// (0x000b9d4a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca5d,	// (0x000b9d4a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d9,	// (0x000bb9c6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d9,	// (0x000bb9c6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e5,	// (0x000bb9d2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e5,	// (0x000bb9d2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000bcfc3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000bcfc3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f1,	// (0x000bb9de) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f1,	// (0x000bb9de) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbb33,	// (0x000b8e20) list_medium_line_t2_right_icon_g1

0x7dac,	// (0x000b5099) list_medium_line_t2_right_icon_t1

0x7dbc,	// (0x000b50a9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000bcfc8) list_medium_line_t2_right_icon_t

0xc82d,	// (0x000b9b1a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc82d,	// (0x000b9b1a) bg_sp_fs_ctrlbar_pane

0x7e1b,	// (0x000b5108) main_sp_fs_ctrlbar_button_pane_cp01

0x7e25,	// (0x000b5112) main_sp_fs_ctrlbar_ddmenu_pane

0xe743,	// (0x000bba30) main_sp_fs_ctrlbar_pane_g1

0xe74f,	// (0x000bba3c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000bcfcd) main_sp_fs_ctrlbar_pane_g

0xe75b,	// (0x000bba48) main_sp_fs_ctrlbar_pane_t1

0x7e2f,	// (0x000b511c) main_sp_fs_ctrlbar_pane

0x7e53,	// (0x000b5140) main_sp_fs_listscroll_pane_te_cp01

0x7e73,	// (0x000b5160) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e73,	// (0x000b5160) popup_sp_fs_action_menu_pane_cp01

0x953e,	// (0x000b682b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x953e,	// (0x000b682b) bg_sp_fs_highlight_list_pane_cp01

0xa4a4,	// (0x000b7791) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa4a4,	// (0x000b7791) sp_fs_action_menu_list_gene_pane_g1

0xe78b,	// (0x000bba78) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe78b,	// (0x000bba78) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000bcfd7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000bcfd7) sp_fs_action_menu_list_gene_pane_g

0xa4b3,	// (0x000b77a0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa4b3,	// (0x000b77a0) sp_fs_action_menu_list_gene_pane_t1

0xa4cb,	// (0x000b77b8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa4cb,	// (0x000b77b8) sp_fs_action_menu_list_gene_pane

0xe798,	// (0x000bba85) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe798,	// (0x000bba85) popup_sp_fs_action_menu_bg_pane

0xa4ee,	// (0x000b77db) sp_fs_action_menu_list_pane_ParamLimits

0xa4ee,	// (0x000b77db) sp_fs_action_menu_list_pane

0xe7a6,	// (0x000bba93) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a6,	// (0x000bba93) sp_fs_scroll_pane_cp01

0x7ea9,	// (0x000b5196) list_medium_line_plain_t2_t1

0x7eb9,	// (0x000b51a6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000bcfdc) list_medium_line_plain_t2_t

0x7ec9,	// (0x000b51b6) list_medium_line_plain_t3_t1

0x7ed9,	// (0x000b51c6) list_medium_line_plain_t3_t2

0x7ee7,	// (0x000b51d4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000bcfe1) list_medium_line_plain_t3_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t2_g2_g1

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000bc533) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000bc533) list_medium_line_x2_t2_g2_g

0x2311,	// (0x000af5fe) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2311,	// (0x000af5fe) list_medium_line_x2_t2_g2_t1

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000bcfe8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000bcfe8) list_medium_line_x2_t2_g2_t

0x0f40,	// (0x000ae22d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t4_g2_g1

0x7ef5,	// (0x000b51e2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ef5,	// (0x000b51e2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000bcfed) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000bcfed) list_medium_line_x2_t4_g2_g

0x7f07,	// (0x000b51f4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f07,	// (0x000b51f4) list_medium_line_x2_t4_g2_t1

0x7f21,	// (0x000b520e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f21,	// (0x000b520e) list_medium_line_x2_t4_g2_t2

0x7f37,	// (0x000b5224) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f37,	// (0x000b5224) list_medium_line_x2_t4_g2_t3

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000bcff2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000bcff2) list_medium_line_x2_t4_g2_t

0xbb3b,	// (0x000b8e28) list_medium_line_t3_right_iconx2_g1

0xbb33,	// (0x000b8e20) list_medium_line_t3_right_iconx2_g2

0x7f4c,	// (0x000b5239) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000bcffb) list_medium_line_t3_right_iconx2_g

0x7f56,	// (0x000b5243) list_medium_line_t3_right_iconx2_t1

0x7f66,	// (0x000b5253) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000bd002) list_medium_line_t3_right_iconx2_t

0x0f40,	// (0x000ae22d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x3_t4_g4_g1

0x0f4c,	// (0x000ae239) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x3_t4_g4_g2

0x0ff4,	// (0x000ae2e1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ff4,	// (0x000ae2e1) list_medium_line_x3_t4_g4_g3

0x7f74,	// (0x000b5261) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f74,	// (0x000b5261) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000bd007) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000bd007) list_medium_line_x3_t4_g4_g

0x7f80,	// (0x000b526d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f80,	// (0x000b526d) list_medium_line_x3_t4_g4_t1

0x7f97,	// (0x000b5284) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f97,	// (0x000b5284) list_medium_line_x3_t4_g4_t2

0x7fb2,	// (0x000b529f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fb2,	// (0x000b529f) list_medium_line_x3_t4_g4_t3

0x7fc7,	// (0x000b52b4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fc7,	// (0x000b52b4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000bd010) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000bd010) list_medium_line_x3_t4_g4_t

0x7fe4,	// (0x000b52d1) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fe4,	// (0x000b52d1) list_single_dyc_row_text_pane_t1

0x802d,	// (0x000b531a) list_single_dyc_row_text_pane_t2_ParamLimits

0x802d,	// (0x000b531a) list_single_dyc_row_text_pane_t2

0xa512,	// (0x000b77ff) list_single_dyc_row_text_pane_t3_ParamLimits

0xa512,	// (0x000b77ff) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000bd019) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000bd019) list_single_dyc_row_text_pane_t

0xa536,	// (0x000b7823) list_single_dyc_row_pane_g1_ParamLimits

0xa536,	// (0x000b7823) list_single_dyc_row_pane_g1

0xa542,	// (0x000b782f) list_single_dyc_row_pane_g2_ParamLimits

0xa542,	// (0x000b782f) list_single_dyc_row_pane_g2

0xa54e,	// (0x000b783b) list_single_dyc_row_pane_g3_ParamLimits

0xa54e,	// (0x000b783b) list_single_dyc_row_pane_g3

0xa55a,	// (0x000b7847) list_single_dyc_row_pane_g4_ParamLimits

0xa55a,	// (0x000b7847) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000bd026) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000bd026) list_single_dyc_row_pane_g

0xa566,	// (0x000b7853) list_single_dyc_row_text_pane_ParamLimits

0xa566,	// (0x000b7853) list_single_dyc_row_text_pane

0x94ed,	// (0x000b67da) bg_sp_fs_scroll_pane

0xe7cc,	// (0x000bbab9) thumb_sp_fs_scroll_pane

0xa30c,	// (0x000b75f9) list_medium_line_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_g1

0xa585,	// (0x000b7872) list_medium_line_t1_ParamLimits

0xa585,	// (0x000b7872) list_medium_line_t1

0x0f40,	// (0x000ae22d) list_medium_line_x2_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_g1

0x0f4c,	// (0x000ae239) list_medium_line_x2_g2_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000bd02f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000bd02f) list_medium_line_x2_g

0xa59a,	// (0x000b7887) list_medium_line_x2_t1_ParamLimits

0xa59a,	// (0x000b7887) list_medium_line_x2_t1

0x0f40,	// (0x000ae22d) list_medium_line_x3_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x3_g1

0x0f4c,	// (0x000ae239) list_medium_line_x3_g2_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000bd02f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000bd02f) list_medium_line_x3_g

0xa59a,	// (0x000b7887) list_medium_line_x3_t1_ParamLimits

0xa59a,	// (0x000b7887) list_medium_line_x3_t1

0xe7d5,	// (0x000bbac2) thumb_sp_fs_scroll_pane_g1

0xe7de,	// (0x000bbacb) thumb_sp_fs_scroll_pane_g2

0xe7e7,	// (0x000bbad4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bd034) thumb_sp_fs_scroll_pane_g

0xe7d5,	// (0x000bbac2) bg_sp_fs_scroll_pane_g1

0xe7de,	// (0x000bbacb) bg_sp_fs_scroll_pane_g2

0xe7e7,	// (0x000bbad4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000bd034) bg_sp_fs_scroll_pane_g

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f40,	// (0x000ae22d) list_medium_line_x2_t3_g4_g1

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fe8,	// (0x000ae2d5) list_medium_line_x2_t3_g4_g2

0x0f4c,	// (0x000ae239) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f4c,	// (0x000ae239) list_medium_line_x2_t3_g4_g3

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f58,	// (0x000ae245) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000bc5af) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000bc5af) list_medium_line_x2_t3_g4_g

0x8162,	// (0x000b544f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8162,	// (0x000b544f) list_medium_line_x2_t3_g4_t1

0x8178,	// (0x000b5465) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8178,	// (0x000b5465) list_medium_line_x2_t3_g4_t2

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f8d,	// (0x000ae27a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000bd03b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000bd03b) list_medium_line_x2_t3_g4_t

0xa30c,	// (0x000b75f9) list_medium_line_g2_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_g2_g1

0xbb1f,	// (0x000b8e0c) list_medium_line_g2_g2_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000bcced) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000bcced) list_medium_line_g2_g

0xa5b0,	// (0x000b789d) list_medium_line_g2_t1_ParamLimits

0xa5b0,	// (0x000b789d) list_medium_line_g2_t1

0xa30c,	// (0x000b75f9) list_medium_line_t3_g2_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t3_g2_g1

0xbb1f,	// (0x000b8e0c) list_medium_line_t3_g2_g2_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000bcced) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000bcced) list_medium_line_t3_g2_g

0x8191,	// (0x000b547e) list_medium_line_t3_g2_t1_ParamLimits

0x8191,	// (0x000b547e) list_medium_line_t3_g2_t1

0x81a8,	// (0x000b5495) list_medium_line_t3_g2_t2_ParamLimits

0x81a8,	// (0x000b5495) list_medium_line_t3_g2_t2

0x81bd,	// (0x000b54aa) list_medium_line_t3_g2_t3_ParamLimits

0x81bd,	// (0x000b54aa) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000bd042) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000bd042) list_medium_line_t3_g2_t

0xbb33,	// (0x000b8e20) list_medium_line_right_icon_g1

0xa5c5,	// (0x000b78b2) list_medium_line_right_icon_t1

0xa30c,	// (0x000b75f9) list_medium_line_t2_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t2_g1

0x81d6,	// (0x000b54c3) list_medium_line_t2_t1_ParamLimits

0x81d6,	// (0x000b54c3) list_medium_line_t2_t1

0x81f0,	// (0x000b54dd) list_medium_line_t2_t2_ParamLimits

0x81f0,	// (0x000b54dd) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000bd049) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000bd049) list_medium_line_t2_t

0xa30c,	// (0x000b75f9) list_medium_line_t3_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t3_g1

0x8209,	// (0x000b54f6) list_medium_line_t3_t1_ParamLimits

0x8209,	// (0x000b54f6) list_medium_line_t3_t1

0x8223,	// (0x000b5510) list_medium_line_t3_t2_ParamLimits

0x8223,	// (0x000b5510) list_medium_line_t3_t2

0x8239,	// (0x000b5526) list_medium_line_t3_t3_ParamLimits

0x8239,	// (0x000b5526) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000bd04e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000bd04e) list_medium_line_t3_t

0xa30c,	// (0x000b75f9) list_medium_line_g3_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_g3_g1

0xbb43,	// (0x000b8e30) list_medium_line_g3_g2_ParamLimits

0xbb43,	// (0x000b8e30) list_medium_line_g3_g2

0xbb1f,	// (0x000b8e0c) list_medium_line_g3_g3_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000bd055) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000bd055) list_medium_line_g3_g

0xa5d3,	// (0x000b78c0) list_medium_line_g3_t1_ParamLimits

0xa5d3,	// (0x000b78c0) list_medium_line_g3_t1

0xa30c,	// (0x000b75f9) list_medium_line_t2_g3_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t2_g3_g1

0xbb43,	// (0x000b8e30) list_medium_line_t2_g3_g2_ParamLimits

0xbb43,	// (0x000b8e30) list_medium_line_t2_g3_g2

0xbb1f,	// (0x000b8e0c) list_medium_line_t2_g3_g3_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000bd055) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000bd055) list_medium_line_t2_g3_g

0x824e,	// (0x000b553b) list_medium_line_t2_g3_t1_ParamLimits

0x824e,	// (0x000b553b) list_medium_line_t2_g3_t1

0x8268,	// (0x000b5555) list_medium_line_t2_g3_t2_ParamLimits

0x8268,	// (0x000b5555) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000bd05c) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000bd05c) list_medium_line_t2_g3_t

0xa30c,	// (0x000b75f9) list_medium_line_t3_g3_g1_ParamLimits

0xa30c,	// (0x000b75f9) list_medium_line_t3_g3_g1

0xbb43,	// (0x000b8e30) list_medium_line_t3_g3_g2_ParamLimits

0xbb43,	// (0x000b8e30) list_medium_line_t3_g3_g2

0xbb1f,	// (0x000b8e0c) list_medium_line_t3_g3_g3_ParamLimits

0xbb1f,	// (0x000b8e0c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000bd055) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000bd055) list_medium_line_t3_g3_g

0x8282,	// (0x000b556f) list_medium_line_t3_g3_t1_ParamLimits

0x8282,	// (0x000b556f) list_medium_line_t3_g3_t1

0x8296,	// (0x000b5583) list_medium_line_t3_g3_t2_ParamLimits

0x8296,	// (0x000b5583) list_medium_line_t3_g3_t2

0x82a8,	// (0x000b5595) list_medium_line_t3_g3_t3_ParamLimits

0x82a8,	// (0x000b5595) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000bd061) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000bd061) list_medium_line_t3_g3_t

0xbb3b,	// (0x000b8e28) list_medium_line_right_iconx2_g1

0xbb33,	// (0x000b8e20) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bd068) list_medium_line_right_iconx2_g

0xbb4f,	// (0x000b8e3c) list_medium_line_right_iconx2_t1

0xbb3b,	// (0x000b8e28) list_medium_line_t2_right_iconx2_g1

0xbb33,	// (0x000b8e20) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000bd068) list_medium_line_t2_right_iconx2_g

0x82bc,	// (0x000b55a9) list_medium_line_t2_right_iconx2_t1

0x82cc,	// (0x000b55b9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000bd06d) list_medium_line_t2_right_iconx2_t

0x82de,	// (0x000b55cb) list_medium_line_x4_t4_t1

0x82ec,	// (0x000b55d9) list_medium_line_x4_t4_t2

0x82fc,	// (0x000b55e9) list_medium_line_x4_t4_t3

0x830c,	// (0x000b55f9) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000bd072) list_medium_line_x4_t4_t

0x835f,	// (0x000b564c) tport_appsw_pane_ParamLimits

0x835f,	// (0x000b564c) tport_appsw_pane

0x8377,	// (0x000b5664) tport_contact_pane_ParamLimits

0x8377,	// (0x000b5664) tport_contact_pane

0x838f,	// (0x000b567c) tport_listscroll_pane_ParamLimits

0x838f,	// (0x000b567c) tport_listscroll_pane

0x83a9,	// (0x000b5696) cell_tport_appsw_pane_ParamLimits

0x83a9,	// (0x000b5696) cell_tport_appsw_pane

0xd68a,	// (0x000ba977) tport_appsw_pane_g1_ParamLimits

0xd68a,	// (0x000ba977) tport_appsw_pane_g1

0xe7f0,	// (0x000bbadd) tport_contact_pane_g1

0xe7f9,	// (0x000bbae6) tport_contact_pane_t1

0xe807,	// (0x000bbaf4) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000bd07b) tport_contact_pane_t

0xe815,	// (0x000bbb02) list_tport_pane

0xe81e,	// (0x000bbb0b) scroll_pane_cp_030

0x83fb,	// (0x000b56e8) cell_tport_appsw_pane_g1

0x840b,	// (0x000b56f8) cell_tport_appsw_pane_t1

0x8419,	// (0x000b5706) grid_highlight_pane_cp019

0x8421,	// (0x000b570e) list_tport_double_graphic_pane_ParamLimits

0x8421,	// (0x000b570e) list_tport_double_graphic_pane

0x953e,	// (0x000b682b) list_highlight_pane_cp023_ParamLimits

0x953e,	// (0x000b682b) list_highlight_pane_cp023

0x842e,	// (0x000b571b) list_tport_double_graphic_pane_g1_ParamLimits

0x842e,	// (0x000b571b) list_tport_double_graphic_pane_g1

0x843b,	// (0x000b5728) list_tport_double_graphic_pane_t1_ParamLimits

0x843b,	// (0x000b5728) list_tport_double_graphic_pane_t1

0x8450,	// (0x000b573d) list_tport_double_graphic_pane_t2_ParamLimits

0x8450,	// (0x000b573d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000bd087) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000bd087) list_tport_double_graphic_pane_t

0x94ed,	// (0x000b67da) main_cale_note_pane

0x5e37,	// (0x000b3124) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e37,	// (0x000b3124) cell_vitu2_function_top_wide_pane_cp01

0x78e4,	// (0x000b4bd1) wait_bar_pane_cp05_ParamLimits

0x953e,	// (0x000b682b) listscroll_cmail_pane

0xe82f,	// (0x000bbb1c) list_cmail_pane

0x846c,	// (0x000b5759) list_cmail_body_pane

0xe846,	// (0x000bbb33) list_single_cmail_header_caption_pane

0x847f,	// (0x000b576c) list_single_cmail_header_detail_pane_ParamLimits

0x847f,	// (0x000b576c) list_single_cmail_header_detail_pane

0x84aa,	// (0x000b5797) list_single_cmail_header_caption_pane_t1

0x84ba,	// (0x000b57a7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84ba,	// (0x000b57a7) list_single_cmail_header_detail_pane_g1

0xbb5d,	// (0x000b8e4a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbb5d,	// (0x000b8e4a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000bd08c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000bd08c) list_single_cmail_header_detail_pane_g

0xa5e8,	// (0x000b78d5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa5e8,	// (0x000b78d5) list_single_cmail_header_detail_pane_t1

0xa65a,	// (0x000b7947) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa65a,	// (0x000b7947) list_single_cmail_header_editor_pane_bg

0xe30c,	// (0x000bb5f9) list_cmail_body_pane_g1

0xe877,	// (0x000bbb64) list_cmail_body_pane_t1

0xd6aa,	// (0x000ba997) list_single_cmail_header_editor_pane_bg_g1

0xaca5,	// (0x000b7f92) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6ba,	// (0x000ba9a7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b2,	// (0x000ba99f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8d4,	// (0x000babc1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6da,	// (0x000ba9c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ca,	// (0x000ba9b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d2,	// (0x000ba9bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac85,	// (0x000b7f72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84d2,	// (0x000b57bf) calenote_gesture_pane_ParamLimits

0x84d2,	// (0x000b57bf) calenote_gesture_pane

0x84f2,	// (0x000b57df) calenote_window_pane_ParamLimits

0x84f2,	// (0x000b57df) calenote_window_pane

0xe885,	// (0x000bbb72) popup_note_window_cp01

0x850e,	// (0x000b57fb) calenote_swipe_1_pane_ParamLimits

0x850e,	// (0x000b57fb) calenote_swipe_1_pane

0x7d92,	// (0x000b507f) calenote_swipe_2_pane_ParamLimits

0x7d92,	// (0x000b507f) calenote_swipe_2_pane

0xe66b,	// (0x000bb958) calenote_swipe_1_pane_g1_ParamLimits

0xe66b,	// (0x000bb958) calenote_swipe_1_pane_g1

0xe678,	// (0x000bb965) calenote_swipe_1_pane_g2_ParamLimits

0xe678,	// (0x000bb965) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000bcfb0) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000bcfb0) calenote_swipe_1_pane_g

0xe897,	// (0x000bbb84) calenote_swipe_1_pane_t1_ParamLimits

0xe897,	// (0x000bbb84) calenote_swipe_1_pane_t1

0xe66b,	// (0x000bb958) calenote_swipe_2_pane_g1_ParamLimits

0xe66b,	// (0x000bb958) calenote_swipe_2_pane_g1

0xe8b6,	// (0x000bbba3) calenote_swipe_2_pane_g2_ParamLimits

0xe8b6,	// (0x000bbba3) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000bd098) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000bd098) calenote_swipe_2_pane_g

0xe8c2,	// (0x000bbbaf) calenote_swipe_2_pane_t1_ParamLimits

0xe8c2,	// (0x000bbbaf) calenote_swipe_2_pane_t1

0x94ed,	// (0x000b67da) main_mup_navstr_pane

0x4a86,	// (0x000b1d73) main_mup3_pane_t7_ParamLimits

0x4a86,	// (0x000b1d73) main_mup3_pane_t7

0x9f7f,	// (0x000b726c) main_mp4_pane_g6_ParamLimits

0x9f7f,	// (0x000b726c) main_mp4_pane_g6

0xa123,	// (0x000b7410) main_image3_pane_t4_ParamLimits

0xa123,	// (0x000b7410) main_image3_pane_t4

0x8523,	// (0x000b5810) popup_navstr_preview_pane_ParamLimits

0x8523,	// (0x000b5810) popup_navstr_preview_pane

0x8533,	// (0x000b5820) scroll_navstr_pane_ParamLimits

0x8533,	// (0x000b5820) scroll_navstr_pane

0x94ed,	// (0x000b67da) bg_popup_preview_window_pane_cp04

0xe8e9,	// (0x000bbbd6) popup_navstr_preview_pane_t1

0x8547,	// (0x000b5834) scroll_navstr_pane_g1_ParamLimits

0x8547,	// (0x000b5834) scroll_navstr_pane_g1

0x855b,	// (0x000b5848) scroll_navstr_pane_t1_ParamLimits

0x855b,	// (0x000b5848) scroll_navstr_pane_t1

0xe88e,	// (0x000bbb7b) bg_button_pane_cp014

0xe88e,	// (0x000bbb7b) bg_button_pane_cp030

0x7c28,	// (0x000b4f15) list_double_fisheye_pane_g4_ParamLimits

0x7c28,	// (0x000b4f15) list_double_fisheye_pane_g4

0x7c34,	// (0x000b4f21) list_double_fisheye_pane_g5_ParamLimits

0x7c34,	// (0x000b4f21) list_double_fisheye_pane_g5

0xe837,	// (0x000bbb24) sp_fs_scroll_pane_cp03

0xe743,	// (0x000bba30) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe74f,	// (0x000bba3c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000bcfcd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe75b,	// (0x000bba48) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8462,	// (0x000b574f) sp_fs_scroll_pane_cp02

0xa9a8,	// (0x000b7c95) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9a8,	// (0x000b7c95) popup_sp_fs_calendar_preview_list_single_pane

0x94ed,	// (0x000b67da) main_cam6_pano_pane

0x953e,	// (0x000b682b) main_mup3_pane_ParamLimits

0x94ed,	// (0x000b67da) main_phacti_pane

0x77b7,	// (0x000b4aa4) bg_button_pane_cp11

0x77d1,	// (0x000b4abe) main_mobtv_info_pane_g2_ParamLimits

0x77d1,	// (0x000b4abe) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000bcf2d) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000bcf2d) main_mobtv_info_pane_g

0x79ac,	// (0x000b4c99) sc_clock_pane_t5_ParamLimits

0x79ac,	// (0x000b4c99) sc_clock_pane_t5

0x7a8a,	// (0x000b4d77) main_radioblah_pane_g1_ParamLimits

0xe5b7,	// (0x000bb8a4) main_radioblah_pane_t3_ParamLimits

0xe5b7,	// (0x000bb8a4) main_radioblah_pane_t3

0xe5cf,	// (0x000bb8bc) main_radioblah_pane_t4_ParamLimits

0xe5cf,	// (0x000bb8bc) main_radioblah_pane_t4

0x7ab2,	// (0x000b4d9f) main_radioblah_text_pane_ParamLimits

0x7ab2,	// (0x000b4d9f) main_radioblah_text_pane

0x7ac4,	// (0x000b4db1) main_radioblah_info_pane_g1_ParamLimits

0x7b5d,	// (0x000b4e4a) main_radioblah_info_pane_t4_ParamLimits

0x7b5d,	// (0x000b4e4a) main_radioblah_info_pane_t4

0x953e,	// (0x000b682b) main_sp_fs_calendar_pane

0x8572,	// (0x000b585f) main_phacti_pane_g1

0x857a,	// (0x000b5867) phacti_note_pane_ParamLimits

0x857a,	// (0x000b5867) phacti_note_pane

0xe900,	// (0x000bbbed) phacti_term_pane_ParamLimits

0xe900,	// (0x000bbbed) phacti_term_pane

0xe915,	// (0x000bbc02) phacti_note_pane_t1_ParamLimits

0xe915,	// (0x000bbc02) phacti_note_pane_t1

0xa671,	// (0x000b795e) phacti_term_pane_g1

0xa679,	// (0x000b7966) phacti_term_pane_t1_ParamLimits

0xa679,	// (0x000b7966) phacti_term_pane_t1

0xe92c,	// (0x000bbc19) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe934,	// (0x000bbc21) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000bd0a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe93c,	// (0x000bbc29) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe93c,	// (0x000bbc29) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe952,	// (0x000bbc3f) aid_popup_sp_fs_bg_corner_pane

0xcc7e,	// (0x000b9f6b) popup_sp_fs_calendar_preview_bg_pane_g1

0x94ed,	// (0x000b67da) popup_sp_fs_calendar_preview_bg_pane

0xe95a,	// (0x000bbc47) popup_sp_fs_calendar_preview_list_pane

0xc82d,	// (0x000b9b1a) bg_main_sp_fs_cale_pane_ParamLimits

0xc82d,	// (0x000b9b1a) bg_main_sp_fs_cale_pane

0xa6ac,	// (0x000b7999) listscroll_cale_mrui_pane_ParamLimits

0xa6ac,	// (0x000b7999) listscroll_cale_mrui_pane

0xa6c1,	// (0x000b79ae) listscroll_sp_fs_schedule_track_pane

0xa6ca,	// (0x000b79b7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa6ca,	// (0x000b79b7) main_sp_fs_ctrlbar_pane_cp01

0xe962,	// (0x000bbc4f) main_sp_fs_ribbon_pane

0xa6dd,	// (0x000b79ca) popup_sp_fs_cale_preview_window

0x85eb,	// (0x000b58d8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85eb,	// (0x000b58d8) list_single_sp_fs_schedule_track_pane

0x953e,	// (0x000b682b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x953e,	// (0x000b682b) bg_sp_fs_highlight_list_pane_cp03

0x85ff,	// (0x000b58ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85ff,	// (0x000b58ec) list_single_sp_fs_schedule_track_pane_g1

0x860b,	// (0x000b58f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x860b,	// (0x000b58f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000bd0a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000bd0a7) list_single_sp_fs_schedule_track_pane_g

0x8617,	// (0x000b5904) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8617,	// (0x000b5904) list_single_sp_fs_schedule_track_pane_t1

0x8639,	// (0x000b5926) sp_fs_schedule_track_pane_ParamLimits

0x8639,	// (0x000b5926) sp_fs_schedule_track_pane

0xe96a,	// (0x000bbc57) sp_fs_schedule_track_pane_g1

0xe972,	// (0x000bbc5f) sp_fs_schedule_track_pane_g2

0xe97a,	// (0x000bbc67) sp_fs_schedule_track_pane_g3

0xe982,	// (0x000bbc6f) sp_fs_schedule_track_pane_g4

0xe98a,	// (0x000bbc77) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000bd0ac) sp_fs_schedule_track_pane_g

0xd6aa,	// (0x000ba997) bg_sp_fs_schedule_viewer_highlight_g1

0xaca5,	// (0x000b7f92) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b2,	// (0x000ba99f) bg_sp_fs_schedule_viewer_highlight_g3

0xd6ba,	// (0x000ba9a7) bg_sp_fs_schedule_viewer_highlight_g4

0xd8d4,	// (0x000babc1) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ca,	// (0x000ba9b7) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d2,	// (0x000ba9bf) bg_sp_fs_schedule_viewer_highlight_g7

0xd6da,	// (0x000ba9c7) bg_sp_fs_schedule_viewer_highlight_g8

0xac85,	// (0x000b7f72) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000bd0b7) bg_sp_fs_schedule_viewer_highlight_g

0x94ed,	// (0x000b67da) bg_main_sp_fs_ribbon_pane

0x864e,	// (0x000b593b) main_sp_fs_ribbon_pane_g1

0xe992,	// (0x000bbc7f) main_sp_fs_ribbon_pane_t1

0x8657,	// (0x000b5944) main_sp_fs_ribbon_pane_t2

0xe9a1,	// (0x000bbc8e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000bd0ca) main_sp_fs_ribbon_pane_t

0xe9b0,	// (0x000bbc9d) main_sp_fs_ribbon_scheduler_pane

0xe9b8,	// (0x000bbca5) bg_main_sp_fs_ribbon_pane_g1

0xe9c1,	// (0x000bbcae) bg_main_sp_fs_ribbon_pane_g2

0xe9ca,	// (0x000bbcb7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000bd0d1) bg_main_sp_fs_ribbon_pane_g

0xe9d2,	// (0x000bbcbf) main_sp_fs_ribbon_scheduler_pane_g1

0xe9db,	// (0x000bbcc8) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e4,	// (0x000bbcd1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000bd0d8) main_sp_fs_ribbon_scheduler_pane_g

0xe9ed,	// (0x000bbcda) list_cale_mrui_pane

0x8666,	// (0x000b5953) sp_fs_scroll_pane_cp07_ParamLimits

0x8666,	// (0x000b5953) sp_fs_scroll_pane_cp07

0x8682,	// (0x000b596f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8682,	// (0x000b596f) bg_sp_fs_schedule_viewer_highlight

0xe9fa,	// (0x000bbce7) list_single_sp_fs_schedule_track_pane_cp01

0xea02,	// (0x000bbcef) list_sp_fs_schedule_track_pane

0xea0a,	// (0x000bbcf7) sp_fs_scroll_pane_cp06_ParamLimits

0xea0a,	// (0x000bbcf7) sp_fs_scroll_pane_cp06

0xcc7e,	// (0x000b9f6b) bgmain_sp_fs_calendar_pane_g1

0x8694,	// (0x000b5981) list_single_cale_mrui_pane_ParamLimits

0x8694,	// (0x000b5981) list_single_cale_mrui_pane

0xa6ef,	// (0x000b79dc) list_single_cale_mrui_row_pane_ParamLimits

0xa6ef,	// (0x000b79dc) list_single_cale_mrui_row_pane

0xa705,	// (0x000b79f2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa705,	// (0x000b79f2) list_single_cale_mrui_row_pane_g1

0xa731,	// (0x000b7a1e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa731,	// (0x000b7a1e) list_single_cale_mrui_row_pane_t1

0x86a9,	// (0x000b5996) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86a9,	// (0x000b5996) list_single_cale_mrui_row_pane_t2

0xa743,	// (0x000b7a30) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa743,	// (0x000b7a30) list_single_cale_mrui_row_pane_t3

0xa772,	// (0x000b7a5f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa772,	// (0x000b7a5f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000bd0e6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000bd0e6) list_single_cale_mrui_row_pane_t

0x8711,	// (0x000b59fe) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8711,	// (0x000b59fe) list_single_cmail_header_editor_pane_bg_cp01

0x8735,	// (0x000b5a22) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8735,	// (0x000b5a22) list_single_cmail_header_editor_pane_bg_cp02

0x8753,	// (0x000b5a40) main_radioblah_text_pane_t1_ParamLimits

0x8753,	// (0x000b5a40) main_radioblah_text_pane_t1

0xea29,	// (0x000bbd16) cam6_indi_pane_cp01

0xea31,	// (0x000bbd1e) cam6_mode_pane_cp01

0xea39,	// (0x000bbd26) cam6_pano_pane

0xea42,	// (0x000bbd2f) cam6_zoom_pane_cp01

0xea4c,	// (0x000bbd39) cam6_pano_image_pane

0xea55,	// (0x000bbd42) cam6_pano_pane_g1

0xe30c,	// (0x000bb5f9) cam6_pano_pane_g2

0xea5e,	// (0x000bbd4b) cam6_pano_pane_g3

0xea67,	// (0x000bbd54) cam6_pano_pane_g4

0xd220,	// (0x000ba50d) cam6_pano_pane_g5

0xea70,	// (0x000bbd5d) cam6_pano_pane_g6

0xea78,	// (0x000bbd65) cam6_pano_pane_g7

0xea80,	// (0x000bbd6d) cam6_pano_pane_g8

0xea89,	// (0x000bbd76) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000bd0ef) cam6_pano_pane_g

0x94ed,	// (0x000b67da) main_browser_tag_pane

0xe8e1,	// (0x000bbbce) grid_navstr_albumart_pane

0xea94,	// (0x000bbd81) cell_navstr_albumart_pane_ParamLimits

0xea94,	// (0x000bbd81) cell_navstr_albumart_pane

0xeab3,	// (0x000bbda0) cell_navstr_albumart_pane_g1

0xc63a,	// (0x000b9927) cell_navstr_albumart_pane_g2

0xc64a,	// (0x000b9937) cell_navstr_albumart_pane_g3

0xc642,	// (0x000b992f) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000bd102) cell_navstr_albumart_pane_g

0x876e,	// (0x000b5a5b) bt_list_pane_ParamLimits

0x876e,	// (0x000b5a5b) bt_list_pane

0x8784,	// (0x000b5a71) bt_list_pane_t1

0x8793,	// (0x000b5a80) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000bd10b) bt_list_pane_t

0x94ed,	// (0x000b67da) main_cale_prevew_pane

0x87a2,	// (0x000b5a8f) popup_cale_preview_window_ParamLimits

0x87a2,	// (0x000b5a8f) popup_cale_preview_window

0x953e,	// (0x000b682b) bg_popup_preview_window_pane_cp05_ParamLimits

0x953e,	// (0x000b682b) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x000bbda8) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x000bbda8) list_cale_preview_pane

0x87bf,	// (0x000b5aac) list_double_cale_preview_pane_ParamLimits

0x87bf,	// (0x000b5aac) list_double_cale_preview_pane

0x87d3,	// (0x000b5ac0) list_single_cale_preview_pane_ParamLimits

0x87d3,	// (0x000b5ac0) list_single_cale_preview_pane

0x87eb,	// (0x000b5ad8) list_single_cale_preview_pane_g1

0x87f3,	// (0x000b5ae0) list_single_cale_preview_pane_t1_ParamLimits

0x87f3,	// (0x000b5ae0) list_single_cale_preview_pane_t1

0x8808,	// (0x000b5af5) list_double_cale_preview_pane_g1

0x8810,	// (0x000b5afd) list_double_cale_preview_pane_t1_ParamLimits

0x8810,	// (0x000b5afd) list_double_cale_preview_pane_t1

0x8825,	// (0x000b5b12) list_double_cale_preview_pane_t2_ParamLimits

0x8825,	// (0x000b5b12) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000bd110) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000bd110) list_double_cale_preview_pane_t

0x94ed,	// (0x000b67da) main_ezdial_pane

0x953e,	// (0x000b682b) main_sp_fs_email_pane_ParamLimits

0x7dce,	// (0x000b50bb) cmail_ddmenu_btn01_pane_ParamLimits

0x7dce,	// (0x000b50bb) cmail_ddmenu_btn01_pane

0x7de1,	// (0x000b50ce) cmail_ddmenu_btn02_pane_ParamLimits

0x7de1,	// (0x000b50ce) cmail_ddmenu_btn02_pane

0x7e04,	// (0x000b50f1) cmail_ddmenu_btn03_pane_ParamLimits

0x7e04,	// (0x000b50f1) cmail_ddmenu_btn03_pane

0x7e2f,	// (0x000b511c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e53,	// (0x000b5140) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x846c,	// (0x000b5759) list_cmail_body_pane_ParamLimits

0xe861,	// (0x000bbb4e) bg_button_pane_cp12

0xe86a,	// (0x000bbb57) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86a,	// (0x000bbb57) list_single_cmail_header_detail_pane_g3

0xa636,	// (0x000b7923) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa636,	// (0x000b7923) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000bd093) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000bd093) list_single_cmail_header_detail_pane_t

0xa68e,	// (0x000b797b) phacti_term_pane_t2_ParamLimits

0xa68e,	// (0x000b797b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000bd09d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000bd09d) phacti_term_pane_t

0xeac7,	// (0x000bbdb4) aid_size_list_single_double

0x883d,	// (0x000b5b2a) popup_ezdial_listscroll_window

0x8859,	// (0x000b5b46) popup_number_entry_window_cp01

0xaa48,	// (0x000b7d35) bg_popup_call_pane_cp09

0xead3,	// (0x000bbdc0) ezdial_list_pane

0xeadb,	// (0x000bbdc8) scroll_pane_cp23

0xc82d,	// (0x000b9b1a) bg_button_pane_cp028_ParamLimits

0xc82d,	// (0x000b9b1a) bg_button_pane_cp028

0x8867,	// (0x000b5b54) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8867,	// (0x000b5b54) cmail_ddmenu_btn01_pane_g1

0x8876,	// (0x000b5b63) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8876,	// (0x000b5b63) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000bd115) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000bd115) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x000bbdd0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x000bbdd0) cmail_ddmenu_btn01_pane_t1

0xc82d,	// (0x000b9b1a) bg_button_pane_cp029_ParamLimits

0xc82d,	// (0x000b9b1a) bg_button_pane_cp029

0x888c,	// (0x000b5b79) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x888c,	// (0x000b5b79) cmail_ddmenu_btn02_pane_g1

0x88a7,	// (0x000b5b94) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88a7,	// (0x000b5b94) cmail_ddmenu_btn02_pane_t1

0x953e,	// (0x000b682b) bg_button_pane_cp031_ParamLimits

0x953e,	// (0x000b682b) bg_button_pane_cp031

0x888c,	// (0x000b5b79) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x888c,	// (0x000b5b79) cmail_ddmenu_btn03_pane_g1

0x88a7,	// (0x000b5b94) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88a7,	// (0x000b5b94) cmail_ddmenu_btn03_pane_t1

0x5666,	// (0x000b2953) cell_dialer2_keypad_pane_t1_ParamLimits

0x5680,	// (0x000b296d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5680,	// (0x000b296d) cell_dialer2_keypad_pane_t1_copy1

0x760e,	// (0x000b48fb) ncimui_group_button_pane

0x953e,	// (0x000b682b) main_sp_fs_calendar_pane_ParamLimits

0xe846,	// (0x000bbb33) list_single_cmail_header_caption_pane_ParamLimits

0xa6a3,	// (0x000b7990) aid_recal_txt_sm_pane

0x94ed,	// (0x000b67da) mian_recal_day_pane

0xa6dd,	// (0x000b79ca) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf9,	// (0x000bbde6) list_recal_day_pane

0xa7bd,	// (0x000b7aaa) list_single_recal_day_pane_ParamLimits

0xa7bd,	// (0x000b7aaa) list_single_recal_day_pane

0xeb20,	// (0x000bbe0d) list_single_recal_day_pane_g1_ParamLimits

0xeb20,	// (0x000bbe0d) list_single_recal_day_pane_g1

0xa7cf,	// (0x000b7abc) list_single_recal_day_pane_g2_ParamLimits

0xa7cf,	// (0x000b7abc) list_single_recal_day_pane_g2

0xa7db,	// (0x000b7ac8) list_single_recal_day_pane_g3_ParamLimits

0xa7db,	// (0x000b7ac8) list_single_recal_day_pane_g3

0x88ce,	// (0x000b5bbb) list_single_recal_day_pane_g4_ParamLimits

0x88ce,	// (0x000b5bbb) list_single_recal_day_pane_g4

0xa7e7,	// (0x000b7ad4) list_single_recal_day_pane_g5_ParamLimits

0xa7e7,	// (0x000b7ad4) list_single_recal_day_pane_g5

0xa7f3,	// (0x000b7ae0) list_single_recal_day_pane_g6_ParamLimits

0xa7f3,	// (0x000b7ae0) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000bd124) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000bd124) list_single_recal_day_pane_g

0xa807,	// (0x000b7af4) list_single_recal_day_pane_t1

0xa819,	// (0x000b7b06) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000bd12f) list_single_recal_day_pane_t

0x88e6,	// (0x000b5bd3) ncimui_query_button_pane_ParamLimits

0x88e6,	// (0x000b5bd3) ncimui_query_button_pane

0x88f6,	// (0x000b5be3) ncimui_query_button_pane_t1_ParamLimits

0x88f6,	// (0x000b5be3) ncimui_query_button_pane_t1

0xeb2c,	// (0x000bbe19) ncimui_query_button_pane_t2_ParamLimits

0xeb2c,	// (0x000bbe19) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000bd134) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000bd134) ncimui_query_button_pane_t

0x8909,	// (0x000b5bf6) query_button_pane_ParamLimits

0x8909,	// (0x000b5bf6) query_button_pane

0x94ed,	// (0x000b67da) bg_button_pane_cp0028

0xeb3f,	// (0x000bbe2c) query_button_pane_t1

0x3635,	// (0x000b0922) main_tport_pane_ParamLimits

0x831c,	// (0x000b5609) bg_popup_window_pane_cp01_ParamLimits

0x831c,	// (0x000b5609) bg_popup_window_pane_cp01

0x8337,	// (0x000b5624) heading_pane_cp08_ParamLimits

0x8337,	// (0x000b5624) heading_pane_cp08

0x834a,	// (0x000b5637) heading_pane_cp07_ParamLimits

0x834a,	// (0x000b5637) heading_pane_cp07

0x83fb,	// (0x000b56e8) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000bd080) cell_tport_appsw_pane_g

0x9d84,	// (0x000b7071) input_candi_list_open_g1

0xae59,	// (0x000b8146) list_cale_time_pane_g6_ParamLimits

0xae59,	// (0x000b8146) list_cale_time_pane_g6

0x443f,	// (0x000b172c) aid_size_touch_calib_1_ParamLimits

0x443f,	// (0x000b172c) aid_size_touch_calib_1

0x4451,	// (0x000b173e) aid_size_touch_calib_2_ParamLimits

0x4451,	// (0x000b173e) aid_size_touch_calib_2

0x4469,	// (0x000b1756) aid_size_touch_calib_3_ParamLimits

0x4469,	// (0x000b1756) aid_size_touch_calib_3

0x4487,	// (0x000b1774) aid_size_touch_calib_4_ParamLimits

0x4487,	// (0x000b1774) aid_size_touch_calib_4

0x449f,	// (0x000b178c) main_touch_calib_button_group_pane_ParamLimits

0x449f,	// (0x000b178c) main_touch_calib_button_group_pane

0x44b7,	// (0x000b17a4) main_touch_calib_pane_g1_ParamLimits

0x44c9,	// (0x000b17b6) main_touch_calib_pane_g2_ParamLimits

0x44db,	// (0x000b17c8) main_touch_calib_pane_g3_ParamLimits

0x44ed,	// (0x000b17da) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000bca3e) main_touch_calib_pane_g_ParamLimits

0x44ff,	// (0x000b17ec) main_touch_calib_pane_t1_ParamLimits

0x4519,	// (0x000b1806) main_touch_calib_pane_t2_ParamLimits

0x4533,	// (0x000b1820) main_touch_calib_pane_t3_ParamLimits

0x4547,	// (0x000b1834) main_touch_calib_pane_t4_ParamLimits

0x455d,	// (0x000b184a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000bca47) main_touch_calib_pane_t_ParamLimits

0xcfb6,	// (0x000ba2a3) list_single_fp_cale_pane_g3_ParamLimits

0xcfb6,	// (0x000ba2a3) list_single_fp_cale_pane_g3

0xa1ce,	// (0x000b74bb) bg_button_pane_cp012_ParamLimits

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp03_ParamLimits

0x6675,	// (0x000b3962) cell_vitu2_function_top_pane_g1_ParamLimits

0xa1ce,	// (0x000b74bb) bg_vkb2_func_pane_cp04_ParamLimits

0x759c,	// (0x000b4889) main_ncimui_button_group_pane_ParamLimits

0x759c,	// (0x000b4889) main_ncimui_button_group_pane

0x75fc,	// (0x000b48e9) main_ncimui_pane_t3_ParamLimits

0x75fc,	// (0x000b48e9) main_ncimui_pane_t3

0xe8f7,	// (0x000bbbe4) phacti_button_group_pane

0xeac7,	// (0x000bbdb4) aid_size_list_single_double_ParamLimits

0x883d,	// (0x000b5b2a) popup_ezdial_listscroll_window_ParamLimits

0x8859,	// (0x000b5b46) popup_number_entry_window_cp01_ParamLimits

0x891c,	// (0x000b5c09) phacti_button_pane_ParamLimits

0x891c,	// (0x000b5c09) phacti_button_pane

0x94ed,	// (0x000b67da) bg_button_pane_cp14

0xeb4d,	// (0x000bbe3a) phacti_button_pane_t1

0x892d,	// (0x000b5c1a) main_touch_calib_button_pane_ParamLimits

0x892d,	// (0x000b5c1a) main_touch_calib_button_pane

0xa892,	// (0x000b7b7f) bg_button_pane_cp18_ParamLimits

0xa892,	// (0x000b7b7f) bg_button_pane_cp18

0xeb5b,	// (0x000bbe48) main_touch_calib_button_pane_t1_ParamLimits

0xeb5b,	// (0x000bbe48) main_touch_calib_button_pane_t1

0xeb71,	// (0x000bbe5e) main_touch_calib_button_pane_t2_ParamLimits

0xeb71,	// (0x000bbe5e) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000bd139) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000bd139) main_touch_calib_button_pane_t

0x94ed,	// (0x000b67da) cell_ncimui_button_pane

0x94ed,	// (0x000b67da) bg_button_pane_cp032

0xeb8f,	// (0x000bbe7c) cell_ncimui_button_pane_t1

0xa101,	// (0x000b73ee) image3_infobar_pane_ParamLimits

0xa101,	// (0x000b73ee) image3_infobar_pane

0x79d8,	// (0x000b4cc5) fs_bigclock_status_pane_ParamLimits

0x79d8,	// (0x000b4cc5) fs_bigclock_status_pane

0x79e5,	// (0x000b4cd2) main_fs_bigclock_clock_pane_ParamLimits

0x79e5,	// (0x000b4cd2) main_fs_bigclock_clock_pane

0x7a0f,	// (0x000b4cfc) main_fs_bigclock_indi_pane_ParamLimits

0x7a0f,	// (0x000b4cfc) main_fs_bigclock_indi_pane

0x7a4d,	// (0x000b4d3a) main_fs_bigclock_swipe_pane_ParamLimits

0x7a4d,	// (0x000b4d3a) main_fs_bigclock_swipe_pane

0x94ed,	// (0x000b67da) main_fs_clock_dumped_data

0xe419,	// (0x000bb706) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe419,	// (0x000bb706) list_single_fs_bigclock_indicator_pane_g1

0xe443,	// (0x000bb730) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe443,	// (0x000bb730) list_single_fs_bigclock_indicator_pane_g2

0xe45d,	// (0x000bb74a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe45d,	// (0x000bb74a) list_single_fs_bigclock_indicator_pane_g3

0xe477,	// (0x000bb764) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe477,	// (0x000bb764) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000bcf61) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000bcf61) list_single_fs_bigclock_indicator_pane_g

0xe4a2,	// (0x000bb78f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a2,	// (0x000bb78f) list_single_fs_bigclock_indicator_pane_t1

0xe4ca,	// (0x000bb7b7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ca,	// (0x000bb7b7) list_single_fs_bigclock_indicator_pane_t2

0xe4f2,	// (0x000bb7df) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f2,	// (0x000bb7df) list_single_fs_bigclock_indicator_pane_t3

0xe51a,	// (0x000bb807) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51a,	// (0x000bb807) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000bcf6c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000bcf6c) list_single_fs_bigclock_indicator_pane_t

0xeb9d,	// (0x000bbe8a) image3_infobar_fav_pane_ParamLimits

0xeb9d,	// (0x000bbe8a) image3_infobar_fav_pane

0xebad,	// (0x000bbe9a) image3_infobar_loc_pane_ParamLimits

0xebad,	// (0x000bbe9a) image3_infobar_loc_pane

0xebc3,	// (0x000bbeb0) image3_infobar_time_pane_ParamLimits

0xebc3,	// (0x000bbeb0) image3_infobar_time_pane

0xcc7e,	// (0x000b9f6b) image3_infobar_time_pane_g1

0xebd3,	// (0x000bbec0) image3_infobar_time_pane_t1

0xcc7e,	// (0x000b9f6b) image3_infobar_loc_pane_g1

0xebe1,	// (0x000bbece) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000bd13e) image3_infobar_loc_pane_g

0xebe9,	// (0x000bbed6) image3_infobar_loc_pane_t1

0xcc7e,	// (0x000b9f6b) image3_infobar_fav_pane_g1

0xebf7,	// (0x000bbee4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000bd143) image3_infobar_fav_pane_g

0xebff,	// (0x000bbeec) fs_bigclock_status_battery_pane

0xec08,	// (0x000bbef5) fs_bigclock_status_signal_pane

0xec11,	// (0x000bbefe) fs_bigclock_status_title_pane

0xec1a,	// (0x000bbf07) fs_bigclock_status_signal_pane_g1

0xec23,	// (0x000bbf10) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000bd148) fs_bigclock_status_signal_pane_g

0xec2b,	// (0x000bbf18) fs_bigclock_status_battery_pane_g1

0xec34,	// (0x000bbf21) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000bd14d) fs_bigclock_status_battery_pane_g

0xec3c,	// (0x000bbf29) fs_bigclock_status_title_pane_t1

0xcc7e,	// (0x000b9f6b) main_fs_bigclock_clock_pane_g1

0xec4a,	// (0x000bbf37) main_fs_bigclock_clock_pane_g2

0xec55,	// (0x000bbf42) main_fs_bigclock_clock_pane_g3

0xec55,	// (0x000bbf42) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000bd152) main_fs_bigclock_clock_pane_g

0xec61,	// (0x000bbf4e) main_fs_bigclock_clock_pane_t1

0x8942,	// (0x000b5c2f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000bd15b) main_fs_bigclock_clock_pane_t

0x8951,	// (0x000b5c3e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8951,	// (0x000b5c3e) list_single_fs_bigclock_indicator_pane

0x8962,	// (0x000b5c4f) list_single_fs_bigclock_pane_ParamLimits

0x8962,	// (0x000b5c4f) list_single_fs_bigclock_pane

0xec78,	// (0x000bbf65) main_fs_bigclock_indicator_pane_t1

0xec87,	// (0x000bbf74) list_single_fs_bigclock_pane_g1

0xec8f,	// (0x000bbf7c) list_single_fs_bigclock_pane_t1

0xcc7e,	// (0x000b9f6b) main_fs_bigclock_swipe_pane_g1

0xecd2,	// (0x000bbfbf) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000bd16c) main_fs_bigclock_swipe_pane_g

0xecda,	// (0x000bbfc7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecda,	// (0x000bbfc7) main_fs_bigclock_swipe_pane_t1

0x2352,	// (0x000af63f) call_type_pane_ParamLimits

0x94ed,	// (0x000b67da) main_btmg_pane

0xbb69,	// (0x000b8e56) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbb69,	// (0x000b8e56) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000bd0df) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000bd0df) list_single_cale_mrui_row_pane_g

0xa7ab,	// (0x000b7a98) list_recal_vselct_arw_lo_pane

0xeb18,	// (0x000bbe05) list_recal_vselct_arw_up_pane

0xa7b3,	// (0x000b7aa0) list_recal_vselct_pane

0x89c5,	// (0x000b5cb2) btmg_button_pane

0x89cf,	// (0x000b5cbc) main_btmg_pane_g1

0x94ed,	// (0x000b67da) bg_button_pane_cp044

0xecf7,	// (0x000bbfe4) btmg_button_pane_t1

0xc819,	// (0x000b9b06) aid_listscroll_gen

0x953e,	// (0x000b682b) main_cntbar_detail_pane

0xe827,	// (0x000bbb14) list_cmail_folder_pane

0xe837,	// (0x000bbb24) sp_fs_scroll_pane_cp03_ParamLimits

0xbb75,	// (0x000b8e62) list_single_fs_dyc_pane_cp01_ParamLimits

0xbb75,	// (0x000b8e62) list_single_fs_dyc_pane_cp01

0xed05,	// (0x000bbff2) aid_size_cmail_indent

0xa82b,	// (0x000b7b18) list_single_dyc_row_pane_cp01

0x8a09,	// (0x000b5cf6) cntbar_detail_list_pane_ParamLimits

0x8a09,	// (0x000b5cf6) cntbar_detail_list_pane

0x8a5b,	// (0x000b5d48) main_cntbar_detail_cont_pane_ParamLimits

0x8a5b,	// (0x000b5d48) main_cntbar_detail_cont_pane

0x2275,	// (0x000af562) scroll_pane_cp032_ParamLimits

0x2275,	// (0x000af562) scroll_pane_cp032

0x8a6f,	// (0x000b5d5c) cntbar_detail_list_event_pane_ParamLimits

0x8a6f,	// (0x000b5d5c) cntbar_detail_list_event_pane

0x8a1b,	// (0x000b5d08) cntbar_detail_list_shct_pane

0xacf3,	// (0x000b7fe0) aid_list_gen

0xed0e,	// (0x000bbffb) aid_scroll

0xed17,	// (0x000bc004) aid_size_touch_scroll_bar

0x6d6a,	// (0x000b4057) aid_list_double

0xed20,	// (0x000bc00d) aid_list_single

0x6d58,	// (0x000b4045) aid_list_single_lg

0xa834,	// (0x000b7b21) aid_list_z_g_a_sm

0xbb8f,	// (0x000b8e7c) aid_list_z_g_d

0x8a7f,	// (0x000b5d6c) aid_txt_z_prm

0x8a8f,	// (0x000b5d7c) aid_txt_z_prm_cp01

0x8a9d,	// (0x000b5d8a) aid_txt_z_sec

0x8aab,	// (0x000b5d98) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8aab,	// (0x000b5d98) main_cntbar_detail_cont_pane_g1

0x8abf,	// (0x000b5dac) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8abf,	// (0x000b5dac) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000bd171) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000bd171) main_cntbar_detail_cont_pane_g

0xed29,	// (0x000bc016) main_cntbar_detail_cont_pane_t1

0xed37,	// (0x000bc024) main_cntbar_detail_cont_pane_t2

0xed45,	// (0x000bc032) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000bd176) main_cntbar_detail_cont_pane_t

0x8acf,	// (0x000b5dbc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8acf,	// (0x000b5dbc) cell_cntbar_detail_list_shct_pane

0xed53,	// (0x000bc040) cntbar_detail_list_shct_pane_g1

0xed5c,	// (0x000bc049) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000bd17d) cntbar_detail_list_shct_pane_g

0x8ae1,	// (0x000b5dce) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ae1,	// (0x000b5dce) cntbar_detail_list_event_pane_g1

0x8aed,	// (0x000b5dda) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aed,	// (0x000b5dda) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000bd182) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000bd182) cntbar_detail_list_event_pane_g

0x8b5b,	// (0x000b5e48) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b5b,	// (0x000b5e48) cntbar_detail_list_event_pane_t1

0x8b70,	// (0x000b5e5d) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b70,	// (0x000b5e5d) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000bd18f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000bd18f) cntbar_detail_list_event_pane_t

0xcc7e,	// (0x000b9f6b) cell_cntbar_detail_list_shct_pane_g1

0x26f8,	// (0x000af9e5) navi_pane_mv_g3

0x953e,	// (0x000b682b) main_cntbar_detail_pane_ParamLimits

0x94ed,	// (0x000b67da) main_notif_wgt_pane

0x9f19,	// (0x000b7206) aid_tch_main_mp4_pane_g4

0xa0f7,	// (0x000b73e4) popup_slider_window_cp02

0xa7a1,	// (0x000b7a8e) list_recal_day_event_pane

0x89d9,	// (0x000b5cc6) cntbar_detail_btn_pane_ParamLimits

0x89d9,	// (0x000b5cc6) cntbar_detail_btn_pane

0x89f1,	// (0x000b5cde) cntbar_detail_btn_pane_cp01_ParamLimits

0x89f1,	// (0x000b5cde) cntbar_detail_btn_pane_cp01

0x8a1b,	// (0x000b5d08) cntbar_detail_list_shct_pane_ParamLimits

0x8a2b,	// (0x000b5d18) cntbar_detail_pane_g1_ParamLimits

0x8a2b,	// (0x000b5d18) cntbar_detail_pane_g1

0x8a3f,	// (0x000b5d2c) cntbar_detail_pane_t1_ParamLimits

0x8a3f,	// (0x000b5d2c) cntbar_detail_pane_t1

0x8af9,	// (0x000b5de6) cntbar_detail_list_event_pane_g3_ParamLimits

0x8af9,	// (0x000b5de6) cntbar_detail_list_event_pane_g3

0x8b11,	// (0x000b5dfe) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b11,	// (0x000b5dfe) cntbar_detail_list_event_pane_g4

0x8b29,	// (0x000b5e16) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b29,	// (0x000b5e16) cntbar_detail_list_event_pane_g5

0x8b41,	// (0x000b5e2e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b41,	// (0x000b5e2e) cntbar_detail_list_event_pane_g6

0x8b85,	// (0x000b5e72) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b85,	// (0x000b5e72) cntbar_detail_list_event_pane_t3

0x8b97,	// (0x000b5e84) popup_notif_wgt_window_ParamLimits

0x8b97,	// (0x000b5e84) popup_notif_wgt_window

0x8bb0,	// (0x000b5e9d) popup_submenu_window_cp01_ParamLimits

0x8bb0,	// (0x000b5e9d) popup_submenu_window_cp01

0xaa48,	// (0x000b7d35) bg_popup_window_pane_cp10

0xed65,	// (0x000bc052) listscroll_notif_wgt_pane

0xed77,	// (0x000bc064) list_notif_wgt_window

0xed80,	// (0x000bc06d) scroll_pane_cp033

0x8bc4,	// (0x000b5eb1) list_notif_wgt_row_pane_ParamLimits

0x8bc4,	// (0x000b5eb1) list_notif_wgt_row_pane

0xed89,	// (0x000bc076) aid_size_list_notif_wgt_del

0xed96,	// (0x000bc083) list_notif_wgt_row_pane_g1

0xeda2,	// (0x000bc08f) list_notif_wgt_row_pane_g2

0xedb6,	// (0x000bc0a3) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000bd196) list_notif_wgt_row_pane_g

0xedc3,	// (0x000bc0b0) list_notif_wgt_row_pane_t1

0xedd9,	// (0x000bc0c6) list_notif_wgt_row_pane_t2

0xedeb,	// (0x000bc0d8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000bd19d) list_notif_wgt_row_pane_t

0xd8ee,	// (0x000babdb) list_recal_day_event_pane_g1

0xedfd,	// (0x000bc0ea) list_recal_day_event_pane_t1

0x94ed,	// (0x000b67da) bg_button_pane_cp045

0xee0c,	// (0x000bc0f9) cntbar_detail_btn_pane_t1

0xc82d,	// (0x000b9b1a) main_callh_pane_ParamLimits

0xc82d,	// (0x000b9b1a) main_callh_pane

0x94ed,	// (0x000b67da) main_coverflow0_pane

0x94ed,	// (0x000b67da) main_wgtman_pane

0x7a65,	// (0x000b4d52) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a65,	// (0x000b4d52) main_fs_bigclock_unlock_btn_pane

0x83f3,	// (0x000b56e0) bg_button_pane_cp16

0x8403,	// (0x000b56f0) cell_tport_appsw_pane_g3

0x8bd4,	// (0x000b5ec1) cf0_flow_pane_ParamLimits

0x8bd4,	// (0x000b5ec1) cf0_flow_pane

0xee1a,	// (0x000bc107) listscroll_cf0_pane

0xee25,	// (0x000bc112) main_cf0_pane_g1

0x8be9,	// (0x000b5ed6) main_cf0_pane_t1_ParamLimits

0x8be9,	// (0x000b5ed6) main_cf0_pane_t1

0x8c00,	// (0x000b5eed) main_cf0_pane_t2_ParamLimits

0x8c00,	// (0x000b5eed) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000bd1a9) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000bd1a9) main_cf0_pane_t

0xee37,	// (0x000bc124) scroll_pane_cp11

0x8c17,	// (0x000b5f04) cf0_flow_pane_g1

0x8c23,	// (0x000b5f10) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000bd1ae) cf0_flow_pane_g

0x8c2f,	// (0x000b5f1c) cf0_flow_pane_t1

0x94ed,	// (0x000b67da) main_call6_pane

0x94ed,	// (0x000b67da) main_calllock_pane

0x8c41,	// (0x000b5f2e) call6_btn_grp_pane_ParamLimits

0x8c41,	// (0x000b5f2e) call6_btn_grp_pane

0x8c5b,	// (0x000b5f48) call6_pane_g1_ParamLimits

0x8c5b,	// (0x000b5f48) call6_pane_g1

0x8c71,	// (0x000b5f5e) popup_call6_1st_window_ParamLimits

0x8c71,	// (0x000b5f5e) popup_call6_1st_window

0x8c82,	// (0x000b5f6f) popup_call6_2nd_window_ParamLimits

0x8c82,	// (0x000b5f6f) popup_call6_2nd_window

0x8c93,	// (0x000b5f80) cell_call6_btn_pane_ParamLimits

0x8c93,	// (0x000b5f80) cell_call6_btn_pane

0xaa48,	// (0x000b7d35) bg_popup_call2_in_pane_cp03

0xee42,	// (0x000bc12f) popup_call6_1st_window_g1

0xee4a,	// (0x000bc137) popup_call6_1st_window_g2

0xee52,	// (0x000bc13f) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000bd1b3) popup_call6_1st_window_g

0xee5a,	// (0x000bc147) popup_call6_1st_window_t1

0xee69,	// (0x000bc156) popup_call6_1st_window_t2

0xee79,	// (0x000bc166) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000bd1ba) popup_call6_1st_window_t

0xaa48,	// (0x000b7d35) bg_popup_call2_in_pane_cp04

0xee42,	// (0x000bc12f) popup_call6_2nd_window_g1

0xee4a,	// (0x000bc137) popup_call6_2nd_window_g2

0xee52,	// (0x000bc13f) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000bd1b3) popup_call6_2nd_window_g

0xee5a,	// (0x000bc147) popup_call6_2nd_window_t1

0x94ed,	// (0x000b67da) bg_button_pane_cp15

0xee89,	// (0x000bc176) cell_call6_btn_pane_g1

0xee92,	// (0x000bc17f) cell_call6_btn_pane_t1

0x8ca7,	// (0x000b5f94) listscroll_wgtman_pane_ParamLimits

0x8ca7,	// (0x000b5f94) listscroll_wgtman_pane

0x8cc8,	// (0x000b5fb5) wgtman_btn_pane_ParamLimits

0x8cc8,	// (0x000b5fb5) wgtman_btn_pane

0xb244,	// (0x000b8531) aid_scroll_copy1

0xeea1,	// (0x000bc18e) list_wgtman_pane

0x8d0b,	// (0x000b5ff8) wgtman_btn_pane_g1_ParamLimits

0x8d0b,	// (0x000b5ff8) wgtman_btn_pane_g1

0x8d37,	// (0x000b6024) wgtman_btn_pane_t1_ParamLimits

0x8d37,	// (0x000b6024) wgtman_btn_pane_t1

0xeeab,	// (0x000bc198) wgtman_btn_pane_t2_ParamLimits

0xeeab,	// (0x000bc198) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000bd1c1) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000bd1c1) wgtman_btn_pane_t

0x8d74,	// (0x000b6061) listrow_wgtman_pane_ParamLimits

0x8d74,	// (0x000b6061) listrow_wgtman_pane

0x8d86,	// (0x000b6073) listrow_wgtman_pane_g1

0x8d93,	// (0x000b6080) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000bd1c6) listrow_wgtman_pane_g

0x8db1,	// (0x000b609e) listrow_wgtman_pane_t1

0x8dc9,	// (0x000b60b6) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000bd1cb) listrow_wgtman_pane_t

0x8def,	// (0x000b60dc) wait_bar_pane_cp09

0xeec2,	// (0x000bc1af) main_calllock_btn_pane

0xeecc,	// (0x000bc1b9) main_calllock_pane_g1

0x94ed,	// (0x000b67da) bg_button_pane_cp17

0xeed8,	// (0x000bc1c5) main_calllock_btn_pane_g1

0xeee1,	// (0x000bc1ce) main_calllock_btn_pane_t1

0x94ed,	// (0x000b67da) main_dialer3_pane

0x94ed,	// (0x000b67da) main_fmrd2_pane

0xcc7e,	// (0x000b9f6b) main_fs_bigclock_unlock_btn_pane_g1

0xeef8,	// (0x000bc1e5) main_fs_bigclock_unlock_btn_pane_t1

0x8e01,	// (0x000b60ee) area_fmrd2_info_pane_ParamLimits

0x8e01,	// (0x000b60ee) area_fmrd2_info_pane

0x8e10,	// (0x000b60fd) area_fmrd2_visual_pane_ParamLimits

0x8e10,	// (0x000b60fd) area_fmrd2_visual_pane

0x8e1e,	// (0x000b610b) fmrd2_indi_pane_ParamLimits

0x8e1e,	// (0x000b610b) fmrd2_indi_pane

0x8e2b,	// (0x000b6118) area_fmrd2_visual_pane_g1

0x8e33,	// (0x000b6120) area_fmrd2_visual_pane_t1

0x8e43,	// (0x000b6130) area_fmrd2_visual_pane_t2

0x8e53,	// (0x000b6140) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000bd1d5) area_fmrd2_visual_pane_t

0x8e63,	// (0x000b6150) area_fmrd2_info_pane_g1

0x8e6b,	// (0x000b6158) area_fmrd2_info_pane_t1

0x8e7b,	// (0x000b6168) area_fmrd2_info_pane_t2

0x8e8b,	// (0x000b6178) area_fmrd2_info_pane_t3

0x8e9b,	// (0x000b6188) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000bd1dc) area_fmrd2_info_pane_t

0x8eab,	// (0x000b6198) fmrd2_indi_pane_t1

0x8ebb,	// (0x000b61a8) fmrd2_indi_pane_t2

0x8ecb,	// (0x000b61b8) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000bd1e5) fmrd2_indi_pane_t

0xe486,	// (0x000bb773) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe486,	// (0x000bb773) list_single_fs_bigclock_indicator_pane_g5

0xe536,	// (0x000bb823) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe536,	// (0x000bb823) list_single_fs_bigclock_indicator_pane_t5

0x858e,	// (0x000b587b) aid_cell_bcale_month_pane_ParamLimits

0x858e,	// (0x000b587b) aid_cell_bcale_month_pane

0x85ac,	// (0x000b5899) bcale_month_pane_ParamLimits

0x85ac,	// (0x000b5899) bcale_month_pane

0x85ce,	// (0x000b58bb) bcale_preview_pane_ParamLimits

0x85ce,	// (0x000b58bb) bcale_preview_pane

0xec8f,	// (0x000bbf7c) list_single_fs_bigclock_pane_t1_ParamLimits

0xecae,	// (0x000bbf9b) list_single_fs_bigclock_pane_t2_ParamLimits

0xecae,	// (0x000bbf9b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000bd167) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000bd167) list_single_fs_bigclock_pane_t

0xeef0,	// (0x000bc1dd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000bd1d0) main_fs_bigclock_unlock_btn_pane_g

0x8edb,	// (0x000b61c8) aid_dia3_key_size_ParamLimits

0x8edb,	// (0x000b61c8) aid_dia3_key_size

0x8eea,	// (0x000b61d7) aid_dia3_listrow_size_ParamLimits

0x8eea,	// (0x000b61d7) aid_dia3_listrow_size

0x8eff,	// (0x000b61ec) dia3_keypad_fun_pane_ParamLimits

0x8eff,	// (0x000b61ec) dia3_keypad_fun_pane

0x8f1b,	// (0x000b6208) dia3_keypad_num_pane_ParamLimits

0x8f1b,	// (0x000b6208) dia3_keypad_num_pane

0x8f34,	// (0x000b6221) dia3_listscroll_pane_ParamLimits

0x8f34,	// (0x000b6221) dia3_listscroll_pane

0x8f47,	// (0x000b6234) dia3_numentry_pane_ParamLimits

0x8f47,	// (0x000b6234) dia3_numentry_pane

0xef06,	// (0x000bc1f3) dia3_list_pane

0xef11,	// (0x000bc1fe) scroll_pane_cp12

0x94ed,	// (0x000b67da) bg_dia3_numentry_pane

0x8f5b,	// (0x000b6248) dia3_numentry_pane_t1

0x8f6a,	// (0x000b6257) cell_dia3_key_num_pane

0x8f72,	// (0x000b625f) cell_dia3_key0_fun_pane_ParamLimits

0x8f72,	// (0x000b625f) cell_dia3_key0_fun_pane

0x8f86,	// (0x000b6273) cell_dia3_key1_fun_pane_ParamLimits

0x8f86,	// (0x000b6273) cell_dia3_key1_fun_pane

0x8f9e,	// (0x000b628b) dia3_listrow_pane

0xe184,	// (0x000bb471) bg_dia3_numentry_pane_g1

0x94ed,	// (0x000b67da) bg_button_pane_cp21

0xef1c,	// (0x000bc209) cell_dia3_key_num_pane_t1

0xef2a,	// (0x000bc217) cell_dia3_key_num_pane_t2

0xef39,	// (0x000bc226) cell_dia3_key_num_pane_t3

0xef48,	// (0x000bc235) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000bd1ec) cell_dia3_key_num_pane_t

0x94ed,	// (0x000b67da) bg_button_pane_cp19

0x8fb0,	// (0x000b629d) cell_dia3_key0_fun_pane_g1

0x94ed,	// (0x000b67da) bg_button_pane_cp20

0x8fb8,	// (0x000b62a5) cell_dia3_key1_fun_pane_g1

0x8fc0,	// (0x000b62ad) area_left_week_number_pane

0x8fce,	// (0x000b62bb) area_top_day_name_pane

0x8fe1,	// (0x000b62ce) frame_month_view_pane

0xef57,	// (0x000bc244) grid_month_view_pane

0x8ff6,	// (0x000b62e3) cell_top_day_name_pane_ParamLimits

0x8ff6,	// (0x000b62e3) cell_top_day_name_pane

0x9025,	// (0x000b6312) cell_area_left_week_number_pane_ParamLimits

0x9025,	// (0x000b6312) cell_area_left_week_number_pane

0x9039,	// (0x000b6326) cell_month_view_pane_ParamLimits

0x9039,	// (0x000b6326) cell_month_view_pane

0xef65,	// (0x000bc252) frm_month_g1

0x9068,	// (0x000b6355) frm_month_g2

0x907b,	// (0x000b6368) frm_month_g3

0x908e,	// (0x000b637b) frm_month_g4

0x90a1,	// (0x000b638e) frm_month_g5

0x90b4,	// (0x000b63a1) frm_month_g6

0x90c7,	// (0x000b63b4) frm_month_g7

0xef72,	// (0x000bc25f) frm_month_g8

0x90dc,	// (0x000b63c9) frm_month_g9

0x90ec,	// (0x000b63d9) frm_month_g10

0x90fc,	// (0x000b63e9) frm_month_g11

0x910c,	// (0x000b63f9) frm_month_g12

0x911e,	// (0x000b640b) frm_month_g13

0x9132,	// (0x000b641f) frm_month_g14

0x9146,	// (0x000b6433) frm_month_g15

0x915a,	// (0x000b6447) frm_month_g16

0x000f,

0xff08,	// (0x000bd1f5) frm_month_g

0xef7f,	// (0x000bc26c) cell_top_day_name_pane_t1

0x916e,	// (0x000b645b) cell_area_left_week_number_pane_g1

0x917a,	// (0x000b6467) cell_area_left_week_number_pane_t1

0xceae,	// (0x000ba19b) cell_month_view_pane_g1

0x918d,	// (0x000b647a) cell_month_view_pane_t1

0x94ed,	// (0x000b67da) main_fps_pane

0xe70b,	// (0x000bb9f8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70b,	// (0x000bb9f8) cmail_ddmenu_btn02_pane_cp1

0xe727,	// (0x000bba14) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe727,	// (0x000bba14) cmail_ddmenu_btn02_pane_cp2

0x889b,	// (0x000b5b88) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x889b,	// (0x000b5b88) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000bd11a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000bd11a) cmail_ddmenu_btn02_pane_g

0x88bc,	// (0x000b5ba9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88bc,	// (0x000b5ba9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000bd11f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000bd11f) cmail_ddmenu_btn02_pane_t

0x91a0,	// (0x000b648d) fps_text_pane_ParamLimits

0x91a0,	// (0x000b648d) fps_text_pane

0x91b7,	// (0x000b64a4) main_fps_pane_g1_ParamLimits

0x91b7,	// (0x000b64a4) main_fps_pane_g1

0x91cf,	// (0x000b64bc) wait_bar_pane_cp010_ParamLimits

0x91cf,	// (0x000b64bc) wait_bar_pane_cp010

0x91e2,	// (0x000b64cf) fps_text_pane_t1_ParamLimits

0x91e2,	// (0x000b64cf) fps_text_pane_t1

0xd647,	// (0x000ba934) cam4_image_uncrop_pane_g1

0xd650,	// (0x000ba93d) cam4_image_uncrop_pane_g2

0x5b52,	// (0x000b2e3f) cam4_image_uncrop_pane_g3

0x5b5b,	// (0x000b2e48) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000bcbdb) cam4_image_uncrop_pane_g

0x8f9e,	// (0x000b628b) dia3_listrow_pane_ParamLimits

0x94ed,	// (0x000b67da) main_phob2_pane

0x83c2,	// (0x000b56af) cell_tport_appsw_pane_cp02_ParamLimits

0x83c2,	// (0x000b56af) cell_tport_appsw_pane_cp02

0x83d6,	// (0x000b56c3) cell_tport_appsw_pane_cp03_ParamLimits

0x83d6,	// (0x000b56c3) cell_tport_appsw_pane_cp03

0x94ed,	// (0x000b67da) phob2_contact_card_pane

0x94ed,	// (0x000b67da) phob2_listscroll_pane

0xef92,	// (0x000bc27f) phob2_list_pane

0xef9a,	// (0x000bc287) scroll_pane_cp034

0x91fa,	// (0x000b64e7) phob2_cc_data_pane_ParamLimits

0x91fa,	// (0x000b64e7) phob2_cc_data_pane

0x921b,	// (0x000b6508) phob2_cc_listscroll_pane_ParamLimits

0x921b,	// (0x000b6508) phob2_cc_listscroll_pane

0x923d,	// (0x000b652a) list_double_large_graphic_phob2_pane_ParamLimits

0x923d,	// (0x000b652a) list_double_large_graphic_phob2_pane

0x9251,	// (0x000b653e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9251,	// (0x000b653e) list_double_large_graphic_phob2_pane_g1

0x9267,	// (0x000b6554) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9267,	// (0x000b6554) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000bd216) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000bd216) list_double_large_graphic_phob2_pane_g

0x9273,	// (0x000b6560) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9273,	// (0x000b6560) list_double_large_graphic_phob2_pane_t1

0x9288,	// (0x000b6575) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9288,	// (0x000b6575) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000bd21b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000bd21b) list_double_large_graphic_phob2_pane_t

0x94ed,	// (0x000b67da) list_highlight_pane_cp024

0x929a,	// (0x000b6587) phob2_cc_button_pane

0x92a2,	// (0x000b658f) phob2_cc_data_pane_g1_ParamLimits

0x92a2,	// (0x000b658f) phob2_cc_data_pane_g1

0x92b8,	// (0x000b65a5) phob2_cc_data_pane_g2_ParamLimits

0x92b8,	// (0x000b65a5) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000bd220) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000bd220) phob2_cc_data_pane_g

0x92c8,	// (0x000b65b5) phob2_cc_data_pane_t1_ParamLimits

0x92c8,	// (0x000b65b5) phob2_cc_data_pane_t1

0x92e0,	// (0x000b65cd) phob2_cc_data_pane_t2_ParamLimits

0x92e0,	// (0x000b65cd) phob2_cc_data_pane_t2

0x92fa,	// (0x000b65e7) phob2_cc_data_pane_t3_ParamLimits

0x92fa,	// (0x000b65e7) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000bd225) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000bd225) phob2_cc_data_pane_t

0xefa2,	// (0x000bc28f) phob2_cc_list_pane_ParamLimits

0xefa2,	// (0x000bc28f) phob2_cc_list_pane

0xd985,	// (0x000bac72) scroll_pane_cp035_ParamLimits

0xd985,	// (0x000bac72) scroll_pane_cp035

0x953e,	// (0x000b682b) bg_button_pane_cp033

0xefae,	// (0x000bc29b) phob2_cc_button_pane_g1

0xefba,	// (0x000bc2a7) phob2_cc_button_pane_t1

0xefcf,	// (0x000bc2bc) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000bd22c) phob2_cc_button_pane_t

0x9314,	// (0x000b6601) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9314,	// (0x000b6601) list_double_large_graphic_phob2_cc_pane

0x9328,	// (0x000b6615) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9328,	// (0x000b6615) list_double_large_graphic_phob2_cc_pane_g1

0x9334,	// (0x000b6621) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9334,	// (0x000b6621) list_double_large_graphic_phob2_cc_pane_g2

0x9340,	// (0x000b662d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9340,	// (0x000b662d) list_double_large_graphic_phob2_cc_pane_g3

0x934c,	// (0x000b6639) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x934c,	// (0x000b6639) list_double_large_graphic_phob2_cc_pane_g4

0x9358,	// (0x000b6645) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9358,	// (0x000b6645) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000bd231) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000bd231) list_double_large_graphic_phob2_cc_pane_g

0x9364,	// (0x000b6651) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9364,	// (0x000b6651) list_double_large_graphic_phob2_cc_pane_t1

0x938d,	// (0x000b667a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x938d,	// (0x000b667a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000bd23c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000bd23c) list_double_large_graphic_phob2_cc_pane_t

0xefe1,	// (0x000bc2ce) list_highlight_pane_cp025_ParamLimits

0xefe1,	// (0x000bc2ce) list_highlight_pane_cp025

0x953e,	// (0x000b682b) bg_button_pane_cp033_ParamLimits

0xefae,	// (0x000bc29b) phob2_cc_button_pane_g1_ParamLimits

0xefba,	// (0x000bc2a7) phob2_cc_button_pane_t1_ParamLimits

0xefcf,	// (0x000bc2bc) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000bd22c) phob2_cc_button_pane_t_ParamLimits

0xfe81,	// (0x000ad16e) popup_wgtman_window

0xd7c8,	// (0x000baab5) scroll_pane_cp038

0x8ced,	// (0x000b5fda) wgtman_btn_pane_cp_01_ParamLimits

0x8ced,	// (0x000b5fda) wgtman_btn_pane_cp_01

0xefef,	// (0x000bc2dc) wgtman_content_pane

0xeff8,	// (0x000bc2e5) wgtman_heading_pane

0x94ed,	// (0x000b67da) bg_heading_pane_cp02

0xf001,	// (0x000bc2ee) wgtman_heading_pane_g1

0xf009,	// (0x000bc2f6) wgtman_heading_pane_t1

0xf017,	// (0x000bc304) scroll_pane_cp036

0xf01f,	// (0x000bc30c) wgtman_list_pane

0xf027,	// (0x000bc314) wgtman_list_pane_t1_ParamLimits

0xf027,	// (0x000bc314) wgtman_list_pane_t1

0xa155,	// (0x000b7442) cam4_grid_pane

0x6850,	// (0x000b3b3d) bg_button_pane_cp015_ParamLimits

0x6864,	// (0x000b3b51) bg_button_pane_cp016_ParamLimits

0x6877,	// (0x000b3b64) bg_button_pane_cp017_ParamLimits

0x68cf,	// (0x000b3bbc) popup_vitu2_query_window_g3_ParamLimits

0x68cf,	// (0x000b3bbc) popup_vitu2_query_window_g3

0x698c,	// (0x000b3c79) popup_vitu2_query_window_t6_ParamLimits

0x698c,	// (0x000b3c79) popup_vitu2_query_window_t6

0x69b7,	// (0x000b3ca4) popup_vitu2_query_window_t7_ParamLimits

0x69b7,	// (0x000b3ca4) popup_vitu2_query_window_t7

0xd647,	// (0x000ba934) cam4_grid_pane_g1

0xd650,	// (0x000ba93d) cam4_grid_pane_g2

0xf041,	// (0x000bc32e) cam4_grid_pane_g3

0xf04a,	// (0x000bc337) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000bd241) cam4_grid_pane_g

0x10c2,	// (0x000ae3af) aid_placing_vt_slider_lsc_ParamLimits

0x13af,	// (0x000ae69c) vidtel_button_pane_ParamLimits

0x13af,	// (0x000ae69c) vidtel_button_pane

0x94ed,	// (0x000b67da) bg_button_pane_cp034

0x93b6,	// (0x000b66a3) vidtel_button_pane_g1

0x93be,	// (0x000b66ab) vidtel_button_pane_t1

0xd8cc,	// (0x000babb9) aid_size_vtel_slider_touch

0xd985,	// (0x000bac72) scroll_pane_cp039

0xe1c2,	// (0x000bb4af) ncim_query_button_pane_cp01_ParamLimits

0xe1e1,	// (0x000bb4ce) ncimui_query_pane_g1_ParamLimits

0x953e,	// (0x000b682b) input_focus_pane_cp012_ParamLimits

0xe206,	// (0x000bb4f3) ncim_query_entry_pane_t1_ParamLimits

0xd985,	// (0x000bac72) scroll_pane_cp039_ParamLimits

0x266a,	// (0x000af957) navi_pane_bcale_mc_g1

0x2672,	// (0x000af95f) navi_pane_bcale_mc_t1

0xe770,	// (0x000bba5d) main_sp_fs_email_pane_g1

0xe77c,	// (0x000bba69) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000bcfd2) main_sp_fs_email_pane_g

0xea1c,	// (0x000bbd09) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea1c,	// (0x000bbd09) list_single_cale_mrui_row_pane_g3

0x88dc,	// (0x000b5bc9) list_single_recal_day_pane_g5_event_pane

0xa7ff,	// (0x000b7aec) list_single_recal_day_pane_g7

0xf055,	// (0x000bc342) list_recal_day_event_pane_cp01

0xf05e,	// (0x000bc34b) list_recal_vselct_arw_lo_pane_cp01

0xf066,	// (0x000bc353) list_recal_vselct_arw_up_pane_cp01

0xf06e,	// (0x000bc35b) list_recal_vselct_pane_cp01

0xd8ee,	// (0x000babdb) list_recal_day_event_pane_cp01_g1

0xbb97,	// (0x000b8e84) list_recal_day_event_pane_cp01_t1

0xa807,	// (0x000b7af4) list_single_recal_day_pane_t1_ParamLimits

0xa819,	// (0x000b7b06) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000bd12f) list_single_recal_day_pane_t_ParamLimits

0x9bba,	// (0x000b6ea7) bg_notes_pane_ParamLimits

0xa870,	// (0x000b7b5d) list_notes_pane_ParamLimits

0x01ce,	// (0x000ad4bb) scroll_pane_cp06_ParamLimits

0xa892,	// (0x000b7b7f) main_notes_pane_ParamLimits

0x94ed,	// (0x000b67da) main_welc_pane

0x93d4,	// (0x000b66c1) main_welc_body_pane_ParamLimits

0x93d4,	// (0x000b66c1) main_welc_body_pane

0x93f3,	// (0x000b66e0) main_welc_opti_pane_ParamLimits

0x93f3,	// (0x000b66e0) main_welc_opti_pane

0x943c,	// (0x000b6729) main_welc_pane_t1_ParamLimits

0x943c,	// (0x000b6729) main_welc_pane_t1

0x945e,	// (0x000b674b) main_welc_body_row_pane_ParamLimits

0x945e,	// (0x000b674b) main_welc_body_row_pane

0x9472,	// (0x000b675f) main_welc_opti_row_pane_ParamLimits

0x9472,	// (0x000b675f) main_welc_opti_row_pane

0xf078,	// (0x000bc365) main_welc_opti_row_pane_g1

0xf080,	// (0x000bc36d) main_welc_opti_row_pane_t1

0xf08f,	// (0x000bc37c) main_welc_body_row_pane_t1

0xed6f,	// (0x000bc05c) popup_notif_wgt_heading_pane

0xed89,	// (0x000bc076) aid_size_list_notif_wgt_del_ParamLimits

0xed96,	// (0x000bc083) list_notif_wgt_row_pane_g1_ParamLimits

0xeda2,	// (0x000bc08f) list_notif_wgt_row_pane_g2_ParamLimits

0xedb6,	// (0x000bc0a3) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000bd196) list_notif_wgt_row_pane_g_ParamLimits

0xedc3,	// (0x000bc0b0) list_notif_wgt_row_pane_t1_ParamLimits

0xedd9,	// (0x000bc0c6) list_notif_wgt_row_pane_t2_ParamLimits

0xedeb,	// (0x000bc0d8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000bd19d) list_notif_wgt_row_pane_t_ParamLimits

0x8d86,	// (0x000b6073) listrow_wgtman_pane_g1_ParamLimits

0x8d93,	// (0x000b6080) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000bd1c6) listrow_wgtman_pane_g_ParamLimits

0x8db1,	// (0x000b609e) listrow_wgtman_pane_t1_ParamLimits

0x8dc9,	// (0x000b60b6) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000bd1cb) listrow_wgtman_pane_t_ParamLimits

0x8def,	// (0x000b60dc) wait_bar_pane_cp09_ParamLimits

0x94ed,	// (0x000b67da) bg_popup_heading_pane_cp02

0xf09e,	// (0x000bc38b) popup_notif_wgt_heading_pane_g1

0xf0a6,	// (0x000bc393) popup_notif_wgt_heading_pane_t1

0x94ed,	// (0x000b67da) main_vids_pane

0x94ed,	// (0x000b67da) vids_listscroll_pane

0x9482,	// (0x000b676f) scroll_pane_cp040

0x94ed,	// (0x000b67da) vids_list_pane

0x948d,	// (0x000b677a) vids_list_double_pane_ParamLimits

0x948d,	// (0x000b677a) vids_list_double_pane

0x949e,	// (0x000b678b) vids_list_double_pane_g1

0x94a7,	// (0x000b6794) vids_list_double_pane_t1

0x94b7,	// (0x000b67a4) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000bd24f) vids_list_double_pane_t

0x953e,	// (0x000b682b) main_ncimui_pane_ParamLimits

0x75b0,	// (0x000b489d) main_ncimui_pane_g1_ParamLimits

0x75bc,	// (0x000b48a9) main_ncimui_pane_g2_ParamLimits

0x75bc,	// (0x000b48a9) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000bced7) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000bced7) main_ncimui_pane_g

0x9412,	// (0x000b66ff) main_welc_pane_g1_ParamLimits

0x9412,	// (0x000b66ff) main_welc_pane_g1

0x9427,	// (0x000b6714) main_welc_pane_g2_ParamLimits

0x9427,	// (0x000b6714) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000bd24a) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000bd24a) main_welc_pane_g

0x9bba,	// (0x000b6ea7) listscroll_mce_pane_ParamLimits

0x274a,	// (0x000afa37) wait_bar_pane_cp10

0xc821,	// (0x000b9b0e) main_cale_day_pane_ParamLimits

0xc821,	// (0x000b9b0e) main_cale_week_pane_ParamLimits

0x9bba,	// (0x000b6ea7) main_messa_pane_ParamLimits

0x4e10,	// (0x000b20fd) main_clock2_btn_pane_ParamLimits

0x4e10,	// (0x000b20fd) main_clock2_btn_pane

0xd03e,	// (0x000ba32b) main_clock2_btn_pane_cp01_ParamLimits

0xd03e,	// (0x000ba32b) main_clock2_btn_pane_cp01

0xe9ed,	// (0x000bbcda) list_cale_mrui_pane_ParamLimits

0xee2f,	// (0x000bc11c) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000bd1a4) main_cf0_pane_g

0x8fc0,	// (0x000b62ad) area_left_week_number_pane_ParamLimits

0x8fce,	// (0x000b62bb) area_top_day_name_pane_ParamLimits

0x8fe1,	// (0x000b62ce) frame_month_view_pane_ParamLimits

0xef57,	// (0x000bc244) grid_month_view_pane_ParamLimits

0xef65,	// (0x000bc252) frm_month_g1_ParamLimits

0x9068,	// (0x000b6355) frm_month_g2_ParamLimits

0x907b,	// (0x000b6368) frm_month_g3_ParamLimits

0x908e,	// (0x000b637b) frm_month_g4_ParamLimits

0x90a1,	// (0x000b638e) frm_month_g5_ParamLimits

0x90b4,	// (0x000b63a1) frm_month_g6_ParamLimits

0x90c7,	// (0x000b63b4) frm_month_g7_ParamLimits

0xef72,	// (0x000bc25f) frm_month_g8_ParamLimits

0x90dc,	// (0x000b63c9) frm_month_g9_ParamLimits

0x90ec,	// (0x000b63d9) frm_month_g10_ParamLimits

0x90fc,	// (0x000b63e9) frm_month_g11_ParamLimits

0x910c,	// (0x000b63f9) frm_month_g12_ParamLimits

0x911e,	// (0x000b640b) frm_month_g13_ParamLimits

0x9132,	// (0x000b641f) frm_month_g14_ParamLimits

0x9146,	// (0x000b6433) frm_month_g15_ParamLimits

0x915a,	// (0x000b6447) frm_month_g16_ParamLimits

0xff08,	// (0x000bd1f5) frm_month_g_ParamLimits

0xef7f,	// (0x000bc26c) cell_top_day_name_pane_t1_ParamLimits

0x916e,	// (0x000b645b) cell_area_left_week_number_pane_g1_ParamLimits

0x917a,	// (0x000b6467) cell_area_left_week_number_pane_t1_ParamLimits

0xceae,	// (0x000ba19b) cell_month_view_pane_g1_ParamLimits

0x918d,	// (0x000b647a) cell_month_view_pane_t1_ParamLimits

0x9bb2,	// (0x000b6e9f) main_clock2_btn_pane_g1

0xf0b4,	// (0x000bc3a1) main_clock2_btn_pane_t1

0x953e,	// (0x000b682b) listscroll_cmail_pane_ParamLimits

0xe770,	// (0x000bba5d) main_sp_fs_email_pane_g1_ParamLimits

0xe77c,	// (0x000bba69) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000bcfd2) main_sp_fs_email_pane_g_ParamLimits

0xeaf9,	// (0x000bbde6) list_recal_day_pane_ParamLimits

0xeb0a,	// (0x000bbdf7) mian_recal_day_pane_t1

0x80a3,	// (0x000b5390) list_single_dyc_row_text_pane_t4_ParamLimits

0x80a3,	// (0x000b5390) list_single_dyc_row_text_pane_t4

0x80ec,	// (0x000b53d9) list_single_dyc_row_text_pane_t5_ParamLimits

0x80ec,	// (0x000b53d9) list_single_dyc_row_text_pane_t5

0xa524,	// (0x000b7811) list_single_dyc_row_text_pane_t6_ParamLimits

0xa524,	// (0x000b7811) list_single_dyc_row_text_pane_t6

0xae38,	// (0x000b8125) aid_mgn_list_cale_time_pane

0x953e,	// (0x000b682b) main_gallery2_pane_ParamLimits

0xd052,	// (0x000ba33f) main_clock2_pane_cp01_t1

0xd062,	// (0x000ba34f) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000bcab1) main_clock2_pane_cp01_t

0x064d,	// (0x000ad93a) cale_week_scroll_pane_g16_ParamLimits

0x064d,	// (0x000ad93a) cale_week_scroll_pane_g16

0xaa48,	// (0x000b7d35) vorec_slider_pane

0x93be,	// (0x000b66ab) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
