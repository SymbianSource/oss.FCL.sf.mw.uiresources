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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00092a55 };

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
0x0e50,	// (0x000938a5) Screen

0x0e5c,	// (0x000938b1) application_window

0x0eb8,	// (0x0009390d) area_bottom_pane_ParamLimits

0x0eb8,	// (0x0009390d) area_bottom_pane

0x0f10,	// (0x00093965) area_top_pane_ParamLimits

0x0f10,	// (0x00093965) area_top_pane

0x0f74,	// (0x000939c9) call_video_uplink_pane_ParamLimits

0x0f74,	// (0x000939c9) call_video_uplink_pane

0x0fb3,	// (0x00093a08) main_pane_ParamLimits

0x0fb3,	// (0x00093a08) main_pane

0xbff9,	// (0x0009ea4e) context_pane

0x3e67,	// (0x000968bc) navi_pane

0x3e8d,	// (0x000968e2) popup_cale_events_window_ParamLimits

0x3e8d,	// (0x000968e2) popup_cale_events_window

0xc00c,	// (0x0009ea61) popup_mup_playback_window

0x3ea5,	// (0x000968fa) signal_pane

0x9ed1,	// (0x0009c926) main_browser_pane

0xa083,	// (0x0009cad8) main_burst_pane

0x3ce9,	// (0x0009673e) main_calc_pane

0xbfed,	// (0x0009ea42) main_cale_day_pane

0x15bf,	// (0x00094014) main_cale_month_pane

0xbfed,	// (0x0009ea42) main_cale_week_pane

0xa083,	// (0x0009cad8) main_call_pane

0x9b89,	// (0x0009c5de) main_call_poc_pane

0xa083,	// (0x0009cad8) main_camera_pane

0xa083,	// (0x0009cad8) main_chi_dic_pane

0xa860,	// (0x0009d2b5) main_clock_pane

0x9b89,	// (0x0009c5de) main_fmradio_pane

0xa083,	// (0x0009cad8) main_graph_messa_pane

0x9b89,	// (0x0009c5de) main_help_pane

0x9ed1,	// (0x0009c926) main_im_pane

0x9de4,	// (0x0009c839) main_image_pane_ParamLimits

0x9de4,	// (0x0009c839) main_image_pane

0x9b89,	// (0x0009c5de) main_location2_pane

0xa083,	// (0x0009cad8) main_location_pane

0x9de4,	// (0x0009c839) main_messa_pane

0x9b89,	// (0x0009c5de) main_mp2_pane

0xa083,	// (0x0009cad8) main_mp_pane

0x9b89,	// (0x0009c5de) main_msg_pane

0x9b89,	// (0x0009c5de) main_mup_eq_pane

0x9b89,	// (0x0009c5de) main_mup_pane

0x9ed1,	// (0x0009c926) main_notes_pane

0x9b89,	// (0x0009c5de) main_pec_pane

0x9b89,	// (0x0009c5de) main_phob_pane

0x9b89,	// (0x0009c5de) main_pinb_pane

0x9b89,	// (0x0009c5de) main_postcard_pane

0x9b89,	// (0x0009c5de) main_qdial_pane

0xa083,	// (0x0009cad8) main_skin_pane

0x9b89,	// (0x0009c5de) main_smil2_pane

0xa083,	// (0x0009cad8) main_smil_pane

0xa083,	// (0x0009cad8) main_video_pane

0xa083,	// (0x0009cad8) main_video_tele_pane

0x9de4,	// (0x0009c839) main_viewer_pane_ParamLimits

0x9de4,	// (0x0009c839) main_viewer_pane

0xa083,	// (0x0009cad8) main_vorec_pane

0x3d35,	// (0x0009678a) popup_blid_sat_info_window_ParamLimits

0x3d35,	// (0x0009678a) popup_blid_sat_info_window

0x3d55,	// (0x000967aa) popup_dyc_status_message_window_ParamLimits

0x3d55,	// (0x000967aa) popup_dyc_status_message_window

0x3d63,	// (0x000967b8) popup_grid_large_graphic_window_ParamLimits

0x3d63,	// (0x000967b8) popup_grid_large_graphic_window

0x3df2,	// (0x00096847) popup_loc_request_window_ParamLimits

0x3df2,	// (0x00096847) popup_loc_request_window

0x3e3f,	// (0x00096894) popup_wml_address_window_ParamLimits

0x3e3f,	// (0x00096894) popup_wml_address_window

0x3bc1,	// (0x00096616) call_muted_g1

0x3836,	// (0x0009628b) popup_call_audio_conf_window_ParamLimits

0x3836,	// (0x0009628b) popup_call_audio_conf_window

0x3bd1,	// (0x00096626) popup_call_audio_first_window_ParamLimits

0x3bd1,	// (0x00096626) popup_call_audio_first_window

0x3c11,	// (0x00096666) popup_call_audio_in_window_ParamLimits

0x3c11,	// (0x00096666) popup_call_audio_in_window

0x3c35,	// (0x0009668a) popup_call_audio_out_window_ParamLimits

0x3c35,	// (0x0009668a) popup_call_audio_out_window

0x3c57,	// (0x000966ac) popup_call_audio_second_window_ParamLimits

0x3c57,	// (0x000966ac) popup_call_audio_second_window

0x3c87,	// (0x000966dc) popup_call_audio_wait_window_ParamLimits

0x3c87,	// (0x000966dc) popup_call_audio_wait_window

0x3ca8,	// (0x000966fd) popup_number_entry_window_ParamLimits

0x3ca8,	// (0x000966fd) popup_number_entry_window

0xed02,	// (0x000a1757) bg_popup_call_pane_cp05_ParamLimits

0xed02,	// (0x000a1757) bg_popup_call_pane_cp05

0xedfd,	// (0x000a1852) popup_number_entry_window_t1

0xee10,	// (0x000a1865) popup_number_entry_window_t2

0xee22,	// (0x000a1877) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000a1a9a) popup_number_entry_window_t

0x97cd,	// (0x0009c222) text_title_cp2

0x97e0,	// (0x0009c235) bg_popup_call_pane_cp_ParamLimits

0x97e0,	// (0x0009c235) bg_popup_call_pane_cp

0x97ee,	// (0x0009c243) call_thumbnail_pane

0x97f6,	// (0x0009c24b) popup_call_audio_in_window_g1_ParamLimits

0x97f6,	// (0x0009c24b) popup_call_audio_in_window_g1

0x9802,	// (0x0009c257) popup_call_audio_in_window_g2_ParamLimits

0x9802,	// (0x0009c257) popup_call_audio_in_window_g2

0x980e,	// (0x0009c263) popup_call_audio_in_window_g3_ParamLimits

0x980e,	// (0x0009c263) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000a1aa3) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000a1aa3) popup_call_audio_in_window_g

0x981a,	// (0x0009c26f) popup_call_audio_in_window_t1_ParamLimits

0x981a,	// (0x0009c26f) popup_call_audio_in_window_t1

0x9836,	// (0x0009c28b) popup_call_audio_in_window_t2_ParamLimits

0x9836,	// (0x0009c28b) popup_call_audio_in_window_t2

0x9852,	// (0x0009c2a7) popup_call_audio_in_window_t3_ParamLimits

0x9852,	// (0x0009c2a7) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000a1aaa) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000a1aaa) popup_call_audio_in_window_t

0x97e0,	// (0x0009c235) bg_popup_call_pane_cp01_ParamLimits

0x97e0,	// (0x0009c235) bg_popup_call_pane_cp01

0x97ee,	// (0x0009c243) call_thumbnail_pane_cp02

0x9865,	// (0x0009c2ba) call_type_pane_cp022

0x986d,	// (0x0009c2c2) popup_call_audio_out_window_g1_ParamLimits

0x986d,	// (0x0009c2c2) popup_call_audio_out_window_g1

0x987f,	// (0x0009c2d4) popup_call_audio_out_window_g2_ParamLimits

0x987f,	// (0x0009c2d4) popup_call_audio_out_window_g2

0x988b,	// (0x0009c2e0) popup_call_audio_out_window_g3_ParamLimits

0x988b,	// (0x0009c2e0) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000a1ab1) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000a1ab1) popup_call_audio_out_window_g

0x989d,	// (0x0009c2f2) popup_call_audio_out_window_t1_ParamLimits

0x989d,	// (0x0009c2f2) popup_call_audio_out_window_t1

0x98b5,	// (0x0009c30a) popup_call_audio_out_window_t2_ParamLimits

0x98b5,	// (0x0009c30a) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000a1ab8) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000a1ab8) popup_call_audio_out_window_t

0x98ca,	// (0x0009c31f) bg_popup_call_pane_ParamLimits

0x98ca,	// (0x0009c31f) bg_popup_call_pane

0x11ce,	// (0x00093c23) call_thumbnail_pane_cp_ParamLimits

0x11ce,	// (0x00093c23) call_thumbnail_pane_cp

0x994e,	// (0x0009c3a3) call_type_pane_cp01_ParamLimits

0x994e,	// (0x0009c3a3) call_type_pane_cp01

0x9992,	// (0x0009c3e7) popup_call_audio_first_window_g1_ParamLimits

0x9992,	// (0x0009c3e7) popup_call_audio_first_window_g1

0x99de,	// (0x0009c433) popup_call_audio_first_window_g2_ParamLimits

0x99de,	// (0x0009c433) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000a1abd) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000a1abd) popup_call_audio_first_window_g

0x9a22,	// (0x0009c477) popup_call_audio_first_window_t1_ParamLimits

0x9a22,	// (0x0009c477) popup_call_audio_first_window_t1

0x9ace,	// (0x0009c523) popup_call_audio_first_window_t4_ParamLimits

0x9ace,	// (0x0009c523) popup_call_audio_first_window_t4

0x9b5a,	// (0x0009c5af) popup_call_audio_first_window_t5_ParamLimits

0x9b5a,	// (0x0009c5af) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000a1ac2) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000a1ac2) popup_call_audio_first_window_t

0x9b89,	// (0x0009c5de) bg_popup_call_pane_cp02

0x9b93,	// (0x0009c5e8) call_type_pane_cp023

0x9b9b,	// (0x0009c5f0) popup_call_audio_wait_window_g1

0x9ba3,	// (0x0009c5f8) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000a1ac9) popup_call_audio_wait_window_g

0x9bab,	// (0x0009c600) popup_call_audio_wait_window_t3

0x9bb9,	// (0x0009c60e) bg_popup_call_pane_cp03_ParamLimits

0x9bb9,	// (0x0009c60e) bg_popup_call_pane_cp03

0x9c19,	// (0x0009c66e) call_thumbnail_pane_cp011_ParamLimits

0x9c19,	// (0x0009c66e) call_thumbnail_pane_cp011

0x9c25,	// (0x0009c67a) call_type_pane_cp034_ParamLimits

0x9c25,	// (0x0009c67a) call_type_pane_cp034

0x9c61,	// (0x0009c6b6) popup_call_audio_second_window_g1_ParamLimits

0x9c61,	// (0x0009c6b6) popup_call_audio_second_window_g1

0x9c9d,	// (0x0009c6f2) popup_call_audio_second_window_g2_ParamLimits

0x9c9d,	// (0x0009c6f2) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000a1ace) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000a1ace) popup_call_audio_second_window_g

0x9cd9,	// (0x0009c72e) popup_call_audio_second_window_t1_ParamLimits

0x9cd9,	// (0x0009c72e) popup_call_audio_second_window_t1

0x9d5a,	// (0x0009c7af) popup_call_audio_second_window_t2_ParamLimits

0x9d5a,	// (0x0009c7af) popup_call_audio_second_window_t2

0x9d90,	// (0x0009c7e5) popup_call_audio_second_window_t3_ParamLimits

0x9d90,	// (0x0009c7e5) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000a1ad3) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000a1ad3) popup_call_audio_second_window_t

0x9b89,	// (0x0009c5de) bg_popup_call_pane_cp04

0x9dc6,	// (0x0009c81b) list_conf_pane

0x9dce,	// (0x0009c823) popup_call_audio_conf_window_t1

0x9ddc,	// (0x0009c831) call_thumbnail_pane_g1

0x9de4,	// (0x0009c839) bg_pinb_pane_ParamLimits

0x9de4,	// (0x0009c839) bg_pinb_pane

0x9df2,	// (0x0009c847) find_pinb_pane

0x9de4,	// (0x0009c839) listscroll_pinb_pane_ParamLimits

0x9de4,	// (0x0009c839) listscroll_pinb_pane

0x9dfc,	// (0x0009c851) pinb_bg_pane_g1

0x9dfc,	// (0x0009c851) pinb_bg_pane_g2

0x9dfc,	// (0x0009c851) pinb_bg_pane_g3

0x9dfc,	// (0x0009c851) pinb_bg_pane_g4

0x9dfc,	// (0x0009c851) pinb_bg_pane_g5

0x9dfc,	// (0x0009c851) pinb_bg_pane_g6

0x9dfc,	// (0x0009c851) pinb_bg_pane_g7

0x9dfc,	// (0x0009c851) pinb_bg_pane_g8

0x9dfc,	// (0x0009c851) pinb_bg_pane_g9

0x9dfc,	// (0x0009c851) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000a1ada) pinb_bg_pane_g

0xecf8,	// (0x000a174d) grid_pinb_pane

0xecf8,	// (0x000a174d) list_pinb_pane

0xed22,	// (0x000a1777) scroll_pane_cp01_ParamLimits

0xed22,	// (0x000a1777) scroll_pane_cp01

0x9e06,	// (0x0009c85b) find_pinb_pane_g1_ParamLimits

0x9e06,	// (0x0009c85b) find_pinb_pane_g1

0x9e1e,	// (0x0009c873) find_pinb_pane_t1

0x9e30,	// (0x0009c885) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000a1af4) find_pinb_pane_t

0x9e45,	// (0x0009c89a) input_focus_pane_cp01_ParamLimits

0x9e45,	// (0x0009c89a) input_focus_pane_cp01

0x9e51,	// (0x0009c8a6) cell_pinb_pane_ParamLimits

0x9e51,	// (0x0009c8a6) cell_pinb_pane

0x9e5f,	// (0x0009c8b4) cell_pinb_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_pinb_pane_g1

0x9e6d,	// (0x0009c8c2) cell_pinb_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) cell_pinb_pane_g2

0x9e6d,	// (0x0009c8c2) cell_pinb_pane_g3_ParamLimits

0x9e6d,	// (0x0009c8c2) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000a1af9) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000a1af9) cell_pinb_pane_g

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp01

0x9e51,	// (0x0009c8a6) list_pinb_item_pane_ParamLimits

0x9e51,	// (0x0009c8a6) list_pinb_item_pane

0xecf8,	// (0x000a174d) list_highlight_pane_cp02

0x9e7b,	// (0x0009c8d0) list_pinb_item_pane_g1_ParamLimits

0x9e7b,	// (0x0009c8d0) list_pinb_item_pane_g1

0x9e6d,	// (0x0009c8c2) list_pinb_item_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) list_pinb_item_pane_g2

0x9e5f,	// (0x0009c8b4) list_pinb_item_pane_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_pinb_item_pane_g3

0x9e6d,	// (0x0009c8c2) list_pinb_item_pane_g4_ParamLimits

0x9e6d,	// (0x0009c8c2) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000a1b00) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000a1b00) list_pinb_item_pane_g

0x9e89,	// (0x0009c8de) list_pinb_item_pane_t1_ParamLimits

0x9e89,	// (0x0009c8de) list_pinb_item_pane_t1

0x120c,	// (0x00093c61) calc_display_pane

0x122a,	// (0x00093c7f) calc_paper_pane

0x1246,	// (0x00093c9b) grid_calc_pane

0x9b89,	// (0x0009c5de) bg_list_pane_cp01

0x1272,	// (0x00093cc7) clock_g1

0x127a,	// (0x00093ccf) clock_g2

0x0001,

0xf0b4,	// (0x000a1b09) clock_g

0x1284,	// (0x00093cd9) clock_t1_ParamLimits

0x1284,	// (0x00093cd9) clock_t1

0x1299,	// (0x00093cee) clock_t2_ParamLimits

0x1299,	// (0x00093cee) clock_t2

0x12ab,	// (0x00093d00) clock_t3_ParamLimits

0x12ab,	// (0x00093d00) clock_t3

0x12bd,	// (0x00093d12) clock_t4_ParamLimits

0x12bd,	// (0x00093d12) clock_t4

0x12cf,	// (0x00093d24) clock_t5_ParamLimits

0x12cf,	// (0x00093d24) clock_t5

0x12e4,	// (0x00093d39) clock_t6_ParamLimits

0x12e4,	// (0x00093d39) clock_t6

0x12f6,	// (0x00093d4b) clock_t7_ParamLimits

0x12f6,	// (0x00093d4b) clock_t7

0x1308,	// (0x00093d5d) clock_t8_ParamLimits

0x1308,	// (0x00093d5d) clock_t8

0x131e,	// (0x00093d73) clock_t9_ParamLimits

0x131e,	// (0x00093d73) clock_t9

0x0008,

0xf0b9,	// (0x000a1b0e) clock_t_ParamLimits

0xf0b9,	// (0x000a1b0e) clock_t

0x9e9d,	// (0x0009c8f2) popup_clock_analogue_window_cp02

0x9e9d,	// (0x0009c8f2) popup_clock_digital_window_cp01

0x9b89,	// (0x0009c5de) listscroll_help_pane

0x9b89,	// (0x0009c5de) phob_pre_status_pane

0x9ea5,	// (0x0009c8fa) grid_qdial_pane

0x9de4,	// (0x0009c839) listscroll_mce_pane

0x9de4,	// (0x0009c839) bg_notes_pane

0x9eaf,	// (0x0009c904) list_notes_pane

0x1334,	// (0x00093d89) scroll_pane_cp06

0x9ebd,	// (0x0009c912) bg_calc_paper_pane

0x1343,	// (0x00093d98) list_calc_pane

0x9ed1,	// (0x0009c926) bg_calc_display_pane

0x135d,	// (0x00093db2) calc_display_pane_t1

0x1372,	// (0x00093dc7) calc_display_pane_t2

0x1387,	// (0x00093ddc) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000a1b21) calc_display_pane_t

0x1399,	// (0x00093dee) cell_calc_pane_ParamLimits

0x1399,	// (0x00093dee) cell_calc_pane

0x9edd,	// (0x0009c932) bg_calc_paper_pane_g1

0x9ee9,	// (0x0009c93e) bg_calc_paper_pane_g2

0x9ef5,	// (0x0009c94a) bg_calc_paper_pane_g3

0x9f01,	// (0x0009c956) bg_calc_paper_pane_g4

0x9f0d,	// (0x0009c962) bg_calc_paper_pane_g5

0x13c6,	// (0x00093e1b) bg_calc_paper_pane_g6

0x13d7,	// (0x00093e2c) bg_calc_paper_pane_g7

0x13e8,	// (0x00093e3d) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000a1b28) bg_calc_paper_pane_g

0x13f9,	// (0x00093e4e) calc_bg_paper_pane_g9

0x140a,	// (0x00093e5f) list_calc_item_pane_ParamLimits

0x140a,	// (0x00093e5f) list_calc_item_pane

0x9f19,	// (0x0009c96e) list_calc_item_pane_g1

0x1437,	// (0x00093e8c) list_calc_item_pane_t1_ParamLimits

0x1437,	// (0x00093e8c) list_calc_item_pane_t1

0x1449,	// (0x00093e9e) list_calc_item_pane_t2_ParamLimits

0x1449,	// (0x00093e9e) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000a1b39) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000a1b39) list_calc_item_pane_t

0x9dfc,	// (0x0009c851) cell_calc_pane_g1

0x9f26,	// (0x0009c97b) grid_highlight_pane_cp02

0x1479,	// (0x00093ece) bg_calc_display_pane_g1

0x1482,	// (0x00093ed7) bg_calc_display_pane_g2

0x148c,	// (0x00093ee1) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000a1b43) bg_calc_display_pane_g

0x1495,	// (0x00093eea) cell_qdial_pane_ParamLimits

0x1495,	// (0x00093eea) cell_qdial_pane

0x14a9,	// (0x00093efe) cell_qdial_pane_g1_ParamLimits

0x14a9,	// (0x00093efe) cell_qdial_pane_g1

0x14b6,	// (0x00093f0b) cell_qdial_pane_g2_ParamLimits

0x14b6,	// (0x00093f0b) cell_qdial_pane_g2

0x9f48,	// (0x0009c99d) cell_qdial_pane_g3_ParamLimits

0x9f48,	// (0x0009c99d) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000a1b4a) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000a1b4a) cell_qdial_pane_g

0x14d3,	// (0x00093f28) cell_qdial_pane_t1_ParamLimits

0x14d3,	// (0x00093f28) cell_qdial_pane_t1

0x14eb,	// (0x00093f40) cell_qdial_pane_t2_ParamLimits

0x14eb,	// (0x00093f40) cell_qdial_pane_t2

0x14fe,	// (0x00093f53) cell_qdial_pane_t3_ParamLimits

0x14fe,	// (0x00093f53) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000a1b53) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000a1b53) cell_qdial_pane_t

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp04

0x9f54,	// (0x0009c9a9) thumbnail_qdial_pane_ParamLimits

0x9f54,	// (0x0009c9a9) thumbnail_qdial_pane

0x9fb0,	// (0x0009ca05) list_help_pane

0x9fb9,	// (0x0009ca0e) scroll_pane_cp02

0x1511,	// (0x00093f66) help_list_pane_t1_ParamLimits

0x1511,	// (0x00093f66) help_list_pane_t1

0x154b,	// (0x00093fa0) bg_notes_pane_g2

0x1553,	// (0x00093fa8) bg_notes_pane_g3

0x155b,	// (0x00093fb0) notes_bg_pane_g1

0x1563,	// (0x00093fb8) notes_bg_pane_g4

0x156b,	// (0x00093fc0) notes_bg_pane_g5

0x1573,	// (0x00093fc8) notes_bg_pane_g6

0x157b,	// (0x00093fd0) notes_bg_pane_g7

0x1583,	// (0x00093fd8) notes_bg_pane_g8

0x158b,	// (0x00093fe0) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000a1b71) notes_bg_pane_g

0x1593,	// (0x00093fe8) list_notes_text_pane_ParamLimits

0x1593,	// (0x00093fe8) list_notes_text_pane

0x9fc2,	// (0x0009ca17) list_notes_text_pane_g1

0xacc4,	// (0x0009d719) list_notes_text_pane_t1

0x15bf,	// (0x00094014) listscroll_cale_week_pane

0x15e4,	// (0x00094039) bg_cale_heading_pane

0x9fe5,	// (0x0009ca3a) bg_cale_pane_cp01

0x1606,	// (0x0009405b) cale_week_corner_pane

0x1620,	// (0x00094075) cale_week_day_heading_pane

0x1642,	// (0x00094097) cale_week_scroll_pane_g1

0x165f,	// (0x000940b4) cale_week_scroll_pane_g2

0x1672,	// (0x000940c7) cale_week_scroll_pane_g3

0x1685,	// (0x000940da) cale_week_scroll_pane_g4

0x1698,	// (0x000940ed) cale_week_scroll_pane_g5

0x16ab,	// (0x00094100) cale_week_scroll_pane_g6

0x16be,	// (0x00094113) cale_week_scroll_pane_g7

0x16d3,	// (0x00094128) cale_week_scroll_pane_g8

0x16e8,	// (0x0009413d) cale_week_scroll_pane_g9

0x16fb,	// (0x00094150) cale_week_scroll_pane_g10

0x170e,	// (0x00094163) cale_week_scroll_pane_g11

0x1721,	// (0x00094176) cale_week_scroll_pane_g12

0x1738,	// (0x0009418d) cale_week_scroll_pane_g13

0x1753,	// (0x000941a8) cale_week_scroll_pane_g14

0x176e,	// (0x000941c3) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000a1b80) cale_week_scroll_pane_g

0x179e,	// (0x000941f3) cale_week_time_pane

0x17b3,	// (0x00094208) grid_cale_week_pane

0xa014,	// (0x0009ca69) scroll_pane_cp08

0x17d2,	// (0x00094227) cell_cale_week_pane_ParamLimits

0x17d2,	// (0x00094227) cell_cale_week_pane

0x1834,	// (0x00094289) cale_week_day_heading_pane_t1

0x184f,	// (0x000942a4) cale_week_day_heading_pane_t2

0x186a,	// (0x000942bf) cale_week_day_heading_pane_t3

0x1885,	// (0x000942da) cale_week_day_heading_pane_t4

0x18a0,	// (0x000942f5) cale_week_day_heading_pane_t5

0x18bb,	// (0x00094310) cale_week_day_heading_pane_t6

0x18d6,	// (0x0009432b) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x000a1ba1) cale_week_day_heading_pane_t

0xa031,	// (0x0009ca86) bg_cale_side_pane

0x18f1,	// (0x00094346) cale_week_time_pane_t1

0x190b,	// (0x00094360) cale_week_time_pane_t2

0x1925,	// (0x0009437a) cale_week_time_pane_t3

0x193f,	// (0x00094394) cale_week_time_pane_t4

0x1959,	// (0x000943ae) cale_week_time_pane_t5

0x1973,	// (0x000943c8) cale_week_time_pane_t6

0x1993,	// (0x000943e8) cale_week_time_pane_t7

0x19b5,	// (0x0009440a) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x000a1bb0) cale_week_time_pane_t

0x19d9,	// (0x0009442e) cell_cale_week_pane_g2

0x19fd,	// (0x00094452) cell_cale_week_pane_g3_ParamLimits

0x19fd,	// (0x00094452) cell_cale_week_pane_g3

0xa03f,	// (0x0009ca94) grid_highlight_pane_cp07

0xa047,	// (0x0009ca9c) listscroll_gms_pane

0xa051,	// (0x0009caa6) grid_gms_pane

0xa05a,	// (0x0009caaf) listscroll_gms_pane_g1

0xa062,	// (0x0009cab7) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x000a1bc1) listscroll_gms_pane_g

0x1a15,	// (0x0009446a) scroll_pane_cp010

0x1a20,	// (0x00094475) cell_gms_pane_ParamLimits

0x1a20,	// (0x00094475) cell_gms_pane

0x1a30,	// (0x00094485) cell_gms_pane_g1

0xa06a,	// (0x0009cabf) cell_gms_pane_g2

0x9fc2,	// (0x0009ca17) cell_gms_pane_g3

0xa072,	// (0x0009cac7) cell_gms_pane_g4

0x0003,

0xf171,	// (0x000a1bc6) cell_gms_pane_g

0xa07b,	// (0x0009cad0) grid_highlight_pane_cp09

0x3b45,	// (0x0009659a) phob_pre_status_pane_g1

0x3b4d,	// (0x000965a2) phob_pre_status_pane_g2

0x3b55,	// (0x000965aa) phob_pre_status_pane_g3

0x3b5d,	// (0x000965b2) phob_pre_status_pane_g4

0x0004,

0xf54d,	// (0x000a1fa2) phob_pre_status_pane_g

0x3b6d,	// (0x000965c2) phob_pre_status_pane_t1

0x3b7d,	// (0x000965d2) phob_pre_status_pane_t2

0x3b8d,	// (0x000965e2) phob_pre_status_pane_t3

0x0002,

0xf558,	// (0x000a1fad) phob_pre_status_pane_t

0xa083,	// (0x0009cad8) bg_list_pane_cp05

0x1a40,	// (0x00094495) grid_vorec_pane

0x1a4a,	// (0x0009449f) vorec_t1

0x1a58,	// (0x000944ad) vorec_t2

0x1a66,	// (0x000944bb) vorec_t3

0x1a74,	// (0x000944c9) vorec_t4

0x8c1e,	// (0x0009b673) vorec_t5

0x8c2c,	// (0x0009b681) vorec_t6

0x0004,

0xf17a,	// (0x000a1bcf) vorec_t

0x8c3a,	// (0x0009b68f) wait_bar_pane_cp01

0x1a90,	// (0x000944e5) cell_vorec_pane_ParamLimits

0x1a90,	// (0x000944e5) cell_vorec_pane

0x1aa3,	// (0x000944f8) cell_vorec_pane_g1

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp05

0x9e51,	// (0x0009c8a6) cams_zoom_pane

0x9e51,	// (0x0009c8a6) image_vga_pane

0x9e6d,	// (0x0009c8c2) main_camera_pane_g1

0x9e6d,	// (0x0009c8c2) main_camera_pane_g2

0x9e6d,	// (0x0009c8c2) main_camera_pane_g3

0x9e6d,	// (0x0009c8c2) main_camera_pane_g4

0x9e6d,	// (0x0009c8c2) main_camera_pane_g5

0x9e6d,	// (0x0009c8c2) main_camera_pane_g6

0x9e6d,	// (0x0009c8c2) main_camera_pane_g7

0x0007,

0xf185,	// (0x000a1bda) main_camera_pane_g

0xa08b,	// (0x0009cae0) main_camera_pane_t1

0xa08b,	// (0x0009cae0) main_camera_pane_t2

0x0001,

0xf196,	// (0x000a1beb) main_camera_pane_t

0x1aad,	// (0x00094502) cams_zoom_pane_cp_ParamLimits

0x1aad,	// (0x00094502) cams_zoom_pane_cp

0x1adb,	// (0x00094530) image_cif_pane_ParamLimits

0x1adb,	// (0x00094530) image_cif_pane

0xecf8,	// (0x000a174d) image_subqcif_pane

0x1ae9,	// (0x0009453e) main_video_pane_g1_ParamLimits

0x1ae9,	// (0x0009453e) main_video_pane_g1

0x1b11,	// (0x00094566) main_video_pane_g2_ParamLimits

0x1b11,	// (0x00094566) main_video_pane_g2

0x1b44,	// (0x00094599) main_video_pane_g3_ParamLimits

0x1b44,	// (0x00094599) main_video_pane_g3

0x1b44,	// (0x00094599) main_video_pane_g4_ParamLimits

0x1b44,	// (0x00094599) main_video_pane_g4

0x1b72,	// (0x000945c7) main_video_pane_g5_ParamLimits

0x1b72,	// (0x000945c7) main_video_pane_g5

0xa09f,	// (0x0009caf4) main_video_pane_g6_ParamLimits

0xa09f,	// (0x0009caf4) main_video_pane_g6

0x0006,

0xf19b,	// (0x000a1bf0) main_video_pane_g_ParamLimits

0xf19b,	// (0x000a1bf0) main_video_pane_g

0x1b8e,	// (0x000945e3) main_video_pane_t1_ParamLimits

0x1b8e,	// (0x000945e3) main_video_pane_t1

0xa0b9,	// (0x0009cb0e) cams_zoom_pane_g1

0xa0b9,	// (0x0009cb0e) cams_zoom_pane_g2

0xa0b9,	// (0x0009cb0e) cams_zoom_pane_g3

0xa0b9,	// (0x0009cb0e) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000a1bff) cams_zoom_pane_g

0x1bd4,	// (0x00094629) grid_cams_pane

0x1be2,	// (0x00094637) linegrid_cams_pane

0x1bf0,	// (0x00094645) cell_cams_pane_ParamLimits

0x1bf0,	// (0x00094645) cell_cams_pane

0xa0c3,	// (0x0009cb18) cams_burst_image_pane

0xa0cb,	// (0x0009cb20) cell_cams_pane_g1

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp03

0x9dfc,	// (0x0009c851) mp_bg_pane_g1

0xecf8,	// (0x000a174d) bg_list_pane_cp03

0xecf8,	// (0x000a174d) bg_mp_pane

0xecf8,	// (0x000a174d) grid_mp_pane

0xa0b9,	// (0x0009cb0e) media_player_g1

0xa5f4,	// (0x0009d049) media_player_t1

0xa5f4,	// (0x0009d049) media_player_t2

0xa5f4,	// (0x0009d049) media_player_t3

0xa5f4,	// (0x0009d049) media_player_t4

0xa5f4,	// (0x0009d049) media_player_t5

0xa5f4,	// (0x0009d049) media_player_t6

0xa5f4,	// (0x0009d049) media_player_t7

0x0006,

0xf537,	// (0x000a1f8c) media_player_t

0xecf8,	// (0x000a174d) wait_bar_pane_cp02

0xf51c,	// (0x000a1f71) main_usb_pane_t

0xa860,	// (0x0009d2b5) cell_mp_pane

0x9dfc,	// (0x0009c851) cell_mp_pane_g1

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp06

0xa0e7,	// (0x0009cb3c) grid_skin_colour_pane

0xa0ef,	// (0x0009cb44) list_highlight_pane_cp03

0x1c03,	// (0x00094658) skin_g1

0xa0f7,	// (0x0009cb4c) skin_t1

0xa106,	// (0x0009cb5b) skin_t2

0x0001,

0xf1d8,	// (0x000a1c2d) skin_t

0x1c0d,	// (0x00094662) cell_skin_colour_pane_ParamLimits

0x1c0d,	// (0x00094662) cell_skin_colour_pane

0xa114,	// (0x0009cb69) cell_skin_colour_pane_g1

0x1c91,	// (0x000946e6) call_video_g1_ParamLimits

0x1c91,	// (0x000946e6) call_video_g1

0x1ca1,	// (0x000946f6) call_video_g2_ParamLimits

0x1ca1,	// (0x000946f6) call_video_g2

0x0001,

0xf1dd,	// (0x000a1c32) call_video_g_ParamLimits

0xf1dd,	// (0x000a1c32) call_video_g

0x1cfb,	// (0x00094750) call_video_uplink_pane_cp1_ParamLimits

0x1cfb,	// (0x00094750) call_video_uplink_pane_cp1

0xa126,	// (0x0009cb7b) call_video_uplink_pane_cp2

0x1dc7,	// (0x0009481c) video_down_crop_pane_ParamLimits

0x1dc7,	// (0x0009481c) video_down_crop_pane

0x1eb9,	// (0x0009490e) video_down_pane_ParamLimits

0x1eb9,	// (0x0009490e) video_down_pane

0xa12e,	// (0x0009cb83) video_down_subqcif_pane_ParamLimits

0xa12e,	// (0x0009cb83) video_down_subqcif_pane

0xa146,	// (0x0009cb9b) video_down_subqcif_pane_cp_ParamLimits

0xa146,	// (0x0009cb9b) video_down_subqcif_pane_cp

0xa16c,	// (0x0009cbc1) im_reading_pane_ParamLimits

0xa16c,	// (0x0009cbc1) im_reading_pane

0x1fd9,	// (0x00094a2e) im_writing_pane_ParamLimits

0x1fd9,	// (0x00094a2e) im_writing_pane

0x1ff7,	// (0x00094a4c) im_reading_pane_t1

0xa186,	// (0x0009cbdb) list_im_pane

0xa197,	// (0x0009cbec) scroll_pane_cp07

0x204f,	// (0x00094aa4) im_writing_pane_t1_ParamLimits

0x204f,	// (0x00094aa4) im_writing_pane_t1

0xa1b0,	// (0x0009cc05) im_writing_pane_t2_ParamLimits

0xa1b0,	// (0x0009cc05) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000a1c3c) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000a1c3c) im_writing_pane_t

0x9b89,	// (0x0009c5de) input_focus_pane_cp04

0x9b89,	// (0x0009c5de) input_focus_pane_cp05

0x2061,	// (0x00094ab6) list_im_single_pane_ParamLimits

0x2061,	// (0x00094ab6) list_im_single_pane

0x2088,	// (0x00094add) list_single_im_pane_t1

0xa083,	// (0x0009cad8) blid_accuracy_pane

0xa083,	// (0x0009cad8) blid_compass_pane

0xbfa5,	// (0x0009e9fa) main_location_t1

0xbfa5,	// (0x0009e9fa) main_location_t2

0xbfa5,	// (0x0009e9fa) main_location_t3

0x0002,

0xf546,	// (0x000a1f9b) main_location_t

0x9b89,	// (0x0009c5de) aid_levels_location

0x9dfc,	// (0x0009c851) blid_accuracy_pane_g1

0x9dfc,	// (0x0009c851) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x000a1c90) blid_accuracy_pane_g

0xa1f8,	// (0x0009cc4d) wml_content_pane

0xa236,	// (0x0009cc8b) wml_button_pane_ParamLimits

0xa236,	// (0x0009cc8b) wml_button_pane

0x2097,	// (0x00094aec) wml_list_single_large_pane_ParamLimits

0x2097,	// (0x00094aec) wml_list_single_large_pane

0x20c2,	// (0x00094b17) wml_list_single_medium_pane_ParamLimits

0x20c2,	// (0x00094b17) wml_list_single_medium_pane

0x20f4,	// (0x00094b49) wml_list_single_small_pane_ParamLimits

0x20f4,	// (0x00094b49) wml_list_single_small_pane

0xa24a,	// (0x0009cc9f) wml_selection_box_pane_ParamLimits

0xa24a,	// (0x0009cc9f) wml_selection_box_pane

0xa25d,	// (0x0009ccb2) wml_list_single_pane_t1

0xa26c,	// (0x0009ccc1) wml_list_single_medium_pane_t1

0xa27b,	// (0x0009ccd0) wml_list_single_large_pane_t1

0xa28a,	// (0x0009ccdf) input_focus_pane_cp02_ParamLimits

0xa28a,	// (0x0009ccdf) input_focus_pane_cp02

0xa29d,	// (0x0009ccf2) wml_selection_box_pane_g1

0xa2a6,	// (0x0009ccfb) wml_selection_box_pane_t1_ParamLimits

0xa2a6,	// (0x0009ccfb) wml_selection_box_pane_t1

0x9de4,	// (0x0009c839) bg_wml_button_pane_ParamLimits

0x9de4,	// (0x0009c839) bg_wml_button_pane

0xa2be,	// (0x0009cd13) wml_button_pane_g1

0xa2c6,	// (0x0009cd1b) wml_button_pane_t1

0xa2be,	// (0x0009cd13) wml_button_bg_pane_g1

0xa2d6,	// (0x0009cd2b) wml_button_bg_pane_g2

0xa2de,	// (0x0009cd33) wml_button_bg_pane_g3

0xa2e6,	// (0x0009cd3b) wml_button_bg_pane_g4

0xa2ee,	// (0x0009cd43) wml_button_bg_pane_g5

0xa2f6,	// (0x0009cd4b) wml_button_bg_pane_g6

0xa2fe,	// (0x0009cd53) wml_button_bg_pane_g7

0xa306,	// (0x0009cd5b) wml_button_bg_pane_g8

0xa30e,	// (0x0009cd63) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000a1c41) wml_button_bg_pane_g

0x2131,	// (0x00094b86) bg_list_pane_cp02

0xa316,	// (0x0009cd6b) mce_header_pane_ParamLimits

0xa316,	// (0x0009cd6b) mce_header_pane

0xa32c,	// (0x0009cd81) mce_icon_pane

0xa32c,	// (0x0009cd81) mce_image_pane

0xa335,	// (0x0009cd8a) mce_text_pane_ParamLimits

0xa335,	// (0x0009cd8a) mce_text_pane

0x213b,	// (0x00094b90) scroll_pane_cp03

0xa22e,	// (0x0009cc83) scroll_pane_cp04

0xa348,	// (0x0009cd9d) scroll_pane_cp05_ParamLimits

0xa348,	// (0x0009cd9d) scroll_pane_cp05

0x2145,	// (0x00094b9a) mce_header_field_pane_ParamLimits

0x2145,	// (0x00094b9a) mce_header_field_pane

0x2165,	// (0x00094bba) mce_header_field_pane_2_ParamLimits

0x2165,	// (0x00094bba) mce_header_field_pane_2

0x217b,	// (0x00094bd0) mce_header_field_pane_3

0x2183,	// (0x00094bd8) list_single_mce_message_pane_ParamLimits

0x2183,	// (0x00094bd8) list_single_mce_message_pane

0x21b1,	// (0x00094c06) list_single_mce_smart_pane_ParamLimits

0x21b1,	// (0x00094c06) list_single_mce_smart_pane

0xa354,	// (0x0009cda9) input_focus_pane_cp03

0xa35d,	// (0x0009cdb2) list_header_data_pane

0x21ea,	// (0x00094c3f) mce_header_field_pane_t1

0x21f8,	// (0x00094c4d) list_single_mce_header_pane_ParamLimits

0x21f8,	// (0x00094c4d) list_single_mce_header_pane

0xa365,	// (0x0009cdba) list_single_mce_header_pane_t1

0xa374,	// (0x0009cdc9) list_single_mce_message_pane_g1

0xa37c,	// (0x0009cdd1) list_single_mce_message_pane_t1

0x224e,	// (0x00094ca3) bg_cale_heading_pane_cp01_ParamLimits

0x224e,	// (0x00094ca3) bg_cale_heading_pane_cp01

0xa38a,	// (0x0009cddf) bg_cale_pane_cp02_ParamLimits

0xa38a,	// (0x0009cddf) bg_cale_pane_cp02

0x229c,	// (0x00094cf1) cale_month_corner_pane

0x22bb,	// (0x00094d10) cale_month_day_heading_pane_ParamLimits

0x22bb,	// (0x00094d10) cale_month_day_heading_pane

0x2321,	// (0x00094d76) cale_month_pane_g1_ParamLimits

0x2321,	// (0x00094d76) cale_month_pane_g1

0x2364,	// (0x00094db9) cale_month_pane_g2_ParamLimits

0x2364,	// (0x00094db9) cale_month_pane_g2

0x239e,	// (0x00094df3) cale_month_pane_g3_ParamLimits

0x239e,	// (0x00094df3) cale_month_pane_g3

0x23ee,	// (0x00094e43) cale_month_pane_g4_ParamLimits

0x23ee,	// (0x00094e43) cale_month_pane_g4

0x243e,	// (0x00094e93) cale_month_pane_g5_ParamLimits

0x243e,	// (0x00094e93) cale_month_pane_g5

0x248e,	// (0x00094ee3) cale_month_pane_g6_ParamLimits

0x248e,	// (0x00094ee3) cale_month_pane_g6

0x24de,	// (0x00094f33) cale_month_pane_g7_ParamLimits

0x24de,	// (0x00094f33) cale_month_pane_g7

0x2546,	// (0x00094f9b) cale_month_pane_g8_ParamLimits

0x2546,	// (0x00094f9b) cale_month_pane_g8

0x25ae,	// (0x00095003) cale_month_pane_g9_ParamLimits

0x25ae,	// (0x00095003) cale_month_pane_g9

0x260c,	// (0x00095061) cale_month_pane_g10_ParamLimits

0x260c,	// (0x00095061) cale_month_pane_g10

0x266a,	// (0x000950bf) cale_month_pane_g11_ParamLimits

0x266a,	// (0x000950bf) cale_month_pane_g11

0x26be,	// (0x00095113) cale_month_pane_g12_ParamLimits

0x26be,	// (0x00095113) cale_month_pane_g12

0x2714,	// (0x00095169) cale_month_pane_g13_ParamLimits

0x2714,	// (0x00095169) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000a1c54) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000a1c54) cale_month_pane_g

0x276a,	// (0x000951bf) cale_month_week_pane

0x278e,	// (0x000951e3) grid_cale_month_pane_ParamLimits

0x278e,	// (0x000951e3) grid_cale_month_pane

0x27eb,	// (0x00095240) cale_month_day_heading_pane_t1

0x2871,	// (0x000952c6) cale_month_day_heading_pane_t2

0x28ea,	// (0x0009533f) cale_month_day_heading_pane_t3

0x2963,	// (0x000953b8) cale_month_day_heading_pane_t4

0x29dc,	// (0x00095431) cale_month_day_heading_pane_t5

0x2a55,	// (0x000954aa) cale_month_day_heading_pane_t6

0x2ace,	// (0x00095523) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000a1c6f) cale_month_day_heading_pane_t

0xa031,	// (0x0009ca86) bg_cale_side_pane_cp01

0x2b5f,	// (0x000955b4) cale_month_week_pane_t1

0x2b78,	// (0x000955cd) cale_month_week_pane_t2

0x2b91,	// (0x000955e6) cale_month_week_pane_t3

0x2baa,	// (0x000955ff) cale_month_week_pane_t4

0x2bc5,	// (0x0009561a) cale_month_week_pane_t5

0x2be6,	// (0x0009563b) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000a1c7e) cale_month_week_pane_t

0x2c07,	// (0x0009565c) cell_cale_month_pane_ParamLimits

0x2c07,	// (0x0009565c) cell_cale_month_pane

0x2d2d,	// (0x00095782) cell_cale_month_pane_g1

0x2d39,	// (0x0009578e) cell_cale_month_pane_t1_ParamLimits

0x2d39,	// (0x0009578e) cell_cale_month_pane_t1

0xa03f,	// (0x0009ca94) grid_highlight_pane_cp08

0x9dfc,	// (0x0009c851) main_smil_g1

0x2d65,	// (0x000957ba) smil_status_pane

0xa3c9,	// (0x0009ce1e) smil_text_pane

0xbe7d,	// (0x0009e8d2) bg_popup_call3_rect_pane_g8

0xbe85,	// (0x0009e8da) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x000a1f1c) bg_popup_call3_rect_pane_g

0xc07c,	// (0x0009ead1) smil_status_volume_pane_g1

0xa3d3,	// (0x0009ce28) smil_status_pane_t1

0x3eee,	// (0x00096943) volume_smil_pane

0xa3ea,	// (0x0009ce3f) list_smil_text_pane

0x2d78,	// (0x000957cd) scroll_pane_cp011

0x2d83,	// (0x000957d8) smil_text_list_pane_t1_ParamLimits

0x2d83,	// (0x000957d8) smil_text_list_pane_t1

0x2e10,	// (0x00095865) aid_volume_smil_ParamLimits

0x2e10,	// (0x00095865) aid_volume_smil

0x9dfc,	// (0x0009c851) smil_volume_pane_g1

0x9dfc,	// (0x0009c851) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x000a1c90) smil_volume_pane_g

0x15bf,	// (0x00094014) listscroll_cale_day_pane

0xa3f4,	// (0x0009ce49) bg_cale_pane

0xa40c,	// (0x0009ce61) list_cale_pane

0xa42f,	// (0x0009ce84) scroll_pane_cp09

0xa440,	// (0x0009ce95) cale_bg_pane_g1

0xa448,	// (0x0009ce9d) cale_bg_pane_g2

0xa450,	// (0x0009cea5) cale_bg_pane_g3

0xa458,	// (0x0009cead) cale_bg_pane_g4

0xa460,	// (0x0009ceb5) cale_bg_pane_g5

0xa468,	// (0x0009cebd) cale_bg_pane_g6

0xa470,	// (0x0009cec5) cale_bg_pane_g7

0xa478,	// (0x0009cecd) cale_bg_pane_g8

0xa480,	// (0x0009ced5) cale_bg_pane_g9

0x0008,

0xf240,	// (0x000a1c95) cale_bg_pane_g

0x2e3a,	// (0x0009588f) list_cale_time_pane_ParamLimits

0x2e3a,	// (0x0009588f) list_cale_time_pane

0xa488,	// (0x0009cedd) list_cale_time_pane_g1_ParamLimits

0xa488,	// (0x0009cedd) list_cale_time_pane_g1

0xa494,	// (0x0009cee9) list_cale_time_pane_g2_ParamLimits

0xa494,	// (0x0009cee9) list_cale_time_pane_g2

0x2e62,	// (0x000958b7) list_cale_time_pane_g3_ParamLimits

0x2e62,	// (0x000958b7) list_cale_time_pane_g3

0x2e70,	// (0x000958c5) list_cale_time_pane_g4_ParamLimits

0x2e70,	// (0x000958c5) list_cale_time_pane_g4

0x2e7e,	// (0x000958d3) list_cale_time_pane_g5_ParamLimits

0x2e7e,	// (0x000958d3) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x000a1ca8) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x000a1ca8) list_cale_time_pane_g

0xa4ae,	// (0x0009cf03) list_cale_time_pane_t1_ParamLimits

0xa4ae,	// (0x0009cf03) list_cale_time_pane_t1

0xa4d6,	// (0x0009cf2b) list_cale_time_pane_t2_ParamLimits

0xa4d6,	// (0x0009cf2b) list_cale_time_pane_t2

0x3153,	// (0x00095ba8) aid_blid_cardinal_pane

0x3195,	// (0x00095bea) compass_pane_t4

0xa4fe,	// (0x0009cf53) list_cale_time_pane_t4_ParamLimits

0xa4fe,	// (0x0009cf53) list_cale_time_pane_t4

0x31a3,	// (0x00095bf8) compass_pane_t5

0x31b3,	// (0x00095c08) compass_pane_t6

0x31c1,	// (0x00095c16) compass_pane_t7

0xa97a,	// (0x0009d3cf) navi_pane_cc_t1

0xab57,	// (0x0009d5ac) aid_phob_thumbnail_center_pane

0x35de,	// (0x00096033) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x000a1cb5) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x000a1cb5) list_cale_time_pane_t

0x97e0,	// (0x0009c235) bg_popup_window_pane_cp02_ParamLimits

0x97e0,	// (0x0009c235) bg_popup_window_pane_cp02

0xa526,	// (0x0009cf7b) heading_pane_cp01_ParamLimits

0xa526,	// (0x0009cf7b) heading_pane_cp01

0xa532,	// (0x0009cf87) loc_req_pane_ParamLimits

0xa532,	// (0x0009cf87) loc_req_pane

0xa542,	// (0x0009cf97) loc_type_pane_ParamLimits

0xa542,	// (0x0009cf97) loc_type_pane

0xa554,	// (0x0009cfa9) loc_type_pane_t1_ParamLimits

0xa554,	// (0x0009cfa9) loc_type_pane_t1

0xa566,	// (0x0009cfbb) loc_type_pane_t2_ParamLimits

0xa566,	// (0x0009cfbb) loc_type_pane_t2

0xa578,	// (0x0009cfcd) loc_type_pane_t3_ParamLimits

0xa578,	// (0x0009cfcd) loc_type_pane_t3

0x0002,

0xf267,	// (0x000a1cbc) loc_type_pane_t_ParamLimits

0xf267,	// (0x000a1cbc) loc_type_pane_t

0xa58a,	// (0x0009cfdf) list_loc_req_pane

0xa594,	// (0x0009cfe9) scroll_pane_cp012

0x2e8c,	// (0x000958e1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e8c,	// (0x000958e1) list_single_loc_request_popup_menu_pane

0xa59f,	// (0x0009cff4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa59f,	// (0x0009cff4) list_single_loc_request_popup_menu_pane_g1

0xa5ab,	// (0x0009d000) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5ab,	// (0x0009d000) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x000a1cc3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x000a1cc3) list_single_loc_request_popup_menu_pane_g

0xa5b7,	// (0x0009d00c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5b7,	// (0x0009d00c) list_single_loc_request_popup_menu_pane_t1

0x2ea6,	// (0x000958fb) bg_popup_window_pane_cp03_ParamLimits

0x2ea6,	// (0x000958fb) bg_popup_window_pane_cp03

0x2eb4,	// (0x00095909) heading_loc_req_pane_ParamLimits

0x2eb4,	// (0x00095909) heading_loc_req_pane

0x2ec0,	// (0x00095915) popup_dyc_status_message_window_g1_ParamLimits

0x2ec0,	// (0x00095915) popup_dyc_status_message_window_g1

0x2ecc,	// (0x00095921) popup_dyc_status_message_window_t1_ParamLimits

0x2ecc,	// (0x00095921) popup_dyc_status_message_window_t1

0x2ede,	// (0x00095933) popup_dyc_status_message_window_t2_ParamLimits

0x2ede,	// (0x00095933) popup_dyc_status_message_window_t2

0x2ef0,	// (0x00095945) popup_dyc_status_message_window_t3_ParamLimits

0x2ef0,	// (0x00095945) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x000a1cc8) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x000a1cc8) popup_dyc_status_message_window_t

0x9b89,	// (0x0009c5de) bg_heading_pane_cp01

0xa5cd,	// (0x0009d022) heading_loc_req_pane_g1

0xa5d5,	// (0x0009d02a) heading_loc_req_pane_g2

0xa5dd,	// (0x0009d032) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x000a1ccf) heading_loc_req_pane_g

0xa5e5,	// (0x0009d03a) heading_loc_req_pane_t1

0xa604,	// (0x0009d059) bg_popup_sub_pane_cp01_ParamLimits

0xa604,	// (0x0009d059) bg_popup_sub_pane_cp01

0xa612,	// (0x0009d067) popup_cale_events_window_g1_ParamLimits

0xa612,	// (0x0009d067) popup_cale_events_window_g1

0xa632,	// (0x0009d087) popup_cale_events_window_g2_ParamLimits

0xa632,	// (0x0009d087) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x000a1cf1) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x000a1cf1) popup_cale_events_window_g

0xa652,	// (0x0009d0a7) popup_cale_events_window_t1_ParamLimits

0xa652,	// (0x0009d0a7) popup_cale_events_window_t1

0xa664,	// (0x0009d0b9) popup_cale_events_window_t2_ParamLimits

0xa664,	// (0x0009d0b9) popup_cale_events_window_t2

0xa6a2,	// (0x0009d0f7) popup_cale_events_window_t3_ParamLimits

0xa6a2,	// (0x0009d0f7) popup_cale_events_window_t3

0xa6dc,	// (0x0009d131) popup_cale_events_window_t4_ParamLimits

0xa6dc,	// (0x0009d131) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x000a1cf6) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x000a1cf6) popup_cale_events_window_t

0x2f1a,	// (0x0009596f) call_type_pane

0xb36a,	// (0x0009ddbf) popup_call_status_window_g1

0x2f26,	// (0x0009597b) popup_call_status_window_g2

0x2f32,	// (0x00095987) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x000a1cff) popup_call_status_window_g

0xa712,	// (0x0009d167) call_type_pane_g1

0xa71b,	// (0x0009d170) call_type_pane_g2

0x0001,

0xf2b1,	// (0x000a1d06) call_type_pane_g

0x9b89,	// (0x0009c5de) bg_popup_sub_pane_cp02

0xa724,	// (0x0009d179) listscroll_popup_wml_pane

0xa72c,	// (0x0009d181) list_wml_pane

0xa736,	// (0x0009d18b) scroll_pane_cp013

0xa741,	// (0x0009d196) list_single_graphic_popup_wml_pane_ParamLimits

0xa741,	// (0x0009d196) list_single_graphic_popup_wml_pane

0x9dfc,	// (0x0009c851) list_single_graphic_popup_wml_pane_g1

0xa755,	// (0x0009d1aa) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x000a1d0b) list_single_graphic_popup_wml_pane_g

0xa75d,	// (0x0009d1b2) list_single_graphic_popup_wml_pane_t1

0xa773,	// (0x0009d1c8) aid_call_pane

0x9ddc,	// (0x0009c831) popup_clock_analogue_window_g1

0x9ddc,	// (0x0009c831) popup_clock_analogue_window_g2

0x2f3e,	// (0x00095993) popup_clock_analogue_window_g3

0x2f3e,	// (0x00095993) popup_clock_analogue_window_g4

0x9dfc,	// (0x0009c851) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x000a1d10) popup_clock_analogue_window_g

0x2f46,	// (0x0009599b) popup_clock_analogue_window_t1

0x2f54,	// (0x000959a9) clock_digital_number_pane_ParamLimits

0x2f54,	// (0x000959a9) clock_digital_number_pane

0x2f60,	// (0x000959b5) clock_digital_number_pane_cp02_ParamLimits

0x2f60,	// (0x000959b5) clock_digital_number_pane_cp02

0x2f6c,	// (0x000959c1) clock_digital_number_pane_cp03_ParamLimits

0x2f6c,	// (0x000959c1) clock_digital_number_pane_cp03

0x2f78,	// (0x000959cd) clock_digital_number_pane_cp04_ParamLimits

0x2f78,	// (0x000959cd) clock_digital_number_pane_cp04

0x2f84,	// (0x000959d9) clock_digital_separator_pane_ParamLimits

0x2f84,	// (0x000959d9) clock_digital_separator_pane

0x2f90,	// (0x000959e5) popup_clock_digital_window_t1

0x9dfc,	// (0x0009c851) clock_digital_number_pane_g1

0x9dfc,	// (0x0009c851) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x000a1c90) clock_digital_number_pane_g

0x9dfc,	// (0x0009c851) clock_digital_separator_pane_g1

0x9dfc,	// (0x0009c851) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x000a1c90) clock_digital_separator_pane_g

0x9b89,	// (0x0009c5de) bg_popup_window_pane_cp04

0xa77b,	// (0x0009d1d0) heading_pane_cp03

0xa083,	// (0x0009cad8) listscroll_popup_gms_pane

0x9b89,	// (0x0009c5de) grid_large_graphic_popup_pane

0xa784,	// (0x0009d1d9) listscroll_popup_gms_pane_g1

0xa78d,	// (0x0009d1e2) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x000a1d1b) listscroll_popup_gms_pane_g

0xa796,	// (0x0009d1eb) scroll_pane_cp014

0x9e51,	// (0x0009c8a6) cell_large_graphic_popup_pane_ParamLimits

0x9e51,	// (0x0009c8a6) cell_large_graphic_popup_pane

0x9e5f,	// (0x0009c8b4) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_large_graphic_popup_pane_g1

0xa79f,	// (0x0009d1f4) cell_large_graphic_popup_pane_g2_ParamLimits

0xa79f,	// (0x0009d1f4) cell_large_graphic_popup_pane_g2

0xa7ad,	// (0x0009d202) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7ad,	// (0x0009d202) cell_large_graphic_popup_pane_g3

0xa7bb,	// (0x0009d210) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7bb,	// (0x0009d210) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x000a1d20) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x000a1d20) cell_large_graphic_popup_pane_g

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp010

0x9dfc,	// (0x0009c851) bg_popup_call_pane_g1

0xa7cc,	// (0x0009d221) list_single_graphic_popup_conf_pane_ParamLimits

0xa7cc,	// (0x0009d221) list_single_graphic_popup_conf_pane

0xa7df,	// (0x0009d234) list_highlight_pane_cp01

0xa7e8,	// (0x0009d23d) list_single_graphic_popup_conf_pane_g1

0xa7f0,	// (0x0009d245) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x000a1d29) list_single_graphic_popup_conf_pane_g

0xa7f8,	// (0x0009d24d) list_single_graphic_popup_conf_pane_t1

0xa806,	// (0x0009d25b) linegrid_cams_pane_g1

0x2fad,	// (0x00095a02) linegrid_cams_pane_g2

0x9fc2,	// (0x0009ca17) linegrid_cams_pane_g3

0xa80f,	// (0x0009d264) linegrid_cams_pane_g4

0x2fb6,	// (0x00095a0b) linegrid_cams_pane_g5

0x2fbf,	// (0x00095a14) linegrid_cams_pane_g6

0xa072,	// (0x0009cac7) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x000a1d2e) linegrid_cams_pane_g

0xa818,	// (0x0009d26d) popup_clock_analogue_window

0xa818,	// (0x0009d26d) popup_clock_digital_window

0x9b89,	// (0x0009c5de) popup_phob_thumbnail_window

0x9dfc,	// (0x0009c851) call_video_uplink_pane_g1

0xa821,	// (0x0009d276) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x000a1d3d) call_video_uplink_pane_g

0xa829,	// (0x0009d27e) video_uplink_pane

0xa831,	// (0x0009d286) mce_image_pane_g1

0x2fc8,	// (0x00095a1d) mce_image_pane_g2

0x2fd0,	// (0x00095a25) mce_image_pane_g3

0x2fd8,	// (0x00095a2d) mce_image_pane_g4

0x2fe0,	// (0x00095a35) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x000a1d42) mce_image_pane_g

0xa83b,	// (0x0009d290) control_top_pane_stacon_cp01_ParamLimits

0xa83b,	// (0x0009d290) control_top_pane_stacon_cp01

0xa84f,	// (0x0009d2a4) uni_indicator_pane_stacon_cp01_ParamLimits

0xa84f,	// (0x0009d2a4) uni_indicator_pane_stacon_cp01

0xa860,	// (0x0009d2b5) bg_popup_sub_pane_cp03

0x2fe8,	// (0x00095a3d) chi_dic_find_pane

0x2ff0,	// (0x00095a45) listscroll_chi_dic_pane

0x2ff9,	// (0x00095a4e) main_pane_chidic_g1

0x300c,	// (0x00095a61) chi_dic_find_pane_t1

0xa86a,	// (0x0009d2bf) find_chidic_pane

0xa873,	// (0x0009d2c8) chi_dic_list_pane_ParamLimits

0xa873,	// (0x0009d2c8) chi_dic_list_pane

0xa884,	// (0x0009d2d9) scroll_pane_cp020

0x301a,	// (0x00095a6f) find_chidic_pane_t1

0x9b89,	// (0x0009c5de) input_focus_pane_cp06

0x3029,	// (0x00095a7e) list_chi_dic_pane_ParamLimits

0x3029,	// (0x00095a7e) list_chi_dic_pane

0x3046,	// (0x00095a9b) list_chi_dic_pane_t1_ParamLimits

0x3046,	// (0x00095a9b) list_chi_dic_pane_t1

0x9b89,	// (0x0009c5de) list_highlight_pane_cp020

0xa88c,	// (0x0009d2e1) bg_cale_heading_pane_g1

0x3059,	// (0x00095aae) bg_cale_heading_pane_g2

0x3061,	// (0x00095ab6) bg_cale_heading_pane_g3

0x3069,	// (0x00095abe) bg_cale_heading_pane_g4

0x3073,	// (0x00095ac8) bg_cale_heading_pane_g5

0x307d,	// (0x00095ad2) bg_cale_heading_pane_g6

0x3085,	// (0x00095ada) bg_cale_heading_pane_g7

0x308d,	// (0x00095ae2) bg_cale_heading_pane_g8

0x3097,	// (0x00095aec) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x000a1d4d) bg_cale_heading_pane_g

0xa88c,	// (0x0009d2e1) bg_cale_side_pane_g1

0x30a1,	// (0x00095af6) bg_cale_side_pane_g2

0x30ab,	// (0x00095b00) bg_cale_side_pane_g3

0x30b5,	// (0x00095b0a) bg_cale_side_pane_g4

0x30bf,	// (0x00095b14) bg_cale_side_pane_g5

0x30c9,	// (0x00095b1e) bg_cale_side_pane_g6

0x30d3,	// (0x00095b28) bg_cale_side_pane_g7

0x30dd,	// (0x00095b32) bg_cale_side_pane_g8

0x30e5,	// (0x00095b3a) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x000a1d60) bg_cale_side_pane_g

0x30ed,	// (0x00095b42) popup_call_status_window_ParamLimits

0x30ed,	// (0x00095b42) popup_call_status_window

0xa894,	// (0x0009d2e9) stacon_top_pane

0xa89c,	// (0x0009d2f1) status_pane_ParamLimits

0xa89c,	// (0x0009d2f1) status_pane

0xa8b1,	// (0x0009d306) status_small_pane

0xa8b9,	// (0x0009d30e) control_pane

0x9b89,	// (0x0009c5de) stacon_bottom_pane

0xa8c1,	// (0x0009d316) list_single_mce_smart_pane_t1_ParamLimits

0xa8c1,	// (0x0009d316) list_single_mce_smart_pane_t1

0xa8d4,	// (0x0009d329) list_single_mce_smart_pane_t2_ParamLimits

0xa8d4,	// (0x0009d329) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x000a1d73) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x000a1d73) list_single_mce_smart_pane_t

0x30f9,	// (0x00095b4e) compass_pane

0x3105,	// (0x00095b5a) main_location2_pane_t1

0x3119,	// (0x00095b6e) main_location2_pane_t2

0x312d,	// (0x00095b82) main_location2_pane_t3

0x0003,

0xf323,	// (0x000a1d78) main_location2_pane_t

0xa8f3,	// (0x0009d348) compass_pane_g1_ParamLimits

0xa8f3,	// (0x0009d348) compass_pane_g1

0x3177,	// (0x00095bcc) compass_pane_t1

0x3186,	// (0x00095bdb) compass_pane_t2

0x0005,

0xf32c,	// (0x000a1d81) compass_pane_t

0x31d1,	// (0x00095c26) text_secondary_cp61

0xa971,	// (0x0009d3c6) navi_pane_cams_g5

0xa9ed,	// (0x0009d442) navi_pane_im_t1

0xa9fb,	// (0x0009d450) navi_pane_mp_g1_ParamLimits

0xa9fb,	// (0x0009d450) navi_pane_mp_g1

0xaa0f,	// (0x0009d464) navi_pane_mp_g2_ParamLimits

0xaa0f,	// (0x0009d464) navi_pane_mp_g2

0xaa1b,	// (0x0009d470) navi_pane_mp_g3_ParamLimits

0xaa1b,	// (0x0009d470) navi_pane_mp_g3

0x0002,

0xf340,	// (0x000a1d95) navi_pane_mp_g_ParamLimits

0xf340,	// (0x000a1d95) navi_pane_mp_g

0xaa27,	// (0x0009d47c) navi_pane_mp_t1

0xaa35,	// (0x0009d48a) navi_pane_mp_t2

0x0002,

0xf347,	// (0x000a1d9c) navi_pane_mp_t

0xaaa0,	// (0x0009d4f5) navi_pane_vt_g1

0xaa27,	// (0x0009d47c) navi_pane_vt_t1

0xaaa8,	// (0x0009d4fd) navi_slider_pane

0xa083,	// (0x0009cad8) zooming_pane

0xaab8,	// (0x0009d50d) navi_slider_pane_g1

0x320c,	// (0x00095c61) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x000a1da3) navi_slider_pane_g

0xaadc,	// (0x0009d531) aid_levels_zoom

0xaae4,	// (0x0009d539) zooming_pane_g1

0xaaec,	// (0x0009d541) zooming_pane_g2

0xaaec,	// (0x0009d541) zooming_pane_g3

0x0002,

0xf35d,	// (0x000a1db2) zooming_pane_g

0xaaf4,	// (0x0009d549) level_10_zoom

0xaafd,	// (0x0009d552) level_11_zoom

0xab06,	// (0x0009d55b) level_1_zoom

0xab0f,	// (0x0009d564) level_2_zoom

0xab18,	// (0x0009d56d) level_3_zoom

0xab21,	// (0x0009d576) level_4_zoom

0xab2a,	// (0x0009d57f) level_5_zoom

0xab33,	// (0x0009d588) level_6_zoom

0xab3c,	// (0x0009d591) level_7_zoom

0xab45,	// (0x0009d59a) level_8_zoom

0xab4e,	// (0x0009d5a3) level_9_zoom

0xab5f,	// (0x0009d5b4) popup_phob_thumbnail_window_g1

0xab67,	// (0x0009d5bc) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x000a1db9) popup_phob_thumbnail_window_g

0x3b9d,	// (0x000965f2) level_1_location

0x3ba5,	// (0x000965fa) level_2_location

0x3bad,	// (0x00096602) level_3_location

0x3bb7,	// (0x0009660c) level_4_location

0xa083,	// (0x0009cad8) level_5_location

0x321e,	// (0x00095c73) mce_icon_pane_g1

0x3226,	// (0x00095c7b) mce_icon_pane_g2

0x0001,

0xf369,	// (0x000a1dbe) mce_icon_pane_g

0x322e,	// (0x00095c83) main_mup_pane_g1_ParamLimits

0x322e,	// (0x00095c83) main_mup_pane_g1

0x9e7b,	// (0x0009c8d0) main_mup_pane_g2_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g2

0x9e7b,	// (0x0009c8d0) main_mup_pane_g3_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g3

0x9e7b,	// (0x0009c8d0) main_mup_pane_g4_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g4

0x9e7b,	// (0x0009c8d0) main_mup_pane_g5_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g5

0x9e7b,	// (0x0009c8d0) main_mup_pane_g6_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g6

0x9e7b,	// (0x0009c8d0) main_mup_pane_g7_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g7

0x9e7b,	// (0x0009c8d0) main_mup_pane_g8_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g8

0x9e7b,	// (0x0009c8d0) main_mup_pane_g9_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g9

0x9e7b,	// (0x0009c8d0) main_mup_pane_g10_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g10

0x9e7b,	// (0x0009c8d0) main_mup_pane_g11_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g11

0x9e6d,	// (0x0009c8c2) main_mup_pane_g12_ParamLimits

0x9e6d,	// (0x0009c8c2) main_mup_pane_g12

0x9e7b,	// (0x0009c8d0) main_mup_pane_g13_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup_pane_g13

0x000c,

0xf36e,	// (0x000a1dc3) main_mup_pane_g_ParamLimits

0xf36e,	// (0x000a1dc3) main_mup_pane_g

0x9e89,	// (0x0009c8de) main_mup_pane_t1_ParamLimits

0x9e89,	// (0x0009c8de) main_mup_pane_t1

0x9e89,	// (0x0009c8de) main_mup_pane_t2_ParamLimits

0x9e89,	// (0x0009c8de) main_mup_pane_t2

0x9e89,	// (0x0009c8de) main_mup_pane_t3_ParamLimits

0x9e89,	// (0x0009c8de) main_mup_pane_t3

0xa08b,	// (0x0009cae0) main_mup_pane_t4_ParamLimits

0xa08b,	// (0x0009cae0) main_mup_pane_t4

0xa08b,	// (0x0009cae0) main_mup_pane_t5_ParamLimits

0xa08b,	// (0x0009cae0) main_mup_pane_t5

0xa0d3,	// (0x0009cb28) main_mup_pane_t6_ParamLimits

0xa0d3,	// (0x0009cb28) main_mup_pane_t6

0x0005,

0xf389,	// (0x000a1dde) main_mup_pane_t_ParamLimits

0xf389,	// (0x000a1dde) main_mup_pane_t

0xed22,	// (0x000a1777) mup_progress_pane_ParamLimits

0xed22,	// (0x000a1777) mup_progress_pane

0xc02a,	// (0x0009ea7f) mup_visualizer_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup_visualizer_pane

0xc02a,	// (0x0009ea7f) mup_volume_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup_volume_pane

0x9e6d,	// (0x0009c8c2) mup_visualizer_pane_g1_ParamLimits

0x9e6d,	// (0x0009c8c2) mup_visualizer_pane_g1

0xab6f,	// (0x0009d5c4) mup_visualizer_pane_g2_ParamLimits

0xab6f,	// (0x0009d5c4) mup_visualizer_pane_g2

0x9e5f,	// (0x0009c8b4) mup_visualizer_pane_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x000a1deb) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x000a1deb) mup_visualizer_pane_g

0xa0b9,	// (0x0009cb0e) mup_volume_pane_g1

0xa0b9,	// (0x0009cb0e) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) mup_volume_pane_g

0xa0b9,	// (0x0009cb0e) mup_progress_pane_g1

0xa0b9,	// (0x0009cb0e) mup_progress_pane_g2

0xa0b9,	// (0x0009cb0e) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x000a1df7) mup_progress_pane_g

0x9b89,	// (0x0009c5de) bg_popup_window_pane_cp05

0xab7d,	// (0x0009d5d2) heading_pane_cp02_ParamLimits

0xab7d,	// (0x0009d5d2) heading_pane_cp02

0xab97,	// (0x0009d5ec) list_popup_blid_pane

0xab9f,	// (0x0009d5f4) list_blid_sat_info_pane_ParamLimits

0xab9f,	// (0x0009d5f4) list_blid_sat_info_pane

0xabb2,	// (0x0009d607) list_blid_sat_info_pane_g1

0xabba,	// (0x0009d60f) list_blid_sat_info_pane_t1

0x3329,	// (0x00095d7e) mup_equalizer_pane_ParamLimits

0x3329,	// (0x00095d7e) mup_equalizer_pane

0x334a,	// (0x00095d9f) mup_equalizer_pane_cp1_ParamLimits

0x334a,	// (0x00095d9f) mup_equalizer_pane_cp1

0x336b,	// (0x00095dc0) mup_equalizer_pane_cp2_ParamLimits

0x336b,	// (0x00095dc0) mup_equalizer_pane_cp2

0x338c,	// (0x00095de1) mup_equalizer_pane_cp3_ParamLimits

0x338c,	// (0x00095de1) mup_equalizer_pane_cp3

0x33ad,	// (0x00095e02) mup_equalizer_pane_cp4_ParamLimits

0x33ad,	// (0x00095e02) mup_equalizer_pane_cp4

0x33ce,	// (0x00095e23) mup_equalizer_pane_cp5

0x33e4,	// (0x00095e39) mup_equalizer_pane_cp6

0x33fc,	// (0x00095e51) mup_equalizer_pane_cp7

0xbefd,	// (0x0009e952) bg_popup_call_poc_act_pane_g9

0xbf05,	// (0x0009e95a) bg_popup_call_poc_act_pane_g10

0xbf0d,	// (0x0009e962) bg_popup_call_poc_act_pane_g11

0x000a,

0x9de4,	// (0x0009c839) mup_scale_pane

0x9dfc,	// (0x0009c851) mup_scale_pane_g1

0xabc8,	// (0x0009d61d) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x000a1e13) mup_scale_pane_g

0xabec,	// (0x0009d641) msg_data_pane

0xabf4,	// (0x0009d649) scroll_pane_cp017

0x3426,	// (0x00095e7b) bg_list_pane_cp04_ParamLimits

0x3426,	// (0x00095e7b) bg_list_pane_cp04

0xabfc,	// (0x0009d651) msg_data_pane_g1

0x3442,	// (0x00095e97) msg_data_pane_g2

0x344a,	// (0x00095e9f) msg_data_pane_g3

0x3452,	// (0x00095ea7) msg_data_pane_g4

0x345a,	// (0x00095eaf) msg_data_pane_g5

0x3462,	// (0x00095eb7) msg_data_pane_g6

0x346a,	// (0x00095ebf) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x000a1e22) msg_data_pane_g

0x3472,	// (0x00095ec7) msg_text_pane_ParamLimits

0x3472,	// (0x00095ec7) msg_text_pane

0x34c0,	// (0x00095f15) qrid_highlight_pane_cp011_ParamLimits

0x34c0,	// (0x00095f15) qrid_highlight_pane_cp011

0x9b89,	// (0x0009c5de) msg_body_pane

0x9b89,	// (0x0009c5de) msg_header_pane

0xac0d,	// (0x0009d662) input_focus_pane_cp07

0xacda,	// (0x0009d72f) msg_header_pane_t1_ParamLimits

0xacda,	// (0x0009d72f) msg_header_pane_t1

0xacf0,	// (0x0009d745) msg_header_pane_t2_ParamLimits

0xacf0,	// (0x0009d745) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x000a1e36) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x000a1e36) msg_header_pane_t

0xac22,	// (0x0009d677) msg_body_pane_g1

0xad07,	// (0x0009d75c) msg_body_pane_t1_ParamLimits

0xad07,	// (0x0009d75c) msg_body_pane_t1

0xad38,	// (0x0009d78d) msg_body_pane_t2_ParamLimits

0xad38,	// (0x0009d78d) msg_body_pane_t2

0xad4a,	// (0x0009d79f) msg_body_pane_t3_ParamLimits

0xad4a,	// (0x0009d79f) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x000a1e3b) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x000a1e3b) msg_body_pane_t

0x353a,	// (0x00095f8f) main_viewer_pane_g1_ParamLimits

0x353a,	// (0x00095f8f) main_viewer_pane_g1

0x3546,	// (0x00095f9b) main_viewer_pane_g2_ParamLimits

0x3546,	// (0x00095f9b) main_viewer_pane_g2

0x3552,	// (0x00095fa7) main_viewer_pane_g3_ParamLimits

0x3552,	// (0x00095fa7) main_viewer_pane_g3

0x3563,	// (0x00095fb8) main_viewer_pane_g4_ParamLimits

0x3563,	// (0x00095fb8) main_viewer_pane_g4

0x3574,	// (0x00095fc9) main_viewer_pane_g5_ParamLimits

0x3574,	// (0x00095fc9) main_viewer_pane_g5

0x3574,	// (0x00095fc9) main_viewer_pane_g7_ParamLimits

0x3574,	// (0x00095fc9) main_viewer_pane_g7

0xa59f,	// (0x0009cff4) main_viewer_pane_g8_ParamLimits

0xa59f,	// (0x0009cff4) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x000a1e4b) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x000a1e4b) main_viewer_pane_g

0xac2a,	// (0x0009d67f) viewer_content_pane_ParamLimits

0xac2a,	// (0x0009d67f) viewer_content_pane

0x35b2,	// (0x00096007) main_postcard_pane_g1_ParamLimits

0x35b2,	// (0x00096007) main_postcard_pane_g1

0x35c0,	// (0x00096015) main_postcard_pane_g2_ParamLimits

0x35c0,	// (0x00096015) main_postcard_pane_g2

0x35ce,	// (0x00096023) main_postcard_pane_g3_ParamLimits

0x35ce,	// (0x00096023) main_postcard_pane_g3

0x0005,

0xf407,	// (0x000a1e5c) main_postcard_pane_g_ParamLimits

0xf407,	// (0x000a1e5c) main_postcard_pane_g

0x35de,	// (0x00096033) main_postcard_pane_g4

0xc08f,	// (0x0009eae4) smil_status_volume_pane_g2

0x360a,	// (0x0009605f) postcard_pane_ParamLimits

0x360a,	// (0x0009605f) postcard_pane

0xb36a,	// (0x0009ddbf) postcard_pane_g1_ParamLimits

0xb36a,	// (0x0009ddbf) postcard_pane_g1

0x363c,	// (0x00096091) postcard_pane_g2_ParamLimits

0x363c,	// (0x00096091) postcard_pane_g2

0x3648,	// (0x0009609d) postcard_pane_g3_ParamLimits

0x3648,	// (0x0009609d) postcard_pane_g3

0xac38,	// (0x0009d68d) postcard_pane_g4_ParamLimits

0xac38,	// (0x0009d68d) postcard_pane_g4

0x3654,	// (0x000960a9) postcard_pane_g5_ParamLimits

0x3654,	// (0x000960a9) postcard_pane_g5

0x3660,	// (0x000960b5) postcard_pane_g6_ParamLimits

0x3660,	// (0x000960b5) postcard_pane_g6

0xac46,	// (0x0009d69b) postcard_pane_g7_ParamLimits

0xac46,	// (0x0009d69b) postcard_pane_g7

0x0006,

0xf414,	// (0x000a1e69) postcard_pane_g_ParamLimits

0xf414,	// (0x000a1e69) postcard_pane_g

0x366c,	// (0x000960c1) main_mp2_pane_g1_ParamLimits

0x366c,	// (0x000960c1) main_mp2_pane_g1

0x3678,	// (0x000960cd) main_mp2_pane_g2_ParamLimits

0x3678,	// (0x000960cd) main_mp2_pane_g2

0x3684,	// (0x000960d9) main_mp2_pane_g3_ParamLimits

0x3684,	// (0x000960d9) main_mp2_pane_g3

0x0002,

0xf423,	// (0x000a1e78) main_mp2_pane_g_ParamLimits

0xf423,	// (0x000a1e78) main_mp2_pane_g

0x3690,	// (0x000960e5) main_mp2_pane_t1_ParamLimits

0x3690,	// (0x000960e5) main_mp2_pane_t1

0x36a7,	// (0x000960fc) main_mp2_pane_t2_ParamLimits

0x36a7,	// (0x000960fc) main_mp2_pane_t2

0x36b9,	// (0x0009610e) main_mp2_pane_t3_ParamLimits

0x36b9,	// (0x0009610e) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x000a1e7f) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x000a1e7f) main_mp2_pane_t

0xac54,	// (0x0009d6a9) pec_content_pane_ParamLimits

0xac54,	// (0x0009d6a9) pec_content_pane

0xa22e,	// (0x0009cc83) scroll_pane_cp015

0xac66,	// (0x0009d6bb) pec_attribute_pane_ParamLimits

0xac66,	// (0x0009d6bb) pec_attribute_pane

0x36cb,	// (0x00096120) pec_content_pane_g1_ParamLimits

0x36cb,	// (0x00096120) pec_content_pane_g1

0xad5c,	// (0x0009d7b1) pec_content_pane_t1_ParamLimits

0xad5c,	// (0x0009d7b1) pec_content_pane_t1

0xad6e,	// (0x0009d7c3) pec_content_pane_t2_ParamLimits

0xad6e,	// (0x0009d7c3) pec_content_pane_t2

0x0001,

0xf431,	// (0x000a1e86) pec_content_pane_t_ParamLimits

0xf431,	// (0x000a1e86) pec_content_pane_t

0x36d7,	// (0x0009612c) list_single_graphic_pane_cp01_ParamLimits

0x36d7,	// (0x0009612c) list_single_graphic_pane_cp01

0x9de4,	// (0x0009c839) bg_popup_sub_pane_cp04

0xad80,	// (0x0009d7d5) popup_mup_playback_window_g1

0xad8c,	// (0x0009d7e1) popup_mup_playback_window_t1

0xada1,	// (0x0009d7f6) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x000a1e8b) popup_mup_playback_window_t

0xadd8,	// (0x0009d82d) main_image_pane_g1_ParamLimits

0xadd8,	// (0x0009d82d) main_image_pane_g1

0xae1b,	// (0x0009d870) scroll_pane_cp018_ParamLimits

0xae1b,	// (0x0009d870) scroll_pane_cp018

0xae33,	// (0x0009d888) scroll_pane_cp016_ParamLimits

0xae33,	// (0x0009d888) scroll_pane_cp016

0x3771,	// (0x000961c6) smil2_image_pane_ParamLimits

0x3771,	// (0x000961c6) smil2_image_pane

0x37a1,	// (0x000961f6) smil2_root_pane_ParamLimits

0x37a1,	// (0x000961f6) smil2_root_pane

0x37cd,	// (0x00096222) smil2_text_pane_ParamLimits

0x37cd,	// (0x00096222) smil2_text_pane

0x9b89,	// (0x0009c5de) bg_list_pane_cp06

0xae6f,	// (0x0009d8c4) grid_radio_pane

0x9b89,	// (0x0009c5de) bg_popup_window_pane_cp06

0xae77,	// (0x0009d8cc) main_fmradio_pane_t1

0xbf55,	// (0x0009e9aa) heading_pane_cp04

0xae85,	// (0x0009d8da) main_fmradio_pane_t2

0xbf5d,	// (0x0009e9b2) popup_cale_lunar_info_window_g1

0xae93,	// (0x0009d8e8) main_fmradio_pane_t3

0xbf65,	// (0x0009e9ba) popup_cale_lunar_info_window_g2

0xaea1,	// (0x0009d8f6) main_fmradio_pane_t4

0x0001,

0xaeaf,	// (0x0009d904) main_fmradio_pane_t5

0x0004,

0xf529,	// (0x000a1f7e) popup_cale_lunar_info_window_g

0xf44b,	// (0x000a1ea0) main_fmradio_pane_t

0xaebd,	// (0x0009d912) wait_bar_pane_cp03

0xaec5,	// (0x0009d91a) cell_fmradio_pane_ParamLimits

0xaec5,	// (0x0009d91a) cell_fmradio_pane

0xac46,	// (0x0009d69b) cell_fmradio_pane_g1_ParamLimits

0xac46,	// (0x0009d69b) cell_fmradio_pane_g1

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp011

0xaed8,	// (0x0009d92d) poc_content_pane_ParamLimits

0xaed8,	// (0x0009d92d) poc_content_pane

0xaeea,	// (0x0009d93f) scroll_pane_cp019

0x380d,	// (0x00096262) popup_call_poc_act_window_ParamLimits

0x380d,	// (0x00096262) popup_call_poc_act_window

0x381a,	// (0x0009626f) popup_call_poc_inact_window_ParamLimits

0x381a,	// (0x0009626f) popup_call_poc_inact_window

0xf4ed,	// (0x000a1f42) bg_popup_call_poc_act_pane_g

0xbf15,	// (0x0009e96a) bg_popup_call_poc_inact_pane_g1

0xbf1d,	// (0x0009e972) bg_popup_call_poc_inact_pane_g2

0xaef2,	// (0x0009d947) popup_call_poc_act_window_g2

0xbf25,	// (0x0009e97a) bg_popup_call_poc_inact_pane_g3

0xbea5,	// (0x0009e8fa) bg_popup_call_poc_inact_pane_g4

0xbf2d,	// (0x0009e982) bg_popup_call_poc_inact_pane_g5

0xaefa,	// (0x0009d94f) popup_call_poc_act_window_t1_ParamLimits

0xaefa,	// (0x0009d94f) popup_call_poc_act_window_t1

0xaf22,	// (0x0009d977) popup_call_poc_act_window_t2_ParamLimits

0xaf22,	// (0x0009d977) popup_call_poc_act_window_t2

0xaf4a,	// (0x0009d99f) popup_call_poc_act_window_t3_ParamLimits

0xaf4a,	// (0x0009d99f) popup_call_poc_act_window_t3

0xaf72,	// (0x0009d9c7) popup_call_poc_act_window_t4_ParamLimits

0xaf72,	// (0x0009d9c7) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x000a1eab) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x000a1eab) popup_call_poc_act_window_t

0xbf35,	// (0x0009e98a) bg_popup_call_poc_inact_pane_g6

0xbf3d,	// (0x0009e992) bg_popup_call_poc_inact_pane_g7

0xbf45,	// (0x0009e99a) bg_popup_call_poc_inact_pane_g8

0xaf84,	// (0x0009d9d9) popup_call_poc_inact_window_g2

0xbf4d,	// (0x0009e9a2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf504,	// (0x000a1f59) bg_popup_call_poc_inact_pane_g

0xaf8c,	// (0x0009d9e1) popup_call_poc_inact_window_t1_ParamLimits

0xaf8c,	// (0x0009d9e1) popup_call_poc_inact_window_t1

0xafa1,	// (0x0009d9f6) popup_call_poc_inact_window_t2_ParamLimits

0xafa1,	// (0x0009d9f6) popup_call_poc_inact_window_t2

0xafb6,	// (0x0009da0b) popup_call_poc_inact_window_t3_ParamLimits

0xafb6,	// (0x0009da0b) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x000a1eb4) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x000a1eb4) popup_call_poc_inact_window_t

0xbff9,	// (0x0009ea4e) context_pane_ParamLimits

0x3ea5,	// (0x000968fa) signal_pane_ParamLimits

0xa083,	// (0x0009cad8) main_call2_pane

0x3e18,	// (0x0009686d) popup_phob_thumbnail2_window_ParamLimits

0x3e18,	// (0x0009686d) popup_phob_thumbnail2_window

0x34e8,	// (0x00095f3d) aid_hotspot_pointer_arrow_pane

0x34f0,	// (0x00095f45) aid_hotspot_pointer_hand_pane

0x3b65,	// (0x000965ba) phob_pre_status_pane_g5

0x9e51,	// (0x0009c8a6) cams_zoom_pane_ParamLimits

0x9e51,	// (0x0009c8a6) image_vga_pane_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g1_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g3_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g4_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g5_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g6_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000a1bda) main_camera_pane_g_ParamLimits

0xa08b,	// (0x0009cae0) main_camera_pane_t1_ParamLimits

0xa08b,	// (0x0009cae0) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000a1beb) main_camera_pane_t_ParamLimits

0x9de4,	// (0x0009c839) bg_popup_preview_window_pane_cp01_ParamLimits

0x9de4,	// (0x0009c839) bg_popup_preview_window_pane_cp01

0xafcb,	// (0x0009da20) popup_phob_thumbnail2_window_g1_ParamLimits

0xafcb,	// (0x0009da20) popup_phob_thumbnail2_window_g1

0x9b89,	// (0x0009c5de) call2_cli_visual_pane

0x3836,	// (0x0009628b) popup_call2_audio_conf_window_ParamLimits

0x3836,	// (0x0009628b) popup_call2_audio_conf_window

0x384b,	// (0x000962a0) popup_call2_audio_first_window_ParamLimits

0x384b,	// (0x000962a0) popup_call2_audio_first_window

0x38e9,	// (0x0009633e) popup_call2_audio_in_window_ParamLimits

0x38e9,	// (0x0009633e) popup_call2_audio_in_window

0x392b,	// (0x00096380) popup_call2_audio_out_window_ParamLimits

0x392b,	// (0x00096380) popup_call2_audio_out_window

0x398d,	// (0x000963e2) popup_call2_audio_second_window_ParamLimits

0x398d,	// (0x000963e2) popup_call2_audio_second_window

0x39eb,	// (0x00096440) popup_call2_audio_wait_window_ParamLimits

0x39eb,	// (0x00096440) popup_call2_audio_wait_window

0x9b89,	// (0x0009c5de) bg_popup_call2_act_pane_cp03

0x9dc6,	// (0x0009c81b) list_conf_pane_cp

0xafd7,	// (0x0009da2c) popup_call2_audio_conf_window_t1

0xafe5,	// (0x0009da3a) list_single_graphic_popup_conf2_pane_ParamLimits

0xafe5,	// (0x0009da3a) list_single_graphic_popup_conf2_pane

0xa7df,	// (0x0009d234) list_highlight_pane_cp04

0xaff8,	// (0x0009da4d) list_single_graphic_popup_conf2_pane_g1

0xa7f0,	// (0x0009d245) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x000a1ebb) list_single_graphic_popup_conf2_pane_g

0xb002,	// (0x0009da57) list_single_graphic_popup_conf2_pane_t1

0xb010,	// (0x0009da65) bg_popup_call2_act_pane_cp01_ParamLimits

0xb010,	// (0x0009da65) bg_popup_call2_act_pane_cp01

0xb09a,	// (0x0009daef) call_type_pane_cp05_ParamLimits

0xb09a,	// (0x0009daef) call_type_pane_cp05

0xb0ee,	// (0x0009db43) popup_call2_audio_second_window_g1_ParamLimits

0xb0ee,	// (0x0009db43) popup_call2_audio_second_window_g1

0xb142,	// (0x0009db97) popup_call2_audio_second_window_g2_ParamLimits

0xb142,	// (0x0009db97) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x000a1ec0) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x000a1ec0) popup_call2_audio_second_window_g

0xb1a7,	// (0x0009dbfc) popup_call2_audio_second_window_t1_ParamLimits

0xb1a7,	// (0x0009dbfc) popup_call2_audio_second_window_t1

0xb378,	// (0x0009ddcd) popup_call2_audio_second_window_t2_ParamLimits

0xb378,	// (0x0009ddcd) popup_call2_audio_second_window_t2

0xb3cb,	// (0x0009de20) popup_call2_audio_second_window_t3_ParamLimits

0xb3cb,	// (0x0009de20) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x000a1ec7) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x000a1ec7) popup_call2_audio_second_window_t

0x9b89,	// (0x0009c5de) bg_popup_call2_in_pane_cp02

0x9b93,	// (0x0009c5e8) call_type_pane_cp04

0x3a2a,	// (0x0009647f) popup_call2_audio_wait_window_g1

0x3a32,	// (0x00096487) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x000a1ed0) popup_call2_audio_wait_window_g

0x9bab,	// (0x0009c600) popup_call2_audio_wait_window_t3

0xb4be,	// (0x0009df13) bg_popup_call2_act_pane_ParamLimits

0xb4be,	// (0x0009df13) bg_popup_call2_act_pane

0xb57e,	// (0x0009dfd3) call_type_pane_cp03_ParamLimits

0xb57e,	// (0x0009dfd3) call_type_pane_cp03

0xb5e2,	// (0x0009e037) popup_call2_audio_first_window_g1_ParamLimits

0xb5e2,	// (0x0009e037) popup_call2_audio_first_window_g1

0xb652,	// (0x0009e0a7) popup_call2_audio_first_window_g2_ParamLimits

0xb652,	// (0x0009e0a7) popup_call2_audio_first_window_g2

0xb36a,	// (0x0009ddbf) popup_call2_audio_first_window_g3_ParamLimits

0xb36a,	// (0x0009ddbf) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x000a1ed5) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x000a1ed5) popup_call2_audio_first_window_g

0xb730,	// (0x0009e185) popup_call2_audio_first_window_t1_ParamLimits

0xb730,	// (0x0009e185) popup_call2_audio_first_window_t1

0xb833,	// (0x0009e288) popup_call2_audio_first_window_t4_ParamLimits

0xb833,	// (0x0009e288) popup_call2_audio_first_window_t4

0xb916,	// (0x0009e36b) popup_call2_audio_first_window_t5_ParamLimits

0xb916,	// (0x0009e36b) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x000a1ee0) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x000a1ee0) popup_call2_audio_first_window_t

0x9ddc,	// (0x0009c831) bg_popup_call2_act_pane_g1

0xbf6d,	// (0x0009e9c2) popup_cale_lunar_info_window_t1

0xbf7b,	// (0x0009e9d0) popup_cale_lunar_info_window_t2

0xbf89,	// (0x0009e9de) popup_cale_lunar_info_window_t3

0x9b89,	// (0x0009c5de) bg_popup_call2_bubble_pane

0xba17,	// (0x0009e46c) bg_popup_call2_in_pane_cp01_ParamLimits

0xba17,	// (0x0009e46c) bg_popup_call2_in_pane_cp01

0x9865,	// (0x0009c2ba) call_type_pane_cp02

0x3a3a,	// (0x0009648f) popup_call2_audio_out_window_g1_ParamLimits

0x3a3a,	// (0x0009648f) popup_call2_audio_out_window_g1

0xba5f,	// (0x0009e4b4) popup_call2_audio_out_window_g2_ParamLimits

0xba5f,	// (0x0009e4b4) popup_call2_audio_out_window_g2

0x3a66,	// (0x000964bb) popup_call2_audio_out_window_g3_ParamLimits

0x3a66,	// (0x000964bb) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x000a1ee9) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x000a1ee9) popup_call2_audio_out_window_g

0xba96,	// (0x0009e4eb) popup_call2_audio_out_window_t1_ParamLimits

0xba96,	// (0x0009e4eb) popup_call2_audio_out_window_t1

0xbaf5,	// (0x0009e54a) popup_call2_audio_out_window_t2_ParamLimits

0xbaf5,	// (0x0009e54a) popup_call2_audio_out_window_t2

0xbb49,	// (0x0009e59e) popup_call2_audio_out_window_t3_ParamLimits

0xbb49,	// (0x0009e59e) popup_call2_audio_out_window_t3

0xbb5f,	// (0x0009e5b4) popup_call2_audio_out_window_t4_ParamLimits

0xbb5f,	// (0x0009e5b4) popup_call2_audio_out_window_t4

0xbb75,	// (0x0009e5ca) popup_call2_audio_out_window_t5_ParamLimits

0xbb75,	// (0x0009e5ca) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x000a1ef2) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x000a1ef2) popup_call2_audio_out_window_t

0xbbd9,	// (0x0009e62e) bg_popup_call2_in_pane_ParamLimits

0xbbd9,	// (0x0009e62e) bg_popup_call2_in_pane

0xbc35,	// (0x0009e68a) popup_call2_audio_in_window_g1_ParamLimits

0xbc35,	// (0x0009e68a) popup_call2_audio_in_window_g1

0xbc6d,	// (0x0009e6c2) popup_call2_audio_in_window_g2_ParamLimits

0xbc6d,	// (0x0009e6c2) popup_call2_audio_in_window_g2

0xbca5,	// (0x0009e6fa) popup_call2_audio_in_window_g3_ParamLimits

0xbca5,	// (0x0009e6fa) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x000a1eff) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x000a1eff) popup_call2_audio_in_window_g

0xbcfd,	// (0x0009e752) popup_call2_audio_in_window_t1_ParamLimits

0xbcfd,	// (0x0009e752) popup_call2_audio_in_window_t1

0xbd7d,	// (0x0009e7d2) popup_call2_audio_in_window_t2_ParamLimits

0xbd7d,	// (0x0009e7d2) popup_call2_audio_in_window_t2

0xbdfd,	// (0x0009e852) popup_call2_audio_in_window_t3_ParamLimits

0xbdfd,	// (0x0009e852) popup_call2_audio_in_window_t3

0xbe17,	// (0x0009e86c) popup_call2_audio_in_window_t4_ParamLimits

0xbe17,	// (0x0009e86c) popup_call2_audio_in_window_t4

0xbe29,	// (0x0009e87e) popup_call2_audio_in_window_t5_ParamLimits

0xbe29,	// (0x0009e87e) popup_call2_audio_in_window_t5

0xbe3b,	// (0x0009e890) popup_call2_audio_in_window_t6_ParamLimits

0xbe3b,	// (0x0009e890) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x000a1f08) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x000a1f08) popup_call2_audio_in_window_t

0x9ddc,	// (0x0009c831) bg_popup_call2_in_pane_g1

0xbf97,	// (0x0009e9ec) popup_cale_lunar_info_window_t4

0x0003,

0xf52e,	// (0x000a1f83) popup_cale_lunar_info_window_t

0x9de4,	// (0x0009c839) bg_popup_call2_rect_pane_ParamLimits

0x9de4,	// (0x0009c839) bg_popup_call2_rect_pane

0x9b89,	// (0x0009c5de) call2_cli_visual_graphic_pane

0x9b89,	// (0x0009c5de) call2_cli_visual_text_pane

0x3ee1,	// (0x00096936) smil_status_volume_pane_g3

0x0002,

0x9dfc,	// (0x0009c851) call2_cli_visual_graphic_pane_g1

0x9dfc,	// (0x0009c851) call2_cli_visual_graphic_pane_g2

0x9dfc,	// (0x0009c851) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x000a1f15) call2_cli_visual_graphic_pane_g

0xbe4d,	// (0x0009e8a2) bg_popup_call2_rect_pane_g1

0x9fa8,	// (0x0009c9fd) bg_popup_call2_rect_pane_g2

0xbe55,	// (0x0009e8aa) bg_popup_call2_rect_pane_g3

0xbe5d,	// (0x0009e8b2) bg_popup_call2_rect_pane_g4

0xbe65,	// (0x0009e8ba) bg_popup_call2_rect_pane_g5

0xbe6d,	// (0x0009e8c2) bg_popup_call2_rect_pane_g6

0xbe75,	// (0x0009e8ca) bg_popup_call2_rect_pane_g7

0xbe7d,	// (0x0009e8d2) bg_popup_call2_rect_pane_g8

0xbe85,	// (0x0009e8da) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x000a1f1c) bg_popup_call2_rect_pane_g

0xbe8d,	// (0x0009e8e2) bg_popup_call2_bubble_pane_g1

0xbe95,	// (0x0009e8ea) bg_popup_call2_bubble_pane_g2

0xbe9d,	// (0x0009e8f2) bg_popup_call2_bubble_pane_g3

0xbea5,	// (0x0009e8fa) bg_popup_call2_bubble_pane_g4

0xbead,	// (0x0009e902) bg_popup_call2_bubble_pane_g5

0xbeb5,	// (0x0009e90a) bg_popup_call2_bubble_pane_g6

0xbebd,	// (0x0009e912) bg_popup_call2_bubble_pane_g7

0xbec5,	// (0x0009e91a) bg_popup_call2_bubble_pane_g8

0xbecd,	// (0x0009e922) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x000a1f2f) bg_popup_call2_bubble_pane_g

0x15cf,	// (0x00094024) aid_cale_week_size_cell_pane

0x9de4,	// (0x0009c839) aid_cams_cif_uncrop_pane_ParamLimits

0x9de4,	// (0x0009c839) aid_cams_cif_uncrop_pane

0x1bc8,	// (0x0009461d) aid_cams_size_cell_ParamLimits

0x1bc8,	// (0x0009461d) aid_cams_size_cell

0x1bd4,	// (0x00094629) grid_cams_pane_ParamLimits

0x1be2,	// (0x00094637) linegrid_cams_pane_ParamLimits

0x1cb9,	// (0x0009470e) call_video_pane_t1

0x1cda,	// (0x0009472f) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000a1c37) call_video_pane_t

0x2228,	// (0x00094c7d) aid_cale_month_size_cell_pane_ParamLimits

0x2228,	// (0x00094c7d) aid_cale_month_size_cell_pane

0xf572,	// (0x000a1fc7) smil_status_volume_pane_g

0x3eee,	// (0x00096943) volume_smil_pane_ParamLimits

0x0e70,	// (0x000938c5) aid_popup2_width_pane

0x14c6,	// (0x00093f1b) cell_qdial_pane_g4_ParamLimits

0x14c6,	// (0x00093f1b) cell_qdial_pane_g4

0x3153,	// (0x00095ba8) aid_blid_cardinal_pane_ParamLimits

0x3163,	// (0x00095bb8) aid_blid_destination_pane_ParamLimits

0x3163,	// (0x00095bb8) aid_blid_destination_pane

0x9de4,	// (0x0009c839) bg_popup_call_poc_act_pane_ParamLimits

0x9de4,	// (0x0009c839) bg_popup_call_poc_act_pane

0x9de4,	// (0x0009c839) bg_popup_call_poc_inact_pane_ParamLimits

0x9de4,	// (0x0009c839) bg_popup_call_poc_inact_pane

0xbed5,	// (0x0009e92a) bg_popup_call_poc_act_pane_g1

0xbedd,	// (0x0009e932) bg_popup_call_poc_act_pane_g2

0xbee5,	// (0x0009e93a) bg_popup_call_poc_act_pane_g3

0xbea5,	// (0x0009e8fa) bg_popup_call_poc_act_pane_g4

0xbead,	// (0x0009e902) bg_popup_call_poc_act_pane_g5

0xbeed,	// (0x0009e942) bg_popup_call_poc_act_pane_g6

0xbebd,	// (0x0009e912) bg_popup_call_poc_act_pane_g7

0xbef5,	// (0x0009e94a) bg_popup_call_poc_act_pane_g8

0x9b89,	// (0x0009c5de) main_usb_pane

0x3d4b,	// (0x000967a0) popup_cale_lunar_info_window

0x1ff7,	// (0x00094a4c) im_reading_pane_t1_ParamLimits

0xa186,	// (0x0009cbdb) list_im_pane_ParamLimits

0xa197,	// (0x0009cbec) scroll_pane_cp07_ParamLimits

0x9b89,	// (0x0009c5de) grid_highlight_pane_cp012

0x9de4,	// (0x0009c839) mup_scale_pane_ParamLimits

0xb36a,	// (0x0009ddbf) main_usb_pane_g1_ParamLimits

0xb36a,	// (0x0009ddbf) main_usb_pane_g1

0x3acd,	// (0x00096522) main_usb_pane_g2_ParamLimits

0x3acd,	// (0x00096522) main_usb_pane_g2

0x0001,

0xf517,	// (0x000a1f6c) main_usb_pane_g_ParamLimits

0xf517,	// (0x000a1f6c) main_usb_pane_g

0x3ad9,	// (0x0009652e) main_usb_pane_t1_ParamLimits

0x3ad9,	// (0x0009652e) main_usb_pane_t1

0x3aeb,	// (0x00096540) main_usb_pane_t2_ParamLimits

0x3aeb,	// (0x00096540) main_usb_pane_t2

0x3afd,	// (0x00096552) main_usb_pane_t3_ParamLimits

0x3afd,	// (0x00096552) main_usb_pane_t3

0x3b0f,	// (0x00096564) main_usb_pane_t4_ParamLimits

0x3b0f,	// (0x00096564) main_usb_pane_t4

0x3b21,	// (0x00096576) main_usb_pane_t5_ParamLimits

0x3b21,	// (0x00096576) main_usb_pane_t5

0x3b33,	// (0x00096588) main_usb_pane_t6_ParamLimits

0x3b33,	// (0x00096588) main_usb_pane_t6

0x0005,

0xf51c,	// (0x000a1f71) main_usb_pane_t_ParamLimits

0x30f9,	// (0x00095b4e) aid_text_placing

0x3105,	// (0x00095b5a) main_location2_pane_t1_ParamLimits

0x3119,	// (0x00095b6e) main_location2_pane_t2_ParamLimits

0x312d,	// (0x00095b82) main_location2_pane_t3_ParamLimits

0x3141,	// (0x00095b96) main_location2_pane_t4_ParamLimits

0x3141,	// (0x00095b96) main_location2_pane_t4

0xf323,	// (0x000a1d78) main_location2_pane_t_ParamLimits

0x9e12,	// (0x0009c867) find_pinb_pane_g2_ParamLimits

0x9e12,	// (0x0009c867) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000a1aef) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000a1aef) find_pinb_pane_g

0x9e1e,	// (0x0009c873) find_pinb_pane_t1_ParamLimits

0x9e30,	// (0x0009c885) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000a1af4) find_pinb_pane_t_ParamLimits

0x9b89,	// (0x0009c5de) main_call3_pane

0x27eb,	// (0x00095240) cale_month_day_heading_pane_t1_ParamLimits

0x2871,	// (0x000952c6) cale_month_day_heading_pane_t2_ParamLimits

0x28ea,	// (0x0009533f) cale_month_day_heading_pane_t3_ParamLimits

0x2963,	// (0x000953b8) cale_month_day_heading_pane_t4_ParamLimits

0x29dc,	// (0x00095431) cale_month_day_heading_pane_t5_ParamLimits

0x2a55,	// (0x000954aa) cale_month_day_heading_pane_t6_ParamLimits

0x2ace,	// (0x00095523) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000a1c6f) cale_month_day_heading_pane_t_ParamLimits

0xa3e1,	// (0x0009ce36) smil_status_volume_pane

0x3624,	// (0x00096079) postcard_address_pane_ParamLimits

0x3624,	// (0x00096079) postcard_address_pane

0x3630,	// (0x00096085) postcard_message_pane_ParamLimits

0x3630,	// (0x00096085) postcard_message_pane

0x3a92,	// (0x000964e7) call2_cli_visual_pane_t1_ParamLimits

0x3a92,	// (0x000964e7) call2_cli_visual_pane_t1

0xc0ba,	// (0x0009eb0f) postcard_message_pane_t1_ParamLimits

0xc0ba,	// (0x0009eb0f) postcard_message_pane_t1

0xc0a2,	// (0x0009eaf7) postcard_address_pane_t1_ParamLimits

0xc0a2,	// (0x0009eaf7) postcard_address_pane_t1

0x401f,	// (0x00096a74) popup_call3_audio_in_window_ParamLimits

0x401f,	// (0x00096a74) popup_call3_audio_in_window

0x3f03,	// (0x00096958) bg_popup_call3_in_pane_ParamLimits

0x3f03,	// (0x00096958) bg_popup_call3_in_pane

0x3f65,	// (0x000969ba) popup_call3_audio_in_window_g1_ParamLimits

0x3f65,	// (0x000969ba) popup_call3_audio_in_window_g1

0x3f7d,	// (0x000969d2) popup_call3_audio_in_window_g2_ParamLimits

0x3f7d,	// (0x000969d2) popup_call3_audio_in_window_g2

0x3f95,	// (0x000969ea) popup_call3_audio_in_window_g3_ParamLimits

0x3f95,	// (0x000969ea) popup_call3_audio_in_window_g3

0x0003,

0xf579,	// (0x000a1fce) popup_call3_audio_in_window_g_ParamLimits

0xf579,	// (0x000a1fce) popup_call3_audio_in_window_g

0x3fbd,	// (0x00096a12) popup_call3_audio_in_window_t1_ParamLimits

0x3fbd,	// (0x00096a12) popup_call3_audio_in_window_t1

0x3fe5,	// (0x00096a3a) popup_call3_audio_in_window_t2_ParamLimits

0x3fe5,	// (0x00096a3a) popup_call3_audio_in_window_t2

0x400d,	// (0x00096a62) popup_call3_audio_in_window_t3_ParamLimits

0x400d,	// (0x00096a62) popup_call3_audio_in_window_t3

0x0002,

0xf582,	// (0x000a1fd7) popup_call3_audio_in_window_t_ParamLimits

0xf582,	// (0x000a1fd7) popup_call3_audio_in_window_t

0xa083,	// (0x0009cad8) bg_popup_call3_rect_pane

0xbe4d,	// (0x0009e8a2) bg_popup_call3_rect_pane_g1

0x9fa8,	// (0x0009c9fd) bg_popup_call3_rect_pane_g2

0xbe55,	// (0x0009e8aa) bg_popup_call3_rect_pane_g3

0xbe5d,	// (0x0009e8b2) bg_popup_call3_rect_pane_g4

0xbe65,	// (0x0009e8ba) bg_popup_call3_rect_pane_g5

0xbe6d,	// (0x0009e8c2) bg_popup_call3_rect_pane_g6

0xbe75,	// (0x0009e8ca) bg_popup_call3_rect_pane_g7

0xecf8,	// (0x000a174d) mup_visualizer_osc_pane

0xecf8,	// (0x000a174d) mup_visualizer_spec_pane

0x3f23,	// (0x00096978) call3_video_qcif_pane_ParamLimits

0x3f23,	// (0x00096978) call3_video_qcif_pane

0x3f35,	// (0x0009698a) call3_video_qcif_uncrop_pane_ParamLimits

0x3f35,	// (0x0009698a) call3_video_qcif_uncrop_pane

0x3f43,	// (0x00096998) call3_video_subqcif_pane_ParamLimits

0x3f43,	// (0x00096998) call3_video_subqcif_pane

0x3f55,	// (0x000969aa) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f55,	// (0x000969aa) call3_video_subqcif_uncrop_pane

0x3fad,	// (0x00096a02) popup_call3_audio_in_window_g4_ParamLimits

0x3fad,	// (0x00096a02) popup_call3_audio_in_window_g4

0xecf8,	// (0x000a174d) mup_spec_half_pane

0xecf8,	// (0x000a174d) mup_spec_half_pane_cp

0xecf8,	// (0x000a174d) mup_osc_middle_pane

0xa0b9,	// (0x0009cb0e) mup_visualizer_osc_pane_g1

0xc055,	// (0x0009eaaa) mup_spec_bar_pane_ParamLimits

0xc055,	// (0x0009eaaa) mup_spec_bar_pane

0xa0b9,	// (0x0009cb0e) mup_spec_bar_pane_g1

0xa0b9,	// (0x0009cb0e) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) mup_spec_bar_pane_g

0x15cf,	// (0x00094024) aid_cale_week_size_cell_pane_ParamLimits

0x15e4,	// (0x00094039) bg_cale_heading_pane_ParamLimits

0x9fe5,	// (0x0009ca3a) bg_cale_pane_cp01_ParamLimits

0x1606,	// (0x0009405b) cale_week_corner_pane_ParamLimits

0x1620,	// (0x00094075) cale_week_day_heading_pane_ParamLimits

0x1642,	// (0x00094097) cale_week_scroll_pane_g1_ParamLimits

0x165f,	// (0x000940b4) cale_week_scroll_pane_g2_ParamLimits

0x1672,	// (0x000940c7) cale_week_scroll_pane_g3_ParamLimits

0x1685,	// (0x000940da) cale_week_scroll_pane_g4_ParamLimits

0x1698,	// (0x000940ed) cale_week_scroll_pane_g5_ParamLimits

0x16ab,	// (0x00094100) cale_week_scroll_pane_g6_ParamLimits

0x16be,	// (0x00094113) cale_week_scroll_pane_g7_ParamLimits

0x16d3,	// (0x00094128) cale_week_scroll_pane_g8_ParamLimits

0x16e8,	// (0x0009413d) cale_week_scroll_pane_g9_ParamLimits

0x16fb,	// (0x00094150) cale_week_scroll_pane_g10_ParamLimits

0x170e,	// (0x00094163) cale_week_scroll_pane_g11_ParamLimits

0x1721,	// (0x00094176) cale_week_scroll_pane_g12_ParamLimits

0x1738,	// (0x0009418d) cale_week_scroll_pane_g13_ParamLimits

0x1753,	// (0x000941a8) cale_week_scroll_pane_g14_ParamLimits

0x176e,	// (0x000941c3) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000a1b80) cale_week_scroll_pane_g_ParamLimits

0x179e,	// (0x000941f3) cale_week_time_pane_ParamLimits

0x17b3,	// (0x00094208) grid_cale_week_pane_ParamLimits

0xa002,	// (0x0009ca57) listscroll_cale_week_pane_t1

0xa014,	// (0x0009ca69) scroll_pane_cp08_ParamLimits

0x229c,	// (0x00094cf1) cale_month_corner_pane_ParamLimits

0xa3b7,	// (0x0009ce0c) cale_month_pane_t1

0x276a,	// (0x000951bf) cale_month_week_pane_ParamLimits

0xb36a,	// (0x0009ddbf) popup_call_status_window_g1_ParamLimits

0x2f26,	// (0x0009597b) popup_call_status_window_g2_ParamLimits

0x2f32,	// (0x00095987) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x000a1cff) popup_call_status_window_g_ParamLimits

0xa76b,	// (0x0009d1c0) aid_call2_pane

0x34dc,	// (0x00095f31) msg_header_pane_g1

0x3624,	// (0x00096079) postcard_address2_pane_ParamLimits

0x3624,	// (0x00096079) postcard_address2_pane

0x3630,	// (0x00096085) postcard_message2_pane_ParamLimits

0x3630,	// (0x00096085) postcard_message2_pane

0x3eb3,	// (0x00096908) message2_row_pane_ParamLimits

0x3eb3,	// (0x00096908) message2_row_pane

0x3ece,	// (0x00096923) address2_row_pane_ParamLimits

0x3ece,	// (0x00096923) address2_row_pane

0xc014,	// (0x0009ea69) postcard_message2_row_pane_g1

0xc01c,	// (0x0009ea71) postcard_message2_row_pane_t1

0xc014,	// (0x0009ea69) address2_row_pane_g1

0xc01c,	// (0x0009ea71) address2_row_pane_t1

0x1a38,	// (0x0009448d) aid_size_cell_vorec

0x9b89,	// (0x0009c5de) main_rss_pane

0xc038,	// (0x0009ea8d) rss_list_single_pane_ParamLimits

0xc038,	// (0x0009ea8d) rss_list_single_pane

0xc046,	// (0x0009ea9b) rss_list_single_pane_t1

0xc046,	// (0x0009ea9b) rss_list_single_pane_t2

0x0001,

0xf56d,	// (0x000a1fc2) rss_list_single_pane_t

0x9b89,	// (0x0009c5de) main_camera2_pane

0x9b89,	// (0x0009c5de) main_video2_pane

0x1117,	// (0x00093b6c) cams_zoom_pane_cp2_ParamLimits

0x1117,	// (0x00093b6c) cams_zoom_pane_cp2

0x1117,	// (0x00093b6c) image2_vga_pane_ParamLimits

0x1117,	// (0x00093b6c) image2_vga_pane

0xa79f,	// (0x0009d1f4) main_camera2_pane_g1_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g1

0xa79f,	// (0x0009d1f4) main_camera2_pane_g2_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g2

0xa79f,	// (0x0009d1f4) main_camera2_pane_g3_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g3

0xa79f,	// (0x0009d1f4) main_camera2_pane_g4_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g4

0xa79f,	// (0x0009d1f4) main_camera2_pane_g5_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g5

0xa79f,	// (0x0009d1f4) main_camera2_pane_g6_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g6

0xa79f,	// (0x0009d1f4) main_camera2_pane_g7_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g7

0xa79f,	// (0x0009d1f4) main_camera2_pane_g8_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g8

0x0008,

0xf589,	// (0x000a1fde) main_camera2_pane_g_ParamLimits

0xf589,	// (0x000a1fde) main_camera2_pane_g

0x403c,	// (0x00096a91) main_camera2_pane_t1_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t1

0x403c,	// (0x00096a91) main_camera2_pane_t2_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t2

0x403c,	// (0x00096a91) main_camera2_pane_t3_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t3

0x403c,	// (0x00096a91) main_camera2_pane_t4_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t4

0x0006,

0xf59c,	// (0x000a1ff1) main_camera2_pane_t_ParamLimits

0xf59c,	// (0x000a1ff1) main_camera2_pane_t

0x4064,	// (0x00096ab9) cams_zoom_pane_cp4_ParamLimits

0x4064,	// (0x00096ab9) cams_zoom_pane_cp4

0x3cf6,	// (0x0009674b) image2_cif_pane_ParamLimits

0x3cf6,	// (0x0009674b) image2_cif_pane

0x1117,	// (0x00093b6c) image2_subqcif_pane_ParamLimits

0x1117,	// (0x00093b6c) image2_subqcif_pane

0x4072,	// (0x00096ac7) main_video2_pane_g1_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g1

0x4072,	// (0x00096ac7) main_video2_pane_g2_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g2

0x4072,	// (0x00096ac7) main_video2_pane_g3_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g3

0x4072,	// (0x00096ac7) main_video2_pane_g4_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g4

0x4072,	// (0x00096ac7) main_video2_pane_g5_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g5

0x4072,	// (0x00096ac7) main_video2_pane_g6_ParamLimits

0x4072,	// (0x00096ac7) main_video2_pane_g6

0x0005,

0xf5ab,	// (0x000a2000) main_video2_pane_g_ParamLimits

0xf5ab,	// (0x000a2000) main_video2_pane_g

0x4080,	// (0x00096ad5) main_video2_pane_t1_ParamLimits

0x4080,	// (0x00096ad5) main_video2_pane_t1

0x4080,	// (0x00096ad5) main_video2_pane_t2_ParamLimits

0x4080,	// (0x00096ad5) main_video2_pane_t2

0x4080,	// (0x00096ad5) main_video2_pane_t3_ParamLimits

0x4080,	// (0x00096ad5) main_video2_pane_t3

0x0002,

0xf5b8,	// (0x000a200d) main_video2_pane_t_ParamLimits

0xf5b8,	// (0x000a200d) main_video2_pane_t

0x3bc9,	// (0x0009661e) call_muted_g2

0x0001,

0xf55f,	// (0x000a1fb4) call_muted_g

0x9b89,	// (0x0009c5de) main_mup2_pane

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g1_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g1

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g2_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g2

0xd2ee,	// (0x0009fd43) main_mup_pane_g13_cp1

0x1131,	// (0x00093b86) mup_volume_pane_cp1

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g4_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g4

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g5_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g5

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g6_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g6

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g7_ParamLimits

0x9e7b,	// (0x0009c8d0) main_mup2_pane_g7

0x0006,

0xf5bf,	// (0x000a2014) main_mup2_pane_g_ParamLimits

0xf5bf,	// (0x000a2014) main_mup2_pane_g

0x9e89,	// (0x0009c8de) main_mup2_pane_t1_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t1

0x9e89,	// (0x0009c8de) main_mup2_pane_t2_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t2

0x9e89,	// (0x0009c8de) main_mup2_pane_t3_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t3

0x9e89,	// (0x0009c8de) main_mup2_pane_t4_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t4

0x9e89,	// (0x0009c8de) main_mup2_pane_t5_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t5

0x9e89,	// (0x0009c8de) main_mup2_pane_t6_ParamLimits

0x9e89,	// (0x0009c8de) main_mup2_pane_t6

0x0005,

0xf5ce,	// (0x000a2023) main_mup2_pane_t_ParamLimits

0xf5ce,	// (0x000a2023) main_mup2_pane_t

0xc02a,	// (0x0009ea7f) mup2_visualizer_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup2_visualizer_pane

0xc02a,	// (0x0009ea7f) mup_progress_pane_cp_ParamLimits

0xc02a,	// (0x0009ea7f) mup_progress_pane_cp

0x4147,	// (0x00096b9c) mup_volume_pane_cp_ParamLimits

0x4147,	// (0x00096b9c) mup_volume_pane_cp

0x9e5f,	// (0x0009c8b4) mup2_visualizer_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) mup2_visualizer_pane_g1

0x9e6d,	// (0x0009c8c2) mup2_visualizer_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) mup2_visualizer_pane_g2

0x9e6d,	// (0x0009c8c2) mup2_visualizer_pane_g3_ParamLimits

0x9e6d,	// (0x0009c8c2) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000a1af9) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000a1af9) mup2_visualizer_pane_g

0xae67,	// (0x0009d8bc) aid_size_cell_fmradio

0x3cdf,	// (0x00096734) aid_height_parent_landcape

0xa215,	// (0x0009cc6a) wml_content_pane_cp

0xa21d,	// (0x0009cc72) wml_tabs_pane

0xa226,	// (0x0009cc7b) popup_wml_miniature_window

0xa22e,	// (0x0009cc83) scroll_pane_cp021

0xa242,	// (0x0009cc97) wml_content_pane_comp8

0x9b89,	// (0x0009c5de) bg_popup_sub_pane_cp05

0xc0ec,	// (0x0009eb41) popup_wml_miniature_window_g1

0xc0f4,	// (0x0009eb49) wml_miniature_view_pane

0x4094,	// (0x00096ae9) aid_size_wml_view

0x409c,	// (0x00096af1) wml_miniature_view_pane_g1

0x40a5,	// (0x00096afa) wml_miniature_view_pane_g2

0x40ae,	// (0x00096b03) wml_miniature_view_pane_g3

0x40b6,	// (0x00096b0b) wml_miniature_view_pane_g4

0x40be,	// (0x00096b13) wml_miniature_view_pane_g5

0x40c6,	// (0x00096b1b) wml_miniature_view_pane_g6

0x40ce,	// (0x00096b23) wml_miniature_view_pane_g7

0x40d6,	// (0x00096b2b) wml_miniature_view_pane_g8

0x0007,

0xf5db,	// (0x000a2030) wml_miniature_view_pane_g

0xc0fc,	// (0x0009eb51) background_graphic_ParamLimits

0xc0fc,	// (0x0009eb51) background_graphic

0xc108,	// (0x0009eb5d) wml_tabs_2_pane

0xc111,	// (0x0009eb66) wml_tabs_3_pane_ParamLimits

0xc111,	// (0x0009eb66) wml_tabs_3_pane

0xc123,	// (0x0009eb78) wml_tabs_4_pane_ParamLimits

0xc123,	// (0x0009eb78) wml_tabs_4_pane

0xc139,	// (0x0009eb8e) wml_tabs_5_pane_ParamLimits

0xc139,	// (0x0009eb8e) wml_tabs_5_pane

0xc153,	// (0x0009eba8) wml_tabs_pane_g2_ParamLimits

0xc153,	// (0x0009eba8) wml_tabs_pane_g2

0xc168,	// (0x0009ebbd) wml_tabs_pane_g3_ParamLimits

0xc168,	// (0x0009ebbd) wml_tabs_pane_g3

0xc17d,	// (0x0009ebd2) wml_tabs_2_active_pane_ParamLimits

0xc17d,	// (0x0009ebd2) wml_tabs_2_active_pane

0xc17d,	// (0x0009ebd2) wml_tabs_2_passive_pane_ParamLimits

0xc17d,	// (0x0009ebd2) wml_tabs_2_passive_pane

0x40de,	// (0x00096b33) wml_tabs_3_active_pane_cp_ParamLimits

0x40de,	// (0x00096b33) wml_tabs_3_active_pane_cp

0x40ef,	// (0x00096b44) wml_tabs_3_passive_pane_ParamLimits

0x40ef,	// (0x00096b44) wml_tabs_3_passive_pane

0x4100,	// (0x00096b55) wml_tabs_3_passive_pane_cp_ParamLimits

0x4100,	// (0x00096b55) wml_tabs_3_passive_pane_cp

0x4111,	// (0x00096b66) tabs_4_active_pane

0x4119,	// (0x00096b6e) tabs_4_passive_pane

0x4121,	// (0x00096b76) tabs_4_passive_pane_cp

0x4129,	// (0x00096b7e) tabs_4_passive_pane_cp2

0x3ac5,	// (0x0009651a) aid_height_text

0xc02a,	// (0x0009ea7f) mup_volume_cont_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup_volume_cont_pane

0xecf8,	// (0x000a174d) aid_size_cell_pinb

0xecf8,	// (0x000a174d) aid_size_list_pinb

0xc02a,	// (0x0009ea7f) mup2_volume_cont_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup2_volume_cont_pane

0x4131,	// (0x00096b86) mup2_volume_cont_pane_g1_ParamLimits

0x4131,	// (0x00096b86) mup2_volume_cont_pane_g1

0x0e7c,	// (0x000938d1) aid_size_cell_touch_ParamLimits

0x0e7c,	// (0x000938d1) aid_size_cell_touch

0x113b,	// (0x00093b90) touch_pane_ParamLimits

0x113b,	// (0x00093b90) touch_pane

0x1131,	// (0x00093b86) main_rss2_pane

0xc194,	// (0x0009ebe9) listscroll_rss2_pane

0xc19d,	// (0x0009ebf2) rss2_navigation_pane

0xc1a5,	// (0x0009ebfa) list_rss2_pane

0xa884,	// (0x0009d2d9) scroll_pane_cp22

0xc1ad,	// (0x0009ec02) rss2_navigation_pane_g1

0xc1b6,	// (0x0009ec0b) rss2_navigation_pane_g2

0xc1be,	// (0x0009ec13) rss2_navigation_pane_g3

0x0002,

0xf5ec,	// (0x000a2041) rss2_navigation_pane_g

0xc1c6,	// (0x0009ec1b) rss2_navigation_pane_t1

0x415d,	// (0x00096bb2) rss2_list_single_pane_ParamLimits

0x415d,	// (0x00096bb2) rss2_list_single_pane

0xc1d4,	// (0x0009ec29) rss2_list_single_pane_t2

0xc1e2,	// (0x0009ec37) rss2_list_single_pane_t3_ParamLimits

0xc1e2,	// (0x0009ec37) rss2_list_single_pane_t3

0xc1ff,	// (0x0009ec54) rss2_list_single_pane_t4

0x2d70,	// (0x000957c5) smil_status_pane_g1

0x3cf6,	// (0x0009674b) main_image2_pane_ParamLimits

0x3cf6,	// (0x0009674b) main_image2_pane

0xa79f,	// (0x0009d1f4) main_camera2_pane_g9_ParamLimits

0xa79f,	// (0x0009d1f4) main_camera2_pane_g9

0x403c,	// (0x00096a91) main_camera2_pane_t5_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t5

0x4050,	// (0x00096aa5) main_camera2_pane_t6_ParamLimits

0x4050,	// (0x00096aa5) main_camera2_pane_t6

0x4191,	// (0x00096be6) main_image2_pane_g1_ParamLimits

0x4191,	// (0x00096be6) main_image2_pane_g1

0x37f7,	// (0x0009624c) smil2_video_pane_ParamLimits

0x37f7,	// (0x0009624c) smil2_video_pane

0x0eb0,	// (0x00093905) aid_zoom_text_primary_cp

0x10cc,	// (0x00093b21) popup_preview_fixed_window

0xa17e,	// (0x0009cbd3) im_reading_pane_g1

0x402e,	// (0x00096a83) cams2_bc_adjust_pane_cp_ParamLimits

0x402e,	// (0x00096a83) cams2_bc_adjust_pane_cp

0x1117,	// (0x00093b6c) cams2_bc_adjust_pane_ParamLimits

0x1117,	// (0x00093b6c) cams2_bc_adjust_pane

0xd2ee,	// (0x0009fd43) cams2_bc_adjust_pane_g1

0x1131,	// (0x00093b86) cams2_slider_pane

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g1

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g2

0x0006,

0xf5f3,	// (0x000a2048) cams2_slider_pane_g

0x120c,	// (0x00093c61) calc_display_pane_ParamLimits

0x122a,	// (0x00093c7f) calc_paper_pane_ParamLimits

0x1246,	// (0x00093c9b) grid_calc_pane_ParamLimits

0x2f90,	// (0x000959e5) popup_clock_digital_window_t1_ParamLimits

0xae04,	// (0x0009d859) main_image_pane_t1

0x11f2,	// (0x00093c47) aid_size_cell_calc_ParamLimits

0x11f2,	// (0x00093c47) aid_size_cell_calc

0x3d27,	// (0x0009677c) popup_blid_sat_info2_window_ParamLimits

0x3d27,	// (0x0009677c) popup_blid_sat_info2_window

0xc20d,	// (0x0009ec62) aid_size_cell_blid

0xc02a,	// (0x0009ea7f) bg_popup_window_pane_cp07

0xc22a,	// (0x0009ec7f) grid_popup_blid_pane

0xc234,	// (0x0009ec89) heading_pane_cp05_ParamLimits

0xc234,	// (0x0009ec89) heading_pane_cp05

0xc2fe,	// (0x0009ed53) cell_popup_blid_pane_ParamLimits

0xc2fe,	// (0x0009ed53) cell_popup_blid_pane

0xc322,	// (0x0009ed77) cell_popup_blid_pane_g1

0xc32a,	// (0x0009ed7f) cell_popup_blid_pane_t1

0xc02a,	// (0x0009ea7f) mup2_indicator_pane_ParamLimits

0xc02a,	// (0x0009ea7f) mup2_indicator_pane

0xecf8,	// (0x000a174d) mup2_visualizer_osc_pane

0xc0d6,	// (0x0009eb2b) mup2_visualizer_spec_pane_ParamLimits

0xc0d6,	// (0x0009eb2b) mup2_visualizer_spec_pane

0xecf8,	// (0x000a174d) mup2_spec_half_pane

0xecf8,	// (0x000a174d) mup2_spec_half_pane_cp

0xc338,	// (0x0009ed8d) mup2_spec_bar_pane_ParamLimits

0xc338,	// (0x0009ed8d) mup2_spec_bar_pane

0xa0b9,	// (0x0009cb0e) mup2_spec_bar_pane_g1

0xc357,	// (0x0009edac) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000a206e) mup2_spec_bar_pane_g

0xecf8,	// (0x000a174d) mup2_osc_middle_pane

0xa0b9,	// (0x0009cb0e) mup2_visualizer_osc_pane_g1

0xedfd,	// (0x000a1852) popup_number_entry_window_t1_ParamLimits

0xee10,	// (0x000a1865) popup_number_entry_window_t2_ParamLimits

0xee22,	// (0x000a1877) popup_number_entry_window_t3_ParamLimits

0x1192,	// (0x00093be7) popup_number_entry_window_t5_ParamLimits

0x1192,	// (0x00093be7) popup_number_entry_window_t5

0xf045,	// (0x000a1a9a) popup_number_entry_window_t_ParamLimits

0x97cd,	// (0x0009c222) text_title_cp2_ParamLimits

0x34f8,	// (0x00095f4d) aid_hotspot_pointer_text2_pane

0x3586,	// (0x00095fdb) main_viewer_pane_g9_ParamLimits

0x3586,	// (0x00095fdb) main_viewer_pane_g9

0xa3b7,	// (0x0009ce0c) cale_month_pane_t1_ParamLimits

0xa3f4,	// (0x0009ce49) bg_cale_pane_ParamLimits

0xa40c,	// (0x0009ce61) list_cale_pane_ParamLimits

0xa41d,	// (0x0009ce72) listscroll_cale_day_pane_t1

0xa42f,	// (0x0009ce84) scroll_pane_cp09_ParamLimits

0x3241,	// (0x00095c96) main_mup_eq_pane_t1_ParamLimits

0x3241,	// (0x00095c96) main_mup_eq_pane_t1

0x325b,	// (0x00095cb0) main_mup_eq_pane_t2_ParamLimits

0x325b,	// (0x00095cb0) main_mup_eq_pane_t2

0x3273,	// (0x00095cc8) main_mup_eq_pane_t3_ParamLimits

0x3273,	// (0x00095cc8) main_mup_eq_pane_t3

0x328b,	// (0x00095ce0) main_mup_eq_pane_t4_ParamLimits

0x328b,	// (0x00095ce0) main_mup_eq_pane_t4

0x32a3,	// (0x00095cf8) main_mup_eq_pane_t5_ParamLimits

0x32a3,	// (0x00095cf8) main_mup_eq_pane_t5

0x32bb,	// (0x00095d10) main_mup_eq_pane_t6_ParamLimits

0x32bb,	// (0x00095d10) main_mup_eq_pane_t6

0x32cf,	// (0x00095d24) main_mup_eq_pane_t7_ParamLimits

0x32cf,	// (0x00095d24) main_mup_eq_pane_t7

0x32e3,	// (0x00095d38) main_mup_eq_pane_t8_ParamLimits

0x32e3,	// (0x00095d38) main_mup_eq_pane_t8

0x32f9,	// (0x00095d4e) main_mup_eq_pane_t9_ParamLimits

0x32f9,	// (0x00095d4e) main_mup_eq_pane_t9

0x3311,	// (0x00095d66) main_mup_eq_pane_t10_ParamLimits

0x3311,	// (0x00095d66) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x000a1dfe) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x000a1dfe) main_mup_eq_pane_t

0x33ce,	// (0x00095e23) mup_equalizer_pane_cp5_ParamLimits

0x33e4,	// (0x00095e39) mup_equalizer_pane_cp6_ParamLimits

0x33fc,	// (0x00095e51) mup_equalizer_pane_cp7_ParamLimits

0x1131,	// (0x00093b86) main_gallery_pane

0xc074,	// (0x0009eac9) smil2_volume_pane

0xc07c,	// (0x0009ead1) smil_status_volume_pane_g1_ParamLimits

0xc08f,	// (0x0009eae4) smil_status_volume_pane_g2_ParamLimits

0x3ee1,	// (0x00096936) smil_status_volume_pane_g3_ParamLimits

0xf572,	// (0x000a1fc7) smil_status_volume_pane_g_ParamLimits

0xc02a,	// (0x0009ea7f) bg_popup_window_pane_cp07_ParamLimits

0xc215,	// (0x0009ec6a) blid_firmament_pane

0x9e51,	// (0x0009c8a6) aid_size_cell_gallery_ParamLimits

0x9e51,	// (0x0009c8a6) aid_size_cell_gallery

0x9e51,	// (0x0009c8a6) grid_gallery_pane_ParamLimits

0x9e51,	// (0x0009c8a6) grid_gallery_pane

0xac76,	// (0x0009d6cb) cell_gallery_pane_ParamLimits

0xac76,	// (0x0009d6cb) cell_gallery_pane

0xed22,	// (0x000a1777) bg_cell_gallery_focus_pane_ParamLimits

0xed22,	// (0x000a1777) bg_cell_gallery_focus_pane

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g1

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g2

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_gallery_pane_g3

0x9e6d,	// (0x0009c8c2) cell_gallery_pane_g4_ParamLimits

0x9e6d,	// (0x0009c8c2) cell_gallery_pane_g4

0x0003,

0xf61e,	// (0x000a2073) cell_gallery_pane_g_ParamLimits

0xf61e,	// (0x000a2073) cell_gallery_pane_g

0xc361,	// (0x0009edb6) bg_cell_gallery_focus_pane_g1

0xc369,	// (0x0009edbe) bg_cell_gallery_focus_pane_g2

0xc371,	// (0x0009edc6) bg_cell_gallery_focus_pane_g3

0xc379,	// (0x0009edce) bg_cell_gallery_focus_pane_g4

0xc381,	// (0x0009edd6) bg_cell_gallery_focus_pane_g5

0xc389,	// (0x0009edde) bg_cell_gallery_focus_pane_g6

0xc391,	// (0x0009ede6) bg_cell_gallery_focus_pane_g7

0xc399,	// (0x0009edee) bg_cell_gallery_focus_pane_g8

0x0007,

0xf627,	// (0x000a207c) bg_cell_gallery_focus_pane_g

0xc3a1,	// (0x0009edf6) aid_firma_cardinal

0xc3b5,	// (0x0009ee0a) blid_firmament_pane_t1

0xc3cc,	// (0x0009ee21) blid_firmament_pane_t2

0xc3e3,	// (0x0009ee38) blid_firmament_pane_t3

0xc3fa,	// (0x0009ee4f) blid_firmament_pane_t4

0x0003,

0xf638,	// (0x000a208d) blid_firmament_pane_t

0xc411,	// (0x0009ee66) blid_sat_info_pane

0xa0b9,	// (0x0009cb0e) blid_sat_info_pane_g1

0xa0b9,	// (0x0009cb0e) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) blid_sat_info_pane_g

0xc421,	// (0x0009ee76) blid_sat_info_pane_t1

0xc42f,	// (0x0009ee84) smil2_volume_content_pane

0xc438,	// (0x0009ee8d) smil2_volume_pane_g1

0xac84,	// (0x0009d6d9) smil2_volume_content_pane_g1

0xc440,	// (0x0009ee95) smil2_volume_content_pane_g2

0xc449,	// (0x0009ee9e) smil2_volume_content_pane_g3

0xc452,	// (0x0009eea7) smil2_volume_content_pane_g4

0xc45b,	// (0x0009eeb0) smil2_volume_content_pane_g5

0xc464,	// (0x0009eeb9) smil2_volume_content_pane_g6

0xc46d,	// (0x0009eec2) smil2_volume_content_pane_g7

0xc476,	// (0x0009eecb) smil2_volume_content_pane_g8

0xc47f,	// (0x0009eed4) smil2_volume_content_pane_g9

0xc488,	// (0x0009eedd) smil2_volume_content_pane_g10

0x0009,

0xf641,	// (0x000a2096) smil2_volume_content_pane_g

0x1834,	// (0x00094289) cale_week_day_heading_pane_t1_ParamLimits

0x184f,	// (0x000942a4) cale_week_day_heading_pane_t2_ParamLimits

0x186a,	// (0x000942bf) cale_week_day_heading_pane_t3_ParamLimits

0x1885,	// (0x000942da) cale_week_day_heading_pane_t4_ParamLimits

0x18a0,	// (0x000942f5) cale_week_day_heading_pane_t5_ParamLimits

0x18bb,	// (0x00094310) cale_week_day_heading_pane_t6_ParamLimits

0x18d6,	// (0x0009432b) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x000a1ba1) cale_week_day_heading_pane_t_ParamLimits

0xa031,	// (0x0009ca86) bg_cale_side_pane_ParamLimits

0x18f1,	// (0x00094346) cale_week_time_pane_t1_ParamLimits

0x190b,	// (0x00094360) cale_week_time_pane_t2_ParamLimits

0x1925,	// (0x0009437a) cale_week_time_pane_t3_ParamLimits

0x193f,	// (0x00094394) cale_week_time_pane_t4_ParamLimits

0x1959,	// (0x000943ae) cale_week_time_pane_t5_ParamLimits

0x1973,	// (0x000943c8) cale_week_time_pane_t6_ParamLimits

0x1993,	// (0x000943e8) cale_week_time_pane_t7_ParamLimits

0x19b5,	// (0x0009440a) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x000a1bb0) cale_week_time_pane_t_ParamLimits

0x19d9,	// (0x0009442e) cell_cale_week_pane_g2_ParamLimits

0xa031,	// (0x0009ca86) bg_cale_side_pane_cp01_ParamLimits

0x2b5f,	// (0x000955b4) cale_month_week_pane_t1_ParamLimits

0x2b78,	// (0x000955cd) cale_month_week_pane_t2_ParamLimits

0x2b91,	// (0x000955e6) cale_month_week_pane_t3_ParamLimits

0x2baa,	// (0x000955ff) cale_month_week_pane_t4_ParamLimits

0x2bc5,	// (0x0009561a) cale_month_week_pane_t5_ParamLimits

0x2be6,	// (0x0009563b) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000a1c7e) cale_month_week_pane_t_ParamLimits

0x2d2d,	// (0x00095782) cell_cale_month_pane_g1_ParamLimits

0x1131,	// (0x00093b86) main_cale_event_viewer_pane

0xecf8,	// (0x000a174d) listscroll_cale_event_viewer_pane

0xc491,	// (0x0009eee6) list_cale_ev_pane

0xc499,	// (0x0009eeee) scroll_pane_cp023

0xc4a5,	// (0x0009eefa) field_cale_ev_pane_ParamLimits

0xc4a5,	// (0x0009eefa) field_cale_ev_pane

0xc4c3,	// (0x0009ef18) field_cale_ev_content_pane_ParamLimits

0xc4c3,	// (0x0009ef18) field_cale_ev_content_pane

0xc4cf,	// (0x0009ef24) field_cale_ev_pane_g1_ParamLimits

0xc4cf,	// (0x0009ef24) field_cale_ev_pane_g1

0xc4db,	// (0x0009ef30) field_cale_ev_pane_g2_ParamLimits

0xc4db,	// (0x0009ef30) field_cale_ev_pane_g2

0xc4f3,	// (0x0009ef48) field_cale_ev_pane_g3_ParamLimits

0xc4f3,	// (0x0009ef48) field_cale_ev_pane_g3

0x0002,

0xf656,	// (0x000a20ab) field_cale_ev_pane_g_ParamLimits

0xf656,	// (0x000a20ab) field_cale_ev_pane_g

0xc50b,	// (0x0009ef60) field_cale_ev_pane_t1_ParamLimits

0xc50b,	// (0x0009ef60) field_cale_ev_pane_t1

0xc522,	// (0x0009ef77) field_cale_ev_content_pane_t1_ParamLimits

0xc522,	// (0x0009ef77) field_cale_ev_content_pane_t1

0xac04,	// (0x0009d659) bg_button_pane_cp01

0x15bf,	// (0x00094014) listscroll_cale_week_pane_ParamLimits

0x9fdc,	// (0x0009ca31) popup_toolbar_window_cp01

0xa002,	// (0x0009ca57) listscroll_cale_week_pane_t1_ParamLimits

0x15bf,	// (0x00094014) listscroll_cale_day_pane_ParamLimits

0x9fdc,	// (0x0009ca31) popup_toolbar_window_cp02

0xa41d,	// (0x0009ce72) listscroll_cale_day_pane_t1_ParamLimits

0x15bf,	// (0x00094014) main_cale_month_pane_ParamLimits

0x3e2a,	// (0x0009687f) popup_toolbar_window_cp03_ParamLimits

0x3e2a,	// (0x0009687f) popup_toolbar_window_cp03

0x370d,	// (0x00096162) main_image_pane_g2_ParamLimits

0x370d,	// (0x00096162) main_image_pane_g2

0x3719,	// (0x0009616e) main_image_pane_g3_ParamLimits

0x3719,	// (0x0009616e) main_image_pane_g3

0x0002,

0xf43b,	// (0x000a1e90) main_image_pane_g_ParamLimits

0xf43b,	// (0x000a1e90) main_image_pane_g

0xae04,	// (0x0009d859) main_image_pane_t1_ParamLimits

0x3725,	// (0x0009617a) main_image_pane_t2_ParamLimits

0x3725,	// (0x0009617a) main_image_pane_t2

0x3737,	// (0x0009618c) main_image_pane_t3_ParamLimits

0x3737,	// (0x0009618c) main_image_pane_t3

0x3749,	// (0x0009619e) main_image_pane_t4_ParamLimits

0x3749,	// (0x0009619e) main_image_pane_t4

0x0003,

0xf442,	// (0x000a1e97) main_image_pane_t_ParamLimits

0xf442,	// (0x000a1e97) main_image_pane_t

0x375b,	// (0x000961b0) popup_image_details_window_cp01

0x3765,	// (0x000961ba) popup_toobar_trans_pane_cp01_ParamLimits

0x3765,	// (0x000961ba) popup_toobar_trans_pane_cp01

0x3d7a,	// (0x000967cf) popup_image_details_window_ParamLimits

0x3d7a,	// (0x000967cf) popup_image_details_window

0x3d88,	// (0x000967dd) popup_image_focus_window

0x1117,	// (0x00093b6c) camera2_autofocus_pane_ParamLimits

0x1117,	// (0x00093b6c) camera2_autofocus_pane

0xecf8,	// (0x000a174d) bg_popup_sub_pane_cp06

0xc540,	// (0x0009ef95) popup_image_focus_window_g1

0xc548,	// (0x0009ef9d) popup_image_focus_window_g2

0xc550,	// (0x0009efa5) popup_image_focus_window_g3

0xc558,	// (0x0009efad) popup_image_focus_window_g4

0x0003,

0xf65d,	// (0x000a20b2) popup_image_focus_window_g

0xc560,	// (0x0009efb5) popup_image_focus_window_t1

0xc56e,	// (0x0009efc3) popup_image_focus_window_t2

0xc57e,	// (0x0009efd3) popup_image_focus_window_t3

0x0002,

0xf666,	// (0x000a20bb) popup_image_focus_window_t

0x9e5f,	// (0x0009c8b4) camera2_autofocus_pane_g1

0xed22,	// (0x000a1777) bg_tb_trans_pane_cp01

0xc58c,	// (0x0009efe1) popup_image_details_window_g1

0xc59f,	// (0x0009eff4) popup_image_details_window_g2

0x0002,

0xf678,	// (0x000a20cd) popup_image_details_window_g

0xc5d6,	// (0x0009f02b) popup_image_details_window_t1

0xc5e8,	// (0x0009f03d) popup_image_details_window_t2

0xc601,	// (0x0009f056) popup_image_details_window_t3

0xc615,	// (0x0009f06a) popup_image_details_window_t4

0xc630,	// (0x0009f085) popup_image_details_window_t5

0x0004,

0xf67f,	// (0x000a20d4) popup_image_details_window_t

0x9ebd,	// (0x0009c912) bg_calc_paper_pane_ParamLimits

0x1131,	// (0x00093b86) grid_highlight_pane_cp013

0x1343,	// (0x00093d98) list_calc_pane_ParamLimits

0x1355,	// (0x00093daa) scroll_pane_cp024

0x9ed1,	// (0x0009c926) bg_calc_display_pane_ParamLimits

0x135d,	// (0x00093db2) calc_display_pane_t1_ParamLimits

0x1372,	// (0x00093dc7) calc_display_pane_t2_ParamLimits

0x1387,	// (0x00093ddc) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000a1b21) calc_display_pane_t_ParamLimits

0x1461,	// (0x00093eb6) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000a1b3e) cell_calc_pane_g

0x146a,	// (0x00093ebf) cell_calc_pane_t1

0x9f26,	// (0x0009c97b) grid_highlight_pane_cp02_ParamLimits

0x9f3c,	// (0x0009c991) toolbar_button_pane_cp01_ParamLimits

0x9f3c,	// (0x0009c991) toolbar_button_pane_cp01

0xae49,	// (0x0009d89e) temp_image_control_pane_ParamLimits

0xae49,	// (0x0009d89e) temp_image_control_pane

0x3cf6,	// (0x0009674b) main_mp3_pane

0xc64a,	// (0x0009f09f) temp_image_control_pane_g1_ParamLimits

0xc64a,	// (0x0009f09f) temp_image_control_pane_g1

0xc658,	// (0x0009f0ad) temp_image_control_pane_g2_ParamLimits

0xc658,	// (0x0009f0ad) temp_image_control_pane_g2

0xc66a,	// (0x0009f0bf) temp_image_control_pane_g3_ParamLimits

0xc66a,	// (0x0009f0bf) temp_image_control_pane_g3

0x419d,	// (0x00096bf2) temp_image_control_pane_g4_ParamLimits

0x419d,	// (0x00096bf2) temp_image_control_pane_g4

0x0003,

0xf68a,	// (0x000a20df) temp_image_control_pane_g_ParamLimits

0xf68a,	// (0x000a20df) temp_image_control_pane_g

0xc64a,	// (0x0009f09f) main_mp3_pane_g1

0x41ae,	// (0x00096c03) main_mp3_pane_g2

0x0007,

0xf693,	// (0x000a20e8) main_mp3_pane_g

0xc69f,	// (0x0009f0f4) main_mp3_pane_t1

0x9e6d,	// (0x0009c8c2) main_camera_pane_g8_ParamLimits

0x9e6d,	// (0x0009c8c2) main_camera_pane_g8

0x1b80,	// (0x000945d5) main_video_pane_g7_ParamLimits

0x1b80,	// (0x000945d5) main_video_pane_g7

0x403c,	// (0x00096a91) main_camera2_pane_t7_ParamLimits

0x403c,	// (0x00096a91) main_camera2_pane_t7

0xa1d5,	// (0x0009cc2a) scroll_pane_cp025_ParamLimits

0xa1d5,	// (0x0009cc2a) scroll_pane_cp025

0xa1e9,	// (0x0009cc3e) scroll_pane_cp026_ParamLimits

0xa1e9,	// (0x0009cc3e) scroll_pane_cp026

0xa1f8,	// (0x0009cc4d) wml_content_pane_ParamLimits

0x1131,	// (0x00093b86) main_touch_calib_pane

0x4252,	// (0x00096ca7) main_touch_calib_pane_g1

0x425e,	// (0x00096cb3) main_touch_calib_pane_g2

0x426a,	// (0x00096cbf) main_touch_calib_pane_g3

0x4276,	// (0x00096ccb) main_touch_calib_pane_g4

0x0003,

0xf6b1,	// (0x000a2106) main_touch_calib_pane_g

0x4282,	// (0x00096cd7) main_touch_calib_pane_t1

0x429b,	// (0x00096cf0) main_touch_calib_pane_t2

0x0004,

0xf6ba,	// (0x000a210f) main_touch_calib_pane_t

0xa953,	// (0x0009d3a8) mup_progress_pane_cp02

0xa988,	// (0x0009d3dd) navi_pane_g1

0xaa43,	// (0x0009d498) navi_pane_mp_t3

0x3cf6,	// (0x0009674b) main_mp3_pane_ParamLimits

0x3e67,	// (0x000968bc) navi_pane_ParamLimits

0xc64a,	// (0x0009f09f) main_mp3_pane_g1_ParamLimits

0x41ae,	// (0x00096c03) main_mp3_pane_g2_ParamLimits

0x41ba,	// (0x00096c0f) main_mp3_pane_g3_ParamLimits

0x41ba,	// (0x00096c0f) main_mp3_pane_g3

0x41c6,	// (0x00096c1b) main_mp3_pane_g4_ParamLimits

0x41c6,	// (0x00096c1b) main_mp3_pane_g4

0x9e5f,	// (0x0009c8b4) main_mp3_pane_g5_ParamLimits

0x9e5f,	// (0x0009c8b4) main_mp3_pane_g5

0xc67a,	// (0x0009f0cf) main_mp3_pane_g6_ParamLimits

0xc67a,	// (0x0009f0cf) main_mp3_pane_g6

0xc687,	// (0x0009f0dc) main_mp3_pane_g7_ParamLimits

0xc687,	// (0x0009f0dc) main_mp3_pane_g7

0xc693,	// (0x0009f0e8) main_mp3_pane_g8_ParamLimits

0xc693,	// (0x0009f0e8) main_mp3_pane_g8

0xf693,	// (0x000a20e8) main_mp3_pane_g_ParamLimits

0x41d2,	// (0x00096c27) main_mp3_pane_t2

0x41e2,	// (0x00096c37) main_mp3_pane_t3

0xc6ad,	// (0x0009f102) main_mp3_pane_t4

0xc6bb,	// (0x0009f110) main_mp3_pane_t5

0x0005,

0xf6a4,	// (0x000a20f9) main_mp3_pane_t

0xc6c9,	// (0x0009f11e) mup_progress_pane_cp01

0x0eb0,	// (0x00093905) aid_zoom_text_secondary2

0xc491,	// (0x0009eee6) list_cale_ev2_pane

0xc499,	// (0x0009eeee) scroll_pane_cp023_ParamLimits

0x42f6,	// (0x00096d4b) field_cale_ev2_pane_ParamLimits

0x42f6,	// (0x00096d4b) field_cale_ev2_pane

0xc6d1,	// (0x0009f126) field_cale_ev2_pane_g1_ParamLimits

0xc6d1,	// (0x0009f126) field_cale_ev2_pane_g1

0xc6dd,	// (0x0009f132) field_cale_ev2_pane_g2_ParamLimits

0xc6dd,	// (0x0009f132) field_cale_ev2_pane_g2

0xc6f5,	// (0x0009f14a) field_cale_ev2_pane_g3_ParamLimits

0xc6f5,	// (0x0009f14a) field_cale_ev2_pane_g3

0x0003,

0xf6c5,	// (0x000a211a) field_cale_ev2_pane_g_ParamLimits

0xf6c5,	// (0x000a211a) field_cale_ev2_pane_g

0xc719,	// (0x0009f16e) field_cale_ev2_pane_t1_ParamLimits

0xc719,	// (0x0009f16e) field_cale_ev2_pane_t1

0xc730,	// (0x0009f185) field_cale_ev2_pane_t2_ParamLimits

0xc730,	// (0x0009f185) field_cale_ev2_pane_t2

0x0001,

0xf6ce,	// (0x000a2123) field_cale_ev2_pane_t_ParamLimits

0xf6ce,	// (0x000a2123) field_cale_ev2_pane_t

0x35ee,	// (0x00096043) main_postcard_pane_g5_ParamLimits

0x35ee,	// (0x00096043) main_postcard_pane_g5

0x35fc,	// (0x00096051) main_postcard_pane_g6_ParamLimits

0x35fc,	// (0x00096051) main_postcard_pane_g6

0x9e51,	// (0x0009c8a6) camera2_autofocus_pane_cp_ParamLimits

0x9e51,	// (0x0009c8a6) camera2_autofocus_pane_cp

0x3cf6,	// (0x0009674b) main_mup3_pane

0x435f,	// (0x00096db4) main_mup3_pane_g1_ParamLimits

0x435f,	// (0x00096db4) main_mup3_pane_g1

0x4380,	// (0x00096dd5) main_mup3_pane_g2_ParamLimits

0x4380,	// (0x00096dd5) main_mup3_pane_g2

0x43fa,	// (0x00096e4f) main_mup3_pane_g3_ParamLimits

0x43fa,	// (0x00096e4f) main_mup3_pane_g3

0x443d,	// (0x00096e92) main_mup3_pane_g4_ParamLimits

0x443d,	// (0x00096e92) main_mup3_pane_g4

0x4480,	// (0x00096ed5) main_mup3_pane_g5_ParamLimits

0x4480,	// (0x00096ed5) main_mup3_pane_g5

0x44c3,	// (0x00096f18) main_mup3_pane_g6_ParamLimits

0x44c3,	// (0x00096f18) main_mup3_pane_g6

0x9e6d,	// (0x0009c8c2) main_mup3_pane_g7_ParamLimits

0x9e6d,	// (0x0009c8c2) main_mup3_pane_g7

0x0007,

0xf6de,	// (0x000a2133) main_mup3_pane_g_ParamLimits

0xf6de,	// (0x000a2133) main_mup3_pane_g

0x4539,	// (0x00096f8e) main_mup3_pane_t1_ParamLimits

0x4539,	// (0x00096f8e) main_mup3_pane_t1

0x45a8,	// (0x00096ffd) main_mup3_pane_t2_ParamLimits

0x45a8,	// (0x00096ffd) main_mup3_pane_t2

0x4671,	// (0x000970c6) main_mup3_pane_t4_ParamLimits

0x4671,	// (0x000970c6) main_mup3_pane_t4

0x46bf,	// (0x00097114) main_mup3_pane_t5_ParamLimits

0x46bf,	// (0x00097114) main_mup3_pane_t5

0x476f,	// (0x000971c4) main_mup3_pane_t6_ParamLimits

0x476f,	// (0x000971c4) main_mup3_pane_t6

0x0005,

0xf6ef,	// (0x000a2144) main_mup3_pane_t_ParamLimits

0xf6ef,	// (0x000a2144) main_mup3_pane_t

0x481b,	// (0x00097270) mup3_progress_pane_ParamLimits

0x481b,	// (0x00097270) mup3_progress_pane

0x488f,	// (0x000972e4) popup_mup3_control_window_ParamLimits

0x488f,	// (0x000972e4) popup_mup3_control_window

0xc745,	// (0x0009f19a) popup_mup3_text_window

0x48a8,	// (0x000972fd) mup3_progress_pane_t1

0x48c7,	// (0x0009731c) mup3_progress_pane_t2

0xc74d,	// (0x0009f1a2) mup3_progress_pane_t3

0x0002,

0xf6fc,	// (0x000a2151) mup3_progress_pane_t

0xc76a,	// (0x0009f1bf) mup_progress_pane_cp03

0xecf8,	// (0x000a174d) bg_tb_trans_pane_cp04

0x48e6,	// (0x0009733b) mup3_volume_pane

0x48ee,	// (0x00097343) popup_mup3_control_window_g1

0x48f7,	// (0x0009734c) mup3_volume_pane_g1

0x4900,	// (0x00097355) mup3_volume_pane_g2

0x4909,	// (0x0009735e) mup3_volume_pane_g3

0x0002,

0xf703,	// (0x000a2158) mup3_volume_pane_g

0xecf8,	// (0x000a174d) bg_tb_trans_pane_cp03

0xc77a,	// (0x0009f1cf) popup_mup3_text_window_g1

0xc782,	// (0x0009f1d7) popup_mup3_text_window_t1

0x9f19,	// (0x0009c96e) list_calc_item_pane_g1_ParamLimits

0xc18b,	// (0x0009ebe0) mup_volume_pane_cp_g1

0x42b4,	// (0x00096d09) main_touch_calib_pane_t3

0x42ca,	// (0x00096d1f) main_touch_calib_pane_t4

0x42e0,	// (0x00096d35) main_touch_calib_pane_t5

0x0e68,	// (0x000938bd) aid_cell_size_toolbar2

0x0e70,	// (0x000938c5) aid_popup3_width_pane

0x0d78,	// (0x000937cd) aid_zoom_text_msg_primary

0x1a82,	// (0x000944d7) vorec_t7

0x9edd,	// (0x0009c932) bg_calc_paper_pane_g1_ParamLimits

0x9ee9,	// (0x0009c93e) bg_calc_paper_pane_g2_ParamLimits

0x9ef5,	// (0x0009c94a) bg_calc_paper_pane_g3_ParamLimits

0x9f01,	// (0x0009c956) bg_calc_paper_pane_g4_ParamLimits

0x9f0d,	// (0x0009c962) bg_calc_paper_pane_g5_ParamLimits

0x13c6,	// (0x00093e1b) bg_calc_paper_pane_g6_ParamLimits

0x13d7,	// (0x00093e2c) bg_calc_paper_pane_g7_ParamLimits

0x13e8,	// (0x00093e3d) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000a1b28) bg_calc_paper_pane_g_ParamLimits

0x13f9,	// (0x00093e4e) calc_bg_paper_pane_g9_ParamLimits

0x9e51,	// (0x0009c8a6) image_qvga_pane_ParamLimits

0x9e51,	// (0x0009c8a6) image_qvga_pane

0x9de4,	// (0x0009c839) bg_popup_sub_pane_cp04_ParamLimits

0xad80,	// (0x0009d7d5) popup_mup_playback_window_g1_ParamLimits

0xad8c,	// (0x0009d7e1) popup_mup_playback_window_t1_ParamLimits

0xada1,	// (0x0009d7f6) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x000a1e8b) popup_mup_playback_window_t_ParamLimits

0x9e5f,	// (0x0009c8b4) main_mup2_pane_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) main_mup2_pane_g3

0x1d67,	// (0x000947bc) popup_toolbar_window_cp04

0xb196,	// (0x0009dbeb) popup_call2_audio_second_window_g3_ParamLimits

0xb196,	// (0x0009dbeb) popup_call2_audio_second_window_g3

0xb6b6,	// (0x0009e10b) popup_call2_audio_first_window_g4_ParamLimits

0xb6b6,	// (0x0009e10b) popup_call2_audio_first_window_g4

0xbcdd,	// (0x0009e732) popup_call2_audio_in_window_g4_ParamLimits

0xbcdd,	// (0x0009e732) popup_call2_audio_in_window_g4

0x3700,	// (0x00096155) aid_area_sk_bg_cut_ParamLimits

0x3700,	// (0x00096155) aid_area_sk_bg_cut

0xadb6,	// (0x0009d80b) aid_area_sk_bg_cut_2_ParamLimits

0xadb6,	// (0x0009d80b) aid_area_sk_bg_cut_2

0xecf8,	// (0x000a174d) aid_placing_details_win

0xecf8,	// (0x000a174d) aid_placing_details_win_2

0x9e5f,	// (0x0009c8b4) camera2_autofocus_pane_g1_ParamLimits

0x10bd,	// (0x00093b12) popup_fixed_preview_cale_window_ParamLimits

0x10bd,	// (0x00093b12) popup_fixed_preview_cale_window

0xaac1,	// (0x0009d516) navi_slider_pane_g3

0xaaca,	// (0x0009d51f) navi_slider_pane_g4

0xaad3,	// (0x0009d528) navi_slider_pane_g5

0xaac1,	// (0x0009d516) navi_slider_pane_g6

0x3215,	// (0x00095c6a) navi_slider_pane_g7

0xabd1,	// (0x0009d626) mup_scale_pane_g3

0xabda,	// (0x0009d62f) mup_scale_pane_g4

0xabe3,	// (0x0009d638) mup_scale_pane_g5

0x3414,	// (0x00095e69) mup_scale_pane_g6

0x341d,	// (0x00095e72) mup_scale_pane_g7

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g3

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g4

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g5

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g6

0xd2ee,	// (0x0009fd43) cams2_slider_pane_g7

0xa0b9,	// (0x0009cb0e) camera2_autofocus_pane_cp_g1

0xbfed,	// (0x0009ea42) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfed,	// (0x0009ea42) bg_popup_preview_window_pane_cp02

0xc790,	// (0x0009f1e5) list_fp_cale_pane_ParamLimits

0xc790,	// (0x0009f1e5) list_fp_cale_pane

0xc79c,	// (0x0009f1f1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc79c,	// (0x0009f1f1) popup_fixed_preview_cale_window_t1

0x4912,	// (0x00097367) popup_fixed_preview_cale_window_t2_ParamLimits

0x4912,	// (0x00097367) popup_fixed_preview_cale_window_t2

0x4927,	// (0x0009737c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4927,	// (0x0009737c) popup_fixed_preview_cale_window_t3

0x0002,

0xf70a,	// (0x000a215f) popup_fixed_preview_cale_window_t_ParamLimits

0xf70a,	// (0x000a215f) popup_fixed_preview_cale_window_t

0x493c,	// (0x00097391) list_single_fp_cale_pane_ParamLimits

0x493c,	// (0x00097391) list_single_fp_cale_pane

0xc7ba,	// (0x0009f20f) list_single_fp_cale_pane_g1_ParamLimits

0xc7ba,	// (0x0009f20f) list_single_fp_cale_pane_g1

0xc7c6,	// (0x0009f21b) list_single_fp_cale_pane_g2_ParamLimits

0xc7c6,	// (0x0009f21b) list_single_fp_cale_pane_g2

0x0002,

0xf711,	// (0x000a2166) list_single_fp_cale_pane_g_ParamLimits

0xf711,	// (0x000a2166) list_single_fp_cale_pane_g

0xc7df,	// (0x0009f234) list_single_fp_cale_pane_t1_ParamLimits

0xc7df,	// (0x0009f234) list_single_fp_cale_pane_t1

0xc7f1,	// (0x0009f246) list_single_fp_cale_pane_t2_ParamLimits

0xc7f1,	// (0x0009f246) list_single_fp_cale_pane_t2

0x0001,

0xf718,	// (0x000a216d) list_single_fp_cale_pane_t_ParamLimits

0xf718,	// (0x000a216d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1131,	// (0x00093b86) main_dialer_pane

0xecf8,	// (0x000a174d) aid_cell_size_keypad

0xecf8,	// (0x000a174d) dialer_ne_pane

0xecf8,	// (0x000a174d) grid_dialer_command_1_pane

0xecf8,	// (0x000a174d) grid_dialer_command_2_pane

0xecf8,	// (0x000a174d) grid_dialer_keypad_pane

0xc02a,	// (0x0009ea7f) bg_popup_call_pane_cp06_ParamLimits

0xc02a,	// (0x0009ea7f) bg_popup_call_pane_cp06

0xc02a,	// (0x0009ea7f) dialer_ne_clear_pane_ParamLimits

0xc02a,	// (0x0009ea7f) dialer_ne_clear_pane

0xa0b9,	// (0x0009cb0e) dialer_ne_pane_g1

0xa08b,	// (0x0009cae0) dialer_ne_pane_t1_ParamLimits

0xa08b,	// (0x0009cae0) dialer_ne_pane_t1

0xc824,	// (0x0009f279) dialer_ne_pane_t2_ParamLimits

0xc824,	// (0x0009f279) dialer_ne_pane_t2

0x494f,	// (0x000973a4) dialer_ne_pane_t3_ParamLimits

0x494f,	// (0x000973a4) dialer_ne_pane_t3

0x0002,

0xf71d,	// (0x000a2172) dialer_ne_pane_t_ParamLimits

0xf71d,	// (0x000a2172) dialer_ne_pane_t

0x494f,	// (0x000973a4) dialer_ne_pane_t3_copy1_ParamLimits

0x494f,	// (0x000973a4) dialer_ne_pane_t3_copy1

0xc841,	// (0x0009f296) cell_dialer_keypad_pane_ParamLimits

0xc841,	// (0x0009f296) cell_dialer_keypad_pane

0xed22,	// (0x000a1777) cell_dialer_command_1_pane_ParamLimits

0xed22,	// (0x000a1777) cell_dialer_command_1_pane

0xc858,	// (0x0009f2ad) cell_dialer_command_2_pane_ParamLimits

0xc858,	// (0x0009f2ad) cell_dialer_command_2_pane

0xed22,	// (0x000a1777) bg_button_pane_cp02_ParamLimits

0xed22,	// (0x000a1777) bg_button_pane_cp02

0x9e5f,	// (0x0009c8b4) cell_dialer_keypad_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_dialer_keypad_pane_g1

0xed22,	// (0x000a1777) bg_button_pane_cp03_ParamLimits

0xed22,	// (0x000a1777) bg_button_pane_cp03

0x9e5f,	// (0x0009c8b4) cell_dialer_command_1_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_dialer_command_1_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp04

0xa0b9,	// (0x0009cb0e) cell_dialer_command_2_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp06

0xa0b9,	// (0x0009cb0e) dialer_ne_clear_pane_g1

0xa994,	// (0x0009d3e9) navi_pane_g2

0xa9c2,	// (0x0009d417) navi_pane_g3

0x0002,

0xf339,	// (0x000a1d8e) navi_pane_g

0xaa51,	// (0x0009d4a6) navi_pane_mv_g2

0xaa78,	// (0x0009d4cd) navi_pane_mv_g5

0x31e0,	// (0x00095c35) navi_pane_mv_t1

0x9ed1,	// (0x0009c926) main_clock2_pane

0x9e51,	// (0x0009c8a6) main_clock2_list_pane_ParamLimits

0x9e51,	// (0x0009c8a6) main_clock2_list_pane

0x49c5,	// (0x0009741a) main_clock2_pane_t1_ParamLimits

0x49c5,	// (0x0009741a) main_clock2_pane_t1

0x49f3,	// (0x00097448) main_clock2_pane_t2_ParamLimits

0x49f3,	// (0x00097448) main_clock2_pane_t2

0x0004,

0xf729,	// (0x000a217e) main_clock2_pane_t_ParamLimits

0xf729,	// (0x000a217e) main_clock2_pane_t

0x4a58,	// (0x000974ad) popup_clock_analogue_window_cp03_ParamLimits

0x4a58,	// (0x000974ad) popup_clock_analogue_window_cp03

0x4a76,	// (0x000974cb) popup_clock_digital_window_cp02_ParamLimits

0x4a76,	// (0x000974cb) popup_clock_digital_window_cp02

0x4aeb,	// (0x00097540) main_clock2_list_single_pane_ParamLimits

0x4aeb,	// (0x00097540) main_clock2_list_single_pane

0xa083,	// (0x0009cad8) list_highlight_pane_cp05

0xc89b,	// (0x0009f2f0) main_clock2_list_single_pane_t1

0x1d67,	// (0x000947bc) popup_toolbar_window_cp04_ParamLimits

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g2

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g3_ParamLimits

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g3

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g4_ParamLimits

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g4

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g5_ParamLimits

0x9e6d,	// (0x0009c8c2) camera2_autofocus_pane_g5

0x0004,

0xf66d,	// (0x000a20c2) camera2_autofocus_pane_g_ParamLimits

0xf66d,	// (0x000a20c2) camera2_autofocus_pane_g

0x4320,	// (0x00096d75) camera2_autofocus_pane_cp_g2

0x4328,	// (0x00096d7d) camera2_autofocus_pane_cp_g3

0x4330,	// (0x00096d85) camera2_autofocus_pane_cp_g4

0x4338,	// (0x00096d8d) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d3,	// (0x000a2128) camera2_autofocus_pane_cp_g

0xecf8,	// (0x000a174d) popup_dialer_spcha_window

0xecf8,	// (0x000a174d) bg_popup_sub_pane_cp07

0xecf8,	// (0x000a174d) list_spcha_pane

0xc8a9,	// (0x0009f2fe) list_single_spcha_pane_ParamLimits

0xc8a9,	// (0x0009f2fe) list_single_spcha_pane

0xecf8,	// (0x000a174d) list_highlight_pane_cp06

0xa5f4,	// (0x0009d049) list_single_spcha_pane_t1

0xba87,	// (0x0009e4dc) popup_call2_audio_out_window_g4_ParamLimits

0xba87,	// (0x0009e4dc) popup_call2_audio_out_window_g4

0x1131,	// (0x00093b86) main_imed2_pane

0x3d90,	// (0x000967e5) popup_imed_adjust2_window

0x3da3,	// (0x000967f8) popup_imed_trans_window_ParamLimits

0x3da3,	// (0x000967f8) popup_imed_trans_window

0xc260,	// (0x0009ecb5) popup_blid_sat_info2_window_t1

0xc26e,	// (0x0009ecc3) popup_blid_sat_info2_window_t2

0x000a,

0xf602,	// (0x000a2057) popup_blid_sat_info2_window_t

0x4ba0,	// (0x000975f5) aid_size_cell_colour_35

0x4bba,	// (0x0009760f) aid_size_cell_colour_112

0x4bd1,	// (0x00097626) aid_size_cell_effect

0xed22,	// (0x000a1777) bg_tb_trans_pane_cp02

0xac8d,	// (0x0009d6e2) heading_imed_pane

0x4beb,	// (0x00097640) listscroll_imed_pane

0xc8bb,	// (0x0009f310) heading_imed_pane_g1

0xc8c3,	// (0x0009f318) heading_imed_pane_t1

0xc8d1,	// (0x0009f326) grid_imed_colour_35_pane_ParamLimits

0xc8d1,	// (0x0009f326) grid_imed_colour_35_pane

0x4bf7,	// (0x0009764c) grid_imed_effect_pane

0xc8e9,	// (0x0009f33e) list_imed_aspect_pane

0x4c07,	// (0x0009765c) scroll_pane_cp027_ParamLimits

0x4c07,	// (0x0009765c) scroll_pane_cp027

0x4c13,	// (0x00097668) cell_imed_effect_pane_ParamLimits

0x4c13,	// (0x00097668) cell_imed_effect_pane

0xc8f1,	// (0x0009f346) cell_imed_colour_pane_ParamLimits

0xc8f1,	// (0x0009f346) cell_imed_colour_pane

0xc933,	// (0x0009f388) cell_imed_colour_pane_g1_ParamLimits

0xc933,	// (0x0009f388) cell_imed_colour_pane_g1

0xc944,	// (0x0009f399) hgihlgiht_grid_pane_cp016_ParamLimits

0xc944,	// (0x0009f399) hgihlgiht_grid_pane_cp016

0x4c2b,	// (0x00097680) cell_imed_effect_pane_g1

0x4c33,	// (0x00097688) grid_highlight_pane_cp017

0xc955,	// (0x0009f3aa) list_imed_single_pane_ParamLimits

0xc955,	// (0x0009f3aa) list_imed_single_pane

0xecf8,	// (0x000a174d) list_highlight_pane_cp07

0xc96a,	// (0x0009f3bf) list_imed_aspect_pane_comp1_t1

0xac76,	// (0x0009d6cb) bg_tb_trans_pane_cp05

0xc98c,	// (0x0009f3e1) popup_imed_adjust2_window_g1

0xc9b3,	// (0x0009f408) popup_imed_adjust2_window_t1

0xc9cb,	// (0x0009f420) slider_imed_adjust_pane

0xc9df,	// (0x0009f434) slider_imed_adjust_pane_g1

0xc9ef,	// (0x0009f444) slider_imed_adjust_pane_g2

0xc9ff,	// (0x0009f454) slider_imed_adjust_pane_g3

0xca10,	// (0x0009f465) slider_imed_adjust_pane_g4

0x0003,

0xf746,	// (0x000a219b) slider_imed_adjust_pane_g

0x4c3c,	// (0x00097691) aid_size_cell_clipart2

0x4c48,	// (0x0009769d) grid_imed_clipart_pane

0xca21,	// (0x0009f476) scroll_pane_cp031

0x4c52,	// (0x000976a7) cell_imed_clipart_pane_ParamLimits

0x4c52,	// (0x000976a7) cell_imed_clipart_pane

0x4c75,	// (0x000976ca) cell_imed_clipart_pane_g1

0xecf8,	// (0x000a174d) grid_highlight_pane_cp014

0x49a7,	// (0x000973fc) main_clock2_pane_g1_ParamLimits

0x49a7,	// (0x000973fc) main_clock2_pane_g1

0x4a92,	// (0x000974e7) aid_call2_pane_cp10

0x4aa4,	// (0x000974f9) aid_call_pane_cp10

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g1

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g2

0x4ab6,	// (0x0009750b) popup_clock_analogue_window_cp10_g3

0x4ab6,	// (0x0009750b) popup_clock_analogue_window_cp10_g4

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g5

0x0004,

0xf734,	// (0x000a2189) popup_clock_analogue_window_cp10_g

0x4acc,	// (0x00097521) popup_clock_analogue_window_cp10_t1

0x4afd,	// (0x00097552) clock_digital_number_pane_cp10_ParamLimits

0x4afd,	// (0x00097552) clock_digital_number_pane_cp10

0x4b17,	// (0x0009756c) clock_digital_number_pane_cp11_ParamLimits

0x4b17,	// (0x0009756c) clock_digital_number_pane_cp11

0x4b31,	// (0x00097586) clock_digital_number_pane_cp12_ParamLimits

0x4b31,	// (0x00097586) clock_digital_number_pane_cp12

0x4b4b,	// (0x000975a0) clock_digital_number_pane_cp13_ParamLimits

0x4b4b,	// (0x000975a0) clock_digital_number_pane_cp13

0x4b65,	// (0x000975ba) clock_digital_separator_pane_cp10_ParamLimits

0x4b65,	// (0x000975ba) clock_digital_separator_pane_cp10

0x4b7f,	// (0x000975d4) popup_clock_digital_window_cp02_t1_ParamLimits

0x4b7f,	// (0x000975d4) popup_clock_digital_window_cp02_t1

0x9ddc,	// (0x0009c831) clock_digital_number_pane_cp10_g1

0x9ddc,	// (0x0009c831) clock_digital_number_pane_cp10_g2

0x0001,

0xf74f,	// (0x000a21a4) clock_digital_number_pane_cp10_g

0x9ddc,	// (0x0009c831) clock_digital_separator_pane_cp10_g1

0x9ddc,	// (0x0009c831) clock_digital_separator_pane_g2_cp10

0xaa80,	// (0x0009d4d5) navi_pane_vded_g4

0xaa89,	// (0x0009d4de) navi_pane_vded_g5

0xaa92,	// (0x0009d4e7) navi_pane_vded_t1

0x1131,	// (0x00093b86) main_vded_pane

0x4c7e,	// (0x000976d3) main_vded_pane_g1

0x4c8a,	// (0x000976df) main_vded_pane_g2

0x4c94,	// (0x000976e9) main_vded_pane_g3

0x0002,

0xf754,	// (0x000a21a9) main_vded_pane_g

0x4c9e,	// (0x000976f3) main_vded_pane_t1

0x4cac,	// (0x00097701) main_vded_pane_t2

0x0001,

0xf75b,	// (0x000a21b0) main_vded_pane_t

0x4cba,	// (0x0009770f) vded_slider_pane

0x4cc4,	// (0x00097719) vded_video_pane

0xca29,	// (0x0009f47e) vded_video_pane_g1

0x4cce,	// (0x00097723) vded_video_pane_g2

0xa0b9,	// (0x0009cb0e) vded_video_pane_g3

0x0002,

0xf760,	// (0x000a21b5) vded_video_pane_g

0xca33,	// (0x0009f488) vded_slider_pane_g1

0xc18b,	// (0x0009ebe0) vded_slider_pane_g2

0xca3c,	// (0x0009f491) vded_slider_pane_g3

0xca45,	// (0x0009f49a) vded_slider_pane_g4

0xca4e,	// (0x0009f4a3) vded_slider_pane_g5

0x0004,

0xf767,	// (0x000a21bc) vded_slider_pane_g

0x4881,	// (0x000972d6) mup3_rocker_pane_ParamLimits

0x4881,	// (0x000972d6) mup3_rocker_pane

0x4cd7,	// (0x0009772c) mup3_control_keys_pane_g1

0x4cdf,	// (0x00097734) mup3_control_keys_pane_g2

0x4ce7,	// (0x0009773c) mup3_control_keys_pane_g3

0x4cef,	// (0x00097744) mup3_control_keys_pane_g4

0x0003,

0xf772,	// (0x000a21c7) mup3_control_keys_pane_g

0x10e5,	// (0x00093b3a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10e5,	// (0x00093b3a) popup_toolbar2_fixed_window_cp01

0x489b,	// (0x000972f0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x489b,	// (0x000972f0) popup_toolbar2_fixed_window_cp02

0xb41e,	// (0x0009de73) popup_call2_audio_second_window_t4_ParamLimits

0xb41e,	// (0x0009de73) popup_call2_audio_second_window_t4

0xb94c,	// (0x0009e3a1) popup_call2_audio_first_window_t6_ParamLimits

0xb94c,	// (0x0009e3a1) popup_call2_audio_first_window_t6

0xbb8a,	// (0x0009e5df) popup_call2_audio_out_window_t6_ParamLimits

0xbb8a,	// (0x0009e5df) popup_call2_audio_out_window_t6

0x1131,	// (0x00093b86) main_vitu_pane

0x9e51,	// (0x0009c8a6) aid_size_cell_itu_ParamLimits

0x9e51,	// (0x0009c8a6) aid_size_cell_itu

0x9e51,	// (0x0009c8a6) bg_popup_window_pane_cp08_ParamLimits

0x9e51,	// (0x0009c8a6) bg_popup_window_pane_cp08

0x9e51,	// (0x0009c8a6) field_vitu_entry_pane_ParamLimits

0x9e51,	// (0x0009c8a6) field_vitu_entry_pane

0x9e51,	// (0x0009c8a6) grid_vitu_function_pane_ParamLimits

0x9e51,	// (0x0009c8a6) grid_vitu_function_pane

0x9e51,	// (0x0009c8a6) grid_vitu_itu_pane_ParamLimits

0x9e51,	// (0x0009c8a6) grid_vitu_itu_pane

0x9e51,	// (0x0009c8a6) cell_vitu_itu_pane_ParamLimits

0x9e51,	// (0x0009c8a6) cell_vitu_itu_pane

0x9e51,	// (0x0009c8a6) cell_vitu_function_pane_ParamLimits

0x9e51,	// (0x0009c8a6) cell_vitu_function_pane

0xed22,	// (0x000a1777) bg_popup_sub_pane_cp08_ParamLimits

0xed22,	// (0x000a1777) bg_popup_sub_pane_cp08

0xa0d3,	// (0x0009cb28) field_vitu_entry_pane_t1_ParamLimits

0xa0d3,	// (0x0009cb28) field_vitu_entry_pane_t1

0xc824,	// (0x0009f279) field_vitu_entry_pane_t2_ParamLimits

0xc824,	// (0x0009f279) field_vitu_entry_pane_t2

0x0001,

0xf77b,	// (0x000a21d0) field_vitu_entry_pane_t_ParamLimits

0xf77b,	// (0x000a21d0) field_vitu_entry_pane_t

0xc02a,	// (0x0009ea7f) bg_button_pane_cp05_ParamLimits

0xc02a,	// (0x0009ea7f) bg_button_pane_cp05

0xca57,	// (0x0009f4ac) cell_vitu_itu_pane_g1

0xac99,	// (0x0009d6ee) cell_vitu_itu_pane_t1_ParamLimits

0xac99,	// (0x0009d6ee) cell_vitu_itu_pane_t1

0xac99,	// (0x0009d6ee) cell_vitu_itu_pane_t2_ParamLimits

0xac99,	// (0x0009d6ee) cell_vitu_itu_pane_t2

0x0002,

0xf780,	// (0x000a21d5) cell_vitu_itu_pane_t_ParamLimits

0xf780,	// (0x000a21d5) cell_vitu_itu_pane_t

0xecf8,	// (0x000a174d) bg_button_pane_cp07

0xa0b9,	// (0x0009cb0e) cell_vitu_function_pane_g1

0x126a,	// (0x00093cbf) main_calc_pane_g1

0x0ea4,	// (0x000938f9) aid_visual_content_pane

0x1131,	// (0x00093b86) main_vradio_pane

0x9e6d,	// (0x0009c8c2) main_vradio_pane_g1_ParamLimits

0x9e6d,	// (0x0009c8c2) main_vradio_pane_g1

0x9e6d,	// (0x0009c8c2) main_vradio_pane_g2_ParamLimits

0x9e6d,	// (0x0009c8c2) main_vradio_pane_g2

0x0001,

0xf787,	// (0x000a21dc) main_vradio_pane_g_ParamLimits

0xf787,	// (0x000a21dc) main_vradio_pane_g

0xa08b,	// (0x0009cae0) main_vradio_pane_t1_ParamLimits

0xa08b,	// (0x0009cae0) main_vradio_pane_t1

0xa08b,	// (0x0009cae0) main_vradio_pane_t2_ParamLimits

0xa08b,	// (0x0009cae0) main_vradio_pane_t2

0xa08b,	// (0x0009cae0) main_vradio_pane_t3_ParamLimits

0xa08b,	// (0x0009cae0) main_vradio_pane_t3

0x0002,

0xf78c,	// (0x000a21e1) main_vradio_pane_t_ParamLimits

0xf78c,	// (0x000a21e1) main_vradio_pane_t

0x9e51,	// (0x0009c8a6) vradio_rocker_control_pane_ParamLimits

0x9e51,	// (0x0009c8a6) vradio_rocker_control_pane

0x9e51,	// (0x0009c8a6) vradio_station_info_pane_ParamLimits

0x9e51,	// (0x0009c8a6) vradio_station_info_pane

0xed22,	// (0x000a1777) vradio_frequency_info_pane_ParamLimits

0xed22,	// (0x000a1777) vradio_frequency_info_pane

0xa0b9,	// (0x0009cb0e) vradio_station_info_pane_g1

0xac99,	// (0x0009d6ee) vradio_station_info_pane_t1_ParamLimits

0xac99,	// (0x0009d6ee) vradio_station_info_pane_t1

0xa08b,	// (0x0009cae0) vradio_station_info_pane_t2_ParamLimits

0xa08b,	// (0x0009cae0) vradio_station_info_pane_t2

0x0001,

0xf793,	// (0x000a21e8) vradio_station_info_pane_t_ParamLimits

0xf793,	// (0x000a21e8) vradio_station_info_pane_t

0xecf8,	// (0x000a174d) vradio_tuning_pane

0x4cff,	// (0x00097754) vradio_rocker_control_pane_g1

0xca73,	// (0x0009f4c8) vradio_rocker_control_pane_g2

0x4d07,	// (0x0009775c) vradio_rocker_control_pane_g3

0x4d0f,	// (0x00097764) vradio_rocker_control_pane_g4

0x4d17,	// (0x0009776c) vradio_rocker_control_pane_g5

0x0004,

0xf798,	// (0x000a21ed) vradio_rocker_control_pane_g

0xa0b9,	// (0x0009cb0e) vradio_frequency_info_pane_g1

0xa0d3,	// (0x0009cb28) vradio_frequency_info_pane_t1_ParamLimits

0xa0d3,	// (0x0009cb28) vradio_frequency_info_pane_t1

0x4d1f,	// (0x00097774) vradio_tuning_pane_g1

0x4d2c,	// (0x00097781) vradio_tuning_pane_t1

0x0eed,	// (0x00093942) area_side_right_pane_ParamLimits

0x0eed,	// (0x00093942) area_side_right_pane

0xbfb4,	// (0x0009ea09) status_small_pane_g1

0xbfbc,	// (0x0009ea11) status_small_pane_g2

0xbfc5,	// (0x0009ea1a) status_small_pane_g3

0xbfce,	// (0x0009ea23) status_small_pane_g4

0x0003,

0xf564,	// (0x000a1fb9) status_small_pane_g

0xbfd7,	// (0x0009ea2c) status_small_pane_t1

0x1131,	// (0x00093b86) main_video3_pane

0xca7b,	// (0x0009f4d0) cams_zoom_vslider_pane

0xca83,	// (0x0009f4d8) image3_wide_pane_ParamLimits

0xca83,	// (0x0009f4d8) image3_wide_pane

0xca9d,	// (0x0009f4f2) image3_wide_small_pane

0xcaa9,	// (0x0009f4fe) main_video3_pane_g1_ParamLimits

0xcaa9,	// (0x0009f4fe) main_video3_pane_g1

0xcac5,	// (0x0009f51a) main_video3_pane_g2_ParamLimits

0xcac5,	// (0x0009f51a) main_video3_pane_g2

0x0001,

0xf7a3,	// (0x000a21f8) main_video3_pane_g_ParamLimits

0xf7a3,	// (0x000a21f8) main_video3_pane_g

0xcae1,	// (0x0009f536) main_video3_pane_t1_ParamLimits

0xcae1,	// (0x0009f536) main_video3_pane_t1

0xcb0c,	// (0x0009f561) main_video3_pane_t2_ParamLimits

0xcb0c,	// (0x0009f561) main_video3_pane_t2

0xcb37,	// (0x0009f58c) main_video3_pane_t3_ParamLimits

0xcb37,	// (0x0009f58c) main_video3_pane_t3

0x0002,

0xf7a8,	// (0x000a21fd) main_video3_pane_t_ParamLimits

0xf7a8,	// (0x000a21fd) main_video3_pane_t

0xcb64,	// (0x0009f5b9) cams_zoom_vslider_pane_g1

0xcb6d,	// (0x0009f5c2) cams_zoom_vslider_pane_g2

0x0001,

0xf7af,	// (0x000a2204) cams_zoom_vslider_pane_g

0xcb75,	// (0x0009f5ca) small_slider_vertical_pane

0xa0b9,	// (0x0009cb0e) small_slider_vertical_pane_g1

0xa0b9,	// (0x0009cb0e) small_slider_vertical_pane_g2

0xcb7d,	// (0x0009f5d2) small_slider_vertical_pane_g3

0x0002,

0xf7b4,	// (0x000a2209) small_slider_vertical_pane_g

0x1131,	// (0x00093b86) main_hwr_training_pane

0xcb86,	// (0x0009f5db) hwr_training_instruct_pane_ParamLimits

0xcb86,	// (0x0009f5db) hwr_training_instruct_pane

0x4d3b,	// (0x00097790) hwr_training_navi_pane_ParamLimits

0x4d3b,	// (0x00097790) hwr_training_navi_pane

0x4d55,	// (0x000977aa) hwr_training_write_pane_ParamLimits

0x4d55,	// (0x000977aa) hwr_training_write_pane

0xecf8,	// (0x000a174d) bg_frame_shadow_pane

0xcbbd,	// (0x0009f612) hwr_training_write_pane_g1

0xcbc5,	// (0x0009f61a) hwr_training_write_pane_g2

0xcbcd,	// (0x0009f622) hwr_training_write_pane_g3

0xcbd5,	// (0x0009f62a) hwr_training_write_pane_g4

0xcbdd,	// (0x0009f632) hwr_training_write_pane_g5

0xcbe5,	// (0x0009f63a) hwr_training_write_pane_g6

0xcbed,	// (0x0009f642) hwr_training_write_pane_g7

0x0006,

0xf7bb,	// (0x000a2210) hwr_training_write_pane_g

0x4d8d,	// (0x000977e2) hwr_training_navi_pane_g1_ParamLimits

0x4d8d,	// (0x000977e2) hwr_training_navi_pane_g1

0x4d9f,	// (0x000977f4) hwr_training_navi_pane_g2_ParamLimits

0x4d9f,	// (0x000977f4) hwr_training_navi_pane_g2

0x4db1,	// (0x00097806) hwr_training_navi_pane_g3_ParamLimits

0x4db1,	// (0x00097806) hwr_training_navi_pane_g3

0x4dc1,	// (0x00097816) hwr_training_navi_pane_g4_ParamLimits

0x4dc1,	// (0x00097816) hwr_training_navi_pane_g4

0x0004,

0xf7ca,	// (0x000a221f) hwr_training_navi_pane_g_ParamLimits

0xf7ca,	// (0x000a221f) hwr_training_navi_pane_g

0x4ddb,	// (0x00097830) hwr_training_navi_pane_t1

0x4de9,	// (0x0009783e) list_single_hwr_training_instruct_pane_ParamLimits

0x4de9,	// (0x0009783e) list_single_hwr_training_instruct_pane

0xcbf5,	// (0x0009f64a) list_single_hwr_training_instruct_pane_t1

0xc361,	// (0x0009edb6) bg_frame_shadow_pane_g1

0xcc04,	// (0x0009f659) bg_frame_shadow_pane_g2

0xcc0c,	// (0x0009f661) bg_frame_shadow_pane_g3

0xcc14,	// (0x0009f669) bg_frame_shadow_pane_g4

0xcc1c,	// (0x0009f671) bg_frame_shadow_pane_g5

0xcc24,	// (0x0009f679) bg_frame_shadow_pane_g6

0xcc2c,	// (0x0009f681) bg_frame_shadow_pane_g7

0x9f80,	// (0x0009c9d5) bg_frame_shadow_pane_g8

0x0007,

0xf7d5,	// (0x000a222a) bg_frame_shadow_pane_g

0x1131,	// (0x00093b86) main_video_tele_dialer_pane

0x4e12,	// (0x00097867) aid_size_cell_video_keypad_ParamLimits

0x4e12,	// (0x00097867) aid_size_cell_video_keypad

0x4e22,	// (0x00097877) grid_video_dialer_keypad_pane_ParamLimits

0x4e22,	// (0x00097877) grid_video_dialer_keypad_pane

0x4e56,	// (0x000978ab) video_down_pane_cp_ParamLimits

0x4e56,	// (0x000978ab) video_down_pane_cp

0x4e80,	// (0x000978d5) cell_video_dialer_keypad_pane_ParamLimits

0x4e80,	// (0x000978d5) cell_video_dialer_keypad_pane

0xcc34,	// (0x0009f689) bg_button_pane_cp08_ParamLimits

0xcc34,	// (0x0009f689) bg_button_pane_cp08

0x4e95,	// (0x000978ea) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4e95,	// (0x000978ea) cell_video_dialer_keypad_pane_g1

0x4875,	// (0x000972ca) mup3_rocker2_pane_ParamLimits

0x4875,	// (0x000972ca) mup3_rocker2_pane

0xa0b9,	// (0x0009cb0e) mup3_rocker2_pane_g1

0x3d04,	// (0x00096759) main_dialer2_pane

0x1131,	// (0x00093b86) main_mp4_pane

0x4eed,	// (0x00097942) main_mp4_pane_g1_ParamLimits

0x4eed,	// (0x00097942) main_mp4_pane_g1

0x4efb,	// (0x00097950) main_mp4_pane_g2_ParamLimits

0x4efb,	// (0x00097950) main_mp4_pane_g2

0x4f09,	// (0x0009795e) main_mp4_pane_g3_ParamLimits

0x4f09,	// (0x0009795e) main_mp4_pane_g3

0x4f4e,	// (0x000979a3) main_mp4_pane_g4_ParamLimits

0x4f4e,	// (0x000979a3) main_mp4_pane_g4

0x4f7c,	// (0x000979d1) main_mp4_pane_g5_ParamLimits

0x4f7c,	// (0x000979d1) main_mp4_pane_g5

0x0007,

0xf7f5,	// (0x000a224a) main_mp4_pane_g_ParamLimits

0xf7f5,	// (0x000a224a) main_mp4_pane_g

0x4ff0,	// (0x00097a45) main_mp4_pane_t1_ParamLimits

0x4ff0,	// (0x00097a45) main_mp4_pane_t1

0x504c,	// (0x00097aa1) main_mp4_pane_t2_ParamLimits

0x504c,	// (0x00097aa1) main_mp4_pane_t2

0xcc40,	// (0x0009f695) main_mp4_pane_t3_ParamLimits

0xcc40,	// (0x0009f695) main_mp4_pane_t3

0x509e,	// (0x00097af3) main_mp4_pane_t4_ParamLimits

0x509e,	// (0x00097af3) main_mp4_pane_t4

0x0003,

0xf806,	// (0x000a225b) main_mp4_pane_t_ParamLimits

0xf806,	// (0x000a225b) main_mp4_pane_t

0x50e2,	// (0x00097b37) mp4_progress_pane_ParamLimits

0x50e2,	// (0x00097b37) mp4_progress_pane

0x512c,	// (0x00097b81) mp4_rocker_pane_ParamLimits

0x512c,	// (0x00097b81) mp4_rocker_pane

0xcc6e,	// (0x0009f6c3) mp4_progress_pane_t1

0xcc87,	// (0x0009f6dc) mp4_progress_pane_t2

0x0001,

0xf80f,	// (0x000a2264) mp4_progress_pane_t

0xcca0,	// (0x0009f6f5) mup_progress_pane_cp04

0xd2ee,	// (0x0009fd43) mp4_rocker_pane_g1

0x514c,	// (0x00097ba1) aid_cell_size_keypad2_ParamLimits

0x514c,	// (0x00097ba1) aid_cell_size_keypad2

0x515c,	// (0x00097bb1) dialer2_ne_pane_ParamLimits

0x515c,	// (0x00097bb1) dialer2_ne_pane

0x516a,	// (0x00097bbf) grid_dialer2_keypad_pane_ParamLimits

0x516a,	// (0x00097bbf) grid_dialer2_keypad_pane

0xc5c8,	// (0x0009f01d) bg_popup_call_pane_cp07_ParamLimits

0xc5c8,	// (0x0009f01d) bg_popup_call_pane_cp07

0x517a,	// (0x00097bcf) dialer2_ne_pane_t1_ParamLimits

0x517a,	// (0x00097bcf) dialer2_ne_pane_t1

0x519f,	// (0x00097bf4) cell_dialer2_keypad_pane_ParamLimits

0x519f,	// (0x00097bf4) cell_dialer2_keypad_pane

0xccc5,	// (0x0009f71a) bg_button_pane_pane_cp04_ParamLimits

0xccc5,	// (0x0009f71a) bg_button_pane_pane_cp04

0x51b4,	// (0x00097c09) cell_dialer2_keypad_pane_g1_ParamLimits

0x51b4,	// (0x00097c09) cell_dialer2_keypad_pane_g1

0x1c29,	// (0x0009467e) aid_placing_vt_set_content_ParamLimits

0x1c29,	// (0x0009467e) aid_placing_vt_set_content

0x1c55,	// (0x000946aa) aid_placing_vt_set_title_ParamLimits

0x1c55,	// (0x000946aa) aid_placing_vt_set_title

0x1131,	// (0x00093b86) main_image3_pane

0x524e,	// (0x00097ca3) area_side_right_pane_cp01_ParamLimits

0x524e,	// (0x00097ca3) area_side_right_pane_cp01

0x527b,	// (0x00097cd0) main_image3_pane_g1_ParamLimits

0x527b,	// (0x00097cd0) main_image3_pane_g1

0x5289,	// (0x00097cde) main_image3_pane_g2_ParamLimits

0x5289,	// (0x00097cde) main_image3_pane_g2

0x52a2,	// (0x00097cf7) main_image3_pane_g3_ParamLimits

0x52a2,	// (0x00097cf7) main_image3_pane_g3

0x52bb,	// (0x00097d10) main_image3_pane_g4_ParamLimits

0x52bb,	// (0x00097d10) main_image3_pane_g4

0x0003,

0xf81e,	// (0x000a2273) main_image3_pane_g_ParamLimits

0xf81e,	// (0x000a2273) main_image3_pane_g

0x52d4,	// (0x00097d29) main_image3_pane_t1_ParamLimits

0x52d4,	// (0x00097d29) main_image3_pane_t1

0x52f9,	// (0x00097d4e) main_image3_pane_t2_ParamLimits

0x52f9,	// (0x00097d4e) main_image3_pane_t2

0x5318,	// (0x00097d6d) main_image3_pane_t3_ParamLimits

0x5318,	// (0x00097d6d) main_image3_pane_t3

0x0003,

0xf827,	// (0x000a227c) main_image3_pane_t_ParamLimits

0xf827,	// (0x000a227c) main_image3_pane_t

0x9e51,	// (0x0009c8a6) grid_sctrl_middle_pane_cp01_ParamLimits

0x9e51,	// (0x0009c8a6) grid_sctrl_middle_pane_cp01

0x5379,	// (0x00097dce) cell_sctrl_middle_pane_cp01_ParamLimits

0x5379,	// (0x00097dce) cell_sctrl_middle_pane_cp01

0x538a,	// (0x00097ddf) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x538a,	// (0x00097ddf) cell_sctrl_middle_pane_cp01_g1

0x1131,	// (0x00093b86) main_call4_pane

0x5397,	// (0x00097dec) aid_size_button_call4_ParamLimits

0x5397,	// (0x00097dec) aid_size_button_call4

0x53cd,	// (0x00097e22) call4_windows_pane_ParamLimits

0x53cd,	// (0x00097e22) call4_windows_pane

0x53e2,	// (0x00097e37) grid_call4_button_pane_ParamLimits

0x53e2,	// (0x00097e37) grid_call4_button_pane

0x5410,	// (0x00097e65) call4_windows_conf_pane

0x5425,	// (0x00097e7a) popup_call4_audio_first_window_ParamLimits

0x5425,	// (0x00097e7a) popup_call4_audio_first_window

0x5475,	// (0x00097eca) popup_call4_audio_second_window_ParamLimits

0x5475,	// (0x00097eca) popup_call4_audio_second_window

0x548e,	// (0x00097ee3) popup_call4_audio_wait_window_ParamLimits

0x548e,	// (0x00097ee3) popup_call4_audio_wait_window

0x549c,	// (0x00097ef1) cell_call4_button_pane_ParamLimits

0x549c,	// (0x00097ef1) cell_call4_button_pane

0x54bf,	// (0x00097f14) bg_button_pane_cp09_ParamLimits

0x54bf,	// (0x00097f14) bg_button_pane_cp09

0x54cb,	// (0x00097f20) cell_call4_button_pane_g1_ParamLimits

0x54cb,	// (0x00097f20) cell_call4_button_pane_g1

0x54d8,	// (0x00097f2d) cell_call4_button_pane_t1_ParamLimits

0x54d8,	// (0x00097f2d) cell_call4_button_pane_t1

0xccd9,	// (0x0009f72e) popup_call4_audio_conf_window_ParamLimits

0xccd9,	// (0x0009f72e) popup_call4_audio_conf_window

0x48a8,	// (0x000972fd) mup3_progress_pane_t1_ParamLimits

0x48c7,	// (0x0009731c) mup3_progress_pane_t2_ParamLimits

0xc74d,	// (0x0009f1a2) mup3_progress_pane_t3_ParamLimits

0xf6fc,	// (0x000a2151) mup3_progress_pane_t_ParamLimits

0xc76a,	// (0x0009f1bf) mup_progress_pane_cp03_ParamLimits

0x4cf7,	// (0x0009774c) mup3_control_keys_pane_g4_copy1

0x5110,	// (0x00097b65) mp4_rocker2_pane_ParamLimits

0x5110,	// (0x00097b65) mp4_rocker2_pane

0xcced,	// (0x0009f742) mp4_rocker2_pane_g1

0xccf5,	// (0x0009f74a) mp4_rocker2_pane_g2

0x551c,	// (0x00097f71) mp4_rocker2_pane_g3

0x5524,	// (0x00097f79) mp4_rocker2_pane_g4

0x552c,	// (0x00097f81) mp4_rocker2_pane_g5

0x0004,

0xf830,	// (0x000a2285) mp4_rocker2_pane_g

0x1131,	// (0x00093b86) main_camera4_pane

0x1131,	// (0x00093b86) main_video4_pane

0x4e32,	// (0x00097887) main_video_tele_dialer_pane_t1_ParamLimits

0x4e32,	// (0x00097887) main_video_tele_dialer_pane_t1

0x4e44,	// (0x00097899) main_video_tele_dialer_pane_t2_ParamLimits

0x4e44,	// (0x00097899) main_video_tele_dialer_pane_t2

0x0001,

0xf7e6,	// (0x000a223b) main_video_tele_dialer_pane_t_ParamLimits

0xf7e6,	// (0x000a223b) main_video_tele_dialer_pane_t

0x554c,	// (0x00097fa1) cam4_autofocus_pane_ParamLimits

0x554c,	// (0x00097fa1) cam4_autofocus_pane

0x5566,	// (0x00097fbb) cam4_image_uncrop_pane_ParamLimits

0x5566,	// (0x00097fbb) cam4_image_uncrop_pane

0x557d,	// (0x00097fd2) cam4_indicators_pane_ParamLimits

0x557d,	// (0x00097fd2) cam4_indicators_pane

0x5599,	// (0x00097fee) main_camera4_pane_g1_ParamLimits

0x5599,	// (0x00097fee) main_camera4_pane_g1

0x55a5,	// (0x00097ffa) main_camera4_pane_g2_ParamLimits

0x55a5,	// (0x00097ffa) main_camera4_pane_g2

0x55a5,	// (0x00097ffa) main_camera4_pane_g3_ParamLimits

0x55a5,	// (0x00097ffa) main_camera4_pane_g3

0x55b1,	// (0x00098006) main_camera4_pane_g4_ParamLimits

0x55b1,	// (0x00098006) main_camera4_pane_g4

0x55bd,	// (0x00098012) main_camera4_pane_g5_ParamLimits

0x55bd,	// (0x00098012) main_camera4_pane_g5

0x0005,

0xf83b,	// (0x000a2290) main_camera4_pane_g_ParamLimits

0xf83b,	// (0x000a2290) main_camera4_pane_g

0x55d7,	// (0x0009802c) main_camera4_pane_t1_ParamLimits

0x55d7,	// (0x0009802c) main_camera4_pane_t1

0xdfa2,	// (0x000a09f7) bg_tb_trans_pane_cp06

0x5627,	// (0x0009807c) cam4_indicators_pane_g1

0x5638,	// (0x0009808d) cam4_indicators_pane_g2

0x0002,

0xf856,	// (0x000a22ab) cam4_indicators_pane_g

0x5650,	// (0x000980a5) cam4_indicators_pane_t1

0x567a,	// (0x000980cf) main_video4_pane_g1_ParamLimits

0x567a,	// (0x000980cf) main_video4_pane_g1

0x5686,	// (0x000980db) main_video4_pane_g2_ParamLimits

0x5686,	// (0x000980db) main_video4_pane_g2

0x5692,	// (0x000980e7) main_video4_pane_g3_ParamLimits

0x5692,	// (0x000980e7) main_video4_pane_g3

0x569e,	// (0x000980f3) main_video4_pane_g4_ParamLimits

0x569e,	// (0x000980f3) main_video4_pane_g4

0x0004,

0xf85d,	// (0x000a22b2) main_video4_pane_g_ParamLimits

0xf85d,	// (0x000a22b2) main_video4_pane_g

0x56be,	// (0x00098113) vid4_indicators_pane_ParamLimits

0x56be,	// (0x00098113) vid4_indicators_pane

0x56dd,	// (0x00098132) video4_image_uncrop_cif_pane_ParamLimits

0x56dd,	// (0x00098132) video4_image_uncrop_cif_pane

0x56ec,	// (0x00098141) video4_image_uncrop_nhd_pane_ParamLimits

0x56ec,	// (0x00098141) video4_image_uncrop_nhd_pane

0x5566,	// (0x00097fbb) video4_image_uncrop_vga_pane_ParamLimits

0x5566,	// (0x00097fbb) video4_image_uncrop_vga_pane

0x3cf6,	// (0x0009674b) bg_tb_trans_pane_cp07

0x5701,	// (0x00098156) vid4_indicators_pane_g1

0x5715,	// (0x0009816a) vid4_indicators_pane_g2

0x5729,	// (0x0009817e) vid4_indicators_pane_g3

0x0004,

0xf868,	// (0x000a22bd) vid4_indicators_pane_g

0x5756,	// (0x000981ab) vid4_indicators_pane_t1

0x576d,	// (0x000981c2) cam4_autofocus_pane_g1

0x5775,	// (0x000981ca) cam4_autofocus_pane_g2

0x577d,	// (0x000981d2) cam4_autofocus_pane_g3

0x0002,

0xf873,	// (0x000a22c8) cam4_autofocus_pane_g

0x5785,	// (0x000981da) cam4_autofocus_pane_g3_copy1

0x4e64,	// (0x000978b9) video_down_pane_cp_t1

0x4e72,	// (0x000978c7) video_down_pane_cp_t2

0x0001,

0xf7eb,	// (0x000a2240) video_down_pane_cp_t

0x1117,	// (0x00093b6c) popup_vitu2_window_ParamLimits

0x1117,	// (0x00093b6c) popup_vitu2_window

0x578d,	// (0x000981e2) aid_size_cell2_itu2_ParamLimits

0x578d,	// (0x000981e2) aid_size_cell2_itu2

0x57af,	// (0x00098204) aid_size_cell_itu2_ParamLimits

0x57af,	// (0x00098204) aid_size_cell_itu2

0x57f3,	// (0x00098248) bg_popup_window_pane_cp09_ParamLimits

0x57f3,	// (0x00098248) bg_popup_window_pane_cp09

0x5801,	// (0x00098256) field_vitu2_entry_pane_ParamLimits

0x5801,	// (0x00098256) field_vitu2_entry_pane

0x5821,	// (0x00098276) grid_vitu2_function_pane_ParamLimits

0x5821,	// (0x00098276) grid_vitu2_function_pane

0x5865,	// (0x000982ba) grid_vitu2_itu_pane_ParamLimits

0x5865,	// (0x000982ba) grid_vitu2_itu_pane

0x58dd,	// (0x00098332) cell_vitu2_itu_pane_ParamLimits

0x58dd,	// (0x00098332) cell_vitu2_itu_pane

0x58f6,	// (0x0009834b) cell_vitu2_function_pane_ParamLimits

0x58f6,	// (0x0009834b) cell_vitu2_function_pane

0xccfd,	// (0x0009f752) bg_popup_call_pane_cp08_ParamLimits

0xccfd,	// (0x0009f752) bg_popup_call_pane_cp08

0xcd14,	// (0x0009f769) field_vitu2_entry_pane_g1

0xcd20,	// (0x0009f775) field_vitu2_entry_pane_g2

0x0002,

0xf87a,	// (0x000a22cf) field_vitu2_entry_pane_g

0x5937,	// (0x0009838c) field_vitu2_entry_pane_t1_ParamLimits

0x5937,	// (0x0009838c) field_vitu2_entry_pane_t1

0xcd2c,	// (0x0009f781) field_vitu2_entry_pane_t2_ParamLimits

0xcd2c,	// (0x0009f781) field_vitu2_entry_pane_t2

0x0001,

0xf881,	// (0x000a22d6) field_vitu2_entry_pane_t_ParamLimits

0xf881,	// (0x000a22d6) field_vitu2_entry_pane_t

0x402e,	// (0x00096a83) bg_button_pane_cp010_ParamLimits

0x402e,	// (0x00096a83) bg_button_pane_cp010

0x596a,	// (0x000983bf) cell_vitu2_itu_pane_g1

0x5990,	// (0x000983e5) cell_vitu2_itu_pane_t1_ParamLimits

0x5990,	// (0x000983e5) cell_vitu2_itu_pane_t1

0x0d88,	// (0x000937dd) cell_vitu2_itu_pane_t2_ParamLimits

0x0d88,	// (0x000937dd) cell_vitu2_itu_pane_t2

0x0002,

0xf88b,	// (0x000a22e0) cell_vitu2_itu_pane_t_ParamLimits

0xf88b,	// (0x000a22e0) cell_vitu2_itu_pane_t

0x3cf6,	// (0x0009674b) bg_button_pane_cp011

0x59dc,	// (0x00098431) cell_vitu2_function_pane_g1

0x1131,	// (0x00093b86) main_myfav_hc_pane

0x535a,	// (0x00097daf) popup_image3_note_pane_ParamLimits

0x535a,	// (0x00097daf) popup_image3_note_pane

0x5368,	// (0x00097dbd) popup_image3_tool_bar_pane_ParamLimits

0x5368,	// (0x00097dbd) popup_image3_tool_bar_pane

0x0dfe,	// (0x00093853) cell_vitu2_itu_pane_t3_ParamLimits

0x0dfe,	// (0x00093853) cell_vitu2_itu_pane_t3

0xecf8,	// (0x000a174d) bg_popup_trans_pane

0xcd63,	// (0x0009f7b8) grid_image3_tool_bar_pane

0xcd6d,	// (0x0009f7c2) bg_popup_trans_pane_g1

0xa2de,	// (0x0009cd33) bg_popup_trans_pane_g2

0xcd75,	// (0x0009f7ca) bg_popup_trans_pane_g3

0xcd7d,	// (0x0009f7d2) bg_popup_trans_pane_g4

0xcd85,	// (0x0009f7da) bg_popup_trans_pane_g5

0xcd8d,	// (0x0009f7e2) bg_popup_trans_pane_g6

0xcd95,	// (0x0009f7ea) bg_popup_trans_pane_g7

0xcd9d,	// (0x0009f7f2) bg_popup_trans_pane_g8

0xa2be,	// (0x0009cd13) bg_popup_trans_pane_g9

0x0008,

0xf892,	// (0x000a22e7) bg_popup_trans_pane_g

0xcda5,	// (0x0009f7fa) cell_image3_tool_bar_pane_ParamLimits

0xcda5,	// (0x0009f7fa) cell_image3_tool_bar_pane

0xa0b9,	// (0x0009cb0e) cell_image3_tool_bar_pane_g1

0xecf8,	// (0x000a174d) bg_popup_trans_pane_cp1

0xcdb9,	// (0x0009f80e) popup_image3_note_pane_t1

0xcdc7,	// (0x0009f81c) popup_image3_note_pane_t2

0xcdd5,	// (0x0009f82a) popup_image3_note_pane_t3

0x0002,

0xf8a5,	// (0x000a22fa) popup_image3_note_pane_t

0xcde3,	// (0x0009f838) popup_image3_note_pane_t3_copy1

0x59f0,	// (0x00098445) bg_myfav_hc_instruction_pane_ParamLimits

0x59f0,	// (0x00098445) bg_myfav_hc_instruction_pane

0x5a08,	// (0x0009845d) cell_myfav_contact_pane_ParamLimits

0x5a08,	// (0x0009845d) cell_myfav_contact_pane

0x5a22,	// (0x00098477) cell_myfav_contact_pane_cp1_ParamLimits

0x5a22,	// (0x00098477) cell_myfav_contact_pane_cp1

0x5a3a,	// (0x0009848f) cell_myfav_contact_pane_cp2_ParamLimits

0x5a3a,	// (0x0009848f) cell_myfav_contact_pane_cp2

0x5a52,	// (0x000984a7) cell_myfav_contact_pane_cp3_ParamLimits

0x5a52,	// (0x000984a7) cell_myfav_contact_pane_cp3

0x5a69,	// (0x000984be) cell_myfav_contact_pane_cp4_ParamLimits

0x5a69,	// (0x000984be) cell_myfav_contact_pane_cp4

0x5a7f,	// (0x000984d4) cell_myfav_contact_pane_cp5_ParamLimits

0x5a7f,	// (0x000984d4) cell_myfav_contact_pane_cp5

0x5a93,	// (0x000984e8) cell_myfav_contact_pane_cp6_ParamLimits

0x5a93,	// (0x000984e8) cell_myfav_contact_pane_cp6

0x5aa7,	// (0x000984fc) cell_myfav_contact_pane_cp7_ParamLimits

0x5aa7,	// (0x000984fc) cell_myfav_contact_pane_cp7

0xcdf1,	// (0x0009f846) listscroll_gen_pane_cp05

0x5abf,	// (0x00098514) main_myfav_hc_pane_g1_ParamLimits

0x5abf,	// (0x00098514) main_myfav_hc_pane_g1

0x5ad5,	// (0x0009852a) main_myfav_hc_pane_g2_ParamLimits

0x5ad5,	// (0x0009852a) main_myfav_hc_pane_g2

0x0002,

0xf8ac,	// (0x000a2301) main_myfav_hc_pane_g_ParamLimits

0xf8ac,	// (0x000a2301) main_myfav_hc_pane_g

0x5b05,	// (0x0009855a) main_myfav_hc_pane_t1_ParamLimits

0x5b05,	// (0x0009855a) main_myfav_hc_pane_t1

0xcdfa,	// (0x0009f84f) main_myfav_hc_pane_t2_ParamLimits

0xcdfa,	// (0x0009f84f) main_myfav_hc_pane_t2

0xce0c,	// (0x0009f861) main_myfav_hc_pane_t3_ParamLimits

0xce0c,	// (0x0009f861) main_myfav_hc_pane_t3

0x5b1c,	// (0x00098571) main_myfav_hc_pane_t4_ParamLimits

0x5b1c,	// (0x00098571) main_myfav_hc_pane_t4

0x0004,

0xf8b3,	// (0x000a2308) main_myfav_hc_pane_t_ParamLimits

0xf8b3,	// (0x000a2308) main_myfav_hc_pane_t

0xa0b9,	// (0x0009cb0e) bg_myfav_hc_instruction_pane_g1

0xce1e,	// (0x0009f873) cell_myfav_contact_pane_g1_ParamLimits

0xce1e,	// (0x0009f873) cell_myfav_contact_pane_g1

0xce1e,	// (0x0009f873) cell_myfav_contact_pane_g2_ParamLimits

0xce1e,	// (0x0009f873) cell_myfav_contact_pane_g2

0xce2a,	// (0x0009f87f) cell_myfav_contact_pane_g3_ParamLimits

0xce2a,	// (0x0009f87f) cell_myfav_contact_pane_g3

0x9e6d,	// (0x0009c8c2) cell_myfav_contact_pane_g4_ParamLimits

0x9e6d,	// (0x0009c8c2) cell_myfav_contact_pane_g4

0xce37,	// (0x0009f88c) cell_myfav_contact_pane_g5_ParamLimits

0xce37,	// (0x0009f88c) cell_myfav_contact_pane_g5

0x0004,

0xf8be,	// (0x000a2313) cell_myfav_contact_pane_g_ParamLimits

0xf8be,	// (0x000a2313) cell_myfav_contact_pane_g

0x5aed,	// (0x00098542) main_myfav_hc_pane_g3_ParamLimits

0x5aed,	// (0x00098542) main_myfav_hc_pane_g3

0x1021,	// (0x00093a76) popup_adpt_find_window

0x5b46,	// (0x0009859b) afind_page_pane_ParamLimits

0x5b46,	// (0x0009859b) afind_page_pane

0x5b53,	// (0x000985a8) aid_size_cell_afind_ParamLimits

0x5b53,	// (0x000985a8) aid_size_cell_afind

0x5b6d,	// (0x000985c2) bg_popup_sub_pane_cp09_ParamLimits

0x5b6d,	// (0x000985c2) bg_popup_sub_pane_cp09

0x5b7e,	// (0x000985d3) find_pane_cp01_ParamLimits

0x5b7e,	// (0x000985d3) find_pane_cp01

0xce43,	// (0x0009f898) grid_afind_control_pane_ParamLimits

0xce43,	// (0x0009f898) grid_afind_control_pane

0x5b91,	// (0x000985e6) grid_afind_pane_ParamLimits

0x5b91,	// (0x000985e6) grid_afind_pane

0x5bad,	// (0x00098602) cell_afind_pane_ParamLimits

0x5bad,	// (0x00098602) cell_afind_pane

0xa0b9,	// (0x0009cb0e) afind_page_pane_g1

0x5bf5,	// (0x0009864a) afind_page_pane_g2

0x5bfd,	// (0x00098652) afind_page_pane_g3

0x0002,

0xf8c9,	// (0x000a231e) afind_page_pane_g

0x5c05,	// (0x0009865a) afind_page_pane_t1

0xce69,	// (0x0009f8be) cell_afind_grid_control_pane_ParamLimits

0xce69,	// (0x0009f8be) cell_afind_grid_control_pane

0xccc5,	// (0x0009f71a) bg_button_pane_cp69_ParamLimits

0xccc5,	// (0x0009f71a) bg_button_pane_cp69

0x5c13,	// (0x00098668) cell_afind_pane_g1_ParamLimits

0x5c13,	// (0x00098668) cell_afind_pane_g1

0x5c20,	// (0x00098675) cell_afind_pane_t1_ParamLimits

0x5c20,	// (0x00098675) cell_afind_pane_t1

0xa0c3,	// (0x0009cb18) bg_button_pane_cp72

0xce78,	// (0x0009f8cd) cell_afind_grid_control_pane_g1

0x3827,	// (0x0009627c) aid_image_placing_area_ParamLimits

0x3827,	// (0x0009627c) aid_image_placing_area

0x9e5f,	// (0x0009c8b4) field_vitu_entry_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) field_vitu_entry_pane_g1

0x9e5f,	// (0x0009c8b4) field_vitu_entry_pane_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000a1c16) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000a1c16) field_vitu_entry_pane_g

0xca57,	// (0x0009f4ac) cell_vitu_itu_pane_g1_ParamLimits

0xc824,	// (0x0009f279) cell_vitu_itu_pane_t3_ParamLimits

0xc824,	// (0x0009f279) cell_vitu_itu_pane_t3

0xcc6e,	// (0x0009f6c3) mp4_progress_pane_t1_ParamLimits

0xcc87,	// (0x0009f6dc) mp4_progress_pane_t2_ParamLimits

0xf80f,	// (0x000a2264) mp4_progress_pane_t_ParamLimits

0xcca0,	// (0x0009f6f5) mup_progress_pane_cp04_ParamLimits

0x5b30,	// (0x00098585) main_myfav_hc_pane_t5_ParamLimits

0x5b30,	// (0x00098585) main_myfav_hc_pane_t5

0x0d80,	// (0x000937d5) aid_zoom_text_primary

0x1021,	// (0x00093a76) popup_adpt_find_window_ParamLimits

0x3cf6,	// (0x0009674b) main_cam_set_pane

0x558b,	// (0x00097fe0) cam4_zoom_pane_ParamLimits

0x558b,	// (0x00097fe0) cam4_zoom_pane

0x5c32,	// (0x00098687) main_cam_set_pane_g1_ParamLimits

0x5c32,	// (0x00098687) main_cam_set_pane_g1

0x5c40,	// (0x00098695) main_cam_set_pane_g2_ParamLimits

0x5c40,	// (0x00098695) main_cam_set_pane_g2

0x0001,

0xf8d0,	// (0x000a2325) main_cam_set_pane_g_ParamLimits

0xf8d0,	// (0x000a2325) main_cam_set_pane_g

0x5c4c,	// (0x000986a1) main_cam_set_pane_t1_ParamLimits

0x5c4c,	// (0x000986a1) main_cam_set_pane_t1

0x5c68,	// (0x000986bd) main_cset_listscroll_pane_ParamLimits

0x5c68,	// (0x000986bd) main_cset_listscroll_pane

0x5c9a,	// (0x000986ef) main_cset_slider_pane_ParamLimits

0x5c9a,	// (0x000986ef) main_cset_slider_pane

0xce89,	// (0x0009f8de) main_cset_list_pane_ParamLimits

0xce89,	// (0x0009f8de) main_cset_list_pane

0xce99,	// (0x0009f8ee) scroll_pane_cp028

0x5cb9,	// (0x0009870e) aid_area_touch_slider

0x5cd5,	// (0x0009872a) cset_slider_pane

0x5cf8,	// (0x0009874d) main_cset_slider_pane_g1

0x5d0d,	// (0x00098762) main_cset_slider_pane_g2

0x0011,

0xf8d5,	// (0x000a232a) main_cset_slider_pane_g

0xced2,	// (0x0009f927) main_cset_slider_pane_t1

0x5dd3,	// (0x00098828) main_cset_slider_pane_t2

0x5ded,	// (0x00098842) main_cset_slider_pane_t3

0x5e07,	// (0x0009885c) main_cset_slider_pane_t4

0x5e25,	// (0x0009887a) main_cset_slider_pane_t5

0x5e43,	// (0x00098898) main_cset_slider_pane_t6

0x5e5a,	// (0x000988af) main_cset_slider_pane_t7

0x000e,

0xf8fa,	// (0x000a234f) main_cset_slider_pane_t

0x5f68,	// (0x000989bd) cset_list_set_pane_ParamLimits

0x5f68,	// (0x000989bd) cset_list_set_pane

0xcf84,	// (0x0009f9d9) aid_position_infowindow_above

0xcf8c,	// (0x0009f9e1) aid_position_infowindow_below

0x5f81,	// (0x000989d6) cset_list_set_pane_g1_ParamLimits

0x5f81,	// (0x000989d6) cset_list_set_pane_g1

0x5f8d,	// (0x000989e2) cset_list_set_pane_g3_ParamLimits

0x5f8d,	// (0x000989e2) cset_list_set_pane_g3

0x0001,

0xf919,	// (0x000a236e) cset_list_set_pane_g_ParamLimits

0xf919,	// (0x000a236e) cset_list_set_pane_g

0x5f9c,	// (0x000989f1) cset_list_set_pane_t1_ParamLimits

0x5f9c,	// (0x000989f1) cset_list_set_pane_t1

0xed22,	// (0x000a1777) list_highlight_pane_cp021_ParamLimits

0xed22,	// (0x000a1777) list_highlight_pane_cp021

0xabd1,	// (0x0009d626) cset_slider_pane_g1

0xabe3,	// (0x0009d638) cset_slider_pane_g2

0xabda,	// (0x0009d62f) cset_slider_pane_g3

0x0002,

0xf91e,	// (0x000a2373) cset_slider_pane_g

0x5fb1,	// (0x00098a06) aid_area_touch_cam4_zoom

0x5fb9,	// (0x00098a0e) cam4_zoom_cont_pane

0x5fc1,	// (0x00098a16) cam4_zoom_pane_g1

0x5fc9,	// (0x00098a1e) cam4_zoom_pane_g2

0x5fd1,	// (0x00098a26) cam4_zoom_pane_g3

0x0002,

0xf925,	// (0x000a237a) cam4_zoom_pane_g

0x5fd9,	// (0x00098a2e) cam4_zoom_cont_pane_g1

0x5fe2,	// (0x00098a37) cam4_zoom_cont_pane_g2

0x5feb,	// (0x00098a40) cam4_zoom_cont_pane_g3

0x0002,

0xf92c,	// (0x000a2381) cam4_zoom_cont_pane_g

0x53b1,	// (0x00097e06) call4_image_pane_ParamLimits

0x53b1,	// (0x00097e06) call4_image_pane

0x5410,	// (0x00097e65) call4_windows_conf_pane_ParamLimits

0x5453,	// (0x00097ea8) popup_call4_audio_in_window_ParamLimits

0x5453,	// (0x00097ea8) popup_call4_audio_in_window

0xecf8,	// (0x000a174d) bg_popup_call2_act_pane_cp02

0xccd1,	// (0x0009f726) call4_list_conf_pane

0xa0b9,	// (0x0009cb0e) call4_image_pane_g1

0xa0b9,	// (0x0009cb0e) call4_image_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) call4_image_pane_g

0xcf94,	// (0x0009f9e9) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf94,	// (0x0009f9e9) list_single_graphic_popup_conf4_pane

0xecf8,	// (0x000a174d) list_highlight_pane_cp022

0xcfa7,	// (0x0009f9fc) list_single_graphic_popup_conf4_pane_g1

0xa7f0,	// (0x0009d245) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf933,	// (0x000a2388) list_single_graphic_popup_conf4_pane_g

0xcfaf,	// (0x0009fa04) list_single_graphic_popup_conf4_pane_t1

0x1db9,	// (0x0009480e) popup_vtel_slider_window_ParamLimits

0x1db9,	// (0x0009480e) popup_vtel_slider_window

0xccb3,	// (0x0009f708) dialer2_ne_pane_t2_ParamLimits

0xccb3,	// (0x0009f708) dialer2_ne_pane_t2

0x0001,

0xf814,	// (0x000a2269) dialer2_ne_pane_t_ParamLimits

0xf814,	// (0x000a2269) dialer2_ne_pane_t

0xed22,	// (0x000a1777) bg_popup_sub_pane_cp010_ParamLimits

0xed22,	// (0x000a1777) bg_popup_sub_pane_cp010

0x5ff4,	// (0x00098a49) popup_vtel_slider_window_g1_ParamLimits

0x5ff4,	// (0x00098a49) popup_vtel_slider_window_g1

0x6000,	// (0x00098a55) popup_vtel_slider_window_g2_ParamLimits

0x6000,	// (0x00098a55) popup_vtel_slider_window_g2

0x0003,

0xf938,	// (0x000a238d) popup_vtel_slider_window_g_ParamLimits

0xf938,	// (0x000a238d) popup_vtel_slider_window_g

0x6048,	// (0x00098a9d) vtel_slider_pane_ParamLimits

0x6048,	// (0x00098a9d) vtel_slider_pane

0x6057,	// (0x00098aac) vtel_slider_pane_g1_ParamLimits

0x6057,	// (0x00098aac) vtel_slider_pane_g1

0x6064,	// (0x00098ab9) vtel_slider_pane_g2_ParamLimits

0x6064,	// (0x00098ab9) vtel_slider_pane_g2

0x6071,	// (0x00098ac6) vtel_slider_pane_g3_ParamLimits

0x6071,	// (0x00098ac6) vtel_slider_pane_g3

0x6057,	// (0x00098aac) vtel_slider_pane_g4_ParamLimits

0x6057,	// (0x00098aac) vtel_slider_pane_g4

0x607e,	// (0x00098ad3) vtel_slider_pane_g5_ParamLimits

0x607e,	// (0x00098ad3) vtel_slider_pane_g5

0x0004,

0xf941,	// (0x000a2396) vtel_slider_pane_g_ParamLimits

0xf941,	// (0x000a2396) vtel_slider_pane_g

0x3cf6,	// (0x0009674b) main_gallery2_pane

0x57d5,	// (0x0009822a) aid_size_row_itut2_dropdow_list_ParamLimits

0x57d5,	// (0x0009822a) aid_size_row_itut2_dropdow_list

0x5843,	// (0x00098298) grid_vitu2_function_top_pane_ParamLimits

0x5843,	// (0x00098298) grid_vitu2_function_top_pane

0x589d,	// (0x000982f2) popup_vitu2_dropdown_list_window_ParamLimits

0x589d,	// (0x000982f2) popup_vitu2_dropdown_list_window

0x58bb,	// (0x00098310) popup_vitu2_match_list_window

0x608b,	// (0x00098ae0) cell_vitu2_function_top_pane_ParamLimits

0x608b,	// (0x00098ae0) cell_vitu2_function_top_pane

0x60a5,	// (0x00098afa) cell_vitu2_function_top_pane_cp01_ParamLimits

0x60a5,	// (0x00098afa) cell_vitu2_function_top_pane_cp01

0x60c1,	// (0x00098b16) cell_vitu2_function_top_wide_pane_ParamLimits

0x60c1,	// (0x00098b16) cell_vitu2_function_top_wide_pane

0x3cf6,	// (0x0009674b) bg_button_pane_cp012

0x60df,	// (0x00098b34) cell_vitu2_function_top_pane_g1

0x60f3,	// (0x00098b48) bg_button_pane_cp013_ParamLimits

0x60f3,	// (0x00098b48) bg_button_pane_cp013

0x610f,	// (0x00098b64) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x610f,	// (0x00098b64) cell_vitu2_function_top_wide_pane_g1

0x1117,	// (0x00093b6c) bg_popup_sub_pane_cp20

0x6127,	// (0x00098b7c) list_vitu2_match_list_pane

0xcd6d,	// (0x0009f7c2) bg_popup_sub_pane_cp20_g1

0xcd75,	// (0x0009f7ca) bg_popup_sub_pane_cp20_g2

0xa2de,	// (0x0009cd33) bg_popup_sub_pane_cp20_g3

0xcd7d,	// (0x0009f7d2) bg_popup_sub_pane_cp20_g4

0xa2be,	// (0x0009cd13) bg_popup_sub_pane_cp20_g5

0xcfc5,	// (0x0009fa1a) bg_popup_sub_pane_cp20_g6

0xcd8d,	// (0x0009f7e2) bg_popup_sub_pane_cp20_g7

0xcd95,	// (0x0009f7ea) bg_popup_sub_pane_cp20_g8

0xcd9d,	// (0x0009f7f2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf94c,	// (0x000a23a1) bg_popup_sub_pane_cp20_g

0x613f,	// (0x00098b94) list_vitu2_match_list_item_pane_ParamLimits

0x613f,	// (0x00098b94) list_vitu2_match_list_item_pane

0x6151,	// (0x00098ba6) list_vitu2_match_list_item_pane_t1

0x1131,	// (0x00093b86) bg_popup_sub_pane_cp21

0xa083,	// (0x0009cad8) grid_vitu2_dropdown_list_pane

0x615f,	// (0x00098bb4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x615f,	// (0x00098bb4) cell_vitu2_dropdown_list_char_pane

0x6181,	// (0x00098bd6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6181,	// (0x00098bd6) cell_vitu2_dropdown_list_ctrl_pane

0xcfcd,	// (0x0009fa22) cell_vitu2_dropdown_list_char_pane_g1

0xcfd6,	// (0x0009fa2b) cell_vitu2_dropdown_list_char_pane_g2

0xcfdf,	// (0x0009fa34) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95f,	// (0x000a23b4) cell_vitu2_dropdown_list_char_pane_g

0x61a9,	// (0x00098bfe) cell_vitu2_dropdown_list_char_pane_t1

0x61b7,	// (0x00098c0c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x61b7,	// (0x00098c0c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x61c4,	// (0x00098c19) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x61c4,	// (0x00098c19) cell_vitu2_dropdown_list_ctrl_pane_g2

0x61d1,	// (0x00098c26) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x61d1,	// (0x00098c26) cell_vitu2_dropdown_list_ctrl_pane_g3

0x61de,	// (0x00098c33) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x61de,	// (0x00098c33) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdfa2,	// (0x000a09f7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdfa2,	// (0x000a09f7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf966,	// (0x000a23bb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf966,	// (0x000a23bb) cell_vitu2_dropdown_list_ctrl_pane_g

0x61fa,	// (0x00098c4f) aid_size_cell_gallery2_ParamLimits

0x61fa,	// (0x00098c4f) aid_size_cell_gallery2

0x6214,	// (0x00098c69) grid_gallery2_pane_ParamLimits

0x6214,	// (0x00098c69) grid_gallery2_pane

0x622b,	// (0x00098c80) scroll_pane_cp029_ParamLimits

0x622b,	// (0x00098c80) scroll_pane_cp029

0x623b,	// (0x00098c90) cell_gallery2_pane_ParamLimits

0x623b,	// (0x00098c90) cell_gallery2_pane

0xcfe8,	// (0x0009fa3d) cell_gallery2_pane_g2

0x6290,	// (0x00098ce5) cell_gallery2_pane_g3

0xcff0,	// (0x0009fa45) cell_gallery2_pane_g4

0xcff8,	// (0x0009fa4d) cell_gallery2_pane_g5

0xa083,	// (0x0009cad8) grid_highlight_pane_cp10

0x58bb,	// (0x00098310) popup_vitu2_match_list_window_ParamLimits

0x58cd,	// (0x00098322) popup_vitu2_query_window_ParamLimits

0x58cd,	// (0x00098322) popup_vitu2_query_window

0x1131,	// (0x00093b86) bg_vitu2_candi_button_pane

0xcfcd,	// (0x0009fa22) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcfd6,	// (0x0009fa2b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcfdf,	// (0x0009fa34) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6298,	// (0x00098ced) bg_button_pane_cp015

0x62ad,	// (0x00098d02) bg_button_pane_cp016

0x62b9,	// (0x00098d0e) bg_button_pane_cp017

0xac76,	// (0x0009d6cb) bg_popup_sub_pane_cp22

0xd000,	// (0x0009fa55) popup_vitu2_query_window_g1

0x62f9,	// (0x00098d4e) popup_vitu2_query_window_g2

0x0002,

0xf971,	// (0x000a23c6) popup_vitu2_query_window_g

0x631d,	// (0x00098d72) popup_vitu2_query_window_t1_ParamLimits

0x631d,	// (0x00098d72) popup_vitu2_query_window_t1

0x6350,	// (0x00098da5) popup_vitu2_query_window_t2_ParamLimits

0x6350,	// (0x00098da5) popup_vitu2_query_window_t2

0x6362,	// (0x00098db7) popup_vitu2_query_window_t3_ParamLimits

0x6362,	// (0x00098db7) popup_vitu2_query_window_t3

0x638a,	// (0x00098ddf) popup_vitu2_query_window_t4_ParamLimits

0x638a,	// (0x00098ddf) popup_vitu2_query_window_t4

0x639e,	// (0x00098df3) popup_vitu2_query_window_t5_ParamLimits

0x639e,	// (0x00098df3) popup_vitu2_query_window_t5

0x0006,

0xf978,	// (0x000a23cd) popup_vitu2_query_window_t_ParamLimits

0xf978,	// (0x000a23cd) popup_vitu2_query_window_t

0xce81,	// (0x0009f8d6) main_cset_text_pane

0x5cb9,	// (0x0009870e) aid_area_touch_slider_ParamLimits

0x5cd5,	// (0x0009872a) cset_slider_pane_ParamLimits

0x5cf8,	// (0x0009874d) main_cset_slider_pane_g1_ParamLimits

0x5d0d,	// (0x00098762) main_cset_slider_pane_g2_ParamLimits

0xcea2,	// (0x0009f8f7) main_cset_slider_pane_g3_ParamLimits

0xcea2,	// (0x0009f8f7) main_cset_slider_pane_g3

0x5d22,	// (0x00098777) main_cset_slider_pane_g4_ParamLimits

0x5d22,	// (0x00098777) main_cset_slider_pane_g4

0x5d31,	// (0x00098786) main_cset_slider_pane_g5_ParamLimits

0x5d31,	// (0x00098786) main_cset_slider_pane_g5

0x5d3f,	// (0x00098794) main_cset_slider_pane_g6_ParamLimits

0x5d3f,	// (0x00098794) main_cset_slider_pane_g6

0xf8d5,	// (0x000a232a) main_cset_slider_pane_g_ParamLimits

0xced2,	// (0x0009f927) main_cset_slider_pane_t1_ParamLimits

0x5dd3,	// (0x00098828) main_cset_slider_pane_t2_ParamLimits

0x5ded,	// (0x00098842) main_cset_slider_pane_t3_ParamLimits

0x5e07,	// (0x0009885c) main_cset_slider_pane_t4_ParamLimits

0x5e25,	// (0x0009887a) main_cset_slider_pane_t5_ParamLimits

0x5e43,	// (0x00098898) main_cset_slider_pane_t6_ParamLimits

0x5e5a,	// (0x000988af) main_cset_slider_pane_t7_ParamLimits

0x5e88,	// (0x000988dd) main_cset_slider_pane_t8_ParamLimits

0x5e88,	// (0x000988dd) main_cset_slider_pane_t8

0x5eb0,	// (0x00098905) main_cset_slider_pane_t9_ParamLimits

0x5eb0,	// (0x00098905) main_cset_slider_pane_t9

0x5ed8,	// (0x0009892d) main_cset_slider_pane_t10_ParamLimits

0x5ed8,	// (0x0009892d) main_cset_slider_pane_t10

0x5f00,	// (0x00098955) main_cset_slider_pane_t11_ParamLimits

0x5f00,	// (0x00098955) main_cset_slider_pane_t11

0x5f2a,	// (0x0009897f) main_cset_slider_pane_t12_ParamLimits

0x5f2a,	// (0x0009897f) main_cset_slider_pane_t12

0x5f49,	// (0x0009899e) main_cset_slider_pane_t13_ParamLimits

0x5f49,	// (0x0009899e) main_cset_slider_pane_t13

0xf8fa,	// (0x000a234f) main_cset_slider_pane_t_ParamLimits

0xecf8,	// (0x000a174d) bg_popup_sub_pane_cp011

0xd00c,	// (0x0009fa61) main_cset_text_pane_g1

0xd014,	// (0x0009fa69) main_cset_text_pane_t1

0xd022,	// (0x0009fa77) main_cset_text_pane_t2

0xd030,	// (0x0009fa85) main_cset_text_pane_t3

0xd03e,	// (0x0009fa93) main_cset_text_pane_t4

0xd04c,	// (0x0009faa1) main_cset_text_pane_t5

0xd05a,	// (0x0009faaf) main_cset_text_pane_t6

0xd068,	// (0x0009fabd) main_cset_text_pane_t7

0x0006,

0xf987,	// (0x000a23dc) main_cset_text_pane_t

0x1131,	// (0x00093b86) main_cam4_burst_pane

0x1131,	// (0x00093b86) main_cam5_pane

0xce57,	// (0x0009f8ac) bg_button_pane_cp019

0xce60,	// (0x0009f8b5) bg_button_pane_cp020

0xceae,	// (0x0009f903) main_cset_slider_pane_g7_ParamLimits

0xceae,	// (0x0009f903) main_cset_slider_pane_g7

0xceba,	// (0x0009f90f) main_cset_slider_pane_g8_ParamLimits

0xceba,	// (0x0009f90f) main_cset_slider_pane_g8

0x5d53,	// (0x000987a8) main_cset_slider_pane_g9_ParamLimits

0x5d53,	// (0x000987a8) main_cset_slider_pane_g9

0x5d5f,	// (0x000987b4) main_cset_slider_pane_g10_ParamLimits

0x5d5f,	// (0x000987b4) main_cset_slider_pane_g10

0x5d6b,	// (0x000987c0) main_cset_slider_pane_g11_ParamLimits

0x5d6b,	// (0x000987c0) main_cset_slider_pane_g11

0x5d77,	// (0x000987cc) main_cset_slider_pane_g12_ParamLimits

0x5d77,	// (0x000987cc) main_cset_slider_pane_g12

0x5d83,	// (0x000987d8) main_cset_slider_pane_g13_ParamLimits

0x5d83,	// (0x000987d8) main_cset_slider_pane_g13

0x5d91,	// (0x000987e6) main_cset_slider_pane_g14_ParamLimits

0x5d91,	// (0x000987e6) main_cset_slider_pane_g14

0x5d9f,	// (0x000987f4) main_cset_slider_pane_g15_ParamLimits

0x5d9f,	// (0x000987f4) main_cset_slider_pane_g15

0xcefa,	// (0x0009f94f) main_cset_slider_pane_t14_ParamLimits

0xcefa,	// (0x0009f94f) main_cset_slider_pane_t14

0xcf4b,	// (0x0009f9a0) main_cset_slider_pane_t15_ParamLimits

0xcf4b,	// (0x0009f9a0) main_cset_slider_pane_t15

0x6408,	// (0x00098e5d) aid_cam4_burst_size_cell_ParamLimits

0x6408,	// (0x00098e5d) aid_cam4_burst_size_cell

0x6424,	// (0x00098e79) grid_cam4_burst_pane_ParamLimits

0x6424,	// (0x00098e79) grid_cam4_burst_pane

0x6454,	// (0x00098ea9) linegrid_cam4_burst_pane_ParamLimits

0x6454,	// (0x00098ea9) linegrid_cam4_burst_pane

0x6474,	// (0x00098ec9) scroll_pane_cp30_ParamLimits

0x6474,	// (0x00098ec9) scroll_pane_cp30

0x6480,	// (0x00098ed5) cell_cam4_burst_pane_ParamLimits

0x6480,	// (0x00098ed5) cell_cam4_burst_pane

0xd076,	// (0x0009facb) linegrid_cam4_burst_pane_g1_ParamLimits

0xd076,	// (0x0009facb) linegrid_cam4_burst_pane_g1

0x64bc,	// (0x00098f11) linegrid_cam4_burst_pane_g2_ParamLimits

0x64bc,	// (0x00098f11) linegrid_cam4_burst_pane_g2

0xd083,	// (0x0009fad8) linegrid_cam4_burst_pane_g3_ParamLimits

0xd083,	// (0x0009fad8) linegrid_cam4_burst_pane_g3

0x0002,

0xf996,	// (0x000a23eb) linegrid_cam4_burst_pane_g_ParamLimits

0xf996,	// (0x000a23eb) linegrid_cam4_burst_pane_g

0x64cd,	// (0x00098f22) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x64cd,	// (0x00098f22) linegrid_cam4_burst_pane_g3_copy1

0xd090,	// (0x0009fae5) linegrid_cam4_burst_pane_g4_ParamLimits

0xd090,	// (0x0009fae5) linegrid_cam4_burst_pane_g4

0x64e7,	// (0x00098f3c) linegrid_cam4_burst_pane_g5_ParamLimits

0x64e7,	// (0x00098f3c) linegrid_cam4_burst_pane_g5

0x64f8,	// (0x00098f4d) linegrid_cam4_burst_pane_g6_ParamLimits

0x64f8,	// (0x00098f4d) linegrid_cam4_burst_pane_g6

0xd09d,	// (0x0009faf2) linegrid_cam4_burst_pane_g7_ParamLimits

0xd09d,	// (0x0009faf2) linegrid_cam4_burst_pane_g7

0x6509,	// (0x00098f5e) cell_cam4_burst_pane_g1

0xd0b6,	// (0x0009fb0b) main_cam5_pane_t1_ParamLimits

0xd0b6,	// (0x0009fb0b) main_cam5_pane_t1

0xd0c8,	// (0x0009fb1d) main_cam5_pane_t2_ParamLimits

0xd0c8,	// (0x0009fb1d) main_cam5_pane_t2

0xd0da,	// (0x0009fb2f) main_cam5_pane_t3_ParamLimits

0xd0da,	// (0x0009fb2f) main_cam5_pane_t3

0xd0ec,	// (0x0009fb41) main_cam5_pane_t4_ParamLimits

0xd0ec,	// (0x0009fb41) main_cam5_pane_t4

0xd122,	// (0x0009fb77) main_cam5_pane_t5_ParamLimits

0xd122,	// (0x0009fb77) main_cam5_pane_t5

0xd136,	// (0x0009fb8b) main_cam5_pane_t6_ParamLimits

0xd136,	// (0x0009fb8b) main_cam5_pane_t6

0xd14a,	// (0x0009fb9f) main_cam5_pane_t7_ParamLimits

0xd14a,	// (0x0009fb9f) main_cam5_pane_t7

0xd15c,	// (0x0009fbb1) main_cam5_pane_t8_ParamLimits

0xd15c,	// (0x0009fbb1) main_cam5_pane_t8

0xd178,	// (0x0009fbcd) main_cam5_pane_t9_ParamLimits

0xd178,	// (0x0009fbcd) main_cam5_pane_t9

0xd18a,	// (0x0009fbdf) main_cam5_pane_t10_ParamLimits

0xd18a,	// (0x0009fbdf) main_cam5_pane_t10

0xd19c,	// (0x0009fbf1) main_cam5_pane_t11_ParamLimits

0xd19c,	// (0x0009fbf1) main_cam5_pane_t11

0xd1ae,	// (0x0009fc03) main_cam5_pane_t12_ParamLimits

0xd1ae,	// (0x0009fc03) main_cam5_pane_t12

0xd1c3,	// (0x0009fc18) main_cam5_pane_t13_ParamLimits

0xd1c3,	// (0x0009fc18) main_cam5_pane_t13

0x000c,

0xf9a2,	// (0x000a23f7) main_cam5_pane_t_ParamLimits

0xf9a2,	// (0x000a23f7) main_cam5_pane_t

0x10d6,	// (0x00093b2b) popup_scut_keymap_window_ParamLimits

0x10d6,	// (0x00093b2b) popup_scut_keymap_window

0x651c,	// (0x00098f71) aid_size_cell_brow_shortcut

0xa083,	// (0x0009cad8) bg_popup_window_pane_cp010

0x6528,	// (0x00098f7d) grid_scut_pane

0x6534,	// (0x00098f89) cell_scut_pane_ParamLimits

0x6534,	// (0x00098f89) cell_scut_pane

0x654b,	// (0x00098fa0) cell_scut_pane_g1

0xd1e0,	// (0x0009fc35) cell_scut_pane_t1

0xd1ef,	// (0x0009fc44) cell_scut_pane_t2

0x6554,	// (0x00098fa9) cell_scut_pane_t3

0x0002,

0xf9bd,	// (0x000a2412) cell_scut_pane_t

0x44d1,	// (0x00096f26) main_mup3_pane_g8_ParamLimits

0x44d1,	// (0x00096f26) main_mup3_pane_g8

0x57e3,	// (0x00098238) area_vitu2_query_pane_ParamLimits

0x57e3,	// (0x00098238) area_vitu2_query_pane

0x62c5,	// (0x00098d1a) input_focus_pane_cp08

0xd1fe,	// (0x0009fc53) area_vitu2_query_pane_g1

0x6562,	// (0x00098fb7) area_vitu2_query_pane_g2

0x0001,

0xf9c4,	// (0x000a2419) area_vitu2_query_pane_g

0x6573,	// (0x00098fc8) area_vitu2_query_pane_t1_ParamLimits

0x6573,	// (0x00098fc8) area_vitu2_query_pane_t1

0x6587,	// (0x00098fdc) area_vitu2_query_pane_t2_ParamLimits

0x6587,	// (0x00098fdc) area_vitu2_query_pane_t2

0x659b,	// (0x00098ff0) area_vitu2_query_pane_t3_ParamLimits

0x659b,	// (0x00098ff0) area_vitu2_query_pane_t3

0xd20a,	// (0x0009fc5f) area_vitu2_query_pane_t4_ParamLimits

0xd20a,	// (0x0009fc5f) area_vitu2_query_pane_t4

0xd232,	// (0x0009fc87) area_vitu2_query_pane_t5_ParamLimits

0xd232,	// (0x0009fc87) area_vitu2_query_pane_t5

0xd25a,	// (0x0009fcaf) area_vitu2_query_pane_t6_ParamLimits

0xd25a,	// (0x0009fcaf) area_vitu2_query_pane_t6

0x0006,

0xf9c9,	// (0x000a241e) area_vitu2_query_pane_t_ParamLimits

0xf9c9,	// (0x000a241e) area_vitu2_query_pane_t

0x62ad,	// (0x00098d02) bg_button_pane_cp018

0x65c3,	// (0x00099018) bg_button_pane_cp021

0x65cf,	// (0x00099024) bg_button_pane_cp022

0x65f2,	// (0x00099047) input_focus_pane_cp09

0xa8ff,	// (0x0009d354) aid_size_touch_mv_arrow_left

0xa92a,	// (0x0009d37f) aid_size_touch_mv_arrow_right

0x5db7,	// (0x0009880c) main_cset_slider_pane_g16_ParamLimits

0x5db7,	// (0x0009880c) main_cset_slider_pane_g16

0x5dc5,	// (0x0009881a) main_cset_slider_pane_g17_ParamLimits

0x5dc5,	// (0x0009881a) main_cset_slider_pane_g17

0x6509,	// (0x00098f5e) cell_cam4_burst_pane_g1_ParamLimits

0xecf8,	// (0x000a174d) compa_mode_pane

0x600c,	// (0x00098a61) popup_vtel_slider_window_g3_ParamLimits

0x600c,	// (0x00098a61) popup_vtel_slider_window_g3

0x6020,	// (0x00098a75) popup_vtel_slider_window_g4_ParamLimits

0x6020,	// (0x00098a75) popup_vtel_slider_window_g4

0x6034,	// (0x00098a89) popup_vtel_slider_window_t1_ParamLimits

0x6034,	// (0x00098a89) popup_vtel_slider_window_t1

0x1131,	// (0x00093b86) main_cl_pane

0x3d90,	// (0x000967e5) popup_imed_adjust2_window_ParamLimits

0xac76,	// (0x0009d6cb) bg_tb_trans_pane_cp05_ParamLimits

0xc98c,	// (0x0009f3e1) popup_imed_adjust2_window_g1_ParamLimits

0xc99b,	// (0x0009f3f0) popup_imed_adjust2_window_g2_ParamLimits

0xc99b,	// (0x0009f3f0) popup_imed_adjust2_window_g2

0xc9a7,	// (0x0009f3fc) popup_imed_adjust2_window_g3_ParamLimits

0xc9a7,	// (0x0009f3fc) popup_imed_adjust2_window_g3

0x0002,

0xf73f,	// (0x000a2194) popup_imed_adjust2_window_g_ParamLimits

0xf73f,	// (0x000a2194) popup_imed_adjust2_window_g

0xc9b3,	// (0x0009f408) popup_imed_adjust2_window_t1_ParamLimits

0xc9cb,	// (0x0009f420) slider_imed_adjust_pane_ParamLimits

0xc9df,	// (0x0009f434) slider_imed_adjust_pane_g1_ParamLimits

0xc9ef,	// (0x0009f444) slider_imed_adjust_pane_g2_ParamLimits

0xc9ff,	// (0x0009f454) slider_imed_adjust_pane_g3_ParamLimits

0xca10,	// (0x0009f465) slider_imed_adjust_pane_g4_ParamLimits

0xf746,	// (0x000a219b) slider_imed_adjust_pane_g_ParamLimits

0x5534,	// (0x00097f89) aid_touch_area_cam4_ParamLimits

0x5534,	// (0x00097f89) aid_touch_area_cam4

0x5544,	// (0x00097f99) battery_pane_cp01

0x55cb,	// (0x00098020) main_camera4_pane_g6_ParamLimits

0x55cb,	// (0x00098020) main_camera4_pane_g6

0x55e9,	// (0x0009803e) main_camera4_pane_t2_ParamLimits

0x55e9,	// (0x0009803e) main_camera4_pane_t2

0x0001,

0xf848,	// (0x000a229d) main_camera4_pane_t_ParamLimits

0xf848,	// (0x000a229d) main_camera4_pane_t

0x566a,	// (0x000980bf) aid_touch_area_vid4_ParamLimits

0x566a,	// (0x000980bf) aid_touch_area_vid4

0x56aa,	// (0x000980ff) main_video4_pane_g5_ParamLimits

0x56aa,	// (0x000980ff) main_video4_pane_g5

0x56ce,	// (0x00098123) vid4_progress_pane_ParamLimits

0x56ce,	// (0x00098123) vid4_progress_pane

0xcec6,	// (0x0009f91b) main_cset_slider_pane_g18_ParamLimits

0xcec6,	// (0x0009f91b) main_cset_slider_pane_g18

0xd0aa,	// (0x0009faff) cell_cam4_burst_pane_g2_ParamLimits

0xd0aa,	// (0x0009faff) cell_cam4_burst_pane_g2

0x0001,

0xf99d,	// (0x000a23f2) cell_cam4_burst_pane_g_ParamLimits

0xf99d,	// (0x000a23f2) cell_cam4_burst_pane_g

0x6602,	// (0x00099057) bg_cl_pane_ParamLimits

0x6602,	// (0x00099057) bg_cl_pane

0x660e,	// (0x00099063) cl_header_pane_ParamLimits

0x660e,	// (0x00099063) cl_header_pane

0x661a,	// (0x0009906f) cl_listscroll_pane_ParamLimits

0x661a,	// (0x0009906f) cl_listscroll_pane

0xd2a6,	// (0x0009fcfb) bg_cl_pane_g1

0xd2ae,	// (0x0009fd03) bg_cl_pane_g2

0xd2b6,	// (0x0009fd0b) bg_cl_pane_g3

0xd2be,	// (0x0009fd13) bg_cl_pane_g4

0xd2c6,	// (0x0009fd1b) bg_cl_pane_g5

0xd2ce,	// (0x0009fd23) bg_cl_pane_g6

0xd2d6,	// (0x0009fd2b) bg_cl_pane_g7

0xd2de,	// (0x0009fd33) bg_cl_pane_g8

0xd2e6,	// (0x0009fd3b) bg_cl_pane_g9

0x0008,

0xf9d8,	// (0x000a242d) bg_cl_pane_g

0x6626,	// (0x0009907b) aid_height_cl_leading_ParamLimits

0x6626,	// (0x0009907b) aid_height_cl_leading

0x6632,	// (0x00099087) aid_height_cl_text_ParamLimits

0x6632,	// (0x00099087) aid_height_cl_text

0x9e51,	// (0x0009c8a6) bg_cl_header_pane_ParamLimits

0x9e51,	// (0x0009c8a6) bg_cl_header_pane

0x664a,	// (0x0009909f) cl_header_pane_g1_ParamLimits

0x664a,	// (0x0009909f) cl_header_pane_g1

0x6657,	// (0x000990ac) cl_header_pane_t1_ParamLimits

0x6657,	// (0x000990ac) cl_header_pane_t1

0xd2f8,	// (0x0009fd4d) cl_list_pane

0xce99,	// (0x0009f8ee) hc_scroll_pane_cp01

0xa2be,	// (0x0009cd13) bg_cl_header_pane_g1

0xcd6d,	// (0x0009f7c2) bg_cl_header_pane_g2

0xa2de,	// (0x0009cd33) bg_cl_header_pane_g3

0xcd7d,	// (0x0009f7d2) bg_cl_header_pane_g4

0xcd75,	// (0x0009f7ca) bg_cl_header_pane_g5

0xcfc5,	// (0x0009fa1a) bg_cl_header_pane_g6

0xcd95,	// (0x0009f7ea) bg_cl_header_pane_g7

0xcd9d,	// (0x0009f7f2) bg_cl_header_pane_g8

0xcd8d,	// (0x0009f7e2) bg_cl_header_pane_g9

0x0008,

0xf9eb,	// (0x000a2440) bg_cl_header_pane_g

0x6669,	// (0x000990be) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6669,	// (0x000990be) hc_cl_list_double_graphic_heading_pane

0x667d,	// (0x000990d2) hc_cl_list_single_graphic_pane_ParamLimits

0x667d,	// (0x000990d2) hc_cl_list_single_graphic_pane

0x6697,	// (0x000990ec) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6697,	// (0x000990ec) hc_cl_list_single_graphic_pane_g1

0x66a3,	// (0x000990f8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x66a3,	// (0x000990f8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fe,	// (0x000a2453) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fe,	// (0x000a2453) hc_cl_list_single_graphic_pane_g

0x66b7,	// (0x0009910c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x66b7,	// (0x0009910c) hc_cl_list_single_graphic_pane_t1

0x6697,	// (0x000990ec) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6697,	// (0x000990ec) hc_cl_list_double_graphic_heading_pane_g1

0x66cc,	// (0x00099121) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x66cc,	// (0x00099121) hc_cl_list_double_graphic_heading_pane_g2

0x66e0,	// (0x00099135) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x66e0,	// (0x00099135) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa03,	// (0x000a2458) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa03,	// (0x000a2458) hc_cl_list_double_graphic_heading_pane_g

0x66f4,	// (0x00099149) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x66f4,	// (0x00099149) hc_cl_list_double_graphic_heading_pane_t1

0x6709,	// (0x0009915e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6709,	// (0x0009915e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa0a,	// (0x000a245f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa0a,	// (0x000a245f) hc_cl_list_double_graphic_heading_pane_t

0x6726,	// (0x0009917b) vid4_progress_pane_g1

0x6736,	// (0x0009918b) vid4_progress_pane_g2

0x6746,	// (0x0009919b) vid4_progress_pane_g3

0x6758,	// (0x000991ad) vid4_progress_pane_g4

0x0004,

0xfa0f,	// (0x000a2464) vid4_progress_pane_g

0x6770,	// (0x000991c5) vid4_progress_pane_t1

0x6786,	// (0x000991db) vid4_progress_pane_t2

0x0002,

0xfa1a,	// (0x000a246f) vid4_progress_pane_t

0x67b1,	// (0x00099206) wait_bar_pane_cp07

0xc215,	// (0x0009ec6a) blid_firmament_pane_ParamLimits

0xc258,	// (0x0009ecad) popup_blid_sat_info2_window_g1

0xc27c,	// (0x0009ecd1) popup_blid_sat_info2_window_t3

0xc28a,	// (0x0009ecdf) popup_blid_sat_info2_window_t4

0xc298,	// (0x0009eced) popup_blid_sat_info2_window_t5

0xc2a6,	// (0x0009ecfb) popup_blid_sat_info2_window_t6

0xc2b6,	// (0x0009ed0b) popup_blid_sat_info2_window_t7

0xc2c4,	// (0x0009ed19) popup_blid_sat_info2_window_t8

0xc2d2,	// (0x0009ed27) popup_blid_sat_info2_window_t9

0xc2e0,	// (0x0009ed35) popup_blid_sat_info2_window_t10

0xc3a1,	// (0x0009edf6) aid_firma_cardinal_ParamLimits

0xc3b5,	// (0x0009ee0a) blid_firmament_pane_t1_ParamLimits

0xc3cc,	// (0x0009ee21) blid_firmament_pane_t2_ParamLimits

0xc3e3,	// (0x0009ee38) blid_firmament_pane_t3_ParamLimits

0xc3fa,	// (0x0009ee4f) blid_firmament_pane_t4_ParamLimits

0xf638,	// (0x000a208d) blid_firmament_pane_t_ParamLimits

0xc411,	// (0x0009ee66) blid_sat_info_pane_ParamLimits

0x3cf6,	// (0x0009674b) main_cam_set_pane_ParamLimits

0x4ba0,	// (0x000975f5) aid_size_cell_colour_35_ParamLimits

0x4bba,	// (0x0009760f) aid_size_cell_colour_112_ParamLimits

0x4bd1,	// (0x00097626) aid_size_cell_effect_ParamLimits

0xed22,	// (0x000a1777) bg_tb_trans_pane_cp02_ParamLimits

0xac8d,	// (0x0009d6e2) heading_imed_pane_ParamLimits

0x4beb,	// (0x00097640) listscroll_imed_pane_ParamLimits

0xb6c8,	// (0x0009e11d) popup_call2_audio_first_window_g5_ParamLimits

0xb6c8,	// (0x0009e11d) popup_call2_audio_first_window_g5

0x521c,	// (0x00097c71) aid_size_touch_image3_arrow_left_ParamLimits

0x521c,	// (0x00097c71) aid_size_touch_image3_arrow_left

0x5232,	// (0x00097c87) aid_size_touch_image3_arrow_right_ParamLimits

0x5232,	// (0x00097c87) aid_size_touch_image3_arrow_right

0x679b,	// (0x000991f0) vid4_progress_pane_t3

0x4d6d,	// (0x000977c2) main_hwr_training_symbol_option_pane_ParamLimits

0x4d6d,	// (0x000977c2) main_hwr_training_symbol_option_pane

0xcba8,	// (0x0009f5fd) popup_hwr_training_preview_window_ParamLimits

0xcba8,	// (0x0009f5fd) popup_hwr_training_preview_window

0x4dce,	// (0x00097823) hwr_training_navi_pane_g5_ParamLimits

0x4dce,	// (0x00097823) hwr_training_navi_pane_g5

0xcd5b,	// (0x0009f7b0) popup_char_count_window

0x1117,	// (0x00093b6c) bg_popup_sub_pane_cp20_ParamLimits

0x6127,	// (0x00098b7c) list_vitu2_match_list_pane_ParamLimits

0x6133,	// (0x00098b88) vitu2_page_scroll_pane_ParamLimits

0x6133,	// (0x00098b88) vitu2_page_scroll_pane

0xd312,	// (0x0009fd67) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd312,	// (0x0009fd67) list_single_hwr_training_symbol_option_pane

0xd325,	// (0x0009fd7a) list_single_hwr_training_symbol_option_pane_g1

0xd32d,	// (0x0009fd82) list_single_hwr_training_symbol_option_pane_t1

0xd33b,	// (0x0009fd90) bg_button_pane_cp023

0xd344,	// (0x0009fd99) bg_button_pane_cp024

0xd377,	// (0x0009fdcc) vitu2_page_scroll_pane_g1

0xd37f,	// (0x0009fdd4) vitu2_page_scroll_pane_g2

0x0001,

0xfa21,	// (0x000a2476) vitu2_page_scroll_pane_g

0xd387,	// (0x0009fddc) vitu2_page_scroll_pane_t1

0xac84,	// (0x0009d6d9) popup_char_count_window_g1

0xd396,	// (0x0009fdeb) popup_char_count_window_g2

0xb262,	// (0x0009dcb7) popup_char_count_window_g3

0x0002,

0xfa26,	// (0x000a247b) popup_char_count_window_g

0xd39f,	// (0x0009fdf4) popup_char_count_window_t1

0x1131,	// (0x00093b86) main_vded2_pane

0xc978,	// (0x0009f3cd) aid_size_cell_imed_line

0xc982,	// (0x0009f3d7) grid_imed_line_width_pane

0x573a,	// (0x0009818f) vid4_indicators_pane_g4

0xd3ad,	// (0x0009fe02) cell_imed_line_width_pane_ParamLimits

0xd3ad,	// (0x0009fe02) cell_imed_line_width_pane

0xd3c1,	// (0x0009fe16) cell_imed_line_width_pane_g1

0xd3ca,	// (0x0009fe1f) cell_imed_line_width_pane_g2

0x0001,

0xfa2d,	// (0x000a2482) cell_imed_line_width_pane_g

0x67d6,	// (0x0009922b) main_vded2_pane_g1_ParamLimits

0x67d6,	// (0x0009922b) main_vded2_pane_g1

0x67e3,	// (0x00099238) main_vded2_pane_g2_ParamLimits

0x67e3,	// (0x00099238) main_vded2_pane_g2

0x0001,

0xfa32,	// (0x000a2487) main_vded2_pane_g_ParamLimits

0xfa32,	// (0x000a2487) main_vded2_pane_g

0x67f1,	// (0x00099246) vded2_slider_pane_ParamLimits

0x67f1,	// (0x00099246) vded2_slider_pane

0x67fe,	// (0x00099253) aid_size_touch_vded2_end

0x6808,	// (0x0009925d) aid_size_touch_vded2_playhead

0xd3d2,	// (0x0009fe27) aid_size_touch_vded2_start

0xd3da,	// (0x0009fe2f) vded2_slider_bg_pane

0xd3e3,	// (0x0009fe38) vded2_slider_pane_g1

0xd3ec,	// (0x0009fe41) vded2_slider_pane_g2

0x6810,	// (0x00099265) vded2_slider_pane_g3

0x0002,

0xfa37,	// (0x000a248c) vded2_slider_pane_g

0xd3f4,	// (0x0009fe49) vded2_slider_bg_pane_g1

0xd3fd,	// (0x0009fe52) vded2_slider_bg_pane_g2

0xd406,	// (0x0009fe5b) vded2_slider_bg_pane_g3

0x0002,

0xfa3e,	// (0x000a2493) vded2_slider_bg_pane_g

0x3592,	// (0x00095fe7) aid_postcard_touch_down_pane_ParamLimits

0x3592,	// (0x00095fe7) aid_postcard_touch_down_pane

0x35a2,	// (0x00095ff7) aid_postcard_touch_up_pane_ParamLimits

0x35a2,	// (0x00095ff7) aid_postcard_touch_up_pane

0x1131,	// (0x00093b86) main_blid2_pane

0x3d1f,	// (0x00096774) popup_blid2_search_window

0xecf8,	// (0x000a174d) blid2_gps_pane

0xecf8,	// (0x000a174d) blid2_navig_pane

0xecf8,	// (0x000a174d) blid2_search_pane

0xecf8,	// (0x000a174d) blid2_tripm_pane

0x6819,	// (0x0009926e) blid2_search_pane_g1_ParamLimits

0x6819,	// (0x0009926e) blid2_search_pane_g1

0x6829,	// (0x0009927e) blid2_search_pane_t1_ParamLimits

0x6829,	// (0x0009927e) blid2_search_pane_t1

0x683b,	// (0x00099290) aid_size_cell_blid2_gps_ParamLimits

0x683b,	// (0x00099290) aid_size_cell_blid2_gps

0x684b,	// (0x000992a0) blid2_gps_pane_g1_ParamLimits

0x684b,	// (0x000992a0) blid2_gps_pane_g1

0x6857,	// (0x000992ac) grid_blid2_satellite_pane_ParamLimits

0x6857,	// (0x000992ac) grid_blid2_satellite_pane

0x6867,	// (0x000992bc) blid2_navig_pane_g1_ParamLimits

0x6867,	// (0x000992bc) blid2_navig_pane_g1

0x6873,	// (0x000992c8) blid2_navig_pane_t1_ParamLimits

0x6873,	// (0x000992c8) blid2_navig_pane_t1

0x6885,	// (0x000992da) blid2_navig_pane_t2_ParamLimits

0x6885,	// (0x000992da) blid2_navig_pane_t2

0x0001,

0xfa45,	// (0x000a249a) blid2_navig_pane_t_ParamLimits

0xfa45,	// (0x000a249a) blid2_navig_pane_t

0x6897,	// (0x000992ec) blid2_navig_ring_pane_ParamLimits

0x6897,	// (0x000992ec) blid2_navig_ring_pane

0x68a7,	// (0x000992fc) blid2_speed_pane_ParamLimits

0x68a7,	// (0x000992fc) blid2_speed_pane

0x68b3,	// (0x00099308) blid2_tripm_pane_g1_ParamLimits

0x68b3,	// (0x00099308) blid2_tripm_pane_g1

0x68c3,	// (0x00099318) blid2_tripm_pane_g2_ParamLimits

0x68c3,	// (0x00099318) blid2_tripm_pane_g2

0x68cf,	// (0x00099324) blid2_tripm_pane_g3_ParamLimits

0x68cf,	// (0x00099324) blid2_tripm_pane_g3

0x68db,	// (0x00099330) blid2_tripm_pane_g4_ParamLimits

0x68db,	// (0x00099330) blid2_tripm_pane_g4

0x68e7,	// (0x0009933c) blid2_tripm_pane_g5_ParamLimits

0x68e7,	// (0x0009933c) blid2_tripm_pane_g5

0x0005,

0xfa4a,	// (0x000a249f) blid2_tripm_pane_g_ParamLimits

0xfa4a,	// (0x000a249f) blid2_tripm_pane_g

0x6903,	// (0x00099358) blid2_tripm_pane_t1_ParamLimits

0x6903,	// (0x00099358) blid2_tripm_pane_t1

0x6917,	// (0x0009936c) blid2_tripm_pane_t2_ParamLimits

0x6917,	// (0x0009936c) blid2_tripm_pane_t2

0x6929,	// (0x0009937e) blid2_tripm_pane_t3_ParamLimits

0x6929,	// (0x0009937e) blid2_tripm_pane_t3

0x0003,

0xfa57,	// (0x000a24ac) blid2_tripm_pane_t_ParamLimits

0xfa57,	// (0x000a24ac) blid2_tripm_pane_t

0x695b,	// (0x000993b0) cell_blid2_satellite_pane_ParamLimits

0x695b,	// (0x000993b0) cell_blid2_satellite_pane

0x6975,	// (0x000993ca) cell_blid2_satellite_pane_g1

0xd40f,	// (0x0009fe64) cell_blid2_satellite_pane_t1

0xa0b9,	// (0x0009cb0e) blid2_speed_pane_g1

0xd41d,	// (0x0009fe72) blid2_speed_pane_t1

0xd42b,	// (0x0009fe80) blid2_speed_pane_t2

0x0001,

0xfa60,	// (0x000a24b5) blid2_speed_pane_t

0xa0b9,	// (0x0009cb0e) blid2_navig_ring_pane_g1

0x697e,	// (0x000993d3) blid2_navig_ring_pane_g2

0x6986,	// (0x000993db) blid2_navig_ring_pane_g3

0x698e,	// (0x000993e3) blid2_navig_ring_pane_g4

0x6996,	// (0x000993eb) blid2_navig_ring_pane_g5

0x0004,

0xfa65,	// (0x000a24ba) blid2_navig_ring_pane_g

0xecf8,	// (0x000a174d) bg_popup_window_pane_cp011

0xd439,	// (0x0009fe8e) popup_blid2_search_window_g1

0xd441,	// (0x0009fe96) popup_blid2_search_window_t1

0xd44f,	// (0x0009fea4) popup_blid2_search_window_t2

0x0001,

0xfa70,	// (0x000a24c5) popup_blid2_search_window_t

0xa1cd,	// (0x0009cc22) main_browser_pane_g1

0x9ed1,	// (0x0009c926) main_browser_pane_ParamLimits

0x3cf6,	// (0x0009674b) bg_button_pane_cp011_ParamLimits

0x59dc,	// (0x00098431) cell_vitu2_function_pane_g1_ParamLimits

0xac76,	// (0x0009d6cb) bg_popup_sub_pane_cp22_ParamLimits

0x62c5,	// (0x00098d1a) input_focus_pane_cp08_ParamLimits

0x62e0,	// (0x00098d35) popup_vitu2_query_button_pane_ParamLimits

0x62e0,	// (0x00098d35) popup_vitu2_query_button_pane

0x62ef,	// (0x00098d44) popup_vitu2_query_input_button_pane

0xd000,	// (0x0009fa55) popup_vitu2_query_window_g1_ParamLimits

0x62f9,	// (0x00098d4e) popup_vitu2_query_window_g2_ParamLimits

0xf971,	// (0x000a23c6) popup_vitu2_query_window_g_ParamLimits

0xecf8,	// (0x000a174d) bg_button_pane_cp026

0x699e,	// (0x000993f3) popup_vitu2_query_input_button_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp025

0xd45d,	// (0x0009feb2) popup_vitu2_query_button_pane_t1

0x41f2,	// (0x00096c47) main_mp3_pane_t6

0x4202,	// (0x00096c57) popup_slider_window_cp01

0x561f,	// (0x00098074) cam4_battery_pane

0x56f9,	// (0x0009814e) cam4_battery_pane_cp02

0x671e,	// (0x00099173) cam4_battery_pane_cp01

0x671e,	// (0x00099173) cam4_battery_pane_cp03

0xd2ee,	// (0x0009fd43) cam4_battery_pane_g1

0xa0b9,	// (0x0009cb0e) cam4_battery_pane_g2

0x0001,

0xfa75,	// (0x000a24ca) cam4_battery_pane_g

0xc2ee,	// (0x0009ed43) popup_blid_sat_info2_window_t11

0xa8ff,	// (0x0009d354) aid_size_touch_mv_arrow_left_ParamLimits

0xa92a,	// (0x0009d37f) aid_size_touch_mv_arrow_right_ParamLimits

0xa988,	// (0x0009d3dd) navi_pane_g1_ParamLimits

0xa994,	// (0x0009d3e9) navi_pane_g2_ParamLimits

0xa9c2,	// (0x0009d417) navi_pane_g3_ParamLimits

0xf339,	// (0x000a1d8e) navi_pane_g_ParamLimits

0x31e0,	// (0x00095c35) navi_pane_mv_t1_ParamLimits

0x4bf7,	// (0x0009764c) grid_imed_effect_pane_ParamLimits

0x1c79,	// (0x000946ce) aid_placing_vt_slider_lsc

0xa11c,	// (0x0009cb71) aid_placing_vt_slider_prt

0xed22,	// (0x000a1777) bg_tb_trans_pane_cp01_ParamLimits

0xc58c,	// (0x0009efe1) popup_image_details_window_g1_ParamLimits

0xc59f,	// (0x0009eff4) popup_image_details_window_g2_ParamLimits

0xc5b4,	// (0x0009f009) popup_image_details_window_g3_ParamLimits

0xc5b4,	// (0x0009f009) popup_image_details_window_g3

0xf678,	// (0x000a20cd) popup_image_details_window_g_ParamLimits

0xc5d6,	// (0x0009f02b) popup_image_details_window_t1_ParamLimits

0xc5e8,	// (0x0009f03d) popup_image_details_window_t2_ParamLimits

0xc601,	// (0x0009f056) popup_image_details_window_t3_ParamLimits

0xc615,	// (0x0009f06a) popup_image_details_window_t4_ParamLimits

0xc630,	// (0x0009f085) popup_image_details_window_t5_ParamLimits

0xf67f,	// (0x000a20d4) popup_image_details_window_t_ParamLimits

0x663e,	// (0x00099093) cl_header_name_pane_ParamLimits

0x663e,	// (0x00099093) cl_header_name_pane

0x69a6,	// (0x000993fb) cl_header_name_pane_t1_ParamLimits

0x69a6,	// (0x000993fb) cl_header_name_pane_t1

0x69bd,	// (0x00099412) cl_header_name_pane_t2_ParamLimits

0x69bd,	// (0x00099412) cl_header_name_pane_t2

0x69e7,	// (0x0009943c) cl_header_name_pane_t3_ParamLimits

0x69e7,	// (0x0009943c) cl_header_name_pane_t3

0x0002,

0xfa7a,	// (0x000a24cf) cl_header_name_pane_t_ParamLimits

0xfa7a,	// (0x000a24cf) cl_header_name_pane_t

0xaa51,	// (0x0009d4a6) navi_pane_mv_g2_ParamLimits

0xcd14,	// (0x0009f769) field_vitu2_entry_pane_g1_ParamLimits

0xcd20,	// (0x0009f775) field_vitu2_entry_pane_g2_ParamLimits

0xacad,	// (0x0009d702) field_vitu2_entry_pane_g3_ParamLimits

0xacad,	// (0x0009d702) field_vitu2_entry_pane_g3

0xf87a,	// (0x000a22cf) field_vitu2_entry_pane_g_ParamLimits

0x596a,	// (0x000983bf) cell_vitu2_itu_pane_g1_ParamLimits

0x5982,	// (0x000983d7) cell_vitu2_itu_pane_g2_ParamLimits

0x5982,	// (0x000983d7) cell_vitu2_itu_pane_g2

0x0001,

0xf886,	// (0x000a22db) cell_vitu2_itu_pane_g_ParamLimits

0xf886,	// (0x000a22db) cell_vitu2_itu_pane_g

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp05_ParamLimits

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp05

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp03

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp04

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp10_ParamLimits

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp10

0x65e0,	// (0x00099035) bg_vkb2_func_pane_cp08

0x62ad,	// (0x00098d02) bg_vkb2_func_pane_cp06

0x65c3,	// (0x00099018) bg_vkb2_func_pane_cp07

0xd34d,	// (0x0009fda2) bg_vkb2_func_pane_cp11_ParamLimits

0xd34d,	// (0x0009fda2) bg_vkb2_func_pane_cp11

0xd362,	// (0x0009fdb7) bg_vkb2_func_pane_cp12_ParamLimits

0xd362,	// (0x0009fdb7) bg_vkb2_func_pane_cp12

0xecf8,	// (0x000a174d) bg_vkb2_func_pane_cp09

0xcd6d,	// (0x0009f7c2) bg_vkb2_func_pane_g1

0xa2de,	// (0x0009cd33) bg_vkb2_func_pane_g2

0xcd75,	// (0x0009f7ca) bg_vkb2_func_pane_g3

0xcd7d,	// (0x0009f7d2) bg_vkb2_func_pane_g4

0xcfc5,	// (0x0009fa1a) bg_vkb2_func_pane_g5

0xcd95,	// (0x0009f7ea) bg_vkb2_func_pane_g6

0xcd9d,	// (0x0009f7f2) bg_vkb2_func_pane_g7

0xcd8d,	// (0x0009f7e2) bg_vkb2_func_pane_g8

0xa2be,	// (0x0009cd13) bg_vkb2_func_pane_g9

0x0008,

0xfa81,	// (0x000a24d6) bg_vkb2_func_pane_g

0x68f5,	// (0x0009934a) blid2_tripm_pane_g6_ParamLimits

0x68f5,	// (0x0009934a) blid2_tripm_pane_g6

0xcc66,	// (0x0009f6bb) mp4_progress_pane_g1

0x694f,	// (0x000993a4) blid2_tripm_values_pane_ParamLimits

0x694f,	// (0x000993a4) blid2_tripm_values_pane

0x6a0c,	// (0x00099461) blid2_tripm_values_pane_t1

0x6a1a,	// (0x0009946f) blid2_tripm_values_pane_t2

0x6a28,	// (0x0009947d) blid2_tripm_values_pane_t3

0x6a36,	// (0x0009948b) blid2_tripm_values_pane_t4

0x6a44,	// (0x00099499) blid2_tripm_values_pane_t5

0x6a52,	// (0x000994a7) blid2_tripm_values_pane_t6

0x6a60,	// (0x000994b5) blid2_tripm_values_pane_t7

0x6a6e,	// (0x000994c3) blid2_tripm_values_pane_t8

0x6a7c,	// (0x000994d1) blid2_tripm_values_pane_t9

0x0008,

0xfa94,	// (0x000a24e9) blid2_tripm_values_pane_t

0x1cb9,	// (0x0009470e) call_video_pane_t1_ParamLimits

0x1cda,	// (0x0009472f) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000a1c37) call_video_pane_t_ParamLimits

0x34dc,	// (0x00095f31) msg_header_pane_g1_ParamLimits

0xac16,	// (0x0009d66b) msg_header_pane_g2_ParamLimits

0xac16,	// (0x0009d66b) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x000a1e31) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x000a1e31) msg_header_pane_g

0x9ed1,	// (0x0009c926) main_clock2_pane_ParamLimits

0x4971,	// (0x000973c6) grid_clock2_toolbar_pane_ParamLimits

0x4971,	// (0x000973c6) grid_clock2_toolbar_pane

0x4971,	// (0x000973c6) listscroll_clock2_pane_ParamLimits

0x4971,	// (0x000973c6) listscroll_clock2_pane

0x4a21,	// (0x00097476) main_clock2_pane_t3_ParamLimits

0x4a21,	// (0x00097476) main_clock2_pane_t3

0x4a33,	// (0x00097488) main_clock2_pane_t4_ParamLimits

0x4a33,	// (0x00097488) main_clock2_pane_t4

0xd46b,	// (0x0009fec0) cell_clock2_toolbar_pane

0xd473,	// (0x0009fec8) cell_clock2_toolbar_pane_cp01

0xd473,	// (0x0009fec8) cell_clock2_toolbar_pane_cp02

0xd47b,	// (0x0009fed0) cell_clock2_toolbar_pane_cp03

0xd483,	// (0x0009fed8) list_clock2_pane

0xa884,	// (0x0009d2d9) scroll_pane_cp10

0xd48b,	// (0x0009fee0) list_single_clock2_pane_ParamLimits

0xd48b,	// (0x0009fee0) list_single_clock2_pane

0xa083,	// (0x0009cad8) list_highlight_pane_cp08

0xd498,	// (0x0009feed) list_single_clock2_pane_t1

0xd4a6,	// (0x0009fefb) list_single_clock2_pane_t2

0x0001,

0xfaa7,	// (0x000a24fc) list_single_clock2_pane_t

0xecf8,	// (0x000a174d) bg_button_pane_cp10

0xd4b4,	// (0x0009ff09) cell_clock2_toolbar_pane_g1

0x3500,	// (0x00095f55) aid_main_viewer_pane_g1_ParamLimits

0x3500,	// (0x00095f55) aid_main_viewer_pane_g1

0x350c,	// (0x00095f61) aid_main_viewer_pane_g2_ParamLimits

0x350c,	// (0x00095f61) aid_main_viewer_pane_g2

0x3518,	// (0x00095f6d) aid_main_viewer_pane_g3_ParamLimits

0x3518,	// (0x00095f6d) aid_main_viewer_pane_g3

0x3529,	// (0x00095f7e) aid_main_viewer_pane_g4_ParamLimits

0x3529,	// (0x00095f7e) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x000a1e42) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x000a1e42) aid_main_viewer_pane_g

0x3ce9,	// (0x0009673e) main_calc_pane_ParamLimits

0x3d04,	// (0x00096759) main_dialer2_pane_ParamLimits

0x1131,	// (0x00093b86) main_cam6_pane

0x1131,	// (0x00093b86) main_vid6_pane

0x497d,	// (0x000973d2) listscroll_gen_pane_cp06_ParamLimits

0x497d,	// (0x000973d2) listscroll_gen_pane_cp06

0x4a45,	// (0x0009749a) main_clock2_pane_t5_ParamLimits

0x4a45,	// (0x0009749a) main_clock2_pane_t5

0x4a92,	// (0x000974e7) aid_call2_pane_cp10_ParamLimits

0x4aa4,	// (0x000974f9) aid_call_pane_cp10_ParamLimits

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ab6,	// (0x0009750b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ab6,	// (0x0009750b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8f3,	// (0x0009d348) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf734,	// (0x000a2189) popup_clock_analogue_window_cp10_g_ParamLimits

0x4acc,	// (0x00097521) popup_clock_analogue_window_cp10_t1_ParamLimits

0x51c9,	// (0x00097c1e) cell_dialer2_keypad_pane_g2_ParamLimits

0x51c9,	// (0x00097c1e) cell_dialer2_keypad_pane_g2

0x0001,

0xf819,	// (0x000a226e) cell_dialer2_keypad_pane_g_ParamLimits

0xf819,	// (0x000a226e) cell_dialer2_keypad_pane_g

0x51e5,	// (0x00097c3a) cell_dialer2_keypad_pane_t1

0x5ca6,	// (0x000986fb) main_cset_text2_pane_ParamLimits

0x5ca6,	// (0x000986fb) main_cset_text2_pane

0xd1fe,	// (0x0009fc53) area_vitu2_query_pane_g1_ParamLimits

0x6562,	// (0x00098fb7) area_vitu2_query_pane_g2_ParamLimits

0xf9c4,	// (0x000a2419) area_vitu2_query_pane_g_ParamLimits

0xd282,	// (0x0009fcd7) area_vitu2_query_pane_t7_ParamLimits

0xd282,	// (0x0009fcd7) area_vitu2_query_pane_t7

0x62ad,	// (0x00098d02) bg_button_pane_cp018_ParamLimits

0x65c3,	// (0x00099018) bg_button_pane_cp021_ParamLimits

0x65cf,	// (0x00099024) bg_button_pane_cp022_ParamLimits

0x65e0,	// (0x00099035) bg_vkb2_func_pane_cp08_ParamLimits

0x62ad,	// (0x00098d02) bg_vkb2_func_pane_cp06_ParamLimits

0x65c3,	// (0x00099018) bg_vkb2_func_pane_cp07_ParamLimits

0x65f2,	// (0x00099047) input_focus_pane_cp09_ParamLimits

0x6a8a,	// (0x000994df) cam6_autofocus_pane_ParamLimits

0x6a8a,	// (0x000994df) cam6_autofocus_pane

0x6aa6,	// (0x000994fb) cam6_image_uncrop_pane_ParamLimits

0x6aa6,	// (0x000994fb) cam6_image_uncrop_pane

0x6adf,	// (0x00099534) cam6_indi_pane_ParamLimits

0x6adf,	// (0x00099534) cam6_indi_pane

0x6af9,	// (0x0009954e) cam6_mode_pane_ParamLimits

0x6af9,	// (0x0009954e) cam6_mode_pane

0x6b0d,	// (0x00099562) cam6_timer_pane_ParamLimits

0x6b0d,	// (0x00099562) cam6_timer_pane

0x6b21,	// (0x00099576) cam6_zoom_pane_ParamLimits

0x6b21,	// (0x00099576) cam6_zoom_pane

0x6b3c,	// (0x00099591) cam6_mode_pane_g1_ParamLimits

0x6b3c,	// (0x00099591) cam6_mode_pane_g1

0x6b48,	// (0x0009959d) cam6_mode_pane_g2_ParamLimits

0x6b48,	// (0x0009959d) cam6_mode_pane_g2

0x6b54,	// (0x000995a9) cam6_mode_pane_g3_ParamLimits

0x6b54,	// (0x000995a9) cam6_mode_pane_g3

0x6b60,	// (0x000995b5) cam6_mode_pane_g4_ParamLimits

0x6b60,	// (0x000995b5) cam6_mode_pane_g4

0x0003,

0xfaac,	// (0x000a2501) cam6_mode_pane_g_ParamLimits

0xfaac,	// (0x000a2501) cam6_mode_pane_g

0xc5c8,	// (0x0009f01d) bg_tb_trans_pane_cp08_ParamLimits

0xc5c8,	// (0x0009f01d) bg_tb_trans_pane_cp08

0xd4bc,	// (0x0009ff11) cam6_battery_pane_ParamLimits

0xd4bc,	// (0x0009ff11) cam6_battery_pane

0xd4d2,	// (0x0009ff27) cam6_indi_pane_g1_ParamLimits

0xd4d2,	// (0x0009ff27) cam6_indi_pane_g1

0xd4e4,	// (0x0009ff39) cam6_indi_pane_g2_ParamLimits

0xd4e4,	// (0x0009ff39) cam6_indi_pane_g2

0xd4f6,	// (0x0009ff4b) cam6_indi_pane_g3_ParamLimits

0xd4f6,	// (0x0009ff4b) cam6_indi_pane_g3

0x0002,

0xfab5,	// (0x000a250a) cam6_indi_pane_g_ParamLimits

0xfab5,	// (0x000a250a) cam6_indi_pane_g

0xd508,	// (0x0009ff5d) cam6_indi_pane_t1_ParamLimits

0xd508,	// (0x0009ff5d) cam6_indi_pane_t1

0x5775,	// (0x000981ca) cam6_autofocus_pane_g1

0x576d,	// (0x000981c2) cam6_autofocus_pane_g2

0x5785,	// (0x000981da) cam6_autofocus_pane_g3

0x577d,	// (0x000981d2) cam6_autofocus_pane_g4

0x0003,

0xfabc,	// (0x000a2511) cam6_autofocus_pane_g

0xd52e,	// (0x0009ff83) cam6_timer_pane_g1

0xd536,	// (0x0009ff8b) cam6_timer_pane_t1

0xd544,	// (0x0009ff99) cam6_zoom_cont_pane

0xd54c,	// (0x0009ffa1) cam6_zoom_pane_g1

0xd555,	// (0x0009ffaa) cam6_zoom_pane_g2

0x6b6c,	// (0x000995c1) cam6_zoom_pane_g3

0x0002,

0xfac5,	// (0x000a251a) cam6_zoom_pane_g

0xa0b9,	// (0x0009cb0e) cam6_battery_pane_g1

0xa0b9,	// (0x0009cb0e) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) cam6_battery_pane_g

0xd54c,	// (0x0009ffa1) cam6_zoom_cont_pane_g1

0xd555,	// (0x0009ffaa) cam6_zoom_cont_pane_g2

0xd55e,	// (0x0009ffb3) cam6_zoom_cont_pane_g3

0x0002,

0xfacc,	// (0x000a2521) cam6_zoom_cont_pane_g

0x6b8a,	// (0x000995df) cam6_mode_pane_cp_ParamLimits

0x6b8a,	// (0x000995df) cam6_mode_pane_cp

0x6b9e,	// (0x000995f3) cam6_zoom_pane_cp_ParamLimits

0x6b9e,	// (0x000995f3) cam6_zoom_pane_cp

0x6bb6,	// (0x0009960b) vid6_image_uncrop_cif_pane_ParamLimits

0x6bb6,	// (0x0009960b) vid6_image_uncrop_cif_pane

0x6be2,	// (0x00099637) vid6_image_uncrop_nhd_pane_ParamLimits

0x6be2,	// (0x00099637) vid6_image_uncrop_nhd_pane

0x6bff,	// (0x00099654) vid6_image_uncrop_vga_pane_ParamLimits

0x6bff,	// (0x00099654) vid6_image_uncrop_vga_pane

0x6c1e,	// (0x00099673) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c1e,	// (0x00099673) vid6_image_uncrop_wvga_pane

0x6c3b,	// (0x00099690) vid6_indi_pane_ParamLimits

0x6c3b,	// (0x00099690) vid6_indi_pane

0xc5c8,	// (0x0009f01d) bg_tb_trans_pane_cp09_ParamLimits

0xc5c8,	// (0x0009f01d) bg_tb_trans_pane_cp09

0xd576,	// (0x0009ffcb) cam6_battery_pane_cp_ParamLimits

0xd576,	// (0x0009ffcb) cam6_battery_pane_cp

0xd582,	// (0x0009ffd7) vid6_indi_pane_g1_ParamLimits

0xd582,	// (0x0009ffd7) vid6_indi_pane_g1

0xd594,	// (0x0009ffe9) vid6_indi_pane_g2_ParamLimits

0xd594,	// (0x0009ffe9) vid6_indi_pane_g2

0xd5a6,	// (0x0009fffb) vid6_indi_pane_g3_ParamLimits

0xd5a6,	// (0x0009fffb) vid6_indi_pane_g3

0xd5bb,	// (0x000a0010) vid6_indi_pane_g4_ParamLimits

0xd5bb,	// (0x000a0010) vid6_indi_pane_g4

0xd5d0,	// (0x000a0025) vid6_indi_pane_g5_ParamLimits

0xd5d0,	// (0x000a0025) vid6_indi_pane_g5

0x0004,

0xfad3,	// (0x000a2528) vid6_indi_pane_g_ParamLimits

0xfad3,	// (0x000a2528) vid6_indi_pane_g

0xd5ea,	// (0x000a003f) vid6_indi_pane_t1_ParamLimits

0xd5ea,	// (0x000a003f) vid6_indi_pane_t1

0xd600,	// (0x000a0055) vid6_indi_pane_t2_ParamLimits

0xd600,	// (0x000a0055) vid6_indi_pane_t2

0xd628,	// (0x000a007d) vid6_indi_pane_t3_ParamLimits

0xd628,	// (0x000a007d) vid6_indi_pane_t3

0xd650,	// (0x000a00a5) vid6_indi_pane_t4_ParamLimits

0xd650,	// (0x000a00a5) vid6_indi_pane_t4

0x0003,

0xfade,	// (0x000a2533) vid6_indi_pane_t_ParamLimits

0xfade,	// (0x000a2533) vid6_indi_pane_t

0xd674,	// (0x000a00c9) wait_bar_pane_cp08

0x6c5e,	// (0x000996b3) main_cset_text2_pane_t1_ParamLimits

0x6c5e,	// (0x000996b3) main_cset_text2_pane_t1

0x6b75,	// (0x000995ca) listscroll_gen_pane_cp06_t1_ParamLimits

0x6b75,	// (0x000995ca) listscroll_gen_pane_cp06_t1

0x1131,	// (0x00093b86) main_cam6_set_pane

0xdfa2,	// (0x000a09f7) bg_tb_trans_pane_cp06_ParamLimits

0x5627,	// (0x0009807c) cam4_indicators_pane_g1_ParamLimits

0x5638,	// (0x0009808d) cam4_indicators_pane_g2_ParamLimits

0xf856,	// (0x000a22ab) cam4_indicators_pane_g_ParamLimits

0x5650,	// (0x000980a5) cam4_indicators_pane_t1_ParamLimits

0x3cf6,	// (0x0009674b) bg_tb_trans_pane_cp07_ParamLimits

0x5701,	// (0x00098156) vid4_indicators_pane_g1_ParamLimits

0x5715,	// (0x0009816a) vid4_indicators_pane_g2_ParamLimits

0x5729,	// (0x0009817e) vid4_indicators_pane_g3_ParamLimits

0x573a,	// (0x0009818f) vid4_indicators_pane_g4_ParamLimits

0xf868,	// (0x000a22bd) vid4_indicators_pane_g_ParamLimits

0x5756,	// (0x000981ab) vid4_indicators_pane_t1_ParamLimits

0x6726,	// (0x0009917b) vid4_progress_pane_g1_ParamLimits

0x6736,	// (0x0009918b) vid4_progress_pane_g2_ParamLimits

0x6746,	// (0x0009919b) vid4_progress_pane_g3_ParamLimits

0x6758,	// (0x000991ad) vid4_progress_pane_g4_ParamLimits

0xfa0f,	// (0x000a2464) vid4_progress_pane_g_ParamLimits

0x6770,	// (0x000991c5) vid4_progress_pane_t1_ParamLimits

0x6786,	// (0x000991db) vid4_progress_pane_t2_ParamLimits

0x679b,	// (0x000991f0) vid4_progress_pane_t3_ParamLimits

0xfa1a,	// (0x000a246f) vid4_progress_pane_t_ParamLimits

0x67b1,	// (0x00099206) wait_bar_pane_cp07_ParamLimits

0x6c95,	// (0x000996ea) main_cam6_set_pane_g2_ParamLimits

0x6c95,	// (0x000996ea) main_cam6_set_pane_g2

0x6ca1,	// (0x000996f6) main_cset6_listscroll_pane_ParamLimits

0x6ca1,	// (0x000996f6) main_cset6_listscroll_pane

0x6ccc,	// (0x00099721) main_cset6_slider_pane_ParamLimits

0x6ccc,	// (0x00099721) main_cset6_slider_pane

0x6cd8,	// (0x0009972d) main_cset6_text2_pane_ParamLimits

0x6cd8,	// (0x0009972d) main_cset6_text2_pane

0xd683,	// (0x000a00d8) main_cset6_text_pane

0xd68b,	// (0x000a00e0) main_cset_list_pane_copy1_ParamLimits

0xd68b,	// (0x000a00e0) main_cset_list_pane_copy1

0xd69b,	// (0x000a00f0) scroll_pane_cp028_copy1

0x6ceb,	// (0x00099740) cset_list_set_pane_copy1

0x6d01,	// (0x00099756) aid_position_infowindow_above_copy1

0x6d09,	// (0x0009975e) aid_position_infowindow_below_copy1

0xe52e,	// (0x000a0f83) cset_list_set_pane_g1_copy1

0xd6a4,	// (0x000a00f9) cset_list_set_pane_g3_copy1_ParamLimits

0xd6a4,	// (0x000a00f9) cset_list_set_pane_g3_copy1

0xd6b3,	// (0x000a0108) cset_list_set_pane_t1_copy1_ParamLimits

0xd6b3,	// (0x000a0108) cset_list_set_pane_t1_copy1

0xed22,	// (0x000a1777) list_highlight_pane_cp021_copy1_ParamLimits

0xed22,	// (0x000a1777) list_highlight_pane_cp021_copy1

0xd6c8,	// (0x000a011d) cset6_slider_pane_ParamLimits

0xd6c8,	// (0x000a011d) cset6_slider_pane

0xd6f4,	// (0x000a0149) main_cset6_slider_pane_g1_ParamLimits

0xd6f4,	// (0x000a0149) main_cset6_slider_pane_g1

0x6d11,	// (0x00099766) main_cset6_slider_pane_g2_ParamLimits

0x6d11,	// (0x00099766) main_cset6_slider_pane_g2

0xd71c,	// (0x000a0171) main_cset6_slider_pane_g3_ParamLimits

0xd71c,	// (0x000a0171) main_cset6_slider_pane_g3

0x6d39,	// (0x0009978e) main_cset6_slider_pane_g4_ParamLimits

0x6d39,	// (0x0009978e) main_cset6_slider_pane_g4

0x6d45,	// (0x0009979a) main_cset6_slider_pane_g5_ParamLimits

0x6d45,	// (0x0009979a) main_cset6_slider_pane_g5

0xceae,	// (0x0009f903) main_cset6_slider_pane_g7_ParamLimits

0xceae,	// (0x0009f903) main_cset6_slider_pane_g7

0xceba,	// (0x0009f90f) main_cset6_slider_pane_g8_ParamLimits

0xceba,	// (0x0009f90f) main_cset6_slider_pane_g8

0x6d53,	// (0x000997a8) main_cset6_slider_pane_g9_ParamLimits

0x6d53,	// (0x000997a8) main_cset6_slider_pane_g9

0x6d5f,	// (0x000997b4) main_cset6_slider_pane_g10_ParamLimits

0x6d5f,	// (0x000997b4) main_cset6_slider_pane_g10

0x6d6b,	// (0x000997c0) main_cset6_slider_pane_g11_ParamLimits

0x6d6b,	// (0x000997c0) main_cset6_slider_pane_g11

0x6d77,	// (0x000997cc) main_cset6_slider_pane_g12_ParamLimits

0x6d77,	// (0x000997cc) main_cset6_slider_pane_g12

0xcf33,	// (0x0009f988) main_cset6_slider_pane_g13_ParamLimits

0xcf33,	// (0x0009f988) main_cset6_slider_pane_g13

0xcf3f,	// (0x0009f994) main_cset6_slider_pane_g14_ParamLimits

0xcf3f,	// (0x0009f994) main_cset6_slider_pane_g14

0x6d83,	// (0x000997d8) main_cset6_slider_pane_g15_ParamLimits

0x6d83,	// (0x000997d8) main_cset6_slider_pane_g15

0x6d9b,	// (0x000997f0) main_cset6_slider_pane_g16_ParamLimits

0x6d9b,	// (0x000997f0) main_cset6_slider_pane_g16

0x6da9,	// (0x000997fe) main_cset6_slider_pane_g17_ParamLimits

0x6da9,	// (0x000997fe) main_cset6_slider_pane_g17

0x0011,

0xfae7,	// (0x000a253c) main_cset6_slider_pane_g_ParamLimits

0xfae7,	// (0x000a253c) main_cset6_slider_pane_g

0xd734,	// (0x000a0189) main_cset6_slider_pane_t1_ParamLimits

0xd734,	// (0x000a0189) main_cset6_slider_pane_t1

0x6dc3,	// (0x00099818) main_cset6_slider_pane_t2_ParamLimits

0x6dc3,	// (0x00099818) main_cset6_slider_pane_t2

0x6dee,	// (0x00099843) main_cset6_slider_pane_t3_ParamLimits

0x6dee,	// (0x00099843) main_cset6_slider_pane_t3

0x6e19,	// (0x0009986e) main_cset6_slider_pane_t4_ParamLimits

0x6e19,	// (0x0009986e) main_cset6_slider_pane_t4

0x6e44,	// (0x00099899) main_cset6_slider_pane_t5_ParamLimits

0x6e44,	// (0x00099899) main_cset6_slider_pane_t5

0xd775,	// (0x000a01ca) main_cset6_slider_pane_t7_ParamLimits

0xd775,	// (0x000a01ca) main_cset6_slider_pane_t7

0x6e71,	// (0x000998c6) main_cset6_slider_pane_t8_ParamLimits

0x6e71,	// (0x000998c6) main_cset6_slider_pane_t8

0x6e95,	// (0x000998ea) main_cset6_slider_pane_t9_ParamLimits

0x6e95,	// (0x000998ea) main_cset6_slider_pane_t9

0x6eb9,	// (0x0009990e) main_cset6_slider_pane_t10_ParamLimits

0x6eb9,	// (0x0009990e) main_cset6_slider_pane_t10

0x6edd,	// (0x00099932) main_cset6_slider_pane_t11_ParamLimits

0x6edd,	// (0x00099932) main_cset6_slider_pane_t11

0xd7ab,	// (0x000a0200) main_cset6_slider_pane_t14_ParamLimits

0xd7ab,	// (0x000a0200) main_cset6_slider_pane_t14

0xd7e4,	// (0x000a0239) main_cset6_slider_pane_t15_ParamLimits

0xd7e4,	// (0x000a0239) main_cset6_slider_pane_t15

0x000b,

0xfb0c,	// (0x000a2561) main_cset6_slider_pane_t_ParamLimits

0xfb0c,	// (0x000a2561) main_cset6_slider_pane_t

0xcb7d,	// (0x0009f5d2) cset_slider_pane_g1_copy1

0xd104,	// (0x0009fb59) cset_slider_pane_g2_copy1

0xd10d,	// (0x0009fb62) cset_slider_pane_g3_copy1

0xecf8,	// (0x000a174d) bg_popup_sub_pane_cp011_copy1

0xd826,	// (0x000a027b) main_cset_text_pane_g1_copy1

0xd014,	// (0x0009fa69) main_cset_text_pane_t1_copy1

0xd022,	// (0x0009fa77) main_cset_text_pane_t2_copy1

0xd030,	// (0x0009fa85) main_cset_text_pane_t3_copy1

0xd03e,	// (0x0009fa93) main_cset_text_pane_t4_copy1

0xd04c,	// (0x0009faa1) main_cset_text_pane_t5_copy1

0xd82e,	// (0x000a0283) main_cset_text_pane_t6_copy1

0xd83c,	// (0x000a0291) main_cset_text_pane_t7_copy1

0x6f20,	// (0x00099975) main_cset_text2_pane_t1_copy1

0x3cf6,	// (0x0009674b) main_ncimui_pane

0x3d55,	// (0x000967aa) popup_query_ncimui_window_ParamLimits

0x3d55,	// (0x000967aa) popup_query_ncimui_window

0xc70d,	// (0x0009f162) field_cale_ev2_pane_g4_ParamLimits

0xc70d,	// (0x0009f162) field_cale_ev2_pane_g4

0x4ea9,	// (0x000978fe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4ea9,	// (0x000978fe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f0,	// (0x000a2245) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f0,	// (0x000a2245) cell_video_dialer_keypad_pane_g

0x4ec1,	// (0x00097916) cell_video_dialer_keypad_pane_t1

0xecf8,	// (0x000a174d) bg_popup_window_pane_cp012

0xbf55,	// (0x0009e9aa) heading_pane_cp06

0xd868,	// (0x000a02bd) ncim_query_content_pane

0xecf8,	// (0x000a174d) bg_popup_heading_pane_cp01

0xd870,	// (0x000a02c5) ncim_heading_pane_t1

0xd87e,	// (0x000a02d3) ncim_indicator_popup_pane

0xd890,	// (0x000a02e5) ncim_query_button_pane

0xd8a4,	// (0x000a02f9) ncim_query_content_pane_t1

0xd8b6,	// (0x000a030b) ncim_query_content_pane_t2

0x0005,

0xfb50,	// (0x000a25a5) ncim_query_content_pane_t

0xd8f0,	// (0x000a0345) ncim_query_list_pane

0xd902,	// (0x000a0357) ncim_query_popup_pane

0xd87e,	// (0x000a02d3) ncim_indicator_popup_pane_ParamLimits

0x7074,	// (0x00099ac9) ncim_query_content_pane_g1_ParamLimits

0x7074,	// (0x00099ac9) ncim_query_content_pane_g1

0xd8a4,	// (0x000a02f9) ncim_query_content_pane_t1_ParamLimits

0xd8b6,	// (0x000a030b) ncim_query_content_pane_t2_ParamLimits

0x7080,	// (0x00099ad5) ncim_query_content_pane_t3_ParamLimits

0x7080,	// (0x00099ad5) ncim_query_content_pane_t3

0x709d,	// (0x00099af2) ncim_query_content_pane_t4_ParamLimits

0x709d,	// (0x00099af2) ncim_query_content_pane_t4

0x70ba,	// (0x00099b0f) ncim_query_content_pane_t5_ParamLimits

0x70ba,	// (0x00099b0f) ncim_query_content_pane_t5

0xd8c8,	// (0x000a031d) ncim_query_content_pane_t6_ParamLimits

0xd8c8,	// (0x000a031d) ncim_query_content_pane_t6

0xfb50,	// (0x000a25a5) ncim_query_content_pane_t_ParamLimits

0xd8f0,	// (0x000a0345) ncim_query_list_pane_ParamLimits

0xd902,	// (0x000a0357) ncim_query_popup_pane_ParamLimits

0xd916,	// (0x000a036b) wait_bar_pane_cp04

0xecf8,	// (0x000a174d) input_focus_pane_cp011

0xd91e,	// (0x000a0373) ncim_query_popup_pane_t1

0xd92c,	// (0x000a0381) ncim_list_query_list_pane_ParamLimits

0xd92c,	// (0x000a0381) ncim_list_query_list_pane

0xecf8,	// (0x000a174d) bg_button_pane_cp027

0xd939,	// (0x000a038e) ncim_query_button_pane_g1

0xecf8,	// (0x000a174d) list_highlight_pane_cp012

0xd943,	// (0x000a0398) ncim_list_query_list_pane_g1

0xd94b,	// (0x000a03a0) ncim_list_query_list_pane_t1

0x5644,	// (0x00098099) cam4_indicators_pane_g3_ParamLimits

0x5644,	// (0x00098099) cam4_indicators_pane_g3

0x5746,	// (0x0009819b) vid4_indicators_pane_g5_ParamLimits

0x5746,	// (0x0009819b) vid4_indicators_pane_g5

0x6764,	// (0x000991b9) vid4_progress_pane_g5_ParamLimits

0x6764,	// (0x000991b9) vid4_progress_pane_g5

0x6f60,	// (0x000999b5) main_ncimui_pane_g1

0x6fc8,	// (0x00099a1d) ncimui_group_query_pane_ParamLimits

0x6fc8,	// (0x00099a1d) ncimui_group_query_pane

0x7010,	// (0x00099a65) ncimui_list_pane_ParamLimits

0x7010,	// (0x00099a65) ncimui_list_pane

0x7037,	// (0x00099a8c) ncimui_text_pane_ParamLimits

0x7037,	// (0x00099a8c) ncimui_text_pane

0x70d7,	// (0x00099b2c) ncimui_text_pane_t1_ParamLimits

0x70d7,	// (0x00099b2c) ncimui_text_pane_t1

0xd959,	// (0x000a03ae) ncimui_list_single_graphic_pane_ParamLimits

0xd959,	// (0x000a03ae) ncimui_list_single_graphic_pane

0x70f6,	// (0x00099b4b) ncimui_query_pane_ParamLimits

0x70f6,	// (0x00099b4b) ncimui_query_pane

0xecf8,	// (0x000a174d) list_highlight_pane_cp013

0xd969,	// (0x000a03be) ncim_list_query_list_pane_t1_copy1

0xd977,	// (0x000a03cc) ncim_list_single_graphic_pane_g1

0x7109,	// (0x00099b5e) ncim_query_button_pane_cp01

0x7115,	// (0x00099b6a) ncim_query_entry_pane_ParamLimits

0x7115,	// (0x00099b6a) ncim_query_entry_pane

0x7128,	// (0x00099b7d) ncimui_query_pane_g1

0x7134,	// (0x00099b89) ncimui_query_pane_t1_ParamLimits

0x7134,	// (0x00099b89) ncimui_query_pane_t1

0xed22,	// (0x000a1777) input_focus_pane_cp012

0xd97f,	// (0x000a03d4) ncim_query_entry_pane_t1

0x9ed1,	// (0x0009c926) main_im_pane_ParamLimits

0x3cf6,	// (0x0009674b) main_mobtv_pane_ParamLimits

0x3cf6,	// (0x0009674b) main_mobtv_pane

0x6db7,	// (0x0009980c) main_cset6_slider_pane_g18_ParamLimits

0x6db7,	// (0x0009980c) main_cset6_slider_pane_g18

0xd728,	// (0x000a017d) main_cset6_slider_pane_g19_ParamLimits

0xd728,	// (0x000a017d) main_cset6_slider_pane_g19

0xacad,	// (0x0009d702) bg_main_mobtv_pane_ParamLimits

0xacad,	// (0x0009d702) bg_main_mobtv_pane

0x714d,	// (0x00099ba2) main_mobtv_info_pane

0x7158,	// (0x00099bad) main_mobtv_loading_pane_ParamLimits

0x7158,	// (0x00099bad) main_mobtv_loading_pane

0xd991,	// (0x000a03e6) main_mobtv_pg_channel_list_pane

0xd99b,	// (0x000a03f0) main_mobtv_pg_hdr_pane

0x7165,	// (0x00099bba) main_mobtv_programe_curr_pane_ParamLimits

0x7165,	// (0x00099bba) main_mobtv_programe_curr_pane

0x7172,	// (0x00099bc7) main_mobtv_programe_next_pane_ParamLimits

0x7172,	// (0x00099bc7) main_mobtv_programe_next_pane

0xd9a4,	// (0x000a03f9) popup_mobtv_noti_window

0xa0b9,	// (0x0009cb0e) main_tv_pg_hdr_pane_g1

0xd9ac,	// (0x000a0401) main_tv_pg_hdr_pane_g2

0xd9b4,	// (0x000a0409) main_tv_pg_hdr_pane_g3

0xd9bc,	// (0x000a0411) main_tv_pg_hdr_pane_g4

0xd9c4,	// (0x000a0419) main_tv_pg_hdr_pane_g5

0xd9ce,	// (0x000a0423) main_tv_pg_hdr_pane_g6

0xd9d8,	// (0x000a042d) main_tv_pg_hdr_pane_g7

0xd9e2,	// (0x000a0437) main_tv_pg_hdr_pane_g8

0xd9ec,	// (0x000a0441) main_tv_pg_hdr_pane_g9

0xd9f6,	// (0x000a044b) main_tv_pg_hdr_pane_g10

0xda00,	// (0x000a0455) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5d,	// (0x000a25b2) main_tv_pg_hdr_pane_g

0xda0a,	// (0x000a045f) main_tv_pg_hdr_pane_t1

0xda18,	// (0x000a046d) main_tv_pg_hdr_pane_t2

0xda26,	// (0x000a047b) main_tv_pg_hdr_pane_t3

0xda36,	// (0x000a048b) main_tv_pg_hdr_pane_t4

0xda46,	// (0x000a049b) main_tv_pg_hdr_pane_t5

0x0004,

0xfb74,	// (0x000a25c9) main_tv_pg_hdr_pane_t

0xda56,	// (0x000a04ab) single_mobtv_pg_channel_pane_ParamLimits

0xda56,	// (0x000a04ab) single_mobtv_pg_channel_pane

0xda68,	// (0x000a04bd) single_mobtv_pg_channel_table_pane

0xa3e1,	// (0x0009ce36) single_mobtv_pg_channel_thumb_pane

0xda71,	// (0x000a04c6) single_tv_pg_channel_pane_g1

0xda7a,	// (0x000a04cf) single_tv_pg_channel_pane_g2

0x0001,

0xfb7f,	// (0x000a25d4) single_tv_pg_channel_pane_g

0x9e5f,	// (0x0009c8b4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9e5f,	// (0x0009c8b4) bg_single_mobtv_pg_channel_thumb_pane

0xda83,	// (0x000a04d8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda83,	// (0x000a04d8) single_mobtv_pg_channel_thumb_pane_g1

0xda91,	// (0x000a04e6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda91,	// (0x000a04e6) single_mobtv_pg_channel_thumb_pane_g2

0xda9d,	// (0x000a04f2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda9d,	// (0x000a04f2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb84,	// (0x000a25d9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb84,	// (0x000a25d9) single_mobtv_pg_channel_thumb_pane_g

0xdaa9,	// (0x000a04fe) single_mobtv_pg_channel_thumb_pane_t1

0xdab7,	// (0x000a050c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8b,	// (0x000a25e0) single_mobtv_pg_channel_thumb_pane_t

0xa0b9,	// (0x0009cb0e) bg_single_mobtv_pg_channel_table_pane_g1

0xa0b9,	// (0x0009cb0e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x000a1df2) bg_single_mobtv_pg_channel_table_pane_g

0xdac5,	// (0x000a051a) single_mobtv_pg_channel_table_pane_t1

0xdad3,	// (0x000a0528) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb90,	// (0x000a25e5) single_mobtv_pg_channel_table_pane_t

0x7187,	// (0x00099bdc) main_mobtv_info_pane_g1_ParamLimits

0x7187,	// (0x00099bdc) main_mobtv_info_pane_g1

0x71a3,	// (0x00099bf8) main_mobtv_info_pane_t1_ParamLimits

0x71a3,	// (0x00099bf8) main_mobtv_info_pane_t1

0x721b,	// (0x00099c70) main_mobtv_info_pane_t2_ParamLimits

0x721b,	// (0x00099c70) main_mobtv_info_pane_t2

0x0002,

0xfb9a,	// (0x000a25ef) main_mobtv_info_pane_t_ParamLimits

0xfb9a,	// (0x000a25ef) main_mobtv_info_pane_t

0x72aa,	// (0x00099cff) wait_bar_pane_cp05

0x72bc,	// (0x00099d11) main_mobtv_loading_pane_g1_ParamLimits

0x72bc,	// (0x00099d11) main_mobtv_loading_pane_g1

0x72ca,	// (0x00099d1f) main_mobtv_loading_pane_g2_ParamLimits

0x72ca,	// (0x00099d1f) main_mobtv_loading_pane_g2

0x72d6,	// (0x00099d2b) main_mobtv_loading_pane_g3_ParamLimits

0x72d6,	// (0x00099d2b) main_mobtv_loading_pane_g3

0x0002,

0xfba1,	// (0x000a25f6) main_mobtv_loading_pane_g_ParamLimits

0xfba1,	// (0x000a25f6) main_mobtv_loading_pane_g

0xdae1,	// (0x000a0536) main_mobtv_loading_pane_t1_ParamLimits

0xdae1,	// (0x000a0536) main_mobtv_loading_pane_t1

0xdaf9,	// (0x000a054e) main_mobtv_loading_pane_t2_ParamLimits

0xdaf9,	// (0x000a054e) main_mobtv_loading_pane_t2

0x0001,

0xfba8,	// (0x000a25fd) main_mobtv_loading_pane_t_ParamLimits

0xfba8,	// (0x000a25fd) main_mobtv_loading_pane_t

0x72e4,	// (0x00099d39) wait_bar_pane_cp06_ParamLimits

0x72e4,	// (0x00099d39) wait_bar_pane_cp06

0xdb1d,	// (0x000a0572) main_mobtv_programe_curr_pane_t1

0xdb2b,	// (0x000a0580) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbad,	// (0x000a2602) main_mobtv_programe_curr_pane_t

0xdb39,	// (0x000a058e) main_mobtv_programe_next_pane_t1

0xdb47,	// (0x000a059c) main_mobtv_programe_next_pane_t2

0xdb55,	// (0x000a05aa) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb2,	// (0x000a2607) main_mobtv_programe_next_pane_t

0xecf8,	// (0x000a174d) bg_popup_mobtv_noti_window_pane

0xdb63,	// (0x000a05b8) popup_mobtv_noti_window_g1

0xdb6b,	// (0x000a05c0) popup_mobtv_noti_window_t1

0xdb79,	// (0x000a05ce) popup_mobtv_noti_window_t2

0x0001,

0xfbb9,	// (0x000a260e) popup_mobtv_noti_window_t

0xa0b9,	// (0x0009cb0e) bg_popup_mobtv_noti_window_pane_g1

0x1131,	// (0x00093b86) sc_clock_pane

0x1131,	// (0x00093b86) main_fs_bigclock_pane

0x693d,	// (0x00099392) blid2_tripm_pane_t4_ParamLimits

0x693d,	// (0x00099392) blid2_tripm_pane_t4

0x72f0,	// (0x00099d45) sc_clock_pane_g1_ParamLimits

0x72f0,	// (0x00099d45) sc_clock_pane_g1

0x72fe,	// (0x00099d53) sc_clock_pane_t1_ParamLimits

0x72fe,	// (0x00099d53) sc_clock_pane_t1

0x7311,	// (0x00099d66) sc_clock_pane_t2_ParamLimits

0x7311,	// (0x00099d66) sc_clock_pane_t2

0x7323,	// (0x00099d78) sc_clock_pane_t3_ParamLimits

0x7323,	// (0x00099d78) sc_clock_pane_t3

0x0004,

0xfbbe,	// (0x000a2613) sc_clock_pane_t_ParamLimits

0xfbbe,	// (0x000a2613) sc_clock_pane_t

0x7f7e,	// (0x0009a9d3) main_fs_bigclock_indicator_pane_ParamLimits

0x7f7e,	// (0x0009a9d3) main_fs_bigclock_indicator_pane

0x73a6,	// (0x00099dfb) main_fs_bigclock_pane_g1_ParamLimits

0x73a6,	// (0x00099dfb) main_fs_bigclock_pane_g1

0x7f8a,	// (0x0009a9df) main_fs_bigclock_pane_t1_ParamLimits

0x7f8a,	// (0x0009a9df) main_fs_bigclock_pane_t1

0x7f9c,	// (0x0009a9f1) main_fs_bigclock_pane_t2_ParamLimits

0x7f9c,	// (0x0009a9f1) main_fs_bigclock_pane_t2

0x7fb0,	// (0x0009aa05) main_fs_bigclock_pane_t3_ParamLimits

0x7fb0,	// (0x0009aa05) main_fs_bigclock_pane_t3

0x0002,

0xfd4f,	// (0x000a27a4) main_fs_bigclock_pane_t_ParamLimits

0xfd4f,	// (0x000a27a4) main_fs_bigclock_pane_t

0xe752,	// (0x000a11a7) main_fs_bigclock_indicator_pane_g1

0xd898,	// (0x000a02ed) ncim_query_content_pane_g2_ParamLimits

0xd898,	// (0x000a02ed) ncim_query_content_pane_g2

0x0001,

0xfb4b,	// (0x000a25a0) ncim_query_content_pane_g_ParamLimits

0xfb4b,	// (0x000a25a0) ncim_query_content_pane_g

0x7337,	// (0x00099d8c) sc_clock_pane_t4_ParamLimits

0x7337,	// (0x00099d8c) sc_clock_pane_t4

0x3cf6,	// (0x0009674b) main_radioblah_pane

0x54ea,	// (0x00097f3f) cell_call4_button_pane_t1_copy1_ParamLimits

0x54ea,	// (0x00097f3f) cell_call4_button_pane_t1_copy1

0x6f7a,	// (0x000999cf) main_ncimui_pane_t1_ParamLimits

0x6f7a,	// (0x000999cf) main_ncimui_pane_t1

0x6f94,	// (0x000999e9) main_ncimui_pane_t2_ParamLimits

0x6f94,	// (0x000999e9) main_ncimui_pane_t2

0x0002,

0xfb44,	// (0x000a2599) main_ncimui_pane_t_ParamLimits

0xfb44,	// (0x000a2599) main_ncimui_pane_t

0xdcbf,	// (0x000a0714) main_radioblah_anim_pane_ParamLimits

0xdcbf,	// (0x000a0714) main_radioblah_anim_pane

0xdcd0,	// (0x000a0725) main_radioblah_info_pane_ParamLimits

0xdcd0,	// (0x000a0725) main_radioblah_info_pane

0xdce4,	// (0x000a0739) main_radioblah_pane_t1_ParamLimits

0xdce4,	// (0x000a0739) main_radioblah_pane_t1

0xdd00,	// (0x000a0755) main_radioblah_pane_t2_ParamLimits

0xdd00,	// (0x000a0755) main_radioblah_pane_t2

0x0003,

0xfbdf,	// (0x000a2634) main_radioblah_pane_t_ParamLimits

0xfbdf,	// (0x000a2634) main_radioblah_pane_t

0x73fc,	// (0x00099e51) main_radioblah_rocker_ctrl_pane_ParamLimits

0x73fc,	// (0x00099e51) main_radioblah_rocker_ctrl_pane

0xdd48,	// (0x000a079d) main_radioblah_info_pane_t1_ParamLimits

0xdd48,	// (0x000a079d) main_radioblah_info_pane_t1

0x7441,	// (0x00099e96) main_radioblah_info_pane_t2_ParamLimits

0x7441,	// (0x00099e96) main_radioblah_info_pane_t2

0x0003,

0xfbe8,	// (0x000a263d) main_radioblah_info_pane_t_ParamLimits

0xfbe8,	// (0x000a263d) main_radioblah_info_pane_t

0xa0b9,	// (0x0009cb0e) main_radioblah_rocker_ctrl_pane_g1

0x74f1,	// (0x00099f46) main_radioblah_rocker_ctrl_pane_g2

0x74f9,	// (0x00099f4e) main_radioblah_rocker_ctrl_pane_g3

0x7501,	// (0x00099f56) main_radioblah_rocker_ctrl_pane_g4

0x7509,	// (0x00099f5e) main_radioblah_rocker_ctrl_pane_g5

0x7511,	// (0x00099f66) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf1,	// (0x000a2646) main_radioblah_rocker_ctrl_pane_g

0x6f20,	// (0x00099975) main_cset_text2_pane_t1_copy1_ParamLimits

0x5575,	// (0x00097fca) cam4_image_uncrop_qvga_pane

0x56b6,	// (0x0009810b) vid4_image_uncrop_qcif_pane

0x6ad1,	// (0x00099526) cam6_image_uncrop_qvga_pane_ParamLimits

0x6ad1,	// (0x00099526) cam6_image_uncrop_qvga_pane

0xd566,	// (0x0009ffbb) vid6_image_uncrop_qcif_pane_ParamLimits

0xd566,	// (0x0009ffbb) vid6_image_uncrop_qcif_pane

0xecf8,	// (0x000a174d) bg_popup_preview_window_pane_cp03

0xd84a,	// (0x000a029f) list_cset_text2_pane

0xd852,	// (0x000a02a7) main_cset6_text2_pane_g1

0xd85a,	// (0x000a02af) main_cset6_text2_pane_t1

0x7519,	// (0x00099f6e) list_cset_text2_pane_t1_ParamLimits

0x7519,	// (0x00099f6e) list_cset_text2_pane_t1

0x3cf6,	// (0x0009674b) main_radioblah_pane_ParamLimits

0x7296,	// (0x00099ceb) main_mobtv_info_pane_t3_ParamLimits

0x7296,	// (0x00099ceb) main_mobtv_info_pane_t3

0x73ea,	// (0x00099e3f) main_radioblah_pane_g1

0x7415,	// (0x00099e6a) main_radioblah_info_pane_g1

0x7496,	// (0x00099eeb) main_radioblah_info_pane_t3_ParamLimits

0x7496,	// (0x00099eeb) main_radioblah_info_pane_t3

0x2d07,	// (0x0009575c) highlight_cell_cale_month_pane_ParamLimits

0x2d07,	// (0x0009575c) highlight_cell_cale_month_pane

0x1131,	// (0x00093b86) main_phob_fisheye_pane

0xc7ae,	// (0x0009f203) scroll_pane_cp0031_ParamLimits

0xc7ae,	// (0x0009f203) scroll_pane_cp0031

0xd674,	// (0x000a00c9) wait_bar_pane_cp08_ParamLimits

0x6ceb,	// (0x00099740) cset_list_set_pane_copy1_ParamLimits

0xdd82,	// (0x000a07d7) highlight_cell_cale_month_pane_g1

0x753a,	// (0x00099f8f) highlight_cell_cale_month_pane_t1

0xd2f8,	// (0x0009fd4d) list_gen_pane_cp01

0xce99,	// (0x0009f8ee) scroll_pane_01

0x7548,	// (0x00099f9d) list_single_double_fisheye_pane

0xdd8a,	// (0x000a07df) list_double_fisheye_pane_g1_ParamLimits

0xdd8a,	// (0x000a07df) list_double_fisheye_pane_g1

0xdd96,	// (0x000a07eb) list_double_fisheye_pane_g2_ParamLimits

0xdd96,	// (0x000a07eb) list_double_fisheye_pane_g2

0x7551,	// (0x00099fa6) list_double_fisheye_pane_g3_ParamLimits

0x7551,	// (0x00099fa6) list_double_fisheye_pane_g3

0x0004,

0xfbfe,	// (0x000a2653) list_double_fisheye_pane_g_ParamLimits

0xfbfe,	// (0x000a2653) list_double_fisheye_pane_g

0x755d,	// (0x00099fb2) list_double_fisheye_pane_t1_ParamLimits

0x755d,	// (0x00099fb2) list_double_fisheye_pane_t1

0x7578,	// (0x00099fcd) list_double_fisheye_pane_t2_ParamLimits

0x7578,	// (0x00099fcd) list_double_fisheye_pane_t2

0x0001,

0xfc09,	// (0x000a265e) list_double_fisheye_pane_t_ParamLimits

0xfc09,	// (0x000a265e) list_double_fisheye_pane_t

0x1131,	// (0x00093b86) main_call5_pane

0x735d,	// (0x00099db2) sc_swipe_pane_ParamLimits

0x735d,	// (0x00099db2) sc_swipe_pane

0x75a6,	// (0x00099ffb) call5_image_pane_ParamLimits

0x75a6,	// (0x00099ffb) call5_image_pane

0x75b6,	// (0x0009a00b) call5_swipe_1_pane_ParamLimits

0x75b6,	// (0x0009a00b) call5_swipe_1_pane

0x75c2,	// (0x0009a017) call5_swipe_2_pane_ParamLimits

0x75c2,	// (0x0009a017) call5_swipe_2_pane

0x75dc,	// (0x0009a031) popup_call5_audio_first_window_ParamLimits

0x75dc,	// (0x0009a031) popup_call5_audio_first_window

0x9e5f,	// (0x0009c8b4) call5_swipe_1_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) call5_swipe_1_pane_g1

0xdde2,	// (0x000a0837) call5_swipe_1_pane_g2_ParamLimits

0xdde2,	// (0x000a0837) call5_swipe_1_pane_g2

0x0001,

0xfc0e,	// (0x000a2663) call5_swipe_1_pane_g_ParamLimits

0xfc0e,	// (0x000a2663) call5_swipe_1_pane_g

0xddee,	// (0x000a0843) call5_swipe_1_pane_t1_ParamLimits

0xddee,	// (0x000a0843) call5_swipe_1_pane_t1

0x9e5f,	// (0x0009c8b4) call5_swipe_2_pane_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) call5_swipe_2_pane_g1

0xde03,	// (0x000a0858) call5_swipe_2_pane_g2_ParamLimits

0xde03,	// (0x000a0858) call5_swipe_2_pane_g2

0x0001,

0xfc13,	// (0x000a2668) call5_swipe_2_pane_g_ParamLimits

0xfc13,	// (0x000a2668) call5_swipe_2_pane_g

0xde0f,	// (0x000a0864) call5_swipe_2_pane_t1_ParamLimits

0xde0f,	// (0x000a0864) call5_swipe_2_pane_t1

0xde24,	// (0x000a0879) sc_swipe_pane_g1_ParamLimits

0xde24,	// (0x000a0879) sc_swipe_pane_g1

0xde31,	// (0x000a0886) sc_swipe_pane_g2_ParamLimits

0xde31,	// (0x000a0886) sc_swipe_pane_g2

0x0001,

0xfc18,	// (0x000a266d) sc_swipe_pane_g_ParamLimits

0xfc18,	// (0x000a266d) sc_swipe_pane_g

0xde3d,	// (0x000a0892) sc_swipe_pane_t1_ParamLimits

0xde3d,	// (0x000a0892) sc_swipe_pane_t1

0x1131,	// (0x00093b86) main_cmail_launcher_pane

0x75ea,	// (0x0009a03f) aid_size_cell_cmail_l_ParamLimits

0x75ea,	// (0x0009a03f) aid_size_cell_cmail_l

0x75f8,	// (0x0009a04d) grid_cmail_l_pane_ParamLimits

0x75f8,	// (0x0009a04d) grid_cmail_l_pane

0x7608,	// (0x0009a05d) cell_cmail_l_pane_ParamLimits

0x7608,	// (0x0009a05d) cell_cmail_l_pane

0xde52,	// (0x000a08a7) cell_cmail_l_pane_g1_ParamLimits

0xde52,	// (0x000a08a7) cell_cmail_l_pane_g1

0xde5e,	// (0x000a08b3) cell_cmail_l_pane_t1_ParamLimits

0xde5e,	// (0x000a08b3) cell_cmail_l_pane_t1

0xde74,	// (0x000a08c9) cell_cmail_l_pane_t2_ParamLimits

0xde74,	// (0x000a08c9) cell_cmail_l_pane_t2

0x0001,

0xfc1d,	// (0x000a2672) cell_cmail_l_pane_t_ParamLimits

0xfc1d,	// (0x000a2672) cell_cmail_l_pane_t

0xed22,	// (0x000a1777) grid_highlight_pane_cp018_ParamLimits

0xed22,	// (0x000a1777) grid_highlight_pane_cp018

0x0f88,	// (0x000939dd) main2_pane_ParamLimits

0x0f88,	// (0x000939dd) main2_pane

0x9f60,	// (0x0009c9b5) popup_sp_fs_action_menu_bg_pane_g1

0x9f68,	// (0x0009c9bd) popup_sp_fs_action_menu_bg_pane_g2

0x9f70,	// (0x0009c9c5) popup_sp_fs_action_menu_bg_pane_g3

0x9f78,	// (0x0009c9cd) popup_sp_fs_action_menu_bg_pane_g4

0x9f80,	// (0x0009c9d5) popup_sp_fs_action_menu_bg_pane_g5

0x9f88,	// (0x0009c9dd) popup_sp_fs_action_menu_bg_pane_g6

0x9f90,	// (0x0009c9e5) popup_sp_fs_action_menu_bg_pane_g7

0x9f98,	// (0x0009c9ed) popup_sp_fs_action_menu_bg_pane_g8

0x9fa0,	// (0x0009c9f5) popup_sp_fs_action_menu_bg_pane_g9

0x9fa8,	// (0x0009c9fd) popup_sp_fs_action_menu_bg_pane_g10

0x9fa8,	// (0x0009c9fd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000a1b5a) popup_sp_fs_action_menu_bg_pane_g

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000a1c08) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000a1c08) list_medium_line_x2_t3_g3_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g3_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t3_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g2_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t4_g4_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t3

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000a1c24) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000a1c24) list_medium_line_x2_t4_g4_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t2_g4_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g4_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g4_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000a1c08) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000a1c08) list_medium_line_x2_t2_g3_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g3_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g3_t

0x2f02,	// (0x00095957) main_sp_fs_list_pane_ParamLimits

0x2f02,	// (0x00095957) main_sp_fs_list_pane

0x2f0e,	// (0x00095963) sp_fs_scroll_pane_ParamLimits

0x2f0e,	// (0x00095963) sp_fs_scroll_pane

0xa5f4,	// (0x0009d049) list_medium_line_x2_t3_t1

0xa5f4,	// (0x0009d049) list_medium_line_x2_t3_t2

0xa5f4,	// (0x0009d049) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x000a1cd6) list_medium_line_x2_t3_t

0xa5f4,	// (0x0009d049) list_medium_line_x3_t4_t1

0xa5f4,	// (0x0009d049) list_medium_line_x3_t4_t2

0xa5f4,	// (0x0009d049) list_medium_line_x3_t4_t3

0xa5f4,	// (0x0009d049) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x000a1cdd) list_medium_line_x3_t4_t

0xa5f4,	// (0x0009d049) list_medium_line_x4_t5_t1

0xa5f4,	// (0x0009d049) list_medium_line_x4_t5_t2

0xa5f4,	// (0x0009d049) list_medium_line_x4_t5_t3

0xa5f4,	// (0x0009d049) list_medium_line_x4_t5_t4

0xa5f4,	// (0x0009d049) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x000a1ce6) list_medium_line_x4_t5_t

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000a1c1b) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000a1c1b) list_medium_line_t4_g4_g

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t2

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t3

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t4_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000a1c24) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000a1c24) list_medium_line_t4_g4_t

0x3001,	// (0x00095a56) chi_dic_find_pane_g1

0x3d12,	// (0x00096767) main_tport_pane

0xa5f4,	// (0x0009d049) list_medium_line_plain_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_t2_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_t2_g2_t

0xd301,	// (0x0009fd56) aid_sp_fs_list_icon_a_sm

0xe526,	// (0x000a0f7b) aid_sp_fs_list_icon_d

0xd309,	// (0x0009fd5e) aid_sp_fs_text_primary

0xee34,	// (0x000a1889) aid_sp_fs_text_secondary

0xecf8,	// (0x000a174d) list_medium_line

0xecf8,	// (0x000a174d) list_medium_line_g2

0xecf8,	// (0x000a174d) list_medium_line_g3

0xecf8,	// (0x000a174d) list_medium_line_plain

0xecf8,	// (0x000a174d) list_medium_line_plain_t2

0xecf8,	// (0x000a174d) list_medium_line_plain_t3

0xecf8,	// (0x000a174d) list_medium_line_right_icon

0xecf8,	// (0x000a174d) list_medium_line_right_iconx2

0xecf8,	// (0x000a174d) list_medium_line_t2

0xecf8,	// (0x000a174d) list_medium_line_t2_g2

0xecf8,	// (0x000a174d) list_medium_line_t2_g3

0xecf8,	// (0x000a174d) list_medium_line_t2_right_icon

0xecf8,	// (0x000a174d) list_medium_line_t2_right_iconx2

0xecf8,	// (0x000a174d) list_medium_line_t3

0xecf8,	// (0x000a174d) list_medium_line_t3_g2

0xecf8,	// (0x000a174d) list_medium_line_t3_g3

0xecf8,	// (0x000a174d) list_medium_line_t3_right_iconx2

0xecf8,	// (0x000a174d) list_medium_line_t4_g4

0xecf8,	// (0x000a174d) list_medium_line_x2

0xecf8,	// (0x000a174d) list_medium_line_x2_t2_g2

0xecf8,	// (0x000a174d) list_medium_line_x2_t2_g3

0xecf8,	// (0x000a174d) list_medium_line_x2_t2_g4

0xecf8,	// (0x000a174d) list_medium_line_x2_t3

0xecf8,	// (0x000a174d) list_medium_line_x2_t3_g2

0xecf8,	// (0x000a174d) list_medium_line_x2_t3_g3

0xecf8,	// (0x000a174d) list_medium_line_x2_t3_g4

0xecf8,	// (0x000a174d) list_medium_line_x2_t4_g2

0xecf8,	// (0x000a174d) list_medium_line_x2_t4_g4

0xecf8,	// (0x000a174d) list_medium_line_x3

0xecf8,	// (0x000a174d) list_medium_line_x3_t4

0xecf8,	// (0x000a174d) list_medium_line_x3_t4_g4

0xecf8,	// (0x000a174d) list_medium_line_x4_t4

0xecf8,	// (0x000a174d) list_medium_line_x4_t4_g7

0xecf8,	// (0x000a174d) list_medium_line_x4_t5

0x67c2,	// (0x00099217) list_single_fs_dyc_pane_ParamLimits

0x67c2,	// (0x00099217) list_single_fs_dyc_pane

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g4

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g5

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x4_t4_g7_g6

0x9e6d,	// (0x0009c8c2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9e6d,	// (0x0009c8c2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb25,	// (0x000a257a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb25,	// (0x000a257a) list_medium_line_x4_t4_g7_g

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x4_t4_g7_t3

0xa08b,	// (0x0009cae0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa08b,	// (0x0009cae0) list_medium_line_x4_t4_g7_t4

0xa08b,	// (0x0009cae0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa08b,	// (0x0009cae0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb34,	// (0x000a2589) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb34,	// (0x000a2589) list_medium_line_x4_t4_g7_t

0x6f03,	// (0x00099958) list_single_dyc_row_pane_ParamLimits

0x6f03,	// (0x00099958) list_single_dyc_row_pane

0x759a,	// (0x00099fef) call5_gesture_pane_ParamLimits

0x759a,	// (0x00099fef) call5_gesture_pane

0x75ce,	// (0x0009a023) call5_windows_pane_ParamLimits

0x75ce,	// (0x0009a023) call5_windows_pane

0x7621,	// (0x0009a076) call5_swipe_1_pane_cp_ParamLimits

0x7621,	// (0x0009a076) call5_swipe_1_pane_cp

0x762d,	// (0x0009a082) call5_swipe_2_pane_cp_ParamLimits

0x762d,	// (0x0009a082) call5_swipe_2_pane_cp

0xa083,	// (0x0009cad8) call5_image_pane_cp

0x7639,	// (0x0009a08e) popup_call5_audio_first_window_cp_ParamLimits

0x7639,	// (0x0009a08e) popup_call5_audio_first_window_cp

0xde24,	// (0x000a0879) call5_swipe_1_pane_g1_cp_ParamLimits

0xde24,	// (0x000a0879) call5_swipe_1_pane_g1_cp

0xde91,	// (0x000a08e6) call5_swipe_1_pane_g2_cp

0xde3d,	// (0x000a0892) call5_swipe_1_pane_t1_cp_ParamLimits

0xde3d,	// (0x000a0892) call5_swipe_1_pane_t1_cp

0xde24,	// (0x000a0879) call5_swipe_2_pane_g1_cp_ParamLimits

0xde24,	// (0x000a0879) call5_swipe_2_pane_g1_cp

0xde99,	// (0x000a08ee) call5_swipe_2_pane_g2_cp

0xdea1,	// (0x000a08f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xdea1,	// (0x000a08f6) call5_swipe_2_pane_t1_cp

0xed22,	// (0x000a1777) main_sp_fs_email_pane

0xdeb6,	// (0x000a090b) main_sp_fs_listscroll_pane_te

0x7647,	// (0x0009a09c) popup_sp_fs_action_menu_pane_ParamLimits

0x7647,	// (0x0009a09c) popup_sp_fs_action_menu_pane

0xa0b9,	// (0x0009cb0e) bg_sp_fs_ctrlbar_pane_g1

0xdebf,	// (0x000a0914) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdec8,	// (0x000a091d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbfce,	// (0x0009ea23) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa0b9,	// (0x0009cb0e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc22,	// (0x000a2677) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc02a,	// (0x0009ea7f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc02a,	// (0x0009ea7f) bg_sp_fs_ctrlbar_ddmenu_pane

0xded1,	// (0x000a0926) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xded1,	// (0x000a0926) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdedd,	// (0x000a0932) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdedd,	// (0x000a0932) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2b,	// (0x000a2680) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2b,	// (0x000a2680) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdee9,	// (0x000a093e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdee9,	// (0x000a093e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa0b9,	// (0x0009cb0e) list_medium_line_t2_right_icon_g1

0xa5f4,	// (0x0009d049) list_medium_line_t2_right_icon_t1

0xa5f4,	// (0x0009d049) list_medium_line_t2_right_icon_t2

0x0001,

0xfc30,	// (0x000a2685) list_medium_line_t2_right_icon_t

0xac76,	// (0x0009d6cb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xac76,	// (0x0009d6cb) bg_sp_fs_ctrlbar_pane

0x76ce,	// (0x0009a123) main_sp_fs_ctrlbar_button_pane_cp01

0x76d6,	// (0x0009a12b) main_sp_fs_ctrlbar_ddmenu_pane

0xdf3b,	// (0x000a0990) main_sp_fs_ctrlbar_pane_g1

0xdf47,	// (0x000a099c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc35,	// (0x000a268a) main_sp_fs_ctrlbar_pane_g

0x7712,	// (0x0009a167) main_sp_fs_ctrlbar_pane_t1

0x774d,	// (0x0009a1a2) main_sp_fs_ctrlbar_pane

0x7763,	// (0x0009a1b8) main_sp_fs_listscroll_pane_te_cp01

0x7774,	// (0x0009a1c9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7774,	// (0x0009a1c9) popup_sp_fs_action_menu_pane_cp01

0xed22,	// (0x000a1777) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xed22,	// (0x000a1777) bg_sp_fs_highlight_list_pane_cp01

0xdf6e,	// (0x000a09c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf6e,	// (0x000a09c3) sp_fs_action_menu_list_gene_pane_g1

0xdf7d,	// (0x000a09d2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf7d,	// (0x000a09d2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc43,	// (0x000a2698) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc43,	// (0x000a2698) sp_fs_action_menu_list_gene_pane_g

0xdf8a,	// (0x000a09df) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf8a,	// (0x000a09df) sp_fs_action_menu_list_gene_pane_t1

0xdfb0,	// (0x000a0a05) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdfb0,	// (0x000a0a05) sp_fs_action_menu_list_gene_pane

0xdfcf,	// (0x000a0a24) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfcf,	// (0x000a0a24) popup_sp_fs_action_menu_bg_pane

0xdfdd,	// (0x000a0a32) sp_fs_action_menu_list_pane_ParamLimits

0xdfdd,	// (0x000a0a32) sp_fs_action_menu_list_pane

0x7794,	// (0x0009a1e9) sp_fs_scroll_pane_cp01_ParamLimits

0x7794,	// (0x0009a1e9) sp_fs_scroll_pane_cp01

0xa5f4,	// (0x0009d049) list_medium_line_plain_t2_t1

0xa5f4,	// (0x0009d049) list_medium_line_plain_t2_t2

0x0001,

0xfc30,	// (0x000a2685) list_medium_line_plain_t2_t

0xa5f4,	// (0x0009d049) list_medium_line_plain_t3_t1

0xa5f4,	// (0x0009d049) list_medium_line_plain_t3_t2

0xa5f4,	// (0x0009d049) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x000a1cd6) list_medium_line_plain_t3_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t2_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_x2_t2_g2_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_x2_t4_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t3

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000a1c24) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000a1c24) list_medium_line_x2_t4_g2_t

0xa0b9,	// (0x0009cb0e) list_medium_line_t3_right_iconx2_g1

0xa0b9,	// (0x0009cb0e) list_medium_line_t3_right_iconx2_g2

0xa0b9,	// (0x0009cb0e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x000a1df7) list_medium_line_t3_right_iconx2_g

0xa5f4,	// (0x0009d049) list_medium_line_t3_right_iconx2_t1

0xa5f4,	// (0x0009d049) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc30,	// (0x000a2685) list_medium_line_t3_right_iconx2_t

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000a1c1b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000a1c1b) list_medium_line_x3_t4_g4_g

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t3

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000a1c24) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000a1c24) list_medium_line_x3_t4_g4_t

0x77ba,	// (0x0009a20f) list_single_dyc_row_text_pane_t1_ParamLimits

0x77ba,	// (0x0009a20f) list_single_dyc_row_text_pane_t1

0x77f1,	// (0x0009a246) list_single_dyc_row_text_pane_t2_ParamLimits

0x77f1,	// (0x0009a246) list_single_dyc_row_text_pane_t2

0xdffd,	// (0x000a0a52) list_single_dyc_row_text_pane_t3_ParamLimits

0xdffd,	// (0x000a0a52) list_single_dyc_row_text_pane_t3

0x0005,

0xfc48,	// (0x000a269d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc48,	// (0x000a269d) list_single_dyc_row_text_pane_t

0xe021,	// (0x000a0a76) list_single_dyc_row_pane_g1_ParamLimits

0xe021,	// (0x000a0a76) list_single_dyc_row_pane_g1

0xe02d,	// (0x000a0a82) list_single_dyc_row_pane_g2_ParamLimits

0xe02d,	// (0x000a0a82) list_single_dyc_row_pane_g2

0xe039,	// (0x000a0a8e) list_single_dyc_row_pane_g3_ParamLimits

0xe039,	// (0x000a0a8e) list_single_dyc_row_pane_g3

0xe045,	// (0x000a0a9a) list_single_dyc_row_pane_g4_ParamLimits

0xe045,	// (0x000a0a9a) list_single_dyc_row_pane_g4

0x0003,

0xfc55,	// (0x000a26aa) list_single_dyc_row_pane_g_ParamLimits

0xfc55,	// (0x000a26aa) list_single_dyc_row_pane_g

0xe051,	// (0x000a0aa6) list_single_dyc_row_text_pane_ParamLimits

0xe051,	// (0x000a0aa6) list_single_dyc_row_text_pane

0xecf8,	// (0x000a174d) bg_sp_fs_scroll_pane

0xe070,	// (0x000a0ac5) thumb_sp_fs_scroll_pane

0x9e5f,	// (0x0009c8b4) list_medium_line_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g1

0xa0d3,	// (0x0009cb28) list_medium_line_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_x2_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x3_g1

0xdfa2,	// (0x000a09f7) list_medium_line_x3_g2_ParamLimits

0xdfa2,	// (0x000a09f7) list_medium_line_x3_g2

0x0001,

0xfc5e,	// (0x000a26b3) list_medium_line_x3_g_ParamLimits

0xfc5e,	// (0x000a26b3) list_medium_line_x3_g

0xe079,	// (0x000a0ace) list_medium_line_x3_t1_ParamLimits

0xe079,	// (0x000a0ace) list_medium_line_x3_t1

0xe08d,	// (0x000a0ae2) thumb_sp_fs_scroll_pane_g1

0xe096,	// (0x000a0aeb) thumb_sp_fs_scroll_pane_g2

0xe09f,	// (0x000a0af4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x000a26b8) thumb_sp_fs_scroll_pane_g

0xe08d,	// (0x000a0ae2) bg_sp_fs_scroll_pane_g1

0xe096,	// (0x000a0aeb) bg_sp_fs_scroll_pane_g2

0xe09f,	// (0x000a0af4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x000a26b8) bg_sp_fs_scroll_pane_g

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g3

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000a1c1b) list_medium_line_x2_t3_g4_g

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t1

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t2

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_x2_t3_g4_t

0x9e5f,	// (0x0009c8b4) list_medium_line_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_g2_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g2_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g2_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000a1c16) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000a1c16) list_medium_line_t3_g2_g

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t2

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_g2_t

0xa0b9,	// (0x0009cb0e) list_medium_line_right_icon_g1

0xa5f4,	// (0x0009d049) list_medium_line_right_icon_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g1

0xa0d3,	// (0x0009cb28) list_medium_line_t2_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t2_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_t2_t

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g1

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t2

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_t

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000a1c08) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000a1c08) list_medium_line_g3_g

0xa0d3,	// (0x0009cb28) list_medium_line_g3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_g3_t1

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000a1c08) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000a1c08) list_medium_line_t2_g3_g

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g3_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g3_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x000a1c8b) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x000a1c8b) list_medium_line_t2_g3_t

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g1_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g1

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g2_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g2

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g3_ParamLimits

0x9e5f,	// (0x0009c8b4) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000a1c08) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000a1c08) list_medium_line_t3_g3_g

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t1_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t1

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t2_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t2

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t3_ParamLimits

0xa0d3,	// (0x0009cb28) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000a1c0f) list_medium_line_t3_g3_t

0xa0b9,	// (0x0009cb0e) list_medium_line_right_iconx2_g1

0xa0b9,	// (0x0009cb0e) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x000a1df2) list_medium_line_right_iconx2_g

0xa5f4,	// (0x0009d049) list_medium_line_right_iconx2_t1

0xa0b9,	// (0x0009cb0e) list_medium_line_t2_right_iconx2_g1

0xa0b9,	// (0x0009cb0e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x000a1df2) list_medium_line_t2_right_iconx2_g

0xa5f4,	// (0x0009d049) list_medium_line_t2_right_iconx2_t1

0xa5f4,	// (0x0009d049) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc30,	// (0x000a2685) list_medium_line_t2_right_iconx2_t

0xa5f4,	// (0x0009d049) list_medium_line_x4_t4_t1

0xa5f4,	// (0x0009d049) list_medium_line_x4_t4_t2

0xa5f4,	// (0x0009d049) list_medium_line_x4_t4_t3

0xa5f4,	// (0x0009d049) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x000a1cdd) list_medium_line_x4_t4_t

0x793e,	// (0x0009a393) tport_appsw_pane_ParamLimits

0x793e,	// (0x0009a393) tport_appsw_pane

0x794c,	// (0x0009a3a1) tport_contact_pane_ParamLimits

0x794c,	// (0x0009a3a1) tport_contact_pane

0x795c,	// (0x0009a3b1) tport_listscroll_pane_ParamLimits

0x795c,	// (0x0009a3b1) tport_listscroll_pane

0x796c,	// (0x0009a3c1) cell_tport_appsw_pane_ParamLimits

0x796c,	// (0x0009a3c1) cell_tport_appsw_pane

0x9e6d,	// (0x0009c8c2) tport_appsw_pane_g1_ParamLimits

0x9e6d,	// (0x0009c8c2) tport_appsw_pane_g1

0xe0a8,	// (0x000a0afd) tport_contact_pane_g1

0xe0b1,	// (0x000a0b06) tport_contact_pane_t1

0xe0bf,	// (0x000a0b14) tport_contact_pane_t2

0x0001,

0xfc6a,	// (0x000a26bf) tport_contact_pane_t

0xe0cd,	// (0x000a0b22) list_tport_pane

0xe0d6,	// (0x000a0b2b) scroll_pane_cp_030

0x799f,	// (0x0009a3f4) cell_tport_appsw_pane_g1

0x79af,	// (0x0009a404) cell_tport_appsw_pane_t1

0x79bd,	// (0x0009a412) grid_highlight_pane_cp019

0x79c5,	// (0x0009a41a) list_tport_double_graphic_pane_ParamLimits

0x79c5,	// (0x0009a41a) list_tport_double_graphic_pane

0xed22,	// (0x000a1777) list_highlight_pane_cp023_ParamLimits

0xed22,	// (0x000a1777) list_highlight_pane_cp023

0x79d6,	// (0x0009a42b) list_tport_double_graphic_pane_g1_ParamLimits

0x79d6,	// (0x0009a42b) list_tport_double_graphic_pane_g1

0x79e3,	// (0x0009a438) list_tport_double_graphic_pane_t1_ParamLimits

0x79e3,	// (0x0009a438) list_tport_double_graphic_pane_t1

0x79f8,	// (0x0009a44d) list_tport_double_graphic_pane_t2_ParamLimits

0x79f8,	// (0x0009a44d) list_tport_double_graphic_pane_t2

0x0001,

0xfc76,	// (0x000a26cb) list_tport_double_graphic_pane_t_ParamLimits

0xfc76,	// (0x000a26cb) list_tport_double_graphic_pane_t

0xecf8,	// (0x000a174d) main_cale_note_pane

0x591d,	// (0x00098372) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x591d,	// (0x00098372) cell_vitu2_function_top_wide_pane_cp01

0x72aa,	// (0x00099cff) wait_bar_pane_cp05_ParamLimits

0xed22,	// (0x000a1777) listscroll_cmail_pane

0xe0e7,	// (0x000a0b3c) list_cmail_pane

0x7a0a,	// (0x0009a45f) list_cmail_body_pane

0x7a32,	// (0x0009a487) list_single_cmail_header_caption_pane

0x7a61,	// (0x0009a4b6) list_single_cmail_header_detail_pane_ParamLimits

0x7a61,	// (0x0009a4b6) list_single_cmail_header_detail_pane

0xe0fe,	// (0x000a0b53) list_single_cmail_header_caption_pane_t1

0x7a9e,	// (0x0009a4f3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7a9e,	// (0x0009a4f3) list_single_cmail_header_detail_pane_g1

0xe536,	// (0x000a0f8b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe536,	// (0x000a0f8b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7b,	// (0x000a26d0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7b,	// (0x000a26d0) list_single_cmail_header_detail_pane_g

0x7ab4,	// (0x0009a509) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7ab4,	// (0x0009a509) list_single_cmail_header_detail_pane_t1

0x7af0,	// (0x0009a545) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7af0,	// (0x0009a545) list_single_cmail_header_editor_pane_bg

0xda7a,	// (0x000a04cf) list_cmail_body_pane_g1

0xe146,	// (0x000a0b9b) list_cmail_body_pane_t1

0xcd6d,	// (0x0009f7c2) list_single_cmail_header_editor_pane_bg_g1

0xa2de,	// (0x0009cd33) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd7d,	// (0x0009f7d2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd75,	// (0x0009f7ca) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcfc5,	// (0x0009fa1a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd9d,	// (0x0009f7f2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd8d,	// (0x0009f7e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd95,	// (0x0009f7ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa2be,	// (0x0009cd13) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7b07,	// (0x0009a55c) calenote_gesture_pane_ParamLimits

0x7b07,	// (0x0009a55c) calenote_gesture_pane

0x7b21,	// (0x0009a576) calenote_window_pane_ParamLimits

0x7b21,	// (0x0009a576) calenote_window_pane

0xe154,	// (0x000a0ba9) popup_note_window_cp01

0x7b39,	// (0x0009a58e) calenote_swipe_1_pane_ParamLimits

0x7b39,	// (0x0009a58e) calenote_swipe_1_pane

0x762d,	// (0x0009a082) calenote_swipe_2_pane_ParamLimits

0x762d,	// (0x0009a082) calenote_swipe_2_pane

0xde24,	// (0x000a0879) calenote_swipe_1_pane_g1_ParamLimits

0xde24,	// (0x000a0879) calenote_swipe_1_pane_g1

0xde31,	// (0x000a0886) calenote_swipe_1_pane_g2_ParamLimits

0xde31,	// (0x000a0886) calenote_swipe_1_pane_g2

0x0001,

0xfc18,	// (0x000a266d) calenote_swipe_1_pane_g_ParamLimits

0xfc18,	// (0x000a266d) calenote_swipe_1_pane_g

0xe166,	// (0x000a0bbb) calenote_swipe_1_pane_t1_ParamLimits

0xe166,	// (0x000a0bbb) calenote_swipe_1_pane_t1

0xde24,	// (0x000a0879) calenote_swipe_2_pane_g1_ParamLimits

0xde24,	// (0x000a0879) calenote_swipe_2_pane_g1

0xe185,	// (0x000a0bda) calenote_swipe_2_pane_g2_ParamLimits

0xe185,	// (0x000a0bda) calenote_swipe_2_pane_g2

0x0001,

0xfc87,	// (0x000a26dc) calenote_swipe_2_pane_g_ParamLimits

0xfc87,	// (0x000a26dc) calenote_swipe_2_pane_g

0xe191,	// (0x000a0be6) calenote_swipe_2_pane_t1_ParamLimits

0xe191,	// (0x000a0be6) calenote_swipe_2_pane_t1

0xecf8,	// (0x000a174d) main_mup_navstr_pane

0x4781,	// (0x000971d6) main_mup3_pane_t7_ParamLimits

0x4781,	// (0x000971d6) main_mup3_pane_t7

0x4faa,	// (0x000979ff) main_mp4_pane_g6_ParamLimits

0x4faa,	// (0x000979ff) main_mp4_pane_g6

0x5348,	// (0x00097d9d) main_image3_pane_t4_ParamLimits

0x5348,	// (0x00097d9d) main_image3_pane_t4

0x7b4c,	// (0x0009a5a1) popup_navstr_preview_pane_ParamLimits

0x7b4c,	// (0x0009a5a1) popup_navstr_preview_pane

0x7b58,	// (0x0009a5ad) scroll_navstr_pane_ParamLimits

0x7b58,	// (0x0009a5ad) scroll_navstr_pane

0xecf8,	// (0x000a174d) bg_popup_preview_window_pane_cp04

0xe1b8,	// (0x000a0c0d) popup_navstr_preview_pane_t1

0x7b64,	// (0x0009a5b9) scroll_navstr_pane_g1_ParamLimits

0x7b64,	// (0x0009a5b9) scroll_navstr_pane_g1

0x7b71,	// (0x0009a5c6) scroll_navstr_pane_t1_ParamLimits

0x7b71,	// (0x0009a5c6) scroll_navstr_pane_t1

0xe15d,	// (0x000a0bb2) bg_button_pane_cp014

0xe15d,	// (0x000a0bb2) bg_button_pane_cp030

0xddaa,	// (0x000a07ff) list_double_fisheye_pane_g4_ParamLimits

0xddaa,	// (0x000a07ff) list_double_fisheye_pane_g4

0xddd1,	// (0x000a0826) list_double_fisheye_pane_g5_ParamLimits

0xddd1,	// (0x000a0826) list_double_fisheye_pane_g5

0xb26b,	// (0x0009dcc0) sp_fs_scroll_pane_cp03

0xdf3b,	// (0x000a0990) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf47,	// (0x000a099c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc35,	// (0x000a268a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7712,	// (0x0009a167) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe0f6,	// (0x000a0b4b) sp_fs_scroll_pane_cp02

0x9fcb,	// (0x0009ca20) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9fcb,	// (0x0009ca20) popup_sp_fs_calendar_preview_list_single_pane

0xecf8,	// (0x000a174d) main_cam6_pano_pane

0x3cf6,	// (0x0009674b) main_mup3_pane_ParamLimits

0xecf8,	// (0x000a174d) main_phacti_pane

0x717f,	// (0x00099bd4) bg_button_pane_cp11

0x7197,	// (0x00099bec) main_mobtv_info_pane_g2_ParamLimits

0x7197,	// (0x00099bec) main_mobtv_info_pane_g2

0x0001,

0xfb95,	// (0x000a25ea) main_mobtv_info_pane_g_ParamLimits

0xfb95,	// (0x000a25ea) main_mobtv_info_pane_g

0x7349,	// (0x00099d9e) sc_clock_pane_t5_ParamLimits

0x7349,	// (0x00099d9e) sc_clock_pane_t5

0x73ea,	// (0x00099e3f) main_radioblah_pane_g1_ParamLimits

0xdd18,	// (0x000a076d) main_radioblah_pane_t3_ParamLimits

0xdd18,	// (0x000a076d) main_radioblah_pane_t3

0xdd30,	// (0x000a0785) main_radioblah_pane_t4_ParamLimits

0xdd30,	// (0x000a0785) main_radioblah_pane_t4

0x7408,	// (0x00099e5d) main_radioblah_text_pane_ParamLimits

0x7408,	// (0x00099e5d) main_radioblah_text_pane

0x7415,	// (0x00099e6a) main_radioblah_info_pane_g1_ParamLimits

0x74aa,	// (0x00099eff) main_radioblah_info_pane_t4_ParamLimits

0x74aa,	// (0x00099eff) main_radioblah_info_pane_t4

0xed22,	// (0x000a1777) main_sp_fs_calendar_pane

0x7b83,	// (0x0009a5d8) main_phacti_pane_g1

0x7b8b,	// (0x0009a5e0) phacti_note_pane_ParamLimits

0x7b8b,	// (0x0009a5e0) phacti_note_pane

0xe1cf,	// (0x000a0c24) phacti_term_pane_ParamLimits

0xe1cf,	// (0x000a0c24) phacti_term_pane

0xe1e4,	// (0x000a0c39) phacti_note_pane_t1_ParamLimits

0xe1e4,	// (0x000a0c39) phacti_note_pane_t1

0xe1fb,	// (0x000a0c50) phacti_term_pane_g1

0xe203,	// (0x000a0c58) phacti_term_pane_t1_ParamLimits

0xe203,	// (0x000a0c58) phacti_term_pane_t1

0xe22d,	// (0x000a0c82) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe235,	// (0x000a0c8a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc91,	// (0x000a26e6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe23d,	// (0x000a0c92) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe23d,	// (0x000a0c92) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe253,	// (0x000a0ca8) aid_popup_sp_fs_bg_corner_pane

0xa0b9,	// (0x0009cb0e) popup_sp_fs_calendar_preview_bg_pane_g1

0xecf8,	// (0x000a174d) popup_sp_fs_calendar_preview_bg_pane

0xe25b,	// (0x000a0cb0) popup_sp_fs_calendar_preview_list_pane

0xac76,	// (0x0009d6cb) bg_main_sp_fs_cale_pane_ParamLimits

0xac76,	// (0x0009d6cb) bg_main_sp_fs_cale_pane

0xe26c,	// (0x000a0cc1) listscroll_cale_mrui_pane_ParamLimits

0xe26c,	// (0x000a0cc1) listscroll_cale_mrui_pane

0xe281,	// (0x000a0cd6) listscroll_sp_fs_schedule_track_pane

0xe28a,	// (0x000a0cdf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe28a,	// (0x000a0cdf) main_sp_fs_ctrlbar_pane_cp01

0xe29d,	// (0x000a0cf2) main_sp_fs_ribbon_pane

0xe2a5,	// (0x000a0cfa) popup_sp_fs_cale_preview_window

0x7bee,	// (0x0009a643) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7bee,	// (0x0009a643) list_single_sp_fs_schedule_track_pane

0x9e51,	// (0x0009c8a6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9e51,	// (0x0009c8a6) bg_sp_fs_highlight_list_pane_cp03

0x7c14,	// (0x0009a669) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7c14,	// (0x0009a669) list_single_sp_fs_schedule_track_pane_g1

0x7c20,	// (0x0009a675) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7c20,	// (0x0009a675) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc96,	// (0x000a26eb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc96,	// (0x000a26eb) list_single_sp_fs_schedule_track_pane_g

0x7c2c,	// (0x0009a681) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7c2c,	// (0x0009a681) list_single_sp_fs_schedule_track_pane_t1

0x7c44,	// (0x0009a699) sp_fs_schedule_track_pane_ParamLimits

0x7c44,	// (0x0009a699) sp_fs_schedule_track_pane

0xe2b7,	// (0x000a0d0c) sp_fs_schedule_track_pane_g1

0xe2bf,	// (0x000a0d14) sp_fs_schedule_track_pane_g2

0xe2c7,	// (0x000a0d1c) sp_fs_schedule_track_pane_g3

0xe2cf,	// (0x000a0d24) sp_fs_schedule_track_pane_g4

0xe2d7,	// (0x000a0d2c) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9b,	// (0x000a26f0) sp_fs_schedule_track_pane_g

0xcd6d,	// (0x0009f7c2) bg_sp_fs_schedule_viewer_highlight_g1

0xa2de,	// (0x0009cd33) bg_sp_fs_schedule_viewer_highlight_g2

0xcd75,	// (0x0009f7ca) bg_sp_fs_schedule_viewer_highlight_g3

0xcd7d,	// (0x0009f7d2) bg_sp_fs_schedule_viewer_highlight_g4

0xcfc5,	// (0x0009fa1a) bg_sp_fs_schedule_viewer_highlight_g5

0xcd8d,	// (0x0009f7e2) bg_sp_fs_schedule_viewer_highlight_g6

0xcd95,	// (0x0009f7ea) bg_sp_fs_schedule_viewer_highlight_g7

0xcd9d,	// (0x0009f7f2) bg_sp_fs_schedule_viewer_highlight_g8

0xa2be,	// (0x0009cd13) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca6,	// (0x000a26fb) bg_sp_fs_schedule_viewer_highlight_g

0xecf8,	// (0x000a174d) bg_main_sp_fs_ribbon_pane

0x7c54,	// (0x0009a6a9) main_sp_fs_ribbon_pane_g1

0xe2df,	// (0x000a0d34) main_sp_fs_ribbon_pane_t1

0x7c5d,	// (0x0009a6b2) main_sp_fs_ribbon_pane_t2

0xe2ee,	// (0x000a0d43) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb9,	// (0x000a270e) main_sp_fs_ribbon_pane_t

0xe2fd,	// (0x000a0d52) main_sp_fs_ribbon_scheduler_pane

0xe305,	// (0x000a0d5a) bg_main_sp_fs_ribbon_pane_g1

0xe30e,	// (0x000a0d63) bg_main_sp_fs_ribbon_pane_g2

0xe317,	// (0x000a0d6c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc0,	// (0x000a2715) bg_main_sp_fs_ribbon_pane_g

0xe31f,	// (0x000a0d74) main_sp_fs_ribbon_scheduler_pane_g1

0xe328,	// (0x000a0d7d) main_sp_fs_ribbon_scheduler_pane_g2

0xe331,	// (0x000a0d86) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc7,	// (0x000a271c) main_sp_fs_ribbon_scheduler_pane_g

0xe33a,	// (0x000a0d8f) list_cale_mrui_pane

0x7c6c,	// (0x0009a6c1) sp_fs_scroll_pane_cp07_ParamLimits

0x7c6c,	// (0x0009a6c1) sp_fs_scroll_pane_cp07

0x7c88,	// (0x0009a6dd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7c88,	// (0x0009a6dd) bg_sp_fs_schedule_viewer_highlight

0xe347,	// (0x000a0d9c) list_single_sp_fs_schedule_track_pane_cp01

0xe34f,	// (0x000a0da4) list_sp_fs_schedule_track_pane

0xe357,	// (0x000a0dac) sp_fs_scroll_pane_cp06_ParamLimits

0xe357,	// (0x000a0dac) sp_fs_scroll_pane_cp06

0xa0b9,	// (0x0009cb0e) bgmain_sp_fs_calendar_pane_g1

0x7c95,	// (0x0009a6ea) list_single_cale_mrui_pane_ParamLimits

0x7c95,	// (0x0009a6ea) list_single_cale_mrui_pane

0xe369,	// (0x000a0dbe) list_single_cale_mrui_row_pane_ParamLimits

0xe369,	// (0x000a0dbe) list_single_cale_mrui_row_pane

0xe376,	// (0x000a0dcb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe376,	// (0x000a0dcb) list_single_cale_mrui_row_pane_g1

0xe3bb,	// (0x000a0e10) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3bb,	// (0x000a0e10) list_single_cale_mrui_row_pane_t1

0x7cc3,	// (0x0009a718) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7cc3,	// (0x0009a718) list_single_cale_mrui_row_pane_t2

0xe3cd,	// (0x000a0e22) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3cd,	// (0x000a0e22) list_single_cale_mrui_row_pane_t3

0xe3fc,	// (0x000a0e51) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3fc,	// (0x000a0e51) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd5,	// (0x000a272a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd5,	// (0x000a272a) list_single_cale_mrui_row_pane_t

0x7d29,	// (0x0009a77e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7d29,	// (0x0009a77e) list_single_cmail_header_editor_pane_bg_cp01

0x7d51,	// (0x0009a7a6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7d51,	// (0x0009a7a6) list_single_cmail_header_editor_pane_bg_cp02

0x7d6d,	// (0x0009a7c2) main_radioblah_text_pane_t1_ParamLimits

0x7d6d,	// (0x0009a7c2) main_radioblah_text_pane_t1

0xe42b,	// (0x000a0e80) cam6_indi_pane_cp01

0xe433,	// (0x000a0e88) cam6_mode_pane_cp01

0xe43b,	// (0x000a0e90) cam6_pano_pane

0xe444,	// (0x000a0e99) cam6_zoom_pane_cp01

0xe44c,	// (0x000a0ea1) cam6_pano_image_pane

0xe457,	// (0x000a0eac) cam6_pano_pane_g1

0xda7a,	// (0x000a04cf) cam6_pano_pane_g2

0xe460,	// (0x000a0eb5) cam6_pano_pane_g3

0xe469,	// (0x000a0ebe) cam6_pano_pane_g4

0xca29,	// (0x0009f47e) cam6_pano_pane_g5

0xe472,	// (0x000a0ec7) cam6_pano_pane_g6

0xe47c,	// (0x000a0ed1) cam6_pano_pane_g7

0xe484,	// (0x000a0ed9) cam6_pano_pane_g8

0xe48d,	// (0x000a0ee2) cam6_pano_pane_g9

0x0008,

0xfcde,	// (0x000a2733) cam6_pano_pane_g

0xecf8,	// (0x000a174d) main_browser_tag_pane

0xe1b0,	// (0x000a0c05) grid_navstr_albumart_pane

0xe498,	// (0x000a0eed) cell_navstr_albumart_pane_ParamLimits

0xe498,	// (0x000a0eed) cell_navstr_albumart_pane

0xe4b8,	// (0x000a0f0d) cell_navstr_albumart_pane_g1

0xbe55,	// (0x0009e8aa) cell_navstr_albumart_pane_g2

0xbe65,	// (0x0009e8ba) cell_navstr_albumart_pane_g3

0xbe5d,	// (0x0009e8b2) cell_navstr_albumart_pane_g4

0x0003,

0xfcf1,	// (0x000a2746) cell_navstr_albumart_pane_g

0x7d88,	// (0x0009a7dd) bt_list_pane_ParamLimits

0x7d88,	// (0x0009a7dd) bt_list_pane

0x7da9,	// (0x0009a7fe) bt_list_pane_t1

0x7db8,	// (0x0009a80d) bt_list_pane_t2

0x0001,

0xfcfa,	// (0x000a274f) bt_list_pane_t

0xecf8,	// (0x000a174d) main_cale_prevew_pane

0x7dc7,	// (0x0009a81c) popup_cale_preview_window_ParamLimits

0x7dc7,	// (0x0009a81c) popup_cale_preview_window

0xed22,	// (0x000a1777) bg_popup_preview_window_pane_cp05_ParamLimits

0xed22,	// (0x000a1777) bg_popup_preview_window_pane_cp05

0xe4c0,	// (0x000a0f15) list_cale_preview_pane_ParamLimits

0xe4c0,	// (0x000a0f15) list_cale_preview_pane

0x7de0,	// (0x0009a835) list_double_cale_preview_pane_ParamLimits

0x7de0,	// (0x0009a835) list_double_cale_preview_pane

0x7df2,	// (0x0009a847) list_single_cale_preview_pane_ParamLimits

0x7df2,	// (0x0009a847) list_single_cale_preview_pane

0x7e06,	// (0x0009a85b) list_single_cale_preview_pane_g1

0x7e0e,	// (0x0009a863) list_single_cale_preview_pane_t1_ParamLimits

0x7e0e,	// (0x0009a863) list_single_cale_preview_pane_t1

0x7e23,	// (0x0009a878) list_double_cale_preview_pane_g1

0x7e2b,	// (0x0009a880) list_double_cale_preview_pane_t1_ParamLimits

0x7e2b,	// (0x0009a880) list_double_cale_preview_pane_t1

0x7e40,	// (0x0009a895) list_double_cale_preview_pane_t2_ParamLimits

0x7e40,	// (0x0009a895) list_double_cale_preview_pane_t2

0x0001,

0xfcff,	// (0x000a2754) list_double_cale_preview_pane_t_ParamLimits

0xfcff,	// (0x000a2754) list_double_cale_preview_pane_t

0xecf8,	// (0x000a174d) main_ezdial_pane

0xed22,	// (0x000a1777) main_sp_fs_email_pane_ParamLimits

0x768b,	// (0x0009a0e0) cmail_ddmenu_btn01_pane_ParamLimits

0x768b,	// (0x0009a0e0) cmail_ddmenu_btn01_pane

0x76a0,	// (0x0009a0f5) cmail_ddmenu_btn02_pane_ParamLimits

0x76a0,	// (0x0009a0f5) cmail_ddmenu_btn02_pane

0x76b8,	// (0x0009a10d) cmail_ddmenu_btn03_pane_ParamLimits

0x76b8,	// (0x0009a10d) cmail_ddmenu_btn03_pane

0x774d,	// (0x0009a1a2) main_sp_fs_ctrlbar_pane_ParamLimits

0x7763,	// (0x0009a1b8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7a0a,	// (0x0009a45f) list_cmail_body_pane_ParamLimits

0xe10c,	// (0x000a0b61) bg_button_pane_cp12

0xe115,	// (0x000a0b6a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe115,	// (0x000a0b6a) list_single_cmail_header_detail_pane_g3

0xe122,	// (0x000a0b77) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe122,	// (0x000a0b77) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc82,	// (0x000a26d7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc82,	// (0x000a26d7) list_single_cmail_header_detail_pane_t

0xe218,	// (0x000a0c6d) phacti_term_pane_t2_ParamLimits

0xe218,	// (0x000a0c6d) phacti_term_pane_t2

0x0001,

0xfc8c,	// (0x000a26e1) phacti_term_pane_t_ParamLimits

0xfc8c,	// (0x000a26e1) phacti_term_pane_t

0xe4cc,	// (0x000a0f21) aid_size_list_single_double

0x7e58,	// (0x0009a8ad) popup_ezdial_listscroll_window

0x7e7c,	// (0x0009a8d1) popup_number_entry_window_cp01

0xa083,	// (0x0009cad8) bg_popup_call_pane_cp09

0xe4d8,	// (0x000a0f2d) ezdial_list_pane

0xe4e0,	// (0x000a0f35) scroll_pane_cp23

0xc02a,	// (0x0009ea7f) bg_button_pane_cp028_ParamLimits

0xc02a,	// (0x0009ea7f) bg_button_pane_cp028

0x7e8a,	// (0x0009a8df) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7e8a,	// (0x0009a8df) cmail_ddmenu_btn01_pane_g1

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd04,	// (0x000a2759) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd04,	// (0x000a2759) cmail_ddmenu_btn01_pane_g

0xe4e8,	// (0x000a0f3d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe4e8,	// (0x000a0f3d) cmail_ddmenu_btn01_pane_t1

0xac76,	// (0x0009d6cb) bg_button_pane_cp029_ParamLimits

0xac76,	// (0x0009d6cb) bg_button_pane_cp029

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn02_pane_g1

0x7eb2,	// (0x0009a907) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7eb2,	// (0x0009a907) cmail_ddmenu_btn02_pane_t1

0x9e51,	// (0x0009c8a6) bg_button_pane_cp031_ParamLimits

0x9e51,	// (0x0009c8a6) bg_button_pane_cp031

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7e9a,	// (0x0009a8ef) cmail_ddmenu_btn03_pane_g1

0x7eb2,	// (0x0009a907) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7eb2,	// (0x0009a907) cmail_ddmenu_btn03_pane_t1

0x51e5,	// (0x00097c3a) cell_dialer2_keypad_pane_t1_ParamLimits

0x51ff,	// (0x00097c54) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x51ff,	// (0x00097c54) cell_dialer2_keypad_pane_t1_copy1

0x6fc0,	// (0x00099a15) ncimui_group_button_pane

0xed22,	// (0x000a1777) main_sp_fs_calendar_pane_ParamLimits

0x7a32,	// (0x0009a487) list_single_cmail_header_caption_pane_ParamLimits

0xe263,	// (0x000a0cb8) aid_recal_txt_sm_pane

0xecf8,	// (0x000a174d) mian_recal_day_pane

0xe2a5,	// (0x000a0cfa) popup_sp_fs_cale_preview_window_ParamLimits

0xe4fd,	// (0x000a0f52) list_recal_day_pane

0xe55b,	// (0x000a0fb0) list_single_recal_day_pane_ParamLimits

0xe55b,	// (0x000a0fb0) list_single_recal_day_pane

0xe56d,	// (0x000a0fc2) list_single_recal_day_pane_g1_ParamLimits

0xe56d,	// (0x000a0fc2) list_single_recal_day_pane_g1

0xe579,	// (0x000a0fce) list_single_recal_day_pane_g2_ParamLimits

0xe579,	// (0x000a0fce) list_single_recal_day_pane_g2

0xe585,	// (0x000a0fda) list_single_recal_day_pane_g3_ParamLimits

0xe585,	// (0x000a0fda) list_single_recal_day_pane_g3

0x7ed6,	// (0x0009a92b) list_single_recal_day_pane_g4_ParamLimits

0x7ed6,	// (0x0009a92b) list_single_recal_day_pane_g4

0xe591,	// (0x000a0fe6) list_single_recal_day_pane_g5_ParamLimits

0xe591,	// (0x000a0fe6) list_single_recal_day_pane_g5

0xe59d,	// (0x000a0ff2) list_single_recal_day_pane_g6_ParamLimits

0xe59d,	// (0x000a0ff2) list_single_recal_day_pane_g6

0x0004,

0xfd13,	// (0x000a2768) list_single_recal_day_pane_g_ParamLimits

0xfd13,	// (0x000a2768) list_single_recal_day_pane_g

0xe5b1,	// (0x000a1006) list_single_recal_day_pane_t1

0xe5c3,	// (0x000a1018) list_single_recal_day_pane_t2

0x0001,

0xfd1e,	// (0x000a2773) list_single_recal_day_pane_t

0x7eee,	// (0x0009a943) ncimui_query_button_pane_ParamLimits

0x7eee,	// (0x0009a943) ncimui_query_button_pane

0x7efe,	// (0x0009a953) ncimui_query_button_pane_t1_ParamLimits

0x7efe,	// (0x0009a953) ncimui_query_button_pane_t1

0xe5d5,	// (0x000a102a) ncimui_query_button_pane_t2_ParamLimits

0xe5d5,	// (0x000a102a) ncimui_query_button_pane_t2

0x0001,

0xfd23,	// (0x000a2778) ncimui_query_button_pane_t_ParamLimits

0xfd23,	// (0x000a2778) ncimui_query_button_pane_t

0x7f11,	// (0x0009a966) query_button_pane_ParamLimits

0x7f11,	// (0x0009a966) query_button_pane

0xecf8,	// (0x000a174d) bg_button_pane_cp0028

0xe5e8,	// (0x000a103d) query_button_pane_t1

0x3d12,	// (0x00096767) main_tport_pane_ParamLimits

0x7914,	// (0x0009a369) bg_popup_window_pane_cp01_ParamLimits

0x7914,	// (0x0009a369) bg_popup_window_pane_cp01

0x7922,	// (0x0009a377) heading_pane_cp08_ParamLimits

0x7922,	// (0x0009a377) heading_pane_cp08

0x7930,	// (0x0009a385) heading_pane_cp07_ParamLimits

0x7930,	// (0x0009a385) heading_pane_cp07

0x799f,	// (0x0009a3f4) cell_tport_appsw_pane_g2

0x0002,

0xfc6f,	// (0x000a26c4) cell_tport_appsw_pane_g

0xacd2,	// (0x0009d727) input_candi_list_open_g1

0xa4a1,	// (0x0009cef6) list_cale_time_pane_g6_ParamLimits

0xa4a1,	// (0x0009cef6) list_cale_time_pane_g6

0x420c,	// (0x00096c61) aid_size_touch_calib_1_ParamLimits

0x420c,	// (0x00096c61) aid_size_touch_calib_1

0x4218,	// (0x00096c6d) aid_size_touch_calib_2_ParamLimits

0x4218,	// (0x00096c6d) aid_size_touch_calib_2

0x4226,	// (0x00096c7b) aid_size_touch_calib_3_ParamLimits

0x4226,	// (0x00096c7b) aid_size_touch_calib_3

0x4236,	// (0x00096c8b) aid_size_touch_calib_4_ParamLimits

0x4236,	// (0x00096c8b) aid_size_touch_calib_4

0x4244,	// (0x00096c99) main_touch_calib_button_group_pane_ParamLimits

0x4244,	// (0x00096c99) main_touch_calib_button_group_pane

0x4252,	// (0x00096ca7) main_touch_calib_pane_g1_ParamLimits

0x425e,	// (0x00096cb3) main_touch_calib_pane_g2_ParamLimits

0x426a,	// (0x00096cbf) main_touch_calib_pane_g3_ParamLimits

0x4276,	// (0x00096ccb) main_touch_calib_pane_g4_ParamLimits

0xf6b1,	// (0x000a2106) main_touch_calib_pane_g_ParamLimits

0x4282,	// (0x00096cd7) main_touch_calib_pane_t1_ParamLimits

0x429b,	// (0x00096cf0) main_touch_calib_pane_t2_ParamLimits

0x42b4,	// (0x00096d09) main_touch_calib_pane_t3_ParamLimits

0x42ca,	// (0x00096d1f) main_touch_calib_pane_t4_ParamLimits

0x42e0,	// (0x00096d35) main_touch_calib_pane_t5_ParamLimits

0xf6ba,	// (0x000a210f) main_touch_calib_pane_t_ParamLimits

0xc7d2,	// (0x0009f227) list_single_fp_cale_pane_g3_ParamLimits

0xc7d2,	// (0x0009f227) list_single_fp_cale_pane_g3

0x3cf6,	// (0x0009674b) bg_button_pane_cp012_ParamLimits

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp03_ParamLimits

0x60df,	// (0x00098b34) cell_vitu2_function_top_pane_g1_ParamLimits

0x3cf6,	// (0x0009674b) bg_vkb2_func_pane_cp04_ParamLimits

0x6f48,	// (0x0009999d) main_ncimui_button_group_pane_ParamLimits

0x6f48,	// (0x0009999d) main_ncimui_button_group_pane

0x6fae,	// (0x00099a03) main_ncimui_pane_t3_ParamLimits

0x6fae,	// (0x00099a03) main_ncimui_pane_t3

0xe1c6,	// (0x000a0c1b) phacti_button_group_pane

0xe4cc,	// (0x000a0f21) aid_size_list_single_double_ParamLimits

0x7e58,	// (0x0009a8ad) popup_ezdial_listscroll_window_ParamLimits

0x7e7c,	// (0x0009a8d1) popup_number_entry_window_cp01_ParamLimits

0x7f1e,	// (0x0009a973) phacti_button_pane_ParamLimits

0x7f1e,	// (0x0009a973) phacti_button_pane

0xecf8,	// (0x000a174d) bg_button_pane_cp14

0xe629,	// (0x000a107e) phacti_button_pane_t1

0x7f2f,	// (0x0009a984) main_touch_calib_button_pane_ParamLimits

0x7f2f,	// (0x0009a984) main_touch_calib_button_pane

0x9ed1,	// (0x0009c926) bg_button_pane_cp18_ParamLimits

0x9ed1,	// (0x0009c926) bg_button_pane_cp18

0xe637,	// (0x000a108c) main_touch_calib_button_pane_t1_ParamLimits

0xe637,	// (0x000a108c) main_touch_calib_button_pane_t1

0xe64d,	// (0x000a10a2) main_touch_calib_button_pane_t2_ParamLimits

0xe64d,	// (0x000a10a2) main_touch_calib_button_pane_t2

0x0001,

0xfd28,	// (0x000a277d) main_touch_calib_button_pane_t_ParamLimits

0xfd28,	// (0x000a277d) main_touch_calib_button_pane_t

0xecf8,	// (0x000a174d) cell_ncimui_button_pane

0xecf8,	// (0x000a174d) bg_button_pane_cp032

0xe66b,	// (0x000a10c0) cell_ncimui_button_pane_t1

0x525b,	// (0x00097cb0) image3_infobar_pane_ParamLimits

0x525b,	// (0x00097cb0) image3_infobar_pane

0x736b,	// (0x00099dc0) fs_bigclock_status_pane_ParamLimits

0x736b,	// (0x00099dc0) fs_bigclock_status_pane

0x7378,	// (0x00099dcd) main_fs_bigclock_clock_pane_ParamLimits

0x7378,	// (0x00099dcd) main_fs_bigclock_clock_pane

0x738c,	// (0x00099de1) main_fs_bigclock_indi_pane_ParamLimits

0x738c,	// (0x00099de1) main_fs_bigclock_indi_pane

0x73b4,	// (0x00099e09) main_fs_bigclock_swipe_pane_ParamLimits

0x73b4,	// (0x00099e09) main_fs_bigclock_swipe_pane

0xecf8,	// (0x000a174d) main_fs_clock_dumped_data

0xdb87,	// (0x000a05dc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb87,	// (0x000a05dc) list_single_fs_bigclock_indicator_pane_g1

0xdba3,	// (0x000a05f8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdba3,	// (0x000a05f8) list_single_fs_bigclock_indicator_pane_g2

0xdbbd,	// (0x000a0612) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdbbd,	// (0x000a0612) list_single_fs_bigclock_indicator_pane_g3

0xdbd7,	// (0x000a062c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbd7,	// (0x000a062c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc9,	// (0x000a261e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc9,	// (0x000a261e) list_single_fs_bigclock_indicator_pane_g

0xdc02,	// (0x000a0657) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdc02,	// (0x000a0657) list_single_fs_bigclock_indicator_pane_t1

0xdc2a,	// (0x000a067f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc2a,	// (0x000a067f) list_single_fs_bigclock_indicator_pane_t2

0xdc52,	// (0x000a06a7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc52,	// (0x000a06a7) list_single_fs_bigclock_indicator_pane_t3

0xdc7a,	// (0x000a06cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc7a,	// (0x000a06cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd4,	// (0x000a2629) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd4,	// (0x000a2629) list_single_fs_bigclock_indicator_pane_t

0xe679,	// (0x000a10ce) image3_infobar_fav_pane_ParamLimits

0xe679,	// (0x000a10ce) image3_infobar_fav_pane

0xe689,	// (0x000a10de) image3_infobar_loc_pane_ParamLimits

0xe689,	// (0x000a10de) image3_infobar_loc_pane

0xe69d,	// (0x000a10f2) image3_infobar_time_pane_ParamLimits

0xe69d,	// (0x000a10f2) image3_infobar_time_pane

0xa0b9,	// (0x0009cb0e) image3_infobar_time_pane_g1

0xe6ad,	// (0x000a1102) image3_infobar_time_pane_t1

0xa0b9,	// (0x0009cb0e) image3_infobar_loc_pane_g1

0xe6bb,	// (0x000a1110) image3_infobar_loc_pane_g2

0x0001,

0xfd2d,	// (0x000a2782) image3_infobar_loc_pane_g

0xe6c3,	// (0x000a1118) image3_infobar_loc_pane_t1

0xa0b9,	// (0x0009cb0e) image3_infobar_fav_pane_g1

0xe6d1,	// (0x000a1126) image3_infobar_fav_pane_g2

0x0001,

0xfd32,	// (0x000a2787) image3_infobar_fav_pane_g

0xe6d9,	// (0x000a112e) fs_bigclock_status_battery_pane

0xe6e2,	// (0x000a1137) fs_bigclock_status_signal_pane

0xe6eb,	// (0x000a1140) fs_bigclock_status_title_pane

0xe6f4,	// (0x000a1149) fs_bigclock_status_signal_pane_g1

0xe6fd,	// (0x000a1152) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd37,	// (0x000a278c) fs_bigclock_status_signal_pane_g

0xe705,	// (0x000a115a) fs_bigclock_status_battery_pane_g1

0xe70e,	// (0x000a1163) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3c,	// (0x000a2791) fs_bigclock_status_battery_pane_g

0xe716,	// (0x000a116b) fs_bigclock_status_title_pane_t1

0x7f3f,	// (0x0009a994) main_fs_bigclock_clock_pane_g1

0x7f3f,	// (0x0009a994) main_fs_bigclock_clock_pane_g2

0x7f4c,	// (0x0009a9a1) main_fs_bigclock_clock_pane_g3

0x7f4c,	// (0x0009a9a1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd41,	// (0x000a2796) main_fs_bigclock_clock_pane_g

0x7f58,	// (0x0009a9ad) main_fs_bigclock_clock_pane_t1

0x7f6b,	// (0x0009a9c0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd4a,	// (0x000a279f) main_fs_bigclock_clock_pane_t

0xe724,	// (0x000a1179) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe724,	// (0x000a1179) list_single_fs_bigclock_indicator_pane

0xe735,	// (0x000a118a) list_single_fs_bigclock_pane_ParamLimits

0xe735,	// (0x000a118a) list_single_fs_bigclock_pane

0xe75b,	// (0x000a11b0) main_fs_bigclock_indicator_pane_t1

0xe76a,	// (0x000a11bf) list_single_fs_bigclock_pane_g1

0xe772,	// (0x000a11c7) list_single_fs_bigclock_pane_t1

0xa0b9,	// (0x0009cb0e) main_fs_bigclock_swipe_pane_g1

0xe7b5,	// (0x000a120a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5b,	// (0x000a27b0) main_fs_bigclock_swipe_pane_g

0xe7bd,	// (0x000a1212) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7bd,	// (0x000a1212) main_fs_bigclock_swipe_pane_t1

0x2f1a,	// (0x0009596f) call_type_pane_ParamLimits

0xecf8,	// (0x000a174d) main_btmg_pane

0xe3a2,	// (0x000a0df7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3a2,	// (0x000a0df7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcce,	// (0x000a2723) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcce,	// (0x000a2723) list_single_cale_mrui_row_pane_g

0xe542,	// (0x000a0f97) list_recal_vselct_arw_lo_pane

0xe54a,	// (0x000a0f9f) list_recal_vselct_arw_up_pane

0xe552,	// (0x000a0fa7) list_recal_vselct_pane

0x7fc2,	// (0x0009aa17) btmg_button_pane

0x7fce,	// (0x0009aa23) main_btmg_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp044

0xe7da,	// (0x000a122f) btmg_button_pane_t1

0xbfe5,	// (0x0009ea3a) aid_listscroll_gen

0xed22,	// (0x000a1777) main_cntbar_detail_pane

0xe0df,	// (0x000a0b34) list_cmail_folder_pane

0xb26b,	// (0x0009dcc0) sp_fs_scroll_pane_cp03_ParamLimits

0x7fd6,	// (0x0009aa2b) list_single_fs_dyc_pane_cp01_ParamLimits

0x7fd6,	// (0x0009aa2b) list_single_fs_dyc_pane_cp01

0xe7e8,	// (0x000a123d) aid_size_cmail_indent

0xe5f6,	// (0x000a104b) list_single_dyc_row_pane_cp01

0x8021,	// (0x0009aa76) cntbar_detail_list_pane_ParamLimits

0x8021,	// (0x0009aa76) cntbar_detail_list_pane

0x805b,	// (0x0009aab0) main_cntbar_detail_cont_pane_ParamLimits

0x805b,	// (0x0009aab0) main_cntbar_detail_cont_pane

0x2f0e,	// (0x00095963) scroll_pane_cp032_ParamLimits

0x2f0e,	// (0x00095963) scroll_pane_cp032

0x8067,	// (0x0009aabc) cntbar_detail_list_event_pane_ParamLimits

0x8067,	// (0x0009aabc) cntbar_detail_list_event_pane

0x802d,	// (0x0009aa82) cntbar_detail_list_shct_pane

0xa32c,	// (0x0009cd81) aid_list_gen

0xe7f1,	// (0x000a1246) aid_scroll

0xe7fa,	// (0x000a124f) aid_size_touch_scroll_bar

0x807b,	// (0x0009aad0) aid_list_double

0x8084,	// (0x0009aad9) aid_list_single

0xacbb,	// (0x0009d710) aid_list_single_lg

0x808d,	// (0x0009aae2) aid_list_z_g_a_sm

0x8095,	// (0x0009aaea) aid_list_z_g_d

0x809d,	// (0x0009aaf2) aid_txt_z_prm

0x80ab,	// (0x0009ab00) aid_txt_z_prm_cp01

0x80b9,	// (0x0009ab0e) aid_txt_z_sec

0x80c7,	// (0x0009ab1c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x80c7,	// (0x0009ab1c) main_cntbar_detail_cont_pane_g1

0x80d4,	// (0x0009ab29) main_cntbar_detail_cont_pane_g2_ParamLimits

0x80d4,	// (0x0009ab29) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd60,	// (0x000a27b5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd60,	// (0x000a27b5) main_cntbar_detail_cont_pane_g

0xe803,	// (0x000a1258) main_cntbar_detail_cont_pane_t1

0xe811,	// (0x000a1266) main_cntbar_detail_cont_pane_t2

0xe81f,	// (0x000a1274) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd65,	// (0x000a27ba) main_cntbar_detail_cont_pane_t

0x80e0,	// (0x0009ab35) cell_cntbar_detail_list_shct_pane_ParamLimits

0x80e0,	// (0x0009ab35) cell_cntbar_detail_list_shct_pane

0xe82d,	// (0x000a1282) cntbar_detail_list_shct_pane_g1

0xe836,	// (0x000a128b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6c,	// (0x000a27c1) cntbar_detail_list_shct_pane_g

0x80f4,	// (0x0009ab49) cntbar_detail_list_event_pane_g1_ParamLimits

0x80f4,	// (0x0009ab49) cntbar_detail_list_event_pane_g1

0x8100,	// (0x0009ab55) cntbar_detail_list_event_pane_g2_ParamLimits

0x8100,	// (0x0009ab55) cntbar_detail_list_event_pane_g2

0x0005,

0xfd71,	// (0x000a27c6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd71,	// (0x000a27c6) cntbar_detail_list_event_pane_g

0x816c,	// (0x0009abc1) cntbar_detail_list_event_pane_t1_ParamLimits

0x816c,	// (0x0009abc1) cntbar_detail_list_event_pane_t1

0x8181,	// (0x0009abd6) cntbar_detail_list_event_pane_t2_ParamLimits

0x8181,	// (0x0009abd6) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7e,	// (0x000a27d3) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7e,	// (0x000a27d3) cntbar_detail_list_event_pane_t

0xa0b9,	// (0x0009cb0e) cell_cntbar_detail_list_shct_pane_g1

0xaa70,	// (0x0009d4c5) navi_pane_mv_g3

0xed22,	// (0x000a1777) main_cntbar_detail_pane_ParamLimits

0xecf8,	// (0x000a174d) main_notif_wgt_pane

0x4ee5,	// (0x0009793a) aid_tch_main_mp4_pane_g4

0x5144,	// (0x00097b99) popup_slider_window_cp02

0xe51c,	// (0x000a0f71) list_recal_day_event_pane

0x8001,	// (0x0009aa56) cntbar_detail_btn_pane_ParamLimits

0x8001,	// (0x0009aa56) cntbar_detail_btn_pane

0x8011,	// (0x0009aa66) cntbar_detail_btn_pane_cp01_ParamLimits

0x8011,	// (0x0009aa66) cntbar_detail_btn_pane_cp01

0x802d,	// (0x0009aa82) cntbar_detail_list_shct_pane_ParamLimits

0x8039,	// (0x0009aa8e) cntbar_detail_pane_g1_ParamLimits

0x8039,	// (0x0009aa8e) cntbar_detail_pane_g1

0x8045,	// (0x0009aa9a) cntbar_detail_pane_t1_ParamLimits

0x8045,	// (0x0009aa9a) cntbar_detail_pane_t1

0x810c,	// (0x0009ab61) cntbar_detail_list_event_pane_g3_ParamLimits

0x810c,	// (0x0009ab61) cntbar_detail_list_event_pane_g3

0x8124,	// (0x0009ab79) cntbar_detail_list_event_pane_g4_ParamLimits

0x8124,	// (0x0009ab79) cntbar_detail_list_event_pane_g4

0x813c,	// (0x0009ab91) cntbar_detail_list_event_pane_g5_ParamLimits

0x813c,	// (0x0009ab91) cntbar_detail_list_event_pane_g5

0x8154,	// (0x0009aba9) cntbar_detail_list_event_pane_g6_ParamLimits

0x8154,	// (0x0009aba9) cntbar_detail_list_event_pane_g6

0x8196,	// (0x0009abeb) cntbar_detail_list_event_pane_t3_ParamLimits

0x8196,	// (0x0009abeb) cntbar_detail_list_event_pane_t3

0x81a8,	// (0x0009abfd) popup_notif_wgt_window_ParamLimits

0x81a8,	// (0x0009abfd) popup_notif_wgt_window

0x81b8,	// (0x0009ac0d) popup_submenu_window_cp01_ParamLimits

0x81b8,	// (0x0009ac0d) popup_submenu_window_cp01

0xa083,	// (0x0009cad8) bg_popup_window_pane_cp10

0xe83f,	// (0x000a1294) listscroll_notif_wgt_pane

0xe851,	// (0x000a12a6) list_notif_wgt_window

0xe85a,	// (0x000a12af) scroll_pane_cp033

0x81c6,	// (0x0009ac1b) list_notif_wgt_row_pane_ParamLimits

0x81c6,	// (0x0009ac1b) list_notif_wgt_row_pane

0xe863,	// (0x000a12b8) aid_size_list_notif_wgt_del

0xe870,	// (0x000a12c5) list_notif_wgt_row_pane_g1

0xe87c,	// (0x000a12d1) list_notif_wgt_row_pane_g2

0xe88b,	// (0x000a12e0) list_notif_wgt_row_pane_g3

0x0002,

0xfd85,	// (0x000a27da) list_notif_wgt_row_pane_g

0xe898,	// (0x000a12ed) list_notif_wgt_row_pane_t1

0xe8ae,	// (0x000a1303) list_notif_wgt_row_pane_t2

0xe8c0,	// (0x000a1315) list_notif_wgt_row_pane_t3

0x0002,

0xfd8c,	// (0x000a27e1) list_notif_wgt_row_pane_t

0xcfdf,	// (0x0009fa34) list_recal_day_event_pane_g1

0xe8d2,	// (0x000a1327) list_recal_day_event_pane_t1

0xecf8,	// (0x000a174d) bg_button_pane_cp045

0x81d8,	// (0x0009ac2d) cntbar_detail_btn_pane_t1

0xac76,	// (0x0009d6cb) main_callh_pane_ParamLimits

0xac76,	// (0x0009d6cb) main_callh_pane

0xecf8,	// (0x000a174d) main_coverflow0_pane

0xecf8,	// (0x000a174d) main_wgtman_pane

0x73cc,	// (0x00099e21) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73cc,	// (0x00099e21) main_fs_bigclock_unlock_btn_pane

0x7997,	// (0x0009a3ec) bg_button_pane_cp16

0x79a7,	// (0x0009a3fc) cell_tport_appsw_pane_g3

0x81e6,	// (0x0009ac3b) cf0_flow_pane_ParamLimits

0x81e6,	// (0x0009ac3b) cf0_flow_pane

0xe8e1,	// (0x000a1336) listscroll_cf0_pane

0xe8ec,	// (0x000a1341) main_cf0_pane_g1

0x81f5,	// (0x0009ac4a) main_cf0_pane_t1_ParamLimits

0x81f5,	// (0x0009ac4a) main_cf0_pane_t1

0x8209,	// (0x0009ac5e) main_cf0_pane_t2_ParamLimits

0x8209,	// (0x0009ac5e) main_cf0_pane_t2

0x0001,

0xfd98,	// (0x000a27ed) main_cf0_pane_t_ParamLimits

0xfd98,	// (0x000a27ed) main_cf0_pane_t

0xe8fe,	// (0x000a1353) scroll_pane_cp11

0x821d,	// (0x0009ac72) cf0_flow_pane_g1

0x8225,	// (0x0009ac7a) cf0_flow_pane_g2

0x0001,

0xfd9d,	// (0x000a27f2) cf0_flow_pane_g

0x822d,	// (0x0009ac82) cf0_flow_pane_t1

0xecf8,	// (0x000a174d) main_call6_pane

0xecf8,	// (0x000a174d) main_calllock_pane

0x823b,	// (0x0009ac90) call6_btn_grp_pane_ParamLimits

0x823b,	// (0x0009ac90) call6_btn_grp_pane

0x824a,	// (0x0009ac9f) call6_pane_g1_ParamLimits

0x824a,	// (0x0009ac9f) call6_pane_g1

0x825a,	// (0x0009acaf) popup_call6_1st_window_ParamLimits

0x825a,	// (0x0009acaf) popup_call6_1st_window

0x8268,	// (0x0009acbd) popup_call6_2nd_window_ParamLimits

0x8268,	// (0x0009acbd) popup_call6_2nd_window

0x8276,	// (0x0009accb) cell_call6_btn_pane_ParamLimits

0x8276,	// (0x0009accb) cell_call6_btn_pane

0xa083,	// (0x0009cad8) bg_popup_call2_in_pane_cp03

0xe909,	// (0x000a135e) popup_call6_1st_window_g1

0xe911,	// (0x000a1366) popup_call6_1st_window_g2

0xe919,	// (0x000a136e) popup_call6_1st_window_g3

0x0002,

0xfda2,	// (0x000a27f7) popup_call6_1st_window_g

0xe921,	// (0x000a1376) popup_call6_1st_window_t1

0xe930,	// (0x000a1385) popup_call6_1st_window_t2

0xe93e,	// (0x000a1393) popup_call6_1st_window_t3

0x0002,

0xfda9,	// (0x000a27fe) popup_call6_1st_window_t

0xa083,	// (0x0009cad8) bg_popup_call2_in_pane_cp04

0xe94c,	// (0x000a13a1) popup_call6_2nd_window_g1

0xe954,	// (0x000a13a9) popup_call6_2nd_window_g2

0xe95c,	// (0x000a13b1) popup_call6_2nd_window_g3

0x0002,

0xfdb0,	// (0x000a2805) popup_call6_2nd_window_g

0xe964,	// (0x000a13b9) popup_call6_2nd_window_t1

0x1131,	// (0x00093b86) bg_button_pane_cp15

0x8285,	// (0x0009acda) cell_call6_btn_pane_g1

0x828e,	// (0x0009ace3) cell_call6_btn_pane_t1

0x829d,	// (0x0009acf2) listscroll_wgtman_pane_ParamLimits

0x829d,	// (0x0009acf2) listscroll_wgtman_pane

0x82b9,	// (0x0009ad0e) wgtman_btn_pane_ParamLimits

0x82b9,	// (0x0009ad0e) wgtman_btn_pane

0xa884,	// (0x0009d2d9) aid_scroll_copy1

0xe973,	// (0x000a13c8) list_wgtman_pane

0x82ee,	// (0x0009ad43) wgtman_btn_pane_g1_ParamLimits

0x82ee,	// (0x0009ad43) wgtman_btn_pane_g1

0x8316,	// (0x0009ad6b) wgtman_btn_pane_t1_ParamLimits

0x8316,	// (0x0009ad6b) wgtman_btn_pane_t1

0xe97d,	// (0x000a13d2) wgtman_btn_pane_t2_ParamLimits

0xe97d,	// (0x000a13d2) wgtman_btn_pane_t2

0x0001,

0xfdb7,	// (0x000a280c) wgtman_btn_pane_t_ParamLimits

0xfdb7,	// (0x000a280c) wgtman_btn_pane_t

0x834d,	// (0x0009ada2) listrow_wgtman_pane_ParamLimits

0x834d,	// (0x0009ada2) listrow_wgtman_pane

0x8369,	// (0x0009adbe) listrow_wgtman_pane_g1

0x8376,	// (0x0009adcb) listrow_wgtman_pane_g2

0x0001,

0xfdbc,	// (0x000a2811) listrow_wgtman_pane_g

0x8394,	// (0x0009ade9) listrow_wgtman_pane_t1

0x83ac,	// (0x0009ae01) listrow_wgtman_pane_t2

0x0001,

0xfdc1,	// (0x000a2816) listrow_wgtman_pane_t

0x83d2,	// (0x0009ae27) wait_bar_pane_cp09

0xe994,	// (0x000a13e9) main_calllock_btn_pane

0xe99e,	// (0x000a13f3) main_calllock_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp17

0xe9a6,	// (0x000a13fb) main_calllock_btn_pane_g1

0xe9af,	// (0x000a1404) main_calllock_btn_pane_t1

0xecf8,	// (0x000a174d) main_dialer3_pane

0xecf8,	// (0x000a174d) main_fmrd2_pane

0xa0b9,	// (0x0009cb0e) main_fs_bigclock_unlock_btn_pane_g1

0x83ec,	// (0x0009ae41) main_fs_bigclock_unlock_btn_pane_t1

0x83fa,	// (0x0009ae4f) area_fmrd2_info_pane_ParamLimits

0x83fa,	// (0x0009ae4f) area_fmrd2_info_pane

0x8408,	// (0x0009ae5d) area_fmrd2_visual_pane_ParamLimits

0x8408,	// (0x0009ae5d) area_fmrd2_visual_pane

0x8416,	// (0x0009ae6b) fmrd2_indi_pane_ParamLimits

0x8416,	// (0x0009ae6b) fmrd2_indi_pane

0x8423,	// (0x0009ae78) area_fmrd2_visual_pane_g1

0x842b,	// (0x0009ae80) area_fmrd2_visual_pane_t1

0x843b,	// (0x0009ae90) area_fmrd2_visual_pane_t2

0x844b,	// (0x0009aea0) area_fmrd2_visual_pane_t3

0x0002,

0xfdcb,	// (0x000a2820) area_fmrd2_visual_pane_t

0x845b,	// (0x0009aeb0) area_fmrd2_info_pane_g1

0x8463,	// (0x0009aeb8) area_fmrd2_info_pane_t1

0x8473,	// (0x0009aec8) area_fmrd2_info_pane_t2

0x8483,	// (0x0009aed8) area_fmrd2_info_pane_t3

0x8493,	// (0x0009aee8) area_fmrd2_info_pane_t4

0x0003,

0xfdd2,	// (0x000a2827) area_fmrd2_info_pane_t

0x84a1,	// (0x0009aef6) fmrd2_indi_pane_t1

0x84b1,	// (0x0009af06) fmrd2_indi_pane_t2

0x84c1,	// (0x0009af16) fmrd2_indi_pane_t3

0x0002,

0xfddb,	// (0x000a2830) fmrd2_indi_pane_t

0xdbe6,	// (0x000a063b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbe6,	// (0x000a063b) list_single_fs_bigclock_indicator_pane_g5

0xdc97,	// (0x000a06ec) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc97,	// (0x000a06ec) list_single_fs_bigclock_indicator_pane_t5

0x7ba1,	// (0x0009a5f6) aid_cell_bcale_month_pane_ParamLimits

0x7ba1,	// (0x0009a5f6) aid_cell_bcale_month_pane

0x7bbf,	// (0x0009a614) bcale_month_pane_ParamLimits

0x7bbf,	// (0x0009a614) bcale_month_pane

0x7bdd,	// (0x0009a632) bcale_preview_pane_ParamLimits

0x7bdd,	// (0x0009a632) bcale_preview_pane

0xe772,	// (0x000a11c7) list_single_fs_bigclock_pane_t1_ParamLimits

0xe791,	// (0x000a11e6) list_single_fs_bigclock_pane_t2_ParamLimits

0xe791,	// (0x000a11e6) list_single_fs_bigclock_pane_t2

0x0001,

0xfd56,	// (0x000a27ab) list_single_fs_bigclock_pane_t_ParamLimits

0xfd56,	// (0x000a27ab) list_single_fs_bigclock_pane_t

0x83e4,	// (0x0009ae39) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc6,	// (0x000a281b) main_fs_bigclock_unlock_btn_pane_g

0x84cf,	// (0x0009af24) aid_dia3_key_size_ParamLimits

0x84cf,	// (0x0009af24) aid_dia3_key_size

0x84db,	// (0x0009af30) aid_dia3_listrow_size_ParamLimits

0x84db,	// (0x0009af30) aid_dia3_listrow_size

0x84eb,	// (0x0009af40) dia3_keypad_fun_pane_ParamLimits

0x84eb,	// (0x0009af40) dia3_keypad_fun_pane

0x84fd,	// (0x0009af52) dia3_keypad_num_pane_ParamLimits

0x84fd,	// (0x0009af52) dia3_keypad_num_pane

0x850f,	// (0x0009af64) dia3_listscroll_pane_ParamLimits

0x850f,	// (0x0009af64) dia3_listscroll_pane

0x851d,	// (0x0009af72) dia3_numentry_pane_ParamLimits

0x851d,	// (0x0009af72) dia3_numentry_pane

0xe9be,	// (0x000a1413) dia3_list_pane

0xe9c9,	// (0x000a141e) scroll_pane_cp12

0xecf8,	// (0x000a174d) bg_dia3_numentry_pane

0x852b,	// (0x0009af80) dia3_numentry_pane_t1

0x853a,	// (0x0009af8f) cell_dia3_key_num_pane

0x8542,	// (0x0009af97) cell_dia3_key0_fun_pane_ParamLimits

0x8542,	// (0x0009af97) cell_dia3_key0_fun_pane

0x854f,	// (0x0009afa4) cell_dia3_key1_fun_pane_ParamLimits

0x854f,	// (0x0009afa4) cell_dia3_key1_fun_pane

0x855c,	// (0x0009afb1) dia3_listrow_pane

0xd939,	// (0x000a038e) bg_dia3_numentry_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp21

0xe9d4,	// (0x000a1429) cell_dia3_key_num_pane_t1

0xe9e2,	// (0x000a1437) cell_dia3_key_num_pane_t2

0xe9f1,	// (0x000a1446) cell_dia3_key_num_pane_t3

0xea00,	// (0x000a1455) cell_dia3_key_num_pane_t4

0x0003,

0xfde2,	// (0x000a2837) cell_dia3_key_num_pane_t

0xecf8,	// (0x000a174d) bg_button_pane_cp19

0x8569,	// (0x0009afbe) cell_dia3_key0_fun_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp20

0x8571,	// (0x0009afc6) cell_dia3_key1_fun_pane_g1

0x8579,	// (0x0009afce) area_left_week_number_pane

0x858c,	// (0x0009afe1) area_top_day_name_pane

0x859a,	// (0x0009afef) frame_month_view_pane

0xea0f,	// (0x000a1464) grid_month_view_pane

0x85af,	// (0x0009b004) cell_top_day_name_pane_ParamLimits

0x85af,	// (0x0009b004) cell_top_day_name_pane

0x85c9,	// (0x0009b01e) cell_area_left_week_number_pane_ParamLimits

0x85c9,	// (0x0009b01e) cell_area_left_week_number_pane

0x85ec,	// (0x0009b041) cell_month_view_pane_ParamLimits

0x85ec,	// (0x0009b041) cell_month_view_pane

0xea1d,	// (0x000a1472) frm_month_g1

0x8618,	// (0x0009b06d) frm_month_g2

0x8629,	// (0x0009b07e) frm_month_g3

0x863a,	// (0x0009b08f) frm_month_g4

0x864b,	// (0x0009b0a0) frm_month_g5

0x865e,	// (0x0009b0b3) frm_month_g6

0x8671,	// (0x0009b0c6) frm_month_g7

0xea2a,	// (0x000a147f) frm_month_g8

0x8684,	// (0x0009b0d9) frm_month_g9

0x8691,	// (0x0009b0e6) frm_month_g10

0x869e,	// (0x0009b0f3) frm_month_g11

0x86ab,	// (0x0009b100) frm_month_g12

0x86b8,	// (0x0009b10d) frm_month_g13

0x86c5,	// (0x0009b11a) frm_month_g14

0x86d4,	// (0x0009b129) frm_month_g15

0x86e3,	// (0x0009b138) frm_month_g16

0x000f,

0xfdeb,	// (0x000a2840) frm_month_g

0xea37,	// (0x000a148c) cell_top_day_name_pane_t1

0x86f2,	// (0x0009b147) cell_area_left_week_number_pane_g1

0x8701,	// (0x0009b156) cell_area_left_week_number_pane_t1

0x9e5f,	// (0x0009c8b4) cell_month_view_pane_g1

0x8717,	// (0x0009b16c) cell_month_view_pane_t1

0xecf8,	// (0x000a174d) main_fps_pane

0xdf03,	// (0x000a0958) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf03,	// (0x000a0958) cmail_ddmenu_btn02_pane_cp1

0xdf1f,	// (0x000a0974) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf1f,	// (0x000a0974) cmail_ddmenu_btn02_pane_cp2

0x7ea6,	// (0x0009a8fb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7ea6,	// (0x0009a8fb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd09,	// (0x000a275e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd09,	// (0x000a275e) cmail_ddmenu_btn02_pane_g

0x7ec4,	// (0x0009a919) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7ec4,	// (0x0009a919) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0e,	// (0x000a2763) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0e,	// (0x000a2763) cmail_ddmenu_btn02_pane_t

0x872d,	// (0x0009b182) fps_text_pane_ParamLimits

0x872d,	// (0x0009b182) fps_text_pane

0x873a,	// (0x0009b18f) main_fps_pane_g1_ParamLimits

0x873a,	// (0x0009b18f) main_fps_pane_g1

0x8748,	// (0x0009b19d) wait_bar_pane_cp010_ParamLimits

0x8748,	// (0x0009b19d) wait_bar_pane_cp010

0x8754,	// (0x0009b1a9) fps_text_pane_t1_ParamLimits

0x8754,	// (0x0009b1a9) fps_text_pane_t1

0x55fb,	// (0x00098050) cam4_image_uncrop_pane_g1

0x5604,	// (0x00098059) cam4_image_uncrop_pane_g2

0x560d,	// (0x00098062) cam4_image_uncrop_pane_g3

0x5616,	// (0x0009806b) cam4_image_uncrop_pane_g4

0x0003,

0xf84d,	// (0x000a22a2) cam4_image_uncrop_pane_g

0x855c,	// (0x0009afb1) dia3_listrow_pane_ParamLimits

0xecf8,	// (0x000a174d) main_phob2_pane

0x7979,	// (0x0009a3ce) cell_tport_appsw_pane_cp02_ParamLimits

0x7979,	// (0x0009a3ce) cell_tport_appsw_pane_cp02

0x7988,	// (0x0009a3dd) cell_tport_appsw_pane_cp03_ParamLimits

0x7988,	// (0x0009a3dd) cell_tport_appsw_pane_cp03

0xecf8,	// (0x000a174d) phob2_contact_card_pane

0xecf8,	// (0x000a174d) phob2_listscroll_pane

0xea4a,	// (0x000a149f) phob2_list_pane

0xea52,	// (0x000a14a7) scroll_pane_cp034

0x876d,	// (0x0009b1c2) phob2_cc_data_pane_ParamLimits

0x876d,	// (0x0009b1c2) phob2_cc_data_pane

0x8787,	// (0x0009b1dc) phob2_cc_listscroll_pane_ParamLimits

0x8787,	// (0x0009b1dc) phob2_cc_listscroll_pane

0x834d,	// (0x0009ada2) list_double_large_graphic_phob2_pane_ParamLimits

0x834d,	// (0x0009ada2) list_double_large_graphic_phob2_pane

0x87a1,	// (0x0009b1f6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x87a1,	// (0x0009b1f6) list_double_large_graphic_phob2_pane_g1

0x87ae,	// (0x0009b203) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x87ae,	// (0x0009b203) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0c,	// (0x000a2861) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0c,	// (0x000a2861) list_double_large_graphic_phob2_pane_g

0x87d4,	// (0x0009b229) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x87d4,	// (0x0009b229) list_double_large_graphic_phob2_pane_t1

0x87e9,	// (0x0009b23e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x87e9,	// (0x0009b23e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe15,	// (0x000a286a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe15,	// (0x000a286a) list_double_large_graphic_phob2_pane_t

0xecf8,	// (0x000a174d) list_highlight_pane_cp024

0xea5a,	// (0x000a14af) phob2_cc_button_pane

0x87fe,	// (0x0009b253) phob2_cc_data_pane_g1_ParamLimits

0x87fe,	// (0x0009b253) phob2_cc_data_pane_g1

0x880d,	// (0x0009b262) phob2_cc_data_pane_g2_ParamLimits

0x880d,	// (0x0009b262) phob2_cc_data_pane_g2

0x0001,

0xfe1a,	// (0x000a286f) phob2_cc_data_pane_g_ParamLimits

0xfe1a,	// (0x000a286f) phob2_cc_data_pane_g

0x881c,	// (0x0009b271) phob2_cc_data_pane_t1_ParamLimits

0x881c,	// (0x0009b271) phob2_cc_data_pane_t1

0x8831,	// (0x0009b286) phob2_cc_data_pane_t2_ParamLimits

0x8831,	// (0x0009b286) phob2_cc_data_pane_t2

0x8846,	// (0x0009b29b) phob2_cc_data_pane_t3_ParamLimits

0x8846,	// (0x0009b29b) phob2_cc_data_pane_t3

0x0002,

0xfe1f,	// (0x000a2874) phob2_cc_data_pane_t_ParamLimits

0xfe1f,	// (0x000a2874) phob2_cc_data_pane_t

0xea62,	// (0x000a14b7) phob2_cc_list_pane_ParamLimits

0xea62,	// (0x000a14b7) phob2_cc_list_pane

0xd116,	// (0x0009fb6b) scroll_pane_cp035_ParamLimits

0xd116,	// (0x0009fb6b) scroll_pane_cp035

0xed22,	// (0x000a1777) bg_button_pane_cp033

0xea6e,	// (0x000a14c3) phob2_cc_button_pane_g1

0xea7a,	// (0x000a14cf) phob2_cc_button_pane_t1

0xea8f,	// (0x000a14e4) phob2_cc_button_pane_t2

0x0001,

0xfe26,	// (0x000a287b) phob2_cc_button_pane_t

0x885b,	// (0x0009b2b0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x885b,	// (0x0009b2b0) list_double_large_graphic_phob2_cc_pane

0x88cf,	// (0x0009b324) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x88cf,	// (0x0009b324) list_double_large_graphic_phob2_cc_pane_g1

0x88e0,	// (0x0009b335) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x88e0,	// (0x0009b335) list_double_large_graphic_phob2_cc_pane_g2

0x88ef,	// (0x0009b344) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x88ef,	// (0x0009b344) list_double_large_graphic_phob2_cc_pane_g3

0x88fe,	// (0x0009b353) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x88fe,	// (0x0009b353) list_double_large_graphic_phob2_cc_pane_g4

0x890f,	// (0x0009b364) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x890f,	// (0x0009b364) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2b,	// (0x000a2880) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2b,	// (0x000a2880) list_double_large_graphic_phob2_cc_pane_g

0x891e,	// (0x0009b373) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x891e,	// (0x0009b373) list_double_large_graphic_phob2_cc_pane_t1

0x8947,	// (0x0009b39c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8947,	// (0x0009b39c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe36,	// (0x000a288b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe36,	// (0x000a288b) list_double_large_graphic_phob2_cc_pane_t

0xeaa1,	// (0x000a14f6) list_highlight_pane_cp025_ParamLimits

0xeaa1,	// (0x000a14f6) list_highlight_pane_cp025

0xed22,	// (0x000a1777) bg_button_pane_cp033_ParamLimits

0xea6e,	// (0x000a14c3) phob2_cc_button_pane_g1_ParamLimits

0xea7a,	// (0x000a14cf) phob2_cc_button_pane_t1_ParamLimits

0xea8f,	// (0x000a14e4) phob2_cc_button_pane_t2_ParamLimits

0xfe26,	// (0x000a287b) phob2_cc_button_pane_t_ParamLimits

0x1125,	// (0x00093b7a) popup_wgtman_window

0xce99,	// (0x0009f8ee) scroll_pane_cp038

0x82d6,	// (0x0009ad2b) wgtman_btn_pane_cp_01_ParamLimits

0x82d6,	// (0x0009ad2b) wgtman_btn_pane_cp_01

0xeaaf,	// (0x000a1504) wgtman_content_pane

0xeab8,	// (0x000a150d) wgtman_heading_pane

0xecf8,	// (0x000a174d) bg_heading_pane_cp02

0xeac1,	// (0x000a1516) wgtman_heading_pane_g1

0xeac9,	// (0x000a151e) wgtman_heading_pane_t1

0xead7,	// (0x000a152c) scroll_pane_cp036

0xeadf,	// (0x000a1534) wgtman_list_pane

0xddb6,	// (0x000a080b) wgtman_list_pane_t1_ParamLimits

0xddb6,	// (0x000a080b) wgtman_list_pane_t1

0x555a,	// (0x00097faf) cam4_grid_pane

0x6298,	// (0x00098ced) bg_button_pane_cp015_ParamLimits

0x62ad,	// (0x00098d02) bg_button_pane_cp016_ParamLimits

0x62b9,	// (0x00098d0e) bg_button_pane_cp017_ParamLimits

0x6311,	// (0x00098d66) popup_vitu2_query_window_g3_ParamLimits

0x6311,	// (0x00098d66) popup_vitu2_query_window_g3

0x63b2,	// (0x00098e07) popup_vitu2_query_window_t6_ParamLimits

0x63b2,	// (0x00098e07) popup_vitu2_query_window_t6

0x63dd,	// (0x00098e32) popup_vitu2_query_window_t7_ParamLimits

0x63dd,	// (0x00098e32) popup_vitu2_query_window_t7

0xcd49,	// (0x0009f79e) cam4_grid_pane_g1

0xcd52,	// (0x0009f7a7) cam4_grid_pane_g2

0xeae7,	// (0x000a153c) cam4_grid_pane_g3

0xeaf0,	// (0x000a1545) cam4_grid_pane_g4

0x0003,

0xfe3b,	// (0x000a2890) cam4_grid_pane_g

0x1c79,	// (0x000946ce) aid_placing_vt_slider_lsc_ParamLimits

0x1fb9,	// (0x00094a0e) vidtel_button_pane_ParamLimits

0x1fb9,	// (0x00094a0e) vidtel_button_pane

0xecf8,	// (0x000a174d) bg_button_pane_cp034

0xeafb,	// (0x000a1550) vidtel_button_pane_g1

0xeb03,	// (0x000a1558) vidtel_button_pane_t1

0xcfbd,	// (0x0009fa12) aid_size_vtel_slider_touch

0xd116,	// (0x0009fb6b) scroll_pane_cp039

0x7109,	// (0x00099b5e) ncim_query_button_pane_cp01_ParamLimits

0x7128,	// (0x00099b7d) ncimui_query_pane_g1_ParamLimits

0xed22,	// (0x000a1777) input_focus_pane_cp012_ParamLimits

0xd97f,	// (0x000a03d4) ncim_query_entry_pane_t1_ParamLimits

0xd116,	// (0x0009fb6b) scroll_pane_cp039_ParamLimits

0xa95b,	// (0x0009d3b0) navi_pane_bcale_mc_g1

0xa963,	// (0x0009d3b8) navi_pane_bcale_mc_t1

0xdf53,	// (0x000a09a8) main_sp_fs_email_pane_g1

0xdf5f,	// (0x000a09b4) main_sp_fs_email_pane_g2

0x0001,

0xfc3e,	// (0x000a2693) main_sp_fs_email_pane_g

0xe3ae,	// (0x000a0e03) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe3ae,	// (0x000a0e03) list_single_cale_mrui_row_pane_g3

0x7ee4,	// (0x0009a939) list_single_recal_day_pane_g5_event_pane

0xe5a9,	// (0x000a0ffe) list_single_recal_day_pane_g7

0xeb19,	// (0x000a156e) list_recal_day_event_pane_cp01

0xeb22,	// (0x000a1577) list_recal_vselct_arw_lo_pane_cp01

0xeb2a,	// (0x000a157f) list_recal_vselct_arw_up_pane_cp01

0xeb32,	// (0x000a1587) list_recal_vselct_pane_cp01

0xcfdf,	// (0x0009fa34) list_recal_day_event_pane_cp01_g1

0xe5ff,	// (0x000a1054) list_recal_day_event_pane_cp01_t1

0xe5b1,	// (0x000a1006) list_single_recal_day_pane_t1_ParamLimits

0xe5c3,	// (0x000a1018) list_single_recal_day_pane_t2_ParamLimits

0xfd1e,	// (0x000a2773) list_single_recal_day_pane_t_ParamLimits

0x9de4,	// (0x0009c839) bg_notes_pane_ParamLimits

0x9eaf,	// (0x0009c904) list_notes_pane_ParamLimits

0x1334,	// (0x00093d89) scroll_pane_cp06_ParamLimits

0x9ed1,	// (0x0009c926) main_notes_pane_ParamLimits

0xed22,	// (0x000a1777) main_welc_pane

0x8992,	// (0x0009b3e7) main_welc_body_pane_ParamLimits

0x8992,	// (0x0009b3e7) main_welc_body_pane

0x89ab,	// (0x0009b400) main_welc_opti_pane_ParamLimits

0x89ab,	// (0x0009b400) main_welc_opti_pane

0x8a06,	// (0x0009b45b) main_welc_pane_t1_ParamLimits

0x8a06,	// (0x0009b45b) main_welc_pane_t1

0x8b9c,	// (0x0009b5f1) main_welc_body_row_pane_ParamLimits

0x8b9c,	// (0x0009b5f1) main_welc_body_row_pane

0x9e51,	// (0x0009c8a6) main_welc_opti_row_pane_ParamLimits

0x9e51,	// (0x0009c8a6) main_welc_opti_row_pane

0xeb4c,	// (0x000a15a1) main_welc_opti_row_pane_g1

0x8bc5,	// (0x0009b61a) main_welc_opti_row_pane_t1

0xeb54,	// (0x000a15a9) main_welc_body_row_pane_t1

0xe849,	// (0x000a129e) popup_notif_wgt_heading_pane

0xe863,	// (0x000a12b8) aid_size_list_notif_wgt_del_ParamLimits

0xe870,	// (0x000a12c5) list_notif_wgt_row_pane_g1_ParamLimits

0xe87c,	// (0x000a12d1) list_notif_wgt_row_pane_g2_ParamLimits

0xe88b,	// (0x000a12e0) list_notif_wgt_row_pane_g3_ParamLimits

0xfd85,	// (0x000a27da) list_notif_wgt_row_pane_g_ParamLimits

0xe898,	// (0x000a12ed) list_notif_wgt_row_pane_t1_ParamLimits

0xe8ae,	// (0x000a1303) list_notif_wgt_row_pane_t2_ParamLimits

0xe8c0,	// (0x000a1315) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8c,	// (0x000a27e1) list_notif_wgt_row_pane_t_ParamLimits

0x8369,	// (0x0009adbe) listrow_wgtman_pane_g1_ParamLimits

0x8376,	// (0x0009adcb) listrow_wgtman_pane_g2_ParamLimits

0xfdbc,	// (0x000a2811) listrow_wgtman_pane_g_ParamLimits

0x8394,	// (0x0009ade9) listrow_wgtman_pane_t1_ParamLimits

0x83ac,	// (0x0009ae01) listrow_wgtman_pane_t2_ParamLimits

0xfdc1,	// (0x000a2816) listrow_wgtman_pane_t_ParamLimits

0x83d2,	// (0x0009ae27) wait_bar_pane_cp09_ParamLimits

0xecf8,	// (0x000a174d) bg_popup_heading_pane_cp02

0xeb63,	// (0x000a15b8) popup_notif_wgt_heading_pane_g1

0xeb6b,	// (0x000a15c0) popup_notif_wgt_heading_pane_t1

0xecf8,	// (0x000a174d) main_vids_pane

0xecf8,	// (0x000a174d) vids_listscroll_pane

0x8bd4,	// (0x0009b629) scroll_pane_cp040

0xecf8,	// (0x000a174d) vids_list_pane

0x8bdf,	// (0x0009b634) vids_list_double_pane_ParamLimits

0x8bdf,	// (0x0009b634) vids_list_double_pane

0x8bf7,	// (0x0009b64c) vids_list_double_pane_g1

0x8c00,	// (0x0009b655) vids_list_double_pane_t1

0x8c10,	// (0x0009b665) vids_list_double_pane_t2

0x0001,

0xfe5a,	// (0x000a28af) vids_list_double_pane_t

0x3cf6,	// (0x0009674b) main_ncimui_pane_ParamLimits

0x6f60,	// (0x000999b5) main_ncimui_pane_g1_ParamLimits

0x6f6c,	// (0x000999c1) main_ncimui_pane_g2_ParamLimits

0x6f6c,	// (0x000999c1) main_ncimui_pane_g2

0x0001,

0xfb3f,	// (0x000a2594) main_ncimui_pane_g_ParamLimits

0xfb3f,	// (0x000a2594) main_ncimui_pane_g

0x89c4,	// (0x0009b419) main_welc_pane_g1_ParamLimits

0x89c4,	// (0x0009b419) main_welc_pane_g1

0x89d0,	// (0x0009b425) main_welc_pane_g2_ParamLimits

0x89d0,	// (0x0009b425) main_welc_pane_g2

0x0003,

0xfe44,	// (0x000a2899) main_welc_pane_g_ParamLimits

0xfe44,	// (0x000a2899) main_welc_pane_g

0x9de4,	// (0x0009c839) listscroll_mce_pane_ParamLimits

0xaab0,	// (0x0009d505) wait_bar_pane_cp10

0xbfed,	// (0x0009ea42) main_cale_day_pane_ParamLimits

0xbfed,	// (0x0009ea42) main_cale_week_pane_ParamLimits

0x9de4,	// (0x0009c839) main_messa_pane_ParamLimits

0x499b,	// (0x000973f0) main_clock2_btn_pane_ParamLimits

0x499b,	// (0x000973f0) main_clock2_btn_pane

0xc869,	// (0x0009f2be) main_clock2_btn_pane_cp01_ParamLimits

0xc869,	// (0x0009f2be) main_clock2_btn_pane_cp01

0xe33a,	// (0x000a0d8f) list_cale_mrui_pane_ParamLimits

0xe8f6,	// (0x000a134b) main_cf0_pane_g2

0x0001,

0xfd93,	// (0x000a27e8) main_cf0_pane_g

0x8579,	// (0x0009afce) area_left_week_number_pane_ParamLimits

0x858c,	// (0x0009afe1) area_top_day_name_pane_ParamLimits

0x859a,	// (0x0009afef) frame_month_view_pane_ParamLimits

0xea0f,	// (0x000a1464) grid_month_view_pane_ParamLimits

0xea1d,	// (0x000a1472) frm_month_g1_ParamLimits

0x8618,	// (0x0009b06d) frm_month_g2_ParamLimits

0x8629,	// (0x0009b07e) frm_month_g3_ParamLimits

0x863a,	// (0x0009b08f) frm_month_g4_ParamLimits

0x864b,	// (0x0009b0a0) frm_month_g5_ParamLimits

0x865e,	// (0x0009b0b3) frm_month_g6_ParamLimits

0x8671,	// (0x0009b0c6) frm_month_g7_ParamLimits

0xea2a,	// (0x000a147f) frm_month_g8_ParamLimits

0x8684,	// (0x0009b0d9) frm_month_g9_ParamLimits

0x8691,	// (0x0009b0e6) frm_month_g10_ParamLimits

0x869e,	// (0x0009b0f3) frm_month_g11_ParamLimits

0x86ab,	// (0x0009b100) frm_month_g12_ParamLimits

0x86b8,	// (0x0009b10d) frm_month_g13_ParamLimits

0x86c5,	// (0x0009b11a) frm_month_g14_ParamLimits

0x86d4,	// (0x0009b129) frm_month_g15_ParamLimits

0x86e3,	// (0x0009b138) frm_month_g16_ParamLimits

0xfdeb,	// (0x000a2840) frm_month_g_ParamLimits

0xea37,	// (0x000a148c) cell_top_day_name_pane_t1_ParamLimits

0x86f2,	// (0x0009b147) cell_area_left_week_number_pane_g1_ParamLimits

0x8701,	// (0x0009b156) cell_area_left_week_number_pane_t1_ParamLimits

0x9e5f,	// (0x0009c8b4) cell_month_view_pane_g1_ParamLimits

0x8717,	// (0x0009b16c) cell_month_view_pane_t1_ParamLimits

0x9ddc,	// (0x0009c831) main_clock2_btn_pane_g1

0xeb79,	// (0x000a15ce) main_clock2_btn_pane_t1

0xed22,	// (0x000a1777) listscroll_cmail_pane_ParamLimits

0xdf53,	// (0x000a09a8) main_sp_fs_email_pane_g1_ParamLimits

0xdf5f,	// (0x000a09b4) main_sp_fs_email_pane_g2_ParamLimits

0xfc3e,	// (0x000a2693) main_sp_fs_email_pane_g_ParamLimits

0xe4fd,	// (0x000a0f52) list_recal_day_pane_ParamLimits

0xe50e,	// (0x000a0f63) mian_recal_day_pane_t1

0x7867,	// (0x0009a2bc) list_single_dyc_row_text_pane_t4_ParamLimits

0x7867,	// (0x0009a2bc) list_single_dyc_row_text_pane_t4

0x789e,	// (0x0009a2f3) list_single_dyc_row_text_pane_t5_ParamLimits

0x789e,	// (0x0009a2f3) list_single_dyc_row_text_pane_t5

0xe00f,	// (0x000a0a64) list_single_dyc_row_text_pane_t6_ParamLimits

0xe00f,	// (0x000a0a64) list_single_dyc_row_text_pane_t6

0x2e32,	// (0x00095887) aid_mgn_list_cale_time_pane

0x3cf6,	// (0x0009674b) main_gallery2_pane_ParamLimits

0xc87f,	// (0x0009f2d4) main_clock2_pane_cp01_t1

0xc88d,	// (0x0009f2e2) main_clock2_pane_cp01_t3

0x0001,

0xf724,	// (0x000a2179) main_clock2_pane_cp01_t

0x1789,	// (0x000941de) cale_week_scroll_pane_g16_ParamLimits

0x1789,	// (0x000941de) cale_week_scroll_pane_g16

0xa083,	// (0x0009cad8) vorec_slider_pane

0xeb03,	// (0x000a1558) vidtel_button_pane_t1_ParamLimits

0x7f3f,	// (0x0009a994) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7f3f,	// (0x0009a994) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7f4c,	// (0x0009a9a1) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7f4c,	// (0x0009a9a1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd41,	// (0x000a2796) main_fs_bigclock_clock_pane_g_ParamLimits

0x7f58,	// (0x0009a9ad) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7f6b,	// (0x0009a9c0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd4a,	// (0x000a279f) main_fs_bigclock_clock_pane_t_ParamLimits

0x4340,	// (0x00096d95) main_mup3_lyrics_pane_ParamLimits

0x4340,	// (0x00096d95) main_mup3_lyrics_pane

0x8c43,	// (0x0009b698) main_mup3_lyrics_pane_t1_ParamLimits

0x8c43,	// (0x0009b698) main_mup3_lyrics_pane_t1

0x4ecf,	// (0x00097924) aid_main_mp4_pane_t1_area

0x4ed9,	// (0x0009792e) aid_main_mp4_pane_t2_area

0x4fd8,	// (0x00097a2d) main_mp4_pane_g7_ParamLimits

0x4fd8,	// (0x00097a2d) main_mp4_pane_g7

0x4fe4,	// (0x00097a39) main_mp4_pane_g8_ParamLimits

0x4fe4,	// (0x00097a39) main_mp4_pane_g8

0x5404,	// (0x00097e59) aid_call6_pane_g1_size

0x88a1,	// (0x0009b2f6) list_double_large_graphic_phob2_other_pane_ParamLimits

0x88a1,	// (0x0009b2f6) list_double_large_graphic_phob2_other_pane

0xa440,	// (0x0009ce95) list_double_large_graphic_phob2_other_pane_g1

0xecf8,	// (0x000a174d) list_highlight_pane_cp026

0xed22,	// (0x000a1777) main_welc_pane_ParamLimits

0x76e0,	// (0x0009a135) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x76e0,	// (0x0009a135) main_sp_fs_ctrlbar_pane_g3

0x76f8,	// (0x0009a14d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x76f8,	// (0x0009a14d) main_sp_fs_ctrlbar_pane_g4

0x772a,	// (0x0009a17f) toolbar2_fixed_button_pane_cp01

0x7735,	// (0x0009a18a) toolbar2_fixed_button_pane_cp02

0x7740,	// (0x0009a195) toolbar2_fixed_button_pane_cp03

0x8982,	// (0x0009b3d7) list_welc_entry_pane_ParamLimits

0x8982,	// (0x0009b3d7) list_welc_entry_pane

0x89de,	// (0x0009b433) main_welc_pane_g3_ParamLimits

0x89de,	// (0x0009b433) main_welc_pane_g3

0x8a20,	// (0x0009b475) main_welc_pane_t2_ParamLimits

0x8a20,	// (0x0009b475) main_welc_pane_t2

0x8a34,	// (0x0009b489) main_welc_pane_t3_ParamLimits

0x8a34,	// (0x0009b489) main_welc_pane_t3

0x0005,

0xfe4d,	// (0x000a28a2) main_welc_pane_t_ParamLimits

0xfe4d,	// (0x000a28a2) main_welc_pane_t

0x8b30,	// (0x0009b585) welc_button_pane_ParamLimits

0x8b30,	// (0x0009b585) welc_button_pane

0x8b8e,	// (0x0009b5e3) welc_service_logo_pane_ParamLimits

0x8b8e,	// (0x0009b5e3) welc_service_logo_pane

0x8c79,	// (0x0009b6ce) list_single_welc_entry_pane_ParamLimits

0x8c79,	// (0x0009b6ce) list_single_welc_entry_pane

0x8c8a,	// (0x0009b6df) list_single_welc_entry_pane_g1

0x8c92,	// (0x0009b6e7) list_single_welc_entry_pane_t1

0x8ca0,	// (0x0009b6f5) list_single_welc_entry_pane_t2

0x0001,

0xfe5f,	// (0x000a28b4) list_single_welc_entry_pane_t

0xecf8,	// (0x000a174d) bg_button_pane_cp035

0x8cae,	// (0x0009b703) welc_button_pane_t1

0xeb87,	// (0x000a15dc) welc_service_logo_pane_g1

0xeb90,	// (0x000a15e5) welc_service_logo_pane_g2

0x0001,

0xfe64,	// (0x000a28b9) welc_service_logo_pane_g

0x1131,	// (0x00093b86) main_int_radio_pane

0xd81d,	// (0x000a0272) list_single_fs_dyc_pane_g1

0x87ba,	// (0x0009b20f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x87ba,	// (0x0009b20f) list_double_large_graphic_phob2_pane_g3

0x87c6,	// (0x0009b21b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x87c6,	// (0x0009b21b) list_double_large_graphic_phob2_pane_g4

0x8cbc,	// (0x0009b711) main_int_radio1_pane_ParamLimits

0x8cbc,	// (0x0009b711) main_int_radio1_pane

0xeb99,	// (0x000a15ee) find_pane_cp02

0x8cce,	// (0x0009b723) input_focus_pane_cp12_ParamLimits

0x8cce,	// (0x0009b723) input_focus_pane_cp12

0x8cda,	// (0x0009b72f) input_focus_pane_cp13_ParamLimits

0x8cda,	// (0x0009b72f) input_focus_pane_cp13

0x8cf2,	// (0x0009b747) input_focus_pane_cp14_ParamLimits

0x8cf2,	// (0x0009b747) input_focus_pane_cp14

0xeba2,	// (0x000a15f7) int_radio1_listscroll_pane

0x8d0a,	// (0x0009b75f) main_int_radio1_pane_g1_ParamLimits

0x8d0a,	// (0x0009b75f) main_int_radio1_pane_g1

0x8d1a,	// (0x0009b76f) main_int_radio1_pane_t1_ParamLimits

0x8d1a,	// (0x0009b76f) main_int_radio1_pane_t1

0x8d2e,	// (0x0009b783) main_int_radio1_pane_t2_ParamLimits

0x8d2e,	// (0x0009b783) main_int_radio1_pane_t2

0x8d42,	// (0x0009b797) main_int_radio1_pane_t3_ParamLimits

0x8d42,	// (0x0009b797) main_int_radio1_pane_t3

0x8d56,	// (0x0009b7ab) main_int_radio1_pane_t4_ParamLimits

0x8d56,	// (0x0009b7ab) main_int_radio1_pane_t4

0xebac,	// (0x000a1601) main_int_radio1_pane_t5_ParamLimits

0xebac,	// (0x000a1601) main_int_radio1_pane_t5

0x8d6d,	// (0x0009b7c2) main_int_radio1_pane_t6_ParamLimits

0x8d6d,	// (0x0009b7c2) main_int_radio1_pane_t6

0x8d7f,	// (0x0009b7d4) main_int_radio1_pane_t7_ParamLimits

0x8d7f,	// (0x0009b7d4) main_int_radio1_pane_t7

0x8d91,	// (0x0009b7e6) main_int_radio1_pane_t8_ParamLimits

0x8d91,	// (0x0009b7e6) main_int_radio1_pane_t8

0x8da5,	// (0x0009b7fa) main_int_radio1_pane_t9_ParamLimits

0x8da5,	// (0x0009b7fa) main_int_radio1_pane_t9

0x8db7,	// (0x0009b80c) main_int_radio1_pane_t10_ParamLimits

0x8db7,	// (0x0009b80c) main_int_radio1_pane_t10

0x8de8,	// (0x0009b83d) main_int_radio1_pane_t11_ParamLimits

0x8de8,	// (0x0009b83d) main_int_radio1_pane_t11

0x8e19,	// (0x0009b86e) main_int_radio1_pane_t12_ParamLimits

0x8e19,	// (0x0009b86e) main_int_radio1_pane_t12

0x000b,

0xfe69,	// (0x000a28be) main_int_radio1_pane_t_ParamLimits

0xfe69,	// (0x000a28be) main_int_radio1_pane_t

0xebbe,	// (0x000a1613) int_radio_list_pane

0xea52,	// (0x000a14a7) scroll_pane_cp037

0xebc6,	// (0x000a161b) list_double_large_graphic_int_radio_pane_ParamLimits

0xebc6,	// (0x000a161b) list_double_large_graphic_int_radio_pane

0xebdf,	// (0x000a1634) list_double_large_graphic_int_radio_pane_g1

0xe60d,	// (0x000a1062) list_double_large_graphic_int_radio_pane_t1

0xe61b,	// (0x000a1070) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe82,	// (0x000a28d7) list_double_large_graphic_int_radio_pane_t

0xecf8,	// (0x000a174d) list_highlight_pane_cp027

0xeb3c,	// (0x000a1591) main_button_pane_4

0x89ea,	// (0x0009b43f) main_welc_pane_g4_ParamLimits

0x89ea,	// (0x0009b43f) main_welc_pane_g4

0x8a46,	// (0x0009b49b) main_welc_pane_t4_ParamLimits

0x8a46,	// (0x0009b49b) main_welc_pane_t4

0x8a58,	// (0x0009b4ad) main_welc_pane_t5_ParamLimits

0x8a58,	// (0x0009b4ad) main_welc_pane_t5

0x8a88,	// (0x0009b4dd) main_welc_pane_t6_ParamLimits

0x8a88,	// (0x0009b4dd) main_welc_pane_t6

0x8b3e,	// (0x0009b593) welc_button_pane_2_ParamLimits

0x8b3e,	// (0x0009b593) welc_button_pane_2

0x8b56,	// (0x0009b5ab) welc_button_pane_3_ParamLimits

0x8b56,	// (0x0009b5ab) welc_button_pane_3

0xeb44,	// (0x000a1599) welc_button_pane_4

0x8b70,	// (0x0009b5c5) welc_button_pane_5_ParamLimits

0x8b70,	// (0x0009b5c5) welc_button_pane_5

0x0ea4,	// (0x000938f9) main_popup_welc_pane

0xebf7,	// (0x000a164c) main_welc_sk_g3

0xec01,	// (0x000a1656) main_welc_sk_g4

0xec0b,	// (0x000a1660) main_welc_sk_t3

0xec1b,	// (0x000a1670) main_welc_sk_t4

0xec2b,	// (0x000a1680) popup_welc_pane_t4

0xec39,	// (0x000a168e) popup_welc_pane_t5

0xec47,	// (0x000a169c) popup_welc_pane_t6

0x1131,	// (0x00093b86) main_acti_pane

0xecf8,	// (0x000a174d) main_sso_pane

0x8e30,	// (0x0009b885) sso_body_pane_ParamLimits

0x8e30,	// (0x0009b885) sso_body_pane

0x8e3e,	// (0x0009b893) sso_logo_pane_ParamLimits

0x8e3e,	// (0x0009b893) sso_logo_pane

0x8e67,	// (0x0009b8bc) sso_sk_pane_ParamLimits

0x8e67,	// (0x0009b8bc) sso_sk_pane

0xa0b9,	// (0x0009cb0e) main_sso_logo_pane_g1

0x8e74,	// (0x0009b8c9) sso_sk_pane_t1_ParamLimits

0x8e74,	// (0x0009b8c9) sso_sk_pane_t1

0x8e88,	// (0x0009b8dd) sso_sk_pane_t2_ParamLimits

0x8e88,	// (0x0009b8dd) sso_sk_pane_t2

0x0001,

0xfe87,	// (0x000a28dc) sso_sk_pane_t_ParamLimits

0xfe87,	// (0x000a28dc) sso_sk_pane_t

0xec85,	// (0x000a16da) aid_sso_gap

0xec8e,	// (0x000a16e3) aid_sso_txt1

0xec98,	// (0x000a16ed) aid_sso_txt2

0xeca2,	// (0x000a16f7) aid_sso_txt3

0x0002,

0xfe8c,	// (0x000a28e1) aid_sso_txt

0xecac,	// (0x000a1701) aid_sso_widget

0x8ee7,	// (0x0009b93c) sso_btn_pane_ParamLimits

0x8ee7,	// (0x0009b93c) sso_btn_pane

0x8f60,	// (0x0009b9b5) sso_option_pane_ParamLimits

0x8f60,	// (0x0009b9b5) sso_option_pane

0x8fda,	// (0x0009ba2f) sso_query_pane_ParamLimits

0x8fda,	// (0x0009ba2f) sso_query_pane

0x902a,	// (0x0009ba7f) sso_query_pane_cp01_ParamLimits

0x902a,	// (0x0009ba7f) sso_query_pane_cp01

0x907a,	// (0x0009bacf) sso_t_hdr_pane_ParamLimits

0x907a,	// (0x0009bacf) sso_t_hdr_pane

0x909e,	// (0x0009baf3) sso_t_nml_pane_ParamLimits

0x909e,	// (0x0009baf3) sso_t_nml_pane

0xecb6,	// (0x000a170b) sso_t_sub_pane

0x8e4b,	// (0x0009b8a0) sso_popup_window_ParamLimits

0x8e4b,	// (0x0009b8a0) sso_popup_window

0x8e9a,	// (0x0009b8ef) sso_apps_pane_ParamLimits

0x8e9a,	// (0x0009b8ef) sso_apps_pane

0x8ebd,	// (0x0009b912) sso_body_pane_g1

0x8ec7,	// (0x0009b91c) sso_body_pane_t1

0x8ed7,	// (0x0009b92c) sso_body_pane_t2

0x0001,

0xfe93,	// (0x000a28e8) sso_body_pane_t

0x8f32,	// (0x0009b987) sso_btn_pane_cp01_ParamLimits

0x8f32,	// (0x0009b987) sso_btn_pane_cp01

0x8fac,	// (0x0009ba01) sso_prog_pane_ParamLimits

0x8fac,	// (0x0009ba01) sso_prog_pane

0xeeed,	// (0x000a1942) sso_t_hdr_pane_t1_ParamLimits

0xeeed,	// (0x000a1942) sso_t_hdr_pane_t1

0xeccb,	// (0x000a1720) input_focus_pane_cp10_ParamLimits

0xeccb,	// (0x000a1720) input_focus_pane_cp10

0xece5,	// (0x000a173a) sso_query_pane_t1_ParamLimits

0xece5,	// (0x000a173a) sso_query_pane_t1

0xed30,	// (0x000a1785) sso_query_pane_t2_ParamLimits

0xed30,	// (0x000a1785) sso_query_pane_t2

0xed4b,	// (0x000a17a0) sso_query_pane_t3_ParamLimits

0xed4b,	// (0x000a17a0) sso_query_pane_t3

0xed75,	// (0x000a17ca) sso_query_pane_t4_ParamLimits

0xed75,	// (0x000a17ca) sso_query_pane_t4

0x0003,

0xfe98,	// (0x000a28ed) sso_query_pane_t_ParamLimits

0xfe98,	// (0x000a28ed) sso_query_pane_t

0xecf8,	// (0x000a174d) bg_button_pane_cp22

0xebe8,	// (0x000a163d) sso_btn_pane_t1

0x90ee,	// (0x0009bb43) sso_t_nml_pane_t1_ParamLimits

0x90ee,	// (0x0009bb43) sso_t_nml_pane_t1

0xed99,	// (0x000a17ee) sso_option_row_pane_ParamLimits

0xed99,	// (0x000a17ee) sso_option_row_pane

0xedac,	// (0x000a1801) sso_t_sub_pane_t1_ParamLimits

0xedac,	// (0x000a1801) sso_t_sub_pane_t1

0xed22,	// (0x000a1777) bg_popup_window_pane_cp11_ParamLimits

0xed22,	// (0x000a1777) bg_popup_window_pane_cp11

0xedc9,	// (0x000a181e) popup_sk_window_cp01_ParamLimits

0xedc9,	// (0x000a181e) popup_sk_window_cp01

0xedd6,	// (0x000a182b) sso_popup_body_pane_ParamLimits

0xedd6,	// (0x000a182b) sso_popup_body_pane

0xede3,	// (0x000a1838) scroll_pane_cp21_ParamLimits

0xede3,	// (0x000a1838) scroll_pane_cp21

0xedf0,	// (0x000a1845) sso_popup_body_t_pane_ParamLimits

0xedf0,	// (0x000a1845) sso_popup_body_t_pane

0xee3d,	// (0x000a1892) sso_popup_body_t_hdr_pane_ParamLimits

0xee3d,	// (0x000a1892) sso_popup_body_t_hdr_pane

0xee50,	// (0x000a18a5) sso_popup_body_t_nml_pane_ParamLimits

0xee50,	// (0x000a18a5) sso_popup_body_t_nml_pane

0xee6e,	// (0x000a18c3) sso_popup_body_t_sub_pane_ParamLimits

0xee6e,	// (0x000a18c3) sso_popup_body_t_sub_pane

0xee91,	// (0x000a18e6) sso_popup_body_t_hdr_pane_t1

0x910b,	// (0x0009bb60) sso_popup_body_t_nml_pane_t1_ParamLimits

0x910b,	// (0x0009bb60) sso_popup_body_t_nml_pane_t1

0xeea1,	// (0x000a18f6) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeea1,	// (0x000a18f6) sso_popup_body_t_sub_pane_t1

0xa0b9,	// (0x0009cb0e) sso_prog_pane_g1

0x914f,	// (0x0009bba4) sso_apps_pane_comp1_ParamLimits

0x914f,	// (0x0009bba4) sso_apps_pane_comp1

0xeec6,	// (0x000a191b) sso_apps_pane_comp1_g1

0xef06,	// (0x000a195b) sso_apps_pane_comp1_t1

0xef22,	// (0x000a1977) sso_option_row_pane_g1

0xef2a,	// (0x000a197f) sso_option_row_pane_t1

0x8970,	// (0x0009b3c5) bg_welc_area_ParamLimits

0x8970,	// (0x0009b3c5) bg_welc_area

0x8abe,	// (0x0009b513) sso_t_hdr_pane_a_t1_ParamLimits

0x8abe,	// (0x0009b513) sso_t_hdr_pane_a_t1

0x8ad2,	// (0x0009b527) sso_t_nml_pane_a_t1_ParamLimits

0x8ad2,	// (0x0009b527) sso_t_nml_pane_a_t1

0x8afc,	// (0x0009b551) sso_t_sub_pane_a_t1_ParamLimits

0x8afc,	// (0x0009b551) sso_t_sub_pane_a_t1

0xebe8,	// (0x000a163d) sso_btn_pane_t1_copy1

0xecf8,	// (0x000a174d) welc_button_pane_2_comp1

0xec55,	// (0x000a16aa) sso_t_hdr_pane_p_t1

0xec65,	// (0x000a16ba) sso_t_nml_pane_p_t1

0xec75,	// (0x000a16ca) sso_t_sub_pane_p_t1

0xe0e7,	// (0x000a0b3c) list_cmail_pane_ParamLimits

0x8b80,	// (0x0009b5d5) welc_button_pane_cp01_ParamLimits

0x8b80,	// (0x0009b5d5) welc_button_pane_cp01

0xecf8,	// (0x000a174d) main_att_pane

0xef14,	// (0x000a1969) input_focus_pane_cp10_t1

0xef2a,	// (0x000a197f) sso_option_row_pane_t1_ParamLimits

0x9169,	// (0x0009bbbe) main_att_body_pane_ParamLimits

0x9169,	// (0x0009bbbe) main_att_body_pane

0x9195,	// (0x0009bbea) att_btn_pane_ParamLimits

0x9195,	// (0x0009bbea) att_btn_pane

0x91b7,	// (0x0009bc0c) att_btn_pane_cp01_ParamLimits

0x91b7,	// (0x0009bc0c) att_btn_pane_cp01

0x91d1,	// (0x0009bc26) att_li_srv_pane_ParamLimits

0x91d1,	// (0x0009bc26) att_li_srv_pane

0x91e3,	// (0x0009bc38) att_opt_pane_ParamLimits

0x91e3,	// (0x0009bc38) att_opt_pane

0x9227,	// (0x0009bc7c) att_query_pane_ParamLimits

0x9227,	// (0x0009bc7c) att_query_pane

0x926b,	// (0x0009bcc0) att_query_pane_cp01_ParamLimits

0x926b,	// (0x0009bcc0) att_query_pane_cp01

0x92af,	// (0x0009bd04) att_t_hdr_pane_ParamLimits

0x92af,	// (0x0009bd04) att_t_hdr_pane

0x9301,	// (0x0009bd56) att_t_nml_pane_ParamLimits

0x9301,	// (0x0009bd56) att_t_nml_pane

0x9335,	// (0x0009bd8a) att_t_nml_pane_cp01_ParamLimits

0x9335,	// (0x0009bd8a) att_t_nml_pane_cp01

0x9359,	// (0x0009bdae) att_t_nmlb_pane_ParamLimits

0x9359,	// (0x0009bdae) att_t_nmlb_pane

0x9373,	// (0x0009bdc8) att_term_pane_ParamLimits

0x9373,	// (0x0009bdc8) att_term_pane

0x93b7,	// (0x0009be0c) main_att_body_pane_g1_ParamLimits

0x93b7,	// (0x0009be0c) main_att_body_pane_g1

0xeeed,	// (0x000a1942) att_t_hdr_pane_t1_ParamLimits

0xeeed,	// (0x000a1942) att_t_hdr_pane_t1

0xef40,	// (0x000a1995) att_t_nml_pane_t1_ParamLimits

0xef40,	// (0x000a1995) att_t_nml_pane_t1

0xef65,	// (0x000a19ba) att_btn_pane_t1

0xecf8,	// (0x000a174d) bg_button_pane_cp23

0xeece,	// (0x000a1923) att_li_srv_row_pane_ParamLimits

0xeece,	// (0x000a1923) att_li_srv_row_pane

0xef75,	// (0x000a19ca) att_t_nmlb_pane_t1_ParamLimits

0xef75,	// (0x000a19ca) att_t_nmlb_pane_t1

0xef8e,	// (0x000a19e3) att_query_pane_t1

0xef9d,	// (0x000a19f2) att_query_pane_t2

0xefac,	// (0x000a1a01) att_query_pane_t3

0x0002,

0xfea1,	// (0x000a28f6) att_query_pane_t

0xefbb,	// (0x000a1a10) input_focus_pane_cp11

0xefc4,	// (0x000a1a19) att_term_pane_t1_ParamLimits

0xefc4,	// (0x000a1a19) att_term_pane_t1

0xecf8,	// (0x000a174d) att_opt_row_pane

0xefe1,	// (0x000a1a36) att_opt_row_pane_g1

0xefe9,	// (0x000a1a3e) att_opt_row_pane_t1_ParamLimits

0xefe9,	// (0x000a1a3e) att_opt_row_pane_t1

0x93eb,	// (0x0009be40) att_li_srv_row_pane_g1

0x93f3,	// (0x0009be48) att_li_srv_row_pane_t1

0x9408,	// (0x0009be5d) att_li_srv_row_pane_t2

0x0001,

0xfea8,	// (0x000a28fd) att_li_srv_row_pane_t

0xecf8,	// (0x000a174d) main_call7_pane

0xecf8,	// (0x000a174d) main_vod_pane

0xecb6,	// (0x000a170b) sso_t_sub_pane_ParamLimits

0x917d,	// (0x0009bbd2) att_btn_emg_pane_ParamLimits

0x917d,	// (0x0009bbd2) att_btn_emg_pane

0x93f3,	// (0x0009be48) att_li_srv_row_pane_t1_ParamLimits

0x9408,	// (0x0009be5d) att_li_srv_row_pane_t2_ParamLimits

0xfea8,	// (0x000a28fd) att_li_srv_row_pane_t_ParamLimits

0xf002,	// (0x000a1a57) att_btn_close_pane_g1

0xecf8,	// (0x000a174d) bg_button_pane_cp24

0x941d,	// (0x0009be72) main_vod_body_pane_ParamLimits

0x941d,	// (0x0009be72) main_vod_body_pane

0x942b,	// (0x0009be80) main_vod_body_pane_g1_ParamLimits

0x942b,	// (0x0009be80) main_vod_body_pane_g1

0x945b,	// (0x0009beb0) scroll_pane_cp24_ParamLimits

0x945b,	// (0x0009beb0) scroll_pane_cp24

0x94a3,	// (0x0009bef8) vod_btn_pane_ParamLimits

0x94a3,	// (0x0009bef8) vod_btn_pane

0x94e3,	// (0x0009bf38) vod_det_pane_ParamLimits

0x94e3,	// (0x0009bf38) vod_det_pane

0x950d,	// (0x0009bf62) vod_logo_g1_ParamLimits

0x950d,	// (0x0009bf62) vod_logo_g1

0x9547,	// (0x0009bf9c) vod_opt_pane_ParamLimits

0x9547,	// (0x0009bf9c) vod_opt_pane

0x9577,	// (0x0009bfcc) vod_opt_pane_cp01_ParamLimits

0x9577,	// (0x0009bfcc) vod_opt_pane_cp01

0x959f,	// (0x0009bff4) vod_query_pane_ParamLimits

0x959f,	// (0x0009bff4) vod_query_pane

0x95c9,	// (0x0009c01e) vod_query_pane_cp01_ParamLimits

0x95c9,	// (0x0009c01e) vod_query_pane_cp01

0x95d5,	// (0x0009c02a) vod_t_nml_pane_ParamLimits

0x95d5,	// (0x0009c02a) vod_t_nml_pane

0x9677,	// (0x0009c0cc) vod_t_nml_pane_cp01_ParamLimits

0x9677,	// (0x0009c0cc) vod_t_nml_pane_cp01

0x96af,	// (0x0009c104) vod_t_sub_pane_ParamLimits

0x96af,	// (0x0009c104) vod_t_sub_pane

0x96dd,	// (0x0009c132) vod_t_sub_pane_cp01_ParamLimits

0x96dd,	// (0x0009c132) vod_t_sub_pane_cp01

0xefbb,	// (0x000a1a10) vod_query_field_pane

0xef8e,	// (0x000a19e3) vod_query_pane_t1

0xecf8,	// (0x000a174d) bg_button_pane_cp25

0xf00a,	// (0x000a1a5f) sso_btn_pane_t1_copy2

0x9705,	// (0x0009c15a) vod_t_nml_pane_t1_ParamLimits

0x9705,	// (0x0009c15a) vod_t_nml_pane_t1

0xf01a,	// (0x000a1a6f) vod_opt_row_pane_ParamLimits

0xf01a,	// (0x000a1a6f) vod_opt_row_pane

0xf02c,	// (0x000a1a81) vod_t_sub_pane_t1_ParamLimits

0xf02c,	// (0x000a1a81) vod_t_sub_pane_t1

0x973a,	// (0x0009c18f) vod_det_cell_pane_ParamLimits

0x973a,	// (0x0009c18f) vod_det_cell_pane

0xecf8,	// (0x000a174d) input_focus_pane_cp15

0xb277,	// (0x0009dccc) vod_query_field_pane_t1

0xb285,	// (0x0009dcda) vod_opt_row_pane_g1_ParamLimits

0xb285,	// (0x0009dcda) vod_opt_row_pane_g1

0xb291,	// (0x0009dce6) vod_opt_row_pane_t1_ParamLimits

0xb291,	// (0x0009dce6) vod_opt_row_pane_t1

0xb2b6,	// (0x0009dd0b) vod_det_cell_field_pane

0xb2bf,	// (0x0009dd14) vod_det_cell_pane_g1

0xef8e,	// (0x000a19e3) vod_det_cell_pane_t1

0xecf8,	// (0x000a174d) input_focus_pane_cp16

0xb277,	// (0x0009dccc) vod_det_cell_field_pane_t1

0x974c,	// (0x0009c1a1) call7_btn_grp_pane_ParamLimits

0x974c,	// (0x0009c1a1) call7_btn_grp_pane

0x975b,	// (0x0009c1b0) call7_bubble_pane_ParamLimits

0x975b,	// (0x0009c1b0) call7_bubble_pane

0x9769,	// (0x0009c1be) cell_call7_btn_pane_ParamLimits

0x9769,	// (0x0009c1be) cell_call7_btn_pane

0x9778,	// (0x0009c1cd) call7_pane_g1_ParamLimits

0x9778,	// (0x0009c1cd) call7_pane_g1

0x9787,	// (0x0009c1dc) call7_windows_conf_pane_ParamLimits

0x9787,	// (0x0009c1dc) call7_windows_conf_pane

0x97a3,	// (0x0009c1f8) popup_call7_1st_window_ParamLimits

0x97a3,	// (0x0009c1f8) popup_call7_1st_window

0x97b1,	// (0x0009c206) popup_call7_2nd_window_ParamLimits

0x97b1,	// (0x0009c206) popup_call7_2nd_window

0x97bf,	// (0x0009c214) popup_call7_3rd_window_ParamLimits

0x97bf,	// (0x0009c214) popup_call7_3rd_window

0xecf8,	// (0x000a174d) bg_button_pane_cp26

0xe9a6,	// (0x000a13fb) cell_call7_btn_pane_g1

0xeede,	// (0x000a1933) cell_call7_btn_pane_t1

0xecf8,	// (0x000a174d) bg_popup_window_pane_cp12

0xb2c7,	// (0x0009dd1c) popup_call7_1st_window_g1

0xb2cf,	// (0x0009dd24) popup_call7_1st_window_g2

0xb2d7,	// (0x0009dd2c) popup_call7_1st_window_g3

0x0002,

0xfead,	// (0x000a2902) popup_call7_1st_window_g

0xb2df,	// (0x0009dd34) popup_call7_1st_window_t1

0xb2ee,	// (0x0009dd43) popup_call7_1st_window_t2

0xb2fc,	// (0x0009dd51) popup_call7_1st_window_t3

0x0002,

0xfeb4,	// (0x000a2909) popup_call7_1st_window_t

0xecf8,	// (0x000a174d) bg_popup_window_pane_cp13

0xb30a,	// (0x0009dd5f) popup_call7_2nd_window_g1

0xb312,	// (0x0009dd67) popup_call7_2nd_window_g2

0xb31a,	// (0x0009dd6f) popup_call7_2nd_window_g3

0x0002,

0xfebb,	// (0x000a2910) popup_call7_2nd_window_g

0xb322,	// (0x0009dd77) popup_call7_2nd_window_t1

0xecf8,	// (0x000a174d) bg_popup_window_pane_cp14

0xb331,	// (0x0009dd86) call7_list_conf_pane

0xb339,	// (0x0009dd8e) call7_list_conf_row_pane_ParamLimits

0xb339,	// (0x0009dd8e) call7_list_conf_row_pane

0xb34c,	// (0x0009dda1) call7_list_conf_row_pane_g1

0xb354,	// (0x0009dda9) call7_list_conf_row_pane_g2

0x0001,

0xfec2,	// (0x000a2917) call7_list_conf_row_pane_g

0xb35c,	// (0x0009ddb1) call7_list_conf_row_pane_t1

0xecf8,	// (0x000a174d) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
