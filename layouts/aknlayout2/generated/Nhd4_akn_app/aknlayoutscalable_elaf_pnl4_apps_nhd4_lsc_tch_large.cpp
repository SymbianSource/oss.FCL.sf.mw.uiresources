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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00079284 };

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
0x1070,	// (0x0007a2f4) Screen

0x107c,	// (0x0007a300) application_window

0x10b8,	// (0x0007a33c) area_bottom_pane_ParamLimits

0x10b8,	// (0x0007a33c) area_bottom_pane

0x10f1,	// (0x0007a375) area_top_pane_ParamLimits

0x10f1,	// (0x0007a375) area_top_pane

0x9fd0,	// (0x00083254) call_video_uplink_pane_ParamLimits

0x9fd0,	// (0x00083254) call_video_uplink_pane

0x117f,	// (0x0007a403) main_pane_ParamLimits

0x117f,	// (0x0007a403) main_pane

0xc843,	// (0x00085ac7) context_pane

0x3c00,	// (0x0007ce84) navi_pane

0x3c32,	// (0x0007ceb6) popup_cale_events_window_ParamLimits

0x3c32,	// (0x0007ceb6) popup_cale_events_window

0xc856,	// (0x00085ada) popup_mup_playback_window

0x3c4a,	// (0x0007cece) signal_pane

0xa7a3,	// (0x00083a27) main_browser_pane

0xa9d8,	// (0x00083c5c) main_burst_pane

0x3968,	// (0x0007cbec) main_calc_pane

0xc7e3,	// (0x00085a67) main_cale_day_pane

0x15b8,	// (0x0007a83c) main_cale_month_pane

0xc7e3,	// (0x00085a67) main_cale_week_pane

0xa9d8,	// (0x00083c5c) main_call_pane

0xa40f,	// (0x00083693) main_call_poc_pane

0xa9d8,	// (0x00083c5c) main_camera_pane

0xa9d8,	// (0x00083c5c) main_chi_dic_pane

0xb1df,	// (0x00084463) main_clock_pane

0xa40f,	// (0x00083693) main_fmradio_pane

0xa9d8,	// (0x00083c5c) main_graph_messa_pane

0xa40f,	// (0x00083693) main_help_pane

0xa7a3,	// (0x00083a27) main_im_pane

0xa66a,	// (0x000838ee) main_image_pane_ParamLimits

0xa66a,	// (0x000838ee) main_image_pane

0xa40f,	// (0x00083693) main_location2_pane

0xa9d8,	// (0x00083c5c) main_location_pane

0xa66a,	// (0x000838ee) main_messa_pane

0xa40f,	// (0x00083693) main_mp2_pane

0xa9d8,	// (0x00083c5c) main_mp_pane

0xa40f,	// (0x00083693) main_msg_pane

0xa40f,	// (0x00083693) main_mup_eq_pane

0xa40f,	// (0x00083693) main_mup_pane

0xa7a3,	// (0x00083a27) main_notes_pane

0xa40f,	// (0x00083693) main_pec_pane

0xa40f,	// (0x00083693) main_phob_pane

0xa40f,	// (0x00083693) main_pinb_pane

0xa40f,	// (0x00083693) main_postcard_pane

0xa40f,	// (0x00083693) main_qdial_pane

0xa9d8,	// (0x00083c5c) main_skin_pane

0xa40f,	// (0x00083693) main_smil2_pane

0xa9d8,	// (0x00083c5c) main_smil_pane

0xa9d8,	// (0x00083c5c) main_video_pane

0xa9d8,	// (0x00083c5c) main_video_tele_pane

0xa66a,	// (0x000838ee) main_viewer_pane_ParamLimits

0xa66a,	// (0x000838ee) main_viewer_pane

0xa9d8,	// (0x00083c5c) main_vorec_pane

0x39bc,	// (0x0007cc40) popup_blid_sat_info_window_ParamLimits

0x39bc,	// (0x0007cc40) popup_blid_sat_info_window

0x3a14,	// (0x0007cc98) popup_dyc_status_message_window_ParamLimits

0x3a14,	// (0x0007cc98) popup_dyc_status_message_window

0x3a2c,	// (0x0007ccb0) popup_grid_large_graphic_window_ParamLimits

0x3a2c,	// (0x0007ccb0) popup_grid_large_graphic_window

0x3adc,	// (0x0007cd60) popup_loc_request_window_ParamLimits

0x3adc,	// (0x0007cd60) popup_loc_request_window

0x3bd8,	// (0x0007ce5c) popup_wml_address_window_ParamLimits

0x3bd8,	// (0x0007ce5c) popup_wml_address_window

0x37a2,	// (0x0007ca26) call_muted_g1

0x3497,	// (0x0007c71b) popup_call_audio_conf_window_ParamLimits

0x3497,	// (0x0007c71b) popup_call_audio_conf_window

0x37b6,	// (0x0007ca3a) popup_call_audio_first_window_ParamLimits

0x37b6,	// (0x0007ca3a) popup_call_audio_first_window

0x382c,	// (0x0007cab0) popup_call_audio_in_window_ParamLimits

0x382c,	// (0x0007cab0) popup_call_audio_in_window

0x3868,	// (0x0007caec) popup_call_audio_out_window_ParamLimits

0x3868,	// (0x0007caec) popup_call_audio_out_window

0x38a2,	// (0x0007cb26) popup_call_audio_second_window_ParamLimits

0x38a2,	// (0x0007cb26) popup_call_audio_second_window

0x38f8,	// (0x0007cb7c) popup_call_audio_wait_window_ParamLimits

0x38f8,	// (0x0007cb7c) popup_call_audio_wait_window

0x392d,	// (0x0007cbb1) popup_number_entry_window_ParamLimits

0x392d,	// (0x0007cbb1) popup_number_entry_window

0x9ffc,	// (0x00083280) bg_popup_call_pane_cp05_ParamLimits

0x9ffc,	// (0x00083280) bg_popup_call_pane_cp05

0xa01c,	// (0x000832a0) popup_number_entry_window_t1

0xa02f,	// (0x000832b3) popup_number_entry_window_t2

0xa041,	// (0x000832c5) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000882a1) popup_number_entry_window_t

0xa053,	// (0x000832d7) text_title_cp2

0xa066,	// (0x000832ea) bg_popup_call_pane_cp_ParamLimits

0xa066,	// (0x000832ea) bg_popup_call_pane_cp

0xa074,	// (0x000832f8) call_thumbnail_pane

0xa07c,	// (0x00083300) popup_call_audio_in_window_g1_ParamLimits

0xa07c,	// (0x00083300) popup_call_audio_in_window_g1

0xa088,	// (0x0008330c) popup_call_audio_in_window_g2_ParamLimits

0xa088,	// (0x0008330c) popup_call_audio_in_window_g2

0xa094,	// (0x00083318) popup_call_audio_in_window_g3_ParamLimits

0xa094,	// (0x00083318) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000882aa) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000882aa) popup_call_audio_in_window_g

0xa0a0,	// (0x00083324) popup_call_audio_in_window_t1_ParamLimits

0xa0a0,	// (0x00083324) popup_call_audio_in_window_t1

0xa0bc,	// (0x00083340) popup_call_audio_in_window_t2_ParamLimits

0xa0bc,	// (0x00083340) popup_call_audio_in_window_t2

0xa0d8,	// (0x0008335c) popup_call_audio_in_window_t3_ParamLimits

0xa0d8,	// (0x0008335c) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000882b1) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000882b1) popup_call_audio_in_window_t

0xa066,	// (0x000832ea) bg_popup_call_pane_cp01_ParamLimits

0xa066,	// (0x000832ea) bg_popup_call_pane_cp01

0xa074,	// (0x000832f8) call_thumbnail_pane_cp02

0xa0eb,	// (0x0008336f) call_type_pane_cp022

0xa0f3,	// (0x00083377) popup_call_audio_out_window_g1_ParamLimits

0xa0f3,	// (0x00083377) popup_call_audio_out_window_g1

0xa105,	// (0x00083389) popup_call_audio_out_window_g2_ParamLimits

0xa105,	// (0x00083389) popup_call_audio_out_window_g2

0xa111,	// (0x00083395) popup_call_audio_out_window_g3_ParamLimits

0xa111,	// (0x00083395) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000882b8) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000882b8) popup_call_audio_out_window_g

0xa123,	// (0x000833a7) popup_call_audio_out_window_t1_ParamLimits

0xa123,	// (0x000833a7) popup_call_audio_out_window_t1

0xa13b,	// (0x000833bf) popup_call_audio_out_window_t2_ParamLimits

0xa13b,	// (0x000833bf) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000882bf) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000882bf) popup_call_audio_out_window_t

0xa150,	// (0x000833d4) bg_popup_call_pane_ParamLimits

0xa150,	// (0x000833d4) bg_popup_call_pane

0x133b,	// (0x0007a5bf) call_thumbnail_pane_cp_ParamLimits

0x133b,	// (0x0007a5bf) call_thumbnail_pane_cp

0xa1d4,	// (0x00083458) call_type_pane_cp01_ParamLimits

0xa1d4,	// (0x00083458) call_type_pane_cp01

0xa218,	// (0x0008349c) popup_call_audio_first_window_g1_ParamLimits

0xa218,	// (0x0008349c) popup_call_audio_first_window_g1

0xa264,	// (0x000834e8) popup_call_audio_first_window_g2_ParamLimits

0xa264,	// (0x000834e8) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000882c4) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000882c4) popup_call_audio_first_window_g

0xa2a8,	// (0x0008352c) popup_call_audio_first_window_t1_ParamLimits

0xa2a8,	// (0x0008352c) popup_call_audio_first_window_t1

0xa354,	// (0x000835d8) popup_call_audio_first_window_t4_ParamLimits

0xa354,	// (0x000835d8) popup_call_audio_first_window_t4

0xa3e0,	// (0x00083664) popup_call_audio_first_window_t5_ParamLimits

0xa3e0,	// (0x00083664) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000882c9) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000882c9) popup_call_audio_first_window_t

0xa40f,	// (0x00083693) bg_popup_call_pane_cp02

0xa419,	// (0x0008369d) call_type_pane_cp023

0xa421,	// (0x000836a5) popup_call_audio_wait_window_g1

0xa429,	// (0x000836ad) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000882d0) popup_call_audio_wait_window_g

0xa431,	// (0x000836b5) popup_call_audio_wait_window_t3

0xa43f,	// (0x000836c3) bg_popup_call_pane_cp03_ParamLimits

0xa43f,	// (0x000836c3) bg_popup_call_pane_cp03

0xa49f,	// (0x00083723) call_thumbnail_pane_cp011_ParamLimits

0xa49f,	// (0x00083723) call_thumbnail_pane_cp011

0xa4ab,	// (0x0008372f) call_type_pane_cp034_ParamLimits

0xa4ab,	// (0x0008372f) call_type_pane_cp034

0xa4e7,	// (0x0008376b) popup_call_audio_second_window_g1_ParamLimits

0xa4e7,	// (0x0008376b) popup_call_audio_second_window_g1

0xa523,	// (0x000837a7) popup_call_audio_second_window_g2_ParamLimits

0xa523,	// (0x000837a7) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000882d5) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000882d5) popup_call_audio_second_window_g

0xa55f,	// (0x000837e3) popup_call_audio_second_window_t1_ParamLimits

0xa55f,	// (0x000837e3) popup_call_audio_second_window_t1

0xa5e0,	// (0x00083864) popup_call_audio_second_window_t2_ParamLimits

0xa5e0,	// (0x00083864) popup_call_audio_second_window_t2

0xa616,	// (0x0008389a) popup_call_audio_second_window_t3_ParamLimits

0xa616,	// (0x0008389a) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000882da) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000882da) popup_call_audio_second_window_t

0xa40f,	// (0x00083693) bg_popup_call_pane_cp04

0xa64c,	// (0x000838d0) list_conf_pane

0xa654,	// (0x000838d8) popup_call_audio_conf_window_t1

0xa662,	// (0x000838e6) call_thumbnail_pane_g1

0xa66a,	// (0x000838ee) bg_pinb_pane_ParamLimits

0xa66a,	// (0x000838ee) bg_pinb_pane

0xa678,	// (0x000838fc) find_pinb_pane

0xa66a,	// (0x000838ee) listscroll_pinb_pane_ParamLimits

0xa66a,	// (0x000838ee) listscroll_pinb_pane

0xa682,	// (0x00083906) pinb_bg_pane_g1

0xa682,	// (0x00083906) pinb_bg_pane_g2

0xa682,	// (0x00083906) pinb_bg_pane_g3

0xa682,	// (0x00083906) pinb_bg_pane_g4

0xa682,	// (0x00083906) pinb_bg_pane_g5

0xa682,	// (0x00083906) pinb_bg_pane_g6

0xa682,	// (0x00083906) pinb_bg_pane_g7

0xa682,	// (0x00083906) pinb_bg_pane_g8

0xa682,	// (0x00083906) pinb_bg_pane_g9

0xa682,	// (0x00083906) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000882e1) pinb_bg_pane_g

0x9f77,	// (0x000831fb) grid_pinb_pane

0x9f77,	// (0x000831fb) list_pinb_pane

0x9fee,	// (0x00083272) scroll_pane_cp01_ParamLimits

0x9fee,	// (0x00083272) scroll_pane_cp01

0xa68c,	// (0x00083910) find_pinb_pane_g1_ParamLimits

0xa68c,	// (0x00083910) find_pinb_pane_g1

0xa6a4,	// (0x00083928) find_pinb_pane_t1

0xa6b6,	// (0x0008393a) find_pinb_pane_t2

0x0001,

0xf077,	// (0x000882fb) find_pinb_pane_t

0xa6cb,	// (0x0008394f) input_focus_pane_cp01_ParamLimits

0xa6cb,	// (0x0008394f) input_focus_pane_cp01

0xa6d7,	// (0x0008395b) cell_pinb_pane_ParamLimits

0xa6d7,	// (0x0008395b) cell_pinb_pane

0xa6e5,	// (0x00083969) cell_pinb_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_pinb_pane_g1

0xa6f3,	// (0x00083977) cell_pinb_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) cell_pinb_pane_g2

0xa6f3,	// (0x00083977) cell_pinb_pane_g3_ParamLimits

0xa6f3,	// (0x00083977) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00088300) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00088300) cell_pinb_pane_g

0xa40f,	// (0x00083693) grid_highlight_pane_cp01

0xa6d7,	// (0x0008395b) list_pinb_item_pane_ParamLimits

0xa6d7,	// (0x0008395b) list_pinb_item_pane

0x9f77,	// (0x000831fb) list_highlight_pane_cp02

0xa701,	// (0x00083985) list_pinb_item_pane_g1_ParamLimits

0xa701,	// (0x00083985) list_pinb_item_pane_g1

0xa6f3,	// (0x00083977) list_pinb_item_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) list_pinb_item_pane_g2

0xa6e5,	// (0x00083969) list_pinb_item_pane_g3_ParamLimits

0xa6e5,	// (0x00083969) list_pinb_item_pane_g3

0xa6f3,	// (0x00083977) list_pinb_item_pane_g4_ParamLimits

0xa6f3,	// (0x00083977) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00088307) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00088307) list_pinb_item_pane_g

0xa70f,	// (0x00083993) list_pinb_item_pane_t1_ParamLimits

0xa70f,	// (0x00083993) list_pinb_item_pane_t1

0x137d,	// (0x0007a601) calc_display_pane

0x13a2,	// (0x0007a626) calc_paper_pane

0x13c5,	// (0x0007a649) grid_calc_pane

0x9f77,	// (0x000831fb) bg_list_pane_cp01

0xa72b,	// (0x000839af) clock_g1

0xa72b,	// (0x000839af) clock_g2

0x0001,

0xf08c,	// (0x00088310) clock_g

0xa735,	// (0x000839b9) clock_t1_ParamLimits

0xa735,	// (0x000839b9) clock_t1

0xa749,	// (0x000839cd) clock_t2_ParamLimits

0xa749,	// (0x000839cd) clock_t2

0xa749,	// (0x000839cd) clock_t3_ParamLimits

0xa749,	// (0x000839cd) clock_t3

0xa749,	// (0x000839cd) clock_t4_ParamLimits

0xa749,	// (0x000839cd) clock_t4

0xa735,	// (0x000839b9) clock_t5_ParamLimits

0xa735,	// (0x000839b9) clock_t5

0xa749,	// (0x000839cd) clock_t6_ParamLimits

0xa749,	// (0x000839cd) clock_t6

0xa749,	// (0x000839cd) clock_t7_ParamLimits

0xa749,	// (0x000839cd) clock_t7

0xa749,	// (0x000839cd) clock_t8_ParamLimits

0xa749,	// (0x000839cd) clock_t8

0xa749,	// (0x000839cd) clock_t9_ParamLimits

0xa749,	// (0x000839cd) clock_t9

0x0008,

0xf091,	// (0x00088315) clock_t_ParamLimits

0xf091,	// (0x00088315) clock_t

0x9f77,	// (0x000831fb) popup_clock_analogue_window_cp02

0x9f77,	// (0x000831fb) popup_clock_digital_window_cp01

0xa40f,	// (0x00083693) listscroll_help_pane

0xa40f,	// (0x00083693) phob_pre_status_pane

0xa75d,	// (0x000839e1) grid_qdial_pane

0xa66a,	// (0x000838ee) listscroll_mce_pane

0xa66a,	// (0x000838ee) bg_notes_pane

0xa767,	// (0x000839eb) list_notes_pane

0x13f3,	// (0x0007a677) scroll_pane_cp06

0xa775,	// (0x000839f9) bg_calc_paper_pane

0xa789,	// (0x00083a0d) list_calc_pane

0xa7a3,	// (0x00083a27) bg_calc_display_pane

0x1407,	// (0x0007a68b) calc_display_pane_t1

0x1419,	// (0x0007a69d) calc_display_pane_t2

0xa7af,	// (0x00083a33) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00088328) calc_display_pane_t

0x142b,	// (0x0007a6af) cell_calc_pane_ParamLimits

0x142b,	// (0x0007a6af) cell_calc_pane

0xa7c1,	// (0x00083a45) bg_calc_paper_pane_g1

0xa7cd,	// (0x00083a51) bg_calc_paper_pane_g2

0xa7d9,	// (0x00083a5d) bg_calc_paper_pane_g3

0xa7e5,	// (0x00083a69) bg_calc_paper_pane_g4

0xa7f1,	// (0x00083a75) bg_calc_paper_pane_g5

0x1460,	// (0x0007a6e4) bg_calc_paper_pane_g6

0x146f,	// (0x0007a6f3) bg_calc_paper_pane_g7

0x147e,	// (0x0007a702) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0008832f) bg_calc_paper_pane_g

0x1491,	// (0x0007a715) calc_bg_paper_pane_g9

0x14a4,	// (0x0007a728) list_calc_item_pane_ParamLimits

0x14a4,	// (0x0007a728) list_calc_item_pane

0xa7fd,	// (0x00083a81) list_calc_item_pane_g1

0xa80a,	// (0x00083a8e) list_calc_item_pane_t1_ParamLimits

0xa80a,	// (0x00083a8e) list_calc_item_pane_t1

0x14b9,	// (0x0007a73d) list_calc_item_pane_t2_ParamLimits

0x14b9,	// (0x0007a73d) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00088340) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00088340) list_calc_item_pane_t

0xa682,	// (0x00083906) cell_calc_pane_g1

0xa81c,	// (0x00083aa0) grid_highlight_pane_cp02

0xa83e,	// (0x00083ac2) bg_calc_display_pane_g1

0x14eb,	// (0x0007a76f) bg_calc_display_pane_g2

0xe3ee,	// (0x00087672) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0008834a) bg_calc_display_pane_g

0x14f5,	// (0x0007a779) cell_qdial_pane_ParamLimits

0x14f5,	// (0x0007a779) cell_qdial_pane

0x1509,	// (0x0007a78d) cell_qdial_pane_g1_ParamLimits

0x1509,	// (0x0007a78d) cell_qdial_pane_g1

0x151f,	// (0x0007a7a3) cell_qdial_pane_g2_ParamLimits

0x151f,	// (0x0007a7a3) cell_qdial_pane_g2

0xa847,	// (0x00083acb) cell_qdial_pane_g3_ParamLimits

0xa847,	// (0x00083acb) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00088351) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00088351) cell_qdial_pane_g

0x1545,	// (0x0007a7c9) cell_qdial_pane_t1_ParamLimits

0x1545,	// (0x0007a7c9) cell_qdial_pane_t1

0x155d,	// (0x0007a7e1) cell_qdial_pane_t2_ParamLimits

0x155d,	// (0x0007a7e1) cell_qdial_pane_t2

0x1570,	// (0x0007a7f4) cell_qdial_pane_t3_ParamLimits

0x1570,	// (0x0007a7f4) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0008835a) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0008835a) cell_qdial_pane_t

0xa40f,	// (0x00083693) grid_highlight_pane_cp04

0xa853,	// (0x00083ad7) thumbnail_qdial_pane_ParamLimits

0xa853,	// (0x00083ad7) thumbnail_qdial_pane

0xa8af,	// (0x00083b33) list_help_pane

0xa8b8,	// (0x00083b3c) scroll_pane_cp02

0x1583,	// (0x0007a807) help_list_pane_t1_ParamLimits

0x1583,	// (0x0007a807) help_list_pane_t1

0xa8c1,	// (0x00083b45) bg_notes_pane_g2

0xa8c9,	// (0x00083b4d) bg_notes_pane_g3

0xa8d1,	// (0x00083b55) notes_bg_pane_g1

0xa8d9,	// (0x00083b5d) notes_bg_pane_g4

0xa8e1,	// (0x00083b65) notes_bg_pane_g5

0xa8e9,	// (0x00083b6d) notes_bg_pane_g6

0xa8f1,	// (0x00083b75) notes_bg_pane_g7

0xa8f9,	// (0x00083b7d) notes_bg_pane_g8

0xa901,	// (0x00083b85) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00088378) notes_bg_pane_g

0x15a2,	// (0x0007a826) list_notes_text_pane_ParamLimits

0x15a2,	// (0x0007a826) list_notes_text_pane

0xa909,	// (0x00083b8d) list_notes_text_pane_g1

0xa912,	// (0x00083b96) list_notes_text_pane_t1

0x15b8,	// (0x0007a83c) listscroll_cale_week_pane

0x15e4,	// (0x0007a868) bg_cale_heading_pane

0xa93a,	// (0x00083bbe) bg_cale_pane_cp01

0x15fc,	// (0x0007a880) cale_week_corner_pane

0x161b,	// (0x0007a89f) cale_week_day_heading_pane

0x1638,	// (0x0007a8bc) cale_week_scroll_pane_g1

0x164b,	// (0x0007a8cf) cale_week_scroll_pane_g2

0x1663,	// (0x0007a8e7) cale_week_scroll_pane_g3

0x167b,	// (0x0007a8ff) cale_week_scroll_pane_g4

0x1693,	// (0x0007a917) cale_week_scroll_pane_g5

0x16b3,	// (0x0007a937) cale_week_scroll_pane_g6

0x16d3,	// (0x0007a957) cale_week_scroll_pane_g7

0x16f3,	// (0x0007a977) cale_week_scroll_pane_g8

0x1717,	// (0x0007a99b) cale_week_scroll_pane_g9

0x172f,	// (0x0007a9b3) cale_week_scroll_pane_g10

0x1747,	// (0x0007a9cb) cale_week_scroll_pane_g11

0x175f,	// (0x0007a9e3) cale_week_scroll_pane_g12

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g13

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g14

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00088387) cale_week_scroll_pane_g

0x17b3,	// (0x0007aa37) cale_week_time_pane

0x17d7,	// (0x0007aa5b) grid_cale_week_pane

0xa969,	// (0x00083bed) scroll_pane_cp08

0x17fd,	// (0x0007aa81) cell_cale_week_pane_ParamLimits

0x17fd,	// (0x0007aa81) cell_cale_week_pane

0x188b,	// (0x0007ab0f) cale_week_day_heading_pane_t1

0x18b5,	// (0x0007ab39) cale_week_day_heading_pane_t2

0x18e4,	// (0x0007ab68) cale_week_day_heading_pane_t3

0x1913,	// (0x0007ab97) cale_week_day_heading_pane_t4

0x1942,	// (0x0007abc6) cale_week_day_heading_pane_t5

0x1979,	// (0x0007abfd) cale_week_day_heading_pane_t6

0x19b0,	// (0x0007ac34) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000883a8) cale_week_day_heading_pane_t

0xa986,	// (0x00083c0a) bg_cale_side_pane

0x19da,	// (0x0007ac5e) cale_week_time_pane_t1

0x19f4,	// (0x0007ac78) cale_week_time_pane_t2

0x1a0e,	// (0x0007ac92) cale_week_time_pane_t3

0x1a28,	// (0x0007acac) cale_week_time_pane_t4

0x1a42,	// (0x0007acc6) cale_week_time_pane_t5

0x1a5c,	// (0x0007ace0) cale_week_time_pane_t6

0x1a76,	// (0x0007acfa) cale_week_time_pane_t7

0x1a90,	// (0x0007ad14) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000883b7) cale_week_time_pane_t

0x1ab0,	// (0x0007ad34) cell_cale_week_pane_g2

0x1ad4,	// (0x0007ad58) cell_cale_week_pane_g3_ParamLimits

0x1ad4,	// (0x0007ad58) cell_cale_week_pane_g3

0xa994,	// (0x00083c18) grid_highlight_pane_cp07

0xa99c,	// (0x00083c20) listscroll_gms_pane

0xa9a6,	// (0x00083c2a) grid_gms_pane

0xa9af,	// (0x00083c33) listscroll_gms_pane_g1

0xa9b7,	// (0x00083c3b) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000883c8) listscroll_gms_pane_g

0x1aec,	// (0x0007ad70) scroll_pane_cp010

0x1af7,	// (0x0007ad7b) cell_gms_pane_ParamLimits

0x1af7,	// (0x0007ad7b) cell_gms_pane

0x1b09,	// (0x0007ad8d) cell_gms_pane_g1

0xa9bf,	// (0x00083c43) cell_gms_pane_g2

0xa909,	// (0x00083b8d) cell_gms_pane_g3

0xa9c7,	// (0x00083c4b) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000883cd) cell_gms_pane_g

0xa9d0,	// (0x00083c54) grid_highlight_pane_cp09

0x372a,	// (0x0007c9ae) phob_pre_status_pane_g1

0x3732,	// (0x0007c9b6) phob_pre_status_pane_g2

0x373a,	// (0x0007c9be) phob_pre_status_pane_g3

0x3742,	// (0x0007c9c6) phob_pre_status_pane_g4

0x0004,

0xf4f8,	// (0x0008877c) phob_pre_status_pane_g

0x3752,	// (0x0007c9d6) phob_pre_status_pane_t1

0x3760,	// (0x0007c9e4) phob_pre_status_pane_t2

0x3770,	// (0x0007c9f4) phob_pre_status_pane_t3

0x0002,

0xf503,	// (0x00088787) phob_pre_status_pane_t

0xa9d8,	// (0x00083c5c) bg_list_pane_cp05

0x1b19,	// (0x0007ad9d) grid_vorec_pane

0x1b21,	// (0x0007ada5) vorec_t1

0x1b2f,	// (0x0007adb3) vorec_t2

0x1b3d,	// (0x0007adc1) vorec_t3

0x1b4b,	// (0x0007adcf) vorec_t4

0xe916,	// (0x00087b9a) vorec_t5

0x9118,	// (0x0008239c) vorec_t6

0x0004,

0xf152,	// (0x000883d6) vorec_t

0x9126,	// (0x000823aa) wait_bar_pane_cp01

0x1b67,	// (0x0007adeb) cell_vorec_pane_ParamLimits

0x1b67,	// (0x0007adeb) cell_vorec_pane

0xa9e0,	// (0x00083c64) cell_vorec_pane_g1

0xa40f,	// (0x00083693) grid_highlight_pane_cp05

0x9fee,	// (0x00083272) cams_zoom_pane

0x9fee,	// (0x00083272) image_vga_pane

0xa6e5,	// (0x00083969) main_camera_pane_g1

0xa6e5,	// (0x00083969) main_camera_pane_g2

0xa6e5,	// (0x00083969) main_camera_pane_g3

0xa6e5,	// (0x00083969) main_camera_pane_g4

0xa6e5,	// (0x00083969) main_camera_pane_g5

0xa6e5,	// (0x00083969) main_camera_pane_g6

0xa6e5,	// (0x00083969) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000883e1) main_camera_pane_g

0xa735,	// (0x000839b9) main_camera_pane_t1

0xa735,	// (0x000839b9) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000883f2) main_camera_pane_t

0x1b8e,	// (0x0007ae12) cams_zoom_pane_cp_ParamLimits

0x1b8e,	// (0x0007ae12) cams_zoom_pane_cp

0x1bc2,	// (0x0007ae46) image_cif_pane_ParamLimits

0x1bc2,	// (0x0007ae46) image_cif_pane

0x9f77,	// (0x000831fb) image_subqcif_pane

0x1bd4,	// (0x0007ae58) main_video_pane_g1_ParamLimits

0x1bd4,	// (0x0007ae58) main_video_pane_g1

0x1c02,	// (0x0007ae86) main_video_pane_g2_ParamLimits

0x1c02,	// (0x0007ae86) main_video_pane_g2

0x1c3c,	// (0x0007aec0) main_video_pane_g3_ParamLimits

0x1c3c,	// (0x0007aec0) main_video_pane_g3

0x1c3c,	// (0x0007aec0) main_video_pane_g4_ParamLimits

0x1c3c,	// (0x0007aec0) main_video_pane_g4

0x1c70,	// (0x0007aef4) main_video_pane_g5_ParamLimits

0x1c70,	// (0x0007aef4) main_video_pane_g5

0xa9ea,	// (0x00083c6e) main_video_pane_g6_ParamLimits

0xa9ea,	// (0x00083c6e) main_video_pane_g6

0x0006,

0xf173,	// (0x000883f7) main_video_pane_g_ParamLimits

0xf173,	// (0x000883f7) main_video_pane_g

0x1c8c,	// (0x0007af10) main_video_pane_t1_ParamLimits

0x1c8c,	// (0x0007af10) main_video_pane_t1

0xa72b,	// (0x000839af) cams_zoom_pane_g1

0xa72b,	// (0x000839af) cams_zoom_pane_g2

0xa72b,	// (0x000839af) cams_zoom_pane_g3

0xa72b,	// (0x000839af) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00088406) cams_zoom_pane_g

0x9fee,	// (0x00083272) grid_cams_pane

0x9fee,	// (0x00083272) linegrid_cams_pane

0x1cd0,	// (0x0007af54) cell_cams_pane_ParamLimits

0x1cd0,	// (0x0007af54) cell_cams_pane

0x9f77,	// (0x000831fb) cams_burst_image_pane

0xa72b,	// (0x000839af) cell_cams_pane_g1

0x9f77,	// (0x000831fb) grid_highlight_pane_cp03

0xa682,	// (0x00083906) mp_bg_pane_g1

0x9f77,	// (0x000831fb) bg_list_pane_cp03

0x9f77,	// (0x000831fb) bg_mp_pane

0x9f77,	// (0x000831fb) grid_mp_pane

0xa72b,	// (0x000839af) media_player_g1

0xaf05,	// (0x00084189) media_player_t1

0xaf05,	// (0x00084189) media_player_t2

0xaf05,	// (0x00084189) media_player_t3

0xaf05,	// (0x00084189) media_player_t4

0xaf05,	// (0x00084189) media_player_t5

0xaf05,	// (0x00084189) media_player_t6

0xaf05,	// (0x00084189) media_player_t7

0x0006,

0xf4e2,	// (0x00088766) media_player_t

0x9f77,	// (0x000831fb) wait_bar_pane_cp02

0xf4c7,	// (0x0008874b) main_usb_pane_t

0xb1df,	// (0x00084463) cell_mp_pane

0xa682,	// (0x00083906) cell_mp_pane_g1

0xa40f,	// (0x00083693) grid_highlight_pane_cp06

0xaa04,	// (0x00083c88) grid_skin_colour_pane

0xaa0c,	// (0x00083c90) list_highlight_pane_cp03

0x1ce5,	// (0x0007af69) skin_g1

0xaa14,	// (0x00083c98) skin_t1

0xaa23,	// (0x00083ca7) skin_t2

0x0001,

0xf1b0,	// (0x00088434) skin_t

0x1ced,	// (0x0007af71) cell_skin_colour_pane_ParamLimits

0x1ced,	// (0x0007af71) cell_skin_colour_pane

0xaa31,	// (0x00083cb5) cell_skin_colour_pane_g1

0x1d66,	// (0x0007afea) call_video_g1_ParamLimits

0x1d66,	// (0x0007afea) call_video_g1

0x1d82,	// (0x0007b006) call_video_g2_ParamLimits

0x1d82,	// (0x0007b006) call_video_g2

0x0001,

0xf1b5,	// (0x00088439) call_video_g_ParamLimits

0xf1b5,	// (0x00088439) call_video_g

0x1dd4,	// (0x0007b058) call_video_uplink_pane_cp1_ParamLimits

0x1dd4,	// (0x0007b058) call_video_uplink_pane_cp1

0xaa43,	// (0x00083cc7) call_video_uplink_pane_cp2

0x1e73,	// (0x0007b0f7) video_down_crop_pane_ParamLimits

0x1e73,	// (0x0007b0f7) video_down_crop_pane

0x1f5c,	// (0x0007b1e0) video_down_pane_ParamLimits

0x1f5c,	// (0x0007b1e0) video_down_pane

0xaa4b,	// (0x00083ccf) video_down_subqcif_pane_ParamLimits

0xaa4b,	// (0x00083ccf) video_down_subqcif_pane

0xaa63,	// (0x00083ce7) video_down_subqcif_pane_cp_ParamLimits

0xaa63,	// (0x00083ce7) video_down_subqcif_pane_cp

0xaa89,	// (0x00083d0d) im_reading_pane_ParamLimits

0xaa89,	// (0x00083d0d) im_reading_pane

0x206c,	// (0x0007b2f0) im_writing_pane_ParamLimits

0x206c,	// (0x0007b2f0) im_writing_pane

0x2082,	// (0x0007b306) im_reading_pane_t1

0xaaa3,	// (0x00083d27) list_im_pane

0xaab4,	// (0x00083d38) scroll_pane_cp07

0x20bc,	// (0x0007b340) im_writing_pane_t1_ParamLimits

0x20bc,	// (0x0007b340) im_writing_pane_t1

0xaacd,	// (0x00083d51) im_writing_pane_t2_ParamLimits

0xaacd,	// (0x00083d51) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00088443) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00088443) im_writing_pane_t

0xa40f,	// (0x00083693) input_focus_pane_cp04

0xa40f,	// (0x00083693) input_focus_pane_cp05

0x20d1,	// (0x0007b355) list_im_single_pane_ParamLimits

0x20d1,	// (0x0007b355) list_im_single_pane

0x20e6,	// (0x0007b36a) list_single_im_pane_t1

0xa9d8,	// (0x00083c5c) blid_accuracy_pane

0xa9d8,	// (0x00083c5c) blid_compass_pane

0xc793,	// (0x00085a17) main_location_t1

0xc793,	// (0x00085a17) main_location_t2

0xc793,	// (0x00085a17) main_location_t3

0x0002,

0xf4f1,	// (0x00088775) main_location_t

0xa40f,	// (0x00083693) aid_levels_location

0xa682,	// (0x00083906) blid_accuracy_pane_g1

0xa682,	// (0x00083906) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x00088492) blid_accuracy_pane_g

0xab15,	// (0x00083d99) wml_content_pane

0xab53,	// (0x00083dd7) wml_button_pane_ParamLimits

0xab53,	// (0x00083dd7) wml_button_pane

0x20f5,	// (0x0007b379) wml_list_single_large_pane_ParamLimits

0x20f5,	// (0x0007b379) wml_list_single_large_pane

0x210a,	// (0x0007b38e) wml_list_single_medium_pane_ParamLimits

0x210a,	// (0x0007b38e) wml_list_single_medium_pane

0x2121,	// (0x0007b3a5) wml_list_single_small_pane_ParamLimits

0x2121,	// (0x0007b3a5) wml_list_single_small_pane

0xab67,	// (0x00083deb) wml_selection_box_pane_ParamLimits

0xab67,	// (0x00083deb) wml_selection_box_pane

0xab7a,	// (0x00083dfe) wml_list_single_pane_t1

0xab89,	// (0x00083e0d) wml_list_single_medium_pane_t1

0xab98,	// (0x00083e1c) wml_list_single_large_pane_t1

0xaba7,	// (0x00083e2b) input_focus_pane_cp02_ParamLimits

0xaba7,	// (0x00083e2b) input_focus_pane_cp02

0xabba,	// (0x00083e3e) wml_selection_box_pane_g1

0xabc3,	// (0x00083e47) wml_selection_box_pane_t1_ParamLimits

0xabc3,	// (0x00083e47) wml_selection_box_pane_t1

0xa66a,	// (0x000838ee) bg_wml_button_pane_ParamLimits

0xa66a,	// (0x000838ee) bg_wml_button_pane

0xabdb,	// (0x00083e5f) wml_button_pane_g1

0xabe3,	// (0x00083e67) wml_button_pane_t1

0xabdb,	// (0x00083e5f) wml_button_bg_pane_g1

0xabf3,	// (0x00083e77) wml_button_bg_pane_g2

0xabfb,	// (0x00083e7f) wml_button_bg_pane_g3

0xac03,	// (0x00083e87) wml_button_bg_pane_g4

0xac0b,	// (0x00083e8f) wml_button_bg_pane_g5

0xac13,	// (0x00083e97) wml_button_bg_pane_g6

0xac1b,	// (0x00083e9f) wml_button_bg_pane_g7

0xac23,	// (0x00083ea7) wml_button_bg_pane_g8

0xac2b,	// (0x00083eaf) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00088448) wml_button_bg_pane_g

0x213a,	// (0x0007b3be) bg_list_pane_cp02

0xac33,	// (0x00083eb7) mce_header_pane_ParamLimits

0xac33,	// (0x00083eb7) mce_header_pane

0xac49,	// (0x00083ecd) mce_icon_pane

0xac49,	// (0x00083ecd) mce_image_pane

0xac52,	// (0x00083ed6) mce_text_pane_ParamLimits

0xac52,	// (0x00083ed6) mce_text_pane

0x2142,	// (0x0007b3c6) scroll_pane_cp03

0xab4b,	// (0x00083dcf) scroll_pane_cp04

0xac65,	// (0x00083ee9) scroll_pane_cp05_ParamLimits

0xac65,	// (0x00083ee9) scroll_pane_cp05

0x214c,	// (0x0007b3d0) mce_header_field_pane_ParamLimits

0x214c,	// (0x0007b3d0) mce_header_field_pane

0x2163,	// (0x0007b3e7) mce_header_field_pane_2_ParamLimits

0x2163,	// (0x0007b3e7) mce_header_field_pane_2

0x2179,	// (0x0007b3fd) mce_header_field_pane_3

0x2181,	// (0x0007b405) list_single_mce_message_pane_ParamLimits

0x2181,	// (0x0007b405) list_single_mce_message_pane

0x2197,	// (0x0007b41b) list_single_mce_smart_pane_ParamLimits

0x2197,	// (0x0007b41b) list_single_mce_smart_pane

0xac71,	// (0x00083ef5) input_focus_pane_cp03

0xac7a,	// (0x00083efe) list_header_data_pane

0x21b8,	// (0x0007b43c) mce_header_field_pane_t1

0x21c8,	// (0x0007b44c) list_single_mce_header_pane_ParamLimits

0x21c8,	// (0x0007b44c) list_single_mce_header_pane

0xac82,	// (0x00083f06) list_single_mce_header_pane_t1

0xac91,	// (0x00083f15) list_single_mce_message_pane_g1

0xac99,	// (0x00083f1d) list_single_mce_message_pane_t1

0x2202,	// (0x0007b486) bg_cale_heading_pane_cp01_ParamLimits

0x2202,	// (0x0007b486) bg_cale_heading_pane_cp01

0xaca7,	// (0x00083f2b) bg_cale_pane_cp02_ParamLimits

0xaca7,	// (0x00083f2b) bg_cale_pane_cp02

0x223c,	// (0x0007b4c0) cale_month_corner_pane

0x225b,	// (0x0007b4df) cale_month_day_heading_pane_ParamLimits

0x225b,	// (0x0007b4df) cale_month_day_heading_pane

0x22ad,	// (0x0007b531) cale_month_pane_g1_ParamLimits

0x22ad,	// (0x0007b531) cale_month_pane_g1

0x22dc,	// (0x0007b560) cale_month_pane_g2_ParamLimits

0x22dc,	// (0x0007b560) cale_month_pane_g2

0x230c,	// (0x0007b590) cale_month_pane_g3_ParamLimits

0x230c,	// (0x0007b590) cale_month_pane_g3

0x2348,	// (0x0007b5cc) cale_month_pane_g4_ParamLimits

0x2348,	// (0x0007b5cc) cale_month_pane_g4

0x2384,	// (0x0007b608) cale_month_pane_g5_ParamLimits

0x2384,	// (0x0007b608) cale_month_pane_g5

0x23cc,	// (0x0007b650) cale_month_pane_g6_ParamLimits

0x23cc,	// (0x0007b650) cale_month_pane_g6

0x2418,	// (0x0007b69c) cale_month_pane_g7_ParamLimits

0x2418,	// (0x0007b69c) cale_month_pane_g7

0x2468,	// (0x0007b6ec) cale_month_pane_g8_ParamLimits

0x2468,	// (0x0007b6ec) cale_month_pane_g8

0x24bc,	// (0x0007b740) cale_month_pane_g9_ParamLimits

0x24bc,	// (0x0007b740) cale_month_pane_g9

0x250e,	// (0x0007b792) cale_month_pane_g10_ParamLimits

0x250e,	// (0x0007b792) cale_month_pane_g10

0x2560,	// (0x0007b7e4) cale_month_pane_g11_ParamLimits

0x2560,	// (0x0007b7e4) cale_month_pane_g11

0x25b2,	// (0x0007b836) cale_month_pane_g12_ParamLimits

0x25b2,	// (0x0007b836) cale_month_pane_g12

0x2604,	// (0x0007b888) cale_month_pane_g13_ParamLimits

0x2604,	// (0x0007b888) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0008845b) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0008845b) cale_month_pane_g

0x2656,	// (0x0007b8da) cale_month_week_pane

0x267a,	// (0x0007b8fe) grid_cale_month_pane_ParamLimits

0x267a,	// (0x0007b8fe) grid_cale_month_pane

0x26c3,	// (0x0007b947) cale_month_day_heading_pane_t1

0x2705,	// (0x0007b989) cale_month_day_heading_pane_t2

0x273a,	// (0x0007b9be) cale_month_day_heading_pane_t3

0x276f,	// (0x0007b9f3) cale_month_day_heading_pane_t4

0x27ac,	// (0x0007ba30) cale_month_day_heading_pane_t5

0x27f1,	// (0x0007ba75) cale_month_day_heading_pane_t6

0x2836,	// (0x0007baba) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00088476) cale_month_day_heading_pane_t

0xa986,	// (0x00083c0a) bg_cale_side_pane_cp01

0x2883,	// (0x0007bb07) cale_month_week_pane_t1

0x289c,	// (0x0007bb20) cale_month_week_pane_t2

0x28b5,	// (0x0007bb39) cale_month_week_pane_t3

0x28ce,	// (0x0007bb52) cale_month_week_pane_t4

0x28e7,	// (0x0007bb6b) cale_month_week_pane_t5

0x2900,	// (0x0007bb84) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00088485) cale_month_week_pane_t

0x2919,	// (0x0007bb9d) cell_cale_month_pane_ParamLimits

0x2919,	// (0x0007bb9d) cell_cale_month_pane

0xace6,	// (0x00083f6a) cell_cale_month_pane_g1

0x2a47,	// (0x0007bccb) cell_cale_month_pane_t1_ParamLimits

0x2a47,	// (0x0007bccb) cell_cale_month_pane_t1

0xa994,	// (0x00083c18) grid_highlight_pane_cp08

0xa682,	// (0x00083906) main_smil_g1

0x2a73,	// (0x0007bcf7) smil_status_pane

0xacf2,	// (0x00083f76) smil_text_pane

0xa8f9,	// (0x00083b7d) bg_popup_call3_rect_pane_g8

0xa901,	// (0x00083b85) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00088497) bg_popup_call3_rect_pane_g

0xc8b8,	// (0x00085b3c) smil_status_volume_pane_g1

0xacfc,	// (0x00083f80) smil_status_pane_t1

0xc8eb,	// (0x00085b6f) volume_smil_pane

0xad13,	// (0x00083f97) list_smil_text_pane

0x2a88,	// (0x0007bd0c) scroll_pane_cp011

0x2a93,	// (0x0007bd17) smil_text_list_pane_t1_ParamLimits

0x2a93,	// (0x0007bd17) smil_text_list_pane_t1

0xad1d,	// (0x00083fa1) aid_volume_smil_ParamLimits

0xad1d,	// (0x00083fa1) aid_volume_smil

0xa682,	// (0x00083906) smil_volume_pane_g1

0xa682,	// (0x00083906) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x00088492) smil_volume_pane_g

0x15b8,	// (0x0007a83c) listscroll_cale_day_pane

0xad3f,	// (0x00083fc3) bg_cale_pane

0xad57,	// (0x00083fdb) list_cale_pane

0xad7a,	// (0x00083ffe) scroll_pane_cp09

0xa8d1,	// (0x00083b55) cale_bg_pane_g1

0xa8c1,	// (0x00083b45) cale_bg_pane_g2

0xa8c9,	// (0x00083b4d) cale_bg_pane_g3

0xa8d9,	// (0x00083b5d) cale_bg_pane_g4

0xa8e1,	// (0x00083b65) cale_bg_pane_g5

0xa8e9,	// (0x00083b6d) cale_bg_pane_g6

0xa8f1,	// (0x00083b75) cale_bg_pane_g7

0xa8f9,	// (0x00083b7d) cale_bg_pane_g8

0xa901,	// (0x00083b85) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00088497) cale_bg_pane_g

0x2adf,	// (0x0007bd63) list_cale_time_pane_ParamLimits

0x2adf,	// (0x0007bd63) list_cale_time_pane

0xad8b,	// (0x0008400f) list_cale_time_pane_g1_ParamLimits

0xad8b,	// (0x0008400f) list_cale_time_pane_g1

0xad97,	// (0x0008401b) list_cale_time_pane_g2_ParamLimits

0xad97,	// (0x0008401b) list_cale_time_pane_g2

0x2af5,	// (0x0007bd79) list_cale_time_pane_g3_ParamLimits

0x2af5,	// (0x0007bd79) list_cale_time_pane_g3

0x2b03,	// (0x0007bd87) list_cale_time_pane_g4_ParamLimits

0x2b03,	// (0x0007bd87) list_cale_time_pane_g4

0x2b11,	// (0x0007bd95) list_cale_time_pane_g5_ParamLimits

0x2b11,	// (0x0007bd95) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000884aa) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000884aa) list_cale_time_pane_g

0xadb1,	// (0x00084035) list_cale_time_pane_t1_ParamLimits

0xadb1,	// (0x00084035) list_cale_time_pane_t1

0xadd9,	// (0x0008405d) list_cale_time_pane_t2_ParamLimits

0xadd9,	// (0x0008405d) list_cale_time_pane_t2

0x2d9e,	// (0x0007c022) aid_blid_cardinal_pane

0x2ddc,	// (0x0007c060) compass_pane_t4

0xae01,	// (0x00084085) list_cale_time_pane_t4_ParamLimits

0xae01,	// (0x00084085) list_cale_time_pane_t4

0x2dea,	// (0x0007c06e) compass_pane_t5

0x2df8,	// (0x0007c07c) compass_pane_t6

0x2e06,	// (0x0007c08a) compass_pane_t7

0xb2f9,	// (0x0008457d) navi_pane_cc_t1

0xb4e8,	// (0x0008476c) aid_phob_thumbnail_center_pane

0x317c,	// (0x0007c400) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000884b7) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000884b7) list_cale_time_pane_t

0xa066,	// (0x000832ea) bg_popup_window_pane_cp02_ParamLimits

0xa066,	// (0x000832ea) bg_popup_window_pane_cp02

0xae29,	// (0x000840ad) heading_pane_cp01_ParamLimits

0xae29,	// (0x000840ad) heading_pane_cp01

0xae35,	// (0x000840b9) loc_req_pane_ParamLimits

0xae35,	// (0x000840b9) loc_req_pane

0xae47,	// (0x000840cb) loc_type_pane_ParamLimits

0xae47,	// (0x000840cb) loc_type_pane

0xae59,	// (0x000840dd) loc_type_pane_t1_ParamLimits

0xae59,	// (0x000840dd) loc_type_pane_t1

0xae6b,	// (0x000840ef) loc_type_pane_t2_ParamLimits

0xae6b,	// (0x000840ef) loc_type_pane_t2

0xae7d,	// (0x00084101) loc_type_pane_t3_ParamLimits

0xae7d,	// (0x00084101) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000884be) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000884be) loc_type_pane_t

0xae8f,	// (0x00084113) list_loc_req_pane

0xae99,	// (0x0008411d) scroll_pane_cp012

0x2b1f,	// (0x0007bda3) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b1f,	// (0x0007bda3) list_single_loc_request_popup_menu_pane

0xaea4,	// (0x00084128) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaea4,	// (0x00084128) list_single_loc_request_popup_menu_pane_g1

0xaeb0,	// (0x00084134) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeb0,	// (0x00084134) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000884c5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000884c5) list_single_loc_request_popup_menu_pane_g

0xaebc,	// (0x00084140) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaebc,	// (0x00084140) list_single_loc_request_popup_menu_pane_t1

0xa66a,	// (0x000838ee) bg_popup_window_pane_cp03_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_window_pane_cp03

0xaed2,	// (0x00084156) heading_loc_req_pane_ParamLimits

0xaed2,	// (0x00084156) heading_loc_req_pane

0x2b2c,	// (0x0007bdb0) popup_dyc_status_message_window_g1_ParamLimits

0x2b2c,	// (0x0007bdb0) popup_dyc_status_message_window_g1

0x2b40,	// (0x0007bdc4) popup_dyc_status_message_window_t1_ParamLimits

0x2b40,	// (0x0007bdc4) popup_dyc_status_message_window_t1

0x2b55,	// (0x0007bdd9) popup_dyc_status_message_window_t2_ParamLimits

0x2b55,	// (0x0007bdd9) popup_dyc_status_message_window_t2

0x2b6a,	// (0x0007bdee) popup_dyc_status_message_window_t3_ParamLimits

0x2b6a,	// (0x0007bdee) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000884ca) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000884ca) popup_dyc_status_message_window_t

0xa40f,	// (0x00083693) bg_heading_pane_cp01

0xaede,	// (0x00084162) heading_loc_req_pane_g1

0xaee6,	// (0x0008416a) heading_loc_req_pane_g2

0xaeee,	// (0x00084172) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000884d1) heading_loc_req_pane_g

0xaef6,	// (0x0008417a) heading_loc_req_pane_t1

0xaf15,	// (0x00084199) bg_popup_sub_pane_cp01_ParamLimits

0xaf15,	// (0x00084199) bg_popup_sub_pane_cp01

0xaf23,	// (0x000841a7) popup_cale_events_window_g1_ParamLimits

0xaf23,	// (0x000841a7) popup_cale_events_window_g1

0xaf43,	// (0x000841c7) popup_cale_events_window_g2_ParamLimits

0xaf43,	// (0x000841c7) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000884f3) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000884f3) popup_cale_events_window_g

0xaf63,	// (0x000841e7) popup_cale_events_window_t1_ParamLimits

0xaf63,	// (0x000841e7) popup_cale_events_window_t1

0xaf75,	// (0x000841f9) popup_cale_events_window_t2_ParamLimits

0xaf75,	// (0x000841f9) popup_cale_events_window_t2

0xafb3,	// (0x00084237) popup_cale_events_window_t3_ParamLimits

0xafb3,	// (0x00084237) popup_cale_events_window_t3

0xafed,	// (0x00084271) popup_cale_events_window_t4_ParamLimits

0xafed,	// (0x00084271) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x000884f8) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x000884f8) popup_cale_events_window_t

0x2b92,	// (0x0007be16) call_type_pane

0x2ba2,	// (0x0007be26) popup_call_status_window_g1

0x2bb6,	// (0x0007be3a) popup_call_status_window_g2

0x2bca,	// (0x0007be4e) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x00088501) popup_call_status_window_g

0xb023,	// (0x000842a7) call_type_pane_g1

0xb02c,	// (0x000842b0) call_type_pane_g2

0x0001,

0xf284,	// (0x00088508) call_type_pane_g

0xa40f,	// (0x00083693) bg_popup_sub_pane_cp02

0xb035,	// (0x000842b9) listscroll_popup_wml_pane

0xb03d,	// (0x000842c1) list_wml_pane

0xb047,	// (0x000842cb) scroll_pane_cp013

0xb052,	// (0x000842d6) list_single_graphic_popup_wml_pane_ParamLimits

0xb052,	// (0x000842d6) list_single_graphic_popup_wml_pane

0xa682,	// (0x00083906) list_single_graphic_popup_wml_pane_g1

0xb066,	// (0x000842ea) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0008850d) list_single_graphic_popup_wml_pane_g

0xb06e,	// (0x000842f2) list_single_graphic_popup_wml_pane_t1

0xb084,	// (0x00084308) aid_call_pane

0xa662,	// (0x000838e6) popup_clock_analogue_window_g1

0xa662,	// (0x000838e6) popup_clock_analogue_window_g2

0xb08c,	// (0x00084310) popup_clock_analogue_window_g3

0xb08c,	// (0x00084310) popup_clock_analogue_window_g4

0xa682,	// (0x00083906) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x00088512) popup_clock_analogue_window_g

0xb094,	// (0x00084318) popup_clock_analogue_window_t1

0xb0a2,	// (0x00084326) clock_digital_number_pane_ParamLimits

0xb0a2,	// (0x00084326) clock_digital_number_pane

0xb0ae,	// (0x00084332) clock_digital_number_pane_cp02_ParamLimits

0xb0ae,	// (0x00084332) clock_digital_number_pane_cp02

0xb0ba,	// (0x0008433e) clock_digital_number_pane_cp03_ParamLimits

0xb0ba,	// (0x0008433e) clock_digital_number_pane_cp03

0xb0c6,	// (0x0008434a) clock_digital_number_pane_cp04_ParamLimits

0xb0c6,	// (0x0008434a) clock_digital_number_pane_cp04

0xb0d2,	// (0x00084356) clock_digital_separator_pane_ParamLimits

0xb0d2,	// (0x00084356) clock_digital_separator_pane

0xb0de,	// (0x00084362) popup_clock_digital_window_t1

0xa682,	// (0x00083906) clock_digital_number_pane_g1

0xa682,	// (0x00083906) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x00088492) clock_digital_number_pane_g

0xa682,	// (0x00083906) clock_digital_separator_pane_g1

0xa682,	// (0x00083906) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x00088492) clock_digital_separator_pane_g

0xa40f,	// (0x00083693) bg_popup_window_pane_cp04

0xb0fb,	// (0x0008437f) heading_pane_cp03

0xa9d8,	// (0x00083c5c) listscroll_popup_gms_pane

0xa40f,	// (0x00083693) grid_large_graphic_popup_pane

0xb103,	// (0x00084387) listscroll_popup_gms_pane_g1

0xb10c,	// (0x00084390) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0008851d) listscroll_popup_gms_pane_g

0xb115,	// (0x00084399) scroll_pane_cp014

0xa6d7,	// (0x0008395b) cell_large_graphic_popup_pane_ParamLimits

0xa6d7,	// (0x0008395b) cell_large_graphic_popup_pane

0xa6e5,	// (0x00083969) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_large_graphic_popup_pane_g1

0xb11e,	// (0x000843a2) cell_large_graphic_popup_pane_g2_ParamLimits

0xb11e,	// (0x000843a2) cell_large_graphic_popup_pane_g2

0xb12c,	// (0x000843b0) cell_large_graphic_popup_pane_g3_ParamLimits

0xb12c,	// (0x000843b0) cell_large_graphic_popup_pane_g3

0xb13a,	// (0x000843be) cell_large_graphic_popup_pane_g4_ParamLimits

0xb13a,	// (0x000843be) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x00088522) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x00088522) cell_large_graphic_popup_pane_g

0xa40f,	// (0x00083693) grid_highlight_pane_cp010

0xa682,	// (0x00083906) bg_popup_call_pane_g1

0xb14b,	// (0x000843cf) list_single_graphic_popup_conf_pane_ParamLimits

0xb14b,	// (0x000843cf) list_single_graphic_popup_conf_pane

0xb15e,	// (0x000843e2) list_highlight_pane_cp01

0xb167,	// (0x000843eb) list_single_graphic_popup_conf_pane_g1

0xb16f,	// (0x000843f3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0008852b) list_single_graphic_popup_conf_pane_g

0xb177,	// (0x000843fb) list_single_graphic_popup_conf_pane_t1

0xb185,	// (0x00084409) linegrid_cams_pane_g1

0x2bd9,	// (0x0007be5d) linegrid_cams_pane_g2

0xa909,	// (0x00083b8d) linegrid_cams_pane_g3

0xb18e,	// (0x00084412) linegrid_cams_pane_g4

0x2be2,	// (0x0007be66) linegrid_cams_pane_g5

0x2beb,	// (0x0007be6f) linegrid_cams_pane_g6

0xa9c7,	// (0x00083c4b) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x00088530) linegrid_cams_pane_g

0xb197,	// (0x0008441b) popup_clock_analogue_window

0xb197,	// (0x0008441b) popup_clock_digital_window

0xa40f,	// (0x00083693) popup_phob_thumbnail_window

0xa682,	// (0x00083906) call_video_uplink_pane_g1

0xb1a0,	// (0x00084424) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0008853f) call_video_uplink_pane_g

0xb1a8,	// (0x0008442c) video_uplink_pane

0xb1b0,	// (0x00084434) mce_image_pane_g1

0x2bf6,	// (0x0007be7a) mce_image_pane_g2

0x2bfe,	// (0x0007be82) mce_image_pane_g3

0x2c06,	// (0x0007be8a) mce_image_pane_g4

0x2c10,	// (0x0007be94) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x00088544) mce_image_pane_g

0xb1ba,	// (0x0008443e) control_top_pane_stacon_cp01_ParamLimits

0xb1ba,	// (0x0008443e) control_top_pane_stacon_cp01

0xb1ce,	// (0x00084452) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1ce,	// (0x00084452) uni_indicator_pane_stacon_cp01

0xb1df,	// (0x00084463) bg_popup_sub_pane_cp03

0x2c18,	// (0x0007be9c) chi_dic_find_pane

0x2c20,	// (0x0007bea4) listscroll_chi_dic_pane

0x2c29,	// (0x0007bead) main_pane_chidic_g1

0x2c3c,	// (0x0007bec0) chi_dic_find_pane_t1

0xb1e9,	// (0x0008446d) find_chidic_pane

0xb1f2,	// (0x00084476) chi_dic_list_pane_ParamLimits

0xb1f2,	// (0x00084476) chi_dic_list_pane

0xb203,	// (0x00084487) scroll_pane_cp020

0x2c4a,	// (0x0007bece) find_chidic_pane_t1

0xa40f,	// (0x00083693) input_focus_pane_cp06

0x2c59,	// (0x0007bedd) list_chi_dic_pane_ParamLimits

0x2c59,	// (0x0007bedd) list_chi_dic_pane

0x2c6b,	// (0x0007beef) list_chi_dic_pane_t1_ParamLimits

0x2c6b,	// (0x0007beef) list_chi_dic_pane_t1

0xa40f,	// (0x00083693) list_highlight_pane_cp020

0xb20b,	// (0x0008448f) bg_cale_heading_pane_g1

0x2c7e,	// (0x0007bf02) bg_cale_heading_pane_g2

0x2c86,	// (0x0007bf0a) bg_cale_heading_pane_g3

0x2c8e,	// (0x0007bf12) bg_cale_heading_pane_g4

0x2c98,	// (0x0007bf1c) bg_cale_heading_pane_g5

0x2ca2,	// (0x0007bf26) bg_cale_heading_pane_g6

0x2caa,	// (0x0007bf2e) bg_cale_heading_pane_g7

0x2cb2,	// (0x0007bf36) bg_cale_heading_pane_g8

0x2cbc,	// (0x0007bf40) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0008854f) bg_cale_heading_pane_g

0xb20b,	// (0x0008448f) bg_cale_side_pane_g1

0x2cc6,	// (0x0007bf4a) bg_cale_side_pane_g2

0x2cce,	// (0x0007bf52) bg_cale_side_pane_g3

0x2cd6,	// (0x0007bf5a) bg_cale_side_pane_g4

0x2cde,	// (0x0007bf62) bg_cale_side_pane_g5

0x2ce6,	// (0x0007bf6a) bg_cale_side_pane_g6

0x2cee,	// (0x0007bf72) bg_cale_side_pane_g7

0x2cf6,	// (0x0007bf7a) bg_cale_side_pane_g8

0x2cfe,	// (0x0007bf82) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x00088562) bg_cale_side_pane_g

0x2d06,	// (0x0007bf8a) popup_call_status_window_ParamLimits

0x2d06,	// (0x0007bf8a) popup_call_status_window

0xb213,	// (0x00084497) stacon_top_pane

0xb21b,	// (0x0008449f) status_pane_ParamLimits

0xb21b,	// (0x0008449f) status_pane

0xb230,	// (0x000844b4) status_small_pane

0xb238,	// (0x000844bc) control_pane

0xa40f,	// (0x00083693) stacon_bottom_pane

0xb240,	// (0x000844c4) list_single_mce_smart_pane_t1_ParamLimits

0xb240,	// (0x000844c4) list_single_mce_smart_pane_t1

0xb253,	// (0x000844d7) list_single_mce_smart_pane_t2_ParamLimits

0xb253,	// (0x000844d7) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x00088575) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x00088575) list_single_mce_smart_pane_t

0x2d4d,	// (0x0007bfd1) compass_pane

0x2d56,	// (0x0007bfda) main_location2_pane_t1

0x2d68,	// (0x0007bfec) main_location2_pane_t2

0x2d7a,	// (0x0007bffe) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0008857a) main_location2_pane_t

0xb272,	// (0x000844f6) compass_pane_g1_ParamLimits

0xb272,	// (0x000844f6) compass_pane_g1

0x2dbe,	// (0x0007c042) compass_pane_t1

0x2dcd,	// (0x0007c051) compass_pane_t2

0x0005,

0xf2ff,	// (0x00088583) compass_pane_t

0x2e14,	// (0x0007c098) text_secondary_cp61

0xb2f0,	// (0x00084574) navi_pane_cams_g5

0xb36c,	// (0x000845f0) navi_pane_im_t1

0xb37a,	// (0x000845fe) navi_pane_mp_g1_ParamLimits

0xb37a,	// (0x000845fe) navi_pane_mp_g1

0xb38e,	// (0x00084612) navi_pane_mp_g2_ParamLimits

0xb38e,	// (0x00084612) navi_pane_mp_g2

0xb39a,	// (0x0008461e) navi_pane_mp_g3_ParamLimits

0xb39a,	// (0x0008461e) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00088597) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00088597) navi_pane_mp_g

0xb3a6,	// (0x0008462a) navi_pane_mp_t1

0xb3b4,	// (0x00084638) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0008859e) navi_pane_mp_t

0xb41f,	// (0x000846a3) navi_pane_vt_g1

0xb3a6,	// (0x0008462a) navi_pane_vt_t1

0xb427,	// (0x000846ab) navi_slider_pane

0xa9d8,	// (0x00083c5c) zooming_pane

0xb437,	// (0x000846bb) navi_slider_pane_g1

0xb440,	// (0x000846c4) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000885a5) navi_slider_pane_g

0xb46d,	// (0x000846f1) aid_levels_zoom

0xb475,	// (0x000846f9) zooming_pane_g1

0xb47d,	// (0x00084701) zooming_pane_g2

0xb47d,	// (0x00084701) zooming_pane_g3

0x0002,

0xf330,	// (0x000885b4) zooming_pane_g

0xb485,	// (0x00084709) level_10_zoom

0xb48e,	// (0x00084712) level_11_zoom

0xb497,	// (0x0008471b) level_1_zoom

0xb4a0,	// (0x00084724) level_2_zoom

0xb4a9,	// (0x0008472d) level_3_zoom

0xb4b2,	// (0x00084736) level_4_zoom

0xb4bb,	// (0x0008473f) level_5_zoom

0xb4c4,	// (0x00084748) level_6_zoom

0xb4cd,	// (0x00084751) level_7_zoom

0xb4d6,	// (0x0008475a) level_8_zoom

0xb4df,	// (0x00084763) level_9_zoom

0xb4f0,	// (0x00084774) popup_phob_thumbnail_window_g1

0xb4f8,	// (0x0008477c) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000885bb) popup_phob_thumbnail_window_g

0x3780,	// (0x0007ca04) level_1_location

0x3788,	// (0x0007ca0c) level_2_location

0x3790,	// (0x0007ca14) level_3_location

0x3798,	// (0x0007ca1c) level_4_location

0xa9d8,	// (0x00083c5c) level_5_location

0x2e65,	// (0x0007c0e9) mce_icon_pane_g1

0x2e6f,	// (0x0007c0f3) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000885c0) mce_icon_pane_g

0xb500,	// (0x00084784) main_mup_pane_g1_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g1

0xb500,	// (0x00084784) main_mup_pane_g2_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g2

0xb500,	// (0x00084784) main_mup_pane_g3_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g3

0xb500,	// (0x00084784) main_mup_pane_g4_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g4

0xb500,	// (0x00084784) main_mup_pane_g5_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g5

0xb500,	// (0x00084784) main_mup_pane_g6_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g6

0xb500,	// (0x00084784) main_mup_pane_g7_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g7

0xb500,	// (0x00084784) main_mup_pane_g8_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g8

0xb500,	// (0x00084784) main_mup_pane_g9_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g9

0xb500,	// (0x00084784) main_mup_pane_g10_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g10

0xb500,	// (0x00084784) main_mup_pane_g11_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g11

0xa6e5,	// (0x00083969) main_mup_pane_g12_ParamLimits

0xa6e5,	// (0x00083969) main_mup_pane_g12

0xb500,	// (0x00084784) main_mup_pane_g13_ParamLimits

0xb500,	// (0x00084784) main_mup_pane_g13

0x000c,

0xf341,	// (0x000885c5) main_mup_pane_g_ParamLimits

0xf341,	// (0x000885c5) main_mup_pane_g

0xb50e,	// (0x00084792) main_mup_pane_t1_ParamLimits

0xb50e,	// (0x00084792) main_mup_pane_t1

0xb50e,	// (0x00084792) main_mup_pane_t2_ParamLimits

0xb50e,	// (0x00084792) main_mup_pane_t2

0xb50e,	// (0x00084792) main_mup_pane_t3_ParamLimits

0xb50e,	// (0x00084792) main_mup_pane_t3

0xa735,	// (0x000839b9) main_mup_pane_t4_ParamLimits

0xa735,	// (0x000839b9) main_mup_pane_t4

0xa735,	// (0x000839b9) main_mup_pane_t5_ParamLimits

0xa735,	// (0x000839b9) main_mup_pane_t5

0xa749,	// (0x000839cd) main_mup_pane_t6_ParamLimits

0xa749,	// (0x000839cd) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000885e0) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000885e0) main_mup_pane_t

0xa6d7,	// (0x0008395b) mup_progress_pane_ParamLimits

0xa6d7,	// (0x0008395b) mup_progress_pane

0xb522,	// (0x000847a6) mup_visualizer_pane_ParamLimits

0xb522,	// (0x000847a6) mup_visualizer_pane

0xb522,	// (0x000847a6) mup_volume_pane_ParamLimits

0xb522,	// (0x000847a6) mup_volume_pane

0xa6f3,	// (0x00083977) mup_visualizer_pane_g1_ParamLimits

0xa6f3,	// (0x00083977) mup_visualizer_pane_g1

0xb530,	// (0x000847b4) mup_visualizer_pane_g2_ParamLimits

0xb530,	// (0x000847b4) mup_visualizer_pane_g2

0xa6e5,	// (0x00083969) mup_visualizer_pane_g3_ParamLimits

0xa6e5,	// (0x00083969) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000885ed) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000885ed) mup_visualizer_pane_g

0xa72b,	// (0x000839af) mup_volume_pane_g1

0xa72b,	// (0x000839af) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00088310) mup_volume_pane_g

0xa72b,	// (0x000839af) mup_progress_pane_g1

0xa72b,	// (0x000839af) mup_progress_pane_g2

0xa72b,	// (0x000839af) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000885f4) mup_progress_pane_g

0xa40f,	// (0x00083693) bg_popup_window_pane_cp05

0xb53e,	// (0x000847c2) heading_pane_cp02_ParamLimits

0xb53e,	// (0x000847c2) heading_pane_cp02

0xb558,	// (0x000847dc) list_popup_blid_pane

0xb560,	// (0x000847e4) list_blid_sat_info_pane_ParamLimits

0xb560,	// (0x000847e4) list_blid_sat_info_pane

0xb573,	// (0x000847f7) list_blid_sat_info_pane_g1

0xb57b,	// (0x000847ff) list_blid_sat_info_pane_t1

0x2f6f,	// (0x0007c1f3) mup_equalizer_pane_ParamLimits

0x2f6f,	// (0x0007c1f3) mup_equalizer_pane

0x2f88,	// (0x0007c20c) mup_equalizer_pane_cp1_ParamLimits

0x2f88,	// (0x0007c20c) mup_equalizer_pane_cp1

0x2fa5,	// (0x0007c229) mup_equalizer_pane_cp2_ParamLimits

0x2fa5,	// (0x0007c229) mup_equalizer_pane_cp2

0x2fc2,	// (0x0007c246) mup_equalizer_pane_cp3_ParamLimits

0x2fc2,	// (0x0007c246) mup_equalizer_pane_cp3

0x2fe3,	// (0x0007c267) mup_equalizer_pane_cp4_ParamLimits

0x2fe3,	// (0x0007c267) mup_equalizer_pane_cp4

0x3004,	// (0x0007c288) mup_equalizer_pane_cp5

0x3018,	// (0x0007c29c) mup_equalizer_pane_cp6

0x302c,	// (0x0007c2b0) mup_equalizer_pane_cp7

0xc6f3,	// (0x00085977) bg_popup_call_poc_act_pane_g9

0xc6fb,	// (0x0008597f) bg_popup_call_poc_act_pane_g10

0xc703,	// (0x00085987) bg_popup_call_poc_act_pane_g11

0x000a,

0xa66a,	// (0x000838ee) mup_scale_pane

0xa682,	// (0x00083906) mup_scale_pane_g1

0xb589,	// (0x0008480d) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x00088610) mup_scale_pane_g

0xb5ad,	// (0x00084831) msg_data_pane

0xb5b5,	// (0x00084839) scroll_pane_cp017

0x0b20,	// (0x00079da4) bg_list_pane_cp04_ParamLimits

0x0b20,	// (0x00079da4) bg_list_pane_cp04

0xb5c5,	// (0x00084849) msg_data_pane_g1

0x3052,	// (0x0007c2d6) msg_data_pane_g2

0x305a,	// (0x0007c2de) msg_data_pane_g3

0x3062,	// (0x0007c2e6) msg_data_pane_g4

0x306a,	// (0x0007c2ee) msg_data_pane_g5

0x3072,	// (0x0007c2f6) msg_data_pane_g6

0x307a,	// (0x0007c2fe) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0008861f) msg_data_pane_g

0x0b3e,	// (0x00079dc2) msg_text_pane_ParamLimits

0x0b3e,	// (0x00079dc2) msg_text_pane

0x3082,	// (0x0007c306) qrid_highlight_pane_cp011_ParamLimits

0x3082,	// (0x0007c306) qrid_highlight_pane_cp011

0xa40f,	// (0x00083693) msg_body_pane

0xa66a,	// (0x000838ee) msg_header_pane

0xb5e1,	// (0x00084865) input_focus_pane_cp07

0xb602,	// (0x00084886) msg_header_pane_t1_ParamLimits

0xb602,	// (0x00084886) msg_header_pane_t1

0xb61e,	// (0x000848a2) msg_header_pane_t2_ParamLimits

0xb61e,	// (0x000848a2) msg_header_pane_t2

0x0001,

0xf3af,	// (0x00088633) msg_header_pane_t_ParamLimits

0xf3af,	// (0x00088633) msg_header_pane_t

0xb63e,	// (0x000848c2) msg_body_pane_g1

0xb646,	// (0x000848ca) msg_body_pane_t1_ParamLimits

0xb646,	// (0x000848ca) msg_body_pane_t1

0xb677,	// (0x000848fb) msg_body_pane_t2_ParamLimits

0xb677,	// (0x000848fb) msg_body_pane_t2

0xb689,	// (0x0008490d) msg_body_pane_t3_ParamLimits

0xb689,	// (0x0008490d) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00088638) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00088638) msg_body_pane_t

0x30d2,	// (0x0007c356) main_viewer_pane_g1_ParamLimits

0x30d2,	// (0x0007c356) main_viewer_pane_g1

0x30e0,	// (0x0007c364) main_viewer_pane_g2_ParamLimits

0x30e0,	// (0x0007c364) main_viewer_pane_g2

0x30ee,	// (0x0007c372) main_viewer_pane_g3_ParamLimits

0x30ee,	// (0x0007c372) main_viewer_pane_g3

0x30fd,	// (0x0007c381) main_viewer_pane_g4_ParamLimits

0x30fd,	// (0x0007c381) main_viewer_pane_g4

0xb6b3,	// (0x00084937) main_viewer_pane_g5_ParamLimits

0xb6b3,	// (0x00084937) main_viewer_pane_g5

0xb6b3,	// (0x00084937) main_viewer_pane_g7_ParamLimits

0xb6b3,	// (0x00084937) main_viewer_pane_g7

0xb6c5,	// (0x00084949) main_viewer_pane_g8_ParamLimits

0xb6c5,	// (0x00084949) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00088648) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00088648) main_viewer_pane_g

0xb6dd,	// (0x00084961) viewer_content_pane_ParamLimits

0xb6dd,	// (0x00084961) viewer_content_pane

0x3139,	// (0x0007c3bd) main_postcard_pane_g1_ParamLimits

0x3139,	// (0x0007c3bd) main_postcard_pane_g1

0x314f,	// (0x0007c3d3) main_postcard_pane_g2_ParamLimits

0x314f,	// (0x0007c3d3) main_postcard_pane_g2

0x3165,	// (0x0007c3e9) main_postcard_pane_g3_ParamLimits

0x3165,	// (0x0007c3e9) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00088659) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00088659) main_postcard_pane_g

0x317c,	// (0x0007c400) main_postcard_pane_g4

0xc8cb,	// (0x00085b4f) smil_status_volume_pane_g2

0x31bf,	// (0x0007c443) postcard_pane_ParamLimits

0x31bf,	// (0x0007c443) postcard_pane

0xb6eb,	// (0x0008496f) postcard_pane_g1_ParamLimits

0xb6eb,	// (0x0008496f) postcard_pane_g1

0x3201,	// (0x0007c485) postcard_pane_g2_ParamLimits

0x3201,	// (0x0007c485) postcard_pane_g2

0x320d,	// (0x0007c491) postcard_pane_g3_ParamLimits

0x320d,	// (0x0007c491) postcard_pane_g3

0xb6f9,	// (0x0008497d) postcard_pane_g4_ParamLimits

0xb6f9,	// (0x0008497d) postcard_pane_g4

0x3219,	// (0x0007c49d) postcard_pane_g5_ParamLimits

0x3219,	// (0x0007c49d) postcard_pane_g5

0x322e,	// (0x0007c4b2) postcard_pane_g6_ParamLimits

0x322e,	// (0x0007c4b2) postcard_pane_g6

0xb6eb,	// (0x0008496f) postcard_pane_g7_ParamLimits

0xb6eb,	// (0x0008496f) postcard_pane_g7

0x0006,

0xf3e2,	// (0x00088666) postcard_pane_g_ParamLimits

0xf3e2,	// (0x00088666) postcard_pane_g

0x3242,	// (0x0007c4c6) main_mp2_pane_g1_ParamLimits

0x3242,	// (0x0007c4c6) main_mp2_pane_g1

0x324e,	// (0x0007c4d2) main_mp2_pane_g2_ParamLimits

0x324e,	// (0x0007c4d2) main_mp2_pane_g2

0x325a,	// (0x0007c4de) main_mp2_pane_g3_ParamLimits

0x325a,	// (0x0007c4de) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x00088675) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x00088675) main_mp2_pane_g

0x3266,	// (0x0007c4ea) main_mp2_pane_t1_ParamLimits

0x3266,	// (0x0007c4ea) main_mp2_pane_t1

0x327b,	// (0x0007c4ff) main_mp2_pane_t2_ParamLimits

0x327b,	// (0x0007c4ff) main_mp2_pane_t2

0x328d,	// (0x0007c511) main_mp2_pane_t3_ParamLimits

0x328d,	// (0x0007c511) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0008867c) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0008867c) main_mp2_pane_t

0x9fee,	// (0x00083272) pec_content_pane_ParamLimits

0x9fee,	// (0x00083272) pec_content_pane

0x9f77,	// (0x000831fb) scroll_pane_cp015

0xb522,	// (0x000847a6) pec_attribute_pane_ParamLimits

0xb522,	// (0x000847a6) pec_attribute_pane

0xa6e5,	// (0x00083969) pec_content_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) pec_content_pane_g1

0xb707,	// (0x0008498b) pec_content_pane_t1_ParamLimits

0xb707,	// (0x0008498b) pec_content_pane_t1

0xb71b,	// (0x0008499f) pec_content_pane_t2_ParamLimits

0xb71b,	// (0x0008499f) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x00088683) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x00088683) pec_content_pane_t

0xa6d7,	// (0x0008395b) list_single_graphic_pane_cp01_ParamLimits

0xa6d7,	// (0x0008395b) list_single_graphic_pane_cp01

0xa66a,	// (0x000838ee) bg_popup_sub_pane_cp04

0xb72f,	// (0x000849b3) popup_mup_playback_window_g1

0xb73b,	// (0x000849bf) popup_mup_playback_window_t1

0xb750,	// (0x000849d4) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00088688) popup_mup_playback_window_t

0xb787,	// (0x00084a0b) main_image_pane_g1_ParamLimits

0xb787,	// (0x00084a0b) main_image_pane_g1

0xb7ca,	// (0x00084a4e) scroll_pane_cp018_ParamLimits

0xb7ca,	// (0x00084a4e) scroll_pane_cp018

0xb7e2,	// (0x00084a66) scroll_pane_cp016_ParamLimits

0xb7e2,	// (0x00084a66) scroll_pane_cp016

0x3357,	// (0x0007c5db) smil2_image_pane_ParamLimits

0x3357,	// (0x0007c5db) smil2_image_pane

0x3387,	// (0x0007c60b) smil2_root_pane_ParamLimits

0x3387,	// (0x0007c60b) smil2_root_pane

0x33bf,	// (0x0007c643) smil2_text_pane_ParamLimits

0x33bf,	// (0x0007c643) smil2_text_pane

0x9f77,	// (0x000831fb) bg_list_pane_cp06

0x9f77,	// (0x000831fb) grid_radio_pane

0xa40f,	// (0x00083693) bg_popup_window_pane_cp06

0xaf05,	// (0x00084189) main_fmradio_pane_t1

0xb0fb,	// (0x0008437f) heading_pane_cp04

0xaf05,	// (0x00084189) main_fmradio_pane_t2

0xc74b,	// (0x000859cf) popup_cale_lunar_info_window_g1

0xaf05,	// (0x00084189) main_fmradio_pane_t3

0xc753,	// (0x000859d7) popup_cale_lunar_info_window_g2

0xaf05,	// (0x00084189) main_fmradio_pane_t4

0x0001,

0xaf05,	// (0x00084189) main_fmradio_pane_t5

0x0004,

0xf4d4,	// (0x00088758) popup_cale_lunar_info_window_g

0xf264,	// (0x000884e8) main_fmradio_pane_t

0x9f77,	// (0x000831fb) wait_bar_pane_cp03

0xa6d7,	// (0x0008395b) cell_fmradio_pane_ParamLimits

0xa6d7,	// (0x0008395b) cell_fmradio_pane

0xa6e5,	// (0x00083969) cell_fmradio_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_fmradio_pane_g1

0x9f77,	// (0x000831fb) grid_highlight_pane_cp011

0xb816,	// (0x00084a9a) poc_content_pane_ParamLimits

0xb816,	// (0x00084a9a) poc_content_pane

0xb828,	// (0x00084aac) scroll_pane_cp019

0x343f,	// (0x0007c6c3) popup_call_poc_act_window_ParamLimits

0x343f,	// (0x0007c6c3) popup_call_poc_act_window

0x3463,	// (0x0007c6e7) popup_call_poc_inact_window_ParamLimits

0x3463,	// (0x0007c6e7) popup_call_poc_inact_window

0xf49d,	// (0x00088721) bg_popup_call_poc_act_pane_g

0xc70b,	// (0x0008598f) bg_popup_call_poc_inact_pane_g1

0xc713,	// (0x00085997) bg_popup_call_poc_inact_pane_g2

0xb830,	// (0x00084ab4) popup_call_poc_act_window_g2

0xc71b,	// (0x0008599f) bg_popup_call_poc_inact_pane_g3

0xc69b,	// (0x0008591f) bg_popup_call_poc_inact_pane_g4

0xc723,	// (0x000859a7) bg_popup_call_poc_inact_pane_g5

0xb838,	// (0x00084abc) popup_call_poc_act_window_t1_ParamLimits

0xb838,	// (0x00084abc) popup_call_poc_act_window_t1

0xb860,	// (0x00084ae4) popup_call_poc_act_window_t2_ParamLimits

0xb860,	// (0x00084ae4) popup_call_poc_act_window_t2

0xb888,	// (0x00084b0c) popup_call_poc_act_window_t3_ParamLimits

0xb888,	// (0x00084b0c) popup_call_poc_act_window_t3

0xb8b0,	// (0x00084b34) popup_call_poc_act_window_t4_ParamLimits

0xb8b0,	// (0x00084b34) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0008869d) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0008869d) popup_call_poc_act_window_t

0xc72b,	// (0x000859af) bg_popup_call_poc_inact_pane_g6

0xc733,	// (0x000859b7) bg_popup_call_poc_inact_pane_g7

0xc73b,	// (0x000859bf) bg_popup_call_poc_inact_pane_g8

0xb8c2,	// (0x00084b46) popup_call_poc_inact_window_g2

0xc743,	// (0x000859c7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b4,	// (0x00088738) bg_popup_call_poc_inact_pane_g

0xb8ca,	// (0x00084b4e) popup_call_poc_inact_window_t1_ParamLimits

0xb8ca,	// (0x00084b4e) popup_call_poc_inact_window_t1

0xb8df,	// (0x00084b63) popup_call_poc_inact_window_t2_ParamLimits

0xb8df,	// (0x00084b63) popup_call_poc_inact_window_t2

0xb8f4,	// (0x00084b78) popup_call_poc_inact_window_t3_ParamLimits

0xb8f4,	// (0x00084b78) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000886a6) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000886a6) popup_call_poc_inact_window_t

0xc843,	// (0x00085ac7) context_pane_ParamLimits

0x3c4a,	// (0x0007cece) signal_pane_ParamLimits

0xa9d8,	// (0x00083c5c) main_call2_pane

0xc81c,	// (0x00085aa0) popup_phob_thumbnail2_window_ParamLimits

0xc81c,	// (0x00085aa0) popup_phob_thumbnail2_window

0xb69b,	// (0x0008491f) aid_hotspot_pointer_arrow_pane

0xb6a3,	// (0x00084927) aid_hotspot_pointer_hand_pane

0x374a,	// (0x0007c9ce) phob_pre_status_pane_g5

0x9fee,	// (0x00083272) cams_zoom_pane_ParamLimits

0x9fee,	// (0x00083272) image_vga_pane_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g2_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g3_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g4_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g5_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g6_ParamLimits

0xa6e5,	// (0x00083969) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000883e1) main_camera_pane_g_ParamLimits

0xa735,	// (0x000839b9) main_camera_pane_t1_ParamLimits

0xa735,	// (0x000839b9) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000883f2) main_camera_pane_t_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_preview_window_pane_cp01_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_preview_window_pane_cp01

0xb909,	// (0x00084b8d) popup_phob_thumbnail2_window_g1_ParamLimits

0xb909,	// (0x00084b8d) popup_phob_thumbnail2_window_g1

0xa40f,	// (0x00083693) call2_cli_visual_pane

0x3497,	// (0x0007c71b) popup_call2_audio_conf_window_ParamLimits

0x3497,	// (0x0007c71b) popup_call2_audio_conf_window

0x34b7,	// (0x0007c73b) popup_call2_audio_first_window_ParamLimits

0x34b7,	// (0x0007c73b) popup_call2_audio_first_window

0x354d,	// (0x0007c7d1) popup_call2_audio_in_window_ParamLimits

0x354d,	// (0x0007c7d1) popup_call2_audio_in_window

0x3595,	// (0x0007c819) popup_call2_audio_out_window_ParamLimits

0x3595,	// (0x0007c819) popup_call2_audio_out_window

0x35ff,	// (0x0007c883) popup_call2_audio_second_window_ParamLimits

0x35ff,	// (0x0007c883) popup_call2_audio_second_window

0x3665,	// (0x0007c8e9) popup_call2_audio_wait_window_ParamLimits

0x3665,	// (0x0007c8e9) popup_call2_audio_wait_window

0xa40f,	// (0x00083693) bg_popup_call2_act_pane_cp03

0xa64c,	// (0x000838d0) list_conf_pane_cp

0xb915,	// (0x00084b99) popup_call2_audio_conf_window_t1

0xb923,	// (0x00084ba7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb923,	// (0x00084ba7) list_single_graphic_popup_conf2_pane

0xb15e,	// (0x000843e2) list_highlight_pane_cp04

0xb936,	// (0x00084bba) list_single_graphic_popup_conf2_pane_g1

0xb16f,	// (0x000843f3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000886ad) list_single_graphic_popup_conf2_pane_g

0xb940,	// (0x00084bc4) list_single_graphic_popup_conf2_pane_t1

0xb94e,	// (0x00084bd2) bg_popup_call2_act_pane_cp01_ParamLimits

0xb94e,	// (0x00084bd2) bg_popup_call2_act_pane_cp01

0xb9d8,	// (0x00084c5c) call_type_pane_cp05_ParamLimits

0xb9d8,	// (0x00084c5c) call_type_pane_cp05

0xba2c,	// (0x00084cb0) popup_call2_audio_second_window_g1_ParamLimits

0xba2c,	// (0x00084cb0) popup_call2_audio_second_window_g1

0xba80,	// (0x00084d04) popup_call2_audio_second_window_g2_ParamLimits

0xba80,	// (0x00084d04) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000886b2) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000886b2) popup_call2_audio_second_window_g

0xbae5,	// (0x00084d69) popup_call2_audio_second_window_t1_ParamLimits

0xbae5,	// (0x00084d69) popup_call2_audio_second_window_t1

0xbba0,	// (0x00084e24) popup_call2_audio_second_window_t2_ParamLimits

0xbba0,	// (0x00084e24) popup_call2_audio_second_window_t2

0xbbf3,	// (0x00084e77) popup_call2_audio_second_window_t3_ParamLimits

0xbbf3,	// (0x00084e77) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000886b9) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000886b9) popup_call2_audio_second_window_t

0xa40f,	// (0x00083693) bg_popup_call2_in_pane_cp02

0xa419,	// (0x0008369d) call_type_pane_cp04

0x369f,	// (0x0007c923) popup_call2_audio_wait_window_g1

0x36a7,	// (0x0007c92b) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000886c2) popup_call2_audio_wait_window_g

0xa431,	// (0x000836b5) popup_call2_audio_wait_window_t3

0xbce6,	// (0x00084f6a) bg_popup_call2_act_pane_ParamLimits

0xbce6,	// (0x00084f6a) bg_popup_call2_act_pane

0xbda6,	// (0x0008502a) call_type_pane_cp03_ParamLimits

0xbda6,	// (0x0008502a) call_type_pane_cp03

0xbe0a,	// (0x0008508e) popup_call2_audio_first_window_g1_ParamLimits

0xbe0a,	// (0x0008508e) popup_call2_audio_first_window_g1

0xbe7a,	// (0x000850fe) popup_call2_audio_first_window_g2_ParamLimits

0xbe7a,	// (0x000850fe) popup_call2_audio_first_window_g2

0xbede,	// (0x00085162) popup_call2_audio_first_window_g3_ParamLimits

0xbede,	// (0x00085162) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000886c7) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000886c7) popup_call2_audio_first_window_g

0xbf66,	// (0x000851ea) popup_call2_audio_first_window_t1_ParamLimits

0xbf66,	// (0x000851ea) popup_call2_audio_first_window_t1

0xc069,	// (0x000852ed) popup_call2_audio_first_window_t4_ParamLimits

0xc069,	// (0x000852ed) popup_call2_audio_first_window_t4

0xc14c,	// (0x000853d0) popup_call2_audio_first_window_t5_ParamLimits

0xc14c,	// (0x000853d0) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000886d2) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000886d2) popup_call2_audio_first_window_t

0xa662,	// (0x000838e6) bg_popup_call2_act_pane_g1

0xc75b,	// (0x000859df) popup_cale_lunar_info_window_t1

0xc769,	// (0x000859ed) popup_cale_lunar_info_window_t2

0xc777,	// (0x000859fb) popup_cale_lunar_info_window_t3

0xa40f,	// (0x00083693) bg_popup_call2_bubble_pane

0xc24d,	// (0x000854d1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc24d,	// (0x000854d1) bg_popup_call2_in_pane_cp01

0xa0eb,	// (0x0008336f) call_type_pane_cp02

0x36af,	// (0x0007c933) popup_call2_audio_out_window_g1_ParamLimits

0x36af,	// (0x0007c933) popup_call2_audio_out_window_g1

0xc295,	// (0x00085519) popup_call2_audio_out_window_g2_ParamLimits

0xc295,	// (0x00085519) popup_call2_audio_out_window_g2

0x36db,	// (0x0007c95f) popup_call2_audio_out_window_g3_ParamLimits

0x36db,	// (0x0007c95f) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000886db) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000886db) popup_call2_audio_out_window_g

0xc2cc,	// (0x00085550) popup_call2_audio_out_window_t1_ParamLimits

0xc2cc,	// (0x00085550) popup_call2_audio_out_window_t1

0xc32b,	// (0x000855af) popup_call2_audio_out_window_t2_ParamLimits

0xc32b,	// (0x000855af) popup_call2_audio_out_window_t2

0xc37f,	// (0x00085603) popup_call2_audio_out_window_t3_ParamLimits

0xc37f,	// (0x00085603) popup_call2_audio_out_window_t3

0xc395,	// (0x00085619) popup_call2_audio_out_window_t4_ParamLimits

0xc395,	// (0x00085619) popup_call2_audio_out_window_t4

0xc3ab,	// (0x0008562f) popup_call2_audio_out_window_t5_ParamLimits

0xc3ab,	// (0x0008562f) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x000886e4) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x000886e4) popup_call2_audio_out_window_t

0xc40f,	// (0x00085693) bg_popup_call2_in_pane_ParamLimits

0xc40f,	// (0x00085693) bg_popup_call2_in_pane

0xc46b,	// (0x000856ef) popup_call2_audio_in_window_g1_ParamLimits

0xc46b,	// (0x000856ef) popup_call2_audio_in_window_g1

0xc4a3,	// (0x00085727) popup_call2_audio_in_window_g2_ParamLimits

0xc4a3,	// (0x00085727) popup_call2_audio_in_window_g2

0xc4db,	// (0x0008575f) popup_call2_audio_in_window_g3_ParamLimits

0xc4db,	// (0x0008575f) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x000886f1) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x000886f1) popup_call2_audio_in_window_g

0xc533,	// (0x000857b7) popup_call2_audio_in_window_t1_ParamLimits

0xc533,	// (0x000857b7) popup_call2_audio_in_window_t1

0xc5b3,	// (0x00085837) popup_call2_audio_in_window_t2_ParamLimits

0xc5b3,	// (0x00085837) popup_call2_audio_in_window_t2

0xc633,	// (0x000858b7) popup_call2_audio_in_window_t3_ParamLimits

0xc633,	// (0x000858b7) popup_call2_audio_in_window_t3

0xc64d,	// (0x000858d1) popup_call2_audio_in_window_t4_ParamLimits

0xc64d,	// (0x000858d1) popup_call2_audio_in_window_t4

0xc65f,	// (0x000858e3) popup_call2_audio_in_window_t5_ParamLimits

0xc65f,	// (0x000858e3) popup_call2_audio_in_window_t5

0xc671,	// (0x000858f5) popup_call2_audio_in_window_t6_ParamLimits

0xc671,	// (0x000858f5) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x000886fa) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x000886fa) popup_call2_audio_in_window_t

0xa662,	// (0x000838e6) bg_popup_call2_in_pane_g1

0xc785,	// (0x00085a09) popup_cale_lunar_info_window_t4

0x0003,

0xf4d9,	// (0x0008875d) popup_cale_lunar_info_window_t

0xa66a,	// (0x000838ee) bg_popup_call2_rect_pane_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_call2_rect_pane

0xa40f,	// (0x00083693) call2_cli_visual_graphic_pane

0xa40f,	// (0x00083693) call2_cli_visual_text_pane

0xc8de,	// (0x00085b62) smil_status_volume_pane_g3

0x0002,

0xa682,	// (0x00083906) call2_cli_visual_graphic_pane_g1

0xa682,	// (0x00083906) call2_cli_visual_graphic_pane_g2

0xa682,	// (0x00083906) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x00088707) call2_cli_visual_graphic_pane_g

0xa8d1,	// (0x00083b55) bg_popup_call2_rect_pane_g1

0xa8c1,	// (0x00083b45) bg_popup_call2_rect_pane_g2

0xa8c9,	// (0x00083b4d) bg_popup_call2_rect_pane_g3

0xa8d9,	// (0x00083b5d) bg_popup_call2_rect_pane_g4

0xa8e1,	// (0x00083b65) bg_popup_call2_rect_pane_g5

0xa8e9,	// (0x00083b6d) bg_popup_call2_rect_pane_g6

0xa8f1,	// (0x00083b75) bg_popup_call2_rect_pane_g7

0xa8f9,	// (0x00083b7d) bg_popup_call2_rect_pane_g8

0xa901,	// (0x00083b85) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00088497) bg_popup_call2_rect_pane_g

0xc683,	// (0x00085907) bg_popup_call2_bubble_pane_g1

0xc68b,	// (0x0008590f) bg_popup_call2_bubble_pane_g2

0xc693,	// (0x00085917) bg_popup_call2_bubble_pane_g3

0xc69b,	// (0x0008591f) bg_popup_call2_bubble_pane_g4

0xc6a3,	// (0x00085927) bg_popup_call2_bubble_pane_g5

0xc6ab,	// (0x0008592f) bg_popup_call2_bubble_pane_g6

0xc6b3,	// (0x00085937) bg_popup_call2_bubble_pane_g7

0xc6bb,	// (0x0008593f) bg_popup_call2_bubble_pane_g8

0xc6c3,	// (0x00085947) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0008870e) bg_popup_call2_bubble_pane_g

0x15ca,	// (0x0007a84e) aid_cale_week_size_cell_pane

0x1b7a,	// (0x0007adfe) aid_cams_cif_uncrop_pane_ParamLimits

0x1b7a,	// (0x0007adfe) aid_cams_cif_uncrop_pane

0x9fee,	// (0x00083272) aid_cams_size_cell_ParamLimits

0x9fee,	// (0x00083272) aid_cams_size_cell

0x9fee,	// (0x00083272) grid_cams_pane_ParamLimits

0x9fee,	// (0x00083272) linegrid_cams_pane_ParamLimits

0x1d98,	// (0x0007b01c) call_video_pane_t1

0x1db6,	// (0x0007b03a) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0008843e) call_video_pane_t

0x21dc,	// (0x0007b460) aid_cale_month_size_cell_pane_ParamLimits

0x21dc,	// (0x0007b460) aid_cale_month_size_cell_pane

0xf51d,	// (0x000887a1) smil_status_volume_pane_g

0xc8eb,	// (0x00085b6f) volume_smil_pane_ParamLimits

0x9f89,	// (0x0008320d) aid_popup2_width_pane

0x152f,	// (0x0007a7b3) cell_qdial_pane_g4_ParamLimits

0x152f,	// (0x0007a7b3) cell_qdial_pane_g4

0x2d9e,	// (0x0007c022) aid_blid_cardinal_pane_ParamLimits

0x2daa,	// (0x0007c02e) aid_blid_destination_pane_ParamLimits

0x2daa,	// (0x0007c02e) aid_blid_destination_pane

0xa66a,	// (0x000838ee) bg_popup_call_poc_act_pane_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_call_poc_act_pane

0xa66a,	// (0x000838ee) bg_popup_call_poc_inact_pane_ParamLimits

0xa66a,	// (0x000838ee) bg_popup_call_poc_inact_pane

0xc6cb,	// (0x0008594f) bg_popup_call_poc_act_pane_g1

0xc6d3,	// (0x00085957) bg_popup_call_poc_act_pane_g2

0xc6db,	// (0x0008595f) bg_popup_call_poc_act_pane_g3

0xc69b,	// (0x0008591f) bg_popup_call_poc_act_pane_g4

0xc6a3,	// (0x00085927) bg_popup_call_poc_act_pane_g5

0xc6e3,	// (0x00085967) bg_popup_call_poc_act_pane_g6

0xc6b3,	// (0x00085937) bg_popup_call_poc_act_pane_g7

0xc6eb,	// (0x0008596f) bg_popup_call_poc_act_pane_g8

0xa40f,	// (0x00083693) main_usb_pane

0xc7f7,	// (0x00085a7b) popup_cale_lunar_info_window

0x2082,	// (0x0007b306) im_reading_pane_t1_ParamLimits

0xaaa3,	// (0x00083d27) list_im_pane_ParamLimits

0xaab4,	// (0x00083d38) scroll_pane_cp07_ParamLimits

0xa40f,	// (0x00083693) grid_highlight_pane_cp012

0xa66a,	// (0x000838ee) mup_scale_pane_ParamLimits

0xa6e5,	// (0x00083969) main_usb_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) main_usb_pane_g1

0xa6e5,	// (0x00083969) main_usb_pane_g2_ParamLimits

0xa6e5,	// (0x00083969) main_usb_pane_g2

0x0001,

0xf199,	// (0x0008841d) main_usb_pane_g_ParamLimits

0xf199,	// (0x0008841d) main_usb_pane_g

0xa735,	// (0x000839b9) main_usb_pane_t1_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t1

0xa735,	// (0x000839b9) main_usb_pane_t2_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t2

0xa735,	// (0x000839b9) main_usb_pane_t3_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t3

0xa735,	// (0x000839b9) main_usb_pane_t4_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t4

0xa735,	// (0x000839b9) main_usb_pane_t5_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t5

0xa735,	// (0x000839b9) main_usb_pane_t6_ParamLimits

0xa735,	// (0x000839b9) main_usb_pane_t6

0x0005,

0xf4c7,	// (0x0008874b) main_usb_pane_t_ParamLimits

0x2d4d,	// (0x0007bfd1) aid_text_placing

0x2d56,	// (0x0007bfda) main_location2_pane_t1_ParamLimits

0x2d68,	// (0x0007bfec) main_location2_pane_t2_ParamLimits

0x2d7a,	// (0x0007bffe) main_location2_pane_t3_ParamLimits

0x2d8c,	// (0x0007c010) main_location2_pane_t4_ParamLimits

0x2d8c,	// (0x0007c010) main_location2_pane_t4

0xf2f6,	// (0x0008857a) main_location2_pane_t_ParamLimits

0xa698,	// (0x0008391c) find_pinb_pane_g2_ParamLimits

0xa698,	// (0x0008391c) find_pinb_pane_g2

0x0001,

0xf072,	// (0x000882f6) find_pinb_pane_g_ParamLimits

0xf072,	// (0x000882f6) find_pinb_pane_g

0xa6a4,	// (0x00083928) find_pinb_pane_t1_ParamLimits

0xa6b6,	// (0x0008393a) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x000882fb) find_pinb_pane_t_ParamLimits

0xa40f,	// (0x00083693) main_call3_pane

0x26c3,	// (0x0007b947) cale_month_day_heading_pane_t1_ParamLimits

0x2705,	// (0x0007b989) cale_month_day_heading_pane_t2_ParamLimits

0x273a,	// (0x0007b9be) cale_month_day_heading_pane_t3_ParamLimits

0x276f,	// (0x0007b9f3) cale_month_day_heading_pane_t4_ParamLimits

0x27ac,	// (0x0007ba30) cale_month_day_heading_pane_t5_ParamLimits

0x27f1,	// (0x0007ba75) cale_month_day_heading_pane_t6_ParamLimits

0x2836,	// (0x0007baba) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00088476) cale_month_day_heading_pane_t_ParamLimits

0xad0a,	// (0x00083f8e) smil_status_volume_pane

0x31dd,	// (0x0007c461) postcard_address_pane_ParamLimits

0x31dd,	// (0x0007c461) postcard_address_pane

0x31ef,	// (0x0007c473) postcard_message_pane_ParamLimits

0x31ef,	// (0x0007c473) postcard_message_pane

0x3707,	// (0x0007c98b) call2_cli_visual_pane_t1_ParamLimits

0x3707,	// (0x0007c98b) call2_cli_visual_pane_t1

0xc918,	// (0x00085b9c) postcard_message_pane_t1_ParamLimits

0xc918,	// (0x00085b9c) postcard_message_pane_t1

0xc900,	// (0x00085b84) postcard_address_pane_t1_ParamLimits

0xc900,	// (0x00085b84) postcard_address_pane_t1

0x3dfd,	// (0x0007d081) popup_call3_audio_in_window_ParamLimits

0x3dfd,	// (0x0007d081) popup_call3_audio_in_window

0x3c88,	// (0x0007cf0c) bg_popup_call3_in_pane_ParamLimits

0x3c88,	// (0x0007cf0c) bg_popup_call3_in_pane

0x3cfe,	// (0x0007cf82) popup_call3_audio_in_window_g1_ParamLimits

0x3cfe,	// (0x0007cf82) popup_call3_audio_in_window_g1

0x3d1e,	// (0x0007cfa2) popup_call3_audio_in_window_g2_ParamLimits

0x3d1e,	// (0x0007cfa2) popup_call3_audio_in_window_g2

0x3d3e,	// (0x0007cfc2) popup_call3_audio_in_window_g3_ParamLimits

0x3d3e,	// (0x0007cfc2) popup_call3_audio_in_window_g3

0x0003,

0xf524,	// (0x000887a8) popup_call3_audio_in_window_g_ParamLimits

0xf524,	// (0x000887a8) popup_call3_audio_in_window_g

0x3d6f,	// (0x0007cff3) popup_call3_audio_in_window_t1_ParamLimits

0x3d6f,	// (0x0007cff3) popup_call3_audio_in_window_t1

0x3dad,	// (0x0007d031) popup_call3_audio_in_window_t2_ParamLimits

0x3dad,	// (0x0007d031) popup_call3_audio_in_window_t2

0x3deb,	// (0x0007d06f) popup_call3_audio_in_window_t3_ParamLimits

0x3deb,	// (0x0007d06f) popup_call3_audio_in_window_t3

0x0002,

0xf52d,	// (0x000887b1) popup_call3_audio_in_window_t_ParamLimits

0xf52d,	// (0x000887b1) popup_call3_audio_in_window_t

0xa9d8,	// (0x00083c5c) bg_popup_call3_rect_pane

0xa8d1,	// (0x00083b55) bg_popup_call3_rect_pane_g1

0xa8c1,	// (0x00083b45) bg_popup_call3_rect_pane_g2

0xa8c9,	// (0x00083b4d) bg_popup_call3_rect_pane_g3

0xa8d9,	// (0x00083b5d) bg_popup_call3_rect_pane_g4

0xa8e1,	// (0x00083b65) bg_popup_call3_rect_pane_g5

0xa8e9,	// (0x00083b6d) bg_popup_call3_rect_pane_g6

0xa8f1,	// (0x00083b75) bg_popup_call3_rect_pane_g7

0x9f77,	// (0x000831fb) mup_visualizer_osc_pane

0x9f77,	// (0x000831fb) mup_visualizer_spec_pane

0x3cb8,	// (0x0007cf3c) call3_video_qcif_pane_ParamLimits

0x3cb8,	// (0x0007cf3c) call3_video_qcif_pane

0x3ccb,	// (0x0007cf4f) call3_video_qcif_uncrop_pane_ParamLimits

0x3ccb,	// (0x0007cf4f) call3_video_qcif_uncrop_pane

0x3cd9,	// (0x0007cf5d) call3_video_subqcif_pane_ParamLimits

0x3cd9,	// (0x0007cf5d) call3_video_subqcif_pane

0x3ced,	// (0x0007cf71) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ced,	// (0x0007cf71) call3_video_subqcif_uncrop_pane

0x3d5e,	// (0x0007cfe2) popup_call3_audio_in_window_g4_ParamLimits

0x3d5e,	// (0x0007cfe2) popup_call3_audio_in_window_g4

0x9f77,	// (0x000831fb) mup_spec_half_pane

0x9f77,	// (0x000831fb) mup_spec_half_pane_cp

0x9f77,	// (0x000831fb) mup_osc_middle_pane

0xa72b,	// (0x000839af) mup_visualizer_osc_pane_g1

0xc891,	// (0x00085b15) mup_spec_bar_pane_ParamLimits

0xc891,	// (0x00085b15) mup_spec_bar_pane

0xa72b,	// (0x000839af) mup_spec_bar_pane_g1

0xa72b,	// (0x000839af) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00088310) mup_spec_bar_pane_g

0x15ca,	// (0x0007a84e) aid_cale_week_size_cell_pane_ParamLimits

0x15e4,	// (0x0007a868) bg_cale_heading_pane_ParamLimits

0xa93a,	// (0x00083bbe) bg_cale_pane_cp01_ParamLimits

0x15fc,	// (0x0007a880) cale_week_corner_pane_ParamLimits

0x161b,	// (0x0007a89f) cale_week_day_heading_pane_ParamLimits

0x1638,	// (0x0007a8bc) cale_week_scroll_pane_g1_ParamLimits

0x164b,	// (0x0007a8cf) cale_week_scroll_pane_g2_ParamLimits

0x1663,	// (0x0007a8e7) cale_week_scroll_pane_g3_ParamLimits

0x167b,	// (0x0007a8ff) cale_week_scroll_pane_g4_ParamLimits

0x1693,	// (0x0007a917) cale_week_scroll_pane_g5_ParamLimits

0x16b3,	// (0x0007a937) cale_week_scroll_pane_g6_ParamLimits

0x16d3,	// (0x0007a957) cale_week_scroll_pane_g7_ParamLimits

0x16f3,	// (0x0007a977) cale_week_scroll_pane_g8_ParamLimits

0x1717,	// (0x0007a99b) cale_week_scroll_pane_g9_ParamLimits

0x172f,	// (0x0007a9b3) cale_week_scroll_pane_g10_ParamLimits

0x1747,	// (0x0007a9cb) cale_week_scroll_pane_g11_ParamLimits

0x175f,	// (0x0007a9e3) cale_week_scroll_pane_g12_ParamLimits

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g13_ParamLimits

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g14_ParamLimits

0x1777,	// (0x0007a9fb) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00088387) cale_week_scroll_pane_g_ParamLimits

0x17b3,	// (0x0007aa37) cale_week_time_pane_ParamLimits

0x17d7,	// (0x0007aa5b) grid_cale_week_pane_ParamLimits

0xa957,	// (0x00083bdb) listscroll_cale_week_pane_t1

0xa969,	// (0x00083bed) scroll_pane_cp08_ParamLimits

0x223c,	// (0x0007b4c0) cale_month_corner_pane_ParamLimits

0xacd4,	// (0x00083f58) cale_month_pane_t1

0x2656,	// (0x0007b8da) cale_month_week_pane_ParamLimits

0x2ba2,	// (0x0007be26) popup_call_status_window_g1_ParamLimits

0x2bb6,	// (0x0007be3a) popup_call_status_window_g2_ParamLimits

0x2bca,	// (0x0007be4e) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x00088501) popup_call_status_window_g_ParamLimits

0xb07c,	// (0x00084300) aid_call2_pane

0x0b72,	// (0x00079df6) msg_header_pane_g1

0x31dd,	// (0x0007c461) postcard_address2_pane_ParamLimits

0x31dd,	// (0x0007c461) postcard_address2_pane

0x31ef,	// (0x0007c473) postcard_message2_pane_ParamLimits

0x31ef,	// (0x0007c473) postcard_message2_pane

0x3c58,	// (0x0007cedc) message2_row_pane_ParamLimits

0x3c58,	// (0x0007cedc) message2_row_pane

0x3c75,	// (0x0007cef9) address2_row_pane_ParamLimits

0x3c75,	// (0x0007cef9) address2_row_pane

0xc85e,	// (0x00085ae2) postcard_message2_row_pane_g1

0xc866,	// (0x00085aea) postcard_message2_row_pane_t1

0xc85e,	// (0x00085ae2) address2_row_pane_g1

0xc866,	// (0x00085aea) address2_row_pane_t1

0x1b11,	// (0x0007ad95) aid_size_cell_vorec

0xa40f,	// (0x00083693) main_rss_pane

0xc874,	// (0x00085af8) rss_list_single_pane_ParamLimits

0xc874,	// (0x00085af8) rss_list_single_pane

0xc882,	// (0x00085b06) rss_list_single_pane_t1

0xc882,	// (0x00085b06) rss_list_single_pane_t2

0x0001,

0xf518,	// (0x0008879c) rss_list_single_pane_t

0xa40f,	// (0x00083693) main_camera2_pane

0xa40f,	// (0x00083693) main_video2_pane

0xc934,	// (0x00085bb8) cams_zoom_pane_cp2_ParamLimits

0xc934,	// (0x00085bb8) cams_zoom_pane_cp2

0xc934,	// (0x00085bb8) image2_vga_pane_ParamLimits

0xc934,	// (0x00085bb8) image2_vga_pane

0xe3f7,	// (0x0008767b) main_camera2_pane_g1_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g1

0xe3f7,	// (0x0008767b) main_camera2_pane_g2_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g2

0xe3f7,	// (0x0008767b) main_camera2_pane_g3_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g3

0xe3f7,	// (0x0008767b) main_camera2_pane_g4_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g4

0xe3f7,	// (0x0008767b) main_camera2_pane_g5_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g5

0xe3f7,	// (0x0008767b) main_camera2_pane_g6_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g6

0xe3f7,	// (0x0008767b) main_camera2_pane_g7_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g7

0xe3f7,	// (0x0008767b) main_camera2_pane_g8_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g8

0x0008,

0xf534,	// (0x000887b8) main_camera2_pane_g_ParamLimits

0xf534,	// (0x000887b8) main_camera2_pane_g

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t1_ParamLimits

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t1

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t2_ParamLimits

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t2

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t3_ParamLimits

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t3

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t4_ParamLimits

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t4

0x0006,

0xf547,	// (0x000887cb) main_camera2_pane_t_ParamLimits

0xf547,	// (0x000887cb) main_camera2_pane_t

0xc956,	// (0x00085bda) cams_zoom_pane_cp4_ParamLimits

0xc956,	// (0x00085bda) cams_zoom_pane_cp4

0xc964,	// (0x00085be8) image2_cif_pane_ParamLimits

0xc964,	// (0x00085be8) image2_cif_pane

0x9fee,	// (0x00083272) image2_subqcif_pane_ParamLimits

0x9fee,	// (0x00083272) image2_subqcif_pane

0x3e33,	// (0x0007d0b7) main_video2_pane_g1_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g1

0x3e33,	// (0x0007d0b7) main_video2_pane_g2_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g2

0x3e33,	// (0x0007d0b7) main_video2_pane_g3_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g3

0x3e33,	// (0x0007d0b7) main_video2_pane_g4_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g4

0x3e33,	// (0x0007d0b7) main_video2_pane_g5_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g5

0x3e33,	// (0x0007d0b7) main_video2_pane_g6_ParamLimits

0x3e33,	// (0x0007d0b7) main_video2_pane_g6

0x0005,

0xf556,	// (0x000887da) main_video2_pane_g_ParamLimits

0xf556,	// (0x000887da) main_video2_pane_g

0x3e41,	// (0x0007d0c5) main_video2_pane_t1_ParamLimits

0x3e41,	// (0x0007d0c5) main_video2_pane_t1

0x3e41,	// (0x0007d0c5) main_video2_pane_t2_ParamLimits

0x3e41,	// (0x0007d0c5) main_video2_pane_t2

0x3e41,	// (0x0007d0c5) main_video2_pane_t3_ParamLimits

0x3e41,	// (0x0007d0c5) main_video2_pane_t3

0x0002,

0xf563,	// (0x000887e7) main_video2_pane_t_ParamLimits

0xf563,	// (0x000887e7) main_video2_pane_t

0x37ac,	// (0x0007ca30) call_muted_g2

0x0001,

0xf50a,	// (0x0008878e) call_muted_g

0xa40f,	// (0x00083693) main_mup2_pane

0xb500,	// (0x00084784) main_mup2_pane_g1_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g1

0xb500,	// (0x00084784) main_mup2_pane_g2_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g2

0xa72b,	// (0x000839af) main_mup_pane_g13_cp1

0x9f77,	// (0x000831fb) mup_volume_pane_cp1

0xb500,	// (0x00084784) main_mup2_pane_g4_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g4

0xb500,	// (0x00084784) main_mup2_pane_g5_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g5

0xb500,	// (0x00084784) main_mup2_pane_g6_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g6

0xb500,	// (0x00084784) main_mup2_pane_g7_ParamLimits

0xb500,	// (0x00084784) main_mup2_pane_g7

0x0006,

0xf56a,	// (0x000887ee) main_mup2_pane_g_ParamLimits

0xf56a,	// (0x000887ee) main_mup2_pane_g

0xb50e,	// (0x00084792) main_mup2_pane_t1_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t1

0xb50e,	// (0x00084792) main_mup2_pane_t2_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t2

0xb50e,	// (0x00084792) main_mup2_pane_t3_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t3

0xb50e,	// (0x00084792) main_mup2_pane_t4_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t4

0xb50e,	// (0x00084792) main_mup2_pane_t5_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t5

0xb50e,	// (0x00084792) main_mup2_pane_t6_ParamLimits

0xb50e,	// (0x00084792) main_mup2_pane_t6

0x0005,

0xf579,	// (0x000887fd) main_mup2_pane_t_ParamLimits

0xf579,	// (0x000887fd) main_mup2_pane_t

0xb522,	// (0x000847a6) mup2_visualizer_pane_ParamLimits

0xb522,	// (0x000847a6) mup2_visualizer_pane

0xb522,	// (0x000847a6) mup_progress_pane_cp_ParamLimits

0xb522,	// (0x000847a6) mup_progress_pane_cp

0xc972,	// (0x00085bf6) mup_volume_pane_cp_ParamLimits

0xc972,	// (0x00085bf6) mup_volume_pane_cp

0xa6e5,	// (0x00083969) mup2_visualizer_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) mup2_visualizer_pane_g1

0xa6f3,	// (0x00083977) mup2_visualizer_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) mup2_visualizer_pane_g2

0xa6f3,	// (0x00083977) mup2_visualizer_pane_g3_ParamLimits

0xa6f3,	// (0x00083977) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00088300) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00088300) mup2_visualizer_pane_g

0x9f77,	// (0x000831fb) aid_size_cell_fmradio

0x395e,	// (0x0007cbe2) aid_height_parent_landcape

0xab32,	// (0x00083db6) wml_content_pane_cp

0xab3a,	// (0x00083dbe) wml_tabs_pane

0xab43,	// (0x00083dc7) popup_wml_miniature_window

0xab4b,	// (0x00083dcf) scroll_pane_cp021

0xab5f,	// (0x00083de3) wml_content_pane_comp8

0xa40f,	// (0x00083693) bg_popup_sub_pane_cp05

0xc988,	// (0x00085c0c) popup_wml_miniature_window_g1

0xc990,	// (0x00085c14) wml_miniature_view_pane

0x3e55,	// (0x0007d0d9) aid_size_wml_view

0x3e5d,	// (0x0007d0e1) wml_miniature_view_pane_g1

0x3e66,	// (0x0007d0ea) wml_miniature_view_pane_g2

0x3e6f,	// (0x0007d0f3) wml_miniature_view_pane_g3

0x3e77,	// (0x0007d0fb) wml_miniature_view_pane_g4

0x3e7f,	// (0x0007d103) wml_miniature_view_pane_g5

0x3e87,	// (0x0007d10b) wml_miniature_view_pane_g6

0x3e8f,	// (0x0007d113) wml_miniature_view_pane_g7

0x3e97,	// (0x0007d11b) wml_miniature_view_pane_g8

0x0007,

0xf586,	// (0x0008880a) wml_miniature_view_pane_g

0xc998,	// (0x00085c1c) background_graphic_ParamLimits

0xc998,	// (0x00085c1c) background_graphic

0xc9a4,	// (0x00085c28) wml_tabs_2_pane

0xc9ad,	// (0x00085c31) wml_tabs_3_pane_ParamLimits

0xc9ad,	// (0x00085c31) wml_tabs_3_pane

0xc9bf,	// (0x00085c43) wml_tabs_4_pane_ParamLimits

0xc9bf,	// (0x00085c43) wml_tabs_4_pane

0xc9d5,	// (0x00085c59) wml_tabs_5_pane_ParamLimits

0xc9d5,	// (0x00085c59) wml_tabs_5_pane

0xc9ef,	// (0x00085c73) wml_tabs_pane_g2_ParamLimits

0xc9ef,	// (0x00085c73) wml_tabs_pane_g2

0xca04,	// (0x00085c88) wml_tabs_pane_g3_ParamLimits

0xca04,	// (0x00085c88) wml_tabs_pane_g3

0xca19,	// (0x00085c9d) wml_tabs_2_active_pane_ParamLimits

0xca19,	// (0x00085c9d) wml_tabs_2_active_pane

0xca19,	// (0x00085c9d) wml_tabs_2_passive_pane_ParamLimits

0xca19,	// (0x00085c9d) wml_tabs_2_passive_pane

0x3e9f,	// (0x0007d123) wml_tabs_3_active_pane_cp_ParamLimits

0x3e9f,	// (0x0007d123) wml_tabs_3_active_pane_cp

0x3eb4,	// (0x0007d138) wml_tabs_3_passive_pane_ParamLimits

0x3eb4,	// (0x0007d138) wml_tabs_3_passive_pane

0x3ec7,	// (0x0007d14b) wml_tabs_3_passive_pane_cp_ParamLimits

0x3ec7,	// (0x0007d14b) wml_tabs_3_passive_pane_cp

0x3ede,	// (0x0007d162) tabs_4_active_pane

0x3ee6,	// (0x0007d16a) tabs_4_passive_pane

0x3ef0,	// (0x0007d174) tabs_4_passive_pane_cp

0x3ef8,	// (0x0007d17c) tabs_4_passive_pane_cp2

0x3722,	// (0x0007c9a6) aid_height_text

0xb522,	// (0x000847a6) mup_volume_cont_pane_ParamLimits

0xb522,	// (0x000847a6) mup_volume_cont_pane

0x9f77,	// (0x000831fb) aid_size_cell_pinb

0x9f77,	// (0x000831fb) aid_size_list_pinb

0xb522,	// (0x000847a6) mup2_volume_cont_pane_ParamLimits

0xb522,	// (0x000847a6) mup2_volume_cont_pane

0xca27,	// (0x00085cab) mup2_volume_cont_pane_g1_ParamLimits

0xca27,	// (0x00085cab) mup2_volume_cont_pane_g1

0x1088,	// (0x0007a30c) aid_size_cell_touch_ParamLimits

0x1088,	// (0x0007a30c) aid_size_cell_touch

0x12b4,	// (0x0007a538) touch_pane_ParamLimits

0x12b4,	// (0x0007a538) touch_pane

0x9f77,	// (0x000831fb) main_rss2_pane

0xca46,	// (0x00085cca) listscroll_rss2_pane

0xca4f,	// (0x00085cd3) rss2_navigation_pane

0xca57,	// (0x00085cdb) list_rss2_pane

0xb203,	// (0x00084487) scroll_pane_cp22

0xca5f,	// (0x00085ce3) rss2_navigation_pane_g1

0xca68,	// (0x00085cec) rss2_navigation_pane_g2

0xca70,	// (0x00085cf4) rss2_navigation_pane_g3

0x0002,

0xf597,	// (0x0008881b) rss2_navigation_pane_g

0xca78,	// (0x00085cfc) rss2_navigation_pane_t1

0x3f02,	// (0x0007d186) rss2_list_single_pane_ParamLimits

0x3f02,	// (0x0007d186) rss2_list_single_pane

0xca86,	// (0x00085d0a) rss2_list_single_pane_t2

0xca94,	// (0x00085d18) rss2_list_single_pane_t3_ParamLimits

0xca94,	// (0x00085d18) rss2_list_single_pane_t3

0xcab1,	// (0x00085d35) rss2_list_single_pane_t4

0x2a7e,	// (0x0007bd02) smil_status_pane_g1

0x9fee,	// (0x00083272) main_image2_pane_ParamLimits

0x9fee,	// (0x00083272) main_image2_pane

0xe3f7,	// (0x0008767b) main_camera2_pane_g9_ParamLimits

0xe3f7,	// (0x0008767b) main_camera2_pane_g9

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t5_ParamLimits

0x3e1f,	// (0x0007d0a3) main_camera2_pane_t5

0xc942,	// (0x00085bc6) main_camera2_pane_t6_ParamLimits

0xc942,	// (0x00085bc6) main_camera2_pane_t6

0x3f18,	// (0x0007d19c) main_image2_pane_g1_ParamLimits

0x3f18,	// (0x0007d19c) main_image2_pane_g1

0x33f5,	// (0x0007c679) smil2_video_pane_ParamLimits

0x33f5,	// (0x0007c679) smil2_video_pane

0x9fa5,	// (0x00083229) aid_zoom_text_primary_cp

0x9fe4,	// (0x00083268) popup_preview_fixed_window

0xaa9b,	// (0x00083d1f) im_reading_pane_g1

0x3e11,	// (0x0007d095) cams2_bc_adjust_pane_cp_ParamLimits

0x3e11,	// (0x0007d095) cams2_bc_adjust_pane_cp

0xb522,	// (0x000847a6) cams2_bc_adjust_pane_ParamLimits

0xb522,	// (0x000847a6) cams2_bc_adjust_pane

0xa72b,	// (0x000839af) cams2_bc_adjust_pane_g1

0x9f77,	// (0x000831fb) cams2_slider_pane

0xa72b,	// (0x000839af) cams2_slider_pane_g1

0xa72b,	// (0x000839af) cams2_slider_pane_g2

0x0006,

0xf59e,	// (0x00088822) cams2_slider_pane_g

0x137d,	// (0x0007a601) calc_display_pane_ParamLimits

0x13a2,	// (0x0007a626) calc_paper_pane_ParamLimits

0x13c5,	// (0x0007a649) grid_calc_pane_ParamLimits

0xb0de,	// (0x00084362) popup_clock_digital_window_t1_ParamLimits

0xb7b3,	// (0x00084a37) main_image_pane_t1

0x135f,	// (0x0007a5e3) aid_size_cell_calc_ParamLimits

0x135f,	// (0x0007a5e3) aid_size_cell_calc

0x39a4,	// (0x0007cc28) popup_blid_sat_info2_window_ParamLimits

0x39a4,	// (0x0007cc28) popup_blid_sat_info2_window

0xcabf,	// (0x00085d43) aid_size_cell_blid

0xc964,	// (0x00085be8) bg_popup_window_pane_cp07

0xcadc,	// (0x00085d60) grid_popup_blid_pane

0xcae6,	// (0x00085d6a) heading_pane_cp05_ParamLimits

0xcae6,	// (0x00085d6a) heading_pane_cp05

0xcbb0,	// (0x00085e34) cell_popup_blid_pane_ParamLimits

0xcbb0,	// (0x00085e34) cell_popup_blid_pane

0xcbd4,	// (0x00085e58) cell_popup_blid_pane_g1

0xcbdc,	// (0x00085e60) cell_popup_blid_pane_t1

0xb522,	// (0x000847a6) mup2_indicator_pane_ParamLimits

0xb522,	// (0x000847a6) mup2_indicator_pane

0x9f77,	// (0x000831fb) mup2_visualizer_osc_pane

0xc972,	// (0x00085bf6) mup2_visualizer_spec_pane_ParamLimits

0xc972,	// (0x00085bf6) mup2_visualizer_spec_pane

0x9f77,	// (0x000831fb) mup2_spec_half_pane

0x9f77,	// (0x000831fb) mup2_spec_half_pane_cp

0xcbea,	// (0x00085e6e) mup2_spec_bar_pane_ParamLimits

0xcbea,	// (0x00085e6e) mup2_spec_bar_pane

0xa72b,	// (0x000839af) mup2_spec_bar_pane_g1

0xcc09,	// (0x00085e8d) mup2_spec_bar_pane_g2

0x0001,

0xf5c4,	// (0x00088848) mup2_spec_bar_pane_g

0x9f77,	// (0x000831fb) mup2_osc_middle_pane

0xa72b,	// (0x000839af) mup2_visualizer_osc_pane_g1

0xa01c,	// (0x000832a0) popup_number_entry_window_t1_ParamLimits

0xa02f,	// (0x000832b3) popup_number_entry_window_t2_ParamLimits

0xa041,	// (0x000832c5) popup_number_entry_window_t3_ParamLimits

0x1306,	// (0x0007a58a) popup_number_entry_window_t5_ParamLimits

0x1306,	// (0x0007a58a) popup_number_entry_window_t5

0xf01d,	// (0x000882a1) popup_number_entry_window_t_ParamLimits

0xa053,	// (0x000832d7) text_title_cp2_ParamLimits

0xb6ab,	// (0x0008492f) aid_hotspot_pointer_text2_pane

0xb6d1,	// (0x00084955) main_viewer_pane_g9_ParamLimits

0xb6d1,	// (0x00084955) main_viewer_pane_g9

0xacd4,	// (0x00083f58) cale_month_pane_t1_ParamLimits

0xad3f,	// (0x00083fc3) bg_cale_pane_ParamLimits

0xad57,	// (0x00083fdb) list_cale_pane_ParamLimits

0xad68,	// (0x00083fec) listscroll_cale_day_pane_t1

0xad7a,	// (0x00083ffe) scroll_pane_cp09_ParamLimits

0x2e77,	// (0x0007c0fb) main_mup_eq_pane_t1_ParamLimits

0x2e77,	// (0x0007c0fb) main_mup_eq_pane_t1

0x2e91,	// (0x0007c115) main_mup_eq_pane_t2_ParamLimits

0x2e91,	// (0x0007c115) main_mup_eq_pane_t2

0x2eab,	// (0x0007c12f) main_mup_eq_pane_t3_ParamLimits

0x2eab,	// (0x0007c12f) main_mup_eq_pane_t3

0x2ec7,	// (0x0007c14b) main_mup_eq_pane_t4_ParamLimits

0x2ec7,	// (0x0007c14b) main_mup_eq_pane_t4

0x2ee3,	// (0x0007c167) main_mup_eq_pane_t5_ParamLimits

0x2ee3,	// (0x0007c167) main_mup_eq_pane_t5

0x2eff,	// (0x0007c183) main_mup_eq_pane_t6_ParamLimits

0x2eff,	// (0x0007c183) main_mup_eq_pane_t6

0x2f13,	// (0x0007c197) main_mup_eq_pane_t7_ParamLimits

0x2f13,	// (0x0007c197) main_mup_eq_pane_t7

0x2f27,	// (0x0007c1ab) main_mup_eq_pane_t8_ParamLimits

0x2f27,	// (0x0007c1ab) main_mup_eq_pane_t8

0x2f3b,	// (0x0007c1bf) main_mup_eq_pane_t9_ParamLimits

0x2f3b,	// (0x0007c1bf) main_mup_eq_pane_t9

0x2f55,	// (0x0007c1d9) main_mup_eq_pane_t10_ParamLimits

0x2f55,	// (0x0007c1d9) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x000885fb) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x000885fb) main_mup_eq_pane_t

0x3004,	// (0x0007c288) mup_equalizer_pane_cp5_ParamLimits

0x3018,	// (0x0007c29c) mup_equalizer_pane_cp6_ParamLimits

0x302c,	// (0x0007c2b0) mup_equalizer_pane_cp7_ParamLimits

0x9f77,	// (0x000831fb) main_gallery_pane

0xc8b0,	// (0x00085b34) smil2_volume_pane

0xc8b8,	// (0x00085b3c) smil_status_volume_pane_g1_ParamLimits

0xc8cb,	// (0x00085b4f) smil_status_volume_pane_g2_ParamLimits

0xc8de,	// (0x00085b62) smil_status_volume_pane_g3_ParamLimits

0xf51d,	// (0x000887a1) smil_status_volume_pane_g_ParamLimits

0xc964,	// (0x00085be8) bg_popup_window_pane_cp07_ParamLimits

0xcac7,	// (0x00085d4b) blid_firmament_pane

0x9fee,	// (0x00083272) aid_size_cell_gallery_ParamLimits

0x9fee,	// (0x00083272) aid_size_cell_gallery

0x9fee,	// (0x00083272) grid_gallery_pane_ParamLimits

0x9fee,	// (0x00083272) grid_gallery_pane

0xc964,	// (0x00085be8) cell_gallery_pane_ParamLimits

0xc964,	// (0x00085be8) cell_gallery_pane

0x9fee,	// (0x00083272) bg_cell_gallery_focus_pane_ParamLimits

0x9fee,	// (0x00083272) bg_cell_gallery_focus_pane

0xa6e5,	// (0x00083969) cell_gallery_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_gallery_pane_g1

0xa6e5,	// (0x00083969) cell_gallery_pane_g2_ParamLimits

0xa6e5,	// (0x00083969) cell_gallery_pane_g2

0xa6e5,	// (0x00083969) cell_gallery_pane_g3_ParamLimits

0xa6e5,	// (0x00083969) cell_gallery_pane_g3

0xa6f3,	// (0x00083977) cell_gallery_pane_g4_ParamLimits

0xa6f3,	// (0x00083977) cell_gallery_pane_g4

0x0003,

0xf5c9,	// (0x0008884d) cell_gallery_pane_g_ParamLimits

0xf5c9,	// (0x0008884d) cell_gallery_pane_g

0xcc13,	// (0x00085e97) bg_cell_gallery_focus_pane_g1

0xcc1b,	// (0x00085e9f) bg_cell_gallery_focus_pane_g2

0xcc23,	// (0x00085ea7) bg_cell_gallery_focus_pane_g3

0xcc2b,	// (0x00085eaf) bg_cell_gallery_focus_pane_g4

0xcc33,	// (0x00085eb7) bg_cell_gallery_focus_pane_g5

0xcc3b,	// (0x00085ebf) bg_cell_gallery_focus_pane_g6

0xcc43,	// (0x00085ec7) bg_cell_gallery_focus_pane_g7

0xcc4b,	// (0x00085ecf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5d2,	// (0x00088856) bg_cell_gallery_focus_pane_g

0xcc53,	// (0x00085ed7) aid_firma_cardinal

0xcc67,	// (0x00085eeb) blid_firmament_pane_t1

0xcc7e,	// (0x00085f02) blid_firmament_pane_t2

0xcc95,	// (0x00085f19) blid_firmament_pane_t3

0xccac,	// (0x00085f30) blid_firmament_pane_t4

0x0003,

0xf5e3,	// (0x00088867) blid_firmament_pane_t

0xccc3,	// (0x00085f47) blid_sat_info_pane

0xa72b,	// (0x000839af) blid_sat_info_pane_g1

0xa72b,	// (0x000839af) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00088310) blid_sat_info_pane_g

0xccd3,	// (0x00085f57) blid_sat_info_pane_t1

0xcce1,	// (0x00085f65) smil2_volume_content_pane

0xccea,	// (0x00085f6e) smil2_volume_pane_g1

0xa83e,	// (0x00083ac2) smil2_volume_content_pane_g1

0xccf2,	// (0x00085f76) smil2_volume_content_pane_g2

0xccfb,	// (0x00085f7f) smil2_volume_content_pane_g3

0xcd04,	// (0x00085f88) smil2_volume_content_pane_g4

0xcd0d,	// (0x00085f91) smil2_volume_content_pane_g5

0xcd16,	// (0x00085f9a) smil2_volume_content_pane_g6

0xcd1f,	// (0x00085fa3) smil2_volume_content_pane_g7

0xcd28,	// (0x00085fac) smil2_volume_content_pane_g8

0xcd31,	// (0x00085fb5) smil2_volume_content_pane_g9

0xcd3a,	// (0x00085fbe) smil2_volume_content_pane_g10

0x0009,

0xf5ec,	// (0x00088870) smil2_volume_content_pane_g

0x188b,	// (0x0007ab0f) cale_week_day_heading_pane_t1_ParamLimits

0x18b5,	// (0x0007ab39) cale_week_day_heading_pane_t2_ParamLimits

0x18e4,	// (0x0007ab68) cale_week_day_heading_pane_t3_ParamLimits

0x1913,	// (0x0007ab97) cale_week_day_heading_pane_t4_ParamLimits

0x1942,	// (0x0007abc6) cale_week_day_heading_pane_t5_ParamLimits

0x1979,	// (0x0007abfd) cale_week_day_heading_pane_t6_ParamLimits

0x19b0,	// (0x0007ac34) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000883a8) cale_week_day_heading_pane_t_ParamLimits

0xa986,	// (0x00083c0a) bg_cale_side_pane_ParamLimits

0x19da,	// (0x0007ac5e) cale_week_time_pane_t1_ParamLimits

0x19f4,	// (0x0007ac78) cale_week_time_pane_t2_ParamLimits

0x1a0e,	// (0x0007ac92) cale_week_time_pane_t3_ParamLimits

0x1a28,	// (0x0007acac) cale_week_time_pane_t4_ParamLimits

0x1a42,	// (0x0007acc6) cale_week_time_pane_t5_ParamLimits

0x1a5c,	// (0x0007ace0) cale_week_time_pane_t6_ParamLimits

0x1a76,	// (0x0007acfa) cale_week_time_pane_t7_ParamLimits

0x1a90,	// (0x0007ad14) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000883b7) cale_week_time_pane_t_ParamLimits

0x1ab0,	// (0x0007ad34) cell_cale_week_pane_g2_ParamLimits

0xa986,	// (0x00083c0a) bg_cale_side_pane_cp01_ParamLimits

0x2883,	// (0x0007bb07) cale_month_week_pane_t1_ParamLimits

0x289c,	// (0x0007bb20) cale_month_week_pane_t2_ParamLimits

0x28b5,	// (0x0007bb39) cale_month_week_pane_t3_ParamLimits

0x28ce,	// (0x0007bb52) cale_month_week_pane_t4_ParamLimits

0x28e7,	// (0x0007bb6b) cale_month_week_pane_t5_ParamLimits

0x2900,	// (0x0007bb84) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00088485) cale_month_week_pane_t_ParamLimits

0xace6,	// (0x00083f6a) cell_cale_month_pane_g1_ParamLimits

0x9f77,	// (0x000831fb) main_cale_event_viewer_pane

0x9f77,	// (0x000831fb) listscroll_cale_event_viewer_pane

0xcd43,	// (0x00085fc7) list_cale_ev_pane

0xcd4b,	// (0x00085fcf) scroll_pane_cp023

0xcd57,	// (0x00085fdb) field_cale_ev_pane_ParamLimits

0xcd57,	// (0x00085fdb) field_cale_ev_pane

0xcd75,	// (0x00085ff9) field_cale_ev_content_pane_ParamLimits

0xcd75,	// (0x00085ff9) field_cale_ev_content_pane

0xcd81,	// (0x00086005) field_cale_ev_pane_g1_ParamLimits

0xcd81,	// (0x00086005) field_cale_ev_pane_g1

0xcd8d,	// (0x00086011) field_cale_ev_pane_g2_ParamLimits

0xcd8d,	// (0x00086011) field_cale_ev_pane_g2

0xcda5,	// (0x00086029) field_cale_ev_pane_g3_ParamLimits

0xcda5,	// (0x00086029) field_cale_ev_pane_g3

0x0002,

0xf601,	// (0x00088885) field_cale_ev_pane_g_ParamLimits

0xf601,	// (0x00088885) field_cale_ev_pane_g

0xcdbd,	// (0x00086041) field_cale_ev_pane_t1_ParamLimits

0xcdbd,	// (0x00086041) field_cale_ev_pane_t1

0xcdd4,	// (0x00086058) field_cale_ev_content_pane_t1_ParamLimits

0xcdd4,	// (0x00086058) field_cale_ev_content_pane_t1

0xb5cd,	// (0x00084851) bg_button_pane_cp01

0x15b8,	// (0x0007a83c) listscroll_cale_week_pane_ParamLimits

0xa931,	// (0x00083bb5) popup_toolbar_window_cp01

0xa957,	// (0x00083bdb) listscroll_cale_week_pane_t1_ParamLimits

0x15b8,	// (0x0007a83c) listscroll_cale_day_pane_ParamLimits

0xa931,	// (0x00083bb5) popup_toolbar_window_cp02

0xad68,	// (0x00083fec) listscroll_cale_day_pane_t1_ParamLimits

0x15b8,	// (0x0007a83c) main_cale_month_pane_ParamLimits

0xc82e,	// (0x00085ab2) popup_toolbar_window_cp03_ParamLimits

0xc82e,	// (0x00085ab2) popup_toolbar_window_cp03

0x32bd,	// (0x0007c541) main_image_pane_g2_ParamLimits

0x32bd,	// (0x0007c541) main_image_pane_g2

0x32ce,	// (0x0007c552) main_image_pane_g3_ParamLimits

0x32ce,	// (0x0007c552) main_image_pane_g3

0x0002,

0xf409,	// (0x0008868d) main_image_pane_g_ParamLimits

0xf409,	// (0x0008868d) main_image_pane_g

0xb7b3,	// (0x00084a37) main_image_pane_t1_ParamLimits

0x32df,	// (0x0007c563) main_image_pane_t2_ParamLimits

0x32df,	// (0x0007c563) main_image_pane_t2

0x32f1,	// (0x0007c575) main_image_pane_t3_ParamLimits

0x32f1,	// (0x0007c575) main_image_pane_t3

0x3319,	// (0x0007c59d) main_image_pane_t4_ParamLimits

0x3319,	// (0x0007c59d) main_image_pane_t4

0x0003,

0xf410,	// (0x00088694) main_image_pane_t_ParamLimits

0xf410,	// (0x00088694) main_image_pane_t

0x3339,	// (0x0007c5bd) popup_image_details_window_cp01

0x3343,	// (0x0007c5c7) popup_toobar_trans_pane_cp01_ParamLimits

0x3343,	// (0x0007c5c7) popup_toobar_trans_pane_cp01

0x3a75,	// (0x0007ccf9) popup_image_details_window_ParamLimits

0x3a75,	// (0x0007ccf9) popup_image_details_window

0xc801,	// (0x00085a85) popup_image_focus_window

0xc934,	// (0x00085bb8) camera2_autofocus_pane_ParamLimits

0xc934,	// (0x00085bb8) camera2_autofocus_pane

0x9f77,	// (0x000831fb) bg_popup_sub_pane_cp06

0xcdf2,	// (0x00086076) popup_image_focus_window_g1

0xcdfa,	// (0x0008607e) popup_image_focus_window_g2

0xce02,	// (0x00086086) popup_image_focus_window_g3

0xce0a,	// (0x0008608e) popup_image_focus_window_g4

0x0003,

0xf608,	// (0x0008888c) popup_image_focus_window_g

0xce12,	// (0x00086096) popup_image_focus_window_t1

0xce20,	// (0x000860a4) popup_image_focus_window_t2

0xce30,	// (0x000860b4) popup_image_focus_window_t3

0x0002,

0xf611,	// (0x00088895) popup_image_focus_window_t

0xa6e5,	// (0x00083969) camera2_autofocus_pane_g1

0x9fee,	// (0x00083272) bg_tb_trans_pane_cp01

0xce3e,	// (0x000860c2) popup_image_details_window_g1

0xce51,	// (0x000860d5) popup_image_details_window_g2

0x0002,

0xf623,	// (0x000888a7) popup_image_details_window_g

0xce7a,	// (0x000860fe) popup_image_details_window_t1

0xce8c,	// (0x00086110) popup_image_details_window_t2

0xcea5,	// (0x00086129) popup_image_details_window_t3

0xceb9,	// (0x0008613d) popup_image_details_window_t4

0xced4,	// (0x00086158) popup_image_details_window_t5

0x0004,

0xf62a,	// (0x000888ae) popup_image_details_window_t

0xa775,	// (0x000839f9) bg_calc_paper_pane_ParamLimits

0x9f77,	// (0x000831fb) grid_highlight_pane_cp013

0xa789,	// (0x00083a0d) list_calc_pane_ParamLimits

0xa79b,	// (0x00083a1f) scroll_pane_cp024

0xa7a3,	// (0x00083a27) bg_calc_display_pane_ParamLimits

0x1407,	// (0x0007a68b) calc_display_pane_t1_ParamLimits

0x1419,	// (0x0007a69d) calc_display_pane_t2_ParamLimits

0xa7af,	// (0x00083a33) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00088328) calc_display_pane_t_ParamLimits

0x14d3,	// (0x0007a757) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00088345) cell_calc_pane_g

0x14dc,	// (0x0007a760) cell_calc_pane_t1

0xa81c,	// (0x00083aa0) grid_highlight_pane_cp02_ParamLimits

0xa832,	// (0x00083ab6) toolbar_button_pane_cp01_ParamLimits

0xa832,	// (0x00083ab6) toolbar_button_pane_cp01

0xb7f8,	// (0x00084a7c) temp_image_control_pane_ParamLimits

0xb7f8,	// (0x00084a7c) temp_image_control_pane

0x9fee,	// (0x00083272) main_mp3_pane

0xceee,	// (0x00086172) temp_image_control_pane_g1_ParamLimits

0xceee,	// (0x00086172) temp_image_control_pane_g1

0xcefc,	// (0x00086180) temp_image_control_pane_g2_ParamLimits

0xcefc,	// (0x00086180) temp_image_control_pane_g2

0xcf0e,	// (0x00086192) temp_image_control_pane_g3_ParamLimits

0xcf0e,	// (0x00086192) temp_image_control_pane_g3

0x3f2e,	// (0x0007d1b2) temp_image_control_pane_g4_ParamLimits

0x3f2e,	// (0x0007d1b2) temp_image_control_pane_g4

0x0003,

0xf635,	// (0x000888b9) temp_image_control_pane_g_ParamLimits

0xf635,	// (0x000888b9) temp_image_control_pane_g

0xceee,	// (0x00086172) main_mp3_pane_g1

0x3f41,	// (0x0007d1c5) main_mp3_pane_g2

0x0007,

0xf63e,	// (0x000888c2) main_mp3_pane_g

0xcf43,	// (0x000861c7) main_mp3_pane_t1

0xa6f3,	// (0x00083977) main_camera_pane_g8_ParamLimits

0xa6f3,	// (0x00083977) main_camera_pane_g8

0x1c7e,	// (0x0007af02) main_video_pane_g7_ParamLimits

0x1c7e,	// (0x0007af02) main_video_pane_g7

0xa749,	// (0x000839cd) main_camera2_pane_t7_ParamLimits

0xa749,	// (0x000839cd) main_camera2_pane_t7

0xaaf2,	// (0x00083d76) scroll_pane_cp025_ParamLimits

0xaaf2,	// (0x00083d76) scroll_pane_cp025

0xab06,	// (0x00083d8a) scroll_pane_cp026_ParamLimits

0xab06,	// (0x00083d8a) scroll_pane_cp026

0xab15,	// (0x00083d99) wml_content_pane_ParamLimits

0x9f77,	// (0x000831fb) main_touch_calib_pane

0x4015,	// (0x0007d299) main_touch_calib_pane_g1

0x4027,	// (0x0007d2ab) main_touch_calib_pane_g2

0x4039,	// (0x0007d2bd) main_touch_calib_pane_g3

0x404b,	// (0x0007d2cf) main_touch_calib_pane_g4

0x0003,

0xf65c,	// (0x000888e0) main_touch_calib_pane_g

0x405d,	// (0x0007d2e1) main_touch_calib_pane_t1

0x4077,	// (0x0007d2fb) main_touch_calib_pane_t2

0x0004,

0xf665,	// (0x000888e9) main_touch_calib_pane_t

0xb2d2,	// (0x00084556) mup_progress_pane_cp02

0xb307,	// (0x0008458b) navi_pane_g1

0xb3c2,	// (0x00084646) navi_pane_mp_t3

0x9fee,	// (0x00083272) main_mp3_pane_ParamLimits

0x3c00,	// (0x0007ce84) navi_pane_ParamLimits

0xceee,	// (0x00086172) main_mp3_pane_g1_ParamLimits

0x3f41,	// (0x0007d1c5) main_mp3_pane_g2_ParamLimits

0x3f4f,	// (0x0007d1d3) main_mp3_pane_g3_ParamLimits

0x3f4f,	// (0x0007d1d3) main_mp3_pane_g3

0x3f5d,	// (0x0007d1e1) main_mp3_pane_g4_ParamLimits

0x3f5d,	// (0x0007d1e1) main_mp3_pane_g4

0xa6e5,	// (0x00083969) main_mp3_pane_g5_ParamLimits

0xa6e5,	// (0x00083969) main_mp3_pane_g5

0xcf1e,	// (0x000861a2) main_mp3_pane_g6_ParamLimits

0xcf1e,	// (0x000861a2) main_mp3_pane_g6

0xcf2b,	// (0x000861af) main_mp3_pane_g7_ParamLimits

0xcf2b,	// (0x000861af) main_mp3_pane_g7

0xcf37,	// (0x000861bb) main_mp3_pane_g8_ParamLimits

0xcf37,	// (0x000861bb) main_mp3_pane_g8

0xf63e,	// (0x000888c2) main_mp3_pane_g_ParamLimits

0x3f69,	// (0x0007d1ed) main_mp3_pane_t2

0x3f77,	// (0x0007d1fb) main_mp3_pane_t3

0xcf51,	// (0x000861d5) main_mp3_pane_t4

0xcf5f,	// (0x000861e3) main_mp3_pane_t5

0x0005,

0xf64f,	// (0x000888d3) main_mp3_pane_t

0xcf6d,	// (0x000861f1) mup_progress_pane_cp01

0xc7db,	// (0x00085a5f) aid_zoom_text_secondary2

0xcd43,	// (0x00085fc7) list_cale_ev2_pane

0xcd4b,	// (0x00085fcf) scroll_pane_cp023_ParamLimits

0x40cd,	// (0x0007d351) field_cale_ev2_pane_ParamLimits

0x40cd,	// (0x0007d351) field_cale_ev2_pane

0xcf75,	// (0x000861f9) field_cale_ev2_pane_g1_ParamLimits

0xcf75,	// (0x000861f9) field_cale_ev2_pane_g1

0xcf81,	// (0x00086205) field_cale_ev2_pane_g2_ParamLimits

0xcf81,	// (0x00086205) field_cale_ev2_pane_g2

0xcf99,	// (0x0008621d) field_cale_ev2_pane_g3_ParamLimits

0xcf99,	// (0x0008621d) field_cale_ev2_pane_g3

0x0003,

0xf670,	// (0x000888f4) field_cale_ev2_pane_g_ParamLimits

0xf670,	// (0x000888f4) field_cale_ev2_pane_g

0xcfbd,	// (0x00086241) field_cale_ev2_pane_t1_ParamLimits

0xcfbd,	// (0x00086241) field_cale_ev2_pane_t1

0xcfd4,	// (0x00086258) field_cale_ev2_pane_t2_ParamLimits

0xcfd4,	// (0x00086258) field_cale_ev2_pane_t2

0x0001,

0xf679,	// (0x000888fd) field_cale_ev2_pane_t_ParamLimits

0xf679,	// (0x000888fd) field_cale_ev2_pane_t

0x3193,	// (0x0007c417) main_postcard_pane_g5_ParamLimits

0x3193,	// (0x0007c417) main_postcard_pane_g5

0x31a9,	// (0x0007c42d) main_postcard_pane_g6_ParamLimits

0x31a9,	// (0x0007c42d) main_postcard_pane_g6

0x9fee,	// (0x00083272) camera2_autofocus_pane_cp_ParamLimits

0x9fee,	// (0x00083272) camera2_autofocus_pane_cp

0x9fee,	// (0x00083272) main_mup3_pane

0x4132,	// (0x0007d3b6) main_mup3_pane_g1_ParamLimits

0x4132,	// (0x0007d3b6) main_mup3_pane_g1

0x4184,	// (0x0007d408) main_mup3_pane_g2_ParamLimits

0x4184,	// (0x0007d408) main_mup3_pane_g2

0x41ec,	// (0x0007d470) main_mup3_pane_g3_ParamLimits

0x41ec,	// (0x0007d470) main_mup3_pane_g3

0x4250,	// (0x0007d4d4) main_mup3_pane_g4_ParamLimits

0x4250,	// (0x0007d4d4) main_mup3_pane_g4

0x42b4,	// (0x0007d538) main_mup3_pane_g5_ParamLimits

0x42b4,	// (0x0007d538) main_mup3_pane_g5

0x4318,	// (0x0007d59c) main_mup3_pane_g6_ParamLimits

0x4318,	// (0x0007d59c) main_mup3_pane_g6

0xa6f3,	// (0x00083977) main_mup3_pane_g7_ParamLimits

0xa6f3,	// (0x00083977) main_mup3_pane_g7

0x0007,

0xf689,	// (0x0008890d) main_mup3_pane_g_ParamLimits

0xf689,	// (0x0008890d) main_mup3_pane_g

0x438d,	// (0x0007d611) main_mup3_pane_t1_ParamLimits

0x438d,	// (0x0007d611) main_mup3_pane_t1

0x447b,	// (0x0007d6ff) main_mup3_pane_t2_ParamLimits

0x447b,	// (0x0007d6ff) main_mup3_pane_t2

0x4569,	// (0x0007d7ed) main_mup3_pane_t4_ParamLimits

0x4569,	// (0x0007d7ed) main_mup3_pane_t4

0x457b,	// (0x0007d7ff) main_mup3_pane_t5_ParamLimits

0x457b,	// (0x0007d7ff) main_mup3_pane_t5

0x464d,	// (0x0007d8d1) main_mup3_pane_t6_ParamLimits

0x464d,	// (0x0007d8d1) main_mup3_pane_t6

0x0005,

0xf69a,	// (0x0008891e) main_mup3_pane_t_ParamLimits

0xf69a,	// (0x0008891e) main_mup3_pane_t

0x46f5,	// (0x0007d979) mup3_progress_pane_ParamLimits

0x46f5,	// (0x0007d979) mup3_progress_pane

0x4769,	// (0x0007d9ed) popup_mup3_control_window_ParamLimits

0x4769,	// (0x0007d9ed) popup_mup3_control_window

0xcfe9,	// (0x0008626d) popup_mup3_text_window

0x4781,	// (0x0007da05) mup3_progress_pane_t1

0x47a0,	// (0x0007da24) mup3_progress_pane_t2

0xcff1,	// (0x00086275) mup3_progress_pane_t3

0x0002,

0xf6a7,	// (0x0008892b) mup3_progress_pane_t

0xd00e,	// (0x00086292) mup_progress_pane_cp03

0xd01e,	// (0x000862a2) bg_tb_trans_pane_cp04

0xd01e,	// (0x000862a2) mup3_volume_pane

0xd026,	// (0x000862aa) popup_mup3_control_window_g1

0xd026,	// (0x000862aa) mup3_volume_pane_g1

0xd026,	// (0x000862aa) mup3_volume_pane_g2

0xd026,	// (0x000862aa) mup3_volume_pane_g3

0x0002,

0xf6ae,	// (0x00088932) mup3_volume_pane_g

0x9f77,	// (0x000831fb) bg_tb_trans_pane_cp03

0xd02e,	// (0x000862b2) popup_mup3_text_window_g1

0xd036,	// (0x000862ba) popup_mup3_text_window_t1

0xa7fd,	// (0x00083a81) list_calc_item_pane_g1_ParamLimits

0xca3d,	// (0x00085cc1) mup_volume_pane_cp_g1

0x4091,	// (0x0007d315) main_touch_calib_pane_t3

0x40a5,	// (0x0007d329) main_touch_calib_pane_t4

0x40b9,	// (0x0007d33d) main_touch_calib_pane_t5

0x9f81,	// (0x00083205) aid_cell_size_toolbar2

0x9f89,	// (0x0008320d) aid_popup3_width_pane

0x9f95,	// (0x00083219) aid_zoom_text_msg_primary

0x1b59,	// (0x0007addd) vorec_t7

0xa7c1,	// (0x00083a45) bg_calc_paper_pane_g1_ParamLimits

0xa7cd,	// (0x00083a51) bg_calc_paper_pane_g2_ParamLimits

0xa7d9,	// (0x00083a5d) bg_calc_paper_pane_g3_ParamLimits

0xa7e5,	// (0x00083a69) bg_calc_paper_pane_g4_ParamLimits

0xa7f1,	// (0x00083a75) bg_calc_paper_pane_g5_ParamLimits

0x1460,	// (0x0007a6e4) bg_calc_paper_pane_g6_ParamLimits

0x146f,	// (0x0007a6f3) bg_calc_paper_pane_g7_ParamLimits

0x147e,	// (0x0007a702) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0008832f) bg_calc_paper_pane_g_ParamLimits

0x1491,	// (0x0007a715) calc_bg_paper_pane_g9_ParamLimits

0x9fee,	// (0x00083272) image_qvga_pane_ParamLimits

0x9fee,	// (0x00083272) image_qvga_pane

0xa66a,	// (0x000838ee) bg_popup_sub_pane_cp04_ParamLimits

0xb72f,	// (0x000849b3) popup_mup_playback_window_g1_ParamLimits

0xb73b,	// (0x000849bf) popup_mup_playback_window_t1_ParamLimits

0xb750,	// (0x000849d4) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00088688) popup_mup_playback_window_t_ParamLimits

0xa6f3,	// (0x00083977) main_mup2_pane_g3_ParamLimits

0xa6f3,	// (0x00083977) main_mup2_pane_g3

0x1e39,	// (0x0007b0bd) popup_toolbar_window_cp04

0xbad4,	// (0x00084d58) popup_call2_audio_second_window_g3_ParamLimits

0xbad4,	// (0x00084d58) popup_call2_audio_second_window_g3

0xbeec,	// (0x00085170) popup_call2_audio_first_window_g4_ParamLimits

0xbeec,	// (0x00085170) popup_call2_audio_first_window_g4

0xc513,	// (0x00085797) popup_call2_audio_in_window_g4_ParamLimits

0xc513,	// (0x00085797) popup_call2_audio_in_window_g4

0x329f,	// (0x0007c523) aid_area_sk_bg_cut_ParamLimits

0x329f,	// (0x0007c523) aid_area_sk_bg_cut

0xb765,	// (0x000849e9) aid_area_sk_bg_cut_2_ParamLimits

0xb765,	// (0x000849e9) aid_area_sk_bg_cut_2

0x9f77,	// (0x000831fb) aid_placing_details_win

0x9f77,	// (0x000831fb) aid_placing_details_win_2

0xa6e5,	// (0x00083969) camera2_autofocus_pane_g1_ParamLimits

0x124d,	// (0x0007a4d1) popup_fixed_preview_cale_window_ParamLimits

0x124d,	// (0x0007a4d1) popup_fixed_preview_cale_window

0xb449,	// (0x000846cd) navi_slider_pane_g3

0xb452,	// (0x000846d6) navi_slider_pane_g4

0xb45b,	// (0x000846df) navi_slider_pane_g5

0xb449,	// (0x000846cd) navi_slider_pane_g6

0xb464,	// (0x000846e8) navi_slider_pane_g7

0xb592,	// (0x00084816) mup_scale_pane_g3

0xb59b,	// (0x0008481f) mup_scale_pane_g4

0xb5a4,	// (0x00084828) mup_scale_pane_g5

0x3040,	// (0x0007c2c4) mup_scale_pane_g6

0x3049,	// (0x0007c2cd) mup_scale_pane_g7

0xa72b,	// (0x000839af) cams2_slider_pane_g3

0xa72b,	// (0x000839af) cams2_slider_pane_g4

0xa72b,	// (0x000839af) cams2_slider_pane_g5

0xa72b,	// (0x000839af) cams2_slider_pane_g6

0xa72b,	// (0x000839af) cams2_slider_pane_g7

0xa72b,	// (0x000839af) camera2_autofocus_pane_cp_g1

0xc7e3,	// (0x00085a67) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7e3,	// (0x00085a67) bg_popup_preview_window_pane_cp02

0xd044,	// (0x000862c8) list_fp_cale_pane_ParamLimits

0xd044,	// (0x000862c8) list_fp_cale_pane

0xd050,	// (0x000862d4) popup_fixed_preview_cale_window_t1_ParamLimits

0xd050,	// (0x000862d4) popup_fixed_preview_cale_window_t1

0x47bf,	// (0x0007da43) popup_fixed_preview_cale_window_t2_ParamLimits

0x47bf,	// (0x0007da43) popup_fixed_preview_cale_window_t2

0x47d4,	// (0x0007da58) popup_fixed_preview_cale_window_t3_ParamLimits

0x47d4,	// (0x0007da58) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b5,	// (0x00088939) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b5,	// (0x00088939) popup_fixed_preview_cale_window_t

0x47e9,	// (0x0007da6d) list_single_fp_cale_pane_ParamLimits

0x47e9,	// (0x0007da6d) list_single_fp_cale_pane

0xd06e,	// (0x000862f2) list_single_fp_cale_pane_g1_ParamLimits

0xd06e,	// (0x000862f2) list_single_fp_cale_pane_g1

0xd07a,	// (0x000862fe) list_single_fp_cale_pane_g2_ParamLimits

0xd07a,	// (0x000862fe) list_single_fp_cale_pane_g2

0x0002,

0xf6bc,	// (0x00088940) list_single_fp_cale_pane_g_ParamLimits

0xf6bc,	// (0x00088940) list_single_fp_cale_pane_g

0xd093,	// (0x00086317) list_single_fp_cale_pane_t1_ParamLimits

0xd093,	// (0x00086317) list_single_fp_cale_pane_t1

0xd0a5,	// (0x00086329) list_single_fp_cale_pane_t2_ParamLimits

0xd0a5,	// (0x00086329) list_single_fp_cale_pane_t2

0x0001,

0xf6c3,	// (0x00088947) list_single_fp_cale_pane_t_ParamLimits

0xf6c3,	// (0x00088947) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f77,	// (0x000831fb) main_dialer_pane

0x9f77,	// (0x000831fb) aid_cell_size_keypad

0x9f77,	// (0x000831fb) dialer_ne_pane

0x9f77,	// (0x000831fb) grid_dialer_command_1_pane

0x9f77,	// (0x000831fb) grid_dialer_command_2_pane

0x9f77,	// (0x000831fb) grid_dialer_keypad_pane

0x47ff,	// (0x0007da83) bg_popup_call_pane_cp06_ParamLimits

0x47ff,	// (0x0007da83) bg_popup_call_pane_cp06

0x47ff,	// (0x0007da83) dialer_ne_clear_pane_ParamLimits

0x47ff,	// (0x0007da83) dialer_ne_clear_pane

0xa72b,	// (0x000839af) dialer_ne_pane_g1

0xa749,	// (0x000839cd) dialer_ne_pane_t1_ParamLimits

0xa749,	// (0x000839cd) dialer_ne_pane_t1

0x480d,	// (0x0007da91) dialer_ne_pane_t2_ParamLimits

0x480d,	// (0x0007da91) dialer_ne_pane_t2

0x4835,	// (0x0007dab9) dialer_ne_pane_t3_ParamLimits

0x4835,	// (0x0007dab9) dialer_ne_pane_t3

0x0002,

0xf6c8,	// (0x0008894c) dialer_ne_pane_t_ParamLimits

0xf6c8,	// (0x0008894c) dialer_ne_pane_t

0x4835,	// (0x0007dab9) dialer_ne_pane_t3_copy1_ParamLimits

0x4835,	// (0x0007dab9) dialer_ne_pane_t3_copy1

0xd0d8,	// (0x0008635c) cell_dialer_keypad_pane_ParamLimits

0xd0d8,	// (0x0008635c) cell_dialer_keypad_pane

0x9fee,	// (0x00083272) cell_dialer_command_1_pane_ParamLimits

0x9fee,	// (0x00083272) cell_dialer_command_1_pane

0xd0ef,	// (0x00086373) cell_dialer_command_2_pane_ParamLimits

0xd0ef,	// (0x00086373) cell_dialer_command_2_pane

0x9fee,	// (0x00083272) bg_button_pane_cp02_ParamLimits

0x9fee,	// (0x00083272) bg_button_pane_cp02

0xa6e5,	// (0x00083969) cell_dialer_keypad_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_dialer_keypad_pane_g1

0x9fee,	// (0x00083272) bg_button_pane_cp03_ParamLimits

0x9fee,	// (0x00083272) bg_button_pane_cp03

0xa6e5,	// (0x00083969) cell_dialer_command_1_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_dialer_command_1_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp04

0xa72b,	// (0x000839af) cell_dialer_command_2_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp06

0xa72b,	// (0x000839af) dialer_ne_clear_pane_g1

0xb313,	// (0x00084597) navi_pane_g2

0xb341,	// (0x000845c5) navi_pane_g3

0x0002,

0xf30c,	// (0x00088590) navi_pane_g

0xb3d0,	// (0x00084654) navi_pane_mv_g2

0xb3f7,	// (0x0008467b) navi_pane_mv_g5

0x2e23,	// (0x0007c0a7) navi_pane_mv_t1

0xa7a3,	// (0x00083a27) main_clock2_pane

0x9fee,	// (0x00083272) main_clock2_list_pane_ParamLimits

0x9fee,	// (0x00083272) main_clock2_list_pane

0x48cb,	// (0x0007db4f) main_clock2_pane_t1_ParamLimits

0x48cb,	// (0x0007db4f) main_clock2_pane_t1

0x4906,	// (0x0007db8a) main_clock2_pane_t2_ParamLimits

0x4906,	// (0x0007db8a) main_clock2_pane_t2

0x0004,

0xf6d4,	// (0x00088958) main_clock2_pane_t_ParamLimits

0xf6d4,	// (0x00088958) main_clock2_pane_t

0x49a6,	// (0x0007dc2a) popup_clock_analogue_window_cp03_ParamLimits

0x49a6,	// (0x0007dc2a) popup_clock_analogue_window_cp03

0x49cb,	// (0x0007dc4f) popup_clock_digital_window_cp02_ParamLimits

0x49cb,	// (0x0007dc4f) popup_clock_digital_window_cp02

0x4a44,	// (0x0007dcc8) main_clock2_list_single_pane_ParamLimits

0x4a44,	// (0x0007dcc8) main_clock2_list_single_pane

0xa9d8,	// (0x00083c5c) list_highlight_pane_cp05

0xd132,	// (0x000863b6) main_clock2_list_single_pane_t1

0x1e39,	// (0x0007b0bd) popup_toolbar_window_cp04_ParamLimits

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g2

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g3_ParamLimits

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g3

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g4_ParamLimits

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g4

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g5_ParamLimits

0xa6f3,	// (0x00083977) camera2_autofocus_pane_g5

0x0004,

0xf618,	// (0x0008889c) camera2_autofocus_pane_g_ParamLimits

0xf618,	// (0x0008889c) camera2_autofocus_pane_g

0x40ee,	// (0x0007d372) camera2_autofocus_pane_cp_g2

0x40f6,	// (0x0007d37a) camera2_autofocus_pane_cp_g3

0x40fe,	// (0x0007d382) camera2_autofocus_pane_cp_g4

0x4106,	// (0x0007d38a) camera2_autofocus_pane_cp_g5

0x0004,

0xf67e,	// (0x00088902) camera2_autofocus_pane_cp_g

0x9f77,	// (0x000831fb) popup_dialer_spcha_window

0x9f77,	// (0x000831fb) bg_popup_sub_pane_cp07

0x9f77,	// (0x000831fb) list_spcha_pane

0xd140,	// (0x000863c4) list_single_spcha_pane_ParamLimits

0xd140,	// (0x000863c4) list_single_spcha_pane

0x9f77,	// (0x000831fb) list_highlight_pane_cp06

0xaf05,	// (0x00084189) list_single_spcha_pane_t1

0xc2bd,	// (0x00085541) popup_call2_audio_out_window_g4_ParamLimits

0xc2bd,	// (0x00085541) popup_call2_audio_out_window_g4

0x9f77,	// (0x000831fb) main_imed2_pane

0xc809,	// (0x00085a8d) popup_imed_adjust2_window

0x3a8d,	// (0x0007cd11) popup_imed_trans_window_ParamLimits

0x3a8d,	// (0x0007cd11) popup_imed_trans_window

0xcb12,	// (0x00085d96) popup_blid_sat_info2_window_t1

0xcb20,	// (0x00085da4) popup_blid_sat_info2_window_t2

0x000a,

0xf5ad,	// (0x00088831) popup_blid_sat_info2_window_t

0x4af5,	// (0x0007dd79) aid_size_cell_colour_35

0x4b15,	// (0x0007dd99) aid_size_cell_colour_112

0x4b35,	// (0x0007ddb9) aid_size_cell_effect

0xb522,	// (0x000847a6) bg_tb_trans_pane_cp02

0x4b55,	// (0x0007ddd9) heading_imed_pane

0x4b61,	// (0x0007dde5) listscroll_imed_pane

0xd152,	// (0x000863d6) heading_imed_pane_g1

0xd15a,	// (0x000863de) heading_imed_pane_t1

0xd168,	// (0x000863ec) grid_imed_colour_35_pane_ParamLimits

0xd168,	// (0x000863ec) grid_imed_colour_35_pane

0x4b6d,	// (0x0007ddf1) grid_imed_effect_pane

0xd180,	// (0x00086404) list_imed_aspect_pane

0x4b83,	// (0x0007de07) scroll_pane_cp027_ParamLimits

0x4b83,	// (0x0007de07) scroll_pane_cp027

0x4b94,	// (0x0007de18) cell_imed_effect_pane_ParamLimits

0x4b94,	// (0x0007de18) cell_imed_effect_pane

0xd188,	// (0x0008640c) cell_imed_colour_pane_ParamLimits

0xd188,	// (0x0008640c) cell_imed_colour_pane

0xd1ca,	// (0x0008644e) cell_imed_colour_pane_g1_ParamLimits

0xd1ca,	// (0x0008644e) cell_imed_colour_pane_g1

0xd1db,	// (0x0008645f) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1db,	// (0x0008645f) hgihlgiht_grid_pane_cp016

0x4bbb,	// (0x0007de3f) cell_imed_effect_pane_g1

0x4bc3,	// (0x0007de47) grid_highlight_pane_cp017

0xd1ec,	// (0x00086470) list_imed_single_pane_ParamLimits

0xd1ec,	// (0x00086470) list_imed_single_pane

0x9f77,	// (0x000831fb) list_highlight_pane_cp07

0xd201,	// (0x00086485) list_imed_aspect_pane_comp1_t1

0xb522,	// (0x000847a6) bg_tb_trans_pane_cp05

0xd223,	// (0x000864a7) popup_imed_adjust2_window_g1

0xd24a,	// (0x000864ce) popup_imed_adjust2_window_t1

0xd262,	// (0x000864e6) slider_imed_adjust_pane

0xd276,	// (0x000864fa) slider_imed_adjust_pane_g1

0xd286,	// (0x0008650a) slider_imed_adjust_pane_g2

0xd296,	// (0x0008651a) slider_imed_adjust_pane_g3

0xd2a7,	// (0x0008652b) slider_imed_adjust_pane_g4

0x0003,

0xf6f1,	// (0x00088975) slider_imed_adjust_pane_g

0x4bcc,	// (0x0007de50) aid_size_cell_clipart2

0x4bd8,	// (0x0007de5c) grid_imed_clipart_pane

0xb5b5,	// (0x00084839) scroll_pane_cp031

0x4be2,	// (0x0007de66) cell_imed_clipart_pane_ParamLimits

0x4be2,	// (0x0007de66) cell_imed_clipart_pane

0x4c04,	// (0x0007de88) cell_imed_clipart_pane_g1

0x9f77,	// (0x000831fb) grid_highlight_pane_cp014

0x48a7,	// (0x0007db2b) main_clock2_pane_g1_ParamLimits

0x48a7,	// (0x0007db2b) main_clock2_pane_g1

0x49eb,	// (0x0007dc6f) aid_call2_pane_cp10

0x49fd,	// (0x0007dc81) aid_call_pane_cp10

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g1

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g2

0x4a0f,	// (0x0007dc93) popup_clock_analogue_window_cp10_g3

0x4a0f,	// (0x0007dc93) popup_clock_analogue_window_cp10_g4

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6df,	// (0x00088963) popup_clock_analogue_window_cp10_g

0x4a25,	// (0x0007dca9) popup_clock_analogue_window_cp10_t1

0x4a56,	// (0x0007dcda) clock_digital_number_pane_cp10_ParamLimits

0x4a56,	// (0x0007dcda) clock_digital_number_pane_cp10

0x4a6e,	// (0x0007dcf2) clock_digital_number_pane_cp11_ParamLimits

0x4a6e,	// (0x0007dcf2) clock_digital_number_pane_cp11

0x4a86,	// (0x0007dd0a) clock_digital_number_pane_cp12_ParamLimits

0x4a86,	// (0x0007dd0a) clock_digital_number_pane_cp12

0x4aa0,	// (0x0007dd24) clock_digital_number_pane_cp13_ParamLimits

0x4aa0,	// (0x0007dd24) clock_digital_number_pane_cp13

0x4aba,	// (0x0007dd3e) clock_digital_separator_pane_cp10_ParamLimits

0x4aba,	// (0x0007dd3e) clock_digital_separator_pane_cp10

0x4ad4,	// (0x0007dd58) popup_clock_digital_window_cp02_t1_ParamLimits

0x4ad4,	// (0x0007dd58) popup_clock_digital_window_cp02_t1

0xa662,	// (0x000838e6) clock_digital_number_pane_cp10_g1

0xa662,	// (0x000838e6) clock_digital_number_pane_cp10_g2

0x0001,

0xf6fa,	// (0x0008897e) clock_digital_number_pane_cp10_g

0xa662,	// (0x000838e6) clock_digital_separator_pane_cp10_g1

0xa662,	// (0x000838e6) clock_digital_separator_pane_g2_cp10

0xb3ff,	// (0x00084683) navi_pane_vded_g4

0xb408,	// (0x0008468c) navi_pane_vded_g5

0xb411,	// (0x00084695) navi_pane_vded_t1

0x9f77,	// (0x000831fb) main_vded_pane

0x4c0d,	// (0x0007de91) main_vded_pane_g1

0x4c17,	// (0x0007de9b) main_vded_pane_g2

0x4c21,	// (0x0007dea5) main_vded_pane_g3

0x0002,

0xf6ff,	// (0x00088983) main_vded_pane_g

0x4c2b,	// (0x0007deaf) main_vded_pane_t1

0x4c39,	// (0x0007debd) main_vded_pane_t2

0x0001,

0xf706,	// (0x0008898a) main_vded_pane_t

0x4c47,	// (0x0007decb) vded_slider_pane

0x4c4f,	// (0x0007ded3) vded_video_pane

0xd2b8,	// (0x0008653c) vded_video_pane_g1

0x4c57,	// (0x0007dedb) vded_video_pane_g2

0xa72b,	// (0x000839af) vded_video_pane_g3

0x0002,

0xf70b,	// (0x0008898f) vded_video_pane_g

0xd2c2,	// (0x00086546) vded_slider_pane_g1

0xca3d,	// (0x00085cc1) vded_slider_pane_g2

0xd2cb,	// (0x0008654f) vded_slider_pane_g3

0xd2d4,	// (0x00086558) vded_slider_pane_g4

0xd2dd,	// (0x00086561) vded_slider_pane_g5

0x0004,

0xf712,	// (0x00088996) vded_slider_pane_g

0x475d,	// (0x0007d9e1) mup3_rocker_pane_ParamLimits

0x475d,	// (0x0007d9e1) mup3_rocker_pane

0xd026,	// (0x000862aa) mup3_control_keys_pane_g1

0xd2e6,	// (0x0008656a) mup3_control_keys_pane_g2

0xd026,	// (0x000862aa) mup3_control_keys_pane_g3

0xd2ee,	// (0x00086572) mup3_control_keys_pane_g4

0x0003,

0xf71d,	// (0x000889a1) mup3_control_keys_pane_g

0x1284,	// (0x0007a508) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1284,	// (0x0007a508) popup_toolbar2_fixed_window_cp01

0x475d,	// (0x0007d9e1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x475d,	// (0x0007d9e1) popup_toolbar2_fixed_window_cp02

0xbc46,	// (0x00084eca) popup_call2_audio_second_window_t4_ParamLimits

0xbc46,	// (0x00084eca) popup_call2_audio_second_window_t4

0xc182,	// (0x00085406) popup_call2_audio_first_window_t6_ParamLimits

0xc182,	// (0x00085406) popup_call2_audio_first_window_t6

0xc3c0,	// (0x00085644) popup_call2_audio_out_window_t6_ParamLimits

0xc3c0,	// (0x00085644) popup_call2_audio_out_window_t6

0x9f77,	// (0x000831fb) main_vitu_pane

0x9fee,	// (0x00083272) aid_size_cell_itu_ParamLimits

0x9fee,	// (0x00083272) aid_size_cell_itu

0x9fee,	// (0x00083272) bg_popup_window_pane_cp08_ParamLimits

0x9fee,	// (0x00083272) bg_popup_window_pane_cp08

0x9fee,	// (0x00083272) field_vitu_entry_pane_ParamLimits

0x9fee,	// (0x00083272) field_vitu_entry_pane

0x9fee,	// (0x00083272) grid_vitu_function_pane_ParamLimits

0x9fee,	// (0x00083272) grid_vitu_function_pane

0x9fee,	// (0x00083272) grid_vitu_itu_pane_ParamLimits

0x9fee,	// (0x00083272) grid_vitu_itu_pane

0x9fee,	// (0x00083272) cell_vitu_itu_pane_ParamLimits

0x9fee,	// (0x00083272) cell_vitu_itu_pane

0x9fee,	// (0x00083272) cell_vitu_function_pane_ParamLimits

0x9fee,	// (0x00083272) cell_vitu_function_pane

0x9fee,	// (0x00083272) bg_popup_sub_pane_cp08_ParamLimits

0x9fee,	// (0x00083272) bg_popup_sub_pane_cp08

0xa735,	// (0x000839b9) field_vitu_entry_pane_t1_ParamLimits

0xa735,	// (0x000839b9) field_vitu_entry_pane_t1

0xd2f6,	// (0x0008657a) field_vitu_entry_pane_t2_ParamLimits

0xd2f6,	// (0x0008657a) field_vitu_entry_pane_t2

0x0001,

0xf726,	// (0x000889aa) field_vitu_entry_pane_t_ParamLimits

0xf726,	// (0x000889aa) field_vitu_entry_pane_t

0xc964,	// (0x00085be8) bg_button_pane_cp05_ParamLimits

0xc964,	// (0x00085be8) bg_button_pane_cp05

0xd313,	// (0x00086597) cell_vitu_itu_pane_g1

0xb50e,	// (0x00084792) cell_vitu_itu_pane_t1_ParamLimits

0xb50e,	// (0x00084792) cell_vitu_itu_pane_t1

0xb50e,	// (0x00084792) cell_vitu_itu_pane_t2_ParamLimits

0xb50e,	// (0x00084792) cell_vitu_itu_pane_t2

0x0002,

0xf72b,	// (0x000889af) cell_vitu_itu_pane_t_ParamLimits

0xf72b,	// (0x000889af) cell_vitu_itu_pane_t

0x9f77,	// (0x000831fb) bg_button_pane_cp07

0xa72b,	// (0x000839af) cell_vitu_function_pane_g1

0xa723,	// (0x000839a7) main_calc_pane_g1

0x10ac,	// (0x0007a330) aid_visual_content_pane

0x9f77,	// (0x000831fb) main_vradio_pane

0xa6e5,	// (0x00083969) main_vradio_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) main_vradio_pane_g1

0xa6f3,	// (0x00083977) main_vradio_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) main_vradio_pane_g2

0x0001,

0xf732,	// (0x000889b6) main_vradio_pane_g_ParamLimits

0xf732,	// (0x000889b6) main_vradio_pane_g

0xa735,	// (0x000839b9) main_vradio_pane_t1_ParamLimits

0xa735,	// (0x000839b9) main_vradio_pane_t1

0xa735,	// (0x000839b9) main_vradio_pane_t2_ParamLimits

0xa735,	// (0x000839b9) main_vradio_pane_t2

0xa749,	// (0x000839cd) main_vradio_pane_t3_ParamLimits

0xa749,	// (0x000839cd) main_vradio_pane_t3

0x0002,

0xf737,	// (0x000889bb) main_vradio_pane_t_ParamLimits

0xf737,	// (0x000889bb) main_vradio_pane_t

0x9fee,	// (0x00083272) vradio_rocker_control_pane_ParamLimits

0x9fee,	// (0x00083272) vradio_rocker_control_pane

0x9fee,	// (0x00083272) vradio_station_info_pane_ParamLimits

0x9fee,	// (0x00083272) vradio_station_info_pane

0x9fee,	// (0x00083272) vradio_frequency_info_pane_ParamLimits

0x9fee,	// (0x00083272) vradio_frequency_info_pane

0xa72b,	// (0x000839af) vradio_station_info_pane_g1

0xb50e,	// (0x00084792) vradio_station_info_pane_t1_ParamLimits

0xb50e,	// (0x00084792) vradio_station_info_pane_t1

0xa749,	// (0x000839cd) vradio_station_info_pane_t2_ParamLimits

0xa749,	// (0x000839cd) vradio_station_info_pane_t2

0x0001,

0xf73e,	// (0x000889c2) vradio_station_info_pane_t_ParamLimits

0xf73e,	// (0x000889c2) vradio_station_info_pane_t

0x9f77,	// (0x000831fb) vradio_tuning_pane

0x4c60,	// (0x0007dee4) vradio_rocker_control_pane_g1

0xd32f,	// (0x000865b3) vradio_rocker_control_pane_g2

0x4c6a,	// (0x0007deee) vradio_rocker_control_pane_g3

0x4c74,	// (0x0007def8) vradio_rocker_control_pane_g4

0x4c7e,	// (0x0007df02) vradio_rocker_control_pane_g5

0x0004,

0xf743,	// (0x000889c7) vradio_rocker_control_pane_g

0xa72b,	// (0x000839af) vradio_frequency_info_pane_g1

0xa735,	// (0x000839b9) vradio_frequency_info_pane_t1_ParamLimits

0xa735,	// (0x000839b9) vradio_frequency_info_pane_t1

0x4c88,	// (0x0007df0c) vradio_tuning_pane_g1

0x4c93,	// (0x0007df17) vradio_tuning_pane_t1

0x9fad,	// (0x00083231) area_side_right_pane_ParamLimits

0x9fad,	// (0x00083231) area_side_right_pane

0xc7a2,	// (0x00085a26) status_small_pane_g1

0xc7aa,	// (0x00085a2e) status_small_pane_g2

0xc7b3,	// (0x00085a37) status_small_pane_g3

0xc7bc,	// (0x00085a40) status_small_pane_g4

0x0003,

0xf50f,	// (0x00088793) status_small_pane_g

0xc7c5,	// (0x00085a49) status_small_pane_t1

0x9f77,	// (0x000831fb) main_video3_pane

0x9f77,	// (0x000831fb) cams_zoom_vslider_pane

0xd337,	// (0x000865bb) image3_wide_pane_ParamLimits

0xd337,	// (0x000865bb) image3_wide_pane

0x9f77,	// (0x000831fb) image3_wide_small_pane

0xd351,	// (0x000865d5) main_video3_pane_g1_ParamLimits

0xd351,	// (0x000865d5) main_video3_pane_g1

0xd351,	// (0x000865d5) main_video3_pane_g2_ParamLimits

0xd351,	// (0x000865d5) main_video3_pane_g2

0x0001,

0xf74e,	// (0x000889d2) main_video3_pane_g_ParamLimits

0xf74e,	// (0x000889d2) main_video3_pane_g

0xd36f,	// (0x000865f3) main_video3_pane_t1_ParamLimits

0xd36f,	// (0x000865f3) main_video3_pane_t1

0xd36f,	// (0x000865f3) main_video3_pane_t2_ParamLimits

0xd36f,	// (0x000865f3) main_video3_pane_t2

0xd36f,	// (0x000865f3) main_video3_pane_t3_ParamLimits

0xd36f,	// (0x000865f3) main_video3_pane_t3

0x0002,

0xf753,	// (0x000889d7) main_video3_pane_t_ParamLimits

0xf753,	// (0x000889d7) main_video3_pane_t

0xa72b,	// (0x000839af) cams_zoom_vslider_pane_g1

0xa72b,	// (0x000839af) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00088310) cams_zoom_vslider_pane_g

0x9f77,	// (0x000831fb) small_slider_vertical_pane

0xa72b,	// (0x000839af) small_slider_vertical_pane_g1

0xa72b,	// (0x000839af) small_slider_vertical_pane_g2

0xd396,	// (0x0008661a) small_slider_vertical_pane_g3

0x0002,

0xf75a,	// (0x000889de) small_slider_vertical_pane_g

0x9f77,	// (0x000831fb) main_hwr_training_pane

0xd39f,	// (0x00086623) hwr_training_instruct_pane_ParamLimits

0xd39f,	// (0x00086623) hwr_training_instruct_pane

0x4ca2,	// (0x0007df26) hwr_training_navi_pane_ParamLimits

0x4ca2,	// (0x0007df26) hwr_training_navi_pane

0x4cc1,	// (0x0007df45) hwr_training_write_pane_ParamLimits

0x4cc1,	// (0x0007df45) hwr_training_write_pane

0x9f77,	// (0x000831fb) bg_frame_shadow_pane

0xd3d6,	// (0x0008665a) hwr_training_write_pane_g1

0xd3de,	// (0x00086662) hwr_training_write_pane_g2

0xd3e6,	// (0x0008666a) hwr_training_write_pane_g3

0xd3ee,	// (0x00086672) hwr_training_write_pane_g4

0xd3f6,	// (0x0008667a) hwr_training_write_pane_g5

0xd3fe,	// (0x00086682) hwr_training_write_pane_g6

0xd406,	// (0x0008668a) hwr_training_write_pane_g7

0x0006,

0xf761,	// (0x000889e5) hwr_training_write_pane_g

0xe405,	// (0x00087689) hwr_training_navi_pane_g1_ParamLimits

0xe405,	// (0x00087689) hwr_training_navi_pane_g1

0xe417,	// (0x0008769b) hwr_training_navi_pane_g2_ParamLimits

0xe417,	// (0x0008769b) hwr_training_navi_pane_g2

0xe429,	// (0x000876ad) hwr_training_navi_pane_g3_ParamLimits

0xe429,	// (0x000876ad) hwr_training_navi_pane_g3

0xe439,	// (0x000876bd) hwr_training_navi_pane_g4_ParamLimits

0xe439,	// (0x000876bd) hwr_training_navi_pane_g4

0x0004,

0xf770,	// (0x000889f4) hwr_training_navi_pane_g_ParamLimits

0xf770,	// (0x000889f4) hwr_training_navi_pane_g

0xe446,	// (0x000876ca) hwr_training_navi_pane_t1

0x4d0b,	// (0x0007df8f) list_single_hwr_training_instruct_pane_ParamLimits

0x4d0b,	// (0x0007df8f) list_single_hwr_training_instruct_pane

0xd40e,	// (0x00086692) list_single_hwr_training_instruct_pane_t1

0xcc13,	// (0x00085e97) bg_frame_shadow_pane_g1

0xd41d,	// (0x000866a1) bg_frame_shadow_pane_g2

0xd425,	// (0x000866a9) bg_frame_shadow_pane_g3

0xd42d,	// (0x000866b1) bg_frame_shadow_pane_g4

0xd435,	// (0x000866b9) bg_frame_shadow_pane_g5

0xd43d,	// (0x000866c1) bg_frame_shadow_pane_g6

0xd445,	// (0x000866c9) bg_frame_shadow_pane_g7

0xa87f,	// (0x00083b03) bg_frame_shadow_pane_g8

0x0007,

0xf77b,	// (0x000889ff) bg_frame_shadow_pane_g

0x9f77,	// (0x000831fb) main_video_tele_dialer_pane

0x4d21,	// (0x0007dfa5) aid_size_cell_video_keypad_ParamLimits

0x4d21,	// (0x0007dfa5) aid_size_cell_video_keypad

0x4d3b,	// (0x0007dfbf) grid_video_dialer_keypad_pane_ParamLimits

0x4d3b,	// (0x0007dfbf) grid_video_dialer_keypad_pane

0x4d89,	// (0x0007e00d) video_down_pane_cp_ParamLimits

0x4d89,	// (0x0007e00d) video_down_pane_cp

0x4dbb,	// (0x0007e03f) cell_video_dialer_keypad_pane_ParamLimits

0x4dbb,	// (0x0007e03f) cell_video_dialer_keypad_pane

0xd44d,	// (0x000866d1) bg_button_pane_cp08_ParamLimits

0xd44d,	// (0x000866d1) bg_button_pane_cp08

0x4ddd,	// (0x0007e061) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4ddd,	// (0x0007e061) cell_video_dialer_keypad_pane_g1

0x475d,	// (0x0007d9e1) mup3_rocker2_pane_ParamLimits

0x475d,	// (0x0007d9e1) mup3_rocker2_pane

0xa72b,	// (0x000839af) mup3_rocker2_pane_g1

0x397c,	// (0x0007cc00) main_dialer2_pane

0x9f77,	// (0x000831fb) main_mp4_pane

0xe472,	// (0x000876f6) main_mp4_pane_g1_ParamLimits

0xe472,	// (0x000876f6) main_mp4_pane_g1

0xe472,	// (0x000876f6) main_mp4_pane_g2_ParamLimits

0xe472,	// (0x000876f6) main_mp4_pane_g2

0x4e17,	// (0x0007e09b) main_mp4_pane_g3_ParamLimits

0x4e17,	// (0x0007e09b) main_mp4_pane_g3

0xe490,	// (0x00087714) main_mp4_pane_g4_ParamLimits

0xe490,	// (0x00087714) main_mp4_pane_g4

0xe4b8,	// (0x0008773c) main_mp4_pane_g5_ParamLimits

0xe4b8,	// (0x0008773c) main_mp4_pane_g5

0x0007,

0xf79b,	// (0x00088a1f) main_mp4_pane_g_ParamLimits

0xf79b,	// (0x00088a1f) main_mp4_pane_g

0xe520,	// (0x000877a4) main_mp4_pane_t1_ParamLimits

0xe520,	// (0x000877a4) main_mp4_pane_t1

0xe582,	// (0x00087806) main_mp4_pane_t2_ParamLimits

0xe582,	// (0x00087806) main_mp4_pane_t2

0xe5e6,	// (0x0008786a) main_mp4_pane_t3_ParamLimits

0xe5e6,	// (0x0008786a) main_mp4_pane_t3

0xe644,	// (0x000878c8) main_mp4_pane_t4_ParamLimits

0xe644,	// (0x000878c8) main_mp4_pane_t4

0x0003,

0xf7ac,	// (0x00088a30) main_mp4_pane_t_ParamLimits

0xf7ac,	// (0x00088a30) main_mp4_pane_t

0xe6a2,	// (0x00087926) mp4_progress_pane_ParamLimits

0xe6a2,	// (0x00087926) mp4_progress_pane

0xe924,	// (0x00087ba8) mp4_rocker_pane_ParamLimits

0xe924,	// (0x00087ba8) mp4_rocker_pane

0xe938,	// (0x00087bbc) mp4_progress_pane_t1

0xe957,	// (0x00087bdb) mp4_progress_pane_t2

0x0001,

0xf7b5,	// (0x00088a39) mp4_progress_pane_t

0xe976,	// (0x00087bfa) mup_progress_pane_cp04

0xa72b,	// (0x000839af) mp4_rocker_pane_g1

0x9fee,	// (0x00083272) aid_cell_size_keypad2_ParamLimits

0x9fee,	// (0x00083272) aid_cell_size_keypad2

0x9fee,	// (0x00083272) dialer2_ne_pane_ParamLimits

0x9fee,	// (0x00083272) dialer2_ne_pane

0x9fee,	// (0x00083272) grid_dialer2_keypad_pane_ParamLimits

0x9fee,	// (0x00083272) grid_dialer2_keypad_pane

0xc964,	// (0x00085be8) bg_popup_call_pane_cp07_ParamLimits

0xc964,	// (0x00085be8) bg_popup_call_pane_cp07

0x4e47,	// (0x0007e0cb) dialer2_ne_pane_t1_ParamLimits

0x4e47,	// (0x0007e0cb) dialer2_ne_pane_t1

0x4e86,	// (0x0007e10a) cell_dialer2_keypad_pane_ParamLimits

0x4e86,	// (0x0007e10a) cell_dialer2_keypad_pane

0xc964,	// (0x00085be8) bg_button_pane_pane_cp04_ParamLimits

0xc964,	// (0x00085be8) bg_button_pane_pane_cp04

0xa6e5,	// (0x00083969) cell_dialer2_keypad_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) cell_dialer2_keypad_pane_g1

0x1d0d,	// (0x0007af91) aid_placing_vt_set_content_ParamLimits

0x1d0d,	// (0x0007af91) aid_placing_vt_set_content

0x1d35,	// (0x0007afb9) aid_placing_vt_set_title_ParamLimits

0x1d35,	// (0x0007afb9) aid_placing_vt_set_title

0x9f77,	// (0x000831fb) main_image3_pane

0x4efb,	// (0x0007e17f) area_side_right_pane_cp01_ParamLimits

0x4efb,	// (0x0007e17f) area_side_right_pane_cp01

0x4f12,	// (0x0007e196) main_image3_pane_g1_ParamLimits

0x4f12,	// (0x0007e196) main_image3_pane_g1

0x4f20,	// (0x0007e1a4) main_image3_pane_g2_ParamLimits

0x4f20,	// (0x0007e1a4) main_image3_pane_g2

0x4f48,	// (0x0007e1cc) main_image3_pane_g3_ParamLimits

0x4f48,	// (0x0007e1cc) main_image3_pane_g3

0x4f72,	// (0x0007e1f6) main_image3_pane_g4_ParamLimits

0x4f72,	// (0x0007e1f6) main_image3_pane_g4

0x0003,

0xf7c4,	// (0x00088a48) main_image3_pane_g_ParamLimits

0xf7c4,	// (0x00088a48) main_image3_pane_g

0x4f9c,	// (0x0007e220) main_image3_pane_t1_ParamLimits

0x4f9c,	// (0x0007e220) main_image3_pane_t1

0x4ff4,	// (0x0007e278) main_image3_pane_t2_ParamLimits

0x4ff4,	// (0x0007e278) main_image3_pane_t2

0x5046,	// (0x0007e2ca) main_image3_pane_t3_ParamLimits

0x5046,	// (0x0007e2ca) main_image3_pane_t3

0x0003,

0xf7cd,	// (0x00088a51) main_image3_pane_t_ParamLimits

0xf7cd,	// (0x00088a51) main_image3_pane_t

0x9fee,	// (0x00083272) grid_sctrl_middle_pane_cp01_ParamLimits

0x9fee,	// (0x00083272) grid_sctrl_middle_pane_cp01

0x50ce,	// (0x0007e352) cell_sctrl_middle_pane_cp01_ParamLimits

0x50ce,	// (0x0007e352) cell_sctrl_middle_pane_cp01

0x50eb,	// (0x0007e36f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x50eb,	// (0x0007e36f) cell_sctrl_middle_pane_cp01_g1

0x9f77,	// (0x000831fb) main_call4_pane

0x5101,	// (0x0007e385) aid_size_button_call4_ParamLimits

0x5101,	// (0x0007e385) aid_size_button_call4

0x5134,	// (0x0007e3b8) call4_windows_pane_ParamLimits

0x5134,	// (0x0007e3b8) call4_windows_pane

0x5153,	// (0x0007e3d7) grid_call4_button_pane_ParamLimits

0x5153,	// (0x0007e3d7) grid_call4_button_pane

0x5186,	// (0x0007e40a) call4_windows_conf_pane

0x519b,	// (0x0007e41f) popup_call4_audio_first_window_ParamLimits

0x519b,	// (0x0007e41f) popup_call4_audio_first_window

0x51eb,	// (0x0007e46f) popup_call4_audio_second_window_ParamLimits

0x51eb,	// (0x0007e46f) popup_call4_audio_second_window

0x5202,	// (0x0007e486) popup_call4_audio_wait_window_ParamLimits

0x5202,	// (0x0007e486) popup_call4_audio_wait_window

0x5210,	// (0x0007e494) cell_call4_button_pane_ParamLimits

0x5210,	// (0x0007e494) cell_call4_button_pane

0x5235,	// (0x0007e4b9) bg_button_pane_cp09_ParamLimits

0x5235,	// (0x0007e4b9) bg_button_pane_cp09

0x5241,	// (0x0007e4c5) cell_call4_button_pane_g1_ParamLimits

0x5241,	// (0x0007e4c5) cell_call4_button_pane_g1

0x5267,	// (0x0007e4eb) cell_call4_button_pane_t1_ParamLimits

0x5267,	// (0x0007e4eb) cell_call4_button_pane_t1

0xe9bf,	// (0x00087c43) popup_call4_audio_conf_window_ParamLimits

0xe9bf,	// (0x00087c43) popup_call4_audio_conf_window

0x4781,	// (0x0007da05) mup3_progress_pane_t1_ParamLimits

0x47a0,	// (0x0007da24) mup3_progress_pane_t2_ParamLimits

0xcff1,	// (0x00086275) mup3_progress_pane_t3_ParamLimits

0xf6a7,	// (0x0008892b) mup3_progress_pane_t_ParamLimits

0xd00e,	// (0x00086292) mup_progress_pane_cp03_ParamLimits

0xd026,	// (0x000862aa) mup3_control_keys_pane_g4_copy1

0xe924,	// (0x00087ba8) mp4_rocker2_pane_ParamLimits

0xe924,	// (0x00087ba8) mp4_rocker2_pane

0xd026,	// (0x000862aa) mp4_rocker2_pane_g1

0xd026,	// (0x000862aa) mp4_rocker2_pane_g2

0xd026,	// (0x000862aa) mp4_rocker2_pane_g3

0xd026,	// (0x000862aa) mp4_rocker2_pane_g4

0xd026,	// (0x000862aa) mp4_rocker2_pane_g5

0x0004,

0xf7d6,	// (0x00088a5a) mp4_rocker2_pane_g

0x9f77,	// (0x000831fb) main_camera4_pane

0x9f77,	// (0x000831fb) main_video4_pane

0x4d57,	// (0x0007dfdb) main_video_tele_dialer_pane_t1_ParamLimits

0x4d57,	// (0x0007dfdb) main_video_tele_dialer_pane_t1

0x4d70,	// (0x0007dff4) main_video_tele_dialer_pane_t2_ParamLimits

0x4d70,	// (0x0007dff4) main_video_tele_dialer_pane_t2

0x0001,

0xf78c,	// (0x00088a10) main_video_tele_dialer_pane_t_ParamLimits

0xf78c,	// (0x00088a10) main_video_tele_dialer_pane_t

0x52a9,	// (0x0007e52d) cam4_autofocus_pane_ParamLimits

0x52a9,	// (0x0007e52d) cam4_autofocus_pane

0x52bf,	// (0x0007e543) cam4_image_uncrop_pane_ParamLimits

0x52bf,	// (0x0007e543) cam4_image_uncrop_pane

0x52d9,	// (0x0007e55d) cam4_indicators_pane_ParamLimits

0x52d9,	// (0x0007e55d) cam4_indicators_pane

0x5304,	// (0x0007e588) main_camera4_pane_g1_ParamLimits

0x5304,	// (0x0007e588) main_camera4_pane_g1

0x5316,	// (0x0007e59a) main_camera4_pane_g2_ParamLimits

0x5316,	// (0x0007e59a) main_camera4_pane_g2

0x5329,	// (0x0007e5ad) main_camera4_pane_g3_ParamLimits

0x5329,	// (0x0007e5ad) main_camera4_pane_g3

0x533c,	// (0x0007e5c0) main_camera4_pane_g4_ParamLimits

0x533c,	// (0x0007e5c0) main_camera4_pane_g4

0x534f,	// (0x0007e5d3) main_camera4_pane_g5_ParamLimits

0x534f,	// (0x0007e5d3) main_camera4_pane_g5

0x0005,

0xf7e1,	// (0x00088a65) main_camera4_pane_g_ParamLimits

0xf7e1,	// (0x00088a65) main_camera4_pane_g

0x5373,	// (0x0007e5f7) main_camera4_pane_t1_ParamLimits

0x5373,	// (0x0007e5f7) main_camera4_pane_t1

0xa6e5,	// (0x00083969) bg_tb_trans_pane_cp06

0xe766,	// (0x000879ea) cam4_indicators_pane_g1

0xe777,	// (0x000879fb) cam4_indicators_pane_g2

0x0002,

0xf7fc,	// (0x00088a80) cam4_indicators_pane_g

0xe78f,	// (0x00087a13) cam4_indicators_pane_t1

0x53e9,	// (0x0007e66d) main_video4_pane_g1_ParamLimits

0x53e9,	// (0x0007e66d) main_video4_pane_g1

0x53f8,	// (0x0007e67c) main_video4_pane_g2_ParamLimits

0x53f8,	// (0x0007e67c) main_video4_pane_g2

0x5407,	// (0x0007e68b) main_video4_pane_g3_ParamLimits

0x5407,	// (0x0007e68b) main_video4_pane_g3

0x5416,	// (0x0007e69a) main_video4_pane_g4_ParamLimits

0x5416,	// (0x0007e69a) main_video4_pane_g4

0x0004,

0xf803,	// (0x00088a87) main_video4_pane_g_ParamLimits

0xf803,	// (0x00088a87) main_video4_pane_g

0x5434,	// (0x0007e6b8) vid4_indicators_pane_ParamLimits

0x5434,	// (0x0007e6b8) vid4_indicators_pane

0x5462,	// (0x0007e6e6) video4_image_uncrop_cif_pane_ParamLimits

0x5462,	// (0x0007e6e6) video4_image_uncrop_cif_pane

0x547c,	// (0x0007e700) video4_image_uncrop_nhd_pane_ParamLimits

0x547c,	// (0x0007e700) video4_image_uncrop_nhd_pane

0x52bf,	// (0x0007e543) video4_image_uncrop_vga_pane_ParamLimits

0x52bf,	// (0x0007e543) video4_image_uncrop_vga_pane

0x9fee,	// (0x00083272) bg_tb_trans_pane_cp07

0xe7b9,	// (0x00087a3d) vid4_indicators_pane_g1

0xe7cd,	// (0x00087a51) vid4_indicators_pane_g2

0xe7e1,	// (0x00087a65) vid4_indicators_pane_g3

0x0004,

0xf80e,	// (0x00088a92) vid4_indicators_pane_g

0xe80e,	// (0x00087a92) vid4_indicators_pane_t1

0x5490,	// (0x0007e714) cam4_autofocus_pane_g1

0x5498,	// (0x0007e71c) cam4_autofocus_pane_g2

0x54a0,	// (0x0007e724) cam4_autofocus_pane_g3

0x0002,

0xf819,	// (0x00088a9d) cam4_autofocus_pane_g

0x54a8,	// (0x0007e72c) cam4_autofocus_pane_g3_copy1

0x4d9f,	// (0x0007e023) video_down_pane_cp_t1

0x4dad,	// (0x0007e031) video_down_pane_cp_t2

0x0001,

0xf791,	// (0x00088a15) video_down_pane_cp_t

0x9fee,	// (0x00083272) popup_vitu2_window_ParamLimits

0x9fee,	// (0x00083272) popup_vitu2_window

0x54b0,	// (0x0007e734) aid_size_cell2_itu2_ParamLimits

0x54b0,	// (0x0007e734) aid_size_cell2_itu2

0x54d6,	// (0x0007e75a) aid_size_cell_itu2_ParamLimits

0x54d6,	// (0x0007e75a) aid_size_cell_itu2

0x47ff,	// (0x0007da83) bg_popup_window_pane_cp09_ParamLimits

0x47ff,	// (0x0007da83) bg_popup_window_pane_cp09

0x5532,	// (0x0007e7b6) field_vitu2_entry_pane_ParamLimits

0x5532,	// (0x0007e7b6) field_vitu2_entry_pane

0x5558,	// (0x0007e7dc) grid_vitu2_function_pane_ParamLimits

0x5558,	// (0x0007e7dc) grid_vitu2_function_pane

0x55a5,	// (0x0007e829) grid_vitu2_itu_pane_ParamLimits

0x55a5,	// (0x0007e829) grid_vitu2_itu_pane

0x5637,	// (0x0007e8bb) cell_vitu2_itu_pane_ParamLimits

0x5637,	// (0x0007e8bb) cell_vitu2_itu_pane

0x5663,	// (0x0007e8e7) cell_vitu2_function_pane_ParamLimits

0x5663,	// (0x0007e8e7) cell_vitu2_function_pane

0xe9d3,	// (0x00087c57) bg_popup_call_pane_cp08_ParamLimits

0xe9d3,	// (0x00087c57) bg_popup_call_pane_cp08

0xe9ea,	// (0x00087c6e) field_vitu2_entry_pane_g1

0xe9f6,	// (0x00087c7a) field_vitu2_entry_pane_g2

0x0002,

0xf820,	// (0x00088aa4) field_vitu2_entry_pane_g

0x56a2,	// (0x0007e926) field_vitu2_entry_pane_t1_ParamLimits

0x56a2,	// (0x0007e926) field_vitu2_entry_pane_t1

0xea02,	// (0x00087c86) field_vitu2_entry_pane_t2_ParamLimits

0xea02,	// (0x00087c86) field_vitu2_entry_pane_t2

0x0001,

0xf827,	// (0x00088aab) field_vitu2_entry_pane_t_ParamLimits

0xf827,	// (0x00088aab) field_vitu2_entry_pane_t

0x56d2,	// (0x0007e956) bg_button_pane_cp010_ParamLimits

0x56d2,	// (0x0007e956) bg_button_pane_cp010

0x56e0,	// (0x0007e964) cell_vitu2_itu_pane_g1

0x5706,	// (0x0007e98a) cell_vitu2_itu_pane_t1_ParamLimits

0x5706,	// (0x0007e98a) cell_vitu2_itu_pane_t1

0x5764,	// (0x0007e9e8) cell_vitu2_itu_pane_t2_ParamLimits

0x5764,	// (0x0007e9e8) cell_vitu2_itu_pane_t2

0x0002,

0xf831,	// (0x00088ab5) cell_vitu2_itu_pane_t_ParamLimits

0xf831,	// (0x00088ab5) cell_vitu2_itu_pane_t

0x9fee,	// (0x00083272) bg_button_pane_cp011

0x5850,	// (0x0007ead4) cell_vitu2_function_pane_g1

0x9f77,	// (0x000831fb) main_myfav_hc_pane

0x5096,	// (0x0007e31a) popup_image3_note_pane_ParamLimits

0x5096,	// (0x0007e31a) popup_image3_note_pane

0x50b2,	// (0x0007e336) popup_image3_tool_bar_pane_ParamLimits

0x50b2,	// (0x0007e336) popup_image3_tool_bar_pane

0x57f2,	// (0x0007ea76) cell_vitu2_itu_pane_t3_ParamLimits

0x57f2,	// (0x0007ea76) cell_vitu2_itu_pane_t3

0x9f77,	// (0x000831fb) bg_popup_trans_pane

0xea27,	// (0x00087cab) grid_image3_tool_bar_pane

0xea31,	// (0x00087cb5) bg_popup_trans_pane_g1

0xabfb,	// (0x00083e7f) bg_popup_trans_pane_g2

0xea39,	// (0x00087cbd) bg_popup_trans_pane_g3

0xea41,	// (0x00087cc5) bg_popup_trans_pane_g4

0xea49,	// (0x00087ccd) bg_popup_trans_pane_g5

0xea51,	// (0x00087cd5) bg_popup_trans_pane_g6

0xea59,	// (0x00087cdd) bg_popup_trans_pane_g7

0xea61,	// (0x00087ce5) bg_popup_trans_pane_g8

0xabdb,	// (0x00083e5f) bg_popup_trans_pane_g9

0x0008,

0xf838,	// (0x00088abc) bg_popup_trans_pane_g

0xea69,	// (0x00087ced) cell_image3_tool_bar_pane_ParamLimits

0xea69,	// (0x00087ced) cell_image3_tool_bar_pane

0xa72b,	// (0x000839af) cell_image3_tool_bar_pane_g1

0x9f77,	// (0x000831fb) bg_popup_trans_pane_cp1

0xea7d,	// (0x00087d01) popup_image3_note_pane_t1

0xea8b,	// (0x00087d0f) popup_image3_note_pane_t2

0xea99,	// (0x00087d1d) popup_image3_note_pane_t3

0x0002,

0xf84b,	// (0x00088acf) popup_image3_note_pane_t

0xeaa7,	// (0x00087d2b) popup_image3_note_pane_t3_copy1

0x5863,	// (0x0007eae7) bg_myfav_hc_instruction_pane_ParamLimits

0x5863,	// (0x0007eae7) bg_myfav_hc_instruction_pane

0x5877,	// (0x0007eafb) cell_myfav_contact_pane_ParamLimits

0x5877,	// (0x0007eafb) cell_myfav_contact_pane

0x5895,	// (0x0007eb19) cell_myfav_contact_pane_cp1_ParamLimits

0x5895,	// (0x0007eb19) cell_myfav_contact_pane_cp1

0x58ad,	// (0x0007eb31) cell_myfav_contact_pane_cp2_ParamLimits

0x58ad,	// (0x0007eb31) cell_myfav_contact_pane_cp2

0x58c5,	// (0x0007eb49) cell_myfav_contact_pane_cp3_ParamLimits

0x58c5,	// (0x0007eb49) cell_myfav_contact_pane_cp3

0x58dc,	// (0x0007eb60) cell_myfav_contact_pane_cp4_ParamLimits

0x58dc,	// (0x0007eb60) cell_myfav_contact_pane_cp4

0x58f4,	// (0x0007eb78) cell_myfav_contact_pane_cp5_ParamLimits

0x58f4,	// (0x0007eb78) cell_myfav_contact_pane_cp5

0x5908,	// (0x0007eb8c) cell_myfav_contact_pane_cp6_ParamLimits

0x5908,	// (0x0007eb8c) cell_myfav_contact_pane_cp6

0x591e,	// (0x0007eba2) cell_myfav_contact_pane_cp7_ParamLimits

0x591e,	// (0x0007eba2) cell_myfav_contact_pane_cp7

0xeab5,	// (0x00087d39) listscroll_gen_pane_cp05

0x5938,	// (0x0007ebbc) main_myfav_hc_pane_g1_ParamLimits

0x5938,	// (0x0007ebbc) main_myfav_hc_pane_g1

0x5952,	// (0x0007ebd6) main_myfav_hc_pane_g2_ParamLimits

0x5952,	// (0x0007ebd6) main_myfav_hc_pane_g2

0x0002,

0xf852,	// (0x00088ad6) main_myfav_hc_pane_g_ParamLimits

0xf852,	// (0x00088ad6) main_myfav_hc_pane_g

0x5984,	// (0x0007ec08) main_myfav_hc_pane_t1_ParamLimits

0x5984,	// (0x0007ec08) main_myfav_hc_pane_t1

0xeabe,	// (0x00087d42) main_myfav_hc_pane_t2_ParamLimits

0xeabe,	// (0x00087d42) main_myfav_hc_pane_t2

0xead0,	// (0x00087d54) main_myfav_hc_pane_t3_ParamLimits

0xead0,	// (0x00087d54) main_myfav_hc_pane_t3

0x599b,	// (0x0007ec1f) main_myfav_hc_pane_t4_ParamLimits

0x599b,	// (0x0007ec1f) main_myfav_hc_pane_t4

0x0004,

0xf859,	// (0x00088add) main_myfav_hc_pane_t_ParamLimits

0xf859,	// (0x00088add) main_myfav_hc_pane_t

0xa72b,	// (0x000839af) bg_myfav_hc_instruction_pane_g1

0xeae2,	// (0x00087d66) cell_myfav_contact_pane_g1_ParamLimits

0xeae2,	// (0x00087d66) cell_myfav_contact_pane_g1

0xeae2,	// (0x00087d66) cell_myfav_contact_pane_g2_ParamLimits

0xeae2,	// (0x00087d66) cell_myfav_contact_pane_g2

0xeaee,	// (0x00087d72) cell_myfav_contact_pane_g3_ParamLimits

0xeaee,	// (0x00087d72) cell_myfav_contact_pane_g3

0xa6f3,	// (0x00083977) cell_myfav_contact_pane_g4_ParamLimits

0xa6f3,	// (0x00083977) cell_myfav_contact_pane_g4

0xeafb,	// (0x00087d7f) cell_myfav_contact_pane_g5_ParamLimits

0xeafb,	// (0x00087d7f) cell_myfav_contact_pane_g5

0x0004,

0xf864,	// (0x00088ae8) cell_myfav_contact_pane_g_ParamLimits

0xf864,	// (0x00088ae8) cell_myfav_contact_pane_g

0x596c,	// (0x0007ebf0) main_myfav_hc_pane_g3_ParamLimits

0x596c,	// (0x0007ebf0) main_myfav_hc_pane_g3

0x11e7,	// (0x0007a46b) popup_adpt_find_window

0x59c3,	// (0x0007ec47) afind_page_pane_ParamLimits

0x59c3,	// (0x0007ec47) afind_page_pane

0x59d9,	// (0x0007ec5d) aid_size_cell_afind_ParamLimits

0x59d9,	// (0x0007ec5d) aid_size_cell_afind

0x59f7,	// (0x0007ec7b) bg_popup_sub_pane_cp09_ParamLimits

0x59f7,	// (0x0007ec7b) bg_popup_sub_pane_cp09

0x5a09,	// (0x0007ec8d) find_pane_cp01_ParamLimits

0x5a09,	// (0x0007ec8d) find_pane_cp01

0xeb07,	// (0x00087d8b) grid_afind_control_pane_ParamLimits

0xeb07,	// (0x00087d8b) grid_afind_control_pane

0x5a1d,	// (0x0007eca1) grid_afind_pane_ParamLimits

0x5a1d,	// (0x0007eca1) grid_afind_pane

0x5a3f,	// (0x0007ecc3) cell_afind_pane_ParamLimits

0x5a3f,	// (0x0007ecc3) cell_afind_pane

0xa72b,	// (0x000839af) afind_page_pane_g1

0x5aa6,	// (0x0007ed2a) afind_page_pane_g2

0x5aae,	// (0x0007ed32) afind_page_pane_g3

0x0002,

0xf86f,	// (0x00088af3) afind_page_pane_g

0x5ab6,	// (0x0007ed3a) afind_page_pane_t1

0xeb2d,	// (0x00087db1) cell_afind_grid_control_pane_ParamLimits

0xeb2d,	// (0x00087db1) cell_afind_grid_control_pane

0xeb3c,	// (0x00087dc0) bg_button_pane_cp69_ParamLimits

0xeb3c,	// (0x00087dc0) bg_button_pane_cp69

0x5ac4,	// (0x0007ed48) cell_afind_pane_g1_ParamLimits

0x5ac4,	// (0x0007ed48) cell_afind_pane_g1

0x5ad1,	// (0x0007ed55) cell_afind_pane_t1_ParamLimits

0x5ad1,	// (0x0007ed55) cell_afind_pane_t1

0xeb48,	// (0x00087dcc) bg_button_pane_cp72

0xeb50,	// (0x00087dd4) cell_afind_grid_control_pane_g1

0x347c,	// (0x0007c700) aid_image_placing_area_ParamLimits

0x347c,	// (0x0007c700) aid_image_placing_area

0xa6e5,	// (0x00083969) field_vitu_entry_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) field_vitu_entry_pane_g1

0xa6e5,	// (0x00083969) field_vitu_entry_pane_g2_ParamLimits

0xa6e5,	// (0x00083969) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0008841d) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0008841d) field_vitu_entry_pane_g

0xd313,	// (0x00086597) cell_vitu_itu_pane_g1_ParamLimits

0xd2f6,	// (0x0008657a) cell_vitu_itu_pane_t3_ParamLimits

0xd2f6,	// (0x0008657a) cell_vitu_itu_pane_t3

0xe938,	// (0x00087bbc) mp4_progress_pane_t1_ParamLimits

0xe957,	// (0x00087bdb) mp4_progress_pane_t2_ParamLimits

0xf7b5,	// (0x00088a39) mp4_progress_pane_t_ParamLimits

0xe976,	// (0x00087bfa) mup_progress_pane_cp04_ParamLimits

0x59af,	// (0x0007ec33) main_myfav_hc_pane_t5_ParamLimits

0x59af,	// (0x0007ec33) main_myfav_hc_pane_t5

0x9f9d,	// (0x00083221) aid_zoom_text_primary

0x11e7,	// (0x0007a46b) popup_adpt_find_window_ParamLimits

0x9fee,	// (0x00083272) main_cam_set_pane

0x52f0,	// (0x0007e574) cam4_zoom_pane_ParamLimits

0x52f0,	// (0x0007e574) cam4_zoom_pane

0x5ae3,	// (0x0007ed67) main_cam_set_pane_g1_ParamLimits

0x5ae3,	// (0x0007ed67) main_cam_set_pane_g1

0x5af1,	// (0x0007ed75) main_cam_set_pane_g2_ParamLimits

0x5af1,	// (0x0007ed75) main_cam_set_pane_g2

0x0001,

0xf876,	// (0x00088afa) main_cam_set_pane_g_ParamLimits

0xf876,	// (0x00088afa) main_cam_set_pane_g

0x5b12,	// (0x0007ed96) main_cam_set_pane_t1_ParamLimits

0x5b12,	// (0x0007ed96) main_cam_set_pane_t1

0x5b2d,	// (0x0007edb1) main_cset_listscroll_pane_ParamLimits

0x5b2d,	// (0x0007edb1) main_cset_listscroll_pane

0x5b53,	// (0x0007edd7) main_cset_slider_pane_ParamLimits

0x5b53,	// (0x0007edd7) main_cset_slider_pane

0xeb61,	// (0x00087de5) main_cset_list_pane_ParamLimits

0xeb61,	// (0x00087de5) main_cset_list_pane

0xeb71,	// (0x00087df5) scroll_pane_cp028

0x5b79,	// (0x0007edfd) aid_area_touch_slider

0x5b95,	// (0x0007ee19) cset_slider_pane

0x5bb8,	// (0x0007ee3c) main_cset_slider_pane_g1

0x5bcd,	// (0x0007ee51) main_cset_slider_pane_g2

0x0011,

0xf87b,	// (0x00088aff) main_cset_slider_pane_g

0xebaa,	// (0x00087e2e) main_cset_slider_pane_t1

0x5c89,	// (0x0007ef0d) main_cset_slider_pane_t2

0x5ca3,	// (0x0007ef27) main_cset_slider_pane_t3

0x5cbd,	// (0x0007ef41) main_cset_slider_pane_t4

0x5cd7,	// (0x0007ef5b) main_cset_slider_pane_t5

0x5cf1,	// (0x0007ef75) main_cset_slider_pane_t6

0x5d06,	// (0x0007ef8a) main_cset_slider_pane_t7

0x000e,

0xf8a0,	// (0x00088b24) main_cset_slider_pane_t

0x5e0a,	// (0x0007f08e) cset_list_set_pane_ParamLimits

0x5e0a,	// (0x0007f08e) cset_list_set_pane

0xec44,	// (0x00087ec8) aid_position_infowindow_above

0xec4c,	// (0x00087ed0) aid_position_infowindow_below

0x5e1c,	// (0x0007f0a0) cset_list_set_pane_g1_ParamLimits

0x5e1c,	// (0x0007f0a0) cset_list_set_pane_g1

0x0b80,	// (0x00079e04) cset_list_set_pane_g3_ParamLimits

0x0b80,	// (0x00079e04) cset_list_set_pane_g3

0x0001,

0xf8bf,	// (0x00088b43) cset_list_set_pane_g_ParamLimits

0xf8bf,	// (0x00088b43) cset_list_set_pane_g

0x0b8f,	// (0x00079e13) cset_list_set_pane_t1_ParamLimits

0x0b8f,	// (0x00079e13) cset_list_set_pane_t1

0x9fee,	// (0x00083272) list_highlight_pane_cp021_ParamLimits

0x9fee,	// (0x00083272) list_highlight_pane_cp021

0xb592,	// (0x00084816) cset_slider_pane_g1

0xb5a4,	// (0x00084828) cset_slider_pane_g2

0xb59b,	// (0x0008481f) cset_slider_pane_g3

0x0002,

0xf8c4,	// (0x00088b48) cset_slider_pane_g

0xe825,	// (0x00087aa9) aid_area_touch_cam4_zoom

0xe82d,	// (0x00087ab1) cam4_zoom_cont_pane

0xe835,	// (0x00087ab9) cam4_zoom_pane_g1

0xe83d,	// (0x00087ac1) cam4_zoom_pane_g2

0x5e28,	// (0x0007f0ac) cam4_zoom_pane_g3

0x0002,

0xf8cb,	// (0x00088b4f) cam4_zoom_pane_g

0xec54,	// (0x00087ed8) cam4_zoom_cont_pane_g1

0xec69,	// (0x00087eed) cam4_zoom_cont_pane_g2

0xec72,	// (0x00087ef6) cam4_zoom_cont_pane_g3

0x0002,

0xf8d2,	// (0x00088b56) cam4_zoom_cont_pane_g

0x511f,	// (0x0007e3a3) call4_image_pane_ParamLimits

0x511f,	// (0x0007e3a3) call4_image_pane

0x5186,	// (0x0007e40a) call4_windows_conf_pane_ParamLimits

0x51c9,	// (0x0007e44d) popup_call4_audio_in_window_ParamLimits

0x51c9,	// (0x0007e44d) popup_call4_audio_in_window

0x9f77,	// (0x000831fb) bg_popup_call2_act_pane_cp02

0xe9b7,	// (0x00087c3b) call4_list_conf_pane

0xa72b,	// (0x000839af) call4_image_pane_g1

0xa72b,	// (0x000839af) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00088310) call4_image_pane_g

0xec7b,	// (0x00087eff) list_single_graphic_popup_conf4_pane_ParamLimits

0xec7b,	// (0x00087eff) list_single_graphic_popup_conf4_pane

0x9f77,	// (0x000831fb) list_highlight_pane_cp022

0xec8e,	// (0x00087f12) list_single_graphic_popup_conf4_pane_g1

0xb16f,	// (0x000843f3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8d9,	// (0x00088b5d) list_single_graphic_popup_conf4_pane_g

0xec96,	// (0x00087f1a) list_single_graphic_popup_conf4_pane_t1

0x1e59,	// (0x0007b0dd) popup_vtel_slider_window_ParamLimits

0x1e59,	// (0x0007b0dd) popup_vtel_slider_window

0xe989,	// (0x00087c0d) dialer2_ne_pane_t2_ParamLimits

0xe989,	// (0x00087c0d) dialer2_ne_pane_t2

0x0001,

0xf7ba,	// (0x00088a3e) dialer2_ne_pane_t_ParamLimits

0xf7ba,	// (0x00088a3e) dialer2_ne_pane_t

0xc964,	// (0x00085be8) bg_popup_sub_pane_cp010_ParamLimits

0xc964,	// (0x00085be8) bg_popup_sub_pane_cp010

0x5e30,	// (0x0007f0b4) popup_vtel_slider_window_g1_ParamLimits

0x5e30,	// (0x0007f0b4) popup_vtel_slider_window_g1

0x5e43,	// (0x0007f0c7) popup_vtel_slider_window_g2_ParamLimits

0x5e43,	// (0x0007f0c7) popup_vtel_slider_window_g2

0x0003,

0xf8de,	// (0x00088b62) popup_vtel_slider_window_g_ParamLimits

0xf8de,	// (0x00088b62) popup_vtel_slider_window_g

0x5e99,	// (0x0007f11d) vtel_slider_pane_ParamLimits

0x5e99,	// (0x0007f11d) vtel_slider_pane

0x5ebb,	// (0x0007f13f) vtel_slider_pane_g1_ParamLimits

0x5ebb,	// (0x0007f13f) vtel_slider_pane_g1

0x5ecf,	// (0x0007f153) vtel_slider_pane_g2_ParamLimits

0x5ecf,	// (0x0007f153) vtel_slider_pane_g2

0x5ee7,	// (0x0007f16b) vtel_slider_pane_g3_ParamLimits

0x5ee7,	// (0x0007f16b) vtel_slider_pane_g3

0x5ebb,	// (0x0007f13f) vtel_slider_pane_g4_ParamLimits

0x5ebb,	// (0x0007f13f) vtel_slider_pane_g4

0x5efd,	// (0x0007f181) vtel_slider_pane_g5_ParamLimits

0x5efd,	// (0x0007f181) vtel_slider_pane_g5

0x0004,

0xf8e7,	// (0x00088b6b) vtel_slider_pane_g_ParamLimits

0xf8e7,	// (0x00088b6b) vtel_slider_pane_g

0x9fee,	// (0x00083272) main_gallery2_pane

0x5502,	// (0x0007e786) aid_size_row_itut2_dropdow_list_ParamLimits

0x5502,	// (0x0007e786) aid_size_row_itut2_dropdow_list

0x557c,	// (0x0007e800) grid_vitu2_function_top_pane_ParamLimits

0x557c,	// (0x0007e800) grid_vitu2_function_top_pane

0x55e0,	// (0x0007e864) popup_vitu2_dropdown_list_window_ParamLimits

0x55e0,	// (0x0007e864) popup_vitu2_dropdown_list_window

0x560b,	// (0x0007e88f) popup_vitu2_match_list_window

0x5f13,	// (0x0007f197) cell_vitu2_function_top_pane_ParamLimits

0x5f13,	// (0x0007f197) cell_vitu2_function_top_pane

0x5f2b,	// (0x0007f1af) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5f2b,	// (0x0007f1af) cell_vitu2_function_top_pane_cp01

0x5f47,	// (0x0007f1cb) cell_vitu2_function_top_wide_pane_ParamLimits

0x5f47,	// (0x0007f1cb) cell_vitu2_function_top_wide_pane

0x9fee,	// (0x00083272) bg_button_pane_cp012

0x5f65,	// (0x0007f1e9) cell_vitu2_function_top_pane_g1

0xe845,	// (0x00087ac9) bg_button_pane_cp013_ParamLimits

0xe845,	// (0x00087ac9) bg_button_pane_cp013

0x5f79,	// (0x0007f1fd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5f79,	// (0x0007f1fd) cell_vitu2_function_top_wide_pane_g1

0x9fee,	// (0x00083272) bg_popup_sub_pane_cp20

0x5f91,	// (0x0007f215) list_vitu2_match_list_pane

0xea31,	// (0x00087cb5) bg_popup_sub_pane_cp20_g1

0xea39,	// (0x00087cbd) bg_popup_sub_pane_cp20_g2

0xabfb,	// (0x00083e7f) bg_popup_sub_pane_cp20_g3

0xea41,	// (0x00087cc5) bg_popup_sub_pane_cp20_g4

0xabdb,	// (0x00083e5f) bg_popup_sub_pane_cp20_g5

0xecac,	// (0x00087f30) bg_popup_sub_pane_cp20_g6

0xea51,	// (0x00087cd5) bg_popup_sub_pane_cp20_g7

0xea59,	// (0x00087cdd) bg_popup_sub_pane_cp20_g8

0xea61,	// (0x00087ce5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f2,	// (0x00088b76) bg_popup_sub_pane_cp20_g

0xe861,	// (0x00087ae5) list_vitu2_match_list_item_pane_ParamLimits

0xe861,	// (0x00087ae5) list_vitu2_match_list_item_pane

0xe873,	// (0x00087af7) list_vitu2_match_list_item_pane_t1

0x9f77,	// (0x000831fb) bg_popup_sub_pane_cp21

0xa9d8,	// (0x00083c5c) grid_vitu2_dropdown_list_pane

0x5fa9,	// (0x0007f22d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5fa9,	// (0x0007f22d) cell_vitu2_dropdown_list_char_pane

0x5fc9,	// (0x0007f24d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5fc9,	// (0x0007f24d) cell_vitu2_dropdown_list_ctrl_pane

0xecb4,	// (0x00087f38) cell_vitu2_dropdown_list_char_pane_g1

0xecbd,	// (0x00087f41) cell_vitu2_dropdown_list_char_pane_g2

0xecc6,	// (0x00087f4a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x05ab,	// (0x0007982f) cell_vitu2_dropdown_list_char_pane_g

0x5ff1,	// (0x0007f275) cell_vitu2_dropdown_list_char_pane_t1

0x5fff,	// (0x0007f283) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5fff,	// (0x0007f283) cell_vitu2_dropdown_list_ctrl_pane_g1

0x600c,	// (0x0007f290) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x600c,	// (0x0007f290) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6019,	// (0x0007f29d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6019,	// (0x0007f29d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6026,	// (0x0007f2aa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6026,	// (0x0007f2aa) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa6e5,	// (0x00083969) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa6e5,	// (0x00083969) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf905,	// (0x00088b89) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf905,	// (0x00088b89) cell_vitu2_dropdown_list_ctrl_pane_g

0x6042,	// (0x0007f2c6) aid_size_cell_gallery2_ParamLimits

0x6042,	// (0x0007f2c6) aid_size_cell_gallery2

0x6060,	// (0x0007f2e4) grid_gallery2_pane_ParamLimits

0x6060,	// (0x0007f2e4) grid_gallery2_pane

0x607a,	// (0x0007f2fe) scroll_pane_cp029_ParamLimits

0x607a,	// (0x0007f2fe) scroll_pane_cp029

0x608b,	// (0x0007f30f) cell_gallery2_pane_ParamLimits

0x608b,	// (0x0007f30f) cell_gallery2_pane

0xaa31,	// (0x00083cb5) cell_gallery2_pane_g2

0x60ea,	// (0x0007f36e) cell_gallery2_pane_g3

0xeccf,	// (0x00087f53) cell_gallery2_pane_g4

0xecd7,	// (0x00087f5b) cell_gallery2_pane_g5

0xa9d8,	// (0x00083c5c) grid_highlight_pane_cp10

0x560b,	// (0x0007e88f) popup_vitu2_match_list_window_ParamLimits

0x5620,	// (0x0007e8a4) popup_vitu2_query_window_ParamLimits

0x5620,	// (0x0007e8a4) popup_vitu2_query_window

0x9f77,	// (0x000831fb) bg_vitu2_candi_button_pane

0xecb4,	// (0x00087f38) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xecbd,	// (0x00087f41) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xecc6,	// (0x00087f4a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x60f2,	// (0x0007f376) bg_button_pane_cp015

0x6103,	// (0x0007f387) bg_button_pane_cp016

0x610f,	// (0x0007f393) bg_button_pane_cp017

0xb522,	// (0x000847a6) bg_popup_sub_pane_cp22

0xecdf,	// (0x00087f63) popup_vitu2_query_window_g1

0x614d,	// (0x0007f3d1) popup_vitu2_query_window_g2

0x0002,

0xf910,	// (0x00088b94) popup_vitu2_query_window_g

0x616f,	// (0x0007f3f3) popup_vitu2_query_window_t1_ParamLimits

0x616f,	// (0x0007f3f3) popup_vitu2_query_window_t1

0x61a2,	// (0x0007f426) popup_vitu2_query_window_t2_ParamLimits

0x61a2,	// (0x0007f426) popup_vitu2_query_window_t2

0x61b4,	// (0x0007f438) popup_vitu2_query_window_t3_ParamLimits

0x61b4,	// (0x0007f438) popup_vitu2_query_window_t3

0x61dc,	// (0x0007f460) popup_vitu2_query_window_t4_ParamLimits

0x61dc,	// (0x0007f460) popup_vitu2_query_window_t4

0x61f0,	// (0x0007f474) popup_vitu2_query_window_t5_ParamLimits

0x61f0,	// (0x0007f474) popup_vitu2_query_window_t5

0x0006,

0xf917,	// (0x00088b9b) popup_vitu2_query_window_t_ParamLimits

0xf917,	// (0x00088b9b) popup_vitu2_query_window_t

0xeb59,	// (0x00087ddd) main_cset_text_pane

0x5b79,	// (0x0007edfd) aid_area_touch_slider_ParamLimits

0x5b95,	// (0x0007ee19) cset_slider_pane_ParamLimits

0x5bb8,	// (0x0007ee3c) main_cset_slider_pane_g1_ParamLimits

0x5bcd,	// (0x0007ee51) main_cset_slider_pane_g2_ParamLimits

0xeb7a,	// (0x00087dfe) main_cset_slider_pane_g3_ParamLimits

0xeb7a,	// (0x00087dfe) main_cset_slider_pane_g3

0x5be2,	// (0x0007ee66) main_cset_slider_pane_g4_ParamLimits

0x5be2,	// (0x0007ee66) main_cset_slider_pane_g4

0x5bf1,	// (0x0007ee75) main_cset_slider_pane_g5_ParamLimits

0x5bf1,	// (0x0007ee75) main_cset_slider_pane_g5

0x5bfd,	// (0x0007ee81) main_cset_slider_pane_g6_ParamLimits

0x5bfd,	// (0x0007ee81) main_cset_slider_pane_g6

0xf87b,	// (0x00088aff) main_cset_slider_pane_g_ParamLimits

0xebaa,	// (0x00087e2e) main_cset_slider_pane_t1_ParamLimits

0x5c89,	// (0x0007ef0d) main_cset_slider_pane_t2_ParamLimits

0x5ca3,	// (0x0007ef27) main_cset_slider_pane_t3_ParamLimits

0x5cbd,	// (0x0007ef41) main_cset_slider_pane_t4_ParamLimits

0x5cd7,	// (0x0007ef5b) main_cset_slider_pane_t5_ParamLimits

0x5cf1,	// (0x0007ef75) main_cset_slider_pane_t6_ParamLimits

0x5d06,	// (0x0007ef8a) main_cset_slider_pane_t7_ParamLimits

0x5d30,	// (0x0007efb4) main_cset_slider_pane_t8_ParamLimits

0x5d30,	// (0x0007efb4) main_cset_slider_pane_t8

0x5d58,	// (0x0007efdc) main_cset_slider_pane_t9_ParamLimits

0x5d58,	// (0x0007efdc) main_cset_slider_pane_t9

0x5d80,	// (0x0007f004) main_cset_slider_pane_t10_ParamLimits

0x5d80,	// (0x0007f004) main_cset_slider_pane_t10

0x5da8,	// (0x0007f02c) main_cset_slider_pane_t11_ParamLimits

0x5da8,	// (0x0007f02c) main_cset_slider_pane_t11

0x5dd0,	// (0x0007f054) main_cset_slider_pane_t12_ParamLimits

0x5dd0,	// (0x0007f054) main_cset_slider_pane_t12

0x5ded,	// (0x0007f071) main_cset_slider_pane_t13_ParamLimits

0x5ded,	// (0x0007f071) main_cset_slider_pane_t13

0xf8a0,	// (0x00088b24) main_cset_slider_pane_t_ParamLimits

0x9f77,	// (0x000831fb) bg_popup_sub_pane_cp011

0xeceb,	// (0x00087f6f) main_cset_text_pane_g1

0xecf3,	// (0x00087f77) main_cset_text_pane_t1

0xed01,	// (0x00087f85) main_cset_text_pane_t2

0xed0f,	// (0x00087f93) main_cset_text_pane_t3

0xed1d,	// (0x00087fa1) main_cset_text_pane_t4

0xed2b,	// (0x00087faf) main_cset_text_pane_t5

0xed39,	// (0x00087fbd) main_cset_text_pane_t6

0xed47,	// (0x00087fcb) main_cset_text_pane_t7

0x0006,

0x05d3,	// (0x00079857) main_cset_text_pane_t

0x9f77,	// (0x000831fb) main_cam4_burst_pane

0x9f77,	// (0x000831fb) main_cam5_pane

0xeb1b,	// (0x00087d9f) bg_button_pane_cp019

0xeb24,	// (0x00087da8) bg_button_pane_cp020

0xeb86,	// (0x00087e0a) main_cset_slider_pane_g7_ParamLimits

0xeb86,	// (0x00087e0a) main_cset_slider_pane_g7

0xeb92,	// (0x00087e16) main_cset_slider_pane_g8_ParamLimits

0xeb92,	// (0x00087e16) main_cset_slider_pane_g8

0x5c11,	// (0x0007ee95) main_cset_slider_pane_g9_ParamLimits

0x5c11,	// (0x0007ee95) main_cset_slider_pane_g9

0x5c1d,	// (0x0007eea1) main_cset_slider_pane_g10_ParamLimits

0x5c1d,	// (0x0007eea1) main_cset_slider_pane_g10

0x5c29,	// (0x0007eead) main_cset_slider_pane_g11_ParamLimits

0x5c29,	// (0x0007eead) main_cset_slider_pane_g11

0x5c35,	// (0x0007eeb9) main_cset_slider_pane_g12_ParamLimits

0x5c35,	// (0x0007eeb9) main_cset_slider_pane_g12

0x5c41,	// (0x0007eec5) main_cset_slider_pane_g13_ParamLimits

0x5c41,	// (0x0007eec5) main_cset_slider_pane_g13

0x5c4d,	// (0x0007eed1) main_cset_slider_pane_g14_ParamLimits

0x5c4d,	// (0x0007eed1) main_cset_slider_pane_g14

0x5c59,	// (0x0007eedd) main_cset_slider_pane_g15_ParamLimits

0x5c59,	// (0x0007eedd) main_cset_slider_pane_g15

0xebd2,	// (0x00087e56) main_cset_slider_pane_t14_ParamLimits

0xebd2,	// (0x00087e56) main_cset_slider_pane_t14

0xec0b,	// (0x00087e8f) main_cset_slider_pane_t15_ParamLimits

0xec0b,	// (0x00087e8f) main_cset_slider_pane_t15

0x625a,	// (0x0007f4de) aid_cam4_burst_size_cell_ParamLimits

0x625a,	// (0x0007f4de) aid_cam4_burst_size_cell

0x627a,	// (0x0007f4fe) grid_cam4_burst_pane_ParamLimits

0x627a,	// (0x0007f4fe) grid_cam4_burst_pane

0x62b2,	// (0x0007f536) linegrid_cam4_burst_pane_ParamLimits

0x62b2,	// (0x0007f536) linegrid_cam4_burst_pane

0x62d6,	// (0x0007f55a) scroll_pane_cp30_ParamLimits

0x62d6,	// (0x0007f55a) scroll_pane_cp30

0x62e2,	// (0x0007f566) cell_cam4_burst_pane_ParamLimits

0x62e2,	// (0x0007f566) cell_cam4_burst_pane

0xed55,	// (0x00087fd9) linegrid_cam4_burst_pane_g1_ParamLimits

0xed55,	// (0x00087fd9) linegrid_cam4_burst_pane_g1

0x632f,	// (0x0007f5b3) linegrid_cam4_burst_pane_g2_ParamLimits

0x632f,	// (0x0007f5b3) linegrid_cam4_burst_pane_g2

0xed62,	// (0x00087fe6) linegrid_cam4_burst_pane_g3_ParamLimits

0xed62,	// (0x00087fe6) linegrid_cam4_burst_pane_g3

0x0002,

0xf926,	// (0x00088baa) linegrid_cam4_burst_pane_g_ParamLimits

0xf926,	// (0x00088baa) linegrid_cam4_burst_pane_g

0x6340,	// (0x0007f5c4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6340,	// (0x0007f5c4) linegrid_cam4_burst_pane_g3_copy1

0xed6f,	// (0x00087ff3) linegrid_cam4_burst_pane_g4_ParamLimits

0xed6f,	// (0x00087ff3) linegrid_cam4_burst_pane_g4

0x635a,	// (0x0007f5de) linegrid_cam4_burst_pane_g5_ParamLimits

0x635a,	// (0x0007f5de) linegrid_cam4_burst_pane_g5

0x636b,	// (0x0007f5ef) linegrid_cam4_burst_pane_g6_ParamLimits

0x636b,	// (0x0007f5ef) linegrid_cam4_burst_pane_g6

0xed7c,	// (0x00088000) linegrid_cam4_burst_pane_g7_ParamLimits

0xed7c,	// (0x00088000) linegrid_cam4_burst_pane_g7

0x6382,	// (0x0007f606) cell_cam4_burst_pane_g1

0xed95,	// (0x00088019) main_cam5_pane_t1_ParamLimits

0xed95,	// (0x00088019) main_cam5_pane_t1

0xeda7,	// (0x0008802b) main_cam5_pane_t2_ParamLimits

0xeda7,	// (0x0008802b) main_cam5_pane_t2

0xedb9,	// (0x0008803d) main_cam5_pane_t3_ParamLimits

0xedb9,	// (0x0008803d) main_cam5_pane_t3

0xedcb,	// (0x0008804f) main_cam5_pane_t4_ParamLimits

0xedcb,	// (0x0008804f) main_cam5_pane_t4

0xede3,	// (0x00088067) main_cam5_pane_t5_ParamLimits

0xede3,	// (0x00088067) main_cam5_pane_t5

0xedf7,	// (0x0008807b) main_cam5_pane_t6_ParamLimits

0xedf7,	// (0x0008807b) main_cam5_pane_t6

0xee0b,	// (0x0008808f) main_cam5_pane_t7_ParamLimits

0xee0b,	// (0x0008808f) main_cam5_pane_t7

0xee1d,	// (0x000880a1) main_cam5_pane_t8_ParamLimits

0xee1d,	// (0x000880a1) main_cam5_pane_t8

0xee39,	// (0x000880bd) main_cam5_pane_t9_ParamLimits

0xee39,	// (0x000880bd) main_cam5_pane_t9

0xee4b,	// (0x000880cf) main_cam5_pane_t10_ParamLimits

0xee4b,	// (0x000880cf) main_cam5_pane_t10

0xee5d,	// (0x000880e1) main_cam5_pane_t11_ParamLimits

0xee5d,	// (0x000880e1) main_cam5_pane_t11

0xee6f,	// (0x000880f3) main_cam5_pane_t12_ParamLimits

0xee6f,	// (0x000880f3) main_cam5_pane_t12

0xee84,	// (0x00088108) main_cam5_pane_t13_ParamLimits

0xee84,	// (0x00088108) main_cam5_pane_t13

0x000c,

0x05ee,	// (0x00079872) main_cam5_pane_t_ParamLimits

0x05ee,	// (0x00079872) main_cam5_pane_t

0x1268,	// (0x0007a4ec) popup_scut_keymap_window_ParamLimits

0x1268,	// (0x0007a4ec) popup_scut_keymap_window

0x6395,	// (0x0007f619) aid_size_cell_brow_shortcut

0xa9d8,	// (0x00083c5c) bg_popup_window_pane_cp010

0x63a1,	// (0x0007f625) grid_scut_pane

0x63ad,	// (0x0007f631) cell_scut_pane_ParamLimits

0x63ad,	// (0x0007f631) cell_scut_pane

0x63c4,	// (0x0007f648) cell_scut_pane_g1

0xeea1,	// (0x00088125) cell_scut_pane_t1

0xeeb0,	// (0x00088134) cell_scut_pane_t2

0x63cd,	// (0x0007f651) cell_scut_pane_t3

0x0002,

0xf932,	// (0x00088bb6) cell_scut_pane_t

0x4324,	// (0x0007d5a8) main_mup3_pane_g8_ParamLimits

0x4324,	// (0x0007d5a8) main_mup3_pane_g8

0x551c,	// (0x0007e7a0) area_vitu2_query_pane_ParamLimits

0x551c,	// (0x0007e7a0) area_vitu2_query_pane

0x611b,	// (0x0007f39f) input_focus_pane_cp08

0xeebf,	// (0x00088143) area_vitu2_query_pane_g1

0x63db,	// (0x0007f65f) area_vitu2_query_pane_g2

0x0001,

0xf939,	// (0x00088bbd) area_vitu2_query_pane_g

0x63ea,	// (0x0007f66e) area_vitu2_query_pane_t1_ParamLimits

0x63ea,	// (0x0007f66e) area_vitu2_query_pane_t1

0x63fe,	// (0x0007f682) area_vitu2_query_pane_t2_ParamLimits

0x63fe,	// (0x0007f682) area_vitu2_query_pane_t2

0x6412,	// (0x0007f696) area_vitu2_query_pane_t3_ParamLimits

0x6412,	// (0x0007f696) area_vitu2_query_pane_t3

0xeecb,	// (0x0008814f) area_vitu2_query_pane_t4_ParamLimits

0xeecb,	// (0x0008814f) area_vitu2_query_pane_t4

0xeef3,	// (0x00088177) area_vitu2_query_pane_t5_ParamLimits

0xeef3,	// (0x00088177) area_vitu2_query_pane_t5

0xef1b,	// (0x0008819f) area_vitu2_query_pane_t6_ParamLimits

0xef1b,	// (0x0008819f) area_vitu2_query_pane_t6

0x0006,

0xf93e,	// (0x00088bc2) area_vitu2_query_pane_t_ParamLimits

0xf93e,	// (0x00088bc2) area_vitu2_query_pane_t

0x643a,	// (0x0007f6be) bg_button_pane_cp018

0x6446,	// (0x0007f6ca) bg_button_pane_cp021

0x6452,	// (0x0007f6d6) bg_button_pane_cp022

0x6471,	// (0x0007f6f5) input_focus_pane_cp09

0xb27e,	// (0x00084502) aid_size_touch_mv_arrow_left

0xb2a9,	// (0x0008452d) aid_size_touch_mv_arrow_right

0x5c71,	// (0x0007eef5) main_cset_slider_pane_g16_ParamLimits

0x5c71,	// (0x0007eef5) main_cset_slider_pane_g16

0x5c7d,	// (0x0007ef01) main_cset_slider_pane_g17_ParamLimits

0x5c7d,	// (0x0007ef01) main_cset_slider_pane_g17

0x6382,	// (0x0007f606) cell_cam4_burst_pane_g1_ParamLimits

0x9f77,	// (0x000831fb) compa_mode_pane

0x5e53,	// (0x0007f0d7) popup_vtel_slider_window_g3_ParamLimits

0x5e53,	// (0x0007f0d7) popup_vtel_slider_window_g3

0x5e6a,	// (0x0007f0ee) popup_vtel_slider_window_g4_ParamLimits

0x5e6a,	// (0x0007f0ee) popup_vtel_slider_window_g4

0x5e81,	// (0x0007f105) popup_vtel_slider_window_t1_ParamLimits

0x5e81,	// (0x0007f105) popup_vtel_slider_window_t1

0x9f77,	// (0x000831fb) main_cl_pane

0xc809,	// (0x00085a8d) popup_imed_adjust2_window_ParamLimits

0xb522,	// (0x000847a6) bg_tb_trans_pane_cp05_ParamLimits

0xd223,	// (0x000864a7) popup_imed_adjust2_window_g1_ParamLimits

0xd232,	// (0x000864b6) popup_imed_adjust2_window_g2_ParamLimits

0xd232,	// (0x000864b6) popup_imed_adjust2_window_g2

0xd23e,	// (0x000864c2) popup_imed_adjust2_window_g3_ParamLimits

0xd23e,	// (0x000864c2) popup_imed_adjust2_window_g3

0x0002,

0xf6ea,	// (0x0008896e) popup_imed_adjust2_window_g_ParamLimits

0xf6ea,	// (0x0008896e) popup_imed_adjust2_window_g

0xd24a,	// (0x000864ce) popup_imed_adjust2_window_t1_ParamLimits

0xd262,	// (0x000864e6) slider_imed_adjust_pane_ParamLimits

0xd276,	// (0x000864fa) slider_imed_adjust_pane_g1_ParamLimits

0xd286,	// (0x0008650a) slider_imed_adjust_pane_g2_ParamLimits

0xd296,	// (0x0008651a) slider_imed_adjust_pane_g3_ParamLimits

0xd2a7,	// (0x0008652b) slider_imed_adjust_pane_g4_ParamLimits

0xf6f1,	// (0x00088975) slider_imed_adjust_pane_g_ParamLimits

0x5291,	// (0x0007e515) aid_touch_area_cam4_ParamLimits

0x5291,	// (0x0007e515) aid_touch_area_cam4

0xe742,	// (0x000879c6) battery_pane_cp01

0x5360,	// (0x0007e5e4) main_camera4_pane_g6_ParamLimits

0x5360,	// (0x0007e5e4) main_camera4_pane_g6

0x538a,	// (0x0007e60e) main_camera4_pane_t2_ParamLimits

0x538a,	// (0x0007e60e) main_camera4_pane_t2

0x0001,

0xf7ee,	// (0x00088a72) main_camera4_pane_t_ParamLimits

0xf7ee,	// (0x00088a72) main_camera4_pane_t

0x53d1,	// (0x0007e655) aid_touch_area_vid4_ParamLimits

0x53d1,	// (0x0007e655) aid_touch_area_vid4

0x5425,	// (0x0007e6a9) main_video4_pane_g5_ParamLimits

0x5425,	// (0x0007e6a9) main_video4_pane_g5

0x544a,	// (0x0007e6ce) vid4_progress_pane_ParamLimits

0x544a,	// (0x0007e6ce) vid4_progress_pane

0xeb9e,	// (0x00087e22) main_cset_slider_pane_g18_ParamLimits

0xeb9e,	// (0x00087e22) main_cset_slider_pane_g18

0xed89,	// (0x0008800d) cell_cam4_burst_pane_g2_ParamLimits

0xed89,	// (0x0008800d) cell_cam4_burst_pane_g2

0x0001,

0xf92d,	// (0x00088bb1) cell_cam4_burst_pane_g_ParamLimits

0xf92d,	// (0x00088bb1) cell_cam4_burst_pane_g

0xa7a3,	// (0x00083a27) bg_cl_pane_ParamLimits

0xa7a3,	// (0x00083a27) bg_cl_pane

0x6481,	// (0x0007f705) cl_header_pane_ParamLimits

0x6481,	// (0x0007f705) cl_header_pane

0x6495,	// (0x0007f719) cl_listscroll_pane_ParamLimits

0x6495,	// (0x0007f719) cl_listscroll_pane

0xef67,	// (0x000881eb) bg_cl_pane_g1

0xef6f,	// (0x000881f3) bg_cl_pane_g2

0xef77,	// (0x000881fb) bg_cl_pane_g3

0xef7f,	// (0x00088203) bg_cl_pane_g4

0xef87,	// (0x0008820b) bg_cl_pane_g5

0xef8f,	// (0x00088213) bg_cl_pane_g6

0xef97,	// (0x0008821b) bg_cl_pane_g7

0xef9f,	// (0x00088223) bg_cl_pane_g8

0xefa7,	// (0x0008822b) bg_cl_pane_g9

0x0008,

0x0624,	// (0x000798a8) bg_cl_pane_g

0x64a5,	// (0x0007f729) aid_height_cl_leading_ParamLimits

0x64a5,	// (0x0007f729) aid_height_cl_leading

0x64b1,	// (0x0007f735) aid_height_cl_text_ParamLimits

0x64b1,	// (0x0007f735) aid_height_cl_text

0x9fee,	// (0x00083272) bg_cl_header_pane_ParamLimits

0x9fee,	// (0x00083272) bg_cl_header_pane

0x64d0,	// (0x0007f754) cl_header_pane_g1_ParamLimits

0x64d0,	// (0x0007f754) cl_header_pane_g1

0x64e6,	// (0x0007f76a) cl_header_pane_t1_ParamLimits

0x64e6,	// (0x0007f76a) cl_header_pane_t1

0xefbb,	// (0x0008823f) cl_list_pane

0xeb71,	// (0x00087df5) hc_scroll_pane_cp01

0xabdb,	// (0x00083e5f) bg_cl_header_pane_g1

0xea31,	// (0x00087cb5) bg_cl_header_pane_g2

0xabfb,	// (0x00083e7f) bg_cl_header_pane_g3

0xea41,	// (0x00087cc5) bg_cl_header_pane_g4

0xea39,	// (0x00087cbd) bg_cl_header_pane_g5

0xecac,	// (0x00087f30) bg_cl_header_pane_g6

0xea59,	// (0x00087cdd) bg_cl_header_pane_g7

0xea61,	// (0x00087ce5) bg_cl_header_pane_g8

0xea51,	// (0x00087cd5) bg_cl_header_pane_g9

0x0008,

0xf94d,	// (0x00088bd1) bg_cl_header_pane_g

0x64ff,	// (0x0007f783) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x64ff,	// (0x0007f783) hc_cl_list_double_graphic_heading_pane

0x6510,	// (0x0007f794) hc_cl_list_single_graphic_pane_ParamLimits

0x6510,	// (0x0007f794) hc_cl_list_single_graphic_pane

0x6529,	// (0x0007f7ad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6529,	// (0x0007f7ad) hc_cl_list_single_graphic_pane_g1

0x6535,	// (0x0007f7b9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6535,	// (0x0007f7b9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf960,	// (0x00088be4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf960,	// (0x00088be4) hc_cl_list_single_graphic_pane_g

0x6549,	// (0x0007f7cd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6549,	// (0x0007f7cd) hc_cl_list_single_graphic_pane_t1

0x6529,	// (0x0007f7ad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6529,	// (0x0007f7ad) hc_cl_list_double_graphic_heading_pane_g1

0x655e,	// (0x0007f7e2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x655e,	// (0x0007f7e2) hc_cl_list_double_graphic_heading_pane_g2

0x6572,	// (0x0007f7f6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6572,	// (0x0007f7f6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf965,	// (0x00088be9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf965,	// (0x00088be9) hc_cl_list_double_graphic_heading_pane_g

0x6586,	// (0x0007f80a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6586,	// (0x0007f80a) hc_cl_list_double_graphic_heading_pane_t1

0x659b,	// (0x0007f81f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x659b,	// (0x0007f81f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf96c,	// (0x00088bf0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf96c,	// (0x00088bf0) hc_cl_list_double_graphic_heading_pane_t

0xe889,	// (0x00087b0d) vid4_progress_pane_g1

0xe899,	// (0x00087b1d) vid4_progress_pane_g2

0x65b0,	// (0x0007f834) vid4_progress_pane_g3

0xe8a9,	// (0x00087b2d) vid4_progress_pane_g4

0x0004,

0xf971,	// (0x00088bf5) vid4_progress_pane_g

0x65c2,	// (0x0007f846) vid4_progress_pane_t1

0xe8c1,	// (0x00087b45) vid4_progress_pane_t2

0x0002,

0xf97c,	// (0x00088c00) vid4_progress_pane_t

0x65d8,	// (0x0007f85c) wait_bar_pane_cp07

0xcac7,	// (0x00085d4b) blid_firmament_pane_ParamLimits

0xcb0a,	// (0x00085d8e) popup_blid_sat_info2_window_g1

0xcb2e,	// (0x00085db2) popup_blid_sat_info2_window_t3

0xcb3c,	// (0x00085dc0) popup_blid_sat_info2_window_t4

0xcb4a,	// (0x00085dce) popup_blid_sat_info2_window_t5

0xcb58,	// (0x00085ddc) popup_blid_sat_info2_window_t6

0xcb68,	// (0x00085dec) popup_blid_sat_info2_window_t7

0xcb76,	// (0x00085dfa) popup_blid_sat_info2_window_t8

0xcb84,	// (0x00085e08) popup_blid_sat_info2_window_t9

0xcb92,	// (0x00085e16) popup_blid_sat_info2_window_t10

0xcc53,	// (0x00085ed7) aid_firma_cardinal_ParamLimits

0xcc67,	// (0x00085eeb) blid_firmament_pane_t1_ParamLimits

0xcc7e,	// (0x00085f02) blid_firmament_pane_t2_ParamLimits

0xcc95,	// (0x00085f19) blid_firmament_pane_t3_ParamLimits

0xccac,	// (0x00085f30) blid_firmament_pane_t4_ParamLimits

0xf5e3,	// (0x00088867) blid_firmament_pane_t_ParamLimits

0xccc3,	// (0x00085f47) blid_sat_info_pane_ParamLimits

0x9fee,	// (0x00083272) main_cam_set_pane_ParamLimits

0x4af5,	// (0x0007dd79) aid_size_cell_colour_35_ParamLimits

0x4b15,	// (0x0007dd99) aid_size_cell_colour_112_ParamLimits

0x4b35,	// (0x0007ddb9) aid_size_cell_effect_ParamLimits

0xb522,	// (0x000847a6) bg_tb_trans_pane_cp02_ParamLimits

0x4b55,	// (0x0007ddd9) heading_imed_pane_ParamLimits

0x4b61,	// (0x0007dde5) listscroll_imed_pane_ParamLimits

0xbefe,	// (0x00085182) popup_call2_audio_first_window_g5_ParamLimits

0xbefe,	// (0x00085182) popup_call2_audio_first_window_g5

0x4e9d,	// (0x0007e121) aid_size_touch_image3_arrow_left_ParamLimits

0x4e9d,	// (0x0007e121) aid_size_touch_image3_arrow_left

0x4ec9,	// (0x0007e14d) aid_size_touch_image3_arrow_right_ParamLimits

0x4ec9,	// (0x0007e14d) aid_size_touch_image3_arrow_right

0xe8d6,	// (0x00087b5a) vid4_progress_pane_t3

0x4cdc,	// (0x0007df60) main_hwr_training_symbol_option_pane_ParamLimits

0x4cdc,	// (0x0007df60) main_hwr_training_symbol_option_pane

0xd3c1,	// (0x00086645) popup_hwr_training_preview_window_ParamLimits

0xd3c1,	// (0x00086645) popup_hwr_training_preview_window

0x4cfc,	// (0x0007df80) hwr_training_navi_pane_g5_ParamLimits

0x4cfc,	// (0x0007df80) hwr_training_navi_pane_g5

0xea1f,	// (0x00087ca3) popup_char_count_window

0x9fee,	// (0x00083272) bg_popup_sub_pane_cp20_ParamLimits

0x5f91,	// (0x0007f215) list_vitu2_match_list_pane_ParamLimits

0x5f9d,	// (0x0007f221) vitu2_page_scroll_pane_ParamLimits

0x5f9d,	// (0x0007f221) vitu2_page_scroll_pane

0xefcd,	// (0x00088251) list_single_hwr_training_symbol_option_pane_ParamLimits

0xefcd,	// (0x00088251) list_single_hwr_training_symbol_option_pane

0xefe0,	// (0x00088264) list_single_hwr_training_symbol_option_pane_g1

0xefe8,	// (0x0008826c) list_single_hwr_training_symbol_option_pane_t1

0xeff6,	// (0x0008827a) bg_button_pane_cp023

0xefff,	// (0x00088283) bg_button_pane_cp024

0x65fe,	// (0x0007f882) vitu2_page_scroll_pane_g1

0x6606,	// (0x0007f88a) vitu2_page_scroll_pane_g2

0x0001,

0xf983,	// (0x00088c07) vitu2_page_scroll_pane_g

0x660e,	// (0x0007f892) vitu2_page_scroll_pane_t1

0xa83e,	// (0x00083ac2) popup_char_count_window_g1

0x661d,	// (0x0007f8a1) popup_char_count_window_g2

0xe3ee,	// (0x00087672) popup_char_count_window_g3

0x0002,

0xf988,	// (0x00088c0c) popup_char_count_window_g

0x6626,	// (0x0007f8aa) popup_char_count_window_t1

0x9f77,	// (0x000831fb) main_vded2_pane

0xd20f,	// (0x00086493) aid_size_cell_imed_line

0xd219,	// (0x0008649d) grid_imed_line_width_pane

0xe7f2,	// (0x00087a76) vid4_indicators_pane_g4

0x6634,	// (0x0007f8b8) cell_imed_line_width_pane_ParamLimits

0x6634,	// (0x0007f8b8) cell_imed_line_width_pane

0x6648,	// (0x0007f8cc) cell_imed_line_width_pane_g1

0x6651,	// (0x0007f8d5) cell_imed_line_width_pane_g2

0x0001,

0xf98f,	// (0x00088c13) cell_imed_line_width_pane_g

0x6659,	// (0x0007f8dd) main_vded2_pane_g1_ParamLimits

0x6659,	// (0x0007f8dd) main_vded2_pane_g1

0x666f,	// (0x0007f8f3) main_vded2_pane_g2_ParamLimits

0x666f,	// (0x0007f8f3) main_vded2_pane_g2

0x0001,

0xf994,	// (0x00088c18) main_vded2_pane_g_ParamLimits

0xf994,	// (0x00088c18) main_vded2_pane_g

0x6681,	// (0x0007f905) vded2_slider_pane_ParamLimits

0x6681,	// (0x0007f905) vded2_slider_pane

0x6691,	// (0x0007f915) aid_size_touch_vded2_end

0x669b,	// (0x0007f91f) aid_size_touch_vded2_playhead

0x66a5,	// (0x0007f929) aid_size_touch_vded2_start

0x66ad,	// (0x0007f931) vded2_slider_bg_pane

0x66b6,	// (0x0007f93a) vded2_slider_pane_g1

0x66bf,	// (0x0007f943) vded2_slider_pane_g2

0x66c7,	// (0x0007f94b) vded2_slider_pane_g3

0x0002,

0xf999,	// (0x00088c1d) vded2_slider_pane_g

0x66d2,	// (0x0007f956) vded2_slider_bg_pane_g1

0x66db,	// (0x0007f95f) vded2_slider_bg_pane_g2

0x66e4,	// (0x0007f968) vded2_slider_bg_pane_g3

0x0002,

0xf9a0,	// (0x00088c24) vded2_slider_bg_pane_g

0x310c,	// (0x0007c390) aid_postcard_touch_down_pane_ParamLimits

0x310c,	// (0x0007c390) aid_postcard_touch_down_pane

0x3122,	// (0x0007c3a6) aid_postcard_touch_up_pane_ParamLimits

0x3122,	// (0x0007c3a6) aid_postcard_touch_up_pane

0x9f77,	// (0x000831fb) main_blid2_pane

0xc7ef,	// (0x00085a73) popup_blid2_search_window

0x9f77,	// (0x000831fb) blid2_gps_pane

0x9f77,	// (0x000831fb) blid2_navig_pane

0x9f77,	// (0x000831fb) blid2_search_pane

0x9f77,	// (0x000831fb) blid2_tripm_pane

0x66ed,	// (0x0007f971) blid2_search_pane_g1_ParamLimits

0x66ed,	// (0x0007f971) blid2_search_pane_g1

0x6705,	// (0x0007f989) blid2_search_pane_t1_ParamLimits

0x6705,	// (0x0007f989) blid2_search_pane_t1

0x6717,	// (0x0007f99b) aid_size_cell_blid2_gps_ParamLimits

0x6717,	// (0x0007f99b) aid_size_cell_blid2_gps

0x672f,	// (0x0007f9b3) blid2_gps_pane_g1_ParamLimits

0x672f,	// (0x0007f9b3) blid2_gps_pane_g1

0x6743,	// (0x0007f9c7) grid_blid2_satellite_pane_ParamLimits

0x6743,	// (0x0007f9c7) grid_blid2_satellite_pane

0x675d,	// (0x0007f9e1) blid2_navig_pane_g1_ParamLimits

0x675d,	// (0x0007f9e1) blid2_navig_pane_g1

0x6769,	// (0x0007f9ed) blid2_navig_pane_t1_ParamLimits

0x6769,	// (0x0007f9ed) blid2_navig_pane_t1

0x6784,	// (0x0007fa08) blid2_navig_pane_t2_ParamLimits

0x6784,	// (0x0007fa08) blid2_navig_pane_t2

0x0001,

0xf9a7,	// (0x00088c2b) blid2_navig_pane_t_ParamLimits

0xf9a7,	// (0x00088c2b) blid2_navig_pane_t

0x679f,	// (0x0007fa23) blid2_navig_ring_pane_ParamLimits

0x679f,	// (0x0007fa23) blid2_navig_ring_pane

0x67b8,	// (0x0007fa3c) blid2_speed_pane_ParamLimits

0x67b8,	// (0x0007fa3c) blid2_speed_pane

0x67c4,	// (0x0007fa48) blid2_tripm_pane_g1_ParamLimits

0x67c4,	// (0x0007fa48) blid2_tripm_pane_g1

0x67df,	// (0x0007fa63) blid2_tripm_pane_g2_ParamLimits

0x67df,	// (0x0007fa63) blid2_tripm_pane_g2

0x67f3,	// (0x0007fa77) blid2_tripm_pane_g3_ParamLimits

0x67f3,	// (0x0007fa77) blid2_tripm_pane_g3

0x6807,	// (0x0007fa8b) blid2_tripm_pane_g4_ParamLimits

0x6807,	// (0x0007fa8b) blid2_tripm_pane_g4

0x681b,	// (0x0007fa9f) blid2_tripm_pane_g5_ParamLimits

0x681b,	// (0x0007fa9f) blid2_tripm_pane_g5

0x0005,

0xf9ac,	// (0x00088c30) blid2_tripm_pane_g_ParamLimits

0xf9ac,	// (0x00088c30) blid2_tripm_pane_g

0x6841,	// (0x0007fac5) blid2_tripm_pane_t1_ParamLimits

0x6841,	// (0x0007fac5) blid2_tripm_pane_t1

0x685c,	// (0x0007fae0) blid2_tripm_pane_t2_ParamLimits

0x685c,	// (0x0007fae0) blid2_tripm_pane_t2

0x6875,	// (0x0007faf9) blid2_tripm_pane_t3_ParamLimits

0x6875,	// (0x0007faf9) blid2_tripm_pane_t3

0x0003,

0xf9b9,	// (0x00088c3d) blid2_tripm_pane_t_ParamLimits

0xf9b9,	// (0x00088c3d) blid2_tripm_pane_t

0x68bc,	// (0x0007fb40) cell_blid2_satellite_pane_ParamLimits

0x68bc,	// (0x0007fb40) cell_blid2_satellite_pane

0x68da,	// (0x0007fb5e) cell_blid2_satellite_pane_g1

0x68e3,	// (0x0007fb67) cell_blid2_satellite_pane_t1

0xa72b,	// (0x000839af) blid2_speed_pane_g1

0x68f1,	// (0x0007fb75) blid2_speed_pane_t1

0x68ff,	// (0x0007fb83) blid2_speed_pane_t2

0x0001,

0xf9c2,	// (0x00088c46) blid2_speed_pane_t

0xa72b,	// (0x000839af) blid2_navig_ring_pane_g1

0x690d,	// (0x0007fb91) blid2_navig_ring_pane_g2

0x6915,	// (0x0007fb99) blid2_navig_ring_pane_g3

0x691d,	// (0x0007fba1) blid2_navig_ring_pane_g4

0x6925,	// (0x0007fba9) blid2_navig_ring_pane_g5

0x0004,

0xf9c7,	// (0x00088c4b) blid2_navig_ring_pane_g

0x9f77,	// (0x000831fb) bg_popup_window_pane_cp011

0x692d,	// (0x0007fbb1) popup_blid2_search_window_g1

0x6935,	// (0x0007fbb9) popup_blid2_search_window_t1

0x6943,	// (0x0007fbc7) popup_blid2_search_window_t2

0x0001,

0xf9d2,	// (0x00088c56) popup_blid2_search_window_t

0xaaea,	// (0x00083d6e) main_browser_pane_g1

0xa7a3,	// (0x00083a27) main_browser_pane_ParamLimits

0x9fee,	// (0x00083272) bg_button_pane_cp011_ParamLimits

0x5850,	// (0x0007ead4) cell_vitu2_function_pane_g1_ParamLimits

0xb522,	// (0x000847a6) bg_popup_sub_pane_cp22_ParamLimits

0x611b,	// (0x0007f39f) input_focus_pane_cp08_ParamLimits

0x6136,	// (0x0007f3ba) popup_vitu2_query_button_pane_ParamLimits

0x6136,	// (0x0007f3ba) popup_vitu2_query_button_pane

0x6145,	// (0x0007f3c9) popup_vitu2_query_input_button_pane

0xecdf,	// (0x00087f63) popup_vitu2_query_window_g1_ParamLimits

0x614d,	// (0x0007f3d1) popup_vitu2_query_window_g2_ParamLimits

0xf910,	// (0x00088b94) popup_vitu2_query_window_g_ParamLimits

0x9f77,	// (0x000831fb) bg_button_pane_cp026

0x6951,	// (0x0007fbd5) popup_vitu2_query_input_button_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp025

0x6959,	// (0x0007fbdd) popup_vitu2_query_button_pane_t1

0x3f85,	// (0x0007d209) main_mp3_pane_t6

0x3f93,	// (0x0007d217) popup_slider_window_cp01

0xe75e,	// (0x000879e2) cam4_battery_pane

0xe7b1,	// (0x00087a35) cam4_battery_pane_cp02

0xe881,	// (0x00087b05) cam4_battery_pane_cp01

0xe881,	// (0x00087b05) cam4_battery_pane_cp03

0xa72b,	// (0x000839af) cam4_battery_pane_g1

0x6967,	// (0x0007fbeb) cam4_battery_pane_g2

0x0001,

0xf9d7,	// (0x00088c5b) cam4_battery_pane_g

0xcba0,	// (0x00085e24) popup_blid_sat_info2_window_t11

0xb27e,	// (0x00084502) aid_size_touch_mv_arrow_left_ParamLimits

0xb2a9,	// (0x0008452d) aid_size_touch_mv_arrow_right_ParamLimits

0xb307,	// (0x0008458b) navi_pane_g1_ParamLimits

0xb313,	// (0x00084597) navi_pane_g2_ParamLimits

0xb341,	// (0x000845c5) navi_pane_g3_ParamLimits

0xf30c,	// (0x00088590) navi_pane_g_ParamLimits

0x2e23,	// (0x0007c0a7) navi_pane_mv_t1_ParamLimits

0x4b6d,	// (0x0007ddf1) grid_imed_effect_pane_ParamLimits

0x1d56,	// (0x0007afda) aid_placing_vt_slider_lsc

0xaa39,	// (0x00083cbd) aid_placing_vt_slider_prt

0x9fee,	// (0x00083272) bg_tb_trans_pane_cp01_ParamLimits

0xce3e,	// (0x000860c2) popup_image_details_window_g1_ParamLimits

0xce51,	// (0x000860d5) popup_image_details_window_g2_ParamLimits

0xce66,	// (0x000860ea) popup_image_details_window_g3_ParamLimits

0xce66,	// (0x000860ea) popup_image_details_window_g3

0xf623,	// (0x000888a7) popup_image_details_window_g_ParamLimits

0xce7a,	// (0x000860fe) popup_image_details_window_t1_ParamLimits

0xce8c,	// (0x00086110) popup_image_details_window_t2_ParamLimits

0xcea5,	// (0x00086129) popup_image_details_window_t3_ParamLimits

0xceb9,	// (0x0008613d) popup_image_details_window_t4_ParamLimits

0xced4,	// (0x00086158) popup_image_details_window_t5_ParamLimits

0xf62a,	// (0x000888ae) popup_image_details_window_t_ParamLimits

0x64bd,	// (0x0007f741) cl_header_name_pane_ParamLimits

0x64bd,	// (0x0007f741) cl_header_name_pane

0x6971,	// (0x0007fbf5) cl_header_name_pane_t1_ParamLimits

0x6971,	// (0x0007fbf5) cl_header_name_pane_t1

0x6992,	// (0x0007fc16) cl_header_name_pane_t2_ParamLimits

0x6992,	// (0x0007fc16) cl_header_name_pane_t2

0x69d4,	// (0x0007fc58) cl_header_name_pane_t3_ParamLimits

0x69d4,	// (0x0007fc58) cl_header_name_pane_t3

0x0002,

0xf9dc,	// (0x00088c60) cl_header_name_pane_t_ParamLimits

0xf9dc,	// (0x00088c60) cl_header_name_pane_t

0xb3d0,	// (0x00084654) navi_pane_mv_g2_ParamLimits

0xe9ea,	// (0x00087c6e) field_vitu2_entry_pane_g1_ParamLimits

0xe9f6,	// (0x00087c7a) field_vitu2_entry_pane_g2_ParamLimits

0xb500,	// (0x00084784) field_vitu2_entry_pane_g3_ParamLimits

0xb500,	// (0x00084784) field_vitu2_entry_pane_g3

0xf820,	// (0x00088aa4) field_vitu2_entry_pane_g_ParamLimits

0x56e0,	// (0x0007e964) cell_vitu2_itu_pane_g1_ParamLimits

0x56f8,	// (0x0007e97c) cell_vitu2_itu_pane_g2_ParamLimits

0x56f8,	// (0x0007e97c) cell_vitu2_itu_pane_g2

0x0001,

0xf82c,	// (0x00088ab0) cell_vitu2_itu_pane_g_ParamLimits

0xf82c,	// (0x00088ab0) cell_vitu2_itu_pane_g

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp05_ParamLimits

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp05

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp03

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp04

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp10_ParamLimits

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp10

0x6461,	// (0x0007f6e5) bg_vkb2_func_pane_cp08

0x643a,	// (0x0007f6be) bg_vkb2_func_pane_cp06

0x6446,	// (0x0007f6ca) bg_vkb2_func_pane_cp07

0xf008,	// (0x0008828c) bg_vkb2_func_pane_cp11_ParamLimits

0xf008,	// (0x0008828c) bg_vkb2_func_pane_cp11

0x65e9,	// (0x0007f86d) bg_vkb2_func_pane_cp12_ParamLimits

0x65e9,	// (0x0007f86d) bg_vkb2_func_pane_cp12

0x9f77,	// (0x000831fb) bg_vkb2_func_pane_cp09

0xea31,	// (0x00087cb5) bg_vkb2_func_pane_g1

0xabfb,	// (0x00083e7f) bg_vkb2_func_pane_g2

0xea39,	// (0x00087cbd) bg_vkb2_func_pane_g3

0xea41,	// (0x00087cc5) bg_vkb2_func_pane_g4

0xecac,	// (0x00087f30) bg_vkb2_func_pane_g5

0xea59,	// (0x00087cdd) bg_vkb2_func_pane_g6

0xea61,	// (0x00087ce5) bg_vkb2_func_pane_g7

0xea51,	// (0x00087cd5) bg_vkb2_func_pane_g8

0xabdb,	// (0x00083e5f) bg_vkb2_func_pane_g9

0x0008,

0xf9e3,	// (0x00088c67) bg_vkb2_func_pane_g

0x682f,	// (0x0007fab3) blid2_tripm_pane_g6_ParamLimits

0x682f,	// (0x0007fab3) blid2_tripm_pane_g6

0xe930,	// (0x00087bb4) mp4_progress_pane_g1

0x68a8,	// (0x0007fb2c) blid2_tripm_values_pane_ParamLimits

0x68a8,	// (0x0007fb2c) blid2_tripm_values_pane

0x6a05,	// (0x0007fc89) blid2_tripm_values_pane_t1

0x6a13,	// (0x0007fc97) blid2_tripm_values_pane_t2

0x6a21,	// (0x0007fca5) blid2_tripm_values_pane_t3

0x6a2f,	// (0x0007fcb3) blid2_tripm_values_pane_t4

0x6a3d,	// (0x0007fcc1) blid2_tripm_values_pane_t5

0x6a4b,	// (0x0007fccf) blid2_tripm_values_pane_t6

0x6a59,	// (0x0007fcdd) blid2_tripm_values_pane_t7

0x6a67,	// (0x0007fceb) blid2_tripm_values_pane_t8

0x6a75,	// (0x0007fcf9) blid2_tripm_values_pane_t9

0x0008,

0xf9f6,	// (0x00088c7a) blid2_tripm_values_pane_t

0x1d98,	// (0x0007b01c) call_video_pane_t1_ParamLimits

0x1db6,	// (0x0007b03a) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0008843e) call_video_pane_t_ParamLimits

0x0b72,	// (0x00079df6) msg_header_pane_g1_ParamLimits

0xb5f6,	// (0x0008487a) msg_header_pane_g2_ParamLimits

0xb5f6,	// (0x0008487a) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0008862e) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0008862e) msg_header_pane_g

0xa7a3,	// (0x00083a27) main_clock2_pane_ParamLimits

0x4862,	// (0x0007dae6) grid_clock2_toolbar_pane_ParamLimits

0x4862,	// (0x0007dae6) grid_clock2_toolbar_pane

0x4862,	// (0x0007dae6) listscroll_clock2_pane_ParamLimits

0x4862,	// (0x0007dae6) listscroll_clock2_pane

0x4946,	// (0x0007dbca) main_clock2_pane_t3_ParamLimits

0x4946,	// (0x0007dbca) main_clock2_pane_t3

0x496a,	// (0x0007dbee) main_clock2_pane_t4_ParamLimits

0x496a,	// (0x0007dbee) main_clock2_pane_t4

0x6a83,	// (0x0007fd07) cell_clock2_toolbar_pane

0x6a8b,	// (0x0007fd0f) cell_clock2_toolbar_pane_cp01

0x6a8b,	// (0x0007fd0f) cell_clock2_toolbar_pane_cp02

0x6a93,	// (0x0007fd17) cell_clock2_toolbar_pane_cp03

0x6a9b,	// (0x0007fd1f) list_clock2_pane

0xb203,	// (0x00084487) scroll_pane_cp10

0x6aa3,	// (0x0007fd27) list_single_clock2_pane_ParamLimits

0x6aa3,	// (0x0007fd27) list_single_clock2_pane

0xa9d8,	// (0x00083c5c) list_highlight_pane_cp08

0x6ab0,	// (0x0007fd34) list_single_clock2_pane_t1

0x6abe,	// (0x0007fd42) list_single_clock2_pane_t2

0x0001,

0xfa09,	// (0x00088c8d) list_single_clock2_pane_t

0x9f77,	// (0x000831fb) bg_button_pane_cp10

0x6acc,	// (0x0007fd50) cell_clock2_toolbar_pane_g1

0x3098,	// (0x0007c31c) aid_main_viewer_pane_g1_ParamLimits

0x3098,	// (0x0007c31c) aid_main_viewer_pane_g1

0x30a6,	// (0x0007c32a) aid_main_viewer_pane_g2_ParamLimits

0x30a6,	// (0x0007c32a) aid_main_viewer_pane_g2

0x30b4,	// (0x0007c338) aid_main_viewer_pane_g3_ParamLimits

0x30b4,	// (0x0007c338) aid_main_viewer_pane_g3

0x30c3,	// (0x0007c347) aid_main_viewer_pane_g4_ParamLimits

0x30c3,	// (0x0007c347) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0008863f) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0008863f) aid_main_viewer_pane_g

0x3968,	// (0x0007cbec) main_calc_pane_ParamLimits

0x397c,	// (0x0007cc00) main_dialer2_pane_ParamLimits

0x9f77,	// (0x000831fb) main_cam6_pane

0x9f77,	// (0x000831fb) main_vid6_pane

0x486e,	// (0x0007daf2) listscroll_gen_pane_cp06_ParamLimits

0x486e,	// (0x0007daf2) listscroll_gen_pane_cp06

0x498d,	// (0x0007dc11) main_clock2_pane_t5_ParamLimits

0x498d,	// (0x0007dc11) main_clock2_pane_t5

0x49eb,	// (0x0007dc6f) aid_call2_pane_cp10_ParamLimits

0x49fd,	// (0x0007dc81) aid_call_pane_cp10_ParamLimits

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4a0f,	// (0x0007dc93) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4a0f,	// (0x0007dc93) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb272,	// (0x000844f6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6df,	// (0x00088963) popup_clock_analogue_window_cp10_g_ParamLimits

0x4a25,	// (0x0007dca9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe99b,	// (0x00087c1f) cell_dialer2_keypad_pane_g2_ParamLimits

0xe99b,	// (0x00087c1f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7bf,	// (0x00088a43) cell_dialer2_keypad_pane_g_ParamLimits

0xf7bf,	// (0x00088a43) cell_dialer2_keypad_pane_g

0xa735,	// (0x000839b9) cell_dialer2_keypad_pane_t1

0x5b6b,	// (0x0007edef) main_cset_text2_pane_ParamLimits

0x5b6b,	// (0x0007edef) main_cset_text2_pane

0xeebf,	// (0x00088143) area_vitu2_query_pane_g1_ParamLimits

0x63db,	// (0x0007f65f) area_vitu2_query_pane_g2_ParamLimits

0xf939,	// (0x00088bbd) area_vitu2_query_pane_g_ParamLimits

0xef43,	// (0x000881c7) area_vitu2_query_pane_t7_ParamLimits

0xef43,	// (0x000881c7) area_vitu2_query_pane_t7

0x643a,	// (0x0007f6be) bg_button_pane_cp018_ParamLimits

0x6446,	// (0x0007f6ca) bg_button_pane_cp021_ParamLimits

0x6452,	// (0x0007f6d6) bg_button_pane_cp022_ParamLimits

0x6461,	// (0x0007f6e5) bg_vkb2_func_pane_cp08_ParamLimits

0x643a,	// (0x0007f6be) bg_vkb2_func_pane_cp06_ParamLimits

0x6446,	// (0x0007f6ca) bg_vkb2_func_pane_cp07_ParamLimits

0x6471,	// (0x0007f6f5) input_focus_pane_cp09_ParamLimits

0x6ad4,	// (0x0007fd58) cam6_autofocus_pane_ParamLimits

0x6ad4,	// (0x0007fd58) cam6_autofocus_pane

0x6ae0,	// (0x0007fd64) cam6_image_uncrop_pane_ParamLimits

0x6ae0,	// (0x0007fd64) cam6_image_uncrop_pane

0x6af0,	// (0x0007fd74) cam6_indi_pane_ParamLimits

0x6af0,	// (0x0007fd74) cam6_indi_pane

0x6b06,	// (0x0007fd8a) cam6_mode_pane_ParamLimits

0x6b06,	// (0x0007fd8a) cam6_mode_pane

0x6b18,	// (0x0007fd9c) cam6_timer_pane_ParamLimits

0x6b18,	// (0x0007fd9c) cam6_timer_pane

0x6b24,	// (0x0007fda8) cam6_zoom_pane_ParamLimits

0x6b24,	// (0x0007fda8) cam6_zoom_pane

0x6b31,	// (0x0007fdb5) cam6_mode_pane_g1_ParamLimits

0x6b31,	// (0x0007fdb5) cam6_mode_pane_g1

0x6b41,	// (0x0007fdc5) cam6_mode_pane_g2_ParamLimits

0x6b41,	// (0x0007fdc5) cam6_mode_pane_g2

0x6b51,	// (0x0007fdd5) cam6_mode_pane_g3_ParamLimits

0x6b51,	// (0x0007fdd5) cam6_mode_pane_g3

0x6b61,	// (0x0007fde5) cam6_mode_pane_g4_ParamLimits

0x6b61,	// (0x0007fde5) cam6_mode_pane_g4

0x0003,

0xfa0e,	// (0x00088c92) cam6_mode_pane_g_ParamLimits

0xfa0e,	// (0x00088c92) cam6_mode_pane_g

0xc956,	// (0x00085bda) bg_tb_trans_pane_cp08_ParamLimits

0xc956,	// (0x00085bda) bg_tb_trans_pane_cp08

0x6b71,	// (0x0007fdf5) cam6_battery_pane_ParamLimits

0x6b71,	// (0x0007fdf5) cam6_battery_pane

0x6b87,	// (0x0007fe0b) cam6_indi_pane_g1_ParamLimits

0x6b87,	// (0x0007fe0b) cam6_indi_pane_g1

0x6b99,	// (0x0007fe1d) cam6_indi_pane_g2_ParamLimits

0x6b99,	// (0x0007fe1d) cam6_indi_pane_g2

0x6bab,	// (0x0007fe2f) cam6_indi_pane_g3_ParamLimits

0x6bab,	// (0x0007fe2f) cam6_indi_pane_g3

0x0002,

0xfa17,	// (0x00088c9b) cam6_indi_pane_g_ParamLimits

0xfa17,	// (0x00088c9b) cam6_indi_pane_g

0x6bbd,	// (0x0007fe41) cam6_indi_pane_t1_ParamLimits

0x6bbd,	// (0x0007fe41) cam6_indi_pane_t1

0x5490,	// (0x0007e714) cam6_autofocus_pane_g1

0x5498,	// (0x0007e71c) cam6_autofocus_pane_g2

0x54a0,	// (0x0007e724) cam6_autofocus_pane_g3

0x54a8,	// (0x0007e72c) cam6_autofocus_pane_g4

0x0003,

0xfa1e,	// (0x00088ca2) cam6_autofocus_pane_g

0x6be3,	// (0x0007fe67) cam6_timer_pane_g1

0x6beb,	// (0x0007fe6f) cam6_timer_pane_t1

0x6bf9,	// (0x0007fe7d) cam6_zoom_cont_pane

0x6c01,	// (0x0007fe85) cam6_zoom_pane_g1

0x6c0a,	// (0x0007fe8e) cam6_zoom_pane_g2

0x6c13,	// (0x0007fe97) cam6_zoom_pane_g3

0x0002,

0xfa27,	// (0x00088cab) cam6_zoom_pane_g

0xa72b,	// (0x000839af) cam6_battery_pane_g1

0xa72b,	// (0x000839af) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00088310) cam6_battery_pane_g

0x6c01,	// (0x0007fe85) cam6_zoom_cont_pane_g1

0x6c0a,	// (0x0007fe8e) cam6_zoom_cont_pane_g2

0x6c1c,	// (0x0007fea0) cam6_zoom_cont_pane_g3

0x0002,

0xfa2e,	// (0x00088cb2) cam6_zoom_cont_pane_g

0x6c39,	// (0x0007febd) cam6_mode_pane_cp_ParamLimits

0x6c39,	// (0x0007febd) cam6_mode_pane_cp

0x6c4b,	// (0x0007fecf) cam6_zoom_pane_cp_ParamLimits

0x6c4b,	// (0x0007fecf) cam6_zoom_pane_cp

0x6c57,	// (0x0007fedb) vid6_image_uncrop_cif_pane_ParamLimits

0x6c57,	// (0x0007fedb) vid6_image_uncrop_cif_pane

0x6c67,	// (0x0007feeb) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c67,	// (0x0007feeb) vid6_image_uncrop_nhd_pane

0x6c86,	// (0x0007ff0a) vid6_image_uncrop_vga_pane_ParamLimits

0x6c86,	// (0x0007ff0a) vid6_image_uncrop_vga_pane

0x6c95,	// (0x0007ff19) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c95,	// (0x0007ff19) vid6_image_uncrop_wvga_pane

0x6ca4,	// (0x0007ff28) vid6_indi_pane_ParamLimits

0x6ca4,	// (0x0007ff28) vid6_indi_pane

0xc956,	// (0x00085bda) bg_tb_trans_pane_cp09_ParamLimits

0xc956,	// (0x00085bda) bg_tb_trans_pane_cp09

0x6cbc,	// (0x0007ff40) cam6_battery_pane_cp_ParamLimits

0x6cbc,	// (0x0007ff40) cam6_battery_pane_cp

0x6cc8,	// (0x0007ff4c) vid6_indi_pane_g1_ParamLimits

0x6cc8,	// (0x0007ff4c) vid6_indi_pane_g1

0x6cda,	// (0x0007ff5e) vid6_indi_pane_g2_ParamLimits

0x6cda,	// (0x0007ff5e) vid6_indi_pane_g2

0x6cec,	// (0x0007ff70) vid6_indi_pane_g3_ParamLimits

0x6cec,	// (0x0007ff70) vid6_indi_pane_g3

0x6d01,	// (0x0007ff85) vid6_indi_pane_g4_ParamLimits

0x6d01,	// (0x0007ff85) vid6_indi_pane_g4

0x6d16,	// (0x0007ff9a) vid6_indi_pane_g5_ParamLimits

0x6d16,	// (0x0007ff9a) vid6_indi_pane_g5

0x0004,

0xfa35,	// (0x00088cb9) vid6_indi_pane_g_ParamLimits

0xfa35,	// (0x00088cb9) vid6_indi_pane_g

0x6d30,	// (0x0007ffb4) vid6_indi_pane_t1_ParamLimits

0x6d30,	// (0x0007ffb4) vid6_indi_pane_t1

0x6d46,	// (0x0007ffca) vid6_indi_pane_t2_ParamLimits

0x6d46,	// (0x0007ffca) vid6_indi_pane_t2

0x6d6e,	// (0x0007fff2) vid6_indi_pane_t3_ParamLimits

0x6d6e,	// (0x0007fff2) vid6_indi_pane_t3

0x6d96,	// (0x0008001a) vid6_indi_pane_t4_ParamLimits

0x6d96,	// (0x0008001a) vid6_indi_pane_t4

0x0003,

0xfa40,	// (0x00088cc4) vid6_indi_pane_t_ParamLimits

0xfa40,	// (0x00088cc4) vid6_indi_pane_t

0x6dba,	// (0x0008003e) wait_bar_pane_cp08

0x6dc9,	// (0x0008004d) main_cset_text2_pane_t1_ParamLimits

0x6dc9,	// (0x0008004d) main_cset_text2_pane_t1

0x6c24,	// (0x0007fea8) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c24,	// (0x0007fea8) listscroll_gen_pane_cp06_t1

0x9f77,	// (0x000831fb) main_cam6_set_pane

0xa6e5,	// (0x00083969) bg_tb_trans_pane_cp06_ParamLimits

0xe766,	// (0x000879ea) cam4_indicators_pane_g1_ParamLimits

0xe777,	// (0x000879fb) cam4_indicators_pane_g2_ParamLimits

0xf7fc,	// (0x00088a80) cam4_indicators_pane_g_ParamLimits

0xe78f,	// (0x00087a13) cam4_indicators_pane_t1_ParamLimits

0x9fee,	// (0x00083272) bg_tb_trans_pane_cp07_ParamLimits

0xe7b9,	// (0x00087a3d) vid4_indicators_pane_g1_ParamLimits

0xe7cd,	// (0x00087a51) vid4_indicators_pane_g2_ParamLimits

0xe7e1,	// (0x00087a65) vid4_indicators_pane_g3_ParamLimits

0xe7f2,	// (0x00087a76) vid4_indicators_pane_g4_ParamLimits

0xf80e,	// (0x00088a92) vid4_indicators_pane_g_ParamLimits

0xe80e,	// (0x00087a92) vid4_indicators_pane_t1_ParamLimits

0xe889,	// (0x00087b0d) vid4_progress_pane_g1_ParamLimits

0xe899,	// (0x00087b1d) vid4_progress_pane_g2_ParamLimits

0x65b0,	// (0x0007f834) vid4_progress_pane_g3_ParamLimits

0xe8a9,	// (0x00087b2d) vid4_progress_pane_g4_ParamLimits

0xf971,	// (0x00088bf5) vid4_progress_pane_g_ParamLimits

0x65c2,	// (0x0007f846) vid4_progress_pane_t1_ParamLimits

0xe8c1,	// (0x00087b45) vid4_progress_pane_t2_ParamLimits

0xe8d6,	// (0x00087b5a) vid4_progress_pane_t3_ParamLimits

0xf97c,	// (0x00088c00) vid4_progress_pane_t_ParamLimits

0x65d8,	// (0x0007f85c) wait_bar_pane_cp07_ParamLimits

0x6de7,	// (0x0008006b) main_cam6_set_pane_g2_ParamLimits

0x6de7,	// (0x0008006b) main_cam6_set_pane_g2

0x6e0b,	// (0x0008008f) main_cset6_listscroll_pane_ParamLimits

0x6e0b,	// (0x0008008f) main_cset6_listscroll_pane

0x6e27,	// (0x000800ab) main_cset6_slider_pane_ParamLimits

0x6e27,	// (0x000800ab) main_cset6_slider_pane

0x6e3d,	// (0x000800c1) main_cset6_text2_pane_ParamLimits

0x6e3d,	// (0x000800c1) main_cset6_text2_pane

0x6e4b,	// (0x000800cf) main_cset6_text_pane

0x6e53,	// (0x000800d7) main_cset_list_pane_copy1_ParamLimits

0x6e53,	// (0x000800d7) main_cset_list_pane_copy1

0x6e63,	// (0x000800e7) scroll_pane_cp028_copy1

0x6e6c,	// (0x000800f0) cset_list_set_pane_copy1

0x6e7e,	// (0x00080102) aid_position_infowindow_above_copy1

0x6e86,	// (0x0008010a) aid_position_infowindow_below_copy1

0xe902,	// (0x00087b86) cset_list_set_pane_g1_copy1

0xd46a,	// (0x000866ee) cset_list_set_pane_g3_copy1_ParamLimits

0xd46a,	// (0x000866ee) cset_list_set_pane_g3_copy1

0xd479,	// (0x000866fd) cset_list_set_pane_t1_copy1_ParamLimits

0xd479,	// (0x000866fd) cset_list_set_pane_t1_copy1

0x9fee,	// (0x00083272) list_highlight_pane_cp021_copy1_ParamLimits

0x9fee,	// (0x00083272) list_highlight_pane_cp021_copy1

0x6e8e,	// (0x00080112) cset6_slider_pane_ParamLimits

0x6e8e,	// (0x00080112) cset6_slider_pane

0x6eba,	// (0x0008013e) main_cset6_slider_pane_g1_ParamLimits

0x6eba,	// (0x0008013e) main_cset6_slider_pane_g1

0x6ee2,	// (0x00080166) main_cset6_slider_pane_g2_ParamLimits

0x6ee2,	// (0x00080166) main_cset6_slider_pane_g2

0x6f0a,	// (0x0008018e) main_cset6_slider_pane_g3_ParamLimits

0x6f0a,	// (0x0008018e) main_cset6_slider_pane_g3

0x6f16,	// (0x0008019a) main_cset6_slider_pane_g4_ParamLimits

0x6f16,	// (0x0008019a) main_cset6_slider_pane_g4

0x6f22,	// (0x000801a6) main_cset6_slider_pane_g5_ParamLimits

0x6f22,	// (0x000801a6) main_cset6_slider_pane_g5

0xeb86,	// (0x00087e0a) main_cset6_slider_pane_g7_ParamLimits

0xeb86,	// (0x00087e0a) main_cset6_slider_pane_g7

0xeb92,	// (0x00087e16) main_cset6_slider_pane_g8_ParamLimits

0xeb92,	// (0x00087e16) main_cset6_slider_pane_g8

0x5c11,	// (0x0007ee95) main_cset6_slider_pane_g9_ParamLimits

0x5c11,	// (0x0007ee95) main_cset6_slider_pane_g9

0x5c1d,	// (0x0007eea1) main_cset6_slider_pane_g10_ParamLimits

0x5c1d,	// (0x0007eea1) main_cset6_slider_pane_g10

0x5c29,	// (0x0007eead) main_cset6_slider_pane_g11_ParamLimits

0x5c29,	// (0x0007eead) main_cset6_slider_pane_g11

0x5c35,	// (0x0007eeb9) main_cset6_slider_pane_g12_ParamLimits

0x5c35,	// (0x0007eeb9) main_cset6_slider_pane_g12

0x5c41,	// (0x0007eec5) main_cset6_slider_pane_g13_ParamLimits

0x5c41,	// (0x0007eec5) main_cset6_slider_pane_g13

0x5c4d,	// (0x0007eed1) main_cset6_slider_pane_g14_ParamLimits

0x5c4d,	// (0x0007eed1) main_cset6_slider_pane_g14

0x6f2e,	// (0x000801b2) main_cset6_slider_pane_g15_ParamLimits

0x6f2e,	// (0x000801b2) main_cset6_slider_pane_g15

0x5c71,	// (0x0007eef5) main_cset6_slider_pane_g16_ParamLimits

0x5c71,	// (0x0007eef5) main_cset6_slider_pane_g16

0x5c7d,	// (0x0007ef01) main_cset6_slider_pane_g17_ParamLimits

0x5c7d,	// (0x0007ef01) main_cset6_slider_pane_g17

0x0011,

0xfa49,	// (0x00088ccd) main_cset6_slider_pane_g_ParamLimits

0xfa49,	// (0x00088ccd) main_cset6_slider_pane_g

0x6f5e,	// (0x000801e2) main_cset6_slider_pane_t1_ParamLimits

0x6f5e,	// (0x000801e2) main_cset6_slider_pane_t1

0x6f9f,	// (0x00080223) main_cset6_slider_pane_t2_ParamLimits

0x6f9f,	// (0x00080223) main_cset6_slider_pane_t2

0x6fca,	// (0x0008024e) main_cset6_slider_pane_t3_ParamLimits

0x6fca,	// (0x0008024e) main_cset6_slider_pane_t3

0x6ff5,	// (0x00080279) main_cset6_slider_pane_t4_ParamLimits

0x6ff5,	// (0x00080279) main_cset6_slider_pane_t4

0x7020,	// (0x000802a4) main_cset6_slider_pane_t5_ParamLimits

0x7020,	// (0x000802a4) main_cset6_slider_pane_t5

0x704b,	// (0x000802cf) main_cset6_slider_pane_t7_ParamLimits

0x704b,	// (0x000802cf) main_cset6_slider_pane_t7

0x7081,	// (0x00080305) main_cset6_slider_pane_t8_ParamLimits

0x7081,	// (0x00080305) main_cset6_slider_pane_t8

0x70a5,	// (0x00080329) main_cset6_slider_pane_t9_ParamLimits

0x70a5,	// (0x00080329) main_cset6_slider_pane_t9

0x70c9,	// (0x0008034d) main_cset6_slider_pane_t10_ParamLimits

0x70c9,	// (0x0008034d) main_cset6_slider_pane_t10

0x70ed,	// (0x00080371) main_cset6_slider_pane_t11_ParamLimits

0x70ed,	// (0x00080371) main_cset6_slider_pane_t11

0x7111,	// (0x00080395) main_cset6_slider_pane_t14_ParamLimits

0x7111,	// (0x00080395) main_cset6_slider_pane_t14

0x714a,	// (0x000803ce) main_cset6_slider_pane_t15_ParamLimits

0x714a,	// (0x000803ce) main_cset6_slider_pane_t15

0x000b,

0xfa6e,	// (0x00088cf2) main_cset6_slider_pane_t_ParamLimits

0xfa6e,	// (0x00088cf2) main_cset6_slider_pane_t

0xec54,	// (0x00087ed8) cset_slider_pane_g1_copy1

0xec69,	// (0x00087eed) cset_slider_pane_g2_copy1

0xec72,	// (0x00087ef6) cset_slider_pane_g3_copy1

0x9f77,	// (0x000831fb) bg_popup_sub_pane_cp011_copy1

0x718c,	// (0x00080410) main_cset_text_pane_g1_copy1

0xecf3,	// (0x00087f77) main_cset_text_pane_t1_copy1

0xed01,	// (0x00087f85) main_cset_text_pane_t2_copy1

0xed0f,	// (0x00087f93) main_cset_text_pane_t3_copy1

0xed1d,	// (0x00087fa1) main_cset_text_pane_t4_copy1

0xed2b,	// (0x00087faf) main_cset_text_pane_t5_copy1

0x7194,	// (0x00080418) main_cset_text_pane_t6_copy1

0x71a2,	// (0x00080426) main_cset_text_pane_t7_copy1

0x6dc9,	// (0x0008004d) main_cset_text2_pane_t1_copy1

0x9fee,	// (0x00083272) main_ncimui_pane

0x3bc0,	// (0x0007ce44) popup_query_ncimui_window_ParamLimits

0x3bc0,	// (0x0007ce44) popup_query_ncimui_window

0xcfb1,	// (0x00086235) field_cale_ev2_pane_g4_ParamLimits

0xcfb1,	// (0x00086235) field_cale_ev2_pane_g4

0x4df1,	// (0x0007e075) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4df1,	// (0x0007e075) cell_video_dialer_keypad_pane_g2

0x0001,

0xf796,	// (0x00088a1a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf796,	// (0x00088a1a) cell_video_dialer_keypad_pane_g

0x4e09,	// (0x0007e08d) cell_video_dialer_keypad_pane_t1

0x9f77,	// (0x000831fb) bg_popup_window_pane_cp012

0xb0fb,	// (0x0008437f) heading_pane_cp06

0x72f7,	// (0x0008057b) ncim_query_content_pane

0x9f77,	// (0x000831fb) bg_popup_heading_pane_cp01

0x72ff,	// (0x00080583) ncim_heading_pane_t1

0x730d,	// (0x00080591) ncim_indicator_popup_pane

0x731f,	// (0x000805a3) ncim_query_button_pane

0x733f,	// (0x000805c3) ncim_query_content_pane_t1

0x7351,	// (0x000805d5) ncim_query_content_pane_t2

0x0005,

0xfab2,	// (0x00088d36) ncim_query_content_pane_t

0x7403,	// (0x00080687) ncim_query_list_pane

0x7415,	// (0x00080699) ncim_query_popup_pane

0x730d,	// (0x00080591) ncim_indicator_popup_pane_ParamLimits

0x7327,	// (0x000805ab) ncim_query_content_pane_g1_ParamLimits

0x7327,	// (0x000805ab) ncim_query_content_pane_g1

0x733f,	// (0x000805c3) ncim_query_content_pane_t1_ParamLimits

0x7351,	// (0x000805d5) ncim_query_content_pane_t2_ParamLimits

0x7363,	// (0x000805e7) ncim_query_content_pane_t3_ParamLimits

0x7363,	// (0x000805e7) ncim_query_content_pane_t3

0x738b,	// (0x0008060f) ncim_query_content_pane_t4_ParamLimits

0x738b,	// (0x0008060f) ncim_query_content_pane_t4

0x73b3,	// (0x00080637) ncim_query_content_pane_t5_ParamLimits

0x73b3,	// (0x00080637) ncim_query_content_pane_t5

0x73db,	// (0x0008065f) ncim_query_content_pane_t6_ParamLimits

0x73db,	// (0x0008065f) ncim_query_content_pane_t6

0xfab2,	// (0x00088d36) ncim_query_content_pane_t_ParamLimits

0x7403,	// (0x00080687) ncim_query_list_pane_ParamLimits

0x7415,	// (0x00080699) ncim_query_popup_pane_ParamLimits

0x7429,	// (0x000806ad) wait_bar_pane_cp04

0x9f77,	// (0x000831fb) input_focus_pane_cp011

0x7431,	// (0x000806b5) ncim_query_popup_pane_t1

0x743f,	// (0x000806c3) ncim_list_query_list_pane_ParamLimits

0x743f,	// (0x000806c3) ncim_list_query_list_pane

0x9f77,	// (0x000831fb) bg_button_pane_cp027

0x744c,	// (0x000806d0) ncim_query_button_pane_g1

0x9f77,	// (0x000831fb) list_highlight_pane_cp012

0x7456,	// (0x000806da) ncim_list_query_list_pane_g1

0x745e,	// (0x000806e2) ncim_list_query_list_pane_t1

0xe783,	// (0x00087a07) cam4_indicators_pane_g3_ParamLimits

0xe783,	// (0x00087a07) cam4_indicators_pane_g3

0xe7fe,	// (0x00087a82) vid4_indicators_pane_g5_ParamLimits

0xe7fe,	// (0x00087a82) vid4_indicators_pane_g5

0xe8b5,	// (0x00087b39) vid4_progress_pane_g5_ParamLimits

0xe8b5,	// (0x00087b39) vid4_progress_pane_g5

0x71e2,	// (0x00080466) main_ncimui_pane_g1

0x724b,	// (0x000804cf) ncimui_group_query_pane_ParamLimits

0x724b,	// (0x000804cf) ncimui_group_query_pane

0x7293,	// (0x00080517) ncimui_list_pane_ParamLimits

0x7293,	// (0x00080517) ncimui_list_pane

0x72ba,	// (0x0008053e) ncimui_text_pane_ParamLimits

0x72ba,	// (0x0008053e) ncimui_text_pane

0x746c,	// (0x000806f0) ncimui_text_pane_t1_ParamLimits

0x746c,	// (0x000806f0) ncimui_text_pane_t1

0x748a,	// (0x0008070e) ncimui_list_single_graphic_pane_ParamLimits

0x748a,	// (0x0008070e) ncimui_list_single_graphic_pane

0x749a,	// (0x0008071e) ncimui_query_pane_ParamLimits

0x749a,	// (0x0008071e) ncimui_query_pane

0x9f77,	// (0x000831fb) list_highlight_pane_cp013

0x74ad,	// (0x00080731) ncim_list_query_list_pane_t1_copy1

0x74bb,	// (0x0008073f) ncim_list_single_graphic_pane_g1

0x74c3,	// (0x00080747) ncim_query_button_pane_cp01

0x74cf,	// (0x00080753) ncim_query_entry_pane_ParamLimits

0x74cf,	// (0x00080753) ncim_query_entry_pane

0x74e2,	// (0x00080766) ncimui_query_pane_g1

0x74ee,	// (0x00080772) ncimui_query_pane_t1_ParamLimits

0x74ee,	// (0x00080772) ncimui_query_pane_t1

0x9fee,	// (0x00083272) input_focus_pane_cp012

0x7507,	// (0x0008078b) ncim_query_entry_pane_t1

0xa7a3,	// (0x00083a27) main_im_pane_ParamLimits

0x9fee,	// (0x00083272) main_mobtv_pane_ParamLimits

0x9fee,	// (0x00083272) main_mobtv_pane

0x6f46,	// (0x000801ca) main_cset6_slider_pane_g18_ParamLimits

0x6f46,	// (0x000801ca) main_cset6_slider_pane_g18

0x6f52,	// (0x000801d6) main_cset6_slider_pane_g19_ParamLimits

0x6f52,	// (0x000801d6) main_cset6_slider_pane_g19

0xa701,	// (0x00083985) bg_main_mobtv_pane_ParamLimits

0xa701,	// (0x00083985) bg_main_mobtv_pane

0x7519,	// (0x0008079d) main_mobtv_info_pane

0x7522,	// (0x000807a6) main_mobtv_loading_pane_ParamLimits

0x7522,	// (0x000807a6) main_mobtv_loading_pane

0x752f,	// (0x000807b3) main_mobtv_pg_channel_list_pane

0x7539,	// (0x000807bd) main_mobtv_pg_hdr_pane

0x7542,	// (0x000807c6) main_mobtv_programe_curr_pane_ParamLimits

0x7542,	// (0x000807c6) main_mobtv_programe_curr_pane

0x754f,	// (0x000807d3) main_mobtv_programe_next_pane_ParamLimits

0x754f,	// (0x000807d3) main_mobtv_programe_next_pane

0x755c,	// (0x000807e0) popup_mobtv_noti_window

0xa72b,	// (0x000839af) main_tv_pg_hdr_pane_g1

0x7564,	// (0x000807e8) main_tv_pg_hdr_pane_g2

0x756c,	// (0x000807f0) main_tv_pg_hdr_pane_g3

0x7574,	// (0x000807f8) main_tv_pg_hdr_pane_g4

0x757c,	// (0x00080800) main_tv_pg_hdr_pane_g5

0x7586,	// (0x0008080a) main_tv_pg_hdr_pane_g6

0x7590,	// (0x00080814) main_tv_pg_hdr_pane_g7

0x759a,	// (0x0008081e) main_tv_pg_hdr_pane_g8

0x75a4,	// (0x00080828) main_tv_pg_hdr_pane_g9

0x75ae,	// (0x00080832) main_tv_pg_hdr_pane_g10

0x75b8,	// (0x0008083c) main_tv_pg_hdr_pane_g11

0x000a,

0xfabf,	// (0x00088d43) main_tv_pg_hdr_pane_g

0x75c2,	// (0x00080846) main_tv_pg_hdr_pane_t1

0x75d0,	// (0x00080854) main_tv_pg_hdr_pane_t2

0x75de,	// (0x00080862) main_tv_pg_hdr_pane_t3

0x75ee,	// (0x00080872) main_tv_pg_hdr_pane_t4

0x75fe,	// (0x00080882) main_tv_pg_hdr_pane_t5

0x0004,

0xfad6,	// (0x00088d5a) main_tv_pg_hdr_pane_t

0x760e,	// (0x00080892) single_mobtv_pg_channel_pane_ParamLimits

0x760e,	// (0x00080892) single_mobtv_pg_channel_pane

0x7620,	// (0x000808a4) single_mobtv_pg_channel_table_pane

0xad0a,	// (0x00083f8e) single_mobtv_pg_channel_thumb_pane

0x7629,	// (0x000808ad) single_tv_pg_channel_pane_g1

0x7632,	// (0x000808b6) single_tv_pg_channel_pane_g2

0x0001,

0xfae1,	// (0x00088d65) single_tv_pg_channel_pane_g

0xa6e5,	// (0x00083969) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa6e5,	// (0x00083969) bg_single_mobtv_pg_channel_thumb_pane

0x763b,	// (0x000808bf) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x763b,	// (0x000808bf) single_mobtv_pg_channel_thumb_pane_g1

0x7649,	// (0x000808cd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7649,	// (0x000808cd) single_mobtv_pg_channel_thumb_pane_g2

0x7655,	// (0x000808d9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7655,	// (0x000808d9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfae6,	// (0x00088d6a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfae6,	// (0x00088d6a) single_mobtv_pg_channel_thumb_pane_g

0x7661,	// (0x000808e5) single_mobtv_pg_channel_thumb_pane_t1

0x766f,	// (0x000808f3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaed,	// (0x00088d71) single_mobtv_pg_channel_thumb_pane_t

0xa72b,	// (0x000839af) bg_single_mobtv_pg_channel_table_pane_g1

0xa72b,	// (0x000839af) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00088310) bg_single_mobtv_pg_channel_table_pane_g

0x767d,	// (0x00080901) single_mobtv_pg_channel_table_pane_t1

0x768b,	// (0x0008090f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaf2,	// (0x00088d76) single_mobtv_pg_channel_table_pane_t

0x76a1,	// (0x00080925) main_mobtv_info_pane_g1_ParamLimits

0x76a1,	// (0x00080925) main_mobtv_info_pane_g1

0x76bf,	// (0x00080943) main_mobtv_info_pane_t1_ParamLimits

0x76bf,	// (0x00080943) main_mobtv_info_pane_t1

0x7737,	// (0x000809bb) main_mobtv_info_pane_t2_ParamLimits

0x7737,	// (0x000809bb) main_mobtv_info_pane_t2

0x0002,

0xfafc,	// (0x00088d80) main_mobtv_info_pane_t_ParamLimits

0xfafc,	// (0x00088d80) main_mobtv_info_pane_t

0x77c6,	// (0x00080a4a) wait_bar_pane_cp05

0x77d8,	// (0x00080a5c) main_mobtv_loading_pane_g1_ParamLimits

0x77d8,	// (0x00080a5c) main_mobtv_loading_pane_g1

0x77eb,	// (0x00080a6f) main_mobtv_loading_pane_g2_ParamLimits

0x77eb,	// (0x00080a6f) main_mobtv_loading_pane_g2

0x77f7,	// (0x00080a7b) main_mobtv_loading_pane_g3_ParamLimits

0x77f7,	// (0x00080a7b) main_mobtv_loading_pane_g3

0x0002,

0xfb03,	// (0x00088d87) main_mobtv_loading_pane_g_ParamLimits

0xfb03,	// (0x00088d87) main_mobtv_loading_pane_g

0x780a,	// (0x00080a8e) main_mobtv_loading_pane_t1_ParamLimits

0x780a,	// (0x00080a8e) main_mobtv_loading_pane_t1

0x7822,	// (0x00080aa6) main_mobtv_loading_pane_t2_ParamLimits

0x7822,	// (0x00080aa6) main_mobtv_loading_pane_t2

0x0001,

0xfb0a,	// (0x00088d8e) main_mobtv_loading_pane_t_ParamLimits

0xfb0a,	// (0x00088d8e) main_mobtv_loading_pane_t

0x7846,	// (0x00080aca) wait_bar_pane_cp06_ParamLimits

0x7846,	// (0x00080aca) wait_bar_pane_cp06

0x7855,	// (0x00080ad9) main_mobtv_programe_curr_pane_t1

0x7863,	// (0x00080ae7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb0f,	// (0x00088d93) main_mobtv_programe_curr_pane_t

0x7871,	// (0x00080af5) main_mobtv_programe_next_pane_t1

0x787f,	// (0x00080b03) main_mobtv_programe_next_pane_t2

0x788d,	// (0x00080b11) main_mobtv_programe_next_pane_t3

0x0002,

0xfb14,	// (0x00088d98) main_mobtv_programe_next_pane_t

0x9f77,	// (0x000831fb) bg_popup_mobtv_noti_window_pane

0x789b,	// (0x00080b1f) popup_mobtv_noti_window_g1

0x78a3,	// (0x00080b27) popup_mobtv_noti_window_t1

0x78b1,	// (0x00080b35) popup_mobtv_noti_window_t2

0x0001,

0xfb1b,	// (0x00088d9f) popup_mobtv_noti_window_t

0xa72b,	// (0x000839af) bg_popup_mobtv_noti_window_pane_g1

0x9f77,	// (0x000831fb) sc_clock_pane

0x9f77,	// (0x000831fb) main_fs_bigclock_pane

0x6892,	// (0x0007fb16) blid2_tripm_pane_t4_ParamLimits

0x6892,	// (0x0007fb16) blid2_tripm_pane_t4

0xa6e5,	// (0x00083969) sc_clock_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) sc_clock_pane_g1

0xa735,	// (0x000839b9) sc_clock_pane_t1_ParamLimits

0xa735,	// (0x000839b9) sc_clock_pane_t1

0xa735,	// (0x000839b9) sc_clock_pane_t2_ParamLimits

0xa735,	// (0x000839b9) sc_clock_pane_t2

0xa735,	// (0x000839b9) sc_clock_pane_t3_ParamLimits

0xa735,	// (0x000839b9) sc_clock_pane_t3

0x0004,

0xfb20,	// (0x00088da4) sc_clock_pane_t_ParamLimits

0xfb20,	// (0x00088da4) sc_clock_pane_t

0x8653,	// (0x000818d7) main_fs_bigclock_indicator_pane_ParamLimits

0x8653,	// (0x000818d7) main_fs_bigclock_indicator_pane

0x790e,	// (0x00080b92) main_fs_bigclock_pane_g1_ParamLimits

0x790e,	// (0x00080b92) main_fs_bigclock_pane_g1

0x865f,	// (0x000818e3) main_fs_bigclock_pane_t1_ParamLimits

0x865f,	// (0x000818e3) main_fs_bigclock_pane_t1

0x8671,	// (0x000818f5) main_fs_bigclock_pane_t2_ParamLimits

0x8671,	// (0x000818f5) main_fs_bigclock_pane_t2

0x8685,	// (0x00081909) main_fs_bigclock_pane_t3_ParamLimits

0x8685,	// (0x00081909) main_fs_bigclock_pane_t3

0x0002,

0xfc9e,	// (0x00088f22) main_fs_bigclock_pane_t_ParamLimits

0xfc9e,	// (0x00088f22) main_fs_bigclock_pane_t

0xd9da,	// (0x00086c5e) main_fs_bigclock_indicator_pane_g1

0x7333,	// (0x000805b7) ncim_query_content_pane_g2_ParamLimits

0x7333,	// (0x000805b7) ncim_query_content_pane_g2

0x0001,

0xfaad,	// (0x00088d31) ncim_query_content_pane_g_ParamLimits

0xfaad,	// (0x00088d31) ncim_query_content_pane_g

0xa735,	// (0x000839b9) sc_clock_pane_t4_ParamLimits

0xa735,	// (0x000839b9) sc_clock_pane_t4

0x9fee,	// (0x00083272) main_radioblah_pane

0xe710,	// (0x00087994) cell_call4_button_pane_t1_copy1_ParamLimits

0xe710,	// (0x00087994) cell_call4_button_pane_t1_copy1

0x71fa,	// (0x0008047e) main_ncimui_pane_t1_ParamLimits

0x71fa,	// (0x0008047e) main_ncimui_pane_t1

0x7214,	// (0x00080498) main_ncimui_pane_t2_ParamLimits

0x7214,	// (0x00080498) main_ncimui_pane_t2

0x0002,

0xfaa6,	// (0x00088d2a) main_ncimui_pane_t_ParamLimits

0xfaa6,	// (0x00088d2a) main_ncimui_pane_t

0xb522,	// (0x000847a6) main_radioblah_anim_pane_ParamLimits

0xb522,	// (0x000847a6) main_radioblah_anim_pane

0xb522,	// (0x000847a6) main_radioblah_info_pane_ParamLimits

0xb522,	// (0x000847a6) main_radioblah_info_pane

0xb50e,	// (0x00084792) main_radioblah_pane_t1_ParamLimits

0xb50e,	// (0x00084792) main_radioblah_pane_t1

0xb50e,	// (0x00084792) main_radioblah_pane_t2_ParamLimits

0xb50e,	// (0x00084792) main_radioblah_pane_t2

0x0003,

0xfb41,	// (0x00088dc5) main_radioblah_pane_t_ParamLimits

0xfb41,	// (0x00088dc5) main_radioblah_pane_t

0x9fee,	// (0x00083272) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9fee,	// (0x00083272) main_radioblah_rocker_ctrl_pane

0xc942,	// (0x00085bc6) main_radioblah_info_pane_t1_ParamLimits

0xc942,	// (0x00085bc6) main_radioblah_info_pane_t1

0x7ac3,	// (0x00080d47) main_radioblah_info_pane_t2_ParamLimits

0x7ac3,	// (0x00080d47) main_radioblah_info_pane_t2

0x0003,

0xfb4a,	// (0x00088dce) main_radioblah_info_pane_t_ParamLimits

0xfb4a,	// (0x00088dce) main_radioblah_info_pane_t

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g1

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g2

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g3

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g4

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g5

0xa72b,	// (0x000839af) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb53,	// (0x00088dd7) main_radioblah_rocker_ctrl_pane_g

0x6dc9,	// (0x0008004d) main_cset_text2_pane_t1_copy1_ParamLimits

0xe756,	// (0x000879da) cam4_image_uncrop_qvga_pane

0xe7a9,	// (0x00087a2d) vid4_image_uncrop_qcif_pane

0xe8f4,	// (0x00087b78) cam6_image_uncrop_qvga_pane_ParamLimits

0xe8f4,	// (0x00087b78) cam6_image_uncrop_qvga_pane

0x6c76,	// (0x0007fefa) vid6_image_uncrop_qcif_pane_ParamLimits

0x6c76,	// (0x0007fefa) vid6_image_uncrop_qcif_pane

0x9f77,	// (0x000831fb) bg_popup_preview_window_pane_cp03

0x71b0,	// (0x00080434) list_cset_text2_pane

0x71b8,	// (0x0008043c) main_cset6_text2_pane_g1

0x71c0,	// (0x00080444) main_cset6_text2_pane_t1

0x7b12,	// (0x00080d96) list_cset_text2_pane_t1_ParamLimits

0x7b12,	// (0x00080d96) list_cset_text2_pane_t1

0x9fee,	// (0x00083272) main_radioblah_pane_ParamLimits

0x77b2,	// (0x00080a36) main_mobtv_info_pane_t3_ParamLimits

0x77b2,	// (0x00080a36) main_mobtv_info_pane_t3

0xb500,	// (0x00084784) main_radioblah_pane_g1

0x7a93,	// (0x00080d17) main_radioblah_info_pane_g1

0xa749,	// (0x000839cd) main_radioblah_info_pane_t3_ParamLimits

0xa749,	// (0x000839cd) main_radioblah_info_pane_t3

0x2a21,	// (0x0007bca5) highlight_cell_cale_month_pane_ParamLimits

0x2a21,	// (0x0007bca5) highlight_cell_cale_month_pane

0x9f77,	// (0x000831fb) main_phob_fisheye_pane

0xd062,	// (0x000862e6) scroll_pane_cp0031_ParamLimits

0xd062,	// (0x000862e6) scroll_pane_cp0031

0x6dba,	// (0x0008003e) wait_bar_pane_cp08_ParamLimits

0x6e6c,	// (0x000800f0) cset_list_set_pane_copy1_ParamLimits

0x7b2d,	// (0x00080db1) highlight_cell_cale_month_pane_g1

0x7b35,	// (0x00080db9) highlight_cell_cale_month_pane_t1

0xefbb,	// (0x0008823f) list_gen_pane_cp01

0xeb71,	// (0x00087df5) scroll_pane_01

0x7b43,	// (0x00080dc7) list_single_double_fisheye_pane

0x7b4c,	// (0x00080dd0) list_double_fisheye_pane_g1_ParamLimits

0x7b4c,	// (0x00080dd0) list_double_fisheye_pane_g1

0x7b58,	// (0x00080ddc) list_double_fisheye_pane_g2_ParamLimits

0x7b58,	// (0x00080ddc) list_double_fisheye_pane_g2

0x7b6c,	// (0x00080df0) list_double_fisheye_pane_g3_ParamLimits

0x7b6c,	// (0x00080df0) list_double_fisheye_pane_g3

0x0004,

0xfb60,	// (0x00088de4) list_double_fisheye_pane_g_ParamLimits

0xfb60,	// (0x00088de4) list_double_fisheye_pane_g

0x7b95,	// (0x00080e19) list_double_fisheye_pane_t1_ParamLimits

0x7b95,	// (0x00080e19) list_double_fisheye_pane_t1

0x7bb0,	// (0x00080e34) list_double_fisheye_pane_t2_ParamLimits

0x7bb0,	// (0x00080e34) list_double_fisheye_pane_t2

0x0001,

0xfb6b,	// (0x00088def) list_double_fisheye_pane_t_ParamLimits

0xfb6b,	// (0x00088def) list_double_fisheye_pane_t

0x9f77,	// (0x000831fb) main_call5_pane

0x9fee,	// (0x00083272) sc_swipe_pane_ParamLimits

0x9fee,	// (0x00083272) sc_swipe_pane

0x7be5,	// (0x00080e69) call5_image_pane_ParamLimits

0x7be5,	// (0x00080e69) call5_image_pane

0x7c02,	// (0x00080e86) call5_swipe_1_pane_ParamLimits

0x7c02,	// (0x00080e86) call5_swipe_1_pane

0x7c15,	// (0x00080e99) call5_swipe_2_pane_ParamLimits

0x7c15,	// (0x00080e99) call5_swipe_2_pane

0x7c40,	// (0x00080ec4) popup_call5_audio_first_window_ParamLimits

0x7c40,	// (0x00080ec4) popup_call5_audio_first_window

0xa6e5,	// (0x00083969) call5_swipe_1_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) call5_swipe_1_pane_g1

0x7c51,	// (0x00080ed5) call5_swipe_1_pane_g2_ParamLimits

0x7c51,	// (0x00080ed5) call5_swipe_1_pane_g2

0x0001,

0xfb70,	// (0x00088df4) call5_swipe_1_pane_g_ParamLimits

0xfb70,	// (0x00088df4) call5_swipe_1_pane_g

0x7c5d,	// (0x00080ee1) call5_swipe_1_pane_t1_ParamLimits

0x7c5d,	// (0x00080ee1) call5_swipe_1_pane_t1

0xa6e5,	// (0x00083969) call5_swipe_2_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) call5_swipe_2_pane_g1

0x7c72,	// (0x00080ef6) call5_swipe_2_pane_g2_ParamLimits

0x7c72,	// (0x00080ef6) call5_swipe_2_pane_g2

0x0001,

0xfb75,	// (0x00088df9) call5_swipe_2_pane_g_ParamLimits

0xfb75,	// (0x00088df9) call5_swipe_2_pane_g

0x7c7e,	// (0x00080f02) call5_swipe_2_pane_t1_ParamLimits

0x7c7e,	// (0x00080f02) call5_swipe_2_pane_t1

0xa6e5,	// (0x00083969) sc_swipe_pane_g1_ParamLimits

0xa6e5,	// (0x00083969) sc_swipe_pane_g1

0xa6f3,	// (0x00083977) sc_swipe_pane_g2_ParamLimits

0xa6f3,	// (0x00083977) sc_swipe_pane_g2

0x0001,

0xf732,	// (0x000889b6) sc_swipe_pane_g_ParamLimits

0xf732,	// (0x000889b6) sc_swipe_pane_g

0xa735,	// (0x000839b9) sc_swipe_pane_t1_ParamLimits

0xa735,	// (0x000839b9) sc_swipe_pane_t1

0x9f77,	// (0x000831fb) main_cmail_launcher_pane

0x7c93,	// (0x00080f17) aid_size_cell_cmail_l_ParamLimits

0x7c93,	// (0x00080f17) aid_size_cell_cmail_l

0x7ca1,	// (0x00080f25) grid_cmail_l_pane_ParamLimits

0x7ca1,	// (0x00080f25) grid_cmail_l_pane

0x7cbb,	// (0x00080f3f) cell_cmail_l_pane_ParamLimits

0x7cbb,	// (0x00080f3f) cell_cmail_l_pane

0x7cd5,	// (0x00080f59) cell_cmail_l_pane_g1_ParamLimits

0x7cd5,	// (0x00080f59) cell_cmail_l_pane_g1

0x7ce1,	// (0x00080f65) cell_cmail_l_pane_t1_ParamLimits

0x7ce1,	// (0x00080f65) cell_cmail_l_pane_t1

0x7cf7,	// (0x00080f7b) cell_cmail_l_pane_t2_ParamLimits

0x7cf7,	// (0x00080f7b) cell_cmail_l_pane_t2

0x0001,

0xfb7a,	// (0x00088dfe) cell_cmail_l_pane_t_ParamLimits

0xfb7a,	// (0x00088dfe) cell_cmail_l_pane_t

0x9fee,	// (0x00083272) grid_highlight_pane_cp018_ParamLimits

0x9fee,	// (0x00083272) grid_highlight_pane_cp018

0x114e,	// (0x0007a3d2) main2_pane_ParamLimits

0x114e,	// (0x0007a3d2) main2_pane

0xa85f,	// (0x00083ae3) popup_sp_fs_action_menu_bg_pane_g1

0xa867,	// (0x00083aeb) popup_sp_fs_action_menu_bg_pane_g2

0xa86f,	// (0x00083af3) popup_sp_fs_action_menu_bg_pane_g3

0xa877,	// (0x00083afb) popup_sp_fs_action_menu_bg_pane_g4

0xa87f,	// (0x00083b03) popup_sp_fs_action_menu_bg_pane_g5

0xa887,	// (0x00083b0b) popup_sp_fs_action_menu_bg_pane_g6

0xa88f,	// (0x00083b13) popup_sp_fs_action_menu_bg_pane_g7

0xa897,	// (0x00083b1b) popup_sp_fs_action_menu_bg_pane_g8

0xa89f,	// (0x00083b23) popup_sp_fs_action_menu_bg_pane_g9

0xa8a7,	// (0x00083b2b) popup_sp_fs_action_menu_bg_pane_g10

0xa8a7,	// (0x00083b2b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00088361) popup_sp_fs_action_menu_bg_pane_g

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g2

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0008840f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0008840f) list_medium_line_x2_t3_g3_g

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t2

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_x2_t3_g3_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_x2_t3_g2_g

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t2

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_x2_t3_g2_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g2

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g3

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00088422) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00088422) list_medium_line_x2_t4_g4_g

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t2

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t3

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008842b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008842b) list_medium_line_x2_t4_g4_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g2

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g3

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00088422) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00088422) list_medium_line_x2_t2_g4_g

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g4_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g4_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g2

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0008840f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0008840f) list_medium_line_x2_t2_g3_g

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g3_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g3_t

0x2b86,	// (0x0007be0a) main_sp_fs_list_pane_ParamLimits

0x2b86,	// (0x0007be0a) main_sp_fs_list_pane

0xefaf,	// (0x00088233) sp_fs_scroll_pane_ParamLimits

0xefaf,	// (0x00088233) sp_fs_scroll_pane

0xaf05,	// (0x00084189) list_medium_line_x2_t3_t1

0xaf05,	// (0x00084189) list_medium_line_x2_t3_t2

0xaf05,	// (0x00084189) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000884d8) list_medium_line_x2_t3_t

0xaf05,	// (0x00084189) list_medium_line_x3_t4_t1

0xaf05,	// (0x00084189) list_medium_line_x3_t4_t2

0xaf05,	// (0x00084189) list_medium_line_x3_t4_t3

0xaf05,	// (0x00084189) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000884df) list_medium_line_x3_t4_t

0xaf05,	// (0x00084189) list_medium_line_x4_t5_t1

0xaf05,	// (0x00084189) list_medium_line_x4_t5_t2

0xaf05,	// (0x00084189) list_medium_line_x4_t5_t3

0xaf05,	// (0x00084189) list_medium_line_x4_t5_t4

0xaf05,	// (0x00084189) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000884e8) list_medium_line_x4_t5_t

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g1

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g2

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g3

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00088422) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00088422) list_medium_line_t4_g4_g

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t1

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t2

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t3

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t4_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008842b) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008842b) list_medium_line_t4_g4_t

0x2c31,	// (0x0007beb5) chi_dic_find_pane_g1

0x3990,	// (0x0007cc14) main_tport_pane

0xaf05,	// (0x00084189) list_medium_line_plain_t1

0xa6e5,	// (0x00083969) list_medium_line_t2_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_t2_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_t2_g2_g

0xa735,	// (0x000839b9) list_medium_line_t2_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_g2_t1

0xa735,	// (0x000839b9) list_medium_line_t2_g2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_t2_g2_t

0xd459,	// (0x000866dd) aid_sp_fs_list_icon_a_sm

0xe8ec,	// (0x00087b70) aid_sp_fs_list_icon_d

0xd461,	// (0x000866e5) aid_sp_fs_text_primary

0xefc4,	// (0x00088248) aid_sp_fs_text_secondary

0x9f77,	// (0x000831fb) list_medium_line

0x9f77,	// (0x000831fb) list_medium_line_g2

0x9f77,	// (0x000831fb) list_medium_line_g3

0x9f77,	// (0x000831fb) list_medium_line_plain

0x9f77,	// (0x000831fb) list_medium_line_plain_t2

0x9f77,	// (0x000831fb) list_medium_line_plain_t3

0x9f77,	// (0x000831fb) list_medium_line_right_icon

0x9f77,	// (0x000831fb) list_medium_line_right_iconx2

0x9f77,	// (0x000831fb) list_medium_line_t2

0x9f77,	// (0x000831fb) list_medium_line_t2_g2

0x9f77,	// (0x000831fb) list_medium_line_t2_g3

0x9f77,	// (0x000831fb) list_medium_line_t2_right_icon

0x9f77,	// (0x000831fb) list_medium_line_t2_right_iconx2

0x9f77,	// (0x000831fb) list_medium_line_t3

0x9f77,	// (0x000831fb) list_medium_line_t3_g2

0x9f77,	// (0x000831fb) list_medium_line_t3_g3

0x9f77,	// (0x000831fb) list_medium_line_t3_right_iconx2

0x9f77,	// (0x000831fb) list_medium_line_t4_g4

0x9f77,	// (0x000831fb) list_medium_line_x2

0x9f77,	// (0x000831fb) list_medium_line_x2_t2_g2

0x9f77,	// (0x000831fb) list_medium_line_x2_t2_g3

0x9f77,	// (0x000831fb) list_medium_line_x2_t2_g4

0x9f77,	// (0x000831fb) list_medium_line_x2_t3

0x9f77,	// (0x000831fb) list_medium_line_x2_t3_g2

0x9f77,	// (0x000831fb) list_medium_line_x2_t3_g3

0x9f77,	// (0x000831fb) list_medium_line_x2_t3_g4

0x9f77,	// (0x000831fb) list_medium_line_x2_t4_g2

0x9f77,	// (0x000831fb) list_medium_line_x2_t4_g4

0x9f77,	// (0x000831fb) list_medium_line_x3

0x9f77,	// (0x000831fb) list_medium_line_x3_t4

0x9f77,	// (0x000831fb) list_medium_line_x3_t4_g4

0x9f77,	// (0x000831fb) list_medium_line_x4_t4

0x9f77,	// (0x000831fb) list_medium_line_x4_t4_g7

0x9f77,	// (0x000831fb) list_medium_line_x4_t5

0x0ba4,	// (0x00079e28) list_single_fs_dyc_pane_ParamLimits

0x0ba4,	// (0x00079e28) list_single_fs_dyc_pane

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g1

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g2

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g3

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g4

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g5

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x4_t4_g7_g6

0xa6f3,	// (0x00083977) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa6f3,	// (0x00083977) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa87,	// (0x00088d0b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa87,	// (0x00088d0b) list_medium_line_x4_t4_g7_g

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t1

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t2

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x4_t4_g7_t3

0xa749,	// (0x000839cd) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa749,	// (0x000839cd) list_medium_line_x4_t4_g7_t4

0xa749,	// (0x000839cd) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa749,	// (0x000839cd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa96,	// (0x00088d1a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa96,	// (0x00088d1a) list_medium_line_x4_t4_g7_t

0x0bb8,	// (0x00079e3c) list_single_dyc_row_pane_ParamLimits

0x0bb8,	// (0x00079e3c) list_single_dyc_row_pane

0x7bd2,	// (0x00080e56) call5_gesture_pane_ParamLimits

0x7bd2,	// (0x00080e56) call5_gesture_pane

0x7c28,	// (0x00080eac) call5_windows_pane_ParamLimits

0x7c28,	// (0x00080eac) call5_windows_pane

0x7d14,	// (0x00080f98) call5_swipe_1_pane_cp_ParamLimits

0x7d14,	// (0x00080f98) call5_swipe_1_pane_cp

0x7d20,	// (0x00080fa4) call5_swipe_2_pane_cp_ParamLimits

0x7d20,	// (0x00080fa4) call5_swipe_2_pane_cp

0xa9d8,	// (0x00083c5c) call5_image_pane_cp

0x7d2c,	// (0x00080fb0) popup_call5_audio_first_window_cp_ParamLimits

0x7d2c,	// (0x00080fb0) popup_call5_audio_first_window_cp

0x7d3a,	// (0x00080fbe) call5_swipe_1_pane_g1_cp_ParamLimits

0x7d3a,	// (0x00080fbe) call5_swipe_1_pane_g1_cp

0x7d47,	// (0x00080fcb) call5_swipe_1_pane_g2_cp

0x7d4f,	// (0x00080fd3) call5_swipe_1_pane_t1_cp_ParamLimits

0x7d4f,	// (0x00080fd3) call5_swipe_1_pane_t1_cp

0x7d3a,	// (0x00080fbe) call5_swipe_2_pane_g1_cp_ParamLimits

0x7d3a,	// (0x00080fbe) call5_swipe_2_pane_g1_cp

0x7d64,	// (0x00080fe8) call5_swipe_2_pane_g2_cp

0x7d6c,	// (0x00080ff0) call5_swipe_2_pane_t1_cp_ParamLimits

0x7d6c,	// (0x00080ff0) call5_swipe_2_pane_t1_cp

0x9fee,	// (0x00083272) main_sp_fs_email_pane

0x7d81,	// (0x00081005) main_sp_fs_listscroll_pane_te

0x7d8a,	// (0x0008100e) popup_sp_fs_action_menu_pane_ParamLimits

0x7d8a,	// (0x0008100e) popup_sp_fs_action_menu_pane

0xa72b,	// (0x000839af) bg_sp_fs_ctrlbar_pane_g1

0x7dcc,	// (0x00081050) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7dd5,	// (0x00081059) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc7bc,	// (0x00085a40) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa72b,	// (0x000839af) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb7f,	// (0x00088e03) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc964,	// (0x00085be8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc964,	// (0x00085be8) bg_sp_fs_ctrlbar_ddmenu_pane

0x7dde,	// (0x00081062) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7dde,	// (0x00081062) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7dea,	// (0x0008106e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7dea,	// (0x0008106e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb88,	// (0x00088e0c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb88,	// (0x00088e0c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7df6,	// (0x0008107a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7df6,	// (0x0008107a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa72b,	// (0x000839af) list_medium_line_t2_right_icon_g1

0xaf05,	// (0x00084189) list_medium_line_t2_right_icon_t1

0xaf05,	// (0x00084189) list_medium_line_t2_right_icon_t2

0x0001,

0xfb8d,	// (0x00088e11) list_medium_line_t2_right_icon_t

0xb522,	// (0x000847a6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb522,	// (0x000847a6) bg_sp_fs_ctrlbar_pane

0x7e90,	// (0x00081114) main_sp_fs_ctrlbar_button_pane_cp01

0x7e9a,	// (0x0008111e) main_sp_fs_ctrlbar_ddmenu_pane

0x7ea4,	// (0x00081128) main_sp_fs_ctrlbar_pane_g1

0x7eb0,	// (0x00081134) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb92,	// (0x00088e16) main_sp_fs_ctrlbar_pane_g

0x7ef0,	// (0x00081174) main_sp_fs_ctrlbar_pane_t1

0x7f2f,	// (0x000811b3) main_sp_fs_ctrlbar_pane

0x7f6e,	// (0x000811f2) main_sp_fs_listscroll_pane_te_cp01

0x0bd5,	// (0x00079e59) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0bd5,	// (0x00079e59) popup_sp_fs_action_menu_pane_cp01

0x9fee,	// (0x00083272) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9fee,	// (0x00083272) bg_sp_fs_highlight_list_pane_cp01

0xd48e,	// (0x00086712) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd48e,	// (0x00086712) sp_fs_action_menu_list_gene_pane_g1

0x7f98,	// (0x0008121c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7f98,	// (0x0008121c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfba0,	// (0x00088e24) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfba0,	// (0x00088e24) sp_fs_action_menu_list_gene_pane_g

0xd49d,	// (0x00086721) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd49d,	// (0x00086721) sp_fs_action_menu_list_gene_pane_t1

0xd4b5,	// (0x00086739) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd4b5,	// (0x00086739) sp_fs_action_menu_list_gene_pane

0x7fa5,	// (0x00081229) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7fa5,	// (0x00081229) popup_sp_fs_action_menu_bg_pane

0xd4d4,	// (0x00086758) sp_fs_action_menu_list_pane_ParamLimits

0xd4d4,	// (0x00086758) sp_fs_action_menu_list_pane

0x0bfa,	// (0x00079e7e) sp_fs_scroll_pane_cp01_ParamLimits

0x0bfa,	// (0x00079e7e) sp_fs_scroll_pane_cp01

0xaf05,	// (0x00084189) list_medium_line_plain_t2_t1

0xaf05,	// (0x00084189) list_medium_line_plain_t2_t2

0x0001,

0xfb8d,	// (0x00088e11) list_medium_line_plain_t2_t

0xaf05,	// (0x00084189) list_medium_line_plain_t3_t1

0xaf05,	// (0x00084189) list_medium_line_plain_t3_t2

0xaf05,	// (0x00084189) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000884d8) list_medium_line_plain_t3_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_x2_t2_g2_g

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g2_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_x2_t2_g2_t

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_x2_t4_g2_g

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t2

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t3

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0008842b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0008842b) list_medium_line_x2_t4_g2_t

0xa72b,	// (0x000839af) list_medium_line_t3_right_iconx2_g1

0xa72b,	// (0x000839af) list_medium_line_t3_right_iconx2_g2

0xa72b,	// (0x000839af) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000885f4) list_medium_line_t3_right_iconx2_g

0xaf05,	// (0x00084189) list_medium_line_t3_right_iconx2_t1

0xaf05,	// (0x00084189) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb8d,	// (0x00088e11) list_medium_line_t3_right_iconx2_t

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g1

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g2

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g3

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00088422) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00088422) list_medium_line_x3_t4_g4_g

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t1

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t2

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t3

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0008842b) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0008842b) list_medium_line_x3_t4_g4_t

0x0c20,	// (0x00079ea4) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c20,	// (0x00079ea4) list_single_dyc_row_text_pane_t1

0x0c69,	// (0x00079eed) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c69,	// (0x00079eed) list_single_dyc_row_text_pane_t2

0xd4f4,	// (0x00086778) list_single_dyc_row_text_pane_t3_ParamLimits

0xd4f4,	// (0x00086778) list_single_dyc_row_text_pane_t3

0x0005,

0xfba5,	// (0x00088e29) list_single_dyc_row_text_pane_t_ParamLimits

0xfba5,	// (0x00088e29) list_single_dyc_row_text_pane_t

0xd518,	// (0x0008679c) list_single_dyc_row_pane_g1_ParamLimits

0xd518,	// (0x0008679c) list_single_dyc_row_pane_g1

0xd524,	// (0x000867a8) list_single_dyc_row_pane_g2_ParamLimits

0xd524,	// (0x000867a8) list_single_dyc_row_pane_g2

0xd530,	// (0x000867b4) list_single_dyc_row_pane_g3_ParamLimits

0xd530,	// (0x000867b4) list_single_dyc_row_pane_g3

0xd543,	// (0x000867c7) list_single_dyc_row_pane_g4_ParamLimits

0xd543,	// (0x000867c7) list_single_dyc_row_pane_g4

0x0006,

0xfbb2,	// (0x00088e36) list_single_dyc_row_pane_g_ParamLimits

0xfbb2,	// (0x00088e36) list_single_dyc_row_pane_g

0xd595,	// (0x00086819) list_single_dyc_row_text_pane_ParamLimits

0xd595,	// (0x00086819) list_single_dyc_row_text_pane

0x9f77,	// (0x000831fb) bg_sp_fs_scroll_pane

0x7fb3,	// (0x00081237) thumb_sp_fs_scroll_pane

0xa6e5,	// (0x00083969) list_medium_line_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g1

0xa735,	// (0x000839b9) list_medium_line_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t1

0xa6e5,	// (0x00083969) list_medium_line_x2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_x2_g

0xa735,	// (0x000839b9) list_medium_line_x2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t1

0xa6e5,	// (0x00083969) list_medium_line_x3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x3_g1

0x7fbc,	// (0x00081240) list_medium_line_x3_g2_ParamLimits

0x7fbc,	// (0x00081240) list_medium_line_x3_g2

0x0001,

0xfbc1,	// (0x00088e45) list_medium_line_x3_g_ParamLimits

0xfbc1,	// (0x00088e45) list_medium_line_x3_g

0x7fca,	// (0x0008124e) list_medium_line_x3_t1_ParamLimits

0x7fca,	// (0x0008124e) list_medium_line_x3_t1

0x7fde,	// (0x00081262) thumb_sp_fs_scroll_pane_g1

0x7fe7,	// (0x0008126b) thumb_sp_fs_scroll_pane_g2

0x7ff0,	// (0x00081274) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbc6,	// (0x00088e4a) thumb_sp_fs_scroll_pane_g

0x7fde,	// (0x00081262) bg_sp_fs_scroll_pane_g1

0x7fe7,	// (0x0008126b) bg_sp_fs_scroll_pane_g2

0x7ff0,	// (0x00081274) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbc6,	// (0x00088e4a) bg_sp_fs_scroll_pane_g

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g1

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g2

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g3

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00088422) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00088422) list_medium_line_x2_t3_g4_g

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t1

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t2

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_x2_t3_g4_t

0xa6e5,	// (0x00083969) list_medium_line_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_g2_g

0xa735,	// (0x000839b9) list_medium_line_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_g2_t1

0xa6e5,	// (0x00083969) list_medium_line_t3_g2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g2_g1

0xa6e5,	// (0x00083969) list_medium_line_t3_g2_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0008841d) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0008841d) list_medium_line_t3_g2_g

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t1

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t2

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_t3_g2_t

0xa72b,	// (0x000839af) list_medium_line_right_icon_g1

0xaf05,	// (0x00084189) list_medium_line_right_icon_t1

0xa6e5,	// (0x00083969) list_medium_line_t2_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g1

0xa735,	// (0x000839b9) list_medium_line_t2_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_t1

0xa735,	// (0x000839b9) list_medium_line_t2_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_t2_t

0xa6e5,	// (0x00083969) list_medium_line_t3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g1

0xa735,	// (0x000839b9) list_medium_line_t3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_t1

0xa735,	// (0x000839b9) list_medium_line_t3_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_t2

0xa735,	// (0x000839b9) list_medium_line_t3_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_t3_t

0xa6e5,	// (0x00083969) list_medium_line_g3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g3_g1

0xa6e5,	// (0x00083969) list_medium_line_g3_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g3_g2

0xa6e5,	// (0x00083969) list_medium_line_g3_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0008840f) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0008840f) list_medium_line_g3_g

0xa735,	// (0x000839b9) list_medium_line_g3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_g3_t1

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g1

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g2

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0008840f) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0008840f) list_medium_line_t2_g3_g

0xa735,	// (0x000839b9) list_medium_line_t2_g3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_g3_t1

0xa735,	// (0x000839b9) list_medium_line_t2_g3_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000883f2) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000883f2) list_medium_line_t2_g3_t

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g1_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g1

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g2_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g2

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g3_ParamLimits

0xa6e5,	// (0x00083969) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0008840f) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0008840f) list_medium_line_t3_g3_g

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t1_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t1

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t2_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t2

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t3_ParamLimits

0xa735,	// (0x000839b9) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00088416) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00088416) list_medium_line_t3_g3_t

0xa72b,	// (0x000839af) list_medium_line_right_iconx2_g1

0xa72b,	// (0x000839af) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00088310) list_medium_line_right_iconx2_g

0xaf05,	// (0x00084189) list_medium_line_right_iconx2_t1

0xa72b,	// (0x000839af) list_medium_line_t2_right_iconx2_g1

0xa72b,	// (0x000839af) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00088310) list_medium_line_t2_right_iconx2_g

0xaf05,	// (0x00084189) list_medium_line_t2_right_iconx2_t1

0xaf05,	// (0x00084189) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb8d,	// (0x00088e11) list_medium_line_t2_right_iconx2_t

0xaf05,	// (0x00084189) list_medium_line_x4_t4_t1

0xaf05,	// (0x00084189) list_medium_line_x4_t4_t2

0xaf05,	// (0x00084189) list_medium_line_x4_t4_t3

0xaf05,	// (0x00084189) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000884df) list_medium_line_x4_t4_t

0x803c,	// (0x000812c0) tport_appsw_pane_ParamLimits

0x803c,	// (0x000812c0) tport_appsw_pane

0x8054,	// (0x000812d8) tport_contact_pane_ParamLimits

0x8054,	// (0x000812d8) tport_contact_pane

0x806c,	// (0x000812f0) tport_listscroll_pane_ParamLimits

0x806c,	// (0x000812f0) tport_listscroll_pane

0x8086,	// (0x0008130a) cell_tport_appsw_pane_ParamLimits

0x8086,	// (0x0008130a) cell_tport_appsw_pane

0xb500,	// (0x00084784) tport_appsw_pane_g1_ParamLimits

0xb500,	// (0x00084784) tport_appsw_pane_g1

0x80c6,	// (0x0008134a) tport_contact_pane_g1

0x80cf,	// (0x00081353) tport_contact_pane_t1

0x80dd,	// (0x00081361) tport_contact_pane_t2

0x0001,

0xfbcd,	// (0x00088e51) tport_contact_pane_t

0x80eb,	// (0x0008136f) list_tport_pane

0x80f4,	// (0x00081378) scroll_pane_cp_030

0x8105,	// (0x00081389) cell_tport_appsw_pane_g1

0x8115,	// (0x00081399) cell_tport_appsw_pane_t1

0x8123,	// (0x000813a7) grid_highlight_pane_cp019

0x812b,	// (0x000813af) list_tport_double_graphic_pane_ParamLimits

0x812b,	// (0x000813af) list_tport_double_graphic_pane

0x9fee,	// (0x00083272) list_highlight_pane_cp023_ParamLimits

0x9fee,	// (0x00083272) list_highlight_pane_cp023

0x8138,	// (0x000813bc) list_tport_double_graphic_pane_g1_ParamLimits

0x8138,	// (0x000813bc) list_tport_double_graphic_pane_g1

0x8145,	// (0x000813c9) list_tport_double_graphic_pane_t1_ParamLimits

0x8145,	// (0x000813c9) list_tport_double_graphic_pane_t1

0x815a,	// (0x000813de) list_tport_double_graphic_pane_t2_ParamLimits

0x815a,	// (0x000813de) list_tport_double_graphic_pane_t2

0x0001,

0xfbd9,	// (0x00088e5d) list_tport_double_graphic_pane_t_ParamLimits

0xfbd9,	// (0x00088e5d) list_tport_double_graphic_pane_t

0x9f77,	// (0x000831fb) main_cale_note_pane

0x5688,	// (0x0007e90c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5688,	// (0x0007e90c) cell_vitu2_function_top_wide_pane_cp01

0x77c6,	// (0x00080a4a) wait_bar_pane_cp05_ParamLimits

0x9fee,	// (0x00083272) listscroll_cmail_pane

0x8174,	// (0x000813f8) list_cmail_pane

0x818b,	// (0x0008140f) list_cmail_body_pane

0x81a1,	// (0x00081425) list_single_cmail_header_caption_pane

0x81b8,	// (0x0008143c) list_single_cmail_header_detail_pane_ParamLimits

0x81b8,	// (0x0008143c) list_single_cmail_header_detail_pane

0x81e6,	// (0x0008146a) list_single_cmail_header_caption_pane_t1

0x0d9e,	// (0x0007a022) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0d9e,	// (0x0007a022) list_single_cmail_header_detail_pane_g1

0xe90a,	// (0x00087b8e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe90a,	// (0x00087b8e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbde,	// (0x00088e62) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbde,	// (0x00088e62) list_single_cmail_header_detail_pane_g

0x0db6,	// (0x0007a03a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0db6,	// (0x0007a03a) list_single_cmail_header_detail_pane_t1

0x0df4,	// (0x0007a078) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0df4,	// (0x0007a078) list_single_cmail_header_editor_pane_bg

0x7632,	// (0x000808b6) list_cmail_body_pane_g1

0x820a,	// (0x0008148e) list_cmail_body_pane_t1

0xea31,	// (0x00087cb5) list_single_cmail_header_editor_pane_bg_g1

0xabfb,	// (0x00083e7f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xea41,	// (0x00087cc5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xea39,	// (0x00087cbd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xecac,	// (0x00087f30) list_single_cmail_header_editor_pane_bg_g1_copy4

0xea61,	// (0x00087ce5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xea51,	// (0x00087cd5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xea59,	// (0x00087cdd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabdb,	// (0x00083e5f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8218,	// (0x0008149c) calenote_gesture_pane_ParamLimits

0x8218,	// (0x0008149c) calenote_gesture_pane

0x8238,	// (0x000814bc) calenote_window_pane_ParamLimits

0x8238,	// (0x000814bc) calenote_window_pane

0x8254,	// (0x000814d8) popup_note_window_cp01

0x825d,	// (0x000814e1) calenote_swipe_1_pane_ParamLimits

0x825d,	// (0x000814e1) calenote_swipe_1_pane

0x7d20,	// (0x00080fa4) calenote_swipe_2_pane_ParamLimits

0x7d20,	// (0x00080fa4) calenote_swipe_2_pane

0x7d3a,	// (0x00080fbe) calenote_swipe_1_pane_g1_ParamLimits

0x7d3a,	// (0x00080fbe) calenote_swipe_1_pane_g1

0x827b,	// (0x000814ff) calenote_swipe_1_pane_g2_ParamLimits

0x827b,	// (0x000814ff) calenote_swipe_1_pane_g2

0x0001,

0xfbea,	// (0x00088e6e) calenote_swipe_1_pane_g_ParamLimits

0xfbea,	// (0x00088e6e) calenote_swipe_1_pane_g

0x8287,	// (0x0008150b) calenote_swipe_1_pane_t1_ParamLimits

0x8287,	// (0x0008150b) calenote_swipe_1_pane_t1

0x7d3a,	// (0x00080fbe) calenote_swipe_2_pane_g1_ParamLimits

0x7d3a,	// (0x00080fbe) calenote_swipe_2_pane_g1

0x82a6,	// (0x0008152a) calenote_swipe_2_pane_g2_ParamLimits

0x82a6,	// (0x0008152a) calenote_swipe_2_pane_g2

0x0001,

0xfbef,	// (0x00088e73) calenote_swipe_2_pane_g_ParamLimits

0xfbef,	// (0x00088e73) calenote_swipe_2_pane_g

0x82b2,	// (0x00081536) calenote_swipe_2_pane_t1_ParamLimits

0x82b2,	// (0x00081536) calenote_swipe_2_pane_t1

0x9f77,	// (0x000831fb) main_mup_navstr_pane

0x465f,	// (0x0007d8e3) main_mup3_pane_t7_ParamLimits

0x465f,	// (0x0007d8e3) main_mup3_pane_t7

0xe4e0,	// (0x00087764) main_mp4_pane_g6_ParamLimits

0xe4e0,	// (0x00087764) main_mp4_pane_g6

0xe6fe,	// (0x00087982) main_image3_pane_t4_ParamLimits

0xe6fe,	// (0x00087982) main_image3_pane_t4

0x82d9,	// (0x0008155d) popup_navstr_preview_pane_ParamLimits

0x82d9,	// (0x0008155d) popup_navstr_preview_pane

0x82ed,	// (0x00081571) scroll_navstr_pane_ParamLimits

0x82ed,	// (0x00081571) scroll_navstr_pane

0x9f77,	// (0x000831fb) bg_popup_preview_window_pane_cp04

0x8301,	// (0x00081585) popup_navstr_preview_pane_t1

0x830f,	// (0x00081593) scroll_navstr_pane_g1_ParamLimits

0x830f,	// (0x00081593) scroll_navstr_pane_g1

0x8323,	// (0x000815a7) scroll_navstr_pane_t1_ParamLimits

0x8323,	// (0x000815a7) scroll_navstr_pane_t1

0x8272,	// (0x000814f6) bg_button_pane_cp014

0x8272,	// (0x000814f6) bg_button_pane_cp030

0x7b78,	// (0x00080dfc) list_double_fisheye_pane_g4_ParamLimits

0x7b78,	// (0x00080dfc) list_double_fisheye_pane_g4

0x7b84,	// (0x00080e08) list_double_fisheye_pane_g5_ParamLimits

0x7b84,	// (0x00080e08) list_double_fisheye_pane_g5

0xefaf,	// (0x00088233) sp_fs_scroll_pane_cp03

0x7ea4,	// (0x00081128) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x7eb0,	// (0x00081134) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb92,	// (0x00088e16) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7ef0,	// (0x00081174) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8183,	// (0x00081407) sp_fs_scroll_pane_cp02

0xa920,	// (0x00083ba4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa920,	// (0x00083ba4) popup_sp_fs_calendar_preview_list_single_pane

0x9f77,	// (0x000831fb) main_cam6_pano_pane

0x9fee,	// (0x00083272) main_mup3_pane_ParamLimits

0x9f77,	// (0x000831fb) main_phacti_pane

0x7699,	// (0x0008091d) bg_button_pane_cp11

0x76b3,	// (0x00080937) main_mobtv_info_pane_g2_ParamLimits

0x76b3,	// (0x00080937) main_mobtv_info_pane_g2

0x0001,

0xfaf7,	// (0x00088d7b) main_mobtv_info_pane_g_ParamLimits

0xfaf7,	// (0x00088d7b) main_mobtv_info_pane_g

0xa735,	// (0x000839b9) sc_clock_pane_t5_ParamLimits

0xa735,	// (0x000839b9) sc_clock_pane_t5

0xb500,	// (0x00084784) main_radioblah_pane_g1_ParamLimits

0xb50e,	// (0x00084792) main_radioblah_pane_t3_ParamLimits

0xb50e,	// (0x00084792) main_radioblah_pane_t3

0xb50e,	// (0x00084792) main_radioblah_pane_t4_ParamLimits

0xb50e,	// (0x00084792) main_radioblah_pane_t4

0x9fee,	// (0x00083272) main_radioblah_text_pane_ParamLimits

0x9fee,	// (0x00083272) main_radioblah_text_pane

0x7a93,	// (0x00080d17) main_radioblah_info_pane_g1_ParamLimits

0x7ad7,	// (0x00080d5b) main_radioblah_info_pane_t4_ParamLimits

0x7ad7,	// (0x00080d5b) main_radioblah_info_pane_t4

0x9fee,	// (0x00083272) main_sp_fs_calendar_pane

0x833a,	// (0x000815be) main_phacti_pane_g1

0x834b,	// (0x000815cf) phacti_note_pane_ParamLimits

0x834b,	// (0x000815cf) phacti_note_pane

0x835f,	// (0x000815e3) phacti_term_pane_ParamLimits

0x835f,	// (0x000815e3) phacti_term_pane

0x8374,	// (0x000815f8) phacti_note_pane_t1_ParamLimits

0x8374,	// (0x000815f8) phacti_note_pane_t1

0xd5de,	// (0x00086862) phacti_term_pane_g1

0xd5e6,	// (0x0008686a) phacti_term_pane_t1_ParamLimits

0xd5e6,	// (0x0008686a) phacti_term_pane_t1

0x838b,	// (0x0008160f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x8393,	// (0x00081617) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbf9,	// (0x00088e7d) popup_sp_fs_calendar_preview_list_single_pane_g

0x839b,	// (0x0008161f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x839b,	// (0x0008161f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x83b1,	// (0x00081635) aid_popup_sp_fs_bg_corner_pane

0xa72b,	// (0x000839af) popup_sp_fs_calendar_preview_bg_pane_g1

0x9f77,	// (0x000831fb) popup_sp_fs_calendar_preview_bg_pane

0x83b9,	// (0x0008163d) popup_sp_fs_calendar_preview_list_pane

0x83c1,	// (0x00081645) bg_main_sp_fs_cale_pane_ParamLimits

0x83c1,	// (0x00081645) bg_main_sp_fs_cale_pane

0x83d9,	// (0x0008165d) listscroll_cale_mrui_pane_ParamLimits

0x83d9,	// (0x0008165d) listscroll_cale_mrui_pane

0xd01e,	// (0x000862a2) listscroll_sp_fs_schedule_track_pane

0xd619,	// (0x0008689d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd619,	// (0x0008689d) main_sp_fs_ctrlbar_pane_cp01

0xd01e,	// (0x000862a2) main_sp_fs_ribbon_pane

0xd62f,	// (0x000868b3) popup_sp_fs_cale_preview_window

0xec5d,	// (0x00087ee1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xec5d,	// (0x00087ee1) list_single_sp_fs_schedule_track_pane

0x475d,	// (0x0007d9e1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x475d,	// (0x0007d9e1) bg_sp_fs_highlight_list_pane_cp03

0x4318,	// (0x0007d59c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x4318,	// (0x0007d59c) list_single_sp_fs_schedule_track_pane_g1

0x4318,	// (0x0007d59c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x4318,	// (0x0007d59c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbfe,	// (0x00088e82) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbfe,	// (0x00088e82) list_single_sp_fs_schedule_track_pane_g

0x83f1,	// (0x00081675) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x83f1,	// (0x00081675) list_single_sp_fs_schedule_track_pane_t1

0x8403,	// (0x00081687) sp_fs_schedule_track_pane_ParamLimits

0x8403,	// (0x00081687) sp_fs_schedule_track_pane

0xd026,	// (0x000862aa) sp_fs_schedule_track_pane_g1

0xd026,	// (0x000862aa) sp_fs_schedule_track_pane_g2

0xd026,	// (0x000862aa) sp_fs_schedule_track_pane_g3

0xd026,	// (0x000862aa) sp_fs_schedule_track_pane_g4

0xd026,	// (0x000862aa) sp_fs_schedule_track_pane_g5

0x0004,

0xf7d6,	// (0x00088a5a) sp_fs_schedule_track_pane_g

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g1

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g2

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g3

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g4

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g5

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g6

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g7

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g8

0xd026,	// (0x000862aa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc03,	// (0x00088e87) bg_sp_fs_schedule_viewer_highlight_g

0xd01e,	// (0x000862a2) bg_main_sp_fs_ribbon_pane

0xd026,	// (0x000862aa) main_sp_fs_ribbon_pane_g1

0x840f,	// (0x00081693) main_sp_fs_ribbon_pane_t1

0x840f,	// (0x00081693) main_sp_fs_ribbon_pane_t2

0x840f,	// (0x00081693) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc16,	// (0x00088e9a) main_sp_fs_ribbon_pane_t

0xd01e,	// (0x000862a2) main_sp_fs_ribbon_scheduler_pane

0xd026,	// (0x000862aa) bg_main_sp_fs_ribbon_pane_g1

0xd026,	// (0x000862aa) bg_main_sp_fs_ribbon_pane_g2

0xd026,	// (0x000862aa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6ae,	// (0x00088932) bg_main_sp_fs_ribbon_pane_g

0xd026,	// (0x000862aa) main_sp_fs_ribbon_scheduler_pane_g1

0xd026,	// (0x000862aa) main_sp_fs_ribbon_scheduler_pane_g2

0xd026,	// (0x000862aa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6ae,	// (0x00088932) main_sp_fs_ribbon_scheduler_pane_g

0x841d,	// (0x000816a1) list_cale_mrui_pane

0x842a,	// (0x000816ae) sp_fs_scroll_pane_cp07_ParamLimits

0x842a,	// (0x000816ae) sp_fs_scroll_pane_cp07

0x475d,	// (0x0007d9e1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x475d,	// (0x0007d9e1) bg_sp_fs_schedule_viewer_highlight

0xd01e,	// (0x000862a2) list_single_sp_fs_schedule_track_pane_cp01

0xd01e,	// (0x000862a2) list_sp_fs_schedule_track_pane

0x8446,	// (0x000816ca) sp_fs_scroll_pane_cp06_ParamLimits

0x8446,	// (0x000816ca) sp_fs_scroll_pane_cp06

0xa72b,	// (0x000839af) bgmain_sp_fs_calendar_pane_g1

0x0e0d,	// (0x0007a091) list_single_cale_mrui_pane_ParamLimits

0x0e0d,	// (0x0007a091) list_single_cale_mrui_pane

0xd641,	// (0x000868c5) list_single_cale_mrui_row_pane_ParamLimits

0xd641,	// (0x000868c5) list_single_cale_mrui_row_pane

0xd64e,	// (0x000868d2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd64e,	// (0x000868d2) list_single_cale_mrui_row_pane_g1

0xd686,	// (0x0008690a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd686,	// (0x0008690a) list_single_cale_mrui_row_pane_t1

0x0e2e,	// (0x0007a0b2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e2e,	// (0x0007a0b2) list_single_cale_mrui_row_pane_t2

0xd698,	// (0x0008691c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd698,	// (0x0008691c) list_single_cale_mrui_row_pane_t3

0xd6c7,	// (0x0008694b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd6c7,	// (0x0008694b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc24,	// (0x00088ea8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc24,	// (0x00088ea8) list_single_cale_mrui_row_pane_t

0x0e96,	// (0x0007a11a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e96,	// (0x0007a11a) list_single_cmail_header_editor_pane_bg_cp01

0x0ec4,	// (0x0007a148) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ec4,	// (0x0007a148) list_single_cmail_header_editor_pane_bg_cp02

0x8467,	// (0x000816eb) main_radioblah_text_pane_t1_ParamLimits

0x8467,	// (0x000816eb) main_radioblah_text_pane_t1

0x8481,	// (0x00081705) cam6_indi_pane_cp01

0x8489,	// (0x0008170d) cam6_mode_pane_cp01

0x8491,	// (0x00081715) cam6_pano_pane

0xd6f6,	// (0x0008697a) cam6_zoom_pane_cp01

0xd6fe,	// (0x00086982) cam6_pano_image_pane

0xd709,	// (0x0008698d) cam6_pano_pane_g1

0x7632,	// (0x000808b6) cam6_pano_pane_g2

0xd712,	// (0x00086996) cam6_pano_pane_g3

0xd71b,	// (0x0008699f) cam6_pano_pane_g4

0xd2b8,	// (0x0008653c) cam6_pano_pane_g5

0xd724,	// (0x000869a8) cam6_pano_pane_g6

0xd72e,	// (0x000869b2) cam6_pano_pane_g7

0xd736,	// (0x000869ba) cam6_pano_pane_g8

0xd73f,	// (0x000869c3) cam6_pano_pane_g9

0x0008,

0xfc2d,	// (0x00088eb1) cam6_pano_pane_g

0x9f77,	// (0x000831fb) main_browser_tag_pane

0x82d1,	// (0x00081555) grid_navstr_albumart_pane

0xd74a,	// (0x000869ce) cell_navstr_albumart_pane_ParamLimits

0xd74a,	// (0x000869ce) cell_navstr_albumart_pane

0xd76a,	// (0x000869ee) cell_navstr_albumart_pane_g1

0xd772,	// (0x000869f6) cell_navstr_albumart_pane_g2

0xd77a,	// (0x000869fe) cell_navstr_albumart_pane_g3

0xd782,	// (0x00086a06) cell_navstr_albumart_pane_g4

0x0003,

0xfc40,	// (0x00088ec4) cell_navstr_albumart_pane_g

0x849a,	// (0x0008171e) bt_list_pane_ParamLimits

0x849a,	// (0x0008171e) bt_list_pane

0x84ae,	// (0x00081732) bt_list_pane_t1

0x84bd,	// (0x00081741) bt_list_pane_t2

0x0001,

0xfc49,	// (0x00088ecd) bt_list_pane_t

0x9f77,	// (0x000831fb) main_cale_prevew_pane

0x84cc,	// (0x00081750) popup_cale_preview_window_ParamLimits

0x84cc,	// (0x00081750) popup_cale_preview_window

0x9fee,	// (0x00083272) bg_popup_preview_window_pane_cp05_ParamLimits

0x9fee,	// (0x00083272) bg_popup_preview_window_pane_cp05

0xd78a,	// (0x00086a0e) list_cale_preview_pane_ParamLimits

0xd78a,	// (0x00086a0e) list_cale_preview_pane

0x84e5,	// (0x00081769) list_double_cale_preview_pane_ParamLimits

0x84e5,	// (0x00081769) list_double_cale_preview_pane

0xea69,	// (0x00087ced) list_single_cale_preview_pane_ParamLimits

0xea69,	// (0x00087ced) list_single_cale_preview_pane

0x84f7,	// (0x0008177b) list_single_cale_preview_pane_g1

0x84ff,	// (0x00081783) list_single_cale_preview_pane_t1_ParamLimits

0x84ff,	// (0x00081783) list_single_cale_preview_pane_t1

0x8514,	// (0x00081798) list_double_cale_preview_pane_g1

0x851c,	// (0x000817a0) list_double_cale_preview_pane_t1_ParamLimits

0x851c,	// (0x000817a0) list_double_cale_preview_pane_t1

0x8531,	// (0x000817b5) list_double_cale_preview_pane_t2_ParamLimits

0x8531,	// (0x000817b5) list_double_cale_preview_pane_t2

0x0001,

0xfc4e,	// (0x00088ed2) list_double_cale_preview_pane_t_ParamLimits

0xfc4e,	// (0x00088ed2) list_double_cale_preview_pane_t

0x9f77,	// (0x000831fb) main_ezdial_pane

0x9fee,	// (0x00083272) main_sp_fs_email_pane_ParamLimits

0x7e10,	// (0x00081094) cmail_ddmenu_btn01_pane_ParamLimits

0x7e10,	// (0x00081094) cmail_ddmenu_btn01_pane

0x7e23,	// (0x000810a7) cmail_ddmenu_btn02_pane_ParamLimits

0x7e23,	// (0x000810a7) cmail_ddmenu_btn02_pane

0x7e7e,	// (0x00081102) cmail_ddmenu_btn03_pane_ParamLimits

0x7e7e,	// (0x00081102) cmail_ddmenu_btn03_pane

0x7f2f,	// (0x000811b3) main_sp_fs_ctrlbar_pane_ParamLimits

0x7f6e,	// (0x000811f2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x818b,	// (0x0008140f) list_cmail_body_pane_ParamLimits

0x81f4,	// (0x00081478) bg_button_pane_cp12

0x81fd,	// (0x00081481) list_single_cmail_header_detail_pane_g3_ParamLimits

0x81fd,	// (0x00081481) list_single_cmail_header_detail_pane_g3

0xd5ba,	// (0x0008683e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd5ba,	// (0x0008683e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbe5,	// (0x00088e69) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbe5,	// (0x00088e69) list_single_cmail_header_detail_pane_t

0xd5fb,	// (0x0008687f) phacti_term_pane_t2_ParamLimits

0xd5fb,	// (0x0008687f) phacti_term_pane_t2

0x0001,

0xfbf4,	// (0x00088e78) phacti_term_pane_t_ParamLimits

0xfbf4,	// (0x00088e78) phacti_term_pane_t

0xd796,	// (0x00086a1a) aid_size_list_single_double

0x8549,	// (0x000817cd) popup_ezdial_listscroll_window

0xd7a2,	// (0x00086a26) popup_number_entry_window_cp01

0xa9d8,	// (0x00083c5c) bg_popup_call_pane_cp09

0xd7af,	// (0x00086a33) ezdial_list_pane

0xd7b7,	// (0x00086a3b) scroll_pane_cp23

0xb522,	// (0x000847a6) bg_button_pane_cp028_ParamLimits

0xb522,	// (0x000847a6) bg_button_pane_cp028

0x8560,	// (0x000817e4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8560,	// (0x000817e4) cmail_ddmenu_btn01_pane_g1

0x856c,	// (0x000817f0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x856c,	// (0x000817f0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc53,	// (0x00088ed7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc53,	// (0x00088ed7) cmail_ddmenu_btn01_pane_g

0xd7bf,	// (0x00086a43) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd7bf,	// (0x00086a43) cmail_ddmenu_btn01_pane_t1

0xb522,	// (0x000847a6) bg_button_pane_cp029_ParamLimits

0xb522,	// (0x000847a6) bg_button_pane_cp029

0x8578,	// (0x000817fc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8578,	// (0x000817fc) cmail_ddmenu_btn02_pane_g1

0x8590,	// (0x00081814) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8590,	// (0x00081814) cmail_ddmenu_btn02_pane_t1

0x9fee,	// (0x00083272) bg_button_pane_cp031_ParamLimits

0x9fee,	// (0x00083272) bg_button_pane_cp031

0x8578,	// (0x000817fc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8578,	// (0x000817fc) cmail_ddmenu_btn03_pane_g1

0x8590,	// (0x00081814) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8590,	// (0x00081814) cmail_ddmenu_btn03_pane_t1

0xa735,	// (0x000839b9) cell_dialer2_keypad_pane_t1_ParamLimits

0xd2f6,	// (0x0008657a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xd2f6,	// (0x0008657a) cell_dialer2_keypad_pane_t1_copy1

0x7243,	// (0x000804c7) ncimui_group_button_pane

0x9fee,	// (0x00083272) main_sp_fs_calendar_pane_ParamLimits

0x81a1,	// (0x00081425) list_single_cmail_header_caption_pane_ParamLimits

0xd610,	// (0x00086894) aid_recal_txt_sm_pane

0x9f77,	// (0x000831fb) mian_recal_day_pane

0xd62f,	// (0x000868b3) popup_sp_fs_cale_preview_window_ParamLimits

0xd7d4,	// (0x00086a58) list_recal_day_pane

0xd816,	// (0x00086a9a) list_single_recal_day_pane_ParamLimits

0xd816,	// (0x00086a9a) list_single_recal_day_pane

0xd828,	// (0x00086aac) list_single_recal_day_pane_g1_ParamLimits

0xd828,	// (0x00086aac) list_single_recal_day_pane_g1

0xd834,	// (0x00086ab8) list_single_recal_day_pane_g2_ParamLimits

0xd834,	// (0x00086ab8) list_single_recal_day_pane_g2

0xd840,	// (0x00086ac4) list_single_recal_day_pane_g3_ParamLimits

0xd840,	// (0x00086ac4) list_single_recal_day_pane_g3

0x0ee4,	// (0x0007a168) list_single_recal_day_pane_g4_ParamLimits

0x0ee4,	// (0x0007a168) list_single_recal_day_pane_g4

0xd84c,	// (0x00086ad0) list_single_recal_day_pane_g5_ParamLimits

0xd84c,	// (0x00086ad0) list_single_recal_day_pane_g5

0xd858,	// (0x00086adc) list_single_recal_day_pane_g6_ParamLimits

0xd858,	// (0x00086adc) list_single_recal_day_pane_g6

0x0004,

0xfc62,	// (0x00088ee6) list_single_recal_day_pane_g_ParamLimits

0xfc62,	// (0x00088ee6) list_single_recal_day_pane_g

0xd86c,	// (0x00086af0) list_single_recal_day_pane_t1

0xd87e,	// (0x00086b02) list_single_recal_day_pane_t2

0x0001,

0xfc6d,	// (0x00088ef1) list_single_recal_day_pane_t

0x85b4,	// (0x00081838) ncimui_query_button_pane_ParamLimits

0x85b4,	// (0x00081838) ncimui_query_button_pane

0x85c4,	// (0x00081848) ncimui_query_button_pane_t1_ParamLimits

0x85c4,	// (0x00081848) ncimui_query_button_pane_t1

0xd890,	// (0x00086b14) ncimui_query_button_pane_t2_ParamLimits

0xd890,	// (0x00086b14) ncimui_query_button_pane_t2

0x0001,

0xfc72,	// (0x00088ef6) ncimui_query_button_pane_t_ParamLimits

0xfc72,	// (0x00088ef6) ncimui_query_button_pane_t

0x85d7,	// (0x0008185b) query_button_pane_ParamLimits

0x85d7,	// (0x0008185b) query_button_pane

0x9f77,	// (0x000831fb) bg_button_pane_cp0028

0xd8a3,	// (0x00086b27) query_button_pane_t1

0x3990,	// (0x0007cc14) main_tport_pane_ParamLimits

0x7ff9,	// (0x0008127d) bg_popup_window_pane_cp01_ParamLimits

0x7ff9,	// (0x0008127d) bg_popup_window_pane_cp01

0x8014,	// (0x00081298) heading_pane_cp08_ParamLimits

0x8014,	// (0x00081298) heading_pane_cp08

0x8027,	// (0x000812ab) heading_pane_cp07_ParamLimits

0x8027,	// (0x000812ab) heading_pane_cp07

0x8105,	// (0x00081389) cell_tport_appsw_pane_g2

0x0002,

0xfbd2,	// (0x00088e56) cell_tport_appsw_pane_g

0xb5bd,	// (0x00084841) input_candi_list_open_g1

0xada4,	// (0x00084028) list_cale_time_pane_g6_ParamLimits

0xada4,	// (0x00084028) list_cale_time_pane_g6

0x3f9d,	// (0x0007d221) aid_size_touch_calib_1_ParamLimits

0x3f9d,	// (0x0007d221) aid_size_touch_calib_1

0x3faf,	// (0x0007d233) aid_size_touch_calib_2_ParamLimits

0x3faf,	// (0x0007d233) aid_size_touch_calib_2

0x3fc7,	// (0x0007d24b) aid_size_touch_calib_3_ParamLimits

0x3fc7,	// (0x0007d24b) aid_size_touch_calib_3

0x3fe5,	// (0x0007d269) aid_size_touch_calib_4_ParamLimits

0x3fe5,	// (0x0007d269) aid_size_touch_calib_4

0x3ffd,	// (0x0007d281) main_touch_calib_button_group_pane_ParamLimits

0x3ffd,	// (0x0007d281) main_touch_calib_button_group_pane

0x4015,	// (0x0007d299) main_touch_calib_pane_g1_ParamLimits

0x4027,	// (0x0007d2ab) main_touch_calib_pane_g2_ParamLimits

0x4039,	// (0x0007d2bd) main_touch_calib_pane_g3_ParamLimits

0x404b,	// (0x0007d2cf) main_touch_calib_pane_g4_ParamLimits

0xf65c,	// (0x000888e0) main_touch_calib_pane_g_ParamLimits

0x405d,	// (0x0007d2e1) main_touch_calib_pane_t1_ParamLimits

0x4077,	// (0x0007d2fb) main_touch_calib_pane_t2_ParamLimits

0x4091,	// (0x0007d315) main_touch_calib_pane_t3_ParamLimits

0x40a5,	// (0x0007d329) main_touch_calib_pane_t4_ParamLimits

0x40b9,	// (0x0007d33d) main_touch_calib_pane_t5_ParamLimits

0xf665,	// (0x000888e9) main_touch_calib_pane_t_ParamLimits

0xd086,	// (0x0008630a) list_single_fp_cale_pane_g3_ParamLimits

0xd086,	// (0x0008630a) list_single_fp_cale_pane_g3

0x9fee,	// (0x00083272) bg_button_pane_cp012_ParamLimits

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp03_ParamLimits

0x5f65,	// (0x0007f1e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x9fee,	// (0x00083272) bg_vkb2_func_pane_cp04_ParamLimits

0x71ce,	// (0x00080452) main_ncimui_button_group_pane_ParamLimits

0x71ce,	// (0x00080452) main_ncimui_button_group_pane

0x722e,	// (0x000804b2) main_ncimui_pane_t3_ParamLimits

0x722e,	// (0x000804b2) main_ncimui_pane_t3

0x8342,	// (0x000815c6) phacti_button_group_pane

0xd796,	// (0x00086a1a) aid_size_list_single_double_ParamLimits

0x8549,	// (0x000817cd) popup_ezdial_listscroll_window_ParamLimits

0xd7a2,	// (0x00086a26) popup_number_entry_window_cp01_ParamLimits

0x85ea,	// (0x0008186e) phacti_button_pane_ParamLimits

0x85ea,	// (0x0008186e) phacti_button_pane

0x9f77,	// (0x000831fb) bg_button_pane_cp14

0xd8b1,	// (0x00086b35) phacti_button_pane_t1

0x85fb,	// (0x0008187f) main_touch_calib_button_pane_ParamLimits

0x85fb,	// (0x0008187f) main_touch_calib_button_pane

0xa7a3,	// (0x00083a27) bg_button_pane_cp18_ParamLimits

0xa7a3,	// (0x00083a27) bg_button_pane_cp18

0xd8bf,	// (0x00086b43) main_touch_calib_button_pane_t1_ParamLimits

0xd8bf,	// (0x00086b43) main_touch_calib_button_pane_t1

0xd8d5,	// (0x00086b59) main_touch_calib_button_pane_t2_ParamLimits

0xd8d5,	// (0x00086b59) main_touch_calib_button_pane_t2

0x0001,

0xfc77,	// (0x00088efb) main_touch_calib_button_pane_t_ParamLimits

0xfc77,	// (0x00088efb) main_touch_calib_button_pane_t

0x9f77,	// (0x000831fb) cell_ncimui_button_pane

0x9f77,	// (0x000831fb) bg_button_pane_cp032

0xd8f3,	// (0x00086b77) cell_ncimui_button_pane_t1

0xe6de,	// (0x00087962) image3_infobar_pane_ParamLimits

0xe6de,	// (0x00087962) image3_infobar_pane

0x78bf,	// (0x00080b43) fs_bigclock_status_pane_ParamLimits

0x78bf,	// (0x00080b43) fs_bigclock_status_pane

0x78cc,	// (0x00080b50) main_fs_bigclock_clock_pane_ParamLimits

0x78cc,	// (0x00080b50) main_fs_bigclock_clock_pane

0x78ea,	// (0x00080b6e) main_fs_bigclock_indi_pane_ParamLimits

0x78ea,	// (0x00080b6e) main_fs_bigclock_indi_pane

0x791c,	// (0x00080ba0) main_fs_bigclock_swipe_pane_ParamLimits

0x791c,	// (0x00080ba0) main_fs_bigclock_swipe_pane

0x9f77,	// (0x000831fb) main_fs_clock_dumped_data

0x795b,	// (0x00080bdf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x795b,	// (0x00080bdf) list_single_fs_bigclock_indicator_pane_g1

0x7977,	// (0x00080bfb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7977,	// (0x00080bfb) list_single_fs_bigclock_indicator_pane_g2

0x7991,	// (0x00080c15) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7991,	// (0x00080c15) list_single_fs_bigclock_indicator_pane_g3

0x79ab,	// (0x00080c2f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x79ab,	// (0x00080c2f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb2b,	// (0x00088daf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb2b,	// (0x00088daf) list_single_fs_bigclock_indicator_pane_g

0x79d6,	// (0x00080c5a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x79d6,	// (0x00080c5a) list_single_fs_bigclock_indicator_pane_t1

0x79fe,	// (0x00080c82) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x79fe,	// (0x00080c82) list_single_fs_bigclock_indicator_pane_t2

0x7a26,	// (0x00080caa) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7a26,	// (0x00080caa) list_single_fs_bigclock_indicator_pane_t3

0x7a4e,	// (0x00080cd2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7a4e,	// (0x00080cd2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb36,	// (0x00088dba) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb36,	// (0x00088dba) list_single_fs_bigclock_indicator_pane_t

0xd901,	// (0x00086b85) image3_infobar_fav_pane_ParamLimits

0xd901,	// (0x00086b85) image3_infobar_fav_pane

0xd911,	// (0x00086b95) image3_infobar_loc_pane_ParamLimits

0xd911,	// (0x00086b95) image3_infobar_loc_pane

0xd925,	// (0x00086ba9) image3_infobar_time_pane_ParamLimits

0xd925,	// (0x00086ba9) image3_infobar_time_pane

0xa72b,	// (0x000839af) image3_infobar_time_pane_g1

0xd935,	// (0x00086bb9) image3_infobar_time_pane_t1

0xa72b,	// (0x000839af) image3_infobar_loc_pane_g1

0xd943,	// (0x00086bc7) image3_infobar_loc_pane_g2

0x0001,

0xfc7c,	// (0x00088f00) image3_infobar_loc_pane_g

0xd94b,	// (0x00086bcf) image3_infobar_loc_pane_t1

0xa72b,	// (0x000839af) image3_infobar_fav_pane_g1

0xd959,	// (0x00086bdd) image3_infobar_fav_pane_g2

0x0001,

0xfc81,	// (0x00088f05) image3_infobar_fav_pane_g

0xd961,	// (0x00086be5) fs_bigclock_status_battery_pane

0xd96a,	// (0x00086bee) fs_bigclock_status_signal_pane

0xd973,	// (0x00086bf7) fs_bigclock_status_title_pane

0xd97c,	// (0x00086c00) fs_bigclock_status_signal_pane_g1

0xd985,	// (0x00086c09) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc86,	// (0x00088f0a) fs_bigclock_status_signal_pane_g

0xd98d,	// (0x00086c11) fs_bigclock_status_battery_pane_g1

0xd996,	// (0x00086c1a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc8b,	// (0x00088f0f) fs_bigclock_status_battery_pane_g

0xd99e,	// (0x00086c22) fs_bigclock_status_title_pane_t1

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g1

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g2

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g3

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc90,	// (0x00088f14) main_fs_bigclock_clock_pane_g

0x8623,	// (0x000818a7) main_fs_bigclock_clock_pane_t1

0x863d,	// (0x000818c1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc99,	// (0x00088f1d) main_fs_bigclock_clock_pane_t

0xd9ac,	// (0x00086c30) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd9ac,	// (0x00086c30) list_single_fs_bigclock_indicator_pane

0xd9bd,	// (0x00086c41) list_single_fs_bigclock_pane_ParamLimits

0xd9bd,	// (0x00086c41) list_single_fs_bigclock_pane

0xd9e3,	// (0x00086c67) main_fs_bigclock_indicator_pane_t1

0xd9f2,	// (0x00086c76) list_single_fs_bigclock_pane_g1

0xd9fa,	// (0x00086c7e) list_single_fs_bigclock_pane_t1

0xa72b,	// (0x000839af) main_fs_bigclock_swipe_pane_g1

0xda3d,	// (0x00086cc1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcaa,	// (0x00088f2e) main_fs_bigclock_swipe_pane_g

0xda45,	// (0x00086cc9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xda45,	// (0x00086cc9) main_fs_bigclock_swipe_pane_t1

0x2b92,	// (0x0007be16) call_type_pane_ParamLimits

0x9f77,	// (0x000831fb) main_btmg_pane

0xd67a,	// (0x000868fe) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd67a,	// (0x000868fe) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc1d,	// (0x00088ea1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc1d,	// (0x00088ea1) list_single_cale_mrui_row_pane_g

0xd7fd,	// (0x00086a81) list_recal_vselct_arw_lo_pane

0xd805,	// (0x00086a89) list_recal_vselct_arw_up_pane

0xd80d,	// (0x00086a91) list_recal_vselct_pane

0x8697,	// (0x0008191b) btmg_button_pane

0x86a1,	// (0x00081925) main_btmg_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp044

0xda62,	// (0x00086ce6) btmg_button_pane_t1

0xc7d3,	// (0x00085a57) aid_listscroll_gen

0x9fee,	// (0x00083272) main_cntbar_detail_pane

0x816c,	// (0x000813f0) list_cmail_folder_pane

0xefaf,	// (0x00088233) sp_fs_scroll_pane_cp03_ParamLimits

0x0efc,	// (0x0007a180) list_single_fs_dyc_pane_cp01_ParamLimits

0x0efc,	// (0x0007a180) list_single_fs_dyc_pane_cp01

0xda70,	// (0x00086cf4) aid_size_cmail_indent

0xda79,	// (0x00086cfd) list_single_dyc_row_pane_cp01

0x86dd,	// (0x00081961) cntbar_detail_list_pane_ParamLimits

0x86dd,	// (0x00081961) cntbar_detail_list_pane

0x8729,	// (0x000819ad) main_cntbar_detail_cont_pane_ParamLimits

0x8729,	// (0x000819ad) main_cntbar_detail_cont_pane

0xefaf,	// (0x00088233) scroll_pane_cp032_ParamLimits

0xefaf,	// (0x00088233) scroll_pane_cp032

0x873d,	// (0x000819c1) cntbar_detail_list_event_pane_ParamLimits

0x873d,	// (0x000819c1) cntbar_detail_list_event_pane

0x86ed,	// (0x00081971) cntbar_detail_list_shct_pane

0xac49,	// (0x00083ecd) aid_list_gen

0xda82,	// (0x00086d06) aid_scroll

0xda8b,	// (0x00086d0f) aid_size_touch_scroll_bar

0x7b43,	// (0x00080dc7) aid_list_double

0x874d,	// (0x000819d1) aid_list_single

0xda94,	// (0x00086d18) aid_list_single_lg

0x0f12,	// (0x0007a196) aid_list_z_g_a_sm

0x8756,	// (0x000819da) aid_list_z_g_d

0x0f1a,	// (0x0007a19e) aid_txt_z_prm

0x0f28,	// (0x0007a1ac) aid_txt_z_prm_cp01

0x0f36,	// (0x0007a1ba) aid_txt_z_sec

0x875e,	// (0x000819e2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x875e,	// (0x000819e2) main_cntbar_detail_cont_pane_g1

0x8772,	// (0x000819f6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8772,	// (0x000819f6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcaf,	// (0x00088f33) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcaf,	// (0x00088f33) main_cntbar_detail_cont_pane_g

0xda9d,	// (0x00086d21) main_cntbar_detail_cont_pane_t1

0xdaab,	// (0x00086d2f) main_cntbar_detail_cont_pane_t2

0xdab9,	// (0x00086d3d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcb4,	// (0x00088f38) main_cntbar_detail_cont_pane_t

0x8782,	// (0x00081a06) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8782,	// (0x00081a06) cell_cntbar_detail_list_shct_pane

0xdac7,	// (0x00086d4b) cntbar_detail_list_shct_pane_g1

0xdad0,	// (0x00086d54) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcbb,	// (0x00088f3f) cntbar_detail_list_shct_pane_g

0x8796,	// (0x00081a1a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8796,	// (0x00081a1a) cntbar_detail_list_event_pane_g1

0x87a2,	// (0x00081a26) cntbar_detail_list_event_pane_g2_ParamLimits

0x87a2,	// (0x00081a26) cntbar_detail_list_event_pane_g2

0x0005,

0xfcc0,	// (0x00088f44) cntbar_detail_list_event_pane_g_ParamLimits

0xfcc0,	// (0x00088f44) cntbar_detail_list_event_pane_g

0x880e,	// (0x00081a92) cntbar_detail_list_event_pane_t1_ParamLimits

0x880e,	// (0x00081a92) cntbar_detail_list_event_pane_t1

0x8823,	// (0x00081aa7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8823,	// (0x00081aa7) cntbar_detail_list_event_pane_t2

0x0002,

0xfccd,	// (0x00088f51) cntbar_detail_list_event_pane_t_ParamLimits

0xfccd,	// (0x00088f51) cntbar_detail_list_event_pane_t

0xa72b,	// (0x000839af) cell_cntbar_detail_list_shct_pane_g1

0xb3ef,	// (0x00084673) navi_pane_mv_g3

0x9fee,	// (0x00083272) main_cntbar_detail_pane_ParamLimits

0x9f77,	// (0x000831fb) main_notif_wgt_pane

0xe46a,	// (0x000876ee) aid_tch_main_mp4_pane_g4

0xe6d6,	// (0x0008795a) popup_slider_window_cp02

0xd7f3,	// (0x00086a77) list_recal_day_event_pane

0x86ab,	// (0x0008192f) cntbar_detail_btn_pane_ParamLimits

0x86ab,	// (0x0008192f) cntbar_detail_btn_pane

0x86c4,	// (0x00081948) cntbar_detail_btn_pane_cp01_ParamLimits

0x86c4,	// (0x00081948) cntbar_detail_btn_pane_cp01

0x86ed,	// (0x00081971) cntbar_detail_list_shct_pane_ParamLimits

0x86fd,	// (0x00081981) cntbar_detail_pane_g1_ParamLimits

0x86fd,	// (0x00081981) cntbar_detail_pane_g1

0x870d,	// (0x00081991) cntbar_detail_pane_t1_ParamLimits

0x870d,	// (0x00081991) cntbar_detail_pane_t1

0x87ae,	// (0x00081a32) cntbar_detail_list_event_pane_g3_ParamLimits

0x87ae,	// (0x00081a32) cntbar_detail_list_event_pane_g3

0x87c6,	// (0x00081a4a) cntbar_detail_list_event_pane_g4_ParamLimits

0x87c6,	// (0x00081a4a) cntbar_detail_list_event_pane_g4

0x87de,	// (0x00081a62) cntbar_detail_list_event_pane_g5_ParamLimits

0x87de,	// (0x00081a62) cntbar_detail_list_event_pane_g5

0x87f6,	// (0x00081a7a) cntbar_detail_list_event_pane_g6_ParamLimits

0x87f6,	// (0x00081a7a) cntbar_detail_list_event_pane_g6

0x8838,	// (0x00081abc) cntbar_detail_list_event_pane_t3_ParamLimits

0x8838,	// (0x00081abc) cntbar_detail_list_event_pane_t3

0x884a,	// (0x00081ace) popup_notif_wgt_window_ParamLimits

0x884a,	// (0x00081ace) popup_notif_wgt_window

0x8863,	// (0x00081ae7) popup_submenu_window_cp01_ParamLimits

0x8863,	// (0x00081ae7) popup_submenu_window_cp01

0xa9d8,	// (0x00083c5c) bg_popup_window_pane_cp10

0xdad9,	// (0x00086d5d) listscroll_notif_wgt_pane

0xdaeb,	// (0x00086d6f) list_notif_wgt_window

0xdaf4,	// (0x00086d78) scroll_pane_cp033

0x8875,	// (0x00081af9) list_notif_wgt_row_pane_ParamLimits

0x8875,	// (0x00081af9) list_notif_wgt_row_pane

0xdafd,	// (0x00086d81) aid_size_list_notif_wgt_del

0xdb0a,	// (0x00086d8e) list_notif_wgt_row_pane_g1

0xdb16,	// (0x00086d9a) list_notif_wgt_row_pane_g2

0xdb25,	// (0x00086da9) list_notif_wgt_row_pane_g3

0x0002,

0xfcd4,	// (0x00088f58) list_notif_wgt_row_pane_g

0xdb32,	// (0x00086db6) list_notif_wgt_row_pane_t1

0xdb48,	// (0x00086dcc) list_notif_wgt_row_pane_t2

0xdb5a,	// (0x00086dde) list_notif_wgt_row_pane_t3

0x0002,

0xfcdb,	// (0x00088f5f) list_notif_wgt_row_pane_t

0xecb4,	// (0x00087f38) list_recal_day_event_pane_g1

0xdb6c,	// (0x00086df0) list_recal_day_event_pane_t1

0x9f77,	// (0x000831fb) bg_button_pane_cp045

0x8885,	// (0x00081b09) cntbar_detail_btn_pane_t1

0xb522,	// (0x000847a6) main_callh_pane_ParamLimits

0xb522,	// (0x000847a6) main_callh_pane

0x9f77,	// (0x000831fb) main_coverflow0_pane

0x9f77,	// (0x000831fb) main_wgtman_pane

0x7934,	// (0x00080bb8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7934,	// (0x00080bb8) main_fs_bigclock_unlock_btn_pane

0x80fd,	// (0x00081381) bg_button_pane_cp16

0x810d,	// (0x00081391) cell_tport_appsw_pane_g3

0x8893,	// (0x00081b17) cf0_flow_pane_ParamLimits

0x8893,	// (0x00081b17) cf0_flow_pane

0xdb7b,	// (0x00086dff) listscroll_cf0_pane

0xdb86,	// (0x00086e0a) main_cf0_pane_g1

0x88a8,	// (0x00081b2c) main_cf0_pane_t1_ParamLimits

0x88a8,	// (0x00081b2c) main_cf0_pane_t1

0x88bf,	// (0x00081b43) main_cf0_pane_t2_ParamLimits

0x88bf,	// (0x00081b43) main_cf0_pane_t2

0x0001,

0xfce7,	// (0x00088f6b) main_cf0_pane_t_ParamLimits

0xfce7,	// (0x00088f6b) main_cf0_pane_t

0xdb98,	// (0x00086e1c) scroll_pane_cp11

0x88d6,	// (0x00081b5a) cf0_flow_pane_g1

0x88de,	// (0x00081b62) cf0_flow_pane_g2

0x0001,

0xfcec,	// (0x00088f70) cf0_flow_pane_g

0x88e6,	// (0x00081b6a) cf0_flow_pane_t1

0x9f77,	// (0x000831fb) main_call6_pane

0x9f77,	// (0x000831fb) main_calllock_pane

0x88f4,	// (0x00081b78) call6_btn_grp_pane_ParamLimits

0x88f4,	// (0x00081b78) call6_btn_grp_pane

0x890e,	// (0x00081b92) call6_pane_g1_ParamLimits

0x890e,	// (0x00081b92) call6_pane_g1

0x8924,	// (0x00081ba8) popup_call6_1st_window_ParamLimits

0x8924,	// (0x00081ba8) popup_call6_1st_window

0x8935,	// (0x00081bb9) popup_call6_2nd_window_ParamLimits

0x8935,	// (0x00081bb9) popup_call6_2nd_window

0x8946,	// (0x00081bca) cell_call6_btn_pane_ParamLimits

0x8946,	// (0x00081bca) cell_call6_btn_pane

0xa9d8,	// (0x00083c5c) bg_popup_call2_in_pane_cp03

0xdba3,	// (0x00086e27) popup_call6_1st_window_g1

0xdbab,	// (0x00086e2f) popup_call6_1st_window_g2

0xdbb3,	// (0x00086e37) popup_call6_1st_window_g3

0x0002,

0xfcf1,	// (0x00088f75) popup_call6_1st_window_g

0xdbbb,	// (0x00086e3f) popup_call6_1st_window_t1

0xdbca,	// (0x00086e4e) popup_call6_1st_window_t2

0xdbd8,	// (0x00086e5c) popup_call6_1st_window_t3

0x0002,

0xfcf8,	// (0x00088f7c) popup_call6_1st_window_t

0xa9d8,	// (0x00083c5c) bg_popup_call2_in_pane_cp04

0xdbe6,	// (0x00086e6a) popup_call6_2nd_window_g1

0xdbee,	// (0x00086e72) popup_call6_2nd_window_g2

0xdbf6,	// (0x00086e7a) popup_call6_2nd_window_g3

0x0002,

0xfcff,	// (0x00088f83) popup_call6_2nd_window_g

0xdbfe,	// (0x00086e82) popup_call6_2nd_window_t1

0x9f77,	// (0x000831fb) bg_button_pane_cp15

0xdc0d,	// (0x00086e91) cell_call6_btn_pane_g1

0xdc16,	// (0x00086e9a) cell_call6_btn_pane_t1

0x895a,	// (0x00081bde) listscroll_wgtman_pane_ParamLimits

0x895a,	// (0x00081bde) listscroll_wgtman_pane

0x897b,	// (0x00081bff) wgtman_btn_pane_ParamLimits

0x897b,	// (0x00081bff) wgtman_btn_pane

0xb203,	// (0x00084487) aid_scroll_copy1

0xdc25,	// (0x00086ea9) list_wgtman_pane

0x89be,	// (0x00081c42) wgtman_btn_pane_g1_ParamLimits

0x89be,	// (0x00081c42) wgtman_btn_pane_g1

0x89ea,	// (0x00081c6e) wgtman_btn_pane_t1_ParamLimits

0x89ea,	// (0x00081c6e) wgtman_btn_pane_t1

0xdc2f,	// (0x00086eb3) wgtman_btn_pane_t2_ParamLimits

0xdc2f,	// (0x00086eb3) wgtman_btn_pane_t2

0x0001,

0xfd06,	// (0x00088f8a) wgtman_btn_pane_t_ParamLimits

0xfd06,	// (0x00088f8a) wgtman_btn_pane_t

0x8a27,	// (0x00081cab) listrow_wgtman_pane_ParamLimits

0x8a27,	// (0x00081cab) listrow_wgtman_pane

0x8a3a,	// (0x00081cbe) listrow_wgtman_pane_g1

0x8a47,	// (0x00081ccb) listrow_wgtman_pane_g2

0x0001,

0xfd0b,	// (0x00088f8f) listrow_wgtman_pane_g

0x0f44,	// (0x0007a1c8) listrow_wgtman_pane_t1

0x0f5c,	// (0x0007a1e0) listrow_wgtman_pane_t2

0x0001,

0xfd10,	// (0x00088f94) listrow_wgtman_pane_t

0x0f82,	// (0x0007a206) wait_bar_pane_cp09

0xdc46,	// (0x00086eca) main_calllock_btn_pane

0xdc50,	// (0x00086ed4) main_calllock_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp17

0xdc0d,	// (0x00086e91) main_calllock_btn_pane_g1

0xdc58,	// (0x00086edc) main_calllock_btn_pane_t1

0x9f77,	// (0x000831fb) main_dialer3_pane

0x9f77,	// (0x000831fb) main_fmrd2_pane

0xa72b,	// (0x000839af) main_fs_bigclock_unlock_btn_pane_g1

0x8a6d,	// (0x00081cf1) main_fs_bigclock_unlock_btn_pane_t1

0x8a7b,	// (0x00081cff) area_fmrd2_info_pane_ParamLimits

0x8a7b,	// (0x00081cff) area_fmrd2_info_pane

0x8a8c,	// (0x00081d10) area_fmrd2_visual_pane_ParamLimits

0x8a8c,	// (0x00081d10) area_fmrd2_visual_pane

0x8a9a,	// (0x00081d1e) fmrd2_indi_pane_ParamLimits

0x8a9a,	// (0x00081d1e) fmrd2_indi_pane

0x8aa7,	// (0x00081d2b) area_fmrd2_visual_pane_g1

0x8aaf,	// (0x00081d33) area_fmrd2_visual_pane_t1

0x8abf,	// (0x00081d43) area_fmrd2_visual_pane_t2

0x8acf,	// (0x00081d53) area_fmrd2_visual_pane_t3

0x0002,

0xfd1a,	// (0x00088f9e) area_fmrd2_visual_pane_t

0x8adf,	// (0x00081d63) area_fmrd2_info_pane_g1

0x8ae7,	// (0x00081d6b) area_fmrd2_info_pane_t1

0x8af7,	// (0x00081d7b) area_fmrd2_info_pane_t2

0x8b07,	// (0x00081d8b) area_fmrd2_info_pane_t3

0x8b17,	// (0x00081d9b) area_fmrd2_info_pane_t4

0x0003,

0xfd21,	// (0x00088fa5) area_fmrd2_info_pane_t

0x8b25,	// (0x00081da9) fmrd2_indi_pane_t1

0x8b35,	// (0x00081db9) fmrd2_indi_pane_t2

0x8b45,	// (0x00081dc9) fmrd2_indi_pane_t3

0x0002,

0xfd2a,	// (0x00088fae) fmrd2_indi_pane_t

0x79ba,	// (0x00080c3e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x79ba,	// (0x00080c3e) list_single_fs_bigclock_indicator_pane_g5

0x7a6b,	// (0x00080cef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7a6b,	// (0x00080cef) list_single_fs_bigclock_indicator_pane_t5

0xe924,	// (0x00087ba8) aid_cell_bcale_month_pane_ParamLimits

0xe924,	// (0x00087ba8) aid_cell_bcale_month_pane

0xe924,	// (0x00087ba8) bcale_month_pane_ParamLimits

0xe924,	// (0x00087ba8) bcale_month_pane

0x475d,	// (0x0007d9e1) bcale_preview_pane_ParamLimits

0x475d,	// (0x0007d9e1) bcale_preview_pane

0xd9fa,	// (0x00086c7e) list_single_fs_bigclock_pane_t1_ParamLimits

0xda19,	// (0x00086c9d) list_single_fs_bigclock_pane_t2_ParamLimits

0xda19,	// (0x00086c9d) list_single_fs_bigclock_pane_t2

0x0001,

0xfca5,	// (0x00088f29) list_single_fs_bigclock_pane_t_ParamLimits

0xfca5,	// (0x00088f29) list_single_fs_bigclock_pane_t

0x8a65,	// (0x00081ce9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd15,	// (0x00088f99) main_fs_bigclock_unlock_btn_pane_g

0x8b55,	// (0x00081dd9) aid_dia3_key_size_ParamLimits

0x8b55,	// (0x00081dd9) aid_dia3_key_size

0x8b64,	// (0x00081de8) aid_dia3_listrow_size_ParamLimits

0x8b64,	// (0x00081de8) aid_dia3_listrow_size

0x8b79,	// (0x00081dfd) dia3_keypad_fun_pane_ParamLimits

0x8b79,	// (0x00081dfd) dia3_keypad_fun_pane

0x8b95,	// (0x00081e19) dia3_keypad_num_pane_ParamLimits

0x8b95,	// (0x00081e19) dia3_keypad_num_pane

0x8bb0,	// (0x00081e34) dia3_listscroll_pane_ParamLimits

0x8bb0,	// (0x00081e34) dia3_listscroll_pane

0x8bc3,	// (0x00081e47) dia3_numentry_pane_ParamLimits

0x8bc3,	// (0x00081e47) dia3_numentry_pane

0xdc67,	// (0x00086eeb) dia3_list_pane

0xdc72,	// (0x00086ef6) scroll_pane_cp12

0x9f77,	// (0x000831fb) bg_dia3_numentry_pane

0x8bdb,	// (0x00081e5f) dia3_numentry_pane_t1

0x8bea,	// (0x00081e6e) cell_dia3_key_num_pane

0x8bf2,	// (0x00081e76) cell_dia3_key0_fun_pane_ParamLimits

0x8bf2,	// (0x00081e76) cell_dia3_key0_fun_pane

0x8c06,	// (0x00081e8a) cell_dia3_key1_fun_pane_ParamLimits

0x8c06,	// (0x00081e8a) cell_dia3_key1_fun_pane

0x8c1e,	// (0x00081ea2) dia3_listrow_pane

0x744c,	// (0x000806d0) bg_dia3_numentry_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp21

0xdc7d,	// (0x00086f01) cell_dia3_key_num_pane_t1

0xdc8b,	// (0x00086f0f) cell_dia3_key_num_pane_t2

0xdc9a,	// (0x00086f1e) cell_dia3_key_num_pane_t3

0xdca9,	// (0x00086f2d) cell_dia3_key_num_pane_t4

0x0003,

0xfd31,	// (0x00088fb5) cell_dia3_key_num_pane_t

0x9f77,	// (0x000831fb) bg_button_pane_cp19

0x8c30,	// (0x00081eb4) cell_dia3_key0_fun_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp20

0x8c38,	// (0x00081ebc) cell_dia3_key1_fun_pane_g1

0x475d,	// (0x0007d9e1) area_left_week_number_pane

0x475d,	// (0x0007d9e1) area_top_day_name_pane

0x475d,	// (0x0007d9e1) frame_month_view_pane

0x475d,	// (0x0007d9e1) grid_month_view_pane

0x475d,	// (0x0007d9e1) cell_top_day_name_pane_ParamLimits

0x475d,	// (0x0007d9e1) cell_top_day_name_pane

0x475d,	// (0x0007d9e1) cell_area_left_week_number_pane_ParamLimits

0x475d,	// (0x0007d9e1) cell_area_left_week_number_pane

0x475d,	// (0x0007d9e1) cell_month_view_pane_ParamLimits

0x475d,	// (0x0007d9e1) cell_month_view_pane

0x4318,	// (0x0007d59c) frm_month_g1

0x4318,	// (0x0007d59c) frm_month_g2

0x4318,	// (0x0007d59c) frm_month_g3

0x4318,	// (0x0007d59c) frm_month_g4

0x4318,	// (0x0007d59c) frm_month_g5

0x4318,	// (0x0007d59c) frm_month_g6

0x4318,	// (0x0007d59c) frm_month_g7

0x4318,	// (0x0007d59c) frm_month_g8

0x4318,	// (0x0007d59c) frm_month_g9

0x4318,	// (0x0007d59c) frm_month_g10

0x4318,	// (0x0007d59c) frm_month_g11

0x4318,	// (0x0007d59c) frm_month_g12

0x4318,	// (0x0007d59c) frm_month_g13

0x4318,	// (0x0007d59c) frm_month_g14

0x4318,	// (0x0007d59c) frm_month_g15

0x4318,	// (0x0007d59c) frm_month_g16

0x000f,

0xfd3a,	// (0x00088fbe) frm_month_g

0xdcb8,	// (0x00086f3c) cell_top_day_name_pane_t1

0x4318,	// (0x0007d59c) cell_area_left_week_number_pane_g1

0xdcb8,	// (0x00086f3c) cell_area_left_week_number_pane_t1

0x4318,	// (0x0007d59c) cell_month_view_pane_g1

0xdcb8,	// (0x00086f3c) cell_month_view_pane_t1

0x9f77,	// (0x000831fb) main_fps_pane

0x7e46,	// (0x000810ca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7e46,	// (0x000810ca) cmail_ddmenu_btn02_pane_cp1

0x7e62,	// (0x000810e6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x7e62,	// (0x000810e6) cmail_ddmenu_btn02_pane_cp2

0x8584,	// (0x00081808) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8584,	// (0x00081808) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc58,	// (0x00088edc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc58,	// (0x00088edc) cmail_ddmenu_btn02_pane_g

0x85a2,	// (0x00081826) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x85a2,	// (0x00081826) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc5d,	// (0x00088ee1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc5d,	// (0x00088ee1) cmail_ddmenu_btn02_pane_t

0x8c40,	// (0x00081ec4) fps_text_pane_ParamLimits

0x8c40,	// (0x00081ec4) fps_text_pane

0x8c57,	// (0x00081edb) main_fps_pane_g1_ParamLimits

0x8c57,	// (0x00081edb) main_fps_pane_g1

0x8c71,	// (0x00081ef5) wait_bar_pane_cp010_ParamLimits

0x8c71,	// (0x00081ef5) wait_bar_pane_cp010

0x8c82,	// (0x00081f06) fps_text_pane_t1_ParamLimits

0x8c82,	// (0x00081f06) fps_text_pane_t1

0x53ab,	// (0x0007e62f) cam4_image_uncrop_pane_g1

0x53b4,	// (0x0007e638) cam4_image_uncrop_pane_g2

0x53bd,	// (0x0007e641) cam4_image_uncrop_pane_g3

0x53c6,	// (0x0007e64a) cam4_image_uncrop_pane_g4

0x0003,

0xf7f3,	// (0x00088a77) cam4_image_uncrop_pane_g

0x8c1e,	// (0x00081ea2) dia3_listrow_pane_ParamLimits

0x9f77,	// (0x000831fb) main_phob2_pane

0x8097,	// (0x0008131b) cell_tport_appsw_pane_cp02_ParamLimits

0x8097,	// (0x0008131b) cell_tport_appsw_pane_cp02

0x80ab,	// (0x0008132f) cell_tport_appsw_pane_cp03_ParamLimits

0x80ab,	// (0x0008132f) cell_tport_appsw_pane_cp03

0x9f77,	// (0x000831fb) phob2_contact_card_pane

0x9f77,	// (0x000831fb) phob2_listscroll_pane

0xdcca,	// (0x00086f4e) phob2_list_pane

0xd7b7,	// (0x00086a3b) scroll_pane_cp034

0x8c9a,	// (0x00081f1e) phob2_cc_data_pane_ParamLimits

0x8c9a,	// (0x00081f1e) phob2_cc_data_pane

0x8cb9,	// (0x00081f3d) phob2_cc_listscroll_pane_ParamLimits

0x8cb9,	// (0x00081f3d) phob2_cc_listscroll_pane

0x8cd7,	// (0x00081f5b) list_double_large_graphic_phob2_pane_ParamLimits

0x8cd7,	// (0x00081f5b) list_double_large_graphic_phob2_pane

0x8cf8,	// (0x00081f7c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8cf8,	// (0x00081f7c) list_double_large_graphic_phob2_pane_g1

0x0f94,	// (0x0007a218) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f94,	// (0x0007a218) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd5b,	// (0x00088fdf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd5b,	// (0x00088fdf) list_double_large_graphic_phob2_pane_g

0x0fb5,	// (0x0007a239) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0fb5,	// (0x0007a239) list_double_large_graphic_phob2_pane_t1

0x0fd9,	// (0x0007a25d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fd9,	// (0x0007a25d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd64,	// (0x00088fe8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd64,	// (0x00088fe8) list_double_large_graphic_phob2_pane_t

0x9fee,	// (0x00083272) list_highlight_pane_cp024

0xdcd2,	// (0x00086f56) phob2_cc_button_pane

0x8d1d,	// (0x00081fa1) phob2_cc_data_pane_g1_ParamLimits

0x8d1d,	// (0x00081fa1) phob2_cc_data_pane_g1

0x8d34,	// (0x00081fb8) phob2_cc_data_pane_g2_ParamLimits

0x8d34,	// (0x00081fb8) phob2_cc_data_pane_g2

0x0001,

0xfd69,	// (0x00088fed) phob2_cc_data_pane_g_ParamLimits

0xfd69,	// (0x00088fed) phob2_cc_data_pane_g

0x8d46,	// (0x00081fca) phob2_cc_data_pane_t1_ParamLimits

0x8d46,	// (0x00081fca) phob2_cc_data_pane_t1

0x8d5e,	// (0x00081fe2) phob2_cc_data_pane_t2_ParamLimits

0x8d5e,	// (0x00081fe2) phob2_cc_data_pane_t2

0x8d76,	// (0x00081ffa) phob2_cc_data_pane_t3_ParamLimits

0x8d76,	// (0x00081ffa) phob2_cc_data_pane_t3

0x0002,

0xfd6e,	// (0x00088ff2) phob2_cc_data_pane_t_ParamLimits

0xfd6e,	// (0x00088ff2) phob2_cc_data_pane_t

0xdcda,	// (0x00086f5e) phob2_cc_list_pane_ParamLimits

0xdcda,	// (0x00086f5e) phob2_cc_list_pane

0x62d6,	// (0x0007f55a) scroll_pane_cp035_ParamLimits

0x62d6,	// (0x0007f55a) scroll_pane_cp035

0x9fee,	// (0x00083272) bg_button_pane_cp033

0xdce6,	// (0x00086f6a) phob2_cc_button_pane_g1

0xdcf2,	// (0x00086f76) phob2_cc_button_pane_t1

0xdd07,	// (0x00086f8b) phob2_cc_button_pane_t2

0x0001,

0xfd75,	// (0x00088ff9) phob2_cc_button_pane_t

0x8d8e,	// (0x00082012) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8d8e,	// (0x00082012) list_double_large_graphic_phob2_cc_pane

0x8dc0,	// (0x00082044) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8dc0,	// (0x00082044) list_double_large_graphic_phob2_cc_pane_g1

0x0ffa,	// (0x0007a27e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0ffa,	// (0x0007a27e) list_double_large_graphic_phob2_cc_pane_g2

0x8dcc,	// (0x00082050) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8dcc,	// (0x00082050) list_double_large_graphic_phob2_cc_pane_g3

0x1006,	// (0x0007a28a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1006,	// (0x0007a28a) list_double_large_graphic_phob2_cc_pane_g4

0x1012,	// (0x0007a296) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1012,	// (0x0007a296) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd7a,	// (0x00088ffe) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd7a,	// (0x00088ffe) list_double_large_graphic_phob2_cc_pane_g

0x101e,	// (0x0007a2a2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x101e,	// (0x0007a2a2) list_double_large_graphic_phob2_cc_pane_t1

0x1047,	// (0x0007a2cb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1047,	// (0x0007a2cb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd85,	// (0x00089009) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd85,	// (0x00089009) list_double_large_graphic_phob2_cc_pane_t

0xdd19,	// (0x00086f9d) list_highlight_pane_cp025_ParamLimits

0xdd19,	// (0x00086f9d) list_highlight_pane_cp025

0x9fee,	// (0x00083272) bg_button_pane_cp033_ParamLimits

0xdce6,	// (0x00086f6a) phob2_cc_button_pane_g1_ParamLimits

0xdcf2,	// (0x00086f76) phob2_cc_button_pane_t1_ParamLimits

0xdd07,	// (0x00086f8b) phob2_cc_button_pane_t2_ParamLimits

0xfd75,	// (0x00088ff9) phob2_cc_button_pane_t_ParamLimits

0x12a8,	// (0x0007a52c) popup_wgtman_window

0xeb71,	// (0x00087df5) scroll_pane_cp038

0x89a0,	// (0x00081c24) wgtman_btn_pane_cp_01_ParamLimits

0x89a0,	// (0x00081c24) wgtman_btn_pane_cp_01

0xdd27,	// (0x00086fab) wgtman_content_pane

0xdd30,	// (0x00086fb4) wgtman_heading_pane

0x9f77,	// (0x000831fb) bg_heading_pane_cp02

0xdd39,	// (0x00086fbd) wgtman_heading_pane_g1

0xdd41,	// (0x00086fc5) wgtman_heading_pane_t1

0xdd4f,	// (0x00086fd3) scroll_pane_cp036

0xdd57,	// (0x00086fdb) wgtman_list_pane

0x7b12,	// (0x00080d96) wgtman_list_pane_t1_ParamLimits

0x7b12,	// (0x00080d96) wgtman_list_pane_t1

0xe74a,	// (0x000879ce) cam4_grid_pane

0x60f2,	// (0x0007f376) bg_button_pane_cp015_ParamLimits

0x6103,	// (0x0007f387) bg_button_pane_cp016_ParamLimits

0x610f,	// (0x0007f393) bg_button_pane_cp017_ParamLimits

0x6163,	// (0x0007f3e7) popup_vitu2_query_window_g3_ParamLimits

0x6163,	// (0x0007f3e7) popup_vitu2_query_window_g3

0x6204,	// (0x0007f488) popup_vitu2_query_window_t6_ParamLimits

0x6204,	// (0x0007f488) popup_vitu2_query_window_t6

0x622f,	// (0x0007f4b3) popup_vitu2_query_window_t7_ParamLimits

0x622f,	// (0x0007f4b3) popup_vitu2_query_window_t7

0x53ab,	// (0x0007e62f) cam4_grid_pane_g1

0x53b4,	// (0x0007e638) cam4_grid_pane_g2

0xdd5f,	// (0x00086fe3) cam4_grid_pane_g3

0xdd68,	// (0x00086fec) cam4_grid_pane_g4

0x0003,

0xfd8a,	// (0x0008900e) cam4_grid_pane_g

0x1d56,	// (0x0007afda) aid_placing_vt_slider_lsc_ParamLimits

0x2053,	// (0x0007b2d7) vidtel_button_pane_ParamLimits

0x2053,	// (0x0007b2d7) vidtel_button_pane

0x9f77,	// (0x000831fb) bg_button_pane_cp034

0xdd73,	// (0x00086ff7) vidtel_button_pane_g1

0xdd7b,	// (0x00086fff) vidtel_button_pane_t1

0xeca4,	// (0x00087f28) aid_size_vtel_slider_touch

0x62d6,	// (0x0007f55a) scroll_pane_cp039

0x74c3,	// (0x00080747) ncim_query_button_pane_cp01_ParamLimits

0x74e2,	// (0x00080766) ncimui_query_pane_g1_ParamLimits

0x9fee,	// (0x00083272) input_focus_pane_cp012_ParamLimits

0x7507,	// (0x0008078b) ncim_query_entry_pane_t1_ParamLimits

0x62d6,	// (0x0007f55a) scroll_pane_cp039_ParamLimits

0xb2da,	// (0x0008455e) navi_pane_bcale_mc_g1

0xb2e2,	// (0x00084566) navi_pane_bcale_mc_t1

0x7f53,	// (0x000811d7) main_sp_fs_email_pane_g1

0x7f5f,	// (0x000811e3) main_sp_fs_email_pane_g2

0x0001,

0xfb9b,	// (0x00088e1f) main_sp_fs_email_pane_g

0x845a,	// (0x000816de) list_single_cale_mrui_row_pane_g3_ParamLimits

0x845a,	// (0x000816de) list_single_cale_mrui_row_pane_g3

0x0ef2,	// (0x0007a176) list_single_recal_day_pane_g5_event_pane

0xd864,	// (0x00086ae8) list_single_recal_day_pane_g7

0xdd91,	// (0x00087015) list_recal_day_event_pane_cp01

0xdd9a,	// (0x0008701e) list_recal_vselct_arw_lo_pane_cp01

0xdda2,	// (0x00087026) list_recal_vselct_arw_up_pane_cp01

0xddaa,	// (0x0008702e) list_recal_vselct_pane_cp01

0xecb4,	// (0x00087f38) list_recal_day_event_pane_cp01_g1

0xddb4,	// (0x00087038) list_recal_day_event_pane_cp01_t1

0xd86c,	// (0x00086af0) list_single_recal_day_pane_t1_ParamLimits

0xd87e,	// (0x00086b02) list_single_recal_day_pane_t2_ParamLimits

0xfc6d,	// (0x00088ef1) list_single_recal_day_pane_t_ParamLimits

0xa66a,	// (0x000838ee) bg_notes_pane_ParamLimits

0xa767,	// (0x000839eb) list_notes_pane_ParamLimits

0x13f3,	// (0x0007a677) scroll_pane_cp06_ParamLimits

0xa7a3,	// (0x00083a27) main_notes_pane_ParamLimits

0x9fee,	// (0x00083272) main_welc_pane

0x8e11,	// (0x00082095) main_welc_body_pane_ParamLimits

0x8e11,	// (0x00082095) main_welc_body_pane

0x8e2e,	// (0x000820b2) main_welc_opti_pane_ParamLimits

0x8e2e,	// (0x000820b2) main_welc_opti_pane

0x8e9e,	// (0x00082122) main_welc_pane_t1_ParamLimits

0x8e9e,	// (0x00082122) main_welc_pane_t1

0x90b0,	// (0x00082334) main_welc_body_row_pane_ParamLimits

0x90b0,	// (0x00082334) main_welc_body_row_pane

0xa6d7,	// (0x0008395b) main_welc_opti_row_pane_ParamLimits

0xa6d7,	// (0x0008395b) main_welc_opti_row_pane

0xddca,	// (0x0008704e) main_welc_opti_row_pane_g1

0x90c5,	// (0x00082349) main_welc_opti_row_pane_t1

0xddd2,	// (0x00087056) main_welc_body_row_pane_t1

0xdae3,	// (0x00086d67) popup_notif_wgt_heading_pane

0xdafd,	// (0x00086d81) aid_size_list_notif_wgt_del_ParamLimits

0xdb0a,	// (0x00086d8e) list_notif_wgt_row_pane_g1_ParamLimits

0xdb16,	// (0x00086d9a) list_notif_wgt_row_pane_g2_ParamLimits

0xdb25,	// (0x00086da9) list_notif_wgt_row_pane_g3_ParamLimits

0xfcd4,	// (0x00088f58) list_notif_wgt_row_pane_g_ParamLimits

0xdb32,	// (0x00086db6) list_notif_wgt_row_pane_t1_ParamLimits

0xdb48,	// (0x00086dcc) list_notif_wgt_row_pane_t2_ParamLimits

0xdb5a,	// (0x00086dde) list_notif_wgt_row_pane_t3_ParamLimits

0xfcdb,	// (0x00088f5f) list_notif_wgt_row_pane_t_ParamLimits

0x8a3a,	// (0x00081cbe) listrow_wgtman_pane_g1_ParamLimits

0x8a47,	// (0x00081ccb) listrow_wgtman_pane_g2_ParamLimits

0xfd0b,	// (0x00088f8f) listrow_wgtman_pane_g_ParamLimits

0x0f44,	// (0x0007a1c8) listrow_wgtman_pane_t1_ParamLimits

0x0f5c,	// (0x0007a1e0) listrow_wgtman_pane_t2_ParamLimits

0xfd10,	// (0x00088f94) listrow_wgtman_pane_t_ParamLimits

0x0f82,	// (0x0007a206) wait_bar_pane_cp09_ParamLimits

0x9f77,	// (0x000831fb) bg_popup_heading_pane_cp02

0xdde1,	// (0x00087065) popup_notif_wgt_heading_pane_g1

0xdde9,	// (0x0008706d) popup_notif_wgt_heading_pane_t1

0x9f77,	// (0x000831fb) main_vids_pane

0x9f77,	// (0x000831fb) vids_listscroll_pane

0x90d4,	// (0x00082358) scroll_pane_cp040

0x9f77,	// (0x000831fb) vids_list_pane

0x90df,	// (0x00082363) vids_list_double_pane_ParamLimits

0x90df,	// (0x00082363) vids_list_double_pane

0x90f0,	// (0x00082374) vids_list_double_pane_g1

0x90f9,	// (0x0008237d) vids_list_double_pane_t1

0x9108,	// (0x0008238c) vids_list_double_pane_t2

0x0001,

0xfda9,	// (0x0008902d) vids_list_double_pane_t

0x9fee,	// (0x00083272) main_ncimui_pane_ParamLimits

0x71e2,	// (0x00080466) main_ncimui_pane_g1_ParamLimits

0x71ee,	// (0x00080472) main_ncimui_pane_g2_ParamLimits

0x71ee,	// (0x00080472) main_ncimui_pane_g2

0x0001,

0xfaa1,	// (0x00088d25) main_ncimui_pane_g_ParamLimits

0xfaa1,	// (0x00088d25) main_ncimui_pane_g

0x8e49,	// (0x000820cd) main_welc_pane_g1_ParamLimits

0x8e49,	// (0x000820cd) main_welc_pane_g1

0x8e5e,	// (0x000820e2) main_welc_pane_g2_ParamLimits

0x8e5e,	// (0x000820e2) main_welc_pane_g2

0x0003,

0xfd93,	// (0x00089017) main_welc_pane_g_ParamLimits

0xfd93,	// (0x00089017) main_welc_pane_g

0xa66a,	// (0x000838ee) listscroll_mce_pane_ParamLimits

0xb42f,	// (0x000846b3) wait_bar_pane_cp10

0xc7e3,	// (0x00085a67) main_cale_day_pane_ParamLimits

0xc7e3,	// (0x00085a67) main_cale_week_pane_ParamLimits

0xa66a,	// (0x000838ee) main_messa_pane_ParamLimits

0x4893,	// (0x0007db17) main_clock2_btn_pane_ParamLimits

0x4893,	// (0x0007db17) main_clock2_btn_pane

0xd100,	// (0x00086384) main_clock2_btn_pane_cp01_ParamLimits

0xd100,	// (0x00086384) main_clock2_btn_pane_cp01

0x841d,	// (0x000816a1) list_cale_mrui_pane_ParamLimits

0xdb90,	// (0x00086e14) main_cf0_pane_g2

0x0001,

0xfce2,	// (0x00088f66) main_cf0_pane_g

0x475d,	// (0x0007d9e1) area_left_week_number_pane_ParamLimits

0x475d,	// (0x0007d9e1) area_top_day_name_pane_ParamLimits

0x475d,	// (0x0007d9e1) frame_month_view_pane_ParamLimits

0x475d,	// (0x0007d9e1) grid_month_view_pane_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g1_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g2_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g3_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g4_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g5_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g6_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g7_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g8_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g9_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g10_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g11_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g12_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g13_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g14_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g15_ParamLimits

0x4318,	// (0x0007d59c) frm_month_g16_ParamLimits

0xfd3a,	// (0x00088fbe) frm_month_g_ParamLimits

0xdcb8,	// (0x00086f3c) cell_top_day_name_pane_t1_ParamLimits

0x4318,	// (0x0007d59c) cell_area_left_week_number_pane_g1_ParamLimits

0xdcb8,	// (0x00086f3c) cell_area_left_week_number_pane_t1_ParamLimits

0x4318,	// (0x0007d59c) cell_month_view_pane_g1_ParamLimits

0xdcb8,	// (0x00086f3c) cell_month_view_pane_t1_ParamLimits

0xa662,	// (0x000838e6) main_clock2_btn_pane_g1

0xddf7,	// (0x0008707b) main_clock2_btn_pane_t1

0x9fee,	// (0x00083272) listscroll_cmail_pane_ParamLimits

0x7f53,	// (0x000811d7) main_sp_fs_email_pane_g1_ParamLimits

0x7f5f,	// (0x000811e3) main_sp_fs_email_pane_g2_ParamLimits

0xfb9b,	// (0x00088e1f) main_sp_fs_email_pane_g_ParamLimits

0xd7d4,	// (0x00086a58) list_recal_day_pane_ParamLimits

0xd7e5,	// (0x00086a69) mian_recal_day_pane_t1

0x0cdf,	// (0x00079f63) list_single_dyc_row_text_pane_t4_ParamLimits

0x0cdf,	// (0x00079f63) list_single_dyc_row_text_pane_t4

0x0d28,	// (0x00079fac) list_single_dyc_row_text_pane_t5_ParamLimits

0x0d28,	// (0x00079fac) list_single_dyc_row_text_pane_t5

0xd506,	// (0x0008678a) list_single_dyc_row_text_pane_t6_ParamLimits

0xd506,	// (0x0008678a) list_single_dyc_row_text_pane_t6

0x2ad7,	// (0x0007bd5b) aid_mgn_list_cale_time_pane

0x9fee,	// (0x00083272) main_gallery2_pane_ParamLimits

0xd116,	// (0x0008639a) main_clock2_pane_cp01_t1

0xd124,	// (0x000863a8) main_clock2_pane_cp01_t3

0x0001,

0xf6cf,	// (0x00088953) main_clock2_pane_cp01_t

0x178f,	// (0x0007aa13) cale_week_scroll_pane_g16_ParamLimits

0x178f,	// (0x0007aa13) cale_week_scroll_pane_g16

0xa9d8,	// (0x00083c5c) vorec_slider_pane

0xdd7b,	// (0x00086fff) vidtel_button_pane_t1_ParamLimits

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8610,	// (0x00081894) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc90,	// (0x00088f14) main_fs_bigclock_clock_pane_g_ParamLimits

0x8623,	// (0x000818a7) main_fs_bigclock_clock_pane_t1_ParamLimits

0x863d,	// (0x000818c1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc99,	// (0x00088f1d) main_fs_bigclock_clock_pane_t_ParamLimits

0x410e,	// (0x0007d392) main_mup3_lyrics_pane_ParamLimits

0x410e,	// (0x0007d392) main_mup3_lyrics_pane

0x9130,	// (0x000823b4) main_mup3_lyrics_pane_t1_ParamLimits

0x9130,	// (0x000823b4) main_mup3_lyrics_pane_t1

0xe454,	// (0x000876d8) aid_main_mp4_pane_t1_area

0xe45e,	// (0x000876e2) aid_main_mp4_pane_t2_area

0xe508,	// (0x0008778c) main_mp4_pane_g7_ParamLimits

0xe508,	// (0x0008778c) main_mp4_pane_g7

0xe514,	// (0x00087798) main_mp4_pane_g8_ParamLimits

0xe514,	// (0x00087798) main_mp4_pane_g8

0x517c,	// (0x0007e400) aid_call6_pane_g1_size

0x8da9,	// (0x0008202d) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8da9,	// (0x0008202d) list_double_large_graphic_phob2_other_pane

0xb20b,	// (0x0008448f) list_double_large_graphic_phob2_other_pane_g1

0x9f77,	// (0x000831fb) list_highlight_pane_cp026

0x9fee,	// (0x00083272) main_welc_pane_ParamLimits

0x7ebc,	// (0x00081140) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7ebc,	// (0x00081140) main_sp_fs_ctrlbar_pane_g3

0x7ed6,	// (0x0008115a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7ed6,	// (0x0008115a) main_sp_fs_ctrlbar_pane_g4

0x7f0a,	// (0x0008118e) toolbar2_fixed_button_pane_cp01

0x7f15,	// (0x00081199) toolbar2_fixed_button_pane_cp02

0x7f22,	// (0x000811a6) toolbar2_fixed_button_pane_cp03

0x8deb,	// (0x0008206f) list_welc_entry_pane_ParamLimits

0x8deb,	// (0x0008206f) list_welc_entry_pane

0x8e73,	// (0x000820f7) main_welc_pane_g3_ParamLimits

0x8e73,	// (0x000820f7) main_welc_pane_g3

0x8ebc,	// (0x00082140) main_welc_pane_t2_ParamLimits

0x8ebc,	// (0x00082140) main_welc_pane_t2

0x8ed7,	// (0x0008215b) main_welc_pane_t3_ParamLimits

0x8ed7,	// (0x0008215b) main_welc_pane_t3

0x0005,

0xfd9c,	// (0x00089020) main_welc_pane_t_ParamLimits

0xfd9c,	// (0x00089020) main_welc_pane_t

0x900f,	// (0x00082293) welc_button_pane_ParamLimits

0x900f,	// (0x00082293) welc_button_pane

0x909b,	// (0x0008231f) welc_service_logo_pane_ParamLimits

0x909b,	// (0x0008231f) welc_service_logo_pane

0x914c,	// (0x000823d0) list_single_welc_entry_pane_ParamLimits

0x914c,	// (0x000823d0) list_single_welc_entry_pane

0x915d,	// (0x000823e1) list_single_welc_entry_pane_g1

0x9165,	// (0x000823e9) list_single_welc_entry_pane_t1

0x9173,	// (0x000823f7) list_single_welc_entry_pane_t2

0x0001,

0xfdae,	// (0x00089032) list_single_welc_entry_pane_t

0x9f77,	// (0x000831fb) bg_button_pane_cp035

0x9181,	// (0x00082405) welc_button_pane_t1

0xde05,	// (0x00087089) welc_service_logo_pane_g1

0xde0e,	// (0x00087092) welc_service_logo_pane_g2

0x0001,

0xfdb3,	// (0x00089037) welc_service_logo_pane_g

0x9f77,	// (0x000831fb) main_int_radio_pane

0x7183,	// (0x00080407) list_single_fs_dyc_pane_g1

0x0fa3,	// (0x0007a227) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0fa3,	// (0x0007a227) list_double_large_graphic_phob2_pane_g3

0x8d0a,	// (0x00081f8e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8d0a,	// (0x00081f8e) list_double_large_graphic_phob2_pane_g4

0x918f,	// (0x00082413) main_int_radio1_pane_ParamLimits

0x918f,	// (0x00082413) main_int_radio1_pane

0xde17,	// (0x0008709b) find_pane_cp02

0x91ac,	// (0x00082430) input_focus_pane_cp12_ParamLimits

0x91ac,	// (0x00082430) input_focus_pane_cp12

0x91bc,	// (0x00082440) input_focus_pane_cp13_ParamLimits

0x91bc,	// (0x00082440) input_focus_pane_cp13

0x91d0,	// (0x00082454) input_focus_pane_cp14_ParamLimits

0x91d0,	// (0x00082454) input_focus_pane_cp14

0xde20,	// (0x000870a4) int_radio1_listscroll_pane

0x91e4,	// (0x00082468) main_int_radio1_pane_g1_ParamLimits

0x91e4,	// (0x00082468) main_int_radio1_pane_g1

0x91fc,	// (0x00082480) main_int_radio1_pane_t1_ParamLimits

0x91fc,	// (0x00082480) main_int_radio1_pane_t1

0x9217,	// (0x0008249b) main_int_radio1_pane_t2_ParamLimits

0x9217,	// (0x0008249b) main_int_radio1_pane_t2

0x9232,	// (0x000824b6) main_int_radio1_pane_t3_ParamLimits

0x9232,	// (0x000824b6) main_int_radio1_pane_t3

0x924d,	// (0x000824d1) main_int_radio1_pane_t4_ParamLimits

0x924d,	// (0x000824d1) main_int_radio1_pane_t4

0xde2a,	// (0x000870ae) main_int_radio1_pane_t5_ParamLimits

0xde2a,	// (0x000870ae) main_int_radio1_pane_t5

0x925f,	// (0x000824e3) main_int_radio1_pane_t6_ParamLimits

0x925f,	// (0x000824e3) main_int_radio1_pane_t6

0x9274,	// (0x000824f8) main_int_radio1_pane_t7_ParamLimits

0x9274,	// (0x000824f8) main_int_radio1_pane_t7

0x9289,	// (0x0008250d) main_int_radio1_pane_t8_ParamLimits

0x9289,	// (0x0008250d) main_int_radio1_pane_t8

0x92a8,	// (0x0008252c) main_int_radio1_pane_t9_ParamLimits

0x92a8,	// (0x0008252c) main_int_radio1_pane_t9

0x92ba,	// (0x0008253e) main_int_radio1_pane_t10_ParamLimits

0x92ba,	// (0x0008253e) main_int_radio1_pane_t10

0x92e0,	// (0x00082564) main_int_radio1_pane_t11_ParamLimits

0x92e0,	// (0x00082564) main_int_radio1_pane_t11

0x9306,	// (0x0008258a) main_int_radio1_pane_t12_ParamLimits

0x9306,	// (0x0008258a) main_int_radio1_pane_t12

0x000b,

0xfdb8,	// (0x0008903c) main_int_radio1_pane_t_ParamLimits

0xfdb8,	// (0x0008903c) main_int_radio1_pane_t

0xde3c,	// (0x000870c0) int_radio_list_pane

0xd7b7,	// (0x00086a3b) scroll_pane_cp037

0xde44,	// (0x000870c8) list_double_large_graphic_int_radio_pane_ParamLimits

0xde44,	// (0x000870c8) list_double_large_graphic_int_radio_pane

0xde5d,	// (0x000870e1) list_double_large_graphic_int_radio_pane_g1

0xde66,	// (0x000870ea) list_double_large_graphic_int_radio_pane_t1

0xde74,	// (0x000870f8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdd1,	// (0x00089055) list_double_large_graphic_int_radio_pane_t

0x9f77,	// (0x000831fb) list_highlight_pane_cp027

0xddc2,	// (0x00087046) main_button_pane_4

0x8e86,	// (0x0008210a) main_welc_pane_g4_ParamLimits

0x8e86,	// (0x0008210a) main_welc_pane_g4

0x8ef0,	// (0x00082174) main_welc_pane_t4_ParamLimits

0x8ef0,	// (0x00082174) main_welc_pane_t4

0x8f0b,	// (0x0008218f) main_welc_pane_t5_ParamLimits

0x8f0b,	// (0x0008218f) main_welc_pane_t5

0x8f4c,	// (0x000821d0) main_welc_pane_t6_ParamLimits

0x8f4c,	// (0x000821d0) main_welc_pane_t6

0x9026,	// (0x000822aa) welc_button_pane_2_ParamLimits

0x9026,	// (0x000822aa) welc_button_pane_2

0x904b,	// (0x000822cf) welc_button_pane_3_ParamLimits

0x904b,	// (0x000822cf) welc_button_pane_3

0xddc2,	// (0x00087046) welc_button_pane_4

0x9073,	// (0x000822f7) welc_button_pane_5_ParamLimits

0x9073,	// (0x000822f7) welc_button_pane_5

0x10ac,	// (0x0007a330) main_popup_welc_pane

0xde9a,	// (0x0008711e) main_welc_sk_g3

0xdea4,	// (0x00087128) main_welc_sk_g4

0xdeae,	// (0x00087132) main_welc_sk_t3

0xdebe,	// (0x00087142) main_welc_sk_t4

0xdece,	// (0x00087152) popup_welc_pane_t4

0xdedc,	// (0x00087160) popup_welc_pane_t5

0xdeea,	// (0x0008716e) popup_welc_pane_t6

0x9f77,	// (0x000831fb) main_acti_pane

0x9f77,	// (0x000831fb) main_sso_pane

0x9318,	// (0x0008259c) sso_body_pane_ParamLimits

0x9318,	// (0x0008259c) sso_body_pane

0x9338,	// (0x000825bc) sso_logo_pane_ParamLimits

0x9338,	// (0x000825bc) sso_logo_pane

0x9371,	// (0x000825f5) sso_sk_pane_ParamLimits

0x9371,	// (0x000825f5) sso_sk_pane

0xdf28,	// (0x000871ac) main_sso_logo_pane_g1

0x9383,	// (0x00082607) sso_sk_pane_t1_ParamLimits

0x9383,	// (0x00082607) sso_sk_pane_t1

0x939d,	// (0x00082621) sso_sk_pane_t2_ParamLimits

0x939d,	// (0x00082621) sso_sk_pane_t2

0x0001,

0xfdd6,	// (0x0008905a) sso_sk_pane_t_ParamLimits

0xfdd6,	// (0x0008905a) sso_sk_pane_t

0xdf31,	// (0x000871b5) aid_sso_gap

0xdf3a,	// (0x000871be) aid_sso_txt1

0xdf44,	// (0x000871c8) aid_sso_txt2

0xdf4e,	// (0x000871d2) aid_sso_txt3

0x0002,

0xfddb,	// (0x0008905f) aid_sso_txt

0xdf58,	// (0x000871dc) aid_sso_widget

0x9407,	// (0x0008268b) sso_btn_pane_ParamLimits

0x9407,	// (0x0008268b) sso_btn_pane

0x949b,	// (0x0008271f) sso_option_pane_ParamLimits

0x949b,	// (0x0008271f) sso_option_pane

0x954f,	// (0x000827d3) sso_query_pane_ParamLimits

0x954f,	// (0x000827d3) sso_query_pane

0x95a5,	// (0x00082829) sso_query_pane_cp01_ParamLimits

0x95a5,	// (0x00082829) sso_query_pane_cp01

0x95fd,	// (0x00082881) sso_t_hdr_pane_ParamLimits

0x95fd,	// (0x00082881) sso_t_hdr_pane

0x9627,	// (0x000828ab) sso_t_nml_pane_ParamLimits

0x9627,	// (0x000828ab) sso_t_nml_pane

0x967d,	// (0x00082901) sso_t_sub_pane

0x9345,	// (0x000825c9) sso_popup_window_ParamLimits

0x9345,	// (0x000825c9) sso_popup_window

0x93b3,	// (0x00082637) sso_apps_pane_ParamLimits

0x93b3,	// (0x00082637) sso_apps_pane

0x93dd,	// (0x00082661) sso_body_pane_g1

0x93e7,	// (0x0008266b) sso_body_pane_t1

0x93f7,	// (0x0008267b) sso_body_pane_t2

0x0001,

0xfde2,	// (0x00089066) sso_body_pane_t

0x9453,	// (0x000826d7) sso_btn_pane_cp01_ParamLimits

0x9453,	// (0x000826d7) sso_btn_pane_cp01

0x9523,	// (0x000827a7) sso_prog_pane_ParamLimits

0x9523,	// (0x000827a7) sso_prog_pane

0x96ac,	// (0x00082930) sso_t_hdr_pane_t1_ParamLimits

0x96ac,	// (0x00082930) sso_t_hdr_pane_t1

0xdf62,	// (0x000871e6) input_focus_pane_cp10_ParamLimits

0xdf62,	// (0x000871e6) input_focus_pane_cp10

0xdf76,	// (0x000871fa) sso_query_pane_t1_ParamLimits

0xdf76,	// (0x000871fa) sso_query_pane_t1

0xdf89,	// (0x0008720d) sso_query_pane_t2_ParamLimits

0xdf89,	// (0x0008720d) sso_query_pane_t2

0xdfa2,	// (0x00087226) sso_query_pane_t3_ParamLimits

0xdfa2,	// (0x00087226) sso_query_pane_t3

0xdfcc,	// (0x00087250) sso_query_pane_t4_ParamLimits

0xdfcc,	// (0x00087250) sso_query_pane_t4

0x0003,

0xfde7,	// (0x0008906b) sso_query_pane_t_ParamLimits

0xfde7,	// (0x0008906b) sso_query_pane_t

0xdff0,	// (0x00087274) bg_button_pane_cp22

0xde82,	// (0x00087106) sso_btn_pane_t1

0x96bf,	// (0x00082943) sso_t_nml_pane_t1_ParamLimits

0x96bf,	// (0x00082943) sso_t_nml_pane_t1

0xdff9,	// (0x0008727d) sso_option_row_pane_ParamLimits

0xdff9,	// (0x0008727d) sso_option_row_pane

0xe006,	// (0x0008728a) sso_t_sub_pane_t1_ParamLimits

0xe006,	// (0x0008728a) sso_t_sub_pane_t1

0x9fee,	// (0x00083272) bg_popup_window_pane_cp11_ParamLimits

0x9fee,	// (0x00083272) bg_popup_window_pane_cp11

0xe023,	// (0x000872a7) popup_sk_window_cp01_ParamLimits

0xe023,	// (0x000872a7) popup_sk_window_cp01

0xe030,	// (0x000872b4) sso_popup_body_pane_ParamLimits

0xe030,	// (0x000872b4) sso_popup_body_pane

0xe03d,	// (0x000872c1) scroll_pane_cp21_ParamLimits

0xe03d,	// (0x000872c1) scroll_pane_cp21

0xe04a,	// (0x000872ce) sso_popup_body_t_pane_ParamLimits

0xe04a,	// (0x000872ce) sso_popup_body_t_pane

0xe057,	// (0x000872db) sso_popup_body_t_hdr_pane_ParamLimits

0xe057,	// (0x000872db) sso_popup_body_t_hdr_pane

0x96da,	// (0x0008295e) sso_popup_body_t_nml_pane_ParamLimits

0x96da,	// (0x0008295e) sso_popup_body_t_nml_pane

0x9701,	// (0x00082985) sso_popup_body_t_sub_pane_ParamLimits

0x9701,	// (0x00082985) sso_popup_body_t_sub_pane

0xe069,	// (0x000872ed) sso_popup_body_t_hdr_pane_t1

0x9724,	// (0x000829a8) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9724,	// (0x000829a8) sso_popup_body_t_nml_pane_t1

0xe079,	// (0x000872fd) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe079,	// (0x000872fd) sso_popup_body_t_sub_pane_t1

0xa72b,	// (0x000839af) sso_prog_pane_g1

0x975d,	// (0x000829e1) sso_apps_pane_comp1_ParamLimits

0x975d,	// (0x000829e1) sso_apps_pane_comp1

0xe09e,	// (0x00087322) sso_apps_pane_comp1_g1

0xe0a6,	// (0x0008732a) sso_apps_pane_comp1_t1

0xe0c2,	// (0x00087346) sso_option_row_pane_g1

0xe0da,	// (0x0008735e) sso_option_row_pane_t1

0x8174,	// (0x000813f8) list_cmail_pane_ParamLimits

0x9f77,	// (0x000831fb) main_call7_pane

0x8dd8,	// (0x0008205c) bg_welc_area_ParamLimits

0x8dd8,	// (0x0008205c) bg_welc_area

0x8f8a,	// (0x0008220e) sso_t_hdr_pane_a_t1_ParamLimits

0x8f8a,	// (0x0008220e) sso_t_hdr_pane_a_t1

0x8fa5,	// (0x00082229) sso_t_nml_pane_a_t1_ParamLimits

0x8fa5,	// (0x00082229) sso_t_nml_pane_a_t1

0x8fd4,	// (0x00082258) sso_t_sub_pane_a_t1_ParamLimits

0x8fd4,	// (0x00082258) sso_t_sub_pane_a_t1

0x9089,	// (0x0008230d) welc_button_pane_cp01_ParamLimits

0x9089,	// (0x0008230d) welc_button_pane_cp01

0xde82,	// (0x00087106) sso_btn_pane_t1_copy1

0xde91,	// (0x00087115) welc_button_pane_2_comp1

0xdef8,	// (0x0008717c) sso_t_hdr_pane_p_t1

0xdf08,	// (0x0008718c) sso_t_nml_pane_p_t1

0xdf18,	// (0x0008719c) sso_t_sub_pane_p_t1

0x9f77,	// (0x000831fb) main_att_pane

0x9f77,	// (0x000831fb) main_vod_pane

0x967d,	// (0x00082901) sso_t_sub_pane_ParamLimits

0xe0b4,	// (0x00087338) input_focus_pane_cp10_t1

0xe0da,	// (0x0008735e) sso_option_row_pane_t1_ParamLimits

0x9777,	// (0x000829fb) main_att_body_pane_ParamLimits

0x9777,	// (0x000829fb) main_att_body_pane

0x978d,	// (0x00082a11) att_btn_emg_pane_ParamLimits

0x978d,	// (0x00082a11) att_btn_emg_pane

0x97ac,	// (0x00082a30) att_btn_pane_ParamLimits

0x97ac,	// (0x00082a30) att_btn_pane

0x981b,	// (0x00082a9f) att_btn_pane_cp01_ParamLimits

0x981b,	// (0x00082a9f) att_btn_pane_cp01

0x985b,	// (0x00082adf) att_li_srv_pane_ParamLimits

0x985b,	// (0x00082adf) att_li_srv_pane

0x9878,	// (0x00082afc) att_opt_pane_ParamLimits

0x9878,	// (0x00082afc) att_opt_pane

0x98c2,	// (0x00082b46) att_query_pane_ParamLimits

0x98c2,	// (0x00082b46) att_query_pane

0x993b,	// (0x00082bbf) att_query_pane_cp01_ParamLimits

0x993b,	// (0x00082bbf) att_query_pane_cp01

0x9987,	// (0x00082c0b) att_t_hdr_pane_ParamLimits

0x9987,	// (0x00082c0b) att_t_hdr_pane

0x99f3,	// (0x00082c77) att_t_nml_pane_ParamLimits

0x99f3,	// (0x00082c77) att_t_nml_pane

0x9a63,	// (0x00082ce7) att_t_nml_pane_cp01_ParamLimits

0x9a63,	// (0x00082ce7) att_t_nml_pane_cp01

0x9a8f,	// (0x00082d13) att_t_nmlb_pane_ParamLimits

0x9a8f,	// (0x00082d13) att_t_nmlb_pane

0x9afc,	// (0x00082d80) att_term_pane_ParamLimits

0x9afc,	// (0x00082d80) att_term_pane

0x9b46,	// (0x00082dca) main_att_body_pane_g1_ParamLimits

0x9b46,	// (0x00082dca) main_att_body_pane_g1

0xe0f6,	// (0x0008737a) att_t_hdr_pane_t1_ParamLimits

0xe0f6,	// (0x0008737a) att_t_hdr_pane_t1

0xe10f,	// (0x00087393) att_t_nml_pane_t1_ParamLimits

0xe10f,	// (0x00087393) att_t_nml_pane_t1

0xe134,	// (0x000873b8) att_btn_pane_t1

0xdff0,	// (0x00087274) bg_button_pane_cp23

0x9b72,	// (0x00082df6) att_li_srv_row_pane_ParamLimits

0x9b72,	// (0x00082df6) att_li_srv_row_pane

0xe143,	// (0x000873c7) att_t_nmlb_pane_t1_ParamLimits

0xe143,	// (0x000873c7) att_t_nmlb_pane_t1

0xe15f,	// (0x000873e3) att_query_pane_t1

0xe16e,	// (0x000873f2) att_query_pane_t2

0xe17d,	// (0x00087401) att_query_pane_t3

0x0002,

0xfdf5,	// (0x00089079) att_query_pane_t

0xe18c,	// (0x00087410) input_focus_pane_cp11

0xe195,	// (0x00087419) att_term_pane_t1_ParamLimits

0xe195,	// (0x00087419) att_term_pane_t1

0x9f77,	// (0x000831fb) att_opt_row_pane

0xe1b2,	// (0x00087436) att_opt_row_pane_g1

0xe1ba,	// (0x0008743e) att_opt_row_pane_t1_ParamLimits

0xe1ba,	// (0x0008743e) att_opt_row_pane_t1

0x9b82,	// (0x00082e06) att_li_srv_row_pane_g1

0x9b8a,	// (0x00082e0e) att_li_srv_row_pane_t1_ParamLimits

0x9b8a,	// (0x00082e0e) att_li_srv_row_pane_t1

0x9b8a,	// (0x00082e0e) att_li_srv_row_pane_t2_ParamLimits

0x9b8a,	// (0x00082e0e) att_li_srv_row_pane_t2

0x0001,

0xfdfc,	// (0x00089080) att_li_srv_row_pane_t_ParamLimits

0xfdfc,	// (0x00089080) att_li_srv_row_pane_t

0xe1d3,	// (0x00087457) att_btn_close_pane_g1

0x9f77,	// (0x000831fb) bg_button_pane_cp24

0x9b9f,	// (0x00082e23) main_vod_body_pane_ParamLimits

0x9b9f,	// (0x00082e23) main_vod_body_pane

0x9bb3,	// (0x00082e37) main_vod_body_pane_g1_ParamLimits

0x9bb3,	// (0x00082e37) main_vod_body_pane_g1

0x9be7,	// (0x00082e6b) scroll_pane_cp24_ParamLimits

0x9be7,	// (0x00082e6b) scroll_pane_cp24

0x9c35,	// (0x00082eb9) vod_btn_pane_ParamLimits

0x9c35,	// (0x00082eb9) vod_btn_pane

0x9c7b,	// (0x00082eff) vod_det_pane_ParamLimits

0x9c7b,	// (0x00082eff) vod_det_pane

0x9cab,	// (0x00082f2f) vod_logo_g1_ParamLimits

0x9cab,	// (0x00082f2f) vod_logo_g1

0x9ce9,	// (0x00082f6d) vod_opt_pane_ParamLimits

0x9ce9,	// (0x00082f6d) vod_opt_pane

0x9d1c,	// (0x00082fa0) vod_opt_pane_cp01_ParamLimits

0x9d1c,	// (0x00082fa0) vod_opt_pane_cp01

0x9d48,	// (0x00082fcc) vod_query_pane_ParamLimits

0x9d48,	// (0x00082fcc) vod_query_pane

0x9d73,	// (0x00082ff7) vod_query_pane_cp01_ParamLimits

0x9d73,	// (0x00082ff7) vod_query_pane_cp01

0x9d7f,	// (0x00083003) vod_t_nml_pane_ParamLimits

0x9d7f,	// (0x00083003) vod_t_nml_pane

0x9e28,	// (0x000830ac) vod_t_nml_pane_cp01_ParamLimits

0x9e28,	// (0x000830ac) vod_t_nml_pane_cp01

0x9e64,	// (0x000830e8) vod_t_sub_pane_ParamLimits

0x9e64,	// (0x000830e8) vod_t_sub_pane

0x9e95,	// (0x00083119) vod_t_sub_pane_cp01_ParamLimits

0x9e95,	// (0x00083119) vod_t_sub_pane_cp01

0xe18c,	// (0x00087410) vod_query_field_pane

0xe1db,	// (0x0008745f) vod_query_pane_t1

0xe1ea,	// (0x0008746e) bg_button_pane_cp25

0xde82,	// (0x00087106) sso_btn_pane_t1_copy2

0x9ec1,	// (0x00083145) vod_t_nml_pane_t1_ParamLimits

0x9ec1,	// (0x00083145) vod_t_nml_pane_t1

0xe1f3,	// (0x00087477) vod_opt_row_pane_ParamLimits

0xe1f3,	// (0x00087477) vod_opt_row_pane

0xe205,	// (0x00087489) vod_t_sub_pane_t1_ParamLimits

0xe205,	// (0x00087489) vod_t_sub_pane_t1

0xe21e,	// (0x000874a2) vod_det_cell_pane_ParamLimits

0xe21e,	// (0x000874a2) vod_det_cell_pane

0x9f77,	// (0x000831fb) input_focus_pane_cp15

0xe22f,	// (0x000874b3) vod_query_field_pane_t1

0xe23d,	// (0x000874c1) vod_opt_row_pane_g1_ParamLimits

0xe23d,	// (0x000874c1) vod_opt_row_pane_g1

0xe249,	// (0x000874cd) vod_opt_row_pane_t1_ParamLimits

0xe249,	// (0x000874cd) vod_opt_row_pane_t1

0xe269,	// (0x000874ed) vod_det_cell_field_pane

0xe272,	// (0x000874f6) vod_det_cell_pane_g1

0xe27a,	// (0x000874fe) vod_det_cell_pane_t1

0x9f77,	// (0x000831fb) input_focus_pane_cp16

0xe289,	// (0x0008750d) vod_det_cell_field_pane_t1

0x88f4,	// (0x00081b78) call7_btn_grp_pane_ParamLimits

0x88f4,	// (0x00081b78) call7_btn_grp_pane

0x9ef0,	// (0x00083174) call7_bubble_pane_ParamLimits

0x9ef0,	// (0x00083174) call7_bubble_pane

0x9f07,	// (0x0008318b) cell_call7_btn_pane_ParamLimits

0x9f07,	// (0x0008318b) cell_call7_btn_pane

0x9f1b,	// (0x0008319f) call7_pane_g1_ParamLimits

0x9f1b,	// (0x0008319f) call7_pane_g1

0x9f2a,	// (0x000831ae) call7_windows_conf_pane_ParamLimits

0x9f2a,	// (0x000831ae) call7_windows_conf_pane

0x9f44,	// (0x000831c8) popup_call7_1st_window_ParamLimits

0x9f44,	// (0x000831c8) popup_call7_1st_window

0x9f55,	// (0x000831d9) popup_call7_2nd_window_ParamLimits

0x9f55,	// (0x000831d9) popup_call7_2nd_window

0x9f66,	// (0x000831ea) popup_call7_3rd_window_ParamLimits

0x9f66,	// (0x000831ea) popup_call7_3rd_window

0x9f77,	// (0x000831fb) bg_button_pane_cp26

0xdc0d,	// (0x00086e91) cell_call7_btn_pane_g1

0xdc16,	// (0x00086e9a) cell_call7_btn_pane_t1

0x9f77,	// (0x000831fb) bg_popup_window_pane_cp12

0xe297,	// (0x0008751b) popup_call7_1st_window_g1

0xe29f,	// (0x00087523) popup_call7_1st_window_g2

0xe2a7,	// (0x0008752b) popup_call7_1st_window_g3

0x0002,

0xfe01,	// (0x00089085) popup_call7_1st_window_g

0xe2af,	// (0x00087533) popup_call7_1st_window_t1

0xe2be,	// (0x00087542) popup_call7_1st_window_t2

0xe2cc,	// (0x00087550) popup_call7_1st_window_t3

0x0002,

0xfe08,	// (0x0008908c) popup_call7_1st_window_t

0x9f77,	// (0x000831fb) bg_popup_window_pane_cp13

0xe2da,	// (0x0008755e) popup_call7_2nd_window_g1

0xe2e2,	// (0x00087566) popup_call7_2nd_window_g2

0xe2ea,	// (0x0008756e) popup_call7_2nd_window_g3

0x0002,

0xfe0f,	// (0x00089093) popup_call7_2nd_window_g

0xe2f2,	// (0x00087576) popup_call7_2nd_window_t1

0x9f77,	// (0x000831fb) bg_popup_window_pane_cp14

0xe301,	// (0x00087585) call7_list_conf_pane

0xe309,	// (0x0008758d) call7_list_conf_row_pane_ParamLimits

0xe309,	// (0x0008758d) call7_list_conf_row_pane

0xe31c,	// (0x000875a0) call7_list_conf_row_pane_g1

0xe324,	// (0x000875a8) call7_list_conf_row_pane_g2

0x0001,

0xfe16,	// (0x0008909a) call7_list_conf_row_pane_g

0xe32c,	// (0x000875b0) call7_list_conf_row_pane_t1

0x9f77,	// (0x000831fb) list_highlight_pane_cp22

0x94ef,	// (0x00082773) sso_option_pane_cp01_ParamLimits

0x94ef,	// (0x00082773) sso_option_pane_cp01

0xa66a,	// (0x000838ee) msg_header_pane_ParamLimits

0xb5cd,	// (0x00084851) bg_button_pane_cp01_ParamLimits

0xb5e1,	// (0x00084865) input_focus_pane_cp07_ParamLimits

0x7f8e,	// (0x00081212) popup_email_progress_window

0xa72b,	// (0x000839af) popup_email_progress_window_g1

0xe33a,	// (0x000875be) popup_email_progress_window_g2

0x0001,

0xfe1b,	// (0x0008909f) popup_email_progress_window_g

0xe342,	// (0x000875c6) popup_email_progress_window_t1

0x9f77,	// (0x000831fb) cmail_conv_pane

0xd559,	// (0x000867dd) list_single_dyc_row_pane_g5_ParamLimits

0xd559,	// (0x000867dd) list_single_dyc_row_pane_g5

0xd565,	// (0x000867e9) list_single_dyc_row_pane_g6_ParamLimits

0xd565,	// (0x000867e9) list_single_dyc_row_pane_g6

0xd57d,	// (0x00086801) list_single_dyc_row_pane_g7_ParamLimits

0xd57d,	// (0x00086801) list_single_dyc_row_pane_g7

0x8e05,	// (0x00082089) main_button_pane_5_ParamLimits

0x8e05,	// (0x00082089) main_button_pane_5

0x932c,	// (0x000825b0) sso_emg_call_btn_pane_ParamLimits

0x932c,	// (0x000825b0) sso_emg_call_btn_pane

0x9692,	// (0x00082916) sso_t_sub_pane_cp01_ParamLimits

0x9692,	// (0x00082916) sso_t_sub_pane_cp01

0xe0c2,	// (0x00087346) sso_option_row_pane_g1_ParamLimits

0xe0ce,	// (0x00087352) sso_option_row_pane_g2_ParamLimits

0xe0ce,	// (0x00087352) sso_option_row_pane_g2

0x0001,

0xfdf0,	// (0x00089074) sso_option_row_pane_g_ParamLimits

0xfdf0,	// (0x00089074) sso_option_row_pane_g

0x9839,	// (0x00082abd) att_btn_pane_cp02_ParamLimits

0x9839,	// (0x00082abd) att_btn_pane_cp02

0xe350,	// (0x000875d4) cmail_conv_hdr_pane

0xe359,	// (0x000875dd) list_cmail_conv_pane

0xe363,	// (0x000875e7) scroll_pane_cp31

0xe36b,	// (0x000875ef) cmail_conv_hdr_pane_t1

0xe379,	// (0x000875fd) cmail_conv_hdr_pane_t2

0x0001,

0xfe20,	// (0x000890a4) cmail_conv_hdr_pane_t

0xe387,	// (0x0008760b) bubble_cmail_conv_pane_ParamLimits

0xe387,	// (0x0008760b) bubble_cmail_conv_pane

0x83b1,	// (0x00081635) aid_size_colorization_pane

0xa9d8,	// (0x00083c5c) bg_bubble_cmail_conv_pane

0xe39f,	// (0x00087623) body_bubble_cmail_conv_pane

0xaede,	// (0x00084162) bubble_cmail_conv_pane_g1

0xe3a7,	// (0x0008762b) bubble_cmail_conv_pane_g2

0xe3af,	// (0x00087633) bubble_cmail_conv_pane_g3

0x0002,

0xfe25,	// (0x000890a9) bubble_cmail_conv_pane_g

0xe3b7,	// (0x0008763b) bubble_cmail_conv_pane_t1

0x7fde,	// (0x00081262) bg_bubble_cmail_conv_pane_g1

0x7fe7,	// (0x0008126b) bg_bubble_cmail_conv_pane_g2

0x7ff0,	// (0x00081274) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfbc6,	// (0x00088e4a) bg_bubble_cmail_conv_pane_g

0xe3c5,	// (0x00087649) body_bubble_cmail_conv_pane_t1_ParamLimits

0xe3c5,	// (0x00087649) body_bubble_cmail_conv_pane_t1

0xe3dc,	// (0x00087660) body_bubble_cmail_conv_pane_t2_ParamLimits

0xe3dc,	// (0x00087660) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe2c,	// (0x000890b0) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe2c,	// (0x000890b0) body_bubble_cmail_conv_pane_t

0x9fee,	// (0x00083272) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
