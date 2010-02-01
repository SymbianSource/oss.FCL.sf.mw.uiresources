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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00065464 };

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
0x6dc2,	// (0x0006c226) Screen

0x6dce,	// (0x0006c232) application_window

0x6e34,	// (0x0006c298) area_bottom_pane_ParamLimits

0x6e34,	// (0x0006c298) area_bottom_pane

0x6e8d,	// (0x0006c2f1) area_top_pane_ParamLimits

0x6e8d,	// (0x0006c2f1) area_top_pane

0xe8c7,	// (0x00073d2b) call_video_uplink_pane_ParamLimits

0xe8c7,	// (0x00073d2b) call_video_uplink_pane

0x6f1a,	// (0x0006c37e) main_pane_ParamLimits

0x6f1a,	// (0x0006c37e) main_pane

0x2075,	// (0x000674d9) context_pane

0x9f37,	// (0x0006f39b) navi_pane

0x9f57,	// (0x0006f3bb) popup_cale_events_window_ParamLimits

0x9f57,	// (0x0006f3bb) popup_cale_events_window

0x2088,	// (0x000674ec) popup_mup_playback_window

0x9f6f,	// (0x0006f3d3) signal_pane

0xf097,	// (0x000744fb) main_browser_pane

0x0bbf,	// (0x00066023) main_burst_pane

0x9e0d,	// (0x0006f271) main_calc_pane

0x0bbf,	// (0x00066023) main_cale_day_pane

0xf097,	// (0x000744fb) main_cale_month_pane

0x0bbf,	// (0x00066023) main_cale_week_pane

0x0bbf,	// (0x00066023) main_call_pane

0xed2d,	// (0x00074191) main_call_poc_pane

0x0bbf,	// (0x00066023) main_camera_pane

0x0bbf,	// (0x00066023) main_chi_dic_pane

0x0a4e,	// (0x00065eb2) main_clock_pane

0xed2d,	// (0x00074191) main_fmradio_pane

0x0bbf,	// (0x00066023) main_graph_messa_pane

0xed2d,	// (0x00074191) main_help_pane

0xf097,	// (0x000744fb) main_im_pane

0xef88,	// (0x000743ec) main_image_pane_ParamLimits

0xef88,	// (0x000743ec) main_image_pane

0xed2d,	// (0x00074191) main_location2_pane

0x0bbf,	// (0x00066023) main_location_pane

0xed2d,	// (0x00074191) main_messa_pane

0xed2d,	// (0x00074191) main_mp2_pane

0x0bbf,	// (0x00066023) main_mp_pane

0xed2d,	// (0x00074191) main_msg_pane

0xed2d,	// (0x00074191) main_mup_eq_pane

0xed2d,	// (0x00074191) main_mup_pane

0x0bbf,	// (0x00066023) main_notes_pane

0xed2d,	// (0x00074191) main_pec_pane

0xed2d,	// (0x00074191) main_phob_pane

0xed2d,	// (0x00074191) main_pinb_pane

0xed2d,	// (0x00074191) main_postcard_pane

0xed2d,	// (0x00074191) main_qdial_pane

0x0bbf,	// (0x00066023) main_skin_pane

0xed2d,	// (0x00074191) main_smil2_pane

0x0bbf,	// (0x00066023) main_smil_pane

0x0bbf,	// (0x00066023) main_video_pane

0x0bbf,	// (0x00066023) main_video_tele_pane

0xef88,	// (0x000743ec) main_viewer_pane_ParamLimits

0xef88,	// (0x000743ec) main_viewer_pane

0x0bbf,	// (0x00066023) main_vorec_pane

0x9e43,	// (0x0006f2a7) popup_blid_sat_info_window_ParamLimits

0x9e43,	// (0x0006f2a7) popup_blid_sat_info_window

0x9e59,	// (0x0006f2bd) popup_dyc_status_message_window_ParamLimits

0x9e59,	// (0x0006f2bd) popup_dyc_status_message_window

0x9e67,	// (0x0006f2cb) popup_grid_large_graphic_window_ParamLimits

0x9e67,	// (0x0006f2cb) popup_grid_large_graphic_window

0x9edb,	// (0x0006f33f) popup_loc_request_window_ParamLimits

0x9edb,	// (0x0006f33f) popup_loc_request_window

0x9f0f,	// (0x0006f373) popup_wml_address_window_ParamLimits

0x9f0f,	// (0x0006f373) popup_wml_address_window

0x9ce5,	// (0x0006f149) call_muted_g1

0x99a4,	// (0x0006ee08) popup_call_audio_conf_window_ParamLimits

0x99a4,	// (0x0006ee08) popup_call_audio_conf_window

0x9cf5,	// (0x0006f159) popup_call_audio_first_window_ParamLimits

0x9cf5,	// (0x0006f159) popup_call_audio_first_window

0x9d35,	// (0x0006f199) popup_call_audio_in_window_ParamLimits

0x9d35,	// (0x0006f199) popup_call_audio_in_window

0x9d59,	// (0x0006f1bd) popup_call_audio_out_window_ParamLimits

0x9d59,	// (0x0006f1bd) popup_call_audio_out_window

0x9d7b,	// (0x0006f1df) popup_call_audio_second_window_ParamLimits

0x9d7b,	// (0x0006f1df) popup_call_audio_second_window

0x9dab,	// (0x0006f20f) popup_call_audio_wait_window_ParamLimits

0x9dab,	// (0x0006f20f) popup_call_audio_wait_window

0x9dcc,	// (0x0006f230) popup_number_entry_window_ParamLimits

0x9dcc,	// (0x0006f230) popup_number_entry_window

0xe90e,	// (0x00073d72) bg_popup_call_pane_cp05_ParamLimits

0xe90e,	// (0x00073d72) bg_popup_call_pane_cp05

0xe92e,	// (0x00073d92) popup_number_entry_window_t1

0xe941,	// (0x00073da5) popup_number_entry_window_t2

0xe961,	// (0x00073dc5) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00074550) popup_number_entry_window_t

0xe973,	// (0x00073dd7) text_title_cp2

0xe986,	// (0x00073dea) bg_popup_call_pane_cp_ParamLimits

0xe986,	// (0x00073dea) bg_popup_call_pane_cp

0xe994,	// (0x00073df8) call_thumbnail_pane

0xe99c,	// (0x00073e00) popup_call_audio_in_window_g1_ParamLimits

0xe99c,	// (0x00073e00) popup_call_audio_in_window_g1

0xe9a8,	// (0x00073e0c) popup_call_audio_in_window_g2_ParamLimits

0xe9a8,	// (0x00073e0c) popup_call_audio_in_window_g2

0xe9b4,	// (0x00073e18) popup_call_audio_in_window_g3_ParamLimits

0xe9b4,	// (0x00073e18) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00074559) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00074559) popup_call_audio_in_window_g

0xe9c0,	// (0x00073e24) popup_call_audio_in_window_t1_ParamLimits

0xe9c0,	// (0x00073e24) popup_call_audio_in_window_t1

0xe9db,	// (0x00073e3f) popup_call_audio_in_window_t2_ParamLimits

0xe9db,	// (0x00073e3f) popup_call_audio_in_window_t2

0xe9f6,	// (0x00073e5a) popup_call_audio_in_window_t3_ParamLimits

0xe9f6,	// (0x00073e5a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00074560) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00074560) popup_call_audio_in_window_t

0xe986,	// (0x00073dea) bg_popup_call_pane_cp01_ParamLimits

0xe986,	// (0x00073dea) bg_popup_call_pane_cp01

0xe994,	// (0x00073df8) call_thumbnail_pane_cp02

0xea09,	// (0x00073e6d) call_type_pane_cp022

0xea11,	// (0x00073e75) popup_call_audio_out_window_g1_ParamLimits

0xea11,	// (0x00073e75) popup_call_audio_out_window_g1

0xea23,	// (0x00073e87) popup_call_audio_out_window_g2_ParamLimits

0xea23,	// (0x00073e87) popup_call_audio_out_window_g2

0xea2f,	// (0x00073e93) popup_call_audio_out_window_g3_ParamLimits

0xea2f,	// (0x00073e93) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00074567) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00074567) popup_call_audio_out_window_g

0xea41,	// (0x00073ea5) popup_call_audio_out_window_t1_ParamLimits

0xea41,	// (0x00073ea5) popup_call_audio_out_window_t1

0xea59,	// (0x00073ebd) popup_call_audio_out_window_t2_ParamLimits

0xea59,	// (0x00073ebd) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0007456e) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0007456e) popup_call_audio_out_window_t

0xea6e,	// (0x00073ed2) bg_popup_call_pane_ParamLimits

0xea6e,	// (0x00073ed2) bg_popup_call_pane

0x710f,	// (0x0006c573) call_thumbnail_pane_cp_ParamLimits

0x710f,	// (0x0006c573) call_thumbnail_pane_cp

0xeaf2,	// (0x00073f56) call_type_pane_cp01_ParamLimits

0xeaf2,	// (0x00073f56) call_type_pane_cp01

0xeb36,	// (0x00073f9a) popup_call_audio_first_window_g1_ParamLimits

0xeb36,	// (0x00073f9a) popup_call_audio_first_window_g1

0xeb82,	// (0x00073fe6) popup_call_audio_first_window_g2_ParamLimits

0xeb82,	// (0x00073fe6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00074573) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00074573) popup_call_audio_first_window_g

0xebc6,	// (0x0007402a) popup_call_audio_first_window_t1_ParamLimits

0xebc6,	// (0x0007402a) popup_call_audio_first_window_t1

0xec72,	// (0x000740d6) popup_call_audio_first_window_t4_ParamLimits

0xec72,	// (0x000740d6) popup_call_audio_first_window_t4

0xecfe,	// (0x00074162) popup_call_audio_first_window_t5_ParamLimits

0xecfe,	// (0x00074162) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00074578) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00074578) popup_call_audio_first_window_t

0xed2d,	// (0x00074191) bg_popup_call_pane_cp02

0xed37,	// (0x0007419b) call_type_pane_cp023

0xed3f,	// (0x000741a3) popup_call_audio_wait_window_g1

0xed47,	// (0x000741ab) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0007457f) popup_call_audio_wait_window_g

0xed4f,	// (0x000741b3) popup_call_audio_wait_window_t3

0xed5d,	// (0x000741c1) bg_popup_call_pane_cp03_ParamLimits

0xed5d,	// (0x000741c1) bg_popup_call_pane_cp03

0xedbd,	// (0x00074221) call_thumbnail_pane_cp011_ParamLimits

0xedbd,	// (0x00074221) call_thumbnail_pane_cp011

0xedc9,	// (0x0007422d) call_type_pane_cp034_ParamLimits

0xedc9,	// (0x0007422d) call_type_pane_cp034

0xee05,	// (0x00074269) popup_call_audio_second_window_g1_ParamLimits

0xee05,	// (0x00074269) popup_call_audio_second_window_g1

0xee41,	// (0x000742a5) popup_call_audio_second_window_g2_ParamLimits

0xee41,	// (0x000742a5) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00074584) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00074584) popup_call_audio_second_window_g

0xee7d,	// (0x000742e1) popup_call_audio_second_window_t1_ParamLimits

0xee7d,	// (0x000742e1) popup_call_audio_second_window_t1

0xeefe,	// (0x00074362) popup_call_audio_second_window_t2_ParamLimits

0xeefe,	// (0x00074362) popup_call_audio_second_window_t2

0xef34,	// (0x00074398) popup_call_audio_second_window_t3_ParamLimits

0xef34,	// (0x00074398) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00074589) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00074589) popup_call_audio_second_window_t

0xed2d,	// (0x00074191) bg_popup_call_pane_cp04

0xef6a,	// (0x000743ce) list_conf_pane

0xef72,	// (0x000743d6) popup_call_audio_conf_window_t1

0xef80,	// (0x000743e4) call_thumbnail_pane_g1

0xef88,	// (0x000743ec) bg_pinb_pane_ParamLimits

0xef88,	// (0x000743ec) bg_pinb_pane

0xef96,	// (0x000743fa) find_pinb_pane

0xef9f,	// (0x00074403) listscroll_pinb_pane_ParamLimits

0xef9f,	// (0x00074403) listscroll_pinb_pane

0xefae,	// (0x00074412) pinb_bg_pane_g1

0x7133,	// (0x0006c597) pinb_bg_pane_g2

0x713f,	// (0x0006c5a3) pinb_bg_pane_g3

0x714b,	// (0x0006c5af) pinb_bg_pane_g4

0x7157,	// (0x0006c5bb) pinb_bg_pane_g5

0x7163,	// (0x0006c5c7) pinb_bg_pane_g6

0x716e,	// (0x0006c5d2) pinb_bg_pane_g7

0x7179,	// (0x0006c5dd) pinb_bg_pane_g8

0x7184,	// (0x0006c5e8) pinb_bg_pane_g9

0x718e,	// (0x0006c5f2) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00074590) pinb_bg_pane_g

0x71a3,	// (0x0006c607) grid_pinb_pane

0x71ae,	// (0x0006c612) list_pinb_pane

0x71b9,	// (0x0006c61d) scroll_pane_cp01_ParamLimits

0x71b9,	// (0x0006c61d) scroll_pane_cp01

0xefc0,	// (0x00074424) find_pinb_pane_g1_ParamLimits

0xefc0,	// (0x00074424) find_pinb_pane_g1

0xefd8,	// (0x0007443c) find_pinb_pane_t1

0xefea,	// (0x0007444e) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000745aa) find_pinb_pane_t

0xefff,	// (0x00074463) input_focus_pane_cp01_ParamLimits

0xefff,	// (0x00074463) input_focus_pane_cp01

0x71cb,	// (0x0006c62f) cell_pinb_pane_ParamLimits

0x71cb,	// (0x0006c62f) cell_pinb_pane

0x71f9,	// (0x0006c65d) cell_pinb_pane_g1_ParamLimits

0x71f9,	// (0x0006c65d) cell_pinb_pane_g1

0x720e,	// (0x0006c672) cell_pinb_pane_g2_ParamLimits

0x720e,	// (0x0006c672) cell_pinb_pane_g2

0xf00b,	// (0x0007446f) cell_pinb_pane_g3_ParamLimits

0xf00b,	// (0x0007446f) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000745af) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000745af) cell_pinb_pane_g

0xed2d,	// (0x00074191) grid_highlight_pane_cp01

0x721a,	// (0x0006c67e) list_pinb_item_pane_ParamLimits

0x721a,	// (0x0006c67e) list_pinb_item_pane

0xed2d,	// (0x00074191) list_highlight_pane_cp02

0xf017,	// (0x0007447b) list_pinb_item_pane_g1_ParamLimits

0xf017,	// (0x0007447b) list_pinb_item_pane_g1

0xf024,	// (0x00074488) list_pinb_item_pane_g2_ParamLimits

0xf024,	// (0x00074488) list_pinb_item_pane_g2

0x7244,	// (0x0006c6a8) list_pinb_item_pane_g3_ParamLimits

0x7244,	// (0x0006c6a8) list_pinb_item_pane_g3

0xf030,	// (0x00074494) list_pinb_item_pane_g4_ParamLimits

0xf030,	// (0x00074494) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000745b6) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000745b6) list_pinb_item_pane_g

0xf03c,	// (0x000744a0) list_pinb_item_pane_t1_ParamLimits

0xf03c,	// (0x000744a0) list_pinb_item_pane_t1

0x726f,	// (0x0006c6d3) calc_display_pane

0x728d,	// (0x0006c6f1) calc_paper_pane

0x72a9,	// (0x0006c70d) grid_calc_pane

0xed2d,	// (0x00074191) bg_list_pane_cp01

0x72d5,	// (0x0006c739) clock_g1

0x72dd,	// (0x0006c741) clock_g2

0x0001,

0xf15b,	// (0x000745bf) clock_g

0x72e7,	// (0x0006c74b) clock_t1_ParamLimits

0x72e7,	// (0x0006c74b) clock_t1

0x72fc,	// (0x0006c760) clock_t2_ParamLimits

0x72fc,	// (0x0006c760) clock_t2

0x730e,	// (0x0006c772) clock_t3_ParamLimits

0x730e,	// (0x0006c772) clock_t3

0x7320,	// (0x0006c784) clock_t4_ParamLimits

0x7320,	// (0x0006c784) clock_t4

0x7332,	// (0x0006c796) clock_t5_ParamLimits

0x7332,	// (0x0006c796) clock_t5

0x7347,	// (0x0006c7ab) clock_t6_ParamLimits

0x7347,	// (0x0006c7ab) clock_t6

0x7359,	// (0x0006c7bd) clock_t7_ParamLimits

0x7359,	// (0x0006c7bd) clock_t7

0x736b,	// (0x0006c7cf) clock_t8_ParamLimits

0x736b,	// (0x0006c7cf) clock_t8

0x7381,	// (0x0006c7e5) clock_t9_ParamLimits

0x7381,	// (0x0006c7e5) clock_t9

0x0008,

0xf160,	// (0x000745c4) clock_t_ParamLimits

0xf160,	// (0x000745c4) clock_t

0xf053,	// (0x000744b7) popup_clock_analogue_window_cp02

0xf053,	// (0x000744b7) popup_clock_digital_window_cp01

0xf05b,	// (0x000744bf) listscroll_help_pane

0xed2d,	// (0x00074191) phob_pre_status_pane

0xf065,	// (0x000744c9) grid_qdial_pane

0xed2d,	// (0x00074191) listscroll_mce_pane

0xf06f,	// (0x000744d3) bg_notes_pane

0xf079,	// (0x000744dd) list_notes_pane

0x7397,	// (0x0006c7fb) scroll_pane_cp06

0xf083,	// (0x000744e7) bg_calc_paper_pane

0x73a2,	// (0x0006c806) list_calc_pane

0xf097,	// (0x000744fb) bg_calc_display_pane

0x73bc,	// (0x0006c820) calc_display_pane_t1

0x73d1,	// (0x0006c835) calc_display_pane_t2

0x73e6,	// (0x0006c84a) calc_display_pane_t3

0x0002,

0xf173,	// (0x000745d7) calc_display_pane_t

0x73f8,	// (0x0006c85c) cell_calc_pane_ParamLimits

0x73f8,	// (0x0006c85c) cell_calc_pane

0xf0a3,	// (0x00074507) bg_calc_paper_pane_g1

0xf0bb,	// (0x0007451f) bg_calc_paper_pane_g2

0xf0af,	// (0x00074513) bg_calc_paper_pane_g3

0xf0d3,	// (0x00074537) bg_calc_paper_pane_g4

0xf0c7,	// (0x0007452b) bg_calc_paper_pane_g5

0x7425,	// (0x0006c889) bg_calc_paper_pane_g6

0x7436,	// (0x0006c89a) bg_calc_paper_pane_g7

0x7447,	// (0x0006c8ab) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000745de) bg_calc_paper_pane_g

0x7458,	// (0x0006c8bc) calc_bg_paper_pane_g9

0x7469,	// (0x0006c8cd) list_calc_item_pane_ParamLimits

0x7469,	// (0x0006c8cd) list_calc_item_pane

0xf0df,	// (0x00074543) list_calc_item_pane_g1

0x74a3,	// (0x0006c907) list_calc_item_pane_t1_ParamLimits

0x74a3,	// (0x0006c907) list_calc_item_pane_t1

0x74b5,	// (0x0006c919) list_calc_item_pane_t2_ParamLimits

0x74b5,	// (0x0006c919) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000745ef) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000745ef) list_calc_item_pane_t

0x000e,	// (0x00065472) cell_calc_pane_g1

0x0018,	// (0x0006547c) grid_highlight_pane_cp02

0x004d,	// (0x000654b1) bg_calc_display_pane_g1

0x74e5,	// (0x0006c949) bg_calc_display_pane_g2

0x003a,	// (0x0006549e) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000745f9) bg_calc_display_pane_g

0x74ef,	// (0x0006c953) cell_qdial_pane_ParamLimits

0x74ef,	// (0x0006c953) cell_qdial_pane

0x7503,	// (0x0006c967) cell_qdial_pane_g1_ParamLimits

0x7503,	// (0x0006c967) cell_qdial_pane_g1

0x7510,	// (0x0006c974) cell_qdial_pane_g2_ParamLimits

0x7510,	// (0x0006c974) cell_qdial_pane_g2

0x0056,	// (0x000654ba) cell_qdial_pane_g3_ParamLimits

0x0056,	// (0x000654ba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00074600) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00074600) cell_qdial_pane_g

0x752e,	// (0x0006c992) cell_qdial_pane_t1_ParamLimits

0x752e,	// (0x0006c992) cell_qdial_pane_t1

0x7546,	// (0x0006c9aa) cell_qdial_pane_t2_ParamLimits

0x7546,	// (0x0006c9aa) cell_qdial_pane_t2

0x7559,	// (0x0006c9bd) cell_qdial_pane_t3_ParamLimits

0x7559,	// (0x0006c9bd) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00074609) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00074609) cell_qdial_pane_t

0xed2d,	// (0x00074191) grid_highlight_pane_cp04

0x0062,	// (0x000654c6) thumbnail_qdial_pane_ParamLimits

0x0062,	// (0x000654c6) thumbnail_qdial_pane

0x00be,	// (0x00065522) list_help_pane

0x00c7,	// (0x0006552b) scroll_pane_cp02

0x756c,	// (0x0006c9d0) help_list_pane_t1_ParamLimits

0x756c,	// (0x0006c9d0) help_list_pane_t1

0x75aa,	// (0x0006ca0e) bg_notes_pane_g2

0x75b2,	// (0x0006ca16) bg_notes_pane_g3

0x75ba,	// (0x0006ca1e) notes_bg_pane_g1

0x75c2,	// (0x0006ca26) notes_bg_pane_g4

0x75ca,	// (0x0006ca2e) notes_bg_pane_g5

0x75d2,	// (0x0006ca36) notes_bg_pane_g6

0x75da,	// (0x0006ca3e) notes_bg_pane_g7

0x75e2,	// (0x0006ca46) notes_bg_pane_g8

0x75ea,	// (0x0006ca4e) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00074627) notes_bg_pane_g

0x75f2,	// (0x0006ca56) list_notes_text_pane_ParamLimits

0x75f2,	// (0x0006ca56) list_notes_text_pane

0x012f,	// (0x00065593) list_notes_text_pane_g1

0x5ccc,	// (0x0006b130) list_notes_text_pane_t1

0xf097,	// (0x000744fb) listscroll_cale_week_pane

0x763f,	// (0x0006caa3) bg_cale_heading_pane

0x0149,	// (0x000655ad) bg_cale_pane_cp01

0x765b,	// (0x0006cabf) cale_week_corner_pane

0x766c,	// (0x0006cad0) cale_week_day_heading_pane

0x7688,	// (0x0006caec) cale_week_scroll_pane_g1

0x76a1,	// (0x0006cb05) cale_week_scroll_pane_g2

0x76b2,	// (0x0006cb16) cale_week_scroll_pane_g3

0x76c3,	// (0x0006cb27) cale_week_scroll_pane_g4

0x76d4,	// (0x0006cb38) cale_week_scroll_pane_g5

0x76e5,	// (0x0006cb49) cale_week_scroll_pane_g6

0x76f6,	// (0x0006cb5a) cale_week_scroll_pane_g7

0x7709,	// (0x0006cb6d) cale_week_scroll_pane_g8

0x771c,	// (0x0006cb80) cale_week_scroll_pane_g9

0x772d,	// (0x0006cb91) cale_week_scroll_pane_g10

0x773e,	// (0x0006cba2) cale_week_scroll_pane_g11

0x774f,	// (0x0006cbb3) cale_week_scroll_pane_g12

0x7768,	// (0x0006cbcc) cale_week_scroll_pane_g13

0x7781,	// (0x0006cbe5) cale_week_scroll_pane_g14

0x779a,	// (0x0006cbfe) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00074636) cale_week_scroll_pane_g

0x77b3,	// (0x0006cc17) cale_week_time_pane

0x77c6,	// (0x0006cc2a) grid_cale_week_pane

0x77e3,	// (0x0006cc47) scroll_pane_cp08

0x77fd,	// (0x0006cc61) cell_cale_week_pane_ParamLimits

0x77fd,	// (0x0006cc61) cell_cale_week_pane

0x784d,	// (0x0006ccb1) cale_week_day_heading_pane_t1

0x7861,	// (0x0006ccc5) cale_week_day_heading_pane_t2

0x7875,	// (0x0006ccd9) cale_week_day_heading_pane_t3

0x7889,	// (0x0006cced) cale_week_day_heading_pane_t4

0x789d,	// (0x0006cd01) cale_week_day_heading_pane_t5

0x78b1,	// (0x0006cd15) cale_week_day_heading_pane_t6

0x78c5,	// (0x0006cd29) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00074655) cale_week_day_heading_pane_t

0x0174,	// (0x000655d8) bg_cale_side_pane

0x78d9,	// (0x0006cd3d) cale_week_time_pane_t1

0x78f1,	// (0x0006cd55) cale_week_time_pane_t2

0x7909,	// (0x0006cd6d) cale_week_time_pane_t3

0x7921,	// (0x0006cd85) cale_week_time_pane_t4

0x7939,	// (0x0006cd9d) cale_week_time_pane_t5

0x7951,	// (0x0006cdb5) cale_week_time_pane_t6

0x7971,	// (0x0006cdd5) cale_week_time_pane_t7

0x7991,	// (0x0006cdf5) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00074664) cale_week_time_pane_t

0x79b1,	// (0x0006ce15) cell_cale_week_pane_g2

0x79c2,	// (0x0006ce26) cell_cale_week_pane_g3_ParamLimits

0x79c2,	// (0x0006ce26) cell_cale_week_pane_g3

0x0182,	// (0x000655e6) grid_highlight_pane_cp07

0x018a,	// (0x000655ee) listscroll_gms_pane

0x0194,	// (0x000655f8) grid_gms_pane

0x019d,	// (0x00065601) listscroll_gms_pane_g1

0x01a5,	// (0x00065609) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00074675) listscroll_gms_pane_g

0x79da,	// (0x0006ce3e) scroll_pane_cp010

0x79e5,	// (0x0006ce49) cell_gms_pane_ParamLimits

0x79e5,	// (0x0006ce49) cell_gms_pane

0x79f7,	// (0x0006ce5b) cell_gms_pane_g1

0x01ad,	// (0x00065611) cell_gms_pane_g2

0x012f,	// (0x00065593) cell_gms_pane_g3

0x01b5,	// (0x00065619) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0007467a) cell_gms_pane_g

0x01be,	// (0x00065622) grid_highlight_pane_cp09

0x9c8d,	// (0x0006f0f1) phob_pre_status_pane_g1

0x9c95,	// (0x0006f0f9) phob_pre_status_pane_g2

0x9c9d,	// (0x0006f101) phob_pre_status_pane_g3

0x9ca5,	// (0x0006f109) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00074a69) phob_pre_status_pane_g

0x9cb5,	// (0x0006f119) phob_pre_status_pane_t1

0x9cc5,	// (0x0006f129) phob_pre_status_pane_t2

0x9cd5,	// (0x0006f139) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00074a74) phob_pre_status_pane_t

0xed2d,	// (0x00074191) bg_list_pane_cp05

0x7a07,	// (0x0006ce6b) grid_vorec_pane

0x7a0f,	// (0x0006ce73) vorec_t1

0x7a1d,	// (0x0006ce81) vorec_t2

0x7a2b,	// (0x0006ce8f) vorec_t3

0x7a39,	// (0x0006ce9d) vorec_t4

0x7a47,	// (0x0006ceab) vorec_t5

0x7a55,	// (0x0006ceb9) vorec_t6

0x0006,

0xf21f,	// (0x00074683) vorec_t

0x7a71,	// (0x0006ced5) wait_bar_pane_cp01

0x0240,	// (0x000656a4) cell_vorec_pane_ParamLimits

0x0240,	// (0x000656a4) cell_vorec_pane

0x0253,	// (0x000656b7) cell_vorec_pane_g1

0xed2d,	// (0x00074191) grid_highlight_pane_cp05

0x7a89,	// (0x0006ceed) cams_zoom_pane

0x7a95,	// (0x0006cef9) image_vga_pane

0x7aa4,	// (0x0006cf08) main_camera_pane_g1

0x7ab2,	// (0x0006cf16) main_camera_pane_g2

0x7ac0,	// (0x0006cf24) main_camera_pane_g3

0x7acc,	// (0x0006cf30) main_camera_pane_g4

0x7ad8,	// (0x0006cf3c) main_camera_pane_g5

0x7ae4,	// (0x0006cf48) main_camera_pane_g6

0x7af0,	// (0x0006cf54) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00074692) main_camera_pane_g

0x7afc,	// (0x0006cf60) main_camera_pane_t1

0x7b0e,	// (0x0006cf72) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000746a3) main_camera_pane_t

0x7b2f,	// (0x0006cf93) cams_zoom_pane_cp_ParamLimits

0x7b2f,	// (0x0006cf93) cams_zoom_pane_cp

0x7b53,	// (0x0006cfb7) image_cif_pane_ParamLimits

0x7b53,	// (0x0006cfb7) image_cif_pane

0x7b71,	// (0x0006cfd5) image_subqcif_pane

0x7b79,	// (0x0006cfdd) main_video_pane_g1_ParamLimits

0x7b79,	// (0x0006cfdd) main_video_pane_g1

0x7b99,	// (0x0006cffd) main_video_pane_g2_ParamLimits

0x7b99,	// (0x0006cffd) main_video_pane_g2

0x7bcb,	// (0x0006d02f) main_video_pane_g3_ParamLimits

0x7bcb,	// (0x0006d02f) main_video_pane_g3

0x7bf6,	// (0x0006d05a) main_video_pane_g4_ParamLimits

0x7bf6,	// (0x0006d05a) main_video_pane_g4

0x7c21,	// (0x0006d085) main_video_pane_g5_ParamLimits

0x7c21,	// (0x0006d085) main_video_pane_g5

0x0269,	// (0x000656cd) main_video_pane_g6_ParamLimits

0x0269,	// (0x000656cd) main_video_pane_g6

0x0006,

0xf244,	// (0x000746a8) main_video_pane_g_ParamLimits

0xf244,	// (0x000746a8) main_video_pane_g

0x7c45,	// (0x0006d0a9) main_video_pane_t1_ParamLimits

0x7c45,	// (0x0006d0a9) main_video_pane_t1

0x0283,	// (0x000656e7) cams_zoom_pane_g1

0x028c,	// (0x000656f0) cams_zoom_pane_g2

0x0295,	// (0x000656f9) cams_zoom_pane_g3

0x029e,	// (0x00065702) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000746b7) cams_zoom_pane_g

0x7c8f,	// (0x0006d0f3) grid_cams_pane

0x7c9d,	// (0x0006d101) linegrid_cams_pane

0x7cab,	// (0x0006d10f) cell_cams_pane_ParamLimits

0x7cab,	// (0x0006d10f) cell_cams_pane

0x02a7,	// (0x0006570b) cams_burst_image_pane

0x02af,	// (0x00065713) cell_cams_pane_g1

0xed2d,	// (0x00074191) grid_highlight_pane_cp03

0x000e,	// (0x00065472) mp_bg_pane_g1

0xed2d,	// (0x00074191) bg_list_pane_cp03

0x1f4d,	// (0x000673b1) bg_mp_pane

0x1f55,	// (0x000673b9) grid_mp_pane

0x1f5d,	// (0x000673c1) media_player_g1

0x1f65,	// (0x000673c9) media_player_t1

0x1f73,	// (0x000673d7) media_player_t2

0x1f81,	// (0x000673e5) media_player_t3

0x1f8f,	// (0x000673f3) media_player_t4

0x1f9d,	// (0x00067401) media_player_t5

0x1fab,	// (0x0006740f) media_player_t6

0x1fb9,	// (0x0006741d) media_player_t7

0x0006,

0xf5ef,	// (0x00074a53) media_player_t

0x1fc7,	// (0x0006742b) wait_bar_pane_cp02

0xf5d4,	// (0x00074a38) main_usb_pane_t

0x9c84,	// (0x0006f0e8) cell_mp_pane

0x000e,	// (0x00065472) cell_mp_pane_g1

0xed2d,	// (0x00074191) grid_highlight_pane_cp06

0x02b7,	// (0x0006571b) grid_skin_colour_pane

0x02bf,	// (0x00065723) list_highlight_pane_cp03

0x7cbe,	// (0x0006d122) skin_g1

0x02c7,	// (0x0006572b) skin_t1

0x02d6,	// (0x0006573a) skin_t2

0x0001,

0xf288,	// (0x000746ec) skin_t

0x7cc8,	// (0x0006d12c) cell_skin_colour_pane_ParamLimits

0x7cc8,	// (0x0006d12c) cell_skin_colour_pane

0x02e4,	// (0x00065748) cell_skin_colour_pane_g1

0x7d4c,	// (0x0006d1b0) call_video_g1_ParamLimits

0x7d4c,	// (0x0006d1b0) call_video_g1

0x7d5c,	// (0x0006d1c0) call_video_g2_ParamLimits

0x7d5c,	// (0x0006d1c0) call_video_g2

0x0001,

0xf28d,	// (0x000746f1) call_video_g_ParamLimits

0xf28d,	// (0x000746f1) call_video_g

0x7db6,	// (0x0006d21a) call_video_uplink_pane_cp1_ParamLimits

0x7db6,	// (0x0006d21a) call_video_uplink_pane_cp1

0x02f6,	// (0x0006575a) call_video_uplink_pane_cp2

0x7e82,	// (0x0006d2e6) video_down_crop_pane_ParamLimits

0x7e82,	// (0x0006d2e6) video_down_crop_pane

0x7f74,	// (0x0006d3d8) video_down_pane_ParamLimits

0x7f74,	// (0x0006d3d8) video_down_pane

0x02fe,	// (0x00065762) video_down_subqcif_pane_ParamLimits

0x02fe,	// (0x00065762) video_down_subqcif_pane

0x0316,	// (0x0006577a) video_down_subqcif_pane_cp_ParamLimits

0x0316,	// (0x0006577a) video_down_subqcif_pane_cp

0x033a,	// (0x0006579e) im_reading_pane_ParamLimits

0x033a,	// (0x0006579e) im_reading_pane

0x8096,	// (0x0006d4fa) im_writing_pane_ParamLimits

0x8096,	// (0x0006d4fa) im_writing_pane

0x80b4,	// (0x0006d518) im_reading_pane_t1

0x0354,	// (0x000657b8) list_im_pane

0x0365,	// (0x000657c9) scroll_pane_cp07

0x8114,	// (0x0006d578) im_writing_pane_t1_ParamLimits

0x8114,	// (0x0006d578) im_writing_pane_t1

0x037e,	// (0x000657e2) im_writing_pane_t2_ParamLimits

0x037e,	// (0x000657e2) im_writing_pane_t2

0x0001,

0xf297,	// (0x000746fb) im_writing_pane_t_ParamLimits

0xf297,	// (0x000746fb) im_writing_pane_t

0xed2d,	// (0x00074191) input_focus_pane_cp04

0xed2d,	// (0x00074191) input_focus_pane_cp05

0x8126,	// (0x0006d58a) list_im_single_pane_ParamLimits

0x8126,	// (0x0006d58a) list_im_single_pane

0x8152,	// (0x0006d5b6) list_single_im_pane_t1

0x9c48,	// (0x0006f0ac) blid_accuracy_pane

0x9c50,	// (0x0006f0b4) blid_compass_pane

0x9c5a,	// (0x0006f0be) main_location_t1

0x9c68,	// (0x0006f0cc) main_location_t2

0x9c76,	// (0x0006f0da) main_location_t3

0x0002,

0xf5fe,	// (0x00074a62) main_location_t

0xed2d,	// (0x00074191) aid_levels_location

0x000e,	// (0x00065472) blid_accuracy_pane_g1

0x000e,	// (0x00065472) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0007475d) blid_accuracy_pane_g

0x03c6,	// (0x0006582a) wml_content_pane

0x0404,	// (0x00065868) wml_button_pane_ParamLimits

0x0404,	// (0x00065868) wml_button_pane

0x8161,	// (0x0006d5c5) wml_list_single_large_pane_ParamLimits

0x8161,	// (0x0006d5c5) wml_list_single_large_pane

0x8193,	// (0x0006d5f7) wml_list_single_medium_pane_ParamLimits

0x8193,	// (0x0006d5f7) wml_list_single_medium_pane

0x81cc,	// (0x0006d630) wml_list_single_small_pane_ParamLimits

0x81cc,	// (0x0006d630) wml_list_single_small_pane

0x0418,	// (0x0006587c) wml_selection_box_pane_ParamLimits

0x0418,	// (0x0006587c) wml_selection_box_pane

0x042b,	// (0x0006588f) wml_list_single_pane_t1

0x043a,	// (0x0006589e) wml_list_single_medium_pane_t1

0x0449,	// (0x000658ad) wml_list_single_large_pane_t1

0x0458,	// (0x000658bc) input_focus_pane_cp02_ParamLimits

0x0458,	// (0x000658bc) input_focus_pane_cp02

0x046b,	// (0x000658cf) wml_selection_box_pane_g1

0x0474,	// (0x000658d8) wml_selection_box_pane_t1_ParamLimits

0x0474,	// (0x000658d8) wml_selection_box_pane_t1

0xef88,	// (0x000743ec) bg_wml_button_pane_ParamLimits

0xef88,	// (0x000743ec) bg_wml_button_pane

0x048c,	// (0x000658f0) wml_button_pane_g1

0x0494,	// (0x000658f8) wml_button_pane_t1

0x048c,	// (0x000658f0) wml_button_bg_pane_g1

0x04a4,	// (0x00065908) wml_button_bg_pane_g2

0x04ac,	// (0x00065910) wml_button_bg_pane_g3

0x04b4,	// (0x00065918) wml_button_bg_pane_g4

0x04bc,	// (0x00065920) wml_button_bg_pane_g5

0x04c4,	// (0x00065928) wml_button_bg_pane_g6

0x04cc,	// (0x00065930) wml_button_bg_pane_g7

0x04d4,	// (0x00065938) wml_button_bg_pane_g8

0x04dc,	// (0x00065940) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00074700) wml_button_bg_pane_g

0x8214,	// (0x0006d678) bg_list_pane_cp02

0x04e4,	// (0x00065948) mce_header_pane_ParamLimits

0x04e4,	// (0x00065948) mce_header_pane

0x04fa,	// (0x0006595e) mce_icon_pane

0x04fa,	// (0x0006595e) mce_image_pane

0x0503,	// (0x00065967) mce_text_pane_ParamLimits

0x0503,	// (0x00065967) mce_text_pane

0x821e,	// (0x0006d682) scroll_pane_cp03

0x03fc,	// (0x00065860) scroll_pane_cp04

0x0516,	// (0x0006597a) scroll_pane_cp05_ParamLimits

0x0516,	// (0x0006597a) scroll_pane_cp05

0x8228,	// (0x0006d68c) mce_header_field_pane_ParamLimits

0x8228,	// (0x0006d68c) mce_header_field_pane

0x8248,	// (0x0006d6ac) mce_header_field_pane_2_ParamLimits

0x8248,	// (0x0006d6ac) mce_header_field_pane_2

0x825e,	// (0x0006d6c2) mce_header_field_pane_3

0x8266,	// (0x0006d6ca) list_single_mce_message_pane_ParamLimits

0x8266,	// (0x0006d6ca) list_single_mce_message_pane

0x8296,	// (0x0006d6fa) list_single_mce_smart_pane_ParamLimits

0x8296,	// (0x0006d6fa) list_single_mce_smart_pane

0x0522,	// (0x00065986) input_focus_pane_cp03

0x052b,	// (0x0006598f) list_header_data_pane

0x82d1,	// (0x0006d735) mce_header_field_pane_t1

0x82e1,	// (0x0006d745) list_single_mce_header_pane_ParamLimits

0x82e1,	// (0x0006d745) list_single_mce_header_pane

0x0533,	// (0x00065997) list_single_mce_header_pane_t1

0x0542,	// (0x000659a6) list_single_mce_message_pane_g1

0x054a,	// (0x000659ae) list_single_mce_message_pane_t1

0x8333,	// (0x0006d797) bg_cale_heading_pane_cp01_ParamLimits

0x8333,	// (0x0006d797) bg_cale_heading_pane_cp01

0x0558,	// (0x000659bc) bg_cale_pane_cp02_ParamLimits

0x0558,	// (0x000659bc) bg_cale_pane_cp02

0x8366,	// (0x0006d7ca) cale_month_corner_pane

0x837c,	// (0x0006d7e0) cale_month_day_heading_pane_ParamLimits

0x837c,	// (0x0006d7e0) cale_month_day_heading_pane

0x83bf,	// (0x0006d823) cale_month_pane_g1_ParamLimits

0x83bf,	// (0x0006d823) cale_month_pane_g1

0x83eb,	// (0x0006d84f) cale_month_pane_g2_ParamLimits

0x83eb,	// (0x0006d84f) cale_month_pane_g2

0x840e,	// (0x0006d872) cale_month_pane_g3_ParamLimits

0x840e,	// (0x0006d872) cale_month_pane_g3

0x844a,	// (0x0006d8ae) cale_month_pane_g4_ParamLimits

0x844a,	// (0x0006d8ae) cale_month_pane_g4

0x8486,	// (0x0006d8ea) cale_month_pane_g5_ParamLimits

0x8486,	// (0x0006d8ea) cale_month_pane_g5

0x84c2,	// (0x0006d926) cale_month_pane_g6_ParamLimits

0x84c2,	// (0x0006d926) cale_month_pane_g6

0x84fe,	// (0x0006d962) cale_month_pane_g7_ParamLimits

0x84fe,	// (0x0006d962) cale_month_pane_g7

0x854a,	// (0x0006d9ae) cale_month_pane_g8_ParamLimits

0x854a,	// (0x0006d9ae) cale_month_pane_g8

0x8596,	// (0x0006d9fa) cale_month_pane_g9_ParamLimits

0x8596,	// (0x0006d9fa) cale_month_pane_g9

0x85dc,	// (0x0006da40) cale_month_pane_g10_ParamLimits

0x85dc,	// (0x0006da40) cale_month_pane_g10

0x8622,	// (0x0006da86) cale_month_pane_g11_ParamLimits

0x8622,	// (0x0006da86) cale_month_pane_g11

0x8660,	// (0x0006dac4) cale_month_pane_g12_ParamLimits

0x8660,	// (0x0006dac4) cale_month_pane_g12

0x869e,	// (0x0006db02) cale_month_pane_g13_ParamLimits

0x869e,	// (0x0006db02) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00074713) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00074713) cale_month_pane_g

0x86dc,	// (0x0006db40) cale_month_week_pane

0x86ef,	// (0x0006db53) grid_cale_month_pane_ParamLimits

0x86ef,	// (0x0006db53) grid_cale_month_pane

0x872d,	// (0x0006db91) cale_month_day_heading_pane_t1

0x878b,	// (0x0006dbef) cale_month_day_heading_pane_t2

0x87f0,	// (0x0006dc54) cale_month_day_heading_pane_t3

0x8855,	// (0x0006dcb9) cale_month_day_heading_pane_t4

0x88ba,	// (0x0006dd1e) cale_month_day_heading_pane_t5

0x891f,	// (0x0006dd83) cale_month_day_heading_pane_t6

0x898c,	// (0x0006ddf0) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0007472e) cale_month_day_heading_pane_t

0x0174,	// (0x000655d8) bg_cale_side_pane_cp01

0x8a01,	// (0x0006de65) cale_month_week_pane_t1

0x8a18,	// (0x0006de7c) cale_month_week_pane_t2

0x8a2f,	// (0x0006de93) cale_month_week_pane_t3

0x8a46,	// (0x0006deaa) cale_month_week_pane_t4

0x8a5d,	// (0x0006dec1) cale_month_week_pane_t5

0x8a7c,	// (0x0006dee0) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0007473d) cale_month_week_pane_t

0x8a9b,	// (0x0006deff) cell_cale_month_pane_ParamLimits

0x8a9b,	// (0x0006deff) cell_cale_month_pane

0x8b69,	// (0x0006dfcd) cell_cale_month_pane_g1

0x8b75,	// (0x0006dfd9) cell_cale_month_pane_t1_ParamLimits

0x8b75,	// (0x0006dfd9) cell_cale_month_pane_t1

0x0182,	// (0x000655e6) grid_highlight_pane_cp08

0x000e,	// (0x00065472) main_smil_g1

0x8b91,	// (0x0006dff5) smil_status_pane

0x0599,	// (0x000659fd) smil_text_pane

0x1e65,	// (0x000672c9) bg_popup_call3_rect_pane_g8

0x1e6d,	// (0x000672d1) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000749f6) bg_popup_call3_rect_pane_g

0x2102,	// (0x00067566) smil_status_volume_pane_g1

0x05a3,	// (0x00065a07) smil_status_pane_t1

0xa02c,	// (0x0006f490) volume_smil_pane

0x05ba,	// (0x00065a1e) list_smil_text_pane

0x8ba4,	// (0x0006e008) scroll_pane_cp011

0x8baf,	// (0x0006e013) smil_text_list_pane_t1_ParamLimits

0x8baf,	// (0x0006e013) smil_text_list_pane_t1

0x8c5a,	// (0x0006e0be) aid_volume_smil_ParamLimits

0x8c5a,	// (0x0006e0be) aid_volume_smil

0x000e,	// (0x00065472) smil_volume_pane_g1

0x000e,	// (0x00065472) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0007475d) smil_volume_pane_g

0xf097,	// (0x000744fb) listscroll_cale_day_pane

0x05e6,	// (0x00065a4a) bg_cale_pane

0x05fe,	// (0x00065a62) list_cale_pane

0x060f,	// (0x00065a73) scroll_pane_cp09

0x0620,	// (0x00065a84) cale_bg_pane_g1

0x0628,	// (0x00065a8c) cale_bg_pane_g2

0x0630,	// (0x00065a94) cale_bg_pane_g3

0x0638,	// (0x00065a9c) cale_bg_pane_g4

0x0640,	// (0x00065aa4) cale_bg_pane_g5

0x0648,	// (0x00065aac) cale_bg_pane_g6

0x0650,	// (0x00065ab4) cale_bg_pane_g7

0x0658,	// (0x00065abc) cale_bg_pane_g8

0x0660,	// (0x00065ac4) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00074762) cale_bg_pane_g

0x8c7c,	// (0x0006e0e0) list_cale_time_pane_ParamLimits

0x8c7c,	// (0x0006e0e0) list_cale_time_pane

0x8c9d,	// (0x0006e101) list_cale_time_pane_g1_ParamLimits

0x8c9d,	// (0x0006e101) list_cale_time_pane_g1

0x0668,	// (0x00065acc) list_cale_time_pane_g2_ParamLimits

0x0668,	// (0x00065acc) list_cale_time_pane_g2

0x8ca9,	// (0x0006e10d) list_cale_time_pane_g3_ParamLimits

0x8ca9,	// (0x0006e10d) list_cale_time_pane_g3

0x8cc5,	// (0x0006e129) list_cale_time_pane_g4_ParamLimits

0x8cc5,	// (0x0006e129) list_cale_time_pane_g4

0x8cd3,	// (0x0006e137) list_cale_time_pane_g5_ParamLimits

0x8cd3,	// (0x0006e137) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00074775) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00074775) list_cale_time_pane_g

0x8ce1,	// (0x0006e145) list_cale_time_pane_t1_ParamLimits

0x8ce1,	// (0x0006e145) list_cale_time_pane_t1

0x8d09,	// (0x0006e16d) list_cale_time_pane_t2_ParamLimits

0x8d09,	// (0x0006e16d) list_cale_time_pane_t2

0x9009,	// (0x0006e46d) aid_blid_cardinal_pane

0x904b,	// (0x0006e4af) compass_pane_t4

0x8d31,	// (0x0006e195) list_cale_time_pane_t4_ParamLimits

0x8d31,	// (0x0006e195) list_cale_time_pane_t4

0x9059,	// (0x0006e4bd) compass_pane_t5

0x9069,	// (0x0006e4cd) compass_pane_t6

0x9077,	// (0x0006e4db) compass_pane_t7

0x0b11,	// (0x00065f75) navi_pane_cc_t1

0x0c78,	// (0x000660dc) aid_phob_thumbnail_center_pane

0x973e,	// (0x0006eba2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00074782) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00074782) list_cale_time_pane_t

0xe986,	// (0x00073dea) bg_popup_window_pane_cp02_ParamLimits

0xe986,	// (0x00073dea) bg_popup_window_pane_cp02

0x0682,	// (0x00065ae6) heading_pane_cp01_ParamLimits

0x0682,	// (0x00065ae6) heading_pane_cp01

0x068e,	// (0x00065af2) loc_req_pane_ParamLimits

0x068e,	// (0x00065af2) loc_req_pane

0x069e,	// (0x00065b02) loc_type_pane_ParamLimits

0x069e,	// (0x00065b02) loc_type_pane

0x06b0,	// (0x00065b14) loc_type_pane_t1_ParamLimits

0x06b0,	// (0x00065b14) loc_type_pane_t1

0x06c2,	// (0x00065b26) loc_type_pane_t2_ParamLimits

0x06c2,	// (0x00065b26) loc_type_pane_t2

0x06d4,	// (0x00065b38) loc_type_pane_t3_ParamLimits

0x06d4,	// (0x00065b38) loc_type_pane_t3

0x0002,

0xf325,	// (0x00074789) loc_type_pane_t_ParamLimits

0xf325,	// (0x00074789) loc_type_pane_t

0x06e6,	// (0x00065b4a) list_loc_req_pane

0x06f0,	// (0x00065b54) scroll_pane_cp012

0x8d59,	// (0x0006e1bd) list_single_loc_request_popup_menu_pane_ParamLimits

0x8d59,	// (0x0006e1bd) list_single_loc_request_popup_menu_pane

0x06fb,	// (0x00065b5f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x06fb,	// (0x00065b5f) list_single_loc_request_popup_menu_pane_g1

0x0707,	// (0x00065b6b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0707,	// (0x00065b6b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00074790) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00074790) list_single_loc_request_popup_menu_pane_g

0x0713,	// (0x00065b77) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0713,	// (0x00065b77) list_single_loc_request_popup_menu_pane_t1

0x8d6b,	// (0x0006e1cf) bg_popup_window_pane_cp03_ParamLimits

0x8d6b,	// (0x0006e1cf) bg_popup_window_pane_cp03

0x8d79,	// (0x0006e1dd) heading_loc_req_pane_ParamLimits

0x8d79,	// (0x0006e1dd) heading_loc_req_pane

0x8d85,	// (0x0006e1e9) popup_dyc_status_message_window_g1_ParamLimits

0x8d85,	// (0x0006e1e9) popup_dyc_status_message_window_g1

0x8d91,	// (0x0006e1f5) popup_dyc_status_message_window_t1_ParamLimits

0x8d91,	// (0x0006e1f5) popup_dyc_status_message_window_t1

0x8da3,	// (0x0006e207) popup_dyc_status_message_window_t2_ParamLimits

0x8da3,	// (0x0006e207) popup_dyc_status_message_window_t2

0x8db5,	// (0x0006e219) popup_dyc_status_message_window_t3_ParamLimits

0x8db5,	// (0x0006e219) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00074795) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00074795) popup_dyc_status_message_window_t

0xed2d,	// (0x00074191) bg_heading_pane_cp01

0x0735,	// (0x00065b99) heading_loc_req_pane_g1

0x073d,	// (0x00065ba1) heading_loc_req_pane_g2

0x0745,	// (0x00065ba9) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0007479c) heading_loc_req_pane_g

0x074d,	// (0x00065bb1) heading_loc_req_pane_t1

0x075c,	// (0x00065bc0) bg_popup_sub_pane_cp01_ParamLimits

0x075c,	// (0x00065bc0) bg_popup_sub_pane_cp01

0x076a,	// (0x00065bce) popup_cale_events_window_g1_ParamLimits

0x076a,	// (0x00065bce) popup_cale_events_window_g1

0x078a,	// (0x00065bee) popup_cale_events_window_g2_ParamLimits

0x078a,	// (0x00065bee) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000747d0) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000747d0) popup_cale_events_window_g

0x07aa,	// (0x00065c0e) popup_cale_events_window_t1_ParamLimits

0x07aa,	// (0x00065c0e) popup_cale_events_window_t1

0x07bc,	// (0x00065c20) popup_cale_events_window_t2_ParamLimits

0x07bc,	// (0x00065c20) popup_cale_events_window_t2

0x07fa,	// (0x00065c5e) popup_cale_events_window_t3_ParamLimits

0x07fa,	// (0x00065c5e) popup_cale_events_window_t3

0x0834,	// (0x00065c98) popup_cale_events_window_t4_ParamLimits

0x0834,	// (0x00065c98) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000747d5) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000747d5) popup_cale_events_window_t

0x8ddf,	// (0x0006e243) call_type_pane

0x0c90,	// (0x000660f4) popup_call_status_window_g1

0x8deb,	// (0x0006e24f) popup_call_status_window_g2

0x8df7,	// (0x0006e25b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000747de) popup_call_status_window_g

0x086a,	// (0x00065cce) call_type_pane_g1

0x0873,	// (0x00065cd7) call_type_pane_g2

0x0001,

0xf381,	// (0x000747e5) call_type_pane_g

0xed2d,	// (0x00074191) bg_popup_sub_pane_cp02

0x087c,	// (0x00065ce0) listscroll_popup_wml_pane

0x0884,	// (0x00065ce8) list_wml_pane

0x088e,	// (0x00065cf2) scroll_pane_cp013

0x0899,	// (0x00065cfd) list_single_graphic_popup_wml_pane_ParamLimits

0x0899,	// (0x00065cfd) list_single_graphic_popup_wml_pane

0x000e,	// (0x00065472) list_single_graphic_popup_wml_pane_g1

0x08ad,	// (0x00065d11) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000747ea) list_single_graphic_popup_wml_pane_g

0x08b5,	// (0x00065d19) list_single_graphic_popup_wml_pane_t1

0x08c3,	// (0x00065d27) aid_call_pane

0xef80,	// (0x000743e4) popup_clock_analogue_window_g1

0xef80,	// (0x000743e4) popup_clock_analogue_window_g2

0x8e03,	// (0x0006e267) popup_clock_analogue_window_g3

0x8e03,	// (0x0006e267) popup_clock_analogue_window_g4

0x000e,	// (0x00065472) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000747ef) popup_clock_analogue_window_g

0x8e0b,	// (0x0006e26f) popup_clock_analogue_window_t1

0x8e19,	// (0x0006e27d) clock_digital_number_pane_ParamLimits

0x8e19,	// (0x0006e27d) clock_digital_number_pane

0x8e25,	// (0x0006e289) clock_digital_number_pane_cp02_ParamLimits

0x8e25,	// (0x0006e289) clock_digital_number_pane_cp02

0x8e31,	// (0x0006e295) clock_digital_number_pane_cp03_ParamLimits

0x8e31,	// (0x0006e295) clock_digital_number_pane_cp03

0x8e3d,	// (0x0006e2a1) clock_digital_number_pane_cp04_ParamLimits

0x8e3d,	// (0x0006e2a1) clock_digital_number_pane_cp04

0x8e49,	// (0x0006e2ad) clock_digital_separator_pane_ParamLimits

0x8e49,	// (0x0006e2ad) clock_digital_separator_pane

0x8e55,	// (0x0006e2b9) popup_clock_digital_window_t1

0x000e,	// (0x00065472) clock_digital_number_pane_g1

0x000e,	// (0x00065472) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0007475d) clock_digital_number_pane_g

0x000e,	// (0x00065472) clock_digital_separator_pane_g1

0x000e,	// (0x00065472) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0007475d) clock_digital_separator_pane_g

0xed2d,	// (0x00074191) bg_popup_window_pane_cp04

0x0942,	// (0x00065da6) heading_pane_cp03

0x094a,	// (0x00065dae) listscroll_popup_gms_pane

0x0952,	// (0x00065db6) grid_large_graphic_popup_pane

0x095c,	// (0x00065dc0) listscroll_popup_gms_pane_g1

0x0964,	// (0x00065dc8) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000747fa) listscroll_popup_gms_pane_g

0x03fc,	// (0x00065860) scroll_pane_cp014

0x096c,	// (0x00065dd0) cell_large_graphic_popup_pane_ParamLimits

0x096c,	// (0x00065dd0) cell_large_graphic_popup_pane

0x0984,	// (0x00065de8) cell_large_graphic_popup_pane_g1_ParamLimits

0x0984,	// (0x00065de8) cell_large_graphic_popup_pane_g1

0x0990,	// (0x00065df4) cell_large_graphic_popup_pane_g2_ParamLimits

0x0990,	// (0x00065df4) cell_large_graphic_popup_pane_g2

0x099c,	// (0x00065e00) cell_large_graphic_popup_pane_g3_ParamLimits

0x099c,	// (0x00065e00) cell_large_graphic_popup_pane_g3

0x09a9,	// (0x00065e0d) cell_large_graphic_popup_pane_g4_ParamLimits

0x09a9,	// (0x00065e0d) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000747ff) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000747ff) cell_large_graphic_popup_pane_g

0x09b9,	// (0x00065e1d) grid_highlight_pane_cp010

0x000e,	// (0x00065472) bg_popup_call_pane_g1

0x09c3,	// (0x00065e27) list_single_graphic_popup_conf_pane_ParamLimits

0x09c3,	// (0x00065e27) list_single_graphic_popup_conf_pane

0x09d5,	// (0x00065e39) list_highlight_pane_cp01

0x09de,	// (0x00065e42) list_single_graphic_popup_conf_pane_g1

0x09e6,	// (0x00065e4a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00074808) list_single_graphic_popup_conf_pane_g

0x09ee,	// (0x00065e52) list_single_graphic_popup_conf_pane_t1

0x09fc,	// (0x00065e60) linegrid_cams_pane_g1

0x8e72,	// (0x0006e2d6) linegrid_cams_pane_g2

0x012f,	// (0x00065593) linegrid_cams_pane_g3

0x0a05,	// (0x00065e69) linegrid_cams_pane_g4

0x8e7b,	// (0x0006e2df) linegrid_cams_pane_g5

0x8e84,	// (0x0006e2e8) linegrid_cams_pane_g6

0x01b5,	// (0x00065619) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0007480d) linegrid_cams_pane_g

0x0a0e,	// (0x00065e72) popup_clock_analogue_window

0x0a0e,	// (0x00065e72) popup_clock_digital_window

0xed2d,	// (0x00074191) popup_phob_thumbnail_window

0x000e,	// (0x00065472) call_video_uplink_pane_g1

0x0a17,	// (0x00065e7b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0007481c) call_video_uplink_pane_g

0x0182,	// (0x000655e6) video_uplink_pane

0x0a1f,	// (0x00065e83) mce_image_pane_g1

0x8e8d,	// (0x0006e2f1) mce_image_pane_g2

0x8e95,	// (0x0006e2f9) mce_image_pane_g3

0x8e9d,	// (0x0006e301) mce_image_pane_g4

0x8ea5,	// (0x0006e309) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00074821) mce_image_pane_g

0x0a29,	// (0x00065e8d) control_top_pane_stacon_cp01_ParamLimits

0x0a29,	// (0x00065e8d) control_top_pane_stacon_cp01

0x0a3d,	// (0x00065ea1) uni_indicator_pane_stacon_cp01_ParamLimits

0x0a3d,	// (0x00065ea1) uni_indicator_pane_stacon_cp01

0x0a4e,	// (0x00065eb2) bg_popup_sub_pane_cp03

0x8ead,	// (0x0006e311) chi_dic_find_pane

0x8eb5,	// (0x0006e319) listscroll_chi_dic_pane

0x8ebe,	// (0x0006e322) main_pane_chidic_g1

0x8ed1,	// (0x0006e335) chi_dic_find_pane_t1

0x0a58,	// (0x00065ebc) find_chidic_pane

0x0a61,	// (0x00065ec5) chi_dic_list_pane_ParamLimits

0x0a61,	// (0x00065ec5) chi_dic_list_pane

0x0a72,	// (0x00065ed6) scroll_pane_cp020

0x8edf,	// (0x0006e343) find_chidic_pane_t1

0xed2d,	// (0x00074191) input_focus_pane_cp06

0x8eee,	// (0x0006e352) list_chi_dic_pane_ParamLimits

0x8eee,	// (0x0006e352) list_chi_dic_pane

0x0a7a,	// (0x00065ede) list_chi_dic_pane_t1_ParamLimits

0x0a7a,	// (0x00065ede) list_chi_dic_pane_t1

0xed2d,	// (0x00074191) list_highlight_pane_cp020

0x0a8d,	// (0x00065ef1) bg_cale_heading_pane_g1

0x8f0f,	// (0x0006e373) bg_cale_heading_pane_g2

0x8f17,	// (0x0006e37b) bg_cale_heading_pane_g3

0x8f1f,	// (0x0006e383) bg_cale_heading_pane_g4

0x8f29,	// (0x0006e38d) bg_cale_heading_pane_g5

0x8f33,	// (0x0006e397) bg_cale_heading_pane_g6

0x8f3b,	// (0x0006e39f) bg_cale_heading_pane_g7

0x8f43,	// (0x0006e3a7) bg_cale_heading_pane_g8

0x8f4d,	// (0x0006e3b1) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0007482c) bg_cale_heading_pane_g

0x0a8d,	// (0x00065ef1) bg_cale_side_pane_g1

0x8f57,	// (0x0006e3bb) bg_cale_side_pane_g2

0x8f61,	// (0x0006e3c5) bg_cale_side_pane_g3

0x8f6b,	// (0x0006e3cf) bg_cale_side_pane_g4

0x8f75,	// (0x0006e3d9) bg_cale_side_pane_g5

0x8f7f,	// (0x0006e3e3) bg_cale_side_pane_g6

0x8f89,	// (0x0006e3ed) bg_cale_side_pane_g7

0x8f93,	// (0x0006e3f7) bg_cale_side_pane_g8

0x8f9b,	// (0x0006e3ff) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0007483f) bg_cale_side_pane_g

0x8fa3,	// (0x0006e407) popup_call_status_window_ParamLimits

0x8fa3,	// (0x0006e407) popup_call_status_window

0x0a95,	// (0x00065ef9) stacon_top_pane

0x0a9d,	// (0x00065f01) status_pane_ParamLimits

0x0a9d,	// (0x00065f01) status_pane

0x0ab2,	// (0x00065f16) status_small_pane

0x0aba,	// (0x00065f1e) control_pane

0xed2d,	// (0x00074191) stacon_bottom_pane

0x0ac2,	// (0x00065f26) list_single_mce_smart_pane_t1_ParamLimits

0x0ac2,	// (0x00065f26) list_single_mce_smart_pane_t1

0x0ad5,	// (0x00065f39) list_single_mce_smart_pane_t2_ParamLimits

0x0ad5,	// (0x00065f39) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00074852) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00074852) list_single_mce_smart_pane_t

0x8faf,	// (0x0006e413) compass_pane

0x8fbb,	// (0x0006e41f) main_location2_pane_t1

0x8fcf,	// (0x0006e433) main_location2_pane_t2

0x8fe3,	// (0x0006e447) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00074857) main_location2_pane_t

0x0af4,	// (0x00065f58) compass_pane_g1_ParamLimits

0x0af4,	// (0x00065f58) compass_pane_g1

0x902d,	// (0x0006e491) compass_pane_t1

0x903c,	// (0x0006e4a0) compass_pane_t2

0x0005,

0xf3fc,	// (0x00074860) compass_pane_t

0x9087,	// (0x0006e4eb) text_secondary_cp61

0x0b08,	// (0x00065f6c) navi_pane_cams_g5

0x0b2b,	// (0x00065f8f) navi_pane_im_t1

0x0b39,	// (0x00065f9d) navi_pane_mp_g1_ParamLimits

0x0b39,	// (0x00065f9d) navi_pane_mp_g1

0x0b4d,	// (0x00065fb1) navi_pane_mp_g2_ParamLimits

0x0b4d,	// (0x00065fb1) navi_pane_mp_g2

0x0b59,	// (0x00065fbd) navi_pane_mp_g3_ParamLimits

0x0b59,	// (0x00065fbd) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00074874) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00074874) navi_pane_mp_g

0x0b65,	// (0x00065fc9) navi_pane_mp_t1

0x0b73,	// (0x00065fd7) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0007487b) navi_pane_mp_t

0x0baf,	// (0x00066013) navi_pane_vt_g1

0x0b65,	// (0x00065fc9) navi_pane_vt_t1

0x0bb7,	// (0x0006601b) navi_slider_pane

0x0bbf,	// (0x00066023) zooming_pane

0x0bc7,	// (0x0006602b) navi_slider_pane_g1

0x919e,	// (0x0006e602) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00074882) navi_slider_pane_g

0x0bfd,	// (0x00066061) aid_levels_zoom

0x0c05,	// (0x00066069) zooming_pane_g1

0x0c0d,	// (0x00066071) zooming_pane_g2

0x0c0d,	// (0x00066071) zooming_pane_g3

0x0002,

0xf42d,	// (0x00074891) zooming_pane_g

0x0c15,	// (0x00066079) level_10_zoom

0x0c1e,	// (0x00066082) level_11_zoom

0x0c27,	// (0x0006608b) level_1_zoom

0x0c30,	// (0x00066094) level_2_zoom

0x0c39,	// (0x0006609d) level_3_zoom

0x0c42,	// (0x000660a6) level_4_zoom

0x0c4b,	// (0x000660af) level_5_zoom

0x0c54,	// (0x000660b8) level_6_zoom

0x0c5d,	// (0x000660c1) level_7_zoom

0x0c66,	// (0x000660ca) level_8_zoom

0x0c6f,	// (0x000660d3) level_9_zoom

0x0c80,	// (0x000660e4) popup_phob_thumbnail_window_g1

0x0c88,	// (0x000660ec) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00074898) popup_phob_thumbnail_window_g

0x1fcf,	// (0x00067433) level_1_location

0x1fd7,	// (0x0006743b) level_2_location

0x1fdf,	// (0x00067443) level_3_location

0x1fe7,	// (0x0006744b) level_4_location

0x0bbf,	// (0x00066023) level_5_location

0x91b0,	// (0x0006e614) mce_icon_pane_g1

0x91b8,	// (0x0006e61c) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0007489d) mce_icon_pane_g

0x91c0,	// (0x0006e624) main_mup_pane_g1_ParamLimits

0x91c0,	// (0x0006e624) main_mup_pane_g1

0x91d8,	// (0x0006e63c) main_mup_pane_g2_ParamLimits

0x91d8,	// (0x0006e63c) main_mup_pane_g2

0x91f4,	// (0x0006e658) main_mup_pane_g3_ParamLimits

0x91f4,	// (0x0006e658) main_mup_pane_g3

0x9210,	// (0x0006e674) main_mup_pane_g4_ParamLimits

0x9210,	// (0x0006e674) main_mup_pane_g4

0x922c,	// (0x0006e690) main_mup_pane_g5_ParamLimits

0x922c,	// (0x0006e690) main_mup_pane_g5

0x924d,	// (0x0006e6b1) main_mup_pane_g6_ParamLimits

0x924d,	// (0x0006e6b1) main_mup_pane_g6

0x9269,	// (0x0006e6cd) main_mup_pane_g7_ParamLimits

0x9269,	// (0x0006e6cd) main_mup_pane_g7

0x9285,	// (0x0006e6e9) main_mup_pane_g8_ParamLimits

0x9285,	// (0x0006e6e9) main_mup_pane_g8

0x92a1,	// (0x0006e705) main_mup_pane_g9_ParamLimits

0x92a1,	// (0x0006e705) main_mup_pane_g9

0x92c0,	// (0x0006e724) main_mup_pane_g10_ParamLimits

0x92c0,	// (0x0006e724) main_mup_pane_g10

0x92df,	// (0x0006e743) main_mup_pane_g11_ParamLimits

0x92df,	// (0x0006e743) main_mup_pane_g11

0x92f7,	// (0x0006e75b) main_mup_pane_g12_ParamLimits

0x92f7,	// (0x0006e75b) main_mup_pane_g12

0x9305,	// (0x0006e769) main_mup_pane_g13_ParamLimits

0x9305,	// (0x0006e769) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000748a2) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000748a2) main_mup_pane_g

0x931b,	// (0x0006e77f) main_mup_pane_t1_ParamLimits

0x931b,	// (0x0006e77f) main_mup_pane_t1

0x9338,	// (0x0006e79c) main_mup_pane_t2_ParamLimits

0x9338,	// (0x0006e79c) main_mup_pane_t2

0x9352,	// (0x0006e7b6) main_mup_pane_t3_ParamLimits

0x9352,	// (0x0006e7b6) main_mup_pane_t3

0x936c,	// (0x0006e7d0) main_mup_pane_t4_ParamLimits

0x936c,	// (0x0006e7d0) main_mup_pane_t4

0x937e,	// (0x0006e7e2) main_mup_pane_t5_ParamLimits

0x937e,	// (0x0006e7e2) main_mup_pane_t5

0x9390,	// (0x0006e7f4) main_mup_pane_t6_ParamLimits

0x9390,	// (0x0006e7f4) main_mup_pane_t6

0x0005,

0xf459,	// (0x000748bd) main_mup_pane_t_ParamLimits

0xf459,	// (0x000748bd) main_mup_pane_t

0x93a6,	// (0x0006e80a) mup_progress_pane_ParamLimits

0x93a6,	// (0x0006e80a) mup_progress_pane

0x93b2,	// (0x0006e816) mup_visualizer_pane_ParamLimits

0x93b2,	// (0x0006e816) mup_visualizer_pane

0x93f0,	// (0x0006e854) mup_volume_pane_ParamLimits

0x93f0,	// (0x0006e854) mup_volume_pane

0x0c90,	// (0x000660f4) mup_visualizer_pane_g1_ParamLimits

0x0c90,	// (0x000660f4) mup_visualizer_pane_g1

0x0c90,	// (0x000660f4) mup_visualizer_pane_g2_ParamLimits

0x0c90,	// (0x000660f4) mup_visualizer_pane_g2

0x0af4,	// (0x00065f58) mup_visualizer_pane_g3_ParamLimits

0x0af4,	// (0x00065f58) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000748ca) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000748ca) mup_visualizer_pane_g

0x000e,	// (0x00065472) mup_volume_pane_g1

0x0ca6,	// (0x0006610a) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000748d1) mup_volume_pane_g

0x000e,	// (0x00065472) mup_progress_pane_g1

0x0caf,	// (0x00066113) mup_progress_pane_g2

0x0cb8,	// (0x0006611c) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000748d6) mup_progress_pane_g

0xed2d,	// (0x00074191) bg_popup_window_pane_cp05

0x0cc1,	// (0x00066125) heading_pane_cp02_ParamLimits

0x0cc1,	// (0x00066125) heading_pane_cp02

0x0cdb,	// (0x0006613f) list_popup_blid_pane

0x0ce3,	// (0x00066147) list_blid_sat_info_pane_ParamLimits

0x0ce3,	// (0x00066147) list_blid_sat_info_pane

0x0cf6,	// (0x0006615a) list_blid_sat_info_pane_g1

0x0cfe,	// (0x00066162) list_blid_sat_info_pane_t1

0x94fb,	// (0x0006e95f) mup_equalizer_pane_ParamLimits

0x94fb,	// (0x0006e95f) mup_equalizer_pane

0x951c,	// (0x0006e980) mup_equalizer_pane_cp1_ParamLimits

0x951c,	// (0x0006e980) mup_equalizer_pane_cp1

0x953d,	// (0x0006e9a1) mup_equalizer_pane_cp2_ParamLimits

0x953d,	// (0x0006e9a1) mup_equalizer_pane_cp2

0x955e,	// (0x0006e9c2) mup_equalizer_pane_cp3_ParamLimits

0x955e,	// (0x0006e9c2) mup_equalizer_pane_cp3

0x957f,	// (0x0006e9e3) mup_equalizer_pane_cp4_ParamLimits

0x957f,	// (0x0006e9e3) mup_equalizer_pane_cp4

0x95a0,	// (0x0006ea04) mup_equalizer_pane_cp5

0x95b6,	// (0x0006ea1a) mup_equalizer_pane_cp6

0x95ce,	// (0x0006ea32) mup_equalizer_pane_cp7

0x1eed,	// (0x00067351) bg_popup_call_poc_act_pane_g9

0x1ef5,	// (0x00067359) bg_popup_call_poc_act_pane_g10

0x1efd,	// (0x00067361) bg_popup_call_poc_act_pane_g11

0x000a,

0xef88,	// (0x000743ec) mup_scale_pane

0x000e,	// (0x00065472) mup_scale_pane_g1

0x0d0c,	// (0x00066170) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000748f2) mup_scale_pane_g

0x0d30,	// (0x00066194) msg_data_pane

0x0d38,	// (0x0006619c) scroll_pane_cp017

0x5ee3,	// (0x0006b347) bg_list_pane_cp04_ParamLimits

0x5ee3,	// (0x0006b347) bg_list_pane_cp04

0x0d40,	// (0x000661a4) msg_data_pane_g1

0x95f8,	// (0x0006ea5c) msg_data_pane_g2

0x8e95,	// (0x0006e2f9) msg_data_pane_g3

0x9600,	// (0x0006ea64) msg_data_pane_g4

0x9608,	// (0x0006ea6c) msg_data_pane_g5

0x9610,	// (0x0006ea74) msg_data_pane_g6

0x9618,	// (0x0006ea7c) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00074901) msg_data_pane_g

0x5f03,	// (0x0006b367) msg_text_pane_ParamLimits

0x5f03,	// (0x0006b367) msg_text_pane

0x9620,	// (0x0006ea84) qrid_highlight_pane_cp011_ParamLimits

0x9620,	// (0x0006ea84) qrid_highlight_pane_cp011

0xed2d,	// (0x00074191) msg_body_pane

0xed2d,	// (0x00074191) msg_header_pane

0x0d51,	// (0x000661b5) input_focus_pane_cp07

0x5f5b,	// (0x0006b3bf) msg_header_pane_t1_ParamLimits

0x5f5b,	// (0x0006b3bf) msg_header_pane_t1

0x5f6f,	// (0x0006b3d3) msg_header_pane_t2_ParamLimits

0x5f6f,	// (0x0006b3d3) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00074915) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00074915) msg_header_pane_t

0x0d66,	// (0x000661ca) msg_body_pane_g1

0x5f81,	// (0x0006b3e5) msg_body_pane_t1_ParamLimits

0x5f81,	// (0x0006b3e5) msg_body_pane_t1

0x5fb2,	// (0x0006b416) msg_body_pane_t2_ParamLimits

0x5fb2,	// (0x0006b416) msg_body_pane_t2

0x5fc4,	// (0x0006b428) msg_body_pane_t3_ParamLimits

0x5fc4,	// (0x0006b428) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0007491a) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0007491a) msg_body_pane_t

0x968e,	// (0x0006eaf2) main_viewer_pane_g1_ParamLimits

0x968e,	// (0x0006eaf2) main_viewer_pane_g1

0x969a,	// (0x0006eafe) main_viewer_pane_g2_ParamLimits

0x969a,	// (0x0006eafe) main_viewer_pane_g2

0x96a6,	// (0x0006eb0a) main_viewer_pane_g3_ParamLimits

0x96a6,	// (0x0006eb0a) main_viewer_pane_g3

0x96b7,	// (0x0006eb1b) main_viewer_pane_g4_ParamLimits

0x96b7,	// (0x0006eb1b) main_viewer_pane_g4

0x96c8,	// (0x0006eb2c) main_viewer_pane_g5_ParamLimits

0x96c8,	// (0x0006eb2c) main_viewer_pane_g5

0x96c8,	// (0x0006eb2c) main_viewer_pane_g7_ParamLimits

0x96c8,	// (0x0006eb2c) main_viewer_pane_g7

0x96da,	// (0x0006eb3e) main_viewer_pane_g8_ParamLimits

0x96da,	// (0x0006eb3e) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0007492a) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0007492a) main_viewer_pane_g

0x0db0,	// (0x00066214) viewer_content_pane_ParamLimits

0x0db0,	// (0x00066214) viewer_content_pane

0x9712,	// (0x0006eb76) main_postcard_pane_g1_ParamLimits

0x9712,	// (0x0006eb76) main_postcard_pane_g1

0x9720,	// (0x0006eb84) main_postcard_pane_g2_ParamLimits

0x9720,	// (0x0006eb84) main_postcard_pane_g2

0x972e,	// (0x0006eb92) main_postcard_pane_g3_ParamLimits

0x972e,	// (0x0006eb92) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0007493b) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0007493b) main_postcard_pane_g

0x973e,	// (0x0006eba2) main_postcard_pane_g4

0x20ef,	// (0x00067553) smil_status_volume_pane_g2

0x976a,	// (0x0006ebce) postcard_pane_ParamLimits

0x976a,	// (0x0006ebce) postcard_pane

0x0c90,	// (0x000660f4) postcard_pane_g1_ParamLimits

0x0c90,	// (0x000660f4) postcard_pane_g1

0x979c,	// (0x0006ec00) postcard_pane_g2_ParamLimits

0x979c,	// (0x0006ec00) postcard_pane_g2

0x97a8,	// (0x0006ec0c) postcard_pane_g3_ParamLimits

0x97a8,	// (0x0006ec0c) postcard_pane_g3

0x0dcc,	// (0x00066230) postcard_pane_g4_ParamLimits

0x0dcc,	// (0x00066230) postcard_pane_g4

0x97b4,	// (0x0006ec18) postcard_pane_g5_ParamLimits

0x97b4,	// (0x0006ec18) postcard_pane_g5

0x97c0,	// (0x0006ec24) postcard_pane_g6_ParamLimits

0x97c0,	// (0x0006ec24) postcard_pane_g6

0x0dbe,	// (0x00066222) postcard_pane_g7_ParamLimits

0x0dbe,	// (0x00066222) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00074948) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00074948) postcard_pane_g

0x97cc,	// (0x0006ec30) main_mp2_pane_g1_ParamLimits

0x97cc,	// (0x0006ec30) main_mp2_pane_g1

0x97d8,	// (0x0006ec3c) main_mp2_pane_g2_ParamLimits

0x97d8,	// (0x0006ec3c) main_mp2_pane_g2

0x97e4,	// (0x0006ec48) main_mp2_pane_g3_ParamLimits

0x97e4,	// (0x0006ec48) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00074957) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00074957) main_mp2_pane_g

0x97f0,	// (0x0006ec54) main_mp2_pane_t1_ParamLimits

0x97f0,	// (0x0006ec54) main_mp2_pane_t1

0x9807,	// (0x0006ec6b) main_mp2_pane_t2_ParamLimits

0x9807,	// (0x0006ec6b) main_mp2_pane_t2

0x9819,	// (0x0006ec7d) main_mp2_pane_t3_ParamLimits

0x9819,	// (0x0006ec7d) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0007495e) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0007495e) main_mp2_pane_t

0x0dda,	// (0x0006623e) pec_content_pane_ParamLimits

0x0dda,	// (0x0006623e) pec_content_pane

0x03fc,	// (0x00065860) scroll_pane_cp015

0x0dec,	// (0x00066250) pec_attribute_pane_ParamLimits

0x0dec,	// (0x00066250) pec_attribute_pane

0x982b,	// (0x0006ec8f) pec_content_pane_g1_ParamLimits

0x982b,	// (0x0006ec8f) pec_content_pane_g1

0x0dfc,	// (0x00066260) pec_content_pane_t1_ParamLimits

0x0dfc,	// (0x00066260) pec_content_pane_t1

0x0e0e,	// (0x00066272) pec_content_pane_t2_ParamLimits

0x0e0e,	// (0x00066272) pec_content_pane_t2

0x0001,

0xf501,	// (0x00074965) pec_content_pane_t_ParamLimits

0xf501,	// (0x00074965) pec_content_pane_t

0x9837,	// (0x0006ec9b) list_single_graphic_pane_cp01_ParamLimits

0x9837,	// (0x0006ec9b) list_single_graphic_pane_cp01

0xef88,	// (0x000743ec) bg_popup_sub_pane_cp04

0x0e20,	// (0x00066284) popup_mup_playback_window_g1

0x0e2c,	// (0x00066290) popup_mup_playback_window_t1

0x0e41,	// (0x000662a5) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0007496a) popup_mup_playback_window_t

0x0e78,	// (0x000662dc) main_image_pane_g1_ParamLimits

0x0e78,	// (0x000662dc) main_image_pane_g1

0x0ebb,	// (0x0006631f) scroll_pane_cp018_ParamLimits

0x0ebb,	// (0x0006631f) scroll_pane_cp018

0x0ed3,	// (0x00066337) scroll_pane_cp016_ParamLimits

0x0ed3,	// (0x00066337) scroll_pane_cp016

0x98db,	// (0x0006ed3f) smil2_image_pane_ParamLimits

0x98db,	// (0x0006ed3f) smil2_image_pane

0x990f,	// (0x0006ed73) smil2_root_pane_ParamLimits

0x990f,	// (0x0006ed73) smil2_root_pane

0x993b,	// (0x0006ed9f) smil2_text_pane_ParamLimits

0x993b,	// (0x0006ed9f) smil2_text_pane

0xed2d,	// (0x00074191) bg_list_pane_cp06

0x0f0f,	// (0x00066373) grid_radio_pane

0xed2d,	// (0x00074191) bg_popup_window_pane_cp06

0x0f17,	// (0x0006637b) main_fmradio_pane_t1

0x0942,	// (0x00065da6) heading_pane_cp04

0x0f25,	// (0x00066389) main_fmradio_pane_t2

0x1f05,	// (0x00067369) popup_cale_lunar_info_window_g1

0x0f33,	// (0x00066397) main_fmradio_pane_t3

0x1f0d,	// (0x00067371) popup_cale_lunar_info_window_g2

0x0f41,	// (0x000663a5) main_fmradio_pane_t4

0x0001,

0x0f4f,	// (0x000663b3) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00074a45) popup_cale_lunar_info_window_g

0xf51b,	// (0x0007497f) main_fmradio_pane_t

0x0f5d,	// (0x000663c1) wait_bar_pane_cp03

0x0f65,	// (0x000663c9) cell_fmradio_pane_ParamLimits

0x0f65,	// (0x000663c9) cell_fmradio_pane

0x0dbe,	// (0x00066222) cell_fmradio_pane_g1_ParamLimits

0x0dbe,	// (0x00066222) cell_fmradio_pane_g1

0xed2d,	// (0x00074191) grid_highlight_pane_cp011

0x0f78,	// (0x000663dc) poc_content_pane_ParamLimits

0x0f78,	// (0x000663dc) poc_content_pane

0x0f8a,	// (0x000663ee) scroll_pane_cp019

0x997b,	// (0x0006eddf) popup_call_poc_act_window_ParamLimits

0x997b,	// (0x0006eddf) popup_call_poc_act_window

0x9988,	// (0x0006edec) popup_call_poc_inact_window_ParamLimits

0x9988,	// (0x0006edec) popup_call_poc_inact_window

0xf5b8,	// (0x00074a1c) bg_popup_call_poc_act_pane_g

0x1e75,	// (0x000672d9) bg_popup_call_poc_inact_pane_g1

0x1e7d,	// (0x000672e1) bg_popup_call_poc_inact_pane_g2

0x0f92,	// (0x000663f6) popup_call_poc_act_window_g2

0x1e85,	// (0x000672e9) bg_popup_call_poc_inact_pane_g3

0x1e8d,	// (0x000672f1) bg_popup_call_poc_inact_pane_g4

0x1e95,	// (0x000672f9) bg_popup_call_poc_inact_pane_g5

0x0f9a,	// (0x000663fe) popup_call_poc_act_window_t1_ParamLimits

0x0f9a,	// (0x000663fe) popup_call_poc_act_window_t1

0x0fc2,	// (0x00066426) popup_call_poc_act_window_t2_ParamLimits

0x0fc2,	// (0x00066426) popup_call_poc_act_window_t2

0x0fea,	// (0x0006644e) popup_call_poc_act_window_t3_ParamLimits

0x0fea,	// (0x0006644e) popup_call_poc_act_window_t3

0x1012,	// (0x00066476) popup_call_poc_act_window_t4_ParamLimits

0x1012,	// (0x00066476) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0007498a) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0007498a) popup_call_poc_act_window_t

0x1e9d,	// (0x00067301) bg_popup_call_poc_inact_pane_g6

0x1ea5,	// (0x00067309) bg_popup_call_poc_inact_pane_g7

0x1ead,	// (0x00067311) bg_popup_call_poc_inact_pane_g8

0x1024,	// (0x00066488) popup_call_poc_inact_window_g2

0x1eb5,	// (0x00067319) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00074a09) bg_popup_call_poc_inact_pane_g

0x102c,	// (0x00066490) popup_call_poc_inact_window_t1_ParamLimits

0x102c,	// (0x00066490) popup_call_poc_inact_window_t1

0x1041,	// (0x000664a5) popup_call_poc_inact_window_t2_ParamLimits

0x1041,	// (0x000664a5) popup_call_poc_inact_window_t2

0x1056,	// (0x000664ba) popup_call_poc_inact_window_t3_ParamLimits

0x1056,	// (0x000664ba) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00074993) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00074993) popup_call_poc_inact_window_t

0x2075,	// (0x000674d9) context_pane_ParamLimits

0x9f6f,	// (0x0006f3d3) signal_pane_ParamLimits

0x0bbf,	// (0x00066023) main_call2_pane

0x2063,	// (0x000674c7) popup_phob_thumbnail2_window_ParamLimits

0x2063,	// (0x000674c7) popup_phob_thumbnail2_window

0x963c,	// (0x0006eaa0) aid_hotspot_pointer_arrow_pane

0x9644,	// (0x0006eaa8) aid_hotspot_pointer_hand_pane

0x9cad,	// (0x0006f111) phob_pre_status_pane_g5

0x7a89,	// (0x0006ceed) cams_zoom_pane_ParamLimits

0x7a95,	// (0x0006cef9) image_vga_pane_ParamLimits

0x7aa4,	// (0x0006cf08) main_camera_pane_g1_ParamLimits

0x7ab2,	// (0x0006cf16) main_camera_pane_g2_ParamLimits

0x7ac0,	// (0x0006cf24) main_camera_pane_g3_ParamLimits

0x7acc,	// (0x0006cf30) main_camera_pane_g4_ParamLimits

0x7ad8,	// (0x0006cf3c) main_camera_pane_g5_ParamLimits

0x7ae4,	// (0x0006cf48) main_camera_pane_g6_ParamLimits

0x7af0,	// (0x0006cf54) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00074692) main_camera_pane_g_ParamLimits

0x7afc,	// (0x0006cf60) main_camera_pane_t1_ParamLimits

0x7b0e,	// (0x0006cf72) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000746a3) main_camera_pane_t_ParamLimits

0xef88,	// (0x000743ec) bg_popup_preview_window_pane_cp01_ParamLimits

0xef88,	// (0x000743ec) bg_popup_preview_window_pane_cp01

0x106b,	// (0x000664cf) popup_phob_thumbnail2_window_g1_ParamLimits

0x106b,	// (0x000664cf) popup_phob_thumbnail2_window_g1

0xed2d,	// (0x00074191) call2_cli_visual_pane

0x99a4,	// (0x0006ee08) popup_call2_audio_conf_window_ParamLimits

0x99a4,	// (0x0006ee08) popup_call2_audio_conf_window

0x99b9,	// (0x0006ee1d) popup_call2_audio_first_window_ParamLimits

0x99b9,	// (0x0006ee1d) popup_call2_audio_first_window

0x9a57,	// (0x0006eebb) popup_call2_audio_in_window_ParamLimits

0x9a57,	// (0x0006eebb) popup_call2_audio_in_window

0x9a99,	// (0x0006eefd) popup_call2_audio_out_window_ParamLimits

0x9a99,	// (0x0006eefd) popup_call2_audio_out_window

0x9afb,	// (0x0006ef5f) popup_call2_audio_second_window_ParamLimits

0x9afb,	// (0x0006ef5f) popup_call2_audio_second_window

0x9b59,	// (0x0006efbd) popup_call2_audio_wait_window_ParamLimits

0x9b59,	// (0x0006efbd) popup_call2_audio_wait_window

0xed2d,	// (0x00074191) bg_popup_call2_act_pane_cp03

0xef6a,	// (0x000743ce) list_conf_pane_cp

0x1077,	// (0x000664db) popup_call2_audio_conf_window_t1

0x1085,	// (0x000664e9) list_single_graphic_popup_conf2_pane_ParamLimits

0x1085,	// (0x000664e9) list_single_graphic_popup_conf2_pane

0x09d5,	// (0x00065e39) list_highlight_pane_cp04

0x1098,	// (0x000664fc) list_single_graphic_popup_conf2_pane_g1

0x09e6,	// (0x00065e4a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0007499a) list_single_graphic_popup_conf2_pane_g

0x10a2,	// (0x00066506) list_single_graphic_popup_conf2_pane_t1

0x10b0,	// (0x00066514) bg_popup_call2_act_pane_cp01_ParamLimits

0x10b0,	// (0x00066514) bg_popup_call2_act_pane_cp01

0x113a,	// (0x0006659e) call_type_pane_cp05_ParamLimits

0x113a,	// (0x0006659e) call_type_pane_cp05

0x118e,	// (0x000665f2) popup_call2_audio_second_window_g1_ParamLimits

0x118e,	// (0x000665f2) popup_call2_audio_second_window_g1

0x11e2,	// (0x00066646) popup_call2_audio_second_window_g2_ParamLimits

0x11e2,	// (0x00066646) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0007499f) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0007499f) popup_call2_audio_second_window_g

0x1247,	// (0x000666ab) popup_call2_audio_second_window_t1_ParamLimits

0x1247,	// (0x000666ab) popup_call2_audio_second_window_t1

0x1302,	// (0x00066766) popup_call2_audio_second_window_t2_ParamLimits

0x1302,	// (0x00066766) popup_call2_audio_second_window_t2

0x1355,	// (0x000667b9) popup_call2_audio_second_window_t3_ParamLimits

0x1355,	// (0x000667b9) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000749a6) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000749a6) popup_call2_audio_second_window_t

0xed2d,	// (0x00074191) bg_popup_call2_in_pane_cp02

0xed37,	// (0x0007419b) call_type_pane_cp04

0xed3f,	// (0x000741a3) popup_call2_audio_wait_window_g1

0xed47,	// (0x000741ab) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0007457f) popup_call2_audio_wait_window_g

0xed4f,	// (0x000741b3) popup_call2_audio_wait_window_t3

0x1448,	// (0x000668ac) bg_popup_call2_act_pane_ParamLimits

0x1448,	// (0x000668ac) bg_popup_call2_act_pane

0x1508,	// (0x0006696c) call_type_pane_cp03_ParamLimits

0x1508,	// (0x0006696c) call_type_pane_cp03

0x156c,	// (0x000669d0) popup_call2_audio_first_window_g1_ParamLimits

0x156c,	// (0x000669d0) popup_call2_audio_first_window_g1

0x15dc,	// (0x00066a40) popup_call2_audio_first_window_g2_ParamLimits

0x15dc,	// (0x00066a40) popup_call2_audio_first_window_g2

0x0c90,	// (0x000660f4) popup_call2_audio_first_window_g3_ParamLimits

0x0c90,	// (0x000660f4) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000749af) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000749af) popup_call2_audio_first_window_g

0x16ba,	// (0x00066b1e) popup_call2_audio_first_window_t1_ParamLimits

0x16ba,	// (0x00066b1e) popup_call2_audio_first_window_t1

0x17bd,	// (0x00066c21) popup_call2_audio_first_window_t4_ParamLimits

0x17bd,	// (0x00066c21) popup_call2_audio_first_window_t4

0x18a0,	// (0x00066d04) popup_call2_audio_first_window_t5_ParamLimits

0x18a0,	// (0x00066d04) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000749ba) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000749ba) popup_call2_audio_first_window_t

0xef80,	// (0x000743e4) bg_popup_call2_act_pane_g1

0x1f15,	// (0x00067379) popup_cale_lunar_info_window_t1

0x1f23,	// (0x00067387) popup_cale_lunar_info_window_t2

0x1f31,	// (0x00067395) popup_cale_lunar_info_window_t3

0xed2d,	// (0x00074191) bg_popup_call2_bubble_pane

0x19a1,	// (0x00066e05) bg_popup_call2_in_pane_cp01_ParamLimits

0x19a1,	// (0x00066e05) bg_popup_call2_in_pane_cp01

0xea09,	// (0x00073e6d) call_type_pane_cp02

0x19e9,	// (0x00066e4d) popup_call2_audio_out_window_g1_ParamLimits

0x19e9,	// (0x00066e4d) popup_call2_audio_out_window_g1

0x1a15,	// (0x00066e79) popup_call2_audio_out_window_g2_ParamLimits

0x1a15,	// (0x00066e79) popup_call2_audio_out_window_g2

0x1a3d,	// (0x00066ea1) popup_call2_audio_out_window_g3_ParamLimits

0x1a3d,	// (0x00066ea1) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000749c3) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000749c3) popup_call2_audio_out_window_g

0x1a78,	// (0x00066edc) popup_call2_audio_out_window_t1_ParamLimits

0x1a78,	// (0x00066edc) popup_call2_audio_out_window_t1

0x1ad7,	// (0x00066f3b) popup_call2_audio_out_window_t2_ParamLimits

0x1ad7,	// (0x00066f3b) popup_call2_audio_out_window_t2

0x1b2b,	// (0x00066f8f) popup_call2_audio_out_window_t3_ParamLimits

0x1b2b,	// (0x00066f8f) popup_call2_audio_out_window_t3

0x1b41,	// (0x00066fa5) popup_call2_audio_out_window_t4_ParamLimits

0x1b41,	// (0x00066fa5) popup_call2_audio_out_window_t4

0x1b57,	// (0x00066fbb) popup_call2_audio_out_window_t5_ParamLimits

0x1b57,	// (0x00066fbb) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000749cc) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000749cc) popup_call2_audio_out_window_t

0x1bbb,	// (0x0006701f) bg_popup_call2_in_pane_ParamLimits

0x1bbb,	// (0x0006701f) bg_popup_call2_in_pane

0x1c17,	// (0x0006707b) popup_call2_audio_in_window_g1_ParamLimits

0x1c17,	// (0x0006707b) popup_call2_audio_in_window_g1

0x1c4f,	// (0x000670b3) popup_call2_audio_in_window_g2_ParamLimits

0x1c4f,	// (0x000670b3) popup_call2_audio_in_window_g2

0x1c87,	// (0x000670eb) popup_call2_audio_in_window_g3_ParamLimits

0x1c87,	// (0x000670eb) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000749d9) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000749d9) popup_call2_audio_in_window_g

0x1cdf,	// (0x00067143) popup_call2_audio_in_window_t1_ParamLimits

0x1cdf,	// (0x00067143) popup_call2_audio_in_window_t1

0x1d5f,	// (0x000671c3) popup_call2_audio_in_window_t2_ParamLimits

0x1d5f,	// (0x000671c3) popup_call2_audio_in_window_t2

0x1ddf,	// (0x00067243) popup_call2_audio_in_window_t3_ParamLimits

0x1ddf,	// (0x00067243) popup_call2_audio_in_window_t3

0x1df9,	// (0x0006725d) popup_call2_audio_in_window_t4_ParamLimits

0x1df9,	// (0x0006725d) popup_call2_audio_in_window_t4

0x1e0b,	// (0x0006726f) popup_call2_audio_in_window_t5_ParamLimits

0x1e0b,	// (0x0006726f) popup_call2_audio_in_window_t5

0x1e20,	// (0x00067284) popup_call2_audio_in_window_t6_ParamLimits

0x1e20,	// (0x00067284) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000749e2) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000749e2) popup_call2_audio_in_window_t

0xef80,	// (0x000743e4) bg_popup_call2_in_pane_g1

0x1f3f,	// (0x000673a3) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00074a4a) popup_cale_lunar_info_window_t

0xef88,	// (0x000743ec) bg_popup_call2_rect_pane_ParamLimits

0xef88,	// (0x000743ec) bg_popup_call2_rect_pane

0xed2d,	// (0x00074191) call2_cli_visual_graphic_pane

0xed2d,	// (0x00074191) call2_cli_visual_text_pane

0xa01f,	// (0x0006f483) smil_status_volume_pane_g3

0x0002,

0x000e,	// (0x00065472) call2_cli_visual_graphic_pane_g1

0x000e,	// (0x00065472) call2_cli_visual_graphic_pane_g2

0x000e,	// (0x00065472) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000749ef) call2_cli_visual_graphic_pane_g

0x1e35,	// (0x00067299) bg_popup_call2_rect_pane_g1

0x00b6,	// (0x0006551a) bg_popup_call2_rect_pane_g2

0x1e3d,	// (0x000672a1) bg_popup_call2_rect_pane_g3

0x1e45,	// (0x000672a9) bg_popup_call2_rect_pane_g4

0x1e4d,	// (0x000672b1) bg_popup_call2_rect_pane_g5

0x1e55,	// (0x000672b9) bg_popup_call2_rect_pane_g6

0x1e5d,	// (0x000672c1) bg_popup_call2_rect_pane_g7

0x1e65,	// (0x000672c9) bg_popup_call2_rect_pane_g8

0x1e6d,	// (0x000672d1) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000749f6) bg_popup_call2_rect_pane_g

0x1e75,	// (0x000672d9) bg_popup_call2_bubble_pane_g1

0x1e7d,	// (0x000672e1) bg_popup_call2_bubble_pane_g2

0x1e85,	// (0x000672e9) bg_popup_call2_bubble_pane_g3

0x1e8d,	// (0x000672f1) bg_popup_call2_bubble_pane_g4

0x1e95,	// (0x000672f9) bg_popup_call2_bubble_pane_g5

0x1e9d,	// (0x00067301) bg_popup_call2_bubble_pane_g6

0x1ea5,	// (0x00067309) bg_popup_call2_bubble_pane_g7

0x1ead,	// (0x00067311) bg_popup_call2_bubble_pane_g8

0x1eb5,	// (0x00067319) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00074a09) bg_popup_call2_bubble_pane_g

0x762c,	// (0x0006ca90) aid_cale_week_size_cell_pane

0x7b20,	// (0x0006cf84) aid_cams_cif_uncrop_pane_ParamLimits

0x7b20,	// (0x0006cf84) aid_cams_cif_uncrop_pane

0x7c83,	// (0x0006d0e7) aid_cams_size_cell_ParamLimits

0x7c83,	// (0x0006d0e7) aid_cams_size_cell

0x7c8f,	// (0x0006d0f3) grid_cams_pane_ParamLimits

0x7c9d,	// (0x0006d101) linegrid_cams_pane_ParamLimits

0x7d74,	// (0x0006d1d8) call_video_pane_t1

0x7d95,	// (0x0006d1f9) call_video_pane_t2

0x0001,

0xf292,	// (0x000746f6) call_video_pane_t

0x8315,	// (0x0006d779) aid_cale_month_size_cell_pane_ParamLimits

0x8315,	// (0x0006d779) aid_cale_month_size_cell_pane

0xf62f,	// (0x00074a93) smil_status_volume_pane_g

0xa02c,	// (0x0006f490) volume_smil_pane_ParamLimits

0x6dec,	// (0x0006c250) aid_popup2_width_pane

0x7521,	// (0x0006c985) cell_qdial_pane_g4_ParamLimits

0x7521,	// (0x0006c985) cell_qdial_pane_g4

0x9009,	// (0x0006e46d) aid_blid_cardinal_pane_ParamLimits

0x9019,	// (0x0006e47d) aid_blid_destination_pane_ParamLimits

0x9019,	// (0x0006e47d) aid_blid_destination_pane

0xef88,	// (0x000743ec) bg_popup_call_poc_act_pane_ParamLimits

0xef88,	// (0x000743ec) bg_popup_call_poc_act_pane

0xef88,	// (0x000743ec) bg_popup_call_poc_inact_pane_ParamLimits

0xef88,	// (0x000743ec) bg_popup_call_poc_inact_pane

0x1ec5,	// (0x00067329) bg_popup_call_poc_act_pane_g1

0x1ecd,	// (0x00067331) bg_popup_call_poc_act_pane_g2

0x1ed5,	// (0x00067339) bg_popup_call_poc_act_pane_g3

0x1e8d,	// (0x000672f1) bg_popup_call_poc_act_pane_g4

0x1e95,	// (0x000672f9) bg_popup_call_poc_act_pane_g5

0x1edd,	// (0x00067341) bg_popup_call_poc_act_pane_g6

0x1ea5,	// (0x00067309) bg_popup_call_poc_act_pane_g7

0x1ee5,	// (0x00067349) bg_popup_call_poc_act_pane_g8

0xed2d,	// (0x00074191) main_usb_pane

0x203e,	// (0x000674a2) popup_cale_lunar_info_window

0x80b4,	// (0x0006d518) im_reading_pane_t1_ParamLimits

0x0354,	// (0x000657b8) list_im_pane_ParamLimits

0x0365,	// (0x000657c9) scroll_pane_cp07_ParamLimits

0xed2d,	// (0x00074191) grid_highlight_pane_cp012

0xef88,	// (0x000743ec) mup_scale_pane_ParamLimits

0x0c90,	// (0x000660f4) main_usb_pane_g1_ParamLimits

0x0c90,	// (0x000660f4) main_usb_pane_g1

0x9bd0,	// (0x0006f034) main_usb_pane_g2_ParamLimits

0x9bd0,	// (0x0006f034) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00074a33) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00074a33) main_usb_pane_g

0x9bdc,	// (0x0006f040) main_usb_pane_t1_ParamLimits

0x9bdc,	// (0x0006f040) main_usb_pane_t1

0x9bee,	// (0x0006f052) main_usb_pane_t2_ParamLimits

0x9bee,	// (0x0006f052) main_usb_pane_t2

0x9c00,	// (0x0006f064) main_usb_pane_t3_ParamLimits

0x9c00,	// (0x0006f064) main_usb_pane_t3

0x9c12,	// (0x0006f076) main_usb_pane_t4_ParamLimits

0x9c12,	// (0x0006f076) main_usb_pane_t4

0x9c24,	// (0x0006f088) main_usb_pane_t5_ParamLimits

0x9c24,	// (0x0006f088) main_usb_pane_t5

0x9c36,	// (0x0006f09a) main_usb_pane_t6_ParamLimits

0x9c36,	// (0x0006f09a) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00074a38) main_usb_pane_t_ParamLimits

0x8faf,	// (0x0006e413) aid_text_placing

0x8fbb,	// (0x0006e41f) main_location2_pane_t1_ParamLimits

0x8fcf,	// (0x0006e433) main_location2_pane_t2_ParamLimits

0x8fe3,	// (0x0006e447) main_location2_pane_t3_ParamLimits

0x8ff7,	// (0x0006e45b) main_location2_pane_t4_ParamLimits

0x8ff7,	// (0x0006e45b) main_location2_pane_t4

0xf3f3,	// (0x00074857) main_location2_pane_t_ParamLimits

0xefcc,	// (0x00074430) find_pinb_pane_g2_ParamLimits

0xefcc,	// (0x00074430) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000745a5) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000745a5) find_pinb_pane_g

0xefd8,	// (0x0007443c) find_pinb_pane_t1_ParamLimits

0xefea,	// (0x0007444e) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000745aa) find_pinb_pane_t_ParamLimits

0xed2d,	// (0x00074191) main_call3_pane

0x872d,	// (0x0006db91) cale_month_day_heading_pane_t1_ParamLimits

0x878b,	// (0x0006dbef) cale_month_day_heading_pane_t2_ParamLimits

0x87f0,	// (0x0006dc54) cale_month_day_heading_pane_t3_ParamLimits

0x8855,	// (0x0006dcb9) cale_month_day_heading_pane_t4_ParamLimits

0x88ba,	// (0x0006dd1e) cale_month_day_heading_pane_t5_ParamLimits

0x891f,	// (0x0006dd83) cale_month_day_heading_pane_t6_ParamLimits

0x898c,	// (0x0006ddf0) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0007472e) cale_month_day_heading_pane_t_ParamLimits

0x05b1,	// (0x00065a15) smil_status_volume_pane

0x9784,	// (0x0006ebe8) postcard_address_pane_ParamLimits

0x9784,	// (0x0006ebe8) postcard_address_pane

0x9790,	// (0x0006ebf4) postcard_message_pane_ParamLimits

0x9790,	// (0x0006ebf4) postcard_message_pane

0x9b98,	// (0x0006effc) call2_cli_visual_pane_t1_ParamLimits

0x9b98,	// (0x0006effc) call2_cli_visual_pane_t1

0xa17f,	// (0x0006f5e3) postcard_message_pane_t1_ParamLimits

0xa17f,	// (0x0006f5e3) postcard_message_pane_t1

0xa168,	// (0x0006f5cc) postcard_address_pane_t1_ParamLimits

0xa168,	// (0x0006f5cc) postcard_address_pane_t1

0xa159,	// (0x0006f5bd) popup_call3_audio_in_window_ParamLimits

0xa159,	// (0x0006f5bd) popup_call3_audio_in_window

0xa041,	// (0x0006f4a5) bg_popup_call3_in_pane_ParamLimits

0xa041,	// (0x0006f4a5) bg_popup_call3_in_pane

0xa09f,	// (0x0006f503) popup_call3_audio_in_window_g1_ParamLimits

0xa09f,	// (0x0006f503) popup_call3_audio_in_window_g1

0xa0b7,	// (0x0006f51b) popup_call3_audio_in_window_g2_ParamLimits

0xa0b7,	// (0x0006f51b) popup_call3_audio_in_window_g2

0xa0cf,	// (0x0006f533) popup_call3_audio_in_window_g3_ParamLimits

0xa0cf,	// (0x0006f533) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00074a9a) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00074a9a) popup_call3_audio_in_window_g

0xa0f7,	// (0x0006f55b) popup_call3_audio_in_window_t1_ParamLimits

0xa0f7,	// (0x0006f55b) popup_call3_audio_in_window_t1

0xa11f,	// (0x0006f583) popup_call3_audio_in_window_t2_ParamLimits

0xa11f,	// (0x0006f583) popup_call3_audio_in_window_t2

0xa147,	// (0x0006f5ab) popup_call3_audio_in_window_t3_ParamLimits

0xa147,	// (0x0006f5ab) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00074aa3) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00074aa3) popup_call3_audio_in_window_t

0x0bbf,	// (0x00066023) bg_popup_call3_rect_pane

0x1e35,	// (0x00067299) bg_popup_call3_rect_pane_g1

0x00b6,	// (0x0006551a) bg_popup_call3_rect_pane_g2

0x1e3d,	// (0x000672a1) bg_popup_call3_rect_pane_g3

0x1e45,	// (0x000672a9) bg_popup_call3_rect_pane_g4

0x1e4d,	// (0x000672b1) bg_popup_call3_rect_pane_g5

0x1e55,	// (0x000672b9) bg_popup_call3_rect_pane_g6

0x1e5d,	// (0x000672c1) bg_popup_call3_rect_pane_g7

0x940b,	// (0x0006e86f) mup_visualizer_osc_pane

0x0c9e,	// (0x00066102) mup_visualizer_spec_pane

0xa061,	// (0x0006f4c5) call3_video_qcif_pane_ParamLimits

0xa061,	// (0x0006f4c5) call3_video_qcif_pane

0xa071,	// (0x0006f4d5) call3_video_qcif_uncrop_pane_ParamLimits

0xa071,	// (0x0006f4d5) call3_video_qcif_uncrop_pane

0xa07d,	// (0x0006f4e1) call3_video_subqcif_pane_ParamLimits

0xa07d,	// (0x0006f4e1) call3_video_subqcif_pane

0xa08f,	// (0x0006f4f3) call3_video_subqcif_uncrop_pane_ParamLimits

0xa08f,	// (0x0006f4f3) call3_video_subqcif_uncrop_pane

0xa0e7,	// (0x0006f54b) popup_call3_audio_in_window_g4_ParamLimits

0xa0e7,	// (0x0006f54b) popup_call3_audio_in_window_g4

0xa00e,	// (0x0006f472) mup_spec_half_pane

0xa017,	// (0x0006f47b) mup_spec_half_pane_cp

0x20d5,	// (0x00067539) mup_osc_middle_pane

0x20de,	// (0x00067542) mup_visualizer_osc_pane_g1

0x9fef,	// (0x0006f453) mup_spec_bar_pane_ParamLimits

0x9fef,	// (0x0006f453) mup_spec_bar_pane

0x20c2,	// (0x00067526) mup_spec_bar_pane_g1

0x20cc,	// (0x00067530) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00074a8e) mup_spec_bar_pane_g

0x762c,	// (0x0006ca90) aid_cale_week_size_cell_pane_ParamLimits

0x763f,	// (0x0006caa3) bg_cale_heading_pane_ParamLimits

0x0149,	// (0x000655ad) bg_cale_pane_cp01_ParamLimits

0x765b,	// (0x0006cabf) cale_week_corner_pane_ParamLimits

0x766c,	// (0x0006cad0) cale_week_day_heading_pane_ParamLimits

0x7688,	// (0x0006caec) cale_week_scroll_pane_g1_ParamLimits

0x76a1,	// (0x0006cb05) cale_week_scroll_pane_g2_ParamLimits

0x76b2,	// (0x0006cb16) cale_week_scroll_pane_g3_ParamLimits

0x76c3,	// (0x0006cb27) cale_week_scroll_pane_g4_ParamLimits

0x76d4,	// (0x0006cb38) cale_week_scroll_pane_g5_ParamLimits

0x76e5,	// (0x0006cb49) cale_week_scroll_pane_g6_ParamLimits

0x76f6,	// (0x0006cb5a) cale_week_scroll_pane_g7_ParamLimits

0x7709,	// (0x0006cb6d) cale_week_scroll_pane_g8_ParamLimits

0x771c,	// (0x0006cb80) cale_week_scroll_pane_g9_ParamLimits

0x772d,	// (0x0006cb91) cale_week_scroll_pane_g10_ParamLimits

0x773e,	// (0x0006cba2) cale_week_scroll_pane_g11_ParamLimits

0x774f,	// (0x0006cbb3) cale_week_scroll_pane_g12_ParamLimits

0x7768,	// (0x0006cbcc) cale_week_scroll_pane_g13_ParamLimits

0x7781,	// (0x0006cbe5) cale_week_scroll_pane_g14_ParamLimits

0x779a,	// (0x0006cbfe) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00074636) cale_week_scroll_pane_g_ParamLimits

0x77b3,	// (0x0006cc17) cale_week_time_pane_ParamLimits

0x77c6,	// (0x0006cc2a) grid_cale_week_pane_ParamLimits

0x0162,	// (0x000655c6) listscroll_cale_week_pane_t1

0x77e3,	// (0x0006cc47) scroll_pane_cp08_ParamLimits

0x8366,	// (0x0006d7ca) cale_month_corner_pane_ParamLimits

0x057b,	// (0x000659df) cale_month_pane_t1

0x86dc,	// (0x0006db40) cale_month_week_pane_ParamLimits

0x0c90,	// (0x000660f4) popup_call_status_window_g1_ParamLimits

0x8deb,	// (0x0006e24f) popup_call_status_window_g2_ParamLimits

0x8df7,	// (0x0006e25b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000747de) popup_call_status_window_g_ParamLimits

0x08cb,	// (0x00065d2f) aid_call2_pane

0x5f4d,	// (0x0006b3b1) msg_header_pane_g1

0x9784,	// (0x0006ebe8) postcard_address2_pane_ParamLimits

0x9784,	// (0x0006ebe8) postcard_address2_pane

0x9790,	// (0x0006ebf4) postcard_message2_pane_ParamLimits

0x9790,	// (0x0006ebf4) postcard_message2_pane

0x9f7d,	// (0x0006f3e1) message2_row_pane_ParamLimits

0x9f7d,	// (0x0006f3e1) message2_row_pane

0x9f9a,	// (0x0006f3fe) address2_row_pane_ParamLimits

0x9f9a,	// (0x0006f3fe) address2_row_pane

0x2090,	// (0x000674f4) postcard_message2_row_pane_g1

0x2098,	// (0x000674fc) postcard_message2_row_pane_t1

0x2090,	// (0x000674f4) address2_row_pane_g1

0x2098,	// (0x000674fc) address2_row_pane_t1

0x79ff,	// (0x0006ce63) aid_size_cell_vorec

0xed2d,	// (0x00074191) main_rss_pane

0x9fad,	// (0x0006f411) rss_list_single_pane_ParamLimits

0x9fad,	// (0x0006f411) rss_list_single_pane

0x20a6,	// (0x0006750a) rss_list_single_pane_t1

0x20b4,	// (0x00067518) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00074a89) rss_list_single_pane_t

0xed2d,	// (0x00074191) main_camera2_pane

0xed2d,	// (0x00074191) main_video2_pane

0xa1e3,	// (0x0006f647) cams_zoom_pane_cp2_ParamLimits

0xa1e3,	// (0x0006f647) cams_zoom_pane_cp2

0xa1ef,	// (0x0006f653) image2_vga_pane_ParamLimits

0xa1ef,	// (0x0006f653) image2_vga_pane

0xa1fe,	// (0x0006f662) main_camera2_pane_g1_ParamLimits

0xa1fe,	// (0x0006f662) main_camera2_pane_g1

0xa20a,	// (0x0006f66e) main_camera2_pane_g2_ParamLimits

0xa20a,	// (0x0006f66e) main_camera2_pane_g2

0xa216,	// (0x0006f67a) main_camera2_pane_g3_ParamLimits

0xa216,	// (0x0006f67a) main_camera2_pane_g3

0xa222,	// (0x0006f686) main_camera2_pane_g4_ParamLimits

0xa222,	// (0x0006f686) main_camera2_pane_g4

0xa22e,	// (0x0006f692) main_camera2_pane_g5_ParamLimits

0xa22e,	// (0x0006f692) main_camera2_pane_g5

0xa23a,	// (0x0006f69e) main_camera2_pane_g6_ParamLimits

0xa23a,	// (0x0006f69e) main_camera2_pane_g6

0xa246,	// (0x0006f6aa) main_camera2_pane_g7_ParamLimits

0xa246,	// (0x0006f6aa) main_camera2_pane_g7

0xa252,	// (0x0006f6b6) main_camera2_pane_g8_ParamLimits

0xa252,	// (0x0006f6b6) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00074aaa) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00074aaa) main_camera2_pane_g

0xa26a,	// (0x0006f6ce) main_camera2_pane_t1_ParamLimits

0xa26a,	// (0x0006f6ce) main_camera2_pane_t1

0xa27c,	// (0x0006f6e0) main_camera2_pane_t2_ParamLimits

0xa27c,	// (0x0006f6e0) main_camera2_pane_t2

0xa28e,	// (0x0006f6f2) main_camera2_pane_t3_ParamLimits

0xa28e,	// (0x0006f6f2) main_camera2_pane_t3

0xa2a0,	// (0x0006f704) main_camera2_pane_t4_ParamLimits

0xa2a0,	// (0x0006f704) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00074abd) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00074abd) main_camera2_pane_t

0xa302,	// (0x0006f766) cams_zoom_pane_cp4_ParamLimits

0xa302,	// (0x0006f766) cams_zoom_pane_cp4

0xa312,	// (0x0006f776) image2_cif_pane_ParamLimits

0xa312,	// (0x0006f776) image2_cif_pane

0xa327,	// (0x0006f78b) image2_subqcif_pane_ParamLimits

0xa327,	// (0x0006f78b) image2_subqcif_pane

0xa336,	// (0x0006f79a) main_video2_pane_g1_ParamLimits

0xa336,	// (0x0006f79a) main_video2_pane_g1

0xa348,	// (0x0006f7ac) main_video2_pane_g2_ParamLimits

0xa348,	// (0x0006f7ac) main_video2_pane_g2

0xa358,	// (0x0006f7bc) main_video2_pane_g3_ParamLimits

0xa358,	// (0x0006f7bc) main_video2_pane_g3

0xa368,	// (0x0006f7cc) main_video2_pane_g4_ParamLimits

0xa368,	// (0x0006f7cc) main_video2_pane_g4

0xa378,	// (0x0006f7dc) main_video2_pane_g5_ParamLimits

0xa378,	// (0x0006f7dc) main_video2_pane_g5

0xa388,	// (0x0006f7ec) main_video2_pane_g6_ParamLimits

0xa388,	// (0x0006f7ec) main_video2_pane_g6

0x0005,

0xf668,	// (0x00074acc) main_video2_pane_g_ParamLimits

0xf668,	// (0x00074acc) main_video2_pane_g

0xa39a,	// (0x0006f7fe) main_video2_pane_t1_ParamLimits

0xa39a,	// (0x0006f7fe) main_video2_pane_t1

0xa3b4,	// (0x0006f818) main_video2_pane_t2_ParamLimits

0xa3b4,	// (0x0006f818) main_video2_pane_t2

0xa3da,	// (0x0006f83e) main_video2_pane_t3_ParamLimits

0xa3da,	// (0x0006f83e) main_video2_pane_t3

0x0002,

0xf675,	// (0x00074ad9) main_video2_pane_t_ParamLimits

0xf675,	// (0x00074ad9) main_video2_pane_t

0x9ced,	// (0x0006f151) call_muted_g2

0x0001,

0xf617,	// (0x00074a7b) call_muted_g

0xed2d,	// (0x00074191) main_mup2_pane

0x2195,	// (0x000675f9) main_mup2_pane_g1_ParamLimits

0x2195,	// (0x000675f9) main_mup2_pane_g1

0xa400,	// (0x0006f864) main_mup2_pane_g2_ParamLimits

0xa400,	// (0x0006f864) main_mup2_pane_g2

0xa682,	// (0x0006fae6) main_mup_pane_g13_cp1

0xa68a,	// (0x0006faee) mup_volume_pane_cp1

0xa420,	// (0x0006f884) main_mup2_pane_g4_ParamLimits

0xa420,	// (0x0006f884) main_mup2_pane_g4

0xa435,	// (0x0006f899) main_mup2_pane_g5_ParamLimits

0xa435,	// (0x0006f899) main_mup2_pane_g5

0xa44a,	// (0x0006f8ae) main_mup2_pane_g6_ParamLimits

0xa44a,	// (0x0006f8ae) main_mup2_pane_g6

0xa45f,	// (0x0006f8c3) main_mup2_pane_g7_ParamLimits

0xa45f,	// (0x0006f8c3) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00074ae0) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00074ae0) main_mup2_pane_g

0xa47b,	// (0x0006f8df) main_mup2_pane_t1_ParamLimits

0xa47b,	// (0x0006f8df) main_mup2_pane_t1

0xa492,	// (0x0006f8f6) main_mup2_pane_t2_ParamLimits

0xa492,	// (0x0006f8f6) main_mup2_pane_t2

0xa4a9,	// (0x0006f90d) main_mup2_pane_t3_ParamLimits

0xa4a9,	// (0x0006f90d) main_mup2_pane_t3

0xa4c0,	// (0x0006f924) main_mup2_pane_t4_ParamLimits

0xa4c0,	// (0x0006f924) main_mup2_pane_t4

0xa4da,	// (0x0006f93e) main_mup2_pane_t5_ParamLimits

0xa4da,	// (0x0006f93e) main_mup2_pane_t5

0xa4f4,	// (0x0006f958) main_mup2_pane_t6_ParamLimits

0xa4f4,	// (0x0006f958) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00074aef) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00074aef) main_mup2_pane_t

0xa52c,	// (0x0006f990) mup2_visualizer_pane_ParamLimits

0xa52c,	// (0x0006f990) mup2_visualizer_pane

0xa562,	// (0x0006f9c6) mup_progress_pane_cp_ParamLimits

0xa562,	// (0x0006f9c6) mup_progress_pane_cp

0xa66d,	// (0x0006fad1) mup_volume_pane_cp_ParamLimits

0xa66d,	// (0x0006fad1) mup_volume_pane_cp

0xa579,	// (0x0006f9dd) mup2_visualizer_pane_g1_ParamLimits

0xa579,	// (0x0006f9dd) mup2_visualizer_pane_g1

0x2167,	// (0x000675cb) mup2_visualizer_pane_g2_ParamLimits

0x2167,	// (0x000675cb) mup2_visualizer_pane_g2

0xa58e,	// (0x0006f9f2) mup2_visualizer_pane_g3_ParamLimits

0xa58e,	// (0x0006f9f2) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00074afc) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00074afc) mup2_visualizer_pane_g

0x0f07,	// (0x0006636b) aid_size_cell_fmradio

0x9e03,	// (0x0006f267) aid_height_parent_landcape

0x03e3,	// (0x00065847) wml_content_pane_cp

0x03eb,	// (0x0006584f) wml_tabs_pane

0x03f4,	// (0x00065858) popup_wml_miniature_window

0x03fc,	// (0x00065860) scroll_pane_cp021

0x0410,	// (0x00065874) wml_content_pane_comp8

0xed2d,	// (0x00074191) bg_popup_sub_pane_cp05

0x2185,	// (0x000675e9) popup_wml_miniature_window_g1

0x218d,	// (0x000675f1) wml_miniature_view_pane

0xa59c,	// (0x0006fa00) aid_size_wml_view

0xa5a4,	// (0x0006fa08) wml_miniature_view_pane_g1

0xa5ad,	// (0x0006fa11) wml_miniature_view_pane_g2

0xa5b6,	// (0x0006fa1a) wml_miniature_view_pane_g3

0xa5be,	// (0x0006fa22) wml_miniature_view_pane_g4

0xa5c6,	// (0x0006fa2a) wml_miniature_view_pane_g5

0xa5ce,	// (0x0006fa32) wml_miniature_view_pane_g6

0xa5d6,	// (0x0006fa3a) wml_miniature_view_pane_g7

0xa5de,	// (0x0006fa42) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00074b03) wml_miniature_view_pane_g

0x2195,	// (0x000675f9) background_graphic_ParamLimits

0x2195,	// (0x000675f9) background_graphic

0x21a1,	// (0x00067605) wml_tabs_2_pane

0x21aa,	// (0x0006760e) wml_tabs_3_pane_ParamLimits

0x21aa,	// (0x0006760e) wml_tabs_3_pane

0x21bc,	// (0x00067620) wml_tabs_4_pane_ParamLimits

0x21bc,	// (0x00067620) wml_tabs_4_pane

0x21d2,	// (0x00067636) wml_tabs_5_pane_ParamLimits

0x21d2,	// (0x00067636) wml_tabs_5_pane

0x21ec,	// (0x00067650) wml_tabs_pane_g2_ParamLimits

0x21ec,	// (0x00067650) wml_tabs_pane_g2

0x2200,	// (0x00067664) wml_tabs_pane_g3_ParamLimits

0x2200,	// (0x00067664) wml_tabs_pane_g3

0xa5e6,	// (0x0006fa4a) wml_tabs_2_active_pane_ParamLimits

0xa5e6,	// (0x0006fa4a) wml_tabs_2_active_pane

0xa5f6,	// (0x0006fa5a) wml_tabs_2_passive_pane_ParamLimits

0xa5f6,	// (0x0006fa5a) wml_tabs_2_passive_pane

0xa606,	// (0x0006fa6a) wml_tabs_3_active_pane_cp_ParamLimits

0xa606,	// (0x0006fa6a) wml_tabs_3_active_pane_cp

0xa617,	// (0x0006fa7b) wml_tabs_3_passive_pane_ParamLimits

0xa617,	// (0x0006fa7b) wml_tabs_3_passive_pane

0xa628,	// (0x0006fa8c) wml_tabs_3_passive_pane_cp_ParamLimits

0xa628,	// (0x0006fa8c) wml_tabs_3_passive_pane_cp

0xa639,	// (0x0006fa9d) tabs_4_active_pane

0xa641,	// (0x0006faa5) tabs_4_passive_pane

0xa649,	// (0x0006faad) tabs_4_passive_pane_cp

0xa651,	// (0x0006fab5) tabs_4_passive_pane_cp2

0x1ebd,	// (0x00067321) aid_height_text

0x93d4,	// (0x0006e838) mup_volume_cont_pane_ParamLimits

0x93d4,	// (0x0006e838) mup_volume_cont_pane

0x7199,	// (0x0006c5fd) aid_size_cell_pinb

0xefb8,	// (0x0007441c) aid_size_list_pinb

0xa54b,	// (0x0006f9af) mup2_volume_cont_pane_ParamLimits

0xa54b,	// (0x0006f9af) mup2_volume_cont_pane

0xa659,	// (0x0006fabd) mup2_volume_cont_pane_g1_ParamLimits

0xa659,	// (0x0006fabd) mup2_volume_cont_pane_g1

0x6df8,	// (0x0006c25c) aid_size_cell_touch_ParamLimits

0x6df8,	// (0x0006c25c) aid_size_cell_touch

0x7079,	// (0x0006c4dd) touch_pane_ParamLimits

0x7079,	// (0x0006c4dd) touch_pane

0x6dda,	// (0x0006c23e) main_rss2_pane

0x2256,	// (0x000676ba) listscroll_rss2_pane

0x225f,	// (0x000676c3) rss2_navigation_pane

0x2267,	// (0x000676cb) list_rss2_pane

0x0a72,	// (0x00065ed6) scroll_pane_cp22

0x226f,	// (0x000676d3) rss2_navigation_pane_g1

0x2278,	// (0x000676dc) rss2_navigation_pane_g2

0x2280,	// (0x000676e4) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00074b14) rss2_navigation_pane_g

0x2288,	// (0x000676ec) rss2_navigation_pane_t1

0xa692,	// (0x0006faf6) rss2_list_single_pane_ParamLimits

0xa692,	// (0x0006faf6) rss2_list_single_pane

0x2296,	// (0x000676fa) rss2_list_single_pane_t2

0x22a4,	// (0x00067708) rss2_list_single_pane_t3_ParamLimits

0x22a4,	// (0x00067708) rss2_list_single_pane_t3

0x22c1,	// (0x00067725) rss2_list_single_pane_t4

0x8b9c,	// (0x0006e000) smil_status_pane_g1

0xe953,	// (0x00073db7) main_image2_pane_ParamLimits

0xe953,	// (0x00073db7) main_image2_pane

0xa25e,	// (0x0006f6c2) main_camera2_pane_g9_ParamLimits

0xa25e,	// (0x0006f6c2) main_camera2_pane_g9

0xa2b2,	// (0x0006f716) main_camera2_pane_t5_ParamLimits

0xa2b2,	// (0x0006f716) main_camera2_pane_t5

0xa2c4,	// (0x0006f728) main_camera2_pane_t6_ParamLimits

0xa2c4,	// (0x0006f728) main_camera2_pane_t6

0xa6ce,	// (0x0006fb32) main_image2_pane_g1_ParamLimits

0xa6ce,	// (0x0006fb32) main_image2_pane_g1

0x9965,	// (0x0006edc9) smil2_video_pane_ParamLimits

0x9965,	// (0x0006edc9) smil2_video_pane

0x5cc4,	// (0x0006b128) aid_zoom_text_primary_cp

0xe8db,	// (0x00073d3f) popup_preview_fixed_window

0x034c,	// (0x000657b0) im_reading_pane_g1

0xa1a8,	// (0x0006f60c) cams2_bc_adjust_pane_cp_ParamLimits

0xa1a8,	// (0x0006f60c) cams2_bc_adjust_pane_cp

0xa2f4,	// (0x0006f758) cams2_bc_adjust_pane_ParamLimits

0xa2f4,	// (0x0006f758) cams2_bc_adjust_pane

0xa6da,	// (0x0006fb3e) cams2_bc_adjust_pane_g1

0xa6e2,	// (0x0006fb46) cams2_slider_pane

0xa6eb,	// (0x0006fb4f) cams2_slider_pane_g1

0xa6f4,	// (0x0006fb58) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00074b1b) cams2_slider_pane_g

0x726f,	// (0x0006c6d3) calc_display_pane_ParamLimits

0x728d,	// (0x0006c6f1) calc_paper_pane_ParamLimits

0x72a9,	// (0x0006c70d) grid_calc_pane_ParamLimits

0x8e55,	// (0x0006e2b9) popup_clock_digital_window_t1_ParamLimits

0x0ea4,	// (0x00066308) main_image_pane_t1

0x7255,	// (0x0006c6b9) aid_size_cell_calc_ParamLimits

0x7255,	// (0x0006c6b9) aid_size_cell_calc

0x9e35,	// (0x0006f299) popup_blid_sat_info2_window_ParamLimits

0x9e35,	// (0x0006f299) popup_blid_sat_info2_window

0x230b,	// (0x0006776f) aid_size_cell_blid

0x2313,	// (0x00067777) bg_popup_window_pane_cp07

0x2336,	// (0x0006779a) grid_popup_blid_pane

0x2340,	// (0x000677a4) heading_pane_cp05_ParamLimits

0x2340,	// (0x000677a4) heading_pane_cp05

0x240a,	// (0x0006786e) cell_popup_blid_pane_ParamLimits

0x240a,	// (0x0006786e) cell_popup_blid_pane

0x2430,	// (0x00067894) cell_popup_blid_pane_g1

0x2438,	// (0x0006789c) cell_popup_blid_pane_t1

0xa511,	// (0x0006f975) mup2_indicator_pane_ParamLimits

0xa511,	// (0x0006f975) mup2_indicator_pane

0x0bbf,	// (0x00066023) mup2_visualizer_osc_pane

0x2173,	// (0x000675d7) mup2_visualizer_spec_pane_ParamLimits

0x2173,	// (0x000675d7) mup2_visualizer_spec_pane

0xa70e,	// (0x0006fb72) mup2_spec_half_pane

0xa717,	// (0x0006fb7b) mup2_spec_half_pane_cp

0xa721,	// (0x0006fb85) mup2_spec_bar_pane_ParamLimits

0xa721,	// (0x0006fb85) mup2_spec_bar_pane

0x20c2,	// (0x00067526) mup2_spec_bar_pane_g1

0x20cc,	// (0x00067530) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00074a8e) mup2_spec_bar_pane_g

0xa740,	// (0x0006fba4) mup2_osc_middle_pane

0x20de,	// (0x00067542) mup2_visualizer_osc_pane_g1

0xe92e,	// (0x00073d92) popup_number_entry_window_t1_ParamLimits

0xe941,	// (0x00073da5) popup_number_entry_window_t2_ParamLimits

0xe961,	// (0x00073dc5) popup_number_entry_window_t3_ParamLimits

0x70d0,	// (0x0006c534) popup_number_entry_window_t5_ParamLimits

0x70d0,	// (0x0006c534) popup_number_entry_window_t5

0xf0ec,	// (0x00074550) popup_number_entry_window_t_ParamLimits

0xe973,	// (0x00073dd7) text_title_cp2_ParamLimits

0x964c,	// (0x0006eab0) aid_hotspot_pointer_text2_pane

0x96e6,	// (0x0006eb4a) main_viewer_pane_g9_ParamLimits

0x96e6,	// (0x0006eb4a) main_viewer_pane_g9

0x057b,	// (0x000659df) cale_month_pane_t1_ParamLimits

0x05e6,	// (0x00065a4a) bg_cale_pane_ParamLimits

0x05fe,	// (0x00065a62) list_cale_pane_ParamLimits

0x0162,	// (0x000655c6) listscroll_cale_day_pane_t1

0x060f,	// (0x00065a73) scroll_pane_cp09_ParamLimits

0x9413,	// (0x0006e877) main_mup_eq_pane_t1_ParamLimits

0x9413,	// (0x0006e877) main_mup_eq_pane_t1

0x942d,	// (0x0006e891) main_mup_eq_pane_t2_ParamLimits

0x942d,	// (0x0006e891) main_mup_eq_pane_t2

0x9445,	// (0x0006e8a9) main_mup_eq_pane_t3_ParamLimits

0x9445,	// (0x0006e8a9) main_mup_eq_pane_t3

0x945d,	// (0x0006e8c1) main_mup_eq_pane_t4_ParamLimits

0x945d,	// (0x0006e8c1) main_mup_eq_pane_t4

0x9475,	// (0x0006e8d9) main_mup_eq_pane_t5_ParamLimits

0x9475,	// (0x0006e8d9) main_mup_eq_pane_t5

0x948d,	// (0x0006e8f1) main_mup_eq_pane_t6_ParamLimits

0x948d,	// (0x0006e8f1) main_mup_eq_pane_t6

0x94a1,	// (0x0006e905) main_mup_eq_pane_t7_ParamLimits

0x94a1,	// (0x0006e905) main_mup_eq_pane_t7

0x94b5,	// (0x0006e919) main_mup_eq_pane_t8_ParamLimits

0x94b5,	// (0x0006e919) main_mup_eq_pane_t8

0x94cb,	// (0x0006e92f) main_mup_eq_pane_t9_ParamLimits

0x94cb,	// (0x0006e92f) main_mup_eq_pane_t9

0x94e3,	// (0x0006e947) main_mup_eq_pane_t10_ParamLimits

0x94e3,	// (0x0006e947) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000748dd) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000748dd) main_mup_eq_pane_t

0x95a0,	// (0x0006ea04) mup_equalizer_pane_cp5_ParamLimits

0x95b6,	// (0x0006ea1a) mup_equalizer_pane_cp6_ParamLimits

0x95ce,	// (0x0006ea32) mup_equalizer_pane_cp7_ParamLimits

0x6dda,	// (0x0006c23e) main_gallery_pane

0x20e7,	// (0x0006754b) smil2_volume_pane

0x2102,	// (0x00067566) smil_status_volume_pane_g1_ParamLimits

0x20ef,	// (0x00067553) smil_status_volume_pane_g2_ParamLimits

0xa01f,	// (0x0006f483) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00074a93) smil_status_volume_pane_g_ParamLimits

0x2313,	// (0x00067777) bg_popup_window_pane_cp07_ParamLimits

0x2321,	// (0x00067785) blid_firmament_pane

0xa749,	// (0x0006fbad) aid_size_cell_gallery_ParamLimits

0xa749,	// (0x0006fbad) aid_size_cell_gallery

0xa757,	// (0x0006fbbb) grid_gallery_pane_ParamLimits

0xa757,	// (0x0006fbbb) grid_gallery_pane

0xa767,	// (0x0006fbcb) cell_gallery_pane_ParamLimits

0xa767,	// (0x0006fbcb) cell_gallery_pane

0x2446,	// (0x000678aa) bg_cell_gallery_focus_pane_ParamLimits

0x2446,	// (0x000678aa) bg_cell_gallery_focus_pane

0x2458,	// (0x000678bc) cell_gallery_pane_g1_ParamLimits

0x2458,	// (0x000678bc) cell_gallery_pane_g1

0xa7b5,	// (0x0006fc19) cell_gallery_pane_g2_ParamLimits

0xa7b5,	// (0x0006fc19) cell_gallery_pane_g2

0xa7c2,	// (0x0006fc26) cell_gallery_pane_g3_ParamLimits

0xa7c2,	// (0x0006fc26) cell_gallery_pane_g3

0x2464,	// (0x000678c8) cell_gallery_pane_g4_ParamLimits

0x2464,	// (0x000678c8) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00074b41) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00074b41) cell_gallery_pane_g

0x2470,	// (0x000678d4) bg_cell_gallery_focus_pane_g1

0x2478,	// (0x000678dc) bg_cell_gallery_focus_pane_g2

0x2480,	// (0x000678e4) bg_cell_gallery_focus_pane_g3

0x2488,	// (0x000678ec) bg_cell_gallery_focus_pane_g4

0x2490,	// (0x000678f4) bg_cell_gallery_focus_pane_g5

0x2498,	// (0x000678fc) bg_cell_gallery_focus_pane_g6

0x24a0,	// (0x00067904) bg_cell_gallery_focus_pane_g7

0x24a8,	// (0x0006790c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00074b4a) bg_cell_gallery_focus_pane_g

0x24b0,	// (0x00067914) aid_firma_cardinal

0x24c4,	// (0x00067928) blid_firmament_pane_t1

0x24db,	// (0x0006793f) blid_firmament_pane_t2

0x24f2,	// (0x00067956) blid_firmament_pane_t3

0x2509,	// (0x0006796d) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00074b5b) blid_firmament_pane_t

0x2520,	// (0x00067984) blid_sat_info_pane

0x2530,	// (0x00067994) blid_sat_info_pane_g1

0x2530,	// (0x00067994) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00074b64) blid_sat_info_pane_g

0x253a,	// (0x0006799e) blid_sat_info_pane_t1

0x2548,	// (0x000679ac) smil2_volume_content_pane

0x2551,	// (0x000679b5) smil2_volume_pane_g1

0x2559,	// (0x000679bd) smil2_volume_content_pane_g1

0x2562,	// (0x000679c6) smil2_volume_content_pane_g2

0x256b,	// (0x000679cf) smil2_volume_content_pane_g3

0x2574,	// (0x000679d8) smil2_volume_content_pane_g4

0x257d,	// (0x000679e1) smil2_volume_content_pane_g5

0x2586,	// (0x000679ea) smil2_volume_content_pane_g6

0x258f,	// (0x000679f3) smil2_volume_content_pane_g7

0x2598,	// (0x000679fc) smil2_volume_content_pane_g8

0x25a1,	// (0x00067a05) smil2_volume_content_pane_g9

0x25aa,	// (0x00067a0e) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00074b69) smil2_volume_content_pane_g

0x784d,	// (0x0006ccb1) cale_week_day_heading_pane_t1_ParamLimits

0x7861,	// (0x0006ccc5) cale_week_day_heading_pane_t2_ParamLimits

0x7875,	// (0x0006ccd9) cale_week_day_heading_pane_t3_ParamLimits

0x7889,	// (0x0006cced) cale_week_day_heading_pane_t4_ParamLimits

0x789d,	// (0x0006cd01) cale_week_day_heading_pane_t5_ParamLimits

0x78b1,	// (0x0006cd15) cale_week_day_heading_pane_t6_ParamLimits

0x78c5,	// (0x0006cd29) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00074655) cale_week_day_heading_pane_t_ParamLimits

0x0174,	// (0x000655d8) bg_cale_side_pane_ParamLimits

0x78d9,	// (0x0006cd3d) cale_week_time_pane_t1_ParamLimits

0x78f1,	// (0x0006cd55) cale_week_time_pane_t2_ParamLimits

0x7909,	// (0x0006cd6d) cale_week_time_pane_t3_ParamLimits

0x7921,	// (0x0006cd85) cale_week_time_pane_t4_ParamLimits

0x7939,	// (0x0006cd9d) cale_week_time_pane_t5_ParamLimits

0x7951,	// (0x0006cdb5) cale_week_time_pane_t6_ParamLimits

0x7971,	// (0x0006cdd5) cale_week_time_pane_t7_ParamLimits

0x7991,	// (0x0006cdf5) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00074664) cale_week_time_pane_t_ParamLimits

0x79b1,	// (0x0006ce15) cell_cale_week_pane_g2_ParamLimits

0x0174,	// (0x000655d8) bg_cale_side_pane_cp01_ParamLimits

0x8a01,	// (0x0006de65) cale_month_week_pane_t1_ParamLimits

0x8a18,	// (0x0006de7c) cale_month_week_pane_t2_ParamLimits

0x8a2f,	// (0x0006de93) cale_month_week_pane_t3_ParamLimits

0x8a46,	// (0x0006deaa) cale_month_week_pane_t4_ParamLimits

0x8a5d,	// (0x0006dec1) cale_month_week_pane_t5_ParamLimits

0x8a7c,	// (0x0006dee0) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0007473d) cale_month_week_pane_t_ParamLimits

0x8b69,	// (0x0006dfcd) cell_cale_month_pane_g1_ParamLimits

0x6dda,	// (0x0006c23e) main_cale_event_viewer_pane

0x6dda,	// (0x0006c23e) listscroll_cale_event_viewer_pane

0x25b3,	// (0x00067a17) list_cale_ev_pane

0x25bb,	// (0x00067a1f) scroll_pane_cp023

0x25c7,	// (0x00067a2b) field_cale_ev_pane_ParamLimits

0x25c7,	// (0x00067a2b) field_cale_ev_pane

0x25e1,	// (0x00067a45) field_cale_ev_content_pane_ParamLimits

0x25e1,	// (0x00067a45) field_cale_ev_content_pane

0x25ed,	// (0x00067a51) field_cale_ev_pane_g1_ParamLimits

0x25ed,	// (0x00067a51) field_cale_ev_pane_g1

0x25f9,	// (0x00067a5d) field_cale_ev_pane_g2_ParamLimits

0x25f9,	// (0x00067a5d) field_cale_ev_pane_g2

0x2611,	// (0x00067a75) field_cale_ev_pane_g3_ParamLimits

0x2611,	// (0x00067a75) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00074b7e) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00074b7e) field_cale_ev_pane_g

0x2629,	// (0x00067a8d) field_cale_ev_pane_t1_ParamLimits

0x2629,	// (0x00067a8d) field_cale_ev_pane_t1

0x2640,	// (0x00067aa4) field_cale_ev_content_pane_t1_ParamLimits

0x2640,	// (0x00067aa4) field_cale_ev_content_pane_t1

0x0d48,	// (0x000661ac) bg_button_pane_cp01

0xf097,	// (0x000744fb) listscroll_cale_week_pane_ParamLimits

0x7622,	// (0x0006ca86) popup_toolbar_window_cp01

0x0162,	// (0x000655c6) listscroll_cale_week_pane_t1_ParamLimits

0xf097,	// (0x000744fb) listscroll_cale_day_pane_ParamLimits

0x7622,	// (0x0006ca86) popup_toolbar_window_cp02

0x0162,	// (0x000655c6) listscroll_cale_day_pane_t1_ParamLimits

0xf097,	// (0x000744fb) main_cale_month_pane_ParamLimits

0x9ef9,	// (0x0006f35d) popup_toolbar_window_cp03_ParamLimits

0x9ef9,	// (0x0006f35d) popup_toolbar_window_cp03

0x9877,	// (0x0006ecdb) main_image_pane_g2_ParamLimits

0x9877,	// (0x0006ecdb) main_image_pane_g2

0x9883,	// (0x0006ece7) main_image_pane_g3_ParamLimits

0x9883,	// (0x0006ece7) main_image_pane_g3

0x0002,

0xf50b,	// (0x0007496f) main_image_pane_g_ParamLimits

0xf50b,	// (0x0007496f) main_image_pane_g

0x0ea4,	// (0x00066308) main_image_pane_t1_ParamLimits

0x988f,	// (0x0006ecf3) main_image_pane_t2_ParamLimits

0x988f,	// (0x0006ecf3) main_image_pane_t2

0x98a1,	// (0x0006ed05) main_image_pane_t3_ParamLimits

0x98a1,	// (0x0006ed05) main_image_pane_t3

0x98b3,	// (0x0006ed17) main_image_pane_t4_ParamLimits

0x98b3,	// (0x0006ed17) main_image_pane_t4

0x0003,

0xf512,	// (0x00074976) main_image_pane_t_ParamLimits

0xf512,	// (0x00074976) main_image_pane_t

0x98c5,	// (0x0006ed29) popup_image_details_window_cp01

0x98cf,	// (0x0006ed33) popup_toobar_trans_pane_cp01_ParamLimits

0x98cf,	// (0x0006ed33) popup_toobar_trans_pane_cp01

0x9e7e,	// (0x0006f2e2) popup_image_details_window_ParamLimits

0x9e7e,	// (0x0006f2e2) popup_image_details_window

0x2048,	// (0x000674ac) popup_image_focus_window

0xa19a,	// (0x0006f5fe) camera2_autofocus_pane_ParamLimits

0xa19a,	// (0x0006f5fe) camera2_autofocus_pane

0x6dda,	// (0x0006c23e) bg_popup_sub_pane_cp06

0x265d,	// (0x00067ac1) popup_image_focus_window_g1

0x2665,	// (0x00067ac9) popup_image_focus_window_g2

0x266d,	// (0x00067ad1) popup_image_focus_window_g3

0x2675,	// (0x00067ad9) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00074b85) popup_image_focus_window_g

0x267d,	// (0x00067ae1) popup_image_focus_window_t1

0x268b,	// (0x00067aef) popup_image_focus_window_t2

0x269b,	// (0x00067aff) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00074b8e) popup_image_focus_window_t

0x26a9,	// (0x00067b0d) camera2_autofocus_pane_g1

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp01

0x26b7,	// (0x00067b1b) popup_image_details_window_g1

0x26ca,	// (0x00067b2e) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00074ba0) popup_image_details_window_g

0x26f3,	// (0x00067b57) popup_image_details_window_t1

0x2705,	// (0x00067b69) popup_image_details_window_t2

0x271e,	// (0x00067b82) popup_image_details_window_t3

0x2732,	// (0x00067b96) popup_image_details_window_t4

0x274d,	// (0x00067bb1) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00074ba7) popup_image_details_window_t

0xf083,	// (0x000744e7) bg_calc_paper_pane_ParamLimits

0x6dda,	// (0x0006c23e) grid_highlight_pane_cp013

0x73a2,	// (0x0006c806) list_calc_pane_ParamLimits

0x73b4,	// (0x0006c818) scroll_pane_cp024

0xf097,	// (0x000744fb) bg_calc_display_pane_ParamLimits

0x73bc,	// (0x0006c820) calc_display_pane_t1_ParamLimits

0x73d1,	// (0x0006c835) calc_display_pane_t2_ParamLimits

0x73e6,	// (0x0006c84a) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000745d7) calc_display_pane_t_ParamLimits

0x74cd,	// (0x0006c931) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000745f4) cell_calc_pane_g

0x74d6,	// (0x0006c93a) cell_calc_pane_t1

0x0018,	// (0x0006547c) grid_highlight_pane_cp02_ParamLimits

0x002e,	// (0x00065492) toolbar_button_pane_cp01_ParamLimits

0x002e,	// (0x00065492) toolbar_button_pane_cp01

0x0ee9,	// (0x0006634d) temp_image_control_pane_ParamLimits

0x0ee9,	// (0x0006634d) temp_image_control_pane

0xe953,	// (0x00073db7) main_mp3_pane

0x2767,	// (0x00067bcb) temp_image_control_pane_g1_ParamLimits

0x2767,	// (0x00067bcb) temp_image_control_pane_g1

0x2775,	// (0x00067bd9) temp_image_control_pane_g2_ParamLimits

0x2775,	// (0x00067bd9) temp_image_control_pane_g2

0x2787,	// (0x00067beb) temp_image_control_pane_g3_ParamLimits

0x2787,	// (0x00067beb) temp_image_control_pane_g3

0xa7ff,	// (0x0006fc63) temp_image_control_pane_g4_ParamLimits

0xa7ff,	// (0x0006fc63) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00074bb2) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00074bb2) temp_image_control_pane_g

0x2767,	// (0x00067bcb) main_mp3_pane_g1

0xa810,	// (0x0006fc74) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00074bbb) main_mp3_pane_g

0x27ca,	// (0x00067c2e) main_mp3_pane_t1

0x025d,	// (0x000656c1) main_camera_pane_g8_ParamLimits

0x025d,	// (0x000656c1) main_camera_pane_g8

0x7c39,	// (0x0006d09d) main_video_pane_g7_ParamLimits

0x7c39,	// (0x0006d09d) main_video_pane_g7

0xa2e2,	// (0x0006f746) main_camera2_pane_t7_ParamLimits

0xa2e2,	// (0x0006f746) main_camera2_pane_t7

0x03a3,	// (0x00065807) scroll_pane_cp025_ParamLimits

0x03a3,	// (0x00065807) scroll_pane_cp025

0x03b7,	// (0x0006581b) scroll_pane_cp026_ParamLimits

0x03b7,	// (0x0006581b) scroll_pane_cp026

0x03c6,	// (0x0006582a) wml_content_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_touch_calib_pane

0xa8b4,	// (0x0006fd18) main_touch_calib_pane_g1

0xa8c0,	// (0x0006fd24) main_touch_calib_pane_g2

0xa8cc,	// (0x0006fd30) main_touch_calib_pane_g3

0xa8d8,	// (0x0006fd3c) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00074bd9) main_touch_calib_pane_g

0xa8e4,	// (0x0006fd48) main_touch_calib_pane_t1

0xa8fb,	// (0x0006fd5f) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00074be2) main_touch_calib_pane_t

0x0b00,	// (0x00065f64) mup_progress_pane_cp02

0x0b1f,	// (0x00065f83) navi_pane_g1

0x0b81,	// (0x00065fe5) navi_pane_mp_t3

0xe953,	// (0x00073db7) main_mp3_pane_ParamLimits

0x9f37,	// (0x0006f39b) navi_pane_ParamLimits

0x2767,	// (0x00067bcb) main_mp3_pane_g1_ParamLimits

0xa810,	// (0x0006fc74) main_mp3_pane_g2_ParamLimits

0xa81c,	// (0x0006fc80) main_mp3_pane_g3_ParamLimits

0xa81c,	// (0x0006fc80) main_mp3_pane_g3

0xa828,	// (0x0006fc8c) main_mp3_pane_g4_ParamLimits

0xa828,	// (0x0006fc8c) main_mp3_pane_g4

0x2797,	// (0x00067bfb) main_mp3_pane_g5_ParamLimits

0x2797,	// (0x00067bfb) main_mp3_pane_g5

0x27a5,	// (0x00067c09) main_mp3_pane_g6_ParamLimits

0x27a5,	// (0x00067c09) main_mp3_pane_g6

0x27b2,	// (0x00067c16) main_mp3_pane_g7_ParamLimits

0x27b2,	// (0x00067c16) main_mp3_pane_g7

0x27be,	// (0x00067c22) main_mp3_pane_g8_ParamLimits

0x27be,	// (0x00067c22) main_mp3_pane_g8

0xf757,	// (0x00074bbb) main_mp3_pane_g_ParamLimits

0xa834,	// (0x0006fc98) main_mp3_pane_t2

0xa844,	// (0x0006fca8) main_mp3_pane_t3

0x27d8,	// (0x00067c3c) main_mp3_pane_t4

0x27e6,	// (0x00067c4a) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00074bcc) main_mp3_pane_t

0x27f4,	// (0x00067c58) mup_progress_pane_cp01

0x5cc4,	// (0x0006b128) aid_zoom_text_secondary2

0x25b3,	// (0x00067a17) list_cale_ev2_pane

0x25bb,	// (0x00067a1f) scroll_pane_cp023_ParamLimits

0xa94e,	// (0x0006fdb2) field_cale_ev2_pane_ParamLimits

0xa94e,	// (0x0006fdb2) field_cale_ev2_pane

0xa982,	// (0x0006fde6) field_cale_ev2_pane_g1_ParamLimits

0xa982,	// (0x0006fde6) field_cale_ev2_pane_g1

0xa98e,	// (0x0006fdf2) field_cale_ev2_pane_g2_ParamLimits

0xa98e,	// (0x0006fdf2) field_cale_ev2_pane_g2

0xa9a6,	// (0x0006fe0a) field_cale_ev2_pane_g3_ParamLimits

0xa9a6,	// (0x0006fe0a) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00074bed) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00074bed) field_cale_ev2_pane_g

0x5fd6,	// (0x0006b43a) field_cale_ev2_pane_t1_ParamLimits

0x5fd6,	// (0x0006b43a) field_cale_ev2_pane_t1

0x5fed,	// (0x0006b451) field_cale_ev2_pane_t2_ParamLimits

0x5fed,	// (0x0006b451) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00074bf6) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00074bf6) field_cale_ev2_pane_t

0x974e,	// (0x0006ebb2) main_postcard_pane_g5_ParamLimits

0x974e,	// (0x0006ebb2) main_postcard_pane_g5

0x975c,	// (0x0006ebc0) main_postcard_pane_g6_ParamLimits

0x975c,	// (0x0006ebc0) main_postcard_pane_g6

0x7a79,	// (0x0006cedd) camera2_autofocus_pane_cp_ParamLimits

0x7a79,	// (0x0006cedd) camera2_autofocus_pane_cp

0xe953,	// (0x00073db7) main_mup3_pane

0xa9ea,	// (0x0006fe4e) main_mup3_pane_g1_ParamLimits

0xa9ea,	// (0x0006fe4e) main_mup3_pane_g1

0xaa0b,	// (0x0006fe6f) main_mup3_pane_g2_ParamLimits

0xaa0b,	// (0x0006fe6f) main_mup3_pane_g2

0xaa86,	// (0x0006feea) main_mup3_pane_g3_ParamLimits

0xaa86,	// (0x0006feea) main_mup3_pane_g3

0xaac5,	// (0x0006ff29) main_mup3_pane_g4_ParamLimits

0xaac5,	// (0x0006ff29) main_mup3_pane_g4

0xab04,	// (0x0006ff68) main_mup3_pane_g5_ParamLimits

0xab04,	// (0x0006ff68) main_mup3_pane_g5

0xab45,	// (0x0006ffa9) main_mup3_pane_g6_ParamLimits

0xab45,	// (0x0006ffa9) main_mup3_pane_g6

0x27fc,	// (0x00067c60) main_mup3_pane_g7_ParamLimits

0x27fc,	// (0x00067c60) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00074c06) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00074c06) main_mup3_pane_g

0xabb7,	// (0x0007001b) main_mup3_pane_t1_ParamLimits

0xabb7,	// (0x0007001b) main_mup3_pane_t1

0xac26,	// (0x0007008a) main_mup3_pane_t2_ParamLimits

0xac26,	// (0x0007008a) main_mup3_pane_t2

0xacef,	// (0x00070153) main_mup3_pane_t4_ParamLimits

0xacef,	// (0x00070153) main_mup3_pane_t4

0xad41,	// (0x000701a5) main_mup3_pane_t5_ParamLimits

0xad41,	// (0x000701a5) main_mup3_pane_t5

0xade9,	// (0x0007024d) main_mup3_pane_t6_ParamLimits

0xade9,	// (0x0007024d) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00074c17) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00074c17) main_mup3_pane_t

0xae91,	// (0x000702f5) mup3_progress_pane_ParamLimits

0xae91,	// (0x000702f5) mup3_progress_pane

0xaef6,	// (0x0007035a) popup_mup3_control_window_ParamLimits

0xaef6,	// (0x0007035a) popup_mup3_control_window

0x280a,	// (0x00067c6e) popup_mup3_text_window

0xaf0f,	// (0x00070373) mup3_progress_pane_t1

0xaf26,	// (0x0007038a) mup3_progress_pane_t2

0x2812,	// (0x00067c76) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00074c24) mup3_progress_pane_t

0x2829,	// (0x00067c8d) mup_progress_pane_cp03

0x6dda,	// (0x0006c23e) bg_tb_trans_pane_cp04

0xaf3d,	// (0x000703a1) mup3_volume_pane

0xaf45,	// (0x000703a9) popup_mup3_control_window_g1

0xaf4e,	// (0x000703b2) mup3_volume_pane_g1

0xaf57,	// (0x000703bb) mup3_volume_pane_g2

0xaf60,	// (0x000703c4) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00074c2b) mup3_volume_pane_g

0x6dda,	// (0x0006c23e) bg_tb_trans_pane_cp03

0x2839,	// (0x00067c9d) popup_mup3_text_window_g1

0x2841,	// (0x00067ca5) popup_mup3_text_window_t1

0xf0df,	// (0x00074543) list_calc_item_pane_g1_ParamLimits

0x223d,	// (0x000676a1) mup_volume_pane_cp_g1

0xa912,	// (0x0006fd76) main_touch_calib_pane_t3

0xa926,	// (0x0006fd8a) main_touch_calib_pane_t4

0xa93a,	// (0x0006fd9e) main_touch_calib_pane_t5

0x6de4,	// (0x0006c248) aid_cell_size_toolbar2

0x6dec,	// (0x0006c250) aid_popup3_width_pane

0x6e2c,	// (0x0006c290) aid_zoom_text_msg_primary

0x7a63,	// (0x0006cec7) vorec_t7

0xf0a3,	// (0x00074507) bg_calc_paper_pane_g1_ParamLimits

0xf0bb,	// (0x0007451f) bg_calc_paper_pane_g2_ParamLimits

0xf0af,	// (0x00074513) bg_calc_paper_pane_g3_ParamLimits

0xf0d3,	// (0x00074537) bg_calc_paper_pane_g4_ParamLimits

0xf0c7,	// (0x0007452b) bg_calc_paper_pane_g5_ParamLimits

0x7425,	// (0x0006c889) bg_calc_paper_pane_g6_ParamLimits

0x7436,	// (0x0006c89a) bg_calc_paper_pane_g7_ParamLimits

0x7447,	// (0x0006c8ab) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000745de) bg_calc_paper_pane_g_ParamLimits

0x7458,	// (0x0006c8bc) calc_bg_paper_pane_g9_ParamLimits

0x7b62,	// (0x0006cfc6) image_qvga_pane_ParamLimits

0x7b62,	// (0x0006cfc6) image_qvga_pane

0xef88,	// (0x000743ec) bg_popup_sub_pane_cp04_ParamLimits

0x0e20,	// (0x00066284) popup_mup_playback_window_g1_ParamLimits

0x0e2c,	// (0x00066290) popup_mup_playback_window_t1_ParamLimits

0x0e41,	// (0x000662a5) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0007496a) popup_mup_playback_window_t_ParamLimits

0xa411,	// (0x0006f875) main_mup2_pane_g3_ParamLimits

0xa411,	// (0x0006f875) main_mup2_pane_g3

0x7e22,	// (0x0006d286) popup_toolbar_window_cp04

0x1236,	// (0x0006669a) popup_call2_audio_second_window_g3_ParamLimits

0x1236,	// (0x0006669a) popup_call2_audio_second_window_g3

0x1640,	// (0x00066aa4) popup_call2_audio_first_window_g4_ParamLimits

0x1640,	// (0x00066aa4) popup_call2_audio_first_window_g4

0x1cbf,	// (0x00067123) popup_call2_audio_in_window_g4_ParamLimits

0x1cbf,	// (0x00067123) popup_call2_audio_in_window_g4

0x986a,	// (0x0006ecce) aid_area_sk_bg_cut_ParamLimits

0x986a,	// (0x0006ecce) aid_area_sk_bg_cut

0x0e56,	// (0x000662ba) aid_area_sk_bg_cut_2_ParamLimits

0x0e56,	// (0x000662ba) aid_area_sk_bg_cut_2

0xa7a5,	// (0x0006fc09) aid_placing_details_win

0xa7ad,	// (0x0006fc11) aid_placing_details_win_2

0x26a9,	// (0x00067b0d) camera2_autofocus_pane_g1_ParamLimits

0x7025,	// (0x0006c489) popup_fixed_preview_cale_window_ParamLimits

0x7025,	// (0x0006c489) popup_fixed_preview_cale_window

0x0beb,	// (0x0006604f) navi_slider_pane_g3

0x0be2,	// (0x00066046) navi_slider_pane_g4

0x0bd9,	// (0x0006603d) navi_slider_pane_g5

0x0beb,	// (0x0006604f) navi_slider_pane_g6

0x91a7,	// (0x0006e60b) navi_slider_pane_g7

0x0d15,	// (0x00066179) mup_scale_pane_g3

0x0d1e,	// (0x00066182) mup_scale_pane_g4

0x0d27,	// (0x0006618b) mup_scale_pane_g5

0x95e6,	// (0x0006ea4a) mup_scale_pane_g6

0x95ef,	// (0x0006ea53) mup_scale_pane_g7

0x0beb,	// (0x0006604f) cams2_slider_pane_g3

0x22f2,	// (0x00067756) cams2_slider_pane_g4

0xa6fd,	// (0x0006fb61) cams2_slider_pane_g5

0x0beb,	// (0x0006604f) cams2_slider_pane_g6

0xa705,	// (0x0006fb69) cams2_slider_pane_g7

0x2530,	// (0x00067994) camera2_autofocus_pane_cp_g1

0x284f,	// (0x00067cb3) bg_popup_preview_window_pane_cp02_ParamLimits

0x284f,	// (0x00067cb3) bg_popup_preview_window_pane_cp02

0x285b,	// (0x00067cbf) list_fp_cale_pane_ParamLimits

0x285b,	// (0x00067cbf) list_fp_cale_pane

0x2867,	// (0x00067ccb) popup_fixed_preview_cale_window_t1_ParamLimits

0x2867,	// (0x00067ccb) popup_fixed_preview_cale_window_t1

0xaf69,	// (0x000703cd) popup_fixed_preview_cale_window_t2_ParamLimits

0xaf69,	// (0x000703cd) popup_fixed_preview_cale_window_t2

0xaf7e,	// (0x000703e2) popup_fixed_preview_cale_window_t3_ParamLimits

0xaf7e,	// (0x000703e2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00074c32) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00074c32) popup_fixed_preview_cale_window_t

0xaf93,	// (0x000703f7) list_single_fp_cale_pane_ParamLimits

0xaf93,	// (0x000703f7) list_single_fp_cale_pane

0x2885,	// (0x00067ce9) list_single_fp_cale_pane_g1_ParamLimits

0x2885,	// (0x00067ce9) list_single_fp_cale_pane_g1

0x2891,	// (0x00067cf5) list_single_fp_cale_pane_g2_ParamLimits

0x2891,	// (0x00067cf5) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00074c39) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00074c39) list_single_fp_cale_pane_g

0x28aa,	// (0x00067d0e) list_single_fp_cale_pane_t1_ParamLimits

0x28aa,	// (0x00067d0e) list_single_fp_cale_pane_t1

0x28bc,	// (0x00067d20) list_single_fp_cale_pane_t2_ParamLimits

0x28bc,	// (0x00067d20) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00074c40) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00074c40) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6dda,	// (0x0006c23e) main_dialer_pane

0xafa8,	// (0x0007040c) aid_cell_size_keypad

0xafb2,	// (0x00070416) dialer_ne_pane

0xafbc,	// (0x00070420) grid_dialer_command_1_pane

0xafc4,	// (0x00070428) grid_dialer_command_2_pane

0xafcc,	// (0x00070430) grid_dialer_keypad_pane

0xafe0,	// (0x00070444) bg_popup_call_pane_cp06_ParamLimits

0xafe0,	// (0x00070444) bg_popup_call_pane_cp06

0xafec,	// (0x00070450) dialer_ne_clear_pane_ParamLimits

0xafec,	// (0x00070450) dialer_ne_clear_pane

0x28ef,	// (0x00067d53) dialer_ne_pane_g1

0x28f7,	// (0x00067d5b) dialer_ne_pane_t1_ParamLimits

0x28f7,	// (0x00067d5b) dialer_ne_pane_t1

0xaff8,	// (0x0007045c) dialer_ne_pane_t2_ParamLimits

0xaff8,	// (0x0007045c) dialer_ne_pane_t2

0xb015,	// (0x00070479) dialer_ne_pane_t3_ParamLimits

0xb015,	// (0x00070479) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00074c45) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00074c45) dialer_ne_pane_t

0xb039,	// (0x0007049d) dialer_ne_pane_t3_copy1_ParamLimits

0xb039,	// (0x0007049d) dialer_ne_pane_t3_copy1

0xb05d,	// (0x000704c1) cell_dialer_keypad_pane_ParamLimits

0xb05d,	// (0x000704c1) cell_dialer_keypad_pane

0xb074,	// (0x000704d8) cell_dialer_command_1_pane_ParamLimits

0xb074,	// (0x000704d8) cell_dialer_command_1_pane

0xb08a,	// (0x000704ee) cell_dialer_command_2_pane_ParamLimits

0xb08a,	// (0x000704ee) cell_dialer_command_2_pane

0x2909,	// (0x00067d6d) bg_button_pane_cp02_ParamLimits

0x2909,	// (0x00067d6d) bg_button_pane_cp02

0xb099,	// (0x000704fd) cell_dialer_keypad_pane_g1_ParamLimits

0xb099,	// (0x000704fd) cell_dialer_keypad_pane_g1

0x2909,	// (0x00067d6d) bg_button_pane_cp03_ParamLimits

0x2909,	// (0x00067d6d) bg_button_pane_cp03

0xb0ae,	// (0x00070512) cell_dialer_command_1_pane_g1_ParamLimits

0xb0ae,	// (0x00070512) cell_dialer_command_1_pane_g1

0x2915,	// (0x00067d79) bg_button_pane_cp04

0xb0c1,	// (0x00070525) cell_dialer_command_2_pane_g1

0x0bbf,	// (0x00066023) bg_button_pane_cp06

0x291d,	// (0x00067d81) dialer_ne_clear_pane_g1

0x90ea,	// (0x0006e54e) navi_pane_g2

0x9118,	// (0x0006e57c) navi_pane_g3

0x0002,

0xf409,	// (0x0007486d) navi_pane_g

0x9143,	// (0x0006e5a7) navi_pane_mv_g2

0x916a,	// (0x0006e5ce) navi_pane_mv_g5

0x9172,	// (0x0006e5d6) navi_pane_mv_t1

0xf097,	// (0x000744fb) main_clock2_pane

0xb0ef,	// (0x00070553) main_clock2_list_pane_ParamLimits

0xb0ef,	// (0x00070553) main_clock2_list_pane

0xb117,	// (0x0007057b) main_clock2_pane_t1_ParamLimits

0xb117,	// (0x0007057b) main_clock2_pane_t1

0xb147,	// (0x000705ab) main_clock2_pane_t2_ParamLimits

0xb147,	// (0x000705ab) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00074c4c) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00074c4c) main_clock2_pane_t

0xb1ae,	// (0x00070612) popup_clock_analogue_window_cp03_ParamLimits

0xb1ae,	// (0x00070612) popup_clock_analogue_window_cp03

0xb1ce,	// (0x00070632) popup_clock_digital_window_cp02_ParamLimits

0xb1ce,	// (0x00070632) popup_clock_digital_window_cp02

0xb243,	// (0x000706a7) main_clock2_list_single_pane_ParamLimits

0xb243,	// (0x000706a7) main_clock2_list_single_pane

0x0bbf,	// (0x00066023) list_highlight_pane_cp05

0x2925,	// (0x00067d89) main_clock2_list_single_pane_t1

0x7e22,	// (0x0006d286) popup_toolbar_window_cp04_ParamLimits

0xa7cf,	// (0x0006fc33) camera2_autofocus_pane_g2_ParamLimits

0xa7cf,	// (0x0006fc33) camera2_autofocus_pane_g2

0xa7db,	// (0x0006fc3f) camera2_autofocus_pane_g3_ParamLimits

0xa7db,	// (0x0006fc3f) camera2_autofocus_pane_g3

0xa7e7,	// (0x0006fc4b) camera2_autofocus_pane_g4_ParamLimits

0xa7e7,	// (0x0006fc4b) camera2_autofocus_pane_g4

0xa7f3,	// (0x0006fc57) camera2_autofocus_pane_g5_ParamLimits

0xa7f3,	// (0x0006fc57) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00074b95) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00074b95) camera2_autofocus_pane_g

0xa9ca,	// (0x0006fe2e) camera2_autofocus_pane_cp_g2

0xa9d2,	// (0x0006fe36) camera2_autofocus_pane_cp_g3

0xa9da,	// (0x0006fe3e) camera2_autofocus_pane_cp_g4

0xa9e2,	// (0x0006fe46) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00074bfb) camera2_autofocus_pane_cp_g

0xafd8,	// (0x0007043c) popup_dialer_spcha_window

0x6dda,	// (0x0006c23e) bg_popup_sub_pane_cp07

0x2933,	// (0x00067d97) list_spcha_pane

0x293b,	// (0x00067d9f) list_single_spcha_pane_ParamLimits

0x293b,	// (0x00067d9f) list_single_spcha_pane

0x6dda,	// (0x0006c23e) list_highlight_pane_cp06

0x294c,	// (0x00067db0) list_single_spcha_pane_t1

0x1a69,	// (0x00066ecd) popup_call2_audio_out_window_g4_ParamLimits

0x1a69,	// (0x00066ecd) popup_call2_audio_out_window_g4

0x6dda,	// (0x0006c23e) main_imed2_pane

0x2050,	// (0x000674b4) popup_imed_adjust2_window

0x9e8c,	// (0x0006f2f0) popup_imed_trans_window_ParamLimits

0x9e8c,	// (0x0006f2f0) popup_imed_trans_window

0x236c,	// (0x000677d0) popup_blid_sat_info2_window_t1

0x237a,	// (0x000677de) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00074b2a) popup_blid_sat_info2_window_t

0xb2ed,	// (0x00070751) aid_size_cell_colour_35

0xb307,	// (0x0007076b) aid_size_cell_colour_112

0xb31e,	// (0x00070782) aid_size_cell_effect

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp02

0x0729,	// (0x00065b8d) heading_imed_pane

0xb338,	// (0x0007079c) listscroll_imed_pane

0x295a,	// (0x00067dbe) heading_imed_pane_g1

0x2962,	// (0x00067dc6) heading_imed_pane_t1

0x2970,	// (0x00067dd4) grid_imed_colour_35_pane_ParamLimits

0x2970,	// (0x00067dd4) grid_imed_colour_35_pane

0xb344,	// (0x000707a8) grid_imed_effect_pane

0x298b,	// (0x00067def) list_imed_aspect_pane

0xb354,	// (0x000707b8) scroll_pane_cp027_ParamLimits

0xb354,	// (0x000707b8) scroll_pane_cp027

0xb360,	// (0x000707c4) cell_imed_effect_pane_ParamLimits

0xb360,	// (0x000707c4) cell_imed_effect_pane

0x2993,	// (0x00067df7) cell_imed_colour_pane_ParamLimits

0x2993,	// (0x00067df7) cell_imed_colour_pane

0x29d5,	// (0x00067e39) cell_imed_colour_pane_g1_ParamLimits

0x29d5,	// (0x00067e39) cell_imed_colour_pane_g1

0x29e6,	// (0x00067e4a) hgihlgiht_grid_pane_cp016_ParamLimits

0x29e6,	// (0x00067e4a) hgihlgiht_grid_pane_cp016

0xb378,	// (0x000707dc) cell_imed_effect_pane_g1

0xb380,	// (0x000707e4) grid_highlight_pane_cp017

0x0118,	// (0x0006557c) list_imed_single_pane_ParamLimits

0x0118,	// (0x0006557c) list_imed_single_pane

0x6dda,	// (0x0006c23e) list_highlight_pane_cp07

0x29f7,	// (0x00067e5b) list_imed_aspect_pane_comp1_t1

0x2028,	// (0x0006748c) bg_tb_trans_pane_cp05

0x2a19,	// (0x00067e7d) popup_imed_adjust2_window_g1

0x2a40,	// (0x00067ea4) popup_imed_adjust2_window_t1

0x2a58,	// (0x00067ebc) slider_imed_adjust_pane

0x2a6c,	// (0x00067ed0) slider_imed_adjust_pane_g1

0x2a7c,	// (0x00067ee0) slider_imed_adjust_pane_g2

0x2a8c,	// (0x00067ef0) slider_imed_adjust_pane_g3

0x2a9d,	// (0x00067f01) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00074c69) slider_imed_adjust_pane_g

0xb389,	// (0x000707ed) aid_size_cell_clipart2

0xb395,	// (0x000707f9) grid_imed_clipart_pane

0x2aae,	// (0x00067f12) scroll_pane_cp031

0xb39f,	// (0x00070803) cell_imed_clipart_pane_ParamLimits

0xb39f,	// (0x00070803) cell_imed_clipart_pane

0xb3c6,	// (0x0007082a) cell_imed_clipart_pane_g1

0x6dda,	// (0x0006c23e) grid_highlight_pane_cp014

0xb0fb,	// (0x0007055f) main_clock2_pane_g1_ParamLimits

0xb0fb,	// (0x0007055f) main_clock2_pane_g1

0xb1ea,	// (0x0007064e) aid_call2_pane_cp10

0xb1fc,	// (0x00070660) aid_call_pane_cp10

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g1

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g2

0xb20e,	// (0x00070672) popup_clock_analogue_window_cp10_g3

0xb20e,	// (0x00070672) popup_clock_analogue_window_cp10_g4

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00074c57) popup_clock_analogue_window_cp10_g

0xb224,	// (0x00070688) popup_clock_analogue_window_cp10_t1

0xb255,	// (0x000706b9) clock_digital_number_pane_cp10_ParamLimits

0xb255,	// (0x000706b9) clock_digital_number_pane_cp10

0xb26d,	// (0x000706d1) clock_digital_number_pane_cp11_ParamLimits

0xb26d,	// (0x000706d1) clock_digital_number_pane_cp11

0xb285,	// (0x000706e9) clock_digital_number_pane_cp12_ParamLimits

0xb285,	// (0x000706e9) clock_digital_number_pane_cp12

0xb29d,	// (0x00070701) clock_digital_number_pane_cp13_ParamLimits

0xb29d,	// (0x00070701) clock_digital_number_pane_cp13

0xb2b5,	// (0x00070719) clock_digital_separator_pane_cp10_ParamLimits

0xb2b5,	// (0x00070719) clock_digital_separator_pane_cp10

0xb2cd,	// (0x00070731) popup_clock_digital_window_cp02_t1_ParamLimits

0xb2cd,	// (0x00070731) popup_clock_digital_window_cp02_t1

0xef80,	// (0x000743e4) clock_digital_number_pane_cp10_g1

0xef80,	// (0x000743e4) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00074c72) clock_digital_number_pane_cp10_g

0xef80,	// (0x000743e4) clock_digital_separator_pane_cp10_g1

0xef80,	// (0x000743e4) clock_digital_separator_pane_g2_cp10

0x0b8f,	// (0x00065ff3) navi_pane_vded_g4

0x0b98,	// (0x00065ffc) navi_pane_vded_g5

0x0ba1,	// (0x00066005) navi_pane_vded_t1

0x6dda,	// (0x0006c23e) main_vded_pane

0xb3cf,	// (0x00070833) main_vded_pane_g1

0xb3db,	// (0x0007083f) main_vded_pane_g2

0xb3e5,	// (0x00070849) main_vded_pane_g3

0x0002,

0xf813,	// (0x00074c77) main_vded_pane_g

0xb3ef,	// (0x00070853) main_vded_pane_t1

0xb3fd,	// (0x00070861) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00074c7e) main_vded_pane_t

0xb40b,	// (0x0007086f) vded_slider_pane

0xb415,	// (0x00070879) vded_video_pane

0x2ab6,	// (0x00067f1a) vded_video_pane_g1

0xb41f,	// (0x00070883) vded_video_pane_g2

0x2530,	// (0x00067994) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00074c83) vded_video_pane_g

0x2ac0,	// (0x00067f24) vded_slider_pane_g1

0x223d,	// (0x000676a1) vded_slider_pane_g2

0x2ac9,	// (0x00067f2d) vded_slider_pane_g3

0x2ad2,	// (0x00067f36) vded_slider_pane_g4

0x2adb,	// (0x00067f3f) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00074c8a) vded_slider_pane_g

0xaee8,	// (0x0007034c) mup3_rocker_pane_ParamLimits

0xaee8,	// (0x0007034c) mup3_rocker_pane

0xb428,	// (0x0007088c) mup3_control_keys_pane_g1

0xb430,	// (0x00070894) mup3_control_keys_pane_g2

0xb438,	// (0x0007089c) mup3_control_keys_pane_g3

0xb440,	// (0x000708a4) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00074c95) mup3_control_keys_pane_g

0x7043,	// (0x0006c4a7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7043,	// (0x0006c4a7) popup_toolbar2_fixed_window_cp01

0xaf02,	// (0x00070366) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaf02,	// (0x00070366) popup_toolbar2_fixed_window_cp02

0x13a8,	// (0x0006680c) popup_call2_audio_second_window_t4_ParamLimits

0x13a8,	// (0x0006680c) popup_call2_audio_second_window_t4

0x18d6,	// (0x00066d3a) popup_call2_audio_first_window_t6_ParamLimits

0x18d6,	// (0x00066d3a) popup_call2_audio_first_window_t6

0x1b6c,	// (0x00066fd0) popup_call2_audio_out_window_t6_ParamLimits

0x1b6c,	// (0x00066fd0) popup_call2_audio_out_window_t6

0x6dda,	// (0x0006c23e) main_vitu_pane

0xb450,	// (0x000708b4) aid_size_cell_itu_ParamLimits

0xb450,	// (0x000708b4) aid_size_cell_itu

0x706b,	// (0x0006c4cf) bg_popup_window_pane_cp08_ParamLimits

0x706b,	// (0x0006c4cf) bg_popup_window_pane_cp08

0xb45e,	// (0x000708c2) field_vitu_entry_pane_ParamLimits

0xb45e,	// (0x000708c2) field_vitu_entry_pane

0xb46d,	// (0x000708d1) grid_vitu_function_pane_ParamLimits

0xb46d,	// (0x000708d1) grid_vitu_function_pane

0xb47d,	// (0x000708e1) grid_vitu_itu_pane_ParamLimits

0xb47d,	// (0x000708e1) grid_vitu_itu_pane

0xb48d,	// (0x000708f1) cell_vitu_itu_pane_ParamLimits

0xb48d,	// (0x000708f1) cell_vitu_itu_pane

0xb4a2,	// (0x00070906) cell_vitu_function_pane_ParamLimits

0xb4a2,	// (0x00070906) cell_vitu_function_pane

0xe953,	// (0x00073db7) bg_popup_sub_pane_cp08_ParamLimits

0xe953,	// (0x00073db7) bg_popup_sub_pane_cp08

0xb4b6,	// (0x0007091a) field_vitu_entry_pane_t1_ParamLimits

0xb4b6,	// (0x0007091a) field_vitu_entry_pane_t1

0x2afc,	// (0x00067f60) field_vitu_entry_pane_t2_ParamLimits

0x2afc,	// (0x00067f60) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00074ca3) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00074ca3) field_vitu_entry_pane_t

0x2b19,	// (0x00067f7d) bg_button_pane_cp05_ParamLimits

0x2b19,	// (0x00067f7d) bg_button_pane_cp05

0xb4d3,	// (0x00070937) cell_vitu_itu_pane_g1

0xb4eb,	// (0x0007094f) cell_vitu_itu_pane_t1_ParamLimits

0xb4eb,	// (0x0007094f) cell_vitu_itu_pane_t1

0xb4fd,	// (0x00070961) cell_vitu_itu_pane_t2_ParamLimits

0xb4fd,	// (0x00070961) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00074ca8) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00074ca8) cell_vitu_itu_pane_t

0x2b27,	// (0x00067f8b) bg_button_pane_cp07

0xb532,	// (0x00070996) cell_vitu_function_pane_g1

0x72cd,	// (0x0006c731) main_calc_pane_g1

0x6e20,	// (0x0006c284) aid_visual_content_pane

0x6dda,	// (0x0006c23e) main_vradio_pane

0xb53b,	// (0x0007099f) main_vradio_pane_g1_ParamLimits

0xb53b,	// (0x0007099f) main_vradio_pane_g1

0x2b31,	// (0x00067f95) main_vradio_pane_g2_ParamLimits

0x2b31,	// (0x00067f95) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00074caf) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00074caf) main_vradio_pane_g

0xb54b,	// (0x000709af) main_vradio_pane_t1_ParamLimits

0xb54b,	// (0x000709af) main_vradio_pane_t1

0xb55d,	// (0x000709c1) main_vradio_pane_t2_ParamLimits

0xb55d,	// (0x000709c1) main_vradio_pane_t2

0x2b3e,	// (0x00067fa2) main_vradio_pane_t3_ParamLimits

0x2b3e,	// (0x00067fa2) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00074cb4) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00074cb4) main_vradio_pane_t

0xb56f,	// (0x000709d3) vradio_rocker_control_pane_ParamLimits

0xb56f,	// (0x000709d3) vradio_rocker_control_pane

0xb57b,	// (0x000709df) vradio_station_info_pane_ParamLimits

0xb57b,	// (0x000709df) vradio_station_info_pane

0x2b52,	// (0x00067fb6) vradio_frequency_info_pane_ParamLimits

0x2b52,	// (0x00067fb6) vradio_frequency_info_pane

0x2530,	// (0x00067994) vradio_station_info_pane_g1

0x2b61,	// (0x00067fc5) vradio_station_info_pane_t1_ParamLimits

0x2b61,	// (0x00067fc5) vradio_station_info_pane_t1

0x2b83,	// (0x00067fe7) vradio_station_info_pane_t2_ParamLimits

0x2b83,	// (0x00067fe7) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00074cbb) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00074cbb) vradio_station_info_pane_t

0x2b95,	// (0x00067ff9) vradio_tuning_pane

0x2b9d,	// (0x00068001) vradio_rocker_control_pane_g1

0x2ba5,	// (0x00068009) vradio_rocker_control_pane_g2

0x2bad,	// (0x00068011) vradio_rocker_control_pane_g3

0x2bb5,	// (0x00068019) vradio_rocker_control_pane_g4

0x2bbd,	// (0x00068021) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00074cc0) vradio_rocker_control_pane_g

0xb58a,	// (0x000709ee) vradio_frequency_info_pane_g1

0x2bc5,	// (0x00068029) vradio_frequency_info_pane_t1_ParamLimits

0x2bc5,	// (0x00068029) vradio_frequency_info_pane_t1

0xb594,	// (0x000709f8) vradio_tuning_pane_g1

0xb59d,	// (0x00070a01) vradio_tuning_pane_t1

0x6e69,	// (0x0006c2cd) area_side_right_pane_ParamLimits

0x6e69,	// (0x0006c2cd) area_side_right_pane

0x1fef,	// (0x00067453) status_small_pane_g1

0x1ff7,	// (0x0006745b) status_small_pane_g2

0x2000,	// (0x00067464) status_small_pane_g3

0x2009,	// (0x0006746d) status_small_pane_g4

0x0003,

0xf61c,	// (0x00074a80) status_small_pane_g

0x2012,	// (0x00067476) status_small_pane_t1

0x6dda,	// (0x0006c23e) main_video3_pane

0x2bd9,	// (0x0006803d) cams_zoom_vslider_pane

0x2be1,	// (0x00068045) image3_wide_pane_ParamLimits

0x2be1,	// (0x00068045) image3_wide_pane

0x2bfb,	// (0x0006805f) image3_wide_small_pane

0x2c07,	// (0x0006806b) main_video3_pane_g1_ParamLimits

0x2c07,	// (0x0006806b) main_video3_pane_g1

0x2c23,	// (0x00068087) main_video3_pane_g2_ParamLimits

0x2c23,	// (0x00068087) main_video3_pane_g2

0x0001,

0xf867,	// (0x00074ccb) main_video3_pane_g_ParamLimits

0xf867,	// (0x00074ccb) main_video3_pane_g

0x2c3f,	// (0x000680a3) main_video3_pane_t1_ParamLimits

0x2c3f,	// (0x000680a3) main_video3_pane_t1

0x2c6a,	// (0x000680ce) main_video3_pane_t2_ParamLimits

0x2c6a,	// (0x000680ce) main_video3_pane_t2

0x2c95,	// (0x000680f9) main_video3_pane_t3_ParamLimits

0x2c95,	// (0x000680f9) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00074cd0) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00074cd0) main_video3_pane_t

0x2cc2,	// (0x00068126) cams_zoom_vslider_pane_g1

0x2ccb,	// (0x0006812f) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00074cd7) cams_zoom_vslider_pane_g

0x2cd3,	// (0x00068137) small_slider_vertical_pane

0x2530,	// (0x00067994) small_slider_vertical_pane_g1

0x2530,	// (0x00067994) small_slider_vertical_pane_g2

0x2cdb,	// (0x0006813f) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00074cdc) small_slider_vertical_pane_g

0x6dda,	// (0x0006c23e) main_hwr_training_pane

0x2ce4,	// (0x00068148) hwr_training_instruct_pane_ParamLimits

0x2ce4,	// (0x00068148) hwr_training_instruct_pane

0xb5ac,	// (0x00070a10) hwr_training_navi_pane_ParamLimits

0xb5ac,	// (0x00070a10) hwr_training_navi_pane

0xb5c6,	// (0x00070a2a) hwr_training_write_pane_ParamLimits

0xb5c6,	// (0x00070a2a) hwr_training_write_pane

0x6dda,	// (0x0006c23e) bg_frame_shadow_pane

0x2d1b,	// (0x0006817f) hwr_training_write_pane_g1

0x2d23,	// (0x00068187) hwr_training_write_pane_g2

0x2d2b,	// (0x0006818f) hwr_training_write_pane_g3

0x2d33,	// (0x00068197) hwr_training_write_pane_g4

0x2d3b,	// (0x0006819f) hwr_training_write_pane_g5

0x2d43,	// (0x000681a7) hwr_training_write_pane_g6

0x2d4b,	// (0x000681af) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00074ce3) hwr_training_write_pane_g

0xb5fe,	// (0x00070a62) hwr_training_navi_pane_g1_ParamLimits

0xb5fe,	// (0x00070a62) hwr_training_navi_pane_g1

0xb610,	// (0x00070a74) hwr_training_navi_pane_g2_ParamLimits

0xb610,	// (0x00070a74) hwr_training_navi_pane_g2

0xb622,	// (0x00070a86) hwr_training_navi_pane_g3_ParamLimits

0xb622,	// (0x00070a86) hwr_training_navi_pane_g3

0xb632,	// (0x00070a96) hwr_training_navi_pane_g4_ParamLimits

0xb632,	// (0x00070a96) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00074cf2) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00074cf2) hwr_training_navi_pane_g

0xb64c,	// (0x00070ab0) hwr_training_navi_pane_t1

0xb65a,	// (0x00070abe) list_single_hwr_training_instruct_pane_ParamLimits

0xb65a,	// (0x00070abe) list_single_hwr_training_instruct_pane

0x2d53,	// (0x000681b7) list_single_hwr_training_instruct_pane_t1

0x2470,	// (0x000678d4) bg_frame_shadow_pane_g1

0x2d62,	// (0x000681c6) bg_frame_shadow_pane_g2

0x2d6a,	// (0x000681ce) bg_frame_shadow_pane_g3

0x2d72,	// (0x000681d6) bg_frame_shadow_pane_g4

0x2d7a,	// (0x000681de) bg_frame_shadow_pane_g5

0x2d82,	// (0x000681e6) bg_frame_shadow_pane_g6

0x2d8a,	// (0x000681ee) bg_frame_shadow_pane_g7

0x008e,	// (0x000654f2) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00074cfd) bg_frame_shadow_pane_g

0x6dda,	// (0x0006c23e) main_video_tele_dialer_pane

0xb690,	// (0x00070af4) aid_size_cell_video_keypad_ParamLimits

0xb690,	// (0x00070af4) aid_size_cell_video_keypad

0xb6a0,	// (0x00070b04) grid_video_dialer_keypad_pane_ParamLimits

0xb6a0,	// (0x00070b04) grid_video_dialer_keypad_pane

0xb6d2,	// (0x00070b36) video_down_pane_cp_ParamLimits

0xb6d2,	// (0x00070b36) video_down_pane_cp

0xb6fa,	// (0x00070b5e) cell_video_dialer_keypad_pane_ParamLimits

0xb6fa,	// (0x00070b5e) cell_video_dialer_keypad_pane

0x2d92,	// (0x000681f6) bg_button_pane_cp08_ParamLimits

0x2d92,	// (0x000681f6) bg_button_pane_cp08

0xb70f,	// (0x00070b73) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb70f,	// (0x00070b73) cell_video_dialer_keypad_pane_g1

0xaedc,	// (0x00070340) mup3_rocker2_pane_ParamLimits

0xaedc,	// (0x00070340) mup3_rocker2_pane

0x2530,	// (0x00067994) mup3_rocker2_pane_g1

0x9e1a,	// (0x0006f27e) main_dialer2_pane

0x6dda,	// (0x0006c23e) main_mp4_pane

0xb74e,	// (0x00070bb2) main_mp4_pane_g1_ParamLimits

0xb74e,	// (0x00070bb2) main_mp4_pane_g1

0xb75c,	// (0x00070bc0) main_mp4_pane_g2_ParamLimits

0xb75c,	// (0x00070bc0) main_mp4_pane_g2

0xb76a,	// (0x00070bce) main_mp4_pane_g3_ParamLimits

0xb76a,	// (0x00070bce) main_mp4_pane_g3

0xb7af,	// (0x00070c13) main_mp4_pane_g4_ParamLimits

0xb7af,	// (0x00070c13) main_mp4_pane_g4

0xb7d7,	// (0x00070c3b) main_mp4_pane_g5_ParamLimits

0xb7d7,	// (0x00070c3b) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00074d1d) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00074d1d) main_mp4_pane_g

0xb827,	// (0x00070c8b) main_mp4_pane_t1_ParamLimits

0xb827,	// (0x00070c8b) main_mp4_pane_t1

0xb883,	// (0x00070ce7) main_mp4_pane_t2_ParamLimits

0xb883,	// (0x00070ce7) main_mp4_pane_t2

0x3d9b,	// (0x000691ff) main_mp4_pane_t3_ParamLimits

0x3d9b,	// (0x000691ff) main_mp4_pane_t3

0xb8d5,	// (0x00070d39) main_mp4_pane_t4_ParamLimits

0xb8d5,	// (0x00070d39) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00074d2a) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00074d2a) main_mp4_pane_t

0xb919,	// (0x00070d7d) mp4_progress_pane_ParamLimits

0xb919,	// (0x00070d7d) mp4_progress_pane

0xb963,	// (0x00070dc7) mp4_rocker_pane_ParamLimits

0xb963,	// (0x00070dc7) mp4_rocker_pane

0x3dc3,	// (0x00069227) mp4_progress_pane_t1

0x3ddc,	// (0x00069240) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00074d33) mp4_progress_pane_t

0x3df5,	// (0x00069259) mup_progress_pane_cp04

0x2530,	// (0x00067994) mp4_rocker_pane_g1

0xb983,	// (0x00070de7) aid_cell_size_keypad2_ParamLimits

0xb983,	// (0x00070de7) aid_cell_size_keypad2

0xb993,	// (0x00070df7) dialer2_ne_pane_ParamLimits

0xb993,	// (0x00070df7) dialer2_ne_pane

0xb9a1,	// (0x00070e05) grid_dialer2_keypad_pane_ParamLimits

0xb9a1,	// (0x00070e05) grid_dialer2_keypad_pane

0x3e9e,	// (0x00069302) bg_popup_call_pane_cp07_ParamLimits

0x3e9e,	// (0x00069302) bg_popup_call_pane_cp07

0xb9b1,	// (0x00070e15) dialer2_ne_pane_t1_ParamLimits

0xb9b1,	// (0x00070e15) dialer2_ne_pane_t1

0xb9d6,	// (0x00070e3a) cell_dialer2_keypad_pane_ParamLimits

0xb9d6,	// (0x00070e3a) cell_dialer2_keypad_pane

0x3e1d,	// (0x00069281) bg_button_pane_pane_cp04_ParamLimits

0x3e1d,	// (0x00069281) bg_button_pane_pane_cp04

0xb9ed,	// (0x00070e51) cell_dialer2_keypad_pane_g1_ParamLimits

0xb9ed,	// (0x00070e51) cell_dialer2_keypad_pane_g1

0x7ce4,	// (0x0006d148) aid_placing_vt_set_content_ParamLimits

0x7ce4,	// (0x0006d148) aid_placing_vt_set_content

0x7d10,	// (0x0006d174) aid_placing_vt_set_title_ParamLimits

0x7d10,	// (0x0006d174) aid_placing_vt_set_title

0x6dda,	// (0x0006c23e) main_image3_pane

0xba87,	// (0x00070eeb) area_side_right_pane_cp01_ParamLimits

0xba87,	// (0x00070eeb) area_side_right_pane_cp01

0xe8e5,	// (0x00073d49) main_image3_pane_g1_ParamLimits

0xe8e5,	// (0x00073d49) main_image3_pane_g1

0xbab4,	// (0x00070f18) main_image3_pane_g2_ParamLimits

0xbab4,	// (0x00070f18) main_image3_pane_g2

0xbacd,	// (0x00070f31) main_image3_pane_g3_ParamLimits

0xbacd,	// (0x00070f31) main_image3_pane_g3

0xbae6,	// (0x00070f4a) main_image3_pane_g4_ParamLimits

0xbae6,	// (0x00070f4a) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00074d42) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00074d42) main_image3_pane_g

0xbaff,	// (0x00070f63) main_image3_pane_t1_ParamLimits

0xbaff,	// (0x00070f63) main_image3_pane_t1

0xbb24,	// (0x00070f88) main_image3_pane_t2_ParamLimits

0xbb24,	// (0x00070f88) main_image3_pane_t2

0xbb43,	// (0x00070fa7) main_image3_pane_t3_ParamLimits

0xbb43,	// (0x00070fa7) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00074d4b) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00074d4b) main_image3_pane_t

0x706b,	// (0x0006c4cf) grid_sctrl_middle_pane_cp01_ParamLimits

0x706b,	// (0x0006c4cf) grid_sctrl_middle_pane_cp01

0xbba4,	// (0x00071008) cell_sctrl_middle_pane_cp01_ParamLimits

0xbba4,	// (0x00071008) cell_sctrl_middle_pane_cp01

0xbbb5,	// (0x00071019) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbbb5,	// (0x00071019) cell_sctrl_middle_pane_cp01_g1

0x6dda,	// (0x0006c23e) main_call4_pane

0xbbc2,	// (0x00071026) aid_size_button_call4_ParamLimits

0xbbc2,	// (0x00071026) aid_size_button_call4

0xbbf2,	// (0x00071056) call4_windows_pane_ParamLimits

0xbbf2,	// (0x00071056) call4_windows_pane

0xbc0c,	// (0x00071070) grid_call4_button_pane_ParamLimits

0xbc0c,	// (0x00071070) grid_call4_button_pane

0x3e29,	// (0x0006928d) call4_windows_conf_pane

0x3e3e,	// (0x000692a2) popup_call4_audio_first_window_ParamLimits

0x3e3e,	// (0x000692a2) popup_call4_audio_first_window

0x3e8a,	// (0x000692ee) popup_call4_audio_second_window_ParamLimits

0x3e8a,	// (0x000692ee) popup_call4_audio_second_window

0x3eac,	// (0x00069310) popup_call4_audio_wait_window_ParamLimits

0x3eac,	// (0x00069310) popup_call4_audio_wait_window

0xbc30,	// (0x00071094) cell_call4_button_pane_ParamLimits

0xbc30,	// (0x00071094) cell_call4_button_pane

0xbc55,	// (0x000710b9) bg_button_pane_cp09_ParamLimits

0xbc55,	// (0x000710b9) bg_button_pane_cp09

0xbc61,	// (0x000710c5) cell_call4_button_pane_g1_ParamLimits

0xbc61,	// (0x000710c5) cell_call4_button_pane_g1

0xbc6e,	// (0x000710d2) cell_call4_button_pane_t1_ParamLimits

0xbc6e,	// (0x000710d2) cell_call4_button_pane_t1

0x3ef4,	// (0x00069358) popup_call4_audio_conf_window_ParamLimits

0x3ef4,	// (0x00069358) popup_call4_audio_conf_window

0xaf0f,	// (0x00070373) mup3_progress_pane_t1_ParamLimits

0xaf26,	// (0x0007038a) mup3_progress_pane_t2_ParamLimits

0x2812,	// (0x00067c76) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00074c24) mup3_progress_pane_t_ParamLimits

0x2829,	// (0x00067c8d) mup_progress_pane_cp03_ParamLimits

0xb448,	// (0x000708ac) mup3_control_keys_pane_g4_copy1

0xb947,	// (0x00070dab) mp4_rocker2_pane_ParamLimits

0xb947,	// (0x00070dab) mp4_rocker2_pane

0x3f10,	// (0x00069374) mp4_rocker2_pane_g1

0x3f08,	// (0x0006936c) mp4_rocker2_pane_g2

0xbc80,	// (0x000710e4) mp4_rocker2_pane_g3

0xbc88,	// (0x000710ec) mp4_rocker2_pane_g4

0xbc90,	// (0x000710f4) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00074d54) mp4_rocker2_pane_g

0x6dda,	// (0x0006c23e) main_camera4_pane

0x6dda,	// (0x0006c23e) main_video4_pane

0xb6ae,	// (0x00070b12) main_video_tele_dialer_pane_t1_ParamLimits

0xb6ae,	// (0x00070b12) main_video_tele_dialer_pane_t1

0xb6c0,	// (0x00070b24) main_video_tele_dialer_pane_t2_ParamLimits

0xb6c0,	// (0x00070b24) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00074d0e) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00074d0e) main_video_tele_dialer_pane_t

0xbcb0,	// (0x00071114) cam4_autofocus_pane_ParamLimits

0xbcb0,	// (0x00071114) cam4_autofocus_pane

0xbcca,	// (0x0007112e) cam4_image_uncrop_pane_ParamLimits

0xbcca,	// (0x0007112e) cam4_image_uncrop_pane

0xbce1,	// (0x00071145) cam4_indicators_pane_ParamLimits

0xbce1,	// (0x00071145) cam4_indicators_pane

0xbcfd,	// (0x00071161) main_camera4_pane_g1_ParamLimits

0xbcfd,	// (0x00071161) main_camera4_pane_g1

0xbd09,	// (0x0007116d) main_camera4_pane_g2_ParamLimits

0xbd09,	// (0x0007116d) main_camera4_pane_g2

0xbd09,	// (0x0007116d) main_camera4_pane_g3_ParamLimits

0xbd09,	// (0x0007116d) main_camera4_pane_g3

0xbd15,	// (0x00071179) main_camera4_pane_g4_ParamLimits

0xbd15,	// (0x00071179) main_camera4_pane_g4

0xbd21,	// (0x00071185) main_camera4_pane_g5_ParamLimits

0xbd21,	// (0x00071185) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00074d5f) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00074d5f) main_camera4_pane_g

0xbd3b,	// (0x0007119f) main_camera4_pane_t1_ParamLimits

0xbd3b,	// (0x0007119f) main_camera4_pane_t1

0x2797,	// (0x00067bfb) bg_tb_trans_pane_cp06

0xbd8b,	// (0x000711ef) cam4_indicators_pane_g1

0xbd9c,	// (0x00071200) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00074d7a) cam4_indicators_pane_g

0xbdba,	// (0x0007121e) cam4_indicators_pane_t1

0xbde4,	// (0x00071248) main_video4_pane_g1_ParamLimits

0xbde4,	// (0x00071248) main_video4_pane_g1

0xbdf0,	// (0x00071254) main_video4_pane_g2_ParamLimits

0xbdf0,	// (0x00071254) main_video4_pane_g2

0xbdfc,	// (0x00071260) main_video4_pane_g3_ParamLimits

0xbdfc,	// (0x00071260) main_video4_pane_g3

0xbe08,	// (0x0007126c) main_video4_pane_g4_ParamLimits

0xbe08,	// (0x0007126c) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00074d81) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00074d81) main_video4_pane_g

0xbe28,	// (0x0007128c) vid4_indicators_pane_ParamLimits

0xbe28,	// (0x0007128c) vid4_indicators_pane

0xbe46,	// (0x000712aa) video4_image_uncrop_cif_pane_ParamLimits

0xbe46,	// (0x000712aa) video4_image_uncrop_cif_pane

0xbe55,	// (0x000712b9) video4_image_uncrop_nhd_pane_ParamLimits

0xbe55,	// (0x000712b9) video4_image_uncrop_nhd_pane

0xbcca,	// (0x0007112e) video4_image_uncrop_vga_pane_ParamLimits

0xbcca,	// (0x0007112e) video4_image_uncrop_vga_pane

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp07

0xbd8b,	// (0x000711ef) vid4_indicators_pane_g1

0xbe6a,	// (0x000712ce) vid4_indicators_pane_g2

0xbe7b,	// (0x000712df) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00074d8c) vid4_indicators_pane_g

0xbea8,	// (0x0007130c) vid4_indicators_pane_t1

0xbec1,	// (0x00071325) cam4_autofocus_pane_g1

0xbec9,	// (0x0007132d) cam4_autofocus_pane_g2

0xbed1,	// (0x00071335) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00074d97) cam4_autofocus_pane_g

0xbed9,	// (0x0007133d) cam4_autofocus_pane_g3_copy1

0xb6de,	// (0x00070b42) video_down_pane_cp_t1

0xb6ec,	// (0x00070b50) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00074d13) video_down_pane_cp_t

0x706b,	// (0x0006c4cf) popup_vitu2_window_ParamLimits

0x706b,	// (0x0006c4cf) popup_vitu2_window

0xbee1,	// (0x00071345) aid_size_cell2_itu2_ParamLimits

0xbee1,	// (0x00071345) aid_size_cell2_itu2

0xbf03,	// (0x00071367) aid_size_cell_itu2_ParamLimits

0xbf03,	// (0x00071367) aid_size_cell_itu2

0x3e9e,	// (0x00069302) bg_popup_window_pane_cp09_ParamLimits

0x3e9e,	// (0x00069302) bg_popup_window_pane_cp09

0xbf47,	// (0x000713ab) field_vitu2_entry_pane_ParamLimits

0xbf47,	// (0x000713ab) field_vitu2_entry_pane

0xbf67,	// (0x000713cb) grid_vitu2_function_pane_ParamLimits

0xbf67,	// (0x000713cb) grid_vitu2_function_pane

0xbfab,	// (0x0007140f) grid_vitu2_itu_pane_ParamLimits

0xbfab,	// (0x0007140f) grid_vitu2_itu_pane

0xc021,	// (0x00071485) cell_vitu2_itu_pane_ParamLimits

0xc021,	// (0x00071485) cell_vitu2_itu_pane

0xc036,	// (0x0007149a) cell_vitu2_function_pane_ParamLimits

0xc036,	// (0x0007149a) cell_vitu2_function_pane

0x3f18,	// (0x0006937c) bg_popup_call_pane_cp08_ParamLimits

0x3f18,	// (0x0006937c) bg_popup_call_pane_cp08

0x3f31,	// (0x00069395) field_vitu2_entry_pane_g1

0x3f3d,	// (0x000693a1) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00074d9e) field_vitu2_entry_pane_g

0x6002,	// (0x0006b466) field_vitu2_entry_pane_t1_ParamLimits

0x6002,	// (0x0006b466) field_vitu2_entry_pane_t1

0x6032,	// (0x0006b496) field_vitu2_entry_pane_t2_ParamLimits

0x6032,	// (0x0006b496) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00074da5) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00074da5) field_vitu2_entry_pane_t

0xc077,	// (0x000714db) bg_button_pane_cp010_ParamLimits

0xc077,	// (0x000714db) bg_button_pane_cp010

0xc085,	// (0x000714e9) cell_vitu2_itu_pane_g1

0xc0a3,	// (0x00071507) cell_vitu2_itu_pane_t1_ParamLimits

0xc0a3,	// (0x00071507) cell_vitu2_itu_pane_t1

0x604f,	// (0x0006b4b3) cell_vitu2_itu_pane_t2_ParamLimits

0x604f,	// (0x0006b4b3) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00074daf) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00074daf) cell_vitu2_itu_pane_t

0xe953,	// (0x00073db7) bg_button_pane_cp011

0xc0f5,	// (0x00071559) cell_vitu2_function_pane_g1

0x6dda,	// (0x0006c23e) main_myfav_hc_pane

0xbb85,	// (0x00070fe9) popup_image3_note_pane_ParamLimits

0xbb85,	// (0x00070fe9) popup_image3_note_pane

0xbb93,	// (0x00070ff7) popup_image3_tool_bar_pane_ParamLimits

0xbb93,	// (0x00070ff7) popup_image3_tool_bar_pane

0x60bd,	// (0x0006b521) cell_vitu2_itu_pane_t3_ParamLimits

0x60bd,	// (0x0006b521) cell_vitu2_itu_pane_t3

0x6dda,	// (0x0006c23e) bg_popup_trans_pane

0x3f5f,	// (0x000693c3) grid_image3_tool_bar_pane

0x3f69,	// (0x000693cd) bg_popup_trans_pane_g1

0x04ac,	// (0x00065910) bg_popup_trans_pane_g2

0x3f71,	// (0x000693d5) bg_popup_trans_pane_g3

0x3f79,	// (0x000693dd) bg_popup_trans_pane_g4

0x3f81,	// (0x000693e5) bg_popup_trans_pane_g5

0x3f89,	// (0x000693ed) bg_popup_trans_pane_g6

0x3f91,	// (0x000693f5) bg_popup_trans_pane_g7

0x3f99,	// (0x000693fd) bg_popup_trans_pane_g8

0x048c,	// (0x000658f0) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00074db6) bg_popup_trans_pane_g

0x3fa1,	// (0x00069405) cell_image3_tool_bar_pane_ParamLimits

0x3fa1,	// (0x00069405) cell_image3_tool_bar_pane

0x2530,	// (0x00067994) cell_image3_tool_bar_pane_g1

0x6dda,	// (0x0006c23e) bg_popup_trans_pane_cp1

0x3fb5,	// (0x00069419) popup_image3_note_pane_t1

0x3fc3,	// (0x00069427) popup_image3_note_pane_t2

0x3fd1,	// (0x00069435) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00074dc9) popup_image3_note_pane_t

0x3fdf,	// (0x00069443) popup_image3_note_pane_t3_copy1

0xc109,	// (0x0007156d) bg_myfav_hc_instruction_pane_ParamLimits

0xc109,	// (0x0007156d) bg_myfav_hc_instruction_pane

0xc121,	// (0x00071585) cell_myfav_contact_pane_ParamLimits

0xc121,	// (0x00071585) cell_myfav_contact_pane

0xc13b,	// (0x0007159f) cell_myfav_contact_pane_cp1_ParamLimits

0xc13b,	// (0x0007159f) cell_myfav_contact_pane_cp1

0xc153,	// (0x000715b7) cell_myfav_contact_pane_cp2_ParamLimits

0xc153,	// (0x000715b7) cell_myfav_contact_pane_cp2

0xc16b,	// (0x000715cf) cell_myfav_contact_pane_cp3_ParamLimits

0xc16b,	// (0x000715cf) cell_myfav_contact_pane_cp3

0xc182,	// (0x000715e6) cell_myfav_contact_pane_cp4_ParamLimits

0xc182,	// (0x000715e6) cell_myfav_contact_pane_cp4

0xc198,	// (0x000715fc) cell_myfav_contact_pane_cp5_ParamLimits

0xc198,	// (0x000715fc) cell_myfav_contact_pane_cp5

0xc1ac,	// (0x00071610) cell_myfav_contact_pane_cp6_ParamLimits

0xc1ac,	// (0x00071610) cell_myfav_contact_pane_cp6

0xc1c0,	// (0x00071624) cell_myfav_contact_pane_cp7_ParamLimits

0xc1c0,	// (0x00071624) cell_myfav_contact_pane_cp7

0x3fed,	// (0x00069451) listscroll_gen_pane_cp05

0xc1d8,	// (0x0007163c) main_myfav_hc_pane_g1_ParamLimits

0xc1d8,	// (0x0007163c) main_myfav_hc_pane_g1

0xc1f0,	// (0x00071654) main_myfav_hc_pane_g2_ParamLimits

0xc1f0,	// (0x00071654) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00074dd0) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00074dd0) main_myfav_hc_pane_g

0xc220,	// (0x00071684) main_myfav_hc_pane_t1_ParamLimits

0xc220,	// (0x00071684) main_myfav_hc_pane_t1

0x3ff6,	// (0x0006945a) main_myfav_hc_pane_t2_ParamLimits

0x3ff6,	// (0x0006945a) main_myfav_hc_pane_t2

0x4008,	// (0x0006946c) main_myfav_hc_pane_t3_ParamLimits

0x4008,	// (0x0006946c) main_myfav_hc_pane_t3

0xc237,	// (0x0007169b) main_myfav_hc_pane_t4_ParamLimits

0xc237,	// (0x0007169b) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00074dd7) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00074dd7) main_myfav_hc_pane_t

0x2530,	// (0x00067994) bg_myfav_hc_instruction_pane_g1

0x401a,	// (0x0006947e) cell_myfav_contact_pane_g1_ParamLimits

0x401a,	// (0x0006947e) cell_myfav_contact_pane_g1

0x401a,	// (0x0006947e) cell_myfav_contact_pane_g2_ParamLimits

0x401a,	// (0x0006947e) cell_myfav_contact_pane_g2

0x4026,	// (0x0006948a) cell_myfav_contact_pane_g3_ParamLimits

0x4026,	// (0x0006948a) cell_myfav_contact_pane_g3

0x27fc,	// (0x00067c60) cell_myfav_contact_pane_g4_ParamLimits

0x27fc,	// (0x00067c60) cell_myfav_contact_pane_g4

0x4033,	// (0x00069497) cell_myfav_contact_pane_g5_ParamLimits

0x4033,	// (0x00069497) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00074de2) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00074de2) cell_myfav_contact_pane_g

0xc208,	// (0x0007166c) main_myfav_hc_pane_g3_ParamLimits

0xc208,	// (0x0007166c) main_myfav_hc_pane_g3

0x6f88,	// (0x0006c3ec) popup_adpt_find_window

0xc261,	// (0x000716c5) afind_page_pane_ParamLimits

0xc261,	// (0x000716c5) afind_page_pane

0xc26e,	// (0x000716d2) aid_size_cell_afind_ParamLimits

0xc26e,	// (0x000716d2) aid_size_cell_afind

0xc288,	// (0x000716ec) bg_popup_sub_pane_cp09_ParamLimits

0xc288,	// (0x000716ec) bg_popup_sub_pane_cp09

0xc295,	// (0x000716f9) find_pane_cp01_ParamLimits

0xc295,	// (0x000716f9) find_pane_cp01

0x403f,	// (0x000694a3) grid_afind_control_pane_ParamLimits

0x403f,	// (0x000694a3) grid_afind_control_pane

0xc2a2,	// (0x00071706) grid_afind_pane_ParamLimits

0xc2a2,	// (0x00071706) grid_afind_pane

0xc2be,	// (0x00071722) cell_afind_pane_ParamLimits

0xc2be,	// (0x00071722) cell_afind_pane

0x2530,	// (0x00067994) afind_page_pane_g1

0xc306,	// (0x0007176a) afind_page_pane_g2

0xc30f,	// (0x00071773) afind_page_pane_g3

0x0002,

0xf989,	// (0x00074ded) afind_page_pane_g

0xc318,	// (0x0007177c) afind_page_pane_t1

0x4053,	// (0x000694b7) cell_afind_grid_control_pane_ParamLimits

0x4053,	// (0x000694b7) cell_afind_grid_control_pane

0x3e1d,	// (0x00069281) bg_button_pane_cp69_ParamLimits

0x3e1d,	// (0x00069281) bg_button_pane_cp69

0xc32f,	// (0x00071793) cell_afind_pane_g1_ParamLimits

0xc32f,	// (0x00071793) cell_afind_pane_g1

0xc33c,	// (0x000717a0) cell_afind_pane_t1_ParamLimits

0xc33c,	// (0x000717a0) cell_afind_pane_t1

0x02a7,	// (0x0006570b) bg_button_pane_cp72

0x4062,	// (0x000694c6) cell_afind_grid_control_pane_g1

0x9995,	// (0x0006edf9) aid_image_placing_area_ParamLimits

0x9995,	// (0x0006edf9) aid_image_placing_area

0x2ae4,	// (0x00067f48) field_vitu_entry_pane_g1_ParamLimits

0x2ae4,	// (0x00067f48) field_vitu_entry_pane_g1

0x2af0,	// (0x00067f54) field_vitu_entry_pane_g2_ParamLimits

0x2af0,	// (0x00067f54) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00074c9e) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00074c9e) field_vitu_entry_pane_g

0xb4d3,	// (0x00070937) cell_vitu_itu_pane_g1_ParamLimits

0xb515,	// (0x00070979) cell_vitu_itu_pane_t3_ParamLimits

0xb515,	// (0x00070979) cell_vitu_itu_pane_t3

0x3dc3,	// (0x00069227) mp4_progress_pane_t1_ParamLimits

0x3ddc,	// (0x00069240) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00074d33) mp4_progress_pane_t_ParamLimits

0x3df5,	// (0x00069259) mup_progress_pane_cp04_ParamLimits

0xc24b,	// (0x000716af) main_myfav_hc_pane_t5_ParamLimits

0xc24b,	// (0x000716af) main_myfav_hc_pane_t5

0x5cbc,	// (0x0006b120) aid_zoom_text_primary

0x6f88,	// (0x0006c3ec) popup_adpt_find_window_ParamLimits

0xe953,	// (0x00073db7) main_cam_set_pane

0xbcef,	// (0x00071153) cam4_zoom_pane_ParamLimits

0xbcef,	// (0x00071153) cam4_zoom_pane

0xc34e,	// (0x000717b2) main_cam_set_pane_g1_ParamLimits

0xc34e,	// (0x000717b2) main_cam_set_pane_g1

0xc35c,	// (0x000717c0) main_cam_set_pane_g2_ParamLimits

0xc35c,	// (0x000717c0) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00074df4) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00074df4) main_cam_set_pane_g

0xc368,	// (0x000717cc) main_cam_set_pane_t1_ParamLimits

0xc368,	// (0x000717cc) main_cam_set_pane_t1

0xc384,	// (0x000717e8) main_cset_listscroll_pane_ParamLimits

0xc384,	// (0x000717e8) main_cset_listscroll_pane

0xc3af,	// (0x00071813) main_cset_slider_pane_ParamLimits

0xc3af,	// (0x00071813) main_cset_slider_pane

0x4073,	// (0x000694d7) main_cset_list_pane_ParamLimits

0x4073,	// (0x000694d7) main_cset_list_pane

0x4083,	// (0x000694e7) scroll_pane_cp028

0xc3ce,	// (0x00071832) aid_area_touch_slider

0xc3ea,	// (0x0007184e) cset_slider_pane

0xc414,	// (0x00071878) main_cset_slider_pane_g1

0xc429,	// (0x0007188d) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00074df9) main_cset_slider_pane_g

0x40bc,	// (0x00069520) main_cset_slider_pane_t1

0xc4f1,	// (0x00071955) main_cset_slider_pane_t2

0xc50b,	// (0x0007196f) main_cset_slider_pane_t3

0xc525,	// (0x00071989) main_cset_slider_pane_t4

0xc543,	// (0x000719a7) main_cset_slider_pane_t5

0xc565,	// (0x000719c9) main_cset_slider_pane_t6

0xc57c,	// (0x000719e0) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00074e1e) main_cset_slider_pane_t

0xc68a,	// (0x00071aee) cset_list_set_pane_ParamLimits

0xc68a,	// (0x00071aee) cset_list_set_pane

0xc6a7,	// (0x00071b0b) aid_position_infowindow_above

0xc6af,	// (0x00071b13) aid_position_infowindow_below

0xc6b7,	// (0x00071b1b) cset_list_set_pane_g1_ParamLimits

0xc6b7,	// (0x00071b1b) cset_list_set_pane_g1

0x610a,	// (0x0006b56e) cset_list_set_pane_g3_ParamLimits

0x610a,	// (0x0006b56e) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00074e3d) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00074e3d) cset_list_set_pane_g

0x6119,	// (0x0006b57d) cset_list_set_pane_t1_ParamLimits

0x6119,	// (0x0006b57d) cset_list_set_pane_t1

0xe953,	// (0x00073db7) list_highlight_pane_cp021_ParamLimits

0xe953,	// (0x00073db7) list_highlight_pane_cp021

0x0d15,	// (0x00066179) cset_slider_pane_g1

0x0d27,	// (0x0006618b) cset_slider_pane_g2

0x0d1e,	// (0x00066182) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00074e42) cset_slider_pane_g

0xc6c3,	// (0x00071b27) aid_area_touch_cam4_zoom

0xc6cb,	// (0x00071b2f) cam4_zoom_cont_pane

0xc6d3,	// (0x00071b37) cam4_zoom_pane_g1

0xc6db,	// (0x00071b3f) cam4_zoom_pane_g2

0xc6e3,	// (0x00071b47) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00074e49) cam4_zoom_pane_g

0x48d0,	// (0x00069d34) cam4_zoom_cont_pane_g1

0x48d9,	// (0x00069d3d) cam4_zoom_cont_pane_g2

0x48e2,	// (0x00069d46) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00074e50) cam4_zoom_cont_pane_g

0xbbdc,	// (0x00071040) call4_image_pane_ParamLimits

0xbbdc,	// (0x00071040) call4_image_pane

0x3e29,	// (0x0006928d) call4_windows_conf_pane_ParamLimits

0x3e68,	// (0x000692cc) popup_call4_audio_in_window_ParamLimits

0x3e68,	// (0x000692cc) popup_call4_audio_in_window

0x6dda,	// (0x0006c23e) bg_popup_call2_act_pane_cp02

0x3eec,	// (0x00069350) call4_list_conf_pane

0x2530,	// (0x00067994) call4_image_pane_g1

0x2530,	// (0x00067994) call4_image_pane_g2

0x0001,

0xf700,	// (0x00074b64) call4_image_pane_g

0x415c,	// (0x000695c0) list_single_graphic_popup_conf4_pane_ParamLimits

0x415c,	// (0x000695c0) list_single_graphic_popup_conf4_pane

0x6dda,	// (0x0006c23e) list_highlight_pane_cp022

0x416f,	// (0x000695d3) list_single_graphic_popup_conf4_pane_g1

0x09e6,	// (0x00065e4a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00074e57) list_single_graphic_popup_conf4_pane_g

0x4177,	// (0x000695db) list_single_graphic_popup_conf4_pane_t1

0x7e74,	// (0x0006d2d8) popup_vtel_slider_window_ParamLimits

0x7e74,	// (0x0006d2d8) popup_vtel_slider_window

0x3e0b,	// (0x0006926f) dialer2_ne_pane_t2_ParamLimits

0x3e0b,	// (0x0006926f) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00074d38) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00074d38) dialer2_ne_pane_t

0xe953,	// (0x00073db7) bg_popup_sub_pane_cp010_ParamLimits

0xe953,	// (0x00073db7) bg_popup_sub_pane_cp010

0xc6eb,	// (0x00071b4f) popup_vtel_slider_window_g1_ParamLimits

0xc6eb,	// (0x00071b4f) popup_vtel_slider_window_g1

0xc6f7,	// (0x00071b5b) popup_vtel_slider_window_g2_ParamLimits

0xc6f7,	// (0x00071b5b) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00074e5c) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00074e5c) popup_vtel_slider_window_g

0xc73f,	// (0x00071ba3) vtel_slider_pane_ParamLimits

0xc73f,	// (0x00071ba3) vtel_slider_pane

0xc74e,	// (0x00071bb2) vtel_slider_pane_g1_ParamLimits

0xc74e,	// (0x00071bb2) vtel_slider_pane_g1

0xc75b,	// (0x00071bbf) vtel_slider_pane_g2_ParamLimits

0xc75b,	// (0x00071bbf) vtel_slider_pane_g2

0xc768,	// (0x00071bcc) vtel_slider_pane_g3_ParamLimits

0xc768,	// (0x00071bcc) vtel_slider_pane_g3

0xc74e,	// (0x00071bb2) vtel_slider_pane_g4_ParamLimits

0xc74e,	// (0x00071bb2) vtel_slider_pane_g4

0xc775,	// (0x00071bd9) vtel_slider_pane_g5_ParamLimits

0xc775,	// (0x00071bd9) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00074e65) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00074e65) vtel_slider_pane_g

0x6dda,	// (0x0006c23e) main_gallery2_pane

0xbf29,	// (0x0007138d) aid_size_row_itut2_dropdow_list_ParamLimits

0xbf29,	// (0x0007138d) aid_size_row_itut2_dropdow_list

0xbf89,	// (0x000713ed) grid_vitu2_function_top_pane_ParamLimits

0xbf89,	// (0x000713ed) grid_vitu2_function_top_pane

0xbfdf,	// (0x00071443) popup_vitu2_dropdown_list_window_ParamLimits

0xbfdf,	// (0x00071443) popup_vitu2_dropdown_list_window

0xbfff,	// (0x00071463) popup_vitu2_match_list_window

0xc782,	// (0x00071be6) cell_vitu2_function_top_pane_ParamLimits

0xc782,	// (0x00071be6) cell_vitu2_function_top_pane

0xc7a2,	// (0x00071c06) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc7a2,	// (0x00071c06) cell_vitu2_function_top_pane_cp01

0xc7c0,	// (0x00071c24) cell_vitu2_function_top_wide_pane_ParamLimits

0xc7c0,	// (0x00071c24) cell_vitu2_function_top_wide_pane

0xe953,	// (0x00073db7) bg_button_pane_cp012

0xc7de,	// (0x00071c42) cell_vitu2_function_top_pane_g1

0xc7ed,	// (0x00071c51) bg_button_pane_cp013_ParamLimits

0xc7ed,	// (0x00071c51) bg_button_pane_cp013

0xc809,	// (0x00071c6d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc809,	// (0x00071c6d) cell_vitu2_function_top_wide_pane_g1

0x706b,	// (0x0006c4cf) bg_popup_sub_pane_cp20

0xc821,	// (0x00071c85) list_vitu2_match_list_pane

0x3f69,	// (0x000693cd) bg_popup_sub_pane_cp20_g1

0x3f71,	// (0x000693d5) bg_popup_sub_pane_cp20_g2

0x04ac,	// (0x00065910) bg_popup_sub_pane_cp20_g3

0x3f79,	// (0x000693dd) bg_popup_sub_pane_cp20_g4

0x048c,	// (0x000658f0) bg_popup_sub_pane_cp20_g5

0x418d,	// (0x000695f1) bg_popup_sub_pane_cp20_g6

0x3f89,	// (0x000693ed) bg_popup_sub_pane_cp20_g7

0x3f91,	// (0x000693f5) bg_popup_sub_pane_cp20_g8

0x3f99,	// (0x000693fd) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00074e70) bg_popup_sub_pane_cp20_g

0xc839,	// (0x00071c9d) list_vitu2_match_list_item_pane_ParamLimits

0xc839,	// (0x00071c9d) list_vitu2_match_list_item_pane

0xc84b,	// (0x00071caf) list_vitu2_match_list_item_pane_t1

0x6dda,	// (0x0006c23e) bg_popup_sub_pane_cp21

0x087c,	// (0x00065ce0) grid_vitu2_dropdown_list_pane

0xc859,	// (0x00071cbd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc859,	// (0x00071cbd) cell_vitu2_dropdown_list_char_pane

0xc87a,	// (0x00071cde) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc87a,	// (0x00071cde) cell_vitu2_dropdown_list_ctrl_pane

0x41a7,	// (0x0006960b) cell_vitu2_dropdown_list_char_pane_g1

0x419e,	// (0x00069602) cell_vitu2_dropdown_list_char_pane_g2

0x4195,	// (0x000695f9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00074e8d) cell_vitu2_dropdown_list_char_pane_g

0xc8a6,	// (0x00071d0a) cell_vitu2_dropdown_list_char_pane_t1

0xc8b4,	// (0x00071d18) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc8b4,	// (0x00071d18) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc8c4,	// (0x00071d28) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc8c4,	// (0x00071d28) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc8d5,	// (0x00071d39) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc8d5,	// (0x00071d39) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc8e5,	// (0x00071d49) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc8e5,	// (0x00071d49) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2797,	// (0x00067bfb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2797,	// (0x00067bfb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00074e94) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00074e94) cell_vitu2_dropdown_list_ctrl_pane_g

0xc901,	// (0x00071d65) aid_size_cell_gallery2_ParamLimits

0xc901,	// (0x00071d65) aid_size_cell_gallery2

0xc90f,	// (0x00071d73) grid_gallery2_pane_ParamLimits

0xc90f,	// (0x00071d73) grid_gallery2_pane

0xc91e,	// (0x00071d82) scroll_pane_cp029_ParamLimits

0xc91e,	// (0x00071d82) scroll_pane_cp029

0xc92a,	// (0x00071d8e) cell_gallery2_pane_ParamLimits

0xc92a,	// (0x00071d8e) cell_gallery2_pane

0x41b0,	// (0x00069614) cell_gallery2_pane_g2

0xc95b,	// (0x00071dbf) cell_gallery2_pane_g3

0x41ba,	// (0x0006961e) cell_gallery2_pane_g4

0x41c2,	// (0x00069626) cell_gallery2_pane_g5

0x0bbf,	// (0x00066023) grid_highlight_pane_cp10

0xbfff,	// (0x00071463) popup_vitu2_match_list_window_ParamLimits

0xc011,	// (0x00071475) popup_vitu2_query_window_ParamLimits

0xc011,	// (0x00071475) popup_vitu2_query_window

0x6dda,	// (0x0006c23e) bg_vitu2_candi_button_pane

0x41a7,	// (0x0006960b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x419e,	// (0x00069602) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4195,	// (0x000695f9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6183,	// (0x0006b5e7) bg_button_pane_cp015

0xc963,	// (0x00071dc7) bg_button_pane_cp016

0xc976,	// (0x00071dda) bg_button_pane_cp017

0x2028,	// (0x0006748c) bg_popup_sub_pane_cp22

0x41ca,	// (0x0006962e) popup_vitu2_query_window_g1

0xc99a,	// (0x00071dfe) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00074e9f) popup_vitu2_query_window_g

0x61c2,	// (0x0006b626) popup_vitu2_query_window_t1_ParamLimits

0x61c2,	// (0x0006b626) popup_vitu2_query_window_t1

0x61f5,	// (0x0006b659) popup_vitu2_query_window_t2_ParamLimits

0x61f5,	// (0x0006b659) popup_vitu2_query_window_t2

0x6207,	// (0x0006b66b) popup_vitu2_query_window_t3_ParamLimits

0x6207,	// (0x0006b66b) popup_vitu2_query_window_t3

0xc9ab,	// (0x00071e0f) popup_vitu2_query_window_t4_ParamLimits

0xc9ab,	// (0x00071e0f) popup_vitu2_query_window_t4

0xc9cc,	// (0x00071e30) popup_vitu2_query_window_t5_ParamLimits

0xc9cc,	// (0x00071e30) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00074ea6) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00074ea6) popup_vitu2_query_window_t

0x406b,	// (0x000694cf) main_cset_text_pane

0xc3ce,	// (0x00071832) aid_area_touch_slider_ParamLimits

0xc3ea,	// (0x0007184e) cset_slider_pane_ParamLimits

0xc414,	// (0x00071878) main_cset_slider_pane_g1_ParamLimits

0xc429,	// (0x0007188d) main_cset_slider_pane_g2_ParamLimits

0x408c,	// (0x000694f0) main_cset_slider_pane_g3_ParamLimits

0x408c,	// (0x000694f0) main_cset_slider_pane_g3

0xc43e,	// (0x000718a2) main_cset_slider_pane_g4_ParamLimits

0xc43e,	// (0x000718a2) main_cset_slider_pane_g4

0xc44d,	// (0x000718b1) main_cset_slider_pane_g5_ParamLimits

0xc44d,	// (0x000718b1) main_cset_slider_pane_g5

0xc45b,	// (0x000718bf) main_cset_slider_pane_g6_ParamLimits

0xc45b,	// (0x000718bf) main_cset_slider_pane_g6

0xf995,	// (0x00074df9) main_cset_slider_pane_g_ParamLimits

0x40bc,	// (0x00069520) main_cset_slider_pane_t1_ParamLimits

0xc4f1,	// (0x00071955) main_cset_slider_pane_t2_ParamLimits

0xc50b,	// (0x0007196f) main_cset_slider_pane_t3_ParamLimits

0xc525,	// (0x00071989) main_cset_slider_pane_t4_ParamLimits

0xc543,	// (0x000719a7) main_cset_slider_pane_t5_ParamLimits

0xc565,	// (0x000719c9) main_cset_slider_pane_t6_ParamLimits

0xc57c,	// (0x000719e0) main_cset_slider_pane_t7_ParamLimits

0xc5aa,	// (0x00071a0e) main_cset_slider_pane_t8_ParamLimits

0xc5aa,	// (0x00071a0e) main_cset_slider_pane_t8

0xc5d2,	// (0x00071a36) main_cset_slider_pane_t9_ParamLimits

0xc5d2,	// (0x00071a36) main_cset_slider_pane_t9

0xc5fa,	// (0x00071a5e) main_cset_slider_pane_t10_ParamLimits

0xc5fa,	// (0x00071a5e) main_cset_slider_pane_t10

0xc622,	// (0x00071a86) main_cset_slider_pane_t11_ParamLimits

0xc622,	// (0x00071a86) main_cset_slider_pane_t11

0xc64c,	// (0x00071ab0) main_cset_slider_pane_t12_ParamLimits

0xc64c,	// (0x00071ab0) main_cset_slider_pane_t12

0xc66b,	// (0x00071acf) main_cset_slider_pane_t13_ParamLimits

0xc66b,	// (0x00071acf) main_cset_slider_pane_t13

0xf9ba,	// (0x00074e1e) main_cset_slider_pane_t_ParamLimits

0x6dda,	// (0x0006c23e) bg_popup_sub_pane_cp011

0x41d6,	// (0x0006963a) main_cset_text_pane_g1

0x41de,	// (0x00069642) main_cset_text_pane_t1

0x41ec,	// (0x00069650) main_cset_text_pane_t2

0x41fa,	// (0x0006965e) main_cset_text_pane_t3

0x4208,	// (0x0006966c) main_cset_text_pane_t4

0x4216,	// (0x0006967a) main_cset_text_pane_t5

0x4224,	// (0x00069688) main_cset_text_pane_t6

0x4232,	// (0x00069696) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00074eb5) main_cset_text_pane_t

0x6dda,	// (0x0006c23e) main_cam4_burst_pane

0x6dda,	// (0x0006c23e) main_cam5_pane

0x05b1,	// (0x00065a15) bg_button_pane_cp019

0xc326,	// (0x0007178a) bg_button_pane_cp020

0x4098,	// (0x000694fc) main_cset_slider_pane_g7_ParamLimits

0x4098,	// (0x000694fc) main_cset_slider_pane_g7

0x40a4,	// (0x00069508) main_cset_slider_pane_g8_ParamLimits

0x40a4,	// (0x00069508) main_cset_slider_pane_g8

0xc471,	// (0x000718d5) main_cset_slider_pane_g9_ParamLimits

0xc471,	// (0x000718d5) main_cset_slider_pane_g9

0xc47d,	// (0x000718e1) main_cset_slider_pane_g10_ParamLimits

0xc47d,	// (0x000718e1) main_cset_slider_pane_g10

0xc489,	// (0x000718ed) main_cset_slider_pane_g11_ParamLimits

0xc489,	// (0x000718ed) main_cset_slider_pane_g11

0xc495,	// (0x000718f9) main_cset_slider_pane_g12_ParamLimits

0xc495,	// (0x000718f9) main_cset_slider_pane_g12

0xc4a1,	// (0x00071905) main_cset_slider_pane_g13_ParamLimits

0xc4a1,	// (0x00071905) main_cset_slider_pane_g13

0xc4af,	// (0x00071913) main_cset_slider_pane_g14_ParamLimits

0xc4af,	// (0x00071913) main_cset_slider_pane_g14

0xc4bd,	// (0x00071921) main_cset_slider_pane_g15_ParamLimits

0xc4bd,	// (0x00071921) main_cset_slider_pane_g15

0x40ea,	// (0x0006954e) main_cset_slider_pane_t14_ParamLimits

0x40ea,	// (0x0006954e) main_cset_slider_pane_t14

0x4123,	// (0x00069587) main_cset_slider_pane_t15_ParamLimits

0x4123,	// (0x00069587) main_cset_slider_pane_t15

0xc9ed,	// (0x00071e51) aid_cam4_burst_size_cell_ParamLimits

0xc9ed,	// (0x00071e51) aid_cam4_burst_size_cell

0xca09,	// (0x00071e6d) grid_cam4_burst_pane_ParamLimits

0xca09,	// (0x00071e6d) grid_cam4_burst_pane

0xca39,	// (0x00071e9d) linegrid_cam4_burst_pane_ParamLimits

0xca39,	// (0x00071e9d) linegrid_cam4_burst_pane

0xca5b,	// (0x00071ebf) scroll_pane_cp30_ParamLimits

0xca5b,	// (0x00071ebf) scroll_pane_cp30

0xca67,	// (0x00071ecb) cell_cam4_burst_pane_ParamLimits

0xca67,	// (0x00071ecb) cell_cam4_burst_pane

0x4240,	// (0x000696a4) linegrid_cam4_burst_pane_g1_ParamLimits

0x4240,	// (0x000696a4) linegrid_cam4_burst_pane_g1

0xcaa3,	// (0x00071f07) linegrid_cam4_burst_pane_g2_ParamLimits

0xcaa3,	// (0x00071f07) linegrid_cam4_burst_pane_g2

0x424d,	// (0x000696b1) linegrid_cam4_burst_pane_g3_ParamLimits

0x424d,	// (0x000696b1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00074ec4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00074ec4) linegrid_cam4_burst_pane_g

0xcab4,	// (0x00071f18) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcab4,	// (0x00071f18) linegrid_cam4_burst_pane_g3_copy1

0x425a,	// (0x000696be) linegrid_cam4_burst_pane_g4_ParamLimits

0x425a,	// (0x000696be) linegrid_cam4_burst_pane_g4

0xcace,	// (0x00071f32) linegrid_cam4_burst_pane_g5_ParamLimits

0xcace,	// (0x00071f32) linegrid_cam4_burst_pane_g5

0xcadf,	// (0x00071f43) linegrid_cam4_burst_pane_g6_ParamLimits

0xcadf,	// (0x00071f43) linegrid_cam4_burst_pane_g6

0x4267,	// (0x000696cb) linegrid_cam4_burst_pane_g7_ParamLimits

0x4267,	// (0x000696cb) linegrid_cam4_burst_pane_g7

0xcaf0,	// (0x00071f54) cell_cam4_burst_pane_g1

0x4280,	// (0x000696e4) main_cam5_pane_t1_ParamLimits

0x4280,	// (0x000696e4) main_cam5_pane_t1

0x4292,	// (0x000696f6) main_cam5_pane_t2_ParamLimits

0x4292,	// (0x000696f6) main_cam5_pane_t2

0x42a4,	// (0x00069708) main_cam5_pane_t3_ParamLimits

0x42a4,	// (0x00069708) main_cam5_pane_t3

0x42b6,	// (0x0006971a) main_cam5_pane_t4_ParamLimits

0x42b6,	// (0x0006971a) main_cam5_pane_t4

0x42cc,	// (0x00069730) main_cam5_pane_t5_ParamLimits

0x42cc,	// (0x00069730) main_cam5_pane_t5

0x42de,	// (0x00069742) main_cam5_pane_t6_ParamLimits

0x42de,	// (0x00069742) main_cam5_pane_t6

0x42f2,	// (0x00069756) main_cam5_pane_t7_ParamLimits

0x42f2,	// (0x00069756) main_cam5_pane_t7

0x4304,	// (0x00069768) main_cam5_pane_t8_ParamLimits

0x4304,	// (0x00069768) main_cam5_pane_t8

0x4320,	// (0x00069784) main_cam5_pane_t9_ParamLimits

0x4320,	// (0x00069784) main_cam5_pane_t9

0x4332,	// (0x00069796) main_cam5_pane_t10_ParamLimits

0x4332,	// (0x00069796) main_cam5_pane_t10

0x4344,	// (0x000697a8) main_cam5_pane_t11_ParamLimits

0x4344,	// (0x000697a8) main_cam5_pane_t11

0x4356,	// (0x000697ba) main_cam5_pane_t12_ParamLimits

0x4356,	// (0x000697ba) main_cam5_pane_t12

0x436b,	// (0x000697cf) main_cam5_pane_t13_ParamLimits

0x436b,	// (0x000697cf) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00074ed0) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00074ed0) main_cam5_pane_t

0x7034,	// (0x0006c498) popup_scut_keymap_window_ParamLimits

0x7034,	// (0x0006c498) popup_scut_keymap_window

0xcb03,	// (0x00071f67) aid_size_cell_brow_shortcut

0x0bbf,	// (0x00066023) bg_popup_window_pane_cp010

0xcb0f,	// (0x00071f73) grid_scut_pane

0xcb1b,	// (0x00071f7f) cell_scut_pane_ParamLimits

0xcb1b,	// (0x00071f7f) cell_scut_pane

0xcb32,	// (0x00071f96) cell_scut_pane_g1

0x4388,	// (0x000697ec) cell_scut_pane_t1

0x4397,	// (0x000697fb) cell_scut_pane_t2

0xcb3b,	// (0x00071f9f) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00074eeb) cell_scut_pane_t

0xab53,	// (0x0006ffb7) main_mup3_pane_g8_ParamLimits

0xab53,	// (0x0006ffb7) main_mup3_pane_g8

0xbf37,	// (0x0007139b) area_vitu2_query_pane_ParamLimits

0xbf37,	// (0x0007139b) area_vitu2_query_pane

0x6195,	// (0x0006b5f9) input_focus_pane_cp08

0x43a6,	// (0x0006980a) area_vitu2_query_pane_g1

0x6285,	// (0x0006b6e9) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00074ef2) area_vitu2_query_pane_g

0xcb49,	// (0x00071fad) area_vitu2_query_pane_t1_ParamLimits

0xcb49,	// (0x00071fad) area_vitu2_query_pane_t1

0xcb5d,	// (0x00071fc1) area_vitu2_query_pane_t2_ParamLimits

0xcb5d,	// (0x00071fc1) area_vitu2_query_pane_t2

0x6296,	// (0x0006b6fa) area_vitu2_query_pane_t3_ParamLimits

0x6296,	// (0x0006b6fa) area_vitu2_query_pane_t3

0x62be,	// (0x0006b722) area_vitu2_query_pane_t4_ParamLimits

0x62be,	// (0x0006b722) area_vitu2_query_pane_t4

0x62e6,	// (0x0006b74a) area_vitu2_query_pane_t5_ParamLimits

0x62e6,	// (0x0006b74a) area_vitu2_query_pane_t5

0x630e,	// (0x0006b772) area_vitu2_query_pane_t6_ParamLimits

0x630e,	// (0x0006b772) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00074ef7) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00074ef7) area_vitu2_query_pane_t

0xcb71,	// (0x00071fd5) bg_button_pane_cp018

0xcb7f,	// (0x00071fe3) bg_button_pane_cp021

0x635a,	// (0x0006b7be) bg_button_pane_cp022

0x636b,	// (0x0006b7cf) input_focus_pane_cp09

0x9096,	// (0x0006e4fa) aid_size_touch_mv_arrow_left

0x90c1,	// (0x0006e525) aid_size_touch_mv_arrow_right

0xc4d5,	// (0x00071939) main_cset_slider_pane_g16_ParamLimits

0xc4d5,	// (0x00071939) main_cset_slider_pane_g16

0xc4e3,	// (0x00071947) main_cset_slider_pane_g17_ParamLimits

0xc4e3,	// (0x00071947) main_cset_slider_pane_g17

0xcaf0,	// (0x00071f54) cell_cam4_burst_pane_g1_ParamLimits

0x6dda,	// (0x0006c23e) compa_mode_pane

0xc703,	// (0x00071b67) popup_vtel_slider_window_g3_ParamLimits

0xc703,	// (0x00071b67) popup_vtel_slider_window_g3

0xc717,	// (0x00071b7b) popup_vtel_slider_window_g4_ParamLimits

0xc717,	// (0x00071b7b) popup_vtel_slider_window_g4

0xc72b,	// (0x00071b8f) popup_vtel_slider_window_t1_ParamLimits

0xc72b,	// (0x00071b8f) popup_vtel_slider_window_t1

0x6dda,	// (0x0006c23e) main_cl_pane

0x2050,	// (0x000674b4) popup_imed_adjust2_window_ParamLimits

0x2028,	// (0x0006748c) bg_tb_trans_pane_cp05_ParamLimits

0x2a19,	// (0x00067e7d) popup_imed_adjust2_window_g1_ParamLimits

0x2a28,	// (0x00067e8c) popup_imed_adjust2_window_g2_ParamLimits

0x2a28,	// (0x00067e8c) popup_imed_adjust2_window_g2

0x2a34,	// (0x00067e98) popup_imed_adjust2_window_g3_ParamLimits

0x2a34,	// (0x00067e98) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00074c62) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00074c62) popup_imed_adjust2_window_g

0x2a40,	// (0x00067ea4) popup_imed_adjust2_window_t1_ParamLimits

0x2a58,	// (0x00067ebc) slider_imed_adjust_pane_ParamLimits

0x2a6c,	// (0x00067ed0) slider_imed_adjust_pane_g1_ParamLimits

0x2a7c,	// (0x00067ee0) slider_imed_adjust_pane_g2_ParamLimits

0x2a8c,	// (0x00067ef0) slider_imed_adjust_pane_g3_ParamLimits

0x2a9d,	// (0x00067f01) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00074c69) slider_imed_adjust_pane_g_ParamLimits

0xbc98,	// (0x000710fc) aid_touch_area_cam4_ParamLimits

0xbc98,	// (0x000710fc) aid_touch_area_cam4

0xbca8,	// (0x0007110c) battery_pane_cp01

0xbd2f,	// (0x00071193) main_camera4_pane_g6_ParamLimits

0xbd2f,	// (0x00071193) main_camera4_pane_g6

0xbd4d,	// (0x000711b1) main_camera4_pane_t2_ParamLimits

0xbd4d,	// (0x000711b1) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00074d6c) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00074d6c) main_camera4_pane_t

0xbdd4,	// (0x00071238) aid_touch_area_vid4_ParamLimits

0xbdd4,	// (0x00071238) aid_touch_area_vid4

0xbe14,	// (0x00071278) main_video4_pane_g5_ParamLimits

0xbe14,	// (0x00071278) main_video4_pane_g5

0xbe36,	// (0x0007129a) vid4_progress_pane_ParamLimits

0xbe36,	// (0x0007129a) vid4_progress_pane

0x40b0,	// (0x00069514) main_cset_slider_pane_g18_ParamLimits

0x40b0,	// (0x00069514) main_cset_slider_pane_g18

0x4274,	// (0x000696d8) cell_cam4_burst_pane_g2_ParamLimits

0x4274,	// (0x000696d8) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00074ecb) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00074ecb) cell_cam4_burst_pane_g

0xcb8b,	// (0x00071fef) bg_cl_pane_ParamLimits

0xcb8b,	// (0x00071fef) bg_cl_pane

0xcb97,	// (0x00071ffb) cl_header_pane_ParamLimits

0xcb97,	// (0x00071ffb) cl_header_pane

0xcba3,	// (0x00072007) cl_listscroll_pane_ParamLimits

0xcba3,	// (0x00072007) cl_listscroll_pane

0x43b2,	// (0x00069816) bg_cl_pane_g1

0x43ba,	// (0x0006981e) bg_cl_pane_g2

0x43c2,	// (0x00069826) bg_cl_pane_g3

0x43ca,	// (0x0006982e) bg_cl_pane_g4

0x43d2,	// (0x00069836) bg_cl_pane_g5

0x43da,	// (0x0006983e) bg_cl_pane_g6

0x43e2,	// (0x00069846) bg_cl_pane_g7

0x43ea,	// (0x0006984e) bg_cl_pane_g8

0x43f2,	// (0x00069856) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00074f06) bg_cl_pane_g

0xcbaf,	// (0x00072013) aid_height_cl_leading_ParamLimits

0xcbaf,	// (0x00072013) aid_height_cl_leading

0xcbbb,	// (0x0007201f) aid_height_cl_text_ParamLimits

0xcbbb,	// (0x0007201f) aid_height_cl_text

0x706b,	// (0x0006c4cf) bg_cl_header_pane_ParamLimits

0x706b,	// (0x0006c4cf) bg_cl_header_pane

0xcbd3,	// (0x00072037) cl_header_pane_g1_ParamLimits

0xcbd3,	// (0x00072037) cl_header_pane_g1

0xcbe0,	// (0x00072044) cl_header_pane_t1_ParamLimits

0xcbe0,	// (0x00072044) cl_header_pane_t1

0x43fa,	// (0x0006985e) cl_list_pane

0x4083,	// (0x000694e7) hc_scroll_pane_cp01

0x048c,	// (0x000658f0) bg_cl_header_pane_g1

0x3f69,	// (0x000693cd) bg_cl_header_pane_g2

0x04ac,	// (0x00065910) bg_cl_header_pane_g3

0x3f79,	// (0x000693dd) bg_cl_header_pane_g4

0x3f71,	// (0x000693d5) bg_cl_header_pane_g5

0x418d,	// (0x000695f1) bg_cl_header_pane_g6

0x3f91,	// (0x000693f5) bg_cl_header_pane_g7

0x3f99,	// (0x000693fd) bg_cl_header_pane_g8

0x3f89,	// (0x000693ed) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00074f19) bg_cl_header_pane_g

0xcbf2,	// (0x00072056) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcbf2,	// (0x00072056) hc_cl_list_double_graphic_heading_pane

0xcc09,	// (0x0007206d) hc_cl_list_single_graphic_pane_ParamLimits

0xcc09,	// (0x0007206d) hc_cl_list_single_graphic_pane

0xcc29,	// (0x0007208d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcc29,	// (0x0007208d) hc_cl_list_single_graphic_pane_g1

0xcc35,	// (0x00072099) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcc35,	// (0x00072099) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00074f2c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00074f2c) hc_cl_list_single_graphic_pane_g

0xcc49,	// (0x000720ad) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcc49,	// (0x000720ad) hc_cl_list_single_graphic_pane_t1

0xcc29,	// (0x0007208d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcc29,	// (0x0007208d) hc_cl_list_double_graphic_heading_pane_g1

0xcc5e,	// (0x000720c2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcc5e,	// (0x000720c2) hc_cl_list_double_graphic_heading_pane_g2

0xcc72,	// (0x000720d6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcc72,	// (0x000720d6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00074f31) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00074f31) hc_cl_list_double_graphic_heading_pane_g

0xcc86,	// (0x000720ea) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcc86,	// (0x000720ea) hc_cl_list_double_graphic_heading_pane_t1

0xcc9b,	// (0x000720ff) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcc9b,	// (0x000720ff) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00074f38) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00074f38) hc_cl_list_double_graphic_heading_pane_t

0xccb8,	// (0x0007211c) vid4_progress_pane_g1

0xccc8,	// (0x0007212c) vid4_progress_pane_g2

0xccd8,	// (0x0007213c) vid4_progress_pane_g3

0xbd9c,	// (0x00071200) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00074f3d) vid4_progress_pane_g

0xcce4,	// (0x00072148) vid4_progress_pane_t1

0xccf9,	// (0x0007215d) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00074f48) vid4_progress_pane_t

0xcd24,	// (0x00072188) wait_bar_pane_cp07

0x2321,	// (0x00067785) blid_firmament_pane_ParamLimits

0x2364,	// (0x000677c8) popup_blid_sat_info2_window_g1

0x2388,	// (0x000677ec) popup_blid_sat_info2_window_t3

0x2396,	// (0x000677fa) popup_blid_sat_info2_window_t4

0x23a4,	// (0x00067808) popup_blid_sat_info2_window_t5

0x23b2,	// (0x00067816) popup_blid_sat_info2_window_t6

0x23c2,	// (0x00067826) popup_blid_sat_info2_window_t7

0x23d0,	// (0x00067834) popup_blid_sat_info2_window_t8

0x23de,	// (0x00067842) popup_blid_sat_info2_window_t9

0x23ec,	// (0x00067850) popup_blid_sat_info2_window_t10

0x24b0,	// (0x00067914) aid_firma_cardinal_ParamLimits

0x24c4,	// (0x00067928) blid_firmament_pane_t1_ParamLimits

0x24db,	// (0x0006793f) blid_firmament_pane_t2_ParamLimits

0x24f2,	// (0x00067956) blid_firmament_pane_t3_ParamLimits

0x2509,	// (0x0006796d) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00074b5b) blid_firmament_pane_t_ParamLimits

0x2520,	// (0x00067984) blid_sat_info_pane_ParamLimits

0xe953,	// (0x00073db7) main_cam_set_pane_ParamLimits

0xb2ed,	// (0x00070751) aid_size_cell_colour_35_ParamLimits

0xb307,	// (0x0007076b) aid_size_cell_colour_112_ParamLimits

0xb31e,	// (0x00070782) aid_size_cell_effect_ParamLimits

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp02_ParamLimits

0x0729,	// (0x00065b8d) heading_imed_pane_ParamLimits

0xb338,	// (0x0007079c) listscroll_imed_pane_ParamLimits

0x1652,	// (0x00066ab6) popup_call2_audio_first_window_g5_ParamLimits

0x1652,	// (0x00066ab6) popup_call2_audio_first_window_g5

0xba55,	// (0x00070eb9) aid_size_touch_image3_arrow_left_ParamLimits

0xba55,	// (0x00070eb9) aid_size_touch_image3_arrow_left

0xba6b,	// (0x00070ecf) aid_size_touch_image3_arrow_right_ParamLimits

0xba6b,	// (0x00070ecf) aid_size_touch_image3_arrow_right

0xcd0f,	// (0x00072173) vid4_progress_pane_t3

0xb5de,	// (0x00070a42) main_hwr_training_symbol_option_pane_ParamLimits

0xb5de,	// (0x00070a42) main_hwr_training_symbol_option_pane

0x2d06,	// (0x0006816a) popup_hwr_training_preview_window_ParamLimits

0x2d06,	// (0x0006816a) popup_hwr_training_preview_window

0xb63f,	// (0x00070aa3) hwr_training_navi_pane_g5_ParamLimits

0xb63f,	// (0x00070aa3) hwr_training_navi_pane_g5

0x3f57,	// (0x000693bb) popup_char_count_window

0x706b,	// (0x0006c4cf) bg_popup_sub_pane_cp20_ParamLimits

0xc821,	// (0x00071c85) list_vitu2_match_list_pane_ParamLimits

0xc82d,	// (0x00071c91) vitu2_page_scroll_pane_ParamLimits

0xc82d,	// (0x00071c91) vitu2_page_scroll_pane

0x4403,	// (0x00069867) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4403,	// (0x00069867) list_single_hwr_training_symbol_option_pane

0x4416,	// (0x0006987a) list_single_hwr_training_symbol_option_pane_g1

0x441e,	// (0x00069882) list_single_hwr_training_symbol_option_pane_t1

0x442c,	// (0x00069890) bg_button_pane_cp023

0x4435,	// (0x00069899) bg_button_pane_cp024

0xcd3c,	// (0x000721a0) vitu2_page_scroll_pane_g1

0xcd44,	// (0x000721a8) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00074f4f) vitu2_page_scroll_pane_g

0xcd4c,	// (0x000721b0) vitu2_page_scroll_pane_t1

0x223d,	// (0x000676a1) popup_char_count_window_g1

0x4468,	// (0x000698cc) popup_char_count_window_g2

0x4471,	// (0x000698d5) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00074f54) popup_char_count_window_g

0x447a,	// (0x000698de) popup_char_count_window_t1

0x6dda,	// (0x0006c23e) main_vded2_pane

0x2a05,	// (0x00067e69) aid_size_cell_imed_line

0x2a0f,	// (0x00067e73) grid_imed_line_width_pane

0xbe8c,	// (0x000712f0) vid4_indicators_pane_g4

0x4488,	// (0x000698ec) cell_imed_line_width_pane_ParamLimits

0x4488,	// (0x000698ec) cell_imed_line_width_pane

0x449c,	// (0x00069900) cell_imed_line_width_pane_g1

0x22cf,	// (0x00067733) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00074f5b) cell_imed_line_width_pane_g

0xcd5b,	// (0x000721bf) main_vded2_pane_g1_ParamLimits

0xcd5b,	// (0x000721bf) main_vded2_pane_g1

0xcd68,	// (0x000721cc) main_vded2_pane_g2_ParamLimits

0xcd68,	// (0x000721cc) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00074f60) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00074f60) main_vded2_pane_g

0xcd76,	// (0x000721da) vded2_slider_pane_ParamLimits

0xcd76,	// (0x000721da) vded2_slider_pane

0xcd83,	// (0x000721e7) aid_size_touch_vded2_end

0xcd8d,	// (0x000721f1) aid_size_touch_vded2_playhead

0x44a5,	// (0x00069909) aid_size_touch_vded2_start

0x44ad,	// (0x00069911) vded2_slider_bg_pane

0x44b6,	// (0x0006991a) vded2_slider_pane_g1

0x44bf,	// (0x00069923) vded2_slider_pane_g2

0xcd95,	// (0x000721f9) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00074f65) vded2_slider_pane_g

0x44c7,	// (0x0006992b) vded2_slider_bg_pane_g1

0x44d0,	// (0x00069934) vded2_slider_bg_pane_g2

0x44d9,	// (0x0006993d) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00074f6c) vded2_slider_bg_pane_g

0x96f2,	// (0x0006eb56) aid_postcard_touch_down_pane_ParamLimits

0x96f2,	// (0x0006eb56) aid_postcard_touch_down_pane

0x9702,	// (0x0006eb66) aid_postcard_touch_up_pane_ParamLimits

0x9702,	// (0x0006eb66) aid_postcard_touch_up_pane

0x6dda,	// (0x0006c23e) main_blid2_pane

0x2036,	// (0x0006749a) popup_blid2_search_window

0x6dda,	// (0x0006c23e) blid2_gps_pane

0x6dda,	// (0x0006c23e) blid2_navig_pane

0x6dda,	// (0x0006c23e) blid2_search_pane

0x6dda,	// (0x0006c23e) blid2_tripm_pane

0xcd9e,	// (0x00072202) blid2_search_pane_g1_ParamLimits

0xcd9e,	// (0x00072202) blid2_search_pane_g1

0xcdae,	// (0x00072212) blid2_search_pane_t1_ParamLimits

0xcdae,	// (0x00072212) blid2_search_pane_t1

0xcdc0,	// (0x00072224) aid_size_cell_blid2_gps_ParamLimits

0xcdc0,	// (0x00072224) aid_size_cell_blid2_gps

0xcdd0,	// (0x00072234) blid2_gps_pane_g1_ParamLimits

0xcdd0,	// (0x00072234) blid2_gps_pane_g1

0xcddc,	// (0x00072240) grid_blid2_satellite_pane_ParamLimits

0xcddc,	// (0x00072240) grid_blid2_satellite_pane

0xcdec,	// (0x00072250) blid2_navig_pane_g1_ParamLimits

0xcdec,	// (0x00072250) blid2_navig_pane_g1

0xcdf8,	// (0x0007225c) blid2_navig_pane_t1_ParamLimits

0xcdf8,	// (0x0007225c) blid2_navig_pane_t1

0xce0a,	// (0x0007226e) blid2_navig_pane_t2_ParamLimits

0xce0a,	// (0x0007226e) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00074f73) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00074f73) blid2_navig_pane_t

0xce1c,	// (0x00072280) blid2_navig_ring_pane_ParamLimits

0xce1c,	// (0x00072280) blid2_navig_ring_pane

0xce2c,	// (0x00072290) blid2_speed_pane_ParamLimits

0xce2c,	// (0x00072290) blid2_speed_pane

0xce38,	// (0x0007229c) blid2_tripm_pane_g1_ParamLimits

0xce38,	// (0x0007229c) blid2_tripm_pane_g1

0xce48,	// (0x000722ac) blid2_tripm_pane_g2_ParamLimits

0xce48,	// (0x000722ac) blid2_tripm_pane_g2

0xce54,	// (0x000722b8) blid2_tripm_pane_g3_ParamLimits

0xce54,	// (0x000722b8) blid2_tripm_pane_g3

0xce60,	// (0x000722c4) blid2_tripm_pane_g4_ParamLimits

0xce60,	// (0x000722c4) blid2_tripm_pane_g4

0xce6c,	// (0x000722d0) blid2_tripm_pane_g5_ParamLimits

0xce6c,	// (0x000722d0) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00074f78) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00074f78) blid2_tripm_pane_g

0xce88,	// (0x000722ec) blid2_tripm_pane_t1_ParamLimits

0xce88,	// (0x000722ec) blid2_tripm_pane_t1

0xce9c,	// (0x00072300) blid2_tripm_pane_t2_ParamLimits

0xce9c,	// (0x00072300) blid2_tripm_pane_t2

0xceb0,	// (0x00072314) blid2_tripm_pane_t3_ParamLimits

0xceb0,	// (0x00072314) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00074f85) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00074f85) blid2_tripm_pane_t

0xcee2,	// (0x00072346) cell_blid2_satellite_pane_ParamLimits

0xcee2,	// (0x00072346) cell_blid2_satellite_pane

0xcefc,	// (0x00072360) cell_blid2_satellite_pane_g1

0x44e2,	// (0x00069946) cell_blid2_satellite_pane_t1

0x2530,	// (0x00067994) blid2_speed_pane_g1

0x44f0,	// (0x00069954) blid2_speed_pane_t1

0x44fe,	// (0x00069962) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00074f8e) blid2_speed_pane_t

0x2530,	// (0x00067994) blid2_navig_ring_pane_g1

0xcf05,	// (0x00072369) blid2_navig_ring_pane_g2

0xcf0d,	// (0x00072371) blid2_navig_ring_pane_g3

0xcf15,	// (0x00072379) blid2_navig_ring_pane_g4

0xcf1d,	// (0x00072381) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00074f93) blid2_navig_ring_pane_g

0x6dda,	// (0x0006c23e) bg_popup_window_pane_cp011

0x450c,	// (0x00069970) popup_blid2_search_window_g1

0x4514,	// (0x00069978) popup_blid2_search_window_t1

0x4522,	// (0x00069986) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00074f9e) popup_blid2_search_window_t

0x039b,	// (0x000657ff) main_browser_pane_g1

0xf097,	// (0x000744fb) main_browser_pane_ParamLimits

0xe953,	// (0x00073db7) bg_button_pane_cp011_ParamLimits

0xc0f5,	// (0x00071559) cell_vitu2_function_pane_g1_ParamLimits

0x2028,	// (0x0006748c) bg_popup_sub_pane_cp22_ParamLimits

0x6195,	// (0x0006b5f9) input_focus_pane_cp08_ParamLimits

0xc989,	// (0x00071ded) popup_vitu2_query_button_pane_ParamLimits

0xc989,	// (0x00071ded) popup_vitu2_query_button_pane

0x61ac,	// (0x0006b610) popup_vitu2_query_input_button_pane

0x41ca,	// (0x0006962e) popup_vitu2_query_window_g1_ParamLimits

0xc99a,	// (0x00071dfe) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00074e9f) popup_vitu2_query_window_g_ParamLimits

0x6dda,	// (0x0006c23e) bg_button_pane_cp026

0xcf25,	// (0x00072389) popup_vitu2_query_input_button_pane_g1

0x6dda,	// (0x0006c23e) bg_button_pane_cp025

0x4530,	// (0x00069994) popup_vitu2_query_button_pane_t1

0xa854,	// (0x0006fcb8) main_mp3_pane_t6

0xa864,	// (0x0006fcc8) popup_slider_window_cp01

0xbd83,	// (0x000711e7) cam4_battery_pane

0xbe62,	// (0x000712c6) cam4_battery_pane_cp02

0xccb0,	// (0x00072114) cam4_battery_pane_cp01

0xccb0,	// (0x00072114) cam4_battery_pane_cp03

0x2530,	// (0x00067994) cam4_battery_pane_g1

0x3e01,	// (0x00069265) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00074fa3) cam4_battery_pane_g

0x23fa,	// (0x0006785e) popup_blid_sat_info2_window_t11

0x9096,	// (0x0006e4fa) aid_size_touch_mv_arrow_left_ParamLimits

0x90c1,	// (0x0006e525) aid_size_touch_mv_arrow_right_ParamLimits

0x0b1f,	// (0x00065f83) navi_pane_g1_ParamLimits

0x90ea,	// (0x0006e54e) navi_pane_g2_ParamLimits

0x9118,	// (0x0006e57c) navi_pane_g3_ParamLimits

0xf409,	// (0x0007486d) navi_pane_g_ParamLimits

0x9172,	// (0x0006e5d6) navi_pane_mv_t1_ParamLimits

0xb344,	// (0x000707a8) grid_imed_effect_pane_ParamLimits

0x7d34,	// (0x0006d198) aid_placing_vt_slider_lsc

0x02ec,	// (0x00065750) aid_placing_vt_slider_prt

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp01_ParamLimits

0x26b7,	// (0x00067b1b) popup_image_details_window_g1_ParamLimits

0x26ca,	// (0x00067b2e) popup_image_details_window_g2_ParamLimits

0x26df,	// (0x00067b43) popup_image_details_window_g3_ParamLimits

0x26df,	// (0x00067b43) popup_image_details_window_g3

0xf73c,	// (0x00074ba0) popup_image_details_window_g_ParamLimits

0x26f3,	// (0x00067b57) popup_image_details_window_t1_ParamLimits

0x2705,	// (0x00067b69) popup_image_details_window_t2_ParamLimits

0x271e,	// (0x00067b82) popup_image_details_window_t3_ParamLimits

0x2732,	// (0x00067b96) popup_image_details_window_t4_ParamLimits

0x274d,	// (0x00067bb1) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00074ba7) popup_image_details_window_t_ParamLimits

0xcbc7,	// (0x0007202b) cl_header_name_pane_ParamLimits

0xcbc7,	// (0x0007202b) cl_header_name_pane

0xcf2d,	// (0x00072391) cl_header_name_pane_t1_ParamLimits

0xcf2d,	// (0x00072391) cl_header_name_pane_t1

0xcf44,	// (0x000723a8) cl_header_name_pane_t2_ParamLimits

0xcf44,	// (0x000723a8) cl_header_name_pane_t2

0xcf6e,	// (0x000723d2) cl_header_name_pane_t3_ParamLimits

0xcf6e,	// (0x000723d2) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00074fa8) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00074fa8) cl_header_name_pane_t

0x9143,	// (0x0006e5a7) navi_pane_mv_g2_ParamLimits

0x3f31,	// (0x00069395) field_vitu2_entry_pane_g1_ParamLimits

0x3f3d,	// (0x000693a1) field_vitu2_entry_pane_g2_ParamLimits

0x3f49,	// (0x000693ad) field_vitu2_entry_pane_g3_ParamLimits

0x3f49,	// (0x000693ad) field_vitu2_entry_pane_g3

0xf93a,	// (0x00074d9e) field_vitu2_entry_pane_g_ParamLimits

0xc085,	// (0x000714e9) cell_vitu2_itu_pane_g1_ParamLimits

0xc095,	// (0x000714f9) cell_vitu2_itu_pane_g2_ParamLimits

0xc095,	// (0x000714f9) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00074daa) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00074daa) cell_vitu2_itu_pane_g

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp05_ParamLimits

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp05

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp03

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp04

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp10_ParamLimits

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp10

0x635a,	// (0x0006b7be) bg_vkb2_func_pane_cp08

0xcb71,	// (0x00071fd5) bg_vkb2_func_pane_cp06

0xcb7f,	// (0x00071fe3) bg_vkb2_func_pane_cp07

0x443e,	// (0x000698a2) bg_vkb2_func_pane_cp11_ParamLimits

0x443e,	// (0x000698a2) bg_vkb2_func_pane_cp11

0x4453,	// (0x000698b7) bg_vkb2_func_pane_cp12_ParamLimits

0x4453,	// (0x000698b7) bg_vkb2_func_pane_cp12

0x6dda,	// (0x0006c23e) bg_vkb2_func_pane_cp09

0x3f69,	// (0x000693cd) bg_vkb2_func_pane_g1

0x04ac,	// (0x00065910) bg_vkb2_func_pane_g2

0x3f71,	// (0x000693d5) bg_vkb2_func_pane_g3

0x3f79,	// (0x000693dd) bg_vkb2_func_pane_g4

0x418d,	// (0x000695f1) bg_vkb2_func_pane_g5

0x3f91,	// (0x000693f5) bg_vkb2_func_pane_g6

0x3f99,	// (0x000693fd) bg_vkb2_func_pane_g7

0x3f89,	// (0x000693ed) bg_vkb2_func_pane_g8

0x048c,	// (0x000658f0) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00074faf) bg_vkb2_func_pane_g

0xce7a,	// (0x000722de) blid2_tripm_pane_g6_ParamLimits

0xce7a,	// (0x000722de) blid2_tripm_pane_g6

0x3dbb,	// (0x0006921f) mp4_progress_pane_g1

0xced6,	// (0x0007233a) blid2_tripm_values_pane_ParamLimits

0xced6,	// (0x0007233a) blid2_tripm_values_pane

0xcf93,	// (0x000723f7) blid2_tripm_values_pane_t1

0xcfa1,	// (0x00072405) blid2_tripm_values_pane_t2

0xcfaf,	// (0x00072413) blid2_tripm_values_pane_t3

0xcfbd,	// (0x00072421) blid2_tripm_values_pane_t4

0xcfcb,	// (0x0007242f) blid2_tripm_values_pane_t5

0xcfd9,	// (0x0007243d) blid2_tripm_values_pane_t6

0xcfe7,	// (0x0007244b) blid2_tripm_values_pane_t7

0xcff5,	// (0x00072459) blid2_tripm_values_pane_t8

0xd003,	// (0x00072467) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00074fc2) blid2_tripm_values_pane_t

0x7d74,	// (0x0006d1d8) call_video_pane_t1_ParamLimits

0x7d95,	// (0x0006d1f9) call_video_pane_t2_ParamLimits

0xf292,	// (0x000746f6) call_video_pane_t_ParamLimits

0x5f4d,	// (0x0006b3b1) msg_header_pane_g1_ParamLimits

0x0d5a,	// (0x000661be) msg_header_pane_g2_ParamLimits

0x0d5a,	// (0x000661be) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00074910) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00074910) msg_header_pane_g

0xf097,	// (0x000744fb) main_clock2_pane_ParamLimits

0xb0c9,	// (0x0007052d) grid_clock2_toolbar_pane_ParamLimits

0xb0c9,	// (0x0007052d) grid_clock2_toolbar_pane

0xb0c9,	// (0x0007052d) listscroll_clock2_pane_ParamLimits

0xb0c9,	// (0x0007052d) listscroll_clock2_pane

0xb177,	// (0x000705db) main_clock2_pane_t3_ParamLimits

0xb177,	// (0x000705db) main_clock2_pane_t3

0xb189,	// (0x000705ed) main_clock2_pane_t4_ParamLimits

0xb189,	// (0x000705ed) main_clock2_pane_t4

0x453e,	// (0x000699a2) cell_clock2_toolbar_pane

0x4546,	// (0x000699aa) cell_clock2_toolbar_pane_cp01

0x4546,	// (0x000699aa) cell_clock2_toolbar_pane_cp02

0x454e,	// (0x000699b2) cell_clock2_toolbar_pane_cp03

0x4556,	// (0x000699ba) list_clock2_pane

0x0a72,	// (0x00065ed6) scroll_pane_cp10

0x455e,	// (0x000699c2) list_single_clock2_pane_ParamLimits

0x455e,	// (0x000699c2) list_single_clock2_pane

0x0bbf,	// (0x00066023) list_highlight_pane_cp08

0x456b,	// (0x000699cf) list_single_clock2_pane_t1

0x4579,	// (0x000699dd) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00074fd5) list_single_clock2_pane_t

0x6dda,	// (0x0006c23e) bg_button_pane_cp10

0x4587,	// (0x000699eb) cell_clock2_toolbar_pane_g1

0x9654,	// (0x0006eab8) aid_main_viewer_pane_g1_ParamLimits

0x9654,	// (0x0006eab8) aid_main_viewer_pane_g1

0x9660,	// (0x0006eac4) aid_main_viewer_pane_g2_ParamLimits

0x9660,	// (0x0006eac4) aid_main_viewer_pane_g2

0x966c,	// (0x0006ead0) aid_main_viewer_pane_g3_ParamLimits

0x966c,	// (0x0006ead0) aid_main_viewer_pane_g3

0x967d,	// (0x0006eae1) aid_main_viewer_pane_g4_ParamLimits

0x967d,	// (0x0006eae1) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00074921) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00074921) aid_main_viewer_pane_g

0x9e0d,	// (0x0006f271) main_calc_pane_ParamLimits

0x9e1a,	// (0x0006f27e) main_dialer2_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_cam6_pane

0x6dda,	// (0x0006c23e) main_vid6_pane

0xb0d5,	// (0x00070539) listscroll_gen_pane_cp06_ParamLimits

0xb0d5,	// (0x00070539) listscroll_gen_pane_cp06

0xb19b,	// (0x000705ff) main_clock2_pane_t5_ParamLimits

0xb19b,	// (0x000705ff) main_clock2_pane_t5

0xb1ea,	// (0x0007064e) aid_call2_pane_cp10_ParamLimits

0xb1fc,	// (0x00070660) aid_call_pane_cp10_ParamLimits

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb20e,	// (0x00070672) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb20e,	// (0x00070672) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0af4,	// (0x00065f58) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00074c57) popup_clock_analogue_window_cp10_g_ParamLimits

0xb224,	// (0x00070688) popup_clock_analogue_window_cp10_t1_ParamLimits

0xba02,	// (0x00070e66) cell_dialer2_keypad_pane_g2_ParamLimits

0xba02,	// (0x00070e66) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00074d3d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00074d3d) cell_dialer2_keypad_pane_g

0xba1e,	// (0x00070e82) cell_dialer2_keypad_pane_t1

0xc3bb,	// (0x0007181f) main_cset_text2_pane_ParamLimits

0xc3bb,	// (0x0007181f) main_cset_text2_pane

0x43a6,	// (0x0006980a) area_vitu2_query_pane_g1_ParamLimits

0x6285,	// (0x0006b6e9) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00074ef2) area_vitu2_query_pane_g_ParamLimits

0x6336,	// (0x0006b79a) area_vitu2_query_pane_t7_ParamLimits

0x6336,	// (0x0006b79a) area_vitu2_query_pane_t7

0xcb71,	// (0x00071fd5) bg_button_pane_cp018_ParamLimits

0xcb7f,	// (0x00071fe3) bg_button_pane_cp021_ParamLimits

0x635a,	// (0x0006b7be) bg_button_pane_cp022_ParamLimits

0x635a,	// (0x0006b7be) bg_vkb2_func_pane_cp08_ParamLimits

0xcb71,	// (0x00071fd5) bg_vkb2_func_pane_cp06_ParamLimits

0xcb7f,	// (0x00071fe3) bg_vkb2_func_pane_cp07_ParamLimits

0x636b,	// (0x0006b7cf) input_focus_pane_cp09_ParamLimits

0xd011,	// (0x00072475) cam6_autofocus_pane_ParamLimits

0xd011,	// (0x00072475) cam6_autofocus_pane

0xd033,	// (0x00072497) cam6_image_uncrop_pane_ParamLimits

0xd033,	// (0x00072497) cam6_image_uncrop_pane

0xd060,	// (0x000724c4) cam6_indi_pane_ParamLimits

0xd060,	// (0x000724c4) cam6_indi_pane

0xd07a,	// (0x000724de) cam6_mode_pane_ParamLimits

0xd07a,	// (0x000724de) cam6_mode_pane

0xd08e,	// (0x000724f2) cam6_timer_pane_ParamLimits

0xd08e,	// (0x000724f2) cam6_timer_pane

0xd09a,	// (0x000724fe) cam6_zoom_pane_ParamLimits

0xd09a,	// (0x000724fe) cam6_zoom_pane

0xbde4,	// (0x00071248) cam6_mode_pane_g1_ParamLimits

0xbde4,	// (0x00071248) cam6_mode_pane_g1

0xbdfc,	// (0x00071260) cam6_mode_pane_g2_ParamLimits

0xbdfc,	// (0x00071260) cam6_mode_pane_g2

0xbe08,	// (0x0007126c) cam6_mode_pane_g3_ParamLimits

0xbe08,	// (0x0007126c) cam6_mode_pane_g3

0xbe14,	// (0x00071278) cam6_mode_pane_g4_ParamLimits

0xbe14,	// (0x00071278) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00074fda) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00074fda) cam6_mode_pane_g

0x3e9e,	// (0x00069302) bg_tb_trans_pane_cp08_ParamLimits

0x3e9e,	// (0x00069302) bg_tb_trans_pane_cp08

0x458f,	// (0x000699f3) cam6_battery_pane_ParamLimits

0x458f,	// (0x000699f3) cam6_battery_pane

0x45a5,	// (0x00069a09) cam6_indi_pane_g1_ParamLimits

0x45a5,	// (0x00069a09) cam6_indi_pane_g1

0x45b7,	// (0x00069a1b) cam6_indi_pane_g2_ParamLimits

0x45b7,	// (0x00069a1b) cam6_indi_pane_g2

0x45c9,	// (0x00069a2d) cam6_indi_pane_g3_ParamLimits

0x45c9,	// (0x00069a2d) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00074fe3) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00074fe3) cam6_indi_pane_g

0x45db,	// (0x00069a3f) cam6_indi_pane_t1_ParamLimits

0x45db,	// (0x00069a3f) cam6_indi_pane_t1

0xbec1,	// (0x00071325) cam6_autofocus_pane_g1

0xbec9,	// (0x0007132d) cam6_autofocus_pane_g2

0xbed1,	// (0x00071335) cam6_autofocus_pane_g3

0xbed9,	// (0x0007133d) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00074fea) cam6_autofocus_pane_g

0x4601,	// (0x00069a65) cam6_timer_pane_g1

0x4609,	// (0x00069a6d) cam6_timer_pane_t1

0x4617,	// (0x00069a7b) cam6_zoom_cont_pane

0x461f,	// (0x00069a83) cam6_zoom_pane_g1

0x4627,	// (0x00069a8b) cam6_zoom_pane_g2

0xd0b2,	// (0x00072516) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00074ff3) cam6_zoom_pane_g

0x2530,	// (0x00067994) cam6_battery_pane_g1

0x2530,	// (0x00067994) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00074b64) cam6_battery_pane_g

0x462f,	// (0x00069a93) cam6_zoom_cont_pane_g1

0x4638,	// (0x00069a9c) cam6_zoom_cont_pane_g2

0x4641,	// (0x00069aa5) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00074ffa) cam6_zoom_cont_pane_g

0xd0cc,	// (0x00072530) cam6_mode_pane_cp_ParamLimits

0xd0cc,	// (0x00072530) cam6_mode_pane_cp

0xd09a,	// (0x000724fe) cam6_zoom_pane_cp_ParamLimits

0xd09a,	// (0x000724fe) cam6_zoom_pane_cp

0xd0e0,	// (0x00072544) vid6_image_uncrop_cif_pane_ParamLimits

0xd0e0,	// (0x00072544) vid6_image_uncrop_cif_pane

0xd10c,	// (0x00072570) vid6_image_uncrop_nhd_pane_ParamLimits

0xd10c,	// (0x00072570) vid6_image_uncrop_nhd_pane

0xd033,	// (0x00072497) vid6_image_uncrop_vga_pane_ParamLimits

0xd033,	// (0x00072497) vid6_image_uncrop_vga_pane

0xd129,	// (0x0007258d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd129,	// (0x0007258d) vid6_image_uncrop_wvga_pane

0xd146,	// (0x000725aa) vid6_indi_pane_ParamLimits

0xd146,	// (0x000725aa) vid6_indi_pane

0x3e9e,	// (0x00069302) bg_tb_trans_pane_cp09_ParamLimits

0x3e9e,	// (0x00069302) bg_tb_trans_pane_cp09

0x4659,	// (0x00069abd) cam6_battery_pane_cp_ParamLimits

0x4659,	// (0x00069abd) cam6_battery_pane_cp

0x4665,	// (0x00069ac9) vid6_indi_pane_g1_ParamLimits

0x4665,	// (0x00069ac9) vid6_indi_pane_g1

0x4677,	// (0x00069adb) vid6_indi_pane_g2_ParamLimits

0x4677,	// (0x00069adb) vid6_indi_pane_g2

0x4689,	// (0x00069aed) vid6_indi_pane_g3_ParamLimits

0x4689,	// (0x00069aed) vid6_indi_pane_g3

0x469e,	// (0x00069b02) vid6_indi_pane_g4_ParamLimits

0x469e,	// (0x00069b02) vid6_indi_pane_g4

0x46b3,	// (0x00069b17) vid6_indi_pane_g5_ParamLimits

0x46b3,	// (0x00069b17) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00075001) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00075001) vid6_indi_pane_g

0x46cd,	// (0x00069b31) vid6_indi_pane_t1_ParamLimits

0x46cd,	// (0x00069b31) vid6_indi_pane_t1

0x46e3,	// (0x00069b47) vid6_indi_pane_t2_ParamLimits

0x46e3,	// (0x00069b47) vid6_indi_pane_t2

0x470b,	// (0x00069b6f) vid6_indi_pane_t3_ParamLimits

0x470b,	// (0x00069b6f) vid6_indi_pane_t3

0x4733,	// (0x00069b97) vid6_indi_pane_t4_ParamLimits

0x4733,	// (0x00069b97) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0007500c) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0007500c) vid6_indi_pane_t

0x4757,	// (0x00069bbb) wait_bar_pane_cp08

0xd169,	// (0x000725cd) main_cset_text2_pane_t1_ParamLimits

0xd169,	// (0x000725cd) main_cset_text2_pane_t1

0xd0ba,	// (0x0007251e) listscroll_gen_pane_cp06_t1_ParamLimits

0xd0ba,	// (0x0007251e) listscroll_gen_pane_cp06_t1

0x6dda,	// (0x0006c23e) main_cam6_set_pane

0x2797,	// (0x00067bfb) bg_tb_trans_pane_cp06_ParamLimits

0xbd8b,	// (0x000711ef) cam4_indicators_pane_g1_ParamLimits

0xbd9c,	// (0x00071200) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00074d7a) cam4_indicators_pane_g_ParamLimits

0xbdba,	// (0x0007121e) cam4_indicators_pane_t1_ParamLimits

0xe953,	// (0x00073db7) bg_tb_trans_pane_cp07_ParamLimits

0xbd8b,	// (0x000711ef) vid4_indicators_pane_g1_ParamLimits

0xbe6a,	// (0x000712ce) vid4_indicators_pane_g2_ParamLimits

0xbe7b,	// (0x000712df) vid4_indicators_pane_g3_ParamLimits

0xbe8c,	// (0x000712f0) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00074d8c) vid4_indicators_pane_g_ParamLimits

0xbea8,	// (0x0007130c) vid4_indicators_pane_t1_ParamLimits

0xccb8,	// (0x0007211c) vid4_progress_pane_g1_ParamLimits

0xccc8,	// (0x0007212c) vid4_progress_pane_g2_ParamLimits

0xccd8,	// (0x0007213c) vid4_progress_pane_g3_ParamLimits

0xbd9c,	// (0x00071200) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00074f3d) vid4_progress_pane_g_ParamLimits

0xcce4,	// (0x00072148) vid4_progress_pane_t1_ParamLimits

0xccf9,	// (0x0007215d) vid4_progress_pane_t2_ParamLimits

0xcd0f,	// (0x00072173) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00074f48) vid4_progress_pane_t_ParamLimits

0xcd24,	// (0x00072188) wait_bar_pane_cp07_ParamLimits

0xd1a7,	// (0x0007260b) main_cam6_set_pane_g2_ParamLimits

0xd1a7,	// (0x0007260b) main_cam6_set_pane_g2

0xd1b3,	// (0x00072617) main_cset6_listscroll_pane_ParamLimits

0xd1b3,	// (0x00072617) main_cset6_listscroll_pane

0xd1de,	// (0x00072642) main_cset6_slider_pane_ParamLimits

0xd1de,	// (0x00072642) main_cset6_slider_pane

0xd1ea,	// (0x0007264e) main_cset6_text2_pane_ParamLimits

0xd1ea,	// (0x0007264e) main_cset6_text2_pane

0x4766,	// (0x00069bca) main_cset6_text_pane

0x476e,	// (0x00069bd2) main_cset_list_pane_copy1_ParamLimits

0x476e,	// (0x00069bd2) main_cset_list_pane_copy1

0x477e,	// (0x00069be2) scroll_pane_cp028_copy1

0xd1fd,	// (0x00072661) cset_list_set_pane_copy1

0xd217,	// (0x0007267b) aid_position_infowindow_above_copy1

0xd21f,	// (0x00072683) aid_position_infowindow_below_copy1

0xd227,	// (0x0007268b) cset_list_set_pane_g1_copy1

0x610a,	// (0x0006b56e) cset_list_set_pane_g3_copy1_ParamLimits

0x610a,	// (0x0006b56e) cset_list_set_pane_g3_copy1

0x6119,	// (0x0006b57d) cset_list_set_pane_t1_copy1_ParamLimits

0x6119,	// (0x0006b57d) cset_list_set_pane_t1_copy1

0xe953,	// (0x00073db7) list_highlight_pane_cp021_copy1_ParamLimits

0xe953,	// (0x00073db7) list_highlight_pane_cp021_copy1

0x4787,	// (0x00069beb) cset6_slider_pane_ParamLimits

0x4787,	// (0x00069beb) cset6_slider_pane

0x47b3,	// (0x00069c17) main_cset6_slider_pane_g1_ParamLimits

0x47b3,	// (0x00069c17) main_cset6_slider_pane_g1

0xd22f,	// (0x00072693) main_cset6_slider_pane_g2_ParamLimits

0xd22f,	// (0x00072693) main_cset6_slider_pane_g2

0x4098,	// (0x000694fc) main_cset6_slider_pane_g3_ParamLimits

0x4098,	// (0x000694fc) main_cset6_slider_pane_g3

0xd257,	// (0x000726bb) main_cset6_slider_pane_g4_ParamLimits

0xd257,	// (0x000726bb) main_cset6_slider_pane_g4

0xd263,	// (0x000726c7) main_cset6_slider_pane_g5_ParamLimits

0xd263,	// (0x000726c7) main_cset6_slider_pane_g5

0x4098,	// (0x000694fc) main_cset6_slider_pane_g7_ParamLimits

0x4098,	// (0x000694fc) main_cset6_slider_pane_g7

0x40a4,	// (0x00069508) main_cset6_slider_pane_g8_ParamLimits

0x40a4,	// (0x00069508) main_cset6_slider_pane_g8

0xd271,	// (0x000726d5) main_cset6_slider_pane_g9_ParamLimits

0xd271,	// (0x000726d5) main_cset6_slider_pane_g9

0xd27d,	// (0x000726e1) main_cset6_slider_pane_g10_ParamLimits

0xd27d,	// (0x000726e1) main_cset6_slider_pane_g10

0xd257,	// (0x000726bb) main_cset6_slider_pane_g11_ParamLimits

0xd257,	// (0x000726bb) main_cset6_slider_pane_g11

0xd289,	// (0x000726ed) main_cset6_slider_pane_g12_ParamLimits

0xd289,	// (0x000726ed) main_cset6_slider_pane_g12

0xd295,	// (0x000726f9) main_cset6_slider_pane_g13_ParamLimits

0xd295,	// (0x000726f9) main_cset6_slider_pane_g13

0xd2a3,	// (0x00072707) main_cset6_slider_pane_g14_ParamLimits

0xd2a3,	// (0x00072707) main_cset6_slider_pane_g14

0xd2b1,	// (0x00072715) main_cset6_slider_pane_g15_ParamLimits

0xd2b1,	// (0x00072715) main_cset6_slider_pane_g15

0xd263,	// (0x000726c7) main_cset6_slider_pane_g16_ParamLimits

0xd263,	// (0x000726c7) main_cset6_slider_pane_g16

0xd2c9,	// (0x0007272d) main_cset6_slider_pane_g17_ParamLimits

0xd2c9,	// (0x0007272d) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00075015) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00075015) main_cset6_slider_pane_g

0x47db,	// (0x00069c3f) main_cset6_slider_pane_t1_ParamLimits

0x47db,	// (0x00069c3f) main_cset6_slider_pane_t1

0xd2d7,	// (0x0007273b) main_cset6_slider_pane_t2_ParamLimits

0xd2d7,	// (0x0007273b) main_cset6_slider_pane_t2

0xd302,	// (0x00072766) main_cset6_slider_pane_t3_ParamLimits

0xd302,	// (0x00072766) main_cset6_slider_pane_t3

0xd32d,	// (0x00072791) main_cset6_slider_pane_t4_ParamLimits

0xd32d,	// (0x00072791) main_cset6_slider_pane_t4

0xd35a,	// (0x000727be) main_cset6_slider_pane_t5_ParamLimits

0xd35a,	// (0x000727be) main_cset6_slider_pane_t5

0x4828,	// (0x00069c8c) main_cset6_slider_pane_t7_ParamLimits

0x4828,	// (0x00069c8c) main_cset6_slider_pane_t7

0xd387,	// (0x000727eb) main_cset6_slider_pane_t8_ParamLimits

0xd387,	// (0x000727eb) main_cset6_slider_pane_t8

0xd3ab,	// (0x0007280f) main_cset6_slider_pane_t9_ParamLimits

0xd3ab,	// (0x0007280f) main_cset6_slider_pane_t9

0xd3cf,	// (0x00072833) main_cset6_slider_pane_t10_ParamLimits

0xd3cf,	// (0x00072833) main_cset6_slider_pane_t10

0xd3f3,	// (0x00072857) main_cset6_slider_pane_t11_ParamLimits

0xd3f3,	// (0x00072857) main_cset6_slider_pane_t11

0x485e,	// (0x00069cc2) main_cset6_slider_pane_t14_ParamLimits

0x485e,	// (0x00069cc2) main_cset6_slider_pane_t14

0x4897,	// (0x00069cfb) main_cset6_slider_pane_t15_ParamLimits

0x4897,	// (0x00069cfb) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0007503a) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0007503a) main_cset6_slider_pane_t

0x48d0,	// (0x00069d34) cset_slider_pane_g1_copy1

0x48d9,	// (0x00069d3d) cset_slider_pane_g2_copy1

0x48e2,	// (0x00069d46) cset_slider_pane_g3_copy1

0x6dda,	// (0x0006c23e) bg_popup_sub_pane_cp011_copy1

0x41d6,	// (0x0006963a) main_cset_text_pane_g1_copy1

0x41de,	// (0x00069642) main_cset_text_pane_t1_copy1

0x41ec,	// (0x00069650) main_cset_text_pane_t2_copy1

0x41fa,	// (0x0006965e) main_cset_text_pane_t3_copy1

0x4208,	// (0x0006966c) main_cset_text_pane_t4_copy1

0x4216,	// (0x0006967a) main_cset_text_pane_t5_copy1

0x4224,	// (0x00069688) main_cset_text_pane_t6_copy1

0x4232,	// (0x00069696) main_cset_text_pane_t7_copy1

0xd419,	// (0x0007287d) main_cset_text2_pane_t1_copy1

0x6dda,	// (0x0006c23e) main_ncimui_pane

0x9e59,	// (0x0006f2bd) popup_query_ncimui_window_ParamLimits

0x9e59,	// (0x0006f2bd) popup_query_ncimui_window

0xa9be,	// (0x0006fe22) field_cale_ev2_pane_g4_ParamLimits

0xa9be,	// (0x0006fe22) field_cale_ev2_pane_g4

0xb720,	// (0x00070b84) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb720,	// (0x00070b84) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00074d18) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00074d18) cell_video_dialer_keypad_pane_g

0xb738,	// (0x00070b9c) cell_video_dialer_keypad_pane_t1

0x6dda,	// (0x0006c23e) bg_popup_window_pane_cp012

0x0942,	// (0x00065da6) heading_pane_cp06

0x4909,	// (0x00069d6d) ncim_query_content_pane

0x6dda,	// (0x0006c23e) bg_popup_heading_pane_cp01

0x4911,	// (0x00069d75) ncim_heading_pane_t1

0x491f,	// (0x00069d83) ncim_indicator_popup_pane

0x4931,	// (0x00069d95) ncim_query_button_pane

0x4945,	// (0x00069da9) ncim_query_content_pane_t1

0x4957,	// (0x00069dbb) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00075079) ncim_query_content_pane_t

0x4991,	// (0x00069df5) ncim_query_list_pane

0x49a3,	// (0x00069e07) ncim_query_popup_pane

0x491f,	// (0x00069d83) ncim_indicator_popup_pane_ParamLimits

0xd546,	// (0x000729aa) ncim_query_content_pane_g1_ParamLimits

0xd546,	// (0x000729aa) ncim_query_content_pane_g1

0x4945,	// (0x00069da9) ncim_query_content_pane_t1_ParamLimits

0x4957,	// (0x00069dbb) ncim_query_content_pane_t2_ParamLimits

0xd552,	// (0x000729b6) ncim_query_content_pane_t3_ParamLimits

0xd552,	// (0x000729b6) ncim_query_content_pane_t3

0xd56f,	// (0x000729d3) ncim_query_content_pane_t4_ParamLimits

0xd56f,	// (0x000729d3) ncim_query_content_pane_t4

0xd58c,	// (0x000729f0) ncim_query_content_pane_t5_ParamLimits

0xd58c,	// (0x000729f0) ncim_query_content_pane_t5

0x4969,	// (0x00069dcd) ncim_query_content_pane_t6_ParamLimits

0x4969,	// (0x00069dcd) ncim_query_content_pane_t6

0xfc15,	// (0x00075079) ncim_query_content_pane_t_ParamLimits

0x4991,	// (0x00069df5) ncim_query_list_pane_ParamLimits

0x49a3,	// (0x00069e07) ncim_query_popup_pane_ParamLimits

0x49b7,	// (0x00069e1b) wait_bar_pane_cp04

0x6dda,	// (0x0006c23e) input_focus_pane_cp011

0x49bf,	// (0x00069e23) ncim_query_popup_pane_t1

0x49cd,	// (0x00069e31) ncim_list_query_list_pane_ParamLimits

0x49cd,	// (0x00069e31) ncim_list_query_list_pane

0x6dda,	// (0x0006c23e) bg_button_pane_cp027

0x49e0,	// (0x00069e44) ncim_query_button_pane_g1

0x6dda,	// (0x0006c23e) list_highlight_pane_cp012

0x49ea,	// (0x00069e4e) ncim_list_query_list_pane_g1

0x49f2,	// (0x00069e56) ncim_list_query_list_pane_t1

0xbdab,	// (0x0007120f) cam4_indicators_pane_g3_ParamLimits

0xbdab,	// (0x0007120f) cam4_indicators_pane_g3

0xbe98,	// (0x000712fc) vid4_indicators_pane_g5_ParamLimits

0xbe98,	// (0x000712fc) vid4_indicators_pane_g5

0xbdab,	// (0x0007120f) vid4_progress_pane_g5_ParamLimits

0xbdab,	// (0x0007120f) vid4_progress_pane_g5

0xd45f,	// (0x000728c3) main_ncimui_pane_g1

0xd4b5,	// (0x00072919) ncimui_group_query_pane_ParamLimits

0xd4b5,	// (0x00072919) ncimui_group_query_pane

0xd4f1,	// (0x00072955) ncimui_list_pane_ParamLimits

0xd4f1,	// (0x00072955) ncimui_list_pane

0xd512,	// (0x00072976) ncimui_text_pane_ParamLimits

0xd512,	// (0x00072976) ncimui_text_pane

0xd5a9,	// (0x00072a0d) ncimui_text_pane_t1_ParamLimits

0xd5a9,	// (0x00072a0d) ncimui_text_pane_t1

0x4a00,	// (0x00069e64) ncimui_list_single_graphic_pane_ParamLimits

0x4a00,	// (0x00069e64) ncimui_list_single_graphic_pane

0xd5c8,	// (0x00072a2c) ncimui_query_pane_ParamLimits

0xd5c8,	// (0x00072a2c) ncimui_query_pane

0x6dda,	// (0x0006c23e) list_highlight_pane_cp013

0x4a10,	// (0x00069e74) ncim_list_query_list_pane_t1_copy1

0x49ea,	// (0x00069e4e) ncim_list_single_graphic_pane_g1

0x4a1e,	// (0x00069e82) ncim_query_button_pane_cp01

0x4a2a,	// (0x00069e8e) ncim_query_entry_pane_ParamLimits

0x4a2a,	// (0x00069e8e) ncim_query_entry_pane

0x4a3d,	// (0x00069ea1) ncimui_query_pane_g1

0x4a49,	// (0x00069ead) ncimui_query_pane_t1_ParamLimits

0x4a49,	// (0x00069ead) ncimui_query_pane_t1

0xe953,	// (0x00073db7) input_focus_pane_cp012

0x4a62,	// (0x00069ec6) ncim_query_entry_pane_t1

0xf097,	// (0x000744fb) main_im_pane_ParamLimits

0xe953,	// (0x00073db7) main_mobtv_pane_ParamLimits

0xe953,	// (0x00073db7) main_mobtv_pane

0xd271,	// (0x000726d5) main_cset6_slider_pane_g18_ParamLimits

0xd271,	// (0x000726d5) main_cset6_slider_pane_g18

0xd295,	// (0x000726f9) main_cset6_slider_pane_g19_ParamLimits

0xd295,	// (0x000726f9) main_cset6_slider_pane_g19

0x3f49,	// (0x000693ad) bg_main_mobtv_pane_ParamLimits

0x3f49,	// (0x000693ad) bg_main_mobtv_pane

0xd5db,	// (0x00072a3f) main_mobtv_info_pane

0xd5e6,	// (0x00072a4a) main_mobtv_loading_pane_ParamLimits

0xd5e6,	// (0x00072a4a) main_mobtv_loading_pane

0x4a74,	// (0x00069ed8) main_mobtv_pg_channel_list_pane

0x4a7e,	// (0x00069ee2) main_mobtv_pg_hdr_pane

0xd5f3,	// (0x00072a57) main_mobtv_programe_curr_pane_ParamLimits

0xd5f3,	// (0x00072a57) main_mobtv_programe_curr_pane

0xd600,	// (0x00072a64) main_mobtv_programe_next_pane_ParamLimits

0xd600,	// (0x00072a64) main_mobtv_programe_next_pane

0x4a87,	// (0x00069eeb) popup_mobtv_noti_window

0x2530,	// (0x00067994) main_tv_pg_hdr_pane_g1

0x4a8f,	// (0x00069ef3) main_tv_pg_hdr_pane_g2

0x4a97,	// (0x00069efb) main_tv_pg_hdr_pane_g3

0x4a9f,	// (0x00069f03) main_tv_pg_hdr_pane_g4

0x4aa7,	// (0x00069f0b) main_tv_pg_hdr_pane_g5

0x4ab1,	// (0x00069f15) main_tv_pg_hdr_pane_g6

0x4abb,	// (0x00069f1f) main_tv_pg_hdr_pane_g7

0x4ac5,	// (0x00069f29) main_tv_pg_hdr_pane_g8

0x4acf,	// (0x00069f33) main_tv_pg_hdr_pane_g9

0x4ad9,	// (0x00069f3d) main_tv_pg_hdr_pane_g10

0x4ae3,	// (0x00069f47) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00075086) main_tv_pg_hdr_pane_g

0x4aed,	// (0x00069f51) main_tv_pg_hdr_pane_t1

0x4afb,	// (0x00069f5f) main_tv_pg_hdr_pane_t2

0x4b09,	// (0x00069f6d) main_tv_pg_hdr_pane_t3

0x4b19,	// (0x00069f7d) main_tv_pg_hdr_pane_t4

0x4b29,	// (0x00069f8d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0007509d) main_tv_pg_hdr_pane_t

0x4b39,	// (0x00069f9d) single_mobtv_pg_channel_pane_ParamLimits

0x4b39,	// (0x00069f9d) single_mobtv_pg_channel_pane

0x4b5d,	// (0x00069fc1) single_mobtv_pg_channel_table_pane

0x4b66,	// (0x00069fca) single_mobtv_pg_channel_thumb_pane

0x4b6f,	// (0x00069fd3) single_tv_pg_channel_pane_g1

0x4b78,	// (0x00069fdc) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x000750a8) single_tv_pg_channel_pane_g

0x2797,	// (0x00067bfb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2797,	// (0x00067bfb) bg_single_mobtv_pg_channel_thumb_pane

0x4b81,	// (0x00069fe5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4b81,	// (0x00069fe5) single_mobtv_pg_channel_thumb_pane_g1

0x4b8f,	// (0x00069ff3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4b8f,	// (0x00069ff3) single_mobtv_pg_channel_thumb_pane_g2

0x4b9b,	// (0x00069fff) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4b9b,	// (0x00069fff) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000750ad) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000750ad) single_mobtv_pg_channel_thumb_pane_g

0x4ba7,	// (0x0006a00b) single_mobtv_pg_channel_thumb_pane_t1

0x4bb5,	// (0x0006a019) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x000750b4) single_mobtv_pg_channel_thumb_pane_t

0x2530,	// (0x00067994) bg_single_mobtv_pg_channel_table_pane_g1

0x2530,	// (0x00067994) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00074b64) bg_single_mobtv_pg_channel_table_pane_g

0x4bc3,	// (0x0006a027) single_mobtv_pg_channel_table_pane_t1

0x4bd1,	// (0x0006a035) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x000750b9) single_mobtv_pg_channel_table_pane_t

0xd615,	// (0x00072a79) main_mobtv_info_pane_g1_ParamLimits

0xd615,	// (0x00072a79) main_mobtv_info_pane_g1

0xd631,	// (0x00072a95) main_mobtv_info_pane_t1_ParamLimits

0xd631,	// (0x00072a95) main_mobtv_info_pane_t1

0xd6a9,	// (0x00072b0d) main_mobtv_info_pane_t2_ParamLimits

0xd6a9,	// (0x00072b0d) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000750c3) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000750c3) main_mobtv_info_pane_t

0xd738,	// (0x00072b9c) wait_bar_pane_cp05

0xd74a,	// (0x00072bae) main_mobtv_loading_pane_g1_ParamLimits

0xd74a,	// (0x00072bae) main_mobtv_loading_pane_g1

0xd758,	// (0x00072bbc) main_mobtv_loading_pane_g2_ParamLimits

0xd758,	// (0x00072bbc) main_mobtv_loading_pane_g2

0xd764,	// (0x00072bc8) main_mobtv_loading_pane_g3_ParamLimits

0xd764,	// (0x00072bc8) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000750ca) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000750ca) main_mobtv_loading_pane_g

0x4bdf,	// (0x0006a043) main_mobtv_loading_pane_t1_ParamLimits

0x4bdf,	// (0x0006a043) main_mobtv_loading_pane_t1

0x4bf7,	// (0x0006a05b) main_mobtv_loading_pane_t2_ParamLimits

0x4bf7,	// (0x0006a05b) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000750d1) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000750d1) main_mobtv_loading_pane_t

0xd772,	// (0x00072bd6) wait_bar_pane_cp06_ParamLimits

0xd772,	// (0x00072bd6) wait_bar_pane_cp06

0x4c1b,	// (0x0006a07f) main_mobtv_programe_curr_pane_t1

0x4c29,	// (0x0006a08d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000750d6) main_mobtv_programe_curr_pane_t

0x4c37,	// (0x0006a09b) main_mobtv_programe_next_pane_t1

0x4c45,	// (0x0006a0a9) main_mobtv_programe_next_pane_t2

0x4c53,	// (0x0006a0b7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000750db) main_mobtv_programe_next_pane_t

0x6dda,	// (0x0006c23e) bg_popup_mobtv_noti_window_pane

0x4c61,	// (0x0006a0c5) popup_mobtv_noti_window_g1

0x4c69,	// (0x0006a0cd) popup_mobtv_noti_window_t1

0x4c77,	// (0x0006a0db) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000750e2) popup_mobtv_noti_window_t

0x2530,	// (0x00067994) bg_popup_mobtv_noti_window_pane_g1

0x6dda,	// (0x0006c23e) sc_clock_pane

0x6dda,	// (0x0006c23e) main_fs_bigclock_pane

0xcec4,	// (0x00072328) blid2_tripm_pane_t4_ParamLimits

0xcec4,	// (0x00072328) blid2_tripm_pane_t4

0xd77e,	// (0x00072be2) sc_clock_pane_g1_ParamLimits

0xd77e,	// (0x00072be2) sc_clock_pane_g1

0xd78c,	// (0x00072bf0) sc_clock_pane_t1_ParamLimits

0xd78c,	// (0x00072bf0) sc_clock_pane_t1

0xd79f,	// (0x00072c03) sc_clock_pane_t2_ParamLimits

0xd79f,	// (0x00072c03) sc_clock_pane_t2

0xd7b1,	// (0x00072c15) sc_clock_pane_t3_ParamLimits

0xd7b1,	// (0x00072c15) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000750e7) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000750e7) sc_clock_pane_t

0xe17a,	// (0x000735de) main_fs_bigclock_indicator_pane_ParamLimits

0xe17a,	// (0x000735de) main_fs_bigclock_indicator_pane

0xd84f,	// (0x00072cb3) main_fs_bigclock_pane_g1_ParamLimits

0xd84f,	// (0x00072cb3) main_fs_bigclock_pane_g1

0xe186,	// (0x000735ea) main_fs_bigclock_pane_t1_ParamLimits

0xe186,	// (0x000735ea) main_fs_bigclock_pane_t1

0xe198,	// (0x000735fc) main_fs_bigclock_pane_t2_ParamLimits

0xe198,	// (0x000735fc) main_fs_bigclock_pane_t2

0xe1aa,	// (0x0007360e) main_fs_bigclock_pane_t3_ParamLimits

0xe1aa,	// (0x0007360e) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x000752e6) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000752e6) main_fs_bigclock_pane_t

0x3581,	// (0x000689e5) main_fs_bigclock_indicator_pane_g1

0x4939,	// (0x00069d9d) ncim_query_content_pane_g2_ParamLimits

0x4939,	// (0x00069d9d) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00075074) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00075074) ncim_query_content_pane_g

0xd7c5,	// (0x00072c29) sc_clock_pane_t4_ParamLimits

0xd7c5,	// (0x00072c29) sc_clock_pane_t4

0xe953,	// (0x00073db7) main_radioblah_pane

0x3eba,	// (0x0006931e) cell_call4_button_pane_t1_copy1_ParamLimits

0x3eba,	// (0x0006931e) cell_call4_button_pane_t1_copy1

0xd467,	// (0x000728cb) main_ncimui_pane_t1_ParamLimits

0xd467,	// (0x000728cb) main_ncimui_pane_t1

0xd481,	// (0x000728e5) main_ncimui_pane_t2_ParamLimits

0xd481,	// (0x000728e5) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0007506d) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0007506d) main_ncimui_pane_t

0x4c85,	// (0x0006a0e9) main_radioblah_anim_pane_ParamLimits

0x4c85,	// (0x0006a0e9) main_radioblah_anim_pane

0x4c96,	// (0x0006a0fa) main_radioblah_info_pane_ParamLimits

0x4c96,	// (0x0006a0fa) main_radioblah_info_pane

0x4caa,	// (0x0006a10e) main_radioblah_pane_t1_ParamLimits

0x4caa,	// (0x0006a10e) main_radioblah_pane_t1

0x4cc6,	// (0x0006a12a) main_radioblah_pane_t2_ParamLimits

0x4cc6,	// (0x0006a12a) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00075108) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00075108) main_radioblah_pane_t

0xd9cb,	// (0x00072e2f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd9cb,	// (0x00072e2f) main_radioblah_rocker_ctrl_pane

0x4d0e,	// (0x0006a172) main_radioblah_info_pane_t1_ParamLimits

0x4d0e,	// (0x0006a172) main_radioblah_info_pane_t1

0xda10,	// (0x00072e74) main_radioblah_info_pane_t2_ParamLimits

0xda10,	// (0x00072e74) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00075111) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00075111) main_radioblah_info_pane_t

0x2530,	// (0x00067994) main_radioblah_rocker_ctrl_pane_g1

0xdac0,	// (0x00072f24) main_radioblah_rocker_ctrl_pane_g2

0xdac8,	// (0x00072f2c) main_radioblah_rocker_ctrl_pane_g3

0xdad0,	// (0x00072f34) main_radioblah_rocker_ctrl_pane_g4

0xdad8,	// (0x00072f3c) main_radioblah_rocker_ctrl_pane_g5

0xdae0,	// (0x00072f44) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0007511a) main_radioblah_rocker_ctrl_pane_g

0xd419,	// (0x0007287d) main_cset_text2_pane_t1_copy1_ParamLimits

0xbcd9,	// (0x0007113d) cam4_image_uncrop_qvga_pane

0xbe20,	// (0x00071284) vid4_image_uncrop_qcif_pane

0xd052,	// (0x000724b6) cam6_image_uncrop_qvga_pane_ParamLimits

0xd052,	// (0x000724b6) cam6_image_uncrop_qvga_pane

0x4649,	// (0x00069aad) vid6_image_uncrop_qcif_pane_ParamLimits

0x4649,	// (0x00069aad) vid6_image_uncrop_qcif_pane

0x6dda,	// (0x0006c23e) bg_popup_preview_window_pane_cp03

0x48eb,	// (0x00069d4f) list_cset_text2_pane

0x48f3,	// (0x00069d57) main_cset6_text2_pane_g1

0x48fb,	// (0x00069d5f) main_cset6_text2_pane_t1

0xdae8,	// (0x00072f4c) list_cset_text2_pane_t1_ParamLimits

0xdae8,	// (0x00072f4c) list_cset_text2_pane_t1

0xe953,	// (0x00073db7) main_radioblah_pane_ParamLimits

0xd724,	// (0x00072b88) main_mobtv_info_pane_t3_ParamLimits

0xd724,	// (0x00072b88) main_mobtv_info_pane_t3

0xd9b9,	// (0x00072e1d) main_radioblah_pane_g1

0xd9e4,	// (0x00072e48) main_radioblah_info_pane_g1

0xda65,	// (0x00072ec9) main_radioblah_info_pane_t3_ParamLimits

0xda65,	// (0x00072ec9) main_radioblah_info_pane_t3

0x8b4b,	// (0x0006dfaf) highlight_cell_cale_month_pane_ParamLimits

0x8b4b,	// (0x0006dfaf) highlight_cell_cale_month_pane

0x6dda,	// (0x0006c23e) main_phob_fisheye_pane

0x2879,	// (0x00067cdd) scroll_pane_cp0031_ParamLimits

0x2879,	// (0x00067cdd) scroll_pane_cp0031

0x4757,	// (0x00069bbb) wait_bar_pane_cp08_ParamLimits

0xd1fd,	// (0x00072661) cset_list_set_pane_copy1_ParamLimits

0x4d48,	// (0x0006a1ac) highlight_cell_cale_month_pane_g1

0xdb13,	// (0x00072f77) highlight_cell_cale_month_pane_t1

0x43fa,	// (0x0006985e) list_gen_pane_cp01

0x4083,	// (0x000694e7) scroll_pane_01

0xdb21,	// (0x00072f85) list_single_double_fisheye_pane

0x648d,	// (0x0006b8f1) list_double_fisheye_pane_g1_ParamLimits

0x648d,	// (0x0006b8f1) list_double_fisheye_pane_g1

0xdb2a,	// (0x00072f8e) list_double_fisheye_pane_g2_ParamLimits

0xdb2a,	// (0x00072f8e) list_double_fisheye_pane_g2

0xdb3e,	// (0x00072fa2) list_double_fisheye_pane_g3_ParamLimits

0xdb3e,	// (0x00072fa2) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00075127) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00075127) list_double_fisheye_pane_g

0x64a5,	// (0x0006b909) list_double_fisheye_pane_t1_ParamLimits

0x64a5,	// (0x0006b909) list_double_fisheye_pane_t1

0x64c0,	// (0x0006b924) list_double_fisheye_pane_t2_ParamLimits

0x64c0,	// (0x0006b924) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00075132) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00075132) list_double_fisheye_pane_t

0x6dda,	// (0x0006c23e) main_call5_pane

0xd7eb,	// (0x00072c4f) sc_swipe_pane_ParamLimits

0xd7eb,	// (0x00072c4f) sc_swipe_pane

0xdb67,	// (0x00072fcb) call5_image_pane_ParamLimits

0xdb67,	// (0x00072fcb) call5_image_pane

0xdb77,	// (0x00072fdb) call5_swipe_1_pane_ParamLimits

0xdb77,	// (0x00072fdb) call5_swipe_1_pane

0xdb83,	// (0x00072fe7) call5_swipe_2_pane_ParamLimits

0xdb83,	// (0x00072fe7) call5_swipe_2_pane

0xdb9d,	// (0x00073001) popup_call5_audio_first_window_ParamLimits

0xdb9d,	// (0x00073001) popup_call5_audio_first_window

0x2797,	// (0x00067bfb) call5_swipe_1_pane_g1_ParamLimits

0x2797,	// (0x00067bfb) call5_swipe_1_pane_g1

0x4d50,	// (0x0006a1b4) call5_swipe_1_pane_g2_ParamLimits

0x4d50,	// (0x0006a1b4) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00075137) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00075137) call5_swipe_1_pane_g

0x4d5c,	// (0x0006a1c0) call5_swipe_1_pane_t1_ParamLimits

0x4d5c,	// (0x0006a1c0) call5_swipe_1_pane_t1

0x2797,	// (0x00067bfb) call5_swipe_2_pane_g1_ParamLimits

0x2797,	// (0x00067bfb) call5_swipe_2_pane_g1

0x4d71,	// (0x0006a1d5) call5_swipe_2_pane_g2_ParamLimits

0x4d71,	// (0x0006a1d5) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0007513c) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0007513c) call5_swipe_2_pane_g

0x4d7d,	// (0x0006a1e1) call5_swipe_2_pane_t1_ParamLimits

0x4d7d,	// (0x0006a1e1) call5_swipe_2_pane_t1

0x4d92,	// (0x0006a1f6) sc_swipe_pane_g1_ParamLimits

0x4d92,	// (0x0006a1f6) sc_swipe_pane_g1

0x4d9f,	// (0x0006a203) sc_swipe_pane_g2_ParamLimits

0x4d9f,	// (0x0006a203) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00075141) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00075141) sc_swipe_pane_g

0x4dab,	// (0x0006a20f) sc_swipe_pane_t1_ParamLimits

0x4dab,	// (0x0006a20f) sc_swipe_pane_t1

0x6dda,	// (0x0006c23e) main_cmail_launcher_pane

0xdbab,	// (0x0007300f) aid_size_cell_cmail_l_ParamLimits

0xdbab,	// (0x0007300f) aid_size_cell_cmail_l

0xdbbb,	// (0x0007301f) grid_cmail_l_pane_ParamLimits

0xdbbb,	// (0x0007301f) grid_cmail_l_pane

0xdbcb,	// (0x0007302f) cell_cmail_l_pane_ParamLimits

0xdbcb,	// (0x0007302f) cell_cmail_l_pane

0xdbdf,	// (0x00073043) cell_cmail_l_pane_g1_ParamLimits

0xdbdf,	// (0x00073043) cell_cmail_l_pane_g1

0xdbeb,	// (0x0007304f) cell_cmail_l_pane_t1_ParamLimits

0xdbeb,	// (0x0007304f) cell_cmail_l_pane_t1

0x4dc0,	// (0x0006a224) cell_cmail_l_pane_t2_ParamLimits

0x4dc0,	// (0x0006a224) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00075146) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00075146) cell_cmail_l_pane_t

0xe953,	// (0x00073db7) grid_highlight_pane_cp018_ParamLimits

0xe953,	// (0x00073db7) grid_highlight_pane_cp018

0x6ef1,	// (0x0006c355) main2_pane_ParamLimits

0x6ef1,	// (0x0006c355) main2_pane

0x006e,	// (0x000654d2) popup_sp_fs_action_menu_bg_pane_g1

0x0076,	// (0x000654da) popup_sp_fs_action_menu_bg_pane_g2

0x007e,	// (0x000654e2) popup_sp_fs_action_menu_bg_pane_g3

0x0086,	// (0x000654ea) popup_sp_fs_action_menu_bg_pane_g4

0x008e,	// (0x000654f2) popup_sp_fs_action_menu_bg_pane_g5

0x0096,	// (0x000654fa) popup_sp_fs_action_menu_bg_pane_g6

0x009e,	// (0x00065502) popup_sp_fs_action_menu_bg_pane_g7

0x00a6,	// (0x0006550a) popup_sp_fs_action_menu_bg_pane_g8

0x00ae,	// (0x00065512) popup_sp_fs_action_menu_bg_pane_g9

0x00b6,	// (0x0006551a) popup_sp_fs_action_menu_bg_pane_g10

0x00b6,	// (0x0006551a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00074610) popup_sp_fs_action_menu_bg_pane_g

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g3_g1

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t3_g3_g2

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000746c0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000746c0) list_medium_line_x2_t3_g3_g

0x5cfe,	// (0x0006b162) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5cfe,	// (0x0006b162) list_medium_line_x2_t3_g3_t1

0x5d13,	// (0x0006b177) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5d13,	// (0x0006b177) list_medium_line_x2_t3_g3_t2

0x5d25,	// (0x0006b189) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000746c7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000746c7) list_medium_line_x2_t3_g3_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g2_g1

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000746ce) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000746ce) list_medium_line_x2_t3_g2_g

0x5d3a,	// (0x0006b19e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5d3a,	// (0x0006b19e) list_medium_line_x2_t3_g2_t1

0x5d50,	// (0x0006b1b4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5d50,	// (0x0006b1b4) list_medium_line_x2_t3_g2_t2

0x5d62,	// (0x0006b1c6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5d62,	// (0x0006b1c6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000746d3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000746d3) list_medium_line_x2_t3_g2_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t4_g4_g1

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t4_g4_g2

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t4_g4_g3

0x5d8c,	// (0x0006b1f0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5d8c,	// (0x0006b1f0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000746da) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000746da) list_medium_line_x2_t4_g4_g

0x5d98,	// (0x0006b1fc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5d98,	// (0x0006b1fc) list_medium_line_x2_t4_g4_t1

0x5daf,	// (0x0006b213) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5daf,	// (0x0006b213) list_medium_line_x2_t4_g4_t2

0x5dc4,	// (0x0006b228) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5dc4,	// (0x0006b228) list_medium_line_x2_t4_g4_t3

0x5dd6,	// (0x0006b23a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5dd6,	// (0x0006b23a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000746e3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000746e3) list_medium_line_x2_t4_g4_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g4_g1

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t2_g4_g2

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t2_g4_g3

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0007474a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0007474a) list_medium_line_x2_t2_g4_g

0x5de8,	// (0x0006b24c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5de8,	// (0x0006b24c) list_medium_line_x2_t2_g4_t1

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00074753) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00074753) list_medium_line_x2_t2_g4_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g3_g1

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t2_g3_g2

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000746c0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000746c0) list_medium_line_x2_t2_g3_g

0x5dfd,	// (0x0006b261) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5dfd,	// (0x0006b261) list_medium_line_x2_t2_g3_t1

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00074758) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00074758) list_medium_line_x2_t2_g3_t

0x8dc7,	// (0x0006e22b) main_sp_fs_list_pane_ParamLimits

0x8dc7,	// (0x0006e22b) main_sp_fs_list_pane

0x8dd3,	// (0x0006e237) sp_fs_scroll_pane_ParamLimits

0x8dd3,	// (0x0006e237) sp_fs_scroll_pane

0x5e12,	// (0x0006b276) list_medium_line_x2_t3_t1

0x5e22,	// (0x0006b286) list_medium_line_x2_t3_t2

0x5e30,	// (0x0006b294) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000747a3) list_medium_line_x2_t3_t

0x5e3e,	// (0x0006b2a2) list_medium_line_x3_t4_t1

0x5e4e,	// (0x0006b2b2) list_medium_line_x3_t4_t2

0x5e5c,	// (0x0006b2c0) list_medium_line_x3_t4_t3

0x5e30,	// (0x0006b294) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000747aa) list_medium_line_x3_t4_t

0x5e6a,	// (0x0006b2ce) list_medium_line_x4_t5_t1

0x5e7a,	// (0x0006b2de) list_medium_line_x4_t5_t2

0x5e5c,	// (0x0006b2c0) list_medium_line_x4_t5_t3

0x5e88,	// (0x0006b2ec) list_medium_line_x4_t5_t4

0x5e30,	// (0x0006b294) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000747b3) list_medium_line_x4_t5_t

0x5cda,	// (0x0006b13e) list_medium_line_t4_g4_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_t4_g4_g1

0x5d8c,	// (0x0006b1f0) list_medium_line_t4_g4_g2_ParamLimits

0x5d8c,	// (0x0006b1f0) list_medium_line_t4_g4_g2

0x5e96,	// (0x0006b2fa) list_medium_line_t4_g4_g3_ParamLimits

0x5e96,	// (0x0006b2fa) list_medium_line_t4_g4_g3

0x5cf2,	// (0x0006b156) list_medium_line_t4_g4_g4_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000747be) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000747be) list_medium_line_t4_g4_g

0x5ea2,	// (0x0006b306) list_medium_line_t4_g4_t1_ParamLimits

0x5ea2,	// (0x0006b306) list_medium_line_t4_g4_t1

0x5eb7,	// (0x0006b31b) list_medium_line_t4_g4_t2_ParamLimits

0x5eb7,	// (0x0006b31b) list_medium_line_t4_g4_t2

0x5ecd,	// (0x0006b331) list_medium_line_t4_g4_t3_ParamLimits

0x5ecd,	// (0x0006b331) list_medium_line_t4_g4_t3

0x5d25,	// (0x0006b189) list_medium_line_t4_g4_t4_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000747c7) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000747c7) list_medium_line_t4_g4_t

0x8ec6,	// (0x0006e32a) chi_dic_find_pane_g1

0x9e28,	// (0x0006f28c) main_tport_pane

0x612e,	// (0x0006b592) list_medium_line_plain_t1

0x613c,	// (0x0006b5a0) list_medium_line_t2_g2_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t2_g2_g1

0x6148,	// (0x0006b5ac) list_medium_line_t2_g2_g2_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00074e83) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00074e83) list_medium_line_t2_g2_g

0x6154,	// (0x0006b5b8) list_medium_line_t2_g2_t1_ParamLimits

0x6154,	// (0x0006b5b8) list_medium_line_t2_g2_t1

0x616e,	// (0x0006b5d2) list_medium_line_t2_g2_t2_ParamLimits

0x616e,	// (0x0006b5d2) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00074e88) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00074e88) list_medium_line_t2_g2_t

0x637c,	// (0x0006b7e0) aid_sp_fs_list_icon_a_sm

0xcd34,	// (0x00072198) aid_sp_fs_list_icon_d

0x3627,	// (0x00068a8b) aid_sp_fs_text_primary

0x6384,	// (0x0006b7e8) aid_sp_fs_text_secondary

0x638d,	// (0x0006b7f1) list_medium_line

0x638d,	// (0x0006b7f1) list_medium_line_g2

0x638d,	// (0x0006b7f1) list_medium_line_g3

0x638d,	// (0x0006b7f1) list_medium_line_plain

0x638d,	// (0x0006b7f1) list_medium_line_plain_t2

0x638d,	// (0x0006b7f1) list_medium_line_plain_t3

0x638d,	// (0x0006b7f1) list_medium_line_right_icon

0x638d,	// (0x0006b7f1) list_medium_line_right_iconx2

0x638d,	// (0x0006b7f1) list_medium_line_t2

0x638d,	// (0x0006b7f1) list_medium_line_t2_g2

0x638d,	// (0x0006b7f1) list_medium_line_t2_g3

0x638d,	// (0x0006b7f1) list_medium_line_t2_right_icon

0x638d,	// (0x0006b7f1) list_medium_line_t2_right_iconx2

0x638d,	// (0x0006b7f1) list_medium_line_t3

0x638d,	// (0x0006b7f1) list_medium_line_t3_g2

0x638d,	// (0x0006b7f1) list_medium_line_t3_g3

0x638d,	// (0x0006b7f1) list_medium_line_t3_right_iconx2

0x6396,	// (0x0006b7fa) list_medium_line_t4_g4

0xe8f3,	// (0x00073d57) list_medium_line_x2

0xe8f3,	// (0x00073d57) list_medium_line_x2_t2_g2

0xe8f3,	// (0x00073d57) list_medium_line_x2_t2_g3

0xe8f3,	// (0x00073d57) list_medium_line_x2_t2_g4

0xe8f3,	// (0x00073d57) list_medium_line_x2_t3

0xe8f3,	// (0x00073d57) list_medium_line_x2_t3_g2

0xe8f3,	// (0x00073d57) list_medium_line_x2_t3_g3

0xe8f3,	// (0x00073d57) list_medium_line_x2_t3_g4

0xe8f3,	// (0x00073d57) list_medium_line_x2_t4_g2

0xe8f3,	// (0x00073d57) list_medium_line_x2_t4_g4

0x639f,	// (0x0006b803) list_medium_line_x3

0x639f,	// (0x0006b803) list_medium_line_x3_t4

0x639f,	// (0x0006b803) list_medium_line_x3_t4_g4

0x6396,	// (0x0006b7fa) list_medium_line_x4_t4

0x6396,	// (0x0006b7fa) list_medium_line_x4_t4_g7

0x6396,	// (0x0006b7fa) list_medium_line_x4_t5

0x63a8,	// (0x0006b80c) list_single_fs_dyc_pane_ParamLimits

0x63a8,	// (0x0006b80c) list_single_fs_dyc_pane

0x5cda,	// (0x0006b13e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x4_t4_g7_g1

0x63bc,	// (0x0006b820) list_medium_line_x4_t4_g7_g2_ParamLimits

0x63bc,	// (0x0006b820) list_medium_line_x4_t4_g7_g2

0x63c8,	// (0x0006b82c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x63c8,	// (0x0006b82c) list_medium_line_x4_t4_g7_g3

0x63d7,	// (0x0006b83b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x63d7,	// (0x0006b83b) list_medium_line_x4_t4_g7_g4

0x63e3,	// (0x0006b847) list_medium_line_x4_t4_g7_g5_ParamLimits

0x63e3,	// (0x0006b847) list_medium_line_x4_t4_g7_g5

0x63f2,	// (0x0006b856) list_medium_line_x4_t4_g7_g6_ParamLimits

0x63f2,	// (0x0006b856) list_medium_line_x4_t4_g7_g6

0x6401,	// (0x0006b865) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6401,	// (0x0006b865) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00075053) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00075053) list_medium_line_x4_t4_g7_g

0x640d,	// (0x0006b871) list_medium_line_x4_t4_g7_t1_ParamLimits

0x640d,	// (0x0006b871) list_medium_line_x4_t4_g7_t1

0x6422,	// (0x0006b886) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6422,	// (0x0006b886) list_medium_line_x4_t4_g7_t2

0x6437,	// (0x0006b89b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6437,	// (0x0006b89b) list_medium_line_x4_t4_g7_t3

0x644c,	// (0x0006b8b0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x644c,	// (0x0006b8b0) list_medium_line_x4_t4_g7_t4

0x645e,	// (0x0006b8c2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x645e,	// (0x0006b8c2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00075062) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00075062) list_medium_line_x4_t4_g7_t

0x6470,	// (0x0006b8d4) list_single_dyc_row_pane_ParamLimits

0x6470,	// (0x0006b8d4) list_single_dyc_row_pane

0xdb5b,	// (0x00072fbf) call5_gesture_pane_ParamLimits

0xdb5b,	// (0x00072fbf) call5_gesture_pane

0xdb8f,	// (0x00072ff3) call5_windows_pane_ParamLimits

0xdb8f,	// (0x00072ff3) call5_windows_pane

0xdc01,	// (0x00073065) call5_swipe_1_pane_cp_ParamLimits

0xdc01,	// (0x00073065) call5_swipe_1_pane_cp

0xdc0d,	// (0x00073071) call5_swipe_2_pane_cp_ParamLimits

0xdc0d,	// (0x00073071) call5_swipe_2_pane_cp

0x0bbf,	// (0x00066023) call5_image_pane_cp

0xdc19,	// (0x0007307d) popup_call5_audio_first_window_cp_ParamLimits

0xdc19,	// (0x0007307d) popup_call5_audio_first_window_cp

0x4d92,	// (0x0006a1f6) call5_swipe_1_pane_g1_cp_ParamLimits

0x4d92,	// (0x0006a1f6) call5_swipe_1_pane_g1_cp

0x4dd2,	// (0x0006a236) call5_swipe_1_pane_g2_cp

0x4dab,	// (0x0006a20f) call5_swipe_1_pane_t1_cp_ParamLimits

0x4dab,	// (0x0006a20f) call5_swipe_1_pane_t1_cp

0x4d92,	// (0x0006a1f6) call5_swipe_2_pane_g1_cp_ParamLimits

0x4d92,	// (0x0006a1f6) call5_swipe_2_pane_g1_cp

0x4dda,	// (0x0006a23e) call5_swipe_2_pane_g2_cp

0x4de2,	// (0x0006a246) call5_swipe_2_pane_t1_cp_ParamLimits

0x4de2,	// (0x0006a246) call5_swipe_2_pane_t1_cp

0xe953,	// (0x00073db7) main_sp_fs_email_pane

0x4df7,	// (0x0006a25b) main_sp_fs_listscroll_pane_te

0x64e2,	// (0x0006b946) popup_sp_fs_action_menu_pane_ParamLimits

0x64e2,	// (0x0006b946) popup_sp_fs_action_menu_pane

0x2530,	// (0x00067994) bg_sp_fs_ctrlbar_pane_g1

0x4e00,	// (0x0006a264) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4e09,	// (0x0006a26d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4e12,	// (0x0006a276) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2530,	// (0x00067994) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0007514b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2313,	// (0x00067777) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2313,	// (0x00067777) bg_sp_fs_ctrlbar_ddmenu_pane

0x4e1b,	// (0x0006a27f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4e1b,	// (0x0006a27f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4e27,	// (0x0006a28b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4e27,	// (0x0006a28b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00075154) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00075154) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4e33,	// (0x0006a297) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4e33,	// (0x0006a297) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6524,	// (0x0006b988) list_medium_line_t2_right_icon_g1

0x652c,	// (0x0006b990) list_medium_line_t2_right_icon_t1

0x653c,	// (0x0006b9a0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00075159) list_medium_line_t2_right_icon_t

0x2028,	// (0x0006748c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2028,	// (0x0006748c) bg_sp_fs_ctrlbar_pane

0xdc7c,	// (0x000730e0) main_sp_fs_ctrlbar_button_pane_cp01

0xdc84,	// (0x000730e8) main_sp_fs_ctrlbar_ddmenu_pane

0x2da7,	// (0x0006820b) main_sp_fs_ctrlbar_pane_g1

0x4e85,	// (0x0006a2e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0007515e) main_sp_fs_ctrlbar_pane_g

0x4e91,	// (0x0006a2f5) main_sp_fs_ctrlbar_pane_t1

0x654a,	// (0x0006b9ae) main_sp_fs_ctrlbar_pane

0x6566,	// (0x0006b9ca) main_sp_fs_listscroll_pane_te_cp01

0x6577,	// (0x0006b9db) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6577,	// (0x0006b9db) popup_sp_fs_action_menu_pane_cp01

0xe953,	// (0x00073db7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe953,	// (0x00073db7) bg_sp_fs_highlight_list_pane_cp01

0x658f,	// (0x0006b9f3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x658f,	// (0x0006b9f3) sp_fs_action_menu_list_gene_pane_g1

0x4ea6,	// (0x0006a30a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4ea6,	// (0x0006a30a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00075163) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00075163) sp_fs_action_menu_list_gene_pane_g

0x659e,	// (0x0006ba02) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x659e,	// (0x0006ba02) sp_fs_action_menu_list_gene_pane_t1

0x65b6,	// (0x0006ba1a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x65b6,	// (0x0006ba1a) sp_fs_action_menu_list_gene_pane

0x4eb3,	// (0x0006a317) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4eb3,	// (0x0006a317) popup_sp_fs_action_menu_bg_pane

0x65d5,	// (0x0006ba39) sp_fs_action_menu_list_pane_ParamLimits

0x65d5,	// (0x0006ba39) sp_fs_action_menu_list_pane

0x4ec1,	// (0x0006a325) sp_fs_scroll_pane_cp01_ParamLimits

0x4ec1,	// (0x0006a325) sp_fs_scroll_pane_cp01

0x65f5,	// (0x0006ba59) list_medium_line_plain_t2_t1

0x6605,	// (0x0006ba69) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00075168) list_medium_line_plain_t2_t

0x6613,	// (0x0006ba77) list_medium_line_plain_t3_t1

0x6623,	// (0x0006ba87) list_medium_line_plain_t3_t2

0x6631,	// (0x0006ba95) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0007516d) list_medium_line_plain_t3_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t2_g2_g1

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000746ce) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000746ce) list_medium_line_x2_t2_g2_g

0x5ea2,	// (0x0006b306) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5ea2,	// (0x0006b306) list_medium_line_x2_t2_g2_t1

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00075174) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00075174) list_medium_line_x2_t2_g2_t

0x5cda,	// (0x0006b13e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t4_g2_g1

0x663f,	// (0x0006baa3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x663f,	// (0x0006baa3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00075179) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00075179) list_medium_line_x2_t4_g2_g

0x6651,	// (0x0006bab5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6651,	// (0x0006bab5) list_medium_line_x2_t4_g2_t1

0x6668,	// (0x0006bacc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6668,	// (0x0006bacc) list_medium_line_x2_t4_g2_t2

0x667d,	// (0x0006bae1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x667d,	// (0x0006bae1) list_medium_line_x2_t4_g2_t3

0x5d25,	// (0x0006b189) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0007517e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0007517e) list_medium_line_x2_t4_g2_t

0x668f,	// (0x0006baf3) list_medium_line_t3_right_iconx2_g1

0x6524,	// (0x0006b988) list_medium_line_t3_right_iconx2_g2

0x6697,	// (0x0006bafb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00075187) list_medium_line_t3_right_iconx2_g

0x669f,	// (0x0006bb03) list_medium_line_t3_right_iconx2_t1

0x66af,	// (0x0006bb13) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0007518e) list_medium_line_t3_right_iconx2_t

0x5cda,	// (0x0006b13e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x3_t4_g4_g1

0x5ce6,	// (0x0006b14a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x3_t4_g4_g2

0x5d8c,	// (0x0006b1f0) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5d8c,	// (0x0006b1f0) list_medium_line_x3_t4_g4_g3

0x66bd,	// (0x0006bb21) list_medium_line_x3_t4_g4_g4_ParamLimits

0x66bd,	// (0x0006bb21) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00075193) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00075193) list_medium_line_x3_t4_g4_g

0x66c9,	// (0x0006bb2d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x66c9,	// (0x0006bb2d) list_medium_line_x3_t4_g4_t1

0x66e0,	// (0x0006bb44) list_medium_line_x3_t4_g4_t2_ParamLimits

0x66e0,	// (0x0006bb44) list_medium_line_x3_t4_g4_t2

0x66f5,	// (0x0006bb59) list_medium_line_x3_t4_g4_t3_ParamLimits

0x66f5,	// (0x0006bb59) list_medium_line_x3_t4_g4_t3

0x670a,	// (0x0006bb6e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x670a,	// (0x0006bb6e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0007519c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0007519c) list_medium_line_x3_t4_g4_t

0x6727,	// (0x0006bb8b) list_single_dyc_row_text_pane_t1_ParamLimits

0x6727,	// (0x0006bb8b) list_single_dyc_row_text_pane_t1

0x675e,	// (0x0006bbc2) list_single_dyc_row_text_pane_t2_ParamLimits

0x675e,	// (0x0006bbc2) list_single_dyc_row_text_pane_t2

0x67b8,	// (0x0006bc1c) list_single_dyc_row_text_pane_t3_ParamLimits

0x67b8,	// (0x0006bc1c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x000751a5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x000751a5) list_single_dyc_row_text_pane_t

0x67ca,	// (0x0006bc2e) list_single_dyc_row_pane_g1_ParamLimits

0x67ca,	// (0x0006bc2e) list_single_dyc_row_pane_g1

0x67d6,	// (0x0006bc3a) list_single_dyc_row_pane_g2_ParamLimits

0x67d6,	// (0x0006bc3a) list_single_dyc_row_pane_g2

0x67e2,	// (0x0006bc46) list_single_dyc_row_pane_g3_ParamLimits

0x67e2,	// (0x0006bc46) list_single_dyc_row_pane_g3

0x67ee,	// (0x0006bc52) list_single_dyc_row_pane_g4_ParamLimits

0x67ee,	// (0x0006bc52) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x000751ac) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x000751ac) list_single_dyc_row_pane_g

0x67fa,	// (0x0006bc5e) list_single_dyc_row_text_pane_ParamLimits

0x67fa,	// (0x0006bc5e) list_single_dyc_row_text_pane

0x6dda,	// (0x0006c23e) bg_sp_fs_scroll_pane

0x4ee7,	// (0x0006a34b) thumb_sp_fs_scroll_pane

0x613c,	// (0x0006b5a0) list_medium_line_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_g1

0x6819,	// (0x0006bc7d) list_medium_line_t1_ParamLimits

0x6819,	// (0x0006bc7d) list_medium_line_t1

0x5cda,	// (0x0006b13e) list_medium_line_x2_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_g1

0x5ce6,	// (0x0006b14a) list_medium_line_x2_g2_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x000751b5) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x000751b5) list_medium_line_x2_g

0x682e,	// (0x0006bc92) list_medium_line_x2_t1_ParamLimits

0x682e,	// (0x0006bc92) list_medium_line_x2_t1

0x5cda,	// (0x0006b13e) list_medium_line_x3_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x3_g1

0x5ce6,	// (0x0006b14a) list_medium_line_x3_g2_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x000751b5) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x000751b5) list_medium_line_x3_g

0x682e,	// (0x0006bc92) list_medium_line_x3_t1_ParamLimits

0x682e,	// (0x0006bc92) list_medium_line_x3_t1

0x4ef0,	// (0x0006a354) thumb_sp_fs_scroll_pane_g1

0x4ef9,	// (0x0006a35d) thumb_sp_fs_scroll_pane_g2

0x4f02,	// (0x0006a366) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000751ba) thumb_sp_fs_scroll_pane_g

0x4ef0,	// (0x0006a354) bg_sp_fs_scroll_pane_g1

0x4ef9,	// (0x0006a35d) bg_sp_fs_scroll_pane_g2

0x4f02,	// (0x0006a366) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000751ba) bg_sp_fs_scroll_pane_g

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5cda,	// (0x0006b13e) list_medium_line_x2_t3_g4_g1

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5d80,	// (0x0006b1e4) list_medium_line_x2_t3_g4_g2

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5ce6,	// (0x0006b14a) list_medium_line_x2_t3_g4_g3

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5cf2,	// (0x0006b156) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0007474a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0007474a) list_medium_line_x2_t3_g4_g

0x6844,	// (0x0006bca8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6844,	// (0x0006bca8) list_medium_line_x2_t3_g4_t1

0x685a,	// (0x0006bcbe) list_medium_line_x2_t3_g4_t2_ParamLimits

0x685a,	// (0x0006bcbe) list_medium_line_x2_t3_g4_t2

0x5d25,	// (0x0006b189) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5d25,	// (0x0006b189) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x000751c1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x000751c1) list_medium_line_x2_t3_g4_t

0x613c,	// (0x0006b5a0) list_medium_line_g2_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_g2_g1

0x6148,	// (0x0006b5ac) list_medium_line_g2_g2_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00074e83) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00074e83) list_medium_line_g2_g

0x6873,	// (0x0006bcd7) list_medium_line_g2_t1_ParamLimits

0x6873,	// (0x0006bcd7) list_medium_line_g2_t1

0x613c,	// (0x0006b5a0) list_medium_line_t3_g2_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t3_g2_g1

0x6148,	// (0x0006b5ac) list_medium_line_t3_g2_g2_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00074e83) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00074e83) list_medium_line_t3_g2_g

0x6888,	// (0x0006bcec) list_medium_line_t3_g2_t1_ParamLimits

0x6888,	// (0x0006bcec) list_medium_line_t3_g2_t1

0x68a2,	// (0x0006bd06) list_medium_line_t3_g2_t2_ParamLimits

0x68a2,	// (0x0006bd06) list_medium_line_t3_g2_t2

0x68b7,	// (0x0006bd1b) list_medium_line_t3_g2_t3_ParamLimits

0x68b7,	// (0x0006bd1b) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x000751c8) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x000751c8) list_medium_line_t3_g2_t

0x6524,	// (0x0006b988) list_medium_line_right_icon_g1

0x68cd,	// (0x0006bd31) list_medium_line_right_icon_t1

0x613c,	// (0x0006b5a0) list_medium_line_t2_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t2_g1

0x68db,	// (0x0006bd3f) list_medium_line_t2_t1_ParamLimits

0x68db,	// (0x0006bd3f) list_medium_line_t2_t1

0x68f5,	// (0x0006bd59) list_medium_line_t2_t2_ParamLimits

0x68f5,	// (0x0006bd59) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x000751cf) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x000751cf) list_medium_line_t2_t

0x613c,	// (0x0006b5a0) list_medium_line_t3_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t3_g1

0x690a,	// (0x0006bd6e) list_medium_line_t3_t1_ParamLimits

0x690a,	// (0x0006bd6e) list_medium_line_t3_t1

0x6921,	// (0x0006bd85) list_medium_line_t3_t2_ParamLimits

0x6921,	// (0x0006bd85) list_medium_line_t3_t2

0x6936,	// (0x0006bd9a) list_medium_line_t3_t3_ParamLimits

0x6936,	// (0x0006bd9a) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x000751d4) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x000751d4) list_medium_line_t3_t

0x613c,	// (0x0006b5a0) list_medium_line_g3_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_g3_g1

0x6948,	// (0x0006bdac) list_medium_line_g3_g2_ParamLimits

0x6948,	// (0x0006bdac) list_medium_line_g3_g2

0x6148,	// (0x0006b5ac) list_medium_line_g3_g3_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x000751db) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x000751db) list_medium_line_g3_g

0x6954,	// (0x0006bdb8) list_medium_line_g3_t1_ParamLimits

0x6954,	// (0x0006bdb8) list_medium_line_g3_t1

0x613c,	// (0x0006b5a0) list_medium_line_t2_g3_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t2_g3_g1

0x6948,	// (0x0006bdac) list_medium_line_t2_g3_g2_ParamLimits

0x6948,	// (0x0006bdac) list_medium_line_t2_g3_g2

0x6148,	// (0x0006b5ac) list_medium_line_t2_g3_g3_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x000751db) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x000751db) list_medium_line_t2_g3_g

0x6969,	// (0x0006bdcd) list_medium_line_t2_g3_t1_ParamLimits

0x6969,	// (0x0006bdcd) list_medium_line_t2_g3_t1

0x6980,	// (0x0006bde4) list_medium_line_t2_g3_t2_ParamLimits

0x6980,	// (0x0006bde4) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x000751e2) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x000751e2) list_medium_line_t2_g3_t

0x613c,	// (0x0006b5a0) list_medium_line_t3_g3_g1_ParamLimits

0x613c,	// (0x0006b5a0) list_medium_line_t3_g3_g1

0x6948,	// (0x0006bdac) list_medium_line_t3_g3_g2_ParamLimits

0x6948,	// (0x0006bdac) list_medium_line_t3_g3_g2

0x6148,	// (0x0006b5ac) list_medium_line_t3_g3_g3_ParamLimits

0x6148,	// (0x0006b5ac) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x000751db) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x000751db) list_medium_line_t3_g3_g

0x6995,	// (0x0006bdf9) list_medium_line_t3_g3_t1_ParamLimits

0x6995,	// (0x0006bdf9) list_medium_line_t3_g3_t1

0x69a9,	// (0x0006be0d) list_medium_line_t3_g3_t2_ParamLimits

0x69a9,	// (0x0006be0d) list_medium_line_t3_g3_t2

0x69bb,	// (0x0006be1f) list_medium_line_t3_g3_t3_ParamLimits

0x69bb,	// (0x0006be1f) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x000751e7) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x000751e7) list_medium_line_t3_g3_t

0x668f,	// (0x0006baf3) list_medium_line_right_iconx2_g1

0x6524,	// (0x0006b988) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000751ee) list_medium_line_right_iconx2_g

0x69cd,	// (0x0006be31) list_medium_line_right_iconx2_t1

0x668f,	// (0x0006baf3) list_medium_line_t2_right_iconx2_g1

0x6524,	// (0x0006b988) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000751ee) list_medium_line_t2_right_iconx2_g

0x69db,	// (0x0006be3f) list_medium_line_t2_right_iconx2_t1

0x69eb,	// (0x0006be4f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x000751f3) list_medium_line_t2_right_iconx2_t

0x69f9,	// (0x0006be5d) list_medium_line_x4_t4_t1

0x6a07,	// (0x0006be6b) list_medium_line_x4_t4_t2

0x6a17,	// (0x0006be7b) list_medium_line_x4_t4_t3

0x6a27,	// (0x0006be8b) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x000751f8) list_medium_line_x4_t4_t

0xdcb7,	// (0x0007311b) tport_appsw_pane_ParamLimits

0xdcb7,	// (0x0007311b) tport_appsw_pane

0xdcc3,	// (0x00073127) tport_contact_pane_ParamLimits

0xdcc3,	// (0x00073127) tport_contact_pane

0xdcd3,	// (0x00073137) tport_listscroll_pane_ParamLimits

0xdcd3,	// (0x00073137) tport_listscroll_pane

0xdce3,	// (0x00073147) cell_tport_appsw_pane_ParamLimits

0xdce3,	// (0x00073147) cell_tport_appsw_pane

0x27fc,	// (0x00067c60) tport_appsw_pane_g1_ParamLimits

0x27fc,	// (0x00067c60) tport_appsw_pane_g1

0x2f44,	// (0x000683a8) tport_contact_pane_g1

0x2f4d,	// (0x000683b1) tport_contact_pane_t1

0x2f5b,	// (0x000683bf) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00075201) tport_contact_pane_t

0x2f69,	// (0x000683cd) list_tport_pane

0x2f72,	// (0x000683d6) scroll_pane_cp_030

0x2f83,	// (0x000683e7) cell_tport_appsw_pane_g1

0x2f93,	// (0x000683f7) cell_tport_appsw_pane_t1

0x6dda,	// (0x0006c23e) grid_highlight_pane_cp019

0xdd0e,	// (0x00073172) list_tport_double_graphic_pane_ParamLimits

0xdd0e,	// (0x00073172) list_tport_double_graphic_pane

0xe953,	// (0x00073db7) list_highlight_pane_cp023_ParamLimits

0xe953,	// (0x00073db7) list_highlight_pane_cp023

0xdd21,	// (0x00073185) list_tport_double_graphic_pane_g1_ParamLimits

0xdd21,	// (0x00073185) list_tport_double_graphic_pane_g1

0xdd2e,	// (0x00073192) list_tport_double_graphic_pane_t1_ParamLimits

0xdd2e,	// (0x00073192) list_tport_double_graphic_pane_t1

0xdd43,	// (0x000731a7) list_tport_double_graphic_pane_t2_ParamLimits

0xdd43,	// (0x000731a7) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0007520d) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0007520d) list_tport_double_graphic_pane_t

0x6dda,	// (0x0006c23e) main_cale_note_pane

0xc05d,	// (0x000714c1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc05d,	// (0x000714c1) cell_vitu2_function_top_wide_pane_cp01

0xd738,	// (0x00072b9c) wait_bar_pane_cp05_ParamLimits

0x6dda,	// (0x0006c23e) listscroll_cmail_pane

0x2fa9,	// (0x0006840d) list_cmail_pane

0xdd5f,	// (0x000731c3) list_cmail_body_pane

0xdd83,	// (0x000731e7) list_single_cmail_header_caption_pane

0xddb1,	// (0x00073215) list_single_cmail_header_detail_pane_ParamLimits

0xddb1,	// (0x00073215) list_single_cmail_header_detail_pane

0xdde9,	// (0x0007324d) list_single_cmail_header_caption_pane_t1

0x6a37,	// (0x0006be9b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6a37,	// (0x0006be9b) list_single_cmail_header_detail_pane_g1

0xddf9,	// (0x0007325d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xddf9,	// (0x0007325d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00075212) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00075212) list_single_cmail_header_detail_pane_g

0x6a4f,	// (0x0006beb3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6a4f,	// (0x0006beb3) list_single_cmail_header_detail_pane_t1

0x6aa7,	// (0x0006bf0b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6aa7,	// (0x0006bf0b) list_single_cmail_header_editor_pane_bg

0x3026,	// (0x0006848a) list_cmail_body_pane_g1

0x302f,	// (0x00068493) list_cmail_body_pane_t1

0x3f69,	// (0x000693cd) list_single_cmail_header_editor_pane_bg_g1

0x04ac,	// (0x00065910) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f79,	// (0x000693dd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3f71,	// (0x000693d5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x418d,	// (0x000695f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f99,	// (0x000693fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f89,	// (0x000693ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f91,	// (0x000693f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x048c,	// (0x000658f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xde05,	// (0x00073269) calenote_gesture_pane_ParamLimits

0xde05,	// (0x00073269) calenote_gesture_pane

0xde1f,	// (0x00073283) calenote_window_pane_ParamLimits

0xde1f,	// (0x00073283) calenote_window_pane

0x303d,	// (0x000684a1) popup_note_window_cp01

0xde37,	// (0x0007329b) calenote_swipe_1_pane_ParamLimits

0xde37,	// (0x0007329b) calenote_swipe_1_pane

0xdc0d,	// (0x00073071) calenote_swipe_2_pane_ParamLimits

0xdc0d,	// (0x00073071) calenote_swipe_2_pane

0x4d92,	// (0x0006a1f6) calenote_swipe_1_pane_g1_ParamLimits

0x4d92,	// (0x0006a1f6) calenote_swipe_1_pane_g1

0x4d9f,	// (0x0006a203) calenote_swipe_1_pane_g2_ParamLimits

0x4d9f,	// (0x0006a203) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00075141) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00075141) calenote_swipe_1_pane_g

0x304f,	// (0x000684b3) calenote_swipe_1_pane_t1_ParamLimits

0x304f,	// (0x000684b3) calenote_swipe_1_pane_t1

0x4d92,	// (0x0006a1f6) calenote_swipe_2_pane_g1_ParamLimits

0x4d92,	// (0x0006a1f6) calenote_swipe_2_pane_g1

0x306e,	// (0x000684d2) calenote_swipe_2_pane_g2_ParamLimits

0x306e,	// (0x000684d2) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0007521e) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0007521e) calenote_swipe_2_pane_g

0x307a,	// (0x000684de) calenote_swipe_2_pane_t1_ParamLimits

0x307a,	// (0x000684de) calenote_swipe_2_pane_t1

0x6dda,	// (0x0006c23e) main_mup_navstr_pane

0xadfb,	// (0x0007025f) main_mup3_pane_t7_ParamLimits

0xadfb,	// (0x0007025f) main_mup3_pane_t7

0xb7ff,	// (0x00070c63) main_mp4_pane_g6_ParamLimits

0xb7ff,	// (0x00070c63) main_mp4_pane_g6

0xbb73,	// (0x00070fd7) main_image3_pane_t4_ParamLimits

0xbb73,	// (0x00070fd7) main_image3_pane_t4

0xde4a,	// (0x000732ae) popup_navstr_preview_pane_ParamLimits

0xde4a,	// (0x000732ae) popup_navstr_preview_pane

0xde56,	// (0x000732ba) scroll_navstr_pane_ParamLimits

0xde56,	// (0x000732ba) scroll_navstr_pane

0x6dda,	// (0x0006c23e) bg_popup_preview_window_pane_cp04

0x30a1,	// (0x00068505) popup_navstr_preview_pane_t1

0xde62,	// (0x000732c6) scroll_navstr_pane_g1_ParamLimits

0xde62,	// (0x000732c6) scroll_navstr_pane_g1

0xde6f,	// (0x000732d3) scroll_navstr_pane_t1_ParamLimits

0xde6f,	// (0x000732d3) scroll_navstr_pane_t1

0x3046,	// (0x000684aa) bg_button_pane_cp014

0x3046,	// (0x000684aa) bg_button_pane_cp030

0x6499,	// (0x0006b8fd) list_double_fisheye_pane_g4_ParamLimits

0x6499,	// (0x0006b8fd) list_double_fisheye_pane_g4

0xdb4a,	// (0x00072fae) list_double_fisheye_pane_g5_ParamLimits

0xdb4a,	// (0x00072fae) list_double_fisheye_pane_g5

0x2fb1,	// (0x00068415) sp_fs_scroll_pane_cp03

0x2da7,	// (0x0006820b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4e85,	// (0x0006a2e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0007515e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4e91,	// (0x0006a2f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdd55,	// (0x000731b9) sp_fs_scroll_pane_cp02

0x0138,	// (0x0006559c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0138,	// (0x0006559c) popup_sp_fs_calendar_preview_list_single_pane

0x6dda,	// (0x0006c23e) main_cam6_pano_pane

0xe953,	// (0x00073db7) main_mup3_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_phacti_pane

0xd60d,	// (0x00072a71) bg_button_pane_cp11

0xd625,	// (0x00072a89) main_mobtv_info_pane_g2_ParamLimits

0xd625,	// (0x00072a89) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000750be) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000750be) main_mobtv_info_pane_g

0xd7d7,	// (0x00072c3b) sc_clock_pane_t5_ParamLimits

0xd7d7,	// (0x00072c3b) sc_clock_pane_t5

0xd9b9,	// (0x00072e1d) main_radioblah_pane_g1_ParamLimits

0x4cde,	// (0x0006a142) main_radioblah_pane_t3_ParamLimits

0x4cde,	// (0x0006a142) main_radioblah_pane_t3

0x4cf6,	// (0x0006a15a) main_radioblah_pane_t4_ParamLimits

0x4cf6,	// (0x0006a15a) main_radioblah_pane_t4

0xd9d7,	// (0x00072e3b) main_radioblah_text_pane_ParamLimits

0xd9d7,	// (0x00072e3b) main_radioblah_text_pane

0xd9e4,	// (0x00072e48) main_radioblah_info_pane_g1_ParamLimits

0xda79,	// (0x00072edd) main_radioblah_info_pane_t4_ParamLimits

0xda79,	// (0x00072edd) main_radioblah_info_pane_t4

0xe953,	// (0x00073db7) main_sp_fs_calendar_pane

0xde81,	// (0x000732e5) main_phacti_pane_g1

0xde89,	// (0x000732ed) phacti_note_pane_ParamLimits

0xde89,	// (0x000732ed) phacti_note_pane

0x30b8,	// (0x0006851c) phacti_term_pane_ParamLimits

0x30b8,	// (0x0006851c) phacti_term_pane

0x30cd,	// (0x00068531) phacti_note_pane_t1_ParamLimits

0x30cd,	// (0x00068531) phacti_note_pane_t1

0x6ab9,	// (0x0006bf1d) phacti_term_pane_g1

0x6ac1,	// (0x0006bf25) phacti_term_pane_t1_ParamLimits

0x6ac1,	// (0x0006bf25) phacti_term_pane_t1

0x3116,	// (0x0006857a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x311e,	// (0x00068582) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00075228) popup_sp_fs_calendar_preview_list_single_pane_g

0x3126,	// (0x0006858a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3126,	// (0x0006858a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x313c,	// (0x000685a0) aid_popup_sp_fs_bg_corner_pane

0x2530,	// (0x00067994) popup_sp_fs_calendar_preview_bg_pane_g1

0x6dda,	// (0x0006c23e) popup_sp_fs_calendar_preview_bg_pane

0x3144,	// (0x000685a8) popup_sp_fs_calendar_preview_list_pane

0xe953,	// (0x00073db7) bg_main_sp_fs_cale_pane_ParamLimits

0xe953,	// (0x00073db7) bg_main_sp_fs_cale_pane

0x6aeb,	// (0x0006bf4f) listscroll_cale_mrui_pane_ParamLimits

0x6aeb,	// (0x0006bf4f) listscroll_cale_mrui_pane

0x6aff,	// (0x0006bf63) listscroll_sp_fs_schedule_track_pane

0x6b08,	// (0x0006bf6c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6b08,	// (0x0006bf6c) main_sp_fs_ctrlbar_pane_cp01

0x317a,	// (0x000685de) main_sp_fs_ribbon_pane

0x3182,	// (0x000685e6) popup_sp_fs_cale_preview_window

0xdecc,	// (0x00073330) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdecc,	// (0x00073330) list_single_sp_fs_schedule_track_pane

0x706b,	// (0x0006c4cf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x706b,	// (0x0006c4cf) bg_sp_fs_highlight_list_pane_cp03

0xdeee,	// (0x00073352) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdeee,	// (0x00073352) list_single_sp_fs_schedule_track_pane_g1

0xdefa,	// (0x0007335e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdefa,	// (0x0007335e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0007522d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0007522d) list_single_sp_fs_schedule_track_pane_g

0xdf06,	// (0x0007336a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdf06,	// (0x0007336a) list_single_sp_fs_schedule_track_pane_t1

0xdf1e,	// (0x00073382) sp_fs_schedule_track_pane_ParamLimits

0xdf1e,	// (0x00073382) sp_fs_schedule_track_pane

0x3194,	// (0x000685f8) sp_fs_schedule_track_pane_g1

0x319c,	// (0x00068600) sp_fs_schedule_track_pane_g2

0x31a4,	// (0x00068608) sp_fs_schedule_track_pane_g3

0x31ac,	// (0x00068610) sp_fs_schedule_track_pane_g4

0x31b4,	// (0x00068618) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00075232) sp_fs_schedule_track_pane_g

0x3f69,	// (0x000693cd) bg_sp_fs_schedule_viewer_highlight_g1

0x04ac,	// (0x00065910) bg_sp_fs_schedule_viewer_highlight_g2

0x3f71,	// (0x000693d5) bg_sp_fs_schedule_viewer_highlight_g3

0x3f79,	// (0x000693dd) bg_sp_fs_schedule_viewer_highlight_g4

0x418d,	// (0x000695f1) bg_sp_fs_schedule_viewer_highlight_g5

0x3f89,	// (0x000693ed) bg_sp_fs_schedule_viewer_highlight_g6

0x3f91,	// (0x000693f5) bg_sp_fs_schedule_viewer_highlight_g7

0x3f99,	// (0x000693fd) bg_sp_fs_schedule_viewer_highlight_g8

0x048c,	// (0x000658f0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0007523d) bg_sp_fs_schedule_viewer_highlight_g

0x6dda,	// (0x0006c23e) bg_main_sp_fs_ribbon_pane

0xdf2e,	// (0x00073392) main_sp_fs_ribbon_pane_g1

0x31bc,	// (0x00068620) main_sp_fs_ribbon_pane_t1

0xdf37,	// (0x0007339b) main_sp_fs_ribbon_pane_t2

0x31cb,	// (0x0006862f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00075250) main_sp_fs_ribbon_pane_t

0x31da,	// (0x0006863e) main_sp_fs_ribbon_scheduler_pane

0x31e2,	// (0x00068646) bg_main_sp_fs_ribbon_pane_g1

0x31eb,	// (0x0006864f) bg_main_sp_fs_ribbon_pane_g2

0x31f4,	// (0x00068658) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00075257) bg_main_sp_fs_ribbon_pane_g

0x31fc,	// (0x00068660) main_sp_fs_ribbon_scheduler_pane_g1

0x3205,	// (0x00068669) main_sp_fs_ribbon_scheduler_pane_g2

0x320e,	// (0x00068672) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0007525e) main_sp_fs_ribbon_scheduler_pane_g

0x3217,	// (0x0006867b) list_cale_mrui_pane

0xdf46,	// (0x000733aa) sp_fs_scroll_pane_cp07_ParamLimits

0xdf46,	// (0x000733aa) sp_fs_scroll_pane_cp07

0xdf5c,	// (0x000733c0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdf5c,	// (0x000733c0) bg_sp_fs_schedule_viewer_highlight

0x3220,	// (0x00068684) list_single_sp_fs_schedule_track_pane_cp01

0x3228,	// (0x0006868c) list_sp_fs_schedule_track_pane

0x3230,	// (0x00068694) sp_fs_scroll_pane_cp06_ParamLimits

0x3230,	// (0x00068694) sp_fs_scroll_pane_cp06

0x2530,	// (0x00067994) bgmain_sp_fs_calendar_pane_g1

0x6b19,	// (0x0006bf7d) list_single_cale_mrui_pane_ParamLimits

0x6b19,	// (0x0006bf7d) list_single_cale_mrui_pane

0x6b45,	// (0x0006bfa9) list_single_cale_mrui_row_pane_ParamLimits

0x6b45,	// (0x0006bfa9) list_single_cale_mrui_row_pane

0x6b52,	// (0x0006bfb6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6b52,	// (0x0006bfb6) list_single_cale_mrui_row_pane_g1

0x6b8a,	// (0x0006bfee) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6b8a,	// (0x0006bfee) list_single_cale_mrui_row_pane_t1

0x6b9c,	// (0x0006c000) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6b9c,	// (0x0006c000) list_single_cale_mrui_row_pane_t2

0x6c02,	// (0x0006c066) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6c02,	// (0x0006c066) list_single_cale_mrui_row_pane_t3

0x6c31,	// (0x0006c095) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6c31,	// (0x0006c095) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0007526a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0007526a) list_single_cale_mrui_row_pane_t

0x6c60,	// (0x0006c0c4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6c60,	// (0x0006c0c4) list_single_cmail_header_editor_pane_bg_cp01

0x6c82,	// (0x0006c0e6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6c82,	// (0x0006c0e6) list_single_cmail_header_editor_pane_bg_cp02

0xdf69,	// (0x000733cd) main_radioblah_text_pane_t1_ParamLimits

0xdf69,	// (0x000733cd) main_radioblah_text_pane_t1

0x32f7,	// (0x0006875b) cam6_indi_pane_cp01

0x32ff,	// (0x00068763) cam6_mode_pane_cp01

0x3307,	// (0x0006876b) cam6_pano_pane

0x3310,	// (0x00068774) cam6_zoom_pane_cp01

0x3318,	// (0x0006877c) cam6_pano_image_pane

0x3323,	// (0x00068787) cam6_pano_pane_g1

0x4b78,	// (0x00069fdc) cam6_pano_pane_g2

0x332c,	// (0x00068790) cam6_pano_pane_g3

0x3335,	// (0x00068799) cam6_pano_pane_g4

0x2ab6,	// (0x00067f1a) cam6_pano_pane_g5

0x333e,	// (0x000687a2) cam6_pano_pane_g6

0x3348,	// (0x000687ac) cam6_pano_pane_g7

0x3350,	// (0x000687b4) cam6_pano_pane_g8

0x3359,	// (0x000687bd) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00075273) cam6_pano_pane_g

0x6dda,	// (0x0006c23e) main_browser_tag_pane

0x3099,	// (0x000684fd) grid_navstr_albumart_pane

0x3364,	// (0x000687c8) cell_navstr_albumart_pane_ParamLimits

0x3364,	// (0x000687c8) cell_navstr_albumart_pane

0x0d40,	// (0x000661a4) cell_navstr_albumart_pane_g1

0x1e3d,	// (0x000672a1) cell_navstr_albumart_pane_g2

0x1e4d,	// (0x000672b1) cell_navstr_albumart_pane_g3

0x1e45,	// (0x000672a9) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x00075286) cell_navstr_albumart_pane_g

0xdf86,	// (0x000733ea) bt_list_pane_ParamLimits

0xdf86,	// (0x000733ea) bt_list_pane

0xdfad,	// (0x00073411) bt_list_pane_t1

0xdfbc,	// (0x00073420) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0007528f) bt_list_pane_t

0x6dda,	// (0x0006c23e) main_cale_prevew_pane

0xdfcb,	// (0x0007342f) popup_cale_preview_window_ParamLimits

0xdfcb,	// (0x0007342f) popup_cale_preview_window

0xe953,	// (0x00073db7) bg_popup_preview_window_pane_cp05_ParamLimits

0xe953,	// (0x00073db7) bg_popup_preview_window_pane_cp05

0x3386,	// (0x000687ea) list_cale_preview_pane_ParamLimits

0x3386,	// (0x000687ea) list_cale_preview_pane

0xdfe2,	// (0x00073446) list_double_cale_preview_pane_ParamLimits

0xdfe2,	// (0x00073446) list_double_cale_preview_pane

0xdff4,	// (0x00073458) list_single_cale_preview_pane_ParamLimits

0xdff4,	// (0x00073458) list_single_cale_preview_pane

0xe008,	// (0x0007346c) list_single_cale_preview_pane_g1

0xe010,	// (0x00073474) list_single_cale_preview_pane_t1_ParamLimits

0xe010,	// (0x00073474) list_single_cale_preview_pane_t1

0xe025,	// (0x00073489) list_double_cale_preview_pane_g1

0xe02d,	// (0x00073491) list_double_cale_preview_pane_t1_ParamLimits

0xe02d,	// (0x00073491) list_double_cale_preview_pane_t1

0xe042,	// (0x000734a6) list_double_cale_preview_pane_t2_ParamLimits

0xe042,	// (0x000734a6) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x00075294) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x00075294) list_double_cale_preview_pane_t

0x6dda,	// (0x0006c23e) main_ezdial_pane

0xe953,	// (0x00073db7) main_sp_fs_email_pane_ParamLimits

0xdc25,	// (0x00073089) cmail_ddmenu_btn01_pane_ParamLimits

0xdc25,	// (0x00073089) cmail_ddmenu_btn01_pane

0xdc42,	// (0x000730a6) cmail_ddmenu_btn02_pane_ParamLimits

0xdc42,	// (0x000730a6) cmail_ddmenu_btn02_pane

0xdc60,	// (0x000730c4) cmail_ddmenu_btn03_pane_ParamLimits

0xdc60,	// (0x000730c4) cmail_ddmenu_btn03_pane

0x654a,	// (0x0006b9ae) main_sp_fs_ctrlbar_pane_ParamLimits

0x6566,	// (0x0006b9ca) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdd5f,	// (0x000731c3) list_cmail_body_pane_ParamLimits

0x2fc0,	// (0x00068424) bg_button_pane_cp12

0x2fd5,	// (0x00068439) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2fd5,	// (0x00068439) list_single_cmail_header_detail_pane_g3

0x6a81,	// (0x0006bee5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6a81,	// (0x0006bee5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00075219) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00075219) list_single_cmail_header_detail_pane_t

0x6ad6,	// (0x0006bf3a) phacti_term_pane_t2_ParamLimits

0x6ad6,	// (0x0006bf3a) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00075223) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00075223) phacti_term_pane_t

0x3392,	// (0x000687f6) aid_size_list_single_double

0xe05a,	// (0x000734be) popup_ezdial_listscroll_window

0xe07b,	// (0x000734df) popup_number_entry_window_cp01

0x0bbf,	// (0x00066023) bg_popup_call_pane_cp09

0x339e,	// (0x00068802) ezdial_list_pane

0x33a6,	// (0x0006880a) scroll_pane_cp23

0x2313,	// (0x00067777) bg_button_pane_cp028_ParamLimits

0x2313,	// (0x00067777) bg_button_pane_cp028

0xe089,	// (0x000734ed) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe089,	// (0x000734ed) cmail_ddmenu_btn01_pane_g1

0xe09b,	// (0x000734ff) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe09b,	// (0x000734ff) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x00075299) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x00075299) cmail_ddmenu_btn01_pane_g

0x33ae,	// (0x00068812) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x33ae,	// (0x00068812) cmail_ddmenu_btn01_pane_t1

0x2028,	// (0x0006748c) bg_button_pane_cp029_ParamLimits

0x2028,	// (0x0006748c) bg_button_pane_cp029

0xe09b,	// (0x000734ff) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe09b,	// (0x000734ff) cmail_ddmenu_btn02_pane_g1

0xe0b3,	// (0x00073517) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe0b3,	// (0x00073517) cmail_ddmenu_btn02_pane_t1

0x706b,	// (0x0006c4cf) bg_button_pane_cp031_ParamLimits

0x706b,	// (0x0006c4cf) bg_button_pane_cp031

0xe09b,	// (0x000734ff) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe09b,	// (0x000734ff) cmail_ddmenu_btn03_pane_g1

0xe0b3,	// (0x00073517) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe0b3,	// (0x00073517) cmail_ddmenu_btn03_pane_t1

0xba1e,	// (0x00070e82) cell_dialer2_keypad_pane_t1_ParamLimits

0xba38,	// (0x00070e9c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xba38,	// (0x00070e9c) cell_dialer2_keypad_pane_t1_copy1

0xd4ad,	// (0x00072911) ncimui_group_button_pane

0xe953,	// (0x00073db7) main_sp_fs_calendar_pane_ParamLimits

0xdd83,	// (0x000731e7) list_single_cmail_header_caption_pane_ParamLimits

0xe8fc,	// (0x00073d60) aid_recal_txt_sm_pane

0x6dda,	// (0x0006c23e) mian_recal_day_pane

0x3182,	// (0x000685e6) popup_sp_fs_cale_preview_window_ParamLimits

0x6dda,	// (0x0006c23e) list_recal_day_pane

0x33dc,	// (0x00068840) list_single_recal_day_pane_ParamLimits

0x33dc,	// (0x00068840) list_single_recal_day_pane

0x33ee,	// (0x00068852) list_single_recal_day_pane_g1_ParamLimits

0x33ee,	// (0x00068852) list_single_recal_day_pane_g1

0x33fa,	// (0x0006885e) list_single_recal_day_pane_g2_ParamLimits

0x33fa,	// (0x0006885e) list_single_recal_day_pane_g2

0x3409,	// (0x0006886d) list_single_recal_day_pane_g3_ParamLimits

0x3409,	// (0x0006886d) list_single_recal_day_pane_g3

0xe0d7,	// (0x0007353b) list_single_recal_day_pane_g4_ParamLimits

0xe0d7,	// (0x0007353b) list_single_recal_day_pane_g4

0x3415,	// (0x00068879) list_single_recal_day_pane_g5_ParamLimits

0x3415,	// (0x00068879) list_single_recal_day_pane_g5

0x3424,	// (0x00068888) list_single_recal_day_pane_g6_ParamLimits

0x3424,	// (0x00068888) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x000752a8) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x000752a8) list_single_recal_day_pane_g

0x3430,	// (0x00068894) list_single_recal_day_pane_t1

0x343e,	// (0x000688a2) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x000752b5) list_single_recal_day_pane_t

0xe0ea,	// (0x0007354e) ncimui_query_button_pane_ParamLimits

0xe0ea,	// (0x0007354e) ncimui_query_button_pane

0xe0fa,	// (0x0007355e) ncimui_query_button_pane_t1_ParamLimits

0xe0fa,	// (0x0007355e) ncimui_query_button_pane_t1

0x344c,	// (0x000688b0) ncimui_query_button_pane_t2_ParamLimits

0x344c,	// (0x000688b0) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x000752ba) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x000752ba) ncimui_query_button_pane_t

0xe10d,	// (0x00073571) query_button_pane_ParamLimits

0xe10d,	// (0x00073571) query_button_pane

0x6dda,	// (0x0006c23e) bg_button_pane_cp0028

0x345f,	// (0x000688c3) query_button_pane_t1

0x9e28,	// (0x0006f28c) main_tport_pane_ParamLimits

0xdc8e,	// (0x000730f2) bg_popup_window_pane_cp01_ParamLimits

0xdc8e,	// (0x000730f2) bg_popup_window_pane_cp01

0xdc9b,	// (0x000730ff) heading_pane_cp08_ParamLimits

0xdc9b,	// (0x000730ff) heading_pane_cp08

0xdca9,	// (0x0007310d) heading_pane_cp07_ParamLimits

0xdca9,	// (0x0007310d) heading_pane_cp07

0x2f83,	// (0x000683e7) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00075206) cell_tport_appsw_pane_g

0x5efb,	// (0x0006b35f) input_candi_list_open_g1

0x0675,	// (0x00065ad9) list_cale_time_pane_g6_ParamLimits

0x0675,	// (0x00065ad9) list_cale_time_pane_g6

0xa86e,	// (0x0006fcd2) aid_size_touch_calib_1_ParamLimits

0xa86e,	// (0x0006fcd2) aid_size_touch_calib_1

0xa87a,	// (0x0006fcde) aid_size_touch_calib_2_ParamLimits

0xa87a,	// (0x0006fcde) aid_size_touch_calib_2

0xa888,	// (0x0006fcec) aid_size_touch_calib_3_ParamLimits

0xa888,	// (0x0006fcec) aid_size_touch_calib_3

0xa898,	// (0x0006fcfc) aid_size_touch_calib_4_ParamLimits

0xa898,	// (0x0006fcfc) aid_size_touch_calib_4

0xa8a6,	// (0x0006fd0a) main_touch_calib_button_group_pane_ParamLimits

0xa8a6,	// (0x0006fd0a) main_touch_calib_button_group_pane

0xa8b4,	// (0x0006fd18) main_touch_calib_pane_g1_ParamLimits

0xa8c0,	// (0x0006fd24) main_touch_calib_pane_g2_ParamLimits

0xa8cc,	// (0x0006fd30) main_touch_calib_pane_g3_ParamLimits

0xa8d8,	// (0x0006fd3c) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00074bd9) main_touch_calib_pane_g_ParamLimits

0xa8e4,	// (0x0006fd48) main_touch_calib_pane_t1_ParamLimits

0xa8fb,	// (0x0006fd5f) main_touch_calib_pane_t2_ParamLimits

0xa912,	// (0x0006fd76) main_touch_calib_pane_t3_ParamLimits

0xa926,	// (0x0006fd8a) main_touch_calib_pane_t4_ParamLimits

0xa93a,	// (0x0006fd9e) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00074be2) main_touch_calib_pane_t_ParamLimits

0x289d,	// (0x00067d01) list_single_fp_cale_pane_g3_ParamLimits

0x289d,	// (0x00067d01) list_single_fp_cale_pane_g3

0xe953,	// (0x00073db7) bg_button_pane_cp012_ParamLimits

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp03_ParamLimits

0xc7de,	// (0x00071c42) cell_vitu2_function_top_pane_g1_ParamLimits

0xe953,	// (0x00073db7) bg_vkb2_func_pane_cp04_ParamLimits

0xd44b,	// (0x000728af) main_ncimui_button_group_pane_ParamLimits

0xd44b,	// (0x000728af) main_ncimui_button_group_pane

0xd49b,	// (0x000728ff) main_ncimui_pane_t3_ParamLimits

0xd49b,	// (0x000728ff) main_ncimui_pane_t3

0x30af,	// (0x00068513) phacti_button_group_pane

0x3392,	// (0x000687f6) aid_size_list_single_double_ParamLimits

0xe05a,	// (0x000734be) popup_ezdial_listscroll_window_ParamLimits

0xe07b,	// (0x000734df) popup_number_entry_window_cp01_ParamLimits

0xe11a,	// (0x0007357e) phacti_button_pane_ParamLimits

0xe11a,	// (0x0007357e) phacti_button_pane

0x6dda,	// (0x0006c23e) bg_button_pane_cp14

0x346d,	// (0x000688d1) phacti_button_pane_t1

0xe12b,	// (0x0007358f) main_touch_calib_button_pane_ParamLimits

0xe12b,	// (0x0007358f) main_touch_calib_button_pane

0xf097,	// (0x000744fb) bg_button_pane_cp18_ParamLimits

0xf097,	// (0x000744fb) bg_button_pane_cp18

0x347b,	// (0x000688df) main_touch_calib_button_pane_t1_ParamLimits

0x347b,	// (0x000688df) main_touch_calib_button_pane_t1

0x3491,	// (0x000688f5) main_touch_calib_button_pane_t2_ParamLimits

0x3491,	// (0x000688f5) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x000752bf) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x000752bf) main_touch_calib_button_pane_t

0x6dda,	// (0x0006c23e) cell_ncimui_button_pane

0x6dda,	// (0x0006c23e) bg_button_pane_cp032

0x34af,	// (0x00068913) cell_ncimui_button_pane_t1

0xba94,	// (0x00070ef8) image3_infobar_pane_ParamLimits

0xba94,	// (0x00070ef8) image3_infobar_pane

0xd7f9,	// (0x00072c5d) fs_bigclock_status_pane_ParamLimits

0xd7f9,	// (0x00072c5d) fs_bigclock_status_pane

0xd806,	// (0x00072c6a) main_fs_bigclock_clock_pane_ParamLimits

0xd806,	// (0x00072c6a) main_fs_bigclock_clock_pane

0xd82a,	// (0x00072c8e) main_fs_bigclock_indi_pane_ParamLimits

0xd82a,	// (0x00072c8e) main_fs_bigclock_indi_pane

0xd85d,	// (0x00072cc1) main_fs_bigclock_swipe_pane_ParamLimits

0xd85d,	// (0x00072cc1) main_fs_bigclock_swipe_pane

0x6dda,	// (0x0006c23e) main_fs_clock_dumped_data

0xd88f,	// (0x00072cf3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd88f,	// (0x00072cf3) list_single_fs_bigclock_indicator_pane_g1

0xd8b3,	// (0x00072d17) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd8b3,	// (0x00072d17) list_single_fs_bigclock_indicator_pane_g2

0xd8cd,	// (0x00072d31) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd8cd,	// (0x00072d31) list_single_fs_bigclock_indicator_pane_g3

0xd8e7,	// (0x00072d4b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd8e7,	// (0x00072d4b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000750f2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000750f2) list_single_fs_bigclock_indicator_pane_g

0xd90d,	// (0x00072d71) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd90d,	// (0x00072d71) list_single_fs_bigclock_indicator_pane_t1

0xd935,	// (0x00072d99) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd935,	// (0x00072d99) list_single_fs_bigclock_indicator_pane_t2

0xd95d,	// (0x00072dc1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd95d,	// (0x00072dc1) list_single_fs_bigclock_indicator_pane_t3

0xd985,	// (0x00072de9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd985,	// (0x00072de9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000750fd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000750fd) list_single_fs_bigclock_indicator_pane_t

0x34bd,	// (0x00068921) image3_infobar_fav_pane_ParamLimits

0x34bd,	// (0x00068921) image3_infobar_fav_pane

0x34cd,	// (0x00068931) image3_infobar_loc_pane_ParamLimits

0x34cd,	// (0x00068931) image3_infobar_loc_pane

0x34e1,	// (0x00068945) image3_infobar_time_pane_ParamLimits

0x34e1,	// (0x00068945) image3_infobar_time_pane

0x2530,	// (0x00067994) image3_infobar_time_pane_g1

0x34f1,	// (0x00068955) image3_infobar_time_pane_t1

0x2530,	// (0x00067994) image3_infobar_loc_pane_g1

0x34ff,	// (0x00068963) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x000752c4) image3_infobar_loc_pane_g

0x3507,	// (0x0006896b) image3_infobar_loc_pane_t1

0x2530,	// (0x00067994) image3_infobar_fav_pane_g1

0x3515,	// (0x00068979) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x000752c9) image3_infobar_fav_pane_g

0x351d,	// (0x00068981) fs_bigclock_status_battery_pane

0x3526,	// (0x0006898a) fs_bigclock_status_signal_pane

0x352f,	// (0x00068993) fs_bigclock_status_title_pane

0x3538,	// (0x0006899c) fs_bigclock_status_signal_pane_g1

0x3541,	// (0x000689a5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x000752ce) fs_bigclock_status_signal_pane_g

0x3549,	// (0x000689ad) fs_bigclock_status_battery_pane_g1

0x3552,	// (0x000689b6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x000752d3) fs_bigclock_status_battery_pane_g

0x355a,	// (0x000689be) fs_bigclock_status_title_pane_t1

0x2530,	// (0x00067994) main_fs_bigclock_clock_pane_g1

0x3568,	// (0x000689cc) main_fs_bigclock_clock_pane_g2

0x3568,	// (0x000689cc) main_fs_bigclock_clock_pane_g3

0x3568,	// (0x000689cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x000752d8) main_fs_bigclock_clock_pane_g

0xe13b,	// (0x0007359f) main_fs_bigclock_clock_pane_t1

0xe149,	// (0x000735ad) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x000752e1) main_fs_bigclock_clock_pane_t

0x3570,	// (0x000689d4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3570,	// (0x000689d4) list_single_fs_bigclock_indicator_pane

0xe158,	// (0x000735bc) list_single_fs_bigclock_pane_ParamLimits

0xe158,	// (0x000735bc) list_single_fs_bigclock_pane

0x358a,	// (0x000689ee) main_fs_bigclock_indicator_pane_t1

0x3599,	// (0x000689fd) list_single_fs_bigclock_pane_g1

0x35a1,	// (0x00068a05) list_single_fs_bigclock_pane_t1

0x2530,	// (0x00067994) main_fs_bigclock_swipe_pane_g1

0x35e1,	// (0x00068a45) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x000752f2) main_fs_bigclock_swipe_pane_g

0x35e9,	// (0x00068a4d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x35e9,	// (0x00068a4d) main_fs_bigclock_swipe_pane_t1

0x8ddf,	// (0x0006e243) call_type_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_btmg_pane

0x6b7e,	// (0x0006bfe2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6b7e,	// (0x0006bfe2) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00075265) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00075265) list_single_cale_mrui_row_pane_g

0x33cc,	// (0x00068830) list_recal_vselct_arw_lo_pane

0x33d4,	// (0x00068838) list_recal_vselct_arw_up_pane

0xe905,	// (0x00073d69) list_recal_vselct_pane

0x3606,	// (0x00068a6a) btmg_button_pane

0xe1bc,	// (0x00073620) main_btmg_pane_g1

0x6dda,	// (0x0006c23e) bg_button_pane_cp044

0x3610,	// (0x00068a74) btmg_button_pane_t1

0x2020,	// (0x00067484) aid_listscroll_gen

0xe953,	// (0x00073db7) main_cntbar_detail_pane

0x2fa1,	// (0x00068405) list_cmail_folder_pane

0x2fb1,	// (0x00068415) sp_fs_scroll_pane_cp03_ParamLimits

0x6c9e,	// (0x0006c102) list_single_fs_dyc_pane_cp01_ParamLimits

0x6c9e,	// (0x0006c102) list_single_fs_dyc_pane_cp01

0x361e,	// (0x00068a82) aid_size_cmail_indent

0x6cca,	// (0x0006c12e) list_single_dyc_row_pane_cp01

0xe1e4,	// (0x00073648) cntbar_detail_list_pane_ParamLimits

0xe1e4,	// (0x00073648) cntbar_detail_list_pane

0xe21e,	// (0x00073682) main_cntbar_detail_cont_pane_ParamLimits

0xe21e,	// (0x00073682) main_cntbar_detail_cont_pane

0x8dd3,	// (0x0006e237) scroll_pane_cp032_ParamLimits

0x8dd3,	// (0x0006e237) scroll_pane_cp032

0xe22a,	// (0x0007368e) cntbar_detail_list_event_pane_ParamLimits

0xe22a,	// (0x0007368e) cntbar_detail_list_event_pane

0xe1f0,	// (0x00073654) cntbar_detail_list_shct_pane

0x04fa,	// (0x0006595e) aid_list_gen

0x3630,	// (0x00068a94) aid_scroll

0x3639,	// (0x00068a9d) aid_size_touch_scroll_bar

0xe8f3,	// (0x00073d57) aid_list_double

0x364b,	// (0x00068aaf) aid_list_single

0x3654,	// (0x00068ab8) aid_list_single_lg

0x6cd3,	// (0x0006c137) aid_list_z_g_a_sm

0xe23e,	// (0x000736a2) aid_list_z_g_d

0x6cdb,	// (0x0006c13f) aid_txt_z_prm

0x6ce9,	// (0x0006c14d) aid_txt_z_prm_cp01

0x6cf7,	// (0x0006c15b) aid_txt_z_sec

0xe246,	// (0x000736aa) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe246,	// (0x000736aa) main_cntbar_detail_cont_pane_g1

0xe253,	// (0x000736b7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe253,	// (0x000736b7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x000752f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x000752f7) main_cntbar_detail_cont_pane_g

0x367b,	// (0x00068adf) main_cntbar_detail_cont_pane_t1

0x3689,	// (0x00068aed) main_cntbar_detail_cont_pane_t2

0x3697,	// (0x00068afb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x000752fc) main_cntbar_detail_cont_pane_t

0xe25f,	// (0x000736c3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe25f,	// (0x000736c3) cell_cntbar_detail_list_shct_pane

0x36a5,	// (0x00068b09) cntbar_detail_list_shct_pane_g1

0x36ae,	// (0x00068b12) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00075303) cntbar_detail_list_shct_pane_g

0xe273,	// (0x000736d7) cntbar_detail_list_event_pane_g1_ParamLimits

0xe273,	// (0x000736d7) cntbar_detail_list_event_pane_g1

0xe27f,	// (0x000736e3) cntbar_detail_list_event_pane_g2_ParamLimits

0xe27f,	// (0x000736e3) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00075308) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00075308) cntbar_detail_list_event_pane_g

0xe2eb,	// (0x0007374f) cntbar_detail_list_event_pane_t1_ParamLimits

0xe2eb,	// (0x0007374f) cntbar_detail_list_event_pane_t1

0xe300,	// (0x00073764) cntbar_detail_list_event_pane_t2_ParamLimits

0xe300,	// (0x00073764) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00075315) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00075315) cntbar_detail_list_event_pane_t

0x2530,	// (0x00067994) cell_cntbar_detail_list_shct_pane_g1

0x9162,	// (0x0006e5c6) navi_pane_mv_g3

0xe953,	// (0x00073db7) main_cntbar_detail_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_notif_wgt_pane

0xb746,	// (0x00070baa) aid_tch_main_mp4_pane_g4

0xb97b,	// (0x00070ddf) popup_slider_window_cp02

0x33c3,	// (0x00068827) list_recal_day_event_pane

0xe1c4,	// (0x00073628) cntbar_detail_btn_pane_ParamLimits

0xe1c4,	// (0x00073628) cntbar_detail_btn_pane

0xe1d4,	// (0x00073638) cntbar_detail_btn_pane_cp01_ParamLimits

0xe1d4,	// (0x00073638) cntbar_detail_btn_pane_cp01

0xe1f0,	// (0x00073654) cntbar_detail_list_shct_pane_ParamLimits

0xe1fc,	// (0x00073660) cntbar_detail_pane_g1_ParamLimits

0xe1fc,	// (0x00073660) cntbar_detail_pane_g1

0xe208,	// (0x0007366c) cntbar_detail_pane_t1_ParamLimits

0xe208,	// (0x0007366c) cntbar_detail_pane_t1

0xe28b,	// (0x000736ef) cntbar_detail_list_event_pane_g3_ParamLimits

0xe28b,	// (0x000736ef) cntbar_detail_list_event_pane_g3

0xe2a3,	// (0x00073707) cntbar_detail_list_event_pane_g4_ParamLimits

0xe2a3,	// (0x00073707) cntbar_detail_list_event_pane_g4

0xe2bb,	// (0x0007371f) cntbar_detail_list_event_pane_g5_ParamLimits

0xe2bb,	// (0x0007371f) cntbar_detail_list_event_pane_g5

0xe2d3,	// (0x00073737) cntbar_detail_list_event_pane_g6_ParamLimits

0xe2d3,	// (0x00073737) cntbar_detail_list_event_pane_g6

0xe315,	// (0x00073779) cntbar_detail_list_event_pane_t3_ParamLimits

0xe315,	// (0x00073779) cntbar_detail_list_event_pane_t3

0xe327,	// (0x0007378b) popup_notif_wgt_window_ParamLimits

0xe327,	// (0x0007378b) popup_notif_wgt_window

0xe337,	// (0x0007379b) popup_submenu_window_cp01_ParamLimits

0xe337,	// (0x0007379b) popup_submenu_window_cp01

0x0bbf,	// (0x00066023) bg_popup_window_pane_cp10

0x36b7,	// (0x00068b1b) listscroll_notif_wgt_pane

0x36c1,	// (0x00068b25) list_notif_wgt_window

0x36ca,	// (0x00068b2e) scroll_pane_cp033

0x36d3,	// (0x00068b37) list_notif_wgt_row_pane_ParamLimits

0x36d3,	// (0x00068b37) list_notif_wgt_row_pane

0x36e7,	// (0x00068b4b) aid_size_list_notif_wgt_del

0x36f0,	// (0x00068b54) list_notif_wgt_row_pane_g1

0x36f8,	// (0x00068b5c) list_notif_wgt_row_pane_g2

0x3700,	// (0x00068b64) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0007531c) list_notif_wgt_row_pane_g

0x3709,	// (0x00068b6d) list_notif_wgt_row_pane_t1

0x3717,	// (0x00068b7b) list_notif_wgt_row_pane_t2

0x3725,	// (0x00068b89) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00075323) list_notif_wgt_row_pane_t

0x41a7,	// (0x0006960b) list_recal_day_event_pane_g1

0x3733,	// (0x00068b97) list_recal_day_event_pane_t1

0x6dda,	// (0x0006c23e) bg_button_pane_cp045

0x3742,	// (0x00068ba6) cntbar_detail_btn_pane_t1

0x2028,	// (0x0006748c) main_callh_pane_ParamLimits

0x2028,	// (0x0006748c) main_callh_pane

0x6dda,	// (0x0006c23e) main_coverflow0_pane

0x6dda,	// (0x0006c23e) main_wgtman_pane

0xd875,	// (0x00072cd9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd875,	// (0x00072cd9) main_fs_bigclock_unlock_btn_pane

0x2f7b,	// (0x000683df) bg_button_pane_cp16

0x2f8b,	// (0x000683ef) cell_tport_appsw_pane_g3

0xe345,	// (0x000737a9) cf0_flow_pane_ParamLimits

0xe345,	// (0x000737a9) cf0_flow_pane

0x3750,	// (0x00068bb4) listscroll_cf0_pane

0x3759,	// (0x00068bbd) main_cf0_pane_g1

0xe354,	// (0x000737b8) main_cf0_pane_t1_ParamLimits

0xe354,	// (0x000737b8) main_cf0_pane_t1

0xe368,	// (0x000737cc) main_cf0_pane_t2_ParamLimits

0xe368,	// (0x000737cc) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0007532a) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0007532a) main_cf0_pane_t

0x3763,	// (0x00068bc7) scroll_pane_cp11

0xe37c,	// (0x000737e0) cf0_flow_pane_g1

0xe384,	// (0x000737e8) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0007532f) cf0_flow_pane_g

0xe38c,	// (0x000737f0) cf0_flow_pane_t1

0x6dda,	// (0x0006c23e) main_call6_pane

0x6dda,	// (0x0006c23e) main_calllock_pane

0xe39a,	// (0x000737fe) call6_btn_grp_pane_ParamLimits

0xe39a,	// (0x000737fe) call6_btn_grp_pane

0xe3a9,	// (0x0007380d) call6_pane_g1_ParamLimits

0xe3a9,	// (0x0007380d) call6_pane_g1

0xe3b8,	// (0x0007381c) popup_call6_1st_window_ParamLimits

0xe3b8,	// (0x0007381c) popup_call6_1st_window

0xe3c6,	// (0x0007382a) popup_call6_2nd_window_ParamLimits

0xe3c6,	// (0x0007382a) popup_call6_2nd_window

0xe3d4,	// (0x00073838) cell_call6_btn_pane_ParamLimits

0xe3d4,	// (0x00073838) cell_call6_btn_pane

0x0bbf,	// (0x00066023) bg_popup_call2_in_pane_cp03

0x376e,	// (0x00068bd2) popup_call6_1st_window_g1

0x3776,	// (0x00068bda) popup_call6_1st_window_g2

0x377e,	// (0x00068be2) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00075334) popup_call6_1st_window_g

0x3786,	// (0x00068bea) popup_call6_1st_window_t1

0x3795,	// (0x00068bf9) popup_call6_1st_window_t2

0x37a5,	// (0x00068c09) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0007533b) popup_call6_1st_window_t

0x0bbf,	// (0x00066023) bg_popup_call2_in_pane_cp04

0x376e,	// (0x00068bd2) popup_call6_2nd_window_g1

0x3776,	// (0x00068bda) popup_call6_2nd_window_g2

0x377e,	// (0x00068be2) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00075334) popup_call6_2nd_window_g

0x3786,	// (0x00068bea) popup_call6_2nd_window_t1

0x6dda,	// (0x0006c23e) bg_button_pane_cp15

0x37b5,	// (0x00068c19) cell_call6_btn_pane_g1

0x37be,	// (0x00068c22) cell_call6_btn_pane_t1

0xe3e3,	// (0x00073847) listscroll_wgtman_pane_ParamLimits

0xe3e3,	// (0x00073847) listscroll_wgtman_pane

0xe401,	// (0x00073865) wgtman_btn_pane_ParamLimits

0xe401,	// (0x00073865) wgtman_btn_pane

0x0a72,	// (0x00065ed6) aid_scroll_copy1

0x37cd,	// (0x00068c31) list_wgtman_pane

0xe436,	// (0x0007389a) wgtman_btn_pane_g1_ParamLimits

0xe436,	// (0x0007389a) wgtman_btn_pane_g1

0xe45e,	// (0x000738c2) wgtman_btn_pane_t1_ParamLimits

0xe45e,	// (0x000738c2) wgtman_btn_pane_t1

0x37d7,	// (0x00068c3b) wgtman_btn_pane_t2_ParamLimits

0x37d7,	// (0x00068c3b) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00075342) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00075342) wgtman_btn_pane_t

0xe495,	// (0x000738f9) listrow_wgtman_pane_ParamLimits

0xe495,	// (0x000738f9) listrow_wgtman_pane

0xe4b1,	// (0x00073915) listrow_wgtman_pane_g1

0xe4ba,	// (0x0007391e) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00075347) listrow_wgtman_pane_g

0x6d05,	// (0x0006c169) listrow_wgtman_pane_t1

0x6d13,	// (0x0006c177) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0007534c) listrow_wgtman_pane_t

0x6d21,	// (0x0006c185) wait_bar_pane_cp09

0x37ee,	// (0x00068c52) main_calllock_btn_pane

0x37f8,	// (0x00068c5c) main_calllock_pane_g1

0x6dda,	// (0x0006c23e) bg_button_pane_cp17

0x3803,	// (0x00068c67) main_calllock_btn_pane_g1

0x380c,	// (0x00068c70) main_calllock_btn_pane_t1

0x6dda,	// (0x0006c23e) main_dialer3_pane

0x6dda,	// (0x0006c23e) main_fmrd2_pane

0x2530,	// (0x00067994) main_fs_bigclock_unlock_btn_pane_g1

0x3823,	// (0x00068c87) main_fs_bigclock_unlock_btn_pane_t1

0xe4c4,	// (0x00073928) area_fmrd2_info_pane_ParamLimits

0xe4c4,	// (0x00073928) area_fmrd2_info_pane

0xe4d2,	// (0x00073936) area_fmrd2_visual_pane_ParamLimits

0xe4d2,	// (0x00073936) area_fmrd2_visual_pane

0xe4e0,	// (0x00073944) fmrd2_indi_pane_ParamLimits

0xe4e0,	// (0x00073944) fmrd2_indi_pane

0xe4ed,	// (0x00073951) area_fmrd2_visual_pane_g1

0xe4f5,	// (0x00073959) area_fmrd2_visual_pane_t1

0xe505,	// (0x00073969) area_fmrd2_visual_pane_t2

0xe515,	// (0x00073979) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00075356) area_fmrd2_visual_pane_t

0xe525,	// (0x00073989) area_fmrd2_info_pane_g1

0xe52d,	// (0x00073991) area_fmrd2_info_pane_t1

0xe53d,	// (0x000739a1) area_fmrd2_info_pane_t2

0xe54d,	// (0x000739b1) area_fmrd2_info_pane_t3

0xe55d,	// (0x000739c1) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0007535d) area_fmrd2_info_pane_t

0xe56b,	// (0x000739cf) fmrd2_indi_pane_t1

0xe57b,	// (0x000739df) fmrd2_indi_pane_t2

0xe58b,	// (0x000739ef) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00075366) fmrd2_indi_pane_t

0xd8f6,	// (0x00072d5a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd8f6,	// (0x00072d5a) list_single_fs_bigclock_indicator_pane_g5

0xd99a,	// (0x00072dfe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd99a,	// (0x00072dfe) list_single_fs_bigclock_indicator_pane_t5

0xde9f,	// (0x00073303) aid_cell_bcale_month_pane_ParamLimits

0xde9f,	// (0x00073303) aid_cell_bcale_month_pane

0xdeab,	// (0x0007330f) bcale_month_pane_ParamLimits

0xdeab,	// (0x0007330f) bcale_month_pane

0xdebb,	// (0x0007331f) bcale_preview_pane_ParamLimits

0xdebb,	// (0x0007331f) bcale_preview_pane

0x35a1,	// (0x00068a05) list_single_fs_bigclock_pane_t1_ParamLimits

0x35bd,	// (0x00068a21) list_single_fs_bigclock_pane_t2_ParamLimits

0x35bd,	// (0x00068a21) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x000752ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x000752ed) list_single_fs_bigclock_pane_t

0x381b,	// (0x00068c7f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00075351) main_fs_bigclock_unlock_btn_pane_g

0xe599,	// (0x000739fd) aid_dia3_key_size_ParamLimits

0xe599,	// (0x000739fd) aid_dia3_key_size

0xe5a5,	// (0x00073a09) aid_dia3_listrow_size_ParamLimits

0xe5a5,	// (0x00073a09) aid_dia3_listrow_size

0xe5b5,	// (0x00073a19) dia3_keypad_fun_pane_ParamLimits

0xe5b5,	// (0x00073a19) dia3_keypad_fun_pane

0xe5c7,	// (0x00073a2b) dia3_keypad_num_pane_ParamLimits

0xe5c7,	// (0x00073a2b) dia3_keypad_num_pane

0xe5d9,	// (0x00073a3d) dia3_listscroll_pane_ParamLimits

0xe5d9,	// (0x00073a3d) dia3_listscroll_pane

0xe5e7,	// (0x00073a4b) dia3_numentry_pane_ParamLimits

0xe5e7,	// (0x00073a4b) dia3_numentry_pane

0x3831,	// (0x00068c95) dia3_list_pane

0x383c,	// (0x00068ca0) scroll_pane_cp12

0x6dda,	// (0x0006c23e) bg_dia3_numentry_pane

0xe5f5,	// (0x00073a59) dia3_numentry_pane_t1

0xe604,	// (0x00073a68) cell_dia3_key_num_pane

0xe60c,	// (0x00073a70) cell_dia3_key0_fun_pane_ParamLimits

0xe60c,	// (0x00073a70) cell_dia3_key0_fun_pane

0xe619,	// (0x00073a7d) cell_dia3_key1_fun_pane_ParamLimits

0xe619,	// (0x00073a7d) cell_dia3_key1_fun_pane

0xe626,	// (0x00073a8a) dia3_listrow_pane

0x49e0,	// (0x00069e44) bg_dia3_numentry_pane_g1

0x6dda,	// (0x0006c23e) bg_button_pane_cp21

0x3847,	// (0x00068cab) cell_dia3_key_num_pane_t1

0x3855,	// (0x00068cb9) cell_dia3_key_num_pane_t2

0x3864,	// (0x00068cc8) cell_dia3_key_num_pane_t3

0x3873,	// (0x00068cd7) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0007536d) cell_dia3_key_num_pane_t

0x6dda,	// (0x0006c23e) bg_button_pane_cp19

0xe633,	// (0x00073a97) cell_dia3_key0_fun_pane_g1

0x6dda,	// (0x0006c23e) bg_button_pane_cp20

0xe63b,	// (0x00073a9f) cell_dia3_key1_fun_pane_g1

0xe643,	// (0x00073aa7) area_left_week_number_pane

0xe64c,	// (0x00073ab0) area_top_day_name_pane

0xe655,	// (0x00073ab9) frame_month_view_pane

0xe65f,	// (0x00073ac3) grid_month_view_pane

0xe669,	// (0x00073acd) cell_top_day_name_pane_ParamLimits

0xe669,	// (0x00073acd) cell_top_day_name_pane

0xe683,	// (0x00073ae7) cell_area_left_week_number_pane_ParamLimits

0xe683,	// (0x00073ae7) cell_area_left_week_number_pane

0xe697,	// (0x00073afb) cell_month_view_pane_ParamLimits

0xe697,	// (0x00073afb) cell_month_view_pane

0x3882,	// (0x00068ce6) frm_month_g1

0xe6b4,	// (0x00073b18) frm_month_g2

0xe6be,	// (0x00073b22) frm_month_g3

0xe6c8,	// (0x00073b2c) frm_month_g4

0xe6d2,	// (0x00073b36) frm_month_g5

0xe6dc,	// (0x00073b40) frm_month_g6

0xe6e6,	// (0x00073b4a) frm_month_g7

0x388b,	// (0x00068cef) frm_month_g8

0xe6f0,	// (0x00073b54) frm_month_g9

0xe6f9,	// (0x00073b5d) frm_month_g10

0xe702,	// (0x00073b66) frm_month_g11

0xe70b,	// (0x00073b6f) frm_month_g12

0xe714,	// (0x00073b78) frm_month_g13

0xe71d,	// (0x00073b81) frm_month_g14

0xe726,	// (0x00073b8a) frm_month_g15

0xe731,	// (0x00073b95) frm_month_g16

0x000f,

0xff12,	// (0x00075376) frm_month_g

0xe73c,	// (0x00073ba0) cell_top_day_name_pane_t1

0xe74b,	// (0x00073baf) cell_area_left_week_number_pane_g1

0xe73c,	// (0x00073ba0) cell_area_left_week_number_pane_t1

0x2530,	// (0x00067994) cell_month_view_pane_g1

0xe753,	// (0x00073bb7) cell_month_view_pane_t1

0x6dda,	// (0x0006c23e) main_fps_pane

0x4e4d,	// (0x0006a2b1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4e4d,	// (0x0006a2b1) cmail_ddmenu_btn02_pane_cp1

0x4e69,	// (0x0006a2cd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4e69,	// (0x0006a2cd) cmail_ddmenu_btn02_pane_cp2

0xe0a7,	// (0x0007350b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe0a7,	// (0x0007350b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0007529e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0007529e) cmail_ddmenu_btn02_pane_g

0xe0c5,	// (0x00073529) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe0c5,	// (0x00073529) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x000752a3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x000752a3) cmail_ddmenu_btn02_pane_t

0xe762,	// (0x00073bc6) fps_text_pane_ParamLimits

0xe762,	// (0x00073bc6) fps_text_pane

0xe76f,	// (0x00073bd3) main_fps_pane_g1_ParamLimits

0xe76f,	// (0x00073bd3) main_fps_pane_g1

0xe77d,	// (0x00073be1) wait_bar_pane_cp010_ParamLimits

0xe77d,	// (0x00073be1) wait_bar_pane_cp010

0xe789,	// (0x00073bed) fps_text_pane_t1_ParamLimits

0xe789,	// (0x00073bed) fps_text_pane_t1

0xbd5f,	// (0x000711c3) cam4_image_uncrop_pane_g1

0xbd68,	// (0x000711cc) cam4_image_uncrop_pane_g2

0xbd71,	// (0x000711d5) cam4_image_uncrop_pane_g3

0xbd7a,	// (0x000711de) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00074d71) cam4_image_uncrop_pane_g

0xe626,	// (0x00073a8a) dia3_listrow_pane_ParamLimits

0x6dda,	// (0x0006c23e) main_phob2_pane

0xdcf0,	// (0x00073154) cell_tport_appsw_pane_cp02_ParamLimits

0xdcf0,	// (0x00073154) cell_tport_appsw_pane_cp02

0xdcff,	// (0x00073163) cell_tport_appsw_pane_cp03_ParamLimits

0xdcff,	// (0x00073163) cell_tport_appsw_pane_cp03

0x6dda,	// (0x0006c23e) phob2_contact_card_pane

0x6dda,	// (0x0006c23e) phob2_listscroll_pane

0x3894,	// (0x00068cf8) phob2_list_pane

0x389c,	// (0x00068d00) scroll_pane_cp034

0xe7a2,	// (0x00073c06) phob2_cc_data_pane_ParamLimits

0xe7a2,	// (0x00073c06) phob2_cc_data_pane

0xe7bc,	// (0x00073c20) phob2_cc_listscroll_pane_ParamLimits

0xe7bc,	// (0x00073c20) phob2_cc_listscroll_pane

0xe7d6,	// (0x00073c3a) list_double_large_graphic_phob2_pane_ParamLimits

0xe7d6,	// (0x00073c3a) list_double_large_graphic_phob2_pane

0xe7f9,	// (0x00073c5d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe7f9,	// (0x00073c5d) list_double_large_graphic_phob2_pane_g1

0xe806,	// (0x00073c6a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe806,	// (0x00073c6a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00075397) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00075397) list_double_large_graphic_phob2_pane_g

0x6d29,	// (0x0006c18d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6d29,	// (0x0006c18d) list_double_large_graphic_phob2_pane_t1

0x6d3e,	// (0x0006c1a2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6d3e,	// (0x0006c1a2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0007539c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0007539c) list_double_large_graphic_phob2_pane_t

0x6dda,	// (0x0006c23e) list_highlight_pane_cp024

0x38a4,	// (0x00068d08) phob2_cc_button_pane

0xe812,	// (0x00073c76) phob2_cc_data_pane_g1_ParamLimits

0xe812,	// (0x00073c76) phob2_cc_data_pane_g1

0xe81e,	// (0x00073c82) phob2_cc_data_pane_g2_ParamLimits

0xe81e,	// (0x00073c82) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x000753a1) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x000753a1) phob2_cc_data_pane_g

0xe82a,	// (0x00073c8e) phob2_cc_data_pane_t1_ParamLimits

0xe82a,	// (0x00073c8e) phob2_cc_data_pane_t1

0xe83c,	// (0x00073ca0) phob2_cc_data_pane_t2_ParamLimits

0xe83c,	// (0x00073ca0) phob2_cc_data_pane_t2

0xe84e,	// (0x00073cb2) phob2_cc_data_pane_t3_ParamLimits

0xe84e,	// (0x00073cb2) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x000753a6) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x000753a6) phob2_cc_data_pane_t

0x38ac,	// (0x00068d10) phob2_cc_list_pane_ParamLimits

0x38ac,	// (0x00068d10) phob2_cc_list_pane

0x481c,	// (0x00069c80) scroll_pane_cp035_ParamLimits

0x481c,	// (0x00069c80) scroll_pane_cp035

0xe953,	// (0x00073db7) bg_button_pane_cp033

0x38b8,	// (0x00068d1c) phob2_cc_button_pane_g1

0x38c4,	// (0x00068d28) phob2_cc_button_pane_t1

0x38d9,	// (0x00068d3d) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x000753ad) phob2_cc_button_pane_t

0xe860,	// (0x00073cc4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe860,	// (0x00073cc4) list_double_large_graphic_phob2_cc_pane

0xe890,	// (0x00073cf4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe890,	// (0x00073cf4) list_double_large_graphic_phob2_cc_pane_g1

0xe8a1,	// (0x00073d05) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe8a1,	// (0x00073d05) list_double_large_graphic_phob2_cc_pane_g2

0xe8b0,	// (0x00073d14) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe8b0,	// (0x00073d14) list_double_large_graphic_phob2_cc_pane_g3

0x6d50,	// (0x0006c1b4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6d50,	// (0x0006c1b4) list_double_large_graphic_phob2_cc_pane_g4

0x6d61,	// (0x0006c1c5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6d61,	// (0x0006c1c5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x000753b2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x000753b2) list_double_large_graphic_phob2_cc_pane_g

0x6d70,	// (0x0006c1d4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6d70,	// (0x0006c1d4) list_double_large_graphic_phob2_cc_pane_t1

0x6d99,	// (0x0006c1fd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6d99,	// (0x0006c1fd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x000753bd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x000753bd) list_double_large_graphic_phob2_cc_pane_t

0x38eb,	// (0x00068d4f) list_highlight_pane_cp025_ParamLimits

0x38eb,	// (0x00068d4f) list_highlight_pane_cp025

0xe953,	// (0x00073db7) bg_button_pane_cp033_ParamLimits

0x38b8,	// (0x00068d1c) phob2_cc_button_pane_g1_ParamLimits

0x38c4,	// (0x00068d28) phob2_cc_button_pane_t1_ParamLimits

0x38d9,	// (0x00068d3d) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x000753ad) phob2_cc_button_pane_t_ParamLimits

0x6e20,	// (0x0006c284) popup_wgtman_window

0x4083,	// (0x000694e7) scroll_pane_cp038

0xe41e,	// (0x00073882) wgtman_btn_pane_cp_01_ParamLimits

0xe41e,	// (0x00073882) wgtman_btn_pane_cp_01

0x38f9,	// (0x00068d5d) wgtman_content_pane

0x3642,	// (0x00068aa6) wgtman_heading_pane

0x6dda,	// (0x0006c23e) bg_heading_pane_cp02

0x3902,	// (0x00068d66) wgtman_heading_pane_g1

0x390a,	// (0x00068d6e) wgtman_heading_pane_t1

0x3918,	// (0x00068d7c) scroll_pane_cp036

0x3920,	// (0x00068d84) wgtman_list_pane

0x3928,	// (0x00068d8c) wgtman_list_pane_t1_ParamLimits

0x3928,	// (0x00068d8c) wgtman_list_pane_t1

0xbcbe,	// (0x00071122) cam4_grid_pane

0x6183,	// (0x0006b5e7) bg_button_pane_cp015_ParamLimits

0xc963,	// (0x00071dc7) bg_button_pane_cp016_ParamLimits

0xc976,	// (0x00071dda) bg_button_pane_cp017_ParamLimits

0x61b6,	// (0x0006b61a) popup_vitu2_query_window_g3_ParamLimits

0x61b6,	// (0x0006b61a) popup_vitu2_query_window_g3

0x622f,	// (0x0006b693) popup_vitu2_query_window_t6_ParamLimits

0x622f,	// (0x0006b693) popup_vitu2_query_window_t6

0x625a,	// (0x0006b6be) popup_vitu2_query_window_t7_ParamLimits

0x625a,	// (0x0006b6be) popup_vitu2_query_window_t7

0x4b4b,	// (0x00069faf) cam4_grid_pane_g1

0x4b54,	// (0x00069fb8) cam4_grid_pane_g2

0x394a,	// (0x00068dae) cam4_grid_pane_g3

0x3953,	// (0x00068db7) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x000753c2) cam4_grid_pane_g

0x7d34,	// (0x0006d198) aid_placing_vt_slider_lsc_ParamLimits

0x8074,	// (0x0006d4d8) vidtel_button_pane_ParamLimits

0x8074,	// (0x0006d4d8) vidtel_button_pane

0x6dda,	// (0x0006c23e) bg_button_pane_cp034

0xe8bf,	// (0x00073d23) vidtel_button_pane_g1

0x395e,	// (0x00068dc2) vidtel_button_pane_t1

0x4185,	// (0x000695e9) aid_size_vtel_slider_touch

0x481c,	// (0x00069c80) scroll_pane_cp039

0x4a1e,	// (0x00069e82) ncim_query_button_pane_cp01_ParamLimits

0x4a3d,	// (0x00069ea1) ncimui_query_pane_g1_ParamLimits

0xe953,	// (0x00073db7) input_focus_pane_cp012_ParamLimits

0x4a62,	// (0x00069ec6) ncim_query_entry_pane_t1_ParamLimits

0x481c,	// (0x00069c80) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
