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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00019e1d };

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
0x5b4f,	// (0x0001f96c) Screen

0x5b5b,	// (0x0001f978) application_window

0x5b67,	// (0x0001f984) area_bottom_pane_ParamLimits

0x5b67,	// (0x0001f984) area_bottom_pane

0x4338,	// (0x0001e155) area_top_pane_ParamLimits

0x4338,	// (0x0001e155) area_top_pane

0x439c,	// (0x0001e1b9) call_video_uplink_pane_ParamLimits

0x439c,	// (0x0001e1b9) call_video_uplink_pane

0x43d9,	// (0x0001e1f6) main_pane_ParamLimits

0x43d9,	// (0x0001e1f6) main_pane

0xf038,	// (0x00028e55) context_pane

0x866a,	// (0x00022487) navi_pane

0x868a,	// (0x000224a7) popup_cale_events_window_ParamLimits

0x868a,	// (0x000224a7) popup_cale_events_window

0xf04b,	// (0x00028e68) popup_mup_playback_window

0x86a2,	// (0x000224bf) signal_pane

0xcffb,	// (0x00026e18) main_browser_pane

0xdbdf,	// (0x000279fc) main_burst_pane

0x49e9,	// (0x0001e806) main_calc_pane

0xdbdf,	// (0x000279fc) main_cale_day_pane

0xcffb,	// (0x00026e18) main_cale_month_pane

0xdbdf,	// (0x000279fc) main_cale_week_pane

0xdbdf,	// (0x000279fc) main_call_pane

0xcc89,	// (0x00026aa6) main_call_poc_pane

0xdbdf,	// (0x000279fc) main_camera_pane

0xdbdf,	// (0x000279fc) main_chi_dic_pane

0xda6e,	// (0x0002788b) main_clock_pane

0xcc89,	// (0x00026aa6) main_fmradio_pane

0xdbdf,	// (0x000279fc) main_graph_messa_pane

0xcc89,	// (0x00026aa6) main_help_pane

0xcffb,	// (0x00026e18) main_im_pane

0xcee4,	// (0x00026d01) main_image_pane_ParamLimits

0xcee4,	// (0x00026d01) main_image_pane

0xcc89,	// (0x00026aa6) main_location2_pane

0xdbdf,	// (0x000279fc) main_location_pane

0xcc89,	// (0x00026aa6) main_messa_pane

0xcc89,	// (0x00026aa6) main_mp2_pane

0xdbdf,	// (0x000279fc) main_mp_pane

0xcc89,	// (0x00026aa6) main_msg_pane

0xcc89,	// (0x00026aa6) main_mup_eq_pane

0xcc89,	// (0x00026aa6) main_mup_pane

0xcffb,	// (0x00026e18) main_notes_pane

0xcc89,	// (0x00026aa6) main_pec_pane

0xcc89,	// (0x00026aa6) main_phob_pane

0xcc89,	// (0x00026aa6) main_pinb_pane

0xcc89,	// (0x00026aa6) main_postcard_pane

0xcc89,	// (0x00026aa6) main_qdial_pane

0xdbdf,	// (0x000279fc) main_skin_pane

0xcc89,	// (0x00026aa6) main_smil2_pane

0xdbdf,	// (0x000279fc) main_smil_pane

0xdbdf,	// (0x000279fc) main_video_pane

0xdbdf,	// (0x000279fc) main_video_tele_pane

0xcee4,	// (0x00026d01) main_viewer_pane_ParamLimits

0xcee4,	// (0x00026d01) main_viewer_pane

0xdbdf,	// (0x000279fc) main_vorec_pane

0x4a35,	// (0x0001e852) popup_blid_sat_info_window_ParamLimits

0x4a35,	// (0x0001e852) popup_blid_sat_info_window

0x4a55,	// (0x0001e872) popup_dyc_status_message_window_ParamLimits

0x4a55,	// (0x0001e872) popup_dyc_status_message_window

0x4a63,	// (0x0001e880) popup_grid_large_graphic_window_ParamLimits

0x4a63,	// (0x0001e880) popup_grid_large_graphic_window

0x4af2,	// (0x0001e90f) popup_loc_request_window_ParamLimits

0x4af2,	// (0x0001e90f) popup_loc_request_window

0x4b38,	// (0x0001e955) popup_wml_address_window_ParamLimits

0x4b38,	// (0x0001e955) popup_wml_address_window

0x854c,	// (0x00022369) call_muted_g1

0x820b,	// (0x00022028) popup_call_audio_conf_window_ParamLimits

0x820b,	// (0x00022028) popup_call_audio_conf_window

0x855c,	// (0x00022379) popup_call_audio_first_window_ParamLimits

0x855c,	// (0x00022379) popup_call_audio_first_window

0x859c,	// (0x000223b9) popup_call_audio_in_window_ParamLimits

0x859c,	// (0x000223b9) popup_call_audio_in_window

0x85c0,	// (0x000223dd) popup_call_audio_out_window_ParamLimits

0x85c0,	// (0x000223dd) popup_call_audio_out_window

0x85e2,	// (0x000223ff) popup_call_audio_second_window_ParamLimits

0x85e2,	// (0x000223ff) popup_call_audio_second_window

0x8612,	// (0x0002242f) popup_call_audio_wait_window_ParamLimits

0x8612,	// (0x0002242f) popup_call_audio_wait_window

0x8633,	// (0x00022450) popup_number_entry_window_ParamLimits

0x8633,	// (0x00022450) popup_number_entry_window

0xc86a,	// (0x00026687) bg_popup_call_pane_cp05_ParamLimits

0xc86a,	// (0x00026687) bg_popup_call_pane_cp05

0xc88a,	// (0x000266a7) popup_number_entry_window_t1

0xc89d,	// (0x000266ba) popup_number_entry_window_t2

0xc8af,	// (0x000266cc) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00028ef5) popup_number_entry_window_t

0xc8c1,	// (0x000266de) text_title_cp2

0xc8d4,	// (0x000266f1) bg_popup_call_pane_cp_ParamLimits

0xc8d4,	// (0x000266f1) bg_popup_call_pane_cp

0xc8e2,	// (0x000266ff) call_thumbnail_pane

0xc8ea,	// (0x00026707) popup_call_audio_in_window_g1_ParamLimits

0xc8ea,	// (0x00026707) popup_call_audio_in_window_g1

0xc8f6,	// (0x00026713) popup_call_audio_in_window_g2_ParamLimits

0xc8f6,	// (0x00026713) popup_call_audio_in_window_g2

0xc902,	// (0x0002671f) popup_call_audio_in_window_g3_ParamLimits

0xc902,	// (0x0002671f) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00028efe) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00028efe) popup_call_audio_in_window_g

0xc90e,	// (0x0002672b) popup_call_audio_in_window_t1_ParamLimits

0xc90e,	// (0x0002672b) popup_call_audio_in_window_t1

0xc929,	// (0x00026746) popup_call_audio_in_window_t2_ParamLimits

0xc929,	// (0x00026746) popup_call_audio_in_window_t2

0xc944,	// (0x00026761) popup_call_audio_in_window_t3_ParamLimits

0xc944,	// (0x00026761) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00028f05) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00028f05) popup_call_audio_in_window_t

0xc8d4,	// (0x000266f1) bg_popup_call_pane_cp01_ParamLimits

0xc8d4,	// (0x000266f1) bg_popup_call_pane_cp01

0xc8e2,	// (0x000266ff) call_thumbnail_pane_cp02

0xc957,	// (0x00026774) call_type_pane_cp022

0xc95f,	// (0x0002677c) popup_call_audio_out_window_g1_ParamLimits

0xc95f,	// (0x0002677c) popup_call_audio_out_window_g1

0xc971,	// (0x0002678e) popup_call_audio_out_window_g2_ParamLimits

0xc971,	// (0x0002678e) popup_call_audio_out_window_g2

0xc97d,	// (0x0002679a) popup_call_audio_out_window_g3_ParamLimits

0xc97d,	// (0x0002679a) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00028f0c) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00028f0c) popup_call_audio_out_window_g

0xc98f,	// (0x000267ac) popup_call_audio_out_window_t1_ParamLimits

0xc98f,	// (0x000267ac) popup_call_audio_out_window_t1

0xc9a7,	// (0x000267c4) popup_call_audio_out_window_t2_ParamLimits

0xc9a7,	// (0x000267c4) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00028f13) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00028f13) popup_call_audio_out_window_t

0xc9bc,	// (0x000267d9) bg_popup_call_pane_ParamLimits

0xc9bc,	// (0x000267d9) bg_popup_call_pane

0x5be7,	// (0x0001fa04) call_thumbnail_pane_cp_ParamLimits

0x5be7,	// (0x0001fa04) call_thumbnail_pane_cp

0xca40,	// (0x0002685d) call_type_pane_cp01_ParamLimits

0xca40,	// (0x0002685d) call_type_pane_cp01

0xca84,	// (0x000268a1) popup_call_audio_first_window_g1_ParamLimits

0xca84,	// (0x000268a1) popup_call_audio_first_window_g1

0xcade,	// (0x000268fb) popup_call_audio_first_window_g2_ParamLimits

0xcade,	// (0x000268fb) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00028f18) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00028f18) popup_call_audio_first_window_g

0xcb22,	// (0x0002693f) popup_call_audio_first_window_t1_ParamLimits

0xcb22,	// (0x0002693f) popup_call_audio_first_window_t1

0xcbce,	// (0x000269eb) popup_call_audio_first_window_t4_ParamLimits

0xcbce,	// (0x000269eb) popup_call_audio_first_window_t4

0xcc5a,	// (0x00026a77) popup_call_audio_first_window_t5_ParamLimits

0xcc5a,	// (0x00026a77) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00028f1d) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00028f1d) popup_call_audio_first_window_t

0xcc89,	// (0x00026aa6) bg_popup_call_pane_cp02

0xcc93,	// (0x00026ab0) call_type_pane_cp023

0xcc9b,	// (0x00026ab8) popup_call_audio_wait_window_g1

0xcca3,	// (0x00026ac0) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00028f24) popup_call_audio_wait_window_g

0xccab,	// (0x00026ac8) popup_call_audio_wait_window_t3

0xccb9,	// (0x00026ad6) bg_popup_call_pane_cp03_ParamLimits

0xccb9,	// (0x00026ad6) bg_popup_call_pane_cp03

0xcd19,	// (0x00026b36) call_thumbnail_pane_cp011_ParamLimits

0xcd19,	// (0x00026b36) call_thumbnail_pane_cp011

0xcd25,	// (0x00026b42) call_type_pane_cp034_ParamLimits

0xcd25,	// (0x00026b42) call_type_pane_cp034

0xcd61,	// (0x00026b7e) popup_call_audio_second_window_g1_ParamLimits

0xcd61,	// (0x00026b7e) popup_call_audio_second_window_g1

0xcd9d,	// (0x00026bba) popup_call_audio_second_window_g2_ParamLimits

0xcd9d,	// (0x00026bba) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00028f29) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00028f29) popup_call_audio_second_window_g

0xcdd9,	// (0x00026bf6) popup_call_audio_second_window_t1_ParamLimits

0xcdd9,	// (0x00026bf6) popup_call_audio_second_window_t1

0xce5a,	// (0x00026c77) popup_call_audio_second_window_t2_ParamLimits

0xce5a,	// (0x00026c77) popup_call_audio_second_window_t2

0xce90,	// (0x00026cad) popup_call_audio_second_window_t3_ParamLimits

0xce90,	// (0x00026cad) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00028f2e) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00028f2e) popup_call_audio_second_window_t

0xcc89,	// (0x00026aa6) bg_popup_call_pane_cp04

0xcec6,	// (0x00026ce3) list_conf_pane

0xcece,	// (0x00026ceb) popup_call_audio_conf_window_t1

0xcedc,	// (0x00026cf9) call_thumbnail_pane_g1

0xcee4,	// (0x00026d01) bg_pinb_pane_ParamLimits

0xcee4,	// (0x00026d01) bg_pinb_pane

0xcef2,	// (0x00026d0f) find_pinb_pane

0xcefb,	// (0x00026d18) listscroll_pinb_pane_ParamLimits

0xcefb,	// (0x00026d18) listscroll_pinb_pane

0xcf0a,	// (0x00026d27) pinb_bg_pane_g1

0x5c0b,	// (0x0001fa28) pinb_bg_pane_g2

0x5c17,	// (0x0001fa34) pinb_bg_pane_g3

0x5c23,	// (0x0001fa40) pinb_bg_pane_g4

0x5c2f,	// (0x0001fa4c) pinb_bg_pane_g5

0x5c3b,	// (0x0001fa58) pinb_bg_pane_g6

0x5c46,	// (0x0001fa63) pinb_bg_pane_g7

0x5c51,	// (0x0001fa6e) pinb_bg_pane_g8

0x5c5c,	// (0x0001fa79) pinb_bg_pane_g9

0x5c66,	// (0x0001fa83) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00028f35) pinb_bg_pane_g

0x5c7b,	// (0x0001fa98) grid_pinb_pane

0x5c86,	// (0x0001faa3) list_pinb_pane

0x5c91,	// (0x0001faae) scroll_pane_cp01_ParamLimits

0x5c91,	// (0x0001faae) scroll_pane_cp01

0xcf1c,	// (0x00026d39) find_pinb_pane_g1_ParamLimits

0xcf1c,	// (0x00026d39) find_pinb_pane_g1

0xcf34,	// (0x00026d51) find_pinb_pane_t1

0xcf46,	// (0x00026d63) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00028f4f) find_pinb_pane_t

0xcf5b,	// (0x00026d78) input_focus_pane_cp01_ParamLimits

0xcf5b,	// (0x00026d78) input_focus_pane_cp01

0x5ca3,	// (0x0001fac0) cell_pinb_pane_ParamLimits

0x5ca3,	// (0x0001fac0) cell_pinb_pane

0x5cd7,	// (0x0001faf4) cell_pinb_pane_g1_ParamLimits

0x5cd7,	// (0x0001faf4) cell_pinb_pane_g1

0x5cec,	// (0x0001fb09) cell_pinb_pane_g2_ParamLimits

0x5cec,	// (0x0001fb09) cell_pinb_pane_g2

0xcf67,	// (0x00026d84) cell_pinb_pane_g3_ParamLimits

0xcf67,	// (0x00026d84) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00028f54) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00028f54) cell_pinb_pane_g

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp01

0x5cf8,	// (0x0001fb15) list_pinb_item_pane_ParamLimits

0x5cf8,	// (0x0001fb15) list_pinb_item_pane

0xcc89,	// (0x00026aa6) list_highlight_pane_cp02

0xcf73,	// (0x00026d90) list_pinb_item_pane_g1_ParamLimits

0xcf73,	// (0x00026d90) list_pinb_item_pane_g1

0xcf80,	// (0x00026d9d) list_pinb_item_pane_g2_ParamLimits

0xcf80,	// (0x00026d9d) list_pinb_item_pane_g2

0x5d25,	// (0x0001fb42) list_pinb_item_pane_g3_ParamLimits

0x5d25,	// (0x0001fb42) list_pinb_item_pane_g3

0xcf8c,	// (0x00026da9) list_pinb_item_pane_g4_ParamLimits

0xcf8c,	// (0x00026da9) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00028f5b) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00028f5b) list_pinb_item_pane_g

0xcf98,	// (0x00026db5) list_pinb_item_pane_t1_ParamLimits

0xcf98,	// (0x00026db5) list_pinb_item_pane_t1

0x45bd,	// (0x0001e3da) calc_display_pane

0x45db,	// (0x0001e3f8) calc_paper_pane

0x45f7,	// (0x0001e414) grid_calc_pane

0xcc89,	// (0x00026aa6) bg_list_pane_cp01

0x5d36,	// (0x0001fb53) clock_g1

0x5d3e,	// (0x0001fb5b) clock_g2

0x0001,

0xf147,	// (0x00028f64) clock_g

0x5d48,	// (0x0001fb65) clock_t1_ParamLimits

0x5d48,	// (0x0001fb65) clock_t1

0x5d5d,	// (0x0001fb7a) clock_t2_ParamLimits

0x5d5d,	// (0x0001fb7a) clock_t2

0x5d6f,	// (0x0001fb8c) clock_t3_ParamLimits

0x5d6f,	// (0x0001fb8c) clock_t3

0x5d81,	// (0x0001fb9e) clock_t4_ParamLimits

0x5d81,	// (0x0001fb9e) clock_t4

0x5d93,	// (0x0001fbb0) clock_t5_ParamLimits

0x5d93,	// (0x0001fbb0) clock_t5

0x5da8,	// (0x0001fbc5) clock_t6_ParamLimits

0x5da8,	// (0x0001fbc5) clock_t6

0x5dba,	// (0x0001fbd7) clock_t7_ParamLimits

0x5dba,	// (0x0001fbd7) clock_t7

0x5dcc,	// (0x0001fbe9) clock_t8_ParamLimits

0x5dcc,	// (0x0001fbe9) clock_t8

0x5de2,	// (0x0001fbff) clock_t9_ParamLimits

0x5de2,	// (0x0001fbff) clock_t9

0x0008,

0xf14c,	// (0x00028f69) clock_t_ParamLimits

0xf14c,	// (0x00028f69) clock_t

0xcfaf,	// (0x00026dcc) popup_clock_analogue_window_cp02

0xcfaf,	// (0x00026dcc) popup_clock_digital_window_cp01

0xcfb7,	// (0x00026dd4) listscroll_help_pane

0xcc89,	// (0x00026aa6) phob_pre_status_pane

0xcfc1,	// (0x00026dde) grid_qdial_pane

0xcc89,	// (0x00026aa6) listscroll_mce_pane

0xcfcb,	// (0x00026de8) bg_notes_pane

0xcfd9,	// (0x00026df6) list_notes_pane

0x5df8,	// (0x0001fc15) scroll_pane_cp06

0xcfe7,	// (0x00026e04) bg_calc_paper_pane

0x4623,	// (0x0001e440) list_calc_pane

0xcffb,	// (0x00026e18) bg_calc_display_pane

0x463d,	// (0x0001e45a) calc_display_pane_t1

0x4652,	// (0x0001e46f) calc_display_pane_t2

0x4667,	// (0x0001e484) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00028f7c) calc_display_pane_t

0x4679,	// (0x0001e496) cell_calc_pane_ParamLimits

0x4679,	// (0x0001e496) cell_calc_pane

0xd007,	// (0x00026e24) bg_calc_paper_pane_g1

0xd013,	// (0x00026e30) bg_calc_paper_pane_g2

0xd01f,	// (0x00026e3c) bg_calc_paper_pane_g3

0xd02b,	// (0x00026e48) bg_calc_paper_pane_g4

0xd037,	// (0x00026e54) bg_calc_paper_pane_g5

0x5e07,	// (0x0001fc24) bg_calc_paper_pane_g6

0x5e18,	// (0x0001fc35) bg_calc_paper_pane_g7

0x5e29,	// (0x0001fc46) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00028f83) bg_calc_paper_pane_g

0x5e3a,	// (0x0001fc57) calc_bg_paper_pane_g9

0x5e4b,	// (0x0001fc68) list_calc_item_pane_ParamLimits

0x5e4b,	// (0x0001fc68) list_calc_item_pane

0xd043,	// (0x00026e60) list_calc_item_pane_g1

0x46a6,	// (0x0001e4c3) list_calc_item_pane_t1_ParamLimits

0x46a6,	// (0x0001e4c3) list_calc_item_pane_t1

0x46b8,	// (0x0001e4d5) list_calc_item_pane_t2_ParamLimits

0x46b8,	// (0x0001e4d5) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00028f94) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00028f94) list_calc_item_pane_t

0xd050,	// (0x00026e6d) cell_calc_pane_g1

0xd05a,	// (0x00026e77) grid_highlight_pane_cp02

0xd07c,	// (0x00026e99) bg_calc_display_pane_g1

0x46e8,	// (0x0001e505) bg_calc_display_pane_g2

0xd085,	// (0x00026ea2) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00028f9e) bg_calc_display_pane_g

0x46f2,	// (0x0001e50f) cell_qdial_pane_ParamLimits

0x46f2,	// (0x0001e50f) cell_qdial_pane

0x5e85,	// (0x0001fca2) cell_qdial_pane_g1_ParamLimits

0x5e85,	// (0x0001fca2) cell_qdial_pane_g1

0x5e92,	// (0x0001fcaf) cell_qdial_pane_g2_ParamLimits

0x5e92,	// (0x0001fcaf) cell_qdial_pane_g2

0xd08e,	// (0x00026eab) cell_qdial_pane_g3_ParamLimits

0xd08e,	// (0x00026eab) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00028fa5) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00028fa5) cell_qdial_pane_g

0x5eb0,	// (0x0001fccd) cell_qdial_pane_t1_ParamLimits

0x5eb0,	// (0x0001fccd) cell_qdial_pane_t1

0x5ec8,	// (0x0001fce5) cell_qdial_pane_t2_ParamLimits

0x5ec8,	// (0x0001fce5) cell_qdial_pane_t2

0x5edb,	// (0x0001fcf8) cell_qdial_pane_t3_ParamLimits

0x5edb,	// (0x0001fcf8) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00028fae) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00028fae) cell_qdial_pane_t

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp04

0xd09a,	// (0x00026eb7) thumbnail_qdial_pane_ParamLimits

0xd09a,	// (0x00026eb7) thumbnail_qdial_pane

0xd0f6,	// (0x00026f13) list_help_pane

0xd0ff,	// (0x00026f1c) scroll_pane_cp02

0x5eee,	// (0x0001fd0b) help_list_pane_t1_ParamLimits

0x5eee,	// (0x0001fd0b) help_list_pane_t1

0x4706,	// (0x0001e523) bg_notes_pane_g2

0x470e,	// (0x0001e52b) bg_notes_pane_g3

0x4716,	// (0x0001e533) notes_bg_pane_g1

0x471e,	// (0x0001e53b) notes_bg_pane_g4

0x4726,	// (0x0001e543) notes_bg_pane_g5

0x472e,	// (0x0001e54b) notes_bg_pane_g6

0x4736,	// (0x0001e553) notes_bg_pane_g7

0x473e,	// (0x0001e55b) notes_bg_pane_g8

0x4746,	// (0x0001e563) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00028fcc) notes_bg_pane_g

0x5f2c,	// (0x0001fd49) list_notes_text_pane_ParamLimits

0x5f2c,	// (0x0001fd49) list_notes_text_pane

0xd108,	// (0x00026f25) list_notes_text_pane_g1

0x5f80,	// (0x0001fd9d) list_notes_text_pane_t1

0xcffb,	// (0x00026e18) listscroll_cale_week_pane

0x5fab,	// (0x0001fdc8) bg_cale_heading_pane

0xd122,	// (0x00026f3f) bg_cale_pane_cp01

0x5fc7,	// (0x0001fde4) cale_week_corner_pane

0x5fd8,	// (0x0001fdf5) cale_week_day_heading_pane

0x5ff4,	// (0x0001fe11) cale_week_scroll_pane_g1

0x600d,	// (0x0001fe2a) cale_week_scroll_pane_g2

0x601e,	// (0x0001fe3b) cale_week_scroll_pane_g3

0x602f,	// (0x0001fe4c) cale_week_scroll_pane_g4

0x6040,	// (0x0001fe5d) cale_week_scroll_pane_g5

0x6051,	// (0x0001fe6e) cale_week_scroll_pane_g6

0x6062,	// (0x0001fe7f) cale_week_scroll_pane_g7

0x6075,	// (0x0001fe92) cale_week_scroll_pane_g8

0x6088,	// (0x0001fea5) cale_week_scroll_pane_g9

0x6099,	// (0x0001feb6) cale_week_scroll_pane_g10

0x60aa,	// (0x0001fec7) cale_week_scroll_pane_g11

0x60bb,	// (0x0001fed8) cale_week_scroll_pane_g12

0x60d4,	// (0x0001fef1) cale_week_scroll_pane_g13

0x60ed,	// (0x0001ff0a) cale_week_scroll_pane_g14

0x6106,	// (0x0001ff23) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00028fdb) cale_week_scroll_pane_g

0x611f,	// (0x0001ff3c) cale_week_time_pane

0x6132,	// (0x0001ff4f) grid_cale_week_pane

0x614f,	// (0x0001ff6c) scroll_pane_cp08

0x6169,	// (0x0001ff86) cell_cale_week_pane_ParamLimits

0x6169,	// (0x0001ff86) cell_cale_week_pane

0x61b9,	// (0x0001ffd6) cale_week_day_heading_pane_t1

0x61cd,	// (0x0001ffea) cale_week_day_heading_pane_t2

0x61e1,	// (0x0001fffe) cale_week_day_heading_pane_t3

0x61f5,	// (0x00020012) cale_week_day_heading_pane_t4

0x6209,	// (0x00020026) cale_week_day_heading_pane_t5

0x621d,	// (0x0002003a) cale_week_day_heading_pane_t6

0x6231,	// (0x0002004e) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00028ffa) cale_week_day_heading_pane_t

0xd14d,	// (0x00026f6a) bg_cale_side_pane

0x474e,	// (0x0001e56b) cale_week_time_pane_t1

0x4766,	// (0x0001e583) cale_week_time_pane_t2

0x477e,	// (0x0001e59b) cale_week_time_pane_t3

0x4796,	// (0x0001e5b3) cale_week_time_pane_t4

0x47ae,	// (0x0001e5cb) cale_week_time_pane_t5

0x47c6,	// (0x0001e5e3) cale_week_time_pane_t6

0x47e6,	// (0x0001e603) cale_week_time_pane_t7

0x4806,	// (0x0001e623) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00029009) cale_week_time_pane_t

0x6245,	// (0x00020062) cell_cale_week_pane_g2

0x6256,	// (0x00020073) cell_cale_week_pane_g3_ParamLimits

0x6256,	// (0x00020073) cell_cale_week_pane_g3

0xd15b,	// (0x00026f78) grid_highlight_pane_cp07

0xd163,	// (0x00026f80) listscroll_gms_pane

0xd16d,	// (0x00026f8a) grid_gms_pane

0xd176,	// (0x00026f93) listscroll_gms_pane_g1

0xd17e,	// (0x00026f9b) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0002901a) listscroll_gms_pane_g

0x626e,	// (0x0002008b) scroll_pane_cp010

0x6279,	// (0x00020096) cell_gms_pane_ParamLimits

0x6279,	// (0x00020096) cell_gms_pane

0x628b,	// (0x000200a8) cell_gms_pane_g1

0xd186,	// (0x00026fa3) cell_gms_pane_g2

0xd108,	// (0x00026f25) cell_gms_pane_g3

0xd18e,	// (0x00026fab) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0002901f) cell_gms_pane_g

0xd197,	// (0x00026fb4) grid_highlight_pane_cp09

0x84f4,	// (0x00022311) phob_pre_status_pane_g1

0x84fc,	// (0x00022319) phob_pre_status_pane_g2

0x8504,	// (0x00022321) phob_pre_status_pane_g3

0x850c,	// (0x00022329) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0002940e) phob_pre_status_pane_g

0x851c,	// (0x00022339) phob_pre_status_pane_t1

0x852c,	// (0x00022349) phob_pre_status_pane_t2

0x853c,	// (0x00022359) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00029419) phob_pre_status_pane_t

0xcc89,	// (0x00026aa6) bg_list_pane_cp05

0x482e,	// (0x0001e64b) grid_vorec_pane

0x4838,	// (0x0001e655) vorec_t1

0x4846,	// (0x0001e663) vorec_t2

0x4854,	// (0x0001e671) vorec_t3

0x4862,	// (0x0001e67f) vorec_t4

0x4870,	// (0x0001e68d) vorec_t5

0x487e,	// (0x0001e69b) vorec_t6

0x0006,

0xf20b,	// (0x00029028) vorec_t

0x489a,	// (0x0001e6b7) wait_bar_pane_cp01

0xd19f,	// (0x00026fbc) cell_vorec_pane_ParamLimits

0xd19f,	// (0x00026fbc) cell_vorec_pane

0xd1b2,	// (0x00026fcf) cell_vorec_pane_g1

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp05

0x62a3,	// (0x000200c0) cams_zoom_pane

0x62af,	// (0x000200cc) image_vga_pane

0x62be,	// (0x000200db) main_camera_pane_g1

0x62cc,	// (0x000200e9) main_camera_pane_g2

0x62da,	// (0x000200f7) main_camera_pane_g3

0x62e6,	// (0x00020103) main_camera_pane_g4

0x62f2,	// (0x0002010f) main_camera_pane_g5

0x62fe,	// (0x0002011b) main_camera_pane_g6

0x630a,	// (0x00020127) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00029037) main_camera_pane_g

0x6316,	// (0x00020133) main_camera_pane_t1

0x6328,	// (0x00020145) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00029048) main_camera_pane_t

0x6349,	// (0x00020166) cams_zoom_pane_cp_ParamLimits

0x6349,	// (0x00020166) cams_zoom_pane_cp

0x636d,	// (0x0002018a) image_cif_pane_ParamLimits

0x636d,	// (0x0002018a) image_cif_pane

0x638b,	// (0x000201a8) image_subqcif_pane

0x6393,	// (0x000201b0) main_video_pane_g1_ParamLimits

0x6393,	// (0x000201b0) main_video_pane_g1

0x63b3,	// (0x000201d0) main_video_pane_g2_ParamLimits

0x63b3,	// (0x000201d0) main_video_pane_g2

0x63e5,	// (0x00020202) main_video_pane_g3_ParamLimits

0x63e5,	// (0x00020202) main_video_pane_g3

0x6410,	// (0x0002022d) main_video_pane_g4_ParamLimits

0x6410,	// (0x0002022d) main_video_pane_g4

0x643b,	// (0x00020258) main_video_pane_g5_ParamLimits

0x643b,	// (0x00020258) main_video_pane_g5

0xd1c8,	// (0x00026fe5) main_video_pane_g6_ParamLimits

0xd1c8,	// (0x00026fe5) main_video_pane_g6

0x0006,

0xf230,	// (0x0002904d) main_video_pane_g_ParamLimits

0xf230,	// (0x0002904d) main_video_pane_g

0x645f,	// (0x0002027c) main_video_pane_t1_ParamLimits

0x645f,	// (0x0002027c) main_video_pane_t1

0xd1e2,	// (0x00026fff) cams_zoom_pane_g1

0xd1eb,	// (0x00027008) cams_zoom_pane_g2

0xd1f4,	// (0x00027011) cams_zoom_pane_g3

0xd1fd,	// (0x0002701a) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0002905c) cams_zoom_pane_g

0x64a9,	// (0x000202c6) grid_cams_pane

0x64b7,	// (0x000202d4) linegrid_cams_pane

0x64c5,	// (0x000202e2) cell_cams_pane_ParamLimits

0x64c5,	// (0x000202e2) cell_cams_pane

0xd206,	// (0x00027023) cams_burst_image_pane

0xd20e,	// (0x0002702b) cell_cams_pane_g1

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp03

0xd050,	// (0x00026e6d) mp_bg_pane_g1

0xcc89,	// (0x00026aa6) bg_list_pane_cp03

0xef4f,	// (0x00028d6c) bg_mp_pane

0xef57,	// (0x00028d74) grid_mp_pane

0xef5f,	// (0x00028d7c) media_player_g1

0xef67,	// (0x00028d84) media_player_t1

0xef75,	// (0x00028d92) media_player_t2

0xef83,	// (0x00028da0) media_player_t3

0xef91,	// (0x00028dae) media_player_t4

0xef9f,	// (0x00028dbc) media_player_t5

0xefad,	// (0x00028dca) media_player_t6

0xefbb,	// (0x00028dd8) media_player_t7

0x0006,

0xf5db,	// (0x000293f8) media_player_t

0xefc9,	// (0x00028de6) wait_bar_pane_cp02

0xf5c0,	// (0x000293dd) main_usb_pane_t

0x84eb,	// (0x00022308) cell_mp_pane

0xd050,	// (0x00026e6d) cell_mp_pane_g1

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp06

0xd2d3,	// (0x000270f0) grid_skin_colour_pane

0xd2db,	// (0x000270f8) list_highlight_pane_cp03

0x652e,	// (0x0002034b) skin_g1

0xd2e3,	// (0x00027100) skin_t1

0xd2f2,	// (0x0002710f) skin_t2

0x0001,

0xf274,	// (0x00029091) skin_t

0x6538,	// (0x00020355) cell_skin_colour_pane_ParamLimits

0x6538,	// (0x00020355) cell_skin_colour_pane

0xd300,	// (0x0002711d) cell_skin_colour_pane_g1

0x65bc,	// (0x000203d9) call_video_g1_ParamLimits

0x65bc,	// (0x000203d9) call_video_g1

0x65cc,	// (0x000203e9) call_video_g2_ParamLimits

0x65cc,	// (0x000203e9) call_video_g2

0x0001,

0xf279,	// (0x00029096) call_video_g_ParamLimits

0xf279,	// (0x00029096) call_video_g

0x6626,	// (0x00020443) call_video_uplink_pane_cp1_ParamLimits

0x6626,	// (0x00020443) call_video_uplink_pane_cp1

0xd312,	// (0x0002712f) call_video_uplink_pane_cp2

0x66f2,	// (0x0002050f) video_down_crop_pane_ParamLimits

0x66f2,	// (0x0002050f) video_down_crop_pane

0x67e4,	// (0x00020601) video_down_pane_ParamLimits

0x67e4,	// (0x00020601) video_down_pane

0xd31a,	// (0x00027137) video_down_subqcif_pane_ParamLimits

0xd31a,	// (0x00027137) video_down_subqcif_pane

0xd332,	// (0x0002714f) video_down_subqcif_pane_cp_ParamLimits

0xd332,	// (0x0002714f) video_down_subqcif_pane_cp

0xd358,	// (0x00027175) im_reading_pane_ParamLimits

0xd358,	// (0x00027175) im_reading_pane

0x6906,	// (0x00020723) im_writing_pane_ParamLimits

0x6906,	// (0x00020723) im_writing_pane

0x6924,	// (0x00020741) im_reading_pane_t1

0xd372,	// (0x0002718f) list_im_pane

0xd383,	// (0x000271a0) scroll_pane_cp07

0x6984,	// (0x000207a1) im_writing_pane_t1_ParamLimits

0x6984,	// (0x000207a1) im_writing_pane_t1

0xd39c,	// (0x000271b9) im_writing_pane_t2_ParamLimits

0xd39c,	// (0x000271b9) im_writing_pane_t2

0x0001,

0xf283,	// (0x000290a0) im_writing_pane_t_ParamLimits

0xf283,	// (0x000290a0) im_writing_pane_t

0xcc89,	// (0x00026aa6) input_focus_pane_cp04

0xcc89,	// (0x00026aa6) input_focus_pane_cp05

0x6996,	// (0x000207b3) list_im_single_pane_ParamLimits

0x6996,	// (0x000207b3) list_im_single_pane

0x69c2,	// (0x000207df) list_single_im_pane_t1

0x84af,	// (0x000222cc) blid_accuracy_pane

0x84b7,	// (0x000222d4) blid_compass_pane

0x84c1,	// (0x000222de) main_location_t1

0x84cf,	// (0x000222ec) main_location_t2

0x84dd,	// (0x000222fa) main_location_t3

0x0002,

0xf5ea,	// (0x00029407) main_location_t

0xcc89,	// (0x00026aa6) aid_levels_location

0xd050,	// (0x00026e6d) blid_accuracy_pane_g1

0xd050,	// (0x00026e6d) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00029102) blid_accuracy_pane_g

0xd3e4,	// (0x00027201) wml_content_pane

0xd422,	// (0x0002723f) wml_button_pane_ParamLimits

0xd422,	// (0x0002723f) wml_button_pane

0x69d1,	// (0x000207ee) wml_list_single_large_pane_ParamLimits

0x69d1,	// (0x000207ee) wml_list_single_large_pane

0x6a03,	// (0x00020820) wml_list_single_medium_pane_ParamLimits

0x6a03,	// (0x00020820) wml_list_single_medium_pane

0x6a3c,	// (0x00020859) wml_list_single_small_pane_ParamLimits

0x6a3c,	// (0x00020859) wml_list_single_small_pane

0xd436,	// (0x00027253) wml_selection_box_pane_ParamLimits

0xd436,	// (0x00027253) wml_selection_box_pane

0xd449,	// (0x00027266) wml_list_single_pane_t1

0xd458,	// (0x00027275) wml_list_single_medium_pane_t1

0xd467,	// (0x00027284) wml_list_single_large_pane_t1

0xd476,	// (0x00027293) input_focus_pane_cp02_ParamLimits

0xd476,	// (0x00027293) input_focus_pane_cp02

0xd489,	// (0x000272a6) wml_selection_box_pane_g1

0xd492,	// (0x000272af) wml_selection_box_pane_t1_ParamLimits

0xd492,	// (0x000272af) wml_selection_box_pane_t1

0xcee4,	// (0x00026d01) bg_wml_button_pane_ParamLimits

0xcee4,	// (0x00026d01) bg_wml_button_pane

0xd4aa,	// (0x000272c7) wml_button_pane_g1

0xd4b2,	// (0x000272cf) wml_button_pane_t1

0xd4aa,	// (0x000272c7) wml_button_bg_pane_g1

0xd4c2,	// (0x000272df) wml_button_bg_pane_g2

0xd4ca,	// (0x000272e7) wml_button_bg_pane_g3

0xd4d2,	// (0x000272ef) wml_button_bg_pane_g4

0xd4da,	// (0x000272f7) wml_button_bg_pane_g5

0xd4e2,	// (0x000272ff) wml_button_bg_pane_g6

0xd4ea,	// (0x00027307) wml_button_bg_pane_g7

0xd4f2,	// (0x0002730f) wml_button_bg_pane_g8

0xd4fa,	// (0x00027317) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000290a5) wml_button_bg_pane_g

0x6a84,	// (0x000208a1) bg_list_pane_cp02

0xd502,	// (0x0002731f) mce_header_pane_ParamLimits

0xd502,	// (0x0002731f) mce_header_pane

0xd518,	// (0x00027335) mce_icon_pane

0xd518,	// (0x00027335) mce_image_pane

0xd521,	// (0x0002733e) mce_text_pane_ParamLimits

0xd521,	// (0x0002733e) mce_text_pane

0x6a8e,	// (0x000208ab) scroll_pane_cp03

0xd41a,	// (0x00027237) scroll_pane_cp04

0xd534,	// (0x00027351) scroll_pane_cp05_ParamLimits

0xd534,	// (0x00027351) scroll_pane_cp05

0x6a98,	// (0x000208b5) mce_header_field_pane_ParamLimits

0x6a98,	// (0x000208b5) mce_header_field_pane

0x6ab8,	// (0x000208d5) mce_header_field_pane_2_ParamLimits

0x6ab8,	// (0x000208d5) mce_header_field_pane_2

0x6ace,	// (0x000208eb) mce_header_field_pane_3

0x6ad6,	// (0x000208f3) list_single_mce_message_pane_ParamLimits

0x6ad6,	// (0x000208f3) list_single_mce_message_pane

0x6b06,	// (0x00020923) list_single_mce_smart_pane_ParamLimits

0x6b06,	// (0x00020923) list_single_mce_smart_pane

0xd540,	// (0x0002735d) input_focus_pane_cp03

0xd549,	// (0x00027366) list_header_data_pane

0x6b41,	// (0x0002095e) mce_header_field_pane_t1

0x6b51,	// (0x0002096e) list_single_mce_header_pane_ParamLimits

0x6b51,	// (0x0002096e) list_single_mce_header_pane

0xd551,	// (0x0002736e) list_single_mce_header_pane_t1

0xd560,	// (0x0002737d) list_single_mce_message_pane_g1

0xd568,	// (0x00027385) list_single_mce_message_pane_t1

0x6ba3,	// (0x000209c0) bg_cale_heading_pane_cp01_ParamLimits

0x6ba3,	// (0x000209c0) bg_cale_heading_pane_cp01

0xd576,	// (0x00027393) bg_cale_pane_cp02_ParamLimits

0xd576,	// (0x00027393) bg_cale_pane_cp02

0x6bd6,	// (0x000209f3) cale_month_corner_pane

0x6bec,	// (0x00020a09) cale_month_day_heading_pane_ParamLimits

0x6bec,	// (0x00020a09) cale_month_day_heading_pane

0x6c2f,	// (0x00020a4c) cale_month_pane_g1_ParamLimits

0x6c2f,	// (0x00020a4c) cale_month_pane_g1

0x6c5b,	// (0x00020a78) cale_month_pane_g2_ParamLimits

0x6c5b,	// (0x00020a78) cale_month_pane_g2

0x6c7e,	// (0x00020a9b) cale_month_pane_g3_ParamLimits

0x6c7e,	// (0x00020a9b) cale_month_pane_g3

0x6cba,	// (0x00020ad7) cale_month_pane_g4_ParamLimits

0x6cba,	// (0x00020ad7) cale_month_pane_g4

0x6cf6,	// (0x00020b13) cale_month_pane_g5_ParamLimits

0x6cf6,	// (0x00020b13) cale_month_pane_g5

0x6d32,	// (0x00020b4f) cale_month_pane_g6_ParamLimits

0x6d32,	// (0x00020b4f) cale_month_pane_g6

0x6d6e,	// (0x00020b8b) cale_month_pane_g7_ParamLimits

0x6d6e,	// (0x00020b8b) cale_month_pane_g7

0x6dba,	// (0x00020bd7) cale_month_pane_g8_ParamLimits

0x6dba,	// (0x00020bd7) cale_month_pane_g8

0x6e06,	// (0x00020c23) cale_month_pane_g9_ParamLimits

0x6e06,	// (0x00020c23) cale_month_pane_g9

0x6e4c,	// (0x00020c69) cale_month_pane_g10_ParamLimits

0x6e4c,	// (0x00020c69) cale_month_pane_g10

0x6e92,	// (0x00020caf) cale_month_pane_g11_ParamLimits

0x6e92,	// (0x00020caf) cale_month_pane_g11

0x6ed0,	// (0x00020ced) cale_month_pane_g12_ParamLimits

0x6ed0,	// (0x00020ced) cale_month_pane_g12

0x6f0e,	// (0x00020d2b) cale_month_pane_g13_ParamLimits

0x6f0e,	// (0x00020d2b) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000290b8) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000290b8) cale_month_pane_g

0x6f4c,	// (0x00020d69) cale_month_week_pane

0x6f5f,	// (0x00020d7c) grid_cale_month_pane_ParamLimits

0x6f5f,	// (0x00020d7c) grid_cale_month_pane

0x6f9d,	// (0x00020dba) cale_month_day_heading_pane_t1

0x6ffb,	// (0x00020e18) cale_month_day_heading_pane_t2

0x7060,	// (0x00020e7d) cale_month_day_heading_pane_t3

0x70c5,	// (0x00020ee2) cale_month_day_heading_pane_t4

0x712a,	// (0x00020f47) cale_month_day_heading_pane_t5

0x718f,	// (0x00020fac) cale_month_day_heading_pane_t6

0x71fc,	// (0x00021019) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000290d3) cale_month_day_heading_pane_t

0xd14d,	// (0x00026f6a) bg_cale_side_pane_cp01

0x7271,	// (0x0002108e) cale_month_week_pane_t1

0x7288,	// (0x000210a5) cale_month_week_pane_t2

0x729f,	// (0x000210bc) cale_month_week_pane_t3

0x72b6,	// (0x000210d3) cale_month_week_pane_t4

0x72cd,	// (0x000210ea) cale_month_week_pane_t5

0x72ec,	// (0x00021109) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000290e2) cale_month_week_pane_t

0x730b,	// (0x00021128) cell_cale_month_pane_ParamLimits

0x730b,	// (0x00021128) cell_cale_month_pane

0x48a2,	// (0x0001e6bf) cell_cale_month_pane_g1

0x48ae,	// (0x0001e6cb) cell_cale_month_pane_t1_ParamLimits

0x48ae,	// (0x0001e6cb) cell_cale_month_pane_t1

0xd15b,	// (0x00026f78) grid_highlight_pane_cp08

0xd050,	// (0x00026e6d) main_smil_g1

0x73d9,	// (0x000211f6) smil_status_pane

0xd5d5,	// (0x000273f2) smil_text_pane

0xee67,	// (0x00028c84) bg_popup_call3_rect_pane_g8

0xee6f,	// (0x00028c8c) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0002939b) bg_popup_call3_rect_pane_g

0xf0c5,	// (0x00028ee2) smil_status_volume_pane_g1

0xd5df,	// (0x000273fc) smil_status_pane_t1

0x4b6d,	// (0x0001e98a) volume_smil_pane

0xd5f6,	// (0x00027413) list_smil_text_pane

0x73ec,	// (0x00021209) scroll_pane_cp011

0x73f7,	// (0x00021214) smil_text_list_pane_t1_ParamLimits

0x73f7,	// (0x00021214) smil_text_list_pane_t1

0x48ca,	// (0x0001e6e7) aid_volume_smil_ParamLimits

0x48ca,	// (0x0001e6e7) aid_volume_smil

0xd050,	// (0x00026e6d) smil_volume_pane_g1

0xd050,	// (0x00026e6d) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00029102) smil_volume_pane_g

0xcffb,	// (0x00026e18) listscroll_cale_day_pane

0xd600,	// (0x0002741d) bg_cale_pane

0xd618,	// (0x00027435) list_cale_pane

0xd629,	// (0x00027446) scroll_pane_cp09

0xd63a,	// (0x00027457) cale_bg_pane_g1

0xd642,	// (0x0002745f) cale_bg_pane_g2

0xd64a,	// (0x00027467) cale_bg_pane_g3

0xd652,	// (0x0002746f) cale_bg_pane_g4

0xd65a,	// (0x00027477) cale_bg_pane_g5

0xd662,	// (0x0002747f) cale_bg_pane_g6

0xd66a,	// (0x00027487) cale_bg_pane_g7

0xd672,	// (0x0002748f) cale_bg_pane_g8

0xd67a,	// (0x00027497) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00029107) cale_bg_pane_g

0x74a2,	// (0x000212bf) list_cale_time_pane_ParamLimits

0x74a2,	// (0x000212bf) list_cale_time_pane

0x74c3,	// (0x000212e0) list_cale_time_pane_g1_ParamLimits

0x74c3,	// (0x000212e0) list_cale_time_pane_g1

0xd682,	// (0x0002749f) list_cale_time_pane_g2_ParamLimits

0xd682,	// (0x0002749f) list_cale_time_pane_g2

0x74cf,	// (0x000212ec) list_cale_time_pane_g3_ParamLimits

0x74cf,	// (0x000212ec) list_cale_time_pane_g3

0x74eb,	// (0x00021308) list_cale_time_pane_g4_ParamLimits

0x74eb,	// (0x00021308) list_cale_time_pane_g4

0x74f9,	// (0x00021316) list_cale_time_pane_g5_ParamLimits

0x74f9,	// (0x00021316) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0002911a) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0002911a) list_cale_time_pane_g

0x7507,	// (0x00021324) list_cale_time_pane_t1_ParamLimits

0x7507,	// (0x00021324) list_cale_time_pane_t1

0x752f,	// (0x0002134c) list_cale_time_pane_t2_ParamLimits

0x752f,	// (0x0002134c) list_cale_time_pane_t2

0x781a,	// (0x00021637) aid_blid_cardinal_pane

0x785c,	// (0x00021679) compass_pane_t4

0x7557,	// (0x00021374) list_cale_time_pane_t4_ParamLimits

0x7557,	// (0x00021374) list_cale_time_pane_t4

0x786a,	// (0x00021687) compass_pane_t5

0x787a,	// (0x00021697) compass_pane_t6

0x7888,	// (0x000216a5) compass_pane_t7

0xdb31,	// (0x0002794e) navi_pane_cc_t1

0xdc94,	// (0x00027ab1) aid_phob_thumbnail_center_pane

0x7fa5,	// (0x00021dc2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00029127) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00029127) list_cale_time_pane_t

0xc8d4,	// (0x000266f1) bg_popup_window_pane_cp02_ParamLimits

0xc8d4,	// (0x000266f1) bg_popup_window_pane_cp02

0xd69c,	// (0x000274b9) heading_pane_cp01_ParamLimits

0xd69c,	// (0x000274b9) heading_pane_cp01

0xd6a8,	// (0x000274c5) loc_req_pane_ParamLimits

0xd6a8,	// (0x000274c5) loc_req_pane

0xd6b8,	// (0x000274d5) loc_type_pane_ParamLimits

0xd6b8,	// (0x000274d5) loc_type_pane

0xd6ca,	// (0x000274e7) loc_type_pane_t1_ParamLimits

0xd6ca,	// (0x000274e7) loc_type_pane_t1

0xd6dc,	// (0x000274f9) loc_type_pane_t2_ParamLimits

0xd6dc,	// (0x000274f9) loc_type_pane_t2

0xd6ee,	// (0x0002750b) loc_type_pane_t3_ParamLimits

0xd6ee,	// (0x0002750b) loc_type_pane_t3

0x0002,

0xf311,	// (0x0002912e) loc_type_pane_t_ParamLimits

0xf311,	// (0x0002912e) loc_type_pane_t

0xd700,	// (0x0002751d) list_loc_req_pane

0xd70a,	// (0x00027527) scroll_pane_cp012

0x757f,	// (0x0002139c) list_single_loc_request_popup_menu_pane_ParamLimits

0x757f,	// (0x0002139c) list_single_loc_request_popup_menu_pane

0xd715,	// (0x00027532) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd715,	// (0x00027532) list_single_loc_request_popup_menu_pane_g1

0xd721,	// (0x0002753e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd721,	// (0x0002753e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00029135) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00029135) list_single_loc_request_popup_menu_pane_g

0xd72d,	// (0x0002754a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd72d,	// (0x0002754a) list_single_loc_request_popup_menu_pane_t1

0x7591,	// (0x000213ae) bg_popup_window_pane_cp03_ParamLimits

0x7591,	// (0x000213ae) bg_popup_window_pane_cp03

0x759f,	// (0x000213bc) heading_loc_req_pane_ParamLimits

0x759f,	// (0x000213bc) heading_loc_req_pane

0x75ab,	// (0x000213c8) popup_dyc_status_message_window_g1_ParamLimits

0x75ab,	// (0x000213c8) popup_dyc_status_message_window_g1

0x75b7,	// (0x000213d4) popup_dyc_status_message_window_t1_ParamLimits

0x75b7,	// (0x000213d4) popup_dyc_status_message_window_t1

0x75c9,	// (0x000213e6) popup_dyc_status_message_window_t2_ParamLimits

0x75c9,	// (0x000213e6) popup_dyc_status_message_window_t2

0x75db,	// (0x000213f8) popup_dyc_status_message_window_t3_ParamLimits

0x75db,	// (0x000213f8) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0002913a) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0002913a) popup_dyc_status_message_window_t

0xcc89,	// (0x00026aa6) bg_heading_pane_cp01

0xd743,	// (0x00027560) heading_loc_req_pane_g1

0xd74b,	// (0x00027568) heading_loc_req_pane_g2

0xd753,	// (0x00027570) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00029141) heading_loc_req_pane_g

0xd75b,	// (0x00027578) heading_loc_req_pane_t1

0xd7eb,	// (0x00027608) bg_popup_sub_pane_cp01_ParamLimits

0xd7eb,	// (0x00027608) bg_popup_sub_pane_cp01

0xd7f9,	// (0x00027616) popup_cale_events_window_g1_ParamLimits

0xd7f9,	// (0x00027616) popup_cale_events_window_g1

0xd819,	// (0x00027636) popup_cale_events_window_g2_ParamLimits

0xd819,	// (0x00027636) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00029175) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00029175) popup_cale_events_window_g

0xd839,	// (0x00027656) popup_cale_events_window_t1_ParamLimits

0xd839,	// (0x00027656) popup_cale_events_window_t1

0xd84b,	// (0x00027668) popup_cale_events_window_t2_ParamLimits

0xd84b,	// (0x00027668) popup_cale_events_window_t2

0xd889,	// (0x000276a6) popup_cale_events_window_t3_ParamLimits

0xd889,	// (0x000276a6) popup_cale_events_window_t3

0xd8c3,	// (0x000276e0) popup_cale_events_window_t4_ParamLimits

0xd8c3,	// (0x000276e0) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0002917a) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0002917a) popup_cale_events_window_t

0x765f,	// (0x0002147c) call_type_pane

0xdc35,	// (0x00027a52) popup_call_status_window_g1

0x766b,	// (0x00021488) popup_call_status_window_g2

0x7677,	// (0x00021494) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00029183) popup_call_status_window_g

0xd8f9,	// (0x00027716) call_type_pane_g1

0xd902,	// (0x0002771f) call_type_pane_g2

0x0001,

0xf36d,	// (0x0002918a) call_type_pane_g

0xcc89,	// (0x00026aa6) bg_popup_sub_pane_cp02

0xd90b,	// (0x00027728) listscroll_popup_wml_pane

0xd913,	// (0x00027730) list_wml_pane

0xd91d,	// (0x0002773a) scroll_pane_cp013

0xd928,	// (0x00027745) list_single_graphic_popup_wml_pane_ParamLimits

0xd928,	// (0x00027745) list_single_graphic_popup_wml_pane

0xd050,	// (0x00026e6d) list_single_graphic_popup_wml_pane_g1

0xd93c,	// (0x00027759) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0002918f) list_single_graphic_popup_wml_pane_g

0xd944,	// (0x00027761) list_single_graphic_popup_wml_pane_t1

0xd95a,	// (0x00027777) aid_call_pane

0xcedc,	// (0x00026cf9) popup_clock_analogue_window_g1

0xcedc,	// (0x00026cf9) popup_clock_analogue_window_g2

0x48ec,	// (0x0001e709) popup_clock_analogue_window_g3

0x48ec,	// (0x0001e709) popup_clock_analogue_window_g4

0xd050,	// (0x00026e6d) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00029194) popup_clock_analogue_window_g

0x48f4,	// (0x0001e711) popup_clock_analogue_window_t1

0x4902,	// (0x0001e71f) clock_digital_number_pane_ParamLimits

0x4902,	// (0x0001e71f) clock_digital_number_pane

0x490e,	// (0x0001e72b) clock_digital_number_pane_cp02_ParamLimits

0x490e,	// (0x0001e72b) clock_digital_number_pane_cp02

0x491a,	// (0x0001e737) clock_digital_number_pane_cp03_ParamLimits

0x491a,	// (0x0001e737) clock_digital_number_pane_cp03

0x4926,	// (0x0001e743) clock_digital_number_pane_cp04_ParamLimits

0x4926,	// (0x0001e743) clock_digital_number_pane_cp04

0x4932,	// (0x0001e74f) clock_digital_separator_pane_ParamLimits

0x4932,	// (0x0001e74f) clock_digital_separator_pane

0x493e,	// (0x0001e75b) popup_clock_digital_window_t1

0xd050,	// (0x00026e6d) clock_digital_number_pane_g1

0xd050,	// (0x00026e6d) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00029102) clock_digital_number_pane_g

0xd050,	// (0x00026e6d) clock_digital_separator_pane_g1

0xd050,	// (0x00026e6d) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00029102) clock_digital_separator_pane_g

0xcc89,	// (0x00026aa6) bg_popup_window_pane_cp04

0xd962,	// (0x0002777f) heading_pane_cp03

0xd96a,	// (0x00027787) listscroll_popup_gms_pane

0xd972,	// (0x0002778f) grid_large_graphic_popup_pane

0xd97c,	// (0x00027799) listscroll_popup_gms_pane_g1

0xd984,	// (0x000277a1) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0002919f) listscroll_popup_gms_pane_g

0xd41a,	// (0x00027237) scroll_pane_cp014

0xd98c,	// (0x000277a9) cell_large_graphic_popup_pane_ParamLimits

0xd98c,	// (0x000277a9) cell_large_graphic_popup_pane

0xd9a4,	// (0x000277c1) cell_large_graphic_popup_pane_g1_ParamLimits

0xd9a4,	// (0x000277c1) cell_large_graphic_popup_pane_g1

0xd9b0,	// (0x000277cd) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b0,	// (0x000277cd) cell_large_graphic_popup_pane_g2

0xd9bc,	// (0x000277d9) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9bc,	// (0x000277d9) cell_large_graphic_popup_pane_g3

0xd9c9,	// (0x000277e6) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9c9,	// (0x000277e6) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000291a4) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000291a4) cell_large_graphic_popup_pane_g

0xd9d9,	// (0x000277f6) grid_highlight_pane_cp010

0xd050,	// (0x00026e6d) bg_popup_call_pane_g1

0xd9e3,	// (0x00027800) list_single_graphic_popup_conf_pane_ParamLimits

0xd9e3,	// (0x00027800) list_single_graphic_popup_conf_pane

0xd9f5,	// (0x00027812) list_highlight_pane_cp01

0xd9fe,	// (0x0002781b) list_single_graphic_popup_conf_pane_g1

0xda06,	// (0x00027823) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000291ad) list_single_graphic_popup_conf_pane_g

0xda0e,	// (0x0002782b) list_single_graphic_popup_conf_pane_t1

0xda1c,	// (0x00027839) linegrid_cams_pane_g1

0x7683,	// (0x000214a0) linegrid_cams_pane_g2

0xd108,	// (0x00026f25) linegrid_cams_pane_g3

0xda25,	// (0x00027842) linegrid_cams_pane_g4

0x768c,	// (0x000214a9) linegrid_cams_pane_g5

0x7695,	// (0x000214b2) linegrid_cams_pane_g6

0xd18e,	// (0x00026fab) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000291b2) linegrid_cams_pane_g

0xda2e,	// (0x0002784b) popup_clock_analogue_window

0xda2e,	// (0x0002784b) popup_clock_digital_window

0xcc89,	// (0x00026aa6) popup_phob_thumbnail_window

0xd050,	// (0x00026e6d) call_video_uplink_pane_g1

0xda37,	// (0x00027854) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000291c1) call_video_uplink_pane_g

0xd15b,	// (0x00026f78) video_uplink_pane

0xda3f,	// (0x0002785c) mce_image_pane_g1

0x769e,	// (0x000214bb) mce_image_pane_g2

0x76a6,	// (0x000214c3) mce_image_pane_g3

0x76ae,	// (0x000214cb) mce_image_pane_g4

0x76b6,	// (0x000214d3) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000291c6) mce_image_pane_g

0xda49,	// (0x00027866) control_top_pane_stacon_cp01_ParamLimits

0xda49,	// (0x00027866) control_top_pane_stacon_cp01

0xda5d,	// (0x0002787a) uni_indicator_pane_stacon_cp01_ParamLimits

0xda5d,	// (0x0002787a) uni_indicator_pane_stacon_cp01

0xda6e,	// (0x0002788b) bg_popup_sub_pane_cp03

0x76be,	// (0x000214db) chi_dic_find_pane

0x76c6,	// (0x000214e3) listscroll_chi_dic_pane

0x76cf,	// (0x000214ec) main_pane_chidic_g1

0x76e2,	// (0x000214ff) chi_dic_find_pane_t1

0xda78,	// (0x00027895) find_chidic_pane

0xda81,	// (0x0002789e) chi_dic_list_pane_ParamLimits

0xda81,	// (0x0002789e) chi_dic_list_pane

0xda92,	// (0x000278af) scroll_pane_cp020

0x76f0,	// (0x0002150d) find_chidic_pane_t1

0xcc89,	// (0x00026aa6) input_focus_pane_cp06

0x76ff,	// (0x0002151c) list_chi_dic_pane_ParamLimits

0x76ff,	// (0x0002151c) list_chi_dic_pane

0xda9a,	// (0x000278b7) list_chi_dic_pane_t1_ParamLimits

0xda9a,	// (0x000278b7) list_chi_dic_pane_t1

0xcc89,	// (0x00026aa6) list_highlight_pane_cp020

0xdaad,	// (0x000278ca) bg_cale_heading_pane_g1

0x7720,	// (0x0002153d) bg_cale_heading_pane_g2

0x7728,	// (0x00021545) bg_cale_heading_pane_g3

0x7730,	// (0x0002154d) bg_cale_heading_pane_g4

0x773a,	// (0x00021557) bg_cale_heading_pane_g5

0x7744,	// (0x00021561) bg_cale_heading_pane_g6

0x774c,	// (0x00021569) bg_cale_heading_pane_g7

0x7754,	// (0x00021571) bg_cale_heading_pane_g8

0x775e,	// (0x0002157b) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000291d1) bg_cale_heading_pane_g

0xdaad,	// (0x000278ca) bg_cale_side_pane_g1

0x7768,	// (0x00021585) bg_cale_side_pane_g2

0x7772,	// (0x0002158f) bg_cale_side_pane_g3

0x777c,	// (0x00021599) bg_cale_side_pane_g4

0x7786,	// (0x000215a3) bg_cale_side_pane_g5

0x7790,	// (0x000215ad) bg_cale_side_pane_g6

0x779a,	// (0x000215b7) bg_cale_side_pane_g7

0x77a4,	// (0x000215c1) bg_cale_side_pane_g8

0x77ac,	// (0x000215c9) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000291e4) bg_cale_side_pane_g

0x77b4,	// (0x000215d1) popup_call_status_window_ParamLimits

0x77b4,	// (0x000215d1) popup_call_status_window

0xdab5,	// (0x000278d2) stacon_top_pane

0xdabd,	// (0x000278da) status_pane_ParamLimits

0xdabd,	// (0x000278da) status_pane

0xdad2,	// (0x000278ef) status_small_pane

0xdada,	// (0x000278f7) control_pane

0xcc89,	// (0x00026aa6) stacon_bottom_pane

0xdae2,	// (0x000278ff) list_single_mce_smart_pane_t1_ParamLimits

0xdae2,	// (0x000278ff) list_single_mce_smart_pane_t1

0xdaf5,	// (0x00027912) list_single_mce_smart_pane_t2_ParamLimits

0xdaf5,	// (0x00027912) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000291f7) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000291f7) list_single_mce_smart_pane_t

0x77c0,	// (0x000215dd) compass_pane

0x77cc,	// (0x000215e9) main_location2_pane_t1

0x77e0,	// (0x000215fd) main_location2_pane_t2

0x77f4,	// (0x00021611) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000291fc) main_location2_pane_t

0xdb14,	// (0x00027931) compass_pane_g1_ParamLimits

0xdb14,	// (0x00027931) compass_pane_g1

0x783e,	// (0x0002165b) compass_pane_t1

0x784d,	// (0x0002166a) compass_pane_t2

0x0005,

0xf3e8,	// (0x00029205) compass_pane_t

0x7898,	// (0x000216b5) text_secondary_cp61

0xdb28,	// (0x00027945) navi_pane_cams_g5

0xdb4b,	// (0x00027968) navi_pane_im_t1

0xdb59,	// (0x00027976) navi_pane_mp_g1_ParamLimits

0xdb59,	// (0x00027976) navi_pane_mp_g1

0xdb6d,	// (0x0002798a) navi_pane_mp_g2_ParamLimits

0xdb6d,	// (0x0002798a) navi_pane_mp_g2

0xdb79,	// (0x00027996) navi_pane_mp_g3_ParamLimits

0xdb79,	// (0x00027996) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00029219) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00029219) navi_pane_mp_g

0xdb85,	// (0x000279a2) navi_pane_mp_t1

0xdb93,	// (0x000279b0) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00029220) navi_pane_mp_t

0xdbcf,	// (0x000279ec) navi_pane_vt_g1

0xdb85,	// (0x000279a2) navi_pane_vt_t1

0xdbd7,	// (0x000279f4) navi_slider_pane

0xdbdf,	// (0x000279fc) zooming_pane

0xdbe7,	// (0x00027a04) navi_slider_pane_g1

0x495b,	// (0x0001e778) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00029227) navi_slider_pane_g

0xdc0b,	// (0x00027a28) aid_levels_zoom

0xdc13,	// (0x00027a30) zooming_pane_g1

0xdc1b,	// (0x00027a38) zooming_pane_g2

0xdc1b,	// (0x00027a38) zooming_pane_g3

0x0002,

0xf419,	// (0x00029236) zooming_pane_g

0xdc23,	// (0x00027a40) level_10_zoom

0xdc2c,	// (0x00027a49) level_11_zoom

0xdc43,	// (0x00027a60) level_1_zoom

0xdc4c,	// (0x00027a69) level_2_zoom

0xdc55,	// (0x00027a72) level_3_zoom

0xdc5e,	// (0x00027a7b) level_4_zoom

0xdc67,	// (0x00027a84) level_5_zoom

0xdc70,	// (0x00027a8d) level_6_zoom

0xdc79,	// (0x00027a96) level_7_zoom

0xdc82,	// (0x00027a9f) level_8_zoom

0xdc8b,	// (0x00027aa8) level_9_zoom

0xdc9c,	// (0x00027ab9) popup_phob_thumbnail_window_g1

0xdca4,	// (0x00027ac1) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0002923d) popup_phob_thumbnail_window_g

0xefd1,	// (0x00028dee) level_1_location

0xefd9,	// (0x00028df6) level_2_location

0xefe1,	// (0x00028dfe) level_3_location

0xefe9,	// (0x00028e06) level_4_location

0xdbdf,	// (0x000279fc) level_5_location

0x79c5,	// (0x000217e2) mce_icon_pane_g1

0x79cd,	// (0x000217ea) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00029242) mce_icon_pane_g

0x79d5,	// (0x000217f2) main_mup_pane_g1_ParamLimits

0x79d5,	// (0x000217f2) main_mup_pane_g1

0x79ed,	// (0x0002180a) main_mup_pane_g2_ParamLimits

0x79ed,	// (0x0002180a) main_mup_pane_g2

0x7a09,	// (0x00021826) main_mup_pane_g3_ParamLimits

0x7a09,	// (0x00021826) main_mup_pane_g3

0x7a25,	// (0x00021842) main_mup_pane_g4_ParamLimits

0x7a25,	// (0x00021842) main_mup_pane_g4

0x7a41,	// (0x0002185e) main_mup_pane_g5_ParamLimits

0x7a41,	// (0x0002185e) main_mup_pane_g5

0x7a62,	// (0x0002187f) main_mup_pane_g6_ParamLimits

0x7a62,	// (0x0002187f) main_mup_pane_g6

0x7a7e,	// (0x0002189b) main_mup_pane_g7_ParamLimits

0x7a7e,	// (0x0002189b) main_mup_pane_g7

0x7a9a,	// (0x000218b7) main_mup_pane_g8_ParamLimits

0x7a9a,	// (0x000218b7) main_mup_pane_g8

0x7ab6,	// (0x000218d3) main_mup_pane_g9_ParamLimits

0x7ab6,	// (0x000218d3) main_mup_pane_g9

0x7ad5,	// (0x000218f2) main_mup_pane_g10_ParamLimits

0x7ad5,	// (0x000218f2) main_mup_pane_g10

0x7af4,	// (0x00021911) main_mup_pane_g11_ParamLimits

0x7af4,	// (0x00021911) main_mup_pane_g11

0x7b0c,	// (0x00021929) main_mup_pane_g12_ParamLimits

0x7b0c,	// (0x00021929) main_mup_pane_g12

0x7b1a,	// (0x00021937) main_mup_pane_g13_ParamLimits

0x7b1a,	// (0x00021937) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00029247) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00029247) main_mup_pane_g

0x7b30,	// (0x0002194d) main_mup_pane_t1_ParamLimits

0x7b30,	// (0x0002194d) main_mup_pane_t1

0x7b4d,	// (0x0002196a) main_mup_pane_t2_ParamLimits

0x7b4d,	// (0x0002196a) main_mup_pane_t2

0x7b67,	// (0x00021984) main_mup_pane_t3_ParamLimits

0x7b67,	// (0x00021984) main_mup_pane_t3

0x7b81,	// (0x0002199e) main_mup_pane_t4_ParamLimits

0x7b81,	// (0x0002199e) main_mup_pane_t4

0x7b93,	// (0x000219b0) main_mup_pane_t5_ParamLimits

0x7b93,	// (0x000219b0) main_mup_pane_t5

0x7ba5,	// (0x000219c2) main_mup_pane_t6_ParamLimits

0x7ba5,	// (0x000219c2) main_mup_pane_t6

0x0005,

0xf445,	// (0x00029262) main_mup_pane_t_ParamLimits

0xf445,	// (0x00029262) main_mup_pane_t

0x7bbb,	// (0x000219d8) mup_progress_pane_ParamLimits

0x7bbb,	// (0x000219d8) mup_progress_pane

0x7bc7,	// (0x000219e4) mup_visualizer_pane_ParamLimits

0x7bc7,	// (0x000219e4) mup_visualizer_pane

0x7c05,	// (0x00021a22) mup_volume_pane_ParamLimits

0x7c05,	// (0x00021a22) mup_volume_pane

0xdc35,	// (0x00027a52) mup_visualizer_pane_g1_ParamLimits

0xdc35,	// (0x00027a52) mup_visualizer_pane_g1

0xdc35,	// (0x00027a52) mup_visualizer_pane_g2_ParamLimits

0xdc35,	// (0x00027a52) mup_visualizer_pane_g2

0xdb14,	// (0x00027931) mup_visualizer_pane_g3_ParamLimits

0xdb14,	// (0x00027931) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0002926f) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0002926f) mup_visualizer_pane_g

0xd050,	// (0x00026e6d) mup_volume_pane_g1

0xdcb4,	// (0x00027ad1) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00029276) mup_volume_pane_g

0xd050,	// (0x00026e6d) mup_progress_pane_g1

0xdcbd,	// (0x00027ada) mup_progress_pane_g2

0xdcc6,	// (0x00027ae3) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0002927b) mup_progress_pane_g

0xcc89,	// (0x00026aa6) bg_popup_window_pane_cp05

0xdccf,	// (0x00027aec) heading_pane_cp02_ParamLimits

0xdccf,	// (0x00027aec) heading_pane_cp02

0xdce9,	// (0x00027b06) list_popup_blid_pane

0xdcf1,	// (0x00027b0e) list_blid_sat_info_pane_ParamLimits

0xdcf1,	// (0x00027b0e) list_blid_sat_info_pane

0xdd04,	// (0x00027b21) list_blid_sat_info_pane_g1

0xdd0c,	// (0x00027b29) list_blid_sat_info_pane_t1

0x7d10,	// (0x00021b2d) mup_equalizer_pane_ParamLimits

0x7d10,	// (0x00021b2d) mup_equalizer_pane

0x7d31,	// (0x00021b4e) mup_equalizer_pane_cp1_ParamLimits

0x7d31,	// (0x00021b4e) mup_equalizer_pane_cp1

0x7d52,	// (0x00021b6f) mup_equalizer_pane_cp2_ParamLimits

0x7d52,	// (0x00021b6f) mup_equalizer_pane_cp2

0x7d73,	// (0x00021b90) mup_equalizer_pane_cp3_ParamLimits

0x7d73,	// (0x00021b90) mup_equalizer_pane_cp3

0x7d94,	// (0x00021bb1) mup_equalizer_pane_cp4_ParamLimits

0x7d94,	// (0x00021bb1) mup_equalizer_pane_cp4

0x7db5,	// (0x00021bd2) mup_equalizer_pane_cp5

0x7dcb,	// (0x00021be8) mup_equalizer_pane_cp6

0x7de3,	// (0x00021c00) mup_equalizer_pane_cp7

0xeeef,	// (0x00028d0c) bg_popup_call_poc_act_pane_g9

0xeef7,	// (0x00028d14) bg_popup_call_poc_act_pane_g10

0xeeff,	// (0x00028d1c) bg_popup_call_poc_act_pane_g11

0x000a,

0xcee4,	// (0x00026d01) mup_scale_pane

0xd050,	// (0x00026e6d) mup_scale_pane_g1

0xdd1a,	// (0x00027b37) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00029297) mup_scale_pane_g

0xdd3e,	// (0x00027b5b) msg_data_pane

0xdd46,	// (0x00027b63) scroll_pane_cp017

0x7e0d,	// (0x00021c2a) bg_list_pane_cp04_ParamLimits

0x7e0d,	// (0x00021c2a) bg_list_pane_cp04

0xdd4e,	// (0x00027b6b) msg_data_pane_g1

0x7e2d,	// (0x00021c4a) msg_data_pane_g2

0x76a6,	// (0x000214c3) msg_data_pane_g3

0x7e35,	// (0x00021c52) msg_data_pane_g4

0x7e3d,	// (0x00021c5a) msg_data_pane_g5

0x7e45,	// (0x00021c62) msg_data_pane_g6

0x7e4d,	// (0x00021c6a) msg_data_pane_g7

0x0006,

0xf489,	// (0x000292a6) msg_data_pane_g

0x7e55,	// (0x00021c72) msg_text_pane_ParamLimits

0x7e55,	// (0x00021c72) msg_text_pane

0x7ea6,	// (0x00021cc3) qrid_highlight_pane_cp011_ParamLimits

0x7ea6,	// (0x00021cc3) qrid_highlight_pane_cp011

0xcc89,	// (0x00026aa6) msg_body_pane

0xcc89,	// (0x00026aa6) msg_header_pane

0xdd5f,	// (0x00027b7c) input_focus_pane_cp07

0x7ed0,	// (0x00021ced) msg_header_pane_t1_ParamLimits

0x7ed0,	// (0x00021ced) msg_header_pane_t1

0xdd74,	// (0x00027b91) msg_header_pane_t2_ParamLimits

0xdd74,	// (0x00027b91) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000292ba) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000292ba) msg_header_pane_t

0xdd86,	// (0x00027ba3) msg_body_pane_g1

0x7ee4,	// (0x00021d01) msg_body_pane_t1_ParamLimits

0x7ee4,	// (0x00021d01) msg_body_pane_t1

0xdd8e,	// (0x00027bab) msg_body_pane_t2_ParamLimits

0xdd8e,	// (0x00027bab) msg_body_pane_t2

0xdda0,	// (0x00027bbd) msg_body_pane_t3_ParamLimits

0xdda0,	// (0x00027bbd) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000292bf) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000292bf) msg_body_pane_t

0x499d,	// (0x0001e7ba) main_viewer_pane_g1_ParamLimits

0x499d,	// (0x0001e7ba) main_viewer_pane_g1

0x49a9,	// (0x0001e7c6) main_viewer_pane_g2_ParamLimits

0x49a9,	// (0x0001e7c6) main_viewer_pane_g2

0x7f37,	// (0x00021d54) main_viewer_pane_g3_ParamLimits

0x7f37,	// (0x00021d54) main_viewer_pane_g3

0x7f48,	// (0x00021d65) main_viewer_pane_g4_ParamLimits

0x7f48,	// (0x00021d65) main_viewer_pane_g4

0x49b5,	// (0x0001e7d2) main_viewer_pane_g5_ParamLimits

0x49b5,	// (0x0001e7d2) main_viewer_pane_g5

0x49b5,	// (0x0001e7d2) main_viewer_pane_g7_ParamLimits

0x49b5,	// (0x0001e7d2) main_viewer_pane_g7

0x49c7,	// (0x0001e7e4) main_viewer_pane_g8_ParamLimits

0x49c7,	// (0x0001e7e4) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000292cf) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000292cf) main_viewer_pane_g

0xddb2,	// (0x00027bcf) viewer_content_pane_ParamLimits

0xddb2,	// (0x00027bcf) viewer_content_pane

0x7f79,	// (0x00021d96) main_postcard_pane_g1_ParamLimits

0x7f79,	// (0x00021d96) main_postcard_pane_g1

0x7f87,	// (0x00021da4) main_postcard_pane_g2_ParamLimits

0x7f87,	// (0x00021da4) main_postcard_pane_g2

0x7f95,	// (0x00021db2) main_postcard_pane_g3_ParamLimits

0x7f95,	// (0x00021db2) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000292e0) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000292e0) main_postcard_pane_g

0x7fa5,	// (0x00021dc2) main_postcard_pane_g4

0xf0b2,	// (0x00028ecf) smil_status_volume_pane_g2

0x7fd1,	// (0x00021dee) postcard_pane_ParamLimits

0x7fd1,	// (0x00021dee) postcard_pane

0xdc35,	// (0x00027a52) postcard_pane_g1_ParamLimits

0xdc35,	// (0x00027a52) postcard_pane_g1

0x8003,	// (0x00021e20) postcard_pane_g2_ParamLimits

0x8003,	// (0x00021e20) postcard_pane_g2

0x800f,	// (0x00021e2c) postcard_pane_g3_ParamLimits

0x800f,	// (0x00021e2c) postcard_pane_g3

0xddc0,	// (0x00027bdd) postcard_pane_g4_ParamLimits

0xddc0,	// (0x00027bdd) postcard_pane_g4

0x801b,	// (0x00021e38) postcard_pane_g5_ParamLimits

0x801b,	// (0x00021e38) postcard_pane_g5

0x8027,	// (0x00021e44) postcard_pane_g6_ParamLimits

0x8027,	// (0x00021e44) postcard_pane_g6

0xddce,	// (0x00027beb) postcard_pane_g7_ParamLimits

0xddce,	// (0x00027beb) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000292ed) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000292ed) postcard_pane_g

0x8033,	// (0x00021e50) main_mp2_pane_g1_ParamLimits

0x8033,	// (0x00021e50) main_mp2_pane_g1

0x803f,	// (0x00021e5c) main_mp2_pane_g2_ParamLimits

0x803f,	// (0x00021e5c) main_mp2_pane_g2

0x804b,	// (0x00021e68) main_mp2_pane_g3_ParamLimits

0x804b,	// (0x00021e68) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000292fc) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000292fc) main_mp2_pane_g

0x8057,	// (0x00021e74) main_mp2_pane_t1_ParamLimits

0x8057,	// (0x00021e74) main_mp2_pane_t1

0x806e,	// (0x00021e8b) main_mp2_pane_t2_ParamLimits

0x806e,	// (0x00021e8b) main_mp2_pane_t2

0x8080,	// (0x00021e9d) main_mp2_pane_t3_ParamLimits

0x8080,	// (0x00021e9d) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00029303) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00029303) main_mp2_pane_t

0xdddc,	// (0x00027bf9) pec_content_pane_ParamLimits

0xdddc,	// (0x00027bf9) pec_content_pane

0xd41a,	// (0x00027237) scroll_pane_cp015

0xddee,	// (0x00027c0b) pec_attribute_pane_ParamLimits

0xddee,	// (0x00027c0b) pec_attribute_pane

0x8092,	// (0x00021eaf) pec_content_pane_g1_ParamLimits

0x8092,	// (0x00021eaf) pec_content_pane_g1

0xddfe,	// (0x00027c1b) pec_content_pane_t1_ParamLimits

0xddfe,	// (0x00027c1b) pec_content_pane_t1

0xde10,	// (0x00027c2d) pec_content_pane_t2_ParamLimits

0xde10,	// (0x00027c2d) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0002930a) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0002930a) pec_content_pane_t

0x809e,	// (0x00021ebb) list_single_graphic_pane_cp01_ParamLimits

0x809e,	// (0x00021ebb) list_single_graphic_pane_cp01

0xcee4,	// (0x00026d01) bg_popup_sub_pane_cp04

0xde22,	// (0x00027c3f) popup_mup_playback_window_g1

0xde2e,	// (0x00027c4b) popup_mup_playback_window_t1

0xde43,	// (0x00027c60) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0002930f) popup_mup_playback_window_t

0xde7a,	// (0x00027c97) main_image_pane_g1_ParamLimits

0xde7a,	// (0x00027c97) main_image_pane_g1

0xdebd,	// (0x00027cda) scroll_pane_cp018_ParamLimits

0xdebd,	// (0x00027cda) scroll_pane_cp018

0xded5,	// (0x00027cf2) scroll_pane_cp016_ParamLimits

0xded5,	// (0x00027cf2) scroll_pane_cp016

0x8142,	// (0x00021f5f) smil2_image_pane_ParamLimits

0x8142,	// (0x00021f5f) smil2_image_pane

0x8176,	// (0x00021f93) smil2_root_pane_ParamLimits

0x8176,	// (0x00021f93) smil2_root_pane

0x81a2,	// (0x00021fbf) smil2_text_pane_ParamLimits

0x81a2,	// (0x00021fbf) smil2_text_pane

0xcc89,	// (0x00026aa6) bg_list_pane_cp06

0xdf11,	// (0x00027d2e) grid_radio_pane

0xcc89,	// (0x00026aa6) bg_popup_window_pane_cp06

0xdf19,	// (0x00027d36) main_fmradio_pane_t1

0xd962,	// (0x0002777f) heading_pane_cp04

0xdf27,	// (0x00027d44) main_fmradio_pane_t2

0xef07,	// (0x00028d24) popup_cale_lunar_info_window_g1

0xdf35,	// (0x00027d52) main_fmradio_pane_t3

0xef0f,	// (0x00028d2c) popup_cale_lunar_info_window_g2

0xdf43,	// (0x00027d60) main_fmradio_pane_t4

0x0001,

0xdf51,	// (0x00027d6e) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000293ea) popup_cale_lunar_info_window_g

0xf507,	// (0x00029324) main_fmradio_pane_t

0xdf5f,	// (0x00027d7c) wait_bar_pane_cp03

0xdf67,	// (0x00027d84) cell_fmradio_pane_ParamLimits

0xdf67,	// (0x00027d84) cell_fmradio_pane

0xddce,	// (0x00027beb) cell_fmradio_pane_g1_ParamLimits

0xddce,	// (0x00027beb) cell_fmradio_pane_g1

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp011

0xdf7a,	// (0x00027d97) poc_content_pane_ParamLimits

0xdf7a,	// (0x00027d97) poc_content_pane

0xdf8c,	// (0x00027da9) scroll_pane_cp019

0x81e2,	// (0x00021fff) popup_call_poc_act_window_ParamLimits

0x81e2,	// (0x00021fff) popup_call_poc_act_window

0x81ef,	// (0x0002200c) popup_call_poc_inact_window_ParamLimits

0x81ef,	// (0x0002200c) popup_call_poc_inact_window

0xf5a4,	// (0x000293c1) bg_popup_call_poc_act_pane_g

0xee77,	// (0x00028c94) bg_popup_call_poc_inact_pane_g1

0xee7f,	// (0x00028c9c) bg_popup_call_poc_inact_pane_g2

0xdf94,	// (0x00027db1) popup_call_poc_act_window_g2

0xee87,	// (0x00028ca4) bg_popup_call_poc_inact_pane_g3

0xee8f,	// (0x00028cac) bg_popup_call_poc_inact_pane_g4

0xee97,	// (0x00028cb4) bg_popup_call_poc_inact_pane_g5

0xdf9c,	// (0x00027db9) popup_call_poc_act_window_t1_ParamLimits

0xdf9c,	// (0x00027db9) popup_call_poc_act_window_t1

0xdfc4,	// (0x00027de1) popup_call_poc_act_window_t2_ParamLimits

0xdfc4,	// (0x00027de1) popup_call_poc_act_window_t2

0xdfec,	// (0x00027e09) popup_call_poc_act_window_t3_ParamLimits

0xdfec,	// (0x00027e09) popup_call_poc_act_window_t3

0xe014,	// (0x00027e31) popup_call_poc_act_window_t4_ParamLimits

0xe014,	// (0x00027e31) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0002932f) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0002932f) popup_call_poc_act_window_t

0xee9f,	// (0x00028cbc) bg_popup_call_poc_inact_pane_g6

0xeea7,	// (0x00028cc4) bg_popup_call_poc_inact_pane_g7

0xeeaf,	// (0x00028ccc) bg_popup_call_poc_inact_pane_g8

0xe026,	// (0x00027e43) popup_call_poc_inact_window_g2

0xeeb7,	// (0x00028cd4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000293ae) bg_popup_call_poc_inact_pane_g

0xe02e,	// (0x00027e4b) popup_call_poc_inact_window_t1_ParamLimits

0xe02e,	// (0x00027e4b) popup_call_poc_inact_window_t1

0xe043,	// (0x00027e60) popup_call_poc_inact_window_t2_ParamLimits

0xe043,	// (0x00027e60) popup_call_poc_inact_window_t2

0xe058,	// (0x00027e75) popup_call_poc_inact_window_t3_ParamLimits

0xe058,	// (0x00027e75) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00029338) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00029338) popup_call_poc_inact_window_t

0xf038,	// (0x00028e55) context_pane_ParamLimits

0x86a2,	// (0x000224bf) signal_pane_ParamLimits

0xdbdf,	// (0x000279fc) main_call2_pane

0x4b10,	// (0x0001e92d) popup_phob_thumbnail2_window_ParamLimits

0x4b10,	// (0x0001e92d) popup_phob_thumbnail2_window

0x496d,	// (0x0001e78a) aid_hotspot_pointer_arrow_pane

0x4975,	// (0x0001e792) aid_hotspot_pointer_hand_pane

0x8514,	// (0x00022331) phob_pre_status_pane_g5

0x62a3,	// (0x000200c0) cams_zoom_pane_ParamLimits

0x62af,	// (0x000200cc) image_vga_pane_ParamLimits

0x62be,	// (0x000200db) main_camera_pane_g1_ParamLimits

0x62cc,	// (0x000200e9) main_camera_pane_g2_ParamLimits

0x62da,	// (0x000200f7) main_camera_pane_g3_ParamLimits

0x62e6,	// (0x00020103) main_camera_pane_g4_ParamLimits

0x62f2,	// (0x0002010f) main_camera_pane_g5_ParamLimits

0x62fe,	// (0x0002011b) main_camera_pane_g6_ParamLimits

0x630a,	// (0x00020127) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00029037) main_camera_pane_g_ParamLimits

0x6316,	// (0x00020133) main_camera_pane_t1_ParamLimits

0x6328,	// (0x00020145) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00029048) main_camera_pane_t_ParamLimits

0xcee4,	// (0x00026d01) bg_popup_preview_window_pane_cp01_ParamLimits

0xcee4,	// (0x00026d01) bg_popup_preview_window_pane_cp01

0xe06d,	// (0x00027e8a) popup_phob_thumbnail2_window_g1_ParamLimits

0xe06d,	// (0x00027e8a) popup_phob_thumbnail2_window_g1

0xcc89,	// (0x00026aa6) call2_cli_visual_pane

0x820b,	// (0x00022028) popup_call2_audio_conf_window_ParamLimits

0x820b,	// (0x00022028) popup_call2_audio_conf_window

0x8220,	// (0x0002203d) popup_call2_audio_first_window_ParamLimits

0x8220,	// (0x0002203d) popup_call2_audio_first_window

0x82be,	// (0x000220db) popup_call2_audio_in_window_ParamLimits

0x82be,	// (0x000220db) popup_call2_audio_in_window

0x8300,	// (0x0002211d) popup_call2_audio_out_window_ParamLimits

0x8300,	// (0x0002211d) popup_call2_audio_out_window

0x8362,	// (0x0002217f) popup_call2_audio_second_window_ParamLimits

0x8362,	// (0x0002217f) popup_call2_audio_second_window

0x83c0,	// (0x000221dd) popup_call2_audio_wait_window_ParamLimits

0x83c0,	// (0x000221dd) popup_call2_audio_wait_window

0xcc89,	// (0x00026aa6) bg_popup_call2_act_pane_cp03

0xcec6,	// (0x00026ce3) list_conf_pane_cp

0xe079,	// (0x00027e96) popup_call2_audio_conf_window_t1

0xe087,	// (0x00027ea4) list_single_graphic_popup_conf2_pane_ParamLimits

0xe087,	// (0x00027ea4) list_single_graphic_popup_conf2_pane

0xd9f5,	// (0x00027812) list_highlight_pane_cp04

0xe09a,	// (0x00027eb7) list_single_graphic_popup_conf2_pane_g1

0xda06,	// (0x00027823) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0002933f) list_single_graphic_popup_conf2_pane_g

0xe0a4,	// (0x00027ec1) list_single_graphic_popup_conf2_pane_t1

0xe0b2,	// (0x00027ecf) bg_popup_call2_act_pane_cp01_ParamLimits

0xe0b2,	// (0x00027ecf) bg_popup_call2_act_pane_cp01

0xe13c,	// (0x00027f59) call_type_pane_cp05_ParamLimits

0xe13c,	// (0x00027f59) call_type_pane_cp05

0xe190,	// (0x00027fad) popup_call2_audio_second_window_g1_ParamLimits

0xe190,	// (0x00027fad) popup_call2_audio_second_window_g1

0xe1e4,	// (0x00028001) popup_call2_audio_second_window_g2_ParamLimits

0xe1e4,	// (0x00028001) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00029344) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00029344) popup_call2_audio_second_window_g

0xe249,	// (0x00028066) popup_call2_audio_second_window_t1_ParamLimits

0xe249,	// (0x00028066) popup_call2_audio_second_window_t1

0xe304,	// (0x00028121) popup_call2_audio_second_window_t2_ParamLimits

0xe304,	// (0x00028121) popup_call2_audio_second_window_t2

0xe357,	// (0x00028174) popup_call2_audio_second_window_t3_ParamLimits

0xe357,	// (0x00028174) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0002934b) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0002934b) popup_call2_audio_second_window_t

0xcc89,	// (0x00026aa6) bg_popup_call2_in_pane_cp02

0xcc93,	// (0x00026ab0) call_type_pane_cp04

0xcc9b,	// (0x00026ab8) popup_call2_audio_wait_window_g1

0xcca3,	// (0x00026ac0) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00028f24) popup_call2_audio_wait_window_g

0xccab,	// (0x00026ac8) popup_call2_audio_wait_window_t3

0xe44a,	// (0x00028267) bg_popup_call2_act_pane_ParamLimits

0xe44a,	// (0x00028267) bg_popup_call2_act_pane

0xe50a,	// (0x00028327) call_type_pane_cp03_ParamLimits

0xe50a,	// (0x00028327) call_type_pane_cp03

0xe56e,	// (0x0002838b) popup_call2_audio_first_window_g1_ParamLimits

0xe56e,	// (0x0002838b) popup_call2_audio_first_window_g1

0xe5de,	// (0x000283fb) popup_call2_audio_first_window_g2_ParamLimits

0xe5de,	// (0x000283fb) popup_call2_audio_first_window_g2

0xdc35,	// (0x00027a52) popup_call2_audio_first_window_g3_ParamLimits

0xdc35,	// (0x00027a52) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00029354) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00029354) popup_call2_audio_first_window_g

0xe6bc,	// (0x000284d9) popup_call2_audio_first_window_t1_ParamLimits

0xe6bc,	// (0x000284d9) popup_call2_audio_first_window_t1

0xe7bf,	// (0x000285dc) popup_call2_audio_first_window_t4_ParamLimits

0xe7bf,	// (0x000285dc) popup_call2_audio_first_window_t4

0xe8a2,	// (0x000286bf) popup_call2_audio_first_window_t5_ParamLimits

0xe8a2,	// (0x000286bf) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0002935f) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0002935f) popup_call2_audio_first_window_t

0xcedc,	// (0x00026cf9) bg_popup_call2_act_pane_g1

0xef17,	// (0x00028d34) popup_cale_lunar_info_window_t1

0xef25,	// (0x00028d42) popup_cale_lunar_info_window_t2

0xef33,	// (0x00028d50) popup_cale_lunar_info_window_t3

0xcc89,	// (0x00026aa6) bg_popup_call2_bubble_pane

0xe9a3,	// (0x000287c0) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9a3,	// (0x000287c0) bg_popup_call2_in_pane_cp01

0xc957,	// (0x00026774) call_type_pane_cp02

0xe9eb,	// (0x00028808) popup_call2_audio_out_window_g1_ParamLimits

0xe9eb,	// (0x00028808) popup_call2_audio_out_window_g1

0xea17,	// (0x00028834) popup_call2_audio_out_window_g2_ParamLimits

0xea17,	// (0x00028834) popup_call2_audio_out_window_g2

0xea3f,	// (0x0002885c) popup_call2_audio_out_window_g3_ParamLimits

0xea3f,	// (0x0002885c) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00029368) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00029368) popup_call2_audio_out_window_g

0xea7a,	// (0x00028897) popup_call2_audio_out_window_t1_ParamLimits

0xea7a,	// (0x00028897) popup_call2_audio_out_window_t1

0xead9,	// (0x000288f6) popup_call2_audio_out_window_t2_ParamLimits

0xead9,	// (0x000288f6) popup_call2_audio_out_window_t2

0xeb2d,	// (0x0002894a) popup_call2_audio_out_window_t3_ParamLimits

0xeb2d,	// (0x0002894a) popup_call2_audio_out_window_t3

0xeb43,	// (0x00028960) popup_call2_audio_out_window_t4_ParamLimits

0xeb43,	// (0x00028960) popup_call2_audio_out_window_t4

0xeb59,	// (0x00028976) popup_call2_audio_out_window_t5_ParamLimits

0xeb59,	// (0x00028976) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00029371) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00029371) popup_call2_audio_out_window_t

0xebbd,	// (0x000289da) bg_popup_call2_in_pane_ParamLimits

0xebbd,	// (0x000289da) bg_popup_call2_in_pane

0xec19,	// (0x00028a36) popup_call2_audio_in_window_g1_ParamLimits

0xec19,	// (0x00028a36) popup_call2_audio_in_window_g1

0xec51,	// (0x00028a6e) popup_call2_audio_in_window_g2_ParamLimits

0xec51,	// (0x00028a6e) popup_call2_audio_in_window_g2

0xec89,	// (0x00028aa6) popup_call2_audio_in_window_g3_ParamLimits

0xec89,	// (0x00028aa6) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0002937e) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0002937e) popup_call2_audio_in_window_g

0xece1,	// (0x00028afe) popup_call2_audio_in_window_t1_ParamLimits

0xece1,	// (0x00028afe) popup_call2_audio_in_window_t1

0xed61,	// (0x00028b7e) popup_call2_audio_in_window_t2_ParamLimits

0xed61,	// (0x00028b7e) popup_call2_audio_in_window_t2

0xede1,	// (0x00028bfe) popup_call2_audio_in_window_t3_ParamLimits

0xede1,	// (0x00028bfe) popup_call2_audio_in_window_t3

0xedfb,	// (0x00028c18) popup_call2_audio_in_window_t4_ParamLimits

0xedfb,	// (0x00028c18) popup_call2_audio_in_window_t4

0xee0d,	// (0x00028c2a) popup_call2_audio_in_window_t5_ParamLimits

0xee0d,	// (0x00028c2a) popup_call2_audio_in_window_t5

0xee22,	// (0x00028c3f) popup_call2_audio_in_window_t6_ParamLimits

0xee22,	// (0x00028c3f) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00029387) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00029387) popup_call2_audio_in_window_t

0xcedc,	// (0x00026cf9) bg_popup_call2_in_pane_g1

0xef41,	// (0x00028d5e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000293ef) popup_cale_lunar_info_window_t

0xcee4,	// (0x00026d01) bg_popup_call2_rect_pane_ParamLimits

0xcee4,	// (0x00026d01) bg_popup_call2_rect_pane

0xcc89,	// (0x00026aa6) call2_cli_visual_graphic_pane

0xcc89,	// (0x00026aa6) call2_cli_visual_text_pane

0x4b60,	// (0x0001e97d) smil_status_volume_pane_g3

0x0002,

0xd050,	// (0x00026e6d) call2_cli_visual_graphic_pane_g1

0xd050,	// (0x00026e6d) call2_cli_visual_graphic_pane_g2

0xd050,	// (0x00026e6d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00029394) call2_cli_visual_graphic_pane_g

0xee37,	// (0x00028c54) bg_popup_call2_rect_pane_g1

0xd0ee,	// (0x00026f0b) bg_popup_call2_rect_pane_g2

0xee3f,	// (0x00028c5c) bg_popup_call2_rect_pane_g3

0xee47,	// (0x00028c64) bg_popup_call2_rect_pane_g4

0xee4f,	// (0x00028c6c) bg_popup_call2_rect_pane_g5

0xee57,	// (0x00028c74) bg_popup_call2_rect_pane_g6

0xee5f,	// (0x00028c7c) bg_popup_call2_rect_pane_g7

0xee67,	// (0x00028c84) bg_popup_call2_rect_pane_g8

0xee6f,	// (0x00028c8c) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0002939b) bg_popup_call2_rect_pane_g

0xee77,	// (0x00028c94) bg_popup_call2_bubble_pane_g1

0xee7f,	// (0x00028c9c) bg_popup_call2_bubble_pane_g2

0xee87,	// (0x00028ca4) bg_popup_call2_bubble_pane_g3

0xee8f,	// (0x00028cac) bg_popup_call2_bubble_pane_g4

0xee97,	// (0x00028cb4) bg_popup_call2_bubble_pane_g5

0xee9f,	// (0x00028cbc) bg_popup_call2_bubble_pane_g6

0xeea7,	// (0x00028cc4) bg_popup_call2_bubble_pane_g7

0xeeaf,	// (0x00028ccc) bg_popup_call2_bubble_pane_g8

0xeeb7,	// (0x00028cd4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000293ae) bg_popup_call2_bubble_pane_g

0x5f98,	// (0x0001fdb5) aid_cale_week_size_cell_pane

0x633a,	// (0x00020157) aid_cams_cif_uncrop_pane_ParamLimits

0x633a,	// (0x00020157) aid_cams_cif_uncrop_pane

0x649d,	// (0x000202ba) aid_cams_size_cell_ParamLimits

0x649d,	// (0x000202ba) aid_cams_size_cell

0x64a9,	// (0x000202c6) grid_cams_pane_ParamLimits

0x64b7,	// (0x000202d4) linegrid_cams_pane_ParamLimits

0x65e4,	// (0x00020401) call_video_pane_t1

0x6605,	// (0x00020422) call_video_pane_t2

0x0001,

0xf27e,	// (0x0002909b) call_video_pane_t

0x6b85,	// (0x000209a2) aid_cale_month_size_cell_pane_ParamLimits

0x6b85,	// (0x000209a2) aid_cale_month_size_cell_pane

0xf61b,	// (0x00029438) smil_status_volume_pane_g

0x4b6d,	// (0x0001e98a) volume_smil_pane_ParamLimits

0x42c4,	// (0x0001e0e1) aid_popup2_width_pane

0x5ea3,	// (0x0001fcc0) cell_qdial_pane_g4_ParamLimits

0x5ea3,	// (0x0001fcc0) cell_qdial_pane_g4

0x781a,	// (0x00021637) aid_blid_cardinal_pane_ParamLimits

0x782a,	// (0x00021647) aid_blid_destination_pane_ParamLimits

0x782a,	// (0x00021647) aid_blid_destination_pane

0xcee4,	// (0x00026d01) bg_popup_call_poc_act_pane_ParamLimits

0xcee4,	// (0x00026d01) bg_popup_call_poc_act_pane

0xcee4,	// (0x00026d01) bg_popup_call_poc_inact_pane_ParamLimits

0xcee4,	// (0x00026d01) bg_popup_call_poc_inact_pane

0xeec7,	// (0x00028ce4) bg_popup_call_poc_act_pane_g1

0xeecf,	// (0x00028cec) bg_popup_call_poc_act_pane_g2

0xeed7,	// (0x00028cf4) bg_popup_call_poc_act_pane_g3

0xee8f,	// (0x00028cac) bg_popup_call_poc_act_pane_g4

0xee97,	// (0x00028cb4) bg_popup_call_poc_act_pane_g5

0xeedf,	// (0x00028cfc) bg_popup_call_poc_act_pane_g6

0xeea7,	// (0x00028cc4) bg_popup_call_poc_act_pane_g7

0xeee7,	// (0x00028d04) bg_popup_call_poc_act_pane_g8

0xcc89,	// (0x00026aa6) main_usb_pane

0x4a4b,	// (0x0001e868) popup_cale_lunar_info_window

0x6924,	// (0x00020741) im_reading_pane_t1_ParamLimits

0xd372,	// (0x0002718f) list_im_pane_ParamLimits

0xd383,	// (0x000271a0) scroll_pane_cp07_ParamLimits

0xcc89,	// (0x00026aa6) grid_highlight_pane_cp012

0xcee4,	// (0x00026d01) mup_scale_pane_ParamLimits

0xdc35,	// (0x00027a52) main_usb_pane_g1_ParamLimits

0xdc35,	// (0x00027a52) main_usb_pane_g1

0x8437,	// (0x00022254) main_usb_pane_g2_ParamLimits

0x8437,	// (0x00022254) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000293d8) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000293d8) main_usb_pane_g

0x8443,	// (0x00022260) main_usb_pane_t1_ParamLimits

0x8443,	// (0x00022260) main_usb_pane_t1

0x8455,	// (0x00022272) main_usb_pane_t2_ParamLimits

0x8455,	// (0x00022272) main_usb_pane_t2

0x8467,	// (0x00022284) main_usb_pane_t3_ParamLimits

0x8467,	// (0x00022284) main_usb_pane_t3

0x8479,	// (0x00022296) main_usb_pane_t4_ParamLimits

0x8479,	// (0x00022296) main_usb_pane_t4

0x848b,	// (0x000222a8) main_usb_pane_t5_ParamLimits

0x848b,	// (0x000222a8) main_usb_pane_t5

0x849d,	// (0x000222ba) main_usb_pane_t6_ParamLimits

0x849d,	// (0x000222ba) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000293dd) main_usb_pane_t_ParamLimits

0x77c0,	// (0x000215dd) aid_text_placing

0x77cc,	// (0x000215e9) main_location2_pane_t1_ParamLimits

0x77e0,	// (0x000215fd) main_location2_pane_t2_ParamLimits

0x77f4,	// (0x00021611) main_location2_pane_t3_ParamLimits

0x7808,	// (0x00021625) main_location2_pane_t4_ParamLimits

0x7808,	// (0x00021625) main_location2_pane_t4

0xf3df,	// (0x000291fc) main_location2_pane_t_ParamLimits

0xcf28,	// (0x00026d45) find_pinb_pane_g2_ParamLimits

0xcf28,	// (0x00026d45) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00028f4a) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00028f4a) find_pinb_pane_g

0xcf34,	// (0x00026d51) find_pinb_pane_t1_ParamLimits

0xcf46,	// (0x00026d63) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00028f4f) find_pinb_pane_t_ParamLimits

0xcc89,	// (0x00026aa6) main_call3_pane

0x6f9d,	// (0x00020dba) cale_month_day_heading_pane_t1_ParamLimits

0x6ffb,	// (0x00020e18) cale_month_day_heading_pane_t2_ParamLimits

0x7060,	// (0x00020e7d) cale_month_day_heading_pane_t3_ParamLimits

0x70c5,	// (0x00020ee2) cale_month_day_heading_pane_t4_ParamLimits

0x712a,	// (0x00020f47) cale_month_day_heading_pane_t5_ParamLimits

0x718f,	// (0x00020fac) cale_month_day_heading_pane_t6_ParamLimits

0x71fc,	// (0x00021019) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000290d3) cale_month_day_heading_pane_t_ParamLimits

0xd5ed,	// (0x0002740a) smil_status_volume_pane

0x7feb,	// (0x00021e08) postcard_address_pane_ParamLimits

0x7feb,	// (0x00021e08) postcard_address_pane

0x7ff7,	// (0x00021e14) postcard_message_pane_ParamLimits

0x7ff7,	// (0x00021e14) postcard_message_pane

0x83ff,	// (0x0002221c) call2_cli_visual_pane_t1_ParamLimits

0x83ff,	// (0x0002221c) call2_cli_visual_pane_t1

0x8892,	// (0x000226af) postcard_message_pane_t1_ParamLimits

0x8892,	// (0x000226af) postcard_message_pane_t1

0x887b,	// (0x00022698) postcard_address_pane_t1_ParamLimits

0x887b,	// (0x00022698) postcard_address_pane_t1

0x886c,	// (0x00022689) popup_call3_audio_in_window_ParamLimits

0x886c,	// (0x00022689) popup_call3_audio_in_window

0x8754,	// (0x00022571) bg_popup_call3_in_pane_ParamLimits

0x8754,	// (0x00022571) bg_popup_call3_in_pane

0x87b2,	// (0x000225cf) popup_call3_audio_in_window_g1_ParamLimits

0x87b2,	// (0x000225cf) popup_call3_audio_in_window_g1

0x87ca,	// (0x000225e7) popup_call3_audio_in_window_g2_ParamLimits

0x87ca,	// (0x000225e7) popup_call3_audio_in_window_g2

0x87e2,	// (0x000225ff) popup_call3_audio_in_window_g3_ParamLimits

0x87e2,	// (0x000225ff) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0002943f) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0002943f) popup_call3_audio_in_window_g

0x880a,	// (0x00022627) popup_call3_audio_in_window_t1_ParamLimits

0x880a,	// (0x00022627) popup_call3_audio_in_window_t1

0x8832,	// (0x0002264f) popup_call3_audio_in_window_t2_ParamLimits

0x8832,	// (0x0002264f) popup_call3_audio_in_window_t2

0x885a,	// (0x00022677) popup_call3_audio_in_window_t3_ParamLimits

0x885a,	// (0x00022677) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00029448) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00029448) popup_call3_audio_in_window_t

0xdbdf,	// (0x000279fc) bg_popup_call3_rect_pane

0xee37,	// (0x00028c54) bg_popup_call3_rect_pane_g1

0xd0ee,	// (0x00026f0b) bg_popup_call3_rect_pane_g2

0xee3f,	// (0x00028c5c) bg_popup_call3_rect_pane_g3

0xee47,	// (0x00028c64) bg_popup_call3_rect_pane_g4

0xee4f,	// (0x00028c6c) bg_popup_call3_rect_pane_g5

0xee57,	// (0x00028c74) bg_popup_call3_rect_pane_g6

0xee5f,	// (0x00028c7c) bg_popup_call3_rect_pane_g7

0x7c20,	// (0x00021a3d) mup_visualizer_osc_pane

0xdcac,	// (0x00027ac9) mup_visualizer_spec_pane

0x8774,	// (0x00022591) call3_video_qcif_pane_ParamLimits

0x8774,	// (0x00022591) call3_video_qcif_pane

0x8784,	// (0x000225a1) call3_video_qcif_uncrop_pane_ParamLimits

0x8784,	// (0x000225a1) call3_video_qcif_uncrop_pane

0x8790,	// (0x000225ad) call3_video_subqcif_pane_ParamLimits

0x8790,	// (0x000225ad) call3_video_subqcif_pane

0x87a2,	// (0x000225bf) call3_video_subqcif_uncrop_pane_ParamLimits

0x87a2,	// (0x000225bf) call3_video_subqcif_uncrop_pane

0x87fa,	// (0x00022617) popup_call3_audio_in_window_g4_ParamLimits

0x87fa,	// (0x00022617) popup_call3_audio_in_window_g4

0x8741,	// (0x0002255e) mup_spec_half_pane

0x874a,	// (0x00022567) mup_spec_half_pane_cp

0xf098,	// (0x00028eb5) mup_osc_middle_pane

0xf0a1,	// (0x00028ebe) mup_visualizer_osc_pane_g1

0x8722,	// (0x0002253f) mup_spec_bar_pane_ParamLimits

0x8722,	// (0x0002253f) mup_spec_bar_pane

0xf085,	// (0x00028ea2) mup_spec_bar_pane_g1

0xf08f,	// (0x00028eac) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00029433) mup_spec_bar_pane_g

0x5f98,	// (0x0001fdb5) aid_cale_week_size_cell_pane_ParamLimits

0x5fab,	// (0x0001fdc8) bg_cale_heading_pane_ParamLimits

0xd122,	// (0x00026f3f) bg_cale_pane_cp01_ParamLimits

0x5fc7,	// (0x0001fde4) cale_week_corner_pane_ParamLimits

0x5fd8,	// (0x0001fdf5) cale_week_day_heading_pane_ParamLimits

0x5ff4,	// (0x0001fe11) cale_week_scroll_pane_g1_ParamLimits

0x600d,	// (0x0001fe2a) cale_week_scroll_pane_g2_ParamLimits

0x601e,	// (0x0001fe3b) cale_week_scroll_pane_g3_ParamLimits

0x602f,	// (0x0001fe4c) cale_week_scroll_pane_g4_ParamLimits

0x6040,	// (0x0001fe5d) cale_week_scroll_pane_g5_ParamLimits

0x6051,	// (0x0001fe6e) cale_week_scroll_pane_g6_ParamLimits

0x6062,	// (0x0001fe7f) cale_week_scroll_pane_g7_ParamLimits

0x6075,	// (0x0001fe92) cale_week_scroll_pane_g8_ParamLimits

0x6088,	// (0x0001fea5) cale_week_scroll_pane_g9_ParamLimits

0x6099,	// (0x0001feb6) cale_week_scroll_pane_g10_ParamLimits

0x60aa,	// (0x0001fec7) cale_week_scroll_pane_g11_ParamLimits

0x60bb,	// (0x0001fed8) cale_week_scroll_pane_g12_ParamLimits

0x60d4,	// (0x0001fef1) cale_week_scroll_pane_g13_ParamLimits

0x60ed,	// (0x0001ff0a) cale_week_scroll_pane_g14_ParamLimits

0x6106,	// (0x0001ff23) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00028fdb) cale_week_scroll_pane_g_ParamLimits

0x611f,	// (0x0001ff3c) cale_week_time_pane_ParamLimits

0x6132,	// (0x0001ff4f) grid_cale_week_pane_ParamLimits

0xd13b,	// (0x00026f58) listscroll_cale_week_pane_t1

0x614f,	// (0x0001ff6c) scroll_pane_cp08_ParamLimits

0x6bd6,	// (0x000209f3) cale_month_corner_pane_ParamLimits

0xd599,	// (0x000273b6) cale_month_pane_t1

0x6f4c,	// (0x00020d69) cale_month_week_pane_ParamLimits

0xdc35,	// (0x00027a52) popup_call_status_window_g1_ParamLimits

0x766b,	// (0x00021488) popup_call_status_window_g2_ParamLimits

0x7677,	// (0x00021494) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00029183) popup_call_status_window_g_ParamLimits

0xd952,	// (0x0002776f) aid_call2_pane

0x7ec2,	// (0x00021cdf) msg_header_pane_g1

0x7feb,	// (0x00021e08) postcard_address2_pane_ParamLimits

0x7feb,	// (0x00021e08) postcard_address2_pane

0x7ff7,	// (0x00021e14) postcard_message2_pane_ParamLimits

0x7ff7,	// (0x00021e14) postcard_message2_pane

0x86b0,	// (0x000224cd) message2_row_pane_ParamLimits

0x86b0,	// (0x000224cd) message2_row_pane

0x86cd,	// (0x000224ea) address2_row_pane_ParamLimits

0x86cd,	// (0x000224ea) address2_row_pane

0xf053,	// (0x00028e70) postcard_message2_row_pane_g1

0xf05b,	// (0x00028e78) postcard_message2_row_pane_t1

0xf053,	// (0x00028e70) address2_row_pane_g1

0xf05b,	// (0x00028e78) address2_row_pane_t1

0x4826,	// (0x0001e643) aid_size_cell_vorec

0xcc89,	// (0x00026aa6) main_rss_pane

0x86e0,	// (0x000224fd) rss_list_single_pane_ParamLimits

0x86e0,	// (0x000224fd) rss_list_single_pane

0xf069,	// (0x00028e86) rss_list_single_pane_t1

0xf077,	// (0x00028e94) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0002942e) rss_list_single_pane_t

0xcc89,	// (0x00026aa6) main_camera2_pane

0xcc89,	// (0x00026aa6) main_video2_pane

0x4bcb,	// (0x0001e9e8) cams_zoom_pane_cp2_ParamLimits

0x4bcb,	// (0x0001e9e8) cams_zoom_pane_cp2

0x4bd7,	// (0x0001e9f4) image2_vga_pane_ParamLimits

0x4bd7,	// (0x0001e9f4) image2_vga_pane

0x4be6,	// (0x0001ea03) main_camera2_pane_g1_ParamLimits

0x4be6,	// (0x0001ea03) main_camera2_pane_g1

0x4bf2,	// (0x0001ea0f) main_camera2_pane_g2_ParamLimits

0x4bf2,	// (0x0001ea0f) main_camera2_pane_g2

0x4bfe,	// (0x0001ea1b) main_camera2_pane_g3_ParamLimits

0x4bfe,	// (0x0001ea1b) main_camera2_pane_g3

0x4c0a,	// (0x0001ea27) main_camera2_pane_g4_ParamLimits

0x4c0a,	// (0x0001ea27) main_camera2_pane_g4

0x4c16,	// (0x0001ea33) main_camera2_pane_g5_ParamLimits

0x4c16,	// (0x0001ea33) main_camera2_pane_g5

0x4c22,	// (0x0001ea3f) main_camera2_pane_g6_ParamLimits

0x4c22,	// (0x0001ea3f) main_camera2_pane_g6

0x4c2e,	// (0x0001ea4b) main_camera2_pane_g7_ParamLimits

0x4c2e,	// (0x0001ea4b) main_camera2_pane_g7

0x4c3a,	// (0x0001ea57) main_camera2_pane_g8_ParamLimits

0x4c3a,	// (0x0001ea57) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0002944f) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0002944f) main_camera2_pane_g

0x4c52,	// (0x0001ea6f) main_camera2_pane_t1_ParamLimits

0x4c52,	// (0x0001ea6f) main_camera2_pane_t1

0x4c64,	// (0x0001ea81) main_camera2_pane_t2_ParamLimits

0x4c64,	// (0x0001ea81) main_camera2_pane_t2

0x4c76,	// (0x0001ea93) main_camera2_pane_t3_ParamLimits

0x4c76,	// (0x0001ea93) main_camera2_pane_t3

0x4c88,	// (0x0001eaa5) main_camera2_pane_t4_ParamLimits

0x4c88,	// (0x0001eaa5) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00029462) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00029462) main_camera2_pane_t

0x4cea,	// (0x0001eb07) cams_zoom_pane_cp4_ParamLimits

0x4cea,	// (0x0001eb07) cams_zoom_pane_cp4

0x4cfa,	// (0x0001eb17) image2_cif_pane_ParamLimits

0x4cfa,	// (0x0001eb17) image2_cif_pane

0x4d0f,	// (0x0001eb2c) image2_subqcif_pane_ParamLimits

0x4d0f,	// (0x0001eb2c) image2_subqcif_pane

0x4d1e,	// (0x0001eb3b) main_video2_pane_g1_ParamLimits

0x4d1e,	// (0x0001eb3b) main_video2_pane_g1

0x4d30,	// (0x0001eb4d) main_video2_pane_g2_ParamLimits

0x4d30,	// (0x0001eb4d) main_video2_pane_g2

0x4d40,	// (0x0001eb5d) main_video2_pane_g3_ParamLimits

0x4d40,	// (0x0001eb5d) main_video2_pane_g3

0x4d50,	// (0x0001eb6d) main_video2_pane_g4_ParamLimits

0x4d50,	// (0x0001eb6d) main_video2_pane_g4

0x4d60,	// (0x0001eb7d) main_video2_pane_g5_ParamLimits

0x4d60,	// (0x0001eb7d) main_video2_pane_g5

0x4d70,	// (0x0001eb8d) main_video2_pane_g6_ParamLimits

0x4d70,	// (0x0001eb8d) main_video2_pane_g6

0x0005,

0xf654,	// (0x00029471) main_video2_pane_g_ParamLimits

0xf654,	// (0x00029471) main_video2_pane_g

0x4d82,	// (0x0001eb9f) main_video2_pane_t1_ParamLimits

0x4d82,	// (0x0001eb9f) main_video2_pane_t1

0x4d9c,	// (0x0001ebb9) main_video2_pane_t2_ParamLimits

0x4d9c,	// (0x0001ebb9) main_video2_pane_t2

0x4dc2,	// (0x0001ebdf) main_video2_pane_t3_ParamLimits

0x4dc2,	// (0x0001ebdf) main_video2_pane_t3

0x0002,

0xf661,	// (0x0002947e) main_video2_pane_t_ParamLimits

0xf661,	// (0x0002947e) main_video2_pane_t

0x8554,	// (0x00022371) call_muted_g2

0x0001,

0xf603,	// (0x00029420) call_muted_g

0xcc89,	// (0x00026aa6) main_mup2_pane

0x0065,	// (0x00019e82) main_mup2_pane_g1_ParamLimits

0x0065,	// (0x00019e82) main_mup2_pane_g1

0x88ad,	// (0x000226ca) main_mup2_pane_g2_ParamLimits

0x88ad,	// (0x000226ca) main_mup2_pane_g2

0x4e11,	// (0x0001ec2e) main_mup_pane_g13_cp1

0x4e19,	// (0x0001ec36) mup_volume_pane_cp1

0x88cd,	// (0x000226ea) main_mup2_pane_g4_ParamLimits

0x88cd,	// (0x000226ea) main_mup2_pane_g4

0x88e2,	// (0x000226ff) main_mup2_pane_g5_ParamLimits

0x88e2,	// (0x000226ff) main_mup2_pane_g5

0x88f7,	// (0x00022714) main_mup2_pane_g6_ParamLimits

0x88f7,	// (0x00022714) main_mup2_pane_g6

0x890c,	// (0x00022729) main_mup2_pane_g7_ParamLimits

0x890c,	// (0x00022729) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00029485) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00029485) main_mup2_pane_g

0x8928,	// (0x00022745) main_mup2_pane_t1_ParamLimits

0x8928,	// (0x00022745) main_mup2_pane_t1

0x893f,	// (0x0002275c) main_mup2_pane_t2_ParamLimits

0x893f,	// (0x0002275c) main_mup2_pane_t2

0x8956,	// (0x00022773) main_mup2_pane_t3_ParamLimits

0x8956,	// (0x00022773) main_mup2_pane_t3

0x896d,	// (0x0002278a) main_mup2_pane_t4_ParamLimits

0x896d,	// (0x0002278a) main_mup2_pane_t4

0x8987,	// (0x000227a4) main_mup2_pane_t5_ParamLimits

0x8987,	// (0x000227a4) main_mup2_pane_t5

0x89a1,	// (0x000227be) main_mup2_pane_t6_ParamLimits

0x89a1,	// (0x000227be) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00029494) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00029494) main_mup2_pane_t

0x89d9,	// (0x000227f6) mup2_visualizer_pane_ParamLimits

0x89d9,	// (0x000227f6) mup2_visualizer_pane

0x8a0f,	// (0x0002282c) mup_progress_pane_cp_ParamLimits

0x8a0f,	// (0x0002282c) mup_progress_pane_cp

0x4dfc,	// (0x0001ec19) mup_volume_pane_cp_ParamLimits

0x4dfc,	// (0x0001ec19) mup_volume_pane_cp

0x8a26,	// (0x00022843) mup2_visualizer_pane_g1_ParamLimits

0x8a26,	// (0x00022843) mup2_visualizer_pane_g1

0x0037,	// (0x00019e54) mup2_visualizer_pane_g2_ParamLimits

0x0037,	// (0x00019e54) mup2_visualizer_pane_g2

0x8a3b,	// (0x00022858) mup2_visualizer_pane_g3_ParamLimits

0x8a3b,	// (0x00022858) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000294a1) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000294a1) mup2_visualizer_pane_g

0xdf09,	// (0x00027d26) aid_size_cell_fmradio

0x49df,	// (0x0001e7fc) aid_height_parent_landcape

0xd401,	// (0x0002721e) wml_content_pane_cp

0xd409,	// (0x00027226) wml_tabs_pane

0xd412,	// (0x0002722f) popup_wml_miniature_window

0xd41a,	// (0x00027237) scroll_pane_cp021

0xd42e,	// (0x0002724b) wml_content_pane_comp8

0xcc89,	// (0x00026aa6) bg_popup_sub_pane_cp05

0x0055,	// (0x00019e72) popup_wml_miniature_window_g1

0x005d,	// (0x00019e7a) wml_miniature_view_pane

0x8a49,	// (0x00022866) aid_size_wml_view

0x8a51,	// (0x0002286e) wml_miniature_view_pane_g1

0x8a5a,	// (0x00022877) wml_miniature_view_pane_g2

0x8a63,	// (0x00022880) wml_miniature_view_pane_g3

0x8a6b,	// (0x00022888) wml_miniature_view_pane_g4

0x8a73,	// (0x00022890) wml_miniature_view_pane_g5

0x8a7b,	// (0x00022898) wml_miniature_view_pane_g6

0x8a83,	// (0x000228a0) wml_miniature_view_pane_g7

0x8a8b,	// (0x000228a8) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000294a8) wml_miniature_view_pane_g

0x0065,	// (0x00019e82) background_graphic_ParamLimits

0x0065,	// (0x00019e82) background_graphic

0x0071,	// (0x00019e8e) wml_tabs_2_pane

0x007a,	// (0x00019e97) wml_tabs_3_pane_ParamLimits

0x007a,	// (0x00019e97) wml_tabs_3_pane

0x008c,	// (0x00019ea9) wml_tabs_4_pane_ParamLimits

0x008c,	// (0x00019ea9) wml_tabs_4_pane

0x00a2,	// (0x00019ebf) wml_tabs_5_pane_ParamLimits

0x00a2,	// (0x00019ebf) wml_tabs_5_pane

0x00bc,	// (0x00019ed9) wml_tabs_pane_g2_ParamLimits

0x00bc,	// (0x00019ed9) wml_tabs_pane_g2

0x00d0,	// (0x00019eed) wml_tabs_pane_g3_ParamLimits

0x00d0,	// (0x00019eed) wml_tabs_pane_g3

0x8a93,	// (0x000228b0) wml_tabs_2_active_pane_ParamLimits

0x8a93,	// (0x000228b0) wml_tabs_2_active_pane

0x8aa3,	// (0x000228c0) wml_tabs_2_passive_pane_ParamLimits

0x8aa3,	// (0x000228c0) wml_tabs_2_passive_pane

0x8ab3,	// (0x000228d0) wml_tabs_3_active_pane_cp_ParamLimits

0x8ab3,	// (0x000228d0) wml_tabs_3_active_pane_cp

0x8ac4,	// (0x000228e1) wml_tabs_3_passive_pane_ParamLimits

0x8ac4,	// (0x000228e1) wml_tabs_3_passive_pane

0x8ad5,	// (0x000228f2) wml_tabs_3_passive_pane_cp_ParamLimits

0x8ad5,	// (0x000228f2) wml_tabs_3_passive_pane_cp

0x8ae6,	// (0x00022903) tabs_4_active_pane

0x8aee,	// (0x0002290b) tabs_4_passive_pane

0x8af6,	// (0x00022913) tabs_4_passive_pane_cp

0x8afe,	// (0x0002291b) tabs_4_passive_pane_cp2

0xeebf,	// (0x00028cdc) aid_height_text

0x7be9,	// (0x00021a06) mup_volume_cont_pane_ParamLimits

0x7be9,	// (0x00021a06) mup_volume_cont_pane

0x5c71,	// (0x0001fa8e) aid_size_cell_pinb

0xcf14,	// (0x00026d31) aid_size_list_pinb

0x89f8,	// (0x00022815) mup2_volume_cont_pane_ParamLimits

0x89f8,	// (0x00022815) mup2_volume_cont_pane

0x4de8,	// (0x0001ec05) mup2_volume_cont_pane_g1_ParamLimits

0x4de8,	// (0x0001ec05) mup2_volume_cont_pane_g1

0x42d0,	// (0x0001e0ed) aid_size_cell_touch_ParamLimits

0x42d0,	// (0x0001e0ed) aid_size_cell_touch

0x454c,	// (0x0001e369) touch_pane_ParamLimits

0x454c,	// (0x0001e369) touch_pane

0x4542,	// (0x0001e35f) main_rss2_pane

0x0126,	// (0x00019f43) listscroll_rss2_pane

0x012f,	// (0x00019f4c) rss2_navigation_pane

0x0137,	// (0x00019f54) list_rss2_pane

0xda92,	// (0x000278af) scroll_pane_cp22

0x013f,	// (0x00019f5c) rss2_navigation_pane_g1

0x0148,	// (0x00019f65) rss2_navigation_pane_g2

0x0150,	// (0x00019f6d) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x000294b9) rss2_navigation_pane_g

0x0158,	// (0x00019f75) rss2_navigation_pane_t1

0x8b06,	// (0x00022923) rss2_list_single_pane_ParamLimits

0x8b06,	// (0x00022923) rss2_list_single_pane

0x0166,	// (0x00019f83) rss2_list_single_pane_t2

0x0174,	// (0x00019f91) rss2_list_single_pane_t3_ParamLimits

0x0174,	// (0x00019f91) rss2_list_single_pane_t3

0x0191,	// (0x00019fae) rss2_list_single_pane_t4

0x73e4,	// (0x00021201) smil_status_pane_g1

0x49f6,	// (0x0001e813) main_image2_pane_ParamLimits

0x49f6,	// (0x0001e813) main_image2_pane

0x4c46,	// (0x0001ea63) main_camera2_pane_g9_ParamLimits

0x4c46,	// (0x0001ea63) main_camera2_pane_g9

0x4c9a,	// (0x0001eab7) main_camera2_pane_t5_ParamLimits

0x4c9a,	// (0x0001eab7) main_camera2_pane_t5

0x4cac,	// (0x0001eac9) main_camera2_pane_t6_ParamLimits

0x4cac,	// (0x0001eac9) main_camera2_pane_t6

0x8b42,	// (0x0002295f) main_image2_pane_g1_ParamLimits

0x8b42,	// (0x0002295f) main_image2_pane_g1

0x81cc,	// (0x00021fe9) smil2_video_pane_ParamLimits

0x81cc,	// (0x00021fe9) smil2_video_pane

0x4304,	// (0x0001e121) aid_zoom_text_primary_cp

0x44f3,	// (0x0001e310) popup_preview_fixed_window

0xd36a,	// (0x00027187) im_reading_pane_g1

0x4b90,	// (0x0001e9ad) cams2_bc_adjust_pane_cp_ParamLimits

0x4b90,	// (0x0001e9ad) cams2_bc_adjust_pane_cp

0x4cdc,	// (0x0001eaf9) cams2_bc_adjust_pane_ParamLimits

0x4cdc,	// (0x0001eaf9) cams2_bc_adjust_pane

0x1990,	// (0x0001b7ad) cams2_bc_adjust_pane_g1

0x4e21,	// (0x0001ec3e) cams2_slider_pane

0x4e2a,	// (0x0001ec47) cams2_slider_pane_g1

0x4e33,	// (0x0001ec50) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x000294c0) cams2_slider_pane_g

0x45bd,	// (0x0001e3da) calc_display_pane_ParamLimits

0x45db,	// (0x0001e3f8) calc_paper_pane_ParamLimits

0x45f7,	// (0x0001e414) grid_calc_pane_ParamLimits

0x493e,	// (0x0001e75b) popup_clock_digital_window_t1_ParamLimits

0xdea6,	// (0x00027cc3) main_image_pane_t1

0x45a3,	// (0x0001e3c0) aid_size_cell_calc_ParamLimits

0x45a3,	// (0x0001e3c0) aid_size_cell_calc

0x4a27,	// (0x0001e844) popup_blid_sat_info2_window_ParamLimits

0x4a27,	// (0x0001e844) popup_blid_sat_info2_window

0x01db,	// (0x00019ff8) aid_size_cell_blid

0x01e3,	// (0x0001a000) bg_popup_window_pane_cp07

0x0206,	// (0x0001a023) grid_popup_blid_pane

0x0210,	// (0x0001a02d) heading_pane_cp05_ParamLimits

0x0210,	// (0x0001a02d) heading_pane_cp05

0x02da,	// (0x0001a0f7) cell_popup_blid_pane_ParamLimits

0x02da,	// (0x0001a0f7) cell_popup_blid_pane

0x0300,	// (0x0001a11d) cell_popup_blid_pane_g1

0x0308,	// (0x0001a125) cell_popup_blid_pane_t1

0x89be,	// (0x000227db) mup2_indicator_pane_ParamLimits

0x89be,	// (0x000227db) mup2_indicator_pane

0xdbdf,	// (0x000279fc) mup2_visualizer_osc_pane

0x0043,	// (0x00019e60) mup2_visualizer_spec_pane_ParamLimits

0x0043,	// (0x00019e60) mup2_visualizer_spec_pane

0x8b4e,	// (0x0002296b) mup2_spec_half_pane

0x8b57,	// (0x00022974) mup2_spec_half_pane_cp

0x8b61,	// (0x0002297e) mup2_spec_bar_pane_ParamLimits

0x8b61,	// (0x0002297e) mup2_spec_bar_pane

0xf085,	// (0x00028ea2) mup2_spec_bar_pane_g1

0xf08f,	// (0x00028eac) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00029433) mup2_spec_bar_pane_g

0x8b80,	// (0x0002299d) mup2_osc_middle_pane

0xf0a1,	// (0x00028ebe) mup2_visualizer_osc_pane_g1

0xc88a,	// (0x000266a7) popup_number_entry_window_t1_ParamLimits

0xc89d,	// (0x000266ba) popup_number_entry_window_t2_ParamLimits

0xc8af,	// (0x000266cc) popup_number_entry_window_t3_ParamLimits

0x5ba8,	// (0x0001f9c5) popup_number_entry_window_t5_ParamLimits

0x5ba8,	// (0x0001f9c5) popup_number_entry_window_t5

0xf0d8,	// (0x00028ef5) popup_number_entry_window_t_ParamLimits

0xc8c1,	// (0x000266de) text_title_cp2_ParamLimits

0x497d,	// (0x0001e79a) aid_hotspot_pointer_text2_pane

0x49d3,	// (0x0001e7f0) main_viewer_pane_g9_ParamLimits

0x49d3,	// (0x0001e7f0) main_viewer_pane_g9

0xd599,	// (0x000273b6) cale_month_pane_t1_ParamLimits

0xd600,	// (0x0002741d) bg_cale_pane_ParamLimits

0xd618,	// (0x00027435) list_cale_pane_ParamLimits

0xd13b,	// (0x00026f58) listscroll_cale_day_pane_t1

0xd629,	// (0x00027446) scroll_pane_cp09_ParamLimits

0x7c28,	// (0x00021a45) main_mup_eq_pane_t1_ParamLimits

0x7c28,	// (0x00021a45) main_mup_eq_pane_t1

0x7c42,	// (0x00021a5f) main_mup_eq_pane_t2_ParamLimits

0x7c42,	// (0x00021a5f) main_mup_eq_pane_t2

0x7c5a,	// (0x00021a77) main_mup_eq_pane_t3_ParamLimits

0x7c5a,	// (0x00021a77) main_mup_eq_pane_t3

0x7c72,	// (0x00021a8f) main_mup_eq_pane_t4_ParamLimits

0x7c72,	// (0x00021a8f) main_mup_eq_pane_t4

0x7c8a,	// (0x00021aa7) main_mup_eq_pane_t5_ParamLimits

0x7c8a,	// (0x00021aa7) main_mup_eq_pane_t5

0x7ca2,	// (0x00021abf) main_mup_eq_pane_t6_ParamLimits

0x7ca2,	// (0x00021abf) main_mup_eq_pane_t6

0x7cb6,	// (0x00021ad3) main_mup_eq_pane_t7_ParamLimits

0x7cb6,	// (0x00021ad3) main_mup_eq_pane_t7

0x7cca,	// (0x00021ae7) main_mup_eq_pane_t8_ParamLimits

0x7cca,	// (0x00021ae7) main_mup_eq_pane_t8

0x7ce0,	// (0x00021afd) main_mup_eq_pane_t9_ParamLimits

0x7ce0,	// (0x00021afd) main_mup_eq_pane_t9

0x7cf8,	// (0x00021b15) main_mup_eq_pane_t10_ParamLimits

0x7cf8,	// (0x00021b15) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00029282) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00029282) main_mup_eq_pane_t

0x7db5,	// (0x00021bd2) mup_equalizer_pane_cp5_ParamLimits

0x7dcb,	// (0x00021be8) mup_equalizer_pane_cp6_ParamLimits

0x7de3,	// (0x00021c00) mup_equalizer_pane_cp7_ParamLimits

0x4542,	// (0x0001e35f) main_gallery_pane

0xf0aa,	// (0x00028ec7) smil2_volume_pane

0xf0c5,	// (0x00028ee2) smil_status_volume_pane_g1_ParamLimits

0xf0b2,	// (0x00028ecf) smil_status_volume_pane_g2_ParamLimits

0x4b60,	// (0x0001e97d) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00029438) smil_status_volume_pane_g_ParamLimits

0x01e3,	// (0x0001a000) bg_popup_window_pane_cp07_ParamLimits

0x01f1,	// (0x0001a00e) blid_firmament_pane

0x8b89,	// (0x000229a6) aid_size_cell_gallery_ParamLimits

0x8b89,	// (0x000229a6) aid_size_cell_gallery

0x8b97,	// (0x000229b4) grid_gallery_pane_ParamLimits

0x8b97,	// (0x000229b4) grid_gallery_pane

0x8ba7,	// (0x000229c4) cell_gallery_pane_ParamLimits

0x8ba7,	// (0x000229c4) cell_gallery_pane

0x0316,	// (0x0001a133) bg_cell_gallery_focus_pane_ParamLimits

0x0316,	// (0x0001a133) bg_cell_gallery_focus_pane

0x0328,	// (0x0001a145) cell_gallery_pane_g1_ParamLimits

0x0328,	// (0x0001a145) cell_gallery_pane_g1

0x8bf5,	// (0x00022a12) cell_gallery_pane_g2_ParamLimits

0x8bf5,	// (0x00022a12) cell_gallery_pane_g2

0x8c02,	// (0x00022a1f) cell_gallery_pane_g3_ParamLimits

0x8c02,	// (0x00022a1f) cell_gallery_pane_g3

0x0334,	// (0x0001a151) cell_gallery_pane_g4_ParamLimits

0x0334,	// (0x0001a151) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000294e6) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000294e6) cell_gallery_pane_g

0x0340,	// (0x0001a15d) bg_cell_gallery_focus_pane_g1

0x0348,	// (0x0001a165) bg_cell_gallery_focus_pane_g2

0x0350,	// (0x0001a16d) bg_cell_gallery_focus_pane_g3

0x0358,	// (0x0001a175) bg_cell_gallery_focus_pane_g4

0x0360,	// (0x0001a17d) bg_cell_gallery_focus_pane_g5

0x0368,	// (0x0001a185) bg_cell_gallery_focus_pane_g6

0x0370,	// (0x0001a18d) bg_cell_gallery_focus_pane_g7

0x0378,	// (0x0001a195) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000294ef) bg_cell_gallery_focus_pane_g

0x0380,	// (0x0001a19d) aid_firma_cardinal

0x0394,	// (0x0001a1b1) blid_firmament_pane_t1

0x03ab,	// (0x0001a1c8) blid_firmament_pane_t2

0x03c2,	// (0x0001a1df) blid_firmament_pane_t3

0x03d9,	// (0x0001a1f6) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00029500) blid_firmament_pane_t

0x03f0,	// (0x0001a20d) blid_sat_info_pane

0x0400,	// (0x0001a21d) blid_sat_info_pane_g1

0x0400,	// (0x0001a21d) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00029509) blid_sat_info_pane_g

0x040a,	// (0x0001a227) blid_sat_info_pane_t1

0x0418,	// (0x0001a235) smil2_volume_content_pane

0x0421,	// (0x0001a23e) smil2_volume_pane_g1

0x0429,	// (0x0001a246) smil2_volume_content_pane_g1

0x0432,	// (0x0001a24f) smil2_volume_content_pane_g2

0x043b,	// (0x0001a258) smil2_volume_content_pane_g3

0x0444,	// (0x0001a261) smil2_volume_content_pane_g4

0x044d,	// (0x0001a26a) smil2_volume_content_pane_g5

0x0456,	// (0x0001a273) smil2_volume_content_pane_g6

0x045f,	// (0x0001a27c) smil2_volume_content_pane_g7

0x0468,	// (0x0001a285) smil2_volume_content_pane_g8

0x0471,	// (0x0001a28e) smil2_volume_content_pane_g9

0x047a,	// (0x0001a297) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0002950e) smil2_volume_content_pane_g

0x61b9,	// (0x0001ffd6) cale_week_day_heading_pane_t1_ParamLimits

0x61cd,	// (0x0001ffea) cale_week_day_heading_pane_t2_ParamLimits

0x61e1,	// (0x0001fffe) cale_week_day_heading_pane_t3_ParamLimits

0x61f5,	// (0x00020012) cale_week_day_heading_pane_t4_ParamLimits

0x6209,	// (0x00020026) cale_week_day_heading_pane_t5_ParamLimits

0x621d,	// (0x0002003a) cale_week_day_heading_pane_t6_ParamLimits

0x6231,	// (0x0002004e) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00028ffa) cale_week_day_heading_pane_t_ParamLimits

0xd14d,	// (0x00026f6a) bg_cale_side_pane_ParamLimits

0x474e,	// (0x0001e56b) cale_week_time_pane_t1_ParamLimits

0x4766,	// (0x0001e583) cale_week_time_pane_t2_ParamLimits

0x477e,	// (0x0001e59b) cale_week_time_pane_t3_ParamLimits

0x4796,	// (0x0001e5b3) cale_week_time_pane_t4_ParamLimits

0x47ae,	// (0x0001e5cb) cale_week_time_pane_t5_ParamLimits

0x47c6,	// (0x0001e5e3) cale_week_time_pane_t6_ParamLimits

0x47e6,	// (0x0001e603) cale_week_time_pane_t7_ParamLimits

0x4806,	// (0x0001e623) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00029009) cale_week_time_pane_t_ParamLimits

0x6245,	// (0x00020062) cell_cale_week_pane_g2_ParamLimits

0xd14d,	// (0x00026f6a) bg_cale_side_pane_cp01_ParamLimits

0x7271,	// (0x0002108e) cale_month_week_pane_t1_ParamLimits

0x7288,	// (0x000210a5) cale_month_week_pane_t2_ParamLimits

0x729f,	// (0x000210bc) cale_month_week_pane_t3_ParamLimits

0x72b6,	// (0x000210d3) cale_month_week_pane_t4_ParamLimits

0x72cd,	// (0x000210ea) cale_month_week_pane_t5_ParamLimits

0x72ec,	// (0x00021109) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000290e2) cale_month_week_pane_t_ParamLimits

0x48a2,	// (0x0001e6bf) cell_cale_month_pane_g1_ParamLimits

0x4542,	// (0x0001e35f) main_cale_event_viewer_pane

0xc860,	// (0x0002667d) listscroll_cale_event_viewer_pane

0x0483,	// (0x0001a2a0) list_cale_ev_pane

0x048b,	// (0x0001a2a8) scroll_pane_cp023

0x0497,	// (0x0001a2b4) field_cale_ev_pane_ParamLimits

0x0497,	// (0x0001a2b4) field_cale_ev_pane

0x04b1,	// (0x0001a2ce) field_cale_ev_content_pane_ParamLimits

0x04b1,	// (0x0001a2ce) field_cale_ev_content_pane

0x04bd,	// (0x0001a2da) field_cale_ev_pane_g1_ParamLimits

0x04bd,	// (0x0001a2da) field_cale_ev_pane_g1

0x04c9,	// (0x0001a2e6) field_cale_ev_pane_g2_ParamLimits

0x04c9,	// (0x0001a2e6) field_cale_ev_pane_g2

0x04e1,	// (0x0001a2fe) field_cale_ev_pane_g3_ParamLimits

0x04e1,	// (0x0001a2fe) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00029523) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00029523) field_cale_ev_pane_g

0x04f9,	// (0x0001a316) field_cale_ev_pane_t1_ParamLimits

0x04f9,	// (0x0001a316) field_cale_ev_pane_t1

0x0510,	// (0x0001a32d) field_cale_ev_content_pane_t1_ParamLimits

0x0510,	// (0x0001a32d) field_cale_ev_content_pane_t1

0xdd56,	// (0x00027b73) bg_button_pane_cp01

0xcffb,	// (0x00026e18) listscroll_cale_week_pane_ParamLimits

0x5f8e,	// (0x0001fdab) popup_toolbar_window_cp01

0xd13b,	// (0x00026f58) listscroll_cale_week_pane_t1_ParamLimits

0xcffb,	// (0x00026e18) listscroll_cale_day_pane_ParamLimits

0x5f8e,	// (0x0001fdab) popup_toolbar_window_cp02

0xd13b,	// (0x00026f58) listscroll_cale_day_pane_t1_ParamLimits

0xcffb,	// (0x00026e18) main_cale_month_pane_ParamLimits

0x4b22,	// (0x0001e93f) popup_toolbar_window_cp03_ParamLimits

0x4b22,	// (0x0001e93f) popup_toolbar_window_cp03

0x80de,	// (0x00021efb) main_image_pane_g2_ParamLimits

0x80de,	// (0x00021efb) main_image_pane_g2

0x80ea,	// (0x00021f07) main_image_pane_g3_ParamLimits

0x80ea,	// (0x00021f07) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00029314) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00029314) main_image_pane_g

0xdea6,	// (0x00027cc3) main_image_pane_t1_ParamLimits

0x80f6,	// (0x00021f13) main_image_pane_t2_ParamLimits

0x80f6,	// (0x00021f13) main_image_pane_t2

0x8108,	// (0x00021f25) main_image_pane_t3_ParamLimits

0x8108,	// (0x00021f25) main_image_pane_t3

0x811a,	// (0x00021f37) main_image_pane_t4_ParamLimits

0x811a,	// (0x00021f37) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0002931b) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0002931b) main_image_pane_t

0x812c,	// (0x00021f49) popup_image_details_window_cp01

0x8136,	// (0x00021f53) popup_toobar_trans_pane_cp01_ParamLimits

0x8136,	// (0x00021f53) popup_toobar_trans_pane_cp01

0x4a7a,	// (0x0001e897) popup_image_details_window_ParamLimits

0x4a7a,	// (0x0001e897) popup_image_details_window

0x4a88,	// (0x0001e8a5) popup_image_focus_window

0x4b82,	// (0x0001e99f) camera2_autofocus_pane_ParamLimits

0x4b82,	// (0x0001e99f) camera2_autofocus_pane

0xc860,	// (0x0002667d) bg_popup_sub_pane_cp06

0x052d,	// (0x0001a34a) popup_image_focus_window_g1

0x0535,	// (0x0001a352) popup_image_focus_window_g2

0x053d,	// (0x0001a35a) popup_image_focus_window_g3

0x0545,	// (0x0001a362) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0002952a) popup_image_focus_window_g

0x054d,	// (0x0001a36a) popup_image_focus_window_t1

0x055b,	// (0x0001a378) popup_image_focus_window_t2

0x056b,	// (0x0001a388) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00029533) popup_image_focus_window_t

0x0579,	// (0x0001a396) camera2_autofocus_pane_g1

0xcad0,	// (0x000268ed) bg_tb_trans_pane_cp01

0x0587,	// (0x0001a3a4) popup_image_details_window_g1

0x059a,	// (0x0001a3b7) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00029545) popup_image_details_window_g

0x05c3,	// (0x0001a3e0) popup_image_details_window_t1

0x05d5,	// (0x0001a3f2) popup_image_details_window_t2

0x05ee,	// (0x0001a40b) popup_image_details_window_t3

0x0602,	// (0x0001a41f) popup_image_details_window_t4

0x061d,	// (0x0001a43a) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0002954c) popup_image_details_window_t

0xcfe7,	// (0x00026e04) bg_calc_paper_pane_ParamLimits

0x4542,	// (0x0001e35f) grid_highlight_pane_cp013

0x4623,	// (0x0001e440) list_calc_pane_ParamLimits

0x4635,	// (0x0001e452) scroll_pane_cp024

0xcffb,	// (0x00026e18) bg_calc_display_pane_ParamLimits

0x463d,	// (0x0001e45a) calc_display_pane_t1_ParamLimits

0x4652,	// (0x0001e46f) calc_display_pane_t2_ParamLimits

0x4667,	// (0x0001e484) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00028f7c) calc_display_pane_t_ParamLimits

0x46d0,	// (0x0001e4ed) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00028f99) cell_calc_pane_g

0x46d9,	// (0x0001e4f6) cell_calc_pane_t1

0xd05a,	// (0x00026e77) grid_highlight_pane_cp02_ParamLimits

0xd070,	// (0x00026e8d) toolbar_button_pane_cp01_ParamLimits

0xd070,	// (0x00026e8d) toolbar_button_pane_cp01

0xdeeb,	// (0x00027d08) temp_image_control_pane_ParamLimits

0xdeeb,	// (0x00027d08) temp_image_control_pane

0x49f6,	// (0x0001e813) main_mp3_pane

0x0637,	// (0x0001a454) temp_image_control_pane_g1_ParamLimits

0x0637,	// (0x0001a454) temp_image_control_pane_g1

0x0645,	// (0x0001a462) temp_image_control_pane_g2_ParamLimits

0x0645,	// (0x0001a462) temp_image_control_pane_g2

0x0657,	// (0x0001a474) temp_image_control_pane_g3_ParamLimits

0x0657,	// (0x0001a474) temp_image_control_pane_g3

0x8c3f,	// (0x00022a5c) temp_image_control_pane_g4_ParamLimits

0x8c3f,	// (0x00022a5c) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00029557) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00029557) temp_image_control_pane_g

0x0637,	// (0x0001a454) main_mp3_pane_g1

0x8c50,	// (0x00022a6d) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00029560) main_mp3_pane_g

0x069a,	// (0x0001a4b7) main_mp3_pane_t1

0xd1bc,	// (0x00026fd9) main_camera_pane_g8_ParamLimits

0xd1bc,	// (0x00026fd9) main_camera_pane_g8

0x6453,	// (0x00020270) main_video_pane_g7_ParamLimits

0x6453,	// (0x00020270) main_video_pane_g7

0x4cca,	// (0x0001eae7) main_camera2_pane_t7_ParamLimits

0x4cca,	// (0x0001eae7) main_camera2_pane_t7

0xd3c1,	// (0x000271de) scroll_pane_cp025_ParamLimits

0xd3c1,	// (0x000271de) scroll_pane_cp025

0xd3d5,	// (0x000271f2) scroll_pane_cp026_ParamLimits

0xd3d5,	// (0x000271f2) scroll_pane_cp026

0xd3e4,	// (0x00027201) wml_content_pane_ParamLimits

0x4542,	// (0x0001e35f) main_touch_calib_pane

0x8cf4,	// (0x00022b11) main_touch_calib_pane_g1

0x8d00,	// (0x00022b1d) main_touch_calib_pane_g2

0x8d0c,	// (0x00022b29) main_touch_calib_pane_g3

0x8d18,	// (0x00022b35) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0002957e) main_touch_calib_pane_g

0x8d24,	// (0x00022b41) main_touch_calib_pane_t1

0x8d3b,	// (0x00022b58) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00029587) main_touch_calib_pane_t

0xdb20,	// (0x0002793d) mup_progress_pane_cp02

0xdb3f,	// (0x0002795c) navi_pane_g1

0xdba1,	// (0x000279be) navi_pane_mp_t3

0x49f6,	// (0x0001e813) main_mp3_pane_ParamLimits

0x866a,	// (0x00022487) navi_pane_ParamLimits

0x0637,	// (0x0001a454) main_mp3_pane_g1_ParamLimits

0x8c50,	// (0x00022a6d) main_mp3_pane_g2_ParamLimits

0x8c5c,	// (0x00022a79) main_mp3_pane_g3_ParamLimits

0x8c5c,	// (0x00022a79) main_mp3_pane_g3

0x8c68,	// (0x00022a85) main_mp3_pane_g4_ParamLimits

0x8c68,	// (0x00022a85) main_mp3_pane_g4

0x0667,	// (0x0001a484) main_mp3_pane_g5_ParamLimits

0x0667,	// (0x0001a484) main_mp3_pane_g5

0x0675,	// (0x0001a492) main_mp3_pane_g6_ParamLimits

0x0675,	// (0x0001a492) main_mp3_pane_g6

0x0682,	// (0x0001a49f) main_mp3_pane_g7_ParamLimits

0x0682,	// (0x0001a49f) main_mp3_pane_g7

0x068e,	// (0x0001a4ab) main_mp3_pane_g8_ParamLimits

0x068e,	// (0x0001a4ab) main_mp3_pane_g8

0xf743,	// (0x00029560) main_mp3_pane_g_ParamLimits

0x8c74,	// (0x00022a91) main_mp3_pane_t2

0x8c84,	// (0x00022aa1) main_mp3_pane_t3

0x06a8,	// (0x0001a4c5) main_mp3_pane_t4

0x06b6,	// (0x0001a4d3) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00029571) main_mp3_pane_t

0x06c4,	// (0x0001a4e1) mup_progress_pane_cp01

0x4304,	// (0x0001e121) aid_zoom_text_secondary2

0x0483,	// (0x0001a2a0) list_cale_ev2_pane

0x048b,	// (0x0001a2a8) scroll_pane_cp023_ParamLimits

0x8d8e,	// (0x00022bab) field_cale_ev2_pane_ParamLimits

0x8d8e,	// (0x00022bab) field_cale_ev2_pane

0x8dc2,	// (0x00022bdf) field_cale_ev2_pane_g1_ParamLimits

0x8dc2,	// (0x00022bdf) field_cale_ev2_pane_g1

0x8dce,	// (0x00022beb) field_cale_ev2_pane_g2_ParamLimits

0x8dce,	// (0x00022beb) field_cale_ev2_pane_g2

0x8de6,	// (0x00022c03) field_cale_ev2_pane_g3_ParamLimits

0x8de6,	// (0x00022c03) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00029592) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00029592) field_cale_ev2_pane_g

0x06d8,	// (0x0001a4f5) field_cale_ev2_pane_t1_ParamLimits

0x06d8,	// (0x0001a4f5) field_cale_ev2_pane_t1

0x06ef,	// (0x0001a50c) field_cale_ev2_pane_t2_ParamLimits

0x06ef,	// (0x0001a50c) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0002959b) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0002959b) field_cale_ev2_pane_t

0x7fb5,	// (0x00021dd2) main_postcard_pane_g5_ParamLimits

0x7fb5,	// (0x00021dd2) main_postcard_pane_g5

0x7fc3,	// (0x00021de0) main_postcard_pane_g6_ParamLimits

0x7fc3,	// (0x00021de0) main_postcard_pane_g6

0x6293,	// (0x000200b0) camera2_autofocus_pane_cp_ParamLimits

0x6293,	// (0x000200b0) camera2_autofocus_pane_cp

0x49f6,	// (0x0001e813) main_mup3_pane

0x8e1e,	// (0x00022c3b) main_mup3_pane_g1_ParamLimits

0x8e1e,	// (0x00022c3b) main_mup3_pane_g1

0x8e3f,	// (0x00022c5c) main_mup3_pane_g2_ParamLimits

0x8e3f,	// (0x00022c5c) main_mup3_pane_g2

0x8ebe,	// (0x00022cdb) main_mup3_pane_g3_ParamLimits

0x8ebe,	// (0x00022cdb) main_mup3_pane_g3

0x8f01,	// (0x00022d1e) main_mup3_pane_g4_ParamLimits

0x8f01,	// (0x00022d1e) main_mup3_pane_g4

0x8f44,	// (0x00022d61) main_mup3_pane_g5_ParamLimits

0x8f44,	// (0x00022d61) main_mup3_pane_g5

0x8f89,	// (0x00022da6) main_mup3_pane_g6_ParamLimits

0x8f89,	// (0x00022da6) main_mup3_pane_g6

0x0704,	// (0x0001a521) main_mup3_pane_g7_ParamLimits

0x0704,	// (0x0001a521) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000295ab) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000295ab) main_mup3_pane_g

0x8fff,	// (0x00022e1c) main_mup3_pane_t1_ParamLimits

0x8fff,	// (0x00022e1c) main_mup3_pane_t1

0x906e,	// (0x00022e8b) main_mup3_pane_t2_ParamLimits

0x906e,	// (0x00022e8b) main_mup3_pane_t2

0x9137,	// (0x00022f54) main_mup3_pane_t4_ParamLimits

0x9137,	// (0x00022f54) main_mup3_pane_t4

0x918b,	// (0x00022fa8) main_mup3_pane_t5_ParamLimits

0x918b,	// (0x00022fa8) main_mup3_pane_t5

0x923b,	// (0x00023058) main_mup3_pane_t6_ParamLimits

0x923b,	// (0x00023058) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x000295bc) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x000295bc) main_mup3_pane_t

0x92e7,	// (0x00023104) mup3_progress_pane_ParamLimits

0x92e7,	// (0x00023104) mup3_progress_pane

0x935b,	// (0x00023178) popup_mup3_control_window_ParamLimits

0x935b,	// (0x00023178) popup_mup3_control_window

0x0712,	// (0x0001a52f) popup_mup3_text_window

0x9374,	// (0x00023191) mup3_progress_pane_t1

0x9393,	// (0x000231b0) mup3_progress_pane_t2

0x071a,	// (0x0001a537) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x000295c9) mup3_progress_pane_t

0x0737,	// (0x0001a554) mup_progress_pane_cp03

0xc860,	// (0x0002667d) bg_tb_trans_pane_cp04

0x93b2,	// (0x000231cf) mup3_volume_pane

0x93ba,	// (0x000231d7) popup_mup3_control_window_g1

0x93c3,	// (0x000231e0) mup3_volume_pane_g1

0x93cc,	// (0x000231e9) mup3_volume_pane_g2

0x93d5,	// (0x000231f2) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000295d0) mup3_volume_pane_g

0xc860,	// (0x0002667d) bg_tb_trans_pane_cp03

0x0747,	// (0x0001a564) popup_mup3_text_window_g1

0x074f,	// (0x0001a56c) popup_mup3_text_window_t1

0xd043,	// (0x00026e60) list_calc_item_pane_g1_ParamLimits

0x010d,	// (0x00019f2a) mup_volume_pane_cp_g1

0x8d52,	// (0x00022b6f) main_touch_calib_pane_t3

0x8d66,	// (0x00022b83) main_touch_calib_pane_t4

0x8d7a,	// (0x00022b97) main_touch_calib_pane_t5

0x42bc,	// (0x0001e0d9) aid_cell_size_toolbar2

0x42c4,	// (0x0001e0e1) aid_popup3_width_pane

0x4304,	// (0x0001e121) aid_zoom_text_msg_primary

0x488c,	// (0x0001e6a9) vorec_t7

0xd007,	// (0x00026e24) bg_calc_paper_pane_g1_ParamLimits

0xd013,	// (0x00026e30) bg_calc_paper_pane_g2_ParamLimits

0xd01f,	// (0x00026e3c) bg_calc_paper_pane_g3_ParamLimits

0xd02b,	// (0x00026e48) bg_calc_paper_pane_g4_ParamLimits

0xd037,	// (0x00026e54) bg_calc_paper_pane_g5_ParamLimits

0x5e07,	// (0x0001fc24) bg_calc_paper_pane_g6_ParamLimits

0x5e18,	// (0x0001fc35) bg_calc_paper_pane_g7_ParamLimits

0x5e29,	// (0x0001fc46) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00028f83) bg_calc_paper_pane_g_ParamLimits

0x5e3a,	// (0x0001fc57) calc_bg_paper_pane_g9_ParamLimits

0x637c,	// (0x00020199) image_qvga_pane_ParamLimits

0x637c,	// (0x00020199) image_qvga_pane

0xcee4,	// (0x00026d01) bg_popup_sub_pane_cp04_ParamLimits

0xde22,	// (0x00027c3f) popup_mup_playback_window_g1_ParamLimits

0xde2e,	// (0x00027c4b) popup_mup_playback_window_t1_ParamLimits

0xde43,	// (0x00027c60) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0002930f) popup_mup_playback_window_t_ParamLimits

0x88be,	// (0x000226db) main_mup2_pane_g3_ParamLimits

0x88be,	// (0x000226db) main_mup2_pane_g3

0x6692,	// (0x000204af) popup_toolbar_window_cp04

0xe238,	// (0x00028055) popup_call2_audio_second_window_g3_ParamLimits

0xe238,	// (0x00028055) popup_call2_audio_second_window_g3

0xe642,	// (0x0002845f) popup_call2_audio_first_window_g4_ParamLimits

0xe642,	// (0x0002845f) popup_call2_audio_first_window_g4

0xecc1,	// (0x00028ade) popup_call2_audio_in_window_g4_ParamLimits

0xecc1,	// (0x00028ade) popup_call2_audio_in_window_g4

0x80d1,	// (0x00021eee) aid_area_sk_bg_cut_ParamLimits

0x80d1,	// (0x00021eee) aid_area_sk_bg_cut

0xde58,	// (0x00027c75) aid_area_sk_bg_cut_2_ParamLimits

0xde58,	// (0x00027c75) aid_area_sk_bg_cut_2

0x8be5,	// (0x00022a02) aid_placing_details_win

0x8bed,	// (0x00022a0a) aid_placing_details_win_2

0x0579,	// (0x0001a396) camera2_autofocus_pane_g1_ParamLimits

0x44e4,	// (0x0001e301) popup_fixed_preview_cale_window_ParamLimits

0x44e4,	// (0x0001e301) popup_fixed_preview_cale_window

0xdbf0,	// (0x00027a0d) navi_slider_pane_g3

0xdbf9,	// (0x00027a16) navi_slider_pane_g4

0xdc02,	// (0x00027a1f) navi_slider_pane_g5

0xdbf0,	// (0x00027a0d) navi_slider_pane_g6

0x4964,	// (0x0001e781) navi_slider_pane_g7

0xdd23,	// (0x00027b40) mup_scale_pane_g3

0xdd2c,	// (0x00027b49) mup_scale_pane_g4

0xdd35,	// (0x00027b52) mup_scale_pane_g5

0x7dfb,	// (0x00021c18) mup_scale_pane_g6

0x7e04,	// (0x00021c21) mup_scale_pane_g7

0xdbf0,	// (0x00027a0d) cams2_slider_pane_g3

0x01c2,	// (0x00019fdf) cams2_slider_pane_g4

0x4e3c,	// (0x0001ec59) cams2_slider_pane_g5

0xdbf0,	// (0x00027a0d) cams2_slider_pane_g6

0x4e44,	// (0x0001ec61) cams2_slider_pane_g7

0x0400,	// (0x0001a21d) camera2_autofocus_pane_cp_g1

0x075d,	// (0x0001a57a) bg_popup_preview_window_pane_cp02_ParamLimits

0x075d,	// (0x0001a57a) bg_popup_preview_window_pane_cp02

0x0769,	// (0x0001a586) list_fp_cale_pane_ParamLimits

0x0769,	// (0x0001a586) list_fp_cale_pane

0x0775,	// (0x0001a592) popup_fixed_preview_cale_window_t1_ParamLimits

0x0775,	// (0x0001a592) popup_fixed_preview_cale_window_t1

0x93de,	// (0x000231fb) popup_fixed_preview_cale_window_t2_ParamLimits

0x93de,	// (0x000231fb) popup_fixed_preview_cale_window_t2

0x93f3,	// (0x00023210) popup_fixed_preview_cale_window_t3_ParamLimits

0x93f3,	// (0x00023210) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000295d7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000295d7) popup_fixed_preview_cale_window_t

0x9408,	// (0x00023225) list_single_fp_cale_pane_ParamLimits

0x9408,	// (0x00023225) list_single_fp_cale_pane

0x0793,	// (0x0001a5b0) list_single_fp_cale_pane_g1_ParamLimits

0x0793,	// (0x0001a5b0) list_single_fp_cale_pane_g1

0x079f,	// (0x0001a5bc) list_single_fp_cale_pane_g2_ParamLimits

0x079f,	// (0x0001a5bc) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000295de) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000295de) list_single_fp_cale_pane_g

0x07b8,	// (0x0001a5d5) list_single_fp_cale_pane_t1_ParamLimits

0x07b8,	// (0x0001a5d5) list_single_fp_cale_pane_t1

0x07ca,	// (0x0001a5e7) list_single_fp_cale_pane_t2_ParamLimits

0x07ca,	// (0x0001a5e7) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000295e5) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000295e5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4542,	// (0x0001e35f) main_dialer_pane

0x941d,	// (0x0002323a) aid_cell_size_keypad

0x9427,	// (0x00023244) dialer_ne_pane

0x9431,	// (0x0002324e) grid_dialer_command_1_pane

0x9439,	// (0x00023256) grid_dialer_command_2_pane

0x9441,	// (0x0002325e) grid_dialer_keypad_pane

0x9455,	// (0x00023272) bg_popup_call_pane_cp06_ParamLimits

0x9455,	// (0x00023272) bg_popup_call_pane_cp06

0x9461,	// (0x0002327e) dialer_ne_clear_pane_ParamLimits

0x9461,	// (0x0002327e) dialer_ne_clear_pane

0x07fd,	// (0x0001a61a) dialer_ne_pane_g1

0x0805,	// (0x0001a622) dialer_ne_pane_t1_ParamLimits

0x0805,	// (0x0001a622) dialer_ne_pane_t1

0x946d,	// (0x0002328a) dialer_ne_pane_t2_ParamLimits

0x946d,	// (0x0002328a) dialer_ne_pane_t2

0x948a,	// (0x000232a7) dialer_ne_pane_t3_ParamLimits

0x948a,	// (0x000232a7) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000295ea) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000295ea) dialer_ne_pane_t

0x94ae,	// (0x000232cb) dialer_ne_pane_t3_copy1_ParamLimits

0x94ae,	// (0x000232cb) dialer_ne_pane_t3_copy1

0x94d2,	// (0x000232ef) cell_dialer_keypad_pane_ParamLimits

0x94d2,	// (0x000232ef) cell_dialer_keypad_pane

0x94e9,	// (0x00023306) cell_dialer_command_1_pane_ParamLimits

0x94e9,	// (0x00023306) cell_dialer_command_1_pane

0x94ff,	// (0x0002331c) cell_dialer_command_2_pane_ParamLimits

0x94ff,	// (0x0002331c) cell_dialer_command_2_pane

0x0817,	// (0x0001a634) bg_button_pane_cp02_ParamLimits

0x0817,	// (0x0001a634) bg_button_pane_cp02

0x950e,	// (0x0002332b) cell_dialer_keypad_pane_g1_ParamLimits

0x950e,	// (0x0002332b) cell_dialer_keypad_pane_g1

0x0817,	// (0x0001a634) bg_button_pane_cp03_ParamLimits

0x0817,	// (0x0001a634) bg_button_pane_cp03

0x9523,	// (0x00023340) cell_dialer_command_1_pane_g1_ParamLimits

0x9523,	// (0x00023340) cell_dialer_command_1_pane_g1

0x0823,	// (0x0001a640) bg_button_pane_cp04

0x9537,	// (0x00023354) cell_dialer_command_2_pane_g1

0xdbdf,	// (0x000279fc) bg_button_pane_cp06

0x082b,	// (0x0001a648) dialer_ne_clear_pane_g1

0x7911,	// (0x0002172e) navi_pane_g2

0x793f,	// (0x0002175c) navi_pane_g3

0x0002,

0xf3f5,	// (0x00029212) navi_pane_g

0x796a,	// (0x00021787) navi_pane_mv_g2

0x7991,	// (0x000217ae) navi_pane_mv_g5

0x7999,	// (0x000217b6) navi_pane_mv_t1

0xcffb,	// (0x00026e18) main_clock2_pane

0x956a,	// (0x00023387) main_clock2_list_pane_ParamLimits

0x956a,	// (0x00023387) main_clock2_list_pane

0x9594,	// (0x000233b1) main_clock2_pane_t1_ParamLimits

0x9594,	// (0x000233b1) main_clock2_pane_t1

0x95b8,	// (0x000233d5) main_clock2_pane_t2_ParamLimits

0x95b8,	// (0x000233d5) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000295f1) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000295f1) main_clock2_pane_t

0x9613,	// (0x00023430) popup_clock_analogue_window_cp03_ParamLimits

0x9613,	// (0x00023430) popup_clock_analogue_window_cp03

0x9633,	// (0x00023450) popup_clock_digital_window_cp02_ParamLimits

0x9633,	// (0x00023450) popup_clock_digital_window_cp02

0x96a8,	// (0x000234c5) main_clock2_list_single_pane_ParamLimits

0x96a8,	// (0x000234c5) main_clock2_list_single_pane

0xdbdf,	// (0x000279fc) list_highlight_pane_cp05

0x0833,	// (0x0001a650) main_clock2_list_single_pane_t1

0x6692,	// (0x000204af) popup_toolbar_window_cp04_ParamLimits

0x8c0f,	// (0x00022a2c) camera2_autofocus_pane_g2_ParamLimits

0x8c0f,	// (0x00022a2c) camera2_autofocus_pane_g2

0x8c1b,	// (0x00022a38) camera2_autofocus_pane_g3_ParamLimits

0x8c1b,	// (0x00022a38) camera2_autofocus_pane_g3

0x8c27,	// (0x00022a44) camera2_autofocus_pane_g4_ParamLimits

0x8c27,	// (0x00022a44) camera2_autofocus_pane_g4

0x8c33,	// (0x00022a50) camera2_autofocus_pane_g5_ParamLimits

0x8c33,	// (0x00022a50) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0002953a) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0002953a) camera2_autofocus_pane_g

0x8dfe,	// (0x00022c1b) camera2_autofocus_pane_cp_g2

0x8e06,	// (0x00022c23) camera2_autofocus_pane_cp_g3

0x8e0e,	// (0x00022c2b) camera2_autofocus_pane_cp_g4

0x8e16,	// (0x00022c33) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000295a0) camera2_autofocus_pane_cp_g

0x944d,	// (0x0002326a) popup_dialer_spcha_window

0xc860,	// (0x0002667d) bg_popup_sub_pane_cp07

0x0841,	// (0x0001a65e) list_spcha_pane

0x0849,	// (0x0001a666) list_single_spcha_pane_ParamLimits

0x0849,	// (0x0001a666) list_single_spcha_pane

0xc860,	// (0x0002667d) list_highlight_pane_cp06

0x085a,	// (0x0001a677) list_single_spcha_pane_t1

0xea6b,	// (0x00028888) popup_call2_audio_out_window_g4_ParamLimits

0xea6b,	// (0x00028888) popup_call2_audio_out_window_g4

0x4542,	// (0x0001e35f) main_imed2_pane

0x4a90,	// (0x0001e8ad) popup_imed_adjust2_window

0x4aa3,	// (0x0001e8c0) popup_imed_trans_window_ParamLimits

0x4aa3,	// (0x0001e8c0) popup_imed_trans_window

0x023c,	// (0x0001a059) popup_blid_sat_info2_window_t1

0x024a,	// (0x0001a067) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x000294cf) popup_blid_sat_info2_window_t

0x96da,	// (0x000234f7) aid_size_cell_colour_35

0x96f4,	// (0x00023511) aid_size_cell_colour_112

0x970b,	// (0x00023528) aid_size_cell_effect

0xcad0,	// (0x000268ed) bg_tb_trans_pane_cp02

0xd794,	// (0x000275b1) heading_imed_pane

0x9725,	// (0x00023542) listscroll_imed_pane

0x0868,	// (0x0001a685) heading_imed_pane_g1

0x0870,	// (0x0001a68d) heading_imed_pane_t1

0x087e,	// (0x0001a69b) grid_imed_colour_35_pane_ParamLimits

0x087e,	// (0x0001a69b) grid_imed_colour_35_pane

0x9731,	// (0x0002354e) grid_imed_effect_pane

0x0899,	// (0x0001a6b6) list_imed_aspect_pane

0x9741,	// (0x0002355e) scroll_pane_cp027_ParamLimits

0x9741,	// (0x0002355e) scroll_pane_cp027

0x974d,	// (0x0002356a) cell_imed_effect_pane_ParamLimits

0x974d,	// (0x0002356a) cell_imed_effect_pane

0x08a1,	// (0x0001a6be) cell_imed_colour_pane_ParamLimits

0x08a1,	// (0x0001a6be) cell_imed_colour_pane

0x08e3,	// (0x0001a700) cell_imed_colour_pane_g1_ParamLimits

0x08e3,	// (0x0001a700) cell_imed_colour_pane_g1

0x08f4,	// (0x0001a711) hgihlgiht_grid_pane_cp016_ParamLimits

0x08f4,	// (0x0001a711) hgihlgiht_grid_pane_cp016

0x9765,	// (0x00023582) cell_imed_effect_pane_g1

0x976d,	// (0x0002358a) grid_highlight_pane_cp017

0x0905,	// (0x0001a722) list_imed_single_pane_ParamLimits

0x0905,	// (0x0001a722) list_imed_single_pane

0xc860,	// (0x0002667d) list_highlight_pane_cp07

0x091c,	// (0x0001a739) list_imed_aspect_pane_comp1_t1

0xf02a,	// (0x00028e47) bg_tb_trans_pane_cp05

0x093e,	// (0x0001a75b) popup_imed_adjust2_window_g1

0x0965,	// (0x0001a782) popup_imed_adjust2_window_t1

0x097d,	// (0x0001a79a) slider_imed_adjust_pane

0x0991,	// (0x0001a7ae) slider_imed_adjust_pane_g1

0x09a1,	// (0x0001a7be) slider_imed_adjust_pane_g2

0x09b1,	// (0x0001a7ce) slider_imed_adjust_pane_g3

0x09c2,	// (0x0001a7df) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0002960e) slider_imed_adjust_pane_g

0x9776,	// (0x00023593) aid_size_cell_clipart2

0x9782,	// (0x0002359f) grid_imed_clipart_pane

0x09d3,	// (0x0001a7f0) scroll_pane_cp031

0x978c,	// (0x000235a9) cell_imed_clipart_pane_ParamLimits

0x978c,	// (0x000235a9) cell_imed_clipart_pane

0x97b3,	// (0x000235d0) cell_imed_clipart_pane_g1

0xc860,	// (0x0002667d) grid_highlight_pane_cp014

0x9576,	// (0x00023393) main_clock2_pane_g1_ParamLimits

0x9576,	// (0x00023393) main_clock2_pane_g1

0x964f,	// (0x0002346c) aid_call2_pane_cp10

0x9661,	// (0x0002347e) aid_call_pane_cp10

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g1

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g2

0x9673,	// (0x00023490) popup_clock_analogue_window_cp10_g3

0x9673,	// (0x00023490) popup_clock_analogue_window_cp10_g4

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000295fc) popup_clock_analogue_window_cp10_g

0x9689,	// (0x000234a6) popup_clock_analogue_window_cp10_t1

0x4e4d,	// (0x0001ec6a) clock_digital_number_pane_cp10_ParamLimits

0x4e4d,	// (0x0001ec6a) clock_digital_number_pane_cp10

0x4e65,	// (0x0001ec82) clock_digital_number_pane_cp11_ParamLimits

0x4e65,	// (0x0001ec82) clock_digital_number_pane_cp11

0x4e7d,	// (0x0001ec9a) clock_digital_number_pane_cp12_ParamLimits

0x4e7d,	// (0x0001ec9a) clock_digital_number_pane_cp12

0x4e95,	// (0x0001ecb2) clock_digital_number_pane_cp13_ParamLimits

0x4e95,	// (0x0001ecb2) clock_digital_number_pane_cp13

0x4ead,	// (0x0001ecca) clock_digital_separator_pane_cp10_ParamLimits

0x4ead,	// (0x0001ecca) clock_digital_separator_pane_cp10

0x96ba,	// (0x000234d7) popup_clock_digital_window_cp02_t1_ParamLimits

0x96ba,	// (0x000234d7) popup_clock_digital_window_cp02_t1

0xcedc,	// (0x00026cf9) clock_digital_number_pane_cp10_g1

0xcedc,	// (0x00026cf9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00029617) clock_digital_number_pane_cp10_g

0xcedc,	// (0x00026cf9) clock_digital_separator_pane_cp10_g1

0xcedc,	// (0x00026cf9) clock_digital_separator_pane_g2_cp10

0xdbaf,	// (0x000279cc) navi_pane_vded_g4

0xdbb8,	// (0x000279d5) navi_pane_vded_g5

0xdbc1,	// (0x000279de) navi_pane_vded_t1

0x4542,	// (0x0001e35f) main_vded_pane

0x97bc,	// (0x000235d9) main_vded_pane_g1

0x97c8,	// (0x000235e5) main_vded_pane_g2

0x97d2,	// (0x000235ef) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0002961c) main_vded_pane_g

0x97dc,	// (0x000235f9) main_vded_pane_t1

0x97ea,	// (0x00023607) main_vded_pane_t2

0x0001,

0xf806,	// (0x00029623) main_vded_pane_t

0x97f8,	// (0x00023615) vded_slider_pane

0x9802,	// (0x0002361f) vded_video_pane

0x09db,	// (0x0001a7f8) vded_video_pane_g1

0x980c,	// (0x00023629) vded_video_pane_g2

0x0400,	// (0x0001a21d) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00029628) vded_video_pane_g

0x09e5,	// (0x0001a802) vded_slider_pane_g1

0x010d,	// (0x00019f2a) vded_slider_pane_g2

0x09ee,	// (0x0001a80b) vded_slider_pane_g3

0x09f7,	// (0x0001a814) vded_slider_pane_g4

0x0a00,	// (0x0001a81d) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0002962f) vded_slider_pane_g

0x934d,	// (0x0002316a) mup3_rocker_pane_ParamLimits

0x934d,	// (0x0002316a) mup3_rocker_pane

0x9815,	// (0x00023632) mup3_control_keys_pane_g1

0x981d,	// (0x0002363a) mup3_control_keys_pane_g2

0x9825,	// (0x00023642) mup3_control_keys_pane_g3

0x982d,	// (0x0002364a) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0002963a) mup3_control_keys_pane_g

0x450c,	// (0x0001e329) popup_toolbar2_fixed_window_cp01_ParamLimits

0x450c,	// (0x0001e329) popup_toolbar2_fixed_window_cp01

0x9367,	// (0x00023184) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9367,	// (0x00023184) popup_toolbar2_fixed_window_cp02

0xe3aa,	// (0x000281c7) popup_call2_audio_second_window_t4_ParamLimits

0xe3aa,	// (0x000281c7) popup_call2_audio_second_window_t4

0xe8d8,	// (0x000286f5) popup_call2_audio_first_window_t6_ParamLimits

0xe8d8,	// (0x000286f5) popup_call2_audio_first_window_t6

0xeb6e,	// (0x0002898b) popup_call2_audio_out_window_t6_ParamLimits

0xeb6e,	// (0x0002898b) popup_call2_audio_out_window_t6

0x4542,	// (0x0001e35f) main_vitu_pane

0x983d,	// (0x0002365a) aid_size_cell_itu_ParamLimits

0x983d,	// (0x0002365a) aid_size_cell_itu

0x984b,	// (0x00023668) bg_popup_window_pane_cp08_ParamLimits

0x984b,	// (0x00023668) bg_popup_window_pane_cp08

0x9859,	// (0x00023676) field_vitu_entry_pane_ParamLimits

0x9859,	// (0x00023676) field_vitu_entry_pane

0x9868,	// (0x00023685) grid_vitu_function_pane_ParamLimits

0x9868,	// (0x00023685) grid_vitu_function_pane

0x9878,	// (0x00023695) grid_vitu_itu_pane_ParamLimits

0x9878,	// (0x00023695) grid_vitu_itu_pane

0x9888,	// (0x000236a5) cell_vitu_itu_pane_ParamLimits

0x9888,	// (0x000236a5) cell_vitu_itu_pane

0x989d,	// (0x000236ba) cell_vitu_function_pane_ParamLimits

0x989d,	// (0x000236ba) cell_vitu_function_pane

0xcad0,	// (0x000268ed) bg_popup_sub_pane_cp08_ParamLimits

0xcad0,	// (0x000268ed) bg_popup_sub_pane_cp08

0x98b1,	// (0x000236ce) field_vitu_entry_pane_t1_ParamLimits

0x98b1,	// (0x000236ce) field_vitu_entry_pane_t1

0x0a21,	// (0x0001a83e) field_vitu_entry_pane_t2_ParamLimits

0x0a21,	// (0x0001a83e) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00029648) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00029648) field_vitu_entry_pane_t

0x0a3e,	// (0x0001a85b) bg_button_pane_cp05_ParamLimits

0x0a3e,	// (0x0001a85b) bg_button_pane_cp05

0x98cf,	// (0x000236ec) cell_vitu_itu_pane_g1

0x98e7,	// (0x00023704) cell_vitu_itu_pane_t1_ParamLimits

0x98e7,	// (0x00023704) cell_vitu_itu_pane_t1

0x98f9,	// (0x00023716) cell_vitu_itu_pane_t2_ParamLimits

0x98f9,	// (0x00023716) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0002964d) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0002964d) cell_vitu_itu_pane_t

0x0a4c,	// (0x0001a869) bg_button_pane_cp07

0x992e,	// (0x0002374b) cell_vitu_function_pane_g1

0x461b,	// (0x0001e438) main_calc_pane_g1

0x42f8,	// (0x0001e115) aid_visual_content_pane

0x4542,	// (0x0001e35f) main_vradio_pane

0x9937,	// (0x00023754) main_vradio_pane_g1_ParamLimits

0x9937,	// (0x00023754) main_vradio_pane_g1

0x0a56,	// (0x0001a873) main_vradio_pane_g2_ParamLimits

0x0a56,	// (0x0001a873) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00029654) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00029654) main_vradio_pane_g

0x9947,	// (0x00023764) main_vradio_pane_t1_ParamLimits

0x9947,	// (0x00023764) main_vradio_pane_t1

0x9959,	// (0x00023776) main_vradio_pane_t2_ParamLimits

0x9959,	// (0x00023776) main_vradio_pane_t2

0x0a63,	// (0x0001a880) main_vradio_pane_t3_ParamLimits

0x0a63,	// (0x0001a880) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00029659) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00029659) main_vradio_pane_t

0x996b,	// (0x00023788) vradio_rocker_control_pane_ParamLimits

0x996b,	// (0x00023788) vradio_rocker_control_pane

0x9977,	// (0x00023794) vradio_station_info_pane_ParamLimits

0x9977,	// (0x00023794) vradio_station_info_pane

0x0a77,	// (0x0001a894) vradio_frequency_info_pane_ParamLimits

0x0a77,	// (0x0001a894) vradio_frequency_info_pane

0x0400,	// (0x0001a21d) vradio_station_info_pane_g1

0x0a86,	// (0x0001a8a3) vradio_station_info_pane_t1_ParamLimits

0x0a86,	// (0x0001a8a3) vradio_station_info_pane_t1

0x0aa8,	// (0x0001a8c5) vradio_station_info_pane_t2_ParamLimits

0x0aa8,	// (0x0001a8c5) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00029660) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00029660) vradio_station_info_pane_t

0x0aba,	// (0x0001a8d7) vradio_tuning_pane

0x0ac2,	// (0x0001a8df) vradio_rocker_control_pane_g1

0x0aca,	// (0x0001a8e7) vradio_rocker_control_pane_g2

0x0ad2,	// (0x0001a8ef) vradio_rocker_control_pane_g3

0x0ada,	// (0x0001a8f7) vradio_rocker_control_pane_g4

0x0ae2,	// (0x0001a8ff) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00029665) vradio_rocker_control_pane_g

0x9986,	// (0x000237a3) vradio_frequency_info_pane_g1

0x0aea,	// (0x0001a907) vradio_frequency_info_pane_t1_ParamLimits

0x0aea,	// (0x0001a907) vradio_frequency_info_pane_t1

0x9990,	// (0x000237ad) vradio_tuning_pane_g1

0x9999,	// (0x000237b6) vradio_tuning_pane_t1

0x4314,	// (0x0001e131) area_side_right_pane_ParamLimits

0x4314,	// (0x0001e131) area_side_right_pane

0xeff1,	// (0x00028e0e) status_small_pane_g1

0xeff9,	// (0x00028e16) status_small_pane_g2

0xf002,	// (0x00028e1f) status_small_pane_g3

0xf00b,	// (0x00028e28) status_small_pane_g4

0x0003,

0xf608,	// (0x00029425) status_small_pane_g

0xf014,	// (0x00028e31) status_small_pane_t1

0x4542,	// (0x0001e35f) main_video3_pane

0x0afe,	// (0x0001a91b) cams_zoom_vslider_pane

0x0b06,	// (0x0001a923) image3_wide_pane_ParamLimits

0x0b06,	// (0x0001a923) image3_wide_pane

0x0b20,	// (0x0001a93d) image3_wide_small_pane

0x0b2c,	// (0x0001a949) main_video3_pane_g1_ParamLimits

0x0b2c,	// (0x0001a949) main_video3_pane_g1

0x0b48,	// (0x0001a965) main_video3_pane_g2_ParamLimits

0x0b48,	// (0x0001a965) main_video3_pane_g2

0x0001,

0xf853,	// (0x00029670) main_video3_pane_g_ParamLimits

0xf853,	// (0x00029670) main_video3_pane_g

0x0b64,	// (0x0001a981) main_video3_pane_t1_ParamLimits

0x0b64,	// (0x0001a981) main_video3_pane_t1

0x0b8f,	// (0x0001a9ac) main_video3_pane_t2_ParamLimits

0x0b8f,	// (0x0001a9ac) main_video3_pane_t2

0x0bba,	// (0x0001a9d7) main_video3_pane_t3_ParamLimits

0x0bba,	// (0x0001a9d7) main_video3_pane_t3

0x0002,

0xf858,	// (0x00029675) main_video3_pane_t_ParamLimits

0xf858,	// (0x00029675) main_video3_pane_t

0x0be7,	// (0x0001aa04) cams_zoom_vslider_pane_g1

0x0bf0,	// (0x0001aa0d) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0002967c) cams_zoom_vslider_pane_g

0x0bf8,	// (0x0001aa15) small_slider_vertical_pane

0x0400,	// (0x0001a21d) small_slider_vertical_pane_g1

0x0400,	// (0x0001a21d) small_slider_vertical_pane_g2

0x0c00,	// (0x0001aa1d) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00029681) small_slider_vertical_pane_g

0x4542,	// (0x0001e35f) main_hwr_training_pane

0x0c09,	// (0x0001aa26) hwr_training_instruct_pane_ParamLimits

0x0c09,	// (0x0001aa26) hwr_training_instruct_pane

0x99a8,	// (0x000237c5) hwr_training_navi_pane_ParamLimits

0x99a8,	// (0x000237c5) hwr_training_navi_pane

0x99c2,	// (0x000237df) hwr_training_write_pane_ParamLimits

0x99c2,	// (0x000237df) hwr_training_write_pane

0xc860,	// (0x0002667d) bg_frame_shadow_pane

0x0c40,	// (0x0001aa5d) hwr_training_write_pane_g1

0x0c48,	// (0x0001aa65) hwr_training_write_pane_g2

0x0c50,	// (0x0001aa6d) hwr_training_write_pane_g3

0x0c58,	// (0x0001aa75) hwr_training_write_pane_g4

0x0c60,	// (0x0001aa7d) hwr_training_write_pane_g5

0x0c68,	// (0x0001aa85) hwr_training_write_pane_g6

0x0c70,	// (0x0001aa8d) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00029688) hwr_training_write_pane_g

0x4ec5,	// (0x0001ece2) hwr_training_navi_pane_g1_ParamLimits

0x4ec5,	// (0x0001ece2) hwr_training_navi_pane_g1

0x4ed7,	// (0x0001ecf4) hwr_training_navi_pane_g2_ParamLimits

0x4ed7,	// (0x0001ecf4) hwr_training_navi_pane_g2

0x4ee9,	// (0x0001ed06) hwr_training_navi_pane_g3_ParamLimits

0x4ee9,	// (0x0001ed06) hwr_training_navi_pane_g3

0x4ef9,	// (0x0001ed16) hwr_training_navi_pane_g4_ParamLimits

0x4ef9,	// (0x0001ed16) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00029697) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00029697) hwr_training_navi_pane_g

0x4f13,	// (0x0001ed30) hwr_training_navi_pane_t1

0x99fa,	// (0x00023817) list_single_hwr_training_instruct_pane_ParamLimits

0x99fa,	// (0x00023817) list_single_hwr_training_instruct_pane

0x0cc7,	// (0x0001aae4) list_single_hwr_training_instruct_pane_t1

0x0340,	// (0x0001a15d) bg_frame_shadow_pane_g1

0x0cd6,	// (0x0001aaf3) bg_frame_shadow_pane_g2

0x0cde,	// (0x0001aafb) bg_frame_shadow_pane_g3

0x0ce6,	// (0x0001ab03) bg_frame_shadow_pane_g4

0x0cee,	// (0x0001ab0b) bg_frame_shadow_pane_g5

0x0cf6,	// (0x0001ab13) bg_frame_shadow_pane_g6

0x0cfe,	// (0x0001ab1b) bg_frame_shadow_pane_g7

0xd0c6,	// (0x00026ee3) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000296a2) bg_frame_shadow_pane_g

0x4542,	// (0x0001e35f) main_video_tele_dialer_pane

0x4f21,	// (0x0001ed3e) aid_size_cell_video_keypad_ParamLimits

0x4f21,	// (0x0001ed3e) aid_size_cell_video_keypad

0x4f31,	// (0x0001ed4e) grid_video_dialer_keypad_pane_ParamLimits

0x4f31,	// (0x0001ed4e) grid_video_dialer_keypad_pane

0x4f63,	// (0x0001ed80) video_down_pane_cp_ParamLimits

0x4f63,	// (0x0001ed80) video_down_pane_cp

0x4f6f,	// (0x0001ed8c) cell_video_dialer_keypad_pane_ParamLimits

0x4f6f,	// (0x0001ed8c) cell_video_dialer_keypad_pane

0x0d06,	// (0x0001ab23) bg_button_pane_cp08_ParamLimits

0x0d06,	// (0x0001ab23) bg_button_pane_cp08

0x9a4c,	// (0x00023869) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9a4c,	// (0x00023869) cell_video_dialer_keypad_pane_g1

0x9341,	// (0x0002315e) mup3_rocker2_pane_ParamLimits

0x9341,	// (0x0002315e) mup3_rocker2_pane

0x0400,	// (0x0001a21d) mup3_rocker2_pane_g1

0x4a04,	// (0x0001e821) main_dialer2_pane

0x4542,	// (0x0001e35f) main_mp4_pane

0x4f8c,	// (0x0001eda9) main_mp4_pane_g1_ParamLimits

0x4f8c,	// (0x0001eda9) main_mp4_pane_g1

0x4f9a,	// (0x0001edb7) main_mp4_pane_g2_ParamLimits

0x4f9a,	// (0x0001edb7) main_mp4_pane_g2

0x4fa8,	// (0x0001edc5) main_mp4_pane_g3_ParamLimits

0x4fa8,	// (0x0001edc5) main_mp4_pane_g3

0x4fed,	// (0x0001ee0a) main_mp4_pane_g4_ParamLimits

0x4fed,	// (0x0001ee0a) main_mp4_pane_g4

0x5015,	// (0x0001ee32) main_mp4_pane_g5_ParamLimits

0x5015,	// (0x0001ee32) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x000296c2) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x000296c2) main_mp4_pane_g

0x5065,	// (0x0001ee82) main_mp4_pane_t1_ParamLimits

0x5065,	// (0x0001ee82) main_mp4_pane_t1

0x50c1,	// (0x0001eede) main_mp4_pane_t2_ParamLimits

0x50c1,	// (0x0001eede) main_mp4_pane_t2

0x0e4e,	// (0x0001ac6b) main_mp4_pane_t3_ParamLimits

0x0e4e,	// (0x0001ac6b) main_mp4_pane_t3

0x5113,	// (0x0001ef30) main_mp4_pane_t4_ParamLimits

0x5113,	// (0x0001ef30) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x000296cf) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x000296cf) main_mp4_pane_t

0x5157,	// (0x0001ef74) mp4_progress_pane_ParamLimits

0x5157,	// (0x0001ef74) mp4_progress_pane

0x51a1,	// (0x0001efbe) mp4_rocker_pane_ParamLimits

0x51a1,	// (0x0001efbe) mp4_rocker_pane

0x0f24,	// (0x0001ad41) mp4_progress_pane_t1

0x0f3d,	// (0x0001ad5a) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x000296d8) mp4_progress_pane_t

0x0f56,	// (0x0001ad73) mup_progress_pane_cp04

0x1a31,	// (0x0001b84e) mp4_rocker_pane_g1

0x51c1,	// (0x0001efde) aid_cell_size_keypad2_ParamLimits

0x51c1,	// (0x0001efde) aid_cell_size_keypad2

0x51d1,	// (0x0001efee) dialer2_ne_pane_ParamLimits

0x51d1,	// (0x0001efee) dialer2_ne_pane

0x51df,	// (0x0001effc) grid_dialer2_keypad_pane_ParamLimits

0x51df,	// (0x0001effc) grid_dialer2_keypad_pane

0x1a9a,	// (0x0001b8b7) bg_popup_call_pane_cp07_ParamLimits

0x1a9a,	// (0x0001b8b7) bg_popup_call_pane_cp07

0x9a83,	// (0x000238a0) dialer2_ne_pane_t1_ParamLimits

0x9a83,	// (0x000238a0) dialer2_ne_pane_t1

0x51ef,	// (0x0001f00c) cell_dialer2_keypad_pane_ParamLimits

0x51ef,	// (0x0001f00c) cell_dialer2_keypad_pane

0x0f74,	// (0x0001ad91) bg_button_pane_pane_cp04_ParamLimits

0x0f74,	// (0x0001ad91) bg_button_pane_pane_cp04

0x9aa8,	// (0x000238c5) cell_dialer2_keypad_pane_g1_ParamLimits

0x9aa8,	// (0x000238c5) cell_dialer2_keypad_pane_g1

0x6554,	// (0x00020371) aid_placing_vt_set_content_ParamLimits

0x6554,	// (0x00020371) aid_placing_vt_set_content

0x6580,	// (0x0002039d) aid_placing_vt_set_title_ParamLimits

0x6580,	// (0x0002039d) aid_placing_vt_set_title

0x4542,	// (0x0001e35f) main_image3_pane

0x5238,	// (0x0001f055) area_side_right_pane_cp01_ParamLimits

0x5238,	// (0x0001f055) area_side_right_pane_cp01

0x5265,	// (0x0001f082) main_image3_pane_g1_ParamLimits

0x5265,	// (0x0001f082) main_image3_pane_g1

0x5273,	// (0x0001f090) main_image3_pane_g2_ParamLimits

0x5273,	// (0x0001f090) main_image3_pane_g2

0x528c,	// (0x0001f0a9) main_image3_pane_g3_ParamLimits

0x528c,	// (0x0001f0a9) main_image3_pane_g3

0x52a5,	// (0x0001f0c2) main_image3_pane_g4_ParamLimits

0x52a5,	// (0x0001f0c2) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000296e7) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000296e7) main_image3_pane_g

0x52be,	// (0x0001f0db) main_image3_pane_t1_ParamLimits

0x52be,	// (0x0001f0db) main_image3_pane_t1

0x52e3,	// (0x0001f100) main_image3_pane_t2_ParamLimits

0x52e3,	// (0x0001f100) main_image3_pane_t2

0x5302,	// (0x0001f11f) main_image3_pane_t3_ParamLimits

0x5302,	// (0x0001f11f) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000296f0) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000296f0) main_image3_pane_t

0x984b,	// (0x00023668) grid_sctrl_middle_pane_cp01_ParamLimits

0x984b,	// (0x00023668) grid_sctrl_middle_pane_cp01

0x9b10,	// (0x0002392d) cell_sctrl_middle_pane_cp01_ParamLimits

0x9b10,	// (0x0002392d) cell_sctrl_middle_pane_cp01

0x9b21,	// (0x0002393e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9b21,	// (0x0002393e) cell_sctrl_middle_pane_cp01_g1

0x4542,	// (0x0001e35f) main_call4_pane

0x9b2e,	// (0x0002394b) aid_size_button_call4_ParamLimits

0x9b2e,	// (0x0002394b) aid_size_button_call4

0x9b5e,	// (0x0002397b) call4_windows_pane_ParamLimits

0x9b5e,	// (0x0002397b) call4_windows_pane

0x9b78,	// (0x00023995) grid_call4_button_pane_ParamLimits

0x9b78,	// (0x00023995) grid_call4_button_pane

0x0fb2,	// (0x0001adcf) call4_windows_conf_pane

0x0fc7,	// (0x0001ade4) popup_call4_audio_first_window_ParamLimits

0x0fc7,	// (0x0001ade4) popup_call4_audio_first_window

0x1013,	// (0x0001ae30) popup_call4_audio_second_window_ParamLimits

0x1013,	// (0x0001ae30) popup_call4_audio_second_window

0x1027,	// (0x0001ae44) popup_call4_audio_wait_window_ParamLimits

0x1027,	// (0x0001ae44) popup_call4_audio_wait_window

0x9b9c,	// (0x000239b9) cell_call4_button_pane_ParamLimits

0x9b9c,	// (0x000239b9) cell_call4_button_pane

0x9bc1,	// (0x000239de) bg_button_pane_cp09_ParamLimits

0x9bc1,	// (0x000239de) bg_button_pane_cp09

0x9bcd,	// (0x000239ea) cell_call4_button_pane_g1_ParamLimits

0x9bcd,	// (0x000239ea) cell_call4_button_pane_g1

0x9bda,	// (0x000239f7) cell_call4_button_pane_t1_ParamLimits

0x9bda,	// (0x000239f7) cell_call4_button_pane_t1

0x106f,	// (0x0001ae8c) popup_call4_audio_conf_window_ParamLimits

0x106f,	// (0x0001ae8c) popup_call4_audio_conf_window

0x9374,	// (0x00023191) mup3_progress_pane_t1_ParamLimits

0x9393,	// (0x000231b0) mup3_progress_pane_t2_ParamLimits

0x071a,	// (0x0001a537) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x000295c9) mup3_progress_pane_t_ParamLimits

0x0737,	// (0x0001a554) mup_progress_pane_cp03_ParamLimits

0x9835,	// (0x00023652) mup3_control_keys_pane_g4_copy1

0x5185,	// (0x0001efa2) mp4_rocker2_pane_ParamLimits

0x5185,	// (0x0001efa2) mp4_rocker2_pane

0x108b,	// (0x0001aea8) mp4_rocker2_pane_g1

0x1083,	// (0x0001aea0) mp4_rocker2_pane_g2

0x5363,	// (0x0001f180) mp4_rocker2_pane_g3

0x536b,	// (0x0001f188) mp4_rocker2_pane_g4

0x5373,	// (0x0001f190) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000296f9) mp4_rocker2_pane_g

0x4542,	// (0x0001e35f) main_camera4_pane

0x4542,	// (0x0001e35f) main_video4_pane

0x4f3f,	// (0x0001ed5c) main_video_tele_dialer_pane_t1_ParamLimits

0x4f3f,	// (0x0001ed5c) main_video_tele_dialer_pane_t1

0x4f51,	// (0x0001ed6e) main_video_tele_dialer_pane_t2_ParamLimits

0x4f51,	// (0x0001ed6e) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x000296b3) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x000296b3) main_video_tele_dialer_pane_t

0x5393,	// (0x0001f1b0) cam4_autofocus_pane_ParamLimits

0x5393,	// (0x0001f1b0) cam4_autofocus_pane

0x53ad,	// (0x0001f1ca) cam4_image_uncrop_pane_ParamLimits

0x53ad,	// (0x0001f1ca) cam4_image_uncrop_pane

0x53c4,	// (0x0001f1e1) cam4_indicators_pane_ParamLimits

0x53c4,	// (0x0001f1e1) cam4_indicators_pane

0x53e0,	// (0x0001f1fd) main_camera4_pane_g1_ParamLimits

0x53e0,	// (0x0001f1fd) main_camera4_pane_g1

0x53ec,	// (0x0001f209) main_camera4_pane_g2_ParamLimits

0x53ec,	// (0x0001f209) main_camera4_pane_g2

0x53ec,	// (0x0001f209) main_camera4_pane_g3_ParamLimits

0x53ec,	// (0x0001f209) main_camera4_pane_g3

0x53f8,	// (0x0001f215) main_camera4_pane_g4_ParamLimits

0x53f8,	// (0x0001f215) main_camera4_pane_g4

0x5404,	// (0x0001f221) main_camera4_pane_g5_ParamLimits

0x5404,	// (0x0001f221) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00029704) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00029704) main_camera4_pane_g

0x541e,	// (0x0001f23b) main_camera4_pane_t1_ParamLimits

0x541e,	// (0x0001f23b) main_camera4_pane_t1

0x5442,	// (0x0001f25f) bg_tb_trans_pane_cp06

0x5458,	// (0x0001f275) cam4_indicators_pane_g1

0x5469,	// (0x0001f286) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0002971f) cam4_indicators_pane_g

0x5487,	// (0x0001f2a4) cam4_indicators_pane_t1

0x54b1,	// (0x0001f2ce) main_video4_pane_g1_ParamLimits

0x54b1,	// (0x0001f2ce) main_video4_pane_g1

0x54bd,	// (0x0001f2da) main_video4_pane_g2_ParamLimits

0x54bd,	// (0x0001f2da) main_video4_pane_g2

0x54c9,	// (0x0001f2e6) main_video4_pane_g3_ParamLimits

0x54c9,	// (0x0001f2e6) main_video4_pane_g3

0x54d5,	// (0x0001f2f2) main_video4_pane_g4_ParamLimits

0x54d5,	// (0x0001f2f2) main_video4_pane_g4

0x0004,

0xf909,	// (0x00029726) main_video4_pane_g_ParamLimits

0xf909,	// (0x00029726) main_video4_pane_g

0x54f5,	// (0x0001f312) vid4_indicators_pane_ParamLimits

0x54f5,	// (0x0001f312) vid4_indicators_pane

0x5512,	// (0x0001f32f) video4_image_uncrop_cif_pane_ParamLimits

0x5512,	// (0x0001f32f) video4_image_uncrop_cif_pane

0x5521,	// (0x0001f33e) video4_image_uncrop_nhd_pane_ParamLimits

0x5521,	// (0x0001f33e) video4_image_uncrop_nhd_pane

0x53ad,	// (0x0001f1ca) video4_image_uncrop_vga_pane_ParamLimits

0x53ad,	// (0x0001f1ca) video4_image_uncrop_vga_pane

0x49f6,	// (0x0001e813) bg_tb_trans_pane_cp07

0x5536,	// (0x0001f353) vid4_indicators_pane_g1

0x554a,	// (0x0001f367) vid4_indicators_pane_g2

0x555e,	// (0x0001f37b) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00029731) vid4_indicators_pane_g

0x558b,	// (0x0001f3a8) vid4_indicators_pane_t1

0x9c10,	// (0x00023a2d) cam4_autofocus_pane_g1

0x9c18,	// (0x00023a35) cam4_autofocus_pane_g2

0x9c20,	// (0x00023a3d) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0002973c) cam4_autofocus_pane_g

0x9c28,	// (0x00023a45) cam4_autofocus_pane_g3_copy1

0x9a30,	// (0x0002384d) video_down_pane_cp_t1

0x9a3e,	// (0x0002385b) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x000296b8) video_down_pane_cp_t

0x4534,	// (0x0001e351) popup_vitu2_window_ParamLimits

0x4534,	// (0x0001e351) popup_vitu2_window

0x55a2,	// (0x0001f3bf) aid_size_cell2_itu2_ParamLimits

0x55a2,	// (0x0001f3bf) aid_size_cell2_itu2

0x55c4,	// (0x0001f3e1) aid_size_cell_itu2_ParamLimits

0x55c4,	// (0x0001f3e1) aid_size_cell_itu2

0x5608,	// (0x0001f425) bg_popup_window_pane_cp09_ParamLimits

0x5608,	// (0x0001f425) bg_popup_window_pane_cp09

0x5616,	// (0x0001f433) field_vitu2_entry_pane_ParamLimits

0x5616,	// (0x0001f433) field_vitu2_entry_pane

0x5636,	// (0x0001f453) grid_vitu2_function_pane_ParamLimits

0x5636,	// (0x0001f453) grid_vitu2_function_pane

0x567a,	// (0x0001f497) grid_vitu2_itu_pane_ParamLimits

0x567a,	// (0x0001f497) grid_vitu2_itu_pane

0x56f0,	// (0x0001f50d) cell_vitu2_itu_pane_ParamLimits

0x56f0,	// (0x0001f50d) cell_vitu2_itu_pane

0x5705,	// (0x0001f522) cell_vitu2_function_pane_ParamLimits

0x5705,	// (0x0001f522) cell_vitu2_function_pane

0x1194,	// (0x0001afb1) bg_popup_call_pane_cp08_ParamLimits

0x1194,	// (0x0001afb1) bg_popup_call_pane_cp08

0x11ad,	// (0x0001afca) field_vitu2_entry_pane_g1

0x11b9,	// (0x0001afd6) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00029743) field_vitu2_entry_pane_g

0x11d3,	// (0x0001aff0) field_vitu2_entry_pane_t1_ParamLimits

0x11d3,	// (0x0001aff0) field_vitu2_entry_pane_t1

0x1204,	// (0x0001b021) field_vitu2_entry_pane_t2_ParamLimits

0x1204,	// (0x0001b021) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0002974a) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0002974a) field_vitu2_entry_pane_t

0x5746,	// (0x0001f563) bg_button_pane_cp010_ParamLimits

0x5746,	// (0x0001f563) bg_button_pane_cp010

0x5754,	// (0x0001f571) cell_vitu2_itu_pane_g1

0x5772,	// (0x0001f58f) cell_vitu2_itu_pane_t1_ParamLimits

0x5772,	// (0x0001f58f) cell_vitu2_itu_pane_t1

0x57c4,	// (0x0001f5e1) cell_vitu2_itu_pane_t2_ParamLimits

0x57c4,	// (0x0001f5e1) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00029754) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00029754) cell_vitu2_itu_pane_t

0x49f6,	// (0x0001e813) bg_button_pane_cp011

0x587f,	// (0x0001f69c) cell_vitu2_function_pane_g1

0x4542,	// (0x0001e35f) main_myfav_hc_pane

0x5344,	// (0x0001f161) popup_image3_note_pane_ParamLimits

0x5344,	// (0x0001f161) popup_image3_note_pane

0x5352,	// (0x0001f16f) popup_image3_tool_bar_pane_ParamLimits

0x5352,	// (0x0001f16f) popup_image3_tool_bar_pane

0x5832,	// (0x0001f64f) cell_vitu2_itu_pane_t3_ParamLimits

0x5832,	// (0x0001f64f) cell_vitu2_itu_pane_t3

0xc860,	// (0x0002667d) bg_popup_trans_pane

0x1229,	// (0x0001b046) grid_image3_tool_bar_pane

0x1233,	// (0x0001b050) bg_popup_trans_pane_g1

0xd4ca,	// (0x000272e7) bg_popup_trans_pane_g2

0x123b,	// (0x0001b058) bg_popup_trans_pane_g3

0x1243,	// (0x0001b060) bg_popup_trans_pane_g4

0x124b,	// (0x0001b068) bg_popup_trans_pane_g5

0x1253,	// (0x0001b070) bg_popup_trans_pane_g6

0x125b,	// (0x0001b078) bg_popup_trans_pane_g7

0x1263,	// (0x0001b080) bg_popup_trans_pane_g8

0xd4aa,	// (0x000272c7) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0002975b) bg_popup_trans_pane_g

0x126b,	// (0x0001b088) cell_image3_tool_bar_pane_ParamLimits

0x126b,	// (0x0001b088) cell_image3_tool_bar_pane

0x0400,	// (0x0001a21d) cell_image3_tool_bar_pane_g1

0xc860,	// (0x0002667d) bg_popup_trans_pane_cp1

0x127f,	// (0x0001b09c) popup_image3_note_pane_t1

0x128d,	// (0x0001b0aa) popup_image3_note_pane_t2

0x129b,	// (0x0001b0b8) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0002976e) popup_image3_note_pane_t

0x12a9,	// (0x0001b0c6) popup_image3_note_pane_t3_copy1

0x9c30,	// (0x00023a4d) bg_myfav_hc_instruction_pane_ParamLimits

0x9c30,	// (0x00023a4d) bg_myfav_hc_instruction_pane

0x9c48,	// (0x00023a65) cell_myfav_contact_pane_ParamLimits

0x9c48,	// (0x00023a65) cell_myfav_contact_pane

0x9c62,	// (0x00023a7f) cell_myfav_contact_pane_cp1_ParamLimits

0x9c62,	// (0x00023a7f) cell_myfav_contact_pane_cp1

0x9c7a,	// (0x00023a97) cell_myfav_contact_pane_cp2_ParamLimits

0x9c7a,	// (0x00023a97) cell_myfav_contact_pane_cp2

0x9c92,	// (0x00023aaf) cell_myfav_contact_pane_cp3_ParamLimits

0x9c92,	// (0x00023aaf) cell_myfav_contact_pane_cp3

0x9ca9,	// (0x00023ac6) cell_myfav_contact_pane_cp4_ParamLimits

0x9ca9,	// (0x00023ac6) cell_myfav_contact_pane_cp4

0x9cbf,	// (0x00023adc) cell_myfav_contact_pane_cp5_ParamLimits

0x9cbf,	// (0x00023adc) cell_myfav_contact_pane_cp5

0x9cd3,	// (0x00023af0) cell_myfav_contact_pane_cp6_ParamLimits

0x9cd3,	// (0x00023af0) cell_myfav_contact_pane_cp6

0x9ce7,	// (0x00023b04) cell_myfav_contact_pane_cp7_ParamLimits

0x9ce7,	// (0x00023b04) cell_myfav_contact_pane_cp7

0x12b7,	// (0x0001b0d4) listscroll_gen_pane_cp05

0x9cff,	// (0x00023b1c) main_myfav_hc_pane_g1_ParamLimits

0x9cff,	// (0x00023b1c) main_myfav_hc_pane_g1

0x9d17,	// (0x00023b34) main_myfav_hc_pane_g2_ParamLimits

0x9d17,	// (0x00023b34) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00029775) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00029775) main_myfav_hc_pane_g

0x9d47,	// (0x00023b64) main_myfav_hc_pane_t1_ParamLimits

0x9d47,	// (0x00023b64) main_myfav_hc_pane_t1

0x12c0,	// (0x0001b0dd) main_myfav_hc_pane_t2_ParamLimits

0x12c0,	// (0x0001b0dd) main_myfav_hc_pane_t2

0x12d2,	// (0x0001b0ef) main_myfav_hc_pane_t3_ParamLimits

0x12d2,	// (0x0001b0ef) main_myfav_hc_pane_t3

0x9d5e,	// (0x00023b7b) main_myfav_hc_pane_t4_ParamLimits

0x9d5e,	// (0x00023b7b) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0002977c) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0002977c) main_myfav_hc_pane_t

0x0400,	// (0x0001a21d) bg_myfav_hc_instruction_pane_g1

0x12e4,	// (0x0001b101) cell_myfav_contact_pane_g1_ParamLimits

0x12e4,	// (0x0001b101) cell_myfav_contact_pane_g1

0x12e4,	// (0x0001b101) cell_myfav_contact_pane_g2_ParamLimits

0x12e4,	// (0x0001b101) cell_myfav_contact_pane_g2

0x12f0,	// (0x0001b10d) cell_myfav_contact_pane_g3_ParamLimits

0x12f0,	// (0x0001b10d) cell_myfav_contact_pane_g3

0x0704,	// (0x0001a521) cell_myfav_contact_pane_g4_ParamLimits

0x0704,	// (0x0001a521) cell_myfav_contact_pane_g4

0x12fd,	// (0x0001b11a) cell_myfav_contact_pane_g5_ParamLimits

0x12fd,	// (0x0001b11a) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00029787) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00029787) cell_myfav_contact_pane_g

0x9d2f,	// (0x00023b4c) main_myfav_hc_pane_g3_ParamLimits

0x9d2f,	// (0x00023b4c) main_myfav_hc_pane_g3

0x4447,	// (0x0001e264) popup_adpt_find_window

0x9d88,	// (0x00023ba5) afind_page_pane_ParamLimits

0x9d88,	// (0x00023ba5) afind_page_pane

0x9d95,	// (0x00023bb2) aid_size_cell_afind_ParamLimits

0x9d95,	// (0x00023bb2) aid_size_cell_afind

0x9daf,	// (0x00023bcc) bg_popup_sub_pane_cp09_ParamLimits

0x9daf,	// (0x00023bcc) bg_popup_sub_pane_cp09

0x9dbc,	// (0x00023bd9) find_pane_cp01_ParamLimits

0x9dbc,	// (0x00023bd9) find_pane_cp01

0x1309,	// (0x0001b126) grid_afind_control_pane_ParamLimits

0x1309,	// (0x0001b126) grid_afind_control_pane

0x9dc9,	// (0x00023be6) grid_afind_pane_ParamLimits

0x9dc9,	// (0x00023be6) grid_afind_pane

0x9de5,	// (0x00023c02) cell_afind_pane_ParamLimits

0x9de5,	// (0x00023c02) cell_afind_pane

0x0400,	// (0x0001a21d) afind_page_pane_g1

0x9e2d,	// (0x00023c4a) afind_page_pane_g2

0x9e36,	// (0x00023c53) afind_page_pane_g3

0x0002,

0xf975,	// (0x00029792) afind_page_pane_g

0x9e3f,	// (0x00023c5c) afind_page_pane_t1

0x131d,	// (0x0001b13a) cell_afind_grid_control_pane_ParamLimits

0x131d,	// (0x0001b13a) cell_afind_grid_control_pane

0x0f74,	// (0x0001ad91) bg_button_pane_cp69_ParamLimits

0x0f74,	// (0x0001ad91) bg_button_pane_cp69

0x9e56,	// (0x00023c73) cell_afind_pane_g1_ParamLimits

0x9e56,	// (0x00023c73) cell_afind_pane_g1

0x9e63,	// (0x00023c80) cell_afind_pane_t1_ParamLimits

0x9e63,	// (0x00023c80) cell_afind_pane_t1

0xd206,	// (0x00027023) bg_button_pane_cp72

0x132c,	// (0x0001b149) cell_afind_grid_control_pane_g1

0x81fc,	// (0x00022019) aid_image_placing_area_ParamLimits

0x81fc,	// (0x00022019) aid_image_placing_area

0x0a09,	// (0x0001a826) field_vitu_entry_pane_g1_ParamLimits

0x0a09,	// (0x0001a826) field_vitu_entry_pane_g1

0x0a15,	// (0x0001a832) field_vitu_entry_pane_g2_ParamLimits

0x0a15,	// (0x0001a832) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00029643) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00029643) field_vitu_entry_pane_g

0x98cf,	// (0x000236ec) cell_vitu_itu_pane_g1_ParamLimits

0x9911,	// (0x0002372e) cell_vitu_itu_pane_t3_ParamLimits

0x9911,	// (0x0002372e) cell_vitu_itu_pane_t3

0x0f24,	// (0x0001ad41) mp4_progress_pane_t1_ParamLimits

0x0f3d,	// (0x0001ad5a) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x000296d8) mp4_progress_pane_t_ParamLimits

0x0f56,	// (0x0001ad73) mup_progress_pane_cp04_ParamLimits

0x9d72,	// (0x00023b8f) main_myfav_hc_pane_t5_ParamLimits

0x9d72,	// (0x00023b8f) main_myfav_hc_pane_t5

0x430c,	// (0x0001e129) aid_zoom_text_primary

0x4447,	// (0x0001e264) popup_adpt_find_window_ParamLimits

0x49f6,	// (0x0001e813) main_cam_set_pane

0x53d2,	// (0x0001f1ef) cam4_zoom_pane_ParamLimits

0x53d2,	// (0x0001f1ef) cam4_zoom_pane

0x9e75,	// (0x00023c92) main_cam_set_pane_g1_ParamLimits

0x9e75,	// (0x00023c92) main_cam_set_pane_g1

0x9e83,	// (0x00023ca0) main_cam_set_pane_g2_ParamLimits

0x9e83,	// (0x00023ca0) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00029799) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00029799) main_cam_set_pane_g

0x9e8f,	// (0x00023cac) main_cam_set_pane_t1_ParamLimits

0x9e8f,	// (0x00023cac) main_cam_set_pane_t1

0x9eab,	// (0x00023cc8) main_cset_listscroll_pane_ParamLimits

0x9eab,	// (0x00023cc8) main_cset_listscroll_pane

0x9ed6,	// (0x00023cf3) main_cset_slider_pane_ParamLimits

0x9ed6,	// (0x00023cf3) main_cset_slider_pane

0x133d,	// (0x0001b15a) main_cset_list_pane_ParamLimits

0x133d,	// (0x0001b15a) main_cset_list_pane

0x134d,	// (0x0001b16a) scroll_pane_cp028

0x9ef5,	// (0x00023d12) aid_area_touch_slider

0x9f11,	// (0x00023d2e) cset_slider_pane

0x9f3b,	// (0x00023d58) main_cset_slider_pane_g1

0x9f50,	// (0x00023d6d) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0002979e) main_cset_slider_pane_g

0x1386,	// (0x0001b1a3) main_cset_slider_pane_t1

0xa018,	// (0x00023e35) main_cset_slider_pane_t2

0xa032,	// (0x00023e4f) main_cset_slider_pane_t3

0xa04c,	// (0x00023e69) main_cset_slider_pane_t4

0xa06a,	// (0x00023e87) main_cset_slider_pane_t5

0xa08c,	// (0x00023ea9) main_cset_slider_pane_t6

0xa0a3,	// (0x00023ec0) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x000297c3) main_cset_slider_pane_t

0xa1b1,	// (0x00023fce) cset_list_set_pane_ParamLimits

0xa1b1,	// (0x00023fce) cset_list_set_pane

0xa1ce,	// (0x00023feb) aid_position_infowindow_above

0xa1d6,	// (0x00023ff3) aid_position_infowindow_below

0xa1de,	// (0x00023ffb) cset_list_set_pane_g1_ParamLimits

0xa1de,	// (0x00023ffb) cset_list_set_pane_g1

0x1ca8,	// (0x0001bac5) cset_list_set_pane_g3_ParamLimits

0x1ca8,	// (0x0001bac5) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000297e2) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000297e2) cset_list_set_pane_g

0x1cb7,	// (0x0001bad4) cset_list_set_pane_t1_ParamLimits

0x1cb7,	// (0x0001bad4) cset_list_set_pane_t1

0xcad0,	// (0x000268ed) list_highlight_pane_cp021_ParamLimits

0xcad0,	// (0x000268ed) list_highlight_pane_cp021

0xdd23,	// (0x00027b40) cset_slider_pane_g1

0xdd35,	// (0x00027b52) cset_slider_pane_g2

0xdd2c,	// (0x00027b49) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000297e7) cset_slider_pane_g

0x5893,	// (0x0001f6b0) aid_area_touch_cam4_zoom

0x589b,	// (0x0001f6b8) cam4_zoom_cont_pane

0x58a3,	// (0x0001f6c0) cam4_zoom_pane_g1

0x58ab,	// (0x0001f6c8) cam4_zoom_pane_g2

0x58b3,	// (0x0001f6d0) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000297ee) cam4_zoom_pane_g

0x58bb,	// (0x0001f6d8) cam4_zoom_cont_pane_g1

0x58c4,	// (0x0001f6e1) cam4_zoom_cont_pane_g2

0x58cd,	// (0x0001f6ea) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000297f5) cam4_zoom_cont_pane_g

0x9b48,	// (0x00023965) call4_image_pane_ParamLimits

0x9b48,	// (0x00023965) call4_image_pane

0x0fb2,	// (0x0001adcf) call4_windows_conf_pane_ParamLimits

0x0ff1,	// (0x0001ae0e) popup_call4_audio_in_window_ParamLimits

0x0ff1,	// (0x0001ae0e) popup_call4_audio_in_window

0xc860,	// (0x0002667d) bg_popup_call2_act_pane_cp02

0x1067,	// (0x0001ae84) call4_list_conf_pane

0x0400,	// (0x0001a21d) call4_image_pane_g1

0x0400,	// (0x0001a21d) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00029509) call4_image_pane_g

0x1461,	// (0x0001b27e) list_single_graphic_popup_conf4_pane_ParamLimits

0x1461,	// (0x0001b27e) list_single_graphic_popup_conf4_pane

0xc860,	// (0x0002667d) list_highlight_pane_cp022

0x1474,	// (0x0001b291) list_single_graphic_popup_conf4_pane_g1

0xda06,	// (0x00027823) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000297fc) list_single_graphic_popup_conf4_pane_g

0x147c,	// (0x0001b299) list_single_graphic_popup_conf4_pane_t1

0x66e4,	// (0x00020501) popup_vtel_slider_window_ParamLimits

0x66e4,	// (0x00020501) popup_vtel_slider_window

0x0f62,	// (0x0001ad7f) dialer2_ne_pane_t2_ParamLimits

0x0f62,	// (0x0001ad7f) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x000296dd) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x000296dd) dialer2_ne_pane_t

0xcad0,	// (0x000268ed) bg_popup_sub_pane_cp010_ParamLimits

0xcad0,	// (0x000268ed) bg_popup_sub_pane_cp010

0xa1ea,	// (0x00024007) popup_vtel_slider_window_g1_ParamLimits

0xa1ea,	// (0x00024007) popup_vtel_slider_window_g1

0xa1f6,	// (0x00024013) popup_vtel_slider_window_g2_ParamLimits

0xa1f6,	// (0x00024013) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00029801) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00029801) popup_vtel_slider_window_g

0xa23e,	// (0x0002405b) vtel_slider_pane_ParamLimits

0xa23e,	// (0x0002405b) vtel_slider_pane

0xa24d,	// (0x0002406a) vtel_slider_pane_g1_ParamLimits

0xa24d,	// (0x0002406a) vtel_slider_pane_g1

0xa25a,	// (0x00024077) vtel_slider_pane_g2_ParamLimits

0xa25a,	// (0x00024077) vtel_slider_pane_g2

0xa267,	// (0x00024084) vtel_slider_pane_g3_ParamLimits

0xa267,	// (0x00024084) vtel_slider_pane_g3

0xa24d,	// (0x0002406a) vtel_slider_pane_g4_ParamLimits

0xa24d,	// (0x0002406a) vtel_slider_pane_g4

0xa274,	// (0x00024091) vtel_slider_pane_g5_ParamLimits

0xa274,	// (0x00024091) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0002980a) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0002980a) vtel_slider_pane_g

0x4542,	// (0x0001e35f) main_gallery2_pane

0x55ea,	// (0x0001f407) aid_size_row_itut2_dropdow_list_ParamLimits

0x55ea,	// (0x0001f407) aid_size_row_itut2_dropdow_list

0x5658,	// (0x0001f475) grid_vitu2_function_top_pane_ParamLimits

0x5658,	// (0x0001f475) grid_vitu2_function_top_pane

0x56ae,	// (0x0001f4cb) popup_vitu2_dropdown_list_window_ParamLimits

0x56ae,	// (0x0001f4cb) popup_vitu2_dropdown_list_window

0x56ce,	// (0x0001f4eb) popup_vitu2_match_list_window

0x58d6,	// (0x0001f6f3) cell_vitu2_function_top_pane_ParamLimits

0x58d6,	// (0x0001f6f3) cell_vitu2_function_top_pane

0x58f6,	// (0x0001f713) cell_vitu2_function_top_pane_cp01_ParamLimits

0x58f6,	// (0x0001f713) cell_vitu2_function_top_pane_cp01

0x5914,	// (0x0001f731) cell_vitu2_function_top_wide_pane_ParamLimits

0x5914,	// (0x0001f731) cell_vitu2_function_top_wide_pane

0x49f6,	// (0x0001e813) bg_button_pane_cp012

0x5932,	// (0x0001f74f) cell_vitu2_function_top_pane_g1

0x5941,	// (0x0001f75e) bg_button_pane_cp013_ParamLimits

0x5941,	// (0x0001f75e) bg_button_pane_cp013

0xa281,	// (0x0002409e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa281,	// (0x0002409e) cell_vitu2_function_top_wide_pane_g1

0x4534,	// (0x0001e351) bg_popup_sub_pane_cp20

0x595d,	// (0x0001f77a) list_vitu2_match_list_pane

0x1233,	// (0x0001b050) bg_popup_sub_pane_cp20_g1

0x123b,	// (0x0001b058) bg_popup_sub_pane_cp20_g2

0xd4ca,	// (0x000272e7) bg_popup_sub_pane_cp20_g3

0x1243,	// (0x0001b060) bg_popup_sub_pane_cp20_g4

0xd4aa,	// (0x000272c7) bg_popup_sub_pane_cp20_g5

0x14bc,	// (0x0001b2d9) bg_popup_sub_pane_cp20_g6

0x1253,	// (0x0001b070) bg_popup_sub_pane_cp20_g7

0x125b,	// (0x0001b078) bg_popup_sub_pane_cp20_g8

0x1263,	// (0x0001b080) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00029815) bg_popup_sub_pane_cp20_g

0x5975,	// (0x0001f792) list_vitu2_match_list_item_pane_ParamLimits

0x5975,	// (0x0001f792) list_vitu2_match_list_item_pane

0x5987,	// (0x0001f7a4) list_vitu2_match_list_item_pane_t1

0x4542,	// (0x0001e35f) bg_popup_sub_pane_cp21

0x5995,	// (0x0001f7b2) grid_vitu2_dropdown_list_pane

0x599d,	// (0x0001f7ba) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x599d,	// (0x0001f7ba) cell_vitu2_dropdown_list_char_pane

0x59be,	// (0x0001f7db) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x59be,	// (0x0001f7db) cell_vitu2_dropdown_list_ctrl_pane

0x150e,	// (0x0001b32b) cell_vitu2_dropdown_list_char_pane_g1

0x1505,	// (0x0001b322) cell_vitu2_dropdown_list_char_pane_g2

0x14fc,	// (0x0001b319) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00029832) cell_vitu2_dropdown_list_char_pane_g

0x59ea,	// (0x0001f807) cell_vitu2_dropdown_list_char_pane_t1

0xa2c8,	// (0x000240e5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa2c8,	// (0x000240e5) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa2d8,	// (0x000240f5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa2d8,	// (0x000240f5) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa2e9,	// (0x00024106) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa2e9,	// (0x00024106) cell_vitu2_dropdown_list_ctrl_pane_g3

0x59f8,	// (0x0001f815) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x59f8,	// (0x0001f815) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5442,	// (0x0001f25f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5442,	// (0x0001f25f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00029839) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00029839) cell_vitu2_dropdown_list_ctrl_pane_g

0xa2f9,	// (0x00024116) aid_size_cell_gallery2_ParamLimits

0xa2f9,	// (0x00024116) aid_size_cell_gallery2

0xa307,	// (0x00024124) grid_gallery2_pane_ParamLimits

0xa307,	// (0x00024124) grid_gallery2_pane

0xa316,	// (0x00024133) scroll_pane_cp029_ParamLimits

0xa316,	// (0x00024133) scroll_pane_cp029

0xa322,	// (0x0002413f) cell_gallery2_pane_ParamLimits

0xa322,	// (0x0002413f) cell_gallery2_pane

0x1517,	// (0x0001b334) cell_gallery2_pane_g2

0xa353,	// (0x00024170) cell_gallery2_pane_g3

0x1521,	// (0x0001b33e) cell_gallery2_pane_g4

0x1529,	// (0x0001b346) cell_gallery2_pane_g5

0xdbdf,	// (0x000279fc) grid_highlight_pane_cp10

0x56ce,	// (0x0001f4eb) popup_vitu2_match_list_window_ParamLimits

0x56e0,	// (0x0001f4fd) popup_vitu2_query_window_ParamLimits

0x56e0,	// (0x0001f4fd) popup_vitu2_query_window

0x4542,	// (0x0001e35f) bg_vitu2_candi_button_pane

0x150e,	// (0x0001b32b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1505,	// (0x0001b322) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x14fc,	// (0x0001b319) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa35b,	// (0x00024178) bg_button_pane_cp015

0xa36d,	// (0x0002418a) bg_button_pane_cp016

0xa380,	// (0x0002419d) bg_button_pane_cp017

0xf02a,	// (0x00028e47) bg_popup_sub_pane_cp22

0x1531,	// (0x0001b34e) popup_vitu2_query_window_g1

0xa3c5,	// (0x000241e2) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00029844) popup_vitu2_query_window_g

0xa3e2,	// (0x000241ff) popup_vitu2_query_window_t1_ParamLimits

0xa3e2,	// (0x000241ff) popup_vitu2_query_window_t1

0xa415,	// (0x00024232) popup_vitu2_query_window_t2_ParamLimits

0xa415,	// (0x00024232) popup_vitu2_query_window_t2

0xa427,	// (0x00024244) popup_vitu2_query_window_t3_ParamLimits

0xa427,	// (0x00024244) popup_vitu2_query_window_t3

0xa44f,	// (0x0002426c) popup_vitu2_query_window_t4_ParamLimits

0xa44f,	// (0x0002426c) popup_vitu2_query_window_t4

0xa470,	// (0x0002428d) popup_vitu2_query_window_t5_ParamLimits

0xa470,	// (0x0002428d) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0002984b) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0002984b) popup_vitu2_query_window_t

0x1335,	// (0x0001b152) main_cset_text_pane

0x9ef5,	// (0x00023d12) aid_area_touch_slider_ParamLimits

0x9f11,	// (0x00023d2e) cset_slider_pane_ParamLimits

0x9f3b,	// (0x00023d58) main_cset_slider_pane_g1_ParamLimits

0x9f50,	// (0x00023d6d) main_cset_slider_pane_g2_ParamLimits

0x1356,	// (0x0001b173) main_cset_slider_pane_g3_ParamLimits

0x1356,	// (0x0001b173) main_cset_slider_pane_g3

0x9f65,	// (0x00023d82) main_cset_slider_pane_g4_ParamLimits

0x9f65,	// (0x00023d82) main_cset_slider_pane_g4

0x9f74,	// (0x00023d91) main_cset_slider_pane_g5_ParamLimits

0x9f74,	// (0x00023d91) main_cset_slider_pane_g5

0x9f82,	// (0x00023d9f) main_cset_slider_pane_g6_ParamLimits

0x9f82,	// (0x00023d9f) main_cset_slider_pane_g6

0xf981,	// (0x0002979e) main_cset_slider_pane_g_ParamLimits

0x1386,	// (0x0001b1a3) main_cset_slider_pane_t1_ParamLimits

0xa018,	// (0x00023e35) main_cset_slider_pane_t2_ParamLimits

0xa032,	// (0x00023e4f) main_cset_slider_pane_t3_ParamLimits

0xa04c,	// (0x00023e69) main_cset_slider_pane_t4_ParamLimits

0xa06a,	// (0x00023e87) main_cset_slider_pane_t5_ParamLimits

0xa08c,	// (0x00023ea9) main_cset_slider_pane_t6_ParamLimits

0xa0a3,	// (0x00023ec0) main_cset_slider_pane_t7_ParamLimits

0xa0d1,	// (0x00023eee) main_cset_slider_pane_t8_ParamLimits

0xa0d1,	// (0x00023eee) main_cset_slider_pane_t8

0xa0f9,	// (0x00023f16) main_cset_slider_pane_t9_ParamLimits

0xa0f9,	// (0x00023f16) main_cset_slider_pane_t9

0xa121,	// (0x00023f3e) main_cset_slider_pane_t10_ParamLimits

0xa121,	// (0x00023f3e) main_cset_slider_pane_t10

0xa149,	// (0x00023f66) main_cset_slider_pane_t11_ParamLimits

0xa149,	// (0x00023f66) main_cset_slider_pane_t11

0xa173,	// (0x00023f90) main_cset_slider_pane_t12_ParamLimits

0xa173,	// (0x00023f90) main_cset_slider_pane_t12

0xa192,	// (0x00023faf) main_cset_slider_pane_t13_ParamLimits

0xa192,	// (0x00023faf) main_cset_slider_pane_t13

0xf9a6,	// (0x000297c3) main_cset_slider_pane_t_ParamLimits

0xc860,	// (0x0002667d) bg_popup_sub_pane_cp011

0x153d,	// (0x0001b35a) main_cset_text_pane_g1

0x1545,	// (0x0001b362) main_cset_text_pane_t1

0x1553,	// (0x0001b370) main_cset_text_pane_t2

0x1561,	// (0x0001b37e) main_cset_text_pane_t3

0x156f,	// (0x0001b38c) main_cset_text_pane_t4

0x157d,	// (0x0001b39a) main_cset_text_pane_t5

0x158b,	// (0x0001b3a8) main_cset_text_pane_t6

0x1599,	// (0x0001b3b6) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0002985a) main_cset_text_pane_t

0x4542,	// (0x0001e35f) main_cam4_burst_pane

0x4542,	// (0x0001e35f) main_cam5_pane

0xd5ed,	// (0x0002740a) bg_button_pane_cp019

0x9e4d,	// (0x00023c6a) bg_button_pane_cp020

0x1362,	// (0x0001b17f) main_cset_slider_pane_g7_ParamLimits

0x1362,	// (0x0001b17f) main_cset_slider_pane_g7

0x136e,	// (0x0001b18b) main_cset_slider_pane_g8_ParamLimits

0x136e,	// (0x0001b18b) main_cset_slider_pane_g8

0x9f98,	// (0x00023db5) main_cset_slider_pane_g9_ParamLimits

0x9f98,	// (0x00023db5) main_cset_slider_pane_g9

0x9fa4,	// (0x00023dc1) main_cset_slider_pane_g10_ParamLimits

0x9fa4,	// (0x00023dc1) main_cset_slider_pane_g10

0x9fb0,	// (0x00023dcd) main_cset_slider_pane_g11_ParamLimits

0x9fb0,	// (0x00023dcd) main_cset_slider_pane_g11

0x9fbc,	// (0x00023dd9) main_cset_slider_pane_g12_ParamLimits

0x9fbc,	// (0x00023dd9) main_cset_slider_pane_g12

0x9fc8,	// (0x00023de5) main_cset_slider_pane_g13_ParamLimits

0x9fc8,	// (0x00023de5) main_cset_slider_pane_g13

0x9fd6,	// (0x00023df3) main_cset_slider_pane_g14_ParamLimits

0x9fd6,	// (0x00023df3) main_cset_slider_pane_g14

0x9fe4,	// (0x00023e01) main_cset_slider_pane_g15_ParamLimits

0x9fe4,	// (0x00023e01) main_cset_slider_pane_g15

0x13b4,	// (0x0001b1d1) main_cset_slider_pane_t14_ParamLimits

0x13b4,	// (0x0001b1d1) main_cset_slider_pane_t14

0x13ed,	// (0x0001b20a) main_cset_slider_pane_t15_ParamLimits

0x13ed,	// (0x0001b20a) main_cset_slider_pane_t15

0xa4e7,	// (0x00024304) aid_cam4_burst_size_cell_ParamLimits

0xa4e7,	// (0x00024304) aid_cam4_burst_size_cell

0xa503,	// (0x00024320) grid_cam4_burst_pane_ParamLimits

0xa503,	// (0x00024320) grid_cam4_burst_pane

0xa533,	// (0x00024350) linegrid_cam4_burst_pane_ParamLimits

0xa533,	// (0x00024350) linegrid_cam4_burst_pane

0xa555,	// (0x00024372) scroll_pane_cp30_ParamLimits

0xa555,	// (0x00024372) scroll_pane_cp30

0xa561,	// (0x0002437e) cell_cam4_burst_pane_ParamLimits

0xa561,	// (0x0002437e) cell_cam4_burst_pane

0x15b3,	// (0x0001b3d0) linegrid_cam4_burst_pane_g1_ParamLimits

0x15b3,	// (0x0001b3d0) linegrid_cam4_burst_pane_g1

0xa59d,	// (0x000243ba) linegrid_cam4_burst_pane_g2_ParamLimits

0xa59d,	// (0x000243ba) linegrid_cam4_burst_pane_g2

0x15c0,	// (0x0001b3dd) linegrid_cam4_burst_pane_g3_ParamLimits

0x15c0,	// (0x0001b3dd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00029869) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00029869) linegrid_cam4_burst_pane_g

0xa5ae,	// (0x000243cb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa5ae,	// (0x000243cb) linegrid_cam4_burst_pane_g3_copy1

0x15cd,	// (0x0001b3ea) linegrid_cam4_burst_pane_g4_ParamLimits

0x15cd,	// (0x0001b3ea) linegrid_cam4_burst_pane_g4

0xa5c8,	// (0x000243e5) linegrid_cam4_burst_pane_g5_ParamLimits

0xa5c8,	// (0x000243e5) linegrid_cam4_burst_pane_g5

0xa5d9,	// (0x000243f6) linegrid_cam4_burst_pane_g6_ParamLimits

0xa5d9,	// (0x000243f6) linegrid_cam4_burst_pane_g6

0x15da,	// (0x0001b3f7) linegrid_cam4_burst_pane_g7_ParamLimits

0x15da,	// (0x0001b3f7) linegrid_cam4_burst_pane_g7

0xa5ea,	// (0x00024407) cell_cam4_burst_pane_g1

0x15f3,	// (0x0001b410) main_cam5_pane_t1_ParamLimits

0x15f3,	// (0x0001b410) main_cam5_pane_t1

0x1605,	// (0x0001b422) main_cam5_pane_t2_ParamLimits

0x1605,	// (0x0001b422) main_cam5_pane_t2

0x1617,	// (0x0001b434) main_cam5_pane_t3_ParamLimits

0x1617,	// (0x0001b434) main_cam5_pane_t3

0x1629,	// (0x0001b446) main_cam5_pane_t4_ParamLimits

0x1629,	// (0x0001b446) main_cam5_pane_t4

0x163f,	// (0x0001b45c) main_cam5_pane_t5_ParamLimits

0x163f,	// (0x0001b45c) main_cam5_pane_t5

0x1651,	// (0x0001b46e) main_cam5_pane_t6_ParamLimits

0x1651,	// (0x0001b46e) main_cam5_pane_t6

0x1665,	// (0x0001b482) main_cam5_pane_t7_ParamLimits

0x1665,	// (0x0001b482) main_cam5_pane_t7

0x1677,	// (0x0001b494) main_cam5_pane_t8_ParamLimits

0x1677,	// (0x0001b494) main_cam5_pane_t8

0x1693,	// (0x0001b4b0) main_cam5_pane_t9_ParamLimits

0x1693,	// (0x0001b4b0) main_cam5_pane_t9

0x16a5,	// (0x0001b4c2) main_cam5_pane_t10_ParamLimits

0x16a5,	// (0x0001b4c2) main_cam5_pane_t10

0x16b7,	// (0x0001b4d4) main_cam5_pane_t11_ParamLimits

0x16b7,	// (0x0001b4d4) main_cam5_pane_t11

0x16c9,	// (0x0001b4e6) main_cam5_pane_t12_ParamLimits

0x16c9,	// (0x0001b4e6) main_cam5_pane_t12

0x16de,	// (0x0001b4fb) main_cam5_pane_t13_ParamLimits

0x16de,	// (0x0001b4fb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00029875) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00029875) main_cam5_pane_t

0x44fd,	// (0x0001e31a) popup_scut_keymap_window_ParamLimits

0x44fd,	// (0x0001e31a) popup_scut_keymap_window

0xa5fd,	// (0x0002441a) aid_size_cell_brow_shortcut

0xdbdf,	// (0x000279fc) bg_popup_window_pane_cp010

0xa609,	// (0x00024426) grid_scut_pane

0xa615,	// (0x00024432) cell_scut_pane_ParamLimits

0xa615,	// (0x00024432) cell_scut_pane

0xa62c,	// (0x00024449) cell_scut_pane_g1

0x16fb,	// (0x0001b518) cell_scut_pane_t1

0x170a,	// (0x0001b527) cell_scut_pane_t2

0xa635,	// (0x00024452) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00029890) cell_scut_pane_t

0x8f97,	// (0x00022db4) main_mup3_pane_g8_ParamLimits

0x8f97,	// (0x00022db4) main_mup3_pane_g8

0x55f8,	// (0x0001f415) area_vitu2_query_pane_ParamLimits

0x55f8,	// (0x0001f415) area_vitu2_query_pane

0xa393,	// (0x000241b0) input_focus_pane_cp08

0x1719,	// (0x0001b536) area_vitu2_query_pane_g1

0xa643,	// (0x00024460) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00029897) area_vitu2_query_pane_g

0xa654,	// (0x00024471) area_vitu2_query_pane_t1_ParamLimits

0xa654,	// (0x00024471) area_vitu2_query_pane_t1

0xa668,	// (0x00024485) area_vitu2_query_pane_t2_ParamLimits

0xa668,	// (0x00024485) area_vitu2_query_pane_t2

0xa67c,	// (0x00024499) area_vitu2_query_pane_t3_ParamLimits

0xa67c,	// (0x00024499) area_vitu2_query_pane_t3

0x1725,	// (0x0001b542) area_vitu2_query_pane_t4_ParamLimits

0x1725,	// (0x0001b542) area_vitu2_query_pane_t4

0x174d,	// (0x0001b56a) area_vitu2_query_pane_t5_ParamLimits

0x174d,	// (0x0001b56a) area_vitu2_query_pane_t5

0x1775,	// (0x0001b592) area_vitu2_query_pane_t6_ParamLimits

0x1775,	// (0x0001b592) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0002989c) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0002989c) area_vitu2_query_pane_t

0xa6a4,	// (0x000244c1) bg_button_pane_cp018

0xa6b2,	// (0x000244cf) bg_button_pane_cp021

0xa6be,	// (0x000244db) bg_button_pane_cp022

0xa6cf,	// (0x000244ec) input_focus_pane_cp09

0x78a7,	// (0x000216c4) aid_size_touch_mv_arrow_left

0x78d2,	// (0x000216ef) aid_size_touch_mv_arrow_right

0x9ffc,	// (0x00023e19) main_cset_slider_pane_g16_ParamLimits

0x9ffc,	// (0x00023e19) main_cset_slider_pane_g16

0xa00a,	// (0x00023e27) main_cset_slider_pane_g17_ParamLimits

0xa00a,	// (0x00023e27) main_cset_slider_pane_g17

0xa5ea,	// (0x00024407) cell_cam4_burst_pane_g1_ParamLimits

0xc860,	// (0x0002667d) compa_mode_pane

0xa202,	// (0x0002401f) popup_vtel_slider_window_g3_ParamLimits

0xa202,	// (0x0002401f) popup_vtel_slider_window_g3

0xa216,	// (0x00024033) popup_vtel_slider_window_g4_ParamLimits

0xa216,	// (0x00024033) popup_vtel_slider_window_g4

0xa22a,	// (0x00024047) popup_vtel_slider_window_t1_ParamLimits

0xa22a,	// (0x00024047) popup_vtel_slider_window_t1

0x4542,	// (0x0001e35f) main_cl_pane

0x4a90,	// (0x0001e8ad) popup_imed_adjust2_window_ParamLimits

0xf02a,	// (0x00028e47) bg_tb_trans_pane_cp05_ParamLimits

0x093e,	// (0x0001a75b) popup_imed_adjust2_window_g1_ParamLimits

0x094d,	// (0x0001a76a) popup_imed_adjust2_window_g2_ParamLimits

0x094d,	// (0x0001a76a) popup_imed_adjust2_window_g2

0x0959,	// (0x0001a776) popup_imed_adjust2_window_g3_ParamLimits

0x0959,	// (0x0001a776) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00029607) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00029607) popup_imed_adjust2_window_g

0x0965,	// (0x0001a782) popup_imed_adjust2_window_t1_ParamLimits

0x097d,	// (0x0001a79a) slider_imed_adjust_pane_ParamLimits

0x0991,	// (0x0001a7ae) slider_imed_adjust_pane_g1_ParamLimits

0x09a1,	// (0x0001a7be) slider_imed_adjust_pane_g2_ParamLimits

0x09b1,	// (0x0001a7ce) slider_imed_adjust_pane_g3_ParamLimits

0x09c2,	// (0x0001a7df) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0002960e) slider_imed_adjust_pane_g_ParamLimits

0x537b,	// (0x0001f198) aid_touch_area_cam4_ParamLimits

0x537b,	// (0x0001f198) aid_touch_area_cam4

0x538b,	// (0x0001f1a8) battery_pane_cp01

0x5412,	// (0x0001f22f) main_camera4_pane_g6_ParamLimits

0x5412,	// (0x0001f22f) main_camera4_pane_g6

0x5430,	// (0x0001f24d) main_camera4_pane_t2_ParamLimits

0x5430,	// (0x0001f24d) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00029711) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00029711) main_camera4_pane_t

0x54a1,	// (0x0001f2be) aid_touch_area_vid4_ParamLimits

0x54a1,	// (0x0001f2be) aid_touch_area_vid4

0x54e1,	// (0x0001f2fe) main_video4_pane_g5_ParamLimits

0x54e1,	// (0x0001f2fe) main_video4_pane_g5

0x5503,	// (0x0001f320) vid4_progress_pane_ParamLimits

0x5503,	// (0x0001f320) vid4_progress_pane

0x137a,	// (0x0001b197) main_cset_slider_pane_g18_ParamLimits

0x137a,	// (0x0001b197) main_cset_slider_pane_g18

0x15e7,	// (0x0001b404) cell_cam4_burst_pane_g2_ParamLimits

0x15e7,	// (0x0001b404) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00029870) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00029870) cell_cam4_burst_pane_g

0xa6e0,	// (0x000244fd) bg_cl_pane_ParamLimits

0xa6e0,	// (0x000244fd) bg_cl_pane

0xa6ec,	// (0x00024509) cl_header_pane_ParamLimits

0xa6ec,	// (0x00024509) cl_header_pane

0xa6f8,	// (0x00024515) cl_listscroll_pane_ParamLimits

0xa6f8,	// (0x00024515) cl_listscroll_pane

0x17c1,	// (0x0001b5de) bg_cl_pane_g1

0x17c9,	// (0x0001b5e6) bg_cl_pane_g2

0x17d1,	// (0x0001b5ee) bg_cl_pane_g3

0x17d9,	// (0x0001b5f6) bg_cl_pane_g4

0x17e1,	// (0x0001b5fe) bg_cl_pane_g5

0x17e9,	// (0x0001b606) bg_cl_pane_g6

0x17f1,	// (0x0001b60e) bg_cl_pane_g7

0x17f9,	// (0x0001b616) bg_cl_pane_g8

0x1801,	// (0x0001b61e) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x000298ab) bg_cl_pane_g

0xa704,	// (0x00024521) aid_height_cl_leading_ParamLimits

0xa704,	// (0x00024521) aid_height_cl_leading

0xa710,	// (0x0002452d) aid_height_cl_text_ParamLimits

0xa710,	// (0x0002452d) aid_height_cl_text

0x984b,	// (0x00023668) bg_cl_header_pane_ParamLimits

0x984b,	// (0x00023668) bg_cl_header_pane

0xa728,	// (0x00024545) cl_header_pane_g1_ParamLimits

0xa728,	// (0x00024545) cl_header_pane_g1

0xa735,	// (0x00024552) cl_header_pane_t1_ParamLimits

0xa735,	// (0x00024552) cl_header_pane_t1

0x1809,	// (0x0001b626) cl_list_pane

0x134d,	// (0x0001b16a) hc_scroll_pane_cp01

0xd4aa,	// (0x000272c7) bg_cl_header_pane_g1

0x1233,	// (0x0001b050) bg_cl_header_pane_g2

0xd4ca,	// (0x000272e7) bg_cl_header_pane_g3

0x1243,	// (0x0001b060) bg_cl_header_pane_g4

0x123b,	// (0x0001b058) bg_cl_header_pane_g5

0x14bc,	// (0x0001b2d9) bg_cl_header_pane_g6

0x125b,	// (0x0001b078) bg_cl_header_pane_g7

0x1263,	// (0x0001b080) bg_cl_header_pane_g8

0x1253,	// (0x0001b070) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x000298be) bg_cl_header_pane_g

0xa747,	// (0x00024564) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa747,	// (0x00024564) hc_cl_list_double_graphic_heading_pane

0xa75e,	// (0x0002457b) hc_cl_list_single_graphic_pane_ParamLimits

0xa75e,	// (0x0002457b) hc_cl_list_single_graphic_pane

0xa77e,	// (0x0002459b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa77e,	// (0x0002459b) hc_cl_list_single_graphic_pane_g1

0xa78a,	// (0x000245a7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa78a,	// (0x000245a7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x000298d1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x000298d1) hc_cl_list_single_graphic_pane_g

0xa79e,	// (0x000245bb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa79e,	// (0x000245bb) hc_cl_list_single_graphic_pane_t1

0xa77e,	// (0x0002459b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa77e,	// (0x0002459b) hc_cl_list_double_graphic_heading_pane_g1

0xa7b3,	// (0x000245d0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa7b3,	// (0x000245d0) hc_cl_list_double_graphic_heading_pane_g2

0xa7c7,	// (0x000245e4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa7c7,	// (0x000245e4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x000298d6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x000298d6) hc_cl_list_double_graphic_heading_pane_g

0xa7db,	// (0x000245f8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa7db,	// (0x000245f8) hc_cl_list_double_graphic_heading_pane_t1

0xa7f0,	// (0x0002460d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa7f0,	// (0x0002460d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000298dd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000298dd) hc_cl_list_double_graphic_heading_pane_t

0x5a1c,	// (0x0001f839) vid4_progress_pane_g1

0x5a2e,	// (0x0001f84b) vid4_progress_pane_g2

0xd715,	// (0x00027532) vid4_progress_pane_g3

0x5a40,	// (0x0001f85d) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000298e2) vid4_progress_pane_g

0x5a5e,	// (0x0001f87b) vid4_progress_pane_t1

0x5a73,	// (0x0001f890) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000298ed) vid4_progress_pane_t

0x5a9e,	// (0x0001f8bb) wait_bar_pane_cp07

0x01f1,	// (0x0001a00e) blid_firmament_pane_ParamLimits

0x0234,	// (0x0001a051) popup_blid_sat_info2_window_g1

0x0258,	// (0x0001a075) popup_blid_sat_info2_window_t3

0x0266,	// (0x0001a083) popup_blid_sat_info2_window_t4

0x0274,	// (0x0001a091) popup_blid_sat_info2_window_t5

0x0282,	// (0x0001a09f) popup_blid_sat_info2_window_t6

0x0292,	// (0x0001a0af) popup_blid_sat_info2_window_t7

0x02a0,	// (0x0001a0bd) popup_blid_sat_info2_window_t8

0x02ae,	// (0x0001a0cb) popup_blid_sat_info2_window_t9

0x02bc,	// (0x0001a0d9) popup_blid_sat_info2_window_t10

0x0380,	// (0x0001a19d) aid_firma_cardinal_ParamLimits

0x0394,	// (0x0001a1b1) blid_firmament_pane_t1_ParamLimits

0x03ab,	// (0x0001a1c8) blid_firmament_pane_t2_ParamLimits

0x03c2,	// (0x0001a1df) blid_firmament_pane_t3_ParamLimits

0x03d9,	// (0x0001a1f6) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00029500) blid_firmament_pane_t_ParamLimits

0x03f0,	// (0x0001a20d) blid_sat_info_pane_ParamLimits

0x49f6,	// (0x0001e813) main_cam_set_pane_ParamLimits

0x96da,	// (0x000234f7) aid_size_cell_colour_35_ParamLimits

0x96f4,	// (0x00023511) aid_size_cell_colour_112_ParamLimits

0x970b,	// (0x00023528) aid_size_cell_effect_ParamLimits

0xcad0,	// (0x000268ed) bg_tb_trans_pane_cp02_ParamLimits

0xd794,	// (0x000275b1) heading_imed_pane_ParamLimits

0x9725,	// (0x00023542) listscroll_imed_pane_ParamLimits

0xe654,	// (0x00028471) popup_call2_audio_first_window_g5_ParamLimits

0xe654,	// (0x00028471) popup_call2_audio_first_window_g5

0x5206,	// (0x0001f023) aid_size_touch_image3_arrow_left_ParamLimits

0x5206,	// (0x0001f023) aid_size_touch_image3_arrow_left

0x521c,	// (0x0001f039) aid_size_touch_image3_arrow_right_ParamLimits

0x521c,	// (0x0001f039) aid_size_touch_image3_arrow_right

0x5a89,	// (0x0001f8a6) vid4_progress_pane_t3

0x99da,	// (0x000237f7) main_hwr_training_symbol_option_pane_ParamLimits

0x99da,	// (0x000237f7) main_hwr_training_symbol_option_pane

0x0c2b,	// (0x0001aa48) popup_hwr_training_preview_window_ParamLimits

0x0c2b,	// (0x0001aa48) popup_hwr_training_preview_window

0x4f06,	// (0x0001ed23) hwr_training_navi_pane_g5_ParamLimits

0x4f06,	// (0x0001ed23) hwr_training_navi_pane_g5

0x1221,	// (0x0001b03e) popup_char_count_window

0x4534,	// (0x0001e351) bg_popup_sub_pane_cp20_ParamLimits

0x595d,	// (0x0001f77a) list_vitu2_match_list_pane_ParamLimits

0x5969,	// (0x0001f786) vitu2_page_scroll_pane_ParamLimits

0x5969,	// (0x0001f786) vitu2_page_scroll_pane

0x18ee,	// (0x0001b70b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x18ee,	// (0x0001b70b) list_single_hwr_training_symbol_option_pane

0x1901,	// (0x0001b71e) list_single_hwr_training_symbol_option_pane_g1

0x1909,	// (0x0001b726) list_single_hwr_training_symbol_option_pane_t1

0x1917,	// (0x0001b734) bg_button_pane_cp023

0x1920,	// (0x0001b73d) bg_button_pane_cp024

0xa805,	// (0x00024622) vitu2_page_scroll_pane_g1

0xa80d,	// (0x0002462a) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000298f4) vitu2_page_scroll_pane_g

0xa815,	// (0x00024632) vitu2_page_scroll_pane_t1

0x010d,	// (0x00019f2a) popup_char_count_window_g1

0x1953,	// (0x0001b770) popup_char_count_window_g2

0x195c,	// (0x0001b779) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000298f9) popup_char_count_window_g

0x1965,	// (0x0001b782) popup_char_count_window_t1

0x4542,	// (0x0001e35f) main_vded2_pane

0x092a,	// (0x0001a747) aid_size_cell_imed_line

0x0934,	// (0x0001a751) grid_imed_line_width_pane

0x556f,	// (0x0001f38c) vid4_indicators_pane_g4

0x1973,	// (0x0001b790) cell_imed_line_width_pane_ParamLimits

0x1973,	// (0x0001b790) cell_imed_line_width_pane

0x1987,	// (0x0001b7a4) cell_imed_line_width_pane_g1

0x1990,	// (0x0001b7ad) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00029900) cell_imed_line_width_pane_g

0xa824,	// (0x00024641) main_vded2_pane_g1_ParamLimits

0xa824,	// (0x00024641) main_vded2_pane_g1

0xa831,	// (0x0002464e) main_vded2_pane_g2_ParamLimits

0xa831,	// (0x0002464e) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00029905) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00029905) main_vded2_pane_g

0xa83f,	// (0x0002465c) vded2_slider_pane_ParamLimits

0xa83f,	// (0x0002465c) vded2_slider_pane

0xa84c,	// (0x00024669) aid_size_touch_vded2_end

0xa856,	// (0x00024673) aid_size_touch_vded2_playhead

0x1998,	// (0x0001b7b5) aid_size_touch_vded2_start

0x19a0,	// (0x0001b7bd) vded2_slider_bg_pane

0x19a9,	// (0x0001b7c6) vded2_slider_pane_g1

0x19b2,	// (0x0001b7cf) vded2_slider_pane_g2

0xa85e,	// (0x0002467b) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0002990a) vded2_slider_pane_g

0x19ba,	// (0x0001b7d7) vded2_slider_bg_pane_g1

0x19c3,	// (0x0001b7e0) vded2_slider_bg_pane_g2

0x19cc,	// (0x0001b7e9) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00029911) vded2_slider_bg_pane_g

0x7f59,	// (0x00021d76) aid_postcard_touch_down_pane_ParamLimits

0x7f59,	// (0x00021d76) aid_postcard_touch_down_pane

0x7f69,	// (0x00021d86) aid_postcard_touch_up_pane_ParamLimits

0x7f69,	// (0x00021d86) aid_postcard_touch_up_pane

0x4542,	// (0x0001e35f) main_blid2_pane

0x4a1f,	// (0x0001e83c) popup_blid2_search_window

0xc860,	// (0x0002667d) blid2_gps_pane

0xc860,	// (0x0002667d) blid2_navig_pane

0xc860,	// (0x0002667d) blid2_search_pane

0xc860,	// (0x0002667d) blid2_tripm_pane

0xa867,	// (0x00024684) blid2_search_pane_g1_ParamLimits

0xa867,	// (0x00024684) blid2_search_pane_g1

0xa877,	// (0x00024694) blid2_search_pane_t1_ParamLimits

0xa877,	// (0x00024694) blid2_search_pane_t1

0xa889,	// (0x000246a6) aid_size_cell_blid2_gps_ParamLimits

0xa889,	// (0x000246a6) aid_size_cell_blid2_gps

0xa899,	// (0x000246b6) blid2_gps_pane_g1_ParamLimits

0xa899,	// (0x000246b6) blid2_gps_pane_g1

0xa8a5,	// (0x000246c2) grid_blid2_satellite_pane_ParamLimits

0xa8a5,	// (0x000246c2) grid_blid2_satellite_pane

0xa8b5,	// (0x000246d2) blid2_navig_pane_g1_ParamLimits

0xa8b5,	// (0x000246d2) blid2_navig_pane_g1

0xa8c1,	// (0x000246de) blid2_navig_pane_t1_ParamLimits

0xa8c1,	// (0x000246de) blid2_navig_pane_t1

0xa8d3,	// (0x000246f0) blid2_navig_pane_t2_ParamLimits

0xa8d3,	// (0x000246f0) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00029918) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00029918) blid2_navig_pane_t

0xa8e5,	// (0x00024702) blid2_navig_ring_pane_ParamLimits

0xa8e5,	// (0x00024702) blid2_navig_ring_pane

0xa8f5,	// (0x00024712) blid2_speed_pane_ParamLimits

0xa8f5,	// (0x00024712) blid2_speed_pane

0xa901,	// (0x0002471e) blid2_tripm_pane_g1_ParamLimits

0xa901,	// (0x0002471e) blid2_tripm_pane_g1

0xa911,	// (0x0002472e) blid2_tripm_pane_g2_ParamLimits

0xa911,	// (0x0002472e) blid2_tripm_pane_g2

0xa91d,	// (0x0002473a) blid2_tripm_pane_g3_ParamLimits

0xa91d,	// (0x0002473a) blid2_tripm_pane_g3

0xa929,	// (0x00024746) blid2_tripm_pane_g4_ParamLimits

0xa929,	// (0x00024746) blid2_tripm_pane_g4

0xa935,	// (0x00024752) blid2_tripm_pane_g5_ParamLimits

0xa935,	// (0x00024752) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0002991d) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0002991d) blid2_tripm_pane_g

0xa951,	// (0x0002476e) blid2_tripm_pane_t1_ParamLimits

0xa951,	// (0x0002476e) blid2_tripm_pane_t1

0xa965,	// (0x00024782) blid2_tripm_pane_t2_ParamLimits

0xa965,	// (0x00024782) blid2_tripm_pane_t2

0xa979,	// (0x00024796) blid2_tripm_pane_t3_ParamLimits

0xa979,	// (0x00024796) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0002992a) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0002992a) blid2_tripm_pane_t

0xa9ab,	// (0x000247c8) cell_blid2_satellite_pane_ParamLimits

0xa9ab,	// (0x000247c8) cell_blid2_satellite_pane

0xa9c5,	// (0x000247e2) cell_blid2_satellite_pane_g1

0x19d5,	// (0x0001b7f2) cell_blid2_satellite_pane_t1

0x0400,	// (0x0001a21d) blid2_speed_pane_g1

0x19e3,	// (0x0001b800) blid2_speed_pane_t1

0x19f1,	// (0x0001b80e) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00029933) blid2_speed_pane_t

0x0400,	// (0x0001a21d) blid2_navig_ring_pane_g1

0xa9ce,	// (0x000247eb) blid2_navig_ring_pane_g2

0xa9d6,	// (0x000247f3) blid2_navig_ring_pane_g3

0xa9de,	// (0x000247fb) blid2_navig_ring_pane_g4

0xa9e6,	// (0x00024803) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00029938) blid2_navig_ring_pane_g

0xc860,	// (0x0002667d) bg_popup_window_pane_cp011

0x19ff,	// (0x0001b81c) popup_blid2_search_window_g1

0x1a07,	// (0x0001b824) popup_blid2_search_window_t1

0x1a15,	// (0x0001b832) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00029943) popup_blid2_search_window_t

0xd3b9,	// (0x000271d6) main_browser_pane_g1

0xcffb,	// (0x00026e18) main_browser_pane_ParamLimits

0x49f6,	// (0x0001e813) bg_button_pane_cp011_ParamLimits

0x587f,	// (0x0001f69c) cell_vitu2_function_pane_g1_ParamLimits

0xf02a,	// (0x00028e47) bg_popup_sub_pane_cp22_ParamLimits

0xa393,	// (0x000241b0) input_focus_pane_cp08_ParamLimits

0xa3aa,	// (0x000241c7) popup_vitu2_query_button_pane_ParamLimits

0xa3aa,	// (0x000241c7) popup_vitu2_query_button_pane

0xa3bb,	// (0x000241d8) popup_vitu2_query_input_button_pane

0x1531,	// (0x0001b34e) popup_vitu2_query_window_g1_ParamLimits

0xa3c5,	// (0x000241e2) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00029844) popup_vitu2_query_window_g_ParamLimits

0xc860,	// (0x0002667d) bg_button_pane_cp026

0xa9ee,	// (0x0002480b) popup_vitu2_query_input_button_pane_g1

0xc860,	// (0x0002667d) bg_button_pane_cp025

0x1a23,	// (0x0001b840) popup_vitu2_query_button_pane_t1

0x8c94,	// (0x00022ab1) main_mp3_pane_t6

0x8ca4,	// (0x00022ac1) popup_slider_window_cp01

0x5450,	// (0x0001f26d) cam4_battery_pane

0x552e,	// (0x0001f34b) cam4_battery_pane_cp02

0x5a14,	// (0x0001f831) cam4_battery_pane_cp01

0x5a14,	// (0x0001f831) cam4_battery_pane_cp03

0x1a31,	// (0x0001b84e) cam4_battery_pane_g1

0x0400,	// (0x0001a21d) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00029948) cam4_battery_pane_g

0x02ca,	// (0x0001a0e7) popup_blid_sat_info2_window_t11

0x78a7,	// (0x000216c4) aid_size_touch_mv_arrow_left_ParamLimits

0x78d2,	// (0x000216ef) aid_size_touch_mv_arrow_right_ParamLimits

0xdb3f,	// (0x0002795c) navi_pane_g1_ParamLimits

0x7911,	// (0x0002172e) navi_pane_g2_ParamLimits

0x793f,	// (0x0002175c) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00029212) navi_pane_g_ParamLimits

0x7999,	// (0x000217b6) navi_pane_mv_t1_ParamLimits

0x9731,	// (0x0002354e) grid_imed_effect_pane_ParamLimits

0x65a4,	// (0x000203c1) aid_placing_vt_slider_lsc

0xd308,	// (0x00027125) aid_placing_vt_slider_prt

0xcad0,	// (0x000268ed) bg_tb_trans_pane_cp01_ParamLimits

0x0587,	// (0x0001a3a4) popup_image_details_window_g1_ParamLimits

0x059a,	// (0x0001a3b7) popup_image_details_window_g2_ParamLimits

0x05af,	// (0x0001a3cc) popup_image_details_window_g3_ParamLimits

0x05af,	// (0x0001a3cc) popup_image_details_window_g3

0xf728,	// (0x00029545) popup_image_details_window_g_ParamLimits

0x05c3,	// (0x0001a3e0) popup_image_details_window_t1_ParamLimits

0x05d5,	// (0x0001a3f2) popup_image_details_window_t2_ParamLimits

0x05ee,	// (0x0001a40b) popup_image_details_window_t3_ParamLimits

0x0602,	// (0x0001a41f) popup_image_details_window_t4_ParamLimits

0x061d,	// (0x0001a43a) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0002954c) popup_image_details_window_t_ParamLimits

0xa71c,	// (0x00024539) cl_header_name_pane_ParamLimits

0xa71c,	// (0x00024539) cl_header_name_pane

0xa9f6,	// (0x00024813) cl_header_name_pane_t1_ParamLimits

0xa9f6,	// (0x00024813) cl_header_name_pane_t1

0xaa0d,	// (0x0002482a) cl_header_name_pane_t2_ParamLimits

0xaa0d,	// (0x0002482a) cl_header_name_pane_t2

0xaa37,	// (0x00024854) cl_header_name_pane_t3_ParamLimits

0xaa37,	// (0x00024854) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0002994d) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0002994d) cl_header_name_pane_t

0x796a,	// (0x00021787) navi_pane_mv_g2_ParamLimits

0x11ad,	// (0x0001afca) field_vitu2_entry_pane_g1_ParamLimits

0x11b9,	// (0x0001afd6) field_vitu2_entry_pane_g2_ParamLimits

0x11c5,	// (0x0001afe2) field_vitu2_entry_pane_g3_ParamLimits

0x11c5,	// (0x0001afe2) field_vitu2_entry_pane_g3

0xf926,	// (0x00029743) field_vitu2_entry_pane_g_ParamLimits

0x5754,	// (0x0001f571) cell_vitu2_itu_pane_g1_ParamLimits

0x5764,	// (0x0001f581) cell_vitu2_itu_pane_g2_ParamLimits

0x5764,	// (0x0001f581) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0002974f) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0002974f) cell_vitu2_itu_pane_g

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp05_ParamLimits

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp05

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp03

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp04

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp10_ParamLimits

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp10

0xa6be,	// (0x000244db) bg_vkb2_func_pane_cp08

0xa6a4,	// (0x000244c1) bg_vkb2_func_pane_cp06

0xa6b2,	// (0x000244cf) bg_vkb2_func_pane_cp07

0x1929,	// (0x0001b746) bg_vkb2_func_pane_cp11_ParamLimits

0x1929,	// (0x0001b746) bg_vkb2_func_pane_cp11

0x193e,	// (0x0001b75b) bg_vkb2_func_pane_cp12_ParamLimits

0x193e,	// (0x0001b75b) bg_vkb2_func_pane_cp12

0xc860,	// (0x0002667d) bg_vkb2_func_pane_cp09

0x1233,	// (0x0001b050) bg_vkb2_func_pane_g1

0xd4ca,	// (0x000272e7) bg_vkb2_func_pane_g2

0x123b,	// (0x0001b058) bg_vkb2_func_pane_g3

0x1243,	// (0x0001b060) bg_vkb2_func_pane_g4

0x14bc,	// (0x0001b2d9) bg_vkb2_func_pane_g5

0x125b,	// (0x0001b078) bg_vkb2_func_pane_g6

0x1263,	// (0x0001b080) bg_vkb2_func_pane_g7

0x1253,	// (0x0001b070) bg_vkb2_func_pane_g8

0xd4aa,	// (0x000272c7) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00029954) bg_vkb2_func_pane_g

0xa943,	// (0x00024760) blid2_tripm_pane_g6_ParamLimits

0xa943,	// (0x00024760) blid2_tripm_pane_g6

0x0f1c,	// (0x0001ad39) mp4_progress_pane_g1

0xa99f,	// (0x000247bc) blid2_tripm_values_pane_ParamLimits

0xa99f,	// (0x000247bc) blid2_tripm_values_pane

0xaa5c,	// (0x00024879) blid2_tripm_values_pane_t1

0xaa6a,	// (0x00024887) blid2_tripm_values_pane_t2

0xaa78,	// (0x00024895) blid2_tripm_values_pane_t3

0xaa86,	// (0x000248a3) blid2_tripm_values_pane_t4

0xaa94,	// (0x000248b1) blid2_tripm_values_pane_t5

0xaaa2,	// (0x000248bf) blid2_tripm_values_pane_t6

0xaab0,	// (0x000248cd) blid2_tripm_values_pane_t7

0xaabe,	// (0x000248db) blid2_tripm_values_pane_t8

0xaacc,	// (0x000248e9) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00029967) blid2_tripm_values_pane_t

0x65e4,	// (0x00020401) call_video_pane_t1_ParamLimits

0x6605,	// (0x00020422) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0002909b) call_video_pane_t_ParamLimits

0x7ec2,	// (0x00021cdf) msg_header_pane_g1_ParamLimits

0xdd68,	// (0x00027b85) msg_header_pane_g2_ParamLimits

0xdd68,	// (0x00027b85) msg_header_pane_g2

0x0001,

0xf498,	// (0x000292b5) msg_header_pane_g_ParamLimits

0xf498,	// (0x000292b5) msg_header_pane_g

0xcffb,	// (0x00026e18) main_clock2_pane_ParamLimits

0x953f,	// (0x0002335c) grid_clock2_toolbar_pane_ParamLimits

0x953f,	// (0x0002335c) grid_clock2_toolbar_pane

0x953f,	// (0x0002335c) listscroll_clock2_pane_ParamLimits

0x953f,	// (0x0002335c) listscroll_clock2_pane

0x95dc,	// (0x000233f9) main_clock2_pane_t3_ParamLimits

0x95dc,	// (0x000233f9) main_clock2_pane_t3

0x95ee,	// (0x0002340b) main_clock2_pane_t4_ParamLimits

0x95ee,	// (0x0002340b) main_clock2_pane_t4

0x1a3b,	// (0x0001b858) cell_clock2_toolbar_pane

0x1a43,	// (0x0001b860) cell_clock2_toolbar_pane_cp01

0x1a43,	// (0x0001b860) cell_clock2_toolbar_pane_cp02

0x1a4b,	// (0x0001b868) cell_clock2_toolbar_pane_cp03

0x1a53,	// (0x0001b870) list_clock2_pane

0xda92,	// (0x000278af) scroll_pane_cp10

0x1a5b,	// (0x0001b878) list_single_clock2_pane_ParamLimits

0x1a5b,	// (0x0001b878) list_single_clock2_pane

0xdbdf,	// (0x000279fc) list_highlight_pane_cp08

0x1a68,	// (0x0001b885) list_single_clock2_pane_t1

0x1a76,	// (0x0001b893) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0002997a) list_single_clock2_pane_t

0xc860,	// (0x0002667d) bg_button_pane_cp10

0x1a84,	// (0x0001b8a1) cell_clock2_toolbar_pane_g1

0x4985,	// (0x0001e7a2) aid_main_viewer_pane_g1_ParamLimits

0x4985,	// (0x0001e7a2) aid_main_viewer_pane_g1

0x4991,	// (0x0001e7ae) aid_main_viewer_pane_g2_ParamLimits

0x4991,	// (0x0001e7ae) aid_main_viewer_pane_g2

0x7f15,	// (0x00021d32) aid_main_viewer_pane_g3_ParamLimits

0x7f15,	// (0x00021d32) aid_main_viewer_pane_g3

0x7f26,	// (0x00021d43) aid_main_viewer_pane_g4_ParamLimits

0x7f26,	// (0x00021d43) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000292c6) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000292c6) aid_main_viewer_pane_g

0x49e9,	// (0x0001e806) main_calc_pane_ParamLimits

0x4a04,	// (0x0001e821) main_dialer2_pane_ParamLimits

0x4542,	// (0x0001e35f) main_cam6_pane

0x4542,	// (0x0001e35f) main_vid6_pane

0x954b,	// (0x00023368) listscroll_gen_pane_cp06_ParamLimits

0x954b,	// (0x00023368) listscroll_gen_pane_cp06

0x9600,	// (0x0002341d) main_clock2_pane_t5_ParamLimits

0x9600,	// (0x0002341d) main_clock2_pane_t5

0x964f,	// (0x0002346c) aid_call2_pane_cp10_ParamLimits

0x9661,	// (0x0002347e) aid_call_pane_cp10_ParamLimits

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9673,	// (0x00023490) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9673,	// (0x00023490) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb14,	// (0x00027931) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000295fc) popup_clock_analogue_window_cp10_g_ParamLimits

0x9689,	// (0x000234a6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9abd,	// (0x000238da) cell_dialer2_keypad_pane_g2_ParamLimits

0x9abd,	// (0x000238da) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x000296e2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x000296e2) cell_dialer2_keypad_pane_g

0x9ad9,	// (0x000238f6) cell_dialer2_keypad_pane_t1

0x9ee2,	// (0x00023cff) main_cset_text2_pane_ParamLimits

0x9ee2,	// (0x00023cff) main_cset_text2_pane

0x1719,	// (0x0001b536) area_vitu2_query_pane_g1_ParamLimits

0xa643,	// (0x00024460) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00029897) area_vitu2_query_pane_g_ParamLimits

0x179d,	// (0x0001b5ba) area_vitu2_query_pane_t7_ParamLimits

0x179d,	// (0x0001b5ba) area_vitu2_query_pane_t7

0xa6a4,	// (0x000244c1) bg_button_pane_cp018_ParamLimits

0xa6b2,	// (0x000244cf) bg_button_pane_cp021_ParamLimits

0xa6be,	// (0x000244db) bg_button_pane_cp022_ParamLimits

0xa6be,	// (0x000244db) bg_vkb2_func_pane_cp08_ParamLimits

0xa6a4,	// (0x000244c1) bg_vkb2_func_pane_cp06_ParamLimits

0xa6b2,	// (0x000244cf) bg_vkb2_func_pane_cp07_ParamLimits

0xa6cf,	// (0x000244ec) input_focus_pane_cp09_ParamLimits

0x5aae,	// (0x0001f8cb) cam6_autofocus_pane_ParamLimits

0x5aae,	// (0x0001f8cb) cam6_autofocus_pane

0x5ad0,	// (0x0001f8ed) cam6_image_uncrop_pane_ParamLimits

0x5ad0,	// (0x0001f8ed) cam6_image_uncrop_pane

0x5afd,	// (0x0001f91a) cam6_indi_pane_ParamLimits

0x5afd,	// (0x0001f91a) cam6_indi_pane

0x5b17,	// (0x0001f934) cam6_mode_pane_ParamLimits

0x5b17,	// (0x0001f934) cam6_mode_pane

0x5b2b,	// (0x0001f948) cam6_timer_pane_ParamLimits

0x5b2b,	// (0x0001f948) cam6_timer_pane

0x5b37,	// (0x0001f954) cam6_zoom_pane_ParamLimits

0x5b37,	// (0x0001f954) cam6_zoom_pane

0xaada,	// (0x000248f7) cam6_mode_pane_g1_ParamLimits

0xaada,	// (0x000248f7) cam6_mode_pane_g1

0xaae6,	// (0x00024903) cam6_mode_pane_g2_ParamLimits

0xaae6,	// (0x00024903) cam6_mode_pane_g2

0xaaf2,	// (0x0002490f) cam6_mode_pane_g3_ParamLimits

0xaaf2,	// (0x0002490f) cam6_mode_pane_g3

0xaafe,	// (0x0002491b) cam6_mode_pane_g4_ParamLimits

0xaafe,	// (0x0002491b) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0002997f) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0002997f) cam6_mode_pane_g

0x1a9a,	// (0x0001b8b7) bg_tb_trans_pane_cp08_ParamLimits

0x1a9a,	// (0x0001b8b7) bg_tb_trans_pane_cp08

0x1aa8,	// (0x0001b8c5) cam6_battery_pane_ParamLimits

0x1aa8,	// (0x0001b8c5) cam6_battery_pane

0x1abe,	// (0x0001b8db) cam6_indi_pane_g1_ParamLimits

0x1abe,	// (0x0001b8db) cam6_indi_pane_g1

0x1ad0,	// (0x0001b8ed) cam6_indi_pane_g2_ParamLimits

0x1ad0,	// (0x0001b8ed) cam6_indi_pane_g2

0x1ae2,	// (0x0001b8ff) cam6_indi_pane_g3_ParamLimits

0x1ae2,	// (0x0001b8ff) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00029988) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00029988) cam6_indi_pane_g

0x1af4,	// (0x0001b911) cam6_indi_pane_t1_ParamLimits

0x1af4,	// (0x0001b911) cam6_indi_pane_t1

0x9c18,	// (0x00023a35) cam6_autofocus_pane_g1

0x9c10,	// (0x00023a2d) cam6_autofocus_pane_g2

0x9c28,	// (0x00023a45) cam6_autofocus_pane_g3

0x9c20,	// (0x00023a3d) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0002998f) cam6_autofocus_pane_g

0x1b1a,	// (0x0001b937) cam6_timer_pane_g1

0x1b22,	// (0x0001b93f) cam6_timer_pane_t1

0x1b30,	// (0x0001b94d) cam6_zoom_cont_pane

0x1b38,	// (0x0001b955) cam6_zoom_pane_g1

0x1b40,	// (0x0001b95d) cam6_zoom_pane_g2

0xab0a,	// (0x00024927) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00029998) cam6_zoom_pane_g

0x0400,	// (0x0001a21d) cam6_battery_pane_g1

0x0400,	// (0x0001a21d) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00029509) cam6_battery_pane_g

0x1b48,	// (0x0001b965) cam6_zoom_cont_pane_g1

0x1b51,	// (0x0001b96e) cam6_zoom_cont_pane_g2

0x1b5a,	// (0x0001b977) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0002999f) cam6_zoom_cont_pane_g

0xab27,	// (0x00024944) cam6_mode_pane_cp_ParamLimits

0xab27,	// (0x00024944) cam6_mode_pane_cp

0xab3b,	// (0x00024958) cam6_zoom_pane_cp_ParamLimits

0xab3b,	// (0x00024958) cam6_zoom_pane_cp

0xab53,	// (0x00024970) vid6_image_uncrop_cif_pane_ParamLimits

0xab53,	// (0x00024970) vid6_image_uncrop_cif_pane

0xab7f,	// (0x0002499c) vid6_image_uncrop_nhd_pane_ParamLimits

0xab7f,	// (0x0002499c) vid6_image_uncrop_nhd_pane

0xab9c,	// (0x000249b9) vid6_image_uncrop_vga_pane_ParamLimits

0xab9c,	// (0x000249b9) vid6_image_uncrop_vga_pane

0xabbb,	// (0x000249d8) vid6_image_uncrop_wvga_pane_ParamLimits

0xabbb,	// (0x000249d8) vid6_image_uncrop_wvga_pane

0xabd8,	// (0x000249f5) vid6_indi_pane_ParamLimits

0xabd8,	// (0x000249f5) vid6_indi_pane

0x1a9a,	// (0x0001b8b7) bg_tb_trans_pane_cp09_ParamLimits

0x1a9a,	// (0x0001b8b7) bg_tb_trans_pane_cp09

0x1b72,	// (0x0001b98f) cam6_battery_pane_cp_ParamLimits

0x1b72,	// (0x0001b98f) cam6_battery_pane_cp

0x1b7e,	// (0x0001b99b) vid6_indi_pane_g1_ParamLimits

0x1b7e,	// (0x0001b99b) vid6_indi_pane_g1

0x1b90,	// (0x0001b9ad) vid6_indi_pane_g2_ParamLimits

0x1b90,	// (0x0001b9ad) vid6_indi_pane_g2

0x1ba2,	// (0x0001b9bf) vid6_indi_pane_g3_ParamLimits

0x1ba2,	// (0x0001b9bf) vid6_indi_pane_g3

0x1bb7,	// (0x0001b9d4) vid6_indi_pane_g4_ParamLimits

0x1bb7,	// (0x0001b9d4) vid6_indi_pane_g4

0x1bcc,	// (0x0001b9e9) vid6_indi_pane_g5_ParamLimits

0x1bcc,	// (0x0001b9e9) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x000299a6) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x000299a6) vid6_indi_pane_g

0x1be6,	// (0x0001ba03) vid6_indi_pane_t1_ParamLimits

0x1be6,	// (0x0001ba03) vid6_indi_pane_t1

0x1bfc,	// (0x0001ba19) vid6_indi_pane_t2_ParamLimits

0x1bfc,	// (0x0001ba19) vid6_indi_pane_t2

0x1c24,	// (0x0001ba41) vid6_indi_pane_t3_ParamLimits

0x1c24,	// (0x0001ba41) vid6_indi_pane_t3

0x1c4c,	// (0x0001ba69) vid6_indi_pane_t4_ParamLimits

0x1c4c,	// (0x0001ba69) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x000299b1) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x000299b1) vid6_indi_pane_t

0x1c70,	// (0x0001ba8d) wait_bar_pane_cp08

0xabfb,	// (0x00024a18) main_cset_text2_pane_t1_ParamLimits

0xabfb,	// (0x00024a18) main_cset_text2_pane_t1

0xab12,	// (0x0002492f) listscroll_gen_pane_cp06_t1_ParamLimits

0xab12,	// (0x0002492f) listscroll_gen_pane_cp06_t1

0x4542,	// (0x0001e35f) main_cam6_set_pane

0x5442,	// (0x0001f25f) bg_tb_trans_pane_cp06_ParamLimits

0x5458,	// (0x0001f275) cam4_indicators_pane_g1_ParamLimits

0x5469,	// (0x0001f286) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0002971f) cam4_indicators_pane_g_ParamLimits

0x5487,	// (0x0001f2a4) cam4_indicators_pane_t1_ParamLimits

0x49f6,	// (0x0001e813) bg_tb_trans_pane_cp07_ParamLimits

0x5536,	// (0x0001f353) vid4_indicators_pane_g1_ParamLimits

0x554a,	// (0x0001f367) vid4_indicators_pane_g2_ParamLimits

0x555e,	// (0x0001f37b) vid4_indicators_pane_g3_ParamLimits

0x556f,	// (0x0001f38c) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00029731) vid4_indicators_pane_g_ParamLimits

0x558b,	// (0x0001f3a8) vid4_indicators_pane_t1_ParamLimits

0x5a1c,	// (0x0001f839) vid4_progress_pane_g1_ParamLimits

0x5a2e,	// (0x0001f84b) vid4_progress_pane_g2_ParamLimits

0xd715,	// (0x00027532) vid4_progress_pane_g3_ParamLimits

0x5a40,	// (0x0001f85d) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000298e2) vid4_progress_pane_g_ParamLimits

0x5a5e,	// (0x0001f87b) vid4_progress_pane_t1_ParamLimits

0x5a73,	// (0x0001f890) vid4_progress_pane_t2_ParamLimits

0x5a89,	// (0x0001f8a6) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000298ed) vid4_progress_pane_t_ParamLimits

0x5a9e,	// (0x0001f8bb) wait_bar_pane_cp07_ParamLimits

0xac39,	// (0x00024a56) main_cam6_set_pane_g2_ParamLimits

0xac39,	// (0x00024a56) main_cam6_set_pane_g2

0xac45,	// (0x00024a62) main_cset6_listscroll_pane_ParamLimits

0xac45,	// (0x00024a62) main_cset6_listscroll_pane

0xac70,	// (0x00024a8d) main_cset6_slider_pane_ParamLimits

0xac70,	// (0x00024a8d) main_cset6_slider_pane

0xac7c,	// (0x00024a99) main_cset6_text2_pane_ParamLimits

0xac7c,	// (0x00024a99) main_cset6_text2_pane

0x1c7f,	// (0x0001ba9c) main_cset6_text_pane

0x1c87,	// (0x0001baa4) main_cset_list_pane_copy1_ParamLimits

0x1c87,	// (0x0001baa4) main_cset_list_pane_copy1

0x1c97,	// (0x0001bab4) scroll_pane_cp028_copy1

0xac8f,	// (0x00024aac) cset_list_set_pane_copy1

0xaca9,	// (0x00024ac6) aid_position_infowindow_above_copy1

0xacb1,	// (0x00024ace) aid_position_infowindow_below_copy1

0x1ca0,	// (0x0001babd) cset_list_set_pane_g1_copy1

0x1ca8,	// (0x0001bac5) cset_list_set_pane_g3_copy1_ParamLimits

0x1ca8,	// (0x0001bac5) cset_list_set_pane_g3_copy1

0x1cb7,	// (0x0001bad4) cset_list_set_pane_t1_copy1_ParamLimits

0x1cb7,	// (0x0001bad4) cset_list_set_pane_t1_copy1

0xcad0,	// (0x000268ed) list_highlight_pane_cp021_copy1_ParamLimits

0xcad0,	// (0x000268ed) list_highlight_pane_cp021_copy1

0x1ccc,	// (0x0001bae9) cset6_slider_pane_ParamLimits

0x1ccc,	// (0x0001bae9) cset6_slider_pane

0x1cf8,	// (0x0001bb15) main_cset6_slider_pane_g1_ParamLimits

0x1cf8,	// (0x0001bb15) main_cset6_slider_pane_g1

0xacb9,	// (0x00024ad6) main_cset6_slider_pane_g2_ParamLimits

0xacb9,	// (0x00024ad6) main_cset6_slider_pane_g2

0x1362,	// (0x0001b17f) main_cset6_slider_pane_g3_ParamLimits

0x1362,	// (0x0001b17f) main_cset6_slider_pane_g3

0xace1,	// (0x00024afe) main_cset6_slider_pane_g4_ParamLimits

0xace1,	// (0x00024afe) main_cset6_slider_pane_g4

0xaced,	// (0x00024b0a) main_cset6_slider_pane_g5_ParamLimits

0xaced,	// (0x00024b0a) main_cset6_slider_pane_g5

0x1362,	// (0x0001b17f) main_cset6_slider_pane_g7_ParamLimits

0x1362,	// (0x0001b17f) main_cset6_slider_pane_g7

0x136e,	// (0x0001b18b) main_cset6_slider_pane_g8_ParamLimits

0x136e,	// (0x0001b18b) main_cset6_slider_pane_g8

0xacfb,	// (0x00024b18) main_cset6_slider_pane_g9_ParamLimits

0xacfb,	// (0x00024b18) main_cset6_slider_pane_g9

0xad07,	// (0x00024b24) main_cset6_slider_pane_g10_ParamLimits

0xad07,	// (0x00024b24) main_cset6_slider_pane_g10

0xace1,	// (0x00024afe) main_cset6_slider_pane_g11_ParamLimits

0xace1,	// (0x00024afe) main_cset6_slider_pane_g11

0xad13,	// (0x00024b30) main_cset6_slider_pane_g12_ParamLimits

0xad13,	// (0x00024b30) main_cset6_slider_pane_g12

0xad1f,	// (0x00024b3c) main_cset6_slider_pane_g13_ParamLimits

0xad1f,	// (0x00024b3c) main_cset6_slider_pane_g13

0xad2d,	// (0x00024b4a) main_cset6_slider_pane_g14_ParamLimits

0xad2d,	// (0x00024b4a) main_cset6_slider_pane_g14

0xad3b,	// (0x00024b58) main_cset6_slider_pane_g15_ParamLimits

0xad3b,	// (0x00024b58) main_cset6_slider_pane_g15

0xaced,	// (0x00024b0a) main_cset6_slider_pane_g16_ParamLimits

0xaced,	// (0x00024b0a) main_cset6_slider_pane_g16

0xad53,	// (0x00024b70) main_cset6_slider_pane_g17_ParamLimits

0xad53,	// (0x00024b70) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x000299ba) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x000299ba) main_cset6_slider_pane_g

0x1d20,	// (0x0001bb3d) main_cset6_slider_pane_t1_ParamLimits

0x1d20,	// (0x0001bb3d) main_cset6_slider_pane_t1

0xad61,	// (0x00024b7e) main_cset6_slider_pane_t2_ParamLimits

0xad61,	// (0x00024b7e) main_cset6_slider_pane_t2

0xad8c,	// (0x00024ba9) main_cset6_slider_pane_t3_ParamLimits

0xad8c,	// (0x00024ba9) main_cset6_slider_pane_t3

0xadb7,	// (0x00024bd4) main_cset6_slider_pane_t4_ParamLimits

0xadb7,	// (0x00024bd4) main_cset6_slider_pane_t4

0xade4,	// (0x00024c01) main_cset6_slider_pane_t5_ParamLimits

0xade4,	// (0x00024c01) main_cset6_slider_pane_t5

0x1d61,	// (0x0001bb7e) main_cset6_slider_pane_t7_ParamLimits

0x1d61,	// (0x0001bb7e) main_cset6_slider_pane_t7

0xae11,	// (0x00024c2e) main_cset6_slider_pane_t8_ParamLimits

0xae11,	// (0x00024c2e) main_cset6_slider_pane_t8

0xae35,	// (0x00024c52) main_cset6_slider_pane_t9_ParamLimits

0xae35,	// (0x00024c52) main_cset6_slider_pane_t9

0xae59,	// (0x00024c76) main_cset6_slider_pane_t10_ParamLimits

0xae59,	// (0x00024c76) main_cset6_slider_pane_t10

0xae7d,	// (0x00024c9a) main_cset6_slider_pane_t11_ParamLimits

0xae7d,	// (0x00024c9a) main_cset6_slider_pane_t11

0x1d97,	// (0x0001bbb4) main_cset6_slider_pane_t14_ParamLimits

0x1d97,	// (0x0001bbb4) main_cset6_slider_pane_t14

0x1dd0,	// (0x0001bbed) main_cset6_slider_pane_t15_ParamLimits

0x1dd0,	// (0x0001bbed) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x000299df) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x000299df) main_cset6_slider_pane_t

0x1446,	// (0x0001b263) cset_slider_pane_g1_copy1

0x144f,	// (0x0001b26c) cset_slider_pane_g2_copy1

0x1458,	// (0x0001b275) cset_slider_pane_g3_copy1

0xc860,	// (0x0002667d) bg_popup_sub_pane_cp011_copy1

0x1eda,	// (0x0001bcf7) main_cset_text_pane_g1_copy1

0x1545,	// (0x0001b362) main_cset_text_pane_t1_copy1

0x1553,	// (0x0001b370) main_cset_text_pane_t2_copy1

0x1561,	// (0x0001b37e) main_cset_text_pane_t3_copy1

0x156f,	// (0x0001b38c) main_cset_text_pane_t4_copy1

0x157d,	// (0x0001b39a) main_cset_text_pane_t5_copy1

0x1ee2,	// (0x0001bcff) main_cset_text_pane_t6_copy1

0x1ef0,	// (0x0001bd0d) main_cset_text_pane_t7_copy1

0xaea3,	// (0x00024cc0) main_cset_text2_pane_t1_copy1

0x49f6,	// (0x0001e813) main_ncimui_pane

0x4a55,	// (0x0001e872) popup_query_ncimui_window_ParamLimits

0x4a55,	// (0x0001e872) popup_query_ncimui_window

0x06cc,	// (0x0001a4e9) field_cale_ev2_pane_g4_ParamLimits

0x06cc,	// (0x0001a4e9) field_cale_ev2_pane_g4

0x9a5d,	// (0x0002387a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9a5d,	// (0x0002387a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x000296bd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x000296bd) cell_video_dialer_keypad_pane_g

0x9a75,	// (0x00023892) cell_video_dialer_keypad_pane_t1

0xc860,	// (0x0002667d) bg_popup_window_pane_cp012

0xd962,	// (0x0002777f) heading_pane_cp06

0x1f1c,	// (0x0001bd39) ncim_query_content_pane

0xc860,	// (0x0002667d) bg_popup_heading_pane_cp01

0x1f24,	// (0x0001bd41) ncim_heading_pane_t1

0x1f32,	// (0x0001bd4f) ncim_indicator_popup_pane

0x1f44,	// (0x0001bd61) ncim_query_button_pane

0x1f58,	// (0x0001bd75) ncim_query_content_pane_t1

0x1f6a,	// (0x0001bd87) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00029a23) ncim_query_content_pane_t

0x1fa4,	// (0x0001bdc1) ncim_query_list_pane

0x1fb6,	// (0x0001bdd3) ncim_query_popup_pane

0x1f32,	// (0x0001bd4f) ncim_indicator_popup_pane_ParamLimits

0xb001,	// (0x00024e1e) ncim_query_content_pane_g1_ParamLimits

0xb001,	// (0x00024e1e) ncim_query_content_pane_g1

0x1f58,	// (0x0001bd75) ncim_query_content_pane_t1_ParamLimits

0x1f6a,	// (0x0001bd87) ncim_query_content_pane_t2_ParamLimits

0xb00d,	// (0x00024e2a) ncim_query_content_pane_t3_ParamLimits

0xb00d,	// (0x00024e2a) ncim_query_content_pane_t3

0xb02a,	// (0x00024e47) ncim_query_content_pane_t4_ParamLimits

0xb02a,	// (0x00024e47) ncim_query_content_pane_t4

0xb047,	// (0x00024e64) ncim_query_content_pane_t5_ParamLimits

0xb047,	// (0x00024e64) ncim_query_content_pane_t5

0x1f7c,	// (0x0001bd99) ncim_query_content_pane_t6_ParamLimits

0x1f7c,	// (0x0001bd99) ncim_query_content_pane_t6

0xfc06,	// (0x00029a23) ncim_query_content_pane_t_ParamLimits

0x1fa4,	// (0x0001bdc1) ncim_query_list_pane_ParamLimits

0x1fb6,	// (0x0001bdd3) ncim_query_popup_pane_ParamLimits

0x1fca,	// (0x0001bde7) wait_bar_pane_cp04

0xc860,	// (0x0002667d) input_focus_pane_cp011

0x1fd2,	// (0x0001bdef) ncim_query_popup_pane_t1

0x1fe0,	// (0x0001bdfd) ncim_list_query_list_pane_ParamLimits

0x1fe0,	// (0x0001bdfd) ncim_list_query_list_pane

0xc860,	// (0x0002667d) bg_button_pane_cp027

0x1ff3,	// (0x0001be10) ncim_query_button_pane_g1

0xc860,	// (0x0002667d) list_highlight_pane_cp012

0x1ffd,	// (0x0001be1a) ncim_list_query_list_pane_g1

0x2005,	// (0x0001be22) ncim_list_query_list_pane_t1

0x5478,	// (0x0001f295) cam4_indicators_pane_g3_ParamLimits

0x5478,	// (0x0001f295) cam4_indicators_pane_g3

0x557b,	// (0x0001f398) vid4_indicators_pane_g5_ParamLimits

0x557b,	// (0x0001f398) vid4_indicators_pane_g5

0x5a4f,	// (0x0001f86c) vid4_progress_pane_g5_ParamLimits

0x5a4f,	// (0x0001f86c) vid4_progress_pane_g5

0xaeed,	// (0x00024d0a) main_ncimui_pane_g1

0xaf55,	// (0x00024d72) ncimui_group_query_pane_ParamLimits

0xaf55,	// (0x00024d72) ncimui_group_query_pane

0xaf9d,	// (0x00024dba) ncimui_list_pane_ParamLimits

0xaf9d,	// (0x00024dba) ncimui_list_pane

0xafc4,	// (0x00024de1) ncimui_text_pane_ParamLimits

0xafc4,	// (0x00024de1) ncimui_text_pane

0xb064,	// (0x00024e81) ncimui_text_pane_t1_ParamLimits

0xb064,	// (0x00024e81) ncimui_text_pane_t1

0x2013,	// (0x0001be30) ncimui_list_single_graphic_pane_ParamLimits

0x2013,	// (0x0001be30) ncimui_list_single_graphic_pane

0xb083,	// (0x00024ea0) ncimui_query_pane_ParamLimits

0xb083,	// (0x00024ea0) ncimui_query_pane

0xc860,	// (0x0002667d) list_highlight_pane_cp013

0x2023,	// (0x0001be40) ncim_list_query_list_pane_t1_copy1

0x1ffd,	// (0x0001be1a) ncim_list_single_graphic_pane_g1

0x2031,	// (0x0001be4e) ncim_query_button_pane_cp01

0x203d,	// (0x0001be5a) ncim_query_entry_pane_ParamLimits

0x203d,	// (0x0001be5a) ncim_query_entry_pane

0x2050,	// (0x0001be6d) ncimui_query_pane_g1

0x205c,	// (0x0001be79) ncimui_query_pane_t1_ParamLimits

0x205c,	// (0x0001be79) ncimui_query_pane_t1

0xcad0,	// (0x000268ed) input_focus_pane_cp012

0x2075,	// (0x0001be92) ncim_query_entry_pane_t1

0xcffb,	// (0x00026e18) main_im_pane_ParamLimits

0x49f6,	// (0x0001e813) main_mobtv_pane_ParamLimits

0x49f6,	// (0x0001e813) main_mobtv_pane

0xacfb,	// (0x00024b18) main_cset6_slider_pane_g18_ParamLimits

0xacfb,	// (0x00024b18) main_cset6_slider_pane_g18

0xad1f,	// (0x00024b3c) main_cset6_slider_pane_g19_ParamLimits

0xad1f,	// (0x00024b3c) main_cset6_slider_pane_g19

0x11c5,	// (0x0001afe2) bg_main_mobtv_pane_ParamLimits

0x11c5,	// (0x0001afe2) bg_main_mobtv_pane

0xb096,	// (0x00024eb3) main_mobtv_info_pane

0xb0a1,	// (0x00024ebe) main_mobtv_loading_pane_ParamLimits

0xb0a1,	// (0x00024ebe) main_mobtv_loading_pane

0x2095,	// (0x0001beb2) main_mobtv_pg_channel_list_pane

0x209f,	// (0x0001bebc) main_mobtv_pg_hdr_pane

0xb0ae,	// (0x00024ecb) main_mobtv_programe_curr_pane_ParamLimits

0xb0ae,	// (0x00024ecb) main_mobtv_programe_curr_pane

0xb0bb,	// (0x00024ed8) main_mobtv_programe_next_pane_ParamLimits

0xb0bb,	// (0x00024ed8) main_mobtv_programe_next_pane

0x20a8,	// (0x0001bec5) popup_mobtv_noti_window

0x0400,	// (0x0001a21d) main_tv_pg_hdr_pane_g1

0x20b0,	// (0x0001becd) main_tv_pg_hdr_pane_g2

0x20b8,	// (0x0001bed5) main_tv_pg_hdr_pane_g3

0x20c0,	// (0x0001bedd) main_tv_pg_hdr_pane_g4

0x20c8,	// (0x0001bee5) main_tv_pg_hdr_pane_g5

0x20d2,	// (0x0001beef) main_tv_pg_hdr_pane_g6

0x20dc,	// (0x0001bef9) main_tv_pg_hdr_pane_g7

0x20e6,	// (0x0001bf03) main_tv_pg_hdr_pane_g8

0x20f0,	// (0x0001bf0d) main_tv_pg_hdr_pane_g9

0x20fa,	// (0x0001bf17) main_tv_pg_hdr_pane_g10

0x2104,	// (0x0001bf21) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00029a30) main_tv_pg_hdr_pane_g

0x210e,	// (0x0001bf2b) main_tv_pg_hdr_pane_t1

0x211c,	// (0x0001bf39) main_tv_pg_hdr_pane_t2

0x212a,	// (0x0001bf47) main_tv_pg_hdr_pane_t3

0x213a,	// (0x0001bf57) main_tv_pg_hdr_pane_t4

0x214a,	// (0x0001bf67) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00029a47) main_tv_pg_hdr_pane_t

0x215a,	// (0x0001bf77) single_mobtv_pg_channel_pane_ParamLimits

0x215a,	// (0x0001bf77) single_mobtv_pg_channel_pane

0x216c,	// (0x0001bf89) single_mobtv_pg_channel_table_pane

0x2175,	// (0x0001bf92) single_mobtv_pg_channel_thumb_pane

0x217e,	// (0x0001bf9b) single_tv_pg_channel_pane_g1

0x2187,	// (0x0001bfa4) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00029a52) single_tv_pg_channel_pane_g

0x0667,	// (0x0001a484) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0667,	// (0x0001a484) bg_single_mobtv_pg_channel_thumb_pane

0x2190,	// (0x0001bfad) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2190,	// (0x0001bfad) single_mobtv_pg_channel_thumb_pane_g1

0x219e,	// (0x0001bfbb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x219e,	// (0x0001bfbb) single_mobtv_pg_channel_thumb_pane_g2

0x21aa,	// (0x0001bfc7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x21aa,	// (0x0001bfc7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00029a57) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00029a57) single_mobtv_pg_channel_thumb_pane_g

0x21b6,	// (0x0001bfd3) single_mobtv_pg_channel_thumb_pane_t1

0x21c4,	// (0x0001bfe1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00029a5e) single_mobtv_pg_channel_thumb_pane_t

0x0400,	// (0x0001a21d) bg_single_mobtv_pg_channel_table_pane_g1

0x0400,	// (0x0001a21d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00029509) bg_single_mobtv_pg_channel_table_pane_g

0x21d2,	// (0x0001bfef) single_mobtv_pg_channel_table_pane_t1

0x21e0,	// (0x0001bffd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00029a63) single_mobtv_pg_channel_table_pane_t

0xb0d0,	// (0x00024eed) main_mobtv_info_pane_g1_ParamLimits

0xb0d0,	// (0x00024eed) main_mobtv_info_pane_g1

0xb0ec,	// (0x00024f09) main_mobtv_info_pane_t1_ParamLimits

0xb0ec,	// (0x00024f09) main_mobtv_info_pane_t1

0xb164,	// (0x00024f81) main_mobtv_info_pane_t2_ParamLimits

0xb164,	// (0x00024f81) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00029a6d) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00029a6d) main_mobtv_info_pane_t

0xb1f3,	// (0x00025010) wait_bar_pane_cp05

0xb205,	// (0x00025022) main_mobtv_loading_pane_g1_ParamLimits

0xb205,	// (0x00025022) main_mobtv_loading_pane_g1

0xb213,	// (0x00025030) main_mobtv_loading_pane_g2_ParamLimits

0xb213,	// (0x00025030) main_mobtv_loading_pane_g2

0xb21f,	// (0x0002503c) main_mobtv_loading_pane_g3_ParamLimits

0xb21f,	// (0x0002503c) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00029a74) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00029a74) main_mobtv_loading_pane_g

0x21ee,	// (0x0001c00b) main_mobtv_loading_pane_t1_ParamLimits

0x21ee,	// (0x0001c00b) main_mobtv_loading_pane_t1

0x2206,	// (0x0001c023) main_mobtv_loading_pane_t2_ParamLimits

0x2206,	// (0x0001c023) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00029a7b) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00029a7b) main_mobtv_loading_pane_t

0xb22d,	// (0x0002504a) wait_bar_pane_cp06_ParamLimits

0xb22d,	// (0x0002504a) wait_bar_pane_cp06

0x222a,	// (0x0001c047) main_mobtv_programe_curr_pane_t1

0x2238,	// (0x0001c055) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00029a80) main_mobtv_programe_curr_pane_t

0x2246,	// (0x0001c063) main_mobtv_programe_next_pane_t1

0x2254,	// (0x0001c071) main_mobtv_programe_next_pane_t2

0x2262,	// (0x0001c07f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00029a85) main_mobtv_programe_next_pane_t

0xc860,	// (0x0002667d) bg_popup_mobtv_noti_window_pane

0x2270,	// (0x0001c08d) popup_mobtv_noti_window_g1

0x2278,	// (0x0001c095) popup_mobtv_noti_window_t1

0x2286,	// (0x0001c0a3) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00029a8c) popup_mobtv_noti_window_t

0x0400,	// (0x0001a21d) bg_popup_mobtv_noti_window_pane_g1

0x4542,	// (0x0001e35f) sc_clock_pane

0x4542,	// (0x0001e35f) main_fs_bigclock_pane

0xa98d,	// (0x000247aa) blid2_tripm_pane_t4_ParamLimits

0xa98d,	// (0x000247aa) blid2_tripm_pane_t4

0xb239,	// (0x00025056) sc_clock_pane_g1_ParamLimits

0xb239,	// (0x00025056) sc_clock_pane_g1

0xb247,	// (0x00025064) sc_clock_pane_t1_ParamLimits

0xb247,	// (0x00025064) sc_clock_pane_t1

0xb25a,	// (0x00025077) sc_clock_pane_t2_ParamLimits

0xb25a,	// (0x00025077) sc_clock_pane_t2

0xb26c,	// (0x00025089) sc_clock_pane_t3_ParamLimits

0xb26c,	// (0x00025089) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00029a91) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00029a91) sc_clock_pane_t

0xbf39,	// (0x00025d56) main_fs_bigclock_indicator_pane_ParamLimits

0xbf39,	// (0x00025d56) main_fs_bigclock_indicator_pane

0xb2f8,	// (0x00025115) main_fs_bigclock_pane_g1_ParamLimits

0xb2f8,	// (0x00025115) main_fs_bigclock_pane_g1

0xbf45,	// (0x00025d62) main_fs_bigclock_pane_t1_ParamLimits

0xbf45,	// (0x00025d62) main_fs_bigclock_pane_t1

0xbf57,	// (0x00025d74) main_fs_bigclock_pane_t2_ParamLimits

0xbf57,	// (0x00025d74) main_fs_bigclock_pane_t2

0xbf69,	// (0x00025d86) main_fs_bigclock_pane_t3_ParamLimits

0xbf69,	// (0x00025d86) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00029c90) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00029c90) main_fs_bigclock_pane_t

0x2f4d,	// (0x0001cd6a) main_fs_bigclock_indicator_pane_g1

0x1f4c,	// (0x0001bd69) ncim_query_content_pane_g2_ParamLimits

0x1f4c,	// (0x0001bd69) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00029a1e) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00029a1e) ncim_query_content_pane_g

0xb280,	// (0x0002509d) sc_clock_pane_t4_ParamLimits

0xb280,	// (0x0002509d) sc_clock_pane_t4

0x49f6,	// (0x0001e813) main_radioblah_pane

0x1035,	// (0x0001ae52) cell_call4_button_pane_t1_copy1_ParamLimits

0x1035,	// (0x0001ae52) cell_call4_button_pane_t1_copy1

0xaf07,	// (0x00024d24) main_ncimui_pane_t1_ParamLimits

0xaf07,	// (0x00024d24) main_ncimui_pane_t1

0xaf21,	// (0x00024d3e) main_ncimui_pane_t2_ParamLimits

0xaf21,	// (0x00024d3e) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00029a17) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00029a17) main_ncimui_pane_t

0x23cf,	// (0x0001c1ec) main_radioblah_anim_pane_ParamLimits

0x23cf,	// (0x0001c1ec) main_radioblah_anim_pane

0x23e0,	// (0x0001c1fd) main_radioblah_info_pane_ParamLimits

0x23e0,	// (0x0001c1fd) main_radioblah_info_pane

0x23f4,	// (0x0001c211) main_radioblah_pane_t1_ParamLimits

0x23f4,	// (0x0001c211) main_radioblah_pane_t1

0x2410,	// (0x0001c22d) main_radioblah_pane_t2_ParamLimits

0x2410,	// (0x0001c22d) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00029ab2) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00029ab2) main_radioblah_pane_t

0xb34a,	// (0x00025167) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb34a,	// (0x00025167) main_radioblah_rocker_ctrl_pane

0x2458,	// (0x0001c275) main_radioblah_info_pane_t1_ParamLimits

0x2458,	// (0x0001c275) main_radioblah_info_pane_t1

0xb38f,	// (0x000251ac) main_radioblah_info_pane_t2_ParamLimits

0xb38f,	// (0x000251ac) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00029abb) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00029abb) main_radioblah_info_pane_t

0x0400,	// (0x0001a21d) main_radioblah_rocker_ctrl_pane_g1

0xb43f,	// (0x0002525c) main_radioblah_rocker_ctrl_pane_g2

0xb447,	// (0x00025264) main_radioblah_rocker_ctrl_pane_g3

0xb44f,	// (0x0002526c) main_radioblah_rocker_ctrl_pane_g4

0xb457,	// (0x00025274) main_radioblah_rocker_ctrl_pane_g5

0xb45f,	// (0x0002527c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00029ac4) main_radioblah_rocker_ctrl_pane_g

0xaea3,	// (0x00024cc0) main_cset_text2_pane_t1_copy1_ParamLimits

0x53bc,	// (0x0001f1d9) cam4_image_uncrop_qvga_pane

0x54ed,	// (0x0001f30a) vid4_image_uncrop_qcif_pane

0x5aef,	// (0x0001f90c) cam6_image_uncrop_qvga_pane_ParamLimits

0x5aef,	// (0x0001f90c) cam6_image_uncrop_qvga_pane

0x1b62,	// (0x0001b97f) vid6_image_uncrop_qcif_pane_ParamLimits

0x1b62,	// (0x0001b97f) vid6_image_uncrop_qcif_pane

0xc860,	// (0x0002667d) bg_popup_preview_window_pane_cp03

0x1efe,	// (0x0001bd1b) list_cset_text2_pane

0x1f06,	// (0x0001bd23) main_cset6_text2_pane_g1

0x1f0e,	// (0x0001bd2b) main_cset6_text2_pane_t1

0xb467,	// (0x00025284) list_cset_text2_pane_t1_ParamLimits

0xb467,	// (0x00025284) list_cset_text2_pane_t1

0x49f6,	// (0x0001e813) main_radioblah_pane_ParamLimits

0xb1df,	// (0x00024ffc) main_mobtv_info_pane_t3_ParamLimits

0xb1df,	// (0x00024ffc) main_mobtv_info_pane_t3

0xb338,	// (0x00025155) main_radioblah_pane_g1

0xb363,	// (0x00025180) main_radioblah_info_pane_g1

0xb3e4,	// (0x00025201) main_radioblah_info_pane_t3_ParamLimits

0xb3e4,	// (0x00025201) main_radioblah_info_pane_t3

0x73bb,	// (0x000211d8) highlight_cell_cale_month_pane_ParamLimits

0x73bb,	// (0x000211d8) highlight_cell_cale_month_pane

0x4542,	// (0x0001e35f) main_phob_fisheye_pane

0x0787,	// (0x0001a5a4) scroll_pane_cp0031_ParamLimits

0x0787,	// (0x0001a5a4) scroll_pane_cp0031

0x1c70,	// (0x0001ba8d) wait_bar_pane_cp08_ParamLimits

0xac8f,	// (0x00024aac) cset_list_set_pane_copy1_ParamLimits

0x2492,	// (0x0001c2af) highlight_cell_cale_month_pane_g1

0xb492,	// (0x000252af) highlight_cell_cale_month_pane_t1

0x1809,	// (0x0001b626) list_gen_pane_cp01

0x134d,	// (0x0001b16a) scroll_pane_01

0x249a,	// (0x0001c2b7) list_single_double_fisheye_pane

0x24a3,	// (0x0001c2c0) list_double_fisheye_pane_g1_ParamLimits

0x24a3,	// (0x0001c2c0) list_double_fisheye_pane_g1

0x24af,	// (0x0001c2cc) list_double_fisheye_pane_g2_ParamLimits

0x24af,	// (0x0001c2cc) list_double_fisheye_pane_g2

0x24c3,	// (0x0001c2e0) list_double_fisheye_pane_g3_ParamLimits

0x24c3,	// (0x0001c2e0) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x00029ad1) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x00029ad1) list_double_fisheye_pane_g

0x24ec,	// (0x0001c309) list_double_fisheye_pane_t1_ParamLimits

0x24ec,	// (0x0001c309) list_double_fisheye_pane_t1

0x2507,	// (0x0001c324) list_double_fisheye_pane_t2_ParamLimits

0x2507,	// (0x0001c324) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00029adc) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00029adc) list_double_fisheye_pane_t

0x4542,	// (0x0001e35f) main_call5_pane

0xb2a6,	// (0x000250c3) sc_swipe_pane_ParamLimits

0xb2a6,	// (0x000250c3) sc_swipe_pane

0xb4ac,	// (0x000252c9) call5_image_pane_ParamLimits

0xb4ac,	// (0x000252c9) call5_image_pane

0xb4bc,	// (0x000252d9) call5_swipe_1_pane_ParamLimits

0xb4bc,	// (0x000252d9) call5_swipe_1_pane

0xb4c8,	// (0x000252e5) call5_swipe_2_pane_ParamLimits

0xb4c8,	// (0x000252e5) call5_swipe_2_pane

0xb4e2,	// (0x000252ff) popup_call5_audio_first_window_ParamLimits

0xb4e2,	// (0x000252ff) popup_call5_audio_first_window

0x0667,	// (0x0001a484) call5_swipe_1_pane_g1_ParamLimits

0x0667,	// (0x0001a484) call5_swipe_1_pane_g1

0x2529,	// (0x0001c346) call5_swipe_1_pane_g2_ParamLimits

0x2529,	// (0x0001c346) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00029ae1) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00029ae1) call5_swipe_1_pane_g

0x2535,	// (0x0001c352) call5_swipe_1_pane_t1_ParamLimits

0x2535,	// (0x0001c352) call5_swipe_1_pane_t1

0x0667,	// (0x0001a484) call5_swipe_2_pane_g1_ParamLimits

0x0667,	// (0x0001a484) call5_swipe_2_pane_g1

0x254a,	// (0x0001c367) call5_swipe_2_pane_g2_ParamLimits

0x254a,	// (0x0001c367) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00029ae6) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00029ae6) call5_swipe_2_pane_g

0x2556,	// (0x0001c373) call5_swipe_2_pane_t1_ParamLimits

0x2556,	// (0x0001c373) call5_swipe_2_pane_t1

0x256b,	// (0x0001c388) sc_swipe_pane_g1_ParamLimits

0x256b,	// (0x0001c388) sc_swipe_pane_g1

0x2578,	// (0x0001c395) sc_swipe_pane_g2_ParamLimits

0x2578,	// (0x0001c395) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00029aeb) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00029aeb) sc_swipe_pane_g

0x2584,	// (0x0001c3a1) sc_swipe_pane_t1_ParamLimits

0x2584,	// (0x0001c3a1) sc_swipe_pane_t1

0x4542,	// (0x0001e35f) main_cmail_launcher_pane

0xb4f0,	// (0x0002530d) aid_size_cell_cmail_l_ParamLimits

0xb4f0,	// (0x0002530d) aid_size_cell_cmail_l

0xb500,	// (0x0002531d) grid_cmail_l_pane_ParamLimits

0xb500,	// (0x0002531d) grid_cmail_l_pane

0xb510,	// (0x0002532d) cell_cmail_l_pane_ParamLimits

0xb510,	// (0x0002532d) cell_cmail_l_pane

0xb524,	// (0x00025341) cell_cmail_l_pane_g1_ParamLimits

0xb524,	// (0x00025341) cell_cmail_l_pane_g1

0xb530,	// (0x0002534d) cell_cmail_l_pane_t1_ParamLimits

0xb530,	// (0x0002534d) cell_cmail_l_pane_t1

0x2599,	// (0x0001c3b6) cell_cmail_l_pane_t2_ParamLimits

0x2599,	// (0x0001c3b6) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x00029af0) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x00029af0) cell_cmail_l_pane_t

0xcad0,	// (0x000268ed) grid_highlight_pane_cp018_ParamLimits

0xcad0,	// (0x000268ed) grid_highlight_pane_cp018

0x43b0,	// (0x0001e1cd) main2_pane_ParamLimits

0x43b0,	// (0x0001e1cd) main2_pane

0xd0a6,	// (0x00026ec3) popup_sp_fs_action_menu_bg_pane_g1

0xd0ae,	// (0x00026ecb) popup_sp_fs_action_menu_bg_pane_g2

0xd0b6,	// (0x00026ed3) popup_sp_fs_action_menu_bg_pane_g3

0xd0be,	// (0x00026edb) popup_sp_fs_action_menu_bg_pane_g4

0xd0c6,	// (0x00026ee3) popup_sp_fs_action_menu_bg_pane_g5

0xd0ce,	// (0x00026eeb) popup_sp_fs_action_menu_bg_pane_g6

0xd0d6,	// (0x00026ef3) popup_sp_fs_action_menu_bg_pane_g7

0xd0de,	// (0x00026efb) popup_sp_fs_action_menu_bg_pane_g8

0xd0e6,	// (0x00026f03) popup_sp_fs_action_menu_bg_pane_g9

0xd0ee,	// (0x00026f0b) popup_sp_fs_action_menu_bg_pane_g10

0xd0ee,	// (0x00026f0b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00028fb5) popup_sp_fs_action_menu_bg_pane_g

0xd216,	// (0x00027033) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t3_g3_g1

0xd222,	// (0x0002703f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_t3_g3_g2

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00029065) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00029065) list_medium_line_x2_t3_g3_g

0xd23a,	// (0x00027057) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd23a,	// (0x00027057) list_medium_line_x2_t3_g3_t1

0x64d8,	// (0x000202f5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x64d8,	// (0x000202f5) list_medium_line_x2_t3_g3_t2

0xd24f,	// (0x0002706c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0002906c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0002906c) list_medium_line_x2_t3_g3_t

0xd216,	// (0x00027033) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t3_g2_g1

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00029073) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00029073) list_medium_line_x2_t3_g2_g

0xd264,	// (0x00027081) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd264,	// (0x00027081) list_medium_line_x2_t3_g2_t1

0xd27a,	// (0x00027097) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd27a,	// (0x00027097) list_medium_line_x2_t3_g2_t2

0xd28c,	// (0x000270a9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd28c,	// (0x000270a9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00029078) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00029078) list_medium_line_x2_t3_g2_t

0xd216,	// (0x00027033) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t4_g4_g1

0xd2a9,	// (0x000270c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd2a9,	// (0x000270c6) list_medium_line_x2_t4_g4_g2

0xd222,	// (0x0002703f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_t4_g4_g3

0xd2b5,	// (0x000270d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd2b5,	// (0x000270d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0002907f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0002907f) list_medium_line_x2_t4_g4_g

0x64ea,	// (0x00020307) list_medium_line_x2_t4_g4_t1_ParamLimits

0x64ea,	// (0x00020307) list_medium_line_x2_t4_g4_t1

0x6504,	// (0x00020321) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6504,	// (0x00020321) list_medium_line_x2_t4_g4_t2

0x6519,	// (0x00020336) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6519,	// (0x00020336) list_medium_line_x2_t4_g4_t3

0xd2c1,	// (0x000270de) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd2c1,	// (0x000270de) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00029088) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00029088) list_medium_line_x2_t4_g4_t

0xd216,	// (0x00027033) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t2_g4_g1

0xd2a9,	// (0x000270c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd2a9,	// (0x000270c6) list_medium_line_x2_t2_g4_g2

0xd222,	// (0x0002703f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_t2_g4_g3

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000290ef) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000290ef) list_medium_line_x2_t2_g4_g

0xd5ab,	// (0x000273c8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd5ab,	// (0x000273c8) list_medium_line_x2_t2_g4_t1

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000290f8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000290f8) list_medium_line_x2_t2_g4_t

0xd216,	// (0x00027033) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t2_g3_g1

0xd222,	// (0x0002703f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_t2_g3_g2

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00029065) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00029065) list_medium_line_x2_t2_g3_g

0xd5c0,	// (0x000273dd) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd5c0,	// (0x000273dd) list_medium_line_x2_t2_g3_t1

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000290fd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000290fd) list_medium_line_x2_t2_g3_t

0x75ed,	// (0x0002140a) main_sp_fs_list_pane_ParamLimits

0x75ed,	// (0x0002140a) main_sp_fs_list_pane

0x75f9,	// (0x00021416) sp_fs_scroll_pane_ParamLimits

0x75f9,	// (0x00021416) sp_fs_scroll_pane

0x7605,	// (0x00021422) list_medium_line_x2_t3_t1

0x7615,	// (0x00021432) list_medium_line_x2_t3_t2

0xd76a,	// (0x00027587) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00029148) list_medium_line_x2_t3_t

0x7623,	// (0x00021440) list_medium_line_x3_t4_t1

0x7633,	// (0x00021450) list_medium_line_x3_t4_t2

0xd778,	// (0x00027595) list_medium_line_x3_t4_t3

0xd76a,	// (0x00027587) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0002914f) list_medium_line_x3_t4_t

0x7641,	// (0x0002145e) list_medium_line_x4_t5_t1

0x7651,	// (0x0002146e) list_medium_line_x4_t5_t2

0xd778,	// (0x00027595) list_medium_line_x4_t5_t3

0xd786,	// (0x000275a3) list_medium_line_x4_t5_t4

0xd76a,	// (0x00027587) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00029158) list_medium_line_x4_t5_t

0xd216,	// (0x00027033) list_medium_line_t4_g4_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_t4_g4_g1

0xd2b5,	// (0x000270d2) list_medium_line_t4_g4_g2_ParamLimits

0xd2b5,	// (0x000270d2) list_medium_line_t4_g4_g2

0xd7a0,	// (0x000275bd) list_medium_line_t4_g4_g3_ParamLimits

0xd7a0,	// (0x000275bd) list_medium_line_t4_g4_g3

0xd22e,	// (0x0002704b) list_medium_line_t4_g4_g4_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00029163) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00029163) list_medium_line_t4_g4_g

0xd7ac,	// (0x000275c9) list_medium_line_t4_g4_t1_ParamLimits

0xd7ac,	// (0x000275c9) list_medium_line_t4_g4_t1

0xd7c1,	// (0x000275de) list_medium_line_t4_g4_t2_ParamLimits

0xd7c1,	// (0x000275de) list_medium_line_t4_g4_t2

0xd7d6,	// (0x000275f3) list_medium_line_t4_g4_t3_ParamLimits

0xd7d6,	// (0x000275f3) list_medium_line_t4_g4_t3

0xd24f,	// (0x0002706c) list_medium_line_t4_g4_t4_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0002916c) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0002916c) list_medium_line_t4_g4_t

0x76d7,	// (0x000214f4) chi_dic_find_pane_g1

0x4a12,	// (0x0001e82f) main_tport_pane

0x1492,	// (0x0001b2af) list_medium_line_plain_t1

0x14e4,	// (0x0001b301) list_medium_line_t2_g2_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t2_g2_g1

0x14f0,	// (0x0001b30d) list_medium_line_t2_g2_g2_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00029828) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00029828) list_medium_line_t2_g2_g

0xa299,	// (0x000240b6) list_medium_line_t2_g2_t1_ParamLimits

0xa299,	// (0x000240b6) list_medium_line_t2_g2_t1

0xa2b3,	// (0x000240d0) list_medium_line_t2_g2_t2_ParamLimits

0xa2b3,	// (0x000240d0) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0002982d) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0002982d) list_medium_line_t2_g2_t

0x1894,	// (0x0001b6b1) aid_sp_fs_list_icon_a_sm

0x189c,	// (0x0001b6b9) aid_sp_fs_list_icon_d

0x18a4,	// (0x0001b6c1) aid_sp_fs_text_primary

0x18ad,	// (0x0001b6ca) aid_sp_fs_text_secondary

0x18b6,	// (0x0001b6d3) list_medium_line

0x18b6,	// (0x0001b6d3) list_medium_line_g2

0x18b6,	// (0x0001b6d3) list_medium_line_g3

0x18b6,	// (0x0001b6d3) list_medium_line_plain

0x18b6,	// (0x0001b6d3) list_medium_line_plain_t2

0x18b6,	// (0x0001b6d3) list_medium_line_plain_t3

0x18b6,	// (0x0001b6d3) list_medium_line_right_icon

0x18b6,	// (0x0001b6d3) list_medium_line_right_iconx2

0x18b6,	// (0x0001b6d3) list_medium_line_t2

0x18b6,	// (0x0001b6d3) list_medium_line_t2_g2

0x18b6,	// (0x0001b6d3) list_medium_line_t2_g3

0x18b6,	// (0x0001b6d3) list_medium_line_t2_right_icon

0x18b6,	// (0x0001b6d3) list_medium_line_t2_right_iconx2

0x18b6,	// (0x0001b6d3) list_medium_line_t3

0x18b6,	// (0x0001b6d3) list_medium_line_t3_g2

0x18b6,	// (0x0001b6d3) list_medium_line_t3_g3

0x18b6,	// (0x0001b6d3) list_medium_line_t3_right_iconx2

0x18bf,	// (0x0001b6dc) list_medium_line_t4_g4

0x18c8,	// (0x0001b6e5) list_medium_line_x2

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t2_g2

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t2_g3

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t2_g4

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t3

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t3_g2

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t3_g3

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t3_g4

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t4_g2

0x18c8,	// (0x0001b6e5) list_medium_line_x2_t4_g4

0x18d1,	// (0x0001b6ee) list_medium_line_x3

0x18d1,	// (0x0001b6ee) list_medium_line_x3_t4

0x18d1,	// (0x0001b6ee) list_medium_line_x3_t4_g4

0x18bf,	// (0x0001b6dc) list_medium_line_x4_t4

0x18bf,	// (0x0001b6dc) list_medium_line_x4_t4_g7

0x18bf,	// (0x0001b6dc) list_medium_line_x4_t5

0x18da,	// (0x0001b6f7) list_single_fs_dyc_pane_ParamLimits

0x18da,	// (0x0001b6f7) list_single_fs_dyc_pane

0xd216,	// (0x00027033) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x4_t4_g7_g1

0x1e09,	// (0x0001bc26) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1e09,	// (0x0001bc26) list_medium_line_x4_t4_g7_g2

0x1e15,	// (0x0001bc32) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1e15,	// (0x0001bc32) list_medium_line_x4_t4_g7_g3

0x1e24,	// (0x0001bc41) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1e24,	// (0x0001bc41) list_medium_line_x4_t4_g7_g4

0x1e30,	// (0x0001bc4d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1e30,	// (0x0001bc4d) list_medium_line_x4_t4_g7_g5

0x1e3f,	// (0x0001bc5c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1e3f,	// (0x0001bc5c) list_medium_line_x4_t4_g7_g6

0x1e4e,	// (0x0001bc6b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1e4e,	// (0x0001bc6b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000299f8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000299f8) list_medium_line_x4_t4_g7_g

0x1e5a,	// (0x0001bc77) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1e5a,	// (0x0001bc77) list_medium_line_x4_t4_g7_t1

0x1e6f,	// (0x0001bc8c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1e6f,	// (0x0001bc8c) list_medium_line_x4_t4_g7_t2

0x1e84,	// (0x0001bca1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1e84,	// (0x0001bca1) list_medium_line_x4_t4_g7_t3

0x1e99,	// (0x0001bcb6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1e99,	// (0x0001bcb6) list_medium_line_x4_t4_g7_t4

0x1eab,	// (0x0001bcc8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1eab,	// (0x0001bcc8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00029a07) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00029a07) list_medium_line_x4_t4_g7_t

0x1ebd,	// (0x0001bcda) list_single_dyc_row_pane_ParamLimits

0x1ebd,	// (0x0001bcda) list_single_dyc_row_pane

0xb4a0,	// (0x000252bd) call5_gesture_pane_ParamLimits

0xb4a0,	// (0x000252bd) call5_gesture_pane

0xb4d4,	// (0x000252f1) call5_windows_pane_ParamLimits

0xb4d4,	// (0x000252f1) call5_windows_pane

0xb546,	// (0x00025363) call5_swipe_1_pane_cp_ParamLimits

0xb546,	// (0x00025363) call5_swipe_1_pane_cp

0xb552,	// (0x0002536f) call5_swipe_2_pane_cp_ParamLimits

0xb552,	// (0x0002536f) call5_swipe_2_pane_cp

0xdbdf,	// (0x000279fc) call5_image_pane_cp

0xb55e,	// (0x0002537b) popup_call5_audio_first_window_cp_ParamLimits

0xb55e,	// (0x0002537b) popup_call5_audio_first_window_cp

0x256b,	// (0x0001c388) call5_swipe_1_pane_g1_cp_ParamLimits

0x256b,	// (0x0001c388) call5_swipe_1_pane_g1_cp

0x25ab,	// (0x0001c3c8) call5_swipe_1_pane_g2_cp

0x2584,	// (0x0001c3a1) call5_swipe_1_pane_t1_cp_ParamLimits

0x2584,	// (0x0001c3a1) call5_swipe_1_pane_t1_cp

0x256b,	// (0x0001c388) call5_swipe_2_pane_g1_cp_ParamLimits

0x256b,	// (0x0001c388) call5_swipe_2_pane_g1_cp

0x25b3,	// (0x0001c3d0) call5_swipe_2_pane_g2_cp

0x25bb,	// (0x0001c3d8) call5_swipe_2_pane_t1_cp_ParamLimits

0x25bb,	// (0x0001c3d8) call5_swipe_2_pane_t1_cp

0xcad0,	// (0x000268ed) main_sp_fs_email_pane

0x25d0,	// (0x0001c3ed) main_sp_fs_listscroll_pane_te

0x25d9,	// (0x0001c3f6) popup_sp_fs_action_menu_pane_ParamLimits

0x25d9,	// (0x0001c3f6) popup_sp_fs_action_menu_pane

0x0400,	// (0x0001a21d) bg_sp_fs_ctrlbar_pane_g1

0x2619,	// (0x0001c436) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2622,	// (0x0001c43f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x262b,	// (0x0001c448) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0400,	// (0x0001a21d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00029af5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x01e3,	// (0x0001a000) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x01e3,	// (0x0001a000) bg_sp_fs_ctrlbar_ddmenu_pane

0x2634,	// (0x0001c451) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2634,	// (0x0001c451) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2640,	// (0x0001c45d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2640,	// (0x0001c45d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00029afe) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00029afe) main_sp_fs_ctrlbar_ddmenu_pane_g

0x264c,	// (0x0001c469) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x264c,	// (0x0001c469) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2666,	// (0x0001c483) list_medium_line_t2_right_icon_g1

0xb56a,	// (0x00025387) list_medium_line_t2_right_icon_t1

0xb57a,	// (0x00025397) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00029b03) list_medium_line_t2_right_icon_t

0xf02a,	// (0x00028e47) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf02a,	// (0x00028e47) bg_sp_fs_ctrlbar_pane

0xb5df,	// (0x000253fc) main_sp_fs_ctrlbar_button_pane_cp01

0xb5e7,	// (0x00025404) main_sp_fs_ctrlbar_ddmenu_pane

0xd216,	// (0x00027033) main_sp_fs_ctrlbar_pane_g1

0x26a6,	// (0x0001c4c3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00029b08) main_sp_fs_ctrlbar_pane_g

0x26b2,	// (0x0001c4cf) main_sp_fs_ctrlbar_pane_t1

0xb5f1,	// (0x0002540e) main_sp_fs_ctrlbar_pane

0xb60b,	// (0x00025428) main_sp_fs_listscroll_pane_te_cp01

0xb61c,	// (0x00025439) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb61c,	// (0x00025439) popup_sp_fs_action_menu_pane_cp01

0xcad0,	// (0x000268ed) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcad0,	// (0x000268ed) bg_sp_fs_highlight_list_pane_cp01

0x26d7,	// (0x0001c4f4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x26d7,	// (0x0001c4f4) sp_fs_action_menu_list_gene_pane_g1

0x26e6,	// (0x0001c503) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x26e6,	// (0x0001c503) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00029b12) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00029b12) sp_fs_action_menu_list_gene_pane_g

0x26f3,	// (0x0001c510) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x26f3,	// (0x0001c510) sp_fs_action_menu_list_gene_pane_t1

0x270b,	// (0x0001c528) sp_fs_action_menu_list_gene_pane_ParamLimits

0x270b,	// (0x0001c528) sp_fs_action_menu_list_gene_pane

0x2728,	// (0x0001c545) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2728,	// (0x0001c545) popup_sp_fs_action_menu_bg_pane

0x2736,	// (0x0001c553) sp_fs_action_menu_list_pane_ParamLimits

0x2736,	// (0x0001c553) sp_fs_action_menu_list_pane

0x2754,	// (0x0001c571) sp_fs_scroll_pane_cp01_ParamLimits

0x2754,	// (0x0001c571) sp_fs_scroll_pane_cp01

0xb646,	// (0x00025463) list_medium_line_plain_t2_t1

0xb656,	// (0x00025473) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00029b17) list_medium_line_plain_t2_t

0xb664,	// (0x00025481) list_medium_line_plain_t3_t1

0xb674,	// (0x00025491) list_medium_line_plain_t3_t2

0xb682,	// (0x0002549f) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00029b1c) list_medium_line_plain_t3_t

0xd216,	// (0x00027033) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t2_g2_g1

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00029073) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00029073) list_medium_line_x2_t2_g2_g

0xd7ac,	// (0x000275c9) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd7ac,	// (0x000275c9) list_medium_line_x2_t2_g2_t1

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00029b23) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00029b23) list_medium_line_x2_t2_g2_t

0xd216,	// (0x00027033) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t4_g2_g1

0xd22e,	// (0x0002704b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x00029073) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x00029073) list_medium_line_x2_t4_g2_g

0xb690,	// (0x000254ad) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb690,	// (0x000254ad) list_medium_line_x2_t4_g2_t1

0xb6aa,	// (0x000254c7) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb6aa,	// (0x000254c7) list_medium_line_x2_t4_g2_t2

0xb6bf,	// (0x000254dc) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb6bf,	// (0x000254dc) list_medium_line_x2_t4_g2_t3

0xd24f,	// (0x0002706c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00029b28) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00029b28) list_medium_line_x2_t4_g2_t

0x277a,	// (0x0001c597) list_medium_line_t3_right_iconx2_g1

0x2666,	// (0x0001c483) list_medium_line_t3_right_iconx2_g2

0xb6d4,	// (0x000254f1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00029b31) list_medium_line_t3_right_iconx2_g

0xb6dc,	// (0x000254f9) list_medium_line_t3_right_iconx2_t1

0xb6ec,	// (0x00025509) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00029b38) list_medium_line_t3_right_iconx2_t

0xd216,	// (0x00027033) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x3_t4_g4_g1

0xd222,	// (0x0002703f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x3_t4_g4_g2

0xd2b5,	// (0x000270d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd2b5,	// (0x000270d2) list_medium_line_x3_t4_g4_g3

0x2782,	// (0x0001c59f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2782,	// (0x0001c59f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00029b3d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00029b3d) list_medium_line_x3_t4_g4_g

0xb6fa,	// (0x00025517) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb6fa,	// (0x00025517) list_medium_line_x3_t4_g4_t1

0xb711,	// (0x0002552e) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb711,	// (0x0002552e) list_medium_line_x3_t4_g4_t2

0xd7c1,	// (0x000275de) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd7c1,	// (0x000275de) list_medium_line_x3_t4_g4_t3

0x278e,	// (0x0001c5ab) list_medium_line_x3_t4_g4_t4_ParamLimits

0x278e,	// (0x0001c5ab) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00029b46) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00029b46) list_medium_line_x3_t4_g4_t

0xb726,	// (0x00025543) list_single_dyc_row_text_pane_t1_ParamLimits

0xb726,	// (0x00025543) list_single_dyc_row_text_pane_t1

0xb75d,	// (0x0002557a) list_single_dyc_row_text_pane_t2_ParamLimits

0xb75d,	// (0x0002557a) list_single_dyc_row_text_pane_t2

0x27ab,	// (0x0001c5c8) list_single_dyc_row_text_pane_t3_ParamLimits

0x27ab,	// (0x0001c5c8) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00029b4f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00029b4f) list_single_dyc_row_text_pane_t

0x27bd,	// (0x0001c5da) list_single_dyc_row_pane_g1_ParamLimits

0x27bd,	// (0x0001c5da) list_single_dyc_row_pane_g1

0x27c9,	// (0x0001c5e6) list_single_dyc_row_pane_g2_ParamLimits

0x27c9,	// (0x0001c5e6) list_single_dyc_row_pane_g2

0x27d5,	// (0x0001c5f2) list_single_dyc_row_pane_g3_ParamLimits

0x27d5,	// (0x0001c5f2) list_single_dyc_row_pane_g3

0x27e1,	// (0x0001c5fe) list_single_dyc_row_pane_g4_ParamLimits

0x27e1,	// (0x0001c5fe) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00029b56) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00029b56) list_single_dyc_row_pane_g

0x27ed,	// (0x0001c60a) list_single_dyc_row_text_pane_ParamLimits

0x27ed,	// (0x0001c60a) list_single_dyc_row_text_pane

0xc860,	// (0x0002667d) bg_sp_fs_scroll_pane

0x280c,	// (0x0001c629) thumb_sp_fs_scroll_pane

0x14e4,	// (0x0001b301) list_medium_line_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_g1

0x2815,	// (0x0001c632) list_medium_line_t1_ParamLimits

0x2815,	// (0x0001c632) list_medium_line_t1

0xd216,	// (0x00027033) list_medium_line_x2_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_g1

0xd222,	// (0x0002703f) list_medium_line_x2_g2_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00029b5f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00029b5f) list_medium_line_x2_g

0x282a,	// (0x0001c647) list_medium_line_x2_t1_ParamLimits

0x282a,	// (0x0001c647) list_medium_line_x2_t1

0xd216,	// (0x00027033) list_medium_line_x3_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x3_g1

0xd222,	// (0x0002703f) list_medium_line_x3_g2_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00029b5f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00029b5f) list_medium_line_x3_g

0x282a,	// (0x0001c647) list_medium_line_x3_t1_ParamLimits

0x282a,	// (0x0001c647) list_medium_line_x3_t1

0x2840,	// (0x0001c65d) thumb_sp_fs_scroll_pane_g1

0x2849,	// (0x0001c666) thumb_sp_fs_scroll_pane_g2

0x2852,	// (0x0001c66f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00029b64) thumb_sp_fs_scroll_pane_g

0x2840,	// (0x0001c65d) bg_sp_fs_scroll_pane_g1

0x2849,	// (0x0001c666) bg_sp_fs_scroll_pane_g2

0x2852,	// (0x0001c66f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00029b64) bg_sp_fs_scroll_pane_g

0xd216,	// (0x00027033) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd216,	// (0x00027033) list_medium_line_x2_t3_g4_g1

0xd2a9,	// (0x000270c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd2a9,	// (0x000270c6) list_medium_line_x2_t3_g4_g2

0xd222,	// (0x0002703f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd222,	// (0x0002703f) list_medium_line_x2_t3_g4_g3

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd22e,	// (0x0002704b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000290ef) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000290ef) list_medium_line_x2_t3_g4_g

0xb7b7,	// (0x000255d4) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb7b7,	// (0x000255d4) list_medium_line_x2_t3_g4_t1

0xb7cd,	// (0x000255ea) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb7cd,	// (0x000255ea) list_medium_line_x2_t3_g4_t2

0xd24f,	// (0x0002706c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd24f,	// (0x0002706c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00029b6b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00029b6b) list_medium_line_x2_t3_g4_t

0x14e4,	// (0x0001b301) list_medium_line_g2_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_g2_g1

0x14f0,	// (0x0001b30d) list_medium_line_g2_g2_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00029828) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00029828) list_medium_line_g2_g

0x285b,	// (0x0001c678) list_medium_line_g2_t1_ParamLimits

0x285b,	// (0x0001c678) list_medium_line_g2_t1

0x14e4,	// (0x0001b301) list_medium_line_t3_g2_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t3_g2_g1

0x14f0,	// (0x0001b30d) list_medium_line_t3_g2_g2_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00029828) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00029828) list_medium_line_t3_g2_g

0xb7e6,	// (0x00025603) list_medium_line_t3_g2_t1_ParamLimits

0xb7e6,	// (0x00025603) list_medium_line_t3_g2_t1

0xb7fd,	// (0x0002561a) list_medium_line_t3_g2_t2_ParamLimits

0xb7fd,	// (0x0002561a) list_medium_line_t3_g2_t2

0xb812,	// (0x0002562f) list_medium_line_t3_g2_t3_ParamLimits

0xb812,	// (0x0002562f) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00029b72) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00029b72) list_medium_line_t3_g2_t

0x2666,	// (0x0001c483) list_medium_line_right_icon_g1

0x2870,	// (0x0001c68d) list_medium_line_right_icon_t1

0x14e4,	// (0x0001b301) list_medium_line_t2_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t2_g1

0xb827,	// (0x00025644) list_medium_line_t2_t1_ParamLimits

0xb827,	// (0x00025644) list_medium_line_t2_t1

0xb841,	// (0x0002565e) list_medium_line_t2_t2_ParamLimits

0xb841,	// (0x0002565e) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00029b79) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00029b79) list_medium_line_t2_t

0x14e4,	// (0x0001b301) list_medium_line_t3_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t3_g1

0xb856,	// (0x00025673) list_medium_line_t3_t1_ParamLimits

0xb856,	// (0x00025673) list_medium_line_t3_t1

0xb86d,	// (0x0002568a) list_medium_line_t3_t2_ParamLimits

0xb86d,	// (0x0002568a) list_medium_line_t3_t2

0xb882,	// (0x0002569f) list_medium_line_t3_t3_ParamLimits

0xb882,	// (0x0002569f) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00029b7e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00029b7e) list_medium_line_t3_t

0x14e4,	// (0x0001b301) list_medium_line_g3_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_g3_g1

0x287e,	// (0x0001c69b) list_medium_line_g3_g2_ParamLimits

0x287e,	// (0x0001c69b) list_medium_line_g3_g2

0x14f0,	// (0x0001b30d) list_medium_line_g3_g3_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00029b85) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00029b85) list_medium_line_g3_g

0x288a,	// (0x0001c6a7) list_medium_line_g3_t1_ParamLimits

0x288a,	// (0x0001c6a7) list_medium_line_g3_t1

0x14e4,	// (0x0001b301) list_medium_line_t2_g3_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t2_g3_g1

0x287e,	// (0x0001c69b) list_medium_line_t2_g3_g2_ParamLimits

0x287e,	// (0x0001c69b) list_medium_line_t2_g3_g2

0x14f0,	// (0x0001b30d) list_medium_line_t2_g3_g3_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00029b85) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00029b85) list_medium_line_t2_g3_g

0xb894,	// (0x000256b1) list_medium_line_t2_g3_t1_ParamLimits

0xb894,	// (0x000256b1) list_medium_line_t2_g3_t1

0xb8ab,	// (0x000256c8) list_medium_line_t2_g3_t2_ParamLimits

0xb8ab,	// (0x000256c8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00029b8c) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00029b8c) list_medium_line_t2_g3_t

0x14e4,	// (0x0001b301) list_medium_line_t3_g3_g1_ParamLimits

0x14e4,	// (0x0001b301) list_medium_line_t3_g3_g1

0x287e,	// (0x0001c69b) list_medium_line_t3_g3_g2_ParamLimits

0x287e,	// (0x0001c69b) list_medium_line_t3_g3_g2

0x14f0,	// (0x0001b30d) list_medium_line_t3_g3_g3_ParamLimits

0x14f0,	// (0x0001b30d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00029b85) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00029b85) list_medium_line_t3_g3_g

0xb8c0,	// (0x000256dd) list_medium_line_t3_g3_t1_ParamLimits

0xb8c0,	// (0x000256dd) list_medium_line_t3_g3_t1

0xb8d4,	// (0x000256f1) list_medium_line_t3_g3_t2_ParamLimits

0xb8d4,	// (0x000256f1) list_medium_line_t3_g3_t2

0xb8e6,	// (0x00025703) list_medium_line_t3_g3_t3_ParamLimits

0xb8e6,	// (0x00025703) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00029b91) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00029b91) list_medium_line_t3_g3_t

0x277a,	// (0x0001c597) list_medium_line_right_iconx2_g1

0x2666,	// (0x0001c483) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00029b98) list_medium_line_right_iconx2_g

0x289f,	// (0x0001c6bc) list_medium_line_right_iconx2_t1

0x277a,	// (0x0001c597) list_medium_line_t2_right_iconx2_g1

0x2666,	// (0x0001c483) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00029b98) list_medium_line_t2_right_iconx2_g

0xb8f8,	// (0x00025715) list_medium_line_t2_right_iconx2_t1

0xb908,	// (0x00025725) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00029b9d) list_medium_line_t2_right_iconx2_t

0x28ad,	// (0x0001c6ca) list_medium_line_x4_t4_t1

0xb916,	// (0x00025733) list_medium_line_x4_t4_t2

0xb926,	// (0x00025743) list_medium_line_x4_t4_t3

0xb936,	// (0x00025753) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00029ba2) list_medium_line_x4_t4_t

0xb96f,	// (0x0002578c) tport_appsw_pane_ParamLimits

0xb96f,	// (0x0002578c) tport_appsw_pane

0xb97b,	// (0x00025798) tport_contact_pane_ParamLimits

0xb97b,	// (0x00025798) tport_contact_pane

0xb98b,	// (0x000257a8) tport_listscroll_pane_ParamLimits

0xb98b,	// (0x000257a8) tport_listscroll_pane

0xb99b,	// (0x000257b8) cell_tport_appsw_pane_ParamLimits

0xb99b,	// (0x000257b8) cell_tport_appsw_pane

0x0704,	// (0x0001a521) tport_appsw_pane_g1_ParamLimits

0x0704,	// (0x0001a521) tport_appsw_pane_g1

0x28bb,	// (0x0001c6d8) tport_contact_pane_g1

0x28c4,	// (0x0001c6e1) tport_contact_pane_t1

0x28d2,	// (0x0001c6ef) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00029bab) tport_contact_pane_t

0x28e0,	// (0x0001c6fd) list_tport_pane

0x28e9,	// (0x0001c706) scroll_pane_cp_030

0x28fa,	// (0x0001c717) cell_tport_appsw_pane_g1

0x290a,	// (0x0001c727) cell_tport_appsw_pane_t1

0xc860,	// (0x0002667d) grid_highlight_pane_cp019

0xb9c6,	// (0x000257e3) list_tport_double_graphic_pane_ParamLimits

0xb9c6,	// (0x000257e3) list_tport_double_graphic_pane

0xcad0,	// (0x000268ed) list_highlight_pane_cp023_ParamLimits

0xcad0,	// (0x000268ed) list_highlight_pane_cp023

0xb9d9,	// (0x000257f6) list_tport_double_graphic_pane_g1_ParamLimits

0xb9d9,	// (0x000257f6) list_tport_double_graphic_pane_g1

0xb9e6,	// (0x00025803) list_tport_double_graphic_pane_t1_ParamLimits

0xb9e6,	// (0x00025803) list_tport_double_graphic_pane_t1

0xb9fb,	// (0x00025818) list_tport_double_graphic_pane_t2_ParamLimits

0xb9fb,	// (0x00025818) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00029bb7) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00029bb7) list_tport_double_graphic_pane_t

0xc860,	// (0x0002667d) main_cale_note_pane

0x572c,	// (0x0001f549) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x572c,	// (0x0001f549) cell_vitu2_function_top_wide_pane_cp01

0xb1f3,	// (0x00025010) wait_bar_pane_cp05_ParamLimits

0xc860,	// (0x0002667d) listscroll_cmail_pane

0x2920,	// (0x0001c73d) list_cmail_pane

0xba17,	// (0x00025834) list_cmail_body_pane

0xba3b,	// (0x00025858) list_single_cmail_header_caption_pane

0xba69,	// (0x00025886) list_single_cmail_header_detail_pane_ParamLimits

0xba69,	// (0x00025886) list_single_cmail_header_detail_pane

0xbaa1,	// (0x000258be) list_single_cmail_header_caption_pane_t1

0xbab1,	// (0x000258ce) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbab1,	// (0x000258ce) list_single_cmail_header_detail_pane_g1

0x2940,	// (0x0001c75d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2940,	// (0x0001c75d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00029bbc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00029bbc) list_single_cmail_header_detail_pane_g

0x2959,	// (0x0001c776) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2959,	// (0x0001c776) list_single_cmail_header_detail_pane_t1

0x298b,	// (0x0001c7a8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x298b,	// (0x0001c7a8) list_single_cmail_header_editor_pane_bg

0x299d,	// (0x0001c7ba) list_cmail_body_pane_g1

0x29a6,	// (0x0001c7c3) list_cmail_body_pane_t1

0x1233,	// (0x0001b050) list_single_cmail_header_editor_pane_bg_g1

0xd4ca,	// (0x000272e7) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1243,	// (0x0001b060) list_single_cmail_header_editor_pane_bg_g1_copy2

0x123b,	// (0x0001b058) list_single_cmail_header_editor_pane_bg_g1_copy3

0x14bc,	// (0x0001b2d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1263,	// (0x0001b080) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1253,	// (0x0001b070) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x125b,	// (0x0001b078) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4aa,	// (0x000272c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbaef,	// (0x0002590c) calenote_gesture_pane_ParamLimits

0xbaef,	// (0x0002590c) calenote_gesture_pane

0xbb09,	// (0x00025926) calenote_window_pane_ParamLimits

0xbb09,	// (0x00025926) calenote_window_pane

0x29b4,	// (0x0001c7d1) popup_note_window_cp01

0xbb21,	// (0x0002593e) calenote_swipe_1_pane_ParamLimits

0xbb21,	// (0x0002593e) calenote_swipe_1_pane

0xb552,	// (0x0002536f) calenote_swipe_2_pane_ParamLimits

0xb552,	// (0x0002536f) calenote_swipe_2_pane

0x256b,	// (0x0001c388) calenote_swipe_1_pane_g1_ParamLimits

0x256b,	// (0x0001c388) calenote_swipe_1_pane_g1

0x2578,	// (0x0001c395) calenote_swipe_1_pane_g2_ParamLimits

0x2578,	// (0x0001c395) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00029aeb) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00029aeb) calenote_swipe_1_pane_g

0x29c6,	// (0x0001c7e3) calenote_swipe_1_pane_t1_ParamLimits

0x29c6,	// (0x0001c7e3) calenote_swipe_1_pane_t1

0x256b,	// (0x0001c388) calenote_swipe_2_pane_g1_ParamLimits

0x256b,	// (0x0001c388) calenote_swipe_2_pane_g1

0x29e5,	// (0x0001c802) calenote_swipe_2_pane_g2_ParamLimits

0x29e5,	// (0x0001c802) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00029bc8) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00029bc8) calenote_swipe_2_pane_g

0x29f1,	// (0x0001c80e) calenote_swipe_2_pane_t1_ParamLimits

0x29f1,	// (0x0001c80e) calenote_swipe_2_pane_t1

0xc860,	// (0x0002667d) main_mup_navstr_pane

0x924d,	// (0x0002306a) main_mup3_pane_t7_ParamLimits

0x924d,	// (0x0002306a) main_mup3_pane_t7

0x503d,	// (0x0001ee5a) main_mp4_pane_g6_ParamLimits

0x503d,	// (0x0001ee5a) main_mp4_pane_g6

0x5332,	// (0x0001f14f) main_image3_pane_t4_ParamLimits

0x5332,	// (0x0001f14f) main_image3_pane_t4

0xbb34,	// (0x00025951) popup_navstr_preview_pane_ParamLimits

0xbb34,	// (0x00025951) popup_navstr_preview_pane

0xbb40,	// (0x0002595d) scroll_navstr_pane_ParamLimits

0xbb40,	// (0x0002595d) scroll_navstr_pane

0xc860,	// (0x0002667d) bg_popup_preview_window_pane_cp04

0x2a18,	// (0x0001c835) popup_navstr_preview_pane_t1

0xbb4c,	// (0x00025969) scroll_navstr_pane_g1_ParamLimits

0xbb4c,	// (0x00025969) scroll_navstr_pane_g1

0xbb59,	// (0x00025976) scroll_navstr_pane_t1_ParamLimits

0xbb59,	// (0x00025976) scroll_navstr_pane_t1

0x29bd,	// (0x0001c7da) bg_button_pane_cp014

0x29bd,	// (0x0001c7da) bg_button_pane_cp030

0x24cf,	// (0x0001c2ec) list_double_fisheye_pane_g4_ParamLimits

0x24cf,	// (0x0001c2ec) list_double_fisheye_pane_g4

0x24db,	// (0x0001c2f8) list_double_fisheye_pane_g5_ParamLimits

0x24db,	// (0x0001c2f8) list_double_fisheye_pane_g5

0x2928,	// (0x0001c745) sp_fs_scroll_pane_cp03

0xd216,	// (0x00027033) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x26a6,	// (0x0001c4c3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00029b08) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x26b2,	// (0x0001c4cf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xba0d,	// (0x0002582a) sp_fs_scroll_pane_cp02

0xd111,	// (0x00026f2e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd111,	// (0x00026f2e) popup_sp_fs_calendar_preview_list_single_pane

0xc860,	// (0x0002667d) main_cam6_pano_pane

0x49f6,	// (0x0001e813) main_mup3_pane_ParamLimits

0xc860,	// (0x0002667d) main_phacti_pane

0xb0c8,	// (0x00024ee5) bg_button_pane_cp11

0xb0e0,	// (0x00024efd) main_mobtv_info_pane_g2_ParamLimits

0xb0e0,	// (0x00024efd) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00029a68) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00029a68) main_mobtv_info_pane_g

0xb292,	// (0x000250af) sc_clock_pane_t5_ParamLimits

0xb292,	// (0x000250af) sc_clock_pane_t5

0xb338,	// (0x00025155) main_radioblah_pane_g1_ParamLimits

0x2428,	// (0x0001c245) main_radioblah_pane_t3_ParamLimits

0x2428,	// (0x0001c245) main_radioblah_pane_t3

0x2440,	// (0x0001c25d) main_radioblah_pane_t4_ParamLimits

0x2440,	// (0x0001c25d) main_radioblah_pane_t4

0xb356,	// (0x00025173) main_radioblah_text_pane_ParamLimits

0xb356,	// (0x00025173) main_radioblah_text_pane

0xb363,	// (0x00025180) main_radioblah_info_pane_g1_ParamLimits

0xb3f8,	// (0x00025215) main_radioblah_info_pane_t4_ParamLimits

0xb3f8,	// (0x00025215) main_radioblah_info_pane_t4

0xcad0,	// (0x000268ed) main_sp_fs_calendar_pane

0xbb6b,	// (0x00025988) main_phacti_pane_g1

0xbb73,	// (0x00025990) phacti_note_pane_ParamLimits

0xbb73,	// (0x00025990) phacti_note_pane

0x2a2f,	// (0x0001c84c) phacti_term_pane_ParamLimits

0x2a2f,	// (0x0001c84c) phacti_term_pane

0x2a44,	// (0x0001c861) phacti_note_pane_t1_ParamLimits

0x2a44,	// (0x0001c861) phacti_note_pane_t1

0x2a5b,	// (0x0001c878) phacti_term_pane_g1

0x2a63,	// (0x0001c880) phacti_term_pane_t1_ParamLimits

0x2a63,	// (0x0001c880) phacti_term_pane_t1

0x2a8d,	// (0x0001c8aa) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2a95,	// (0x0001c8b2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00029bd2) popup_sp_fs_calendar_preview_list_single_pane_g

0x2a9d,	// (0x0001c8ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2a9d,	// (0x0001c8ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2ab3,	// (0x0001c8d0) aid_popup_sp_fs_bg_corner_pane

0x0400,	// (0x0001a21d) popup_sp_fs_calendar_preview_bg_pane_g1

0xc860,	// (0x0002667d) popup_sp_fs_calendar_preview_bg_pane

0x2abb,	// (0x0001c8d8) popup_sp_fs_calendar_preview_list_pane

0xcad0,	// (0x000268ed) bg_main_sp_fs_cale_pane_ParamLimits

0xcad0,	// (0x000268ed) bg_main_sp_fs_cale_pane

0x2acc,	// (0x0001c8e9) listscroll_cale_mrui_pane_ParamLimits

0x2acc,	// (0x0001c8e9) listscroll_cale_mrui_pane

0x2ae0,	// (0x0001c8fd) listscroll_sp_fs_schedule_track_pane

0x2ae9,	// (0x0001c906) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2ae9,	// (0x0001c906) main_sp_fs_ctrlbar_pane_cp01

0x2afa,	// (0x0001c917) main_sp_fs_ribbon_pane

0x2b02,	// (0x0001c91f) popup_sp_fs_cale_preview_window

0xbbba,	// (0x000259d7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbbba,	// (0x000259d7) list_single_sp_fs_schedule_track_pane

0x984b,	// (0x00023668) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x984b,	// (0x00023668) bg_sp_fs_highlight_list_pane_cp03

0xbbe2,	// (0x000259ff) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbbe2,	// (0x000259ff) list_single_sp_fs_schedule_track_pane_g1

0xbbee,	// (0x00025a0b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbbee,	// (0x00025a0b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00029bd7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00029bd7) list_single_sp_fs_schedule_track_pane_g

0xbbfa,	// (0x00025a17) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbbfa,	// (0x00025a17) list_single_sp_fs_schedule_track_pane_t1

0xbc12,	// (0x00025a2f) sp_fs_schedule_track_pane_ParamLimits

0xbc12,	// (0x00025a2f) sp_fs_schedule_track_pane

0x2b14,	// (0x0001c931) sp_fs_schedule_track_pane_g1

0x2b1c,	// (0x0001c939) sp_fs_schedule_track_pane_g2

0x2b24,	// (0x0001c941) sp_fs_schedule_track_pane_g3

0x2b2c,	// (0x0001c949) sp_fs_schedule_track_pane_g4

0x2b34,	// (0x0001c951) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00029bdc) sp_fs_schedule_track_pane_g

0x1233,	// (0x0001b050) bg_sp_fs_schedule_viewer_highlight_g1

0xd4ca,	// (0x000272e7) bg_sp_fs_schedule_viewer_highlight_g2

0x123b,	// (0x0001b058) bg_sp_fs_schedule_viewer_highlight_g3

0x1243,	// (0x0001b060) bg_sp_fs_schedule_viewer_highlight_g4

0x14bc,	// (0x0001b2d9) bg_sp_fs_schedule_viewer_highlight_g5

0x1253,	// (0x0001b070) bg_sp_fs_schedule_viewer_highlight_g6

0x125b,	// (0x0001b078) bg_sp_fs_schedule_viewer_highlight_g7

0x1263,	// (0x0001b080) bg_sp_fs_schedule_viewer_highlight_g8

0xd4aa,	// (0x000272c7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00029be7) bg_sp_fs_schedule_viewer_highlight_g

0xc860,	// (0x0002667d) bg_main_sp_fs_ribbon_pane

0xbc22,	// (0x00025a3f) main_sp_fs_ribbon_pane_g1

0x2b3c,	// (0x0001c959) main_sp_fs_ribbon_pane_t1

0xbc2d,	// (0x00025a4a) main_sp_fs_ribbon_pane_t2

0x2b4b,	// (0x0001c968) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00029bfa) main_sp_fs_ribbon_pane_t

0x2b5a,	// (0x0001c977) main_sp_fs_ribbon_scheduler_pane

0x2b62,	// (0x0001c97f) bg_main_sp_fs_ribbon_pane_g1

0x2b6b,	// (0x0001c988) bg_main_sp_fs_ribbon_pane_g2

0x2b74,	// (0x0001c991) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00029c01) bg_main_sp_fs_ribbon_pane_g

0x2b7c,	// (0x0001c999) main_sp_fs_ribbon_scheduler_pane_g1

0x2b85,	// (0x0001c9a2) main_sp_fs_ribbon_scheduler_pane_g2

0x2b8e,	// (0x0001c9ab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00029c08) main_sp_fs_ribbon_scheduler_pane_g

0x2b97,	// (0x0001c9b4) list_cale_mrui_pane

0xbc3e,	// (0x00025a5b) sp_fs_scroll_pane_cp07_ParamLimits

0xbc3e,	// (0x00025a5b) sp_fs_scroll_pane_cp07

0xbc54,	// (0x00025a71) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbc54,	// (0x00025a71) bg_sp_fs_schedule_viewer_highlight

0x2ba0,	// (0x0001c9bd) list_single_sp_fs_schedule_track_pane_cp01

0x2ba8,	// (0x0001c9c5) list_sp_fs_schedule_track_pane

0x2bb0,	// (0x0001c9cd) sp_fs_scroll_pane_cp06_ParamLimits

0x2bb0,	// (0x0001c9cd) sp_fs_scroll_pane_cp06

0x0400,	// (0x0001a21d) bgmain_sp_fs_calendar_pane_g1

0xbc61,	// (0x00025a7e) list_single_cale_mrui_pane_ParamLimits

0xbc61,	// (0x00025a7e) list_single_cale_mrui_pane

0x2bc2,	// (0x0001c9df) list_single_cale_mrui_row_pane_ParamLimits

0x2bc2,	// (0x0001c9df) list_single_cale_mrui_row_pane

0x2bcf,	// (0x0001c9ec) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2bcf,	// (0x0001c9ec) list_single_cale_mrui_row_pane_g1

0x2c14,	// (0x0001ca31) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2c14,	// (0x0001ca31) list_single_cale_mrui_row_pane_t1

0xbc93,	// (0x00025ab0) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbc93,	// (0x00025ab0) list_single_cale_mrui_row_pane_t2

0x2c26,	// (0x0001ca43) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2c26,	// (0x0001ca43) list_single_cale_mrui_row_pane_t3

0x2c55,	// (0x0001ca72) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2c55,	// (0x0001ca72) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00029c16) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00029c16) list_single_cale_mrui_row_pane_t

0xbcf9,	// (0x00025b16) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbcf9,	// (0x00025b16) list_single_cmail_header_editor_pane_bg_cp01

0xbd1b,	// (0x00025b38) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbd1b,	// (0x00025b38) list_single_cmail_header_editor_pane_bg_cp02

0xbd37,	// (0x00025b54) main_radioblah_text_pane_t1_ParamLimits

0xbd37,	// (0x00025b54) main_radioblah_text_pane_t1

0x2c84,	// (0x0001caa1) cam6_indi_pane_cp01

0x2c8c,	// (0x0001caa9) cam6_mode_pane_cp01

0x2c94,	// (0x0001cab1) cam6_pano_pane

0x2c9d,	// (0x0001caba) cam6_zoom_pane_cp01

0x2ca5,	// (0x0001cac2) cam6_pano_image_pane

0x2cb0,	// (0x0001cacd) cam6_pano_pane_g1

0x2187,	// (0x0001bfa4) cam6_pano_pane_g2

0x2cb9,	// (0x0001cad6) cam6_pano_pane_g3

0x2cc2,	// (0x0001cadf) cam6_pano_pane_g4

0x09db,	// (0x0001a7f8) cam6_pano_pane_g5

0x2ccb,	// (0x0001cae8) cam6_pano_pane_g6

0x2cd5,	// (0x0001caf2) cam6_pano_pane_g7

0x2cdd,	// (0x0001cafa) cam6_pano_pane_g8

0x2ce6,	// (0x0001cb03) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00029c1f) cam6_pano_pane_g

0xc860,	// (0x0002667d) main_browser_tag_pane

0x2a10,	// (0x0001c82d) grid_navstr_albumart_pane

0x2cf1,	// (0x0001cb0e) cell_navstr_albumart_pane_ParamLimits

0x2cf1,	// (0x0001cb0e) cell_navstr_albumart_pane

0xdd4e,	// (0x00027b6b) cell_navstr_albumart_pane_g1

0xee3f,	// (0x00028c5c) cell_navstr_albumart_pane_g2

0xee4f,	// (0x00028c6c) cell_navstr_albumart_pane_g3

0xee47,	// (0x00028c64) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00029c32) cell_navstr_albumart_pane_g

0xbd54,	// (0x00025b71) bt_list_pane_ParamLimits

0xbd54,	// (0x00025b71) bt_list_pane

0xbd7b,	// (0x00025b98) bt_list_pane_t1

0xbd8a,	// (0x00025ba7) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00029c3b) bt_list_pane_t

0xc860,	// (0x0002667d) main_cale_prevew_pane

0xbd99,	// (0x00025bb6) popup_cale_preview_window_ParamLimits

0xbd99,	// (0x00025bb6) popup_cale_preview_window

0xcad0,	// (0x000268ed) bg_popup_preview_window_pane_cp05_ParamLimits

0xcad0,	// (0x000268ed) bg_popup_preview_window_pane_cp05

0x2d13,	// (0x0001cb30) list_cale_preview_pane_ParamLimits

0x2d13,	// (0x0001cb30) list_cale_preview_pane

0xbdb0,	// (0x00025bcd) list_double_cale_preview_pane_ParamLimits

0xbdb0,	// (0x00025bcd) list_double_cale_preview_pane

0xbdc2,	// (0x00025bdf) list_single_cale_preview_pane_ParamLimits

0xbdc2,	// (0x00025bdf) list_single_cale_preview_pane

0xbdd6,	// (0x00025bf3) list_single_cale_preview_pane_g1

0xbdde,	// (0x00025bfb) list_single_cale_preview_pane_t1_ParamLimits

0xbdde,	// (0x00025bfb) list_single_cale_preview_pane_t1

0xbdf3,	// (0x00025c10) list_double_cale_preview_pane_g1

0xbdfb,	// (0x00025c18) list_double_cale_preview_pane_t1_ParamLimits

0xbdfb,	// (0x00025c18) list_double_cale_preview_pane_t1

0xbe10,	// (0x00025c2d) list_double_cale_preview_pane_t2_ParamLimits

0xbe10,	// (0x00025c2d) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00029c40) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00029c40) list_double_cale_preview_pane_t

0xc860,	// (0x0002667d) main_ezdial_pane

0xcad0,	// (0x000268ed) main_sp_fs_email_pane_ParamLimits

0xb588,	// (0x000253a5) cmail_ddmenu_btn01_pane_ParamLimits

0xb588,	// (0x000253a5) cmail_ddmenu_btn01_pane

0xb5a5,	// (0x000253c2) cmail_ddmenu_btn02_pane_ParamLimits

0xb5a5,	// (0x000253c2) cmail_ddmenu_btn02_pane

0xb5c3,	// (0x000253e0) cmail_ddmenu_btn03_pane_ParamLimits

0xb5c3,	// (0x000253e0) cmail_ddmenu_btn03_pane

0xb5f1,	// (0x0002540e) main_sp_fs_ctrlbar_pane_ParamLimits

0xb60b,	// (0x00025428) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xba17,	// (0x00025834) list_cmail_body_pane_ParamLimits

0x2937,	// (0x0001c754) bg_button_pane_cp12

0x294c,	// (0x0001c769) list_single_cmail_header_detail_pane_g3_ParamLimits

0x294c,	// (0x0001c769) list_single_cmail_header_detail_pane_g3

0xbac9,	// (0x000258e6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xbac9,	// (0x000258e6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00029bc3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00029bc3) list_single_cmail_header_detail_pane_t

0x2a78,	// (0x0001c895) phacti_term_pane_t2_ParamLimits

0x2a78,	// (0x0001c895) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00029bcd) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00029bcd) phacti_term_pane_t

0x2d1f,	// (0x0001cb3c) aid_size_list_single_double

0xbe28,	// (0x00025c45) popup_ezdial_listscroll_window

0xbe4b,	// (0x00025c68) popup_number_entry_window_cp01

0xdbdf,	// (0x000279fc) bg_popup_call_pane_cp09

0x2d2b,	// (0x0001cb48) ezdial_list_pane

0x2d33,	// (0x0001cb50) scroll_pane_cp23

0x01e3,	// (0x0001a000) bg_button_pane_cp028_ParamLimits

0x01e3,	// (0x0001a000) bg_button_pane_cp028

0xbe59,	// (0x00025c76) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbe59,	// (0x00025c76) cmail_ddmenu_btn01_pane_g1

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00029c45) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00029c45) cmail_ddmenu_btn01_pane_g

0x2d3b,	// (0x0001cb58) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2d3b,	// (0x0001cb58) cmail_ddmenu_btn01_pane_t1

0xf02a,	// (0x00028e47) bg_button_pane_cp029_ParamLimits

0xf02a,	// (0x00028e47) bg_button_pane_cp029

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn02_pane_g1

0xbe83,	// (0x00025ca0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbe83,	// (0x00025ca0) cmail_ddmenu_btn02_pane_t1

0x984b,	// (0x00023668) bg_button_pane_cp031_ParamLimits

0x984b,	// (0x00023668) bg_button_pane_cp031

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbe6b,	// (0x00025c88) cmail_ddmenu_btn03_pane_g1

0xbe83,	// (0x00025ca0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbe83,	// (0x00025ca0) cmail_ddmenu_btn03_pane_t1

0x9ad9,	// (0x000238f6) cell_dialer2_keypad_pane_t1_ParamLimits

0x9af3,	// (0x00023910) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9af3,	// (0x00023910) cell_dialer2_keypad_pane_t1_copy1

0xaf4d,	// (0x00024d6a) ncimui_group_button_pane

0xcad0,	// (0x000268ed) main_sp_fs_calendar_pane_ParamLimits

0xba3b,	// (0x00025858) list_single_cmail_header_caption_pane_ParamLimits

0x2ac3,	// (0x0001c8e0) aid_recal_txt_sm_pane

0xc860,	// (0x0002667d) mian_recal_day_pane

0x2b02,	// (0x0001c91f) popup_sp_fs_cale_preview_window_ParamLimits

0xc860,	// (0x0002667d) list_recal_day_pane

0x2d73,	// (0x0001cb90) list_single_recal_day_pane_ParamLimits

0x2d73,	// (0x0001cb90) list_single_recal_day_pane

0x2d85,	// (0x0001cba2) list_single_recal_day_pane_g1_ParamLimits

0x2d85,	// (0x0001cba2) list_single_recal_day_pane_g1

0x2d91,	// (0x0001cbae) list_single_recal_day_pane_g2_ParamLimits

0x2d91,	// (0x0001cbae) list_single_recal_day_pane_g2

0x2da1,	// (0x0001cbbe) list_single_recal_day_pane_g3_ParamLimits

0x2da1,	// (0x0001cbbe) list_single_recal_day_pane_g3

0xbea7,	// (0x00025cc4) list_single_recal_day_pane_g4_ParamLimits

0xbea7,	// (0x00025cc4) list_single_recal_day_pane_g4

0x2dad,	// (0x0001cbca) list_single_recal_day_pane_g5_ParamLimits

0x2dad,	// (0x0001cbca) list_single_recal_day_pane_g5

0x2dbd,	// (0x0001cbda) list_single_recal_day_pane_g6_ParamLimits

0x2dbd,	// (0x0001cbda) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00029c54) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00029c54) list_single_recal_day_pane_g

0x2dd4,	// (0x0001cbf1) list_single_recal_day_pane_t1

0x2de6,	// (0x0001cc03) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00029c5f) list_single_recal_day_pane_t

0xbec7,	// (0x00025ce4) ncimui_query_button_pane_ParamLimits

0xbec7,	// (0x00025ce4) ncimui_query_button_pane

0xbed7,	// (0x00025cf4) ncimui_query_button_pane_t1_ParamLimits

0xbed7,	// (0x00025cf4) ncimui_query_button_pane_t1

0x2dfb,	// (0x0001cc18) ncimui_query_button_pane_t2_ParamLimits

0x2dfb,	// (0x0001cc18) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00029c64) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00029c64) ncimui_query_button_pane_t

0xbeea,	// (0x00025d07) query_button_pane_ParamLimits

0xbeea,	// (0x00025d07) query_button_pane

0xc860,	// (0x0002667d) bg_button_pane_cp0028

0x2e0e,	// (0x0001cc2b) query_button_pane_t1

0x4a12,	// (0x0001e82f) main_tport_pane_ParamLimits

0xb946,	// (0x00025763) bg_popup_window_pane_cp01_ParamLimits

0xb946,	// (0x00025763) bg_popup_window_pane_cp01

0xb953,	// (0x00025770) heading_pane_cp08_ParamLimits

0xb953,	// (0x00025770) heading_pane_cp08

0xb961,	// (0x0002577e) heading_pane_cp07_ParamLimits

0xb961,	// (0x0002577e) heading_pane_cp07

0x28fa,	// (0x0001c717) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00029bb0) cell_tport_appsw_pane_g

0x7e25,	// (0x00021c42) input_candi_list_open_g1

0xd68f,	// (0x000274ac) list_cale_time_pane_g6_ParamLimits

0xd68f,	// (0x000274ac) list_cale_time_pane_g6

0x8cae,	// (0x00022acb) aid_size_touch_calib_1_ParamLimits

0x8cae,	// (0x00022acb) aid_size_touch_calib_1

0x8cba,	// (0x00022ad7) aid_size_touch_calib_2_ParamLimits

0x8cba,	// (0x00022ad7) aid_size_touch_calib_2

0x8cc8,	// (0x00022ae5) aid_size_touch_calib_3_ParamLimits

0x8cc8,	// (0x00022ae5) aid_size_touch_calib_3

0x8cd8,	// (0x00022af5) aid_size_touch_calib_4_ParamLimits

0x8cd8,	// (0x00022af5) aid_size_touch_calib_4

0x8ce6,	// (0x00022b03) main_touch_calib_button_group_pane_ParamLimits

0x8ce6,	// (0x00022b03) main_touch_calib_button_group_pane

0x8cf4,	// (0x00022b11) main_touch_calib_pane_g1_ParamLimits

0x8d00,	// (0x00022b1d) main_touch_calib_pane_g2_ParamLimits

0x8d0c,	// (0x00022b29) main_touch_calib_pane_g3_ParamLimits

0x8d18,	// (0x00022b35) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0002957e) main_touch_calib_pane_g_ParamLimits

0x8d24,	// (0x00022b41) main_touch_calib_pane_t1_ParamLimits

0x8d3b,	// (0x00022b58) main_touch_calib_pane_t2_ParamLimits

0x8d52,	// (0x00022b6f) main_touch_calib_pane_t3_ParamLimits

0x8d66,	// (0x00022b83) main_touch_calib_pane_t4_ParamLimits

0x8d7a,	// (0x00022b97) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00029587) main_touch_calib_pane_t_ParamLimits

0x07ab,	// (0x0001a5c8) list_single_fp_cale_pane_g3_ParamLimits

0x07ab,	// (0x0001a5c8) list_single_fp_cale_pane_g3

0x49f6,	// (0x0001e813) bg_button_pane_cp012_ParamLimits

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp03_ParamLimits

0x5932,	// (0x0001f74f) cell_vitu2_function_top_pane_g1_ParamLimits

0x49f6,	// (0x0001e813) bg_vkb2_func_pane_cp04_ParamLimits

0xaed5,	// (0x00024cf2) main_ncimui_button_group_pane_ParamLimits

0xaed5,	// (0x00024cf2) main_ncimui_button_group_pane

0xaf3b,	// (0x00024d58) main_ncimui_pane_t3_ParamLimits

0xaf3b,	// (0x00024d58) main_ncimui_pane_t3

0x2a26,	// (0x0001c843) phacti_button_group_pane

0x2d1f,	// (0x0001cb3c) aid_size_list_single_double_ParamLimits

0xbe28,	// (0x00025c45) popup_ezdial_listscroll_window_ParamLimits

0xbe4b,	// (0x00025c68) popup_number_entry_window_cp01_ParamLimits

0xbef7,	// (0x00025d14) phacti_button_pane_ParamLimits

0xbef7,	// (0x00025d14) phacti_button_pane

0xc860,	// (0x0002667d) bg_button_pane_cp14

0x2e1c,	// (0x0001cc39) phacti_button_pane_t1

0xbf08,	// (0x00025d25) main_touch_calib_button_pane_ParamLimits

0xbf08,	// (0x00025d25) main_touch_calib_button_pane

0xcffb,	// (0x00026e18) bg_button_pane_cp18_ParamLimits

0xcffb,	// (0x00026e18) bg_button_pane_cp18

0x2e2a,	// (0x0001cc47) main_touch_calib_button_pane_t1_ParamLimits

0x2e2a,	// (0x0001cc47) main_touch_calib_button_pane_t1

0x2e40,	// (0x0001cc5d) main_touch_calib_button_pane_t2_ParamLimits

0x2e40,	// (0x0001cc5d) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00029c69) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00029c69) main_touch_calib_button_pane_t

0xc860,	// (0x0002667d) cell_ncimui_button_pane

0xc860,	// (0x0002667d) bg_button_pane_cp032

0x2e5e,	// (0x0001cc7b) cell_ncimui_button_pane_t1

0x5245,	// (0x0001f062) image3_infobar_pane_ParamLimits

0x5245,	// (0x0001f062) image3_infobar_pane

0xb2b4,	// (0x000250d1) fs_bigclock_status_pane_ParamLimits

0xb2b4,	// (0x000250d1) fs_bigclock_status_pane

0xb2c1,	// (0x000250de) main_fs_bigclock_clock_pane_ParamLimits

0xb2c1,	// (0x000250de) main_fs_bigclock_clock_pane

0xb2d7,	// (0x000250f4) main_fs_bigclock_indi_pane_ParamLimits

0xb2d7,	// (0x000250f4) main_fs_bigclock_indi_pane

0xb306,	// (0x00025123) main_fs_bigclock_swipe_pane_ParamLimits

0xb306,	// (0x00025123) main_fs_bigclock_swipe_pane

0xc860,	// (0x0002667d) main_fs_clock_dumped_data

0x2294,	// (0x0001c0b1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2294,	// (0x0001c0b1) list_single_fs_bigclock_indicator_pane_g1

0x22bd,	// (0x0001c0da) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x22bd,	// (0x0001c0da) list_single_fs_bigclock_indicator_pane_g2

0x22d7,	// (0x0001c0f4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x22d7,	// (0x0001c0f4) list_single_fs_bigclock_indicator_pane_g3

0x22f1,	// (0x0001c10e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x22f1,	// (0x0001c10e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00029a9c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00029a9c) list_single_fs_bigclock_indicator_pane_g

0x231a,	// (0x0001c137) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x231a,	// (0x0001c137) list_single_fs_bigclock_indicator_pane_t1

0x2342,	// (0x0001c15f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2342,	// (0x0001c15f) list_single_fs_bigclock_indicator_pane_t2

0x236a,	// (0x0001c187) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x236a,	// (0x0001c187) list_single_fs_bigclock_indicator_pane_t3

0x2392,	// (0x0001c1af) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2392,	// (0x0001c1af) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00029aa7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00029aa7) list_single_fs_bigclock_indicator_pane_t

0x2e6c,	// (0x0001cc89) image3_infobar_fav_pane_ParamLimits

0x2e6c,	// (0x0001cc89) image3_infobar_fav_pane

0x2e7c,	// (0x0001cc99) image3_infobar_loc_pane_ParamLimits

0x2e7c,	// (0x0001cc99) image3_infobar_loc_pane

0x2e90,	// (0x0001ccad) image3_infobar_time_pane_ParamLimits

0x2e90,	// (0x0001ccad) image3_infobar_time_pane

0x0400,	// (0x0001a21d) image3_infobar_time_pane_g1

0x2ea0,	// (0x0001ccbd) image3_infobar_time_pane_t1

0x0400,	// (0x0001a21d) image3_infobar_loc_pane_g1

0x2eae,	// (0x0001cccb) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00029c6e) image3_infobar_loc_pane_g

0x2eb6,	// (0x0001ccd3) image3_infobar_loc_pane_t1

0x0400,	// (0x0001a21d) image3_infobar_fav_pane_g1

0x2ec4,	// (0x0001cce1) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00029c73) image3_infobar_fav_pane_g

0x2ecc,	// (0x0001cce9) fs_bigclock_status_battery_pane

0x2ed5,	// (0x0001ccf2) fs_bigclock_status_signal_pane

0x2ede,	// (0x0001ccfb) fs_bigclock_status_title_pane

0x2ee7,	// (0x0001cd04) fs_bigclock_status_signal_pane_g1

0x2ef0,	// (0x0001cd0d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00029c78) fs_bigclock_status_signal_pane_g

0x2ef8,	// (0x0001cd15) fs_bigclock_status_battery_pane_g1

0x2f01,	// (0x0001cd1e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00029c7d) fs_bigclock_status_battery_pane_g

0x2f09,	// (0x0001cd26) fs_bigclock_status_title_pane_t1

0x0400,	// (0x0001a21d) main_fs_bigclock_clock_pane_g1

0x2f17,	// (0x0001cd34) main_fs_bigclock_clock_pane_g2

0x2f17,	// (0x0001cd34) main_fs_bigclock_clock_pane_g3

0x2f17,	// (0x0001cd34) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00029c82) main_fs_bigclock_clock_pane_g

0x2f1f,	// (0x0001cd3c) main_fs_bigclock_clock_pane_t1

0x2f2d,	// (0x0001cd4a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00029c8b) main_fs_bigclock_clock_pane_t

0x2f3c,	// (0x0001cd59) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2f3c,	// (0x0001cd59) list_single_fs_bigclock_indicator_pane

0xbf18,	// (0x00025d35) list_single_fs_bigclock_pane_ParamLimits

0xbf18,	// (0x00025d35) list_single_fs_bigclock_pane

0x2f56,	// (0x0001cd73) main_fs_bigclock_indicator_pane_t1

0x2f65,	// (0x0001cd82) list_single_fs_bigclock_pane_g1

0x2f6d,	// (0x0001cd8a) list_single_fs_bigclock_pane_t1

0x0400,	// (0x0001a21d) main_fs_bigclock_swipe_pane_g1

0x2fb0,	// (0x0001cdcd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00029c9c) main_fs_bigclock_swipe_pane_g

0x2fb8,	// (0x0001cdd5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2fb8,	// (0x0001cdd5) main_fs_bigclock_swipe_pane_t1

0x765f,	// (0x0002147c) call_type_pane_ParamLimits

0xc860,	// (0x0002667d) main_btmg_pane

0x2bfb,	// (0x0001ca18) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2bfb,	// (0x0001ca18) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00029c0f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00029c0f) list_single_cale_mrui_row_pane_g

0x2d5a,	// (0x0001cb77) list_recal_vselct_arw_lo_pane

0x2d62,	// (0x0001cb7f) list_recal_vselct_arw_up_pane

0x2d6a,	// (0x0001cb87) list_recal_vselct_pane

0xbf7b,	// (0x00025d98) btmg_button_pane

0xbf87,	// (0x00025da4) main_btmg_pane_g1

0xc860,	// (0x0002667d) bg_button_pane_cp044

0x2fd5,	// (0x0001cdf2) btmg_button_pane_t1

0xf022,	// (0x00028e3f) aid_listscroll_gen

0xcad0,	// (0x000268ed) main_cntbar_detail_pane

0x2918,	// (0x0001c735) list_cmail_folder_pane

0x2928,	// (0x0001c745) sp_fs_scroll_pane_cp03_ParamLimits

0xba3b,	// (0x00025858) list_single_fs_dyc_pane_cp01_ParamLimits

0xba3b,	// (0x00025858) list_single_fs_dyc_pane_cp01

0x2fe3,	// (0x0001ce00) aid_size_cmail_indent

0x2fec,	// (0x0001ce09) list_single_dyc_row_pane_cp01

0xbfaf,	// (0x00025dcc) cntbar_detail_list_pane_ParamLimits

0xbfaf,	// (0x00025dcc) cntbar_detail_list_pane

0xbfe9,	// (0x00025e06) main_cntbar_detail_cont_pane_ParamLimits

0xbfe9,	// (0x00025e06) main_cntbar_detail_cont_pane

0x75f9,	// (0x00021416) scroll_pane_cp032_ParamLimits

0x75f9,	// (0x00021416) scroll_pane_cp032

0xbff5,	// (0x00025e12) cntbar_detail_list_event_pane_ParamLimits

0xbff5,	// (0x00025e12) cntbar_detail_list_event_pane

0xbfbb,	// (0x00025dd8) cntbar_detail_list_shct_pane

0xd518,	// (0x00027335) aid_list_gen

0x2ff5,	// (0x0001ce12) aid_scroll

0x2ffe,	// (0x0001ce1b) aid_size_touch_scroll_bar

0xc009,	// (0x00025e26) aid_list_double

0x3007,	// (0x0001ce24) aid_list_single

0x3010,	// (0x0001ce2d) aid_list_single_lg

0x3019,	// (0x0001ce36) aid_list_z_g_a_sm

0x3021,	// (0x0001ce3e) aid_list_z_g_d

0x3029,	// (0x0001ce46) aid_txt_z_prm

0xc012,	// (0x00025e2f) aid_txt_z_prm_cp01

0xc020,	// (0x00025e3d) aid_txt_z_sec

0xc02e,	// (0x00025e4b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc02e,	// (0x00025e4b) main_cntbar_detail_cont_pane_g1

0xc03b,	// (0x00025e58) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc03b,	// (0x00025e58) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00029ca1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00029ca1) main_cntbar_detail_cont_pane_g

0x3037,	// (0x0001ce54) main_cntbar_detail_cont_pane_t1

0x3045,	// (0x0001ce62) main_cntbar_detail_cont_pane_t2

0x3053,	// (0x0001ce70) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00029ca6) main_cntbar_detail_cont_pane_t

0xc047,	// (0x00025e64) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc047,	// (0x00025e64) cell_cntbar_detail_list_shct_pane

0x3061,	// (0x0001ce7e) cntbar_detail_list_shct_pane_g1

0x306a,	// (0x0001ce87) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00029cad) cntbar_detail_list_shct_pane_g

0xc05b,	// (0x00025e78) cntbar_detail_list_event_pane_g1_ParamLimits

0xc05b,	// (0x00025e78) cntbar_detail_list_event_pane_g1

0xc067,	// (0x00025e84) cntbar_detail_list_event_pane_g2_ParamLimits

0xc067,	// (0x00025e84) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00029cb2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00029cb2) cntbar_detail_list_event_pane_g

0xc0d3,	// (0x00025ef0) cntbar_detail_list_event_pane_t1_ParamLimits

0xc0d3,	// (0x00025ef0) cntbar_detail_list_event_pane_t1

0xc0e8,	// (0x00025f05) cntbar_detail_list_event_pane_t2_ParamLimits

0xc0e8,	// (0x00025f05) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00029cbf) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00029cbf) cntbar_detail_list_event_pane_t

0x0400,	// (0x0001a21d) cell_cntbar_detail_list_shct_pane_g1

0x7989,	// (0x000217a6) navi_pane_mv_g3

0xcad0,	// (0x000268ed) main_cntbar_detail_pane_ParamLimits

0xc860,	// (0x0002667d) main_notif_wgt_pane

0x4f84,	// (0x0001eda1) aid_tch_main_mp4_pane_g4

0x51b9,	// (0x0001efd6) popup_slider_window_cp02

0x2d50,	// (0x0001cb6d) list_recal_day_event_pane

0xbf8f,	// (0x00025dac) cntbar_detail_btn_pane_ParamLimits

0xbf8f,	// (0x00025dac) cntbar_detail_btn_pane

0xbf9f,	// (0x00025dbc) cntbar_detail_btn_pane_cp01_ParamLimits

0xbf9f,	// (0x00025dbc) cntbar_detail_btn_pane_cp01

0xbfbb,	// (0x00025dd8) cntbar_detail_list_shct_pane_ParamLimits

0xbfc7,	// (0x00025de4) cntbar_detail_pane_g1_ParamLimits

0xbfc7,	// (0x00025de4) cntbar_detail_pane_g1

0xbfd3,	// (0x00025df0) cntbar_detail_pane_t1_ParamLimits

0xbfd3,	// (0x00025df0) cntbar_detail_pane_t1

0xc073,	// (0x00025e90) cntbar_detail_list_event_pane_g3_ParamLimits

0xc073,	// (0x00025e90) cntbar_detail_list_event_pane_g3

0xc08b,	// (0x00025ea8) cntbar_detail_list_event_pane_g4_ParamLimits

0xc08b,	// (0x00025ea8) cntbar_detail_list_event_pane_g4

0xc0a3,	// (0x00025ec0) cntbar_detail_list_event_pane_g5_ParamLimits

0xc0a3,	// (0x00025ec0) cntbar_detail_list_event_pane_g5

0xc0bb,	// (0x00025ed8) cntbar_detail_list_event_pane_g6_ParamLimits

0xc0bb,	// (0x00025ed8) cntbar_detail_list_event_pane_g6

0xc0fd,	// (0x00025f1a) cntbar_detail_list_event_pane_t3_ParamLimits

0xc0fd,	// (0x00025f1a) cntbar_detail_list_event_pane_t3

0xc10f,	// (0x00025f2c) popup_notif_wgt_window_ParamLimits

0xc10f,	// (0x00025f2c) popup_notif_wgt_window

0xc11f,	// (0x00025f3c) popup_submenu_window_cp01_ParamLimits

0xc11f,	// (0x00025f3c) popup_submenu_window_cp01

0xdbdf,	// (0x000279fc) bg_popup_window_pane_cp10

0x3073,	// (0x0001ce90) listscroll_notif_wgt_pane

0x3084,	// (0x0001cea1) list_notif_wgt_window

0x308d,	// (0x0001ceaa) scroll_pane_cp033

0xc12d,	// (0x00025f4a) list_notif_wgt_row_pane_ParamLimits

0xc12d,	// (0x00025f4a) list_notif_wgt_row_pane

0x3096,	// (0x0001ceb3) aid_size_list_notif_wgt_del

0x30a3,	// (0x0001cec0) list_notif_wgt_row_pane_g1

0x30af,	// (0x0001cecc) list_notif_wgt_row_pane_g2

0x30bb,	// (0x0001ced8) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00029cc6) list_notif_wgt_row_pane_g

0x30c8,	// (0x0001cee5) list_notif_wgt_row_pane_t1

0x30dd,	// (0x0001cefa) list_notif_wgt_row_pane_t2

0x30ef,	// (0x0001cf0c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00029ccd) list_notif_wgt_row_pane_t

0x14fc,	// (0x0001b319) list_recal_day_event_pane_g1

0x3101,	// (0x0001cf1e) list_recal_day_event_pane_t1

0xc860,	// (0x0002667d) bg_button_pane_cp045

0x3110,	// (0x0001cf2d) cntbar_detail_btn_pane_t1

0xf02a,	// (0x00028e47) main_callh_pane_ParamLimits

0xf02a,	// (0x00028e47) main_callh_pane

0xc860,	// (0x0002667d) main_coverflow0_pane

0xc860,	// (0x0002667d) main_wgtman_pane

0xb31e,	// (0x0002513b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb31e,	// (0x0002513b) main_fs_bigclock_unlock_btn_pane

0x28f2,	// (0x0001c70f) bg_button_pane_cp16

0x2902,	// (0x0001c71f) cell_tport_appsw_pane_g3

0xc141,	// (0x00025f5e) cf0_flow_pane_ParamLimits

0xc141,	// (0x00025f5e) cf0_flow_pane

0x311e,	// (0x0001cf3b) listscroll_cf0_pane

0x3129,	// (0x0001cf46) main_cf0_pane_g1

0xc150,	// (0x00025f6d) main_cf0_pane_t1_ParamLimits

0xc150,	// (0x00025f6d) main_cf0_pane_t1

0xc164,	// (0x00025f81) main_cf0_pane_t2_ParamLimits

0xc164,	// (0x00025f81) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x00029cd4) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x00029cd4) main_cf0_pane_t

0x3133,	// (0x0001cf50) scroll_pane_cp11

0xc178,	// (0x00025f95) cf0_flow_pane_g1

0xc180,	// (0x00025f9d) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x00029cd9) cf0_flow_pane_g

0xc188,	// (0x00025fa5) cf0_flow_pane_t1

0xc860,	// (0x0002667d) main_call6_pane

0xc860,	// (0x0002667d) main_calllock_pane

0xc196,	// (0x00025fb3) call6_btn_grp_pane_ParamLimits

0xc196,	// (0x00025fb3) call6_btn_grp_pane

0xc1a5,	// (0x00025fc2) call6_pane_g1_ParamLimits

0xc1a5,	// (0x00025fc2) call6_pane_g1

0xc1b4,	// (0x00025fd1) popup_call6_1st_window_ParamLimits

0xc1b4,	// (0x00025fd1) popup_call6_1st_window

0xc1c2,	// (0x00025fdf) popup_call6_2nd_window_ParamLimits

0xc1c2,	// (0x00025fdf) popup_call6_2nd_window

0xc1d0,	// (0x00025fed) cell_call6_btn_pane_ParamLimits

0xc1d0,	// (0x00025fed) cell_call6_btn_pane

0xdbdf,	// (0x000279fc) bg_popup_call2_in_pane_cp03

0x313e,	// (0x0001cf5b) popup_call6_1st_window_g1

0x3146,	// (0x0001cf63) popup_call6_1st_window_g2

0x314e,	// (0x0001cf6b) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x00029cde) popup_call6_1st_window_g

0x3156,	// (0x0001cf73) popup_call6_1st_window_t1

0x3180,	// (0x0001cf9d) popup_call6_1st_window_t2

0x3190,	// (0x0001cfad) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x00029ce5) popup_call6_1st_window_t

0xdbdf,	// (0x000279fc) bg_popup_call2_in_pane_cp04

0x313e,	// (0x0001cf5b) popup_call6_2nd_window_g1

0x3146,	// (0x0001cf63) popup_call6_2nd_window_g2

0x314e,	// (0x0001cf6b) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x00029cde) popup_call6_2nd_window_g

0x3156,	// (0x0001cf73) popup_call6_2nd_window_t1

0xc860,	// (0x0002667d) bg_button_pane_cp15

0x31a0,	// (0x0001cfbd) cell_call6_btn_pane_g1

0x31a9,	// (0x0001cfc6) cell_call6_btn_pane_t1

0xc1df,	// (0x00025ffc) listscroll_wgtman_pane_ParamLimits

0xc1df,	// (0x00025ffc) listscroll_wgtman_pane

0xc1fd,	// (0x0002601a) wgtman_btn_pane_ParamLimits

0xc1fd,	// (0x0002601a) wgtman_btn_pane

0xda92,	// (0x000278af) aid_scroll_copy1

0x31b8,	// (0x0001cfd5) list_wgtman_pane

0xc232,	// (0x0002604f) wgtman_btn_pane_g1_ParamLimits

0xc232,	// (0x0002604f) wgtman_btn_pane_g1

0xc25a,	// (0x00026077) wgtman_btn_pane_t1_ParamLimits

0xc25a,	// (0x00026077) wgtman_btn_pane_t1

0x31c2,	// (0x0001cfdf) wgtman_btn_pane_t2_ParamLimits

0x31c2,	// (0x0001cfdf) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x00029cec) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x00029cec) wgtman_btn_pane_t

0xc291,	// (0x000260ae) listrow_wgtman_pane_ParamLimits

0xc291,	// (0x000260ae) listrow_wgtman_pane

0xc2ad,	// (0x000260ca) listrow_wgtman_pane_g1

0xc2ba,	// (0x000260d7) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x00029cf1) listrow_wgtman_pane_g

0xc2d8,	// (0x000260f5) listrow_wgtman_pane_t1

0xc2f0,	// (0x0002610d) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x00029cf6) listrow_wgtman_pane_t

0xc316,	// (0x00026133) wait_bar_pane_cp09

0x31d9,	// (0x0001cff6) main_calllock_btn_pane

0x31e3,	// (0x0001d000) main_calllock_pane_g1

0xc860,	// (0x0002667d) bg_button_pane_cp17

0x31ee,	// (0x0001d00b) main_calllock_btn_pane_g1

0x31f7,	// (0x0001d014) main_calllock_btn_pane_t1

0xc860,	// (0x0002667d) main_dialer3_pane

0xc860,	// (0x0002667d) main_fmrd2_pane

0x0400,	// (0x0001a21d) main_fs_bigclock_unlock_btn_pane_g1

0x320e,	// (0x0001d02b) main_fs_bigclock_unlock_btn_pane_t1

0xc328,	// (0x00026145) area_fmrd2_info_pane_ParamLimits

0xc328,	// (0x00026145) area_fmrd2_info_pane

0xc336,	// (0x00026153) area_fmrd2_visual_pane_ParamLimits

0xc336,	// (0x00026153) area_fmrd2_visual_pane

0xc344,	// (0x00026161) fmrd2_indi_pane_ParamLimits

0xc344,	// (0x00026161) fmrd2_indi_pane

0xc351,	// (0x0002616e) area_fmrd2_visual_pane_g1

0xc359,	// (0x00026176) area_fmrd2_visual_pane_t1

0xc369,	// (0x00026186) area_fmrd2_visual_pane_t2

0xc379,	// (0x00026196) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x00029d00) area_fmrd2_visual_pane_t

0xc389,	// (0x000261a6) area_fmrd2_info_pane_g1

0xc391,	// (0x000261ae) area_fmrd2_info_pane_t1

0xc3a1,	// (0x000261be) area_fmrd2_info_pane_t2

0xc3b1,	// (0x000261ce) area_fmrd2_info_pane_t3

0xc3c1,	// (0x000261de) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x00029d07) area_fmrd2_info_pane_t

0xc3cf,	// (0x000261ec) fmrd2_indi_pane_t1

0xc3df,	// (0x000261fc) fmrd2_indi_pane_t2

0xc3ef,	// (0x0002620c) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x00029d10) fmrd2_indi_pane_t

0x2300,	// (0x0001c11d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2300,	// (0x0001c11d) list_single_fs_bigclock_indicator_pane_g5

0x23a7,	// (0x0001c1c4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x23a7,	// (0x0001c1c4) list_single_fs_bigclock_indicator_pane_t5

0xbb89,	// (0x000259a6) aid_cell_bcale_month_pane_ParamLimits

0xbb89,	// (0x000259a6) aid_cell_bcale_month_pane

0xbb99,	// (0x000259b6) bcale_month_pane_ParamLimits

0xbb99,	// (0x000259b6) bcale_month_pane

0xbba9,	// (0x000259c6) bcale_preview_pane_ParamLimits

0xbba9,	// (0x000259c6) bcale_preview_pane

0x2f6d,	// (0x0001cd8a) list_single_fs_bigclock_pane_t1_ParamLimits

0x2f8c,	// (0x0001cda9) list_single_fs_bigclock_pane_t2_ParamLimits

0x2f8c,	// (0x0001cda9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00029c97) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00029c97) list_single_fs_bigclock_pane_t

0x3206,	// (0x0001d023) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x00029cfb) main_fs_bigclock_unlock_btn_pane_g

0xc3fd,	// (0x0002621a) aid_dia3_key_size_ParamLimits

0xc3fd,	// (0x0002621a) aid_dia3_key_size

0xc409,	// (0x00026226) aid_dia3_listrow_size_ParamLimits

0xc409,	// (0x00026226) aid_dia3_listrow_size

0xc419,	// (0x00026236) dia3_keypad_fun_pane_ParamLimits

0xc419,	// (0x00026236) dia3_keypad_fun_pane

0xc42b,	// (0x00026248) dia3_keypad_num_pane_ParamLimits

0xc42b,	// (0x00026248) dia3_keypad_num_pane

0xc43d,	// (0x0002625a) dia3_listscroll_pane_ParamLimits

0xc43d,	// (0x0002625a) dia3_listscroll_pane

0xc44b,	// (0x00026268) dia3_numentry_pane_ParamLimits

0xc44b,	// (0x00026268) dia3_numentry_pane

0x321c,	// (0x0001d039) dia3_list_pane

0x3227,	// (0x0001d044) scroll_pane_cp12

0xc860,	// (0x0002667d) bg_dia3_numentry_pane

0xc459,	// (0x00026276) dia3_numentry_pane_t1

0xc468,	// (0x00026285) cell_dia3_key_num_pane

0xc470,	// (0x0002628d) cell_dia3_key0_fun_pane_ParamLimits

0xc470,	// (0x0002628d) cell_dia3_key0_fun_pane

0xc47d,	// (0x0002629a) cell_dia3_key1_fun_pane_ParamLimits

0xc47d,	// (0x0002629a) cell_dia3_key1_fun_pane

0xc48a,	// (0x000262a7) dia3_listrow_pane

0x1ff3,	// (0x0001be10) bg_dia3_numentry_pane_g1

0xc860,	// (0x0002667d) bg_button_pane_cp21

0x3232,	// (0x0001d04f) cell_dia3_key_num_pane_t1

0x3240,	// (0x0001d05d) cell_dia3_key_num_pane_t2

0x324f,	// (0x0001d06c) cell_dia3_key_num_pane_t3

0x325e,	// (0x0001d07b) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x00029d17) cell_dia3_key_num_pane_t

0xc860,	// (0x0002667d) bg_button_pane_cp19

0xc497,	// (0x000262b4) cell_dia3_key0_fun_pane_g1

0xc860,	// (0x0002667d) bg_button_pane_cp20

0xc49f,	// (0x000262bc) cell_dia3_key1_fun_pane_g1

0xc4a7,	// (0x000262c4) area_left_week_number_pane

0xc4b3,	// (0x000262d0) area_top_day_name_pane

0xc4bf,	// (0x000262dc) frame_month_view_pane

0xc4cb,	// (0x000262e8) grid_month_view_pane

0x326d,	// (0x0001d08a) cell_top_day_name_pane_ParamLimits

0x326d,	// (0x0001d08a) cell_top_day_name_pane

0xbdc2,	// (0x00025bdf) cell_area_left_week_number_pane_ParamLimits

0xbdc2,	// (0x00025bdf) cell_area_left_week_number_pane

0xc4d7,	// (0x000262f4) cell_month_view_pane_ParamLimits

0xc4d7,	// (0x000262f4) cell_month_view_pane

0x3287,	// (0x0001d0a4) frm_month_g1

0xc4f4,	// (0x00026311) frm_month_g2

0xc4fe,	// (0x0002631b) frm_month_g3

0xc508,	// (0x00026325) frm_month_g4

0xc512,	// (0x0002632f) frm_month_g5

0xc51c,	// (0x00026339) frm_month_g6

0xc526,	// (0x00026343) frm_month_g7

0x3290,	// (0x0001d0ad) frm_month_g8

0x3299,	// (0x0001d0b6) frm_month_g9

0x32a2,	// (0x0001d0bf) frm_month_g10

0x32ab,	// (0x0001d0c8) frm_month_g11

0x32b4,	// (0x0001d0d1) frm_month_g12

0x32bd,	// (0x0001d0da) frm_month_g13

0x32c6,	// (0x0001d0e3) frm_month_g14

0x32d1,	// (0x0001d0ee) frm_month_g15

0x32dc,	// (0x0001d0f9) frm_month_g16

0x000f,

0xff03,	// (0x00029d20) frm_month_g

0xc532,	// (0x0002634f) cell_top_day_name_pane_t1

0xc541,	// (0x0002635e) cell_area_left_week_number_pane_g1

0xc549,	// (0x00026366) cell_area_left_week_number_pane_t1

0x0400,	// (0x0001a21d) cell_month_view_pane_g1

0xc558,	// (0x00026375) cell_month_view_pane_t1

0xc860,	// (0x0002667d) main_fps_pane

0x266e,	// (0x0001c48b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x266e,	// (0x0001c48b) cmail_ddmenu_btn02_pane_cp1

0x268a,	// (0x0001c4a7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x268a,	// (0x0001c4a7) cmail_ddmenu_btn02_pane_cp2

0xbe77,	// (0x00025c94) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbe77,	// (0x00025c94) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00029c4a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00029c4a) cmail_ddmenu_btn02_pane_g

0xbe95,	// (0x00025cb2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbe95,	// (0x00025cb2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00029c4f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00029c4f) cmail_ddmenu_btn02_pane_t

0xc567,	// (0x00026384) fps_text_pane_ParamLimits

0xc567,	// (0x00026384) fps_text_pane

0xc574,	// (0x00026391) main_fps_pane_g1_ParamLimits

0xc574,	// (0x00026391) main_fps_pane_g1

0xc582,	// (0x0002639f) wait_bar_pane_cp010_ParamLimits

0xc582,	// (0x0002639f) wait_bar_pane_cp010

0xc58e,	// (0x000263ab) fps_text_pane_t1_ParamLimits

0xc58e,	// (0x000263ab) fps_text_pane_t1

0x9bec,	// (0x00023a09) cam4_image_uncrop_pane_g1

0x9bf5,	// (0x00023a12) cam4_image_uncrop_pane_g2

0x9bfe,	// (0x00023a1b) cam4_image_uncrop_pane_g3

0x9c07,	// (0x00023a24) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00029716) cam4_image_uncrop_pane_g

0xc48a,	// (0x000262a7) dia3_listrow_pane_ParamLimits

0xc860,	// (0x0002667d) main_phob2_pane

0xb9a8,	// (0x000257c5) cell_tport_appsw_pane_cp02_ParamLimits

0xb9a8,	// (0x000257c5) cell_tport_appsw_pane_cp02

0xb9b7,	// (0x000257d4) cell_tport_appsw_pane_cp03_ParamLimits

0xb9b7,	// (0x000257d4) cell_tport_appsw_pane_cp03

0xc860,	// (0x0002667d) phob2_contact_card_pane

0xc860,	// (0x0002667d) phob2_listscroll_pane

0x32e7,	// (0x0001d104) phob2_list_pane

0x32ef,	// (0x0001d10c) scroll_pane_cp034

0xc5a7,	// (0x000263c4) phob2_cc_data_pane_ParamLimits

0xc5a7,	// (0x000263c4) phob2_cc_data_pane

0xc5c1,	// (0x000263de) phob2_cc_listscroll_pane_ParamLimits

0xc5c1,	// (0x000263de) phob2_cc_listscroll_pane

0xc5db,	// (0x000263f8) list_double_large_graphic_phob2_pane_ParamLimits

0xc5db,	// (0x000263f8) list_double_large_graphic_phob2_pane

0xc5fe,	// (0x0002641b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc5fe,	// (0x0002641b) list_double_large_graphic_phob2_pane_g1

0xc60b,	// (0x00026428) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc60b,	// (0x00026428) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x00029d41) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x00029d41) list_double_large_graphic_phob2_pane_g

0xc617,	// (0x00026434) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc617,	// (0x00026434) list_double_large_graphic_phob2_pane_t1

0xc62c,	// (0x00026449) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc62c,	// (0x00026449) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x00029d46) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x00029d46) list_double_large_graphic_phob2_pane_t

0xc860,	// (0x0002667d) list_highlight_pane_cp024

0x32f7,	// (0x0001d114) phob2_cc_button_pane

0xc63e,	// (0x0002645b) phob2_cc_data_pane_g1_ParamLimits

0xc63e,	// (0x0002645b) phob2_cc_data_pane_g1

0xc64a,	// (0x00026467) phob2_cc_data_pane_g2_ParamLimits

0xc64a,	// (0x00026467) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00029d4b) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00029d4b) phob2_cc_data_pane_g

0xc656,	// (0x00026473) phob2_cc_data_pane_t1_ParamLimits

0xc656,	// (0x00026473) phob2_cc_data_pane_t1

0xc668,	// (0x00026485) phob2_cc_data_pane_t2_ParamLimits

0xc668,	// (0x00026485) phob2_cc_data_pane_t2

0xc67a,	// (0x00026497) phob2_cc_data_pane_t3_ParamLimits

0xc67a,	// (0x00026497) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x00029d50) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x00029d50) phob2_cc_data_pane_t

0x32ff,	// (0x0001d11c) phob2_cc_list_pane_ParamLimits

0x32ff,	// (0x0001d11c) phob2_cc_list_pane

0x15a7,	// (0x0001b3c4) scroll_pane_cp035_ParamLimits

0x15a7,	// (0x0001b3c4) scroll_pane_cp035

0xcad0,	// (0x000268ed) bg_button_pane_cp033

0x330b,	// (0x0001d128) phob2_cc_button_pane_g1

0x3317,	// (0x0001d134) phob2_cc_button_pane_t1

0x332c,	// (0x0001d149) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x00029d57) phob2_cc_button_pane_t

0xc68c,	// (0x000264a9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc68c,	// (0x000264a9) list_double_large_graphic_phob2_cc_pane

0xc6bc,	// (0x000264d9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc6bc,	// (0x000264d9) list_double_large_graphic_phob2_cc_pane_g1

0xc6cd,	// (0x000264ea) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc6cd,	// (0x000264ea) list_double_large_graphic_phob2_cc_pane_g2

0xc6dc,	// (0x000264f9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc6dc,	// (0x000264f9) list_double_large_graphic_phob2_cc_pane_g3

0xc6eb,	// (0x00026508) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc6eb,	// (0x00026508) list_double_large_graphic_phob2_cc_pane_g4

0xc6fc,	// (0x00026519) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc6fc,	// (0x00026519) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x00029d5c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x00029d5c) list_double_large_graphic_phob2_cc_pane_g

0xc70b,	// (0x00026528) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc70b,	// (0x00026528) list_double_large_graphic_phob2_cc_pane_t1

0xc734,	// (0x00026551) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc734,	// (0x00026551) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x00029d67) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x00029d67) list_double_large_graphic_phob2_cc_pane_t

0x333e,	// (0x0001d15b) list_highlight_pane_cp025_ParamLimits

0x333e,	// (0x0001d15b) list_highlight_pane_cp025

0xcad0,	// (0x000268ed) bg_button_pane_cp033_ParamLimits

0x330b,	// (0x0001d128) phob2_cc_button_pane_g1_ParamLimits

0x3317,	// (0x0001d134) phob2_cc_button_pane_t1_ParamLimits

0x332c,	// (0x0001d149) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x00029d57) phob2_cc_button_pane_t_ParamLimits

0x5b9c,	// (0x0001f9b9) popup_wgtman_window

0x134d,	// (0x0001b16a) scroll_pane_cp038

0xc21a,	// (0x00026037) wgtman_btn_pane_cp_01_ParamLimits

0xc21a,	// (0x00026037) wgtman_btn_pane_cp_01

0x334c,	// (0x0001d169) wgtman_content_pane

0x3177,	// (0x0001cf94) wgtman_heading_pane

0xc860,	// (0x0002667d) bg_heading_pane_cp02

0x3355,	// (0x0001d172) wgtman_heading_pane_g1

0x335d,	// (0x0001d17a) wgtman_heading_pane_t1

0x336b,	// (0x0001d188) scroll_pane_cp036

0x3373,	// (0x0001d190) wgtman_list_pane

0x337b,	// (0x0001d198) wgtman_list_pane_t1_ParamLimits

0x337b,	// (0x0001d198) wgtman_list_pane_t1

0x53a1,	// (0x0001f1be) cam4_grid_pane

0xa35b,	// (0x00024178) bg_button_pane_cp015_ParamLimits

0xa36d,	// (0x0002418a) bg_button_pane_cp016_ParamLimits

0xa380,	// (0x0002419d) bg_button_pane_cp017_ParamLimits

0xa3d6,	// (0x000241f3) popup_vitu2_query_window_g3_ParamLimits

0xa3d6,	// (0x000241f3) popup_vitu2_query_window_g3

0xa491,	// (0x000242ae) popup_vitu2_query_window_t6_ParamLimits

0xa491,	// (0x000242ae) popup_vitu2_query_window_t6

0xa4bc,	// (0x000242d9) popup_vitu2_query_window_t7_ParamLimits

0xa4bc,	// (0x000242d9) popup_vitu2_query_window_t7

0x3165,	// (0x0001cf82) cam4_grid_pane_g1

0x316e,	// (0x0001cf8b) cam4_grid_pane_g2

0x3399,	// (0x0001d1b6) cam4_grid_pane_g3

0x33a2,	// (0x0001d1bf) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x00029d6c) cam4_grid_pane_g

0x65a4,	// (0x000203c1) aid_placing_vt_slider_lsc_ParamLimits

0x68e4,	// (0x00020701) vidtel_button_pane_ParamLimits

0x68e4,	// (0x00020701) vidtel_button_pane

0x33ad,	// (0x0001d1ca) bg_button_pane_cp034

0xc75d,	// (0x0002657a) vidtel_button_pane_g1

0x33b7,	// (0x0001d1d4) vidtel_button_pane_t1

0x148a,	// (0x0001b2a7) aid_size_vtel_slider_touch

0x15a7,	// (0x0001b3c4) scroll_pane_cp039

0x2031,	// (0x0001be4e) ncim_query_button_pane_cp01_ParamLimits

0x2050,	// (0x0001be6d) ncimui_query_pane_g1_ParamLimits

0xcad0,	// (0x000268ed) input_focus_pane_cp012_ParamLimits

0x2075,	// (0x0001be92) ncim_query_entry_pane_t1_ParamLimits

0x15a7,	// (0x0001b3c4) scroll_pane_cp039_ParamLimits

0x78fb,	// (0x00021718) navi_pane_bcale_mc_g1

0x7903,	// (0x00021720) navi_pane_bcale_mc_t1

0x26c7,	// (0x0001c4e4) main_sp_fs_email_pane_g1

0x26cf,	// (0x0001c4ec) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00029b0d) main_sp_fs_email_pane_g

0x2c07,	// (0x0001ca24) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2c07,	// (0x0001ca24) list_single_cale_mrui_row_pane_g3

0xbebd,	// (0x00025cda) list_single_recal_day_pane_g5_event_pane

0x2dcc,	// (0x0001cbe9) list_single_recal_day_pane_g7

0x33c5,	// (0x0001d1e2) list_recal_day_event_pane_cp01

0x33ce,	// (0x0001d1eb) list_recal_vselct_arw_lo_pane_cp01

0x33d6,	// (0x0001d1f3) list_recal_vselct_arw_up_pane_cp01

0x33de,	// (0x0001d1fb) list_recal_vselct_pane_cp01

0x14fc,	// (0x0001b319) list_recal_day_event_pane_cp01_g1

0x33e8,	// (0x0001d205) list_recal_day_event_pane_cp01_t1

0x2dd4,	// (0x0001cbf1) list_single_recal_day_pane_t1_ParamLimits

0x2de6,	// (0x0001cc03) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00029c5f) list_single_recal_day_pane_t_ParamLimits

0xcfcb,	// (0x00026de8) bg_notes_pane_ParamLimits

0xcfd9,	// (0x00026df6) list_notes_pane_ParamLimits

0x5df8,	// (0x0001fc15) scroll_pane_cp06_ParamLimits

0xcffb,	// (0x00026e18) main_notes_pane_ParamLimits

0xc860,	// (0x0002667d) main_welc_pane

0xc765,	// (0x00026582) main_welc_body_pane_ParamLimits

0xc765,	// (0x00026582) main_welc_body_pane

0xc77e,	// (0x0002659b) main_welc_opti_pane_ParamLimits

0xc77e,	// (0x0002659b) main_welc_opti_pane

0xc7b3,	// (0x000265d0) main_welc_pane_t1_ParamLimits

0xc7b3,	// (0x000265d0) main_welc_pane_t1

0xc7d1,	// (0x000265ee) main_welc_body_row_pane_ParamLimits

0xc7d1,	// (0x000265ee) main_welc_body_row_pane

0xc802,	// (0x0002661f) main_welc_opti_row_pane_ParamLimits

0xc802,	// (0x0002661f) main_welc_opti_row_pane

0x33f6,	// (0x0001d213) main_welc_opti_row_pane_g1

0x33fe,	// (0x0001d21b) main_welc_opti_row_pane_t1

0x340d,	// (0x0001d22a) main_welc_body_row_pane_t1

0x307c,	// (0x0001ce99) popup_notif_wgt_heading_pane

0x3096,	// (0x0001ceb3) aid_size_list_notif_wgt_del_ParamLimits

0x30a3,	// (0x0001cec0) list_notif_wgt_row_pane_g1_ParamLimits

0x30af,	// (0x0001cecc) list_notif_wgt_row_pane_g2_ParamLimits

0x30bb,	// (0x0001ced8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00029cc6) list_notif_wgt_row_pane_g_ParamLimits

0x30c8,	// (0x0001cee5) list_notif_wgt_row_pane_t1_ParamLimits

0x30dd,	// (0x0001cefa) list_notif_wgt_row_pane_t2_ParamLimits

0x30ef,	// (0x0001cf0c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00029ccd) list_notif_wgt_row_pane_t_ParamLimits

0xc2ad,	// (0x000260ca) listrow_wgtman_pane_g1_ParamLimits

0xc2ba,	// (0x000260d7) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x00029cf1) listrow_wgtman_pane_g_ParamLimits

0xc2d8,	// (0x000260f5) listrow_wgtman_pane_t1_ParamLimits

0xc2f0,	// (0x0002610d) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x00029cf6) listrow_wgtman_pane_t_ParamLimits

0xc316,	// (0x00026133) wait_bar_pane_cp09_ParamLimits

0xc860,	// (0x0002667d) bg_popup_heading_pane_cp02

0x341c,	// (0x0001d239) popup_notif_wgt_heading_pane_g1

0x3424,	// (0x0001d241) popup_notif_wgt_heading_pane_t1

0xc860,	// (0x0002667d) main_vids_pane

0xc860,	// (0x0002667d) vids_listscroll_pane

0xc813,	// (0x00026630) scroll_pane_cp040

0xc860,	// (0x0002667d) vids_list_pane

0xc81e,	// (0x0002663b) vids_list_double_pane_ParamLimits

0xc81e,	// (0x0002663b) vids_list_double_pane

0xc839,	// (0x00026656) vids_list_double_pane_g1

0xc842,	// (0x0002665f) vids_list_double_pane_t1

0xc852,	// (0x0002666f) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x00029d7a) vids_list_double_pane_t

0x49f6,	// (0x0001e813) main_ncimui_pane_ParamLimits

0xaeed,	// (0x00024d0a) main_ncimui_pane_g1_ParamLimits

0xaef9,	// (0x00024d16) main_ncimui_pane_g2_ParamLimits

0xaef9,	// (0x00024d16) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00029a12) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00029a12) main_ncimui_pane_g

0xc799,	// (0x000265b6) main_welc_pane_g1_ParamLimits

0xc799,	// (0x000265b6) main_welc_pane_g1

0xc7a5,	// (0x000265c2) main_welc_pane_g2_ParamLimits

0xc7a5,	// (0x000265c2) main_welc_pane_g2

0x0001,

0xff58,	// (0x00029d75) main_welc_pane_g_ParamLimits

0xff58,	// (0x00029d75) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
