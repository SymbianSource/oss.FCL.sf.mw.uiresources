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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003e3b8 };

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
0x1ef2,	// (0x000402aa) Screen

0x1efe,	// (0x000402b6) application_window

0x1f5a,	// (0x00040312) area_bottom_pane_ParamLimits

0x1f5a,	// (0x00040312) area_bottom_pane

0x1fb8,	// (0x00040370) area_top_pane_ParamLimits

0x1fb8,	// (0x00040370) area_top_pane

0x201c,	// (0x000403d4) call_video_uplink_pane_ParamLimits

0x201c,	// (0x000403d4) call_video_uplink_pane

0x205b,	// (0x00040413) main_pane_ParamLimits

0x205b,	// (0x00040413) main_pane

0xca5c,	// (0x0004ae14) context_pane

0x5432,	// (0x000437ea) navi_pane

0x545a,	// (0x00043812) popup_cale_events_window_ParamLimits

0x545a,	// (0x00043812) popup_cale_events_window

0xca6f,	// (0x0004ae27) popup_mup_playback_window

0x5472,	// (0x0004382a) signal_pane

0xaa02,	// (0x00048dba) main_browser_pane

0xabb8,	// (0x00048f70) main_burst_pane

0x52a2,	// (0x0004365a) main_calc_pane

0xca42,	// (0x0004adfa) main_cale_day_pane

0x2738,	// (0x00040af0) main_cale_month_pane

0xca42,	// (0x0004adfa) main_cale_week_pane

0xabb8,	// (0x00048f70) main_call_pane

0xa6e2,	// (0x00048a9a) main_call_poc_pane

0xabb8,	// (0x00048f70) main_camera_pane

0xabb8,	// (0x00048f70) main_chi_dic_pane

0xb3bf,	// (0x00049777) main_clock_pane

0xa6e2,	// (0x00048a9a) main_fmradio_pane

0xabb8,	// (0x00048f70) main_graph_messa_pane

0xa6e2,	// (0x00048a9a) main_help_pane

0xaa02,	// (0x00048dba) main_im_pane

0xa93d,	// (0x00048cf5) main_image_pane_ParamLimits

0xa93d,	// (0x00048cf5) main_image_pane

0xa6e2,	// (0x00048a9a) main_location2_pane

0xabb8,	// (0x00048f70) main_location_pane

0xa93d,	// (0x00048cf5) main_messa_pane

0xa6e2,	// (0x00048a9a) main_mp2_pane

0xabb8,	// (0x00048f70) main_mp_pane

0xa6e2,	// (0x00048a9a) main_msg_pane

0xa6e2,	// (0x00048a9a) main_mup_eq_pane

0xa6e2,	// (0x00048a9a) main_mup_pane

0xaa02,	// (0x00048dba) main_notes_pane

0xa6e2,	// (0x00048a9a) main_pec_pane

0xa6e2,	// (0x00048a9a) main_phob_pane

0xa6e2,	// (0x00048a9a) main_pinb_pane

0xa6e2,	// (0x00048a9a) main_postcard_pane

0xa6e2,	// (0x00048a9a) main_qdial_pane

0xabb8,	// (0x00048f70) main_skin_pane

0xa6e2,	// (0x00048a9a) main_smil2_pane

0xabb8,	// (0x00048f70) main_smil_pane

0xabb8,	// (0x00048f70) main_video_pane

0xabb8,	// (0x00048f70) main_video_tele_pane

0xa93d,	// (0x00048cf5) main_viewer_pane_ParamLimits

0xa93d,	// (0x00048cf5) main_viewer_pane

0xabb8,	// (0x00048f70) main_vorec_pane

0x52e2,	// (0x0004369a) popup_blid_sat_info_window_ParamLimits

0x52e2,	// (0x0004369a) popup_blid_sat_info_window

0x5308,	// (0x000436c0) popup_dyc_status_message_window_ParamLimits

0x5308,	// (0x000436c0) popup_dyc_status_message_window

0x5318,	// (0x000436d0) popup_grid_large_graphic_window_ParamLimits

0x5318,	// (0x000436d0) popup_grid_large_graphic_window

0x53ad,	// (0x00043765) popup_loc_request_window_ParamLimits

0x53ad,	// (0x00043765) popup_loc_request_window

0x5406,	// (0x000437be) popup_wml_address_window_ParamLimits

0x5406,	// (0x000437be) popup_wml_address_window

0x517a,	// (0x00043532) call_muted_g1

0x4e39,	// (0x000431f1) popup_call_audio_conf_window_ParamLimits

0x4e39,	// (0x000431f1) popup_call_audio_conf_window

0x518a,	// (0x00043542) popup_call_audio_first_window_ParamLimits

0x518a,	// (0x00043542) popup_call_audio_first_window

0x51ca,	// (0x00043582) popup_call_audio_in_window_ParamLimits

0x51ca,	// (0x00043582) popup_call_audio_in_window

0x51ee,	// (0x000435a6) popup_call_audio_out_window_ParamLimits

0x51ee,	// (0x000435a6) popup_call_audio_out_window

0x5210,	// (0x000435c8) popup_call_audio_second_window_ParamLimits

0x5210,	// (0x000435c8) popup_call_audio_second_window

0x5240,	// (0x000435f8) popup_call_audio_wait_window_ParamLimits

0x5240,	// (0x000435f8) popup_call_audio_wait_window

0x5261,	// (0x00043619) popup_number_entry_window_ParamLimits

0x5261,	// (0x00043619) popup_number_entry_window

0xa29a,	// (0x00048652) bg_popup_call_pane_cp05_ParamLimits

0xa29a,	// (0x00048652) bg_popup_call_pane_cp05

0xa2ba,	// (0x00048672) popup_number_entry_window_t1

0xa2cd,	// (0x00048685) popup_number_entry_window_t2

0xa2df,	// (0x00048697) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004d47e) popup_number_entry_window_t

0xa326,	// (0x000486de) text_title_cp2

0xa339,	// (0x000486f1) bg_popup_call_pane_cp_ParamLimits

0xa339,	// (0x000486f1) bg_popup_call_pane_cp

0xa347,	// (0x000486ff) call_thumbnail_pane

0xa34f,	// (0x00048707) popup_call_audio_in_window_g1_ParamLimits

0xa34f,	// (0x00048707) popup_call_audio_in_window_g1

0xa35b,	// (0x00048713) popup_call_audio_in_window_g2_ParamLimits

0xa35b,	// (0x00048713) popup_call_audio_in_window_g2

0xa367,	// (0x0004871f) popup_call_audio_in_window_g3_ParamLimits

0xa367,	// (0x0004871f) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004d487) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004d487) popup_call_audio_in_window_g

0xa373,	// (0x0004872b) popup_call_audio_in_window_t1_ParamLimits

0xa373,	// (0x0004872b) popup_call_audio_in_window_t1

0xa38f,	// (0x00048747) popup_call_audio_in_window_t2_ParamLimits

0xa38f,	// (0x00048747) popup_call_audio_in_window_t2

0xa3ab,	// (0x00048763) popup_call_audio_in_window_t3_ParamLimits

0xa3ab,	// (0x00048763) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004d48e) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004d48e) popup_call_audio_in_window_t

0xa339,	// (0x000486f1) bg_popup_call_pane_cp01_ParamLimits

0xa339,	// (0x000486f1) bg_popup_call_pane_cp01

0xa347,	// (0x000486ff) call_thumbnail_pane_cp02

0xa3be,	// (0x00048776) call_type_pane_cp022

0xa3c6,	// (0x0004877e) popup_call_audio_out_window_g1_ParamLimits

0xa3c6,	// (0x0004877e) popup_call_audio_out_window_g1

0xa3d8,	// (0x00048790) popup_call_audio_out_window_g2_ParamLimits

0xa3d8,	// (0x00048790) popup_call_audio_out_window_g2

0xa3e4,	// (0x0004879c) popup_call_audio_out_window_g3_ParamLimits

0xa3e4,	// (0x0004879c) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004d495) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004d495) popup_call_audio_out_window_g

0xa3f6,	// (0x000487ae) popup_call_audio_out_window_t1_ParamLimits

0xa3f6,	// (0x000487ae) popup_call_audio_out_window_t1

0xa40e,	// (0x000487c6) popup_call_audio_out_window_t2_ParamLimits

0xa40e,	// (0x000487c6) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004d49c) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004d49c) popup_call_audio_out_window_t

0xa423,	// (0x000487db) bg_popup_call_pane_ParamLimits

0xa423,	// (0x000487db) bg_popup_call_pane

0x2226,	// (0x000405de) call_thumbnail_pane_cp_ParamLimits

0x2226,	// (0x000405de) call_thumbnail_pane_cp

0xa4a7,	// (0x0004885f) call_type_pane_cp01_ParamLimits

0xa4a7,	// (0x0004885f) call_type_pane_cp01

0xa4eb,	// (0x000488a3) popup_call_audio_first_window_g1_ParamLimits

0xa4eb,	// (0x000488a3) popup_call_audio_first_window_g1

0xa537,	// (0x000488ef) popup_call_audio_first_window_g2_ParamLimits

0xa537,	// (0x000488ef) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004d4a1) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004d4a1) popup_call_audio_first_window_g

0xa57b,	// (0x00048933) popup_call_audio_first_window_t1_ParamLimits

0xa57b,	// (0x00048933) popup_call_audio_first_window_t1

0xa627,	// (0x000489df) popup_call_audio_first_window_t4_ParamLimits

0xa627,	// (0x000489df) popup_call_audio_first_window_t4

0xa6b3,	// (0x00048a6b) popup_call_audio_first_window_t5_ParamLimits

0xa6b3,	// (0x00048a6b) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004d4a6) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004d4a6) popup_call_audio_first_window_t

0xa6e2,	// (0x00048a9a) bg_popup_call_pane_cp02

0xa6ec,	// (0x00048aa4) call_type_pane_cp023

0xa6f4,	// (0x00048aac) popup_call_audio_wait_window_g1

0xa6fc,	// (0x00048ab4) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004d4ad) popup_call_audio_wait_window_g

0xa704,	// (0x00048abc) popup_call_audio_wait_window_t3

0xa712,	// (0x00048aca) bg_popup_call_pane_cp03_ParamLimits

0xa712,	// (0x00048aca) bg_popup_call_pane_cp03

0xa772,	// (0x00048b2a) call_thumbnail_pane_cp011_ParamLimits

0xa772,	// (0x00048b2a) call_thumbnail_pane_cp011

0xa77e,	// (0x00048b36) call_type_pane_cp034_ParamLimits

0xa77e,	// (0x00048b36) call_type_pane_cp034

0xa7ba,	// (0x00048b72) popup_call_audio_second_window_g1_ParamLimits

0xa7ba,	// (0x00048b72) popup_call_audio_second_window_g1

0xa7f6,	// (0x00048bae) popup_call_audio_second_window_g2_ParamLimits

0xa7f6,	// (0x00048bae) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004d4b2) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004d4b2) popup_call_audio_second_window_g

0xa832,	// (0x00048bea) popup_call_audio_second_window_t1_ParamLimits

0xa832,	// (0x00048bea) popup_call_audio_second_window_t1

0xa8b3,	// (0x00048c6b) popup_call_audio_second_window_t2_ParamLimits

0xa8b3,	// (0x00048c6b) popup_call_audio_second_window_t2

0xa8e9,	// (0x00048ca1) popup_call_audio_second_window_t3_ParamLimits

0xa8e9,	// (0x00048ca1) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004d4b7) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004d4b7) popup_call_audio_second_window_t

0xa6e2,	// (0x00048a9a) bg_popup_call_pane_cp04

0xa91f,	// (0x00048cd7) list_conf_pane

0xa927,	// (0x00048cdf) popup_call_audio_conf_window_t1

0xa935,	// (0x00048ced) call_thumbnail_pane_g1

0xa93d,	// (0x00048cf5) bg_pinb_pane_ParamLimits

0xa93d,	// (0x00048cf5) bg_pinb_pane

0xa94b,	// (0x00048d03) find_pinb_pane

0xa954,	// (0x00048d0c) listscroll_pinb_pane_ParamLimits

0xa954,	// (0x00048d0c) listscroll_pinb_pane

0xa963,	// (0x00048d1b) pinb_bg_pane_g1

0x224a,	// (0x00040602) pinb_bg_pane_g2

0x2256,	// (0x0004060e) pinb_bg_pane_g3

0x2262,	// (0x0004061a) pinb_bg_pane_g4

0x226e,	// (0x00040626) pinb_bg_pane_g5

0x227a,	// (0x00040632) pinb_bg_pane_g6

0x2285,	// (0x0004063d) pinb_bg_pane_g7

0x2290,	// (0x00040648) pinb_bg_pane_g8

0x229b,	// (0x00040653) pinb_bg_pane_g9

0x22a5,	// (0x0004065d) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004d4be) pinb_bg_pane_g

0x22c2,	// (0x0004067a) grid_pinb_pane

0x22cd,	// (0x00040685) list_pinb_pane

0x22d8,	// (0x00040690) scroll_pane_cp01_ParamLimits

0x22d8,	// (0x00040690) scroll_pane_cp01

0xa96d,	// (0x00048d25) find_pinb_pane_g1_ParamLimits

0xa96d,	// (0x00048d25) find_pinb_pane_g1

0xa985,	// (0x00048d3d) find_pinb_pane_t1

0xa997,	// (0x00048d4f) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004d4d8) find_pinb_pane_t

0xa9ac,	// (0x00048d64) input_focus_pane_cp01_ParamLimits

0xa9ac,	// (0x00048d64) input_focus_pane_cp01

0x22ea,	// (0x000406a2) cell_pinb_pane_ParamLimits

0x22ea,	// (0x000406a2) cell_pinb_pane

0x230f,	// (0x000406c7) cell_pinb_pane_g1_ParamLimits

0x230f,	// (0x000406c7) cell_pinb_pane_g1

0x2324,	// (0x000406dc) cell_pinb_pane_g2_ParamLimits

0x2324,	// (0x000406dc) cell_pinb_pane_g2

0xa9b8,	// (0x00048d70) cell_pinb_pane_g3_ParamLimits

0xa9b8,	// (0x00048d70) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004d4dd) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004d4dd) cell_pinb_pane_g

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp01

0x2330,	// (0x000406e8) list_pinb_item_pane_ParamLimits

0x2330,	// (0x000406e8) list_pinb_item_pane

0xa6e2,	// (0x00048a9a) list_highlight_pane_cp02

0x234e,	// (0x00040706) list_pinb_item_pane_g1_ParamLimits

0x234e,	// (0x00040706) list_pinb_item_pane_g1

0x235b,	// (0x00040713) list_pinb_item_pane_g2_ParamLimits

0x235b,	// (0x00040713) list_pinb_item_pane_g2

0x2367,	// (0x0004071f) list_pinb_item_pane_g3_ParamLimits

0x2367,	// (0x0004071f) list_pinb_item_pane_g3

0x2378,	// (0x00040730) list_pinb_item_pane_g4_ParamLimits

0x2378,	// (0x00040730) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004d4e4) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004d4e4) list_pinb_item_pane_g

0x2384,	// (0x0004073c) list_pinb_item_pane_t1_ParamLimits

0x2384,	// (0x0004073c) list_pinb_item_pane_t1

0x23b5,	// (0x0004076d) calc_display_pane

0x23d3,	// (0x0004078b) calc_paper_pane

0x23ef,	// (0x000407a7) grid_calc_pane

0xa6e2,	// (0x00048a9a) bg_list_pane_cp01

0x241b,	// (0x000407d3) clock_g1

0x2423,	// (0x000407db) clock_g2

0x0001,

0xf135,	// (0x0004d4ed) clock_g

0x242d,	// (0x000407e5) clock_t1_ParamLimits

0x242d,	// (0x000407e5) clock_t1

0x2442,	// (0x000407fa) clock_t2_ParamLimits

0x2442,	// (0x000407fa) clock_t2

0x2454,	// (0x0004080c) clock_t3_ParamLimits

0x2454,	// (0x0004080c) clock_t3

0x2466,	// (0x0004081e) clock_t4_ParamLimits

0x2466,	// (0x0004081e) clock_t4

0x2478,	// (0x00040830) clock_t5_ParamLimits

0x2478,	// (0x00040830) clock_t5

0x248d,	// (0x00040845) clock_t6_ParamLimits

0x248d,	// (0x00040845) clock_t6

0x249f,	// (0x00040857) clock_t7_ParamLimits

0x249f,	// (0x00040857) clock_t7

0x24b1,	// (0x00040869) clock_t8_ParamLimits

0x24b1,	// (0x00040869) clock_t8

0x24c7,	// (0x0004087f) clock_t9_ParamLimits

0x24c7,	// (0x0004087f) clock_t9

0x0008,

0xf13a,	// (0x0004d4f2) clock_t_ParamLimits

0xf13a,	// (0x0004d4f2) clock_t

0xa9c4,	// (0x00048d7c) popup_clock_analogue_window_cp02

0xa9c4,	// (0x00048d7c) popup_clock_digital_window_cp01

0xa9cc,	// (0x00048d84) listscroll_help_pane

0xa6e2,	// (0x00048a9a) phob_pre_status_pane

0xa9d6,	// (0x00048d8e) grid_qdial_pane

0xa93d,	// (0x00048cf5) listscroll_mce_pane

0xa93d,	// (0x00048cf5) bg_notes_pane

0xa9e0,	// (0x00048d98) list_notes_pane

0x24dd,	// (0x00040895) scroll_pane_cp06

0xa9ee,	// (0x00048da6) bg_calc_paper_pane

0x24ec,	// (0x000408a4) list_calc_pane

0xaa02,	// (0x00048dba) bg_calc_display_pane

0x2506,	// (0x000408be) calc_display_pane_t1

0x251b,	// (0x000408d3) calc_display_pane_t2

0x2530,	// (0x000408e8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004d505) calc_display_pane_t

0x2542,	// (0x000408fa) cell_calc_pane_ParamLimits

0x2542,	// (0x000408fa) cell_calc_pane

0xaa0e,	// (0x00048dc6) bg_calc_paper_pane_g1

0xaa34,	// (0x00048dec) bg_calc_paper_pane_g2

0xaa1a,	// (0x00048dd2) bg_calc_paper_pane_g3

0xaa40,	// (0x00048df8) bg_calc_paper_pane_g4

0xaa4c,	// (0x00048e04) bg_calc_paper_pane_g5

0x2571,	// (0x00040929) bg_calc_paper_pane_g6

0x2582,	// (0x0004093a) bg_calc_paper_pane_g7

0x2593,	// (0x0004094b) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004d50c) bg_calc_paper_pane_g

0x25a4,	// (0x0004095c) calc_bg_paper_pane_g9

0x25b5,	// (0x0004096d) list_calc_item_pane_ParamLimits

0x25b5,	// (0x0004096d) list_calc_item_pane

0xaa58,	// (0x00048e10) list_calc_item_pane_g1

0x25d6,	// (0x0004098e) list_calc_item_pane_t1_ParamLimits

0x25d6,	// (0x0004098e) list_calc_item_pane_t1

0x25e8,	// (0x000409a0) list_calc_item_pane_t2_ParamLimits

0x25e8,	// (0x000409a0) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004d51d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004d51d) list_calc_item_pane_t

0xaa65,	// (0x00048e1d) cell_calc_pane_g1

0xaa6f,	// (0x00048e27) grid_highlight_pane_cp02

0xd709,	// (0x0004bac1) bg_calc_display_pane_g1

0x2618,	// (0x000409d0) bg_calc_display_pane_g2

0xd712,	// (0x0004baca) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004d527) bg_calc_display_pane_g

0x2622,	// (0x000409da) cell_qdial_pane_ParamLimits

0x2622,	// (0x000409da) cell_qdial_pane

0x2638,	// (0x000409f0) cell_qdial_pane_g1_ParamLimits

0x2638,	// (0x000409f0) cell_qdial_pane_g1

0x2645,	// (0x000409fd) cell_qdial_pane_g2_ParamLimits

0x2645,	// (0x000409fd) cell_qdial_pane_g2

0xaa91,	// (0x00048e49) cell_qdial_pane_g3_ParamLimits

0xaa91,	// (0x00048e49) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004d52e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004d52e) cell_qdial_pane_g

0x2663,	// (0x00040a1b) cell_qdial_pane_t1_ParamLimits

0x2663,	// (0x00040a1b) cell_qdial_pane_t1

0x267b,	// (0x00040a33) cell_qdial_pane_t2_ParamLimits

0x267b,	// (0x00040a33) cell_qdial_pane_t2

0x268e,	// (0x00040a46) cell_qdial_pane_t3_ParamLimits

0x268e,	// (0x00040a46) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004d537) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004d537) cell_qdial_pane_t

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp04

0xaa9d,	// (0x00048e55) thumbnail_qdial_pane_ParamLimits

0xaa9d,	// (0x00048e55) thumbnail_qdial_pane

0xaaf9,	// (0x00048eb1) list_help_pane

0xab02,	// (0x00048eba) scroll_pane_cp02

0x26a1,	// (0x00040a59) help_list_pane_t1_ParamLimits

0x26a1,	// (0x00040a59) help_list_pane_t1

0x26c8,	// (0x00040a80) bg_notes_pane_g2

0x26d0,	// (0x00040a88) bg_notes_pane_g3

0x26d8,	// (0x00040a90) notes_bg_pane_g1

0x26e0,	// (0x00040a98) notes_bg_pane_g4

0x26e8,	// (0x00040aa0) notes_bg_pane_g5

0x26f0,	// (0x00040aa8) notes_bg_pane_g6

0x26f8,	// (0x00040ab0) notes_bg_pane_g7

0x2700,	// (0x00040ab8) notes_bg_pane_g8

0x2708,	// (0x00040ac0) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004d555) notes_bg_pane_g

0x2710,	// (0x00040ac8) list_notes_text_pane_ParamLimits

0x2710,	// (0x00040ac8) list_notes_text_pane

0xab0b,	// (0x00048ec3) list_notes_text_pane_g1

0x0b98,	// (0x0003ef50) list_notes_text_pane_t1

0x2738,	// (0x00040af0) listscroll_cale_week_pane

0x2764,	// (0x00040b1c) bg_cale_heading_pane

0x278d,	// (0x00040b45) bg_cale_pane_cp01

0x27af,	// (0x00040b67) cale_week_corner_pane

0x27ce,	// (0x00040b86) cale_week_day_heading_pane

0x27fc,	// (0x00040bb4) cale_week_scroll_pane_g1

0x2820,	// (0x00040bd8) cale_week_scroll_pane_g2

0x2838,	// (0x00040bf0) cale_week_scroll_pane_g3

0x2850,	// (0x00040c08) cale_week_scroll_pane_g4

0x2868,	// (0x00040c20) cale_week_scroll_pane_g5

0x2880,	// (0x00040c38) cale_week_scroll_pane_g6

0x28a0,	// (0x00040c58) cale_week_scroll_pane_g7

0x28c0,	// (0x00040c78) cale_week_scroll_pane_g8

0x28e0,	// (0x00040c98) cale_week_scroll_pane_g9

0x28fd,	// (0x00040cb5) cale_week_scroll_pane_g10

0x291a,	// (0x00040cd2) cale_week_scroll_pane_g11

0x2939,	// (0x00040cf1) cale_week_scroll_pane_g12

0x295e,	// (0x00040d16) cale_week_scroll_pane_g13

0x2987,	// (0x00040d3f) cale_week_scroll_pane_g14

0x29b0,	// (0x00040d68) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004d564) cale_week_scroll_pane_g

0x29f9,	// (0x00040db1) cale_week_time_pane

0x2a19,	// (0x00040dd1) grid_cale_week_pane

0xab40,	// (0x00048ef8) scroll_pane_cp08

0x2a4a,	// (0x00040e02) cell_cale_week_pane_ParamLimits

0x2a4a,	// (0x00040e02) cell_cale_week_pane

0x2ada,	// (0x00040e92) cale_week_day_heading_pane_t1

0x2b02,	// (0x00040eba) cale_week_day_heading_pane_t2

0x2b2f,	// (0x00040ee7) cale_week_day_heading_pane_t3

0x2b5c,	// (0x00040f14) cale_week_day_heading_pane_t4

0x2b89,	// (0x00040f41) cale_week_day_heading_pane_t5

0x2bb6,	// (0x00040f6e) cale_week_day_heading_pane_t6

0x2be3,	// (0x00040f9b) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004d585) cale_week_day_heading_pane_t

0xab5d,	// (0x00048f15) bg_cale_side_pane

0x2c0b,	// (0x00040fc3) cale_week_time_pane_t1

0x2c2f,	// (0x00040fe7) cale_week_time_pane_t2

0x2c53,	// (0x0004100b) cale_week_time_pane_t3

0x2c77,	// (0x0004102f) cale_week_time_pane_t4

0x2c9b,	// (0x00041053) cale_week_time_pane_t5

0x2cc1,	// (0x00041079) cale_week_time_pane_t6

0x2ce9,	// (0x000410a1) cale_week_time_pane_t7

0x2d15,	// (0x000410cd) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004d594) cale_week_time_pane_t

0x2d45,	// (0x000410fd) cell_cale_week_pane_g2

0x2d69,	// (0x00041121) cell_cale_week_pane_g3_ParamLimits

0x2d69,	// (0x00041121) cell_cale_week_pane_g3

0xab6b,	// (0x00048f23) grid_highlight_pane_cp07

0xab73,	// (0x00048f2b) listscroll_gms_pane

0xab7d,	// (0x00048f35) grid_gms_pane

0xab86,	// (0x00048f3e) listscroll_gms_pane_g1

0xab8e,	// (0x00048f46) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004d5a5) listscroll_gms_pane_g

0x2d81,	// (0x00041139) scroll_pane_cp010

0x2d8c,	// (0x00041144) cell_gms_pane_ParamLimits

0x2d8c,	// (0x00041144) cell_gms_pane

0x2d9f,	// (0x00041157) cell_gms_pane_g1

0xab96,	// (0x00048f4e) cell_gms_pane_g2

0xab9e,	// (0x00048f56) cell_gms_pane_g3

0xaba7,	// (0x00048f5f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004d5aa) cell_gms_pane_g

0xabb0,	// (0x00048f68) grid_highlight_pane_cp09

0x5122,	// (0x000434da) phob_pre_status_pane_g1

0x512a,	// (0x000434e2) phob_pre_status_pane_g2

0x5132,	// (0x000434ea) phob_pre_status_pane_g3

0x513a,	// (0x000434f2) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0004d995) phob_pre_status_pane_g

0x514a,	// (0x00043502) phob_pre_status_pane_t1

0x515a,	// (0x00043512) phob_pre_status_pane_t2

0x516a,	// (0x00043522) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0004d9a0) phob_pre_status_pane_t

0xabb8,	// (0x00048f70) bg_list_pane_cp05

0x2daf,	// (0x00041167) grid_vorec_pane

0x2db9,	// (0x00041171) vorec_t1

0x2dc7,	// (0x0004117f) vorec_t2

0x2dd5,	// (0x0004118d) vorec_t3

0x2de3,	// (0x0004119b) vorec_t4

0xa23b,	// (0x000485f3) vorec_t5

0xa249,	// (0x00048601) vorec_t6

0x0004,

0xf1fb,	// (0x0004d5b3) vorec_t

0xa257,	// (0x0004860f) wait_bar_pane_cp01

0x2dff,	// (0x000411b7) cell_vorec_pane_ParamLimits

0x2dff,	// (0x000411b7) cell_vorec_pane

0x2e14,	// (0x000411cc) cell_vorec_pane_g1

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp05

0x2e2c,	// (0x000411e4) cams_zoom_pane

0x2e38,	// (0x000411f0) image_vga_pane

0x2e47,	// (0x000411ff) main_camera_pane_g1

0x2e55,	// (0x0004120d) main_camera_pane_g2

0x2e61,	// (0x00041219) main_camera_pane_g3

0x2e6f,	// (0x00041227) main_camera_pane_g4

0x2e7d,	// (0x00041235) main_camera_pane_g5

0x2e8b,	// (0x00041243) main_camera_pane_g6

0x2e99,	// (0x00041251) main_camera_pane_g7

0x0007,

0xf206,	// (0x0004d5be) main_camera_pane_g

0x2ea7,	// (0x0004125f) main_camera_pane_t1

0x2eb9,	// (0x00041271) main_camera_pane_t2

0x0001,

0xf217,	// (0x0004d5cf) main_camera_pane_t

0x2edc,	// (0x00041294) cams_zoom_pane_cp_ParamLimits

0x2edc,	// (0x00041294) cams_zoom_pane_cp

0x2f00,	// (0x000412b8) image_cif_pane_ParamLimits

0x2f00,	// (0x000412b8) image_cif_pane

0x2f1e,	// (0x000412d6) image_subqcif_pane

0x2f28,	// (0x000412e0) main_video_pane_g1_ParamLimits

0x2f28,	// (0x000412e0) main_video_pane_g1

0x2f48,	// (0x00041300) main_video_pane_g2_ParamLimits

0x2f48,	// (0x00041300) main_video_pane_g2

0x2f78,	// (0x00041330) main_video_pane_g3_ParamLimits

0x2f78,	// (0x00041330) main_video_pane_g3

0x2fa1,	// (0x00041359) main_video_pane_g4_ParamLimits

0x2fa1,	// (0x00041359) main_video_pane_g4

0x2fca,	// (0x00041382) main_video_pane_g5_ParamLimits

0x2fca,	// (0x00041382) main_video_pane_g5

0xabcc,	// (0x00048f84) main_video_pane_g6_ParamLimits

0xabcc,	// (0x00048f84) main_video_pane_g6

0x0006,

0xf21c,	// (0x0004d5d4) main_video_pane_g_ParamLimits

0xf21c,	// (0x0004d5d4) main_video_pane_g

0x2fec,	// (0x000413a4) main_video_pane_t1_ParamLimits

0x2fec,	// (0x000413a4) main_video_pane_t1

0xabe6,	// (0x00048f9e) cams_zoom_pane_g1

0xabef,	// (0x00048fa7) cams_zoom_pane_g2

0xabf8,	// (0x00048fb0) cams_zoom_pane_g3

0xac01,	// (0x00048fb9) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0004d5e3) cams_zoom_pane_g

0x3036,	// (0x000413ee) grid_cams_pane

0x3044,	// (0x000413fc) linegrid_cams_pane

0x3050,	// (0x00041408) cell_cams_pane_ParamLimits

0x3050,	// (0x00041408) cell_cams_pane

0xac0a,	// (0x00048fc2) cams_burst_image_pane

0xac12,	// (0x00048fca) cell_cams_pane_g1

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp03

0xaa65,	// (0x00048e1d) mp_bg_pane_g1

0xa6e2,	// (0x00048a9a) bg_list_pane_cp03

0xc965,	// (0x0004ad1d) bg_mp_pane

0xc96d,	// (0x0004ad25) grid_mp_pane

0xc975,	// (0x0004ad2d) media_player_g1

0xc97f,	// (0x0004ad37) media_player_t1

0xc98d,	// (0x0004ad45) media_player_t2

0xc99b,	// (0x0004ad53) media_player_t3

0xc9a9,	// (0x0004ad61) media_player_t4

0xc9b7,	// (0x0004ad6f) media_player_t5

0xc9c5,	// (0x0004ad7d) media_player_t6

0xc9d3,	// (0x0004ad8b) media_player_t7

0x0006,

0xf5c7,	// (0x0004d97f) media_player_t

0xc9e1,	// (0x0004ad99) wait_bar_pane_cp02

0xf5ac,	// (0x0004d964) main_usb_pane_t

0x5119,	// (0x000434d1) cell_mp_pane

0xaa65,	// (0x00048e1d) cell_mp_pane_g1

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp06

0xac1a,	// (0x00048fd2) grid_skin_colour_pane

0xac22,	// (0x00048fda) list_highlight_pane_cp03

0x3065,	// (0x0004141d) skin_g1

0xac2a,	// (0x00048fe2) skin_t1

0xac39,	// (0x00048ff1) skin_t2

0x0001,

0xf260,	// (0x0004d618) skin_t

0x306f,	// (0x00041427) cell_skin_colour_pane_ParamLimits

0x306f,	// (0x00041427) cell_skin_colour_pane

0xac47,	// (0x00048fff) cell_skin_colour_pane_g1

0x30ef,	// (0x000414a7) call_video_g1_ParamLimits

0x30ef,	// (0x000414a7) call_video_g1

0x30ff,	// (0x000414b7) call_video_g2_ParamLimits

0x30ff,	// (0x000414b7) call_video_g2

0x0001,

0xf265,	// (0x0004d61d) call_video_g_ParamLimits

0xf265,	// (0x0004d61d) call_video_g

0x314f,	// (0x00041507) call_video_uplink_pane_cp1_ParamLimits

0x314f,	// (0x00041507) call_video_uplink_pane_cp1

0xac59,	// (0x00049011) call_video_uplink_pane_cp2

0x321d,	// (0x000415d5) video_down_crop_pane_ParamLimits

0x321d,	// (0x000415d5) video_down_crop_pane

0x330f,	// (0x000416c7) video_down_pane_ParamLimits

0x330f,	// (0x000416c7) video_down_pane

0xac61,	// (0x00049019) video_down_subqcif_pane_ParamLimits

0xac61,	// (0x00049019) video_down_subqcif_pane

0xac7b,	// (0x00049033) video_down_subqcif_pane_cp_ParamLimits

0xac7b,	// (0x00049033) video_down_subqcif_pane_cp

0xaca3,	// (0x0004905b) im_reading_pane_ParamLimits

0xaca3,	// (0x0004905b) im_reading_pane

0x342c,	// (0x000417e4) im_writing_pane_ParamLimits

0x342c,	// (0x000417e4) im_writing_pane

0x344a,	// (0x00041802) im_reading_pane_t1

0xacbd,	// (0x00049075) list_im_pane

0xacce,	// (0x00049086) scroll_pane_cp07

0x348c,	// (0x00041844) im_writing_pane_t1_ParamLimits

0x348c,	// (0x00041844) im_writing_pane_t1

0xace7,	// (0x0004909f) im_writing_pane_t2_ParamLimits

0xace7,	// (0x0004909f) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0004d627) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0004d627) im_writing_pane_t

0xa6e2,	// (0x00048a9a) input_focus_pane_cp04

0xa6e2,	// (0x00048a9a) input_focus_pane_cp05

0x349e,	// (0x00041856) list_im_single_pane_ParamLimits

0x349e,	// (0x00041856) list_im_single_pane

0x34b7,	// (0x0004186f) list_single_im_pane_t1

0x50dd,	// (0x00043495) blid_accuracy_pane

0x50e5,	// (0x0004349d) blid_compass_pane

0x50ef,	// (0x000434a7) main_location_t1

0x50fd,	// (0x000434b5) main_location_t2

0x510b,	// (0x000434c3) main_location_t3

0x0002,

0xf5d6,	// (0x0004d98e) main_location_t

0xa6e2,	// (0x00048a9a) aid_levels_location

0xaa65,	// (0x00048e1d) blid_accuracy_pane_g1

0xaa65,	// (0x00048e1d) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0004d689) blid_accuracy_pane_g

0xad2f,	// (0x000490e7) wml_content_pane

0xad6d,	// (0x00049125) wml_button_pane_ParamLimits

0xad6d,	// (0x00049125) wml_button_pane

0x34c6,	// (0x0004187e) wml_list_single_large_pane_ParamLimits

0x34c6,	// (0x0004187e) wml_list_single_large_pane

0x34e8,	// (0x000418a0) wml_list_single_medium_pane_ParamLimits

0x34e8,	// (0x000418a0) wml_list_single_medium_pane

0x350b,	// (0x000418c3) wml_list_single_small_pane_ParamLimits

0x350b,	// (0x000418c3) wml_list_single_small_pane

0xad81,	// (0x00049139) wml_selection_box_pane_ParamLimits

0xad81,	// (0x00049139) wml_selection_box_pane

0xad94,	// (0x0004914c) wml_list_single_pane_t1

0xada3,	// (0x0004915b) wml_list_single_medium_pane_t1

0xadb2,	// (0x0004916a) wml_list_single_large_pane_t1

0xadc1,	// (0x00049179) input_focus_pane_cp02_ParamLimits

0xadc1,	// (0x00049179) input_focus_pane_cp02

0xadd4,	// (0x0004918c) wml_selection_box_pane_g1

0xaddd,	// (0x00049195) wml_selection_box_pane_t1_ParamLimits

0xaddd,	// (0x00049195) wml_selection_box_pane_t1

0xa93d,	// (0x00048cf5) bg_wml_button_pane_ParamLimits

0xa93d,	// (0x00048cf5) bg_wml_button_pane

0xadf5,	// (0x000491ad) wml_button_pane_g1

0xadfd,	// (0x000491b5) wml_button_pane_t1

0xadf5,	// (0x000491ad) wml_button_bg_pane_g1

0xae0d,	// (0x000491c5) wml_button_bg_pane_g2

0xae15,	// (0x000491cd) wml_button_bg_pane_g3

0xae1d,	// (0x000491d5) wml_button_bg_pane_g4

0xae25,	// (0x000491dd) wml_button_bg_pane_g5

0xae2d,	// (0x000491e5) wml_button_bg_pane_g6

0xae35,	// (0x000491ed) wml_button_bg_pane_g7

0xae3d,	// (0x000491f5) wml_button_bg_pane_g8

0xae45,	// (0x000491fd) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0004d62c) wml_button_bg_pane_g

0x3533,	// (0x000418eb) bg_list_pane_cp02

0xae4d,	// (0x00049205) mce_header_pane_ParamLimits

0xae4d,	// (0x00049205) mce_header_pane

0xae63,	// (0x0004921b) mce_icon_pane

0xae63,	// (0x0004921b) mce_image_pane

0xae6c,	// (0x00049224) mce_text_pane_ParamLimits

0xae6c,	// (0x00049224) mce_text_pane

0x353d,	// (0x000418f5) scroll_pane_cp03

0xad65,	// (0x0004911d) scroll_pane_cp04

0xae7f,	// (0x00049237) scroll_pane_cp05_ParamLimits

0xae7f,	// (0x00049237) scroll_pane_cp05

0x3547,	// (0x000418ff) mce_header_field_pane_ParamLimits

0x3547,	// (0x000418ff) mce_header_field_pane

0x3569,	// (0x00041921) mce_header_field_pane_2_ParamLimits

0x3569,	// (0x00041921) mce_header_field_pane_2

0x357f,	// (0x00041937) mce_header_field_pane_3

0x3587,	// (0x0004193f) list_single_mce_message_pane_ParamLimits

0x3587,	// (0x0004193f) list_single_mce_message_pane

0x35a6,	// (0x0004195e) list_single_mce_smart_pane_ParamLimits

0x35a6,	// (0x0004195e) list_single_mce_smart_pane

0xae8b,	// (0x00049243) input_focus_pane_cp03

0xae94,	// (0x0004924c) list_header_data_pane

0x35d0,	// (0x00041988) mce_header_field_pane_t1

0x35e0,	// (0x00041998) list_single_mce_header_pane_ParamLimits

0x35e0,	// (0x00041998) list_single_mce_header_pane

0xae9c,	// (0x00049254) list_single_mce_header_pane_t1

0xaeab,	// (0x00049263) list_single_mce_message_pane_g1

0xaeb3,	// (0x0004926b) list_single_mce_message_pane_t1

0x3624,	// (0x000419dc) bg_cale_heading_pane_cp01_ParamLimits

0x3624,	// (0x000419dc) bg_cale_heading_pane_cp01

0xaec1,	// (0x00049279) bg_cale_pane_cp02_ParamLimits

0xaec1,	// (0x00049279) bg_cale_pane_cp02

0x3676,	// (0x00041a2e) cale_month_corner_pane

0x3695,	// (0x00041a4d) cale_month_day_heading_pane_ParamLimits

0x3695,	// (0x00041a4d) cale_month_day_heading_pane

0x36f7,	// (0x00041aaf) cale_month_pane_g1_ParamLimits

0x36f7,	// (0x00041aaf) cale_month_pane_g1

0x373e,	// (0x00041af6) cale_month_pane_g2_ParamLimits

0x373e,	// (0x00041af6) cale_month_pane_g2

0x3776,	// (0x00041b2e) cale_month_pane_g3_ParamLimits

0x3776,	// (0x00041b2e) cale_month_pane_g3

0x37ca,	// (0x00041b82) cale_month_pane_g4_ParamLimits

0x37ca,	// (0x00041b82) cale_month_pane_g4

0x381e,	// (0x00041bd6) cale_month_pane_g5_ParamLimits

0x381e,	// (0x00041bd6) cale_month_pane_g5

0x3872,	// (0x00041c2a) cale_month_pane_g6_ParamLimits

0x3872,	// (0x00041c2a) cale_month_pane_g6

0x38d6,	// (0x00041c8e) cale_month_pane_g7_ParamLimits

0x38d6,	// (0x00041c8e) cale_month_pane_g7

0x393a,	// (0x00041cf2) cale_month_pane_g8_ParamLimits

0x393a,	// (0x00041cf2) cale_month_pane_g8

0x399e,	// (0x00041d56) cale_month_pane_g9_ParamLimits

0x399e,	// (0x00041d56) cale_month_pane_g9

0x39f8,	// (0x00041db0) cale_month_pane_g10_ParamLimits

0x39f8,	// (0x00041db0) cale_month_pane_g10

0x3a4a,	// (0x00041e02) cale_month_pane_g11_ParamLimits

0x3a4a,	// (0x00041e02) cale_month_pane_g11

0x3a98,	// (0x00041e50) cale_month_pane_g12_ParamLimits

0x3a98,	// (0x00041e50) cale_month_pane_g12

0x3ae8,	// (0x00041ea0) cale_month_pane_g13_ParamLimits

0x3ae8,	// (0x00041ea0) cale_month_pane_g13

0x000c,

0xf287,	// (0x0004d63f) cale_month_pane_g_ParamLimits

0xf287,	// (0x0004d63f) cale_month_pane_g

0x3b38,	// (0x00041ef0) cale_month_week_pane

0x3b58,	// (0x00041f10) grid_cale_month_pane_ParamLimits

0x3b58,	// (0x00041f10) grid_cale_month_pane

0x3bb1,	// (0x00041f69) cale_month_day_heading_pane_t1

0x3c33,	// (0x00041feb) cale_month_day_heading_pane_t2

0x3cac,	// (0x00042064) cale_month_day_heading_pane_t3

0x3d25,	// (0x000420dd) cale_month_day_heading_pane_t4

0x3d9e,	// (0x00042156) cale_month_day_heading_pane_t5

0x3e1f,	// (0x000421d7) cale_month_day_heading_pane_t6

0x3ea8,	// (0x00042260) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0004d65a) cale_month_day_heading_pane_t

0xab5d,	// (0x00048f15) bg_cale_side_pane_cp01

0x3f31,	// (0x000422e9) cale_month_week_pane_t1

0x3f4a,	// (0x00042302) cale_month_week_pane_t2

0x3f63,	// (0x0004231b) cale_month_week_pane_t3

0x3f7c,	// (0x00042334) cale_month_week_pane_t4

0x3f95,	// (0x0004234d) cale_month_week_pane_t5

0x3fb2,	// (0x0004236a) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0004d669) cale_month_week_pane_t

0x3fd5,	// (0x0004238d) cell_cale_month_pane_ParamLimits

0x3fd5,	// (0x0004238d) cell_cale_month_pane

0x4103,	// (0x000424bb) cell_cale_month_pane_g1

0x410f,	// (0x000424c7) cell_cale_month_pane_t1_ParamLimits

0x410f,	// (0x000424c7) cell_cale_month_pane_t1

0xab6b,	// (0x00048f23) grid_highlight_pane_cp08

0xaa65,	// (0x00048e1d) main_smil_g1

0x413b,	// (0x000424f3) smil_status_pane

0xaf00,	// (0x000492b8) smil_text_pane

0xc883,	// (0x0004ac3b) bg_popup_call3_rect_pane_g8

0xc88b,	// (0x0004ac43) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0004d922) bg_popup_call3_rect_pane_g

0xcae9,	// (0x0004aea1) smil_status_volume_pane_g1

0xaf0a,	// (0x000492c2) smil_status_pane_t1

0x5504,	// (0x000438bc) volume_smil_pane

0xaf21,	// (0x000492d9) list_smil_text_pane

0x414e,	// (0x00042506) scroll_pane_cp011

0x4159,	// (0x00042511) smil_text_list_pane_t1_ParamLimits

0x4159,	// (0x00042511) smil_text_list_pane_t1

0x41ad,	// (0x00042565) aid_volume_smil_ParamLimits

0x41ad,	// (0x00042565) aid_volume_smil

0xaa65,	// (0x00048e1d) smil_volume_pane_g1

0xaa65,	// (0x00048e1d) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0004d689) smil_volume_pane_g

0x2738,	// (0x00040af0) listscroll_cale_day_pane

0xaf2b,	// (0x000492e3) bg_cale_pane

0xaf43,	// (0x000492fb) list_cale_pane

0xaf66,	// (0x0004931e) scroll_pane_cp09

0xaf77,	// (0x0004932f) cale_bg_pane_g1

0xaf7f,	// (0x00049337) cale_bg_pane_g2

0xaf87,	// (0x0004933f) cale_bg_pane_g3

0xaf8f,	// (0x00049347) cale_bg_pane_g4

0xaf97,	// (0x0004934f) cale_bg_pane_g5

0xaf9f,	// (0x00049357) cale_bg_pane_g6

0xafa7,	// (0x0004935f) cale_bg_pane_g7

0xafaf,	// (0x00049367) cale_bg_pane_g8

0xafb7,	// (0x0004936f) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0004d68e) cale_bg_pane_g

0x41d7,	// (0x0004258f) list_cale_time_pane_ParamLimits

0x41d7,	// (0x0004258f) list_cale_time_pane

0xafbf,	// (0x00049377) list_cale_time_pane_g1_ParamLimits

0xafbf,	// (0x00049377) list_cale_time_pane_g1

0xafcb,	// (0x00049383) list_cale_time_pane_g2_ParamLimits

0xafcb,	// (0x00049383) list_cale_time_pane_g2

0x41ee,	// (0x000425a6) list_cale_time_pane_g3_ParamLimits

0x41ee,	// (0x000425a6) list_cale_time_pane_g3

0x41fc,	// (0x000425b4) list_cale_time_pane_g4_ParamLimits

0x41fc,	// (0x000425b4) list_cale_time_pane_g4

0x420a,	// (0x000425c2) list_cale_time_pane_g5_ParamLimits

0x420a,	// (0x000425c2) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0004d6a1) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0004d6a1) list_cale_time_pane_g

0xafe5,	// (0x0004939d) list_cale_time_pane_t1_ParamLimits

0xafe5,	// (0x0004939d) list_cale_time_pane_t1

0xb00d,	// (0x000493c5) list_cale_time_pane_t2_ParamLimits

0xb00d,	// (0x000493c5) list_cale_time_pane_t2

0x44ed,	// (0x000428a5) aid_blid_cardinal_pane

0x452f,	// (0x000428e7) compass_pane_t4

0xb035,	// (0x000493ed) list_cale_time_pane_t4_ParamLimits

0xb035,	// (0x000493ed) list_cale_time_pane_t4

0x453d,	// (0x000428f5) compass_pane_t5

0x454d,	// (0x00042905) compass_pane_t6

0x455b,	// (0x00042913) compass_pane_t7

0xb4d9,	// (0x00049891) navi_pane_cc_t1

0xb6b8,	// (0x00049a70) aid_phob_thumbnail_center_pane

0x4bd9,	// (0x00042f91) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0004d6ae) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0004d6ae) list_cale_time_pane_t

0xa339,	// (0x000486f1) bg_popup_window_pane_cp02_ParamLimits

0xa339,	// (0x000486f1) bg_popup_window_pane_cp02

0xb05d,	// (0x00049415) heading_pane_cp01_ParamLimits

0xb05d,	// (0x00049415) heading_pane_cp01

0xb069,	// (0x00049421) loc_req_pane_ParamLimits

0xb069,	// (0x00049421) loc_req_pane

0xb079,	// (0x00049431) loc_type_pane_ParamLimits

0xb079,	// (0x00049431) loc_type_pane

0xb08b,	// (0x00049443) loc_type_pane_t1_ParamLimits

0xb08b,	// (0x00049443) loc_type_pane_t1

0xb09d,	// (0x00049455) loc_type_pane_t2_ParamLimits

0xb09d,	// (0x00049455) loc_type_pane_t2

0xb0af,	// (0x00049467) loc_type_pane_t3_ParamLimits

0xb0af,	// (0x00049467) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0004d6b5) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0004d6b5) loc_type_pane_t

0xb0c1,	// (0x00049479) list_loc_req_pane

0xb0cb,	// (0x00049483) scroll_pane_cp012

0x4218,	// (0x000425d0) list_single_loc_request_popup_menu_pane_ParamLimits

0x4218,	// (0x000425d0) list_single_loc_request_popup_menu_pane

0xb0d6,	// (0x0004948e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb0d6,	// (0x0004948e) list_single_loc_request_popup_menu_pane_g1

0xb0e2,	// (0x0004949a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb0e2,	// (0x0004949a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0004d6bc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0004d6bc) list_single_loc_request_popup_menu_pane_g

0xb0ee,	// (0x000494a6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0ee,	// (0x000494a6) list_single_loc_request_popup_menu_pane_t1

0x422a,	// (0x000425e2) bg_popup_window_pane_cp03_ParamLimits

0x422a,	// (0x000425e2) bg_popup_window_pane_cp03

0x4238,	// (0x000425f0) heading_loc_req_pane_ParamLimits

0x4238,	// (0x000425f0) heading_loc_req_pane

0x4244,	// (0x000425fc) popup_dyc_status_message_window_g1_ParamLimits

0x4244,	// (0x000425fc) popup_dyc_status_message_window_g1

0x4250,	// (0x00042608) popup_dyc_status_message_window_t1_ParamLimits

0x4250,	// (0x00042608) popup_dyc_status_message_window_t1

0x4262,	// (0x0004261a) popup_dyc_status_message_window_t2_ParamLimits

0x4262,	// (0x0004261a) popup_dyc_status_message_window_t2

0x4274,	// (0x0004262c) popup_dyc_status_message_window_t3_ParamLimits

0x4274,	// (0x0004262c) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0004d6c1) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0004d6c1) popup_dyc_status_message_window_t

0xa6e2,	// (0x00048a9a) bg_heading_pane_cp01

0xb104,	// (0x000494bc) heading_loc_req_pane_g1

0xb10c,	// (0x000494c4) heading_loc_req_pane_g2

0xb114,	// (0x000494cc) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0004d6c8) heading_loc_req_pane_g

0xb11c,	// (0x000494d4) heading_loc_req_pane_t1

0xb12c,	// (0x000494e4) bg_popup_sub_pane_cp01_ParamLimits

0xb12c,	// (0x000494e4) bg_popup_sub_pane_cp01

0xb13a,	// (0x000494f2) popup_cale_events_window_g1_ParamLimits

0xb13a,	// (0x000494f2) popup_cale_events_window_g1

0xb15a,	// (0x00049512) popup_cale_events_window_g2_ParamLimits

0xb15a,	// (0x00049512) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0004d6fc) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0004d6fc) popup_cale_events_window_g

0xb17a,	// (0x00049532) popup_cale_events_window_t1_ParamLimits

0xb17a,	// (0x00049532) popup_cale_events_window_t1

0xb18c,	// (0x00049544) popup_cale_events_window_t2_ParamLimits

0xb18c,	// (0x00049544) popup_cale_events_window_t2

0xb1e8,	// (0x000495a0) popup_cale_events_window_t3_ParamLimits

0xb1e8,	// (0x000495a0) popup_cale_events_window_t3

0xb222,	// (0x000495da) popup_cale_events_window_t4_ParamLimits

0xb222,	// (0x000495da) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0004d701) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0004d701) popup_cale_events_window_t

0x429e,	// (0x00042656) call_type_pane

0xb258,	// (0x00049610) popup_call_status_window_g1

0x42aa,	// (0x00042662) popup_call_status_window_g2

0x42b6,	// (0x0004266e) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0004d70a) popup_call_status_window_g

0xb266,	// (0x0004961e) call_type_pane_g1

0xb26f,	// (0x00049627) call_type_pane_g2

0x0001,

0xf359,	// (0x0004d711) call_type_pane_g

0xa6e2,	// (0x00048a9a) bg_popup_sub_pane_cp02

0xb278,	// (0x00049630) listscroll_popup_wml_pane

0xb280,	// (0x00049638) list_wml_pane

0xb28a,	// (0x00049642) scroll_pane_cp013

0xb295,	// (0x0004964d) list_single_graphic_popup_wml_pane_ParamLimits

0xb295,	// (0x0004964d) list_single_graphic_popup_wml_pane

0xaa65,	// (0x00048e1d) list_single_graphic_popup_wml_pane_g1

0xb2a9,	// (0x00049661) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0004d716) list_single_graphic_popup_wml_pane_g

0xb2b1,	// (0x00049669) list_single_graphic_popup_wml_pane_t1

0xb2c7,	// (0x0004967f) aid_call_pane

0xa935,	// (0x00048ced) popup_clock_analogue_window_g1

0xa935,	// (0x00048ced) popup_clock_analogue_window_g2

0x42c2,	// (0x0004267a) popup_clock_analogue_window_g3

0x42c2,	// (0x0004267a) popup_clock_analogue_window_g4

0xaa65,	// (0x00048e1d) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0004d71b) popup_clock_analogue_window_g

0x42ca,	// (0x00042682) popup_clock_analogue_window_t1

0x42d8,	// (0x00042690) clock_digital_number_pane_ParamLimits

0x42d8,	// (0x00042690) clock_digital_number_pane

0x42e4,	// (0x0004269c) clock_digital_number_pane_cp02_ParamLimits

0x42e4,	// (0x0004269c) clock_digital_number_pane_cp02

0x42f0,	// (0x000426a8) clock_digital_number_pane_cp03_ParamLimits

0x42f0,	// (0x000426a8) clock_digital_number_pane_cp03

0x42fc,	// (0x000426b4) clock_digital_number_pane_cp04_ParamLimits

0x42fc,	// (0x000426b4) clock_digital_number_pane_cp04

0x4308,	// (0x000426c0) clock_digital_separator_pane_ParamLimits

0x4308,	// (0x000426c0) clock_digital_separator_pane

0x4314,	// (0x000426cc) popup_clock_digital_window_t1

0xaa65,	// (0x00048e1d) clock_digital_number_pane_g1

0xaa65,	// (0x00048e1d) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0004d689) clock_digital_number_pane_g

0xaa65,	// (0x00048e1d) clock_digital_separator_pane_g1

0xaa65,	// (0x00048e1d) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0004d689) clock_digital_separator_pane_g

0xa6e2,	// (0x00048a9a) bg_popup_window_pane_cp04

0xb2cf,	// (0x00049687) heading_pane_cp03

0xb2d7,	// (0x0004968f) listscroll_popup_gms_pane

0xb2df,	// (0x00049697) grid_large_graphic_popup_pane

0xb2e9,	// (0x000496a1) listscroll_popup_gms_pane_g1

0xb2f1,	// (0x000496a9) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0004d726) listscroll_popup_gms_pane_g

0xad65,	// (0x0004911d) scroll_pane_cp014

0x4331,	// (0x000426e9) cell_large_graphic_popup_pane_ParamLimits

0x4331,	// (0x000426e9) cell_large_graphic_popup_pane

0x434b,	// (0x00042703) cell_large_graphic_popup_pane_g1_ParamLimits

0x434b,	// (0x00042703) cell_large_graphic_popup_pane_g1

0xb2f9,	// (0x000496b1) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2f9,	// (0x000496b1) cell_large_graphic_popup_pane_g2

0xb305,	// (0x000496bd) cell_large_graphic_popup_pane_g3_ParamLimits

0xb305,	// (0x000496bd) cell_large_graphic_popup_pane_g3

0xb312,	// (0x000496ca) cell_large_graphic_popup_pane_g4_ParamLimits

0xb312,	// (0x000496ca) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0004d72b) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0004d72b) cell_large_graphic_popup_pane_g

0xb322,	// (0x000496da) grid_highlight_pane_cp010

0xaa65,	// (0x00048e1d) bg_popup_call_pane_g1

0xb32c,	// (0x000496e4) list_single_graphic_popup_conf_pane_ParamLimits

0xb32c,	// (0x000496e4) list_single_graphic_popup_conf_pane

0xb33e,	// (0x000496f6) list_highlight_pane_cp01

0xb347,	// (0x000496ff) list_single_graphic_popup_conf_pane_g1

0xb34f,	// (0x00049707) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0004d734) list_single_graphic_popup_conf_pane_g

0xb357,	// (0x0004970f) list_single_graphic_popup_conf_pane_t1

0xb365,	// (0x0004971d) linegrid_cams_pane_g1

0x4357,	// (0x0004270f) linegrid_cams_pane_g2

0xab9e,	// (0x00048f56) linegrid_cams_pane_g3

0xb36e,	// (0x00049726) linegrid_cams_pane_g4

0x4360,	// (0x00042718) linegrid_cams_pane_g5

0x4369,	// (0x00042721) linegrid_cams_pane_g6

0xaba7,	// (0x00048f5f) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0004d739) linegrid_cams_pane_g

0xb377,	// (0x0004972f) popup_clock_analogue_window

0xb377,	// (0x0004972f) popup_clock_digital_window

0xa6e2,	// (0x00048a9a) popup_phob_thumbnail_window

0xaa65,	// (0x00048e1d) call_video_uplink_pane_g1

0xb380,	// (0x00049738) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0004d748) call_video_uplink_pane_g

0xb388,	// (0x00049740) video_uplink_pane

0xb390,	// (0x00049748) mce_image_pane_g1

0x4374,	// (0x0004272c) mce_image_pane_g2

0x437e,	// (0x00042736) mce_image_pane_g3

0x4388,	// (0x00042740) mce_image_pane_g4

0x4390,	// (0x00042748) mce_image_pane_g5

0x0004,

0xf395,	// (0x0004d74d) mce_image_pane_g

0xb39a,	// (0x00049752) control_top_pane_stacon_cp01_ParamLimits

0xb39a,	// (0x00049752) control_top_pane_stacon_cp01

0xb3ae,	// (0x00049766) uni_indicator_pane_stacon_cp01_ParamLimits

0xb3ae,	// (0x00049766) uni_indicator_pane_stacon_cp01

0xb3bf,	// (0x00049777) bg_popup_sub_pane_cp03

0x4398,	// (0x00042750) chi_dic_find_pane

0x43a0,	// (0x00042758) listscroll_chi_dic_pane

0x43a9,	// (0x00042761) main_pane_chidic_g1

0x43bc,	// (0x00042774) chi_dic_find_pane_t1

0xb3c9,	// (0x00049781) find_chidic_pane

0xb3d2,	// (0x0004978a) chi_dic_list_pane_ParamLimits

0xb3d2,	// (0x0004978a) chi_dic_list_pane

0xb3e3,	// (0x0004979b) scroll_pane_cp020

0x43ca,	// (0x00042782) find_chidic_pane_t1

0xa6e2,	// (0x00048a9a) input_focus_pane_cp06

0xb1ca,	// (0x00049582) list_chi_dic_pane_ParamLimits

0xb1ca,	// (0x00049582) list_chi_dic_pane

0x43d9,	// (0x00042791) list_chi_dic_pane_t1_ParamLimits

0x43d9,	// (0x00042791) list_chi_dic_pane_t1

0xa6e2,	// (0x00048a9a) list_highlight_pane_cp020

0xb3eb,	// (0x000497a3) bg_cale_heading_pane_g1

0x43ec,	// (0x000427a4) bg_cale_heading_pane_g2

0x43f4,	// (0x000427ac) bg_cale_heading_pane_g3

0x43fc,	// (0x000427b4) bg_cale_heading_pane_g4

0x4406,	// (0x000427be) bg_cale_heading_pane_g5

0x4410,	// (0x000427c8) bg_cale_heading_pane_g6

0x4418,	// (0x000427d0) bg_cale_heading_pane_g7

0x4420,	// (0x000427d8) bg_cale_heading_pane_g8

0x442a,	// (0x000427e2) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0004d758) bg_cale_heading_pane_g

0xb3eb,	// (0x000497a3) bg_cale_side_pane_g1

0x4434,	// (0x000427ec) bg_cale_side_pane_g2

0x443e,	// (0x000427f6) bg_cale_side_pane_g3

0x4448,	// (0x00042800) bg_cale_side_pane_g4

0x4452,	// (0x0004280a) bg_cale_side_pane_g5

0x445c,	// (0x00042814) bg_cale_side_pane_g6

0x4466,	// (0x0004281e) bg_cale_side_pane_g7

0x4470,	// (0x00042828) bg_cale_side_pane_g8

0x4478,	// (0x00042830) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0004d76b) bg_cale_side_pane_g

0x4480,	// (0x00042838) popup_call_status_window_ParamLimits

0x4480,	// (0x00042838) popup_call_status_window

0xb3f3,	// (0x000497ab) stacon_top_pane

0xb3fb,	// (0x000497b3) status_pane_ParamLimits

0xb3fb,	// (0x000497b3) status_pane

0xb410,	// (0x000497c8) status_small_pane

0xb418,	// (0x000497d0) control_pane

0xa6e2,	// (0x00048a9a) stacon_bottom_pane

0xb420,	// (0x000497d8) list_single_mce_smart_pane_t1_ParamLimits

0xb420,	// (0x000497d8) list_single_mce_smart_pane_t1

0xb433,	// (0x000497eb) list_single_mce_smart_pane_t2_ParamLimits

0xb433,	// (0x000497eb) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0004d77e) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0004d77e) list_single_mce_smart_pane_t

0x448c,	// (0x00042844) compass_pane

0x4497,	// (0x0004284f) main_location2_pane_t1

0x44ad,	// (0x00042865) main_location2_pane_t2

0x44c3,	// (0x0004287b) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0004d783) main_location2_pane_t

0xb452,	// (0x0004980a) compass_pane_g1_ParamLimits

0xb452,	// (0x0004980a) compass_pane_g1

0x4511,	// (0x000428c9) compass_pane_t1

0x4520,	// (0x000428d8) compass_pane_t2

0x0005,

0xf3d4,	// (0x0004d78c) compass_pane_t

0x456b,	// (0x00042923) text_secondary_cp61

0xb4d0,	// (0x00049888) navi_pane_cams_g5

0xb54c,	// (0x00049904) navi_pane_im_t1

0xb55a,	// (0x00049912) navi_pane_mp_g1_ParamLimits

0xb55a,	// (0x00049912) navi_pane_mp_g1

0xb56e,	// (0x00049926) navi_pane_mp_g2_ParamLimits

0xb56e,	// (0x00049926) navi_pane_mp_g2

0xb57a,	// (0x00049932) navi_pane_mp_g3_ParamLimits

0xb57a,	// (0x00049932) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0004d7a0) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0004d7a0) navi_pane_mp_g

0xb586,	// (0x0004993e) navi_pane_mp_t1

0xb594,	// (0x0004994c) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0004d7a7) navi_pane_mp_t

0xb601,	// (0x000499b9) navi_pane_vt_g1

0xb586,	// (0x0004993e) navi_pane_vt_t1

0xb609,	// (0x000499c1) navi_slider_pane

0xabb8,	// (0x00048f70) zooming_pane

0xb619,	// (0x000499d1) navi_slider_pane_g1

0x45a6,	// (0x0004295e) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0004d7ae) navi_slider_pane_g

0xb63d,	// (0x000499f5) aid_levels_zoom

0xb645,	// (0x000499fd) zooming_pane_g1

0xb64d,	// (0x00049a05) zooming_pane_g2

0xb64d,	// (0x00049a05) zooming_pane_g3

0x0002,

0xf405,	// (0x0004d7bd) zooming_pane_g

0xb655,	// (0x00049a0d) level_10_zoom

0xb65e,	// (0x00049a16) level_11_zoom

0xb667,	// (0x00049a1f) level_1_zoom

0xb670,	// (0x00049a28) level_2_zoom

0xb679,	// (0x00049a31) level_3_zoom

0xb682,	// (0x00049a3a) level_4_zoom

0xb68b,	// (0x00049a43) level_5_zoom

0xb694,	// (0x00049a4c) level_6_zoom

0xb69d,	// (0x00049a55) level_7_zoom

0xb6a6,	// (0x00049a5e) level_8_zoom

0xb6af,	// (0x00049a67) level_9_zoom

0xb6c0,	// (0x00049a78) popup_phob_thumbnail_window_g1

0xb6c8,	// (0x00049a80) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0004d7c4) popup_phob_thumbnail_window_g

0xc9e9,	// (0x0004ada1) level_1_location

0xc9f1,	// (0x0004ada9) level_2_location

0xc9f9,	// (0x0004adb1) level_3_location

0xca01,	// (0x0004adb9) level_4_location

0xabb8,	// (0x00048f70) level_5_location

0x45b8,	// (0x00042970) mce_icon_pane_g1

0x45c0,	// (0x00042978) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0004d7c9) mce_icon_pane_g

0x45c8,	// (0x00042980) main_mup_pane_g1_ParamLimits

0x45c8,	// (0x00042980) main_mup_pane_g1

0x45e0,	// (0x00042998) main_mup_pane_g2_ParamLimits

0x45e0,	// (0x00042998) main_mup_pane_g2

0x45fc,	// (0x000429b4) main_mup_pane_g3_ParamLimits

0x45fc,	// (0x000429b4) main_mup_pane_g3

0x4618,	// (0x000429d0) main_mup_pane_g4_ParamLimits

0x4618,	// (0x000429d0) main_mup_pane_g4

0x462c,	// (0x000429e4) main_mup_pane_g5_ParamLimits

0x462c,	// (0x000429e4) main_mup_pane_g5

0x464d,	// (0x00042a05) main_mup_pane_g6_ParamLimits

0x464d,	// (0x00042a05) main_mup_pane_g6

0x466d,	// (0x00042a25) main_mup_pane_g7_ParamLimits

0x466d,	// (0x00042a25) main_mup_pane_g7

0x4691,	// (0x00042a49) main_mup_pane_g8_ParamLimits

0x4691,	// (0x00042a49) main_mup_pane_g8

0x46b5,	// (0x00042a6d) main_mup_pane_g9_ParamLimits

0x46b5,	// (0x00042a6d) main_mup_pane_g9

0x46d8,	// (0x00042a90) main_mup_pane_g10_ParamLimits

0x46d8,	// (0x00042a90) main_mup_pane_g10

0x46fb,	// (0x00042ab3) main_mup_pane_g11_ParamLimits

0x46fb,	// (0x00042ab3) main_mup_pane_g11

0x471b,	// (0x00042ad3) main_mup_pane_g12_ParamLimits

0x471b,	// (0x00042ad3) main_mup_pane_g12

0x4729,	// (0x00042ae1) main_mup_pane_g13_ParamLimits

0x4729,	// (0x00042ae1) main_mup_pane_g13

0x000c,

0xf416,	// (0x0004d7ce) main_mup_pane_g_ParamLimits

0xf416,	// (0x0004d7ce) main_mup_pane_g

0x473f,	// (0x00042af7) main_mup_pane_t1_ParamLimits

0x473f,	// (0x00042af7) main_mup_pane_t1

0x475e,	// (0x00042b16) main_mup_pane_t2_ParamLimits

0x475e,	// (0x00042b16) main_mup_pane_t2

0x4778,	// (0x00042b30) main_mup_pane_t3_ParamLimits

0x4778,	// (0x00042b30) main_mup_pane_t3

0x4792,	// (0x00042b4a) main_mup_pane_t4_ParamLimits

0x4792,	// (0x00042b4a) main_mup_pane_t4

0x47a4,	// (0x00042b5c) main_mup_pane_t5_ParamLimits

0x47a4,	// (0x00042b5c) main_mup_pane_t5

0x47b6,	// (0x00042b6e) main_mup_pane_t6_ParamLimits

0x47b6,	// (0x00042b6e) main_mup_pane_t6

0x0005,

0xf431,	// (0x0004d7e9) main_mup_pane_t_ParamLimits

0xf431,	// (0x0004d7e9) main_mup_pane_t

0x47cc,	// (0x00042b84) mup_progress_pane_ParamLimits

0x47cc,	// (0x00042b84) mup_progress_pane

0x47d8,	// (0x00042b90) mup_visualizer_pane_ParamLimits

0x47d8,	// (0x00042b90) mup_visualizer_pane

0x4816,	// (0x00042bce) mup_volume_pane_ParamLimits

0x4816,	// (0x00042bce) mup_volume_pane

0xb258,	// (0x00049610) mup_visualizer_pane_g1_ParamLimits

0xb258,	// (0x00049610) mup_visualizer_pane_g1

0xb258,	// (0x00049610) mup_visualizer_pane_g2_ParamLimits

0xb258,	// (0x00049610) mup_visualizer_pane_g2

0xb452,	// (0x0004980a) mup_visualizer_pane_g3_ParamLimits

0xb452,	// (0x0004980a) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0004d7f6) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0004d7f6) mup_visualizer_pane_g

0xaa65,	// (0x00048e1d) mup_volume_pane_g1

0xb6d8,	// (0x00049a90) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0004d7fd) mup_volume_pane_g

0xaa65,	// (0x00048e1d) mup_progress_pane_g1

0xb6e1,	// (0x00049a99) mup_progress_pane_g2

0xb6ea,	// (0x00049aa2) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0004d802) mup_progress_pane_g

0xa6e2,	// (0x00048a9a) bg_popup_window_pane_cp05

0xb6f3,	// (0x00049aab) heading_pane_cp02_ParamLimits

0xb6f3,	// (0x00049aab) heading_pane_cp02

0xb70f,	// (0x00049ac7) list_popup_blid_pane

0xb717,	// (0x00049acf) list_blid_sat_info_pane_ParamLimits

0xb717,	// (0x00049acf) list_blid_sat_info_pane

0xb72a,	// (0x00049ae2) list_blid_sat_info_pane_g1

0xb732,	// (0x00049aea) list_blid_sat_info_pane_t1

0x4935,	// (0x00042ced) mup_equalizer_pane_ParamLimits

0x4935,	// (0x00042ced) mup_equalizer_pane

0x4956,	// (0x00042d0e) mup_equalizer_pane_cp1_ParamLimits

0x4956,	// (0x00042d0e) mup_equalizer_pane_cp1

0x4977,	// (0x00042d2f) mup_equalizer_pane_cp2_ParamLimits

0x4977,	// (0x00042d2f) mup_equalizer_pane_cp2

0x4998,	// (0x00042d50) mup_equalizer_pane_cp3_ParamLimits

0x4998,	// (0x00042d50) mup_equalizer_pane_cp3

0x49bd,	// (0x00042d75) mup_equalizer_pane_cp4_ParamLimits

0x49bd,	// (0x00042d75) mup_equalizer_pane_cp4

0x49e2,	// (0x00042d9a) mup_equalizer_pane_cp5

0x49fa,	// (0x00042db2) mup_equalizer_pane_cp6

0x4a12,	// (0x00042dca) mup_equalizer_pane_cp7

0xc903,	// (0x0004acbb) bg_popup_call_poc_act_pane_g9

0xc90b,	// (0x0004acc3) bg_popup_call_poc_act_pane_g10

0xc913,	// (0x0004accb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa93d,	// (0x00048cf5) mup_scale_pane

0xaa65,	// (0x00048e1d) mup_scale_pane_g1

0xb740,	// (0x00049af8) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0004d81e) mup_scale_pane_g

0xb764,	// (0x00049b1c) msg_data_pane

0xb76c,	// (0x00049b24) scroll_pane_cp017

0x4a3c,	// (0x00042df4) bg_list_pane_cp04_ParamLimits

0x4a3c,	// (0x00042df4) bg_list_pane_cp04

0xb774,	// (0x00049b2c) msg_data_pane_g1

0x4a5c,	// (0x00042e14) msg_data_pane_g2

0x4a66,	// (0x00042e1e) msg_data_pane_g3

0x4a70,	// (0x00042e28) msg_data_pane_g4

0x4a78,	// (0x00042e30) msg_data_pane_g5

0x4a80,	// (0x00042e38) msg_data_pane_g6

0x4a88,	// (0x00042e40) msg_data_pane_g7

0x0006,

0xf475,	// (0x0004d82d) msg_data_pane_g

0x4a90,	// (0x00042e48) msg_text_pane_ParamLimits

0x4a90,	// (0x00042e48) msg_text_pane

0x4ac1,	// (0x00042e79) qrid_highlight_pane_cp011_ParamLimits

0x4ac1,	// (0x00042e79) qrid_highlight_pane_cp011

0xa6e2,	// (0x00048a9a) msg_body_pane

0xa6e2,	// (0x00048a9a) msg_header_pane

0xb785,	// (0x00049b3d) input_focus_pane_cp07

0xb79a,	// (0x00049b52) msg_header_pane_t1_ParamLimits

0xb79a,	// (0x00049b52) msg_header_pane_t1

0x0dce,	// (0x0003f186) msg_header_pane_t2_ParamLimits

0x0dce,	// (0x0003f186) msg_header_pane_t2

0x0001,

0xf489,	// (0x0004d841) msg_header_pane_t_ParamLimits

0xf489,	// (0x0004d841) msg_header_pane_t

0xb7ac,	// (0x00049b64) msg_body_pane_g1

0x0de0,	// (0x0003f198) msg_body_pane_t1_ParamLimits

0x0de0,	// (0x0003f198) msg_body_pane_t1

0x0e11,	// (0x0003f1c9) msg_body_pane_t2_ParamLimits

0x0e11,	// (0x0003f1c9) msg_body_pane_t2

0x0e23,	// (0x0003f1db) msg_body_pane_t3_ParamLimits

0x0e23,	// (0x0003f1db) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0004d846) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0004d846) msg_body_pane_t

0x4b29,	// (0x00042ee1) main_viewer_pane_g1_ParamLimits

0x4b29,	// (0x00042ee1) main_viewer_pane_g1

0x4b35,	// (0x00042eed) main_viewer_pane_g2_ParamLimits

0x4b35,	// (0x00042eed) main_viewer_pane_g2

0x4b41,	// (0x00042ef9) main_viewer_pane_g3_ParamLimits

0x4b41,	// (0x00042ef9) main_viewer_pane_g3

0x4b52,	// (0x00042f0a) main_viewer_pane_g4_ParamLimits

0x4b52,	// (0x00042f0a) main_viewer_pane_g4

0x4b63,	// (0x00042f1b) main_viewer_pane_g5_ParamLimits

0x4b63,	// (0x00042f1b) main_viewer_pane_g5

0x4b63,	// (0x00042f1b) main_viewer_pane_g7_ParamLimits

0x4b63,	// (0x00042f1b) main_viewer_pane_g7

0x4b75,	// (0x00042f2d) main_viewer_pane_g8_ParamLimits

0x4b75,	// (0x00042f2d) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0004d856) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004d856) main_viewer_pane_g

0xb7b4,	// (0x00049b6c) viewer_content_pane_ParamLimits

0xb7b4,	// (0x00049b6c) viewer_content_pane

0x4bad,	// (0x00042f65) main_postcard_pane_g1_ParamLimits

0x4bad,	// (0x00042f65) main_postcard_pane_g1

0x4bbb,	// (0x00042f73) main_postcard_pane_g2_ParamLimits

0x4bbb,	// (0x00042f73) main_postcard_pane_g2

0x4bc9,	// (0x00042f81) main_postcard_pane_g3_ParamLimits

0x4bc9,	// (0x00042f81) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0004d867) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0004d867) main_postcard_pane_g

0x4bd9,	// (0x00042f91) main_postcard_pane_g4

0xcafc,	// (0x0004aeb4) smil_status_volume_pane_g2

0x4c05,	// (0x00042fbd) postcard_pane_ParamLimits

0x4c05,	// (0x00042fbd) postcard_pane

0xb258,	// (0x00049610) postcard_pane_g1_ParamLimits

0xb258,	// (0x00049610) postcard_pane_g1

0x4c3f,	// (0x00042ff7) postcard_pane_g2_ParamLimits

0x4c3f,	// (0x00042ff7) postcard_pane_g2

0x4c4b,	// (0x00043003) postcard_pane_g3_ParamLimits

0x4c4b,	// (0x00043003) postcard_pane_g3

0xb7c2,	// (0x00049b7a) postcard_pane_g4_ParamLimits

0xb7c2,	// (0x00049b7a) postcard_pane_g4

0x4c57,	// (0x0004300f) postcard_pane_g5_ParamLimits

0x4c57,	// (0x0004300f) postcard_pane_g5

0x4c63,	// (0x0004301b) postcard_pane_g6_ParamLimits

0x4c63,	// (0x0004301b) postcard_pane_g6

0xb7d0,	// (0x00049b88) postcard_pane_g7_ParamLimits

0xb7d0,	// (0x00049b88) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0004d874) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0004d874) postcard_pane_g

0x4c71,	// (0x00043029) main_mp2_pane_g1_ParamLimits

0x4c71,	// (0x00043029) main_mp2_pane_g1

0x4c7f,	// (0x00043037) main_mp2_pane_g2_ParamLimits

0x4c7f,	// (0x00043037) main_mp2_pane_g2

0x4c8b,	// (0x00043043) main_mp2_pane_g3_ParamLimits

0x4c8b,	// (0x00043043) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0004d883) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0004d883) main_mp2_pane_g

0x4c97,	// (0x0004304f) main_mp2_pane_t1_ParamLimits

0x4c97,	// (0x0004304f) main_mp2_pane_t1

0x4cae,	// (0x00043066) main_mp2_pane_t2_ParamLimits

0x4cae,	// (0x00043066) main_mp2_pane_t2

0x4cc2,	// (0x0004307a) main_mp2_pane_t3_ParamLimits

0x4cc2,	// (0x0004307a) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0004d88a) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0004d88a) main_mp2_pane_t

0xb7de,	// (0x00049b96) pec_content_pane_ParamLimits

0xb7de,	// (0x00049b96) pec_content_pane

0xad65,	// (0x0004911d) scroll_pane_cp015

0xb7f0,	// (0x00049ba8) pec_attribute_pane_ParamLimits

0xb7f0,	// (0x00049ba8) pec_attribute_pane

0x4cd4,	// (0x0004308c) pec_content_pane_g1_ParamLimits

0x4cd4,	// (0x0004308c) pec_content_pane_g1

0xb800,	// (0x00049bb8) pec_content_pane_t1_ParamLimits

0xb800,	// (0x00049bb8) pec_content_pane_t1

0xb812,	// (0x00049bca) pec_content_pane_t2_ParamLimits

0xb812,	// (0x00049bca) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0004d891) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0004d891) pec_content_pane_t

0x4ce0,	// (0x00043098) list_single_graphic_pane_cp01_ParamLimits

0x4ce0,	// (0x00043098) list_single_graphic_pane_cp01

0xa93d,	// (0x00048cf5) bg_popup_sub_pane_cp04

0xb824,	// (0x00049bdc) popup_mup_playback_window_g1

0xb830,	// (0x00049be8) popup_mup_playback_window_t1

0xb845,	// (0x00049bfd) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0004d896) popup_mup_playback_window_t

0xb87c,	// (0x00049c34) main_image_pane_g1_ParamLimits

0xb87c,	// (0x00049c34) main_image_pane_g1

0xb8bf,	// (0x00049c77) scroll_pane_cp018_ParamLimits

0xb8bf,	// (0x00049c77) scroll_pane_cp018

0xb8d7,	// (0x00049c8f) scroll_pane_cp016_ParamLimits

0xb8d7,	// (0x00049c8f) scroll_pane_cp016

0x4d6e,	// (0x00043126) smil2_image_pane_ParamLimits

0x4d6e,	// (0x00043126) smil2_image_pane

0x4da4,	// (0x0004315c) smil2_root_pane_ParamLimits

0x4da4,	// (0x0004315c) smil2_root_pane

0x4dd0,	// (0x00043188) smil2_text_pane_ParamLimits

0x4dd0,	// (0x00043188) smil2_text_pane

0xa6e2,	// (0x00048a9a) bg_list_pane_cp06

0xb913,	// (0x00049ccb) grid_radio_pane

0xa6e2,	// (0x00048a9a) bg_popup_window_pane_cp06

0xb91d,	// (0x00049cd5) main_fmradio_pane_t1

0xb2cf,	// (0x00049687) heading_pane_cp04

0xb92b,	// (0x00049ce3) main_fmradio_pane_t2

0xc91b,	// (0x0004acd3) popup_cale_lunar_info_window_g1

0xb953,	// (0x00049d0b) main_fmradio_pane_t3

0xc923,	// (0x0004acdb) popup_cale_lunar_info_window_g2

0xb963,	// (0x00049d1b) main_fmradio_pane_t4

0x0001,

0xb971,	// (0x00049d29) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0004d971) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0004d8ab) main_fmradio_pane_t

0xb97f,	// (0x00049d37) wait_bar_pane_cp03

0xb987,	// (0x00049d3f) cell_fmradio_pane_ParamLimits

0xb987,	// (0x00049d3f) cell_fmradio_pane

0xb7d0,	// (0x00049b88) cell_fmradio_pane_g1_ParamLimits

0xb7d0,	// (0x00049b88) cell_fmradio_pane_g1

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp011

0xb99c,	// (0x00049d54) poc_content_pane_ParamLimits

0xb99c,	// (0x00049d54) poc_content_pane

0xb9ae,	// (0x00049d66) scroll_pane_cp019

0x4e10,	// (0x000431c8) popup_call_poc_act_window_ParamLimits

0x4e10,	// (0x000431c8) popup_call_poc_act_window

0x4e1d,	// (0x000431d5) popup_call_poc_inact_window_ParamLimits

0x4e1d,	// (0x000431d5) popup_call_poc_inact_window

0xf590,	// (0x0004d948) bg_popup_call_poc_act_pane_g

0xc893,	// (0x0004ac4b) bg_popup_call_poc_inact_pane_g1

0xc89b,	// (0x0004ac53) bg_popup_call_poc_inact_pane_g2

0xb9b6,	// (0x00049d6e) popup_call_poc_act_window_g2

0xc8a3,	// (0x0004ac5b) bg_popup_call_poc_inact_pane_g3

0xc8ab,	// (0x0004ac63) bg_popup_call_poc_inact_pane_g4

0xc8b3,	// (0x0004ac6b) bg_popup_call_poc_inact_pane_g5

0xb9be,	// (0x00049d76) popup_call_poc_act_window_t1_ParamLimits

0xb9be,	// (0x00049d76) popup_call_poc_act_window_t1

0xb9e6,	// (0x00049d9e) popup_call_poc_act_window_t2_ParamLimits

0xb9e6,	// (0x00049d9e) popup_call_poc_act_window_t2

0xba0e,	// (0x00049dc6) popup_call_poc_act_window_t3_ParamLimits

0xba0e,	// (0x00049dc6) popup_call_poc_act_window_t3

0xba36,	// (0x00049dee) popup_call_poc_act_window_t4_ParamLimits

0xba36,	// (0x00049dee) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0004d8b6) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0004d8b6) popup_call_poc_act_window_t

0xc8bb,	// (0x0004ac73) bg_popup_call_poc_inact_pane_g6

0xc8c3,	// (0x0004ac7b) bg_popup_call_poc_inact_pane_g7

0xc8cb,	// (0x0004ac83) bg_popup_call_poc_inact_pane_g8

0xba48,	// (0x00049e00) popup_call_poc_inact_window_g2

0xc8d3,	// (0x0004ac8b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0004d935) bg_popup_call_poc_inact_pane_g

0xba50,	// (0x00049e08) popup_call_poc_inact_window_t1_ParamLimits

0xba50,	// (0x00049e08) popup_call_poc_inact_window_t1

0xba65,	// (0x00049e1d) popup_call_poc_inact_window_t2_ParamLimits

0xba65,	// (0x00049e1d) popup_call_poc_inact_window_t2

0xba7a,	// (0x00049e32) popup_call_poc_inact_window_t3_ParamLimits

0xba7a,	// (0x00049e32) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0004d8bf) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0004d8bf) popup_call_poc_inact_window_t

0xca5c,	// (0x0004ae14) context_pane_ParamLimits

0x5472,	// (0x0004382a) signal_pane_ParamLimits

0xabb8,	// (0x00048f70) main_call2_pane

0x53df,	// (0x00043797) popup_phob_thumbnail2_window_ParamLimits

0x53df,	// (0x00043797) popup_phob_thumbnail2_window

0x4ad7,	// (0x00042e8f) aid_hotspot_pointer_arrow_pane

0x4adf,	// (0x00042e97) aid_hotspot_pointer_hand_pane

0x5142,	// (0x000434fa) phob_pre_status_pane_g5

0x2e2c,	// (0x000411e4) cams_zoom_pane_ParamLimits

0x2e38,	// (0x000411f0) image_vga_pane_ParamLimits

0x2e47,	// (0x000411ff) main_camera_pane_g1_ParamLimits

0x2e55,	// (0x0004120d) main_camera_pane_g2_ParamLimits

0x2e61,	// (0x00041219) main_camera_pane_g3_ParamLimits

0x2e6f,	// (0x00041227) main_camera_pane_g4_ParamLimits

0x2e7d,	// (0x00041235) main_camera_pane_g5_ParamLimits

0x2e8b,	// (0x00041243) main_camera_pane_g6_ParamLimits

0x2e99,	// (0x00041251) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0004d5be) main_camera_pane_g_ParamLimits

0x2ea7,	// (0x0004125f) main_camera_pane_t1_ParamLimits

0x2eb9,	// (0x00041271) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0004d5cf) main_camera_pane_t_ParamLimits

0xa93d,	// (0x00048cf5) bg_popup_preview_window_pane_cp01_ParamLimits

0xa93d,	// (0x00048cf5) bg_popup_preview_window_pane_cp01

0xba8f,	// (0x00049e47) popup_phob_thumbnail2_window_g1_ParamLimits

0xba8f,	// (0x00049e47) popup_phob_thumbnail2_window_g1

0xa6e2,	// (0x00048a9a) call2_cli_visual_pane

0x4e39,	// (0x000431f1) popup_call2_audio_conf_window_ParamLimits

0x4e39,	// (0x000431f1) popup_call2_audio_conf_window

0x4e52,	// (0x0004320a) popup_call2_audio_first_window_ParamLimits

0x4e52,	// (0x0004320a) popup_call2_audio_first_window

0x4ef0,	// (0x000432a8) popup_call2_audio_in_window_ParamLimits

0x4ef0,	// (0x000432a8) popup_call2_audio_in_window

0x4f34,	// (0x000432ec) popup_call2_audio_out_window_ParamLimits

0x4f34,	// (0x000432ec) popup_call2_audio_out_window

0x4f9e,	// (0x00043356) popup_call2_audio_second_window_ParamLimits

0x4f9e,	// (0x00043356) popup_call2_audio_second_window

0x4ffc,	// (0x000433b4) popup_call2_audio_wait_window_ParamLimits

0x4ffc,	// (0x000433b4) popup_call2_audio_wait_window

0xa6e2,	// (0x00048a9a) bg_popup_call2_act_pane_cp03

0xa91f,	// (0x00048cd7) list_conf_pane_cp

0xba9b,	// (0x00049e53) popup_call2_audio_conf_window_t1

0xbaa9,	// (0x00049e61) list_single_graphic_popup_conf2_pane_ParamLimits

0xbaa9,	// (0x00049e61) list_single_graphic_popup_conf2_pane

0xb33e,	// (0x000496f6) list_highlight_pane_cp04

0xbabc,	// (0x00049e74) list_single_graphic_popup_conf2_pane_g1

0xb34f,	// (0x00049707) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0004d8c6) list_single_graphic_popup_conf2_pane_g

0xbac6,	// (0x00049e7e) list_single_graphic_popup_conf2_pane_t1

0xbad4,	// (0x00049e8c) bg_popup_call2_act_pane_cp01_ParamLimits

0xbad4,	// (0x00049e8c) bg_popup_call2_act_pane_cp01

0xbb5e,	// (0x00049f16) call_type_pane_cp05_ParamLimits

0xbb5e,	// (0x00049f16) call_type_pane_cp05

0xbbb2,	// (0x00049f6a) popup_call2_audio_second_window_g1_ParamLimits

0xbbb2,	// (0x00049f6a) popup_call2_audio_second_window_g1

0xbc06,	// (0x00049fbe) popup_call2_audio_second_window_g2_ParamLimits

0xbc06,	// (0x00049fbe) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0004d8cb) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0004d8cb) popup_call2_audio_second_window_g

0xbc6b,	// (0x0004a023) popup_call2_audio_second_window_t1_ParamLimits

0xbc6b,	// (0x0004a023) popup_call2_audio_second_window_t1

0xbd26,	// (0x0004a0de) popup_call2_audio_second_window_t2_ParamLimits

0xbd26,	// (0x0004a0de) popup_call2_audio_second_window_t2

0xbd79,	// (0x0004a131) popup_call2_audio_second_window_t3_ParamLimits

0xbd79,	// (0x0004a131) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0004d8d2) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0004d8d2) popup_call2_audio_second_window_t

0xa6e2,	// (0x00048a9a) bg_popup_call2_in_pane_cp02

0xa6ec,	// (0x00048aa4) call_type_pane_cp04

0xa6f4,	// (0x00048aac) popup_call2_audio_wait_window_g1

0xa6fc,	// (0x00048ab4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004d4ad) popup_call2_audio_wait_window_g

0xa704,	// (0x00048abc) popup_call2_audio_wait_window_t3

0xbe6c,	// (0x0004a224) bg_popup_call2_act_pane_ParamLimits

0xbe6c,	// (0x0004a224) bg_popup_call2_act_pane

0xbf2c,	// (0x0004a2e4) call_type_pane_cp03_ParamLimits

0xbf2c,	// (0x0004a2e4) call_type_pane_cp03

0xbf90,	// (0x0004a348) popup_call2_audio_first_window_g1_ParamLimits

0xbf90,	// (0x0004a348) popup_call2_audio_first_window_g1

0xc000,	// (0x0004a3b8) popup_call2_audio_first_window_g2_ParamLimits

0xc000,	// (0x0004a3b8) popup_call2_audio_first_window_g2

0xb258,	// (0x00049610) popup_call2_audio_first_window_g3_ParamLimits

0xb258,	// (0x00049610) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0004d8db) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0004d8db) popup_call2_audio_first_window_g

0xc0de,	// (0x0004a496) popup_call2_audio_first_window_t1_ParamLimits

0xc0de,	// (0x0004a496) popup_call2_audio_first_window_t1

0xc1e1,	// (0x0004a599) popup_call2_audio_first_window_t4_ParamLimits

0xc1e1,	// (0x0004a599) popup_call2_audio_first_window_t4

0xc2c4,	// (0x0004a67c) popup_call2_audio_first_window_t5_ParamLimits

0xc2c4,	// (0x0004a67c) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0004d8e6) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0004d8e6) popup_call2_audio_first_window_t

0xa935,	// (0x00048ced) bg_popup_call2_act_pane_g1

0xc92d,	// (0x0004ace5) popup_cale_lunar_info_window_t1

0xc93b,	// (0x0004acf3) popup_cale_lunar_info_window_t2

0xc949,	// (0x0004ad01) popup_cale_lunar_info_window_t3

0xa6e2,	// (0x00048a9a) bg_popup_call2_bubble_pane

0xc3c5,	// (0x0004a77d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3c5,	// (0x0004a77d) bg_popup_call2_in_pane_cp01

0xa3be,	// (0x00048776) call_type_pane_cp02

0xc40d,	// (0x0004a7c5) popup_call2_audio_out_window_g1_ParamLimits

0xc40d,	// (0x0004a7c5) popup_call2_audio_out_window_g1

0xc439,	// (0x0004a7f1) popup_call2_audio_out_window_g2_ParamLimits

0xc439,	// (0x0004a7f1) popup_call2_audio_out_window_g2

0xc461,	// (0x0004a819) popup_call2_audio_out_window_g3_ParamLimits

0xc461,	// (0x0004a819) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0004d8ef) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0004d8ef) popup_call2_audio_out_window_g

0xc49c,	// (0x0004a854) popup_call2_audio_out_window_t1_ParamLimits

0xc49c,	// (0x0004a854) popup_call2_audio_out_window_t1

0xc4fb,	// (0x0004a8b3) popup_call2_audio_out_window_t2_ParamLimits

0xc4fb,	// (0x0004a8b3) popup_call2_audio_out_window_t2

0xc54f,	// (0x0004a907) popup_call2_audio_out_window_t3_ParamLimits

0xc54f,	// (0x0004a907) popup_call2_audio_out_window_t3

0xc565,	// (0x0004a91d) popup_call2_audio_out_window_t4_ParamLimits

0xc565,	// (0x0004a91d) popup_call2_audio_out_window_t4

0xc57b,	// (0x0004a933) popup_call2_audio_out_window_t5_ParamLimits

0xc57b,	// (0x0004a933) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0004d8f8) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0004d8f8) popup_call2_audio_out_window_t

0xc5df,	// (0x0004a997) bg_popup_call2_in_pane_ParamLimits

0xc5df,	// (0x0004a997) bg_popup_call2_in_pane

0xc63b,	// (0x0004a9f3) popup_call2_audio_in_window_g1_ParamLimits

0xc63b,	// (0x0004a9f3) popup_call2_audio_in_window_g1

0xc673,	// (0x0004aa2b) popup_call2_audio_in_window_g2_ParamLimits

0xc673,	// (0x0004aa2b) popup_call2_audio_in_window_g2

0xc6ab,	// (0x0004aa63) popup_call2_audio_in_window_g3_ParamLimits

0xc6ab,	// (0x0004aa63) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0004d905) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0004d905) popup_call2_audio_in_window_g

0xc703,	// (0x0004aabb) popup_call2_audio_in_window_t1_ParamLimits

0xc703,	// (0x0004aabb) popup_call2_audio_in_window_t1

0xc783,	// (0x0004ab3b) popup_call2_audio_in_window_t2_ParamLimits

0xc783,	// (0x0004ab3b) popup_call2_audio_in_window_t2

0xc803,	// (0x0004abbb) popup_call2_audio_in_window_t3_ParamLimits

0xc803,	// (0x0004abbb) popup_call2_audio_in_window_t3

0xc81d,	// (0x0004abd5) popup_call2_audio_in_window_t4_ParamLimits

0xc81d,	// (0x0004abd5) popup_call2_audio_in_window_t4

0xc82f,	// (0x0004abe7) popup_call2_audio_in_window_t5_ParamLimits

0xc82f,	// (0x0004abe7) popup_call2_audio_in_window_t5

0xc841,	// (0x0004abf9) popup_call2_audio_in_window_t6_ParamLimits

0xc841,	// (0x0004abf9) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0004d90e) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0004d90e) popup_call2_audio_in_window_t

0xa935,	// (0x00048ced) bg_popup_call2_in_pane_g1

0xc957,	// (0x0004ad0f) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0004d976) popup_cale_lunar_info_window_t

0xa93d,	// (0x00048cf5) bg_popup_call2_rect_pane_ParamLimits

0xa93d,	// (0x00048cf5) bg_popup_call2_rect_pane

0xa6e2,	// (0x00048a9a) call2_cli_visual_graphic_pane

0xa6e2,	// (0x00048a9a) call2_cli_visual_text_pane

0x54f7,	// (0x000438af) smil_status_volume_pane_g3

0x0002,

0xaa65,	// (0x00048e1d) call2_cli_visual_graphic_pane_g1

0xaa65,	// (0x00048e1d) call2_cli_visual_graphic_pane_g2

0xaa65,	// (0x00048e1d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0004d91b) call2_cli_visual_graphic_pane_g

0xc853,	// (0x0004ac0b) bg_popup_call2_rect_pane_g1

0xaaf1,	// (0x00048ea9) bg_popup_call2_rect_pane_g2

0xc85b,	// (0x0004ac13) bg_popup_call2_rect_pane_g3

0xc863,	// (0x0004ac1b) bg_popup_call2_rect_pane_g4

0xc86b,	// (0x0004ac23) bg_popup_call2_rect_pane_g5

0xc873,	// (0x0004ac2b) bg_popup_call2_rect_pane_g6

0xc87b,	// (0x0004ac33) bg_popup_call2_rect_pane_g7

0xc883,	// (0x0004ac3b) bg_popup_call2_rect_pane_g8

0xc88b,	// (0x0004ac43) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0004d922) bg_popup_call2_rect_pane_g

0xc893,	// (0x0004ac4b) bg_popup_call2_bubble_pane_g1

0xc89b,	// (0x0004ac53) bg_popup_call2_bubble_pane_g2

0xc8a3,	// (0x0004ac5b) bg_popup_call2_bubble_pane_g3

0xc8ab,	// (0x0004ac63) bg_popup_call2_bubble_pane_g4

0xc8b3,	// (0x0004ac6b) bg_popup_call2_bubble_pane_g5

0xc8bb,	// (0x0004ac73) bg_popup_call2_bubble_pane_g6

0xc8c3,	// (0x0004ac7b) bg_popup_call2_bubble_pane_g7

0xc8cb,	// (0x0004ac83) bg_popup_call2_bubble_pane_g8

0xc8d3,	// (0x0004ac8b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0004d935) bg_popup_call2_bubble_pane_g

0x274a,	// (0x00040b02) aid_cale_week_size_cell_pane

0x2ecd,	// (0x00041285) aid_cams_cif_uncrop_pane_ParamLimits

0x2ecd,	// (0x00041285) aid_cams_cif_uncrop_pane

0x302a,	// (0x000413e2) aid_cams_size_cell_ParamLimits

0x302a,	// (0x000413e2) aid_cams_size_cell

0x3036,	// (0x000413ee) grid_cams_pane_ParamLimits

0x3044,	// (0x000413fc) linegrid_cams_pane_ParamLimits

0x3115,	// (0x000414cd) call_video_pane_t1

0x3132,	// (0x000414ea) call_video_pane_t2

0x0001,

0xf26a,	// (0x0004d622) call_video_pane_t

0x35fe,	// (0x000419b6) aid_cale_month_size_cell_pane_ParamLimits

0x35fe,	// (0x000419b6) aid_cale_month_size_cell_pane

0xf607,	// (0x0004d9bf) smil_status_volume_pane_g

0x5504,	// (0x000438bc) volume_smil_pane_ParamLimits

0x1f12,	// (0x000402ca) aid_popup2_width_pane

0x2656,	// (0x00040a0e) cell_qdial_pane_g4_ParamLimits

0x2656,	// (0x00040a0e) cell_qdial_pane_g4

0x44ed,	// (0x000428a5) aid_blid_cardinal_pane_ParamLimits

0x44fd,	// (0x000428b5) aid_blid_destination_pane_ParamLimits

0x44fd,	// (0x000428b5) aid_blid_destination_pane

0xa93d,	// (0x00048cf5) bg_popup_call_poc_act_pane_ParamLimits

0xa93d,	// (0x00048cf5) bg_popup_call_poc_act_pane

0xa93d,	// (0x00048cf5) bg_popup_call_poc_inact_pane_ParamLimits

0xa93d,	// (0x00048cf5) bg_popup_call_poc_inact_pane

0xc8db,	// (0x0004ac93) bg_popup_call_poc_act_pane_g1

0xc8e3,	// (0x0004ac9b) bg_popup_call_poc_act_pane_g2

0xc8eb,	// (0x0004aca3) bg_popup_call_poc_act_pane_g3

0xc8ab,	// (0x0004ac63) bg_popup_call_poc_act_pane_g4

0xc8b3,	// (0x0004ac6b) bg_popup_call_poc_act_pane_g5

0xc8f3,	// (0x0004acab) bg_popup_call_poc_act_pane_g6

0xc8c3,	// (0x0004ac7b) bg_popup_call_poc_act_pane_g7

0xc8fb,	// (0x0004acb3) bg_popup_call_poc_act_pane_g8

0xa6e2,	// (0x00048a9a) main_usb_pane

0x52fc,	// (0x000436b4) popup_cale_lunar_info_window

0x344a,	// (0x00041802) im_reading_pane_t1_ParamLimits

0xacbd,	// (0x00049075) list_im_pane_ParamLimits

0xacce,	// (0x00049086) scroll_pane_cp07_ParamLimits

0xa6e2,	// (0x00048a9a) grid_highlight_pane_cp012

0xa93d,	// (0x00048cf5) mup_scale_pane_ParamLimits

0xb258,	// (0x00049610) main_usb_pane_g1_ParamLimits

0xb258,	// (0x00049610) main_usb_pane_g1

0x5065,	// (0x0004341d) main_usb_pane_g2_ParamLimits

0x5065,	// (0x0004341d) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0004d95f) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0004d95f) main_usb_pane_g

0x5071,	// (0x00043429) main_usb_pane_t1_ParamLimits

0x5071,	// (0x00043429) main_usb_pane_t1

0x5083,	// (0x0004343b) main_usb_pane_t2_ParamLimits

0x5083,	// (0x0004343b) main_usb_pane_t2

0x5095,	// (0x0004344d) main_usb_pane_t3_ParamLimits

0x5095,	// (0x0004344d) main_usb_pane_t3

0x50a7,	// (0x0004345f) main_usb_pane_t4_ParamLimits

0x50a7,	// (0x0004345f) main_usb_pane_t4

0x50b9,	// (0x00043471) main_usb_pane_t5_ParamLimits

0x50b9,	// (0x00043471) main_usb_pane_t5

0x50cb,	// (0x00043483) main_usb_pane_t6_ParamLimits

0x50cb,	// (0x00043483) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0004d964) main_usb_pane_t_ParamLimits

0x448c,	// (0x00042844) aid_text_placing

0x4497,	// (0x0004284f) main_location2_pane_t1_ParamLimits

0x44ad,	// (0x00042865) main_location2_pane_t2_ParamLimits

0x44c3,	// (0x0004287b) main_location2_pane_t3_ParamLimits

0x44d9,	// (0x00042891) main_location2_pane_t4_ParamLimits

0x44d9,	// (0x00042891) main_location2_pane_t4

0xf3cb,	// (0x0004d783) main_location2_pane_t_ParamLimits

0xa979,	// (0x00048d31) find_pinb_pane_g2_ParamLimits

0xa979,	// (0x00048d31) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004d4d3) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004d4d3) find_pinb_pane_g

0xa985,	// (0x00048d3d) find_pinb_pane_t1_ParamLimits

0xa997,	// (0x00048d4f) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004d4d8) find_pinb_pane_t_ParamLimits

0xa6e2,	// (0x00048a9a) main_call3_pane

0x3bb1,	// (0x00041f69) cale_month_day_heading_pane_t1_ParamLimits

0x3c33,	// (0x00041feb) cale_month_day_heading_pane_t2_ParamLimits

0x3cac,	// (0x00042064) cale_month_day_heading_pane_t3_ParamLimits

0x3d25,	// (0x000420dd) cale_month_day_heading_pane_t4_ParamLimits

0x3d9e,	// (0x00042156) cale_month_day_heading_pane_t5_ParamLimits

0x3e1f,	// (0x000421d7) cale_month_day_heading_pane_t6_ParamLimits

0x3ea8,	// (0x00042260) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0004d65a) cale_month_day_heading_pane_t_ParamLimits

0xaf18,	// (0x000492d0) smil_status_volume_pane

0x4c23,	// (0x00042fdb) postcard_address_pane_ParamLimits

0x4c23,	// (0x00042fdb) postcard_address_pane

0x4c31,	// (0x00042fe9) postcard_message_pane_ParamLimits

0x4c31,	// (0x00042fe9) postcard_message_pane

0x503b,	// (0x000433f3) call2_cli_visual_pane_t1_ParamLimits

0x503b,	// (0x000433f3) call2_cli_visual_pane_t1

0x564a,	// (0x00043a02) postcard_message_pane_t1_ParamLimits

0x564a,	// (0x00043a02) postcard_message_pane_t1

0xcb0f,	// (0x0004aec7) postcard_address_pane_t1_ParamLimits

0xcb0f,	// (0x0004aec7) postcard_address_pane_t1

0x563b,	// (0x000439f3) popup_call3_audio_in_window_ParamLimits

0x563b,	// (0x000439f3) popup_call3_audio_in_window

0x5519,	// (0x000438d1) bg_popup_call3_in_pane_ParamLimits

0x5519,	// (0x000438d1) bg_popup_call3_in_pane

0x5581,	// (0x00043939) popup_call3_audio_in_window_g1_ParamLimits

0x5581,	// (0x00043939) popup_call3_audio_in_window_g1

0x5599,	// (0x00043951) popup_call3_audio_in_window_g2_ParamLimits

0x5599,	// (0x00043951) popup_call3_audio_in_window_g2

0x55b1,	// (0x00043969) popup_call3_audio_in_window_g3_ParamLimits

0x55b1,	// (0x00043969) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0004d9c6) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0004d9c6) popup_call3_audio_in_window_g

0x55d9,	// (0x00043991) popup_call3_audio_in_window_t1_ParamLimits

0x55d9,	// (0x00043991) popup_call3_audio_in_window_t1

0x5601,	// (0x000439b9) popup_call3_audio_in_window_t2_ParamLimits

0x5601,	// (0x000439b9) popup_call3_audio_in_window_t2

0x5629,	// (0x000439e1) popup_call3_audio_in_window_t3_ParamLimits

0x5629,	// (0x000439e1) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0004d9cf) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0004d9cf) popup_call3_audio_in_window_t

0xabb8,	// (0x00048f70) bg_popup_call3_rect_pane

0xc853,	// (0x0004ac0b) bg_popup_call3_rect_pane_g1

0xaaf1,	// (0x00048ea9) bg_popup_call3_rect_pane_g2

0xc85b,	// (0x0004ac13) bg_popup_call3_rect_pane_g3

0xc863,	// (0x0004ac1b) bg_popup_call3_rect_pane_g4

0xc86b,	// (0x0004ac23) bg_popup_call3_rect_pane_g5

0xc873,	// (0x0004ac2b) bg_popup_call3_rect_pane_g6

0xc87b,	// (0x0004ac33) bg_popup_call3_rect_pane_g7

0x4831,	// (0x00042be9) mup_visualizer_osc_pane

0xb6d0,	// (0x00049a88) mup_visualizer_spec_pane

0x5539,	// (0x000438f1) call3_video_qcif_pane_ParamLimits

0x5539,	// (0x000438f1) call3_video_qcif_pane

0x554b,	// (0x00043903) call3_video_qcif_uncrop_pane_ParamLimits

0x554b,	// (0x00043903) call3_video_qcif_uncrop_pane

0x555b,	// (0x00043913) call3_video_subqcif_pane_ParamLimits

0x555b,	// (0x00043913) call3_video_subqcif_pane

0x556f,	// (0x00043927) call3_video_subqcif_uncrop_pane_ParamLimits

0x556f,	// (0x00043927) call3_video_subqcif_uncrop_pane

0x55c9,	// (0x00043981) popup_call3_audio_in_window_g4_ParamLimits

0x55c9,	// (0x00043981) popup_call3_audio_in_window_g4

0x54e6,	// (0x0004389e) mup_spec_half_pane

0x54ef,	// (0x000438a7) mup_spec_half_pane_cp

0xcacf,	// (0x0004ae87) mup_osc_middle_pane

0xcad8,	// (0x0004ae90) mup_visualizer_osc_pane_g1

0x54c6,	// (0x0004387e) mup_spec_bar_pane_ParamLimits

0x54c6,	// (0x0004387e) mup_spec_bar_pane

0xcabc,	// (0x0004ae74) mup_spec_bar_pane_g1

0xcac6,	// (0x0004ae7e) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0004d9ba) mup_spec_bar_pane_g

0x274a,	// (0x00040b02) aid_cale_week_size_cell_pane_ParamLimits

0x2764,	// (0x00040b1c) bg_cale_heading_pane_ParamLimits

0x278d,	// (0x00040b45) bg_cale_pane_cp01_ParamLimits

0x27af,	// (0x00040b67) cale_week_corner_pane_ParamLimits

0x27ce,	// (0x00040b86) cale_week_day_heading_pane_ParamLimits

0x27fc,	// (0x00040bb4) cale_week_scroll_pane_g1_ParamLimits

0x2820,	// (0x00040bd8) cale_week_scroll_pane_g2_ParamLimits

0x2838,	// (0x00040bf0) cale_week_scroll_pane_g3_ParamLimits

0x2850,	// (0x00040c08) cale_week_scroll_pane_g4_ParamLimits

0x2868,	// (0x00040c20) cale_week_scroll_pane_g5_ParamLimits

0x2880,	// (0x00040c38) cale_week_scroll_pane_g6_ParamLimits

0x28a0,	// (0x00040c58) cale_week_scroll_pane_g7_ParamLimits

0x28c0,	// (0x00040c78) cale_week_scroll_pane_g8_ParamLimits

0x28e0,	// (0x00040c98) cale_week_scroll_pane_g9_ParamLimits

0x28fd,	// (0x00040cb5) cale_week_scroll_pane_g10_ParamLimits

0x291a,	// (0x00040cd2) cale_week_scroll_pane_g11_ParamLimits

0x2939,	// (0x00040cf1) cale_week_scroll_pane_g12_ParamLimits

0x295e,	// (0x00040d16) cale_week_scroll_pane_g13_ParamLimits

0x2987,	// (0x00040d3f) cale_week_scroll_pane_g14_ParamLimits

0x29b0,	// (0x00040d68) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004d564) cale_week_scroll_pane_g_ParamLimits

0x29f9,	// (0x00040db1) cale_week_time_pane_ParamLimits

0x2a19,	// (0x00040dd1) grid_cale_week_pane_ParamLimits

0xab2e,	// (0x00048ee6) listscroll_cale_week_pane_t1

0xab40,	// (0x00048ef8) scroll_pane_cp08_ParamLimits

0x3676,	// (0x00041a2e) cale_month_corner_pane_ParamLimits

0xaeee,	// (0x000492a6) cale_month_pane_t1

0x3b38,	// (0x00041ef0) cale_month_week_pane_ParamLimits

0xb258,	// (0x00049610) popup_call_status_window_g1_ParamLimits

0x42aa,	// (0x00042662) popup_call_status_window_g2_ParamLimits

0x42b6,	// (0x0004266e) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0004d70a) popup_call_status_window_g_ParamLimits

0xb2bf,	// (0x00049677) aid_call2_pane

0x0dc0,	// (0x0003f178) msg_header_pane_g1

0x4c23,	// (0x00042fdb) postcard_address2_pane_ParamLimits

0x4c23,	// (0x00042fdb) postcard_address2_pane

0x4c31,	// (0x00042fe9) postcard_message2_pane_ParamLimits

0x4c31,	// (0x00042fe9) postcard_message2_pane

0x5480,	// (0x00043838) message2_row_pane_ParamLimits

0x5480,	// (0x00043838) message2_row_pane

0xca77,	// (0x0004ae2f) address2_row_pane_ParamLimits

0xca77,	// (0x0004ae2f) address2_row_pane

0xca8a,	// (0x0004ae42) postcard_message2_row_pane_g1

0xca92,	// (0x0004ae4a) postcard_message2_row_pane_t1

0xca8a,	// (0x0004ae42) address2_row_pane_g1

0xca92,	// (0x0004ae4a) address2_row_pane_t1

0x2da7,	// (0x0004115f) aid_size_cell_vorec

0xa6e2,	// (0x00048a9a) main_rss_pane

0x549a,	// (0x00043852) rss_list_single_pane_ParamLimits

0x549a,	// (0x00043852) rss_list_single_pane

0xcaa0,	// (0x0004ae58) rss_list_single_pane_t1

0xcaae,	// (0x0004ae66) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0004d9b5) rss_list_single_pane_t

0xa6e2,	// (0x00048a9a) main_camera2_pane

0xa6e2,	// (0x00048a9a) main_video2_pane

0x56ae,	// (0x00043a66) cams_zoom_pane_cp2_ParamLimits

0x56ae,	// (0x00043a66) cams_zoom_pane_cp2

0x56ba,	// (0x00043a72) image2_vga_pane_ParamLimits

0x56ba,	// (0x00043a72) image2_vga_pane

0x56c9,	// (0x00043a81) main_camera2_pane_g1_ParamLimits

0x56c9,	// (0x00043a81) main_camera2_pane_g1

0x56d5,	// (0x00043a8d) main_camera2_pane_g2_ParamLimits

0x56d5,	// (0x00043a8d) main_camera2_pane_g2

0x56e1,	// (0x00043a99) main_camera2_pane_g3_ParamLimits

0x56e1,	// (0x00043a99) main_camera2_pane_g3

0x56ed,	// (0x00043aa5) main_camera2_pane_g4_ParamLimits

0x56ed,	// (0x00043aa5) main_camera2_pane_g4

0x56f9,	// (0x00043ab1) main_camera2_pane_g5_ParamLimits

0x56f9,	// (0x00043ab1) main_camera2_pane_g5

0x5705,	// (0x00043abd) main_camera2_pane_g6_ParamLimits

0x5705,	// (0x00043abd) main_camera2_pane_g6

0x5711,	// (0x00043ac9) main_camera2_pane_g7_ParamLimits

0x5711,	// (0x00043ac9) main_camera2_pane_g7

0x571d,	// (0x00043ad5) main_camera2_pane_g8_ParamLimits

0x571d,	// (0x00043ad5) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0004d9d6) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0004d9d6) main_camera2_pane_g

0x5735,	// (0x00043aed) main_camera2_pane_t1_ParamLimits

0x5735,	// (0x00043aed) main_camera2_pane_t1

0x5747,	// (0x00043aff) main_camera2_pane_t2_ParamLimits

0x5747,	// (0x00043aff) main_camera2_pane_t2

0x5759,	// (0x00043b11) main_camera2_pane_t3_ParamLimits

0x5759,	// (0x00043b11) main_camera2_pane_t3

0x576b,	// (0x00043b23) main_camera2_pane_t4_ParamLimits

0x576b,	// (0x00043b23) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0004d9e9) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0004d9e9) main_camera2_pane_t

0x57c8,	// (0x00043b80) cams_zoom_pane_cp4_ParamLimits

0x57c8,	// (0x00043b80) cams_zoom_pane_cp4

0x57d8,	// (0x00043b90) image2_cif_pane_ParamLimits

0x57d8,	// (0x00043b90) image2_cif_pane

0x57ed,	// (0x00043ba5) image2_subqcif_pane_ParamLimits

0x57ed,	// (0x00043ba5) image2_subqcif_pane

0x57fc,	// (0x00043bb4) main_video2_pane_g1_ParamLimits

0x57fc,	// (0x00043bb4) main_video2_pane_g1

0x580e,	// (0x00043bc6) main_video2_pane_g2_ParamLimits

0x580e,	// (0x00043bc6) main_video2_pane_g2

0x581e,	// (0x00043bd6) main_video2_pane_g3_ParamLimits

0x581e,	// (0x00043bd6) main_video2_pane_g3

0x582e,	// (0x00043be6) main_video2_pane_g4_ParamLimits

0x582e,	// (0x00043be6) main_video2_pane_g4

0x583e,	// (0x00043bf6) main_video2_pane_g5_ParamLimits

0x583e,	// (0x00043bf6) main_video2_pane_g5

0x584e,	// (0x00043c06) main_video2_pane_g6_ParamLimits

0x584e,	// (0x00043c06) main_video2_pane_g6

0x0005,

0xf640,	// (0x0004d9f8) main_video2_pane_g_ParamLimits

0xf640,	// (0x0004d9f8) main_video2_pane_g

0x5860,	// (0x00043c18) main_video2_pane_t1_ParamLimits

0x5860,	// (0x00043c18) main_video2_pane_t1

0x587a,	// (0x00043c32) main_video2_pane_t2_ParamLimits

0x587a,	// (0x00043c32) main_video2_pane_t2

0x58a0,	// (0x00043c58) main_video2_pane_t3_ParamLimits

0x58a0,	// (0x00043c58) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0004da05) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0004da05) main_video2_pane_t

0x5182,	// (0x0004353a) call_muted_g2

0x0001,

0xf5ef,	// (0x0004d9a7) call_muted_g

0xa6e2,	// (0x00048a9a) main_mup2_pane

0xcb26,	// (0x0004aede) main_mup2_pane_g1_ParamLimits

0xcb26,	// (0x0004aede) main_mup2_pane_g1

0x58c6,	// (0x00043c7e) main_mup2_pane_g2_ParamLimits

0x58c6,	// (0x00043c7e) main_mup2_pane_g2

0x5b58,	// (0x00043f10) main_mup_pane_g13_cp1

0x5b60,	// (0x00043f18) mup_volume_pane_cp1

0x58e8,	// (0x00043ca0) main_mup2_pane_g4_ParamLimits

0x58e8,	// (0x00043ca0) main_mup2_pane_g4

0x58fd,	// (0x00043cb5) main_mup2_pane_g5_ParamLimits

0x58fd,	// (0x00043cb5) main_mup2_pane_g5

0x5912,	// (0x00043cca) main_mup2_pane_g6_ParamLimits

0x5912,	// (0x00043cca) main_mup2_pane_g6

0x5927,	// (0x00043cdf) main_mup2_pane_g7_ParamLimits

0x5927,	// (0x00043cdf) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0004da0c) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0004da0c) main_mup2_pane_g

0x5943,	// (0x00043cfb) main_mup2_pane_t1_ParamLimits

0x5943,	// (0x00043cfb) main_mup2_pane_t1

0x595a,	// (0x00043d12) main_mup2_pane_t2_ParamLimits

0x595a,	// (0x00043d12) main_mup2_pane_t2

0x5971,	// (0x00043d29) main_mup2_pane_t3_ParamLimits

0x5971,	// (0x00043d29) main_mup2_pane_t3

0x5988,	// (0x00043d40) main_mup2_pane_t4_ParamLimits

0x5988,	// (0x00043d40) main_mup2_pane_t4

0x59a2,	// (0x00043d5a) main_mup2_pane_t5_ParamLimits

0x59a2,	// (0x00043d5a) main_mup2_pane_t5

0x59bc,	// (0x00043d74) main_mup2_pane_t6_ParamLimits

0x59bc,	// (0x00043d74) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0004da1b) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0004da1b) main_mup2_pane_t

0x59f4,	// (0x00043dac) mup2_visualizer_pane_ParamLimits

0x59f4,	// (0x00043dac) mup2_visualizer_pane

0x5a2a,	// (0x00043de2) mup_progress_pane_cp_ParamLimits

0x5a2a,	// (0x00043de2) mup_progress_pane_cp

0x5b43,	// (0x00043efb) mup_volume_pane_cp_ParamLimits

0x5b43,	// (0x00043efb) mup_volume_pane_cp

0x5a43,	// (0x00043dfb) mup2_visualizer_pane_g1_ParamLimits

0x5a43,	// (0x00043dfb) mup2_visualizer_pane_g1

0xcb32,	// (0x0004aeea) mup2_visualizer_pane_g2_ParamLimits

0xcb32,	// (0x0004aeea) mup2_visualizer_pane_g2

0x5a58,	// (0x00043e10) mup2_visualizer_pane_g3_ParamLimits

0x5a58,	// (0x00043e10) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0004da28) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0004da28) mup2_visualizer_pane_g

0xb90b,	// (0x00049cc3) aid_size_cell_fmradio

0x5298,	// (0x00043650) aid_height_parent_landcape

0xad4c,	// (0x00049104) wml_content_pane_cp

0xad54,	// (0x0004910c) wml_tabs_pane

0xad5d,	// (0x00049115) popup_wml_miniature_window

0xad65,	// (0x0004911d) scroll_pane_cp021

0xad79,	// (0x00049131) wml_content_pane_comp8

0xa6e2,	// (0x00048a9a) bg_popup_sub_pane_cp05

0xcb50,	// (0x0004af08) popup_wml_miniature_window_g1

0xcb58,	// (0x0004af10) wml_miniature_view_pane

0x5a66,	// (0x00043e1e) aid_size_wml_view

0x5a6e,	// (0x00043e26) wml_miniature_view_pane_g1

0x5a77,	// (0x00043e2f) wml_miniature_view_pane_g2

0x5a80,	// (0x00043e38) wml_miniature_view_pane_g3

0x5a88,	// (0x00043e40) wml_miniature_view_pane_g4

0x5a90,	// (0x00043e48) wml_miniature_view_pane_g5

0x5a98,	// (0x00043e50) wml_miniature_view_pane_g6

0x5aa0,	// (0x00043e58) wml_miniature_view_pane_g7

0x5aa8,	// (0x00043e60) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0004da2f) wml_miniature_view_pane_g

0xcb26,	// (0x0004aede) background_graphic_ParamLimits

0xcb26,	// (0x0004aede) background_graphic

0xcb60,	// (0x0004af18) wml_tabs_2_pane

0xcb69,	// (0x0004af21) wml_tabs_3_pane_ParamLimits

0xcb69,	// (0x0004af21) wml_tabs_3_pane

0xcb7b,	// (0x0004af33) wml_tabs_4_pane_ParamLimits

0xcb7b,	// (0x0004af33) wml_tabs_4_pane

0xcb91,	// (0x0004af49) wml_tabs_5_pane_ParamLimits

0xcb91,	// (0x0004af49) wml_tabs_5_pane

0xcbab,	// (0x0004af63) wml_tabs_pane_g2_ParamLimits

0xcbab,	// (0x0004af63) wml_tabs_pane_g2

0xcbbf,	// (0x0004af77) wml_tabs_pane_g3_ParamLimits

0xcbbf,	// (0x0004af77) wml_tabs_pane_g3

0x5ab0,	// (0x00043e68) wml_tabs_2_active_pane_ParamLimits

0x5ab0,	// (0x00043e68) wml_tabs_2_active_pane

0x5ac2,	// (0x00043e7a) wml_tabs_2_passive_pane_ParamLimits

0x5ac2,	// (0x00043e7a) wml_tabs_2_passive_pane

0x5ad4,	// (0x00043e8c) wml_tabs_3_active_pane_cp_ParamLimits

0x5ad4,	// (0x00043e8c) wml_tabs_3_active_pane_cp

0x5ae7,	// (0x00043e9f) wml_tabs_3_passive_pane_ParamLimits

0x5ae7,	// (0x00043e9f) wml_tabs_3_passive_pane

0x5af8,	// (0x00043eb0) wml_tabs_3_passive_pane_cp_ParamLimits

0x5af8,	// (0x00043eb0) wml_tabs_3_passive_pane_cp

0x5b0d,	// (0x00043ec5) tabs_4_active_pane

0x5b15,	// (0x00043ecd) tabs_4_passive_pane

0x5b1d,	// (0x00043ed5) tabs_4_passive_pane_cp

0x5b25,	// (0x00043edd) tabs_4_passive_pane_cp2

0x505d,	// (0x00043415) aid_height_text

0x47fa,	// (0x00042bb2) mup_volume_cont_pane_ParamLimits

0x47fa,	// (0x00042bb2) mup_volume_cont_pane

0x22b0,	// (0x00040668) aid_size_cell_pinb

0x22ba,	// (0x00040672) aid_size_list_pinb

0x5a13,	// (0x00043dcb) mup2_volume_cont_pane_ParamLimits

0x5a13,	// (0x00043dcb) mup2_volume_cont_pane

0x5b2f,	// (0x00043ee7) mup2_volume_cont_pane_g1_ParamLimits

0x5b2f,	// (0x00043ee7) mup2_volume_cont_pane_g1

0x1f1e,	// (0x000402d6) aid_size_cell_touch_ParamLimits

0x1f1e,	// (0x000402d6) aid_size_cell_touch

0x21cf,	// (0x00040587) touch_pane_ParamLimits

0x21cf,	// (0x00040587) touch_pane

0xa290,	// (0x00048648) main_rss2_pane

0xcbdc,	// (0x0004af94) listscroll_rss2_pane

0xcbe5,	// (0x0004af9d) rss2_navigation_pane

0xcbed,	// (0x0004afa5) list_rss2_pane

0xb3e3,	// (0x0004979b) scroll_pane_cp22

0xcbf5,	// (0x0004afad) rss2_navigation_pane_g1

0xcbfe,	// (0x0004afb6) rss2_navigation_pane_g2

0xcc06,	// (0x0004afbe) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0004da40) rss2_navigation_pane_g

0xcc0e,	// (0x0004afc6) rss2_navigation_pane_t1

0x5b68,	// (0x00043f20) rss2_list_single_pane_ParamLimits

0x5b68,	// (0x00043f20) rss2_list_single_pane

0xcc1c,	// (0x0004afd4) rss2_list_single_pane_t2

0xcc2a,	// (0x0004afe2) rss2_list_single_pane_t3_ParamLimits

0xcc2a,	// (0x0004afe2) rss2_list_single_pane_t3

0xcc47,	// (0x0004afff) rss2_list_single_pane_t4

0x4146,	// (0x000424fe) smil_status_pane_g1

0xb939,	// (0x00049cf1) main_image2_pane_ParamLimits

0xb939,	// (0x00049cf1) main_image2_pane

0x5729,	// (0x00043ae1) main_camera2_pane_g9_ParamLimits

0x5729,	// (0x00043ae1) main_camera2_pane_g9

0x577d,	// (0x00043b35) main_camera2_pane_t5_ParamLimits

0x577d,	// (0x00043b35) main_camera2_pane_t5

0x578f,	// (0x00043b47) main_camera2_pane_t6_ParamLimits

0x578f,	// (0x00043b47) main_camera2_pane_t6

0x5b8b,	// (0x00043f43) main_image2_pane_g1_ParamLimits

0x5b8b,	// (0x00043f43) main_image2_pane_g1

0x4dfa,	// (0x000431b2) smil2_video_pane_ParamLimits

0x4dfa,	// (0x000431b2) smil2_video_pane

0x0b90,	// (0x0003ef48) aid_zoom_text_primary_cp

0x2178,	// (0x00040530) popup_preview_fixed_window

0xacb5,	// (0x0004906d) im_reading_pane_g1

0x5673,	// (0x00043a2b) cams2_bc_adjust_pane_cp_ParamLimits

0x5673,	// (0x00043a2b) cams2_bc_adjust_pane_cp

0x57ba,	// (0x00043b72) cams2_bc_adjust_pane_ParamLimits

0x57ba,	// (0x00043b72) cams2_bc_adjust_pane

0x5b97,	// (0x00043f4f) cams2_bc_adjust_pane_g1

0x5b9f,	// (0x00043f57) cams2_slider_pane

0x5ba8,	// (0x00043f60) cams2_slider_pane_g1

0x5bb1,	// (0x00043f69) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0004da47) cams2_slider_pane_g

0x23b5,	// (0x0004076d) calc_display_pane_ParamLimits

0x23d3,	// (0x0004078b) calc_paper_pane_ParamLimits

0x23ef,	// (0x000407a7) grid_calc_pane_ParamLimits

0x4314,	// (0x000426cc) popup_clock_digital_window_t1_ParamLimits

0xb8a8,	// (0x00049c60) main_image_pane_t1

0x239b,	// (0x00040753) aid_size_cell_calc_ParamLimits

0x239b,	// (0x00040753) aid_size_cell_calc

0x52d2,	// (0x0004368a) popup_blid_sat_info2_window_ParamLimits

0x52d2,	// (0x0004368a) popup_blid_sat_info2_window

0xcc5d,	// (0x0004b015) aid_size_cell_blid

0xcc65,	// (0x0004b01d) bg_popup_window_pane_cp07

0xcc88,	// (0x0004b040) grid_popup_blid_pane

0xcc92,	// (0x0004b04a) heading_pane_cp05_ParamLimits

0xcc92,	// (0x0004b04a) heading_pane_cp05

0xcd5c,	// (0x0004b114) cell_popup_blid_pane_ParamLimits

0xcd5c,	// (0x0004b114) cell_popup_blid_pane

0xcd86,	// (0x0004b13e) cell_popup_blid_pane_g1

0xcd8e,	// (0x0004b146) cell_popup_blid_pane_t1

0x59d9,	// (0x00043d91) mup2_indicator_pane_ParamLimits

0x59d9,	// (0x00043d91) mup2_indicator_pane

0xabb8,	// (0x00048f70) mup2_visualizer_osc_pane

0xcb3e,	// (0x0004aef6) mup2_visualizer_spec_pane_ParamLimits

0xcb3e,	// (0x0004aef6) mup2_visualizer_spec_pane

0x5bcb,	// (0x00043f83) mup2_spec_half_pane

0x5bd4,	// (0x00043f8c) mup2_spec_half_pane_cp

0x5bde,	// (0x00043f96) mup2_spec_bar_pane_ParamLimits

0x5bde,	// (0x00043f96) mup2_spec_bar_pane

0xcabc,	// (0x0004ae74) mup2_spec_bar_pane_g1

0xcac6,	// (0x0004ae7e) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0004d9ba) mup2_spec_bar_pane_g

0x5bfd,	// (0x00043fb5) mup2_osc_middle_pane

0xcad8,	// (0x0004ae90) mup2_visualizer_osc_pane_g1

0xa2ba,	// (0x00048672) popup_number_entry_window_t1_ParamLimits

0xa2cd,	// (0x00048685) popup_number_entry_window_t2_ParamLimits

0xa2df,	// (0x00048697) popup_number_entry_window_t3_ParamLimits

0xa2f1,	// (0x000486a9) popup_number_entry_window_t5_ParamLimits

0xa2f1,	// (0x000486a9) popup_number_entry_window_t5

0xf0c6,	// (0x0004d47e) popup_number_entry_window_t_ParamLimits

0xa326,	// (0x000486de) text_title_cp2_ParamLimits

0x4ae7,	// (0x00042e9f) aid_hotspot_pointer_text2_pane

0x4b81,	// (0x00042f39) main_viewer_pane_g9_ParamLimits

0x4b81,	// (0x00042f39) main_viewer_pane_g9

0xaeee,	// (0x000492a6) cale_month_pane_t1_ParamLimits

0xaf2b,	// (0x000492e3) bg_cale_pane_ParamLimits

0xaf43,	// (0x000492fb) list_cale_pane_ParamLimits

0xaf54,	// (0x0004930c) listscroll_cale_day_pane_t1

0xaf66,	// (0x0004931e) scroll_pane_cp09_ParamLimits

0x4839,	// (0x00042bf1) main_mup_eq_pane_t1_ParamLimits

0x4839,	// (0x00042bf1) main_mup_eq_pane_t1

0x4855,	// (0x00042c0d) main_mup_eq_pane_t2_ParamLimits

0x4855,	// (0x00042c0d) main_mup_eq_pane_t2

0x4871,	// (0x00042c29) main_mup_eq_pane_t3_ParamLimits

0x4871,	// (0x00042c29) main_mup_eq_pane_t3

0x488b,	// (0x00042c43) main_mup_eq_pane_t4_ParamLimits

0x488b,	// (0x00042c43) main_mup_eq_pane_t4

0x48a5,	// (0x00042c5d) main_mup_eq_pane_t5_ParamLimits

0x48a5,	// (0x00042c5d) main_mup_eq_pane_t5

0x48bf,	// (0x00042c77) main_mup_eq_pane_t6_ParamLimits

0x48bf,	// (0x00042c77) main_mup_eq_pane_t6

0x48d5,	// (0x00042c8d) main_mup_eq_pane_t7_ParamLimits

0x48d5,	// (0x00042c8d) main_mup_eq_pane_t7

0x48eb,	// (0x00042ca3) main_mup_eq_pane_t8_ParamLimits

0x48eb,	// (0x00042ca3) main_mup_eq_pane_t8

0x4901,	// (0x00042cb9) main_mup_eq_pane_t9_ParamLimits

0x4901,	// (0x00042cb9) main_mup_eq_pane_t9

0x491d,	// (0x00042cd5) main_mup_eq_pane_t10_ParamLimits

0x491d,	// (0x00042cd5) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0004d809) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0004d809) main_mup_eq_pane_t

0x49e2,	// (0x00042d9a) mup_equalizer_pane_cp5_ParamLimits

0x49fa,	// (0x00042db2) mup_equalizer_pane_cp6_ParamLimits

0x4a12,	// (0x00042dca) mup_equalizer_pane_cp7_ParamLimits

0xa290,	// (0x00048648) main_gallery_pane

0xcae1,	// (0x0004ae99) smil2_volume_pane

0xcae9,	// (0x0004aea1) smil_status_volume_pane_g1_ParamLimits

0xcafc,	// (0x0004aeb4) smil_status_volume_pane_g2_ParamLimits

0x54f7,	// (0x000438af) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0004d9bf) smil_status_volume_pane_g_ParamLimits

0xcc65,	// (0x0004b01d) bg_popup_window_pane_cp07_ParamLimits

0xcc73,	// (0x0004b02b) blid_firmament_pane

0x5c06,	// (0x00043fbe) aid_size_cell_gallery_ParamLimits

0x5c06,	// (0x00043fbe) aid_size_cell_gallery

0x5c14,	// (0x00043fcc) grid_gallery_pane_ParamLimits

0x5c14,	// (0x00043fcc) grid_gallery_pane

0x5c24,	// (0x00043fdc) cell_gallery_pane_ParamLimits

0x5c24,	// (0x00043fdc) cell_gallery_pane

0xcd9c,	// (0x0004b154) bg_cell_gallery_focus_pane_ParamLimits

0xcd9c,	// (0x0004b154) bg_cell_gallery_focus_pane

0xcdae,	// (0x0004b166) cell_gallery_pane_g1_ParamLimits

0xcdae,	// (0x0004b166) cell_gallery_pane_g1

0x5c6f,	// (0x00044027) cell_gallery_pane_g2_ParamLimits

0x5c6f,	// (0x00044027) cell_gallery_pane_g2

0x5c7c,	// (0x00044034) cell_gallery_pane_g3_ParamLimits

0x5c7c,	// (0x00044034) cell_gallery_pane_g3

0xcdba,	// (0x0004b172) cell_gallery_pane_g4_ParamLimits

0xcdba,	// (0x0004b172) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0004da6d) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0004da6d) cell_gallery_pane_g

0xcdc6,	// (0x0004b17e) bg_cell_gallery_focus_pane_g1

0xcdce,	// (0x0004b186) bg_cell_gallery_focus_pane_g2

0xcdd6,	// (0x0004b18e) bg_cell_gallery_focus_pane_g3

0xcdde,	// (0x0004b196) bg_cell_gallery_focus_pane_g4

0xcde6,	// (0x0004b19e) bg_cell_gallery_focus_pane_g5

0xcdee,	// (0x0004b1a6) bg_cell_gallery_focus_pane_g6

0xcdf6,	// (0x0004b1ae) bg_cell_gallery_focus_pane_g7

0xcdfe,	// (0x0004b1b6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0004da76) bg_cell_gallery_focus_pane_g

0xce06,	// (0x0004b1be) aid_firma_cardinal

0xce1a,	// (0x0004b1d2) blid_firmament_pane_t1

0xce31,	// (0x0004b1e9) blid_firmament_pane_t2

0xce48,	// (0x0004b200) blid_firmament_pane_t3

0xce5f,	// (0x0004b217) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0004da87) blid_firmament_pane_t

0xce76,	// (0x0004b22e) blid_sat_info_pane

0xce86,	// (0x0004b23e) blid_sat_info_pane_g1

0xce86,	// (0x0004b23e) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0004da90) blid_sat_info_pane_g

0xce90,	// (0x0004b248) blid_sat_info_pane_t1

0xce9e,	// (0x0004b256) smil2_volume_content_pane

0xcea7,	// (0x0004b25f) smil2_volume_pane_g1

0xb1df,	// (0x00049597) smil2_volume_content_pane_g1

0xceaf,	// (0x0004b267) smil2_volume_content_pane_g2

0xceb8,	// (0x0004b270) smil2_volume_content_pane_g3

0xcec1,	// (0x0004b279) smil2_volume_content_pane_g4

0xceca,	// (0x0004b282) smil2_volume_content_pane_g5

0xced3,	// (0x0004b28b) smil2_volume_content_pane_g6

0xcedc,	// (0x0004b294) smil2_volume_content_pane_g7

0xcee5,	// (0x0004b29d) smil2_volume_content_pane_g8

0xceee,	// (0x0004b2a6) smil2_volume_content_pane_g9

0xcef7,	// (0x0004b2af) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0004da95) smil2_volume_content_pane_g

0x2ada,	// (0x00040e92) cale_week_day_heading_pane_t1_ParamLimits

0x2b02,	// (0x00040eba) cale_week_day_heading_pane_t2_ParamLimits

0x2b2f,	// (0x00040ee7) cale_week_day_heading_pane_t3_ParamLimits

0x2b5c,	// (0x00040f14) cale_week_day_heading_pane_t4_ParamLimits

0x2b89,	// (0x00040f41) cale_week_day_heading_pane_t5_ParamLimits

0x2bb6,	// (0x00040f6e) cale_week_day_heading_pane_t6_ParamLimits

0x2be3,	// (0x00040f9b) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004d585) cale_week_day_heading_pane_t_ParamLimits

0xab5d,	// (0x00048f15) bg_cale_side_pane_ParamLimits

0x2c0b,	// (0x00040fc3) cale_week_time_pane_t1_ParamLimits

0x2c2f,	// (0x00040fe7) cale_week_time_pane_t2_ParamLimits

0x2c53,	// (0x0004100b) cale_week_time_pane_t3_ParamLimits

0x2c77,	// (0x0004102f) cale_week_time_pane_t4_ParamLimits

0x2c9b,	// (0x00041053) cale_week_time_pane_t5_ParamLimits

0x2cc1,	// (0x00041079) cale_week_time_pane_t6_ParamLimits

0x2ce9,	// (0x000410a1) cale_week_time_pane_t7_ParamLimits

0x2d15,	// (0x000410cd) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004d594) cale_week_time_pane_t_ParamLimits

0x2d45,	// (0x000410fd) cell_cale_week_pane_g2_ParamLimits

0xab5d,	// (0x00048f15) bg_cale_side_pane_cp01_ParamLimits

0x3f31,	// (0x000422e9) cale_month_week_pane_t1_ParamLimits

0x3f4a,	// (0x00042302) cale_month_week_pane_t2_ParamLimits

0x3f63,	// (0x0004231b) cale_month_week_pane_t3_ParamLimits

0x3f7c,	// (0x00042334) cale_month_week_pane_t4_ParamLimits

0x3f95,	// (0x0004234d) cale_month_week_pane_t5_ParamLimits

0x3fb2,	// (0x0004236a) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0004d669) cale_month_week_pane_t_ParamLimits

0x4103,	// (0x000424bb) cell_cale_month_pane_g1_ParamLimits

0xa290,	// (0x00048648) main_cale_event_viewer_pane

0xa290,	// (0x00048648) listscroll_cale_event_viewer_pane

0xcf00,	// (0x0004b2b8) list_cale_ev_pane

0xcf08,	// (0x0004b2c0) scroll_pane_cp023

0x5c89,	// (0x00044041) field_cale_ev_pane_ParamLimits

0x5c89,	// (0x00044041) field_cale_ev_pane

0xcf14,	// (0x0004b2cc) field_cale_ev_content_pane_ParamLimits

0xcf14,	// (0x0004b2cc) field_cale_ev_content_pane

0xcf20,	// (0x0004b2d8) field_cale_ev_pane_g1_ParamLimits

0xcf20,	// (0x0004b2d8) field_cale_ev_pane_g1

0xcf2c,	// (0x0004b2e4) field_cale_ev_pane_g2_ParamLimits

0xcf2c,	// (0x0004b2e4) field_cale_ev_pane_g2

0xcf44,	// (0x0004b2fc) field_cale_ev_pane_g3_ParamLimits

0xcf44,	// (0x0004b2fc) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0004daaa) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0004daaa) field_cale_ev_pane_g

0xcf5c,	// (0x0004b314) field_cale_ev_pane_t1_ParamLimits

0xcf5c,	// (0x0004b314) field_cale_ev_pane_t1

0x5cad,	// (0x00044065) field_cale_ev_content_pane_t1_ParamLimits

0x5cad,	// (0x00044065) field_cale_ev_content_pane_t1

0xb77c,	// (0x00049b34) bg_button_pane_cp01

0x2738,	// (0x00040af0) listscroll_cale_week_pane_ParamLimits

0xab25,	// (0x00048edd) popup_toolbar_window_cp01

0xab2e,	// (0x00048ee6) listscroll_cale_week_pane_t1_ParamLimits

0x2738,	// (0x00040af0) listscroll_cale_day_pane_ParamLimits

0xab25,	// (0x00048edd) popup_toolbar_window_cp02

0xaf54,	// (0x0004930c) listscroll_cale_day_pane_t1_ParamLimits

0x2738,	// (0x00040af0) main_cale_month_pane_ParamLimits

0x53f1,	// (0x000437a9) popup_toolbar_window_cp03_ParamLimits

0x53f1,	// (0x000437a9) popup_toolbar_window_cp03

0x4d0a,	// (0x000430c2) main_image_pane_g2_ParamLimits

0x4d0a,	// (0x000430c2) main_image_pane_g2

0x4d16,	// (0x000430ce) main_image_pane_g3_ParamLimits

0x4d16,	// (0x000430ce) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0004d89b) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0004d89b) main_image_pane_g

0xb8a8,	// (0x00049c60) main_image_pane_t1_ParamLimits

0x4d22,	// (0x000430da) main_image_pane_t2_ParamLimits

0x4d22,	// (0x000430da) main_image_pane_t2

0x4d34,	// (0x000430ec) main_image_pane_t3_ParamLimits

0x4d34,	// (0x000430ec) main_image_pane_t3

0x4d46,	// (0x000430fe) main_image_pane_t4_ParamLimits

0x4d46,	// (0x000430fe) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0004d8a2) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0004d8a2) main_image_pane_t

0x4d58,	// (0x00043110) popup_image_details_window_cp01

0x4d62,	// (0x0004311a) popup_toobar_trans_pane_cp01_ParamLimits

0x4d62,	// (0x0004311a) popup_toobar_trans_pane_cp01

0x5333,	// (0x000436eb) popup_image_details_window_ParamLimits

0x5333,	// (0x000436eb) popup_image_details_window

0x5341,	// (0x000436f9) popup_image_focus_window

0x5665,	// (0x00043a1d) camera2_autofocus_pane_ParamLimits

0x5665,	// (0x00043a1d) camera2_autofocus_pane

0xa290,	// (0x00048648) bg_popup_sub_pane_cp06

0xcf73,	// (0x0004b32b) popup_image_focus_window_g1

0xcf7b,	// (0x0004b333) popup_image_focus_window_g2

0xcf83,	// (0x0004b33b) popup_image_focus_window_g3

0xcf8b,	// (0x0004b343) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0004dab1) popup_image_focus_window_g

0xcf93,	// (0x0004b34b) popup_image_focus_window_t1

0xcfa1,	// (0x0004b359) popup_image_focus_window_t2

0xcfb1,	// (0x0004b369) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0004daba) popup_image_focus_window_t

0xcfbf,	// (0x0004b377) camera2_autofocus_pane_g1

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp01

0xcfcd,	// (0x0004b385) popup_image_details_window_g1

0xcfe0,	// (0x0004b398) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0004dacc) popup_image_details_window_g

0xd009,	// (0x0004b3c1) popup_image_details_window_t1

0xd01b,	// (0x0004b3d3) popup_image_details_window_t2

0xd034,	// (0x0004b3ec) popup_image_details_window_t3

0xd048,	// (0x0004b400) popup_image_details_window_t4

0xd063,	// (0x0004b41b) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0004dad3) popup_image_details_window_t

0xa9ee,	// (0x00048da6) bg_calc_paper_pane_ParamLimits

0xa290,	// (0x00048648) grid_highlight_pane_cp013

0x24ec,	// (0x000408a4) list_calc_pane_ParamLimits

0x24fe,	// (0x000408b6) scroll_pane_cp024

0xaa02,	// (0x00048dba) bg_calc_display_pane_ParamLimits

0x2506,	// (0x000408be) calc_display_pane_t1_ParamLimits

0x251b,	// (0x000408d3) calc_display_pane_t2_ParamLimits

0x2530,	// (0x000408e8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004d505) calc_display_pane_t_ParamLimits

0x2600,	// (0x000409b8) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004d522) cell_calc_pane_g

0x2609,	// (0x000409c1) cell_calc_pane_t1

0xaa6f,	// (0x00048e27) grid_highlight_pane_cp02_ParamLimits

0xaa85,	// (0x00048e3d) toolbar_button_pane_cp01_ParamLimits

0xaa85,	// (0x00048e3d) toolbar_button_pane_cp01

0xb8ed,	// (0x00049ca5) temp_image_control_pane_ParamLimits

0xb8ed,	// (0x00049ca5) temp_image_control_pane

0xb939,	// (0x00049cf1) main_mp3_pane

0xd07d,	// (0x0004b435) temp_image_control_pane_g1_ParamLimits

0xd07d,	// (0x0004b435) temp_image_control_pane_g1

0xd08b,	// (0x0004b443) temp_image_control_pane_g2_ParamLimits

0xd08b,	// (0x0004b443) temp_image_control_pane_g2

0xd09d,	// (0x0004b455) temp_image_control_pane_g3_ParamLimits

0xd09d,	// (0x0004b455) temp_image_control_pane_g3

0x5cf8,	// (0x000440b0) temp_image_control_pane_g4_ParamLimits

0x5cf8,	// (0x000440b0) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0004dade) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0004dade) temp_image_control_pane_g

0xd07d,	// (0x0004b435) main_mp3_pane_g1

0x5d09,	// (0x000440c1) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0004dae7) main_mp3_pane_g

0xd0e0,	// (0x0004b498) main_mp3_pane_t1

0xabc0,	// (0x00048f78) main_camera_pane_g8_ParamLimits

0xabc0,	// (0x00048f78) main_camera_pane_g8

0x2fe0,	// (0x00041398) main_video_pane_g7_ParamLimits

0x2fe0,	// (0x00041398) main_video_pane_g7

0x57a8,	// (0x00043b60) main_camera2_pane_t7_ParamLimits

0x57a8,	// (0x00043b60) main_camera2_pane_t7

0xad0c,	// (0x000490c4) scroll_pane_cp025_ParamLimits

0xad0c,	// (0x000490c4) scroll_pane_cp025

0xad20,	// (0x000490d8) scroll_pane_cp026_ParamLimits

0xad20,	// (0x000490d8) scroll_pane_cp026

0xad2f,	// (0x000490e7) wml_content_pane_ParamLimits

0xa290,	// (0x00048648) main_touch_calib_pane

0x5dad,	// (0x00044165) main_touch_calib_pane_g1

0x5db9,	// (0x00044171) main_touch_calib_pane_g2

0x5dc5,	// (0x0004417d) main_touch_calib_pane_g3

0x5dd1,	// (0x00044189) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0004db05) main_touch_calib_pane_g

0x5ddd,	// (0x00044195) main_touch_calib_pane_t1

0x5df4,	// (0x000441ac) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0004db0e) main_touch_calib_pane_t

0xb4b2,	// (0x0004986a) mup_progress_pane_cp02

0xb4e7,	// (0x0004989f) navi_pane_g1

0xb5a2,	// (0x0004995a) navi_pane_mp_t3

0xb939,	// (0x00049cf1) main_mp3_pane_ParamLimits

0x5432,	// (0x000437ea) navi_pane_ParamLimits

0xd07d,	// (0x0004b435) main_mp3_pane_g1_ParamLimits

0x5d09,	// (0x000440c1) main_mp3_pane_g2_ParamLimits

0x5d15,	// (0x000440cd) main_mp3_pane_g3_ParamLimits

0x5d15,	// (0x000440cd) main_mp3_pane_g3

0x5d21,	// (0x000440d9) main_mp3_pane_g4_ParamLimits

0x5d21,	// (0x000440d9) main_mp3_pane_g4

0xd0ad,	// (0x0004b465) main_mp3_pane_g5_ParamLimits

0xd0ad,	// (0x0004b465) main_mp3_pane_g5

0xd0bb,	// (0x0004b473) main_mp3_pane_g6_ParamLimits

0xd0bb,	// (0x0004b473) main_mp3_pane_g6

0xd0c8,	// (0x0004b480) main_mp3_pane_g7_ParamLimits

0xd0c8,	// (0x0004b480) main_mp3_pane_g7

0xd0d4,	// (0x0004b48c) main_mp3_pane_g8_ParamLimits

0xd0d4,	// (0x0004b48c) main_mp3_pane_g8

0xf72f,	// (0x0004dae7) main_mp3_pane_g_ParamLimits

0x5d2d,	// (0x000440e5) main_mp3_pane_t2

0x5d3d,	// (0x000440f5) main_mp3_pane_t3

0xd0ee,	// (0x0004b4a6) main_mp3_pane_t4

0xd0fc,	// (0x0004b4b4) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0004daf8) main_mp3_pane_t

0xd10a,	// (0x0004b4c2) mup_progress_pane_cp01

0x0b90,	// (0x0003ef48) aid_zoom_text_secondary2

0xcf00,	// (0x0004b2b8) list_cale_ev2_pane

0xcf08,	// (0x0004b2c0) scroll_pane_cp023_ParamLimits

0x5e4f,	// (0x00044207) field_cale_ev2_pane_ParamLimits

0x5e4f,	// (0x00044207) field_cale_ev2_pane

0x0e35,	// (0x0003f1ed) field_cale_ev2_pane_g1_ParamLimits

0x0e35,	// (0x0003f1ed) field_cale_ev2_pane_g1

0x0e41,	// (0x0003f1f9) field_cale_ev2_pane_g2_ParamLimits

0x0e41,	// (0x0003f1f9) field_cale_ev2_pane_g2

0x0e59,	// (0x0003f211) field_cale_ev2_pane_g3_ParamLimits

0x0e59,	// (0x0003f211) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0004db19) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0004db19) field_cale_ev2_pane_g

0x0e7d,	// (0x0003f235) field_cale_ev2_pane_t1_ParamLimits

0x0e7d,	// (0x0003f235) field_cale_ev2_pane_t1

0x0e94,	// (0x0003f24c) field_cale_ev2_pane_t2_ParamLimits

0x0e94,	// (0x0003f24c) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0004db22) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0004db22) field_cale_ev2_pane_t

0x4be9,	// (0x00042fa1) main_postcard_pane_g5_ParamLimits

0x4be9,	// (0x00042fa1) main_postcard_pane_g5

0x4bf7,	// (0x00042faf) main_postcard_pane_g6_ParamLimits

0x4bf7,	// (0x00042faf) main_postcard_pane_g6

0x2e1e,	// (0x000411d6) camera2_autofocus_pane_cp_ParamLimits

0x2e1e,	// (0x000411d6) camera2_autofocus_pane_cp

0xb939,	// (0x00049cf1) main_mup3_pane

0x5ead,	// (0x00044265) main_mup3_pane_g1_ParamLimits

0x5ead,	// (0x00044265) main_mup3_pane_g1

0x5ece,	// (0x00044286) main_mup3_pane_g2_ParamLimits

0x5ece,	// (0x00044286) main_mup3_pane_g2

0x5f42,	// (0x000442fa) main_mup3_pane_g3_ParamLimits

0x5f42,	// (0x000442fa) main_mup3_pane_g3

0x5fa7,	// (0x0004435f) main_mup3_pane_g4_ParamLimits

0x5fa7,	// (0x0004435f) main_mup3_pane_g4

0x600c,	// (0x000443c4) main_mup3_pane_g5_ParamLimits

0x600c,	// (0x000443c4) main_mup3_pane_g5

0x6071,	// (0x00044429) main_mup3_pane_g6_ParamLimits

0x6071,	// (0x00044429) main_mup3_pane_g6

0xd112,	// (0x0004b4ca) main_mup3_pane_g7_ParamLimits

0xd112,	// (0x0004b4ca) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0004db32) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0004db32) main_mup3_pane_g

0x60e7,	// (0x0004449f) main_mup3_pane_t1_ParamLimits

0x60e7,	// (0x0004449f) main_mup3_pane_t1

0x6152,	// (0x0004450a) main_mup3_pane_t2_ParamLimits

0x6152,	// (0x0004450a) main_mup3_pane_t2

0x6217,	// (0x000445cf) main_mup3_pane_t4_ParamLimits

0x6217,	// (0x000445cf) main_mup3_pane_t4

0x626b,	// (0x00044623) main_mup3_pane_t5_ParamLimits

0x626b,	// (0x00044623) main_mup3_pane_t5

0x631b,	// (0x000446d3) main_mup3_pane_t6_ParamLimits

0x631b,	// (0x000446d3) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0004db43) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0004db43) main_mup3_pane_t

0x63c5,	// (0x0004477d) mup3_progress_pane_ParamLimits

0x63c5,	// (0x0004477d) mup3_progress_pane

0x6443,	// (0x000447fb) popup_mup3_control_window_ParamLimits

0x6443,	// (0x000447fb) popup_mup3_control_window

0xd120,	// (0x0004b4d8) popup_mup3_text_window

0x6460,	// (0x00044818) mup3_progress_pane_t1

0x647f,	// (0x00044837) mup3_progress_pane_t2

0xd128,	// (0x0004b4e0) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0004db50) mup3_progress_pane_t

0xd145,	// (0x0004b4fd) mup_progress_pane_cp03

0xa290,	// (0x00048648) bg_tb_trans_pane_cp04

0x649e,	// (0x00044856) mup3_volume_pane

0x64a6,	// (0x0004485e) popup_mup3_control_window_g1

0xd71b,	// (0x0004bad3) mup3_volume_pane_g1

0xd724,	// (0x0004badc) mup3_volume_pane_g2

0xd72d,	// (0x0004bae5) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0004db57) mup3_volume_pane_g

0xa290,	// (0x00048648) bg_tb_trans_pane_cp03

0xd155,	// (0x0004b50d) popup_mup3_text_window_g1

0xd15d,	// (0x0004b515) popup_mup3_text_window_t1

0xaa58,	// (0x00048e10) list_calc_item_pane_g1_ParamLimits

0xcbd3,	// (0x0004af8b) mup_volume_pane_cp_g1

0x5e0d,	// (0x000441c5) main_touch_calib_pane_t3

0x5e23,	// (0x000441db) main_touch_calib_pane_t4

0x5e39,	// (0x000441f1) main_touch_calib_pane_t5

0x1f0a,	// (0x000402c2) aid_cell_size_toolbar2

0x1f12,	// (0x000402ca) aid_popup3_width_pane

0x0b88,	// (0x0003ef40) aid_zoom_text_msg_primary

0x2df1,	// (0x000411a9) vorec_t7

0xaa0e,	// (0x00048dc6) bg_calc_paper_pane_g1_ParamLimits

0xaa34,	// (0x00048dec) bg_calc_paper_pane_g2_ParamLimits

0xaa1a,	// (0x00048dd2) bg_calc_paper_pane_g3_ParamLimits

0xaa40,	// (0x00048df8) bg_calc_paper_pane_g4_ParamLimits

0xaa4c,	// (0x00048e04) bg_calc_paper_pane_g5_ParamLimits

0x2571,	// (0x00040929) bg_calc_paper_pane_g6_ParamLimits

0x2582,	// (0x0004093a) bg_calc_paper_pane_g7_ParamLimits

0x2593,	// (0x0004094b) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004d50c) bg_calc_paper_pane_g_ParamLimits

0x25a4,	// (0x0004095c) calc_bg_paper_pane_g9_ParamLimits

0x2f0f,	// (0x000412c7) image_qvga_pane_ParamLimits

0x2f0f,	// (0x000412c7) image_qvga_pane

0xa93d,	// (0x00048cf5) bg_popup_sub_pane_cp04_ParamLimits

0xb824,	// (0x00049bdc) popup_mup_playback_window_g1_ParamLimits

0xb830,	// (0x00049be8) popup_mup_playback_window_t1_ParamLimits

0xb845,	// (0x00049bfd) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0004d896) popup_mup_playback_window_t_ParamLimits

0x58d7,	// (0x00043c8f) main_mup2_pane_g3_ParamLimits

0x58d7,	// (0x00043c8f) main_mup2_pane_g3

0x31bb,	// (0x00041573) popup_toolbar_window_cp04

0xbc5a,	// (0x0004a012) popup_call2_audio_second_window_g3_ParamLimits

0xbc5a,	// (0x0004a012) popup_call2_audio_second_window_g3

0xc064,	// (0x0004a41c) popup_call2_audio_first_window_g4_ParamLimits

0xc064,	// (0x0004a41c) popup_call2_audio_first_window_g4

0xc6e3,	// (0x0004aa9b) popup_call2_audio_in_window_g4_ParamLimits

0xc6e3,	// (0x0004aa9b) popup_call2_audio_in_window_g4

0x4cfd,	// (0x000430b5) aid_area_sk_bg_cut_ParamLimits

0x4cfd,	// (0x000430b5) aid_area_sk_bg_cut

0xb85a,	// (0x00049c12) aid_area_sk_bg_cut_2_ParamLimits

0xb85a,	// (0x00049c12) aid_area_sk_bg_cut_2

0x5c5f,	// (0x00044017) aid_placing_details_win

0x5c67,	// (0x0004401f) aid_placing_details_win_2

0xcfbf,	// (0x0004b377) camera2_autofocus_pane_g1_ParamLimits

0x2169,	// (0x00040521) popup_fixed_preview_cale_window_ParamLimits

0x2169,	// (0x00040521) popup_fixed_preview_cale_window

0xb622,	// (0x000499da) navi_slider_pane_g3

0xb62b,	// (0x000499e3) navi_slider_pane_g4

0xb634,	// (0x000499ec) navi_slider_pane_g5

0xb622,	// (0x000499da) navi_slider_pane_g6

0x45af,	// (0x00042967) navi_slider_pane_g7

0xb749,	// (0x00049b01) mup_scale_pane_g3

0xb752,	// (0x00049b0a) mup_scale_pane_g4

0xb75b,	// (0x00049b13) mup_scale_pane_g5

0x4a2a,	// (0x00042de2) mup_scale_pane_g6

0x4a33,	// (0x00042deb) mup_scale_pane_g7

0xb622,	// (0x000499da) cams2_slider_pane_g3

0xcc55,	// (0x0004b00d) cams2_slider_pane_g4

0x5bba,	// (0x00043f72) cams2_slider_pane_g5

0xb622,	// (0x000499da) cams2_slider_pane_g6

0x5bc2,	// (0x00043f7a) cams2_slider_pane_g7

0xce86,	// (0x0004b23e) camera2_autofocus_pane_cp_g1

0xca42,	// (0x0004adfa) bg_popup_preview_window_pane_cp02_ParamLimits

0xca42,	// (0x0004adfa) bg_popup_preview_window_pane_cp02

0xd16b,	// (0x0004b523) list_fp_cale_pane_ParamLimits

0xd16b,	// (0x0004b523) list_fp_cale_pane

0xd177,	// (0x0004b52f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd177,	// (0x0004b52f) popup_fixed_preview_cale_window_t1

0x64af,	// (0x00044867) popup_fixed_preview_cale_window_t2_ParamLimits

0x64af,	// (0x00044867) popup_fixed_preview_cale_window_t2

0x64c4,	// (0x0004487c) popup_fixed_preview_cale_window_t3_ParamLimits

0x64c4,	// (0x0004487c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0004db5e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0004db5e) popup_fixed_preview_cale_window_t

0x64d9,	// (0x00044891) list_single_fp_cale_pane_ParamLimits

0x64d9,	// (0x00044891) list_single_fp_cale_pane

0xd195,	// (0x0004b54d) list_single_fp_cale_pane_g1_ParamLimits

0xd195,	// (0x0004b54d) list_single_fp_cale_pane_g1

0xd1a1,	// (0x0004b559) list_single_fp_cale_pane_g2_ParamLimits

0xd1a1,	// (0x0004b559) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0004db65) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0004db65) list_single_fp_cale_pane_g

0xd1ba,	// (0x0004b572) list_single_fp_cale_pane_t1_ParamLimits

0xd1ba,	// (0x0004b572) list_single_fp_cale_pane_t1

0xd1cc,	// (0x0004b584) list_single_fp_cale_pane_t2_ParamLimits

0xd1cc,	// (0x0004b584) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0004db6c) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0004db6c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa290,	// (0x00048648) main_dialer_pane

0x64e9,	// (0x000448a1) aid_cell_size_keypad

0x64f3,	// (0x000448ab) dialer_ne_pane

0x64fd,	// (0x000448b5) grid_dialer_command_1_pane

0x6505,	// (0x000448bd) grid_dialer_command_2_pane

0x650d,	// (0x000448c5) grid_dialer_keypad_pane

0x6521,	// (0x000448d9) bg_popup_call_pane_cp06_ParamLimits

0x6521,	// (0x000448d9) bg_popup_call_pane_cp06

0x652d,	// (0x000448e5) dialer_ne_clear_pane_ParamLimits

0x652d,	// (0x000448e5) dialer_ne_clear_pane

0xd1ff,	// (0x0004b5b7) dialer_ne_pane_g1

0xd207,	// (0x0004b5bf) dialer_ne_pane_t1_ParamLimits

0xd207,	// (0x0004b5bf) dialer_ne_pane_t1

0x6539,	// (0x000448f1) dialer_ne_pane_t2_ParamLimits

0x6539,	// (0x000448f1) dialer_ne_pane_t2

0x6556,	// (0x0004490e) dialer_ne_pane_t3_ParamLimits

0x6556,	// (0x0004490e) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0004db71) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0004db71) dialer_ne_pane_t

0x657a,	// (0x00044932) dialer_ne_pane_t3_copy1_ParamLimits

0x657a,	// (0x00044932) dialer_ne_pane_t3_copy1

0x659e,	// (0x00044956) cell_dialer_keypad_pane_ParamLimits

0x659e,	// (0x00044956) cell_dialer_keypad_pane

0x65b5,	// (0x0004496d) cell_dialer_command_1_pane_ParamLimits

0x65b5,	// (0x0004496d) cell_dialer_command_1_pane

0x65cb,	// (0x00044983) cell_dialer_command_2_pane_ParamLimits

0x65cb,	// (0x00044983) cell_dialer_command_2_pane

0xd219,	// (0x0004b5d1) bg_button_pane_cp02_ParamLimits

0xd219,	// (0x0004b5d1) bg_button_pane_cp02

0x65da,	// (0x00044992) cell_dialer_keypad_pane_g1_ParamLimits

0x65da,	// (0x00044992) cell_dialer_keypad_pane_g1

0xd219,	// (0x0004b5d1) bg_button_pane_cp03_ParamLimits

0xd219,	// (0x0004b5d1) bg_button_pane_cp03

0x65ef,	// (0x000449a7) cell_dialer_command_1_pane_g1_ParamLimits

0x65ef,	// (0x000449a7) cell_dialer_command_1_pane_g1

0xd225,	// (0x0004b5dd) bg_button_pane_cp04

0x6603,	// (0x000449bb) cell_dialer_command_2_pane_g1

0xabb8,	// (0x00048f70) bg_button_pane_cp06

0xd22d,	// (0x0004b5e5) dialer_ne_clear_pane_g1

0xb4f3,	// (0x000498ab) navi_pane_g2

0xb521,	// (0x000498d9) navi_pane_g3

0x0002,

0xf3e1,	// (0x0004d799) navi_pane_g

0xb5b0,	// (0x00049968) navi_pane_mv_g2

0xb5d9,	// (0x00049991) navi_pane_mv_g5

0x457a,	// (0x00042932) navi_pane_mv_t1

0xaa02,	// (0x00048dba) main_clock2_pane

0xd6fb,	// (0x0004bab3) main_clock2_list_pane_ParamLimits

0xd6fb,	// (0x0004bab3) main_clock2_list_pane

0x665e,	// (0x00044a16) main_clock2_pane_t1_ParamLimits

0x665e,	// (0x00044a16) main_clock2_pane_t1

0x668c,	// (0x00044a44) main_clock2_pane_t2_ParamLimits

0x668c,	// (0x00044a44) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0004db7d) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0004db7d) main_clock2_pane_t

0x66f1,	// (0x00044aa9) popup_clock_analogue_window_cp03_ParamLimits

0x66f1,	// (0x00044aa9) popup_clock_analogue_window_cp03

0x670f,	// (0x00044ac7) popup_clock_digital_window_cp02_ParamLimits

0x670f,	// (0x00044ac7) popup_clock_digital_window_cp02

0x6784,	// (0x00044b3c) main_clock2_list_single_pane_ParamLimits

0x6784,	// (0x00044b3c) main_clock2_list_single_pane

0xabb8,	// (0x00048f70) list_highlight_pane_cp05

0xd265,	// (0x0004b61d) main_clock2_list_single_pane_t1

0x31bb,	// (0x00041573) popup_toolbar_window_cp04_ParamLimits

0x5cc8,	// (0x00044080) camera2_autofocus_pane_g2_ParamLimits

0x5cc8,	// (0x00044080) camera2_autofocus_pane_g2

0x5cd4,	// (0x0004408c) camera2_autofocus_pane_g3_ParamLimits

0x5cd4,	// (0x0004408c) camera2_autofocus_pane_g3

0x5ce0,	// (0x00044098) camera2_autofocus_pane_g4_ParamLimits

0x5ce0,	// (0x00044098) camera2_autofocus_pane_g4

0x5cec,	// (0x000440a4) camera2_autofocus_pane_g5_ParamLimits

0x5cec,	// (0x000440a4) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0004dac1) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0004dac1) camera2_autofocus_pane_g

0x5e6a,	// (0x00044222) camera2_autofocus_pane_cp_g2

0x5e72,	// (0x0004422a) camera2_autofocus_pane_cp_g3

0x5e7a,	// (0x00044232) camera2_autofocus_pane_cp_g4

0x5e82,	// (0x0004423a) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0004db27) camera2_autofocus_pane_cp_g

0x6519,	// (0x000448d1) popup_dialer_spcha_window

0xa290,	// (0x00048648) bg_popup_sub_pane_cp07

0xd273,	// (0x0004b62b) list_spcha_pane

0xd27b,	// (0x0004b633) list_single_spcha_pane_ParamLimits

0xd27b,	// (0x0004b633) list_single_spcha_pane

0xa290,	// (0x00048648) list_highlight_pane_cp06

0xd28c,	// (0x0004b644) list_single_spcha_pane_t1

0xc48d,	// (0x0004a845) popup_call2_audio_out_window_g4_ParamLimits

0xc48d,	// (0x0004a845) popup_call2_audio_out_window_g4

0xa290,	// (0x00048648) main_imed2_pane

0x534b,	// (0x00043703) popup_imed_adjust2_window

0x535e,	// (0x00043716) popup_imed_trans_window_ParamLimits

0x535e,	// (0x00043716) popup_imed_trans_window

0xccbe,	// (0x0004b076) popup_blid_sat_info2_window_t1

0xcccc,	// (0x0004b084) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0004da56) popup_blid_sat_info2_window_t

0x683b,	// (0x00044bf3) aid_size_cell_colour_35

0x6855,	// (0x00044c0d) aid_size_cell_colour_112

0x686c,	// (0x00044c24) aid_size_cell_effect

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp02

0xb947,	// (0x00049cff) heading_imed_pane

0x6886,	// (0x00044c3e) listscroll_imed_pane

0xd29a,	// (0x0004b652) heading_imed_pane_g1

0xd2a2,	// (0x0004b65a) heading_imed_pane_t1

0xd2b0,	// (0x0004b668) grid_imed_colour_35_pane_ParamLimits

0xd2b0,	// (0x0004b668) grid_imed_colour_35_pane

0x6892,	// (0x00044c4a) grid_imed_effect_pane

0xd2cc,	// (0x0004b684) list_imed_aspect_pane

0x68a2,	// (0x00044c5a) scroll_pane_cp027_ParamLimits

0x68a2,	// (0x00044c5a) scroll_pane_cp027

0x68ae,	// (0x00044c66) cell_imed_effect_pane_ParamLimits

0x68ae,	// (0x00044c66) cell_imed_effect_pane

0xd2d4,	// (0x0004b68c) cell_imed_colour_pane_ParamLimits

0xd2d4,	// (0x0004b68c) cell_imed_colour_pane

0xd31e,	// (0x0004b6d6) cell_imed_colour_pane_g1_ParamLimits

0xd31e,	// (0x0004b6d6) cell_imed_colour_pane_g1

0xd32f,	// (0x0004b6e7) hgihlgiht_grid_pane_cp016_ParamLimits

0xd32f,	// (0x0004b6e7) hgihlgiht_grid_pane_cp016

0x68ca,	// (0x00044c82) cell_imed_effect_pane_g1

0x68d2,	// (0x00044c8a) grid_highlight_pane_cp017

0xd340,	// (0x0004b6f8) list_imed_single_pane_ParamLimits

0xd340,	// (0x0004b6f8) list_imed_single_pane

0xa290,	// (0x00048648) list_highlight_pane_cp07

0xd354,	// (0x0004b70c) list_imed_aspect_pane_comp1_t1

0xca4e,	// (0x0004ae06) bg_tb_trans_pane_cp05

0xd376,	// (0x0004b72e) popup_imed_adjust2_window_g1

0xd39d,	// (0x0004b755) popup_imed_adjust2_window_t1

0xd3b5,	// (0x0004b76d) slider_imed_adjust_pane

0xd3c9,	// (0x0004b781) slider_imed_adjust_pane_g1

0xd3d9,	// (0x0004b791) slider_imed_adjust_pane_g2

0xd3e9,	// (0x0004b7a1) slider_imed_adjust_pane_g3

0xd3fa,	// (0x0004b7b2) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0004db9a) slider_imed_adjust_pane_g

0x68db,	// (0x00044c93) aid_size_cell_clipart2

0xd40b,	// (0x0004b7c3) grid_imed_clipart_pane

0xd415,	// (0x0004b7cd) scroll_pane_cp031

0x68e7,	// (0x00044c9f) cell_imed_clipart_pane_ParamLimits

0x68e7,	// (0x00044c9f) cell_imed_clipart_pane

0x6905,	// (0x00044cbd) cell_imed_clipart_pane_g1

0xa290,	// (0x00048648) grid_highlight_pane_cp014

0x6640,	// (0x000449f8) main_clock2_pane_g1_ParamLimits

0x6640,	// (0x000449f8) main_clock2_pane_g1

0x672b,	// (0x00044ae3) aid_call2_pane_cp10

0x673d,	// (0x00044af5) aid_call_pane_cp10

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g1

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g2

0x674f,	// (0x00044b07) popup_clock_analogue_window_cp10_g3

0x674f,	// (0x00044b07) popup_clock_analogue_window_cp10_g4

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0004db88) popup_clock_analogue_window_cp10_g

0x6765,	// (0x00044b1d) popup_clock_analogue_window_cp10_t1

0x6796,	// (0x00044b4e) clock_digital_number_pane_cp10_ParamLimits

0x6796,	// (0x00044b4e) clock_digital_number_pane_cp10

0x67b0,	// (0x00044b68) clock_digital_number_pane_cp11_ParamLimits

0x67b0,	// (0x00044b68) clock_digital_number_pane_cp11

0x67ca,	// (0x00044b82) clock_digital_number_pane_cp12_ParamLimits

0x67ca,	// (0x00044b82) clock_digital_number_pane_cp12

0x67e4,	// (0x00044b9c) clock_digital_number_pane_cp13_ParamLimits

0x67e4,	// (0x00044b9c) clock_digital_number_pane_cp13

0x6800,	// (0x00044bb8) clock_digital_separator_pane_cp10_ParamLimits

0x6800,	// (0x00044bb8) clock_digital_separator_pane_cp10

0x681a,	// (0x00044bd2) popup_clock_digital_window_cp02_t1_ParamLimits

0x681a,	// (0x00044bd2) popup_clock_digital_window_cp02_t1

0xa935,	// (0x00048ced) clock_digital_number_pane_cp10_g1

0xa935,	// (0x00048ced) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0004dba3) clock_digital_number_pane_cp10_g

0xa935,	// (0x00048ced) clock_digital_separator_pane_cp10_g1

0xa935,	// (0x00048ced) clock_digital_separator_pane_g2_cp10

0xb5e1,	// (0x00049999) navi_pane_vded_g4

0xb5ea,	// (0x000499a2) navi_pane_vded_g5

0xb5f3,	// (0x000499ab) navi_pane_vded_t1

0xa290,	// (0x00048648) main_vded_pane

0x690e,	// (0x00044cc6) main_vded_pane_g1

0x691a,	// (0x00044cd2) main_vded_pane_g2

0x6924,	// (0x00044cdc) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0004dba8) main_vded_pane_g

0x692e,	// (0x00044ce6) main_vded_pane_t1

0x693c,	// (0x00044cf4) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0004dbaf) main_vded_pane_t

0x694a,	// (0x00044d02) vded_slider_pane

0x6954,	// (0x00044d0c) vded_video_pane

0xd41d,	// (0x0004b7d5) vded_video_pane_g1

0x6960,	// (0x00044d18) vded_video_pane_g2

0xce86,	// (0x0004b23e) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0004dbb4) vded_video_pane_g

0xd427,	// (0x0004b7df) vded_slider_pane_g1

0xcbd3,	// (0x0004af8b) vded_slider_pane_g2

0xd430,	// (0x0004b7e8) vded_slider_pane_g3

0xd439,	// (0x0004b7f1) vded_slider_pane_g4

0xd442,	// (0x0004b7fa) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0004dbbb) vded_slider_pane_g

0x6437,	// (0x000447ef) mup3_rocker_pane_ParamLimits

0x6437,	// (0x000447ef) mup3_rocker_pane

0x6969,	// (0x00044d21) mup3_control_keys_pane_g1

0x6971,	// (0x00044d29) mup3_control_keys_pane_g2

0x6979,	// (0x00044d31) mup3_control_keys_pane_g3

0x6981,	// (0x00044d39) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0004dbc6) mup3_control_keys_pane_g

0x2191,	// (0x00040549) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2191,	// (0x00040549) popup_toolbar2_fixed_window_cp01

0x6453,	// (0x0004480b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6453,	// (0x0004480b) popup_toolbar2_fixed_window_cp02

0xbdcc,	// (0x0004a184) popup_call2_audio_second_window_t4_ParamLimits

0xbdcc,	// (0x0004a184) popup_call2_audio_second_window_t4

0xc2fa,	// (0x0004a6b2) popup_call2_audio_first_window_t6_ParamLimits

0xc2fa,	// (0x0004a6b2) popup_call2_audio_first_window_t6

0xc590,	// (0x0004a948) popup_call2_audio_out_window_t6_ParamLimits

0xc590,	// (0x0004a948) popup_call2_audio_out_window_t6

0xa290,	// (0x00048648) main_vitu_pane

0x6991,	// (0x00044d49) aid_size_cell_itu_ParamLimits

0x6991,	// (0x00044d49) aid_size_cell_itu

0xd6fb,	// (0x0004bab3) bg_popup_window_pane_cp08_ParamLimits

0xd6fb,	// (0x0004bab3) bg_popup_window_pane_cp08

0x699f,	// (0x00044d57) field_vitu_entry_pane_ParamLimits

0x699f,	// (0x00044d57) field_vitu_entry_pane

0x69ae,	// (0x00044d66) grid_vitu_function_pane_ParamLimits

0x69ae,	// (0x00044d66) grid_vitu_function_pane

0x69be,	// (0x00044d76) grid_vitu_itu_pane_ParamLimits

0x69be,	// (0x00044d76) grid_vitu_itu_pane

0x69ce,	// (0x00044d86) cell_vitu_itu_pane_ParamLimits

0x69ce,	// (0x00044d86) cell_vitu_itu_pane

0x69e5,	// (0x00044d9d) cell_vitu_function_pane_ParamLimits

0x69e5,	// (0x00044d9d) cell_vitu_function_pane

0xb939,	// (0x00049cf1) bg_popup_sub_pane_cp08_ParamLimits

0xb939,	// (0x00049cf1) bg_popup_sub_pane_cp08

0x69f9,	// (0x00044db1) field_vitu_entry_pane_t1_ParamLimits

0x69f9,	// (0x00044db1) field_vitu_entry_pane_t1

0xd463,	// (0x0004b81b) field_vitu_entry_pane_t2_ParamLimits

0xd463,	// (0x0004b81b) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0004dbd4) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0004dbd4) field_vitu_entry_pane_t

0xd480,	// (0x0004b838) bg_button_pane_cp05_ParamLimits

0xd480,	// (0x0004b838) bg_button_pane_cp05

0x6a13,	// (0x00044dcb) cell_vitu_itu_pane_g1

0x6a2b,	// (0x00044de3) cell_vitu_itu_pane_t1_ParamLimits

0x6a2b,	// (0x00044de3) cell_vitu_itu_pane_t1

0x6a3d,	// (0x00044df5) cell_vitu_itu_pane_t2_ParamLimits

0x6a3d,	// (0x00044df5) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0004dbd9) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0004dbd9) cell_vitu_itu_pane_t

0xd48e,	// (0x0004b846) bg_button_pane_cp07

0x6a80,	// (0x00044e38) cell_vitu_function_pane_g1

0x2413,	// (0x000407cb) main_calc_pane_g1

0x1f46,	// (0x000402fe) aid_visual_content_pane

0xa290,	// (0x00048648) main_vradio_pane

0x6a89,	// (0x00044e41) main_vradio_pane_g1_ParamLimits

0x6a89,	// (0x00044e41) main_vradio_pane_g1

0xd498,	// (0x0004b850) main_vradio_pane_g2_ParamLimits

0xd498,	// (0x0004b850) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0004dbe0) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0004dbe0) main_vradio_pane_g

0x6a97,	// (0x00044e4f) main_vradio_pane_t1_ParamLimits

0x6a97,	// (0x00044e4f) main_vradio_pane_t1

0x6aa9,	// (0x00044e61) main_vradio_pane_t2_ParamLimits

0x6aa9,	// (0x00044e61) main_vradio_pane_t2

0xd4a5,	// (0x0004b85d) main_vradio_pane_t3_ParamLimits

0xd4a5,	// (0x0004b85d) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0004dbe5) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0004dbe5) main_vradio_pane_t

0x6abb,	// (0x00044e73) vradio_rocker_control_pane_ParamLimits

0x6abb,	// (0x00044e73) vradio_rocker_control_pane

0x6ac7,	// (0x00044e7f) vradio_station_info_pane_ParamLimits

0x6ac7,	// (0x00044e7f) vradio_station_info_pane

0xd4b9,	// (0x0004b871) vradio_frequency_info_pane_ParamLimits

0xd4b9,	// (0x0004b871) vradio_frequency_info_pane

0xce86,	// (0x0004b23e) vradio_station_info_pane_g1

0xd4c8,	// (0x0004b880) vradio_station_info_pane_t1_ParamLimits

0xd4c8,	// (0x0004b880) vradio_station_info_pane_t1

0xd4ea,	// (0x0004b8a2) vradio_station_info_pane_t2_ParamLimits

0xd4ea,	// (0x0004b8a2) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0004dbec) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0004dbec) vradio_station_info_pane_t

0xd4fc,	// (0x0004b8b4) vradio_tuning_pane

0xd504,	// (0x0004b8bc) vradio_rocker_control_pane_g1

0xd50c,	// (0x0004b8c4) vradio_rocker_control_pane_g2

0xd514,	// (0x0004b8cc) vradio_rocker_control_pane_g3

0xd51c,	// (0x0004b8d4) vradio_rocker_control_pane_g4

0xd524,	// (0x0004b8dc) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0004dbf1) vradio_rocker_control_pane_g

0x6ad4,	// (0x00044e8c) vradio_frequency_info_pane_g1

0xd52c,	// (0x0004b8e4) vradio_frequency_info_pane_t1_ParamLimits

0xd52c,	// (0x0004b8e4) vradio_frequency_info_pane_t1

0x6ade,	// (0x00044e96) vradio_tuning_pane_g1

0x6ae9,	// (0x00044ea1) vradio_tuning_pane_t1

0x1f8f,	// (0x00040347) area_side_right_pane_ParamLimits

0x1f8f,	// (0x00040347) area_side_right_pane

0xca09,	// (0x0004adc1) status_small_pane_g1

0xca11,	// (0x0004adc9) status_small_pane_g2

0xca1a,	// (0x0004add2) status_small_pane_g3

0xca23,	// (0x0004addb) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0004d9ac) status_small_pane_g

0xca2c,	// (0x0004ade4) status_small_pane_t1

0xa290,	// (0x00048648) main_video3_pane

0xd540,	// (0x0004b8f8) cams_zoom_vslider_pane

0xd548,	// (0x0004b900) image3_wide_pane_ParamLimits

0xd548,	// (0x0004b900) image3_wide_pane

0xd562,	// (0x0004b91a) image3_wide_small_pane

0xd56e,	// (0x0004b926) main_video3_pane_g1_ParamLimits

0xd56e,	// (0x0004b926) main_video3_pane_g1

0xd58a,	// (0x0004b942) main_video3_pane_g2_ParamLimits

0xd58a,	// (0x0004b942) main_video3_pane_g2

0x0001,

0xf844,	// (0x0004dbfc) main_video3_pane_g_ParamLimits

0xf844,	// (0x0004dbfc) main_video3_pane_g

0xd5a6,	// (0x0004b95e) main_video3_pane_t1_ParamLimits

0xd5a6,	// (0x0004b95e) main_video3_pane_t1

0xd5d1,	// (0x0004b989) main_video3_pane_t2_ParamLimits

0xd5d1,	// (0x0004b989) main_video3_pane_t2

0xd5fe,	// (0x0004b9b6) main_video3_pane_t3_ParamLimits

0xd5fe,	// (0x0004b9b6) main_video3_pane_t3

0x0002,

0xf849,	// (0x0004dc01) main_video3_pane_t_ParamLimits

0xf849,	// (0x0004dc01) main_video3_pane_t

0xd62b,	// (0x0004b9e3) cams_zoom_vslider_pane_g1

0xd634,	// (0x0004b9ec) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0004dc08) cams_zoom_vslider_pane_g

0xd63c,	// (0x0004b9f4) small_slider_vertical_pane

0xce86,	// (0x0004b23e) small_slider_vertical_pane_g1

0xce86,	// (0x0004b23e) small_slider_vertical_pane_g2

0xd644,	// (0x0004b9fc) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0004dc0d) small_slider_vertical_pane_g

0xa290,	// (0x00048648) main_hwr_training_pane

0xd64d,	// (0x0004ba05) hwr_training_instruct_pane_ParamLimits

0xd64d,	// (0x0004ba05) hwr_training_instruct_pane

0x6af8,	// (0x00044eb0) hwr_training_navi_pane_ParamLimits

0x6af8,	// (0x00044eb0) hwr_training_navi_pane

0x6b12,	// (0x00044eca) hwr_training_write_pane_ParamLimits

0x6b12,	// (0x00044eca) hwr_training_write_pane

0xa290,	// (0x00048648) bg_frame_shadow_pane

0xd684,	// (0x0004ba3c) hwr_training_write_pane_g1

0xd68c,	// (0x0004ba44) hwr_training_write_pane_g2

0xd694,	// (0x0004ba4c) hwr_training_write_pane_g3

0xd69c,	// (0x0004ba54) hwr_training_write_pane_g4

0xd6a4,	// (0x0004ba5c) hwr_training_write_pane_g5

0xd6ac,	// (0x0004ba64) hwr_training_write_pane_g6

0xd6b4,	// (0x0004ba6c) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0004dc14) hwr_training_write_pane_g

0x6b4a,	// (0x00044f02) hwr_training_navi_pane_g1_ParamLimits

0x6b4a,	// (0x00044f02) hwr_training_navi_pane_g1

0x6b5c,	// (0x00044f14) hwr_training_navi_pane_g2_ParamLimits

0x6b5c,	// (0x00044f14) hwr_training_navi_pane_g2

0x6b6e,	// (0x00044f26) hwr_training_navi_pane_g3_ParamLimits

0x6b6e,	// (0x00044f26) hwr_training_navi_pane_g3

0x6b7e,	// (0x00044f36) hwr_training_navi_pane_g4_ParamLimits

0x6b7e,	// (0x00044f36) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0004dc23) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0004dc23) hwr_training_navi_pane_g

0x6b98,	// (0x00044f50) hwr_training_navi_pane_t1

0x6ba6,	// (0x00044f5e) list_single_hwr_training_instruct_pane_ParamLimits

0x6ba6,	// (0x00044f5e) list_single_hwr_training_instruct_pane

0xd6bc,	// (0x0004ba74) list_single_hwr_training_instruct_pane_t1

0xcdc6,	// (0x0004b17e) bg_frame_shadow_pane_g1

0xd6cb,	// (0x0004ba83) bg_frame_shadow_pane_g2

0xd6d3,	// (0x0004ba8b) bg_frame_shadow_pane_g3

0xd6db,	// (0x0004ba93) bg_frame_shadow_pane_g4

0xd6e3,	// (0x0004ba9b) bg_frame_shadow_pane_g5

0xd6eb,	// (0x0004baa3) bg_frame_shadow_pane_g6

0xd6f3,	// (0x0004baab) bg_frame_shadow_pane_g7

0xaac9,	// (0x00048e81) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0004dc2e) bg_frame_shadow_pane_g

0xa290,	// (0x00048648) main_video_tele_dialer_pane

0x6bbf,	// (0x00044f77) aid_size_cell_video_keypad_ParamLimits

0x6bbf,	// (0x00044f77) aid_size_cell_video_keypad

0x6bcf,	// (0x00044f87) grid_video_dialer_keypad_pane_ParamLimits

0x6bcf,	// (0x00044f87) grid_video_dialer_keypad_pane

0x6c01,	// (0x00044fb9) video_down_pane_cp_ParamLimits

0x6c01,	// (0x00044fb9) video_down_pane_cp

0x6c2b,	// (0x00044fe3) cell_video_dialer_keypad_pane_ParamLimits

0x6c2b,	// (0x00044fe3) cell_video_dialer_keypad_pane

0xd736,	// (0x0004baee) bg_button_pane_cp08_ParamLimits

0xd736,	// (0x0004baee) bg_button_pane_cp08

0x6c42,	// (0x00044ffa) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6c42,	// (0x00044ffa) cell_video_dialer_keypad_pane_g1

0x642b,	// (0x000447e3) mup3_rocker2_pane_ParamLimits

0x642b,	// (0x000447e3) mup3_rocker2_pane

0xce86,	// (0x0004b23e) mup3_rocker2_pane_g1

0x52af,	// (0x00043667) main_dialer2_pane

0xa290,	// (0x00048648) main_mp4_pane

0x6c9b,	// (0x00045053) main_mp4_pane_g1_ParamLimits

0x6c9b,	// (0x00045053) main_mp4_pane_g1

0x6ca9,	// (0x00045061) main_mp4_pane_g2_ParamLimits

0x6ca9,	// (0x00045061) main_mp4_pane_g2

0x6cb7,	// (0x0004506f) main_mp4_pane_g3_ParamLimits

0x6cb7,	// (0x0004506f) main_mp4_pane_g3

0x6d0a,	// (0x000450c2) main_mp4_pane_g4_ParamLimits

0x6d0a,	// (0x000450c2) main_mp4_pane_g4

0x6d38,	// (0x000450f0) main_mp4_pane_g5_ParamLimits

0x6d38,	// (0x000450f0) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0004dc4e) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0004dc4e) main_mp4_pane_g

0x6dac,	// (0x00045164) main_mp4_pane_t1_ParamLimits

0x6dac,	// (0x00045164) main_mp4_pane_t1

0x6e08,	// (0x000451c0) main_mp4_pane_t2_ParamLimits

0x6e08,	// (0x000451c0) main_mp4_pane_t2

0xd742,	// (0x0004bafa) main_mp4_pane_t3_ParamLimits

0xd742,	// (0x0004bafa) main_mp4_pane_t3

0x6e5a,	// (0x00045212) main_mp4_pane_t4_ParamLimits

0x6e5a,	// (0x00045212) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004dc5f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004dc5f) main_mp4_pane_t

0x6e9a,	// (0x00045252) mp4_progress_pane_ParamLimits

0x6e9a,	// (0x00045252) mp4_progress_pane

0x6ee4,	// (0x0004529c) mp4_rocker_pane_ParamLimits

0x6ee4,	// (0x0004529c) mp4_rocker_pane

0xd770,	// (0x0004bb28) mp4_progress_pane_t1

0xd789,	// (0x0004bb41) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004dc68) mp4_progress_pane_t

0xd7a2,	// (0x0004bb5a) mup_progress_pane_cp04

0xce86,	// (0x0004b23e) mp4_rocker_pane_g1

0x6f04,	// (0x000452bc) aid_cell_size_keypad2_ParamLimits

0x6f04,	// (0x000452bc) aid_cell_size_keypad2

0x6f14,	// (0x000452cc) dialer2_ne_pane_ParamLimits

0x6f14,	// (0x000452cc) dialer2_ne_pane

0x6f20,	// (0x000452d8) grid_dialer2_keypad_pane_ParamLimits

0x6f20,	// (0x000452d8) grid_dialer2_keypad_pane

0xd7b5,	// (0x0004bb6d) bg_popup_call_pane_cp07_ParamLimits

0xd7b5,	// (0x0004bb6d) bg_popup_call_pane_cp07

0x6f2e,	// (0x000452e6) dialer2_ne_pane_t1_ParamLimits

0x6f2e,	// (0x000452e6) dialer2_ne_pane_t1

0x6f53,	// (0x0004530b) cell_dialer2_keypad_pane_ParamLimits

0x6f53,	// (0x0004530b) cell_dialer2_keypad_pane

0xd7d5,	// (0x0004bb8d) bg_button_pane_pane_cp04_ParamLimits

0xd7d5,	// (0x0004bb8d) bg_button_pane_pane_cp04

0x6f6a,	// (0x00045322) cell_dialer2_keypad_pane_g1_ParamLimits

0x6f6a,	// (0x00045322) cell_dialer2_keypad_pane_g1

0x308d,	// (0x00041445) aid_placing_vt_set_content_ParamLimits

0x308d,	// (0x00041445) aid_placing_vt_set_content

0x30b5,	// (0x0004146d) aid_placing_vt_set_title_ParamLimits

0x30b5,	// (0x0004146d) aid_placing_vt_set_title

0xa290,	// (0x00048648) main_image3_pane

0x7004,	// (0x000453bc) area_side_right_pane_cp01_ParamLimits

0x7004,	// (0x000453bc) area_side_right_pane_cp01

0xaa26,	// (0x00048dde) main_image3_pane_g1_ParamLimits

0xaa26,	// (0x00048dde) main_image3_pane_g1

0x7033,	// (0x000453eb) main_image3_pane_g2_ParamLimits

0x7033,	// (0x000453eb) main_image3_pane_g2

0x704c,	// (0x00045404) main_image3_pane_g3_ParamLimits

0x704c,	// (0x00045404) main_image3_pane_g3

0x7065,	// (0x0004541d) main_image3_pane_g4_ParamLimits

0x7065,	// (0x0004541d) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004dc77) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004dc77) main_image3_pane_g

0x707e,	// (0x00045436) main_image3_pane_t1_ParamLimits

0x707e,	// (0x00045436) main_image3_pane_t1

0x70a3,	// (0x0004545b) main_image3_pane_t2_ParamLimits

0x70a3,	// (0x0004545b) main_image3_pane_t2

0x70c2,	// (0x0004547a) main_image3_pane_t3_ParamLimits

0x70c2,	// (0x0004547a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004dc80) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004dc80) main_image3_pane_t

0xd6fb,	// (0x0004bab3) grid_sctrl_middle_pane_cp01_ParamLimits

0xd6fb,	// (0x0004bab3) grid_sctrl_middle_pane_cp01

0x7123,	// (0x000454db) cell_sctrl_middle_pane_cp01_ParamLimits

0x7123,	// (0x000454db) cell_sctrl_middle_pane_cp01

0x7134,	// (0x000454ec) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7134,	// (0x000454ec) cell_sctrl_middle_pane_cp01_g1

0xa290,	// (0x00048648) main_call4_pane

0x7141,	// (0x000454f9) aid_size_button_call4_ParamLimits

0x7141,	// (0x000454f9) aid_size_button_call4

0x7177,	// (0x0004552f) call4_windows_pane_ParamLimits

0x7177,	// (0x0004552f) call4_windows_pane

0x718c,	// (0x00045544) grid_call4_button_pane_ParamLimits

0x718c,	// (0x00045544) grid_call4_button_pane

0x71bc,	// (0x00045574) call4_windows_conf_pane

0x71d7,	// (0x0004558f) popup_call4_audio_first_window_ParamLimits

0x71d7,	// (0x0004558f) popup_call4_audio_first_window

0x7229,	// (0x000455e1) popup_call4_audio_second_window_ParamLimits

0x7229,	// (0x000455e1) popup_call4_audio_second_window

0x7242,	// (0x000455fa) popup_call4_audio_wait_window_ParamLimits

0x7242,	// (0x000455fa) popup_call4_audio_wait_window

0x7250,	// (0x00045608) cell_call4_button_pane_ParamLimits

0x7250,	// (0x00045608) cell_call4_button_pane

0x7273,	// (0x0004562b) bg_button_pane_cp09_ParamLimits

0x7273,	// (0x0004562b) bg_button_pane_cp09

0x727f,	// (0x00045637) cell_call4_button_pane_g1_ParamLimits

0x727f,	// (0x00045637) cell_call4_button_pane_g1

0x728c,	// (0x00045644) cell_call4_button_pane_t1_ParamLimits

0x728c,	// (0x00045644) cell_call4_button_pane_t1

0xd7e9,	// (0x0004bba1) popup_call4_audio_conf_window_ParamLimits

0xd7e9,	// (0x0004bba1) popup_call4_audio_conf_window

0x6460,	// (0x00044818) mup3_progress_pane_t1_ParamLimits

0x647f,	// (0x00044837) mup3_progress_pane_t2_ParamLimits

0xd128,	// (0x0004b4e0) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0004db50) mup3_progress_pane_t_ParamLimits

0xd145,	// (0x0004b4fd) mup_progress_pane_cp03_ParamLimits

0x6989,	// (0x00044d41) mup3_control_keys_pane_g4_copy1

0x6ec8,	// (0x00045280) mp4_rocker2_pane_ParamLimits

0x6ec8,	// (0x00045280) mp4_rocker2_pane

0xd803,	// (0x0004bbbb) mp4_rocker2_pane_g1

0xd80b,	// (0x0004bbc3) mp4_rocker2_pane_g2

0x72d0,	// (0x00045688) mp4_rocker2_pane_g3

0x72d8,	// (0x00045690) mp4_rocker2_pane_g4

0x72e0,	// (0x00045698) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004dc89) mp4_rocker2_pane_g

0xa290,	// (0x00048648) main_camera4_pane

0xa290,	// (0x00048648) main_video4_pane

0x6bdd,	// (0x00044f95) main_video_tele_dialer_pane_t1_ParamLimits

0x6bdd,	// (0x00044f95) main_video_tele_dialer_pane_t1

0x6bef,	// (0x00044fa7) main_video_tele_dialer_pane_t2_ParamLimits

0x6bef,	// (0x00044fa7) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0004dc3f) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0004dc3f) main_video_tele_dialer_pane_t

0x7300,	// (0x000456b8) cam4_autofocus_pane_ParamLimits

0x7300,	// (0x000456b8) cam4_autofocus_pane

0x7318,	// (0x000456d0) cam4_image_uncrop_pane_ParamLimits

0x7318,	// (0x000456d0) cam4_image_uncrop_pane

0x7331,	// (0x000456e9) cam4_indicators_pane_ParamLimits

0x7331,	// (0x000456e9) cam4_indicators_pane

0x734d,	// (0x00045705) main_camera4_pane_g1_ParamLimits

0x734d,	// (0x00045705) main_camera4_pane_g1

0x7359,	// (0x00045711) main_camera4_pane_g2_ParamLimits

0x7359,	// (0x00045711) main_camera4_pane_g2

0x7359,	// (0x00045711) main_camera4_pane_g3_ParamLimits

0x7359,	// (0x00045711) main_camera4_pane_g3

0x7365,	// (0x0004571d) main_camera4_pane_g4_ParamLimits

0x7365,	// (0x0004571d) main_camera4_pane_g4

0x7371,	// (0x00045729) main_camera4_pane_g5_ParamLimits

0x7371,	// (0x00045729) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004dc94) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004dc94) main_camera4_pane_g

0x738b,	// (0x00045743) main_camera4_pane_t1_ParamLimits

0x738b,	// (0x00045743) main_camera4_pane_t1

0xd0ad,	// (0x0004b465) bg_tb_trans_pane_cp06

0x73dd,	// (0x00045795) cam4_indicators_pane_g1

0x73ee,	// (0x000457a6) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004dcaf) cam4_indicators_pane_g

0x7406,	// (0x000457be) cam4_indicators_pane_t1

0x7430,	// (0x000457e8) main_video4_pane_g1_ParamLimits

0x7430,	// (0x000457e8) main_video4_pane_g1

0x743c,	// (0x000457f4) main_video4_pane_g2_ParamLimits

0x743c,	// (0x000457f4) main_video4_pane_g2

0x7448,	// (0x00045800) main_video4_pane_g3_ParamLimits

0x7448,	// (0x00045800) main_video4_pane_g3

0x7454,	// (0x0004580c) main_video4_pane_g4_ParamLimits

0x7454,	// (0x0004580c) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004dcb6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004dcb6) main_video4_pane_g

0x7476,	// (0x0004582e) vid4_indicators_pane_ParamLimits

0x7476,	// (0x0004582e) vid4_indicators_pane

0x7495,	// (0x0004584d) video4_image_uncrop_cif_pane_ParamLimits

0x7495,	// (0x0004584d) video4_image_uncrop_cif_pane

0x74a4,	// (0x0004585c) video4_image_uncrop_nhd_pane_ParamLimits

0x74a4,	// (0x0004585c) video4_image_uncrop_nhd_pane

0x7318,	// (0x000456d0) video4_image_uncrop_vga_pane_ParamLimits

0x7318,	// (0x000456d0) video4_image_uncrop_vga_pane

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp07

0x74bd,	// (0x00045875) vid4_indicators_pane_g1

0x74d3,	// (0x0004588b) vid4_indicators_pane_g2

0x74e7,	// (0x0004589f) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004dcc1) vid4_indicators_pane_g

0x7518,	// (0x000458d0) vid4_indicators_pane_t1

0x752f,	// (0x000458e7) cam4_autofocus_pane_g1

0x7537,	// (0x000458ef) cam4_autofocus_pane_g2

0x753f,	// (0x000458f7) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004dccc) cam4_autofocus_pane_g

0x7547,	// (0x000458ff) cam4_autofocus_pane_g3_copy1

0x6c0f,	// (0x00044fc7) video_down_pane_cp_t1

0x6c1d,	// (0x00044fd5) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0004dc44) video_down_pane_cp_t

0xd6fb,	// (0x0004bab3) popup_vitu2_window_ParamLimits

0xd6fb,	// (0x0004bab3) popup_vitu2_window

0x754f,	// (0x00045907) aid_size_cell2_itu2_ParamLimits

0x754f,	// (0x00045907) aid_size_cell2_itu2

0x7571,	// (0x00045929) aid_size_cell_itu2_ParamLimits

0x7571,	// (0x00045929) aid_size_cell_itu2

0xd7b5,	// (0x0004bb6d) bg_popup_window_pane_cp09_ParamLimits

0xd7b5,	// (0x0004bb6d) bg_popup_window_pane_cp09

0x75b7,	// (0x0004596f) field_vitu2_entry_pane_ParamLimits

0x75b7,	// (0x0004596f) field_vitu2_entry_pane

0x75d7,	// (0x0004598f) grid_vitu2_function_pane_ParamLimits

0x75d7,	// (0x0004598f) grid_vitu2_function_pane

0x761b,	// (0x000459d3) grid_vitu2_itu_pane_ParamLimits

0x761b,	// (0x000459d3) grid_vitu2_itu_pane

0x7693,	// (0x00045a4b) cell_vitu2_itu_pane_ParamLimits

0x7693,	// (0x00045a4b) cell_vitu2_itu_pane

0x76ae,	// (0x00045a66) cell_vitu2_function_pane_ParamLimits

0x76ae,	// (0x00045a66) cell_vitu2_function_pane

0xd813,	// (0x0004bbcb) bg_popup_call_pane_cp08_ParamLimits

0xd813,	// (0x0004bbcb) bg_popup_call_pane_cp08

0xd82a,	// (0x0004bbe2) field_vitu2_entry_pane_g1

0xd836,	// (0x0004bbee) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004dcd3) field_vitu2_entry_pane_g

0x0ea9,	// (0x0003f261) field_vitu2_entry_pane_t1_ParamLimits

0x0ea9,	// (0x0003f261) field_vitu2_entry_pane_t1

0x0ed9,	// (0x0003f291) field_vitu2_entry_pane_t2_ParamLimits

0x0ed9,	// (0x0003f291) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004dcda) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004dcda) field_vitu2_entry_pane_t

0x76f2,	// (0x00045aaa) bg_button_pane_cp010_ParamLimits

0x76f2,	// (0x00045aaa) bg_button_pane_cp010

0x7700,	// (0x00045ab8) cell_vitu2_itu_pane_g1

0x7720,	// (0x00045ad8) cell_vitu2_itu_pane_t1_ParamLimits

0x7720,	// (0x00045ad8) cell_vitu2_itu_pane_t1

0x0ef6,	// (0x0003f2ae) cell_vitu2_itu_pane_t2_ParamLimits

0x0ef6,	// (0x0003f2ae) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004dce4) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004dce4) cell_vitu2_itu_pane_t

0xb939,	// (0x00049cf1) bg_button_pane_cp011

0x776c,	// (0x00045b24) cell_vitu2_function_pane_g1

0xa290,	// (0x00048648) main_myfav_hc_pane

0x7104,	// (0x000454bc) popup_image3_note_pane_ParamLimits

0x7104,	// (0x000454bc) popup_image3_note_pane

0x7112,	// (0x000454ca) popup_image3_tool_bar_pane_ParamLimits

0x7112,	// (0x000454ca) popup_image3_tool_bar_pane

0x0f6c,	// (0x0003f324) cell_vitu2_itu_pane_t3_ParamLimits

0x0f6c,	// (0x0003f324) cell_vitu2_itu_pane_t3

0xa290,	// (0x00048648) bg_popup_trans_pane

0xd858,	// (0x0004bc10) grid_image3_tool_bar_pane

0xd862,	// (0x0004bc1a) bg_popup_trans_pane_g1

0xae15,	// (0x000491cd) bg_popup_trans_pane_g2

0xd86a,	// (0x0004bc22) bg_popup_trans_pane_g3

0xd872,	// (0x0004bc2a) bg_popup_trans_pane_g4

0xd87a,	// (0x0004bc32) bg_popup_trans_pane_g5

0xd882,	// (0x0004bc3a) bg_popup_trans_pane_g6

0xd88a,	// (0x0004bc42) bg_popup_trans_pane_g7

0xd892,	// (0x0004bc4a) bg_popup_trans_pane_g8

0xadf5,	// (0x000491ad) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004dceb) bg_popup_trans_pane_g

0xd89a,	// (0x0004bc52) cell_image3_tool_bar_pane_ParamLimits

0xd89a,	// (0x0004bc52) cell_image3_tool_bar_pane

0xce86,	// (0x0004b23e) cell_image3_tool_bar_pane_g1

0xa290,	// (0x00048648) bg_popup_trans_pane_cp1

0xd8b0,	// (0x0004bc68) popup_image3_note_pane_t1

0xd8be,	// (0x0004bc76) popup_image3_note_pane_t2

0xd8cc,	// (0x0004bc84) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004dcfe) popup_image3_note_pane_t

0xd8dc,	// (0x0004bc94) popup_image3_note_pane_t3_copy1

0x7780,	// (0x00045b38) bg_myfav_hc_instruction_pane_ParamLimits

0x7780,	// (0x00045b38) bg_myfav_hc_instruction_pane

0x7798,	// (0x00045b50) cell_myfav_contact_pane_ParamLimits

0x7798,	// (0x00045b50) cell_myfav_contact_pane

0x77b2,	// (0x00045b6a) cell_myfav_contact_pane_cp1_ParamLimits

0x77b2,	// (0x00045b6a) cell_myfav_contact_pane_cp1

0x77ca,	// (0x00045b82) cell_myfav_contact_pane_cp2_ParamLimits

0x77ca,	// (0x00045b82) cell_myfav_contact_pane_cp2

0x77e2,	// (0x00045b9a) cell_myfav_contact_pane_cp3_ParamLimits

0x77e2,	// (0x00045b9a) cell_myfav_contact_pane_cp3

0x77f9,	// (0x00045bb1) cell_myfav_contact_pane_cp4_ParamLimits

0x77f9,	// (0x00045bb1) cell_myfav_contact_pane_cp4

0x780f,	// (0x00045bc7) cell_myfav_contact_pane_cp5_ParamLimits

0x780f,	// (0x00045bc7) cell_myfav_contact_pane_cp5

0x7823,	// (0x00045bdb) cell_myfav_contact_pane_cp6_ParamLimits

0x7823,	// (0x00045bdb) cell_myfav_contact_pane_cp6

0x7837,	// (0x00045bef) cell_myfav_contact_pane_cp7_ParamLimits

0x7837,	// (0x00045bef) cell_myfav_contact_pane_cp7

0xd8ea,	// (0x0004bca2) listscroll_gen_pane_cp05

0x784f,	// (0x00045c07) main_myfav_hc_pane_g1_ParamLimits

0x784f,	// (0x00045c07) main_myfav_hc_pane_g1

0x7869,	// (0x00045c21) main_myfav_hc_pane_g2_ParamLimits

0x7869,	// (0x00045c21) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004dd05) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004dd05) main_myfav_hc_pane_g

0x789b,	// (0x00045c53) main_myfav_hc_pane_t1_ParamLimits

0x789b,	// (0x00045c53) main_myfav_hc_pane_t1

0xd8f3,	// (0x0004bcab) main_myfav_hc_pane_t2_ParamLimits

0xd8f3,	// (0x0004bcab) main_myfav_hc_pane_t2

0xd905,	// (0x0004bcbd) main_myfav_hc_pane_t3_ParamLimits

0xd905,	// (0x0004bcbd) main_myfav_hc_pane_t3

0x78b2,	// (0x00045c6a) main_myfav_hc_pane_t4_ParamLimits

0x78b2,	// (0x00045c6a) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004dd0c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004dd0c) main_myfav_hc_pane_t

0xce86,	// (0x0004b23e) bg_myfav_hc_instruction_pane_g1

0xd917,	// (0x0004bccf) cell_myfav_contact_pane_g1_ParamLimits

0xd917,	// (0x0004bccf) cell_myfav_contact_pane_g1

0xd917,	// (0x0004bccf) cell_myfav_contact_pane_g2_ParamLimits

0xd917,	// (0x0004bccf) cell_myfav_contact_pane_g2

0xd923,	// (0x0004bcdb) cell_myfav_contact_pane_g3_ParamLimits

0xd923,	// (0x0004bcdb) cell_myfav_contact_pane_g3

0xd112,	// (0x0004b4ca) cell_myfav_contact_pane_g4_ParamLimits

0xd112,	// (0x0004b4ca) cell_myfav_contact_pane_g4

0xd930,	// (0x0004bce8) cell_myfav_contact_pane_g5_ParamLimits

0xd930,	// (0x0004bce8) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004dd17) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004dd17) cell_myfav_contact_pane_g

0x7883,	// (0x00045c3b) main_myfav_hc_pane_g3_ParamLimits

0x7883,	// (0x00045c3b) main_myfav_hc_pane_g3

0x20cb,	// (0x00040483) popup_adpt_find_window

0x78dc,	// (0x00045c94) afind_page_pane_ParamLimits

0x78dc,	// (0x00045c94) afind_page_pane

0x78e9,	// (0x00045ca1) aid_size_cell_afind_ParamLimits

0x78e9,	// (0x00045ca1) aid_size_cell_afind

0x7903,	// (0x00045cbb) bg_popup_sub_pane_cp09_ParamLimits

0x7903,	// (0x00045cbb) bg_popup_sub_pane_cp09

0x7910,	// (0x00045cc8) find_pane_cp01_ParamLimits

0x7910,	// (0x00045cc8) find_pane_cp01

0xd93c,	// (0x0004bcf4) grid_afind_control_pane_ParamLimits

0xd93c,	// (0x0004bcf4) grid_afind_control_pane

0x791d,	// (0x00045cd5) grid_afind_pane_ParamLimits

0x791d,	// (0x00045cd5) grid_afind_pane

0x7939,	// (0x00045cf1) cell_afind_pane_ParamLimits

0x7939,	// (0x00045cf1) cell_afind_pane

0xce86,	// (0x0004b23e) afind_page_pane_g1

0x7985,	// (0x00045d3d) afind_page_pane_g2

0x798e,	// (0x00045d46) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004dd22) afind_page_pane_g

0x7997,	// (0x00045d4f) afind_page_pane_t1

0xd950,	// (0x0004bd08) cell_afind_grid_control_pane_ParamLimits

0xd950,	// (0x0004bd08) cell_afind_grid_control_pane

0xd7d5,	// (0x0004bb8d) bg_button_pane_cp69_ParamLimits

0xd7d5,	// (0x0004bb8d) bg_button_pane_cp69

0x79b7,	// (0x00045d6f) cell_afind_pane_g1_ParamLimits

0x79b7,	// (0x00045d6f) cell_afind_pane_g1

0x79c4,	// (0x00045d7c) cell_afind_pane_t1_ParamLimits

0x79c4,	// (0x00045d7c) cell_afind_pane_t1

0xac0a,	// (0x00048fc2) bg_button_pane_cp72

0xd95f,	// (0x0004bd17) cell_afind_grid_control_pane_g1

0x4e2a,	// (0x000431e2) aid_image_placing_area_ParamLimits

0x4e2a,	// (0x000431e2) aid_image_placing_area

0xd44b,	// (0x0004b803) field_vitu_entry_pane_g1_ParamLimits

0xd44b,	// (0x0004b803) field_vitu_entry_pane_g1

0xd457,	// (0x0004b80f) field_vitu_entry_pane_g2_ParamLimits

0xd457,	// (0x0004b80f) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0004dbcf) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0004dbcf) field_vitu_entry_pane_g

0x6a13,	// (0x00044dcb) cell_vitu_itu_pane_g1_ParamLimits

0x6a63,	// (0x00044e1b) cell_vitu_itu_pane_t3_ParamLimits

0x6a63,	// (0x00044e1b) cell_vitu_itu_pane_t3

0xd770,	// (0x0004bb28) mp4_progress_pane_t1_ParamLimits

0xd789,	// (0x0004bb41) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004dc68) mp4_progress_pane_t_ParamLimits

0xd7a2,	// (0x0004bb5a) mup_progress_pane_cp04_ParamLimits

0x78c6,	// (0x00045c7e) main_myfav_hc_pane_t5_ParamLimits

0x78c6,	// (0x00045c7e) main_myfav_hc_pane_t5

0x1f52,	// (0x0004030a) aid_zoom_text_primary

0x20cb,	// (0x00040483) popup_adpt_find_window_ParamLimits

0xb939,	// (0x00049cf1) main_cam_set_pane

0x733f,	// (0x000456f7) cam4_zoom_pane_ParamLimits

0x733f,	// (0x000456f7) cam4_zoom_pane

0x79d6,	// (0x00045d8e) main_cam_set_pane_g1_ParamLimits

0x79d6,	// (0x00045d8e) main_cam_set_pane_g1

0x79e4,	// (0x00045d9c) main_cam_set_pane_g2_ParamLimits

0x79e4,	// (0x00045d9c) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004dd29) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004dd29) main_cam_set_pane_g

0x79f0,	// (0x00045da8) main_cam_set_pane_t1_ParamLimits

0x79f0,	// (0x00045da8) main_cam_set_pane_t1

0x7a0c,	// (0x00045dc4) main_cset_listscroll_pane_ParamLimits

0x7a0c,	// (0x00045dc4) main_cset_listscroll_pane

0x7a3b,	// (0x00045df3) main_cset_slider_pane_ParamLimits

0x7a3b,	// (0x00045df3) main_cset_slider_pane

0xd970,	// (0x0004bd28) main_cset_list_pane_ParamLimits

0xd970,	// (0x0004bd28) main_cset_list_pane

0xd980,	// (0x0004bd38) scroll_pane_cp028

0x7a5c,	// (0x00045e14) aid_area_touch_slider

0x7a78,	// (0x00045e30) cset_slider_pane

0x7aa2,	// (0x00045e5a) main_cset_slider_pane_g1

0x7ab7,	// (0x00045e6f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004dd2e) main_cset_slider_pane_g

0xd9b9,	// (0x0004bd71) main_cset_slider_pane_t1

0x7b73,	// (0x00045f2b) main_cset_slider_pane_t2

0x7b8d,	// (0x00045f45) main_cset_slider_pane_t3

0x7ba7,	// (0x00045f5f) main_cset_slider_pane_t4

0x7bc1,	// (0x00045f79) main_cset_slider_pane_t5

0x7bdb,	// (0x00045f93) main_cset_slider_pane_t6

0x7bf0,	// (0x00045fa8) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004dd53) main_cset_slider_pane_t

0x7cf4,	// (0x000460ac) cset_list_set_pane_ParamLimits

0x7cf4,	// (0x000460ac) cset_list_set_pane

0x7d05,	// (0x000460bd) aid_position_infowindow_above

0x7d0d,	// (0x000460c5) aid_position_infowindow_below

0x0fbe,	// (0x0003f376) cset_list_set_pane_g1_ParamLimits

0x0fbe,	// (0x0003f376) cset_list_set_pane_g1

0x0fca,	// (0x0003f382) cset_list_set_pane_g3_ParamLimits

0x0fca,	// (0x0003f382) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004dd72) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004dd72) cset_list_set_pane_g

0x0fd9,	// (0x0003f391) cset_list_set_pane_t1_ParamLimits

0x0fd9,	// (0x0003f391) cset_list_set_pane_t1

0xb939,	// (0x00049cf1) list_highlight_pane_cp021_ParamLimits

0xb939,	// (0x00049cf1) list_highlight_pane_cp021

0xb749,	// (0x00049b01) cset_slider_pane_g1

0xb75b,	// (0x00049b13) cset_slider_pane_g2

0xb752,	// (0x00049b0a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004dd77) cset_slider_pane_g

0xe3f8,	// (0x0004c7b0) aid_area_touch_cam4_zoom

0x7d15,	// (0x000460cd) cam4_zoom_cont_pane

0x7d1d,	// (0x000460d5) cam4_zoom_pane_g1

0x7d25,	// (0x000460dd) cam4_zoom_pane_g2

0x7d2d,	// (0x000460e5) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004dd7e) cam4_zoom_pane_g

0x7d36,	// (0x000460ee) cam4_zoom_cont_pane_g1

0x7d3f,	// (0x000460f7) cam4_zoom_cont_pane_g2

0x7d48,	// (0x00046100) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004dd85) cam4_zoom_cont_pane_g

0x715b,	// (0x00045513) call4_image_pane_ParamLimits

0x715b,	// (0x00045513) call4_image_pane

0x71bc,	// (0x00045574) call4_windows_conf_pane_ParamLimits

0x7207,	// (0x000455bf) popup_call4_audio_in_window_ParamLimits

0x7207,	// (0x000455bf) popup_call4_audio_in_window

0xa290,	// (0x00048648) bg_popup_call2_act_pane_cp02

0xd7e1,	// (0x0004bb99) call4_list_conf_pane

0xce86,	// (0x0004b23e) call4_image_pane_g1

0xce86,	// (0x0004b23e) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0004da90) call4_image_pane_g

0xda59,	// (0x0004be11) list_single_graphic_popup_conf4_pane_ParamLimits

0xda59,	// (0x0004be11) list_single_graphic_popup_conf4_pane

0xa290,	// (0x00048648) list_highlight_pane_cp022

0xda6e,	// (0x0004be26) list_single_graphic_popup_conf4_pane_g1

0xb34f,	// (0x00049707) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004dd8c) list_single_graphic_popup_conf4_pane_g

0xda76,	// (0x0004be2e) list_single_graphic_popup_conf4_pane_t1

0x320f,	// (0x000415c7) popup_vtel_slider_window_ParamLimits

0x320f,	// (0x000415c7) popup_vtel_slider_window

0xd7c3,	// (0x0004bb7b) dialer2_ne_pane_t2_ParamLimits

0xd7c3,	// (0x0004bb7b) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004dc6d) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004dc6d) dialer2_ne_pane_t

0xb939,	// (0x00049cf1) bg_popup_sub_pane_cp010_ParamLimits

0xb939,	// (0x00049cf1) bg_popup_sub_pane_cp010

0x7d51,	// (0x00046109) popup_vtel_slider_window_g1_ParamLimits

0x7d51,	// (0x00046109) popup_vtel_slider_window_g1

0x7d5d,	// (0x00046115) popup_vtel_slider_window_g2_ParamLimits

0x7d5d,	// (0x00046115) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004dd91) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004dd91) popup_vtel_slider_window_g

0x7da5,	// (0x0004615d) vtel_slider_pane_ParamLimits

0x7da5,	// (0x0004615d) vtel_slider_pane

0x7db4,	// (0x0004616c) vtel_slider_pane_g1_ParamLimits

0x7db4,	// (0x0004616c) vtel_slider_pane_g1

0x7dc1,	// (0x00046179) vtel_slider_pane_g2_ParamLimits

0x7dc1,	// (0x00046179) vtel_slider_pane_g2

0x7dce,	// (0x00046186) vtel_slider_pane_g3_ParamLimits

0x7dce,	// (0x00046186) vtel_slider_pane_g3

0x7db4,	// (0x0004616c) vtel_slider_pane_g4_ParamLimits

0x7db4,	// (0x0004616c) vtel_slider_pane_g4

0x7ddb,	// (0x00046193) vtel_slider_pane_g5_ParamLimits

0x7ddb,	// (0x00046193) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004dd9a) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004dd9a) vtel_slider_pane_g

0xb939,	// (0x00049cf1) main_gallery2_pane

0x7597,	// (0x0004594f) aid_size_row_itut2_dropdow_list_ParamLimits

0x7597,	// (0x0004594f) aid_size_row_itut2_dropdow_list

0x75f9,	// (0x000459b1) grid_vitu2_function_top_pane_ParamLimits

0x75f9,	// (0x000459b1) grid_vitu2_function_top_pane

0x764f,	// (0x00045a07) popup_vitu2_dropdown_list_window_ParamLimits

0x764f,	// (0x00045a07) popup_vitu2_dropdown_list_window

0x766f,	// (0x00045a27) popup_vitu2_match_list_window

0x7de8,	// (0x000461a0) cell_vitu2_function_top_pane_ParamLimits

0x7de8,	// (0x000461a0) cell_vitu2_function_top_pane

0x7e0c,	// (0x000461c4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e0c,	// (0x000461c4) cell_vitu2_function_top_pane_cp01

0x7e28,	// (0x000461e0) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e28,	// (0x000461e0) cell_vitu2_function_top_wide_pane

0xb939,	// (0x00049cf1) bg_button_pane_cp012

0x7e44,	// (0x000461fc) cell_vitu2_function_top_pane_g1

0x7e58,	// (0x00046210) bg_button_pane_cp013_ParamLimits

0x7e58,	// (0x00046210) bg_button_pane_cp013

0x7e74,	// (0x0004622c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7e74,	// (0x0004622c) cell_vitu2_function_top_wide_pane_g1

0xd6fb,	// (0x0004bab3) bg_popup_sub_pane_cp20

0x7e8c,	// (0x00046244) list_vitu2_match_list_pane

0xd862,	// (0x0004bc1a) bg_popup_sub_pane_cp20_g1

0xd86a,	// (0x0004bc22) bg_popup_sub_pane_cp20_g2

0xae15,	// (0x000491cd) bg_popup_sub_pane_cp20_g3

0xd872,	// (0x0004bc2a) bg_popup_sub_pane_cp20_g4

0xadf5,	// (0x000491ad) bg_popup_sub_pane_cp20_g5

0xda8c,	// (0x0004be44) bg_popup_sub_pane_cp20_g6

0xd882,	// (0x0004bc3a) bg_popup_sub_pane_cp20_g7

0xd88a,	// (0x0004bc42) bg_popup_sub_pane_cp20_g8

0xd892,	// (0x0004bc4a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004dda5) bg_popup_sub_pane_cp20_g

0x7ea4,	// (0x0004625c) list_vitu2_match_list_item_pane_ParamLimits

0x7ea4,	// (0x0004625c) list_vitu2_match_list_item_pane

0x7eb6,	// (0x0004626e) list_vitu2_match_list_item_pane_t1

0xa290,	// (0x00048648) bg_popup_sub_pane_cp21

0xb278,	// (0x00049630) grid_vitu2_dropdown_list_pane

0x7ec4,	// (0x0004627c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7ec4,	// (0x0004627c) cell_vitu2_dropdown_list_char_pane

0x7ee9,	// (0x000462a1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7ee9,	// (0x000462a1) cell_vitu2_dropdown_list_ctrl_pane

0xda94,	// (0x0004be4c) cell_vitu2_dropdown_list_char_pane_g1

0xda9d,	// (0x0004be55) cell_vitu2_dropdown_list_char_pane_g2

0xdaa6,	// (0x0004be5e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004ddc2) cell_vitu2_dropdown_list_char_pane_g

0x7f17,	// (0x000462cf) cell_vitu2_dropdown_list_char_pane_t1

0x7f25,	// (0x000462dd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f25,	// (0x000462dd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f35,	// (0x000462ed) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f35,	// (0x000462ed) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f46,	// (0x000462fe) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f46,	// (0x000462fe) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f56,	// (0x0004630e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f56,	// (0x0004630e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd0ad,	// (0x0004b465) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd0ad,	// (0x0004b465) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004ddc9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004ddc9) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f6f,	// (0x00046327) aid_size_cell_gallery2_ParamLimits

0x7f6f,	// (0x00046327) aid_size_cell_gallery2

0x7f89,	// (0x00046341) grid_gallery2_pane_ParamLimits

0x7f89,	// (0x00046341) grid_gallery2_pane

0x7fa0,	// (0x00046358) scroll_pane_cp029_ParamLimits

0x7fa0,	// (0x00046358) scroll_pane_cp029

0x7fb0,	// (0x00046368) cell_gallery2_pane_ParamLimits

0x7fb0,	// (0x00046368) cell_gallery2_pane

0xdaaf,	// (0x0004be67) cell_gallery2_pane_g2

0x8007,	// (0x000463bf) cell_gallery2_pane_g3

0xdab7,	// (0x0004be6f) cell_gallery2_pane_g4

0xdabf,	// (0x0004be77) cell_gallery2_pane_g5

0xabb8,	// (0x00048f70) grid_highlight_pane_cp10

0x766f,	// (0x00045a27) popup_vitu2_match_list_window_ParamLimits

0x7683,	// (0x00045a3b) popup_vitu2_query_window_ParamLimits

0x7683,	// (0x00045a3b) popup_vitu2_query_window

0xa290,	// (0x00048648) bg_vitu2_candi_button_pane

0xda94,	// (0x0004be4c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda9d,	// (0x0004be55) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdaa6,	// (0x0004be5e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1044,	// (0x0003f3fc) bg_button_pane_cp015

0x800f,	// (0x000463c7) bg_button_pane_cp016

0x8022,	// (0x000463da) bg_button_pane_cp017

0xca4e,	// (0x0004ae06) bg_popup_sub_pane_cp22

0xdac7,	// (0x0004be7f) popup_vitu2_query_window_g1

0x1077,	// (0x0003f42f) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004ddd4) popup_vitu2_query_window_g

0x1094,	// (0x0003f44c) popup_vitu2_query_window_t1_ParamLimits

0x1094,	// (0x0003f44c) popup_vitu2_query_window_t1

0x10c7,	// (0x0003f47f) popup_vitu2_query_window_t2_ParamLimits

0x10c7,	// (0x0003f47f) popup_vitu2_query_window_t2

0x10d9,	// (0x0003f491) popup_vitu2_query_window_t3_ParamLimits

0x10d9,	// (0x0003f491) popup_vitu2_query_window_t3

0x8046,	// (0x000463fe) popup_vitu2_query_window_t4_ParamLimits

0x8046,	// (0x000463fe) popup_vitu2_query_window_t4

0x8069,	// (0x00046421) popup_vitu2_query_window_t5_ParamLimits

0x8069,	// (0x00046421) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004dddb) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004dddb) popup_vitu2_query_window_t

0xd968,	// (0x0004bd20) main_cset_text_pane

0x7a5c,	// (0x00045e14) aid_area_touch_slider_ParamLimits

0x7a78,	// (0x00045e30) cset_slider_pane_ParamLimits

0x7aa2,	// (0x00045e5a) main_cset_slider_pane_g1_ParamLimits

0x7ab7,	// (0x00045e6f) main_cset_slider_pane_g2_ParamLimits

0xd989,	// (0x0004bd41) main_cset_slider_pane_g3_ParamLimits

0xd989,	// (0x0004bd41) main_cset_slider_pane_g3

0x7acc,	// (0x00045e84) main_cset_slider_pane_g4_ParamLimits

0x7acc,	// (0x00045e84) main_cset_slider_pane_g4

0x7adb,	// (0x00045e93) main_cset_slider_pane_g5_ParamLimits

0x7adb,	// (0x00045e93) main_cset_slider_pane_g5

0x7ae7,	// (0x00045e9f) main_cset_slider_pane_g6_ParamLimits

0x7ae7,	// (0x00045e9f) main_cset_slider_pane_g6

0xf976,	// (0x0004dd2e) main_cset_slider_pane_g_ParamLimits

0xd9b9,	// (0x0004bd71) main_cset_slider_pane_t1_ParamLimits

0x7b73,	// (0x00045f2b) main_cset_slider_pane_t2_ParamLimits

0x7b8d,	// (0x00045f45) main_cset_slider_pane_t3_ParamLimits

0x7ba7,	// (0x00045f5f) main_cset_slider_pane_t4_ParamLimits

0x7bc1,	// (0x00045f79) main_cset_slider_pane_t5_ParamLimits

0x7bdb,	// (0x00045f93) main_cset_slider_pane_t6_ParamLimits

0x7bf0,	// (0x00045fa8) main_cset_slider_pane_t7_ParamLimits

0x7c1a,	// (0x00045fd2) main_cset_slider_pane_t8_ParamLimits

0x7c1a,	// (0x00045fd2) main_cset_slider_pane_t8

0x7c42,	// (0x00045ffa) main_cset_slider_pane_t9_ParamLimits

0x7c42,	// (0x00045ffa) main_cset_slider_pane_t9

0x7c6a,	// (0x00046022) main_cset_slider_pane_t10_ParamLimits

0x7c6a,	// (0x00046022) main_cset_slider_pane_t10

0x7c92,	// (0x0004604a) main_cset_slider_pane_t11_ParamLimits

0x7c92,	// (0x0004604a) main_cset_slider_pane_t11

0x7cba,	// (0x00046072) main_cset_slider_pane_t12_ParamLimits

0x7cba,	// (0x00046072) main_cset_slider_pane_t12

0x7cd7,	// (0x0004608f) main_cset_slider_pane_t13_ParamLimits

0x7cd7,	// (0x0004608f) main_cset_slider_pane_t13

0xf99b,	// (0x0004dd53) main_cset_slider_pane_t_ParamLimits

0xa290,	// (0x00048648) bg_popup_sub_pane_cp011

0xdad3,	// (0x0004be8b) main_cset_text_pane_g1

0xdadb,	// (0x0004be93) main_cset_text_pane_t1

0xdae9,	// (0x0004bea1) main_cset_text_pane_t2

0xdaf7,	// (0x0004beaf) main_cset_text_pane_t3

0xdb05,	// (0x0004bebd) main_cset_text_pane_t4

0xdb13,	// (0x0004becb) main_cset_text_pane_t5

0xdb21,	// (0x0004bed9) main_cset_text_pane_t6

0xdb2f,	// (0x0004bee7) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004ddea) main_cset_text_pane_t

0xa290,	// (0x00048648) main_cam4_burst_pane

0xa290,	// (0x00048648) main_cam5_pane

0x79a5,	// (0x00045d5d) bg_button_pane_cp019

0x79ae,	// (0x00045d66) bg_button_pane_cp020

0xd995,	// (0x0004bd4d) main_cset_slider_pane_g7_ParamLimits

0xd995,	// (0x0004bd4d) main_cset_slider_pane_g7

0xd9a1,	// (0x0004bd59) main_cset_slider_pane_g8_ParamLimits

0xd9a1,	// (0x0004bd59) main_cset_slider_pane_g8

0x7afb,	// (0x00045eb3) main_cset_slider_pane_g9_ParamLimits

0x7afb,	// (0x00045eb3) main_cset_slider_pane_g9

0x7b07,	// (0x00045ebf) main_cset_slider_pane_g10_ParamLimits

0x7b07,	// (0x00045ebf) main_cset_slider_pane_g10

0x7b13,	// (0x00045ecb) main_cset_slider_pane_g11_ParamLimits

0x7b13,	// (0x00045ecb) main_cset_slider_pane_g11

0x7b1f,	// (0x00045ed7) main_cset_slider_pane_g12_ParamLimits

0x7b1f,	// (0x00045ed7) main_cset_slider_pane_g12

0x7b2b,	// (0x00045ee3) main_cset_slider_pane_g13_ParamLimits

0x7b2b,	// (0x00045ee3) main_cset_slider_pane_g13

0x7b37,	// (0x00045eef) main_cset_slider_pane_g14_ParamLimits

0x7b37,	// (0x00045eef) main_cset_slider_pane_g14

0x7b43,	// (0x00045efb) main_cset_slider_pane_g15_ParamLimits

0x7b43,	// (0x00045efb) main_cset_slider_pane_g15

0xd9e7,	// (0x0004bd9f) main_cset_slider_pane_t14_ParamLimits

0xd9e7,	// (0x0004bd9f) main_cset_slider_pane_t14

0xda20,	// (0x0004bdd8) main_cset_slider_pane_t15_ParamLimits

0xda20,	// (0x0004bdd8) main_cset_slider_pane_t15

0x808c,	// (0x00046444) aid_cam4_burst_size_cell_ParamLimits

0x808c,	// (0x00046444) aid_cam4_burst_size_cell

0x80a8,	// (0x00046460) grid_cam4_burst_pane_ParamLimits

0x80a8,	// (0x00046460) grid_cam4_burst_pane

0x80da,	// (0x00046492) linegrid_cam4_burst_pane_ParamLimits

0x80da,	// (0x00046492) linegrid_cam4_burst_pane

0x80f8,	// (0x000464b0) scroll_pane_cp30_ParamLimits

0x80f8,	// (0x000464b0) scroll_pane_cp30

0x8104,	// (0x000464bc) cell_cam4_burst_pane_ParamLimits

0x8104,	// (0x000464bc) cell_cam4_burst_pane

0xdb3d,	// (0x0004bef5) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb3d,	// (0x0004bef5) linegrid_cam4_burst_pane_g1

0x8144,	// (0x000464fc) linegrid_cam4_burst_pane_g2_ParamLimits

0x8144,	// (0x000464fc) linegrid_cam4_burst_pane_g2

0xdb4a,	// (0x0004bf02) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb4a,	// (0x0004bf02) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004ddf9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004ddf9) linegrid_cam4_burst_pane_g

0x8155,	// (0x0004650d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8155,	// (0x0004650d) linegrid_cam4_burst_pane_g3_copy1

0xdb57,	// (0x0004bf0f) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb57,	// (0x0004bf0f) linegrid_cam4_burst_pane_g4

0x816f,	// (0x00046527) linegrid_cam4_burst_pane_g5_ParamLimits

0x816f,	// (0x00046527) linegrid_cam4_burst_pane_g5

0x8180,	// (0x00046538) linegrid_cam4_burst_pane_g6_ParamLimits

0x8180,	// (0x00046538) linegrid_cam4_burst_pane_g6

0xdb64,	// (0x0004bf1c) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb64,	// (0x0004bf1c) linegrid_cam4_burst_pane_g7

0x8197,	// (0x0004654f) cell_cam4_burst_pane_g1

0xdb7d,	// (0x0004bf35) main_cam5_pane_t1_ParamLimits

0xdb7d,	// (0x0004bf35) main_cam5_pane_t1

0xdb8f,	// (0x0004bf47) main_cam5_pane_t2_ParamLimits

0xdb8f,	// (0x0004bf47) main_cam5_pane_t2

0xdba1,	// (0x0004bf59) main_cam5_pane_t3_ParamLimits

0xdba1,	// (0x0004bf59) main_cam5_pane_t3

0xdbb3,	// (0x0004bf6b) main_cam5_pane_t4_ParamLimits

0xdbb3,	// (0x0004bf6b) main_cam5_pane_t4

0xdbcb,	// (0x0004bf83) main_cam5_pane_t5_ParamLimits

0xdbcb,	// (0x0004bf83) main_cam5_pane_t5

0xdbdf,	// (0x0004bf97) main_cam5_pane_t6_ParamLimits

0xdbdf,	// (0x0004bf97) main_cam5_pane_t6

0xdbf3,	// (0x0004bfab) main_cam5_pane_t7_ParamLimits

0xdbf3,	// (0x0004bfab) main_cam5_pane_t7

0xdc05,	// (0x0004bfbd) main_cam5_pane_t8_ParamLimits

0xdc05,	// (0x0004bfbd) main_cam5_pane_t8

0xdc23,	// (0x0004bfdb) main_cam5_pane_t9_ParamLimits

0xdc23,	// (0x0004bfdb) main_cam5_pane_t9

0xdc35,	// (0x0004bfed) main_cam5_pane_t10_ParamLimits

0xdc35,	// (0x0004bfed) main_cam5_pane_t10

0xdc47,	// (0x0004bfff) main_cam5_pane_t11_ParamLimits

0xdc47,	// (0x0004bfff) main_cam5_pane_t11

0xdc5b,	// (0x0004c013) main_cam5_pane_t12_ParamLimits

0xdc5b,	// (0x0004c013) main_cam5_pane_t12

0xdc72,	// (0x0004c02a) main_cam5_pane_t13_ParamLimits

0xdc72,	// (0x0004c02a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004de05) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004de05) main_cam5_pane_t

0x2182,	// (0x0004053a) popup_scut_keymap_window_ParamLimits

0x2182,	// (0x0004053a) popup_scut_keymap_window

0x81aa,	// (0x00046562) aid_size_cell_brow_shortcut

0xabb8,	// (0x00048f70) bg_popup_window_pane_cp010

0x81b6,	// (0x0004656e) grid_scut_pane

0x81c2,	// (0x0004657a) cell_scut_pane_ParamLimits

0x81c2,	// (0x0004657a) cell_scut_pane

0x81dd,	// (0x00046595) cell_scut_pane_g1

0xdc95,	// (0x0004c04d) cell_scut_pane_t1

0xdca4,	// (0x0004c05c) cell_scut_pane_t2

0x81e6,	// (0x0004659e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004de20) cell_scut_pane_t

0x607f,	// (0x00044437) main_mup3_pane_g8_ParamLimits

0x607f,	// (0x00044437) main_mup3_pane_g8

0x75a7,	// (0x0004595f) area_vitu2_query_pane_ParamLimits

0x75a7,	// (0x0004595f) area_vitu2_query_pane

0x1056,	// (0x0003f40e) input_focus_pane_cp08

0xdcb3,	// (0x0004c06b) area_vitu2_query_pane_g1

0x1157,	// (0x0003f50f) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004de27) area_vitu2_query_pane_g

0x81f4,	// (0x000465ac) area_vitu2_query_pane_t1_ParamLimits

0x81f4,	// (0x000465ac) area_vitu2_query_pane_t1

0x8208,	// (0x000465c0) area_vitu2_query_pane_t2_ParamLimits

0x8208,	// (0x000465c0) area_vitu2_query_pane_t2

0x1168,	// (0x0003f520) area_vitu2_query_pane_t3_ParamLimits

0x1168,	// (0x0003f520) area_vitu2_query_pane_t3

0x1190,	// (0x0003f548) area_vitu2_query_pane_t4_ParamLimits

0x1190,	// (0x0003f548) area_vitu2_query_pane_t4

0x11b8,	// (0x0003f570) area_vitu2_query_pane_t5_ParamLimits

0x11b8,	// (0x0003f570) area_vitu2_query_pane_t5

0x11e0,	// (0x0003f598) area_vitu2_query_pane_t6_ParamLimits

0x11e0,	// (0x0003f598) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004de2c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004de2c) area_vitu2_query_pane_t

0x821c,	// (0x000465d4) bg_button_pane_cp018

0x822a,	// (0x000465e2) bg_button_pane_cp021

0x122c,	// (0x0003f5e4) bg_button_pane_cp022

0x123d,	// (0x0003f5f5) input_focus_pane_cp09

0xb45e,	// (0x00049816) aid_size_touch_mv_arrow_left

0xb489,	// (0x00049841) aid_size_touch_mv_arrow_right

0x7b5b,	// (0x00045f13) main_cset_slider_pane_g16_ParamLimits

0x7b5b,	// (0x00045f13) main_cset_slider_pane_g16

0x7b67,	// (0x00045f1f) main_cset_slider_pane_g17_ParamLimits

0x7b67,	// (0x00045f1f) main_cset_slider_pane_g17

0x8197,	// (0x0004654f) cell_cam4_burst_pane_g1_ParamLimits

0xa290,	// (0x00048648) compa_mode_pane

0x7d69,	// (0x00046121) popup_vtel_slider_window_g3_ParamLimits

0x7d69,	// (0x00046121) popup_vtel_slider_window_g3

0x7d7d,	// (0x00046135) popup_vtel_slider_window_g4_ParamLimits

0x7d7d,	// (0x00046135) popup_vtel_slider_window_g4

0x7d91,	// (0x00046149) popup_vtel_slider_window_t1_ParamLimits

0x7d91,	// (0x00046149) popup_vtel_slider_window_t1

0xa290,	// (0x00048648) main_cl_pane

0x534b,	// (0x00043703) popup_imed_adjust2_window_ParamLimits

0xca4e,	// (0x0004ae06) bg_tb_trans_pane_cp05_ParamLimits

0xd376,	// (0x0004b72e) popup_imed_adjust2_window_g1_ParamLimits

0xd385,	// (0x0004b73d) popup_imed_adjust2_window_g2_ParamLimits

0xd385,	// (0x0004b73d) popup_imed_adjust2_window_g2

0xd391,	// (0x0004b749) popup_imed_adjust2_window_g3_ParamLimits

0xd391,	// (0x0004b749) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0004db93) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0004db93) popup_imed_adjust2_window_g

0xd39d,	// (0x0004b755) popup_imed_adjust2_window_t1_ParamLimits

0xd3b5,	// (0x0004b76d) slider_imed_adjust_pane_ParamLimits

0xd3c9,	// (0x0004b781) slider_imed_adjust_pane_g1_ParamLimits

0xd3d9,	// (0x0004b791) slider_imed_adjust_pane_g2_ParamLimits

0xd3e9,	// (0x0004b7a1) slider_imed_adjust_pane_g3_ParamLimits

0xd3fa,	// (0x0004b7b2) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0004db9a) slider_imed_adjust_pane_g_ParamLimits

0x72e8,	// (0x000456a0) aid_touch_area_cam4_ParamLimits

0x72e8,	// (0x000456a0) aid_touch_area_cam4

0x72f8,	// (0x000456b0) battery_pane_cp01

0x737f,	// (0x00045737) main_camera4_pane_g6_ParamLimits

0x737f,	// (0x00045737) main_camera4_pane_g6

0x739d,	// (0x00045755) main_camera4_pane_t2_ParamLimits

0x739d,	// (0x00045755) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004dca1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004dca1) main_camera4_pane_t

0x7420,	// (0x000457d8) aid_touch_area_vid4_ParamLimits

0x7420,	// (0x000457d8) aid_touch_area_vid4

0x7460,	// (0x00045818) main_video4_pane_g5_ParamLimits

0x7460,	// (0x00045818) main_video4_pane_g5

0x7486,	// (0x0004583e) vid4_progress_pane_ParamLimits

0x7486,	// (0x0004583e) vid4_progress_pane

0xd9ad,	// (0x0004bd65) main_cset_slider_pane_g18_ParamLimits

0xd9ad,	// (0x0004bd65) main_cset_slider_pane_g18

0xdb71,	// (0x0004bf29) cell_cam4_burst_pane_g2_ParamLimits

0xdb71,	// (0x0004bf29) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004de00) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004de00) cell_cam4_burst_pane_g

0x8236,	// (0x000465ee) bg_cl_pane_ParamLimits

0x8236,	// (0x000465ee) bg_cl_pane

0x8242,	// (0x000465fa) cl_header_pane_ParamLimits

0x8242,	// (0x000465fa) cl_header_pane

0x824e,	// (0x00046606) cl_listscroll_pane_ParamLimits

0x824e,	// (0x00046606) cl_listscroll_pane

0xdcbf,	// (0x0004c077) bg_cl_pane_g1

0xdcc7,	// (0x0004c07f) bg_cl_pane_g2

0xdccf,	// (0x0004c087) bg_cl_pane_g3

0xdcd7,	// (0x0004c08f) bg_cl_pane_g4

0xdcdf,	// (0x0004c097) bg_cl_pane_g5

0xdce7,	// (0x0004c09f) bg_cl_pane_g6

0xdcef,	// (0x0004c0a7) bg_cl_pane_g7

0xdcf7,	// (0x0004c0af) bg_cl_pane_g8

0xdcff,	// (0x0004c0b7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004de3b) bg_cl_pane_g

0x825a,	// (0x00046612) aid_height_cl_leading_ParamLimits

0x825a,	// (0x00046612) aid_height_cl_leading

0x8266,	// (0x0004661e) aid_height_cl_text_ParamLimits

0x8266,	// (0x0004661e) aid_height_cl_text

0xd6fb,	// (0x0004bab3) bg_cl_header_pane_ParamLimits

0xd6fb,	// (0x0004bab3) bg_cl_header_pane

0x827e,	// (0x00046636) cl_header_pane_g1_ParamLimits

0x827e,	// (0x00046636) cl_header_pane_g1

0x828b,	// (0x00046643) cl_header_pane_t1_ParamLimits

0x828b,	// (0x00046643) cl_header_pane_t1

0xdd07,	// (0x0004c0bf) cl_list_pane

0xd980,	// (0x0004bd38) hc_scroll_pane_cp01

0xadf5,	// (0x000491ad) bg_cl_header_pane_g1

0xd862,	// (0x0004bc1a) bg_cl_header_pane_g2

0xae15,	// (0x000491cd) bg_cl_header_pane_g3

0xd872,	// (0x0004bc2a) bg_cl_header_pane_g4

0xd86a,	// (0x0004bc22) bg_cl_header_pane_g5

0xda8c,	// (0x0004be44) bg_cl_header_pane_g6

0xd88a,	// (0x0004bc42) bg_cl_header_pane_g7

0xd892,	// (0x0004bc4a) bg_cl_header_pane_g8

0xd882,	// (0x0004bc3a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004de4e) bg_cl_header_pane_g

0x829d,	// (0x00046655) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x829d,	// (0x00046655) hc_cl_list_double_graphic_heading_pane

0x82ad,	// (0x00046665) hc_cl_list_single_graphic_pane_ParamLimits

0x82ad,	// (0x00046665) hc_cl_list_single_graphic_pane

0x82bf,	// (0x00046677) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82bf,	// (0x00046677) hc_cl_list_single_graphic_pane_g1

0x82cb,	// (0x00046683) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82cb,	// (0x00046683) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004de61) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004de61) hc_cl_list_single_graphic_pane_g

0x82df,	// (0x00046697) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x82df,	// (0x00046697) hc_cl_list_single_graphic_pane_t1

0x82bf,	// (0x00046677) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82bf,	// (0x00046677) hc_cl_list_double_graphic_heading_pane_g1

0x82f4,	// (0x000466ac) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x82f4,	// (0x000466ac) hc_cl_list_double_graphic_heading_pane_g2

0x8308,	// (0x000466c0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8308,	// (0x000466c0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004de66) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004de66) hc_cl_list_double_graphic_heading_pane_g

0x831c,	// (0x000466d4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x831c,	// (0x000466d4) hc_cl_list_double_graphic_heading_pane_t1

0x8331,	// (0x000466e9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8331,	// (0x000466e9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004de6d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004de6d) hc_cl_list_double_graphic_heading_pane_t

0x834e,	// (0x00046706) vid4_progress_pane_g1

0x835e,	// (0x00046716) vid4_progress_pane_g2

0x836e,	// (0x00046726) vid4_progress_pane_g3

0x73ee,	// (0x000457a6) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004de72) vid4_progress_pane_g

0x8380,	// (0x00046738) vid4_progress_pane_t1

0x8396,	// (0x0004674e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004de7d) vid4_progress_pane_t

0x83c0,	// (0x00046778) wait_bar_pane_cp07

0xcc73,	// (0x0004b02b) blid_firmament_pane_ParamLimits

0xccb6,	// (0x0004b06e) popup_blid_sat_info2_window_g1

0xccda,	// (0x0004b092) popup_blid_sat_info2_window_t3

0xcce8,	// (0x0004b0a0) popup_blid_sat_info2_window_t4

0xccf6,	// (0x0004b0ae) popup_blid_sat_info2_window_t5

0xcd04,	// (0x0004b0bc) popup_blid_sat_info2_window_t6

0xcd14,	// (0x0004b0cc) popup_blid_sat_info2_window_t7

0xcd22,	// (0x0004b0da) popup_blid_sat_info2_window_t8

0xcd30,	// (0x0004b0e8) popup_blid_sat_info2_window_t9

0xcd3e,	// (0x0004b0f6) popup_blid_sat_info2_window_t10

0xce06,	// (0x0004b1be) aid_firma_cardinal_ParamLimits

0xce1a,	// (0x0004b1d2) blid_firmament_pane_t1_ParamLimits

0xce31,	// (0x0004b1e9) blid_firmament_pane_t2_ParamLimits

0xce48,	// (0x0004b200) blid_firmament_pane_t3_ParamLimits

0xce5f,	// (0x0004b217) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0004da87) blid_firmament_pane_t_ParamLimits

0xce76,	// (0x0004b22e) blid_sat_info_pane_ParamLimits

0xb939,	// (0x00049cf1) main_cam_set_pane_ParamLimits

0x683b,	// (0x00044bf3) aid_size_cell_colour_35_ParamLimits

0x6855,	// (0x00044c0d) aid_size_cell_colour_112_ParamLimits

0x686c,	// (0x00044c24) aid_size_cell_effect_ParamLimits

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp02_ParamLimits

0xb947,	// (0x00049cff) heading_imed_pane_ParamLimits

0x6886,	// (0x00044c3e) listscroll_imed_pane_ParamLimits

0xc076,	// (0x0004a42e) popup_call2_audio_first_window_g5_ParamLimits

0xc076,	// (0x0004a42e) popup_call2_audio_first_window_g5

0x6fd2,	// (0x0004538a) aid_size_touch_image3_arrow_left_ParamLimits

0x6fd2,	// (0x0004538a) aid_size_touch_image3_arrow_left

0x6fe8,	// (0x000453a0) aid_size_touch_image3_arrow_right_ParamLimits

0x6fe8,	// (0x000453a0) aid_size_touch_image3_arrow_right

0x83ab,	// (0x00046763) vid4_progress_pane_t3

0x6b2a,	// (0x00044ee2) main_hwr_training_symbol_option_pane_ParamLimits

0x6b2a,	// (0x00044ee2) main_hwr_training_symbol_option_pane

0xd66f,	// (0x0004ba27) popup_hwr_training_preview_window_ParamLimits

0xd66f,	// (0x0004ba27) popup_hwr_training_preview_window

0x6b8b,	// (0x00044f43) hwr_training_navi_pane_g5_ParamLimits

0x6b8b,	// (0x00044f43) hwr_training_navi_pane_g5

0xd850,	// (0x0004bc08) popup_char_count_window

0xd6fb,	// (0x0004bab3) bg_popup_sub_pane_cp20_ParamLimits

0x7e8c,	// (0x00046244) list_vitu2_match_list_pane_ParamLimits

0x7e98,	// (0x00046250) vitu2_page_scroll_pane_ParamLimits

0x7e98,	// (0x00046250) vitu2_page_scroll_pane

0xdd10,	// (0x0004c0c8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdd10,	// (0x0004c0c8) list_single_hwr_training_symbol_option_pane

0xdd23,	// (0x0004c0db) list_single_hwr_training_symbol_option_pane_g1

0xdd2b,	// (0x0004c0e3) list_single_hwr_training_symbol_option_pane_t1

0xdd39,	// (0x0004c0f1) bg_button_pane_cp023

0xdd42,	// (0x0004c0fa) bg_button_pane_cp024

0x83f7,	// (0x000467af) vitu2_page_scroll_pane_g1

0x83ff,	// (0x000467b7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004de84) vitu2_page_scroll_pane_g

0x8409,	// (0x000467c1) vitu2_page_scroll_pane_t1

0xd709,	// (0x0004bac1) popup_char_count_window_g1

0xdd9f,	// (0x0004c157) popup_char_count_window_g2

0xd712,	// (0x0004baca) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004de89) popup_char_count_window_g

0xdda8,	// (0x0004c160) popup_char_count_window_t1

0xa290,	// (0x00048648) main_vded2_pane

0xd362,	// (0x0004b71a) aid_size_cell_imed_line

0xd36c,	// (0x0004b724) grid_imed_line_width_pane

0x74fa,	// (0x000458b2) vid4_indicators_pane_g4

0xddb6,	// (0x0004c16e) cell_imed_line_width_pane_ParamLimits

0xddb6,	// (0x0004c16e) cell_imed_line_width_pane

0xddcc,	// (0x0004c184) cell_imed_line_width_pane_g1

0xdd4b,	// (0x0004c103) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004de90) cell_imed_line_width_pane_g

0x8418,	// (0x000467d0) main_vded2_pane_g1_ParamLimits

0x8418,	// (0x000467d0) main_vded2_pane_g1

0x8427,	// (0x000467df) main_vded2_pane_g2_ParamLimits

0x8427,	// (0x000467df) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004de95) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004de95) main_vded2_pane_g

0x8435,	// (0x000467ed) vded2_slider_pane_ParamLimits

0x8435,	// (0x000467ed) vded2_slider_pane

0x8442,	// (0x000467fa) aid_size_touch_vded2_end

0x844c,	// (0x00046804) aid_size_touch_vded2_playhead

0xddd5,	// (0x0004c18d) aid_size_touch_vded2_start

0xdddd,	// (0x0004c195) vded2_slider_bg_pane

0xdde6,	// (0x0004c19e) vded2_slider_pane_g1

0xddef,	// (0x0004c1a7) vded2_slider_pane_g2

0x8454,	// (0x0004680c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004de9a) vded2_slider_pane_g

0xd71b,	// (0x0004bad3) vded2_slider_bg_pane_g1

0xd724,	// (0x0004badc) vded2_slider_bg_pane_g2

0xd72d,	// (0x0004bae5) vded2_slider_bg_pane_g3

0x0002,

0xf79f,	// (0x0004db57) vded2_slider_bg_pane_g

0x4b8d,	// (0x00042f45) aid_postcard_touch_down_pane_ParamLimits

0x4b8d,	// (0x00042f45) aid_postcard_touch_down_pane

0x4b9d,	// (0x00042f55) aid_postcard_touch_up_pane_ParamLimits

0x4b9d,	// (0x00042f55) aid_postcard_touch_up_pane

0xa290,	// (0x00048648) main_blid2_pane

0x52ca,	// (0x00043682) popup_blid2_search_window

0xa290,	// (0x00048648) blid2_gps_pane

0xa290,	// (0x00048648) blid2_navig_pane

0xa290,	// (0x00048648) blid2_search_pane

0xa290,	// (0x00048648) blid2_tripm_pane

0x845d,	// (0x00046815) blid2_search_pane_g1_ParamLimits

0x845d,	// (0x00046815) blid2_search_pane_g1

0x8469,	// (0x00046821) blid2_search_pane_t1_ParamLimits

0x8469,	// (0x00046821) blid2_search_pane_t1

0x847b,	// (0x00046833) aid_size_cell_blid2_gps_ParamLimits

0x847b,	// (0x00046833) aid_size_cell_blid2_gps

0x848b,	// (0x00046843) blid2_gps_pane_g1_ParamLimits

0x848b,	// (0x00046843) blid2_gps_pane_g1

0x8497,	// (0x0004684f) grid_blid2_satellite_pane_ParamLimits

0x8497,	// (0x0004684f) grid_blid2_satellite_pane

0x84a5,	// (0x0004685d) blid2_navig_pane_g1_ParamLimits

0x84a5,	// (0x0004685d) blid2_navig_pane_g1

0x84b1,	// (0x00046869) blid2_navig_pane_t1_ParamLimits

0x84b1,	// (0x00046869) blid2_navig_pane_t1

0x84c3,	// (0x0004687b) blid2_navig_pane_t2_ParamLimits

0x84c3,	// (0x0004687b) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004dea1) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004dea1) blid2_navig_pane_t

0x84d5,	// (0x0004688d) blid2_navig_ring_pane_ParamLimits

0x84d5,	// (0x0004688d) blid2_navig_ring_pane

0x84e5,	// (0x0004689d) blid2_speed_pane_ParamLimits

0x84e5,	// (0x0004689d) blid2_speed_pane

0x84f1,	// (0x000468a9) blid2_tripm_pane_g1_ParamLimits

0x84f1,	// (0x000468a9) blid2_tripm_pane_g1

0x8501,	// (0x000468b9) blid2_tripm_pane_g2_ParamLimits

0x8501,	// (0x000468b9) blid2_tripm_pane_g2

0x850d,	// (0x000468c5) blid2_tripm_pane_g3_ParamLimits

0x850d,	// (0x000468c5) blid2_tripm_pane_g3

0x8519,	// (0x000468d1) blid2_tripm_pane_g4_ParamLimits

0x8519,	// (0x000468d1) blid2_tripm_pane_g4

0x8525,	// (0x000468dd) blid2_tripm_pane_g5_ParamLimits

0x8525,	// (0x000468dd) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004dea6) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004dea6) blid2_tripm_pane_g

0x8541,	// (0x000468f9) blid2_tripm_pane_t1_ParamLimits

0x8541,	// (0x000468f9) blid2_tripm_pane_t1

0x8553,	// (0x0004690b) blid2_tripm_pane_t2_ParamLimits

0x8553,	// (0x0004690b) blid2_tripm_pane_t2

0x8565,	// (0x0004691d) blid2_tripm_pane_t3_ParamLimits

0x8565,	// (0x0004691d) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004deb3) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004deb3) blid2_tripm_pane_t

0x8597,	// (0x0004694f) cell_blid2_satellite_pane_ParamLimits

0x8597,	// (0x0004694f) cell_blid2_satellite_pane

0x85b5,	// (0x0004696d) cell_blid2_satellite_pane_g1

0xddf7,	// (0x0004c1af) cell_blid2_satellite_pane_t1

0xce86,	// (0x0004b23e) blid2_speed_pane_g1

0xde05,	// (0x0004c1bd) blid2_speed_pane_t1

0xde13,	// (0x0004c1cb) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004debc) blid2_speed_pane_t

0xce86,	// (0x0004b23e) blid2_navig_ring_pane_g1

0x85be,	// (0x00046976) blid2_navig_ring_pane_g2

0x85c6,	// (0x0004697e) blid2_navig_ring_pane_g3

0x85ce,	// (0x00046986) blid2_navig_ring_pane_g4

0x85d6,	// (0x0004698e) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004dec1) blid2_navig_ring_pane_g

0xa290,	// (0x00048648) bg_popup_window_pane_cp011

0xde21,	// (0x0004c1d9) popup_blid2_search_window_g1

0xde29,	// (0x0004c1e1) popup_blid2_search_window_t1

0xde37,	// (0x0004c1ef) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004decc) popup_blid2_search_window_t

0xad04,	// (0x000490bc) main_browser_pane_g1

0xaa02,	// (0x00048dba) main_browser_pane_ParamLimits

0xb939,	// (0x00049cf1) bg_button_pane_cp011_ParamLimits

0x776c,	// (0x00045b24) cell_vitu2_function_pane_g1_ParamLimits

0xca4e,	// (0x0004ae06) bg_popup_sub_pane_cp22_ParamLimits

0x1056,	// (0x0003f40e) input_focus_pane_cp08_ParamLimits

0x8035,	// (0x000463ed) popup_vitu2_query_button_pane_ParamLimits

0x8035,	// (0x000463ed) popup_vitu2_query_button_pane

0x106d,	// (0x0003f425) popup_vitu2_query_input_button_pane

0xdac7,	// (0x0004be7f) popup_vitu2_query_window_g1_ParamLimits

0x1077,	// (0x0003f42f) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004ddd4) popup_vitu2_query_window_g_ParamLimits

0xa290,	// (0x00048648) bg_button_pane_cp026

0x85de,	// (0x00046996) popup_vitu2_query_input_button_pane_g1

0xa290,	// (0x00048648) bg_button_pane_cp025

0xde45,	// (0x0004c1fd) popup_vitu2_query_button_pane_t1

0x5d4d,	// (0x00044105) main_mp3_pane_t6

0x5d5d,	// (0x00044115) popup_slider_window_cp01

0x73d5,	// (0x0004578d) cam4_battery_pane

0x74b3,	// (0x0004586b) cam4_battery_pane_cp02

0x8346,	// (0x000466fe) cam4_battery_pane_cp01

0x8346,	// (0x000466fe) cam4_battery_pane_cp03

0xce86,	// (0x0004b23e) cam4_battery_pane_g1

0xdd53,	// (0x0004c10b) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004ded1) cam4_battery_pane_g

0xcd4c,	// (0x0004b104) popup_blid_sat_info2_window_t11

0xb45e,	// (0x00049816) aid_size_touch_mv_arrow_left_ParamLimits

0xb489,	// (0x00049841) aid_size_touch_mv_arrow_right_ParamLimits

0xb4e7,	// (0x0004989f) navi_pane_g1_ParamLimits

0xb4f3,	// (0x000498ab) navi_pane_g2_ParamLimits

0xb521,	// (0x000498d9) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0004d799) navi_pane_g_ParamLimits

0x457a,	// (0x00042932) navi_pane_mv_t1_ParamLimits

0x6892,	// (0x00044c4a) grid_imed_effect_pane_ParamLimits

0x30d7,	// (0x0004148f) aid_placing_vt_slider_lsc

0xac4f,	// (0x00049007) aid_placing_vt_slider_prt

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp01_ParamLimits

0xcfcd,	// (0x0004b385) popup_image_details_window_g1_ParamLimits

0xcfe0,	// (0x0004b398) popup_image_details_window_g2_ParamLimits

0xcff5,	// (0x0004b3ad) popup_image_details_window_g3_ParamLimits

0xcff5,	// (0x0004b3ad) popup_image_details_window_g3

0xf714,	// (0x0004dacc) popup_image_details_window_g_ParamLimits

0xd009,	// (0x0004b3c1) popup_image_details_window_t1_ParamLimits

0xd01b,	// (0x0004b3d3) popup_image_details_window_t2_ParamLimits

0xd034,	// (0x0004b3ec) popup_image_details_window_t3_ParamLimits

0xd048,	// (0x0004b400) popup_image_details_window_t4_ParamLimits

0xd063,	// (0x0004b41b) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0004dad3) popup_image_details_window_t_ParamLimits

0x8272,	// (0x0004662a) cl_header_name_pane_ParamLimits

0x8272,	// (0x0004662a) cl_header_name_pane

0x85e6,	// (0x0004699e) cl_header_name_pane_t1_ParamLimits

0x85e6,	// (0x0004699e) cl_header_name_pane_t1

0x85fd,	// (0x000469b5) cl_header_name_pane_t2_ParamLimits

0x85fd,	// (0x000469b5) cl_header_name_pane_t2

0x8627,	// (0x000469df) cl_header_name_pane_t3_ParamLimits

0x8627,	// (0x000469df) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004ded6) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004ded6) cl_header_name_pane_t

0xb5b0,	// (0x00049968) navi_pane_mv_g2_ParamLimits

0xd82a,	// (0x0004bbe2) field_vitu2_entry_pane_g1_ParamLimits

0xd836,	// (0x0004bbee) field_vitu2_entry_pane_g2_ParamLimits

0xd842,	// (0x0004bbfa) field_vitu2_entry_pane_g3_ParamLimits

0xd842,	// (0x0004bbfa) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004dcd3) field_vitu2_entry_pane_g_ParamLimits

0x7700,	// (0x00045ab8) cell_vitu2_itu_pane_g1_ParamLimits

0x7712,	// (0x00045aca) cell_vitu2_itu_pane_g2_ParamLimits

0x7712,	// (0x00045aca) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004dcdf) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004dcdf) cell_vitu2_itu_pane_g

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp05_ParamLimits

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp05

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp03

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp04

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp10_ParamLimits

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp10

0x122c,	// (0x0003f5e4) bg_vkb2_func_pane_cp08

0x821c,	// (0x000465d4) bg_vkb2_func_pane_cp06

0x822a,	// (0x000465e2) bg_vkb2_func_pane_cp07

0xdd75,	// (0x0004c12d) bg_vkb2_func_pane_cp11_ParamLimits

0xdd75,	// (0x0004c12d) bg_vkb2_func_pane_cp11

0xdd8a,	// (0x0004c142) bg_vkb2_func_pane_cp12_ParamLimits

0xdd8a,	// (0x0004c142) bg_vkb2_func_pane_cp12

0xa290,	// (0x00048648) bg_vkb2_func_pane_cp09

0xd862,	// (0x0004bc1a) bg_vkb2_func_pane_g1

0xae15,	// (0x000491cd) bg_vkb2_func_pane_g2

0xd86a,	// (0x0004bc22) bg_vkb2_func_pane_g3

0xd872,	// (0x0004bc2a) bg_vkb2_func_pane_g4

0xda8c,	// (0x0004be44) bg_vkb2_func_pane_g5

0xd88a,	// (0x0004bc42) bg_vkb2_func_pane_g6

0xd892,	// (0x0004bc4a) bg_vkb2_func_pane_g7

0xd882,	// (0x0004bc3a) bg_vkb2_func_pane_g8

0xadf5,	// (0x000491ad) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004dedd) bg_vkb2_func_pane_g

0x8533,	// (0x000468eb) blid2_tripm_pane_g6_ParamLimits

0x8533,	// (0x000468eb) blid2_tripm_pane_g6

0xd768,	// (0x0004bb20) mp4_progress_pane_g1

0x858b,	// (0x00046943) blid2_tripm_values_pane_ParamLimits

0x858b,	// (0x00046943) blid2_tripm_values_pane

0x864c,	// (0x00046a04) blid2_tripm_values_pane_t1

0x865a,	// (0x00046a12) blid2_tripm_values_pane_t2

0x8668,	// (0x00046a20) blid2_tripm_values_pane_t3

0x8676,	// (0x00046a2e) blid2_tripm_values_pane_t4

0x8684,	// (0x00046a3c) blid2_tripm_values_pane_t5

0x8692,	// (0x00046a4a) blid2_tripm_values_pane_t6

0x86a0,	// (0x00046a58) blid2_tripm_values_pane_t7

0x86ae,	// (0x00046a66) blid2_tripm_values_pane_t8

0x86bc,	// (0x00046a74) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004def0) blid2_tripm_values_pane_t

0x3115,	// (0x000414cd) call_video_pane_t1_ParamLimits

0x3132,	// (0x000414ea) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0004d622) call_video_pane_t_ParamLimits

0x0dc0,	// (0x0003f178) msg_header_pane_g1_ParamLimits

0xb78e,	// (0x00049b46) msg_header_pane_g2_ParamLimits

0xb78e,	// (0x00049b46) msg_header_pane_g2

0x0001,

0xf484,	// (0x0004d83c) msg_header_pane_g_ParamLimits

0xf484,	// (0x0004d83c) msg_header_pane_g

0xaa02,	// (0x00048dba) main_clock2_pane_ParamLimits

0x660b,	// (0x000449c3) grid_clock2_toolbar_pane_ParamLimits

0x660b,	// (0x000449c3) grid_clock2_toolbar_pane

0x660b,	// (0x000449c3) listscroll_clock2_pane_ParamLimits

0x660b,	// (0x000449c3) listscroll_clock2_pane

0x66ba,	// (0x00044a72) main_clock2_pane_t3_ParamLimits

0x66ba,	// (0x00044a72) main_clock2_pane_t3

0x66cc,	// (0x00044a84) main_clock2_pane_t4_ParamLimits

0x66cc,	// (0x00044a84) main_clock2_pane_t4

0xde53,	// (0x0004c20b) cell_clock2_toolbar_pane

0xde5b,	// (0x0004c213) cell_clock2_toolbar_pane_cp01

0xde5b,	// (0x0004c213) cell_clock2_toolbar_pane_cp02

0xde63,	// (0x0004c21b) cell_clock2_toolbar_pane_cp03

0xde6b,	// (0x0004c223) list_clock2_pane

0xb3e3,	// (0x0004979b) scroll_pane_cp10

0xde73,	// (0x0004c22b) list_single_clock2_pane_ParamLimits

0xde73,	// (0x0004c22b) list_single_clock2_pane

0xabb8,	// (0x00048f70) list_highlight_pane_cp08

0xde80,	// (0x0004c238) list_single_clock2_pane_t1

0xde8e,	// (0x0004c246) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004df03) list_single_clock2_pane_t

0xa290,	// (0x00048648) bg_button_pane_cp10

0xde9c,	// (0x0004c254) cell_clock2_toolbar_pane_g1

0x4aef,	// (0x00042ea7) aid_main_viewer_pane_g1_ParamLimits

0x4aef,	// (0x00042ea7) aid_main_viewer_pane_g1

0x4afb,	// (0x00042eb3) aid_main_viewer_pane_g2_ParamLimits

0x4afb,	// (0x00042eb3) aid_main_viewer_pane_g2

0x4b07,	// (0x00042ebf) aid_main_viewer_pane_g3_ParamLimits

0x4b07,	// (0x00042ebf) aid_main_viewer_pane_g3

0x4b18,	// (0x00042ed0) aid_main_viewer_pane_g4_ParamLimits

0x4b18,	// (0x00042ed0) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0004d84d) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0004d84d) aid_main_viewer_pane_g

0x52a2,	// (0x0004365a) main_calc_pane_ParamLimits

0x52af,	// (0x00043667) main_dialer2_pane_ParamLimits

0xa290,	// (0x00048648) main_cam6_pane

0xa290,	// (0x00048648) main_vid6_pane

0x6617,	// (0x000449cf) listscroll_gen_pane_cp06_ParamLimits

0x6617,	// (0x000449cf) listscroll_gen_pane_cp06

0x66de,	// (0x00044a96) main_clock2_pane_t5_ParamLimits

0x66de,	// (0x00044a96) main_clock2_pane_t5

0x672b,	// (0x00044ae3) aid_call2_pane_cp10_ParamLimits

0x673d,	// (0x00044af5) aid_call_pane_cp10_ParamLimits

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x674f,	// (0x00044b07) popup_clock_analogue_window_cp10_g3_ParamLimits

0x674f,	// (0x00044b07) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb452,	// (0x0004980a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0004db88) popup_clock_analogue_window_cp10_g_ParamLimits

0x6765,	// (0x00044b1d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6f7f,	// (0x00045337) cell_dialer2_keypad_pane_g2_ParamLimits

0x6f7f,	// (0x00045337) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004dc72) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004dc72) cell_dialer2_keypad_pane_g

0x6f9b,	// (0x00045353) cell_dialer2_keypad_pane_t1

0x7a49,	// (0x00045e01) main_cset_text2_pane_ParamLimits

0x7a49,	// (0x00045e01) main_cset_text2_pane

0xdcb3,	// (0x0004c06b) area_vitu2_query_pane_g1_ParamLimits

0x1157,	// (0x0003f50f) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004de27) area_vitu2_query_pane_g_ParamLimits

0x1208,	// (0x0003f5c0) area_vitu2_query_pane_t7_ParamLimits

0x1208,	// (0x0003f5c0) area_vitu2_query_pane_t7

0x821c,	// (0x000465d4) bg_button_pane_cp018_ParamLimits

0x822a,	// (0x000465e2) bg_button_pane_cp021_ParamLimits

0x122c,	// (0x0003f5e4) bg_button_pane_cp022_ParamLimits

0x122c,	// (0x0003f5e4) bg_vkb2_func_pane_cp08_ParamLimits

0x821c,	// (0x000465d4) bg_vkb2_func_pane_cp06_ParamLimits

0x822a,	// (0x000465e2) bg_vkb2_func_pane_cp07_ParamLimits

0x123d,	// (0x0003f5f5) input_focus_pane_cp09_ParamLimits

0x86ca,	// (0x00046a82) cam6_autofocus_pane_ParamLimits

0x86ca,	// (0x00046a82) cam6_autofocus_pane

0x86ec,	// (0x00046aa4) cam6_image_uncrop_pane_ParamLimits

0x86ec,	// (0x00046aa4) cam6_image_uncrop_pane

0x8719,	// (0x00046ad1) cam6_indi_pane_ParamLimits

0x8719,	// (0x00046ad1) cam6_indi_pane

0x8733,	// (0x00046aeb) cam6_mode_pane_ParamLimits

0x8733,	// (0x00046aeb) cam6_mode_pane

0x8747,	// (0x00046aff) cam6_timer_pane_ParamLimits

0x8747,	// (0x00046aff) cam6_timer_pane

0x8753,	// (0x00046b0b) cam6_zoom_pane_ParamLimits

0x8753,	// (0x00046b0b) cam6_zoom_pane

0x876f,	// (0x00046b27) cam6_mode_pane_g1_ParamLimits

0x876f,	// (0x00046b27) cam6_mode_pane_g1

0x877b,	// (0x00046b33) cam6_mode_pane_g2_ParamLimits

0x877b,	// (0x00046b33) cam6_mode_pane_g2

0x8787,	// (0x00046b3f) cam6_mode_pane_g3_ParamLimits

0x8787,	// (0x00046b3f) cam6_mode_pane_g3

0x8793,	// (0x00046b4b) cam6_mode_pane_g4_ParamLimits

0x8793,	// (0x00046b4b) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004df08) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004df08) cam6_mode_pane_g

0xd7b5,	// (0x0004bb6d) bg_tb_trans_pane_cp08_ParamLimits

0xd7b5,	// (0x0004bb6d) bg_tb_trans_pane_cp08

0xdea4,	// (0x0004c25c) cam6_battery_pane_ParamLimits

0xdea4,	// (0x0004c25c) cam6_battery_pane

0xdeba,	// (0x0004c272) cam6_indi_pane_g1_ParamLimits

0xdeba,	// (0x0004c272) cam6_indi_pane_g1

0xdecc,	// (0x0004c284) cam6_indi_pane_g2_ParamLimits

0xdecc,	// (0x0004c284) cam6_indi_pane_g2

0xdede,	// (0x0004c296) cam6_indi_pane_g3_ParamLimits

0xdede,	// (0x0004c296) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004df11) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004df11) cam6_indi_pane_g

0xdef0,	// (0x0004c2a8) cam6_indi_pane_t1_ParamLimits

0xdef0,	// (0x0004c2a8) cam6_indi_pane_t1

0x752f,	// (0x000458e7) cam6_autofocus_pane_g1

0x7537,	// (0x000458ef) cam6_autofocus_pane_g2

0x753f,	// (0x000458f7) cam6_autofocus_pane_g3

0x7547,	// (0x000458ff) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004df18) cam6_autofocus_pane_g

0xdf16,	// (0x0004c2ce) cam6_timer_pane_g1

0xdf1e,	// (0x0004c2d6) cam6_timer_pane_t1

0xdf2c,	// (0x0004c2e4) cam6_zoom_cont_pane

0xdf34,	// (0x0004c2ec) cam6_zoom_pane_g1

0xdf3c,	// (0x0004c2f4) cam6_zoom_pane_g2

0x879f,	// (0x00046b57) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004df21) cam6_zoom_pane_g

0xce86,	// (0x0004b23e) cam6_battery_pane_g1

0xce86,	// (0x0004b23e) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0004da90) cam6_battery_pane_g

0xdf44,	// (0x0004c2fc) cam6_zoom_cont_pane_g1

0xdf4d,	// (0x0004c305) cam6_zoom_cont_pane_g2

0xdf56,	// (0x0004c30e) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004df28) cam6_zoom_cont_pane_g

0x87bc,	// (0x00046b74) cam6_mode_pane_cp_ParamLimits

0x87bc,	// (0x00046b74) cam6_mode_pane_cp

0x8753,	// (0x00046b0b) cam6_zoom_pane_cp_ParamLimits

0x8753,	// (0x00046b0b) cam6_zoom_pane_cp

0x87d0,	// (0x00046b88) vid6_image_uncrop_cif_pane_ParamLimits

0x87d0,	// (0x00046b88) vid6_image_uncrop_cif_pane

0x87fc,	// (0x00046bb4) vid6_image_uncrop_nhd_pane_ParamLimits

0x87fc,	// (0x00046bb4) vid6_image_uncrop_nhd_pane

0x86ec,	// (0x00046aa4) vid6_image_uncrop_vga_pane_ParamLimits

0x86ec,	// (0x00046aa4) vid6_image_uncrop_vga_pane

0x881b,	// (0x00046bd3) vid6_image_uncrop_wvga_pane_ParamLimits

0x881b,	// (0x00046bd3) vid6_image_uncrop_wvga_pane

0x883a,	// (0x00046bf2) vid6_indi_pane_ParamLimits

0x883a,	// (0x00046bf2) vid6_indi_pane

0xd7b5,	// (0x0004bb6d) bg_tb_trans_pane_cp09_ParamLimits

0xd7b5,	// (0x0004bb6d) bg_tb_trans_pane_cp09

0xdf6e,	// (0x0004c326) cam6_battery_pane_cp_ParamLimits

0xdf6e,	// (0x0004c326) cam6_battery_pane_cp

0xdf7a,	// (0x0004c332) vid6_indi_pane_g1_ParamLimits

0xdf7a,	// (0x0004c332) vid6_indi_pane_g1

0xdf8c,	// (0x0004c344) vid6_indi_pane_g2_ParamLimits

0xdf8c,	// (0x0004c344) vid6_indi_pane_g2

0xdf9e,	// (0x0004c356) vid6_indi_pane_g3_ParamLimits

0xdf9e,	// (0x0004c356) vid6_indi_pane_g3

0xdfb5,	// (0x0004c36d) vid6_indi_pane_g4_ParamLimits

0xdfb5,	// (0x0004c36d) vid6_indi_pane_g4

0xdfcc,	// (0x0004c384) vid6_indi_pane_g5_ParamLimits

0xdfcc,	// (0x0004c384) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004df2f) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004df2f) vid6_indi_pane_g

0xdfe6,	// (0x0004c39e) vid6_indi_pane_t1_ParamLimits

0xdfe6,	// (0x0004c39e) vid6_indi_pane_t1

0xdffc,	// (0x0004c3b4) vid6_indi_pane_t2_ParamLimits

0xdffc,	// (0x0004c3b4) vid6_indi_pane_t2

0xe024,	// (0x0004c3dc) vid6_indi_pane_t3_ParamLimits

0xe024,	// (0x0004c3dc) vid6_indi_pane_t3

0xe04c,	// (0x0004c404) vid6_indi_pane_t4_ParamLimits

0xe04c,	// (0x0004c404) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004df3a) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004df3a) vid6_indi_pane_t

0xe070,	// (0x0004c428) wait_bar_pane_cp08

0x885f,	// (0x00046c17) main_cset_text2_pane_t1_ParamLimits

0x885f,	// (0x00046c17) main_cset_text2_pane_t1

0x87a7,	// (0x00046b5f) listscroll_gen_pane_cp06_t1_ParamLimits

0x87a7,	// (0x00046b5f) listscroll_gen_pane_cp06_t1

0xa290,	// (0x00048648) main_cam6_set_pane

0xd0ad,	// (0x0004b465) bg_tb_trans_pane_cp06_ParamLimits

0x73dd,	// (0x00045795) cam4_indicators_pane_g1_ParamLimits

0x73ee,	// (0x000457a6) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004dcaf) cam4_indicators_pane_g_ParamLimits

0x7406,	// (0x000457be) cam4_indicators_pane_t1_ParamLimits

0xb939,	// (0x00049cf1) bg_tb_trans_pane_cp07_ParamLimits

0x74bd,	// (0x00045875) vid4_indicators_pane_g1_ParamLimits

0x74d3,	// (0x0004588b) vid4_indicators_pane_g2_ParamLimits

0x74e7,	// (0x0004589f) vid4_indicators_pane_g3_ParamLimits

0x74fa,	// (0x000458b2) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004dcc1) vid4_indicators_pane_g_ParamLimits

0x7518,	// (0x000458d0) vid4_indicators_pane_t1_ParamLimits

0x834e,	// (0x00046706) vid4_progress_pane_g1_ParamLimits

0x835e,	// (0x00046716) vid4_progress_pane_g2_ParamLimits

0x836e,	// (0x00046726) vid4_progress_pane_g3_ParamLimits

0x73ee,	// (0x000457a6) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004de72) vid4_progress_pane_g_ParamLimits

0x8380,	// (0x00046738) vid4_progress_pane_t1_ParamLimits

0x8396,	// (0x0004674e) vid4_progress_pane_t2_ParamLimits

0x83ab,	// (0x00046763) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004de7d) vid4_progress_pane_t_ParamLimits

0x83c0,	// (0x00046778) wait_bar_pane_cp07_ParamLimits

0x8886,	// (0x00046c3e) main_cam6_set_pane_g2_ParamLimits

0x8886,	// (0x00046c3e) main_cam6_set_pane_g2

0x8892,	// (0x00046c4a) main_cset6_listscroll_pane_ParamLimits

0x8892,	// (0x00046c4a) main_cset6_listscroll_pane

0x88bf,	// (0x00046c77) main_cset6_slider_pane_ParamLimits

0x88bf,	// (0x00046c77) main_cset6_slider_pane

0x88cb,	// (0x00046c83) main_cset6_text2_pane_ParamLimits

0x88cb,	// (0x00046c83) main_cset6_text2_pane

0xe07f,	// (0x0004c437) main_cset6_text_pane

0xe087,	// (0x0004c43f) main_cset_list_pane_copy1_ParamLimits

0xe087,	// (0x0004c43f) main_cset_list_pane_copy1

0xe097,	// (0x0004c44f) scroll_pane_cp028_copy1

0x88de,	// (0x00046c96) cset_list_set_pane_copy1

0x88ee,	// (0x00046ca6) aid_position_infowindow_above_copy1

0x88f6,	// (0x00046cae) aid_position_infowindow_below_copy1

0x127b,	// (0x0003f633) cset_list_set_pane_g1_copy1

0x1283,	// (0x0003f63b) cset_list_set_pane_g3_copy1_ParamLimits

0x1283,	// (0x0003f63b) cset_list_set_pane_g3_copy1

0x1292,	// (0x0003f64a) cset_list_set_pane_t1_copy1_ParamLimits

0x1292,	// (0x0003f64a) cset_list_set_pane_t1_copy1

0xb939,	// (0x00049cf1) list_highlight_pane_cp021_copy1_ParamLimits

0xb939,	// (0x00049cf1) list_highlight_pane_cp021_copy1

0xe0a0,	// (0x0004c458) cset6_slider_pane_ParamLimits

0xe0a0,	// (0x0004c458) cset6_slider_pane

0xe0cc,	// (0x0004c484) main_cset6_slider_pane_g1_ParamLimits

0xe0cc,	// (0x0004c484) main_cset6_slider_pane_g1

0x88fe,	// (0x00046cb6) main_cset6_slider_pane_g2_ParamLimits

0x88fe,	// (0x00046cb6) main_cset6_slider_pane_g2

0xe0f4,	// (0x0004c4ac) main_cset6_slider_pane_g3_ParamLimits

0xe0f4,	// (0x0004c4ac) main_cset6_slider_pane_g3

0x8926,	// (0x00046cde) main_cset6_slider_pane_g4_ParamLimits

0x8926,	// (0x00046cde) main_cset6_slider_pane_g4

0x8932,	// (0x00046cea) main_cset6_slider_pane_g5_ParamLimits

0x8932,	// (0x00046cea) main_cset6_slider_pane_g5

0xd995,	// (0x0004bd4d) main_cset6_slider_pane_g7_ParamLimits

0xd995,	// (0x0004bd4d) main_cset6_slider_pane_g7

0xd9a1,	// (0x0004bd59) main_cset6_slider_pane_g8_ParamLimits

0xd9a1,	// (0x0004bd59) main_cset6_slider_pane_g8

0x893e,	// (0x00046cf6) main_cset6_slider_pane_g9_ParamLimits

0x893e,	// (0x00046cf6) main_cset6_slider_pane_g9

0x894a,	// (0x00046d02) main_cset6_slider_pane_g10_ParamLimits

0x894a,	// (0x00046d02) main_cset6_slider_pane_g10

0x8956,	// (0x00046d0e) main_cset6_slider_pane_g11_ParamLimits

0x8956,	// (0x00046d0e) main_cset6_slider_pane_g11

0x8962,	// (0x00046d1a) main_cset6_slider_pane_g12_ParamLimits

0x8962,	// (0x00046d1a) main_cset6_slider_pane_g12

0x896e,	// (0x00046d26) main_cset6_slider_pane_g13_ParamLimits

0x896e,	// (0x00046d26) main_cset6_slider_pane_g13

0x897a,	// (0x00046d32) main_cset6_slider_pane_g14_ParamLimits

0x897a,	// (0x00046d32) main_cset6_slider_pane_g14

0x8986,	// (0x00046d3e) main_cset6_slider_pane_g15_ParamLimits

0x8986,	// (0x00046d3e) main_cset6_slider_pane_g15

0x899e,	// (0x00046d56) main_cset6_slider_pane_g16_ParamLimits

0x899e,	// (0x00046d56) main_cset6_slider_pane_g16

0x89aa,	// (0x00046d62) main_cset6_slider_pane_g17_ParamLimits

0x89aa,	// (0x00046d62) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004df43) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004df43) main_cset6_slider_pane_g

0xe100,	// (0x0004c4b8) main_cset6_slider_pane_t1_ParamLimits

0xe100,	// (0x0004c4b8) main_cset6_slider_pane_t1

0x89ce,	// (0x00046d86) main_cset6_slider_pane_t2_ParamLimits

0x89ce,	// (0x00046d86) main_cset6_slider_pane_t2

0x89f9,	// (0x00046db1) main_cset6_slider_pane_t3_ParamLimits

0x89f9,	// (0x00046db1) main_cset6_slider_pane_t3

0x8a24,	// (0x00046ddc) main_cset6_slider_pane_t4_ParamLimits

0x8a24,	// (0x00046ddc) main_cset6_slider_pane_t4

0x8a4f,	// (0x00046e07) main_cset6_slider_pane_t5_ParamLimits

0x8a4f,	// (0x00046e07) main_cset6_slider_pane_t5

0xe141,	// (0x0004c4f9) main_cset6_slider_pane_t7_ParamLimits

0xe141,	// (0x0004c4f9) main_cset6_slider_pane_t7

0x8a7a,	// (0x00046e32) main_cset6_slider_pane_t8_ParamLimits

0x8a7a,	// (0x00046e32) main_cset6_slider_pane_t8

0x8a9e,	// (0x00046e56) main_cset6_slider_pane_t9_ParamLimits

0x8a9e,	// (0x00046e56) main_cset6_slider_pane_t9

0x8ac2,	// (0x00046e7a) main_cset6_slider_pane_t10_ParamLimits

0x8ac2,	// (0x00046e7a) main_cset6_slider_pane_t10

0x8ae6,	// (0x00046e9e) main_cset6_slider_pane_t11_ParamLimits

0x8ae6,	// (0x00046e9e) main_cset6_slider_pane_t11

0xe177,	// (0x0004c52f) main_cset6_slider_pane_t14_ParamLimits

0xe177,	// (0x0004c52f) main_cset6_slider_pane_t14

0xe1b0,	// (0x0004c568) main_cset6_slider_pane_t15_ParamLimits

0xe1b0,	// (0x0004c568) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004df68) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004df68) main_cset6_slider_pane_t

0xe1e9,	// (0x0004c5a1) cset_slider_pane_g1_copy1

0xe1f2,	// (0x0004c5aa) cset_slider_pane_g2_copy1

0xe1fb,	// (0x0004c5b3) cset_slider_pane_g3_copy1

0xa290,	// (0x00048648) bg_popup_sub_pane_cp011_copy1

0xe204,	// (0x0004c5bc) main_cset_text_pane_g1_copy1

0xdadb,	// (0x0004be93) main_cset_text_pane_t1_copy1

0xdae9,	// (0x0004bea1) main_cset_text_pane_t2_copy1

0xdaf7,	// (0x0004beaf) main_cset_text_pane_t3_copy1

0xdb05,	// (0x0004bebd) main_cset_text_pane_t4_copy1

0xdb13,	// (0x0004becb) main_cset_text_pane_t5_copy1

0xe20c,	// (0x0004c5c4) main_cset_text_pane_t6_copy1

0xe21a,	// (0x0004c5d2) main_cset_text_pane_t7_copy1

0x8b0a,	// (0x00046ec2) main_cset_text2_pane_t1_copy1

0xb939,	// (0x00049cf1) main_ncimui_pane

0x5308,	// (0x000436c0) popup_query_ncimui_window_ParamLimits

0x5308,	// (0x000436c0) popup_query_ncimui_window

0x0e71,	// (0x0003f229) field_cale_ev2_pane_g4_ParamLimits

0x0e71,	// (0x0003f229) field_cale_ev2_pane_g4

0x6c57,	// (0x0004500f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6c57,	// (0x0004500f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0004dc49) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0004dc49) cell_video_dialer_keypad_pane_g

0x6c6f,	// (0x00045027) cell_video_dialer_keypad_pane_t1

0xa290,	// (0x00048648) bg_popup_window_pane_cp012

0xb2cf,	// (0x00049687) heading_pane_cp06

0xe246,	// (0x0004c5fe) ncim_query_content_pane

0xa290,	// (0x00048648) bg_popup_heading_pane_cp01

0xe24e,	// (0x0004c606) ncim_heading_pane_t1

0xe25c,	// (0x0004c614) ncim_indicator_popup_pane

0xe26e,	// (0x0004c626) ncim_query_button_pane

0xe284,	// (0x0004c63c) ncim_query_content_pane_t1

0xe296,	// (0x0004c64e) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004dfac) ncim_query_content_pane_t

0xe2d0,	// (0x0004c688) ncim_query_list_pane

0xe2e2,	// (0x0004c69a) ncim_query_popup_pane

0xe25c,	// (0x0004c614) ncim_indicator_popup_pane_ParamLimits

0x8c66,	// (0x0004701e) ncim_query_content_pane_g1_ParamLimits

0x8c66,	// (0x0004701e) ncim_query_content_pane_g1

0xe284,	// (0x0004c63c) ncim_query_content_pane_t1_ParamLimits

0xe296,	// (0x0004c64e) ncim_query_content_pane_t2_ParamLimits

0x8c72,	// (0x0004702a) ncim_query_content_pane_t3_ParamLimits

0x8c72,	// (0x0004702a) ncim_query_content_pane_t3

0x8c8f,	// (0x00047047) ncim_query_content_pane_t4_ParamLimits

0x8c8f,	// (0x00047047) ncim_query_content_pane_t4

0x8cac,	// (0x00047064) ncim_query_content_pane_t5_ParamLimits

0x8cac,	// (0x00047064) ncim_query_content_pane_t5

0xe2a8,	// (0x0004c660) ncim_query_content_pane_t6_ParamLimits

0xe2a8,	// (0x0004c660) ncim_query_content_pane_t6

0xfbf4,	// (0x0004dfac) ncim_query_content_pane_t_ParamLimits

0xe2d0,	// (0x0004c688) ncim_query_list_pane_ParamLimits

0xe2e2,	// (0x0004c69a) ncim_query_popup_pane_ParamLimits

0xe2f6,	// (0x0004c6ae) wait_bar_pane_cp04

0xa290,	// (0x00048648) input_focus_pane_cp011

0xe2fe,	// (0x0004c6b6) ncim_query_popup_pane_t1

0xe30c,	// (0x0004c6c4) ncim_list_query_list_pane_ParamLimits

0xe30c,	// (0x0004c6c4) ncim_list_query_list_pane

0xa290,	// (0x00048648) bg_button_pane_cp027

0xe31f,	// (0x0004c6d7) ncim_query_button_pane_g1

0xa290,	// (0x00048648) list_highlight_pane_cp012

0xe329,	// (0x0004c6e1) ncim_list_query_list_pane_g1

0xe331,	// (0x0004c6e9) ncim_list_query_list_pane_t1

0x73fa,	// (0x000457b2) cam4_indicators_pane_g3_ParamLimits

0x73fa,	// (0x000457b2) cam4_indicators_pane_g3

0x7506,	// (0x000458be) vid4_indicators_pane_g5_ParamLimits

0x7506,	// (0x000458be) vid4_indicators_pane_g5

0x73fa,	// (0x000457b2) vid4_progress_pane_g5_ParamLimits

0x73fa,	// (0x000457b2) vid4_progress_pane_g5

0x8b3c,	// (0x00046ef4) main_ncimui_pane_g1

0x8ba8,	// (0x00046f60) ncimui_group_query_pane_ParamLimits

0x8ba8,	// (0x00046f60) ncimui_group_query_pane

0x8c02,	// (0x00046fba) ncimui_list_pane_ParamLimits

0x8c02,	// (0x00046fba) ncimui_list_pane

0x8c29,	// (0x00046fe1) ncimui_text_pane_ParamLimits

0x8c29,	// (0x00046fe1) ncimui_text_pane

0x8cc9,	// (0x00047081) ncimui_text_pane_t1_ParamLimits

0x8cc9,	// (0x00047081) ncimui_text_pane_t1

0xe33f,	// (0x0004c6f7) ncimui_list_single_graphic_pane_ParamLimits

0xe33f,	// (0x0004c6f7) ncimui_list_single_graphic_pane

0x8ce8,	// (0x000470a0) ncimui_query_pane_ParamLimits

0x8ce8,	// (0x000470a0) ncimui_query_pane

0xa290,	// (0x00048648) list_highlight_pane_cp013

0xe34f,	// (0x0004c707) ncim_list_query_list_pane_t1_copy1

0xe329,	// (0x0004c6e1) ncim_list_single_graphic_pane_g1

0x8cfb,	// (0x000470b3) ncim_query_button_pane_cp01

0x8d07,	// (0x000470bf) ncim_query_entry_pane_ParamLimits

0x8d07,	// (0x000470bf) ncim_query_entry_pane

0x8d1a,	// (0x000470d2) ncimui_query_pane_g1

0x8d26,	// (0x000470de) ncimui_query_pane_t1_ParamLimits

0x8d26,	// (0x000470de) ncimui_query_pane_t1

0xb939,	// (0x00049cf1) input_focus_pane_cp012

0xe35d,	// (0x0004c715) ncim_query_entry_pane_t1

0xaa02,	// (0x00048dba) main_im_pane_ParamLimits

0xb939,	// (0x00049cf1) main_mobtv_pane_ParamLimits

0xb939,	// (0x00049cf1) main_mobtv_pane

0x89b6,	// (0x00046d6e) main_cset6_slider_pane_g18_ParamLimits

0x89b6,	// (0x00046d6e) main_cset6_slider_pane_g18

0x89c2,	// (0x00046d7a) main_cset6_slider_pane_g19_ParamLimits

0x89c2,	// (0x00046d7a) main_cset6_slider_pane_g19

0xd842,	// (0x0004bbfa) bg_main_mobtv_pane_ParamLimits

0xd842,	// (0x0004bbfa) bg_main_mobtv_pane

0x8d3f,	// (0x000470f7) main_mobtv_info_pane

0x8d4a,	// (0x00047102) main_mobtv_loading_pane_ParamLimits

0x8d4a,	// (0x00047102) main_mobtv_loading_pane

0xe36f,	// (0x0004c727) main_mobtv_pg_channel_list_pane

0xe379,	// (0x0004c731) main_mobtv_pg_hdr_pane

0x8d57,	// (0x0004710f) main_mobtv_programe_curr_pane_ParamLimits

0x8d57,	// (0x0004710f) main_mobtv_programe_curr_pane

0x8d64,	// (0x0004711c) main_mobtv_programe_next_pane_ParamLimits

0x8d64,	// (0x0004711c) main_mobtv_programe_next_pane

0xe382,	// (0x0004c73a) popup_mobtv_noti_window

0xce86,	// (0x0004b23e) main_tv_pg_hdr_pane_g1

0xe38c,	// (0x0004c744) main_tv_pg_hdr_pane_g2

0xe394,	// (0x0004c74c) main_tv_pg_hdr_pane_g3

0xe39c,	// (0x0004c754) main_tv_pg_hdr_pane_g4

0xe3a4,	// (0x0004c75c) main_tv_pg_hdr_pane_g5

0xe3ae,	// (0x0004c766) main_tv_pg_hdr_pane_g6

0xe3b8,	// (0x0004c770) main_tv_pg_hdr_pane_g7

0xe3c2,	// (0x0004c77a) main_tv_pg_hdr_pane_g8

0xe3cc,	// (0x0004c784) main_tv_pg_hdr_pane_g9

0xe3d6,	// (0x0004c78e) main_tv_pg_hdr_pane_g10

0xe3e0,	// (0x0004c798) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004dfb9) main_tv_pg_hdr_pane_g

0xe3ea,	// (0x0004c7a2) main_tv_pg_hdr_pane_t1

0xe401,	// (0x0004c7b9) main_tv_pg_hdr_pane_t2

0xe40f,	// (0x0004c7c7) main_tv_pg_hdr_pane_t3

0xe41f,	// (0x0004c7d7) main_tv_pg_hdr_pane_t4

0xe42f,	// (0x0004c7e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004dfd0) main_tv_pg_hdr_pane_t

0xe43f,	// (0x0004c7f7) single_mobtv_pg_channel_pane_ParamLimits

0xe43f,	// (0x0004c7f7) single_mobtv_pg_channel_pane

0xe451,	// (0x0004c809) single_mobtv_pg_channel_table_pane

0xe45a,	// (0x0004c812) single_mobtv_pg_channel_thumb_pane

0xe463,	// (0x0004c81b) single_tv_pg_channel_pane_g1

0xe46c,	// (0x0004c824) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004dfdb) single_tv_pg_channel_pane_g

0xd0ad,	// (0x0004b465) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0ad,	// (0x0004b465) bg_single_mobtv_pg_channel_thumb_pane

0xe475,	// (0x0004c82d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe475,	// (0x0004c82d) single_mobtv_pg_channel_thumb_pane_g1

0xe483,	// (0x0004c83b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe483,	// (0x0004c83b) single_mobtv_pg_channel_thumb_pane_g2

0xe48f,	// (0x0004c847) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe48f,	// (0x0004c847) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004dfe0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004dfe0) single_mobtv_pg_channel_thumb_pane_g

0xe49b,	// (0x0004c853) single_mobtv_pg_channel_thumb_pane_t1

0xe4a9,	// (0x0004c861) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004dfe7) single_mobtv_pg_channel_thumb_pane_t

0xce86,	// (0x0004b23e) bg_single_mobtv_pg_channel_table_pane_g1

0xce86,	// (0x0004b23e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0004da90) bg_single_mobtv_pg_channel_table_pane_g

0xe4b7,	// (0x0004c86f) single_mobtv_pg_channel_table_pane_t1

0xe4c5,	// (0x0004c87d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004dfec) single_mobtv_pg_channel_table_pane_t

0x8d79,	// (0x00047131) main_mobtv_info_pane_g1_ParamLimits

0x8d79,	// (0x00047131) main_mobtv_info_pane_g1

0x8d95,	// (0x0004714d) main_mobtv_info_pane_t1_ParamLimits

0x8d95,	// (0x0004714d) main_mobtv_info_pane_t1

0x8e0d,	// (0x000471c5) main_mobtv_info_pane_t2_ParamLimits

0x8e0d,	// (0x000471c5) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004dff6) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004dff6) main_mobtv_info_pane_t

0x8e9e,	// (0x00047256) wait_bar_pane_cp05

0x8eb0,	// (0x00047268) main_mobtv_loading_pane_g1_ParamLimits

0x8eb0,	// (0x00047268) main_mobtv_loading_pane_g1

0x8ebc,	// (0x00047274) main_mobtv_loading_pane_g2_ParamLimits

0x8ebc,	// (0x00047274) main_mobtv_loading_pane_g2

0x8ec8,	// (0x00047280) main_mobtv_loading_pane_g3_ParamLimits

0x8ec8,	// (0x00047280) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004dffd) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004dffd) main_mobtv_loading_pane_g

0xe4d3,	// (0x0004c88b) main_mobtv_loading_pane_t1_ParamLimits

0xe4d3,	// (0x0004c88b) main_mobtv_loading_pane_t1

0xe4eb,	// (0x0004c8a3) main_mobtv_loading_pane_t2_ParamLimits

0xe4eb,	// (0x0004c8a3) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004e004) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004e004) main_mobtv_loading_pane_t

0x8ed6,	// (0x0004728e) wait_bar_pane_cp06_ParamLimits

0x8ed6,	// (0x0004728e) wait_bar_pane_cp06

0xe50f,	// (0x0004c8c7) main_mobtv_programe_curr_pane_t1

0xe51d,	// (0x0004c8d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004e009) main_mobtv_programe_curr_pane_t

0xe52b,	// (0x0004c8e3) main_mobtv_programe_next_pane_t1

0xe539,	// (0x0004c8f1) main_mobtv_programe_next_pane_t2

0xe547,	// (0x0004c8ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004e00e) main_mobtv_programe_next_pane_t

0xa290,	// (0x00048648) bg_popup_mobtv_noti_window_pane

0xe555,	// (0x0004c90d) popup_mobtv_noti_window_g1

0xe55d,	// (0x0004c915) popup_mobtv_noti_window_t1

0xe56b,	// (0x0004c923) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004e015) popup_mobtv_noti_window_t

0xce86,	// (0x0004b23e) bg_popup_mobtv_noti_window_pane_g1

0xa290,	// (0x00048648) sc_clock_pane

0xa290,	// (0x00048648) main_fs_bigclock_pane

0x8579,	// (0x00046931) blid2_tripm_pane_t4_ParamLimits

0x8579,	// (0x00046931) blid2_tripm_pane_t4

0x8ee2,	// (0x0004729a) sc_clock_pane_g1_ParamLimits

0x8ee2,	// (0x0004729a) sc_clock_pane_g1

0x8ef0,	// (0x000472a8) sc_clock_pane_t1_ParamLimits

0x8ef0,	// (0x000472a8) sc_clock_pane_t1

0x8f05,	// (0x000472bd) sc_clock_pane_t2_ParamLimits

0x8f05,	// (0x000472bd) sc_clock_pane_t2

0x8f17,	// (0x000472cf) sc_clock_pane_t3_ParamLimits

0x8f17,	// (0x000472cf) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004e01a) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004e01a) sc_clock_pane_t

0x98bf,	// (0x00047c77) main_fs_bigclock_indicator_pane_ParamLimits

0x98bf,	// (0x00047c77) main_fs_bigclock_indicator_pane

0x8fa6,	// (0x0004735e) main_fs_bigclock_pane_g1_ParamLimits

0x8fa6,	// (0x0004735e) main_fs_bigclock_pane_g1

0x98cb,	// (0x00047c83) main_fs_bigclock_pane_t1_ParamLimits

0x98cb,	// (0x00047c83) main_fs_bigclock_pane_t1

0x98dd,	// (0x00047c95) main_fs_bigclock_pane_t2_ParamLimits

0x98dd,	// (0x00047c95) main_fs_bigclock_pane_t2

0x98f1,	// (0x00047ca9) main_fs_bigclock_pane_t3_ParamLimits

0x98f1,	// (0x00047ca9) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004e224) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004e224) main_fs_bigclock_pane_t

0xecf7,	// (0x0004d0af) main_fs_bigclock_indicator_pane_g1

0xe276,	// (0x0004c62e) ncim_query_content_pane_g2_ParamLimits

0xe276,	// (0x0004c62e) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004dfa7) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004dfa7) ncim_query_content_pane_g

0x8f29,	// (0x000472e1) sc_clock_pane_t4_ParamLimits

0x8f29,	// (0x000472e1) sc_clock_pane_t4

0xb939,	// (0x00049cf1) main_radioblah_pane

0x729e,	// (0x00045656) cell_call4_button_pane_t1_copy1_ParamLimits

0x729e,	// (0x00045656) cell_call4_button_pane_t1_copy1

0x8b58,	// (0x00046f10) main_ncimui_pane_t1_ParamLimits

0x8b58,	// (0x00046f10) main_ncimui_pane_t1

0x8b72,	// (0x00046f2a) main_ncimui_pane_t2_ParamLimits

0x8b72,	// (0x00046f2a) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004dfa0) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004dfa0) main_ncimui_pane_t

0xe579,	// (0x0004c931) main_radioblah_anim_pane_ParamLimits

0xe579,	// (0x0004c931) main_radioblah_anim_pane

0xe58a,	// (0x0004c942) main_radioblah_info_pane_ParamLimits

0xe58a,	// (0x0004c942) main_radioblah_info_pane

0xe59e,	// (0x0004c956) main_radioblah_pane_t1_ParamLimits

0xe59e,	// (0x0004c956) main_radioblah_pane_t1

0xe5ba,	// (0x0004c972) main_radioblah_pane_t2_ParamLimits

0xe5ba,	// (0x0004c972) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004e03b) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004e03b) main_radioblah_pane_t

0x9145,	// (0x000474fd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9145,	// (0x000474fd) main_radioblah_rocker_ctrl_pane

0xe602,	// (0x0004c9ba) main_radioblah_info_pane_t1_ParamLimits

0xe602,	// (0x0004c9ba) main_radioblah_info_pane_t1

0x918e,	// (0x00047546) main_radioblah_info_pane_t2_ParamLimits

0x918e,	// (0x00047546) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004e044) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004e044) main_radioblah_info_pane_t

0xce86,	// (0x0004b23e) main_radioblah_rocker_ctrl_pane_g1

0x923e,	// (0x000475f6) main_radioblah_rocker_ctrl_pane_g2

0x9246,	// (0x000475fe) main_radioblah_rocker_ctrl_pane_g3

0x924e,	// (0x00047606) main_radioblah_rocker_ctrl_pane_g4

0x9256,	// (0x0004760e) main_radioblah_rocker_ctrl_pane_g5

0x925e,	// (0x00047616) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004e04d) main_radioblah_rocker_ctrl_pane_g

0x8b0a,	// (0x00046ec2) main_cset_text2_pane_t1_copy1_ParamLimits

0x7327,	// (0x000456df) cam4_image_uncrop_qvga_pane

0x746c,	// (0x00045824) vid4_image_uncrop_qcif_pane

0x870b,	// (0x00046ac3) cam6_image_uncrop_qvga_pane_ParamLimits

0x870b,	// (0x00046ac3) cam6_image_uncrop_qvga_pane

0xdf5e,	// (0x0004c316) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf5e,	// (0x0004c316) vid6_image_uncrop_qcif_pane

0xa290,	// (0x00048648) bg_popup_preview_window_pane_cp03

0xe228,	// (0x0004c5e0) list_cset_text2_pane

0xe230,	// (0x0004c5e8) main_cset6_text2_pane_g1

0xe238,	// (0x0004c5f0) main_cset6_text2_pane_t1

0x9266,	// (0x0004761e) list_cset_text2_pane_t1_ParamLimits

0x9266,	// (0x0004761e) list_cset_text2_pane_t1

0xb939,	// (0x00049cf1) main_radioblah_pane_ParamLimits

0x8e8a,	// (0x00047242) main_mobtv_info_pane_t3_ParamLimits

0x8e8a,	// (0x00047242) main_mobtv_info_pane_t3

0x9133,	// (0x000474eb) main_radioblah_pane_g1

0x915e,	// (0x00047516) main_radioblah_info_pane_g1

0x91e3,	// (0x0004759b) main_radioblah_info_pane_t3_ParamLimits

0x91e3,	// (0x0004759b) main_radioblah_info_pane_t3

0x40dd,	// (0x00042495) highlight_cell_cale_month_pane_ParamLimits

0x40dd,	// (0x00042495) highlight_cell_cale_month_pane

0xa290,	// (0x00048648) main_phob_fisheye_pane

0xd189,	// (0x0004b541) scroll_pane_cp0031_ParamLimits

0xd189,	// (0x0004b541) scroll_pane_cp0031

0xe070,	// (0x0004c428) wait_bar_pane_cp08_ParamLimits

0x88de,	// (0x00046c96) cset_list_set_pane_copy1_ParamLimits

0xe63c,	// (0x0004c9f4) highlight_cell_cale_month_pane_g1

0x927d,	// (0x00047635) highlight_cell_cale_month_pane_t1

0xdd07,	// (0x0004c0bf) list_gen_pane_cp01

0xd980,	// (0x0004bd38) scroll_pane_01

0x137d,	// (0x0003f735) list_single_double_fisheye_pane

0x1386,	// (0x0003f73e) list_double_fisheye_pane_g1_ParamLimits

0x1386,	// (0x0003f73e) list_double_fisheye_pane_g1

0x1392,	// (0x0003f74a) list_double_fisheye_pane_g2_ParamLimits

0x1392,	// (0x0003f74a) list_double_fisheye_pane_g2

0x13a6,	// (0x0003f75e) list_double_fisheye_pane_g3_ParamLimits

0x13a6,	// (0x0003f75e) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004e05a) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004e05a) list_double_fisheye_pane_g

0x13cf,	// (0x0003f787) list_double_fisheye_pane_t1_ParamLimits

0x13cf,	// (0x0003f787) list_double_fisheye_pane_t1

0x13ea,	// (0x0003f7a2) list_double_fisheye_pane_t2_ParamLimits

0x13ea,	// (0x0003f7a2) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004e065) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004e065) list_double_fisheye_pane_t

0xa290,	// (0x00048648) main_call5_pane

0x8f4f,	// (0x00047307) sc_swipe_pane_ParamLimits

0x8f4f,	// (0x00047307) sc_swipe_pane

0x9297,	// (0x0004764f) call5_image_pane_ParamLimits

0x9297,	// (0x0004764f) call5_image_pane

0x92a9,	// (0x00047661) call5_swipe_1_pane_ParamLimits

0x92a9,	// (0x00047661) call5_swipe_1_pane

0x92b5,	// (0x0004766d) call5_swipe_2_pane_ParamLimits

0x92b5,	// (0x0004766d) call5_swipe_2_pane

0x92cf,	// (0x00047687) popup_call5_audio_first_window_ParamLimits

0x92cf,	// (0x00047687) popup_call5_audio_first_window

0xd0ad,	// (0x0004b465) call5_swipe_1_pane_g1_ParamLimits

0xd0ad,	// (0x0004b465) call5_swipe_1_pane_g1

0xe644,	// (0x0004c9fc) call5_swipe_1_pane_g2_ParamLimits

0xe644,	// (0x0004c9fc) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004e06a) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004e06a) call5_swipe_1_pane_g

0xe650,	// (0x0004ca08) call5_swipe_1_pane_t1_ParamLimits

0xe650,	// (0x0004ca08) call5_swipe_1_pane_t1

0xd0ad,	// (0x0004b465) call5_swipe_2_pane_g1_ParamLimits

0xd0ad,	// (0x0004b465) call5_swipe_2_pane_g1

0xe665,	// (0x0004ca1d) call5_swipe_2_pane_g2_ParamLimits

0xe665,	// (0x0004ca1d) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004e06f) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004e06f) call5_swipe_2_pane_g

0xe671,	// (0x0004ca29) call5_swipe_2_pane_t1_ParamLimits

0xe671,	// (0x0004ca29) call5_swipe_2_pane_t1

0xe686,	// (0x0004ca3e) sc_swipe_pane_g1_ParamLimits

0xe686,	// (0x0004ca3e) sc_swipe_pane_g1

0xe693,	// (0x0004ca4b) sc_swipe_pane_g2_ParamLimits

0xe693,	// (0x0004ca4b) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004e074) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004e074) sc_swipe_pane_g

0xe69f,	// (0x0004ca57) sc_swipe_pane_t1_ParamLimits

0xe69f,	// (0x0004ca57) sc_swipe_pane_t1

0xa290,	// (0x00048648) main_cmail_launcher_pane

0x92df,	// (0x00047697) aid_size_cell_cmail_l_ParamLimits

0x92df,	// (0x00047697) aid_size_cell_cmail_l

0x92ed,	// (0x000476a5) grid_cmail_l_pane_ParamLimits

0x92ed,	// (0x000476a5) grid_cmail_l_pane

0x92fd,	// (0x000476b5) cell_cmail_l_pane_ParamLimits

0x92fd,	// (0x000476b5) cell_cmail_l_pane

0xe6b4,	// (0x0004ca6c) cell_cmail_l_pane_g1_ParamLimits

0xe6b4,	// (0x0004ca6c) cell_cmail_l_pane_g1

0xe6c0,	// (0x0004ca78) cell_cmail_l_pane_t1_ParamLimits

0xe6c0,	// (0x0004ca78) cell_cmail_l_pane_t1

0xe6d6,	// (0x0004ca8e) cell_cmail_l_pane_t2_ParamLimits

0xe6d6,	// (0x0004ca8e) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004e079) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004e079) cell_cmail_l_pane_t

0xb939,	// (0x00049cf1) grid_highlight_pane_cp018_ParamLimits

0xb939,	// (0x00049cf1) grid_highlight_pane_cp018

0x2030,	// (0x000403e8) main2_pane_ParamLimits

0x2030,	// (0x000403e8) main2_pane

0xaaa9,	// (0x00048e61) popup_sp_fs_action_menu_bg_pane_g1

0xaab1,	// (0x00048e69) popup_sp_fs_action_menu_bg_pane_g2

0xaab9,	// (0x00048e71) popup_sp_fs_action_menu_bg_pane_g3

0xaac1,	// (0x00048e79) popup_sp_fs_action_menu_bg_pane_g4

0xaac9,	// (0x00048e81) popup_sp_fs_action_menu_bg_pane_g5

0xaad1,	// (0x00048e89) popup_sp_fs_action_menu_bg_pane_g6

0xaad9,	// (0x00048e91) popup_sp_fs_action_menu_bg_pane_g7

0xaae1,	// (0x00048e99) popup_sp_fs_action_menu_bg_pane_g8

0xaae9,	// (0x00048ea1) popup_sp_fs_action_menu_bg_pane_g9

0xaaf1,	// (0x00048ea9) popup_sp_fs_action_menu_bg_pane_g10

0xaaf1,	// (0x00048ea9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004d53e) popup_sp_fs_action_menu_bg_pane_g

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g3_g1

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t3_g3_g2

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0004d5ec) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0004d5ec) list_medium_line_x2_t3_g3_g

0x0bca,	// (0x0003ef82) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0bca,	// (0x0003ef82) list_medium_line_x2_t3_g3_t1

0x0bdf,	// (0x0003ef97) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0bdf,	// (0x0003ef97) list_medium_line_x2_t3_g3_t2

0x0bf3,	// (0x0003efab) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0004d5f3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0004d5f3) list_medium_line_x2_t3_g3_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g2_g1

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0004d5fa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0004d5fa) list_medium_line_x2_t3_g2_g

0x0c08,	// (0x0003efc0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0c08,	// (0x0003efc0) list_medium_line_x2_t3_g2_t1

0x0c1e,	// (0x0003efd6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0c1e,	// (0x0003efd6) list_medium_line_x2_t3_g2_t2

0x0c30,	// (0x0003efe8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c30,	// (0x0003efe8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0004d5ff) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0004d5ff) list_medium_line_x2_t3_g2_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t4_g4_g1

0x0c4e,	// (0x0003f006) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0c4e,	// (0x0003f006) list_medium_line_x2_t4_g4_g2

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t4_g4_g3

0x0c5a,	// (0x0003f012) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c5a,	// (0x0003f012) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0004d606) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0004d606) list_medium_line_x2_t4_g4_g

0x0c66,	// (0x0003f01e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c66,	// (0x0003f01e) list_medium_line_x2_t4_g4_t1

0x0c80,	// (0x0003f038) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c80,	// (0x0003f038) list_medium_line_x2_t4_g4_t2

0x0c96,	// (0x0003f04e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c96,	// (0x0003f04e) list_medium_line_x2_t4_g4_t3

0x0cab,	// (0x0003f063) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0cab,	// (0x0003f063) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0004d60f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0004d60f) list_medium_line_x2_t4_g4_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g4_g1

0x0c4e,	// (0x0003f006) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0c4e,	// (0x0003f006) list_medium_line_x2_t2_g4_g2

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t2_g4_g3

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0004d676) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0004d676) list_medium_line_x2_t2_g4_g

0x0cbd,	// (0x0003f075) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0cbd,	// (0x0003f075) list_medium_line_x2_t2_g4_t1

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0004d67f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0004d67f) list_medium_line_x2_t2_g4_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g3_g1

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t2_g3_g2

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0004d5ec) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0004d5ec) list_medium_line_x2_t2_g3_g

0x0cd2,	// (0x0003f08a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0cd2,	// (0x0003f08a) list_medium_line_x2_t2_g3_t1

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0004d684) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0004d684) list_medium_line_x2_t2_g3_t

0x4286,	// (0x0004263e) main_sp_fs_list_pane_ParamLimits

0x4286,	// (0x0004263e) main_sp_fs_list_pane

0x4292,	// (0x0004264a) sp_fs_scroll_pane_ParamLimits

0x4292,	// (0x0004264a) sp_fs_scroll_pane

0x0ce7,	// (0x0003f09f) list_medium_line_x2_t3_t1

0x0cf7,	// (0x0003f0af) list_medium_line_x2_t3_t2

0x0d05,	// (0x0003f0bd) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0004d6cf) list_medium_line_x2_t3_t

0x0d13,	// (0x0003f0cb) list_medium_line_x3_t4_t1

0x0d23,	// (0x0003f0db) list_medium_line_x3_t4_t2

0x0d31,	// (0x0003f0e9) list_medium_line_x3_t4_t3

0x0d05,	// (0x0003f0bd) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0004d6d6) list_medium_line_x3_t4_t

0x0d3f,	// (0x0003f0f7) list_medium_line_x4_t5_t1

0x0d4f,	// (0x0003f107) list_medium_line_x4_t5_t2

0x0d31,	// (0x0003f0e9) list_medium_line_x4_t5_t3

0x0d5d,	// (0x0003f115) list_medium_line_x4_t5_t4

0x0d05,	// (0x0003f0bd) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0004d6df) list_medium_line_x4_t5_t

0x0ba6,	// (0x0003ef5e) list_medium_line_t4_g4_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_t4_g4_g1

0x0c5a,	// (0x0003f012) list_medium_line_t4_g4_g2_ParamLimits

0x0c5a,	// (0x0003f012) list_medium_line_t4_g4_g2

0x0d6b,	// (0x0003f123) list_medium_line_t4_g4_g3_ParamLimits

0x0d6b,	// (0x0003f123) list_medium_line_t4_g4_g3

0x0bbe,	// (0x0003ef76) list_medium_line_t4_g4_g4_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0004d6ea) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0004d6ea) list_medium_line_t4_g4_g

0x0d77,	// (0x0003f12f) list_medium_line_t4_g4_t1_ParamLimits

0x0d77,	// (0x0003f12f) list_medium_line_t4_g4_t1

0x0d8c,	// (0x0003f144) list_medium_line_t4_g4_t2_ParamLimits

0x0d8c,	// (0x0003f144) list_medium_line_t4_g4_t2

0x0da2,	// (0x0003f15a) list_medium_line_t4_g4_t3_ParamLimits

0x0da2,	// (0x0003f15a) list_medium_line_t4_g4_t3

0x0bf3,	// (0x0003efab) list_medium_line_t4_g4_t4_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0004d6f3) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0004d6f3) list_medium_line_t4_g4_t

0x43b1,	// (0x00042769) chi_dic_find_pane_g1

0x52bd,	// (0x00043675) main_tport_pane

0x0fee,	// (0x0003f3a6) list_medium_line_plain_t1

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g2_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g2_g1

0x1008,	// (0x0003f3c0) list_medium_line_t2_g2_g2_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004ddb8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004ddb8) list_medium_line_t2_g2_g

0x1014,	// (0x0003f3cc) list_medium_line_t2_g2_t1_ParamLimits

0x1014,	// (0x0003f3cc) list_medium_line_t2_g2_t1

0x102e,	// (0x0003f3e6) list_medium_line_t2_g2_t2_ParamLimits

0x102e,	// (0x0003f3e6) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004ddbd) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004ddbd) list_medium_line_t2_g2_t

0x124e,	// (0x0003f606) aid_sp_fs_list_icon_a_sm

0x1256,	// (0x0003f60e) aid_sp_fs_list_icon_d

0x125e,	// (0x0003f616) aid_sp_fs_text_primary

0xe902,	// (0x0004ccba) aid_sp_fs_text_secondary

0x83d3,	// (0x0004678b) list_medium_line

0x83d3,	// (0x0004678b) list_medium_line_g2

0x83d3,	// (0x0004678b) list_medium_line_g3

0x83d3,	// (0x0004678b) list_medium_line_plain

0x83d3,	// (0x0004678b) list_medium_line_plain_t2

0x83d3,	// (0x0004678b) list_medium_line_plain_t3

0x83d3,	// (0x0004678b) list_medium_line_right_icon

0x83d3,	// (0x0004678b) list_medium_line_right_iconx2

0x83d3,	// (0x0004678b) list_medium_line_t2

0x83d3,	// (0x0004678b) list_medium_line_t2_g2

0x83d3,	// (0x0004678b) list_medium_line_t2_g3

0x83d3,	// (0x0004678b) list_medium_line_t2_right_icon

0x83d3,	// (0x0004678b) list_medium_line_t2_right_iconx2

0x83d3,	// (0x0004678b) list_medium_line_t3

0x83d3,	// (0x0004678b) list_medium_line_t3_g2

0x83d3,	// (0x0004678b) list_medium_line_t3_g3

0x83d3,	// (0x0004678b) list_medium_line_t3_right_iconx2

0x83dc,	// (0x00046794) list_medium_line_t4_g4

0x83e5,	// (0x0004679d) list_medium_line_x2

0x83e5,	// (0x0004679d) list_medium_line_x2_t2_g2

0x83e5,	// (0x0004679d) list_medium_line_x2_t2_g3

0x83e5,	// (0x0004679d) list_medium_line_x2_t2_g4

0x83e5,	// (0x0004679d) list_medium_line_x2_t3

0x83e5,	// (0x0004679d) list_medium_line_x2_t3_g2

0x83e5,	// (0x0004679d) list_medium_line_x2_t3_g3

0x83e5,	// (0x0004679d) list_medium_line_x2_t3_g4

0x83e5,	// (0x0004679d) list_medium_line_x2_t4_g2

0x83e5,	// (0x0004679d) list_medium_line_x2_t4_g4

0x83ee,	// (0x000467a6) list_medium_line_x3

0x83ee,	// (0x000467a6) list_medium_line_x3_t4

0x83ee,	// (0x000467a6) list_medium_line_x3_t4_g4

0x83dc,	// (0x00046794) list_medium_line_x4_t4

0x83dc,	// (0x00046794) list_medium_line_x4_t4_g7

0x83dc,	// (0x00046794) list_medium_line_x4_t5

0x1267,	// (0x0003f61f) list_single_fs_dyc_pane_ParamLimits

0x1267,	// (0x0003f61f) list_single_fs_dyc_pane

0x0ba6,	// (0x0003ef5e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x4_t4_g7_g1

0x12a7,	// (0x0003f65f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x12a7,	// (0x0003f65f) list_medium_line_x4_t4_g7_g2

0x12b3,	// (0x0003f66b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x12b3,	// (0x0003f66b) list_medium_line_x4_t4_g7_g3

0x12c2,	// (0x0003f67a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x12c2,	// (0x0003f67a) list_medium_line_x4_t4_g7_g4

0x12ce,	// (0x0003f686) list_medium_line_x4_t4_g7_g5_ParamLimits

0x12ce,	// (0x0003f686) list_medium_line_x4_t4_g7_g5

0x12dd,	// (0x0003f695) list_medium_line_x4_t4_g7_g6_ParamLimits

0x12dd,	// (0x0003f695) list_medium_line_x4_t4_g7_g6

0x12ec,	// (0x0003f6a4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x12ec,	// (0x0003f6a4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004df81) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004df81) list_medium_line_x4_t4_g7_g

0x12f8,	// (0x0003f6b0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x12f8,	// (0x0003f6b0) list_medium_line_x4_t4_g7_t1

0x130d,	// (0x0003f6c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x130d,	// (0x0003f6c5) list_medium_line_x4_t4_g7_t2

0x1322,	// (0x0003f6da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1322,	// (0x0003f6da) list_medium_line_x4_t4_g7_t3

0x1337,	// (0x0003f6ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1337,	// (0x0003f6ef) list_medium_line_x4_t4_g7_t4

0x1349,	// (0x0003f701) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1349,	// (0x0003f701) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004df90) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004df90) list_medium_line_x4_t4_g7_t

0x135b,	// (0x0003f713) list_single_dyc_row_pane_ParamLimits

0x135b,	// (0x0003f713) list_single_dyc_row_pane

0x928b,	// (0x00047643) call5_gesture_pane_ParamLimits

0x928b,	// (0x00047643) call5_gesture_pane

0x92c1,	// (0x00047679) call5_windows_pane_ParamLimits

0x92c1,	// (0x00047679) call5_windows_pane

0x9312,	// (0x000476ca) call5_swipe_1_pane_cp_ParamLimits

0x9312,	// (0x000476ca) call5_swipe_1_pane_cp

0x931e,	// (0x000476d6) call5_swipe_2_pane_cp_ParamLimits

0x931e,	// (0x000476d6) call5_swipe_2_pane_cp

0xabb8,	// (0x00048f70) call5_image_pane_cp

0x932a,	// (0x000476e2) popup_call5_audio_first_window_cp_ParamLimits

0x932a,	// (0x000476e2) popup_call5_audio_first_window_cp

0xe686,	// (0x0004ca3e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe686,	// (0x0004ca3e) call5_swipe_1_pane_g1_cp

0xe6f3,	// (0x0004caab) call5_swipe_1_pane_g2_cp

0xe69f,	// (0x0004ca57) call5_swipe_1_pane_t1_cp_ParamLimits

0xe69f,	// (0x0004ca57) call5_swipe_1_pane_t1_cp

0xe686,	// (0x0004ca3e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe686,	// (0x0004ca3e) call5_swipe_2_pane_g1_cp

0xe6fb,	// (0x0004cab3) call5_swipe_2_pane_g2_cp

0xe703,	// (0x0004cabb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe703,	// (0x0004cabb) call5_swipe_2_pane_t1_cp

0xb939,	// (0x00049cf1) main_sp_fs_email_pane

0xe3f8,	// (0x0004c7b0) main_sp_fs_listscroll_pane_te

0x9338,	// (0x000476f0) popup_sp_fs_action_menu_pane_ParamLimits

0x9338,	// (0x000476f0) popup_sp_fs_action_menu_pane

0xce86,	// (0x0004b23e) bg_sp_fs_ctrlbar_pane_g1

0xe718,	// (0x0004cad0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe721,	// (0x0004cad9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe72a,	// (0x0004cae2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce86,	// (0x0004b23e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004e07e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc65,	// (0x0004b01d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc65,	// (0x0004b01d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe733,	// (0x0004caeb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe733,	// (0x0004caeb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe73f,	// (0x0004caf7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe73f,	// (0x0004caf7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004e087) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004e087) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe74b,	// (0x0004cb03) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe74b,	// (0x0004cb03) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x140c,	// (0x0003f7c4) list_medium_line_t2_right_icon_g1

0x1414,	// (0x0003f7cc) list_medium_line_t2_right_icon_t1

0x1424,	// (0x0003f7dc) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004e08c) list_medium_line_t2_right_icon_t

0xca4e,	// (0x0004ae06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca4e,	// (0x0004ae06) bg_sp_fs_ctrlbar_pane

0x93d7,	// (0x0004778f) main_sp_fs_ctrlbar_button_pane_cp01

0x93df,	// (0x00047797) main_sp_fs_ctrlbar_ddmenu_pane

0xe79f,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_g1

0xe7ab,	// (0x0004cb63) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004e091) main_sp_fs_ctrlbar_pane_g

0xe7b7,	// (0x0004cb6f) main_sp_fs_ctrlbar_pane_t1

0x93e9,	// (0x000477a1) main_sp_fs_ctrlbar_pane

0x93ff,	// (0x000477b7) main_sp_fs_listscroll_pane_te_cp01

0x1432,	// (0x0003f7ea) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1432,	// (0x0003f7ea) popup_sp_fs_action_menu_pane_cp01

0xb939,	// (0x00049cf1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb939,	// (0x00049cf1) bg_sp_fs_highlight_list_pane_cp01

0x145c,	// (0x0003f814) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x145c,	// (0x0003f814) sp_fs_action_menu_list_gene_pane_g1

0xe7e7,	// (0x0004cb9f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7e7,	// (0x0004cb9f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004e09b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004e09b) sp_fs_action_menu_list_gene_pane_g

0x146b,	// (0x0003f823) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x146b,	// (0x0003f823) sp_fs_action_menu_list_gene_pane_t1

0x1483,	// (0x0003f83b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1483,	// (0x0003f83b) sp_fs_action_menu_list_gene_pane

0xe7f4,	// (0x0004cbac) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7f4,	// (0x0004cbac) popup_sp_fs_action_menu_bg_pane

0x14a6,	// (0x0003f85e) sp_fs_action_menu_list_pane_ParamLimits

0x14a6,	// (0x0003f85e) sp_fs_action_menu_list_pane

0x14ca,	// (0x0003f882) sp_fs_scroll_pane_cp01_ParamLimits

0x14ca,	// (0x0003f882) sp_fs_scroll_pane_cp01

0x14f0,	// (0x0003f8a8) list_medium_line_plain_t2_t1

0x1500,	// (0x0003f8b8) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004e0a0) list_medium_line_plain_t2_t

0x150e,	// (0x0003f8c6) list_medium_line_plain_t3_t1

0x151e,	// (0x0003f8d6) list_medium_line_plain_t3_t2

0x152c,	// (0x0003f8e4) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004e0a5) list_medium_line_plain_t3_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t2_g2_g1

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0004d5fa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0004d5fa) list_medium_line_x2_t2_g2_g

0x0d77,	// (0x0003f12f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d77,	// (0x0003f12f) list_medium_line_x2_t2_g2_t1

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004e0ac) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004e0ac) list_medium_line_x2_t2_g2_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t4_g2_g1

0x153a,	// (0x0003f8f2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x153a,	// (0x0003f8f2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004e0b1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004e0b1) list_medium_line_x2_t4_g2_g

0x154c,	// (0x0003f904) list_medium_line_x2_t4_g2_t1_ParamLimits

0x154c,	// (0x0003f904) list_medium_line_x2_t4_g2_t1

0x1566,	// (0x0003f91e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1566,	// (0x0003f91e) list_medium_line_x2_t4_g2_t2

0x157c,	// (0x0003f934) list_medium_line_x2_t4_g2_t3_ParamLimits

0x157c,	// (0x0003f934) list_medium_line_x2_t4_g2_t3

0x0bf3,	// (0x0003efab) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004e0b6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004e0b6) list_medium_line_x2_t4_g2_t

0x1591,	// (0x0003f949) list_medium_line_t3_right_iconx2_g1

0x140c,	// (0x0003f7c4) list_medium_line_t3_right_iconx2_g2

0x1599,	// (0x0003f951) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004e0bf) list_medium_line_t3_right_iconx2_g

0x15a3,	// (0x0003f95b) list_medium_line_t3_right_iconx2_t1

0x15b3,	// (0x0003f96b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004e0c6) list_medium_line_t3_right_iconx2_t

0x0ba6,	// (0x0003ef5e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x3_t4_g4_g1

0x0bb2,	// (0x0003ef6a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x3_t4_g4_g2

0x0c5a,	// (0x0003f012) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0c5a,	// (0x0003f012) list_medium_line_x3_t4_g4_g3

0x15c1,	// (0x0003f979) list_medium_line_x3_t4_g4_g4_ParamLimits

0x15c1,	// (0x0003f979) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004e0cb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004e0cb) list_medium_line_x3_t4_g4_g

0x15cd,	// (0x0003f985) list_medium_line_x3_t4_g4_t1_ParamLimits

0x15cd,	// (0x0003f985) list_medium_line_x3_t4_g4_t1

0x15e4,	// (0x0003f99c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x15e4,	// (0x0003f99c) list_medium_line_x3_t4_g4_t2

0x15f9,	// (0x0003f9b1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x15f9,	// (0x0003f9b1) list_medium_line_x3_t4_g4_t3

0x160e,	// (0x0003f9c6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x160e,	// (0x0003f9c6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004e0d4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004e0d4) list_medium_line_x3_t4_g4_t

0x162b,	// (0x0003f9e3) list_single_dyc_row_text_pane_t1_ParamLimits

0x162b,	// (0x0003f9e3) list_single_dyc_row_text_pane_t1

0x1668,	// (0x0003fa20) list_single_dyc_row_text_pane_t2_ParamLimits

0x1668,	// (0x0003fa20) list_single_dyc_row_text_pane_t2

0x16de,	// (0x0003fa96) list_single_dyc_row_text_pane_t3_ParamLimits

0x16de,	// (0x0003fa96) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004e0dd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004e0dd) list_single_dyc_row_text_pane_t

0x17b5,	// (0x0003fb6d) list_single_dyc_row_pane_g1_ParamLimits

0x17b5,	// (0x0003fb6d) list_single_dyc_row_pane_g1

0x17c1,	// (0x0003fb79) list_single_dyc_row_pane_g2_ParamLimits

0x17c1,	// (0x0003fb79) list_single_dyc_row_pane_g2

0x17cd,	// (0x0003fb85) list_single_dyc_row_pane_g3_ParamLimits

0x17cd,	// (0x0003fb85) list_single_dyc_row_pane_g3

0x17d9,	// (0x0003fb91) list_single_dyc_row_pane_g4_ParamLimits

0x17d9,	// (0x0003fb91) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004e0ea) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004e0ea) list_single_dyc_row_pane_g

0x17e5,	// (0x0003fb9d) list_single_dyc_row_text_pane_ParamLimits

0x17e5,	// (0x0003fb9d) list_single_dyc_row_text_pane

0xa290,	// (0x00048648) bg_sp_fs_scroll_pane

0xe802,	// (0x0004cbba) thumb_sp_fs_scroll_pane

0x0ffc,	// (0x0003f3b4) list_medium_line_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_g1

0x1804,	// (0x0003fbbc) list_medium_line_t1_ParamLimits

0x1804,	// (0x0003fbbc) list_medium_line_t1

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_g1

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_g2_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004e0f3) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004e0f3) list_medium_line_x2_g

0x1819,	// (0x0003fbd1) list_medium_line_x2_t1_ParamLimits

0x1819,	// (0x0003fbd1) list_medium_line_x2_t1

0x0ba6,	// (0x0003ef5e) list_medium_line_x3_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x3_g1

0x0bb2,	// (0x0003ef6a) list_medium_line_x3_g2_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004e0f3) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004e0f3) list_medium_line_x3_g

0x1819,	// (0x0003fbd1) list_medium_line_x3_t1_ParamLimits

0x1819,	// (0x0003fbd1) list_medium_line_x3_t1

0xe80b,	// (0x0004cbc3) thumb_sp_fs_scroll_pane_g1

0xe814,	// (0x0004cbcc) thumb_sp_fs_scroll_pane_g2

0xe81d,	// (0x0004cbd5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e0f8) thumb_sp_fs_scroll_pane_g

0xe80b,	// (0x0004cbc3) bg_sp_fs_scroll_pane_g1

0xe814,	// (0x0004cbcc) bg_sp_fs_scroll_pane_g2

0xe81d,	// (0x0004cbd5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004e0f8) bg_sp_fs_scroll_pane_g

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ba6,	// (0x0003ef5e) list_medium_line_x2_t3_g4_g1

0x0c4e,	// (0x0003f006) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0c4e,	// (0x0003f006) list_medium_line_x2_t3_g4_g2

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0bb2,	// (0x0003ef6a) list_medium_line_x2_t3_g4_g3

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0bbe,	// (0x0003ef76) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0004d676) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0004d676) list_medium_line_x2_t3_g4_g

0x182f,	// (0x0003fbe7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x182f,	// (0x0003fbe7) list_medium_line_x2_t3_g4_t1

0x1845,	// (0x0003fbfd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1845,	// (0x0003fbfd) list_medium_line_x2_t3_g4_t2

0x0bf3,	// (0x0003efab) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bf3,	// (0x0003efab) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004e0ff) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004e0ff) list_medium_line_x2_t3_g4_t

0x0ffc,	// (0x0003f3b4) list_medium_line_g2_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_g2_g1

0x1008,	// (0x0003f3c0) list_medium_line_g2_g2_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004ddb8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004ddb8) list_medium_line_g2_g

0x185f,	// (0x0003fc17) list_medium_line_g2_t1_ParamLimits

0x185f,	// (0x0003fc17) list_medium_line_g2_t1

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g2_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g2_g1

0x1008,	// (0x0003f3c0) list_medium_line_t3_g2_g2_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004ddb8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004ddb8) list_medium_line_t3_g2_g

0x1874,	// (0x0003fc2c) list_medium_line_t3_g2_t1_ParamLimits

0x1874,	// (0x0003fc2c) list_medium_line_t3_g2_t1

0x188e,	// (0x0003fc46) list_medium_line_t3_g2_t2_ParamLimits

0x188e,	// (0x0003fc46) list_medium_line_t3_g2_t2

0x18a4,	// (0x0003fc5c) list_medium_line_t3_g2_t3_ParamLimits

0x18a4,	// (0x0003fc5c) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004e106) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004e106) list_medium_line_t3_g2_t

0x140c,	// (0x0003f7c4) list_medium_line_right_icon_g1

0x18be,	// (0x0003fc76) list_medium_line_right_icon_t1

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g1

0x18cc,	// (0x0003fc84) list_medium_line_t2_t1_ParamLimits

0x18cc,	// (0x0003fc84) list_medium_line_t2_t1

0x18e6,	// (0x0003fc9e) list_medium_line_t2_t2_ParamLimits

0x18e6,	// (0x0003fc9e) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004e10d) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004e10d) list_medium_line_t2_t

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g1

0x18fb,	// (0x0003fcb3) list_medium_line_t3_t1_ParamLimits

0x18fb,	// (0x0003fcb3) list_medium_line_t3_t1

0x1915,	// (0x0003fccd) list_medium_line_t3_t2_ParamLimits

0x1915,	// (0x0003fccd) list_medium_line_t3_t2

0x192b,	// (0x0003fce3) list_medium_line_t3_t3_ParamLimits

0x192b,	// (0x0003fce3) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004e112) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004e112) list_medium_line_t3_t

0x0ffc,	// (0x0003f3b4) list_medium_line_g3_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_g3_g1

0x1940,	// (0x0003fcf8) list_medium_line_g3_g2_ParamLimits

0x1940,	// (0x0003fcf8) list_medium_line_g3_g2

0x1008,	// (0x0003f3c0) list_medium_line_g3_g3_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004e119) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004e119) list_medium_line_g3_g

0x194c,	// (0x0003fd04) list_medium_line_g3_t1_ParamLimits

0x194c,	// (0x0003fd04) list_medium_line_g3_t1

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g3_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t2_g3_g1

0x1940,	// (0x0003fcf8) list_medium_line_t2_g3_g2_ParamLimits

0x1940,	// (0x0003fcf8) list_medium_line_t2_g3_g2

0x1008,	// (0x0003f3c0) list_medium_line_t2_g3_g3_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004e119) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004e119) list_medium_line_t2_g3_g

0x1961,	// (0x0003fd19) list_medium_line_t2_g3_t1_ParamLimits

0x1961,	// (0x0003fd19) list_medium_line_t2_g3_t1

0x197b,	// (0x0003fd33) list_medium_line_t2_g3_t2_ParamLimits

0x197b,	// (0x0003fd33) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004e120) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004e120) list_medium_line_t2_g3_t

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g3_g1_ParamLimits

0x0ffc,	// (0x0003f3b4) list_medium_line_t3_g3_g1

0x1940,	// (0x0003fcf8) list_medium_line_t3_g3_g2_ParamLimits

0x1940,	// (0x0003fcf8) list_medium_line_t3_g3_g2

0x1008,	// (0x0003f3c0) list_medium_line_t3_g3_g3_ParamLimits

0x1008,	// (0x0003f3c0) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004e119) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004e119) list_medium_line_t3_g3_g

0x1991,	// (0x0003fd49) list_medium_line_t3_g3_t1_ParamLimits

0x1991,	// (0x0003fd49) list_medium_line_t3_g3_t1

0x19aa,	// (0x0003fd62) list_medium_line_t3_g3_t2_ParamLimits

0x19aa,	// (0x0003fd62) list_medium_line_t3_g3_t2

0x19c0,	// (0x0003fd78) list_medium_line_t3_g3_t3_ParamLimits

0x19c0,	// (0x0003fd78) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004e125) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004e125) list_medium_line_t3_g3_t

0x1591,	// (0x0003f949) list_medium_line_right_iconx2_g1

0x140c,	// (0x0003f7c4) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e12c) list_medium_line_right_iconx2_g

0x19da,	// (0x0003fd92) list_medium_line_right_iconx2_t1

0x1591,	// (0x0003f949) list_medium_line_t2_right_iconx2_g1

0x140c,	// (0x0003f7c4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004e12c) list_medium_line_t2_right_iconx2_g

0x19e8,	// (0x0003fda0) list_medium_line_t2_right_iconx2_t1

0x19f8,	// (0x0003fdb0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004e131) list_medium_line_t2_right_iconx2_t

0x1a06,	// (0x0003fdbe) list_medium_line_x4_t4_t1

0x1a14,	// (0x0003fdcc) list_medium_line_x4_t4_t2

0x1a24,	// (0x0003fddc) list_medium_line_x4_t4_t3

0x1a34,	// (0x0003fdec) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004e136) list_medium_line_x4_t4_t

0x943a,	// (0x000477f2) tport_appsw_pane_ParamLimits

0x943a,	// (0x000477f2) tport_appsw_pane

0x9448,	// (0x00047800) tport_contact_pane_ParamLimits

0x9448,	// (0x00047800) tport_contact_pane

0x9458,	// (0x00047810) tport_listscroll_pane_ParamLimits

0x9458,	// (0x00047810) tport_listscroll_pane

0x9467,	// (0x0004781f) cell_tport_appsw_pane_ParamLimits

0x9467,	// (0x0004781f) cell_tport_appsw_pane

0xd112,	// (0x0004b4ca) tport_appsw_pane_g1_ParamLimits

0xd112,	// (0x0004b4ca) tport_appsw_pane_g1

0xe826,	// (0x0004cbde) tport_contact_pane_g1

0xe82f,	// (0x0004cbe7) tport_contact_pane_t1

0xe83d,	// (0x0004cbf5) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004e13f) tport_contact_pane_t

0xe84b,	// (0x0004cc03) list_tport_pane

0xe854,	// (0x0004cc0c) scroll_pane_cp_030

0x949c,	// (0x00047854) cell_tport_appsw_pane_g1

0x94ac,	// (0x00047864) cell_tport_appsw_pane_t1

0x94ba,	// (0x00047872) grid_highlight_pane_cp019

0x94c2,	// (0x0004787a) list_tport_double_graphic_pane_ParamLimits

0x94c2,	// (0x0004787a) list_tport_double_graphic_pane

0xb939,	// (0x00049cf1) list_highlight_pane_cp023_ParamLimits

0xb939,	// (0x00049cf1) list_highlight_pane_cp023

0x94df,	// (0x00047897) list_tport_double_graphic_pane_g1_ParamLimits

0x94df,	// (0x00047897) list_tport_double_graphic_pane_g1

0x94ec,	// (0x000478a4) list_tport_double_graphic_pane_t1_ParamLimits

0x94ec,	// (0x000478a4) list_tport_double_graphic_pane_t1

0x9501,	// (0x000478b9) list_tport_double_graphic_pane_t2_ParamLimits

0x9501,	// (0x000478b9) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004e14b) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004e14b) list_tport_double_graphic_pane_t

0xa290,	// (0x00048648) main_cale_note_pane

0x76d7,	// (0x00045a8f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x76d7,	// (0x00045a8f) cell_vitu2_function_top_wide_pane_cp01

0x8e9e,	// (0x00047256) wait_bar_pane_cp05_ParamLimits

0xb939,	// (0x00049cf1) listscroll_cmail_pane

0xe85d,	// (0x0004cc15) list_cmail_pane

0x9513,	// (0x000478cb) list_cmail_body_pane

0x952d,	// (0x000478e5) list_single_cmail_header_caption_pane

0xe86d,	// (0x0004cc25) list_single_cmail_header_detail_pane_ParamLimits

0xe86d,	// (0x0004cc25) list_single_cmail_header_detail_pane

0xe89f,	// (0x0004cc57) list_single_cmail_header_caption_pane_t1

0x1a44,	// (0x0003fdfc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a44,	// (0x0003fdfc) list_single_cmail_header_detail_pane_g1

0x1a5c,	// (0x0003fe14) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1a5c,	// (0x0003fe14) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004e150) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004e150) list_single_cmail_header_detail_pane_g

0x1a68,	// (0x0003fe20) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a68,	// (0x0003fe20) list_single_cmail_header_detail_pane_t1

0x1ac8,	// (0x0003fe80) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ac8,	// (0x0003fe80) list_single_cmail_header_editor_pane_bg

0xe46c,	// (0x0004c824) list_cmail_body_pane_g1

0xe8c3,	// (0x0004cc7b) list_cmail_body_pane_t1

0xd862,	// (0x0004bc1a) list_single_cmail_header_editor_pane_bg_g1

0xae15,	// (0x000491cd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd872,	// (0x0004bc2a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd86a,	// (0x0004bc22) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda8c,	// (0x0004be44) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd892,	// (0x0004bc4a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd882,	// (0x0004bc3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd88a,	// (0x0004bc42) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadf5,	// (0x000491ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x954d,	// (0x00047905) calenote_gesture_pane_ParamLimits

0x954d,	// (0x00047905) calenote_gesture_pane

0x9567,	// (0x0004791f) calenote_window_pane_ParamLimits

0x9567,	// (0x0004791f) calenote_window_pane

0xe8d1,	// (0x0004cc89) popup_note_window_cp01

0x957f,	// (0x00047937) calenote_swipe_1_pane_ParamLimits

0x957f,	// (0x00047937) calenote_swipe_1_pane

0x931e,	// (0x000476d6) calenote_swipe_2_pane_ParamLimits

0x931e,	// (0x000476d6) calenote_swipe_2_pane

0xe686,	// (0x0004ca3e) calenote_swipe_1_pane_g1_ParamLimits

0xe686,	// (0x0004ca3e) calenote_swipe_1_pane_g1

0xe693,	// (0x0004ca4b) calenote_swipe_1_pane_g2_ParamLimits

0xe693,	// (0x0004ca4b) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004e074) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004e074) calenote_swipe_1_pane_g

0xe8e3,	// (0x0004cc9b) calenote_swipe_1_pane_t1_ParamLimits

0xe8e3,	// (0x0004cc9b) calenote_swipe_1_pane_t1

0xe686,	// (0x0004ca3e) calenote_swipe_2_pane_g1_ParamLimits

0xe686,	// (0x0004ca3e) calenote_swipe_2_pane_g1

0xe90b,	// (0x0004ccc3) calenote_swipe_2_pane_g2_ParamLimits

0xe90b,	// (0x0004ccc3) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004e15c) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004e15c) calenote_swipe_2_pane_g

0xe917,	// (0x0004cccf) calenote_swipe_2_pane_t1_ParamLimits

0xe917,	// (0x0004cccf) calenote_swipe_2_pane_t1

0xa290,	// (0x00048648) main_mup_navstr_pane

0x632d,	// (0x000446e5) main_mup3_pane_t7_ParamLimits

0x632d,	// (0x000446e5) main_mup3_pane_t7

0x6d66,	// (0x0004511e) main_mp4_pane_g6_ParamLimits

0x6d66,	// (0x0004511e) main_mp4_pane_g6

0x70f2,	// (0x000454aa) main_image3_pane_t4_ParamLimits

0x70f2,	// (0x000454aa) main_image3_pane_t4

0x9592,	// (0x0004794a) popup_navstr_preview_pane_ParamLimits

0x9592,	// (0x0004794a) popup_navstr_preview_pane

0x959e,	// (0x00047956) scroll_navstr_pane_ParamLimits

0x959e,	// (0x00047956) scroll_navstr_pane

0xa290,	// (0x00048648) bg_popup_preview_window_pane_cp04

0xe93e,	// (0x0004ccf6) popup_navstr_preview_pane_t1

0x95aa,	// (0x00047962) scroll_navstr_pane_g1_ParamLimits

0x95aa,	// (0x00047962) scroll_navstr_pane_g1

0x95b7,	// (0x0004796f) scroll_navstr_pane_t1_ParamLimits

0x95b7,	// (0x0004796f) scroll_navstr_pane_t1

0xe8da,	// (0x0004cc92) bg_button_pane_cp014

0xe8da,	// (0x0004cc92) bg_button_pane_cp030

0x13b2,	// (0x0003f76a) list_double_fisheye_pane_g4_ParamLimits

0x13b2,	// (0x0003f76a) list_double_fisheye_pane_g4

0x13be,	// (0x0003f776) list_double_fisheye_pane_g5_ParamLimits

0x13be,	// (0x0003f776) list_double_fisheye_pane_g5

0xdd69,	// (0x0004c121) sp_fs_scroll_pane_cp03

0xe79f,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7ab,	// (0x0004cb63) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004e091) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7b7,	// (0x0004cb6f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe865,	// (0x0004cc1d) sp_fs_scroll_pane_cp02

0xab14,	// (0x00048ecc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xab14,	// (0x00048ecc) popup_sp_fs_calendar_preview_list_single_pane

0xa290,	// (0x00048648) main_cam6_pano_pane

0xb939,	// (0x00049cf1) main_mup3_pane_ParamLimits

0xa290,	// (0x00048648) main_phacti_pane

0x8d71,	// (0x00047129) bg_button_pane_cp11

0x8d89,	// (0x00047141) main_mobtv_info_pane_g2_ParamLimits

0x8d89,	// (0x00047141) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004dff1) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004dff1) main_mobtv_info_pane_g

0x8f3b,	// (0x000472f3) sc_clock_pane_t5_ParamLimits

0x8f3b,	// (0x000472f3) sc_clock_pane_t5

0x9133,	// (0x000474eb) main_radioblah_pane_g1_ParamLimits

0xe5d2,	// (0x0004c98a) main_radioblah_pane_t3_ParamLimits

0xe5d2,	// (0x0004c98a) main_radioblah_pane_t3

0xe5ea,	// (0x0004c9a2) main_radioblah_pane_t4_ParamLimits

0xe5ea,	// (0x0004c9a2) main_radioblah_pane_t4

0x9151,	// (0x00047509) main_radioblah_text_pane_ParamLimits

0x9151,	// (0x00047509) main_radioblah_text_pane

0x915e,	// (0x00047516) main_radioblah_info_pane_g1_ParamLimits

0x91f7,	// (0x000475af) main_radioblah_info_pane_t4_ParamLimits

0x91f7,	// (0x000475af) main_radioblah_info_pane_t4

0xb939,	// (0x00049cf1) main_sp_fs_calendar_pane

0x95c9,	// (0x00047981) main_phacti_pane_g1

0x95d1,	// (0x00047989) phacti_note_pane_ParamLimits

0x95d1,	// (0x00047989) phacti_note_pane

0xe955,	// (0x0004cd0d) phacti_term_pane_ParamLimits

0xe955,	// (0x0004cd0d) phacti_term_pane

0xe96a,	// (0x0004cd22) phacti_note_pane_t1_ParamLimits

0xe96a,	// (0x0004cd22) phacti_note_pane_t1

0x1adf,	// (0x0003fe97) phacti_term_pane_g1

0x1ae7,	// (0x0003fe9f) phacti_term_pane_t1_ParamLimits

0x1ae7,	// (0x0003fe9f) phacti_term_pane_t1

0xe981,	// (0x0004cd39) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe989,	// (0x0004cd41) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004e166) popup_sp_fs_calendar_preview_list_single_pane_g

0xe991,	// (0x0004cd49) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe991,	// (0x0004cd49) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9a7,	// (0x0004cd5f) aid_popup_sp_fs_bg_corner_pane

0xce86,	// (0x0004b23e) popup_sp_fs_calendar_preview_bg_pane_g1

0xa290,	// (0x00048648) popup_sp_fs_calendar_preview_bg_pane

0xe9af,	// (0x0004cd67) popup_sp_fs_calendar_preview_list_pane

0xca4e,	// (0x0004ae06) bg_main_sp_fs_cale_pane_ParamLimits

0xca4e,	// (0x0004ae06) bg_main_sp_fs_cale_pane

0x1b1a,	// (0x0003fed2) listscroll_cale_mrui_pane_ParamLimits

0x1b1a,	// (0x0003fed2) listscroll_cale_mrui_pane

0x1b2f,	// (0x0003fee7) listscroll_sp_fs_schedule_track_pane

0x1b38,	// (0x0003fef0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b38,	// (0x0003fef0) main_sp_fs_ctrlbar_pane_cp01

0xe9b7,	// (0x0004cd6f) main_sp_fs_ribbon_pane

0x1b4b,	// (0x0003ff03) popup_sp_fs_cale_preview_window

0xef77,	// (0x0004d32f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xef77,	// (0x0004d32f) list_single_sp_fs_schedule_track_pane

0xd6fb,	// (0x0004bab3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd6fb,	// (0x0004bab3) bg_sp_fs_highlight_list_pane_cp03

0x9634,	// (0x000479ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9634,	// (0x000479ec) list_single_sp_fs_schedule_track_pane_g1

0x9640,	// (0x000479f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9640,	// (0x000479f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004e16b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004e16b) list_single_sp_fs_schedule_track_pane_g

0x964c,	// (0x00047a04) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x964c,	// (0x00047a04) list_single_sp_fs_schedule_track_pane_t1

0x966a,	// (0x00047a22) sp_fs_schedule_track_pane_ParamLimits

0x966a,	// (0x00047a22) sp_fs_schedule_track_pane

0xe9bf,	// (0x0004cd77) sp_fs_schedule_track_pane_g1

0xe9c7,	// (0x0004cd7f) sp_fs_schedule_track_pane_g2

0xe9cf,	// (0x0004cd87) sp_fs_schedule_track_pane_g3

0xe9d7,	// (0x0004cd8f) sp_fs_schedule_track_pane_g4

0xe9df,	// (0x0004cd97) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004e170) sp_fs_schedule_track_pane_g

0xd862,	// (0x0004bc1a) bg_sp_fs_schedule_viewer_highlight_g1

0xae15,	// (0x000491cd) bg_sp_fs_schedule_viewer_highlight_g2

0xd86a,	// (0x0004bc22) bg_sp_fs_schedule_viewer_highlight_g3

0xd872,	// (0x0004bc2a) bg_sp_fs_schedule_viewer_highlight_g4

0xda8c,	// (0x0004be44) bg_sp_fs_schedule_viewer_highlight_g5

0xd882,	// (0x0004bc3a) bg_sp_fs_schedule_viewer_highlight_g6

0xd88a,	// (0x0004bc42) bg_sp_fs_schedule_viewer_highlight_g7

0xd892,	// (0x0004bc4a) bg_sp_fs_schedule_viewer_highlight_g8

0xadf5,	// (0x000491ad) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004e17b) bg_sp_fs_schedule_viewer_highlight_g

0xa290,	// (0x00048648) bg_main_sp_fs_ribbon_pane

0x967c,	// (0x00047a34) main_sp_fs_ribbon_pane_g1

0xe9e7,	// (0x0004cd9f) main_sp_fs_ribbon_pane_t1

0x9685,	// (0x00047a3d) main_sp_fs_ribbon_pane_t2

0xe9f6,	// (0x0004cdae) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004e18e) main_sp_fs_ribbon_pane_t

0xea05,	// (0x0004cdbd) main_sp_fs_ribbon_scheduler_pane

0xea0d,	// (0x0004cdc5) bg_main_sp_fs_ribbon_pane_g1

0xea16,	// (0x0004cdce) bg_main_sp_fs_ribbon_pane_g2

0xea1f,	// (0x0004cdd7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004e195) bg_main_sp_fs_ribbon_pane_g

0xea27,	// (0x0004cddf) main_sp_fs_ribbon_scheduler_pane_g1

0xea30,	// (0x0004cde8) main_sp_fs_ribbon_scheduler_pane_g2

0xea39,	// (0x0004cdf1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004e19c) main_sp_fs_ribbon_scheduler_pane_g

0xea42,	// (0x0004cdfa) list_cale_mrui_pane

0x9694,	// (0x00047a4c) sp_fs_scroll_pane_cp07_ParamLimits

0x9694,	// (0x00047a4c) sp_fs_scroll_pane_cp07

0x96b0,	// (0x00047a68) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x96b0,	// (0x00047a68) bg_sp_fs_schedule_viewer_highlight

0xea4f,	// (0x0004ce07) list_single_sp_fs_schedule_track_pane_cp01

0xea57,	// (0x0004ce0f) list_sp_fs_schedule_track_pane

0xea5f,	// (0x0004ce17) sp_fs_scroll_pane_cp06_ParamLimits

0xea5f,	// (0x0004ce17) sp_fs_scroll_pane_cp06

0xce86,	// (0x0004b23e) bgmain_sp_fs_calendar_pane_g1

0x1b5d,	// (0x0003ff15) list_single_cale_mrui_pane_ParamLimits

0x1b5d,	// (0x0003ff15) list_single_cale_mrui_pane

0x1b83,	// (0x0003ff3b) list_single_cale_mrui_row_pane_ParamLimits

0x1b83,	// (0x0003ff3b) list_single_cale_mrui_row_pane

0x1b90,	// (0x0003ff48) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b90,	// (0x0003ff48) list_single_cale_mrui_row_pane_g1

0x1bc8,	// (0x0003ff80) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1bc8,	// (0x0003ff80) list_single_cale_mrui_row_pane_t1

0x1bda,	// (0x0003ff92) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bda,	// (0x0003ff92) list_single_cale_mrui_row_pane_t2

0x1c40,	// (0x0003fff8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c40,	// (0x0003fff8) list_single_cale_mrui_row_pane_t3

0x1c6f,	// (0x00040027) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c6f,	// (0x00040027) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004e1aa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004e1aa) list_single_cale_mrui_row_pane_t

0x1c9e,	// (0x00040056) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c9e,	// (0x00040056) list_single_cmail_header_editor_pane_bg_cp01

0x1cc0,	// (0x00040078) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1cc0,	// (0x00040078) list_single_cmail_header_editor_pane_bg_cp02

0x96bd,	// (0x00047a75) main_radioblah_text_pane_t1_ParamLimits

0x96bd,	// (0x00047a75) main_radioblah_text_pane_t1

0xea7e,	// (0x0004ce36) cam6_indi_pane_cp01

0xea86,	// (0x0004ce3e) cam6_mode_pane_cp01

0xea8e,	// (0x0004ce46) cam6_pano_pane

0xea97,	// (0x0004ce4f) cam6_zoom_pane_cp01

0xeaa1,	// (0x0004ce59) cam6_pano_image_pane

0xeaaa,	// (0x0004ce62) cam6_pano_pane_g1

0xe46c,	// (0x0004c824) cam6_pano_pane_g2

0xeab3,	// (0x0004ce6b) cam6_pano_pane_g3

0xeabc,	// (0x0004ce74) cam6_pano_pane_g4

0xd41d,	// (0x0004b7d5) cam6_pano_pane_g5

0xeac5,	// (0x0004ce7d) cam6_pano_pane_g6

0xeacd,	// (0x0004ce85) cam6_pano_pane_g7

0xead5,	// (0x0004ce8d) cam6_pano_pane_g8

0xeade,	// (0x0004ce96) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004e1b3) cam6_pano_pane_g

0xa290,	// (0x00048648) main_browser_tag_pane

0xe936,	// (0x0004ccee) grid_navstr_albumart_pane

0xeae9,	// (0x0004cea1) cell_navstr_albumart_pane_ParamLimits

0xeae9,	// (0x0004cea1) cell_navstr_albumart_pane

0xeb05,	// (0x0004cebd) cell_navstr_albumart_pane_g1

0xc85b,	// (0x0004ac13) cell_navstr_albumart_pane_g2

0xc86b,	// (0x0004ac23) cell_navstr_albumart_pane_g3

0xc863,	// (0x0004ac1b) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004e1c6) cell_navstr_albumart_pane_g

0x96d7,	// (0x00047a8f) bt_list_pane_ParamLimits

0x96d7,	// (0x00047a8f) bt_list_pane

0x96f0,	// (0x00047aa8) bt_list_pane_t1

0x96ff,	// (0x00047ab7) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004e1cf) bt_list_pane_t

0xa290,	// (0x00048648) main_cale_prevew_pane

0x970e,	// (0x00047ac6) popup_cale_preview_window_ParamLimits

0x970e,	// (0x00047ac6) popup_cale_preview_window

0xb939,	// (0x00049cf1) bg_popup_preview_window_pane_cp05_ParamLimits

0xb939,	// (0x00049cf1) bg_popup_preview_window_pane_cp05

0xeb0d,	// (0x0004cec5) list_cale_preview_pane_ParamLimits

0xeb0d,	// (0x0004cec5) list_cale_preview_pane

0x972b,	// (0x00047ae3) list_double_cale_preview_pane_ParamLimits

0x972b,	// (0x00047ae3) list_double_cale_preview_pane

0x973f,	// (0x00047af7) list_single_cale_preview_pane_ParamLimits

0x973f,	// (0x00047af7) list_single_cale_preview_pane

0x9757,	// (0x00047b0f) list_single_cale_preview_pane_g1

0x975f,	// (0x00047b17) list_single_cale_preview_pane_t1_ParamLimits

0x975f,	// (0x00047b17) list_single_cale_preview_pane_t1

0x9774,	// (0x00047b2c) list_double_cale_preview_pane_g1

0x977c,	// (0x00047b34) list_double_cale_preview_pane_t1_ParamLimits

0x977c,	// (0x00047b34) list_double_cale_preview_pane_t1

0x9791,	// (0x00047b49) list_double_cale_preview_pane_t2_ParamLimits

0x9791,	// (0x00047b49) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004e1d4) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004e1d4) list_double_cale_preview_pane_t

0xa290,	// (0x00048648) main_ezdial_pane

0xb939,	// (0x00049cf1) main_sp_fs_email_pane_ParamLimits

0x937e,	// (0x00047736) cmail_ddmenu_btn01_pane_ParamLimits

0x937e,	// (0x00047736) cmail_ddmenu_btn01_pane

0x939b,	// (0x00047753) cmail_ddmenu_btn02_pane_ParamLimits

0x939b,	// (0x00047753) cmail_ddmenu_btn02_pane

0x93b9,	// (0x00047771) cmail_ddmenu_btn03_pane_ParamLimits

0x93b9,	// (0x00047771) cmail_ddmenu_btn03_pane

0x93e9,	// (0x000477a1) main_sp_fs_ctrlbar_pane_ParamLimits

0x93ff,	// (0x000477b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9513,	// (0x000478cb) list_cmail_body_pane_ParamLimits

0xe8ad,	// (0x0004cc65) bg_button_pane_cp12

0xe8b6,	// (0x0004cc6e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b6,	// (0x0004cc6e) list_single_cmail_header_detail_pane_g3

0x1aa4,	// (0x0003fe5c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1aa4,	// (0x0003fe5c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004e157) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004e157) list_single_cmail_header_detail_pane_t

0x1afc,	// (0x0003feb4) phacti_term_pane_t2_ParamLimits

0x1afc,	// (0x0003feb4) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004e161) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004e161) phacti_term_pane_t

0xeb19,	// (0x0004ced1) aid_size_list_single_double

0x97a9,	// (0x00047b61) popup_ezdial_listscroll_window

0x97cb,	// (0x00047b83) popup_number_entry_window_cp01

0xabb8,	// (0x00048f70) bg_popup_call_pane_cp09

0xeb25,	// (0x0004cedd) ezdial_list_pane

0xeb2d,	// (0x0004cee5) scroll_pane_cp23

0xcc65,	// (0x0004b01d) bg_button_pane_cp028_ParamLimits

0xcc65,	// (0x0004b01d) bg_button_pane_cp028

0x97d9,	// (0x00047b91) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97d9,	// (0x00047b91) cmail_ddmenu_btn01_pane_g1

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004e1d9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004e1d9) cmail_ddmenu_btn01_pane_g

0xeb35,	// (0x0004ceed) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb35,	// (0x0004ceed) cmail_ddmenu_btn01_pane_t1

0xca4e,	// (0x0004ae06) bg_button_pane_cp029_ParamLimits

0xca4e,	// (0x0004ae06) bg_button_pane_cp029

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn02_pane_g1

0x9803,	// (0x00047bbb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9803,	// (0x00047bbb) cmail_ddmenu_btn02_pane_t1

0xd6fb,	// (0x0004bab3) bg_button_pane_cp031_ParamLimits

0xd6fb,	// (0x0004bab3) bg_button_pane_cp031

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97eb,	// (0x00047ba3) cmail_ddmenu_btn03_pane_g1

0x9803,	// (0x00047bbb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9803,	// (0x00047bbb) cmail_ddmenu_btn03_pane_t1

0x6f9b,	// (0x00045353) cell_dialer2_keypad_pane_t1_ParamLimits

0x6fb5,	// (0x0004536d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6fb5,	// (0x0004536d) cell_dialer2_keypad_pane_t1_copy1

0x8b9e,	// (0x00046f56) ncimui_group_button_pane

0xb939,	// (0x00049cf1) main_sp_fs_calendar_pane_ParamLimits

0x952d,	// (0x000478e5) list_single_cmail_header_caption_pane_ParamLimits

0x1b11,	// (0x0003fec9) aid_recal_txt_sm_pane

0xa290,	// (0x00048648) mian_recal_day_pane

0x1b4b,	// (0x0003ff03) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4a,	// (0x0004cf02) list_recal_day_pane

0x1cf8,	// (0x000400b0) list_single_recal_day_pane_ParamLimits

0x1cf8,	// (0x000400b0) list_single_recal_day_pane

0xeb71,	// (0x0004cf29) list_single_recal_day_pane_g1_ParamLimits

0xeb71,	// (0x0004cf29) list_single_recal_day_pane_g1

0x1d0a,	// (0x000400c2) list_single_recal_day_pane_g2_ParamLimits

0x1d0a,	// (0x000400c2) list_single_recal_day_pane_g2

0x1d16,	// (0x000400ce) list_single_recal_day_pane_g3_ParamLimits

0x1d16,	// (0x000400ce) list_single_recal_day_pane_g3

0x1d22,	// (0x000400da) list_single_recal_day_pane_g4_ParamLimits

0x1d22,	// (0x000400da) list_single_recal_day_pane_g4

0x1d30,	// (0x000400e8) list_single_recal_day_pane_g5_ParamLimits

0x1d30,	// (0x000400e8) list_single_recal_day_pane_g5

0x1d46,	// (0x000400fe) list_single_recal_day_pane_g6_ParamLimits

0x1d46,	// (0x000400fe) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004e1e8) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004e1e8) list_single_recal_day_pane_g

0x1d5a,	// (0x00040112) list_single_recal_day_pane_t1

0x1d6c,	// (0x00040124) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004e1f3) list_single_recal_day_pane_t

0x9827,	// (0x00047bdf) ncimui_query_button_pane_ParamLimits

0x9827,	// (0x00047bdf) ncimui_query_button_pane

0x9837,	// (0x00047bef) ncimui_query_button_pane_t1_ParamLimits

0x9837,	// (0x00047bef) ncimui_query_button_pane_t1

0xeb7d,	// (0x0004cf35) ncimui_query_button_pane_t2_ParamLimits

0xeb7d,	// (0x0004cf35) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004e1f8) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004e1f8) ncimui_query_button_pane_t

0x984a,	// (0x00047c02) query_button_pane_ParamLimits

0x984a,	// (0x00047c02) query_button_pane

0xa290,	// (0x00048648) bg_button_pane_cp0028

0xeb90,	// (0x0004cf48) query_button_pane_t1

0x52bd,	// (0x00043675) main_tport_pane_ParamLimits

0x9410,	// (0x000477c8) bg_popup_window_pane_cp01_ParamLimits

0x9410,	// (0x000477c8) bg_popup_window_pane_cp01

0x941e,	// (0x000477d6) heading_pane_cp08_ParamLimits

0x941e,	// (0x000477d6) heading_pane_cp08

0x942c,	// (0x000477e4) heading_pane_cp07_ParamLimits

0x942c,	// (0x000477e4) heading_pane_cp07

0x949c,	// (0x00047854) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004e144) cell_tport_appsw_pane_g

0x0db8,	// (0x0003f170) input_candi_list_open_g1

0xafd8,	// (0x00049390) list_cale_time_pane_g6_ParamLimits

0xafd8,	// (0x00049390) list_cale_time_pane_g6

0x5d67,	// (0x0004411f) aid_size_touch_calib_1_ParamLimits

0x5d67,	// (0x0004411f) aid_size_touch_calib_1

0x5d73,	// (0x0004412b) aid_size_touch_calib_2_ParamLimits

0x5d73,	// (0x0004412b) aid_size_touch_calib_2

0x5d81,	// (0x00044139) aid_size_touch_calib_3_ParamLimits

0x5d81,	// (0x00044139) aid_size_touch_calib_3

0x5d91,	// (0x00044149) aid_size_touch_calib_4_ParamLimits

0x5d91,	// (0x00044149) aid_size_touch_calib_4

0x5d9f,	// (0x00044157) main_touch_calib_button_group_pane_ParamLimits

0x5d9f,	// (0x00044157) main_touch_calib_button_group_pane

0x5dad,	// (0x00044165) main_touch_calib_pane_g1_ParamLimits

0x5db9,	// (0x00044171) main_touch_calib_pane_g2_ParamLimits

0x5dc5,	// (0x0004417d) main_touch_calib_pane_g3_ParamLimits

0x5dd1,	// (0x00044189) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0004db05) main_touch_calib_pane_g_ParamLimits

0x5ddd,	// (0x00044195) main_touch_calib_pane_t1_ParamLimits

0x5df4,	// (0x000441ac) main_touch_calib_pane_t2_ParamLimits

0x5e0d,	// (0x000441c5) main_touch_calib_pane_t3_ParamLimits

0x5e23,	// (0x000441db) main_touch_calib_pane_t4_ParamLimits

0x5e39,	// (0x000441f1) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0004db0e) main_touch_calib_pane_t_ParamLimits

0xd1ad,	// (0x0004b565) list_single_fp_cale_pane_g3_ParamLimits

0xd1ad,	// (0x0004b565) list_single_fp_cale_pane_g3

0xb939,	// (0x00049cf1) bg_button_pane_cp012_ParamLimits

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp03_ParamLimits

0x7e44,	// (0x000461fc) cell_vitu2_function_top_pane_g1_ParamLimits

0xb939,	// (0x00049cf1) bg_vkb2_func_pane_cp04_ParamLimits

0x8b24,	// (0x00046edc) main_ncimui_button_group_pane_ParamLimits

0x8b24,	// (0x00046edc) main_ncimui_button_group_pane

0x8b8c,	// (0x00046f44) main_ncimui_pane_t3_ParamLimits

0x8b8c,	// (0x00046f44) main_ncimui_pane_t3

0xe94c,	// (0x0004cd04) phacti_button_group_pane

0xeb19,	// (0x0004ced1) aid_size_list_single_double_ParamLimits

0x97a9,	// (0x00047b61) popup_ezdial_listscroll_window_ParamLimits

0x97cb,	// (0x00047b83) popup_number_entry_window_cp01_ParamLimits

0x9857,	// (0x00047c0f) phacti_button_pane_ParamLimits

0x9857,	// (0x00047c0f) phacti_button_pane

0xa290,	// (0x00048648) bg_button_pane_cp14

0xeb9e,	// (0x0004cf56) phacti_button_pane_t1

0x9868,	// (0x00047c20) main_touch_calib_button_pane_ParamLimits

0x9868,	// (0x00047c20) main_touch_calib_button_pane

0xaa02,	// (0x00048dba) bg_button_pane_cp18_ParamLimits

0xaa02,	// (0x00048dba) bg_button_pane_cp18

0xebac,	// (0x0004cf64) main_touch_calib_button_pane_t1_ParamLimits

0xebac,	// (0x0004cf64) main_touch_calib_button_pane_t1

0xebc2,	// (0x0004cf7a) main_touch_calib_button_pane_t2_ParamLimits

0xebc2,	// (0x0004cf7a) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004e1fd) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004e1fd) main_touch_calib_button_pane_t

0xa290,	// (0x00048648) cell_ncimui_button_pane

0xa290,	// (0x00048648) bg_button_pane_cp032

0xebe0,	// (0x0004cf98) cell_ncimui_button_pane_t1

0x7011,	// (0x000453c9) image3_infobar_pane_ParamLimits

0x7011,	// (0x000453c9) image3_infobar_pane

0x8f5d,	// (0x00047315) fs_bigclock_status_pane_ParamLimits

0x8f5d,	// (0x00047315) fs_bigclock_status_pane

0x8f6a,	// (0x00047322) main_fs_bigclock_clock_pane_ParamLimits

0x8f6a,	// (0x00047322) main_fs_bigclock_clock_pane

0x8f86,	// (0x0004733e) main_fs_bigclock_indi_pane_ParamLimits

0x8f86,	// (0x0004733e) main_fs_bigclock_indi_pane

0x8fb4,	// (0x0004736c) main_fs_bigclock_swipe_pane_ParamLimits

0x8fb4,	// (0x0004736c) main_fs_bigclock_swipe_pane

0xa290,	// (0x00048648) main_fs_clock_dumped_data

0x8fee,	// (0x000473a6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8fee,	// (0x000473a6) list_single_fs_bigclock_indicator_pane_g1

0x900d,	// (0x000473c5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x900d,	// (0x000473c5) list_single_fs_bigclock_indicator_pane_g2

0x9027,	// (0x000473df) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9027,	// (0x000473df) list_single_fs_bigclock_indicator_pane_g3

0x9043,	// (0x000473fb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9043,	// (0x000473fb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004e025) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004e025) list_single_fs_bigclock_indicator_pane_g

0x9072,	// (0x0004742a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9072,	// (0x0004742a) list_single_fs_bigclock_indicator_pane_t1

0x909a,	// (0x00047452) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x909a,	// (0x00047452) list_single_fs_bigclock_indicator_pane_t2

0x90c2,	// (0x0004747a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x90c2,	// (0x0004747a) list_single_fs_bigclock_indicator_pane_t3

0x90ea,	// (0x000474a2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x90ea,	// (0x000474a2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004e030) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004e030) list_single_fs_bigclock_indicator_pane_t

0xebee,	// (0x0004cfa6) image3_infobar_fav_pane_ParamLimits

0xebee,	// (0x0004cfa6) image3_infobar_fav_pane

0xebfe,	// (0x0004cfb6) image3_infobar_loc_pane_ParamLimits

0xebfe,	// (0x0004cfb6) image3_infobar_loc_pane

0xec14,	// (0x0004cfcc) image3_infobar_time_pane_ParamLimits

0xec14,	// (0x0004cfcc) image3_infobar_time_pane

0xce86,	// (0x0004b23e) image3_infobar_time_pane_g1

0xec52,	// (0x0004d00a) image3_infobar_time_pane_t1

0xce86,	// (0x0004b23e) image3_infobar_loc_pane_g1

0xec60,	// (0x0004d018) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004e202) image3_infobar_loc_pane_g

0xec68,	// (0x0004d020) image3_infobar_loc_pane_t1

0xce86,	// (0x0004b23e) image3_infobar_fav_pane_g1

0xec76,	// (0x0004d02e) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004e207) image3_infobar_fav_pane_g

0xec7e,	// (0x0004d036) fs_bigclock_status_battery_pane

0xec87,	// (0x0004d03f) fs_bigclock_status_signal_pane

0xec90,	// (0x0004d048) fs_bigclock_status_title_pane

0xec99,	// (0x0004d051) fs_bigclock_status_signal_pane_g1

0xeca2,	// (0x0004d05a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004e20c) fs_bigclock_status_signal_pane_g

0xecaa,	// (0x0004d062) fs_bigclock_status_battery_pane_g1

0xecb3,	// (0x0004d06b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004e211) fs_bigclock_status_battery_pane_g

0xecbb,	// (0x0004d073) fs_bigclock_status_title_pane_t1

0x9878,	// (0x00047c30) main_fs_bigclock_clock_pane_g1

0x9878,	// (0x00047c30) main_fs_bigclock_clock_pane_g2

0x9887,	// (0x00047c3f) main_fs_bigclock_clock_pane_g3

0x9887,	// (0x00047c3f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004e216) main_fs_bigclock_clock_pane_g

0x9897,	// (0x00047c4f) main_fs_bigclock_clock_pane_t1

0x98ac,	// (0x00047c64) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004e21f) main_fs_bigclock_clock_pane_t

0xecc9,	// (0x0004d081) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecc9,	// (0x0004d081) list_single_fs_bigclock_indicator_pane

0xecda,	// (0x0004d092) list_single_fs_bigclock_pane_ParamLimits

0xecda,	// (0x0004d092) list_single_fs_bigclock_pane

0xed00,	// (0x0004d0b8) main_fs_bigclock_indicator_pane_t1

0xed0f,	// (0x0004d0c7) list_single_fs_bigclock_pane_g1

0xed17,	// (0x0004d0cf) list_single_fs_bigclock_pane_t1

0xce86,	// (0x0004b23e) main_fs_bigclock_swipe_pane_g1

0xed5a,	// (0x0004d112) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004e230) main_fs_bigclock_swipe_pane_g

0xed62,	// (0x0004d11a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed62,	// (0x0004d11a) main_fs_bigclock_swipe_pane_t1

0x429e,	// (0x00042656) call_type_pane_ParamLimits

0xa290,	// (0x00048648) main_btmg_pane

0x1bbc,	// (0x0003ff74) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1bbc,	// (0x0003ff74) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004e1a3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004e1a3) list_single_cale_mrui_row_pane_g

0x1ce6,	// (0x0004009e) list_recal_vselct_arw_lo_pane

0xeb69,	// (0x0004cf21) list_recal_vselct_arw_up_pane

0x1cee,	// (0x000400a6) list_recal_vselct_pane

0x9903,	// (0x00047cbb) btmg_button_pane

0x990f,	// (0x00047cc7) main_btmg_pane_g1

0xa290,	// (0x00048648) bg_button_pane_cp044

0xed7f,	// (0x0004d137) btmg_button_pane_t1

0xca3a,	// (0x0004adf2) aid_listscroll_gen

0xb939,	// (0x00049cf1) main_cntbar_detail_pane

0xe85d,	// (0x0004cc15) list_cmail_folder_pane

0xdd69,	// (0x0004c121) sp_fs_scroll_pane_cp03_ParamLimits

0x1d7e,	// (0x00040136) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d7e,	// (0x00040136) list_single_fs_dyc_pane_cp01

0xed8d,	// (0x0004d145) aid_size_cmail_indent

0x1d9c,	// (0x00040154) list_single_dyc_row_pane_cp01

0x9937,	// (0x00047cef) cntbar_detail_list_pane_ParamLimits

0x9937,	// (0x00047cef) cntbar_detail_list_pane

0x9977,	// (0x00047d2f) main_cntbar_detail_cont_pane_ParamLimits

0x9977,	// (0x00047d2f) main_cntbar_detail_cont_pane

0x4292,	// (0x0004264a) scroll_pane_cp032_ParamLimits

0x4292,	// (0x0004264a) scroll_pane_cp032

0x9983,	// (0x00047d3b) cntbar_detail_list_event_pane_ParamLimits

0x9983,	// (0x00047d3b) cntbar_detail_list_event_pane

0x9945,	// (0x00047cfd) cntbar_detail_list_shct_pane

0xae63,	// (0x0004921b) aid_list_gen

0xed96,	// (0x0004d14e) aid_scroll

0xed9f,	// (0x0004d157) aid_size_touch_scroll_bar

0x83e5,	// (0x0004679d) aid_list_double

0x83d3,	// (0x0004678b) aid_list_single

0x83d3,	// (0x0004678b) aid_list_single_lg

0x1da5,	// (0x0004015d) aid_list_z_g_a_sm

0x1dad,	// (0x00040165) aid_list_z_g_d

0x1db5,	// (0x0004016d) aid_txt_z_prm

0x1dc3,	// (0x0004017b) aid_txt_z_prm_cp01

0x1dd1,	// (0x00040189) aid_txt_z_sec

0x9993,	// (0x00047d4b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9993,	// (0x00047d4b) main_cntbar_detail_cont_pane_g1

0x99a0,	// (0x00047d58) main_cntbar_detail_cont_pane_g2_ParamLimits

0x99a0,	// (0x00047d58) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004e235) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004e235) main_cntbar_detail_cont_pane_g

0xeda8,	// (0x0004d160) main_cntbar_detail_cont_pane_t1

0xedb6,	// (0x0004d16e) main_cntbar_detail_cont_pane_t2

0xedc4,	// (0x0004d17c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004e23a) main_cntbar_detail_cont_pane_t

0x99ac,	// (0x00047d64) cell_cntbar_detail_list_shct_pane_ParamLimits

0x99ac,	// (0x00047d64) cell_cntbar_detail_list_shct_pane

0xedd2,	// (0x0004d18a) cntbar_detail_list_shct_pane_g1

0xeddb,	// (0x0004d193) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004e241) cntbar_detail_list_shct_pane_g

0x99c0,	// (0x00047d78) cntbar_detail_list_event_pane_g1_ParamLimits

0x99c0,	// (0x00047d78) cntbar_detail_list_event_pane_g1

0x99cc,	// (0x00047d84) cntbar_detail_list_event_pane_g2_ParamLimits

0x99cc,	// (0x00047d84) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004e246) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004e246) cntbar_detail_list_event_pane_g

0x9a3a,	// (0x00047df2) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a3a,	// (0x00047df2) cntbar_detail_list_event_pane_t1

0x9a4f,	// (0x00047e07) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a4f,	// (0x00047e07) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004e253) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004e253) cntbar_detail_list_event_pane_t

0xce86,	// (0x0004b23e) cell_cntbar_detail_list_shct_pane_g1

0xb5d1,	// (0x00049989) navi_pane_mv_g3

0xb939,	// (0x00049cf1) main_cntbar_detail_pane_ParamLimits

0xa290,	// (0x00048648) main_notif_wgt_pane

0x6c93,	// (0x0004504b) aid_tch_main_mp4_pane_g4

0x6efc,	// (0x000452b4) popup_slider_window_cp02

0x1cdc,	// (0x00040094) list_recal_day_event_pane

0x9917,	// (0x00047ccf) cntbar_detail_btn_pane_ParamLimits

0x9917,	// (0x00047ccf) cntbar_detail_btn_pane

0x9927,	// (0x00047cdf) cntbar_detail_btn_pane_cp01_ParamLimits

0x9927,	// (0x00047cdf) cntbar_detail_btn_pane_cp01

0x9945,	// (0x00047cfd) cntbar_detail_list_shct_pane_ParamLimits

0x9951,	// (0x00047d09) cntbar_detail_pane_g1_ParamLimits

0x9951,	// (0x00047d09) cntbar_detail_pane_g1

0x9961,	// (0x00047d19) cntbar_detail_pane_t1_ParamLimits

0x9961,	// (0x00047d19) cntbar_detail_pane_t1

0x99d8,	// (0x00047d90) cntbar_detail_list_event_pane_g3_ParamLimits

0x99d8,	// (0x00047d90) cntbar_detail_list_event_pane_g3

0x99f0,	// (0x00047da8) cntbar_detail_list_event_pane_g4_ParamLimits

0x99f0,	// (0x00047da8) cntbar_detail_list_event_pane_g4

0x9a08,	// (0x00047dc0) cntbar_detail_list_event_pane_g5_ParamLimits

0x9a08,	// (0x00047dc0) cntbar_detail_list_event_pane_g5

0x9a20,	// (0x00047dd8) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a20,	// (0x00047dd8) cntbar_detail_list_event_pane_g6

0x9a64,	// (0x00047e1c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a64,	// (0x00047e1c) cntbar_detail_list_event_pane_t3

0x9a76,	// (0x00047e2e) popup_notif_wgt_window_ParamLimits

0x9a76,	// (0x00047e2e) popup_notif_wgt_window

0x9a86,	// (0x00047e3e) popup_submenu_window_cp01_ParamLimits

0x9a86,	// (0x00047e3e) popup_submenu_window_cp01

0xabb8,	// (0x00048f70) bg_popup_window_pane_cp10

0xede4,	// (0x0004d19c) listscroll_notif_wgt_pane

0xedf6,	// (0x0004d1ae) list_notif_wgt_window

0xedff,	// (0x0004d1b7) scroll_pane_cp033

0x9a96,	// (0x00047e4e) list_notif_wgt_row_pane_ParamLimits

0x9a96,	// (0x00047e4e) list_notif_wgt_row_pane

0xee08,	// (0x0004d1c0) aid_size_list_notif_wgt_del

0xee15,	// (0x0004d1cd) list_notif_wgt_row_pane_g1

0xee21,	// (0x0004d1d9) list_notif_wgt_row_pane_g2

0xee30,	// (0x0004d1e8) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004e25a) list_notif_wgt_row_pane_g

0xee3d,	// (0x0004d1f5) list_notif_wgt_row_pane_t1

0xee53,	// (0x0004d20b) list_notif_wgt_row_pane_t2

0xee65,	// (0x0004d21d) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004e261) list_notif_wgt_row_pane_t

0xda94,	// (0x0004be4c) list_recal_day_event_pane_g1

0xee77,	// (0x0004d22f) list_recal_day_event_pane_t1

0xa290,	// (0x00048648) bg_button_pane_cp045

0x9aaa,	// (0x00047e62) cntbar_detail_btn_pane_t1

0xca4e,	// (0x0004ae06) main_callh_pane_ParamLimits

0xca4e,	// (0x0004ae06) main_callh_pane

0xa290,	// (0x00048648) main_coverflow0_pane

0xa290,	// (0x00048648) main_wgtman_pane

0x8fcc,	// (0x00047384) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fcc,	// (0x00047384) main_fs_bigclock_unlock_btn_pane

0x9494,	// (0x0004784c) bg_button_pane_cp16

0x94a4,	// (0x0004785c) cell_tport_appsw_pane_g3

0x9ab8,	// (0x00047e70) cf0_flow_pane_ParamLimits

0x9ab8,	// (0x00047e70) cf0_flow_pane

0xee86,	// (0x0004d23e) listscroll_cf0_pane

0xee91,	// (0x0004d249) main_cf0_pane_g1

0x9ac7,	// (0x00047e7f) main_cf0_pane_t1_ParamLimits

0x9ac7,	// (0x00047e7f) main_cf0_pane_t1

0x9adb,	// (0x00047e93) main_cf0_pane_t2_ParamLimits

0x9adb,	// (0x00047e93) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004e26d) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004e26d) main_cf0_pane_t

0xeea3,	// (0x0004d25b) scroll_pane_cp11

0x9aef,	// (0x00047ea7) cf0_flow_pane_g1

0x9af7,	// (0x00047eaf) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004e272) cf0_flow_pane_g

0x9aff,	// (0x00047eb7) cf0_flow_pane_t1

0xa290,	// (0x00048648) main_call6_pane

0xa290,	// (0x00048648) main_calllock_pane

0x9b0d,	// (0x00047ec5) call6_btn_grp_pane_ParamLimits

0x9b0d,	// (0x00047ec5) call6_btn_grp_pane

0x9b1a,	// (0x00047ed2) call6_pane_g1_ParamLimits

0x9b1a,	// (0x00047ed2) call6_pane_g1

0x9b2a,	// (0x00047ee2) popup_call6_1st_window_ParamLimits

0x9b2a,	// (0x00047ee2) popup_call6_1st_window

0x9b3a,	// (0x00047ef2) popup_call6_2nd_window_ParamLimits

0x9b3a,	// (0x00047ef2) popup_call6_2nd_window

0x9b4a,	// (0x00047f02) cell_call6_btn_pane_ParamLimits

0x9b4a,	// (0x00047f02) cell_call6_btn_pane

0xabb8,	// (0x00048f70) bg_popup_call2_in_pane_cp03

0xeeae,	// (0x0004d266) popup_call6_1st_window_g1

0xeeb6,	// (0x0004d26e) popup_call6_1st_window_g2

0xeebe,	// (0x0004d276) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004e277) popup_call6_1st_window_g

0xeec6,	// (0x0004d27e) popup_call6_1st_window_t1

0xeed5,	// (0x0004d28d) popup_call6_1st_window_t2

0xeee5,	// (0x0004d29d) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004e27e) popup_call6_1st_window_t

0xabb8,	// (0x00048f70) bg_popup_call2_in_pane_cp04

0xeeae,	// (0x0004d266) popup_call6_2nd_window_g1

0xeeb6,	// (0x0004d26e) popup_call6_2nd_window_g2

0xeebe,	// (0x0004d276) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004e277) popup_call6_2nd_window_g

0xeec6,	// (0x0004d27e) popup_call6_2nd_window_t1

0xa290,	// (0x00048648) bg_button_pane_cp15

0xeef5,	// (0x0004d2ad) cell_call6_btn_pane_g1

0x9b5b,	// (0x00047f13) cell_call6_btn_pane_t1

0x9b6a,	// (0x00047f22) listscroll_wgtman_pane_ParamLimits

0x9b6a,	// (0x00047f22) listscroll_wgtman_pane

0x9b86,	// (0x00047f3e) wgtman_btn_pane_ParamLimits

0x9b86,	// (0x00047f3e) wgtman_btn_pane

0xb3e3,	// (0x0004979b) aid_scroll_copy1

0xeefe,	// (0x0004d2b6) list_wgtman_pane

0x9bbb,	// (0x00047f73) wgtman_btn_pane_g1_ParamLimits

0x9bbb,	// (0x00047f73) wgtman_btn_pane_g1

0x9be3,	// (0x00047f9b) wgtman_btn_pane_t1_ParamLimits

0x9be3,	// (0x00047f9b) wgtman_btn_pane_t1

0xef08,	// (0x0004d2c0) wgtman_btn_pane_t2_ParamLimits

0xef08,	// (0x0004d2c0) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004e285) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004e285) wgtman_btn_pane_t

0x9c1a,	// (0x00047fd2) listrow_wgtman_pane_ParamLimits

0x9c1a,	// (0x00047fd2) listrow_wgtman_pane

0x9c2f,	// (0x00047fe7) listrow_wgtman_pane_g1

0x9c3c,	// (0x00047ff4) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004e28a) listrow_wgtman_pane_g

0x1ddf,	// (0x00040197) listrow_wgtman_pane_t1

0x1df7,	// (0x000401af) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004e28f) listrow_wgtman_pane_t

0x1e1d,	// (0x000401d5) wait_bar_pane_cp09

0xef1f,	// (0x0004d2d7) main_calllock_btn_pane

0xef29,	// (0x0004d2e1) main_calllock_pane_g1

0xa290,	// (0x00048648) bg_button_pane_cp17

0xeef5,	// (0x0004d2ad) main_calllock_btn_pane_g1

0xef35,	// (0x0004d2ed) main_calllock_btn_pane_t1

0xa290,	// (0x00048648) main_dialer3_pane

0xa290,	// (0x00048648) main_fmrd2_pane

0xce86,	// (0x0004b23e) main_fs_bigclock_unlock_btn_pane_g1

0x9c62,	// (0x0004801a) main_fs_bigclock_unlock_btn_pane_t1

0x9c70,	// (0x00048028) area_fmrd2_info_pane_ParamLimits

0x9c70,	// (0x00048028) area_fmrd2_info_pane

0x9c7c,	// (0x00048034) area_fmrd2_visual_pane_ParamLimits

0x9c7c,	// (0x00048034) area_fmrd2_visual_pane

0x9c8a,	// (0x00048042) fmrd2_indi_pane_ParamLimits

0x9c8a,	// (0x00048042) fmrd2_indi_pane

0x9c97,	// (0x0004804f) area_fmrd2_visual_pane_g1

0x9c9f,	// (0x00048057) area_fmrd2_visual_pane_t1

0x9caf,	// (0x00048067) area_fmrd2_visual_pane_t2

0x9cbf,	// (0x00048077) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004e299) area_fmrd2_visual_pane_t

0x9ccf,	// (0x00048087) area_fmrd2_info_pane_g1

0x9cd7,	// (0x0004808f) area_fmrd2_info_pane_t1

0x9ce7,	// (0x0004809f) area_fmrd2_info_pane_t2

0x9cf7,	// (0x000480af) area_fmrd2_info_pane_t3

0x9d07,	// (0x000480bf) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004e2a0) area_fmrd2_info_pane_t

0x9d17,	// (0x000480cf) fmrd2_indi_pane_t1

0x9d27,	// (0x000480df) fmrd2_indi_pane_t2

0x9d37,	// (0x000480ef) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004e2a9) fmrd2_indi_pane_t

0x9054,	// (0x0004740c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9054,	// (0x0004740c) list_single_fs_bigclock_indicator_pane_g5

0x9109,	// (0x000474c1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9109,	// (0x000474c1) list_single_fs_bigclock_indicator_pane_t5

0x95e7,	// (0x0004799f) aid_cell_bcale_month_pane_ParamLimits

0x95e7,	// (0x0004799f) aid_cell_bcale_month_pane

0x9605,	// (0x000479bd) bcale_month_pane_ParamLimits

0x9605,	// (0x000479bd) bcale_month_pane

0x9623,	// (0x000479db) bcale_preview_pane_ParamLimits

0x9623,	// (0x000479db) bcale_preview_pane

0xed17,	// (0x0004d0cf) list_single_fs_bigclock_pane_t1_ParamLimits

0xed36,	// (0x0004d0ee) list_single_fs_bigclock_pane_t2_ParamLimits

0xed36,	// (0x0004d0ee) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004e22b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004e22b) list_single_fs_bigclock_pane_t

0x9c5a,	// (0x00048012) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004e294) main_fs_bigclock_unlock_btn_pane_g

0x9d47,	// (0x000480ff) aid_dia3_key_size_ParamLimits

0x9d47,	// (0x000480ff) aid_dia3_key_size

0x9d53,	// (0x0004810b) aid_dia3_listrow_size_ParamLimits

0x9d53,	// (0x0004810b) aid_dia3_listrow_size

0x9d63,	// (0x0004811b) dia3_keypad_fun_pane_ParamLimits

0x9d63,	// (0x0004811b) dia3_keypad_fun_pane

0x9d73,	// (0x0004812b) dia3_keypad_num_pane_ParamLimits

0x9d73,	// (0x0004812b) dia3_keypad_num_pane

0x9d83,	// (0x0004813b) dia3_listscroll_pane_ParamLimits

0x9d83,	// (0x0004813b) dia3_listscroll_pane

0x9d91,	// (0x00048149) dia3_numentry_pane_ParamLimits

0x9d91,	// (0x00048149) dia3_numentry_pane

0xef44,	// (0x0004d2fc) dia3_list_pane

0x9d9f,	// (0x00048157) scroll_pane_cp12

0xa290,	// (0x00048648) bg_dia3_numentry_pane

0x9daa,	// (0x00048162) dia3_numentry_pane_t1

0x9db9,	// (0x00048171) cell_dia3_key_num_pane

0x9dc1,	// (0x00048179) cell_dia3_key0_fun_pane_ParamLimits

0x9dc1,	// (0x00048179) cell_dia3_key0_fun_pane

0x9dce,	// (0x00048186) cell_dia3_key1_fun_pane_ParamLimits

0x9dce,	// (0x00048186) cell_dia3_key1_fun_pane

0x9ddb,	// (0x00048193) dia3_listrow_pane

0xe31f,	// (0x0004c6d7) bg_dia3_numentry_pane_g1

0xa290,	// (0x00048648) bg_button_pane_cp21

0x9de8,	// (0x000481a0) cell_dia3_key_num_pane_t1

0x9df6,	// (0x000481ae) cell_dia3_key_num_pane_t2

0x9e05,	// (0x000481bd) cell_dia3_key_num_pane_t3

0x9e14,	// (0x000481cc) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004e2b0) cell_dia3_key_num_pane_t

0xa290,	// (0x00048648) bg_button_pane_cp19

0x9e23,	// (0x000481db) cell_dia3_key0_fun_pane_g1

0xa290,	// (0x00048648) bg_button_pane_cp20

0x9e2b,	// (0x000481e3) cell_dia3_key1_fun_pane_g1

0x9e33,	// (0x000481eb) area_left_week_number_pane

0x9e46,	// (0x000481fe) area_top_day_name_pane

0x9e54,	// (0x0004820c) frame_month_view_pane

0xef4f,	// (0x0004d307) grid_month_view_pane

0x9e69,	// (0x00048221) cell_top_day_name_pane_ParamLimits

0x9e69,	// (0x00048221) cell_top_day_name_pane

0x9e85,	// (0x0004823d) cell_area_left_week_number_pane_ParamLimits

0x9e85,	// (0x0004823d) cell_area_left_week_number_pane

0x9ea6,	// (0x0004825e) cell_month_view_pane_ParamLimits

0x9ea6,	// (0x0004825e) cell_month_view_pane

0xef5d,	// (0x0004d315) frm_month_g1

0x9ed2,	// (0x0004828a) frm_month_g2

0x9ee3,	// (0x0004829b) frm_month_g3

0x9ef4,	// (0x000482ac) frm_month_g4

0x9f05,	// (0x000482bd) frm_month_g5

0x9f16,	// (0x000482ce) frm_month_g6

0x9f29,	// (0x000482e1) frm_month_g7

0xef6a,	// (0x0004d322) frm_month_g8

0x9f3c,	// (0x000482f4) frm_month_g9

0x9f49,	// (0x00048301) frm_month_g10

0x9f56,	// (0x0004830e) frm_month_g11

0x9f63,	// (0x0004831b) frm_month_g12

0x9f70,	// (0x00048328) frm_month_g13

0x9f7f,	// (0x00048337) frm_month_g14

0x9f8e,	// (0x00048346) frm_month_g15

0x9f9d,	// (0x00048355) frm_month_g16

0x000f,

0xff01,	// (0x0004e2b9) frm_month_g

0xef8e,	// (0x0004d346) cell_top_day_name_pane_t1

0x9fac,	// (0x00048364) cell_area_left_week_number_pane_g1

0x9fbb,	// (0x00048373) cell_area_left_week_number_pane_t1

0xd0ad,	// (0x0004b465) cell_month_view_pane_g1

0x9fd1,	// (0x00048389) cell_month_view_pane_t1

0xa290,	// (0x00048648) main_fps_pane

0xe765,	// (0x0004cb1d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe765,	// (0x0004cb1d) cmail_ddmenu_btn02_pane_cp1

0xe781,	// (0x0004cb39) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe781,	// (0x0004cb39) cmail_ddmenu_btn02_pane_cp2

0x97f7,	// (0x00047baf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97f7,	// (0x00047baf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004e1de) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004e1de) cmail_ddmenu_btn02_pane_g

0x9815,	// (0x00047bcd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9815,	// (0x00047bcd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004e1e3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004e1e3) cmail_ddmenu_btn02_pane_t

0x9fe7,	// (0x0004839f) fps_text_pane_ParamLimits

0x9fe7,	// (0x0004839f) fps_text_pane

0x9ff4,	// (0x000483ac) main_fps_pane_g1_ParamLimits

0x9ff4,	// (0x000483ac) main_fps_pane_g1

0xa000,	// (0x000483b8) wait_bar_pane_cp010_ParamLimits

0xa000,	// (0x000483b8) wait_bar_pane_cp010

0xa00c,	// (0x000483c4) fps_text_pane_t1_ParamLimits

0xa00c,	// (0x000483c4) fps_text_pane_t1

0x73af,	// (0x00045767) cam4_image_uncrop_pane_g1

0x73b8,	// (0x00045770) cam4_image_uncrop_pane_g2

0x73c1,	// (0x00045779) cam4_image_uncrop_pane_g3

0x73ca,	// (0x00045782) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004dca6) cam4_image_uncrop_pane_g

0x9ddb,	// (0x00048193) dia3_listrow_pane_ParamLimits

0xa290,	// (0x00048648) main_phob2_pane

0x9476,	// (0x0004782e) cell_tport_appsw_pane_cp02_ParamLimits

0x9476,	// (0x0004782e) cell_tport_appsw_pane_cp02

0x9485,	// (0x0004783d) cell_tport_appsw_pane_cp03_ParamLimits

0x9485,	// (0x0004783d) cell_tport_appsw_pane_cp03

0xa290,	// (0x00048648) phob2_contact_card_pane

0xa290,	// (0x00048648) phob2_listscroll_pane

0xefa1,	// (0x0004d359) phob2_list_pane

0xefa9,	// (0x0004d361) scroll_pane_cp034

0xa025,	// (0x000483dd) phob2_cc_data_pane_ParamLimits

0xa025,	// (0x000483dd) phob2_cc_data_pane

0xa03c,	// (0x000483f4) phob2_cc_listscroll_pane_ParamLimits

0xa03c,	// (0x000483f4) phob2_cc_listscroll_pane

0xa058,	// (0x00048410) list_double_large_graphic_phob2_pane_ParamLimits

0xa058,	// (0x00048410) list_double_large_graphic_phob2_pane

0xa070,	// (0x00048428) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa070,	// (0x00048428) list_double_large_graphic_phob2_pane_g1

0x1e2f,	// (0x000401e7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e2f,	// (0x000401e7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004e2da) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004e2da) list_double_large_graphic_phob2_pane_g

0x1e3b,	// (0x000401f3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e3b,	// (0x000401f3) list_double_large_graphic_phob2_pane_t1

0x1e50,	// (0x00040208) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e50,	// (0x00040208) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004e2df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004e2df) list_double_large_graphic_phob2_pane_t

0xa290,	// (0x00048648) list_highlight_pane_cp024

0xa086,	// (0x0004843e) phob2_cc_button_pane

0xa08e,	// (0x00048446) phob2_cc_data_pane_g1_ParamLimits

0xa08e,	// (0x00048446) phob2_cc_data_pane_g1

0xa0a2,	// (0x0004845a) phob2_cc_data_pane_g2_ParamLimits

0xa0a2,	// (0x0004845a) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004e2e4) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004e2e4) phob2_cc_data_pane_g

0xa0b1,	// (0x00048469) phob2_cc_data_pane_t1_ParamLimits

0xa0b1,	// (0x00048469) phob2_cc_data_pane_t1

0xa0ca,	// (0x00048482) phob2_cc_data_pane_t2_ParamLimits

0xa0ca,	// (0x00048482) phob2_cc_data_pane_t2

0xa0e3,	// (0x0004849b) phob2_cc_data_pane_t3_ParamLimits

0xa0e3,	// (0x0004849b) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004e2e9) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004e2e9) phob2_cc_data_pane_t

0xefb1,	// (0x0004d369) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0004d369) phob2_cc_list_pane

0xdd5d,	// (0x0004c115) scroll_pane_cp035_ParamLimits

0xdd5d,	// (0x0004c115) scroll_pane_cp035

0xb939,	// (0x00049cf1) bg_button_pane_cp033

0xefbd,	// (0x0004d375) phob2_cc_button_pane_g1

0xefc9,	// (0x0004d381) phob2_cc_button_pane_t1

0xefde,	// (0x0004d396) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004e2f0) phob2_cc_button_pane_t

0xa0fc,	// (0x000484b4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa0fc,	// (0x000484b4) list_double_large_graphic_phob2_cc_pane

0xa14b,	// (0x00048503) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa14b,	// (0x00048503) list_double_large_graphic_phob2_cc_pane_g1

0x1e62,	// (0x0004021a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e62,	// (0x0004021a) list_double_large_graphic_phob2_cc_pane_g2

0x1e6e,	// (0x00040226) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e6e,	// (0x00040226) list_double_large_graphic_phob2_cc_pane_g3

0x1e7a,	// (0x00040232) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e7a,	// (0x00040232) list_double_large_graphic_phob2_cc_pane_g4

0x1e86,	// (0x0004023e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e86,	// (0x0004023e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004e2f5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004e2f5) list_double_large_graphic_phob2_cc_pane_g

0x1e92,	// (0x0004024a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e92,	// (0x0004024a) list_double_large_graphic_phob2_cc_pane_t1

0x1ebb,	// (0x00040273) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ebb,	// (0x00040273) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004e300) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004e300) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0004d3a8) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0004d3a8) list_highlight_pane_cp025

0xb939,	// (0x00049cf1) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0004d375) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0004d381) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0004d396) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004e2f0) phob2_cc_button_pane_t_ParamLimits

0x21c3,	// (0x0004057b) popup_wgtman_window

0xd980,	// (0x0004bd38) scroll_pane_cp038

0x9ba3,	// (0x00047f5b) wgtman_btn_pane_cp_01_ParamLimits

0x9ba3,	// (0x00047f5b) wgtman_btn_pane_cp_01

0xeffe,	// (0x0004d3b6) wgtman_content_pane

0xf007,	// (0x0004d3bf) wgtman_heading_pane

0xa290,	// (0x00048648) bg_heading_pane_cp02

0xf010,	// (0x0004d3c8) wgtman_heading_pane_g1

0xf018,	// (0x0004d3d0) wgtman_heading_pane_t1

0xf026,	// (0x0004d3de) scroll_pane_cp036

0xf02e,	// (0x0004d3e6) wgtman_list_pane

0xec24,	// (0x0004cfdc) wgtman_list_pane_t1_ParamLimits

0xec24,	// (0x0004cfdc) wgtman_list_pane_t1

0x730c,	// (0x000456c4) cam4_grid_pane

0x1044,	// (0x0003f3fc) bg_button_pane_cp015_ParamLimits

0x800f,	// (0x000463c7) bg_button_pane_cp016_ParamLimits

0x8022,	// (0x000463da) bg_button_pane_cp017_ParamLimits

0x1088,	// (0x0003f440) popup_vitu2_query_window_g3_ParamLimits

0x1088,	// (0x0003f440) popup_vitu2_query_window_g3

0x1101,	// (0x0003f4b9) popup_vitu2_query_window_t6_ParamLimits

0x1101,	// (0x0003f4b9) popup_vitu2_query_window_t6

0x112c,	// (0x0003f4e4) popup_vitu2_query_window_t7_ParamLimits

0x112c,	// (0x0003f4e4) popup_vitu2_query_window_t7

0xec3e,	// (0x0004cff6) cam4_grid_pane_g1

0xec47,	// (0x0004cfff) cam4_grid_pane_g2

0xf036,	// (0x0004d3ee) cam4_grid_pane_g3

0xf03f,	// (0x0004d3f7) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004e305) cam4_grid_pane_g

0x30d7,	// (0x0004148f) aid_placing_vt_slider_lsc_ParamLimits

0x340a,	// (0x000417c2) vidtel_button_pane_ParamLimits

0x340a,	// (0x000417c2) vidtel_button_pane

0xa290,	// (0x00048648) bg_button_pane_cp034

0xf04a,	// (0x0004d402) vidtel_button_pane_g1

0xf052,	// (0x0004d40a) vidtel_button_pane_t1

0xda84,	// (0x0004be3c) aid_size_vtel_slider_touch

0xdd5d,	// (0x0004c115) scroll_pane_cp039

0x8cfb,	// (0x000470b3) ncim_query_button_pane_cp01_ParamLimits

0x8d1a,	// (0x000470d2) ncimui_query_pane_g1_ParamLimits

0xb939,	// (0x00049cf1) input_focus_pane_cp012_ParamLimits

0xe35d,	// (0x0004c715) ncim_query_entry_pane_t1_ParamLimits

0xdd5d,	// (0x0004c115) scroll_pane_cp039_ParamLimits

0xb4ba,	// (0x00049872) navi_pane_bcale_mc_g1

0xb4c2,	// (0x0004987a) navi_pane_bcale_mc_t1

0xe7cc,	// (0x0004cb84) main_sp_fs_email_pane_g1

0xe7d8,	// (0x0004cb90) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004e096) main_sp_fs_email_pane_g

0xea71,	// (0x0004ce29) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea71,	// (0x0004ce29) list_single_cale_mrui_row_pane_g3

0x1d3c,	// (0x000400f4) list_single_recal_day_pane_g5_event_pane

0x1d52,	// (0x0004010a) list_single_recal_day_pane_g7

0xf068,	// (0x0004d420) list_recal_day_event_pane_cp01

0xf071,	// (0x0004d429) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0004d431) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0004d439) list_recal_vselct_pane_cp01

0xda94,	// (0x0004be4c) list_recal_day_event_pane_cp01_g1

0x1ee4,	// (0x0004029c) list_recal_day_event_pane_cp01_t1

0x1d5a,	// (0x00040112) list_single_recal_day_pane_t1_ParamLimits

0x1d6c,	// (0x00040124) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004e1f3) list_single_recal_day_pane_t_ParamLimits

0xa93d,	// (0x00048cf5) bg_notes_pane_ParamLimits

0xa9e0,	// (0x00048d98) list_notes_pane_ParamLimits

0x24dd,	// (0x00040895) scroll_pane_cp06_ParamLimits

0xaa02,	// (0x00048dba) main_notes_pane_ParamLimits

0xa290,	// (0x00048648) main_welc_pane

0xa15c,	// (0x00048514) main_welc_body_pane_ParamLimits

0xa15c,	// (0x00048514) main_welc_body_pane

0xa177,	// (0x0004852f) main_welc_opti_pane_ParamLimits

0xa177,	// (0x0004852f) main_welc_opti_pane

0xa1ac,	// (0x00048564) main_welc_pane_t1_ParamLimits

0xa1ac,	// (0x00048564) main_welc_pane_t1

0xa1ca,	// (0x00048582) main_welc_body_row_pane_ParamLimits

0xa1ca,	// (0x00048582) main_welc_body_row_pane

0xd6fb,	// (0x0004bab3) main_welc_opti_row_pane_ParamLimits

0xd6fb,	// (0x0004bab3) main_welc_opti_row_pane

0xf08b,	// (0x0004d443) main_welc_opti_row_pane_g1

0xa1e4,	// (0x0004859c) main_welc_opti_row_pane_t1

0xf093,	// (0x0004d44b) main_welc_body_row_pane_t1

0xedee,	// (0x0004d1a6) popup_notif_wgt_heading_pane

0xee08,	// (0x0004d1c0) aid_size_list_notif_wgt_del_ParamLimits

0xee15,	// (0x0004d1cd) list_notif_wgt_row_pane_g1_ParamLimits

0xee21,	// (0x0004d1d9) list_notif_wgt_row_pane_g2_ParamLimits

0xee30,	// (0x0004d1e8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004e25a) list_notif_wgt_row_pane_g_ParamLimits

0xee3d,	// (0x0004d1f5) list_notif_wgt_row_pane_t1_ParamLimits

0xee53,	// (0x0004d20b) list_notif_wgt_row_pane_t2_ParamLimits

0xee65,	// (0x0004d21d) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004e261) list_notif_wgt_row_pane_t_ParamLimits

0x9c2f,	// (0x00047fe7) listrow_wgtman_pane_g1_ParamLimits

0x9c3c,	// (0x00047ff4) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004e28a) listrow_wgtman_pane_g_ParamLimits

0x1ddf,	// (0x00040197) listrow_wgtman_pane_t1_ParamLimits

0x1df7,	// (0x000401af) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004e28f) listrow_wgtman_pane_t_ParamLimits

0x1e1d,	// (0x000401d5) wait_bar_pane_cp09_ParamLimits

0xa290,	// (0x00048648) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004d45a) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004d462) popup_notif_wgt_heading_pane_t1

0xa290,	// (0x00048648) main_vids_pane

0xa290,	// (0x00048648) vids_listscroll_pane

0xa1f3,	// (0x000485ab) scroll_pane_cp040

0xa290,	// (0x00048648) vids_list_pane

0xa1fe,	// (0x000485b6) vids_list_double_pane_ParamLimits

0xa1fe,	// (0x000485b6) vids_list_double_pane

0xa212,	// (0x000485ca) vids_list_double_pane_g1

0xa21b,	// (0x000485d3) vids_list_double_pane_t1

0xa22b,	// (0x000485e3) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004e313) vids_list_double_pane_t

0xb939,	// (0x00049cf1) main_ncimui_pane_ParamLimits

0x8b3c,	// (0x00046ef4) main_ncimui_pane_g1_ParamLimits

0x8b4a,	// (0x00046f02) main_ncimui_pane_g2_ParamLimits

0x8b4a,	// (0x00046f02) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004df9b) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004df9b) main_ncimui_pane_g

0xa192,	// (0x0004854a) main_welc_pane_g1_ParamLimits

0xa192,	// (0x0004854a) main_welc_pane_g1

0xa19e,	// (0x00048556) main_welc_pane_g2_ParamLimits

0xa19e,	// (0x00048556) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004e30e) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004e30e) main_welc_pane_g

0xa93d,	// (0x00048cf5) listscroll_mce_pane_ParamLimits

0xb611,	// (0x000499c9) wait_bar_pane_cp10

0xca42,	// (0x0004adfa) main_cale_day_pane_ParamLimits

0xca42,	// (0x0004adfa) main_cale_week_pane_ParamLimits

0xa93d,	// (0x00048cf5) main_messa_pane_ParamLimits

0x6634,	// (0x000449ec) main_clock2_btn_pane_ParamLimits

0x6634,	// (0x000449ec) main_clock2_btn_pane

0xd235,	// (0x0004b5ed) main_clock2_btn_pane_cp01_ParamLimits

0xd235,	// (0x0004b5ed) main_clock2_btn_pane_cp01

0xea42,	// (0x0004cdfa) list_cale_mrui_pane_ParamLimits

0xee9b,	// (0x0004d253) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004e268) main_cf0_pane_g

0x9e33,	// (0x000481eb) area_left_week_number_pane_ParamLimits

0x9e46,	// (0x000481fe) area_top_day_name_pane_ParamLimits

0x9e54,	// (0x0004820c) frame_month_view_pane_ParamLimits

0xef4f,	// (0x0004d307) grid_month_view_pane_ParamLimits

0xef5d,	// (0x0004d315) frm_month_g1_ParamLimits

0x9ed2,	// (0x0004828a) frm_month_g2_ParamLimits

0x9ee3,	// (0x0004829b) frm_month_g3_ParamLimits

0x9ef4,	// (0x000482ac) frm_month_g4_ParamLimits

0x9f05,	// (0x000482bd) frm_month_g5_ParamLimits

0x9f16,	// (0x000482ce) frm_month_g6_ParamLimits

0x9f29,	// (0x000482e1) frm_month_g7_ParamLimits

0xef6a,	// (0x0004d322) frm_month_g8_ParamLimits

0x9f3c,	// (0x000482f4) frm_month_g9_ParamLimits

0x9f49,	// (0x00048301) frm_month_g10_ParamLimits

0x9f56,	// (0x0004830e) frm_month_g11_ParamLimits

0x9f63,	// (0x0004831b) frm_month_g12_ParamLimits

0x9f70,	// (0x00048328) frm_month_g13_ParamLimits

0x9f7f,	// (0x00048337) frm_month_g14_ParamLimits

0x9f8e,	// (0x00048346) frm_month_g15_ParamLimits

0x9f9d,	// (0x00048355) frm_month_g16_ParamLimits

0xff01,	// (0x0004e2b9) frm_month_g_ParamLimits

0xef8e,	// (0x0004d346) cell_top_day_name_pane_t1_ParamLimits

0x9fac,	// (0x00048364) cell_area_left_week_number_pane_g1_ParamLimits

0x9fbb,	// (0x00048373) cell_area_left_week_number_pane_t1_ParamLimits

0xd0ad,	// (0x0004b465) cell_month_view_pane_g1_ParamLimits

0x9fd1,	// (0x00048389) cell_month_view_pane_t1_ParamLimits

0xa935,	// (0x00048ced) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004d470) main_clock2_btn_pane_t1

0xb939,	// (0x00049cf1) listscroll_cmail_pane_ParamLimits

0xe7cc,	// (0x0004cb84) main_sp_fs_email_pane_g1_ParamLimits

0xe7d8,	// (0x0004cb90) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004e096) main_sp_fs_email_pane_g_ParamLimits

0xeb4a,	// (0x0004cf02) list_recal_day_pane_ParamLimits

0xeb5b,	// (0x0004cf13) mian_recal_day_pane_t1

0x16f0,	// (0x0003faa8) list_single_dyc_row_text_pane_t4_ParamLimits

0x16f0,	// (0x0003faa8) list_single_dyc_row_text_pane_t4

0x172d,	// (0x0003fae5) list_single_dyc_row_text_pane_t5_ParamLimits

0x172d,	// (0x0003fae5) list_single_dyc_row_text_pane_t5

0x17a3,	// (0x0003fb5b) list_single_dyc_row_text_pane_t6_ParamLimits

0x17a3,	// (0x0003fb5b) list_single_dyc_row_text_pane_t6

0x41cf,	// (0x00042587) aid_mgn_list_cale_time_pane

0xb939,	// (0x00049cf1) main_gallery2_pane_ParamLimits

0xd249,	// (0x0004b601) main_clock2_pane_cp01_t1

0xd257,	// (0x0004b60f) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0004db78) main_clock2_pane_cp01_t

0x29d9,	// (0x00040d91) cale_week_scroll_pane_g16_ParamLimits

0x29d9,	// (0x00040d91) cale_week_scroll_pane_g16

0xabb8,	// (0x00048f70) vorec_slider_pane

0xf052,	// (0x0004d40a) vidtel_button_pane_t1_ParamLimits

0x9878,	// (0x00047c30) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9878,	// (0x00047c30) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9887,	// (0x00047c3f) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9887,	// (0x00047c3f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0004e216) main_fs_bigclock_clock_pane_g_ParamLimits

0x9897,	// (0x00047c4f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x98ac,	// (0x00047c64) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0004e21f) main_fs_bigclock_clock_pane_t_ParamLimits

0x5e8a,	// (0x00044242) main_mup3_lyrics_pane_ParamLimits

0x5e8a,	// (0x00044242) main_mup3_lyrics_pane

0xa261,	// (0x00048619) main_mup3_lyrics_pane_t1_ParamLimits

0xa261,	// (0x00048619) main_mup3_lyrics_pane_t1

0x6c7d,	// (0x00045035) aid_main_mp4_pane_t1_area

0x6c87,	// (0x0004503f) aid_main_mp4_pane_t2_area

0x6d94,	// (0x0004514c) main_mp4_pane_g7_ParamLimits

0x6d94,	// (0x0004514c) main_mp4_pane_g7

0x6da0,	// (0x00045158) main_mp4_pane_g8_ParamLimits

0x6da0,	// (0x00045158) main_mp4_pane_g8

0x71b0,	// (0x00045568) aid_call6_pane_g1_size

0xa12a,	// (0x000484e2) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa12a,	// (0x000484e2) list_double_large_graphic_phob2_other_pane

0xa288,	// (0x00048640) list_double_large_graphic_phob2_other_pane_g1

0xa290,	// (0x00048648) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
