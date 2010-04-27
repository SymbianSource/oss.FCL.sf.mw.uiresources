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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007b774 };

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
0x1eae,	// (0x0007d622) Screen

0x1eba,	// (0x0007d62e) application_window

0x1f16,	// (0x0007d68a) area_bottom_pane_ParamLimits

0x1f16,	// (0x0007d68a) area_bottom_pane

0x1f6f,	// (0x0007d6e3) area_top_pane_ParamLimits

0x1f6f,	// (0x0007d6e3) area_top_pane

0x1fd3,	// (0x0007d747) call_video_uplink_pane_ParamLimits

0x1fd3,	// (0x0007d747) call_video_uplink_pane

0x2012,	// (0x0007d786) main_pane_ParamLimits

0x2012,	// (0x0007d786) main_pane

0xc7bc,	// (0x00087f30) context_pane

0x5383,	// (0x00080af7) navi_pane

0x53a9,	// (0x00080b1d) popup_cale_events_window_ParamLimits

0x53a9,	// (0x00080b1d) popup_cale_events_window

0xc7cf,	// (0x00087f43) popup_mup_playback_window

0x53c1,	// (0x00080b35) signal_pane

0xa6ec,	// (0x00085e60) main_browser_pane

0xa90a,	// (0x0008607e) main_burst_pane

0x5219,	// (0x0008098d) main_calc_pane

0xc7a2,	// (0x00087f16) main_cale_day_pane

0x2745,	// (0x0007deb9) main_cale_month_pane

0xc7a2,	// (0x00087f16) main_cale_week_pane

0xa90a,	// (0x0008607e) main_call_pane

0xa3ad,	// (0x00085b21) main_call_poc_pane

0xa90a,	// (0x0008607e) main_camera_pane

0xa90a,	// (0x0008607e) main_chi_dic_pane

0xb128,	// (0x0008689c) main_clock_pane

0xa3ad,	// (0x00085b21) main_fmradio_pane

0xa90a,	// (0x0008607e) main_graph_messa_pane

0xa3ad,	// (0x00085b21) main_help_pane

0xa6ec,	// (0x00085e60) main_im_pane

0xa608,	// (0x00085d7c) main_image_pane_ParamLimits

0xa608,	// (0x00085d7c) main_image_pane

0xa3ad,	// (0x00085b21) main_location2_pane

0xa90a,	// (0x0008607e) main_location_pane

0xa608,	// (0x00085d7c) main_messa_pane

0xa3ad,	// (0x00085b21) main_mp2_pane

0xa90a,	// (0x0008607e) main_mp_pane

0xa3ad,	// (0x00085b21) main_msg_pane

0xa3ad,	// (0x00085b21) main_mup_eq_pane

0xa3ad,	// (0x00085b21) main_mup_pane

0xa6ec,	// (0x00085e60) main_notes_pane

0xa3ad,	// (0x00085b21) main_pec_pane

0xa3ad,	// (0x00085b21) main_phob_pane

0xa3ad,	// (0x00085b21) main_pinb_pane

0xa3ad,	// (0x00085b21) main_postcard_pane

0xa3ad,	// (0x00085b21) main_qdial_pane

0xa90a,	// (0x0008607e) main_skin_pane

0xa3ad,	// (0x00085b21) main_smil2_pane

0xa90a,	// (0x0008607e) main_smil_pane

0xa90a,	// (0x0008607e) main_video_pane

0xa90a,	// (0x0008607e) main_video_tele_pane

0xa608,	// (0x00085d7c) main_viewer_pane_ParamLimits

0xa608,	// (0x00085d7c) main_viewer_pane

0xa90a,	// (0x0008607e) main_vorec_pane

0x5257,	// (0x000809cb) popup_blid_sat_info_window_ParamLimits

0x5257,	// (0x000809cb) popup_blid_sat_info_window

0x5277,	// (0x000809eb) popup_dyc_status_message_window_ParamLimits

0x5277,	// (0x000809eb) popup_dyc_status_message_window

0x5285,	// (0x000809f9) popup_grid_large_graphic_window_ParamLimits

0x5285,	// (0x000809f9) popup_grid_large_graphic_window

0x5314,	// (0x00080a88) popup_loc_request_window_ParamLimits

0x5314,	// (0x00080a88) popup_loc_request_window

0x535b,	// (0x00080acf) popup_wml_address_window_ParamLimits

0x535b,	// (0x00080acf) popup_wml_address_window

0x50f1,	// (0x00080865) call_muted_g1

0x4daf,	// (0x00080523) popup_call_audio_conf_window_ParamLimits

0x4daf,	// (0x00080523) popup_call_audio_conf_window

0x5101,	// (0x00080875) popup_call_audio_first_window_ParamLimits

0x5101,	// (0x00080875) popup_call_audio_first_window

0x5141,	// (0x000808b5) popup_call_audio_in_window_ParamLimits

0x5141,	// (0x000808b5) popup_call_audio_in_window

0x5165,	// (0x000808d9) popup_call_audio_out_window_ParamLimits

0x5165,	// (0x000808d9) popup_call_audio_out_window

0x5187,	// (0x000808fb) popup_call_audio_second_window_ParamLimits

0x5187,	// (0x000808fb) popup_call_audio_second_window

0x51b7,	// (0x0008092b) popup_call_audio_wait_window_ParamLimits

0x51b7,	// (0x0008092b) popup_call_audio_wait_window

0x51d8,	// (0x0008094c) popup_number_entry_window_ParamLimits

0x51d8,	// (0x0008094c) popup_number_entry_window

0x9f9a,	// (0x0008570e) bg_popup_call_pane_cp05_ParamLimits

0x9f9a,	// (0x0008570e) bg_popup_call_pane_cp05

0x9fba,	// (0x0008572e) popup_number_entry_window_t1

0x9fcd,	// (0x00085741) popup_number_entry_window_t2

0x9fdf,	// (0x00085753) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008a83e) popup_number_entry_window_t

0x9ff1,	// (0x00085765) text_title_cp2

0xa004,	// (0x00085778) bg_popup_call_pane_cp_ParamLimits

0xa004,	// (0x00085778) bg_popup_call_pane_cp

0xa012,	// (0x00085786) call_thumbnail_pane

0xa01a,	// (0x0008578e) popup_call_audio_in_window_g1_ParamLimits

0xa01a,	// (0x0008578e) popup_call_audio_in_window_g1

0xa026,	// (0x0008579a) popup_call_audio_in_window_g2_ParamLimits

0xa026,	// (0x0008579a) popup_call_audio_in_window_g2

0xa032,	// (0x000857a6) popup_call_audio_in_window_g3_ParamLimits

0xa032,	// (0x000857a6) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008a847) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008a847) popup_call_audio_in_window_g

0xa03e,	// (0x000857b2) popup_call_audio_in_window_t1_ParamLimits

0xa03e,	// (0x000857b2) popup_call_audio_in_window_t1

0xa05a,	// (0x000857ce) popup_call_audio_in_window_t2_ParamLimits

0xa05a,	// (0x000857ce) popup_call_audio_in_window_t2

0xa076,	// (0x000857ea) popup_call_audio_in_window_t3_ParamLimits

0xa076,	// (0x000857ea) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008a84e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008a84e) popup_call_audio_in_window_t

0xa004,	// (0x00085778) bg_popup_call_pane_cp01_ParamLimits

0xa004,	// (0x00085778) bg_popup_call_pane_cp01

0xa012,	// (0x00085786) call_thumbnail_pane_cp02

0xa089,	// (0x000857fd) call_type_pane_cp022

0xa091,	// (0x00085805) popup_call_audio_out_window_g1_ParamLimits

0xa091,	// (0x00085805) popup_call_audio_out_window_g1

0xa0a3,	// (0x00085817) popup_call_audio_out_window_g2_ParamLimits

0xa0a3,	// (0x00085817) popup_call_audio_out_window_g2

0xa0af,	// (0x00085823) popup_call_audio_out_window_g3_ParamLimits

0xa0af,	// (0x00085823) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008a855) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008a855) popup_call_audio_out_window_g

0xa0c1,	// (0x00085835) popup_call_audio_out_window_t1_ParamLimits

0xa0c1,	// (0x00085835) popup_call_audio_out_window_t1

0xa0d9,	// (0x0008584d) popup_call_audio_out_window_t2_ParamLimits

0xa0d9,	// (0x0008584d) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008a85c) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008a85c) popup_call_audio_out_window_t

0xa0ee,	// (0x00085862) bg_popup_call_pane_ParamLimits

0xa0ee,	// (0x00085862) bg_popup_call_pane

0x2216,	// (0x0007d98a) call_thumbnail_pane_cp_ParamLimits

0x2216,	// (0x0007d98a) call_thumbnail_pane_cp

0xa172,	// (0x000858e6) call_type_pane_cp01_ParamLimits

0xa172,	// (0x000858e6) call_type_pane_cp01

0xa1b6,	// (0x0008592a) popup_call_audio_first_window_g1_ParamLimits

0xa1b6,	// (0x0008592a) popup_call_audio_first_window_g1

0xa202,	// (0x00085976) popup_call_audio_first_window_g2_ParamLimits

0xa202,	// (0x00085976) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008a861) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008a861) popup_call_audio_first_window_g

0xa246,	// (0x000859ba) popup_call_audio_first_window_t1_ParamLimits

0xa246,	// (0x000859ba) popup_call_audio_first_window_t1

0xa2f2,	// (0x00085a66) popup_call_audio_first_window_t4_ParamLimits

0xa2f2,	// (0x00085a66) popup_call_audio_first_window_t4

0xa37e,	// (0x00085af2) popup_call_audio_first_window_t5_ParamLimits

0xa37e,	// (0x00085af2) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008a866) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008a866) popup_call_audio_first_window_t

0xa3ad,	// (0x00085b21) bg_popup_call_pane_cp02

0xa3b7,	// (0x00085b2b) call_type_pane_cp023

0xa3bf,	// (0x00085b33) popup_call_audio_wait_window_g1

0xa3c7,	// (0x00085b3b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008a86d) popup_call_audio_wait_window_g

0xa3cf,	// (0x00085b43) popup_call_audio_wait_window_t3

0xa3dd,	// (0x00085b51) bg_popup_call_pane_cp03_ParamLimits

0xa3dd,	// (0x00085b51) bg_popup_call_pane_cp03

0xa43d,	// (0x00085bb1) call_thumbnail_pane_cp011_ParamLimits

0xa43d,	// (0x00085bb1) call_thumbnail_pane_cp011

0xa449,	// (0x00085bbd) call_type_pane_cp034_ParamLimits

0xa449,	// (0x00085bbd) call_type_pane_cp034

0xa485,	// (0x00085bf9) popup_call_audio_second_window_g1_ParamLimits

0xa485,	// (0x00085bf9) popup_call_audio_second_window_g1

0xa4c1,	// (0x00085c35) popup_call_audio_second_window_g2_ParamLimits

0xa4c1,	// (0x00085c35) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008a872) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008a872) popup_call_audio_second_window_g

0xa4fd,	// (0x00085c71) popup_call_audio_second_window_t1_ParamLimits

0xa4fd,	// (0x00085c71) popup_call_audio_second_window_t1

0xa57e,	// (0x00085cf2) popup_call_audio_second_window_t2_ParamLimits

0xa57e,	// (0x00085cf2) popup_call_audio_second_window_t2

0xa5b4,	// (0x00085d28) popup_call_audio_second_window_t3_ParamLimits

0xa5b4,	// (0x00085d28) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008a877) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008a877) popup_call_audio_second_window_t

0xa3ad,	// (0x00085b21) bg_popup_call_pane_cp04

0xa5ea,	// (0x00085d5e) list_conf_pane

0xa5f2,	// (0x00085d66) popup_call_audio_conf_window_t1

0xa600,	// (0x00085d74) call_thumbnail_pane_g1

0xa608,	// (0x00085d7c) bg_pinb_pane_ParamLimits

0xa608,	// (0x00085d7c) bg_pinb_pane

0xa616,	// (0x00085d8a) find_pinb_pane

0xa61f,	// (0x00085d93) listscroll_pinb_pane_ParamLimits

0xa61f,	// (0x00085d93) listscroll_pinb_pane

0xa62e,	// (0x00085da2) pinb_bg_pane_g1

0x223a,	// (0x0007d9ae) pinb_bg_pane_g2

0x2246,	// (0x0007d9ba) pinb_bg_pane_g3

0x2252,	// (0x0007d9c6) pinb_bg_pane_g4

0x225e,	// (0x0007d9d2) pinb_bg_pane_g5

0x226a,	// (0x0007d9de) pinb_bg_pane_g6

0x2275,	// (0x0007d9e9) pinb_bg_pane_g7

0x2280,	// (0x0007d9f4) pinb_bg_pane_g8

0x228b,	// (0x0007d9ff) pinb_bg_pane_g9

0x2295,	// (0x0007da09) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008a87e) pinb_bg_pane_g

0x22b2,	// (0x0007da26) grid_pinb_pane

0x22bd,	// (0x0007da31) list_pinb_pane

0x22c8,	// (0x0007da3c) scroll_pane_cp01_ParamLimits

0x22c8,	// (0x0007da3c) scroll_pane_cp01

0xa638,	// (0x00085dac) find_pinb_pane_g1_ParamLimits

0xa638,	// (0x00085dac) find_pinb_pane_g1

0xa650,	// (0x00085dc4) find_pinb_pane_t1

0xa662,	// (0x00085dd6) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008a898) find_pinb_pane_t

0xa677,	// (0x00085deb) input_focus_pane_cp01_ParamLimits

0xa677,	// (0x00085deb) input_focus_pane_cp01

0x22da,	// (0x0007da4e) cell_pinb_pane_ParamLimits

0x22da,	// (0x0007da4e) cell_pinb_pane

0xa683,	// (0x00085df7) cell_pinb_pane_g1_ParamLimits

0xa683,	// (0x00085df7) cell_pinb_pane_g1

0xa696,	// (0x00085e0a) cell_pinb_pane_g2_ParamLimits

0xa696,	// (0x00085e0a) cell_pinb_pane_g2

0xa6a2,	// (0x00085e16) cell_pinb_pane_g3_ParamLimits

0xa6a2,	// (0x00085e16) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008a89d) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008a89d) cell_pinb_pane_g

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp01

0x2309,	// (0x0007da7d) list_pinb_item_pane_ParamLimits

0x2309,	// (0x0007da7d) list_pinb_item_pane

0xa3ad,	// (0x00085b21) list_highlight_pane_cp02

0x2333,	// (0x0007daa7) list_pinb_item_pane_g1_ParamLimits

0x2333,	// (0x0007daa7) list_pinb_item_pane_g1

0x2340,	// (0x0007dab4) list_pinb_item_pane_g2_ParamLimits

0x2340,	// (0x0007dab4) list_pinb_item_pane_g2

0x234c,	// (0x0007dac0) list_pinb_item_pane_g3_ParamLimits

0x234c,	// (0x0007dac0) list_pinb_item_pane_g3

0x235d,	// (0x0007dad1) list_pinb_item_pane_g4_ParamLimits

0x235d,	// (0x0007dad1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008a8a4) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008a8a4) list_pinb_item_pane_g

0x2369,	// (0x0007dadd) list_pinb_item_pane_t1_ParamLimits

0x2369,	// (0x0007dadd) list_pinb_item_pane_t1

0x239a,	// (0x0007db0e) calc_display_pane

0x23b8,	// (0x0007db2c) calc_paper_pane

0x23d4,	// (0x0007db48) grid_calc_pane

0xa3ad,	// (0x00085b21) bg_list_pane_cp01

0x2400,	// (0x0007db74) clock_g1

0x2408,	// (0x0007db7c) clock_g2

0x0001,

0xf139,	// (0x0008a8ad) clock_g

0x2412,	// (0x0007db86) clock_t1_ParamLimits

0x2412,	// (0x0007db86) clock_t1

0x2427,	// (0x0007db9b) clock_t2_ParamLimits

0x2427,	// (0x0007db9b) clock_t2

0x2439,	// (0x0007dbad) clock_t3_ParamLimits

0x2439,	// (0x0007dbad) clock_t3

0x244b,	// (0x0007dbbf) clock_t4_ParamLimits

0x244b,	// (0x0007dbbf) clock_t4

0x245d,	// (0x0007dbd1) clock_t5_ParamLimits

0x245d,	// (0x0007dbd1) clock_t5

0x2472,	// (0x0007dbe6) clock_t6_ParamLimits

0x2472,	// (0x0007dbe6) clock_t6

0x2484,	// (0x0007dbf8) clock_t7_ParamLimits

0x2484,	// (0x0007dbf8) clock_t7

0x2496,	// (0x0007dc0a) clock_t8_ParamLimits

0x2496,	// (0x0007dc0a) clock_t8

0x24ac,	// (0x0007dc20) clock_t9_ParamLimits

0x24ac,	// (0x0007dc20) clock_t9

0x0008,

0xf13e,	// (0x0008a8b2) clock_t_ParamLimits

0xf13e,	// (0x0008a8b2) clock_t

0xa6ae,	// (0x00085e22) popup_clock_analogue_window_cp02

0xa6ae,	// (0x00085e22) popup_clock_digital_window_cp01

0xa6b6,	// (0x00085e2a) listscroll_help_pane

0xa3ad,	// (0x00085b21) phob_pre_status_pane

0xa6c0,	// (0x00085e34) grid_qdial_pane

0xa608,	// (0x00085d7c) listscroll_mce_pane

0xa608,	// (0x00085d7c) bg_notes_pane

0xa6ca,	// (0x00085e3e) list_notes_pane

0x24c2,	// (0x0007dc36) scroll_pane_cp06

0xa6d8,	// (0x00085e4c) bg_calc_paper_pane

0x24d1,	// (0x0007dc45) list_calc_pane

0xa6ec,	// (0x00085e60) bg_calc_display_pane

0x24eb,	// (0x0007dc5f) calc_display_pane_t1

0x2500,	// (0x0007dc74) calc_display_pane_t2

0x2515,	// (0x0007dc89) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008a8c5) calc_display_pane_t

0x2527,	// (0x0007dc9b) cell_calc_pane_ParamLimits

0x2527,	// (0x0007dc9b) cell_calc_pane

0xa6f8,	// (0x00085e6c) bg_calc_paper_pane_g1

0xa704,	// (0x00085e78) bg_calc_paper_pane_g2

0xa710,	// (0x00085e84) bg_calc_paper_pane_g3

0xa71c,	// (0x00085e90) bg_calc_paper_pane_g4

0xa728,	// (0x00085e9c) bg_calc_paper_pane_g5

0x2554,	// (0x0007dcc8) bg_calc_paper_pane_g6

0x2565,	// (0x0007dcd9) bg_calc_paper_pane_g7

0x2576,	// (0x0007dcea) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008a8cc) bg_calc_paper_pane_g

0x2587,	// (0x0007dcfb) calc_bg_paper_pane_g9

0x2598,	// (0x0007dd0c) list_calc_item_pane_ParamLimits

0x2598,	// (0x0007dd0c) list_calc_item_pane

0xa734,	// (0x00085ea8) list_calc_item_pane_g1

0x25cc,	// (0x0007dd40) list_calc_item_pane_t1_ParamLimits

0x25cc,	// (0x0007dd40) list_calc_item_pane_t1

0x25de,	// (0x0007dd52) list_calc_item_pane_t2_ParamLimits

0x25de,	// (0x0007dd52) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008a8dd) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008a8dd) list_calc_item_pane_t

0xa741,	// (0x00085eb5) cell_calc_pane_g1

0xa74b,	// (0x00085ebf) grid_highlight_pane_cp02

0xa76d,	// (0x00085ee1) bg_calc_display_pane_g1

0x260e,	// (0x0007dd82) bg_calc_display_pane_g2

0xa776,	// (0x00085eea) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008a8e7) bg_calc_display_pane_g

0x2618,	// (0x0007dd8c) cell_qdial_pane_ParamLimits

0x2618,	// (0x0007dd8c) cell_qdial_pane

0x262c,	// (0x0007dda0) cell_qdial_pane_g1_ParamLimits

0x262c,	// (0x0007dda0) cell_qdial_pane_g1

0x2639,	// (0x0007ddad) cell_qdial_pane_g2_ParamLimits

0x2639,	// (0x0007ddad) cell_qdial_pane_g2

0xa77f,	// (0x00085ef3) cell_qdial_pane_g3_ParamLimits

0xa77f,	// (0x00085ef3) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008a8ee) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008a8ee) cell_qdial_pane_g

0x2656,	// (0x0007ddca) cell_qdial_pane_t1_ParamLimits

0x2656,	// (0x0007ddca) cell_qdial_pane_t1

0x266e,	// (0x0007dde2) cell_qdial_pane_t2_ParamLimits

0x266e,	// (0x0007dde2) cell_qdial_pane_t2

0x2681,	// (0x0007ddf5) cell_qdial_pane_t3_ParamLimits

0x2681,	// (0x0007ddf5) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008a8f7) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008a8f7) cell_qdial_pane_t

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp04

0xa78b,	// (0x00085eff) thumbnail_qdial_pane_ParamLimits

0xa78b,	// (0x00085eff) thumbnail_qdial_pane

0xa837,	// (0x00085fab) list_help_pane

0xa840,	// (0x00085fb4) scroll_pane_cp02

0x2694,	// (0x0007de08) help_list_pane_t1_ParamLimits

0x2694,	// (0x0007de08) help_list_pane_t1

0x26ce,	// (0x0007de42) bg_notes_pane_g2

0x26d6,	// (0x0007de4a) bg_notes_pane_g3

0x26de,	// (0x0007de52) notes_bg_pane_g1

0x26e6,	// (0x0007de5a) notes_bg_pane_g4

0x26ee,	// (0x0007de62) notes_bg_pane_g5

0x26f6,	// (0x0007de6a) notes_bg_pane_g6

0x26fe,	// (0x0007de72) notes_bg_pane_g7

0x2706,	// (0x0007de7a) notes_bg_pane_g8

0x270e,	// (0x0007de82) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008a915) notes_bg_pane_g

0x2716,	// (0x0007de8a) list_notes_text_pane_ParamLimits

0x2716,	// (0x0007de8a) list_notes_text_pane

0xa849,	// (0x00085fbd) list_notes_text_pane_g1

0x0cbe,	// (0x0007c432) list_notes_text_pane_t1

0x2745,	// (0x0007deb9) listscroll_cale_week_pane

0x276a,	// (0x0007dede) bg_cale_heading_pane

0xa86c,	// (0x00085fe0) bg_cale_pane_cp01

0x278c,	// (0x0007df00) cale_week_corner_pane

0x27a6,	// (0x0007df1a) cale_week_day_heading_pane

0x27c8,	// (0x0007df3c) cale_week_scroll_pane_g1

0x27e5,	// (0x0007df59) cale_week_scroll_pane_g2

0x27f8,	// (0x0007df6c) cale_week_scroll_pane_g3

0x280b,	// (0x0007df7f) cale_week_scroll_pane_g4

0x281e,	// (0x0007df92) cale_week_scroll_pane_g5

0x2831,	// (0x0007dfa5) cale_week_scroll_pane_g6

0x2844,	// (0x0007dfb8) cale_week_scroll_pane_g7

0x2857,	// (0x0007dfcb) cale_week_scroll_pane_g8

0x286c,	// (0x0007dfe0) cale_week_scroll_pane_g9

0x287f,	// (0x0007dff3) cale_week_scroll_pane_g10

0x2892,	// (0x0007e006) cale_week_scroll_pane_g11

0x28a5,	// (0x0007e019) cale_week_scroll_pane_g12

0x28bc,	// (0x0007e030) cale_week_scroll_pane_g13

0x28d7,	// (0x0007e04b) cale_week_scroll_pane_g14

0x28f2,	// (0x0007e066) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008a924) cale_week_scroll_pane_g

0x2922,	// (0x0007e096) cale_week_time_pane

0x2937,	// (0x0007e0ab) grid_cale_week_pane

0xa89b,	// (0x0008600f) scroll_pane_cp08

0x2958,	// (0x0007e0cc) cell_cale_week_pane_ParamLimits

0x2958,	// (0x0007e0cc) cell_cale_week_pane

0x29bc,	// (0x0007e130) cale_week_day_heading_pane_t1

0x29f7,	// (0x0007e16b) cale_week_day_heading_pane_t2

0x2a32,	// (0x0007e1a6) cale_week_day_heading_pane_t3

0x2a6d,	// (0x0007e1e1) cale_week_day_heading_pane_t4

0x2aa8,	// (0x0007e21c) cale_week_day_heading_pane_t5

0x2ae3,	// (0x0007e257) cale_week_day_heading_pane_t6

0x2b1e,	// (0x0007e292) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008a945) cale_week_day_heading_pane_t

0xa8b8,	// (0x0008602c) bg_cale_side_pane

0x2b59,	// (0x0007e2cd) cale_week_time_pane_t1

0x2b73,	// (0x0007e2e7) cale_week_time_pane_t2

0x2b8d,	// (0x0007e301) cale_week_time_pane_t3

0x2ba7,	// (0x0007e31b) cale_week_time_pane_t4

0x2bc1,	// (0x0007e335) cale_week_time_pane_t5

0x2bdd,	// (0x0007e351) cale_week_time_pane_t6

0x2bff,	// (0x0007e373) cale_week_time_pane_t7

0x2c23,	// (0x0007e397) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008a954) cale_week_time_pane_t

0x2c49,	// (0x0007e3bd) cell_cale_week_pane_g2

0x2c6d,	// (0x0007e3e1) cell_cale_week_pane_g3_ParamLimits

0x2c6d,	// (0x0007e3e1) cell_cale_week_pane_g3

0xa8c6,	// (0x0008603a) grid_highlight_pane_cp07

0xa8ce,	// (0x00086042) listscroll_gms_pane

0xa8d8,	// (0x0008604c) grid_gms_pane

0xa8e1,	// (0x00086055) listscroll_gms_pane_g1

0xa8e9,	// (0x0008605d) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008a965) listscroll_gms_pane_g

0x2c85,	// (0x0007e3f9) scroll_pane_cp010

0x2c90,	// (0x0007e404) cell_gms_pane_ParamLimits

0x2c90,	// (0x0007e404) cell_gms_pane

0x2ca0,	// (0x0007e414) cell_gms_pane_g1

0xa8f1,	// (0x00086065) cell_gms_pane_g2

0xa849,	// (0x00085fbd) cell_gms_pane_g3

0xa8f9,	// (0x0008606d) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008a96a) cell_gms_pane_g

0xa902,	// (0x00086076) grid_highlight_pane_cp09

0x5099,	// (0x0008080d) phob_pre_status_pane_g1

0x50a1,	// (0x00080815) phob_pre_status_pane_g2

0x50a9,	// (0x0008081d) phob_pre_status_pane_g3

0x50b1,	// (0x00080825) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008ad55) phob_pre_status_pane_g

0x50c1,	// (0x00080835) phob_pre_status_pane_t1

0x50d1,	// (0x00080845) phob_pre_status_pane_t2

0x50e1,	// (0x00080855) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008ad60) phob_pre_status_pane_t

0xa90a,	// (0x0008607e) bg_list_pane_cp05

0x2cb0,	// (0x0007e424) grid_vorec_pane

0x2cba,	// (0x0007e42e) vorec_t1

0x2cc8,	// (0x0007e43c) vorec_t2

0x2cd6,	// (0x0007e44a) vorec_t3

0x2ce4,	// (0x0007e458) vorec_t4

0x9f6a,	// (0x000856de) vorec_t5

0x9f78,	// (0x000856ec) vorec_t6

0x0004,

0xf1ff,	// (0x0008a973) vorec_t

0x9f86,	// (0x000856fa) wait_bar_pane_cp01

0x2d00,	// (0x0007e474) cell_vorec_pane_ParamLimits

0x2d00,	// (0x0007e474) cell_vorec_pane

0x2d13,	// (0x0007e487) cell_vorec_pane_g1

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp05

0x2d2d,	// (0x0007e4a1) cams_zoom_pane

0x2d39,	// (0x0007e4ad) image_vga_pane

0x2d48,	// (0x0007e4bc) main_camera_pane_g1

0x2d56,	// (0x0007e4ca) main_camera_pane_g2

0x2d62,	// (0x0007e4d6) main_camera_pane_g3

0x2d6e,	// (0x0007e4e2) main_camera_pane_g4

0x2d7a,	// (0x0007e4ee) main_camera_pane_g5

0x2d86,	// (0x0007e4fa) main_camera_pane_g6

0x2d92,	// (0x0007e506) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008a97e) main_camera_pane_g

0x2d9e,	// (0x0007e512) main_camera_pane_t1

0x2db0,	// (0x0007e524) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008a98f) main_camera_pane_t

0x2dd1,	// (0x0007e545) cams_zoom_pane_cp_ParamLimits

0x2dd1,	// (0x0007e545) cams_zoom_pane_cp

0x2df5,	// (0x0007e569) image_cif_pane_ParamLimits

0x2df5,	// (0x0007e569) image_cif_pane

0x2e13,	// (0x0007e587) image_subqcif_pane

0x2e1b,	// (0x0007e58f) main_video_pane_g1_ParamLimits

0x2e1b,	// (0x0007e58f) main_video_pane_g1

0x2e3b,	// (0x0007e5af) main_video_pane_g2_ParamLimits

0x2e3b,	// (0x0007e5af) main_video_pane_g2

0x2e6b,	// (0x0007e5df) main_video_pane_g3_ParamLimits

0x2e6b,	// (0x0007e5df) main_video_pane_g3

0x2e94,	// (0x0007e608) main_video_pane_g4_ParamLimits

0x2e94,	// (0x0007e608) main_video_pane_g4

0x2ebd,	// (0x0007e631) main_video_pane_g5_ParamLimits

0x2ebd,	// (0x0007e631) main_video_pane_g5

0xa91e,	// (0x00086092) main_video_pane_g6_ParamLimits

0xa91e,	// (0x00086092) main_video_pane_g6

0x0006,

0xf220,	// (0x0008a994) main_video_pane_g_ParamLimits

0xf220,	// (0x0008a994) main_video_pane_g

0x2edf,	// (0x0007e653) main_video_pane_t1_ParamLimits

0x2edf,	// (0x0007e653) main_video_pane_t1

0xa938,	// (0x000860ac) cams_zoom_pane_g1

0xa941,	// (0x000860b5) cams_zoom_pane_g2

0xa94a,	// (0x000860be) cams_zoom_pane_g3

0xa953,	// (0x000860c7) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008a9a3) cams_zoom_pane_g

0x2f29,	// (0x0007e69d) grid_cams_pane

0x2f37,	// (0x0007e6ab) linegrid_cams_pane

0x2f45,	// (0x0007e6b9) cell_cams_pane_ParamLimits

0x2f45,	// (0x0007e6b9) cell_cams_pane

0xa95c,	// (0x000860d0) cams_burst_image_pane

0xa964,	// (0x000860d8) cell_cams_pane_g1

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp03

0xa741,	// (0x00085eb5) mp_bg_pane_g1

0xa3ad,	// (0x00085b21) bg_list_pane_cp03

0xc6c7,	// (0x00087e3b) bg_mp_pane

0xc6cf,	// (0x00087e43) grid_mp_pane

0xc6d7,	// (0x00087e4b) media_player_g1

0xc6df,	// (0x00087e53) media_player_t1

0xc6ed,	// (0x00087e61) media_player_t2

0xc6fb,	// (0x00087e6f) media_player_t3

0xc709,	// (0x00087e7d) media_player_t4

0xc717,	// (0x00087e8b) media_player_t5

0xc725,	// (0x00087e99) media_player_t6

0xc733,	// (0x00087ea7) media_player_t7

0x0006,

0xf5cb,	// (0x0008ad3f) media_player_t

0xc741,	// (0x00087eb5) wait_bar_pane_cp02

0xf5b0,	// (0x0008ad24) main_usb_pane_t

0x5090,	// (0x00080804) cell_mp_pane

0xa741,	// (0x00085eb5) cell_mp_pane_g1

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp06

0xa96c,	// (0x000860e0) grid_skin_colour_pane

0xa974,	// (0x000860e8) list_highlight_pane_cp03

0x2f70,	// (0x0007e6e4) skin_g1

0xa97c,	// (0x000860f0) skin_t1

0xa98b,	// (0x000860ff) skin_t2

0x0001,

0xf264,	// (0x0008a9d8) skin_t

0x2f7a,	// (0x0007e6ee) cell_skin_colour_pane_ParamLimits

0x2f7a,	// (0x0007e6ee) cell_skin_colour_pane

0xa999,	// (0x0008610d) cell_skin_colour_pane_g1

0x2ffe,	// (0x0007e772) call_video_g1_ParamLimits

0x2ffe,	// (0x0007e772) call_video_g1

0x300e,	// (0x0007e782) call_video_g2_ParamLimits

0x300e,	// (0x0007e782) call_video_g2

0x0001,

0xf269,	// (0x0008a9dd) call_video_g_ParamLimits

0xf269,	// (0x0008a9dd) call_video_g

0x3068,	// (0x0007e7dc) call_video_uplink_pane_cp1_ParamLimits

0x3068,	// (0x0007e7dc) call_video_uplink_pane_cp1

0xa9ab,	// (0x0008611f) call_video_uplink_pane_cp2

0x3134,	// (0x0007e8a8) video_down_crop_pane_ParamLimits

0x3134,	// (0x0007e8a8) video_down_crop_pane

0x3226,	// (0x0007e99a) video_down_pane_ParamLimits

0x3226,	// (0x0007e99a) video_down_pane

0xa9b3,	// (0x00086127) video_down_subqcif_pane_ParamLimits

0xa9b3,	// (0x00086127) video_down_subqcif_pane

0xa9cb,	// (0x0008613f) video_down_subqcif_pane_cp_ParamLimits

0xa9cb,	// (0x0008613f) video_down_subqcif_pane_cp

0xa9f1,	// (0x00086165) im_reading_pane_ParamLimits

0xa9f1,	// (0x00086165) im_reading_pane

0x3348,	// (0x0007eabc) im_writing_pane_ParamLimits

0x3348,	// (0x0007eabc) im_writing_pane

0x3366,	// (0x0007eada) im_reading_pane_t1

0xaa22,	// (0x00086196) list_im_pane

0xaa33,	// (0x000861a7) scroll_pane_cp07

0x33c1,	// (0x0007eb35) im_writing_pane_t1_ParamLimits

0x33c1,	// (0x0007eb35) im_writing_pane_t1

0xaa4c,	// (0x000861c0) im_writing_pane_t2_ParamLimits

0xaa4c,	// (0x000861c0) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008a9e7) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008a9e7) im_writing_pane_t

0xa3ad,	// (0x00085b21) input_focus_pane_cp04

0xa3ad,	// (0x00085b21) input_focus_pane_cp05

0x33d3,	// (0x0007eb47) list_im_single_pane_ParamLimits

0x33d3,	// (0x0007eb47) list_im_single_pane

0x33fb,	// (0x0007eb6f) list_single_im_pane_t1

0x5054,	// (0x000807c8) blid_accuracy_pane

0x505c,	// (0x000807d0) blid_compass_pane

0x5066,	// (0x000807da) main_location_t1

0x5074,	// (0x000807e8) main_location_t2

0x5082,	// (0x000807f6) main_location_t3

0x0002,

0xf5da,	// (0x0008ad4e) main_location_t

0xa3ad,	// (0x00085b21) aid_levels_location

0xa741,	// (0x00085eb5) blid_accuracy_pane_g1

0xa741,	// (0x00085eb5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008aa49) blid_accuracy_pane_g

0xaa94,	// (0x00086208) wml_content_pane

0xaad2,	// (0x00086246) wml_button_pane_ParamLimits

0xaad2,	// (0x00086246) wml_button_pane

0x340a,	// (0x0007eb7e) wml_list_single_large_pane_ParamLimits

0x340a,	// (0x0007eb7e) wml_list_single_large_pane

0x343b,	// (0x0007ebaf) wml_list_single_medium_pane_ParamLimits

0x343b,	// (0x0007ebaf) wml_list_single_medium_pane

0x3473,	// (0x0007ebe7) wml_list_single_small_pane_ParamLimits

0x3473,	// (0x0007ebe7) wml_list_single_small_pane

0xaae6,	// (0x0008625a) wml_selection_box_pane_ParamLimits

0xaae6,	// (0x0008625a) wml_selection_box_pane

0xaaf9,	// (0x0008626d) wml_list_single_pane_t1

0xab08,	// (0x0008627c) wml_list_single_medium_pane_t1

0xab17,	// (0x0008628b) wml_list_single_large_pane_t1

0xab26,	// (0x0008629a) input_focus_pane_cp02_ParamLimits

0xab26,	// (0x0008629a) input_focus_pane_cp02

0xab39,	// (0x000862ad) wml_selection_box_pane_g1

0xab42,	// (0x000862b6) wml_selection_box_pane_t1_ParamLimits

0xab42,	// (0x000862b6) wml_selection_box_pane_t1

0xa608,	// (0x00085d7c) bg_wml_button_pane_ParamLimits

0xa608,	// (0x00085d7c) bg_wml_button_pane

0xab5a,	// (0x000862ce) wml_button_pane_g1

0xab62,	// (0x000862d6) wml_button_pane_t1

0xab5a,	// (0x000862ce) wml_button_bg_pane_g1

0xab72,	// (0x000862e6) wml_button_bg_pane_g2

0xab7a,	// (0x000862ee) wml_button_bg_pane_g3

0xab82,	// (0x000862f6) wml_button_bg_pane_g4

0xab8a,	// (0x000862fe) wml_button_bg_pane_g5

0xab92,	// (0x00086306) wml_button_bg_pane_g6

0xab9a,	// (0x0008630e) wml_button_bg_pane_g7

0xaba2,	// (0x00086316) wml_button_bg_pane_g8

0xabaa,	// (0x0008631e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008a9ec) wml_button_bg_pane_g

0x34b4,	// (0x0007ec28) bg_list_pane_cp02

0xabb2,	// (0x00086326) mce_header_pane_ParamLimits

0xabb2,	// (0x00086326) mce_header_pane

0xabc8,	// (0x0008633c) mce_icon_pane

0xabc8,	// (0x0008633c) mce_image_pane

0xabd1,	// (0x00086345) mce_text_pane_ParamLimits

0xabd1,	// (0x00086345) mce_text_pane

0x34be,	// (0x0007ec32) scroll_pane_cp03

0xaaca,	// (0x0008623e) scroll_pane_cp04

0xabe4,	// (0x00086358) scroll_pane_cp05_ParamLimits

0xabe4,	// (0x00086358) scroll_pane_cp05

0x34c8,	// (0x0007ec3c) mce_header_field_pane_ParamLimits

0x34c8,	// (0x0007ec3c) mce_header_field_pane

0x34e8,	// (0x0007ec5c) mce_header_field_pane_2_ParamLimits

0x34e8,	// (0x0007ec5c) mce_header_field_pane_2

0x34fe,	// (0x0007ec72) mce_header_field_pane_3

0x3506,	// (0x0007ec7a) list_single_mce_message_pane_ParamLimits

0x3506,	// (0x0007ec7a) list_single_mce_message_pane

0x3538,	// (0x0007ecac) list_single_mce_smart_pane_ParamLimits

0x3538,	// (0x0007ecac) list_single_mce_smart_pane

0xabf0,	// (0x00086364) input_focus_pane_cp03

0xabf9,	// (0x0008636d) list_header_data_pane

0x3575,	// (0x0007ece9) mce_header_field_pane_t1

0x3585,	// (0x0007ecf9) list_single_mce_header_pane_ParamLimits

0x3585,	// (0x0007ecf9) list_single_mce_header_pane

0xac01,	// (0x00086375) list_single_mce_header_pane_t1

0xac10,	// (0x00086384) list_single_mce_message_pane_g1

0xac18,	// (0x0008638c) list_single_mce_message_pane_t1

0x35dc,	// (0x0007ed50) bg_cale_heading_pane_cp01_ParamLimits

0x35dc,	// (0x0007ed50) bg_cale_heading_pane_cp01

0xac26,	// (0x0008639a) bg_cale_pane_cp02_ParamLimits

0xac26,	// (0x0008639a) bg_cale_pane_cp02

0x361f,	// (0x0007ed93) cale_month_corner_pane

0x3639,	// (0x0007edad) cale_month_day_heading_pane_ParamLimits

0x3639,	// (0x0007edad) cale_month_day_heading_pane

0x3694,	// (0x0007ee08) cale_month_pane_g1_ParamLimits

0x3694,	// (0x0007ee08) cale_month_pane_g1

0x36cc,	// (0x0007ee40) cale_month_pane_g2_ParamLimits

0x36cc,	// (0x0007ee40) cale_month_pane_g2

0x36f7,	// (0x0007ee6b) cale_month_pane_g3_ParamLimits

0x36f7,	// (0x0007ee6b) cale_month_pane_g3

0x3747,	// (0x0007eebb) cale_month_pane_g4_ParamLimits

0x3747,	// (0x0007eebb) cale_month_pane_g4

0x3797,	// (0x0007ef0b) cale_month_pane_g5_ParamLimits

0x3797,	// (0x0007ef0b) cale_month_pane_g5

0x37e7,	// (0x0007ef5b) cale_month_pane_g6_ParamLimits

0x37e7,	// (0x0007ef5b) cale_month_pane_g6

0x3837,	// (0x0007efab) cale_month_pane_g7_ParamLimits

0x3837,	// (0x0007efab) cale_month_pane_g7

0x389f,	// (0x0007f013) cale_month_pane_g8_ParamLimits

0x389f,	// (0x0007f013) cale_month_pane_g8

0x3907,	// (0x0007f07b) cale_month_pane_g9_ParamLimits

0x3907,	// (0x0007f07b) cale_month_pane_g9

0x3965,	// (0x0007f0d9) cale_month_pane_g10_ParamLimits

0x3965,	// (0x0007f0d9) cale_month_pane_g10

0x39c3,	// (0x0007f137) cale_month_pane_g11_ParamLimits

0x39c3,	// (0x0007f137) cale_month_pane_g11

0x3a17,	// (0x0007f18b) cale_month_pane_g12_ParamLimits

0x3a17,	// (0x0007f18b) cale_month_pane_g12

0x3a6d,	// (0x0007f1e1) cale_month_pane_g13_ParamLimits

0x3a6d,	// (0x0007f1e1) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008a9ff) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008a9ff) cale_month_pane_g

0x3ac3,	// (0x0007f237) cale_month_week_pane

0x3ad8,	// (0x0007f24c) grid_cale_month_pane_ParamLimits

0x3ad8,	// (0x0007f24c) grid_cale_month_pane

0x3b2a,	// (0x0007f29e) cale_month_day_heading_pane_t1

0x3bb0,	// (0x0007f324) cale_month_day_heading_pane_t2

0x3c41,	// (0x0007f3b5) cale_month_day_heading_pane_t3

0x3cd2,	// (0x0007f446) cale_month_day_heading_pane_t4

0x3d63,	// (0x0007f4d7) cale_month_day_heading_pane_t5

0x3df4,	// (0x0007f568) cale_month_day_heading_pane_t6

0x3e91,	// (0x0007f605) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008aa1a) cale_month_day_heading_pane_t

0xa8b8,	// (0x0008602c) bg_cale_side_pane_cp01

0x3f3a,	// (0x0007f6ae) cale_month_week_pane_t1

0x3f53,	// (0x0007f6c7) cale_month_week_pane_t2

0x3f6c,	// (0x0007f6e0) cale_month_week_pane_t3

0x3f85,	// (0x0007f6f9) cale_month_week_pane_t4

0x3fa2,	// (0x0007f716) cale_month_week_pane_t5

0x3fc3,	// (0x0007f737) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008aa29) cale_month_week_pane_t

0x3fe4,	// (0x0007f758) cell_cale_month_pane_ParamLimits

0x3fe4,	// (0x0007f758) cell_cale_month_pane

0x410a,	// (0x0007f87e) cell_cale_month_pane_g1

0x4116,	// (0x0007f88a) cell_cale_month_pane_t1_ParamLimits

0x4116,	// (0x0007f88a) cell_cale_month_pane_t1

0xa8c6,	// (0x0008603a) grid_highlight_pane_cp08

0xa741,	// (0x00085eb5) main_smil_g1

0x4136,	// (0x0007f8aa) smil_status_pane

0xac65,	// (0x000863d9) smil_text_pane

0xc5e7,	// (0x00087d5b) bg_popup_call3_rect_pane_g8

0xc5ef,	// (0x00087d63) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008ace2) bg_popup_call3_rect_pane_g

0xc836,	// (0x00087faa) smil_status_volume_pane_g1

0xac6f,	// (0x000863e3) smil_status_pane_t1

0x547c,	// (0x00080bf0) volume_smil_pane

0xac86,	// (0x000863fa) list_smil_text_pane

0x4149,	// (0x0007f8bd) scroll_pane_cp011

0x4154,	// (0x0007f8c8) smil_text_list_pane_t1_ParamLimits

0x4154,	// (0x0007f8c8) smil_text_list_pane_t1

0x41e8,	// (0x0007f95c) aid_volume_smil_ParamLimits

0x41e8,	// (0x0007f95c) aid_volume_smil

0xa741,	// (0x00085eb5) smil_volume_pane_g1

0xa741,	// (0x00085eb5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008aa49) smil_volume_pane_g

0x2745,	// (0x0007deb9) listscroll_cale_day_pane

0xac90,	// (0x00086404) bg_cale_pane

0xaca8,	// (0x0008641c) list_cale_pane

0xaccb,	// (0x0008643f) scroll_pane_cp09

0xacdc,	// (0x00086450) cale_bg_pane_g1

0xace4,	// (0x00086458) cale_bg_pane_g2

0xacec,	// (0x00086460) cale_bg_pane_g3

0xacf4,	// (0x00086468) cale_bg_pane_g4

0xacfc,	// (0x00086470) cale_bg_pane_g5

0xad04,	// (0x00086478) cale_bg_pane_g6

0xad0c,	// (0x00086480) cale_bg_pane_g7

0xad14,	// (0x00086488) cale_bg_pane_g8

0xad1c,	// (0x00086490) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008aa4e) cale_bg_pane_g

0x420a,	// (0x0007f97e) list_cale_time_pane_ParamLimits

0x420a,	// (0x0007f97e) list_cale_time_pane

0xad2c,	// (0x000864a0) list_cale_time_pane_g1_ParamLimits

0xad2c,	// (0x000864a0) list_cale_time_pane_g1

0xad38,	// (0x000864ac) list_cale_time_pane_g2_ParamLimits

0xad38,	// (0x000864ac) list_cale_time_pane_g2

0x4236,	// (0x0007f9aa) list_cale_time_pane_g3_ParamLimits

0x4236,	// (0x0007f9aa) list_cale_time_pane_g3

0x4244,	// (0x0007f9b8) list_cale_time_pane_g4_ParamLimits

0x4244,	// (0x0007f9b8) list_cale_time_pane_g4

0x4252,	// (0x0007f9c6) list_cale_time_pane_g5_ParamLimits

0x4252,	// (0x0007f9c6) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008aa61) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008aa61) list_cale_time_pane_g

0xad52,	// (0x000864c6) list_cale_time_pane_t1_ParamLimits

0xad52,	// (0x000864c6) list_cale_time_pane_t1

0xad7a,	// (0x000864ee) list_cale_time_pane_t2_ParamLimits

0xad7a,	// (0x000864ee) list_cale_time_pane_t2

0x44f4,	// (0x0007fc68) aid_blid_cardinal_pane

0x4536,	// (0x0007fcaa) compass_pane_t4

0xada2,	// (0x00086516) list_cale_time_pane_t4_ParamLimits

0xada2,	// (0x00086516) list_cale_time_pane_t4

0x4544,	// (0x0007fcb8) compass_pane_t5

0x4554,	// (0x0007fcc8) compass_pane_t6

0x4562,	// (0x0007fcd6) compass_pane_t7

0xb25f,	// (0x000869d3) navi_pane_cc_t1

0xb44a,	// (0x00086bbe) aid_phob_thumbnail_center_pane

0x4b4d,	// (0x000802c1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008aa6e) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008aa6e) list_cale_time_pane_t

0xa004,	// (0x00085778) bg_popup_window_pane_cp02_ParamLimits

0xa004,	// (0x00085778) bg_popup_window_pane_cp02

0xadca,	// (0x0008653e) heading_pane_cp01_ParamLimits

0xadca,	// (0x0008653e) heading_pane_cp01

0xadd6,	// (0x0008654a) loc_req_pane_ParamLimits

0xadd6,	// (0x0008654a) loc_req_pane

0xade6,	// (0x0008655a) loc_type_pane_ParamLimits

0xade6,	// (0x0008655a) loc_type_pane

0xadf8,	// (0x0008656c) loc_type_pane_t1_ParamLimits

0xadf8,	// (0x0008656c) loc_type_pane_t1

0xae0a,	// (0x0008657e) loc_type_pane_t2_ParamLimits

0xae0a,	// (0x0008657e) loc_type_pane_t2

0xae1c,	// (0x00086590) loc_type_pane_t3_ParamLimits

0xae1c,	// (0x00086590) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008aa75) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008aa75) loc_type_pane_t

0xae2e,	// (0x000865a2) list_loc_req_pane

0xae38,	// (0x000865ac) scroll_pane_cp012

0x0dec,	// (0x0007c560) list_single_loc_request_popup_menu_pane_ParamLimits

0x0dec,	// (0x0007c560) list_single_loc_request_popup_menu_pane

0xae43,	// (0x000865b7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae43,	// (0x000865b7) list_single_loc_request_popup_menu_pane_g1

0xae4f,	// (0x000865c3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae4f,	// (0x000865c3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008aa7c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008aa7c) list_single_loc_request_popup_menu_pane_g

0xae5b,	// (0x000865cf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae5b,	// (0x000865cf) list_single_loc_request_popup_menu_pane_t1

0x4260,	// (0x0007f9d4) bg_popup_window_pane_cp03_ParamLimits

0x4260,	// (0x0007f9d4) bg_popup_window_pane_cp03

0x426e,	// (0x0007f9e2) heading_loc_req_pane_ParamLimits

0x426e,	// (0x0007f9e2) heading_loc_req_pane

0x427a,	// (0x0007f9ee) popup_dyc_status_message_window_g1_ParamLimits

0x427a,	// (0x0007f9ee) popup_dyc_status_message_window_g1

0x4286,	// (0x0007f9fa) popup_dyc_status_message_window_t1_ParamLimits

0x4286,	// (0x0007f9fa) popup_dyc_status_message_window_t1

0x4298,	// (0x0007fa0c) popup_dyc_status_message_window_t2_ParamLimits

0x4298,	// (0x0007fa0c) popup_dyc_status_message_window_t2

0x42aa,	// (0x0007fa1e) popup_dyc_status_message_window_t3_ParamLimits

0x42aa,	// (0x0007fa1e) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008aa81) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008aa81) popup_dyc_status_message_window_t

0xa3ad,	// (0x00085b21) bg_heading_pane_cp01

0xae71,	// (0x000865e5) heading_loc_req_pane_g1

0xae79,	// (0x000865ed) heading_loc_req_pane_g2

0xae81,	// (0x000865f5) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008aa88) heading_loc_req_pane_g

0xae89,	// (0x000865fd) heading_loc_req_pane_t1

0xae98,	// (0x0008660c) bg_popup_sub_pane_cp01_ParamLimits

0xae98,	// (0x0008660c) bg_popup_sub_pane_cp01

0xaea6,	// (0x0008661a) popup_cale_events_window_g1_ParamLimits

0xaea6,	// (0x0008661a) popup_cale_events_window_g1

0xaec6,	// (0x0008663a) popup_cale_events_window_g2_ParamLimits

0xaec6,	// (0x0008663a) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008aabc) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008aabc) popup_cale_events_window_g

0xaee6,	// (0x0008665a) popup_cale_events_window_t1_ParamLimits

0xaee6,	// (0x0008665a) popup_cale_events_window_t1

0xaef8,	// (0x0008666c) popup_cale_events_window_t2_ParamLimits

0xaef8,	// (0x0008666c) popup_cale_events_window_t2

0xaf36,	// (0x000866aa) popup_cale_events_window_t3_ParamLimits

0xaf36,	// (0x000866aa) popup_cale_events_window_t3

0xaf70,	// (0x000866e4) popup_cale_events_window_t4_ParamLimits

0xaf70,	// (0x000866e4) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008aac1) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008aac1) popup_cale_events_window_t

0x42d4,	// (0x0007fa48) call_type_pane

0xb2a7,	// (0x00086a1b) popup_call_status_window_g1

0x42e0,	// (0x0007fa54) popup_call_status_window_g2

0x42ec,	// (0x0007fa60) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008aaca) popup_call_status_window_g

0xafa6,	// (0x0008671a) call_type_pane_g1

0xafaf,	// (0x00086723) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008aad1) call_type_pane_g

0xa3ad,	// (0x00085b21) bg_popup_sub_pane_cp02

0xafb8,	// (0x0008672c) listscroll_popup_wml_pane

0xafc0,	// (0x00086734) list_wml_pane

0xafca,	// (0x0008673e) scroll_pane_cp013

0xafd5,	// (0x00086749) list_single_graphic_popup_wml_pane_ParamLimits

0xafd5,	// (0x00086749) list_single_graphic_popup_wml_pane

0xa741,	// (0x00085eb5) list_single_graphic_popup_wml_pane_g1

0xafe9,	// (0x0008675d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008aad6) list_single_graphic_popup_wml_pane_g

0xaff1,	// (0x00086765) list_single_graphic_popup_wml_pane_t1

0xb007,	// (0x0008677b) aid_call_pane

0xa600,	// (0x00085d74) popup_clock_analogue_window_g1

0xa600,	// (0x00085d74) popup_clock_analogue_window_g2

0x42f8,	// (0x0007fa6c) popup_clock_analogue_window_g3

0x42f8,	// (0x0007fa6c) popup_clock_analogue_window_g4

0xa741,	// (0x00085eb5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008aadb) popup_clock_analogue_window_g

0x4300,	// (0x0007fa74) popup_clock_analogue_window_t1

0x430e,	// (0x0007fa82) clock_digital_number_pane_ParamLimits

0x430e,	// (0x0007fa82) clock_digital_number_pane

0x431a,	// (0x0007fa8e) clock_digital_number_pane_cp02_ParamLimits

0x431a,	// (0x0007fa8e) clock_digital_number_pane_cp02

0x4326,	// (0x0007fa9a) clock_digital_number_pane_cp03_ParamLimits

0x4326,	// (0x0007fa9a) clock_digital_number_pane_cp03

0x4332,	// (0x0007faa6) clock_digital_number_pane_cp04_ParamLimits

0x4332,	// (0x0007faa6) clock_digital_number_pane_cp04

0x4342,	// (0x0007fab6) clock_digital_separator_pane_ParamLimits

0x4342,	// (0x0007fab6) clock_digital_separator_pane

0x434e,	// (0x0007fac2) popup_clock_digital_window_t1

0xa741,	// (0x00085eb5) clock_digital_number_pane_g1

0xa741,	// (0x00085eb5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008aa49) clock_digital_number_pane_g

0xa741,	// (0x00085eb5) clock_digital_separator_pane_g1

0xa741,	// (0x00085eb5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008aa49) clock_digital_separator_pane_g

0xa3ad,	// (0x00085b21) bg_popup_window_pane_cp04

0xb00f,	// (0x00086783) heading_pane_cp03

0xb017,	// (0x0008678b) listscroll_popup_gms_pane

0xb01f,	// (0x00086793) grid_large_graphic_popup_pane

0xb029,	// (0x0008679d) listscroll_popup_gms_pane_g1

0xb031,	// (0x000867a5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008aae6) listscroll_popup_gms_pane_g

0xaaca,	// (0x0008623e) scroll_pane_cp014

0xb039,	// (0x000867ad) cell_large_graphic_popup_pane_ParamLimits

0xb039,	// (0x000867ad) cell_large_graphic_popup_pane

0xb051,	// (0x000867c5) cell_large_graphic_popup_pane_g1_ParamLimits

0xb051,	// (0x000867c5) cell_large_graphic_popup_pane_g1

0xb05d,	// (0x000867d1) cell_large_graphic_popup_pane_g2_ParamLimits

0xb05d,	// (0x000867d1) cell_large_graphic_popup_pane_g2

0xb069,	// (0x000867dd) cell_large_graphic_popup_pane_g3_ParamLimits

0xb069,	// (0x000867dd) cell_large_graphic_popup_pane_g3

0xb082,	// (0x000867f6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb082,	// (0x000867f6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008aaeb) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008aaeb) cell_large_graphic_popup_pane_g

0xb092,	// (0x00086806) grid_highlight_pane_cp010

0xa741,	// (0x00085eb5) bg_popup_call_pane_g1

0xb09c,	// (0x00086810) list_single_graphic_popup_conf_pane_ParamLimits

0xb09c,	// (0x00086810) list_single_graphic_popup_conf_pane

0xb0af,	// (0x00086823) list_highlight_pane_cp01

0xb0b8,	// (0x0008682c) list_single_graphic_popup_conf_pane_g1

0xb0c0,	// (0x00086834) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008aaf4) list_single_graphic_popup_conf_pane_g

0xb0c8,	// (0x0008683c) list_single_graphic_popup_conf_pane_t1

0xb0d6,	// (0x0008684a) linegrid_cams_pane_g1

0x436b,	// (0x0007fadf) linegrid_cams_pane_g2

0xa849,	// (0x00085fbd) linegrid_cams_pane_g3

0xb0df,	// (0x00086853) linegrid_cams_pane_g4

0x4374,	// (0x0007fae8) linegrid_cams_pane_g5

0x437d,	// (0x0007faf1) linegrid_cams_pane_g6

0xa8f9,	// (0x0008606d) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008aaf9) linegrid_cams_pane_g

0xb0e8,	// (0x0008685c) popup_clock_analogue_window

0xb0e8,	// (0x0008685c) popup_clock_digital_window

0xa3ad,	// (0x00085b21) popup_phob_thumbnail_window

0xa741,	// (0x00085eb5) call_video_uplink_pane_g1

0xb0f1,	// (0x00086865) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008ab08) call_video_uplink_pane_g

0xa8c6,	// (0x0008603a) video_uplink_pane

0xb0f9,	// (0x0008686d) mce_image_pane_g1

0x4386,	// (0x0007fafa) mce_image_pane_g2

0x438e,	// (0x0007fb02) mce_image_pane_g3

0x4396,	// (0x0007fb0a) mce_image_pane_g4

0x439e,	// (0x0007fb12) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008ab0d) mce_image_pane_g

0xb103,	// (0x00086877) control_top_pane_stacon_cp01_ParamLimits

0xb103,	// (0x00086877) control_top_pane_stacon_cp01

0xb117,	// (0x0008688b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb117,	// (0x0008688b) uni_indicator_pane_stacon_cp01

0xb128,	// (0x0008689c) bg_popup_sub_pane_cp03

0x43a6,	// (0x0007fb1a) chi_dic_find_pane

0x43ae,	// (0x0007fb22) listscroll_chi_dic_pane

0x43b7,	// (0x0007fb2b) main_pane_chidic_g1

0xb132,	// (0x000868a6) chi_dic_find_pane_t1

0xb140,	// (0x000868b4) find_chidic_pane

0xb149,	// (0x000868bd) chi_dic_list_pane_ParamLimits

0xb149,	// (0x000868bd) chi_dic_list_pane

0xb15a,	// (0x000868ce) scroll_pane_cp020

0xb162,	// (0x000868d6) find_chidic_pane_t1

0xa3ad,	// (0x00085b21) input_focus_pane_cp06

0x43ca,	// (0x0007fb3e) list_chi_dic_pane_ParamLimits

0x43ca,	// (0x0007fb3e) list_chi_dic_pane

0x43e7,	// (0x0007fb5b) list_chi_dic_pane_t1_ParamLimits

0x43e7,	// (0x0007fb5b) list_chi_dic_pane_t1

0xa3ad,	// (0x00085b21) list_highlight_pane_cp020

0xb171,	// (0x000868e5) bg_cale_heading_pane_g1

0x43fa,	// (0x0007fb6e) bg_cale_heading_pane_g2

0x4402,	// (0x0007fb76) bg_cale_heading_pane_g3

0x440a,	// (0x0007fb7e) bg_cale_heading_pane_g4

0x4414,	// (0x0007fb88) bg_cale_heading_pane_g5

0x441e,	// (0x0007fb92) bg_cale_heading_pane_g6

0x4426,	// (0x0007fb9a) bg_cale_heading_pane_g7

0x442e,	// (0x0007fba2) bg_cale_heading_pane_g8

0x4438,	// (0x0007fbac) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008ab18) bg_cale_heading_pane_g

0xb171,	// (0x000868e5) bg_cale_side_pane_g1

0x4442,	// (0x0007fbb6) bg_cale_side_pane_g2

0x444c,	// (0x0007fbc0) bg_cale_side_pane_g3

0x4456,	// (0x0007fbca) bg_cale_side_pane_g4

0x4460,	// (0x0007fbd4) bg_cale_side_pane_g5

0x446a,	// (0x0007fbde) bg_cale_side_pane_g6

0x4474,	// (0x0007fbe8) bg_cale_side_pane_g7

0x447e,	// (0x0007fbf2) bg_cale_side_pane_g8

0x4486,	// (0x0007fbfa) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008ab2b) bg_cale_side_pane_g

0x448e,	// (0x0007fc02) popup_call_status_window_ParamLimits

0x448e,	// (0x0007fc02) popup_call_status_window

0xb179,	// (0x000868ed) stacon_top_pane

0xb181,	// (0x000868f5) status_pane_ParamLimits

0xb181,	// (0x000868f5) status_pane

0xb196,	// (0x0008690a) status_small_pane

0xb19e,	// (0x00086912) control_pane

0xa3ad,	// (0x00085b21) stacon_bottom_pane

0xb1a6,	// (0x0008691a) list_single_mce_smart_pane_t1_ParamLimits

0xb1a6,	// (0x0008691a) list_single_mce_smart_pane_t1

0xb1b9,	// (0x0008692d) list_single_mce_smart_pane_t2_ParamLimits

0xb1b9,	// (0x0008692d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008ab3e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008ab3e) list_single_mce_smart_pane_t

0x449a,	// (0x0007fc0e) compass_pane

0x44a6,	// (0x0007fc1a) main_location2_pane_t1

0x44ba,	// (0x0007fc2e) main_location2_pane_t2

0x44ce,	// (0x0007fc42) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008ab43) main_location2_pane_t

0xb1d8,	// (0x0008694c) compass_pane_g1_ParamLimits

0xb1d8,	// (0x0008694c) compass_pane_g1

0x4518,	// (0x0007fc8c) compass_pane_t1

0x4527,	// (0x0007fc9b) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008ab4c) compass_pane_t

0x4572,	// (0x0007fce6) text_secondary_cp61

0xb256,	// (0x000869ca) navi_pane_cams_g5

0xb2e0,	// (0x00086a54) navi_pane_im_t1

0xb2ee,	// (0x00086a62) navi_pane_mp_g1_ParamLimits

0xb2ee,	// (0x00086a62) navi_pane_mp_g1

0xb302,	// (0x00086a76) navi_pane_mp_g2_ParamLimits

0xb302,	// (0x00086a76) navi_pane_mp_g2

0xb30e,	// (0x00086a82) navi_pane_mp_g3_ParamLimits

0xb30e,	// (0x00086a82) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008ab60) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008ab60) navi_pane_mp_g

0xb31a,	// (0x00086a8e) navi_pane_mp_t1

0xb328,	// (0x00086a9c) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008ab67) navi_pane_mp_t

0xb393,	// (0x00086b07) navi_pane_vt_g1

0xb31a,	// (0x00086a8e) navi_pane_vt_t1

0xb39b,	// (0x00086b0f) navi_slider_pane

0xa90a,	// (0x0008607e) zooming_pane

0xb3ab,	// (0x00086b1f) navi_slider_pane_g1

0x45ad,	// (0x0007fd21) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008ab6e) navi_slider_pane_g

0xb3cf,	// (0x00086b43) aid_levels_zoom

0xb3d7,	// (0x00086b4b) zooming_pane_g1

0xb3df,	// (0x00086b53) zooming_pane_g2

0xb3df,	// (0x00086b53) zooming_pane_g3

0x0002,

0xf409,	// (0x0008ab7d) zooming_pane_g

0xb3e7,	// (0x00086b5b) level_10_zoom

0xb3f0,	// (0x00086b64) level_11_zoom

0xb3f9,	// (0x00086b6d) level_1_zoom

0xb402,	// (0x00086b76) level_2_zoom

0xb40b,	// (0x00086b7f) level_3_zoom

0xb414,	// (0x00086b88) level_4_zoom

0xb41d,	// (0x00086b91) level_5_zoom

0xb426,	// (0x00086b9a) level_6_zoom

0xb42f,	// (0x00086ba3) level_7_zoom

0xb438,	// (0x00086bac) level_8_zoom

0xb441,	// (0x00086bb5) level_9_zoom

0xb452,	// (0x00086bc6) popup_phob_thumbnail_window_g1

0xb45a,	// (0x00086bce) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008ab84) popup_phob_thumbnail_window_g

0xc749,	// (0x00087ebd) level_1_location

0xc751,	// (0x00087ec5) level_2_location

0xc759,	// (0x00087ecd) level_3_location

0xc761,	// (0x00087ed5) level_4_location

0xa90a,	// (0x0008607e) level_5_location

0x45bf,	// (0x0007fd33) mce_icon_pane_g1

0x45c7,	// (0x0007fd3b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008ab89) mce_icon_pane_g

0x45cf,	// (0x0007fd43) main_mup_pane_g1_ParamLimits

0x45cf,	// (0x0007fd43) main_mup_pane_g1

0x45e7,	// (0x0007fd5b) main_mup_pane_g2_ParamLimits

0x45e7,	// (0x0007fd5b) main_mup_pane_g2

0x4603,	// (0x0007fd77) main_mup_pane_g3_ParamLimits

0x4603,	// (0x0007fd77) main_mup_pane_g3

0x461f,	// (0x0007fd93) main_mup_pane_g4_ParamLimits

0x461f,	// (0x0007fd93) main_mup_pane_g4

0x463b,	// (0x0007fdaf) main_mup_pane_g5_ParamLimits

0x463b,	// (0x0007fdaf) main_mup_pane_g5

0x465c,	// (0x0007fdd0) main_mup_pane_g6_ParamLimits

0x465c,	// (0x0007fdd0) main_mup_pane_g6

0x4678,	// (0x0007fdec) main_mup_pane_g7_ParamLimits

0x4678,	// (0x0007fdec) main_mup_pane_g7

0x4694,	// (0x0007fe08) main_mup_pane_g8_ParamLimits

0x4694,	// (0x0007fe08) main_mup_pane_g8

0x46b0,	// (0x0007fe24) main_mup_pane_g9_ParamLimits

0x46b0,	// (0x0007fe24) main_mup_pane_g9

0x46cf,	// (0x0007fe43) main_mup_pane_g10_ParamLimits

0x46cf,	// (0x0007fe43) main_mup_pane_g10

0x46ee,	// (0x0007fe62) main_mup_pane_g11_ParamLimits

0x46ee,	// (0x0007fe62) main_mup_pane_g11

0x4706,	// (0x0007fe7a) main_mup_pane_g12_ParamLimits

0x4706,	// (0x0007fe7a) main_mup_pane_g12

0x4714,	// (0x0007fe88) main_mup_pane_g13_ParamLimits

0x4714,	// (0x0007fe88) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008ab8e) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008ab8e) main_mup_pane_g

0x472a,	// (0x0007fe9e) main_mup_pane_t1_ParamLimits

0x472a,	// (0x0007fe9e) main_mup_pane_t1

0x4747,	// (0x0007febb) main_mup_pane_t2_ParamLimits

0x4747,	// (0x0007febb) main_mup_pane_t2

0x4761,	// (0x0007fed5) main_mup_pane_t3_ParamLimits

0x4761,	// (0x0007fed5) main_mup_pane_t3

0x477b,	// (0x0007feef) main_mup_pane_t4_ParamLimits

0x477b,	// (0x0007feef) main_mup_pane_t4

0x478d,	// (0x0007ff01) main_mup_pane_t5_ParamLimits

0x478d,	// (0x0007ff01) main_mup_pane_t5

0x479f,	// (0x0007ff13) main_mup_pane_t6_ParamLimits

0x479f,	// (0x0007ff13) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008aba9) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008aba9) main_mup_pane_t

0x47b5,	// (0x0007ff29) mup_progress_pane_ParamLimits

0x47b5,	// (0x0007ff29) mup_progress_pane

0x47c1,	// (0x0007ff35) mup_visualizer_pane_ParamLimits

0x47c1,	// (0x0007ff35) mup_visualizer_pane

0x47ff,	// (0x0007ff73) mup_volume_pane_ParamLimits

0x47ff,	// (0x0007ff73) mup_volume_pane

0xb2a7,	// (0x00086a1b) mup_visualizer_pane_g1_ParamLimits

0xb2a7,	// (0x00086a1b) mup_visualizer_pane_g1

0xb2a7,	// (0x00086a1b) mup_visualizer_pane_g2_ParamLimits

0xb2a7,	// (0x00086a1b) mup_visualizer_pane_g2

0xb1d8,	// (0x0008694c) mup_visualizer_pane_g3_ParamLimits

0xb1d8,	// (0x0008694c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008abb6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008abb6) mup_visualizer_pane_g

0xa741,	// (0x00085eb5) mup_volume_pane_g1

0xb46a,	// (0x00086bde) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008abbd) mup_volume_pane_g

0xa741,	// (0x00085eb5) mup_progress_pane_g1

0xb473,	// (0x00086be7) mup_progress_pane_g2

0xb47c,	// (0x00086bf0) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008abc2) mup_progress_pane_g

0xa3ad,	// (0x00085b21) bg_popup_window_pane_cp05

0xb485,	// (0x00086bf9) heading_pane_cp02_ParamLimits

0xb485,	// (0x00086bf9) heading_pane_cp02

0xb49f,	// (0x00086c13) list_popup_blid_pane

0xb4a7,	// (0x00086c1b) list_blid_sat_info_pane_ParamLimits

0xb4a7,	// (0x00086c1b) list_blid_sat_info_pane

0xb4ba,	// (0x00086c2e) list_blid_sat_info_pane_g1

0xb4c2,	// (0x00086c36) list_blid_sat_info_pane_t1

0x490a,	// (0x0008007e) mup_equalizer_pane_ParamLimits

0x490a,	// (0x0008007e) mup_equalizer_pane

0x492b,	// (0x0008009f) mup_equalizer_pane_cp1_ParamLimits

0x492b,	// (0x0008009f) mup_equalizer_pane_cp1

0x494c,	// (0x000800c0) mup_equalizer_pane_cp2_ParamLimits

0x494c,	// (0x000800c0) mup_equalizer_pane_cp2

0x496d,	// (0x000800e1) mup_equalizer_pane_cp3_ParamLimits

0x496d,	// (0x000800e1) mup_equalizer_pane_cp3

0x498e,	// (0x00080102) mup_equalizer_pane_cp4_ParamLimits

0x498e,	// (0x00080102) mup_equalizer_pane_cp4

0x49af,	// (0x00080123) mup_equalizer_pane_cp5

0x49c5,	// (0x00080139) mup_equalizer_pane_cp6

0x49dd,	// (0x00080151) mup_equalizer_pane_cp7

0xc667,	// (0x00087ddb) bg_popup_call_poc_act_pane_g9

0xc66f,	// (0x00087de3) bg_popup_call_poc_act_pane_g10

0xc677,	// (0x00087deb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa608,	// (0x00085d7c) mup_scale_pane

0xa741,	// (0x00085eb5) mup_scale_pane_g1

0xb4d0,	// (0x00086c44) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008abde) mup_scale_pane_g

0xb4f4,	// (0x00086c68) msg_data_pane

0xb4fc,	// (0x00086c70) scroll_pane_cp017

0x0ed7,	// (0x0007c64b) bg_list_pane_cp04_ParamLimits

0x0ed7,	// (0x0007c64b) bg_list_pane_cp04

0xb504,	// (0x00086c78) msg_data_pane_g1

0x4a07,	// (0x0008017b) msg_data_pane_g2

0x438e,	// (0x0007fb02) msg_data_pane_g3

0x4a0f,	// (0x00080183) msg_data_pane_g4

0x4a17,	// (0x0008018b) msg_data_pane_g5

0x4a1f,	// (0x00080193) msg_data_pane_g6

0x4a27,	// (0x0008019b) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008abed) msg_data_pane_g

0x0efb,	// (0x0007c66f) msg_text_pane_ParamLimits

0x0efb,	// (0x0007c66f) msg_text_pane

0x4a2f,	// (0x000801a3) qrid_highlight_pane_cp011_ParamLimits

0x4a2f,	// (0x000801a3) qrid_highlight_pane_cp011

0xa3ad,	// (0x00085b21) msg_body_pane

0xa3ad,	// (0x00085b21) msg_header_pane

0xb515,	// (0x00086c89) input_focus_pane_cp07

0x0f4b,	// (0x0007c6bf) msg_header_pane_t1_ParamLimits

0x0f4b,	// (0x0007c6bf) msg_header_pane_t1

0x0f5d,	// (0x0007c6d1) msg_header_pane_t2_ParamLimits

0x0f5d,	// (0x0007c6d1) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008ac01) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008ac01) msg_header_pane_t

0xb52a,	// (0x00086c9e) msg_body_pane_g1

0x0f6f,	// (0x0007c6e3) msg_body_pane_t1_ParamLimits

0x0f6f,	// (0x0007c6e3) msg_body_pane_t1

0x0fa0,	// (0x0007c714) msg_body_pane_t2_ParamLimits

0x0fa0,	// (0x0007c714) msg_body_pane_t2

0x0fb2,	// (0x0007c726) msg_body_pane_t3_ParamLimits

0x0fb2,	// (0x0007c726) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008ac06) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008ac06) msg_body_pane_t

0x4a9d,	// (0x00080211) main_viewer_pane_g1_ParamLimits

0x4a9d,	// (0x00080211) main_viewer_pane_g1

0x4aa9,	// (0x0008021d) main_viewer_pane_g2_ParamLimits

0x4aa9,	// (0x0008021d) main_viewer_pane_g2

0x4ab5,	// (0x00080229) main_viewer_pane_g3_ParamLimits

0x4ab5,	// (0x00080229) main_viewer_pane_g3

0x4ac6,	// (0x0008023a) main_viewer_pane_g4_ParamLimits

0x4ac6,	// (0x0008023a) main_viewer_pane_g4

0x4ad7,	// (0x0008024b) main_viewer_pane_g5_ParamLimits

0x4ad7,	// (0x0008024b) main_viewer_pane_g5

0x4ad7,	// (0x0008024b) main_viewer_pane_g7_ParamLimits

0x4ad7,	// (0x0008024b) main_viewer_pane_g7

0x4ae9,	// (0x0008025d) main_viewer_pane_g8_ParamLimits

0x4ae9,	// (0x0008025d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008ac16) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008ac16) main_viewer_pane_g

0xb532,	// (0x00086ca6) viewer_content_pane_ParamLimits

0xb532,	// (0x00086ca6) viewer_content_pane

0x4b21,	// (0x00080295) main_postcard_pane_g1_ParamLimits

0x4b21,	// (0x00080295) main_postcard_pane_g1

0x4b2f,	// (0x000802a3) main_postcard_pane_g2_ParamLimits

0x4b2f,	// (0x000802a3) main_postcard_pane_g2

0x4b3d,	// (0x000802b1) main_postcard_pane_g3_ParamLimits

0x4b3d,	// (0x000802b1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008ac27) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008ac27) main_postcard_pane_g

0x4b4d,	// (0x000802c1) main_postcard_pane_g4

0xc849,	// (0x00087fbd) smil_status_volume_pane_g2

0x4b79,	// (0x000802ed) postcard_pane_ParamLimits

0x4b79,	// (0x000802ed) postcard_pane

0xb2a7,	// (0x00086a1b) postcard_pane_g1_ParamLimits

0xb2a7,	// (0x00086a1b) postcard_pane_g1

0x4bab,	// (0x0008031f) postcard_pane_g2_ParamLimits

0x4bab,	// (0x0008031f) postcard_pane_g2

0x4bb7,	// (0x0008032b) postcard_pane_g3_ParamLimits

0x4bb7,	// (0x0008032b) postcard_pane_g3

0xb540,	// (0x00086cb4) postcard_pane_g4_ParamLimits

0xb540,	// (0x00086cb4) postcard_pane_g4

0x4bc3,	// (0x00080337) postcard_pane_g5_ParamLimits

0x4bc3,	// (0x00080337) postcard_pane_g5

0x4bcf,	// (0x00080343) postcard_pane_g6_ParamLimits

0x4bcf,	// (0x00080343) postcard_pane_g6

0xb54e,	// (0x00086cc2) postcard_pane_g7_ParamLimits

0xb54e,	// (0x00086cc2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008ac34) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008ac34) postcard_pane_g

0x4bdb,	// (0x0008034f) main_mp2_pane_g1_ParamLimits

0x4bdb,	// (0x0008034f) main_mp2_pane_g1

0x4be7,	// (0x0008035b) main_mp2_pane_g2_ParamLimits

0x4be7,	// (0x0008035b) main_mp2_pane_g2

0x4bf3,	// (0x00080367) main_mp2_pane_g3_ParamLimits

0x4bf3,	// (0x00080367) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008ac43) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008ac43) main_mp2_pane_g

0x4bff,	// (0x00080373) main_mp2_pane_t1_ParamLimits

0x4bff,	// (0x00080373) main_mp2_pane_t1

0x4c16,	// (0x0008038a) main_mp2_pane_t2_ParamLimits

0x4c16,	// (0x0008038a) main_mp2_pane_t2

0x4c28,	// (0x0008039c) main_mp2_pane_t3_ParamLimits

0x4c28,	// (0x0008039c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008ac4a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008ac4a) main_mp2_pane_t

0xb55c,	// (0x00086cd0) pec_content_pane_ParamLimits

0xb55c,	// (0x00086cd0) pec_content_pane

0xaaca,	// (0x0008623e) scroll_pane_cp015

0xb56e,	// (0x00086ce2) pec_attribute_pane_ParamLimits

0xb56e,	// (0x00086ce2) pec_attribute_pane

0x4c3a,	// (0x000803ae) pec_content_pane_g1_ParamLimits

0x4c3a,	// (0x000803ae) pec_content_pane_g1

0xb57e,	// (0x00086cf2) pec_content_pane_t1_ParamLimits

0xb57e,	// (0x00086cf2) pec_content_pane_t1

0xb590,	// (0x00086d04) pec_content_pane_t2_ParamLimits

0xb590,	// (0x00086d04) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008ac51) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008ac51) pec_content_pane_t

0x4c46,	// (0x000803ba) list_single_graphic_pane_cp01_ParamLimits

0x4c46,	// (0x000803ba) list_single_graphic_pane_cp01

0xa608,	// (0x00085d7c) bg_popup_sub_pane_cp04

0xb5a2,	// (0x00086d16) popup_mup_playback_window_g1

0xb5ae,	// (0x00086d22) popup_mup_playback_window_t1

0xb5c3,	// (0x00086d37) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008ac56) popup_mup_playback_window_t

0xb5fa,	// (0x00086d6e) main_image_pane_g1_ParamLimits

0xb5fa,	// (0x00086d6e) main_image_pane_g1

0xb63d,	// (0x00086db1) scroll_pane_cp018_ParamLimits

0xb63d,	// (0x00086db1) scroll_pane_cp018

0xb655,	// (0x00086dc9) scroll_pane_cp016_ParamLimits

0xb655,	// (0x00086dc9) scroll_pane_cp016

0x4ce6,	// (0x0008045a) smil2_image_pane_ParamLimits

0x4ce6,	// (0x0008045a) smil2_image_pane

0x4d1a,	// (0x0008048e) smil2_root_pane_ParamLimits

0x4d1a,	// (0x0008048e) smil2_root_pane

0x4d46,	// (0x000804ba) smil2_text_pane_ParamLimits

0x4d46,	// (0x000804ba) smil2_text_pane

0xa3ad,	// (0x00085b21) bg_list_pane_cp06

0xb691,	// (0x00086e05) grid_radio_pane

0xa3ad,	// (0x00085b21) bg_popup_window_pane_cp06

0xb699,	// (0x00086e0d) main_fmradio_pane_t1

0xb00f,	// (0x00086783) heading_pane_cp04

0xb6a7,	// (0x00086e1b) main_fmradio_pane_t2

0xc67f,	// (0x00087df3) popup_cale_lunar_info_window_g1

0xb6b5,	// (0x00086e29) main_fmradio_pane_t3

0xc687,	// (0x00087dfb) popup_cale_lunar_info_window_g2

0xb6c3,	// (0x00086e37) main_fmradio_pane_t4

0x0001,

0xb6d1,	// (0x00086e45) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008ad31) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008ac6b) main_fmradio_pane_t

0xb6df,	// (0x00086e53) wait_bar_pane_cp03

0xb6e7,	// (0x00086e5b) cell_fmradio_pane_ParamLimits

0xb6e7,	// (0x00086e5b) cell_fmradio_pane

0xb54e,	// (0x00086cc2) cell_fmradio_pane_g1_ParamLimits

0xb54e,	// (0x00086cc2) cell_fmradio_pane_g1

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp011

0xb6fa,	// (0x00086e6e) poc_content_pane_ParamLimits

0xb6fa,	// (0x00086e6e) poc_content_pane

0xb70c,	// (0x00086e80) scroll_pane_cp019

0x4d86,	// (0x000804fa) popup_call_poc_act_window_ParamLimits

0x4d86,	// (0x000804fa) popup_call_poc_act_window

0x4d93,	// (0x00080507) popup_call_poc_inact_window_ParamLimits

0x4d93,	// (0x00080507) popup_call_poc_inact_window

0xf594,	// (0x0008ad08) bg_popup_call_poc_act_pane_g

0xc5f7,	// (0x00087d6b) bg_popup_call_poc_inact_pane_g1

0xc5ff,	// (0x00087d73) bg_popup_call_poc_inact_pane_g2

0xb714,	// (0x00086e88) popup_call_poc_act_window_g2

0xc607,	// (0x00087d7b) bg_popup_call_poc_inact_pane_g3

0xc60f,	// (0x00087d83) bg_popup_call_poc_inact_pane_g4

0xc617,	// (0x00087d8b) bg_popup_call_poc_inact_pane_g5

0xb71c,	// (0x00086e90) popup_call_poc_act_window_t1_ParamLimits

0xb71c,	// (0x00086e90) popup_call_poc_act_window_t1

0xb744,	// (0x00086eb8) popup_call_poc_act_window_t2_ParamLimits

0xb744,	// (0x00086eb8) popup_call_poc_act_window_t2

0xb76c,	// (0x00086ee0) popup_call_poc_act_window_t3_ParamLimits

0xb76c,	// (0x00086ee0) popup_call_poc_act_window_t3

0xb794,	// (0x00086f08) popup_call_poc_act_window_t4_ParamLimits

0xb794,	// (0x00086f08) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008ac76) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008ac76) popup_call_poc_act_window_t

0xc61f,	// (0x00087d93) bg_popup_call_poc_inact_pane_g6

0xc627,	// (0x00087d9b) bg_popup_call_poc_inact_pane_g7

0xc62f,	// (0x00087da3) bg_popup_call_poc_inact_pane_g8

0xb7a6,	// (0x00086f1a) popup_call_poc_inact_window_g2

0xc637,	// (0x00087dab) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008acf5) bg_popup_call_poc_inact_pane_g

0xb7ae,	// (0x00086f22) popup_call_poc_inact_window_t1_ParamLimits

0xb7ae,	// (0x00086f22) popup_call_poc_inact_window_t1

0xb7c3,	// (0x00086f37) popup_call_poc_inact_window_t2_ParamLimits

0xb7c3,	// (0x00086f37) popup_call_poc_inact_window_t2

0xb7d8,	// (0x00086f4c) popup_call_poc_inact_window_t3_ParamLimits

0xb7d8,	// (0x00086f4c) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008ac7f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008ac7f) popup_call_poc_inact_window_t

0xc7bc,	// (0x00087f30) context_pane_ParamLimits

0x53c1,	// (0x00080b35) signal_pane_ParamLimits

0xa90a,	// (0x0008607e) main_call2_pane

0x5334,	// (0x00080aa8) popup_phob_thumbnail2_window_ParamLimits

0x5334,	// (0x00080aa8) popup_phob_thumbnail2_window

0x4a4b,	// (0x000801bf) aid_hotspot_pointer_arrow_pane

0x4a53,	// (0x000801c7) aid_hotspot_pointer_hand_pane

0x50b9,	// (0x0008082d) phob_pre_status_pane_g5

0x2d2d,	// (0x0007e4a1) cams_zoom_pane_ParamLimits

0x2d39,	// (0x0007e4ad) image_vga_pane_ParamLimits

0x2d48,	// (0x0007e4bc) main_camera_pane_g1_ParamLimits

0x2d56,	// (0x0007e4ca) main_camera_pane_g2_ParamLimits

0x2d62,	// (0x0007e4d6) main_camera_pane_g3_ParamLimits

0x2d6e,	// (0x0007e4e2) main_camera_pane_g4_ParamLimits

0x2d7a,	// (0x0007e4ee) main_camera_pane_g5_ParamLimits

0x2d86,	// (0x0007e4fa) main_camera_pane_g6_ParamLimits

0x2d92,	// (0x0007e506) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008a97e) main_camera_pane_g_ParamLimits

0x2d9e,	// (0x0007e512) main_camera_pane_t1_ParamLimits

0x2db0,	// (0x0007e524) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008a98f) main_camera_pane_t_ParamLimits

0xa608,	// (0x00085d7c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa608,	// (0x00085d7c) bg_popup_preview_window_pane_cp01

0xb7ed,	// (0x00086f61) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7ed,	// (0x00086f61) popup_phob_thumbnail2_window_g1

0xa3ad,	// (0x00085b21) call2_cli_visual_pane

0x4daf,	// (0x00080523) popup_call2_audio_conf_window_ParamLimits

0x4daf,	// (0x00080523) popup_call2_audio_conf_window

0x4dc4,	// (0x00080538) popup_call2_audio_first_window_ParamLimits

0x4dc4,	// (0x00080538) popup_call2_audio_first_window

0x4e62,	// (0x000805d6) popup_call2_audio_in_window_ParamLimits

0x4e62,	// (0x000805d6) popup_call2_audio_in_window

0x4ea4,	// (0x00080618) popup_call2_audio_out_window_ParamLimits

0x4ea4,	// (0x00080618) popup_call2_audio_out_window

0x4f06,	// (0x0008067a) popup_call2_audio_second_window_ParamLimits

0x4f06,	// (0x0008067a) popup_call2_audio_second_window

0x4f64,	// (0x000806d8) popup_call2_audio_wait_window_ParamLimits

0x4f64,	// (0x000806d8) popup_call2_audio_wait_window

0xa3ad,	// (0x00085b21) bg_popup_call2_act_pane_cp03

0xa5ea,	// (0x00085d5e) list_conf_pane_cp

0xb7f9,	// (0x00086f6d) popup_call2_audio_conf_window_t1

0xb807,	// (0x00086f7b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb807,	// (0x00086f7b) list_single_graphic_popup_conf2_pane

0xb0af,	// (0x00086823) list_highlight_pane_cp04

0xb81a,	// (0x00086f8e) list_single_graphic_popup_conf2_pane_g1

0xb0c0,	// (0x00086834) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008ac86) list_single_graphic_popup_conf2_pane_g

0xb824,	// (0x00086f98) list_single_graphic_popup_conf2_pane_t1

0xb832,	// (0x00086fa6) bg_popup_call2_act_pane_cp01_ParamLimits

0xb832,	// (0x00086fa6) bg_popup_call2_act_pane_cp01

0xb8bc,	// (0x00087030) call_type_pane_cp05_ParamLimits

0xb8bc,	// (0x00087030) call_type_pane_cp05

0xb910,	// (0x00087084) popup_call2_audio_second_window_g1_ParamLimits

0xb910,	// (0x00087084) popup_call2_audio_second_window_g1

0xb964,	// (0x000870d8) popup_call2_audio_second_window_g2_ParamLimits

0xb964,	// (0x000870d8) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008ac8b) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008ac8b) popup_call2_audio_second_window_g

0xb9c9,	// (0x0008713d) popup_call2_audio_second_window_t1_ParamLimits

0xb9c9,	// (0x0008713d) popup_call2_audio_second_window_t1

0xba84,	// (0x000871f8) popup_call2_audio_second_window_t2_ParamLimits

0xba84,	// (0x000871f8) popup_call2_audio_second_window_t2

0xbad7,	// (0x0008724b) popup_call2_audio_second_window_t3_ParamLimits

0xbad7,	// (0x0008724b) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008ac92) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008ac92) popup_call2_audio_second_window_t

0xa3ad,	// (0x00085b21) bg_popup_call2_in_pane_cp02

0xa3b7,	// (0x00085b2b) call_type_pane_cp04

0xa3bf,	// (0x00085b33) popup_call2_audio_wait_window_g1

0xa3c7,	// (0x00085b3b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008a86d) popup_call2_audio_wait_window_g

0xa3cf,	// (0x00085b43) popup_call2_audio_wait_window_t3

0xbbca,	// (0x0008733e) bg_popup_call2_act_pane_ParamLimits

0xbbca,	// (0x0008733e) bg_popup_call2_act_pane

0xbc8a,	// (0x000873fe) call_type_pane_cp03_ParamLimits

0xbc8a,	// (0x000873fe) call_type_pane_cp03

0xbcee,	// (0x00087462) popup_call2_audio_first_window_g1_ParamLimits

0xbcee,	// (0x00087462) popup_call2_audio_first_window_g1

0xbd5e,	// (0x000874d2) popup_call2_audio_first_window_g2_ParamLimits

0xbd5e,	// (0x000874d2) popup_call2_audio_first_window_g2

0xb2a7,	// (0x00086a1b) popup_call2_audio_first_window_g3_ParamLimits

0xb2a7,	// (0x00086a1b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008ac9b) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008ac9b) popup_call2_audio_first_window_g

0xbe3c,	// (0x000875b0) popup_call2_audio_first_window_t1_ParamLimits

0xbe3c,	// (0x000875b0) popup_call2_audio_first_window_t1

0xbf3f,	// (0x000876b3) popup_call2_audio_first_window_t4_ParamLimits

0xbf3f,	// (0x000876b3) popup_call2_audio_first_window_t4

0xc022,	// (0x00087796) popup_call2_audio_first_window_t5_ParamLimits

0xc022,	// (0x00087796) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008aca6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008aca6) popup_call2_audio_first_window_t

0xa600,	// (0x00085d74) bg_popup_call2_act_pane_g1

0xc68f,	// (0x00087e03) popup_cale_lunar_info_window_t1

0xc69d,	// (0x00087e11) popup_cale_lunar_info_window_t2

0xc6ab,	// (0x00087e1f) popup_cale_lunar_info_window_t3

0xa3ad,	// (0x00085b21) bg_popup_call2_bubble_pane

0xc123,	// (0x00087897) bg_popup_call2_in_pane_cp01_ParamLimits

0xc123,	// (0x00087897) bg_popup_call2_in_pane_cp01

0xa089,	// (0x000857fd) call_type_pane_cp02

0xc16b,	// (0x000878df) popup_call2_audio_out_window_g1_ParamLimits

0xc16b,	// (0x000878df) popup_call2_audio_out_window_g1

0xc197,	// (0x0008790b) popup_call2_audio_out_window_g2_ParamLimits

0xc197,	// (0x0008790b) popup_call2_audio_out_window_g2

0xc1bf,	// (0x00087933) popup_call2_audio_out_window_g3_ParamLimits

0xc1bf,	// (0x00087933) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008acaf) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008acaf) popup_call2_audio_out_window_g

0xc1fa,	// (0x0008796e) popup_call2_audio_out_window_t1_ParamLimits

0xc1fa,	// (0x0008796e) popup_call2_audio_out_window_t1

0xc259,	// (0x000879cd) popup_call2_audio_out_window_t2_ParamLimits

0xc259,	// (0x000879cd) popup_call2_audio_out_window_t2

0xc2ad,	// (0x00087a21) popup_call2_audio_out_window_t3_ParamLimits

0xc2ad,	// (0x00087a21) popup_call2_audio_out_window_t3

0xc2c3,	// (0x00087a37) popup_call2_audio_out_window_t4_ParamLimits

0xc2c3,	// (0x00087a37) popup_call2_audio_out_window_t4

0xc2d9,	// (0x00087a4d) popup_call2_audio_out_window_t5_ParamLimits

0xc2d9,	// (0x00087a4d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008acb8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008acb8) popup_call2_audio_out_window_t

0xc33d,	// (0x00087ab1) bg_popup_call2_in_pane_ParamLimits

0xc33d,	// (0x00087ab1) bg_popup_call2_in_pane

0xc399,	// (0x00087b0d) popup_call2_audio_in_window_g1_ParamLimits

0xc399,	// (0x00087b0d) popup_call2_audio_in_window_g1

0xc3d1,	// (0x00087b45) popup_call2_audio_in_window_g2_ParamLimits

0xc3d1,	// (0x00087b45) popup_call2_audio_in_window_g2

0xc409,	// (0x00087b7d) popup_call2_audio_in_window_g3_ParamLimits

0xc409,	// (0x00087b7d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008acc5) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008acc5) popup_call2_audio_in_window_g

0xc461,	// (0x00087bd5) popup_call2_audio_in_window_t1_ParamLimits

0xc461,	// (0x00087bd5) popup_call2_audio_in_window_t1

0xc4e1,	// (0x00087c55) popup_call2_audio_in_window_t2_ParamLimits

0xc4e1,	// (0x00087c55) popup_call2_audio_in_window_t2

0xc561,	// (0x00087cd5) popup_call2_audio_in_window_t3_ParamLimits

0xc561,	// (0x00087cd5) popup_call2_audio_in_window_t3

0xc57b,	// (0x00087cef) popup_call2_audio_in_window_t4_ParamLimits

0xc57b,	// (0x00087cef) popup_call2_audio_in_window_t4

0xc58d,	// (0x00087d01) popup_call2_audio_in_window_t5_ParamLimits

0xc58d,	// (0x00087d01) popup_call2_audio_in_window_t5

0xc5a2,	// (0x00087d16) popup_call2_audio_in_window_t6_ParamLimits

0xc5a2,	// (0x00087d16) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008acce) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008acce) popup_call2_audio_in_window_t

0xa600,	// (0x00085d74) bg_popup_call2_in_pane_g1

0xc6b9,	// (0x00087e2d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008ad36) popup_cale_lunar_info_window_t

0xa608,	// (0x00085d7c) bg_popup_call2_rect_pane_ParamLimits

0xa608,	// (0x00085d7c) bg_popup_call2_rect_pane

0xa3ad,	// (0x00085b21) call2_cli_visual_graphic_pane

0xa3ad,	// (0x00085b21) call2_cli_visual_text_pane

0x546f,	// (0x00080be3) smil_status_volume_pane_g3

0x0002,

0xa741,	// (0x00085eb5) call2_cli_visual_graphic_pane_g1

0xa741,	// (0x00085eb5) call2_cli_visual_graphic_pane_g2

0xa741,	// (0x00085eb5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008acdb) call2_cli_visual_graphic_pane_g

0xc5b7,	// (0x00087d2b) bg_popup_call2_rect_pane_g1

0xa82f,	// (0x00085fa3) bg_popup_call2_rect_pane_g2

0xc5bf,	// (0x00087d33) bg_popup_call2_rect_pane_g3

0xc5c7,	// (0x00087d3b) bg_popup_call2_rect_pane_g4

0xc5cf,	// (0x00087d43) bg_popup_call2_rect_pane_g5

0xc5d7,	// (0x00087d4b) bg_popup_call2_rect_pane_g6

0xc5df,	// (0x00087d53) bg_popup_call2_rect_pane_g7

0xc5e7,	// (0x00087d5b) bg_popup_call2_rect_pane_g8

0xc5ef,	// (0x00087d63) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008ace2) bg_popup_call2_rect_pane_g

0xc5f7,	// (0x00087d6b) bg_popup_call2_bubble_pane_g1

0xc5ff,	// (0x00087d73) bg_popup_call2_bubble_pane_g2

0xc607,	// (0x00087d7b) bg_popup_call2_bubble_pane_g3

0xc60f,	// (0x00087d83) bg_popup_call2_bubble_pane_g4

0xc617,	// (0x00087d8b) bg_popup_call2_bubble_pane_g5

0xc61f,	// (0x00087d93) bg_popup_call2_bubble_pane_g6

0xc627,	// (0x00087d9b) bg_popup_call2_bubble_pane_g7

0xc62f,	// (0x00087da3) bg_popup_call2_bubble_pane_g8

0xc637,	// (0x00087dab) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008acf5) bg_popup_call2_bubble_pane_g

0x2755,	// (0x0007dec9) aid_cale_week_size_cell_pane

0x2dc2,	// (0x0007e536) aid_cams_cif_uncrop_pane_ParamLimits

0x2dc2,	// (0x0007e536) aid_cams_cif_uncrop_pane

0x2f1d,	// (0x0007e691) aid_cams_size_cell_ParamLimits

0x2f1d,	// (0x0007e691) aid_cams_size_cell

0x2f29,	// (0x0007e69d) grid_cams_pane_ParamLimits

0x2f37,	// (0x0007e6ab) linegrid_cams_pane_ParamLimits

0x3026,	// (0x0007e79a) call_video_pane_t1

0x3047,	// (0x0007e7bb) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008a9e2) call_video_pane_t

0x35b6,	// (0x0007ed2a) aid_cale_month_size_cell_pane_ParamLimits

0x35b6,	// (0x0007ed2a) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008ad7f) smil_status_volume_pane_g

0x547c,	// (0x00080bf0) volume_smil_pane_ParamLimits

0x1ece,	// (0x0007d642) aid_popup2_width_pane

0x2649,	// (0x0007ddbd) cell_qdial_pane_g4_ParamLimits

0x2649,	// (0x0007ddbd) cell_qdial_pane_g4

0x44f4,	// (0x0007fc68) aid_blid_cardinal_pane_ParamLimits

0x4504,	// (0x0007fc78) aid_blid_destination_pane_ParamLimits

0x4504,	// (0x0007fc78) aid_blid_destination_pane

0xa608,	// (0x00085d7c) bg_popup_call_poc_act_pane_ParamLimits

0xa608,	// (0x00085d7c) bg_popup_call_poc_act_pane

0xa608,	// (0x00085d7c) bg_popup_call_poc_inact_pane_ParamLimits

0xa608,	// (0x00085d7c) bg_popup_call_poc_inact_pane

0xc63f,	// (0x00087db3) bg_popup_call_poc_act_pane_g1

0xc647,	// (0x00087dbb) bg_popup_call_poc_act_pane_g2

0xc64f,	// (0x00087dc3) bg_popup_call_poc_act_pane_g3

0xc60f,	// (0x00087d83) bg_popup_call_poc_act_pane_g4

0xc617,	// (0x00087d8b) bg_popup_call_poc_act_pane_g5

0xc657,	// (0x00087dcb) bg_popup_call_poc_act_pane_g6

0xc627,	// (0x00087d9b) bg_popup_call_poc_act_pane_g7

0xc65f,	// (0x00087dd3) bg_popup_call_poc_act_pane_g8

0xa3ad,	// (0x00085b21) main_usb_pane

0x526d,	// (0x000809e1) popup_cale_lunar_info_window

0x3366,	// (0x0007eada) im_reading_pane_t1_ParamLimits

0xaa22,	// (0x00086196) list_im_pane_ParamLimits

0xaa33,	// (0x000861a7) scroll_pane_cp07_ParamLimits

0xa3ad,	// (0x00085b21) grid_highlight_pane_cp012

0xa608,	// (0x00085d7c) mup_scale_pane_ParamLimits

0xb2a7,	// (0x00086a1b) main_usb_pane_g1_ParamLimits

0xb2a7,	// (0x00086a1b) main_usb_pane_g1

0x4fdc,	// (0x00080750) main_usb_pane_g2_ParamLimits

0x4fdc,	// (0x00080750) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008ad1f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008ad1f) main_usb_pane_g

0x4fe8,	// (0x0008075c) main_usb_pane_t1_ParamLimits

0x4fe8,	// (0x0008075c) main_usb_pane_t1

0x4ffa,	// (0x0008076e) main_usb_pane_t2_ParamLimits

0x4ffa,	// (0x0008076e) main_usb_pane_t2

0x500c,	// (0x00080780) main_usb_pane_t3_ParamLimits

0x500c,	// (0x00080780) main_usb_pane_t3

0x501e,	// (0x00080792) main_usb_pane_t4_ParamLimits

0x501e,	// (0x00080792) main_usb_pane_t4

0x5030,	// (0x000807a4) main_usb_pane_t5_ParamLimits

0x5030,	// (0x000807a4) main_usb_pane_t5

0x5042,	// (0x000807b6) main_usb_pane_t6_ParamLimits

0x5042,	// (0x000807b6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008ad24) main_usb_pane_t_ParamLimits

0x449a,	// (0x0007fc0e) aid_text_placing

0x44a6,	// (0x0007fc1a) main_location2_pane_t1_ParamLimits

0x44ba,	// (0x0007fc2e) main_location2_pane_t2_ParamLimits

0x44ce,	// (0x0007fc42) main_location2_pane_t3_ParamLimits

0x44e2,	// (0x0007fc56) main_location2_pane_t4_ParamLimits

0x44e2,	// (0x0007fc56) main_location2_pane_t4

0xf3cf,	// (0x0008ab43) main_location2_pane_t_ParamLimits

0xa644,	// (0x00085db8) find_pinb_pane_g2_ParamLimits

0xa644,	// (0x00085db8) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008a893) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008a893) find_pinb_pane_g

0xa650,	// (0x00085dc4) find_pinb_pane_t1_ParamLimits

0xa662,	// (0x00085dd6) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008a898) find_pinb_pane_t_ParamLimits

0xa3ad,	// (0x00085b21) main_call3_pane

0x3b2a,	// (0x0007f29e) cale_month_day_heading_pane_t1_ParamLimits

0x3bb0,	// (0x0007f324) cale_month_day_heading_pane_t2_ParamLimits

0x3c41,	// (0x0007f3b5) cale_month_day_heading_pane_t3_ParamLimits

0x3cd2,	// (0x0007f446) cale_month_day_heading_pane_t4_ParamLimits

0x3d63,	// (0x0007f4d7) cale_month_day_heading_pane_t5_ParamLimits

0x3df4,	// (0x0007f568) cale_month_day_heading_pane_t6_ParamLimits

0x3e91,	// (0x0007f605) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008aa1a) cale_month_day_heading_pane_t_ParamLimits

0xac7d,	// (0x000863f1) smil_status_volume_pane

0x4b93,	// (0x00080307) postcard_address_pane_ParamLimits

0x4b93,	// (0x00080307) postcard_address_pane

0x4b9f,	// (0x00080313) postcard_message_pane_ParamLimits

0x4b9f,	// (0x00080313) postcard_message_pane

0x4fa3,	// (0x00080717) call2_cli_visual_pane_t1_ParamLimits

0x4fa3,	// (0x00080717) call2_cli_visual_pane_t1

0x55d1,	// (0x00080d45) postcard_message_pane_t1_ParamLimits

0x55d1,	// (0x00080d45) postcard_message_pane_t1

0x55ba,	// (0x00080d2e) postcard_address_pane_t1_ParamLimits

0x55ba,	// (0x00080d2e) postcard_address_pane_t1

0x55ab,	// (0x00080d1f) popup_call3_audio_in_window_ParamLimits

0x55ab,	// (0x00080d1f) popup_call3_audio_in_window

0x5491,	// (0x00080c05) bg_popup_call3_in_pane_ParamLimits

0x5491,	// (0x00080c05) bg_popup_call3_in_pane

0x54f1,	// (0x00080c65) popup_call3_audio_in_window_g1_ParamLimits

0x54f1,	// (0x00080c65) popup_call3_audio_in_window_g1

0x5509,	// (0x00080c7d) popup_call3_audio_in_window_g2_ParamLimits

0x5509,	// (0x00080c7d) popup_call3_audio_in_window_g2

0x5521,	// (0x00080c95) popup_call3_audio_in_window_g3_ParamLimits

0x5521,	// (0x00080c95) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008ad86) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008ad86) popup_call3_audio_in_window_g

0x5549,	// (0x00080cbd) popup_call3_audio_in_window_t1_ParamLimits

0x5549,	// (0x00080cbd) popup_call3_audio_in_window_t1

0x5571,	// (0x00080ce5) popup_call3_audio_in_window_t2_ParamLimits

0x5571,	// (0x00080ce5) popup_call3_audio_in_window_t2

0x5599,	// (0x00080d0d) popup_call3_audio_in_window_t3_ParamLimits

0x5599,	// (0x00080d0d) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008ad8f) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008ad8f) popup_call3_audio_in_window_t

0xa90a,	// (0x0008607e) bg_popup_call3_rect_pane

0xc5b7,	// (0x00087d2b) bg_popup_call3_rect_pane_g1

0xa82f,	// (0x00085fa3) bg_popup_call3_rect_pane_g2

0xc5bf,	// (0x00087d33) bg_popup_call3_rect_pane_g3

0xc5c7,	// (0x00087d3b) bg_popup_call3_rect_pane_g4

0xc5cf,	// (0x00087d43) bg_popup_call3_rect_pane_g5

0xc5d7,	// (0x00087d4b) bg_popup_call3_rect_pane_g6

0xc5df,	// (0x00087d53) bg_popup_call3_rect_pane_g7

0x481a,	// (0x0007ff8e) mup_visualizer_osc_pane

0xb462,	// (0x00086bd6) mup_visualizer_spec_pane

0x54b1,	// (0x00080c25) call3_video_qcif_pane_ParamLimits

0x54b1,	// (0x00080c25) call3_video_qcif_pane

0x54c1,	// (0x00080c35) call3_video_qcif_uncrop_pane_ParamLimits

0x54c1,	// (0x00080c35) call3_video_qcif_uncrop_pane

0x54cf,	// (0x00080c43) call3_video_subqcif_pane_ParamLimits

0x54cf,	// (0x00080c43) call3_video_subqcif_pane

0x54e1,	// (0x00080c55) call3_video_subqcif_uncrop_pane_ParamLimits

0x54e1,	// (0x00080c55) call3_video_subqcif_uncrop_pane

0x5539,	// (0x00080cad) popup_call3_audio_in_window_g4_ParamLimits

0x5539,	// (0x00080cad) popup_call3_audio_in_window_g4

0x545c,	// (0x00080bd0) mup_spec_half_pane

0x5465,	// (0x00080bd9) mup_spec_half_pane_cp

0xc81c,	// (0x00087f90) mup_osc_middle_pane

0xc825,	// (0x00087f99) mup_visualizer_osc_pane_g1

0x543d,	// (0x00080bb1) mup_spec_bar_pane_ParamLimits

0x543d,	// (0x00080bb1) mup_spec_bar_pane

0xc809,	// (0x00087f7d) mup_spec_bar_pane_g1

0xc813,	// (0x00087f87) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ad7a) mup_spec_bar_pane_g

0x2755,	// (0x0007dec9) aid_cale_week_size_cell_pane_ParamLimits

0x276a,	// (0x0007dede) bg_cale_heading_pane_ParamLimits

0xa86c,	// (0x00085fe0) bg_cale_pane_cp01_ParamLimits

0x278c,	// (0x0007df00) cale_week_corner_pane_ParamLimits

0x27a6,	// (0x0007df1a) cale_week_day_heading_pane_ParamLimits

0x27c8,	// (0x0007df3c) cale_week_scroll_pane_g1_ParamLimits

0x27e5,	// (0x0007df59) cale_week_scroll_pane_g2_ParamLimits

0x27f8,	// (0x0007df6c) cale_week_scroll_pane_g3_ParamLimits

0x280b,	// (0x0007df7f) cale_week_scroll_pane_g4_ParamLimits

0x281e,	// (0x0007df92) cale_week_scroll_pane_g5_ParamLimits

0x2831,	// (0x0007dfa5) cale_week_scroll_pane_g6_ParamLimits

0x2844,	// (0x0007dfb8) cale_week_scroll_pane_g7_ParamLimits

0x2857,	// (0x0007dfcb) cale_week_scroll_pane_g8_ParamLimits

0x286c,	// (0x0007dfe0) cale_week_scroll_pane_g9_ParamLimits

0x287f,	// (0x0007dff3) cale_week_scroll_pane_g10_ParamLimits

0x2892,	// (0x0007e006) cale_week_scroll_pane_g11_ParamLimits

0x28a5,	// (0x0007e019) cale_week_scroll_pane_g12_ParamLimits

0x28bc,	// (0x0007e030) cale_week_scroll_pane_g13_ParamLimits

0x28d7,	// (0x0007e04b) cale_week_scroll_pane_g14_ParamLimits

0x28f2,	// (0x0007e066) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008a924) cale_week_scroll_pane_g_ParamLimits

0x2922,	// (0x0007e096) cale_week_time_pane_ParamLimits

0x2937,	// (0x0007e0ab) grid_cale_week_pane_ParamLimits

0xa889,	// (0x00085ffd) listscroll_cale_week_pane_t1

0xa89b,	// (0x0008600f) scroll_pane_cp08_ParamLimits

0x361f,	// (0x0007ed93) cale_month_corner_pane_ParamLimits

0xac53,	// (0x000863c7) cale_month_pane_t1

0x3ac3,	// (0x0007f237) cale_month_week_pane_ParamLimits

0xb2a7,	// (0x00086a1b) popup_call_status_window_g1_ParamLimits

0x42e0,	// (0x0007fa54) popup_call_status_window_g2_ParamLimits

0x42ec,	// (0x0007fa60) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008aaca) popup_call_status_window_g_ParamLimits

0xafff,	// (0x00086773) aid_call2_pane

0x0f3d,	// (0x0007c6b1) msg_header_pane_g1

0x4b93,	// (0x00080307) postcard_address2_pane_ParamLimits

0x4b93,	// (0x00080307) postcard_address2_pane

0x4b9f,	// (0x00080313) postcard_message2_pane_ParamLimits

0x4b9f,	// (0x00080313) postcard_message2_pane

0x53cf,	// (0x00080b43) message2_row_pane_ParamLimits

0x53cf,	// (0x00080b43) message2_row_pane

0x53ec,	// (0x00080b60) address2_row_pane_ParamLimits

0x53ec,	// (0x00080b60) address2_row_pane

0xc7d7,	// (0x00087f4b) postcard_message2_row_pane_g1

0xc7df,	// (0x00087f53) postcard_message2_row_pane_t1

0xc7d7,	// (0x00087f4b) address2_row_pane_g1

0xc7df,	// (0x00087f53) address2_row_pane_t1

0x2ca8,	// (0x0007e41c) aid_size_cell_vorec

0xa3ad,	// (0x00085b21) main_rss_pane

0x53ff,	// (0x00080b73) rss_list_single_pane_ParamLimits

0x53ff,	// (0x00080b73) rss_list_single_pane

0xc7ed,	// (0x00087f61) rss_list_single_pane_t1

0xc7fb,	// (0x00087f6f) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008ad75) rss_list_single_pane_t

0xa3ad,	// (0x00085b21) main_camera2_pane

0xa3ad,	// (0x00085b21) main_video2_pane

0x5635,	// (0x00080da9) cams_zoom_pane_cp2_ParamLimits

0x5635,	// (0x00080da9) cams_zoom_pane_cp2

0x5641,	// (0x00080db5) image2_vga_pane_ParamLimits

0x5641,	// (0x00080db5) image2_vga_pane

0x5650,	// (0x00080dc4) main_camera2_pane_g1_ParamLimits

0x5650,	// (0x00080dc4) main_camera2_pane_g1

0x565c,	// (0x00080dd0) main_camera2_pane_g2_ParamLimits

0x565c,	// (0x00080dd0) main_camera2_pane_g2

0x5668,	// (0x00080ddc) main_camera2_pane_g3_ParamLimits

0x5668,	// (0x00080ddc) main_camera2_pane_g3

0x5674,	// (0x00080de8) main_camera2_pane_g4_ParamLimits

0x5674,	// (0x00080de8) main_camera2_pane_g4

0x5680,	// (0x00080df4) main_camera2_pane_g5_ParamLimits

0x5680,	// (0x00080df4) main_camera2_pane_g5

0x568c,	// (0x00080e00) main_camera2_pane_g6_ParamLimits

0x568c,	// (0x00080e00) main_camera2_pane_g6

0x5698,	// (0x00080e0c) main_camera2_pane_g7_ParamLimits

0x5698,	// (0x00080e0c) main_camera2_pane_g7

0x56a4,	// (0x00080e18) main_camera2_pane_g8_ParamLimits

0x56a4,	// (0x00080e18) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008ad96) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008ad96) main_camera2_pane_g

0x56bc,	// (0x00080e30) main_camera2_pane_t1_ParamLimits

0x56bc,	// (0x00080e30) main_camera2_pane_t1

0x56ce,	// (0x00080e42) main_camera2_pane_t2_ParamLimits

0x56ce,	// (0x00080e42) main_camera2_pane_t2

0x56e0,	// (0x00080e54) main_camera2_pane_t3_ParamLimits

0x56e0,	// (0x00080e54) main_camera2_pane_t3

0x56f2,	// (0x00080e66) main_camera2_pane_t4_ParamLimits

0x56f2,	// (0x00080e66) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008ada9) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008ada9) main_camera2_pane_t

0x5754,	// (0x00080ec8) cams_zoom_pane_cp4_ParamLimits

0x5754,	// (0x00080ec8) cams_zoom_pane_cp4

0x5764,	// (0x00080ed8) image2_cif_pane_ParamLimits

0x5764,	// (0x00080ed8) image2_cif_pane

0x5779,	// (0x00080eed) image2_subqcif_pane_ParamLimits

0x5779,	// (0x00080eed) image2_subqcif_pane

0x5788,	// (0x00080efc) main_video2_pane_g1_ParamLimits

0x5788,	// (0x00080efc) main_video2_pane_g1

0x579a,	// (0x00080f0e) main_video2_pane_g2_ParamLimits

0x579a,	// (0x00080f0e) main_video2_pane_g2

0x57aa,	// (0x00080f1e) main_video2_pane_g3_ParamLimits

0x57aa,	// (0x00080f1e) main_video2_pane_g3

0x57ba,	// (0x00080f2e) main_video2_pane_g4_ParamLimits

0x57ba,	// (0x00080f2e) main_video2_pane_g4

0x57ca,	// (0x00080f3e) main_video2_pane_g5_ParamLimits

0x57ca,	// (0x00080f3e) main_video2_pane_g5

0x57da,	// (0x00080f4e) main_video2_pane_g6_ParamLimits

0x57da,	// (0x00080f4e) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008adb8) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008adb8) main_video2_pane_g

0x57ec,	// (0x00080f60) main_video2_pane_t1_ParamLimits

0x57ec,	// (0x00080f60) main_video2_pane_t1

0x5806,	// (0x00080f7a) main_video2_pane_t2_ParamLimits

0x5806,	// (0x00080f7a) main_video2_pane_t2

0x582c,	// (0x00080fa0) main_video2_pane_t3_ParamLimits

0x582c,	// (0x00080fa0) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008adc5) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008adc5) main_video2_pane_t

0x50f9,	// (0x0008086d) call_muted_g2

0x0001,

0xf5f3,	// (0x0008ad67) call_muted_g

0xa3ad,	// (0x00085b21) main_mup2_pane

0xc85c,	// (0x00087fd0) main_mup2_pane_g1_ParamLimits

0xc85c,	// (0x00087fd0) main_mup2_pane_g1

0x5852,	// (0x00080fc6) main_mup2_pane_g2_ParamLimits

0x5852,	// (0x00080fc6) main_mup2_pane_g2

0x5ad4,	// (0x00081248) main_mup_pane_g13_cp1

0x5adc,	// (0x00081250) mup_volume_pane_cp1

0x5872,	// (0x00080fe6) main_mup2_pane_g4_ParamLimits

0x5872,	// (0x00080fe6) main_mup2_pane_g4

0x5887,	// (0x00080ffb) main_mup2_pane_g5_ParamLimits

0x5887,	// (0x00080ffb) main_mup2_pane_g5

0x589c,	// (0x00081010) main_mup2_pane_g6_ParamLimits

0x589c,	// (0x00081010) main_mup2_pane_g6

0x58b1,	// (0x00081025) main_mup2_pane_g7_ParamLimits

0x58b1,	// (0x00081025) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008adcc) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008adcc) main_mup2_pane_g

0x58cd,	// (0x00081041) main_mup2_pane_t1_ParamLimits

0x58cd,	// (0x00081041) main_mup2_pane_t1

0x58e4,	// (0x00081058) main_mup2_pane_t2_ParamLimits

0x58e4,	// (0x00081058) main_mup2_pane_t2

0x58fb,	// (0x0008106f) main_mup2_pane_t3_ParamLimits

0x58fb,	// (0x0008106f) main_mup2_pane_t3

0x5912,	// (0x00081086) main_mup2_pane_t4_ParamLimits

0x5912,	// (0x00081086) main_mup2_pane_t4

0x592c,	// (0x000810a0) main_mup2_pane_t5_ParamLimits

0x592c,	// (0x000810a0) main_mup2_pane_t5

0x5946,	// (0x000810ba) main_mup2_pane_t6_ParamLimits

0x5946,	// (0x000810ba) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008addb) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008addb) main_mup2_pane_t

0x597e,	// (0x000810f2) mup2_visualizer_pane_ParamLimits

0x597e,	// (0x000810f2) mup2_visualizer_pane

0x59b4,	// (0x00081128) mup_progress_pane_cp_ParamLimits

0x59b4,	// (0x00081128) mup_progress_pane_cp

0x5abf,	// (0x00081233) mup_volume_pane_cp_ParamLimits

0x5abf,	// (0x00081233) mup_volume_pane_cp

0x59cb,	// (0x0008113f) mup2_visualizer_pane_g1_ParamLimits

0x59cb,	// (0x0008113f) mup2_visualizer_pane_g1

0xc868,	// (0x00087fdc) mup2_visualizer_pane_g2_ParamLimits

0xc868,	// (0x00087fdc) mup2_visualizer_pane_g2

0x59e0,	// (0x00081154) mup2_visualizer_pane_g3_ParamLimits

0x59e0,	// (0x00081154) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008ade8) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008ade8) mup2_visualizer_pane_g

0xb689,	// (0x00086dfd) aid_size_cell_fmradio

0x520f,	// (0x00080983) aid_height_parent_landcape

0xaab1,	// (0x00086225) wml_content_pane_cp

0xaab9,	// (0x0008622d) wml_tabs_pane

0xaac2,	// (0x00086236) popup_wml_miniature_window

0xaaca,	// (0x0008623e) scroll_pane_cp021

0xaade,	// (0x00086252) wml_content_pane_comp8

0xa3ad,	// (0x00085b21) bg_popup_sub_pane_cp05

0xc886,	// (0x00087ffa) popup_wml_miniature_window_g1

0xc88e,	// (0x00088002) wml_miniature_view_pane

0x59ee,	// (0x00081162) aid_size_wml_view

0x59f6,	// (0x0008116a) wml_miniature_view_pane_g1

0x59ff,	// (0x00081173) wml_miniature_view_pane_g2

0x5a08,	// (0x0008117c) wml_miniature_view_pane_g3

0x5a10,	// (0x00081184) wml_miniature_view_pane_g4

0x5a18,	// (0x0008118c) wml_miniature_view_pane_g5

0x5a20,	// (0x00081194) wml_miniature_view_pane_g6

0x5a28,	// (0x0008119c) wml_miniature_view_pane_g7

0x5a30,	// (0x000811a4) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008adef) wml_miniature_view_pane_g

0xc85c,	// (0x00087fd0) background_graphic_ParamLimits

0xc85c,	// (0x00087fd0) background_graphic

0xc896,	// (0x0008800a) wml_tabs_2_pane

0xc89f,	// (0x00088013) wml_tabs_3_pane_ParamLimits

0xc89f,	// (0x00088013) wml_tabs_3_pane

0xc8b1,	// (0x00088025) wml_tabs_4_pane_ParamLimits

0xc8b1,	// (0x00088025) wml_tabs_4_pane

0xc8c7,	// (0x0008803b) wml_tabs_5_pane_ParamLimits

0xc8c7,	// (0x0008803b) wml_tabs_5_pane

0xc8e1,	// (0x00088055) wml_tabs_pane_g2_ParamLimits

0xc8e1,	// (0x00088055) wml_tabs_pane_g2

0xc8f5,	// (0x00088069) wml_tabs_pane_g3_ParamLimits

0xc8f5,	// (0x00088069) wml_tabs_pane_g3

0x5a38,	// (0x000811ac) wml_tabs_2_active_pane_ParamLimits

0x5a38,	// (0x000811ac) wml_tabs_2_active_pane

0x5a48,	// (0x000811bc) wml_tabs_2_passive_pane_ParamLimits

0x5a48,	// (0x000811bc) wml_tabs_2_passive_pane

0x5a58,	// (0x000811cc) wml_tabs_3_active_pane_cp_ParamLimits

0x5a58,	// (0x000811cc) wml_tabs_3_active_pane_cp

0x5a69,	// (0x000811dd) wml_tabs_3_passive_pane_ParamLimits

0x5a69,	// (0x000811dd) wml_tabs_3_passive_pane

0x5a7a,	// (0x000811ee) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a7a,	// (0x000811ee) wml_tabs_3_passive_pane_cp

0x5a8b,	// (0x000811ff) tabs_4_active_pane

0x5a93,	// (0x00081207) tabs_4_passive_pane

0x5a9b,	// (0x0008120f) tabs_4_passive_pane_cp

0x5aa3,	// (0x00081217) tabs_4_passive_pane_cp2

0x4fd4,	// (0x00080748) aid_height_text

0x47e3,	// (0x0007ff57) mup_volume_cont_pane_ParamLimits

0x47e3,	// (0x0007ff57) mup_volume_cont_pane

0x22a0,	// (0x0007da14) aid_size_cell_pinb

0x22aa,	// (0x0007da1e) aid_size_list_pinb

0x599d,	// (0x00081111) mup2_volume_cont_pane_ParamLimits

0x599d,	// (0x00081111) mup2_volume_cont_pane

0x5aab,	// (0x0008121f) mup2_volume_cont_pane_g1_ParamLimits

0x5aab,	// (0x0008121f) mup2_volume_cont_pane_g1

0x1eda,	// (0x0007d64e) aid_size_cell_touch_ParamLimits

0x1eda,	// (0x0007d64e) aid_size_cell_touch

0x2183,	// (0x0007d8f7) touch_pane_ParamLimits

0x2183,	// (0x0007d8f7) touch_pane

0x9f90,	// (0x00085704) main_rss2_pane

0xc912,	// (0x00088086) listscroll_rss2_pane

0xc91b,	// (0x0008808f) rss2_navigation_pane

0xc923,	// (0x00088097) list_rss2_pane

0xb15a,	// (0x000868ce) scroll_pane_cp22

0xc92b,	// (0x0008809f) rss2_navigation_pane_g1

0xc934,	// (0x000880a8) rss2_navigation_pane_g2

0xc93c,	// (0x000880b0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008ae00) rss2_navigation_pane_g

0xc944,	// (0x000880b8) rss2_navigation_pane_t1

0x5ae4,	// (0x00081258) rss2_list_single_pane_ParamLimits

0x5ae4,	// (0x00081258) rss2_list_single_pane

0xc952,	// (0x000880c6) rss2_list_single_pane_t2

0xc960,	// (0x000880d4) rss2_list_single_pane_t3_ParamLimits

0xc960,	// (0x000880d4) rss2_list_single_pane_t3

0xc97d,	// (0x000880f1) rss2_list_single_pane_t4

0x4141,	// (0x0007f8b5) smil_status_pane_g1

0xaa03,	// (0x00086177) main_image2_pane_ParamLimits

0xaa03,	// (0x00086177) main_image2_pane

0x56b0,	// (0x00080e24) main_camera2_pane_g9_ParamLimits

0x56b0,	// (0x00080e24) main_camera2_pane_g9

0x5704,	// (0x00080e78) main_camera2_pane_t5_ParamLimits

0x5704,	// (0x00080e78) main_camera2_pane_t5

0x5716,	// (0x00080e8a) main_camera2_pane_t6_ParamLimits

0x5716,	// (0x00080e8a) main_camera2_pane_t6

0x5b1c,	// (0x00081290) main_image2_pane_g1_ParamLimits

0x5b1c,	// (0x00081290) main_image2_pane_g1

0x4d70,	// (0x000804e4) smil2_video_pane_ParamLimits

0x4d70,	// (0x000804e4) smil2_video_pane

0x0cb6,	// (0x0007c42a) aid_zoom_text_primary_cp

0x212c,	// (0x0007d8a0) popup_preview_fixed_window

0xaa1a,	// (0x0008618e) im_reading_pane_g1

0x55fa,	// (0x00080d6e) cams2_bc_adjust_pane_cp_ParamLimits

0x55fa,	// (0x00080d6e) cams2_bc_adjust_pane_cp

0x5746,	// (0x00080eba) cams2_bc_adjust_pane_ParamLimits

0x5746,	// (0x00080eba) cams2_bc_adjust_pane

0x5b28,	// (0x0008129c) cams2_bc_adjust_pane_g1

0x5b30,	// (0x000812a4) cams2_slider_pane

0x5b39,	// (0x000812ad) cams2_slider_pane_g1

0x5b42,	// (0x000812b6) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008ae07) cams2_slider_pane_g

0x239a,	// (0x0007db0e) calc_display_pane_ParamLimits

0x23b8,	// (0x0007db2c) calc_paper_pane_ParamLimits

0x23d4,	// (0x0007db48) grid_calc_pane_ParamLimits

0x434e,	// (0x0007fac2) popup_clock_digital_window_t1_ParamLimits

0xb626,	// (0x00086d9a) main_image_pane_t1

0x2380,	// (0x0007daf4) aid_size_cell_calc_ParamLimits

0x2380,	// (0x0007daf4) aid_size_cell_calc

0x5249,	// (0x000809bd) popup_blid_sat_info2_window_ParamLimits

0x5249,	// (0x000809bd) popup_blid_sat_info2_window

0xc993,	// (0x00088107) aid_size_cell_blid

0xc99b,	// (0x0008810f) bg_popup_window_pane_cp07

0xc9be,	// (0x00088132) grid_popup_blid_pane

0xc9c8,	// (0x0008813c) heading_pane_cp05_ParamLimits

0xc9c8,	// (0x0008813c) heading_pane_cp05

0xca92,	// (0x00088206) cell_popup_blid_pane_ParamLimits

0xca92,	// (0x00088206) cell_popup_blid_pane

0xcab8,	// (0x0008822c) cell_popup_blid_pane_g1

0xcac0,	// (0x00088234) cell_popup_blid_pane_t1

0x5963,	// (0x000810d7) mup2_indicator_pane_ParamLimits

0x5963,	// (0x000810d7) mup2_indicator_pane

0xa90a,	// (0x0008607e) mup2_visualizer_osc_pane

0xc874,	// (0x00087fe8) mup2_visualizer_spec_pane_ParamLimits

0xc874,	// (0x00087fe8) mup2_visualizer_spec_pane

0x5b5c,	// (0x000812d0) mup2_spec_half_pane

0x5b65,	// (0x000812d9) mup2_spec_half_pane_cp

0x5b6f,	// (0x000812e3) mup2_spec_bar_pane_ParamLimits

0x5b6f,	// (0x000812e3) mup2_spec_bar_pane

0xc809,	// (0x00087f7d) mup2_spec_bar_pane_g1

0xc813,	// (0x00087f87) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008ad7a) mup2_spec_bar_pane_g

0x5b8e,	// (0x00081302) mup2_osc_middle_pane

0xc825,	// (0x00087f99) mup2_visualizer_osc_pane_g1

0x9fba,	// (0x0008572e) popup_number_entry_window_t1_ParamLimits

0x9fcd,	// (0x00085741) popup_number_entry_window_t2_ParamLimits

0x9fdf,	// (0x00085753) popup_number_entry_window_t3_ParamLimits

0x21da,	// (0x0007d94e) popup_number_entry_window_t5_ParamLimits

0x21da,	// (0x0007d94e) popup_number_entry_window_t5

0xf0ca,	// (0x0008a83e) popup_number_entry_window_t_ParamLimits

0x9ff1,	// (0x00085765) text_title_cp2_ParamLimits

0x4a5b,	// (0x000801cf) aid_hotspot_pointer_text2_pane

0x4af5,	// (0x00080269) main_viewer_pane_g9_ParamLimits

0x4af5,	// (0x00080269) main_viewer_pane_g9

0xac53,	// (0x000863c7) cale_month_pane_t1_ParamLimits

0xac90,	// (0x00086404) bg_cale_pane_ParamLimits

0xaca8,	// (0x0008641c) list_cale_pane_ParamLimits

0xacb9,	// (0x0008642d) listscroll_cale_day_pane_t1

0xaccb,	// (0x0008643f) scroll_pane_cp09_ParamLimits

0x4822,	// (0x0007ff96) main_mup_eq_pane_t1_ParamLimits

0x4822,	// (0x0007ff96) main_mup_eq_pane_t1

0x483c,	// (0x0007ffb0) main_mup_eq_pane_t2_ParamLimits

0x483c,	// (0x0007ffb0) main_mup_eq_pane_t2

0x4854,	// (0x0007ffc8) main_mup_eq_pane_t3_ParamLimits

0x4854,	// (0x0007ffc8) main_mup_eq_pane_t3

0x486c,	// (0x0007ffe0) main_mup_eq_pane_t4_ParamLimits

0x486c,	// (0x0007ffe0) main_mup_eq_pane_t4

0x4884,	// (0x0007fff8) main_mup_eq_pane_t5_ParamLimits

0x4884,	// (0x0007fff8) main_mup_eq_pane_t5

0x489c,	// (0x00080010) main_mup_eq_pane_t6_ParamLimits

0x489c,	// (0x00080010) main_mup_eq_pane_t6

0x48b0,	// (0x00080024) main_mup_eq_pane_t7_ParamLimits

0x48b0,	// (0x00080024) main_mup_eq_pane_t7

0x48c4,	// (0x00080038) main_mup_eq_pane_t8_ParamLimits

0x48c4,	// (0x00080038) main_mup_eq_pane_t8

0x48da,	// (0x0008004e) main_mup_eq_pane_t9_ParamLimits

0x48da,	// (0x0008004e) main_mup_eq_pane_t9

0x48f2,	// (0x00080066) main_mup_eq_pane_t10_ParamLimits

0x48f2,	// (0x00080066) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008abc9) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008abc9) main_mup_eq_pane_t

0x49af,	// (0x00080123) mup_equalizer_pane_cp5_ParamLimits

0x49c5,	// (0x00080139) mup_equalizer_pane_cp6_ParamLimits

0x49dd,	// (0x00080151) mup_equalizer_pane_cp7_ParamLimits

0x9f90,	// (0x00085704) main_gallery_pane

0xc82e,	// (0x00087fa2) smil2_volume_pane

0xc836,	// (0x00087faa) smil_status_volume_pane_g1_ParamLimits

0xc849,	// (0x00087fbd) smil_status_volume_pane_g2_ParamLimits

0x546f,	// (0x00080be3) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008ad7f) smil_status_volume_pane_g_ParamLimits

0xc99b,	// (0x0008810f) bg_popup_window_pane_cp07_ParamLimits

0xc9a9,	// (0x0008811d) blid_firmament_pane

0x5b97,	// (0x0008130b) aid_size_cell_gallery_ParamLimits

0x5b97,	// (0x0008130b) aid_size_cell_gallery

0x5ba5,	// (0x00081319) grid_gallery_pane_ParamLimits

0x5ba5,	// (0x00081319) grid_gallery_pane

0x5bb5,	// (0x00081329) cell_gallery_pane_ParamLimits

0x5bb5,	// (0x00081329) cell_gallery_pane

0xcace,	// (0x00088242) bg_cell_gallery_focus_pane_ParamLimits

0xcace,	// (0x00088242) bg_cell_gallery_focus_pane

0xcae0,	// (0x00088254) cell_gallery_pane_g1_ParamLimits

0xcae0,	// (0x00088254) cell_gallery_pane_g1

0x5c03,	// (0x00081377) cell_gallery_pane_g2_ParamLimits

0x5c03,	// (0x00081377) cell_gallery_pane_g2

0x5c10,	// (0x00081384) cell_gallery_pane_g3_ParamLimits

0x5c10,	// (0x00081384) cell_gallery_pane_g3

0xcaec,	// (0x00088260) cell_gallery_pane_g4_ParamLimits

0xcaec,	// (0x00088260) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008ae2d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008ae2d) cell_gallery_pane_g

0xcaf8,	// (0x0008826c) bg_cell_gallery_focus_pane_g1

0xcb00,	// (0x00088274) bg_cell_gallery_focus_pane_g2

0xcb08,	// (0x0008827c) bg_cell_gallery_focus_pane_g3

0xcb10,	// (0x00088284) bg_cell_gallery_focus_pane_g4

0xcb18,	// (0x0008828c) bg_cell_gallery_focus_pane_g5

0xcb20,	// (0x00088294) bg_cell_gallery_focus_pane_g6

0xcb28,	// (0x0008829c) bg_cell_gallery_focus_pane_g7

0xcb30,	// (0x000882a4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008ae36) bg_cell_gallery_focus_pane_g

0xcb38,	// (0x000882ac) aid_firma_cardinal

0xcb4c,	// (0x000882c0) blid_firmament_pane_t1

0xcb63,	// (0x000882d7) blid_firmament_pane_t2

0xcb7a,	// (0x000882ee) blid_firmament_pane_t3

0xcb91,	// (0x00088305) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008ae47) blid_firmament_pane_t

0xcba8,	// (0x0008831c) blid_sat_info_pane

0xcbb8,	// (0x0008832c) blid_sat_info_pane_g1

0xcbb8,	// (0x0008832c) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008ae50) blid_sat_info_pane_g

0xcbc2,	// (0x00088336) blid_sat_info_pane_t1

0xcbd0,	// (0x00088344) smil2_volume_content_pane

0xcbd9,	// (0x0008834d) smil2_volume_pane_g1

0xa76d,	// (0x00085ee1) smil2_volume_content_pane_g1

0xcbe1,	// (0x00088355) smil2_volume_content_pane_g2

0xcbea,	// (0x0008835e) smil2_volume_content_pane_g3

0xcbf3,	// (0x00088367) smil2_volume_content_pane_g4

0xcbfc,	// (0x00088370) smil2_volume_content_pane_g5

0xcc05,	// (0x00088379) smil2_volume_content_pane_g6

0xcc0e,	// (0x00088382) smil2_volume_content_pane_g7

0xcc17,	// (0x0008838b) smil2_volume_content_pane_g8

0xcc20,	// (0x00088394) smil2_volume_content_pane_g9

0xcc29,	// (0x0008839d) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008ae55) smil2_volume_content_pane_g

0x29bc,	// (0x0007e130) cale_week_day_heading_pane_t1_ParamLimits

0x29f7,	// (0x0007e16b) cale_week_day_heading_pane_t2_ParamLimits

0x2a32,	// (0x0007e1a6) cale_week_day_heading_pane_t3_ParamLimits

0x2a6d,	// (0x0007e1e1) cale_week_day_heading_pane_t4_ParamLimits

0x2aa8,	// (0x0007e21c) cale_week_day_heading_pane_t5_ParamLimits

0x2ae3,	// (0x0007e257) cale_week_day_heading_pane_t6_ParamLimits

0x2b1e,	// (0x0007e292) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008a945) cale_week_day_heading_pane_t_ParamLimits

0xa8b8,	// (0x0008602c) bg_cale_side_pane_ParamLimits

0x2b59,	// (0x0007e2cd) cale_week_time_pane_t1_ParamLimits

0x2b73,	// (0x0007e2e7) cale_week_time_pane_t2_ParamLimits

0x2b8d,	// (0x0007e301) cale_week_time_pane_t3_ParamLimits

0x2ba7,	// (0x0007e31b) cale_week_time_pane_t4_ParamLimits

0x2bc1,	// (0x0007e335) cale_week_time_pane_t5_ParamLimits

0x2bdd,	// (0x0007e351) cale_week_time_pane_t6_ParamLimits

0x2bff,	// (0x0007e373) cale_week_time_pane_t7_ParamLimits

0x2c23,	// (0x0007e397) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008a954) cale_week_time_pane_t_ParamLimits

0x2c49,	// (0x0007e3bd) cell_cale_week_pane_g2_ParamLimits

0xa8b8,	// (0x0008602c) bg_cale_side_pane_cp01_ParamLimits

0x3f3a,	// (0x0007f6ae) cale_month_week_pane_t1_ParamLimits

0x3f53,	// (0x0007f6c7) cale_month_week_pane_t2_ParamLimits

0x3f6c,	// (0x0007f6e0) cale_month_week_pane_t3_ParamLimits

0x3f85,	// (0x0007f6f9) cale_month_week_pane_t4_ParamLimits

0x3fa2,	// (0x0007f716) cale_month_week_pane_t5_ParamLimits

0x3fc3,	// (0x0007f737) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008aa29) cale_month_week_pane_t_ParamLimits

0x410a,	// (0x0007f87e) cell_cale_month_pane_g1_ParamLimits

0x9f90,	// (0x00085704) main_cale_event_viewer_pane

0x9f90,	// (0x00085704) listscroll_cale_event_viewer_pane

0xcc32,	// (0x000883a6) list_cale_ev_pane

0xcc3a,	// (0x000883ae) scroll_pane_cp023

0xcc46,	// (0x000883ba) field_cale_ev_pane_ParamLimits

0xcc46,	// (0x000883ba) field_cale_ev_pane

0xcc62,	// (0x000883d6) field_cale_ev_content_pane_ParamLimits

0xcc62,	// (0x000883d6) field_cale_ev_content_pane

0xcc6e,	// (0x000883e2) field_cale_ev_pane_g1_ParamLimits

0xcc6e,	// (0x000883e2) field_cale_ev_pane_g1

0xcc7a,	// (0x000883ee) field_cale_ev_pane_g2_ParamLimits

0xcc7a,	// (0x000883ee) field_cale_ev_pane_g2

0xcc92,	// (0x00088406) field_cale_ev_pane_g3_ParamLimits

0xcc92,	// (0x00088406) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008ae6a) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008ae6a) field_cale_ev_pane_g

0xccaa,	// (0x0008841e) field_cale_ev_pane_t1_ParamLimits

0xccaa,	// (0x0008841e) field_cale_ev_pane_t1

0xccc1,	// (0x00088435) field_cale_ev_content_pane_t1_ParamLimits

0xccc1,	// (0x00088435) field_cale_ev_content_pane_t1

0xb50c,	// (0x00086c80) bg_button_pane_cp01

0x2745,	// (0x0007deb9) listscroll_cale_week_pane_ParamLimits

0xa863,	// (0x00085fd7) popup_toolbar_window_cp01

0xa889,	// (0x00085ffd) listscroll_cale_week_pane_t1_ParamLimits

0x2745,	// (0x0007deb9) listscroll_cale_day_pane_ParamLimits

0xa863,	// (0x00085fd7) popup_toolbar_window_cp02

0xacb9,	// (0x0008642d) listscroll_cale_day_pane_t1_ParamLimits

0x2745,	// (0x0007deb9) main_cale_month_pane_ParamLimits

0x5346,	// (0x00080aba) popup_toolbar_window_cp03_ParamLimits

0x5346,	// (0x00080aba) popup_toolbar_window_cp03

0x4c82,	// (0x000803f6) main_image_pane_g2_ParamLimits

0x4c82,	// (0x000803f6) main_image_pane_g2

0x4c8e,	// (0x00080402) main_image_pane_g3_ParamLimits

0x4c8e,	// (0x00080402) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008ac5b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008ac5b) main_image_pane_g

0xb626,	// (0x00086d9a) main_image_pane_t1_ParamLimits

0x4c9a,	// (0x0008040e) main_image_pane_t2_ParamLimits

0x4c9a,	// (0x0008040e) main_image_pane_t2

0x4cac,	// (0x00080420) main_image_pane_t3_ParamLimits

0x4cac,	// (0x00080420) main_image_pane_t3

0x4cbe,	// (0x00080432) main_image_pane_t4_ParamLimits

0x4cbe,	// (0x00080432) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008ac62) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008ac62) main_image_pane_t

0x4cd0,	// (0x00080444) popup_image_details_window_cp01

0x4cda,	// (0x0008044e) popup_toobar_trans_pane_cp01_ParamLimits

0x4cda,	// (0x0008044e) popup_toobar_trans_pane_cp01

0x529c,	// (0x00080a10) popup_image_details_window_ParamLimits

0x529c,	// (0x00080a10) popup_image_details_window

0x52aa,	// (0x00080a1e) popup_image_focus_window

0x55ec,	// (0x00080d60) camera2_autofocus_pane_ParamLimits

0x55ec,	// (0x00080d60) camera2_autofocus_pane

0x9f90,	// (0x00085704) bg_popup_sub_pane_cp06

0xccde,	// (0x00088452) popup_image_focus_window_g1

0xcce6,	// (0x0008845a) popup_image_focus_window_g2

0xccee,	// (0x00088462) popup_image_focus_window_g3

0xccf6,	// (0x0008846a) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008ae71) popup_image_focus_window_g

0xccfe,	// (0x00088472) popup_image_focus_window_t1

0xcd0c,	// (0x00088480) popup_image_focus_window_t2

0xcd1c,	// (0x00088490) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008ae7a) popup_image_focus_window_t

0xcd2a,	// (0x0008849e) camera2_autofocus_pane_g1

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp01

0xcd38,	// (0x000884ac) popup_image_details_window_g1

0xcd4b,	// (0x000884bf) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008ae8c) popup_image_details_window_g

0xcd74,	// (0x000884e8) popup_image_details_window_t1

0xcd92,	// (0x00088506) popup_image_details_window_t2

0xcdab,	// (0x0008851f) popup_image_details_window_t3

0xcdbf,	// (0x00088533) popup_image_details_window_t4

0xcdda,	// (0x0008854e) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008ae93) popup_image_details_window_t

0xa6d8,	// (0x00085e4c) bg_calc_paper_pane_ParamLimits

0x9f90,	// (0x00085704) grid_highlight_pane_cp013

0x24d1,	// (0x0007dc45) list_calc_pane_ParamLimits

0x24e3,	// (0x0007dc57) scroll_pane_cp024

0xa6ec,	// (0x00085e60) bg_calc_display_pane_ParamLimits

0x24eb,	// (0x0007dc5f) calc_display_pane_t1_ParamLimits

0x2500,	// (0x0007dc74) calc_display_pane_t2_ParamLimits

0x2515,	// (0x0007dc89) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008a8c5) calc_display_pane_t_ParamLimits

0x25f6,	// (0x0007dd6a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008a8e2) cell_calc_pane_g

0x25ff,	// (0x0007dd73) cell_calc_pane_t1

0xa74b,	// (0x00085ebf) grid_highlight_pane_cp02_ParamLimits

0xa761,	// (0x00085ed5) toolbar_button_pane_cp01_ParamLimits

0xa761,	// (0x00085ed5) toolbar_button_pane_cp01

0xb66b,	// (0x00086ddf) temp_image_control_pane_ParamLimits

0xb66b,	// (0x00086ddf) temp_image_control_pane

0xaa03,	// (0x00086177) main_mp3_pane

0xcdf4,	// (0x00088568) temp_image_control_pane_g1_ParamLimits

0xcdf4,	// (0x00088568) temp_image_control_pane_g1

0xce02,	// (0x00088576) temp_image_control_pane_g2_ParamLimits

0xce02,	// (0x00088576) temp_image_control_pane_g2

0xce14,	// (0x00088588) temp_image_control_pane_g3_ParamLimits

0xce14,	// (0x00088588) temp_image_control_pane_g3

0x5c4d,	// (0x000813c1) temp_image_control_pane_g4_ParamLimits

0x5c4d,	// (0x000813c1) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008ae9e) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008ae9e) temp_image_control_pane_g

0xcdf4,	// (0x00088568) main_mp3_pane_g1

0x5c5e,	// (0x000813d2) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008aea7) main_mp3_pane_g

0xce57,	// (0x000885cb) main_mp3_pane_t1

0xa912,	// (0x00086086) main_camera_pane_g8_ParamLimits

0xa912,	// (0x00086086) main_camera_pane_g8

0x2ed3,	// (0x0007e647) main_video_pane_g7_ParamLimits

0x2ed3,	// (0x0007e647) main_video_pane_g7

0x5734,	// (0x00080ea8) main_camera2_pane_t7_ParamLimits

0x5734,	// (0x00080ea8) main_camera2_pane_t7

0xaa71,	// (0x000861e5) scroll_pane_cp025_ParamLimits

0xaa71,	// (0x000861e5) scroll_pane_cp025

0xaa85,	// (0x000861f9) scroll_pane_cp026_ParamLimits

0xaa85,	// (0x000861f9) scroll_pane_cp026

0xaa94,	// (0x00086208) wml_content_pane_ParamLimits

0x9f90,	// (0x00085704) main_touch_calib_pane

0x5d02,	// (0x00081476) main_touch_calib_pane_g1

0x5d0e,	// (0x00081482) main_touch_calib_pane_g2

0x5d1a,	// (0x0008148e) main_touch_calib_pane_g3

0x5d26,	// (0x0008149a) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008aec5) main_touch_calib_pane_g

0x5d32,	// (0x000814a6) main_touch_calib_pane_t1

0x5d4b,	// (0x000814bf) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008aece) main_touch_calib_pane_t

0xb238,	// (0x000869ac) mup_progress_pane_cp02

0xb26d,	// (0x000869e1) navi_pane_g1

0xb336,	// (0x00086aaa) navi_pane_mp_t3

0xaa03,	// (0x00086177) main_mp3_pane_ParamLimits

0x5383,	// (0x00080af7) navi_pane_ParamLimits

0xcdf4,	// (0x00088568) main_mp3_pane_g1_ParamLimits

0x5c5e,	// (0x000813d2) main_mp3_pane_g2_ParamLimits

0x5c6a,	// (0x000813de) main_mp3_pane_g3_ParamLimits

0x5c6a,	// (0x000813de) main_mp3_pane_g3

0x5c76,	// (0x000813ea) main_mp3_pane_g4_ParamLimits

0x5c76,	// (0x000813ea) main_mp3_pane_g4

0xce24,	// (0x00088598) main_mp3_pane_g5_ParamLimits

0xce24,	// (0x00088598) main_mp3_pane_g5

0xce32,	// (0x000885a6) main_mp3_pane_g6_ParamLimits

0xce32,	// (0x000885a6) main_mp3_pane_g6

0xce3f,	// (0x000885b3) main_mp3_pane_g7_ParamLimits

0xce3f,	// (0x000885b3) main_mp3_pane_g7

0xce4b,	// (0x000885bf) main_mp3_pane_g8_ParamLimits

0xce4b,	// (0x000885bf) main_mp3_pane_g8

0xf733,	// (0x0008aea7) main_mp3_pane_g_ParamLimits

0x5c82,	// (0x000813f6) main_mp3_pane_t2

0x5c92,	// (0x00081406) main_mp3_pane_t3

0xce65,	// (0x000885d9) main_mp3_pane_t4

0xce73,	// (0x000885e7) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008aeb8) main_mp3_pane_t

0xce81,	// (0x000885f5) mup_progress_pane_cp01

0x0cb6,	// (0x0007c42a) aid_zoom_text_secondary2

0xcc32,	// (0x000883a6) list_cale_ev2_pane

0xcc3a,	// (0x000883ae) scroll_pane_cp023_ParamLimits

0x5da6,	// (0x0008151a) field_cale_ev2_pane_ParamLimits

0x5da6,	// (0x0008151a) field_cale_ev2_pane

0x5dd4,	// (0x00081548) field_cale_ev2_pane_g1_ParamLimits

0x5dd4,	// (0x00081548) field_cale_ev2_pane_g1

0x5de0,	// (0x00081554) field_cale_ev2_pane_g2_ParamLimits

0x5de0,	// (0x00081554) field_cale_ev2_pane_g2

0x5df8,	// (0x0008156c) field_cale_ev2_pane_g3_ParamLimits

0x5df8,	// (0x0008156c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008aed9) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008aed9) field_cale_ev2_pane_g

0x0fc4,	// (0x0007c738) field_cale_ev2_pane_t1_ParamLimits

0x0fc4,	// (0x0007c738) field_cale_ev2_pane_t1

0x0fdb,	// (0x0007c74f) field_cale_ev2_pane_t2_ParamLimits

0x0fdb,	// (0x0007c74f) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008aee2) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008aee2) field_cale_ev2_pane_t

0x4b5d,	// (0x000802d1) main_postcard_pane_g5_ParamLimits

0x4b5d,	// (0x000802d1) main_postcard_pane_g5

0x4b6b,	// (0x000802df) main_postcard_pane_g6_ParamLimits

0x4b6b,	// (0x000802df) main_postcard_pane_g6

0x2d1d,	// (0x0007e491) camera2_autofocus_pane_cp_ParamLimits

0x2d1d,	// (0x0007e491) camera2_autofocus_pane_cp

0xaa03,	// (0x00086177) main_mup3_pane

0x5e3c,	// (0x000815b0) main_mup3_pane_g1_ParamLimits

0x5e3c,	// (0x000815b0) main_mup3_pane_g1

0x5e5d,	// (0x000815d1) main_mup3_pane_g2_ParamLimits

0x5e5d,	// (0x000815d1) main_mup3_pane_g2

0x5ed9,	// (0x0008164d) main_mup3_pane_g3_ParamLimits

0x5ed9,	// (0x0008164d) main_mup3_pane_g3

0x5f1c,	// (0x00081690) main_mup3_pane_g4_ParamLimits

0x5f1c,	// (0x00081690) main_mup3_pane_g4

0x5f5f,	// (0x000816d3) main_mup3_pane_g5_ParamLimits

0x5f5f,	// (0x000816d3) main_mup3_pane_g5

0x5fa4,	// (0x00081718) main_mup3_pane_g6_ParamLimits

0x5fa4,	// (0x00081718) main_mup3_pane_g6

0xce89,	// (0x000885fd) main_mup3_pane_g7_ParamLimits

0xce89,	// (0x000885fd) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008aef2) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008aef2) main_mup3_pane_g

0x601a,	// (0x0008178e) main_mup3_pane_t1_ParamLimits

0x601a,	// (0x0008178e) main_mup3_pane_t1

0x6089,	// (0x000817fd) main_mup3_pane_t2_ParamLimits

0x6089,	// (0x000817fd) main_mup3_pane_t2

0x6152,	// (0x000818c6) main_mup3_pane_t4_ParamLimits

0x6152,	// (0x000818c6) main_mup3_pane_t4

0x61a0,	// (0x00081914) main_mup3_pane_t5_ParamLimits

0x61a0,	// (0x00081914) main_mup3_pane_t5

0x6250,	// (0x000819c4) main_mup3_pane_t6_ParamLimits

0x6250,	// (0x000819c4) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008af03) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008af03) main_mup3_pane_t

0x62fc,	// (0x00081a70) mup3_progress_pane_ParamLimits

0x62fc,	// (0x00081a70) mup3_progress_pane

0x6370,	// (0x00081ae4) popup_mup3_control_window_ParamLimits

0x6370,	// (0x00081ae4) popup_mup3_control_window

0xce97,	// (0x0008860b) popup_mup3_text_window

0x6389,	// (0x00081afd) mup3_progress_pane_t1

0x63a8,	// (0x00081b1c) mup3_progress_pane_t2

0xce9f,	// (0x00088613) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008af10) mup3_progress_pane_t

0xcebc,	// (0x00088630) mup_progress_pane_cp03

0x9f90,	// (0x00085704) bg_tb_trans_pane_cp04

0x63c7,	// (0x00081b3b) mup3_volume_pane

0x63cf,	// (0x00081b43) popup_mup3_control_window_g1

0x63d8,	// (0x00081b4c) mup3_volume_pane_g1

0x63e1,	// (0x00081b55) mup3_volume_pane_g2

0x63ea,	// (0x00081b5e) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008af17) mup3_volume_pane_g

0x9f90,	// (0x00085704) bg_tb_trans_pane_cp03

0xcecc,	// (0x00088640) popup_mup3_text_window_g1

0xced4,	// (0x00088648) popup_mup3_text_window_t1

0xa734,	// (0x00085ea8) list_calc_item_pane_g1_ParamLimits

0xc909,	// (0x0008807d) mup_volume_pane_cp_g1

0x5d64,	// (0x000814d8) main_touch_calib_pane_t3

0x5d7a,	// (0x000814ee) main_touch_calib_pane_t4

0x5d90,	// (0x00081504) main_touch_calib_pane_t5

0x1ec6,	// (0x0007d63a) aid_cell_size_toolbar2

0x1ece,	// (0x0007d642) aid_popup3_width_pane

0x1f0e,	// (0x0007d682) aid_zoom_text_msg_primary

0x2cf2,	// (0x0007e466) vorec_t7

0xa6f8,	// (0x00085e6c) bg_calc_paper_pane_g1_ParamLimits

0xa704,	// (0x00085e78) bg_calc_paper_pane_g2_ParamLimits

0xa710,	// (0x00085e84) bg_calc_paper_pane_g3_ParamLimits

0xa71c,	// (0x00085e90) bg_calc_paper_pane_g4_ParamLimits

0xa728,	// (0x00085e9c) bg_calc_paper_pane_g5_ParamLimits

0x2554,	// (0x0007dcc8) bg_calc_paper_pane_g6_ParamLimits

0x2565,	// (0x0007dcd9) bg_calc_paper_pane_g7_ParamLimits

0x2576,	// (0x0007dcea) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008a8cc) bg_calc_paper_pane_g_ParamLimits

0x2587,	// (0x0007dcfb) calc_bg_paper_pane_g9_ParamLimits

0x2e04,	// (0x0007e578) image_qvga_pane_ParamLimits

0x2e04,	// (0x0007e578) image_qvga_pane

0xa608,	// (0x00085d7c) bg_popup_sub_pane_cp04_ParamLimits

0xb5a2,	// (0x00086d16) popup_mup_playback_window_g1_ParamLimits

0xb5ae,	// (0x00086d22) popup_mup_playback_window_t1_ParamLimits

0xb5c3,	// (0x00086d37) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008ac56) popup_mup_playback_window_t_ParamLimits

0x5863,	// (0x00080fd7) main_mup2_pane_g3_ParamLimits

0x5863,	// (0x00080fd7) main_mup2_pane_g3

0x30d4,	// (0x0007e848) popup_toolbar_window_cp04

0xb9b8,	// (0x0008712c) popup_call2_audio_second_window_g3_ParamLimits

0xb9b8,	// (0x0008712c) popup_call2_audio_second_window_g3

0xbdc2,	// (0x00087536) popup_call2_audio_first_window_g4_ParamLimits

0xbdc2,	// (0x00087536) popup_call2_audio_first_window_g4

0xc441,	// (0x00087bb5) popup_call2_audio_in_window_g4_ParamLimits

0xc441,	// (0x00087bb5) popup_call2_audio_in_window_g4

0x4c75,	// (0x000803e9) aid_area_sk_bg_cut_ParamLimits

0x4c75,	// (0x000803e9) aid_area_sk_bg_cut

0xb5d8,	// (0x00086d4c) aid_area_sk_bg_cut_2_ParamLimits

0xb5d8,	// (0x00086d4c) aid_area_sk_bg_cut_2

0x5bf3,	// (0x00081367) aid_placing_details_win

0x5bfb,	// (0x0008136f) aid_placing_details_win_2

0xcd2a,	// (0x0008849e) camera2_autofocus_pane_g1_ParamLimits

0x211d,	// (0x0007d891) popup_fixed_preview_cale_window_ParamLimits

0x211d,	// (0x0007d891) popup_fixed_preview_cale_window

0xb3b4,	// (0x00086b28) navi_slider_pane_g3

0xb3bd,	// (0x00086b31) navi_slider_pane_g4

0xb3c6,	// (0x00086b3a) navi_slider_pane_g5

0xb3b4,	// (0x00086b28) navi_slider_pane_g6

0x45b6,	// (0x0007fd2a) navi_slider_pane_g7

0xb4d9,	// (0x00086c4d) mup_scale_pane_g3

0xb4e2,	// (0x00086c56) mup_scale_pane_g4

0xb4eb,	// (0x00086c5f) mup_scale_pane_g5

0x49f5,	// (0x00080169) mup_scale_pane_g6

0x49fe,	// (0x00080172) mup_scale_pane_g7

0xb3b4,	// (0x00086b28) cams2_slider_pane_g3

0xc98b,	// (0x000880ff) cams2_slider_pane_g4

0x5b4b,	// (0x000812bf) cams2_slider_pane_g5

0xb3b4,	// (0x00086b28) cams2_slider_pane_g6

0x5b53,	// (0x000812c7) cams2_slider_pane_g7

0xcbb8,	// (0x0008832c) camera2_autofocus_pane_cp_g1

0xc7a2,	// (0x00087f16) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7a2,	// (0x00087f16) bg_popup_preview_window_pane_cp02

0xcee2,	// (0x00088656) list_fp_cale_pane_ParamLimits

0xcee2,	// (0x00088656) list_fp_cale_pane

0xceee,	// (0x00088662) popup_fixed_preview_cale_window_t1_ParamLimits

0xceee,	// (0x00088662) popup_fixed_preview_cale_window_t1

0x63f3,	// (0x00081b67) popup_fixed_preview_cale_window_t2_ParamLimits

0x63f3,	// (0x00081b67) popup_fixed_preview_cale_window_t2

0x6408,	// (0x00081b7c) popup_fixed_preview_cale_window_t3_ParamLimits

0x6408,	// (0x00081b7c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008af1e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008af1e) popup_fixed_preview_cale_window_t

0x641d,	// (0x00081b91) list_single_fp_cale_pane_ParamLimits

0x641d,	// (0x00081b91) list_single_fp_cale_pane

0xcf0c,	// (0x00088680) list_single_fp_cale_pane_g1_ParamLimits

0xcf0c,	// (0x00088680) list_single_fp_cale_pane_g1

0xcf18,	// (0x0008868c) list_single_fp_cale_pane_g2_ParamLimits

0xcf18,	// (0x0008868c) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0008af25) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0008af25) list_single_fp_cale_pane_g

0xcf31,	// (0x000886a5) list_single_fp_cale_pane_t1_ParamLimits

0xcf31,	// (0x000886a5) list_single_fp_cale_pane_t1

0xcf43,	// (0x000886b7) list_single_fp_cale_pane_t2_ParamLimits

0xcf43,	// (0x000886b7) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008af2c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008af2c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f90,	// (0x00085704) main_dialer_pane

0x6431,	// (0x00081ba5) aid_cell_size_keypad

0x643b,	// (0x00081baf) dialer_ne_pane

0x6445,	// (0x00081bb9) grid_dialer_command_1_pane

0x644d,	// (0x00081bc1) grid_dialer_command_2_pane

0x6455,	// (0x00081bc9) grid_dialer_keypad_pane

0x6469,	// (0x00081bdd) bg_popup_call_pane_cp06_ParamLimits

0x6469,	// (0x00081bdd) bg_popup_call_pane_cp06

0x6475,	// (0x00081be9) dialer_ne_clear_pane_ParamLimits

0x6475,	// (0x00081be9) dialer_ne_clear_pane

0xcf76,	// (0x000886ea) dialer_ne_pane_g1

0xcf7e,	// (0x000886f2) dialer_ne_pane_t1_ParamLimits

0xcf7e,	// (0x000886f2) dialer_ne_pane_t1

0x6481,	// (0x00081bf5) dialer_ne_pane_t2_ParamLimits

0x6481,	// (0x00081bf5) dialer_ne_pane_t2

0x649e,	// (0x00081c12) dialer_ne_pane_t3_ParamLimits

0x649e,	// (0x00081c12) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0008af31) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0008af31) dialer_ne_pane_t

0x64c2,	// (0x00081c36) dialer_ne_pane_t3_copy1_ParamLimits

0x64c2,	// (0x00081c36) dialer_ne_pane_t3_copy1

0x64e6,	// (0x00081c5a) cell_dialer_keypad_pane_ParamLimits

0x64e6,	// (0x00081c5a) cell_dialer_keypad_pane

0x64fd,	// (0x00081c71) cell_dialer_command_1_pane_ParamLimits

0x64fd,	// (0x00081c71) cell_dialer_command_1_pane

0x6513,	// (0x00081c87) cell_dialer_command_2_pane_ParamLimits

0x6513,	// (0x00081c87) cell_dialer_command_2_pane

0xcf90,	// (0x00088704) bg_button_pane_cp02_ParamLimits

0xcf90,	// (0x00088704) bg_button_pane_cp02

0x6522,	// (0x00081c96) cell_dialer_keypad_pane_g1_ParamLimits

0x6522,	// (0x00081c96) cell_dialer_keypad_pane_g1

0xcf90,	// (0x00088704) bg_button_pane_cp03_ParamLimits

0xcf90,	// (0x00088704) bg_button_pane_cp03

0x6537,	// (0x00081cab) cell_dialer_command_1_pane_g1_ParamLimits

0x6537,	// (0x00081cab) cell_dialer_command_1_pane_g1

0xcf9c,	// (0x00088710) bg_button_pane_cp04

0x654b,	// (0x00081cbf) cell_dialer_command_2_pane_g1

0xa90a,	// (0x0008607e) bg_button_pane_cp06

0xcfa4,	// (0x00088718) dialer_ne_clear_pane_g1

0xb279,	// (0x000869ed) navi_pane_g2

0xb2b5,	// (0x00086a29) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008ab59) navi_pane_g

0xb344,	// (0x00086ab8) navi_pane_mv_g2

0xb36b,	// (0x00086adf) navi_pane_mv_g5

0x4581,	// (0x0007fcf5) navi_pane_mv_t1

0xa6ec,	// (0x00085e60) main_clock2_pane

0x658b,	// (0x00081cff) main_clock2_list_pane_ParamLimits

0x658b,	// (0x00081cff) main_clock2_list_pane

0x65b5,	// (0x00081d29) main_clock2_pane_t1_ParamLimits

0x65b5,	// (0x00081d29) main_clock2_pane_t1

0x65d9,	// (0x00081d4d) main_clock2_pane_t2_ParamLimits

0x65d9,	// (0x00081d4d) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008af3d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008af3d) main_clock2_pane_t

0x6634,	// (0x00081da8) popup_clock_analogue_window_cp03_ParamLimits

0x6634,	// (0x00081da8) popup_clock_analogue_window_cp03

0x6652,	// (0x00081dc6) popup_clock_digital_window_cp02_ParamLimits

0x6652,	// (0x00081dc6) popup_clock_digital_window_cp02

0x66c1,	// (0x00081e35) main_clock2_list_single_pane_ParamLimits

0x66c1,	// (0x00081e35) main_clock2_list_single_pane

0xa90a,	// (0x0008607e) list_highlight_pane_cp05

0xcfde,	// (0x00088752) main_clock2_list_single_pane_t1

0x30d4,	// (0x0007e848) popup_toolbar_window_cp04_ParamLimits

0x5c1d,	// (0x00081391) camera2_autofocus_pane_g2_ParamLimits

0x5c1d,	// (0x00081391) camera2_autofocus_pane_g2

0x5c29,	// (0x0008139d) camera2_autofocus_pane_g3_ParamLimits

0x5c29,	// (0x0008139d) camera2_autofocus_pane_g3

0x5c35,	// (0x000813a9) camera2_autofocus_pane_g4_ParamLimits

0x5c35,	// (0x000813a9) camera2_autofocus_pane_g4

0x5c41,	// (0x000813b5) camera2_autofocus_pane_g5_ParamLimits

0x5c41,	// (0x000813b5) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008ae81) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008ae81) camera2_autofocus_pane_g

0x5e1c,	// (0x00081590) camera2_autofocus_pane_cp_g2

0x5e24,	// (0x00081598) camera2_autofocus_pane_cp_g3

0x5e2c,	// (0x000815a0) camera2_autofocus_pane_cp_g4

0x5e34,	// (0x000815a8) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008aee7) camera2_autofocus_pane_cp_g

0x6461,	// (0x00081bd5) popup_dialer_spcha_window

0x9f90,	// (0x00085704) bg_popup_sub_pane_cp07

0xcfec,	// (0x00088760) list_spcha_pane

0xcff4,	// (0x00088768) list_single_spcha_pane_ParamLimits

0xcff4,	// (0x00088768) list_single_spcha_pane

0x9f90,	// (0x00085704) list_highlight_pane_cp06

0xd005,	// (0x00088779) list_single_spcha_pane_t1

0xc1eb,	// (0x0008795f) popup_call2_audio_out_window_g4_ParamLimits

0xc1eb,	// (0x0008795f) popup_call2_audio_out_window_g4

0x9f90,	// (0x00085704) main_imed2_pane

0x52b2,	// (0x00080a26) popup_imed_adjust2_window

0x52c5,	// (0x00080a39) popup_imed_trans_window_ParamLimits

0x52c5,	// (0x00080a39) popup_imed_trans_window

0xc9f4,	// (0x00088168) popup_blid_sat_info2_window_t1

0xca02,	// (0x00088176) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008ae16) popup_blid_sat_info2_window_t

0x676b,	// (0x00081edf) aid_size_cell_colour_35

0x6785,	// (0x00081ef9) aid_size_cell_colour_112

0x679c,	// (0x00081f10) aid_size_cell_effect

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp02

0xb076,	// (0x000867ea) heading_imed_pane

0x67b6,	// (0x00081f2a) listscroll_imed_pane

0xd013,	// (0x00088787) heading_imed_pane_g1

0xd01b,	// (0x0008878f) heading_imed_pane_t1

0xd029,	// (0x0008879d) grid_imed_colour_35_pane_ParamLimits

0xd029,	// (0x0008879d) grid_imed_colour_35_pane

0x67c2,	// (0x00081f36) grid_imed_effect_pane

0xd041,	// (0x000887b5) list_imed_aspect_pane

0x67d2,	// (0x00081f46) scroll_pane_cp027_ParamLimits

0x67d2,	// (0x00081f46) scroll_pane_cp027

0x67de,	// (0x00081f52) cell_imed_effect_pane_ParamLimits

0x67de,	// (0x00081f52) cell_imed_effect_pane

0xd049,	// (0x000887bd) cell_imed_colour_pane_ParamLimits

0xd049,	// (0x000887bd) cell_imed_colour_pane

0xd08b,	// (0x000887ff) cell_imed_colour_pane_g1_ParamLimits

0xd08b,	// (0x000887ff) cell_imed_colour_pane_g1

0xd09c,	// (0x00088810) hgihlgiht_grid_pane_cp016_ParamLimits

0xd09c,	// (0x00088810) hgihlgiht_grid_pane_cp016

0x67f6,	// (0x00081f6a) cell_imed_effect_pane_g1

0x67fe,	// (0x00081f72) grid_highlight_pane_cp017

0xd0ad,	// (0x00088821) list_imed_single_pane_ParamLimits

0xd0ad,	// (0x00088821) list_imed_single_pane

0x9f90,	// (0x00085704) list_highlight_pane_cp07

0xd0c3,	// (0x00088837) list_imed_aspect_pane_comp1_t1

0xc7ae,	// (0x00087f22) bg_tb_trans_pane_cp05

0xd0e5,	// (0x00088859) popup_imed_adjust2_window_g1

0xd10c,	// (0x00088880) popup_imed_adjust2_window_t1

0xd124,	// (0x00088898) slider_imed_adjust_pane

0xd138,	// (0x000888ac) slider_imed_adjust_pane_g1

0xd148,	// (0x000888bc) slider_imed_adjust_pane_g2

0xd158,	// (0x000888cc) slider_imed_adjust_pane_g3

0xd169,	// (0x000888dd) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0008af5a) slider_imed_adjust_pane_g

0x6807,	// (0x00081f7b) aid_size_cell_clipart2

0x6813,	// (0x00081f87) grid_imed_clipart_pane

0xd17a,	// (0x000888ee) scroll_pane_cp031

0x681d,	// (0x00081f91) cell_imed_clipart_pane_ParamLimits

0x681d,	// (0x00081f91) cell_imed_clipart_pane

0x6844,	// (0x00081fb8) cell_imed_clipart_pane_g1

0x9f90,	// (0x00085704) grid_highlight_pane_cp014

0x6597,	// (0x00081d0b) main_clock2_pane_g1_ParamLimits

0x6597,	// (0x00081d0b) main_clock2_pane_g1

0x666c,	// (0x00081de0) aid_call2_pane_cp10

0x667e,	// (0x00081df2) aid_call_pane_cp10

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g1

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g2

0x6690,	// (0x00081e04) popup_clock_analogue_window_cp10_g3

0x6690,	// (0x00081e04) popup_clock_analogue_window_cp10_g4

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0008af48) popup_clock_analogue_window_cp10_g

0x66a2,	// (0x00081e16) popup_clock_analogue_window_cp10_t1

0x66d3,	// (0x00081e47) clock_digital_number_pane_cp10_ParamLimits

0x66d3,	// (0x00081e47) clock_digital_number_pane_cp10

0x66eb,	// (0x00081e5f) clock_digital_number_pane_cp11_ParamLimits

0x66eb,	// (0x00081e5f) clock_digital_number_pane_cp11

0x6703,	// (0x00081e77) clock_digital_number_pane_cp12_ParamLimits

0x6703,	// (0x00081e77) clock_digital_number_pane_cp12

0x671b,	// (0x00081e8f) clock_digital_number_pane_cp13_ParamLimits

0x671b,	// (0x00081e8f) clock_digital_number_pane_cp13

0x6733,	// (0x00081ea7) clock_digital_separator_pane_cp10_ParamLimits

0x6733,	// (0x00081ea7) clock_digital_separator_pane_cp10

0x674b,	// (0x00081ebf) popup_clock_digital_window_cp02_t1_ParamLimits

0x674b,	// (0x00081ebf) popup_clock_digital_window_cp02_t1

0xa600,	// (0x00085d74) clock_digital_number_pane_cp10_g1

0xa600,	// (0x00085d74) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0008af63) clock_digital_number_pane_cp10_g

0xa600,	// (0x00085d74) clock_digital_separator_pane_cp10_g1

0xa600,	// (0x00085d74) clock_digital_separator_pane_g2_cp10

0xb373,	// (0x00086ae7) navi_pane_vded_g4

0xb37c,	// (0x00086af0) navi_pane_vded_g5

0xb385,	// (0x00086af9) navi_pane_vded_t1

0x9f90,	// (0x00085704) main_vded_pane

0x684d,	// (0x00081fc1) main_vded_pane_g1

0x6859,	// (0x00081fcd) main_vded_pane_g2

0x6863,	// (0x00081fd7) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0008af68) main_vded_pane_g

0x686d,	// (0x00081fe1) main_vded_pane_t1

0x687b,	// (0x00081fef) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0008af6f) main_vded_pane_t

0x6889,	// (0x00081ffd) vded_slider_pane

0x6893,	// (0x00082007) vded_video_pane

0xd182,	// (0x000888f6) vded_video_pane_g1

0x689d,	// (0x00082011) vded_video_pane_g2

0xcbb8,	// (0x0008832c) vded_video_pane_g3

0x0002,

0xf800,	// (0x0008af74) vded_video_pane_g

0xd18c,	// (0x00088900) vded_slider_pane_g1

0xd195,	// (0x00088909) vded_slider_pane_g2

0xd19e,	// (0x00088912) vded_slider_pane_g3

0xd1a7,	// (0x0008891b) vded_slider_pane_g4

0xd1b0,	// (0x00088924) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0008af7b) vded_slider_pane_g

0x6362,	// (0x00081ad6) mup3_rocker_pane_ParamLimits

0x6362,	// (0x00081ad6) mup3_rocker_pane

0x68a6,	// (0x0008201a) mup3_control_keys_pane_g1

0x68ae,	// (0x00082022) mup3_control_keys_pane_g2

0x68b6,	// (0x0008202a) mup3_control_keys_pane_g3

0x68be,	// (0x00082032) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0008af86) mup3_control_keys_pane_g

0x2145,	// (0x0007d8b9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2145,	// (0x0007d8b9) popup_toolbar2_fixed_window_cp01

0x637c,	// (0x00081af0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x637c,	// (0x00081af0) popup_toolbar2_fixed_window_cp02

0xbb2a,	// (0x0008729e) popup_call2_audio_second_window_t4_ParamLimits

0xbb2a,	// (0x0008729e) popup_call2_audio_second_window_t4

0xc058,	// (0x000877cc) popup_call2_audio_first_window_t6_ParamLimits

0xc058,	// (0x000877cc) popup_call2_audio_first_window_t6

0xc2ee,	// (0x00087a62) popup_call2_audio_out_window_t6_ParamLimits

0xc2ee,	// (0x00087a62) popup_call2_audio_out_window_t6

0x9f90,	// (0x00085704) main_vitu_pane

0x68ce,	// (0x00082042) aid_size_cell_itu_ParamLimits

0x68ce,	// (0x00082042) aid_size_cell_itu

0xe39e,	// (0x00089b12) bg_popup_window_pane_cp08_ParamLimits

0xe39e,	// (0x00089b12) bg_popup_window_pane_cp08

0x68dc,	// (0x00082050) field_vitu_entry_pane_ParamLimits

0x68dc,	// (0x00082050) field_vitu_entry_pane

0x68eb,	// (0x0008205f) grid_vitu_function_pane_ParamLimits

0x68eb,	// (0x0008205f) grid_vitu_function_pane

0x68fb,	// (0x0008206f) grid_vitu_itu_pane_ParamLimits

0x68fb,	// (0x0008206f) grid_vitu_itu_pane

0x690b,	// (0x0008207f) cell_vitu_itu_pane_ParamLimits

0x690b,	// (0x0008207f) cell_vitu_itu_pane

0x6920,	// (0x00082094) cell_vitu_function_pane_ParamLimits

0x6920,	// (0x00082094) cell_vitu_function_pane

0xaa03,	// (0x00086177) bg_popup_sub_pane_cp08_ParamLimits

0xaa03,	// (0x00086177) bg_popup_sub_pane_cp08

0x6934,	// (0x000820a8) field_vitu_entry_pane_t1_ParamLimits

0x6934,	// (0x000820a8) field_vitu_entry_pane_t1

0xd1d1,	// (0x00088945) field_vitu_entry_pane_t2_ParamLimits

0xd1d1,	// (0x00088945) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0008af94) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0008af94) field_vitu_entry_pane_t

0xd1ee,	// (0x00088962) bg_button_pane_cp05_ParamLimits

0xd1ee,	// (0x00088962) bg_button_pane_cp05

0x6951,	// (0x000820c5) cell_vitu_itu_pane_g1

0x6969,	// (0x000820dd) cell_vitu_itu_pane_t1_ParamLimits

0x6969,	// (0x000820dd) cell_vitu_itu_pane_t1

0x697b,	// (0x000820ef) cell_vitu_itu_pane_t2_ParamLimits

0x697b,	// (0x000820ef) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0008af99) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0008af99) cell_vitu_itu_pane_t

0xd1fc,	// (0x00088970) bg_button_pane_cp07

0x69be,	// (0x00082132) cell_vitu_function_pane_g1

0x23f8,	// (0x0007db6c) main_calc_pane_g1

0x1f02,	// (0x0007d676) aid_visual_content_pane

0x9f90,	// (0x00085704) main_vradio_pane

0x69c7,	// (0x0008213b) main_vradio_pane_g1_ParamLimits

0x69c7,	// (0x0008213b) main_vradio_pane_g1

0xd206,	// (0x0008897a) main_vradio_pane_g2_ParamLimits

0xd206,	// (0x0008897a) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0008afa0) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0008afa0) main_vradio_pane_g

0x69d7,	// (0x0008214b) main_vradio_pane_t1_ParamLimits

0x69d7,	// (0x0008214b) main_vradio_pane_t1

0x69e9,	// (0x0008215d) main_vradio_pane_t2_ParamLimits

0x69e9,	// (0x0008215d) main_vradio_pane_t2

0xd213,	// (0x00088987) main_vradio_pane_t3_ParamLimits

0xd213,	// (0x00088987) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0008afa5) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0008afa5) main_vradio_pane_t

0x69fb,	// (0x0008216f) vradio_rocker_control_pane_ParamLimits

0x69fb,	// (0x0008216f) vradio_rocker_control_pane

0x6a07,	// (0x0008217b) vradio_station_info_pane_ParamLimits

0x6a07,	// (0x0008217b) vradio_station_info_pane

0xd227,	// (0x0008899b) vradio_frequency_info_pane_ParamLimits

0xd227,	// (0x0008899b) vradio_frequency_info_pane

0xcbb8,	// (0x0008832c) vradio_station_info_pane_g1

0xd236,	// (0x000889aa) vradio_station_info_pane_t1_ParamLimits

0xd236,	// (0x000889aa) vradio_station_info_pane_t1

0xd258,	// (0x000889cc) vradio_station_info_pane_t2_ParamLimits

0xd258,	// (0x000889cc) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008afac) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008afac) vradio_station_info_pane_t

0xd26a,	// (0x000889de) vradio_tuning_pane

0xd272,	// (0x000889e6) vradio_rocker_control_pane_g1

0xd27a,	// (0x000889ee) vradio_rocker_control_pane_g2

0xd282,	// (0x000889f6) vradio_rocker_control_pane_g3

0xd28a,	// (0x000889fe) vradio_rocker_control_pane_g4

0xd292,	// (0x00088a06) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0008afb1) vradio_rocker_control_pane_g

0x6a16,	// (0x0008218a) vradio_frequency_info_pane_g1

0xd29a,	// (0x00088a0e) vradio_frequency_info_pane_t1_ParamLimits

0xd29a,	// (0x00088a0e) vradio_frequency_info_pane_t1

0x6a20,	// (0x00082194) vradio_tuning_pane_g1

0x6a29,	// (0x0008219d) vradio_tuning_pane_t1

0x1f4b,	// (0x0007d6bf) area_side_right_pane_ParamLimits

0x1f4b,	// (0x0007d6bf) area_side_right_pane

0xc769,	// (0x00087edd) status_small_pane_g1

0xc771,	// (0x00087ee5) status_small_pane_g2

0xc77a,	// (0x00087eee) status_small_pane_g3

0xc783,	// (0x00087ef7) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008ad6c) status_small_pane_g

0xc78c,	// (0x00087f00) status_small_pane_t1

0x9f90,	// (0x00085704) main_video3_pane

0xd2ae,	// (0x00088a22) cams_zoom_vslider_pane

0xd2b6,	// (0x00088a2a) image3_wide_pane_ParamLimits

0xd2b6,	// (0x00088a2a) image3_wide_pane

0xd2d0,	// (0x00088a44) image3_wide_small_pane

0xd2dc,	// (0x00088a50) main_video3_pane_g1_ParamLimits

0xd2dc,	// (0x00088a50) main_video3_pane_g1

0xd2f8,	// (0x00088a6c) main_video3_pane_g2_ParamLimits

0xd2f8,	// (0x00088a6c) main_video3_pane_g2

0x0001,

0xf848,	// (0x0008afbc) main_video3_pane_g_ParamLimits

0xf848,	// (0x0008afbc) main_video3_pane_g

0xd314,	// (0x00088a88) main_video3_pane_t1_ParamLimits

0xd314,	// (0x00088a88) main_video3_pane_t1

0xd33f,	// (0x00088ab3) main_video3_pane_t2_ParamLimits

0xd33f,	// (0x00088ab3) main_video3_pane_t2

0xd36a,	// (0x00088ade) main_video3_pane_t3_ParamLimits

0xd36a,	// (0x00088ade) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0008afc1) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0008afc1) main_video3_pane_t

0xd397,	// (0x00088b0b) cams_zoom_vslider_pane_g1

0xd3a0,	// (0x00088b14) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0008afc8) cams_zoom_vslider_pane_g

0xd3a8,	// (0x00088b1c) small_slider_vertical_pane

0xcbb8,	// (0x0008832c) small_slider_vertical_pane_g1

0xcbb8,	// (0x0008832c) small_slider_vertical_pane_g2

0xd3b0,	// (0x00088b24) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0008afcd) small_slider_vertical_pane_g

0x9f90,	// (0x00085704) main_hwr_training_pane

0xd3b9,	// (0x00088b2d) hwr_training_instruct_pane_ParamLimits

0xd3b9,	// (0x00088b2d) hwr_training_instruct_pane

0x6a38,	// (0x000821ac) hwr_training_navi_pane_ParamLimits

0x6a38,	// (0x000821ac) hwr_training_navi_pane

0x6a52,	// (0x000821c6) hwr_training_write_pane_ParamLimits

0x6a52,	// (0x000821c6) hwr_training_write_pane

0x9f90,	// (0x00085704) bg_frame_shadow_pane

0xd3f0,	// (0x00088b64) hwr_training_write_pane_g1

0xd3f8,	// (0x00088b6c) hwr_training_write_pane_g2

0xd400,	// (0x00088b74) hwr_training_write_pane_g3

0xd408,	// (0x00088b7c) hwr_training_write_pane_g4

0xd410,	// (0x00088b84) hwr_training_write_pane_g5

0xd418,	// (0x00088b8c) hwr_training_write_pane_g6

0xd420,	// (0x00088b94) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0008afd4) hwr_training_write_pane_g

0x6a8a,	// (0x000821fe) hwr_training_navi_pane_g1_ParamLimits

0x6a8a,	// (0x000821fe) hwr_training_navi_pane_g1

0x6a9c,	// (0x00082210) hwr_training_navi_pane_g2_ParamLimits

0x6a9c,	// (0x00082210) hwr_training_navi_pane_g2

0x6aae,	// (0x00082222) hwr_training_navi_pane_g3_ParamLimits

0x6aae,	// (0x00082222) hwr_training_navi_pane_g3

0x6abe,	// (0x00082232) hwr_training_navi_pane_g4_ParamLimits

0x6abe,	// (0x00082232) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0008afe3) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0008afe3) hwr_training_navi_pane_g

0x6ad8,	// (0x0008224c) hwr_training_navi_pane_t1

0x6ae6,	// (0x0008225a) list_single_hwr_training_instruct_pane_ParamLimits

0x6ae6,	// (0x0008225a) list_single_hwr_training_instruct_pane

0xd428,	// (0x00088b9c) list_single_hwr_training_instruct_pane_t1

0xcaf8,	// (0x0008826c) bg_frame_shadow_pane_g1

0xd437,	// (0x00088bab) bg_frame_shadow_pane_g2

0xd43f,	// (0x00088bb3) bg_frame_shadow_pane_g3

0xd447,	// (0x00088bbb) bg_frame_shadow_pane_g4

0xd44f,	// (0x00088bc3) bg_frame_shadow_pane_g5

0xd457,	// (0x00088bcb) bg_frame_shadow_pane_g6

0xd45f,	// (0x00088bd3) bg_frame_shadow_pane_g7

0xa807,	// (0x00085f7b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0008afee) bg_frame_shadow_pane_g

0x9f90,	// (0x00085704) main_video_tele_dialer_pane

0x6b15,	// (0x00082289) aid_size_cell_video_keypad_ParamLimits

0x6b15,	// (0x00082289) aid_size_cell_video_keypad

0x6b25,	// (0x00082299) grid_video_dialer_keypad_pane_ParamLimits

0x6b25,	// (0x00082299) grid_video_dialer_keypad_pane

0x6b59,	// (0x000822cd) video_down_pane_cp_ParamLimits

0x6b59,	// (0x000822cd) video_down_pane_cp

0x6b83,	// (0x000822f7) cell_video_dialer_keypad_pane_ParamLimits

0x6b83,	// (0x000822f7) cell_video_dialer_keypad_pane

0xd467,	// (0x00088bdb) bg_button_pane_cp08_ParamLimits

0xd467,	// (0x00088bdb) bg_button_pane_cp08

0x6b98,	// (0x0008230c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b98,	// (0x0008230c) cell_video_dialer_keypad_pane_g1

0x6356,	// (0x00081aca) mup3_rocker2_pane_ParamLimits

0x6356,	// (0x00081aca) mup3_rocker2_pane

0xcbb8,	// (0x0008832c) mup3_rocker2_pane_g1

0x5226,	// (0x0008099a) main_dialer2_pane

0x9f90,	// (0x00085704) main_mp4_pane

0x6bdb,	// (0x0008234f) main_mp4_pane_g1_ParamLimits

0x6bdb,	// (0x0008234f) main_mp4_pane_g1

0x6be9,	// (0x0008235d) main_mp4_pane_g2_ParamLimits

0x6be9,	// (0x0008235d) main_mp4_pane_g2

0x6bf7,	// (0x0008236b) main_mp4_pane_g3_ParamLimits

0x6bf7,	// (0x0008236b) main_mp4_pane_g3

0x6c3c,	// (0x000823b0) main_mp4_pane_g4_ParamLimits

0x6c3c,	// (0x000823b0) main_mp4_pane_g4

0x6c64,	// (0x000823d8) main_mp4_pane_g5_ParamLimits

0x6c64,	// (0x000823d8) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0008b00e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0008b00e) main_mp4_pane_g

0x6cb4,	// (0x00082428) main_mp4_pane_t1_ParamLimits

0x6cb4,	// (0x00082428) main_mp4_pane_t1

0x6d10,	// (0x00082484) main_mp4_pane_t2_ParamLimits

0x6d10,	// (0x00082484) main_mp4_pane_t2

0xd473,	// (0x00088be7) main_mp4_pane_t3_ParamLimits

0xd473,	// (0x00088be7) main_mp4_pane_t3

0x6d62,	// (0x000824d6) main_mp4_pane_t4_ParamLimits

0x6d62,	// (0x000824d6) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008b01b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008b01b) main_mp4_pane_t

0x6da6,	// (0x0008251a) mp4_progress_pane_ParamLimits

0x6da6,	// (0x0008251a) mp4_progress_pane

0x6df0,	// (0x00082564) mp4_rocker_pane_ParamLimits

0x6df0,	// (0x00082564) mp4_rocker_pane

0xd49b,	// (0x00088c0f) mp4_progress_pane_t1

0xd4b4,	// (0x00088c28) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0008b024) mp4_progress_pane_t

0xd4cd,	// (0x00088c41) mup_progress_pane_cp04

0xcbb8,	// (0x0008832c) mp4_rocker_pane_g1

0x6e10,	// (0x00082584) aid_cell_size_keypad2_ParamLimits

0x6e10,	// (0x00082584) aid_cell_size_keypad2

0x6e20,	// (0x00082594) dialer2_ne_pane_ParamLimits

0x6e20,	// (0x00082594) dialer2_ne_pane

0x6e2e,	// (0x000825a2) grid_dialer2_keypad_pane_ParamLimits

0x6e2e,	// (0x000825a2) grid_dialer2_keypad_pane

0xdb9e,	// (0x00089312) bg_popup_call_pane_cp07_ParamLimits

0xdb9e,	// (0x00089312) bg_popup_call_pane_cp07

0x6e3e,	// (0x000825b2) dialer2_ne_pane_t1_ParamLimits

0x6e3e,	// (0x000825b2) dialer2_ne_pane_t1

0x6e63,	// (0x000825d7) cell_dialer2_keypad_pane_ParamLimits

0x6e63,	// (0x000825d7) cell_dialer2_keypad_pane

0xd4eb,	// (0x00088c5f) bg_button_pane_pane_cp04_ParamLimits

0xd4eb,	// (0x00088c5f) bg_button_pane_pane_cp04

0x6e78,	// (0x000825ec) cell_dialer2_keypad_pane_g1_ParamLimits

0x6e78,	// (0x000825ec) cell_dialer2_keypad_pane_g1

0x2f96,	// (0x0007e70a) aid_placing_vt_set_content_ParamLimits

0x2f96,	// (0x0007e70a) aid_placing_vt_set_content

0x2fc2,	// (0x0007e736) aid_placing_vt_set_title_ParamLimits

0x2fc2,	// (0x0007e736) aid_placing_vt_set_title

0x9f90,	// (0x00085704) main_image3_pane

0x6f12,	// (0x00082686) area_side_right_pane_cp01_ParamLimits

0x6f12,	// (0x00082686) area_side_right_pane_cp01

0xa7b7,	// (0x00085f2b) main_image3_pane_g1_ParamLimits

0xa7b7,	// (0x00085f2b) main_image3_pane_g1

0x6f3f,	// (0x000826b3) main_image3_pane_g2_ParamLimits

0x6f3f,	// (0x000826b3) main_image3_pane_g2

0x6f58,	// (0x000826cc) main_image3_pane_g3_ParamLimits

0x6f58,	// (0x000826cc) main_image3_pane_g3

0x6f71,	// (0x000826e5) main_image3_pane_g4_ParamLimits

0x6f71,	// (0x000826e5) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0008b033) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0008b033) main_image3_pane_g

0x6f8a,	// (0x000826fe) main_image3_pane_t1_ParamLimits

0x6f8a,	// (0x000826fe) main_image3_pane_t1

0x6faf,	// (0x00082723) main_image3_pane_t2_ParamLimits

0x6faf,	// (0x00082723) main_image3_pane_t2

0x6fce,	// (0x00082742) main_image3_pane_t3_ParamLimits

0x6fce,	// (0x00082742) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008b03c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008b03c) main_image3_pane_t

0xe39e,	// (0x00089b12) grid_sctrl_middle_pane_cp01_ParamLimits

0xe39e,	// (0x00089b12) grid_sctrl_middle_pane_cp01

0x702f,	// (0x000827a3) cell_sctrl_middle_pane_cp01_ParamLimits

0x702f,	// (0x000827a3) cell_sctrl_middle_pane_cp01

0x7040,	// (0x000827b4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7040,	// (0x000827b4) cell_sctrl_middle_pane_cp01_g1

0x9f90,	// (0x00085704) main_call4_pane

0x704d,	// (0x000827c1) aid_size_button_call4_ParamLimits

0x704d,	// (0x000827c1) aid_size_button_call4

0x707d,	// (0x000827f1) call4_windows_pane_ParamLimits

0x707d,	// (0x000827f1) call4_windows_pane

0x7097,	// (0x0008280b) grid_call4_button_pane_ParamLimits

0x7097,	// (0x0008280b) grid_call4_button_pane

0xd4f7,	// (0x00088c6b) call4_windows_conf_pane

0xd50c,	// (0x00088c80) popup_call4_audio_first_window_ParamLimits

0xd50c,	// (0x00088c80) popup_call4_audio_first_window

0xd558,	// (0x00088ccc) popup_call4_audio_second_window_ParamLimits

0xd558,	// (0x00088ccc) popup_call4_audio_second_window

0xd56c,	// (0x00088ce0) popup_call4_audio_wait_window_ParamLimits

0xd56c,	// (0x00088ce0) popup_call4_audio_wait_window

0x70bb,	// (0x0008282f) cell_call4_button_pane_ParamLimits

0x70bb,	// (0x0008282f) cell_call4_button_pane

0x70e0,	// (0x00082854) bg_button_pane_cp09_ParamLimits

0x70e0,	// (0x00082854) bg_button_pane_cp09

0x70ec,	// (0x00082860) cell_call4_button_pane_g1_ParamLimits

0x70ec,	// (0x00082860) cell_call4_button_pane_g1

0x70f9,	// (0x0008286d) cell_call4_button_pane_t1_ParamLimits

0x70f9,	// (0x0008286d) cell_call4_button_pane_t1

0xd5b4,	// (0x00088d28) popup_call4_audio_conf_window_ParamLimits

0xd5b4,	// (0x00088d28) popup_call4_audio_conf_window

0x6389,	// (0x00081afd) mup3_progress_pane_t1_ParamLimits

0x63a8,	// (0x00081b1c) mup3_progress_pane_t2_ParamLimits

0xce9f,	// (0x00088613) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008af10) mup3_progress_pane_t_ParamLimits

0xcebc,	// (0x00088630) mup_progress_pane_cp03_ParamLimits

0x68c6,	// (0x0008203a) mup3_control_keys_pane_g4_copy1

0x6dd4,	// (0x00082548) mp4_rocker2_pane_ParamLimits

0x6dd4,	// (0x00082548) mp4_rocker2_pane

0xd5c8,	// (0x00088d3c) mp4_rocker2_pane_g1

0xd5d0,	// (0x00088d44) mp4_rocker2_pane_g2

0x710b,	// (0x0008287f) mp4_rocker2_pane_g3

0x7113,	// (0x00082887) mp4_rocker2_pane_g4

0x711b,	// (0x0008288f) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0008b045) mp4_rocker2_pane_g

0x9f90,	// (0x00085704) main_camera4_pane

0x9f90,	// (0x00085704) main_video4_pane

0x6b35,	// (0x000822a9) main_video_tele_dialer_pane_t1_ParamLimits

0x6b35,	// (0x000822a9) main_video_tele_dialer_pane_t1

0x6b47,	// (0x000822bb) main_video_tele_dialer_pane_t2_ParamLimits

0x6b47,	// (0x000822bb) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0008afff) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0008afff) main_video_tele_dialer_pane_t

0x713b,	// (0x000828af) cam4_autofocus_pane_ParamLimits

0x713b,	// (0x000828af) cam4_autofocus_pane

0x7155,	// (0x000828c9) cam4_image_uncrop_pane_ParamLimits

0x7155,	// (0x000828c9) cam4_image_uncrop_pane

0x716c,	// (0x000828e0) cam4_indicators_pane_ParamLimits

0x716c,	// (0x000828e0) cam4_indicators_pane

0x7188,	// (0x000828fc) main_camera4_pane_g1_ParamLimits

0x7188,	// (0x000828fc) main_camera4_pane_g1

0x7194,	// (0x00082908) main_camera4_pane_g2_ParamLimits

0x7194,	// (0x00082908) main_camera4_pane_g2

0x7194,	// (0x00082908) main_camera4_pane_g3_ParamLimits

0x7194,	// (0x00082908) main_camera4_pane_g3

0x71a0,	// (0x00082914) main_camera4_pane_g4_ParamLimits

0x71a0,	// (0x00082914) main_camera4_pane_g4

0x71ac,	// (0x00082920) main_camera4_pane_g5_ParamLimits

0x71ac,	// (0x00082920) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0008b050) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0008b050) main_camera4_pane_g

0x71c6,	// (0x0008293a) main_camera4_pane_t1_ParamLimits

0x71c6,	// (0x0008293a) main_camera4_pane_t1

0xce24,	// (0x00088598) bg_tb_trans_pane_cp06

0x7216,	// (0x0008298a) cam4_indicators_pane_g1

0x7227,	// (0x0008299b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008b06b) cam4_indicators_pane_g

0x7245,	// (0x000829b9) cam4_indicators_pane_t1

0x726f,	// (0x000829e3) main_video4_pane_g1_ParamLimits

0x726f,	// (0x000829e3) main_video4_pane_g1

0x727b,	// (0x000829ef) main_video4_pane_g2_ParamLimits

0x727b,	// (0x000829ef) main_video4_pane_g2

0x7287,	// (0x000829fb) main_video4_pane_g3_ParamLimits

0x7287,	// (0x000829fb) main_video4_pane_g3

0x7293,	// (0x00082a07) main_video4_pane_g4_ParamLimits

0x7293,	// (0x00082a07) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0008b072) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0008b072) main_video4_pane_g

0x72b3,	// (0x00082a27) vid4_indicators_pane_ParamLimits

0x72b3,	// (0x00082a27) vid4_indicators_pane

0x72d2,	// (0x00082a46) video4_image_uncrop_cif_pane_ParamLimits

0x72d2,	// (0x00082a46) video4_image_uncrop_cif_pane

0x72e1,	// (0x00082a55) video4_image_uncrop_nhd_pane_ParamLimits

0x72e1,	// (0x00082a55) video4_image_uncrop_nhd_pane

0x7155,	// (0x000828c9) video4_image_uncrop_vga_pane_ParamLimits

0x7155,	// (0x000828c9) video4_image_uncrop_vga_pane

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp07

0x72f6,	// (0x00082a6a) vid4_indicators_pane_g1

0x730a,	// (0x00082a7e) vid4_indicators_pane_g2

0x731e,	// (0x00082a92) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008b07d) vid4_indicators_pane_g

0x734b,	// (0x00082abf) vid4_indicators_pane_t1

0x7362,	// (0x00082ad6) cam4_autofocus_pane_g1

0x736a,	// (0x00082ade) cam4_autofocus_pane_g2

0x7372,	// (0x00082ae6) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008b088) cam4_autofocus_pane_g

0x737a,	// (0x00082aee) cam4_autofocus_pane_g3_copy1

0x6b67,	// (0x000822db) video_down_pane_cp_t1

0x6b75,	// (0x000822e9) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0008b004) video_down_pane_cp_t

0xe39e,	// (0x00089b12) popup_vitu2_window_ParamLimits

0xe39e,	// (0x00089b12) popup_vitu2_window

0x7382,	// (0x00082af6) aid_size_cell2_itu2_ParamLimits

0x7382,	// (0x00082af6) aid_size_cell2_itu2

0x73a4,	// (0x00082b18) aid_size_cell_itu2_ParamLimits

0x73a4,	// (0x00082b18) aid_size_cell_itu2

0xdb9e,	// (0x00089312) bg_popup_window_pane_cp09_ParamLimits

0xdb9e,	// (0x00089312) bg_popup_window_pane_cp09

0x73e8,	// (0x00082b5c) field_vitu2_entry_pane_ParamLimits

0x73e8,	// (0x00082b5c) field_vitu2_entry_pane

0x7406,	// (0x00082b7a) grid_vitu2_function_pane_ParamLimits

0x7406,	// (0x00082b7a) grid_vitu2_function_pane

0x7446,	// (0x00082bba) grid_vitu2_itu_pane_ParamLimits

0x7446,	// (0x00082bba) grid_vitu2_itu_pane

0x74be,	// (0x00082c32) cell_vitu2_itu_pane_ParamLimits

0x74be,	// (0x00082c32) cell_vitu2_itu_pane

0x74d7,	// (0x00082c4b) cell_vitu2_function_pane_ParamLimits

0x74d7,	// (0x00082c4b) cell_vitu2_function_pane

0xd5d8,	// (0x00088d4c) bg_popup_call_pane_cp08_ParamLimits

0xd5d8,	// (0x00088d4c) bg_popup_call_pane_cp08

0xd5ef,	// (0x00088d63) field_vitu2_entry_pane_g1

0xd5fb,	// (0x00088d6f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0008b08f) field_vitu2_entry_pane_g

0x0ff0,	// (0x0007c764) field_vitu2_entry_pane_t1_ParamLimits

0x0ff0,	// (0x0007c764) field_vitu2_entry_pane_t1

0x1021,	// (0x0007c795) field_vitu2_entry_pane_t2_ParamLimits

0x1021,	// (0x0007c795) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0008b096) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0008b096) field_vitu2_entry_pane_t

0x7518,	// (0x00082c8c) bg_button_pane_cp010_ParamLimits

0x7518,	// (0x00082c8c) bg_button_pane_cp010

0x7526,	// (0x00082c9a) cell_vitu2_itu_pane_g1

0x7546,	// (0x00082cba) cell_vitu2_itu_pane_t1_ParamLimits

0x7546,	// (0x00082cba) cell_vitu2_itu_pane_t1

0x103e,	// (0x0007c7b2) cell_vitu2_itu_pane_t2_ParamLimits

0x103e,	// (0x0007c7b2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0008b0a0) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0008b0a0) cell_vitu2_itu_pane_t

0xaa03,	// (0x00086177) bg_button_pane_cp011

0x7592,	// (0x00082d06) cell_vitu2_function_pane_g1

0x9f90,	// (0x00085704) main_myfav_hc_pane

0x7010,	// (0x00082784) popup_image3_note_pane_ParamLimits

0x7010,	// (0x00082784) popup_image3_note_pane

0x701e,	// (0x00082792) popup_image3_tool_bar_pane_ParamLimits

0x701e,	// (0x00082792) popup_image3_tool_bar_pane

0x10b4,	// (0x0007c828) cell_vitu2_itu_pane_t3_ParamLimits

0x10b4,	// (0x0007c828) cell_vitu2_itu_pane_t3

0x9f90,	// (0x00085704) bg_popup_trans_pane

0xd61d,	// (0x00088d91) grid_image3_tool_bar_pane

0xd627,	// (0x00088d9b) bg_popup_trans_pane_g1

0xab7a,	// (0x000862ee) bg_popup_trans_pane_g2

0xd62f,	// (0x00088da3) bg_popup_trans_pane_g3

0xd637,	// (0x00088dab) bg_popup_trans_pane_g4

0xd63f,	// (0x00088db3) bg_popup_trans_pane_g5

0xd647,	// (0x00088dbb) bg_popup_trans_pane_g6

0xd64f,	// (0x00088dc3) bg_popup_trans_pane_g7

0xd657,	// (0x00088dcb) bg_popup_trans_pane_g8

0xab5a,	// (0x000862ce) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0008b0a7) bg_popup_trans_pane_g

0xd65f,	// (0x00088dd3) cell_image3_tool_bar_pane_ParamLimits

0xd65f,	// (0x00088dd3) cell_image3_tool_bar_pane

0xcbb8,	// (0x0008832c) cell_image3_tool_bar_pane_g1

0x9f90,	// (0x00085704) bg_popup_trans_pane_cp1

0xd673,	// (0x00088de7) popup_image3_note_pane_t1

0xd681,	// (0x00088df5) popup_image3_note_pane_t2

0xd68f,	// (0x00088e03) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008b0ba) popup_image3_note_pane_t

0xd69d,	// (0x00088e11) popup_image3_note_pane_t3_copy1

0x75a6,	// (0x00082d1a) bg_myfav_hc_instruction_pane_ParamLimits

0x75a6,	// (0x00082d1a) bg_myfav_hc_instruction_pane

0x75be,	// (0x00082d32) cell_myfav_contact_pane_ParamLimits

0x75be,	// (0x00082d32) cell_myfav_contact_pane

0x75d8,	// (0x00082d4c) cell_myfav_contact_pane_cp1_ParamLimits

0x75d8,	// (0x00082d4c) cell_myfav_contact_pane_cp1

0x75f0,	// (0x00082d64) cell_myfav_contact_pane_cp2_ParamLimits

0x75f0,	// (0x00082d64) cell_myfav_contact_pane_cp2

0x7608,	// (0x00082d7c) cell_myfav_contact_pane_cp3_ParamLimits

0x7608,	// (0x00082d7c) cell_myfav_contact_pane_cp3

0x761f,	// (0x00082d93) cell_myfav_contact_pane_cp4_ParamLimits

0x761f,	// (0x00082d93) cell_myfav_contact_pane_cp4

0x7635,	// (0x00082da9) cell_myfav_contact_pane_cp5_ParamLimits

0x7635,	// (0x00082da9) cell_myfav_contact_pane_cp5

0x7649,	// (0x00082dbd) cell_myfav_contact_pane_cp6_ParamLimits

0x7649,	// (0x00082dbd) cell_myfav_contact_pane_cp6

0x765d,	// (0x00082dd1) cell_myfav_contact_pane_cp7_ParamLimits

0x765d,	// (0x00082dd1) cell_myfav_contact_pane_cp7

0xd6ab,	// (0x00088e1f) listscroll_gen_pane_cp05

0x7675,	// (0x00082de9) main_myfav_hc_pane_g1_ParamLimits

0x7675,	// (0x00082de9) main_myfav_hc_pane_g1

0x768d,	// (0x00082e01) main_myfav_hc_pane_g2_ParamLimits

0x768d,	// (0x00082e01) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0008b0c1) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0008b0c1) main_myfav_hc_pane_g

0x76bd,	// (0x00082e31) main_myfav_hc_pane_t1_ParamLimits

0x76bd,	// (0x00082e31) main_myfav_hc_pane_t1

0xd6b4,	// (0x00088e28) main_myfav_hc_pane_t2_ParamLimits

0xd6b4,	// (0x00088e28) main_myfav_hc_pane_t2

0xd6c6,	// (0x00088e3a) main_myfav_hc_pane_t3_ParamLimits

0xd6c6,	// (0x00088e3a) main_myfav_hc_pane_t3

0x76d4,	// (0x00082e48) main_myfav_hc_pane_t4_ParamLimits

0x76d4,	// (0x00082e48) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0008b0c8) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0008b0c8) main_myfav_hc_pane_t

0xcbb8,	// (0x0008832c) bg_myfav_hc_instruction_pane_g1

0xd6d8,	// (0x00088e4c) cell_myfav_contact_pane_g1_ParamLimits

0xd6d8,	// (0x00088e4c) cell_myfav_contact_pane_g1

0xd6d8,	// (0x00088e4c) cell_myfav_contact_pane_g2_ParamLimits

0xd6d8,	// (0x00088e4c) cell_myfav_contact_pane_g2

0xd6e4,	// (0x00088e58) cell_myfav_contact_pane_g3_ParamLimits

0xd6e4,	// (0x00088e58) cell_myfav_contact_pane_g3

0xce89,	// (0x000885fd) cell_myfav_contact_pane_g4_ParamLimits

0xce89,	// (0x000885fd) cell_myfav_contact_pane_g4

0xd6f1,	// (0x00088e65) cell_myfav_contact_pane_g5_ParamLimits

0xd6f1,	// (0x00088e65) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0008b0d3) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0008b0d3) cell_myfav_contact_pane_g

0x76a5,	// (0x00082e19) main_myfav_hc_pane_g3_ParamLimits

0x76a5,	// (0x00082e19) main_myfav_hc_pane_g3

0x2080,	// (0x0007d7f4) popup_adpt_find_window

0x76fe,	// (0x00082e72) afind_page_pane_ParamLimits

0x76fe,	// (0x00082e72) afind_page_pane

0x770b,	// (0x00082e7f) aid_size_cell_afind_ParamLimits

0x770b,	// (0x00082e7f) aid_size_cell_afind

0x7725,	// (0x00082e99) bg_popup_sub_pane_cp09_ParamLimits

0x7725,	// (0x00082e99) bg_popup_sub_pane_cp09

0x7732,	// (0x00082ea6) find_pane_cp01_ParamLimits

0x7732,	// (0x00082ea6) find_pane_cp01

0xd6fd,	// (0x00088e71) grid_afind_control_pane_ParamLimits

0xd6fd,	// (0x00088e71) grid_afind_control_pane

0x773f,	// (0x00082eb3) grid_afind_pane_ParamLimits

0x773f,	// (0x00082eb3) grid_afind_pane

0x7759,	// (0x00082ecd) cell_afind_pane_ParamLimits

0x7759,	// (0x00082ecd) cell_afind_pane

0xcbb8,	// (0x0008832c) afind_page_pane_g1

0x77a1,	// (0x00082f15) afind_page_pane_g2

0x77aa,	// (0x00082f1e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008b0de) afind_page_pane_g

0x77b3,	// (0x00082f27) afind_page_pane_t1

0xd711,	// (0x00088e85) cell_afind_grid_control_pane_ParamLimits

0xd711,	// (0x00088e85) cell_afind_grid_control_pane

0xd4eb,	// (0x00088c5f) bg_button_pane_cp69_ParamLimits

0xd4eb,	// (0x00088c5f) bg_button_pane_cp69

0x77d3,	// (0x00082f47) cell_afind_pane_g1_ParamLimits

0x77d3,	// (0x00082f47) cell_afind_pane_g1

0x77e0,	// (0x00082f54) cell_afind_pane_t1_ParamLimits

0x77e0,	// (0x00082f54) cell_afind_pane_t1

0xa95c,	// (0x000860d0) bg_button_pane_cp72

0xd720,	// (0x00088e94) cell_afind_grid_control_pane_g1

0x4da0,	// (0x00080514) aid_image_placing_area_ParamLimits

0x4da0,	// (0x00080514) aid_image_placing_area

0xd1b9,	// (0x0008892d) field_vitu_entry_pane_g1_ParamLimits

0xd1b9,	// (0x0008892d) field_vitu_entry_pane_g1

0xd1c5,	// (0x00088939) field_vitu_entry_pane_g2_ParamLimits

0xd1c5,	// (0x00088939) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0008af8f) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0008af8f) field_vitu_entry_pane_g

0x6951,	// (0x000820c5) cell_vitu_itu_pane_g1_ParamLimits

0x69a1,	// (0x00082115) cell_vitu_itu_pane_t3_ParamLimits

0x69a1,	// (0x00082115) cell_vitu_itu_pane_t3

0xd49b,	// (0x00088c0f) mp4_progress_pane_t1_ParamLimits

0xd4b4,	// (0x00088c28) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0008b024) mp4_progress_pane_t_ParamLimits

0xd4cd,	// (0x00088c41) mup_progress_pane_cp04_ParamLimits

0x76e8,	// (0x00082e5c) main_myfav_hc_pane_t5_ParamLimits

0x76e8,	// (0x00082e5c) main_myfav_hc_pane_t5

0x0cae,	// (0x0007c422) aid_zoom_text_primary

0x2080,	// (0x0007d7f4) popup_adpt_find_window_ParamLimits

0xaa03,	// (0x00086177) main_cam_set_pane

0x717a,	// (0x000828ee) cam4_zoom_pane_ParamLimits

0x717a,	// (0x000828ee) cam4_zoom_pane

0x77f2,	// (0x00082f66) main_cam_set_pane_g1_ParamLimits

0x77f2,	// (0x00082f66) main_cam_set_pane_g1

0x7800,	// (0x00082f74) main_cam_set_pane_g2_ParamLimits

0x7800,	// (0x00082f74) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0008b0e5) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0008b0e5) main_cam_set_pane_g

0x780c,	// (0x00082f80) main_cam_set_pane_t1_ParamLimits

0x780c,	// (0x00082f80) main_cam_set_pane_t1

0x7828,	// (0x00082f9c) main_cset_listscroll_pane_ParamLimits

0x7828,	// (0x00082f9c) main_cset_listscroll_pane

0x7853,	// (0x00082fc7) main_cset_slider_pane_ParamLimits

0x7853,	// (0x00082fc7) main_cset_slider_pane

0xd731,	// (0x00088ea5) main_cset_list_pane_ParamLimits

0xd731,	// (0x00088ea5) main_cset_list_pane

0xd741,	// (0x00088eb5) scroll_pane_cp028

0x7872,	// (0x00082fe6) aid_area_touch_slider

0x788e,	// (0x00083002) cset_slider_pane

0x78b8,	// (0x0008302c) main_cset_slider_pane_g1

0x78cd,	// (0x00083041) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008b0ea) main_cset_slider_pane_g

0xd77a,	// (0x00088eee) main_cset_slider_pane_t1

0x7993,	// (0x00083107) main_cset_slider_pane_t2

0x79ad,	// (0x00083121) main_cset_slider_pane_t3

0x79c7,	// (0x0008313b) main_cset_slider_pane_t4

0x79e5,	// (0x00083159) main_cset_slider_pane_t5

0x7a03,	// (0x00083177) main_cset_slider_pane_t6

0x7a1a,	// (0x0008318e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008b10f) main_cset_slider_pane_t

0x7b28,	// (0x0008329c) cset_list_set_pane_ParamLimits

0x7b28,	// (0x0008329c) cset_list_set_pane

0x7b44,	// (0x000832b8) aid_position_infowindow_above

0x7b4c,	// (0x000832c0) aid_position_infowindow_below

0x7b54,	// (0x000832c8) cset_list_set_pane_g1_ParamLimits

0x7b54,	// (0x000832c8) cset_list_set_pane_g1

0x1106,	// (0x0007c87a) cset_list_set_pane_g3_ParamLimits

0x1106,	// (0x0007c87a) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008b12e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008b12e) cset_list_set_pane_g

0x1115,	// (0x0007c889) cset_list_set_pane_t1_ParamLimits

0x1115,	// (0x0007c889) cset_list_set_pane_t1

0xaa03,	// (0x00086177) list_highlight_pane_cp021_ParamLimits

0xaa03,	// (0x00086177) list_highlight_pane_cp021

0xb4d9,	// (0x00086c4d) cset_slider_pane_g1

0xb4eb,	// (0x00086c5f) cset_slider_pane_g2

0xb4e2,	// (0x00086c56) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0008b133) cset_slider_pane_g

0x7b60,	// (0x000832d4) aid_area_touch_cam4_zoom

0x7b68,	// (0x000832dc) cam4_zoom_cont_pane

0x7b70,	// (0x000832e4) cam4_zoom_pane_g1

0x7b78,	// (0x000832ec) cam4_zoom_pane_g2

0x7b80,	// (0x000832f4) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008b13a) cam4_zoom_pane_g

0xdf9e,	// (0x00089712) cam4_zoom_cont_pane_g1

0xdfa7,	// (0x0008971b) cam4_zoom_cont_pane_g2

0xdfb0,	// (0x00089724) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0008b141) cam4_zoom_cont_pane_g

0x7067,	// (0x000827db) call4_image_pane_ParamLimits

0x7067,	// (0x000827db) call4_image_pane

0xd4f7,	// (0x00088c6b) call4_windows_conf_pane_ParamLimits

0xd536,	// (0x00088caa) popup_call4_audio_in_window_ParamLimits

0xd536,	// (0x00088caa) popup_call4_audio_in_window

0x9f90,	// (0x00085704) bg_popup_call2_act_pane_cp02

0xd5ac,	// (0x00088d20) call4_list_conf_pane

0xcbb8,	// (0x0008832c) call4_image_pane_g1

0xcbb8,	// (0x0008832c) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008ae50) call4_image_pane_g

0xd81a,	// (0x00088f8e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd81a,	// (0x00088f8e) list_single_graphic_popup_conf4_pane

0x9f90,	// (0x00085704) list_highlight_pane_cp022

0xd82d,	// (0x00088fa1) list_single_graphic_popup_conf4_pane_g1

0xb0c0,	// (0x00086834) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0008b148) list_single_graphic_popup_conf4_pane_g

0xd835,	// (0x00088fa9) list_single_graphic_popup_conf4_pane_t1

0x3126,	// (0x0007e89a) popup_vtel_slider_window_ParamLimits

0x3126,	// (0x0007e89a) popup_vtel_slider_window

0xd4d9,	// (0x00088c4d) dialer2_ne_pane_t2_ParamLimits

0xd4d9,	// (0x00088c4d) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008b029) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008b029) dialer2_ne_pane_t

0xaa03,	// (0x00086177) bg_popup_sub_pane_cp010_ParamLimits

0xaa03,	// (0x00086177) bg_popup_sub_pane_cp010

0x7b88,	// (0x000832fc) popup_vtel_slider_window_g1_ParamLimits

0x7b88,	// (0x000832fc) popup_vtel_slider_window_g1

0x7b94,	// (0x00083308) popup_vtel_slider_window_g2_ParamLimits

0x7b94,	// (0x00083308) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0008b14d) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0008b14d) popup_vtel_slider_window_g

0x7bdc,	// (0x00083350) vtel_slider_pane_ParamLimits

0x7bdc,	// (0x00083350) vtel_slider_pane

0x7beb,	// (0x0008335f) vtel_slider_pane_g1_ParamLimits

0x7beb,	// (0x0008335f) vtel_slider_pane_g1

0x7bf8,	// (0x0008336c) vtel_slider_pane_g2_ParamLimits

0x7bf8,	// (0x0008336c) vtel_slider_pane_g2

0x7c05,	// (0x00083379) vtel_slider_pane_g3_ParamLimits

0x7c05,	// (0x00083379) vtel_slider_pane_g3

0x7beb,	// (0x0008335f) vtel_slider_pane_g4_ParamLimits

0x7beb,	// (0x0008335f) vtel_slider_pane_g4

0x7c12,	// (0x00083386) vtel_slider_pane_g5_ParamLimits

0x7c12,	// (0x00083386) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0008b156) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0008b156) vtel_slider_pane_g

0xaa03,	// (0x00086177) main_gallery2_pane

0x73ca,	// (0x00082b3e) aid_size_row_itut2_dropdow_list_ParamLimits

0x73ca,	// (0x00082b3e) aid_size_row_itut2_dropdow_list

0x7426,	// (0x00082b9a) grid_vitu2_function_top_pane_ParamLimits

0x7426,	// (0x00082b9a) grid_vitu2_function_top_pane

0x747e,	// (0x00082bf2) popup_vitu2_dropdown_list_window_ParamLimits

0x747e,	// (0x00082bf2) popup_vitu2_dropdown_list_window

0x749c,	// (0x00082c10) popup_vitu2_match_list_window

0x7c1f,	// (0x00083393) cell_vitu2_function_top_pane_ParamLimits

0x7c1f,	// (0x00083393) cell_vitu2_function_top_pane

0x7c41,	// (0x000833b5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c41,	// (0x000833b5) cell_vitu2_function_top_pane_cp01

0x7c5d,	// (0x000833d1) cell_vitu2_function_top_wide_pane_ParamLimits

0x7c5d,	// (0x000833d1) cell_vitu2_function_top_wide_pane

0xaa03,	// (0x00086177) bg_button_pane_cp012

0x7c79,	// (0x000833ed) cell_vitu2_function_top_pane_g1

0x7c8d,	// (0x00083401) bg_button_pane_cp013_ParamLimits

0x7c8d,	// (0x00083401) bg_button_pane_cp013

0x7ca9,	// (0x0008341d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ca9,	// (0x0008341d) cell_vitu2_function_top_wide_pane_g1

0xe39e,	// (0x00089b12) bg_popup_sub_pane_cp20

0x7cc1,	// (0x00083435) list_vitu2_match_list_pane

0xd627,	// (0x00088d9b) bg_popup_sub_pane_cp20_g1

0xd62f,	// (0x00088da3) bg_popup_sub_pane_cp20_g2

0xab7a,	// (0x000862ee) bg_popup_sub_pane_cp20_g3

0xd637,	// (0x00088dab) bg_popup_sub_pane_cp20_g4

0xab5a,	// (0x000862ce) bg_popup_sub_pane_cp20_g5

0xd84b,	// (0x00088fbf) bg_popup_sub_pane_cp20_g6

0xd647,	// (0x00088dbb) bg_popup_sub_pane_cp20_g7

0xd64f,	// (0x00088dc3) bg_popup_sub_pane_cp20_g8

0xd657,	// (0x00088dcb) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0008b161) bg_popup_sub_pane_cp20_g

0x7cd9,	// (0x0008344d) list_vitu2_match_list_item_pane_ParamLimits

0x7cd9,	// (0x0008344d) list_vitu2_match_list_item_pane

0x7ceb,	// (0x0008345f) list_vitu2_match_list_item_pane_t1

0x9f90,	// (0x00085704) bg_popup_sub_pane_cp21

0xafb8,	// (0x0008672c) grid_vitu2_dropdown_list_pane

0x7d05,	// (0x00083479) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d05,	// (0x00083479) cell_vitu2_dropdown_list_char_pane

0x7d26,	// (0x0008349a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d26,	// (0x0008349a) cell_vitu2_dropdown_list_ctrl_pane

0xd853,	// (0x00088fc7) cell_vitu2_dropdown_list_char_pane_g1

0xd85c,	// (0x00088fd0) cell_vitu2_dropdown_list_char_pane_g2

0xd865,	// (0x00088fd9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0008b17e) cell_vitu2_dropdown_list_char_pane_g

0x7d52,	// (0x000834c6) cell_vitu2_dropdown_list_char_pane_t1

0x7d60,	// (0x000834d4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7d60,	// (0x000834d4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7d70,	// (0x000834e4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7d70,	// (0x000834e4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7d81,	// (0x000834f5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7d81,	// (0x000834f5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7d91,	// (0x00083505) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7d91,	// (0x00083505) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce24,	// (0x00088598) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce24,	// (0x00088598) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0008b185) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0008b185) cell_vitu2_dropdown_list_ctrl_pane_g

0x7dad,	// (0x00083521) aid_size_cell_gallery2_ParamLimits

0x7dad,	// (0x00083521) aid_size_cell_gallery2

0x7dc7,	// (0x0008353b) grid_gallery2_pane_ParamLimits

0x7dc7,	// (0x0008353b) grid_gallery2_pane

0x67d2,	// (0x00081f46) scroll_pane_cp029_ParamLimits

0x67d2,	// (0x00081f46) scroll_pane_cp029

0x7dde,	// (0x00083552) cell_gallery2_pane_ParamLimits

0x7dde,	// (0x00083552) cell_gallery2_pane

0xd86e,	// (0x00088fe2) cell_gallery2_pane_g2

0x7e33,	// (0x000835a7) cell_gallery2_pane_g3

0xd876,	// (0x00088fea) cell_gallery2_pane_g4

0xd87e,	// (0x00088ff2) cell_gallery2_pane_g5

0xa90a,	// (0x0008607e) grid_highlight_pane_cp10

0x749c,	// (0x00082c10) popup_vitu2_match_list_window_ParamLimits

0x74ae,	// (0x00082c22) popup_vitu2_query_window_ParamLimits

0x74ae,	// (0x00082c22) popup_vitu2_query_window

0x9f90,	// (0x00085704) bg_vitu2_candi_button_pane

0xd853,	// (0x00088fc7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd85c,	// (0x00088fd0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd865,	// (0x00088fd9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1170,	// (0x0007c8e4) bg_button_pane_cp015

0x7e3b,	// (0x000835af) bg_button_pane_cp016

0x7e4e,	// (0x000835c2) bg_button_pane_cp017

0xc7ae,	// (0x00087f22) bg_popup_sub_pane_cp22

0xd886,	// (0x00088ffa) popup_vitu2_query_window_g1

0x7e72,	// (0x000835e6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0008b190) popup_vitu2_query_window_g

0x11a3,	// (0x0007c917) popup_vitu2_query_window_t1_ParamLimits

0x11a3,	// (0x0007c917) popup_vitu2_query_window_t1

0x11d6,	// (0x0007c94a) popup_vitu2_query_window_t2_ParamLimits

0x11d6,	// (0x0007c94a) popup_vitu2_query_window_t2

0x11e8,	// (0x0007c95c) popup_vitu2_query_window_t3_ParamLimits

0x11e8,	// (0x0007c95c) popup_vitu2_query_window_t3

0x7e8f,	// (0x00083603) popup_vitu2_query_window_t4_ParamLimits

0x7e8f,	// (0x00083603) popup_vitu2_query_window_t4

0x7eb0,	// (0x00083624) popup_vitu2_query_window_t5_ParamLimits

0x7eb0,	// (0x00083624) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0008b197) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0008b197) popup_vitu2_query_window_t

0xd729,	// (0x00088e9d) main_cset_text_pane

0x7872,	// (0x00082fe6) aid_area_touch_slider_ParamLimits

0x788e,	// (0x00083002) cset_slider_pane_ParamLimits

0x78b8,	// (0x0008302c) main_cset_slider_pane_g1_ParamLimits

0x78cd,	// (0x00083041) main_cset_slider_pane_g2_ParamLimits

0xd74a,	// (0x00088ebe) main_cset_slider_pane_g3_ParamLimits

0xd74a,	// (0x00088ebe) main_cset_slider_pane_g3

0x78e2,	// (0x00083056) main_cset_slider_pane_g4_ParamLimits

0x78e2,	// (0x00083056) main_cset_slider_pane_g4

0x78f1,	// (0x00083065) main_cset_slider_pane_g5_ParamLimits

0x78f1,	// (0x00083065) main_cset_slider_pane_g5

0x78ff,	// (0x00083073) main_cset_slider_pane_g6_ParamLimits

0x78ff,	// (0x00083073) main_cset_slider_pane_g6

0xf976,	// (0x0008b0ea) main_cset_slider_pane_g_ParamLimits

0xd77a,	// (0x00088eee) main_cset_slider_pane_t1_ParamLimits

0x7993,	// (0x00083107) main_cset_slider_pane_t2_ParamLimits

0x79ad,	// (0x00083121) main_cset_slider_pane_t3_ParamLimits

0x79c7,	// (0x0008313b) main_cset_slider_pane_t4_ParamLimits

0x79e5,	// (0x00083159) main_cset_slider_pane_t5_ParamLimits

0x7a03,	// (0x00083177) main_cset_slider_pane_t6_ParamLimits

0x7a1a,	// (0x0008318e) main_cset_slider_pane_t7_ParamLimits

0x7a48,	// (0x000831bc) main_cset_slider_pane_t8_ParamLimits

0x7a48,	// (0x000831bc) main_cset_slider_pane_t8

0x7a70,	// (0x000831e4) main_cset_slider_pane_t9_ParamLimits

0x7a70,	// (0x000831e4) main_cset_slider_pane_t9

0x7a98,	// (0x0008320c) main_cset_slider_pane_t10_ParamLimits

0x7a98,	// (0x0008320c) main_cset_slider_pane_t10

0x7ac0,	// (0x00083234) main_cset_slider_pane_t11_ParamLimits

0x7ac0,	// (0x00083234) main_cset_slider_pane_t11

0x7aea,	// (0x0008325e) main_cset_slider_pane_t12_ParamLimits

0x7aea,	// (0x0008325e) main_cset_slider_pane_t12

0x7b09,	// (0x0008327d) main_cset_slider_pane_t13_ParamLimits

0x7b09,	// (0x0008327d) main_cset_slider_pane_t13

0xf99b,	// (0x0008b10f) main_cset_slider_pane_t_ParamLimits

0x9f90,	// (0x00085704) bg_popup_sub_pane_cp011

0xd892,	// (0x00089006) main_cset_text_pane_g1

0xd89a,	// (0x0008900e) main_cset_text_pane_t1

0xd8a8,	// (0x0008901c) main_cset_text_pane_t2

0xd8b6,	// (0x0008902a) main_cset_text_pane_t3

0xd8c4,	// (0x00089038) main_cset_text_pane_t4

0xd8d2,	// (0x00089046) main_cset_text_pane_t5

0xd8e0,	// (0x00089054) main_cset_text_pane_t6

0xd8ee,	// (0x00089062) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0008b1a6) main_cset_text_pane_t

0x9f90,	// (0x00085704) main_cam4_burst_pane

0x9f90,	// (0x00085704) main_cam5_pane

0x77c1,	// (0x00082f35) bg_button_pane_cp019

0x77ca,	// (0x00082f3e) bg_button_pane_cp020

0xd756,	// (0x00088eca) main_cset_slider_pane_g7_ParamLimits

0xd756,	// (0x00088eca) main_cset_slider_pane_g7

0xd762,	// (0x00088ed6) main_cset_slider_pane_g8_ParamLimits

0xd762,	// (0x00088ed6) main_cset_slider_pane_g8

0x7913,	// (0x00083087) main_cset_slider_pane_g9_ParamLimits

0x7913,	// (0x00083087) main_cset_slider_pane_g9

0x791f,	// (0x00083093) main_cset_slider_pane_g10_ParamLimits

0x791f,	// (0x00083093) main_cset_slider_pane_g10

0x792b,	// (0x0008309f) main_cset_slider_pane_g11_ParamLimits

0x792b,	// (0x0008309f) main_cset_slider_pane_g11

0x7937,	// (0x000830ab) main_cset_slider_pane_g12_ParamLimits

0x7937,	// (0x000830ab) main_cset_slider_pane_g12

0x7943,	// (0x000830b7) main_cset_slider_pane_g13_ParamLimits

0x7943,	// (0x000830b7) main_cset_slider_pane_g13

0x7951,	// (0x000830c5) main_cset_slider_pane_g14_ParamLimits

0x7951,	// (0x000830c5) main_cset_slider_pane_g14

0x795f,	// (0x000830d3) main_cset_slider_pane_g15_ParamLimits

0x795f,	// (0x000830d3) main_cset_slider_pane_g15

0xd7a8,	// (0x00088f1c) main_cset_slider_pane_t14_ParamLimits

0xd7a8,	// (0x00088f1c) main_cset_slider_pane_t14

0xd7e1,	// (0x00088f55) main_cset_slider_pane_t15_ParamLimits

0xd7e1,	// (0x00088f55) main_cset_slider_pane_t15

0x7f27,	// (0x0008369b) aid_cam4_burst_size_cell_ParamLimits

0x7f27,	// (0x0008369b) aid_cam4_burst_size_cell

0x7f43,	// (0x000836b7) grid_cam4_burst_pane_ParamLimits

0x7f43,	// (0x000836b7) grid_cam4_burst_pane

0x7f73,	// (0x000836e7) linegrid_cam4_burst_pane_ParamLimits

0x7f73,	// (0x000836e7) linegrid_cam4_burst_pane

0x7f95,	// (0x00083709) scroll_pane_cp30_ParamLimits

0x7f95,	// (0x00083709) scroll_pane_cp30

0x7fa1,	// (0x00083715) cell_cam4_burst_pane_ParamLimits

0x7fa1,	// (0x00083715) cell_cam4_burst_pane

0xd8fc,	// (0x00089070) linegrid_cam4_burst_pane_g1_ParamLimits

0xd8fc,	// (0x00089070) linegrid_cam4_burst_pane_g1

0x7fdd,	// (0x00083751) linegrid_cam4_burst_pane_g2_ParamLimits

0x7fdd,	// (0x00083751) linegrid_cam4_burst_pane_g2

0xd909,	// (0x0008907d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd909,	// (0x0008907d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0008b1b5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0008b1b5) linegrid_cam4_burst_pane_g

0x7fee,	// (0x00083762) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7fee,	// (0x00083762) linegrid_cam4_burst_pane_g3_copy1

0xd916,	// (0x0008908a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd916,	// (0x0008908a) linegrid_cam4_burst_pane_g4

0x8008,	// (0x0008377c) linegrid_cam4_burst_pane_g5_ParamLimits

0x8008,	// (0x0008377c) linegrid_cam4_burst_pane_g5

0x8019,	// (0x0008378d) linegrid_cam4_burst_pane_g6_ParamLimits

0x8019,	// (0x0008378d) linegrid_cam4_burst_pane_g6

0xd923,	// (0x00089097) linegrid_cam4_burst_pane_g7_ParamLimits

0xd923,	// (0x00089097) linegrid_cam4_burst_pane_g7

0x802a,	// (0x0008379e) cell_cam4_burst_pane_g1

0xd93c,	// (0x000890b0) main_cam5_pane_t1_ParamLimits

0xd93c,	// (0x000890b0) main_cam5_pane_t1

0xd94e,	// (0x000890c2) main_cam5_pane_t2_ParamLimits

0xd94e,	// (0x000890c2) main_cam5_pane_t2

0xd960,	// (0x000890d4) main_cam5_pane_t3_ParamLimits

0xd960,	// (0x000890d4) main_cam5_pane_t3

0xd9a2,	// (0x00089116) main_cam5_pane_t4_ParamLimits

0xd9a2,	// (0x00089116) main_cam5_pane_t4

0xd9ba,	// (0x0008912e) main_cam5_pane_t5_ParamLimits

0xd9ba,	// (0x0008912e) main_cam5_pane_t5

0xd9ce,	// (0x00089142) main_cam5_pane_t6_ParamLimits

0xd9ce,	// (0x00089142) main_cam5_pane_t6

0xd9e2,	// (0x00089156) main_cam5_pane_t7_ParamLimits

0xd9e2,	// (0x00089156) main_cam5_pane_t7

0xd9f4,	// (0x00089168) main_cam5_pane_t8_ParamLimits

0xd9f4,	// (0x00089168) main_cam5_pane_t8

0xda10,	// (0x00089184) main_cam5_pane_t9_ParamLimits

0xda10,	// (0x00089184) main_cam5_pane_t9

0xda22,	// (0x00089196) main_cam5_pane_t10_ParamLimits

0xda22,	// (0x00089196) main_cam5_pane_t10

0xda34,	// (0x000891a8) main_cam5_pane_t11_ParamLimits

0xda34,	// (0x000891a8) main_cam5_pane_t11

0xda46,	// (0x000891ba) main_cam5_pane_t12_ParamLimits

0xda46,	// (0x000891ba) main_cam5_pane_t12

0xda5b,	// (0x000891cf) main_cam5_pane_t13_ParamLimits

0xda5b,	// (0x000891cf) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0008b1c1) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0008b1c1) main_cam5_pane_t

0x2136,	// (0x0007d8aa) popup_scut_keymap_window_ParamLimits

0x2136,	// (0x0007d8aa) popup_scut_keymap_window

0x803f,	// (0x000837b3) aid_size_cell_brow_shortcut

0xa90a,	// (0x0008607e) bg_popup_window_pane_cp010

0x804b,	// (0x000837bf) grid_scut_pane

0x8057,	// (0x000837cb) cell_scut_pane_ParamLimits

0x8057,	// (0x000837cb) cell_scut_pane

0x806e,	// (0x000837e2) cell_scut_pane_g1

0xda78,	// (0x000891ec) cell_scut_pane_t1

0xda87,	// (0x000891fb) cell_scut_pane_t2

0x8077,	// (0x000837eb) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0008b1dc) cell_scut_pane_t

0x5fb2,	// (0x00081726) main_mup3_pane_g8_ParamLimits

0x5fb2,	// (0x00081726) main_mup3_pane_g8

0x73d8,	// (0x00082b4c) area_vitu2_query_pane_ParamLimits

0x73d8,	// (0x00082b4c) area_vitu2_query_pane

0x1182,	// (0x0007c8f6) input_focus_pane_cp08

0xda96,	// (0x0008920a) area_vitu2_query_pane_g1

0x1210,	// (0x0007c984) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0008b1e3) area_vitu2_query_pane_g

0x8085,	// (0x000837f9) area_vitu2_query_pane_t1_ParamLimits

0x8085,	// (0x000837f9) area_vitu2_query_pane_t1

0x8099,	// (0x0008380d) area_vitu2_query_pane_t2_ParamLimits

0x8099,	// (0x0008380d) area_vitu2_query_pane_t2

0x1221,	// (0x0007c995) area_vitu2_query_pane_t3_ParamLimits

0x1221,	// (0x0007c995) area_vitu2_query_pane_t3

0x1249,	// (0x0007c9bd) area_vitu2_query_pane_t4_ParamLimits

0x1249,	// (0x0007c9bd) area_vitu2_query_pane_t4

0x1271,	// (0x0007c9e5) area_vitu2_query_pane_t5_ParamLimits

0x1271,	// (0x0007c9e5) area_vitu2_query_pane_t5

0x1299,	// (0x0007ca0d) area_vitu2_query_pane_t6_ParamLimits

0x1299,	// (0x0007ca0d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0008b1e8) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0008b1e8) area_vitu2_query_pane_t

0x80ad,	// (0x00083821) bg_button_pane_cp018

0x80bb,	// (0x0008382f) bg_button_pane_cp021

0x12e5,	// (0x0007ca59) bg_button_pane_cp022

0x12f6,	// (0x0007ca6a) input_focus_pane_cp09

0xb1e4,	// (0x00086958) aid_size_touch_mv_arrow_left

0xb20f,	// (0x00086983) aid_size_touch_mv_arrow_right

0x7977,	// (0x000830eb) main_cset_slider_pane_g16_ParamLimits

0x7977,	// (0x000830eb) main_cset_slider_pane_g16

0x7985,	// (0x000830f9) main_cset_slider_pane_g17_ParamLimits

0x7985,	// (0x000830f9) main_cset_slider_pane_g17

0x802a,	// (0x0008379e) cell_cam4_burst_pane_g1_ParamLimits

0x9f90,	// (0x00085704) compa_mode_pane

0x7ba0,	// (0x00083314) popup_vtel_slider_window_g3_ParamLimits

0x7ba0,	// (0x00083314) popup_vtel_slider_window_g3

0x7bb4,	// (0x00083328) popup_vtel_slider_window_g4_ParamLimits

0x7bb4,	// (0x00083328) popup_vtel_slider_window_g4

0x7bc8,	// (0x0008333c) popup_vtel_slider_window_t1_ParamLimits

0x7bc8,	// (0x0008333c) popup_vtel_slider_window_t1

0x9f90,	// (0x00085704) main_cl_pane

0x52b2,	// (0x00080a26) popup_imed_adjust2_window_ParamLimits

0xc7ae,	// (0x00087f22) bg_tb_trans_pane_cp05_ParamLimits

0xd0e5,	// (0x00088859) popup_imed_adjust2_window_g1_ParamLimits

0xd0f4,	// (0x00088868) popup_imed_adjust2_window_g2_ParamLimits

0xd0f4,	// (0x00088868) popup_imed_adjust2_window_g2

0xd100,	// (0x00088874) popup_imed_adjust2_window_g3_ParamLimits

0xd100,	// (0x00088874) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0008af53) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0008af53) popup_imed_adjust2_window_g

0xd10c,	// (0x00088880) popup_imed_adjust2_window_t1_ParamLimits

0xd124,	// (0x00088898) slider_imed_adjust_pane_ParamLimits

0xd138,	// (0x000888ac) slider_imed_adjust_pane_g1_ParamLimits

0xd148,	// (0x000888bc) slider_imed_adjust_pane_g2_ParamLimits

0xd158,	// (0x000888cc) slider_imed_adjust_pane_g3_ParamLimits

0xd169,	// (0x000888dd) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0008af5a) slider_imed_adjust_pane_g_ParamLimits

0x7123,	// (0x00082897) aid_touch_area_cam4_ParamLimits

0x7123,	// (0x00082897) aid_touch_area_cam4

0x7133,	// (0x000828a7) battery_pane_cp01

0x71ba,	// (0x0008292e) main_camera4_pane_g6_ParamLimits

0x71ba,	// (0x0008292e) main_camera4_pane_g6

0x71d8,	// (0x0008294c) main_camera4_pane_t2_ParamLimits

0x71d8,	// (0x0008294c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008b05d) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008b05d) main_camera4_pane_t

0x725f,	// (0x000829d3) aid_touch_area_vid4_ParamLimits

0x725f,	// (0x000829d3) aid_touch_area_vid4

0x729f,	// (0x00082a13) main_video4_pane_g5_ParamLimits

0x729f,	// (0x00082a13) main_video4_pane_g5

0x72c3,	// (0x00082a37) vid4_progress_pane_ParamLimits

0x72c3,	// (0x00082a37) vid4_progress_pane

0xd76e,	// (0x00088ee2) main_cset_slider_pane_g18_ParamLimits

0xd76e,	// (0x00088ee2) main_cset_slider_pane_g18

0xd930,	// (0x000890a4) cell_cam4_burst_pane_g2_ParamLimits

0xd930,	// (0x000890a4) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0008b1bc) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0008b1bc) cell_cam4_burst_pane_g

0x80c7,	// (0x0008383b) bg_cl_pane_ParamLimits

0x80c7,	// (0x0008383b) bg_cl_pane

0x80d3,	// (0x00083847) cl_header_pane_ParamLimits

0x80d3,	// (0x00083847) cl_header_pane

0x80df,	// (0x00083853) cl_listscroll_pane_ParamLimits

0x80df,	// (0x00083853) cl_listscroll_pane

0xdaa2,	// (0x00089216) bg_cl_pane_g1

0xdaaa,	// (0x0008921e) bg_cl_pane_g2

0xdab2,	// (0x00089226) bg_cl_pane_g3

0xdaba,	// (0x0008922e) bg_cl_pane_g4

0xdac2,	// (0x00089236) bg_cl_pane_g5

0xdaca,	// (0x0008923e) bg_cl_pane_g6

0xdad2,	// (0x00089246) bg_cl_pane_g7

0xdada,	// (0x0008924e) bg_cl_pane_g8

0xdae2,	// (0x00089256) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0008b1f7) bg_cl_pane_g

0x80eb,	// (0x0008385f) aid_height_cl_leading_ParamLimits

0x80eb,	// (0x0008385f) aid_height_cl_leading

0x80f7,	// (0x0008386b) aid_height_cl_text_ParamLimits

0x80f7,	// (0x0008386b) aid_height_cl_text

0xe39e,	// (0x00089b12) bg_cl_header_pane_ParamLimits

0xe39e,	// (0x00089b12) bg_cl_header_pane

0x810f,	// (0x00083883) cl_header_pane_g1_ParamLimits

0x810f,	// (0x00083883) cl_header_pane_g1

0x811c,	// (0x00083890) cl_header_pane_t1_ParamLimits

0x811c,	// (0x00083890) cl_header_pane_t1

0xdaea,	// (0x0008925e) cl_list_pane

0xd741,	// (0x00088eb5) hc_scroll_pane_cp01

0xab5a,	// (0x000862ce) bg_cl_header_pane_g1

0xd627,	// (0x00088d9b) bg_cl_header_pane_g2

0xab7a,	// (0x000862ee) bg_cl_header_pane_g3

0xd637,	// (0x00088dab) bg_cl_header_pane_g4

0xd62f,	// (0x00088da3) bg_cl_header_pane_g5

0xd84b,	// (0x00088fbf) bg_cl_header_pane_g6

0xd64f,	// (0x00088dc3) bg_cl_header_pane_g7

0xd657,	// (0x00088dcb) bg_cl_header_pane_g8

0xd647,	// (0x00088dbb) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0008b20a) bg_cl_header_pane_g

0x812e,	// (0x000838a2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x812e,	// (0x000838a2) hc_cl_list_double_graphic_heading_pane

0x8142,	// (0x000838b6) hc_cl_list_single_graphic_pane_ParamLimits

0x8142,	// (0x000838b6) hc_cl_list_single_graphic_pane

0x815c,	// (0x000838d0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x815c,	// (0x000838d0) hc_cl_list_single_graphic_pane_g1

0x8168,	// (0x000838dc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8168,	// (0x000838dc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0008b21d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0008b21d) hc_cl_list_single_graphic_pane_g

0x817c,	// (0x000838f0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x817c,	// (0x000838f0) hc_cl_list_single_graphic_pane_t1

0x815c,	// (0x000838d0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x815c,	// (0x000838d0) hc_cl_list_double_graphic_heading_pane_g1

0x8191,	// (0x00083905) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8191,	// (0x00083905) hc_cl_list_double_graphic_heading_pane_g2

0x81a5,	// (0x00083919) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x81a5,	// (0x00083919) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0008b222) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0008b222) hc_cl_list_double_graphic_heading_pane_g

0x81b9,	// (0x0008392d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x81b9,	// (0x0008392d) hc_cl_list_double_graphic_heading_pane_t1

0x81ce,	// (0x00083942) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x81ce,	// (0x00083942) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0008b229) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0008b229) hc_cl_list_double_graphic_heading_pane_t

0x81eb,	// (0x0008395f) vid4_progress_pane_g1

0x81fb,	// (0x0008396f) vid4_progress_pane_g2

0x820b,	// (0x0008397f) vid4_progress_pane_g3

0x821d,	// (0x00083991) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0008b22e) vid4_progress_pane_g

0x823b,	// (0x000839af) vid4_progress_pane_t1

0x8251,	// (0x000839c5) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0008b239) vid4_progress_pane_t

0x827c,	// (0x000839f0) wait_bar_pane_cp07

0xc9a9,	// (0x0008811d) blid_firmament_pane_ParamLimits

0xc9ec,	// (0x00088160) popup_blid_sat_info2_window_g1

0xca10,	// (0x00088184) popup_blid_sat_info2_window_t3

0xca1e,	// (0x00088192) popup_blid_sat_info2_window_t4

0xca2c,	// (0x000881a0) popup_blid_sat_info2_window_t5

0xca3a,	// (0x000881ae) popup_blid_sat_info2_window_t6

0xca4a,	// (0x000881be) popup_blid_sat_info2_window_t7

0xca58,	// (0x000881cc) popup_blid_sat_info2_window_t8

0xca66,	// (0x000881da) popup_blid_sat_info2_window_t9

0xca74,	// (0x000881e8) popup_blid_sat_info2_window_t10

0xcb38,	// (0x000882ac) aid_firma_cardinal_ParamLimits

0xcb4c,	// (0x000882c0) blid_firmament_pane_t1_ParamLimits

0xcb63,	// (0x000882d7) blid_firmament_pane_t2_ParamLimits

0xcb7a,	// (0x000882ee) blid_firmament_pane_t3_ParamLimits

0xcb91,	// (0x00088305) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008ae47) blid_firmament_pane_t_ParamLimits

0xcba8,	// (0x0008831c) blid_sat_info_pane_ParamLimits

0xaa03,	// (0x00086177) main_cam_set_pane_ParamLimits

0x676b,	// (0x00081edf) aid_size_cell_colour_35_ParamLimits

0x6785,	// (0x00081ef9) aid_size_cell_colour_112_ParamLimits

0x679c,	// (0x00081f10) aid_size_cell_effect_ParamLimits

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp02_ParamLimits

0xb076,	// (0x000867ea) heading_imed_pane_ParamLimits

0x67b6,	// (0x00081f2a) listscroll_imed_pane_ParamLimits

0xbdd4,	// (0x00087548) popup_call2_audio_first_window_g5_ParamLimits

0xbdd4,	// (0x00087548) popup_call2_audio_first_window_g5

0x6ee0,	// (0x00082654) aid_size_touch_image3_arrow_left_ParamLimits

0x6ee0,	// (0x00082654) aid_size_touch_image3_arrow_left

0x6ef6,	// (0x0008266a) aid_size_touch_image3_arrow_right_ParamLimits

0x6ef6,	// (0x0008266a) aid_size_touch_image3_arrow_right

0x8266,	// (0x000839da) vid4_progress_pane_t3

0x6a6a,	// (0x000821de) main_hwr_training_symbol_option_pane_ParamLimits

0x6a6a,	// (0x000821de) main_hwr_training_symbol_option_pane

0xd3db,	// (0x00088b4f) popup_hwr_training_preview_window_ParamLimits

0xd3db,	// (0x00088b4f) popup_hwr_training_preview_window

0x6acb,	// (0x0008223f) hwr_training_navi_pane_g5_ParamLimits

0x6acb,	// (0x0008223f) hwr_training_navi_pane_g5

0xd615,	// (0x00088d89) popup_char_count_window

0xe39e,	// (0x00089b12) bg_popup_sub_pane_cp20_ParamLimits

0x7cc1,	// (0x00083435) list_vitu2_match_list_pane_ParamLimits

0x7ccd,	// (0x00083441) vitu2_page_scroll_pane_ParamLimits

0x7ccd,	// (0x00083441) vitu2_page_scroll_pane

0xdaf3,	// (0x00089267) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaf3,	// (0x00089267) list_single_hwr_training_symbol_option_pane

0xdb06,	// (0x0008927a) list_single_hwr_training_symbol_option_pane_g1

0xdb0e,	// (0x00089282) list_single_hwr_training_symbol_option_pane_t1

0xdb1c,	// (0x00089290) bg_button_pane_cp023

0xdb25,	// (0x00089299) bg_button_pane_cp024

0x82c2,	// (0x00083a36) vitu2_page_scroll_pane_g1

0x82ca,	// (0x00083a3e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0008b240) vitu2_page_scroll_pane_g

0x82d2,	// (0x00083a46) vitu2_page_scroll_pane_t1

0xc909,	// (0x0008807d) popup_char_count_window_g1

0xdb58,	// (0x000892cc) popup_char_count_window_g2

0xdb61,	// (0x000892d5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0008b245) popup_char_count_window_g

0xdb6a,	// (0x000892de) popup_char_count_window_t1

0x9f90,	// (0x00085704) main_vded2_pane

0xd0d1,	// (0x00088845) aid_size_cell_imed_line

0xd0db,	// (0x0008884f) grid_imed_line_width_pane

0x732f,	// (0x00082aa3) vid4_indicators_pane_g4

0xdb78,	// (0x000892ec) cell_imed_line_width_pane_ParamLimits

0xdb78,	// (0x000892ec) cell_imed_line_width_pane

0xdb8c,	// (0x00089300) cell_imed_line_width_pane_g1

0xd972,	// (0x000890e6) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0008b24c) cell_imed_line_width_pane_g

0x82e1,	// (0x00083a55) main_vded2_pane_g1_ParamLimits

0x82e1,	// (0x00083a55) main_vded2_pane_g1

0x82ee,	// (0x00083a62) main_vded2_pane_g2_ParamLimits

0x82ee,	// (0x00083a62) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0008b251) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0008b251) main_vded2_pane_g

0x82fc,	// (0x00083a70) vded2_slider_pane_ParamLimits

0x82fc,	// (0x00083a70) vded2_slider_pane

0x8309,	// (0x00083a7d) aid_size_touch_vded2_end

0x8313,	// (0x00083a87) aid_size_touch_vded2_playhead

0xdbac,	// (0x00089320) aid_size_touch_vded2_start

0xdbb4,	// (0x00089328) vded2_slider_bg_pane

0xdbbd,	// (0x00089331) vded2_slider_pane_g1

0xdbc6,	// (0x0008933a) vded2_slider_pane_g2

0x831b,	// (0x00083a8f) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0008b256) vded2_slider_pane_g

0xdbce,	// (0x00089342) vded2_slider_bg_pane_g1

0xdbd7,	// (0x0008934b) vded2_slider_bg_pane_g2

0xdbe0,	// (0x00089354) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0008b25d) vded2_slider_bg_pane_g

0x4b01,	// (0x00080275) aid_postcard_touch_down_pane_ParamLimits

0x4b01,	// (0x00080275) aid_postcard_touch_down_pane

0x4b11,	// (0x00080285) aid_postcard_touch_up_pane_ParamLimits

0x4b11,	// (0x00080285) aid_postcard_touch_up_pane

0x9f90,	// (0x00085704) main_blid2_pane

0x5241,	// (0x000809b5) popup_blid2_search_window

0x9f90,	// (0x00085704) blid2_gps_pane

0x9f90,	// (0x00085704) blid2_navig_pane

0x9f90,	// (0x00085704) blid2_search_pane

0x9f90,	// (0x00085704) blid2_tripm_pane

0x8324,	// (0x00083a98) blid2_search_pane_g1_ParamLimits

0x8324,	// (0x00083a98) blid2_search_pane_g1

0x8334,	// (0x00083aa8) blid2_search_pane_t1_ParamLimits

0x8334,	// (0x00083aa8) blid2_search_pane_t1

0x8346,	// (0x00083aba) aid_size_cell_blid2_gps_ParamLimits

0x8346,	// (0x00083aba) aid_size_cell_blid2_gps

0x8356,	// (0x00083aca) blid2_gps_pane_g1_ParamLimits

0x8356,	// (0x00083aca) blid2_gps_pane_g1

0x8362,	// (0x00083ad6) grid_blid2_satellite_pane_ParamLimits

0x8362,	// (0x00083ad6) grid_blid2_satellite_pane

0x8372,	// (0x00083ae6) blid2_navig_pane_g1_ParamLimits

0x8372,	// (0x00083ae6) blid2_navig_pane_g1

0x837e,	// (0x00083af2) blid2_navig_pane_t1_ParamLimits

0x837e,	// (0x00083af2) blid2_navig_pane_t1

0x8390,	// (0x00083b04) blid2_navig_pane_t2_ParamLimits

0x8390,	// (0x00083b04) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0008b264) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0008b264) blid2_navig_pane_t

0x83a2,	// (0x00083b16) blid2_navig_ring_pane_ParamLimits

0x83a2,	// (0x00083b16) blid2_navig_ring_pane

0x83b2,	// (0x00083b26) blid2_speed_pane_ParamLimits

0x83b2,	// (0x00083b26) blid2_speed_pane

0x83be,	// (0x00083b32) blid2_tripm_pane_g1_ParamLimits

0x83be,	// (0x00083b32) blid2_tripm_pane_g1

0x83ce,	// (0x00083b42) blid2_tripm_pane_g2_ParamLimits

0x83ce,	// (0x00083b42) blid2_tripm_pane_g2

0x83da,	// (0x00083b4e) blid2_tripm_pane_g3_ParamLimits

0x83da,	// (0x00083b4e) blid2_tripm_pane_g3

0x83e6,	// (0x00083b5a) blid2_tripm_pane_g4_ParamLimits

0x83e6,	// (0x00083b5a) blid2_tripm_pane_g4

0x83f2,	// (0x00083b66) blid2_tripm_pane_g5_ParamLimits

0x83f2,	// (0x00083b66) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0008b269) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0008b269) blid2_tripm_pane_g

0x840e,	// (0x00083b82) blid2_tripm_pane_t1_ParamLimits

0x840e,	// (0x00083b82) blid2_tripm_pane_t1

0x8422,	// (0x00083b96) blid2_tripm_pane_t2_ParamLimits

0x8422,	// (0x00083b96) blid2_tripm_pane_t2

0x8434,	// (0x00083ba8) blid2_tripm_pane_t3_ParamLimits

0x8434,	// (0x00083ba8) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0008b276) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0008b276) blid2_tripm_pane_t

0x8466,	// (0x00083bda) cell_blid2_satellite_pane_ParamLimits

0x8466,	// (0x00083bda) cell_blid2_satellite_pane

0x8480,	// (0x00083bf4) cell_blid2_satellite_pane_g1

0xdbe9,	// (0x0008935d) cell_blid2_satellite_pane_t1

0xcbb8,	// (0x0008832c) blid2_speed_pane_g1

0xdbf7,	// (0x0008936b) blid2_speed_pane_t1

0xdc05,	// (0x00089379) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0008b27f) blid2_speed_pane_t

0xcbb8,	// (0x0008832c) blid2_navig_ring_pane_g1

0x8489,	// (0x00083bfd) blid2_navig_ring_pane_g2

0x8491,	// (0x00083c05) blid2_navig_ring_pane_g3

0x8499,	// (0x00083c0d) blid2_navig_ring_pane_g4

0x84a1,	// (0x00083c15) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0008b284) blid2_navig_ring_pane_g

0x9f90,	// (0x00085704) bg_popup_window_pane_cp011

0xdc13,	// (0x00089387) popup_blid2_search_window_g1

0xdc1b,	// (0x0008938f) popup_blid2_search_window_t1

0xdc29,	// (0x0008939d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0008b28f) popup_blid2_search_window_t

0xaa69,	// (0x000861dd) main_browser_pane_g1

0xa6ec,	// (0x00085e60) main_browser_pane_ParamLimits

0xaa03,	// (0x00086177) bg_button_pane_cp011_ParamLimits

0x7592,	// (0x00082d06) cell_vitu2_function_pane_g1_ParamLimits

0xc7ae,	// (0x00087f22) bg_popup_sub_pane_cp22_ParamLimits

0x1182,	// (0x0007c8f6) input_focus_pane_cp08_ParamLimits

0x7e61,	// (0x000835d5) popup_vitu2_query_button_pane_ParamLimits

0x7e61,	// (0x000835d5) popup_vitu2_query_button_pane

0x1199,	// (0x0007c90d) popup_vitu2_query_input_button_pane

0xd886,	// (0x00088ffa) popup_vitu2_query_window_g1_ParamLimits

0x7e72,	// (0x000835e6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0008b190) popup_vitu2_query_window_g_ParamLimits

0x9f90,	// (0x00085704) bg_button_pane_cp026

0x84a9,	// (0x00083c1d) popup_vitu2_query_input_button_pane_g1

0x9f90,	// (0x00085704) bg_button_pane_cp025

0xdc37,	// (0x000893ab) popup_vitu2_query_button_pane_t1

0x5ca2,	// (0x00081416) main_mp3_pane_t6

0x5cb2,	// (0x00081426) popup_slider_window_cp01

0x720e,	// (0x00082982) cam4_battery_pane

0x72ee,	// (0x00082a62) cam4_battery_pane_cp02

0x81e3,	// (0x00083957) cam4_battery_pane_cp01

0x81e3,	// (0x00083957) cam4_battery_pane_cp03

0xcbb8,	// (0x0008832c) cam4_battery_pane_g1

0xd97a,	// (0x000890ee) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0008b294) cam4_battery_pane_g

0xca82,	// (0x000881f6) popup_blid_sat_info2_window_t11

0xb1e4,	// (0x00086958) aid_size_touch_mv_arrow_left_ParamLimits

0xb20f,	// (0x00086983) aid_size_touch_mv_arrow_right_ParamLimits

0xb26d,	// (0x000869e1) navi_pane_g1_ParamLimits

0xb279,	// (0x000869ed) navi_pane_g2_ParamLimits

0xb2b5,	// (0x00086a29) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008ab59) navi_pane_g_ParamLimits

0x4581,	// (0x0007fcf5) navi_pane_mv_t1_ParamLimits

0x67c2,	// (0x00081f36) grid_imed_effect_pane_ParamLimits

0x2fe6,	// (0x0007e75a) aid_placing_vt_slider_lsc

0xa9a1,	// (0x00086115) aid_placing_vt_slider_prt

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp01_ParamLimits

0xcd38,	// (0x000884ac) popup_image_details_window_g1_ParamLimits

0xcd4b,	// (0x000884bf) popup_image_details_window_g2_ParamLimits

0xcd60,	// (0x000884d4) popup_image_details_window_g3_ParamLimits

0xcd60,	// (0x000884d4) popup_image_details_window_g3

0xf718,	// (0x0008ae8c) popup_image_details_window_g_ParamLimits

0xcd74,	// (0x000884e8) popup_image_details_window_t1_ParamLimits

0xcd92,	// (0x00088506) popup_image_details_window_t2_ParamLimits

0xcdab,	// (0x0008851f) popup_image_details_window_t3_ParamLimits

0xcdbf,	// (0x00088533) popup_image_details_window_t4_ParamLimits

0xcdda,	// (0x0008854e) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008ae93) popup_image_details_window_t_ParamLimits

0x8103,	// (0x00083877) cl_header_name_pane_ParamLimits

0x8103,	// (0x00083877) cl_header_name_pane

0x84b1,	// (0x00083c25) cl_header_name_pane_t1_ParamLimits

0x84b1,	// (0x00083c25) cl_header_name_pane_t1

0x84c8,	// (0x00083c3c) cl_header_name_pane_t2_ParamLimits

0x84c8,	// (0x00083c3c) cl_header_name_pane_t2

0x84f2,	// (0x00083c66) cl_header_name_pane_t3_ParamLimits

0x84f2,	// (0x00083c66) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0008b299) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0008b299) cl_header_name_pane_t

0xb344,	// (0x00086ab8) navi_pane_mv_g2_ParamLimits

0xd5ef,	// (0x00088d63) field_vitu2_entry_pane_g1_ParamLimits

0xd5fb,	// (0x00088d6f) field_vitu2_entry_pane_g2_ParamLimits

0xd607,	// (0x00088d7b) field_vitu2_entry_pane_g3_ParamLimits

0xd607,	// (0x00088d7b) field_vitu2_entry_pane_g3

0xf91b,	// (0x0008b08f) field_vitu2_entry_pane_g_ParamLimits

0x7526,	// (0x00082c9a) cell_vitu2_itu_pane_g1_ParamLimits

0x7538,	// (0x00082cac) cell_vitu2_itu_pane_g2_ParamLimits

0x7538,	// (0x00082cac) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008b09b) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008b09b) cell_vitu2_itu_pane_g

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp05_ParamLimits

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp05

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp03

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp04

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp10_ParamLimits

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp10

0x12e5,	// (0x0007ca59) bg_vkb2_func_pane_cp08

0x80ad,	// (0x00083821) bg_vkb2_func_pane_cp06

0x80bb,	// (0x0008382f) bg_vkb2_func_pane_cp07

0xdb2e,	// (0x000892a2) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2e,	// (0x000892a2) bg_vkb2_func_pane_cp11

0xdb43,	// (0x000892b7) bg_vkb2_func_pane_cp12_ParamLimits

0xdb43,	// (0x000892b7) bg_vkb2_func_pane_cp12

0x9f90,	// (0x00085704) bg_vkb2_func_pane_cp09

0xd627,	// (0x00088d9b) bg_vkb2_func_pane_g1

0xab7a,	// (0x000862ee) bg_vkb2_func_pane_g2

0xd62f,	// (0x00088da3) bg_vkb2_func_pane_g3

0xd637,	// (0x00088dab) bg_vkb2_func_pane_g4

0xd84b,	// (0x00088fbf) bg_vkb2_func_pane_g5

0xd64f,	// (0x00088dc3) bg_vkb2_func_pane_g6

0xd657,	// (0x00088dcb) bg_vkb2_func_pane_g7

0xd647,	// (0x00088dbb) bg_vkb2_func_pane_g8

0xab5a,	// (0x000862ce) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0008b2a0) bg_vkb2_func_pane_g

0x8400,	// (0x00083b74) blid2_tripm_pane_g6_ParamLimits

0x8400,	// (0x00083b74) blid2_tripm_pane_g6

0xd493,	// (0x00088c07) mp4_progress_pane_g1

0x845a,	// (0x00083bce) blid2_tripm_values_pane_ParamLimits

0x845a,	// (0x00083bce) blid2_tripm_values_pane

0x8517,	// (0x00083c8b) blid2_tripm_values_pane_t1

0x8525,	// (0x00083c99) blid2_tripm_values_pane_t2

0x8533,	// (0x00083ca7) blid2_tripm_values_pane_t3

0x8541,	// (0x00083cb5) blid2_tripm_values_pane_t4

0x854f,	// (0x00083cc3) blid2_tripm_values_pane_t5

0x855d,	// (0x00083cd1) blid2_tripm_values_pane_t6

0x856b,	// (0x00083cdf) blid2_tripm_values_pane_t7

0x8579,	// (0x00083ced) blid2_tripm_values_pane_t8

0x8587,	// (0x00083cfb) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0008b2b3) blid2_tripm_values_pane_t

0x3026,	// (0x0007e79a) call_video_pane_t1_ParamLimits

0x3047,	// (0x0007e7bb) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008a9e2) call_video_pane_t_ParamLimits

0x0f3d,	// (0x0007c6b1) msg_header_pane_g1_ParamLimits

0xb51e,	// (0x00086c92) msg_header_pane_g2_ParamLimits

0xb51e,	// (0x00086c92) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008abfc) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008abfc) msg_header_pane_g

0xa6ec,	// (0x00085e60) main_clock2_pane_ParamLimits

0x6553,	// (0x00081cc7) grid_clock2_toolbar_pane_ParamLimits

0x6553,	// (0x00081cc7) grid_clock2_toolbar_pane

0x6553,	// (0x00081cc7) listscroll_clock2_pane_ParamLimits

0x6553,	// (0x00081cc7) listscroll_clock2_pane

0x65fd,	// (0x00081d71) main_clock2_pane_t3_ParamLimits

0x65fd,	// (0x00081d71) main_clock2_pane_t3

0x660f,	// (0x00081d83) main_clock2_pane_t4_ParamLimits

0x660f,	// (0x00081d83) main_clock2_pane_t4

0xdc45,	// (0x000893b9) cell_clock2_toolbar_pane

0xdc4d,	// (0x000893c1) cell_clock2_toolbar_pane_cp01

0xdc4d,	// (0x000893c1) cell_clock2_toolbar_pane_cp02

0xdc55,	// (0x000893c9) cell_clock2_toolbar_pane_cp03

0xdc5d,	// (0x000893d1) list_clock2_pane

0xb15a,	// (0x000868ce) scroll_pane_cp10

0xdc65,	// (0x000893d9) list_single_clock2_pane_ParamLimits

0xdc65,	// (0x000893d9) list_single_clock2_pane

0xa90a,	// (0x0008607e) list_highlight_pane_cp08

0xdc72,	// (0x000893e6) list_single_clock2_pane_t1

0xdc80,	// (0x000893f4) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0008b2c6) list_single_clock2_pane_t

0x9f90,	// (0x00085704) bg_button_pane_cp10

0xdc8e,	// (0x00089402) cell_clock2_toolbar_pane_g1

0x4a63,	// (0x000801d7) aid_main_viewer_pane_g1_ParamLimits

0x4a63,	// (0x000801d7) aid_main_viewer_pane_g1

0x4a6f,	// (0x000801e3) aid_main_viewer_pane_g2_ParamLimits

0x4a6f,	// (0x000801e3) aid_main_viewer_pane_g2

0x4a7b,	// (0x000801ef) aid_main_viewer_pane_g3_ParamLimits

0x4a7b,	// (0x000801ef) aid_main_viewer_pane_g3

0x4a8c,	// (0x00080200) aid_main_viewer_pane_g4_ParamLimits

0x4a8c,	// (0x00080200) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008ac0d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008ac0d) aid_main_viewer_pane_g

0x5219,	// (0x0008098d) main_calc_pane_ParamLimits

0x5226,	// (0x0008099a) main_dialer2_pane_ParamLimits

0x9f90,	// (0x00085704) main_cam6_pane

0x9f90,	// (0x00085704) main_vid6_pane

0x655f,	// (0x00081cd3) listscroll_gen_pane_cp06_ParamLimits

0x655f,	// (0x00081cd3) listscroll_gen_pane_cp06

0x6621,	// (0x00081d95) main_clock2_pane_t5_ParamLimits

0x6621,	// (0x00081d95) main_clock2_pane_t5

0x666c,	// (0x00081de0) aid_call2_pane_cp10_ParamLimits

0x667e,	// (0x00081df2) aid_call_pane_cp10_ParamLimits

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6690,	// (0x00081e04) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6690,	// (0x00081e04) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1d8,	// (0x0008694c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0008af48) popup_clock_analogue_window_cp10_g_ParamLimits

0x66a2,	// (0x00081e16) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6e8d,	// (0x00082601) cell_dialer2_keypad_pane_g2_ParamLimits

0x6e8d,	// (0x00082601) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008b02e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008b02e) cell_dialer2_keypad_pane_g

0x6ea9,	// (0x0008261d) cell_dialer2_keypad_pane_t1

0x785f,	// (0x00082fd3) main_cset_text2_pane_ParamLimits

0x785f,	// (0x00082fd3) main_cset_text2_pane

0xda96,	// (0x0008920a) area_vitu2_query_pane_g1_ParamLimits

0x1210,	// (0x0007c984) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0008b1e3) area_vitu2_query_pane_g_ParamLimits

0x12c1,	// (0x0007ca35) area_vitu2_query_pane_t7_ParamLimits

0x12c1,	// (0x0007ca35) area_vitu2_query_pane_t7

0x80ad,	// (0x00083821) bg_button_pane_cp018_ParamLimits

0x80bb,	// (0x0008382f) bg_button_pane_cp021_ParamLimits

0x12e5,	// (0x0007ca59) bg_button_pane_cp022_ParamLimits

0x12e5,	// (0x0007ca59) bg_vkb2_func_pane_cp08_ParamLimits

0x80ad,	// (0x00083821) bg_vkb2_func_pane_cp06_ParamLimits

0x80bb,	// (0x0008382f) bg_vkb2_func_pane_cp07_ParamLimits

0x12f6,	// (0x0007ca6a) input_focus_pane_cp09_ParamLimits

0x8595,	// (0x00083d09) cam6_autofocus_pane_ParamLimits

0x8595,	// (0x00083d09) cam6_autofocus_pane

0x85b7,	// (0x00083d2b) cam6_image_uncrop_pane_ParamLimits

0x85b7,	// (0x00083d2b) cam6_image_uncrop_pane

0x85e4,	// (0x00083d58) cam6_indi_pane_ParamLimits

0x85e4,	// (0x00083d58) cam6_indi_pane

0x85fe,	// (0x00083d72) cam6_mode_pane_ParamLimits

0x85fe,	// (0x00083d72) cam6_mode_pane

0x8612,	// (0x00083d86) cam6_timer_pane_ParamLimits

0x8612,	// (0x00083d86) cam6_timer_pane

0x861e,	// (0x00083d92) cam6_zoom_pane_ParamLimits

0x861e,	// (0x00083d92) cam6_zoom_pane

0x8636,	// (0x00083daa) cam6_mode_pane_g1_ParamLimits

0x8636,	// (0x00083daa) cam6_mode_pane_g1

0x8642,	// (0x00083db6) cam6_mode_pane_g2_ParamLimits

0x8642,	// (0x00083db6) cam6_mode_pane_g2

0x864e,	// (0x00083dc2) cam6_mode_pane_g3_ParamLimits

0x864e,	// (0x00083dc2) cam6_mode_pane_g3

0x865a,	// (0x00083dce) cam6_mode_pane_g4_ParamLimits

0x865a,	// (0x00083dce) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0008b2cb) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0008b2cb) cam6_mode_pane_g

0xdb9e,	// (0x00089312) bg_tb_trans_pane_cp08_ParamLimits

0xdb9e,	// (0x00089312) bg_tb_trans_pane_cp08

0xdc96,	// (0x0008940a) cam6_battery_pane_ParamLimits

0xdc96,	// (0x0008940a) cam6_battery_pane

0xdcac,	// (0x00089420) cam6_indi_pane_g1_ParamLimits

0xdcac,	// (0x00089420) cam6_indi_pane_g1

0xdcbe,	// (0x00089432) cam6_indi_pane_g2_ParamLimits

0xdcbe,	// (0x00089432) cam6_indi_pane_g2

0xdcd0,	// (0x00089444) cam6_indi_pane_g3_ParamLimits

0xdcd0,	// (0x00089444) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0008b2d4) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0008b2d4) cam6_indi_pane_g

0xdce2,	// (0x00089456) cam6_indi_pane_t1_ParamLimits

0xdce2,	// (0x00089456) cam6_indi_pane_t1

0x7362,	// (0x00082ad6) cam6_autofocus_pane_g1

0x736a,	// (0x00082ade) cam6_autofocus_pane_g2

0x7372,	// (0x00082ae6) cam6_autofocus_pane_g3

0x737a,	// (0x00082aee) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0008b2db) cam6_autofocus_pane_g

0xdd08,	// (0x0008947c) cam6_timer_pane_g1

0xdd10,	// (0x00089484) cam6_timer_pane_t1

0xdd1e,	// (0x00089492) cam6_zoom_cont_pane

0xdd26,	// (0x0008949a) cam6_zoom_pane_g1

0xdd2e,	// (0x000894a2) cam6_zoom_pane_g2

0x8666,	// (0x00083dda) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0008b2e4) cam6_zoom_pane_g

0xcbb8,	// (0x0008832c) cam6_battery_pane_g1

0xcbb8,	// (0x0008832c) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008ae50) cam6_battery_pane_g

0xdd36,	// (0x000894aa) cam6_zoom_cont_pane_g1

0xdd3f,	// (0x000894b3) cam6_zoom_cont_pane_g2

0xdd48,	// (0x000894bc) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0008b2eb) cam6_zoom_cont_pane_g

0x8683,	// (0x00083df7) cam6_mode_pane_cp_ParamLimits

0x8683,	// (0x00083df7) cam6_mode_pane_cp

0x861e,	// (0x00083d92) cam6_zoom_pane_cp_ParamLimits

0x861e,	// (0x00083d92) cam6_zoom_pane_cp

0x8697,	// (0x00083e0b) vid6_image_uncrop_cif_pane_ParamLimits

0x8697,	// (0x00083e0b) vid6_image_uncrop_cif_pane

0x86c3,	// (0x00083e37) vid6_image_uncrop_nhd_pane_ParamLimits

0x86c3,	// (0x00083e37) vid6_image_uncrop_nhd_pane

0x85b7,	// (0x00083d2b) vid6_image_uncrop_vga_pane_ParamLimits

0x85b7,	// (0x00083d2b) vid6_image_uncrop_vga_pane

0x86e0,	// (0x00083e54) vid6_image_uncrop_wvga_pane_ParamLimits

0x86e0,	// (0x00083e54) vid6_image_uncrop_wvga_pane

0x86fd,	// (0x00083e71) vid6_indi_pane_ParamLimits

0x86fd,	// (0x00083e71) vid6_indi_pane

0xdb9e,	// (0x00089312) bg_tb_trans_pane_cp09_ParamLimits

0xdb9e,	// (0x00089312) bg_tb_trans_pane_cp09

0xdd60,	// (0x000894d4) cam6_battery_pane_cp_ParamLimits

0xdd60,	// (0x000894d4) cam6_battery_pane_cp

0xdd6c,	// (0x000894e0) vid6_indi_pane_g1_ParamLimits

0xdd6c,	// (0x000894e0) vid6_indi_pane_g1

0xdd7e,	// (0x000894f2) vid6_indi_pane_g2_ParamLimits

0xdd7e,	// (0x000894f2) vid6_indi_pane_g2

0xdd90,	// (0x00089504) vid6_indi_pane_g3_ParamLimits

0xdd90,	// (0x00089504) vid6_indi_pane_g3

0xdda5,	// (0x00089519) vid6_indi_pane_g4_ParamLimits

0xdda5,	// (0x00089519) vid6_indi_pane_g4

0xddba,	// (0x0008952e) vid6_indi_pane_g5_ParamLimits

0xddba,	// (0x0008952e) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0008b2f2) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0008b2f2) vid6_indi_pane_g

0xddd4,	// (0x00089548) vid6_indi_pane_t1_ParamLimits

0xddd4,	// (0x00089548) vid6_indi_pane_t1

0xddea,	// (0x0008955e) vid6_indi_pane_t2_ParamLimits

0xddea,	// (0x0008955e) vid6_indi_pane_t2

0xde12,	// (0x00089586) vid6_indi_pane_t3_ParamLimits

0xde12,	// (0x00089586) vid6_indi_pane_t3

0xde3a,	// (0x000895ae) vid6_indi_pane_t4_ParamLimits

0xde3a,	// (0x000895ae) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0008b2fd) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0008b2fd) vid6_indi_pane_t

0xde5e,	// (0x000895d2) wait_bar_pane_cp08

0x8720,	// (0x00083e94) main_cset_text2_pane_t1_ParamLimits

0x8720,	// (0x00083e94) main_cset_text2_pane_t1

0x866e,	// (0x00083de2) listscroll_gen_pane_cp06_t1_ParamLimits

0x866e,	// (0x00083de2) listscroll_gen_pane_cp06_t1

0x9f90,	// (0x00085704) main_cam6_set_pane

0xce24,	// (0x00088598) bg_tb_trans_pane_cp06_ParamLimits

0x7216,	// (0x0008298a) cam4_indicators_pane_g1_ParamLimits

0x7227,	// (0x0008299b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008b06b) cam4_indicators_pane_g_ParamLimits

0x7245,	// (0x000829b9) cam4_indicators_pane_t1_ParamLimits

0xaa03,	// (0x00086177) bg_tb_trans_pane_cp07_ParamLimits

0x72f6,	// (0x00082a6a) vid4_indicators_pane_g1_ParamLimits

0x730a,	// (0x00082a7e) vid4_indicators_pane_g2_ParamLimits

0x731e,	// (0x00082a92) vid4_indicators_pane_g3_ParamLimits

0x732f,	// (0x00082aa3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008b07d) vid4_indicators_pane_g_ParamLimits

0x734b,	// (0x00082abf) vid4_indicators_pane_t1_ParamLimits

0x81eb,	// (0x0008395f) vid4_progress_pane_g1_ParamLimits

0x81fb,	// (0x0008396f) vid4_progress_pane_g2_ParamLimits

0x820b,	// (0x0008397f) vid4_progress_pane_g3_ParamLimits

0x821d,	// (0x00083991) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0008b22e) vid4_progress_pane_g_ParamLimits

0x823b,	// (0x000839af) vid4_progress_pane_t1_ParamLimits

0x8251,	// (0x000839c5) vid4_progress_pane_t2_ParamLimits

0x8266,	// (0x000839da) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0008b239) vid4_progress_pane_t_ParamLimits

0x827c,	// (0x000839f0) wait_bar_pane_cp07_ParamLimits

0x875a,	// (0x00083ece) main_cam6_set_pane_g2_ParamLimits

0x875a,	// (0x00083ece) main_cam6_set_pane_g2

0x8766,	// (0x00083eda) main_cset6_listscroll_pane_ParamLimits

0x8766,	// (0x00083eda) main_cset6_listscroll_pane

0x8791,	// (0x00083f05) main_cset6_slider_pane_ParamLimits

0x8791,	// (0x00083f05) main_cset6_slider_pane

0x879d,	// (0x00083f11) main_cset6_text2_pane_ParamLimits

0x879d,	// (0x00083f11) main_cset6_text2_pane

0xde6d,	// (0x000895e1) main_cset6_text_pane

0xde75,	// (0x000895e9) main_cset_list_pane_copy1_ParamLimits

0xde75,	// (0x000895e9) main_cset_list_pane_copy1

0xde85,	// (0x000895f9) scroll_pane_cp028_copy1

0x87b0,	// (0x00083f24) cset_list_set_pane_copy1

0x87c9,	// (0x00083f3d) aid_position_infowindow_above_copy1

0x87d1,	// (0x00083f45) aid_position_infowindow_below_copy1

0x87d9,	// (0x00083f4d) cset_list_set_pane_g1_copy1

0x1106,	// (0x0007c87a) cset_list_set_pane_g3_copy1_ParamLimits

0x1106,	// (0x0007c87a) cset_list_set_pane_g3_copy1

0x1115,	// (0x0007c889) cset_list_set_pane_t1_copy1_ParamLimits

0x1115,	// (0x0007c889) cset_list_set_pane_t1_copy1

0xaa03,	// (0x00086177) list_highlight_pane_cp021_copy1_ParamLimits

0xaa03,	// (0x00086177) list_highlight_pane_cp021_copy1

0xde8e,	// (0x00089602) cset6_slider_pane_ParamLimits

0xde8e,	// (0x00089602) cset6_slider_pane

0xdeba,	// (0x0008962e) main_cset6_slider_pane_g1_ParamLimits

0xdeba,	// (0x0008962e) main_cset6_slider_pane_g1

0x87e1,	// (0x00083f55) main_cset6_slider_pane_g2_ParamLimits

0x87e1,	// (0x00083f55) main_cset6_slider_pane_g2

0xdee2,	// (0x00089656) main_cset6_slider_pane_g3_ParamLimits

0xdee2,	// (0x00089656) main_cset6_slider_pane_g3

0x8809,	// (0x00083f7d) main_cset6_slider_pane_g4_ParamLimits

0x8809,	// (0x00083f7d) main_cset6_slider_pane_g4

0x8815,	// (0x00083f89) main_cset6_slider_pane_g5_ParamLimits

0x8815,	// (0x00083f89) main_cset6_slider_pane_g5

0xd756,	// (0x00088eca) main_cset6_slider_pane_g7_ParamLimits

0xd756,	// (0x00088eca) main_cset6_slider_pane_g7

0xd762,	// (0x00088ed6) main_cset6_slider_pane_g8_ParamLimits

0xd762,	// (0x00088ed6) main_cset6_slider_pane_g8

0x8823,	// (0x00083f97) main_cset6_slider_pane_g9_ParamLimits

0x8823,	// (0x00083f97) main_cset6_slider_pane_g9

0x882f,	// (0x00083fa3) main_cset6_slider_pane_g10_ParamLimits

0x882f,	// (0x00083fa3) main_cset6_slider_pane_g10

0x883b,	// (0x00083faf) main_cset6_slider_pane_g11_ParamLimits

0x883b,	// (0x00083faf) main_cset6_slider_pane_g11

0x8847,	// (0x00083fbb) main_cset6_slider_pane_g12_ParamLimits

0x8847,	// (0x00083fbb) main_cset6_slider_pane_g12

0x8853,	// (0x00083fc7) main_cset6_slider_pane_g13_ParamLimits

0x8853,	// (0x00083fc7) main_cset6_slider_pane_g13

0x885f,	// (0x00083fd3) main_cset6_slider_pane_g14_ParamLimits

0x885f,	// (0x00083fd3) main_cset6_slider_pane_g14

0x886b,	// (0x00083fdf) main_cset6_slider_pane_g15_ParamLimits

0x886b,	// (0x00083fdf) main_cset6_slider_pane_g15

0x8883,	// (0x00083ff7) main_cset6_slider_pane_g16_ParamLimits

0x8883,	// (0x00083ff7) main_cset6_slider_pane_g16

0x8891,	// (0x00084005) main_cset6_slider_pane_g17_ParamLimits

0x8891,	// (0x00084005) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0008b306) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0008b306) main_cset6_slider_pane_g

0xdeee,	// (0x00089662) main_cset6_slider_pane_t1_ParamLimits

0xdeee,	// (0x00089662) main_cset6_slider_pane_t1

0x88b7,	// (0x0008402b) main_cset6_slider_pane_t2_ParamLimits

0x88b7,	// (0x0008402b) main_cset6_slider_pane_t2

0x88e2,	// (0x00084056) main_cset6_slider_pane_t3_ParamLimits

0x88e2,	// (0x00084056) main_cset6_slider_pane_t3

0x890d,	// (0x00084081) main_cset6_slider_pane_t4_ParamLimits

0x890d,	// (0x00084081) main_cset6_slider_pane_t4

0x8938,	// (0x000840ac) main_cset6_slider_pane_t5_ParamLimits

0x8938,	// (0x000840ac) main_cset6_slider_pane_t5

0xdf2f,	// (0x000896a3) main_cset6_slider_pane_t7_ParamLimits

0xdf2f,	// (0x000896a3) main_cset6_slider_pane_t7

0x8965,	// (0x000840d9) main_cset6_slider_pane_t8_ParamLimits

0x8965,	// (0x000840d9) main_cset6_slider_pane_t8

0x8989,	// (0x000840fd) main_cset6_slider_pane_t9_ParamLimits

0x8989,	// (0x000840fd) main_cset6_slider_pane_t9

0x89ad,	// (0x00084121) main_cset6_slider_pane_t10_ParamLimits

0x89ad,	// (0x00084121) main_cset6_slider_pane_t10

0x89d1,	// (0x00084145) main_cset6_slider_pane_t11_ParamLimits

0x89d1,	// (0x00084145) main_cset6_slider_pane_t11

0xdf65,	// (0x000896d9) main_cset6_slider_pane_t14_ParamLimits

0xdf65,	// (0x000896d9) main_cset6_slider_pane_t14

0xdfb9,	// (0x0008972d) main_cset6_slider_pane_t15_ParamLimits

0xdfb9,	// (0x0008972d) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0008b32b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0008b32b) main_cset6_slider_pane_t

0xdf9e,	// (0x00089712) cset_slider_pane_g1_copy1

0xdfa7,	// (0x0008971b) cset_slider_pane_g2_copy1

0xdfb0,	// (0x00089724) cset_slider_pane_g3_copy1

0x9f90,	// (0x00085704) bg_popup_sub_pane_cp011_copy1

0xdff2,	// (0x00089766) main_cset_text_pane_g1_copy1

0xd89a,	// (0x0008900e) main_cset_text_pane_t1_copy1

0xd8a8,	// (0x0008901c) main_cset_text_pane_t2_copy1

0xd8b6,	// (0x0008902a) main_cset_text_pane_t3_copy1

0xd8c4,	// (0x00089038) main_cset_text_pane_t4_copy1

0xd8d2,	// (0x00089046) main_cset_text_pane_t5_copy1

0xdffa,	// (0x0008976e) main_cset_text_pane_t6_copy1

0xe008,	// (0x0008977c) main_cset_text_pane_t7_copy1

0x8a12,	// (0x00084186) main_cset_text2_pane_t1_copy1

0xaa03,	// (0x00086177) main_ncimui_pane

0x5277,	// (0x000809eb) popup_query_ncimui_window_ParamLimits

0x5277,	// (0x000809eb) popup_query_ncimui_window

0x5e10,	// (0x00081584) field_cale_ev2_pane_g4_ParamLimits

0x5e10,	// (0x00081584) field_cale_ev2_pane_g4

0x6bad,	// (0x00082321) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6bad,	// (0x00082321) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0008b009) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0008b009) cell_video_dialer_keypad_pane_g

0x6bc5,	// (0x00082339) cell_video_dialer_keypad_pane_t1

0x9f90,	// (0x00085704) bg_popup_window_pane_cp012

0xb00f,	// (0x00086783) heading_pane_cp06

0xe034,	// (0x000897a8) ncim_query_content_pane

0x9f90,	// (0x00085704) bg_popup_heading_pane_cp01

0xe03c,	// (0x000897b0) ncim_heading_pane_t1

0xe04a,	// (0x000897be) ncim_indicator_popup_pane

0xe05c,	// (0x000897d0) ncim_query_button_pane

0xe070,	// (0x000897e4) ncim_query_content_pane_t1

0xe082,	// (0x000897f6) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0008b36f) ncim_query_content_pane_t

0xe0bc,	// (0x00089830) ncim_query_list_pane

0xe0ce,	// (0x00089842) ncim_query_popup_pane

0xe04a,	// (0x000897be) ncim_indicator_popup_pane_ParamLimits

0x8b6c,	// (0x000842e0) ncim_query_content_pane_g1_ParamLimits

0x8b6c,	// (0x000842e0) ncim_query_content_pane_g1

0xe070,	// (0x000897e4) ncim_query_content_pane_t1_ParamLimits

0xe082,	// (0x000897f6) ncim_query_content_pane_t2_ParamLimits

0x8b78,	// (0x000842ec) ncim_query_content_pane_t3_ParamLimits

0x8b78,	// (0x000842ec) ncim_query_content_pane_t3

0x8b95,	// (0x00084309) ncim_query_content_pane_t4_ParamLimits

0x8b95,	// (0x00084309) ncim_query_content_pane_t4

0x8bb2,	// (0x00084326) ncim_query_content_pane_t5_ParamLimits

0x8bb2,	// (0x00084326) ncim_query_content_pane_t5

0xe094,	// (0x00089808) ncim_query_content_pane_t6_ParamLimits

0xe094,	// (0x00089808) ncim_query_content_pane_t6

0xfbfb,	// (0x0008b36f) ncim_query_content_pane_t_ParamLimits

0xe0bc,	// (0x00089830) ncim_query_list_pane_ParamLimits

0xe0ce,	// (0x00089842) ncim_query_popup_pane_ParamLimits

0xe0e2,	// (0x00089856) wait_bar_pane_cp04

0x9f90,	// (0x00085704) input_focus_pane_cp011

0xe0ea,	// (0x0008985e) ncim_query_popup_pane_t1

0xe0f8,	// (0x0008986c) ncim_list_query_list_pane_ParamLimits

0xe0f8,	// (0x0008986c) ncim_list_query_list_pane

0x9f90,	// (0x00085704) bg_button_pane_cp027

0xe10b,	// (0x0008987f) ncim_query_button_pane_g1

0x9f90,	// (0x00085704) list_highlight_pane_cp012

0xe115,	// (0x00089889) ncim_list_query_list_pane_g1

0xe11d,	// (0x00089891) ncim_list_query_list_pane_t1

0x7236,	// (0x000829aa) cam4_indicators_pane_g3_ParamLimits

0x7236,	// (0x000829aa) cam4_indicators_pane_g3

0x733b,	// (0x00082aaf) vid4_indicators_pane_g5_ParamLimits

0x733b,	// (0x00082aaf) vid4_indicators_pane_g5

0x822c,	// (0x000839a0) vid4_progress_pane_g5_ParamLimits

0x822c,	// (0x000839a0) vid4_progress_pane_g5

0x8a58,	// (0x000841cc) main_ncimui_pane_g1

0x8ac0,	// (0x00084234) ncimui_group_query_pane_ParamLimits

0x8ac0,	// (0x00084234) ncimui_group_query_pane

0x8b08,	// (0x0008427c) ncimui_list_pane_ParamLimits

0x8b08,	// (0x0008427c) ncimui_list_pane

0x8b2f,	// (0x000842a3) ncimui_text_pane_ParamLimits

0x8b2f,	// (0x000842a3) ncimui_text_pane

0x8bcf,	// (0x00084343) ncimui_text_pane_t1_ParamLimits

0x8bcf,	// (0x00084343) ncimui_text_pane_t1

0xe12b,	// (0x0008989f) ncimui_list_single_graphic_pane_ParamLimits

0xe12b,	// (0x0008989f) ncimui_list_single_graphic_pane

0x8bee,	// (0x00084362) ncimui_query_pane_ParamLimits

0x8bee,	// (0x00084362) ncimui_query_pane

0x9f90,	// (0x00085704) list_highlight_pane_cp013

0xe13b,	// (0x000898af) ncim_list_query_list_pane_t1_copy1

0xe115,	// (0x00089889) ncim_list_single_graphic_pane_g1

0xe149,	// (0x000898bd) ncim_query_button_pane_cp01

0xe155,	// (0x000898c9) ncim_query_entry_pane_ParamLimits

0xe155,	// (0x000898c9) ncim_query_entry_pane

0xe168,	// (0x000898dc) ncimui_query_pane_g1

0xe174,	// (0x000898e8) ncimui_query_pane_t1_ParamLimits

0xe174,	// (0x000898e8) ncimui_query_pane_t1

0xaa03,	// (0x00086177) input_focus_pane_cp012

0xe18d,	// (0x00089901) ncim_query_entry_pane_t1

0xa6ec,	// (0x00085e60) main_im_pane_ParamLimits

0xaa03,	// (0x00086177) main_mobtv_pane_ParamLimits

0xaa03,	// (0x00086177) main_mobtv_pane

0x889f,	// (0x00084013) main_cset6_slider_pane_g18_ParamLimits

0x889f,	// (0x00084013) main_cset6_slider_pane_g18

0x88ab,	// (0x0008401f) main_cset6_slider_pane_g19_ParamLimits

0x88ab,	// (0x0008401f) main_cset6_slider_pane_g19

0xd607,	// (0x00088d7b) bg_main_mobtv_pane_ParamLimits

0xd607,	// (0x00088d7b) bg_main_mobtv_pane

0x8c01,	// (0x00084375) main_mobtv_info_pane

0x8c0c,	// (0x00084380) main_mobtv_loading_pane_ParamLimits

0x8c0c,	// (0x00084380) main_mobtv_loading_pane

0xe19f,	// (0x00089913) main_mobtv_pg_channel_list_pane

0xe1a9,	// (0x0008991d) main_mobtv_pg_hdr_pane

0x8c19,	// (0x0008438d) main_mobtv_programe_curr_pane_ParamLimits

0x8c19,	// (0x0008438d) main_mobtv_programe_curr_pane

0x8c26,	// (0x0008439a) main_mobtv_programe_next_pane_ParamLimits

0x8c26,	// (0x0008439a) main_mobtv_programe_next_pane

0xe1b2,	// (0x00089926) popup_mobtv_noti_window

0xcbb8,	// (0x0008832c) main_tv_pg_hdr_pane_g1

0xe1ba,	// (0x0008992e) main_tv_pg_hdr_pane_g2

0xe1c2,	// (0x00089936) main_tv_pg_hdr_pane_g3

0xe1ca,	// (0x0008993e) main_tv_pg_hdr_pane_g4

0xe1d2,	// (0x00089946) main_tv_pg_hdr_pane_g5

0xe1dc,	// (0x00089950) main_tv_pg_hdr_pane_g6

0xe1e6,	// (0x0008995a) main_tv_pg_hdr_pane_g7

0xe1f0,	// (0x00089964) main_tv_pg_hdr_pane_g8

0xe1fa,	// (0x0008996e) main_tv_pg_hdr_pane_g9

0xe204,	// (0x00089978) main_tv_pg_hdr_pane_g10

0xe20e,	// (0x00089982) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0008b37c) main_tv_pg_hdr_pane_g

0xe218,	// (0x0008998c) main_tv_pg_hdr_pane_t1

0xe226,	// (0x0008999a) main_tv_pg_hdr_pane_t2

0xe234,	// (0x000899a8) main_tv_pg_hdr_pane_t3

0xe244,	// (0x000899b8) main_tv_pg_hdr_pane_t4

0xe254,	// (0x000899c8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0008b393) main_tv_pg_hdr_pane_t

0xe264,	// (0x000899d8) single_mobtv_pg_channel_pane_ParamLimits

0xe264,	// (0x000899d8) single_mobtv_pg_channel_pane

0xe276,	// (0x000899ea) single_mobtv_pg_channel_table_pane

0xe27f,	// (0x000899f3) single_mobtv_pg_channel_thumb_pane

0xe288,	// (0x000899fc) single_tv_pg_channel_pane_g1

0xe291,	// (0x00089a05) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0008b39e) single_tv_pg_channel_pane_g

0xce24,	// (0x00088598) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce24,	// (0x00088598) bg_single_mobtv_pg_channel_thumb_pane

0xe29a,	// (0x00089a0e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29a,	// (0x00089a0e) single_mobtv_pg_channel_thumb_pane_g1

0xe2a8,	// (0x00089a1c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2a8,	// (0x00089a1c) single_mobtv_pg_channel_thumb_pane_g2

0xe2b4,	// (0x00089a28) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b4,	// (0x00089a28) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0008b3a3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0008b3a3) single_mobtv_pg_channel_thumb_pane_g

0xe2c0,	// (0x00089a34) single_mobtv_pg_channel_thumb_pane_t1

0xe2ce,	// (0x00089a42) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0008b3aa) single_mobtv_pg_channel_thumb_pane_t

0xcbb8,	// (0x0008832c) bg_single_mobtv_pg_channel_table_pane_g1

0xcbb8,	// (0x0008832c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008ae50) bg_single_mobtv_pg_channel_table_pane_g

0xe2dc,	// (0x00089a50) single_mobtv_pg_channel_table_pane_t1

0xe2ea,	// (0x00089a5e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0008b3af) single_mobtv_pg_channel_table_pane_t

0x8c3b,	// (0x000843af) main_mobtv_info_pane_g1_ParamLimits

0x8c3b,	// (0x000843af) main_mobtv_info_pane_g1

0x8c57,	// (0x000843cb) main_mobtv_info_pane_t1_ParamLimits

0x8c57,	// (0x000843cb) main_mobtv_info_pane_t1

0x8ccf,	// (0x00084443) main_mobtv_info_pane_t2_ParamLimits

0x8ccf,	// (0x00084443) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0008b3b9) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0008b3b9) main_mobtv_info_pane_t

0x8d5e,	// (0x000844d2) wait_bar_pane_cp05

0x8d70,	// (0x000844e4) main_mobtv_loading_pane_g1_ParamLimits

0x8d70,	// (0x000844e4) main_mobtv_loading_pane_g1

0x8d7e,	// (0x000844f2) main_mobtv_loading_pane_g2_ParamLimits

0x8d7e,	// (0x000844f2) main_mobtv_loading_pane_g2

0x8d8a,	// (0x000844fe) main_mobtv_loading_pane_g3_ParamLimits

0x8d8a,	// (0x000844fe) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0008b3c0) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0008b3c0) main_mobtv_loading_pane_g

0xe2f8,	// (0x00089a6c) main_mobtv_loading_pane_t1_ParamLimits

0xe2f8,	// (0x00089a6c) main_mobtv_loading_pane_t1

0xe310,	// (0x00089a84) main_mobtv_loading_pane_t2_ParamLimits

0xe310,	// (0x00089a84) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0008b3c7) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0008b3c7) main_mobtv_loading_pane_t

0x8d98,	// (0x0008450c) wait_bar_pane_cp06_ParamLimits

0x8d98,	// (0x0008450c) wait_bar_pane_cp06

0xe334,	// (0x00089aa8) main_mobtv_programe_curr_pane_t1

0xe342,	// (0x00089ab6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0008b3cc) main_mobtv_programe_curr_pane_t

0xe350,	// (0x00089ac4) main_mobtv_programe_next_pane_t1

0xe35e,	// (0x00089ad2) main_mobtv_programe_next_pane_t2

0xe36c,	// (0x00089ae0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0008b3d1) main_mobtv_programe_next_pane_t

0x9f90,	// (0x00085704) bg_popup_mobtv_noti_window_pane

0xe37a,	// (0x00089aee) popup_mobtv_noti_window_g1

0xe382,	// (0x00089af6) popup_mobtv_noti_window_t1

0xe390,	// (0x00089b04) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0008b3d8) popup_mobtv_noti_window_t

0xcbb8,	// (0x0008832c) bg_popup_mobtv_noti_window_pane_g1

0x9f90,	// (0x00085704) sc_clock_pane

0x9f90,	// (0x00085704) main_fs_bigclock_pane

0x8448,	// (0x00083bbc) blid2_tripm_pane_t4_ParamLimits

0x8448,	// (0x00083bbc) blid2_tripm_pane_t4

0x8da4,	// (0x00084518) sc_clock_pane_g1_ParamLimits

0x8da4,	// (0x00084518) sc_clock_pane_g1

0x8db2,	// (0x00084526) sc_clock_pane_t1_ParamLimits

0x8db2,	// (0x00084526) sc_clock_pane_t1

0x8dc5,	// (0x00084539) sc_clock_pane_t2_ParamLimits

0x8dc5,	// (0x00084539) sc_clock_pane_t2

0x8dd7,	// (0x0008454b) sc_clock_pane_t3_ParamLimits

0x8dd7,	// (0x0008454b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0008b3dd) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0008b3dd) sc_clock_pane_t

0x967e,	// (0x00084df2) main_fs_bigclock_indicator_pane_ParamLimits

0x967e,	// (0x00084df2) main_fs_bigclock_indicator_pane

0x8e60,	// (0x000845d4) main_fs_bigclock_pane_g1_ParamLimits

0x8e60,	// (0x000845d4) main_fs_bigclock_pane_g1

0x968a,	// (0x00084dfe) main_fs_bigclock_pane_t1_ParamLimits

0x968a,	// (0x00084dfe) main_fs_bigclock_pane_t1

0x969c,	// (0x00084e10) main_fs_bigclock_pane_t2_ParamLimits

0x969c,	// (0x00084e10) main_fs_bigclock_pane_t2

0x96ae,	// (0x00084e22) main_fs_bigclock_pane_t3_ParamLimits

0x96ae,	// (0x00084e22) main_fs_bigclock_pane_t3

0x0002,

0xfe28,	// (0x0008b59c) main_fs_bigclock_pane_t_ParamLimits

0xfe28,	// (0x0008b59c) main_fs_bigclock_pane_t

0xec93,	// (0x0008a407) main_fs_bigclock_indicator_pane_g1

0xe064,	// (0x000897d8) ncim_query_content_pane_g2_ParamLimits

0xe064,	// (0x000897d8) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0008b36a) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0008b36a) ncim_query_content_pane_g

0x8deb,	// (0x0008455f) sc_clock_pane_t4_ParamLimits

0x8deb,	// (0x0008455f) sc_clock_pane_t4

0xaa03,	// (0x00086177) main_radioblah_pane

0xd57a,	// (0x00088cee) cell_call4_button_pane_t1_copy1_ParamLimits

0xd57a,	// (0x00088cee) cell_call4_button_pane_t1_copy1

0x8a72,	// (0x000841e6) main_ncimui_pane_t1_ParamLimits

0x8a72,	// (0x000841e6) main_ncimui_pane_t1

0x8a8c,	// (0x00084200) main_ncimui_pane_t2_ParamLimits

0x8a8c,	// (0x00084200) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0008b363) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0008b363) main_ncimui_pane_t

0xe4e3,	// (0x00089c57) main_radioblah_anim_pane_ParamLimits

0xe4e3,	// (0x00089c57) main_radioblah_anim_pane

0xe4f4,	// (0x00089c68) main_radioblah_info_pane_ParamLimits

0xe4f4,	// (0x00089c68) main_radioblah_info_pane

0xe508,	// (0x00089c7c) main_radioblah_pane_t1_ParamLimits

0xe508,	// (0x00089c7c) main_radioblah_pane_t1

0xe524,	// (0x00089c98) main_radioblah_pane_t2_ParamLimits

0xe524,	// (0x00089c98) main_radioblah_pane_t2

0x0003,

0x09d1,	// (0x0007c145) main_radioblah_pane_t_ParamLimits

0x09d1,	// (0x0007c145) main_radioblah_pane_t

0x8eb2,	// (0x00084626) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8eb2,	// (0x00084626) main_radioblah_rocker_ctrl_pane

0xe56c,	// (0x00089ce0) main_radioblah_info_pane_t1_ParamLimits

0xe56c,	// (0x00089ce0) main_radioblah_info_pane_t1

0x8ef7,	// (0x0008466b) main_radioblah_info_pane_t2_ParamLimits

0x8ef7,	// (0x0008466b) main_radioblah_info_pane_t2

0x0003,

0xfc7f,	// (0x0008b3f3) main_radioblah_info_pane_t_ParamLimits

0xfc7f,	// (0x0008b3f3) main_radioblah_info_pane_t

0xcbb8,	// (0x0008832c) main_radioblah_rocker_ctrl_pane_g1

0x8fa7,	// (0x0008471b) main_radioblah_rocker_ctrl_pane_g2

0x8faf,	// (0x00084723) main_radioblah_rocker_ctrl_pane_g3

0x8fb7,	// (0x0008472b) main_radioblah_rocker_ctrl_pane_g4

0x8fbf,	// (0x00084733) main_radioblah_rocker_ctrl_pane_g5

0x8fc7,	// (0x0008473b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc88,	// (0x0008b3fc) main_radioblah_rocker_ctrl_pane_g

0x8a12,	// (0x00084186) main_cset_text2_pane_t1_copy1_ParamLimits

0x7164,	// (0x000828d8) cam4_image_uncrop_qvga_pane

0x72ab,	// (0x00082a1f) vid4_image_uncrop_qcif_pane

0x85d6,	// (0x00083d4a) cam6_image_uncrop_qvga_pane_ParamLimits

0x85d6,	// (0x00083d4a) cam6_image_uncrop_qvga_pane

0xdd50,	// (0x000894c4) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd50,	// (0x000894c4) vid6_image_uncrop_qcif_pane

0x9f90,	// (0x00085704) bg_popup_preview_window_pane_cp03

0xe016,	// (0x0008978a) list_cset_text2_pane

0xe01e,	// (0x00089792) main_cset6_text2_pane_g1

0xe026,	// (0x0008979a) main_cset6_text2_pane_t1

0x8fcf,	// (0x00084743) list_cset_text2_pane_t1_ParamLimits

0x8fcf,	// (0x00084743) list_cset_text2_pane_t1

0xaa03,	// (0x00086177) main_radioblah_pane_ParamLimits

0x8d4a,	// (0x000844be) main_mobtv_info_pane_t3_ParamLimits

0x8d4a,	// (0x000844be) main_mobtv_info_pane_t3

0x8ea0,	// (0x00084614) main_radioblah_pane_g1

0x8ecb,	// (0x0008463f) main_radioblah_info_pane_g1

0x8f4c,	// (0x000846c0) main_radioblah_info_pane_t3_ParamLimits

0x8f4c,	// (0x000846c0) main_radioblah_info_pane_t3

0x40e4,	// (0x0007f858) highlight_cell_cale_month_pane_ParamLimits

0x40e4,	// (0x0007f858) highlight_cell_cale_month_pane

0x9f90,	// (0x00085704) main_phob_fisheye_pane

0xcf00,	// (0x00088674) scroll_pane_cp0031_ParamLimits

0xcf00,	// (0x00088674) scroll_pane_cp0031

0xde5e,	// (0x000895d2) wait_bar_pane_cp08_ParamLimits

0x87b0,	// (0x00083f24) cset_list_set_pane_copy1_ParamLimits

0xe5a6,	// (0x00089d1a) highlight_cell_cale_month_pane_g1

0x8ff6,	// (0x0008476a) highlight_cell_cale_month_pane_t1

0xdaea,	// (0x0008925e) list_gen_pane_cp01

0xd741,	// (0x00088eb5) scroll_pane_01

0x9004,	// (0x00084778) list_single_double_fisheye_pane

0x13d7,	// (0x0007cb4b) list_double_fisheye_pane_g1_ParamLimits

0x13d7,	// (0x0007cb4b) list_double_fisheye_pane_g1

0x900d,	// (0x00084781) list_double_fisheye_pane_g2_ParamLimits

0x900d,	// (0x00084781) list_double_fisheye_pane_g2

0x9021,	// (0x00084795) list_double_fisheye_pane_g3_ParamLimits

0x9021,	// (0x00084795) list_double_fisheye_pane_g3

0x0004,

0xfc95,	// (0x0008b409) list_double_fisheye_pane_g_ParamLimits

0xfc95,	// (0x0008b409) list_double_fisheye_pane_g

0x13ef,	// (0x0007cb63) list_double_fisheye_pane_t1_ParamLimits

0x13ef,	// (0x0007cb63) list_double_fisheye_pane_t1

0x140a,	// (0x0007cb7e) list_double_fisheye_pane_t2_ParamLimits

0x140a,	// (0x0007cb7e) list_double_fisheye_pane_t2

0x0001,

0xfca0,	// (0x0008b414) list_double_fisheye_pane_t_ParamLimits

0xfca0,	// (0x0008b414) list_double_fisheye_pane_t

0x9f90,	// (0x00085704) main_call5_pane

0x8e11,	// (0x00084585) sc_swipe_pane_ParamLimits

0x8e11,	// (0x00084585) sc_swipe_pane

0x904a,	// (0x000847be) call5_image_pane_ParamLimits

0x904a,	// (0x000847be) call5_image_pane

0x905a,	// (0x000847ce) call5_swipe_1_pane_ParamLimits

0x905a,	// (0x000847ce) call5_swipe_1_pane

0x9066,	// (0x000847da) call5_swipe_2_pane_ParamLimits

0x9066,	// (0x000847da) call5_swipe_2_pane

0x9080,	// (0x000847f4) popup_call5_audio_first_window_ParamLimits

0x9080,	// (0x000847f4) popup_call5_audio_first_window

0xce24,	// (0x00088598) call5_swipe_1_pane_g1_ParamLimits

0xce24,	// (0x00088598) call5_swipe_1_pane_g1

0xe5ae,	// (0x00089d22) call5_swipe_1_pane_g2_ParamLimits

0xe5ae,	// (0x00089d22) call5_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0008b419) call5_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0008b419) call5_swipe_1_pane_g

0xe5ba,	// (0x00089d2e) call5_swipe_1_pane_t1_ParamLimits

0xe5ba,	// (0x00089d2e) call5_swipe_1_pane_t1

0xce24,	// (0x00088598) call5_swipe_2_pane_g1_ParamLimits

0xce24,	// (0x00088598) call5_swipe_2_pane_g1

0xe5cf,	// (0x00089d43) call5_swipe_2_pane_g2_ParamLimits

0xe5cf,	// (0x00089d43) call5_swipe_2_pane_g2

0x0001,

0xfcaa,	// (0x0008b41e) call5_swipe_2_pane_g_ParamLimits

0xfcaa,	// (0x0008b41e) call5_swipe_2_pane_g

0xe5db,	// (0x00089d4f) call5_swipe_2_pane_t1_ParamLimits

0xe5db,	// (0x00089d4f) call5_swipe_2_pane_t1

0xe5f0,	// (0x00089d64) sc_swipe_pane_g1_ParamLimits

0xe5f0,	// (0x00089d64) sc_swipe_pane_g1

0xe5fd,	// (0x00089d71) sc_swipe_pane_g2_ParamLimits

0xe5fd,	// (0x00089d71) sc_swipe_pane_g2

0x0001,

0xfcaf,	// (0x0008b423) sc_swipe_pane_g_ParamLimits

0xfcaf,	// (0x0008b423) sc_swipe_pane_g

0xe609,	// (0x00089d7d) sc_swipe_pane_t1_ParamLimits

0xe609,	// (0x00089d7d) sc_swipe_pane_t1

0x9f90,	// (0x00085704) main_cmail_launcher_pane

0x908e,	// (0x00084802) aid_size_cell_cmail_l_ParamLimits

0x908e,	// (0x00084802) aid_size_cell_cmail_l

0x909e,	// (0x00084812) grid_cmail_l_pane_ParamLimits

0x909e,	// (0x00084812) grid_cmail_l_pane

0x90ae,	// (0x00084822) cell_cmail_l_pane_ParamLimits

0x90ae,	// (0x00084822) cell_cmail_l_pane

0x90c2,	// (0x00084836) cell_cmail_l_pane_g1_ParamLimits

0x90c2,	// (0x00084836) cell_cmail_l_pane_g1

0x90d3,	// (0x00084847) cell_cmail_l_pane_t1_ParamLimits

0x90d3,	// (0x00084847) cell_cmail_l_pane_t1

0xe61e,	// (0x00089d92) cell_cmail_l_pane_t2_ParamLimits

0xe61e,	// (0x00089d92) cell_cmail_l_pane_t2

0x0001,

0xfcb4,	// (0x0008b428) cell_cmail_l_pane_t_ParamLimits

0xfcb4,	// (0x0008b428) cell_cmail_l_pane_t

0xaa03,	// (0x00086177) grid_highlight_pane_cp018_ParamLimits

0xaa03,	// (0x00086177) grid_highlight_pane_cp018

0x1fe7,	// (0x0007d75b) main2_pane_ParamLimits

0x1fe7,	// (0x0007d75b) main2_pane

0xa797,	// (0x00085f0b) popup_sp_fs_action_menu_bg_pane_g1

0xa79f,	// (0x00085f13) popup_sp_fs_action_menu_bg_pane_g2

0xa7a7,	// (0x00085f1b) popup_sp_fs_action_menu_bg_pane_g3

0xa7af,	// (0x00085f23) popup_sp_fs_action_menu_bg_pane_g4

0xa807,	// (0x00085f7b) popup_sp_fs_action_menu_bg_pane_g5

0xa80f,	// (0x00085f83) popup_sp_fs_action_menu_bg_pane_g6

0xa817,	// (0x00085f8b) popup_sp_fs_action_menu_bg_pane_g7

0xa81f,	// (0x00085f93) popup_sp_fs_action_menu_bg_pane_g8

0xa827,	// (0x00085f9b) popup_sp_fs_action_menu_bg_pane_g9

0xa82f,	// (0x00085fa3) popup_sp_fs_action_menu_bg_pane_g10

0xa82f,	// (0x00085fa3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008a8fe) popup_sp_fs_action_menu_bg_pane_g

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g3_g1

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t3_g3_g2

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008a9ac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008a9ac) list_medium_line_x2_t3_g3_g

0x0ce4,	// (0x0007c458) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ce4,	// (0x0007c458) list_medium_line_x2_t3_g3_t1

0x0cf9,	// (0x0007c46d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0cf9,	// (0x0007c46d) list_medium_line_x2_t3_g3_t2

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008a9b3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008a9b3) list_medium_line_x2_t3_g3_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g2_g1

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008a9ba) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008a9ba) list_medium_line_x2_t3_g2_g

0x0d20,	// (0x0007c494) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d20,	// (0x0007c494) list_medium_line_x2_t3_g2_t1

0x0d36,	// (0x0007c4aa) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d36,	// (0x0007c4aa) list_medium_line_x2_t3_g2_t2

0x0d48,	// (0x0007c4bc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d48,	// (0x0007c4bc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008a9bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008a9bf) list_medium_line_x2_t3_g2_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t4_g4_g1

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t4_g4_g2

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t4_g4_g3

0x0d66,	// (0x0007c4da) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d66,	// (0x0007c4da) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008a9c6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008a9c6) list_medium_line_x2_t4_g4_g

0x0d72,	// (0x0007c4e6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d72,	// (0x0007c4e6) list_medium_line_x2_t4_g4_t1

0x0d89,	// (0x0007c4fd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d89,	// (0x0007c4fd) list_medium_line_x2_t4_g4_t2

0x0d9e,	// (0x0007c512) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d9e,	// (0x0007c512) list_medium_line_x2_t4_g4_t3

0x0db0,	// (0x0007c524) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0db0,	// (0x0007c524) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008a9cf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008a9cf) list_medium_line_x2_t4_g4_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g4_g1

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t2_g4_g2

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t2_g4_g3

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008aa36) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008aa36) list_medium_line_x2_t2_g4_g

0x0dc2,	// (0x0007c536) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0dc2,	// (0x0007c536) list_medium_line_x2_t2_g4_t1

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008aa3f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008aa3f) list_medium_line_x2_t2_g4_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g3_g1

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t2_g3_g2

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008a9ac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008a9ac) list_medium_line_x2_t2_g3_g

0x0dd7,	// (0x0007c54b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0dd7,	// (0x0007c54b) list_medium_line_x2_t2_g3_t1

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008aa44) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008aa44) list_medium_line_x2_t2_g3_t

0x42bc,	// (0x0007fa30) main_sp_fs_list_pane_ParamLimits

0x42bc,	// (0x0007fa30) main_sp_fs_list_pane

0x42c8,	// (0x0007fa3c) sp_fs_scroll_pane_ParamLimits

0x42c8,	// (0x0007fa3c) sp_fs_scroll_pane

0x0e06,	// (0x0007c57a) list_medium_line_x2_t3_t1

0x0e16,	// (0x0007c58a) list_medium_line_x2_t3_t2

0x0e24,	// (0x0007c598) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008aa8f) list_medium_line_x2_t3_t

0x0e32,	// (0x0007c5a6) list_medium_line_x3_t4_t1

0x0e42,	// (0x0007c5b6) list_medium_line_x3_t4_t2

0x0e50,	// (0x0007c5c4) list_medium_line_x3_t4_t3

0x0e24,	// (0x0007c598) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008aa96) list_medium_line_x3_t4_t

0x0e5e,	// (0x0007c5d2) list_medium_line_x4_t5_t1

0x0e6e,	// (0x0007c5e2) list_medium_line_x4_t5_t2

0x0e50,	// (0x0007c5c4) list_medium_line_x4_t5_t3

0x0e7c,	// (0x0007c5f0) list_medium_line_x4_t5_t4

0x0e24,	// (0x0007c598) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008aa9f) list_medium_line_x4_t5_t

0x0ccc,	// (0x0007c440) list_medium_line_t4_g4_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_t4_g4_g1

0x0d66,	// (0x0007c4da) list_medium_line_t4_g4_g2_ParamLimits

0x0d66,	// (0x0007c4da) list_medium_line_t4_g4_g2

0x0e8a,	// (0x0007c5fe) list_medium_line_t4_g4_g3_ParamLimits

0x0e8a,	// (0x0007c5fe) list_medium_line_t4_g4_g3

0x0cd8,	// (0x0007c44c) list_medium_line_t4_g4_g4_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008aaaa) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008aaaa) list_medium_line_t4_g4_g

0x0e96,	// (0x0007c60a) list_medium_line_t4_g4_t1_ParamLimits

0x0e96,	// (0x0007c60a) list_medium_line_t4_g4_t1

0x0eab,	// (0x0007c61f) list_medium_line_t4_g4_t2_ParamLimits

0x0eab,	// (0x0007c61f) list_medium_line_t4_g4_t2

0x0ec1,	// (0x0007c635) list_medium_line_t4_g4_t3_ParamLimits

0x0ec1,	// (0x0007c635) list_medium_line_t4_g4_t3

0x0d0b,	// (0x0007c47f) list_medium_line_t4_g4_t4_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008aab3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008aab3) list_medium_line_t4_g4_t

0x43bf,	// (0x0007fb33) chi_dic_find_pane_g1

0x5234,	// (0x000809a8) main_tport_pane

0x112a,	// (0x0007c89e) list_medium_line_plain_t1

0x1138,	// (0x0007c8ac) list_medium_line_t2_g2_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t2_g2_g1

0x7cf9,	// (0x0008346d) list_medium_line_t2_g2_g2_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0008b174) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0008b174) list_medium_line_t2_g2_g

0x1144,	// (0x0007c8b8) list_medium_line_t2_g2_t1_ParamLimits

0x1144,	// (0x0007c8b8) list_medium_line_t2_g2_t1

0x115b,	// (0x0007c8cf) list_medium_line_t2_g2_t2_ParamLimits

0x115b,	// (0x0007c8cf) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0008b179) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0008b179) list_medium_line_t2_g2_t

0x1307,	// (0x0007ca7b) aid_sp_fs_list_icon_a_sm

0x828d,	// (0x00083a01) aid_sp_fs_list_icon_d

0xaa11,	// (0x00086185) aid_sp_fs_text_primary

0x8295,	// (0x00083a09) aid_sp_fs_text_secondary

0x829e,	// (0x00083a12) list_medium_line

0x829e,	// (0x00083a12) list_medium_line_g2

0x829e,	// (0x00083a12) list_medium_line_g3

0x829e,	// (0x00083a12) list_medium_line_plain

0x829e,	// (0x00083a12) list_medium_line_plain_t2

0x829e,	// (0x00083a12) list_medium_line_plain_t3

0x829e,	// (0x00083a12) list_medium_line_right_icon

0x829e,	// (0x00083a12) list_medium_line_right_iconx2

0x829e,	// (0x00083a12) list_medium_line_t2

0x829e,	// (0x00083a12) list_medium_line_t2_g2

0x829e,	// (0x00083a12) list_medium_line_t2_g3

0x829e,	// (0x00083a12) list_medium_line_t2_right_icon

0x829e,	// (0x00083a12) list_medium_line_t2_right_iconx2

0x829e,	// (0x00083a12) list_medium_line_t3

0x829e,	// (0x00083a12) list_medium_line_t3_g2

0x829e,	// (0x00083a12) list_medium_line_t3_g3

0x829e,	// (0x00083a12) list_medium_line_t3_right_iconx2

0x82a7,	// (0x00083a1b) list_medium_line_t4_g4

0x82b0,	// (0x00083a24) list_medium_line_x2

0x82b0,	// (0x00083a24) list_medium_line_x2_t2_g2

0x82b0,	// (0x00083a24) list_medium_line_x2_t2_g3

0x82b0,	// (0x00083a24) list_medium_line_x2_t2_g4

0x82b0,	// (0x00083a24) list_medium_line_x2_t3

0x82b0,	// (0x00083a24) list_medium_line_x2_t3_g2

0x82b0,	// (0x00083a24) list_medium_line_x2_t3_g3

0x82b0,	// (0x00083a24) list_medium_line_x2_t3_g4

0x82b0,	// (0x00083a24) list_medium_line_x2_t4_g2

0x82b0,	// (0x00083a24) list_medium_line_x2_t4_g4

0x82b9,	// (0x00083a2d) list_medium_line_x3

0x82b9,	// (0x00083a2d) list_medium_line_x3_t4

0x82b9,	// (0x00083a2d) list_medium_line_x3_t4_g4

0x82a7,	// (0x00083a1b) list_medium_line_x4_t4

0x82a7,	// (0x00083a1b) list_medium_line_x4_t4_g7

0x82a7,	// (0x00083a1b) list_medium_line_x4_t5

0x130f,	// (0x0007ca83) list_single_fs_dyc_pane_ParamLimits

0x130f,	// (0x0007ca83) list_single_fs_dyc_pane

0x0ccc,	// (0x0007c440) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x4_t4_g7_g1

0x1323,	// (0x0007ca97) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1323,	// (0x0007ca97) list_medium_line_x4_t4_g7_g2

0x89f7,	// (0x0008416b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x89f7,	// (0x0008416b) list_medium_line_x4_t4_g7_g3

0x8a06,	// (0x0008417a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8a06,	// (0x0008417a) list_medium_line_x4_t4_g7_g4

0x132f,	// (0x0007caa3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x132f,	// (0x0007caa3) list_medium_line_x4_t4_g7_g5

0x133e,	// (0x0007cab2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x133e,	// (0x0007cab2) list_medium_line_x4_t4_g7_g6

0x134d,	// (0x0007cac1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x134d,	// (0x0007cac1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0008b344) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0008b344) list_medium_line_x4_t4_g7_g

0x1359,	// (0x0007cacd) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1359,	// (0x0007cacd) list_medium_line_x4_t4_g7_t1

0x136e,	// (0x0007cae2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x136e,	// (0x0007cae2) list_medium_line_x4_t4_g7_t2

0x1383,	// (0x0007caf7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1383,	// (0x0007caf7) list_medium_line_x4_t4_g7_t3

0x1398,	// (0x0007cb0c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1398,	// (0x0007cb0c) list_medium_line_x4_t4_g7_t4

0x13aa,	// (0x0007cb1e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x13aa,	// (0x0007cb1e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0008b353) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0008b353) list_medium_line_x4_t4_g7_t

0x13bc,	// (0x0007cb30) list_single_dyc_row_pane_ParamLimits

0x13bc,	// (0x0007cb30) list_single_dyc_row_pane

0x903e,	// (0x000847b2) call5_gesture_pane_ParamLimits

0x903e,	// (0x000847b2) call5_gesture_pane

0x9072,	// (0x000847e6) call5_windows_pane_ParamLimits

0x9072,	// (0x000847e6) call5_windows_pane

0x90e9,	// (0x0008485d) call5_swipe_1_pane_cp_ParamLimits

0x90e9,	// (0x0008485d) call5_swipe_1_pane_cp

0x90f5,	// (0x00084869) call5_swipe_2_pane_cp_ParamLimits

0x90f5,	// (0x00084869) call5_swipe_2_pane_cp

0xa90a,	// (0x0008607e) call5_image_pane_cp

0x9101,	// (0x00084875) popup_call5_audio_first_window_cp_ParamLimits

0x9101,	// (0x00084875) popup_call5_audio_first_window_cp

0xe5f0,	// (0x00089d64) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5f0,	// (0x00089d64) call5_swipe_1_pane_g1_cp

0xe630,	// (0x00089da4) call5_swipe_1_pane_g2_cp

0xe609,	// (0x00089d7d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe609,	// (0x00089d7d) call5_swipe_1_pane_t1_cp

0xe5f0,	// (0x00089d64) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5f0,	// (0x00089d64) call5_swipe_2_pane_g1_cp

0xe638,	// (0x00089dac) call5_swipe_2_pane_g2_cp

0xe640,	// (0x00089db4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe640,	// (0x00089db4) call5_swipe_2_pane_t1_cp

0xaa03,	// (0x00086177) main_sp_fs_email_pane

0xe655,	// (0x00089dc9) main_sp_fs_listscroll_pane_te

0xa7c5,	// (0x00085f39) popup_sp_fs_action_menu_pane_ParamLimits

0xa7c5,	// (0x00085f39) popup_sp_fs_action_menu_pane

0xcbb8,	// (0x0008832c) bg_sp_fs_ctrlbar_pane_g1

0xe65e,	// (0x00089dd2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe667,	// (0x00089ddb) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe670,	// (0x00089de4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbb8,	// (0x0008832c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb9,	// (0x0008b42d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc99b,	// (0x0008810f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc99b,	// (0x0008810f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe679,	// (0x00089ded) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe679,	// (0x00089ded) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe685,	// (0x00089df9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe685,	// (0x00089df9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc2,	// (0x0008b436) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc2,	// (0x0008b436) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe691,	// (0x00089e05) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe691,	// (0x00089e05) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x910f,	// (0x00084883) list_medium_line_t2_right_icon_g1

0x142c,	// (0x0007cba0) list_medium_line_t2_right_icon_t1

0x143c,	// (0x0007cbb0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc7,	// (0x0008b43b) list_medium_line_t2_right_icon_t

0xc7ae,	// (0x00087f22) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7ae,	// (0x00087f22) bg_sp_fs_ctrlbar_pane

0x916e,	// (0x000848e2) main_sp_fs_ctrlbar_button_pane_cp01

0x9176,	// (0x000848ea) main_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x00089e57) main_sp_fs_ctrlbar_pane_g1

0xe6ef,	// (0x00089e63) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfccc,	// (0x0008b440) main_sp_fs_ctrlbar_pane_g

0xe6fb,	// (0x00089e6f) main_sp_fs_ctrlbar_pane_t1

0x9180,	// (0x000848f4) main_sp_fs_ctrlbar_pane

0x9196,	// (0x0008490a) main_sp_fs_listscroll_pane_te_cp01

0x144a,	// (0x0007cbbe) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x144a,	// (0x0007cbbe) popup_sp_fs_action_menu_pane_cp01

0xaa03,	// (0x00086177) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaa03,	// (0x00086177) bg_sp_fs_highlight_list_pane_cp01

0x1474,	// (0x0007cbe8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1474,	// (0x0007cbe8) sp_fs_action_menu_list_gene_pane_g1

0xe72b,	// (0x00089e9f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe72b,	// (0x00089e9f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd6,	// (0x0008b44a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd6,	// (0x0008b44a) sp_fs_action_menu_list_gene_pane_g

0x1483,	// (0x0007cbf7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1483,	// (0x0007cbf7) sp_fs_action_menu_list_gene_pane_t1

0x149b,	// (0x0007cc0f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x149b,	// (0x0007cc0f) sp_fs_action_menu_list_gene_pane

0xe738,	// (0x00089eac) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe738,	// (0x00089eac) popup_sp_fs_action_menu_bg_pane

0x14ba,	// (0x0007cc2e) sp_fs_action_menu_list_pane_ParamLimits

0x14ba,	// (0x0007cc2e) sp_fs_action_menu_list_pane

0x91a7,	// (0x0008491b) sp_fs_scroll_pane_cp01_ParamLimits

0x91a7,	// (0x0008491b) sp_fs_scroll_pane_cp01

0x14da,	// (0x0007cc4e) list_medium_line_plain_t2_t1

0x14ea,	// (0x0007cc5e) list_medium_line_plain_t2_t2

0x0001,

0xfcdb,	// (0x0008b44f) list_medium_line_plain_t2_t

0x14f8,	// (0x0007cc6c) list_medium_line_plain_t3_t1

0x1508,	// (0x0007cc7c) list_medium_line_plain_t3_t2

0x1516,	// (0x0007cc8a) list_medium_line_plain_t3_t3

0x0002,

0xfce0,	// (0x0008b454) list_medium_line_plain_t3_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t2_g2_g1

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008a9ba) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008a9ba) list_medium_line_x2_t2_g2_g

0x0e96,	// (0x0007c60a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0e96,	// (0x0007c60a) list_medium_line_x2_t2_g2_t1

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce7,	// (0x0008b45b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce7,	// (0x0008b45b) list_medium_line_x2_t2_g2_t

0x0ccc,	// (0x0007c440) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t4_g2_g1

0x1524,	// (0x0007cc98) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1524,	// (0x0007cc98) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcec,	// (0x0008b460) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcec,	// (0x0008b460) list_medium_line_x2_t4_g2_g

0x1536,	// (0x0007ccaa) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1536,	// (0x0007ccaa) list_medium_line_x2_t4_g2_t1

0x1550,	// (0x0007ccc4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1550,	// (0x0007ccc4) list_medium_line_x2_t4_g2_t2

0x1565,	// (0x0007ccd9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1565,	// (0x0007ccd9) list_medium_line_x2_t4_g2_t3

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf1,	// (0x0008b465) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf1,	// (0x0008b465) list_medium_line_x2_t4_g2_t

0x91cd,	// (0x00084941) list_medium_line_t3_right_iconx2_g1

0x910f,	// (0x00084883) list_medium_line_t3_right_iconx2_g2

0x157a,	// (0x0007ccee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfa,	// (0x0008b46e) list_medium_line_t3_right_iconx2_g

0x1582,	// (0x0007ccf6) list_medium_line_t3_right_iconx2_t1

0x1592,	// (0x0007cd06) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd01,	// (0x0008b475) list_medium_line_t3_right_iconx2_t

0x0ccc,	// (0x0007c440) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x3_t4_g4_g1

0x2f58,	// (0x0007e6cc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x3_t4_g4_g2

0x0d66,	// (0x0007c4da) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d66,	// (0x0007c4da) list_medium_line_x3_t4_g4_g3

0x91d5,	// (0x00084949) list_medium_line_x3_t4_g4_g4_ParamLimits

0x91d5,	// (0x00084949) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd06,	// (0x0008b47a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd06,	// (0x0008b47a) list_medium_line_x3_t4_g4_g

0x15a0,	// (0x0007cd14) list_medium_line_x3_t4_g4_t1_ParamLimits

0x15a0,	// (0x0007cd14) list_medium_line_x3_t4_g4_t1

0x15b7,	// (0x0007cd2b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x15b7,	// (0x0007cd2b) list_medium_line_x3_t4_g4_t2

0x15cc,	// (0x0007cd40) list_medium_line_x3_t4_g4_t3_ParamLimits

0x15cc,	// (0x0007cd40) list_medium_line_x3_t4_g4_t3

0x15e1,	// (0x0007cd55) list_medium_line_x3_t4_g4_t4_ParamLimits

0x15e1,	// (0x0007cd55) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0f,	// (0x0008b483) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0f,	// (0x0008b483) list_medium_line_x3_t4_g4_t

0x15fe,	// (0x0007cd72) list_single_dyc_row_text_pane_t1_ParamLimits

0x15fe,	// (0x0007cd72) list_single_dyc_row_text_pane_t1

0x1635,	// (0x0007cda9) list_single_dyc_row_text_pane_t2_ParamLimits

0x1635,	// (0x0007cda9) list_single_dyc_row_text_pane_t2

0x16ab,	// (0x0007ce1f) list_single_dyc_row_text_pane_t3_ParamLimits

0x16ab,	// (0x0007ce1f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd18,	// (0x0008b48c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd18,	// (0x0008b48c) list_single_dyc_row_text_pane_t

0x177c,	// (0x0007cef0) list_single_dyc_row_pane_g1_ParamLimits

0x177c,	// (0x0007cef0) list_single_dyc_row_pane_g1

0x1788,	// (0x0007cefc) list_single_dyc_row_pane_g2_ParamLimits

0x1788,	// (0x0007cefc) list_single_dyc_row_pane_g2

0x1794,	// (0x0007cf08) list_single_dyc_row_pane_g3_ParamLimits

0x1794,	// (0x0007cf08) list_single_dyc_row_pane_g3

0x17a0,	// (0x0007cf14) list_single_dyc_row_pane_g4_ParamLimits

0x17a0,	// (0x0007cf14) list_single_dyc_row_pane_g4

0x0003,

0xfd25,	// (0x0008b499) list_single_dyc_row_pane_g_ParamLimits

0xfd25,	// (0x0008b499) list_single_dyc_row_pane_g

0x17ac,	// (0x0007cf20) list_single_dyc_row_text_pane_ParamLimits

0x17ac,	// (0x0007cf20) list_single_dyc_row_text_pane

0x9f90,	// (0x00085704) bg_sp_fs_scroll_pane

0xe746,	// (0x00089eba) thumb_sp_fs_scroll_pane

0x1138,	// (0x0007c8ac) list_medium_line_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_g1

0x17cb,	// (0x0007cf3f) list_medium_line_t1_ParamLimits

0x17cb,	// (0x0007cf3f) list_medium_line_t1

0x0ccc,	// (0x0007c440) list_medium_line_x2_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_g1

0x2f58,	// (0x0007e6cc) list_medium_line_x2_g2_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_g2

0x0001,

0xfd2e,	// (0x0008b4a2) list_medium_line_x2_g_ParamLimits

0xfd2e,	// (0x0008b4a2) list_medium_line_x2_g

0x17e0,	// (0x0007cf54) list_medium_line_x2_t1_ParamLimits

0x17e0,	// (0x0007cf54) list_medium_line_x2_t1

0x0ccc,	// (0x0007c440) list_medium_line_x3_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x3_g1

0x2f58,	// (0x0007e6cc) list_medium_line_x3_g2_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x3_g2

0x0001,

0xfd2e,	// (0x0008b4a2) list_medium_line_x3_g_ParamLimits

0xfd2e,	// (0x0008b4a2) list_medium_line_x3_g

0x17e0,	// (0x0007cf54) list_medium_line_x3_t1_ParamLimits

0x17e0,	// (0x0007cf54) list_medium_line_x3_t1

0xe74f,	// (0x00089ec3) thumb_sp_fs_scroll_pane_g1

0xe758,	// (0x00089ecc) thumb_sp_fs_scroll_pane_g2

0xe761,	// (0x00089ed5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd33,	// (0x0008b4a7) thumb_sp_fs_scroll_pane_g

0xe74f,	// (0x00089ec3) bg_sp_fs_scroll_pane_g1

0xe758,	// (0x00089ecc) bg_sp_fs_scroll_pane_g2

0xe761,	// (0x00089ed5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd33,	// (0x0008b4a7) bg_sp_fs_scroll_pane_g

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ccc,	// (0x0007c440) list_medium_line_x2_t3_g4_g1

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2f64,	// (0x0007e6d8) list_medium_line_x2_t3_g4_g2

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2f58,	// (0x0007e6cc) list_medium_line_x2_t3_g4_g3

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cd8,	// (0x0007c44c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008aa36) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008aa36) list_medium_line_x2_t3_g4_g

0x17f6,	// (0x0007cf6a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17f6,	// (0x0007cf6a) list_medium_line_x2_t3_g4_t1

0x180c,	// (0x0007cf80) list_medium_line_x2_t3_g4_t2_ParamLimits

0x180c,	// (0x0007cf80) list_medium_line_x2_t3_g4_t2

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d0b,	// (0x0007c47f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3a,	// (0x0008b4ae) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3a,	// (0x0008b4ae) list_medium_line_x2_t3_g4_t

0x1138,	// (0x0007c8ac) list_medium_line_g2_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_g2_g1

0x7cf9,	// (0x0008346d) list_medium_line_g2_g2_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0008b174) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0008b174) list_medium_line_g2_g

0x1825,	// (0x0007cf99) list_medium_line_g2_t1_ParamLimits

0x1825,	// (0x0007cf99) list_medium_line_g2_t1

0x1138,	// (0x0007c8ac) list_medium_line_t3_g2_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t3_g2_g1

0x7cf9,	// (0x0008346d) list_medium_line_t3_g2_g2_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0008b174) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0008b174) list_medium_line_t3_g2_g

0x183a,	// (0x0007cfae) list_medium_line_t3_g2_t1_ParamLimits

0x183a,	// (0x0007cfae) list_medium_line_t3_g2_t1

0x1851,	// (0x0007cfc5) list_medium_line_t3_g2_t2_ParamLimits

0x1851,	// (0x0007cfc5) list_medium_line_t3_g2_t2

0x1866,	// (0x0007cfda) list_medium_line_t3_g2_t3_ParamLimits

0x1866,	// (0x0007cfda) list_medium_line_t3_g2_t3

0x0002,

0xfd41,	// (0x0008b4b5) list_medium_line_t3_g2_t_ParamLimits

0xfd41,	// (0x0008b4b5) list_medium_line_t3_g2_t

0x910f,	// (0x00084883) list_medium_line_right_icon_g1

0x187b,	// (0x0007cfef) list_medium_line_right_icon_t1

0x1138,	// (0x0007c8ac) list_medium_line_t2_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t2_g1

0x1889,	// (0x0007cffd) list_medium_line_t2_t1_ParamLimits

0x1889,	// (0x0007cffd) list_medium_line_t2_t1

0x18a3,	// (0x0007d017) list_medium_line_t2_t2_ParamLimits

0x18a3,	// (0x0007d017) list_medium_line_t2_t2

0x0001,

0xfd48,	// (0x0008b4bc) list_medium_line_t2_t_ParamLimits

0xfd48,	// (0x0008b4bc) list_medium_line_t2_t

0x1138,	// (0x0007c8ac) list_medium_line_t3_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t3_g1

0x18b8,	// (0x0007d02c) list_medium_line_t3_t1_ParamLimits

0x18b8,	// (0x0007d02c) list_medium_line_t3_t1

0x18d2,	// (0x0007d046) list_medium_line_t3_t2_ParamLimits

0x18d2,	// (0x0007d046) list_medium_line_t3_t2

0x18e7,	// (0x0007d05b) list_medium_line_t3_t3_ParamLimits

0x18e7,	// (0x0007d05b) list_medium_line_t3_t3

0x0002,

0xfd4d,	// (0x0008b4c1) list_medium_line_t3_t_ParamLimits

0xfd4d,	// (0x0008b4c1) list_medium_line_t3_t

0x1138,	// (0x0007c8ac) list_medium_line_g3_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_g3_g1

0x91e1,	// (0x00084955) list_medium_line_g3_g2_ParamLimits

0x91e1,	// (0x00084955) list_medium_line_g3_g2

0x7cf9,	// (0x0008346d) list_medium_line_g3_g3_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_g3_g3

0x0002,

0xfd54,	// (0x0008b4c8) list_medium_line_g3_g_ParamLimits

0xfd54,	// (0x0008b4c8) list_medium_line_g3_g

0x18fc,	// (0x0007d070) list_medium_line_g3_t1_ParamLimits

0x18fc,	// (0x0007d070) list_medium_line_g3_t1

0x1138,	// (0x0007c8ac) list_medium_line_t2_g3_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t2_g3_g1

0x91e1,	// (0x00084955) list_medium_line_t2_g3_g2_ParamLimits

0x91e1,	// (0x00084955) list_medium_line_t2_g3_g2

0x7cf9,	// (0x0008346d) list_medium_line_t2_g3_g3_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_t2_g3_g3

0x0002,

0xfd54,	// (0x0008b4c8) list_medium_line_t2_g3_g_ParamLimits

0xfd54,	// (0x0008b4c8) list_medium_line_t2_g3_g

0x1911,	// (0x0007d085) list_medium_line_t2_g3_t1_ParamLimits

0x1911,	// (0x0007d085) list_medium_line_t2_g3_t1

0x192b,	// (0x0007d09f) list_medium_line_t2_g3_t2_ParamLimits

0x192b,	// (0x0007d09f) list_medium_line_t2_g3_t2

0x0001,

0xfd5b,	// (0x0008b4cf) list_medium_line_t2_g3_t_ParamLimits

0xfd5b,	// (0x0008b4cf) list_medium_line_t2_g3_t

0x1138,	// (0x0007c8ac) list_medium_line_t3_g3_g1_ParamLimits

0x1138,	// (0x0007c8ac) list_medium_line_t3_g3_g1

0x91e1,	// (0x00084955) list_medium_line_t3_g3_g2_ParamLimits

0x91e1,	// (0x00084955) list_medium_line_t3_g3_g2

0x7cf9,	// (0x0008346d) list_medium_line_t3_g3_g3_ParamLimits

0x7cf9,	// (0x0008346d) list_medium_line_t3_g3_g3

0x0002,

0xfd54,	// (0x0008b4c8) list_medium_line_t3_g3_g_ParamLimits

0xfd54,	// (0x0008b4c8) list_medium_line_t3_g3_g

0x1940,	// (0x0007d0b4) list_medium_line_t3_g3_t1_ParamLimits

0x1940,	// (0x0007d0b4) list_medium_line_t3_g3_t1

0x1959,	// (0x0007d0cd) list_medium_line_t3_g3_t2_ParamLimits

0x1959,	// (0x0007d0cd) list_medium_line_t3_g3_t2

0x196f,	// (0x0007d0e3) list_medium_line_t3_g3_t3_ParamLimits

0x196f,	// (0x0007d0e3) list_medium_line_t3_g3_t3

0x0002,

0xfd60,	// (0x0008b4d4) list_medium_line_t3_g3_t_ParamLimits

0xfd60,	// (0x0008b4d4) list_medium_line_t3_g3_t

0x91cd,	// (0x00084941) list_medium_line_right_iconx2_g1

0x910f,	// (0x00084883) list_medium_line_right_iconx2_g2

0x0001,

0xfd67,	// (0x0008b4db) list_medium_line_right_iconx2_g

0x91ed,	// (0x00084961) list_medium_line_right_iconx2_t1

0x91cd,	// (0x00084941) list_medium_line_t2_right_iconx2_g1

0x910f,	// (0x00084883) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd67,	// (0x0008b4db) list_medium_line_t2_right_iconx2_g

0x1985,	// (0x0007d0f9) list_medium_line_t2_right_iconx2_t1

0x1995,	// (0x0007d109) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6c,	// (0x0008b4e0) list_medium_line_t2_right_iconx2_t

0x19a3,	// (0x0007d117) list_medium_line_x4_t4_t1

0x19b1,	// (0x0007d125) list_medium_line_x4_t4_t2

0x19c1,	// (0x0007d135) list_medium_line_x4_t4_t3

0x19d1,	// (0x0007d145) list_medium_line_x4_t4_t4

0x0003,

0xfd71,	// (0x0008b4e5) list_medium_line_x4_t4_t

0x9225,	// (0x00084999) tport_appsw_pane_ParamLimits

0x9225,	// (0x00084999) tport_appsw_pane

0x9233,	// (0x000849a7) tport_contact_pane_ParamLimits

0x9233,	// (0x000849a7) tport_contact_pane

0x9243,	// (0x000849b7) tport_listscroll_pane_ParamLimits

0x9243,	// (0x000849b7) tport_listscroll_pane

0x9253,	// (0x000849c7) cell_tport_appsw_pane_ParamLimits

0x9253,	// (0x000849c7) cell_tport_appsw_pane

0xce89,	// (0x000885fd) tport_appsw_pane_g1_ParamLimits

0xce89,	// (0x000885fd) tport_appsw_pane_g1

0xe76a,	// (0x00089ede) tport_contact_pane_g1

0xe0ea,	// (0x0008985e) tport_contact_pane_t1

0xe773,	// (0x00089ee7) tport_contact_pane_t2

0x0001,

0xfd7a,	// (0x0008b4ee) tport_contact_pane_t

0xe79c,	// (0x00089f10) list_tport_pane

0xe7a5,	// (0x00089f19) scroll_pane_cp_030

0x9286,	// (0x000849fa) cell_tport_appsw_pane_g1

0x9296,	// (0x00084a0a) cell_tport_appsw_pane_t1

0x92a4,	// (0x00084a18) grid_highlight_pane_cp019

0x92ac,	// (0x00084a20) list_tport_double_graphic_pane_ParamLimits

0x92ac,	// (0x00084a20) list_tport_double_graphic_pane

0xaa03,	// (0x00086177) list_highlight_pane_cp023_ParamLimits

0xaa03,	// (0x00086177) list_highlight_pane_cp023

0x92be,	// (0x00084a32) list_tport_double_graphic_pane_g1_ParamLimits

0x92be,	// (0x00084a32) list_tport_double_graphic_pane_g1

0x92cb,	// (0x00084a3f) list_tport_double_graphic_pane_t1_ParamLimits

0x92cb,	// (0x00084a3f) list_tport_double_graphic_pane_t1

0x92e0,	// (0x00084a54) list_tport_double_graphic_pane_t2_ParamLimits

0x92e0,	// (0x00084a54) list_tport_double_graphic_pane_t2

0x0001,

0xfd86,	// (0x0008b4fa) list_tport_double_graphic_pane_t_ParamLimits

0xfd86,	// (0x0008b4fa) list_tport_double_graphic_pane_t

0x9f90,	// (0x00085704) main_cale_note_pane

0x74fe,	// (0x00082c72) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x74fe,	// (0x00082c72) cell_vitu2_function_top_wide_pane_cp01

0x8d5e,	// (0x000844d2) wait_bar_pane_cp05_ParamLimits

0xaa03,	// (0x00086177) listscroll_cmail_pane

0xe7ae,	// (0x00089f22) list_cmail_pane

0x92f2,	// (0x00084a66) list_cmail_body_pane

0x9319,	// (0x00084a8d) list_single_cmail_header_caption_pane

0x934d,	// (0x00084ac1) list_single_cmail_header_detail_pane_ParamLimits

0x934d,	// (0x00084ac1) list_single_cmail_header_detail_pane

0xe7be,	// (0x00089f32) list_single_cmail_header_caption_pane_t1

0x19e1,	// (0x0007d155) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19e1,	// (0x0007d155) list_single_cmail_header_detail_pane_g1

0x9388,	// (0x00084afc) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9388,	// (0x00084afc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8b,	// (0x0008b4ff) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8b,	// (0x0008b4ff) list_single_cmail_header_detail_pane_g

0x19f7,	// (0x0007d16b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19f7,	// (0x0007d16b) list_single_cmail_header_detail_pane_t1

0x1a57,	// (0x0007d1cb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a57,	// (0x0007d1cb) list_single_cmail_header_editor_pane_bg

0xe7e2,	// (0x00089f56) list_cmail_body_pane_g1

0xe7eb,	// (0x00089f5f) list_cmail_body_pane_t1

0xd627,	// (0x00088d9b) list_single_cmail_header_editor_pane_bg_g1

0xab7a,	// (0x000862ee) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd637,	// (0x00088dab) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd62f,	// (0x00088da3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd84b,	// (0x00088fbf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd657,	// (0x00088dcb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd647,	// (0x00088dbb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd64f,	// (0x00088dc3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab5a,	// (0x000862ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9394,	// (0x00084b08) calenote_gesture_pane_ParamLimits

0x9394,	// (0x00084b08) calenote_gesture_pane

0x93ae,	// (0x00084b22) calenote_window_pane_ParamLimits

0x93ae,	// (0x00084b22) calenote_window_pane

0xe7f9,	// (0x00089f6d) popup_note_window_cp01

0x93c6,	// (0x00084b3a) calenote_swipe_1_pane_ParamLimits

0x93c6,	// (0x00084b3a) calenote_swipe_1_pane

0x90f5,	// (0x00084869) calenote_swipe_2_pane_ParamLimits

0x90f5,	// (0x00084869) calenote_swipe_2_pane

0xe5f0,	// (0x00089d64) calenote_swipe_1_pane_g1_ParamLimits

0xe5f0,	// (0x00089d64) calenote_swipe_1_pane_g1

0xe5fd,	// (0x00089d71) calenote_swipe_1_pane_g2_ParamLimits

0xe5fd,	// (0x00089d71) calenote_swipe_1_pane_g2

0x0001,

0xfcaf,	// (0x0008b423) calenote_swipe_1_pane_g_ParamLimits

0xfcaf,	// (0x0008b423) calenote_swipe_1_pane_g

0xe80b,	// (0x00089f7f) calenote_swipe_1_pane_t1_ParamLimits

0xe80b,	// (0x00089f7f) calenote_swipe_1_pane_t1

0xe5f0,	// (0x00089d64) calenote_swipe_2_pane_g1_ParamLimits

0xe5f0,	// (0x00089d64) calenote_swipe_2_pane_g1

0xe82a,	// (0x00089f9e) calenote_swipe_2_pane_g2_ParamLimits

0xe82a,	// (0x00089f9e) calenote_swipe_2_pane_g2

0x0001,

0xfd97,	// (0x0008b50b) calenote_swipe_2_pane_g_ParamLimits

0xfd97,	// (0x0008b50b) calenote_swipe_2_pane_g

0xe836,	// (0x00089faa) calenote_swipe_2_pane_t1_ParamLimits

0xe836,	// (0x00089faa) calenote_swipe_2_pane_t1

0x9f90,	// (0x00085704) main_mup_navstr_pane

0x6262,	// (0x000819d6) main_mup3_pane_t7_ParamLimits

0x6262,	// (0x000819d6) main_mup3_pane_t7

0x6c8c,	// (0x00082400) main_mp4_pane_g6_ParamLimits

0x6c8c,	// (0x00082400) main_mp4_pane_g6

0x6ffe,	// (0x00082772) main_image3_pane_t4_ParamLimits

0x6ffe,	// (0x00082772) main_image3_pane_t4

0x93d9,	// (0x00084b4d) popup_navstr_preview_pane_ParamLimits

0x93d9,	// (0x00084b4d) popup_navstr_preview_pane

0x93e5,	// (0x00084b59) scroll_navstr_pane_ParamLimits

0x93e5,	// (0x00084b59) scroll_navstr_pane

0x9f90,	// (0x00085704) bg_popup_preview_window_pane_cp04

0xe85d,	// (0x00089fd1) popup_navstr_preview_pane_t1

0x93f1,	// (0x00084b65) scroll_navstr_pane_g1_ParamLimits

0x93f1,	// (0x00084b65) scroll_navstr_pane_g1

0x93fe,	// (0x00084b72) scroll_navstr_pane_t1_ParamLimits

0x93fe,	// (0x00084b72) scroll_navstr_pane_t1

0xe802,	// (0x00089f76) bg_button_pane_cp014

0xe802,	// (0x00089f76) bg_button_pane_cp030

0x13e3,	// (0x0007cb57) list_double_fisheye_pane_g4_ParamLimits

0x13e3,	// (0x0007cb57) list_double_fisheye_pane_g4

0x902d,	// (0x000847a1) list_double_fisheye_pane_g5_ParamLimits

0x902d,	// (0x000847a1) list_double_fisheye_pane_g5

0xcd86,	// (0x000884fa) sp_fs_scroll_pane_cp03

0xe6e3,	// (0x00089e57) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6ef,	// (0x00089e63) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfccc,	// (0x0008b440) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6fb,	// (0x00089e6f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b6,	// (0x00089f2a) sp_fs_scroll_pane_cp02

0xa852,	// (0x00085fc6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa852,	// (0x00085fc6) popup_sp_fs_calendar_preview_list_single_pane

0x9f90,	// (0x00085704) main_cam6_pano_pane

0xaa03,	// (0x00086177) main_mup3_pane_ParamLimits

0x9f90,	// (0x00085704) main_phacti_pane

0x8c33,	// (0x000843a7) bg_button_pane_cp11

0x8c4b,	// (0x000843bf) main_mobtv_info_pane_g2_ParamLimits

0x8c4b,	// (0x000843bf) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0008b3b4) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0008b3b4) main_mobtv_info_pane_g

0x8dfd,	// (0x00084571) sc_clock_pane_t5_ParamLimits

0x8dfd,	// (0x00084571) sc_clock_pane_t5

0x8ea0,	// (0x00084614) main_radioblah_pane_g1_ParamLimits

0xe53c,	// (0x00089cb0) main_radioblah_pane_t3_ParamLimits

0xe53c,	// (0x00089cb0) main_radioblah_pane_t3

0xe554,	// (0x00089cc8) main_radioblah_pane_t4_ParamLimits

0xe554,	// (0x00089cc8) main_radioblah_pane_t4

0x8ebe,	// (0x00084632) main_radioblah_text_pane_ParamLimits

0x8ebe,	// (0x00084632) main_radioblah_text_pane

0x8ecb,	// (0x0008463f) main_radioblah_info_pane_g1_ParamLimits

0x8f60,	// (0x000846d4) main_radioblah_info_pane_t4_ParamLimits

0x8f60,	// (0x000846d4) main_radioblah_info_pane_t4

0xaa03,	// (0x00086177) main_sp_fs_calendar_pane

0x9410,	// (0x00084b84) main_phacti_pane_g1

0x9418,	// (0x00084b8c) phacti_note_pane_ParamLimits

0x9418,	// (0x00084b8c) phacti_note_pane

0xe874,	// (0x00089fe8) phacti_term_pane_ParamLimits

0xe874,	// (0x00089fe8) phacti_term_pane

0xe889,	// (0x00089ffd) phacti_note_pane_t1_ParamLimits

0xe889,	// (0x00089ffd) phacti_note_pane_t1

0x1a6e,	// (0x0007d1e2) phacti_term_pane_g1

0x1a76,	// (0x0007d1ea) phacti_term_pane_t1_ParamLimits

0x1a76,	// (0x0007d1ea) phacti_term_pane_t1

0xe8a0,	// (0x0008a014) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a8,	// (0x0008a01c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0afc,	// (0x0007c270) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b0,	// (0x0008a024) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b0,	// (0x0008a024) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c6,	// (0x0008a03a) aid_popup_sp_fs_bg_corner_pane

0xcbb8,	// (0x0008832c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9f90,	// (0x00085704) popup_sp_fs_calendar_preview_bg_pane

0x942e,	// (0x00084ba2) popup_sp_fs_calendar_preview_list_pane

0xc7ae,	// (0x00087f22) bg_main_sp_fs_cale_pane_ParamLimits

0xc7ae,	// (0x00087f22) bg_main_sp_fs_cale_pane

0x1aa0,	// (0x0007d214) listscroll_cale_mrui_pane_ParamLimits

0x1aa0,	// (0x0007d214) listscroll_cale_mrui_pane

0x1ab5,	// (0x0007d229) listscroll_sp_fs_schedule_track_pane

0x1abe,	// (0x0007d232) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1abe,	// (0x0007d232) main_sp_fs_ctrlbar_pane_cp01

0xe8ce,	// (0x0008a042) main_sp_fs_ribbon_pane

0x1ad1,	// (0x0007d245) popup_sp_fs_cale_preview_window

0x948c,	// (0x00084c00) list_single_sp_fs_schedule_track_pane_ParamLimits

0x948c,	// (0x00084c00) list_single_sp_fs_schedule_track_pane

0xe39e,	// (0x00089b12) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe39e,	// (0x00089b12) bg_sp_fs_highlight_list_pane_cp03

0x94ba,	// (0x00084c2e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94ba,	// (0x00084c2e) list_single_sp_fs_schedule_track_pane_g1

0x94c6,	// (0x00084c3a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94c6,	// (0x00084c3a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda1,	// (0x0008b515) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda1,	// (0x0008b515) list_single_sp_fs_schedule_track_pane_g

0x94d2,	// (0x00084c46) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94d2,	// (0x00084c46) list_single_sp_fs_schedule_track_pane_t1

0x94ea,	// (0x00084c5e) sp_fs_schedule_track_pane_ParamLimits

0x94ea,	// (0x00084c5e) sp_fs_schedule_track_pane

0xe8d6,	// (0x0008a04a) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x0008a052) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x0008a05a) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x0008a062) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x0008a06a) sp_fs_schedule_track_pane_g5

0x0004,

0x0b06,	// (0x0007c27a) sp_fs_schedule_track_pane_g

0xd627,	// (0x00088d9b) bg_sp_fs_schedule_viewer_highlight_g1

0xab7a,	// (0x000862ee) bg_sp_fs_schedule_viewer_highlight_g2

0xd62f,	// (0x00088da3) bg_sp_fs_schedule_viewer_highlight_g3

0xd637,	// (0x00088dab) bg_sp_fs_schedule_viewer_highlight_g4

0xd84b,	// (0x00088fbf) bg_sp_fs_schedule_viewer_highlight_g5

0xd647,	// (0x00088dbb) bg_sp_fs_schedule_viewer_highlight_g6

0xd64f,	// (0x00088dc3) bg_sp_fs_schedule_viewer_highlight_g7

0xd657,	// (0x00088dcb) bg_sp_fs_schedule_viewer_highlight_g8

0xab5a,	// (0x000862ce) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda6,	// (0x0008b51a) bg_sp_fs_schedule_viewer_highlight_g

0x9f90,	// (0x00085704) bg_main_sp_fs_ribbon_pane

0x94fa,	// (0x00084c6e) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x0008a072) main_sp_fs_ribbon_pane_t1

0x9503,	// (0x00084c77) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x0008a081) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb9,	// (0x0008b52d) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x0008a090) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x0008a098) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x0008a0a1) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x0008a0aa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b2b,	// (0x0007c29f) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x0008a0b2) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x0008a0bb) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x0008a0c4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b32,	// (0x0007c2a6) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x0008a0cd) list_cale_mrui_pane

0x9514,	// (0x00084c88) sp_fs_scroll_pane_cp07_ParamLimits

0x9514,	// (0x00084c88) sp_fs_scroll_pane_cp07

0x9530,	// (0x00084ca4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9530,	// (0x00084ca4) bg_sp_fs_schedule_viewer_highlight

0xe966,	// (0x0008a0da) list_single_sp_fs_schedule_track_pane_cp01

0xe96e,	// (0x0008a0e2) list_sp_fs_schedule_track_pane

0xe976,	// (0x0008a0ea) sp_fs_scroll_pane_cp06_ParamLimits

0xe976,	// (0x0008a0ea) sp_fs_scroll_pane_cp06

0xcbb8,	// (0x0008832c) bgmain_sp_fs_calendar_pane_g1

0x1ae3,	// (0x0007d257) list_single_cale_mrui_pane_ParamLimits

0x1ae3,	// (0x0007d257) list_single_cale_mrui_pane

0x1b14,	// (0x0007d288) list_single_cale_mrui_row_pane_ParamLimits

0x1b14,	// (0x0007d288) list_single_cale_mrui_row_pane

0x1b21,	// (0x0007d295) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b21,	// (0x0007d295) list_single_cale_mrui_row_pane_g1

0x1b59,	// (0x0007d2cd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b59,	// (0x0007d2cd) list_single_cale_mrui_row_pane_t1

0x1b6b,	// (0x0007d2df) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b6b,	// (0x0007d2df) list_single_cale_mrui_row_pane_t2

0x1bd1,	// (0x0007d345) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1bd1,	// (0x0007d345) list_single_cale_mrui_row_pane_t3

0x1c00,	// (0x0007d374) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c00,	// (0x0007d374) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdc7,	// (0x0008b53b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdc7,	// (0x0008b53b) list_single_cale_mrui_row_pane_t

0x1c2f,	// (0x0007d3a3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c2f,	// (0x0007d3a3) list_single_cmail_header_editor_pane_bg_cp01

0x1c51,	// (0x0007d3c5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c51,	// (0x0007d3c5) list_single_cmail_header_editor_pane_bg_cp02

0x953d,	// (0x00084cb1) main_radioblah_text_pane_t1_ParamLimits

0x953d,	// (0x00084cb1) main_radioblah_text_pane_t1

0xe995,	// (0x0008a109) cam6_indi_pane_cp01

0xe99d,	// (0x0008a111) cam6_mode_pane_cp01

0xe9a5,	// (0x0008a119) cam6_pano_pane

0xe9ae,	// (0x0008a122) cam6_zoom_pane_cp01

0xe9b6,	// (0x0008a12a) cam6_pano_image_pane

0xe9c1,	// (0x0008a135) cam6_pano_pane_g1

0xe291,	// (0x00089a05) cam6_pano_pane_g2

0xe9ca,	// (0x0008a13e) cam6_pano_pane_g3

0xe9d3,	// (0x0008a147) cam6_pano_pane_g4

0xd182,	// (0x000888f6) cam6_pano_pane_g5

0xe9dc,	// (0x0008a150) cam6_pano_pane_g6

0xe9e6,	// (0x0008a15a) cam6_pano_pane_g7

0xe9ee,	// (0x0008a162) cam6_pano_pane_g8

0xe9f7,	// (0x0008a16b) cam6_pano_pane_g9

0x0008,

0xfdd0,	// (0x0008b544) cam6_pano_pane_g

0x9f90,	// (0x00085704) main_browser_tag_pane

0xe855,	// (0x00089fc9) grid_navstr_albumart_pane

0xea02,	// (0x0008a176) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0008a176) cell_navstr_albumart_pane

0xb504,	// (0x00086c78) cell_navstr_albumart_pane_g1

0xc5bf,	// (0x00087d33) cell_navstr_albumart_pane_g2

0xc5cf,	// (0x00087d43) cell_navstr_albumart_pane_g3

0xc5c7,	// (0x00087d3b) cell_navstr_albumart_pane_g4

0x0003,

0xfde3,	// (0x0008b557) cell_navstr_albumart_pane_g

0x9558,	// (0x00084ccc) bt_list_pane_ParamLimits

0x9558,	// (0x00084ccc) bt_list_pane

0xea24,	// (0x0008a198) bt_list_pane_t1

0xea33,	// (0x0008a1a7) bt_list_pane_t2

0x0001,

0x0b65,	// (0x0007c2d9) bt_list_pane_t

0x9f90,	// (0x00085704) main_cale_prevew_pane

0x957c,	// (0x00084cf0) popup_cale_preview_window_ParamLimits

0x957c,	// (0x00084cf0) popup_cale_preview_window

0xaa03,	// (0x00086177) bg_popup_preview_window_pane_cp05_ParamLimits

0xaa03,	// (0x00086177) bg_popup_preview_window_pane_cp05

0xea42,	// (0x0008a1b6) list_cale_preview_pane_ParamLimits

0xea42,	// (0x0008a1b6) list_cale_preview_pane

0xea4e,	// (0x0008a1c2) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x0008a1c2) list_double_cale_preview_pane

0xea60,	// (0x0008a1d4) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x0008a1d4) list_single_cale_preview_pane

0xea74,	// (0x0008a1e8) list_single_cale_preview_pane_g1

0xea7c,	// (0x0008a1f0) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x0008a1f0) list_single_cale_preview_pane_t1

0xea91,	// (0x0008a205) list_double_cale_preview_pane_g1

0xea99,	// (0x0008a20d) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x0008a20d) list_double_cale_preview_pane_t1

0xeaae,	// (0x0008a222) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x0008a222) list_double_cale_preview_pane_t2

0x0001,

0x0b6a,	// (0x0007c2de) list_double_cale_preview_pane_t_ParamLimits

0x0b6a,	// (0x0007c2de) list_double_cale_preview_pane_t

0x9f90,	// (0x00085704) main_ezdial_pane

0xaa03,	// (0x00086177) main_sp_fs_email_pane_ParamLimits

0x9117,	// (0x0008488b) cmail_ddmenu_btn01_pane_ParamLimits

0x9117,	// (0x0008488b) cmail_ddmenu_btn01_pane

0x9134,	// (0x000848a8) cmail_ddmenu_btn02_pane_ParamLimits

0x9134,	// (0x000848a8) cmail_ddmenu_btn02_pane

0x9152,	// (0x000848c6) cmail_ddmenu_btn03_pane_ParamLimits

0x9152,	// (0x000848c6) cmail_ddmenu_btn03_pane

0x9180,	// (0x000848f4) main_sp_fs_ctrlbar_pane_ParamLimits

0x9196,	// (0x0008490a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x92f2,	// (0x00084a66) list_cmail_body_pane_ParamLimits

0xe7cc,	// (0x00089f40) bg_button_pane_cp12

0xe7d5,	// (0x00089f49) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d5,	// (0x00089f49) list_single_cmail_header_detail_pane_g3

0x1a33,	// (0x0007d1a7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a33,	// (0x0007d1a7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd92,	// (0x0008b506) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd92,	// (0x0008b506) list_single_cmail_header_detail_pane_t

0x1a8b,	// (0x0007d1ff) phacti_term_pane_t2_ParamLimits

0x1a8b,	// (0x0007d1ff) phacti_term_pane_t2

0x0001,

0xfd9c,	// (0x0008b510) phacti_term_pane_t_ParamLimits

0xfd9c,	// (0x0008b510) phacti_term_pane_t

0xeac6,	// (0x0008a23a) aid_size_list_single_double

0x9593,	// (0x00084d07) popup_ezdial_listscroll_window

0x95b6,	// (0x00084d2a) popup_number_entry_window_cp01

0xa90a,	// (0x0008607e) bg_popup_call_pane_cp09

0xead2,	// (0x0008a246) ezdial_list_pane

0xeada,	// (0x0008a24e) scroll_pane_cp23

0xc99b,	// (0x0008810f) bg_button_pane_cp028_ParamLimits

0xc99b,	// (0x0008810f) bg_button_pane_cp028

0x95c4,	// (0x00084d38) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x95c4,	// (0x00084d38) cmail_ddmenu_btn01_pane_g1

0x95d6,	// (0x00084d4a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x95d6,	// (0x00084d4a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdec,	// (0x0008b560) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdec,	// (0x0008b560) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x0008a256) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x0008a256) cmail_ddmenu_btn01_pane_t1

0xc7ae,	// (0x00087f22) bg_button_pane_cp029_ParamLimits

0xc7ae,	// (0x00087f22) bg_button_pane_cp029

0x95e2,	// (0x00084d56) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x95e2,	// (0x00084d56) cmail_ddmenu_btn02_pane_g1

0x95fa,	// (0x00084d6e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x95fa,	// (0x00084d6e) cmail_ddmenu_btn02_pane_t1

0xe39e,	// (0x00089b12) bg_button_pane_cp031_ParamLimits

0xe39e,	// (0x00089b12) bg_button_pane_cp031

0x95e2,	// (0x00084d56) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x95e2,	// (0x00084d56) cmail_ddmenu_btn03_pane_g1

0x95fa,	// (0x00084d6e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x95fa,	// (0x00084d6e) cmail_ddmenu_btn03_pane_t1

0x6ea9,	// (0x0008261d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6ec3,	// (0x00082637) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6ec3,	// (0x00082637) cell_dialer2_keypad_pane_t1_copy1

0x8ab8,	// (0x0008422c) ncimui_group_button_pane

0xaa03,	// (0x00086177) main_sp_fs_calendar_pane_ParamLimits

0x9319,	// (0x00084a8d) list_single_cmail_header_caption_pane_ParamLimits

0x9454,	// (0x00084bc8) aid_recal_txt_sm_pane

0x9f90,	// (0x00085704) mian_recal_day_pane

0x1ad1,	// (0x0007d245) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x0008a26b) list_recal_day_pane

0x1c88,	// (0x0007d3fc) list_single_recal_day_pane_ParamLimits

0x1c88,	// (0x0007d3fc) list_single_recal_day_pane

0xeb1e,	// (0x0008a292) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x0008a292) list_single_recal_day_pane_g1

0x1c9a,	// (0x0007d40e) list_single_recal_day_pane_g2_ParamLimits

0x1c9a,	// (0x0007d40e) list_single_recal_day_pane_g2

0x1caa,	// (0x0007d41e) list_single_recal_day_pane_g3_ParamLimits

0x1caa,	// (0x0007d41e) list_single_recal_day_pane_g3

0x1cb6,	// (0x0007d42a) list_single_recal_day_pane_g4_ParamLimits

0x1cb6,	// (0x0007d42a) list_single_recal_day_pane_g4

0x1ccc,	// (0x0007d440) list_single_recal_day_pane_g5_ParamLimits

0x1ccc,	// (0x0007d440) list_single_recal_day_pane_g5

0x1ce6,	// (0x0007d45a) list_single_recal_day_pane_g6_ParamLimits

0x1ce6,	// (0x0007d45a) list_single_recal_day_pane_g6

0x0004,

0xfdfb,	// (0x0008b56f) list_single_recal_day_pane_g_ParamLimits

0xfdfb,	// (0x0008b56f) list_single_recal_day_pane_g

0x1cfa,	// (0x0007d46e) list_single_recal_day_pane_t1

0x1d0c,	// (0x0007d480) list_single_recal_day_pane_t2

0x0001,

0xfe06,	// (0x0008b57a) list_single_recal_day_pane_t

0x961e,	// (0x00084d92) ncimui_query_button_pane_ParamLimits

0x961e,	// (0x00084d92) ncimui_query_button_pane

0x962e,	// (0x00084da2) ncimui_query_button_pane_t1_ParamLimits

0x962e,	// (0x00084da2) ncimui_query_button_pane_t1

0xeb2a,	// (0x0008a29e) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x0008a29e) ncimui_query_button_pane_t2

0x0001,

0xfe0b,	// (0x0008b57f) ncimui_query_button_pane_t_ParamLimits

0xfe0b,	// (0x0008b57f) ncimui_query_button_pane_t

0x9641,	// (0x00084db5) query_button_pane_ParamLimits

0x9641,	// (0x00084db5) query_button_pane

0x9f90,	// (0x00085704) bg_button_pane_cp0028

0xeb3d,	// (0x0008a2b1) query_button_pane_t1

0x5234,	// (0x000809a8) main_tport_pane_ParamLimits

0x91fb,	// (0x0008496f) bg_popup_window_pane_cp01_ParamLimits

0x91fb,	// (0x0008496f) bg_popup_window_pane_cp01

0x9209,	// (0x0008497d) heading_pane_cp08_ParamLimits

0x9209,	// (0x0008497d) heading_pane_cp08

0x9217,	// (0x0008498b) heading_pane_cp07_ParamLimits

0x9217,	// (0x0008498b) heading_pane_cp07

0x9286,	// (0x000849fa) cell_tport_appsw_pane_g2

0x0002,

0xfd7f,	// (0x0008b4f3) cell_tport_appsw_pane_g

0x0ef3,	// (0x0007c667) input_candi_list_open_g1

0xad45,	// (0x000864b9) list_cale_time_pane_g6_ParamLimits

0xad45,	// (0x000864b9) list_cale_time_pane_g6

0x5cbc,	// (0x00081430) aid_size_touch_calib_1_ParamLimits

0x5cbc,	// (0x00081430) aid_size_touch_calib_1

0x5cc8,	// (0x0008143c) aid_size_touch_calib_2_ParamLimits

0x5cc8,	// (0x0008143c) aid_size_touch_calib_2

0x5cd6,	// (0x0008144a) aid_size_touch_calib_3_ParamLimits

0x5cd6,	// (0x0008144a) aid_size_touch_calib_3

0x5ce6,	// (0x0008145a) aid_size_touch_calib_4_ParamLimits

0x5ce6,	// (0x0008145a) aid_size_touch_calib_4

0x5cf4,	// (0x00081468) main_touch_calib_button_group_pane_ParamLimits

0x5cf4,	// (0x00081468) main_touch_calib_button_group_pane

0x5d02,	// (0x00081476) main_touch_calib_pane_g1_ParamLimits

0x5d0e,	// (0x00081482) main_touch_calib_pane_g2_ParamLimits

0x5d1a,	// (0x0008148e) main_touch_calib_pane_g3_ParamLimits

0x5d26,	// (0x0008149a) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008aec5) main_touch_calib_pane_g_ParamLimits

0x5d32,	// (0x000814a6) main_touch_calib_pane_t1_ParamLimits

0x5d4b,	// (0x000814bf) main_touch_calib_pane_t2_ParamLimits

0x5d64,	// (0x000814d8) main_touch_calib_pane_t3_ParamLimits

0x5d7a,	// (0x000814ee) main_touch_calib_pane_t4_ParamLimits

0x5d90,	// (0x00081504) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008aece) main_touch_calib_pane_t_ParamLimits

0xcf24,	// (0x00088698) list_single_fp_cale_pane_g3_ParamLimits

0xcf24,	// (0x00088698) list_single_fp_cale_pane_g3

0xaa03,	// (0x00086177) bg_button_pane_cp012_ParamLimits

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp03_ParamLimits

0x7c79,	// (0x000833ed) cell_vitu2_function_top_pane_g1_ParamLimits

0xaa03,	// (0x00086177) bg_vkb2_func_pane_cp04_ParamLimits

0x8a40,	// (0x000841b4) main_ncimui_button_group_pane_ParamLimits

0x8a40,	// (0x000841b4) main_ncimui_button_group_pane

0x8aa6,	// (0x0008421a) main_ncimui_pane_t3_ParamLimits

0x8aa6,	// (0x0008421a) main_ncimui_pane_t3

0xe86b,	// (0x00089fdf) phacti_button_group_pane

0xeac6,	// (0x0008a23a) aid_size_list_single_double_ParamLimits

0x9593,	// (0x00084d07) popup_ezdial_listscroll_window_ParamLimits

0x95b6,	// (0x00084d2a) popup_number_entry_window_cp01_ParamLimits

0x964e,	// (0x00084dc2) phacti_button_pane_ParamLimits

0x964e,	// (0x00084dc2) phacti_button_pane

0x9f90,	// (0x00085704) bg_button_pane_cp14

0xeb4b,	// (0x0008a2bf) phacti_button_pane_t1

0x965f,	// (0x00084dd3) main_touch_calib_button_pane_ParamLimits

0x965f,	// (0x00084dd3) main_touch_calib_button_pane

0xa6ec,	// (0x00085e60) bg_button_pane_cp18_ParamLimits

0xa6ec,	// (0x00085e60) bg_button_pane_cp18

0xeb59,	// (0x0008a2cd) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x0008a2cd) main_touch_calib_button_pane_t1

0xeb6f,	// (0x0008a2e3) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x0008a2e3) main_touch_calib_button_pane_t2

0x0001,

0x0b93,	// (0x0007c307) main_touch_calib_button_pane_t_ParamLimits

0x0b93,	// (0x0007c307) main_touch_calib_button_pane_t

0x9f90,	// (0x00085704) cell_ncimui_button_pane

0x9f90,	// (0x00085704) bg_button_pane_cp032

0xeb8d,	// (0x0008a301) cell_ncimui_button_pane_t1

0x6f1f,	// (0x00082693) image3_infobar_pane_ParamLimits

0x6f1f,	// (0x00082693) image3_infobar_pane

0x8e1f,	// (0x00084593) fs_bigclock_status_pane_ParamLimits

0x8e1f,	// (0x00084593) fs_bigclock_status_pane

0x8e2c,	// (0x000845a0) main_fs_bigclock_clock_pane_ParamLimits

0x8e2c,	// (0x000845a0) main_fs_bigclock_clock_pane

0x8e46,	// (0x000845ba) main_fs_bigclock_indi_pane_ParamLimits

0x8e46,	// (0x000845ba) main_fs_bigclock_indi_pane

0x8e6e,	// (0x000845e2) main_fs_bigclock_swipe_pane_ParamLimits

0x8e6e,	// (0x000845e2) main_fs_bigclock_swipe_pane

0x9f90,	// (0x00085704) main_fs_clock_dumped_data

0xe3ac,	// (0x00089b20) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ac,	// (0x00089b20) list_single_fs_bigclock_indicator_pane_g1

0xe3c8,	// (0x00089b3c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c8,	// (0x00089b3c) list_single_fs_bigclock_indicator_pane_g2

0xe3e2,	// (0x00089b56) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e2,	// (0x00089b56) list_single_fs_bigclock_indicator_pane_g3

0xe3fc,	// (0x00089b70) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3fc,	// (0x00089b70) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0008b3e8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0008b3e8) list_single_fs_bigclock_indicator_pane_g

0xe427,	// (0x00089b9b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe427,	// (0x00089b9b) list_single_fs_bigclock_indicator_pane_t1

0xe44f,	// (0x00089bc3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44f,	// (0x00089bc3) list_single_fs_bigclock_indicator_pane_t2

0xe477,	// (0x00089beb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe477,	// (0x00089beb) list_single_fs_bigclock_indicator_pane_t3

0xe49f,	// (0x00089c13) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49f,	// (0x00089c13) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09c6,	// (0x0007c13a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09c6,	// (0x0007c13a) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x0008a30f) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x0008a30f) image3_infobar_fav_pane

0xebab,	// (0x0008a31f) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x0008a31f) image3_infobar_loc_pane

0xebbf,	// (0x0008a333) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0008a333) image3_infobar_time_pane

0xcbb8,	// (0x0008832c) image3_infobar_time_pane_g1

0xebcf,	// (0x0008a343) image3_infobar_time_pane_t1

0xcbb8,	// (0x0008832c) image3_infobar_loc_pane_g1

0xebdd,	// (0x0008a351) image3_infobar_loc_pane_g2

0x0001,

0xfe10,	// (0x0008b584) image3_infobar_loc_pane_g

0xebe5,	// (0x0008a359) image3_infobar_loc_pane_t1

0xcbb8,	// (0x0008832c) image3_infobar_fav_pane_g1

0xebf3,	// (0x0008a367) image3_infobar_fav_pane_g2

0x0001,

0xfe15,	// (0x0008b589) image3_infobar_fav_pane_g

0xebfb,	// (0x0008a36f) fs_bigclock_status_battery_pane

0xec04,	// (0x0008a378) fs_bigclock_status_signal_pane

0xec0d,	// (0x0008a381) fs_bigclock_status_title_pane

0xec16,	// (0x0008a38a) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0008a393) fs_bigclock_status_signal_pane_g2

0x0001,

0x0ba2,	// (0x0007c316) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0008a39b) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0008a3a4) fs_bigclock_status_battery_pane_g2

0x0001,

0x0ba7,	// (0x0007c31b) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0008a3ac) fs_bigclock_status_title_pane_t1

0xcbb8,	// (0x0008832c) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0008a3ba) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x0008a3c3) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x0008a3c3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe1a,	// (0x0008b58e) main_fs_bigclock_clock_pane_g

0xec57,	// (0x0008a3cb) main_fs_bigclock_clock_pane_t1

0x966f,	// (0x00084de3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe23,	// (0x0008b597) main_fs_bigclock_clock_pane_t

0xec65,	// (0x0008a3d9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x0008a3d9) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x0008a3ea) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x0008a3ea) list_single_fs_bigclock_pane

0xec9c,	// (0x0008a410) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0008a41f) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0008a427) list_single_fs_bigclock_pane_t1

0xcbb8,	// (0x0008832c) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0008a46a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe2f,	// (0x0008b5a3) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0008a472) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0008a472) main_fs_bigclock_swipe_pane_t1

0x42d4,	// (0x0007fa48) call_type_pane_ParamLimits

0x9f90,	// (0x00085704) main_btmg_pane

0x1b4d,	// (0x0007d2c1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1b4d,	// (0x0007d2c1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdc0,	// (0x0008b534) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdc0,	// (0x0008b534) list_single_cale_mrui_row_pane_g

0x1c77,	// (0x0007d3eb) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x0008a28a) list_recal_vselct_arw_up_pane

0x1c7f,	// (0x0007d3f3) list_recal_vselct_pane

0x96c0,	// (0x00084e34) btmg_button_pane

0x96cc,	// (0x00084e40) main_btmg_pane_g1

0x9f90,	// (0x00085704) bg_button_pane_cp044

0xed1b,	// (0x0008a48f) btmg_button_pane_t1

0xc79a,	// (0x00087f0e) aid_listscroll_gen

0xaa03,	// (0x00086177) main_cntbar_detail_pane

0xe7ae,	// (0x00089f22) list_cmail_folder_pane

0xcd86,	// (0x000884fa) sp_fs_scroll_pane_cp03_ParamLimits

0x1d1e,	// (0x0007d492) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d1e,	// (0x0007d492) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0008a49d) aid_size_cmail_indent

0x1d4e,	// (0x0007d4c2) list_single_dyc_row_pane_cp01

0x96f4,	// (0x00084e68) cntbar_detail_list_pane_ParamLimits

0x96f4,	// (0x00084e68) cntbar_detail_list_pane

0x972e,	// (0x00084ea2) main_cntbar_detail_cont_pane_ParamLimits

0x972e,	// (0x00084ea2) main_cntbar_detail_cont_pane

0x42c8,	// (0x0007fa3c) scroll_pane_cp032_ParamLimits

0x42c8,	// (0x0007fa3c) scroll_pane_cp032

0x973a,	// (0x00084eae) cntbar_detail_list_event_pane_ParamLimits

0x973a,	// (0x00084eae) cntbar_detail_list_event_pane

0x9700,	// (0x00084e74) cntbar_detail_list_shct_pane

0xabc8,	// (0x0008633c) aid_list_gen

0xed32,	// (0x0008a4a6) aid_scroll

0xed3b,	// (0x0008a4af) aid_size_touch_scroll_bar

0x82b0,	// (0x00083a24) aid_list_double

0xdb95,	// (0x00089309) aid_list_single

0x829e,	// (0x00083a12) aid_list_single_lg

0x1d57,	// (0x0007d4cb) aid_list_z_g_a_sm

0x974e,	// (0x00084ec2) aid_list_z_g_d

0x1d5f,	// (0x0007d4d3) aid_txt_z_prm

0x1d6d,	// (0x0007d4e1) aid_txt_z_prm_cp01

0x1d7b,	// (0x0007d4ef) aid_txt_z_sec

0x9756,	// (0x00084eca) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9756,	// (0x00084eca) main_cntbar_detail_cont_pane_g1

0x9763,	// (0x00084ed7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9763,	// (0x00084ed7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe34,	// (0x0008b5a8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe34,	// (0x0008b5a8) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0008a4b8) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0008a4c6) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0008a4d4) main_cntbar_detail_cont_pane_t3

0x0002,

0x0bd0,	// (0x0007c344) main_cntbar_detail_cont_pane_t

0x976f,	// (0x00084ee3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x976f,	// (0x00084ee3) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0008a4e2) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0008a4eb) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bd7,	// (0x0007c34b) cntbar_detail_list_shct_pane_g

0x9783,	// (0x00084ef7) cntbar_detail_list_event_pane_g1_ParamLimits

0x9783,	// (0x00084ef7) cntbar_detail_list_event_pane_g1

0x978f,	// (0x00084f03) cntbar_detail_list_event_pane_g2_ParamLimits

0x978f,	// (0x00084f03) cntbar_detail_list_event_pane_g2

0x0005,

0xfe39,	// (0x0008b5ad) cntbar_detail_list_event_pane_g_ParamLimits

0xfe39,	// (0x0008b5ad) cntbar_detail_list_event_pane_g

0x97fb,	// (0x00084f6f) cntbar_detail_list_event_pane_t1_ParamLimits

0x97fb,	// (0x00084f6f) cntbar_detail_list_event_pane_t1

0x9810,	// (0x00084f84) cntbar_detail_list_event_pane_t2_ParamLimits

0x9810,	// (0x00084f84) cntbar_detail_list_event_pane_t2

0x0002,

0xfe46,	// (0x0008b5ba) cntbar_detail_list_event_pane_t_ParamLimits

0xfe46,	// (0x0008b5ba) cntbar_detail_list_event_pane_t

0xcbb8,	// (0x0008832c) cell_cntbar_detail_list_shct_pane_g1

0xb363,	// (0x00086ad7) navi_pane_mv_g3

0xaa03,	// (0x00086177) main_cntbar_detail_pane_ParamLimits

0x9f90,	// (0x00085704) main_notif_wgt_pane

0x6bd3,	// (0x00082347) aid_tch_main_mp4_pane_g4

0x6e08,	// (0x0008257c) popup_slider_window_cp02

0x1c6d,	// (0x0007d3e1) list_recal_day_event_pane

0x96d4,	// (0x00084e48) cntbar_detail_btn_pane_ParamLimits

0x96d4,	// (0x00084e48) cntbar_detail_btn_pane

0x96e4,	// (0x00084e58) cntbar_detail_btn_pane_cp01_ParamLimits

0x96e4,	// (0x00084e58) cntbar_detail_btn_pane_cp01

0x9700,	// (0x00084e74) cntbar_detail_list_shct_pane_ParamLimits

0x970c,	// (0x00084e80) cntbar_detail_pane_g1_ParamLimits

0x970c,	// (0x00084e80) cntbar_detail_pane_g1

0x9718,	// (0x00084e8c) cntbar_detail_pane_t1_ParamLimits

0x9718,	// (0x00084e8c) cntbar_detail_pane_t1

0x979b,	// (0x00084f0f) cntbar_detail_list_event_pane_g3_ParamLimits

0x979b,	// (0x00084f0f) cntbar_detail_list_event_pane_g3

0x97b3,	// (0x00084f27) cntbar_detail_list_event_pane_g4_ParamLimits

0x97b3,	// (0x00084f27) cntbar_detail_list_event_pane_g4

0x97cb,	// (0x00084f3f) cntbar_detail_list_event_pane_g5_ParamLimits

0x97cb,	// (0x00084f3f) cntbar_detail_list_event_pane_g5

0x97e3,	// (0x00084f57) cntbar_detail_list_event_pane_g6_ParamLimits

0x97e3,	// (0x00084f57) cntbar_detail_list_event_pane_g6

0x9825,	// (0x00084f99) cntbar_detail_list_event_pane_t3_ParamLimits

0x9825,	// (0x00084f99) cntbar_detail_list_event_pane_t3

0x9837,	// (0x00084fab) popup_notif_wgt_window_ParamLimits

0x9837,	// (0x00084fab) popup_notif_wgt_window

0x9847,	// (0x00084fbb) popup_submenu_window_cp01_ParamLimits

0x9847,	// (0x00084fbb) popup_submenu_window_cp01

0xa90a,	// (0x0008607e) bg_popup_window_pane_cp10

0xed80,	// (0x0008a4f4) listscroll_notif_wgt_pane

0xed91,	// (0x0008a505) list_notif_wgt_window

0xed9a,	// (0x0008a50e) scroll_pane_cp033

0x9855,	// (0x00084fc9) list_notif_wgt_row_pane_ParamLimits

0x9855,	// (0x00084fc9) list_notif_wgt_row_pane

0xeda3,	// (0x0008a517) aid_size_list_notif_wgt_del

0xedb0,	// (0x0008a524) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0008a530) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0008a544) list_notif_wgt_row_pane_g3

0x0002,

0x0bf0,	// (0x0007c364) list_notif_wgt_row_pane_g

0xeddd,	// (0x0008a551) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0008a567) list_notif_wgt_row_pane_t2

0xee05,	// (0x0008a579) list_notif_wgt_row_pane_t3

0x0002,

0x0bf7,	// (0x0007c36b) list_notif_wgt_row_pane_t

0xd853,	// (0x00088fc7) list_recal_day_event_pane_g1

0xee17,	// (0x0008a58b) list_recal_day_event_pane_t1

0x9f90,	// (0x00085704) bg_button_pane_cp045

0xee26,	// (0x0008a59a) cntbar_detail_btn_pane_t1

0xc7ae,	// (0x00087f22) main_callh_pane_ParamLimits

0xc7ae,	// (0x00087f22) main_callh_pane

0x9f90,	// (0x00085704) main_coverflow0_pane

0x9f90,	// (0x00085704) main_wgtman_pane

0x8e86,	// (0x000845fa) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8e86,	// (0x000845fa) main_fs_bigclock_unlock_btn_pane

0x927e,	// (0x000849f2) bg_button_pane_cp16

0x928e,	// (0x00084a02) cell_tport_appsw_pane_g3

0x9867,	// (0x00084fdb) cf0_flow_pane_ParamLimits

0x9867,	// (0x00084fdb) cf0_flow_pane

0xee34,	// (0x0008a5a8) listscroll_cf0_pane

0xee3f,	// (0x0008a5b3) main_cf0_pane_g1

0x9876,	// (0x00084fea) main_cf0_pane_t1_ParamLimits

0x9876,	// (0x00084fea) main_cf0_pane_t1

0x988a,	// (0x00084ffe) main_cf0_pane_t2_ParamLimits

0x988a,	// (0x00084ffe) main_cf0_pane_t2

0x0001,

0xfe4d,	// (0x0008b5c1) main_cf0_pane_t_ParamLimits

0xfe4d,	// (0x0008b5c1) main_cf0_pane_t

0xee51,	// (0x0008a5c5) scroll_pane_cp11

0x989e,	// (0x00085012) cf0_flow_pane_g1

0x98a6,	// (0x0008501a) cf0_flow_pane_g2

0x0001,

0xfe52,	// (0x0008b5c6) cf0_flow_pane_g

0x98ae,	// (0x00085022) cf0_flow_pane_t1

0x9f90,	// (0x00085704) main_call6_pane

0x9f90,	// (0x00085704) main_calllock_pane

0x98bc,	// (0x00085030) call6_btn_grp_pane_ParamLimits

0x98bc,	// (0x00085030) call6_btn_grp_pane

0x98cb,	// (0x0008503f) call6_pane_g1_ParamLimits

0x98cb,	// (0x0008503f) call6_pane_g1

0x98da,	// (0x0008504e) popup_call6_1st_window_ParamLimits

0x98da,	// (0x0008504e) popup_call6_1st_window

0x98e8,	// (0x0008505c) popup_call6_2nd_window_ParamLimits

0x98e8,	// (0x0008505c) popup_call6_2nd_window

0x98f6,	// (0x0008506a) cell_call6_btn_pane_ParamLimits

0x98f6,	// (0x0008506a) cell_call6_btn_pane

0xa90a,	// (0x0008607e) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0008a5d0) popup_call6_1st_window_g1

0xee64,	// (0x0008a5d8) popup_call6_1st_window_g2

0xee6c,	// (0x0008a5e0) popup_call6_1st_window_g3

0x0002,

0x0c0d,	// (0x0007c381) popup_call6_1st_window_g

0xee74,	// (0x0008a5e8) popup_call6_1st_window_t1

0xee83,	// (0x0008a5f7) popup_call6_1st_window_t2

0xee93,	// (0x0008a607) popup_call6_1st_window_t3

0x0002,

0x0c14,	// (0x0007c388) popup_call6_1st_window_t

0xa90a,	// (0x0008607e) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0008a5d0) popup_call6_2nd_window_g1

0xee64,	// (0x0008a5d8) popup_call6_2nd_window_g2

0xee6c,	// (0x0008a5e0) popup_call6_2nd_window_g3

0x0002,

0x0c0d,	// (0x0007c381) popup_call6_2nd_window_g

0xee74,	// (0x0008a5e8) popup_call6_2nd_window_t1

0x9f90,	// (0x00085704) bg_button_pane_cp15

0xeea3,	// (0x0008a617) cell_call6_btn_pane_g1

0xeeac,	// (0x0008a620) cell_call6_btn_pane_t1

0x9905,	// (0x00085079) listscroll_wgtman_pane_ParamLimits

0x9905,	// (0x00085079) listscroll_wgtman_pane

0x9921,	// (0x00085095) wgtman_btn_pane_ParamLimits

0x9921,	// (0x00085095) wgtman_btn_pane

0xb15a,	// (0x000868ce) aid_scroll_copy1

0xeebb,	// (0x0008a62f) list_wgtman_pane

0x9956,	// (0x000850ca) wgtman_btn_pane_g1_ParamLimits

0x9956,	// (0x000850ca) wgtman_btn_pane_g1

0x997e,	// (0x000850f2) wgtman_btn_pane_t1_ParamLimits

0x997e,	// (0x000850f2) wgtman_btn_pane_t1

0xeec5,	// (0x0008a639) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0008a639) wgtman_btn_pane_t2

0x0001,

0xfe57,	// (0x0008b5cb) wgtman_btn_pane_t_ParamLimits

0xfe57,	// (0x0008b5cb) wgtman_btn_pane_t

0x99b5,	// (0x00085129) listrow_wgtman_pane_ParamLimits

0x99b5,	// (0x00085129) listrow_wgtman_pane

0x99d1,	// (0x00085145) listrow_wgtman_pane_g1

0x99de,	// (0x00085152) listrow_wgtman_pane_g2

0x0001,

0xfe5c,	// (0x0008b5d0) listrow_wgtman_pane_g

0x1d89,	// (0x0007d4fd) listrow_wgtman_pane_t1

0x1da1,	// (0x0007d515) listrow_wgtman_pane_t2

0x0001,

0xfe61,	// (0x0008b5d5) listrow_wgtman_pane_t

0x1dc7,	// (0x0007d53b) wait_bar_pane_cp09

0xeedc,	// (0x0008a650) main_calllock_btn_pane

0xeee6,	// (0x0008a65a) main_calllock_pane_g1

0x9f90,	// (0x00085704) bg_button_pane_cp17

0xeef1,	// (0x0008a665) main_calllock_btn_pane_g1

0xeefa,	// (0x0008a66e) main_calllock_btn_pane_t1

0x9f90,	// (0x00085704) main_dialer3_pane

0x9f90,	// (0x00085704) main_fmrd2_pane

0xcbb8,	// (0x0008832c) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0008a685) main_fs_bigclock_unlock_btn_pane_t1

0x99fc,	// (0x00085170) area_fmrd2_info_pane_ParamLimits

0x99fc,	// (0x00085170) area_fmrd2_info_pane

0x9a0a,	// (0x0008517e) area_fmrd2_visual_pane_ParamLimits

0x9a0a,	// (0x0008517e) area_fmrd2_visual_pane

0x9a18,	// (0x0008518c) fmrd2_indi_pane_ParamLimits

0x9a18,	// (0x0008518c) fmrd2_indi_pane

0x9a25,	// (0x00085199) area_fmrd2_visual_pane_g1

0x9a2d,	// (0x000851a1) area_fmrd2_visual_pane_t1

0x9a3d,	// (0x000851b1) area_fmrd2_visual_pane_t2

0x9a4d,	// (0x000851c1) area_fmrd2_visual_pane_t3

0x0002,

0xfe6b,	// (0x0008b5df) area_fmrd2_visual_pane_t

0x9a5d,	// (0x000851d1) area_fmrd2_info_pane_g1

0x9a65,	// (0x000851d9) area_fmrd2_info_pane_t1

0x9a75,	// (0x000851e9) area_fmrd2_info_pane_t2

0x9a85,	// (0x000851f9) area_fmrd2_info_pane_t3

0x9a95,	// (0x00085209) area_fmrd2_info_pane_t4

0x0003,

0xfe72,	// (0x0008b5e6) area_fmrd2_info_pane_t

0x9aa3,	// (0x00085217) fmrd2_indi_pane_t1

0x9ab3,	// (0x00085227) fmrd2_indi_pane_t2

0x9ac3,	// (0x00085237) fmrd2_indi_pane_t3

0x0002,

0xfe7b,	// (0x0008b5ef) fmrd2_indi_pane_t

0xe40b,	// (0x00089b7f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe40b,	// (0x00089b7f) list_single_fs_bigclock_indicator_pane_g5

0xe4bb,	// (0x00089c2f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4bb,	// (0x00089c2f) list_single_fs_bigclock_indicator_pane_t5

0x9436,	// (0x00084baa) aid_cell_bcale_month_pane_ParamLimits

0x9436,	// (0x00084baa) aid_cell_bcale_month_pane

0x945d,	// (0x00084bd1) bcale_month_pane_ParamLimits

0x945d,	// (0x00084bd1) bcale_month_pane

0x947b,	// (0x00084bef) bcale_preview_pane_ParamLimits

0x947b,	// (0x00084bef) bcale_preview_pane

0xecb3,	// (0x0008a427) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0008a446) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0008a446) list_single_fs_bigclock_pane_t2

0x0001,

0x0bc1,	// (0x0007c335) list_single_fs_bigclock_pane_t_ParamLimits

0x0bc1,	// (0x0007c335) list_single_fs_bigclock_pane_t

0xef09,	// (0x0008a67d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe66,	// (0x0008b5da) main_fs_bigclock_unlock_btn_pane_g

0x9ad1,	// (0x00085245) aid_dia3_key_size_ParamLimits

0x9ad1,	// (0x00085245) aid_dia3_key_size

0x9add,	// (0x00085251) aid_dia3_listrow_size_ParamLimits

0x9add,	// (0x00085251) aid_dia3_listrow_size

0x9aed,	// (0x00085261) dia3_keypad_fun_pane_ParamLimits

0x9aed,	// (0x00085261) dia3_keypad_fun_pane

0x9aff,	// (0x00085273) dia3_keypad_num_pane_ParamLimits

0x9aff,	// (0x00085273) dia3_keypad_num_pane

0x9b11,	// (0x00085285) dia3_listscroll_pane_ParamLimits

0x9b11,	// (0x00085285) dia3_listscroll_pane

0x9b1f,	// (0x00085293) dia3_numentry_pane_ParamLimits

0x9b1f,	// (0x00085293) dia3_numentry_pane

0xef1f,	// (0x0008a693) dia3_list_pane

0xef2a,	// (0x0008a69e) scroll_pane_cp12

0x9f90,	// (0x00085704) bg_dia3_numentry_pane

0x9b2d,	// (0x000852a1) dia3_numentry_pane_t1

0x9b3c,	// (0x000852b0) cell_dia3_key_num_pane

0x9b44,	// (0x000852b8) cell_dia3_key0_fun_pane_ParamLimits

0x9b44,	// (0x000852b8) cell_dia3_key0_fun_pane

0x9b51,	// (0x000852c5) cell_dia3_key1_fun_pane_ParamLimits

0x9b51,	// (0x000852c5) cell_dia3_key1_fun_pane

0x9b5e,	// (0x000852d2) dia3_listrow_pane

0xe10b,	// (0x0008987f) bg_dia3_numentry_pane_g1

0x9f90,	// (0x00085704) bg_button_pane_cp21

0xef35,	// (0x0008a6a9) cell_dia3_key_num_pane_t1

0xef43,	// (0x0008a6b7) cell_dia3_key_num_pane_t2

0xef52,	// (0x0008a6c6) cell_dia3_key_num_pane_t3

0xef61,	// (0x0008a6d5) cell_dia3_key_num_pane_t4

0x0003,

0x0c46,	// (0x0007c3ba) cell_dia3_key_num_pane_t

0x9f90,	// (0x00085704) bg_button_pane_cp19

0x9b6b,	// (0x000852df) cell_dia3_key0_fun_pane_g1

0x9f90,	// (0x00085704) bg_button_pane_cp20

0x9b73,	// (0x000852e7) cell_dia3_key1_fun_pane_g1

0x9b7b,	// (0x000852ef) area_left_week_number_pane

0x9b8e,	// (0x00085302) area_top_day_name_pane

0x9b9c,	// (0x00085310) frame_month_view_pane

0xef70,	// (0x0008a6e4) grid_month_view_pane

0x9bb1,	// (0x00085325) cell_top_day_name_pane_ParamLimits

0x9bb1,	// (0x00085325) cell_top_day_name_pane

0x9bcb,	// (0x0008533f) cell_area_left_week_number_pane_ParamLimits

0x9bcb,	// (0x0008533f) cell_area_left_week_number_pane

0x9bee,	// (0x00085362) cell_month_view_pane_ParamLimits

0x9bee,	// (0x00085362) cell_month_view_pane

0xef7e,	// (0x0008a6f2) frm_month_g1

0x9c1a,	// (0x0008538e) frm_month_g2

0x9c2b,	// (0x0008539f) frm_month_g3

0x9c3c,	// (0x000853b0) frm_month_g4

0x9c4d,	// (0x000853c1) frm_month_g5

0x9c60,	// (0x000853d4) frm_month_g6

0x9c73,	// (0x000853e7) frm_month_g7

0xef8b,	// (0x0008a6ff) frm_month_g8

0x9c86,	// (0x000853fa) frm_month_g9

0x9c93,	// (0x00085407) frm_month_g10

0x9ca0,	// (0x00085414) frm_month_g11

0x9cad,	// (0x00085421) frm_month_g12

0x9cba,	// (0x0008542e) frm_month_g13

0x9cc7,	// (0x0008543b) frm_month_g14

0x9cd6,	// (0x0008544a) frm_month_g15

0x9ce5,	// (0x00085459) frm_month_g16

0x000f,

0xfe82,	// (0x0008b5f6) frm_month_g

0xef98,	// (0x0008a70c) cell_top_day_name_pane_t1

0x9cf4,	// (0x00085468) cell_area_left_week_number_pane_g1

0x9d03,	// (0x00085477) cell_area_left_week_number_pane_t1

0xce24,	// (0x00088598) cell_month_view_pane_g1

0x9d19,	// (0x0008548d) cell_month_view_pane_t1

0x9f90,	// (0x00085704) main_fps_pane

0xe6ab,	// (0x00089e1f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ab,	// (0x00089e1f) cmail_ddmenu_btn02_pane_cp1

0xe6c7,	// (0x00089e3b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c7,	// (0x00089e3b) cmail_ddmenu_btn02_pane_cp2

0x95ee,	// (0x00084d62) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x95ee,	// (0x00084d62) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdf1,	// (0x0008b565) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdf1,	// (0x0008b565) cmail_ddmenu_btn02_pane_g

0x960c,	// (0x00084d80) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x960c,	// (0x00084d80) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdf6,	// (0x0008b56a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdf6,	// (0x0008b56a) cmail_ddmenu_btn02_pane_t

0x9d2f,	// (0x000854a3) fps_text_pane_ParamLimits

0x9d2f,	// (0x000854a3) fps_text_pane

0x9d3c,	// (0x000854b0) main_fps_pane_g1_ParamLimits

0x9d3c,	// (0x000854b0) main_fps_pane_g1

0x9d4a,	// (0x000854be) wait_bar_pane_cp010_ParamLimits

0x9d4a,	// (0x000854be) wait_bar_pane_cp010

0x9d56,	// (0x000854ca) fps_text_pane_t1_ParamLimits

0x9d56,	// (0x000854ca) fps_text_pane_t1

0x71ea,	// (0x0008295e) cam4_image_uncrop_pane_g1

0x71f3,	// (0x00082967) cam4_image_uncrop_pane_g2

0x71fc,	// (0x00082970) cam4_image_uncrop_pane_g3

0x7205,	// (0x00082979) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0008b062) cam4_image_uncrop_pane_g

0x9b5e,	// (0x000852d2) dia3_listrow_pane_ParamLimits

0x9f90,	// (0x00085704) main_phob2_pane

0x9260,	// (0x000849d4) cell_tport_appsw_pane_cp02_ParamLimits

0x9260,	// (0x000849d4) cell_tport_appsw_pane_cp02

0x926f,	// (0x000849e3) cell_tport_appsw_pane_cp03_ParamLimits

0x926f,	// (0x000849e3) cell_tport_appsw_pane_cp03

0x9f90,	// (0x00085704) phob2_contact_card_pane

0x9f90,	// (0x00085704) phob2_listscroll_pane

0xefab,	// (0x0008a71f) phob2_list_pane

0xefb3,	// (0x0008a727) scroll_pane_cp034

0x9d6f,	// (0x000854e3) phob2_cc_data_pane_ParamLimits

0x9d6f,	// (0x000854e3) phob2_cc_data_pane

0x9d89,	// (0x000854fd) phob2_cc_listscroll_pane_ParamLimits

0x9d89,	// (0x000854fd) phob2_cc_listscroll_pane

0x9da3,	// (0x00085517) list_double_large_graphic_phob2_pane_ParamLimits

0x9da3,	// (0x00085517) list_double_large_graphic_phob2_pane

0x9dc5,	// (0x00085539) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9dc5,	// (0x00085539) list_double_large_graphic_phob2_pane_g1

0x1dd9,	// (0x0007d54d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1dd9,	// (0x0007d54d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfea3,	// (0x0008b617) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea3,	// (0x0008b617) list_double_large_graphic_phob2_pane_g

0x1de5,	// (0x0007d559) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1de5,	// (0x0007d559) list_double_large_graphic_phob2_pane_t1

0x1dfb,	// (0x0007d56f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1dfb,	// (0x0007d56f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea8,	// (0x0008b61c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea8,	// (0x0008b61c) list_double_large_graphic_phob2_pane_t

0x9f90,	// (0x00085704) list_highlight_pane_cp024

0x9ddb,	// (0x0008554f) phob2_cc_button_pane

0x9de3,	// (0x00085557) phob2_cc_data_pane_g1_ParamLimits

0x9de3,	// (0x00085557) phob2_cc_data_pane_g1

0x9def,	// (0x00085563) phob2_cc_data_pane_g2_ParamLimits

0x9def,	// (0x00085563) phob2_cc_data_pane_g2

0x0001,

0xfead,	// (0x0008b621) phob2_cc_data_pane_g_ParamLimits

0xfead,	// (0x0008b621) phob2_cc_data_pane_g

0x9dfb,	// (0x0008556f) phob2_cc_data_pane_t1_ParamLimits

0x9dfb,	// (0x0008556f) phob2_cc_data_pane_t1

0x9e0d,	// (0x00085581) phob2_cc_data_pane_t2_ParamLimits

0x9e0d,	// (0x00085581) phob2_cc_data_pane_t2

0x9e1f,	// (0x00085593) phob2_cc_data_pane_t3_ParamLimits

0x9e1f,	// (0x00085593) phob2_cc_data_pane_t3

0x0002,

0xfeb2,	// (0x0008b626) phob2_cc_data_pane_t_ParamLimits

0xfeb2,	// (0x0008b626) phob2_cc_data_pane_t

0xefbb,	// (0x0008a72f) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0008a72f) phob2_cc_list_pane

0xd984,	// (0x000890f8) scroll_pane_cp035_ParamLimits

0xd984,	// (0x000890f8) scroll_pane_cp035

0xaa03,	// (0x00086177) bg_button_pane_cp033

0xefc7,	// (0x0008a73b) phob2_cc_button_pane_g1

0xefd3,	// (0x0008a747) phob2_cc_button_pane_t1

0xefe8,	// (0x0008a75c) phob2_cc_button_pane_t2

0x0001,

0x0c86,	// (0x0007c3fa) phob2_cc_button_pane_t

0x9e31,	// (0x000855a5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e31,	// (0x000855a5) list_double_large_graphic_phob2_cc_pane

0x9e60,	// (0x000855d4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e60,	// (0x000855d4) list_double_large_graphic_phob2_cc_pane_g1

0x1e10,	// (0x0007d584) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e10,	// (0x0007d584) list_double_large_graphic_phob2_cc_pane_g2

0x1e1f,	// (0x0007d593) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e1f,	// (0x0007d593) list_double_large_graphic_phob2_cc_pane_g3

0x1e2e,	// (0x0007d5a2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e2e,	// (0x0007d5a2) list_double_large_graphic_phob2_cc_pane_g4

0x1e3f,	// (0x0007d5b3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e3f,	// (0x0007d5b3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeb9,	// (0x0008b62d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeb9,	// (0x0008b62d) list_double_large_graphic_phob2_cc_pane_g

0x1e4e,	// (0x0007d5c2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e4e,	// (0x0007d5c2) list_double_large_graphic_phob2_cc_pane_t1

0x1e77,	// (0x0007d5eb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e77,	// (0x0007d5eb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfec4,	// (0x0008b638) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfec4,	// (0x0008b638) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0008a76e) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0008a76e) list_highlight_pane_cp025

0xaa03,	// (0x00086177) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0008a73b) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0008a747) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0008a75c) phob2_cc_button_pane_t2_ParamLimits

0x0c86,	// (0x0007c3fa) phob2_cc_button_pane_t_ParamLimits

0x2177,	// (0x0007d8eb) popup_wgtman_window

0xd741,	// (0x00088eb5) scroll_pane_cp038

0x993e,	// (0x000850b2) wgtman_btn_pane_cp_01_ParamLimits

0x993e,	// (0x000850b2) wgtman_btn_pane_cp_01

0xf008,	// (0x0008a77c) wgtman_content_pane

0xf011,	// (0x0008a785) wgtman_heading_pane

0x9f90,	// (0x00085704) bg_heading_pane_cp02

0xf01a,	// (0x0008a78e) wgtman_heading_pane_g1

0xf022,	// (0x0008a796) wgtman_heading_pane_t1

0xf030,	// (0x0008a7a4) scroll_pane_cp036

0xf038,	// (0x0008a7ac) wgtman_list_pane

0xe781,	// (0x00089ef5) wgtman_list_pane_t1_ParamLimits

0xe781,	// (0x00089ef5) wgtman_list_pane_t1

0x7149,	// (0x000828bd) cam4_grid_pane

0x1170,	// (0x0007c8e4) bg_button_pane_cp015_ParamLimits

0x7e3b,	// (0x000835af) bg_button_pane_cp016_ParamLimits

0x7e4e,	// (0x000835c2) bg_button_pane_cp017_ParamLimits

0x7e83,	// (0x000835f7) popup_vitu2_query_window_g3_ParamLimits

0x7e83,	// (0x000835f7) popup_vitu2_query_window_g3

0x7ed1,	// (0x00083645) popup_vitu2_query_window_t6_ParamLimits

0x7ed1,	// (0x00083645) popup_vitu2_query_window_t6

0x7efc,	// (0x00083670) popup_vitu2_query_window_t7_ParamLimits

0x7efc,	// (0x00083670) popup_vitu2_query_window_t7

0xd990,	// (0x00089104) cam4_grid_pane_g1

0xd999,	// (0x0008910d) cam4_grid_pane_g2

0xf040,	// (0x0008a7b4) cam4_grid_pane_g3

0xf049,	// (0x0008a7bd) cam4_grid_pane_g4

0x0003,

0xfec9,	// (0x0008b63d) cam4_grid_pane_g

0x2fe6,	// (0x0007e75a) aid_placing_vt_slider_lsc_ParamLimits

0x3326,	// (0x0007ea9a) vidtel_button_pane_ParamLimits

0x3326,	// (0x0007ea9a) vidtel_button_pane

0xf054,	// (0x0008a7c8) bg_button_pane_cp034

0x9e71,	// (0x000855e5) vidtel_button_pane_g1

0xf05e,	// (0x0008a7d2) vidtel_button_pane_t1

0xd843,	// (0x00088fb7) aid_size_vtel_slider_touch

0xd984,	// (0x000890f8) scroll_pane_cp039

0xe149,	// (0x000898bd) ncim_query_button_pane_cp01_ParamLimits

0xe168,	// (0x000898dc) ncimui_query_pane_g1_ParamLimits

0xaa03,	// (0x00086177) input_focus_pane_cp012_ParamLimits

0xe18d,	// (0x00089901) ncim_query_entry_pane_t1_ParamLimits

0xd984,	// (0x000890f8) scroll_pane_cp039_ParamLimits

0xb240,	// (0x000869b4) navi_pane_bcale_mc_g1

0xb248,	// (0x000869bc) navi_pane_bcale_mc_t1

0xe710,	// (0x00089e84) main_sp_fs_email_pane_g1

0xe71c,	// (0x00089e90) main_sp_fs_email_pane_g2

0x0001,

0xfcd1,	// (0x0008b445) main_sp_fs_email_pane_g

0xe988,	// (0x0008a0fc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x0008a0fc) list_single_cale_mrui_row_pane_g3

0x1cdc,	// (0x0007d450) list_single_recal_day_pane_g5_event_pane

0x1cf2,	// (0x0007d466) list_single_recal_day_pane_g7

0xf06c,	// (0x0008a7e0) list_recal_day_event_pane_cp01

0xf075,	// (0x0008a7e9) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0008a7f1) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0008a7f9) list_recal_vselct_pane_cp01

0xd853,	// (0x00088fc7) list_recal_day_event_pane_cp01_g1

0x1ea0,	// (0x0007d614) list_recal_day_event_pane_cp01_t1

0x1cfa,	// (0x0007d46e) list_single_recal_day_pane_t1_ParamLimits

0x1d0c,	// (0x0007d480) list_single_recal_day_pane_t2_ParamLimits

0xfe06,	// (0x0008b57a) list_single_recal_day_pane_t_ParamLimits

0xa608,	// (0x00085d7c) bg_notes_pane_ParamLimits

0xa6ca,	// (0x00085e3e) list_notes_pane_ParamLimits

0x24c2,	// (0x0007dc36) scroll_pane_cp06_ParamLimits

0xa6ec,	// (0x00085e60) main_notes_pane_ParamLimits

0x9f90,	// (0x00085704) main_welc_pane

0x9e79,	// (0x000855ed) main_welc_body_pane_ParamLimits

0x9e79,	// (0x000855ed) main_welc_body_pane

0x9e92,	// (0x00085606) main_welc_opti_pane_ParamLimits

0x9e92,	// (0x00085606) main_welc_opti_pane

0x9ec7,	// (0x0008563b) main_welc_pane_t1_ParamLimits

0x9ec7,	// (0x0008563b) main_welc_pane_t1

0x9ee5,	// (0x00085659) main_welc_body_row_pane_ParamLimits

0x9ee5,	// (0x00085659) main_welc_body_row_pane

0xe39e,	// (0x00089b12) main_welc_opti_row_pane_ParamLimits

0xe39e,	// (0x00089b12) main_welc_opti_row_pane

0xf08f,	// (0x0008a803) main_welc_opti_row_pane_g1

0x9f11,	// (0x00085685) main_welc_opti_row_pane_t1

0xf097,	// (0x0008a80b) main_welc_body_row_pane_t1

0xed89,	// (0x0008a4fd) popup_notif_wgt_heading_pane

0xeda3,	// (0x0008a517) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0008a524) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0008a530) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0008a544) list_notif_wgt_row_pane_g3_ParamLimits

0x0bf0,	// (0x0007c364) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0008a551) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0008a567) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0008a579) list_notif_wgt_row_pane_t3_ParamLimits

0x0bf7,	// (0x0007c36b) list_notif_wgt_row_pane_t_ParamLimits

0x99d1,	// (0x00085145) listrow_wgtman_pane_g1_ParamLimits

0x99de,	// (0x00085152) listrow_wgtman_pane_g2_ParamLimits

0xfe5c,	// (0x0008b5d0) listrow_wgtman_pane_g_ParamLimits

0x1d89,	// (0x0007d4fd) listrow_wgtman_pane_t1_ParamLimits

0x1da1,	// (0x0007d515) listrow_wgtman_pane_t2_ParamLimits

0xfe61,	// (0x0008b5d5) listrow_wgtman_pane_t_ParamLimits

0x1dc7,	// (0x0007d53b) wait_bar_pane_cp09_ParamLimits

0x9f90,	// (0x00085704) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0008a81a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0008a822) popup_notif_wgt_heading_pane_t1

0x9f90,	// (0x00085704) main_vids_pane

0x9f90,	// (0x00085704) vids_listscroll_pane

0x9f20,	// (0x00085694) scroll_pane_cp040

0x9f90,	// (0x00085704) vids_list_pane

0x9f2b,	// (0x0008569f) vids_list_double_pane_ParamLimits

0x9f2b,	// (0x0008569f) vids_list_double_pane

0x9f43,	// (0x000856b7) vids_list_double_pane_g1

0x9f4c,	// (0x000856c0) vids_list_double_pane_t1

0x9f5c,	// (0x000856d0) vids_list_double_pane_t2

0x0001,

0xfed7,	// (0x0008b64b) vids_list_double_pane_t

0xaa03,	// (0x00086177) main_ncimui_pane_ParamLimits

0x8a58,	// (0x000841cc) main_ncimui_pane_g1_ParamLimits

0x8a64,	// (0x000841d8) main_ncimui_pane_g2_ParamLimits

0x8a64,	// (0x000841d8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0008b35e) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0008b35e) main_ncimui_pane_g

0x9ead,	// (0x00085621) main_welc_pane_g1_ParamLimits

0x9ead,	// (0x00085621) main_welc_pane_g1

0x9eb9,	// (0x0008562d) main_welc_pane_g2_ParamLimits

0x9eb9,	// (0x0008562d) main_welc_pane_g2

0x0001,

0xfed2,	// (0x0008b646) main_welc_pane_g_ParamLimits

0xfed2,	// (0x0008b646) main_welc_pane_g

0xa608,	// (0x00085d7c) listscroll_mce_pane_ParamLimits

0xb3a3,	// (0x00086b17) wait_bar_pane_cp10

0xc7a2,	// (0x00087f16) main_cale_day_pane_ParamLimits

0xc7a2,	// (0x00087f16) main_cale_week_pane_ParamLimits

0xa608,	// (0x00085d7c) main_messa_pane_ParamLimits

0x657d,	// (0x00081cf1) main_clock2_btn_pane_ParamLimits

0x657d,	// (0x00081cf1) main_clock2_btn_pane

0xcfac,	// (0x00088720) main_clock2_btn_pane_cp01_ParamLimits

0xcfac,	// (0x00088720) main_clock2_btn_pane_cp01

0xe959,	// (0x0008a0cd) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0008a5bd) main_cf0_pane_g2

0x0001,

0x0bfe,	// (0x0007c372) main_cf0_pane_g

0x9b7b,	// (0x000852ef) area_left_week_number_pane_ParamLimits

0x9b8e,	// (0x00085302) area_top_day_name_pane_ParamLimits

0x9b9c,	// (0x00085310) frame_month_view_pane_ParamLimits

0xef70,	// (0x0008a6e4) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0008a6f2) frm_month_g1_ParamLimits

0x9c1a,	// (0x0008538e) frm_month_g2_ParamLimits

0x9c2b,	// (0x0008539f) frm_month_g3_ParamLimits

0x9c3c,	// (0x000853b0) frm_month_g4_ParamLimits

0x9c4d,	// (0x000853c1) frm_month_g5_ParamLimits

0x9c60,	// (0x000853d4) frm_month_g6_ParamLimits

0x9c73,	// (0x000853e7) frm_month_g7_ParamLimits

0xef8b,	// (0x0008a6ff) frm_month_g8_ParamLimits

0x9c86,	// (0x000853fa) frm_month_g9_ParamLimits

0x9c93,	// (0x00085407) frm_month_g10_ParamLimits

0x9ca0,	// (0x00085414) frm_month_g11_ParamLimits

0x9cad,	// (0x00085421) frm_month_g12_ParamLimits

0x9cba,	// (0x0008542e) frm_month_g13_ParamLimits

0x9cc7,	// (0x0008543b) frm_month_g14_ParamLimits

0x9cd6,	// (0x0008544a) frm_month_g15_ParamLimits

0x9ce5,	// (0x00085459) frm_month_g16_ParamLimits

0xfe82,	// (0x0008b5f6) frm_month_g_ParamLimits

0xef98,	// (0x0008a70c) cell_top_day_name_pane_t1_ParamLimits

0x9cf4,	// (0x00085468) cell_area_left_week_number_pane_g1_ParamLimits

0x9d03,	// (0x00085477) cell_area_left_week_number_pane_t1_ParamLimits

0xce24,	// (0x00088598) cell_month_view_pane_g1_ParamLimits

0x9d19,	// (0x0008548d) cell_month_view_pane_t1_ParamLimits

0xa600,	// (0x00085d74) main_clock2_btn_pane_g1

0xf0bc,	// (0x0008a830) main_clock2_btn_pane_t1

0xaa03,	// (0x00086177) listscroll_cmail_pane_ParamLimits

0xe710,	// (0x00089e84) main_sp_fs_email_pane_g1_ParamLimits

0xe71c,	// (0x00089e90) main_sp_fs_email_pane_g2_ParamLimits

0xfcd1,	// (0x0008b445) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x0008a26b) list_recal_day_pane_ParamLimits

0xeb08,	// (0x0008a27c) mian_recal_day_pane_t1

0x16bd,	// (0x0007ce31) list_single_dyc_row_text_pane_t4_ParamLimits

0x16bd,	// (0x0007ce31) list_single_dyc_row_text_pane_t4

0x16f4,	// (0x0007ce68) list_single_dyc_row_text_pane_t5_ParamLimits

0x16f4,	// (0x0007ce68) list_single_dyc_row_text_pane_t5

0x176a,	// (0x0007cede) list_single_dyc_row_text_pane_t6_ParamLimits

0x176a,	// (0x0007cede) list_single_dyc_row_text_pane_t6

0xad24,	// (0x00086498) aid_mgn_list_cale_time_pane

0xaa03,	// (0x00086177) main_gallery2_pane_ParamLimits

0xcfc2,	// (0x00088736) main_clock2_pane_cp01_t1

0xcfd0,	// (0x00088744) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0008af38) main_clock2_pane_cp01_t

0x290d,	// (0x0007e081) cale_week_scroll_pane_g16_ParamLimits

0x290d,	// (0x0007e081) cale_week_scroll_pane_g16

0xa90a,	// (0x0008607e) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
